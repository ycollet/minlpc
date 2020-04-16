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
 fint batch0812_nc_auxcom_[1] = { 97 /* nlc */ };
 fint batch0812_nc_funcom_[531] = {
	76 /* nvar */,
	1 /* nobj */,
	205 /* ncon */,
	448 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	10,
	19,
	28,
	37,
	46,
	55,
	64,
	73,
	82,
	91,
	100,
	109,
	122,
	135,
	148,
	161,
	174,
	187,
	200,
	213,
	226,
	239,
	252,
	265,
	278,
	291,
	304,
	317,
	325,
	333,
	341,
	349,
	357,
	365,
	373,
	381,
	389,
	397,
	405,
	413,
	414,
	415,
	416,
	417,
	418,
	419,
	420,
	421,
	422,
	423,
	424,
	425,
	426,
	427,
	428,
	429,
	430,
	431,
	432,
	433,
	434,
	435,
	436,
	437,
	438,
	439,
	440,
	441,
	442,
	443,
	444,
	445,
	446,
	447,
	448,
	449,

	/* rownos */
	1,
	13,
	25,
	37,
	49,
	61,
	73,
	85,
	194,
	2,
	14,
	26,
	38,
	50,
	62,
	74,
	86,
	195,
	3,
	15,
	27,
	39,
	51,
	63,
	75,
	87,
	196,
	4,
	16,
	28,
	40,
	52,
	64,
	76,
	88,
	197,
	5,
	17,
	29,
	41,
	53,
	65,
	77,
	89,
	198,
	6,
	18,
	30,
	42,
	54,
	66,
	78,
	90,
	199,
	7,
	19,
	31,
	43,
	55,
	67,
	79,
	91,
	200,
	8,
	20,
	32,
	44,
	56,
	68,
	80,
	92,
	201,
	9,
	21,
	33,
	45,
	57,
	69,
	81,
	93,
	202,
	10,
	22,
	34,
	46,
	58,
	70,
	82,
	94,
	203,
	11,
	23,
	35,
	47,
	59,
	71,
	83,
	95,
	204,
	12,
	24,
	36,
	48,
	60,
	72,
	84,
	96,
	205,
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
	97,
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
	121,
	97,
	122,
	123,
	124,
	125,
	126,
	127,
	128,
	129,
	130,
	131,
	132,
	133,
	97,
	134,
	135,
	136,
	137,
	138,
	139,
	140,
	141,
	142,
	143,
	144,
	145,
	97,
	146,
	147,
	148,
	149,
	150,
	151,
	152,
	153,
	154,
	155,
	156,
	157,
	97,
	158,
	159,
	160,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	97,
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
	180,
	181,
	97,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
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
	97,
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
	97,
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
	97,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	97,
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
	97,
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
	97,
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
	97,
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
	110,
	122,
	134,
	146,
	158,
	170,
	182,
	99,
	111,
	123,
	135,
	147,
	159,
	171,
	183,
	100,
	112,
	124,
	136,
	148,
	160,
	172,
	184,
	101,
	113,
	125,
	137,
	149,
	161,
	173,
	185,
	102,
	114,
	126,
	138,
	150,
	162,
	174,
	186,
	103,
	115,
	127,
	139,
	151,
	163,
	175,
	187,
	104,
	116,
	128,
	140,
	152,
	164,
	176,
	188,
	105,
	117,
	129,
	141,
	153,
	165,
	177,
	189,
	106,
	118,
	130,
	142,
	154,
	166,
	178,
	190,
	107,
	119,
	131,
	143,
	155,
	167,
	179,
	191,
	108,
	120,
	132,
	144,
	156,
	168,
	180,
	192,
	109,
	121,
	133,
	145,
	157,
	169,
	181,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205 };

 real batch0812_nc_boundc_[1+152+410] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		1.,
		5.,
		134.183333333333,
		379.746835443038,
		67.32,
		882.352941176471,
		126.933333333333,
		652.173913043478,
		33.0166666666667,
		638.297872340426,
		68.97,
		666.666666666667,
		37.5416666666667,
		441.176470588235,
		42.24,
		576.923076923077,
		20.7833333333333,
		1363.63636363636,
		1.66,
		8.3,
		1.36,
		6.8,
		2.38,
		11.9,
		0.7,
		3.5,
		1.14,
		5.7,
		0.85,
		4.25,
		0.88,
		4.4,
		0.86,
		4.3,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
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
		6.4,
		1.7e308,
		4.7,
		1.7e308,
		8.3,
		1.7e308,
		3.9,
		1.7e308,
		2.1,
		1.7e308,
		1.2,
		1.7e308,
		0.8,
		1.7e308,
		2.2,
		1.7e308,
		1.2,
		1.7e308,
		2.5,
		1.7e308,
		3.4,
		1.7e308,
		3.8,
		1.7e308,
		6.8,
		1.7e308,
		6.4,
		1.7e308,
		6.5,
		1.7e308,
		4.4,
		1.7e308,
		2.3,
		1.7e308,
		3.2,
		1.7e308,
		0.4,
		1.7e308,
		0.2,
		1.7e308,
		0.5,
		1.7e308,
		3.3,
		1.7e308,
		0.6,
		1.7e308,
		1.2,
		1.7e308,
		1.,
		1.7e308,
		6.3,
		1.7e308,
		5.4,
		1.7e308,
		11.9,
		1.7e308,
		5.7,
		1.7e308,
		6.2,
		1.7e308,
		1.1,
		1.7e308,
		0.6,
		1.7e308,
		1.2,
		1.7e308,
		4.3,
		1.7e308,
		2.8,
		1.7e308,
		5.2,
		1.7e308,
		3.2,
		1.7e308,
		3.,
		1.7e308,
		3.5,
		1.7e308,
		3.3,
		1.7e308,
		2.8,
		1.7e308,
		3.4,
		1.7e308,
		1.7,
		1.7e308,
		0.9,
		1.7e308,
		2.2,
		1.7e308,
		2.15,
		1.7e308,
		1.8,
		1.7e308,
		2.5,
		1.7e308,
		2.1,
		1.7e308,
		2.5,
		1.7e308,
		4.2,
		1.7e308,
		3.6,
		1.7e308,
		5.7,
		1.7e308,
		2.2,
		1.7e308,
		1.2,
		1.7e308,
		0.6,
		1.7e308,
		1.15,
		1.7e308,
		3.1,
		1.7e308,
		4.2,
		1.7e308,
		1.6,
		1.7e308,
		1.1,
		1.7e308,
		0.8,
		1.7e308,
		0.4,
		1.7e308,
		1.1,
		1.7e308,
		1.8,
		1.7e308,
		2.5,
		1.7e308,
		0.5,
		1.7e308,
		1.3,
		1.7e308,
		1.4,
		1.7e308,
		4.25,
		1.7e308,
		2.7,
		1.7e308,
		0.9,
		1.7e308,
		4.2,
		1.7e308,
		4.,
		1.7e308,
		2.2,
		1.7e308,
		0.5,
		1.7e308,
		3.4,
		1.7e308,
		2.2,
		1.7e308,
		1.4,
		1.7e308,
		0.9,
		1.7e308,
		2.1,
		1.7e308,
		4.4,
		1.7e308,
		2.2,
		1.7e308,
		3.2,
		1.7e308,
		2.7,
		1.7e308,
		4.3,
		1.7e308,
		1.9,
		1.7e308,
		2.,
		1.7e308,
		1.7,
		1.7e308,
		0.7,
		1.7e308,
		0.3,
		1.7e308,
		0.2,
		1.7e308,
		1.6,
		1.7e308,
		3.5,
		1.7e308,
		3.4,
		1.7e308,
		2.1,
		1.7e308,
		-1.7e308,
		6000.,
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

 real batch0812_nc_x0comn_[76] = {
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
		134.183333333333,
		67.32,
		126.933333333333,
		33.0166666666667,
		68.97,
		37.5416666666667,
		42.24,
		20.7833333333333,
		1.66,
		1.36,
		2.38,
		0.7,
		1.14,
		0.85,
		0.88,
		0.86,
		300.,
		300.,
		300.,
		300.,
		300.,
		300.,
		300.,
		300.,
		300.,
		300.,
		300.,
		300.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real batch0812_nc_pd[40];
static real batch0812_nc_old_x[76];
static int batch0812_nc_xkind = -1;

 static int
batch0812_nc_xcheck(real *x)
{
	real *x1 = batch0812_nc_old_x, *xe = x + 76;
	errno = 0;
	if (batch0812_nc_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	batch0812_nc_xkind = 0;
	return 1;
	}
 real
batch0812_nc_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[12];
	fint wantfg = *needfg;
	if (batch0812_nc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[28], 0.6);
	if (errno) in_trouble2("pow",x[28],0.6);
	if (x[28] > 0.) {
	batch0812_nc_pd[16] = 0.6*(v[0]/x[28]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],0.6);
	}
	batch0812_nc_pd[17] = 250. * v[0];
	v[0] = batch0812_nc_pd[17] * x[0];
	v[1] = pow(x[29], 0.6);
	if (errno) in_trouble2("pow",x[29],0.6);
	if (x[29] > 0.) {
	batch0812_nc_pd[18] = 0.6*(v[1]/x[29]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],0.6);
	}
	batch0812_nc_pd[19] = 550. * v[1];
	v[1] = batch0812_nc_pd[19] * x[1];
	v[0] += v[1];
	v[1] = pow(x[30], 0.6);
	if (errno) in_trouble2("pow",x[30],0.6);
	if (x[30] > 0.) {
	batch0812_nc_pd[20] = 0.6*(v[1]/x[30]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],0.6);
	}
	batch0812_nc_pd[21] = 250. * v[1];
	v[1] = batch0812_nc_pd[21] * x[2];
	v[0] += v[1];
	v[1] = pow(x[31], 0.6);
	if (errno) in_trouble2("pow",x[31],0.6);
	if (x[31] > 0.) {
	batch0812_nc_pd[22] = 0.6*(v[1]/x[31]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],0.6);
	}
	batch0812_nc_pd[23] = 1000. * v[1];
	v[1] = batch0812_nc_pd[23] * x[3];
	v[0] += v[1];
	v[1] = pow(x[32], 0.6);
	if (errno) in_trouble2("pow",x[32],0.6);
	if (x[32] > 0.) {
	batch0812_nc_pd[24] = 0.6*(v[1]/x[32]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[32],0.6);
	}
	batch0812_nc_pd[25] = 300. * v[1];
	v[1] = batch0812_nc_pd[25] * x[4];
	v[0] += v[1];
	v[1] = pow(x[33], 0.6);
	if (errno) in_trouble2("pow",x[33],0.6);
	if (x[33] > 0.) {
	batch0812_nc_pd[26] = 0.6*(v[1]/x[33]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[33],0.6);
	}
	batch0812_nc_pd[27] = 800. * v[1];
	v[1] = batch0812_nc_pd[27] * x[5];
	v[0] += v[1];
	v[1] = pow(x[34], 0.6);
	if (errno) in_trouble2("pow",x[34],0.6);
	if (x[34] > 0.) {
	batch0812_nc_pd[28] = 0.6*(v[1]/x[34]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[28] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],0.6);
	}
	batch0812_nc_pd[29] = 200. * v[1];
	v[1] = batch0812_nc_pd[29] * x[6];
	v[0] += v[1];
	v[1] = pow(x[35], 0.6);
	if (errno) in_trouble2("pow",x[35],0.6);
	if (x[35] > 0.) {
	batch0812_nc_pd[30] = 0.6*(v[1]/x[35]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[30] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[35],0.6);
	}
	batch0812_nc_pd[31] = 1200. * v[1];
	v[1] = batch0812_nc_pd[31] * x[7];
	v[0] += v[1];
	v[1] = pow(x[36], 0.6);
	if (errno) in_trouble2("pow",x[36],0.6);
	if (x[36] > 0.) {
	batch0812_nc_pd[32] = 0.6*(v[1]/x[36]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],0.6);
	}
	batch0812_nc_pd[33] = 250. * v[1];
	v[1] = batch0812_nc_pd[33] * x[8];
	v[0] += v[1];
	v[1] = pow(x[37], 0.6);
	if (errno) in_trouble2("pow",x[37],0.6);
	if (x[37] > 0.) {
	batch0812_nc_pd[34] = 0.6*(v[1]/x[37]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[34] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],0.6);
	}
	batch0812_nc_pd[35] = 250. * v[1];
	v[1] = batch0812_nc_pd[35] * x[9];
	v[0] += v[1];
	v[1] = pow(x[38], 0.6);
	if (errno) in_trouble2("pow",x[38],0.6);
	if (x[38] > 0.) {
	batch0812_nc_pd[36] = 0.6*(v[1]/x[38]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[36] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],0.6);
	}
	batch0812_nc_pd[37] = 450. * v[1];
	v[1] = batch0812_nc_pd[37] * x[10];
	v[0] += v[1];
	v[1] = pow(x[39], 0.6);
	if (errno) in_trouble2("pow",x[39],0.6);
	if (x[39] > 0.) {
	batch0812_nc_pd[38] = 0.6*(v[1]/x[39]);
	} else if (0.6 > 1.) {
	batch0812_nc_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],0.6);
	}
	batch0812_nc_pd[39] = 700. * v[1];
	v[1] = batch0812_nc_pd[39] * x[11];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[11] = batch0812_nc_pd[39];
	dv[0] = x[11]*700.;
	g[39] = dv[0]*batch0812_nc_pd[38];
	g[10] = batch0812_nc_pd[37];
	dv[1] = x[10]*450.;
	g[38] = dv[1]*batch0812_nc_pd[36];
	g[9] = batch0812_nc_pd[35];
	dv[2] = x[9]*250.;
	g[37] = dv[2]*batch0812_nc_pd[34];
	g[8] = batch0812_nc_pd[33];
	dv[3] = x[8]*250.;
	g[36] = dv[3]*batch0812_nc_pd[32];
	g[7] = batch0812_nc_pd[31];
	dv[4] = x[7]*1200.;
	g[35] = dv[4]*batch0812_nc_pd[30];
	g[6] = batch0812_nc_pd[29];
	dv[5] = x[6]*200.;
	g[34] = dv[5]*batch0812_nc_pd[28];
	g[5] = batch0812_nc_pd[27];
	dv[6] = x[5]*800.;
	g[33] = dv[6]*batch0812_nc_pd[26];
	g[4] = batch0812_nc_pd[25];
	dv[7] = x[4]*300.;
	g[32] = dv[7]*batch0812_nc_pd[24];
	g[3] = batch0812_nc_pd[23];
	dv[8] = x[3]*1000.;
	g[31] = dv[8]*batch0812_nc_pd[22];
	g[2] = batch0812_nc_pd[21];
	dv[9] = x[2]*250.;
	g[30] = dv[9]*batch0812_nc_pd[20];
	g[1] = batch0812_nc_pd[19];
	dv[10] = x[1]*550.;
	g[29] = dv[10]*batch0812_nc_pd[18];
	g[0] = batch0812_nc_pd[17];
	dv[11] = x[0]*250.;
	g[28] = dv[11]*batch0812_nc_pd[16];
	}

	return v[0];
}

 void
batch0812_nc_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (batch0812_nc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[20];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[1] * x[20];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[2] * x[20];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[3] * x[20];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[4] * x[20];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[5] * x[20];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[6] * x[20];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[7] * x[20];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[8] * x[20];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[9] * x[20];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[10] * x[20];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[11] * x[20];
	c[11] = v[0];

  /***  constraint 13  ***/

	v[0] = x[0] * x[21];
	c[12] = v[0];

  /***  constraint 14  ***/

	v[0] = x[1] * x[21];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[2] * x[21];
	c[14] = v[0];

  /***  constraint 16  ***/

	v[0] = x[3] * x[21];
	c[15] = v[0];

  /***  constraint 17  ***/

	v[0] = x[4] * x[21];
	c[16] = v[0];

  /***  constraint 18  ***/

	v[0] = x[5] * x[21];
	c[17] = v[0];

  /***  constraint 19  ***/

	v[0] = x[6] * x[21];
	c[18] = v[0];

  /***  constraint 20  ***/

	v[0] = x[7] * x[21];
	c[19] = v[0];

  /***  constraint 21  ***/

	v[0] = x[8] * x[21];
	c[20] = v[0];

  /***  constraint 22  ***/

	v[0] = x[9] * x[21];
	c[21] = v[0];

  /***  constraint 23  ***/

	v[0] = x[10] * x[21];
	c[22] = v[0];

  /***  constraint 24  ***/

	v[0] = x[11] * x[21];
	c[23] = v[0];

  /***  constraint 25  ***/

	v[0] = x[0] * x[22];
	c[24] = v[0];

  /***  constraint 26  ***/

	v[0] = x[1] * x[22];
	c[25] = v[0];

  /***  constraint 27  ***/

	v[0] = x[2] * x[22];
	c[26] = v[0];

  /***  constraint 28  ***/

	v[0] = x[3] * x[22];
	c[27] = v[0];

  /***  constraint 29  ***/

	v[0] = x[4] * x[22];
	c[28] = v[0];

  /***  constraint 30  ***/

	v[0] = x[5] * x[22];
	c[29] = v[0];

  /***  constraint 31  ***/

	v[0] = x[6] * x[22];
	c[30] = v[0];

  /***  constraint 32  ***/

	v[0] = x[7] * x[22];
	c[31] = v[0];

  /***  constraint 33  ***/

	v[0] = x[8] * x[22];
	c[32] = v[0];

  /***  constraint 34  ***/

	v[0] = x[9] * x[22];
	c[33] = v[0];

  /***  constraint 35  ***/

	v[0] = x[10] * x[22];
	c[34] = v[0];

  /***  constraint 36  ***/

	v[0] = x[11] * x[22];
	c[35] = v[0];

  /***  constraint 37  ***/

	v[0] = x[0] * x[23];
	c[36] = v[0];

  /***  constraint 38  ***/

	v[0] = x[1] * x[23];
	c[37] = v[0];

  /***  constraint 39  ***/

	v[0] = x[2] * x[23];
	c[38] = v[0];

  /***  constraint 40  ***/

	v[0] = x[3] * x[23];
	c[39] = v[0];

  /***  constraint 41  ***/

	v[0] = x[4] * x[23];
	c[40] = v[0];

  /***  constraint 42  ***/

	v[0] = x[5] * x[23];
	c[41] = v[0];

  /***  constraint 43  ***/

	v[0] = x[6] * x[23];
	c[42] = v[0];

  /***  constraint 44  ***/

	v[0] = x[7] * x[23];
	c[43] = v[0];

  /***  constraint 45  ***/

	v[0] = x[8] * x[23];
	c[44] = v[0];

  /***  constraint 46  ***/

	v[0] = x[9] * x[23];
	c[45] = v[0];

  /***  constraint 47  ***/

	v[0] = x[10] * x[23];
	c[46] = v[0];

  /***  constraint 48  ***/

	v[0] = x[11] * x[23];
	c[47] = v[0];

  /***  constraint 49  ***/

	v[0] = x[0] * x[24];
	c[48] = v[0];

  /***  constraint 50  ***/

	v[0] = x[1] * x[24];
	c[49] = v[0];

  /***  constraint 51  ***/

	v[0] = x[2] * x[24];
	c[50] = v[0];

  /***  constraint 52  ***/

	v[0] = x[3] * x[24];
	c[51] = v[0];

  /***  constraint 53  ***/

	v[0] = x[4] * x[24];
	c[52] = v[0];

  /***  constraint 54  ***/

	v[0] = x[5] * x[24];
	c[53] = v[0];

  /***  constraint 55  ***/

	v[0] = x[6] * x[24];
	c[54] = v[0];

  /***  constraint 56  ***/

	v[0] = x[7] * x[24];
	c[55] = v[0];

  /***  constraint 57  ***/

	v[0] = x[8] * x[24];
	c[56] = v[0];

  /***  constraint 58  ***/

	v[0] = x[9] * x[24];
	c[57] = v[0];

  /***  constraint 59  ***/

	v[0] = x[10] * x[24];
	c[58] = v[0];

  /***  constraint 60  ***/

	v[0] = x[11] * x[24];
	c[59] = v[0];

  /***  constraint 61  ***/

	v[0] = x[0] * x[25];
	c[60] = v[0];

  /***  constraint 62  ***/

	v[0] = x[1] * x[25];
	c[61] = v[0];

  /***  constraint 63  ***/

	v[0] = x[2] * x[25];
	c[62] = v[0];

  /***  constraint 64  ***/

	v[0] = x[3] * x[25];
	c[63] = v[0];

  /***  constraint 65  ***/

	v[0] = x[4] * x[25];
	c[64] = v[0];

  /***  constraint 66  ***/

	v[0] = x[5] * x[25];
	c[65] = v[0];

  /***  constraint 67  ***/

	v[0] = x[6] * x[25];
	c[66] = v[0];

  /***  constraint 68  ***/

	v[0] = x[7] * x[25];
	c[67] = v[0];

  /***  constraint 69  ***/

	v[0] = x[8] * x[25];
	c[68] = v[0];

  /***  constraint 70  ***/

	v[0] = x[9] * x[25];
	c[69] = v[0];

  /***  constraint 71  ***/

	v[0] = x[10] * x[25];
	c[70] = v[0];

  /***  constraint 72  ***/

	v[0] = x[11] * x[25];
	c[71] = v[0];

  /***  constraint 73  ***/

	v[0] = x[0] * x[26];
	c[72] = v[0];

  /***  constraint 74  ***/

	v[0] = x[1] * x[26];
	c[73] = v[0];

  /***  constraint 75  ***/

	v[0] = x[2] * x[26];
	c[74] = v[0];

  /***  constraint 76  ***/

	v[0] = x[3] * x[26];
	c[75] = v[0];

  /***  constraint 77  ***/

	v[0] = x[4] * x[26];
	c[76] = v[0];

  /***  constraint 78  ***/

	v[0] = x[5] * x[26];
	c[77] = v[0];

  /***  constraint 79  ***/

	v[0] = x[6] * x[26];
	c[78] = v[0];

  /***  constraint 80  ***/

	v[0] = x[7] * x[26];
	c[79] = v[0];

  /***  constraint 81  ***/

	v[0] = x[8] * x[26];
	c[80] = v[0];

  /***  constraint 82  ***/

	v[0] = x[9] * x[26];
	c[81] = v[0];

  /***  constraint 83  ***/

	v[0] = x[10] * x[26];
	c[82] = v[0];

  /***  constraint 84  ***/

	v[0] = x[11] * x[26];
	c[83] = v[0];

  /***  constraint 85  ***/

	v[0] = x[0] * x[27];
	c[84] = v[0];

  /***  constraint 86  ***/

	v[0] = x[1] * x[27];
	c[85] = v[0];

  /***  constraint 87  ***/

	v[0] = x[2] * x[27];
	c[86] = v[0];

  /***  constraint 88  ***/

	v[0] = x[3] * x[27];
	c[87] = v[0];

  /***  constraint 89  ***/

	v[0] = x[4] * x[27];
	c[88] = v[0];

  /***  constraint 90  ***/

	v[0] = x[5] * x[27];
	c[89] = v[0];

  /***  constraint 91  ***/

	v[0] = x[6] * x[27];
	c[90] = v[0];

  /***  constraint 92  ***/

	v[0] = x[7] * x[27];
	c[91] = v[0];

  /***  constraint 93  ***/

	v[0] = x[8] * x[27];
	c[92] = v[0];

  /***  constraint 94  ***/

	v[0] = x[9] * x[27];
	c[93] = v[0];

  /***  constraint 95  ***/

	v[0] = x[10] * x[27];
	c[94] = v[0];

  /***  constraint 96  ***/

	v[0] = x[11] * x[27];
	c[95] = v[0];

  /***  constraint 97  ***/

	v[0] = 485000. * x[20];
	if (x[12] == 0.) {
	zerdiv_(&x[12]);	}
	v[1] = v[0] / x[12];
	batch0812_nc_pd[0] = 1. / x[12];
	batch0812_nc_pd[1] = -v[1] * batch0812_nc_pd[0];
	v[0] = 297000. * x[21];
	if (x[13] == 0.) {
	zerdiv_(&x[13]);	}
	v[2] = v[0] / x[13];
	batch0812_nc_pd[2] = 1. / x[13];
	batch0812_nc_pd[3] = -v[2] * batch0812_nc_pd[2];
	v[1] += v[2];
	v[2] = 320000. * x[22];
	if (x[14] == 0.) {
	zerdiv_(&x[14]);	}
	v[0] = v[2] / x[14];
	batch0812_nc_pd[4] = 1. / x[14];
	batch0812_nc_pd[5] = -v[0] * batch0812_nc_pd[4];
	v[1] += v[0];
	v[0] = 283000. * x[23];
	if (x[15] == 0.) {
	zerdiv_(&x[15]);	}
	v[2] = v[0] / x[15];
	batch0812_nc_pd[6] = 1. / x[15];
	batch0812_nc_pd[7] = -v[2] * batch0812_nc_pd[6];
	v[1] += v[2];
	v[2] = 363000. * x[24];
	if (x[16] == 0.) {
	zerdiv_(&x[16]);	}
	v[0] = v[2] / x[16];
	batch0812_nc_pd[8] = 1. / x[16];
	batch0812_nc_pd[9] = -v[0] * batch0812_nc_pd[8];
	v[1] += v[0];
	v[0] = 265000. * x[25];
	if (x[17] == 0.) {
	zerdiv_(&x[17]);	}
	v[2] = v[0] / x[17];
	batch0812_nc_pd[10] = 1. / x[17];
	batch0812_nc_pd[11] = -v[2] * batch0812_nc_pd[10];
	v[1] += v[2];
	v[2] = 288000. * x[26];
	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[0] = v[2] / x[18];
	batch0812_nc_pd[12] = 1. / x[18];
	batch0812_nc_pd[13] = -v[0] * batch0812_nc_pd[12];
	v[1] += v[0];
	v[0] = 145000. * x[27];
	if (x[19] == 0.) {
	zerdiv_(&x[19]);	}
	v[2] = v[0] / x[19];
	batch0812_nc_pd[14] = 1. / x[19];
	batch0812_nc_pd[15] = -v[2] * batch0812_nc_pd[14];
	v[1] += v[2];
	c[96] = v[1];

  /***  constraint 98  ***/

	t1 = -7.9*x[12];
	t1 += x[28];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -2.*x[12];
	t1 += x[29];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = -5.2*x[12];
	t1 += x[30];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = -4.9*x[12];
	t1 += x[31];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = -6.1*x[12];
	t1 += x[32];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = -4.2*x[12];
	t1 += x[33];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = -2.8*x[12];
	t1 += x[34];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = -3.3*x[12];
	t1 += x[35];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -4.1*x[12];
	t1 += x[36];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = -3.8*x[12];
	t1 += x[37];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -2.8*x[12];
	t1 += x[38];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -3.9*x[12];
	t1 += x[39];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = -0.7*x[13];
	t1 += x[28];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -0.8*x[13];
	t1 += x[29];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = -0.9*x[13];
	t1 += x[30];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -3.4*x[13];
	t1 += x[31];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -2.1*x[13];
	t1 += x[32];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -2.5*x[13];
	t1 += x[33];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = -3.3*x[13];
	t1 += x[34];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = -3.*x[13];
	t1 += x[35];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = -2.7*x[13];
	t1 += x[36];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = -2.4*x[13];
	t1 += x[37];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -2.2*x[13];
	t1 += x[38];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = -3.1*x[13];
	t1 += x[39];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = -0.7*x[14];
	t1 += x[28];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = -2.6*x[14];
	t1 += x[29];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = -1.6*x[14];
	t1 += x[30];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = -3.6*x[14];
	t1 += x[31];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = -3.2*x[14];
	t1 += x[32];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = -2.9*x[14];
	t1 += x[33];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = -2.6*x[14];
	t1 += x[34];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = -2.2*x[14];
	t1 += x[35];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = -4.6*x[14];
	t1 += x[36];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = -4.3*x[14];
	t1 += x[37];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = -4.2*x[14];
	t1 += x[38];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = -4.6*x[14];
	t1 += x[39];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = -4.7*x[15];
	t1 += x[28];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = -2.3*x[15];
	t1 += x[29];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = -1.6*x[15];
	t1 += x[30];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = -2.7*x[15];
	t1 += x[31];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = -1.2*x[15];
	t1 += x[32];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = -2.5*x[15];
	t1 += x[33];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = -1.5*x[15];
	t1 += x[34];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = -1.5*x[15];
	t1 += x[35];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = -1.3*x[15];
	t1 += x[36];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = -1.7*x[15];
	t1 += x[37];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = -1.5*x[15];
	t1 += x[38];
	c[143] = t1;

  /***  constraint 145  ***/

	t1 = -1.8*x[15];
	t1 += x[39];
	c[144] = t1;

  /***  constraint 146  ***/

	t1 = -1.2*x[16];
	t1 += x[28];
	c[145] = t1;

  /***  constraint 147  ***/

	t1 = -3.6*x[16];
	t1 += x[29];
	c[146] = t1;

  /***  constraint 148  ***/

	t1 = -2.4*x[16];
	t1 += x[30];
	c[147] = t1;

  /***  constraint 149  ***/

	t1 = -4.5*x[16];
	t1 += x[31];
	c[148] = t1;

  /***  constraint 150  ***/

	t1 = -1.6*x[16];
	t1 += x[32];
	c[149] = t1;

  /***  constraint 151  ***/

	t1 = -2.1*x[16];
	t1 += x[33];
	c[150] = t1;

  /***  constraint 152  ***/

	t1 = -2.4*x[16];
	t1 += x[34];
	c[151] = t1;

  /***  constraint 153  ***/

	t1 = -2.7*x[16];
	t1 += x[35];
	c[152] = t1;

  /***  constraint 154  ***/

	t1 = -2.8*x[16];
	t1 += x[36];
	c[153] = t1;

  /***  constraint 155  ***/

	t1 = -3.5*x[16];
	t1 += x[37];
	c[154] = t1;

  /***  constraint 156  ***/

	t1 = -3.5*x[16];
	t1 += x[38];
	c[155] = t1;

  /***  constraint 157  ***/

	t1 = -4.3*x[16];
	t1 += x[39];
	c[156] = t1;

  /***  constraint 158  ***/

	t1 = -0.7*x[17];
	t1 += x[28];
	c[157] = t1;

  /***  constraint 159  ***/

	t1 = -2.4*x[17];
	t1 += x[29];
	c[158] = t1;

  /***  constraint 160  ***/

	t1 = -3.1*x[17];
	t1 += x[30];
	c[159] = t1;

  /***  constraint 161  ***/

	t1 = -2.2*x[17];
	t1 += x[31];
	c[160] = t1;

  /***  constraint 162  ***/

	t1 = -3.7*x[17];
	t1 += x[32];
	c[161] = t1;

  /***  constraint 163  ***/

	t1 = -4.8*x[17];
	t1 += x[33];
	c[162] = t1;

  /***  constraint 164  ***/

	t1 = -4.5*x[17];
	t1 += x[34];
	c[163] = t1;

  /***  constraint 165  ***/

	t1 = -5.2*x[17];
	t1 += x[35];
	c[164] = t1;

  /***  constraint 166  ***/

	t1 = -6.4*x[17];
	t1 += x[36];
	c[165] = t1;

  /***  constraint 167  ***/

	t1 = -5.7*x[17];
	t1 += x[37];
	c[166] = t1;

  /***  constraint 168  ***/

	t1 = -6.4*x[17];
	t1 += x[38];
	c[167] = t1;

  /***  constraint 169  ***/

	t1 = -6.8*x[17];
	t1 += x[39];
	c[168] = t1;

  /***  constraint 170  ***/

	t1 = -2.3*x[18];
	t1 += x[28];
	c[169] = t1;

  /***  constraint 171  ***/

	t1 = -4.7*x[18];
	t1 += x[29];
	c[170] = t1;

  /***  constraint 172  ***/

	t1 = -5.2*x[18];
	t1 += x[30];
	c[171] = t1;

  /***  constraint 173  ***/

	t1 = -3.5*x[18];
	t1 += x[31];
	c[172] = t1;

  /***  constraint 174  ***/

	t1 = -2.9*x[18];
	t1 += x[32];
	c[173] = t1;

  /***  constraint 175  ***/

	t1 = -3.6*x[18];
	t1 += x[33];
	c[174] = t1;

  /***  constraint 176  ***/

	t1 = -3.3*x[18];
	t1 += x[34];
	c[175] = t1;

  /***  constraint 177  ***/

	t1 = -3.2*x[18];
	t1 += x[35];
	c[176] = t1;

  /***  constraint 178  ***/

	t1 = -4.1*x[18];
	t1 += x[36];
	c[177] = t1;

  /***  constraint 179  ***/

	t1 = -3.7*x[18];
	t1 += x[37];
	c[178] = t1;

  /***  constraint 180  ***/

	t1 = -3.4*x[18];
	t1 += x[38];
	c[179] = t1;

  /***  constraint 181  ***/

	t1 = -3.7*x[18];
	t1 += x[39];
	c[180] = t1;

  /***  constraint 182  ***/

	t1 = -0.4*x[19];
	t1 += x[28];
	c[181] = t1;

  /***  constraint 183  ***/

	t1 = -0.9*x[19];
	t1 += x[29];
	c[182] = t1;

  /***  constraint 184  ***/

	t1 = -1.1*x[19];
	t1 += x[30];
	c[183] = t1;

  /***  constraint 185  ***/

	t1 = -1.4*x[19];
	t1 += x[31];
	c[184] = t1;

  /***  constraint 186  ***/

	t1 = -1.6*x[19];
	t1 += x[32];
	c[185] = t1;

  /***  constraint 187  ***/

	t1 = -2.2*x[19];
	t1 += x[33];
	c[186] = t1;

  /***  constraint 188  ***/

	t1 = -2.*x[19];
	t1 += x[34];
	c[187] = t1;

  /***  constraint 189  ***/

	t1 = -1.8*x[19];
	t1 += x[35];
	c[188] = t1;

  /***  constraint 190  ***/

	t1 = -1.8*x[19];
	t1 += x[36];
	c[189] = t1;

  /***  constraint 191  ***/

	t1 = -1.6*x[19];
	t1 += x[37];
	c[190] = t1;

  /***  constraint 192  ***/

	t1 = -1.8*x[19];
	t1 += x[38];
	c[191] = t1;

  /***  constraint 193  ***/

	t1 = -2.*x[19];
	t1 += x[39];
	c[192] = t1;

  /***  constraint 194  ***/

	t1 = x[0];
	t1 += -x[40];
	t1 += -2.*x[52];
	t1 += -4.*x[64];
	c[193] = t1;

  /***  constraint 195  ***/

	t1 = x[1];
	t1 += -x[41];
	t1 += -2.*x[53];
	t1 += -4.*x[65];
	c[194] = t1;

  /***  constraint 196  ***/

	t1 = x[2];
	t1 += -x[42];
	t1 += -2.*x[54];
	t1 += -4.*x[66];
	c[195] = t1;

  /***  constraint 197  ***/

	t1 = x[3];
	t1 += -x[43];
	t1 += -2.*x[55];
	t1 += -4.*x[67];
	c[196] = t1;

  /***  constraint 198  ***/

	t1 = x[4];
	t1 += -x[44];
	t1 += -2.*x[56];
	t1 += -4.*x[68];
	c[197] = t1;

  /***  constraint 199  ***/

	t1 = x[5];
	t1 += -x[45];
	t1 += -2.*x[57];
	t1 += -4.*x[69];
	c[198] = t1;

  /***  constraint 200  ***/

	t1 = x[6];
	t1 += -x[46];
	t1 += -2.*x[58];
	t1 += -4.*x[70];
	c[199] = t1;

  /***  constraint 201  ***/

	t1 = x[7];
	t1 += -x[47];
	t1 += -2.*x[59];
	t1 += -4.*x[71];
	c[200] = t1;

  /***  constraint 202  ***/

	t1 = x[8];
	t1 += -x[48];
	t1 += -2.*x[60];
	t1 += -4.*x[72];
	c[201] = t1;

  /***  constraint 203  ***/

	t1 = x[9];
	t1 += -x[49];
	t1 += -2.*x[61];
	t1 += -4.*x[73];
	c[202] = t1;

  /***  constraint 204  ***/

	t1 = x[10];
	t1 += -x[50];
	t1 += -2.*x[62];
	t1 += -4.*x[74];
	c[203] = t1;

  /***  constraint 205  ***/

	t1 = x[11];
	t1 += -x[51];
	t1 += -2.*x[63];
	t1 += -4.*x[75];
	c[204] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[212] = x[0];
	J[0] = x[20];

   /*** derivatives for constraint 2 ***/

	J[213] = x[1];
	J[9] = x[20];

   /*** derivatives for constraint 3 ***/

	J[214] = x[2];
	J[18] = x[20];

   /*** derivatives for constraint 4 ***/

	J[215] = x[3];
	J[27] = x[20];

   /*** derivatives for constraint 5 ***/

	J[216] = x[4];
	J[36] = x[20];

   /*** derivatives for constraint 6 ***/

	J[217] = x[5];
	J[45] = x[20];

   /*** derivatives for constraint 7 ***/

	J[218] = x[6];
	J[54] = x[20];

   /*** derivatives for constraint 8 ***/

	J[219] = x[7];
	J[63] = x[20];

   /*** derivatives for constraint 9 ***/

	J[220] = x[8];
	J[72] = x[20];

   /*** derivatives for constraint 10 ***/

	J[221] = x[9];
	J[81] = x[20];

   /*** derivatives for constraint 11 ***/

	J[222] = x[10];
	J[90] = x[20];

   /*** derivatives for constraint 12 ***/

	J[223] = x[11];
	J[99] = x[20];

   /*** derivatives for constraint 13 ***/

	J[225] = x[0];
	J[1] = x[21];

   /*** derivatives for constraint 14 ***/

	J[226] = x[1];
	J[10] = x[21];

   /*** derivatives for constraint 15 ***/

	J[227] = x[2];
	J[19] = x[21];

   /*** derivatives for constraint 16 ***/

	J[228] = x[3];
	J[28] = x[21];

   /*** derivatives for constraint 17 ***/

	J[229] = x[4];
	J[37] = x[21];

   /*** derivatives for constraint 18 ***/

	J[230] = x[5];
	J[46] = x[21];

   /*** derivatives for constraint 19 ***/

	J[231] = x[6];
	J[55] = x[21];

   /*** derivatives for constraint 20 ***/

	J[232] = x[7];
	J[64] = x[21];

   /*** derivatives for constraint 21 ***/

	J[233] = x[8];
	J[73] = x[21];

   /*** derivatives for constraint 22 ***/

	J[234] = x[9];
	J[82] = x[21];

   /*** derivatives for constraint 23 ***/

	J[235] = x[10];
	J[91] = x[21];

   /*** derivatives for constraint 24 ***/

	J[236] = x[11];
	J[100] = x[21];

   /*** derivatives for constraint 25 ***/

	J[238] = x[0];
	J[2] = x[22];

   /*** derivatives for constraint 26 ***/

	J[239] = x[1];
	J[11] = x[22];

   /*** derivatives for constraint 27 ***/

	J[240] = x[2];
	J[20] = x[22];

   /*** derivatives for constraint 28 ***/

	J[241] = x[3];
	J[29] = x[22];

   /*** derivatives for constraint 29 ***/

	J[242] = x[4];
	J[38] = x[22];

   /*** derivatives for constraint 30 ***/

	J[243] = x[5];
	J[47] = x[22];

   /*** derivatives for constraint 31 ***/

	J[244] = x[6];
	J[56] = x[22];

   /*** derivatives for constraint 32 ***/

	J[245] = x[7];
	J[65] = x[22];

   /*** derivatives for constraint 33 ***/

	J[246] = x[8];
	J[74] = x[22];

   /*** derivatives for constraint 34 ***/

	J[247] = x[9];
	J[83] = x[22];

   /*** derivatives for constraint 35 ***/

	J[248] = x[10];
	J[92] = x[22];

   /*** derivatives for constraint 36 ***/

	J[249] = x[11];
	J[101] = x[22];

   /*** derivatives for constraint 37 ***/

	J[251] = x[0];
	J[3] = x[23];

   /*** derivatives for constraint 38 ***/

	J[252] = x[1];
	J[12] = x[23];

   /*** derivatives for constraint 39 ***/

	J[253] = x[2];
	J[21] = x[23];

   /*** derivatives for constraint 40 ***/

	J[254] = x[3];
	J[30] = x[23];

   /*** derivatives for constraint 41 ***/

	J[255] = x[4];
	J[39] = x[23];

   /*** derivatives for constraint 42 ***/

	J[256] = x[5];
	J[48] = x[23];

   /*** derivatives for constraint 43 ***/

	J[257] = x[6];
	J[57] = x[23];

   /*** derivatives for constraint 44 ***/

	J[258] = x[7];
	J[66] = x[23];

   /*** derivatives for constraint 45 ***/

	J[259] = x[8];
	J[75] = x[23];

   /*** derivatives for constraint 46 ***/

	J[260] = x[9];
	J[84] = x[23];

   /*** derivatives for constraint 47 ***/

	J[261] = x[10];
	J[93] = x[23];

   /*** derivatives for constraint 48 ***/

	J[262] = x[11];
	J[102] = x[23];

   /*** derivatives for constraint 49 ***/

	J[264] = x[0];
	J[4] = x[24];

   /*** derivatives for constraint 50 ***/

	J[265] = x[1];
	J[13] = x[24];

   /*** derivatives for constraint 51 ***/

	J[266] = x[2];
	J[22] = x[24];

   /*** derivatives for constraint 52 ***/

	J[267] = x[3];
	J[31] = x[24];

   /*** derivatives for constraint 53 ***/

	J[268] = x[4];
	J[40] = x[24];

   /*** derivatives for constraint 54 ***/

	J[269] = x[5];
	J[49] = x[24];

   /*** derivatives for constraint 55 ***/

	J[270] = x[6];
	J[58] = x[24];

   /*** derivatives for constraint 56 ***/

	J[271] = x[7];
	J[67] = x[24];

   /*** derivatives for constraint 57 ***/

	J[272] = x[8];
	J[76] = x[24];

   /*** derivatives for constraint 58 ***/

	J[273] = x[9];
	J[85] = x[24];

   /*** derivatives for constraint 59 ***/

	J[274] = x[10];
	J[94] = x[24];

   /*** derivatives for constraint 60 ***/

	J[275] = x[11];
	J[103] = x[24];

   /*** derivatives for constraint 61 ***/

	J[277] = x[0];
	J[5] = x[25];

   /*** derivatives for constraint 62 ***/

	J[278] = x[1];
	J[14] = x[25];

   /*** derivatives for constraint 63 ***/

	J[279] = x[2];
	J[23] = x[25];

   /*** derivatives for constraint 64 ***/

	J[280] = x[3];
	J[32] = x[25];

   /*** derivatives for constraint 65 ***/

	J[281] = x[4];
	J[41] = x[25];

   /*** derivatives for constraint 66 ***/

	J[282] = x[5];
	J[50] = x[25];

   /*** derivatives for constraint 67 ***/

	J[283] = x[6];
	J[59] = x[25];

   /*** derivatives for constraint 68 ***/

	J[284] = x[7];
	J[68] = x[25];

   /*** derivatives for constraint 69 ***/

	J[285] = x[8];
	J[77] = x[25];

   /*** derivatives for constraint 70 ***/

	J[286] = x[9];
	J[86] = x[25];

   /*** derivatives for constraint 71 ***/

	J[287] = x[10];
	J[95] = x[25];

   /*** derivatives for constraint 72 ***/

	J[288] = x[11];
	J[104] = x[25];

   /*** derivatives for constraint 73 ***/

	J[290] = x[0];
	J[6] = x[26];

   /*** derivatives for constraint 74 ***/

	J[291] = x[1];
	J[15] = x[26];

   /*** derivatives for constraint 75 ***/

	J[292] = x[2];
	J[24] = x[26];

   /*** derivatives for constraint 76 ***/

	J[293] = x[3];
	J[33] = x[26];

   /*** derivatives for constraint 77 ***/

	J[294] = x[4];
	J[42] = x[26];

   /*** derivatives for constraint 78 ***/

	J[295] = x[5];
	J[51] = x[26];

   /*** derivatives for constraint 79 ***/

	J[296] = x[6];
	J[60] = x[26];

   /*** derivatives for constraint 80 ***/

	J[297] = x[7];
	J[69] = x[26];

   /*** derivatives for constraint 81 ***/

	J[298] = x[8];
	J[78] = x[26];

   /*** derivatives for constraint 82 ***/

	J[299] = x[9];
	J[87] = x[26];

   /*** derivatives for constraint 83 ***/

	J[300] = x[10];
	J[96] = x[26];

   /*** derivatives for constraint 84 ***/

	J[301] = x[11];
	J[105] = x[26];

   /*** derivatives for constraint 85 ***/

	J[303] = x[0];
	J[7] = x[27];

   /*** derivatives for constraint 86 ***/

	J[304] = x[1];
	J[16] = x[27];

   /*** derivatives for constraint 87 ***/

	J[305] = x[2];
	J[25] = x[27];

   /*** derivatives for constraint 88 ***/

	J[306] = x[3];
	J[34] = x[27];

   /*** derivatives for constraint 89 ***/

	J[307] = x[4];
	J[43] = x[27];

   /*** derivatives for constraint 90 ***/

	J[308] = x[5];
	J[52] = x[27];

   /*** derivatives for constraint 91 ***/

	J[309] = x[6];
	J[61] = x[27];

   /*** derivatives for constraint 92 ***/

	J[310] = x[7];
	J[70] = x[27];

   /*** derivatives for constraint 93 ***/

	J[311] = x[8];
	J[79] = x[27];

   /*** derivatives for constraint 94 ***/

	J[312] = x[9];
	J[88] = x[27];

   /*** derivatives for constraint 95 ***/

	J[313] = x[10];
	J[97] = x[27];

   /*** derivatives for constraint 96 ***/

	J[314] = x[11];
	J[106] = x[27];

   /*** derivatives for constraint 97 ***/

	J[199] = batch0812_nc_pd[15];
	J[315] = batch0812_nc_pd[14]*145000.;
	J[186] = batch0812_nc_pd[13];
	J[302] = batch0812_nc_pd[12]*288000.;
	J[173] = batch0812_nc_pd[11];
	J[289] = batch0812_nc_pd[10]*265000.;
	J[160] = batch0812_nc_pd[9];
	J[276] = batch0812_nc_pd[8]*363000.;
	J[147] = batch0812_nc_pd[7];
	J[263] = batch0812_nc_pd[6]*283000.;
	J[134] = batch0812_nc_pd[5];
	J[250] = batch0812_nc_pd[4]*320000.;
	J[121] = batch0812_nc_pd[3];
	J[237] = batch0812_nc_pd[2]*297000.;
	J[108] = batch0812_nc_pd[1];
	J[224] = batch0812_nc_pd[0]*485000.;

   /*** derivatives for constraint 98 ***/

	J[109] = -7.9;
	J[316] = 1.;

   /*** derivatives for constraint 99 ***/

	J[110] = -2.;
	J[324] = 1.;

   /*** derivatives for constraint 100 ***/

	J[111] = -5.2;
	J[332] = 1.;

   /*** derivatives for constraint 101 ***/

	J[112] = -4.9;
	J[340] = 1.;

   /*** derivatives for constraint 102 ***/

	J[113] = -6.1;
	J[348] = 1.;

   /*** derivatives for constraint 103 ***/

	J[114] = -4.2;
	J[356] = 1.;

   /*** derivatives for constraint 104 ***/

	J[115] = -2.8;
	J[364] = 1.;

   /*** derivatives for constraint 105 ***/

	J[116] = -3.3;
	J[372] = 1.;

   /*** derivatives for constraint 106 ***/

	J[117] = -4.1;
	J[380] = 1.;

   /*** derivatives for constraint 107 ***/

	J[118] = -3.8;
	J[388] = 1.;

   /*** derivatives for constraint 108 ***/

	J[119] = -2.8;
	J[396] = 1.;

   /*** derivatives for constraint 109 ***/

	J[120] = -3.9;
	J[404] = 1.;

   /*** derivatives for constraint 110 ***/

	J[122] = -0.7;
	J[317] = 1.;

   /*** derivatives for constraint 111 ***/

	J[123] = -0.8;
	J[325] = 1.;

   /*** derivatives for constraint 112 ***/

	J[124] = -0.9;
	J[333] = 1.;

   /*** derivatives for constraint 113 ***/

	J[125] = -3.4;
	J[341] = 1.;

   /*** derivatives for constraint 114 ***/

	J[126] = -2.1;
	J[349] = 1.;

   /*** derivatives for constraint 115 ***/

	J[127] = -2.5;
	J[357] = 1.;

   /*** derivatives for constraint 116 ***/

	J[128] = -3.3;
	J[365] = 1.;

   /*** derivatives for constraint 117 ***/

	J[129] = -3.;
	J[373] = 1.;

   /*** derivatives for constraint 118 ***/

	J[130] = -2.7;
	J[381] = 1.;

   /*** derivatives for constraint 119 ***/

	J[131] = -2.4;
	J[389] = 1.;

   /*** derivatives for constraint 120 ***/

	J[132] = -2.2;
	J[397] = 1.;

   /*** derivatives for constraint 121 ***/

	J[133] = -3.1;
	J[405] = 1.;

   /*** derivatives for constraint 122 ***/

	J[135] = -0.7;
	J[318] = 1.;

   /*** derivatives for constraint 123 ***/

	J[136] = -2.6;
	J[326] = 1.;

   /*** derivatives for constraint 124 ***/

	J[137] = -1.6;
	J[334] = 1.;

   /*** derivatives for constraint 125 ***/

	J[138] = -3.6;
	J[342] = 1.;

   /*** derivatives for constraint 126 ***/

	J[139] = -3.2;
	J[350] = 1.;

   /*** derivatives for constraint 127 ***/

	J[140] = -2.9;
	J[358] = 1.;

   /*** derivatives for constraint 128 ***/

	J[141] = -2.6;
	J[366] = 1.;

   /*** derivatives for constraint 129 ***/

	J[142] = -2.2;
	J[374] = 1.;

   /*** derivatives for constraint 130 ***/

	J[143] = -4.6;
	J[382] = 1.;

   /*** derivatives for constraint 131 ***/

	J[144] = -4.3;
	J[390] = 1.;

   /*** derivatives for constraint 132 ***/

	J[145] = -4.2;
	J[398] = 1.;

   /*** derivatives for constraint 133 ***/

	J[146] = -4.6;
	J[406] = 1.;

   /*** derivatives for constraint 134 ***/

	J[148] = -4.7;
	J[319] = 1.;

   /*** derivatives for constraint 135 ***/

	J[149] = -2.3;
	J[327] = 1.;

   /*** derivatives for constraint 136 ***/

	J[150] = -1.6;
	J[335] = 1.;

   /*** derivatives for constraint 137 ***/

	J[151] = -2.7;
	J[343] = 1.;

   /*** derivatives for constraint 138 ***/

	J[152] = -1.2;
	J[351] = 1.;

   /*** derivatives for constraint 139 ***/

	J[153] = -2.5;
	J[359] = 1.;

   /*** derivatives for constraint 140 ***/

	J[154] = -1.5;
	J[367] = 1.;

   /*** derivatives for constraint 141 ***/

	J[155] = -1.5;
	J[375] = 1.;

   /*** derivatives for constraint 142 ***/

	J[156] = -1.3;
	J[383] = 1.;

   /*** derivatives for constraint 143 ***/

	J[157] = -1.7;
	J[391] = 1.;

   /*** derivatives for constraint 144 ***/

	J[158] = -1.5;
	J[399] = 1.;

   /*** derivatives for constraint 145 ***/

	J[159] = -1.8;
	J[407] = 1.;

   /*** derivatives for constraint 146 ***/

	J[161] = -1.2;
	J[320] = 1.;

   /*** derivatives for constraint 147 ***/

	J[162] = -3.6;
	J[328] = 1.;

   /*** derivatives for constraint 148 ***/

	J[163] = -2.4;
	J[336] = 1.;

   /*** derivatives for constraint 149 ***/

	J[164] = -4.5;
	J[344] = 1.;

   /*** derivatives for constraint 150 ***/

	J[165] = -1.6;
	J[352] = 1.;

   /*** derivatives for constraint 151 ***/

	J[166] = -2.1;
	J[360] = 1.;

   /*** derivatives for constraint 152 ***/

	J[167] = -2.4;
	J[368] = 1.;

   /*** derivatives for constraint 153 ***/

	J[168] = -2.7;
	J[376] = 1.;

   /*** derivatives for constraint 154 ***/

	J[169] = -2.8;
	J[384] = 1.;

   /*** derivatives for constraint 155 ***/

	J[170] = -3.5;
	J[392] = 1.;

   /*** derivatives for constraint 156 ***/

	J[171] = -3.5;
	J[400] = 1.;

   /*** derivatives for constraint 157 ***/

	J[172] = -4.3;
	J[408] = 1.;

   /*** derivatives for constraint 158 ***/

	J[174] = -0.7;
	J[321] = 1.;

   /*** derivatives for constraint 159 ***/

	J[175] = -2.4;
	J[329] = 1.;

   /*** derivatives for constraint 160 ***/

	J[176] = -3.1;
	J[337] = 1.;

   /*** derivatives for constraint 161 ***/

	J[177] = -2.2;
	J[345] = 1.;

   /*** derivatives for constraint 162 ***/

	J[178] = -3.7;
	J[353] = 1.;

   /*** derivatives for constraint 163 ***/

	J[179] = -4.8;
	J[361] = 1.;

   /*** derivatives for constraint 164 ***/

	J[180] = -4.5;
	J[369] = 1.;

   /*** derivatives for constraint 165 ***/

	J[181] = -5.2;
	J[377] = 1.;

   /*** derivatives for constraint 166 ***/

	J[182] = -6.4;
	J[385] = 1.;

   /*** derivatives for constraint 167 ***/

	J[183] = -5.7;
	J[393] = 1.;

   /*** derivatives for constraint 168 ***/

	J[184] = -6.4;
	J[401] = 1.;

   /*** derivatives for constraint 169 ***/

	J[185] = -6.8;
	J[409] = 1.;

   /*** derivatives for constraint 170 ***/

	J[187] = -2.3;
	J[322] = 1.;

   /*** derivatives for constraint 171 ***/

	J[188] = -4.7;
	J[330] = 1.;

   /*** derivatives for constraint 172 ***/

	J[189] = -5.2;
	J[338] = 1.;

   /*** derivatives for constraint 173 ***/

	J[190] = -3.5;
	J[346] = 1.;

   /*** derivatives for constraint 174 ***/

	J[191] = -2.9;
	J[354] = 1.;

   /*** derivatives for constraint 175 ***/

	J[192] = -3.6;
	J[362] = 1.;

   /*** derivatives for constraint 176 ***/

	J[193] = -3.3;
	J[370] = 1.;

   /*** derivatives for constraint 177 ***/

	J[194] = -3.2;
	J[378] = 1.;

   /*** derivatives for constraint 178 ***/

	J[195] = -4.1;
	J[386] = 1.;

   /*** derivatives for constraint 179 ***/

	J[196] = -3.7;
	J[394] = 1.;

   /*** derivatives for constraint 180 ***/

	J[197] = -3.4;
	J[402] = 1.;

   /*** derivatives for constraint 181 ***/

	J[198] = -3.7;
	J[410] = 1.;

   /*** derivatives for constraint 182 ***/

	J[200] = -0.4;
	J[323] = 1.;

   /*** derivatives for constraint 183 ***/

	J[201] = -0.9;
	J[331] = 1.;

   /*** derivatives for constraint 184 ***/

	J[202] = -1.1;
	J[339] = 1.;

   /*** derivatives for constraint 185 ***/

	J[203] = -1.4;
	J[347] = 1.;

   /*** derivatives for constraint 186 ***/

	J[204] = -1.6;
	J[355] = 1.;

   /*** derivatives for constraint 187 ***/

	J[205] = -2.2;
	J[363] = 1.;

   /*** derivatives for constraint 188 ***/

	J[206] = -2.;
	J[371] = 1.;

   /*** derivatives for constraint 189 ***/

	J[207] = -1.8;
	J[379] = 1.;

   /*** derivatives for constraint 190 ***/

	J[208] = -1.8;
	J[387] = 1.;

   /*** derivatives for constraint 191 ***/

	J[209] = -1.6;
	J[395] = 1.;

   /*** derivatives for constraint 192 ***/

	J[210] = -1.8;
	J[403] = 1.;

   /*** derivatives for constraint 193 ***/

	J[211] = -2.;
	J[411] = 1.;

   /*** derivatives for constraint 194 ***/

	J[8] = 1.;
	J[412] = -1.;
	J[424] = -2.;
	J[436] = -4.;

   /*** derivatives for constraint 195 ***/

	J[17] = 1.;
	J[413] = -1.;
	J[425] = -2.;
	J[437] = -4.;

   /*** derivatives for constraint 196 ***/

	J[26] = 1.;
	J[414] = -1.;
	J[426] = -2.;
	J[438] = -4.;

   /*** derivatives for constraint 197 ***/

	J[35] = 1.;
	J[415] = -1.;
	J[427] = -2.;
	J[439] = -4.;

   /*** derivatives for constraint 198 ***/

	J[44] = 1.;
	J[416] = -1.;
	J[428] = -2.;
	J[440] = -4.;

   /*** derivatives for constraint 199 ***/

	J[53] = 1.;
	J[417] = -1.;
	J[429] = -2.;
	J[441] = -4.;

   /*** derivatives for constraint 200 ***/

	J[62] = 1.;
	J[418] = -1.;
	J[430] = -2.;
	J[442] = -4.;

   /*** derivatives for constraint 201 ***/

	J[71] = 1.;
	J[419] = -1.;
	J[431] = -2.;
	J[443] = -4.;

   /*** derivatives for constraint 202 ***/

	J[80] = 1.;
	J[420] = -1.;
	J[432] = -2.;
	J[444] = -4.;

   /*** derivatives for constraint 203 ***/

	J[89] = 1.;
	J[421] = -1.;
	J[433] = -2.;
	J[445] = -4.;

   /*** derivatives for constraint 204 ***/

	J[98] = 1.;
	J[422] = -1.;
	J[434] = -2.;
	J[446] = -4.;

   /*** derivatives for constraint 205 ***/

	J[107] = 1.;
	J[423] = -1.;
	J[435] = -2.;
	J[447] = -4.;
	}
}
#ifdef __cplusplus
	}
#endif
