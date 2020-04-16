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
 fint ex7_3_5_auxcom_[1] = { 11 /* nlc */ };
 fint ex7_3_5_funcom_[64] = {
	13 /* nvar */,
	1 /* nobj */,
	15 /* ncon */,
	44 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	12,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	41,
	43,
	45,

	/* rownos */
	1,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	14,
	15,
	1,
	2,
	1,
	5,
	2,
	6,
	1,
	7,
	2,
	8,
	1,
	9,
	2,
	10,
	1,
	11,
	12,
	13,
	14,
	15,
	1,
	3,
	2,
	4 };

 real ex7_3_5_boundc_[1+26+30] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		10.,
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
		0.,
		0.,
		0.00422,
		0.00422,
		0.000338,
		0.000338,
		1.35e-05,
		1.35e-05,
		2.7e-07,
		2.7e-07,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		-0.175,
		-1.7e308,
		0.175,
		-1.7e308,
		-0.2,
		-1.7e308,
		0.2};

 real ex7_3_5_x0comn_[13] = {
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
		0. };

 static real ex7_3_5_pd[59];
static real ex7_3_5_old_x[13];
static int ex7_3_5_xkind = -1;

 static int
ex7_3_5_xcheck(real *x)
{
	real *x1 = ex7_3_5_old_x, *xe = x + 13;
	errno = 0;
	if (ex7_3_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_3_5_xkind = 0;
	return 1;
	}
 real
ex7_3_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex7_3_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[10];
	;}

	if (wantfg & 2) {
	g[10] = 1.;
	}

	return rv;
}

 void
ex7_3_5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[6], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex7_3_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex7_3_5_pd[1] = pow(x[2], 8.);
	if (errno) in_trouble2("pow",x[2],8.);
	if (x[2] != 0.) {
	ex7_3_5_pd[0] = 8.*(ex7_3_5_pd[1]/x[2]);
	} else {
	ex7_3_5_pd[0] = 0.;
	}
	v[1] = ex7_3_5_pd[1] * x[9];
	ex7_3_5_pd[3] = pow(x[2], 6.);
	if (errno) in_trouble2("pow",x[2],6.);
	if (x[2] != 0.) {
	ex7_3_5_pd[2] = 6.*(ex7_3_5_pd[3]/x[2]);
	} else {
	ex7_3_5_pd[2] = 0.;
	}
	v[3] = ex7_3_5_pd[3] * x[7];
	v[4] = -v[3];
	v[1] += v[4];
	ex7_3_5_pd[5] = pow(x[2], 4.);
	if (errno) in_trouble2("pow",x[2],4.);
	if (x[2] != 0.) {
	ex7_3_5_pd[4] = 4.*(ex7_3_5_pd[5]/x[2]);
	} else {
	ex7_3_5_pd[4] = 0.;
	}
	v[3] = ex7_3_5_pd[5] * x[5];
	v[1] += v[3];
	ex7_3_5_pd[6] = x[2] * x[2];
	ex7_3_5_pd[7] = x[2] + x[2];
	v[3] = ex7_3_5_pd[6] * x[3];
	v[5] = -v[3];
	v[1] += v[5];
	t1 = v[1] + x[11];
	c[0] = t1;

  /***  constraint 2  ***/

	ex7_3_5_pd[9] = pow(x[2], 6.);
	if (errno) in_trouble2("pow",x[2],6.);
	if (x[2] != 0.) {
	ex7_3_5_pd[8] = 6.*(ex7_3_5_pd[9]/x[2]);
	} else {
	ex7_3_5_pd[8] = 0.;
	}
	v[1] = ex7_3_5_pd[9] * x[8];
	ex7_3_5_pd[11] = pow(x[2], 4.);
	if (errno) in_trouble2("pow",x[2],4.);
	if (x[2] != 0.) {
	ex7_3_5_pd[10] = 4.*(ex7_3_5_pd[11]/x[2]);
	} else {
	ex7_3_5_pd[10] = 0.;
	}
	v[3] = ex7_3_5_pd[11] * x[6];
	v[4] = -v[3];
	v[1] += v[4];
	ex7_3_5_pd[12] = x[2] * x[2];
	ex7_3_5_pd[13] = x[2] + x[2];
	v[4] = ex7_3_5_pd[12] * x[4];
	v[1] += v[4];
	t1 = v[1] + -x[12];
	c[1] = t1;

  /***  constraint 3  ***/

	ex7_3_5_pd[14] = x[0] * x[0];
	ex7_3_5_pd[15] = x[0] + x[0];
	v[0] = -4.53 * ex7_3_5_pd[14];
	t1 = v[0] + x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	ex7_3_5_pd[16] = x[0] * x[0];
	ex7_3_5_pd[17] = x[0] + x[0];
	v[0] = -5.28 * ex7_3_5_pd[16];
	t1 = v[0] + -0.364*x[0];
	t1 += x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	ex7_3_5_pd[18] = x[0] * x[0];
	ex7_3_5_pd[19] = x[0] + x[0];
	v[0] = -1.13 * ex7_3_5_pd[18];
	ex7_3_5_pd[20] = x[0] * x[0];
	ex7_3_5_pd[21] = x[0] + x[0];
	ex7_3_5_pd[22] = 5.72 * ex7_3_5_pd[20];
	v[1] = ex7_3_5_pd[22] * x[1];
	v[2] = v[0] - v[1];
	t1 = v[2] + -0.425*x[0];
	t1 += x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	ex7_3_5_pd[23] = x[0] * x[0];
	ex7_3_5_pd[24] = x[0] + x[0];
	ex7_3_5_pd[25] = 6.93 * ex7_3_5_pd[23];
	v[0] = ex7_3_5_pd[25] * x[1];
	v[1] = -v[0];
	t1 = v[1] + -0.0911*x[0];
	t1 += x[4];
	c[5] = t1;

  /***  constraint 7  ***/

	ex7_3_5_pd[26] = 0.168 * x[0];
	v[0] = ex7_3_5_pd[26] * x[1];
	v[1] = -v[0];
	ex7_3_5_pd[27] = x[0] * x[0];
	ex7_3_5_pd[28] = x[0] + x[0];
	ex7_3_5_pd[29] = 1.45 * ex7_3_5_pd[27];
	v[0] = ex7_3_5_pd[29] * x[1];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[5];
	c[6] = t1;

  /***  constraint 8  ***/

	ex7_3_5_pd[30] = x[0] * x[0];
	ex7_3_5_pd[31] = x[0] + x[0];
	ex7_3_5_pd[32] = 1.56 * ex7_3_5_pd[30];
	ex7_3_5_pd[33] = x[1] * x[1];
	ex7_3_5_pd[34] = x[1] + x[1];
	v[0] = ex7_3_5_pd[32] * ex7_3_5_pd[33];
	ex7_3_5_pd[35] = x[0] * x[0];
	ex7_3_5_pd[36] = x[0] + x[0];
	ex7_3_5_pd[37] = 0.00084 * ex7_3_5_pd[35];
	v[1] = ex7_3_5_pd[37] * x[1];
	v[0] += v[1];
	ex7_3_5_pd[38] = 0.0135 * x[0];
	v[1] = ex7_3_5_pd[38] * x[1];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[6];
	c[7] = t1;

  /***  constraint 9  ***/

	ex7_3_5_pd[39] = x[0] * x[0];
	ex7_3_5_pd[40] = x[0] + x[0];
	ex7_3_5_pd[41] = 0.125 * ex7_3_5_pd[39];
	ex7_3_5_pd[42] = x[1] * x[1];
	ex7_3_5_pd[43] = x[1] + x[1];
	v[0] = ex7_3_5_pd[41] * ex7_3_5_pd[42];
	ex7_3_5_pd[44] = x[0] * x[0];
	ex7_3_5_pd[45] = x[0] + x[0];
	ex7_3_5_pd[46] = 1.68e-05 * ex7_3_5_pd[44];
	v[1] = ex7_3_5_pd[46] * x[1];
	v[0] += v[1];
	ex7_3_5_pd[47] = 0.000539 * x[0];
	v[1] = ex7_3_5_pd[47] * x[1];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[8] = t1;

  /***  constraint 10  ***/

	ex7_3_5_pd[48] = 1.08e-05 * x[0];
	v[0] = ex7_3_5_pd[48] * x[1];
	v[1] = -v[0];
	ex7_3_5_pd[49] = x[0] * x[0];
	ex7_3_5_pd[50] = x[0] + x[0];
	ex7_3_5_pd[51] = 0.005 * ex7_3_5_pd[49];
	ex7_3_5_pd[52] = x[1] * x[1];
	ex7_3_5_pd[53] = x[1] + x[1];
	v[0] = ex7_3_5_pd[51] * ex7_3_5_pd[52];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[8];
	c[9] = t1;

  /***  constraint 11  ***/

	ex7_3_5_pd[54] = x[0] * x[0];
	ex7_3_5_pd[55] = x[0] + x[0];
	ex7_3_5_pd[56] = -0.0001 * ex7_3_5_pd[54];
	ex7_3_5_pd[57] = x[1] * x[1];
	ex7_3_5_pd[58] = x[1] + x[1];
	v[0] = ex7_3_5_pd[56] * ex7_3_5_pd[57];
	t1 = v[0] + x[9];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[0];
	t1 += -0.145*x[10];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += -0.145*x[10];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[1];
	t1 += -0.15*x[10];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[1];
	t1 += -0.15*x[10];
	c[14] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[22] = -ex7_3_5_pd[6];
	J[20] = -x[3]*ex7_3_5_pd[7];
	J[26] = ex7_3_5_pd[5];
	J[20] += x[5]*ex7_3_5_pd[4];
	J[30] = -ex7_3_5_pd[3];
	J[20] -= x[7]*ex7_3_5_pd[2];
	J[34] = ex7_3_5_pd[1];
	J[20] += x[9]*ex7_3_5_pd[0];
	J[40] = 1.;

   /*** derivatives for constraint 2 ***/

	J[24] = ex7_3_5_pd[12];
	J[21] = x[4]*ex7_3_5_pd[13];
	J[28] = -ex7_3_5_pd[11];
	J[21] -= x[6]*ex7_3_5_pd[10];
	J[32] = ex7_3_5_pd[9];
	J[21] += x[8]*ex7_3_5_pd[8];
	J[42] = -1.;

   /*** derivatives for constraint 3 ***/

	J[0] = -4.53*ex7_3_5_pd[15];
	J[41] = 1.;

   /*** derivatives for constraint 4 ***/

	J[1] = -5.28*ex7_3_5_pd[17] + -0.364;
	J[43] = 1.;

   /*** derivatives for constraint 5 ***/

	J[11] = -ex7_3_5_pd[22];
	dv[0] = -x[1]*5.72;
	J[2] = dv[0]*ex7_3_5_pd[21] + -0.425;
	J[2] -= 1.13*ex7_3_5_pd[19];
	J[23] = 1.;

   /*** derivatives for constraint 6 ***/

	J[12] = -ex7_3_5_pd[25];
	dv[0] = -x[1]*6.93;
	J[3] = dv[0]*ex7_3_5_pd[24] + -0.0911;
	J[25] = 1.;

   /*** derivatives for constraint 7 ***/

	J[13] = -ex7_3_5_pd[29];
	dv[0] = -x[1]*1.45;
	J[4] = dv[0]*ex7_3_5_pd[28];
	J[13] -= ex7_3_5_pd[26];
	J[4] -= x[1]*0.168;
	J[27] = 1.;

   /*** derivatives for constraint 8 ***/

	J[14] = -ex7_3_5_pd[38];
	J[5] = -x[1]*0.0135;
	J[14] -= ex7_3_5_pd[37];
	dv[0] = -x[1]*0.00084;
	J[5] += dv[0]*ex7_3_5_pd[36];
	J[14] -= ex7_3_5_pd[32]*ex7_3_5_pd[34];
	dv[1] = -ex7_3_5_pd[33]*1.56;
	J[5] += dv[1]*ex7_3_5_pd[31];
	J[29] = 1.;

   /*** derivatives for constraint 9 ***/

	J[15] = -ex7_3_5_pd[47];
	J[6] = -x[1]*0.000539;
	J[15] -= ex7_3_5_pd[46];
	dv[0] = -x[1]*1.68e-05;
	J[6] += dv[0]*ex7_3_5_pd[45];
	J[15] -= ex7_3_5_pd[41]*ex7_3_5_pd[43];
	dv[1] = -ex7_3_5_pd[42]*0.125;
	J[6] += dv[1]*ex7_3_5_pd[40];
	J[31] = 1.;

   /*** derivatives for constraint 10 ***/

	J[16] = -ex7_3_5_pd[51]*ex7_3_5_pd[53];
	dv[0] = -ex7_3_5_pd[52]*0.005;
	J[7] = dv[0]*ex7_3_5_pd[50];
	J[16] -= ex7_3_5_pd[48];
	J[7] -= x[1]*1.08e-05;
	J[33] = 1.;

   /*** derivatives for constraint 11 ***/

	J[17] = ex7_3_5_pd[56]*ex7_3_5_pd[58];
	dv[0] = -ex7_3_5_pd[57]*0.0001;
	J[8] = dv[0]*ex7_3_5_pd[55];
	J[35] = 1.;

   /*** derivatives for constraint 12 ***/

	J[9] = -1.;
	J[36] = -0.145;

   /*** derivatives for constraint 13 ***/

	J[10] = 1.;
	J[37] = -0.145;

   /*** derivatives for constraint 14 ***/

	J[18] = -1.;
	J[38] = -0.15;

   /*** derivatives for constraint 15 ***/

	J[19] = 1.;
	J[39] = -0.15;
	}
}
#ifdef __cplusplus
	}
#endif
