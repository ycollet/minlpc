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
 fint wastepaper4_auxcom_[1] = { 20 /* nlc */ };
 fint wastepaper4_funcom_[356] = {
	76 /* nvar */,
	1 /* nobj */,
	38 /* ncon */,
	273 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	15,
	18,
	25,
	31,
	34,
	41,
	47,
	50,
	57,
	63,
	66,
	73,
	79,
	82,
	89,
	95,
	98,
	105,
	111,
	114,
	121,
	127,
	130,
	137,
	140,
	143,
	146,
	149,
	152,
	155,
	158,
	161,
	164,
	167,
	170,
	173,
	176,
	179,
	182,
	185,
	188,
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
	259,
	260,
	261,
	262,
	265,
	268,
	271,
	274,

	/* rownos */
	1,
	5,
	2,
	6,
	3,
	7,
	4,
	8,
	9,
	10,
	11,
	12,
	17,
	22,
	1,
	9,
	22,
	1,
	9,
	10,
	11,
	12,
	19,
	22,
	9,
	10,
	11,
	12,
	17,
	23,
	2,
	10,
	23,
	2,
	9,
	10,
	11,
	12,
	19,
	23,
	9,
	10,
	11,
	12,
	17,
	24,
	3,
	11,
	24,
	3,
	9,
	10,
	11,
	12,
	19,
	24,
	9,
	10,
	11,
	12,
	17,
	25,
	4,
	12,
	25,
	4,
	9,
	10,
	11,
	12,
	19,
	25,
	13,
	14,
	15,
	16,
	18,
	26,
	5,
	13,
	26,
	5,
	13,
	14,
	15,
	16,
	20,
	26,
	13,
	14,
	15,
	16,
	18,
	27,
	6,
	14,
	27,
	6,
	13,
	14,
	15,
	16,
	20,
	27,
	13,
	14,
	15,
	16,
	18,
	28,
	7,
	15,
	28,
	7,
	13,
	14,
	15,
	16,
	20,
	28,
	13,
	14,
	15,
	16,
	18,
	29,
	8,
	16,
	29,
	8,
	13,
	14,
	15,
	16,
	20,
	29,
	9,
	13,
	30,
	10,
	14,
	30,
	11,
	15,
	30,
	12,
	16,
	30,
	9,
	13,
	34,
	10,
	14,
	34,
	11,
	15,
	34,
	12,
	16,
	34,
	9,
	13,
	31,
	10,
	14,
	31,
	11,
	15,
	31,
	12,
	16,
	31,
	9,
	13,
	35,
	10,
	14,
	35,
	11,
	15,
	35,
	12,
	16,
	35,
	9,
	13,
	32,
	10,
	14,
	32,
	11,
	15,
	32,
	12,
	16,
	32,
	9,
	13,
	36,
	10,
	14,
	36,
	11,
	15,
	36,
	12,
	16,
	36,
	9,
	13,
	33,
	10,
	14,
	33,
	11,
	15,
	33,
	12,
	16,
	33,
	9,
	13,
	37,
	10,
	14,
	37,
	11,
	15,
	37,
	12,
	16,
	37,
	17,
	18,
	30,
	17,
	18,
	31,
	17,
	18,
	32,
	17,
	18,
	33,
	19,
	20,
	34,
	19,
	20,
	35,
	19,
	20,
	36,
	19,
	20,
	37,
	17,
	21,
	19,
	18,
	20,
	9,
	13,
	38,
	10,
	14,
	38,
	11,
	15,
	38,
	12,
	16,
	38 };

 real wastepaper4_boundc_[1+152+76] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real wastepaper4_x0comn_[76] = {
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
		0. };

 static real wastepaper4_pd[16];
static real wastepaper4_old_x[76];
static int wastepaper4_xkind = -1;

 static int
wastepaper4_xcheck(real *x)
{
	real *x1 = wastepaper4_old_x, *xe = x + 76;
	errno = 0;
	if (wastepaper4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wastepaper4_xkind = 0;
	return 1;
	}
 real
wastepaper4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wastepaper4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[71];
	;}

	if (wantfg & 2) {
	g[71] = 1.;
	}

	return rv;
}

 void
wastepaper4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (wastepaper4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	wastepaper4_pd[1] = pow(x[0], 0.29);
	if (errno) in_trouble2("pow",x[0],0.29);
	if (x[0] > 0.) {
	wastepaper4_pd[0] = 0.29*(wastepaper4_pd[1]/x[0]);
	} else if (0.29 > 1.) {
	wastepaper4_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.29);
	}
	v[1] = wastepaper4_pd[1] * x[5];
	t1 = v[1] + -x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	wastepaper4_pd[3] = pow(x[1], 0.13);
	if (errno) in_trouble2("pow",x[1],0.13);
	if (x[1] > 0.) {
	wastepaper4_pd[2] = 0.13*(wastepaper4_pd[3]/x[1]);
	} else if (0.13 > 1.) {
	wastepaper4_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.13);
	}
	v[1] = wastepaper4_pd[3] * x[8];
	t1 = v[1] + -x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	wastepaper4_pd[5] = pow(x[2], 0.06);
	if (errno) in_trouble2("pow",x[2],0.06);
	if (x[2] > 0.) {
	wastepaper4_pd[4] = 0.06*(wastepaper4_pd[5]/x[2]);
	} else if (0.06 > 1.) {
	wastepaper4_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.06);
	}
	v[1] = wastepaper4_pd[5] * x[11];
	t1 = v[1] + -x[12];
	c[2] = t1;

  /***  constraint 4  ***/

	wastepaper4_pd[7] = pow(x[3], 0.15);
	if (errno) in_trouble2("pow",x[3],0.15);
	if (x[3] > 0.) {
	wastepaper4_pd[6] = 0.15*(wastepaper4_pd[7]/x[3]);
	} else if (0.15 > 1.) {
	wastepaper4_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.15);
	}
	v[1] = wastepaper4_pd[7] * x[14];
	t1 = v[1] + -x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	wastepaper4_pd[9] = pow(x[0], 0.74);
	if (errno) in_trouble2("pow",x[0],0.74);
	if (x[0] > 0.) {
	wastepaper4_pd[8] = 0.74*(wastepaper4_pd[9]/x[0]);
	} else if (0.74 > 1.) {
	wastepaper4_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.74);
	}
	v[1] = wastepaper4_pd[9] * x[17];
	t1 = v[1] + -x[18];
	c[4] = t1;

  /***  constraint 6  ***/

	wastepaper4_pd[11] = pow(x[1], 0.79);
	if (errno) in_trouble2("pow",x[1],0.79);
	if (x[1] > 0.) {
	wastepaper4_pd[10] = 0.79*(wastepaper4_pd[11]/x[1]);
	} else if (0.79 > 1.) {
	wastepaper4_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.79);
	}
	v[1] = wastepaper4_pd[11] * x[20];
	t1 = v[1] + -x[21];
	c[5] = t1;

  /***  constraint 7  ***/

	wastepaper4_pd[13] = pow(x[2], 0.71);
	if (errno) in_trouble2("pow",x[2],0.71);
	if (x[2] > 0.) {
	wastepaper4_pd[12] = 0.71*(wastepaper4_pd[13]/x[2]);
	} else if (0.71 > 1.) {
	wastepaper4_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.71);
	}
	v[1] = wastepaper4_pd[13] * x[23];
	t1 = v[1] + -x[24];
	c[6] = t1;

  /***  constraint 8  ***/

	wastepaper4_pd[15] = pow(x[3], 0.8);
	if (errno) in_trouble2("pow",x[3],0.8);
	if (x[3] > 0.) {
	wastepaper4_pd[14] = 0.8*(wastepaper4_pd[15]/x[3]);
	} else if (0.8 > 1.) {
	wastepaper4_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.8);
	}
	v[1] = wastepaper4_pd[15] * x[26];
	t1 = v[1] + -x[27];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[28] * x[4];
	v[1] = x[32] * x[6];
	v[0] += v[1];
	v[1] = x[36] * x[7];
	v[0] += v[1];
	v[1] = x[40] * x[9];
	v[0] += v[1];
	v[1] = x[44] * x[10];
	v[0] += v[1];
	v[1] = x[48] * x[12];
	v[0] += v[1];
	v[1] = x[52] * x[13];
	v[0] += v[1];
	v[1] = x[56] * x[15];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 0.675*x[72];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[29] * x[4];
	v[1] = x[33] * x[6];
	v[0] += v[1];
	v[1] = x[37] * x[7];
	v[0] += v[1];
	v[1] = x[41] * x[9];
	v[0] += v[1];
	v[1] = x[45] * x[10];
	v[0] += v[1];
	v[1] = x[49] * x[12];
	v[0] += v[1];
	v[1] = x[53] * x[13];
	v[0] += v[1];
	v[1] = x[57] * x[15];
	v[0] += v[1];
	t1 = v[0] + -x[8];
	t1 += 0.675*x[73];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[30] * x[4];
	v[1] = x[34] * x[6];
	v[0] += v[1];
	v[1] = x[38] * x[7];
	v[0] += v[1];
	v[1] = x[42] * x[9];
	v[0] += v[1];
	v[1] = x[46] * x[10];
	v[0] += v[1];
	v[1] = x[50] * x[12];
	v[0] += v[1];
	v[1] = x[54] * x[13];
	v[0] += v[1];
	v[1] = x[58] * x[15];
	v[0] += v[1];
	t1 = v[0] + -x[11];
	t1 += 0.675*x[74];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[31] * x[4];
	v[1] = x[35] * x[6];
	v[0] += v[1];
	v[1] = x[39] * x[7];
	v[0] += v[1];
	v[1] = x[43] * x[9];
	v[0] += v[1];
	v[1] = x[47] * x[10];
	v[0] += v[1];
	v[1] = x[51] * x[12];
	v[0] += v[1];
	v[1] = x[55] * x[13];
	v[0] += v[1];
	v[1] = x[59] * x[15];
	v[0] += v[1];
	t1 = v[0] + -x[14];
	t1 += 0.675*x[75];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[28] * x[16];
	v[1] = x[32] * x[18];
	v[0] += v[1];
	v[1] = x[36] * x[19];
	v[0] += v[1];
	v[1] = x[40] * x[21];
	v[0] += v[1];
	v[1] = x[44] * x[22];
	v[0] += v[1];
	v[1] = x[48] * x[24];
	v[0] += v[1];
	v[1] = x[52] * x[25];
	v[0] += v[1];
	v[1] = x[56] * x[27];
	v[0] += v[1];
	t1 = v[0] + -x[17];
	t1 += 0.649*x[72];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[29] * x[16];
	v[1] = x[33] * x[18];
	v[0] += v[1];
	v[1] = x[37] * x[19];
	v[0] += v[1];
	v[1] = x[41] * x[21];
	v[0] += v[1];
	v[1] = x[45] * x[22];
	v[0] += v[1];
	v[1] = x[49] * x[24];
	v[0] += v[1];
	v[1] = x[53] * x[25];
	v[0] += v[1];
	v[1] = x[57] * x[27];
	v[0] += v[1];
	t1 = v[0] + -x[20];
	t1 += 0.649*x[73];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[30] * x[16];
	v[1] = x[34] * x[18];
	v[0] += v[1];
	v[1] = x[38] * x[19];
	v[0] += v[1];
	v[1] = x[42] * x[21];
	v[0] += v[1];
	v[1] = x[46] * x[22];
	v[0] += v[1];
	v[1] = x[50] * x[24];
	v[0] += v[1];
	v[1] = x[54] * x[25];
	v[0] += v[1];
	v[1] = x[58] * x[27];
	v[0] += v[1];
	t1 = v[0] + -x[23];
	t1 += 0.649*x[74];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[31] * x[16];
	v[1] = x[35] * x[18];
	v[0] += v[1];
	v[1] = x[39] * x[19];
	v[0] += v[1];
	v[1] = x[43] * x[21];
	v[0] += v[1];
	v[1] = x[47] * x[22];
	v[0] += v[1];
	v[1] = x[51] * x[24];
	v[0] += v[1];
	v[1] = x[55] * x[25];
	v[0] += v[1];
	v[1] = x[59] * x[27];
	v[0] += v[1];
	t1 = v[0] + -x[26];
	t1 += 0.649*x[75];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[60] * x[4];
	v[1] = x[61] * x[7];
	v[0] += v[1];
	v[1] = x[62] * x[10];
	v[0] += v[1];
	v[1] = x[63] * x[13];
	v[0] += v[1];
	t1 = v[0] + -x[68];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[60] * x[16];
	v[1] = x[61] * x[19];
	v[0] += v[1];
	v[1] = x[62] * x[22];
	v[0] += v[1];
	v[1] = x[63] * x[25];
	v[0] += v[1];
	t1 = v[0] + -x[70];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[64] * x[6];
	v[1] = x[65] * x[9];
	v[0] += v[1];
	v[1] = x[66] * x[12];
	v[0] += v[1];
	v[1] = x[67] * x[15];
	v[0] += v[1];
	t1 = v[0] + -x[69];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[64] * x[18];
	v[1] = x[65] * x[21];
	v[0] += v[1];
	v[1] = x[66] * x[24];
	v[0] += v[1];
	v[1] = x[67] * x[27];
	v[0] += v[1];
	t1 = v[0] + -x[71];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[68];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[6];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += x[9];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[10];
	t1 += -x[11];
	t1 += x[12];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[13];
	t1 += -x[14];
	t1 += x[15];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[16];
	t1 += -x[17];
	t1 += x[18];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[19];
	t1 += -x[20];
	t1 += x[21];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[22];
	t1 += -x[23];
	t1 += x[24];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[25];
	t1 += -x[26];
	t1 += x[27];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[60];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[61];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[62];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	t1 += x[63];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[64];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[65];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	t1 += x[66];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[67];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	c[37] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[14] = wastepaper4_pd[1];
	J[0] = x[5]*wastepaper4_pd[0];
	J[17] = -1.;

   /*** derivatives for constraint 2 ***/

	J[30] = wastepaper4_pd[3];
	J[2] = x[8]*wastepaper4_pd[2];
	J[33] = -1.;

   /*** derivatives for constraint 3 ***/

	J[46] = wastepaper4_pd[5];
	J[4] = x[11]*wastepaper4_pd[4];
	J[49] = -1.;

   /*** derivatives for constraint 4 ***/

	J[62] = wastepaper4_pd[7];
	J[6] = x[14]*wastepaper4_pd[6];
	J[65] = -1.;

   /*** derivatives for constraint 5 ***/

	J[78] = wastepaper4_pd[9];
	J[1] = x[17]*wastepaper4_pd[8];
	J[81] = -1.;

   /*** derivatives for constraint 6 ***/

	J[94] = wastepaper4_pd[11];
	J[3] = x[20]*wastepaper4_pd[10];
	J[97] = -1.;

   /*** derivatives for constraint 7 ***/

	J[110] = wastepaper4_pd[13];
	J[5] = x[23]*wastepaper4_pd[12];
	J[113] = -1.;

   /*** derivatives for constraint 8 ***/

	J[126] = wastepaper4_pd[15];
	J[7] = x[26]*wastepaper4_pd[14];
	J[129] = -1.;

   /*** derivatives for constraint 9 ***/

	J[66] = x[56];
	J[220] = x[15];
	J[56] = x[52];
	J[208] = x[13];
	J[50] = x[48];
	J[196] = x[12];
	J[40] = x[44];
	J[184] = x[10];
	J[34] = x[40];
	J[172] = x[9];
	J[24] = x[36];
	J[160] = x[7];
	J[18] = x[32];
	J[148] = x[6];
	J[8] = x[28];
	J[136] = x[4];
	J[15] = -1.;
	J[261] = 0.675;

   /*** derivatives for constraint 10 ***/

	J[67] = x[57];
	J[223] = x[15];
	J[57] = x[53];
	J[211] = x[13];
	J[51] = x[49];
	J[199] = x[12];
	J[41] = x[45];
	J[187] = x[10];
	J[35] = x[41];
	J[175] = x[9];
	J[25] = x[37];
	J[163] = x[7];
	J[19] = x[33];
	J[151] = x[6];
	J[9] = x[29];
	J[139] = x[4];
	J[31] = -1.;
	J[264] = 0.675;

   /*** derivatives for constraint 11 ***/

	J[68] = x[58];
	J[226] = x[15];
	J[58] = x[54];
	J[214] = x[13];
	J[52] = x[50];
	J[202] = x[12];
	J[42] = x[46];
	J[190] = x[10];
	J[36] = x[42];
	J[178] = x[9];
	J[26] = x[38];
	J[166] = x[7];
	J[20] = x[34];
	J[154] = x[6];
	J[10] = x[30];
	J[142] = x[4];
	J[47] = -1.;
	J[267] = 0.675;

   /*** derivatives for constraint 12 ***/

	J[69] = x[59];
	J[229] = x[15];
	J[59] = x[55];
	J[217] = x[13];
	J[53] = x[51];
	J[205] = x[12];
	J[43] = x[47];
	J[193] = x[10];
	J[37] = x[43];
	J[181] = x[9];
	J[27] = x[39];
	J[169] = x[7];
	J[21] = x[35];
	J[157] = x[6];
	J[11] = x[31];
	J[145] = x[4];
	J[63] = -1.;
	J[270] = 0.675;

   /*** derivatives for constraint 13 ***/

	J[130] = x[56];
	J[221] = x[27];
	J[120] = x[52];
	J[209] = x[25];
	J[114] = x[48];
	J[197] = x[24];
	J[104] = x[44];
	J[185] = x[22];
	J[98] = x[40];
	J[173] = x[21];
	J[88] = x[36];
	J[161] = x[19];
	J[82] = x[32];
	J[149] = x[18];
	J[72] = x[28];
	J[137] = x[16];
	J[79] = -1.;
	J[262] = 0.649;

   /*** derivatives for constraint 14 ***/

	J[131] = x[57];
	J[224] = x[27];
	J[121] = x[53];
	J[212] = x[25];
	J[115] = x[49];
	J[200] = x[24];
	J[105] = x[45];
	J[188] = x[22];
	J[99] = x[41];
	J[176] = x[21];
	J[89] = x[37];
	J[164] = x[19];
	J[83] = x[33];
	J[152] = x[18];
	J[73] = x[29];
	J[140] = x[16];
	J[95] = -1.;
	J[265] = 0.649;

   /*** derivatives for constraint 15 ***/

	J[132] = x[58];
	J[227] = x[27];
	J[122] = x[54];
	J[215] = x[25];
	J[116] = x[50];
	J[203] = x[24];
	J[106] = x[46];
	J[191] = x[22];
	J[100] = x[42];
	J[179] = x[21];
	J[90] = x[38];
	J[167] = x[19];
	J[84] = x[34];
	J[155] = x[18];
	J[74] = x[30];
	J[143] = x[16];
	J[111] = -1.;
	J[268] = 0.649;

   /*** derivatives for constraint 16 ***/

	J[133] = x[59];
	J[230] = x[27];
	J[123] = x[55];
	J[218] = x[25];
	J[117] = x[51];
	J[206] = x[24];
	J[107] = x[47];
	J[194] = x[22];
	J[101] = x[43];
	J[182] = x[21];
	J[91] = x[39];
	J[170] = x[19];
	J[85] = x[35];
	J[158] = x[18];
	J[75] = x[31];
	J[146] = x[16];
	J[127] = -1.;
	J[271] = 0.649;

   /*** derivatives for constraint 17 ***/

	J[60] = x[63];
	J[241] = x[13];
	J[44] = x[62];
	J[238] = x[10];
	J[28] = x[61];
	J[235] = x[7];
	J[12] = x[60];
	J[232] = x[4];
	J[256] = -1.;

   /*** derivatives for constraint 18 ***/

	J[124] = x[63];
	J[242] = x[25];
	J[108] = x[62];
	J[239] = x[22];
	J[92] = x[61];
	J[236] = x[19];
	J[76] = x[60];
	J[233] = x[16];
	J[259] = -1.;

   /*** derivatives for constraint 19 ***/

	J[70] = x[67];
	J[253] = x[15];
	J[54] = x[66];
	J[250] = x[12];
	J[38] = x[65];
	J[247] = x[9];
	J[22] = x[64];
	J[244] = x[6];
	J[258] = -1.;

   /*** derivatives for constraint 20 ***/

	J[134] = x[67];
	J[254] = x[27];
	J[118] = x[66];
	J[251] = x[24];
	J[102] = x[65];
	J[248] = x[21];
	J[86] = x[64];
	J[245] = x[18];
	J[260] = -1.;

   /*** derivatives for constraint 21 ***/

	J[257] = 1.;

   /*** derivatives for constraint 22 ***/

	J[13] = 1.;
	J[16] = -1.;
	J[23] = 1.;

   /*** derivatives for constraint 23 ***/

	J[29] = 1.;
	J[32] = -1.;
	J[39] = 1.;

   /*** derivatives for constraint 24 ***/

	J[45] = 1.;
	J[48] = -1.;
	J[55] = 1.;

   /*** derivatives for constraint 25 ***/

	J[61] = 1.;
	J[64] = -1.;
	J[71] = 1.;

   /*** derivatives for constraint 26 ***/

	J[77] = 1.;
	J[80] = -1.;
	J[87] = 1.;

   /*** derivatives for constraint 27 ***/

	J[93] = 1.;
	J[96] = -1.;
	J[103] = 1.;

   /*** derivatives for constraint 28 ***/

	J[109] = 1.;
	J[112] = -1.;
	J[119] = 1.;

   /*** derivatives for constraint 29 ***/

	J[125] = 1.;
	J[128] = -1.;
	J[135] = 1.;

   /*** derivatives for constraint 30 ***/

	J[138] = 1.;
	J[141] = 1.;
	J[144] = 1.;
	J[147] = 1.;
	J[234] = 1.;

   /*** derivatives for constraint 31 ***/

	J[162] = 1.;
	J[165] = 1.;
	J[168] = 1.;
	J[171] = 1.;
	J[237] = 1.;

   /*** derivatives for constraint 32 ***/

	J[186] = 1.;
	J[189] = 1.;
	J[192] = 1.;
	J[195] = 1.;
	J[240] = 1.;

   /*** derivatives for constraint 33 ***/

	J[210] = 1.;
	J[213] = 1.;
	J[216] = 1.;
	J[219] = 1.;
	J[243] = 1.;

   /*** derivatives for constraint 34 ***/

	J[150] = 1.;
	J[153] = 1.;
	J[156] = 1.;
	J[159] = 1.;
	J[246] = 1.;

   /*** derivatives for constraint 35 ***/

	J[174] = 1.;
	J[177] = 1.;
	J[180] = 1.;
	J[183] = 1.;
	J[249] = 1.;

   /*** derivatives for constraint 36 ***/

	J[198] = 1.;
	J[201] = 1.;
	J[204] = 1.;
	J[207] = 1.;
	J[252] = 1.;

   /*** derivatives for constraint 37 ***/

	J[222] = 1.;
	J[225] = 1.;
	J[228] = 1.;
	J[231] = 1.;
	J[255] = 1.;

   /*** derivatives for constraint 38 ***/

	J[263] = 1.;
	J[266] = 1.;
	J[269] = 1.;
	J[272] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
