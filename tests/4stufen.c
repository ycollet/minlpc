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
 fint four_stufen_auxcom_[1] = { 34 /* nlc */ };
 fint four_stufen_funcom_[468] = {
	149 /* nvar */,
	1 /* nobj */,
	98 /* ncon */,
	312 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	7,
	11,
	15,
	19,
	23,
	25,
	27,
	29,
	31,
	34,
	37,
	40,
	43,
	46,
	49,
	52,
	55,
	60,
	65,
	70,
	75,
	80,
	85,
	90,
	95,
	99,
	103,
	107,
	111,
	114,
	117,
	120,
	123,
	126,
	129,
	132,
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
	159,
	160,
	162,
	163,
	165,
	167,
	170,
	173,
	176,
	179,
	181,
	183,
	185,
	187,
	189,
	191,
	193,
	195,
	197,
	199,
	201,
	203,
	205,
	207,
	209,
	211,
	214,
	217,
	220,
	223,
	225,
	227,
	229,
	231,
	233,
	235,
	237,
	239,
	242,
	245,
	248,
	251,
	253,
	255,
	257,
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
	280,
	281,
	282,
	283,
	284,
	285,
	286,
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

	/* rownos */
	1,
	34,
	37,
	97,
	1,
	34,
	18,
	22,
	35,
	62,
	19,
	23,
	40,
	63,
	20,
	24,
	46,
	64,
	21,
	25,
	48,
	65,
	18,
	36,
	19,
	41,
	20,
	47,
	21,
	49,
	18,
	40,
	62,
	19,
	46,
	63,
	20,
	48,
	64,
	21,
	38,
	65,
	2,
	18,
	41,
	3,
	19,
	47,
	4,
	20,
	49,
	5,
	21,
	39,
	1,
	18,
	26,
	37,
	62,
	1,
	19,
	27,
	37,
	63,
	1,
	20,
	28,
	37,
	64,
	1,
	21,
	29,
	37,
	65,
	1,
	2,
	10,
	18,
	50,
	1,
	3,
	11,
	19,
	51,
	1,
	4,
	12,
	20,
	52,
	1,
	5,
	13,
	21,
	53,
	30,
	42,
	66,
	86,
	31,
	42,
	67,
	87,
	32,
	42,
	68,
	88,
	33,
	42,
	69,
	89,
	2,
	26,
	54,
	3,
	27,
	55,
	4,
	28,
	56,
	5,
	29,
	57,
	2,
	6,
	50,
	3,
	7,
	51,
	4,
	8,
	52,
	5,
	9,
	53,
	22,
	54,
	23,
	55,
	24,
	56,
	25,
	57,
	14,
	70,
	15,
	71,
	16,
	72,
	17,
	73,
	30,
	70,
	31,
	71,
	32,
	72,
	33,
	73,
	38,
	45,
	98,
	42,
	43,
	95,
	44,
	96,
	43,
	82,
	90,
	43,
	83,
	91,
	43,
	84,
	92,
	43,
	85,
	93,
	2,
	14,
	3,
	15,
	4,
	16,
	5,
	17,
	54,
	58,
	55,
	59,
	56,
	60,
	57,
	61,
	6,
	58,
	7,
	59,
	8,
	60,
	9,
	61,
	10,
	58,
	11,
	59,
	12,
	60,
	13,
	61,
	26,
	45,
	66,
	27,
	45,
	67,
	28,
	45,
	68,
	29,
	45,
	69,
	30,
	74,
	31,
	75,
	32,
	76,
	33,
	77,
	22,
	78,
	23,
	79,
	24,
	80,
	25,
	81,
	74,
	78,
	82,
	75,
	79,
	83,
	76,
	80,
	84,
	77,
	81,
	85,
	44,
	78,
	44,
	79,
	44,
	80,
	44,
	81,
	94,
	95,
	97,
	34,
	96,
	98,
	86,
	87,
	88,
	89,
	86,
	87,
	88,
	89,
	86,
	87,
	88,
	89,
	86,
	87,
	88,
	89,
	86,
	87,
	88,
	89,
	86,
	87,
	88,
	89,
	86,
	87,
	88,
	89,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	90,
	91,
	92,
	93,
	90,
	91,
	92,
	93,
	90,
	91,
	92,
	93 };

 real four_stufen_boundc_[1+298+196] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		1.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		5.,
		1.7e308,
		5.,
		1.7e308,
		5.,
		1.7e308,
		5.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
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
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		2.,
		6.,
		2.,
		6.,
		2.,
		6.,
		2.,
		6.,
		1.26,
		6.,
		1.26,
		6.,
		1.26,
		6.,
		1.26,
		6.,
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
		1.,
		1.7e308,
		2.,
		1.7e308,
		1.,
		1.7e308,
		0.1675,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.13e-05,
		1.7e308,
		1.13e-05,
		1.7e308,
		1.13e-05,
		1.7e308,
		1.13e-05,
		1.7e308,
		2.9e-07,
		1.7e308,
		2.9e-07,
		1.7e308,
		2.9e-07,
		1.7e308,
		2.9e-07,
		1.7e308,
		3.e-07,
		1.7e308,
		3.e-07,
		1.7e308,
		3.e-07,
		1.7e308,
		3.e-07,
		1.7e308,
		3.e-07,
		1.7e308,
		3.e-07,
		1.7e308,
		3.e-07,
		1.7e308,
		3.e-07,
		1.7e308,
		0.05,
		1.7e308,
		0.05,
		1.7e308,
		0.05,
		1.7e308,
		0.05,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1800.,
		1800.,
		5.,
		5.,
		0.,
		0.,
		0.,
		0.,
		100.,
		100.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		5047.03634123606,
		5047.03634123606,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real four_stufen_x0comn_[149] = {
		1763.656,
		3.042,
		1800.,
		241.731,
		158.011,
		88.847,
		5.,
		18.176,
		26.048,
		43.416,
		241.731,
		158.011,
		88.847,
		36.344,
		18.176,
		26.048,
		43.416,
		100.,
		1558.269,
		83.72,
		69.163,
		52.503,
		2.956,
		3.317,
		3.737,
		4.248,
		176.503,
		10.861,
		11.542,
		17.256,
		176.572,
		154.169,
		119.85,
		60.852,
		147.804,
		165.863,
		186.858,
		212.397,
		4.,
		4.,
		4.,
		4.,
		3.,
		3.,
		3.,
		3.,
		1121.796,
		1121.796,
		1121.796,
		1121.796,
		36.344,
		10.808,
		216.161,
		1.225,
		2.542,
		1.,
		1.,
		1.,
		1.,
		2.1769e-05,
		2.1769e-05,
		2.1769e-05,
		2.1769e-05,
		1.299,
		1.642,
		2.167,
		3.069,
		1.3,
		1.643,
		2.169,
		3.072,
		0.001,
		0.001,
		0.002,
		0.002,
		8.825,
		0.543,
		0.577,
		0.863,
		198000.,
		12183.696,
		12947.373,
		19357.594,
		0.2,
		0.027,
		0.018,
		0.01,
		1.1,
		0.068,
		0.072,
		0.108,
		2.063,
		0.15,
		0.142,
		0.186,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real four_stufen_pd[71];
static real four_stufen_old_x[149];
static int four_stufen_xkind = -1;

 static int
four_stufen_xcheck(real *x)
{
	real *x1 = four_stufen_old_x, *xe = x + 149;
	errno = 0;
	if (four_stufen_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	four_stufen_xkind = 0;
	return 1;
	}
 real
four_stufen_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (four_stufen_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 3271.22725820856 + x[95];
	rv += x[96];
	rv += x[97];
	rv += x[98];
	rv += x[99];
	rv += x[100];
	;}

	if (wantfg & 2) {
	g[95] = 1.;
	g[96] = 1.;
	g[97] = 1.;
	g[98] = 1.;
	g[99] = 1.;
	g[100] = 1.;
	}

	return rv;
}

 void
four_stufen_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (four_stufen_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[22] * x[18];
	v[1] = x[23] * x[19];
	v[0] += v[1];
	v[1] = x[24] * x[20];
	v[0] += v[1];
	v[1] = x[25] * x[21];
	v[0] += v[1];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[1] = v[0] / x[0];
	four_stufen_pd[0] = 1. / x[0];
	four_stufen_pd[1] = -v[1] * four_stufen_pd[0];
	v[0] = -v[1];
	t1 = v[0] + x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 2.77777777777778e-07 * x[30];
	v[1] = x[34] - x[22];
	v[2] = x[14] - x[22];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[1] / v[2];
	four_stufen_pd[2] = 1. / v[2];
	four_stufen_pd[3] = -v[3] * four_stufen_pd[2];
	v[2] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	four_stufen_pd[4] = 1. / v[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	four_stufen_pd[5] = 1. / v[2];
	four_stufen_pd[6] = -v[3] * four_stufen_pd[5];
	t1 = v[3] + -x[59];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 2.77777777777778e-07 * x[31];
	v[1] = x[35] - x[23];
	v[2] = x[15] - x[23];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[1] / v[2];
	four_stufen_pd[7] = 1. / v[2];
	four_stufen_pd[8] = -v[3] * four_stufen_pd[7];
	v[2] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	four_stufen_pd[9] = 1. / v[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	four_stufen_pd[10] = 1. / v[2];
	four_stufen_pd[11] = -v[3] * four_stufen_pd[10];
	t1 = v[3] + -x[60];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 2.77777777777778e-07 * x[32];
	v[1] = x[36] - x[24];
	v[2] = x[16] - x[24];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[1] / v[2];
	four_stufen_pd[12] = 1. / v[2];
	four_stufen_pd[13] = -v[3] * four_stufen_pd[12];
	v[2] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	four_stufen_pd[14] = 1. / v[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	four_stufen_pd[15] = 1. / v[2];
	four_stufen_pd[16] = -v[3] * four_stufen_pd[15];
	t1 = v[3] + -x[61];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 2.77777777777778e-07 * x[33];
	v[1] = x[37] - x[25];
	v[2] = x[17] - x[25];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[1] / v[2];
	four_stufen_pd[17] = 1. / v[2];
	four_stufen_pd[18] = -v[3] * four_stufen_pd[17];
	v[2] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	four_stufen_pd[19] = 1. / v[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	four_stufen_pd[20] = 1. / v[2];
	four_stufen_pd[21] = -v[3] * four_stufen_pd[20];
	t1 = v[3] + -x[62];
	c[4] = t1;

  /***  constraint 6  ***/

	four_stufen_pd[22] = x[34] * x[34];
	four_stufen_pd[23] = x[34] + x[34];
	v[0] = -0.00012090000000000001 * four_stufen_pd[22];
	v[1] = pow(x[34], 3.);
	if (errno) in_trouble2("pow",x[34],3.);
	if (x[34] != 0.) {
	four_stufen_pd[24] = 3.*(x[34]*x[34]);
	} else {
	four_stufen_pd[24] = 0.;
	}
	v[1] *= 8.000000000000001e-07;
	v[0] += v[1];
	v[1] = pow(x[34], 4.);
	if (errno) in_trouble2("pow",x[34],4.);
	if (x[34] != 0.) {
	four_stufen_pd[25] = 4.*(v[1]/x[34]);
	} else {
	four_stufen_pd[25] = 0.;
	}
	v[1] *= -2.592e-09;
	v[0] += v[1];
	t1 = v[0] + -3.66e-05*x[34];
	t1 += x[67];
	c[5] = t1;

  /***  constraint 7  ***/

	four_stufen_pd[26] = x[35] * x[35];
	four_stufen_pd[27] = x[35] + x[35];
	v[0] = -0.00012090000000000001 * four_stufen_pd[26];
	v[1] = pow(x[35], 3.);
	if (errno) in_trouble2("pow",x[35],3.);
	if (x[35] != 0.) {
	four_stufen_pd[28] = 3.*(x[35]*x[35]);
	} else {
	four_stufen_pd[28] = 0.;
	}
	v[1] *= 8.000000000000001e-07;
	v[0] += v[1];
	v[1] = pow(x[35], 4.);
	if (errno) in_trouble2("pow",x[35],4.);
	if (x[35] != 0.) {
	four_stufen_pd[29] = 4.*(v[1]/x[35]);
	} else {
	four_stufen_pd[29] = 0.;
	}
	v[1] *= -2.592e-09;
	v[0] += v[1];
	t1 = v[0] + -3.66e-05*x[35];
	t1 += x[68];
	c[6] = t1;

  /***  constraint 8  ***/

	four_stufen_pd[30] = x[36] * x[36];
	four_stufen_pd[31] = x[36] + x[36];
	v[0] = -0.00012090000000000001 * four_stufen_pd[30];
	v[1] = pow(x[36], 3.);
	if (errno) in_trouble2("pow",x[36],3.);
	if (x[36] != 0.) {
	four_stufen_pd[32] = 3.*(x[36]*x[36]);
	} else {
	four_stufen_pd[32] = 0.;
	}
	v[1] *= 8.000000000000001e-07;
	v[0] += v[1];
	v[1] = pow(x[36], 4.);
	if (errno) in_trouble2("pow",x[36],4.);
	if (x[36] != 0.) {
	four_stufen_pd[33] = 4.*(v[1]/x[36]);
	} else {
	four_stufen_pd[33] = 0.;
	}
	v[1] *= -2.592e-09;
	v[0] += v[1];
	t1 = v[0] + -3.66e-05*x[36];
	t1 += x[69];
	c[7] = t1;

  /***  constraint 9  ***/

	four_stufen_pd[34] = x[37] * x[37];
	four_stufen_pd[35] = x[37] + x[37];
	v[0] = -0.00012090000000000001 * four_stufen_pd[34];
	v[1] = pow(x[37], 3.);
	if (errno) in_trouble2("pow",x[37],3.);
	if (x[37] != 0.) {
	four_stufen_pd[36] = 3.*(x[37]*x[37]);
	} else {
	four_stufen_pd[36] = 0.;
	}
	v[1] *= 8.000000000000001e-07;
	v[0] += v[1];
	v[1] = pow(x[37], 4.);
	if (errno) in_trouble2("pow",x[37],4.);
	if (x[37] != 0.) {
	four_stufen_pd[37] = 4.*(v[1]/x[37]);
	} else {
	four_stufen_pd[37] = 0.;
	}
	v[1] *= -2.592e-09;
	v[0] += v[1];
	t1 = v[0] + -3.66e-05*x[37];
	t1 += x[70];
	c[8] = t1;

  /***  constraint 10  ***/

	four_stufen_pd[38] = x[22] * x[22];
	four_stufen_pd[39] = x[22] + x[22];
	v[0] = -0.00012090000000000001 * four_stufen_pd[38];
	v[1] = pow(x[22], 3.);
	if (errno) in_trouble2("pow",x[22],3.);
	if (x[22] != 0.) {
	four_stufen_pd[40] = 3.*(x[22]*x[22]);
	} else {
	four_stufen_pd[40] = 0.;
	}
	v[1] *= 8.000000000000001e-07;
	v[0] += v[1];
	v[1] = pow(x[22], 4.);
	if (errno) in_trouble2("pow",x[22],4.);
	if (x[22] != 0.) {
	four_stufen_pd[41] = 4.*(v[1]/x[22]);
	} else {
	four_stufen_pd[41] = 0.;
	}
	v[1] *= -2.592e-09;
	v[0] += v[1];
	t1 = v[0] + -3.66e-05*x[22];
	t1 += x[71];
	c[9] = t1;

  /***  constraint 11  ***/

	four_stufen_pd[42] = x[23] * x[23];
	four_stufen_pd[43] = x[23] + x[23];
	v[0] = -0.00012090000000000001 * four_stufen_pd[42];
	v[1] = pow(x[23], 3.);
	if (errno) in_trouble2("pow",x[23],3.);
	if (x[23] != 0.) {
	four_stufen_pd[44] = 3.*(x[23]*x[23]);
	} else {
	four_stufen_pd[44] = 0.;
	}
	v[1] *= 8.000000000000001e-07;
	v[0] += v[1];
	v[1] = pow(x[23], 4.);
	if (errno) in_trouble2("pow",x[23],4.);
	if (x[23] != 0.) {
	four_stufen_pd[45] = 4.*(v[1]/x[23]);
	} else {
	four_stufen_pd[45] = 0.;
	}
	v[1] *= -2.592e-09;
	v[0] += v[1];
	t1 = v[0] + -3.66e-05*x[23];
	t1 += x[72];
	c[10] = t1;

  /***  constraint 12  ***/

	four_stufen_pd[46] = x[24] * x[24];
	four_stufen_pd[47] = x[24] + x[24];
	v[0] = -0.00012090000000000001 * four_stufen_pd[46];
	v[1] = pow(x[24], 3.);
	if (errno) in_trouble2("pow",x[24],3.);
	if (x[24] != 0.) {
	four_stufen_pd[48] = 3.*(x[24]*x[24]);
	} else {
	four_stufen_pd[48] = 0.;
	}
	v[1] *= 8.000000000000001e-07;
	v[0] += v[1];
	v[1] = pow(x[24], 4.);
	if (errno) in_trouble2("pow",x[24],4.);
	if (x[24] != 0.) {
	four_stufen_pd[49] = 4.*(v[1]/x[24]);
	} else {
	four_stufen_pd[49] = 0.;
	}
	v[1] *= -2.592e-09;
	v[0] += v[1];
	t1 = v[0] + -3.66e-05*x[24];
	t1 += x[73];
	c[11] = t1;

  /***  constraint 13  ***/

	four_stufen_pd[50] = x[25] * x[25];
	four_stufen_pd[51] = x[25] + x[25];
	v[0] = -0.00012090000000000001 * four_stufen_pd[50];
	v[1] = pow(x[25], 3.);
	if (errno) in_trouble2("pow",x[25],3.);
	if (x[25] != 0.) {
	four_stufen_pd[52] = 3.*(x[25]*x[25]);
	} else {
	four_stufen_pd[52] = 0.;
	}
	v[1] *= 8.000000000000001e-07;
	v[0] += v[1];
	v[1] = pow(x[25], 4.);
	if (errno) in_trouble2("pow",x[25],4.);
	if (x[25] != 0.) {
	four_stufen_pd[53] = 4.*(v[1]/x[25]);
	} else {
	four_stufen_pd[53] = 0.;
	}
	v[1] *= -2.592e-09;
	v[0] += v[1];
	t1 = v[0] + -3.66e-05*x[25];
	t1 += x[74];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = 7936.50793650794 * x[42];
	v[1] = pow(v[0], 0.75);
	if (errno) in_trouble2("pow",v[0],0.75);
	if (v[0] > 0.) {
	four_stufen_pd[54] = 0.75*(v[1]/v[0]);
	} else if (0.75 > 1.) {
	four_stufen_pd[54] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.75);
	}
	v[1] *= -1.13572384718704e-08;
	t1 = v[1] + x[59];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = 7936.50793650794 * x[43];
	v[1] = pow(v[0], 0.75);
	if (errno) in_trouble2("pow",v[0],0.75);
	if (v[0] > 0.) {
	four_stufen_pd[55] = 0.75*(v[1]/v[0]);
	} else if (0.75 > 1.) {
	four_stufen_pd[55] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.75);
	}
	v[1] *= -1.13572384718704e-08;
	t1 = v[1] + x[60];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = 7936.50793650794 * x[44];
	v[1] = pow(v[0], 0.75);
	if (errno) in_trouble2("pow",v[0],0.75);
	if (v[0] > 0.) {
	four_stufen_pd[56] = 0.75*(v[1]/v[0]);
	} else if (0.75 > 1.) {
	four_stufen_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.75);
	}
	v[1] *= -1.13572384718704e-08;
	t1 = v[1] + x[61];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = 7936.50793650794 * x[45];
	v[1] = pow(v[0], 0.75);
	if (errno) in_trouble2("pow",v[0],0.75);
	if (v[0] > 0.) {
	four_stufen_pd[57] = 0.75*(v[1]/v[0]);
	} else if (0.75 > 1.) {
	four_stufen_pd[57] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.75);
	}
	v[1] *= -1.13572384718704e-08;
	t1 = v[1] + x[62];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[6] * x[2];
	v[1] = x[14] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[22] * x[18];
	v[1] = -v[2];
	v[0] += v[1];
	c[17] = v[0];

  /***  constraint 19  ***/

	v[0] = x[7] * x[3];
	v[1] = x[15] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[23] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	c[18] = v[0];

  /***  constraint 20  ***/

	v[0] = x[8] * x[4];
	v[1] = x[16] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[24] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	c[19] = v[0];

  /***  constraint 21  ***/

	v[0] = x[9] * x[5];
	v[1] = x[17] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[25] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	c[20] = v[0];

  /***  constraint 22  ***/

	four_stufen_pd[58] = -2.77777777777778e-05 * x[38];
	v[0] = four_stufen_pd[58] * x[2];
	t1 = v[0] + x[83];
	c[21] = t1;

  /***  constraint 23  ***/

	four_stufen_pd[59] = -2.77777777777778e-05 * x[39];
	v[0] = four_stufen_pd[59] * x[3];
	t1 = v[0] + x[84];
	c[22] = t1;

  /***  constraint 24  ***/

	four_stufen_pd[60] = -2.77777777777778e-05 * x[40];
	v[0] = four_stufen_pd[60] * x[4];
	t1 = v[0] + x[85];
	c[23] = t1;

  /***  constraint 25  ***/

	four_stufen_pd[61] = -2.77777777777778e-05 * x[41];
	v[0] = four_stufen_pd[61] * x[5];
	t1 = v[0] + x[86];
	c[24] = t1;

  /***  constraint 26  ***/

	if (x[30] == 0.) {
	zerdiv_(&x[30]);	}
	v[0] = x[18] / x[30];
	four_stufen_pd[62] = 1. / x[30];
	four_stufen_pd[63] = -v[0] * four_stufen_pd[62];
	v[1] = -v[0];
	t1 = v[1] + x[75];
	c[25] = t1;

  /***  constraint 27  ***/

	if (x[31] == 0.) {
	zerdiv_(&x[31]);	}
	v[0] = x[19] / x[31];
	four_stufen_pd[64] = 1. / x[31];
	four_stufen_pd[65] = -v[0] * four_stufen_pd[64];
	v[1] = -v[0];
	t1 = v[1] + x[76];
	c[26] = t1;

  /***  constraint 28  ***/

	if (x[32] == 0.) {
	zerdiv_(&x[32]);	}
	v[0] = x[20] / x[32];
	four_stufen_pd[66] = 1. / x[32];
	four_stufen_pd[67] = -v[0] * four_stufen_pd[66];
	v[1] = -v[0];
	t1 = v[1] + x[77];
	c[27] = t1;

  /***  constraint 29  ***/

	if (x[33] == 0.) {
	zerdiv_(&x[33]);	}
	v[0] = x[21] / x[33];
	four_stufen_pd[68] = 1. / x[33];
	four_stufen_pd[69] = -v[0] * four_stufen_pd[68];
	v[1] = -v[0];
	t1 = v[1] + x[78];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[26] * x[46];
	v[1] = -v[0];
	t1 = v[1] + x[79];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[27] * x[47];
	v[1] = -v[0];
	t1 = v[1] + x[80];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[28] * x[48];
	v[1] = -v[0];
	t1 = v[1] + x[81];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[29] * x[49];
	v[1] = -v[0];
	t1 = v[1] + x[82];
	c[32] = t1;

  /***  constraint 34  ***/

	four_stufen_pd[70] = -4.57380420143865 * x[0];
	v[0] = four_stufen_pd[70] * x[1];
	t1 = v[0] + x[98];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[2];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[6];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[0];
	t1 += -x[18];
	t1 += -x[19];
	t1 += -x[20];
	t1 += -x[21];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[13];
	t1 += x[50];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[17];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[3];
	t1 += -x[10];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[7];
	t1 += -x[14];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[26];
	t1 += -x[27];
	t1 += -x[28];
	t1 += -x[29];
	t1 += x[52];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[53];
	t1 += -x[55];
	t1 += -x[56];
	t1 += -x[57];
	t1 += -x[58];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[54];
	t1 += -x[91];
	t1 += -x[92];
	t1 += -x[93];
	t1 += -x[94];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[51];
	t1 += -x[75];
	t1 += -x[76];
	t1 += -x[77];
	t1 += -x[78];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[4];
	t1 += -x[11];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[8];
	t1 += -x[15];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[5];
	t1 += -x[12];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[9];
	t1 += -x[16];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = 50.*x[22];
	t1 += -x[34];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = 50.*x[23];
	t1 += -x[35];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = 50.*x[24];
	t1 += -x[36];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = 50.*x[25];
	t1 += -x[37];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[30];
	t1 += -65.38084341288*x[38];
	t1 += 65.38084341288*x[63];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[31];
	t1 += -65.38084341288*x[39];
	t1 += 65.38084341288*x[64];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[32];
	t1 += -65.38084341288*x[40];
	t1 += 65.38084341288*x[65];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[33];
	t1 += -65.38084341288*x[41];
	t1 += 65.38084341288*x[66];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[63];
	t1 += x[67];
	t1 += -x[71];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[64];
	t1 += x[68];
	t1 += -x[72];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[65];
	t1 += x[69];
	t1 += -x[73];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[66];
	t1 += x[70];
	t1 += -x[74];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[2];
	t1 += x[10];
	t1 += x[18];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[3];
	t1 += x[11];
	t1 += x[19];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[4];
	t1 += x[12];
	t1 += x[20];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[5];
	t1 += x[13];
	t1 += x[21];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[26];
	t1 += -20.*x[75];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[27];
	t1 += -20.*x[76];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[28];
	t1 += -20.*x[77];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[29];
	t1 += -20.*x[78];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -373.932*x[42];
	t1 += x[46];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -373.932*x[43];
	t1 += x[47];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -373.932*x[44];
	t1 += x[48];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -373.932*x[45];
	t1 += x[49];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -5.55555555555556e-06*x[79];
	t1 += x[87];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -5.55555555555556e-06*x[80];
	t1 += x[88];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -5.55555555555556e-06*x[81];
	t1 += x[89];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -5.55555555555556e-06*x[82];
	t1 += x[90];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -1.58730158730159*x[83];
	t1 += -1.58730158730159*x[87];
	t1 += x[91];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -1.58730158730159*x[84];
	t1 += -1.58730158730159*x[88];
	t1 += x[92];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -1.58730158730159*x[85];
	t1 += -1.58730158730159*x[89];
	t1 += x[93];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -1.58730158730159*x[86];
	t1 += -1.58730158730159*x[90];
	t1 += x[94];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[55];
	t1 += -0.909090909090909*x[87];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[56];
	t1 += -0.909090909090909*x[88];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[57];
	t1 += -0.909090909090909*x[89];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[58];
	t1 += -0.909090909090909*x[90];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[26];
	t1 += -x[101];
	t1 += -2.*x[105];
	t1 += -4.*x[109];
	t1 += -8.*x[113];
	t1 += -16.*x[117];
	t1 += -32.*x[121];
	t1 += -64.*x[125];
	t1 += -128.*x[129];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[27];
	t1 += -x[102];
	t1 += -2.*x[106];
	t1 += -4.*x[110];
	t1 += -8.*x[114];
	t1 += -16.*x[118];
	t1 += -32.*x[122];
	t1 += -64.*x[126];
	t1 += -128.*x[130];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[28];
	t1 += -x[103];
	t1 += -2.*x[107];
	t1 += -4.*x[111];
	t1 += -8.*x[115];
	t1 += -16.*x[119];
	t1 += -32.*x[123];
	t1 += -64.*x[127];
	t1 += -128.*x[131];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[29];
	t1 += -x[104];
	t1 += -2.*x[108];
	t1 += -4.*x[112];
	t1 += -8.*x[116];
	t1 += -16.*x[120];
	t1 += -32.*x[124];
	t1 += -64.*x[128];
	t1 += -128.*x[132];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[55];
	t1 += -x[133];
	t1 += -2.*x[137];
	t1 += -4.*x[141];
	t1 += -8.*x[145];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[56];
	t1 += -x[134];
	t1 += -2.*x[138];
	t1 += -4.*x[142];
	t1 += -8.*x[146];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[57];
	t1 += -x[135];
	t1 += -2.*x[139];
	t1 += -4.*x[143];
	t1 += -8.*x[147];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[58];
	t1 += -x[136];
	t1 += -2.*x[140];
	t1 += -4.*x[144];
	t1 += -8.*x[148];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[95];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = -292.07386234005*x[53];
	t1 += x[96];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = -2103.94993266178*x[54];
	t1 += x[99];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = -45.7380420143865*x[0];
	t1 += x[97];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = -764.973851088085*x[51];
	t1 += x[100];
	c[97] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -four_stufen_pd[1];
	dv[0] = -four_stufen_pd[0];
	J[69] = dv[0]*x[25];
	J[89] = dv[0]*x[21];
	dv[1] = -four_stufen_pd[0];
	J[64] = dv[1]*x[24];
	J[84] = dv[1]*x[20];
	dv[2] = -four_stufen_pd[0];
	J[59] = dv[2]*x[23];
	J[79] = dv[2]*x[19];
	J[54] = -four_stufen_pd[0]*x[22];
	J[74] = -four_stufen_pd[0]*x[18];
	J[4] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = four_stufen_pd[6]*four_stufen_pd[4];
	dv[1] = dv[0]*four_stufen_pd[3];
	dv[0] *= four_stufen_pd[2];
	J[75] = -dv[1];
	J[42] = dv[1];
	J[75] -= dv[0];
	J[122] = dv[0];
	J[110] = four_stufen_pd[5]*2.77777777777778e-07;
	J[178] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = four_stufen_pd[11]*four_stufen_pd[9];
	dv[1] = dv[0]*four_stufen_pd[8];
	dv[0] *= four_stufen_pd[7];
	J[80] = -dv[1];
	J[45] = dv[1];
	J[80] -= dv[0];
	J[125] = dv[0];
	J[113] = four_stufen_pd[10]*2.77777777777778e-07;
	J[180] = -1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = four_stufen_pd[16]*four_stufen_pd[14];
	dv[1] = dv[0]*four_stufen_pd[13];
	dv[0] *= four_stufen_pd[12];
	J[85] = -dv[1];
	J[48] = dv[1];
	J[85] -= dv[0];
	J[128] = dv[0];
	J[116] = four_stufen_pd[15]*2.77777777777778e-07;
	J[182] = -1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = four_stufen_pd[21]*four_stufen_pd[19];
	dv[1] = dv[0]*four_stufen_pd[18];
	dv[0] *= four_stufen_pd[17];
	J[90] = -dv[1];
	J[51] = dv[1];
	J[90] -= dv[0];
	J[131] = dv[0];
	J[119] = four_stufen_pd[20]*2.77777777777778e-07;
	J[184] = -1.;

   /*** derivatives for constraint 6 ***/

	J[123] = -2.592e-09*four_stufen_pd[25] + -3.66e-05;
	J[123] += 8.000000000000001e-07*four_stufen_pd[24];
	J[123] -= 0.00012090000000000001*four_stufen_pd[23];
	J[194] = 1.;

   /*** derivatives for constraint 7 ***/

	J[126] = -2.592e-09*four_stufen_pd[29] + -3.66e-05;
	J[126] += 8.000000000000001e-07*four_stufen_pd[28];
	J[126] -= 0.00012090000000000001*four_stufen_pd[27];
	J[196] = 1.;

   /*** derivatives for constraint 8 ***/

	J[129] = -2.592e-09*four_stufen_pd[33] + -3.66e-05;
	J[129] += 8.000000000000001e-07*four_stufen_pd[32];
	J[129] -= 0.00012090000000000001*four_stufen_pd[31];
	J[198] = 1.;

   /*** derivatives for constraint 9 ***/

	J[132] = -2.592e-09*four_stufen_pd[37] + -3.66e-05;
	J[132] += 8.000000000000001e-07*four_stufen_pd[36];
	J[132] -= 0.00012090000000000001*four_stufen_pd[35];
	J[200] = 1.;

   /*** derivatives for constraint 10 ***/

	J[76] = -2.592e-09*four_stufen_pd[41] + -3.66e-05;
	J[76] += 8.000000000000001e-07*four_stufen_pd[40];
	J[76] -= 0.00012090000000000001*four_stufen_pd[39];
	J[202] = 1.;

   /*** derivatives for constraint 11 ***/

	J[81] = -2.592e-09*four_stufen_pd[45] + -3.66e-05;
	J[81] += 8.000000000000001e-07*four_stufen_pd[44];
	J[81] -= 0.00012090000000000001*four_stufen_pd[43];
	J[204] = 1.;

   /*** derivatives for constraint 12 ***/

	J[86] = -2.592e-09*four_stufen_pd[49] + -3.66e-05;
	J[86] += 8.000000000000001e-07*four_stufen_pd[48];
	J[86] -= 0.00012090000000000001*four_stufen_pd[47];
	J[206] = 1.;

   /*** derivatives for constraint 13 ***/

	J[91] = -2.592e-09*four_stufen_pd[53] + -3.66e-05;
	J[91] += 8.000000000000001e-07*four_stufen_pd[52];
	J[91] -= 0.00012090000000000001*four_stufen_pd[51];
	J[208] = 1.;

   /*** derivatives for constraint 14 ***/

	dv[0] = -1.13572384718704e-08*four_stufen_pd[54];
	J[142] = dv[0]*7936.50793650794;
	J[179] = 1.;

   /*** derivatives for constraint 15 ***/

	dv[0] = -1.13572384718704e-08*four_stufen_pd[55];
	J[144] = dv[0]*7936.50793650794;
	J[181] = 1.;

   /*** derivatives for constraint 16 ***/

	dv[0] = -1.13572384718704e-08*four_stufen_pd[56];
	J[146] = dv[0]*7936.50793650794;
	J[183] = 1.;

   /*** derivatives for constraint 17 ***/

	dv[0] = -1.13572384718704e-08*four_stufen_pd[57];
	J[148] = dv[0]*7936.50793650794;
	J[185] = 1.;

   /*** derivatives for constraint 18 ***/

	J[55] = -x[22];
	J[77] = -x[18];
	J[30] = -x[14];
	J[43] = -x[10];
	J[6] = x[6];
	J[22] = x[2];

   /*** derivatives for constraint 19 ***/

	J[60] = -x[23];
	J[82] = -x[19];
	J[33] = -x[15];
	J[46] = -x[11];
	J[10] = x[7];
	J[24] = x[3];

   /*** derivatives for constraint 20 ***/

	J[65] = -x[24];
	J[87] = -x[20];
	J[36] = -x[16];
	J[49] = -x[12];
	J[14] = x[8];
	J[26] = x[4];

   /*** derivatives for constraint 21 ***/

	J[70] = -x[25];
	J[92] = -x[21];
	J[39] = -x[17];
	J[52] = -x[13];
	J[18] = x[9];
	J[28] = x[5];

   /*** derivatives for constraint 22 ***/

	J[7] = four_stufen_pd[58];
	J[134] = -x[2]*2.77777777777778e-05;
	J[230] = 1.;

   /*** derivatives for constraint 23 ***/

	J[11] = four_stufen_pd[59];
	J[136] = -x[3]*2.77777777777778e-05;
	J[232] = 1.;

   /*** derivatives for constraint 24 ***/

	J[15] = four_stufen_pd[60];
	J[138] = -x[4]*2.77777777777778e-05;
	J[234] = 1.;

   /*** derivatives for constraint 25 ***/

	J[19] = four_stufen_pd[61];
	J[140] = -x[5]*2.77777777777778e-05;
	J[236] = 1.;

   /*** derivatives for constraint 26 ***/

	J[111] = -four_stufen_pd[63];
	J[56] = -four_stufen_pd[62];
	J[210] = 1.;

   /*** derivatives for constraint 27 ***/

	J[114] = -four_stufen_pd[65];
	J[61] = -four_stufen_pd[64];
	J[213] = 1.;

   /*** derivatives for constraint 28 ***/

	J[117] = -four_stufen_pd[67];
	J[66] = -four_stufen_pd[66];
	J[216] = 1.;

   /*** derivatives for constraint 29 ***/

	J[120] = -four_stufen_pd[69];
	J[71] = -four_stufen_pd[68];
	J[219] = 1.;

   /*** derivatives for constraint 30 ***/

	J[150] = -x[26];
	J[94] = -x[46];
	J[222] = 1.;

   /*** derivatives for constraint 31 ***/

	J[152] = -x[27];
	J[98] = -x[47];
	J[224] = 1.;

   /*** derivatives for constraint 32 ***/

	J[154] = -x[28];
	J[102] = -x[48];
	J[226] = 1.;

   /*** derivatives for constraint 33 ***/

	J[156] = -x[29];
	J[106] = -x[49];
	J[228] = 1.;

   /*** derivatives for constraint 34 ***/

	J[5] = four_stufen_pd[70];
	J[1] = -x[1]*4.57380420143865;
	J[261] = 1.;

   /*** derivatives for constraint 35 ***/

	J[8] = 1.;

   /*** derivatives for constraint 36 ***/

	J[23] = 1.;

   /*** derivatives for constraint 37 ***/

	J[2] = 1.;
	J[57] = -1.;
	J[62] = -1.;
	J[67] = -1.;
	J[72] = -1.;

   /*** derivatives for constraint 38 ***/

	J[40] = -1.;
	J[158] = 1.;

   /*** derivatives for constraint 39 ***/

	J[53] = 1.;

   /*** derivatives for constraint 40 ***/

	J[12] = 1.;
	J[31] = -1.;

   /*** derivatives for constraint 41 ***/

	J[25] = 1.;
	J[44] = -1.;

   /*** derivatives for constraint 42 ***/

	J[95] = -1.;
	J[99] = -1.;
	J[103] = -1.;
	J[107] = -1.;
	J[161] = 1.;

   /*** derivatives for constraint 43 ***/

	J[162] = 1.;
	J[166] = -1.;
	J[169] = -1.;
	J[172] = -1.;
	J[175] = -1.;

   /*** derivatives for constraint 44 ***/

	J[164] = 1.;
	J[250] = -1.;
	J[252] = -1.;
	J[254] = -1.;
	J[256] = -1.;

   /*** derivatives for constraint 45 ***/

	J[159] = 1.;
	J[211] = -1.;
	J[214] = -1.;
	J[217] = -1.;
	J[220] = -1.;

   /*** derivatives for constraint 46 ***/

	J[16] = 1.;
	J[34] = -1.;

   /*** derivatives for constraint 47 ***/

	J[27] = 1.;
	J[47] = -1.;

   /*** derivatives for constraint 48 ***/

	J[20] = 1.;
	J[37] = -1.;

   /*** derivatives for constraint 49 ***/

	J[29] = 1.;
	J[50] = -1.;

   /*** derivatives for constraint 50 ***/

	J[78] = 50.;
	J[124] = -1.;

   /*** derivatives for constraint 51 ***/

	J[83] = 50.;
	J[127] = -1.;

   /*** derivatives for constraint 52 ***/

	J[88] = 50.;
	J[130] = -1.;

   /*** derivatives for constraint 53 ***/

	J[93] = 50.;
	J[133] = -1.;

   /*** derivatives for constraint 54 ***/

	J[112] = 1.;
	J[135] = -65.38084341288;
	J[186] = 65.38084341288;

   /*** derivatives for constraint 55 ***/

	J[115] = 1.;
	J[137] = -65.38084341288;
	J[188] = 65.38084341288;

   /*** derivatives for constraint 56 ***/

	J[118] = 1.;
	J[139] = -65.38084341288;
	J[190] = 65.38084341288;

   /*** derivatives for constraint 57 ***/

	J[121] = 1.;
	J[141] = -65.38084341288;
	J[192] = 65.38084341288;

   /*** derivatives for constraint 58 ***/

	J[187] = -1.;
	J[195] = 1.;
	J[203] = -1.;

   /*** derivatives for constraint 59 ***/

	J[189] = -1.;
	J[197] = 1.;
	J[205] = -1.;

   /*** derivatives for constraint 60 ***/

	J[191] = -1.;
	J[199] = 1.;
	J[207] = -1.;

   /*** derivatives for constraint 61 ***/

	J[193] = -1.;
	J[201] = 1.;
	J[209] = -1.;

   /*** derivatives for constraint 62 ***/

	J[9] = -1.;
	J[32] = 1.;
	J[58] = 1.;

   /*** derivatives for constraint 63 ***/

	J[13] = -1.;
	J[35] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 64 ***/

	J[17] = -1.;
	J[38] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 65 ***/

	J[21] = -1.;
	J[41] = 1.;
	J[73] = 1.;

   /*** derivatives for constraint 66 ***/

	J[96] = 1.;
	J[212] = -20.;

   /*** derivatives for constraint 67 ***/

	J[100] = 1.;
	J[215] = -20.;

   /*** derivatives for constraint 68 ***/

	J[104] = 1.;
	J[218] = -20.;

   /*** derivatives for constraint 69 ***/

	J[108] = 1.;
	J[221] = -20.;

   /*** derivatives for constraint 70 ***/

	J[143] = -373.932;
	J[151] = 1.;

   /*** derivatives for constraint 71 ***/

	J[145] = -373.932;
	J[153] = 1.;

   /*** derivatives for constraint 72 ***/

	J[147] = -373.932;
	J[155] = 1.;

   /*** derivatives for constraint 73 ***/

	J[149] = -373.932;
	J[157] = 1.;

   /*** derivatives for constraint 74 ***/

	J[223] = -5.55555555555556e-06;
	J[238] = 1.;

   /*** derivatives for constraint 75 ***/

	J[225] = -5.55555555555556e-06;
	J[241] = 1.;

   /*** derivatives for constraint 76 ***/

	J[227] = -5.55555555555556e-06;
	J[244] = 1.;

   /*** derivatives for constraint 77 ***/

	J[229] = -5.55555555555556e-06;
	J[247] = 1.;

   /*** derivatives for constraint 78 ***/

	J[231] = -1.58730158730159;
	J[239] = -1.58730158730159;
	J[251] = 1.;

   /*** derivatives for constraint 79 ***/

	J[233] = -1.58730158730159;
	J[242] = -1.58730158730159;
	J[253] = 1.;

   /*** derivatives for constraint 80 ***/

	J[235] = -1.58730158730159;
	J[245] = -1.58730158730159;
	J[255] = 1.;

   /*** derivatives for constraint 81 ***/

	J[237] = -1.58730158730159;
	J[248] = -1.58730158730159;
	J[257] = 1.;

   /*** derivatives for constraint 82 ***/

	J[167] = 1.;
	J[240] = -0.909090909090909;

   /*** derivatives for constraint 83 ***/

	J[170] = 1.;
	J[243] = -0.909090909090909;

   /*** derivatives for constraint 84 ***/

	J[173] = 1.;
	J[246] = -0.909090909090909;

   /*** derivatives for constraint 85 ***/

	J[176] = 1.;
	J[249] = -0.909090909090909;

   /*** derivatives for constraint 86 ***/

	J[97] = 1.;
	J[264] = -1.;
	J[268] = -2.;
	J[272] = -4.;
	J[276] = -8.;
	J[280] = -16.;
	J[284] = -32.;
	J[288] = -64.;
	J[292] = -128.;

   /*** derivatives for constraint 87 ***/

	J[101] = 1.;
	J[265] = -1.;
	J[269] = -2.;
	J[273] = -4.;
	J[277] = -8.;
	J[281] = -16.;
	J[285] = -32.;
	J[289] = -64.;
	J[293] = -128.;

   /*** derivatives for constraint 88 ***/

	J[105] = 1.;
	J[266] = -1.;
	J[270] = -2.;
	J[274] = -4.;
	J[278] = -8.;
	J[282] = -16.;
	J[286] = -32.;
	J[290] = -64.;
	J[294] = -128.;

   /*** derivatives for constraint 89 ***/

	J[109] = 1.;
	J[267] = -1.;
	J[271] = -2.;
	J[275] = -4.;
	J[279] = -8.;
	J[283] = -16.;
	J[287] = -32.;
	J[291] = -64.;
	J[295] = -128.;

   /*** derivatives for constraint 90 ***/

	J[168] = 1.;
	J[296] = -1.;
	J[300] = -2.;
	J[304] = -4.;
	J[308] = -8.;

   /*** derivatives for constraint 91 ***/

	J[171] = 1.;
	J[297] = -1.;
	J[301] = -2.;
	J[305] = -4.;
	J[309] = -8.;

   /*** derivatives for constraint 92 ***/

	J[174] = 1.;
	J[298] = -1.;
	J[302] = -2.;
	J[306] = -4.;
	J[310] = -8.;

   /*** derivatives for constraint 93 ***/

	J[177] = 1.;
	J[299] = -1.;
	J[303] = -2.;
	J[307] = -4.;
	J[311] = -8.;

   /*** derivatives for constraint 94 ***/

	J[258] = 1.;

   /*** derivatives for constraint 95 ***/

	J[163] = -292.07386234005;
	J[259] = 1.;

   /*** derivatives for constraint 96 ***/

	J[165] = -2103.94993266178;
	J[262] = 1.;

   /*** derivatives for constraint 97 ***/

	J[3] = -45.7380420143865;
	J[260] = 1.;

   /*** derivatives for constraint 98 ***/

	J[160] = -764.973851088085;
	J[263] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
