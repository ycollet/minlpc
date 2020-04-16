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
 fint ex1265_auxcom_[1] = { 5 /* nlc */ };
 fint ex1265_funcom_[473] = {
	130 /* nvar */,
	1 /* nobj */,
	74 /* ncon */,
	336 /* nzc */,
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
	161,
	172,
	183,
	194,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
	224,
	225,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
	233,
	234,
	235,
	236,
	237,
	238,
	239,
	240,
	241,
	242,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
	250,
	251,
	252,
	253,
	254,
	255,
	256,
	257,
	258,
	259,
	260,
	261,
	262,
	263,
	264,
	265,
	266,
	267,
	268,
	269,
	270,
	271,
	272,
	273,
	274,
	275,
	276,
	277,
	278,
	279,
	286,
	294,
	302,
	310,
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

	/* rownos */
	1,
	6,
	11,
	16,
	21,
	45,
	1,
	7,
	12,
	17,
	22,
	46,
	1,
	8,
	13,
	18,
	23,
	47,
	1,
	9,
	14,
	19,
	24,
	48,
	1,
	10,
	15,
	20,
	25,
	49,
	2,
	6,
	11,
	16,
	21,
	50,
	2,
	7,
	12,
	17,
	22,
	51,
	2,
	8,
	13,
	18,
	23,
	52,
	2,
	9,
	14,
	19,
	24,
	53,
	2,
	10,
	15,
	20,
	25,
	54,
	3,
	6,
	11,
	16,
	21,
	55,
	3,
	7,
	12,
	17,
	22,
	56,
	3,
	8,
	13,
	18,
	23,
	57,
	3,
	9,
	14,
	19,
	24,
	58,
	3,
	10,
	15,
	20,
	25,
	59,
	4,
	6,
	11,
	16,
	21,
	60,
	4,
	7,
	12,
	17,
	22,
	61,
	4,
	8,
	13,
	18,
	23,
	62,
	4,
	9,
	14,
	19,
	24,
	63,
	4,
	10,
	15,
	20,
	25,
	64,
	5,
	6,
	11,
	16,
	21,
	65,
	5,
	7,
	12,
	17,
	22,
	66,
	5,
	8,
	13,
	18,
	23,
	67,
	5,
	9,
	14,
	19,
	24,
	68,
	5,
	10,
	15,
	20,
	25,
	69,
	1,
	2,
	3,
	4,
	5,
	26,
	31,
	36,
	41,
	70,
	1,
	2,
	3,
	4,
	5,
	27,
	32,
	36,
	41,
	42,
	71,
	1,
	2,
	3,
	4,
	5,
	28,
	33,
	36,
	42,
	43,
	72,
	1,
	2,
	3,
	4,
	5,
	29,
	34,
	36,
	43,
	44,
	73,
	1,
	2,
	3,
	4,
	5,
	30,
	35,
	36,
	44,
	74,
	45,
	45,
	45,
	46,
	46,
	46,
	47,
	47,
	47,
	48,
	48,
	48,
	49,
	49,
	49,
	50,
	50,
	50,
	51,
	51,
	51,
	52,
	52,
	52,
	53,
	53,
	53,
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
	6,
	11,
	16,
	21,
	26,
	31,
	37,
	7,
	12,
	17,
	22,
	27,
	32,
	37,
	38,
	8,
	13,
	18,
	23,
	28,
	33,
	38,
	39,
	9,
	14,
	19,
	24,
	29,
	34,
	39,
	40,
	10,
	15,
	20,
	25,
	30,
	35,
	40,
	70,
	70,
	70,
	70,
	71,
	71,
	71,
	71,
	72,
	72,
	72,
	72,
	73,
	73,
	73,
	73,
	74,
	74,
	74,
	74 };

 real ex1265_boundc_[1+260+148] /* Infinity, variable bounds, constraint bounds */ = {
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
		15.,
		0.,
		12.,
		0.,
		9.,
		0.,
		6.,
		0.,
		6.,
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
		12.,
		1.7e308,
		6.,
		1.7e308,
		15.,
		1.7e308,
		6.,
		1.7e308,
		9.,
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
		10.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real ex1265_x0comn_[130] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real ex1265_old_x[130];
static int ex1265_xkind = -1;

 static int
ex1265_xcheck(real *x)
{
	real *x1 = ex1265_old_x, *xe = x + 130;
	errno = 0;
	if (ex1265_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1265_xkind = 0;
	return 1;
	}
 real
ex1265_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex1265_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[25];
	rv += x[26];
	rv += x[27];
	rv += x[28];
	rv += x[29];
	rv += 0.1*x[105];
	rv += 0.2*x[106];
	rv += 0.3*x[107];
	rv += 0.4*x[108];
	rv += 0.5*x[109];
	;}

	if (wantfg & 2) {
	g[25] = 1.;
	g[26] = 1.;
	g[27] = 1.;
	g[28] = 1.;
	g[29] = 1.;
	g[105] = 0.1;
	g[106] = 0.2;
	g[107] = 0.3;
	g[108] = 0.4;
	g[109] = 0.5;
	}

	return rv;
}

 void
ex1265_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ex1265_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[25] * x[0];
	v[1] = x[26] * x[1];
	v[0] += v[1];
	v[1] = x[27] * x[2];
	v[0] += v[1];
	v[1] = x[28] * x[3];
	v[0] += v[1];
	v[1] = x[29] * x[4];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[25] * x[5];
	v[1] = x[26] * x[6];
	v[0] += v[1];
	v[1] = x[27] * x[7];
	v[0] += v[1];
	v[1] = x[28] * x[8];
	v[0] += v[1];
	v[1] = x[29] * x[9];
	v[0] += v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[25] * x[10];
	v[1] = x[26] * x[11];
	v[0] += v[1];
	v[1] = x[27] * x[12];
	v[0] += v[1];
	v[1] = x[28] * x[13];
	v[0] += v[1];
	v[1] = x[29] * x[14];
	v[0] += v[1];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[25] * x[15];
	v[1] = x[26] * x[16];
	v[0] += v[1];
	v[1] = x[27] * x[17];
	v[0] += v[1];
	v[1] = x[28] * x[18];
	v[0] += v[1];
	v[1] = x[29] * x[19];
	v[0] += v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[25] * x[20];
	v[1] = x[26] * x[21];
	v[0] += v[1];
	v[1] = x[27] * x[22];
	v[0] += v[1];
	v[1] = x[28] * x[23];
	v[0] += v[1];
	v[1] = x[29] * x[24];
	v[0] += v[1];
	c[4] = v[0];

  /***  constraint 6  ***/

	t1 = -330.*x[0];
	t1 += -360.*x[5];
	t1 += -370.*x[10];
	t1 += -415.*x[15];
	t1 += -435.*x[20];
	t1 += 1800.*x[105];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -330.*x[1];
	t1 += -360.*x[6];
	t1 += -370.*x[11];
	t1 += -415.*x[16];
	t1 += -435.*x[21];
	t1 += 1800.*x[106];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -330.*x[2];
	t1 += -360.*x[7];
	t1 += -370.*x[12];
	t1 += -415.*x[17];
	t1 += -435.*x[22];
	t1 += 1800.*x[107];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -330.*x[3];
	t1 += -360.*x[8];
	t1 += -370.*x[13];
	t1 += -415.*x[18];
	t1 += -435.*x[23];
	t1 += 1800.*x[108];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -330.*x[4];
	t1 += -360.*x[9];
	t1 += -370.*x[14];
	t1 += -415.*x[19];
	t1 += -435.*x[24];
	t1 += 1800.*x[109];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 330.*x[0];
	t1 += 360.*x[5];
	t1 += 370.*x[10];
	t1 += 415.*x[15];
	t1 += 435.*x[20];
	t1 += -2000.*x[105];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 330.*x[1];
	t1 += 360.*x[6];
	t1 += 370.*x[11];
	t1 += 415.*x[16];
	t1 += 435.*x[21];
	t1 += -2000.*x[106];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 330.*x[2];
	t1 += 360.*x[7];
	t1 += 370.*x[12];
	t1 += 415.*x[17];
	t1 += 435.*x[22];
	t1 += -2000.*x[107];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 330.*x[3];
	t1 += 360.*x[8];
	t1 += 370.*x[13];
	t1 += 415.*x[18];
	t1 += 435.*x[23];
	t1 += -2000.*x[108];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 330.*x[4];
	t1 += 360.*x[9];
	t1 += 370.*x[14];
	t1 += 415.*x[19];
	t1 += 435.*x[24];
	t1 += -2000.*x[109];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[0];
	t1 += -x[5];
	t1 += -x[10];
	t1 += -x[15];
	t1 += -x[20];
	t1 += x[105];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[1];
	t1 += -x[6];
	t1 += -x[11];
	t1 += -x[16];
	t1 += -x[21];
	t1 += x[106];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[2];
	t1 += -x[7];
	t1 += -x[12];
	t1 += -x[17];
	t1 += -x[22];
	t1 += x[107];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[3];
	t1 += -x[8];
	t1 += -x[13];
	t1 += -x[18];
	t1 += -x[23];
	t1 += x[108];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[4];
	t1 += -x[9];
	t1 += -x[14];
	t1 += -x[19];
	t1 += -x[24];
	t1 += x[109];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[0];
	t1 += x[5];
	t1 += x[10];
	t1 += x[15];
	t1 += x[20];
	t1 += -5.*x[105];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[1];
	t1 += x[6];
	t1 += x[11];
	t1 += x[16];
	t1 += x[21];
	t1 += -5.*x[106];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[2];
	t1 += x[7];
	t1 += x[12];
	t1 += x[17];
	t1 += x[22];
	t1 += -5.*x[107];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[3];
	t1 += x[8];
	t1 += x[13];
	t1 += x[18];
	t1 += x[23];
	t1 += -5.*x[108];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[4];
	t1 += x[9];
	t1 += x[14];
	t1 += x[19];
	t1 += x[24];
	t1 += -5.*x[109];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[25];
	t1 += x[105];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[26];
	t1 += x[106];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[27];
	t1 += x[107];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[28];
	t1 += x[108];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[29];
	t1 += x[109];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[25];
	t1 += -15.*x[105];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[26];
	t1 += -12.*x[106];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[27];
	t1 += -9.*x[107];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[28];
	t1 += -6.*x[108];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[29];
	t1 += -6.*x[109];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[105];
	t1 += x[106];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[106];
	t1 += x[107];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[107];
	t1 += x[108];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[108];
	t1 += x[109];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[25];
	t1 += x[26];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[26];
	t1 += x[27];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[27];
	t1 += x[28];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[28];
	t1 += x[29];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[0];
	t1 += -x[30];
	t1 += -2.*x[31];
	t1 += -4.*x[32];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[1];
	t1 += -x[33];
	t1 += -2.*x[34];
	t1 += -4.*x[35];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[2];
	t1 += -x[36];
	t1 += -2.*x[37];
	t1 += -4.*x[38];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[3];
	t1 += -x[39];
	t1 += -2.*x[40];
	t1 += -4.*x[41];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[4];
	t1 += -x[42];
	t1 += -2.*x[43];
	t1 += -4.*x[44];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[5];
	t1 += -x[45];
	t1 += -2.*x[46];
	t1 += -4.*x[47];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[6];
	t1 += -x[48];
	t1 += -2.*x[49];
	t1 += -4.*x[50];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[7];
	t1 += -x[51];
	t1 += -2.*x[52];
	t1 += -4.*x[53];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[8];
	t1 += -x[54];
	t1 += -2.*x[55];
	t1 += -4.*x[56];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[9];
	t1 += -x[57];
	t1 += -2.*x[58];
	t1 += -4.*x[59];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[10];
	t1 += -x[60];
	t1 += -2.*x[61];
	t1 += -4.*x[62];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[11];
	t1 += -x[63];
	t1 += -2.*x[64];
	t1 += -4.*x[65];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[12];
	t1 += -x[66];
	t1 += -2.*x[67];
	t1 += -4.*x[68];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[13];
	t1 += -x[69];
	t1 += -2.*x[70];
	t1 += -4.*x[71];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[14];
	t1 += -x[72];
	t1 += -2.*x[73];
	t1 += -4.*x[74];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[15];
	t1 += -x[75];
	t1 += -2.*x[76];
	t1 += -4.*x[77];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[16];
	t1 += -x[78];
	t1 += -2.*x[79];
	t1 += -4.*x[80];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[17];
	t1 += -x[81];
	t1 += -2.*x[82];
	t1 += -4.*x[83];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[18];
	t1 += -x[84];
	t1 += -2.*x[85];
	t1 += -4.*x[86];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[19];
	t1 += -x[87];
	t1 += -2.*x[88];
	t1 += -4.*x[89];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[20];
	t1 += -x[90];
	t1 += -2.*x[91];
	t1 += -4.*x[92];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[21];
	t1 += -x[93];
	t1 += -2.*x[94];
	t1 += -4.*x[95];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[22];
	t1 += -x[96];
	t1 += -2.*x[97];
	t1 += -4.*x[98];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[23];
	t1 += -x[99];
	t1 += -2.*x[100];
	t1 += -4.*x[101];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[24];
	t1 += -x[102];
	t1 += -2.*x[103];
	t1 += -4.*x[104];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[25];
	t1 += -x[110];
	t1 += -2.*x[111];
	t1 += -4.*x[112];
	t1 += -8.*x[113];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[26];
	t1 += -x[114];
	t1 += -2.*x[115];
	t1 += -4.*x[116];
	t1 += -8.*x[117];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[27];
	t1 += -x[118];
	t1 += -2.*x[119];
	t1 += -4.*x[120];
	t1 += -8.*x[121];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[28];
	t1 += -x[122];
	t1 += -2.*x[123];
	t1 += -4.*x[124];
	t1 += -8.*x[125];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[29];
	t1 += -x[126];
	t1 += -2.*x[127];
	t1 += -4.*x[128];
	t1 += -8.*x[129];
	c[73] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[24] = x[29];
	J[193] = x[4];
	J[18] = x[28];
	J[182] = x[3];
	J[12] = x[27];
	J[171] = x[2];
	J[6] = x[26];
	J[160] = x[1];
	J[0] = x[25];
	J[150] = x[0];

   /*** derivatives for constraint 2 ***/

	J[54] = x[29];
	J[194] = x[9];
	J[48] = x[28];
	J[183] = x[8];
	J[42] = x[27];
	J[172] = x[7];
	J[36] = x[26];
	J[161] = x[6];
	J[30] = x[25];
	J[151] = x[5];

   /*** derivatives for constraint 3 ***/

	J[84] = x[29];
	J[195] = x[14];
	J[78] = x[28];
	J[184] = x[13];
	J[72] = x[27];
	J[173] = x[12];
	J[66] = x[26];
	J[162] = x[11];
	J[60] = x[25];
	J[152] = x[10];

   /*** derivatives for constraint 4 ***/

	J[114] = x[29];
	J[196] = x[19];
	J[108] = x[28];
	J[185] = x[18];
	J[102] = x[27];
	J[174] = x[17];
	J[96] = x[26];
	J[163] = x[16];
	J[90] = x[25];
	J[153] = x[15];

   /*** derivatives for constraint 5 ***/

	J[144] = x[29];
	J[197] = x[24];
	J[138] = x[28];
	J[186] = x[23];
	J[132] = x[27];
	J[175] = x[22];
	J[126] = x[26];
	J[164] = x[21];
	J[120] = x[25];
	J[154] = x[20];

   /*** derivatives for constraint 6 ***/

	J[1] = -330.;
	J[31] = -360.;
	J[61] = -370.;
	J[91] = -415.;
	J[121] = -435.;
	J[278] = 1800.;

   /*** derivatives for constraint 7 ***/

	J[7] = -330.;
	J[37] = -360.;
	J[67] = -370.;
	J[97] = -415.;
	J[127] = -435.;
	J[285] = 1800.;

   /*** derivatives for constraint 8 ***/

	J[13] = -330.;
	J[43] = -360.;
	J[73] = -370.;
	J[103] = -415.;
	J[133] = -435.;
	J[293] = 1800.;

   /*** derivatives for constraint 9 ***/

	J[19] = -330.;
	J[49] = -360.;
	J[79] = -370.;
	J[109] = -415.;
	J[139] = -435.;
	J[301] = 1800.;

   /*** derivatives for constraint 10 ***/

	J[25] = -330.;
	J[55] = -360.;
	J[85] = -370.;
	J[115] = -415.;
	J[145] = -435.;
	J[309] = 1800.;

   /*** derivatives for constraint 11 ***/

	J[2] = 330.;
	J[32] = 360.;
	J[62] = 370.;
	J[92] = 415.;
	J[122] = 435.;
	J[279] = -2000.;

   /*** derivatives for constraint 12 ***/

	J[8] = 330.;
	J[38] = 360.;
	J[68] = 370.;
	J[98] = 415.;
	J[128] = 435.;
	J[286] = -2000.;

   /*** derivatives for constraint 13 ***/

	J[14] = 330.;
	J[44] = 360.;
	J[74] = 370.;
	J[104] = 415.;
	J[134] = 435.;
	J[294] = -2000.;

   /*** derivatives for constraint 14 ***/

	J[20] = 330.;
	J[50] = 360.;
	J[80] = 370.;
	J[110] = 415.;
	J[140] = 435.;
	J[302] = -2000.;

   /*** derivatives for constraint 15 ***/

	J[26] = 330.;
	J[56] = 360.;
	J[86] = 370.;
	J[116] = 415.;
	J[146] = 435.;
	J[310] = -2000.;

   /*** derivatives for constraint 16 ***/

	J[3] = -1.;
	J[33] = -1.;
	J[63] = -1.;
	J[93] = -1.;
	J[123] = -1.;
	J[280] = 1.;

   /*** derivatives for constraint 17 ***/

	J[9] = -1.;
	J[39] = -1.;
	J[69] = -1.;
	J[99] = -1.;
	J[129] = -1.;
	J[287] = 1.;

   /*** derivatives for constraint 18 ***/

	J[15] = -1.;
	J[45] = -1.;
	J[75] = -1.;
	J[105] = -1.;
	J[135] = -1.;
	J[295] = 1.;

   /*** derivatives for constraint 19 ***/

	J[21] = -1.;
	J[51] = -1.;
	J[81] = -1.;
	J[111] = -1.;
	J[141] = -1.;
	J[303] = 1.;

   /*** derivatives for constraint 20 ***/

	J[27] = -1.;
	J[57] = -1.;
	J[87] = -1.;
	J[117] = -1.;
	J[147] = -1.;
	J[311] = 1.;

   /*** derivatives for constraint 21 ***/

	J[4] = 1.;
	J[34] = 1.;
	J[64] = 1.;
	J[94] = 1.;
	J[124] = 1.;
	J[281] = -5.;

   /*** derivatives for constraint 22 ***/

	J[10] = 1.;
	J[40] = 1.;
	J[70] = 1.;
	J[100] = 1.;
	J[130] = 1.;
	J[288] = -5.;

   /*** derivatives for constraint 23 ***/

	J[16] = 1.;
	J[46] = 1.;
	J[76] = 1.;
	J[106] = 1.;
	J[136] = 1.;
	J[296] = -5.;

   /*** derivatives for constraint 24 ***/

	J[22] = 1.;
	J[52] = 1.;
	J[82] = 1.;
	J[112] = 1.;
	J[142] = 1.;
	J[304] = -5.;

   /*** derivatives for constraint 25 ***/

	J[28] = 1.;
	J[58] = 1.;
	J[88] = 1.;
	J[118] = 1.;
	J[148] = 1.;
	J[312] = -5.;

   /*** derivatives for constraint 26 ***/

	J[155] = -1.;
	J[282] = 1.;

   /*** derivatives for constraint 27 ***/

	J[165] = -1.;
	J[289] = 1.;

   /*** derivatives for constraint 28 ***/

	J[176] = -1.;
	J[297] = 1.;

   /*** derivatives for constraint 29 ***/

	J[187] = -1.;
	J[305] = 1.;

   /*** derivatives for constraint 30 ***/

	J[198] = -1.;
	J[313] = 1.;

   /*** derivatives for constraint 31 ***/

	J[156] = 1.;
	J[283] = -15.;

   /*** derivatives for constraint 32 ***/

	J[166] = 1.;
	J[290] = -12.;

   /*** derivatives for constraint 33 ***/

	J[177] = 1.;
	J[298] = -9.;

   /*** derivatives for constraint 34 ***/

	J[188] = 1.;
	J[306] = -6.;

   /*** derivatives for constraint 35 ***/

	J[199] = 1.;
	J[314] = -6.;

   /*** derivatives for constraint 36 ***/

	J[157] = 1.;
	J[167] = 1.;
	J[178] = 1.;
	J[189] = 1.;
	J[200] = 1.;

   /*** derivatives for constraint 37 ***/

	J[284] = -1.;
	J[291] = 1.;

   /*** derivatives for constraint 38 ***/

	J[292] = -1.;
	J[299] = 1.;

   /*** derivatives for constraint 39 ***/

	J[300] = -1.;
	J[307] = 1.;

   /*** derivatives for constraint 40 ***/

	J[308] = -1.;
	J[315] = 1.;

   /*** derivatives for constraint 41 ***/

	J[158] = -1.;
	J[168] = 1.;

   /*** derivatives for constraint 42 ***/

	J[169] = -1.;
	J[179] = 1.;

   /*** derivatives for constraint 43 ***/

	J[180] = -1.;
	J[190] = 1.;

   /*** derivatives for constraint 44 ***/

	J[191] = -1.;
	J[201] = 1.;

   /*** derivatives for constraint 45 ***/

	J[5] = 1.;
	J[203] = -1.;
	J[204] = -2.;
	J[205] = -4.;

   /*** derivatives for constraint 46 ***/

	J[11] = 1.;
	J[206] = -1.;
	J[207] = -2.;
	J[208] = -4.;

   /*** derivatives for constraint 47 ***/

	J[17] = 1.;
	J[209] = -1.;
	J[210] = -2.;
	J[211] = -4.;

   /*** derivatives for constraint 48 ***/

	J[23] = 1.;
	J[212] = -1.;
	J[213] = -2.;
	J[214] = -4.;

   /*** derivatives for constraint 49 ***/

	J[29] = 1.;
	J[215] = -1.;
	J[216] = -2.;
	J[217] = -4.;

   /*** derivatives for constraint 50 ***/

	J[35] = 1.;
	J[218] = -1.;
	J[219] = -2.;
	J[220] = -4.;

   /*** derivatives for constraint 51 ***/

	J[41] = 1.;
	J[221] = -1.;
	J[222] = -2.;
	J[223] = -4.;

   /*** derivatives for constraint 52 ***/

	J[47] = 1.;
	J[224] = -1.;
	J[225] = -2.;
	J[226] = -4.;

   /*** derivatives for constraint 53 ***/

	J[53] = 1.;
	J[227] = -1.;
	J[228] = -2.;
	J[229] = -4.;

   /*** derivatives for constraint 54 ***/

	J[59] = 1.;
	J[230] = -1.;
	J[231] = -2.;
	J[232] = -4.;

   /*** derivatives for constraint 55 ***/

	J[65] = 1.;
	J[233] = -1.;
	J[234] = -2.;
	J[235] = -4.;

   /*** derivatives for constraint 56 ***/

	J[71] = 1.;
	J[236] = -1.;
	J[237] = -2.;
	J[238] = -4.;

   /*** derivatives for constraint 57 ***/

	J[77] = 1.;
	J[239] = -1.;
	J[240] = -2.;
	J[241] = -4.;

   /*** derivatives for constraint 58 ***/

	J[83] = 1.;
	J[242] = -1.;
	J[243] = -2.;
	J[244] = -4.;

   /*** derivatives for constraint 59 ***/

	J[89] = 1.;
	J[245] = -1.;
	J[246] = -2.;
	J[247] = -4.;

   /*** derivatives for constraint 60 ***/

	J[95] = 1.;
	J[248] = -1.;
	J[249] = -2.;
	J[250] = -4.;

   /*** derivatives for constraint 61 ***/

	J[101] = 1.;
	J[251] = -1.;
	J[252] = -2.;
	J[253] = -4.;

   /*** derivatives for constraint 62 ***/

	J[107] = 1.;
	J[254] = -1.;
	J[255] = -2.;
	J[256] = -4.;

   /*** derivatives for constraint 63 ***/

	J[113] = 1.;
	J[257] = -1.;
	J[258] = -2.;
	J[259] = -4.;

   /*** derivatives for constraint 64 ***/

	J[119] = 1.;
	J[260] = -1.;
	J[261] = -2.;
	J[262] = -4.;

   /*** derivatives for constraint 65 ***/

	J[125] = 1.;
	J[263] = -1.;
	J[264] = -2.;
	J[265] = -4.;

   /*** derivatives for constraint 66 ***/

	J[131] = 1.;
	J[266] = -1.;
	J[267] = -2.;
	J[268] = -4.;

   /*** derivatives for constraint 67 ***/

	J[137] = 1.;
	J[269] = -1.;
	J[270] = -2.;
	J[271] = -4.;

   /*** derivatives for constraint 68 ***/

	J[143] = 1.;
	J[272] = -1.;
	J[273] = -2.;
	J[274] = -4.;

   /*** derivatives for constraint 69 ***/

	J[149] = 1.;
	J[275] = -1.;
	J[276] = -2.;
	J[277] = -4.;

   /*** derivatives for constraint 70 ***/

	J[159] = 1.;
	J[316] = -1.;
	J[317] = -2.;
	J[318] = -4.;
	J[319] = -8.;

   /*** derivatives for constraint 71 ***/

	J[170] = 1.;
	J[320] = -1.;
	J[321] = -2.;
	J[322] = -4.;
	J[323] = -8.;

   /*** derivatives for constraint 72 ***/

	J[181] = 1.;
	J[324] = -1.;
	J[325] = -2.;
	J[326] = -4.;
	J[327] = -8.;

   /*** derivatives for constraint 73 ***/

	J[192] = 1.;
	J[328] = -1.;
	J[329] = -2.;
	J[330] = -4.;
	J[331] = -8.;

   /*** derivatives for constraint 74 ***/

	J[202] = 1.;
	J[332] = -1.;
	J[333] = -2.;
	J[334] = -4.;
	J[335] = -8.;
	}
}
#ifdef __cplusplus
	}
#endif
