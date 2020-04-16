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
 fint prob10_auxcom_[1] = { 0 /* nlc */ };
 fint prob10_funcom_[13] = {
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

 real prob10_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.,
		0.,
		10.,
		-1.7e308,
		7.,
		-1.7e308,
		19.};

 real prob10_x0comn_[2] = {
		0.,
		0. };

 static real prob10_pd[7];
static real prob10_old_x[2];
static int prob10_xkind = -1;

 static int
prob10_xcheck(real *x)
{
	real *x1 = prob10_old_x, *xe = x + 2;
	errno = 0;
	if (prob10_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	prob10_xkind = 0;
	return 1;
	}
 real
prob10_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[4];
	fint wantfg = *needfg;
	if (prob10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 2. * x[0];
	v[1] = v[0] + -10.;
	prob10_pd[0] = v[1] * v[1];
	prob10_pd[1] = v[1] + v[1];
	v[1] = 1.1 * prob10_pd[0];
	v[0] = x[1] + -5.;
	prob10_pd[2] = v[0] * v[0];
	prob10_pd[3] = v[0] + v[0];
	v[0] = 1.1 * prob10_pd[2];
	v[1] += v[0];
	v[0] = 2. * x[0];
	v[2] = v[0] + -10.;
	v[0] = v[2] * v[2];
	prob10_pd[4] = v[2] + v[2];
	v[2] = x[1] + -5.;
	v[3] = v[2] * v[2];
	prob10_pd[5] = v[2] + v[2];
	v[2] = v[0] + v[3];
	v[3] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	prob10_pd[6] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[1] += v[3];
	;}

	if (wantfg & 2) {
	dv[0] = prob10_pd[6];
	dv[0] *= prob10_pd[5];
	g[1] = dv[0];
	dv[1] = prob10_pd[6]*prob10_pd[4];
	g[0] = dv[1]*2.;
	dv[2] = 1.1*prob10_pd[3];
	g[1] += dv[2];
	dv[3] = 1.1*prob10_pd[1];
	g[0] += dv[3]*2.;
	}

	return v[1];
}

 void
prob10_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (prob10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 0.7*x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 2.5*x[0];
	t1 += x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 0.7;
	J[2] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 2.5;
	J[3] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
