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
 fint ortez_auxcom_[1] = { 27 /* nlc */ };
 fint ortez_funcom_[326] = {
	87 /* nvar */,
	1 /* nobj */,
	74 /* ncon */,
	232 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	14,
	18,
	22,
	26,
	30,
	34,
	37,
	40,
	43,
	46,
	49,
	52,
	55,
	58,
	61,
	64,
	67,
	70,
	78,
	86,
	94,
	96,
	98,
	100,
	102,
	104,
	106,
	112,
	119,
	125,
	127,
	129,
	131,
	133,
	135,
	137,
	139,
	141,
	143,
	145,
	147,
	149,
	151,
	153,
	155,
	157,
	159,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	182,
	185,
	188,
	190,
	192,
	194,
	196,
	198,
	200,
	204,
	208,
	211,
	215,
	219,
	222,
	226,
	230,
	233,

	/* rownos */
	1,
	4,
	7,
	2,
	5,
	8,
	3,
	6,
	9,
	10,
	31,
	34,
	45,
	13,
	31,
	34,
	48,
	16,
	31,
	34,
	51,
	11,
	32,
	35,
	46,
	14,
	32,
	35,
	49,
	17,
	32,
	35,
	52,
	12,
	33,
	47,
	15,
	33,
	50,
	18,
	33,
	53,
	19,
	31,
	45,
	22,
	31,
	48,
	25,
	31,
	51,
	20,
	32,
	46,
	23,
	32,
	49,
	26,
	32,
	52,
	21,
	33,
	47,
	24,
	33,
	50,
	27,
	33,
	53,
	1,
	10,
	13,
	16,
	19,
	22,
	25,
	60,
	2,
	11,
	14,
	17,
	20,
	23,
	26,
	61,
	3,
	12,
	15,
	18,
	21,
	24,
	27,
	62,
	4,
	63,
	5,
	64,
	6,
	65,
	7,
	66,
	8,
	67,
	9,
	68,
	7,
	34,
	54,
	57,
	69,
	72,
	8,
	34,
	35,
	55,
	58,
	70,
	73,
	9,
	35,
	56,
	59,
	71,
	74,
	1,
	36,
	1,
	39,
	1,
	42,
	2,
	37,
	2,
	40,
	2,
	43,
	3,
	38,
	3,
	41,
	3,
	44,
	4,
	36,
	4,
	39,
	4,
	42,
	5,
	37,
	5,
	40,
	5,
	43,
	6,
	38,
	6,
	41,
	6,
	44,
	10,
	13,
	16,
	11,
	14,
	17,
	12,
	15,
	18,
	19,
	22,
	25,
	20,
	23,
	26,
	21,
	24,
	27,
	66,
	69,
	72,
	67,
	70,
	73,
	68,
	71,
	74,
	54,
	60,
	55,
	61,
	56,
	62,
	57,
	63,
	58,
	64,
	59,
	65,
	28,
	34,
	36,
	45,
	29,
	35,
	37,
	46,
	30,
	38,
	47,
	28,
	34,
	39,
	48,
	29,
	35,
	40,
	49,
	30,
	41,
	50,
	28,
	34,
	42,
	51,
	29,
	35,
	43,
	52,
	30,
	44,
	53 };

 real ortez_boundc_[1+174+148] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		254.001,
		0.,
		254.001,
		0.,
		254.001,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		254.,
		254.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-0.001,
		1.7e308,
		-0.001,
		1.7e308,
		-0.001,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		200.,
		1.7e308,
		200.,
		1.7e308,
		200.,
		1.7e308,
		-1.7e308,
		708.,
		-1.7e308,
		708.,
		-1.7e308,
		708.};

 real ortez_x0comn_[87] = {
		254.,
		254.,
		254.,
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
		254.,
		254.,
		254.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ortez_pd[33];
static real ortez_old_x[87];
static int ortez_xkind = -1;

 static int
ortez_xcheck(real *x)
{
	real *x1 = ortez_old_x, *xe = x + 87;
	errno = 0;
	if (ortez_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ortez_xkind = 0;
	return 1;
	}
 real
ortez_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ortez_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -300.544*x[33];
	rv += -225.408*x[34];
	rv += -150.272*x[35];
	rv += -300.544*x[36];
	rv += -225.408*x[37];
	rv += -150.272*x[38];
	rv += -300.544*x[39];
	rv += -225.408*x[40];
	rv += -150.272*x[41];
	rv += -2.66666666666667*x[42];
	rv += -4.*x[43];
	rv += -5.33333333333333*x[44];
	rv += -2.66666666666667*x[45];
	rv += -4.*x[46];
	rv += -5.33333333333333*x[47];
	rv += -2.66666666666667*x[48];
	rv += -4.*x[49];
	rv += -5.33333333333333*x[50];
	rv += 1.33333333333333*x[51];
	rv += x[52];
	rv += x[53];
	rv += 1.33333333333333*x[54];
	rv += x[55];
	rv += x[56];
	rv += 1.33333333333333*x[57];
	rv += x[58];
	rv += x[59];
	rv += 1.33333333333333*x[60];
	rv += x[61];
	rv += x[62];
	rv += 1.33333333333333*x[63];
	rv += x[64];
	rv += x[65];
	rv += 1.33333333333333*x[66];
	rv += x[67];
	rv += x[68];
	;}

	if (wantfg & 2) {
	g[33] = -300.544;
	g[34] = -225.408;
	g[35] = -150.272;
	g[36] = -300.544;
	g[37] = -225.408;
	g[38] = -150.272;
	g[39] = -300.544;
	g[40] = -225.408;
	g[41] = -150.272;
	g[42] = -2.66666666666667;
	g[43] = -4.;
	g[44] = -5.33333333333333;
	g[45] = -2.66666666666667;
	g[46] = -4.;
	g[47] = -5.33333333333333;
	g[48] = -2.66666666666667;
	g[49] = -4.;
	g[50] = -5.33333333333333;
	g[51] = 1.33333333333333;
	g[52] = 1.;
	g[53] = 1.;
	g[54] = 1.33333333333333;
	g[55] = 1.;
	g[56] = 1.;
	g[57] = 1.33333333333333;
	g[58] = 1.;
	g[59] = 1.;
	g[60] = 1.33333333333333;
	g[61] = 1.;
	g[62] = 1.;
	g[63] = 1.33333333333333;
	g[64] = 1.;
	g[65] = 1.;
	g[66] = 1.33333333333333;
	g[67] = 1.;
	g[68] = 1.;
	}

	return rv;
}

 void
ortez_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ortez_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[0], 0.172);
	if (errno) in_trouble2("pow",x[0],0.172);
	if (x[0] > 0.) {
	ortez_pd[0] = 0.172*(v[0]/x[0]);
	} else if (0.172 > 1.) {
	ortez_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.172);
	}
	ortez_pd[1] = -6.353 * v[0];
	v[0] = ortez_pd[1] * x[21];
	t1 = v[0] + x[33];
	t1 += x[34];
	t1 += x[35];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = pow(x[1], 0.172);
	if (errno) in_trouble2("pow",x[1],0.172);
	if (x[1] > 0.) {
	ortez_pd[2] = 0.172*(v[0]/x[1]);
	} else if (0.172 > 1.) {
	ortez_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.172);
	}
	ortez_pd[3] = -6.353 * v[0];
	v[0] = ortez_pd[3] * x[22];
	t1 = v[0] + x[36];
	t1 += x[37];
	t1 += x[38];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = pow(x[2], 0.172);
	if (errno) in_trouble2("pow",x[2],0.172);
	if (x[2] > 0.) {
	ortez_pd[4] = 0.172*(v[0]/x[2]);
	} else if (0.172 > 1.) {
	ortez_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.172);
	}
	ortez_pd[5] = -6.353 * v[0];
	v[0] = ortez_pd[5] * x[23];
	t1 = v[0] + x[39];
	t1 += x[40];
	t1 += x[41];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = pow(x[0], 0.617);
	if (errno) in_trouble2("pow",x[0],0.617);
	if (x[0] > 0.) {
	ortez_pd[6] = 0.617*(v[0]/x[0]);
	} else if (0.617 > 1.) {
	ortez_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.617);
	}
	ortez_pd[7] = -0.32 * v[0];
	v[0] = ortez_pd[7] * x[24];
	t1 = v[0] + x[42];
	t1 += x[43];
	t1 += x[44];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = pow(x[1], 0.617);
	if (errno) in_trouble2("pow",x[1],0.617);
	if (x[1] > 0.) {
	ortez_pd[8] = 0.617*(v[0]/x[1]);
	} else if (0.617 > 1.) {
	ortez_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.617);
	}
	ortez_pd[9] = -0.32 * v[0];
	v[0] = ortez_pd[9] * x[25];
	t1 = v[0] + x[45];
	t1 += x[46];
	t1 += x[47];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = pow(x[2], 0.617);
	if (errno) in_trouble2("pow",x[2],0.617);
	if (x[2] > 0.) {
	ortez_pd[10] = 0.617*(v[0]/x[2]);
	} else if (0.617 > 1.) {
	ortez_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.617);
	}
	ortez_pd[11] = -0.32 * v[0];
	v[0] = ortez_pd[11] * x[26];
	t1 = v[0] + x[48];
	t1 += x[49];
	t1 += x[50];
	c[5] = t1;

  /***  constraint 7  ***/

	ortez_pd[12] = 1. - x[27];
	v[1] = x[30] * ortez_pd[12];
	t1 = v[1] + -x[0];
	c[6] = t1;

  /***  constraint 8  ***/

	ortez_pd[13] = 1. - x[28];
	v[1] = x[31] * ortez_pd[13];
	t1 = v[1] + -x[1];
	c[7] = t1;

  /***  constraint 9  ***/

	ortez_pd[14] = 1. - x[29];
	v[1] = x[32] * ortez_pd[14];
	t1 = v[1] + -x[2];
	c[8] = t1;

  /***  constraint 10  ***/

	ortez_pd[15] = -81.9 * x[21];
	v[0] = ortez_pd[15] * x[3];
	t1 = v[0] + x[51];
	c[9] = t1;

  /***  constraint 11  ***/

	ortez_pd[16] = -81.9 * x[22];
	v[0] = ortez_pd[16] * x[6];
	t1 = v[0] + x[54];
	c[10] = t1;

  /***  constraint 12  ***/

	ortez_pd[17] = -81.9 * x[23];
	v[0] = ortez_pd[17] * x[9];
	t1 = v[0] + x[57];
	c[11] = t1;

  /***  constraint 13  ***/

	ortez_pd[18] = -81.9 * x[21];
	v[0] = ortez_pd[18] * x[4];
	t1 = v[0] + x[52];
	c[12] = t1;

  /***  constraint 14  ***/

	ortez_pd[19] = -81.9 * x[22];
	v[0] = ortez_pd[19] * x[7];
	t1 = v[0] + x[55];
	c[13] = t1;

  /***  constraint 15  ***/

	ortez_pd[20] = -81.9 * x[23];
	v[0] = ortez_pd[20] * x[10];
	t1 = v[0] + x[58];
	c[14] = t1;

  /***  constraint 16  ***/

	ortez_pd[21] = -54.6 * x[21];
	v[0] = ortez_pd[21] * x[5];
	t1 = v[0] + x[53];
	c[15] = t1;

  /***  constraint 17  ***/

	ortez_pd[22] = -54.6 * x[22];
	v[0] = ortez_pd[22] * x[8];
	t1 = v[0] + x[56];
	c[16] = t1;

  /***  constraint 18  ***/

	ortez_pd[23] = -54.6 * x[23];
	v[0] = ortez_pd[23] * x[11];
	t1 = v[0] + x[59];
	c[17] = t1;

  /***  constraint 19  ***/

	ortez_pd[24] = -136.62 * x[21];
	v[0] = ortez_pd[24] * x[12];
	t1 = v[0] + x[60];
	c[18] = t1;

  /***  constraint 20  ***/

	ortez_pd[25] = -136.62 * x[22];
	v[0] = ortez_pd[25] * x[15];
	t1 = v[0] + x[63];
	c[19] = t1;

  /***  constraint 21  ***/

	ortez_pd[26] = -136.62 * x[23];
	v[0] = ortez_pd[26] * x[18];
	t1 = v[0] + x[66];
	c[20] = t1;

  /***  constraint 22  ***/

	ortez_pd[27] = -136.62 * x[21];
	v[0] = ortez_pd[27] * x[13];
	t1 = v[0] + x[61];
	c[21] = t1;

  /***  constraint 23  ***/

	ortez_pd[28] = -136.62 * x[22];
	v[0] = ortez_pd[28] * x[16];
	t1 = v[0] + x[64];
	c[22] = t1;

  /***  constraint 24  ***/

	ortez_pd[29] = -136.62 * x[23];
	v[0] = ortez_pd[29] * x[19];
	t1 = v[0] + x[67];
	c[23] = t1;

  /***  constraint 25  ***/

	ortez_pd[30] = -91.08 * x[21];
	v[0] = ortez_pd[30] * x[14];
	t1 = v[0] + x[62];
	c[24] = t1;

  /***  constraint 26  ***/

	ortez_pd[31] = -91.08 * x[22];
	v[0] = ortez_pd[31] * x[17];
	t1 = v[0] + x[65];
	c[25] = t1;

  /***  constraint 27  ***/

	ortez_pd[32] = -91.08 * x[23];
	v[0] = ortez_pd[32] * x[20];
	t1 = v[0] + x[68];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[78];
	t1 += x[81];
	t1 += x[84];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[79];
	t1 += x[82];
	t1 += x[85];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[80];
	t1 += x[83];
	t1 += x[86];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[12];
	t1 += x[13];
	t1 += x[14];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -3.16363636363636*x[3];
	t1 += -3.16363636363636*x[4];
	t1 += -3.16363636363636*x[5];
	t1 += -x[30];
	t1 += x[31];
	t1 += 56.3636363636364*x[78];
	t1 += 43.2*x[81];
	t1 += 33.8181818181818*x[84];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -3.16363636363636*x[6];
	t1 += -3.16363636363636*x[7];
	t1 += -3.16363636363636*x[8];
	t1 += -x[31];
	t1 += x[32];
	t1 += 56.3636363636364*x[79];
	t1 += 43.2*x[82];
	t1 += 33.8181818181818*x[85];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[33];
	t1 += x[42];
	t1 += -50.*x[78];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[36];
	t1 += x[45];
	t1 += -50.*x[79];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[39];
	t1 += x[48];
	t1 += -50.*x[80];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[34];
	t1 += x[43];
	t1 += -50.*x[81];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[37];
	t1 += x[46];
	t1 += -50.*x[82];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[40];
	t1 += x[49];
	t1 += -50.*x[83];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[35];
	t1 += x[44];
	t1 += -50.*x[84];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[38];
	t1 += x[47];
	t1 += -50.*x[85];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[41];
	t1 += x[50];
	t1 += -50.*x[86];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[3];
	t1 += x[12];
	t1 += -x[78];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[6];
	t1 += x[15];
	t1 += -x[79];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[9];
	t1 += x[18];
	t1 += -x[80];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[4];
	t1 += x[13];
	t1 += -x[81];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[7];
	t1 += x[16];
	t1 += -x[82];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[10];
	t1 += x[19];
	t1 += -x[83];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[5];
	t1 += x[14];
	t1 += -x[84];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[8];
	t1 += x[17];
	t1 += -x[85];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[11];
	t1 += x[20];
	t1 += -x[86];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[30];
	t1 += -200.*x[72];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[31];
	t1 += -200.*x[73];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[32];
	t1 += -200.*x[74];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[30];
	t1 += -200.*x[75];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[31];
	t1 += -200.*x[76];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[32];
	t1 += -200.*x[77];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[21];
	t1 += x[72];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[22];
	t1 += x[73];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[23];
	t1 += x[74];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[24];
	t1 += x[75];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[25];
	t1 += x[76];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[26];
	t1 += x[77];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[27];
	t1 += x[69];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[28];
	t1 += x[70];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[29];
	t1 += x[71];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[30];
	t1 += 508.*x[69];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[31];
	t1 += 508.*x[70];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[32];
	t1 += 508.*x[71];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[30];
	t1 += 508.*x[69];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[31];
	t1 += 508.*x[70];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[32];
	t1 += 508.*x[71];
	c[73] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[69] = ortez_pd[1];
	dv[0] = -x[21]*6.353;
	J[0] = dv[0]*ortez_pd[0];
	J[124] = 1.;
	J[126] = 1.;
	J[128] = 1.;

   /*** derivatives for constraint 2 ***/

	J[77] = ortez_pd[3];
	dv[0] = -x[22]*6.353;
	J[3] = dv[0]*ortez_pd[2];
	J[130] = 1.;
	J[132] = 1.;
	J[134] = 1.;

   /*** derivatives for constraint 3 ***/

	J[85] = ortez_pd[5];
	dv[0] = -x[23]*6.353;
	J[6] = dv[0]*ortez_pd[4];
	J[136] = 1.;
	J[138] = 1.;
	J[140] = 1.;

   /*** derivatives for constraint 4 ***/

	J[93] = ortez_pd[7];
	dv[0] = -x[24]*0.32;
	J[1] = dv[0]*ortez_pd[6];
	J[142] = 1.;
	J[144] = 1.;
	J[146] = 1.;

   /*** derivatives for constraint 5 ***/

	J[95] = ortez_pd[9];
	dv[0] = -x[25]*0.32;
	J[4] = dv[0]*ortez_pd[8];
	J[148] = 1.;
	J[150] = 1.;
	J[152] = 1.;

   /*** derivatives for constraint 6 ***/

	J[97] = ortez_pd[11];
	dv[0] = -x[26]*0.32;
	J[7] = dv[0]*ortez_pd[10];
	J[154] = 1.;
	J[156] = 1.;
	J[158] = 1.;

   /*** derivatives for constraint 7 ***/

	J[105] = ortez_pd[12];
	J[99] = -x[30];
	J[2] = -1.;

   /*** derivatives for constraint 8 ***/

	J[111] = ortez_pd[13];
	J[101] = -x[31];
	J[5] = -1.;

   /*** derivatives for constraint 9 ***/

	J[118] = ortez_pd[14];
	J[103] = -x[32];
	J[8] = -1.;

   /*** derivatives for constraint 10 ***/

	J[9] = ortez_pd[15];
	J[70] = -x[3]*81.9;
	J[160] = 1.;

   /*** derivatives for constraint 11 ***/

	J[21] = ortez_pd[16];
	J[78] = -x[6]*81.9;
	J[163] = 1.;

   /*** derivatives for constraint 12 ***/

	J[33] = ortez_pd[17];
	J[86] = -x[9]*81.9;
	J[166] = 1.;

   /*** derivatives for constraint 13 ***/

	J[13] = ortez_pd[18];
	J[71] = -x[4]*81.9;
	J[161] = 1.;

   /*** derivatives for constraint 14 ***/

	J[25] = ortez_pd[19];
	J[79] = -x[7]*81.9;
	J[164] = 1.;

   /*** derivatives for constraint 15 ***/

	J[36] = ortez_pd[20];
	J[87] = -x[10]*81.9;
	J[167] = 1.;

   /*** derivatives for constraint 16 ***/

	J[17] = ortez_pd[21];
	J[72] = -x[5]*54.6;
	J[162] = 1.;

   /*** derivatives for constraint 17 ***/

	J[29] = ortez_pd[22];
	J[80] = -x[8]*54.6;
	J[165] = 1.;

   /*** derivatives for constraint 18 ***/

	J[39] = ortez_pd[23];
	J[88] = -x[11]*54.6;
	J[168] = 1.;

   /*** derivatives for constraint 19 ***/

	J[42] = ortez_pd[24];
	J[73] = -x[12]*136.62;
	J[169] = 1.;

   /*** derivatives for constraint 20 ***/

	J[51] = ortez_pd[25];
	J[81] = -x[15]*136.62;
	J[172] = 1.;

   /*** derivatives for constraint 21 ***/

	J[60] = ortez_pd[26];
	J[89] = -x[18]*136.62;
	J[175] = 1.;

   /*** derivatives for constraint 22 ***/

	J[45] = ortez_pd[27];
	J[74] = -x[13]*136.62;
	J[170] = 1.;

   /*** derivatives for constraint 23 ***/

	J[54] = ortez_pd[28];
	J[82] = -x[16]*136.62;
	J[173] = 1.;

   /*** derivatives for constraint 24 ***/

	J[63] = ortez_pd[29];
	J[90] = -x[19]*136.62;
	J[176] = 1.;

   /*** derivatives for constraint 25 ***/

	J[48] = ortez_pd[30];
	J[75] = -x[14]*91.08;
	J[171] = 1.;

   /*** derivatives for constraint 26 ***/

	J[57] = ortez_pd[31];
	J[83] = -x[17]*91.08;
	J[174] = 1.;

   /*** derivatives for constraint 27 ***/

	J[66] = ortez_pd[32];
	J[91] = -x[20]*91.08;
	J[177] = 1.;

   /*** derivatives for constraint 28 ***/

	J[199] = 1.;
	J[210] = 1.;
	J[221] = 1.;

   /*** derivatives for constraint 29 ***/

	J[203] = 1.;
	J[214] = 1.;
	J[225] = 1.;

   /*** derivatives for constraint 30 ***/

	J[207] = 1.;
	J[218] = 1.;
	J[229] = 1.;

   /*** derivatives for constraint 31 ***/

	J[10] = 1.;
	J[14] = 1.;
	J[18] = 1.;
	J[43] = 1.;
	J[46] = 1.;
	J[49] = 1.;

   /*** derivatives for constraint 32 ***/

	J[22] = 1.;
	J[26] = 1.;
	J[30] = 1.;
	J[52] = 1.;
	J[55] = 1.;
	J[58] = 1.;

   /*** derivatives for constraint 33 ***/

	J[34] = 1.;
	J[37] = 1.;
	J[40] = 1.;
	J[61] = 1.;
	J[64] = 1.;
	J[67] = 1.;

   /*** derivatives for constraint 34 ***/

	J[11] = -3.16363636363636;
	J[15] = -3.16363636363636;
	J[19] = -3.16363636363636;
	J[106] = -1.;
	J[112] = 1.;
	J[200] = 56.3636363636364;
	J[211] = 43.2;
	J[222] = 33.8181818181818;

   /*** derivatives for constraint 35 ***/

	J[23] = -3.16363636363636;
	J[27] = -3.16363636363636;
	J[31] = -3.16363636363636;
	J[113] = -1.;
	J[119] = 1.;
	J[204] = 56.3636363636364;
	J[215] = 43.2;
	J[226] = 33.8181818181818;

   /*** derivatives for constraint 36 ***/

	J[125] = 1.;
	J[143] = 1.;
	J[201] = -50.;

   /*** derivatives for constraint 37 ***/

	J[131] = 1.;
	J[149] = 1.;
	J[205] = -50.;

   /*** derivatives for constraint 38 ***/

	J[137] = 1.;
	J[155] = 1.;
	J[208] = -50.;

   /*** derivatives for constraint 39 ***/

	J[127] = 1.;
	J[145] = 1.;
	J[212] = -50.;

   /*** derivatives for constraint 40 ***/

	J[133] = 1.;
	J[151] = 1.;
	J[216] = -50.;

   /*** derivatives for constraint 41 ***/

	J[139] = 1.;
	J[157] = 1.;
	J[219] = -50.;

   /*** derivatives for constraint 42 ***/

	J[129] = 1.;
	J[147] = 1.;
	J[223] = -50.;

   /*** derivatives for constraint 43 ***/

	J[135] = 1.;
	J[153] = 1.;
	J[227] = -50.;

   /*** derivatives for constraint 44 ***/

	J[141] = 1.;
	J[159] = 1.;
	J[230] = -50.;

   /*** derivatives for constraint 45 ***/

	J[12] = 1.;
	J[44] = 1.;
	J[202] = -1.;

   /*** derivatives for constraint 46 ***/

	J[24] = 1.;
	J[53] = 1.;
	J[206] = -1.;

   /*** derivatives for constraint 47 ***/

	J[35] = 1.;
	J[62] = 1.;
	J[209] = -1.;

   /*** derivatives for constraint 48 ***/

	J[16] = 1.;
	J[47] = 1.;
	J[213] = -1.;

   /*** derivatives for constraint 49 ***/

	J[28] = 1.;
	J[56] = 1.;
	J[217] = -1.;

   /*** derivatives for constraint 50 ***/

	J[38] = 1.;
	J[65] = 1.;
	J[220] = -1.;

   /*** derivatives for constraint 51 ***/

	J[20] = 1.;
	J[50] = 1.;
	J[224] = -1.;

   /*** derivatives for constraint 52 ***/

	J[32] = 1.;
	J[59] = 1.;
	J[228] = -1.;

   /*** derivatives for constraint 53 ***/

	J[41] = 1.;
	J[68] = 1.;
	J[231] = -1.;

   /*** derivatives for constraint 54 ***/

	J[107] = 1.;
	J[187] = -200.;

   /*** derivatives for constraint 55 ***/

	J[114] = 1.;
	J[189] = -200.;

   /*** derivatives for constraint 56 ***/

	J[120] = 1.;
	J[191] = -200.;

   /*** derivatives for constraint 57 ***/

	J[108] = 1.;
	J[193] = -200.;

   /*** derivatives for constraint 58 ***/

	J[115] = 1.;
	J[195] = -200.;

   /*** derivatives for constraint 59 ***/

	J[121] = 1.;
	J[197] = -200.;

   /*** derivatives for constraint 60 ***/

	J[76] = -1.;
	J[188] = 1.;

   /*** derivatives for constraint 61 ***/

	J[84] = -1.;
	J[190] = 1.;

   /*** derivatives for constraint 62 ***/

	J[92] = -1.;
	J[192] = 1.;

   /*** derivatives for constraint 63 ***/

	J[94] = -1.;
	J[194] = 1.;

   /*** derivatives for constraint 64 ***/

	J[96] = -1.;
	J[196] = 1.;

   /*** derivatives for constraint 65 ***/

	J[98] = -1.;
	J[198] = 1.;

   /*** derivatives for constraint 66 ***/

	J[100] = -1.;
	J[178] = 1.;

   /*** derivatives for constraint 67 ***/

	J[102] = -1.;
	J[181] = 1.;

   /*** derivatives for constraint 68 ***/

	J[104] = -1.;
	J[184] = 1.;

   /*** derivatives for constraint 69 ***/

	J[109] = 1.;
	J[179] = 508.;

   /*** derivatives for constraint 70 ***/

	J[116] = 1.;
	J[182] = 508.;

   /*** derivatives for constraint 71 ***/

	J[122] = 1.;
	J[185] = 508.;

   /*** derivatives for constraint 72 ***/

	J[110] = 1.;
	J[180] = 508.;

   /*** derivatives for constraint 73 ***/

	J[117] = 1.;
	J[183] = 508.;

   /*** derivatives for constraint 74 ***/

	J[123] = 1.;
	J[186] = 508.;
	}
}
#ifdef __cplusplus
	}
#endif
