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
 fint nvs05_auxcom_[1] = { 8 /* nlc */ };
 fint nvs05_funcom_[41] = {
	8 /* nvar */,
	1 /* nobj */,
	9 /* ncon */,
	26 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	14,
	18,
	20,
	22,
	25,
	27,

	/* rownos */
	1,
	2,
	3,
	9,
	1,
	2,
	3,
	4,
	2,
	3,
	6,
	7,
	8,
	6,
	7,
	8,
	9,
	1,
	5,
	3,
	5,
	2,
	3,
	4,
	4,
	5 };

 real nvs05_boundc_[1+16+18] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.01,
		200.,
		0.01,
		200.,
		1.,
		200.,
		1.,
		200.,
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
		0.,
		0.,
		-13600.,
		1.7e308,
		-30000.,
		1.7e308,
		6000.,
		1.7e308,
		-0.25,
		1.7e308,
		0.,
		1.7e308};

 real nvs05_x0comn_[8] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		2.,
		1. };

 static real nvs05_pd[42];
static real nvs05_old_x[8];
static int nvs05_xkind = -1;

 static int
nvs05_xcheck(real *x)
{
	real *x1 = nvs05_old_x, *xe = x + 8;
	errno = 0;
	if (nvs05_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs05_xkind = 0;
	return 1;
	}
 real
nvs05_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[2];
	fint wantfg = *needfg;
	if (nvs05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs05_pd[36] = x[0] * x[0];
	nvs05_pd[37] = x[0] + x[0];
	nvs05_pd[38] = 1.10471 * nvs05_pd[36];
	v[0] = nvs05_pd[38] * x[1];
	nvs05_pd[39] = 0.04811 * x[2];
	nvs05_pd[40] = nvs05_pd[39] * x[3];
	nvs05_pd[41] = x[1] + 14.;
	v[2] = nvs05_pd[40] * nvs05_pd[41];
	v[3] = v[0] + v[2];
	;}

	if (wantfg & 2) {
	g[1] = nvs05_pd[40];
	g[3] = nvs05_pd[41]*nvs05_pd[39];
	dv[0] = nvs05_pd[41]*x[3];
	g[2] = dv[0]*0.04811;
	g[1] += nvs05_pd[38];
	dv[1] = x[1]*1.10471;
	g[0] = dv[1]*nvs05_pd[37];
	}

	return v[3];
}

 void
nvs05_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[6], dv[5];
	real t1;
	fint wantfg = *needfg;
	if (nvs05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = -4243.28147100424 / v[0];
	nvs05_pd[0] = -v[1] / v[0];
	t1 = v[1] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	nvs05_pd[1] = x[1] * x[1];
	nvs05_pd[2] = x[1] + x[1];
	v[0] = 0.25 * nvs05_pd[1];
	v[1] = 0.5 * x[2];
	v[2] = 0.5 * x[0];
	v[3] = v[1] + v[2];
	v[2] = v[3] * v[3];
	nvs05_pd[3] = v[3] + v[3];
	v[3] = v[0] + v[2];
	v[2] = sqrt(v[3]);
	if (errno) in_trouble("sqrt",v[3]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	nvs05_pd[4] = 0.5 / v[2];
	v[3] = -v[2];
	t1 = v[3] + x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 2121.64073550212 * x[1];
	nvs05_pd[5] = v[0] + 59405.9405940594;
	v[0] = nvs05_pd[5] * x[6];
	nvs05_pd[6] = x[0] * x[1];
	nvs05_pd[7] = x[1] * x[1];
	nvs05_pd[8] = x[1] + x[1];
	v[2] = 0.0833333333333333 * nvs05_pd[7];
	v[3] = 0.5 * x[2];
	v[4] = 0.5 * x[0];
	v[5] = v[3] + v[4];
	v[4] = v[5] * v[5];
	nvs05_pd[9] = v[5] + v[5];
	nvs05_pd[10] = v[2] + v[4];
	v[4] = nvs05_pd[6] * nvs05_pd[10];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[2] = v[0] / v[4];
	nvs05_pd[11] = 1. / v[4];
	nvs05_pd[12] = -v[2] * nvs05_pd[11];
	v[4] = -v[2];
	t1 = v[4] + x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = -0.5 * x[1];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	nvs05_pd[13] = 1. / x[6];
	nvs05_pd[14] = -v[1] * nvs05_pd[13];
	t1 = v[1] + x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] * x[4];
	nvs05_pd[15] = x[4] + x[4];
	nvs05_pd[16] = 2. * x[4];
	nvs05_pd[17] = nvs05_pd[16] * x[5];
	v[1] = nvs05_pd[17] * x[7];
	v[0] += v[1];
	v[1] = x[5] * x[5];
	nvs05_pd[18] = x[5] + x[5];
	v[0] += v[1];
	v[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	nvs05_pd[19] = 0.5 / v[1];
	v[0] = -v[1];
	c[4] = v[0];

  /***  constraint 6  ***/

	nvs05_pd[20] = x[2] * x[2];
	nvs05_pd[21] = x[2] + x[2];
	v[0] = nvs05_pd[20] * x[3];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = -504000. / v[0];
	nvs05_pd[22] = -v[1] / v[0];
	c[5] = v[1];

  /***  constraint 7  ***/

	v[0] = pow(x[3], 3.);
	if (errno) in_trouble2("pow",x[3],3.);
	if (x[3] != 0.) {
	nvs05_pd[23] = 3.*(x[3]*x[3]);
	} else {
	nvs05_pd[23] = 0.;
	}
	nvs05_pd[24] = 1.e+15 * v[0];
	nvs05_pd[25] = nvs05_pd[24] * x[2];
	nvs05_pd[26] = nvs05_pd[25] * x[2];
	nvs05_pd[28] = pow(x[3], 3.);
	if (errno) in_trouble2("pow",x[3],3.);
	if (x[3] != 0.) {
	nvs05_pd[27] = 3.*(x[3]*x[3]);
	} else {
	nvs05_pd[27] = 0.;
	}
	v[1] = nvs05_pd[26] * nvs05_pd[28];
	nvs05_pd[29] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (nvs05_pd[29] <= 0.) {
	domain_("sqrt'", &nvs05_pd[29], 5L);
	}
	nvs05_pd[30] = 0.5 / nvs05_pd[29];
	nvs05_pd[31] = 0.0204744897959184 * nvs05_pd[29];
	v[1] = -0.0282346219657891 * x[2];
	nvs05_pd[32] = 1. + v[1];
	v[1] = nvs05_pd[31] * nvs05_pd[32];
	c[6] = v[1];

  /***  constraint 8  ***/

	nvs05_pd[34] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	nvs05_pd[33] = 3.*(x[2]*x[2]);
	} else {
	nvs05_pd[33] = 0.;
	}
	v[1] = nvs05_pd[34] * x[3];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = -0.21952 / v[1];
	nvs05_pd[35] = -v[2] / v[1];
	c[7] = v[2];

  /***  constraint 9  ***/

	t1 = -x[0];
	t1 += x[3];
	c[8] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = nvs05_pd[0]*x[0];
	J[0] = nvs05_pd[0]*x[1];
	J[17] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -nvs05_pd[4];
	dv[0] *= nvs05_pd[3];
	dv[1] = dv[0];
	J[1] = dv[1]*0.5;
	J[8] = dv[0]*0.5;
	dv[2] = -nvs05_pd[4]*0.25;
	J[5] = dv[2]*nvs05_pd[2];
	J[21] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -nvs05_pd[12]*nvs05_pd[6];
	dv[1] = -nvs05_pd[12]*nvs05_pd[10];
	dv[2] = dv[0];
	dv[2] *= nvs05_pd[9];
	dv[3] = dv[2];
	J[2] = dv[3]*0.5;
	J[9] = dv[2]*0.5;
	dv[0] *= 0.0833333333333333;
	J[6] = dv[0]*nvs05_pd[8];
	J[6] += dv[1]*x[0];
	J[2] += dv[1]*x[1];
	J[22] = -nvs05_pd[11]*nvs05_pd[5];
	dv[4] = -nvs05_pd[11]*x[6];
	J[6] += dv[4]*2121.64073550212;
	J[19] = 1.;

   /*** derivatives for constraint 4 ***/

	J[23] = nvs05_pd[14];
	J[7] = -nvs05_pd[13]*0.5;
	J[24] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -nvs05_pd[19];
	J[20] = dv[0]*nvs05_pd[18];
	dv[1] = -nvs05_pd[19];
	J[25] = dv[1]*nvs05_pd[17];
	dv[1] *= x[7];
	J[20] += dv[1]*nvs05_pd[16];
	dv[1] *= x[5];
	J[18] = dv[1]*2.;
	J[18] -= nvs05_pd[19]*nvs05_pd[15];

   /*** derivatives for constraint 6 ***/

	J[13] = nvs05_pd[22]*nvs05_pd[20];
	dv[0] = nvs05_pd[22]*x[3];
	J[10] = dv[0]*nvs05_pd[21];

   /*** derivatives for constraint 7 ***/

	J[11] = -nvs05_pd[31]*0.0282346219657891;
	dv[0] = nvs05_pd[32]*0.0204744897959184;
	dv[0] *= nvs05_pd[30];
	dv[1] = dv[0]*nvs05_pd[26];
	dv[0] *= nvs05_pd[28];
	J[14] = dv[1]*nvs05_pd[27];
	J[11] += dv[0]*nvs05_pd[25];
	dv[0] *= x[2];
	J[11] += dv[0]*nvs05_pd[24];
	dv[0] *= x[2];
	dv[0] *= 1.e+15;
	J[14] += dv[0]*nvs05_pd[23];

   /*** derivatives for constraint 8 ***/

	J[15] = nvs05_pd[35]*nvs05_pd[34];
	dv[0] = nvs05_pd[35]*x[3];
	J[12] = dv[0]*nvs05_pd[33];

   /*** derivatives for constraint 9 ***/

	J[3] = -1.;
	J[16] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
