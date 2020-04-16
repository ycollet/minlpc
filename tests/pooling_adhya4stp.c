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
 fint pooling_adhya4stp_auxcom_[1] = { 80 /* nlc */ };
 fint pooling_adhya4stp_funcom_[604] = {
	76 /* nvar */,
	1 /* nobj */,
	119 /* ncon */,
	521 /* nzc */,
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
	45,
	49,
	53,
	57,
	61,
	65,
	69,
	73,
	77,
	81,
	87,
	93,
	99,
	105,
	111,
	117,
	123,
	129,
	134,
	139,
	144,
	149,
	154,
	159,
	164,
	169,
	174,
	179,
	188,
	197,
	206,
	215,
	223,
	232,
	240,
	249,
	256,
	265,
	272,
	280,
	289,
	297,
	305,
	314,
	323,
	332,
	340,
	349,
	358,
	367,
	376,
	385,
	393,
	400,
	409,
	418,
	425,
	434,
	443,
	452,
	461,
	470,
	479,
	488,
	496,
	505,
	513,
	522,

	/* rownos */
	1,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
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
	1,
	6,
	11,
	16,
	2,
	7,
	12,
	17,
	3,
	8,
	13,
	18,
	4,
	9,
	14,
	19,
	5,
	10,
	15,
	20,
	21,
	26,
	31,
	36,
	22,
	27,
	32,
	37,
	23,
	28,
	33,
	38,
	24,
	29,
	34,
	39,
	25,
	30,
	35,
	40,
	1,
	2,
	3,
	4,
	5,
	116,
	6,
	7,
	8,
	9,
	10,
	116,
	11,
	12,
	13,
	14,
	15,
	116,
	16,
	17,
	18,
	19,
	20,
	116,
	21,
	22,
	23,
	24,
	25,
	117,
	26,
	27,
	28,
	29,
	30,
	117,
	31,
	32,
	33,
	34,
	35,
	117,
	36,
	37,
	38,
	39,
	40,
	117,
	41,
	46,
	51,
	56,
	118,
	42,
	47,
	52,
	57,
	118,
	43,
	48,
	53,
	58,
	118,
	44,
	49,
	54,
	59,
	118,
	45,
	50,
	55,
	60,
	118,
	61,
	66,
	71,
	76,
	119,
	62,
	67,
	72,
	77,
	119,
	63,
	68,
	73,
	78,
	119,
	64,
	69,
	74,
	79,
	119,
	65,
	70,
	75,
	80,
	119,
	1,
	41,
	81,
	89,
	91,
	96,
	97,
	98,
	99,
	2,
	42,
	81,
	89,
	92,
	100,
	101,
	102,
	103,
	3,
	43,
	81,
	89,
	93,
	104,
	105,
	106,
	107,
	4,
	44,
	81,
	89,
	94,
	108,
	109,
	110,
	111,
	5,
	45,
	81,
	89,
	95,
	112,
	114,
	115,
	6,
	46,
	82,
	89,
	91,
	96,
	97,
	98,
	99,
	7,
	47,
	82,
	89,
	92,
	101,
	102,
	103,
	8,
	48,
	82,
	89,
	93,
	104,
	105,
	106,
	107,
	9,
	49,
	82,
	89,
	94,
	108,
	109,
	10,
	50,
	82,
	89,
	95,
	112,
	113,
	114,
	115,
	11,
	51,
	83,
	89,
	91,
	97,
	99,
	12,
	52,
	83,
	89,
	92,
	100,
	101,
	102,
	13,
	53,
	83,
	89,
	93,
	104,
	105,
	106,
	107,
	14,
	54,
	83,
	89,
	94,
	109,
	110,
	111,
	15,
	55,
	83,
	89,
	95,
	112,
	114,
	115,
	16,
	56,
	84,
	89,
	91,
	96,
	97,
	98,
	99,
	17,
	57,
	84,
	89,
	92,
	100,
	101,
	102,
	103,
	18,
	58,
	84,
	89,
	93,
	104,
	105,
	106,
	107,
	19,
	59,
	84,
	89,
	94,
	108,
	109,
	111,
	20,
	60,
	84,
	89,
	95,
	112,
	113,
	114,
	115,
	21,
	61,
	85,
	90,
	91,
	96,
	97,
	98,
	99,
	22,
	62,
	85,
	90,
	92,
	100,
	101,
	102,
	103,
	23,
	63,
	85,
	90,
	93,
	104,
	105,
	106,
	107,
	24,
	64,
	85,
	90,
	94,
	108,
	109,
	110,
	111,
	25,
	65,
	85,
	90,
	95,
	113,
	114,
	115,
	26,
	66,
	86,
	90,
	91,
	97,
	99,
	27,
	67,
	86,
	90,
	92,
	100,
	101,
	102,
	103,
	28,
	68,
	86,
	90,
	93,
	104,
	105,
	106,
	107,
	29,
	69,
	86,
	90,
	94,
	110,
	111,
	30,
	70,
	86,
	90,
	95,
	112,
	113,
	114,
	115,
	31,
	71,
	87,
	90,
	91,
	96,
	97,
	98,
	99,
	32,
	72,
	87,
	90,
	92,
	100,
	101,
	102,
	103,
	33,
	73,
	87,
	90,
	93,
	104,
	105,
	106,
	107,
	34,
	74,
	87,
	90,
	94,
	108,
	109,
	110,
	111,
	35,
	75,
	87,
	90,
	95,
	112,
	113,
	114,
	115,
	36,
	76,
	88,
	90,
	91,
	96,
	97,
	98,
	99,
	37,
	77,
	88,
	90,
	92,
	101,
	102,
	103,
	38,
	78,
	88,
	90,
	93,
	104,
	105,
	106,
	107,
	39,
	79,
	88,
	90,
	94,
	108,
	109,
	110,
	40,
	80,
	88,
	90,
	95,
	112,
	113,
	114,
	115 };

 real pooling_adhya4stp_boundc_[1+152+238] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		85.,
		0.,
		85.,
		0.,
		85.,
		0.,
		85.,
		0.,
		85.,
		0.,
		85.,
		0.,
		85.,
		0.,
		85.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
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
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		25.,
		0.,
		10.,
		0.,
		20.,
		0.,
		15.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		85.,
		-1.7e308,
		15.,
		-1.7e308,
		25.,
		-1.7e308,
		10.,
		-1.7e308,
		20.,
		-1.7e308,
		15.,
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.};

 real pooling_adhya4stp_x0comn_[76] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real pooling_adhya4stp_old_x[76];
static int pooling_adhya4stp_xkind = -1;

 static int
pooling_adhya4stp_xcheck(real *x)
{
	real *x1 = pooling_adhya4stp_old_x, *xe = x + 76;
	errno = 0;
	if (pooling_adhya4stp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_adhya4stp_xkind = 0;
	return 1;
	}
 real
pooling_adhya4stp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_adhya4stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 5.*x[36];
	rv += -10.*x[37];
	rv += -15.*x[38];
	rv += 9.*x[39];
	rv += 5.*x[40];
	rv += -3.*x[41];
	rv += -18.*x[42];
	rv += -23.*x[43];
	rv += x[44];
	rv += -3.*x[45];
	rv += -6.*x[46];
	rv += -21.*x[47];
	rv += -26.*x[48];
	rv += -2.*x[49];
	rv += -6.*x[50];
	rv += -5.*x[51];
	rv += -20.*x[52];
	rv += -25.*x[53];
	rv += -x[54];
	rv += -5.*x[55];
	rv += -4.*x[56];
	rv += -19.*x[57];
	rv += -24.*x[58];
	rv += -4.*x[60];
	rv += -7.*x[61];
	rv += -22.*x[62];
	rv += -27.*x[63];
	rv += -3.*x[64];
	rv += -7.*x[65];
	rv += -5.*x[66];
	rv += -20.*x[67];
	rv += -25.*x[68];
	rv += -x[69];
	rv += -5.*x[70];
	rv += -5.*x[71];
	rv += -20.*x[72];
	rv += -25.*x[73];
	rv += -x[74];
	rv += -5.*x[75];
	;}

	if (wantfg & 2) {
	g[36] = 5.;
	g[37] = -10.;
	g[38] = -15.;
	g[39] = 9.;
	g[40] = 5.;
	g[41] = -3.;
	g[42] = -18.;
	g[43] = -23.;
	g[44] = 1.;
	g[45] = -3.;
	g[46] = -6.;
	g[47] = -21.;
	g[48] = -26.;
	g[49] = -2.;
	g[50] = -6.;
	g[51] = -5.;
	g[52] = -20.;
	g[53] = -25.;
	g[54] = -1.;
	g[55] = -5.;
	g[56] = -4.;
	g[57] = -19.;
	g[58] = -24.;
	g[60] = -4.;
	g[61] = -7.;
	g[62] = -22.;
	g[63] = -27.;
	g[64] = -3.;
	g[65] = -7.;
	g[66] = -5.;
	g[67] = -20.;
	g[68] = -25.;
	g[69] = -1.;
	g[70] = -5.;
	g[71] = -5.;
	g[72] = -20.;
	g[73] = -25.;
	g[74] = -1.;
	g[75] = -5.;
	}

	return rv;
}

 void
pooling_adhya4stp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_adhya4stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[18] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[36];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[18] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[37];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[18] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[38];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[18] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[39];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[18] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[40];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[19] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[41];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[19] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[42];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[19] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[43];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[19] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[44];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[19] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[45];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[20] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[46];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[20] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[47];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[20] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[48];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[20] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[49];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[20] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[50];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[21] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[51];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[21] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[52];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[21] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[53];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[21] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[54];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[21] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[55];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[22] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[56];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[22] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[57];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[22] * x[15];
	v[1] = -v[0];
	t1 = v[1] + x[58];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[22] * x[16];
	v[1] = -v[0];
	t1 = v[1] + x[59];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[22] * x[17];
	v[1] = -v[0];
	t1 = v[1] + x[60];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[23] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[61];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[23] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[62];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[23] * x[15];
	v[1] = -v[0];
	t1 = v[1] + x[63];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[23] * x[16];
	v[1] = -v[0];
	t1 = v[1] + x[64];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[23] * x[17];
	v[1] = -v[0];
	t1 = v[1] + x[65];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[24] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[66];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[24] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[67];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[24] * x[15];
	v[1] = -v[0];
	t1 = v[1] + x[68];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[24] * x[16];
	v[1] = -v[0];
	t1 = v[1] + x[69];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[24] * x[17];
	v[1] = -v[0];
	t1 = v[1] + x[70];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[25] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[71];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[25] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[72];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[25] * x[15];
	v[1] = -v[0];
	t1 = v[1] + x[73];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[25] * x[16];
	v[1] = -v[0];
	t1 = v[1] + x[74];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[25] * x[17];
	v[1] = -v[0];
	t1 = v[1] + x[75];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[26] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[36];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[27] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[37];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[28] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[38];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = x[29] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[39];
	c[43] = t1;

  /***  constraint 45  ***/

	v[0] = x[30] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[40];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = x[26] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[41];
	c[45] = t1;

  /***  constraint 47  ***/

	v[0] = x[27] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[42];
	c[46] = t1;

  /***  constraint 48  ***/

	v[0] = x[28] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[43];
	c[47] = t1;

  /***  constraint 49  ***/

	v[0] = x[29] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[44];
	c[48] = t1;

  /***  constraint 50  ***/

	v[0] = x[30] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[45];
	c[49] = t1;

  /***  constraint 51  ***/

	v[0] = x[26] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[46];
	c[50] = t1;

  /***  constraint 52  ***/

	v[0] = x[27] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[47];
	c[51] = t1;

  /***  constraint 53  ***/

	v[0] = x[28] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[48];
	c[52] = t1;

  /***  constraint 54  ***/

	v[0] = x[29] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[49];
	c[53] = t1;

  /***  constraint 55  ***/

	v[0] = x[30] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[50];
	c[54] = t1;

  /***  constraint 56  ***/

	v[0] = x[26] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[51];
	c[55] = t1;

  /***  constraint 57  ***/

	v[0] = x[27] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[52];
	c[56] = t1;

  /***  constraint 58  ***/

	v[0] = x[28] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[53];
	c[57] = t1;

  /***  constraint 59  ***/

	v[0] = x[29] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[54];
	c[58] = t1;

  /***  constraint 60  ***/

	v[0] = x[30] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[55];
	c[59] = t1;

  /***  constraint 61  ***/

	v[0] = x[31] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[56];
	c[60] = t1;

  /***  constraint 62  ***/

	v[0] = x[32] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[57];
	c[61] = t1;

  /***  constraint 63  ***/

	v[0] = x[33] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[58];
	c[62] = t1;

  /***  constraint 64  ***/

	v[0] = x[34] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[59];
	c[63] = t1;

  /***  constraint 65  ***/

	v[0] = x[35] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[60];
	c[64] = t1;

  /***  constraint 66  ***/

	v[0] = x[31] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[61];
	c[65] = t1;

  /***  constraint 67  ***/

	v[0] = x[32] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[62];
	c[66] = t1;

  /***  constraint 68  ***/

	v[0] = x[33] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[63];
	c[67] = t1;

  /***  constraint 69  ***/

	v[0] = x[34] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[64];
	c[68] = t1;

  /***  constraint 70  ***/

	v[0] = x[35] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[65];
	c[69] = t1;

  /***  constraint 71  ***/

	v[0] = x[31] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[66];
	c[70] = t1;

  /***  constraint 72  ***/

	v[0] = x[32] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[67];
	c[71] = t1;

  /***  constraint 73  ***/

	v[0] = x[33] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[68];
	c[72] = t1;

  /***  constraint 74  ***/

	v[0] = x[34] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[69];
	c[73] = t1;

  /***  constraint 75  ***/

	v[0] = x[35] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[70];
	c[74] = t1;

  /***  constraint 76  ***/

	v[0] = x[31] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[71];
	c[75] = t1;

  /***  constraint 77  ***/

	v[0] = x[32] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[72];
	c[76] = t1;

  /***  constraint 78  ***/

	v[0] = x[33] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[73];
	c[77] = t1;

  /***  constraint 79  ***/

	v[0] = x[34] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[74];
	c[78] = t1;

  /***  constraint 80  ***/

	v[0] = x[35] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[75];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[45];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[60];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[65];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[66];
	t1 += x[67];
	t1 += x[68];
	t1 += x[69];
	t1 += x[70];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[36];
	t1 += x[41];
	t1 += x[46];
	t1 += x[51];
	t1 += x[56];
	t1 += x[61];
	t1 += x[66];
	t1 += x[71];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[37];
	t1 += x[42];
	t1 += x[47];
	t1 += x[52];
	t1 += x[57];
	t1 += x[62];
	t1 += x[67];
	t1 += x[72];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[38];
	t1 += x[43];
	t1 += x[48];
	t1 += x[53];
	t1 += x[58];
	t1 += x[63];
	t1 += x[68];
	t1 += x[73];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[39];
	t1 += x[44];
	t1 += x[49];
	t1 += x[54];
	t1 += x[59];
	t1 += x[64];
	t1 += x[69];
	t1 += x[74];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[40];
	t1 += x[45];
	t1 += x[50];
	t1 += x[55];
	t1 += x[60];
	t1 += x[65];
	t1 += x[70];
	t1 += x[75];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = -0.7*x[36];
	t1 += 0.2*x[41];
	t1 += 0.3*x[51];
	t1 += 0.4*x[56];
	t1 += 0.3*x[66];
	t1 += 0.2*x[71];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = 0.2*x[36];
	t1 += 0.1*x[41];
	t1 += 0.2*x[46];
	t1 += -0.5*x[51];
	t1 += 0.1*x[56];
	t1 += -0.6*x[61];
	t1 += -0.2*x[66];
	t1 += -0.0999999999999999*x[71];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = -0.0999999999999999*x[36];
	t1 += 0.3*x[41];
	t1 += 0.3*x[51];
	t1 += 0.2*x[56];
	t1 += 0.1*x[66];
	t1 += -0.2*x[71];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -0.7*x[36];
	t1 += -0.0999999999999999*x[41];
	t1 += -0.3*x[46];
	t1 += -0.4*x[51];
	t1 += 0.3*x[56];
	t1 += 0.3*x[61];
	t1 += -0.2*x[66];
	t1 += -0.0999999999999999*x[71];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = -0.9*x[37];
	t1 += -0.2*x[47];
	t1 += 0.1*x[52];
	t1 += 0.2*x[57];
	t1 += -0.2*x[62];
	t1 += 0.1*x[67];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = 0.6*x[37];
	t1 += 0.5*x[42];
	t1 += 0.6*x[47];
	t1 += -0.1*x[52];
	t1 += 0.5*x[57];
	t1 += -0.2*x[62];
	t1 += 0.2*x[67];
	t1 += 0.3*x[72];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = -0.5*x[37];
	t1 += -0.1*x[42];
	t1 += -0.4*x[47];
	t1 += -0.1*x[52];
	t1 += -0.2*x[57];
	t1 += -0.4*x[62];
	t1 += -0.3*x[67];
	t1 += -0.6*x[72];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = -0.4*x[37];
	t1 += 0.2*x[42];
	t1 += -0.0999999999999999*x[52];
	t1 += 0.6*x[57];
	t1 += 0.6*x[62];
	t1 += 0.1*x[67];
	t1 += 0.2*x[72];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = -0.8*x[38];
	t1 += 0.0999999999999999*x[43];
	t1 += -0.1*x[48];
	t1 += 0.2*x[53];
	t1 += 0.3*x[58];
	t1 += -0.1*x[63];
	t1 += 0.2*x[68];
	t1 += 0.0999999999999999*x[73];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = 0.6*x[38];
	t1 += 0.5*x[43];
	t1 += 0.6*x[48];
	t1 += -0.1*x[53];
	t1 += 0.5*x[58];
	t1 += -0.2*x[63];
	t1 += 0.2*x[68];
	t1 += 0.3*x[73];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -0.6*x[38];
	t1 += -0.2*x[43];
	t1 += -0.5*x[48];
	t1 += -0.2*x[53];
	t1 += -0.3*x[58];
	t1 += -0.5*x[63];
	t1 += -0.4*x[68];
	t1 += -0.7*x[73];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = -0.9*x[38];
	t1 += -0.3*x[43];
	t1 += -0.5*x[48];
	t1 += -0.6*x[53];
	t1 += 0.1*x[58];
	t1 += 0.1*x[63];
	t1 += -0.4*x[68];
	t1 += -0.3*x[73];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -0.7*x[39];
	t1 += 0.2*x[44];
	t1 += 0.3*x[54];
	t1 += 0.4*x[59];
	t1 += 0.3*x[69];
	t1 += 0.2*x[74];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = 0.8*x[39];
	t1 += 0.7*x[44];
	t1 += 0.8*x[49];
	t1 += 0.0999999999999999*x[54];
	t1 += 0.7*x[59];
	t1 += 0.4*x[69];
	t1 += 0.5*x[74];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = -0.4*x[39];
	t1 += -0.3*x[49];
	t1 += -0.0999999999999999*x[59];
	t1 += -0.3*x[64];
	t1 += -0.2*x[69];
	t1 += -0.5*x[74];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -0.6*x[39];
	t1 += -0.2*x[49];
	t1 += -0.3*x[54];
	t1 += 0.4*x[59];
	t1 += 0.4*x[64];
	t1 += -0.1*x[69];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = -1.1*x[40];
	t1 += -0.2*x[45];
	t1 += -0.4*x[50];
	t1 += -0.1*x[55];
	t1 += -0.4*x[65];
	t1 += -0.1*x[70];
	t1 += -0.2*x[75];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -0.0999999999999999*x[45];
	t1 += -0.7*x[55];
	t1 += -0.0999999999999999*x[60];
	t1 += -0.8*x[65];
	t1 += -0.4*x[70];
	t1 += -0.3*x[75];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -0.7*x[40];
	t1 += -0.3*x[45];
	t1 += -0.6*x[50];
	t1 += -0.3*x[55];
	t1 += -0.4*x[60];
	t1 += -0.6*x[65];
	t1 += -0.5*x[70];
	t1 += -0.8*x[75];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -1.5*x[40];
	t1 += -0.9*x[45];
	t1 += -1.1*x[50];
	t1 += -1.2*x[55];
	t1 += -0.5*x[60];
	t1 += -0.5*x[65];
	t1 += -x[70];
	t1 += -0.9*x[75];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	c[118] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[40] = -x[18];
	J[80] = -x[8];
	J[178] = 1.;

   /*** derivatives for constraint 2 ***/

	J[44] = -x[18];
	J[81] = -x[9];
	J[187] = 1.;

   /*** derivatives for constraint 3 ***/

	J[48] = -x[18];
	J[82] = -x[10];
	J[196] = 1.;

   /*** derivatives for constraint 4 ***/

	J[52] = -x[18];
	J[83] = -x[11];
	J[205] = 1.;

   /*** derivatives for constraint 5 ***/

	J[56] = -x[18];
	J[84] = -x[12];
	J[214] = 1.;

   /*** derivatives for constraint 6 ***/

	J[41] = -x[19];
	J[86] = -x[8];
	J[222] = 1.;

   /*** derivatives for constraint 7 ***/

	J[45] = -x[19];
	J[87] = -x[9];
	J[231] = 1.;

   /*** derivatives for constraint 8 ***/

	J[49] = -x[19];
	J[88] = -x[10];
	J[239] = 1.;

   /*** derivatives for constraint 9 ***/

	J[53] = -x[19];
	J[89] = -x[11];
	J[248] = 1.;

   /*** derivatives for constraint 10 ***/

	J[57] = -x[19];
	J[90] = -x[12];
	J[255] = 1.;

   /*** derivatives for constraint 11 ***/

	J[42] = -x[20];
	J[92] = -x[8];
	J[264] = 1.;

   /*** derivatives for constraint 12 ***/

	J[46] = -x[20];
	J[93] = -x[9];
	J[271] = 1.;

   /*** derivatives for constraint 13 ***/

	J[50] = -x[20];
	J[94] = -x[10];
	J[279] = 1.;

   /*** derivatives for constraint 14 ***/

	J[54] = -x[20];
	J[95] = -x[11];
	J[288] = 1.;

   /*** derivatives for constraint 15 ***/

	J[58] = -x[20];
	J[96] = -x[12];
	J[296] = 1.;

   /*** derivatives for constraint 16 ***/

	J[43] = -x[21];
	J[98] = -x[8];
	J[304] = 1.;

   /*** derivatives for constraint 17 ***/

	J[47] = -x[21];
	J[99] = -x[9];
	J[313] = 1.;

   /*** derivatives for constraint 18 ***/

	J[51] = -x[21];
	J[100] = -x[10];
	J[322] = 1.;

   /*** derivatives for constraint 19 ***/

	J[55] = -x[21];
	J[101] = -x[11];
	J[331] = 1.;

   /*** derivatives for constraint 20 ***/

	J[59] = -x[21];
	J[102] = -x[12];
	J[339] = 1.;

   /*** derivatives for constraint 21 ***/

	J[60] = -x[22];
	J[104] = -x[13];
	J[348] = 1.;

   /*** derivatives for constraint 22 ***/

	J[64] = -x[22];
	J[105] = -x[14];
	J[357] = 1.;

   /*** derivatives for constraint 23 ***/

	J[68] = -x[22];
	J[106] = -x[15];
	J[366] = 1.;

   /*** derivatives for constraint 24 ***/

	J[72] = -x[22];
	J[107] = -x[16];
	J[375] = 1.;

   /*** derivatives for constraint 25 ***/

	J[76] = -x[22];
	J[108] = -x[17];
	J[384] = 1.;

   /*** derivatives for constraint 26 ***/

	J[61] = -x[23];
	J[110] = -x[13];
	J[392] = 1.;

   /*** derivatives for constraint 27 ***/

	J[65] = -x[23];
	J[111] = -x[14];
	J[399] = 1.;

   /*** derivatives for constraint 28 ***/

	J[69] = -x[23];
	J[112] = -x[15];
	J[408] = 1.;

   /*** derivatives for constraint 29 ***/

	J[73] = -x[23];
	J[113] = -x[16];
	J[417] = 1.;

   /*** derivatives for constraint 30 ***/

	J[77] = -x[23];
	J[114] = -x[17];
	J[424] = 1.;

   /*** derivatives for constraint 31 ***/

	J[62] = -x[24];
	J[116] = -x[13];
	J[433] = 1.;

   /*** derivatives for constraint 32 ***/

	J[66] = -x[24];
	J[117] = -x[14];
	J[442] = 1.;

   /*** derivatives for constraint 33 ***/

	J[70] = -x[24];
	J[118] = -x[15];
	J[451] = 1.;

   /*** derivatives for constraint 34 ***/

	J[74] = -x[24];
	J[119] = -x[16];
	J[460] = 1.;

   /*** derivatives for constraint 35 ***/

	J[78] = -x[24];
	J[120] = -x[17];
	J[469] = 1.;

   /*** derivatives for constraint 36 ***/

	J[63] = -x[25];
	J[122] = -x[13];
	J[478] = 1.;

   /*** derivatives for constraint 37 ***/

	J[67] = -x[25];
	J[123] = -x[14];
	J[487] = 1.;

   /*** derivatives for constraint 38 ***/

	J[71] = -x[25];
	J[124] = -x[15];
	J[495] = 1.;

   /*** derivatives for constraint 39 ***/

	J[75] = -x[25];
	J[125] = -x[16];
	J[504] = 1.;

   /*** derivatives for constraint 40 ***/

	J[79] = -x[25];
	J[126] = -x[17];
	J[512] = 1.;

   /*** derivatives for constraint 41 ***/

	J[0] = -x[26];
	J[128] = -x[0];
	J[179] = 1.;

   /*** derivatives for constraint 42 ***/

	J[1] = -x[27];
	J[133] = -x[0];
	J[188] = 1.;

   /*** derivatives for constraint 43 ***/

	J[2] = -x[28];
	J[138] = -x[0];
	J[197] = 1.;

   /*** derivatives for constraint 44 ***/

	J[3] = -x[29];
	J[143] = -x[0];
	J[206] = 1.;

   /*** derivatives for constraint 45 ***/

	J[4] = -x[30];
	J[148] = -x[0];
	J[215] = 1.;

   /*** derivatives for constraint 46 ***/

	J[5] = -x[26];
	J[129] = -x[1];
	J[223] = 1.;

   /*** derivatives for constraint 47 ***/

	J[6] = -x[27];
	J[134] = -x[1];
	J[232] = 1.;

   /*** derivatives for constraint 48 ***/

	J[7] = -x[28];
	J[139] = -x[1];
	J[240] = 1.;

   /*** derivatives for constraint 49 ***/

	J[8] = -x[29];
	J[144] = -x[1];
	J[249] = 1.;

   /*** derivatives for constraint 50 ***/

	J[9] = -x[30];
	J[149] = -x[1];
	J[256] = 1.;

   /*** derivatives for constraint 51 ***/

	J[10] = -x[26];
	J[130] = -x[2];
	J[265] = 1.;

   /*** derivatives for constraint 52 ***/

	J[11] = -x[27];
	J[135] = -x[2];
	J[272] = 1.;

   /*** derivatives for constraint 53 ***/

	J[12] = -x[28];
	J[140] = -x[2];
	J[280] = 1.;

   /*** derivatives for constraint 54 ***/

	J[13] = -x[29];
	J[145] = -x[2];
	J[289] = 1.;

   /*** derivatives for constraint 55 ***/

	J[14] = -x[30];
	J[150] = -x[2];
	J[297] = 1.;

   /*** derivatives for constraint 56 ***/

	J[15] = -x[26];
	J[131] = -x[3];
	J[305] = 1.;

   /*** derivatives for constraint 57 ***/

	J[16] = -x[27];
	J[136] = -x[3];
	J[314] = 1.;

   /*** derivatives for constraint 58 ***/

	J[17] = -x[28];
	J[141] = -x[3];
	J[323] = 1.;

   /*** derivatives for constraint 59 ***/

	J[18] = -x[29];
	J[146] = -x[3];
	J[332] = 1.;

   /*** derivatives for constraint 60 ***/

	J[19] = -x[30];
	J[151] = -x[3];
	J[340] = 1.;

   /*** derivatives for constraint 61 ***/

	J[20] = -x[31];
	J[153] = -x[4];
	J[349] = 1.;

   /*** derivatives for constraint 62 ***/

	J[21] = -x[32];
	J[158] = -x[4];
	J[358] = 1.;

   /*** derivatives for constraint 63 ***/

	J[22] = -x[33];
	J[163] = -x[4];
	J[367] = 1.;

   /*** derivatives for constraint 64 ***/

	J[23] = -x[34];
	J[168] = -x[4];
	J[376] = 1.;

   /*** derivatives for constraint 65 ***/

	J[24] = -x[35];
	J[173] = -x[4];
	J[385] = 1.;

   /*** derivatives for constraint 66 ***/

	J[25] = -x[31];
	J[154] = -x[5];
	J[393] = 1.;

   /*** derivatives for constraint 67 ***/

	J[26] = -x[32];
	J[159] = -x[5];
	J[400] = 1.;

   /*** derivatives for constraint 68 ***/

	J[27] = -x[33];
	J[164] = -x[5];
	J[409] = 1.;

   /*** derivatives for constraint 69 ***/

	J[28] = -x[34];
	J[169] = -x[5];
	J[418] = 1.;

   /*** derivatives for constraint 70 ***/

	J[29] = -x[35];
	J[174] = -x[5];
	J[425] = 1.;

   /*** derivatives for constraint 71 ***/

	J[30] = -x[31];
	J[155] = -x[6];
	J[434] = 1.;

   /*** derivatives for constraint 72 ***/

	J[31] = -x[32];
	J[160] = -x[6];
	J[443] = 1.;

   /*** derivatives for constraint 73 ***/

	J[32] = -x[33];
	J[165] = -x[6];
	J[452] = 1.;

   /*** derivatives for constraint 74 ***/

	J[33] = -x[34];
	J[170] = -x[6];
	J[461] = 1.;

   /*** derivatives for constraint 75 ***/

	J[34] = -x[35];
	J[175] = -x[6];
	J[470] = 1.;

   /*** derivatives for constraint 76 ***/

	J[35] = -x[31];
	J[156] = -x[7];
	J[479] = 1.;

   /*** derivatives for constraint 77 ***/

	J[36] = -x[32];
	J[161] = -x[7];
	J[488] = 1.;

   /*** derivatives for constraint 78 ***/

	J[37] = -x[33];
	J[166] = -x[7];
	J[496] = 1.;

   /*** derivatives for constraint 79 ***/

	J[38] = -x[34];
	J[171] = -x[7];
	J[505] = 1.;

   /*** derivatives for constraint 80 ***/

	J[39] = -x[35];
	J[176] = -x[7];
	J[513] = 1.;

   /*** derivatives for constraint 81 ***/

	J[180] = 1.;
	J[189] = 1.;
	J[198] = 1.;
	J[207] = 1.;
	J[216] = 1.;

   /*** derivatives for constraint 82 ***/

	J[224] = 1.;
	J[233] = 1.;
	J[241] = 1.;
	J[250] = 1.;
	J[257] = 1.;

   /*** derivatives for constraint 83 ***/

	J[266] = 1.;
	J[273] = 1.;
	J[281] = 1.;
	J[290] = 1.;
	J[298] = 1.;

   /*** derivatives for constraint 84 ***/

	J[306] = 1.;
	J[315] = 1.;
	J[324] = 1.;
	J[333] = 1.;
	J[341] = 1.;

   /*** derivatives for constraint 85 ***/

	J[350] = 1.;
	J[359] = 1.;
	J[368] = 1.;
	J[377] = 1.;
	J[386] = 1.;

   /*** derivatives for constraint 86 ***/

	J[394] = 1.;
	J[401] = 1.;
	J[410] = 1.;
	J[419] = 1.;
	J[426] = 1.;

   /*** derivatives for constraint 87 ***/

	J[435] = 1.;
	J[444] = 1.;
	J[453] = 1.;
	J[462] = 1.;
	J[471] = 1.;

   /*** derivatives for constraint 88 ***/

	J[480] = 1.;
	J[489] = 1.;
	J[497] = 1.;
	J[506] = 1.;
	J[514] = 1.;

   /*** derivatives for constraint 89 ***/

	J[181] = 1.;
	J[190] = 1.;
	J[199] = 1.;
	J[208] = 1.;
	J[217] = 1.;
	J[225] = 1.;
	J[234] = 1.;
	J[242] = 1.;
	J[251] = 1.;
	J[258] = 1.;
	J[267] = 1.;
	J[274] = 1.;
	J[282] = 1.;
	J[291] = 1.;
	J[299] = 1.;
	J[307] = 1.;
	J[316] = 1.;
	J[325] = 1.;
	J[334] = 1.;
	J[342] = 1.;

   /*** derivatives for constraint 90 ***/

	J[351] = 1.;
	J[360] = 1.;
	J[369] = 1.;
	J[378] = 1.;
	J[387] = 1.;
	J[395] = 1.;
	J[402] = 1.;
	J[411] = 1.;
	J[420] = 1.;
	J[427] = 1.;
	J[436] = 1.;
	J[445] = 1.;
	J[454] = 1.;
	J[463] = 1.;
	J[472] = 1.;
	J[481] = 1.;
	J[490] = 1.;
	J[498] = 1.;
	J[507] = 1.;
	J[515] = 1.;

   /*** derivatives for constraint 91 ***/

	J[182] = 1.;
	J[226] = 1.;
	J[268] = 1.;
	J[308] = 1.;
	J[352] = 1.;
	J[396] = 1.;
	J[437] = 1.;
	J[482] = 1.;

   /*** derivatives for constraint 92 ***/

	J[191] = 1.;
	J[235] = 1.;
	J[275] = 1.;
	J[317] = 1.;
	J[361] = 1.;
	J[403] = 1.;
	J[446] = 1.;
	J[491] = 1.;

   /*** derivatives for constraint 93 ***/

	J[200] = 1.;
	J[243] = 1.;
	J[283] = 1.;
	J[326] = 1.;
	J[370] = 1.;
	J[412] = 1.;
	J[455] = 1.;
	J[499] = 1.;

   /*** derivatives for constraint 94 ***/

	J[209] = 1.;
	J[252] = 1.;
	J[292] = 1.;
	J[335] = 1.;
	J[379] = 1.;
	J[421] = 1.;
	J[464] = 1.;
	J[508] = 1.;

   /*** derivatives for constraint 95 ***/

	J[218] = 1.;
	J[259] = 1.;
	J[300] = 1.;
	J[343] = 1.;
	J[388] = 1.;
	J[428] = 1.;
	J[473] = 1.;
	J[516] = 1.;

   /*** derivatives for constraint 96 ***/

	J[183] = -0.7;
	J[227] = 0.2;
	J[309] = 0.3;
	J[353] = 0.4;
	J[438] = 0.3;
	J[483] = 0.2;

   /*** derivatives for constraint 97 ***/

	J[184] = 0.2;
	J[228] = 0.1;
	J[269] = 0.2;
	J[310] = -0.5;
	J[354] = 0.1;
	J[397] = -0.6;
	J[439] = -0.2;
	J[484] = -0.0999999999999999;

   /*** derivatives for constraint 98 ***/

	J[185] = -0.0999999999999999;
	J[229] = 0.3;
	J[311] = 0.3;
	J[355] = 0.2;
	J[440] = 0.1;
	J[485] = -0.2;

   /*** derivatives for constraint 99 ***/

	J[186] = -0.7;
	J[230] = -0.0999999999999999;
	J[270] = -0.3;
	J[312] = -0.4;
	J[356] = 0.3;
	J[398] = 0.3;
	J[441] = -0.2;
	J[486] = -0.0999999999999999;

   /*** derivatives for constraint 100 ***/

	J[192] = -0.9;
	J[276] = -0.2;
	J[318] = 0.1;
	J[362] = 0.2;
	J[404] = -0.2;
	J[447] = 0.1;

   /*** derivatives for constraint 101 ***/

	J[193] = 0.6;
	J[236] = 0.5;
	J[277] = 0.6;
	J[319] = -0.1;
	J[363] = 0.5;
	J[405] = -0.2;
	J[448] = 0.2;
	J[492] = 0.3;

   /*** derivatives for constraint 102 ***/

	J[194] = -0.5;
	J[237] = -0.1;
	J[278] = -0.4;
	J[320] = -0.1;
	J[364] = -0.2;
	J[406] = -0.4;
	J[449] = -0.3;
	J[493] = -0.6;

   /*** derivatives for constraint 103 ***/

	J[195] = -0.4;
	J[238] = 0.2;
	J[321] = -0.0999999999999999;
	J[365] = 0.6;
	J[407] = 0.6;
	J[450] = 0.1;
	J[494] = 0.2;

   /*** derivatives for constraint 104 ***/

	J[201] = -0.8;
	J[244] = 0.0999999999999999;
	J[284] = -0.1;
	J[327] = 0.2;
	J[371] = 0.3;
	J[413] = -0.1;
	J[456] = 0.2;
	J[500] = 0.0999999999999999;

   /*** derivatives for constraint 105 ***/

	J[202] = 0.6;
	J[245] = 0.5;
	J[285] = 0.6;
	J[328] = -0.1;
	J[372] = 0.5;
	J[414] = -0.2;
	J[457] = 0.2;
	J[501] = 0.3;

   /*** derivatives for constraint 106 ***/

	J[203] = -0.6;
	J[246] = -0.2;
	J[286] = -0.5;
	J[329] = -0.2;
	J[373] = -0.3;
	J[415] = -0.5;
	J[458] = -0.4;
	J[502] = -0.7;

   /*** derivatives for constraint 107 ***/

	J[204] = -0.9;
	J[247] = -0.3;
	J[287] = -0.5;
	J[330] = -0.6;
	J[374] = 0.1;
	J[416] = 0.1;
	J[459] = -0.4;
	J[503] = -0.3;

   /*** derivatives for constraint 108 ***/

	J[210] = -0.7;
	J[253] = 0.2;
	J[336] = 0.3;
	J[380] = 0.4;
	J[465] = 0.3;
	J[509] = 0.2;

   /*** derivatives for constraint 109 ***/

	J[211] = 0.8;
	J[254] = 0.7;
	J[293] = 0.8;
	J[337] = 0.0999999999999999;
	J[381] = 0.7;
	J[466] = 0.4;
	J[510] = 0.5;

   /*** derivatives for constraint 110 ***/

	J[212] = -0.4;
	J[294] = -0.3;
	J[382] = -0.0999999999999999;
	J[422] = -0.3;
	J[467] = -0.2;
	J[511] = -0.5;

   /*** derivatives for constraint 111 ***/

	J[213] = -0.6;
	J[295] = -0.2;
	J[338] = -0.3;
	J[383] = 0.4;
	J[423] = 0.4;
	J[468] = -0.1;

   /*** derivatives for constraint 112 ***/

	J[219] = -1.1;
	J[260] = -0.2;
	J[301] = -0.4;
	J[344] = -0.1;
	J[429] = -0.4;
	J[474] = -0.1;
	J[517] = -0.2;

   /*** derivatives for constraint 113 ***/

	J[261] = -0.0999999999999999;
	J[345] = -0.7;
	J[389] = -0.0999999999999999;
	J[430] = -0.8;
	J[475] = -0.4;
	J[518] = -0.3;

   /*** derivatives for constraint 114 ***/

	J[220] = -0.7;
	J[262] = -0.3;
	J[302] = -0.6;
	J[346] = -0.3;
	J[390] = -0.4;
	J[431] = -0.6;
	J[476] = -0.5;
	J[519] = -0.8;

   /*** derivatives for constraint 115 ***/

	J[221] = -1.5;
	J[263] = -0.9;
	J[303] = -1.1;
	J[347] = -1.2;
	J[391] = -0.5;
	J[432] = -0.5;
	J[477] = -1.;
	J[520] = -0.9;

   /*** derivatives for constraint 116 ***/

	J[85] = 1.;
	J[91] = 1.;
	J[97] = 1.;
	J[103] = 1.;

   /*** derivatives for constraint 117 ***/

	J[109] = 1.;
	J[115] = 1.;
	J[121] = 1.;
	J[127] = 1.;

   /*** derivatives for constraint 118 ***/

	J[132] = 1.;
	J[137] = 1.;
	J[142] = 1.;
	J[147] = 1.;
	J[152] = 1.;

   /*** derivatives for constraint 119 ***/

	J[157] = 1.;
	J[162] = 1.;
	J[167] = 1.;
	J[172] = 1.;
	J[177] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
