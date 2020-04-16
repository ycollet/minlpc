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
 fint hybriddynamic_varcc_auxcom_[1] = { 20 /* nlc */ };
 fint hybriddynamic_varcc_funcom_[485] = {
	151 /* nvar */,
	1 /* nobj */,
	110 /* ncon */,
	327 /* nzc */,
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
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
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
	120,
	122,
	124,
	126,
	128,
	130,
	132,
	134,
	136,
	138,
	140,
	141,
	144,
	147,
	150,
	153,
	156,
	159,
	162,
	165,
	168,
	171,
	173,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	189,
	191,
	193,
	195,
	197,
	199,
	201,
	203,
	205,
	207,
	209,
	211,
	213,
	215,
	217,
	219,
	221,
	223,
	225,
	227,
	229,
	231,
	233,
	235,
	237,
	239,
	241,
	243,
	245,
	247,
	249,
	251,
	254,
	258,
	262,
	266,
	270,
	274,
	278,
	282,
	286,
	290,
	292,
	295,
	298,
	301,
	304,
	307,
	310,
	313,
	316,
	318,
	319,
	320,
	321,
	322,
	323,
	324,
	325,
	326,
	327,
	328,

	/* rownos */
	1,
	11,
	21,
	31,
	110,
	2,
	12,
	22,
	32,
	110,
	3,
	13,
	23,
	33,
	110,
	4,
	14,
	24,
	34,
	110,
	5,
	15,
	25,
	35,
	110,
	6,
	16,
	26,
	36,
	110,
	7,
	17,
	27,
	37,
	110,
	8,
	18,
	28,
	38,
	110,
	9,
	19,
	29,
	39,
	110,
	10,
	20,
	30,
	110,
	1,
	11,
	40,
	2,
	12,
	41,
	3,
	13,
	42,
	4,
	14,
	43,
	5,
	15,
	44,
	6,
	16,
	45,
	7,
	17,
	46,
	8,
	18,
	47,
	9,
	19,
	48,
	10,
	20,
	49,
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
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	1,
	50,
	2,
	51,
	3,
	52,
	4,
	53,
	5,
	54,
	6,
	55,
	7,
	56,
	8,
	57,
	9,
	58,
	10,
	59,
	20,
	40,
	90,
	100,
	41,
	91,
	101,
	42,
	92,
	102,
	43,
	93,
	103,
	44,
	94,
	104,
	45,
	95,
	105,
	46,
	96,
	106,
	47,
	97,
	107,
	48,
	98,
	108,
	49,
	99,
	109,
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
	50,
	80,
	51,
	81,
	52,
	82,
	53,
	83,
	54,
	84,
	55,
	85,
	56,
	86,
	57,
	87,
	58,
	88,
	59,
	89,
	60,
	70,
	61,
	71,
	62,
	72,
	63,
	73,
	64,
	74,
	65,
	75,
	66,
	76,
	67,
	77,
	68,
	78,
	69,
	79,
	60,
	80,
	61,
	81,
	62,
	82,
	63,
	83,
	64,
	84,
	65,
	85,
	66,
	86,
	67,
	87,
	68,
	88,
	69,
	89,
	1,
	11,
	60,
	2,
	11,
	12,
	61,
	3,
	12,
	13,
	62,
	4,
	13,
	14,
	63,
	5,
	14,
	15,
	64,
	6,
	15,
	16,
	65,
	7,
	16,
	17,
	66,
	8,
	17,
	18,
	67,
	9,
	18,
	19,
	68,
	10,
	19,
	20,
	69,
	21,
	31,
	22,
	31,
	32,
	23,
	32,
	33,
	24,
	33,
	34,
	25,
	34,
	35,
	26,
	35,
	36,
	27,
	36,
	37,
	28,
	37,
	38,
	29,
	38,
	39,
	30,
	39,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30 };

 real hybriddynamic_varcc_boundc_[1+302+220] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.,
		2.,
		2.};

 real hybriddynamic_varcc_x0comn_[151] = {
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
		1. };

 static real hybriddynamic_varcc_pd[41];
static real hybriddynamic_varcc_old_x[151];
static int hybriddynamic_varcc_xkind = -1;

 static int
hybriddynamic_varcc_xcheck(real *x)
{
	real *x1 = hybriddynamic_varcc_old_x, *xe = x + 151;
	errno = 0;
	if (hybriddynamic_varcc_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hybriddynamic_varcc_xkind = 0;
	return 1;
	}
 real
hybriddynamic_varcc_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (hybriddynamic_varcc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[70] + -1.66666666666667;
	v[1] = v[0] * v[0];
	hybriddynamic_varcc_pd[0] = v[0] + v[0];
	hybriddynamic_varcc_pd[1] = x[60] * x[60];
	hybriddynamic_varcc_pd[2] = x[60] + x[60];
	v[0] = hybriddynamic_varcc_pd[1] * x[0];
	v[1] += v[0];
	hybriddynamic_varcc_pd[3] = x[61] * x[61];
	hybriddynamic_varcc_pd[4] = x[61] + x[61];
	v[0] = hybriddynamic_varcc_pd[3] * x[1];
	v[1] += v[0];
	hybriddynamic_varcc_pd[5] = x[62] * x[62];
	hybriddynamic_varcc_pd[6] = x[62] + x[62];
	v[0] = hybriddynamic_varcc_pd[5] * x[2];
	v[1] += v[0];
	hybriddynamic_varcc_pd[7] = x[63] * x[63];
	hybriddynamic_varcc_pd[8] = x[63] + x[63];
	v[0] = hybriddynamic_varcc_pd[7] * x[3];
	v[1] += v[0];
	hybriddynamic_varcc_pd[9] = x[64] * x[64];
	hybriddynamic_varcc_pd[10] = x[64] + x[64];
	v[0] = hybriddynamic_varcc_pd[9] * x[4];
	v[1] += v[0];
	hybriddynamic_varcc_pd[11] = x[65] * x[65];
	hybriddynamic_varcc_pd[12] = x[65] + x[65];
	v[0] = hybriddynamic_varcc_pd[11] * x[5];
	v[1] += v[0];
	hybriddynamic_varcc_pd[13] = x[66] * x[66];
	hybriddynamic_varcc_pd[14] = x[66] + x[66];
	v[0] = hybriddynamic_varcc_pd[13] * x[6];
	v[1] += v[0];
	hybriddynamic_varcc_pd[15] = x[67] * x[67];
	hybriddynamic_varcc_pd[16] = x[67] + x[67];
	v[0] = hybriddynamic_varcc_pd[15] * x[7];
	v[1] += v[0];
	hybriddynamic_varcc_pd[17] = x[68] * x[68];
	hybriddynamic_varcc_pd[18] = x[68] + x[68];
	v[0] = hybriddynamic_varcc_pd[17] * x[8];
	v[1] += v[0];
	hybriddynamic_varcc_pd[19] = x[69] * x[69];
	hybriddynamic_varcc_pd[20] = x[69] + x[69];
	v[0] = hybriddynamic_varcc_pd[19] * x[9];
	v[1] += v[0];
	hybriddynamic_varcc_pd[21] = x[50] * x[30];
	v[0] = 1000. * hybriddynamic_varcc_pd[21];
	v[1] += v[0];
	hybriddynamic_varcc_pd[22] = x[40] * x[20];
	v[0] = 1000. * hybriddynamic_varcc_pd[22];
	v[1] += v[0];
	hybriddynamic_varcc_pd[23] = x[51] * x[31];
	v[0] = 1000. * hybriddynamic_varcc_pd[23];
	v[1] += v[0];
	hybriddynamic_varcc_pd[24] = x[41] * x[21];
	v[0] = 1000. * hybriddynamic_varcc_pd[24];
	v[1] += v[0];
	hybriddynamic_varcc_pd[25] = x[52] * x[32];
	v[0] = 1000. * hybriddynamic_varcc_pd[25];
	v[1] += v[0];
	hybriddynamic_varcc_pd[26] = x[42] * x[22];
	v[0] = 1000. * hybriddynamic_varcc_pd[26];
	v[1] += v[0];
	hybriddynamic_varcc_pd[27] = x[53] * x[33];
	v[0] = 1000. * hybriddynamic_varcc_pd[27];
	v[1] += v[0];
	hybriddynamic_varcc_pd[28] = x[43] * x[23];
	v[0] = 1000. * hybriddynamic_varcc_pd[28];
	v[1] += v[0];
	hybriddynamic_varcc_pd[29] = x[54] * x[34];
	v[0] = 1000. * hybriddynamic_varcc_pd[29];
	v[1] += v[0];
	hybriddynamic_varcc_pd[30] = x[44] * x[24];
	v[0] = 1000. * hybriddynamic_varcc_pd[30];
	v[1] += v[0];
	hybriddynamic_varcc_pd[31] = x[55] * x[35];
	v[0] = 1000. * hybriddynamic_varcc_pd[31];
	v[1] += v[0];
	hybriddynamic_varcc_pd[32] = x[45] * x[25];
	v[0] = 1000. * hybriddynamic_varcc_pd[32];
	v[1] += v[0];
	hybriddynamic_varcc_pd[33] = x[56] * x[36];
	v[0] = 1000. * hybriddynamic_varcc_pd[33];
	v[1] += v[0];
	hybriddynamic_varcc_pd[34] = x[46] * x[26];
	v[0] = 1000. * hybriddynamic_varcc_pd[34];
	v[1] += v[0];
	hybriddynamic_varcc_pd[35] = x[57] * x[37];
	v[0] = 1000. * hybriddynamic_varcc_pd[35];
	v[1] += v[0];
	hybriddynamic_varcc_pd[36] = x[47] * x[27];
	v[0] = 1000. * hybriddynamic_varcc_pd[36];
	v[1] += v[0];
	hybriddynamic_varcc_pd[37] = x[58] * x[38];
	v[0] = 1000. * hybriddynamic_varcc_pd[37];
	v[1] += v[0];
	hybriddynamic_varcc_pd[38] = x[48] * x[28];
	v[0] = 1000. * hybriddynamic_varcc_pd[38];
	v[1] += v[0];
	hybriddynamic_varcc_pd[39] = x[59] * x[39];
	v[0] = 1000. * hybriddynamic_varcc_pd[39];
	v[1] += v[0];
	hybriddynamic_varcc_pd[40] = x[49] * x[29];
	v[0] = 1000. * hybriddynamic_varcc_pd[40];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[29] = 1000.*x[49];
	g[49] = 1000.*x[29];
	g[39] = 1000.*x[59];
	g[59] = 1000.*x[39];
	g[28] = 1000.*x[48];
	g[48] = 1000.*x[28];
	g[38] = 1000.*x[58];
	g[58] = 1000.*x[38];
	g[27] = 1000.*x[47];
	g[47] = 1000.*x[27];
	g[37] = 1000.*x[57];
	g[57] = 1000.*x[37];
	g[26] = 1000.*x[46];
	g[46] = 1000.*x[26];
	g[36] = 1000.*x[56];
	g[56] = 1000.*x[36];
	g[25] = 1000.*x[45];
	g[45] = 1000.*x[25];
	g[35] = 1000.*x[55];
	g[55] = 1000.*x[35];
	g[24] = 1000.*x[44];
	g[44] = 1000.*x[24];
	g[34] = 1000.*x[54];
	g[54] = 1000.*x[34];
	g[23] = 1000.*x[43];
	g[43] = 1000.*x[23];
	g[33] = 1000.*x[53];
	g[53] = 1000.*x[33];
	g[22] = 1000.*x[42];
	g[42] = 1000.*x[22];
	g[32] = 1000.*x[52];
	g[52] = 1000.*x[32];
	g[21] = 1000.*x[41];
	g[41] = 1000.*x[21];
	g[31] = 1000.*x[51];
	g[51] = 1000.*x[31];
	g[20] = 1000.*x[40];
	g[40] = 1000.*x[20];
	g[30] = 1000.*x[50];
	g[50] = 1000.*x[30];
	g[9] = hybriddynamic_varcc_pd[19];
	g[69] = x[9]*hybriddynamic_varcc_pd[20];
	g[8] = hybriddynamic_varcc_pd[17];
	g[68] = x[8]*hybriddynamic_varcc_pd[18];
	g[7] = hybriddynamic_varcc_pd[15];
	g[67] = x[7]*hybriddynamic_varcc_pd[16];
	g[6] = hybriddynamic_varcc_pd[13];
	g[66] = x[6]*hybriddynamic_varcc_pd[14];
	g[5] = hybriddynamic_varcc_pd[11];
	g[65] = x[5]*hybriddynamic_varcc_pd[12];
	g[4] = hybriddynamic_varcc_pd[9];
	g[64] = x[4]*hybriddynamic_varcc_pd[10];
	g[3] = hybriddynamic_varcc_pd[7];
	g[63] = x[3]*hybriddynamic_varcc_pd[8];
	g[2] = hybriddynamic_varcc_pd[5];
	g[62] = x[2]*hybriddynamic_varcc_pd[6];
	g[1] = hybriddynamic_varcc_pd[3];
	g[61] = x[1]*hybriddynamic_varcc_pd[4];
	g[0] = hybriddynamic_varcc_pd[1];
	g[60] = x[0]*hybriddynamic_varcc_pd[2];
	g[70] = hybriddynamic_varcc_pd[0];
	}

	return v[1];
}

 void
hybriddynamic_varcc_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (hybriddynamic_varcc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[60];
	t1 += -x[121];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[61];
	t1 += -x[122];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[62];
	t1 += -x[123];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[63];
	t1 += -x[124];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[64];
	t1 += -x[125];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[5] * x[15];
	v[1] = -v[0];
	t1 = v[1] + x[65];
	t1 += -x[126];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[6] * x[16];
	v[1] = -v[0];
	t1 = v[1] + x[66];
	t1 += -x[127];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[7] * x[17];
	v[1] = -v[0];
	t1 = v[1] + x[67];
	t1 += -x[128];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[8] * x[18];
	v[1] = -v[0];
	t1 = v[1] + x[68];
	t1 += -x[129];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[9] * x[19];
	v[1] = -v[0];
	t1 = v[1] + x[69];
	t1 += -x[130];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[0] * x[10];
	v[1] = -v[0];
	t1 = v[1] + -x[121];
	t1 += x[122];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[1] * x[11];
	v[1] = -v[0];
	t1 = v[1] + -x[122];
	t1 += x[123];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[2] * x[12];
	v[1] = -v[0];
	t1 = v[1] + -x[123];
	t1 += x[124];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[3] * x[13];
	v[1] = -v[0];
	t1 = v[1] + -x[124];
	t1 += x[125];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[4] * x[14];
	v[1] = -v[0];
	t1 = v[1] + -x[125];
	t1 += x[126];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[5] * x[15];
	v[1] = -v[0];
	t1 = v[1] + -x[126];
	t1 += x[127];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[6] * x[16];
	v[1] = -v[0];
	t1 = v[1] + -x[127];
	t1 += x[128];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[7] * x[17];
	v[1] = -v[0];
	t1 = v[1] + -x[128];
	t1 += x[129];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[8] * x[18];
	v[1] = -v[0];
	t1 = v[1] + -x[129];
	t1 += x[130];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[9] * x[19];
	v[1] = -v[0];
	t1 = v[1] + x[70];
	t1 += -x[130];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[0];
	t1 += -x[131];
	t1 += x[141];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[1];
	t1 += -x[132];
	t1 += x[142];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[2];
	t1 += -x[133];
	t1 += x[143];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[3];
	t1 += -x[134];
	t1 += x[144];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[4];
	t1 += -x[135];
	t1 += x[145];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[5];
	t1 += -x[136];
	t1 += x[146];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[6];
	t1 += -x[137];
	t1 += x[147];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[7];
	t1 += -x[138];
	t1 += x[148];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[8];
	t1 += -x[139];
	t1 += x[149];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[9];
	t1 += -x[140];
	t1 += x[150];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[0];
	t1 += -x[131];
	t1 += x[132];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[1];
	t1 += -x[132];
	t1 += x[133];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[2];
	t1 += -x[133];
	t1 += x[134];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[3];
	t1 += -x[134];
	t1 += x[135];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[4];
	t1 += -x[135];
	t1 += x[136];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[5];
	t1 += -x[136];
	t1 += x[137];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[6];
	t1 += -x[137];
	t1 += x[138];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[7];
	t1 += -x[138];
	t1 += x[139];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[8];
	t1 += -x[139];
	t1 += x[140];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[10];
	t1 += x[71];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[11];
	t1 += x[72];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[12];
	t1 += x[73];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[13];
	t1 += x[74];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[14];
	t1 += x[75];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[15];
	t1 += x[76];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[16];
	t1 += x[77];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[17];
	t1 += x[78];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[18];
	t1 += x[79];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[19];
	t1 += x[80];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[60];
	t1 += -x[81];
	t1 += x[91];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[61];
	t1 += -x[82];
	t1 += x[92];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[62];
	t1 += -x[83];
	t1 += x[93];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[63];
	t1 += -x[84];
	t1 += x[94];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[64];
	t1 += -x[85];
	t1 += x[95];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[65];
	t1 += -x[86];
	t1 += x[96];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[66];
	t1 += -x[87];
	t1 += x[97];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[67];
	t1 += -x[88];
	t1 += x[98];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[68];
	t1 += -x[89];
	t1 += x[99];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[69];
	t1 += -x[90];
	t1 += x[100];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[101];
	t1 += x[111];
	t1 += x[121];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[102];
	t1 += x[112];
	t1 += x[122];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[103];
	t1 += x[113];
	t1 += x[123];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[104];
	t1 += x[114];
	t1 += x[124];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[105];
	t1 += x[115];
	t1 += x[125];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[106];
	t1 += x[116];
	t1 += x[126];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[107];
	t1 += x[117];
	t1 += x[127];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[108];
	t1 += x[118];
	t1 += x[128];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[109];
	t1 += x[119];
	t1 += x[129];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[110];
	t1 += x[120];
	t1 += x[130];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[20];
	t1 += -x[81];
	t1 += -x[101];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[21];
	t1 += -x[82];
	t1 += -x[102];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[22];
	t1 += -x[83];
	t1 += -x[103];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[23];
	t1 += -x[84];
	t1 += -x[104];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[24];
	t1 += -x[85];
	t1 += -x[105];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[25];
	t1 += -x[86];
	t1 += -x[106];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[26];
	t1 += -x[87];
	t1 += -x[107];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[27];
	t1 += -x[88];
	t1 += -x[108];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[28];
	t1 += -x[89];
	t1 += -x[109];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[29];
	t1 += -x[90];
	t1 += -x[110];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[30];
	t1 += -x[91];
	t1 += -x[111];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[31];
	t1 += -x[92];
	t1 += -x[112];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[32];
	t1 += -x[93];
	t1 += -x[113];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[33];
	t1 += -x[94];
	t1 += -x[114];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[34];
	t1 += -x[95];
	t1 += -x[115];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[35];
	t1 += -x[96];
	t1 += -x[116];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[36];
	t1 += -x[97];
	t1 += -x[117];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[37];
	t1 += -x[98];
	t1 += -x[118];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[38];
	t1 += -x[99];
	t1 += -x[119];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[39];
	t1 += -x[100];
	t1 += -x[120];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[40];
	t1 += x[71];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[41];
	t1 += x[72];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[42];
	t1 += x[73];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[43];
	t1 += x[74];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[44];
	t1 += x[75];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[45];
	t1 += x[76];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[46];
	t1 += x[77];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[47];
	t1 += x[78];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[48];
	t1 += x[79];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[49];
	t1 += x[80];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[50];
	t1 += -x[71];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[51];
	t1 += -x[72];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[52];
	t1 += -x[73];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[53];
	t1 += -x[74];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[54];
	t1 += -x[75];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[55];
	t1 += -x[76];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[56];
	t1 += -x[77];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[57];
	t1 += -x[78];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[58];
	t1 += -x[79];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[59];
	t1 += -x[80];
	c[108] = t1;

  /***  constraint 110  ***/

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
	c[109] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[49] = -x[0];
	J[0] = -x[10];
	J[119] = 1.;
	J[250] = -1.;

   /*** derivatives for constraint 2 ***/

	J[52] = -x[1];
	J[5] = -x[11];
	J[121] = 1.;
	J[253] = -1.;

   /*** derivatives for constraint 3 ***/

	J[55] = -x[2];
	J[10] = -x[12];
	J[123] = 1.;
	J[257] = -1.;

   /*** derivatives for constraint 4 ***/

	J[58] = -x[3];
	J[15] = -x[13];
	J[125] = 1.;
	J[261] = -1.;

   /*** derivatives for constraint 5 ***/

	J[61] = -x[4];
	J[20] = -x[14];
	J[127] = 1.;
	J[265] = -1.;

   /*** derivatives for constraint 6 ***/

	J[64] = -x[5];
	J[25] = -x[15];
	J[129] = 1.;
	J[269] = -1.;

   /*** derivatives for constraint 7 ***/

	J[67] = -x[6];
	J[30] = -x[16];
	J[131] = 1.;
	J[273] = -1.;

   /*** derivatives for constraint 8 ***/

	J[70] = -x[7];
	J[35] = -x[17];
	J[133] = 1.;
	J[277] = -1.;

   /*** derivatives for constraint 9 ***/

	J[73] = -x[8];
	J[40] = -x[18];
	J[135] = 1.;
	J[281] = -1.;

   /*** derivatives for constraint 10 ***/

	J[76] = -x[9];
	J[45] = -x[19];
	J[137] = 1.;
	J[285] = -1.;

   /*** derivatives for constraint 11 ***/

	J[50] = -x[0];
	J[1] = -x[10];
	J[251] = -1.;
	J[254] = 1.;

   /*** derivatives for constraint 12 ***/

	J[53] = -x[1];
	J[6] = -x[11];
	J[255] = -1.;
	J[258] = 1.;

   /*** derivatives for constraint 13 ***/

	J[56] = -x[2];
	J[11] = -x[12];
	J[259] = -1.;
	J[262] = 1.;

   /*** derivatives for constraint 14 ***/

	J[59] = -x[3];
	J[16] = -x[13];
	J[263] = -1.;
	J[266] = 1.;

   /*** derivatives for constraint 15 ***/

	J[62] = -x[4];
	J[21] = -x[14];
	J[267] = -1.;
	J[270] = 1.;

   /*** derivatives for constraint 16 ***/

	J[65] = -x[5];
	J[26] = -x[15];
	J[271] = -1.;
	J[274] = 1.;

   /*** derivatives for constraint 17 ***/

	J[68] = -x[6];
	J[31] = -x[16];
	J[275] = -1.;
	J[278] = 1.;

   /*** derivatives for constraint 18 ***/

	J[71] = -x[7];
	J[36] = -x[17];
	J[279] = -1.;
	J[282] = 1.;

   /*** derivatives for constraint 19 ***/

	J[74] = -x[8];
	J[41] = -x[18];
	J[283] = -1.;
	J[286] = 1.;

   /*** derivatives for constraint 20 ***/

	J[77] = -x[9];
	J[46] = -x[19];
	J[139] = 1.;
	J[287] = -1.;

   /*** derivatives for constraint 21 ***/

	J[2] = -1.;
	J[289] = -1.;
	J[317] = 1.;

   /*** derivatives for constraint 22 ***/

	J[7] = -1.;
	J[291] = -1.;
	J[318] = 1.;

   /*** derivatives for constraint 23 ***/

	J[12] = -1.;
	J[294] = -1.;
	J[319] = 1.;

   /*** derivatives for constraint 24 ***/

	J[17] = -1.;
	J[297] = -1.;
	J[320] = 1.;

   /*** derivatives for constraint 25 ***/

	J[22] = -1.;
	J[300] = -1.;
	J[321] = 1.;

   /*** derivatives for constraint 26 ***/

	J[27] = -1.;
	J[303] = -1.;
	J[322] = 1.;

   /*** derivatives for constraint 27 ***/

	J[32] = -1.;
	J[306] = -1.;
	J[323] = 1.;

   /*** derivatives for constraint 28 ***/

	J[37] = -1.;
	J[309] = -1.;
	J[324] = 1.;

   /*** derivatives for constraint 29 ***/

	J[42] = -1.;
	J[312] = -1.;
	J[325] = 1.;

   /*** derivatives for constraint 30 ***/

	J[47] = -1.;
	J[315] = -1.;
	J[326] = 1.;

   /*** derivatives for constraint 31 ***/

	J[3] = -1.;
	J[290] = -1.;
	J[292] = 1.;

   /*** derivatives for constraint 32 ***/

	J[8] = -1.;
	J[293] = -1.;
	J[295] = 1.;

   /*** derivatives for constraint 33 ***/

	J[13] = -1.;
	J[296] = -1.;
	J[298] = 1.;

   /*** derivatives for constraint 34 ***/

	J[18] = -1.;
	J[299] = -1.;
	J[301] = 1.;

   /*** derivatives for constraint 35 ***/

	J[23] = -1.;
	J[302] = -1.;
	J[304] = 1.;

   /*** derivatives for constraint 36 ***/

	J[28] = -1.;
	J[305] = -1.;
	J[307] = 1.;

   /*** derivatives for constraint 37 ***/

	J[33] = -1.;
	J[308] = -1.;
	J[310] = 1.;

   /*** derivatives for constraint 38 ***/

	J[38] = -1.;
	J[311] = -1.;
	J[313] = 1.;

   /*** derivatives for constraint 39 ***/

	J[43] = -1.;
	J[314] = -1.;
	J[316] = 1.;

   /*** derivatives for constraint 40 ***/

	J[51] = 1.;
	J[140] = 1.;

   /*** derivatives for constraint 41 ***/

	J[54] = 1.;
	J[143] = 1.;

   /*** derivatives for constraint 42 ***/

	J[57] = 1.;
	J[146] = 1.;

   /*** derivatives for constraint 43 ***/

	J[60] = 1.;
	J[149] = 1.;

   /*** derivatives for constraint 44 ***/

	J[63] = 1.;
	J[152] = 1.;

   /*** derivatives for constraint 45 ***/

	J[66] = 1.;
	J[155] = 1.;

   /*** derivatives for constraint 46 ***/

	J[69] = 1.;
	J[158] = 1.;

   /*** derivatives for constraint 47 ***/

	J[72] = 1.;
	J[161] = 1.;

   /*** derivatives for constraint 48 ***/

	J[75] = 1.;
	J[164] = 1.;

   /*** derivatives for constraint 49 ***/

	J[78] = 1.;
	J[167] = 1.;

   /*** derivatives for constraint 50 ***/

	J[120] = 1.;
	J[170] = -1.;
	J[190] = 1.;

   /*** derivatives for constraint 51 ***/

	J[122] = 1.;
	J[172] = -1.;
	J[192] = 1.;

   /*** derivatives for constraint 52 ***/

	J[124] = 1.;
	J[174] = -1.;
	J[194] = 1.;

   /*** derivatives for constraint 53 ***/

	J[126] = 1.;
	J[176] = -1.;
	J[196] = 1.;

   /*** derivatives for constraint 54 ***/

	J[128] = 1.;
	J[178] = -1.;
	J[198] = 1.;

   /*** derivatives for constraint 55 ***/

	J[130] = 1.;
	J[180] = -1.;
	J[200] = 1.;

   /*** derivatives for constraint 56 ***/

	J[132] = 1.;
	J[182] = -1.;
	J[202] = 1.;

   /*** derivatives for constraint 57 ***/

	J[134] = 1.;
	J[184] = -1.;
	J[204] = 1.;

   /*** derivatives for constraint 58 ***/

	J[136] = 1.;
	J[186] = -1.;
	J[206] = 1.;

   /*** derivatives for constraint 59 ***/

	J[138] = 1.;
	J[188] = -1.;
	J[208] = 1.;

   /*** derivatives for constraint 60 ***/

	J[210] = -1.;
	J[230] = 1.;
	J[252] = 1.;

   /*** derivatives for constraint 61 ***/

	J[212] = -1.;
	J[232] = 1.;
	J[256] = 1.;

   /*** derivatives for constraint 62 ***/

	J[214] = -1.;
	J[234] = 1.;
	J[260] = 1.;

   /*** derivatives for constraint 63 ***/

	J[216] = -1.;
	J[236] = 1.;
	J[264] = 1.;

   /*** derivatives for constraint 64 ***/

	J[218] = -1.;
	J[238] = 1.;
	J[268] = 1.;

   /*** derivatives for constraint 65 ***/

	J[220] = -1.;
	J[240] = 1.;
	J[272] = 1.;

   /*** derivatives for constraint 66 ***/

	J[222] = -1.;
	J[242] = 1.;
	J[276] = 1.;

   /*** derivatives for constraint 67 ***/

	J[224] = -1.;
	J[244] = 1.;
	J[280] = 1.;

   /*** derivatives for constraint 68 ***/

	J[226] = -1.;
	J[246] = 1.;
	J[284] = 1.;

   /*** derivatives for constraint 69 ***/

	J[228] = -1.;
	J[248] = 1.;
	J[288] = 1.;

   /*** derivatives for constraint 70 ***/

	J[79] = 1.;
	J[171] = -1.;
	J[211] = -1.;

   /*** derivatives for constraint 71 ***/

	J[80] = 1.;
	J[173] = -1.;
	J[213] = -1.;

   /*** derivatives for constraint 72 ***/

	J[81] = 1.;
	J[175] = -1.;
	J[215] = -1.;

   /*** derivatives for constraint 73 ***/

	J[82] = 1.;
	J[177] = -1.;
	J[217] = -1.;

   /*** derivatives for constraint 74 ***/

	J[83] = 1.;
	J[179] = -1.;
	J[219] = -1.;

   /*** derivatives for constraint 75 ***/

	J[84] = 1.;
	J[181] = -1.;
	J[221] = -1.;

   /*** derivatives for constraint 76 ***/

	J[85] = 1.;
	J[183] = -1.;
	J[223] = -1.;

   /*** derivatives for constraint 77 ***/

	J[86] = 1.;
	J[185] = -1.;
	J[225] = -1.;

   /*** derivatives for constraint 78 ***/

	J[87] = 1.;
	J[187] = -1.;
	J[227] = -1.;

   /*** derivatives for constraint 79 ***/

	J[88] = 1.;
	J[189] = -1.;
	J[229] = -1.;

   /*** derivatives for constraint 80 ***/

	J[89] = 1.;
	J[191] = -1.;
	J[231] = -1.;

   /*** derivatives for constraint 81 ***/

	J[90] = 1.;
	J[193] = -1.;
	J[233] = -1.;

   /*** derivatives for constraint 82 ***/

	J[91] = 1.;
	J[195] = -1.;
	J[235] = -1.;

   /*** derivatives for constraint 83 ***/

	J[92] = 1.;
	J[197] = -1.;
	J[237] = -1.;

   /*** derivatives for constraint 84 ***/

	J[93] = 1.;
	J[199] = -1.;
	J[239] = -1.;

   /*** derivatives for constraint 85 ***/

	J[94] = 1.;
	J[201] = -1.;
	J[241] = -1.;

   /*** derivatives for constraint 86 ***/

	J[95] = 1.;
	J[203] = -1.;
	J[243] = -1.;

   /*** derivatives for constraint 87 ***/

	J[96] = 1.;
	J[205] = -1.;
	J[245] = -1.;

   /*** derivatives for constraint 88 ***/

	J[97] = 1.;
	J[207] = -1.;
	J[247] = -1.;

   /*** derivatives for constraint 89 ***/

	J[98] = 1.;
	J[209] = -1.;
	J[249] = -1.;

   /*** derivatives for constraint 90 ***/

	J[99] = 1.;
	J[141] = 1.;

   /*** derivatives for constraint 91 ***/

	J[100] = 1.;
	J[144] = 1.;

   /*** derivatives for constraint 92 ***/

	J[101] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 93 ***/

	J[102] = 1.;
	J[150] = 1.;

   /*** derivatives for constraint 94 ***/

	J[103] = 1.;
	J[153] = 1.;

   /*** derivatives for constraint 95 ***/

	J[104] = 1.;
	J[156] = 1.;

   /*** derivatives for constraint 96 ***/

	J[105] = 1.;
	J[159] = 1.;

   /*** derivatives for constraint 97 ***/

	J[106] = 1.;
	J[162] = 1.;

   /*** derivatives for constraint 98 ***/

	J[107] = 1.;
	J[165] = 1.;

   /*** derivatives for constraint 99 ***/

	J[108] = 1.;
	J[168] = 1.;

   /*** derivatives for constraint 100 ***/

	J[109] = 1.;
	J[142] = -1.;

   /*** derivatives for constraint 101 ***/

	J[110] = 1.;
	J[145] = -1.;

   /*** derivatives for constraint 102 ***/

	J[111] = 1.;
	J[148] = -1.;

   /*** derivatives for constraint 103 ***/

	J[112] = 1.;
	J[151] = -1.;

   /*** derivatives for constraint 104 ***/

	J[113] = 1.;
	J[154] = -1.;

   /*** derivatives for constraint 105 ***/

	J[114] = 1.;
	J[157] = -1.;

   /*** derivatives for constraint 106 ***/

	J[115] = 1.;
	J[160] = -1.;

   /*** derivatives for constraint 107 ***/

	J[116] = 1.;
	J[163] = -1.;

   /*** derivatives for constraint 108 ***/

	J[117] = 1.;
	J[166] = -1.;

   /*** derivatives for constraint 109 ***/

	J[118] = 1.;
	J[169] = -1.;

   /*** derivatives for constraint 110 ***/

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
