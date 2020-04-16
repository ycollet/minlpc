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
 fint bchoco06_auxcom_[1] = { 47 /* nlc */ };
 fint bchoco06_funcom_[581] = {
	118 /* nvar */,
	1 /* nobj */,
	134 /* ncon */,
	456 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	8,
	12,
	17,
	23,
	29,
	35,
	41,
	47,
	52,
	58,
	64,
	71,
	78,
	85,
	92,
	96,
	103,
	106,
	109,
	112,
	119,
	122,
	125,
	128,
	135,
	138,
	141,
	144,
	148,
	150,
	152,
	154,
	159,
	168,
	171,
	174,
	177,
	180,
	189,
	192,
	195,
	198,
	201,
	210,
	213,
	216,
	219,
	222,
	231,
	234,
	237,
	240,
	243,
	252,
	255,
	258,
	261,
	264,
	269,
	271,
	273,
	275,
	277,
	286,
	291,
	297,
	304,
	311,
	318,
	325,
	332,
	334,
	337,
	341,
	345,
	349,
	353,
	357,
	361,
	365,
	367,
	369,
	371,
	373,
	375,
	377,
	379,
	381,
	383,
	385,
	387,
	389,
	391,
	393,
	395,
	397,
	399,
	401,
	403,
	404,
	405,
	406,
	407,
	409,
	411,
	413,
	415,
	416,
	417,
	418,
	419,
	420,
	425,
	431,
	437,
	444,
	451,
	457,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	82,
	84,
	1,
	2,
	3,
	84,
	85,
	2,
	3,
	4,
	84,
	85,
	86,
	3,
	4,
	5,
	85,
	86,
	87,
	4,
	5,
	6,
	86,
	87,
	88,
	5,
	6,
	7,
	87,
	88,
	89,
	6,
	7,
	83,
	88,
	89,
	90,
	46,
	47,
	62,
	69,
	91,
	45,
	46,
	47,
	63,
	70,
	92,
	45,
	46,
	47,
	64,
	71,
	93,
	44,
	45,
	46,
	47,
	65,
	72,
	94,
	44,
	45,
	46,
	47,
	66,
	73,
	95,
	44,
	45,
	46,
	47,
	67,
	74,
	96,
	44,
	45,
	46,
	47,
	68,
	75,
	97,
	8,
	9,
	10,
	107,
	8,
	9,
	10,
	11,
	12,
	13,
	111,
	8,
	11,
	112,
	9,
	12,
	113,
	10,
	13,
	114,
	8,
	11,
	12,
	13,
	14,
	15,
	16,
	9,
	11,
	14,
	10,
	12,
	15,
	13,
	16,
	115,
	11,
	14,
	15,
	16,
	17,
	18,
	19,
	12,
	14,
	17,
	13,
	15,
	18,
	16,
	19,
	116,
	14,
	17,
	18,
	19,
	15,
	17,
	16,
	18,
	19,
	117,
	20,
	21,
	22,
	23,
	119,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	124,
	20,
	24,
	125,
	21,
	25,
	126,
	22,
	26,
	127,
	23,
	27,
	128,
	20,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	21,
	24,
	28,
	22,
	25,
	29,
	23,
	26,
	30,
	27,
	31,
	129,
	24,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	25,
	28,
	32,
	26,
	29,
	33,
	27,
	30,
	34,
	31,
	35,
	130,
	28,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	29,
	32,
	36,
	30,
	33,
	37,
	31,
	34,
	38,
	35,
	39,
	131,
	32,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	33,
	36,
	40,
	34,
	37,
	41,
	35,
	38,
	42,
	39,
	43,
	132,
	36,
	40,
	41,
	42,
	43,
	37,
	40,
	38,
	41,
	39,
	42,
	43,
	133,
	45,
	46,
	47,
	53,
	60,
	67,
	74,
	80,
	81,
	2,
	48,
	55,
	82,
	91,
	1,
	3,
	49,
	56,
	91,
	92,
	2,
	4,
	50,
	57,
	91,
	92,
	93,
	3,
	5,
	51,
	58,
	92,
	93,
	94,
	4,
	6,
	52,
	59,
	93,
	94,
	95,
	5,
	7,
	53,
	60,
	94,
	95,
	96,
	6,
	54,
	61,
	83,
	95,
	96,
	97,
	82,
	98,
	1,
	98,
	99,
	2,
	98,
	99,
	100,
	3,
	99,
	100,
	101,
	4,
	100,
	101,
	102,
	5,
	101,
	102,
	103,
	6,
	102,
	103,
	104,
	7,
	103,
	104,
	105,
	83,
	104,
	105,
	106,
	84,
	110,
	85,
	113,
	86,
	109,
	87,
	112,
	88,
	108,
	89,
	111,
	90,
	107,
	98,
	123,
	99,
	127,
	100,
	122,
	101,
	126,
	102,
	121,
	103,
	125,
	104,
	120,
	105,
	124,
	106,
	119,
	8,
	108,
	9,
	109,
	10,
	110,
	17,
	18,
	19,
	118,
	20,
	120,
	21,
	121,
	22,
	122,
	23,
	123,
	40,
	41,
	42,
	43,
	134,
	48,
	55,
	62,
	69,
	76,
	49,
	56,
	63,
	70,
	76,
	77,
	50,
	57,
	64,
	71,
	77,
	78,
	47,
	51,
	58,
	65,
	72,
	78,
	79,
	46,
	52,
	59,
	66,
	73,
	79,
	80,
	44,
	54,
	61,
	68,
	75,
	81 };

 real bchoco06_boundc_[1+236+268] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.95,
		1.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
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
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		0.,
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
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real bchoco06_x0comn_[118] = {
		0.95,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.001,
		0.001,
		0.001,
		0.001,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		1.e-05,
		0.,
		0.,
		0.,
		0.001,
		0.001,
		0.001,
		0.001,
		1.e-05,
		0.,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real bchoco06_pd[172];
static real bchoco06_old_x[118];
static int bchoco06_xkind = -1;

 static int
bchoco06_xcheck(real *x)
{
	real *x1 = bchoco06_old_x, *xe = x + 118;
	errno = 0;
	if (bchoco06_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	bchoco06_xkind = 0;
	return 1;
	}
 real
bchoco06_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (bchoco06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	}

	return rv;
}

 void
bchoco06_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7], dv[16];
	real t1;
	fint wantfg = *needfg;
	if (bchoco06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	bchoco06_pd[0] = 2.e+07 * x[0];
	v[0] = bchoco06_pd[0] * x[1];
	t1 = v[0] + -1.e+07*x[2];
	t1 += 1.e+07*x[65];
	t1 += x[72];
	c[0] = t1;

  /***  constraint 2  ***/

	bchoco06_pd[1] = 2.e+06 * x[0];
	v[0] = bchoco06_pd[1] * x[2];
	t1 = v[0] + -1.e+06*x[1];
	t1 += -1.e+06*x[3];
	t1 += -1.e+06*x[64];
	t1 += 1.e+06*x[66];
	t1 += x[73];
	c[1] = t1;

  /***  constraint 3  ***/

	bchoco06_pd[2] = 200000. * x[0];
	v[0] = bchoco06_pd[2] * x[3];
	t1 = v[0] + -100000.*x[2];
	t1 += -100000.*x[4];
	t1 += -100000.*x[65];
	t1 += 100000.*x[67];
	t1 += x[74];
	c[2] = t1;

  /***  constraint 4  ***/

	bchoco06_pd[3] = 20000. * x[0];
	v[0] = bchoco06_pd[3] * x[4];
	t1 = v[0] + -10000.*x[3];
	t1 += -10000.*x[5];
	t1 += -10000.*x[66];
	t1 += 10000.*x[68];
	t1 += x[75];
	c[3] = t1;

  /***  constraint 5  ***/

	bchoco06_pd[4] = 2000. * x[0];
	v[0] = bchoco06_pd[4] * x[5];
	t1 = v[0] + -1000.*x[4];
	t1 += -1000.*x[6];
	t1 += -1000.*x[67];
	t1 += 1000.*x[69];
	t1 += x[76];
	c[4] = t1;

  /***  constraint 6  ***/

	bchoco06_pd[5] = 200. * x[0];
	v[0] = bchoco06_pd[5] * x[6];
	t1 = v[0] + -100.*x[5];
	t1 += -100.*x[7];
	t1 += -100.*x[68];
	t1 += 100.*x[70];
	t1 += x[77];
	c[5] = t1;

  /***  constraint 7  ***/

	bchoco06_pd[6] = 20. * x[0];
	v[0] = bchoco06_pd[6] * x[7];
	t1 = v[0] + -10.*x[6];
	t1 += -10.*x[69];
	t1 += x[78];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[15] * x[17];
	if (x[16] == 0.) {
	zerdiv_(&x[16]);	}
	v[1] = v[0] / x[16];
	bchoco06_pd[7] = 1. / x[16];
	bchoco06_pd[8] = -v[1] * bchoco06_pd[7];
	t1 = v[1] + x[20];
	t1 += -x[96];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[15] * x[18];
	if (x[16] == 0.) {
	zerdiv_(&x[16]);	}
	v[1] = v[0] / x[16];
	bchoco06_pd[9] = 1. / x[16];
	bchoco06_pd[10] = -v[1] * bchoco06_pd[9];
	t1 = v[1] + x[21];
	t1 += -x[97];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[15] * x[19];
	if (x[16] == 0.) {
	zerdiv_(&x[16]);	}
	v[1] = v[0] / x[16];
	bchoco06_pd[11] = 1. / x[16];
	bchoco06_pd[12] = -v[1] * bchoco06_pd[11];
	t1 = v[1] + x[22];
	t1 += -x[98];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[16] * x[21];
	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	v[1] = v[0] / x[20];
	bchoco06_pd[13] = 1. / x[20];
	bchoco06_pd[14] = -v[1] * bchoco06_pd[13];
	t1 = v[1] + -x[17];
	t1 += x[24];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[16] * x[22];
	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	v[1] = v[0] / x[20];
	bchoco06_pd[15] = 1. / x[20];
	bchoco06_pd[16] = -v[1] * bchoco06_pd[15];
	t1 = v[1] + -x[18];
	t1 += x[25];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[16] * x[23];
	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	v[1] = v[0] / x[20];
	bchoco06_pd[17] = 1. / x[20];
	bchoco06_pd[18] = -v[1] * bchoco06_pd[17];
	t1 = v[1] + -x[19];
	t1 += x[26];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[20] * x[25];
	if (x[24] == 0.) {
	zerdiv_(&x[24]);	}
	v[1] = v[0] / x[24];
	bchoco06_pd[19] = 1. / x[24];
	bchoco06_pd[20] = -v[1] * bchoco06_pd[19];
	t1 = v[1] + -x[21];
	t1 += x[28];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[20] * x[26];
	if (x[24] == 0.) {
	zerdiv_(&x[24]);	}
	v[1] = v[0] / x[24];
	bchoco06_pd[21] = 1. / x[24];
	bchoco06_pd[22] = -v[1] * bchoco06_pd[21];
	t1 = v[1] + -x[22];
	t1 += x[29];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[20] * x[27];
	if (x[24] == 0.) {
	zerdiv_(&x[24]);	}
	v[1] = v[0] / x[24];
	bchoco06_pd[23] = 1. / x[24];
	bchoco06_pd[24] = -v[1] * bchoco06_pd[23];
	t1 = v[1] + -x[23];
	t1 += x[30];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[24] * x[29];
	if (x[28] == 0.) {
	zerdiv_(&x[28]);	}
	v[1] = v[0] / x[28];
	bchoco06_pd[25] = 1. / x[28];
	bchoco06_pd[26] = -v[1] * bchoco06_pd[25];
	t1 = v[1] + -x[25];
	t1 += x[99];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[24] * x[30];
	if (x[28] == 0.) {
	zerdiv_(&x[28]);	}
	v[1] = v[0] / x[28];
	bchoco06_pd[27] = 1. / x[28];
	bchoco06_pd[28] = -v[1] * bchoco06_pd[27];
	t1 = v[1] + -x[26];
	t1 += x[100];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[24] * x[31];
	if (x[28] == 0.) {
	zerdiv_(&x[28]);	}
	v[1] = v[0] / x[28];
	bchoco06_pd[29] = 1. / x[28];
	bchoco06_pd[30] = -v[1] * bchoco06_pd[29];
	t1 = v[1] + -x[27];
	t1 += x[101];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[32] * x[34];
	if (x[33] == 0.) {
	zerdiv_(&x[33]);	}
	v[1] = v[0] / x[33];
	bchoco06_pd[31] = 1. / x[33];
	bchoco06_pd[32] = -v[1] * bchoco06_pd[31];
	t1 = v[1] + x[38];
	t1 += -x[103];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[32] * x[35];
	if (x[33] == 0.) {
	zerdiv_(&x[33]);	}
	v[1] = v[0] / x[33];
	bchoco06_pd[33] = 1. / x[33];
	bchoco06_pd[34] = -v[1] * bchoco06_pd[33];
	t1 = v[1] + x[39];
	t1 += -x[104];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[32] * x[36];
	if (x[33] == 0.) {
	zerdiv_(&x[33]);	}
	v[1] = v[0] / x[33];
	bchoco06_pd[35] = 1. / x[33];
	bchoco06_pd[36] = -v[1] * bchoco06_pd[35];
	t1 = v[1] + x[40];
	t1 += -x[105];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[32] * x[37];
	if (x[33] == 0.) {
	zerdiv_(&x[33]);	}
	v[1] = v[0] / x[33];
	bchoco06_pd[37] = 1. / x[33];
	bchoco06_pd[38] = -v[1] * bchoco06_pd[37];
	t1 = v[1] + x[41];
	t1 += -x[106];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[33] * x[39];
	if (x[38] == 0.) {
	zerdiv_(&x[38]);	}
	v[1] = v[0] / x[38];
	bchoco06_pd[39] = 1. / x[38];
	bchoco06_pd[40] = -v[1] * bchoco06_pd[39];
	t1 = v[1] + -x[34];
	t1 += x[43];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[33] * x[40];
	if (x[38] == 0.) {
	zerdiv_(&x[38]);	}
	v[1] = v[0] / x[38];
	bchoco06_pd[41] = 1. / x[38];
	bchoco06_pd[42] = -v[1] * bchoco06_pd[41];
	t1 = v[1] + -x[35];
	t1 += x[44];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[33] * x[41];
	if (x[38] == 0.) {
	zerdiv_(&x[38]);	}
	v[1] = v[0] / x[38];
	bchoco06_pd[43] = 1. / x[38];
	bchoco06_pd[44] = -v[1] * bchoco06_pd[43];
	t1 = v[1] + -x[36];
	t1 += x[45];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[33] * x[42];
	if (x[38] == 0.) {
	zerdiv_(&x[38]);	}
	v[1] = v[0] / x[38];
	bchoco06_pd[45] = 1. / x[38];
	bchoco06_pd[46] = -v[1] * bchoco06_pd[45];
	t1 = v[1] + -x[37];
	t1 += x[46];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[38] * x[44];
	if (x[43] == 0.) {
	zerdiv_(&x[43]);	}
	v[1] = v[0] / x[43];
	bchoco06_pd[47] = 1. / x[43];
	bchoco06_pd[48] = -v[1] * bchoco06_pd[47];
	t1 = v[1] + -x[39];
	t1 += x[48];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[38] * x[45];
	if (x[43] == 0.) {
	zerdiv_(&x[43]);	}
	v[1] = v[0] / x[43];
	bchoco06_pd[49] = 1. / x[43];
	bchoco06_pd[50] = -v[1] * bchoco06_pd[49];
	t1 = v[1] + -x[40];
	t1 += x[49];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[38] * x[46];
	if (x[43] == 0.) {
	zerdiv_(&x[43]);	}
	v[1] = v[0] / x[43];
	bchoco06_pd[51] = 1. / x[43];
	bchoco06_pd[52] = -v[1] * bchoco06_pd[51];
	t1 = v[1] + -x[41];
	t1 += x[50];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[38] * x[47];
	if (x[43] == 0.) {
	zerdiv_(&x[43]);	}
	v[1] = v[0] / x[43];
	bchoco06_pd[53] = 1. / x[43];
	bchoco06_pd[54] = -v[1] * bchoco06_pd[53];
	t1 = v[1] + -x[42];
	t1 += x[51];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[43] * x[49];
	if (x[48] == 0.) {
	zerdiv_(&x[48]);	}
	v[1] = v[0] / x[48];
	bchoco06_pd[55] = 1. / x[48];
	bchoco06_pd[56] = -v[1] * bchoco06_pd[55];
	t1 = v[1] + -x[44];
	t1 += x[53];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[43] * x[50];
	if (x[48] == 0.) {
	zerdiv_(&x[48]);	}
	v[1] = v[0] / x[48];
	bchoco06_pd[57] = 1. / x[48];
	bchoco06_pd[58] = -v[1] * bchoco06_pd[57];
	t1 = v[1] + -x[45];
	t1 += x[54];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[43] * x[51];
	if (x[48] == 0.) {
	zerdiv_(&x[48]);	}
	v[1] = v[0] / x[48];
	bchoco06_pd[59] = 1. / x[48];
	bchoco06_pd[60] = -v[1] * bchoco06_pd[59];
	t1 = v[1] + -x[46];
	t1 += x[55];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[43] * x[52];
	if (x[48] == 0.) {
	zerdiv_(&x[48]);	}
	v[1] = v[0] / x[48];
	bchoco06_pd[61] = 1. / x[48];
	bchoco06_pd[62] = -v[1] * bchoco06_pd[61];
	t1 = v[1] + -x[47];
	t1 += x[56];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[48] * x[54];
	if (x[53] == 0.) {
	zerdiv_(&x[53]);	}
	v[1] = v[0] / x[53];
	bchoco06_pd[63] = 1. / x[53];
	bchoco06_pd[64] = -v[1] * bchoco06_pd[63];
	t1 = v[1] + -x[49];
	t1 += x[58];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[48] * x[55];
	if (x[53] == 0.) {
	zerdiv_(&x[53]);	}
	v[1] = v[0] / x[53];
	bchoco06_pd[65] = 1. / x[53];
	bchoco06_pd[66] = -v[1] * bchoco06_pd[65];
	t1 = v[1] + -x[50];
	t1 += x[59];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[48] * x[56];
	if (x[53] == 0.) {
	zerdiv_(&x[53]);	}
	v[1] = v[0] / x[53];
	bchoco06_pd[67] = 1. / x[53];
	bchoco06_pd[68] = -v[1] * bchoco06_pd[67];
	t1 = v[1] + -x[51];
	t1 += x[60];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[48] * x[57];
	if (x[53] == 0.) {
	zerdiv_(&x[53]);	}
	v[1] = v[0] / x[53];
	bchoco06_pd[69] = 1. / x[53];
	bchoco06_pd[70] = -v[1] * bchoco06_pd[69];
	t1 = v[1] + -x[52];
	t1 += x[61];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[53] * x[59];
	if (x[58] == 0.) {
	zerdiv_(&x[58]);	}
	v[1] = v[0] / x[58];
	bchoco06_pd[71] = 1. / x[58];
	bchoco06_pd[72] = -v[1] * bchoco06_pd[71];
	t1 = v[1] + -x[54];
	t1 += x[107];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[53] * x[60];
	if (x[58] == 0.) {
	zerdiv_(&x[58]);	}
	v[1] = v[0] / x[58];
	bchoco06_pd[73] = 1. / x[58];
	bchoco06_pd[74] = -v[1] * bchoco06_pd[73];
	t1 = v[1] + -x[55];
	t1 += x[108];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[53] * x[61];
	if (x[58] == 0.) {
	zerdiv_(&x[58]);	}
	v[1] = v[0] / x[58];
	bchoco06_pd[75] = 1. / x[58];
	bchoco06_pd[76] = -v[1] * bchoco06_pd[75];
	t1 = v[1] + -x[56];
	t1 += x[109];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[53] * x[62];
	if (x[58] == 0.) {
	zerdiv_(&x[58]);	}
	v[1] = v[0] / x[58];
	bchoco06_pd[77] = 1. / x[58];
	bchoco06_pd[78] = -v[1] * bchoco06_pd[77];
	t1 = v[1] + -x[57];
	t1 += x[110];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = x[12] * x[13];
	v[1] = x[11] * x[14];
	v[2] = v[0] - v[1];
	t1 = v[2] + -1.e-05*x[117];
	c[43] = t1;

  /***  constraint 45  ***/

	bchoco06_pd[79] = x[11] * x[12];
	v[0] = bchoco06_pd[79] * x[13];
	bchoco06_pd[80] = x[11] * x[11];
	v[1] = bchoco06_pd[80] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco06_pd[81] = x[9] * x[13];
	v[2] = bchoco06_pd[81] * x[14];
	v[0] += v[2];
	bchoco06_pd[82] = x[10] * x[13];
	v[2] = bchoco06_pd[82] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -1.e-05*x[63];
	c[44] = t1;

  /***  constraint 46  ***/

	bchoco06_pd[83] = x[10] * x[11];
	bchoco06_pd[84] = bchoco06_pd[83] * x[12];
	v[0] = bchoco06_pd[84] * x[13];
	bchoco06_pd[85] = x[11] * x[11];
	bchoco06_pd[86] = x[11] + x[11];
	bchoco06_pd[87] = bchoco06_pd[85] * x[10];
	v[1] = bchoco06_pd[87] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco06_pd[88] = x[10] * x[10];
	bchoco06_pd[89] = x[10] + x[10];
	bchoco06_pd[90] = x[13] * x[13];
	bchoco06_pd[91] = x[13] + x[13];
	v[2] = bchoco06_pd[88] * bchoco06_pd[90];
	v[1] = -v[2];
	v[0] += v[1];
	bchoco06_pd[92] = 2. * x[9];
	bchoco06_pd[93] = bchoco06_pd[92] * x[10];
	bchoco06_pd[94] = bchoco06_pd[93] * x[13];
	v[1] = bchoco06_pd[94] * x[14];
	v[0] += v[1];
	bchoco06_pd[95] = x[9] * x[9];
	bchoco06_pd[96] = x[9] + x[9];
	bchoco06_pd[97] = x[14] * x[14];
	bchoco06_pd[98] = x[14] + x[14];
	v[1] = bchoco06_pd[95] * bchoco06_pd[97];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco06_pd[99] = x[9] * x[11];
	bchoco06_pd[100] = bchoco06_pd[99] * x[12];
	v[2] = bchoco06_pd[100] * x[14];
	v[0] += v[2];
	bchoco06_pd[101] = x[12] * x[12];
	bchoco06_pd[102] = x[12] + x[12];
	bchoco06_pd[103] = bchoco06_pd[101] * x[9];
	v[2] = bchoco06_pd[103] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	bchoco06_pd[104] = x[8] * x[12];
	bchoco06_pd[105] = x[13] * x[13];
	bchoco06_pd[106] = x[13] + x[13];
	v[1] = bchoco06_pd[104] * bchoco06_pd[105];
	v[0] += v[1];
	bchoco06_pd[107] = x[8] * x[11];
	bchoco06_pd[108] = bchoco06_pd[107] * x[13];
	v[1] = bchoco06_pd[108] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[10] * x[11];
	v[1] = x[9] * x[12];
	bchoco06_pd[110] = v[2] - v[1];
	bchoco06_pd[109] = 1. - x[63];
	v[2] = bchoco06_pd[110] * bchoco06_pd[109];
	v[0] += v[2];
	t1 = v[0] + -1.e-05*x[116];
	c[45] = t1;

  /***  constraint 47  ***/

	bchoco06_pd[111] = x[9] * x[10];
	bchoco06_pd[112] = bchoco06_pd[111] * x[11];
	bchoco06_pd[113] = bchoco06_pd[112] * x[12];
	v[0] = bchoco06_pd[113] * x[13];
	bchoco06_pd[114] = x[9] * x[10];
	bchoco06_pd[115] = x[11] * x[11];
	bchoco06_pd[116] = x[11] + x[11];
	bchoco06_pd[117] = bchoco06_pd[114] * bchoco06_pd[115];
	v[1] = bchoco06_pd[117] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco06_pd[118] = x[9] * x[9];
	bchoco06_pd[119] = x[9] + x[9];
	bchoco06_pd[120] = 2. * bchoco06_pd[118];
	bchoco06_pd[121] = bchoco06_pd[120] * x[10];
	bchoco06_pd[122] = bchoco06_pd[121] * x[13];
	v[2] = bchoco06_pd[122] * x[14];
	v[0] += v[2];
	bchoco06_pd[123] = x[10] * x[10];
	bchoco06_pd[124] = x[10] + x[10];
	bchoco06_pd[125] = bchoco06_pd[123] * x[9];
	bchoco06_pd[126] = x[13] * x[13];
	bchoco06_pd[127] = x[13] + x[13];
	v[2] = bchoco06_pd[125] * bchoco06_pd[126];
	v[1] = -v[2];
	v[0] += v[1];
	bchoco06_pd[131] = pow(x[9], 3.);
	if (errno) in_trouble2("pow",x[9],3.);
	if (x[9] != 0.) {
	bchoco06_pd[128] = 3.*(x[9]*x[9]);
	} else {
	bchoco06_pd[128] = 0.;
	}
	bchoco06_pd[129] = x[14] * x[14];
	bchoco06_pd[130] = x[14] + x[14];
	v[2] = bchoco06_pd[131] * bchoco06_pd[129];
	v[3] = -v[2];
	v[0] += v[3];
	bchoco06_pd[132] = x[9] * x[9];
	bchoco06_pd[133] = x[9] + x[9];
	bchoco06_pd[134] = bchoco06_pd[132] * x[11];
	bchoco06_pd[135] = bchoco06_pd[134] * x[12];
	v[3] = bchoco06_pd[135] * x[14];
	v[0] += v[3];
	bchoco06_pd[136] = x[9] * x[9];
	bchoco06_pd[137] = x[9] + x[9];
	bchoco06_pd[138] = x[12] * x[12];
	bchoco06_pd[139] = x[12] + x[12];
	bchoco06_pd[140] = bchoco06_pd[136] * bchoco06_pd[138];
	v[3] = bchoco06_pd[140] * x[13];
	v[2] = -v[3];
	v[0] += v[2];
	bchoco06_pd[141] = 3. * x[8];
	bchoco06_pd[142] = bchoco06_pd[141] * x[9];
	bchoco06_pd[143] = bchoco06_pd[142] * x[11];
	bchoco06_pd[144] = bchoco06_pd[143] * x[13];
	v[2] = bchoco06_pd[144] * x[14];
	v[3] = -v[2];
	v[0] += v[3];
	bchoco06_pd[146] = pow(x[11], 3.);
	if (errno) in_trouble2("pow",x[11],3.);
	if (x[11] != 0.) {
	bchoco06_pd[145] = 3.*(x[11]*x[11]);
	} else {
	bchoco06_pd[145] = 0.;
	}
	bchoco06_pd[147] = bchoco06_pd[146] * x[8];
	v[2] = bchoco06_pd[147] * x[14];
	v[0] += v[2];
	bchoco06_pd[148] = x[11] * x[11];
	bchoco06_pd[149] = x[11] + x[11];
	bchoco06_pd[150] = bchoco06_pd[148] * x[8];
	bchoco06_pd[151] = bchoco06_pd[150] * x[12];
	v[2] = bchoco06_pd[151] * x[13];
	v[4] = -v[2];
	v[0] += v[4];
	bchoco06_pd[152] = x[8] * x[10];
	bchoco06_pd[153] = bchoco06_pd[152] * x[11];
	bchoco06_pd[154] = x[13] * x[13];
	bchoco06_pd[155] = x[13] + x[13];
	v[4] = bchoco06_pd[153] * bchoco06_pd[154];
	v[0] += v[4];
	bchoco06_pd[156] = 2. * x[8];
	bchoco06_pd[157] = bchoco06_pd[156] * x[9];
	bchoco06_pd[158] = bchoco06_pd[157] * x[12];
	bchoco06_pd[159] = x[13] * x[13];
	bchoco06_pd[160] = x[13] + x[13];
	v[4] = bchoco06_pd[158] * bchoco06_pd[159];
	v[0] += v[4];
	bchoco06_pd[161] = x[8] * x[8];
	bchoco06_pd[162] = x[8] + x[8];
	bchoco06_pd[164] = pow(x[13], 3.);
	if (errno) in_trouble2("pow",x[13],3.);
	if (x[13] != 0.) {
	bchoco06_pd[163] = 3.*(x[13]*x[13]);
	} else {
	bchoco06_pd[163] = 0.;
	}
	v[2] = bchoco06_pd[161] * bchoco06_pd[164];
	v[5] = -v[2];
	v[0] += v[5];
	bchoco06_pd[165] = x[9] * x[10];
	v[5] = bchoco06_pd[165] * x[11];
	bchoco06_pd[166] = x[9] * x[9];
	bchoco06_pd[167] = x[9] + x[9];
	v[2] = bchoco06_pd[166] * x[12];
	v[6] = v[5] - v[2];
	bchoco06_pd[168] = x[11] * x[11];
	bchoco06_pd[169] = x[11] + x[11];
	v[2] = bchoco06_pd[168] * x[8];
	bchoco06_pd[171] = v[6] - v[2];
	bchoco06_pd[170] = 1. - x[63];
	v[6] = bchoco06_pd[171] * bchoco06_pd[170];
	v[0] += v[6];
	t1 = v[0] + -1.e-05*x[115];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[64];
	t1 += 0.001*x[112];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[65];
	t1 += 0.001*x[113];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[66];
	t1 += 0.001*x[114];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[67];
	t1 += 0.001*x[115];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[68];
	t1 += 0.001*x[116];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = 0.001*x[63];
	t1 += -x[69];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[70];
	t1 += 0.001*x[117];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[64];
	t1 += -10.*x[112];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[65];
	t1 += -10.*x[113];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[66];
	t1 += -10.*x[114];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[67];
	t1 += -10.*x[115];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[68];
	t1 += -10.*x[116];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -10.*x[63];
	t1 += x[69];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[70];
	t1 += -10.*x[117];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[8];
	t1 += 0.001*x[112];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[9];
	t1 += 0.001*x[113];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[10];
	t1 += 0.001*x[114];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[11];
	t1 += 0.001*x[115];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[12];
	t1 += 0.001*x[116];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[13];
	t1 += 0.001*x[63];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[14];
	t1 += 0.001*x[117];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[8];
	t1 += -10.*x[112];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[9];
	t1 += -10.*x[113];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[10];
	t1 += -10.*x[114];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[11];
	t1 += -10.*x[115];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[12];
	t1 += -10.*x[116];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[13];
	t1 += -10.*x[63];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[14];
	t1 += -10.*x[117];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[112];
	t1 += -x[113];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[113];
	t1 += -x[114];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[114];
	t1 += -x[115];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[115];
	t1 += -x[116];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[63];
	t1 += x[116];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[63];
	t1 += -x[117];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -1.e+08*x[1];
	t1 += 1.e+08*x[64];
	t1 += x[71];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[7];
	t1 += -x[70];
	t1 += x[79];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[1];
	t1 += 1.e-05*x[2];
	t1 += -1.e-10*x[3];
	t1 += x[80];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[2];
	t1 += 2.e-05*x[3];
	t1 += -3.e-10*x[4];
	t1 += x[81];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = -x[3];
	t1 += 3.e-05*x[4];
	t1 += -6.e-10*x[5];
	t1 += x[82];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[4];
	t1 += 4.e-05*x[5];
	t1 += -1.e-09*x[6];
	t1 += x[83];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = -x[5];
	t1 += 5.e-05*x[6];
	t1 += -1.5e-09*x[7];
	t1 += x[84];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = -x[6];
	t1 += 6.e-05*x[7];
	t1 += x[85];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = -x[7];
	t1 += x[86];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[8];
	t1 += -x[64];
	t1 += 1.e-05*x[65];
	t1 += -1.e-10*x[66];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[9];
	t1 += -x[65];
	t1 += 2.e-05*x[66];
	t1 += -3.e-10*x[67];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[10];
	t1 += -x[66];
	t1 += 3.e-05*x[67];
	t1 += -6.e-10*x[68];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[11];
	t1 += -x[67];
	t1 += 4.e-05*x[68];
	t1 += -1.e-09*x[69];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[12];
	t1 += -x[68];
	t1 += 5.e-05*x[69];
	t1 += -1.5e-09*x[70];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[13];
	t1 += -x[69];
	t1 += 6.e-05*x[70];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[14];
	t1 += -x[70];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = -x[71];
	t1 += 1.e-05*x[72];
	t1 += -1.e-10*x[73];
	t1 += x[87];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -x[72];
	t1 += 2.e-05*x[73];
	t1 += -3.e-10*x[74];
	t1 += x[88];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = -x[73];
	t1 += 3.e-05*x[74];
	t1 += -6.e-10*x[75];
	t1 += x[89];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = -x[74];
	t1 += 4.e-05*x[75];
	t1 += -1.e-09*x[76];
	t1 += x[90];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = -x[75];
	t1 += 5.e-05*x[76];
	t1 += -1.5e-09*x[77];
	t1 += x[91];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = -x[76];
	t1 += 6.e-05*x[77];
	t1 += -2.1e-09*x[78];
	t1 += x[92];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = -x[77];
	t1 += 7.e-05*x[78];
	t1 += -2.8e-09*x[79];
	t1 += x[93];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = -x[78];
	t1 += 8.e-05*x[79];
	t1 += x[94];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -x[79];
	t1 += x[95];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[15];
	t1 += -x[86];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -x[84];
	t1 += x[96];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -x[82];
	t1 += x[97];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = -x[80];
	t1 += x[98];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[16];
	t1 += -x[85];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[17];
	t1 += -x[83];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[18];
	t1 += -x[81];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[19];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[23];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[27];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[31];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[102];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[32];
	t1 += -x[95];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -x[93];
	t1 += x[103];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = -x[91];
	t1 += x[104];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = -x[89];
	t1 += x[105];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = -x[87];
	t1 += x[106];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[33];
	t1 += -x[94];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[34];
	t1 += -x[92];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[35];
	t1 += -x[90];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[36];
	t1 += -x[88];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[37];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[42];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[47];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[52];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[57];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[62];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[111];
	c[133] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[7] = bchoco06_pd[0];
	J[0] = x[1]*2.e+07;
	J[11] = -1.e+07;
	J[290] = 1.e+07;
	J[333] = 1.;

   /*** derivatives for constraint 2 ***/

	J[12] = bchoco06_pd[1];
	J[1] = x[2]*2.e+06;
	J[8] = -1.e+06;
	J[16] = -1.e+06;
	J[285] = -1.e+06;
	J[296] = 1.e+06;
	J[336] = 1.;

   /*** derivatives for constraint 3 ***/

	J[17] = bchoco06_pd[2];
	J[2] = x[3]*200000.;
	J[13] = -100000.;
	J[22] = -100000.;
	J[291] = -100000.;
	J[303] = 100000.;
	J[340] = 1.;

   /*** derivatives for constraint 4 ***/

	J[23] = bchoco06_pd[3];
	J[3] = x[4]*20000.;
	J[18] = -10000.;
	J[28] = -10000.;
	J[297] = -10000.;
	J[310] = 10000.;
	J[344] = 1.;

   /*** derivatives for constraint 5 ***/

	J[29] = bchoco06_pd[4];
	J[4] = x[5]*2000.;
	J[24] = -1000.;
	J[34] = -1000.;
	J[304] = -1000.;
	J[317] = 1000.;
	J[348] = 1.;

   /*** derivatives for constraint 6 ***/

	J[35] = bchoco06_pd[5];
	J[5] = x[6]*200.;
	J[30] = -100.;
	J[40] = -100.;
	J[311] = -100.;
	J[324] = 100.;
	J[352] = 1.;

   /*** derivatives for constraint 7 ***/

	J[41] = bchoco06_pd[6];
	J[6] = x[7]*20.;
	J[36] = -10.;
	J[318] = -10.;
	J[356] = 1.;

   /*** derivatives for constraint 8 ***/

	J[95] = bchoco06_pd[8];
	J[102] = bchoco06_pd[7]*x[15];
	J[91] = bchoco06_pd[7]*x[17];
	J[111] = 1.;
	J[396] = -1.;

   /*** derivatives for constraint 9 ***/

	J[96] = bchoco06_pd[10];
	J[105] = bchoco06_pd[9]*x[15];
	J[92] = bchoco06_pd[9]*x[18];
	J[118] = 1.;
	J[398] = -1.;

   /*** derivatives for constraint 10 ***/

	J[97] = bchoco06_pd[12];
	J[108] = bchoco06_pd[11]*x[15];
	J[93] = bchoco06_pd[11]*x[19];
	J[121] = 1.;
	J[400] = -1.;

   /*** derivatives for constraint 11 ***/

	J[112] = bchoco06_pd[14];
	J[119] = bchoco06_pd[13]*x[16];
	J[98] = bchoco06_pd[13]*x[21];
	J[103] = -1.;
	J[127] = 1.;

   /*** derivatives for constraint 12 ***/

	J[113] = bchoco06_pd[16];
	J[122] = bchoco06_pd[15]*x[16];
	J[99] = bchoco06_pd[15]*x[22];
	J[106] = -1.;
	J[134] = 1.;

   /*** derivatives for constraint 13 ***/

	J[114] = bchoco06_pd[18];
	J[124] = bchoco06_pd[17]*x[16];
	J[100] = bchoco06_pd[17]*x[23];
	J[109] = -1.;
	J[137] = 1.;

   /*** derivatives for constraint 14 ***/

	J[128] = bchoco06_pd[20];
	J[135] = bchoco06_pd[19]*x[20];
	J[115] = bchoco06_pd[19]*x[25];
	J[120] = -1.;
	J[143] = 1.;

   /*** derivatives for constraint 15 ***/

	J[129] = bchoco06_pd[22];
	J[138] = bchoco06_pd[21]*x[20];
	J[116] = bchoco06_pd[21]*x[26];
	J[123] = -1.;
	J[147] = 1.;

   /*** derivatives for constraint 16 ***/

	J[130] = bchoco06_pd[24];
	J[140] = bchoco06_pd[23]*x[20];
	J[117] = bchoco06_pd[23]*x[27];
	J[125] = -1.;
	J[149] = 1.;

   /*** derivatives for constraint 17 ***/

	J[144] = bchoco06_pd[26];
	J[148] = bchoco06_pd[25]*x[24];
	J[131] = bchoco06_pd[25]*x[29];
	J[136] = -1.;
	J[402] = 1.;

   /*** derivatives for constraint 18 ***/

	J[145] = bchoco06_pd[28];
	J[150] = bchoco06_pd[27]*x[24];
	J[132] = bchoco06_pd[27]*x[30];
	J[139] = -1.;
	J[403] = 1.;

   /*** derivatives for constraint 19 ***/

	J[146] = bchoco06_pd[30];
	J[151] = bchoco06_pd[29]*x[24];
	J[133] = bchoco06_pd[29]*x[31];
	J[141] = -1.;
	J[404] = 1.;

   /*** derivatives for constraint 20 ***/

	J[158] = bchoco06_pd[32];
	J[167] = bchoco06_pd[31]*x[32];
	J[153] = bchoco06_pd[31]*x[34];
	J[179] = 1.;
	J[406] = -1.;

   /*** derivatives for constraint 21 ***/

	J[159] = bchoco06_pd[34];
	J[170] = bchoco06_pd[33]*x[32];
	J[154] = bchoco06_pd[33]*x[35];
	J[188] = 1.;
	J[408] = -1.;

   /*** derivatives for constraint 22 ***/

	J[160] = bchoco06_pd[36];
	J[173] = bchoco06_pd[35]*x[32];
	J[155] = bchoco06_pd[35]*x[36];
	J[191] = 1.;
	J[410] = -1.;

   /*** derivatives for constraint 23 ***/

	J[161] = bchoco06_pd[38];
	J[176] = bchoco06_pd[37]*x[32];
	J[156] = bchoco06_pd[37]*x[37];
	J[194] = 1.;
	J[412] = -1.;

   /*** derivatives for constraint 24 ***/

	J[180] = bchoco06_pd[40];
	J[189] = bchoco06_pd[39]*x[33];
	J[162] = bchoco06_pd[39]*x[39];
	J[168] = -1.;
	J[200] = 1.;

   /*** derivatives for constraint 25 ***/

	J[181] = bchoco06_pd[42];
	J[192] = bchoco06_pd[41]*x[33];
	J[163] = bchoco06_pd[41]*x[40];
	J[171] = -1.;
	J[209] = 1.;

   /*** derivatives for constraint 26 ***/

	J[182] = bchoco06_pd[44];
	J[195] = bchoco06_pd[43]*x[33];
	J[164] = bchoco06_pd[43]*x[41];
	J[174] = -1.;
	J[212] = 1.;

   /*** derivatives for constraint 27 ***/

	J[183] = bchoco06_pd[46];
	J[197] = bchoco06_pd[45]*x[33];
	J[165] = bchoco06_pd[45]*x[42];
	J[177] = -1.;
	J[215] = 1.;

   /*** derivatives for constraint 28 ***/

	J[201] = bchoco06_pd[48];
	J[210] = bchoco06_pd[47]*x[38];
	J[184] = bchoco06_pd[47]*x[44];
	J[190] = -1.;
	J[221] = 1.;

   /*** derivatives for constraint 29 ***/

	J[202] = bchoco06_pd[50];
	J[213] = bchoco06_pd[49]*x[38];
	J[185] = bchoco06_pd[49]*x[45];
	J[193] = -1.;
	J[230] = 1.;

   /*** derivatives for constraint 30 ***/

	J[203] = bchoco06_pd[52];
	J[216] = bchoco06_pd[51]*x[38];
	J[186] = bchoco06_pd[51]*x[46];
	J[196] = -1.;
	J[233] = 1.;

   /*** derivatives for constraint 31 ***/

	J[204] = bchoco06_pd[54];
	J[218] = bchoco06_pd[53]*x[38];
	J[187] = bchoco06_pd[53]*x[47];
	J[198] = -1.;
	J[236] = 1.;

   /*** derivatives for constraint 32 ***/

	J[222] = bchoco06_pd[56];
	J[231] = bchoco06_pd[55]*x[43];
	J[205] = bchoco06_pd[55]*x[49];
	J[211] = -1.;
	J[242] = 1.;

   /*** derivatives for constraint 33 ***/

	J[223] = bchoco06_pd[58];
	J[234] = bchoco06_pd[57]*x[43];
	J[206] = bchoco06_pd[57]*x[50];
	J[214] = -1.;
	J[251] = 1.;

   /*** derivatives for constraint 34 ***/

	J[224] = bchoco06_pd[60];
	J[237] = bchoco06_pd[59]*x[43];
	J[207] = bchoco06_pd[59]*x[51];
	J[217] = -1.;
	J[254] = 1.;

   /*** derivatives for constraint 35 ***/

	J[225] = bchoco06_pd[62];
	J[239] = bchoco06_pd[61]*x[43];
	J[208] = bchoco06_pd[61]*x[52];
	J[219] = -1.;
	J[257] = 1.;

   /*** derivatives for constraint 36 ***/

	J[243] = bchoco06_pd[64];
	J[252] = bchoco06_pd[63]*x[48];
	J[226] = bchoco06_pd[63]*x[54];
	J[232] = -1.;
	J[263] = 1.;

   /*** derivatives for constraint 37 ***/

	J[244] = bchoco06_pd[66];
	J[255] = bchoco06_pd[65]*x[48];
	J[227] = bchoco06_pd[65]*x[55];
	J[235] = -1.;
	J[268] = 1.;

   /*** derivatives for constraint 38 ***/

	J[245] = bchoco06_pd[68];
	J[258] = bchoco06_pd[67]*x[48];
	J[228] = bchoco06_pd[67]*x[56];
	J[238] = -1.;
	J[270] = 1.;

   /*** derivatives for constraint 39 ***/

	J[246] = bchoco06_pd[70];
	J[260] = bchoco06_pd[69]*x[48];
	J[229] = bchoco06_pd[69]*x[57];
	J[240] = -1.;
	J[272] = 1.;

   /*** derivatives for constraint 40 ***/

	J[264] = bchoco06_pd[72];
	J[269] = bchoco06_pd[71]*x[53];
	J[247] = bchoco06_pd[71]*x[59];
	J[253] = -1.;
	J[414] = 1.;

   /*** derivatives for constraint 41 ***/

	J[265] = bchoco06_pd[74];
	J[271] = bchoco06_pd[73]*x[53];
	J[248] = bchoco06_pd[73]*x[60];
	J[256] = -1.;
	J[415] = 1.;

   /*** derivatives for constraint 42 ***/

	J[266] = bchoco06_pd[76];
	J[273] = bchoco06_pd[75]*x[53];
	J[249] = bchoco06_pd[75]*x[61];
	J[259] = -1.;
	J[416] = 1.;

   /*** derivatives for constraint 43 ***/

	J[267] = bchoco06_pd[78];
	J[274] = bchoco06_pd[77]*x[53];
	J[250] = bchoco06_pd[77]*x[62];
	J[261] = -1.;
	J[417] = 1.;

   /*** derivatives for constraint 44 ***/

	J[84] = -x[11];
	J[63] = -x[14];
	J[77] = x[12];
	J[70] = x[13];
	J[450] = -1.e-05;

   /*** derivatives for constraint 45 ***/

	J[78] = -bchoco06_pd[82];
	J[78] -= x[13]*x[10];
	J[57] = -x[13]*x[13];
	J[85] = bchoco06_pd[81];
	J[78] += x[14]*x[9];
	J[51] = x[14]*x[13];
	J[85] -= bchoco06_pd[80];
	J[64] = -x[14]*x[11];
	J[64] -= x[14]*x[11];
	J[78] += bchoco06_pd[79];
	J[71] = x[13]*x[11];
	J[64] += x[13]*x[12];
	J[276] = -1.e-05;

   /*** derivatives for constraint 46 ***/

	J[277] = -bchoco06_pd[110];
	dv[0] = -bchoco06_pd[109];
	J[72] = dv[0]*x[9];
	J[52] = dv[0]*x[12];
	J[65] = bchoco06_pd[109]*x[10];
	J[58] = bchoco06_pd[109]*x[11];
	J[86] = -bchoco06_pd[108];
	J[79] = -x[14]*bchoco06_pd[107];
	dv[1] = -x[14]*x[13];
	J[65] += dv[1]*x[8];
	J[46] = dv[1]*x[11];
	J[79] += bchoco06_pd[104]*bchoco06_pd[106];
	J[72] += bchoco06_pd[105]*x[8];
	J[46] += bchoco06_pd[105]*x[12];
	J[79] -= bchoco06_pd[103];
	J[52] -= x[13]*bchoco06_pd[101];
	dv[2] = -x[13]*x[9];
	J[72] += dv[2]*bchoco06_pd[102];
	J[86] += bchoco06_pd[100];
	J[72] += x[14]*bchoco06_pd[99];
	dv[3] = x[14]*x[12];
	J[65] += dv[3]*x[9];
	J[52] += dv[3]*x[11];
	J[86] -= bchoco06_pd[95]*bchoco06_pd[98];
	J[52] -= bchoco06_pd[97]*bchoco06_pd[96];
	J[86] += bchoco06_pd[94];
	J[79] += x[14]*bchoco06_pd[93];
	dv[4] = x[14]*x[13];
	J[58] += dv[4]*bchoco06_pd[92];
	dv[4] *= x[10];
	J[52] += dv[4]*2.;
	J[79] -= bchoco06_pd[88]*bchoco06_pd[91];
	J[58] -= bchoco06_pd[90]*bchoco06_pd[89];
	J[86] -= bchoco06_pd[87];
	J[58] -= x[14]*bchoco06_pd[85];
	dv[5] = -x[14]*x[10];
	J[65] += dv[5]*bchoco06_pd[86];
	J[79] += bchoco06_pd[84];
	J[72] += x[13]*bchoco06_pd[83];
	dv[6] = x[13]*x[12];
	J[65] += dv[6]*x[10];
	J[58] += dv[6]*x[11];
	J[443] = -1.e-05;

   /*** derivatives for constraint 47 ***/

	J[278] = -bchoco06_pd[171];
	dv[0] = -bchoco06_pd[170];
	J[47] = dv[0]*bchoco06_pd[168];
	dv[0] *= x[8];
	J[66] = dv[0]*bchoco06_pd[169];
	dv[1] = -bchoco06_pd[170];
	J[73] = dv[1]*bchoco06_pd[166];
	dv[1] *= x[12];
	J[53] = dv[1]*bchoco06_pd[167];
	J[66] += bchoco06_pd[170]*bchoco06_pd[165];
	dv[2] = bchoco06_pd[170]*x[11];
	J[59] = dv[2]*x[9];
	J[53] += dv[2]*x[10];
	J[80] = -bchoco06_pd[161]*bchoco06_pd[163];
	J[47] -= bchoco06_pd[164]*bchoco06_pd[162];
	J[80] += bchoco06_pd[158]*bchoco06_pd[160];
	J[73] += bchoco06_pd[159]*bchoco06_pd[157];
	dv[3] = bchoco06_pd[159]*x[12];
	J[53] += dv[3]*bchoco06_pd[156];
	dv[3] *= x[9];
	J[47] += dv[3]*2.;
	J[80] += bchoco06_pd[153]*bchoco06_pd[155];
	J[66] += bchoco06_pd[154]*bchoco06_pd[152];
	dv[4] = bchoco06_pd[154]*x[11];
	J[59] += dv[4]*x[8];
	J[47] += dv[4]*x[10];
	J[80] -= bchoco06_pd[151];
	J[73] -= x[13]*bchoco06_pd[150];
	dv[5] = -x[13]*x[12];
	J[47] += dv[5]*bchoco06_pd[148];
	dv[5] *= x[8];
	J[66] += dv[5]*bchoco06_pd[149];
	J[87] = bchoco06_pd[147];
	J[47] += x[14]*bchoco06_pd[146];
	dv[6] = x[14]*x[8];
	J[66] += dv[6]*bchoco06_pd[145];
	J[87] -= bchoco06_pd[144];
	J[80] -= x[14]*bchoco06_pd[143];
	dv[7] = -x[14]*x[13];
	J[66] += dv[7]*bchoco06_pd[142];
	dv[7] *= x[11];
	J[53] += dv[7]*bchoco06_pd[141];
	dv[7] *= x[9];
	J[47] += dv[7]*3.;
	J[80] -= bchoco06_pd[140];
	dv[8] = -x[13]*bchoco06_pd[136];
	dv[9] = -x[13]*bchoco06_pd[138];
	J[73] += dv[8]*bchoco06_pd[139];
	J[53] += dv[9]*bchoco06_pd[137];
	J[87] += bchoco06_pd[135];
	J[73] += x[14]*bchoco06_pd[134];
	dv[10] = x[14]*x[12];
	J[66] += dv[10]*bchoco06_pd[132];
	dv[10] *= x[11];
	J[53] += dv[10]*bchoco06_pd[133];
	J[87] -= bchoco06_pd[131]*bchoco06_pd[130];
	J[53] -= bchoco06_pd[129]*bchoco06_pd[128];
	J[80] -= bchoco06_pd[125]*bchoco06_pd[127];
	J[53] -= bchoco06_pd[126]*bchoco06_pd[123];
	dv[11] = -bchoco06_pd[126]*x[9];
	J[59] += dv[11]*bchoco06_pd[124];
	J[87] += bchoco06_pd[122];
	J[80] += x[14]*bchoco06_pd[121];
	dv[12] = x[14]*x[13];
	J[59] += dv[12]*bchoco06_pd[120];
	dv[12] *= x[10];
	dv[12] *= 2.;
	J[53] += dv[12]*bchoco06_pd[119];
	J[87] -= bchoco06_pd[117];
	dv[13] = -x[14]*bchoco06_pd[114];
	dv[14] = -x[14]*bchoco06_pd[115];
	J[66] += dv[13]*bchoco06_pd[116];
	J[59] += dv[14]*x[9];
	J[53] += dv[14]*x[10];
	J[80] += bchoco06_pd[113];
	J[73] += x[13]*bchoco06_pd[112];
	dv[15] = x[13]*x[12];
	J[66] += dv[15]*bchoco06_pd[111];
	dv[15] *= x[11];
	J[59] += dv[15]*x[9];
	J[53] += dv[15]*x[10];
	J[436] = -1.e-05;

   /*** derivatives for constraint 48 ***/

	J[286] = -1.;
	J[419] = 0.001;

   /*** derivatives for constraint 49 ***/

	J[292] = -1.;
	J[424] = 0.001;

   /*** derivatives for constraint 50 ***/

	J[298] = -1.;
	J[430] = 0.001;

   /*** derivatives for constraint 51 ***/

	J[305] = -1.;
	J[437] = 0.001;

   /*** derivatives for constraint 52 ***/

	J[312] = -1.;
	J[444] = 0.001;

   /*** derivatives for constraint 53 ***/

	J[279] = 0.001;
	J[319] = -1.;

   /*** derivatives for constraint 54 ***/

	J[325] = -1.;
	J[451] = 0.001;

   /*** derivatives for constraint 55 ***/

	J[287] = 1.;
	J[420] = -10.;

   /*** derivatives for constraint 56 ***/

	J[293] = 1.;
	J[425] = -10.;

   /*** derivatives for constraint 57 ***/

	J[299] = 1.;
	J[431] = -10.;

   /*** derivatives for constraint 58 ***/

	J[306] = 1.;
	J[438] = -10.;

   /*** derivatives for constraint 59 ***/

	J[313] = 1.;
	J[445] = -10.;

   /*** derivatives for constraint 60 ***/

	J[280] = -10.;
	J[320] = 1.;

   /*** derivatives for constraint 61 ***/

	J[326] = 1.;
	J[452] = -10.;

   /*** derivatives for constraint 62 ***/

	J[48] = -1.;
	J[421] = 0.001;

   /*** derivatives for constraint 63 ***/

	J[54] = -1.;
	J[426] = 0.001;

   /*** derivatives for constraint 64 ***/

	J[60] = -1.;
	J[432] = 0.001;

   /*** derivatives for constraint 65 ***/

	J[67] = -1.;
	J[439] = 0.001;

   /*** derivatives for constraint 66 ***/

	J[74] = -1.;
	J[446] = 0.001;

   /*** derivatives for constraint 67 ***/

	J[81] = -1.;
	J[281] = 0.001;

   /*** derivatives for constraint 68 ***/

	J[88] = -1.;
	J[453] = 0.001;

   /*** derivatives for constraint 69 ***/

	J[49] = 1.;
	J[422] = -10.;

   /*** derivatives for constraint 70 ***/

	J[55] = 1.;
	J[427] = -10.;

   /*** derivatives for constraint 71 ***/

	J[61] = 1.;
	J[433] = -10.;

   /*** derivatives for constraint 72 ***/

	J[68] = 1.;
	J[440] = -10.;

   /*** derivatives for constraint 73 ***/

	J[75] = 1.;
	J[447] = -10.;

   /*** derivatives for constraint 74 ***/

	J[82] = 1.;
	J[282] = -10.;

   /*** derivatives for constraint 75 ***/

	J[89] = 1.;
	J[454] = -10.;

   /*** derivatives for constraint 76 ***/

	J[423] = 1.;
	J[428] = -1.;

   /*** derivatives for constraint 77 ***/

	J[429] = 1.;
	J[434] = -1.;

   /*** derivatives for constraint 78 ***/

	J[435] = 1.;
	J[441] = -1.;

   /*** derivatives for constraint 79 ***/

	J[442] = 1.;
	J[448] = -1.;

   /*** derivatives for constraint 80 ***/

	J[283] = -1.;
	J[449] = 1.;

   /*** derivatives for constraint 81 ***/

	J[284] = 1.;
	J[455] = -1.;

   /*** derivatives for constraint 82 ***/

	J[9] = -1.e+08;
	J[288] = 1.e+08;
	J[331] = 1.;

   /*** derivatives for constraint 83 ***/

	J[42] = -1.;
	J[327] = -1.;
	J[360] = 1.;

   /*** derivatives for constraint 84 ***/

	J[10] = -1.;
	J[14] = 1.e-05;
	J[19] = -1.e-10;
	J[364] = 1.;

   /*** derivatives for constraint 85 ***/

	J[15] = -1.;
	J[20] = 2.e-05;
	J[25] = -3.e-10;
	J[366] = 1.;

   /*** derivatives for constraint 86 ***/

	J[21] = -1.;
	J[26] = 3.e-05;
	J[31] = -6.e-10;
	J[368] = 1.;

   /*** derivatives for constraint 87 ***/

	J[27] = -1.;
	J[32] = 4.e-05;
	J[37] = -1.e-09;
	J[370] = 1.;

   /*** derivatives for constraint 88 ***/

	J[33] = -1.;
	J[38] = 5.e-05;
	J[43] = -1.5e-09;
	J[372] = 1.;

   /*** derivatives for constraint 89 ***/

	J[39] = -1.;
	J[44] = 6.e-05;
	J[374] = 1.;

   /*** derivatives for constraint 90 ***/

	J[45] = -1.;
	J[376] = 1.;

   /*** derivatives for constraint 91 ***/

	J[50] = 1.;
	J[289] = -1.;
	J[294] = 1.e-05;
	J[300] = -1.e-10;

   /*** derivatives for constraint 92 ***/

	J[56] = 1.;
	J[295] = -1.;
	J[301] = 2.e-05;
	J[307] = -3.e-10;

   /*** derivatives for constraint 93 ***/

	J[62] = 1.;
	J[302] = -1.;
	J[308] = 3.e-05;
	J[314] = -6.e-10;

   /*** derivatives for constraint 94 ***/

	J[69] = 1.;
	J[309] = -1.;
	J[315] = 4.e-05;
	J[321] = -1.e-09;

   /*** derivatives for constraint 95 ***/

	J[76] = 1.;
	J[316] = -1.;
	J[322] = 5.e-05;
	J[328] = -1.5e-09;

   /*** derivatives for constraint 96 ***/

	J[83] = 1.;
	J[323] = -1.;
	J[329] = 6.e-05;

   /*** derivatives for constraint 97 ***/

	J[90] = 1.;
	J[330] = -1.;

   /*** derivatives for constraint 98 ***/

	J[332] = -1.;
	J[334] = 1.e-05;
	J[337] = -1.e-10;
	J[378] = 1.;

   /*** derivatives for constraint 99 ***/

	J[335] = -1.;
	J[338] = 2.e-05;
	J[341] = -3.e-10;
	J[380] = 1.;

   /*** derivatives for constraint 100 ***/

	J[339] = -1.;
	J[342] = 3.e-05;
	J[345] = -6.e-10;
	J[382] = 1.;

   /*** derivatives for constraint 101 ***/

	J[343] = -1.;
	J[346] = 4.e-05;
	J[349] = -1.e-09;
	J[384] = 1.;

   /*** derivatives for constraint 102 ***/

	J[347] = -1.;
	J[350] = 5.e-05;
	J[353] = -1.5e-09;
	J[386] = 1.;

   /*** derivatives for constraint 103 ***/

	J[351] = -1.;
	J[354] = 6.e-05;
	J[357] = -2.1e-09;
	J[388] = 1.;

   /*** derivatives for constraint 104 ***/

	J[355] = -1.;
	J[358] = 7.e-05;
	J[361] = -2.8e-09;
	J[390] = 1.;

   /*** derivatives for constraint 105 ***/

	J[359] = -1.;
	J[362] = 8.e-05;
	J[392] = 1.;

   /*** derivatives for constraint 106 ***/

	J[363] = -1.;
	J[394] = 1.;

   /*** derivatives for constraint 107 ***/

	J[94] = 1.;
	J[377] = -1.;

   /*** derivatives for constraint 108 ***/

	J[373] = -1.;
	J[397] = 1.;

   /*** derivatives for constraint 109 ***/

	J[369] = -1.;
	J[399] = 1.;

   /*** derivatives for constraint 110 ***/

	J[365] = -1.;
	J[401] = 1.;

   /*** derivatives for constraint 111 ***/

	J[101] = 1.;
	J[375] = -1.;

   /*** derivatives for constraint 112 ***/

	J[104] = 1.;
	J[371] = -1.;

   /*** derivatives for constraint 113 ***/

	J[107] = 1.;
	J[367] = -1.;

   /*** derivatives for constraint 114 ***/

	J[110] = 1.;

   /*** derivatives for constraint 115 ***/

	J[126] = 1.;

   /*** derivatives for constraint 116 ***/

	J[142] = 1.;

   /*** derivatives for constraint 117 ***/

	J[152] = 1.;

   /*** derivatives for constraint 118 ***/

	J[405] = 1.;

   /*** derivatives for constraint 119 ***/

	J[157] = 1.;
	J[395] = -1.;

   /*** derivatives for constraint 120 ***/

	J[391] = -1.;
	J[407] = 1.;

   /*** derivatives for constraint 121 ***/

	J[387] = -1.;
	J[409] = 1.;

   /*** derivatives for constraint 122 ***/

	J[383] = -1.;
	J[411] = 1.;

   /*** derivatives for constraint 123 ***/

	J[379] = -1.;
	J[413] = 1.;

   /*** derivatives for constraint 124 ***/

	J[166] = 1.;
	J[393] = -1.;

   /*** derivatives for constraint 125 ***/

	J[169] = 1.;
	J[389] = -1.;

   /*** derivatives for constraint 126 ***/

	J[172] = 1.;
	J[385] = -1.;

   /*** derivatives for constraint 127 ***/

	J[175] = 1.;
	J[381] = -1.;

   /*** derivatives for constraint 128 ***/

	J[178] = 1.;

   /*** derivatives for constraint 129 ***/

	J[199] = 1.;

   /*** derivatives for constraint 130 ***/

	J[220] = 1.;

   /*** derivatives for constraint 131 ***/

	J[241] = 1.;

   /*** derivatives for constraint 132 ***/

	J[262] = 1.;

   /*** derivatives for constraint 133 ***/

	J[275] = 1.;

   /*** derivatives for constraint 134 ***/

	J[418] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
