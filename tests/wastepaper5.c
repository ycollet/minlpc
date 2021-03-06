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
 fint wastepaper5_auxcom_[1] = { 24 /* nlc */ };
 fint wastepaper5_funcom_[501] = {
	104 /* nvar */,
	1 /* nobj */,
	46 /* ncon */,
	390 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	11,
	18,
	21,
	29,
	36,
	39,
	47,
	54,
	57,
	65,
	72,
	75,
	83,
	90,
	93,
	101,
	108,
	111,
	119,
	126,
	129,
	137,
	144,
	147,
	155,
	162,
	165,
	173,
	180,
	183,
	191,
	194,
	197,
	200,
	203,
	206,
	209,
	212,
	215,
	218,
	221,
	224,
	227,
	230,
	233,
	236,
	239,
	242,
	245,
	248,
	251,
	254,
	257,
	260,
	263,
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
	341,
	344,
	347,
	350,
	353,
	356,
	359,
	362,
	365,
	368,
	371,
	373,
	374,
	375,
	376,
	379,
	382,
	385,
	388,
	391,

	/* rownos */
	1,
	6,
	2,
	7,
	3,
	8,
	4,
	9,
	5,
	10,
	11,
	12,
	13,
	14,
	15,
	21,
	26,
	1,
	11,
	26,
	1,
	11,
	12,
	13,
	14,
	15,
	23,
	26,
	11,
	12,
	13,
	14,
	15,
	21,
	27,
	2,
	12,
	27,
	2,
	11,
	12,
	13,
	14,
	15,
	23,
	27,
	11,
	12,
	13,
	14,
	15,
	21,
	28,
	3,
	13,
	28,
	3,
	11,
	12,
	13,
	14,
	15,
	23,
	28,
	11,
	12,
	13,
	14,
	15,
	21,
	29,
	4,
	14,
	29,
	4,
	11,
	12,
	13,
	14,
	15,
	23,
	29,
	11,
	12,
	13,
	14,
	15,
	21,
	30,
	5,
	15,
	30,
	5,
	11,
	12,
	13,
	14,
	15,
	23,
	30,
	16,
	17,
	18,
	19,
	20,
	22,
	31,
	6,
	16,
	31,
	6,
	16,
	17,
	18,
	19,
	20,
	24,
	31,
	16,
	17,
	18,
	19,
	20,
	22,
	32,
	7,
	17,
	32,
	7,
	16,
	17,
	18,
	19,
	20,
	24,
	32,
	16,
	17,
	18,
	19,
	20,
	22,
	33,
	8,
	18,
	33,
	8,
	16,
	17,
	18,
	19,
	20,
	24,
	33,
	16,
	17,
	18,
	19,
	20,
	22,
	34,
	9,
	19,
	34,
	9,
	16,
	17,
	18,
	19,
	20,
	24,
	34,
	16,
	17,
	18,
	19,
	20,
	22,
	35,
	10,
	20,
	35,
	10,
	16,
	17,
	18,
	19,
	20,
	24,
	35,
	11,
	16,
	36,
	12,
	17,
	36,
	13,
	18,
	36,
	14,
	19,
	36,
	15,
	20,
	36,
	11,
	16,
	41,
	12,
	17,
	41,
	13,
	18,
	41,
	14,
	19,
	41,
	15,
	20,
	41,
	11,
	16,
	37,
	12,
	17,
	37,
	13,
	18,
	37,
	14,
	19,
	37,
	15,
	20,
	37,
	11,
	16,
	42,
	12,
	17,
	42,
	13,
	18,
	42,
	14,
	19,
	42,
	15,
	20,
	42,
	11,
	16,
	38,
	12,
	17,
	38,
	13,
	18,
	38,
	14,
	19,
	38,
	15,
	20,
	38,
	11,
	16,
	43,
	12,
	17,
	43,
	13,
	18,
	43,
	14,
	19,
	43,
	15,
	20,
	43,
	11,
	16,
	39,
	12,
	17,
	39,
	13,
	18,
	39,
	14,
	19,
	39,
	15,
	20,
	39,
	11,
	16,
	44,
	12,
	17,
	44,
	13,
	18,
	44,
	14,
	19,
	44,
	15,
	20,
	44,
	11,
	16,
	40,
	12,
	17,
	40,
	13,
	18,
	40,
	14,
	19,
	40,
	15,
	20,
	40,
	11,
	16,
	45,
	12,
	17,
	45,
	13,
	18,
	45,
	14,
	19,
	45,
	15,
	20,
	45,
	21,
	22,
	36,
	21,
	22,
	37,
	21,
	22,
	38,
	21,
	22,
	39,
	21,
	22,
	40,
	23,
	24,
	41,
	23,
	24,
	42,
	23,
	24,
	43,
	23,
	24,
	44,
	23,
	24,
	45,
	21,
	25,
	23,
	22,
	24,
	11,
	16,
	46,
	12,
	17,
	46,
	13,
	18,
	46,
	14,
	19,
	46,
	15,
	20,
	46 };

 real wastepaper5_boundc_[1+208+92] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.1,
		0.9,
		0.1,
		0.9,
		0.1,
		0.9,
		0.1,
		0.9,
		0.1,
		0.9,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
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
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		1.,
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
		-1.7e308,
		0.0675,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real wastepaper5_x0comn_[104] = {
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real wastepaper5_pd[20];
static real wastepaper5_old_x[104];
static int wastepaper5_xkind = -1;

 static int
wastepaper5_xcheck(real *x)
{
	real *x1 = wastepaper5_old_x, *xe = x + 104;
	errno = 0;
	if (wastepaper5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wastepaper5_xkind = 0;
	return 1;
	}
 real
wastepaper5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wastepaper5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[98];
	;}

	if (wantfg & 2) {
	g[98] = 1.;
	}

	return rv;
}

 void
wastepaper5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (wastepaper5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	wastepaper5_pd[1] = pow(x[0], 0.29);
	if (errno) in_trouble2("pow",x[0],0.29);
	if (x[0] > 0.) {
	wastepaper5_pd[0] = 0.29*(wastepaper5_pd[1]/x[0]);
	} else if (0.29 > 1.) {
	wastepaper5_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.29);
	}
	v[1] = wastepaper5_pd[1] * x[6];
	t1 = v[1] + -x[7];
	c[0] = t1;

  /***  constraint 2  ***/

	wastepaper5_pd[3] = pow(x[1], 0.13);
	if (errno) in_trouble2("pow",x[1],0.13);
	if (x[1] > 0.) {
	wastepaper5_pd[2] = 0.13*(wastepaper5_pd[3]/x[1]);
	} else if (0.13 > 1.) {
	wastepaper5_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.13);
	}
	v[1] = wastepaper5_pd[3] * x[9];
	t1 = v[1] + -x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	wastepaper5_pd[5] = pow(x[2], 0.06);
	if (errno) in_trouble2("pow",x[2],0.06);
	if (x[2] > 0.) {
	wastepaper5_pd[4] = 0.06*(wastepaper5_pd[5]/x[2]);
	} else if (0.06 > 1.) {
	wastepaper5_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.06);
	}
	v[1] = wastepaper5_pd[5] * x[12];
	t1 = v[1] + -x[13];
	c[2] = t1;

  /***  constraint 4  ***/

	wastepaper5_pd[7] = pow(x[3], 0.15);
	if (errno) in_trouble2("pow",x[3],0.15);
	if (x[3] > 0.) {
	wastepaper5_pd[6] = 0.15*(wastepaper5_pd[7]/x[3]);
	} else if (0.15 > 1.) {
	wastepaper5_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.15);
	}
	v[1] = wastepaper5_pd[7] * x[15];
	t1 = v[1] + -x[16];
	c[3] = t1;

  /***  constraint 5  ***/

	wastepaper5_pd[9] = pow(x[4], 0.2);
	if (errno) in_trouble2("pow",x[4],0.2);
	if (x[4] > 0.) {
	wastepaper5_pd[8] = 0.2*(wastepaper5_pd[9]/x[4]);
	} else if (0.2 > 1.) {
	wastepaper5_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.2);
	}
	v[1] = wastepaper5_pd[9] * x[18];
	t1 = v[1] + -x[19];
	c[4] = t1;

  /***  constraint 6  ***/

	wastepaper5_pd[11] = pow(x[0], 0.74);
	if (errno) in_trouble2("pow",x[0],0.74);
	if (x[0] > 0.) {
	wastepaper5_pd[10] = 0.74*(wastepaper5_pd[11]/x[0]);
	} else if (0.74 > 1.) {
	wastepaper5_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.74);
	}
	v[1] = wastepaper5_pd[11] * x[21];
	t1 = v[1] + -x[22];
	c[5] = t1;

  /***  constraint 7  ***/

	wastepaper5_pd[13] = pow(x[1], 0.79);
	if (errno) in_trouble2("pow",x[1],0.79);
	if (x[1] > 0.) {
	wastepaper5_pd[12] = 0.79*(wastepaper5_pd[13]/x[1]);
	} else if (0.79 > 1.) {
	wastepaper5_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.79);
	}
	v[1] = wastepaper5_pd[13] * x[24];
	t1 = v[1] + -x[25];
	c[6] = t1;

  /***  constraint 8  ***/

	wastepaper5_pd[15] = pow(x[2], 0.71);
	if (errno) in_trouble2("pow",x[2],0.71);
	if (x[2] > 0.) {
	wastepaper5_pd[14] = 0.71*(wastepaper5_pd[15]/x[2]);
	} else if (0.71 > 1.) {
	wastepaper5_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.71);
	}
	v[1] = wastepaper5_pd[15] * x[27];
	t1 = v[1] + -x[28];
	c[7] = t1;

  /***  constraint 9  ***/

	wastepaper5_pd[17] = pow(x[3], 0.8);
	if (errno) in_trouble2("pow",x[3],0.8);
	if (x[3] > 0.) {
	wastepaper5_pd[16] = 0.8*(wastepaper5_pd[17]/x[3]);
	} else if (0.8 > 1.) {
	wastepaper5_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.8);
	}
	v[1] = wastepaper5_pd[17] * x[30];
	t1 = v[1] + -x[31];
	c[8] = t1;

  /***  constraint 10  ***/

	wastepaper5_pd[19] = pow(x[4], 0.7);
	if (errno) in_trouble2("pow",x[4],0.7);
	if (x[4] > 0.) {
	wastepaper5_pd[18] = 0.7*(wastepaper5_pd[19]/x[4]);
	} else if (0.7 > 1.) {
	wastepaper5_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.7);
	}
	v[1] = wastepaper5_pd[19] * x[33];
	t1 = v[1] + -x[34];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[35] * x[5];
	v[1] = x[40] * x[7];
	v[0] += v[1];
	v[1] = x[45] * x[8];
	v[0] += v[1];
	v[1] = x[50] * x[10];
	v[0] += v[1];
	v[1] = x[55] * x[11];
	v[0] += v[1];
	v[1] = x[60] * x[13];
	v[0] += v[1];
	v[1] = x[65] * x[14];
	v[0] += v[1];
	v[1] = x[70] * x[16];
	v[0] += v[1];
	v[1] = x[75] * x[17];
	v[0] += v[1];
	v[1] = x[80] * x[19];
	v[0] += v[1];
	t1 = v[0] + -x[6];
	t1 += 0.675*x[99];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[36] * x[5];
	v[1] = x[41] * x[7];
	v[0] += v[1];
	v[1] = x[46] * x[8];
	v[0] += v[1];
	v[1] = x[51] * x[10];
	v[0] += v[1];
	v[1] = x[56] * x[11];
	v[0] += v[1];
	v[1] = x[61] * x[13];
	v[0] += v[1];
	v[1] = x[66] * x[14];
	v[0] += v[1];
	v[1] = x[71] * x[16];
	v[0] += v[1];
	v[1] = x[76] * x[17];
	v[0] += v[1];
	v[1] = x[81] * x[19];
	v[0] += v[1];
	t1 = v[0] + -x[9];
	t1 += 0.675*x[100];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[37] * x[5];
	v[1] = x[42] * x[7];
	v[0] += v[1];
	v[1] = x[47] * x[8];
	v[0] += v[1];
	v[1] = x[52] * x[10];
	v[0] += v[1];
	v[1] = x[57] * x[11];
	v[0] += v[1];
	v[1] = x[62] * x[13];
	v[0] += v[1];
	v[1] = x[67] * x[14];
	v[0] += v[1];
	v[1] = x[72] * x[16];
	v[0] += v[1];
	v[1] = x[77] * x[17];
	v[0] += v[1];
	v[1] = x[82] * x[19];
	v[0] += v[1];
	t1 = v[0] + -x[12];
	t1 += 0.675*x[101];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[38] * x[5];
	v[1] = x[43] * x[7];
	v[0] += v[1];
	v[1] = x[48] * x[8];
	v[0] += v[1];
	v[1] = x[53] * x[10];
	v[0] += v[1];
	v[1] = x[58] * x[11];
	v[0] += v[1];
	v[1] = x[63] * x[13];
	v[0] += v[1];
	v[1] = x[68] * x[14];
	v[0] += v[1];
	v[1] = x[73] * x[16];
	v[0] += v[1];
	v[1] = x[78] * x[17];
	v[0] += v[1];
	v[1] = x[83] * x[19];
	v[0] += v[1];
	t1 = v[0] + -x[15];
	t1 += 0.675*x[102];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[39] * x[5];
	v[1] = x[44] * x[7];
	v[0] += v[1];
	v[1] = x[49] * x[8];
	v[0] += v[1];
	v[1] = x[54] * x[10];
	v[0] += v[1];
	v[1] = x[59] * x[11];
	v[0] += v[1];
	v[1] = x[64] * x[13];
	v[0] += v[1];
	v[1] = x[69] * x[14];
	v[0] += v[1];
	v[1] = x[74] * x[16];
	v[0] += v[1];
	v[1] = x[79] * x[17];
	v[0] += v[1];
	v[1] = x[84] * x[19];
	v[0] += v[1];
	t1 = v[0] + -x[18];
	t1 += 0.675*x[103];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[35] * x[20];
	v[1] = x[40] * x[22];
	v[0] += v[1];
	v[1] = x[45] * x[23];
	v[0] += v[1];
	v[1] = x[50] * x[25];
	v[0] += v[1];
	v[1] = x[55] * x[26];
	v[0] += v[1];
	v[1] = x[60] * x[28];
	v[0] += v[1];
	v[1] = x[65] * x[29];
	v[0] += v[1];
	v[1] = x[70] * x[31];
	v[0] += v[1];
	v[1] = x[75] * x[32];
	v[0] += v[1];
	v[1] = x[80] * x[34];
	v[0] += v[1];
	t1 = v[0] + -x[21];
	t1 += 0.649*x[99];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[36] * x[20];
	v[1] = x[41] * x[22];
	v[0] += v[1];
	v[1] = x[46] * x[23];
	v[0] += v[1];
	v[1] = x[51] * x[25];
	v[0] += v[1];
	v[1] = x[56] * x[26];
	v[0] += v[1];
	v[1] = x[61] * x[28];
	v[0] += v[1];
	v[1] = x[66] * x[29];
	v[0] += v[1];
	v[1] = x[71] * x[31];
	v[0] += v[1];
	v[1] = x[76] * x[32];
	v[0] += v[1];
	v[1] = x[81] * x[34];
	v[0] += v[1];
	t1 = v[0] + -x[24];
	t1 += 0.649*x[100];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[37] * x[20];
	v[1] = x[42] * x[22];
	v[0] += v[1];
	v[1] = x[47] * x[23];
	v[0] += v[1];
	v[1] = x[52] * x[25];
	v[0] += v[1];
	v[1] = x[57] * x[26];
	v[0] += v[1];
	v[1] = x[62] * x[28];
	v[0] += v[1];
	v[1] = x[67] * x[29];
	v[0] += v[1];
	v[1] = x[72] * x[31];
	v[0] += v[1];
	v[1] = x[77] * x[32];
	v[0] += v[1];
	v[1] = x[82] * x[34];
	v[0] += v[1];
	t1 = v[0] + -x[27];
	t1 += 0.649*x[101];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[38] * x[20];
	v[1] = x[43] * x[22];
	v[0] += v[1];
	v[1] = x[48] * x[23];
	v[0] += v[1];
	v[1] = x[53] * x[25];
	v[0] += v[1];
	v[1] = x[58] * x[26];
	v[0] += v[1];
	v[1] = x[63] * x[28];
	v[0] += v[1];
	v[1] = x[68] * x[29];
	v[0] += v[1];
	v[1] = x[73] * x[31];
	v[0] += v[1];
	v[1] = x[78] * x[32];
	v[0] += v[1];
	v[1] = x[83] * x[34];
	v[0] += v[1];
	t1 = v[0] + -x[30];
	t1 += 0.649*x[102];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[39] * x[20];
	v[1] = x[44] * x[22];
	v[0] += v[1];
	v[1] = x[49] * x[23];
	v[0] += v[1];
	v[1] = x[54] * x[25];
	v[0] += v[1];
	v[1] = x[59] * x[26];
	v[0] += v[1];
	v[1] = x[64] * x[28];
	v[0] += v[1];
	v[1] = x[69] * x[29];
	v[0] += v[1];
	v[1] = x[74] * x[31];
	v[0] += v[1];
	v[1] = x[79] * x[32];
	v[0] += v[1];
	v[1] = x[84] * x[34];
	v[0] += v[1];
	t1 = v[0] + -x[33];
	t1 += 0.649*x[103];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[85] * x[5];
	v[1] = x[86] * x[8];
	v[0] += v[1];
	v[1] = x[87] * x[11];
	v[0] += v[1];
	v[1] = x[88] * x[14];
	v[0] += v[1];
	v[1] = x[89] * x[17];
	v[0] += v[1];
	t1 = v[0] + -x[95];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[85] * x[20];
	v[1] = x[86] * x[23];
	v[0] += v[1];
	v[1] = x[87] * x[26];
	v[0] += v[1];
	v[1] = x[88] * x[29];
	v[0] += v[1];
	v[1] = x[89] * x[32];
	v[0] += v[1];
	t1 = v[0] + -x[97];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[90] * x[7];
	v[1] = x[91] * x[10];
	v[0] += v[1];
	v[1] = x[92] * x[13];
	v[0] += v[1];
	v[1] = x[93] * x[16];
	v[0] += v[1];
	v[1] = x[94] * x[19];
	v[0] += v[1];
	t1 = v[0] + -x[96];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[90] * x[22];
	v[1] = x[91] * x[25];
	v[0] += v[1];
	v[1] = x[92] * x[28];
	v[0] += v[1];
	v[1] = x[93] * x[31];
	v[0] += v[1];
	v[1] = x[94] * x[34];
	v[0] += v[1];
	t1 = v[0] + -x[98];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[95];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[7];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += x[10];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[11];
	t1 += -x[12];
	t1 += x[13];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[14];
	t1 += -x[15];
	t1 += x[16];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[17];
	t1 += -x[18];
	t1 += x[19];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[20];
	t1 += -x[21];
	t1 += x[22];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[23];
	t1 += -x[24];
	t1 += x[25];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[26];
	t1 += -x[27];
	t1 += x[28];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[29];
	t1 += -x[30];
	t1 += x[31];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[32];
	t1 += -x[33];
	t1 += x[34];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[85];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	t1 += x[86];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[87];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	t1 += x[69];
	t1 += x[88];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[75];
	t1 += x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	t1 += x[89];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[90];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[91];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[92];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[93];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	t1 += x[84];
	t1 += x[94];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[99];
	t1 += x[100];
	t1 += x[101];
	t1 += x[102];
	t1 += x[103];
	c[45] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[17] = wastepaper5_pd[1];
	J[0] = x[6]*wastepaper5_pd[0];
	J[20] = -1.;

   /*** derivatives for constraint 2 ***/

	J[35] = wastepaper5_pd[3];
	J[2] = x[9]*wastepaper5_pd[2];
	J[38] = -1.;

   /*** derivatives for constraint 3 ***/

	J[53] = wastepaper5_pd[5];
	J[4] = x[12]*wastepaper5_pd[4];
	J[56] = -1.;

   /*** derivatives for constraint 4 ***/

	J[71] = wastepaper5_pd[7];
	J[6] = x[15]*wastepaper5_pd[6];
	J[74] = -1.;

   /*** derivatives for constraint 5 ***/

	J[89] = wastepaper5_pd[9];
	J[8] = x[18]*wastepaper5_pd[8];
	J[92] = -1.;

   /*** derivatives for constraint 6 ***/

	J[107] = wastepaper5_pd[11];
	J[1] = x[21]*wastepaper5_pd[10];
	J[110] = -1.;

   /*** derivatives for constraint 7 ***/

	J[125] = wastepaper5_pd[13];
	J[3] = x[24]*wastepaper5_pd[12];
	J[128] = -1.;

   /*** derivatives for constraint 8 ***/

	J[143] = wastepaper5_pd[15];
	J[5] = x[27]*wastepaper5_pd[14];
	J[146] = -1.;

   /*** derivatives for constraint 9 ***/

	J[161] = wastepaper5_pd[17];
	J[7] = x[30]*wastepaper5_pd[16];
	J[164] = -1.;

   /*** derivatives for constraint 10 ***/

	J[179] = wastepaper5_pd[19];
	J[9] = x[33]*wastepaper5_pd[18];
	J[182] = -1.;

   /*** derivatives for constraint 11 ***/

	J[93] = x[80];
	J[325] = x[19];
	J[82] = x[75];
	J[310] = x[17];
	J[75] = x[70];
	J[295] = x[16];
	J[64] = x[65];
	J[280] = x[14];
	J[57] = x[60];
	J[265] = x[13];
	J[46] = x[55];
	J[250] = x[11];
	J[39] = x[50];
	J[235] = x[10];
	J[28] = x[45];
	J[220] = x[8];
	J[21] = x[40];
	J[205] = x[7];
	J[10] = x[35];
	J[190] = x[5];
	J[18] = -1.;
	J[375] = 0.675;

   /*** derivatives for constraint 12 ***/

	J[94] = x[81];
	J[328] = x[19];
	J[83] = x[76];
	J[313] = x[17];
	J[76] = x[71];
	J[298] = x[16];
	J[65] = x[66];
	J[283] = x[14];
	J[58] = x[61];
	J[268] = x[13];
	J[47] = x[56];
	J[253] = x[11];
	J[40] = x[51];
	J[238] = x[10];
	J[29] = x[46];
	J[223] = x[8];
	J[22] = x[41];
	J[208] = x[7];
	J[11] = x[36];
	J[193] = x[5];
	J[36] = -1.;
	J[378] = 0.675;

   /*** derivatives for constraint 13 ***/

	J[95] = x[82];
	J[331] = x[19];
	J[84] = x[77];
	J[316] = x[17];
	J[77] = x[72];
	J[301] = x[16];
	J[66] = x[67];
	J[286] = x[14];
	J[59] = x[62];
	J[271] = x[13];
	J[48] = x[57];
	J[256] = x[11];
	J[41] = x[52];
	J[241] = x[10];
	J[30] = x[47];
	J[226] = x[8];
	J[23] = x[42];
	J[211] = x[7];
	J[12] = x[37];
	J[196] = x[5];
	J[54] = -1.;
	J[381] = 0.675;

   /*** derivatives for constraint 14 ***/

	J[96] = x[83];
	J[334] = x[19];
	J[85] = x[78];
	J[319] = x[17];
	J[78] = x[73];
	J[304] = x[16];
	J[67] = x[68];
	J[289] = x[14];
	J[60] = x[63];
	J[274] = x[13];
	J[49] = x[58];
	J[259] = x[11];
	J[42] = x[53];
	J[244] = x[10];
	J[31] = x[48];
	J[229] = x[8];
	J[24] = x[43];
	J[214] = x[7];
	J[13] = x[38];
	J[199] = x[5];
	J[72] = -1.;
	J[384] = 0.675;

   /*** derivatives for constraint 15 ***/

	J[97] = x[84];
	J[337] = x[19];
	J[86] = x[79];
	J[322] = x[17];
	J[79] = x[74];
	J[307] = x[16];
	J[68] = x[69];
	J[292] = x[14];
	J[61] = x[64];
	J[277] = x[13];
	J[50] = x[59];
	J[262] = x[11];
	J[43] = x[54];
	J[247] = x[10];
	J[32] = x[49];
	J[232] = x[8];
	J[25] = x[44];
	J[217] = x[7];
	J[14] = x[39];
	J[202] = x[5];
	J[90] = -1.;
	J[387] = 0.675;

   /*** derivatives for constraint 16 ***/

	J[183] = x[80];
	J[326] = x[34];
	J[172] = x[75];
	J[311] = x[32];
	J[165] = x[70];
	J[296] = x[31];
	J[154] = x[65];
	J[281] = x[29];
	J[147] = x[60];
	J[266] = x[28];
	J[136] = x[55];
	J[251] = x[26];
	J[129] = x[50];
	J[236] = x[25];
	J[118] = x[45];
	J[221] = x[23];
	J[111] = x[40];
	J[206] = x[22];
	J[100] = x[35];
	J[191] = x[20];
	J[108] = -1.;
	J[376] = 0.649;

   /*** derivatives for constraint 17 ***/

	J[184] = x[81];
	J[329] = x[34];
	J[173] = x[76];
	J[314] = x[32];
	J[166] = x[71];
	J[299] = x[31];
	J[155] = x[66];
	J[284] = x[29];
	J[148] = x[61];
	J[269] = x[28];
	J[137] = x[56];
	J[254] = x[26];
	J[130] = x[51];
	J[239] = x[25];
	J[119] = x[46];
	J[224] = x[23];
	J[112] = x[41];
	J[209] = x[22];
	J[101] = x[36];
	J[194] = x[20];
	J[126] = -1.;
	J[379] = 0.649;

   /*** derivatives for constraint 18 ***/

	J[185] = x[82];
	J[332] = x[34];
	J[174] = x[77];
	J[317] = x[32];
	J[167] = x[72];
	J[302] = x[31];
	J[156] = x[67];
	J[287] = x[29];
	J[149] = x[62];
	J[272] = x[28];
	J[138] = x[57];
	J[257] = x[26];
	J[131] = x[52];
	J[242] = x[25];
	J[120] = x[47];
	J[227] = x[23];
	J[113] = x[42];
	J[212] = x[22];
	J[102] = x[37];
	J[197] = x[20];
	J[144] = -1.;
	J[382] = 0.649;

   /*** derivatives for constraint 19 ***/

	J[186] = x[83];
	J[335] = x[34];
	J[175] = x[78];
	J[320] = x[32];
	J[168] = x[73];
	J[305] = x[31];
	J[157] = x[68];
	J[290] = x[29];
	J[150] = x[63];
	J[275] = x[28];
	J[139] = x[58];
	J[260] = x[26];
	J[132] = x[53];
	J[245] = x[25];
	J[121] = x[48];
	J[230] = x[23];
	J[114] = x[43];
	J[215] = x[22];
	J[103] = x[38];
	J[200] = x[20];
	J[162] = -1.;
	J[385] = 0.649;

   /*** derivatives for constraint 20 ***/

	J[187] = x[84];
	J[338] = x[34];
	J[176] = x[79];
	J[323] = x[32];
	J[169] = x[74];
	J[308] = x[31];
	J[158] = x[69];
	J[293] = x[29];
	J[151] = x[64];
	J[278] = x[28];
	J[140] = x[59];
	J[263] = x[26];
	J[133] = x[54];
	J[248] = x[25];
	J[122] = x[49];
	J[233] = x[23];
	J[115] = x[44];
	J[218] = x[22];
	J[104] = x[39];
	J[203] = x[20];
	J[180] = -1.;
	J[388] = 0.649;

   /*** derivatives for constraint 21 ***/

	J[87] = x[89];
	J[352] = x[17];
	J[69] = x[88];
	J[349] = x[14];
	J[51] = x[87];
	J[346] = x[11];
	J[33] = x[86];
	J[343] = x[8];
	J[15] = x[85];
	J[340] = x[5];
	J[370] = -1.;

   /*** derivatives for constraint 22 ***/

	J[177] = x[89];
	J[353] = x[32];
	J[159] = x[88];
	J[350] = x[29];
	J[141] = x[87];
	J[347] = x[26];
	J[123] = x[86];
	J[344] = x[23];
	J[105] = x[85];
	J[341] = x[20];
	J[373] = -1.;

   /*** derivatives for constraint 23 ***/

	J[98] = x[94];
	J[367] = x[19];
	J[80] = x[93];
	J[364] = x[16];
	J[62] = x[92];
	J[361] = x[13];
	J[44] = x[91];
	J[358] = x[10];
	J[26] = x[90];
	J[355] = x[7];
	J[372] = -1.;

   /*** derivatives for constraint 24 ***/

	J[188] = x[94];
	J[368] = x[34];
	J[170] = x[93];
	J[365] = x[31];
	J[152] = x[92];
	J[362] = x[28];
	J[134] = x[91];
	J[359] = x[25];
	J[116] = x[90];
	J[356] = x[22];
	J[374] = -1.;

   /*** derivatives for constraint 25 ***/

	J[371] = 1.;

   /*** derivatives for constraint 26 ***/

	J[16] = 1.;
	J[19] = -1.;
	J[27] = 1.;

   /*** derivatives for constraint 27 ***/

	J[34] = 1.;
	J[37] = -1.;
	J[45] = 1.;

   /*** derivatives for constraint 28 ***/

	J[52] = 1.;
	J[55] = -1.;
	J[63] = 1.;

   /*** derivatives for constraint 29 ***/

	J[70] = 1.;
	J[73] = -1.;
	J[81] = 1.;

   /*** derivatives for constraint 30 ***/

	J[88] = 1.;
	J[91] = -1.;
	J[99] = 1.;

   /*** derivatives for constraint 31 ***/

	J[106] = 1.;
	J[109] = -1.;
	J[117] = 1.;

   /*** derivatives for constraint 32 ***/

	J[124] = 1.;
	J[127] = -1.;
	J[135] = 1.;

   /*** derivatives for constraint 33 ***/

	J[142] = 1.;
	J[145] = -1.;
	J[153] = 1.;

   /*** derivatives for constraint 34 ***/

	J[160] = 1.;
	J[163] = -1.;
	J[171] = 1.;

   /*** derivatives for constraint 35 ***/

	J[178] = 1.;
	J[181] = -1.;
	J[189] = 1.;

   /*** derivatives for constraint 36 ***/

	J[192] = 1.;
	J[195] = 1.;
	J[198] = 1.;
	J[201] = 1.;
	J[204] = 1.;
	J[342] = 1.;

   /*** derivatives for constraint 37 ***/

	J[222] = 1.;
	J[225] = 1.;
	J[228] = 1.;
	J[231] = 1.;
	J[234] = 1.;
	J[345] = 1.;

   /*** derivatives for constraint 38 ***/

	J[252] = 1.;
	J[255] = 1.;
	J[258] = 1.;
	J[261] = 1.;
	J[264] = 1.;
	J[348] = 1.;

   /*** derivatives for constraint 39 ***/

	J[282] = 1.;
	J[285] = 1.;
	J[288] = 1.;
	J[291] = 1.;
	J[294] = 1.;
	J[351] = 1.;

   /*** derivatives for constraint 40 ***/

	J[312] = 1.;
	J[315] = 1.;
	J[318] = 1.;
	J[321] = 1.;
	J[324] = 1.;
	J[354] = 1.;

   /*** derivatives for constraint 41 ***/

	J[207] = 1.;
	J[210] = 1.;
	J[213] = 1.;
	J[216] = 1.;
	J[219] = 1.;
	J[357] = 1.;

   /*** derivatives for constraint 42 ***/

	J[237] = 1.;
	J[240] = 1.;
	J[243] = 1.;
	J[246] = 1.;
	J[249] = 1.;
	J[360] = 1.;

   /*** derivatives for constraint 43 ***/

	J[267] = 1.;
	J[270] = 1.;
	J[273] = 1.;
	J[276] = 1.;
	J[279] = 1.;
	J[363] = 1.;

   /*** derivatives for constraint 44 ***/

	J[297] = 1.;
	J[300] = 1.;
	J[303] = 1.;
	J[306] = 1.;
	J[309] = 1.;
	J[366] = 1.;

   /*** derivatives for constraint 45 ***/

	J[327] = 1.;
	J[330] = 1.;
	J[333] = 1.;
	J[336] = 1.;
	J[339] = 1.;
	J[369] = 1.;

   /*** derivatives for constraint 46 ***/

	J[377] = 1.;
	J[380] = 1.;
	J[383] = 1.;
	J[386] = 1.;
	J[389] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
