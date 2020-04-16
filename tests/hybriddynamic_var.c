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
 fint hybriddynamic_var_auxcom_[1] = { 20 /* nlc */ };
 fint hybriddynamic_var_funcom_[353] = {
	81 /* nvar */,
	1 /* nobj */,
	100 /* ncon */,
	265 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,
	21,
	26,
	31,
	36,
	41,
	46,
	50,
	53,
	56,
	59,
	62,
	65,
	68,
	71,
	74,
	77,
	80,
	85,
	90,
	95,
	100,
	105,
	110,
	115,
	120,
	125,
	128,
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
	154,
	157,
	160,
	163,
	166,
	169,
	172,
	175,
	178,
	180,
	183,
	186,
	189,
	192,
	195,
	198,
	201,
	204,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	221,
	226,
	231,
	236,
	241,
	246,
	251,
	256,
	261,
	266,

	/* rownos */
	1,
	11,
	21,
	81,
	100,
	2,
	12,
	22,
	82,
	100,
	3,
	13,
	23,
	83,
	100,
	4,
	14,
	24,
	84,
	100,
	5,
	15,
	25,
	85,
	100,
	6,
	16,
	26,
	86,
	100,
	7,
	17,
	27,
	87,
	100,
	8,
	18,
	28,
	88,
	100,
	9,
	19,
	29,
	89,
	100,
	10,
	20,
	30,
	100,
	1,
	11,
	90,
	2,
	12,
	91,
	3,
	13,
	92,
	4,
	14,
	93,
	5,
	15,
	94,
	6,
	16,
	95,
	7,
	17,
	96,
	8,
	18,
	97,
	9,
	19,
	98,
	10,
	20,
	99,
	1,
	41,
	51,
	62,
	72,
	2,
	42,
	52,
	63,
	73,
	3,
	43,
	53,
	64,
	74,
	4,
	44,
	54,
	65,
	75,
	5,
	45,
	55,
	66,
	76,
	6,
	46,
	56,
	67,
	77,
	7,
	47,
	57,
	68,
	78,
	8,
	48,
	58,
	69,
	79,
	9,
	49,
	59,
	70,
	80,
	10,
	50,
	60,
	20,
	31,
	90,
	32,
	91,
	33,
	92,
	34,
	93,
	35,
	94,
	36,
	95,
	37,
	96,
	38,
	97,
	39,
	98,
	40,
	99,
	1,
	11,
	2,
	11,
	12,
	3,
	12,
	13,
	4,
	13,
	14,
	5,
	14,
	15,
	6,
	15,
	16,
	7,
	16,
	17,
	8,
	17,
	18,
	9,
	18,
	19,
	10,
	19,
	20,
	21,
	81,
	22,
	81,
	82,
	23,
	82,
	83,
	24,
	83,
	84,
	25,
	84,
	85,
	26,
	85,
	86,
	27,
	86,
	87,
	28,
	87,
	88,
	29,
	88,
	89,
	30,
	89,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	41,
	51,
	61,
	71,
	32,
	42,
	52,
	62,
	72,
	33,
	43,
	53,
	63,
	73,
	34,
	44,
	54,
	64,
	74,
	35,
	45,
	55,
	65,
	75,
	36,
	46,
	56,
	66,
	76,
	37,
	47,
	57,
	67,
	77,
	38,
	48,
	58,
	68,
	78,
	39,
	49,
	59,
	69,
	79,
	40,
	50,
	60,
	70,
	80 };

 real hybriddynamic_var_boundc_[1+162+200] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.16,
		0.24,
		0.16,
		0.24,
		0.16,
		0.24,
		0.16,
		0.24,
		0.16,
		0.24,
		0.16,
		0.24,
		0.16,
		0.24,
		0.16,
		0.24,
		0.16,
		0.24,
		0.16,
		0.24,
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
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-1.7e308,
		1.7e308,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-2.,
		-2.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
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
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
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
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.};

 real hybriddynamic_var_x0comn_[81] = {
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
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
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		-2.,
		0.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
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

 static real hybriddynamic_var_pd[21];
static real hybriddynamic_var_old_x[81];
static int hybriddynamic_var_xkind = -1;

 static int
hybriddynamic_var_xcheck(real *x)
{
	real *x1 = hybriddynamic_var_old_x, *xe = x + 81;
	errno = 0;
	if (hybriddynamic_var_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hybriddynamic_var_xkind = 0;
	return 1;
	}
 real
hybriddynamic_var_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (hybriddynamic_var_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[30] + -1.66666666666667;
	v[1] = v[0] * v[0];
	hybriddynamic_var_pd[0] = v[0] + v[0];
	hybriddynamic_var_pd[1] = x[20] * x[20];
	hybriddynamic_var_pd[2] = x[20] + x[20];
	v[0] = hybriddynamic_var_pd[1] * x[0];
	v[1] += v[0];
	hybriddynamic_var_pd[3] = x[21] * x[21];
	hybriddynamic_var_pd[4] = x[21] + x[21];
	v[0] = hybriddynamic_var_pd[3] * x[1];
	v[1] += v[0];
	hybriddynamic_var_pd[5] = x[22] * x[22];
	hybriddynamic_var_pd[6] = x[22] + x[22];
	v[0] = hybriddynamic_var_pd[5] * x[2];
	v[1] += v[0];
	hybriddynamic_var_pd[7] = x[23] * x[23];
	hybriddynamic_var_pd[8] = x[23] + x[23];
	v[0] = hybriddynamic_var_pd[7] * x[3];
	v[1] += v[0];
	hybriddynamic_var_pd[9] = x[24] * x[24];
	hybriddynamic_var_pd[10] = x[24] + x[24];
	v[0] = hybriddynamic_var_pd[9] * x[4];
	v[1] += v[0];
	hybriddynamic_var_pd[11] = x[25] * x[25];
	hybriddynamic_var_pd[12] = x[25] + x[25];
	v[0] = hybriddynamic_var_pd[11] * x[5];
	v[1] += v[0];
	hybriddynamic_var_pd[13] = x[26] * x[26];
	hybriddynamic_var_pd[14] = x[26] + x[26];
	v[0] = hybriddynamic_var_pd[13] * x[6];
	v[1] += v[0];
	hybriddynamic_var_pd[15] = x[27] * x[27];
	hybriddynamic_var_pd[16] = x[27] + x[27];
	v[0] = hybriddynamic_var_pd[15] * x[7];
	v[1] += v[0];
	hybriddynamic_var_pd[17] = x[28] * x[28];
	hybriddynamic_var_pd[18] = x[28] + x[28];
	v[0] = hybriddynamic_var_pd[17] * x[8];
	v[1] += v[0];
	hybriddynamic_var_pd[19] = x[29] * x[29];
	hybriddynamic_var_pd[20] = x[29] + x[29];
	v[0] = hybriddynamic_var_pd[19] * x[9];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[9] = hybriddynamic_var_pd[19];
	g[29] = x[9]*hybriddynamic_var_pd[20];
	g[8] = hybriddynamic_var_pd[17];
	g[28] = x[8]*hybriddynamic_var_pd[18];
	g[7] = hybriddynamic_var_pd[15];
	g[27] = x[7]*hybriddynamic_var_pd[16];
	g[6] = hybriddynamic_var_pd[13];
	g[26] = x[6]*hybriddynamic_var_pd[14];
	g[5] = hybriddynamic_var_pd[11];
	g[25] = x[5]*hybriddynamic_var_pd[12];
	g[4] = hybriddynamic_var_pd[9];
	g[24] = x[4]*hybriddynamic_var_pd[10];
	g[3] = hybriddynamic_var_pd[7];
	g[23] = x[3]*hybriddynamic_var_pd[8];
	g[2] = hybriddynamic_var_pd[5];
	g[22] = x[2]*hybriddynamic_var_pd[6];
	g[1] = hybriddynamic_var_pd[3];
	g[21] = x[1]*hybriddynamic_var_pd[4];
	g[0] = hybriddynamic_var_pd[1];
	g[20] = x[0]*hybriddynamic_var_pd[2];
	g[30] = hybriddynamic_var_pd[0];
	}

	return v[1];
}

 void
hybriddynamic_var_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (hybriddynamic_var_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[20];
	t1 += -x[41];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[21];
	t1 += -x[42];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[22];
	t1 += -x[43];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[23];
	t1 += -x[44];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[24];
	t1 += -x[45];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[5] * x[15];
	v[1] = -v[0];
	t1 = v[1] + x[25];
	t1 += -x[46];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[6] * x[16];
	v[1] = -v[0];
	t1 = v[1] + x[26];
	t1 += -x[47];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[7] * x[17];
	v[1] = -v[0];
	t1 = v[1] + x[27];
	t1 += -x[48];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[8] * x[18];
	v[1] = -v[0];
	t1 = v[1] + x[28];
	t1 += -x[49];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[9] * x[19];
	v[1] = -v[0];
	t1 = v[1] + x[29];
	t1 += -x[50];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[0] * x[10];
	v[1] = -v[0];
	t1 = v[1] + -x[41];
	t1 += x[42];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[1] * x[11];
	v[1] = -v[0];
	t1 = v[1] + -x[42];
	t1 += x[43];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[2] * x[12];
	v[1] = -v[0];
	t1 = v[1] + -x[43];
	t1 += x[44];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[3] * x[13];
	v[1] = -v[0];
	t1 = v[1] + -x[44];
	t1 += x[45];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[4] * x[14];
	v[1] = -v[0];
	t1 = v[1] + -x[45];
	t1 += x[46];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[5] * x[15];
	v[1] = -v[0];
	t1 = v[1] + -x[46];
	t1 += x[47];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[6] * x[16];
	v[1] = -v[0];
	t1 = v[1] + -x[47];
	t1 += x[48];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[7] * x[17];
	v[1] = -v[0];
	t1 = v[1] + -x[48];
	t1 += x[49];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[8] * x[18];
	v[1] = -v[0];
	t1 = v[1] + -x[49];
	t1 += x[50];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[9] * x[19];
	v[1] = -v[0];
	t1 = v[1] + x[30];
	t1 += -x[50];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[0];
	t1 += -x[51];
	t1 += x[61];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[1];
	t1 += -x[52];
	t1 += x[62];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[2];
	t1 += -x[53];
	t1 += x[63];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[3];
	t1 += -x[54];
	t1 += x[64];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[4];
	t1 += -x[55];
	t1 += x[65];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[5];
	t1 += -x[56];
	t1 += x[66];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[6];
	t1 += -x[57];
	t1 += x[67];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[7];
	t1 += -x[58];
	t1 += x[68];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[8];
	t1 += -x[59];
	t1 += x[69];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[9];
	t1 += -x[60];
	t1 += x[70];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[31];
	t1 += -2.*x[71];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[32];
	t1 += -2.*x[72];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[33];
	t1 += -2.*x[73];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[34];
	t1 += -2.*x[74];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[35];
	t1 += -2.*x[75];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[36];
	t1 += -2.*x[76];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[37];
	t1 += -2.*x[77];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[38];
	t1 += -2.*x[78];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[39];
	t1 += -2.*x[79];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[40];
	t1 += -2.*x[80];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[20];
	t1 += 2.*x[71];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[21];
	t1 += 2.*x[72];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[22];
	t1 += 2.*x[73];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[23];
	t1 += 2.*x[74];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[24];
	t1 += 2.*x[75];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[25];
	t1 += 2.*x[76];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[26];
	t1 += 2.*x[77];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[27];
	t1 += 2.*x[78];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[28];
	t1 += 2.*x[79];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[29];
	t1 += 2.*x[80];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[20];
	t1 += 2.*x[71];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[21];
	t1 += 2.*x[72];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[22];
	t1 += 2.*x[73];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[23];
	t1 += 2.*x[74];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[24];
	t1 += 2.*x[75];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[25];
	t1 += 2.*x[76];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[26];
	t1 += 2.*x[77];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[27];
	t1 += 2.*x[78];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[28];
	t1 += 2.*x[79];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[29];
	t1 += 2.*x[80];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = 2.*x[71];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[20];
	t1 += 2.*x[72];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[21];
	t1 += 2.*x[73];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[22];
	t1 += 2.*x[74];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[23];
	t1 += 2.*x[75];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[24];
	t1 += 2.*x[76];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[25];
	t1 += 2.*x[77];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[26];
	t1 += 2.*x[78];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[27];
	t1 += 2.*x[79];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[28];
	t1 += 2.*x[80];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = 2.*x[71];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[20];
	t1 += 2.*x[72];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[21];
	t1 += 2.*x[73];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[22];
	t1 += 2.*x[74];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[23];
	t1 += 2.*x[75];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[24];
	t1 += 2.*x[76];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[25];
	t1 += 2.*x[77];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[26];
	t1 += 2.*x[78];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[27];
	t1 += 2.*x[79];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[28];
	t1 += 2.*x[80];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[0];
	t1 += -x[51];
	t1 += x[52];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[1];
	t1 += -x[52];
	t1 += x[53];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[2];
	t1 += -x[53];
	t1 += x[54];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[3];
	t1 += -x[54];
	t1 += x[55];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[4];
	t1 += -x[55];
	t1 += x[56];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = -x[5];
	t1 += -x[56];
	t1 += x[57];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[6];
	t1 += -x[57];
	t1 += x[58];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = -x[7];
	t1 += -x[58];
	t1 += x[59];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = -x[8];
	t1 += -x[59];
	t1 += x[60];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[10];
	t1 += x[31];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[11];
	t1 += x[32];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[12];
	t1 += x[33];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[13];
	t1 += x[34];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[14];
	t1 += x[35];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[15];
	t1 += x[36];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[16];
	t1 += x[37];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[17];
	t1 += x[38];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[18];
	t1 += x[39];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[19];
	t1 += x[40];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	c[99] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[49] = -x[0];
	J[0] = -x[10];
	J[79] = 1.;
	J[148] = -1.;

   /*** derivatives for constraint 2 ***/

	J[52] = -x[1];
	J[5] = -x[11];
	J[84] = 1.;
	J[150] = -1.;

   /*** derivatives for constraint 3 ***/

	J[55] = -x[2];
	J[10] = -x[12];
	J[89] = 1.;
	J[153] = -1.;

   /*** derivatives for constraint 4 ***/

	J[58] = -x[3];
	J[15] = -x[13];
	J[94] = 1.;
	J[156] = -1.;

   /*** derivatives for constraint 5 ***/

	J[61] = -x[4];
	J[20] = -x[14];
	J[99] = 1.;
	J[159] = -1.;

   /*** derivatives for constraint 6 ***/

	J[64] = -x[5];
	J[25] = -x[15];
	J[104] = 1.;
	J[162] = -1.;

   /*** derivatives for constraint 7 ***/

	J[67] = -x[6];
	J[30] = -x[16];
	J[109] = 1.;
	J[165] = -1.;

   /*** derivatives for constraint 8 ***/

	J[70] = -x[7];
	J[35] = -x[17];
	J[114] = 1.;
	J[168] = -1.;

   /*** derivatives for constraint 9 ***/

	J[73] = -x[8];
	J[40] = -x[18];
	J[119] = 1.;
	J[171] = -1.;

   /*** derivatives for constraint 10 ***/

	J[76] = -x[9];
	J[45] = -x[19];
	J[124] = 1.;
	J[174] = -1.;

   /*** derivatives for constraint 11 ***/

	J[50] = -x[0];
	J[1] = -x[10];
	J[149] = -1.;
	J[151] = 1.;

   /*** derivatives for constraint 12 ***/

	J[53] = -x[1];
	J[6] = -x[11];
	J[152] = -1.;
	J[154] = 1.;

   /*** derivatives for constraint 13 ***/

	J[56] = -x[2];
	J[11] = -x[12];
	J[155] = -1.;
	J[157] = 1.;

   /*** derivatives for constraint 14 ***/

	J[59] = -x[3];
	J[16] = -x[13];
	J[158] = -1.;
	J[160] = 1.;

   /*** derivatives for constraint 15 ***/

	J[62] = -x[4];
	J[21] = -x[14];
	J[161] = -1.;
	J[163] = 1.;

   /*** derivatives for constraint 16 ***/

	J[65] = -x[5];
	J[26] = -x[15];
	J[164] = -1.;
	J[166] = 1.;

   /*** derivatives for constraint 17 ***/

	J[68] = -x[6];
	J[31] = -x[16];
	J[167] = -1.;
	J[169] = 1.;

   /*** derivatives for constraint 18 ***/

	J[71] = -x[7];
	J[36] = -x[17];
	J[170] = -1.;
	J[172] = 1.;

   /*** derivatives for constraint 19 ***/

	J[74] = -x[8];
	J[41] = -x[18];
	J[173] = -1.;
	J[175] = 1.;

   /*** derivatives for constraint 20 ***/

	J[77] = -x[9];
	J[46] = -x[19];
	J[127] = 1.;
	J[176] = -1.;

   /*** derivatives for constraint 21 ***/

	J[2] = -1.;
	J[177] = -1.;
	J[205] = 1.;

   /*** derivatives for constraint 22 ***/

	J[7] = -1.;
	J[179] = -1.;
	J[206] = 1.;

   /*** derivatives for constraint 23 ***/

	J[12] = -1.;
	J[182] = -1.;
	J[207] = 1.;

   /*** derivatives for constraint 24 ***/

	J[17] = -1.;
	J[185] = -1.;
	J[208] = 1.;

   /*** derivatives for constraint 25 ***/

	J[22] = -1.;
	J[188] = -1.;
	J[209] = 1.;

   /*** derivatives for constraint 26 ***/

	J[27] = -1.;
	J[191] = -1.;
	J[210] = 1.;

   /*** derivatives for constraint 27 ***/

	J[32] = -1.;
	J[194] = -1.;
	J[211] = 1.;

   /*** derivatives for constraint 28 ***/

	J[37] = -1.;
	J[197] = -1.;
	J[212] = 1.;

   /*** derivatives for constraint 29 ***/

	J[42] = -1.;
	J[200] = -1.;
	J[213] = 1.;

   /*** derivatives for constraint 30 ***/

	J[47] = -1.;
	J[203] = -1.;
	J[214] = 1.;

   /*** derivatives for constraint 31 ***/

	J[128] = 1.;
	J[215] = -2.;

   /*** derivatives for constraint 32 ***/

	J[130] = 1.;
	J[220] = -2.;

   /*** derivatives for constraint 33 ***/

	J[132] = 1.;
	J[225] = -2.;

   /*** derivatives for constraint 34 ***/

	J[134] = 1.;
	J[230] = -2.;

   /*** derivatives for constraint 35 ***/

	J[136] = 1.;
	J[235] = -2.;

   /*** derivatives for constraint 36 ***/

	J[138] = 1.;
	J[240] = -2.;

   /*** derivatives for constraint 37 ***/

	J[140] = 1.;
	J[245] = -2.;

   /*** derivatives for constraint 38 ***/

	J[142] = 1.;
	J[250] = -2.;

   /*** derivatives for constraint 39 ***/

	J[144] = 1.;
	J[255] = -2.;

   /*** derivatives for constraint 40 ***/

	J[146] = 1.;
	J[260] = -2.;

   /*** derivatives for constraint 41 ***/

	J[80] = -1.;
	J[216] = 2.;

   /*** derivatives for constraint 42 ***/

	J[85] = -1.;
	J[221] = 2.;

   /*** derivatives for constraint 43 ***/

	J[90] = -1.;
	J[226] = 2.;

   /*** derivatives for constraint 44 ***/

	J[95] = -1.;
	J[231] = 2.;

   /*** derivatives for constraint 45 ***/

	J[100] = -1.;
	J[236] = 2.;

   /*** derivatives for constraint 46 ***/

	J[105] = -1.;
	J[241] = 2.;

   /*** derivatives for constraint 47 ***/

	J[110] = -1.;
	J[246] = 2.;

   /*** derivatives for constraint 48 ***/

	J[115] = -1.;
	J[251] = 2.;

   /*** derivatives for constraint 49 ***/

	J[120] = -1.;
	J[256] = 2.;

   /*** derivatives for constraint 50 ***/

	J[125] = -1.;
	J[261] = 2.;

   /*** derivatives for constraint 51 ***/

	J[81] = -1.;
	J[217] = 2.;

   /*** derivatives for constraint 52 ***/

	J[86] = -1.;
	J[222] = 2.;

   /*** derivatives for constraint 53 ***/

	J[91] = -1.;
	J[227] = 2.;

   /*** derivatives for constraint 54 ***/

	J[96] = -1.;
	J[232] = 2.;

   /*** derivatives for constraint 55 ***/

	J[101] = -1.;
	J[237] = 2.;

   /*** derivatives for constraint 56 ***/

	J[106] = -1.;
	J[242] = 2.;

   /*** derivatives for constraint 57 ***/

	J[111] = -1.;
	J[247] = 2.;

   /*** derivatives for constraint 58 ***/

	J[116] = -1.;
	J[252] = 2.;

   /*** derivatives for constraint 59 ***/

	J[121] = -1.;
	J[257] = 2.;

   /*** derivatives for constraint 60 ***/

	J[126] = -1.;
	J[262] = 2.;

   /*** derivatives for constraint 61 ***/

	J[218] = 2.;

   /*** derivatives for constraint 62 ***/

	J[82] = -1.;
	J[223] = 2.;

   /*** derivatives for constraint 63 ***/

	J[87] = -1.;
	J[228] = 2.;

   /*** derivatives for constraint 64 ***/

	J[92] = -1.;
	J[233] = 2.;

   /*** derivatives for constraint 65 ***/

	J[97] = -1.;
	J[238] = 2.;

   /*** derivatives for constraint 66 ***/

	J[102] = -1.;
	J[243] = 2.;

   /*** derivatives for constraint 67 ***/

	J[107] = -1.;
	J[248] = 2.;

   /*** derivatives for constraint 68 ***/

	J[112] = -1.;
	J[253] = 2.;

   /*** derivatives for constraint 69 ***/

	J[117] = -1.;
	J[258] = 2.;

   /*** derivatives for constraint 70 ***/

	J[122] = -1.;
	J[263] = 2.;

   /*** derivatives for constraint 71 ***/

	J[219] = 2.;

   /*** derivatives for constraint 72 ***/

	J[83] = -1.;
	J[224] = 2.;

   /*** derivatives for constraint 73 ***/

	J[88] = -1.;
	J[229] = 2.;

   /*** derivatives for constraint 74 ***/

	J[93] = -1.;
	J[234] = 2.;

   /*** derivatives for constraint 75 ***/

	J[98] = -1.;
	J[239] = 2.;

   /*** derivatives for constraint 76 ***/

	J[103] = -1.;
	J[244] = 2.;

   /*** derivatives for constraint 77 ***/

	J[108] = -1.;
	J[249] = 2.;

   /*** derivatives for constraint 78 ***/

	J[113] = -1.;
	J[254] = 2.;

   /*** derivatives for constraint 79 ***/

	J[118] = -1.;
	J[259] = 2.;

   /*** derivatives for constraint 80 ***/

	J[123] = -1.;
	J[264] = 2.;

   /*** derivatives for constraint 81 ***/

	J[3] = -1.;
	J[178] = -1.;
	J[180] = 1.;

   /*** derivatives for constraint 82 ***/

	J[8] = -1.;
	J[181] = -1.;
	J[183] = 1.;

   /*** derivatives for constraint 83 ***/

	J[13] = -1.;
	J[184] = -1.;
	J[186] = 1.;

   /*** derivatives for constraint 84 ***/

	J[18] = -1.;
	J[187] = -1.;
	J[189] = 1.;

   /*** derivatives for constraint 85 ***/

	J[23] = -1.;
	J[190] = -1.;
	J[192] = 1.;

   /*** derivatives for constraint 86 ***/

	J[28] = -1.;
	J[193] = -1.;
	J[195] = 1.;

   /*** derivatives for constraint 87 ***/

	J[33] = -1.;
	J[196] = -1.;
	J[198] = 1.;

   /*** derivatives for constraint 88 ***/

	J[38] = -1.;
	J[199] = -1.;
	J[201] = 1.;

   /*** derivatives for constraint 89 ***/

	J[43] = -1.;
	J[202] = -1.;
	J[204] = 1.;

   /*** derivatives for constraint 90 ***/

	J[51] = 1.;
	J[129] = 1.;

   /*** derivatives for constraint 91 ***/

	J[54] = 1.;
	J[131] = 1.;

   /*** derivatives for constraint 92 ***/

	J[57] = 1.;
	J[133] = 1.;

   /*** derivatives for constraint 93 ***/

	J[60] = 1.;
	J[135] = 1.;

   /*** derivatives for constraint 94 ***/

	J[63] = 1.;
	J[137] = 1.;

   /*** derivatives for constraint 95 ***/

	J[66] = 1.;
	J[139] = 1.;

   /*** derivatives for constraint 96 ***/

	J[69] = 1.;
	J[141] = 1.;

   /*** derivatives for constraint 97 ***/

	J[72] = 1.;
	J[143] = 1.;

   /*** derivatives for constraint 98 ***/

	J[75] = 1.;
	J[145] = 1.;

   /*** derivatives for constraint 99 ***/

	J[78] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 100 ***/

	J[4] = 1.;
	J[9] = 1.;
	J[14] = 1.;
	J[19] = 1.;
	J[24] = 1.;
	J[29] = 1.;
	J[34] = 1.;
	J[39] = 1.;
	J[44] = 1.;
	J[48] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
