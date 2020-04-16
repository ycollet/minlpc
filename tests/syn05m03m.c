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
 fint syn05m03m_auxcom_[1] = { 9 /* nlc */ };
 fint syn05m03m_funcom_[511] = {
	90 /* nvar */,
	1 /* nobj */,
	174 /* ncon */,
	414 /* nzc */,
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
	29,
	30,
	31,
	34,
	37,
	40,
	43,
	46,
	49,
	51,
	53,
	55,
	56,
	57,
	58,
	60,
	62,
	64,
	68,
	72,
	76,
	80,
	84,
	88,
	91,
	94,
	97,
	100,
	103,
	106,
	108,
	110,
	112,
	117,
	122,
	127,
	129,
	131,
	133,
	135,
	137,
	139,
	141,
	143,
	145,
	147,
	149,
	151,
	153,
	155,
	157,
	169,
	180,
	190,
	202,
	213,
	223,
	233,
	242,
	250,
	259,
	267,
	274,
	287,
	299,
	310,
	317,
	324,
	331,
	338,
	345,
	352,
	359,
	366,
	373,
	380,
	387,
	394,
	401,
	408,
	415,

	/* rownos */
	1,
	10,
	22,
	2,
	11,
	23,
	3,
	12,
	24,
	4,
	10,
	28,
	5,
	11,
	29,
	6,
	12,
	30,
	7,
	19,
	46,
	8,
	20,
	47,
	9,
	21,
	48,
	10,
	11,
	12,
	1,
	13,
	25,
	2,
	14,
	26,
	3,
	15,
	27,
	4,
	13,
	31,
	5,
	14,
	32,
	6,
	15,
	33,
	13,
	16,
	14,
	17,
	15,
	18,
	16,
	17,
	18,
	16,
	19,
	17,
	20,
	18,
	21,
	19,
	34,
	37,
	40,
	20,
	35,
	38,
	41,
	21,
	36,
	39,
	42,
	19,
	52,
	55,
	64,
	20,
	53,
	56,
	65,
	21,
	54,
	57,
	66,
	58,
	61,
	67,
	59,
	62,
	68,
	60,
	63,
	69,
	34,
	37,
	43,
	35,
	38,
	44,
	36,
	39,
	45,
	7,
	49,
	8,
	50,
	9,
	51,
	52,
	55,
	58,
	61,
	70,
	53,
	56,
	59,
	62,
	71,
	54,
	57,
	60,
	63,
	72,
	73,
	88,
	74,
	89,
	75,
	90,
	76,
	91,
	77,
	92,
	78,
	93,
	79,
	94,
	80,
	95,
	81,
	96,
	82,
	97,
	83,
	98,
	84,
	99,
	85,
	100,
	86,
	101,
	87,
	102,
	1,
	22,
	25,
	103,
	104,
	148,
	149,
	150,
	163,
	166,
	169,
	172,
	2,
	23,
	26,
	103,
	105,
	149,
	150,
	164,
	167,
	170,
	173,
	3,
	24,
	27,
	104,
	105,
	150,
	165,
	168,
	171,
	174,
	4,
	28,
	31,
	106,
	107,
	151,
	152,
	153,
	163,
	166,
	169,
	172,
	5,
	29,
	32,
	106,
	108,
	152,
	153,
	164,
	167,
	170,
	173,
	6,
	30,
	33,
	107,
	108,
	153,
	165,
	168,
	171,
	174,
	34,
	37,
	40,
	43,
	109,
	110,
	154,
	155,
	156,
	166,
	35,
	38,
	41,
	44,
	109,
	111,
	155,
	156,
	167,
	36,
	39,
	42,
	45,
	110,
	111,
	156,
	168,
	7,
	46,
	49,
	112,
	113,
	157,
	158,
	159,
	169,
	8,
	47,
	50,
	112,
	114,
	158,
	159,
	170,
	9,
	48,
	51,
	113,
	114,
	159,
	171,
	52,
	55,
	58,
	61,
	64,
	67,
	70,
	115,
	116,
	160,
	161,
	162,
	172,
	53,
	56,
	59,
	62,
	65,
	68,
	71,
	115,
	117,
	161,
	162,
	173,
	54,
	57,
	60,
	63,
	66,
	69,
	72,
	116,
	117,
	162,
	174,
	73,
	88,
	118,
	119,
	120,
	122,
	148,
	74,
	89,
	118,
	120,
	121,
	123,
	149,
	75,
	90,
	119,
	121,
	122,
	123,
	150,
	76,
	91,
	124,
	125,
	126,
	128,
	151,
	77,
	92,
	124,
	126,
	127,
	129,
	152,
	78,
	93,
	125,
	127,
	128,
	129,
	153,
	79,
	94,
	130,
	131,
	132,
	134,
	154,
	80,
	95,
	130,
	132,
	133,
	135,
	155,
	81,
	96,
	131,
	133,
	134,
	135,
	156,
	82,
	97,
	136,
	137,
	138,
	140,
	157,
	83,
	98,
	136,
	138,
	139,
	141,
	158,
	84,
	99,
	137,
	139,
	140,
	141,
	159,
	85,
	100,
	142,
	143,
	144,
	146,
	160,
	86,
	101,
	142,
	144,
	145,
	147,
	161,
	87,
	102,
	143,
	145,
	146,
	147,
	162 };

 real syn05m03m_boundc_[1+180+348] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		-1.,
		1.7e308,
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
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
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
		1.,
		1.,
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
		1.7e308};

 real syn05m03m_x0comn_[90] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn05m03m_pd[15];
static real syn05m03m_old_x[90];
static int syn05m03m_xkind = -1;

 static int
syn05m03m_xcheck(real *x)
{
	real *x1 = syn05m03m_old_x, *xe = x + 90;
	errno = 0;
	if (syn05m03m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn05m03m_xkind = 0;
	return 1;
	}
 real
syn05m03m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn05m03m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[9];
	rv += -x[10];
	rv += -x[11];
	rv += 5.*x[21];
	rv += 10.*x[22];
	rv += 5.*x[23];
	rv += -2.*x[33];
	rv += -x[34];
	rv += -2.*x[35];
	rv += 80.*x[36];
	rv += 90.*x[37];
	rv += 120.*x[38];
	rv += 285.*x[39];
	rv += 390.*x[40];
	rv += 350.*x[41];
	rv += 290.*x[42];
	rv += 405.*x[43];
	rv += 190.*x[44];
	rv += -5.*x[75];
	rv += -4.*x[76];
	rv += -6.*x[77];
	rv += -8.*x[78];
	rv += -7.*x[79];
	rv += -6.*x[80];
	rv += -6.*x[81];
	rv += -9.*x[82];
	rv += -4.*x[83];
	rv += -10.*x[84];
	rv += -9.*x[85];
	rv += -5.*x[86];
	rv += -6.*x[87];
	rv += -10.*x[88];
	rv += -6.*x[89];
	;}

	if (wantfg & 2) {
	g[9] = -1.;
	g[10] = -1.;
	g[11] = -1.;
	g[21] = 5.;
	g[22] = 10.;
	g[23] = 5.;
	g[33] = -2.;
	g[34] = -1.;
	g[35] = -2.;
	g[36] = 80.;
	g[37] = 90.;
	g[38] = 120.;
	g[39] = 285.;
	g[40] = 390.;
	g[41] = 350.;
	g[42] = 290.;
	g[43] = 405.;
	g[44] = 190.;
	g[75] = -5.;
	g[76] = -4.;
	g[77] = -6.;
	g[78] = -8.;
	g[79] = -7.;
	g[80] = -6.;
	g[81] = -6.;
	g[82] = -9.;
	g[83] = -4.;
	g[84] = -10.;
	g[85] = -9.;
	g[86] = -5.;
	g[87] = -6.;
	g[88] = -10.;
	g[89] = -6.;
	}

	return rv;
}

 void
syn05m03m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (syn05m03m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[12];
	t1 += x[60];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[1] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[13];
	t1 += x[61];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[2] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[14];
	t1 += x[62];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] + 1.;
	syn05m03m_pd[3] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[4] = 1. / v[0];
	v[0] = -1.2 * syn05m03m_pd[3];
	t1 = v[0] + x[15];
	t1 += x[63];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] + 1.;
	syn05m03m_pd[5] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[6] = 1. / v[0];
	v[0] = -1.2 * syn05m03m_pd[5];
	t1 = v[0] + x[16];
	t1 += x[64];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[5] + 1.;
	syn05m03m_pd[7] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[8] = 1. / v[0];
	v[0] = -1.2 * syn05m03m_pd[7];
	t1 = v[0] + x[17];
	t1 += x[65];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[6] + 1.;
	syn05m03m_pd[9] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[10] = 1. / v[0];
	v[0] = -1.5 * syn05m03m_pd[9];
	t1 = v[0] + x[39];
	t1 += x[69];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[7] + 1.;
	syn05m03m_pd[11] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[12] = 1. / v[0];
	v[0] = -1.5 * syn05m03m_pd[11];
	t1 = v[0] + x[40];
	t1 += x[70];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[8] + 1.;
	syn05m03m_pd[13] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m03m_pd[14] = 1. / v[0];
	v[0] = -1.5 * syn05m03m_pd[13];
	t1 = v[0] + x[41];
	t1 += x[71];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[0];
	t1 += -x[3];
	t1 += x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[1];
	t1 += -x[4];
	t1 += x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[2];
	t1 += -x[5];
	t1 += x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[12];
	t1 += -x[15];
	t1 += x[18];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[13];
	t1 += -x[16];
	t1 += x[19];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[14];
	t1 += -x[17];
	t1 += x[20];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[18];
	t1 += -x[21];
	t1 += -x[24];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[19];
	t1 += -x[22];
	t1 += -x[25];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[20];
	t1 += -x[23];
	t1 += -x[26];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[6];
	t1 += x[24];
	t1 += -x[27];
	t1 += -x[30];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[7];
	t1 += x[25];
	t1 += -x[28];
	t1 += -x[31];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[8];
	t1 += x[26];
	t1 += -x[29];
	t1 += -x[32];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[0];
	t1 += -40.*x[60];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[1];
	t1 += -40.*x[61];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[2];
	t1 += -40.*x[62];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[12];
	t1 += -3.71357206670431*x[60];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[13];
	t1 += -3.71357206670431*x[61];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[14];
	t1 += -3.71357206670431*x[62];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[3];
	t1 += -40.*x[63];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[4];
	t1 += -40.*x[64];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[5];
	t1 += -40.*x[65];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[15];
	t1 += -4.45628648004517*x[63];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[16];
	t1 += -4.45628648004517*x[64];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[17];
	t1 += -4.45628648004517*x[65];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -0.75*x[27];
	t1 += x[36];
	t1 += x[66];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -0.75*x[28];
	t1 += x[37];
	t1 += x[67];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -0.75*x[29];
	t1 += x[38];
	t1 += x[68];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -0.75*x[27];
	t1 += x[36];
	t1 += -x[66];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -0.75*x[28];
	t1 += x[37];
	t1 += -x[67];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -0.75*x[29];
	t1 += x[38];
	t1 += -x[68];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[27];
	t1 += -4.45628648004517*x[66];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[28];
	t1 += -4.45628648004517*x[67];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[29];
	t1 += -4.45628648004517*x[68];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[36];
	t1 += -3.34221486003388*x[66];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[37];
	t1 += -3.34221486003388*x[67];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[38];
	t1 += -3.34221486003388*x[68];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[6];
	t1 += -4.45628648004517*x[69];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[7];
	t1 += -4.45628648004517*x[70];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[8];
	t1 += -4.45628648004517*x[71];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[39];
	t1 += -2.54515263975353*x[69];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[40];
	t1 += -2.54515263975353*x[70];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[41];
	t1 += -2.54515263975353*x[71];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[30];
	t1 += x[42];
	t1 += x[72];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[31];
	t1 += x[43];
	t1 += x[73];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[32];
	t1 += x[44];
	t1 += x[74];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[30];
	t1 += x[42];
	t1 += -x[72];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[31];
	t1 += x[43];
	t1 += -x[73];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[32];
	t1 += x[44];
	t1 += -x[74];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -0.5*x[33];
	t1 += x[42];
	t1 += x[72];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -0.5*x[34];
	t1 += x[43];
	t1 += x[73];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -0.5*x[35];
	t1 += x[44];
	t1 += x[74];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -0.5*x[33];
	t1 += x[42];
	t1 += -x[72];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -0.5*x[34];
	t1 += x[43];
	t1 += -x[73];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -0.5*x[35];
	t1 += x[44];
	t1 += -x[74];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[30];
	t1 += -4.45628648004517*x[72];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[31];
	t1 += -4.45628648004517*x[73];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[32];
	t1 += -4.45628648004517*x[74];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[33];
	t1 += -30.*x[72];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[34];
	t1 += -30.*x[73];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[35];
	t1 += -30.*x[74];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[42];
	t1 += -15.*x[72];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[43];
	t1 += -15.*x[73];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[44];
	t1 += -15.*x[74];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[45];
	t1 += 5.*x[75];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[46];
	t1 += 4.*x[76];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[47];
	t1 += 6.*x[77];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[48];
	t1 += 8.*x[78];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[49];
	t1 += 7.*x[79];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[50];
	t1 += 6.*x[80];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[51];
	t1 += 6.*x[81];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[52];
	t1 += 9.*x[82];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[53];
	t1 += 4.*x[83];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[54];
	t1 += 10.*x[84];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[55];
	t1 += 9.*x[85];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[56];
	t1 += 5.*x[86];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[57];
	t1 += 6.*x[87];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[58];
	t1 += 10.*x[88];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[59];
	t1 += 6.*x[89];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[45];
	t1 += 5.*x[75];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[46];
	t1 += 4.*x[76];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[47];
	t1 += 6.*x[77];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[48];
	t1 += 8.*x[78];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[49];
	t1 += 7.*x[79];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[50];
	t1 += 6.*x[80];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[51];
	t1 += 6.*x[81];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[52];
	t1 += 9.*x[82];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[53];
	t1 += 4.*x[83];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[54];
	t1 += 10.*x[84];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[55];
	t1 += 9.*x[85];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[56];
	t1 += 5.*x[86];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[57];
	t1 += 6.*x[87];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[58];
	t1 += 10.*x[88];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[59];
	t1 += 6.*x[89];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[60];
	t1 += -x[61];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[60];
	t1 += -x[62];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[61];
	t1 += -x[62];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[63];
	t1 += -x[64];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[63];
	t1 += -x[65];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[64];
	t1 += -x[65];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[66];
	t1 += -x[67];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[66];
	t1 += -x[68];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[67];
	t1 += -x[68];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[69];
	t1 += -x[70];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[69];
	t1 += -x[71];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[70];
	t1 += -x[71];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[72];
	t1 += -x[73];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[72];
	t1 += -x[74];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[73];
	t1 += -x[74];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[75];
	t1 += x[76];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[75];
	t1 += x[77];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = x[75];
	t1 += x[76];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[76];
	t1 += x[77];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[75];
	t1 += x[77];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[76];
	t1 += x[77];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[78];
	t1 += x[79];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[78];
	t1 += x[80];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[78];
	t1 += x[79];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[79];
	t1 += x[80];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[78];
	t1 += x[80];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[79];
	t1 += x[80];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[81];
	t1 += x[82];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[81];
	t1 += x[83];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[81];
	t1 += x[82];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[82];
	t1 += x[83];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[81];
	t1 += x[83];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = x[82];
	t1 += x[83];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = x[84];
	t1 += x[85];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = x[84];
	t1 += x[86];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = x[84];
	t1 += x[85];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = x[85];
	t1 += x[86];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = x[84];
	t1 += x[86];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = x[85];
	t1 += x[86];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = x[87];
	t1 += x[88];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = x[87];
	t1 += x[89];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = x[87];
	t1 += x[88];
	c[143] = t1;

  /***  constraint 145  ***/

	t1 = x[88];
	t1 += x[89];
	c[144] = t1;

  /***  constraint 146  ***/

	t1 = x[87];
	t1 += x[89];
	c[145] = t1;

  /***  constraint 147  ***/

	t1 = x[88];
	t1 += x[89];
	c[146] = t1;

  /***  constraint 148  ***/

	t1 = x[60];
	t1 += -x[75];
	c[147] = t1;

  /***  constraint 149  ***/

	t1 = -x[60];
	t1 += x[61];
	t1 += -x[76];
	c[148] = t1;

  /***  constraint 150  ***/

	t1 = -x[60];
	t1 += -x[61];
	t1 += x[62];
	t1 += -x[77];
	c[149] = t1;

  /***  constraint 151  ***/

	t1 = x[63];
	t1 += -x[78];
	c[150] = t1;

  /***  constraint 152  ***/

	t1 = -x[63];
	t1 += x[64];
	t1 += -x[79];
	c[151] = t1;

  /***  constraint 153  ***/

	t1 = -x[63];
	t1 += -x[64];
	t1 += x[65];
	t1 += -x[80];
	c[152] = t1;

  /***  constraint 154  ***/

	t1 = x[66];
	t1 += -x[81];
	c[153] = t1;

  /***  constraint 155  ***/

	t1 = -x[66];
	t1 += x[67];
	t1 += -x[82];
	c[154] = t1;

  /***  constraint 156  ***/

	t1 = -x[66];
	t1 += -x[67];
	t1 += x[68];
	t1 += -x[83];
	c[155] = t1;

  /***  constraint 157  ***/

	t1 = x[69];
	t1 += -x[84];
	c[156] = t1;

  /***  constraint 158  ***/

	t1 = -x[69];
	t1 += x[70];
	t1 += -x[85];
	c[157] = t1;

  /***  constraint 159  ***/

	t1 = -x[69];
	t1 += -x[70];
	t1 += x[71];
	t1 += -x[86];
	c[158] = t1;

  /***  constraint 160  ***/

	t1 = x[72];
	t1 += -x[87];
	c[159] = t1;

  /***  constraint 161  ***/

	t1 = -x[72];
	t1 += x[73];
	t1 += -x[88];
	c[160] = t1;

  /***  constraint 162  ***/

	t1 = -x[72];
	t1 += -x[73];
	t1 += x[74];
	t1 += -x[89];
	c[161] = t1;

  /***  constraint 163  ***/

	t1 = x[60];
	t1 += x[63];
	c[162] = t1;

  /***  constraint 164  ***/

	t1 = x[61];
	t1 += x[64];
	c[163] = t1;

  /***  constraint 165  ***/

	t1 = x[62];
	t1 += x[65];
	c[164] = t1;

  /***  constraint 166  ***/

	t1 = x[60];
	t1 += x[63];
	t1 += -x[66];
	c[165] = t1;

  /***  constraint 167  ***/

	t1 = x[61];
	t1 += x[64];
	t1 += -x[67];
	c[166] = t1;

  /***  constraint 168  ***/

	t1 = x[62];
	t1 += x[65];
	t1 += -x[68];
	c[167] = t1;

  /***  constraint 169  ***/

	t1 = x[60];
	t1 += x[63];
	t1 += -x[69];
	c[168] = t1;

  /***  constraint 170  ***/

	t1 = x[61];
	t1 += x[64];
	t1 += -x[70];
	c[169] = t1;

  /***  constraint 171  ***/

	t1 = x[62];
	t1 += x[65];
	t1 += -x[71];
	c[170] = t1;

  /***  constraint 172  ***/

	t1 = x[60];
	t1 += x[63];
	t1 += -x[72];
	c[171] = t1;

  /***  constraint 173  ***/

	t1 = x[61];
	t1 += x[64];
	t1 += -x[73];
	c[172] = t1;

  /***  constraint 174  ***/

	t1 = x[62];
	t1 += x[65];
	t1 += -x[74];
	c[173] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -syn05m03m_pd[0];
	J[30] = 1.;
	J[156] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = -syn05m03m_pd[1];
	J[33] = 1.;
	J[168] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -syn05m03m_pd[2];
	J[36] = 1.;
	J[179] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -1.2*syn05m03m_pd[4];
	J[9] = dv[0];
	J[39] = 1.;
	J[189] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -1.2*syn05m03m_pd[6];
	J[12] = dv[0];
	J[42] = 1.;
	J[201] = 1.;

   /*** derivatives for constraint 6 ***/

	dv[0] = -1.2*syn05m03m_pd[8];
	J[15] = dv[0];
	J[45] = 1.;
	J[212] = 1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -1.5*syn05m03m_pd[10];
	J[18] = dv[0];
	J[105] = 1.;
	J[249] = 1.;

   /*** derivatives for constraint 8 ***/

	dv[0] = -1.5*syn05m03m_pd[12];
	J[21] = dv[0];
	J[107] = 1.;
	J[258] = 1.;

   /*** derivatives for constraint 9 ***/

	dv[0] = -1.5*syn05m03m_pd[14];
	J[24] = dv[0];
	J[109] = 1.;
	J[266] = 1.;

   /*** derivatives for constraint 10 ***/

	J[1] = -1.;
	J[10] = -1.;
	J[27] = 1.;

   /*** derivatives for constraint 11 ***/

	J[4] = -1.;
	J[13] = -1.;
	J[28] = 1.;

   /*** derivatives for constraint 12 ***/

	J[7] = -1.;
	J[16] = -1.;
	J[29] = 1.;

   /*** derivatives for constraint 13 ***/

	J[31] = -1.;
	J[40] = -1.;
	J[48] = 1.;

   /*** derivatives for constraint 14 ***/

	J[34] = -1.;
	J[43] = -1.;
	J[50] = 1.;

   /*** derivatives for constraint 15 ***/

	J[37] = -1.;
	J[46] = -1.;
	J[52] = 1.;

   /*** derivatives for constraint 16 ***/

	J[49] = 1.;
	J[54] = -1.;
	J[57] = -1.;

   /*** derivatives for constraint 17 ***/

	J[51] = 1.;
	J[55] = -1.;
	J[59] = -1.;

   /*** derivatives for constraint 18 ***/

	J[53] = 1.;
	J[56] = -1.;
	J[61] = -1.;

   /*** derivatives for constraint 19 ***/

	J[19] = -1.;
	J[58] = 1.;
	J[63] = -1.;
	J[75] = -1.;

   /*** derivatives for constraint 20 ***/

	J[22] = -1.;
	J[60] = 1.;
	J[67] = -1.;
	J[79] = -1.;

   /*** derivatives for constraint 21 ***/

	J[25] = -1.;
	J[62] = 1.;
	J[71] = -1.;
	J[83] = -1.;

   /*** derivatives for constraint 22 ***/

	J[2] = 1.;
	J[157] = -40.;

   /*** derivatives for constraint 23 ***/

	J[5] = 1.;
	J[169] = -40.;

   /*** derivatives for constraint 24 ***/

	J[8] = 1.;
	J[180] = -40.;

   /*** derivatives for constraint 25 ***/

	J[32] = 1.;
	J[158] = -3.71357206670431;

   /*** derivatives for constraint 26 ***/

	J[35] = 1.;
	J[170] = -3.71357206670431;

   /*** derivatives for constraint 27 ***/

	J[38] = 1.;
	J[181] = -3.71357206670431;

   /*** derivatives for constraint 28 ***/

	J[11] = 1.;
	J[190] = -40.;

   /*** derivatives for constraint 29 ***/

	J[14] = 1.;
	J[202] = -40.;

   /*** derivatives for constraint 30 ***/

	J[17] = 1.;
	J[213] = -40.;

   /*** derivatives for constraint 31 ***/

	J[41] = 1.;
	J[191] = -4.45628648004517;

   /*** derivatives for constraint 32 ***/

	J[44] = 1.;
	J[203] = -4.45628648004517;

   /*** derivatives for constraint 33 ***/

	J[47] = 1.;
	J[214] = -4.45628648004517;

   /*** derivatives for constraint 34 ***/

	J[64] = -0.75;
	J[96] = 1.;
	J[222] = 1.;

   /*** derivatives for constraint 35 ***/

	J[68] = -0.75;
	J[99] = 1.;
	J[232] = 1.;

   /*** derivatives for constraint 36 ***/

	J[72] = -0.75;
	J[102] = 1.;
	J[241] = 1.;

   /*** derivatives for constraint 37 ***/

	J[65] = -0.75;
	J[97] = 1.;
	J[223] = -1.;

   /*** derivatives for constraint 38 ***/

	J[69] = -0.75;
	J[100] = 1.;
	J[233] = -1.;

   /*** derivatives for constraint 39 ***/

	J[73] = -0.75;
	J[103] = 1.;
	J[242] = -1.;

   /*** derivatives for constraint 40 ***/

	J[66] = 1.;
	J[224] = -4.45628648004517;

   /*** derivatives for constraint 41 ***/

	J[70] = 1.;
	J[234] = -4.45628648004517;

   /*** derivatives for constraint 42 ***/

	J[74] = 1.;
	J[243] = -4.45628648004517;

   /*** derivatives for constraint 43 ***/

	J[98] = 1.;
	J[225] = -3.34221486003388;

   /*** derivatives for constraint 44 ***/

	J[101] = 1.;
	J[235] = -3.34221486003388;

   /*** derivatives for constraint 45 ***/

	J[104] = 1.;
	J[244] = -3.34221486003388;

   /*** derivatives for constraint 46 ***/

	J[20] = 1.;
	J[250] = -4.45628648004517;

   /*** derivatives for constraint 47 ***/

	J[23] = 1.;
	J[259] = -4.45628648004517;

   /*** derivatives for constraint 48 ***/

	J[26] = 1.;
	J[267] = -4.45628648004517;

   /*** derivatives for constraint 49 ***/

	J[106] = 1.;
	J[251] = -2.54515263975353;

   /*** derivatives for constraint 50 ***/

	J[108] = 1.;
	J[260] = -2.54515263975353;

   /*** derivatives for constraint 51 ***/

	J[110] = 1.;
	J[268] = -2.54515263975353;

   /*** derivatives for constraint 52 ***/

	J[76] = -1.;
	J[111] = 1.;
	J[273] = 1.;

   /*** derivatives for constraint 53 ***/

	J[80] = -1.;
	J[116] = 1.;
	J[286] = 1.;

   /*** derivatives for constraint 54 ***/

	J[84] = -1.;
	J[121] = 1.;
	J[298] = 1.;

   /*** derivatives for constraint 55 ***/

	J[77] = -1.;
	J[112] = 1.;
	J[274] = -1.;

   /*** derivatives for constraint 56 ***/

	J[81] = -1.;
	J[117] = 1.;
	J[287] = -1.;

   /*** derivatives for constraint 57 ***/

	J[85] = -1.;
	J[122] = 1.;
	J[299] = -1.;

   /*** derivatives for constraint 58 ***/

	J[87] = -0.5;
	J[113] = 1.;
	J[275] = 1.;

   /*** derivatives for constraint 59 ***/

	J[90] = -0.5;
	J[118] = 1.;
	J[288] = 1.;

   /*** derivatives for constraint 60 ***/

	J[93] = -0.5;
	J[123] = 1.;
	J[300] = 1.;

   /*** derivatives for constraint 61 ***/

	J[88] = -0.5;
	J[114] = 1.;
	J[276] = -1.;

   /*** derivatives for constraint 62 ***/

	J[91] = -0.5;
	J[119] = 1.;
	J[289] = -1.;

   /*** derivatives for constraint 63 ***/

	J[94] = -0.5;
	J[124] = 1.;
	J[301] = -1.;

   /*** derivatives for constraint 64 ***/

	J[78] = 1.;
	J[277] = -4.45628648004517;

   /*** derivatives for constraint 65 ***/

	J[82] = 1.;
	J[290] = -4.45628648004517;

   /*** derivatives for constraint 66 ***/

	J[86] = 1.;
	J[302] = -4.45628648004517;

   /*** derivatives for constraint 67 ***/

	J[89] = 1.;
	J[278] = -30.;

   /*** derivatives for constraint 68 ***/

	J[92] = 1.;
	J[291] = -30.;

   /*** derivatives for constraint 69 ***/

	J[95] = 1.;
	J[303] = -30.;

   /*** derivatives for constraint 70 ***/

	J[115] = 1.;
	J[279] = -15.;

   /*** derivatives for constraint 71 ***/

	J[120] = 1.;
	J[292] = -15.;

   /*** derivatives for constraint 72 ***/

	J[125] = 1.;
	J[304] = -15.;

   /*** derivatives for constraint 73 ***/

	J[126] = 1.;
	J[309] = 5.;

   /*** derivatives for constraint 74 ***/

	J[128] = 1.;
	J[316] = 4.;

   /*** derivatives for constraint 75 ***/

	J[130] = 1.;
	J[323] = 6.;

   /*** derivatives for constraint 76 ***/

	J[132] = 1.;
	J[330] = 8.;

   /*** derivatives for constraint 77 ***/

	J[134] = 1.;
	J[337] = 7.;

   /*** derivatives for constraint 78 ***/

	J[136] = 1.;
	J[344] = 6.;

   /*** derivatives for constraint 79 ***/

	J[138] = 1.;
	J[351] = 6.;

   /*** derivatives for constraint 80 ***/

	J[140] = 1.;
	J[358] = 9.;

   /*** derivatives for constraint 81 ***/

	J[142] = 1.;
	J[365] = 4.;

   /*** derivatives for constraint 82 ***/

	J[144] = 1.;
	J[372] = 10.;

   /*** derivatives for constraint 83 ***/

	J[146] = 1.;
	J[379] = 9.;

   /*** derivatives for constraint 84 ***/

	J[148] = 1.;
	J[386] = 5.;

   /*** derivatives for constraint 85 ***/

	J[150] = 1.;
	J[393] = 6.;

   /*** derivatives for constraint 86 ***/

	J[152] = 1.;
	J[400] = 10.;

   /*** derivatives for constraint 87 ***/

	J[154] = 1.;
	J[407] = 6.;

   /*** derivatives for constraint 88 ***/

	J[127] = 1.;
	J[310] = 5.;

   /*** derivatives for constraint 89 ***/

	J[129] = 1.;
	J[317] = 4.;

   /*** derivatives for constraint 90 ***/

	J[131] = 1.;
	J[324] = 6.;

   /*** derivatives for constraint 91 ***/

	J[133] = 1.;
	J[331] = 8.;

   /*** derivatives for constraint 92 ***/

	J[135] = 1.;
	J[338] = 7.;

   /*** derivatives for constraint 93 ***/

	J[137] = 1.;
	J[345] = 6.;

   /*** derivatives for constraint 94 ***/

	J[139] = 1.;
	J[352] = 6.;

   /*** derivatives for constraint 95 ***/

	J[141] = 1.;
	J[359] = 9.;

   /*** derivatives for constraint 96 ***/

	J[143] = 1.;
	J[366] = 4.;

   /*** derivatives for constraint 97 ***/

	J[145] = 1.;
	J[373] = 10.;

   /*** derivatives for constraint 98 ***/

	J[147] = 1.;
	J[380] = 9.;

   /*** derivatives for constraint 99 ***/

	J[149] = 1.;
	J[387] = 5.;

   /*** derivatives for constraint 100 ***/

	J[151] = 1.;
	J[394] = 6.;

   /*** derivatives for constraint 101 ***/

	J[153] = 1.;
	J[401] = 10.;

   /*** derivatives for constraint 102 ***/

	J[155] = 1.;
	J[408] = 6.;

   /*** derivatives for constraint 103 ***/

	J[159] = 1.;
	J[171] = -1.;

   /*** derivatives for constraint 104 ***/

	J[160] = 1.;
	J[182] = -1.;

   /*** derivatives for constraint 105 ***/

	J[172] = 1.;
	J[183] = -1.;

   /*** derivatives for constraint 106 ***/

	J[192] = 1.;
	J[204] = -1.;

   /*** derivatives for constraint 107 ***/

	J[193] = 1.;
	J[215] = -1.;

   /*** derivatives for constraint 108 ***/

	J[205] = 1.;
	J[216] = -1.;

   /*** derivatives for constraint 109 ***/

	J[226] = 1.;
	J[236] = -1.;

   /*** derivatives for constraint 110 ***/

	J[227] = 1.;
	J[245] = -1.;

   /*** derivatives for constraint 111 ***/

	J[237] = 1.;
	J[246] = -1.;

   /*** derivatives for constraint 112 ***/

	J[252] = 1.;
	J[261] = -1.;

   /*** derivatives for constraint 113 ***/

	J[253] = 1.;
	J[269] = -1.;

   /*** derivatives for constraint 114 ***/

	J[262] = 1.;
	J[270] = -1.;

   /*** derivatives for constraint 115 ***/

	J[280] = 1.;
	J[293] = -1.;

   /*** derivatives for constraint 116 ***/

	J[281] = 1.;
	J[305] = -1.;

   /*** derivatives for constraint 117 ***/

	J[294] = 1.;
	J[306] = -1.;

   /*** derivatives for constraint 118 ***/

	J[311] = 1.;
	J[318] = 1.;

   /*** derivatives for constraint 119 ***/

	J[312] = 1.;
	J[325] = 1.;

   /*** derivatives for constraint 120 ***/

	J[313] = 1.;
	J[319] = 1.;

   /*** derivatives for constraint 121 ***/

	J[320] = 1.;
	J[326] = 1.;

   /*** derivatives for constraint 122 ***/

	J[314] = 1.;
	J[327] = 1.;

   /*** derivatives for constraint 123 ***/

	J[321] = 1.;
	J[328] = 1.;

   /*** derivatives for constraint 124 ***/

	J[332] = 1.;
	J[339] = 1.;

   /*** derivatives for constraint 125 ***/

	J[333] = 1.;
	J[346] = 1.;

   /*** derivatives for constraint 126 ***/

	J[334] = 1.;
	J[340] = 1.;

   /*** derivatives for constraint 127 ***/

	J[341] = 1.;
	J[347] = 1.;

   /*** derivatives for constraint 128 ***/

	J[335] = 1.;
	J[348] = 1.;

   /*** derivatives for constraint 129 ***/

	J[342] = 1.;
	J[349] = 1.;

   /*** derivatives for constraint 130 ***/

	J[353] = 1.;
	J[360] = 1.;

   /*** derivatives for constraint 131 ***/

	J[354] = 1.;
	J[367] = 1.;

   /*** derivatives for constraint 132 ***/

	J[355] = 1.;
	J[361] = 1.;

   /*** derivatives for constraint 133 ***/

	J[362] = 1.;
	J[368] = 1.;

   /*** derivatives for constraint 134 ***/

	J[356] = 1.;
	J[369] = 1.;

   /*** derivatives for constraint 135 ***/

	J[363] = 1.;
	J[370] = 1.;

   /*** derivatives for constraint 136 ***/

	J[374] = 1.;
	J[381] = 1.;

   /*** derivatives for constraint 137 ***/

	J[375] = 1.;
	J[388] = 1.;

   /*** derivatives for constraint 138 ***/

	J[376] = 1.;
	J[382] = 1.;

   /*** derivatives for constraint 139 ***/

	J[383] = 1.;
	J[389] = 1.;

   /*** derivatives for constraint 140 ***/

	J[377] = 1.;
	J[390] = 1.;

   /*** derivatives for constraint 141 ***/

	J[384] = 1.;
	J[391] = 1.;

   /*** derivatives for constraint 142 ***/

	J[395] = 1.;
	J[402] = 1.;

   /*** derivatives for constraint 143 ***/

	J[396] = 1.;
	J[409] = 1.;

   /*** derivatives for constraint 144 ***/

	J[397] = 1.;
	J[403] = 1.;

   /*** derivatives for constraint 145 ***/

	J[404] = 1.;
	J[410] = 1.;

   /*** derivatives for constraint 146 ***/

	J[398] = 1.;
	J[411] = 1.;

   /*** derivatives for constraint 147 ***/

	J[405] = 1.;
	J[412] = 1.;

   /*** derivatives for constraint 148 ***/

	J[161] = 1.;
	J[315] = -1.;

   /*** derivatives for constraint 149 ***/

	J[162] = -1.;
	J[173] = 1.;
	J[322] = -1.;

   /*** derivatives for constraint 150 ***/

	J[163] = -1.;
	J[174] = -1.;
	J[184] = 1.;
	J[329] = -1.;

   /*** derivatives for constraint 151 ***/

	J[194] = 1.;
	J[336] = -1.;

   /*** derivatives for constraint 152 ***/

	J[195] = -1.;
	J[206] = 1.;
	J[343] = -1.;

   /*** derivatives for constraint 153 ***/

	J[196] = -1.;
	J[207] = -1.;
	J[217] = 1.;
	J[350] = -1.;

   /*** derivatives for constraint 154 ***/

	J[228] = 1.;
	J[357] = -1.;

   /*** derivatives for constraint 155 ***/

	J[229] = -1.;
	J[238] = 1.;
	J[364] = -1.;

   /*** derivatives for constraint 156 ***/

	J[230] = -1.;
	J[239] = -1.;
	J[247] = 1.;
	J[371] = -1.;

   /*** derivatives for constraint 157 ***/

	J[254] = 1.;
	J[378] = -1.;

   /*** derivatives for constraint 158 ***/

	J[255] = -1.;
	J[263] = 1.;
	J[385] = -1.;

   /*** derivatives for constraint 159 ***/

	J[256] = -1.;
	J[264] = -1.;
	J[271] = 1.;
	J[392] = -1.;

   /*** derivatives for constraint 160 ***/

	J[282] = 1.;
	J[399] = -1.;

   /*** derivatives for constraint 161 ***/

	J[283] = -1.;
	J[295] = 1.;
	J[406] = -1.;

   /*** derivatives for constraint 162 ***/

	J[284] = -1.;
	J[296] = -1.;
	J[307] = 1.;
	J[413] = -1.;

   /*** derivatives for constraint 163 ***/

	J[164] = 1.;
	J[197] = 1.;

   /*** derivatives for constraint 164 ***/

	J[175] = 1.;
	J[208] = 1.;

   /*** derivatives for constraint 165 ***/

	J[185] = 1.;
	J[218] = 1.;

   /*** derivatives for constraint 166 ***/

	J[165] = 1.;
	J[198] = 1.;
	J[231] = -1.;

   /*** derivatives for constraint 167 ***/

	J[176] = 1.;
	J[209] = 1.;
	J[240] = -1.;

   /*** derivatives for constraint 168 ***/

	J[186] = 1.;
	J[219] = 1.;
	J[248] = -1.;

   /*** derivatives for constraint 169 ***/

	J[166] = 1.;
	J[199] = 1.;
	J[257] = -1.;

   /*** derivatives for constraint 170 ***/

	J[177] = 1.;
	J[210] = 1.;
	J[265] = -1.;

   /*** derivatives for constraint 171 ***/

	J[187] = 1.;
	J[220] = 1.;
	J[272] = -1.;

   /*** derivatives for constraint 172 ***/

	J[167] = 1.;
	J[200] = 1.;
	J[285] = -1.;

   /*** derivatives for constraint 173 ***/

	J[178] = 1.;
	J[211] = 1.;
	J[297] = -1.;

   /*** derivatives for constraint 174 ***/

	J[188] = 1.;
	J[221] = 1.;
	J[308] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
