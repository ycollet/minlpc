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
 fint filter_auxcom_[1] = { 1 /* nlc */ };
 fint filter_funcom_[11] = {
	2 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	2 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,

	/* rownos */
	1,
	1 };

 real filter_boundc_[1+4+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		10.,
		1.7e308,
		900.,
		1.7e308,
		0.,
		0.};

 real filter_x0comn_[2] = {
		10.,
		900. };

 static real filter_pd[11];
static real filter_old_x[2];
static int filter_xkind = -1;

 static int
filter_xcheck(real *x)
{
	real *x1 = filter_old_x, *xe = x + 2;
	errno = 0;
	if (filter_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	filter_xkind = 0;
	return 1;
	}
 real
filter_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[6], dv[2];
	fint wantfg = *needfg;
	if (filter_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = x[1] / x[0];
	filter_pd[3] = 1. / x[0];
	filter_pd[4] = -v[0] * filter_pd[3];
	filter_pd[6] = v[0] + 10.;
	v[0] = 1440. * x[1];
	filter_pd[5] = v[0] + -288000.;
	v[0] = filter_pd[6] * filter_pd[5];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = 1.e+07 / v[0];
	filter_pd[7] = -v[3] / v[0];
	v[0] = pow(v[3], 0.86);
	if (errno) in_trouble2("pow",v[3],0.86);
	if (v[3] > 0.) {
	filter_pd[8] = 0.86*(v[0]/v[3]);
	} else if (0.86 > 1.) {
	filter_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.86);
	}
	v[0] *= 116.;
	v[3] = 47300. * x[1];
	v[4] = x[1] + -200.;
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[5] = v[3] / v[4];
	filter_pd[9] = 1. / v[4];
	filter_pd[10] = -v[5] * filter_pd[9];
	v[0] += v[5];
	v[0] += -47300.;
	;}

	if (wantfg & 2) {
	g[1] = filter_pd[10];
	g[1] += filter_pd[9]*47300.;
	dv[0] = 116.*filter_pd[8];
	dv[0] *= filter_pd[7];
	dv[1] = dv[0]*filter_pd[6];
	dv[0] *= filter_pd[5];
	g[1] += dv[1]*1440.;
	g[0] = dv[0]*filter_pd[4];
	g[1] += dv[0]*filter_pd[3];
	}

	return v[0];
}

 void
filter_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (filter_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 41.1522633744856 / x[0];
	filter_pd[0] = -v[0] / x[0];
	filter_pd[1] = log10(v[0]);
	if (errno) in_trouble("log10",v[0]);
	filter_pd[2] = 0.43429448190325176 / v[0];
	v[0] = -2100. * filter_pd[1];
	t1 = v[0] + x[1];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -2100.*filter_pd[2];
	J[0] = dv[0]*filter_pd[0];
	J[1] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
