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
 fint bchoco07_auxcom_[1] = { 56 /* nlc */ };
 fint bchoco07_funcom_[678] = {
	134 /* nvar */,
	1 /* nobj */,
	153 /* ncon */,
	537 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	9,
	13,
	18,
	24,
	30,
	36,
	42,
	48,
	54,
	60,
	66,
	73,
	80,
	88,
	96,
	104,
	112,
	116,
	123,
	126,
	129,
	132,
	139,
	142,
	145,
	148,
	155,
	158,
	161,
	164,
	171,
	174,
	177,
	180,
	184,
	186,
	188,
	190,
	195,
	204,
	207,
	210,
	213,
	216,
	225,
	228,
	231,
	234,
	237,
	246,
	249,
	252,
	255,
	258,
	267,
	270,
	273,
	276,
	279,
	288,
	291,
	294,
	297,
	300,
	309,
	312,
	315,
	318,
	321,
	326,
	328,
	330,
	332,
	334,
	342,
	352,
	357,
	363,
	370,
	377,
	384,
	391,
	398,
	405,
	407,
	410,
	414,
	418,
	422,
	426,
	430,
	434,
	438,
	442,
	444,
	446,
	448,
	450,
	452,
	454,
	456,
	458,
	460,
	462,
	464,
	466,
	468,
	470,
	472,
	474,
	476,
	478,
	480,
	482,
	484,
	485,
	486,
	487,
	488,
	490,
	492,
	494,
	496,
	497,
	498,
	499,
	500,
	501,
	506,
	512,
	518,
	525,
	532,
	538,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	96,
	98,
	1,
	2,
	3,
	98,
	99,
	2,
	3,
	4,
	98,
	99,
	100,
	3,
	4,
	5,
	99,
	100,
	101,
	4,
	5,
	6,
	100,
	101,
	102,
	5,
	6,
	7,
	101,
	102,
	103,
	6,
	7,
	8,
	102,
	103,
	104,
	7,
	8,
	97,
	103,
	104,
	105,
	54,
	55,
	56,
	73,
	81,
	106,
	54,
	55,
	56,
	74,
	82,
	107,
	53,
	54,
	55,
	56,
	75,
	83,
	108,
	53,
	54,
	55,
	56,
	76,
	84,
	109,
	52,
	53,
	54,
	55,
	56,
	77,
	85,
	110,
	52,
	53,
	54,
	55,
	56,
	78,
	86,
	111,
	52,
	53,
	54,
	55,
	56,
	79,
	87,
	112,
	52,
	53,
	54,
	55,
	56,
	80,
	88,
	113,
	9,
	10,
	11,
	124,
	9,
	10,
	11,
	12,
	13,
	14,
	128,
	9,
	12,
	129,
	10,
	13,
	130,
	11,
	14,
	131,
	9,
	12,
	13,
	14,
	15,
	16,
	17,
	10,
	12,
	15,
	11,
	13,
	16,
	14,
	17,
	132,
	12,
	15,
	16,
	17,
	18,
	19,
	20,
	13,
	15,
	18,
	14,
	16,
	19,
	17,
	20,
	133,
	15,
	18,
	19,
	20,
	21,
	22,
	23,
	16,
	18,
	21,
	17,
	19,
	22,
	20,
	23,
	134,
	18,
	21,
	22,
	23,
	19,
	21,
	20,
	22,
	23,
	135,
	24,
	25,
	26,
	27,
	137,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	142,
	24,
	28,
	143,
	25,
	29,
	144,
	26,
	30,
	145,
	27,
	31,
	146,
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
	147,
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
	148,
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
	149,
	36,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	37,
	40,
	44,
	38,
	41,
	45,
	39,
	42,
	46,
	43,
	47,
	150,
	40,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	41,
	44,
	48,
	42,
	45,
	49,
	43,
	46,
	50,
	47,
	51,
	151,
	44,
	48,
	49,
	50,
	51,
	45,
	48,
	46,
	49,
	47,
	50,
	51,
	152,
	55,
	56,
	61,
	69,
	77,
	85,
	92,
	93,
	53,
	54,
	55,
	56,
	63,
	71,
	79,
	87,
	94,
	95,
	2,
	57,
	65,
	96,
	106,
	1,
	3,
	58,
	66,
	106,
	107,
	2,
	4,
	59,
	67,
	106,
	107,
	108,
	3,
	5,
	60,
	68,
	107,
	108,
	109,
	4,
	6,
	61,
	69,
	108,
	109,
	110,
	5,
	7,
	62,
	70,
	109,
	110,
	111,
	6,
	8,
	63,
	71,
	110,
	111,
	112,
	7,
	64,
	72,
	97,
	111,
	112,
	113,
	96,
	114,
	1,
	114,
	115,
	2,
	114,
	115,
	116,
	3,
	115,
	116,
	117,
	4,
	116,
	117,
	118,
	5,
	117,
	118,
	119,
	6,
	118,
	119,
	120,
	7,
	119,
	120,
	121,
	8,
	120,
	121,
	122,
	97,
	121,
	122,
	123,
	98,
	131,
	99,
	127,
	100,
	130,
	101,
	126,
	102,
	129,
	103,
	125,
	104,
	128,
	105,
	124,
	114,
	146,
	115,
	141,
	116,
	145,
	117,
	140,
	118,
	144,
	119,
	139,
	120,
	143,
	121,
	138,
	122,
	142,
	123,
	137,
	9,
	125,
	10,
	126,
	11,
	127,
	21,
	22,
	23,
	136,
	24,
	138,
	25,
	139,
	26,
	140,
	27,
	141,
	48,
	49,
	50,
	51,
	153,
	57,
	65,
	73,
	81,
	89,
	58,
	66,
	74,
	82,
	89,
	90,
	59,
	67,
	75,
	83,
	90,
	91,
	56,
	60,
	68,
	76,
	84,
	91,
	92,
	54,
	62,
	70,
	78,
	86,
	93,
	94,
	52,
	64,
	72,
	80,
	88,
	95 };

 real bchoco07_boundc_[1+268+306] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real bchoco07_x0comn_[134] = {
		0.95,
		0.001,
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
		0.,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
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
		1.e-05,
		0.,
		0.,
		0.,
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

 static real bchoco07_pd[436];
static real bchoco07_old_x[134];
static int bchoco07_xkind = -1;

 static int
bchoco07_xcheck(real *x)
{
	real *x1 = bchoco07_old_x, *xe = x + 134;
	errno = 0;
	if (bchoco07_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	bchoco07_xkind = 0;
	return 1;
	}
 real
bchoco07_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (bchoco07_xcheck(x) && wantfg == 2)
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
bchoco07_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[14], dv[55];
	real t1;
	fint wantfg = *needfg;
	if (bchoco07_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	bchoco07_pd[0] = 2.e+08 * x[0];
	v[0] = bchoco07_pd[0] * x[1];
	t1 = v[0] + -1.e+08*x[2];
	t1 += 1.e+08*x[77];
	t1 += x[85];
	c[0] = t1;

  /***  constraint 2  ***/

	bchoco07_pd[1] = 2.e+07 * x[0];
	v[0] = bchoco07_pd[1] * x[2];
	t1 = v[0] + -1.e+07*x[1];
	t1 += -1.e+07*x[3];
	t1 += -1.e+07*x[76];
	t1 += 1.e+07*x[78];
	t1 += x[86];
	c[1] = t1;

  /***  constraint 3  ***/

	bchoco07_pd[2] = 2.e+06 * x[0];
	v[0] = bchoco07_pd[2] * x[3];
	t1 = v[0] + -1.e+06*x[2];
	t1 += -1.e+06*x[4];
	t1 += -1.e+06*x[77];
	t1 += 1.e+06*x[79];
	t1 += x[87];
	c[2] = t1;

  /***  constraint 4  ***/

	bchoco07_pd[3] = 200000. * x[0];
	v[0] = bchoco07_pd[3] * x[4];
	t1 = v[0] + -100000.*x[3];
	t1 += -100000.*x[5];
	t1 += -100000.*x[78];
	t1 += 100000.*x[80];
	t1 += x[88];
	c[3] = t1;

  /***  constraint 5  ***/

	bchoco07_pd[4] = 20000. * x[0];
	v[0] = bchoco07_pd[4] * x[5];
	t1 = v[0] + -10000.*x[4];
	t1 += -10000.*x[6];
	t1 += -10000.*x[79];
	t1 += 10000.*x[81];
	t1 += x[89];
	c[4] = t1;

  /***  constraint 6  ***/

	bchoco07_pd[5] = 2000. * x[0];
	v[0] = bchoco07_pd[5] * x[6];
	t1 = v[0] + -1000.*x[5];
	t1 += -1000.*x[7];
	t1 += -1000.*x[80];
	t1 += 1000.*x[82];
	t1 += x[90];
	c[5] = t1;

  /***  constraint 7  ***/

	bchoco07_pd[6] = 200. * x[0];
	v[0] = bchoco07_pd[6] * x[7];
	t1 = v[0] + -100.*x[6];
	t1 += -100.*x[8];
	t1 += -100.*x[81];
	t1 += 100.*x[83];
	t1 += x[91];
	c[6] = t1;

  /***  constraint 8  ***/

	bchoco07_pd[7] = 20. * x[0];
	v[0] = bchoco07_pd[7] * x[8];
	t1 = v[0] + -10.*x[7];
	t1 += -10.*x[82];
	t1 += x[92];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[17] * x[19];
	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[1] = v[0] / x[18];
	bchoco07_pd[8] = 1. / x[18];
	bchoco07_pd[9] = -v[1] * bchoco07_pd[8];
	t1 = v[1] + x[22];
	t1 += -x[112];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[17] * x[20];
	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[1] = v[0] / x[18];
	bchoco07_pd[10] = 1. / x[18];
	bchoco07_pd[11] = -v[1] * bchoco07_pd[10];
	t1 = v[1] + x[23];
	t1 += -x[113];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[17] * x[21];
	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[1] = v[0] / x[18];
	bchoco07_pd[12] = 1. / x[18];
	bchoco07_pd[13] = -v[1] * bchoco07_pd[12];
	t1 = v[1] + x[24];
	t1 += -x[114];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[18] * x[23];
	if (x[22] == 0.) {
	zerdiv_(&x[22]);	}
	v[1] = v[0] / x[22];
	bchoco07_pd[14] = 1. / x[22];
	bchoco07_pd[15] = -v[1] * bchoco07_pd[14];
	t1 = v[1] + -x[19];
	t1 += x[26];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[18] * x[24];
	if (x[22] == 0.) {
	zerdiv_(&x[22]);	}
	v[1] = v[0] / x[22];
	bchoco07_pd[16] = 1. / x[22];
	bchoco07_pd[17] = -v[1] * bchoco07_pd[16];
	t1 = v[1] + -x[20];
	t1 += x[27];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[18] * x[25];
	if (x[22] == 0.) {
	zerdiv_(&x[22]);	}
	v[1] = v[0] / x[22];
	bchoco07_pd[18] = 1. / x[22];
	bchoco07_pd[19] = -v[1] * bchoco07_pd[18];
	t1 = v[1] + -x[21];
	t1 += x[28];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[22] * x[27];
	if (x[26] == 0.) {
	zerdiv_(&x[26]);	}
	v[1] = v[0] / x[26];
	bchoco07_pd[20] = 1. / x[26];
	bchoco07_pd[21] = -v[1] * bchoco07_pd[20];
	t1 = v[1] + -x[23];
	t1 += x[30];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[22] * x[28];
	if (x[26] == 0.) {
	zerdiv_(&x[26]);	}
	v[1] = v[0] / x[26];
	bchoco07_pd[22] = 1. / x[26];
	bchoco07_pd[23] = -v[1] * bchoco07_pd[22];
	t1 = v[1] + -x[24];
	t1 += x[31];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[22] * x[29];
	if (x[26] == 0.) {
	zerdiv_(&x[26]);	}
	v[1] = v[0] / x[26];
	bchoco07_pd[24] = 1. / x[26];
	bchoco07_pd[25] = -v[1] * bchoco07_pd[24];
	t1 = v[1] + -x[25];
	t1 += x[32];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[26] * x[31];
	if (x[30] == 0.) {
	zerdiv_(&x[30]);	}
	v[1] = v[0] / x[30];
	bchoco07_pd[26] = 1. / x[30];
	bchoco07_pd[27] = -v[1] * bchoco07_pd[26];
	t1 = v[1] + -x[27];
	t1 += x[34];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[26] * x[32];
	if (x[30] == 0.) {
	zerdiv_(&x[30]);	}
	v[1] = v[0] / x[30];
	bchoco07_pd[28] = 1. / x[30];
	bchoco07_pd[29] = -v[1] * bchoco07_pd[28];
	t1 = v[1] + -x[28];
	t1 += x[35];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[26] * x[33];
	if (x[30] == 0.) {
	zerdiv_(&x[30]);	}
	v[1] = v[0] / x[30];
	bchoco07_pd[30] = 1. / x[30];
	bchoco07_pd[31] = -v[1] * bchoco07_pd[30];
	t1 = v[1] + -x[29];
	t1 += x[36];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[30] * x[35];
	if (x[34] == 0.) {
	zerdiv_(&x[34]);	}
	v[1] = v[0] / x[34];
	bchoco07_pd[32] = 1. / x[34];
	bchoco07_pd[33] = -v[1] * bchoco07_pd[32];
	t1 = v[1] + -x[31];
	t1 += x[115];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[30] * x[36];
	if (x[34] == 0.) {
	zerdiv_(&x[34]);	}
	v[1] = v[0] / x[34];
	bchoco07_pd[34] = 1. / x[34];
	bchoco07_pd[35] = -v[1] * bchoco07_pd[34];
	t1 = v[1] + -x[32];
	t1 += x[116];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[30] * x[37];
	if (x[34] == 0.) {
	zerdiv_(&x[34]);	}
	v[1] = v[0] / x[34];
	bchoco07_pd[36] = 1. / x[34];
	bchoco07_pd[37] = -v[1] * bchoco07_pd[36];
	t1 = v[1] + -x[33];
	t1 += x[117];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[38] * x[40];
	if (x[39] == 0.) {
	zerdiv_(&x[39]);	}
	v[1] = v[0] / x[39];
	bchoco07_pd[38] = 1. / x[39];
	bchoco07_pd[39] = -v[1] * bchoco07_pd[38];
	t1 = v[1] + x[44];
	t1 += -x[119];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[38] * x[41];
	if (x[39] == 0.) {
	zerdiv_(&x[39]);	}
	v[1] = v[0] / x[39];
	bchoco07_pd[40] = 1. / x[39];
	bchoco07_pd[41] = -v[1] * bchoco07_pd[40];
	t1 = v[1] + x[45];
	t1 += -x[120];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[38] * x[42];
	if (x[39] == 0.) {
	zerdiv_(&x[39]);	}
	v[1] = v[0] / x[39];
	bchoco07_pd[42] = 1. / x[39];
	bchoco07_pd[43] = -v[1] * bchoco07_pd[42];
	t1 = v[1] + x[46];
	t1 += -x[121];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[38] * x[43];
	if (x[39] == 0.) {
	zerdiv_(&x[39]);	}
	v[1] = v[0] / x[39];
	bchoco07_pd[44] = 1. / x[39];
	bchoco07_pd[45] = -v[1] * bchoco07_pd[44];
	t1 = v[1] + x[47];
	t1 += -x[122];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[39] * x[45];
	if (x[44] == 0.) {
	zerdiv_(&x[44]);	}
	v[1] = v[0] / x[44];
	bchoco07_pd[46] = 1. / x[44];
	bchoco07_pd[47] = -v[1] * bchoco07_pd[46];
	t1 = v[1] + -x[40];
	t1 += x[49];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[39] * x[46];
	if (x[44] == 0.) {
	zerdiv_(&x[44]);	}
	v[1] = v[0] / x[44];
	bchoco07_pd[48] = 1. / x[44];
	bchoco07_pd[49] = -v[1] * bchoco07_pd[48];
	t1 = v[1] + -x[41];
	t1 += x[50];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[39] * x[47];
	if (x[44] == 0.) {
	zerdiv_(&x[44]);	}
	v[1] = v[0] / x[44];
	bchoco07_pd[50] = 1. / x[44];
	bchoco07_pd[51] = -v[1] * bchoco07_pd[50];
	t1 = v[1] + -x[42];
	t1 += x[51];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[39] * x[48];
	if (x[44] == 0.) {
	zerdiv_(&x[44]);	}
	v[1] = v[0] / x[44];
	bchoco07_pd[52] = 1. / x[44];
	bchoco07_pd[53] = -v[1] * bchoco07_pd[52];
	t1 = v[1] + -x[43];
	t1 += x[52];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[44] * x[50];
	if (x[49] == 0.) {
	zerdiv_(&x[49]);	}
	v[1] = v[0] / x[49];
	bchoco07_pd[54] = 1. / x[49];
	bchoco07_pd[55] = -v[1] * bchoco07_pd[54];
	t1 = v[1] + -x[45];
	t1 += x[54];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[44] * x[51];
	if (x[49] == 0.) {
	zerdiv_(&x[49]);	}
	v[1] = v[0] / x[49];
	bchoco07_pd[56] = 1. / x[49];
	bchoco07_pd[57] = -v[1] * bchoco07_pd[56];
	t1 = v[1] + -x[46];
	t1 += x[55];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[44] * x[52];
	if (x[49] == 0.) {
	zerdiv_(&x[49]);	}
	v[1] = v[0] / x[49];
	bchoco07_pd[58] = 1. / x[49];
	bchoco07_pd[59] = -v[1] * bchoco07_pd[58];
	t1 = v[1] + -x[47];
	t1 += x[56];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[44] * x[53];
	if (x[49] == 0.) {
	zerdiv_(&x[49]);	}
	v[1] = v[0] / x[49];
	bchoco07_pd[60] = 1. / x[49];
	bchoco07_pd[61] = -v[1] * bchoco07_pd[60];
	t1 = v[1] + -x[48];
	t1 += x[57];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[49] * x[55];
	if (x[54] == 0.) {
	zerdiv_(&x[54]);	}
	v[1] = v[0] / x[54];
	bchoco07_pd[62] = 1. / x[54];
	bchoco07_pd[63] = -v[1] * bchoco07_pd[62];
	t1 = v[1] + -x[50];
	t1 += x[59];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[49] * x[56];
	if (x[54] == 0.) {
	zerdiv_(&x[54]);	}
	v[1] = v[0] / x[54];
	bchoco07_pd[64] = 1. / x[54];
	bchoco07_pd[65] = -v[1] * bchoco07_pd[64];
	t1 = v[1] + -x[51];
	t1 += x[60];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[49] * x[57];
	if (x[54] == 0.) {
	zerdiv_(&x[54]);	}
	v[1] = v[0] / x[54];
	bchoco07_pd[66] = 1. / x[54];
	bchoco07_pd[67] = -v[1] * bchoco07_pd[66];
	t1 = v[1] + -x[52];
	t1 += x[61];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[49] * x[58];
	if (x[54] == 0.) {
	zerdiv_(&x[54]);	}
	v[1] = v[0] / x[54];
	bchoco07_pd[68] = 1. / x[54];
	bchoco07_pd[69] = -v[1] * bchoco07_pd[68];
	t1 = v[1] + -x[53];
	t1 += x[62];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[54] * x[60];
	if (x[59] == 0.) {
	zerdiv_(&x[59]);	}
	v[1] = v[0] / x[59];
	bchoco07_pd[70] = 1. / x[59];
	bchoco07_pd[71] = -v[1] * bchoco07_pd[70];
	t1 = v[1] + -x[55];
	t1 += x[64];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[54] * x[61];
	if (x[59] == 0.) {
	zerdiv_(&x[59]);	}
	v[1] = v[0] / x[59];
	bchoco07_pd[72] = 1. / x[59];
	bchoco07_pd[73] = -v[1] * bchoco07_pd[72];
	t1 = v[1] + -x[56];
	t1 += x[65];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[54] * x[62];
	if (x[59] == 0.) {
	zerdiv_(&x[59]);	}
	v[1] = v[0] / x[59];
	bchoco07_pd[74] = 1. / x[59];
	bchoco07_pd[75] = -v[1] * bchoco07_pd[74];
	t1 = v[1] + -x[57];
	t1 += x[66];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[54] * x[63];
	if (x[59] == 0.) {
	zerdiv_(&x[59]);	}
	v[1] = v[0] / x[59];
	bchoco07_pd[76] = 1. / x[59];
	bchoco07_pd[77] = -v[1] * bchoco07_pd[76];
	t1 = v[1] + -x[58];
	t1 += x[67];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = x[59] * x[65];
	if (x[64] == 0.) {
	zerdiv_(&x[64]);	}
	v[1] = v[0] / x[64];
	bchoco07_pd[78] = 1. / x[64];
	bchoco07_pd[79] = -v[1] * bchoco07_pd[78];
	t1 = v[1] + -x[60];
	t1 += x[69];
	c[43] = t1;

  /***  constraint 45  ***/

	v[0] = x[59] * x[66];
	if (x[64] == 0.) {
	zerdiv_(&x[64]);	}
	v[1] = v[0] / x[64];
	bchoco07_pd[80] = 1. / x[64];
	bchoco07_pd[81] = -v[1] * bchoco07_pd[80];
	t1 = v[1] + -x[61];
	t1 += x[70];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = x[59] * x[67];
	if (x[64] == 0.) {
	zerdiv_(&x[64]);	}
	v[1] = v[0] / x[64];
	bchoco07_pd[82] = 1. / x[64];
	bchoco07_pd[83] = -v[1] * bchoco07_pd[82];
	t1 = v[1] + -x[62];
	t1 += x[71];
	c[45] = t1;

  /***  constraint 47  ***/

	v[0] = x[59] * x[68];
	if (x[64] == 0.) {
	zerdiv_(&x[64]);	}
	v[1] = v[0] / x[64];
	bchoco07_pd[84] = 1. / x[64];
	bchoco07_pd[85] = -v[1] * bchoco07_pd[84];
	t1 = v[1] + -x[63];
	t1 += x[72];
	c[46] = t1;

  /***  constraint 48  ***/

	v[0] = x[64] * x[70];
	if (x[69] == 0.) {
	zerdiv_(&x[69]);	}
	v[1] = v[0] / x[69];
	bchoco07_pd[86] = 1. / x[69];
	bchoco07_pd[87] = -v[1] * bchoco07_pd[86];
	t1 = v[1] + -x[65];
	t1 += x[123];
	c[47] = t1;

  /***  constraint 49  ***/

	v[0] = x[64] * x[71];
	if (x[69] == 0.) {
	zerdiv_(&x[69]);	}
	v[1] = v[0] / x[69];
	bchoco07_pd[88] = 1. / x[69];
	bchoco07_pd[89] = -v[1] * bchoco07_pd[88];
	t1 = v[1] + -x[66];
	t1 += x[124];
	c[48] = t1;

  /***  constraint 50  ***/

	v[0] = x[64] * x[72];
	if (x[69] == 0.) {
	zerdiv_(&x[69]);	}
	v[1] = v[0] / x[69];
	bchoco07_pd[90] = 1. / x[69];
	bchoco07_pd[91] = -v[1] * bchoco07_pd[90];
	t1 = v[1] + -x[67];
	t1 += x[125];
	c[49] = t1;

  /***  constraint 51  ***/

	v[0] = x[64] * x[73];
	if (x[69] == 0.) {
	zerdiv_(&x[69]);	}
	v[1] = v[0] / x[69];
	bchoco07_pd[92] = 1. / x[69];
	bchoco07_pd[93] = -v[1] * bchoco07_pd[92];
	t1 = v[1] + -x[68];
	t1 += x[126];
	c[50] = t1;

  /***  constraint 52  ***/

	v[0] = x[14] * x[15];
	v[1] = x[13] * x[16];
	v[2] = v[0] - v[1];
	t1 = v[2] + -1.e-05*x[133];
	c[51] = t1;

  /***  constraint 53  ***/

	bchoco07_pd[94] = x[13] * x[14];
	v[0] = bchoco07_pd[94] * x[15];
	bchoco07_pd[95] = x[13] * x[13];
	v[1] = bchoco07_pd[95] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco07_pd[96] = x[11] * x[15];
	v[2] = bchoco07_pd[96] * x[16];
	v[0] += v[2];
	bchoco07_pd[97] = x[12] * x[15];
	v[2] = bchoco07_pd[97] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -1.e-05*x[75];
	c[52] = t1;

  /***  constraint 54  ***/

	bchoco07_pd[98] = x[12] * x[13];
	bchoco07_pd[99] = bchoco07_pd[98] * x[14];
	v[0] = bchoco07_pd[99] * x[15];
	bchoco07_pd[100] = x[13] * x[13];
	bchoco07_pd[101] = x[13] + x[13];
	bchoco07_pd[102] = bchoco07_pd[100] * x[12];
	v[1] = bchoco07_pd[102] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco07_pd[103] = x[12] * x[12];
	bchoco07_pd[104] = x[12] + x[12];
	bchoco07_pd[105] = x[15] * x[15];
	bchoco07_pd[106] = x[15] + x[15];
	v[2] = bchoco07_pd[103] * bchoco07_pd[105];
	v[1] = -v[2];
	v[0] += v[1];
	bchoco07_pd[107] = 2. * x[11];
	bchoco07_pd[108] = bchoco07_pd[107] * x[12];
	bchoco07_pd[109] = bchoco07_pd[108] * x[15];
	v[1] = bchoco07_pd[109] * x[16];
	v[0] += v[1];
	bchoco07_pd[110] = x[11] * x[11];
	bchoco07_pd[111] = x[11] + x[11];
	bchoco07_pd[112] = x[16] * x[16];
	bchoco07_pd[113] = x[16] + x[16];
	v[1] = bchoco07_pd[110] * bchoco07_pd[112];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco07_pd[114] = x[11] * x[13];
	bchoco07_pd[115] = bchoco07_pd[114] * x[14];
	v[2] = bchoco07_pd[115] * x[16];
	v[0] += v[2];
	bchoco07_pd[116] = x[14] * x[14];
	bchoco07_pd[117] = x[14] + x[14];
	bchoco07_pd[118] = bchoco07_pd[116] * x[11];
	v[2] = bchoco07_pd[118] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	bchoco07_pd[119] = x[10] * x[14];
	bchoco07_pd[120] = x[15] * x[15];
	bchoco07_pd[121] = x[15] + x[15];
	v[1] = bchoco07_pd[119] * bchoco07_pd[120];
	v[0] += v[1];
	bchoco07_pd[122] = x[10] * x[13];
	bchoco07_pd[123] = bchoco07_pd[122] * x[15];
	v[1] = bchoco07_pd[123] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco07_pd[124] = x[9] * x[14];
	bchoco07_pd[125] = bchoco07_pd[124] * x[15];
	v[2] = bchoco07_pd[125] * x[16];
	v[1] = -v[2];
	v[0] += v[1];
	bchoco07_pd[126] = x[9] * x[13];
	bchoco07_pd[127] = x[16] * x[16];
	bchoco07_pd[128] = x[16] + x[16];
	v[1] = bchoco07_pd[126] * bchoco07_pd[127];
	v[0] += v[1];
	v[1] = x[12] * x[13];
	v[2] = x[11] * x[14];
	bchoco07_pd[130] = v[1] - v[2];
	bchoco07_pd[129] = 1. - x[75];
	v[1] = bchoco07_pd[130] * bchoco07_pd[129];
	v[0] += v[1];
	t1 = v[0] + -1.e-05*x[132];
	c[53] = t1;

  /***  constraint 55  ***/

	bchoco07_pd[131] = x[11] * x[12];
	bchoco07_pd[132] = bchoco07_pd[131] * x[13];
	bchoco07_pd[133] = bchoco07_pd[132] * x[14];
	v[0] = bchoco07_pd[133] * x[15];
	bchoco07_pd[134] = x[11] * x[12];
	bchoco07_pd[135] = x[13] * x[13];
	bchoco07_pd[136] = x[13] + x[13];
	bchoco07_pd[137] = bchoco07_pd[134] * bchoco07_pd[135];
	v[1] = bchoco07_pd[137] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco07_pd[138] = x[11] * x[11];
	bchoco07_pd[139] = x[11] + x[11];
	bchoco07_pd[140] = 2. * bchoco07_pd[138];
	bchoco07_pd[141] = bchoco07_pd[140] * x[12];
	bchoco07_pd[142] = bchoco07_pd[141] * x[15];
	v[2] = bchoco07_pd[142] * x[16];
	v[0] += v[2];
	bchoco07_pd[143] = x[12] * x[12];
	bchoco07_pd[144] = x[12] + x[12];
	bchoco07_pd[145] = bchoco07_pd[143] * x[11];
	bchoco07_pd[146] = x[15] * x[15];
	bchoco07_pd[147] = x[15] + x[15];
	v[2] = bchoco07_pd[145] * bchoco07_pd[146];
	v[1] = -v[2];
	v[0] += v[1];
	bchoco07_pd[151] = pow(x[11], 3.);
	if (errno) in_trouble2("pow",x[11],3.);
	if (x[11] != 0.) {
	bchoco07_pd[148] = 3.*(x[11]*x[11]);
	} else {
	bchoco07_pd[148] = 0.;
	}
	bchoco07_pd[149] = x[16] * x[16];
	bchoco07_pd[150] = x[16] + x[16];
	v[2] = bchoco07_pd[151] * bchoco07_pd[149];
	v[3] = -v[2];
	v[0] += v[3];
	bchoco07_pd[152] = x[11] * x[11];
	bchoco07_pd[153] = x[11] + x[11];
	bchoco07_pd[154] = bchoco07_pd[152] * x[13];
	bchoco07_pd[155] = bchoco07_pd[154] * x[14];
	v[3] = bchoco07_pd[155] * x[16];
	v[0] += v[3];
	bchoco07_pd[156] = x[11] * x[11];
	bchoco07_pd[157] = x[11] + x[11];
	bchoco07_pd[158] = x[14] * x[14];
	bchoco07_pd[159] = x[14] + x[14];
	bchoco07_pd[160] = bchoco07_pd[156] * bchoco07_pd[158];
	v[3] = bchoco07_pd[160] * x[15];
	v[2] = -v[3];
	v[0] += v[2];
	bchoco07_pd[161] = 3. * x[10];
	bchoco07_pd[162] = bchoco07_pd[161] * x[11];
	bchoco07_pd[163] = bchoco07_pd[162] * x[13];
	bchoco07_pd[164] = bchoco07_pd[163] * x[15];
	v[2] = bchoco07_pd[164] * x[16];
	v[3] = -v[2];
	v[0] += v[3];
	bchoco07_pd[166] = pow(x[13], 3.);
	if (errno) in_trouble2("pow",x[13],3.);
	if (x[13] != 0.) {
	bchoco07_pd[165] = 3.*(x[13]*x[13]);
	} else {
	bchoco07_pd[165] = 0.;
	}
	bchoco07_pd[167] = bchoco07_pd[166] * x[10];
	v[2] = bchoco07_pd[167] * x[16];
	v[0] += v[2];
	bchoco07_pd[168] = x[13] * x[13];
	bchoco07_pd[169] = x[13] + x[13];
	bchoco07_pd[170] = bchoco07_pd[168] * x[10];
	bchoco07_pd[171] = bchoco07_pd[170] * x[14];
	v[2] = bchoco07_pd[171] * x[15];
	v[4] = -v[2];
	v[0] += v[4];
	bchoco07_pd[172] = x[10] * x[12];
	bchoco07_pd[173] = bchoco07_pd[172] * x[13];
	bchoco07_pd[174] = x[15] * x[15];
	bchoco07_pd[175] = x[15] + x[15];
	v[4] = bchoco07_pd[173] * bchoco07_pd[174];
	v[0] += v[4];
	bchoco07_pd[176] = 2. * x[10];
	bchoco07_pd[177] = bchoco07_pd[176] * x[11];
	bchoco07_pd[178] = bchoco07_pd[177] * x[14];
	bchoco07_pd[179] = x[15] * x[15];
	bchoco07_pd[180] = x[15] + x[15];
	v[4] = bchoco07_pd[178] * bchoco07_pd[179];
	v[0] += v[4];
	bchoco07_pd[181] = x[10] * x[10];
	bchoco07_pd[182] = x[10] + x[10];
	bchoco07_pd[184] = pow(x[15], 3.);
	if (errno) in_trouble2("pow",x[15],3.);
	if (x[15] != 0.) {
	bchoco07_pd[183] = 3.*(x[15]*x[15]);
	} else {
	bchoco07_pd[183] = 0.;
	}
	v[2] = bchoco07_pd[181] * bchoco07_pd[184];
	v[5] = -v[2];
	v[0] += v[5];
	bchoco07_pd[185] = x[9] * x[9];
	bchoco07_pd[186] = x[9] + x[9];
	bchoco07_pd[187] = bchoco07_pd[185] * x[15];
	bchoco07_pd[188] = x[16] * x[16];
	bchoco07_pd[189] = x[16] + x[16];
	v[5] = bchoco07_pd[187] * bchoco07_pd[188];
	v[2] = -v[5];
	v[0] += v[2];
	bchoco07_pd[190] = x[9] * x[12];
	bchoco07_pd[191] = bchoco07_pd[190] * x[14];
	bchoco07_pd[192] = x[15] * x[15];
	bchoco07_pd[193] = x[15] + x[15];
	v[2] = bchoco07_pd[191] * bchoco07_pd[192];
	v[5] = -v[2];
	v[0] += v[5];
	bchoco07_pd[194] = x[9] * x[11];
	bchoco07_pd[195] = bchoco07_pd[194] * x[14];
	bchoco07_pd[196] = bchoco07_pd[195] * x[15];
	v[5] = bchoco07_pd[196] * x[16];
	v[2] = -v[5];
	v[0] += v[2];
	bchoco07_pd[197] = x[13] * x[13];
	bchoco07_pd[198] = x[13] + x[13];
	bchoco07_pd[199] = bchoco07_pd[197] * x[9];
	bchoco07_pd[200] = bchoco07_pd[199] * x[14];
	v[2] = bchoco07_pd[200] * x[16];
	v[5] = -v[2];
	v[0] += v[5];
	bchoco07_pd[201] = 2. * x[9];
	bchoco07_pd[202] = bchoco07_pd[201] * x[10];
	bchoco07_pd[203] = x[15] * x[15];
	bchoco07_pd[204] = x[15] + x[15];
	bchoco07_pd[205] = bchoco07_pd[202] * bchoco07_pd[203];
	v[5] = bchoco07_pd[205] * x[16];
	v[0] += v[5];
	bchoco07_pd[206] = 2. * x[9];
	bchoco07_pd[207] = bchoco07_pd[206] * x[11];
	bchoco07_pd[208] = bchoco07_pd[207] * x[13];
	bchoco07_pd[209] = x[16] * x[16];
	bchoco07_pd[210] = x[16] + x[16];
	v[5] = bchoco07_pd[208] * bchoco07_pd[209];
	v[0] += v[5];
	bchoco07_pd[211] = x[9] * x[13];
	bchoco07_pd[212] = x[14] * x[14];
	bchoco07_pd[213] = x[14] + x[14];
	bchoco07_pd[214] = bchoco07_pd[211] * bchoco07_pd[212];
	v[5] = bchoco07_pd[214] * x[15];
	v[0] += v[5];
	bchoco07_pd[215] = x[11] * x[12];
	v[5] = bchoco07_pd[215] * x[13];
	bchoco07_pd[216] = x[11] * x[11];
	bchoco07_pd[217] = x[11] + x[11];
	v[2] = bchoco07_pd[216] * x[14];
	v[6] = v[5] - v[2];
	bchoco07_pd[218] = x[13] * x[13];
	bchoco07_pd[219] = x[13] + x[13];
	v[2] = bchoco07_pd[218] * x[10];
	v[5] = v[6] - v[2];
	bchoco07_pd[220] = x[9] * x[13];
	v[2] = bchoco07_pd[220] * x[14];
	bchoco07_pd[222] = v[5] + v[2];
	bchoco07_pd[221] = 1. - x[75];
	v[5] = bchoco07_pd[222] * bchoco07_pd[221];
	v[0] += v[5];
	t1 = v[0] + -1.e-05*x[74];
	c[54] = t1;

  /***  constraint 56  ***/

	bchoco07_pd[226] = pow(x[9], 3.);
	if (errno) in_trouble2("pow",x[9],3.);
	if (x[9] != 0.) {
	bchoco07_pd[223] = 3.*(x[9]*x[9]);
	} else {
	bchoco07_pd[223] = 0.;
	}
	bchoco07_pd[225] = pow(x[16], 3.);
	if (errno) in_trouble2("pow",x[16],3.);
	if (x[16] != 0.) {
	bchoco07_pd[224] = 3.*(x[16]*x[16]);
	} else {
	bchoco07_pd[224] = 0.;
	}
	v[2] = bchoco07_pd[226] * bchoco07_pd[225];
	bchoco07_pd[227] = x[9] * x[9];
	bchoco07_pd[228] = x[9] + x[9];
	bchoco07_pd[230] = pow(x[14], 3.);
	if (errno) in_trouble2("pow",x[14],3.);
	if (x[14] != 0.) {
	bchoco07_pd[229] = 3.*(x[14]*x[14]);
	} else {
	bchoco07_pd[229] = 0.;
	}
	bchoco07_pd[231] = bchoco07_pd[227] * bchoco07_pd[230];
	v[4] = bchoco07_pd[231] * x[15];
	v[5] = -v[4];
	v[2] += v[5];
	bchoco07_pd[232] = x[9] * x[9];
	bchoco07_pd[233] = x[9] + x[9];
	bchoco07_pd[234] = bchoco07_pd[232] * x[13];
	bchoco07_pd[235] = x[14] * x[14];
	bchoco07_pd[236] = x[14] + x[14];
	bchoco07_pd[237] = bchoco07_pd[234] * bchoco07_pd[235];
	v[5] = bchoco07_pd[237] * x[16];
	v[2] += v[5];
	bchoco07_pd[238] = x[9] * x[9];
	bchoco07_pd[239] = x[9] + x[9];
	bchoco07_pd[240] = 2. * bchoco07_pd[238];
	bchoco07_pd[241] = bchoco07_pd[240] * x[12];
	bchoco07_pd[242] = bchoco07_pd[241] * x[13];
	bchoco07_pd[243] = x[16] * x[16];
	bchoco07_pd[244] = x[16] + x[16];
	v[5] = bchoco07_pd[242] * bchoco07_pd[243];
	v[4] = -v[5];
	v[2] += v[4];
	bchoco07_pd[245] = x[9] * x[9];
	bchoco07_pd[246] = x[9] + x[9];
	bchoco07_pd[247] = bchoco07_pd[245] * x[11];
	bchoco07_pd[248] = bchoco07_pd[247] * x[14];
	bchoco07_pd[249] = x[16] * x[16];
	bchoco07_pd[250] = x[16] + x[16];
	v[4] = bchoco07_pd[248] * bchoco07_pd[249];
	v[5] = -v[4];
	v[2] += v[5];
	bchoco07_pd[251] = x[9] * x[9];
	bchoco07_pd[252] = x[9] + x[9];
	bchoco07_pd[253] = 3. * bchoco07_pd[251];
	bchoco07_pd[254] = bchoco07_pd[253] * x[12];
	bchoco07_pd[255] = bchoco07_pd[254] * x[14];
	bchoco07_pd[256] = bchoco07_pd[255] * x[15];
	v[5] = bchoco07_pd[256] * x[16];
	v[2] += v[5];
	bchoco07_pd[257] = x[9] * x[9];
	bchoco07_pd[258] = x[9] + x[9];
	bchoco07_pd[259] = 3. * bchoco07_pd[257];
	bchoco07_pd[260] = bchoco07_pd[259] * x[10];
	bchoco07_pd[261] = bchoco07_pd[260] * x[15];
	bchoco07_pd[262] = x[16] * x[16];
	bchoco07_pd[263] = x[16] + x[16];
	v[5] = bchoco07_pd[261] * bchoco07_pd[262];
	v[4] = -v[5];
	v[2] += v[4];
	bchoco07_pd[264] = x[9] * x[11];
	bchoco07_pd[265] = bchoco07_pd[264] * x[12];
	bchoco07_pd[266] = x[14] * x[14];
	bchoco07_pd[267] = x[14] + x[14];
	bchoco07_pd[268] = bchoco07_pd[265] * bchoco07_pd[266];
	v[4] = bchoco07_pd[268] * x[15];
	v[2] += v[4];
	bchoco07_pd[270] = pow(x[12], 3.);
	if (errno) in_trouble2("pow",x[12],3.);
	if (x[12] != 0.) {
	bchoco07_pd[269] = 3.*(x[12]*x[12]);
	} else {
	bchoco07_pd[269] = 0.;
	}
	bchoco07_pd[271] = bchoco07_pd[270] * x[9];
	bchoco07_pd[272] = x[15] * x[15];
	bchoco07_pd[273] = x[15] + x[15];
	v[5] = bchoco07_pd[271] * bchoco07_pd[272];
	v[2] += v[5];
	bchoco07_pd[274] = x[9] * x[10];
	bchoco07_pd[275] = bchoco07_pd[274] * x[12];
	bchoco07_pd[276] = bchoco07_pd[275] * x[13];
	bchoco07_pd[277] = bchoco07_pd[276] * x[15];
	v[5] = bchoco07_pd[277] * x[16];
	v[2] += v[5];
	bchoco07_pd[278] = x[12] * x[12];
	bchoco07_pd[279] = x[12] + x[12];
	bchoco07_pd[280] = bchoco07_pd[278] * x[9];
	bchoco07_pd[281] = bchoco07_pd[280] * x[13];
	bchoco07_pd[282] = bchoco07_pd[281] * x[14];
	v[5] = bchoco07_pd[282] * x[15];
	v[6] = -v[5];
	v[2] += v[6];
	bchoco07_pd[283] = x[9] * x[11];
	bchoco07_pd[284] = bchoco07_pd[283] * x[12];
	bchoco07_pd[285] = bchoco07_pd[284] * x[13];
	bchoco07_pd[286] = bchoco07_pd[285] * x[14];
	v[6] = bchoco07_pd[286] * x[16];
	v[5] = -v[6];
	v[2] += v[5];
	bchoco07_pd[287] = 2. * x[9];
	bchoco07_pd[288] = bchoco07_pd[287] * x[10];
	bchoco07_pd[289] = x[13] * x[13];
	bchoco07_pd[290] = x[13] + x[13];
	bchoco07_pd[291] = bchoco07_pd[288] * bchoco07_pd[289];
	bchoco07_pd[292] = bchoco07_pd[291] * x[14];
	v[5] = bchoco07_pd[292] * x[16];
	v[6] = -v[5];
	v[2] += v[6];
	bchoco07_pd[293] = x[11] * x[11];
	bchoco07_pd[294] = x[11] + x[11];
	bchoco07_pd[295] = bchoco07_pd[293] * x[9];
	bchoco07_pd[296] = bchoco07_pd[295] * x[12];
	bchoco07_pd[297] = x[16] * x[16];
	bchoco07_pd[298] = x[16] + x[16];
	v[6] = bchoco07_pd[296] * bchoco07_pd[297];
	v[2] += v[6];
	bchoco07_pd[299] = x[9] * x[10];
	bchoco07_pd[300] = bchoco07_pd[299] * x[11];
	bchoco07_pd[301] = bchoco07_pd[300] * x[14];
	bchoco07_pd[302] = bchoco07_pd[301] * x[15];
	v[6] = bchoco07_pd[302] * x[16];
	v[5] = -v[6];
	v[2] += v[5];
	bchoco07_pd[303] = 2. * x[9];
	bchoco07_pd[304] = bchoco07_pd[303] * x[11];
	bchoco07_pd[305] = x[12] * x[12];
	bchoco07_pd[306] = x[12] + x[12];
	bchoco07_pd[307] = bchoco07_pd[304] * bchoco07_pd[305];
	bchoco07_pd[308] = bchoco07_pd[307] * x[15];
	v[5] = bchoco07_pd[308] * x[16];
	v[6] = -v[5];
	v[2] += v[6];
	bchoco07_pd[309] = 3. * x[9];
	bchoco07_pd[310] = bchoco07_pd[309] * x[10];
	bchoco07_pd[311] = bchoco07_pd[310] * x[12];
	bchoco07_pd[312] = bchoco07_pd[311] * x[14];
	bchoco07_pd[313] = x[15] * x[15];
	bchoco07_pd[314] = x[15] + x[15];
	v[6] = bchoco07_pd[312] * bchoco07_pd[313];
	v[5] = -v[6];
	v[2] += v[5];
	bchoco07_pd[315] = 3. * x[9];
	bchoco07_pd[316] = bchoco07_pd[315] * x[10];
	bchoco07_pd[317] = bchoco07_pd[316] * x[11];
	bchoco07_pd[318] = bchoco07_pd[317] * x[13];
	bchoco07_pd[319] = x[16] * x[16];
	bchoco07_pd[320] = x[16] + x[16];
	v[5] = bchoco07_pd[318] * bchoco07_pd[319];
	v[2] += v[5];
	bchoco07_pd[321] = 2. * x[9];
	bchoco07_pd[322] = bchoco07_pd[321] * x[10];
	bchoco07_pd[323] = bchoco07_pd[322] * x[13];
	bchoco07_pd[324] = x[14] * x[14];
	bchoco07_pd[325] = x[14] + x[14];
	bchoco07_pd[326] = bchoco07_pd[323] * bchoco07_pd[324];
	v[5] = bchoco07_pd[326] * x[15];
	v[2] += v[5];
	bchoco07_pd[327] = x[10] * x[10];
	bchoco07_pd[328] = x[10] + x[10];
	bchoco07_pd[329] = 3. * bchoco07_pd[327];
	bchoco07_pd[330] = bchoco07_pd[329] * x[9];
	bchoco07_pd[331] = x[15] * x[15];
	bchoco07_pd[332] = x[15] + x[15];
	bchoco07_pd[333] = bchoco07_pd[330] * bchoco07_pd[331];
	v[5] = bchoco07_pd[333] * x[16];
	v[2] += v[5];
	bchoco07_pd[334] = x[12] * x[12];
	bchoco07_pd[335] = x[12] + x[12];
	bchoco07_pd[336] = bchoco07_pd[334] * x[9];
	bchoco07_pd[337] = x[13] * x[13];
	bchoco07_pd[338] = x[13] + x[13];
	bchoco07_pd[339] = bchoco07_pd[336] * bchoco07_pd[337];
	v[5] = bchoco07_pd[339] * x[16];
	v[2] += v[5];
	bchoco07_pd[340] = x[11] * x[11];
	bchoco07_pd[341] = x[11] + x[11];
	bchoco07_pd[342] = bchoco07_pd[340] * x[10];
	bchoco07_pd[343] = bchoco07_pd[342] * x[13];
	bchoco07_pd[344] = bchoco07_pd[343] * x[14];
	v[5] = bchoco07_pd[344] * x[16];
	v[2] += v[5];
	bchoco07_pd[345] = x[10] * x[10];
	bchoco07_pd[346] = x[10] + x[10];
	bchoco07_pd[347] = 2. * bchoco07_pd[345];
	bchoco07_pd[348] = bchoco07_pd[347] * x[11];
	bchoco07_pd[349] = bchoco07_pd[348] * x[14];
	bchoco07_pd[350] = x[15] * x[15];
	bchoco07_pd[351] = x[15] + x[15];
	v[5] = bchoco07_pd[349] * bchoco07_pd[350];
	v[2] += v[5];
	bchoco07_pd[352] = x[11] * x[11];
	bchoco07_pd[353] = x[11] + x[11];
	bchoco07_pd[354] = 2. * bchoco07_pd[352];
	bchoco07_pd[355] = bchoco07_pd[354] * x[10];
	bchoco07_pd[356] = bchoco07_pd[355] * x[12];
	bchoco07_pd[357] = bchoco07_pd[356] * x[15];
	v[5] = bchoco07_pd[357] * x[16];
	v[2] += v[5];
	bchoco07_pd[358] = x[10] * x[10];
	bchoco07_pd[359] = x[10] + x[10];
	bchoco07_pd[361] = pow(x[13], 3.);
	if (errno) in_trouble2("pow",x[13],3.);
	if (x[13] != 0.) {
	bchoco07_pd[360] = 3.*(x[13]*x[13]);
	} else {
	bchoco07_pd[360] = 0.;
	}
	bchoco07_pd[362] = bchoco07_pd[358] * bchoco07_pd[361];
	v[6] = bchoco07_pd[362] * x[16];
	v[2] += v[6];
	bchoco07_pd[363] = x[10] * x[11];
	bchoco07_pd[364] = x[12] * x[12];
	bchoco07_pd[365] = x[12] + x[12];
	bchoco07_pd[366] = bchoco07_pd[363] * bchoco07_pd[364];
	bchoco07_pd[367] = x[15] * x[15];
	bchoco07_pd[368] = x[15] + x[15];
	v[6] = bchoco07_pd[366] * bchoco07_pd[367];
	v[7] = -v[6];
	v[2] += v[7];
	bchoco07_pd[372] = pow(x[10], 3.);
	if (errno) in_trouble2("pow",x[10],3.);
	if (x[10] != 0.) {
	bchoco07_pd[369] = 3.*(x[10]*x[10]);
	} else {
	bchoco07_pd[369] = 0.;
	}
	bchoco07_pd[371] = pow(x[15], 3.);
	if (errno) in_trouble2("pow",x[15],3.);
	if (x[15] != 0.) {
	bchoco07_pd[370] = 3.*(x[15]*x[15]);
	} else {
	bchoco07_pd[370] = 0.;
	}
	v[8] = bchoco07_pd[372] * bchoco07_pd[371];
	v[9] = -v[8];
	v[2] += v[9];
	bchoco07_pd[373] = x[10] * x[10];
	bchoco07_pd[374] = x[10] + x[10];
	bchoco07_pd[375] = x[13] * x[13];
	bchoco07_pd[376] = x[13] + x[13];
	bchoco07_pd[377] = bchoco07_pd[373] * bchoco07_pd[375];
	bchoco07_pd[378] = bchoco07_pd[377] * x[14];
	v[9] = bchoco07_pd[378] * x[15];
	v[8] = -v[9];
	v[2] += v[8];
	bchoco07_pd[380] = pow(x[11], 3.);
	if (errno) in_trouble2("pow",x[11],3.);
	if (x[11] != 0.) {
	bchoco07_pd[379] = 3.*(x[11]*x[11]);
	} else {
	bchoco07_pd[379] = 0.;
	}
	bchoco07_pd[381] = bchoco07_pd[380] * x[10];
	bchoco07_pd[382] = x[16] * x[16];
	bchoco07_pd[383] = x[16] + x[16];
	v[9] = bchoco07_pd[381] * bchoco07_pd[382];
	v[10] = -v[9];
	v[2] += v[10];
	bchoco07_pd[384] = x[11] * x[11];
	bchoco07_pd[385] = x[11] + x[11];
	bchoco07_pd[386] = bchoco07_pd[384] * x[10];
	bchoco07_pd[387] = x[14] * x[14];
	bchoco07_pd[388] = x[14] + x[14];
	bchoco07_pd[389] = bchoco07_pd[386] * bchoco07_pd[387];
	v[10] = bchoco07_pd[389] * x[15];
	v[9] = -v[10];
	v[2] += v[9];
	bchoco07_pd[390] = x[10] * x[11];
	bchoco07_pd[391] = bchoco07_pd[390] * x[12];
	bchoco07_pd[392] = x[13] * x[13];
	bchoco07_pd[393] = x[13] + x[13];
	bchoco07_pd[394] = bchoco07_pd[391] * bchoco07_pd[392];
	v[9] = bchoco07_pd[394] * x[16];
	v[10] = -v[9];
	v[2] += v[10];
	bchoco07_pd[395] = x[10] * x[11];
	bchoco07_pd[396] = bchoco07_pd[395] * x[12];
	bchoco07_pd[397] = bchoco07_pd[396] * x[13];
	bchoco07_pd[398] = bchoco07_pd[397] * x[14];
	v[10] = bchoco07_pd[398] * x[15];
	v[2] += v[10];
	bchoco07_pd[399] = x[10] * x[10];
	bchoco07_pd[400] = x[10] + x[10];
	bchoco07_pd[401] = bchoco07_pd[399] * x[12];
	bchoco07_pd[402] = bchoco07_pd[401] * x[13];
	bchoco07_pd[403] = x[15] * x[15];
	bchoco07_pd[404] = x[15] + x[15];
	v[10] = bchoco07_pd[402] * bchoco07_pd[403];
	v[2] += v[10];
	bchoco07_pd[405] = x[10] * x[10];
	bchoco07_pd[406] = x[10] + x[10];
	bchoco07_pd[407] = 3. * bchoco07_pd[405];
	bchoco07_pd[408] = bchoco07_pd[407] * x[11];
	bchoco07_pd[409] = bchoco07_pd[408] * x[13];
	bchoco07_pd[410] = bchoco07_pd[409] * x[15];
	v[10] = bchoco07_pd[410] * x[16];
	v[9] = -v[10];
	v[2] += v[9];
	bchoco07_pd[411] = x[10] * x[11];
	bchoco07_pd[412] = bchoco07_pd[411] * x[12];
	v[9] = bchoco07_pd[412] * x[13];
	bchoco07_pd[413] = x[11] * x[11];
	bchoco07_pd[414] = x[11] + x[11];
	bchoco07_pd[415] = bchoco07_pd[413] * x[10];
	v[10] = bchoco07_pd[415] * x[14];
	v[11] = v[9] - v[10];
	bchoco07_pd[416] = x[10] * x[10];
	bchoco07_pd[417] = x[10] + x[10];
	bchoco07_pd[418] = x[13] * x[13];
	bchoco07_pd[419] = x[13] + x[13];
	v[10] = bchoco07_pd[416] * bchoco07_pd[418];
	v[9] = v[11] - v[10];
	bchoco07_pd[420] = 2. * x[9];
	bchoco07_pd[421] = bchoco07_pd[420] * x[10];
	bchoco07_pd[422] = bchoco07_pd[421] * x[13];
	v[10] = bchoco07_pd[422] * x[14];
	v[9] += v[10];
	bchoco07_pd[423] = x[9] * x[11];
	bchoco07_pd[424] = bchoco07_pd[423] * x[12];
	v[10] = bchoco07_pd[424] * x[14];
	v[9] += v[10];
	bchoco07_pd[425] = x[9] * x[9];
	bchoco07_pd[426] = x[9] + x[9];
	bchoco07_pd[427] = x[14] * x[14];
	bchoco07_pd[428] = x[14] + x[14];
	v[10] = bchoco07_pd[425] * bchoco07_pd[427];
	v[11] = v[9] - v[10];
	bchoco07_pd[429] = x[12] * x[12];
	bchoco07_pd[430] = x[12] + x[12];
	bchoco07_pd[431] = bchoco07_pd[429] * x[9];
	v[10] = bchoco07_pd[431] * x[13];
	bchoco07_pd[433] = v[11] - v[10];
	bchoco07_pd[432] = 1. - x[75];
	v[11] = bchoco07_pd[433] * bchoco07_pd[432];
	v[2] += v[11];
	v[11] = x[10] * x[11];
	v[12] = x[9] * x[12];
	bchoco07_pd[435] = v[11] - v[12];
	bchoco07_pd[434] = 1. - x[74];
	v[11] = bchoco07_pd[435] * bchoco07_pd[434];
	v[2] += v[11];
	t1 = v[2] + -1.e-05*x[131];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[76];
	t1 += 0.001*x[128];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[77];
	t1 += 0.001*x[129];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[78];
	t1 += 0.001*x[130];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[79];
	t1 += 0.001*x[131];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = 0.001*x[74];
	t1 += -x[80];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[81];
	t1 += 0.001*x[132];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = 0.001*x[75];
	t1 += -x[82];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[83];
	t1 += 0.001*x[133];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[76];
	t1 += -10.*x[128];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[77];
	t1 += -10.*x[129];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[78];
	t1 += -10.*x[130];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[79];
	t1 += -10.*x[131];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -10.*x[74];
	t1 += x[80];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[81];
	t1 += -10.*x[132];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -10.*x[75];
	t1 += x[82];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[83];
	t1 += -10.*x[133];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[9];
	t1 += 0.001*x[128];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[10];
	t1 += 0.001*x[129];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[11];
	t1 += 0.001*x[130];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[12];
	t1 += 0.001*x[131];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[13];
	t1 += 0.001*x[74];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[14];
	t1 += 0.001*x[132];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[15];
	t1 += 0.001*x[75];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[16];
	t1 += 0.001*x[133];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[9];
	t1 += -10.*x[128];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[10];
	t1 += -10.*x[129];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[11];
	t1 += -10.*x[130];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[12];
	t1 += -10.*x[131];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[13];
	t1 += -10.*x[74];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[14];
	t1 += -10.*x[132];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[15];
	t1 += -10.*x[75];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[16];
	t1 += -10.*x[133];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[128];
	t1 += -x[129];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[129];
	t1 += -x[130];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[130];
	t1 += -x[131];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = -x[74];
	t1 += x[131];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[74];
	t1 += -x[132];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = -x[75];
	t1 += x[132];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[75];
	t1 += -x[133];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = -1.e+09*x[1];
	t1 += 1.e+09*x[76];
	t1 += x[84];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = -x[8];
	t1 += -x[83];
	t1 += x[93];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = -x[1];
	t1 += 1.e-05*x[2];
	t1 += -1.e-10*x[3];
	t1 += x[94];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -x[2];
	t1 += 2.e-05*x[3];
	t1 += -3.e-10*x[4];
	t1 += x[95];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = -x[3];
	t1 += 3.e-05*x[4];
	t1 += -6.e-10*x[5];
	t1 += x[96];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = -x[4];
	t1 += 4.e-05*x[5];
	t1 += -1.e-09*x[6];
	t1 += x[97];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = -x[5];
	t1 += 5.e-05*x[6];
	t1 += -1.5e-09*x[7];
	t1 += x[98];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = -x[6];
	t1 += 6.e-05*x[7];
	t1 += -2.1e-09*x[8];
	t1 += x[99];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = -x[7];
	t1 += 7.e-05*x[8];
	t1 += x[100];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = -x[8];
	t1 += x[101];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[9];
	t1 += -x[76];
	t1 += 1.e-05*x[77];
	t1 += -1.e-10*x[78];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[10];
	t1 += -x[77];
	t1 += 2.e-05*x[78];
	t1 += -3.e-10*x[79];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[11];
	t1 += -x[78];
	t1 += 3.e-05*x[79];
	t1 += -6.e-10*x[80];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[12];
	t1 += -x[79];
	t1 += 4.e-05*x[80];
	t1 += -1.e-09*x[81];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[13];
	t1 += -x[80];
	t1 += 5.e-05*x[81];
	t1 += -1.5e-09*x[82];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[14];
	t1 += -x[81];
	t1 += 6.e-05*x[82];
	t1 += -2.1e-09*x[83];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[15];
	t1 += -x[82];
	t1 += 7.e-05*x[83];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[16];
	t1 += -x[83];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -x[84];
	t1 += 1.e-05*x[85];
	t1 += -1.e-10*x[86];
	t1 += x[102];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -x[85];
	t1 += 2.e-05*x[86];
	t1 += -3.e-10*x[87];
	t1 += x[103];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = -x[86];
	t1 += 3.e-05*x[87];
	t1 += -6.e-10*x[88];
	t1 += x[104];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = -x[87];
	t1 += 4.e-05*x[88];
	t1 += -1.e-09*x[89];
	t1 += x[105];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = -x[88];
	t1 += 5.e-05*x[89];
	t1 += -1.5e-09*x[90];
	t1 += x[106];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = -x[89];
	t1 += 6.e-05*x[90];
	t1 += -2.1e-09*x[91];
	t1 += x[107];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -x[90];
	t1 += 7.e-05*x[91];
	t1 += -2.8e-09*x[92];
	t1 += x[108];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = -x[91];
	t1 += 8.e-05*x[92];
	t1 += -3.6e-09*x[93];
	t1 += x[109];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = -x[92];
	t1 += 9.e-05*x[93];
	t1 += x[110];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = -x[93];
	t1 += x[111];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[17];
	t1 += -x[101];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = -x[99];
	t1 += x[112];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = -x[97];
	t1 += x[113];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = -x[95];
	t1 += x[114];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[18];
	t1 += -x[100];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[19];
	t1 += -x[98];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[20];
	t1 += -x[96];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[21];
	t1 += -x[94];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[25];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[29];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[33];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = x[37];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = x[118];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = x[38];
	t1 += -x[111];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = -x[109];
	t1 += x[119];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = -x[107];
	t1 += x[120];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = -x[105];
	t1 += x[121];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = -x[103];
	t1 += x[122];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = x[39];
	t1 += -x[110];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = x[40];
	t1 += -x[108];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = x[41];
	t1 += -x[106];
	c[143] = t1;

  /***  constraint 145  ***/

	t1 = x[42];
	t1 += -x[104];
	c[144] = t1;

  /***  constraint 146  ***/

	t1 = x[43];
	t1 += -x[102];
	c[145] = t1;

  /***  constraint 147  ***/

	t1 = x[48];
	c[146] = t1;

  /***  constraint 148  ***/

	t1 = x[53];
	c[147] = t1;

  /***  constraint 149  ***/

	t1 = x[58];
	c[148] = t1;

  /***  constraint 150  ***/

	t1 = x[63];
	c[149] = t1;

  /***  constraint 151  ***/

	t1 = x[68];
	c[150] = t1;

  /***  constraint 152  ***/

	t1 = x[73];
	c[151] = t1;

  /***  constraint 153  ***/

	t1 = x[127];
	c[152] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = bchoco07_pd[0];
	J[0] = x[1]*2.e+08;
	J[12] = -1.e+08;
	J[356] = 1.e+08;
	J[406] = 1.;

   /*** derivatives for constraint 2 ***/

	J[13] = bchoco07_pd[1];
	J[1] = x[2]*2.e+07;
	J[9] = -1.e+07;
	J[17] = -1.e+07;
	J[351] = -1.e+07;
	J[362] = 1.e+07;
	J[409] = 1.;

   /*** derivatives for constraint 3 ***/

	J[18] = bchoco07_pd[2];
	J[2] = x[3]*2.e+06;
	J[14] = -1.e+06;
	J[23] = -1.e+06;
	J[357] = -1.e+06;
	J[369] = 1.e+06;
	J[413] = 1.;

   /*** derivatives for constraint 4 ***/

	J[24] = bchoco07_pd[3];
	J[3] = x[4]*200000.;
	J[19] = -100000.;
	J[29] = -100000.;
	J[363] = -100000.;
	J[376] = 100000.;
	J[417] = 1.;

   /*** derivatives for constraint 5 ***/

	J[30] = bchoco07_pd[4];
	J[4] = x[5]*20000.;
	J[25] = -10000.;
	J[35] = -10000.;
	J[370] = -10000.;
	J[383] = 10000.;
	J[421] = 1.;

   /*** derivatives for constraint 6 ***/

	J[36] = bchoco07_pd[5];
	J[5] = x[6]*2000.;
	J[31] = -1000.;
	J[41] = -1000.;
	J[377] = -1000.;
	J[390] = 1000.;
	J[425] = 1.;

   /*** derivatives for constraint 7 ***/

	J[42] = bchoco07_pd[6];
	J[6] = x[7]*200.;
	J[37] = -100.;
	J[47] = -100.;
	J[384] = -100.;
	J[397] = 100.;
	J[429] = 1.;

   /*** derivatives for constraint 8 ***/

	J[48] = bchoco07_pd[7];
	J[7] = x[8]*20.;
	J[43] = -10.;
	J[391] = -10.;
	J[433] = 1.;

   /*** derivatives for constraint 9 ***/

	J[115] = bchoco07_pd[9];
	J[122] = bchoco07_pd[8]*x[17];
	J[111] = bchoco07_pd[8]*x[19];
	J[131] = 1.;
	J[477] = -1.;

   /*** derivatives for constraint 10 ***/

	J[116] = bchoco07_pd[11];
	J[125] = bchoco07_pd[10]*x[17];
	J[112] = bchoco07_pd[10]*x[20];
	J[138] = 1.;
	J[479] = -1.;

   /*** derivatives for constraint 11 ***/

	J[117] = bchoco07_pd[13];
	J[128] = bchoco07_pd[12]*x[17];
	J[113] = bchoco07_pd[12]*x[21];
	J[141] = 1.;
	J[481] = -1.;

   /*** derivatives for constraint 12 ***/

	J[132] = bchoco07_pd[15];
	J[139] = bchoco07_pd[14]*x[18];
	J[118] = bchoco07_pd[14]*x[23];
	J[123] = -1.;
	J[147] = 1.;

   /*** derivatives for constraint 13 ***/

	J[133] = bchoco07_pd[17];
	J[142] = bchoco07_pd[16]*x[18];
	J[119] = bchoco07_pd[16]*x[24];
	J[126] = -1.;
	J[154] = 1.;

   /*** derivatives for constraint 14 ***/

	J[134] = bchoco07_pd[19];
	J[144] = bchoco07_pd[18]*x[18];
	J[120] = bchoco07_pd[18]*x[25];
	J[129] = -1.;
	J[157] = 1.;

   /*** derivatives for constraint 15 ***/

	J[148] = bchoco07_pd[21];
	J[155] = bchoco07_pd[20]*x[22];
	J[135] = bchoco07_pd[20]*x[27];
	J[140] = -1.;
	J[163] = 1.;

   /*** derivatives for constraint 16 ***/

	J[149] = bchoco07_pd[23];
	J[158] = bchoco07_pd[22]*x[22];
	J[136] = bchoco07_pd[22]*x[28];
	J[143] = -1.;
	J[170] = 1.;

   /*** derivatives for constraint 17 ***/

	J[150] = bchoco07_pd[25];
	J[160] = bchoco07_pd[24]*x[22];
	J[137] = bchoco07_pd[24]*x[29];
	J[145] = -1.;
	J[173] = 1.;

   /*** derivatives for constraint 18 ***/

	J[164] = bchoco07_pd[27];
	J[171] = bchoco07_pd[26]*x[26];
	J[151] = bchoco07_pd[26]*x[31];
	J[156] = -1.;
	J[179] = 1.;

   /*** derivatives for constraint 19 ***/

	J[165] = bchoco07_pd[29];
	J[174] = bchoco07_pd[28]*x[26];
	J[152] = bchoco07_pd[28]*x[32];
	J[159] = -1.;
	J[183] = 1.;

   /*** derivatives for constraint 20 ***/

	J[166] = bchoco07_pd[31];
	J[176] = bchoco07_pd[30]*x[26];
	J[153] = bchoco07_pd[30]*x[33];
	J[161] = -1.;
	J[185] = 1.;

   /*** derivatives for constraint 21 ***/

	J[180] = bchoco07_pd[33];
	J[184] = bchoco07_pd[32]*x[30];
	J[167] = bchoco07_pd[32]*x[35];
	J[172] = -1.;
	J[483] = 1.;

   /*** derivatives for constraint 22 ***/

	J[181] = bchoco07_pd[35];
	J[186] = bchoco07_pd[34]*x[30];
	J[168] = bchoco07_pd[34]*x[36];
	J[175] = -1.;
	J[484] = 1.;

   /*** derivatives for constraint 23 ***/

	J[182] = bchoco07_pd[37];
	J[187] = bchoco07_pd[36]*x[30];
	J[169] = bchoco07_pd[36]*x[37];
	J[177] = -1.;
	J[485] = 1.;

   /*** derivatives for constraint 24 ***/

	J[194] = bchoco07_pd[39];
	J[203] = bchoco07_pd[38]*x[38];
	J[189] = bchoco07_pd[38]*x[40];
	J[215] = 1.;
	J[487] = -1.;

   /*** derivatives for constraint 25 ***/

	J[195] = bchoco07_pd[41];
	J[206] = bchoco07_pd[40]*x[38];
	J[190] = bchoco07_pd[40]*x[41];
	J[224] = 1.;
	J[489] = -1.;

   /*** derivatives for constraint 26 ***/

	J[196] = bchoco07_pd[43];
	J[209] = bchoco07_pd[42]*x[38];
	J[191] = bchoco07_pd[42]*x[42];
	J[227] = 1.;
	J[491] = -1.;

   /*** derivatives for constraint 27 ***/

	J[197] = bchoco07_pd[45];
	J[212] = bchoco07_pd[44]*x[38];
	J[192] = bchoco07_pd[44]*x[43];
	J[230] = 1.;
	J[493] = -1.;

   /*** derivatives for constraint 28 ***/

	J[216] = bchoco07_pd[47];
	J[225] = bchoco07_pd[46]*x[39];
	J[198] = bchoco07_pd[46]*x[45];
	J[204] = -1.;
	J[236] = 1.;

   /*** derivatives for constraint 29 ***/

	J[217] = bchoco07_pd[49];
	J[228] = bchoco07_pd[48]*x[39];
	J[199] = bchoco07_pd[48]*x[46];
	J[207] = -1.;
	J[245] = 1.;

   /*** derivatives for constraint 30 ***/

	J[218] = bchoco07_pd[51];
	J[231] = bchoco07_pd[50]*x[39];
	J[200] = bchoco07_pd[50]*x[47];
	J[210] = -1.;
	J[248] = 1.;

   /*** derivatives for constraint 31 ***/

	J[219] = bchoco07_pd[53];
	J[233] = bchoco07_pd[52]*x[39];
	J[201] = bchoco07_pd[52]*x[48];
	J[213] = -1.;
	J[251] = 1.;

   /*** derivatives for constraint 32 ***/

	J[237] = bchoco07_pd[55];
	J[246] = bchoco07_pd[54]*x[44];
	J[220] = bchoco07_pd[54]*x[50];
	J[226] = -1.;
	J[257] = 1.;

   /*** derivatives for constraint 33 ***/

	J[238] = bchoco07_pd[57];
	J[249] = bchoco07_pd[56]*x[44];
	J[221] = bchoco07_pd[56]*x[51];
	J[229] = -1.;
	J[266] = 1.;

   /*** derivatives for constraint 34 ***/

	J[239] = bchoco07_pd[59];
	J[252] = bchoco07_pd[58]*x[44];
	J[222] = bchoco07_pd[58]*x[52];
	J[232] = -1.;
	J[269] = 1.;

   /*** derivatives for constraint 35 ***/

	J[240] = bchoco07_pd[61];
	J[254] = bchoco07_pd[60]*x[44];
	J[223] = bchoco07_pd[60]*x[53];
	J[234] = -1.;
	J[272] = 1.;

   /*** derivatives for constraint 36 ***/

	J[258] = bchoco07_pd[63];
	J[267] = bchoco07_pd[62]*x[49];
	J[241] = bchoco07_pd[62]*x[55];
	J[247] = -1.;
	J[278] = 1.;

   /*** derivatives for constraint 37 ***/

	J[259] = bchoco07_pd[65];
	J[270] = bchoco07_pd[64]*x[49];
	J[242] = bchoco07_pd[64]*x[56];
	J[250] = -1.;
	J[287] = 1.;

   /*** derivatives for constraint 38 ***/

	J[260] = bchoco07_pd[67];
	J[273] = bchoco07_pd[66]*x[49];
	J[243] = bchoco07_pd[66]*x[57];
	J[253] = -1.;
	J[290] = 1.;

   /*** derivatives for constraint 39 ***/

	J[261] = bchoco07_pd[69];
	J[275] = bchoco07_pd[68]*x[49];
	J[244] = bchoco07_pd[68]*x[58];
	J[255] = -1.;
	J[293] = 1.;

   /*** derivatives for constraint 40 ***/

	J[279] = bchoco07_pd[71];
	J[288] = bchoco07_pd[70]*x[54];
	J[262] = bchoco07_pd[70]*x[60];
	J[268] = -1.;
	J[299] = 1.;

   /*** derivatives for constraint 41 ***/

	J[280] = bchoco07_pd[73];
	J[291] = bchoco07_pd[72]*x[54];
	J[263] = bchoco07_pd[72]*x[61];
	J[271] = -1.;
	J[308] = 1.;

   /*** derivatives for constraint 42 ***/

	J[281] = bchoco07_pd[75];
	J[294] = bchoco07_pd[74]*x[54];
	J[264] = bchoco07_pd[74]*x[62];
	J[274] = -1.;
	J[311] = 1.;

   /*** derivatives for constraint 43 ***/

	J[282] = bchoco07_pd[77];
	J[296] = bchoco07_pd[76]*x[54];
	J[265] = bchoco07_pd[76]*x[63];
	J[276] = -1.;
	J[314] = 1.;

   /*** derivatives for constraint 44 ***/

	J[300] = bchoco07_pd[79];
	J[309] = bchoco07_pd[78]*x[59];
	J[283] = bchoco07_pd[78]*x[65];
	J[289] = -1.;
	J[320] = 1.;

   /*** derivatives for constraint 45 ***/

	J[301] = bchoco07_pd[81];
	J[312] = bchoco07_pd[80]*x[59];
	J[284] = bchoco07_pd[80]*x[66];
	J[292] = -1.;
	J[325] = 1.;

   /*** derivatives for constraint 46 ***/

	J[302] = bchoco07_pd[83];
	J[315] = bchoco07_pd[82]*x[59];
	J[285] = bchoco07_pd[82]*x[67];
	J[295] = -1.;
	J[327] = 1.;

   /*** derivatives for constraint 47 ***/

	J[303] = bchoco07_pd[85];
	J[317] = bchoco07_pd[84]*x[59];
	J[286] = bchoco07_pd[84]*x[68];
	J[297] = -1.;
	J[329] = 1.;

   /*** derivatives for constraint 48 ***/

	J[321] = bchoco07_pd[87];
	J[326] = bchoco07_pd[86]*x[64];
	J[304] = bchoco07_pd[86]*x[70];
	J[310] = -1.;
	J[495] = 1.;

   /*** derivatives for constraint 49 ***/

	J[322] = bchoco07_pd[89];
	J[328] = bchoco07_pd[88]*x[64];
	J[305] = bchoco07_pd[88]*x[71];
	J[313] = -1.;
	J[496] = 1.;

   /*** derivatives for constraint 50 ***/

	J[323] = bchoco07_pd[91];
	J[330] = bchoco07_pd[90]*x[64];
	J[306] = bchoco07_pd[90]*x[72];
	J[316] = -1.;
	J[497] = 1.;

   /*** derivatives for constraint 51 ***/

	J[324] = bchoco07_pd[93];
	J[331] = bchoco07_pd[92]*x[64];
	J[307] = bchoco07_pd[92]*x[73];
	J[318] = -1.;
	J[498] = 1.;

   /*** derivatives for constraint 52 ***/

	J[103] = -x[13];
	J[79] = -x[16];
	J[95] = x[14];
	J[87] = x[15];
	J[531] = -1.e-05;

   /*** derivatives for constraint 53 ***/

	J[96] = -bchoco07_pd[97];
	J[96] -= x[15]*x[12];
	J[72] = -x[15]*x[15];
	J[104] = bchoco07_pd[96];
	J[96] += x[16]*x[11];
	J[65] = x[16]*x[15];
	J[104] -= bchoco07_pd[95];
	J[80] = -x[16]*x[13];
	J[80] -= x[16]*x[13];
	J[96] += bchoco07_pd[94];
	J[88] = x[15]*x[13];
	J[80] += x[15]*x[14];
	J[341] = -1.e-05;

   /*** derivatives for constraint 54 ***/

	J[342] = -bchoco07_pd[130];
	dv[0] = -bchoco07_pd[129];
	J[89] = dv[0]*x[11];
	J[66] = dv[0]*x[14];
	J[81] = bchoco07_pd[129]*x[12];
	J[73] = bchoco07_pd[129]*x[13];
	J[105] = bchoco07_pd[126]*bchoco07_pd[128];
	J[81] += bchoco07_pd[127]*x[9];
	J[53] = bchoco07_pd[127]*x[13];
	J[105] -= bchoco07_pd[125];
	J[97] = -x[16]*bchoco07_pd[124];
	dv[1] = -x[16]*x[15];
	J[89] += dv[1]*x[9];
	J[53] += dv[1]*x[14];
	J[105] -= bchoco07_pd[123];
	J[97] -= x[16]*bchoco07_pd[122];
	dv[2] = -x[16]*x[15];
	J[81] += dv[2]*x[10];
	J[59] = dv[2]*x[13];
	J[97] += bchoco07_pd[119]*bchoco07_pd[121];
	J[89] += bchoco07_pd[120]*x[10];
	J[59] += bchoco07_pd[120]*x[14];
	J[97] -= bchoco07_pd[118];
	J[66] -= x[15]*bchoco07_pd[116];
	dv[3] = -x[15]*x[11];
	J[89] += dv[3]*bchoco07_pd[117];
	J[105] += bchoco07_pd[115];
	J[89] += x[16]*bchoco07_pd[114];
	dv[4] = x[16]*x[14];
	J[81] += dv[4]*x[11];
	J[66] += dv[4]*x[13];
	J[105] -= bchoco07_pd[110]*bchoco07_pd[113];
	J[66] -= bchoco07_pd[112]*bchoco07_pd[111];
	J[105] += bchoco07_pd[109];
	J[97] += x[16]*bchoco07_pd[108];
	dv[5] = x[16]*x[15];
	J[73] += dv[5]*bchoco07_pd[107];
	dv[5] *= x[12];
	J[66] += dv[5]*2.;
	J[97] -= bchoco07_pd[103]*bchoco07_pd[106];
	J[73] -= bchoco07_pd[105]*bchoco07_pd[104];
	J[105] -= bchoco07_pd[102];
	J[73] -= x[16]*bchoco07_pd[100];
	dv[6] = -x[16]*x[12];
	J[81] += dv[6]*bchoco07_pd[101];
	J[97] += bchoco07_pd[99];
	J[89] += x[15]*bchoco07_pd[98];
	dv[7] = x[15]*x[14];
	J[81] += dv[7]*x[12];
	J[73] += dv[7]*x[13];
	J[524] = -1.e-05;

   /*** derivatives for constraint 55 ***/

	J[343] = -bchoco07_pd[222];
	dv[0] = bchoco07_pd[221];
	J[90] = dv[0]*bchoco07_pd[220];
	dv[0] *= x[14];
	J[82] = dv[0]*x[9];
	J[54] = dv[0]*x[13];
	dv[1] = -bchoco07_pd[221];
	J[60] = dv[1]*bchoco07_pd[218];
	dv[1] *= x[10];
	J[82] += dv[1]*bchoco07_pd[219];
	dv[2] = -bchoco07_pd[221];
	J[90] += dv[2]*bchoco07_pd[216];
	dv[2] *= x[14];
	J[67] = dv[2]*bchoco07_pd[217];
	J[82] += bchoco07_pd[221]*bchoco07_pd[215];
	dv[3] = bchoco07_pd[221]*x[13];
	J[74] = dv[3]*x[11];
	J[67] += dv[3]*x[12];
	J[98] = bchoco07_pd[214];
	dv[4] = x[15]*bchoco07_pd[211];
	dv[5] = x[15]*bchoco07_pd[212];
	J[90] += dv[4]*bchoco07_pd[213];
	J[82] += dv[5]*x[9];
	J[54] += dv[5]*x[13];
	J[106] = bchoco07_pd[208]*bchoco07_pd[210];
	J[82] += bchoco07_pd[209]*bchoco07_pd[207];
	dv[6] = bchoco07_pd[209]*x[13];
	J[67] += dv[6]*bchoco07_pd[206];
	dv[6] *= x[11];
	J[54] += dv[6]*2.;
	J[106] += bchoco07_pd[205];
	dv[7] = x[16]*bchoco07_pd[202];
	dv[8] = x[16]*bchoco07_pd[203];
	J[98] += dv[7]*bchoco07_pd[204];
	J[60] += dv[8]*bchoco07_pd[201];
	dv[8] *= x[10];
	J[54] += dv[8]*2.;
	J[106] -= bchoco07_pd[200];
	J[90] -= x[16]*bchoco07_pd[199];
	dv[9] = -x[16]*x[14];
	J[54] += dv[9]*bchoco07_pd[197];
	dv[9] *= x[9];
	J[82] += dv[9]*bchoco07_pd[198];
	J[106] -= bchoco07_pd[196];
	J[98] -= x[16]*bchoco07_pd[195];
	dv[10] = -x[16]*x[15];
	J[90] += dv[10]*bchoco07_pd[194];
	dv[10] *= x[14];
	J[67] += dv[10]*x[9];
	J[54] += dv[10]*x[11];
	J[98] -= bchoco07_pd[191]*bchoco07_pd[193];
	J[90] -= bchoco07_pd[192]*bchoco07_pd[190];
	dv[11] = -bchoco07_pd[192]*x[14];
	J[74] += dv[11]*x[9];
	J[54] += dv[11]*x[12];
	J[106] -= bchoco07_pd[187]*bchoco07_pd[189];
	J[98] -= bchoco07_pd[188]*bchoco07_pd[185];
	dv[12] = -bchoco07_pd[188]*x[15];
	J[54] += dv[12]*bchoco07_pd[186];
	J[98] -= bchoco07_pd[181]*bchoco07_pd[183];
	J[60] -= bchoco07_pd[184]*bchoco07_pd[182];
	J[98] += bchoco07_pd[178]*bchoco07_pd[180];
	J[90] += bchoco07_pd[179]*bchoco07_pd[177];
	dv[13] = bchoco07_pd[179]*x[14];
	J[67] += dv[13]*bchoco07_pd[176];
	dv[13] *= x[11];
	J[60] += dv[13]*2.;
	J[98] += bchoco07_pd[173]*bchoco07_pd[175];
	J[82] += bchoco07_pd[174]*bchoco07_pd[172];
	dv[14] = bchoco07_pd[174]*x[13];
	J[74] += dv[14]*x[10];
	J[60] += dv[14]*x[12];
	J[98] -= bchoco07_pd[171];
	J[90] -= x[15]*bchoco07_pd[170];
	dv[15] = -x[15]*x[14];
	J[60] += dv[15]*bchoco07_pd[168];
	dv[15] *= x[10];
	J[82] += dv[15]*bchoco07_pd[169];
	J[106] += bchoco07_pd[167];
	J[60] += x[16]*bchoco07_pd[166];
	dv[16] = x[16]*x[10];
	J[82] += dv[16]*bchoco07_pd[165];
	J[106] -= bchoco07_pd[164];
	J[98] -= x[16]*bchoco07_pd[163];
	dv[17] = -x[16]*x[15];
	J[82] += dv[17]*bchoco07_pd[162];
	dv[17] *= x[13];
	J[67] += dv[17]*bchoco07_pd[161];
	dv[17] *= x[11];
	J[60] += dv[17]*3.;
	J[98] -= bchoco07_pd[160];
	dv[18] = -x[15]*bchoco07_pd[156];
	dv[19] = -x[15]*bchoco07_pd[158];
	J[90] += dv[18]*bchoco07_pd[159];
	J[67] += dv[19]*bchoco07_pd[157];
	J[106] += bchoco07_pd[155];
	J[90] += x[16]*bchoco07_pd[154];
	dv[20] = x[16]*x[14];
	J[82] += dv[20]*bchoco07_pd[152];
	dv[20] *= x[13];
	J[67] += dv[20]*bchoco07_pd[153];
	J[106] -= bchoco07_pd[151]*bchoco07_pd[150];
	J[67] -= bchoco07_pd[149]*bchoco07_pd[148];
	J[98] -= bchoco07_pd[145]*bchoco07_pd[147];
	J[67] -= bchoco07_pd[146]*bchoco07_pd[143];
	dv[21] = -bchoco07_pd[146]*x[11];
	J[74] += dv[21]*bchoco07_pd[144];
	J[106] += bchoco07_pd[142];
	J[98] += x[16]*bchoco07_pd[141];
	dv[22] = x[16]*x[15];
	J[74] += dv[22]*bchoco07_pd[140];
	dv[22] *= x[12];
	dv[22] *= 2.;
	J[67] += dv[22]*bchoco07_pd[139];
	J[106] -= bchoco07_pd[137];
	dv[23] = -x[16]*bchoco07_pd[134];
	dv[24] = -x[16]*bchoco07_pd[135];
	J[82] += dv[23]*bchoco07_pd[136];
	J[74] += dv[24]*x[11];
	J[67] += dv[24]*x[12];
	J[98] += bchoco07_pd[133];
	J[90] += x[15]*bchoco07_pd[132];
	dv[25] = x[15]*x[14];
	J[82] += dv[25]*bchoco07_pd[131];
	dv[25] *= x[13];
	J[74] += dv[25]*x[11];
	J[67] += dv[25]*x[12];
	J[333] = -1.e-05;

   /*** derivatives for constraint 56 ***/

	J[334] = -bchoco07_pd[435];
	dv[0] = -bchoco07_pd[434];
	J[75] = dv[0]*x[9];
	J[55] = dv[0]*x[12];
	J[68] = bchoco07_pd[434]*x[10];
	J[61] = bchoco07_pd[434]*x[11];
	J[344] = -bchoco07_pd[433];
	dv[1] = -bchoco07_pd[432];
	J[83] = dv[1]*bchoco07_pd[431];
	dv[1] *= x[13];
	J[55] += dv[1]*bchoco07_pd[429];
	dv[1] *= x[9];
	J[75] += dv[1]*bchoco07_pd[430];
	dv[2] = -bchoco07_pd[432];
	dv[3] = dv[2]*bchoco07_pd[425];
	dv[2] *= bchoco07_pd[427];
	J[91] = dv[3]*bchoco07_pd[428];
	J[55] += dv[2]*bchoco07_pd[426];
	dv[4] = bchoco07_pd[432];
	J[91] += dv[4]*bchoco07_pd[424];
	dv[4] *= x[14];
	J[75] += dv[4]*bchoco07_pd[423];
	dv[4] *= x[12];
	J[68] += dv[4]*x[9];
	J[55] += dv[4]*x[11];
	dv[5] = bchoco07_pd[432];
	J[91] += dv[5]*bchoco07_pd[422];
	dv[5] *= x[14];
	J[83] += dv[5]*bchoco07_pd[421];
	dv[5] *= x[13];
	J[61] += dv[5]*bchoco07_pd[420];
	dv[5] *= x[10];
	J[55] += dv[5]*2.;
	dv[6] = -bchoco07_pd[432];
	dv[7] = dv[6]*bchoco07_pd[416];
	dv[6] *= bchoco07_pd[418];
	J[83] += dv[7]*bchoco07_pd[419];
	J[61] += dv[6]*bchoco07_pd[417];
	dv[8] = -bchoco07_pd[432];
	J[91] += dv[8]*bchoco07_pd[415];
	dv[8] *= x[14];
	J[61] += dv[8]*bchoco07_pd[413];
	dv[8] *= x[10];
	J[68] += dv[8]*bchoco07_pd[414];
	J[83] += bchoco07_pd[432]*bchoco07_pd[412];
	dv[9] = bchoco07_pd[432]*x[13];
	J[75] += dv[9]*bchoco07_pd[411];
	dv[9] *= x[12];
	J[68] += dv[9]*x[10];
	J[61] += dv[9]*x[11];
	J[107] = -bchoco07_pd[410];
	J[99] = -x[16]*bchoco07_pd[409];
	dv[10] = -x[16]*x[15];
	J[83] += dv[10]*bchoco07_pd[408];
	dv[10] *= x[13];
	J[68] += dv[10]*bchoco07_pd[407];
	dv[10] *= x[11];
	dv[10] *= 3.;
	J[61] += dv[10]*bchoco07_pd[406];
	J[99] += bchoco07_pd[402]*bchoco07_pd[404];
	J[83] += bchoco07_pd[403]*bchoco07_pd[401];
	dv[11] = bchoco07_pd[403]*x[13];
	J[75] += dv[11]*bchoco07_pd[399];
	dv[11] *= x[12];
	J[61] += dv[11]*bchoco07_pd[400];
	J[99] += bchoco07_pd[398];
	J[91] += x[15]*bchoco07_pd[397];
	dv[12] = x[15]*x[14];
	J[83] += dv[12]*bchoco07_pd[396];
	dv[12] *= x[13];
	J[75] += dv[12]*bchoco07_pd[395];
	dv[12] *= x[12];
	J[68] += dv[12]*x[10];
	J[61] += dv[12]*x[11];
	J[107] -= bchoco07_pd[394];
	dv[13] = -x[16]*bchoco07_pd[391];
	dv[14] = -x[16]*bchoco07_pd[392];
	J[83] += dv[13]*bchoco07_pd[393];
	J[75] += dv[14]*bchoco07_pd[390];
	dv[14] *= x[12];
	J[68] += dv[14]*x[10];
	J[61] += dv[14]*x[11];
	J[99] -= bchoco07_pd[389];
	dv[15] = -x[15]*bchoco07_pd[386];
	dv[16] = -x[15]*bchoco07_pd[387];
	J[91] += dv[15]*bchoco07_pd[388];
	J[61] += dv[16]*bchoco07_pd[384];
	dv[16] *= x[10];
	J[68] += dv[16]*bchoco07_pd[385];
	J[107] -= bchoco07_pd[381]*bchoco07_pd[383];
	J[61] -= bchoco07_pd[382]*bchoco07_pd[380];
	dv[17] = -bchoco07_pd[382]*x[10];
	J[68] += dv[17]*bchoco07_pd[379];
	J[99] -= bchoco07_pd[378];
	J[91] -= x[15]*bchoco07_pd[377];
	dv[18] = -x[15]*x[14];
	dv[19] = dv[18]*bchoco07_pd[373];
	dv[18] *= bchoco07_pd[375];
	J[83] += dv[19]*bchoco07_pd[376];
	J[61] += dv[18]*bchoco07_pd[374];
	J[99] -= bchoco07_pd[372]*bchoco07_pd[370];
	J[61] -= bchoco07_pd[371]*bchoco07_pd[369];
	J[99] -= bchoco07_pd[366]*bchoco07_pd[368];
	dv[20] = -bchoco07_pd[367]*bchoco07_pd[363];
	dv[21] = -bchoco07_pd[367]*bchoco07_pd[364];
	J[75] += dv[20]*bchoco07_pd[365];
	J[68] += dv[21]*x[10];
	J[61] += dv[21]*x[11];
	J[107] += bchoco07_pd[362];
	dv[22] = x[16]*bchoco07_pd[358];
	dv[23] = x[16]*bchoco07_pd[361];
	J[83] += dv[22]*bchoco07_pd[360];
	J[61] += dv[23]*bchoco07_pd[359];
	J[107] += bchoco07_pd[357];
	J[99] += x[16]*bchoco07_pd[356];
	dv[24] = x[16]*x[15];
	J[75] += dv[24]*bchoco07_pd[355];
	dv[24] *= x[12];
	J[61] += dv[24]*bchoco07_pd[354];
	dv[24] *= x[10];
	dv[24] *= 2.;
	J[68] += dv[24]*bchoco07_pd[353];
	J[99] += bchoco07_pd[349]*bchoco07_pd[351];
	J[91] += bchoco07_pd[350]*bchoco07_pd[348];
	dv[25] = bchoco07_pd[350]*x[14];
	J[68] += dv[25]*bchoco07_pd[347];
	dv[25] *= x[11];
	dv[25] *= 2.;
	J[61] += dv[25]*bchoco07_pd[346];
	J[107] += bchoco07_pd[344];
	J[91] += x[16]*bchoco07_pd[343];
	dv[26] = x[16]*x[14];
	J[83] += dv[26]*bchoco07_pd[342];
	dv[26] *= x[13];
	J[61] += dv[26]*bchoco07_pd[340];
	dv[26] *= x[10];
	J[68] += dv[26]*bchoco07_pd[341];
	J[107] += bchoco07_pd[339];
	dv[27] = x[16]*bchoco07_pd[336];
	dv[28] = x[16]*bchoco07_pd[337];
	J[83] += dv[27]*bchoco07_pd[338];
	J[55] += dv[28]*bchoco07_pd[334];
	dv[28] *= x[9];
	J[75] += dv[28]*bchoco07_pd[335];
	J[107] += bchoco07_pd[333];
	dv[29] = x[16]*bchoco07_pd[330];
	dv[30] = x[16]*bchoco07_pd[331];
	J[99] += dv[29]*bchoco07_pd[332];
	J[55] += dv[30]*bchoco07_pd[329];
	dv[30] *= x[9];
	dv[30] *= 3.;
	J[61] += dv[30]*bchoco07_pd[328];
	J[99] += bchoco07_pd[326];
	dv[31] = x[15]*bchoco07_pd[323];
	dv[32] = x[15]*bchoco07_pd[324];
	J[91] += dv[31]*bchoco07_pd[325];
	J[83] += dv[32]*bchoco07_pd[322];
	dv[32] *= x[13];
	J[61] += dv[32]*bchoco07_pd[321];
	dv[32] *= x[10];
	J[55] += dv[32]*2.;
	J[107] += bchoco07_pd[318]*bchoco07_pd[320];
	J[83] += bchoco07_pd[319]*bchoco07_pd[317];
	dv[33] = bchoco07_pd[319]*x[13];
	J[68] += dv[33]*bchoco07_pd[316];
	dv[33] *= x[11];
	J[61] += dv[33]*bchoco07_pd[315];
	dv[33] *= x[10];
	J[55] += dv[33]*3.;
	J[99] -= bchoco07_pd[312]*bchoco07_pd[314];
	J[91] -= bchoco07_pd[313]*bchoco07_pd[311];
	dv[34] = -bchoco07_pd[313]*x[14];
	J[75] += dv[34]*bchoco07_pd[310];
	dv[34] *= x[12];
	J[61] += dv[34]*bchoco07_pd[309];
	dv[34] *= x[10];
	J[55] += dv[34]*3.;
	J[107] -= bchoco07_pd[308];
	J[99] -= x[16]*bchoco07_pd[307];
	dv[35] = -x[16]*x[15];
	dv[36] = dv[35]*bchoco07_pd[304];
	dv[35] *= bchoco07_pd[305];
	J[75] += dv[36]*bchoco07_pd[306];
	J[68] += dv[35]*bchoco07_pd[303];
	dv[35] *= x[11];
	J[55] += dv[35]*2.;
	J[107] -= bchoco07_pd[302];
	J[99] -= x[16]*bchoco07_pd[301];
	dv[37] = -x[16]*x[15];
	J[91] += dv[37]*bchoco07_pd[300];
	dv[37] *= x[14];
	J[68] += dv[37]*bchoco07_pd[299];
	dv[37] *= x[11];
	J[61] += dv[37]*x[9];
	J[55] += dv[37]*x[10];
	J[107] += bchoco07_pd[296]*bchoco07_pd[298];
	J[75] += bchoco07_pd[297]*bchoco07_pd[295];
	dv[38] = bchoco07_pd[297]*x[12];
	J[55] += dv[38]*bchoco07_pd[293];
	dv[38] *= x[9];
	J[68] += dv[38]*bchoco07_pd[294];
	J[107] -= bchoco07_pd[292];
	J[91] -= x[16]*bchoco07_pd[291];
	dv[39] = -x[16]*x[14];
	dv[40] = dv[39]*bchoco07_pd[288];
	dv[39] *= bchoco07_pd[289];
	J[83] += dv[40]*bchoco07_pd[290];
	J[61] += dv[39]*bchoco07_pd[287];
	dv[39] *= x[10];
	J[55] += dv[39]*2.;
	J[107] -= bchoco07_pd[286];
	J[91] -= x[16]*bchoco07_pd[285];
	dv[41] = -x[16]*x[14];
	J[83] += dv[41]*bchoco07_pd[284];
	dv[41] *= x[13];
	J[75] += dv[41]*bchoco07_pd[283];
	dv[41] *= x[12];
	J[68] += dv[41]*x[9];
	J[55] += dv[41]*x[11];
	J[99] -= bchoco07_pd[282];
	J[91] -= x[15]*bchoco07_pd[281];
	dv[42] = -x[15]*x[14];
	J[83] += dv[42]*bchoco07_pd[280];
	dv[42] *= x[13];
	J[55] += dv[42]*bchoco07_pd[278];
	dv[42] *= x[9];
	J[75] += dv[42]*bchoco07_pd[279];
	J[107] += bchoco07_pd[277];
	J[99] += x[16]*bchoco07_pd[276];
	dv[43] = x[16]*x[15];
	J[83] += dv[43]*bchoco07_pd[275];
	dv[43] *= x[13];
	J[75] += dv[43]*bchoco07_pd[274];
	dv[43] *= x[12];
	J[61] += dv[43]*x[9];
	J[55] += dv[43]*x[10];
	J[99] += bchoco07_pd[271]*bchoco07_pd[273];
	J[55] += bchoco07_pd[272]*bchoco07_pd[270];
	dv[44] = bchoco07_pd[272]*x[9];
	J[75] += dv[44]*bchoco07_pd[269];
	J[99] += bchoco07_pd[268];
	dv[45] = x[15]*bchoco07_pd[265];
	dv[46] = x[15]*bchoco07_pd[266];
	J[91] += dv[45]*bchoco07_pd[267];
	J[75] += dv[46]*bchoco07_pd[264];
	dv[46] *= x[12];
	J[68] += dv[46]*x[9];
	J[55] += dv[46]*x[11];
	J[107] -= bchoco07_pd[261]*bchoco07_pd[263];
	J[99] -= bchoco07_pd[262]*bchoco07_pd[260];
	dv[47] = -bchoco07_pd[262]*x[15];
	J[61] += dv[47]*bchoco07_pd[259];
	dv[47] *= x[10];
	dv[47] *= 3.;
	J[55] += dv[47]*bchoco07_pd[258];
	J[107] += bchoco07_pd[256];
	J[99] += x[16]*bchoco07_pd[255];
	dv[48] = x[16]*x[15];
	J[91] += dv[48]*bchoco07_pd[254];
	dv[48] *= x[14];
	J[75] += dv[48]*bchoco07_pd[253];
	dv[48] *= x[12];
	dv[48] *= 3.;
	J[55] += dv[48]*bchoco07_pd[252];
	J[107] -= bchoco07_pd[248]*bchoco07_pd[250];
	J[91] -= bchoco07_pd[249]*bchoco07_pd[247];
	dv[49] = -bchoco07_pd[249]*x[14];
	J[68] += dv[49]*bchoco07_pd[245];
	dv[49] *= x[11];
	J[55] += dv[49]*bchoco07_pd[246];
	J[107] -= bchoco07_pd[242]*bchoco07_pd[244];
	J[83] -= bchoco07_pd[243]*bchoco07_pd[241];
	dv[50] = -bchoco07_pd[243]*x[13];
	J[75] += dv[50]*bchoco07_pd[240];
	dv[50] *= x[12];
	dv[50] *= 2.;
	J[55] += dv[50]*bchoco07_pd[239];
	J[107] += bchoco07_pd[237];
	dv[51] = x[16]*bchoco07_pd[234];
	dv[52] = x[16]*bchoco07_pd[235];
	J[91] += dv[51]*bchoco07_pd[236];
	J[83] += dv[52]*bchoco07_pd[232];
	dv[52] *= x[13];
	J[55] += dv[52]*bchoco07_pd[233];
	J[99] -= bchoco07_pd[231];
	dv[53] = -x[15]*bchoco07_pd[227];
	dv[54] = -x[15]*bchoco07_pd[230];
	J[91] += dv[53]*bchoco07_pd[229];
	J[55] += dv[54]*bchoco07_pd[228];
	J[107] += bchoco07_pd[226]*bchoco07_pd[224];
	J[55] += bchoco07_pd[225]*bchoco07_pd[223];
	J[517] = -1.e-05;

   /*** derivatives for constraint 57 ***/

	J[352] = -1.;
	J[500] = 0.001;

   /*** derivatives for constraint 58 ***/

	J[358] = -1.;
	J[505] = 0.001;

   /*** derivatives for constraint 59 ***/

	J[364] = -1.;
	J[511] = 0.001;

   /*** derivatives for constraint 60 ***/

	J[371] = -1.;
	J[518] = 0.001;

   /*** derivatives for constraint 61 ***/

	J[335] = 0.001;
	J[378] = -1.;

   /*** derivatives for constraint 62 ***/

	J[385] = -1.;
	J[525] = 0.001;

   /*** derivatives for constraint 63 ***/

	J[345] = 0.001;
	J[392] = -1.;

   /*** derivatives for constraint 64 ***/

	J[398] = -1.;
	J[532] = 0.001;

   /*** derivatives for constraint 65 ***/

	J[353] = 1.;
	J[501] = -10.;

   /*** derivatives for constraint 66 ***/

	J[359] = 1.;
	J[506] = -10.;

   /*** derivatives for constraint 67 ***/

	J[365] = 1.;
	J[512] = -10.;

   /*** derivatives for constraint 68 ***/

	J[372] = 1.;
	J[519] = -10.;

   /*** derivatives for constraint 69 ***/

	J[336] = -10.;
	J[379] = 1.;

   /*** derivatives for constraint 70 ***/

	J[386] = 1.;
	J[526] = -10.;

   /*** derivatives for constraint 71 ***/

	J[346] = -10.;
	J[393] = 1.;

   /*** derivatives for constraint 72 ***/

	J[399] = 1.;
	J[533] = -10.;

   /*** derivatives for constraint 73 ***/

	J[56] = -1.;
	J[502] = 0.001;

   /*** derivatives for constraint 74 ***/

	J[62] = -1.;
	J[507] = 0.001;

   /*** derivatives for constraint 75 ***/

	J[69] = -1.;
	J[513] = 0.001;

   /*** derivatives for constraint 76 ***/

	J[76] = -1.;
	J[520] = 0.001;

   /*** derivatives for constraint 77 ***/

	J[84] = -1.;
	J[337] = 0.001;

   /*** derivatives for constraint 78 ***/

	J[92] = -1.;
	J[527] = 0.001;

   /*** derivatives for constraint 79 ***/

	J[100] = -1.;
	J[347] = 0.001;

   /*** derivatives for constraint 80 ***/

	J[108] = -1.;
	J[534] = 0.001;

   /*** derivatives for constraint 81 ***/

	J[57] = 1.;
	J[503] = -10.;

   /*** derivatives for constraint 82 ***/

	J[63] = 1.;
	J[508] = -10.;

   /*** derivatives for constraint 83 ***/

	J[70] = 1.;
	J[514] = -10.;

   /*** derivatives for constraint 84 ***/

	J[77] = 1.;
	J[521] = -10.;

   /*** derivatives for constraint 85 ***/

	J[85] = 1.;
	J[338] = -10.;

   /*** derivatives for constraint 86 ***/

	J[93] = 1.;
	J[528] = -10.;

   /*** derivatives for constraint 87 ***/

	J[101] = 1.;
	J[348] = -10.;

   /*** derivatives for constraint 88 ***/

	J[109] = 1.;
	J[535] = -10.;

   /*** derivatives for constraint 89 ***/

	J[504] = 1.;
	J[509] = -1.;

   /*** derivatives for constraint 90 ***/

	J[510] = 1.;
	J[515] = -1.;

   /*** derivatives for constraint 91 ***/

	J[516] = 1.;
	J[522] = -1.;

   /*** derivatives for constraint 92 ***/

	J[339] = -1.;
	J[523] = 1.;

   /*** derivatives for constraint 93 ***/

	J[340] = 1.;
	J[529] = -1.;

   /*** derivatives for constraint 94 ***/

	J[349] = -1.;
	J[530] = 1.;

   /*** derivatives for constraint 95 ***/

	J[350] = 1.;
	J[536] = -1.;

   /*** derivatives for constraint 96 ***/

	J[10] = -1.e+09;
	J[354] = 1.e+09;
	J[404] = 1.;

   /*** derivatives for constraint 97 ***/

	J[49] = -1.;
	J[400] = -1.;
	J[437] = 1.;

   /*** derivatives for constraint 98 ***/

	J[11] = -1.;
	J[15] = 1.e-05;
	J[20] = -1.e-10;
	J[441] = 1.;

   /*** derivatives for constraint 99 ***/

	J[16] = -1.;
	J[21] = 2.e-05;
	J[26] = -3.e-10;
	J[443] = 1.;

   /*** derivatives for constraint 100 ***/

	J[22] = -1.;
	J[27] = 3.e-05;
	J[32] = -6.e-10;
	J[445] = 1.;

   /*** derivatives for constraint 101 ***/

	J[28] = -1.;
	J[33] = 4.e-05;
	J[38] = -1.e-09;
	J[447] = 1.;

   /*** derivatives for constraint 102 ***/

	J[34] = -1.;
	J[39] = 5.e-05;
	J[44] = -1.5e-09;
	J[449] = 1.;

   /*** derivatives for constraint 103 ***/

	J[40] = -1.;
	J[45] = 6.e-05;
	J[50] = -2.1e-09;
	J[451] = 1.;

   /*** derivatives for constraint 104 ***/

	J[46] = -1.;
	J[51] = 7.e-05;
	J[453] = 1.;

   /*** derivatives for constraint 105 ***/

	J[52] = -1.;
	J[455] = 1.;

   /*** derivatives for constraint 106 ***/

	J[58] = 1.;
	J[355] = -1.;
	J[360] = 1.e-05;
	J[366] = -1.e-10;

   /*** derivatives for constraint 107 ***/

	J[64] = 1.;
	J[361] = -1.;
	J[367] = 2.e-05;
	J[373] = -3.e-10;

   /*** derivatives for constraint 108 ***/

	J[71] = 1.;
	J[368] = -1.;
	J[374] = 3.e-05;
	J[380] = -6.e-10;

   /*** derivatives for constraint 109 ***/

	J[78] = 1.;
	J[375] = -1.;
	J[381] = 4.e-05;
	J[387] = -1.e-09;

   /*** derivatives for constraint 110 ***/

	J[86] = 1.;
	J[382] = -1.;
	J[388] = 5.e-05;
	J[394] = -1.5e-09;

   /*** derivatives for constraint 111 ***/

	J[94] = 1.;
	J[389] = -1.;
	J[395] = 6.e-05;
	J[401] = -2.1e-09;

   /*** derivatives for constraint 112 ***/

	J[102] = 1.;
	J[396] = -1.;
	J[402] = 7.e-05;

   /*** derivatives for constraint 113 ***/

	J[110] = 1.;
	J[403] = -1.;

   /*** derivatives for constraint 114 ***/

	J[405] = -1.;
	J[407] = 1.e-05;
	J[410] = -1.e-10;
	J[457] = 1.;

   /*** derivatives for constraint 115 ***/

	J[408] = -1.;
	J[411] = 2.e-05;
	J[414] = -3.e-10;
	J[459] = 1.;

   /*** derivatives for constraint 116 ***/

	J[412] = -1.;
	J[415] = 3.e-05;
	J[418] = -6.e-10;
	J[461] = 1.;

   /*** derivatives for constraint 117 ***/

	J[416] = -1.;
	J[419] = 4.e-05;
	J[422] = -1.e-09;
	J[463] = 1.;

   /*** derivatives for constraint 118 ***/

	J[420] = -1.;
	J[423] = 5.e-05;
	J[426] = -1.5e-09;
	J[465] = 1.;

   /*** derivatives for constraint 119 ***/

	J[424] = -1.;
	J[427] = 6.e-05;
	J[430] = -2.1e-09;
	J[467] = 1.;

   /*** derivatives for constraint 120 ***/

	J[428] = -1.;
	J[431] = 7.e-05;
	J[434] = -2.8e-09;
	J[469] = 1.;

   /*** derivatives for constraint 121 ***/

	J[432] = -1.;
	J[435] = 8.e-05;
	J[438] = -3.6e-09;
	J[471] = 1.;

   /*** derivatives for constraint 122 ***/

	J[436] = -1.;
	J[439] = 9.e-05;
	J[473] = 1.;

   /*** derivatives for constraint 123 ***/

	J[440] = -1.;
	J[475] = 1.;

   /*** derivatives for constraint 124 ***/

	J[114] = 1.;
	J[456] = -1.;

   /*** derivatives for constraint 125 ***/

	J[452] = -1.;
	J[478] = 1.;

   /*** derivatives for constraint 126 ***/

	J[448] = -1.;
	J[480] = 1.;

   /*** derivatives for constraint 127 ***/

	J[444] = -1.;
	J[482] = 1.;

   /*** derivatives for constraint 128 ***/

	J[121] = 1.;
	J[454] = -1.;

   /*** derivatives for constraint 129 ***/

	J[124] = 1.;
	J[450] = -1.;

   /*** derivatives for constraint 130 ***/

	J[127] = 1.;
	J[446] = -1.;

   /*** derivatives for constraint 131 ***/

	J[130] = 1.;
	J[442] = -1.;

   /*** derivatives for constraint 132 ***/

	J[146] = 1.;

   /*** derivatives for constraint 133 ***/

	J[162] = 1.;

   /*** derivatives for constraint 134 ***/

	J[178] = 1.;

   /*** derivatives for constraint 135 ***/

	J[188] = 1.;

   /*** derivatives for constraint 136 ***/

	J[486] = 1.;

   /*** derivatives for constraint 137 ***/

	J[193] = 1.;
	J[476] = -1.;

   /*** derivatives for constraint 138 ***/

	J[472] = -1.;
	J[488] = 1.;

   /*** derivatives for constraint 139 ***/

	J[468] = -1.;
	J[490] = 1.;

   /*** derivatives for constraint 140 ***/

	J[464] = -1.;
	J[492] = 1.;

   /*** derivatives for constraint 141 ***/

	J[460] = -1.;
	J[494] = 1.;

   /*** derivatives for constraint 142 ***/

	J[202] = 1.;
	J[474] = -1.;

   /*** derivatives for constraint 143 ***/

	J[205] = 1.;
	J[470] = -1.;

   /*** derivatives for constraint 144 ***/

	J[208] = 1.;
	J[466] = -1.;

   /*** derivatives for constraint 145 ***/

	J[211] = 1.;
	J[462] = -1.;

   /*** derivatives for constraint 146 ***/

	J[214] = 1.;
	J[458] = -1.;

   /*** derivatives for constraint 147 ***/

	J[235] = 1.;

   /*** derivatives for constraint 148 ***/

	J[256] = 1.;

   /*** derivatives for constraint 149 ***/

	J[277] = 1.;

   /*** derivatives for constraint 150 ***/

	J[298] = 1.;

   /*** derivatives for constraint 151 ***/

	J[319] = 1.;

   /*** derivatives for constraint 152 ***/

	J[332] = 1.;

   /*** derivatives for constraint 153 ***/

	J[499] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
