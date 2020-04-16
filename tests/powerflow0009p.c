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
 fint powerflow0009p_auxcom_[1] = { 54 /* nlc */ };
 fint powerflow0009p_funcom_[428] = {
	60 /* nvar */,
	1 /* nobj */,
	139 /* ncon */,
	361 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	33,
	43,
	57,
	67,
	81,
	91,
	94,
	97,
	100,
	103,
	106,
	109,
	112,
	115,
	118,
	121,
	124,
	127,
	130,
	133,
	136,
	139,
	142,
	145,
	148,
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
	181,
	184,
	187,
	190,
	193,
	196,
	199,
	208,
	216,
	224,
	248,
	264,
	288,
	304,
	328,
	344,
	347,
	350,
	353,
	356,
	359,
	362,

	/* rownos */
	1,
	14,
	31,
	32,
	67,
	76,
	9,
	10,
	27,
	28,
	68,
	77,
	1,
	2,
	19,
	20,
	69,
	78,
	11,
	12,
	13,
	14,
	15,
	16,
	29,
	30,
	31,
	32,
	33,
	34,
	70,
	79,
	5,
	6,
	11,
	12,
	23,
	24,
	29,
	30,
	71,
	80,
	1,
	2,
	5,
	6,
	7,
	8,
	19,
	20,
	23,
	24,
	25,
	26,
	72,
	81,
	3,
	4,
	7,
	8,
	21,
	22,
	25,
	26,
	73,
	82,
	3,
	4,
	9,
	10,
	17,
	18,
	21,
	22,
	27,
	28,
	35,
	36,
	74,
	83,
	15,
	16,
	17,
	18,
	33,
	34,
	35,
	36,
	75,
	84,
	1,
	37,
	124,
	2,
	38,
	130,
	3,
	39,
	131,
	4,
	40,
	132,
	5,
	41,
	129,
	6,
	42,
	130,
	7,
	43,
	130,
	8,
	44,
	131,
	9,
	45,
	132,
	10,
	46,
	123,
	11,
	47,
	128,
	12,
	48,
	129,
	13,
	49,
	122,
	14,
	50,
	128,
	15,
	51,
	133,
	16,
	52,
	128,
	17,
	53,
	132,
	18,
	54,
	133,
	19,
	37,
	127,
	20,
	38,
	136,
	21,
	39,
	137,
	22,
	40,
	138,
	23,
	41,
	135,
	24,
	42,
	136,
	25,
	43,
	136,
	26,
	44,
	137,
	27,
	45,
	138,
	28,
	46,
	126,
	29,
	47,
	134,
	30,
	48,
	135,
	31,
	49,
	125,
	32,
	50,
	134,
	33,
	51,
	139,
	34,
	52,
	134,
	35,
	53,
	138,
	36,
	54,
	139,
	13,
	14,
	31,
	32,
	97,
	98,
	115,
	116,
	121,
	9,
	10,
	27,
	28,
	93,
	94,
	111,
	112,
	1,
	2,
	19,
	20,
	85,
	86,
	103,
	104,
	11,
	12,
	13,
	14,
	15,
	16,
	29,
	30,
	31,
	32,
	33,
	34,
	95,
	96,
	97,
	98,
	99,
	100,
	113,
	114,
	115,
	116,
	117,
	118,
	5,
	6,
	11,
	12,
	23,
	24,
	29,
	30,
	89,
	90,
	95,
	96,
	107,
	108,
	113,
	114,
	1,
	2,
	5,
	6,
	7,
	8,
	19,
	20,
	23,
	24,
	25,
	26,
	85,
	86,
	89,
	90,
	91,
	92,
	103,
	104,
	107,
	108,
	109,
	110,
	3,
	4,
	7,
	8,
	21,
	22,
	25,
	26,
	87,
	88,
	91,
	92,
	105,
	106,
	109,
	110,
	3,
	4,
	9,
	10,
	17,
	18,
	21,
	22,
	27,
	28,
	35,
	36,
	87,
	88,
	93,
	94,
	101,
	102,
	105,
	106,
	111,
	112,
	119,
	120,
	15,
	16,
	17,
	18,
	33,
	34,
	35,
	36,
	99,
	100,
	101,
	102,
	117,
	118,
	119,
	120,
	55,
	58,
	122,
	56,
	59,
	123,
	57,
	60,
	124,
	61,
	64,
	125,
	62,
	65,
	126,
	63,
	66,
	127 };

 real powerflow0009p_boundc_[1+120+278] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		9.,
		-1.7e308,
		9.,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		2.25,
		-1.7e308,
		2.25,
		-1.7e308,
		2.25,
		-1.7e308,
		2.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		2.5,
		-1.7e308,
		3.,
		-1.7e308,
		2.7,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		-1.7e308,
		3.,
		-1.7e308,
		3.,
		-1.7e308,
		3.,
		-3.,
		1.7e308,
		-3.,
		1.7e308,
		-3.,
		1.7e308,
		-1.7e308,
		1.1,
		-1.7e308,
		1.1,
		-1.7e308,
		1.1,
		-1.7e308,
		1.1,
		-1.7e308,
		1.1,
		-1.7e308,
		1.1,
		-1.7e308,
		1.1,
		-1.7e308,
		1.1,
		-1.7e308,
		1.1,
		0.9,
		1.7e308,
		0.9,
		1.7e308,
		0.9,
		1.7e308,
		0.9,
		1.7e308,
		0.9,
		1.7e308,
		0.9,
		1.7e308,
		0.9,
		1.7e308,
		0.9,
		1.7e308,
		0.9,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-0.26,
		1.7e308,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		-1.7e308,
		0.26,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-0.9,
		-0.9,
		0.,
		0.,
		-1.,
		-1.,
		0.,
		0.,
		-1.25,
		-1.25,
		0.,
		0.,
		-0.3,
		-0.3,
		0.,
		0.,
		-0.35,
		-0.35,
		0.,
		0.,
		-0.5,
		-0.5};

 real powerflow0009p_x0comn_[60] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real powerflow0009p_pd[342];
static real powerflow0009p_old_x[60];
static int powerflow0009p_xkind = -1;

 static int
powerflow0009p_xcheck(real *x)
{
	real *x1 = powerflow0009p_old_x, *xe = x + 60;
	errno = 0;
	if (powerflow0009p_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	powerflow0009p_xkind = 0;
	return 1;
	}
 real
powerflow0009p_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (powerflow0009p_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	powerflow0009p_pd[336] = x[54] * x[54];
	powerflow0009p_pd[337] = x[54] + x[54];
	v[0] = 1100. * powerflow0009p_pd[336];
	powerflow0009p_pd[338] = x[55] * x[55];
	powerflow0009p_pd[339] = x[55] + x[55];
	v[1] = 850. * powerflow0009p_pd[338];
	v[0] += v[1];
	powerflow0009p_pd[340] = x[56] * x[56];
	powerflow0009p_pd[341] = x[56] + x[56];
	v[1] = 1225. * powerflow0009p_pd[340];
	v[0] += v[1];
	v[0] += 1085.;
	rv = v[0] + 500.*x[54];
	rv += 120.*x[55];
	rv += 100.*x[56];
	;}

	if (wantfg & 2) {
	g[56] = 1225.*powerflow0009p_pd[341] + 100.;
	g[55] = 850.*powerflow0009p_pd[339] + 120.;
	g[54] = 1100.*powerflow0009p_pd[337] + 500.;
	}

	return rv;
}

 void
powerflow0009p_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[4];
	real t1;
	fint wantfg = *needfg;
	if (powerflow0009p_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	powerflow0009p_pd[0] = -17.0648464163823 * x[2];
	powerflow0009p_pd[1] = powerflow0009p_pd[0] * x[5];
	v[0] = x[47] - x[50];
	powerflow0009p_pd[2] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	powerflow0009p_pd[3] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = powerflow0009p_pd[1] * powerflow0009p_pd[2];
	t1 = v[0] + x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	powerflow0009p_pd[4] = -17.0648464163823 * x[5];
	powerflow0009p_pd[5] = powerflow0009p_pd[4] * x[2];
	v[0] = x[50] - x[47];
	powerflow0009p_pd[6] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	powerflow0009p_pd[7] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = powerflow0009p_pd[5] * powerflow0009p_pd[6];
	t1 = v[0] + x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	powerflow0009p_pd[8] = 1.61712247324614 * x[6];
	powerflow0009p_pd[9] = powerflow0009p_pd[8] * x[7];
	v[0] = x[51] - x[52];
	powerflow0009p_pd[10] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[11] = -sin(v[0]);
	v[0] = powerflow0009p_pd[9] * powerflow0009p_pd[10];
	powerflow0009p_pd[12] = x[6] * x[6];
	powerflow0009p_pd[13] = x[6] + x[6];
	v[1] = -1.61712247324614 * powerflow0009p_pd[12];
	v[0] += v[1];
	powerflow0009p_pd[14] = 13.6979785969084 * x[6];
	powerflow0009p_pd[15] = powerflow0009p_pd[14] * x[7];
	v[1] = x[51] - x[52];
	powerflow0009p_pd[16] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[17] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[15] * powerflow0009p_pd[16];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	powerflow0009p_pd[18] = 1.61712247324614 * x[7];
	powerflow0009p_pd[19] = powerflow0009p_pd[18] * x[6];
	v[0] = x[52] - x[51];
	powerflow0009p_pd[20] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[21] = -sin(v[0]);
	v[0] = powerflow0009p_pd[19] * powerflow0009p_pd[20];
	powerflow0009p_pd[22] = x[7] * x[7];
	powerflow0009p_pd[23] = x[7] + x[7];
	v[1] = -1.61712247324614 * powerflow0009p_pd[22];
	v[0] += v[1];
	powerflow0009p_pd[24] = 13.6979785969084 * x[7];
	powerflow0009p_pd[25] = powerflow0009p_pd[24] * x[6];
	v[1] = x[52] - x[51];
	powerflow0009p_pd[26] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[27] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[25] * powerflow0009p_pd[26];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	powerflow0009p_pd[28] = 1.28200913842411 * x[4];
	powerflow0009p_pd[29] = powerflow0009p_pd[28] * x[5];
	v[0] = x[49] - x[50];
	powerflow0009p_pd[30] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[31] = -sin(v[0]);
	v[0] = powerflow0009p_pd[29] * powerflow0009p_pd[30];
	powerflow0009p_pd[32] = x[4] * x[4];
	powerflow0009p_pd[33] = x[4] + x[4];
	v[1] = -1.28200913842411 * powerflow0009p_pd[32];
	v[0] += v[1];
	powerflow0009p_pd[34] = 5.58824496236153 * x[4];
	powerflow0009p_pd[35] = powerflow0009p_pd[34] * x[5];
	v[1] = x[49] - x[50];
	powerflow0009p_pd[36] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[37] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[35] * powerflow0009p_pd[36];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[13];
	c[4] = t1;

  /***  constraint 6  ***/

	powerflow0009p_pd[38] = 1.28200913842411 * x[5];
	powerflow0009p_pd[39] = powerflow0009p_pd[38] * x[4];
	v[0] = x[50] - x[49];
	powerflow0009p_pd[40] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[41] = -sin(v[0]);
	v[0] = powerflow0009p_pd[39] * powerflow0009p_pd[40];
	powerflow0009p_pd[42] = x[5] * x[5];
	powerflow0009p_pd[43] = x[5] + x[5];
	v[1] = -1.28200913842411 * powerflow0009p_pd[42];
	v[0] += v[1];
	powerflow0009p_pd[44] = 5.58824496236153 * x[5];
	powerflow0009p_pd[45] = powerflow0009p_pd[44] * x[4];
	v[1] = x[50] - x[49];
	powerflow0009p_pd[46] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[47] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[45] * powerflow0009p_pd[46];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[14];
	c[5] = t1;

  /***  constraint 7  ***/

	powerflow0009p_pd[48] = 1.1550874808901 * x[5];
	powerflow0009p_pd[49] = powerflow0009p_pd[48] * x[6];
	v[0] = x[50] - x[51];
	powerflow0009p_pd[50] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[51] = -sin(v[0]);
	v[0] = powerflow0009p_pd[49] * powerflow0009p_pd[50];
	powerflow0009p_pd[52] = x[5] * x[5];
	powerflow0009p_pd[53] = x[5] + x[5];
	v[1] = -1.1550874808901 * powerflow0009p_pd[52];
	v[0] += v[1];
	powerflow0009p_pd[54] = 9.78427042636317 * x[5];
	powerflow0009p_pd[55] = powerflow0009p_pd[54] * x[6];
	v[1] = x[50] - x[51];
	powerflow0009p_pd[56] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[57] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[55] * powerflow0009p_pd[56];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[15];
	c[6] = t1;

  /***  constraint 8  ***/

	powerflow0009p_pd[58] = 1.1550874808901 * x[6];
	powerflow0009p_pd[59] = powerflow0009p_pd[58] * x[5];
	v[0] = x[51] - x[50];
	powerflow0009p_pd[60] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[61] = -sin(v[0]);
	v[0] = powerflow0009p_pd[59] * powerflow0009p_pd[60];
	powerflow0009p_pd[62] = x[6] * x[6];
	powerflow0009p_pd[63] = x[6] + x[6];
	v[1] = -1.1550874808901 * powerflow0009p_pd[62];
	v[0] += v[1];
	powerflow0009p_pd[64] = 9.78427042636317 * x[6];
	powerflow0009p_pd[65] = powerflow0009p_pd[64] * x[5];
	v[1] = x[51] - x[50];
	powerflow0009p_pd[66] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[67] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[65] * powerflow0009p_pd[66];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[16];
	c[7] = t1;

  /***  constraint 9  ***/

	powerflow0009p_pd[68] = -16. * x[7];
	powerflow0009p_pd[69] = powerflow0009p_pd[68] * x[1];
	v[0] = x[52] - x[46];
	powerflow0009p_pd[70] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	powerflow0009p_pd[71] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = powerflow0009p_pd[69] * powerflow0009p_pd[70];
	t1 = v[0] + x[17];
	c[8] = t1;

  /***  constraint 10  ***/

	powerflow0009p_pd[72] = -16. * x[1];
	powerflow0009p_pd[73] = powerflow0009p_pd[72] * x[7];
	v[0] = x[46] - x[52];
	powerflow0009p_pd[74] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	powerflow0009p_pd[75] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = powerflow0009p_pd[73] * powerflow0009p_pd[74];
	t1 = v[0] + x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	powerflow0009p_pd[76] = 1.94219124871473 * x[3];
	powerflow0009p_pd[77] = powerflow0009p_pd[76] * x[4];
	v[0] = x[48] - x[49];
	powerflow0009p_pd[78] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[79] = -sin(v[0]);
	v[0] = powerflow0009p_pd[77] * powerflow0009p_pd[78];
	powerflow0009p_pd[80] = x[3] * x[3];
	powerflow0009p_pd[81] = x[3] + x[3];
	v[1] = -1.94219124871473 * powerflow0009p_pd[80];
	v[0] += v[1];
	powerflow0009p_pd[82] = 10.5106820518679 * x[3];
	powerflow0009p_pd[83] = powerflow0009p_pd[82] * x[4];
	v[1] = x[48] - x[49];
	powerflow0009p_pd[84] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[85] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[83] * powerflow0009p_pd[84];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[19];
	c[10] = t1;

  /***  constraint 12  ***/

	powerflow0009p_pd[86] = 1.94219124871473 * x[4];
	powerflow0009p_pd[87] = powerflow0009p_pd[86] * x[3];
	v[0] = x[49] - x[48];
	powerflow0009p_pd[88] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[89] = -sin(v[0]);
	v[0] = powerflow0009p_pd[87] * powerflow0009p_pd[88];
	powerflow0009p_pd[90] = x[4] * x[4];
	powerflow0009p_pd[91] = x[4] + x[4];
	v[1] = -1.94219124871473 * powerflow0009p_pd[90];
	v[0] += v[1];
	powerflow0009p_pd[92] = 10.5106820518679 * x[4];
	powerflow0009p_pd[93] = powerflow0009p_pd[92] * x[3];
	v[1] = x[49] - x[48];
	powerflow0009p_pd[94] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[95] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[93] * powerflow0009p_pd[94];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[20];
	c[11] = t1;

  /***  constraint 13  ***/

	powerflow0009p_pd[96] = -17.3611111111111 * x[0];
	powerflow0009p_pd[97] = powerflow0009p_pd[96] * x[3];
	v[0] = x[45] - x[48];
	powerflow0009p_pd[98] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	powerflow0009p_pd[99] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = powerflow0009p_pd[97] * powerflow0009p_pd[98];
	t1 = v[0] + x[21];
	c[12] = t1;

  /***  constraint 14  ***/

	powerflow0009p_pd[100] = -17.3611111111111 * x[3];
	powerflow0009p_pd[101] = powerflow0009p_pd[100] * x[0];
	v[0] = x[48] - x[45];
	powerflow0009p_pd[102] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	powerflow0009p_pd[103] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = powerflow0009p_pd[101] * powerflow0009p_pd[102];
	t1 = v[0] + x[22];
	c[13] = t1;

  /***  constraint 15  ***/

	powerflow0009p_pd[104] = 1.36518771331058 * x[8];
	powerflow0009p_pd[105] = powerflow0009p_pd[104] * x[3];
	v[0] = x[53] - x[48];
	powerflow0009p_pd[106] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[107] = -sin(v[0]);
	v[0] = powerflow0009p_pd[105] * powerflow0009p_pd[106];
	powerflow0009p_pd[108] = x[8] * x[8];
	powerflow0009p_pd[109] = x[8] + x[8];
	v[1] = -1.36518771331058 * powerflow0009p_pd[108];
	v[0] += v[1];
	powerflow0009p_pd[110] = 11.6040955631399 * x[8];
	powerflow0009p_pd[111] = powerflow0009p_pd[110] * x[3];
	v[1] = x[53] - x[48];
	powerflow0009p_pd[112] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[113] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[111] * powerflow0009p_pd[112];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[23];
	c[14] = t1;

  /***  constraint 16  ***/

	powerflow0009p_pd[114] = 1.36518771331058 * x[3];
	powerflow0009p_pd[115] = powerflow0009p_pd[114] * x[8];
	v[0] = x[48] - x[53];
	powerflow0009p_pd[116] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[117] = -sin(v[0]);
	v[0] = powerflow0009p_pd[115] * powerflow0009p_pd[116];
	powerflow0009p_pd[118] = x[3] * x[3];
	powerflow0009p_pd[119] = x[3] + x[3];
	v[1] = -1.36518771331058 * powerflow0009p_pd[118];
	v[0] += v[1];
	powerflow0009p_pd[120] = 11.6040955631399 * x[3];
	powerflow0009p_pd[121] = powerflow0009p_pd[120] * x[8];
	v[1] = x[48] - x[53];
	powerflow0009p_pd[122] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[123] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[121] * powerflow0009p_pd[122];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[24];
	c[15] = t1;

  /***  constraint 17  ***/

	powerflow0009p_pd[124] = 1.18760437929115 * x[7];
	powerflow0009p_pd[125] = powerflow0009p_pd[124] * x[8];
	v[0] = x[52] - x[53];
	powerflow0009p_pd[126] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[127] = -sin(v[0]);
	v[0] = powerflow0009p_pd[125] * powerflow0009p_pd[126];
	powerflow0009p_pd[128] = x[7] * x[7];
	powerflow0009p_pd[129] = x[7] + x[7];
	v[1] = -1.18760437929115 * powerflow0009p_pd[128];
	v[0] += v[1];
	powerflow0009p_pd[130] = 5.97513453330859 * x[7];
	powerflow0009p_pd[131] = powerflow0009p_pd[130] * x[8];
	v[1] = x[52] - x[53];
	powerflow0009p_pd[132] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[133] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[131] * powerflow0009p_pd[132];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[25];
	c[16] = t1;

  /***  constraint 18  ***/

	powerflow0009p_pd[134] = 1.18760437929115 * x[8];
	powerflow0009p_pd[135] = powerflow0009p_pd[134] * x[7];
	v[0] = x[53] - x[52];
	powerflow0009p_pd[136] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[137] = -sin(v[0]);
	v[0] = powerflow0009p_pd[135] * powerflow0009p_pd[136];
	powerflow0009p_pd[138] = x[8] * x[8];
	powerflow0009p_pd[139] = x[8] + x[8];
	v[1] = -1.18760437929115 * powerflow0009p_pd[138];
	v[0] += v[1];
	powerflow0009p_pd[140] = 5.97513453330859 * x[8];
	powerflow0009p_pd[141] = powerflow0009p_pd[140] * x[7];
	v[1] = x[53] - x[52];
	powerflow0009p_pd[142] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[143] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[141] * powerflow0009p_pd[142];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + x[26];
	c[17] = t1;

  /***  constraint 19  ***/

	powerflow0009p_pd[144] = 17.0648464163823 * x[2];
	powerflow0009p_pd[145] = powerflow0009p_pd[144] * x[5];
	v[0] = x[47] - x[50];
	powerflow0009p_pd[146] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[147] = -sin(v[0]);
	v[0] = powerflow0009p_pd[145] * powerflow0009p_pd[146];
	powerflow0009p_pd[148] = x[2] * x[2];
	powerflow0009p_pd[149] = x[2] + x[2];
	v[1] = -17.0648464163823 * powerflow0009p_pd[148];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[27];
	c[18] = t1;

  /***  constraint 20  ***/

	powerflow0009p_pd[150] = 17.0648464163823 * x[5];
	powerflow0009p_pd[151] = powerflow0009p_pd[150] * x[2];
	v[0] = x[50] - x[47];
	powerflow0009p_pd[152] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[153] = -sin(v[0]);
	v[0] = powerflow0009p_pd[151] * powerflow0009p_pd[152];
	powerflow0009p_pd[154] = x[5] * x[5];
	powerflow0009p_pd[155] = x[5] + x[5];
	v[1] = -17.0648464163823 * powerflow0009p_pd[154];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[28];
	c[19] = t1;

  /***  constraint 21  ***/

	powerflow0009p_pd[156] = 13.6979785969084 * x[6];
	powerflow0009p_pd[157] = powerflow0009p_pd[156] * x[7];
	v[0] = x[51] - x[52];
	powerflow0009p_pd[158] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[159] = -sin(v[0]);
	v[0] = powerflow0009p_pd[157] * powerflow0009p_pd[158];
	powerflow0009p_pd[160] = x[6] * x[6];
	powerflow0009p_pd[161] = x[6] + x[6];
	v[1] = -13.6234785969084 * powerflow0009p_pd[160];
	v[0] += v[1];
	powerflow0009p_pd[162] = 1.61712247324614 * x[6];
	powerflow0009p_pd[163] = powerflow0009p_pd[162] * x[7];
	v[1] = x[51] - x[52];
	powerflow0009p_pd[164] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[165] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[163] * powerflow0009p_pd[164];
	v[0] += v[1];
	t1 = v[0] + x[29];
	c[20] = t1;

  /***  constraint 22  ***/

	powerflow0009p_pd[166] = 13.6979785969084 * x[7];
	powerflow0009p_pd[167] = powerflow0009p_pd[166] * x[6];
	v[0] = x[52] - x[51];
	powerflow0009p_pd[168] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[169] = -sin(v[0]);
	v[0] = powerflow0009p_pd[167] * powerflow0009p_pd[168];
	powerflow0009p_pd[170] = x[7] * x[7];
	powerflow0009p_pd[171] = x[7] + x[7];
	v[1] = -13.6234785969084 * powerflow0009p_pd[170];
	v[0] += v[1];
	powerflow0009p_pd[172] = 1.61712247324614 * x[7];
	powerflow0009p_pd[173] = powerflow0009p_pd[172] * x[6];
	v[1] = x[52] - x[51];
	powerflow0009p_pd[174] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[175] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[173] * powerflow0009p_pd[174];
	v[0] += v[1];
	t1 = v[0] + x[30];
	c[21] = t1;

  /***  constraint 23  ***/

	powerflow0009p_pd[176] = 5.58824496236153 * x[4];
	powerflow0009p_pd[177] = powerflow0009p_pd[176] * x[5];
	v[0] = x[49] - x[50];
	powerflow0009p_pd[178] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[179] = -sin(v[0]);
	v[0] = powerflow0009p_pd[177] * powerflow0009p_pd[178];
	powerflow0009p_pd[180] = x[4] * x[4];
	powerflow0009p_pd[181] = x[4] + x[4];
	v[1] = -5.40924496236153 * powerflow0009p_pd[180];
	v[0] += v[1];
	powerflow0009p_pd[182] = 1.28200913842411 * x[4];
	powerflow0009p_pd[183] = powerflow0009p_pd[182] * x[5];
	v[1] = x[49] - x[50];
	powerflow0009p_pd[184] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[185] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[183] * powerflow0009p_pd[184];
	v[0] += v[1];
	t1 = v[0] + x[31];
	c[22] = t1;

  /***  constraint 24  ***/

	powerflow0009p_pd[186] = 5.58824496236153 * x[5];
	powerflow0009p_pd[187] = powerflow0009p_pd[186] * x[4];
	v[0] = x[50] - x[49];
	powerflow0009p_pd[188] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[189] = -sin(v[0]);
	v[0] = powerflow0009p_pd[187] * powerflow0009p_pd[188];
	powerflow0009p_pd[190] = x[5] * x[5];
	powerflow0009p_pd[191] = x[5] + x[5];
	v[1] = -5.40924496236153 * powerflow0009p_pd[190];
	v[0] += v[1];
	powerflow0009p_pd[192] = 1.28200913842411 * x[5];
	powerflow0009p_pd[193] = powerflow0009p_pd[192] * x[4];
	v[1] = x[50] - x[49];
	powerflow0009p_pd[194] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[195] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[193] * powerflow0009p_pd[194];
	v[0] += v[1];
	t1 = v[0] + x[32];
	c[23] = t1;

  /***  constraint 25  ***/

	powerflow0009p_pd[196] = 9.78427042636317 * x[5];
	powerflow0009p_pd[197] = powerflow0009p_pd[196] * x[6];
	v[0] = x[50] - x[51];
	powerflow0009p_pd[198] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[199] = -sin(v[0]);
	v[0] = powerflow0009p_pd[197] * powerflow0009p_pd[198];
	powerflow0009p_pd[200] = x[5] * x[5];
	powerflow0009p_pd[201] = x[5] + x[5];
	v[1] = -9.67977042636317 * powerflow0009p_pd[200];
	v[0] += v[1];
	powerflow0009p_pd[202] = 1.1550874808901 * x[5];
	powerflow0009p_pd[203] = powerflow0009p_pd[202] * x[6];
	v[1] = x[50] - x[51];
	powerflow0009p_pd[204] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[205] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[203] * powerflow0009p_pd[204];
	v[0] += v[1];
	t1 = v[0] + x[33];
	c[24] = t1;

  /***  constraint 26  ***/

	powerflow0009p_pd[206] = 9.78427042636317 * x[6];
	powerflow0009p_pd[207] = powerflow0009p_pd[206] * x[5];
	v[0] = x[51] - x[50];
	powerflow0009p_pd[208] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[209] = -sin(v[0]);
	v[0] = powerflow0009p_pd[207] * powerflow0009p_pd[208];
	powerflow0009p_pd[210] = x[6] * x[6];
	powerflow0009p_pd[211] = x[6] + x[6];
	v[1] = -9.67977042636317 * powerflow0009p_pd[210];
	v[0] += v[1];
	powerflow0009p_pd[212] = 1.1550874808901 * x[6];
	powerflow0009p_pd[213] = powerflow0009p_pd[212] * x[5];
	v[1] = x[51] - x[50];
	powerflow0009p_pd[214] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[215] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[213] * powerflow0009p_pd[214];
	v[0] += v[1];
	t1 = v[0] + x[34];
	c[25] = t1;

  /***  constraint 27  ***/

	powerflow0009p_pd[216] = 16. * x[7];
	powerflow0009p_pd[217] = powerflow0009p_pd[216] * x[1];
	v[0] = x[52] - x[46];
	powerflow0009p_pd[218] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[219] = -sin(v[0]);
	v[0] = powerflow0009p_pd[217] * powerflow0009p_pd[218];
	powerflow0009p_pd[220] = x[7] * x[7];
	powerflow0009p_pd[221] = x[7] + x[7];
	v[1] = -16. * powerflow0009p_pd[220];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[35];
	c[26] = t1;

  /***  constraint 28  ***/

	powerflow0009p_pd[222] = 16. * x[1];
	powerflow0009p_pd[223] = powerflow0009p_pd[222] * x[7];
	v[0] = x[46] - x[52];
	powerflow0009p_pd[224] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[225] = -sin(v[0]);
	v[0] = powerflow0009p_pd[223] * powerflow0009p_pd[224];
	powerflow0009p_pd[226] = x[1] * x[1];
	powerflow0009p_pd[227] = x[1] + x[1];
	v[1] = -16. * powerflow0009p_pd[226];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[36];
	c[27] = t1;

  /***  constraint 29  ***/

	powerflow0009p_pd[228] = 10.5106820518679 * x[3];
	powerflow0009p_pd[229] = powerflow0009p_pd[228] * x[4];
	v[0] = x[48] - x[49];
	powerflow0009p_pd[230] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[231] = -sin(v[0]);
	v[0] = powerflow0009p_pd[229] * powerflow0009p_pd[230];
	powerflow0009p_pd[232] = x[3] * x[3];
	powerflow0009p_pd[233] = x[3] + x[3];
	v[1] = -10.4316820518679 * powerflow0009p_pd[232];
	v[0] += v[1];
	powerflow0009p_pd[234] = 1.94219124871473 * x[3];
	powerflow0009p_pd[235] = powerflow0009p_pd[234] * x[4];
	v[1] = x[48] - x[49];
	powerflow0009p_pd[236] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[237] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[235] * powerflow0009p_pd[236];
	v[0] += v[1];
	t1 = v[0] + x[37];
	c[28] = t1;

  /***  constraint 30  ***/

	powerflow0009p_pd[238] = 10.5106820518679 * x[4];
	powerflow0009p_pd[239] = powerflow0009p_pd[238] * x[3];
	v[0] = x[49] - x[48];
	powerflow0009p_pd[240] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[241] = -sin(v[0]);
	v[0] = powerflow0009p_pd[239] * powerflow0009p_pd[240];
	powerflow0009p_pd[242] = x[4] * x[4];
	powerflow0009p_pd[243] = x[4] + x[4];
	v[1] = -10.4316820518679 * powerflow0009p_pd[242];
	v[0] += v[1];
	powerflow0009p_pd[244] = 1.94219124871473 * x[4];
	powerflow0009p_pd[245] = powerflow0009p_pd[244] * x[3];
	v[1] = x[49] - x[48];
	powerflow0009p_pd[246] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[247] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[245] * powerflow0009p_pd[246];
	v[0] += v[1];
	t1 = v[0] + x[38];
	c[29] = t1;

  /***  constraint 31  ***/

	powerflow0009p_pd[248] = 17.3611111111111 * x[0];
	powerflow0009p_pd[249] = powerflow0009p_pd[248] * x[3];
	v[0] = x[45] - x[48];
	powerflow0009p_pd[250] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[251] = -sin(v[0]);
	v[0] = powerflow0009p_pd[249] * powerflow0009p_pd[250];
	powerflow0009p_pd[252] = x[0] * x[0];
	powerflow0009p_pd[253] = x[0] + x[0];
	v[1] = -17.3611111111111 * powerflow0009p_pd[252];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[39];
	c[30] = t1;

  /***  constraint 32  ***/

	powerflow0009p_pd[254] = 17.3611111111111 * x[3];
	powerflow0009p_pd[255] = powerflow0009p_pd[254] * x[0];
	v[0] = x[48] - x[45];
	powerflow0009p_pd[256] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[257] = -sin(v[0]);
	v[0] = powerflow0009p_pd[255] * powerflow0009p_pd[256];
	powerflow0009p_pd[258] = x[3] * x[3];
	powerflow0009p_pd[259] = x[3] + x[3];
	v[1] = -17.3611111111111 * powerflow0009p_pd[258];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[40];
	c[31] = t1;

  /***  constraint 33  ***/

	powerflow0009p_pd[260] = 11.6040955631399 * x[8];
	powerflow0009p_pd[261] = powerflow0009p_pd[260] * x[3];
	v[0] = x[53] - x[48];
	powerflow0009p_pd[262] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[263] = -sin(v[0]);
	v[0] = powerflow0009p_pd[261] * powerflow0009p_pd[262];
	powerflow0009p_pd[264] = x[8] * x[8];
	powerflow0009p_pd[265] = x[8] + x[8];
	v[1] = -11.5160955631399 * powerflow0009p_pd[264];
	v[0] += v[1];
	powerflow0009p_pd[266] = 1.36518771331058 * x[8];
	powerflow0009p_pd[267] = powerflow0009p_pd[266] * x[3];
	v[1] = x[53] - x[48];
	powerflow0009p_pd[268] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[269] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[267] * powerflow0009p_pd[268];
	v[0] += v[1];
	t1 = v[0] + x[41];
	c[32] = t1;

  /***  constraint 34  ***/

	powerflow0009p_pd[270] = 11.6040955631399 * x[3];
	powerflow0009p_pd[271] = powerflow0009p_pd[270] * x[8];
	v[0] = x[48] - x[53];
	powerflow0009p_pd[272] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[273] = -sin(v[0]);
	v[0] = powerflow0009p_pd[271] * powerflow0009p_pd[272];
	powerflow0009p_pd[274] = x[3] * x[3];
	powerflow0009p_pd[275] = x[3] + x[3];
	v[1] = -11.5160955631399 * powerflow0009p_pd[274];
	v[0] += v[1];
	powerflow0009p_pd[276] = 1.36518771331058 * x[3];
	powerflow0009p_pd[277] = powerflow0009p_pd[276] * x[8];
	v[1] = x[48] - x[53];
	powerflow0009p_pd[278] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[279] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[277] * powerflow0009p_pd[278];
	v[0] += v[1];
	t1 = v[0] + x[42];
	c[33] = t1;

  /***  constraint 35  ***/

	powerflow0009p_pd[280] = 5.97513453330859 * x[7];
	powerflow0009p_pd[281] = powerflow0009p_pd[280] * x[8];
	v[0] = x[52] - x[53];
	powerflow0009p_pd[282] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[283] = -sin(v[0]);
	v[0] = powerflow0009p_pd[281] * powerflow0009p_pd[282];
	powerflow0009p_pd[284] = x[7] * x[7];
	powerflow0009p_pd[285] = x[7] + x[7];
	v[1] = -5.82213453330859 * powerflow0009p_pd[284];
	v[0] += v[1];
	powerflow0009p_pd[286] = 1.18760437929115 * x[7];
	powerflow0009p_pd[287] = powerflow0009p_pd[286] * x[8];
	v[1] = x[52] - x[53];
	powerflow0009p_pd[288] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[289] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[287] * powerflow0009p_pd[288];
	v[0] += v[1];
	t1 = v[0] + x[43];
	c[34] = t1;

  /***  constraint 36  ***/

	powerflow0009p_pd[290] = 5.97513453330859 * x[8];
	powerflow0009p_pd[291] = powerflow0009p_pd[290] * x[7];
	v[0] = x[53] - x[52];
	powerflow0009p_pd[292] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	powerflow0009p_pd[293] = -sin(v[0]);
	v[0] = powerflow0009p_pd[291] * powerflow0009p_pd[292];
	powerflow0009p_pd[294] = x[8] * x[8];
	powerflow0009p_pd[295] = x[8] + x[8];
	v[1] = -5.82213453330859 * powerflow0009p_pd[294];
	v[0] += v[1];
	powerflow0009p_pd[296] = 1.18760437929115 * x[8];
	powerflow0009p_pd[297] = powerflow0009p_pd[296] * x[7];
	v[1] = x[53] - x[52];
	powerflow0009p_pd[298] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	powerflow0009p_pd[299] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = powerflow0009p_pd[297] * powerflow0009p_pd[298];
	v[0] += v[1];
	t1 = v[0] + x[44];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[9] * x[9];
	powerflow0009p_pd[300] = x[9] + x[9];
	v[1] = x[27] * x[27];
	powerflow0009p_pd[301] = x[27] + x[27];
	v[2] = v[0] + v[1];
	c[36] = v[2];

  /***  constraint 38  ***/

	v[0] = x[10] * x[10];
	powerflow0009p_pd[302] = x[10] + x[10];
	v[1] = x[28] * x[28];
	powerflow0009p_pd[303] = x[28] + x[28];
	v[2] = v[0] + v[1];
	c[37] = v[2];

  /***  constraint 39  ***/

	v[0] = x[11] * x[11];
	powerflow0009p_pd[304] = x[11] + x[11];
	v[1] = x[29] * x[29];
	powerflow0009p_pd[305] = x[29] + x[29];
	v[2] = v[0] + v[1];
	c[38] = v[2];

  /***  constraint 40  ***/

	v[0] = x[12] * x[12];
	powerflow0009p_pd[306] = x[12] + x[12];
	v[1] = x[30] * x[30];
	powerflow0009p_pd[307] = x[30] + x[30];
	v[2] = v[0] + v[1];
	c[39] = v[2];

  /***  constraint 41  ***/

	v[0] = x[13] * x[13];
	powerflow0009p_pd[308] = x[13] + x[13];
	v[1] = x[31] * x[31];
	powerflow0009p_pd[309] = x[31] + x[31];
	v[2] = v[0] + v[1];
	c[40] = v[2];

  /***  constraint 42  ***/

	v[0] = x[14] * x[14];
	powerflow0009p_pd[310] = x[14] + x[14];
	v[1] = x[32] * x[32];
	powerflow0009p_pd[311] = x[32] + x[32];
	v[2] = v[0] + v[1];
	c[41] = v[2];

  /***  constraint 43  ***/

	v[0] = x[15] * x[15];
	powerflow0009p_pd[312] = x[15] + x[15];
	v[1] = x[33] * x[33];
	powerflow0009p_pd[313] = x[33] + x[33];
	v[2] = v[0] + v[1];
	c[42] = v[2];

  /***  constraint 44  ***/

	v[0] = x[16] * x[16];
	powerflow0009p_pd[314] = x[16] + x[16];
	v[1] = x[34] * x[34];
	powerflow0009p_pd[315] = x[34] + x[34];
	v[2] = v[0] + v[1];
	c[43] = v[2];

  /***  constraint 45  ***/

	v[0] = x[17] * x[17];
	powerflow0009p_pd[316] = x[17] + x[17];
	v[1] = x[35] * x[35];
	powerflow0009p_pd[317] = x[35] + x[35];
	v[2] = v[0] + v[1];
	c[44] = v[2];

  /***  constraint 46  ***/

	v[0] = x[18] * x[18];
	powerflow0009p_pd[318] = x[18] + x[18];
	v[1] = x[36] * x[36];
	powerflow0009p_pd[319] = x[36] + x[36];
	v[2] = v[0] + v[1];
	c[45] = v[2];

  /***  constraint 47  ***/

	v[0] = x[19] * x[19];
	powerflow0009p_pd[320] = x[19] + x[19];
	v[1] = x[37] * x[37];
	powerflow0009p_pd[321] = x[37] + x[37];
	v[2] = v[0] + v[1];
	c[46] = v[2];

  /***  constraint 48  ***/

	v[0] = x[20] * x[20];
	powerflow0009p_pd[322] = x[20] + x[20];
	v[1] = x[38] * x[38];
	powerflow0009p_pd[323] = x[38] + x[38];
	v[2] = v[0] + v[1];
	c[47] = v[2];

  /***  constraint 49  ***/

	v[0] = x[21] * x[21];
	powerflow0009p_pd[324] = x[21] + x[21];
	v[1] = x[39] * x[39];
	powerflow0009p_pd[325] = x[39] + x[39];
	v[2] = v[0] + v[1];
	c[48] = v[2];

  /***  constraint 50  ***/

	v[0] = x[22] * x[22];
	powerflow0009p_pd[326] = x[22] + x[22];
	v[1] = x[40] * x[40];
	powerflow0009p_pd[327] = x[40] + x[40];
	v[2] = v[0] + v[1];
	c[49] = v[2];

  /***  constraint 51  ***/

	v[0] = x[23] * x[23];
	powerflow0009p_pd[328] = x[23] + x[23];
	v[1] = x[41] * x[41];
	powerflow0009p_pd[329] = x[41] + x[41];
	v[2] = v[0] + v[1];
	c[50] = v[2];

  /***  constraint 52  ***/

	v[0] = x[24] * x[24];
	powerflow0009p_pd[330] = x[24] + x[24];
	v[1] = x[42] * x[42];
	powerflow0009p_pd[331] = x[42] + x[42];
	v[2] = v[0] + v[1];
	c[51] = v[2];

  /***  constraint 53  ***/

	v[0] = x[25] * x[25];
	powerflow0009p_pd[332] = x[25] + x[25];
	v[1] = x[43] * x[43];
	powerflow0009p_pd[333] = x[43] + x[43];
	v[2] = v[0] + v[1];
	c[52] = v[2];

  /***  constraint 54  ***/

	v[0] = x[26] * x[26];
	powerflow0009p_pd[334] = x[26] + x[26];
	v[1] = x[44] * x[44];
	powerflow0009p_pd[335] = x[44] + x[44];
	v[2] = v[0] + v[1];
	c[53] = v[2];

  /***  constraint 55  ***/

	t1 = x[54];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[55];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[56];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[54];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[55];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[56];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[57];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[58];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[59];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[57];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[58];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[59];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[0];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[1];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[2];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[3];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[4];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[5];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[6];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[7];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[8];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[0];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[1];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[2];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[3];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[4];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[5];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[6];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[7];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[8];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[47];
	t1 += -x[50];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = -x[47];
	t1 += x[50];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[51];
	t1 += -x[52];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = -x[51];
	t1 += x[52];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[49];
	t1 += -x[50];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = -x[49];
	t1 += x[50];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[50];
	t1 += -x[51];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = -x[50];
	t1 += x[51];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -x[46];
	t1 += x[52];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[46];
	t1 += -x[52];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[48];
	t1 += -x[49];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = -x[48];
	t1 += x[49];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[45];
	t1 += -x[48];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = -x[45];
	t1 += x[48];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -x[48];
	t1 += x[53];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[48];
	t1 += -x[53];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[52];
	t1 += -x[53];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = -x[52];
	t1 += x[53];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[47];
	t1 += -x[50];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = -x[47];
	t1 += x[50];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[51];
	t1 += -x[52];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -x[51];
	t1 += x[52];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[49];
	t1 += -x[50];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -x[49];
	t1 += x[50];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[50];
	t1 += -x[51];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = -x[50];
	t1 += x[51];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -x[46];
	t1 += x[52];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[46];
	t1 += -x[52];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[48];
	t1 += -x[49];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -x[48];
	t1 += x[49];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[45];
	t1 += -x[48];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = -x[45];
	t1 += x[48];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = -x[48];
	t1 += x[53];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[48];
	t1 += -x[53];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[52];
	t1 += -x[53];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -x[52];
	t1 += x[53];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[45];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[21];
	t1 += -x[54];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[18];
	t1 += -x[55];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[9];
	t1 += -x[56];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[39];
	t1 += -x[57];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[36];
	t1 += -x[58];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[27];
	t1 += -x[59];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[19];
	t1 += x[22];
	t1 += x[24];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[13];
	t1 += x[20];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[10];
	t1 += x[14];
	t1 += x[15];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[11];
	t1 += x[16];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[12];
	t1 += x[17];
	t1 += x[25];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[23];
	t1 += x[26];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[37];
	t1 += x[40];
	t1 += x[42];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = x[31];
	t1 += x[38];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = x[28];
	t1 += x[32];
	t1 += x[33];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = x[29];
	t1 += x[34];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = x[30];
	t1 += x[35];
	t1 += x[43];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = x[41];
	t1 += x[44];
	c[138] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = powerflow0009p_pd[1]*powerflow0009p_pd[3];
	J[263] = -dv[0];
	J[215] = dv[0];
	J[42] = powerflow0009p_pd[2]*powerflow0009p_pd[0];
	dv[1] = powerflow0009p_pd[2]*x[5];
	J[12] = -dv[1]*17.0648464163823;
	J[90] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = powerflow0009p_pd[5]*powerflow0009p_pd[7];
	J[216] = -dv[0];
	J[264] = dv[0];
	J[13] = powerflow0009p_pd[6]*powerflow0009p_pd[4];
	dv[1] = powerflow0009p_pd[6]*x[2];
	J[43] = -dv[1]*17.0648464163823;
	J[93] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -powerflow0009p_pd[15]*powerflow0009p_pd[17];
	J[303] = -dv[0];
	J[287] = dv[0];
	J[66] = -powerflow0009p_pd[16]*powerflow0009p_pd[14];
	dv[1] = -powerflow0009p_pd[16]*x[7];
	J[56] = dv[1]*13.6979785969084;
	J[56] -= 1.61712247324614*powerflow0009p_pd[13];
	dv[2] = powerflow0009p_pd[9]*powerflow0009p_pd[11];
	J[303] -= dv[2];
	J[287] += dv[2];
	J[66] += powerflow0009p_pd[10]*powerflow0009p_pd[8];
	dv[3] = powerflow0009p_pd[10]*x[7];
	J[56] += dv[3]*1.61712247324614;
	J[96] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -powerflow0009p_pd[25]*powerflow0009p_pd[27];
	J[288] = -dv[0];
	J[304] = dv[0];
	J[57] = -powerflow0009p_pd[26]*powerflow0009p_pd[24];
	dv[1] = -powerflow0009p_pd[26]*x[6];
	J[67] = dv[1]*13.6979785969084;
	J[67] -= 1.61712247324614*powerflow0009p_pd[23];
	dv[2] = powerflow0009p_pd[19]*powerflow0009p_pd[21];
	J[288] -= dv[2];
	J[304] += dv[2];
	J[57] += powerflow0009p_pd[20]*powerflow0009p_pd[18];
	dv[3] = powerflow0009p_pd[20]*x[6];
	J[67] += dv[3]*1.61712247324614;
	J[99] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -powerflow0009p_pd[35]*powerflow0009p_pd[37];
	J[265] = -dv[0];
	J[247] = dv[0];
	J[44] = -powerflow0009p_pd[36]*powerflow0009p_pd[34];
	dv[1] = -powerflow0009p_pd[36]*x[5];
	J[32] = dv[1]*5.58824496236153;
	J[32] -= 1.28200913842411*powerflow0009p_pd[33];
	dv[2] = powerflow0009p_pd[29]*powerflow0009p_pd[31];
	J[265] -= dv[2];
	J[247] += dv[2];
	J[44] += powerflow0009p_pd[30]*powerflow0009p_pd[28];
	dv[3] = powerflow0009p_pd[30]*x[5];
	J[32] += dv[3]*1.28200913842411;
	J[102] = 1.;

   /*** derivatives for constraint 6 ***/

	dv[0] = -powerflow0009p_pd[45]*powerflow0009p_pd[47];
	J[248] = -dv[0];
	J[266] = dv[0];
	J[33] = -powerflow0009p_pd[46]*powerflow0009p_pd[44];
	dv[1] = -powerflow0009p_pd[46]*x[4];
	J[45] = dv[1]*5.58824496236153;
	J[45] -= 1.28200913842411*powerflow0009p_pd[43];
	dv[2] = powerflow0009p_pd[39]*powerflow0009p_pd[41];
	J[248] -= dv[2];
	J[266] += dv[2];
	J[33] += powerflow0009p_pd[40]*powerflow0009p_pd[38];
	dv[3] = powerflow0009p_pd[40]*x[4];
	J[45] += dv[3]*1.28200913842411;
	J[105] = 1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -powerflow0009p_pd[55]*powerflow0009p_pd[57];
	J[289] = -dv[0];
	J[267] = dv[0];
	J[58] = -powerflow0009p_pd[56]*powerflow0009p_pd[54];
	dv[1] = -powerflow0009p_pd[56]*x[6];
	J[46] = dv[1]*9.78427042636317;
	J[46] -= 1.1550874808901*powerflow0009p_pd[53];
	dv[2] = powerflow0009p_pd[49]*powerflow0009p_pd[51];
	J[289] -= dv[2];
	J[267] += dv[2];
	J[58] += powerflow0009p_pd[50]*powerflow0009p_pd[48];
	dv[3] = powerflow0009p_pd[50]*x[6];
	J[46] += dv[3]*1.1550874808901;
	J[108] = 1.;

   /*** derivatives for constraint 8 ***/

	dv[0] = -powerflow0009p_pd[65]*powerflow0009p_pd[67];
	J[268] = -dv[0];
	J[290] = dv[0];
	J[47] = -powerflow0009p_pd[66]*powerflow0009p_pd[64];
	dv[1] = -powerflow0009p_pd[66]*x[5];
	J[59] = dv[1]*9.78427042636317;
	J[59] -= 1.1550874808901*powerflow0009p_pd[63];
	dv[2] = powerflow0009p_pd[59]*powerflow0009p_pd[61];
	J[268] -= dv[2];
	J[290] += dv[2];
	J[47] += powerflow0009p_pd[60]*powerflow0009p_pd[58];
	dv[3] = powerflow0009p_pd[60]*x[5];
	J[59] += dv[3]*1.1550874808901;
	J[111] = 1.;

   /*** derivatives for constraint 9 ***/

	dv[0] = powerflow0009p_pd[69]*powerflow0009p_pd[71];
	J[207] = -dv[0];
	J[305] = dv[0];
	J[6] = powerflow0009p_pd[70]*powerflow0009p_pd[68];
	dv[1] = powerflow0009p_pd[70]*x[1];
	J[68] = -dv[1]*16.;
	J[114] = 1.;

   /*** derivatives for constraint 10 ***/

	dv[0] = powerflow0009p_pd[73]*powerflow0009p_pd[75];
	J[306] = -dv[0];
	J[208] = dv[0];
	J[69] = powerflow0009p_pd[74]*powerflow0009p_pd[72];
	dv[1] = powerflow0009p_pd[74]*x[7];
	J[7] = -dv[1]*16.;
	J[117] = 1.;

   /*** derivatives for constraint 11 ***/

	dv[0] = -powerflow0009p_pd[83]*powerflow0009p_pd[85];
	J[249] = -dv[0];
	J[223] = dv[0];
	J[34] = -powerflow0009p_pd[84]*powerflow0009p_pd[82];
	dv[1] = -powerflow0009p_pd[84]*x[4];
	J[18] = dv[1]*10.5106820518679;
	J[18] -= 1.94219124871473*powerflow0009p_pd[81];
	dv[2] = powerflow0009p_pd[77]*powerflow0009p_pd[79];
	J[249] -= dv[2];
	J[223] += dv[2];
	J[34] += powerflow0009p_pd[78]*powerflow0009p_pd[76];
	dv[3] = powerflow0009p_pd[78]*x[4];
	J[18] += dv[3]*1.94219124871473;
	J[120] = 1.;

   /*** derivatives for constraint 12 ***/

	dv[0] = -powerflow0009p_pd[93]*powerflow0009p_pd[95];
	J[224] = -dv[0];
	J[250] = dv[0];
	J[19] = -powerflow0009p_pd[94]*powerflow0009p_pd[92];
	dv[1] = -powerflow0009p_pd[94]*x[3];
	J[35] = dv[1]*10.5106820518679;
	J[35] -= 1.94219124871473*powerflow0009p_pd[91];
	dv[2] = powerflow0009p_pd[87]*powerflow0009p_pd[89];
	J[224] -= dv[2];
	J[250] += dv[2];
	J[19] += powerflow0009p_pd[88]*powerflow0009p_pd[86];
	dv[3] = powerflow0009p_pd[88]*x[3];
	J[35] += dv[3]*1.94219124871473;
	J[123] = 1.;

   /*** derivatives for constraint 13 ***/

	dv[0] = powerflow0009p_pd[97]*powerflow0009p_pd[99];
	J[225] = -dv[0];
	J[198] = dv[0];
	J[20] = powerflow0009p_pd[98]*powerflow0009p_pd[96];
	dv[1] = powerflow0009p_pd[98]*x[3];
	J[0] = -dv[1]*17.3611111111111;
	J[126] = 1.;

   /*** derivatives for constraint 14 ***/

	dv[0] = powerflow0009p_pd[101]*powerflow0009p_pd[103];
	J[199] = -dv[0];
	J[226] = dv[0];
	J[1] = powerflow0009p_pd[102]*powerflow0009p_pd[100];
	dv[1] = powerflow0009p_pd[102]*x[0];
	J[21] = -dv[1]*17.3611111111111;
	J[129] = 1.;

   /*** derivatives for constraint 15 ***/

	dv[0] = -powerflow0009p_pd[111]*powerflow0009p_pd[113];
	J[227] = -dv[0];
	J[327] = dv[0];
	J[22] = -powerflow0009p_pd[112]*powerflow0009p_pd[110];
	dv[1] = -powerflow0009p_pd[112]*x[3];
	J[80] = dv[1]*11.6040955631399;
	J[80] -= 1.36518771331058*powerflow0009p_pd[109];
	dv[2] = powerflow0009p_pd[105]*powerflow0009p_pd[107];
	J[227] -= dv[2];
	J[327] += dv[2];
	J[22] += powerflow0009p_pd[106]*powerflow0009p_pd[104];
	dv[3] = powerflow0009p_pd[106]*x[3];
	J[80] += dv[3]*1.36518771331058;
	J[132] = 1.;

   /*** derivatives for constraint 16 ***/

	dv[0] = -powerflow0009p_pd[121]*powerflow0009p_pd[123];
	J[328] = -dv[0];
	J[228] = dv[0];
	J[81] = -powerflow0009p_pd[122]*powerflow0009p_pd[120];
	dv[1] = -powerflow0009p_pd[122]*x[8];
	J[23] = dv[1]*11.6040955631399;
	J[23] -= 1.36518771331058*powerflow0009p_pd[119];
	dv[2] = powerflow0009p_pd[115]*powerflow0009p_pd[117];
	J[328] -= dv[2];
	J[228] += dv[2];
	J[81] += powerflow0009p_pd[116]*powerflow0009p_pd[114];
	dv[3] = powerflow0009p_pd[116]*x[8];
	J[23] += dv[3]*1.36518771331058;
	J[135] = 1.;

   /*** derivatives for constraint 17 ***/

	dv[0] = -powerflow0009p_pd[131]*powerflow0009p_pd[133];
	J[329] = -dv[0];
	J[307] = dv[0];
	J[82] = -powerflow0009p_pd[132]*powerflow0009p_pd[130];
	dv[1] = -powerflow0009p_pd[132]*x[8];
	J[70] = dv[1]*5.97513453330859;
	J[70] -= 1.18760437929115*powerflow0009p_pd[129];
	dv[2] = powerflow0009p_pd[125]*powerflow0009p_pd[127];
	J[329] -= dv[2];
	J[307] += dv[2];
	J[82] += powerflow0009p_pd[126]*powerflow0009p_pd[124];
	dv[3] = powerflow0009p_pd[126]*x[8];
	J[70] += dv[3]*1.18760437929115;
	J[138] = 1.;

   /*** derivatives for constraint 18 ***/

	dv[0] = -powerflow0009p_pd[141]*powerflow0009p_pd[143];
	J[308] = -dv[0];
	J[330] = dv[0];
	J[71] = -powerflow0009p_pd[142]*powerflow0009p_pd[140];
	dv[1] = -powerflow0009p_pd[142]*x[7];
	J[83] = dv[1]*5.97513453330859;
	J[83] -= 1.18760437929115*powerflow0009p_pd[139];
	dv[2] = powerflow0009p_pd[135]*powerflow0009p_pd[137];
	J[308] -= dv[2];
	J[330] += dv[2];
	J[71] += powerflow0009p_pd[136]*powerflow0009p_pd[134];
	dv[3] = powerflow0009p_pd[136]*x[7];
	J[83] += dv[3]*1.18760437929115;
	J[141] = 1.;

   /*** derivatives for constraint 19 ***/

	J[14] = -17.0648464163823*powerflow0009p_pd[149];
	dv[0] = powerflow0009p_pd[145]*powerflow0009p_pd[147];
	J[269] = -dv[0];
	J[217] = dv[0];
	J[48] = powerflow0009p_pd[146]*powerflow0009p_pd[144];
	dv[1] = powerflow0009p_pd[146]*x[5];
	J[14] += dv[1]*17.0648464163823;
	J[144] = 1.;

   /*** derivatives for constraint 20 ***/

	J[49] = -17.0648464163823*powerflow0009p_pd[155];
	dv[0] = powerflow0009p_pd[151]*powerflow0009p_pd[153];
	J[218] = -dv[0];
	J[270] = dv[0];
	J[15] = powerflow0009p_pd[152]*powerflow0009p_pd[150];
	dv[1] = powerflow0009p_pd[152]*x[2];
	J[49] += dv[1]*17.0648464163823;
	J[147] = 1.;

   /*** derivatives for constraint 21 ***/

	dv[0] = powerflow0009p_pd[163]*powerflow0009p_pd[165];
	J[309] = -dv[0];
	J[291] = dv[0];
	J[72] = powerflow0009p_pd[164]*powerflow0009p_pd[162];
	dv[1] = powerflow0009p_pd[164]*x[7];
	J[60] = dv[1]*1.61712247324614;
	J[60] -= 13.6234785969084*powerflow0009p_pd[161];
	dv[2] = powerflow0009p_pd[157]*powerflow0009p_pd[159];
	J[309] -= dv[2];
	J[291] += dv[2];
	J[72] += powerflow0009p_pd[158]*powerflow0009p_pd[156];
	dv[3] = powerflow0009p_pd[158]*x[7];
	J[60] += dv[3]*13.6979785969084;
	J[150] = 1.;

   /*** derivatives for constraint 22 ***/

	dv[0] = powerflow0009p_pd[173]*powerflow0009p_pd[175];
	J[292] = -dv[0];
	J[310] = dv[0];
	J[61] = powerflow0009p_pd[174]*powerflow0009p_pd[172];
	dv[1] = powerflow0009p_pd[174]*x[6];
	J[73] = dv[1]*1.61712247324614;
	J[73] -= 13.6234785969084*powerflow0009p_pd[171];
	dv[2] = powerflow0009p_pd[167]*powerflow0009p_pd[169];
	J[292] -= dv[2];
	J[310] += dv[2];
	J[61] += powerflow0009p_pd[168]*powerflow0009p_pd[166];
	dv[3] = powerflow0009p_pd[168]*x[6];
	J[73] += dv[3]*13.6979785969084;
	J[153] = 1.;

   /*** derivatives for constraint 23 ***/

	dv[0] = powerflow0009p_pd[183]*powerflow0009p_pd[185];
	J[271] = -dv[0];
	J[251] = dv[0];
	J[50] = powerflow0009p_pd[184]*powerflow0009p_pd[182];
	dv[1] = powerflow0009p_pd[184]*x[5];
	J[36] = dv[1]*1.28200913842411;
	J[36] -= 5.40924496236153*powerflow0009p_pd[181];
	dv[2] = powerflow0009p_pd[177]*powerflow0009p_pd[179];
	J[271] -= dv[2];
	J[251] += dv[2];
	J[50] += powerflow0009p_pd[178]*powerflow0009p_pd[176];
	dv[3] = powerflow0009p_pd[178]*x[5];
	J[36] += dv[3]*5.58824496236153;
	J[156] = 1.;

   /*** derivatives for constraint 24 ***/

	dv[0] = powerflow0009p_pd[193]*powerflow0009p_pd[195];
	J[252] = -dv[0];
	J[272] = dv[0];
	J[37] = powerflow0009p_pd[194]*powerflow0009p_pd[192];
	dv[1] = powerflow0009p_pd[194]*x[4];
	J[51] = dv[1]*1.28200913842411;
	J[51] -= 5.40924496236153*powerflow0009p_pd[191];
	dv[2] = powerflow0009p_pd[187]*powerflow0009p_pd[189];
	J[252] -= dv[2];
	J[272] += dv[2];
	J[37] += powerflow0009p_pd[188]*powerflow0009p_pd[186];
	dv[3] = powerflow0009p_pd[188]*x[4];
	J[51] += dv[3]*5.58824496236153;
	J[159] = 1.;

   /*** derivatives for constraint 25 ***/

	dv[0] = powerflow0009p_pd[203]*powerflow0009p_pd[205];
	J[293] = -dv[0];
	J[273] = dv[0];
	J[62] = powerflow0009p_pd[204]*powerflow0009p_pd[202];
	dv[1] = powerflow0009p_pd[204]*x[6];
	J[52] = dv[1]*1.1550874808901;
	J[52] -= 9.67977042636317*powerflow0009p_pd[201];
	dv[2] = powerflow0009p_pd[197]*powerflow0009p_pd[199];
	J[293] -= dv[2];
	J[273] += dv[2];
	J[62] += powerflow0009p_pd[198]*powerflow0009p_pd[196];
	dv[3] = powerflow0009p_pd[198]*x[6];
	J[52] += dv[3]*9.78427042636317;
	J[162] = 1.;

   /*** derivatives for constraint 26 ***/

	dv[0] = powerflow0009p_pd[213]*powerflow0009p_pd[215];
	J[274] = -dv[0];
	J[294] = dv[0];
	J[53] = powerflow0009p_pd[214]*powerflow0009p_pd[212];
	dv[1] = powerflow0009p_pd[214]*x[5];
	J[63] = dv[1]*1.1550874808901;
	J[63] -= 9.67977042636317*powerflow0009p_pd[211];
	dv[2] = powerflow0009p_pd[207]*powerflow0009p_pd[209];
	J[274] -= dv[2];
	J[294] += dv[2];
	J[53] += powerflow0009p_pd[208]*powerflow0009p_pd[206];
	dv[3] = powerflow0009p_pd[208]*x[5];
	J[63] += dv[3]*9.78427042636317;
	J[165] = 1.;

   /*** derivatives for constraint 27 ***/

	J[74] = -16.*powerflow0009p_pd[221];
	dv[0] = powerflow0009p_pd[217]*powerflow0009p_pd[219];
	J[209] = -dv[0];
	J[311] = dv[0];
	J[8] = powerflow0009p_pd[218]*powerflow0009p_pd[216];
	dv[1] = powerflow0009p_pd[218]*x[1];
	J[74] += dv[1]*16.;
	J[168] = 1.;

   /*** derivatives for constraint 28 ***/

	J[9] = -16.*powerflow0009p_pd[227];
	dv[0] = powerflow0009p_pd[223]*powerflow0009p_pd[225];
	J[312] = -dv[0];
	J[210] = dv[0];
	J[75] = powerflow0009p_pd[224]*powerflow0009p_pd[222];
	dv[1] = powerflow0009p_pd[224]*x[7];
	J[9] += dv[1]*16.;
	J[171] = 1.;

   /*** derivatives for constraint 29 ***/

	dv[0] = powerflow0009p_pd[235]*powerflow0009p_pd[237];
	J[253] = -dv[0];
	J[229] = dv[0];
	J[38] = powerflow0009p_pd[236]*powerflow0009p_pd[234];
	dv[1] = powerflow0009p_pd[236]*x[4];
	J[24] = dv[1]*1.94219124871473;
	J[24] -= 10.4316820518679*powerflow0009p_pd[233];
	dv[2] = powerflow0009p_pd[229]*powerflow0009p_pd[231];
	J[253] -= dv[2];
	J[229] += dv[2];
	J[38] += powerflow0009p_pd[230]*powerflow0009p_pd[228];
	dv[3] = powerflow0009p_pd[230]*x[4];
	J[24] += dv[3]*10.5106820518679;
	J[174] = 1.;

   /*** derivatives for constraint 30 ***/

	dv[0] = powerflow0009p_pd[245]*powerflow0009p_pd[247];
	J[230] = -dv[0];
	J[254] = dv[0];
	J[25] = powerflow0009p_pd[246]*powerflow0009p_pd[244];
	dv[1] = powerflow0009p_pd[246]*x[3];
	J[39] = dv[1]*1.94219124871473;
	J[39] -= 10.4316820518679*powerflow0009p_pd[243];
	dv[2] = powerflow0009p_pd[239]*powerflow0009p_pd[241];
	J[230] -= dv[2];
	J[254] += dv[2];
	J[25] += powerflow0009p_pd[240]*powerflow0009p_pd[238];
	dv[3] = powerflow0009p_pd[240]*x[3];
	J[39] += dv[3]*10.5106820518679;
	J[177] = 1.;

   /*** derivatives for constraint 31 ***/

	J[2] = -17.3611111111111*powerflow0009p_pd[253];
	dv[0] = powerflow0009p_pd[249]*powerflow0009p_pd[251];
	J[231] = -dv[0];
	J[200] = dv[0];
	J[26] = powerflow0009p_pd[250]*powerflow0009p_pd[248];
	dv[1] = powerflow0009p_pd[250]*x[3];
	J[2] += dv[1]*17.3611111111111;
	J[180] = 1.;

   /*** derivatives for constraint 32 ***/

	J[27] = -17.3611111111111*powerflow0009p_pd[259];
	dv[0] = powerflow0009p_pd[255]*powerflow0009p_pd[257];
	J[201] = -dv[0];
	J[232] = dv[0];
	J[3] = powerflow0009p_pd[256]*powerflow0009p_pd[254];
	dv[1] = powerflow0009p_pd[256]*x[0];
	J[27] += dv[1]*17.3611111111111;
	J[183] = 1.;

   /*** derivatives for constraint 33 ***/

	dv[0] = powerflow0009p_pd[267]*powerflow0009p_pd[269];
	J[233] = -dv[0];
	J[331] = dv[0];
	J[28] = powerflow0009p_pd[268]*powerflow0009p_pd[266];
	dv[1] = powerflow0009p_pd[268]*x[3];
	J[84] = dv[1]*1.36518771331058;
	J[84] -= 11.5160955631399*powerflow0009p_pd[265];
	dv[2] = powerflow0009p_pd[261]*powerflow0009p_pd[263];
	J[233] -= dv[2];
	J[331] += dv[2];
	J[28] += powerflow0009p_pd[262]*powerflow0009p_pd[260];
	dv[3] = powerflow0009p_pd[262]*x[3];
	J[84] += dv[3]*11.6040955631399;
	J[186] = 1.;

   /*** derivatives for constraint 34 ***/

	dv[0] = powerflow0009p_pd[277]*powerflow0009p_pd[279];
	J[332] = -dv[0];
	J[234] = dv[0];
	J[85] = powerflow0009p_pd[278]*powerflow0009p_pd[276];
	dv[1] = powerflow0009p_pd[278]*x[8];
	J[29] = dv[1]*1.36518771331058;
	J[29] -= 11.5160955631399*powerflow0009p_pd[275];
	dv[2] = powerflow0009p_pd[271]*powerflow0009p_pd[273];
	J[332] -= dv[2];
	J[234] += dv[2];
	J[85] += powerflow0009p_pd[272]*powerflow0009p_pd[270];
	dv[3] = powerflow0009p_pd[272]*x[8];
	J[29] += dv[3]*11.6040955631399;
	J[189] = 1.;

   /*** derivatives for constraint 35 ***/

	dv[0] = powerflow0009p_pd[287]*powerflow0009p_pd[289];
	J[333] = -dv[0];
	J[313] = dv[0];
	J[86] = powerflow0009p_pd[288]*powerflow0009p_pd[286];
	dv[1] = powerflow0009p_pd[288]*x[8];
	J[76] = dv[1]*1.18760437929115;
	J[76] -= 5.82213453330859*powerflow0009p_pd[285];
	dv[2] = powerflow0009p_pd[281]*powerflow0009p_pd[283];
	J[333] -= dv[2];
	J[313] += dv[2];
	J[86] += powerflow0009p_pd[282]*powerflow0009p_pd[280];
	dv[3] = powerflow0009p_pd[282]*x[8];
	J[76] += dv[3]*5.97513453330859;
	J[192] = 1.;

   /*** derivatives for constraint 36 ***/

	dv[0] = powerflow0009p_pd[297]*powerflow0009p_pd[299];
	J[314] = -dv[0];
	J[334] = dv[0];
	J[77] = powerflow0009p_pd[298]*powerflow0009p_pd[296];
	dv[1] = powerflow0009p_pd[298]*x[7];
	J[87] = dv[1]*1.18760437929115;
	J[87] -= 5.82213453330859*powerflow0009p_pd[295];
	dv[2] = powerflow0009p_pd[291]*powerflow0009p_pd[293];
	J[314] -= dv[2];
	J[334] += dv[2];
	J[77] += powerflow0009p_pd[292]*powerflow0009p_pd[290];
	dv[3] = powerflow0009p_pd[292]*x[7];
	J[87] += dv[3]*5.97513453330859;
	J[195] = 1.;

   /*** derivatives for constraint 37 ***/

	J[145] = powerflow0009p_pd[301];
	J[91] = powerflow0009p_pd[300];

   /*** derivatives for constraint 38 ***/

	J[148] = powerflow0009p_pd[303];
	J[94] = powerflow0009p_pd[302];

   /*** derivatives for constraint 39 ***/

	J[151] = powerflow0009p_pd[305];
	J[97] = powerflow0009p_pd[304];

   /*** derivatives for constraint 40 ***/

	J[154] = powerflow0009p_pd[307];
	J[100] = powerflow0009p_pd[306];

   /*** derivatives for constraint 41 ***/

	J[157] = powerflow0009p_pd[309];
	J[103] = powerflow0009p_pd[308];

   /*** derivatives for constraint 42 ***/

	J[160] = powerflow0009p_pd[311];
	J[106] = powerflow0009p_pd[310];

   /*** derivatives for constraint 43 ***/

	J[163] = powerflow0009p_pd[313];
	J[109] = powerflow0009p_pd[312];

   /*** derivatives for constraint 44 ***/

	J[166] = powerflow0009p_pd[315];
	J[112] = powerflow0009p_pd[314];

   /*** derivatives for constraint 45 ***/

	J[169] = powerflow0009p_pd[317];
	J[115] = powerflow0009p_pd[316];

   /*** derivatives for constraint 46 ***/

	J[172] = powerflow0009p_pd[319];
	J[118] = powerflow0009p_pd[318];

   /*** derivatives for constraint 47 ***/

	J[175] = powerflow0009p_pd[321];
	J[121] = powerflow0009p_pd[320];

   /*** derivatives for constraint 48 ***/

	J[178] = powerflow0009p_pd[323];
	J[124] = powerflow0009p_pd[322];

   /*** derivatives for constraint 49 ***/

	J[181] = powerflow0009p_pd[325];
	J[127] = powerflow0009p_pd[324];

   /*** derivatives for constraint 50 ***/

	J[184] = powerflow0009p_pd[327];
	J[130] = powerflow0009p_pd[326];

   /*** derivatives for constraint 51 ***/

	J[187] = powerflow0009p_pd[329];
	J[133] = powerflow0009p_pd[328];

   /*** derivatives for constraint 52 ***/

	J[190] = powerflow0009p_pd[331];
	J[136] = powerflow0009p_pd[330];

   /*** derivatives for constraint 53 ***/

	J[193] = powerflow0009p_pd[333];
	J[139] = powerflow0009p_pd[332];

   /*** derivatives for constraint 54 ***/

	J[196] = powerflow0009p_pd[335];
	J[142] = powerflow0009p_pd[334];

   /*** derivatives for constraint 55 ***/

	J[343] = 1.;

   /*** derivatives for constraint 56 ***/

	J[346] = 1.;

   /*** derivatives for constraint 57 ***/

	J[349] = 1.;

   /*** derivatives for constraint 58 ***/

	J[344] = 1.;

   /*** derivatives for constraint 59 ***/

	J[347] = 1.;

   /*** derivatives for constraint 60 ***/

	J[350] = 1.;

   /*** derivatives for constraint 61 ***/

	J[352] = 1.;

   /*** derivatives for constraint 62 ***/

	J[355] = 1.;

   /*** derivatives for constraint 63 ***/

	J[358] = 1.;

   /*** derivatives for constraint 64 ***/

	J[353] = 1.;

   /*** derivatives for constraint 65 ***/

	J[356] = 1.;

   /*** derivatives for constraint 66 ***/

	J[359] = 1.;

   /*** derivatives for constraint 67 ***/

	J[4] = 1.;

   /*** derivatives for constraint 68 ***/

	J[10] = 1.;

   /*** derivatives for constraint 69 ***/

	J[16] = 1.;

   /*** derivatives for constraint 70 ***/

	J[30] = 1.;

   /*** derivatives for constraint 71 ***/

	J[40] = 1.;

   /*** derivatives for constraint 72 ***/

	J[54] = 1.;

   /*** derivatives for constraint 73 ***/

	J[64] = 1.;

   /*** derivatives for constraint 74 ***/

	J[78] = 1.;

   /*** derivatives for constraint 75 ***/

	J[88] = 1.;

   /*** derivatives for constraint 76 ***/

	J[5] = 1.;

   /*** derivatives for constraint 77 ***/

	J[11] = 1.;

   /*** derivatives for constraint 78 ***/

	J[17] = 1.;

   /*** derivatives for constraint 79 ***/

	J[31] = 1.;

   /*** derivatives for constraint 80 ***/

	J[41] = 1.;

   /*** derivatives for constraint 81 ***/

	J[55] = 1.;

   /*** derivatives for constraint 82 ***/

	J[65] = 1.;

   /*** derivatives for constraint 83 ***/

	J[79] = 1.;

   /*** derivatives for constraint 84 ***/

	J[89] = 1.;

   /*** derivatives for constraint 85 ***/

	J[219] = 1.;
	J[275] = -1.;

   /*** derivatives for constraint 86 ***/

	J[220] = -1.;
	J[276] = 1.;

   /*** derivatives for constraint 87 ***/

	J[295] = 1.;
	J[315] = -1.;

   /*** derivatives for constraint 88 ***/

	J[296] = -1.;
	J[316] = 1.;

   /*** derivatives for constraint 89 ***/

	J[255] = 1.;
	J[277] = -1.;

   /*** derivatives for constraint 90 ***/

	J[256] = -1.;
	J[278] = 1.;

   /*** derivatives for constraint 91 ***/

	J[279] = 1.;
	J[297] = -1.;

   /*** derivatives for constraint 92 ***/

	J[280] = -1.;
	J[298] = 1.;

   /*** derivatives for constraint 93 ***/

	J[211] = -1.;
	J[317] = 1.;

   /*** derivatives for constraint 94 ***/

	J[212] = 1.;
	J[318] = -1.;

   /*** derivatives for constraint 95 ***/

	J[235] = 1.;
	J[257] = -1.;

   /*** derivatives for constraint 96 ***/

	J[236] = -1.;
	J[258] = 1.;

   /*** derivatives for constraint 97 ***/

	J[202] = 1.;
	J[237] = -1.;

   /*** derivatives for constraint 98 ***/

	J[203] = -1.;
	J[238] = 1.;

   /*** derivatives for constraint 99 ***/

	J[239] = -1.;
	J[335] = 1.;

   /*** derivatives for constraint 100 ***/

	J[240] = 1.;
	J[336] = -1.;

   /*** derivatives for constraint 101 ***/

	J[319] = 1.;
	J[337] = -1.;

   /*** derivatives for constraint 102 ***/

	J[320] = -1.;
	J[338] = 1.;

   /*** derivatives for constraint 103 ***/

	J[221] = 1.;
	J[281] = -1.;

   /*** derivatives for constraint 104 ***/

	J[222] = -1.;
	J[282] = 1.;

   /*** derivatives for constraint 105 ***/

	J[299] = 1.;
	J[321] = -1.;

   /*** derivatives for constraint 106 ***/

	J[300] = -1.;
	J[322] = 1.;

   /*** derivatives for constraint 107 ***/

	J[259] = 1.;
	J[283] = -1.;

   /*** derivatives for constraint 108 ***/

	J[260] = -1.;
	J[284] = 1.;

   /*** derivatives for constraint 109 ***/

	J[285] = 1.;
	J[301] = -1.;

   /*** derivatives for constraint 110 ***/

	J[286] = -1.;
	J[302] = 1.;

   /*** derivatives for constraint 111 ***/

	J[213] = -1.;
	J[323] = 1.;

   /*** derivatives for constraint 112 ***/

	J[214] = 1.;
	J[324] = -1.;

   /*** derivatives for constraint 113 ***/

	J[241] = 1.;
	J[261] = -1.;

   /*** derivatives for constraint 114 ***/

	J[242] = -1.;
	J[262] = 1.;

   /*** derivatives for constraint 115 ***/

	J[204] = 1.;
	J[243] = -1.;

   /*** derivatives for constraint 116 ***/

	J[205] = -1.;
	J[244] = 1.;

   /*** derivatives for constraint 117 ***/

	J[245] = -1.;
	J[339] = 1.;

   /*** derivatives for constraint 118 ***/

	J[246] = 1.;
	J[340] = -1.;

   /*** derivatives for constraint 119 ***/

	J[325] = 1.;
	J[341] = -1.;

   /*** derivatives for constraint 120 ***/

	J[326] = -1.;
	J[342] = 1.;

   /*** derivatives for constraint 121 ***/

	J[206] = 1.;

   /*** derivatives for constraint 122 ***/

	J[128] = 1.;
	J[345] = -1.;

   /*** derivatives for constraint 123 ***/

	J[119] = 1.;
	J[348] = -1.;

   /*** derivatives for constraint 124 ***/

	J[92] = 1.;
	J[351] = -1.;

   /*** derivatives for constraint 125 ***/

	J[182] = 1.;
	J[354] = -1.;

   /*** derivatives for constraint 126 ***/

	J[173] = 1.;
	J[357] = -1.;

   /*** derivatives for constraint 127 ***/

	J[146] = 1.;
	J[360] = -1.;

   /*** derivatives for constraint 128 ***/

	J[122] = 1.;
	J[131] = 1.;
	J[137] = 1.;

   /*** derivatives for constraint 129 ***/

	J[104] = 1.;
	J[125] = 1.;

   /*** derivatives for constraint 130 ***/

	J[95] = 1.;
	J[107] = 1.;
	J[110] = 1.;

   /*** derivatives for constraint 131 ***/

	J[98] = 1.;
	J[113] = 1.;

   /*** derivatives for constraint 132 ***/

	J[101] = 1.;
	J[116] = 1.;
	J[140] = 1.;

   /*** derivatives for constraint 133 ***/

	J[134] = 1.;
	J[143] = 1.;

   /*** derivatives for constraint 134 ***/

	J[176] = 1.;
	J[185] = 1.;
	J[191] = 1.;

   /*** derivatives for constraint 135 ***/

	J[158] = 1.;
	J[179] = 1.;

   /*** derivatives for constraint 136 ***/

	J[149] = 1.;
	J[161] = 1.;
	J[164] = 1.;

   /*** derivatives for constraint 137 ***/

	J[152] = 1.;
	J[167] = 1.;

   /*** derivatives for constraint 138 ***/

	J[155] = 1.;
	J[170] = 1.;
	J[194] = 1.;

   /*** derivatives for constraint 139 ***/

	J[188] = 1.;
	J[197] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
