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
 fint ex1266_auxcom_[1] = { 6 /* nlc */ };
 fint ex1266_funcom_[651] = {
	180 /* nvar */,
	1 /* nobj */,
	95 /* ncon */,
	464 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	25,
	31,
	37,
	43,
	49,
	55,
	61,
	67,
	73,
	79,
	85,
	91,
	97,
	103,
	109,
	115,
	121,
	127,
	133,
	139,
	145,
	151,
	157,
	163,
	169,
	175,
	181,
	187,
	193,
	199,
	205,
	211,
	217,
	228,
	240,
	252,
	264,
	276,
	287,
	288,
	289,
	290,
	291,
	292,
	293,
	294,
	295,
	296,
	297,
	298,
	299,
	300,
	301,
	302,
	303,
	304,
	305,
	306,
	307,
	308,
	309,
	310,
	311,
	312,
	313,
	314,
	315,
	316,
	317,
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
	329,
	330,
	331,
	332,
	333,
	334,
	335,
	336,
	337,
	338,
	339,
	340,
	341,
	342,
	343,
	344,
	345,
	346,
	347,
	348,
	349,
	350,
	351,
	352,
	353,
	354,
	355,
	356,
	357,
	358,
	359,
	360,
	361,
	362,
	363,
	364,
	365,
	366,
	367,
	368,
	369,
	370,
	371,
	372,
	373,
	374,
	375,
	376,
	377,
	378,
	379,
	380,
	381,
	382,
	383,
	384,
	385,
	386,
	387,
	388,
	389,
	390,
	391,
	392,
	393,
	394,
	395,
	402,
	410,
	418,
	426,
	434,
	441,
	442,
	443,
	444,
	445,
	446,
	447,
	448,
	449,
	450,
	451,
	452,
	453,
	454,
	455,
	456,
	457,
	458,
	459,
	460,
	461,
	462,
	463,
	464,
	465,

	/* rownos */
	1,
	7,
	13,
	19,
	25,
	54,
	1,
	8,
	14,
	20,
	26,
	55,
	1,
	9,
	15,
	21,
	27,
	56,
	1,
	10,
	16,
	22,
	28,
	57,
	1,
	11,
	17,
	23,
	29,
	58,
	1,
	12,
	18,
	24,
	30,
	59,
	2,
	7,
	13,
	19,
	25,
	60,
	2,
	8,
	14,
	20,
	26,
	61,
	2,
	9,
	15,
	21,
	27,
	62,
	2,
	10,
	16,
	22,
	28,
	63,
	2,
	11,
	17,
	23,
	29,
	64,
	2,
	12,
	18,
	24,
	30,
	65,
	3,
	7,
	13,
	19,
	25,
	66,
	3,
	8,
	14,
	20,
	26,
	67,
	3,
	9,
	15,
	21,
	27,
	68,
	3,
	10,
	16,
	22,
	28,
	69,
	3,
	11,
	17,
	23,
	29,
	70,
	3,
	12,
	18,
	24,
	30,
	71,
	4,
	7,
	13,
	19,
	25,
	72,
	4,
	8,
	14,
	20,
	26,
	73,
	4,
	9,
	15,
	21,
	27,
	74,
	4,
	10,
	16,
	22,
	28,
	75,
	4,
	11,
	17,
	23,
	29,
	76,
	4,
	12,
	18,
	24,
	30,
	77,
	5,
	7,
	13,
	19,
	25,
	78,
	5,
	8,
	14,
	20,
	26,
	79,
	5,
	9,
	15,
	21,
	27,
	80,
	5,
	10,
	16,
	22,
	28,
	81,
	5,
	11,
	17,
	23,
	29,
	82,
	5,
	12,
	18,
	24,
	30,
	83,
	6,
	7,
	13,
	19,
	25,
	84,
	6,
	8,
	14,
	20,
	26,
	85,
	6,
	9,
	15,
	21,
	27,
	86,
	6,
	10,
	16,
	22,
	28,
	87,
	6,
	11,
	17,
	23,
	29,
	88,
	6,
	12,
	18,
	24,
	30,
	89,
	1,
	2,
	3,
	4,
	5,
	6,
	31,
	37,
	43,
	49,
	90,
	1,
	2,
	3,
	4,
	5,
	6,
	32,
	38,
	43,
	49,
	50,
	91,
	1,
	2,
	3,
	4,
	5,
	6,
	33,
	39,
	43,
	50,
	51,
	92,
	1,
	2,
	3,
	4,
	5,
	6,
	34,
	40,
	43,
	51,
	52,
	93,
	1,
	2,
	3,
	4,
	5,
	6,
	35,
	41,
	43,
	52,
	53,
	94,
	1,
	2,
	3,
	4,
	5,
	6,
	36,
	42,
	43,
	53,
	95,
	54,
	54,
	54,
	55,
	55,
	55,
	56,
	56,
	56,
	57,
	57,
	57,
	58,
	58,
	58,
	59,
	59,
	59,
	60,
	60,
	60,
	61,
	61,
	61,
	62,
	62,
	62,
	63,
	63,
	63,
	64,
	64,
	64,
	65,
	65,
	65,
	66,
	66,
	66,
	67,
	67,
	67,
	68,
	68,
	68,
	69,
	69,
	69,
	70,
	70,
	70,
	71,
	71,
	71,
	72,
	72,
	72,
	73,
	73,
	73,
	74,
	74,
	74,
	75,
	75,
	75,
	76,
	76,
	76,
	77,
	77,
	77,
	78,
	78,
	78,
	79,
	79,
	79,
	80,
	80,
	80,
	81,
	81,
	81,
	82,
	82,
	82,
	83,
	83,
	83,
	84,
	84,
	84,
	85,
	85,
	85,
	86,
	86,
	86,
	87,
	87,
	87,
	88,
	88,
	88,
	89,
	89,
	89,
	7,
	13,
	19,
	25,
	31,
	37,
	44,
	8,
	14,
	20,
	26,
	32,
	38,
	44,
	45,
	9,
	15,
	21,
	27,
	33,
	39,
	45,
	46,
	10,
	16,
	22,
	28,
	34,
	40,
	46,
	47,
	11,
	17,
	23,
	29,
	35,
	41,
	47,
	48,
	12,
	18,
	24,
	30,
	36,
	42,
	48,
	90,
	90,
	90,
	90,
	91,
	91,
	91,
	91,
	92,
	92,
	92,
	92,
	93,
	93,
	93,
	93,
	94,
	94,
	94,
	94,
	95,
	95,
	95,
	95 };

 real ex1266_boundc_[1+360+190] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		15.,
		0.,
		12.,
		0.,
		8.,
		0.,
		7.,
		0.,
		4.,
		0.,
		2.,
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
		8.,
		1.7e308,
		16.,
		1.7e308,
		12.,
		1.7e308,
		7.,
		1.7e308,
		14.,
		1.7e308,
		16.,
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
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		16.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real ex1266_x0comn_[180] = {
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		2.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		2.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		2.,
		0.,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		8.,
		7.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real ex1266_old_x[180];
static int ex1266_xkind = -1;

 static int
ex1266_xcheck(real *x)
{
	real *x1 = ex1266_old_x, *xe = x + 180;
	errno = 0;
	if (ex1266_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1266_xkind = 0;
	return 1;
	}
 real
ex1266_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex1266_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[36];
	rv += x[37];
	rv += x[38];
	rv += x[39];
	rv += x[40];
	rv += x[41];
	rv += 0.1*x[150];
	rv += 0.2*x[151];
	rv += 0.3*x[152];
	rv += 0.4*x[153];
	rv += 0.5*x[154];
	;}

	if (wantfg & 2) {
	g[36] = 1.;
	g[37] = 1.;
	g[38] = 1.;
	g[39] = 1.;
	g[40] = 1.;
	g[41] = 1.;
	g[150] = 0.1;
	g[151] = 0.2;
	g[152] = 0.3;
	g[153] = 0.4;
	g[154] = 0.5;
	}

	return rv;
}

 void
ex1266_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ex1266_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[36] * x[0];
	v[1] = x[37] * x[1];
	v[0] += v[1];
	v[1] = x[38] * x[2];
	v[0] += v[1];
	v[1] = x[39] * x[3];
	v[0] += v[1];
	v[1] = x[40] * x[4];
	v[0] += v[1];
	v[1] = x[41] * x[5];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[36] * x[6];
	v[1] = x[37] * x[7];
	v[0] += v[1];
	v[1] = x[38] * x[8];
	v[0] += v[1];
	v[1] = x[39] * x[9];
	v[0] += v[1];
	v[1] = x[40] * x[10];
	v[0] += v[1];
	v[1] = x[41] * x[11];
	v[0] += v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[36] * x[12];
	v[1] = x[37] * x[13];
	v[0] += v[1];
	v[1] = x[38] * x[14];
	v[0] += v[1];
	v[1] = x[39] * x[15];
	v[0] += v[1];
	v[1] = x[40] * x[16];
	v[0] += v[1];
	v[1] = x[41] * x[17];
	v[0] += v[1];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[36] * x[18];
	v[1] = x[37] * x[19];
	v[0] += v[1];
	v[1] = x[38] * x[20];
	v[0] += v[1];
	v[1] = x[39] * x[21];
	v[0] += v[1];
	v[1] = x[40] * x[22];
	v[0] += v[1];
	v[1] = x[41] * x[23];
	v[0] += v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[36] * x[24];
	v[1] = x[37] * x[25];
	v[0] += v[1];
	v[1] = x[38] * x[26];
	v[0] += v[1];
	v[1] = x[39] * x[27];
	v[0] += v[1];
	v[1] = x[40] * x[28];
	v[0] += v[1];
	v[1] = x[41] * x[29];
	v[0] += v[1];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[36] * x[30];
	v[1] = x[37] * x[31];
	v[0] += v[1];
	v[1] = x[38] * x[32];
	v[0] += v[1];
	v[1] = x[39] * x[33];
	v[0] += v[1];
	v[1] = x[40] * x[34];
	v[0] += v[1];
	v[1] = x[41] * x[35];
	v[0] += v[1];
	c[5] = v[0];

  /***  constraint 7  ***/

	t1 = -330.*x[0];
	t1 += -360.*x[6];
	t1 += -380.*x[12];
	t1 += -430.*x[18];
	t1 += -490.*x[24];
	t1 += -530.*x[30];
	t1 += 2100.*x[150];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -330.*x[1];
	t1 += -360.*x[7];
	t1 += -380.*x[13];
	t1 += -430.*x[19];
	t1 += -490.*x[25];
	t1 += -530.*x[31];
	t1 += 2100.*x[151];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -330.*x[2];
	t1 += -360.*x[8];
	t1 += -380.*x[14];
	t1 += -430.*x[20];
	t1 += -490.*x[26];
	t1 += -530.*x[32];
	t1 += 2100.*x[152];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -330.*x[3];
	t1 += -360.*x[9];
	t1 += -380.*x[15];
	t1 += -430.*x[21];
	t1 += -490.*x[27];
	t1 += -530.*x[33];
	t1 += 2100.*x[153];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -330.*x[4];
	t1 += -360.*x[10];
	t1 += -380.*x[16];
	t1 += -430.*x[22];
	t1 += -490.*x[28];
	t1 += -530.*x[34];
	t1 += 2100.*x[154];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -330.*x[5];
	t1 += -360.*x[11];
	t1 += -380.*x[17];
	t1 += -430.*x[23];
	t1 += -490.*x[29];
	t1 += -530.*x[35];
	t1 += 2100.*x[155];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 330.*x[0];
	t1 += 360.*x[6];
	t1 += 380.*x[12];
	t1 += 430.*x[18];
	t1 += 490.*x[24];
	t1 += 530.*x[30];
	t1 += -2200.*x[150];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 330.*x[1];
	t1 += 360.*x[7];
	t1 += 380.*x[13];
	t1 += 430.*x[19];
	t1 += 490.*x[25];
	t1 += 530.*x[31];
	t1 += -2200.*x[151];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 330.*x[2];
	t1 += 360.*x[8];
	t1 += 380.*x[14];
	t1 += 430.*x[20];
	t1 += 490.*x[26];
	t1 += 530.*x[32];
	t1 += -2200.*x[152];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 330.*x[3];
	t1 += 360.*x[9];
	t1 += 380.*x[15];
	t1 += 430.*x[21];
	t1 += 490.*x[27];
	t1 += 530.*x[33];
	t1 += -2200.*x[153];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = 330.*x[4];
	t1 += 360.*x[10];
	t1 += 380.*x[16];
	t1 += 430.*x[22];
	t1 += 490.*x[28];
	t1 += 530.*x[34];
	t1 += -2200.*x[154];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 330.*x[5];
	t1 += 360.*x[11];
	t1 += 380.*x[17];
	t1 += 430.*x[23];
	t1 += 490.*x[29];
	t1 += 530.*x[35];
	t1 += -2200.*x[155];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[0];
	t1 += -x[6];
	t1 += -x[12];
	t1 += -x[18];
	t1 += -x[24];
	t1 += -x[30];
	t1 += x[150];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[1];
	t1 += -x[7];
	t1 += -x[13];
	t1 += -x[19];
	t1 += -x[25];
	t1 += -x[31];
	t1 += x[151];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[2];
	t1 += -x[8];
	t1 += -x[14];
	t1 += -x[20];
	t1 += -x[26];
	t1 += -x[32];
	t1 += x[152];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[3];
	t1 += -x[9];
	t1 += -x[15];
	t1 += -x[21];
	t1 += -x[27];
	t1 += -x[33];
	t1 += x[153];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[4];
	t1 += -x[10];
	t1 += -x[16];
	t1 += -x[22];
	t1 += -x[28];
	t1 += -x[34];
	t1 += x[154];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[5];
	t1 += -x[11];
	t1 += -x[17];
	t1 += -x[23];
	t1 += -x[29];
	t1 += -x[35];
	t1 += x[155];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[0];
	t1 += x[6];
	t1 += x[12];
	t1 += x[18];
	t1 += x[24];
	t1 += x[30];
	t1 += -5.*x[150];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[1];
	t1 += x[7];
	t1 += x[13];
	t1 += x[19];
	t1 += x[25];
	t1 += x[31];
	t1 += -5.*x[151];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[2];
	t1 += x[8];
	t1 += x[14];
	t1 += x[20];
	t1 += x[26];
	t1 += x[32];
	t1 += -5.*x[152];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[3];
	t1 += x[9];
	t1 += x[15];
	t1 += x[21];
	t1 += x[27];
	t1 += x[33];
	t1 += -5.*x[153];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[4];
	t1 += x[10];
	t1 += x[16];
	t1 += x[22];
	t1 += x[28];
	t1 += x[34];
	t1 += -5.*x[154];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[5];
	t1 += x[11];
	t1 += x[17];
	t1 += x[23];
	t1 += x[29];
	t1 += x[35];
	t1 += -5.*x[155];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[36];
	t1 += x[150];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[37];
	t1 += x[151];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[38];
	t1 += x[152];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[39];
	t1 += x[153];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[40];
	t1 += x[154];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[41];
	t1 += x[155];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[36];
	t1 += -15.*x[150];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[37];
	t1 += -12.*x[151];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[38];
	t1 += -8.*x[152];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[39];
	t1 += -7.*x[153];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[40];
	t1 += -4.*x[154];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[41];
	t1 += -2.*x[155];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[150];
	t1 += x[151];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[151];
	t1 += x[152];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[152];
	t1 += x[153];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[153];
	t1 += x[154];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[154];
	t1 += x[155];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[36];
	t1 += x[37];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[37];
	t1 += x[38];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[38];
	t1 += x[39];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[39];
	t1 += x[40];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[40];
	t1 += x[41];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[0];
	t1 += -x[42];
	t1 += -2.*x[43];
	t1 += -4.*x[44];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[1];
	t1 += -x[45];
	t1 += -2.*x[46];
	t1 += -4.*x[47];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[2];
	t1 += -x[48];
	t1 += -2.*x[49];
	t1 += -4.*x[50];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[3];
	t1 += -x[51];
	t1 += -2.*x[52];
	t1 += -4.*x[53];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[4];
	t1 += -x[54];
	t1 += -2.*x[55];
	t1 += -4.*x[56];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[5];
	t1 += -x[57];
	t1 += -2.*x[58];
	t1 += -4.*x[59];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[6];
	t1 += -x[60];
	t1 += -2.*x[61];
	t1 += -4.*x[62];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[7];
	t1 += -x[63];
	t1 += -2.*x[64];
	t1 += -4.*x[65];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[8];
	t1 += -x[66];
	t1 += -2.*x[67];
	t1 += -4.*x[68];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[9];
	t1 += -x[69];
	t1 += -2.*x[70];
	t1 += -4.*x[71];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[10];
	t1 += -x[72];
	t1 += -2.*x[73];
	t1 += -4.*x[74];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[11];
	t1 += -x[75];
	t1 += -2.*x[76];
	t1 += -4.*x[77];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[12];
	t1 += -x[78];
	t1 += -2.*x[79];
	t1 += -4.*x[80];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[13];
	t1 += -x[81];
	t1 += -2.*x[82];
	t1 += -4.*x[83];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[14];
	t1 += -x[84];
	t1 += -2.*x[85];
	t1 += -4.*x[86];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[15];
	t1 += -x[87];
	t1 += -2.*x[88];
	t1 += -4.*x[89];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[16];
	t1 += -x[90];
	t1 += -2.*x[91];
	t1 += -4.*x[92];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[17];
	t1 += -x[93];
	t1 += -2.*x[94];
	t1 += -4.*x[95];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[18];
	t1 += -x[96];
	t1 += -2.*x[97];
	t1 += -4.*x[98];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[19];
	t1 += -x[99];
	t1 += -2.*x[100];
	t1 += -4.*x[101];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[20];
	t1 += -x[102];
	t1 += -2.*x[103];
	t1 += -4.*x[104];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[21];
	t1 += -x[105];
	t1 += -2.*x[106];
	t1 += -4.*x[107];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[22];
	t1 += -x[108];
	t1 += -2.*x[109];
	t1 += -4.*x[110];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[23];
	t1 += -x[111];
	t1 += -2.*x[112];
	t1 += -4.*x[113];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[24];
	t1 += -x[114];
	t1 += -2.*x[115];
	t1 += -4.*x[116];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[25];
	t1 += -x[117];
	t1 += -2.*x[118];
	t1 += -4.*x[119];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[26];
	t1 += -x[120];
	t1 += -2.*x[121];
	t1 += -4.*x[122];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[27];
	t1 += -x[123];
	t1 += -2.*x[124];
	t1 += -4.*x[125];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[28];
	t1 += -x[126];
	t1 += -2.*x[127];
	t1 += -4.*x[128];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[29];
	t1 += -x[129];
	t1 += -2.*x[130];
	t1 += -4.*x[131];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[30];
	t1 += -x[132];
	t1 += -2.*x[133];
	t1 += -4.*x[134];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[31];
	t1 += -x[135];
	t1 += -2.*x[136];
	t1 += -4.*x[137];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[32];
	t1 += -x[138];
	t1 += -2.*x[139];
	t1 += -4.*x[140];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[33];
	t1 += -x[141];
	t1 += -2.*x[142];
	t1 += -4.*x[143];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[34];
	t1 += -x[144];
	t1 += -2.*x[145];
	t1 += -4.*x[146];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[35];
	t1 += -x[147];
	t1 += -2.*x[148];
	t1 += -4.*x[149];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[36];
	t1 += -x[156];
	t1 += -2.*x[157];
	t1 += -4.*x[158];
	t1 += -8.*x[159];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[37];
	t1 += -x[160];
	t1 += -2.*x[161];
	t1 += -4.*x[162];
	t1 += -8.*x[163];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[38];
	t1 += -x[164];
	t1 += -2.*x[165];
	t1 += -4.*x[166];
	t1 += -8.*x[167];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[39];
	t1 += -x[168];
	t1 += -2.*x[169];
	t1 += -4.*x[170];
	t1 += -8.*x[171];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[40];
	t1 += -x[172];
	t1 += -2.*x[173];
	t1 += -4.*x[174];
	t1 += -8.*x[175];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[41];
	t1 += -x[176];
	t1 += -2.*x[177];
	t1 += -4.*x[178];
	t1 += -8.*x[179];
	c[94] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[30] = x[41];
	J[275] = x[5];
	J[24] = x[40];
	J[263] = x[4];
	J[18] = x[39];
	J[251] = x[3];
	J[12] = x[38];
	J[239] = x[2];
	J[6] = x[37];
	J[227] = x[1];
	J[0] = x[36];
	J[216] = x[0];

   /*** derivatives for constraint 2 ***/

	J[66] = x[41];
	J[276] = x[11];
	J[60] = x[40];
	J[264] = x[10];
	J[54] = x[39];
	J[252] = x[9];
	J[48] = x[38];
	J[240] = x[8];
	J[42] = x[37];
	J[228] = x[7];
	J[36] = x[36];
	J[217] = x[6];

   /*** derivatives for constraint 3 ***/

	J[102] = x[41];
	J[277] = x[17];
	J[96] = x[40];
	J[265] = x[16];
	J[90] = x[39];
	J[253] = x[15];
	J[84] = x[38];
	J[241] = x[14];
	J[78] = x[37];
	J[229] = x[13];
	J[72] = x[36];
	J[218] = x[12];

   /*** derivatives for constraint 4 ***/

	J[138] = x[41];
	J[278] = x[23];
	J[132] = x[40];
	J[266] = x[22];
	J[126] = x[39];
	J[254] = x[21];
	J[120] = x[38];
	J[242] = x[20];
	J[114] = x[37];
	J[230] = x[19];
	J[108] = x[36];
	J[219] = x[18];

   /*** derivatives for constraint 5 ***/

	J[174] = x[41];
	J[279] = x[29];
	J[168] = x[40];
	J[267] = x[28];
	J[162] = x[39];
	J[255] = x[27];
	J[156] = x[38];
	J[243] = x[26];
	J[150] = x[37];
	J[231] = x[25];
	J[144] = x[36];
	J[220] = x[24];

   /*** derivatives for constraint 6 ***/

	J[210] = x[41];
	J[280] = x[35];
	J[204] = x[40];
	J[268] = x[34];
	J[198] = x[39];
	J[256] = x[33];
	J[192] = x[38];
	J[244] = x[32];
	J[186] = x[37];
	J[232] = x[31];
	J[180] = x[36];
	J[221] = x[30];

   /*** derivatives for constraint 7 ***/

	J[1] = -330.;
	J[37] = -360.;
	J[73] = -380.;
	J[109] = -430.;
	J[145] = -490.;
	J[181] = -530.;
	J[394] = 2100.;

   /*** derivatives for constraint 8 ***/

	J[7] = -330.;
	J[43] = -360.;
	J[79] = -380.;
	J[115] = -430.;
	J[151] = -490.;
	J[187] = -530.;
	J[401] = 2100.;

   /*** derivatives for constraint 9 ***/

	J[13] = -330.;
	J[49] = -360.;
	J[85] = -380.;
	J[121] = -430.;
	J[157] = -490.;
	J[193] = -530.;
	J[409] = 2100.;

   /*** derivatives for constraint 10 ***/

	J[19] = -330.;
	J[55] = -360.;
	J[91] = -380.;
	J[127] = -430.;
	J[163] = -490.;
	J[199] = -530.;
	J[417] = 2100.;

   /*** derivatives for constraint 11 ***/

	J[25] = -330.;
	J[61] = -360.;
	J[97] = -380.;
	J[133] = -430.;
	J[169] = -490.;
	J[205] = -530.;
	J[425] = 2100.;

   /*** derivatives for constraint 12 ***/

	J[31] = -330.;
	J[67] = -360.;
	J[103] = -380.;
	J[139] = -430.;
	J[175] = -490.;
	J[211] = -530.;
	J[433] = 2100.;

   /*** derivatives for constraint 13 ***/

	J[2] = 330.;
	J[38] = 360.;
	J[74] = 380.;
	J[110] = 430.;
	J[146] = 490.;
	J[182] = 530.;
	J[395] = -2200.;

   /*** derivatives for constraint 14 ***/

	J[8] = 330.;
	J[44] = 360.;
	J[80] = 380.;
	J[116] = 430.;
	J[152] = 490.;
	J[188] = 530.;
	J[402] = -2200.;

   /*** derivatives for constraint 15 ***/

	J[14] = 330.;
	J[50] = 360.;
	J[86] = 380.;
	J[122] = 430.;
	J[158] = 490.;
	J[194] = 530.;
	J[410] = -2200.;

   /*** derivatives for constraint 16 ***/

	J[20] = 330.;
	J[56] = 360.;
	J[92] = 380.;
	J[128] = 430.;
	J[164] = 490.;
	J[200] = 530.;
	J[418] = -2200.;

   /*** derivatives for constraint 17 ***/

	J[26] = 330.;
	J[62] = 360.;
	J[98] = 380.;
	J[134] = 430.;
	J[170] = 490.;
	J[206] = 530.;
	J[426] = -2200.;

   /*** derivatives for constraint 18 ***/

	J[32] = 330.;
	J[68] = 360.;
	J[104] = 380.;
	J[140] = 430.;
	J[176] = 490.;
	J[212] = 530.;
	J[434] = -2200.;

   /*** derivatives for constraint 19 ***/

	J[3] = -1.;
	J[39] = -1.;
	J[75] = -1.;
	J[111] = -1.;
	J[147] = -1.;
	J[183] = -1.;
	J[396] = 1.;

   /*** derivatives for constraint 20 ***/

	J[9] = -1.;
	J[45] = -1.;
	J[81] = -1.;
	J[117] = -1.;
	J[153] = -1.;
	J[189] = -1.;
	J[403] = 1.;

   /*** derivatives for constraint 21 ***/

	J[15] = -1.;
	J[51] = -1.;
	J[87] = -1.;
	J[123] = -1.;
	J[159] = -1.;
	J[195] = -1.;
	J[411] = 1.;

   /*** derivatives for constraint 22 ***/

	J[21] = -1.;
	J[57] = -1.;
	J[93] = -1.;
	J[129] = -1.;
	J[165] = -1.;
	J[201] = -1.;
	J[419] = 1.;

   /*** derivatives for constraint 23 ***/

	J[27] = -1.;
	J[63] = -1.;
	J[99] = -1.;
	J[135] = -1.;
	J[171] = -1.;
	J[207] = -1.;
	J[427] = 1.;

   /*** derivatives for constraint 24 ***/

	J[33] = -1.;
	J[69] = -1.;
	J[105] = -1.;
	J[141] = -1.;
	J[177] = -1.;
	J[213] = -1.;
	J[435] = 1.;

   /*** derivatives for constraint 25 ***/

	J[4] = 1.;
	J[40] = 1.;
	J[76] = 1.;
	J[112] = 1.;
	J[148] = 1.;
	J[184] = 1.;
	J[397] = -5.;

   /*** derivatives for constraint 26 ***/

	J[10] = 1.;
	J[46] = 1.;
	J[82] = 1.;
	J[118] = 1.;
	J[154] = 1.;
	J[190] = 1.;
	J[404] = -5.;

   /*** derivatives for constraint 27 ***/

	J[16] = 1.;
	J[52] = 1.;
	J[88] = 1.;
	J[124] = 1.;
	J[160] = 1.;
	J[196] = 1.;
	J[412] = -5.;

   /*** derivatives for constraint 28 ***/

	J[22] = 1.;
	J[58] = 1.;
	J[94] = 1.;
	J[130] = 1.;
	J[166] = 1.;
	J[202] = 1.;
	J[420] = -5.;

   /*** derivatives for constraint 29 ***/

	J[28] = 1.;
	J[64] = 1.;
	J[100] = 1.;
	J[136] = 1.;
	J[172] = 1.;
	J[208] = 1.;
	J[428] = -5.;

   /*** derivatives for constraint 30 ***/

	J[34] = 1.;
	J[70] = 1.;
	J[106] = 1.;
	J[142] = 1.;
	J[178] = 1.;
	J[214] = 1.;
	J[436] = -5.;

   /*** derivatives for constraint 31 ***/

	J[222] = -1.;
	J[398] = 1.;

   /*** derivatives for constraint 32 ***/

	J[233] = -1.;
	J[405] = 1.;

   /*** derivatives for constraint 33 ***/

	J[245] = -1.;
	J[413] = 1.;

   /*** derivatives for constraint 34 ***/

	J[257] = -1.;
	J[421] = 1.;

   /*** derivatives for constraint 35 ***/

	J[269] = -1.;
	J[429] = 1.;

   /*** derivatives for constraint 36 ***/

	J[281] = -1.;
	J[437] = 1.;

   /*** derivatives for constraint 37 ***/

	J[223] = 1.;
	J[399] = -15.;

   /*** derivatives for constraint 38 ***/

	J[234] = 1.;
	J[406] = -12.;

   /*** derivatives for constraint 39 ***/

	J[246] = 1.;
	J[414] = -8.;

   /*** derivatives for constraint 40 ***/

	J[258] = 1.;
	J[422] = -7.;

   /*** derivatives for constraint 41 ***/

	J[270] = 1.;
	J[430] = -4.;

   /*** derivatives for constraint 42 ***/

	J[282] = 1.;
	J[438] = -2.;

   /*** derivatives for constraint 43 ***/

	J[224] = 1.;
	J[235] = 1.;
	J[247] = 1.;
	J[259] = 1.;
	J[271] = 1.;
	J[283] = 1.;

   /*** derivatives for constraint 44 ***/

	J[400] = -1.;
	J[407] = 1.;

   /*** derivatives for constraint 45 ***/

	J[408] = -1.;
	J[415] = 1.;

   /*** derivatives for constraint 46 ***/

	J[416] = -1.;
	J[423] = 1.;

   /*** derivatives for constraint 47 ***/

	J[424] = -1.;
	J[431] = 1.;

   /*** derivatives for constraint 48 ***/

	J[432] = -1.;
	J[439] = 1.;

   /*** derivatives for constraint 49 ***/

	J[225] = -1.;
	J[236] = 1.;

   /*** derivatives for constraint 50 ***/

	J[237] = -1.;
	J[248] = 1.;

   /*** derivatives for constraint 51 ***/

	J[249] = -1.;
	J[260] = 1.;

   /*** derivatives for constraint 52 ***/

	J[261] = -1.;
	J[272] = 1.;

   /*** derivatives for constraint 53 ***/

	J[273] = -1.;
	J[284] = 1.;

   /*** derivatives for constraint 54 ***/

	J[5] = 1.;
	J[286] = -1.;
	J[287] = -2.;
	J[288] = -4.;

   /*** derivatives for constraint 55 ***/

	J[11] = 1.;
	J[289] = -1.;
	J[290] = -2.;
	J[291] = -4.;

   /*** derivatives for constraint 56 ***/

	J[17] = 1.;
	J[292] = -1.;
	J[293] = -2.;
	J[294] = -4.;

   /*** derivatives for constraint 57 ***/

	J[23] = 1.;
	J[295] = -1.;
	J[296] = -2.;
	J[297] = -4.;

   /*** derivatives for constraint 58 ***/

	J[29] = 1.;
	J[298] = -1.;
	J[299] = -2.;
	J[300] = -4.;

   /*** derivatives for constraint 59 ***/

	J[35] = 1.;
	J[301] = -1.;
	J[302] = -2.;
	J[303] = -4.;

   /*** derivatives for constraint 60 ***/

	J[41] = 1.;
	J[304] = -1.;
	J[305] = -2.;
	J[306] = -4.;

   /*** derivatives for constraint 61 ***/

	J[47] = 1.;
	J[307] = -1.;
	J[308] = -2.;
	J[309] = -4.;

   /*** derivatives for constraint 62 ***/

	J[53] = 1.;
	J[310] = -1.;
	J[311] = -2.;
	J[312] = -4.;

   /*** derivatives for constraint 63 ***/

	J[59] = 1.;
	J[313] = -1.;
	J[314] = -2.;
	J[315] = -4.;

   /*** derivatives for constraint 64 ***/

	J[65] = 1.;
	J[316] = -1.;
	J[317] = -2.;
	J[318] = -4.;

   /*** derivatives for constraint 65 ***/

	J[71] = 1.;
	J[319] = -1.;
	J[320] = -2.;
	J[321] = -4.;

   /*** derivatives for constraint 66 ***/

	J[77] = 1.;
	J[322] = -1.;
	J[323] = -2.;
	J[324] = -4.;

   /*** derivatives for constraint 67 ***/

	J[83] = 1.;
	J[325] = -1.;
	J[326] = -2.;
	J[327] = -4.;

   /*** derivatives for constraint 68 ***/

	J[89] = 1.;
	J[328] = -1.;
	J[329] = -2.;
	J[330] = -4.;

   /*** derivatives for constraint 69 ***/

	J[95] = 1.;
	J[331] = -1.;
	J[332] = -2.;
	J[333] = -4.;

   /*** derivatives for constraint 70 ***/

	J[101] = 1.;
	J[334] = -1.;
	J[335] = -2.;
	J[336] = -4.;

   /*** derivatives for constraint 71 ***/

	J[107] = 1.;
	J[337] = -1.;
	J[338] = -2.;
	J[339] = -4.;

   /*** derivatives for constraint 72 ***/

	J[113] = 1.;
	J[340] = -1.;
	J[341] = -2.;
	J[342] = -4.;

   /*** derivatives for constraint 73 ***/

	J[119] = 1.;
	J[343] = -1.;
	J[344] = -2.;
	J[345] = -4.;

   /*** derivatives for constraint 74 ***/

	J[125] = 1.;
	J[346] = -1.;
	J[347] = -2.;
	J[348] = -4.;

   /*** derivatives for constraint 75 ***/

	J[131] = 1.;
	J[349] = -1.;
	J[350] = -2.;
	J[351] = -4.;

   /*** derivatives for constraint 76 ***/

	J[137] = 1.;
	J[352] = -1.;
	J[353] = -2.;
	J[354] = -4.;

   /*** derivatives for constraint 77 ***/

	J[143] = 1.;
	J[355] = -1.;
	J[356] = -2.;
	J[357] = -4.;

   /*** derivatives for constraint 78 ***/

	J[149] = 1.;
	J[358] = -1.;
	J[359] = -2.;
	J[360] = -4.;

   /*** derivatives for constraint 79 ***/

	J[155] = 1.;
	J[361] = -1.;
	J[362] = -2.;
	J[363] = -4.;

   /*** derivatives for constraint 80 ***/

	J[161] = 1.;
	J[364] = -1.;
	J[365] = -2.;
	J[366] = -4.;

   /*** derivatives for constraint 81 ***/

	J[167] = 1.;
	J[367] = -1.;
	J[368] = -2.;
	J[369] = -4.;

   /*** derivatives for constraint 82 ***/

	J[173] = 1.;
	J[370] = -1.;
	J[371] = -2.;
	J[372] = -4.;

   /*** derivatives for constraint 83 ***/

	J[179] = 1.;
	J[373] = -1.;
	J[374] = -2.;
	J[375] = -4.;

   /*** derivatives for constraint 84 ***/

	J[185] = 1.;
	J[376] = -1.;
	J[377] = -2.;
	J[378] = -4.;

   /*** derivatives for constraint 85 ***/

	J[191] = 1.;
	J[379] = -1.;
	J[380] = -2.;
	J[381] = -4.;

   /*** derivatives for constraint 86 ***/

	J[197] = 1.;
	J[382] = -1.;
	J[383] = -2.;
	J[384] = -4.;

   /*** derivatives for constraint 87 ***/

	J[203] = 1.;
	J[385] = -1.;
	J[386] = -2.;
	J[387] = -4.;

   /*** derivatives for constraint 88 ***/

	J[209] = 1.;
	J[388] = -1.;
	J[389] = -2.;
	J[390] = -4.;

   /*** derivatives for constraint 89 ***/

	J[215] = 1.;
	J[391] = -1.;
	J[392] = -2.;
	J[393] = -4.;

   /*** derivatives for constraint 90 ***/

	J[226] = 1.;
	J[440] = -1.;
	J[441] = -2.;
	J[442] = -4.;
	J[443] = -8.;

   /*** derivatives for constraint 91 ***/

	J[238] = 1.;
	J[444] = -1.;
	J[445] = -2.;
	J[446] = -4.;
	J[447] = -8.;

   /*** derivatives for constraint 92 ***/

	J[250] = 1.;
	J[448] = -1.;
	J[449] = -2.;
	J[450] = -4.;
	J[451] = -8.;

   /*** derivatives for constraint 93 ***/

	J[262] = 1.;
	J[452] = -1.;
	J[453] = -2.;
	J[454] = -4.;
	J[455] = -8.;

   /*** derivatives for constraint 94 ***/

	J[274] = 1.;
	J[456] = -1.;
	J[457] = -2.;
	J[458] = -4.;
	J[459] = -8.;

   /*** derivatives for constraint 95 ***/

	J[285] = 1.;
	J[460] = -1.;
	J[461] = -2.;
	J[462] = -4.;
	J[463] = -8.;
	}
}
#ifdef __cplusplus
	}
#endif