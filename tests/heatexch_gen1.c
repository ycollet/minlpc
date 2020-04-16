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
 fint heatexch_gen1_auxcom_[1] = { 48 /* nlc */ };
 fint heatexch_gen1_funcom_[487] = {
	112 /* nvar */,
	1 /* nobj */,
	120 /* ncon */,
	368 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	19,
	26,
	37,
	48,
	55,
	66,
	73,
	81,
	89,
	97,
	105,
	113,
	121,
	129,
	137,
	141,
	145,
	149,
	153,
	155,
	159,
	161,
	163,
	167,
	169,
	171,
	175,
	177,
	179,
	183,
	185,
	187,
	189,
	191,
	193,
	196,
	199,
	202,
	205,
	208,
	211,
	214,
	217,
	220,
	223,
	226,
	229,
	232,
	235,
	238,
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
	305,
	313,
	321,
	329,
	330,
	331,
	331,
	332,
	333,
	333,
	334,
	335,
	335,
	336,
	337,
	337,
	338,
	339,
	340,
	341,
	344,
	347,
	350,
	353,
	356,
	359,
	362,
	365,
	366,
	367,
	368,
	369,

	/* rownos */
	1,
	3,
	49,
	65,
	77,
	101,
	103,
	2,
	4,
	17,
	49,
	50,
	65,
	66,
	102,
	104,
	109,
	111,
	5,
	7,
	51,
	67,
	78,
	105,
	107,
	6,
	8,
	19,
	51,
	52,
	67,
	68,
	106,
	108,
	113,
	115,
	9,
	13,
	22,
	53,
	54,
	69,
	70,
	102,
	106,
	109,
	113,
	10,
	14,
	54,
	70,
	79,
	110,
	114,
	11,
	15,
	24,
	55,
	56,
	71,
	72,
	104,
	108,
	111,
	115,
	12,
	16,
	56,
	72,
	80,
	112,
	116,
	1,
	9,
	33,
	49,
	53,
	59,
	63,
	89,
	2,
	10,
	34,
	50,
	54,
	59,
	63,
	90,
	3,
	11,
	35,
	49,
	55,
	59,
	64,
	91,
	4,
	12,
	36,
	50,
	56,
	59,
	64,
	92,
	5,
	13,
	37,
	51,
	53,
	60,
	63,
	93,
	6,
	14,
	38,
	52,
	54,
	60,
	63,
	94,
	7,
	15,
	39,
	51,
	55,
	60,
	64,
	95,
	8,
	16,
	40,
	52,
	56,
	60,
	64,
	96,
	45,
	57,
	59,
	99,
	46,
	58,
	60,
	100,
	47,
	61,
	63,
	97,
	48,
	62,
	64,
	98,
	25,
	101,
	25,
	26,
	102,
	109,
	26,
	110,
	27,
	103,
	27,
	28,
	104,
	111,
	28,
	112,
	29,
	105,
	29,
	30,
	106,
	113,
	30,
	114,
	31,
	107,
	31,
	32,
	108,
	115,
	32,
	116,
	41,
	117,
	42,
	118,
	43,
	119,
	44,
	120,
	1,
	17,
	81,
	2,
	18,
	82,
	3,
	17,
	81,
	4,
	18,
	82,
	5,
	19,
	83,
	6,
	20,
	84,
	7,
	19,
	83,
	8,
	20,
	84,
	9,
	21,
	85,
	10,
	22,
	86,
	11,
	23,
	87,
	12,
	24,
	88,
	13,
	21,
	85,
	14,
	22,
	86,
	15,
	23,
	87,
	16,
	24,
	88,
	1,
	17,
	2,
	18,
	3,
	17,
	4,
	18,
	5,
	19,
	6,
	20,
	7,
	19,
	8,
	20,
	9,
	21,
	10,
	22,
	11,
	23,
	12,
	24,
	13,
	21,
	14,
	22,
	15,
	23,
	16,
	24,
	25,
	33,
	26,
	34,
	27,
	35,
	28,
	36,
	29,
	37,
	30,
	38,
	31,
	39,
	32,
	40,
	41,
	45,
	42,
	46,
	43,
	47,
	44,
	48,
	18,
	50,
	57,
	66,
	73,
	110,
	112,
	117,
	20,
	52,
	58,
	68,
	74,
	114,
	116,
	118,
	21,
	53,
	61,
	69,
	75,
	101,
	105,
	119,
	23,
	55,
	62,
	71,
	76,
	103,
	107,
	120,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	45,
	46,
	47,
	48,
	89,
	101,
	109,
	90,
	102,
	110,
	91,
	103,
	111,
	92,
	104,
	112,
	93,
	105,
	113,
	94,
	106,
	114,
	95,
	107,
	115,
	96,
	108,
	116,
	99,
	100,
	97,
	98 };

 real heatexch_gen1_boundc_[1+224+240] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		370.,
		650.,
		370.,
		650.,
		370.,
		590.,
		370.,
		590.,
		410.,
		650.,
		410.,
		650.,
		350.,
		500.,
		350.,
		500.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		15.,
		0.,
		15.,
		0.,
		13.,
		0.,
		13.,
		0.,
		15.,
		0.,
		15.,
		0.,
		13.,
		0.,
		13.,
		370.,
		650.,
		370.,
		650.,
		370.,
		650.,
		370.,
		650.,
		370.,
		590.,
		370.,
		590.,
		370.,
		590.,
		370.,
		590.,
		410.,
		650.,
		410.,
		650.,
		350.,
		500.,
		350.,
		500.,
		410.,
		650.,
		410.,
		650.,
		350.,
		500.,
		350.,
		500.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		370.,
		650.,
		370.,
		590.,
		410.,
		650.,
		350.,
		500.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		3700.,
		3700.,
		7400.,
		7400.,
		-2800.,
		-2800.,
		-4400.,
		-4400.,
		-9750.,
		-9750.,
		-6500.,
		-6500.,
		-3600.,
		-3600.,
		-1950.,
		-1950.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		370.,
		1.7e308,
		370.,
		1.7e308,
		-650.,
		1.7e308,
		-500.,
		1.7e308,
		-650.,
		-650.,
		-590.,
		-590.,
		-410.,
		-410.,
		-350.,
		-350.,
		-10.,
		-10.,
		-10.,
		-10.,
		-20.,
		-20.,
		-20.,
		-20.,
		-15.,
		-15.,
		-15.,
		-15.,
		-13.,
		-13.,
		-13.,
		-13.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		680.,
		-1.7e308,
		680.};

 real heatexch_gen1_x0comn_[112] = {
		650.,
		650.,
		590.,
		590.,
		410.,
		410.,
		350.,
		350.,
		2800.,
		2800.,
		1950.,
		1950.,
		3600.,
		3600.,
		1950.,
		1950.,
		0.,
		0.,
		0.,
		0.,
		240.,
		240.,
		240.,
		300.,
		300.,
		300.,
		180.,
		180.,
		180.,
		240.,
		240.,
		240.,
		330.,
		270.,
		270.,
		330.,
		10.,
		10.,
		10.,
		10.,
		20.,
		20.,
		20.,
		20.,
		15.,
		15.,
		13.,
		13.,
		15.,
		15.,
		13.,
		13.,
		650.,
		650.,
		650.,
		650.,
		590.,
		590.,
		590.,
		590.,
		410.,
		410.,
		350.,
		350.,
		410.,
		410.,
		350.,
		350.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		650.,
		590.,
		410.,
		350.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real heatexch_gen1_pd[92];
static real heatexch_gen1_old_x[112];
static int heatexch_gen1_xkind = -1;

 static int
heatexch_gen1_xcheck(real *x)
{
	real *x1 = heatexch_gen1_old_x, *xe = x + 112;
	errno = 0;
	if (heatexch_gen1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	heatexch_gen1_xkind = 0;
	return 1;
	}
 real
heatexch_gen1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (heatexch_gen1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 15.*x[16];
	rv += 15.*x[17];
	rv += 80.*x[18];
	rv += 80.*x[19];
	rv += 150.*x[84];
	rv += 150.*x[85];
	rv += 150.*x[86];
	rv += 150.*x[87];
	rv += 150.*x[88];
	rv += 150.*x[89];
	rv += 150.*x[90];
	rv += 150.*x[91];
	rv += 150.*x[92];
	rv += 150.*x[93];
	rv += 150.*x[94];
	rv += 150.*x[95];
	rv += 150.*x[96];
	rv += 150.*x[97];
	rv += 150.*x[98];
	rv += 150.*x[99];
	rv += 5500.*x[100];
	rv += 5500.*x[101];
	rv += 5500.*x[102];
	rv += 5500.*x[103];
	rv += 5500.*x[104];
	rv += 5500.*x[105];
	rv += 5500.*x[106];
	rv += 5500.*x[107];
	rv += 5500.*x[108];
	rv += 5500.*x[109];
	rv += 5500.*x[110];
	rv += 5500.*x[111];
	;}

	if (wantfg & 2) {
	g[16] = 15.;
	g[17] = 15.;
	g[18] = 80.;
	g[19] = 80.;
	g[84] = 150.;
	g[85] = 150.;
	g[86] = 150.;
	g[87] = 150.;
	g[88] = 150.;
	g[89] = 150.;
	g[90] = 150.;
	g[91] = 150.;
	g[92] = 150.;
	g[93] = 150.;
	g[94] = 150.;
	g[95] = 150.;
	g[96] = 150.;
	g[97] = 150.;
	g[98] = 150.;
	g[99] = 150.;
	g[100] = 5500.;
	g[101] = 5500.;
	g[102] = 5500.;
	g[103] = 5500.;
	g[104] = 5500.;
	g[105] = 5500.;
	g[106] = 5500.;
	g[107] = 5500.;
	g[108] = 5500.;
	g[109] = 5500.;
	g[110] = 5500.;
	g[111] = 5500.;
	}

	return rv;
}

 void
heatexch_gen1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (heatexch_gen1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	heatexch_gen1_pd[0] = x[0] - x[52];
	v[1] = x[36] * heatexch_gen1_pd[0];
	v[2] = -v[1];
	t1 = v[2] + x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	heatexch_gen1_pd[1] = x[1] - x[53];
	v[1] = x[37] * heatexch_gen1_pd[1];
	v[2] = -v[1];
	t1 = v[2] + x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	heatexch_gen1_pd[2] = x[0] - x[54];
	v[1] = x[38] * heatexch_gen1_pd[2];
	v[2] = -v[1];
	t1 = v[2] + x[10];
	c[2] = t1;

  /***  constraint 4  ***/

	heatexch_gen1_pd[3] = x[1] - x[55];
	v[1] = x[39] * heatexch_gen1_pd[3];
	v[2] = -v[1];
	t1 = v[2] + x[11];
	c[3] = t1;

  /***  constraint 5  ***/

	heatexch_gen1_pd[4] = x[2] - x[56];
	v[1] = x[40] * heatexch_gen1_pd[4];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[4] = t1;

  /***  constraint 6  ***/

	heatexch_gen1_pd[5] = x[3] - x[57];
	v[1] = x[41] * heatexch_gen1_pd[5];
	v[2] = -v[1];
	t1 = v[2] + x[13];
	c[5] = t1;

  /***  constraint 7  ***/

	heatexch_gen1_pd[6] = x[2] - x[58];
	v[1] = x[42] * heatexch_gen1_pd[6];
	v[2] = -v[1];
	t1 = v[2] + x[14];
	c[6] = t1;

  /***  constraint 8  ***/

	heatexch_gen1_pd[7] = x[3] - x[59];
	v[1] = x[43] * heatexch_gen1_pd[7];
	v[2] = -v[1];
	t1 = v[2] + x[15];
	c[7] = t1;

  /***  constraint 9  ***/

	heatexch_gen1_pd[8] = x[60] - x[4];
	v[1] = x[44] * heatexch_gen1_pd[8];
	v[2] = -v[1];
	t1 = v[2] + x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	heatexch_gen1_pd[9] = x[61] - x[5];
	v[1] = x[45] * heatexch_gen1_pd[9];
	v[2] = -v[1];
	t1 = v[2] + x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	heatexch_gen1_pd[10] = x[62] - x[6];
	v[1] = x[46] * heatexch_gen1_pd[10];
	v[2] = -v[1];
	t1 = v[2] + x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	heatexch_gen1_pd[11] = x[63] - x[7];
	v[1] = x[47] * heatexch_gen1_pd[11];
	v[2] = -v[1];
	t1 = v[2] + x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	heatexch_gen1_pd[12] = x[64] - x[4];
	v[1] = x[48] * heatexch_gen1_pd[12];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	heatexch_gen1_pd[13] = x[65] - x[5];
	v[1] = x[49] * heatexch_gen1_pd[13];
	v[2] = -v[1];
	t1 = v[2] + x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	heatexch_gen1_pd[14] = x[66] - x[6];
	v[1] = x[50] * heatexch_gen1_pd[14];
	v[2] = -v[1];
	t1 = v[2] + x[14];
	c[14] = t1;

  /***  constraint 16  ***/

	heatexch_gen1_pd[15] = x[67] - x[7];
	v[1] = x[51] * heatexch_gen1_pd[15];
	v[2] = -v[1];
	t1 = v[2] + x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[38] * x[54];
	v[1] = -v[0];
	v[0] = x[36] * x[52];
	v[2] = v[1] - v[0];
	t1 = v[2] + 10.*x[1];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[39] * x[55];
	v[1] = -v[0];
	v[0] = x[37] * x[53];
	v[2] = v[1] - v[0];
	t1 = v[2] + 10.*x[80];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[42] * x[58];
	v[1] = -v[0];
	v[0] = x[40] * x[56];
	v[2] = v[1] - v[0];
	t1 = v[2] + 20.*x[3];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[43] * x[59];
	v[1] = -v[0];
	v[0] = x[41] * x[57];
	v[2] = v[1] - v[0];
	t1 = v[2] + 20.*x[81];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[48] * x[64];
	v[1] = -v[0];
	v[0] = x[44] * x[60];
	v[2] = v[1] - v[0];
	t1 = v[2] + 15.*x[82];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[49] * x[65];
	v[1] = -v[0];
	v[0] = x[45] * x[61];
	v[2] = v[1] - v[0];
	t1 = v[2] + 15.*x[4];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[50] * x[66];
	v[1] = -v[0];
	v[0] = x[46] * x[62];
	v[2] = v[1] - v[0];
	t1 = v[2] + 13.*x[83];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[51] * x[67];
	v[1] = -v[0];
	v[0] = x[47] * x[63];
	v[2] = v[1] - v[0];
	t1 = v[2] + 13.*x[6];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[20] - x[21];
	v[1] = x[21] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[20] / v[1];
	heatexch_gen1_pd[16] = 1. / v[1];
	heatexch_gen1_pd[17] = -v[2] * heatexch_gen1_pd[16];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen1_pd[18] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[19] = 1. / v[1];
	heatexch_gen1_pd[20] = -v[2] * heatexch_gen1_pd[19];
	v[1] = -v[2];
	t1 = v[1] + x[68];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[21] - x[22];
	v[1] = x[22] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[21] / v[1];
	heatexch_gen1_pd[21] = 1. / v[1];
	heatexch_gen1_pd[22] = -v[2] * heatexch_gen1_pd[21];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen1_pd[23] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[24] = 1. / v[1];
	heatexch_gen1_pd[25] = -v[2] * heatexch_gen1_pd[24];
	v[1] = -v[2];
	t1 = v[1] + x[69];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[23] - x[24];
	v[1] = x[24] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[23] / v[1];
	heatexch_gen1_pd[26] = 1. / v[1];
	heatexch_gen1_pd[27] = -v[2] * heatexch_gen1_pd[26];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen1_pd[28] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[29] = 1. / v[1];
	heatexch_gen1_pd[30] = -v[2] * heatexch_gen1_pd[29];
	v[1] = -v[2];
	t1 = v[1] + x[70];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[24] - x[25];
	v[1] = x[25] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[24] / v[1];
	heatexch_gen1_pd[31] = 1. / v[1];
	heatexch_gen1_pd[32] = -v[2] * heatexch_gen1_pd[31];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen1_pd[33] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[34] = 1. / v[1];
	heatexch_gen1_pd[35] = -v[2] * heatexch_gen1_pd[34];
	v[1] = -v[2];
	t1 = v[1] + x[71];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[26] - x[27];
	v[1] = x[27] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[26] / v[1];
	heatexch_gen1_pd[36] = 1. / v[1];
	heatexch_gen1_pd[37] = -v[2] * heatexch_gen1_pd[36];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen1_pd[38] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[39] = 1. / v[1];
	heatexch_gen1_pd[40] = -v[2] * heatexch_gen1_pd[39];
	v[1] = -v[2];
	t1 = v[1] + x[72];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[27] - x[28];
	v[1] = x[28] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[27] / v[1];
	heatexch_gen1_pd[41] = 1. / v[1];
	heatexch_gen1_pd[42] = -v[2] * heatexch_gen1_pd[41];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen1_pd[43] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[44] = 1. / v[1];
	heatexch_gen1_pd[45] = -v[2] * heatexch_gen1_pd[44];
	v[1] = -v[2];
	t1 = v[1] + x[73];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[29] - x[30];
	v[1] = x[30] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[29] / v[1];
	heatexch_gen1_pd[46] = 1. / v[1];
	heatexch_gen1_pd[47] = -v[2] * heatexch_gen1_pd[46];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen1_pd[48] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[49] = 1. / v[1];
	heatexch_gen1_pd[50] = -v[2] * heatexch_gen1_pd[49];
	v[1] = -v[2];
	t1 = v[1] + x[74];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[30] - x[31];
	v[1] = x[31] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[30] / v[1];
	heatexch_gen1_pd[51] = 1. / v[1];
	heatexch_gen1_pd[52] = -v[2] * heatexch_gen1_pd[51];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen1_pd[53] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[54] = 1. / v[1];
	heatexch_gen1_pd[55] = -v[2] * heatexch_gen1_pd[54];
	v[1] = -v[2];
	t1 = v[1] + x[75];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = -2. * x[8];
	v[1] = x[68] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[56] = 1. / v[1];
	heatexch_gen1_pd[57] = -v[2] * heatexch_gen1_pd[56];
	t1 = v[2] + x[84];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = -2. * x[9];
	v[1] = x[69] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[58] = 1. / v[1];
	heatexch_gen1_pd[59] = -v[2] * heatexch_gen1_pd[58];
	t1 = v[2] + x[85];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = -2. * x[10];
	v[1] = x[70] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[60] = 1. / v[1];
	heatexch_gen1_pd[61] = -v[2] * heatexch_gen1_pd[60];
	t1 = v[2] + x[87];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = -2. * x[11];
	v[1] = x[71] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[62] = 1. / v[1];
	heatexch_gen1_pd[63] = -v[2] * heatexch_gen1_pd[62];
	t1 = v[2] + x[88];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = -2. * x[12];
	v[1] = x[72] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[64] = 1. / v[1];
	heatexch_gen1_pd[65] = -v[2] * heatexch_gen1_pd[64];
	t1 = v[2] + x[90];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = -2. * x[13];
	v[1] = x[73] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[66] = 1. / v[1];
	heatexch_gen1_pd[67] = -v[2] * heatexch_gen1_pd[66];
	t1 = v[2] + x[91];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = -2. * x[14];
	v[1] = x[74] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[68] = 1. / v[1];
	heatexch_gen1_pd[69] = -v[2] * heatexch_gen1_pd[68];
	t1 = v[2] + x[93];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = -2. * x[15];
	v[1] = x[75] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[70] = 1. / v[1];
	heatexch_gen1_pd[71] = -v[2] * heatexch_gen1_pd[70];
	t1 = v[2] + x[94];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[32] + -70.;
	v[1] = 0.0142857140816327 * x[32];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen1_pd[72] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen1_pd[73] = 1. / v[2];
	heatexch_gen1_pd[74] = -v[1] * heatexch_gen1_pd[73];
	v[2] = -v[1];
	t1 = v[2] + x[76];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[33] + -70.;
	v[1] = 0.0142857140816327 * x[33];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen1_pd[75] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen1_pd[76] = 1. / v[2];
	heatexch_gen1_pd[77] = -v[1] * heatexch_gen1_pd[76];
	v[2] = -v[1];
	t1 = v[2] + x[77];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[34] + -30.;
	v[1] = 0.0333333322222223 * x[34];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen1_pd[78] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen1_pd[79] = 1. / v[2];
	heatexch_gen1_pd[80] = -v[1] * heatexch_gen1_pd[79];
	v[2] = -v[1];
	t1 = v[2] + x[78];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = x[35] + -180.;
	v[1] = 0.00555555552469136 * x[35];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen1_pd[81] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen1_pd[82] = 1. / v[2];
	heatexch_gen1_pd[83] = -v[1] * heatexch_gen1_pd[82];
	v[2] = -v[1];
	t1 = v[2] + x[79];
	c[43] = t1;

  /***  constraint 45  ***/

	v[0] = -2. * x[16];
	v[1] = x[76] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[84] = 1. / v[1];
	heatexch_gen1_pd[85] = -v[2] * heatexch_gen1_pd[84];
	t1 = v[2] + x[96];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = -2. * x[17];
	v[1] = x[77] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[86] = 1. / v[1];
	heatexch_gen1_pd[87] = -v[2] * heatexch_gen1_pd[86];
	t1 = v[2] + x[97];
	c[45] = t1;

  /***  constraint 47  ***/

	v[0] = -1.2 * x[18];
	v[1] = x[78] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[88] = 1. / v[1];
	heatexch_gen1_pd[89] = -v[2] * heatexch_gen1_pd[88];
	t1 = v[2] + x[98];
	c[46] = t1;

  /***  constraint 48  ***/

	v[0] = -1.2 * x[19];
	v[1] = x[79] + 0.01;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen1_pd[90] = 1. / v[1];
	heatexch_gen1_pd[91] = -v[2] * heatexch_gen1_pd[90];
	t1 = v[2] + x[99];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = 10.*x[0];
	t1 += -10.*x[1];
	t1 += -x[8];
	t1 += -x[10];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = 10.*x[1];
	t1 += -x[9];
	t1 += -x[11];
	t1 += -10.*x[80];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = 20.*x[2];
	t1 += -20.*x[3];
	t1 += -x[12];
	t1 += -x[14];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = 20.*x[3];
	t1 += -x[13];
	t1 += -x[15];
	t1 += -20.*x[81];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -15.*x[4];
	t1 += -x[8];
	t1 += -x[12];
	t1 += 15.*x[82];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = 15.*x[4];
	t1 += -15.*x[5];
	t1 += -x[9];
	t1 += -x[13];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -13.*x[6];
	t1 += -x[10];
	t1 += -x[14];
	t1 += 13.*x[83];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = 13.*x[6];
	t1 += -13.*x[7];
	t1 += -x[11];
	t1 += -x[15];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[16];
	t1 += 10.*x[80];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[17];
	t1 += 20.*x[81];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[11];
	t1 += -x[16];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += -x[14];
	t1 += -x[15];
	t1 += -x[17];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[18];
	t1 += -15.*x[82];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[19];
	t1 += -13.*x[83];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[18];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[10];
	t1 += -x[11];
	t1 += -x[14];
	t1 += -x[15];
	t1 += -x[19];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[0];
	t1 += -x[1];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[1];
	t1 += -x[80];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[2];
	t1 += -x[3];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[3];
	t1 += -x[81];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[4];
	t1 += x[82];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[4];
	t1 += -x[5];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[6];
	t1 += x[83];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[6];
	t1 += -x[7];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[80];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[81];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[82];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[83];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[0];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[2];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[5];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[7];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[36];
	t1 += -x[38];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[37];
	t1 += -x[39];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[40];
	t1 += -x[42];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[41];
	t1 += -x[43];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[44];
	t1 += -x[48];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = -x[45];
	t1 += -x[49];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[46];
	t1 += -x[50];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = -x[47];
	t1 += -x[51];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[8];
	t1 += -2800.*x[100];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[9];
	t1 += -2800.*x[101];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[10];
	t1 += -1950.*x[102];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[11];
	t1 += -1950.*x[103];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[12];
	t1 += -3600.*x[104];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[13];
	t1 += -3600.*x[105];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[14];
	t1 += -1950.*x[106];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[15];
	t1 += -1950.*x[107];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[18];
	t1 += -3600.*x[110];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[19];
	t1 += -1950.*x[111];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[16];
	t1 += -2800.*x[108];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[17];
	t1 += -4400.*x[109];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = -x[0];
	t1 += x[20];
	t1 += x[82];
	t1 += 280.*x[100];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = -x[1];
	t1 += x[4];
	t1 += x[21];
	t1 += 280.*x[101];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = -x[0];
	t1 += x[23];
	t1 += x[83];
	t1 += 130.*x[102];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = -x[1];
	t1 += x[6];
	t1 += x[24];
	t1 += 130.*x[103];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = -x[2];
	t1 += x[26];
	t1 += x[82];
	t1 += 280.*x[104];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[27];
	t1 += 280.*x[105];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = -x[2];
	t1 += x[29];
	t1 += x[83];
	t1 += 130.*x[106];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -x[3];
	t1 += x[6];
	t1 += x[30];
	t1 += 130.*x[107];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -x[1];
	t1 += x[4];
	t1 += x[21];
	t1 += 280.*x[100];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[5];
	t1 += x[22];
	t1 += -x[80];
	t1 += 280.*x[101];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -x[1];
	t1 += x[6];
	t1 += x[24];
	t1 += 130.*x[102];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[7];
	t1 += x[25];
	t1 += -x[80];
	t1 += 130.*x[103];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[27];
	t1 += 280.*x[104];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[5];
	t1 += x[28];
	t1 += -x[81];
	t1 += 280.*x[105];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -x[3];
	t1 += x[6];
	t1 += x[30];
	t1 += 130.*x[106];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[7];
	t1 += x[31];
	t1 += -x[81];
	t1 += 130.*x[107];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[32];
	t1 += -x[80];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[33];
	t1 += -x[81];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[34];
	t1 += x[82];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = x[35];
	t1 += x[83];
	c[119] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[192] = -heatexch_gen1_pd[0];
	J[240] = x[36];
	J[0] = -x[36];
	J[72] = 1.;

   /*** derivatives for constraint 2 ***/

	J[195] = -heatexch_gen1_pd[1];
	J[242] = x[37];
	J[7] = -x[37];
	J[80] = 1.;

   /*** derivatives for constraint 3 ***/

	J[198] = -heatexch_gen1_pd[2];
	J[244] = x[38];
	J[1] = -x[38];
	J[88] = 1.;

   /*** derivatives for constraint 4 ***/

	J[201] = -heatexch_gen1_pd[3];
	J[246] = x[39];
	J[8] = -x[39];
	J[96] = 1.;

   /*** derivatives for constraint 5 ***/

	J[204] = -heatexch_gen1_pd[4];
	J[248] = x[40];
	J[18] = -x[40];
	J[104] = 1.;

   /*** derivatives for constraint 6 ***/

	J[207] = -heatexch_gen1_pd[5];
	J[250] = x[41];
	J[25] = -x[41];
	J[112] = 1.;

   /*** derivatives for constraint 7 ***/

	J[210] = -heatexch_gen1_pd[6];
	J[252] = x[42];
	J[19] = -x[42];
	J[120] = 1.;

   /*** derivatives for constraint 8 ***/

	J[213] = -heatexch_gen1_pd[7];
	J[254] = x[43];
	J[26] = -x[43];
	J[128] = 1.;

   /*** derivatives for constraint 9 ***/

	J[216] = -heatexch_gen1_pd[8];
	J[36] = x[44];
	J[256] = -x[44];
	J[73] = 1.;

   /*** derivatives for constraint 10 ***/

	J[219] = -heatexch_gen1_pd[9];
	J[47] = x[45];
	J[258] = -x[45];
	J[81] = 1.;

   /*** derivatives for constraint 11 ***/

	J[222] = -heatexch_gen1_pd[10];
	J[54] = x[46];
	J[260] = -x[46];
	J[89] = 1.;

   /*** derivatives for constraint 12 ***/

	J[225] = -heatexch_gen1_pd[11];
	J[65] = x[47];
	J[262] = -x[47];
	J[97] = 1.;

   /*** derivatives for constraint 13 ***/

	J[228] = -heatexch_gen1_pd[12];
	J[37] = x[48];
	J[264] = -x[48];
	J[105] = 1.;

   /*** derivatives for constraint 14 ***/

	J[231] = -heatexch_gen1_pd[13];
	J[48] = x[49];
	J[266] = -x[49];
	J[113] = 1.;

   /*** derivatives for constraint 15 ***/

	J[234] = -heatexch_gen1_pd[14];
	J[55] = x[50];
	J[268] = -x[50];
	J[121] = 1.;

   /*** derivatives for constraint 16 ***/

	J[237] = -heatexch_gen1_pd[15];
	J[66] = x[51];
	J[270] = -x[51];
	J[129] = 1.;

   /*** derivatives for constraint 17 ***/

	J[241] = -x[36];
	J[193] = -x[52];
	J[245] = -x[38];
	J[199] = -x[54];
	J[9] = 10.;

   /*** derivatives for constraint 18 ***/

	J[243] = -x[37];
	J[196] = -x[53];
	J[247] = -x[39];
	J[202] = -x[55];
	J[296] = 10.;

   /*** derivatives for constraint 19 ***/

	J[249] = -x[40];
	J[205] = -x[56];
	J[253] = -x[42];
	J[211] = -x[58];
	J[27] = 20.;

   /*** derivatives for constraint 20 ***/

	J[251] = -x[41];
	J[208] = -x[57];
	J[255] = -x[43];
	J[214] = -x[59];
	J[304] = 20.;

   /*** derivatives for constraint 21 ***/

	J[257] = -x[44];
	J[217] = -x[60];
	J[265] = -x[48];
	J[229] = -x[64];
	J[312] = 15.;

   /*** derivatives for constraint 22 ***/

	J[259] = -x[45];
	J[220] = -x[61];
	J[267] = -x[49];
	J[232] = -x[65];
	J[38] = 15.;

   /*** derivatives for constraint 23 ***/

	J[261] = -x[46];
	J[223] = -x[62];
	J[269] = -x[50];
	J[235] = -x[66];
	J[320] = 13.;

   /*** derivatives for constraint 24 ***/

	J[263] = -x[47];
	J[226] = -x[63];
	J[271] = -x[51];
	J[238] = -x[67];
	J[56] = 13.;

   /*** derivatives for constraint 25 ***/

	dv[0] = -heatexch_gen1_pd[20]*heatexch_gen1_pd[18];
	dv[1] = dv[0]*heatexch_gen1_pd[17];
	J[152] = dv[0]*heatexch_gen1_pd[16];
	J[154] = dv[1];
	J[154] += heatexch_gen1_pd[19];
	J[152] -= heatexch_gen1_pd[19];
	J[272] = 1.;

   /*** derivatives for constraint 26 ***/

	dv[0] = -heatexch_gen1_pd[25]*heatexch_gen1_pd[23];
	dv[1] = dv[0]*heatexch_gen1_pd[22];
	J[155] = dv[0]*heatexch_gen1_pd[21];
	J[158] = dv[1];
	J[158] += heatexch_gen1_pd[24];
	J[155] -= heatexch_gen1_pd[24];
	J[274] = 1.;

   /*** derivatives for constraint 27 ***/

	dv[0] = -heatexch_gen1_pd[30]*heatexch_gen1_pd[28];
	dv[1] = dv[0]*heatexch_gen1_pd[27];
	J[160] = dv[0]*heatexch_gen1_pd[26];
	J[162] = dv[1];
	J[162] += heatexch_gen1_pd[29];
	J[160] -= heatexch_gen1_pd[29];
	J[276] = 1.;

   /*** derivatives for constraint 28 ***/

	dv[0] = -heatexch_gen1_pd[35]*heatexch_gen1_pd[33];
	dv[1] = dv[0]*heatexch_gen1_pd[32];
	J[163] = dv[0]*heatexch_gen1_pd[31];
	J[166] = dv[1];
	J[166] += heatexch_gen1_pd[34];
	J[163] -= heatexch_gen1_pd[34];
	J[278] = 1.;

   /*** derivatives for constraint 29 ***/

	dv[0] = -heatexch_gen1_pd[40]*heatexch_gen1_pd[38];
	dv[1] = dv[0]*heatexch_gen1_pd[37];
	J[168] = dv[0]*heatexch_gen1_pd[36];
	J[170] = dv[1];
	J[170] += heatexch_gen1_pd[39];
	J[168] -= heatexch_gen1_pd[39];
	J[280] = 1.;

   /*** derivatives for constraint 30 ***/

	dv[0] = -heatexch_gen1_pd[45]*heatexch_gen1_pd[43];
	dv[1] = dv[0]*heatexch_gen1_pd[42];
	J[171] = dv[0]*heatexch_gen1_pd[41];
	J[174] = dv[1];
	J[174] += heatexch_gen1_pd[44];
	J[171] -= heatexch_gen1_pd[44];
	J[282] = 1.;

   /*** derivatives for constraint 31 ***/

	dv[0] = -heatexch_gen1_pd[50]*heatexch_gen1_pd[48];
	dv[1] = dv[0]*heatexch_gen1_pd[47];
	J[176] = dv[0]*heatexch_gen1_pd[46];
	J[178] = dv[1];
	J[178] += heatexch_gen1_pd[49];
	J[176] -= heatexch_gen1_pd[49];
	J[284] = 1.;

   /*** derivatives for constraint 32 ***/

	dv[0] = -heatexch_gen1_pd[55]*heatexch_gen1_pd[53];
	dv[1] = dv[0]*heatexch_gen1_pd[52];
	J[179] = dv[0]*heatexch_gen1_pd[51];
	J[182] = dv[1];
	J[182] += heatexch_gen1_pd[54];
	J[179] -= heatexch_gen1_pd[54];
	J[286] = 1.;

   /*** derivatives for constraint 33 ***/

	J[273] = heatexch_gen1_pd[57];
	J[74] = -heatexch_gen1_pd[56]*2.;
	J[328] = 1.;

   /*** derivatives for constraint 34 ***/

	J[275] = heatexch_gen1_pd[59];
	J[82] = -heatexch_gen1_pd[58]*2.;
	J[329] = 1.;

   /*** derivatives for constraint 35 ***/

	J[277] = heatexch_gen1_pd[61];
	J[90] = -heatexch_gen1_pd[60]*2.;
	J[330] = 1.;

   /*** derivatives for constraint 36 ***/

	J[279] = heatexch_gen1_pd[63];
	J[98] = -heatexch_gen1_pd[62]*2.;
	J[331] = 1.;

   /*** derivatives for constraint 37 ***/

	J[281] = heatexch_gen1_pd[65];
	J[106] = -heatexch_gen1_pd[64]*2.;
	J[332] = 1.;

   /*** derivatives for constraint 38 ***/

	J[283] = heatexch_gen1_pd[67];
	J[114] = -heatexch_gen1_pd[66]*2.;
	J[333] = 1.;

   /*** derivatives for constraint 39 ***/

	J[285] = heatexch_gen1_pd[69];
	J[122] = -heatexch_gen1_pd[68]*2.;
	J[334] = 1.;

   /*** derivatives for constraint 40 ***/

	J[287] = heatexch_gen1_pd[71];
	J[130] = -heatexch_gen1_pd[70]*2.;
	J[335] = 1.;

   /*** derivatives for constraint 41 ***/

	dv[0] = -heatexch_gen1_pd[74]*heatexch_gen1_pd[72];
	J[184] = dv[0]*0.0142857140816327;
	J[184] -= heatexch_gen1_pd[73];
	J[288] = 1.;

   /*** derivatives for constraint 42 ***/

	dv[0] = -heatexch_gen1_pd[77]*heatexch_gen1_pd[75];
	J[186] = dv[0]*0.0142857140816327;
	J[186] -= heatexch_gen1_pd[76];
	J[290] = 1.;

   /*** derivatives for constraint 43 ***/

	dv[0] = -heatexch_gen1_pd[80]*heatexch_gen1_pd[78];
	J[188] = dv[0]*0.0333333322222223;
	J[188] -= heatexch_gen1_pd[79];
	J[292] = 1.;

   /*** derivatives for constraint 44 ***/

	dv[0] = -heatexch_gen1_pd[83]*heatexch_gen1_pd[81];
	J[190] = dv[0]*0.00555555552469136;
	J[190] -= heatexch_gen1_pd[82];
	J[294] = 1.;

   /*** derivatives for constraint 45 ***/

	J[289] = heatexch_gen1_pd[85];
	J[136] = -heatexch_gen1_pd[84]*2.;
	J[336] = 1.;

   /*** derivatives for constraint 46 ***/

	J[291] = heatexch_gen1_pd[87];
	J[140] = -heatexch_gen1_pd[86]*2.;
	J[337] = 1.;

   /*** derivatives for constraint 47 ***/

	J[293] = heatexch_gen1_pd[89];
	J[144] = -heatexch_gen1_pd[88]*1.2;
	J[338] = 1.;

   /*** derivatives for constraint 48 ***/

	J[295] = heatexch_gen1_pd[91];
	J[148] = -heatexch_gen1_pd[90]*1.2;
	J[339] = 1.;

   /*** derivatives for constraint 49 ***/

	J[2] = 10.;
	J[10] = -10.;
	J[75] = -1.;
	J[91] = -1.;

   /*** derivatives for constraint 50 ***/

	J[11] = 10.;
	J[83] = -1.;
	J[99] = -1.;
	J[297] = -10.;

   /*** derivatives for constraint 51 ***/

	J[20] = 20.;
	J[28] = -20.;
	J[107] = -1.;
	J[123] = -1.;

   /*** derivatives for constraint 52 ***/

	J[29] = 20.;
	J[115] = -1.;
	J[131] = -1.;
	J[305] = -20.;

   /*** derivatives for constraint 53 ***/

	J[39] = -15.;
	J[76] = -1.;
	J[108] = -1.;
	J[313] = 15.;

   /*** derivatives for constraint 54 ***/

	J[40] = 15.;
	J[49] = -15.;
	J[84] = -1.;
	J[116] = -1.;

   /*** derivatives for constraint 55 ***/

	J[57] = -13.;
	J[92] = -1.;
	J[124] = -1.;
	J[321] = 13.;

   /*** derivatives for constraint 56 ***/

	J[58] = 13.;
	J[67] = -13.;
	J[100] = -1.;
	J[132] = -1.;

   /*** derivatives for constraint 57 ***/

	J[137] = -1.;
	J[298] = 10.;

   /*** derivatives for constraint 58 ***/

	J[141] = -1.;
	J[306] = 20.;

   /*** derivatives for constraint 59 ***/

	J[77] = -1.;
	J[85] = -1.;
	J[93] = -1.;
	J[101] = -1.;
	J[138] = -1.;

   /*** derivatives for constraint 60 ***/

	J[109] = -1.;
	J[117] = -1.;
	J[125] = -1.;
	J[133] = -1.;
	J[142] = -1.;

   /*** derivatives for constraint 61 ***/

	J[145] = -1.;
	J[314] = -15.;

   /*** derivatives for constraint 62 ***/

	J[149] = -1.;
	J[322] = -13.;

   /*** derivatives for constraint 63 ***/

	J[78] = -1.;
	J[86] = -1.;
	J[110] = -1.;
	J[118] = -1.;
	J[146] = -1.;

   /*** derivatives for constraint 64 ***/

	J[94] = -1.;
	J[102] = -1.;
	J[126] = -1.;
	J[134] = -1.;
	J[150] = -1.;

   /*** derivatives for constraint 65 ***/

	J[3] = 1.;
	J[12] = -1.;

   /*** derivatives for constraint 66 ***/

	J[13] = 1.;
	J[299] = -1.;

   /*** derivatives for constraint 67 ***/

	J[21] = 1.;
	J[30] = -1.;

   /*** derivatives for constraint 68 ***/

	J[31] = 1.;
	J[307] = -1.;

   /*** derivatives for constraint 69 ***/

	J[41] = -1.;
	J[315] = 1.;

   /*** derivatives for constraint 70 ***/

	J[42] = 1.;
	J[50] = -1.;

   /*** derivatives for constraint 71 ***/

	J[59] = -1.;
	J[323] = 1.;

   /*** derivatives for constraint 72 ***/

	J[60] = 1.;
	J[68] = -1.;

   /*** derivatives for constraint 73 ***/

	J[300] = 1.;

   /*** derivatives for constraint 74 ***/

	J[308] = 1.;

   /*** derivatives for constraint 75 ***/

	J[316] = -1.;

   /*** derivatives for constraint 76 ***/

	J[324] = -1.;

   /*** derivatives for constraint 77 ***/

	J[4] = -1.;

   /*** derivatives for constraint 78 ***/

	J[22] = -1.;

   /*** derivatives for constraint 79 ***/

	J[51] = -1.;

   /*** derivatives for constraint 80 ***/

	J[69] = -1.;

   /*** derivatives for constraint 81 ***/

	J[194] = -1.;
	J[200] = -1.;

   /*** derivatives for constraint 82 ***/

	J[197] = -1.;
	J[203] = -1.;

   /*** derivatives for constraint 83 ***/

	J[206] = -1.;
	J[212] = -1.;

   /*** derivatives for constraint 84 ***/

	J[209] = -1.;
	J[215] = -1.;

   /*** derivatives for constraint 85 ***/

	J[218] = -1.;
	J[230] = -1.;

   /*** derivatives for constraint 86 ***/

	J[221] = -1.;
	J[233] = -1.;

   /*** derivatives for constraint 87 ***/

	J[224] = -1.;
	J[236] = -1.;

   /*** derivatives for constraint 88 ***/

	J[227] = -1.;
	J[239] = -1.;

   /*** derivatives for constraint 89 ***/

	J[79] = 1.;
	J[340] = -2800.;

   /*** derivatives for constraint 90 ***/

	J[87] = 1.;
	J[343] = -2800.;

   /*** derivatives for constraint 91 ***/

	J[95] = 1.;
	J[346] = -1950.;

   /*** derivatives for constraint 92 ***/

	J[103] = 1.;
	J[349] = -1950.;

   /*** derivatives for constraint 93 ***/

	J[111] = 1.;
	J[352] = -3600.;

   /*** derivatives for constraint 94 ***/

	J[119] = 1.;
	J[355] = -3600.;

   /*** derivatives for constraint 95 ***/

	J[127] = 1.;
	J[358] = -1950.;

   /*** derivatives for constraint 96 ***/

	J[135] = 1.;
	J[361] = -1950.;

   /*** derivatives for constraint 97 ***/

	J[147] = 1.;
	J[366] = -3600.;

   /*** derivatives for constraint 98 ***/

	J[151] = 1.;
	J[367] = -1950.;

   /*** derivatives for constraint 99 ***/

	J[139] = 1.;
	J[364] = -2800.;

   /*** derivatives for constraint 100 ***/

	J[143] = 1.;
	J[365] = -4400.;

   /*** derivatives for constraint 101 ***/

	J[5] = -1.;
	J[153] = 1.;
	J[317] = 1.;
	J[341] = 280.;

   /*** derivatives for constraint 102 ***/

	J[14] = -1.;
	J[43] = 1.;
	J[156] = 1.;
	J[344] = 280.;

   /*** derivatives for constraint 103 ***/

	J[6] = -1.;
	J[161] = 1.;
	J[325] = 1.;
	J[347] = 130.;

   /*** derivatives for constraint 104 ***/

	J[15] = -1.;
	J[61] = 1.;
	J[164] = 1.;
	J[350] = 130.;

   /*** derivatives for constraint 105 ***/

	J[23] = -1.;
	J[169] = 1.;
	J[318] = 1.;
	J[353] = 280.;

   /*** derivatives for constraint 106 ***/

	J[32] = -1.;
	J[44] = 1.;
	J[172] = 1.;
	J[356] = 280.;

   /*** derivatives for constraint 107 ***/

	J[24] = -1.;
	J[177] = 1.;
	J[326] = 1.;
	J[359] = 130.;

   /*** derivatives for constraint 108 ***/

	J[33] = -1.;
	J[62] = 1.;
	J[180] = 1.;
	J[362] = 130.;

   /*** derivatives for constraint 109 ***/

	J[16] = -1.;
	J[45] = 1.;
	J[157] = 1.;
	J[342] = 280.;

   /*** derivatives for constraint 110 ***/

	J[52] = 1.;
	J[159] = 1.;
	J[301] = -1.;
	J[345] = 280.;

   /*** derivatives for constraint 111 ***/

	J[17] = -1.;
	J[63] = 1.;
	J[165] = 1.;
	J[348] = 130.;

   /*** derivatives for constraint 112 ***/

	J[70] = 1.;
	J[167] = 1.;
	J[302] = -1.;
	J[351] = 130.;

   /*** derivatives for constraint 113 ***/

	J[34] = -1.;
	J[46] = 1.;
	J[173] = 1.;
	J[354] = 280.;

   /*** derivatives for constraint 114 ***/

	J[53] = 1.;
	J[175] = 1.;
	J[309] = -1.;
	J[357] = 280.;

   /*** derivatives for constraint 115 ***/

	J[35] = -1.;
	J[64] = 1.;
	J[181] = 1.;
	J[360] = 130.;

   /*** derivatives for constraint 116 ***/

	J[71] = 1.;
	J[183] = 1.;
	J[310] = -1.;
	J[363] = 130.;

   /*** derivatives for constraint 117 ***/

	J[185] = 1.;
	J[303] = -1.;

   /*** derivatives for constraint 118 ***/

	J[187] = 1.;
	J[311] = -1.;

   /*** derivatives for constraint 119 ***/

	J[189] = 1.;
	J[319] = 1.;

   /*** derivatives for constraint 120 ***/

	J[191] = 1.;
	J[327] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
