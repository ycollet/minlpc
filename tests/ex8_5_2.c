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
 fint ex8_5_2_auxcom_[1] = { 2 /* nlc */ };
 fint ex8_5_2_funcom_[27] = {
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

 real ex8_5_2_boundc_[1+12+8] /* Infinity, variable bounds, constraint bounds */ = {
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

 real ex8_5_2_x0comn_[6] = {
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		2.,
		1.,
		1. };

 static real ex8_5_2_pd[24];
static real ex8_5_2_old_x[6];
static int ex8_5_2_xkind = -1;

 static int
ex8_5_2_xcheck(real *x)
{
	real *x1 = ex8_5_2_old_x, *xe = x + 6;
	errno = 0;
	if (ex8_5_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_5_2_xkind = 0;
	return 1;
	}
 real
ex8_5_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (ex8_5_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex8_5_2_pd[13] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex8_5_2_pd[14] = 1. / x[0];
	v[0] = ex8_5_2_pd[13] * x[0];
	ex8_5_2_pd[15] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex8_5_2_pd[16] = 1. / x[1];
	v[1] = ex8_5_2_pd[15] * x[1];
	v[0] += v[1];
	ex8_5_2_pd[17] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex8_5_2_pd[18] = 1. / x[2];
	v[1] = ex8_5_2_pd[17] * x[2];
	v[0] += v[1];
	v[1] = x[3] - x[5];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[5] / v[1];
	ex8_5_2_pd[19] = 1. / v[1];
	ex8_5_2_pd[20] = -v[2] * ex8_5_2_pd[19];
	v[0] += v[2];
	v[2] = x[3] - x[5];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex8_5_2_pd[21] = 1. / v[2];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = 2. * x[4];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = v[2] / x[3];
	ex8_5_2_pd[22] = 1. / x[3];
	ex8_5_2_pd[23] = -v[1] * ex8_5_2_pd[22];
	v[2] = -v[1];
	v[0] += v[2];
	rv = v[0] + 0.585616681390832*x[0];
	rv += 3.53797016206289*x[1];
	rv += 2.18345516206289*x[2];
	;}

	if (wantfg & 2) {
	g[3] = -ex8_5_2_pd[23];
	g[4] = -ex8_5_2_pd[22]*2.;
	g[5] = ex8_5_2_pd[21];
	g[3] -= ex8_5_2_pd[21];
	g[5] += ex8_5_2_pd[19];
	g[5] -= ex8_5_2_pd[20];
	g[3] += ex8_5_2_pd[20];
	g[2] = ex8_5_2_pd[17] + 2.18345516206289;
	g[2] += x[2]*ex8_5_2_pd[18];
	g[1] = ex8_5_2_pd[15] + 3.53797016206289;
	g[1] += x[1]*ex8_5_2_pd[16];
	g[0] = ex8_5_2_pd[13] + 0.585616681390832;
	g[0] += x[0]*ex8_5_2_pd[14];
	}

	return rv;
}

 void
ex8_5_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4];
	real t1;
	fint wantfg = *needfg;
	if (ex8_5_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[3], 3.);
	if (errno) in_trouble2("pow",x[3],3.);
	if (x[3] != 0.) {
	ex8_5_2_pd[0] = 3.*(x[3]*x[3]);
	} else {
	ex8_5_2_pd[0] = 0.;
	}
	ex8_5_2_pd[1] = x[3] * x[3];
	ex8_5_2_pd[2] = x[3] + x[3];
	ex8_5_2_pd[3] = x[5] + 1.;
	v[2] = ex8_5_2_pd[1] * ex8_5_2_pd[3];
	v[3] = -v[2];
	v[0] += v[3];
	v[3] = x[4] * x[3];
	v[0] += v[3];
	v[3] = x[4] * x[5];
	v[2] = -v[3];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	ex8_5_2_pd[4] = 0.37943 * x[0];
	v[0] = ex8_5_2_pd[4] * x[0];
	ex8_5_2_pd[5] = 0.75885 * x[0];
	v[1] = ex8_5_2_pd[5] * x[1];
	v[0] += v[1];
	ex8_5_2_pd[6] = 0.48991 * x[0];
	v[1] = ex8_5_2_pd[6] * x[2];
	v[0] += v[1];
	ex8_5_2_pd[7] = 0.75885 * x[1];
	v[1] = ex8_5_2_pd[7] * x[0];
	v[0] += v[1];
	ex8_5_2_pd[8] = 0.8836 * x[1];
	v[1] = ex8_5_2_pd[8] * x[1];
	v[0] += v[1];
	ex8_5_2_pd[9] = 0.23612 * x[1];
	v[1] = ex8_5_2_pd[9] * x[2];
	v[0] += v[1];
	ex8_5_2_pd[10] = 0.48991 * x[2];
	v[1] = ex8_5_2_pd[10] * x[0];
	v[0] += v[1];
	ex8_5_2_pd[11] = 0.23612 * x[2];
	v[1] = ex8_5_2_pd[11] * x[1];
	v[0] += v[1];
	ex8_5_2_pd[12] = 0.63263 * x[2];
	v[1] = ex8_5_2_pd[12] * x[2];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.14998*x[0];
	t1 += -0.14998*x[1];
	t1 += -0.14998*x[2];
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

	J[12] = -x[4];
	J[10] = -x[5];
	J[9] = x[4];
	J[10] += x[3];
	J[12] -= ex8_5_2_pd[1];
	J[9] -= ex8_5_2_pd[3]*ex8_5_2_pd[2];
	J[9] += ex8_5_2_pd[0];

   /*** derivatives for constraint 2 ***/

	J[6] = -ex8_5_2_pd[12];
	J[6] -= x[2]*0.63263;
	J[3] = -ex8_5_2_pd[11];
	J[6] -= x[1]*0.23612;
	J[0] = -ex8_5_2_pd[10];
	J[6] -= x[0]*0.48991;
	J[6] -= ex8_5_2_pd[9];
	J[3] -= x[2]*0.23612;
	J[3] -= ex8_5_2_pd[8];
	J[3] -= x[1]*0.8836;
	J[0] -= ex8_5_2_pd[7];
	J[3] -= x[0]*0.75885;
	J[6] -= ex8_5_2_pd[6];
	J[0] -= x[2]*0.48991;
	J[3] -= ex8_5_2_pd[5];
	J[0] -= x[1]*0.75885;
	J[0] -= ex8_5_2_pd[4];
	J[0] -= x[0]*0.37943;
	J[11] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = -0.14998;
	J[4] = -0.14998;
	J[7] = -0.14998;
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
