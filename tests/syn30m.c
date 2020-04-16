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
 fint syn30m_auxcom_[1] = { 20 /* nlc */ };
 fint syn30m_funcom_[522] = {
	100 /* nvar */,
	1 /* nobj */,
	167 /* ncon */,
	415 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	4,
	7,
	10,
	14,
	17,
	20,
	23,
	27,
	30,
	33,
	36,
	39,
	42,
	45,
	48,
	51,
	54,
	58,
	61,
	64,
	65,
	68,
	71,
	73,
	74,
	76,
	80,
	84,
	87,
	91,
	97,
	101,
	105,
	110,
	113,
	117,
	121,
	124,
	127,
	128,
	132,
	136,
	141,
	143,
	145,
	148,
	151,
	154,
	156,
	158,
	161,
	163,
	166,
	169,
	171,
	172,
	174,
	178,
	182,
	185,
	189,
	195,
	199,
	203,
	204,
	206,
	208,
	210,
	213,
	216,
	223,
	230,
	238,
	244,
	256,
	263,
	270,
	278,
	285,
	294,
	303,
	312,
	317,
	322,
	330,
	336,
	342,
	347,
	352,
	360,
	365,
	370,
	377,
	382,
	391,
	396,
	401,
	406,
	411,
	416,

	/* rownos */
	1,
	21,
	38,
	2,
	21,
	40,
	3,
	24,
	46,
	3,
	6,
	47,
	59,
	4,
	25,
	55,
	5,
	25,
	57,
	7,
	26,
	69,
	5,
	8,
	58,
	78,
	9,
	27,
	80,
	10,
	27,
	82,
	11,
	28,
	83,
	12,
	30,
	93,
	13,
	30,
	95,
	14,
	30,
	97,
	15,
	32,
	99,
	16,
	32,
	101,
	17,
	35,
	107,
	17,
	20,
	108,
	120,
	18,
	36,
	116,
	19,
	36,
	118,
	21,
	1,
	22,
	39,
	2,
	22,
	41,
	22,
	23,
	23,
	23,
	24,
	24,
	42,
	43,
	44,
	24,
	48,
	49,
	52,
	50,
	51,
	53,
	25,
	42,
	43,
	45,
	26,
	48,
	49,
	50,
	51,
	54,
	26,
	61,
	62,
	63,
	26,
	65,
	66,
	67,
	4,
	56,
	71,
	72,
	75,
	6,
	27,
	60,
	28,
	61,
	62,
	64,
	29,
	65,
	66,
	68,
	7,
	30,
	70,
	73,
	74,
	76,
	28,
	29,
	85,
	86,
	87,
	29,
	89,
	90,
	91,
	71,
	72,
	73,
	74,
	77,
	8,
	79,
	9,
	81,
	10,
	11,
	84,
	85,
	86,
	88,
	89,
	90,
	92,
	12,
	94,
	13,
	96,
	14,
	31,
	98,
	31,
	32,
	15,
	33,
	100,
	16,
	33,
	102,
	33,
	34,
	34,
	34,
	35,
	35,
	103,
	104,
	105,
	35,
	109,
	110,
	113,
	111,
	112,
	114,
	36,
	103,
	104,
	106,
	37,
	109,
	110,
	111,
	112,
	115,
	37,
	122,
	123,
	124,
	37,
	126,
	127,
	128,
	37,
	18,
	117,
	19,
	119,
	20,
	121,
	122,
	123,
	125,
	126,
	127,
	129,
	1,
	38,
	39,
	130,
	140,
	141,
	142,
	2,
	40,
	41,
	130,
	140,
	141,
	142,
	42,
	43,
	44,
	45,
	131,
	140,
	143,
	144,
	3,
	46,
	47,
	134,
	141,
	145,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	136,
	142,
	146,
	147,
	148,
	4,
	55,
	56,
	131,
	132,
	143,
	149,
	5,
	57,
	58,
	131,
	133,
	144,
	150,
	6,
	59,
	60,
	134,
	135,
	145,
	151,
	152,
	61,
	62,
	63,
	64,
	136,
	137,
	146,
	65,
	66,
	67,
	68,
	136,
	138,
	147,
	153,
	154,
	7,
	69,
	70,
	136,
	139,
	148,
	155,
	156,
	157,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	132,
	149,
	8,
	78,
	79,
	133,
	150,
	9,
	80,
	81,
	135,
	151,
	10,
	11,
	82,
	83,
	84,
	135,
	137,
	152,
	85,
	86,
	87,
	88,
	138,
	153,
	89,
	90,
	91,
	92,
	138,
	154,
	12,
	93,
	94,
	139,
	155,
	13,
	95,
	96,
	139,
	156,
	14,
	97,
	98,
	139,
	157,
	158,
	161,
	162,
	15,
	99,
	100,
	158,
	161,
	16,
	101,
	102,
	158,
	162,
	103,
	104,
	105,
	106,
	159,
	163,
	164,
	17,
	107,
	108,
	160,
	165,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	166,
	167,
	18,
	116,
	117,
	159,
	163,
	19,
	118,
	119,
	159,
	164,
	20,
	120,
	121,
	160,
	165,
	122,
	123,
	124,
	125,
	166,
	126,
	127,
	128,
	129,
	167 };

 real syn30m_boundc_[1+200+334] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		20.,
		0.,
		20.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		0.,
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
		1.,
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
		-1.,
		1.7e308,
		-1.7e308,
		1.,
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
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
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
		-1.,
		1.7e308,
		-1.7e308,
		1.,
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
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
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
		-1.,
		1.7e308,
		-1.7e308,
		1.,
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
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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

 real syn30m_x0comn_[100] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn30m_pd[35];
static real syn30m_old_x[100];
static int syn30m_xkind = -1;

 static int
syn30m_xcheck(real *x)
{
	real *x1 = syn30m_old_x, *xe = x + 100;
	errno = 0;
	if (syn30m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn30m_xkind = 0;
	return 1;
	}
 real
syn30m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn30m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[20];
	rv += 5.*x[24];
	rv += -2.*x[28];
	rv += -10.*x[38];
	rv += -5.*x[39];
	rv += 40.*x[42];
	rv += 15.*x[43];
	rv += 10.*x[44];
	rv += 30.*x[45];
	rv += 35.*x[46];
	rv += 20.*x[47];
	rv += 25.*x[48];
	rv += 15.*x[49];
	rv += 30.*x[55];
	rv += -x[59];
	rv += 80.*x[64];
	rv += 285.*x[65];
	rv += 290.*x[66];
	rv += 280.*x[67];
	rv += 290.*x[68];
	rv += 350.*x[69];
	rv += -5.*x[70];
	rv += -8.*x[71];
	rv += -6.*x[72];
	rv += -10.*x[73];
	rv += -6.*x[74];
	rv += -7.*x[75];
	rv += -4.*x[76];
	rv += -5.*x[77];
	rv += -2.*x[78];
	rv += -4.*x[79];
	rv += -3.*x[80];
	rv += -7.*x[81];
	rv += -3.*x[82];
	rv += -2.*x[83];
	rv += -4.*x[84];
	rv += -2.*x[85];
	rv += -3.*x[86];
	rv += -5.*x[87];
	rv += -2.*x[88];
	rv += -x[89];
	rv += -2.*x[90];
	rv += -9.*x[91];
	rv += -5.*x[92];
	rv += -2.*x[93];
	rv += -10.*x[94];
	rv += -4.*x[95];
	rv += -7.*x[96];
	rv += -4.*x[97];
	rv += -2.*x[98];
	rv += -8.*x[99];
	;}

	if (wantfg & 2) {
	g[20] = -1.;
	g[24] = 5.;
	g[28] = -2.;
	g[38] = -10.;
	g[39] = -5.;
	g[42] = 40.;
	g[43] = 15.;
	g[44] = 10.;
	g[45] = 30.;
	g[46] = 35.;
	g[47] = 20.;
	g[48] = 25.;
	g[49] = 15.;
	g[55] = 30.;
	g[59] = -1.;
	g[64] = 80.;
	g[65] = 285.;
	g[66] = 290.;
	g[67] = 280.;
	g[68] = 290.;
	g[69] = 350.;
	g[70] = -5.;
	g[71] = -8.;
	g[72] = -6.;
	g[73] = -10.;
	g[74] = -6.;
	g[75] = -7.;
	g[76] = -4.;
	g[77] = -5.;
	g[78] = -2.;
	g[79] = -4.;
	g[80] = -3.;
	g[81] = -7.;
	g[82] = -3.;
	g[83] = -2.;
	g[84] = -4.;
	g[85] = -2.;
	g[86] = -3.;
	g[87] = -5.;
	g[88] = -2.;
	g[89] = -1.;
	g[90] = -2.;
	g[91] = -9.;
	g[92] = -5.;
	g[93] = -2.;
	g[94] = -10.;
	g[95] = -4.;
	g[96] = -7.;
	g[97] = -4.;
	g[98] = -2.;
	g[99] = -8.;
	}

	return rv;
}

 void
syn30m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (syn30m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[21];
	t1 += x[70];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	syn30m_pd[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[2] = 1. / v[0];
	v[0] = -1.2 * syn30m_pd[1];
	t1 = v[0] + x[22];
	t1 += x[71];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + 1.;
	syn30m_pd[3] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[4] = 1. / v[0];
	v[0] = -1.5 * syn30m_pd[3];
	t1 = v[0] + x[3];
	t1 += x[73];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[4] + 1.;
	syn30m_pd[5] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[6] = 1. / v[0];
	v[0] = -1.25 * syn30m_pd[5];
	t1 = v[0] + x[33];
	t1 += x[75];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[5] + 1.;
	syn30m_pd[7] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[8] = 1. / v[0];
	v[0] = -0.9 * syn30m_pd[7];
	t1 = v[0] + x[7];
	t1 += x[76];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[3] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[9] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[34];
	t1 += x[77];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[6] + 1.;
	syn30m_pd[10] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[11] = 1. / v[0];
	v[0] = -1.1 * syn30m_pd[10];
	t1 = v[0] + x[37];
	t1 += x[80];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[7] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[12] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[43];
	t1 += x[82];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[8] + 1.;
	syn30m_pd[13] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[14] = 1. / v[0];
	v[0] = -0.7 * syn30m_pd[13];
	t1 = v[0] + x[44];
	t1 += x[83];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[9] + 1.;
	syn30m_pd[15] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[16] = 1. / v[0];
	v[0] = -0.65 * syn30m_pd[15];
	t1 = v[0] + x[45];
	t1 += x[84];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[10] + 1.;
	syn30m_pd[17] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[18] = 1. / v[0];
	v[0] = -0.65 * syn30m_pd[17];
	t1 = v[0] + x[45];
	t1 += x[84];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[11] + 1.;
	syn30m_pd[19] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[20] = 1. / v[0];
	v[0] = -0.75 * syn30m_pd[19];
	t1 = v[0] + x[48];
	t1 += x[87];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[12] + 1.;
	syn30m_pd[21] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[22] = 1. / v[0];
	v[0] = -0.8 * syn30m_pd[21];
	t1 = v[0] + x[49];
	t1 += x[88];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[13] + 1.;
	syn30m_pd[23] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[24] = 1. / v[0];
	v[0] = -0.85 * syn30m_pd[23];
	t1 = v[0] + x[50];
	t1 += x[89];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[14] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[25] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[52];
	t1 += x[90];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[15] + 1.;
	syn30m_pd[26] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[27] = 1. / v[0];
	v[0] = -1.2 * syn30m_pd[26];
	t1 = v[0] + x[53];
	t1 += x[91];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[16] + 1.;
	syn30m_pd[28] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[29] = 1. / v[0];
	v[0] = -1.5 * syn30m_pd[28];
	t1 = v[0] + x[17];
	t1 += x[93];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[18] + 1.;
	syn30m_pd[30] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[31] = 1. / v[0];
	v[0] = -1.25 * syn30m_pd[30];
	t1 = v[0] + x[65];
	t1 += x[95];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[19] + 1.;
	syn30m_pd[32] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[33] = 1. / v[0];
	v[0] = -0.9 * syn30m_pd[32];
	t1 = v[0] + x[66];
	t1 += x[96];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[17] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn30m_pd[34] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[67];
	t1 += x[97];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[20];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[21];
	t1 += -x[22];
	t1 += x[23];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[23];
	t1 += -x[24];
	t1 += -x[25];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[2];
	t1 += x[25];
	t1 += -x[26];
	t1 += -x[27];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += x[29];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[6];
	t1 += x[30];
	t1 += -x[31];
	t1 += -x[32];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += x[34];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[10];
	t1 += -x[35];
	t1 += -x[39];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[36];
	t1 += -x[40];
	t1 += -x[41];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[11];
	t1 += -x[12];
	t1 += -x[13];
	t1 += x[37];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[50];
	t1 += -x[51];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[14];
	t1 += -x[15];
	t1 += x[51];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[52];
	t1 += -x[53];
	t1 += x[54];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[54];
	t1 += -x[55];
	t1 += -x[56];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[16];
	t1 += x[56];
	t1 += -x[57];
	t1 += -x[58];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[18];
	t1 += -x[19];
	t1 += x[60];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[61];
	t1 += -x[62];
	t1 += -x[63];
	t1 += -x[64];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[0];
	t1 += -40.*x[70];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[21];
	t1 += -3.71357206670431*x[70];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[1];
	t1 += -40.*x[71];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[22];
	t1 += -4.45628648004517*x[71];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -0.75*x[26];
	t1 += x[29];
	t1 += x[72];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -0.75*x[26];
	t1 += x[29];
	t1 += -x[72];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[26];
	t1 += -4.45628648004517*x[72];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[29];
	t1 += -3.34221486003388*x[72];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[2];
	t1 += -4.45628648004517*x[73];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[3];
	t1 += -2.54515263975353*x[73];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[27];
	t1 += x[30];
	t1 += x[74];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[27];
	t1 += x[30];
	t1 += -x[74];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -0.5*x[28];
	t1 += x[30];
	t1 += x[74];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -0.5*x[28];
	t1 += x[30];
	t1 += -x[74];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[27];
	t1 += -4.45628648004517*x[74];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[28];
	t1 += -30.*x[74];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[30];
	t1 += -15.*x[74];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[4];
	t1 += -3.34221486003388*x[75];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[33];
	t1 += -1.83548069293539*x[75];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[5];
	t1 += -3.34221486003388*x[76];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[7];
	t1 += -1.32154609891348*x[76];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[3];
	t1 += -2.54515263975353*x[77];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[34];
	t1 += -1.26558121681553*x[77];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -0.9*x[31];
	t1 += x[35];
	t1 += x[78];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -0.9*x[31];
	t1 += x[35];
	t1 += -x[78];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[31];
	t1 += -15.*x[78];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[35];
	t1 += -13.5*x[78];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -0.6*x[32];
	t1 += x[36];
	t1 += x[79];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -0.6*x[32];
	t1 += x[36];
	t1 += -x[79];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[32];
	t1 += -15.*x[79];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[36];
	t1 += -9.*x[79];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[6];
	t1 += -15.*x[80];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[37];
	t1 += -3.04984759446376*x[80];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -0.9*x[33];
	t1 += x[42];
	t1 += x[81];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -0.9*x[33];
	t1 += x[42];
	t1 += -x[81];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[38];
	t1 += x[42];
	t1 += x[81];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[38];
	t1 += x[42];
	t1 += -x[81];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[33];
	t1 += -1.83548069293539*x[81];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[38];
	t1 += -20.*x[81];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[42];
	t1 += -20.*x[81];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[7];
	t1 += -1.32154609891348*x[82];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[43];
	t1 += -0.842233385663186*x[82];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[8];
	t1 += -1.26558121681553*x[83];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[44];
	t1 += -0.572481933717686*x[83];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[9];
	t1 += -1.26558121681553*x[84];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[10];
	t1 += -33.5*x[84];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[45];
	t1 += -2.30162356062425*x[84];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[40];
	t1 += x[46];
	t1 += x[85];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = -x[40];
	t1 += x[46];
	t1 += -x[85];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[40];
	t1 += -9.*x[85];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[46];
	t1 += -9.*x[85];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = -x[41];
	t1 += x[47];
	t1 += x[86];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = -x[41];
	t1 += x[47];
	t1 += -x[86];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[41];
	t1 += -9.*x[86];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[47];
	t1 += -9.*x[86];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[11];
	t1 += -3.04984759446376*x[87];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[48];
	t1 += -1.04900943706034*x[87];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[12];
	t1 += -3.04984759446376*x[88];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[49];
	t1 += -1.11894339953103*x[88];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[13];
	t1 += -3.04984759446376*x[89];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[50];
	t1 += -1.18887736200171*x[89];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[14];
	t1 += -1.18887736200171*x[90];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[52];
	t1 += -0.78338879230327*x[90];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[15];
	t1 += -1.18887736200171*x[91];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[53];
	t1 += -0.940066550763924*x[91];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = -0.75*x[57];
	t1 += x[60];
	t1 += x[92];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = -0.75*x[57];
	t1 += x[60];
	t1 += -x[92];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[57];
	t1 += -0.940066550763924*x[92];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[60];
	t1 += -0.705049913072943*x[92];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[16];
	t1 += -0.940066550763924*x[93];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[17];
	t1 += -0.994083415506506*x[93];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -x[58];
	t1 += x[61];
	t1 += x[94];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = -x[58];
	t1 += x[61];
	t1 += -x[94];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -0.5*x[59];
	t1 += x[61];
	t1 += x[94];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = -0.5*x[59];
	t1 += x[61];
	t1 += -x[94];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[58];
	t1 += -0.940066550763924*x[94];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[59];
	t1 += -30.*x[94];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[61];
	t1 += -15.*x[94];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[18];
	t1 += -0.705049913072943*x[95];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[65];
	t1 += -0.666992981045719*x[95];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[19];
	t1 += -0.705049913072943*x[96];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[66];
	t1 += -0.480234946352917*x[96];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = x[17];
	t1 += -0.994083415506506*x[97];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[67];
	t1 += -0.690184503917672*x[97];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = -0.9*x[62];
	t1 += x[68];
	t1 += x[98];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = -0.9*x[62];
	t1 += x[68];
	t1 += -x[98];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[62];
	t1 += -15.*x[98];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[68];
	t1 += -13.5*x[98];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = -0.6*x[63];
	t1 += x[69];
	t1 += x[99];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = -0.6*x[63];
	t1 += x[69];
	t1 += -x[99];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[63];
	t1 += -15.*x[99];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[69];
	t1 += -9.*x[99];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[70];
	t1 += x[71];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = -x[72];
	t1 += x[75];
	t1 += x[76];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = -x[75];
	t1 += x[81];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = -x[76];
	t1 += x[82];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = -x[73];
	t1 += x[77];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = -x[77];
	t1 += x[83];
	t1 += x[84];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = -x[74];
	t1 += x[78];
	t1 += x[79];
	t1 += x[80];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = -x[78];
	t1 += x[84];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = -x[79];
	t1 += x[85];
	t1 += x[86];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = -x[80];
	t1 += x[87];
	t1 += x[88];
	t1 += x[89];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = x[70];
	t1 += x[71];
	t1 += -x[72];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = x[70];
	t1 += x[71];
	t1 += -x[73];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = x[70];
	t1 += x[71];
	t1 += -x[74];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = x[72];
	t1 += -x[75];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = x[72];
	t1 += -x[76];
	c[143] = t1;

  /***  constraint 145  ***/

	t1 = x[73];
	t1 += -x[77];
	c[144] = t1;

  /***  constraint 146  ***/

	t1 = x[74];
	t1 += -x[78];
	c[145] = t1;

  /***  constraint 147  ***/

	t1 = x[74];
	t1 += -x[79];
	c[146] = t1;

  /***  constraint 148  ***/

	t1 = x[74];
	t1 += -x[80];
	c[147] = t1;

  /***  constraint 149  ***/

	t1 = x[75];
	t1 += -x[81];
	c[148] = t1;

  /***  constraint 150  ***/

	t1 = x[76];
	t1 += -x[82];
	c[149] = t1;

  /***  constraint 151  ***/

	t1 = x[77];
	t1 += -x[83];
	c[150] = t1;

  /***  constraint 152  ***/

	t1 = x[77];
	t1 += -x[84];
	c[151] = t1;

  /***  constraint 153  ***/

	t1 = x[79];
	t1 += -x[85];
	c[152] = t1;

  /***  constraint 154  ***/

	t1 = x[79];
	t1 += -x[86];
	c[153] = t1;

  /***  constraint 155  ***/

	t1 = x[80];
	t1 += -x[87];
	c[154] = t1;

  /***  constraint 156  ***/

	t1 = x[80];
	t1 += -x[88];
	c[155] = t1;

  /***  constraint 157  ***/

	t1 = x[80];
	t1 += -x[89];
	c[156] = t1;

  /***  constraint 158  ***/

	t1 = -x[89];
	t1 += x[90];
	t1 += x[91];
	c[157] = t1;

  /***  constraint 159  ***/

	t1 = -x[92];
	t1 += x[95];
	t1 += x[96];
	c[158] = t1;

  /***  constraint 160  ***/

	t1 = -x[93];
	t1 += x[97];
	c[159] = t1;

  /***  constraint 161  ***/

	t1 = x[89];
	t1 += -x[90];
	c[160] = t1;

  /***  constraint 162  ***/

	t1 = x[89];
	t1 += -x[91];
	c[161] = t1;

  /***  constraint 163  ***/

	t1 = x[92];
	t1 += -x[95];
	c[162] = t1;

  /***  constraint 164  ***/

	t1 = x[92];
	t1 += -x[96];
	c[163] = t1;

  /***  constraint 165  ***/

	t1 = x[93];
	t1 += -x[97];
	c[164] = t1;

  /***  constraint 166  ***/

	t1 = x[94];
	t1 += -x[98];
	c[165] = t1;

  /***  constraint 167  ***/

	t1 = x[94];
	t1 += -x[99];
	c[166] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -syn30m_pd[0];
	J[64] = 1.;
	J[215] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -1.2*syn30m_pd[2];
	J[3] = dv[0];
	J[67] = 1.;
	J[222] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -1.5*syn30m_pd[4];
	J[6] = dv[0];
	J[9] = 1.;
	J[237] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -1.25*syn30m_pd[6];
	J[13] = dv[0];
	J[104] = 1.;
	J[255] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -0.9*syn30m_pd[8];
	J[16] = dv[0];
	J[22] = 1.;
	J[262] = 1.;

   /*** derivatives for constraint 6 ***/

	J[10] = -syn30m_pd[9];
	J[109] = 1.;
	J[269] = 1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -1.1*syn30m_pd[11];
	J[19] = dv[0];
	J[120] = 1.;
	J[293] = 1.;

   /*** derivatives for constraint 8 ***/

	J[23] = -syn30m_pd[12];
	J[140] = 1.;
	J[311] = 1.;

   /*** derivatives for constraint 9 ***/

	dv[0] = -0.7*syn30m_pd[14];
	J[26] = dv[0];
	J[142] = 1.;
	J[316] = 1.;

   /*** derivatives for constraint 10 ***/

	dv[0] = -0.65*syn30m_pd[16];
	J[29] = dv[0];
	J[144] = 1.;
	J[321] = 1.;

   /*** derivatives for constraint 11 ***/

	dv[0] = -0.65*syn30m_pd[18];
	J[32] = dv[0];
	J[145] = 1.;
	J[322] = 1.;

   /*** derivatives for constraint 12 ***/

	dv[0] = -0.75*syn30m_pd[20];
	J[35] = dv[0];
	J[153] = 1.;
	J[341] = 1.;

   /*** derivatives for constraint 13 ***/

	dv[0] = -0.8*syn30m_pd[22];
	J[38] = dv[0];
	J[155] = 1.;
	J[346] = 1.;

   /*** derivatives for constraint 14 ***/

	dv[0] = -0.85*syn30m_pd[24];
	J[41] = dv[0];
	J[157] = 1.;
	J[351] = 1.;

   /*** derivatives for constraint 15 ***/

	J[44] = -syn30m_pd[25];
	J[162] = 1.;
	J[359] = 1.;

   /*** derivatives for constraint 16 ***/

	dv[0] = -1.2*syn30m_pd[27];
	J[47] = dv[0];
	J[165] = 1.;
	J[364] = 1.;

   /*** derivatives for constraint 17 ***/

	dv[0] = -1.5*syn30m_pd[29];
	J[50] = dv[0];
	J[53] = 1.;
	J[376] = 1.;

   /*** derivatives for constraint 18 ***/

	dv[0] = -1.25*syn30m_pd[31];
	J[57] = dv[0];
	J[203] = 1.;
	J[390] = 1.;

   /*** derivatives for constraint 19 ***/

	dv[0] = -0.9*syn30m_pd[33];
	J[60] = dv[0];
	J[205] = 1.;
	J[395] = 1.;

   /*** derivatives for constraint 20 ***/

	J[54] = -syn30m_pd[34];
	J[207] = 1.;
	J[400] = 1.;

   /*** derivatives for constraint 21 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[63] = 1.;

   /*** derivatives for constraint 22 ***/

	J[65] = -1.;
	J[68] = -1.;
	J[70] = 1.;

   /*** derivatives for constraint 23 ***/

	J[71] = 1.;
	J[72] = -1.;
	J[73] = -1.;

   /*** derivatives for constraint 24 ***/

	J[7] = -1.;
	J[74] = 1.;
	J[75] = -1.;
	J[79] = -1.;

   /*** derivatives for constraint 25 ***/

	J[14] = -1.;
	J[17] = -1.;
	J[86] = 1.;

   /*** derivatives for constraint 26 ***/

	J[20] = -1.;
	J[90] = 1.;
	J[96] = -1.;
	J[100] = -1.;

   /*** derivatives for constraint 27 ***/

	J[27] = -1.;
	J[30] = -1.;
	J[110] = 1.;

   /*** derivatives for constraint 28 ***/

	J[33] = 1.;
	J[112] = -1.;
	J[126] = -1.;

   /*** derivatives for constraint 29 ***/

	J[116] = 1.;
	J[127] = -1.;
	J[131] = -1.;

   /*** derivatives for constraint 30 ***/

	J[36] = -1.;
	J[39] = -1.;
	J[42] = -1.;
	J[121] = 1.;

   /*** derivatives for constraint 31 ***/

	J[158] = 1.;
	J[160] = -1.;

   /*** derivatives for constraint 32 ***/

	J[45] = -1.;
	J[48] = -1.;
	J[161] = 1.;

   /*** derivatives for constraint 33 ***/

	J[163] = -1.;
	J[166] = -1.;
	J[168] = 1.;

   /*** derivatives for constraint 34 ***/

	J[169] = 1.;
	J[170] = -1.;
	J[171] = -1.;

   /*** derivatives for constraint 35 ***/

	J[51] = -1.;
	J[172] = 1.;
	J[173] = -1.;
	J[177] = -1.;

   /*** derivatives for constraint 36 ***/

	J[58] = -1.;
	J[61] = -1.;
	J[184] = 1.;

   /*** derivatives for constraint 37 ***/

	J[188] = 1.;
	J[194] = -1.;
	J[198] = -1.;
	J[202] = -1.;

   /*** derivatives for constraint 38 ***/

	J[2] = 1.;
	J[216] = -40.;

   /*** derivatives for constraint 39 ***/

	J[66] = 1.;
	J[217] = -3.71357206670431;

   /*** derivatives for constraint 40 ***/

	J[5] = 1.;
	J[223] = -40.;

   /*** derivatives for constraint 41 ***/

	J[69] = 1.;
	J[224] = -4.45628648004517;

   /*** derivatives for constraint 42 ***/

	J[76] = -0.75;
	J[87] = 1.;
	J[229] = 1.;

   /*** derivatives for constraint 43 ***/

	J[77] = -0.75;
	J[88] = 1.;
	J[230] = -1.;

   /*** derivatives for constraint 44 ***/

	J[78] = 1.;
	J[231] = -4.45628648004517;

   /*** derivatives for constraint 45 ***/

	J[89] = 1.;
	J[232] = -3.34221486003388;

   /*** derivatives for constraint 46 ***/

	J[8] = 1.;
	J[238] = -4.45628648004517;

   /*** derivatives for constraint 47 ***/

	J[11] = 1.;
	J[239] = -2.54515263975353;

   /*** derivatives for constraint 48 ***/

	J[80] = -1.;
	J[91] = 1.;
	J[243] = 1.;

   /*** derivatives for constraint 49 ***/

	J[81] = -1.;
	J[92] = 1.;
	J[244] = -1.;

   /*** derivatives for constraint 50 ***/

	J[83] = -0.5;
	J[93] = 1.;
	J[245] = 1.;

   /*** derivatives for constraint 51 ***/

	J[84] = -0.5;
	J[94] = 1.;
	J[246] = -1.;

   /*** derivatives for constraint 52 ***/

	J[82] = 1.;
	J[247] = -4.45628648004517;

   /*** derivatives for constraint 53 ***/

	J[85] = 1.;
	J[248] = -30.;

   /*** derivatives for constraint 54 ***/

	J[95] = 1.;
	J[249] = -15.;

   /*** derivatives for constraint 55 ***/

	J[15] = 1.;
	J[256] = -3.34221486003388;

   /*** derivatives for constraint 56 ***/

	J[105] = 1.;
	J[257] = -1.83548069293539;

   /*** derivatives for constraint 57 ***/

	J[18] = 1.;
	J[263] = -3.34221486003388;

   /*** derivatives for constraint 58 ***/

	J[24] = 1.;
	J[264] = -1.32154609891348;

   /*** derivatives for constraint 59 ***/

	J[12] = 1.;
	J[270] = -2.54515263975353;

   /*** derivatives for constraint 60 ***/

	J[111] = 1.;
	J[271] = -1.26558121681553;

   /*** derivatives for constraint 61 ***/

	J[97] = -0.9;
	J[113] = 1.;
	J[277] = 1.;

   /*** derivatives for constraint 62 ***/

	J[98] = -0.9;
	J[114] = 1.;
	J[278] = -1.;

   /*** derivatives for constraint 63 ***/

	J[99] = 1.;
	J[279] = -15.;

   /*** derivatives for constraint 64 ***/

	J[115] = 1.;
	J[280] = -13.5;

   /*** derivatives for constraint 65 ***/

	J[101] = -0.6;
	J[117] = 1.;
	J[284] = 1.;

   /*** derivatives for constraint 66 ***/

	J[102] = -0.6;
	J[118] = 1.;
	J[285] = -1.;

   /*** derivatives for constraint 67 ***/

	J[103] = 1.;
	J[286] = -15.;

   /*** derivatives for constraint 68 ***/

	J[119] = 1.;
	J[287] = -9.;

   /*** derivatives for constraint 69 ***/

	J[21] = 1.;
	J[294] = -15.;

   /*** derivatives for constraint 70 ***/

	J[122] = 1.;
	J[295] = -3.04984759446376;

   /*** derivatives for constraint 71 ***/

	J[106] = -0.9;
	J[135] = 1.;
	J[302] = 1.;

   /*** derivatives for constraint 72 ***/

	J[107] = -0.9;
	J[136] = 1.;
	J[303] = -1.;

   /*** derivatives for constraint 73 ***/

	J[123] = -1.;
	J[137] = 1.;
	J[304] = 1.;

   /*** derivatives for constraint 74 ***/

	J[124] = -1.;
	J[138] = 1.;
	J[305] = -1.;

   /*** derivatives for constraint 75 ***/

	J[108] = 1.;
	J[306] = -1.83548069293539;

   /*** derivatives for constraint 76 ***/

	J[125] = 1.;
	J[307] = -20.;

   /*** derivatives for constraint 77 ***/

	J[139] = 1.;
	J[308] = -20.;

   /*** derivatives for constraint 78 ***/

	J[25] = 1.;
	J[312] = -1.32154609891348;

   /*** derivatives for constraint 79 ***/

	J[141] = 1.;
	J[313] = -0.842233385663186;

   /*** derivatives for constraint 80 ***/

	J[28] = 1.;
	J[317] = -1.26558121681553;

   /*** derivatives for constraint 81 ***/

	J[143] = 1.;
	J[318] = -0.572481933717686;

   /*** derivatives for constraint 82 ***/

	J[31] = 1.;
	J[323] = -1.26558121681553;

   /*** derivatives for constraint 83 ***/

	J[34] = 1.;
	J[324] = -33.5;

   /*** derivatives for constraint 84 ***/

	J[146] = 1.;
	J[325] = -2.30162356062425;

   /*** derivatives for constraint 85 ***/

	J[128] = -1.;
	J[147] = 1.;
	J[329] = 1.;

   /*** derivatives for constraint 86 ***/

	J[129] = -1.;
	J[148] = 1.;
	J[330] = -1.;

   /*** derivatives for constraint 87 ***/

	J[130] = 1.;
	J[331] = -9.;

   /*** derivatives for constraint 88 ***/

	J[149] = 1.;
	J[332] = -9.;

   /*** derivatives for constraint 89 ***/

	J[132] = -1.;
	J[150] = 1.;
	J[335] = 1.;

   /*** derivatives for constraint 90 ***/

	J[133] = -1.;
	J[151] = 1.;
	J[336] = -1.;

   /*** derivatives for constraint 91 ***/

	J[134] = 1.;
	J[337] = -9.;

   /*** derivatives for constraint 92 ***/

	J[152] = 1.;
	J[338] = -9.;

   /*** derivatives for constraint 93 ***/

	J[37] = 1.;
	J[342] = -3.04984759446376;

   /*** derivatives for constraint 94 ***/

	J[154] = 1.;
	J[343] = -1.04900943706034;

   /*** derivatives for constraint 95 ***/

	J[40] = 1.;
	J[347] = -3.04984759446376;

   /*** derivatives for constraint 96 ***/

	J[156] = 1.;
	J[348] = -1.11894339953103;

   /*** derivatives for constraint 97 ***/

	J[43] = 1.;
	J[352] = -3.04984759446376;

   /*** derivatives for constraint 98 ***/

	J[159] = 1.;
	J[353] = -1.18887736200171;

   /*** derivatives for constraint 99 ***/

	J[46] = 1.;
	J[360] = -1.18887736200171;

   /*** derivatives for constraint 100 ***/

	J[164] = 1.;
	J[361] = -0.78338879230327;

   /*** derivatives for constraint 101 ***/

	J[49] = 1.;
	J[365] = -1.18887736200171;

   /*** derivatives for constraint 102 ***/

	J[167] = 1.;
	J[366] = -0.940066550763924;

   /*** derivatives for constraint 103 ***/

	J[174] = -0.75;
	J[185] = 1.;
	J[369] = 1.;

   /*** derivatives for constraint 104 ***/

	J[175] = -0.75;
	J[186] = 1.;
	J[370] = -1.;

   /*** derivatives for constraint 105 ***/

	J[176] = 1.;
	J[371] = -0.940066550763924;

   /*** derivatives for constraint 106 ***/

	J[187] = 1.;
	J[372] = -0.705049913072943;

   /*** derivatives for constraint 107 ***/

	J[52] = 1.;
	J[377] = -0.940066550763924;

   /*** derivatives for constraint 108 ***/

	J[55] = 1.;
	J[378] = -0.994083415506506;

   /*** derivatives for constraint 109 ***/

	J[178] = -1.;
	J[189] = 1.;
	J[381] = 1.;

   /*** derivatives for constraint 110 ***/

	J[179] = -1.;
	J[190] = 1.;
	J[382] = -1.;

   /*** derivatives for constraint 111 ***/

	J[181] = -0.5;
	J[191] = 1.;
	J[383] = 1.;

   /*** derivatives for constraint 112 ***/

	J[182] = -0.5;
	J[192] = 1.;
	J[384] = -1.;

   /*** derivatives for constraint 113 ***/

	J[180] = 1.;
	J[385] = -0.940066550763924;

   /*** derivatives for constraint 114 ***/

	J[183] = 1.;
	J[386] = -30.;

   /*** derivatives for constraint 115 ***/

	J[193] = 1.;
	J[387] = -15.;

   /*** derivatives for constraint 116 ***/

	J[59] = 1.;
	J[391] = -0.705049913072943;

   /*** derivatives for constraint 117 ***/

	J[204] = 1.;
	J[392] = -0.666992981045719;

   /*** derivatives for constraint 118 ***/

	J[62] = 1.;
	J[396] = -0.705049913072943;

   /*** derivatives for constraint 119 ***/

	J[206] = 1.;
	J[397] = -0.480234946352917;

   /*** derivatives for constraint 120 ***/

	J[56] = 1.;
	J[401] = -0.994083415506506;

   /*** derivatives for constraint 121 ***/

	J[208] = 1.;
	J[402] = -0.690184503917672;

   /*** derivatives for constraint 122 ***/

	J[195] = -0.9;
	J[209] = 1.;
	J[405] = 1.;

   /*** derivatives for constraint 123 ***/

	J[196] = -0.9;
	J[210] = 1.;
	J[406] = -1.;

   /*** derivatives for constraint 124 ***/

	J[197] = 1.;
	J[407] = -15.;

   /*** derivatives for constraint 125 ***/

	J[211] = 1.;
	J[408] = -13.5;

   /*** derivatives for constraint 126 ***/

	J[199] = -0.6;
	J[212] = 1.;
	J[410] = 1.;

   /*** derivatives for constraint 127 ***/

	J[200] = -0.6;
	J[213] = 1.;
	J[411] = -1.;

   /*** derivatives for constraint 128 ***/

	J[201] = 1.;
	J[412] = -15.;

   /*** derivatives for constraint 129 ***/

	J[214] = 1.;
	J[413] = -9.;

   /*** derivatives for constraint 130 ***/

	J[218] = 1.;
	J[225] = 1.;

   /*** derivatives for constraint 131 ***/

	J[233] = -1.;
	J[258] = 1.;
	J[265] = 1.;

   /*** derivatives for constraint 132 ***/

	J[259] = -1.;
	J[309] = 1.;

   /*** derivatives for constraint 133 ***/

	J[266] = -1.;
	J[314] = 1.;

   /*** derivatives for constraint 134 ***/

	J[240] = -1.;
	J[272] = 1.;

   /*** derivatives for constraint 135 ***/

	J[273] = -1.;
	J[319] = 1.;
	J[326] = 1.;

   /*** derivatives for constraint 136 ***/

	J[250] = -1.;
	J[281] = 1.;
	J[288] = 1.;
	J[296] = 1.;

   /*** derivatives for constraint 137 ***/

	J[282] = -1.;
	J[327] = 1.;

   /*** derivatives for constraint 138 ***/

	J[289] = -1.;
	J[333] = 1.;
	J[339] = 1.;

   /*** derivatives for constraint 139 ***/

	J[297] = -1.;
	J[344] = 1.;
	J[349] = 1.;
	J[354] = 1.;

   /*** derivatives for constraint 140 ***/

	J[219] = 1.;
	J[226] = 1.;
	J[234] = -1.;

   /*** derivatives for constraint 141 ***/

	J[220] = 1.;
	J[227] = 1.;
	J[241] = -1.;

   /*** derivatives for constraint 142 ***/

	J[221] = 1.;
	J[228] = 1.;
	J[251] = -1.;

   /*** derivatives for constraint 143 ***/

	J[235] = 1.;
	J[260] = -1.;

   /*** derivatives for constraint 144 ***/

	J[236] = 1.;
	J[267] = -1.;

   /*** derivatives for constraint 145 ***/

	J[242] = 1.;
	J[274] = -1.;

   /*** derivatives for constraint 146 ***/

	J[252] = 1.;
	J[283] = -1.;

   /*** derivatives for constraint 147 ***/

	J[253] = 1.;
	J[290] = -1.;

   /*** derivatives for constraint 148 ***/

	J[254] = 1.;
	J[298] = -1.;

   /*** derivatives for constraint 149 ***/

	J[261] = 1.;
	J[310] = -1.;

   /*** derivatives for constraint 150 ***/

	J[268] = 1.;
	J[315] = -1.;

   /*** derivatives for constraint 151 ***/

	J[275] = 1.;
	J[320] = -1.;

   /*** derivatives for constraint 152 ***/

	J[276] = 1.;
	J[328] = -1.;

   /*** derivatives for constraint 153 ***/

	J[291] = 1.;
	J[334] = -1.;

   /*** derivatives for constraint 154 ***/

	J[292] = 1.;
	J[340] = -1.;

   /*** derivatives for constraint 155 ***/

	J[299] = 1.;
	J[345] = -1.;

   /*** derivatives for constraint 156 ***/

	J[300] = 1.;
	J[350] = -1.;

   /*** derivatives for constraint 157 ***/

	J[301] = 1.;
	J[355] = -1.;

   /*** derivatives for constraint 158 ***/

	J[356] = -1.;
	J[362] = 1.;
	J[367] = 1.;

   /*** derivatives for constraint 159 ***/

	J[373] = -1.;
	J[393] = 1.;
	J[398] = 1.;

   /*** derivatives for constraint 160 ***/

	J[379] = -1.;
	J[403] = 1.;

   /*** derivatives for constraint 161 ***/

	J[357] = 1.;
	J[363] = -1.;

   /*** derivatives for constraint 162 ***/

	J[358] = 1.;
	J[368] = -1.;

   /*** derivatives for constraint 163 ***/

	J[374] = 1.;
	J[394] = -1.;

   /*** derivatives for constraint 164 ***/

	J[375] = 1.;
	J[399] = -1.;

   /*** derivatives for constraint 165 ***/

	J[380] = 1.;
	J[404] = -1.;

   /*** derivatives for constraint 166 ***/

	J[388] = 1.;
	J[409] = -1.;

   /*** derivatives for constraint 167 ***/

	J[389] = 1.;
	J[414] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
