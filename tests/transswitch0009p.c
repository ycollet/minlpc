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
 fint transswitch0009p_auxcom_[1] = { 54 /* nlc */ };
 fint transswitch0009p_funcom_[473] = {
	69 /* nvar */,
	1 /* nobj */,
	139 /* ncon */,
	397 /* nzc */,
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
	348,
	352,
	356,
	360,
	364,
	368,
	372,
	376,
	380,
	383,
	386,
	389,
	392,
	395,
	398,

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
	1,
	2,
	19,
	20,
	3,
	4,
	21,
	22,
	5,
	6,
	23,
	24,
	7,
	8,
	25,
	26,
	9,
	10,
	27,
	28,
	11,
	12,
	29,
	30,
	13,
	14,
	31,
	32,
	15,
	16,
	33,
	34,
	17,
	18,
	35,
	36,
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

 real transswitch0009p_boundc_[1+138+278] /* Infinity, variable bounds, constraint bounds */ = {
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

 real transswitch0009p_x0comn_[69] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real transswitch0009p_pd[378];
static real transswitch0009p_old_x[69];
static int transswitch0009p_xkind = -1;

 static int
transswitch0009p_xcheck(real *x)
{
	real *x1 = transswitch0009p_old_x, *xe = x + 69;
	errno = 0;
	if (transswitch0009p_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	transswitch0009p_xkind = 0;
	return 1;
	}
 real
transswitch0009p_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (transswitch0009p_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	transswitch0009p_pd[372] = x[63] * x[63];
	transswitch0009p_pd[373] = x[63] + x[63];
	v[0] = 1100. * transswitch0009p_pd[372];
	transswitch0009p_pd[374] = x[64] * x[64];
	transswitch0009p_pd[375] = x[64] + x[64];
	v[1] = 850. * transswitch0009p_pd[374];
	v[0] += v[1];
	transswitch0009p_pd[376] = x[65] * x[65];
	transswitch0009p_pd[377] = x[65] + x[65];
	v[1] = 1225. * transswitch0009p_pd[376];
	v[0] += v[1];
	v[0] += 1085.;
	rv = v[0] + 500.*x[63];
	rv += 120.*x[64];
	rv += 100.*x[65];
	;}

	if (wantfg & 2) {
	g[65] = 1225.*transswitch0009p_pd[377] + 100.;
	g[64] = 850.*transswitch0009p_pd[375] + 120.;
	g[63] = 1100.*transswitch0009p_pd[373] + 500.;
	}

	return rv;
}

 void
transswitch0009p_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[5];
	real t1;
	fint wantfg = *needfg;
	if (transswitch0009p_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	transswitch0009p_pd[0] = -17.0648464163823 * x[2];
	transswitch0009p_pd[1] = transswitch0009p_pd[0] * x[5];
	v[0] = x[47] - x[50];
	transswitch0009p_pd[2] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	transswitch0009p_pd[3] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	transswitch0009p_pd[4] = transswitch0009p_pd[1] * transswitch0009p_pd[2];
	v[0] = transswitch0009p_pd[4] * x[54];
	t1 = v[0] + x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	transswitch0009p_pd[5] = -17.0648464163823 * x[5];
	transswitch0009p_pd[6] = transswitch0009p_pd[5] * x[2];
	v[0] = x[50] - x[47];
	transswitch0009p_pd[7] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	transswitch0009p_pd[8] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	transswitch0009p_pd[9] = transswitch0009p_pd[6] * transswitch0009p_pd[7];
	v[0] = transswitch0009p_pd[9] * x[54];
	t1 = v[0] + x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	transswitch0009p_pd[10] = x[6] * x[6];
	transswitch0009p_pd[11] = x[6] + x[6];
	v[0] = 1.61712247324614 * transswitch0009p_pd[10];
	transswitch0009p_pd[12] = 1.61712247324614 * x[6];
	transswitch0009p_pd[13] = transswitch0009p_pd[12] * x[7];
	v[1] = x[51] - x[52];
	transswitch0009p_pd[14] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[15] = -sin(v[1]);
	v[1] = transswitch0009p_pd[13] * transswitch0009p_pd[14];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[16] = 13.6979785969084 * x[6];
	transswitch0009p_pd[17] = transswitch0009p_pd[16] * x[7];
	v[1] = x[51] - x[52];
	transswitch0009p_pd[18] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[19] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[17] * transswitch0009p_pd[18];
	transswitch0009p_pd[20] = v[2] + v[1];
	v[1] = transswitch0009p_pd[20] * x[55];
	v[2] = -v[1];
	t1 = v[2] + x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	transswitch0009p_pd[21] = x[7] * x[7];
	transswitch0009p_pd[22] = x[7] + x[7];
	v[0] = 1.61712247324614 * transswitch0009p_pd[21];
	transswitch0009p_pd[23] = 1.61712247324614 * x[7];
	transswitch0009p_pd[24] = transswitch0009p_pd[23] * x[6];
	v[1] = x[52] - x[51];
	transswitch0009p_pd[25] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[26] = -sin(v[1]);
	v[1] = transswitch0009p_pd[24] * transswitch0009p_pd[25];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[27] = 13.6979785969084 * x[7];
	transswitch0009p_pd[28] = transswitch0009p_pd[27] * x[6];
	v[1] = x[52] - x[51];
	transswitch0009p_pd[29] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[30] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[28] * transswitch0009p_pd[29];
	transswitch0009p_pd[31] = v[2] + v[1];
	v[1] = transswitch0009p_pd[31] * x[55];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	transswitch0009p_pd[32] = x[4] * x[4];
	transswitch0009p_pd[33] = x[4] + x[4];
	v[0] = 1.28200913842411 * transswitch0009p_pd[32];
	transswitch0009p_pd[34] = 1.28200913842411 * x[4];
	transswitch0009p_pd[35] = transswitch0009p_pd[34] * x[5];
	v[1] = x[49] - x[50];
	transswitch0009p_pd[36] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[37] = -sin(v[1]);
	v[1] = transswitch0009p_pd[35] * transswitch0009p_pd[36];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[38] = 5.58824496236153 * x[4];
	transswitch0009p_pd[39] = transswitch0009p_pd[38] * x[5];
	v[1] = x[49] - x[50];
	transswitch0009p_pd[40] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[41] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[39] * transswitch0009p_pd[40];
	transswitch0009p_pd[42] = v[2] + v[1];
	v[1] = transswitch0009p_pd[42] * x[56];
	v[2] = -v[1];
	t1 = v[2] + x[13];
	c[4] = t1;

  /***  constraint 6  ***/

	transswitch0009p_pd[43] = x[5] * x[5];
	transswitch0009p_pd[44] = x[5] + x[5];
	v[0] = 1.28200913842411 * transswitch0009p_pd[43];
	transswitch0009p_pd[45] = 1.28200913842411 * x[5];
	transswitch0009p_pd[46] = transswitch0009p_pd[45] * x[4];
	v[1] = x[50] - x[49];
	transswitch0009p_pd[47] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[48] = -sin(v[1]);
	v[1] = transswitch0009p_pd[46] * transswitch0009p_pd[47];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[49] = 5.58824496236153 * x[5];
	transswitch0009p_pd[50] = transswitch0009p_pd[49] * x[4];
	v[1] = x[50] - x[49];
	transswitch0009p_pd[51] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[52] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[50] * transswitch0009p_pd[51];
	transswitch0009p_pd[53] = v[2] + v[1];
	v[1] = transswitch0009p_pd[53] * x[56];
	v[2] = -v[1];
	t1 = v[2] + x[14];
	c[5] = t1;

  /***  constraint 7  ***/

	transswitch0009p_pd[54] = x[5] * x[5];
	transswitch0009p_pd[55] = x[5] + x[5];
	v[0] = 1.1550874808901 * transswitch0009p_pd[54];
	transswitch0009p_pd[56] = 1.1550874808901 * x[5];
	transswitch0009p_pd[57] = transswitch0009p_pd[56] * x[6];
	v[1] = x[50] - x[51];
	transswitch0009p_pd[58] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[59] = -sin(v[1]);
	v[1] = transswitch0009p_pd[57] * transswitch0009p_pd[58];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[60] = 9.78427042636317 * x[5];
	transswitch0009p_pd[61] = transswitch0009p_pd[60] * x[6];
	v[1] = x[50] - x[51];
	transswitch0009p_pd[62] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[63] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[61] * transswitch0009p_pd[62];
	transswitch0009p_pd[64] = v[2] + v[1];
	v[1] = transswitch0009p_pd[64] * x[57];
	v[2] = -v[1];
	t1 = v[2] + x[15];
	c[6] = t1;

  /***  constraint 8  ***/

	transswitch0009p_pd[65] = x[6] * x[6];
	transswitch0009p_pd[66] = x[6] + x[6];
	v[0] = 1.1550874808901 * transswitch0009p_pd[65];
	transswitch0009p_pd[67] = 1.1550874808901 * x[6];
	transswitch0009p_pd[68] = transswitch0009p_pd[67] * x[5];
	v[1] = x[51] - x[50];
	transswitch0009p_pd[69] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[70] = -sin(v[1]);
	v[1] = transswitch0009p_pd[68] * transswitch0009p_pd[69];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[71] = 9.78427042636317 * x[6];
	transswitch0009p_pd[72] = transswitch0009p_pd[71] * x[5];
	v[1] = x[51] - x[50];
	transswitch0009p_pd[73] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[74] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[72] * transswitch0009p_pd[73];
	transswitch0009p_pd[75] = v[2] + v[1];
	v[1] = transswitch0009p_pd[75] * x[57];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[7] = t1;

  /***  constraint 9  ***/

	transswitch0009p_pd[76] = -16. * x[7];
	transswitch0009p_pd[77] = transswitch0009p_pd[76] * x[1];
	v[0] = x[52] - x[46];
	transswitch0009p_pd[78] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	transswitch0009p_pd[79] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	transswitch0009p_pd[80] = transswitch0009p_pd[77] * transswitch0009p_pd[78];
	v[0] = transswitch0009p_pd[80] * x[58];
	t1 = v[0] + x[17];
	c[8] = t1;

  /***  constraint 10  ***/

	transswitch0009p_pd[81] = -16. * x[1];
	transswitch0009p_pd[82] = transswitch0009p_pd[81] * x[7];
	v[0] = x[46] - x[52];
	transswitch0009p_pd[83] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	transswitch0009p_pd[84] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	transswitch0009p_pd[85] = transswitch0009p_pd[82] * transswitch0009p_pd[83];
	v[0] = transswitch0009p_pd[85] * x[58];
	t1 = v[0] + x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	transswitch0009p_pd[86] = x[3] * x[3];
	transswitch0009p_pd[87] = x[3] + x[3];
	v[0] = 1.94219124871473 * transswitch0009p_pd[86];
	transswitch0009p_pd[88] = 1.94219124871473 * x[3];
	transswitch0009p_pd[89] = transswitch0009p_pd[88] * x[4];
	v[1] = x[48] - x[49];
	transswitch0009p_pd[90] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[91] = -sin(v[1]);
	v[1] = transswitch0009p_pd[89] * transswitch0009p_pd[90];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[92] = 10.5106820518679 * x[3];
	transswitch0009p_pd[93] = transswitch0009p_pd[92] * x[4];
	v[1] = x[48] - x[49];
	transswitch0009p_pd[94] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[95] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[93] * transswitch0009p_pd[94];
	transswitch0009p_pd[96] = v[2] + v[1];
	v[1] = transswitch0009p_pd[96] * x[59];
	v[2] = -v[1];
	t1 = v[2] + x[19];
	c[10] = t1;

  /***  constraint 12  ***/

	transswitch0009p_pd[97] = x[4] * x[4];
	transswitch0009p_pd[98] = x[4] + x[4];
	v[0] = 1.94219124871473 * transswitch0009p_pd[97];
	transswitch0009p_pd[99] = 1.94219124871473 * x[4];
	transswitch0009p_pd[100] = transswitch0009p_pd[99] * x[3];
	v[1] = x[49] - x[48];
	transswitch0009p_pd[101] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[102] = -sin(v[1]);
	v[1] = transswitch0009p_pd[100] * transswitch0009p_pd[101];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[103] = 10.5106820518679 * x[4];
	transswitch0009p_pd[104] = transswitch0009p_pd[103] * x[3];
	v[1] = x[49] - x[48];
	transswitch0009p_pd[105] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[106] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[104] * transswitch0009p_pd[105];
	transswitch0009p_pd[107] = v[2] + v[1];
	v[1] = transswitch0009p_pd[107] * x[59];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[11] = t1;

  /***  constraint 13  ***/

	transswitch0009p_pd[108] = -17.3611111111111 * x[0];
	transswitch0009p_pd[109] = transswitch0009p_pd[108] * x[3];
	v[0] = x[45] - x[48];
	transswitch0009p_pd[110] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	transswitch0009p_pd[111] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	transswitch0009p_pd[112] = transswitch0009p_pd[109] * transswitch0009p_pd[110];
	v[0] = transswitch0009p_pd[112] * x[60];
	t1 = v[0] + x[21];
	c[12] = t1;

  /***  constraint 14  ***/

	transswitch0009p_pd[113] = -17.3611111111111 * x[3];
	transswitch0009p_pd[114] = transswitch0009p_pd[113] * x[0];
	v[0] = x[48] - x[45];
	transswitch0009p_pd[115] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	transswitch0009p_pd[116] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	transswitch0009p_pd[117] = transswitch0009p_pd[114] * transswitch0009p_pd[115];
	v[0] = transswitch0009p_pd[117] * x[60];
	t1 = v[0] + x[22];
	c[13] = t1;

  /***  constraint 15  ***/

	transswitch0009p_pd[118] = x[8] * x[8];
	transswitch0009p_pd[119] = x[8] + x[8];
	v[0] = 1.36518771331058 * transswitch0009p_pd[118];
	transswitch0009p_pd[120] = 1.36518771331058 * x[8];
	transswitch0009p_pd[121] = transswitch0009p_pd[120] * x[3];
	v[1] = x[53] - x[48];
	transswitch0009p_pd[122] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[123] = -sin(v[1]);
	v[1] = transswitch0009p_pd[121] * transswitch0009p_pd[122];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[124] = 11.6040955631399 * x[8];
	transswitch0009p_pd[125] = transswitch0009p_pd[124] * x[3];
	v[1] = x[53] - x[48];
	transswitch0009p_pd[126] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[127] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[125] * transswitch0009p_pd[126];
	transswitch0009p_pd[128] = v[2] + v[1];
	v[1] = transswitch0009p_pd[128] * x[61];
	v[2] = -v[1];
	t1 = v[2] + x[23];
	c[14] = t1;

  /***  constraint 16  ***/

	transswitch0009p_pd[129] = x[3] * x[3];
	transswitch0009p_pd[130] = x[3] + x[3];
	v[0] = 1.36518771331058 * transswitch0009p_pd[129];
	transswitch0009p_pd[131] = 1.36518771331058 * x[3];
	transswitch0009p_pd[132] = transswitch0009p_pd[131] * x[8];
	v[1] = x[48] - x[53];
	transswitch0009p_pd[133] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[134] = -sin(v[1]);
	v[1] = transswitch0009p_pd[132] * transswitch0009p_pd[133];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[135] = 11.6040955631399 * x[3];
	transswitch0009p_pd[136] = transswitch0009p_pd[135] * x[8];
	v[1] = x[48] - x[53];
	transswitch0009p_pd[137] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[138] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[136] * transswitch0009p_pd[137];
	transswitch0009p_pd[139] = v[2] + v[1];
	v[1] = transswitch0009p_pd[139] * x[61];
	v[2] = -v[1];
	t1 = v[2] + x[24];
	c[15] = t1;

  /***  constraint 17  ***/

	transswitch0009p_pd[140] = x[7] * x[7];
	transswitch0009p_pd[141] = x[7] + x[7];
	v[0] = 1.18760437929115 * transswitch0009p_pd[140];
	transswitch0009p_pd[142] = 1.18760437929115 * x[7];
	transswitch0009p_pd[143] = transswitch0009p_pd[142] * x[8];
	v[1] = x[52] - x[53];
	transswitch0009p_pd[144] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[145] = -sin(v[1]);
	v[1] = transswitch0009p_pd[143] * transswitch0009p_pd[144];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[146] = 5.97513453330859 * x[7];
	transswitch0009p_pd[147] = transswitch0009p_pd[146] * x[8];
	v[1] = x[52] - x[53];
	transswitch0009p_pd[148] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[149] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[147] * transswitch0009p_pd[148];
	transswitch0009p_pd[150] = v[2] + v[1];
	v[1] = transswitch0009p_pd[150] * x[62];
	v[2] = -v[1];
	t1 = v[2] + x[25];
	c[16] = t1;

  /***  constraint 18  ***/

	transswitch0009p_pd[151] = x[8] * x[8];
	transswitch0009p_pd[152] = x[8] + x[8];
	v[0] = 1.18760437929115 * transswitch0009p_pd[151];
	transswitch0009p_pd[153] = 1.18760437929115 * x[8];
	transswitch0009p_pd[154] = transswitch0009p_pd[153] * x[7];
	v[1] = x[53] - x[52];
	transswitch0009p_pd[155] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[156] = -sin(v[1]);
	v[1] = transswitch0009p_pd[154] * transswitch0009p_pd[155];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[157] = 5.97513453330859 * x[8];
	transswitch0009p_pd[158] = transswitch0009p_pd[157] * x[7];
	v[1] = x[53] - x[52];
	transswitch0009p_pd[159] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[160] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[158] * transswitch0009p_pd[159];
	transswitch0009p_pd[161] = v[2] + v[1];
	v[1] = transswitch0009p_pd[161] * x[62];
	v[2] = -v[1];
	t1 = v[2] + x[26];
	c[17] = t1;

  /***  constraint 19  ***/

	transswitch0009p_pd[162] = x[2] * x[2];
	transswitch0009p_pd[163] = x[2] + x[2];
	v[0] = 17.0648464163823 * transswitch0009p_pd[162];
	transswitch0009p_pd[164] = 17.0648464163823 * x[2];
	transswitch0009p_pd[165] = transswitch0009p_pd[164] * x[5];
	v[1] = x[47] - x[50];
	transswitch0009p_pd[166] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[167] = -sin(v[1]);
	v[1] = transswitch0009p_pd[165] * transswitch0009p_pd[166];
	transswitch0009p_pd[168] = v[0] - v[1];
	v[1] = transswitch0009p_pd[168] * x[54];
	v[0] = -v[1];
	t1 = v[0] + x[27];
	c[18] = t1;

  /***  constraint 20  ***/

	transswitch0009p_pd[169] = x[5] * x[5];
	transswitch0009p_pd[170] = x[5] + x[5];
	v[0] = 17.0648464163823 * transswitch0009p_pd[169];
	transswitch0009p_pd[171] = 17.0648464163823 * x[5];
	transswitch0009p_pd[172] = transswitch0009p_pd[171] * x[2];
	v[1] = x[50] - x[47];
	transswitch0009p_pd[173] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[174] = -sin(v[1]);
	v[1] = transswitch0009p_pd[172] * transswitch0009p_pd[173];
	transswitch0009p_pd[175] = v[0] - v[1];
	v[1] = transswitch0009p_pd[175] * x[54];
	v[0] = -v[1];
	t1 = v[0] + x[28];
	c[19] = t1;

  /***  constraint 21  ***/

	transswitch0009p_pd[176] = x[6] * x[6];
	transswitch0009p_pd[177] = x[6] + x[6];
	v[0] = 13.6234785969084 * transswitch0009p_pd[176];
	transswitch0009p_pd[178] = 13.6979785969084 * x[6];
	transswitch0009p_pd[179] = transswitch0009p_pd[178] * x[7];
	v[1] = x[51] - x[52];
	transswitch0009p_pd[180] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[181] = -sin(v[1]);
	v[1] = transswitch0009p_pd[179] * transswitch0009p_pd[180];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[182] = 1.61712247324614 * x[6];
	transswitch0009p_pd[183] = transswitch0009p_pd[182] * x[7];
	v[1] = x[51] - x[52];
	transswitch0009p_pd[184] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[185] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[183] * transswitch0009p_pd[184];
	transswitch0009p_pd[186] = v[2] - v[1];
	v[1] = transswitch0009p_pd[186] * x[55];
	v[2] = -v[1];
	t1 = v[2] + x[29];
	c[20] = t1;

  /***  constraint 22  ***/

	transswitch0009p_pd[187] = x[7] * x[7];
	transswitch0009p_pd[188] = x[7] + x[7];
	v[0] = 13.6234785969084 * transswitch0009p_pd[187];
	transswitch0009p_pd[189] = 13.6979785969084 * x[7];
	transswitch0009p_pd[190] = transswitch0009p_pd[189] * x[6];
	v[1] = x[52] - x[51];
	transswitch0009p_pd[191] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[192] = -sin(v[1]);
	v[1] = transswitch0009p_pd[190] * transswitch0009p_pd[191];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[193] = 1.61712247324614 * x[7];
	transswitch0009p_pd[194] = transswitch0009p_pd[193] * x[6];
	v[1] = x[52] - x[51];
	transswitch0009p_pd[195] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[196] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[194] * transswitch0009p_pd[195];
	transswitch0009p_pd[197] = v[2] - v[1];
	v[1] = transswitch0009p_pd[197] * x[55];
	v[2] = -v[1];
	t1 = v[2] + x[30];
	c[21] = t1;

  /***  constraint 23  ***/

	transswitch0009p_pd[198] = x[4] * x[4];
	transswitch0009p_pd[199] = x[4] + x[4];
	v[0] = 5.40924496236153 * transswitch0009p_pd[198];
	transswitch0009p_pd[200] = 5.58824496236153 * x[4];
	transswitch0009p_pd[201] = transswitch0009p_pd[200] * x[5];
	v[1] = x[49] - x[50];
	transswitch0009p_pd[202] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[203] = -sin(v[1]);
	v[1] = transswitch0009p_pd[201] * transswitch0009p_pd[202];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[204] = 1.28200913842411 * x[4];
	transswitch0009p_pd[205] = transswitch0009p_pd[204] * x[5];
	v[1] = x[49] - x[50];
	transswitch0009p_pd[206] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[207] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[205] * transswitch0009p_pd[206];
	transswitch0009p_pd[208] = v[2] - v[1];
	v[1] = transswitch0009p_pd[208] * x[56];
	v[2] = -v[1];
	t1 = v[2] + x[31];
	c[22] = t1;

  /***  constraint 24  ***/

	transswitch0009p_pd[209] = x[5] * x[5];
	transswitch0009p_pd[210] = x[5] + x[5];
	v[0] = 5.40924496236153 * transswitch0009p_pd[209];
	transswitch0009p_pd[211] = 5.58824496236153 * x[5];
	transswitch0009p_pd[212] = transswitch0009p_pd[211] * x[4];
	v[1] = x[50] - x[49];
	transswitch0009p_pd[213] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[214] = -sin(v[1]);
	v[1] = transswitch0009p_pd[212] * transswitch0009p_pd[213];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[215] = 1.28200913842411 * x[5];
	transswitch0009p_pd[216] = transswitch0009p_pd[215] * x[4];
	v[1] = x[50] - x[49];
	transswitch0009p_pd[217] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[218] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[216] * transswitch0009p_pd[217];
	transswitch0009p_pd[219] = v[2] - v[1];
	v[1] = transswitch0009p_pd[219] * x[56];
	v[2] = -v[1];
	t1 = v[2] + x[32];
	c[23] = t1;

  /***  constraint 25  ***/

	transswitch0009p_pd[220] = x[5] * x[5];
	transswitch0009p_pd[221] = x[5] + x[5];
	v[0] = 9.67977042636317 * transswitch0009p_pd[220];
	transswitch0009p_pd[222] = 9.78427042636317 * x[5];
	transswitch0009p_pd[223] = transswitch0009p_pd[222] * x[6];
	v[1] = x[50] - x[51];
	transswitch0009p_pd[224] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[225] = -sin(v[1]);
	v[1] = transswitch0009p_pd[223] * transswitch0009p_pd[224];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[226] = 1.1550874808901 * x[5];
	transswitch0009p_pd[227] = transswitch0009p_pd[226] * x[6];
	v[1] = x[50] - x[51];
	transswitch0009p_pd[228] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[229] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[227] * transswitch0009p_pd[228];
	transswitch0009p_pd[230] = v[2] - v[1];
	v[1] = transswitch0009p_pd[230] * x[57];
	v[2] = -v[1];
	t1 = v[2] + x[33];
	c[24] = t1;

  /***  constraint 26  ***/

	transswitch0009p_pd[231] = x[6] * x[6];
	transswitch0009p_pd[232] = x[6] + x[6];
	v[0] = 9.67977042636317 * transswitch0009p_pd[231];
	transswitch0009p_pd[233] = 9.78427042636317 * x[6];
	transswitch0009p_pd[234] = transswitch0009p_pd[233] * x[5];
	v[1] = x[51] - x[50];
	transswitch0009p_pd[235] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[236] = -sin(v[1]);
	v[1] = transswitch0009p_pd[234] * transswitch0009p_pd[235];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[237] = 1.1550874808901 * x[6];
	transswitch0009p_pd[238] = transswitch0009p_pd[237] * x[5];
	v[1] = x[51] - x[50];
	transswitch0009p_pd[239] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[240] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[238] * transswitch0009p_pd[239];
	transswitch0009p_pd[241] = v[2] - v[1];
	v[1] = transswitch0009p_pd[241] * x[57];
	v[2] = -v[1];
	t1 = v[2] + x[34];
	c[25] = t1;

  /***  constraint 27  ***/

	transswitch0009p_pd[242] = x[7] * x[7];
	transswitch0009p_pd[243] = x[7] + x[7];
	v[0] = 16. * transswitch0009p_pd[242];
	transswitch0009p_pd[244] = 16. * x[7];
	transswitch0009p_pd[245] = transswitch0009p_pd[244] * x[1];
	v[1] = x[52] - x[46];
	transswitch0009p_pd[246] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[247] = -sin(v[1]);
	v[1] = transswitch0009p_pd[245] * transswitch0009p_pd[246];
	transswitch0009p_pd[248] = v[0] - v[1];
	v[1] = transswitch0009p_pd[248] * x[58];
	v[0] = -v[1];
	t1 = v[0] + x[35];
	c[26] = t1;

  /***  constraint 28  ***/

	transswitch0009p_pd[249] = x[1] * x[1];
	transswitch0009p_pd[250] = x[1] + x[1];
	v[0] = 16. * transswitch0009p_pd[249];
	transswitch0009p_pd[251] = 16. * x[1];
	transswitch0009p_pd[252] = transswitch0009p_pd[251] * x[7];
	v[1] = x[46] - x[52];
	transswitch0009p_pd[253] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[254] = -sin(v[1]);
	v[1] = transswitch0009p_pd[252] * transswitch0009p_pd[253];
	transswitch0009p_pd[255] = v[0] - v[1];
	v[1] = transswitch0009p_pd[255] * x[58];
	v[0] = -v[1];
	t1 = v[0] + x[36];
	c[27] = t1;

  /***  constraint 29  ***/

	transswitch0009p_pd[256] = x[3] * x[3];
	transswitch0009p_pd[257] = x[3] + x[3];
	v[0] = 10.4316820518679 * transswitch0009p_pd[256];
	transswitch0009p_pd[258] = 10.5106820518679 * x[3];
	transswitch0009p_pd[259] = transswitch0009p_pd[258] * x[4];
	v[1] = x[48] - x[49];
	transswitch0009p_pd[260] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[261] = -sin(v[1]);
	v[1] = transswitch0009p_pd[259] * transswitch0009p_pd[260];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[262] = 1.94219124871473 * x[3];
	transswitch0009p_pd[263] = transswitch0009p_pd[262] * x[4];
	v[1] = x[48] - x[49];
	transswitch0009p_pd[264] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[265] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[263] * transswitch0009p_pd[264];
	transswitch0009p_pd[266] = v[2] - v[1];
	v[1] = transswitch0009p_pd[266] * x[59];
	v[2] = -v[1];
	t1 = v[2] + x[37];
	c[28] = t1;

  /***  constraint 30  ***/

	transswitch0009p_pd[267] = x[4] * x[4];
	transswitch0009p_pd[268] = x[4] + x[4];
	v[0] = 10.4316820518679 * transswitch0009p_pd[267];
	transswitch0009p_pd[269] = 10.5106820518679 * x[4];
	transswitch0009p_pd[270] = transswitch0009p_pd[269] * x[3];
	v[1] = x[49] - x[48];
	transswitch0009p_pd[271] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[272] = -sin(v[1]);
	v[1] = transswitch0009p_pd[270] * transswitch0009p_pd[271];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[273] = 1.94219124871473 * x[4];
	transswitch0009p_pd[274] = transswitch0009p_pd[273] * x[3];
	v[1] = x[49] - x[48];
	transswitch0009p_pd[275] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[276] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[274] * transswitch0009p_pd[275];
	transswitch0009p_pd[277] = v[2] - v[1];
	v[1] = transswitch0009p_pd[277] * x[59];
	v[2] = -v[1];
	t1 = v[2] + x[38];
	c[29] = t1;

  /***  constraint 31  ***/

	transswitch0009p_pd[278] = x[0] * x[0];
	transswitch0009p_pd[279] = x[0] + x[0];
	v[0] = 17.3611111111111 * transswitch0009p_pd[278];
	transswitch0009p_pd[280] = 17.3611111111111 * x[0];
	transswitch0009p_pd[281] = transswitch0009p_pd[280] * x[3];
	v[1] = x[45] - x[48];
	transswitch0009p_pd[282] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[283] = -sin(v[1]);
	v[1] = transswitch0009p_pd[281] * transswitch0009p_pd[282];
	transswitch0009p_pd[284] = v[0] - v[1];
	v[1] = transswitch0009p_pd[284] * x[60];
	v[0] = -v[1];
	t1 = v[0] + x[39];
	c[30] = t1;

  /***  constraint 32  ***/

	transswitch0009p_pd[285] = x[3] * x[3];
	transswitch0009p_pd[286] = x[3] + x[3];
	v[0] = 17.3611111111111 * transswitch0009p_pd[285];
	transswitch0009p_pd[287] = 17.3611111111111 * x[3];
	transswitch0009p_pd[288] = transswitch0009p_pd[287] * x[0];
	v[1] = x[48] - x[45];
	transswitch0009p_pd[289] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[290] = -sin(v[1]);
	v[1] = transswitch0009p_pd[288] * transswitch0009p_pd[289];
	transswitch0009p_pd[291] = v[0] - v[1];
	v[1] = transswitch0009p_pd[291] * x[60];
	v[0] = -v[1];
	t1 = v[0] + x[40];
	c[31] = t1;

  /***  constraint 33  ***/

	transswitch0009p_pd[292] = x[8] * x[8];
	transswitch0009p_pd[293] = x[8] + x[8];
	v[0] = 11.5160955631399 * transswitch0009p_pd[292];
	transswitch0009p_pd[294] = 11.6040955631399 * x[8];
	transswitch0009p_pd[295] = transswitch0009p_pd[294] * x[3];
	v[1] = x[53] - x[48];
	transswitch0009p_pd[296] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[297] = -sin(v[1]);
	v[1] = transswitch0009p_pd[295] * transswitch0009p_pd[296];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[298] = 1.36518771331058 * x[8];
	transswitch0009p_pd[299] = transswitch0009p_pd[298] * x[3];
	v[1] = x[53] - x[48];
	transswitch0009p_pd[300] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[301] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[299] * transswitch0009p_pd[300];
	transswitch0009p_pd[302] = v[2] - v[1];
	v[1] = transswitch0009p_pd[302] * x[61];
	v[2] = -v[1];
	t1 = v[2] + x[41];
	c[32] = t1;

  /***  constraint 34  ***/

	transswitch0009p_pd[303] = x[3] * x[3];
	transswitch0009p_pd[304] = x[3] + x[3];
	v[0] = 11.5160955631399 * transswitch0009p_pd[303];
	transswitch0009p_pd[305] = 11.6040955631399 * x[3];
	transswitch0009p_pd[306] = transswitch0009p_pd[305] * x[8];
	v[1] = x[48] - x[53];
	transswitch0009p_pd[307] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[308] = -sin(v[1]);
	v[1] = transswitch0009p_pd[306] * transswitch0009p_pd[307];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[309] = 1.36518771331058 * x[3];
	transswitch0009p_pd[310] = transswitch0009p_pd[309] * x[8];
	v[1] = x[48] - x[53];
	transswitch0009p_pd[311] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[312] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[310] * transswitch0009p_pd[311];
	transswitch0009p_pd[313] = v[2] - v[1];
	v[1] = transswitch0009p_pd[313] * x[61];
	v[2] = -v[1];
	t1 = v[2] + x[42];
	c[33] = t1;

  /***  constraint 35  ***/

	transswitch0009p_pd[314] = x[7] * x[7];
	transswitch0009p_pd[315] = x[7] + x[7];
	v[0] = 5.82213453330859 * transswitch0009p_pd[314];
	transswitch0009p_pd[316] = 5.97513453330859 * x[7];
	transswitch0009p_pd[317] = transswitch0009p_pd[316] * x[8];
	v[1] = x[52] - x[53];
	transswitch0009p_pd[318] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[319] = -sin(v[1]);
	v[1] = transswitch0009p_pd[317] * transswitch0009p_pd[318];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[320] = 1.18760437929115 * x[7];
	transswitch0009p_pd[321] = transswitch0009p_pd[320] * x[8];
	v[1] = x[52] - x[53];
	transswitch0009p_pd[322] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[323] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[321] * transswitch0009p_pd[322];
	transswitch0009p_pd[324] = v[2] - v[1];
	v[1] = transswitch0009p_pd[324] * x[62];
	v[2] = -v[1];
	t1 = v[2] + x[43];
	c[34] = t1;

  /***  constraint 36  ***/

	transswitch0009p_pd[325] = x[8] * x[8];
	transswitch0009p_pd[326] = x[8] + x[8];
	v[0] = 5.82213453330859 * transswitch0009p_pd[325];
	transswitch0009p_pd[327] = 5.97513453330859 * x[8];
	transswitch0009p_pd[328] = transswitch0009p_pd[327] * x[7];
	v[1] = x[53] - x[52];
	transswitch0009p_pd[329] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	transswitch0009p_pd[330] = -sin(v[1]);
	v[1] = transswitch0009p_pd[328] * transswitch0009p_pd[329];
	v[2] = v[0] - v[1];
	transswitch0009p_pd[331] = 1.18760437929115 * x[8];
	transswitch0009p_pd[332] = transswitch0009p_pd[331] * x[7];
	v[1] = x[53] - x[52];
	transswitch0009p_pd[333] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	transswitch0009p_pd[334] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = transswitch0009p_pd[332] * transswitch0009p_pd[333];
	transswitch0009p_pd[335] = v[2] - v[1];
	v[1] = transswitch0009p_pd[335] * x[62];
	v[2] = -v[1];
	t1 = v[2] + x[44];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[9] * x[9];
	transswitch0009p_pd[336] = x[9] + x[9];
	v[1] = x[27] * x[27];
	transswitch0009p_pd[337] = x[27] + x[27];
	v[2] = v[0] + v[1];
	c[36] = v[2];

  /***  constraint 38  ***/

	v[0] = x[10] * x[10];
	transswitch0009p_pd[338] = x[10] + x[10];
	v[1] = x[28] * x[28];
	transswitch0009p_pd[339] = x[28] + x[28];
	v[2] = v[0] + v[1];
	c[37] = v[2];

  /***  constraint 39  ***/

	v[0] = x[11] * x[11];
	transswitch0009p_pd[340] = x[11] + x[11];
	v[1] = x[29] * x[29];
	transswitch0009p_pd[341] = x[29] + x[29];
	v[2] = v[0] + v[1];
	c[38] = v[2];

  /***  constraint 40  ***/

	v[0] = x[12] * x[12];
	transswitch0009p_pd[342] = x[12] + x[12];
	v[1] = x[30] * x[30];
	transswitch0009p_pd[343] = x[30] + x[30];
	v[2] = v[0] + v[1];
	c[39] = v[2];

  /***  constraint 41  ***/

	v[0] = x[13] * x[13];
	transswitch0009p_pd[344] = x[13] + x[13];
	v[1] = x[31] * x[31];
	transswitch0009p_pd[345] = x[31] + x[31];
	v[2] = v[0] + v[1];
	c[40] = v[2];

  /***  constraint 42  ***/

	v[0] = x[14] * x[14];
	transswitch0009p_pd[346] = x[14] + x[14];
	v[1] = x[32] * x[32];
	transswitch0009p_pd[347] = x[32] + x[32];
	v[2] = v[0] + v[1];
	c[41] = v[2];

  /***  constraint 43  ***/

	v[0] = x[15] * x[15];
	transswitch0009p_pd[348] = x[15] + x[15];
	v[1] = x[33] * x[33];
	transswitch0009p_pd[349] = x[33] + x[33];
	v[2] = v[0] + v[1];
	c[42] = v[2];

  /***  constraint 44  ***/

	v[0] = x[16] * x[16];
	transswitch0009p_pd[350] = x[16] + x[16];
	v[1] = x[34] * x[34];
	transswitch0009p_pd[351] = x[34] + x[34];
	v[2] = v[0] + v[1];
	c[43] = v[2];

  /***  constraint 45  ***/

	v[0] = x[17] * x[17];
	transswitch0009p_pd[352] = x[17] + x[17];
	v[1] = x[35] * x[35];
	transswitch0009p_pd[353] = x[35] + x[35];
	v[2] = v[0] + v[1];
	c[44] = v[2];

  /***  constraint 46  ***/

	v[0] = x[18] * x[18];
	transswitch0009p_pd[354] = x[18] + x[18];
	v[1] = x[36] * x[36];
	transswitch0009p_pd[355] = x[36] + x[36];
	v[2] = v[0] + v[1];
	c[45] = v[2];

  /***  constraint 47  ***/

	v[0] = x[19] * x[19];
	transswitch0009p_pd[356] = x[19] + x[19];
	v[1] = x[37] * x[37];
	transswitch0009p_pd[357] = x[37] + x[37];
	v[2] = v[0] + v[1];
	c[46] = v[2];

  /***  constraint 48  ***/

	v[0] = x[20] * x[20];
	transswitch0009p_pd[358] = x[20] + x[20];
	v[1] = x[38] * x[38];
	transswitch0009p_pd[359] = x[38] + x[38];
	v[2] = v[0] + v[1];
	c[47] = v[2];

  /***  constraint 49  ***/

	v[0] = x[21] * x[21];
	transswitch0009p_pd[360] = x[21] + x[21];
	v[1] = x[39] * x[39];
	transswitch0009p_pd[361] = x[39] + x[39];
	v[2] = v[0] + v[1];
	c[48] = v[2];

  /***  constraint 50  ***/

	v[0] = x[22] * x[22];
	transswitch0009p_pd[362] = x[22] + x[22];
	v[1] = x[40] * x[40];
	transswitch0009p_pd[363] = x[40] + x[40];
	v[2] = v[0] + v[1];
	c[49] = v[2];

  /***  constraint 51  ***/

	v[0] = x[23] * x[23];
	transswitch0009p_pd[364] = x[23] + x[23];
	v[1] = x[41] * x[41];
	transswitch0009p_pd[365] = x[41] + x[41];
	v[2] = v[0] + v[1];
	c[50] = v[2];

  /***  constraint 52  ***/

	v[0] = x[24] * x[24];
	transswitch0009p_pd[366] = x[24] + x[24];
	v[1] = x[42] * x[42];
	transswitch0009p_pd[367] = x[42] + x[42];
	v[2] = v[0] + v[1];
	c[51] = v[2];

  /***  constraint 53  ***/

	v[0] = x[25] * x[25];
	transswitch0009p_pd[368] = x[25] + x[25];
	v[1] = x[43] * x[43];
	transswitch0009p_pd[369] = x[43] + x[43];
	v[2] = v[0] + v[1];
	c[52] = v[2];

  /***  constraint 54  ***/

	v[0] = x[26] * x[26];
	transswitch0009p_pd[370] = x[26] + x[26];
	v[1] = x[44] * x[44];
	transswitch0009p_pd[371] = x[44] + x[44];
	v[2] = v[0] + v[1];
	c[53] = v[2];

  /***  constraint 55  ***/

	t1 = x[63];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[64];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[65];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[63];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[64];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[65];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[66];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[67];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[68];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[66];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[67];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[68];
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
	t1 += -x[63];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[18];
	t1 += -x[64];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[9];
	t1 += -x[65];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[39];
	t1 += -x[66];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[36];
	t1 += -x[67];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[27];
	t1 += -x[68];
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

	J[343] = transswitch0009p_pd[4];
	dv[0] = x[54]*transswitch0009p_pd[1];
	dv[1] = x[54]*transswitch0009p_pd[2];
	dv[0] *= transswitch0009p_pd[3];
	J[263] = -dv[0];
	J[215] = dv[0];
	J[42] = dv[1]*transswitch0009p_pd[0];
	dv[1] *= x[5];
	J[12] = -dv[1]*17.0648464163823;
	J[90] = 1.;

   /*** derivatives for constraint 2 ***/

	J[344] = transswitch0009p_pd[9];
	dv[0] = x[54]*transswitch0009p_pd[6];
	dv[1] = x[54]*transswitch0009p_pd[7];
	dv[0] *= transswitch0009p_pd[8];
	J[216] = -dv[0];
	J[264] = dv[0];
	J[13] = dv[1]*transswitch0009p_pd[5];
	dv[1] *= x[2];
	J[43] = -dv[1]*17.0648464163823;
	J[93] = 1.;

   /*** derivatives for constraint 3 ***/

	J[347] = -transswitch0009p_pd[20];
	dv[0] = -x[55];
	dv[1] = dv[0]*transswitch0009p_pd[17];
	dv[0] *= transswitch0009p_pd[18];
	dv[1] *= transswitch0009p_pd[19];
	J[303] = -dv[1];
	J[287] = dv[1];
	J[66] = dv[0]*transswitch0009p_pd[16];
	dv[0] *= x[7];
	J[56] = dv[0]*13.6979785969084;
	dv[2] = x[55];
	dv[3] = dv[2]*transswitch0009p_pd[13];
	dv[2] *= transswitch0009p_pd[14];
	dv[3] *= transswitch0009p_pd[15];
	J[303] -= dv[3];
	J[287] += dv[3];
	J[66] += dv[2]*transswitch0009p_pd[12];
	dv[2] *= x[7];
	J[56] += dv[2]*1.61712247324614;
	dv[4] = -x[55]*1.61712247324614;
	J[56] += dv[4]*transswitch0009p_pd[11];
	J[96] = 1.;

   /*** derivatives for constraint 4 ***/

	J[348] = -transswitch0009p_pd[31];
	dv[0] = -x[55];
	dv[1] = dv[0]*transswitch0009p_pd[28];
	dv[0] *= transswitch0009p_pd[29];
	dv[1] *= transswitch0009p_pd[30];
	J[288] = -dv[1];
	J[304] = dv[1];
	J[57] = dv[0]*transswitch0009p_pd[27];
	dv[0] *= x[6];
	J[67] = dv[0]*13.6979785969084;
	dv[2] = x[55];
	dv[3] = dv[2]*transswitch0009p_pd[24];
	dv[2] *= transswitch0009p_pd[25];
	dv[3] *= transswitch0009p_pd[26];
	J[288] -= dv[3];
	J[304] += dv[3];
	J[57] += dv[2]*transswitch0009p_pd[23];
	dv[2] *= x[6];
	J[67] += dv[2]*1.61712247324614;
	dv[4] = -x[55]*1.61712247324614;
	J[67] += dv[4]*transswitch0009p_pd[22];
	J[99] = 1.;

   /*** derivatives for constraint 5 ***/

	J[351] = -transswitch0009p_pd[42];
	dv[0] = -x[56];
	dv[1] = dv[0]*transswitch0009p_pd[39];
	dv[0] *= transswitch0009p_pd[40];
	dv[1] *= transswitch0009p_pd[41];
	J[265] = -dv[1];
	J[247] = dv[1];
	J[44] = dv[0]*transswitch0009p_pd[38];
	dv[0] *= x[5];
	J[32] = dv[0]*5.58824496236153;
	dv[2] = x[56];
	dv[3] = dv[2]*transswitch0009p_pd[35];
	dv[2] *= transswitch0009p_pd[36];
	dv[3] *= transswitch0009p_pd[37];
	J[265] -= dv[3];
	J[247] += dv[3];
	J[44] += dv[2]*transswitch0009p_pd[34];
	dv[2] *= x[5];
	J[32] += dv[2]*1.28200913842411;
	dv[4] = -x[56]*1.28200913842411;
	J[32] += dv[4]*transswitch0009p_pd[33];
	J[102] = 1.;

   /*** derivatives for constraint 6 ***/

	J[352] = -transswitch0009p_pd[53];
	dv[0] = -x[56];
	dv[1] = dv[0]*transswitch0009p_pd[50];
	dv[0] *= transswitch0009p_pd[51];
	dv[1] *= transswitch0009p_pd[52];
	J[248] = -dv[1];
	J[266] = dv[1];
	J[33] = dv[0]*transswitch0009p_pd[49];
	dv[0] *= x[4];
	J[45] = dv[0]*5.58824496236153;
	dv[2] = x[56];
	dv[3] = dv[2]*transswitch0009p_pd[46];
	dv[2] *= transswitch0009p_pd[47];
	dv[3] *= transswitch0009p_pd[48];
	J[248] -= dv[3];
	J[266] += dv[3];
	J[33] += dv[2]*transswitch0009p_pd[45];
	dv[2] *= x[4];
	J[45] += dv[2]*1.28200913842411;
	dv[4] = -x[56]*1.28200913842411;
	J[45] += dv[4]*transswitch0009p_pd[44];
	J[105] = 1.;

   /*** derivatives for constraint 7 ***/

	J[355] = -transswitch0009p_pd[64];
	dv[0] = -x[57];
	dv[1] = dv[0]*transswitch0009p_pd[61];
	dv[0] *= transswitch0009p_pd[62];
	dv[1] *= transswitch0009p_pd[63];
	J[289] = -dv[1];
	J[267] = dv[1];
	J[58] = dv[0]*transswitch0009p_pd[60];
	dv[0] *= x[6];
	J[46] = dv[0]*9.78427042636317;
	dv[2] = x[57];
	dv[3] = dv[2]*transswitch0009p_pd[57];
	dv[2] *= transswitch0009p_pd[58];
	dv[3] *= transswitch0009p_pd[59];
	J[289] -= dv[3];
	J[267] += dv[3];
	J[58] += dv[2]*transswitch0009p_pd[56];
	dv[2] *= x[6];
	J[46] += dv[2]*1.1550874808901;
	dv[4] = -x[57]*1.1550874808901;
	J[46] += dv[4]*transswitch0009p_pd[55];
	J[108] = 1.;

   /*** derivatives for constraint 8 ***/

	J[356] = -transswitch0009p_pd[75];
	dv[0] = -x[57];
	dv[1] = dv[0]*transswitch0009p_pd[72];
	dv[0] *= transswitch0009p_pd[73];
	dv[1] *= transswitch0009p_pd[74];
	J[268] = -dv[1];
	J[290] = dv[1];
	J[47] = dv[0]*transswitch0009p_pd[71];
	dv[0] *= x[5];
	J[59] = dv[0]*9.78427042636317;
	dv[2] = x[57];
	dv[3] = dv[2]*transswitch0009p_pd[68];
	dv[2] *= transswitch0009p_pd[69];
	dv[3] *= transswitch0009p_pd[70];
	J[268] -= dv[3];
	J[290] += dv[3];
	J[47] += dv[2]*transswitch0009p_pd[67];
	dv[2] *= x[5];
	J[59] += dv[2]*1.1550874808901;
	dv[4] = -x[57]*1.1550874808901;
	J[59] += dv[4]*transswitch0009p_pd[66];
	J[111] = 1.;

   /*** derivatives for constraint 9 ***/

	J[359] = transswitch0009p_pd[80];
	dv[0] = x[58]*transswitch0009p_pd[77];
	dv[1] = x[58]*transswitch0009p_pd[78];
	dv[0] *= transswitch0009p_pd[79];
	J[207] = -dv[0];
	J[305] = dv[0];
	J[6] = dv[1]*transswitch0009p_pd[76];
	dv[1] *= x[1];
	J[68] = -dv[1]*16.;
	J[114] = 1.;

   /*** derivatives for constraint 10 ***/

	J[360] = transswitch0009p_pd[85];
	dv[0] = x[58]*transswitch0009p_pd[82];
	dv[1] = x[58]*transswitch0009p_pd[83];
	dv[0] *= transswitch0009p_pd[84];
	J[306] = -dv[0];
	J[208] = dv[0];
	J[69] = dv[1]*transswitch0009p_pd[81];
	dv[1] *= x[7];
	J[7] = -dv[1]*16.;
	J[117] = 1.;

   /*** derivatives for constraint 11 ***/

	J[363] = -transswitch0009p_pd[96];
	dv[0] = -x[59];
	dv[1] = dv[0]*transswitch0009p_pd[93];
	dv[0] *= transswitch0009p_pd[94];
	dv[1] *= transswitch0009p_pd[95];
	J[249] = -dv[1];
	J[223] = dv[1];
	J[34] = dv[0]*transswitch0009p_pd[92];
	dv[0] *= x[4];
	J[18] = dv[0]*10.5106820518679;
	dv[2] = x[59];
	dv[3] = dv[2]*transswitch0009p_pd[89];
	dv[2] *= transswitch0009p_pd[90];
	dv[3] *= transswitch0009p_pd[91];
	J[249] -= dv[3];
	J[223] += dv[3];
	J[34] += dv[2]*transswitch0009p_pd[88];
	dv[2] *= x[4];
	J[18] += dv[2]*1.94219124871473;
	dv[4] = -x[59]*1.94219124871473;
	J[18] += dv[4]*transswitch0009p_pd[87];
	J[120] = 1.;

   /*** derivatives for constraint 12 ***/

	J[364] = -transswitch0009p_pd[107];
	dv[0] = -x[59];
	dv[1] = dv[0]*transswitch0009p_pd[104];
	dv[0] *= transswitch0009p_pd[105];
	dv[1] *= transswitch0009p_pd[106];
	J[224] = -dv[1];
	J[250] = dv[1];
	J[19] = dv[0]*transswitch0009p_pd[103];
	dv[0] *= x[3];
	J[35] = dv[0]*10.5106820518679;
	dv[2] = x[59];
	dv[3] = dv[2]*transswitch0009p_pd[100];
	dv[2] *= transswitch0009p_pd[101];
	dv[3] *= transswitch0009p_pd[102];
	J[224] -= dv[3];
	J[250] += dv[3];
	J[19] += dv[2]*transswitch0009p_pd[99];
	dv[2] *= x[3];
	J[35] += dv[2]*1.94219124871473;
	dv[4] = -x[59]*1.94219124871473;
	J[35] += dv[4]*transswitch0009p_pd[98];
	J[123] = 1.;

   /*** derivatives for constraint 13 ***/

	J[367] = transswitch0009p_pd[112];
	dv[0] = x[60]*transswitch0009p_pd[109];
	dv[1] = x[60]*transswitch0009p_pd[110];
	dv[0] *= transswitch0009p_pd[111];
	J[225] = -dv[0];
	J[198] = dv[0];
	J[20] = dv[1]*transswitch0009p_pd[108];
	dv[1] *= x[3];
	J[0] = -dv[1]*17.3611111111111;
	J[126] = 1.;

   /*** derivatives for constraint 14 ***/

	J[368] = transswitch0009p_pd[117];
	dv[0] = x[60]*transswitch0009p_pd[114];
	dv[1] = x[60]*transswitch0009p_pd[115];
	dv[0] *= transswitch0009p_pd[116];
	J[199] = -dv[0];
	J[226] = dv[0];
	J[1] = dv[1]*transswitch0009p_pd[113];
	dv[1] *= x[0];
	J[21] = -dv[1]*17.3611111111111;
	J[129] = 1.;

   /*** derivatives for constraint 15 ***/

	J[371] = -transswitch0009p_pd[128];
	dv[0] = -x[61];
	dv[1] = dv[0]*transswitch0009p_pd[125];
	dv[0] *= transswitch0009p_pd[126];
	dv[1] *= transswitch0009p_pd[127];
	J[227] = -dv[1];
	J[327] = dv[1];
	J[22] = dv[0]*transswitch0009p_pd[124];
	dv[0] *= x[3];
	J[80] = dv[0]*11.6040955631399;
	dv[2] = x[61];
	dv[3] = dv[2]*transswitch0009p_pd[121];
	dv[2] *= transswitch0009p_pd[122];
	dv[3] *= transswitch0009p_pd[123];
	J[227] -= dv[3];
	J[327] += dv[3];
	J[22] += dv[2]*transswitch0009p_pd[120];
	dv[2] *= x[3];
	J[80] += dv[2]*1.36518771331058;
	dv[4] = -x[61]*1.36518771331058;
	J[80] += dv[4]*transswitch0009p_pd[119];
	J[132] = 1.;

   /*** derivatives for constraint 16 ***/

	J[372] = -transswitch0009p_pd[139];
	dv[0] = -x[61];
	dv[1] = dv[0]*transswitch0009p_pd[136];
	dv[0] *= transswitch0009p_pd[137];
	dv[1] *= transswitch0009p_pd[138];
	J[328] = -dv[1];
	J[228] = dv[1];
	J[81] = dv[0]*transswitch0009p_pd[135];
	dv[0] *= x[8];
	J[23] = dv[0]*11.6040955631399;
	dv[2] = x[61];
	dv[3] = dv[2]*transswitch0009p_pd[132];
	dv[2] *= transswitch0009p_pd[133];
	dv[3] *= transswitch0009p_pd[134];
	J[328] -= dv[3];
	J[228] += dv[3];
	J[81] += dv[2]*transswitch0009p_pd[131];
	dv[2] *= x[8];
	J[23] += dv[2]*1.36518771331058;
	dv[4] = -x[61]*1.36518771331058;
	J[23] += dv[4]*transswitch0009p_pd[130];
	J[135] = 1.;

   /*** derivatives for constraint 17 ***/

	J[375] = -transswitch0009p_pd[150];
	dv[0] = -x[62];
	dv[1] = dv[0]*transswitch0009p_pd[147];
	dv[0] *= transswitch0009p_pd[148];
	dv[1] *= transswitch0009p_pd[149];
	J[329] = -dv[1];
	J[307] = dv[1];
	J[82] = dv[0]*transswitch0009p_pd[146];
	dv[0] *= x[8];
	J[70] = dv[0]*5.97513453330859;
	dv[2] = x[62];
	dv[3] = dv[2]*transswitch0009p_pd[143];
	dv[2] *= transswitch0009p_pd[144];
	dv[3] *= transswitch0009p_pd[145];
	J[329] -= dv[3];
	J[307] += dv[3];
	J[82] += dv[2]*transswitch0009p_pd[142];
	dv[2] *= x[8];
	J[70] += dv[2]*1.18760437929115;
	dv[4] = -x[62]*1.18760437929115;
	J[70] += dv[4]*transswitch0009p_pd[141];
	J[138] = 1.;

   /*** derivatives for constraint 18 ***/

	J[376] = -transswitch0009p_pd[161];
	dv[0] = -x[62];
	dv[1] = dv[0]*transswitch0009p_pd[158];
	dv[0] *= transswitch0009p_pd[159];
	dv[1] *= transswitch0009p_pd[160];
	J[308] = -dv[1];
	J[330] = dv[1];
	J[71] = dv[0]*transswitch0009p_pd[157];
	dv[0] *= x[7];
	J[83] = dv[0]*5.97513453330859;
	dv[2] = x[62];
	dv[3] = dv[2]*transswitch0009p_pd[154];
	dv[2] *= transswitch0009p_pd[155];
	dv[3] *= transswitch0009p_pd[156];
	J[308] -= dv[3];
	J[330] += dv[3];
	J[71] += dv[2]*transswitch0009p_pd[153];
	dv[2] *= x[7];
	J[83] += dv[2]*1.18760437929115;
	dv[4] = -x[62]*1.18760437929115;
	J[83] += dv[4]*transswitch0009p_pd[152];
	J[141] = 1.;

   /*** derivatives for constraint 19 ***/

	J[345] = -transswitch0009p_pd[168];
	dv[0] = x[54];
	dv[1] = dv[0]*transswitch0009p_pd[165];
	dv[0] *= transswitch0009p_pd[166];
	dv[1] *= transswitch0009p_pd[167];
	J[269] = -dv[1];
	J[217] = dv[1];
	J[48] = dv[0]*transswitch0009p_pd[164];
	dv[0] *= x[5];
	J[14] = dv[0]*17.0648464163823;
	dv[2] = -x[54]*17.0648464163823;
	J[14] += dv[2]*transswitch0009p_pd[163];
	J[144] = 1.;

   /*** derivatives for constraint 20 ***/

	J[346] = -transswitch0009p_pd[175];
	dv[0] = x[54];
	dv[1] = dv[0]*transswitch0009p_pd[172];
	dv[0] *= transswitch0009p_pd[173];
	dv[1] *= transswitch0009p_pd[174];
	J[218] = -dv[1];
	J[270] = dv[1];
	J[15] = dv[0]*transswitch0009p_pd[171];
	dv[0] *= x[2];
	J[49] = dv[0]*17.0648464163823;
	dv[2] = -x[54]*17.0648464163823;
	J[49] += dv[2]*transswitch0009p_pd[170];
	J[147] = 1.;

   /*** derivatives for constraint 21 ***/

	J[349] = -transswitch0009p_pd[186];
	dv[0] = x[55];
	dv[1] = dv[0]*transswitch0009p_pd[183];
	dv[0] *= transswitch0009p_pd[184];
	dv[1] *= transswitch0009p_pd[185];
	J[309] = -dv[1];
	J[291] = dv[1];
	J[72] = dv[0]*transswitch0009p_pd[182];
	dv[0] *= x[7];
	J[60] = dv[0]*1.61712247324614;
	dv[2] = x[55];
	dv[3] = dv[2]*transswitch0009p_pd[179];
	dv[2] *= transswitch0009p_pd[180];
	dv[3] *= transswitch0009p_pd[181];
	J[309] -= dv[3];
	J[291] += dv[3];
	J[72] += dv[2]*transswitch0009p_pd[178];
	dv[2] *= x[7];
	J[60] += dv[2]*13.6979785969084;
	dv[4] = -x[55]*13.6234785969084;
	J[60] += dv[4]*transswitch0009p_pd[177];
	J[150] = 1.;

   /*** derivatives for constraint 22 ***/

	J[350] = -transswitch0009p_pd[197];
	dv[0] = x[55];
	dv[1] = dv[0]*transswitch0009p_pd[194];
	dv[0] *= transswitch0009p_pd[195];
	dv[1] *= transswitch0009p_pd[196];
	J[292] = -dv[1];
	J[310] = dv[1];
	J[61] = dv[0]*transswitch0009p_pd[193];
	dv[0] *= x[6];
	J[73] = dv[0]*1.61712247324614;
	dv[2] = x[55];
	dv[3] = dv[2]*transswitch0009p_pd[190];
	dv[2] *= transswitch0009p_pd[191];
	dv[3] *= transswitch0009p_pd[192];
	J[292] -= dv[3];
	J[310] += dv[3];
	J[61] += dv[2]*transswitch0009p_pd[189];
	dv[2] *= x[6];
	J[73] += dv[2]*13.6979785969084;
	dv[4] = -x[55]*13.6234785969084;
	J[73] += dv[4]*transswitch0009p_pd[188];
	J[153] = 1.;

   /*** derivatives for constraint 23 ***/

	J[353] = -transswitch0009p_pd[208];
	dv[0] = x[56];
	dv[1] = dv[0]*transswitch0009p_pd[205];
	dv[0] *= transswitch0009p_pd[206];
	dv[1] *= transswitch0009p_pd[207];
	J[271] = -dv[1];
	J[251] = dv[1];
	J[50] = dv[0]*transswitch0009p_pd[204];
	dv[0] *= x[5];
	J[36] = dv[0]*1.28200913842411;
	dv[2] = x[56];
	dv[3] = dv[2]*transswitch0009p_pd[201];
	dv[2] *= transswitch0009p_pd[202];
	dv[3] *= transswitch0009p_pd[203];
	J[271] -= dv[3];
	J[251] += dv[3];
	J[50] += dv[2]*transswitch0009p_pd[200];
	dv[2] *= x[5];
	J[36] += dv[2]*5.58824496236153;
	dv[4] = -x[56]*5.40924496236153;
	J[36] += dv[4]*transswitch0009p_pd[199];
	J[156] = 1.;

   /*** derivatives for constraint 24 ***/

	J[354] = -transswitch0009p_pd[219];
	dv[0] = x[56];
	dv[1] = dv[0]*transswitch0009p_pd[216];
	dv[0] *= transswitch0009p_pd[217];
	dv[1] *= transswitch0009p_pd[218];
	J[252] = -dv[1];
	J[272] = dv[1];
	J[37] = dv[0]*transswitch0009p_pd[215];
	dv[0] *= x[4];
	J[51] = dv[0]*1.28200913842411;
	dv[2] = x[56];
	dv[3] = dv[2]*transswitch0009p_pd[212];
	dv[2] *= transswitch0009p_pd[213];
	dv[3] *= transswitch0009p_pd[214];
	J[252] -= dv[3];
	J[272] += dv[3];
	J[37] += dv[2]*transswitch0009p_pd[211];
	dv[2] *= x[4];
	J[51] += dv[2]*5.58824496236153;
	dv[4] = -x[56]*5.40924496236153;
	J[51] += dv[4]*transswitch0009p_pd[210];
	J[159] = 1.;

   /*** derivatives for constraint 25 ***/

	J[357] = -transswitch0009p_pd[230];
	dv[0] = x[57];
	dv[1] = dv[0]*transswitch0009p_pd[227];
	dv[0] *= transswitch0009p_pd[228];
	dv[1] *= transswitch0009p_pd[229];
	J[293] = -dv[1];
	J[273] = dv[1];
	J[62] = dv[0]*transswitch0009p_pd[226];
	dv[0] *= x[6];
	J[52] = dv[0]*1.1550874808901;
	dv[2] = x[57];
	dv[3] = dv[2]*transswitch0009p_pd[223];
	dv[2] *= transswitch0009p_pd[224];
	dv[3] *= transswitch0009p_pd[225];
	J[293] -= dv[3];
	J[273] += dv[3];
	J[62] += dv[2]*transswitch0009p_pd[222];
	dv[2] *= x[6];
	J[52] += dv[2]*9.78427042636317;
	dv[4] = -x[57]*9.67977042636317;
	J[52] += dv[4]*transswitch0009p_pd[221];
	J[162] = 1.;

   /*** derivatives for constraint 26 ***/

	J[358] = -transswitch0009p_pd[241];
	dv[0] = x[57];
	dv[1] = dv[0]*transswitch0009p_pd[238];
	dv[0] *= transswitch0009p_pd[239];
	dv[1] *= transswitch0009p_pd[240];
	J[274] = -dv[1];
	J[294] = dv[1];
	J[53] = dv[0]*transswitch0009p_pd[237];
	dv[0] *= x[5];
	J[63] = dv[0]*1.1550874808901;
	dv[2] = x[57];
	dv[3] = dv[2]*transswitch0009p_pd[234];
	dv[2] *= transswitch0009p_pd[235];
	dv[3] *= transswitch0009p_pd[236];
	J[274] -= dv[3];
	J[294] += dv[3];
	J[53] += dv[2]*transswitch0009p_pd[233];
	dv[2] *= x[5];
	J[63] += dv[2]*9.78427042636317;
	dv[4] = -x[57]*9.67977042636317;
	J[63] += dv[4]*transswitch0009p_pd[232];
	J[165] = 1.;

   /*** derivatives for constraint 27 ***/

	J[361] = -transswitch0009p_pd[248];
	dv[0] = x[58];
	dv[1] = dv[0]*transswitch0009p_pd[245];
	dv[0] *= transswitch0009p_pd[246];
	dv[1] *= transswitch0009p_pd[247];
	J[209] = -dv[1];
	J[311] = dv[1];
	J[8] = dv[0]*transswitch0009p_pd[244];
	dv[0] *= x[1];
	J[74] = dv[0]*16.;
	dv[2] = -x[58]*16.;
	J[74] += dv[2]*transswitch0009p_pd[243];
	J[168] = 1.;

   /*** derivatives for constraint 28 ***/

	J[362] = -transswitch0009p_pd[255];
	dv[0] = x[58];
	dv[1] = dv[0]*transswitch0009p_pd[252];
	dv[0] *= transswitch0009p_pd[253];
	dv[1] *= transswitch0009p_pd[254];
	J[312] = -dv[1];
	J[210] = dv[1];
	J[75] = dv[0]*transswitch0009p_pd[251];
	dv[0] *= x[7];
	J[9] = dv[0]*16.;
	dv[2] = -x[58]*16.;
	J[9] += dv[2]*transswitch0009p_pd[250];
	J[171] = 1.;

   /*** derivatives for constraint 29 ***/

	J[365] = -transswitch0009p_pd[266];
	dv[0] = x[59];
	dv[1] = dv[0]*transswitch0009p_pd[263];
	dv[0] *= transswitch0009p_pd[264];
	dv[1] *= transswitch0009p_pd[265];
	J[253] = -dv[1];
	J[229] = dv[1];
	J[38] = dv[0]*transswitch0009p_pd[262];
	dv[0] *= x[4];
	J[24] = dv[0]*1.94219124871473;
	dv[2] = x[59];
	dv[3] = dv[2]*transswitch0009p_pd[259];
	dv[2] *= transswitch0009p_pd[260];
	dv[3] *= transswitch0009p_pd[261];
	J[253] -= dv[3];
	J[229] += dv[3];
	J[38] += dv[2]*transswitch0009p_pd[258];
	dv[2] *= x[4];
	J[24] += dv[2]*10.5106820518679;
	dv[4] = -x[59]*10.4316820518679;
	J[24] += dv[4]*transswitch0009p_pd[257];
	J[174] = 1.;

   /*** derivatives for constraint 30 ***/

	J[366] = -transswitch0009p_pd[277];
	dv[0] = x[59];
	dv[1] = dv[0]*transswitch0009p_pd[274];
	dv[0] *= transswitch0009p_pd[275];
	dv[1] *= transswitch0009p_pd[276];
	J[230] = -dv[1];
	J[254] = dv[1];
	J[25] = dv[0]*transswitch0009p_pd[273];
	dv[0] *= x[3];
	J[39] = dv[0]*1.94219124871473;
	dv[2] = x[59];
	dv[3] = dv[2]*transswitch0009p_pd[270];
	dv[2] *= transswitch0009p_pd[271];
	dv[3] *= transswitch0009p_pd[272];
	J[230] -= dv[3];
	J[254] += dv[3];
	J[25] += dv[2]*transswitch0009p_pd[269];
	dv[2] *= x[3];
	J[39] += dv[2]*10.5106820518679;
	dv[4] = -x[59]*10.4316820518679;
	J[39] += dv[4]*transswitch0009p_pd[268];
	J[177] = 1.;

   /*** derivatives for constraint 31 ***/

	J[369] = -transswitch0009p_pd[284];
	dv[0] = x[60];
	dv[1] = dv[0]*transswitch0009p_pd[281];
	dv[0] *= transswitch0009p_pd[282];
	dv[1] *= transswitch0009p_pd[283];
	J[231] = -dv[1];
	J[200] = dv[1];
	J[26] = dv[0]*transswitch0009p_pd[280];
	dv[0] *= x[3];
	J[2] = dv[0]*17.3611111111111;
	dv[2] = -x[60]*17.3611111111111;
	J[2] += dv[2]*transswitch0009p_pd[279];
	J[180] = 1.;

   /*** derivatives for constraint 32 ***/

	J[370] = -transswitch0009p_pd[291];
	dv[0] = x[60];
	dv[1] = dv[0]*transswitch0009p_pd[288];
	dv[0] *= transswitch0009p_pd[289];
	dv[1] *= transswitch0009p_pd[290];
	J[201] = -dv[1];
	J[232] = dv[1];
	J[3] = dv[0]*transswitch0009p_pd[287];
	dv[0] *= x[0];
	J[27] = dv[0]*17.3611111111111;
	dv[2] = -x[60]*17.3611111111111;
	J[27] += dv[2]*transswitch0009p_pd[286];
	J[183] = 1.;

   /*** derivatives for constraint 33 ***/

	J[373] = -transswitch0009p_pd[302];
	dv[0] = x[61];
	dv[1] = dv[0]*transswitch0009p_pd[299];
	dv[0] *= transswitch0009p_pd[300];
	dv[1] *= transswitch0009p_pd[301];
	J[233] = -dv[1];
	J[331] = dv[1];
	J[28] = dv[0]*transswitch0009p_pd[298];
	dv[0] *= x[3];
	J[84] = dv[0]*1.36518771331058;
	dv[2] = x[61];
	dv[3] = dv[2]*transswitch0009p_pd[295];
	dv[2] *= transswitch0009p_pd[296];
	dv[3] *= transswitch0009p_pd[297];
	J[233] -= dv[3];
	J[331] += dv[3];
	J[28] += dv[2]*transswitch0009p_pd[294];
	dv[2] *= x[3];
	J[84] += dv[2]*11.6040955631399;
	dv[4] = -x[61]*11.5160955631399;
	J[84] += dv[4]*transswitch0009p_pd[293];
	J[186] = 1.;

   /*** derivatives for constraint 34 ***/

	J[374] = -transswitch0009p_pd[313];
	dv[0] = x[61];
	dv[1] = dv[0]*transswitch0009p_pd[310];
	dv[0] *= transswitch0009p_pd[311];
	dv[1] *= transswitch0009p_pd[312];
	J[332] = -dv[1];
	J[234] = dv[1];
	J[85] = dv[0]*transswitch0009p_pd[309];
	dv[0] *= x[8];
	J[29] = dv[0]*1.36518771331058;
	dv[2] = x[61];
	dv[3] = dv[2]*transswitch0009p_pd[306];
	dv[2] *= transswitch0009p_pd[307];
	dv[3] *= transswitch0009p_pd[308];
	J[332] -= dv[3];
	J[234] += dv[3];
	J[85] += dv[2]*transswitch0009p_pd[305];
	dv[2] *= x[8];
	J[29] += dv[2]*11.6040955631399;
	dv[4] = -x[61]*11.5160955631399;
	J[29] += dv[4]*transswitch0009p_pd[304];
	J[189] = 1.;

   /*** derivatives for constraint 35 ***/

	J[377] = -transswitch0009p_pd[324];
	dv[0] = x[62];
	dv[1] = dv[0]*transswitch0009p_pd[321];
	dv[0] *= transswitch0009p_pd[322];
	dv[1] *= transswitch0009p_pd[323];
	J[333] = -dv[1];
	J[313] = dv[1];
	J[86] = dv[0]*transswitch0009p_pd[320];
	dv[0] *= x[8];
	J[76] = dv[0]*1.18760437929115;
	dv[2] = x[62];
	dv[3] = dv[2]*transswitch0009p_pd[317];
	dv[2] *= transswitch0009p_pd[318];
	dv[3] *= transswitch0009p_pd[319];
	J[333] -= dv[3];
	J[313] += dv[3];
	J[86] += dv[2]*transswitch0009p_pd[316];
	dv[2] *= x[8];
	J[76] += dv[2]*5.97513453330859;
	dv[4] = -x[62]*5.82213453330859;
	J[76] += dv[4]*transswitch0009p_pd[315];
	J[192] = 1.;

   /*** derivatives for constraint 36 ***/

	J[378] = -transswitch0009p_pd[335];
	dv[0] = x[62];
	dv[1] = dv[0]*transswitch0009p_pd[332];
	dv[0] *= transswitch0009p_pd[333];
	dv[1] *= transswitch0009p_pd[334];
	J[314] = -dv[1];
	J[334] = dv[1];
	J[77] = dv[0]*transswitch0009p_pd[331];
	dv[0] *= x[7];
	J[87] = dv[0]*1.18760437929115;
	dv[2] = x[62];
	dv[3] = dv[2]*transswitch0009p_pd[328];
	dv[2] *= transswitch0009p_pd[329];
	dv[3] *= transswitch0009p_pd[330];
	J[314] -= dv[3];
	J[334] += dv[3];
	J[77] += dv[2]*transswitch0009p_pd[327];
	dv[2] *= x[7];
	J[87] += dv[2]*5.97513453330859;
	dv[4] = -x[62]*5.82213453330859;
	J[87] += dv[4]*transswitch0009p_pd[326];
	J[195] = 1.;

   /*** derivatives for constraint 37 ***/

	J[145] = transswitch0009p_pd[337];
	J[91] = transswitch0009p_pd[336];

   /*** derivatives for constraint 38 ***/

	J[148] = transswitch0009p_pd[339];
	J[94] = transswitch0009p_pd[338];

   /*** derivatives for constraint 39 ***/

	J[151] = transswitch0009p_pd[341];
	J[97] = transswitch0009p_pd[340];

   /*** derivatives for constraint 40 ***/

	J[154] = transswitch0009p_pd[343];
	J[100] = transswitch0009p_pd[342];

   /*** derivatives for constraint 41 ***/

	J[157] = transswitch0009p_pd[345];
	J[103] = transswitch0009p_pd[344];

   /*** derivatives for constraint 42 ***/

	J[160] = transswitch0009p_pd[347];
	J[106] = transswitch0009p_pd[346];

   /*** derivatives for constraint 43 ***/

	J[163] = transswitch0009p_pd[349];
	J[109] = transswitch0009p_pd[348];

   /*** derivatives for constraint 44 ***/

	J[166] = transswitch0009p_pd[351];
	J[112] = transswitch0009p_pd[350];

   /*** derivatives for constraint 45 ***/

	J[169] = transswitch0009p_pd[353];
	J[115] = transswitch0009p_pd[352];

   /*** derivatives for constraint 46 ***/

	J[172] = transswitch0009p_pd[355];
	J[118] = transswitch0009p_pd[354];

   /*** derivatives for constraint 47 ***/

	J[175] = transswitch0009p_pd[357];
	J[121] = transswitch0009p_pd[356];

   /*** derivatives for constraint 48 ***/

	J[178] = transswitch0009p_pd[359];
	J[124] = transswitch0009p_pd[358];

   /*** derivatives for constraint 49 ***/

	J[181] = transswitch0009p_pd[361];
	J[127] = transswitch0009p_pd[360];

   /*** derivatives for constraint 50 ***/

	J[184] = transswitch0009p_pd[363];
	J[130] = transswitch0009p_pd[362];

   /*** derivatives for constraint 51 ***/

	J[187] = transswitch0009p_pd[365];
	J[133] = transswitch0009p_pd[364];

   /*** derivatives for constraint 52 ***/

	J[190] = transswitch0009p_pd[367];
	J[136] = transswitch0009p_pd[366];

   /*** derivatives for constraint 53 ***/

	J[193] = transswitch0009p_pd[369];
	J[139] = transswitch0009p_pd[368];

   /*** derivatives for constraint 54 ***/

	J[196] = transswitch0009p_pd[371];
	J[142] = transswitch0009p_pd[370];

   /*** derivatives for constraint 55 ***/

	J[379] = 1.;

   /*** derivatives for constraint 56 ***/

	J[382] = 1.;

   /*** derivatives for constraint 57 ***/

	J[385] = 1.;

   /*** derivatives for constraint 58 ***/

	J[380] = 1.;

   /*** derivatives for constraint 59 ***/

	J[383] = 1.;

   /*** derivatives for constraint 60 ***/

	J[386] = 1.;

   /*** derivatives for constraint 61 ***/

	J[388] = 1.;

   /*** derivatives for constraint 62 ***/

	J[391] = 1.;

   /*** derivatives for constraint 63 ***/

	J[394] = 1.;

   /*** derivatives for constraint 64 ***/

	J[389] = 1.;

   /*** derivatives for constraint 65 ***/

	J[392] = 1.;

   /*** derivatives for constraint 66 ***/

	J[395] = 1.;

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
	J[381] = -1.;

   /*** derivatives for constraint 123 ***/

	J[119] = 1.;
	J[384] = -1.;

   /*** derivatives for constraint 124 ***/

	J[92] = 1.;
	J[387] = -1.;

   /*** derivatives for constraint 125 ***/

	J[182] = 1.;
	J[390] = -1.;

   /*** derivatives for constraint 126 ***/

	J[173] = 1.;
	J[393] = -1.;

   /*** derivatives for constraint 127 ***/

	J[146] = 1.;
	J[396] = -1.;

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
