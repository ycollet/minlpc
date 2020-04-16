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
 fint inscribedsquare03_auxcom_[1] = { 8 /* nlc */ };
 fint inscribedsquare03_funcom_[39] = {
	8 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	24 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	13,
	17,
	21,
	25,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	3,
	6,
	7,
	8,
	4,
	5,
	7,
	8,
	1,
	3,
	5,
	7,
	2,
	4,
	6,
	8 };

 real inscribedsquare03_boundc_[1+16+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-3.14159265358979,
		3.14159265358979,
		-3.14159265358979,
		3.14159265358979,
		-3.14159265358979,
		3.14159265358979,
		-3.14159265358979,
		3.14159265358979,
		0.,
		1.7e308,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real inscribedsquare03_x0comn_[8] = {
		-3.14159265358979,
		-1.5707963267949,
		0.,
		1.5707963267949,
		1.,
		1.,
		-1.31922501777732e-15,
		-4.93480220054468 };

 static real inscribedsquare03_pd[62];
static real inscribedsquare03_old_x[8];
static int inscribedsquare03_xkind = -1;

 static int
inscribedsquare03_xcheck(real *x)
{
	real *x1 = inscribedsquare03_old_x, *xe = x + 8;
	errno = 0;
	if (inscribedsquare03_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	inscribedsquare03_xkind = 0;
	return 1;
	}
 real
inscribedsquare03_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (inscribedsquare03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[4] * x[4];
	inscribedsquare03_pd[60] = x[4] + x[4];
	v[1] = x[5] * x[5];
	inscribedsquare03_pd[61] = x[5] + x[5];
	v[2] = v[0] + v[1];
	;}

	if (wantfg & 2) {
	g[5] = inscribedsquare03_pd[61];
	g[4] = inscribedsquare03_pd[60];
	}

	return v[2];
}

 void
inscribedsquare03_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[4];
	real t1;
	fint wantfg = *needfg;
	if (inscribedsquare03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	v[1] = x[0] - v[0];
	inscribedsquare03_pd[0] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	inscribedsquare03_pd[1] = -sin(v[1]);
	inscribedsquare03_pd[2] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	inscribedsquare03_pd[3] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	v[1] = inscribedsquare03_pd[0] * inscribedsquare03_pd[2];
	inscribedsquare03_pd[4] = x[0] * x[0];
	if (x[0] < 0.) {
	inscribedsquare03_pd[5] = -x[0];
	inscribedsquare03_pd[6] = -1.;
	} else {
	inscribedsquare03_pd[5] = x[0];
	inscribedsquare03_pd[6] = 1.;
	}
	v[0] = 3. * inscribedsquare03_pd[5];
	v[2] = 2. * x[0];
	v[3] = v[0] + v[2];
	inscribedsquare03_pd[7] = sin(v[3]);
	if (errno) in_trouble("sin",v[3]);
	inscribedsquare03_pd[8] = cos(v[3]);
	if (errno) in_trouble("sin'",v[3]);
	v[3] = inscribedsquare03_pd[4] * inscribedsquare03_pd[7];
	v[2] = v[1] - v[3];
	t1 = v[2] + -x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	inscribedsquare03_pd[9] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	inscribedsquare03_pd[10] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	v[0] = inscribedsquare03_pd[9] * x[0];
	inscribedsquare03_pd[11] = 0.5 * x[0];
	inscribedsquare03_pd[12] = inscribedsquare03_pd[11] * x[0];
	inscribedsquare03_pd[13] = cos(x[0]);
	if (errno) in_trouble("cos",x[0]);
	inscribedsquare03_pd[14] = -sin(x[0]);
	v[1] = inscribedsquare03_pd[12] * inscribedsquare03_pd[13];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[1] * x[1];
	v[1] = x[1] - v[0];
	inscribedsquare03_pd[15] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	inscribedsquare03_pd[16] = -sin(v[1]);
	inscribedsquare03_pd[17] = sin(x[1]);
	if (errno) in_trouble("sin",x[1]);
	inscribedsquare03_pd[18] = cos(x[1]);
	if (errno) in_trouble("sin'",x[1]);
	v[1] = inscribedsquare03_pd[15] * inscribedsquare03_pd[17];
	inscribedsquare03_pd[19] = x[1] * x[1];
	if (x[1] < 0.) {
	inscribedsquare03_pd[20] = -x[1];
	inscribedsquare03_pd[21] = -1.;
	} else {
	inscribedsquare03_pd[20] = x[1];
	inscribedsquare03_pd[21] = 1.;
	}
	v[0] = 3. * inscribedsquare03_pd[20];
	v[2] = 2. * x[1];
	v[3] = v[0] + v[2];
	inscribedsquare03_pd[22] = sin(v[3]);
	if (errno) in_trouble("sin",v[3]);
	inscribedsquare03_pd[23] = cos(v[3]);
	if (errno) in_trouble("sin'",v[3]);
	v[3] = inscribedsquare03_pd[19] * inscribedsquare03_pd[22];
	v[2] = v[1] - v[3];
	t1 = v[2] + -x[4];
	t1 += -x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	inscribedsquare03_pd[24] = sin(x[1]);
	if (errno) in_trouble("sin",x[1]);
	inscribedsquare03_pd[25] = cos(x[1]);
	if (errno) in_trouble("sin'",x[1]);
	v[0] = inscribedsquare03_pd[24] * x[1];
	inscribedsquare03_pd[26] = 0.5 * x[1];
	inscribedsquare03_pd[27] = inscribedsquare03_pd[26] * x[1];
	inscribedsquare03_pd[28] = cos(x[1]);
	if (errno) in_trouble("cos",x[1]);
	inscribedsquare03_pd[29] = -sin(x[1]);
	v[1] = inscribedsquare03_pd[27] * inscribedsquare03_pd[28];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[5];
	t1 += -x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[2] * x[2];
	v[1] = x[2] - v[0];
	inscribedsquare03_pd[30] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	inscribedsquare03_pd[31] = -sin(v[1]);
	inscribedsquare03_pd[32] = sin(x[2]);
	if (errno) in_trouble("sin",x[2]);
	inscribedsquare03_pd[33] = cos(x[2]);
	if (errno) in_trouble("sin'",x[2]);
	v[1] = inscribedsquare03_pd[30] * inscribedsquare03_pd[32];
	inscribedsquare03_pd[34] = x[2] * x[2];
	if (x[2] < 0.) {
	inscribedsquare03_pd[35] = -x[2];
	inscribedsquare03_pd[36] = -1.;
	} else {
	inscribedsquare03_pd[35] = x[2];
	inscribedsquare03_pd[36] = 1.;
	}
	v[0] = 3. * inscribedsquare03_pd[35];
	v[2] = 2. * x[2];
	v[3] = v[0] + v[2];
	inscribedsquare03_pd[37] = sin(v[3]);
	if (errno) in_trouble("sin",v[3]);
	inscribedsquare03_pd[38] = cos(v[3]);
	if (errno) in_trouble("sin'",v[3]);
	v[3] = inscribedsquare03_pd[34] * inscribedsquare03_pd[37];
	v[2] = v[1] - v[3];
	t1 = v[2] + x[5];
	t1 += -x[6];
	c[4] = t1;

  /***  constraint 6  ***/

	inscribedsquare03_pd[39] = sin(x[2]);
	if (errno) in_trouble("sin",x[2]);
	inscribedsquare03_pd[40] = cos(x[2]);
	if (errno) in_trouble("sin'",x[2]);
	v[0] = inscribedsquare03_pd[39] * x[2];
	inscribedsquare03_pd[41] = 0.5 * x[2];
	inscribedsquare03_pd[42] = inscribedsquare03_pd[41] * x[2];
	inscribedsquare03_pd[43] = cos(x[2]);
	if (errno) in_trouble("cos",x[2]);
	inscribedsquare03_pd[44] = -sin(x[2]);
	v[1] = inscribedsquare03_pd[42] * inscribedsquare03_pd[43];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[4];
	t1 += -x[7];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[3] * x[3];
	v[1] = x[3] - v[0];
	inscribedsquare03_pd[45] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	inscribedsquare03_pd[46] = -sin(v[1]);
	inscribedsquare03_pd[47] = sin(x[3]);
	if (errno) in_trouble("sin",x[3]);
	inscribedsquare03_pd[48] = cos(x[3]);
	if (errno) in_trouble("sin'",x[3]);
	v[1] = inscribedsquare03_pd[45] * inscribedsquare03_pd[47];
	inscribedsquare03_pd[49] = x[3] * x[3];
	if (x[3] < 0.) {
	inscribedsquare03_pd[50] = -x[3];
	inscribedsquare03_pd[51] = -1.;
	} else {
	inscribedsquare03_pd[50] = x[3];
	inscribedsquare03_pd[51] = 1.;
	}
	v[0] = 3. * inscribedsquare03_pd[50];
	v[2] = 2. * x[3];
	v[3] = v[0] + v[2];
	inscribedsquare03_pd[52] = sin(v[3]);
	if (errno) in_trouble("sin",v[3]);
	inscribedsquare03_pd[53] = cos(v[3]);
	if (errno) in_trouble("sin'",v[3]);
	v[3] = inscribedsquare03_pd[49] * inscribedsquare03_pd[52];
	v[2] = v[1] - v[3];
	t1 = v[2] + -x[4];
	t1 += x[5];
	t1 += -x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	inscribedsquare03_pd[54] = sin(x[3]);
	if (errno) in_trouble("sin",x[3]);
	inscribedsquare03_pd[55] = cos(x[3]);
	if (errno) in_trouble("sin'",x[3]);
	v[0] = inscribedsquare03_pd[54] * x[3];
	inscribedsquare03_pd[56] = 0.5 * x[3];
	inscribedsquare03_pd[57] = inscribedsquare03_pd[56] * x[3];
	inscribedsquare03_pd[58] = cos(x[3]);
	if (errno) in_trouble("cos",x[3]);
	inscribedsquare03_pd[59] = -sin(x[3]);
	v[1] = inscribedsquare03_pd[57] * inscribedsquare03_pd[58];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[4];
	t1 += -x[5];
	t1 += -x[7];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -inscribedsquare03_pd[4]*inscribedsquare03_pd[8];
	dv[1] = dv[0];
	J[0] = dv[1]*2.;
	dv[0] *= 3.;
	J[0] += dv[0]*inscribedsquare03_pd[6];
	J[0] -= inscribedsquare03_pd[7]*x[0];
	J[0] -= inscribedsquare03_pd[7]*x[0];
	J[0] += inscribedsquare03_pd[0]*inscribedsquare03_pd[3];
	dv[2] = inscribedsquare03_pd[2]*inscribedsquare03_pd[1];
	dv[3] = -dv[2];
	J[0] += dv[2];
	J[0] += dv[3]*x[0];
	J[0] += dv[3]*x[0];
	J[16] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = inscribedsquare03_pd[12]*inscribedsquare03_pd[14];
	J[1] += inscribedsquare03_pd[13]*inscribedsquare03_pd[11];
	dv[0] = inscribedsquare03_pd[13]*x[0];
	J[1] += dv[0]*0.5;
	J[1] += inscribedsquare03_pd[9];
	J[1] += x[0]*inscribedsquare03_pd[10];
	J[20] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -inscribedsquare03_pd[19]*inscribedsquare03_pd[23];
	dv[1] = dv[0];
	J[2] = dv[1]*2.;
	dv[0] *= 3.;
	J[2] += dv[0]*inscribedsquare03_pd[21];
	J[2] -= inscribedsquare03_pd[22]*x[1];
	J[2] -= inscribedsquare03_pd[22]*x[1];
	J[2] += inscribedsquare03_pd[15]*inscribedsquare03_pd[18];
	dv[2] = inscribedsquare03_pd[17]*inscribedsquare03_pd[16];
	dv[3] = -dv[2];
	J[2] += dv[2];
	J[2] += dv[3]*x[1];
	J[2] += dv[3]*x[1];
	J[8] = -1.;
	J[17] = -1.;

   /*** derivatives for constraint 4 ***/

	J[3] = inscribedsquare03_pd[27]*inscribedsquare03_pd[29];
	J[3] += inscribedsquare03_pd[28]*inscribedsquare03_pd[26];
	dv[0] = inscribedsquare03_pd[28]*x[1];
	J[3] += dv[0]*0.5;
	J[3] += inscribedsquare03_pd[24];
	J[3] += x[1]*inscribedsquare03_pd[25];
	J[12] = -1.;
	J[21] = -1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -inscribedsquare03_pd[34]*inscribedsquare03_pd[38];
	dv[1] = dv[0];
	J[4] = dv[1]*2.;
	dv[0] *= 3.;
	J[4] += dv[0]*inscribedsquare03_pd[36];
	J[4] -= inscribedsquare03_pd[37]*x[2];
	J[4] -= inscribedsquare03_pd[37]*x[2];
	J[4] += inscribedsquare03_pd[30]*inscribedsquare03_pd[33];
	dv[2] = inscribedsquare03_pd[32]*inscribedsquare03_pd[31];
	dv[3] = -dv[2];
	J[4] += dv[2];
	J[4] += dv[3]*x[2];
	J[4] += dv[3]*x[2];
	J[13] = 1.;
	J[18] = -1.;

   /*** derivatives for constraint 6 ***/

	J[5] = inscribedsquare03_pd[42]*inscribedsquare03_pd[44];
	J[5] += inscribedsquare03_pd[43]*inscribedsquare03_pd[41];
	dv[0] = inscribedsquare03_pd[43]*x[2];
	J[5] += dv[0]*0.5;
	J[5] += inscribedsquare03_pd[39];
	J[5] += x[2]*inscribedsquare03_pd[40];
	J[9] = -1.;
	J[22] = -1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -inscribedsquare03_pd[49]*inscribedsquare03_pd[53];
	dv[1] = dv[0];
	J[6] = dv[1]*2.;
	dv[0] *= 3.;
	J[6] += dv[0]*inscribedsquare03_pd[51];
	J[6] -= inscribedsquare03_pd[52]*x[3];
	J[6] -= inscribedsquare03_pd[52]*x[3];
	J[6] += inscribedsquare03_pd[45]*inscribedsquare03_pd[48];
	dv[2] = inscribedsquare03_pd[47]*inscribedsquare03_pd[46];
	dv[3] = -dv[2];
	J[6] += dv[2];
	J[6] += dv[3]*x[3];
	J[6] += dv[3]*x[3];
	J[10] = -1.;
	J[14] = 1.;
	J[19] = -1.;

   /*** derivatives for constraint 8 ***/

	J[7] = inscribedsquare03_pd[57]*inscribedsquare03_pd[59];
	J[7] += inscribedsquare03_pd[58]*inscribedsquare03_pd[56];
	dv[0] = inscribedsquare03_pd[58]*x[3];
	J[7] += dv[0]*0.5;
	J[7] += inscribedsquare03_pd[54];
	J[7] += x[3]*inscribedsquare03_pd[55];
	J[11] = -1.;
	J[15] = -1.;
	J[23] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
