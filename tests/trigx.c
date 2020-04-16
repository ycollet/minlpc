#include <math.h>
#include <errno.h>
#ifndef fint
#ifndef Long
#include "arith.h"	/* for Long */
#ifndef Long
#define Long long
#endif
#endif
#define fint Long
#endif
#ifndef real
#define real double
#endif
#ifdef __cplusplus
extern "C" {
#endif
 real acosh_(real *);
 real asinh_(real *);
 real acoshd_(real *, real *);
 real asinhd_(real *, real *);
 void in_trouble(char *, real);
 void in_trouble2(char *, real, real);
 void domain_(char *, real *, fint);
 void zerdiv_(real *);
 fint trigx_auxcom_[1] = { 2 /* nlc */ };
 fint trigx_funcom_[13] = {
	2 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	4 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,

	/* rownos */
	1,
	2,
	1,
	2 };

 real trigx_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		0.,
		0.};

 real trigx_x0comn_[2] = {
		0.,
		0. };

 static real trigx_pd[4];
static real trigx_old_x[2];
static int trigx_xkind = -1;

 static int
trigx_xcheck(real *x)
{
	real *x1 = trigx_old_x, *xe = x + 2;
	errno = 0;
	if (trigx_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	trigx_xkind = 0;
	return 1;
	}
 real
trigx_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (trigx_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	v[1] = x[1] * x[1];
	v[2] = v[0] + v[1];
	;}

	if (wantfg & 2) {
	g[1] = x[1];
	g[1] += x[1];
	g[0] = x[0];
	g[0] += x[0];
	}

	return v[2];
}

 void
trigx_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (trigx_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 3. * x[0];
	v[1] = -5. * x[1];
	v[2] = v[0] + v[1];
	v[1] = cos(v[2]);
	if (errno) in_trouble("cos",v[2]);
	trigx_pd[0] = -sin(v[2]);
	v[2] = -v[1];
	v[1] = 2. * x[0];
	v[0] = 3. * x[1];
	v[3] = v[1] + v[0];
	v[0] = sin(v[3]);
	if (errno) in_trouble("sin",v[3]);
	trigx_pd[1] = cos(v[3]);
	if (errno) in_trouble("sin'",v[3]);
	v[3] = v[2] - v[0];
	t1 = v[3] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 3. * x[1];
	v[1] = x[0] + v[0];
	v[0] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	trigx_pd[2] = -sin(v[1]);
	v[1] = -2. * x[1];
	v[2] = x[0] + v[1];
	v[1] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	trigx_pd[3] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[2] = v[0] - v[1];
	t1 = v[2] + x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -trigx_pd[1];
	J[2] = dv[0]*3.;
	J[0] = -trigx_pd[1]*2. + 1.;
	dv[1] = -trigx_pd[0];
	J[2] -= dv[1]*5.;
	J[0] -= trigx_pd[0]*3.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -trigx_pd[3];
	J[1] = -trigx_pd[3];
	J[3] = -dv[0]*2. + 1.;
	dv[1] = trigx_pd[2];
	J[1] += trigx_pd[2];
	J[3] += dv[1]*3.;
	}
}
#ifdef __cplusplus
	}
#endif
