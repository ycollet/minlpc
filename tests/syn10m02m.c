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
 fint syn10m02m_auxcom_[1] = { 12 /* nlc */ };
 fint syn10m02m_funcom_[579] = {
	110 /* nvar */,
	1 /* nobj */,
	198 /* ncon */,
	462 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	23,
	27,
	30,
	33,
	36,
	39,
	40,
	41,
	44,
	47,
	50,
	53,
	55,
	57,
	58,
	59,
	61,
	63,
	67,
	71,
	75,
	79,
	82,
	85,
	89,
	93,
	99,
	105,
	109,
	113,
	117,
	121,
	122,
	123,
	125,
	127,
	129,
	131,
	133,
	135,
	138,
	141,
	144,
	147,
	149,
	151,
	153,
	155,
	157,
	159,
	161,
	163,
	165,
	167,
	169,
	171,
	173,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	197,
	206,
	216,
	225,
	236,
	246,
	255,
	263,
	276,
	288,
	296,
	303,
	311,
	318,
	326,
	333,
	341,
	348,
	356,
	363,
	368,
	373,
	378,
	383,
	388,
	393,
	398,
	403,
	408,
	413,
	418,
	423,
	428,
	433,
	438,
	443,
	448,
	453,
	458,
	463,

	/* rownos */
	1,
	13,
	25,
	2,
	14,
	26,
	3,
	13,
	29,
	4,
	14,
	30,
	5,
	19,
	41,
	6,
	20,
	42,
	5,
	11,
	43,
	67,
	6,
	12,
	44,
	68,
	7,
	21,
	59,
	8,
	22,
	60,
	9,
	21,
	63,
	10,
	22,
	64,
	13,
	14,
	1,
	15,
	27,
	2,
	16,
	28,
	3,
	15,
	31,
	4,
	16,
	32,
	15,
	17,
	16,
	18,
	17,
	18,
	17,
	19,
	18,
	20,
	19,
	33,
	35,
	37,
	20,
	34,
	36,
	38,
	19,
	45,
	47,
	53,
	20,
	46,
	48,
	54,
	49,
	51,
	55,
	50,
	52,
	56,
	21,
	33,
	35,
	39,
	22,
	34,
	36,
	40,
	23,
	45,
	47,
	49,
	51,
	57,
	24,
	46,
	48,
	50,
	52,
	58,
	23,
	71,
	73,
	75,
	24,
	72,
	74,
	76,
	23,
	79,
	81,
	83,
	24,
	80,
	82,
	84,
	23,
	24,
	7,
	61,
	8,
	62,
	9,
	65,
	10,
	66,
	11,
	69,
	12,
	70,
	71,
	73,
	77,
	72,
	74,
	78,
	79,
	81,
	85,
	80,
	82,
	86,
	87,
	107,
	88,
	108,
	89,
	109,
	90,
	110,
	91,
	111,
	92,
	112,
	93,
	113,
	94,
	114,
	95,
	115,
	96,
	116,
	97,
	117,
	98,
	118,
	99,
	119,
	100,
	120,
	101,
	121,
	102,
	122,
	103,
	123,
	104,
	124,
	105,
	125,
	106,
	126,
	1,
	25,
	27,
	127,
	157,
	158,
	177,
	183,
	185,
	187,
	2,
	26,
	28,
	127,
	158,
	178,
	184,
	186,
	188,
	3,
	29,
	31,
	128,
	159,
	160,
	177,
	183,
	185,
	187,
	4,
	30,
	32,
	128,
	160,
	178,
	184,
	186,
	188,
	33,
	35,
	37,
	39,
	129,
	161,
	162,
	179,
	183,
	189,
	191,
	34,
	36,
	38,
	40,
	129,
	162,
	180,
	184,
	190,
	192,
	5,
	41,
	43,
	130,
	163,
	164,
	181,
	185,
	193,
	6,
	42,
	44,
	130,
	164,
	182,
	186,
	194,
	45,
	47,
	49,
	51,
	53,
	55,
	57,
	131,
	165,
	166,
	187,
	195,
	197,
	46,
	48,
	50,
	52,
	54,
	56,
	58,
	131,
	166,
	188,
	196,
	198,
	7,
	59,
	61,
	132,
	167,
	168,
	179,
	189,
	8,
	60,
	62,
	132,
	168,
	180,
	190,
	9,
	63,
	65,
	133,
	169,
	170,
	179,
	191,
	10,
	64,
	66,
	133,
	170,
	180,
	192,
	11,
	67,
	69,
	134,
	171,
	172,
	181,
	193,
	12,
	68,
	70,
	134,
	172,
	182,
	194,
	71,
	73,
	75,
	77,
	135,
	173,
	174,
	195,
	72,
	74,
	76,
	78,
	135,
	174,
	196,
	79,
	81,
	83,
	85,
	136,
	175,
	176,
	197,
	80,
	82,
	84,
	86,
	136,
	176,
	198,
	87,
	107,
	137,
	138,
	157,
	88,
	108,
	137,
	138,
	158,
	89,
	109,
	139,
	140,
	159,
	90,
	110,
	139,
	140,
	160,
	91,
	111,
	141,
	142,
	161,
	92,
	112,
	141,
	142,
	162,
	93,
	113,
	143,
	144,
	163,
	94,
	114,
	143,
	144,
	164,
	95,
	115,
	145,
	146,
	165,
	96,
	116,
	145,
	146,
	166,
	97,
	117,
	147,
	148,
	167,
	98,
	118,
	147,
	148,
	168,
	99,
	119,
	149,
	150,
	169,
	100,
	120,
	149,
	150,
	170,
	101,
	121,
	151,
	152,
	171,
	102,
	122,
	151,
	152,
	172,
	103,
	123,
	153,
	154,
	173,
	104,
	124,
	153,
	154,
	174,
	105,
	125,
	155,
	156,
	175,
	106,
	126,
	155,
	156,
	176 };

 real syn10m02m_boundc_[1+220+396] /* Infinity, variable bounds, constraint bounds */ = {
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
		40.,
		0.,
		40.,
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
		30.,
		0.,
		30.,
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
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
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.,
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
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.,
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
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.,
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
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.,
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
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
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
		1.7e308};

 real syn10m02m_x0comn_[110] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn10m02m_pd[20];
static real syn10m02m_old_x[110];
static int syn10m02m_xkind = -1;

 static int
syn10m02m_xcheck(real *x)
{
	real *x1 = syn10m02m_old_x, *xe = x + 110;
	errno = 0;
	if (syn10m02m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn10m02m_xkind = 0;
	return 1;
	}
 real
syn10m02m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn10m02m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[12];
	rv += -x[13];
	rv += 5.*x[20];
	rv += 10.*x[21];
	rv += -2.*x[28];
	rv += -x[29];
	rv += 80.*x[38];
	rv += 90.*x[39];
	rv += 285.*x[40];
	rv += 390.*x[41];
	rv += 290.*x[42];
	rv += 405.*x[43];
	rv += 280.*x[44];
	rv += 400.*x[45];
	rv += 290.*x[46];
	rv += 300.*x[47];
	rv += 350.*x[48];
	rv += 250.*x[49];
	rv += -5.*x[90];
	rv += -4.*x[91];
	rv += -8.*x[92];
	rv += -7.*x[93];
	rv += -6.*x[94];
	rv += -9.*x[95];
	rv += -10.*x[96];
	rv += -9.*x[97];
	rv += -6.*x[98];
	rv += -10.*x[99];
	rv += -7.*x[100];
	rv += -7.*x[101];
	rv += -4.*x[102];
	rv += -3.*x[103];
	rv += -5.*x[104];
	rv += -6.*x[105];
	rv += -2.*x[106];
	rv += -5.*x[107];
	rv += -4.*x[108];
	rv += -7.*x[109];
	;}

	if (wantfg & 2) {
	g[12] = -1.;
	g[13] = -1.;
	g[20] = 5.;
	g[21] = 10.;
	g[28] = -2.;
	g[29] = -1.;
	g[38] = 80.;
	g[39] = 90.;
	g[40] = 285.;
	g[41] = 390.;
	g[42] = 290.;
	g[43] = 405.;
	g[44] = 280.;
	g[45] = 400.;
	g[46] = 290.;
	g[47] = 300.;
	g[48] = 350.;
	g[49] = 250.;
	g[90] = -5.;
	g[91] = -4.;
	g[92] = -8.;
	g[93] = -7.;
	g[94] = -6.;
	g[95] = -9.;
	g[96] = -10.;
	g[97] = -9.;
	g[98] = -6.;
	g[99] = -10.;
	g[100] = -7.;
	g[101] = -7.;
	g[102] = -4.;
	g[103] = -3.;
	g[104] = -5.;
	g[105] = -6.;
	g[106] = -2.;
	g[107] = -5.;
	g[108] = -4.;
	g[109] = -7.;
	}

	return rv;
}

 void
syn10m02m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (syn10m02m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[14];
	t1 += x[70];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[1] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[15];
	t1 += x[71];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + 1.;
	syn10m02m_pd[2] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[3] = 1. / v[0];
	v[0] = -1.2 * syn10m02m_pd[2];
	t1 = v[0] + x[16];
	t1 += x[72];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] + 1.;
	syn10m02m_pd[4] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[5] = 1. / v[0];
	v[0] = -1.2 * syn10m02m_pd[4];
	t1 = v[0] + x[17];
	t1 += x[73];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] + 1.;
	syn10m02m_pd[6] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[7] = 1. / v[0];
	v[0] = -1.5 * syn10m02m_pd[6];
	t1 = v[0] + x[6];
	t1 += x[76];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[5] + 1.;
	syn10m02m_pd[8] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[9] = 1. / v[0];
	v[0] = -1.5 * syn10m02m_pd[8];
	t1 = v[0] + x[7];
	t1 += x[77];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[8] + 1.;
	syn10m02m_pd[10] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[11] = 1. / v[0];
	v[0] = -1.25 * syn10m02m_pd[10];
	t1 = v[0] + x[40];
	t1 += x[80];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[9] + 1.;
	syn10m02m_pd[12] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[13] = 1. / v[0];
	v[0] = -1.25 * syn10m02m_pd[12];
	t1 = v[0] + x[41];
	t1 += x[81];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[10] + 1.;
	syn10m02m_pd[14] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[15] = 1. / v[0];
	v[0] = -0.9 * syn10m02m_pd[14];
	t1 = v[0] + x[42];
	t1 += x[82];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[11] + 1.;
	syn10m02m_pd[16] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[17] = 1. / v[0];
	v[0] = -0.9 * syn10m02m_pd[16];
	t1 = v[0] + x[43];
	t1 += x[83];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[6] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[18] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[44];
	t1 += x[84];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[7] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m02m_pd[19] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[45];
	t1 += x[85];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[0];
	t1 += -x[2];
	t1 += x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[1];
	t1 += -x[3];
	t1 += x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[14];
	t1 += -x[16];
	t1 += x[18];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[15];
	t1 += -x[17];
	t1 += x[19];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[18];
	t1 += -x[20];
	t1 += -x[22];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[19];
	t1 += -x[21];
	t1 += -x[23];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[4];
	t1 += x[22];
	t1 += -x[24];
	t1 += -x[26];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[5];
	t1 += x[23];
	t1 += -x[25];
	t1 += -x[27];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[8];
	t1 += -x[10];
	t1 += x[30];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[9];
	t1 += -x[11];
	t1 += x[31];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[32];
	t1 += -x[34];
	t1 += -x[36];
	t1 += -x[38];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[33];
	t1 += -x[35];
	t1 += -x[37];
	t1 += -x[39];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[0];
	t1 += -40.*x[70];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[1];
	t1 += -40.*x[71];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[14];
	t1 += -3.71357206670431*x[70];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[15];
	t1 += -3.71357206670431*x[71];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[2];
	t1 += -40.*x[72];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[3];
	t1 += -40.*x[73];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[16];
	t1 += -4.45628648004517*x[72];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[17];
	t1 += -4.45628648004517*x[73];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -0.75*x[24];
	t1 += x[30];
	t1 += x[74];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -0.75*x[25];
	t1 += x[31];
	t1 += x[75];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -0.75*x[24];
	t1 += x[30];
	t1 += -x[74];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -0.75*x[25];
	t1 += x[31];
	t1 += -x[75];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[24];
	t1 += -4.45628648004517*x[74];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[25];
	t1 += -4.45628648004517*x[75];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[30];
	t1 += -3.34221486003388*x[74];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[31];
	t1 += -3.34221486003388*x[75];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[4];
	t1 += -4.45628648004517*x[76];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[5];
	t1 += -4.45628648004517*x[77];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[6];
	t1 += -2.54515263975353*x[76];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[7];
	t1 += -2.54515263975353*x[77];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[26];
	t1 += x[32];
	t1 += x[78];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[27];
	t1 += x[33];
	t1 += x[79];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[26];
	t1 += x[32];
	t1 += -x[78];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[27];
	t1 += x[33];
	t1 += -x[79];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -0.5*x[28];
	t1 += x[32];
	t1 += x[78];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -0.5*x[29];
	t1 += x[33];
	t1 += x[79];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -0.5*x[28];
	t1 += x[32];
	t1 += -x[78];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -0.5*x[29];
	t1 += x[33];
	t1 += -x[79];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[26];
	t1 += -4.45628648004517*x[78];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[27];
	t1 += -4.45628648004517*x[79];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[28];
	t1 += -30.*x[78];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[29];
	t1 += -30.*x[79];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[32];
	t1 += -15.*x[78];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[33];
	t1 += -15.*x[79];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[8];
	t1 += -3.34221486003388*x[80];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[9];
	t1 += -3.34221486003388*x[81];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[40];
	t1 += -1.83548069293539*x[80];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[41];
	t1 += -1.83548069293539*x[81];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[10];
	t1 += -3.34221486003388*x[82];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[11];
	t1 += -3.34221486003388*x[83];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[42];
	t1 += -1.32154609891348*x[82];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[43];
	t1 += -1.32154609891348*x[83];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[6];
	t1 += -2.54515263975353*x[84];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[7];
	t1 += -2.54515263975353*x[85];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[44];
	t1 += -1.26558121681553*x[84];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[45];
	t1 += -1.26558121681553*x[85];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -0.9*x[34];
	t1 += x[46];
	t1 += x[86];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -0.9*x[35];
	t1 += x[47];
	t1 += x[87];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -0.9*x[34];
	t1 += x[46];
	t1 += -x[86];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -0.9*x[35];
	t1 += x[47];
	t1 += -x[87];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[34];
	t1 += -15.*x[86];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[35];
	t1 += -15.*x[87];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[46];
	t1 += -13.5*x[86];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[47];
	t1 += -13.5*x[87];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -0.6*x[36];
	t1 += x[48];
	t1 += x[88];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -0.6*x[37];
	t1 += x[49];
	t1 += x[89];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -0.6*x[36];
	t1 += x[48];
	t1 += -x[88];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -0.6*x[37];
	t1 += x[49];
	t1 += -x[89];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[36];
	t1 += -15.*x[88];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[37];
	t1 += -15.*x[89];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[48];
	t1 += -9.*x[88];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[49];
	t1 += -9.*x[89];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[50];
	t1 += 5.*x[90];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[51];
	t1 += 4.*x[91];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[52];
	t1 += 8.*x[92];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[53];
	t1 += 7.*x[93];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[54];
	t1 += 6.*x[94];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[55];
	t1 += 9.*x[95];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[56];
	t1 += 10.*x[96];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[57];
	t1 += 9.*x[97];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[58];
	t1 += 6.*x[98];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[59];
	t1 += 10.*x[99];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[60];
	t1 += 7.*x[100];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[61];
	t1 += 7.*x[101];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[62];
	t1 += 4.*x[102];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[63];
	t1 += 3.*x[103];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[64];
	t1 += 5.*x[104];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[65];
	t1 += 6.*x[105];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[66];
	t1 += 2.*x[106];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[67];
	t1 += 5.*x[107];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[68];
	t1 += 4.*x[108];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[69];
	t1 += 7.*x[109];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[50];
	t1 += 5.*x[90];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[51];
	t1 += 4.*x[91];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[52];
	t1 += 8.*x[92];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[53];
	t1 += 7.*x[93];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[54];
	t1 += 6.*x[94];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[55];
	t1 += 9.*x[95];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[56];
	t1 += 10.*x[96];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[57];
	t1 += 9.*x[97];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[58];
	t1 += 6.*x[98];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[59];
	t1 += 10.*x[99];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[60];
	t1 += 7.*x[100];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[61];
	t1 += 7.*x[101];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[62];
	t1 += 4.*x[102];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = x[63];
	t1 += 3.*x[103];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[64];
	t1 += 5.*x[104];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[65];
	t1 += 6.*x[105];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[66];
	t1 += 2.*x[106];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[67];
	t1 += 5.*x[107];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[68];
	t1 += 4.*x[108];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[69];
	t1 += 7.*x[109];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[70];
	t1 += -x[71];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[72];
	t1 += -x[73];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[74];
	t1 += -x[75];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[76];
	t1 += -x[77];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[78];
	t1 += -x[79];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[80];
	t1 += -x[81];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[82];
	t1 += -x[83];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[84];
	t1 += -x[85];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = x[86];
	t1 += -x[87];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = x[88];
	t1 += -x[89];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = x[90];
	t1 += x[91];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = x[90];
	t1 += x[91];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = x[92];
	t1 += x[93];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = x[92];
	t1 += x[93];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = x[94];
	t1 += x[95];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = x[94];
	t1 += x[95];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = x[96];
	t1 += x[97];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = x[96];
	t1 += x[97];
	c[143] = t1;

  /***  constraint 145  ***/

	t1 = x[98];
	t1 += x[99];
	c[144] = t1;

  /***  constraint 146  ***/

	t1 = x[98];
	t1 += x[99];
	c[145] = t1;

  /***  constraint 147  ***/

	t1 = x[100];
	t1 += x[101];
	c[146] = t1;

  /***  constraint 148  ***/

	t1 = x[100];
	t1 += x[101];
	c[147] = t1;

  /***  constraint 149  ***/

	t1 = x[102];
	t1 += x[103];
	c[148] = t1;

  /***  constraint 150  ***/

	t1 = x[102];
	t1 += x[103];
	c[149] = t1;

  /***  constraint 151  ***/

	t1 = x[104];
	t1 += x[105];
	c[150] = t1;

  /***  constraint 152  ***/

	t1 = x[104];
	t1 += x[105];
	c[151] = t1;

  /***  constraint 153  ***/

	t1 = x[106];
	t1 += x[107];
	c[152] = t1;

  /***  constraint 154  ***/

	t1 = x[106];
	t1 += x[107];
	c[153] = t1;

  /***  constraint 155  ***/

	t1 = x[108];
	t1 += x[109];
	c[154] = t1;

  /***  constraint 156  ***/

	t1 = x[108];
	t1 += x[109];
	c[155] = t1;

  /***  constraint 157  ***/

	t1 = x[70];
	t1 += -x[90];
	c[156] = t1;

  /***  constraint 158  ***/

	t1 = -x[70];
	t1 += x[71];
	t1 += -x[91];
	c[157] = t1;

  /***  constraint 159  ***/

	t1 = x[72];
	t1 += -x[92];
	c[158] = t1;

  /***  constraint 160  ***/

	t1 = -x[72];
	t1 += x[73];
	t1 += -x[93];
	c[159] = t1;

  /***  constraint 161  ***/

	t1 = x[74];
	t1 += -x[94];
	c[160] = t1;

  /***  constraint 162  ***/

	t1 = -x[74];
	t1 += x[75];
	t1 += -x[95];
	c[161] = t1;

  /***  constraint 163  ***/

	t1 = x[76];
	t1 += -x[96];
	c[162] = t1;

  /***  constraint 164  ***/

	t1 = -x[76];
	t1 += x[77];
	t1 += -x[97];
	c[163] = t1;

  /***  constraint 165  ***/

	t1 = x[78];
	t1 += -x[98];
	c[164] = t1;

  /***  constraint 166  ***/

	t1 = -x[78];
	t1 += x[79];
	t1 += -x[99];
	c[165] = t1;

  /***  constraint 167  ***/

	t1 = x[80];
	t1 += -x[100];
	c[166] = t1;

  /***  constraint 168  ***/

	t1 = -x[80];
	t1 += x[81];
	t1 += -x[101];
	c[167] = t1;

  /***  constraint 169  ***/

	t1 = x[82];
	t1 += -x[102];
	c[168] = t1;

  /***  constraint 170  ***/

	t1 = -x[82];
	t1 += x[83];
	t1 += -x[103];
	c[169] = t1;

  /***  constraint 171  ***/

	t1 = x[84];
	t1 += -x[104];
	c[170] = t1;

  /***  constraint 172  ***/

	t1 = -x[84];
	t1 += x[85];
	t1 += -x[105];
	c[171] = t1;

  /***  constraint 173  ***/

	t1 = x[86];
	t1 += -x[106];
	c[172] = t1;

  /***  constraint 174  ***/

	t1 = -x[86];
	t1 += x[87];
	t1 += -x[107];
	c[173] = t1;

  /***  constraint 175  ***/

	t1 = x[88];
	t1 += -x[108];
	c[174] = t1;

  /***  constraint 176  ***/

	t1 = -x[88];
	t1 += x[89];
	t1 += -x[109];
	c[175] = t1;

  /***  constraint 177  ***/

	t1 = x[70];
	t1 += x[72];
	c[176] = t1;

  /***  constraint 178  ***/

	t1 = x[71];
	t1 += x[73];
	c[177] = t1;

  /***  constraint 179  ***/

	t1 = -x[74];
	t1 += x[80];
	t1 += x[82];
	c[178] = t1;

  /***  constraint 180  ***/

	t1 = -x[75];
	t1 += x[81];
	t1 += x[83];
	c[179] = t1;

  /***  constraint 181  ***/

	t1 = -x[76];
	t1 += x[84];
	c[180] = t1;

  /***  constraint 182  ***/

	t1 = -x[77];
	t1 += x[85];
	c[181] = t1;

  /***  constraint 183  ***/

	t1 = x[70];
	t1 += x[72];
	t1 += -x[74];
	c[182] = t1;

  /***  constraint 184  ***/

	t1 = x[71];
	t1 += x[73];
	t1 += -x[75];
	c[183] = t1;

  /***  constraint 185  ***/

	t1 = x[70];
	t1 += x[72];
	t1 += -x[76];
	c[184] = t1;

  /***  constraint 186  ***/

	t1 = x[71];
	t1 += x[73];
	t1 += -x[77];
	c[185] = t1;

  /***  constraint 187  ***/

	t1 = x[70];
	t1 += x[72];
	t1 += -x[78];
	c[186] = t1;

  /***  constraint 188  ***/

	t1 = x[71];
	t1 += x[73];
	t1 += -x[79];
	c[187] = t1;

  /***  constraint 189  ***/

	t1 = x[74];
	t1 += -x[80];
	c[188] = t1;

  /***  constraint 190  ***/

	t1 = x[75];
	t1 += -x[81];
	c[189] = t1;

  /***  constraint 191  ***/

	t1 = x[74];
	t1 += -x[82];
	c[190] = t1;

  /***  constraint 192  ***/

	t1 = x[75];
	t1 += -x[83];
	c[191] = t1;

  /***  constraint 193  ***/

	t1 = x[76];
	t1 += -x[84];
	c[192] = t1;

  /***  constraint 194  ***/

	t1 = x[77];
	t1 += -x[85];
	c[193] = t1;

  /***  constraint 195  ***/

	t1 = x[78];
	t1 += -x[86];
	c[194] = t1;

  /***  constraint 196  ***/

	t1 = x[79];
	t1 += -x[87];
	c[195] = t1;

  /***  constraint 197  ***/

	t1 = x[78];
	t1 += -x[88];
	c[196] = t1;

  /***  constraint 198  ***/

	t1 = x[79];
	t1 += -x[89];
	c[197] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -syn10m02m_pd[0];
	J[40] = 1.;
	J[186] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = -syn10m02m_pd[1];
	J[43] = 1.;
	J[196] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -1.2*syn10m02m_pd[3];
	J[6] = dv[0];
	J[46] = 1.;
	J[205] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -1.2*syn10m02m_pd[5];
	J[9] = dv[0];
	J[49] = 1.;
	J[215] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -1.5*syn10m02m_pd[7];
	J[12] = dv[0];
	J[18] = 1.;
	J[245] = 1.;

   /*** derivatives for constraint 6 ***/

	dv[0] = -1.5*syn10m02m_pd[9];
	J[15] = dv[0];
	J[22] = 1.;
	J[254] = 1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -1.25*syn10m02m_pd[11];
	J[26] = dv[0];
	J[122] = 1.;
	J[287] = 1.;

   /*** derivatives for constraint 8 ***/

	dv[0] = -1.25*syn10m02m_pd[13];
	J[29] = dv[0];
	J[124] = 1.;
	J[295] = 1.;

   /*** derivatives for constraint 9 ***/

	dv[0] = -0.9*syn10m02m_pd[15];
	J[32] = dv[0];
	J[126] = 1.;
	J[302] = 1.;

   /*** derivatives for constraint 10 ***/

	dv[0] = -0.9*syn10m02m_pd[17];
	J[35] = dv[0];
	J[128] = 1.;
	J[310] = 1.;

   /*** derivatives for constraint 11 ***/

	J[19] = -syn10m02m_pd[18];
	J[130] = 1.;
	J[317] = 1.;

   /*** derivatives for constraint 12 ***/

	J[23] = -syn10m02m_pd[19];
	J[132] = 1.;
	J[325] = 1.;

   /*** derivatives for constraint 13 ***/

	J[1] = -1.;
	J[7] = -1.;
	J[38] = 1.;

   /*** derivatives for constraint 14 ***/

	J[4] = -1.;
	J[10] = -1.;
	J[39] = 1.;

   /*** derivatives for constraint 15 ***/

	J[41] = -1.;
	J[47] = -1.;
	J[52] = 1.;

   /*** derivatives for constraint 16 ***/

	J[44] = -1.;
	J[50] = -1.;
	J[54] = 1.;

   /*** derivatives for constraint 17 ***/

	J[53] = 1.;
	J[56] = -1.;
	J[58] = -1.;

   /*** derivatives for constraint 18 ***/

	J[55] = 1.;
	J[57] = -1.;
	J[60] = -1.;

   /*** derivatives for constraint 19 ***/

	J[13] = -1.;
	J[59] = 1.;
	J[62] = -1.;
	J[70] = -1.;

   /*** derivatives for constraint 20 ***/

	J[16] = -1.;
	J[61] = 1.;
	J[66] = -1.;
	J[74] = -1.;

   /*** derivatives for constraint 21 ***/

	J[27] = -1.;
	J[33] = -1.;
	J[84] = 1.;

   /*** derivatives for constraint 22 ***/

	J[30] = -1.;
	J[36] = -1.;
	J[88] = 1.;

   /*** derivatives for constraint 23 ***/

	J[92] = 1.;
	J[104] = -1.;
	J[112] = -1.;
	J[120] = -1.;

   /*** derivatives for constraint 24 ***/

	J[98] = 1.;
	J[108] = -1.;
	J[116] = -1.;
	J[121] = -1.;

   /*** derivatives for constraint 25 ***/

	J[2] = 1.;
	J[187] = -40.;

   /*** derivatives for constraint 26 ***/

	J[5] = 1.;
	J[197] = -40.;

   /*** derivatives for constraint 27 ***/

	J[42] = 1.;
	J[188] = -3.71357206670431;

   /*** derivatives for constraint 28 ***/

	J[45] = 1.;
	J[198] = -3.71357206670431;

   /*** derivatives for constraint 29 ***/

	J[8] = 1.;
	J[206] = -40.;

   /*** derivatives for constraint 30 ***/

	J[11] = 1.;
	J[216] = -40.;

   /*** derivatives for constraint 31 ***/

	J[48] = 1.;
	J[207] = -4.45628648004517;

   /*** derivatives for constraint 32 ***/

	J[51] = 1.;
	J[217] = -4.45628648004517;

   /*** derivatives for constraint 33 ***/

	J[63] = -0.75;
	J[85] = 1.;
	J[224] = 1.;

   /*** derivatives for constraint 34 ***/

	J[67] = -0.75;
	J[89] = 1.;
	J[235] = 1.;

   /*** derivatives for constraint 35 ***/

	J[64] = -0.75;
	J[86] = 1.;
	J[225] = -1.;

   /*** derivatives for constraint 36 ***/

	J[68] = -0.75;
	J[90] = 1.;
	J[236] = -1.;

   /*** derivatives for constraint 37 ***/

	J[65] = 1.;
	J[226] = -4.45628648004517;

   /*** derivatives for constraint 38 ***/

	J[69] = 1.;
	J[237] = -4.45628648004517;

   /*** derivatives for constraint 39 ***/

	J[87] = 1.;
	J[227] = -3.34221486003388;

   /*** derivatives for constraint 40 ***/

	J[91] = 1.;
	J[238] = -3.34221486003388;

   /*** derivatives for constraint 41 ***/

	J[14] = 1.;
	J[246] = -4.45628648004517;

   /*** derivatives for constraint 42 ***/

	J[17] = 1.;
	J[255] = -4.45628648004517;

   /*** derivatives for constraint 43 ***/

	J[20] = 1.;
	J[247] = -2.54515263975353;

   /*** derivatives for constraint 44 ***/

	J[24] = 1.;
	J[256] = -2.54515263975353;

   /*** derivatives for constraint 45 ***/

	J[71] = -1.;
	J[93] = 1.;
	J[262] = 1.;

   /*** derivatives for constraint 46 ***/

	J[75] = -1.;
	J[99] = 1.;
	J[275] = 1.;

   /*** derivatives for constraint 47 ***/

	J[72] = -1.;
	J[94] = 1.;
	J[263] = -1.;

   /*** derivatives for constraint 48 ***/

	J[76] = -1.;
	J[100] = 1.;
	J[276] = -1.;

   /*** derivatives for constraint 49 ***/

	J[78] = -0.5;
	J[95] = 1.;
	J[264] = 1.;

   /*** derivatives for constraint 50 ***/

	J[81] = -0.5;
	J[101] = 1.;
	J[277] = 1.;

   /*** derivatives for constraint 51 ***/

	J[79] = -0.5;
	J[96] = 1.;
	J[265] = -1.;

   /*** derivatives for constraint 52 ***/

	J[82] = -0.5;
	J[102] = 1.;
	J[278] = -1.;

   /*** derivatives for constraint 53 ***/

	J[73] = 1.;
	J[266] = -4.45628648004517;

   /*** derivatives for constraint 54 ***/

	J[77] = 1.;
	J[279] = -4.45628648004517;

   /*** derivatives for constraint 55 ***/

	J[80] = 1.;
	J[267] = -30.;

   /*** derivatives for constraint 56 ***/

	J[83] = 1.;
	J[280] = -30.;

   /*** derivatives for constraint 57 ***/

	J[97] = 1.;
	J[268] = -15.;

   /*** derivatives for constraint 58 ***/

	J[103] = 1.;
	J[281] = -15.;

   /*** derivatives for constraint 59 ***/

	J[28] = 1.;
	J[288] = -3.34221486003388;

   /*** derivatives for constraint 60 ***/

	J[31] = 1.;
	J[296] = -3.34221486003388;

   /*** derivatives for constraint 61 ***/

	J[123] = 1.;
	J[289] = -1.83548069293539;

   /*** derivatives for constraint 62 ***/

	J[125] = 1.;
	J[297] = -1.83548069293539;

   /*** derivatives for constraint 63 ***/

	J[34] = 1.;
	J[303] = -3.34221486003388;

   /*** derivatives for constraint 64 ***/

	J[37] = 1.;
	J[311] = -3.34221486003388;

   /*** derivatives for constraint 65 ***/

	J[127] = 1.;
	J[304] = -1.32154609891348;

   /*** derivatives for constraint 66 ***/

	J[129] = 1.;
	J[312] = -1.32154609891348;

   /*** derivatives for constraint 67 ***/

	J[21] = 1.;
	J[318] = -2.54515263975353;

   /*** derivatives for constraint 68 ***/

	J[25] = 1.;
	J[326] = -2.54515263975353;

   /*** derivatives for constraint 69 ***/

	J[131] = 1.;
	J[319] = -1.26558121681553;

   /*** derivatives for constraint 70 ***/

	J[133] = 1.;
	J[327] = -1.26558121681553;

   /*** derivatives for constraint 71 ***/

	J[105] = -0.9;
	J[134] = 1.;
	J[332] = 1.;

   /*** derivatives for constraint 72 ***/

	J[109] = -0.9;
	J[137] = 1.;
	J[340] = 1.;

   /*** derivatives for constraint 73 ***/

	J[106] = -0.9;
	J[135] = 1.;
	J[333] = -1.;

   /*** derivatives for constraint 74 ***/

	J[110] = -0.9;
	J[138] = 1.;
	J[341] = -1.;

   /*** derivatives for constraint 75 ***/

	J[107] = 1.;
	J[334] = -15.;

   /*** derivatives for constraint 76 ***/

	J[111] = 1.;
	J[342] = -15.;

   /*** derivatives for constraint 77 ***/

	J[136] = 1.;
	J[335] = -13.5;

   /*** derivatives for constraint 78 ***/

	J[139] = 1.;
	J[343] = -13.5;

   /*** derivatives for constraint 79 ***/

	J[113] = -0.6;
	J[140] = 1.;
	J[347] = 1.;

   /*** derivatives for constraint 80 ***/

	J[117] = -0.6;
	J[143] = 1.;
	J[355] = 1.;

   /*** derivatives for constraint 81 ***/

	J[114] = -0.6;
	J[141] = 1.;
	J[348] = -1.;

   /*** derivatives for constraint 82 ***/

	J[118] = -0.6;
	J[144] = 1.;
	J[356] = -1.;

   /*** derivatives for constraint 83 ***/

	J[115] = 1.;
	J[349] = -15.;

   /*** derivatives for constraint 84 ***/

	J[119] = 1.;
	J[357] = -15.;

   /*** derivatives for constraint 85 ***/

	J[142] = 1.;
	J[350] = -9.;

   /*** derivatives for constraint 86 ***/

	J[145] = 1.;
	J[358] = -9.;

   /*** derivatives for constraint 87 ***/

	J[146] = 1.;
	J[362] = 5.;

   /*** derivatives for constraint 88 ***/

	J[148] = 1.;
	J[367] = 4.;

   /*** derivatives for constraint 89 ***/

	J[150] = 1.;
	J[372] = 8.;

   /*** derivatives for constraint 90 ***/

	J[152] = 1.;
	J[377] = 7.;

   /*** derivatives for constraint 91 ***/

	J[154] = 1.;
	J[382] = 6.;

   /*** derivatives for constraint 92 ***/

	J[156] = 1.;
	J[387] = 9.;

   /*** derivatives for constraint 93 ***/

	J[158] = 1.;
	J[392] = 10.;

   /*** derivatives for constraint 94 ***/

	J[160] = 1.;
	J[397] = 9.;

   /*** derivatives for constraint 95 ***/

	J[162] = 1.;
	J[402] = 6.;

   /*** derivatives for constraint 96 ***/

	J[164] = 1.;
	J[407] = 10.;

   /*** derivatives for constraint 97 ***/

	J[166] = 1.;
	J[412] = 7.;

   /*** derivatives for constraint 98 ***/

	J[168] = 1.;
	J[417] = 7.;

   /*** derivatives for constraint 99 ***/

	J[170] = 1.;
	J[422] = 4.;

   /*** derivatives for constraint 100 ***/

	J[172] = 1.;
	J[427] = 3.;

   /*** derivatives for constraint 101 ***/

	J[174] = 1.;
	J[432] = 5.;

   /*** derivatives for constraint 102 ***/

	J[176] = 1.;
	J[437] = 6.;

   /*** derivatives for constraint 103 ***/

	J[178] = 1.;
	J[442] = 2.;

   /*** derivatives for constraint 104 ***/

	J[180] = 1.;
	J[447] = 5.;

   /*** derivatives for constraint 105 ***/

	J[182] = 1.;
	J[452] = 4.;

   /*** derivatives for constraint 106 ***/

	J[184] = 1.;
	J[457] = 7.;

   /*** derivatives for constraint 107 ***/

	J[147] = 1.;
	J[363] = 5.;

   /*** derivatives for constraint 108 ***/

	J[149] = 1.;
	J[368] = 4.;

   /*** derivatives for constraint 109 ***/

	J[151] = 1.;
	J[373] = 8.;

   /*** derivatives for constraint 110 ***/

	J[153] = 1.;
	J[378] = 7.;

   /*** derivatives for constraint 111 ***/

	J[155] = 1.;
	J[383] = 6.;

   /*** derivatives for constraint 112 ***/

	J[157] = 1.;
	J[388] = 9.;

   /*** derivatives for constraint 113 ***/

	J[159] = 1.;
	J[393] = 10.;

   /*** derivatives for constraint 114 ***/

	J[161] = 1.;
	J[398] = 9.;

   /*** derivatives for constraint 115 ***/

	J[163] = 1.;
	J[403] = 6.;

   /*** derivatives for constraint 116 ***/

	J[165] = 1.;
	J[408] = 10.;

   /*** derivatives for constraint 117 ***/

	J[167] = 1.;
	J[413] = 7.;

   /*** derivatives for constraint 118 ***/

	J[169] = 1.;
	J[418] = 7.;

   /*** derivatives for constraint 119 ***/

	J[171] = 1.;
	J[423] = 4.;

   /*** derivatives for constraint 120 ***/

	J[173] = 1.;
	J[428] = 3.;

   /*** derivatives for constraint 121 ***/

	J[175] = 1.;
	J[433] = 5.;

   /*** derivatives for constraint 122 ***/

	J[177] = 1.;
	J[438] = 6.;

   /*** derivatives for constraint 123 ***/

	J[179] = 1.;
	J[443] = 2.;

   /*** derivatives for constraint 124 ***/

	J[181] = 1.;
	J[448] = 5.;

   /*** derivatives for constraint 125 ***/

	J[183] = 1.;
	J[453] = 4.;

   /*** derivatives for constraint 126 ***/

	J[185] = 1.;
	J[458] = 7.;

   /*** derivatives for constraint 127 ***/

	J[189] = 1.;
	J[199] = -1.;

   /*** derivatives for constraint 128 ***/

	J[208] = 1.;
	J[218] = -1.;

   /*** derivatives for constraint 129 ***/

	J[228] = 1.;
	J[239] = -1.;

   /*** derivatives for constraint 130 ***/

	J[248] = 1.;
	J[257] = -1.;

   /*** derivatives for constraint 131 ***/

	J[269] = 1.;
	J[282] = -1.;

   /*** derivatives for constraint 132 ***/

	J[290] = 1.;
	J[298] = -1.;

   /*** derivatives for constraint 133 ***/

	J[305] = 1.;
	J[313] = -1.;

   /*** derivatives for constraint 134 ***/

	J[320] = 1.;
	J[328] = -1.;

   /*** derivatives for constraint 135 ***/

	J[336] = 1.;
	J[344] = -1.;

   /*** derivatives for constraint 136 ***/

	J[351] = 1.;
	J[359] = -1.;

   /*** derivatives for constraint 137 ***/

	J[364] = 1.;
	J[369] = 1.;

   /*** derivatives for constraint 138 ***/

	J[365] = 1.;
	J[370] = 1.;

   /*** derivatives for constraint 139 ***/

	J[374] = 1.;
	J[379] = 1.;

   /*** derivatives for constraint 140 ***/

	J[375] = 1.;
	J[380] = 1.;

   /*** derivatives for constraint 141 ***/

	J[384] = 1.;
	J[389] = 1.;

   /*** derivatives for constraint 142 ***/

	J[385] = 1.;
	J[390] = 1.;

   /*** derivatives for constraint 143 ***/

	J[394] = 1.;
	J[399] = 1.;

   /*** derivatives for constraint 144 ***/

	J[395] = 1.;
	J[400] = 1.;

   /*** derivatives for constraint 145 ***/

	J[404] = 1.;
	J[409] = 1.;

   /*** derivatives for constraint 146 ***/

	J[405] = 1.;
	J[410] = 1.;

   /*** derivatives for constraint 147 ***/

	J[414] = 1.;
	J[419] = 1.;

   /*** derivatives for constraint 148 ***/

	J[415] = 1.;
	J[420] = 1.;

   /*** derivatives for constraint 149 ***/

	J[424] = 1.;
	J[429] = 1.;

   /*** derivatives for constraint 150 ***/

	J[425] = 1.;
	J[430] = 1.;

   /*** derivatives for constraint 151 ***/

	J[434] = 1.;
	J[439] = 1.;

   /*** derivatives for constraint 152 ***/

	J[435] = 1.;
	J[440] = 1.;

   /*** derivatives for constraint 153 ***/

	J[444] = 1.;
	J[449] = 1.;

   /*** derivatives for constraint 154 ***/

	J[445] = 1.;
	J[450] = 1.;

   /*** derivatives for constraint 155 ***/

	J[454] = 1.;
	J[459] = 1.;

   /*** derivatives for constraint 156 ***/

	J[455] = 1.;
	J[460] = 1.;

   /*** derivatives for constraint 157 ***/

	J[190] = 1.;
	J[366] = -1.;

   /*** derivatives for constraint 158 ***/

	J[191] = -1.;
	J[200] = 1.;
	J[371] = -1.;

   /*** derivatives for constraint 159 ***/

	J[209] = 1.;
	J[376] = -1.;

   /*** derivatives for constraint 160 ***/

	J[210] = -1.;
	J[219] = 1.;
	J[381] = -1.;

   /*** derivatives for constraint 161 ***/

	J[229] = 1.;
	J[386] = -1.;

   /*** derivatives for constraint 162 ***/

	J[230] = -1.;
	J[240] = 1.;
	J[391] = -1.;

   /*** derivatives for constraint 163 ***/

	J[249] = 1.;
	J[396] = -1.;

   /*** derivatives for constraint 164 ***/

	J[250] = -1.;
	J[258] = 1.;
	J[401] = -1.;

   /*** derivatives for constraint 165 ***/

	J[270] = 1.;
	J[406] = -1.;

   /*** derivatives for constraint 166 ***/

	J[271] = -1.;
	J[283] = 1.;
	J[411] = -1.;

   /*** derivatives for constraint 167 ***/

	J[291] = 1.;
	J[416] = -1.;

   /*** derivatives for constraint 168 ***/

	J[292] = -1.;
	J[299] = 1.;
	J[421] = -1.;

   /*** derivatives for constraint 169 ***/

	J[306] = 1.;
	J[426] = -1.;

   /*** derivatives for constraint 170 ***/

	J[307] = -1.;
	J[314] = 1.;
	J[431] = -1.;

   /*** derivatives for constraint 171 ***/

	J[321] = 1.;
	J[436] = -1.;

   /*** derivatives for constraint 172 ***/

	J[322] = -1.;
	J[329] = 1.;
	J[441] = -1.;

   /*** derivatives for constraint 173 ***/

	J[337] = 1.;
	J[446] = -1.;

   /*** derivatives for constraint 174 ***/

	J[338] = -1.;
	J[345] = 1.;
	J[451] = -1.;

   /*** derivatives for constraint 175 ***/

	J[352] = 1.;
	J[456] = -1.;

   /*** derivatives for constraint 176 ***/

	J[353] = -1.;
	J[360] = 1.;
	J[461] = -1.;

   /*** derivatives for constraint 177 ***/

	J[192] = 1.;
	J[211] = 1.;

   /*** derivatives for constraint 178 ***/

	J[201] = 1.;
	J[220] = 1.;

   /*** derivatives for constraint 179 ***/

	J[231] = -1.;
	J[293] = 1.;
	J[308] = 1.;

   /*** derivatives for constraint 180 ***/

	J[241] = -1.;
	J[300] = 1.;
	J[315] = 1.;

   /*** derivatives for constraint 181 ***/

	J[251] = -1.;
	J[323] = 1.;

   /*** derivatives for constraint 182 ***/

	J[259] = -1.;
	J[330] = 1.;

   /*** derivatives for constraint 183 ***/

	J[193] = 1.;
	J[212] = 1.;
	J[232] = -1.;

   /*** derivatives for constraint 184 ***/

	J[202] = 1.;
	J[221] = 1.;
	J[242] = -1.;

   /*** derivatives for constraint 185 ***/

	J[194] = 1.;
	J[213] = 1.;
	J[252] = -1.;

   /*** derivatives for constraint 186 ***/

	J[203] = 1.;
	J[222] = 1.;
	J[260] = -1.;

   /*** derivatives for constraint 187 ***/

	J[195] = 1.;
	J[214] = 1.;
	J[272] = -1.;

   /*** derivatives for constraint 188 ***/

	J[204] = 1.;
	J[223] = 1.;
	J[284] = -1.;

   /*** derivatives for constraint 189 ***/

	J[233] = 1.;
	J[294] = -1.;

   /*** derivatives for constraint 190 ***/

	J[243] = 1.;
	J[301] = -1.;

   /*** derivatives for constraint 191 ***/

	J[234] = 1.;
	J[309] = -1.;

   /*** derivatives for constraint 192 ***/

	J[244] = 1.;
	J[316] = -1.;

   /*** derivatives for constraint 193 ***/

	J[253] = 1.;
	J[324] = -1.;

   /*** derivatives for constraint 194 ***/

	J[261] = 1.;
	J[331] = -1.;

   /*** derivatives for constraint 195 ***/

	J[273] = 1.;
	J[339] = -1.;

   /*** derivatives for constraint 196 ***/

	J[285] = 1.;
	J[346] = -1.;

   /*** derivatives for constraint 197 ***/

	J[274] = 1.;
	J[354] = -1.;

   /*** derivatives for constraint 198 ***/

	J[286] = 1.;
	J[361] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
