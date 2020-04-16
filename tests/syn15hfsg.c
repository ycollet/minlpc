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
 fint syn15hfsg_auxcom_[1] = { 11 /* nlc */ };
 fint syn15hfsg_funcom_[521] = {
	121 /* nvar */,
	1 /* nobj */,
	181 /* ncon */,
	393 /* nzc */,
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
	22,
	25,
	28,
	31,
	34,
	37,
	40,
	43,
	46,
	49,
	52,
	55,
	58,
	61,
	65,
	74,
	83,
	91,
	100,
	109,
	119,
	126,
	133,
	140,
	151,
	152,
	154,
	156,
	158,
	160,
	162,
	163,
	165,
	167,
	169,
	171,
	172,
	174,
	176,
	178,
	180,
	182,
	184,
	186,
	188,
	190,
	192,
	194,
	196,
	198,
	200,
	202,
	204,
	205,
	206,
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
	220,
	223,
	226,
	229,
	232,
	235,
	238,
	241,
	244,
	247,
	250,
	253,
	256,
	259,
	262,
	266,
	269,
	272,
	275,
	278,
	281,
	284,
	287,
	290,
	293,
	296,
	299,
	302,
	305,
	308,
	311,
	314,
	317,
	320,
	323,
	326,
	329,
	332,
	335,
	338,
	342,
	345,
	348,
	351,
	354,
	362,
	373,
	380,
	386,
	394,

	/* rownos */
	1,
	24,
	26,
	2,
	32,
	34,
	1,
	25,
	28,
	2,
	33,
	36,
	3,
	49,
	51,
	3,
	50,
	53,
	6,
	87,
	89,
	4,
	71,
	73,
	5,
	79,
	81,
	7,
	113,
	115,
	4,
	72,
	75,
	5,
	80,
	83,
	8,
	135,
	137,
	6,
	88,
	91,
	7,
	114,
	117,
	9,
	143,
	145,
	10,
	152,
	155,
	11,
	153,
	157,
	8,
	136,
	139,
	9,
	144,
	147,
	10,
	11,
	154,
	159,
	1,
	26,
	27,
	28,
	29,
	161,
	169,
	170,
	171,
	2,
	34,
	35,
	36,
	37,
	161,
	169,
	170,
	171,
	3,
	51,
	52,
	53,
	54,
	165,
	170,
	174,
	4,
	73,
	74,
	75,
	76,
	162,
	163,
	172,
	178,
	5,
	81,
	82,
	83,
	84,
	162,
	164,
	173,
	179,
	6,
	89,
	90,
	91,
	92,
	165,
	166,
	174,
	180,
	181,
	7,
	115,
	116,
	117,
	118,
	167,
	177,
	8,
	137,
	138,
	139,
	140,
	164,
	179,
	9,
	145,
	146,
	147,
	148,
	166,
	180,
	10,
	11,
	155,
	156,
	157,
	158,
	159,
	160,
	166,
	168,
	181,
	12,
	12,
	24,
	12,
	32,
	13,
	25,
	13,
	33,
	13,
	14,
	14,
	14,
	15,
	15,
	41,
	15,
	49,
	15,
	60,
	61,
	16,
	42,
	50,
	87,
	17,
	62,
	16,
	71,
	16,
	79,
	17,
	96,
	17,
	105,
	17,
	113,
	72,
	124,
	80,
	135,
	18,
	88,
	19,
	97,
	20,
	106,
	21,
	114,
	18,
	143,
	18,
	152,
	125,
	19,
	19,
	153,
	20,
	20,
	21,
	21,
	21,
	126,
	136,
	144,
	154,
	22,
	24,
	27,
	30,
	32,
	35,
	23,
	25,
	29,
	31,
	33,
	37,
	38,
	41,
	43,
	39,
	41,
	44,
	47,
	49,
	52,
	55,
	60,
	63,
	57,
	60,
	64,
	56,
	61,
	65,
	58,
	61,
	66,
	38,
	42,
	45,
	40,
	42,
	46,
	48,
	50,
	54,
	85,
	87,
	90,
	55,
	56,
	62,
	67,
	59,
	62,
	68,
	69,
	71,
	74,
	77,
	79,
	82,
	93,
	96,
	98,
	94,
	96,
	99,
	102,
	105,
	107,
	103,
	105,
	108,
	111,
	113,
	116,
	119,
	124,
	127,
	70,
	72,
	76,
	121,
	124,
	128,
	78,
	80,
	84,
	133,
	135,
	138,
	86,
	88,
	92,
	93,
	97,
	100,
	95,
	97,
	101,
	102,
	106,
	109,
	104,
	106,
	110,
	112,
	114,
	118,
	141,
	143,
	146,
	149,
	152,
	156,
	120,
	125,
	129,
	122,
	125,
	130,
	150,
	153,
	158,
	119,
	120,
	126,
	131,
	123,
	126,
	132,
	134,
	136,
	140,
	142,
	144,
	148,
	151,
	154,
	160,
	43,
	44,
	45,
	46,
	162,
	169,
	172,
	173,
	63,
	64,
	65,
	66,
	67,
	68,
	167,
	171,
	175,
	176,
	177,
	98,
	99,
	100,
	101,
	167,
	168,
	175,
	107,
	108,
	109,
	110,
	167,
	176,
	127,
	128,
	129,
	130,
	131,
	132,
	163,
	178 };

 real syn15hfsg_boundc_[1+242+362] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		7.,
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
		5.,
		0.,
		5.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		10.,
		-1.7e308,
		0.,
		-1.7e308,
		2.39789527279837,
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
		10.,
		-1.7e308,
		0.,
		-1.7e308,
		2.87747432735804,
		0.,
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
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		2.15810574551853,
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
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		2.03277599268042,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		7.,
		-1.7e308,
		0.,
		-1.7e308,
		3.5,
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
		2.15810574551853,
		-1.7e308,
		0.,
		-1.7e308,
		1.43746550029693,
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
		2.15810574551853,
		-1.7e308,
		0.,
		-1.7e308,
		1.03497516021379,
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
		2.03277599268042,
		-1.7e308,
		0.,
		-1.7e308,
		1.10947836929589,
		0.,
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
		3.5,
		-1.7e308,
		0.,
		-1.7e308,
		3.15,
		0.,
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
		3.5,
		-1.7e308,
		0.,
		-1.7e308,
		2.1,
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
		3.5,
		-1.7e308,
		0.,
		-1.7e308,
		1.6544851364539,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.43746550029693,
		-1.7e308,
		0.,
		-1.7e308,
		5.,
		-1.7e308,
		0.,
		-1.7e308,
		5.,
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
		1.03497516021379,
		-1.7e308,
		0.,
		-1.7e308,
		0.710483612536911,
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
		1.10947836929589,
		-1.7e308,
		0.,
		-1.7e308,
		0.522508489006913,
		0.,
		0.,
		0.,
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
		1.10947836929589,
		-1.7e308,
		0.,
		-1.7e308,
		8.15,
		-1.7e308,
		0.,
		-1.7e308,
		1.43894002153683,
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

 real syn15hfsg_x0comn_[121] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn15hfsg_pd[85];
static real syn15hfsg_old_x[121];
static int syn15hfsg_xkind = -1;

 static int
syn15hfsg_xcheck(real *x)
{
	real *x1 = syn15hfsg_old_x, *xe = x + 121;
	errno = 0;
	if (syn15hfsg_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn15hfsg_xkind = 0;
	return 1;
	}
 real
syn15hfsg_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn15hfsg_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -5.*x[21];
	rv += -8.*x[22];
	rv += -10.*x[23];
	rv += -7.*x[24];
	rv += -4.*x[25];
	rv += -5.*x[26];
	rv += -3.*x[27];
	rv += -3.*x[28];
	rv += -2.*x[29];
	rv += -4.*x[30];
	rv += 5.*x[37];
	rv += 500.*x[55];
	rv += 350.*x[56];
	rv += 200.*x[67];
	rv += 250.*x[68];
	rv += 200.*x[69];
	rv += 200.*x[70];
	rv += -6.*x[116];
	rv += -6.*x[117];
	rv += -2.*x[118];
	rv += -4.*x[119];
	rv += -7.*x[120];
	;}

	if (wantfg & 2) {
	g[21] = -5.;
	g[22] = -8.;
	g[23] = -10.;
	g[24] = -7.;
	g[25] = -4.;
	g[26] = -5.;
	g[27] = -3.;
	g[28] = -3.;
	g[29] = -2.;
	g[30] = -4.;
	g[37] = 5.;
	g[55] = 500.;
	g[56] = 350.;
	g[67] = 200.;
	g[68] = 250.;
	g[69] = 200.;
	g[70] = 200.;
	g[116] = -6.;
	g[117] = -6.;
	g[118] = -2.;
	g[119] = -4.;
	g[120] = -7.;
	}

	return rv;
}

 void
syn15hfsg_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (syn15hfsg_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.999 * x[21];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[2] / v[1];
	syn15hfsg_pd[0] = 1. / v[1];
	syn15hfsg_pd[1] = -v[0] * syn15hfsg_pd[0];
	v[1] = 0.999 * x[21];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[0] / v[2];
	syn15hfsg_pd[2] = 1. / v[2];
	syn15hfsg_pd[3] = -v[1] * syn15hfsg_pd[2];
	v[2] = v[1] + 1.;
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[4] = 1. / v[2];
	syn15hfsg_pd[6] = v[0] - v[1];
	v[1] = 0.999 * x[21];
	syn15hfsg_pd[5] = v[1] + 0.001;
	v[1] = syn15hfsg_pd[6] * syn15hfsg_pd[5];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = 0.999 * x[22];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[3] / v[1];
	syn15hfsg_pd[7] = 1. / v[1];
	syn15hfsg_pd[8] = -v[0] * syn15hfsg_pd[7];
	v[1] = 0.999 * x[22];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[1] / v[2];
	syn15hfsg_pd[9] = 1. / v[2];
	syn15hfsg_pd[10] = -v[1] * syn15hfsg_pd[9];
	v[2] = v[1] + 1.;
	syn15hfsg_pd[11] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[12] = 1. / v[2];
	v[2] = -1.2 * syn15hfsg_pd[11];
	syn15hfsg_pd[14] = v[0] + v[2];
	v[2] = 0.999 * x[22];
	syn15hfsg_pd[13] = v[2] + 0.001;
	v[2] = syn15hfsg_pd[14] * syn15hfsg_pd[13];
	c[1] = v[2];

  /***  constraint 3  ***/

	v[0] = 0.999 * x[23];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[5] / v[1];
	syn15hfsg_pd[15] = 1. / v[1];
	syn15hfsg_pd[16] = -v[0] * syn15hfsg_pd[15];
	v[1] = 0.999 * x[23];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[4] / v[2];
	syn15hfsg_pd[17] = 1. / v[2];
	syn15hfsg_pd[18] = -v[1] * syn15hfsg_pd[17];
	v[2] = v[1] + 1.;
	syn15hfsg_pd[19] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[20] = 1. / v[2];
	v[2] = -1.5 * syn15hfsg_pd[19];
	syn15hfsg_pd[22] = v[0] + v[2];
	v[2] = 0.999 * x[23];
	syn15hfsg_pd[21] = v[2] + 0.001;
	v[2] = syn15hfsg_pd[22] * syn15hfsg_pd[21];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = 0.999 * x[24];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[10] / v[1];
	syn15hfsg_pd[23] = 1. / v[1];
	syn15hfsg_pd[24] = -v[0] * syn15hfsg_pd[23];
	v[1] = 0.999 * x[24];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[7] / v[2];
	syn15hfsg_pd[25] = 1. / v[2];
	syn15hfsg_pd[26] = -v[1] * syn15hfsg_pd[25];
	v[2] = v[1] + 1.;
	syn15hfsg_pd[27] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[28] = 1. / v[2];
	v[2] = -1.25 * syn15hfsg_pd[27];
	syn15hfsg_pd[30] = v[0] + v[2];
	v[2] = 0.999 * x[24];
	syn15hfsg_pd[29] = v[2] + 0.001;
	v[2] = syn15hfsg_pd[30] * syn15hfsg_pd[29];
	c[3] = v[2];

  /***  constraint 5  ***/

	v[0] = 0.999 * x[25];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[11] / v[1];
	syn15hfsg_pd[31] = 1. / v[1];
	syn15hfsg_pd[32] = -v[0] * syn15hfsg_pd[31];
	v[1] = 0.999 * x[25];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[8] / v[2];
	syn15hfsg_pd[33] = 1. / v[2];
	syn15hfsg_pd[34] = -v[1] * syn15hfsg_pd[33];
	v[2] = v[1] + 1.;
	syn15hfsg_pd[35] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[36] = 1. / v[2];
	v[2] = -0.9 * syn15hfsg_pd[35];
	syn15hfsg_pd[38] = v[0] + v[2];
	v[2] = 0.999 * x[25];
	syn15hfsg_pd[37] = v[2] + 0.001;
	v[2] = syn15hfsg_pd[38] * syn15hfsg_pd[37];
	c[4] = v[2];

  /***  constraint 6  ***/

	v[0] = 0.999 * x[26];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[13] / v[1];
	syn15hfsg_pd[39] = 1. / v[1];
	syn15hfsg_pd[40] = -v[0] * syn15hfsg_pd[39];
	v[1] = 0.999 * x[26];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[6] / v[2];
	syn15hfsg_pd[41] = 1. / v[2];
	syn15hfsg_pd[42] = -v[1] * syn15hfsg_pd[41];
	v[2] = v[1] + 1.;
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[43] = 1. / v[2];
	syn15hfsg_pd[45] = v[0] - v[1];
	v[1] = 0.999 * x[26];
	syn15hfsg_pd[44] = v[1] + 0.001;
	v[1] = syn15hfsg_pd[45] * syn15hfsg_pd[44];
	c[5] = v[1];

  /***  constraint 7  ***/

	v[0] = 0.999 * x[27];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[14] / v[1];
	syn15hfsg_pd[46] = 1. / v[1];
	syn15hfsg_pd[47] = -v[0] * syn15hfsg_pd[46];
	v[1] = 0.999 * x[27];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[9] / v[2];
	syn15hfsg_pd[48] = 1. / v[2];
	syn15hfsg_pd[49] = -v[1] * syn15hfsg_pd[48];
	v[2] = v[1] + 1.;
	syn15hfsg_pd[50] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[51] = 1. / v[2];
	v[2] = -1.1 * syn15hfsg_pd[50];
	syn15hfsg_pd[53] = v[0] + v[2];
	v[2] = 0.999 * x[27];
	syn15hfsg_pd[52] = v[2] + 0.001;
	v[2] = syn15hfsg_pd[53] * syn15hfsg_pd[52];
	c[6] = v[2];

  /***  constraint 8  ***/

	v[0] = 0.999 * x[28];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[18] / v[1];
	syn15hfsg_pd[54] = 1. / v[1];
	syn15hfsg_pd[55] = -v[0] * syn15hfsg_pd[54];
	v[1] = 0.999 * x[28];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[12] / v[2];
	syn15hfsg_pd[56] = 1. / v[2];
	syn15hfsg_pd[57] = -v[1] * syn15hfsg_pd[56];
	v[2] = v[1] + 1.;
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[58] = 1. / v[2];
	syn15hfsg_pd[60] = v[0] - v[1];
	v[1] = 0.999 * x[28];
	syn15hfsg_pd[59] = v[1] + 0.001;
	v[1] = syn15hfsg_pd[60] * syn15hfsg_pd[59];
	c[7] = v[1];

  /***  constraint 9  ***/

	v[0] = 0.999 * x[29];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[19] / v[1];
	syn15hfsg_pd[61] = 1. / v[1];
	syn15hfsg_pd[62] = -v[0] * syn15hfsg_pd[61];
	v[1] = 0.999 * x[29];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[15] / v[2];
	syn15hfsg_pd[63] = 1. / v[2];
	syn15hfsg_pd[64] = -v[1] * syn15hfsg_pd[63];
	v[2] = v[1] + 1.;
	syn15hfsg_pd[65] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[66] = 1. / v[2];
	v[2] = -0.7 * syn15hfsg_pd[65];
	syn15hfsg_pd[68] = v[0] + v[2];
	v[2] = 0.999 * x[29];
	syn15hfsg_pd[67] = v[2] + 0.001;
	v[2] = syn15hfsg_pd[68] * syn15hfsg_pd[67];
	c[8] = v[2];

  /***  constraint 10  ***/

	v[0] = 0.999 * x[30];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[20] / v[1];
	syn15hfsg_pd[69] = 1. / v[1];
	syn15hfsg_pd[70] = -v[0] * syn15hfsg_pd[69];
	v[1] = 0.999 * x[30];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[16] / v[2];
	syn15hfsg_pd[71] = 1. / v[2];
	syn15hfsg_pd[72] = -v[1] * syn15hfsg_pd[71];
	v[2] = v[1] + 1.;
	syn15hfsg_pd[73] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[74] = 1. / v[2];
	v[2] = -0.65 * syn15hfsg_pd[73];
	syn15hfsg_pd[76] = v[0] + v[2];
	v[2] = 0.999 * x[30];
	syn15hfsg_pd[75] = v[2] + 0.001;
	v[2] = syn15hfsg_pd[76] * syn15hfsg_pd[75];
	c[9] = v[2];

  /***  constraint 11  ***/

	v[0] = 0.999 * x[30];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[20] / v[1];
	syn15hfsg_pd[77] = 1. / v[1];
	syn15hfsg_pd[78] = -v[0] * syn15hfsg_pd[77];
	v[1] = 0.999 * x[30];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[17] / v[2];
	syn15hfsg_pd[79] = 1. / v[2];
	syn15hfsg_pd[80] = -v[1] * syn15hfsg_pd[79];
	v[2] = v[1] + 1.;
	syn15hfsg_pd[81] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn15hfsg_pd[82] = 1. / v[2];
	v[2] = -0.65 * syn15hfsg_pd[81];
	syn15hfsg_pd[84] = v[0] + v[2];
	v[2] = 0.999 * x[30];
	syn15hfsg_pd[83] = v[2] + 0.001;
	v[2] = syn15hfsg_pd[84] * syn15hfsg_pd[83];
	c[10] = v[2];

  /***  constraint 12  ***/

	t1 = x[31];
	t1 += -x[32];
	t1 += -x[33];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[34];
	t1 += -x[35];
	t1 += x[36];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[36];
	t1 += -x[37];
	t1 += -x[38];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[38];
	t1 += -x[39];
	t1 += -x[40];
	t1 += -x[41];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[43];
	t1 += -x[46];
	t1 += -x[47];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[45];
	t1 += -x[48];
	t1 += -x[49];
	t1 += -x[50];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[53];
	t1 += -x[57];
	t1 += -x[58];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[54];
	t1 += -x[60];
	t1 += x[61];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[55];
	t1 += -x[62];
	t1 += -x[63];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[56];
	t1 += -x[64];
	t1 += -x[65];
	t1 += -x[66];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[71];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[73];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[0];
	t1 += x[32];
	t1 += -x[71];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[2];
	t1 += x[34];
	t1 += -x[73];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[0];
	t1 += -10.*x[21];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = 10.*x[21];
	t1 += x[71];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[2];
	t1 += -2.39789527279837*x[21];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = 2.39789527279837*x[21];
	t1 += x[73];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[72];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[74];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[1];
	t1 += x[33];
	t1 += -x[72];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[3];
	t1 += x[35];
	t1 += -x[74];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[1];
	t1 += -10.*x[22];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = 10.*x[22];
	t1 += x[72];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[3];
	t1 += -2.87747432735804*x[22];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = 2.87747432735804*x[22];
	t1 += x[74];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -0.75*x[75];
	t1 += x[82];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[76];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[83];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[39];
	t1 += -x[75];
	t1 += -x[76];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[43];
	t1 += -x[82];
	t1 += -x[83];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[75];
	t1 += -2.87747432735804*x[116];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[76];
	t1 += 2.87747432735804*x[116];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[82];
	t1 += -2.15810574551853*x[116];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[83];
	t1 += 2.15810574551853*x[116];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[77];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[84];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[4];
	t1 += x[40];
	t1 += -x[77];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[5];
	t1 += x[44];
	t1 += -x[84];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[4];
	t1 += -2.87747432735804*x[23];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = 2.87747432735804*x[23];
	t1 += x[77];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[5];
	t1 += -2.03277599268042*x[23];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = 2.03277599268042*x[23];
	t1 += x[84];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[78];
	t1 += x[86];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -0.5*x[80];
	t1 += x[86];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[79];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[81];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[87];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[41];
	t1 += -x[78];
	t1 += -x[79];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[42];
	t1 += -x[80];
	t1 += -x[81];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[45];
	t1 += -x[86];
	t1 += -x[87];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[78];
	t1 += -2.87747432735804*x[117];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[79];
	t1 += 2.87747432735804*x[117];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[80];
	t1 += -7.*x[117];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[81];
	t1 += 7.*x[117];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[86];
	t1 += -3.5*x[117];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[87];
	t1 += 3.5*x[117];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[88];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[96];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[7];
	t1 += x[46];
	t1 += -x[88];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[10];
	t1 += x[51];
	t1 += -x[96];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[7];
	t1 += -2.15810574551853*x[24];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = 2.15810574551853*x[24];
	t1 += x[88];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[10];
	t1 += -1.43746550029693*x[24];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = 1.43746550029693*x[24];
	t1 += x[96];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[89];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[98];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[8];
	t1 += x[47];
	t1 += -x[89];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[11];
	t1 += x[52];
	t1 += -x[98];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[8];
	t1 += -2.15810574551853*x[25];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = 2.15810574551853*x[25];
	t1 += x[89];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[11];
	t1 += -1.03497516021379*x[25];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = 1.03497516021379*x[25];
	t1 += x[98];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[85];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[100];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[6];
	t1 += x[44];
	t1 += -x[85];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = -x[13];
	t1 += x[53];
	t1 += -x[100];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[6];
	t1 += -2.03277599268042*x[26];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = 2.03277599268042*x[26];
	t1 += x[85];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[13];
	t1 += -1.10947836929589*x[26];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = 1.10947836929589*x[26];
	t1 += x[100];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -0.9*x[90];
	t1 += x[101];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[91];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[102];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[48];
	t1 += -x[90];
	t1 += -x[91];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[54];
	t1 += -x[101];
	t1 += -x[102];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[90];
	t1 += -3.5*x[118];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[91];
	t1 += 3.5*x[118];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[101];
	t1 += -3.15*x[118];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[102];
	t1 += 3.15*x[118];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = -0.6*x[92];
	t1 += x[103];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[93];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[104];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[49];
	t1 += -x[92];
	t1 += -x[93];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[55];
	t1 += -x[103];
	t1 += -x[104];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[92];
	t1 += -3.5*x[119];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[93];
	t1 += 3.5*x[119];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[103];
	t1 += -2.1*x[119];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[104];
	t1 += 2.1*x[119];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[94];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[105];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -x[9];
	t1 += x[50];
	t1 += -x[94];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -x[14];
	t1 += x[56];
	t1 += -x[105];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[9];
	t1 += -3.5*x[27];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = 3.5*x[27];
	t1 += x[94];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[14];
	t1 += -1.6544851364539*x[27];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = 1.6544851364539*x[27];
	t1 += x[105];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = -0.9*x[95];
	t1 += x[111];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -x[108];
	t1 += x[111];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[97];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[109];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[112];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[51];
	t1 += -x[95];
	t1 += -x[97];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[59];
	t1 += -x[108];
	t1 += -x[109];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[67];
	t1 += -x[111];
	t1 += -x[112];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[95];
	t1 += -1.43746550029693*x[120];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[97];
	t1 += 1.43746550029693*x[120];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[108];
	t1 += -5.*x[120];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[109];
	t1 += 5.*x[120];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[111];
	t1 += -5.*x[120];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[112];
	t1 += 5.*x[120];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[99];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[113];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = -x[12];
	t1 += x[52];
	t1 += -x[99];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = -x[18];
	t1 += x[68];
	t1 += -x[113];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = x[12];
	t1 += -1.03497516021379*x[28];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = 1.03497516021379*x[28];
	t1 += x[99];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = x[18];
	t1 += -0.710483612536911*x[28];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = 0.710483612536911*x[28];
	t1 += x[113];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = x[106];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = x[114];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = -x[15];
	t1 += x[57];
	t1 += -x[106];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = -x[19];
	t1 += x[69];
	t1 += -x[114];
	c[143] = t1;

  /***  constraint 145  ***/

	t1 = x[15];
	t1 += -1.10947836929589*x[29];
	c[144] = t1;

  /***  constraint 146  ***/

	t1 = 1.10947836929589*x[29];
	t1 += x[106];
	c[145] = t1;

  /***  constraint 147  ***/

	t1 = x[19];
	t1 += -0.522508489006913*x[29];
	c[146] = t1;

  /***  constraint 148  ***/

	t1 = 0.522508489006913*x[29];
	t1 += x[114];
	c[147] = t1;

  /***  constraint 149  ***/

	t1 = x[107];
	c[148] = t1;

  /***  constraint 150  ***/

	t1 = x[110];
	c[149] = t1;

  /***  constraint 151  ***/

	t1 = x[115];
	c[150] = t1;

  /***  constraint 152  ***/

	t1 = -x[16];
	t1 += x[58];
	t1 += -x[107];
	c[151] = t1;

  /***  constraint 153  ***/

	t1 = -x[17];
	t1 += x[61];
	t1 += -x[110];
	c[152] = t1;

  /***  constraint 154  ***/

	t1 = -x[20];
	t1 += x[70];
	t1 += -x[115];
	c[153] = t1;

  /***  constraint 155  ***/

	t1 = x[16];
	t1 += -1.10947836929589*x[30];
	c[154] = t1;

  /***  constraint 156  ***/

	t1 = 1.10947836929589*x[30];
	t1 += x[107];
	c[155] = t1;

  /***  constraint 157  ***/

	t1 = x[17];
	t1 += -8.15*x[30];
	c[156] = t1;

  /***  constraint 158  ***/

	t1 = 8.15*x[30];
	t1 += x[110];
	c[157] = t1;

  /***  constraint 159  ***/

	t1 = x[20];
	t1 += -1.43894002153683*x[30];
	c[158] = t1;

  /***  constraint 160  ***/

	t1 = 1.43894002153683*x[30];
	t1 += x[115];
	c[159] = t1;

  /***  constraint 161  ***/

	t1 = x[21];
	t1 += x[22];
	c[160] = t1;

  /***  constraint 162  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += -x[116];
	c[161] = t1;

  /***  constraint 163  ***/

	t1 = -x[24];
	t1 += x[120];
	c[162] = t1;

  /***  constraint 164  ***/

	t1 = -x[25];
	t1 += x[28];
	c[163] = t1;

  /***  constraint 165  ***/

	t1 = -x[23];
	t1 += x[26];
	c[164] = t1;

  /***  constraint 166  ***/

	t1 = -x[26];
	t1 += x[29];
	t1 += x[30];
	c[165] = t1;

  /***  constraint 167  ***/

	t1 = x[27];
	t1 += -x[117];
	t1 += x[118];
	t1 += x[119];
	c[166] = t1;

  /***  constraint 168  ***/

	t1 = x[30];
	t1 += -x[118];
	c[167] = t1;

  /***  constraint 169  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += -x[116];
	c[168] = t1;

  /***  constraint 170  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += -x[23];
	c[169] = t1;

  /***  constraint 171  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += -x[117];
	c[170] = t1;

  /***  constraint 172  ***/

	t1 = -x[24];
	t1 += x[116];
	c[171] = t1;

  /***  constraint 173  ***/

	t1 = -x[25];
	t1 += x[116];
	c[172] = t1;

  /***  constraint 174  ***/

	t1 = x[23];
	t1 += -x[26];
	c[173] = t1;

  /***  constraint 175  ***/

	t1 = x[117];
	t1 += -x[118];
	c[174] = t1;

  /***  constraint 176  ***/

	t1 = x[117];
	t1 += -x[119];
	c[175] = t1;

  /***  constraint 177  ***/

	t1 = -x[27];
	t1 += x[117];
	c[176] = t1;

  /***  constraint 178  ***/

	t1 = x[24];
	t1 += -x[120];
	c[177] = t1;

  /***  constraint 179  ***/

	t1 = x[25];
	t1 += -x[28];
	c[178] = t1;

  /***  constraint 180  ***/

	t1 = x[26];
	t1 += -x[29];
	c[179] = t1;

  /***  constraint 181  ***/

	t1 = x[26];
	t1 += -x[30];
	c[180] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[64] = syn15hfsg_pd[6]*0.999;
	dv[0] = -syn15hfsg_pd[5];
	dv[0] *= syn15hfsg_pd[4];
	dv[1] = dv[0]*syn15hfsg_pd[3];
	J[0] = dv[0]*syn15hfsg_pd[2];
	J[64] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[5]*syn15hfsg_pd[1];
	J[6] = syn15hfsg_pd[5]*syn15hfsg_pd[0];
	J[64] += dv[2]*0.999;

   /*** derivatives for constraint 2 ***/

	J[73] = syn15hfsg_pd[14]*0.999;
	dv[0] = syn15hfsg_pd[13];
	dv[0] = -dv[0]*1.2;
	dv[0] *= syn15hfsg_pd[12];
	dv[1] = dv[0]*syn15hfsg_pd[10];
	J[3] = dv[0]*syn15hfsg_pd[9];
	J[73] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[13]*syn15hfsg_pd[8];
	J[9] = syn15hfsg_pd[13]*syn15hfsg_pd[7];
	J[73] += dv[2]*0.999;

   /*** derivatives for constraint 3 ***/

	J[82] = syn15hfsg_pd[22]*0.999;
	dv[0] = syn15hfsg_pd[21];
	dv[0] = -dv[0]*1.5;
	dv[0] *= syn15hfsg_pd[20];
	dv[1] = dv[0]*syn15hfsg_pd[18];
	J[12] = dv[0]*syn15hfsg_pd[17];
	J[82] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[21]*syn15hfsg_pd[16];
	J[15] = syn15hfsg_pd[21]*syn15hfsg_pd[15];
	J[82] += dv[2]*0.999;

   /*** derivatives for constraint 4 ***/

	J[90] = syn15hfsg_pd[30]*0.999;
	dv[0] = syn15hfsg_pd[29];
	dv[0] = -dv[0]*1.25;
	dv[0] *= syn15hfsg_pd[28];
	dv[1] = dv[0]*syn15hfsg_pd[26];
	J[21] = dv[0]*syn15hfsg_pd[25];
	J[90] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[29]*syn15hfsg_pd[24];
	J[30] = syn15hfsg_pd[29]*syn15hfsg_pd[23];
	J[90] += dv[2]*0.999;

   /*** derivatives for constraint 5 ***/

	J[99] = syn15hfsg_pd[38]*0.999;
	dv[0] = syn15hfsg_pd[37];
	dv[0] = -dv[0]*0.9;
	dv[0] *= syn15hfsg_pd[36];
	dv[1] = dv[0]*syn15hfsg_pd[34];
	J[24] = dv[0]*syn15hfsg_pd[33];
	J[99] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[37]*syn15hfsg_pd[32];
	J[33] = syn15hfsg_pd[37]*syn15hfsg_pd[31];
	J[99] += dv[2]*0.999;

   /*** derivatives for constraint 6 ***/

	J[108] = syn15hfsg_pd[45]*0.999;
	dv[0] = -syn15hfsg_pd[44];
	dv[0] *= syn15hfsg_pd[43];
	dv[1] = dv[0]*syn15hfsg_pd[42];
	J[18] = dv[0]*syn15hfsg_pd[41];
	J[108] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[44]*syn15hfsg_pd[40];
	J[39] = syn15hfsg_pd[44]*syn15hfsg_pd[39];
	J[108] += dv[2]*0.999;

   /*** derivatives for constraint 7 ***/

	J[118] = syn15hfsg_pd[53]*0.999;
	dv[0] = syn15hfsg_pd[52];
	dv[0] = -dv[0]*1.1;
	dv[0] *= syn15hfsg_pd[51];
	dv[1] = dv[0]*syn15hfsg_pd[49];
	J[27] = dv[0]*syn15hfsg_pd[48];
	J[118] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[52]*syn15hfsg_pd[47];
	J[42] = syn15hfsg_pd[52]*syn15hfsg_pd[46];
	J[118] += dv[2]*0.999;

   /*** derivatives for constraint 8 ***/

	J[125] = syn15hfsg_pd[60]*0.999;
	dv[0] = -syn15hfsg_pd[59];
	dv[0] *= syn15hfsg_pd[58];
	dv[1] = dv[0]*syn15hfsg_pd[57];
	J[36] = dv[0]*syn15hfsg_pd[56];
	J[125] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[59]*syn15hfsg_pd[55];
	J[54] = syn15hfsg_pd[59]*syn15hfsg_pd[54];
	J[125] += dv[2]*0.999;

   /*** derivatives for constraint 9 ***/

	J[132] = syn15hfsg_pd[68]*0.999;
	dv[0] = syn15hfsg_pd[67];
	dv[0] = -dv[0]*0.7;
	dv[0] *= syn15hfsg_pd[66];
	dv[1] = dv[0]*syn15hfsg_pd[64];
	J[45] = dv[0]*syn15hfsg_pd[63];
	J[132] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[67]*syn15hfsg_pd[62];
	J[57] = syn15hfsg_pd[67]*syn15hfsg_pd[61];
	J[132] += dv[2]*0.999;

   /*** derivatives for constraint 10 ***/

	J[139] = syn15hfsg_pd[76]*0.999;
	dv[0] = syn15hfsg_pd[75];
	dv[0] = -dv[0]*0.65;
	dv[0] *= syn15hfsg_pd[74];
	dv[1] = dv[0]*syn15hfsg_pd[72];
	J[48] = dv[0]*syn15hfsg_pd[71];
	J[139] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[75]*syn15hfsg_pd[70];
	J[60] = syn15hfsg_pd[75]*syn15hfsg_pd[69];
	J[139] += dv[2]*0.999;

   /*** derivatives for constraint 11 ***/

	J[140] = syn15hfsg_pd[84]*0.999;
	dv[0] = syn15hfsg_pd[83];
	dv[0] = -dv[0]*0.65;
	dv[0] *= syn15hfsg_pd[82];
	dv[1] = dv[0]*syn15hfsg_pd[80];
	J[51] = dv[0]*syn15hfsg_pd[79];
	J[140] += dv[1]*0.999;
	dv[2] = syn15hfsg_pd[83]*syn15hfsg_pd[78];
	J[61] = syn15hfsg_pd[83]*syn15hfsg_pd[77];
	J[140] += dv[2]*0.999;

   /*** derivatives for constraint 12 ***/

	J[150] = 1.;
	J[151] = -1.;
	J[153] = -1.;

   /*** derivatives for constraint 13 ***/

	J[155] = -1.;
	J[157] = -1.;
	J[159] = 1.;

   /*** derivatives for constraint 14 ***/

	J[160] = 1.;
	J[161] = -1.;
	J[162] = -1.;

   /*** derivatives for constraint 15 ***/

	J[163] = 1.;
	J[164] = -1.;
	J[166] = -1.;
	J[168] = -1.;

   /*** derivatives for constraint 16 ***/

	J[171] = 1.;
	J[177] = -1.;
	J[179] = -1.;

   /*** derivatives for constraint 17 ***/

	J[175] = 1.;
	J[181] = -1.;
	J[183] = -1.;
	J[185] = -1.;

   /*** derivatives for constraint 18 ***/

	J[191] = 1.;
	J[199] = -1.;
	J[201] = -1.;

   /*** derivatives for constraint 19 ***/

	J[193] = -1.;
	J[204] = -1.;
	J[205] = 1.;

   /*** derivatives for constraint 20 ***/

	J[195] = 1.;
	J[207] = -1.;
	J[208] = -1.;

   /*** derivatives for constraint 21 ***/

	J[197] = 1.;
	J[209] = -1.;
	J[210] = -1.;
	J[211] = -1.;

   /*** derivatives for constraint 22 ***/

	J[216] = 1.;

   /*** derivatives for constraint 23 ***/

	J[222] = 1.;

   /*** derivatives for constraint 24 ***/

	J[1] = -1.;
	J[152] = 1.;
	J[217] = -1.;

   /*** derivatives for constraint 25 ***/

	J[7] = -1.;
	J[156] = 1.;
	J[223] = -1.;

   /*** derivatives for constraint 26 ***/

	J[2] = 1.;
	J[65] = -10.;

   /*** derivatives for constraint 27 ***/

	J[66] = 10.;
	J[218] = 1.;

   /*** derivatives for constraint 28 ***/

	J[8] = 1.;
	J[67] = -2.39789527279837;

   /*** derivatives for constraint 29 ***/

	J[68] = 2.39789527279837;
	J[224] = 1.;

   /*** derivatives for constraint 30 ***/

	J[219] = 1.;

   /*** derivatives for constraint 31 ***/

	J[225] = 1.;

   /*** derivatives for constraint 32 ***/

	J[4] = -1.;
	J[154] = 1.;
	J[220] = -1.;

   /*** derivatives for constraint 33 ***/

	J[10] = -1.;
	J[158] = 1.;
	J[226] = -1.;

   /*** derivatives for constraint 34 ***/

	J[5] = 1.;
	J[74] = -10.;

   /*** derivatives for constraint 35 ***/

	J[75] = 10.;
	J[221] = 1.;

   /*** derivatives for constraint 36 ***/

	J[11] = 1.;
	J[76] = -2.87747432735804;

   /*** derivatives for constraint 37 ***/

	J[77] = 2.87747432735804;
	J[227] = 1.;

   /*** derivatives for constraint 38 ***/

	J[228] = -0.75;
	J[249] = 1.;

   /*** derivatives for constraint 39 ***/

	J[231] = 1.;

   /*** derivatives for constraint 40 ***/

	J[252] = 1.;

   /*** derivatives for constraint 41 ***/

	J[165] = 1.;
	J[229] = -1.;
	J[232] = -1.;

   /*** derivatives for constraint 42 ***/

	J[172] = 1.;
	J[250] = -1.;
	J[253] = -1.;

   /*** derivatives for constraint 43 ***/

	J[230] = 1.;
	J[353] = -2.87747432735804;

   /*** derivatives for constraint 44 ***/

	J[233] = 1.;
	J[354] = 2.87747432735804;

   /*** derivatives for constraint 45 ***/

	J[251] = 1.;
	J[355] = -2.15810574551853;

   /*** derivatives for constraint 46 ***/

	J[254] = 1.;
	J[356] = 2.15810574551853;

   /*** derivatives for constraint 47 ***/

	J[234] = 1.;

   /*** derivatives for constraint 48 ***/

	J[255] = 1.;

   /*** derivatives for constraint 49 ***/

	J[13] = -1.;
	J[167] = 1.;
	J[235] = -1.;

   /*** derivatives for constraint 50 ***/

	J[16] = -1.;
	J[173] = 1.;
	J[256] = -1.;

   /*** derivatives for constraint 51 ***/

	J[14] = 1.;
	J[83] = -2.87747432735804;

   /*** derivatives for constraint 52 ***/

	J[84] = 2.87747432735804;
	J[236] = 1.;

   /*** derivatives for constraint 53 ***/

	J[17] = 1.;
	J[85] = -2.03277599268042;

   /*** derivatives for constraint 54 ***/

	J[86] = 2.03277599268042;
	J[257] = 1.;

   /*** derivatives for constraint 55 ***/

	J[237] = -1.;
	J[261] = 1.;

   /*** derivatives for constraint 56 ***/

	J[243] = -0.5;
	J[262] = 1.;

   /*** derivatives for constraint 57 ***/

	J[240] = 1.;

   /*** derivatives for constraint 58 ***/

	J[246] = 1.;

   /*** derivatives for constraint 59 ***/

	J[265] = 1.;

   /*** derivatives for constraint 60 ***/

	J[169] = 1.;
	J[238] = -1.;
	J[241] = -1.;

   /*** derivatives for constraint 61 ***/

	J[170] = 1.;
	J[244] = -1.;
	J[247] = -1.;

   /*** derivatives for constraint 62 ***/

	J[176] = 1.;
	J[263] = -1.;
	J[266] = -1.;

   /*** derivatives for constraint 63 ***/

	J[239] = 1.;
	J[361] = -2.87747432735804;

   /*** derivatives for constraint 64 ***/

	J[242] = 1.;
	J[362] = 2.87747432735804;

   /*** derivatives for constraint 65 ***/

	J[245] = 1.;
	J[363] = -7.;

   /*** derivatives for constraint 66 ***/

	J[248] = 1.;
	J[364] = 7.;

   /*** derivatives for constraint 67 ***/

	J[264] = 1.;
	J[365] = -3.5;

   /*** derivatives for constraint 68 ***/

	J[267] = 1.;
	J[366] = 3.5;

   /*** derivatives for constraint 69 ***/

	J[268] = 1.;

   /*** derivatives for constraint 70 ***/

	J[292] = 1.;

   /*** derivatives for constraint 71 ***/

	J[22] = -1.;
	J[178] = 1.;
	J[269] = -1.;

   /*** derivatives for constraint 72 ***/

	J[31] = -1.;
	J[187] = 1.;
	J[293] = -1.;

   /*** derivatives for constraint 73 ***/

	J[23] = 1.;
	J[91] = -2.15810574551853;

   /*** derivatives for constraint 74 ***/

	J[92] = 2.15810574551853;
	J[270] = 1.;

   /*** derivatives for constraint 75 ***/

	J[32] = 1.;
	J[93] = -1.43746550029693;

   /*** derivatives for constraint 76 ***/

	J[94] = 1.43746550029693;
	J[294] = 1.;

   /*** derivatives for constraint 77 ***/

	J[271] = 1.;

   /*** derivatives for constraint 78 ***/

	J[298] = 1.;

   /*** derivatives for constraint 79 ***/

	J[25] = -1.;
	J[180] = 1.;
	J[272] = -1.;

   /*** derivatives for constraint 80 ***/

	J[34] = -1.;
	J[189] = 1.;
	J[299] = -1.;

   /*** derivatives for constraint 81 ***/

	J[26] = 1.;
	J[100] = -2.15810574551853;

   /*** derivatives for constraint 82 ***/

	J[101] = 2.15810574551853;
	J[273] = 1.;

   /*** derivatives for constraint 83 ***/

	J[35] = 1.;
	J[102] = -1.03497516021379;

   /*** derivatives for constraint 84 ***/

	J[103] = 1.03497516021379;
	J[300] = 1.;

   /*** derivatives for constraint 85 ***/

	J[258] = 1.;

   /*** derivatives for constraint 86 ***/

	J[304] = 1.;

   /*** derivatives for constraint 87 ***/

	J[19] = -1.;
	J[174] = 1.;
	J[259] = -1.;

   /*** derivatives for constraint 88 ***/

	J[40] = -1.;
	J[192] = 1.;
	J[305] = -1.;

   /*** derivatives for constraint 89 ***/

	J[20] = 1.;
	J[109] = -2.03277599268042;

   /*** derivatives for constraint 90 ***/

	J[110] = 2.03277599268042;
	J[260] = 1.;

   /*** derivatives for constraint 91 ***/

	J[41] = 1.;
	J[111] = -1.10947836929589;

   /*** derivatives for constraint 92 ***/

	J[112] = 1.10947836929589;
	J[306] = 1.;

   /*** derivatives for constraint 93 ***/

	J[274] = -0.9;
	J[307] = 1.;

   /*** derivatives for constraint 94 ***/

	J[277] = 1.;

   /*** derivatives for constraint 95 ***/

	J[310] = 1.;

   /*** derivatives for constraint 96 ***/

	J[182] = 1.;
	J[275] = -1.;
	J[278] = -1.;

   /*** derivatives for constraint 97 ***/

	J[194] = 1.;
	J[308] = -1.;
	J[311] = -1.;

   /*** derivatives for constraint 98 ***/

	J[276] = 1.;
	J[372] = -3.5;

   /*** derivatives for constraint 99 ***/

	J[279] = 1.;
	J[373] = 3.5;

   /*** derivatives for constraint 100 ***/

	J[309] = 1.;
	J[374] = -3.15;

   /*** derivatives for constraint 101 ***/

	J[312] = 1.;
	J[375] = 3.15;

   /*** derivatives for constraint 102 ***/

	J[280] = -0.6;
	J[313] = 1.;

   /*** derivatives for constraint 103 ***/

	J[283] = 1.;

   /*** derivatives for constraint 104 ***/

	J[316] = 1.;

   /*** derivatives for constraint 105 ***/

	J[184] = 1.;
	J[281] = -1.;
	J[284] = -1.;

   /*** derivatives for constraint 106 ***/

	J[196] = 1.;
	J[314] = -1.;
	J[317] = -1.;

   /*** derivatives for constraint 107 ***/

	J[282] = 1.;
	J[379] = -3.5;

   /*** derivatives for constraint 108 ***/

	J[285] = 1.;
	J[380] = 3.5;

   /*** derivatives for constraint 109 ***/

	J[315] = 1.;
	J[381] = -2.1;

   /*** derivatives for constraint 110 ***/

	J[318] = 1.;
	J[382] = 2.1;

   /*** derivatives for constraint 111 ***/

	J[286] = 1.;

   /*** derivatives for constraint 112 ***/

	J[319] = 1.;

   /*** derivatives for constraint 113 ***/

	J[28] = -1.;
	J[186] = 1.;
	J[287] = -1.;

   /*** derivatives for constraint 114 ***/

	J[43] = -1.;
	J[198] = 1.;
	J[320] = -1.;

   /*** derivatives for constraint 115 ***/

	J[29] = 1.;
	J[119] = -3.5;

   /*** derivatives for constraint 116 ***/

	J[120] = 3.5;
	J[288] = 1.;

   /*** derivatives for constraint 117 ***/

	J[44] = 1.;
	J[121] = -1.6544851364539;

   /*** derivatives for constraint 118 ***/

	J[122] = 1.6544851364539;
	J[321] = 1.;

   /*** derivatives for constraint 119 ***/

	J[289] = -0.9;
	J[337] = 1.;

   /*** derivatives for constraint 120 ***/

	J[328] = -1.;
	J[338] = 1.;

   /*** derivatives for constraint 121 ***/

	J[295] = 1.;

   /*** derivatives for constraint 122 ***/

	J[331] = 1.;

   /*** derivatives for constraint 123 ***/

	J[341] = 1.;

   /*** derivatives for constraint 124 ***/

	J[188] = 1.;
	J[290] = -1.;
	J[296] = -1.;

   /*** derivatives for constraint 125 ***/

	J[203] = 1.;
	J[329] = -1.;
	J[332] = -1.;

   /*** derivatives for constraint 126 ***/

	J[212] = 1.;
	J[339] = -1.;
	J[342] = -1.;

   /*** derivatives for constraint 127 ***/

	J[291] = 1.;
	J[385] = -1.43746550029693;

   /*** derivatives for constraint 128 ***/

	J[297] = 1.;
	J[386] = 1.43746550029693;

   /*** derivatives for constraint 129 ***/

	J[330] = 1.;
	J[387] = -5.;

   /*** derivatives for constraint 130 ***/

	J[333] = 1.;
	J[388] = 5.;

   /*** derivatives for constraint 131 ***/

	J[340] = 1.;
	J[389] = -5.;

   /*** derivatives for constraint 132 ***/

	J[343] = 1.;
	J[390] = 5.;

   /*** derivatives for constraint 133 ***/

	J[301] = 1.;

   /*** derivatives for constraint 134 ***/

	J[344] = 1.;

   /*** derivatives for constraint 135 ***/

	J[37] = -1.;
	J[190] = 1.;
	J[302] = -1.;

   /*** derivatives for constraint 136 ***/

	J[55] = -1.;
	J[213] = 1.;
	J[345] = -1.;

   /*** derivatives for constraint 137 ***/

	J[38] = 1.;
	J[126] = -1.03497516021379;

   /*** derivatives for constraint 138 ***/

	J[127] = 1.03497516021379;
	J[303] = 1.;

   /*** derivatives for constraint 139 ***/

	J[56] = 1.;
	J[128] = -0.710483612536911;

   /*** derivatives for constraint 140 ***/

	J[129] = 0.710483612536911;
	J[346] = 1.;

   /*** derivatives for constraint 141 ***/

	J[322] = 1.;

   /*** derivatives for constraint 142 ***/

	J[347] = 1.;

   /*** derivatives for constraint 143 ***/

	J[46] = -1.;
	J[200] = 1.;
	J[323] = -1.;

   /*** derivatives for constraint 144 ***/

	J[58] = -1.;
	J[214] = 1.;
	J[348] = -1.;

   /*** derivatives for constraint 145 ***/

	J[47] = 1.;
	J[133] = -1.10947836929589;

   /*** derivatives for constraint 146 ***/

	J[134] = 1.10947836929589;
	J[324] = 1.;

   /*** derivatives for constraint 147 ***/

	J[59] = 1.;
	J[135] = -0.522508489006913;

   /*** derivatives for constraint 148 ***/

	J[136] = 0.522508489006913;
	J[349] = 1.;

   /*** derivatives for constraint 149 ***/

	J[325] = 1.;

   /*** derivatives for constraint 150 ***/

	J[334] = 1.;

   /*** derivatives for constraint 151 ***/

	J[350] = 1.;

   /*** derivatives for constraint 152 ***/

	J[49] = -1.;
	J[202] = 1.;
	J[326] = -1.;

   /*** derivatives for constraint 153 ***/

	J[52] = -1.;
	J[206] = 1.;
	J[335] = -1.;

   /*** derivatives for constraint 154 ***/

	J[62] = -1.;
	J[215] = 1.;
	J[351] = -1.;

   /*** derivatives for constraint 155 ***/

	J[50] = 1.;
	J[141] = -1.10947836929589;

   /*** derivatives for constraint 156 ***/

	J[142] = 1.10947836929589;
	J[327] = 1.;

   /*** derivatives for constraint 157 ***/

	J[53] = 1.;
	J[143] = -8.15;

   /*** derivatives for constraint 158 ***/

	J[144] = 8.15;
	J[336] = 1.;

   /*** derivatives for constraint 159 ***/

	J[63] = 1.;
	J[145] = -1.43894002153683;

   /*** derivatives for constraint 160 ***/

	J[146] = 1.43894002153683;
	J[352] = 1.;

   /*** derivatives for constraint 161 ***/

	J[69] = 1.;
	J[78] = 1.;

   /*** derivatives for constraint 162 ***/

	J[95] = 1.;
	J[104] = 1.;
	J[357] = -1.;

   /*** derivatives for constraint 163 ***/

	J[96] = -1.;
	J[391] = 1.;

   /*** derivatives for constraint 164 ***/

	J[105] = -1.;
	J[130] = 1.;

   /*** derivatives for constraint 165 ***/

	J[87] = -1.;
	J[113] = 1.;

   /*** derivatives for constraint 166 ***/

	J[114] = -1.;
	J[137] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 167 ***/

	J[123] = 1.;
	J[367] = -1.;
	J[376] = 1.;
	J[383] = 1.;

   /*** derivatives for constraint 168 ***/

	J[148] = 1.;
	J[377] = -1.;

   /*** derivatives for constraint 169 ***/

	J[70] = 1.;
	J[79] = 1.;
	J[358] = -1.;

   /*** derivatives for constraint 170 ***/

	J[71] = 1.;
	J[80] = 1.;
	J[88] = -1.;

   /*** derivatives for constraint 171 ***/

	J[72] = 1.;
	J[81] = 1.;
	J[368] = -1.;

   /*** derivatives for constraint 172 ***/

	J[97] = -1.;
	J[359] = 1.;

   /*** derivatives for constraint 173 ***/

	J[106] = -1.;
	J[360] = 1.;

   /*** derivatives for constraint 174 ***/

	J[89] = 1.;
	J[115] = -1.;

   /*** derivatives for constraint 175 ***/

	J[369] = 1.;
	J[378] = -1.;

   /*** derivatives for constraint 176 ***/

	J[370] = 1.;
	J[384] = -1.;

   /*** derivatives for constraint 177 ***/

	J[124] = -1.;
	J[371] = 1.;

   /*** derivatives for constraint 178 ***/

	J[98] = 1.;
	J[392] = -1.;

   /*** derivatives for constraint 179 ***/

	J[107] = 1.;
	J[131] = -1.;

   /*** derivatives for constraint 180 ***/

	J[116] = 1.;
	J[138] = -1.;

   /*** derivatives for constraint 181 ***/

	J[117] = 1.;
	J[149] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
