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
 fint ex8_5_6_auxcom_[1] = { 2 /* nlc */ };
 fint ex8_5_6_funcom_[27] = {
	6 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	14 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	11,
	13,
	15,

	/* rownos */
	1,
	3,
	4,
	2,
	3,
	4,
	2,
	3,
	4,
	1,
	1,
	2,
	1,
	3 };

 real ex8_5_6_boundc_[1+12+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.};

 real ex8_5_6_x0comn_[6] = {
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		2.,
		1.,
		1. };

 static real ex8_5_6_pd[33];
static real ex8_5_6_old_x[6];
static int ex8_5_6_xkind = -1;

 static int
ex8_5_6_xcheck(real *x)
{
	real *x1 = ex8_5_6_old_x, *xe = x + 6;
	errno = 0;
	if (ex8_5_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_5_6_xkind = 0;
	return 1;
	}
 real
ex8_5_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[4], rv;
	fint wantfg = *needfg;
	if (ex8_5_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex8_5_6_pd[19] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex8_5_6_pd[20] = 1. / x[0];
	v[0] = ex8_5_6_pd[19] * x[0];
	ex8_5_6_pd[21] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex8_5_6_pd[22] = 1. / x[1];
	v[1] = ex8_5_6_pd[21] * x[1];
	v[0] += v[1];
	ex8_5_6_pd[23] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex8_5_6_pd[24] = 1. / x[2];
	v[1] = ex8_5_6_pd[23] * x[2];
	v[0] += v[1];
	v[1] = x[3] - x[5];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex8_5_6_pd[25] = 1. / v[1];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = 2.41421356237309 * x[5];
	v[2] = x[3] + v[1];
	v[1] = -0.414213562373095 * x[5];
	v[3] = x[3] + v[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[1] = v[2] / v[3];
	ex8_5_6_pd[26] = 1. / v[3];
	ex8_5_6_pd[27] = -v[1] * ex8_5_6_pd[26];
	ex8_5_6_pd[28] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex8_5_6_pd[29] = 1. / v[1];
	ex8_5_6_pd[30] = 0.353553390593274 * ex8_5_6_pd[28];
	v[1] = ex8_5_6_pd[30] * x[4];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[3] = v[1] / x[5];
	ex8_5_6_pd[31] = 1. / x[5];
	ex8_5_6_pd[32] = -v[3] * ex8_5_6_pd[31];
	v[1] = -v[3];
	v[0] += v[1];
	v[0] += -1.;
	rv = v[0] + 1.42876598488588*x[0];
	rv += 1.27098480432594*x[1];
	rv += 1.62663700075562*x[2];
	rv += x[3];
	;}

	if (wantfg & 2) {
	g[5] = -ex8_5_6_pd[32];
	g[4] = -ex8_5_6_pd[31]*ex8_5_6_pd[30];
	dv[0] = -ex8_5_6_pd[31]*x[4];
	dv[0] *= 0.353553390593274;
	dv[0] *= ex8_5_6_pd[29];
	dv[1] = dv[0]*ex8_5_6_pd[27];
	dv[0] *= ex8_5_6_pd[26];
	dv[2] = dv[1];
	g[3] = dv[1] + 1.;
	g[5] -= dv[2]*0.414213562373095;
	dv[3] = dv[0];
	g[3] += dv[0];
	g[5] += dv[3]*2.41421356237309;
	g[5] += ex8_5_6_pd[25];
	g[3] -= ex8_5_6_pd[25];
	g[2] = ex8_5_6_pd[23] + 1.62663700075562;
	g[2] += x[2]*ex8_5_6_pd[24];
	g[1] = ex8_5_6_pd[21] + 1.27098480432594;
	g[1] += x[1]*ex8_5_6_pd[22];
	g[0] = ex8_5_6_pd[19] + 1.42876598488588;
	g[0] += x[0]*ex8_5_6_pd[20];
	}

	return rv;
}

 void
ex8_5_6_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex8_5_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[3], 3.);
	if (errno) in_trouble2("pow",x[3],3.);
	if (x[3] != 0.) {
	ex8_5_6_pd[0] = 3.*(x[3]*x[3]);
	} else {
	ex8_5_6_pd[0] = 0.;
	}
	ex8_5_6_pd[1] = x[3] * x[3];
	ex8_5_6_pd[2] = x[3] + x[3];
	ex8_5_6_pd[3] = 1. - x[5];
	v[2] = ex8_5_6_pd[1] * ex8_5_6_pd[3];
	v[3] = -v[2];
	v[0] += v[3];
	ex8_5_6_pd[4] = x[5] * x[5];
	ex8_5_6_pd[5] = x[5] + x[5];
	ex8_5_6_pd[6] = -3. * ex8_5_6_pd[4];
	v[3] = -2. * x[5];
	ex8_5_6_pd[7] = ex8_5_6_pd[6] + v[3];
	ex8_5_6_pd[7] += x[4];
	v[2] = ex8_5_6_pd[7] * x[3];
	v[0] += v[2];
	v[2] = x[4] * x[5];
	v[4] = -v[2];
	v[0] += v[4];
	v[4] = pow(x[5], 3.);
	if (errno) in_trouble2("pow",x[5],3.);
	if (x[5] != 0.) {
	ex8_5_6_pd[8] = 3.*(x[5]*x[5]);
	} else {
	ex8_5_6_pd[8] = 0.;
	}
	v[0] += v[4];
	v[4] = x[5] * x[5];
	ex8_5_6_pd[9] = x[5] + x[5];
	v[0] += v[4];
	c[0] = v[0];

  /***  constraint 2  ***/

	ex8_5_6_pd[10] = 0.142724 * x[0];
	v[0] = ex8_5_6_pd[10] * x[0];
	ex8_5_6_pd[11] = 0.206577 * x[0];
	v[1] = ex8_5_6_pd[11] * x[1];
	v[0] += v[1];
	ex8_5_6_pd[12] = 0.342119 * x[0];
	v[1] = ex8_5_6_pd[12] * x[2];
	v[0] += v[1];
	ex8_5_6_pd[13] = 0.206577 * x[1];
	v[1] = ex8_5_6_pd[13] * x[0];
	v[0] += v[1];
	ex8_5_6_pd[14] = 0.323084 * x[1];
	v[1] = ex8_5_6_pd[14] * x[1];
	v[0] += v[1];
	ex8_5_6_pd[15] = 0.547748 * x[1];
	v[1] = ex8_5_6_pd[15] * x[2];
	v[0] += v[1];
	ex8_5_6_pd[16] = 0.342119 * x[2];
	v[1] = ex8_5_6_pd[16] * x[0];
	v[0] += v[1];
	ex8_5_6_pd[17] = 0.547748 * x[2];
	v[1] = ex8_5_6_pd[17] * x[1];
	v[0] += v[1];
	ex8_5_6_pd[18] = 0.968906 * x[2];
	v[1] = ex8_5_6_pd[18] * x[2];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.0815247*x[0];
	t1 += -0.0907391*x[1];
	t1 += -0.13705*x[2];
	t1 += x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[12] = ex8_5_6_pd[9];
	J[12] += ex8_5_6_pd[8];
	J[12] -= x[4];
	J[10] = -x[5];
	J[9] = ex8_5_6_pd[7];
	J[10] += x[3];
	dv[0] = x[3];
	J[12] -= dv[0]*2.;
	dv[1] = -x[3]*3.;
	J[12] += dv[1]*ex8_5_6_pd[5];
	J[12] += ex8_5_6_pd[1];
	J[9] -= ex8_5_6_pd[3]*ex8_5_6_pd[2];
	J[9] += ex8_5_6_pd[0];

   /*** derivatives for constraint 2 ***/

	J[6] = -ex8_5_6_pd[18];
	J[6] -= x[2]*0.968906;
	J[3] = -ex8_5_6_pd[17];
	J[6] -= x[1]*0.547748;
	J[0] = -ex8_5_6_pd[16];
	J[6] -= x[0]*0.342119;
	J[6] -= ex8_5_6_pd[15];
	J[3] -= x[2]*0.547748;
	J[3] -= ex8_5_6_pd[14];
	J[3] -= x[1]*0.323084;
	J[0] -= ex8_5_6_pd[13];
	J[3] -= x[0]*0.206577;
	J[6] -= ex8_5_6_pd[12];
	J[0] -= x[2]*0.342119;
	J[3] -= ex8_5_6_pd[11];
	J[0] -= x[1]*0.206577;
	J[0] -= ex8_5_6_pd[10];
	J[0] -= x[0]*0.142724;
	J[11] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = -0.0815247;
	J[4] = -0.0907391;
	J[7] = -0.13705;
	J[13] = 1.;

   /*** derivatives for constraint 4 ***/

	J[2] = 1.;
	J[5] = 1.;
	J[8] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
