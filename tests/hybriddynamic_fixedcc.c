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
 fint hybriddynamic_fixedcc_auxcom_[1] = { 0 /* nlc */ };
 fint hybriddynamic_fixedcc_funcom_[356] = {
	121 /* nvar */,
	1 /* nobj */,
	99 /* ncon */,
	228 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
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
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
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
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	43,
	45,
	47,
	49,
	51,
	53,
	55,
	57,
	59,
	61,
	62,
	65,
	68,
	71,
	74,
	77,
	80,
	83,
	86,
	89,
	92,
	94,
	96,
	98,
	100,
	102,
	104,
	106,
	108,
	110,
	112,
	114,
	116,
	118,
	120,
	122,
	124,
	126,
	128,
	130,
	132,
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
	163,
	166,
	169,
	172,
	175,
	178,
	181,
	184,
	187,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	202,
	205,
	208,
	211,
	214,
	217,
	220,
	223,
	226,
	229,

	/* rownos */
	1,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	11,
	50,
	12,
	51,
	13,
	52,
	14,
	53,
	15,
	54,
	16,
	55,
	17,
	56,
	18,
	57,
	19,
	58,
	20,
	59,
	39,
	40,
	80,
	90,
	41,
	81,
	91,
	42,
	82,
	92,
	43,
	83,
	93,
	44,
	84,
	94,
	45,
	85,
	95,
	46,
	86,
	96,
	47,
	87,
	97,
	48,
	88,
	98,
	49,
	89,
	99,
	50,
	60,
	51,
	61,
	52,
	62,
	53,
	63,
	54,
	64,
	55,
	65,
	56,
	66,
	57,
	67,
	58,
	68,
	59,
	69,
	50,
	70,
	51,
	71,
	52,
	72,
	53,
	73,
	54,
	74,
	55,
	75,
	56,
	76,
	57,
	77,
	58,
	78,
	59,
	79,
	11,
	30,
	12,
	30,
	31,
	13,
	31,
	32,
	14,
	32,
	33,
	15,
	33,
	34,
	16,
	34,
	35,
	17,
	35,
	36,
	18,
	36,
	37,
	19,
	37,
	38,
	20,
	38,
	39,
	1,
	21,
	2,
	21,
	22,
	3,
	22,
	23,
	4,
	23,
	24,
	5,
	24,
	25,
	6,
	25,
	26,
	7,
	26,
	27,
	8,
	27,
	28,
	9,
	28,
	29,
	10,
	29,
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
	30,
	40,
	12,
	31,
	41,
	13,
	32,
	42,
	14,
	33,
	43,
	15,
	34,
	44,
	16,
	35,
	45,
	17,
	36,
	46,
	18,
	37,
	47,
	19,
	38,
	48,
	20,
	39,
	49 };

 real hybriddynamic_fixedcc_boundc_[1+242+198] /* Infinity, variable bounds, constraint bounds */ = {
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
		2.,
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
		1.,
		1.};

 real hybriddynamic_fixedcc_x0comn_[121] = {
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
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
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
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

 static real hybriddynamic_fixedcc_pd[41];
static real hybriddynamic_fixedcc_old_x[121];
static int hybriddynamic_fixedcc_xkind = -1;

 static int
hybriddynamic_fixedcc_xcheck(real *x)
{
	real *x1 = hybriddynamic_fixedcc_old_x, *xe = x + 121;
	errno = 0;
	if (hybriddynamic_fixedcc_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hybriddynamic_fixedcc_xkind = 0;
	return 1;
	}
 real
hybriddynamic_fixedcc_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (hybriddynamic_fixedcc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[50] + -1.66666666666667;
	v[1] = v[0] * v[0];
	hybriddynamic_fixedcc_pd[0] = v[0] + v[0];
	hybriddynamic_fixedcc_pd[1] = x[40] * x[40];
	hybriddynamic_fixedcc_pd[2] = x[40] + x[40];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[1];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[3] = x[41] * x[41];
	hybriddynamic_fixedcc_pd[4] = x[41] + x[41];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[3];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[5] = x[42] * x[42];
	hybriddynamic_fixedcc_pd[6] = x[42] + x[42];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[5];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[7] = x[43] * x[43];
	hybriddynamic_fixedcc_pd[8] = x[43] + x[43];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[7];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[9] = x[44] * x[44];
	hybriddynamic_fixedcc_pd[10] = x[44] + x[44];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[9];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[11] = x[45] * x[45];
	hybriddynamic_fixedcc_pd[12] = x[45] + x[45];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[11];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[13] = x[46] * x[46];
	hybriddynamic_fixedcc_pd[14] = x[46] + x[46];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[13];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[15] = x[47] * x[47];
	hybriddynamic_fixedcc_pd[16] = x[47] + x[47];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[15];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[17] = x[48] * x[48];
	hybriddynamic_fixedcc_pd[18] = x[48] + x[48];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[17];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[19] = x[49] * x[49];
	hybriddynamic_fixedcc_pd[20] = x[49] + x[49];
	v[0] = 0.2 * hybriddynamic_fixedcc_pd[19];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[21] = x[30] * x[10];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[21];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[22] = x[20] * x[0];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[22];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[23] = x[31] * x[11];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[23];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[24] = x[21] * x[1];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[24];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[25] = x[32] * x[12];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[25];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[26] = x[22] * x[2];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[26];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[27] = x[33] * x[13];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[27];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[28] = x[23] * x[3];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[28];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[29] = x[34] * x[14];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[29];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[30] = x[24] * x[4];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[30];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[31] = x[35] * x[15];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[31];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[32] = x[25] * x[5];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[32];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[33] = x[36] * x[16];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[33];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[34] = x[26] * x[6];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[34];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[35] = x[37] * x[17];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[35];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[36] = x[27] * x[7];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[36];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[37] = x[38] * x[18];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[37];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[38] = x[28] * x[8];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[38];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[39] = x[39] * x[19];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[39];
	v[1] += v[0];
	hybriddynamic_fixedcc_pd[40] = x[29] * x[9];
	v[0] = 1000. * hybriddynamic_fixedcc_pd[40];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[9] = 1000.*x[29];
	g[29] = 1000.*x[9];
	g[19] = 1000.*x[39];
	g[39] = 1000.*x[19];
	g[8] = 1000.*x[28];
	g[28] = 1000.*x[8];
	g[18] = 1000.*x[38];
	g[38] = 1000.*x[18];
	g[7] = 1000.*x[27];
	g[27] = 1000.*x[7];
	g[17] = 1000.*x[37];
	g[37] = 1000.*x[17];
	g[6] = 1000.*x[26];
	g[26] = 1000.*x[6];
	g[16] = 1000.*x[36];
	g[36] = 1000.*x[16];
	g[5] = 1000.*x[25];
	g[25] = 1000.*x[5];
	g[15] = 1000.*x[35];
	g[35] = 1000.*x[15];
	g[4] = 1000.*x[24];
	g[24] = 1000.*x[4];
	g[14] = 1000.*x[34];
	g[34] = 1000.*x[14];
	g[3] = 1000.*x[23];
	g[23] = 1000.*x[3];
	g[13] = 1000.*x[33];
	g[33] = 1000.*x[13];
	g[2] = 1000.*x[22];
	g[22] = 1000.*x[2];
	g[12] = 1000.*x[32];
	g[32] = 1000.*x[12];
	g[1] = 1000.*x[21];
	g[21] = 1000.*x[1];
	g[11] = 1000.*x[31];
	g[31] = 1000.*x[11];
	g[0] = 1000.*x[20];
	g[20] = 1000.*x[0];
	g[10] = 1000.*x[30];
	g[30] = 1000.*x[10];
	g[49] = 0.2*hybriddynamic_fixedcc_pd[20];
	g[48] = 0.2*hybriddynamic_fixedcc_pd[18];
	g[47] = 0.2*hybriddynamic_fixedcc_pd[16];
	g[46] = 0.2*hybriddynamic_fixedcc_pd[14];
	g[45] = 0.2*hybriddynamic_fixedcc_pd[12];
	g[44] = 0.2*hybriddynamic_fixedcc_pd[10];
	g[43] = 0.2*hybriddynamic_fixedcc_pd[8];
	g[42] = 0.2*hybriddynamic_fixedcc_pd[6];
	g[41] = 0.2*hybriddynamic_fixedcc_pd[4];
	g[40] = 0.2*hybriddynamic_fixedcc_pd[2];
	g[50] = hybriddynamic_fixedcc_pd[0];
	}

	return v[1];
}

 void
hybriddynamic_fixedcc_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (hybriddynamic_fixedcc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[91];
	t1 += x[101];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[92];
	t1 += x[102];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[93];
	t1 += x[103];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[94];
	t1 += x[104];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[95];
	t1 += x[105];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[96];
	t1 += x[106];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[97];
	t1 += x[107];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[98];
	t1 += x[108];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[99];
	t1 += x[109];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[100];
	t1 += x[110];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[40];
	t1 += -x[81];
	t1 += -0.2*x[111];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[41];
	t1 += -x[82];
	t1 += -0.2*x[112];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[42];
	t1 += -x[83];
	t1 += -0.2*x[113];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[43];
	t1 += -x[84];
	t1 += -0.2*x[114];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[44];
	t1 += -x[85];
	t1 += -0.2*x[115];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[45];
	t1 += -x[86];
	t1 += -0.2*x[116];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[46];
	t1 += -x[87];
	t1 += -0.2*x[117];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[47];
	t1 += -x[88];
	t1 += -0.2*x[118];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[48];
	t1 += -x[89];
	t1 += -0.2*x[119];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[49];
	t1 += -x[90];
	t1 += -0.2*x[120];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[91];
	t1 += x[92];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[92];
	t1 += x[93];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[93];
	t1 += x[94];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[94];
	t1 += x[95];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[95];
	t1 += x[96];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[96];
	t1 += x[97];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[97];
	t1 += x[98];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[98];
	t1 += x[99];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[99];
	t1 += x[100];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[81];
	t1 += x[82];
	t1 += -0.2*x[111];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[82];
	t1 += x[83];
	t1 += -0.2*x[112];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[83];
	t1 += x[84];
	t1 += -0.2*x[113];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[84];
	t1 += x[85];
	t1 += -0.2*x[114];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[85];
	t1 += x[86];
	t1 += -0.2*x[115];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[86];
	t1 += x[87];
	t1 += -0.2*x[116];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[87];
	t1 += x[88];
	t1 += -0.2*x[117];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[88];
	t1 += x[89];
	t1 += -0.2*x[118];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[89];
	t1 += x[90];
	t1 += -0.2*x[119];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[50];
	t1 += -x[90];
	t1 += -0.2*x[120];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[51];
	t1 += x[111];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[52];
	t1 += x[112];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[53];
	t1 += x[113];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[54];
	t1 += x[114];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[55];
	t1 += x[115];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[56];
	t1 += x[116];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[57];
	t1 += x[117];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[58];
	t1 += x[118];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[59];
	t1 += x[119];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[60];
	t1 += x[120];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[40];
	t1 += -x[61];
	t1 += x[71];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[41];
	t1 += -x[62];
	t1 += x[72];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[42];
	t1 += -x[63];
	t1 += x[73];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[43];
	t1 += -x[64];
	t1 += x[74];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[44];
	t1 += -x[65];
	t1 += x[75];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[45];
	t1 += -x[66];
	t1 += x[76];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[46];
	t1 += -x[67];
	t1 += x[77];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[47];
	t1 += -x[68];
	t1 += x[78];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[48];
	t1 += -x[69];
	t1 += x[79];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[49];
	t1 += -x[70];
	t1 += x[80];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[0];
	t1 += -x[61];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[1];
	t1 += -x[62];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[2];
	t1 += -x[63];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[3];
	t1 += -x[64];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[4];
	t1 += -x[65];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[5];
	t1 += -x[66];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[6];
	t1 += -x[67];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[7];
	t1 += -x[68];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[8];
	t1 += -x[69];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[9];
	t1 += -x[70];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[10];
	t1 += -x[71];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[11];
	t1 += -x[72];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[12];
	t1 += -x[73];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[13];
	t1 += -x[74];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[14];
	t1 += -x[75];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[15];
	t1 += -x[76];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[16];
	t1 += -x[77];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[17];
	t1 += -x[78];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[18];
	t1 += -x[79];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[19];
	t1 += -x[80];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[20];
	t1 += x[51];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[21];
	t1 += x[52];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[22];
	t1 += x[53];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[23];
	t1 += x[54];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[24];
	t1 += x[55];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[25];
	t1 += x[56];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[26];
	t1 += x[57];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[27];
	t1 += x[58];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[28];
	t1 += x[59];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[29];
	t1 += x[60];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[30];
	t1 += -x[51];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[31];
	t1 += -x[52];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[32];
	t1 += -x[53];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[33];
	t1 += -x[54];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[34];
	t1 += -x[55];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[35];
	t1 += -x[56];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[36];
	t1 += -x[57];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[37];
	t1 += -x[58];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[38];
	t1 += -x[59];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[39];
	t1 += -x[60];
	c[98] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[160] = -1.;
	J[188] = 1.;

   /*** derivatives for constraint 2 ***/

	J[162] = -1.;
	J[189] = 1.;

   /*** derivatives for constraint 3 ***/

	J[165] = -1.;
	J[190] = 1.;

   /*** derivatives for constraint 4 ***/

	J[168] = -1.;
	J[191] = 1.;

   /*** derivatives for constraint 5 ***/

	J[171] = -1.;
	J[192] = 1.;

   /*** derivatives for constraint 6 ***/

	J[174] = -1.;
	J[193] = 1.;

   /*** derivatives for constraint 7 ***/

	J[177] = -1.;
	J[194] = 1.;

   /*** derivatives for constraint 8 ***/

	J[180] = -1.;
	J[195] = 1.;

   /*** derivatives for constraint 9 ***/

	J[183] = -1.;
	J[196] = 1.;

   /*** derivatives for constraint 10 ***/

	J[186] = -1.;
	J[197] = 1.;

   /*** derivatives for constraint 11 ***/

	J[40] = 1.;
	J[131] = -1.;
	J[198] = -0.2;

   /*** derivatives for constraint 12 ***/

	J[42] = 1.;
	J[133] = -1.;
	J[201] = -0.2;

   /*** derivatives for constraint 13 ***/

	J[44] = 1.;
	J[136] = -1.;
	J[204] = -0.2;

   /*** derivatives for constraint 14 ***/

	J[46] = 1.;
	J[139] = -1.;
	J[207] = -0.2;

   /*** derivatives for constraint 15 ***/

	J[48] = 1.;
	J[142] = -1.;
	J[210] = -0.2;

   /*** derivatives for constraint 16 ***/

	J[50] = 1.;
	J[145] = -1.;
	J[213] = -0.2;

   /*** derivatives for constraint 17 ***/

	J[52] = 1.;
	J[148] = -1.;
	J[216] = -0.2;

   /*** derivatives for constraint 18 ***/

	J[54] = 1.;
	J[151] = -1.;
	J[219] = -0.2;

   /*** derivatives for constraint 19 ***/

	J[56] = 1.;
	J[154] = -1.;
	J[222] = -0.2;

   /*** derivatives for constraint 20 ***/

	J[58] = 1.;
	J[157] = -1.;
	J[225] = -0.2;

   /*** derivatives for constraint 21 ***/

	J[161] = -1.;
	J[163] = 1.;

   /*** derivatives for constraint 22 ***/

	J[164] = -1.;
	J[166] = 1.;

   /*** derivatives for constraint 23 ***/

	J[167] = -1.;
	J[169] = 1.;

   /*** derivatives for constraint 24 ***/

	J[170] = -1.;
	J[172] = 1.;

   /*** derivatives for constraint 25 ***/

	J[173] = -1.;
	J[175] = 1.;

   /*** derivatives for constraint 26 ***/

	J[176] = -1.;
	J[178] = 1.;

   /*** derivatives for constraint 27 ***/

	J[179] = -1.;
	J[181] = 1.;

   /*** derivatives for constraint 28 ***/

	J[182] = -1.;
	J[184] = 1.;

   /*** derivatives for constraint 29 ***/

	J[185] = -1.;
	J[187] = 1.;

   /*** derivatives for constraint 30 ***/

	J[132] = -1.;
	J[134] = 1.;
	J[199] = -0.2;

   /*** derivatives for constraint 31 ***/

	J[135] = -1.;
	J[137] = 1.;
	J[202] = -0.2;

   /*** derivatives for constraint 32 ***/

	J[138] = -1.;
	J[140] = 1.;
	J[205] = -0.2;

   /*** derivatives for constraint 33 ***/

	J[141] = -1.;
	J[143] = 1.;
	J[208] = -0.2;

   /*** derivatives for constraint 34 ***/

	J[144] = -1.;
	J[146] = 1.;
	J[211] = -0.2;

   /*** derivatives for constraint 35 ***/

	J[147] = -1.;
	J[149] = 1.;
	J[214] = -0.2;

   /*** derivatives for constraint 36 ***/

	J[150] = -1.;
	J[152] = 1.;
	J[217] = -0.2;

   /*** derivatives for constraint 37 ***/

	J[153] = -1.;
	J[155] = 1.;
	J[220] = -0.2;

   /*** derivatives for constraint 38 ***/

	J[156] = -1.;
	J[158] = 1.;
	J[223] = -0.2;

   /*** derivatives for constraint 39 ***/

	J[60] = 1.;
	J[159] = -1.;
	J[226] = -0.2;

   /*** derivatives for constraint 40 ***/

	J[61] = 1.;
	J[200] = 1.;

   /*** derivatives for constraint 41 ***/

	J[64] = 1.;
	J[203] = 1.;

   /*** derivatives for constraint 42 ***/

	J[67] = 1.;
	J[206] = 1.;

   /*** derivatives for constraint 43 ***/

	J[70] = 1.;
	J[209] = 1.;

   /*** derivatives for constraint 44 ***/

	J[73] = 1.;
	J[212] = 1.;

   /*** derivatives for constraint 45 ***/

	J[76] = 1.;
	J[215] = 1.;

   /*** derivatives for constraint 46 ***/

	J[79] = 1.;
	J[218] = 1.;

   /*** derivatives for constraint 47 ***/

	J[82] = 1.;
	J[221] = 1.;

   /*** derivatives for constraint 48 ***/

	J[85] = 1.;
	J[224] = 1.;

   /*** derivatives for constraint 49 ***/

	J[88] = 1.;
	J[227] = 1.;

   /*** derivatives for constraint 50 ***/

	J[41] = 1.;
	J[91] = -1.;
	J[111] = 1.;

   /*** derivatives for constraint 51 ***/

	J[43] = 1.;
	J[93] = -1.;
	J[113] = 1.;

   /*** derivatives for constraint 52 ***/

	J[45] = 1.;
	J[95] = -1.;
	J[115] = 1.;

   /*** derivatives for constraint 53 ***/

	J[47] = 1.;
	J[97] = -1.;
	J[117] = 1.;

   /*** derivatives for constraint 54 ***/

	J[49] = 1.;
	J[99] = -1.;
	J[119] = 1.;

   /*** derivatives for constraint 55 ***/

	J[51] = 1.;
	J[101] = -1.;
	J[121] = 1.;

   /*** derivatives for constraint 56 ***/

	J[53] = 1.;
	J[103] = -1.;
	J[123] = 1.;

   /*** derivatives for constraint 57 ***/

	J[55] = 1.;
	J[105] = -1.;
	J[125] = 1.;

   /*** derivatives for constraint 58 ***/

	J[57] = 1.;
	J[107] = -1.;
	J[127] = 1.;

   /*** derivatives for constraint 59 ***/

	J[59] = 1.;
	J[109] = -1.;
	J[129] = 1.;

   /*** derivatives for constraint 60 ***/

	J[0] = 1.;
	J[92] = -1.;

   /*** derivatives for constraint 61 ***/

	J[1] = 1.;
	J[94] = -1.;

   /*** derivatives for constraint 62 ***/

	J[2] = 1.;
	J[96] = -1.;

   /*** derivatives for constraint 63 ***/

	J[3] = 1.;
	J[98] = -1.;

   /*** derivatives for constraint 64 ***/

	J[4] = 1.;
	J[100] = -1.;

   /*** derivatives for constraint 65 ***/

	J[5] = 1.;
	J[102] = -1.;

   /*** derivatives for constraint 66 ***/

	J[6] = 1.;
	J[104] = -1.;

   /*** derivatives for constraint 67 ***/

	J[7] = 1.;
	J[106] = -1.;

   /*** derivatives for constraint 68 ***/

	J[8] = 1.;
	J[108] = -1.;

   /*** derivatives for constraint 69 ***/

	J[9] = 1.;
	J[110] = -1.;

   /*** derivatives for constraint 70 ***/

	J[10] = 1.;
	J[112] = -1.;

   /*** derivatives for constraint 71 ***/

	J[11] = 1.;
	J[114] = -1.;

   /*** derivatives for constraint 72 ***/

	J[12] = 1.;
	J[116] = -1.;

   /*** derivatives for constraint 73 ***/

	J[13] = 1.;
	J[118] = -1.;

   /*** derivatives for constraint 74 ***/

	J[14] = 1.;
	J[120] = -1.;

   /*** derivatives for constraint 75 ***/

	J[15] = 1.;
	J[122] = -1.;

   /*** derivatives for constraint 76 ***/

	J[16] = 1.;
	J[124] = -1.;

   /*** derivatives for constraint 77 ***/

	J[17] = 1.;
	J[126] = -1.;

   /*** derivatives for constraint 78 ***/

	J[18] = 1.;
	J[128] = -1.;

   /*** derivatives for constraint 79 ***/

	J[19] = 1.;
	J[130] = -1.;

   /*** derivatives for constraint 80 ***/

	J[20] = 1.;
	J[62] = 1.;

   /*** derivatives for constraint 81 ***/

	J[21] = 1.;
	J[65] = 1.;

   /*** derivatives for constraint 82 ***/

	J[22] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 83 ***/

	J[23] = 1.;
	J[71] = 1.;

   /*** derivatives for constraint 84 ***/

	J[24] = 1.;
	J[74] = 1.;

   /*** derivatives for constraint 85 ***/

	J[25] = 1.;
	J[77] = 1.;

   /*** derivatives for constraint 86 ***/

	J[26] = 1.;
	J[80] = 1.;

   /*** derivatives for constraint 87 ***/

	J[27] = 1.;
	J[83] = 1.;

   /*** derivatives for constraint 88 ***/

	J[28] = 1.;
	J[86] = 1.;

   /*** derivatives for constraint 89 ***/

	J[29] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 90 ***/

	J[30] = 1.;
	J[63] = -1.;

   /*** derivatives for constraint 91 ***/

	J[31] = 1.;
	J[66] = -1.;

   /*** derivatives for constraint 92 ***/

	J[32] = 1.;
	J[69] = -1.;

   /*** derivatives for constraint 93 ***/

	J[33] = 1.;
	J[72] = -1.;

   /*** derivatives for constraint 94 ***/

	J[34] = 1.;
	J[75] = -1.;

   /*** derivatives for constraint 95 ***/

	J[35] = 1.;
	J[78] = -1.;

   /*** derivatives for constraint 96 ***/

	J[36] = 1.;
	J[81] = -1.;

   /*** derivatives for constraint 97 ***/

	J[37] = 1.;
	J[84] = -1.;

   /*** derivatives for constraint 98 ***/

	J[38] = 1.;
	J[87] = -1.;

   /*** derivatives for constraint 99 ***/

	J[39] = 1.;
	J[90] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
