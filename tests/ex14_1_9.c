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
 fint ex14_1_9_auxcom_[1] = { 2 /* nlc */ };
 fint ex14_1_9_funcom_[13] = {
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

 real ex14_1_9_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		100.,
		1000.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		-1.};

 real ex14_1_9_x0comn_[2] = {
		100.,
		0. };

 static real ex14_1_9_pd[14];
static real ex14_1_9_old_x[2];
static int ex14_1_9_xkind = -1;

 static int
ex14_1_9_xcheck(real *x)
{
	real *x1 = ex14_1_9_old_x, *xe = x + 2;
	errno = 0;
	if (ex14_1_9_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_1_9_xkind = 0;
	return 1;
	}
 real
ex14_1_9_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_1_9_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[1];
	;}

	if (wantfg & 2) {
	g[1] = 1.;
	}

	return rv;
}

 void
ex14_1_9_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex14_1_9_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = -7548.11926028431 / x[0];
	ex14_1_9_pd[0] = -v[0] / x[0];
	ex14_1_9_pd[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_9_pd[2] = ex14_1_9_pd[1];
	ex14_1_9_pd[3] = 4510067.11409396 * ex14_1_9_pd[1];
	v[0] = ex14_1_9_pd[3] * x[0];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[1] = -7548.11926028431 / x[0];
	ex14_1_9_pd[4] = -v[1] / x[0];
	ex14_1_9_pd[5] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex14_1_9_pd[6] = ex14_1_9_pd[5];
	v[1] = -2020510067.11409 * ex14_1_9_pd[5];
	v[2] = v[0] + v[1];
	t1 = v[2] + 0.00335570469798658*x[0];
	t1 += -x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = -7548.11926028431 / x[0];
	ex14_1_9_pd[7] = -v[0] / x[0];
	ex14_1_9_pd[8] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_9_pd[9] = ex14_1_9_pd[8];
	ex14_1_9_pd[10] = -4510067.11409396 * ex14_1_9_pd[8];
	v[0] = ex14_1_9_pd[10] * x[0];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[1] = -7548.11926028431 / x[0];
	ex14_1_9_pd[11] = -v[1] / x[0];
	ex14_1_9_pd[12] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex14_1_9_pd[13] = ex14_1_9_pd[12];
	v[1] = 2020510067.11409 * ex14_1_9_pd[12];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.00335570469798658*x[0];
	t1 += -x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -2020510067.11409*ex14_1_9_pd[6];
	J[0] = dv[0]*ex14_1_9_pd[4] + 0.00335570469798658;
	J[0] += ex14_1_9_pd[3];
	dv[1] = x[0]*4510067.11409396;
	dv[1] *= ex14_1_9_pd[2];
	J[0] += dv[1]*ex14_1_9_pd[0];
	J[2] = -1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = 2020510067.11409*ex14_1_9_pd[13];
	J[1] = dv[0]*ex14_1_9_pd[11] + -0.00335570469798658;
	J[1] += ex14_1_9_pd[10];
	dv[1] = -x[0]*4510067.11409396;
	dv[1] *= ex14_1_9_pd[9];
	J[1] += dv[1]*ex14_1_9_pd[7];
	J[3] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
