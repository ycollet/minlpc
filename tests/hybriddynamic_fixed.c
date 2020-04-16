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
 fint hybriddynamic_fixed_auxcom_[1] = { 0 /* nlc */ };
 fint hybriddynamic_fixed_funcom_[256] = {
	71 /* nvar */,
	1 /* nobj */,
	79 /* ncon */,
	178 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	25,
	28,
	31,
	32,
	34,
	36,
	38,
	40,
	42,
	44,
	46,
	48,
	50,
	52,
	54,
	57,
	60,
	63,
	66,
	69,
	72,
	75,
	78,
	81,
	83,
	86,
	89,
	92,
	95,
	98,
	101,
	104,
	107,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	122,
	125,
	128,
	131,
	134,
	137,
	140,
	143,
	146,
	149,
	152,
	155,
	158,
	161,
	164,
	167,
	170,
	173,
	176,
	179,

	/* rownos */
	1,
	31,
	41,
	12,
	32,
	42,
	13,
	33,
	43,
	14,
	34,
	44,
	15,
	35,
	45,
	16,
	36,
	46,
	17,
	37,
	47,
	18,
	38,
	48,
	19,
	39,
	49,
	20,
	40,
	50,
	69,
	21,
	70,
	22,
	71,
	23,
	72,
	24,
	73,
	25,
	74,
	26,
	75,
	27,
	76,
	28,
	77,
	29,
	78,
	30,
	79,
	11,
	60,
	12,
	60,
	61,
	13,
	61,
	62,
	14,
	62,
	63,
	15,
	63,
	64,
	16,
	64,
	65,
	17,
	65,
	66,
	18,
	66,
	67,
	19,
	67,
	68,
	20,
	68,
	69,
	1,
	51,
	2,
	51,
	52,
	3,
	52,
	53,
	4,
	53,
	54,
	5,
	54,
	55,
	6,
	55,
	56,
	7,
	56,
	57,
	8,
	57,
	58,
	9,
	58,
	59,
	10,
	59,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	60,
	70,
	12,
	61,
	71,
	13,
	62,
	72,
	14,
	63,
	73,
	15,
	64,
	74,
	16,
	65,
	75,
	17,
	66,
	76,
	18,
	67,
	77,
	19,
	68,
	78,
	20,
	69,
	79,
	21,
	31,
	41,
	22,
	32,
	42,
	23,
	33,
	43,
	24,
	34,
	44,
	25,
	35,
	45,
	26,
	36,
	46,
	27,
	37,
	47,
	28,
	38,
	48,
	29,
	39,
	49,
	30,
	40,
	50 };

 real hybriddynamic_fixed_boundc_[1+142+158] /* Infinity, variable bounds, constraint bounds */ = {
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
		2.};

 real hybriddynamic_fixed_x0comn_[71] = {
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

 static real hybriddynamic_fixed_pd[21];
static real hybriddynamic_fixed_old_x[71];
static int hybriddynamic_fixed_xkind = -1;

 static int
hybriddynamic_fixed_xcheck(real *x)
{
	real *x1 = hybriddynamic_fixed_old_x, *xe = x + 71;
	errno = 0;
	if (hybriddynamic_fixed_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hybriddynamic_fixed_xkind = 0;
	return 1;
	}
 real
hybriddynamic_fixed_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (hybriddynamic_fixed_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[10] + -1.66666666666667;
	v[1] = v[0] * v[0];
	hybriddynamic_fixed_pd[0] = v[0] + v[0];
	hybriddynamic_fixed_pd[1] = x[0] * x[0];
	hybriddynamic_fixed_pd[2] = x[0] + x[0];
	v[0] = 0.2 * hybriddynamic_fixed_pd[1];
	v[1] += v[0];
	hybriddynamic_fixed_pd[3] = x[1] * x[1];
	hybriddynamic_fixed_pd[4] = x[1] + x[1];
	v[0] = 0.2 * hybriddynamic_fixed_pd[3];
	v[1] += v[0];
	hybriddynamic_fixed_pd[5] = x[2] * x[2];
	hybriddynamic_fixed_pd[6] = x[2] + x[2];
	v[0] = 0.2 * hybriddynamic_fixed_pd[5];
	v[1] += v[0];
	hybriddynamic_fixed_pd[7] = x[3] * x[3];
	hybriddynamic_fixed_pd[8] = x[3] + x[3];
	v[0] = 0.2 * hybriddynamic_fixed_pd[7];
	v[1] += v[0];
	hybriddynamic_fixed_pd[9] = x[4] * x[4];
	hybriddynamic_fixed_pd[10] = x[4] + x[4];
	v[0] = 0.2 * hybriddynamic_fixed_pd[9];
	v[1] += v[0];
	hybriddynamic_fixed_pd[11] = x[5] * x[5];
	hybriddynamic_fixed_pd[12] = x[5] + x[5];
	v[0] = 0.2 * hybriddynamic_fixed_pd[11];
	v[1] += v[0];
	hybriddynamic_fixed_pd[13] = x[6] * x[6];
	hybriddynamic_fixed_pd[14] = x[6] + x[6];
	v[0] = 0.2 * hybriddynamic_fixed_pd[13];
	v[1] += v[0];
	hybriddynamic_fixed_pd[15] = x[7] * x[7];
	hybriddynamic_fixed_pd[16] = x[7] + x[7];
	v[0] = 0.2 * hybriddynamic_fixed_pd[15];
	v[1] += v[0];
	hybriddynamic_fixed_pd[17] = x[8] * x[8];
	hybriddynamic_fixed_pd[18] = x[8] + x[8];
	v[0] = 0.2 * hybriddynamic_fixed_pd[17];
	v[1] += v[0];
	hybriddynamic_fixed_pd[19] = x[9] * x[9];
	hybriddynamic_fixed_pd[20] = x[9] + x[9];
	v[0] = 0.2 * hybriddynamic_fixed_pd[19];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[9] = 0.2*hybriddynamic_fixed_pd[20];
	g[8] = 0.2*hybriddynamic_fixed_pd[18];
	g[7] = 0.2*hybriddynamic_fixed_pd[16];
	g[6] = 0.2*hybriddynamic_fixed_pd[14];
	g[5] = 0.2*hybriddynamic_fixed_pd[12];
	g[4] = 0.2*hybriddynamic_fixed_pd[10];
	g[3] = 0.2*hybriddynamic_fixed_pd[8];
	g[2] = 0.2*hybriddynamic_fixed_pd[6];
	g[1] = 0.2*hybriddynamic_fixed_pd[4];
	g[0] = 0.2*hybriddynamic_fixed_pd[2];
	g[10] = hybriddynamic_fixed_pd[0];
	}

	return v[1];
}

 void
hybriddynamic_fixed_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (hybriddynamic_fixed_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[31];
	t1 += x[41];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[32];
	t1 += x[42];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[33];
	t1 += x[43];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[34];
	t1 += x[44];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[35];
	t1 += x[45];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[36];
	t1 += x[46];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[37];
	t1 += x[47];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[38];
	t1 += x[48];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[39];
	t1 += x[49];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[40];
	t1 += x[50];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[0];
	t1 += -x[21];
	t1 += -0.2*x[51];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[1];
	t1 += -x[22];
	t1 += -0.2*x[52];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[2];
	t1 += -x[23];
	t1 += -0.2*x[53];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[3];
	t1 += -x[24];
	t1 += -0.2*x[54];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[4];
	t1 += -x[25];
	t1 += -0.2*x[55];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[5];
	t1 += -x[26];
	t1 += -0.2*x[56];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[6];
	t1 += -x[27];
	t1 += -0.2*x[57];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[7];
	t1 += -x[28];
	t1 += -0.2*x[58];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[8];
	t1 += -x[29];
	t1 += -0.2*x[59];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[9];
	t1 += -x[30];
	t1 += -0.2*x[60];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[11];
	t1 += -2.*x[61];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[12];
	t1 += -2.*x[62];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[13];
	t1 += -2.*x[63];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[14];
	t1 += -2.*x[64];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[15];
	t1 += -2.*x[65];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[16];
	t1 += -2.*x[66];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[17];
	t1 += -2.*x[67];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[18];
	t1 += -2.*x[68];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[19];
	t1 += -2.*x[69];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[20];
	t1 += -2.*x[70];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[0];
	t1 += 2.*x[61];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[1];
	t1 += 2.*x[62];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[2];
	t1 += 2.*x[63];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[3];
	t1 += 2.*x[64];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[4];
	t1 += 2.*x[65];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[5];
	t1 += 2.*x[66];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[6];
	t1 += 2.*x[67];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[7];
	t1 += 2.*x[68];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[8];
	t1 += 2.*x[69];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[9];
	t1 += 2.*x[70];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[0];
	t1 += 2.*x[61];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[1];
	t1 += 2.*x[62];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[2];
	t1 += 2.*x[63];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[3];
	t1 += 2.*x[64];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[4];
	t1 += 2.*x[65];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[5];
	t1 += 2.*x[66];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[6];
	t1 += 2.*x[67];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[7];
	t1 += 2.*x[68];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[8];
	t1 += 2.*x[69];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[9];
	t1 += 2.*x[70];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[31];
	t1 += x[32];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[32];
	t1 += x[33];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[33];
	t1 += x[34];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[34];
	t1 += x[35];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[35];
	t1 += x[36];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[36];
	t1 += x[37];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[37];
	t1 += x[38];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[38];
	t1 += x[39];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[39];
	t1 += x[40];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[21];
	t1 += x[22];
	t1 += -0.2*x[51];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[22];
	t1 += x[23];
	t1 += -0.2*x[52];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[23];
	t1 += x[24];
	t1 += -0.2*x[53];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[24];
	t1 += x[25];
	t1 += -0.2*x[54];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[25];
	t1 += x[26];
	t1 += -0.2*x[55];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[26];
	t1 += x[27];
	t1 += -0.2*x[56];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[27];
	t1 += x[28];
	t1 += -0.2*x[57];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[28];
	t1 += x[29];
	t1 += -0.2*x[58];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[29];
	t1 += x[30];
	t1 += -0.2*x[59];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[10];
	t1 += -x[30];
	t1 += -0.2*x[60];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[11];
	t1 += x[51];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[12];
	t1 += x[52];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[13];
	t1 += x[53];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[14];
	t1 += x[54];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[15];
	t1 += x[55];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[16];
	t1 += x[56];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[17];
	t1 += x[57];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[18];
	t1 += x[58];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[19];
	t1 += x[59];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[20];
	t1 += x[60];
	c[78] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[80] = -1.;
	J[108] = 1.;

   /*** derivatives for constraint 2 ***/

	J[82] = -1.;
	J[109] = 1.;

   /*** derivatives for constraint 3 ***/

	J[85] = -1.;
	J[110] = 1.;

   /*** derivatives for constraint 4 ***/

	J[88] = -1.;
	J[111] = 1.;

   /*** derivatives for constraint 5 ***/

	J[91] = -1.;
	J[112] = 1.;

   /*** derivatives for constraint 6 ***/

	J[94] = -1.;
	J[113] = 1.;

   /*** derivatives for constraint 7 ***/

	J[97] = -1.;
	J[114] = 1.;

   /*** derivatives for constraint 8 ***/

	J[100] = -1.;
	J[115] = 1.;

   /*** derivatives for constraint 9 ***/

	J[103] = -1.;
	J[116] = 1.;

   /*** derivatives for constraint 10 ***/

	J[106] = -1.;
	J[117] = 1.;

   /*** derivatives for constraint 11 ***/

	J[0] = 1.;
	J[51] = -1.;
	J[118] = -0.2;

   /*** derivatives for constraint 12 ***/

	J[3] = 1.;
	J[53] = -1.;
	J[121] = -0.2;

   /*** derivatives for constraint 13 ***/

	J[6] = 1.;
	J[56] = -1.;
	J[124] = -0.2;

   /*** derivatives for constraint 14 ***/

	J[9] = 1.;
	J[59] = -1.;
	J[127] = -0.2;

   /*** derivatives for constraint 15 ***/

	J[12] = 1.;
	J[62] = -1.;
	J[130] = -0.2;

   /*** derivatives for constraint 16 ***/

	J[15] = 1.;
	J[65] = -1.;
	J[133] = -0.2;

   /*** derivatives for constraint 17 ***/

	J[18] = 1.;
	J[68] = -1.;
	J[136] = -0.2;

   /*** derivatives for constraint 18 ***/

	J[21] = 1.;
	J[71] = -1.;
	J[139] = -0.2;

   /*** derivatives for constraint 19 ***/

	J[24] = 1.;
	J[74] = -1.;
	J[142] = -0.2;

   /*** derivatives for constraint 20 ***/

	J[27] = 1.;
	J[77] = -1.;
	J[145] = -0.2;

   /*** derivatives for constraint 21 ***/

	J[31] = 1.;
	J[148] = -2.;

   /*** derivatives for constraint 22 ***/

	J[33] = 1.;
	J[151] = -2.;

   /*** derivatives for constraint 23 ***/

	J[35] = 1.;
	J[154] = -2.;

   /*** derivatives for constraint 24 ***/

	J[37] = 1.;
	J[157] = -2.;

   /*** derivatives for constraint 25 ***/

	J[39] = 1.;
	J[160] = -2.;

   /*** derivatives for constraint 26 ***/

	J[41] = 1.;
	J[163] = -2.;

   /*** derivatives for constraint 27 ***/

	J[43] = 1.;
	J[166] = -2.;

   /*** derivatives for constraint 28 ***/

	J[45] = 1.;
	J[169] = -2.;

   /*** derivatives for constraint 29 ***/

	J[47] = 1.;
	J[172] = -2.;

   /*** derivatives for constraint 30 ***/

	J[49] = 1.;
	J[175] = -2.;

   /*** derivatives for constraint 31 ***/

	J[1] = -1.;
	J[149] = 2.;

   /*** derivatives for constraint 32 ***/

	J[4] = -1.;
	J[152] = 2.;

   /*** derivatives for constraint 33 ***/

	J[7] = -1.;
	J[155] = 2.;

   /*** derivatives for constraint 34 ***/

	J[10] = -1.;
	J[158] = 2.;

   /*** derivatives for constraint 35 ***/

	J[13] = -1.;
	J[161] = 2.;

   /*** derivatives for constraint 36 ***/

	J[16] = -1.;
	J[164] = 2.;

   /*** derivatives for constraint 37 ***/

	J[19] = -1.;
	J[167] = 2.;

   /*** derivatives for constraint 38 ***/

	J[22] = -1.;
	J[170] = 2.;

   /*** derivatives for constraint 39 ***/

	J[25] = -1.;
	J[173] = 2.;

   /*** derivatives for constraint 40 ***/

	J[28] = -1.;
	J[176] = 2.;

   /*** derivatives for constraint 41 ***/

	J[2] = -1.;
	J[150] = 2.;

   /*** derivatives for constraint 42 ***/

	J[5] = -1.;
	J[153] = 2.;

   /*** derivatives for constraint 43 ***/

	J[8] = -1.;
	J[156] = 2.;

   /*** derivatives for constraint 44 ***/

	J[11] = -1.;
	J[159] = 2.;

   /*** derivatives for constraint 45 ***/

	J[14] = -1.;
	J[162] = 2.;

   /*** derivatives for constraint 46 ***/

	J[17] = -1.;
	J[165] = 2.;

   /*** derivatives for constraint 47 ***/

	J[20] = -1.;
	J[168] = 2.;

   /*** derivatives for constraint 48 ***/

	J[23] = -1.;
	J[171] = 2.;

   /*** derivatives for constraint 49 ***/

	J[26] = -1.;
	J[174] = 2.;

   /*** derivatives for constraint 50 ***/

	J[29] = -1.;
	J[177] = 2.;

   /*** derivatives for constraint 51 ***/

	J[81] = -1.;
	J[83] = 1.;

   /*** derivatives for constraint 52 ***/

	J[84] = -1.;
	J[86] = 1.;

   /*** derivatives for constraint 53 ***/

	J[87] = -1.;
	J[89] = 1.;

   /*** derivatives for constraint 54 ***/

	J[90] = -1.;
	J[92] = 1.;

   /*** derivatives for constraint 55 ***/

	J[93] = -1.;
	J[95] = 1.;

   /*** derivatives for constraint 56 ***/

	J[96] = -1.;
	J[98] = 1.;

   /*** derivatives for constraint 57 ***/

	J[99] = -1.;
	J[101] = 1.;

   /*** derivatives for constraint 58 ***/

	J[102] = -1.;
	J[104] = 1.;

   /*** derivatives for constraint 59 ***/

	J[105] = -1.;
	J[107] = 1.;

   /*** derivatives for constraint 60 ***/

	J[52] = -1.;
	J[54] = 1.;
	J[119] = -0.2;

   /*** derivatives for constraint 61 ***/

	J[55] = -1.;
	J[57] = 1.;
	J[122] = -0.2;

   /*** derivatives for constraint 62 ***/

	J[58] = -1.;
	J[60] = 1.;
	J[125] = -0.2;

   /*** derivatives for constraint 63 ***/

	J[61] = -1.;
	J[63] = 1.;
	J[128] = -0.2;

   /*** derivatives for constraint 64 ***/

	J[64] = -1.;
	J[66] = 1.;
	J[131] = -0.2;

   /*** derivatives for constraint 65 ***/

	J[67] = -1.;
	J[69] = 1.;
	J[134] = -0.2;

   /*** derivatives for constraint 66 ***/

	J[70] = -1.;
	J[72] = 1.;
	J[137] = -0.2;

   /*** derivatives for constraint 67 ***/

	J[73] = -1.;
	J[75] = 1.;
	J[140] = -0.2;

   /*** derivatives for constraint 68 ***/

	J[76] = -1.;
	J[78] = 1.;
	J[143] = -0.2;

   /*** derivatives for constraint 69 ***/

	J[30] = 1.;
	J[79] = -1.;
	J[146] = -0.2;

   /*** derivatives for constraint 70 ***/

	J[32] = 1.;
	J[120] = 1.;

   /*** derivatives for constraint 71 ***/

	J[34] = 1.;
	J[123] = 1.;

   /*** derivatives for constraint 72 ***/

	J[36] = 1.;
	J[126] = 1.;

   /*** derivatives for constraint 73 ***/

	J[38] = 1.;
	J[129] = 1.;

   /*** derivatives for constraint 74 ***/

	J[40] = 1.;
	J[132] = 1.;

   /*** derivatives for constraint 75 ***/

	J[42] = 1.;
	J[135] = 1.;

   /*** derivatives for constraint 76 ***/

	J[44] = 1.;
	J[138] = 1.;

   /*** derivatives for constraint 77 ***/

	J[46] = 1.;
	J[141] = 1.;

   /*** derivatives for constraint 78 ***/

	J[48] = 1.;
	J[144] = 1.;

   /*** derivatives for constraint 79 ***/

	J[50] = 1.;
	J[147] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
