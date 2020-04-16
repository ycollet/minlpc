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
 fint slay06m_auxcom_[1] = { 0 /* nlc */ };
 fint slay06m_funcom_[529] = {
	102 /* nvar */,
	1 /* nobj */,
	135 /* ncon */,
	420 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	21,
	41,
	61,
	81,
	101,
	121,
	141,
	161,
	181,
	201,
	221,
	241,
	243,
	245,
	247,
	249,
	251,
	253,
	255,
	257,
	259,
	261,
	263,
	265,
	267,
	269,
	271,
	273,
	275,
	277,
	279,
	281,
	283,
	285,
	287,
	289,
	291,
	293,
	295,
	297,
	299,
	301,
	303,
	305,
	307,
	309,
	311,
	313,
	315,
	317,
	319,
	321,
	323,
	325,
	327,
	329,
	331,
	333,
	335,
	337,
	339,
	341,
	343,
	345,
	347,
	349,
	351,
	353,
	355,
	357,
	359,
	361,
	363,
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
	405,
	407,
	409,
	411,
	413,
	415,
	417,
	419,
	421,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	16,
	17,
	18,
	19,
	20,
	61,
	62,
	63,
	64,
	65,
	76,
	77,
	78,
	79,
	80,
	1,
	6,
	7,
	8,
	9,
	16,
	21,
	22,
	23,
	24,
	61,
	66,
	67,
	68,
	69,
	76,
	81,
	82,
	83,
	84,
	2,
	6,
	10,
	11,
	12,
	17,
	21,
	25,
	26,
	27,
	62,
	66,
	70,
	71,
	72,
	77,
	81,
	85,
	86,
	87,
	3,
	7,
	10,
	13,
	14,
	18,
	22,
	25,
	28,
	29,
	63,
	67,
	70,
	73,
	74,
	78,
	82,
	85,
	88,
	89,
	4,
	8,
	11,
	13,
	15,
	19,
	23,
	26,
	28,
	30,
	64,
	68,
	71,
	73,
	75,
	79,
	83,
	86,
	88,
	90,
	5,
	9,
	12,
	14,
	15,
	20,
	24,
	27,
	29,
	30,
	65,
	69,
	72,
	74,
	75,
	80,
	84,
	87,
	89,
	90,
	31,
	32,
	33,
	34,
	35,
	46,
	47,
	48,
	49,
	50,
	91,
	92,
	93,
	94,
	95,
	106,
	107,
	108,
	109,
	110,
	31,
	36,
	37,
	38,
	39,
	46,
	51,
	52,
	53,
	54,
	91,
	96,
	97,
	98,
	99,
	106,
	111,
	112,
	113,
	114,
	32,
	36,
	40,
	41,
	42,
	47,
	51,
	55,
	56,
	57,
	92,
	96,
	100,
	101,
	102,
	107,
	111,
	115,
	116,
	117,
	33,
	37,
	40,
	43,
	44,
	48,
	52,
	55,
	58,
	59,
	93,
	97,
	100,
	103,
	104,
	108,
	112,
	115,
	118,
	119,
	34,
	38,
	41,
	43,
	45,
	49,
	53,
	56,
	58,
	60,
	94,
	98,
	101,
	103,
	105,
	109,
	113,
	116,
	118,
	120,
	35,
	39,
	42,
	44,
	45,
	50,
	54,
	57,
	59,
	60,
	95,
	99,
	102,
	104,
	105,
	110,
	114,
	117,
	119,
	120,
	1,
	16,
	2,
	17,
	3,
	18,
	4,
	19,
	5,
	20,
	6,
	21,
	7,
	22,
	8,
	23,
	9,
	24,
	10,
	25,
	11,
	26,
	12,
	27,
	13,
	28,
	14,
	29,
	15,
	30,
	31,
	46,
	32,
	47,
	33,
	48,
	34,
	49,
	35,
	50,
	36,
	51,
	37,
	52,
	38,
	53,
	39,
	54,
	40,
	55,
	41,
	56,
	42,
	57,
	43,
	58,
	44,
	59,
	45,
	60,
	61,
	121,
	62,
	122,
	63,
	123,
	64,
	124,
	65,
	125,
	66,
	126,
	67,
	127,
	68,
	128,
	69,
	129,
	70,
	130,
	71,
	131,
	72,
	132,
	73,
	133,
	74,
	134,
	75,
	135,
	76,
	121,
	77,
	122,
	78,
	123,
	79,
	124,
	80,
	125,
	81,
	126,
	82,
	127,
	83,
	128,
	84,
	129,
	85,
	130,
	86,
	131,
	87,
	132,
	88,
	133,
	89,
	134,
	90,
	135,
	91,
	121,
	92,
	122,
	93,
	123,
	94,
	124,
	95,
	125,
	96,
	126,
	97,
	127,
	98,
	128,
	99,
	129,
	100,
	130,
	101,
	131,
	102,
	132,
	103,
	133,
	104,
	134,
	105,
	135,
	106,
	121,
	107,
	122,
	108,
	123,
	109,
	124,
	110,
	125,
	111,
	126,
	112,
	127,
	113,
	128,
	114,
	129,
	115,
	130,
	116,
	131,
	117,
	132,
	118,
	133,
	119,
	134,
	120,
	135 };

 real slay06m_boundc_[1+204+270] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		2.5,
		27.5,
		3.5,
		26.5,
		1.5,
		28.5,
		1.,
		29.,
		2.,
		28.,
		2.5,
		27.5,
		3.,
		27.,
		2.5,
		27.5,
		1.5,
		28.5,
		1.5,
		28.5,
		2.,
		28.,
		1.,
		29.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
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
		24.,
		-1.7e308,
		26.,
		-1.7e308,
		26.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.,
		-1.7e308,
		25.,
		-1.7e308,
		25.5,
		-1.7e308,
		24.5,
		-1.7e308,
		24.,
		-1.7e308,
		27.5,
		-1.7e308,
		26.5,
		-1.7e308,
		26.,
		-1.7e308,
		27.,
		-1.7e308,
		26.5,
		-1.7e308,
		25.5,
		-1.7e308,
		24.,
		-1.7e308,
		26.,
		-1.7e308,
		26.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.,
		-1.7e308,
		25.,
		-1.7e308,
		25.5,
		-1.7e308,
		24.5,
		-1.7e308,
		24.,
		-1.7e308,
		27.5,
		-1.7e308,
		26.5,
		-1.7e308,
		26.,
		-1.7e308,
		27.,
		-1.7e308,
		26.5,
		-1.7e308,
		25.5,
		-1.7e308,
		24.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.,
		-1.7e308,
		26.,
		-1.7e308,
		26.,
		-1.7e308,
		26.,
		-1.7e308,
		25.5,
		-1.7e308,
		26.5,
		-1.7e308,
		27.,
		-1.7e308,
		26.5,
		-1.7e308,
		27.5,
		-1.7e308,
		26.5,
		-1.7e308,
		27.5,
		-1.7e308,
		27.,
		-1.7e308,
		24.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.,
		-1.7e308,
		26.,
		-1.7e308,
		26.,
		-1.7e308,
		26.,
		-1.7e308,
		25.5,
		-1.7e308,
		26.5,
		-1.7e308,
		27.,
		-1.7e308,
		26.5,
		-1.7e308,
		27.5,
		-1.7e308,
		26.5,
		-1.7e308,
		27.5,
		-1.7e308,
		27.,
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.};

 real slay06m_x0comn_[102] = {
		2.5,
		3.5,
		1.5,
		1.,
		2.,
		2.5,
		3.,
		2.5,
		1.5,
		1.5,
		2.,
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
		0. };

 static real slay06m_pd[24];
static real slay06m_old_x[102];
static int slay06m_xkind = -1;

 static int
slay06m_xcheck(real *x)
{
	real *x1 = slay06m_old_x, *xe = x + 102;
	errno = 0;
	if (slay06m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	slay06m_xkind = 0;
	return 1;
	}
 real
slay06m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[12], rv;
	fint wantfg = *needfg;
	if (slay06m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -4.;
	slay06m_pd[0] = v[0] * v[0];
	slay06m_pd[1] = v[0] + v[0];
	v[0] = 150. * slay06m_pd[0];
	v[1] = x[6] + -10.;
	slay06m_pd[2] = v[1] * v[1];
	slay06m_pd[3] = v[1] + v[1];
	v[1] = 150. * slay06m_pd[2];
	v[0] += v[1];
	v[1] = x[1] + -10.;
	slay06m_pd[4] = v[1] * v[1];
	slay06m_pd[5] = v[1] + v[1];
	v[1] = 390. * slay06m_pd[4];
	v[0] += v[1];
	v[1] = x[7] + -15.;
	slay06m_pd[6] = v[1] * v[1];
	slay06m_pd[7] = v[1] + v[1];
	v[1] = 390. * slay06m_pd[6];
	v[0] += v[1];
	v[1] = x[2] + -7.;
	slay06m_pd[8] = v[1] * v[1];
	slay06m_pd[9] = v[1] + v[1];
	v[1] = 240. * slay06m_pd[8];
	v[0] += v[1];
	v[1] = x[8] + -9.;
	slay06m_pd[10] = v[1] * v[1];
	slay06m_pd[11] = v[1] + v[1];
	v[1] = 240. * slay06m_pd[10];
	v[0] += v[1];
	v[1] = x[3] + -3.;
	slay06m_pd[12] = v[1] * v[1];
	slay06m_pd[13] = v[1] + v[1];
	v[1] = 70. * slay06m_pd[12];
	v[0] += v[1];
	v[1] = x[9] + -3.;
	slay06m_pd[14] = v[1] * v[1];
	slay06m_pd[15] = v[1] + v[1];
	v[1] = 70. * slay06m_pd[14];
	v[0] += v[1];
	v[1] = x[4] + -20.;
	slay06m_pd[16] = v[1] * v[1];
	slay06m_pd[17] = v[1] + v[1];
	v[1] = 165. * slay06m_pd[16];
	v[0] += v[1];
	v[1] = x[10] + -17.;
	slay06m_pd[18] = v[1] * v[1];
	slay06m_pd[19] = v[1] + v[1];
	v[1] = 165. * slay06m_pd[18];
	v[0] += v[1];
	v[1] = x[5] + -18.;
	slay06m_pd[20] = v[1] * v[1];
	slay06m_pd[21] = v[1] + v[1];
	v[1] = 100. * slay06m_pd[20];
	v[0] += v[1];
	v[1] = x[11] + -8.;
	slay06m_pd[22] = v[1] * v[1];
	slay06m_pd[23] = v[1] + v[1];
	v[1] = 100. * slay06m_pd[22];
	v[0] += v[1];
	rv = v[0] + 300.*x[12];
	rv += 240.*x[13];
	rv += 210.*x[14];
	rv += 140.*x[15];
	rv += 300.*x[16];
	rv += 100.*x[17];
	rv += 150.*x[18];
	rv += 220.*x[19];
	rv += 200.*x[20];
	rv += 120.*x[21];
	rv += 300.*x[22];
	rv += 150.*x[23];
	rv += 100.*x[24];
	rv += 120.*x[25];
	rv += 130.*x[26];
	rv += 300.*x[27];
	rv += 240.*x[28];
	rv += 210.*x[29];
	rv += 140.*x[30];
	rv += 300.*x[31];
	rv += 100.*x[32];
	rv += 150.*x[33];
	rv += 220.*x[34];
	rv += 200.*x[35];
	rv += 120.*x[36];
	rv += 300.*x[37];
	rv += 150.*x[38];
	rv += 100.*x[39];
	rv += 120.*x[40];
	rv += 130.*x[41];
	;}

	if (wantfg & 2) {
	dv[0] = 100.*slay06m_pd[23];
	g[11] = dv[0];
	dv[1] = 100.*slay06m_pd[21];
	g[5] = dv[1];
	dv[2] = 165.*slay06m_pd[19];
	g[10] = dv[2];
	dv[3] = 165.*slay06m_pd[17];
	g[4] = dv[3];
	dv[4] = 70.*slay06m_pd[15];
	g[9] = dv[4];
	dv[5] = 70.*slay06m_pd[13];
	g[3] = dv[5];
	dv[6] = 240.*slay06m_pd[11];
	g[8] = dv[6];
	dv[7] = 240.*slay06m_pd[9];
	g[2] = dv[7];
	dv[8] = 390.*slay06m_pd[7];
	g[7] = dv[8];
	dv[9] = 390.*slay06m_pd[5];
	g[1] = dv[9];
	dv[10] = 150.*slay06m_pd[3];
	g[6] = dv[10];
	dv[11] = 150.*slay06m_pd[1];
	g[0] = dv[11];
	g[12] = 300.;
	g[13] = 240.;
	g[14] = 210.;
	g[15] = 140.;
	g[16] = 300.;
	g[17] = 100.;
	g[18] = 150.;
	g[19] = 220.;
	g[20] = 200.;
	g[21] = 120.;
	g[22] = 300.;
	g[23] = 150.;
	g[24] = 100.;
	g[25] = 120.;
	g[26] = 130.;
	g[27] = 300.;
	g[28] = 240.;
	g[29] = 210.;
	g[30] = 140.;
	g[31] = 300.;
	g[32] = 100.;
	g[33] = 150.;
	g[34] = 220.;
	g[35] = 200.;
	g[36] = 120.;
	g[37] = 300.;
	g[38] = 150.;
	g[39] = 100.;
	g[40] = 120.;
	g[41] = 130.;
	}

	return rv;
}

 void
slay06m_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (slay06m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += x[4];
	t1 += x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += x[5];
	t1 += x[16];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[17];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += x[18];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[1];
	t1 += x[4];
	t1 += x[19];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[1];
	t1 += x[5];
	t1 += x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[21];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[2];
	t1 += x[4];
	t1 += x[22];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[2];
	t1 += x[5];
	t1 += x[23];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[24];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[3];
	t1 += x[5];
	t1 += x[25];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[26];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[12];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += x[13];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += x[14];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[0];
	t1 += -x[4];
	t1 += x[15];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[0];
	t1 += -x[5];
	t1 += x[16];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[17];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += x[18];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += x[19];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[1];
	t1 += -x[5];
	t1 += x[20];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += x[21];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[2];
	t1 += -x[4];
	t1 += x[22];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[2];
	t1 += -x[5];
	t1 += x[23];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += x[24];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[3];
	t1 += -x[5];
	t1 += x[25];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[26];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[27];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += x[28];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[6];
	t1 += x[9];
	t1 += x[29];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[6];
	t1 += x[10];
	t1 += x[30];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[6];
	t1 += x[11];
	t1 += x[31];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += x[32];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += x[33];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[7];
	t1 += x[10];
	t1 += x[34];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[7];
	t1 += x[11];
	t1 += x[35];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += x[36];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[8];
	t1 += x[10];
	t1 += x[37];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[8];
	t1 += x[11];
	t1 += x[38];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[9];
	t1 += x[10];
	t1 += x[39];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[9];
	t1 += x[11];
	t1 += x[40];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[10];
	t1 += x[11];
	t1 += x[41];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[27];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[6];
	t1 += -x[8];
	t1 += x[28];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[6];
	t1 += -x[9];
	t1 += x[29];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[6];
	t1 += -x[10];
	t1 += x[30];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[6];
	t1 += -x[11];
	t1 += x[31];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += x[32];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += x[33];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[7];
	t1 += -x[10];
	t1 += x[34];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[7];
	t1 += -x[11];
	t1 += x[35];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += x[36];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[8];
	t1 += -x[10];
	t1 += x[37];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[8];
	t1 += -x[11];
	t1 += x[38];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[9];
	t1 += -x[10];
	t1 += x[39];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[9];
	t1 += -x[11];
	t1 += x[40];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[10];
	t1 += -x[11];
	t1 += x[41];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 30.*x[42];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += 30.*x[43];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += 30.*x[44];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[0];
	t1 += -x[4];
	t1 += 30.*x[45];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[0];
	t1 += -x[5];
	t1 += 30.*x[46];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += 30.*x[47];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += 30.*x[48];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += 30.*x[49];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[1];
	t1 += -x[5];
	t1 += 30.*x[50];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += 30.*x[51];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[2];
	t1 += -x[4];
	t1 += 30.*x[52];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[2];
	t1 += -x[5];
	t1 += 30.*x[53];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += 30.*x[54];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[3];
	t1 += -x[5];
	t1 += 30.*x[55];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += 30.*x[56];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += 30.*x[57];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += 30.*x[58];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += 30.*x[59];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[0];
	t1 += x[4];
	t1 += 30.*x[60];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[0];
	t1 += x[5];
	t1 += 30.*x[61];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += 30.*x[62];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += 30.*x[63];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[1];
	t1 += x[4];
	t1 += 30.*x[64];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[1];
	t1 += x[5];
	t1 += 30.*x[65];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += 30.*x[66];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = -x[2];
	t1 += x[4];
	t1 += 30.*x[67];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[2];
	t1 += x[5];
	t1 += 30.*x[68];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += 30.*x[69];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = -x[3];
	t1 += x[5];
	t1 += 30.*x[70];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += 30.*x[71];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += 30.*x[72];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[6];
	t1 += -x[8];
	t1 += 30.*x[73];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[6];
	t1 += -x[9];
	t1 += 30.*x[74];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[6];
	t1 += -x[10];
	t1 += 30.*x[75];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[6];
	t1 += -x[11];
	t1 += 30.*x[76];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += 30.*x[77];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += 30.*x[78];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[7];
	t1 += -x[10];
	t1 += 30.*x[79];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[7];
	t1 += -x[11];
	t1 += 30.*x[80];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += 30.*x[81];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[8];
	t1 += -x[10];
	t1 += 30.*x[82];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[8];
	t1 += -x[11];
	t1 += 30.*x[83];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[9];
	t1 += -x[10];
	t1 += 30.*x[84];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[9];
	t1 += -x[11];
	t1 += 30.*x[85];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[10];
	t1 += -x[11];
	t1 += 30.*x[86];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += 30.*x[87];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += 30.*x[88];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -x[6];
	t1 += x[9];
	t1 += 30.*x[89];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -x[6];
	t1 += x[10];
	t1 += 30.*x[90];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = -x[6];
	t1 += x[11];
	t1 += 30.*x[91];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += 30.*x[92];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += 30.*x[93];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -x[7];
	t1 += x[10];
	t1 += 30.*x[94];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -x[7];
	t1 += x[11];
	t1 += 30.*x[95];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += 30.*x[96];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = -x[8];
	t1 += x[10];
	t1 += 30.*x[97];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = -x[8];
	t1 += x[11];
	t1 += 30.*x[98];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = -x[9];
	t1 += x[10];
	t1 += 30.*x[99];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = -x[9];
	t1 += x[11];
	t1 += 30.*x[100];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -x[10];
	t1 += x[11];
	t1 += 30.*x[101];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[42];
	t1 += x[57];
	t1 += x[72];
	t1 += x[87];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[43];
	t1 += x[58];
	t1 += x[73];
	t1 += x[88];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[44];
	t1 += x[59];
	t1 += x[74];
	t1 += x[89];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[45];
	t1 += x[60];
	t1 += x[75];
	t1 += x[90];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[46];
	t1 += x[61];
	t1 += x[76];
	t1 += x[91];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[47];
	t1 += x[62];
	t1 += x[77];
	t1 += x[92];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[48];
	t1 += x[63];
	t1 += x[78];
	t1 += x[93];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[49];
	t1 += x[64];
	t1 += x[79];
	t1 += x[94];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[50];
	t1 += x[65];
	t1 += x[80];
	t1 += x[95];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[51];
	t1 += x[66];
	t1 += x[81];
	t1 += x[96];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[52];
	t1 += x[67];
	t1 += x[82];
	t1 += x[97];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[53];
	t1 += x[68];
	t1 += x[83];
	t1 += x[98];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[54];
	t1 += x[69];
	t1 += x[84];
	t1 += x[99];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[55];
	t1 += x[70];
	t1 += x[85];
	t1 += x[100];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = x[56];
	t1 += x[71];
	t1 += x[86];
	t1 += x[101];
	c[134] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[20] = 1.;
	J[240] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[40] = 1.;
	J[242] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -1.;
	J[60] = 1.;
	J[244] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[80] = 1.;
	J[246] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = -1.;
	J[100] = 1.;
	J[248] = 1.;

   /*** derivatives for constraint 6 ***/

	J[21] = -1.;
	J[41] = 1.;
	J[250] = 1.;

   /*** derivatives for constraint 7 ***/

	J[22] = -1.;
	J[61] = 1.;
	J[252] = 1.;

   /*** derivatives for constraint 8 ***/

	J[23] = -1.;
	J[81] = 1.;
	J[254] = 1.;

   /*** derivatives for constraint 9 ***/

	J[24] = -1.;
	J[101] = 1.;
	J[256] = 1.;

   /*** derivatives for constraint 10 ***/

	J[42] = -1.;
	J[62] = 1.;
	J[258] = 1.;

   /*** derivatives for constraint 11 ***/

	J[43] = -1.;
	J[82] = 1.;
	J[260] = 1.;

   /*** derivatives for constraint 12 ***/

	J[44] = -1.;
	J[102] = 1.;
	J[262] = 1.;

   /*** derivatives for constraint 13 ***/

	J[63] = -1.;
	J[83] = 1.;
	J[264] = 1.;

   /*** derivatives for constraint 14 ***/

	J[64] = -1.;
	J[103] = 1.;
	J[266] = 1.;

   /*** derivatives for constraint 15 ***/

	J[84] = -1.;
	J[104] = 1.;
	J[268] = 1.;

   /*** derivatives for constraint 16 ***/

	J[5] = 1.;
	J[25] = -1.;
	J[241] = 1.;

   /*** derivatives for constraint 17 ***/

	J[6] = 1.;
	J[45] = -1.;
	J[243] = 1.;

   /*** derivatives for constraint 18 ***/

	J[7] = 1.;
	J[65] = -1.;
	J[245] = 1.;

   /*** derivatives for constraint 19 ***/

	J[8] = 1.;
	J[85] = -1.;
	J[247] = 1.;

   /*** derivatives for constraint 20 ***/

	J[9] = 1.;
	J[105] = -1.;
	J[249] = 1.;

   /*** derivatives for constraint 21 ***/

	J[26] = 1.;
	J[46] = -1.;
	J[251] = 1.;

   /*** derivatives for constraint 22 ***/

	J[27] = 1.;
	J[66] = -1.;
	J[253] = 1.;

   /*** derivatives for constraint 23 ***/

	J[28] = 1.;
	J[86] = -1.;
	J[255] = 1.;

   /*** derivatives for constraint 24 ***/

	J[29] = 1.;
	J[106] = -1.;
	J[257] = 1.;

   /*** derivatives for constraint 25 ***/

	J[47] = 1.;
	J[67] = -1.;
	J[259] = 1.;

   /*** derivatives for constraint 26 ***/

	J[48] = 1.;
	J[87] = -1.;
	J[261] = 1.;

   /*** derivatives for constraint 27 ***/

	J[49] = 1.;
	J[107] = -1.;
	J[263] = 1.;

   /*** derivatives for constraint 28 ***/

	J[68] = 1.;
	J[88] = -1.;
	J[265] = 1.;

   /*** derivatives for constraint 29 ***/

	J[69] = 1.;
	J[108] = -1.;
	J[267] = 1.;

   /*** derivatives for constraint 30 ***/

	J[89] = 1.;
	J[109] = -1.;
	J[269] = 1.;

   /*** derivatives for constraint 31 ***/

	J[120] = -1.;
	J[140] = 1.;
	J[270] = 1.;

   /*** derivatives for constraint 32 ***/

	J[121] = -1.;
	J[160] = 1.;
	J[272] = 1.;

   /*** derivatives for constraint 33 ***/

	J[122] = -1.;
	J[180] = 1.;
	J[274] = 1.;

   /*** derivatives for constraint 34 ***/

	J[123] = -1.;
	J[200] = 1.;
	J[276] = 1.;

   /*** derivatives for constraint 35 ***/

	J[124] = -1.;
	J[220] = 1.;
	J[278] = 1.;

   /*** derivatives for constraint 36 ***/

	J[141] = -1.;
	J[161] = 1.;
	J[280] = 1.;

   /*** derivatives for constraint 37 ***/

	J[142] = -1.;
	J[181] = 1.;
	J[282] = 1.;

   /*** derivatives for constraint 38 ***/

	J[143] = -1.;
	J[201] = 1.;
	J[284] = 1.;

   /*** derivatives for constraint 39 ***/

	J[144] = -1.;
	J[221] = 1.;
	J[286] = 1.;

   /*** derivatives for constraint 40 ***/

	J[162] = -1.;
	J[182] = 1.;
	J[288] = 1.;

   /*** derivatives for constraint 41 ***/

	J[163] = -1.;
	J[202] = 1.;
	J[290] = 1.;

   /*** derivatives for constraint 42 ***/

	J[164] = -1.;
	J[222] = 1.;
	J[292] = 1.;

   /*** derivatives for constraint 43 ***/

	J[183] = -1.;
	J[203] = 1.;
	J[294] = 1.;

   /*** derivatives for constraint 44 ***/

	J[184] = -1.;
	J[223] = 1.;
	J[296] = 1.;

   /*** derivatives for constraint 45 ***/

	J[204] = -1.;
	J[224] = 1.;
	J[298] = 1.;

   /*** derivatives for constraint 46 ***/

	J[125] = 1.;
	J[145] = -1.;
	J[271] = 1.;

   /*** derivatives for constraint 47 ***/

	J[126] = 1.;
	J[165] = -1.;
	J[273] = 1.;

   /*** derivatives for constraint 48 ***/

	J[127] = 1.;
	J[185] = -1.;
	J[275] = 1.;

   /*** derivatives for constraint 49 ***/

	J[128] = 1.;
	J[205] = -1.;
	J[277] = 1.;

   /*** derivatives for constraint 50 ***/

	J[129] = 1.;
	J[225] = -1.;
	J[279] = 1.;

   /*** derivatives for constraint 51 ***/

	J[146] = 1.;
	J[166] = -1.;
	J[281] = 1.;

   /*** derivatives for constraint 52 ***/

	J[147] = 1.;
	J[186] = -1.;
	J[283] = 1.;

   /*** derivatives for constraint 53 ***/

	J[148] = 1.;
	J[206] = -1.;
	J[285] = 1.;

   /*** derivatives for constraint 54 ***/

	J[149] = 1.;
	J[226] = -1.;
	J[287] = 1.;

   /*** derivatives for constraint 55 ***/

	J[167] = 1.;
	J[187] = -1.;
	J[289] = 1.;

   /*** derivatives for constraint 56 ***/

	J[168] = 1.;
	J[207] = -1.;
	J[291] = 1.;

   /*** derivatives for constraint 57 ***/

	J[169] = 1.;
	J[227] = -1.;
	J[293] = 1.;

   /*** derivatives for constraint 58 ***/

	J[188] = 1.;
	J[208] = -1.;
	J[295] = 1.;

   /*** derivatives for constraint 59 ***/

	J[189] = 1.;
	J[228] = -1.;
	J[297] = 1.;

   /*** derivatives for constraint 60 ***/

	J[209] = 1.;
	J[229] = -1.;
	J[299] = 1.;

   /*** derivatives for constraint 61 ***/

	J[10] = 1.;
	J[30] = -1.;
	J[300] = 30.;

   /*** derivatives for constraint 62 ***/

	J[11] = 1.;
	J[50] = -1.;
	J[302] = 30.;

   /*** derivatives for constraint 63 ***/

	J[12] = 1.;
	J[70] = -1.;
	J[304] = 30.;

   /*** derivatives for constraint 64 ***/

	J[13] = 1.;
	J[90] = -1.;
	J[306] = 30.;

   /*** derivatives for constraint 65 ***/

	J[14] = 1.;
	J[110] = -1.;
	J[308] = 30.;

   /*** derivatives for constraint 66 ***/

	J[31] = 1.;
	J[51] = -1.;
	J[310] = 30.;

   /*** derivatives for constraint 67 ***/

	J[32] = 1.;
	J[71] = -1.;
	J[312] = 30.;

   /*** derivatives for constraint 68 ***/

	J[33] = 1.;
	J[91] = -1.;
	J[314] = 30.;

   /*** derivatives for constraint 69 ***/

	J[34] = 1.;
	J[111] = -1.;
	J[316] = 30.;

   /*** derivatives for constraint 70 ***/

	J[52] = 1.;
	J[72] = -1.;
	J[318] = 30.;

   /*** derivatives for constraint 71 ***/

	J[53] = 1.;
	J[92] = -1.;
	J[320] = 30.;

   /*** derivatives for constraint 72 ***/

	J[54] = 1.;
	J[112] = -1.;
	J[322] = 30.;

   /*** derivatives for constraint 73 ***/

	J[73] = 1.;
	J[93] = -1.;
	J[324] = 30.;

   /*** derivatives for constraint 74 ***/

	J[74] = 1.;
	J[113] = -1.;
	J[326] = 30.;

   /*** derivatives for constraint 75 ***/

	J[94] = 1.;
	J[114] = -1.;
	J[328] = 30.;

   /*** derivatives for constraint 76 ***/

	J[15] = -1.;
	J[35] = 1.;
	J[330] = 30.;

   /*** derivatives for constraint 77 ***/

	J[16] = -1.;
	J[55] = 1.;
	J[332] = 30.;

   /*** derivatives for constraint 78 ***/

	J[17] = -1.;
	J[75] = 1.;
	J[334] = 30.;

   /*** derivatives for constraint 79 ***/

	J[18] = -1.;
	J[95] = 1.;
	J[336] = 30.;

   /*** derivatives for constraint 80 ***/

	J[19] = -1.;
	J[115] = 1.;
	J[338] = 30.;

   /*** derivatives for constraint 81 ***/

	J[36] = -1.;
	J[56] = 1.;
	J[340] = 30.;

   /*** derivatives for constraint 82 ***/

	J[37] = -1.;
	J[76] = 1.;
	J[342] = 30.;

   /*** derivatives for constraint 83 ***/

	J[38] = -1.;
	J[96] = 1.;
	J[344] = 30.;

   /*** derivatives for constraint 84 ***/

	J[39] = -1.;
	J[116] = 1.;
	J[346] = 30.;

   /*** derivatives for constraint 85 ***/

	J[57] = -1.;
	J[77] = 1.;
	J[348] = 30.;

   /*** derivatives for constraint 86 ***/

	J[58] = -1.;
	J[97] = 1.;
	J[350] = 30.;

   /*** derivatives for constraint 87 ***/

	J[59] = -1.;
	J[117] = 1.;
	J[352] = 30.;

   /*** derivatives for constraint 88 ***/

	J[78] = -1.;
	J[98] = 1.;
	J[354] = 30.;

   /*** derivatives for constraint 89 ***/

	J[79] = -1.;
	J[118] = 1.;
	J[356] = 30.;

   /*** derivatives for constraint 90 ***/

	J[99] = -1.;
	J[119] = 1.;
	J[358] = 30.;

   /*** derivatives for constraint 91 ***/

	J[130] = 1.;
	J[150] = -1.;
	J[360] = 30.;

   /*** derivatives for constraint 92 ***/

	J[131] = 1.;
	J[170] = -1.;
	J[362] = 30.;

   /*** derivatives for constraint 93 ***/

	J[132] = 1.;
	J[190] = -1.;
	J[364] = 30.;

   /*** derivatives for constraint 94 ***/

	J[133] = 1.;
	J[210] = -1.;
	J[366] = 30.;

   /*** derivatives for constraint 95 ***/

	J[134] = 1.;
	J[230] = -1.;
	J[368] = 30.;

   /*** derivatives for constraint 96 ***/

	J[151] = 1.;
	J[171] = -1.;
	J[370] = 30.;

   /*** derivatives for constraint 97 ***/

	J[152] = 1.;
	J[191] = -1.;
	J[372] = 30.;

   /*** derivatives for constraint 98 ***/

	J[153] = 1.;
	J[211] = -1.;
	J[374] = 30.;

   /*** derivatives for constraint 99 ***/

	J[154] = 1.;
	J[231] = -1.;
	J[376] = 30.;

   /*** derivatives for constraint 100 ***/

	J[172] = 1.;
	J[192] = -1.;
	J[378] = 30.;

   /*** derivatives for constraint 101 ***/

	J[173] = 1.;
	J[212] = -1.;
	J[380] = 30.;

   /*** derivatives for constraint 102 ***/

	J[174] = 1.;
	J[232] = -1.;
	J[382] = 30.;

   /*** derivatives for constraint 103 ***/

	J[193] = 1.;
	J[213] = -1.;
	J[384] = 30.;

   /*** derivatives for constraint 104 ***/

	J[194] = 1.;
	J[233] = -1.;
	J[386] = 30.;

   /*** derivatives for constraint 105 ***/

	J[214] = 1.;
	J[234] = -1.;
	J[388] = 30.;

   /*** derivatives for constraint 106 ***/

	J[135] = -1.;
	J[155] = 1.;
	J[390] = 30.;

   /*** derivatives for constraint 107 ***/

	J[136] = -1.;
	J[175] = 1.;
	J[392] = 30.;

   /*** derivatives for constraint 108 ***/

	J[137] = -1.;
	J[195] = 1.;
	J[394] = 30.;

   /*** derivatives for constraint 109 ***/

	J[138] = -1.;
	J[215] = 1.;
	J[396] = 30.;

   /*** derivatives for constraint 110 ***/

	J[139] = -1.;
	J[235] = 1.;
	J[398] = 30.;

   /*** derivatives for constraint 111 ***/

	J[156] = -1.;
	J[176] = 1.;
	J[400] = 30.;

   /*** derivatives for constraint 112 ***/

	J[157] = -1.;
	J[196] = 1.;
	J[402] = 30.;

   /*** derivatives for constraint 113 ***/

	J[158] = -1.;
	J[216] = 1.;
	J[404] = 30.;

   /*** derivatives for constraint 114 ***/

	J[159] = -1.;
	J[236] = 1.;
	J[406] = 30.;

   /*** derivatives for constraint 115 ***/

	J[177] = -1.;
	J[197] = 1.;
	J[408] = 30.;

   /*** derivatives for constraint 116 ***/

	J[178] = -1.;
	J[217] = 1.;
	J[410] = 30.;

   /*** derivatives for constraint 117 ***/

	J[179] = -1.;
	J[237] = 1.;
	J[412] = 30.;

   /*** derivatives for constraint 118 ***/

	J[198] = -1.;
	J[218] = 1.;
	J[414] = 30.;

   /*** derivatives for constraint 119 ***/

	J[199] = -1.;
	J[238] = 1.;
	J[416] = 30.;

   /*** derivatives for constraint 120 ***/

	J[219] = -1.;
	J[239] = 1.;
	J[418] = 30.;

   /*** derivatives for constraint 121 ***/

	J[301] = 1.;
	J[331] = 1.;
	J[361] = 1.;
	J[391] = 1.;

   /*** derivatives for constraint 122 ***/

	J[303] = 1.;
	J[333] = 1.;
	J[363] = 1.;
	J[393] = 1.;

   /*** derivatives for constraint 123 ***/

	J[305] = 1.;
	J[335] = 1.;
	J[365] = 1.;
	J[395] = 1.;

   /*** derivatives for constraint 124 ***/

	J[307] = 1.;
	J[337] = 1.;
	J[367] = 1.;
	J[397] = 1.;

   /*** derivatives for constraint 125 ***/

	J[309] = 1.;
	J[339] = 1.;
	J[369] = 1.;
	J[399] = 1.;

   /*** derivatives for constraint 126 ***/

	J[311] = 1.;
	J[341] = 1.;
	J[371] = 1.;
	J[401] = 1.;

   /*** derivatives for constraint 127 ***/

	J[313] = 1.;
	J[343] = 1.;
	J[373] = 1.;
	J[403] = 1.;

   /*** derivatives for constraint 128 ***/

	J[315] = 1.;
	J[345] = 1.;
	J[375] = 1.;
	J[405] = 1.;

   /*** derivatives for constraint 129 ***/

	J[317] = 1.;
	J[347] = 1.;
	J[377] = 1.;
	J[407] = 1.;

   /*** derivatives for constraint 130 ***/

	J[319] = 1.;
	J[349] = 1.;
	J[379] = 1.;
	J[409] = 1.;

   /*** derivatives for constraint 131 ***/

	J[321] = 1.;
	J[351] = 1.;
	J[381] = 1.;
	J[411] = 1.;

   /*** derivatives for constraint 132 ***/

	J[323] = 1.;
	J[353] = 1.;
	J[383] = 1.;
	J[413] = 1.;

   /*** derivatives for constraint 133 ***/

	J[325] = 1.;
	J[355] = 1.;
	J[385] = 1.;
	J[415] = 1.;

   /*** derivatives for constraint 134 ***/

	J[327] = 1.;
	J[357] = 1.;
	J[387] = 1.;
	J[417] = 1.;

   /*** derivatives for constraint 135 ***/

	J[329] = 1.;
	J[359] = 1.;
	J[389] = 1.;
	J[419] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
