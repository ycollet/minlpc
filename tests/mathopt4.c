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
 fint mathopt4_auxcom_[1] = { 1 /* nlc */ };
 fint mathopt4_funcom_[13] = {
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

 real mathopt4_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-10.,
		10.,
		-10.,
		10.,
		0.,
		0.,
		-1.7e308,
		2.};

 real mathopt4_x0comn_[2] = {
		0.,
		0. };

 static real mathopt4_pd[9];
static real mathopt4_old_x[2];
static int mathopt4_xkind = -1;

 static int
mathopt4_xcheck(real *x)
{
	real *x1 = mathopt4_old_x, *xe = x + 2;
	errno = 0;
	if (mathopt4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt4_xkind = 0;
	return 1;
	}
 real
mathopt4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[3];
	fint wantfg = *needfg;
	if (mathopt4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	mathopt4_pd[2] = x[0] * x[0];
	mathopt4_pd[3] = x[0] + x[0];
	v[0] = 2. * mathopt4_pd[2];
	v[1] = x[1] * x[1];
	mathopt4_pd[4] = x[1] + x[1];
	v[2] = v[0] - v[1];
	v[1] = v[2] * v[2];
	mathopt4_pd[5] = v[2] + v[2];
	mathopt4_pd[6] = x[0] * x[0];
	mathopt4_pd[7] = x[0] + x[0];
	v[2] = -6. * mathopt4_pd[6];
	v[0] = x[1] + v[2];
	v[2] = v[0] * v[0];
	mathopt4_pd[8] = v[0] + v[0];
	v[0] = v[1] + v[2];
	;}

	if (wantfg & 2) {
	dv[0] = mathopt4_pd[8];
	g[1] = mathopt4_pd[8];
	dv[0] = -dv[0]*6.;
	g[0] = dv[0]*mathopt4_pd[7];
	dv[1] = -mathopt4_pd[5];
	g[1] += dv[1]*mathopt4_pd[4];
	dv[2] = mathopt4_pd[5]*2.;
	g[0] += dv[2]*mathopt4_pd[3];
	}

	return v[0];
}

 void
mathopt4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (mathopt4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 2. * x[0];
	v[1] = 3. * x[1];
	v[2] = v[0] + v[1];
	mathopt4_pd[0] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	mathopt4_pd[1] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[2] = -100. * mathopt4_pd[0];
	t1 = v[2] + x[0];
	t1 += -10.*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -100.*mathopt4_pd[1];
	dv[1] = dv[0];
	J[2] = dv[1]*3. + -10.;
	J[0] = dv[0]*2. + 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[3] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
