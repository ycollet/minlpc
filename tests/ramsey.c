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
 fint ramsey_auxcom_[1] = { 11 /* nlc */ };
 fint ramsey_funcom_[105] = {
	33 /* nvar */,
	1 /* nobj */,
	22 /* ncon */,
	65 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	6,
	9,
	12,
	15,
	18,
	21,
	24,
	27,
	30,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	46,
	48,
	50,
	52,
	54,
	56,
	58,
	60,
	62,
	64,
	66,

	/* rownos */
	1,
	12,
	2,
	12,
	13,
	3,
	13,
	14,
	4,
	14,
	15,
	5,
	15,
	16,
	6,
	16,
	17,
	7,
	17,
	18,
	8,
	18,
	19,
	9,
	19,
	20,
	10,
	20,
	21,
	11,
	21,
	22,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	1,
	12,
	2,
	13,
	3,
	14,
	4,
	15,
	5,
	16,
	6,
	17,
	7,
	18,
	8,
	19,
	9,
	20,
	10,
	21,
	11,
	22 };

 real ramsey_boundc_[1+66+44] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		3.,
		3.,
		3.,
		1.7e308,
		3.,
		1.7e308,
		3.,
		1.7e308,
		3.,
		1.7e308,
		3.,
		1.7e308,
		3.,
		1.7e308,
		3.,
		1.7e308,
		3.,
		1.7e308,
		3.,
		1.7e308,
		3.,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.95,
		1.7e308,
		0.05,
		0.05,
		0.05,
		0.0575,
		0.05,
		0.066125,
		0.05,
		0.07604375,
		0.05,
		0.0874503125,
		0.05,
		0.100567859375,
		0.05,
		0.11565303828125,
		0.05,
		0.133000994023437,
		0.05,
		0.152951143126953,
		0.05,
		0.175893814595996,
		0.05,
		0.202277886785395,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.};

 real ramsey_x0comn_[33] = {
		3.,
		3.,
		3.,
		3.,
		3.,
		3.,
		3.,
		3.,
		3.,
		3.,
		3.,
		0.95,
		0.95,
		0.95,
		0.95,
		0.95,
		0.95,
		0.95,
		0.95,
		0.95,
		0.95,
		0.95,
		0.05,
		0.05,
		0.05,
		0.05,
		0.05,
		0.05,
		0.05,
		0.05,
		0.05,
		0.05,
		0.05 };

 static real ramsey_pd[33];
static real ramsey_old_x[33];
static int ramsey_xkind = -1;

 static int
ramsey_xcheck(real *x)
{
	real *x1 = ramsey_old_x, *xe = x + 33;
	errno = 0;
	if (ramsey_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ramsey_xkind = 0;
	return 1;
	}
 real
ramsey_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (ramsey_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ramsey_pd[11] = log(x[11]);
	if (errno) in_trouble("log",x[11]);
	ramsey_pd[12] = 1. / x[11];
	v[0] = -0.95 * ramsey_pd[11];
	ramsey_pd[13] = log(x[12]);
	if (errno) in_trouble("log",x[12]);
	ramsey_pd[14] = 1. / x[12];
	v[1] = -0.9025 * ramsey_pd[13];
	v[0] += v[1];
	ramsey_pd[15] = log(x[13]);
	if (errno) in_trouble("log",x[13]);
	ramsey_pd[16] = 1. / x[13];
	v[1] = -0.857375 * ramsey_pd[15];
	v[0] += v[1];
	ramsey_pd[17] = log(x[14]);
	if (errno) in_trouble("log",x[14]);
	ramsey_pd[18] = 1. / x[14];
	v[1] = -0.81450625 * ramsey_pd[17];
	v[0] += v[1];
	ramsey_pd[19] = log(x[15]);
	if (errno) in_trouble("log",x[15]);
	ramsey_pd[20] = 1. / x[15];
	v[1] = -0.7737809375 * ramsey_pd[19];
	v[0] += v[1];
	ramsey_pd[21] = log(x[16]);
	if (errno) in_trouble("log",x[16]);
	ramsey_pd[22] = 1. / x[16];
	v[1] = -0.735091890625 * ramsey_pd[21];
	v[0] += v[1];
	ramsey_pd[23] = log(x[17]);
	if (errno) in_trouble("log",x[17]);
	ramsey_pd[24] = 1. / x[17];
	v[1] = -0.69833729609375 * ramsey_pd[23];
	v[0] += v[1];
	ramsey_pd[25] = log(x[18]);
	if (errno) in_trouble("log",x[18]);
	ramsey_pd[26] = 1. / x[18];
	v[1] = -0.663420431289062 * ramsey_pd[25];
	v[0] += v[1];
	ramsey_pd[27] = log(x[19]);
	if (errno) in_trouble("log",x[19]);
	ramsey_pd[28] = 1. / x[19];
	v[1] = -0.630249409724609 * ramsey_pd[27];
	v[0] += v[1];
	ramsey_pd[29] = log(x[20]);
	if (errno) in_trouble("log",x[20]);
	ramsey_pd[30] = 1. / x[20];
	v[1] = -0.598736939238379 * ramsey_pd[29];
	v[0] += v[1];
	ramsey_pd[31] = log(x[21]);
	if (errno) in_trouble("log",x[21]);
	ramsey_pd[32] = 1. / x[21];
	v[1] = -11.3760018455292 * ramsey_pd[31];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[21] = -11.3760018455292*ramsey_pd[32];
	g[20] = -0.598736939238379*ramsey_pd[30];
	g[19] = -0.630249409724609*ramsey_pd[28];
	g[18] = -0.663420431289062*ramsey_pd[26];
	g[17] = -0.69833729609375*ramsey_pd[24];
	g[16] = -0.735091890625*ramsey_pd[22];
	g[15] = -0.7737809375*ramsey_pd[20];
	g[14] = -0.81450625*ramsey_pd[18];
	g[13] = -0.857375*ramsey_pd[16];
	g[12] = -0.9025*ramsey_pd[14];
	g[11] = -0.95*ramsey_pd[12];
	}

	return v[0];
}

 void
ramsey_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ramsey_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[0], 0.25);
	if (errno) in_trouble2("pow",x[0],0.25);
	if (x[0] > 0.) {
	ramsey_pd[0] = 0.25*(v[0]/x[0]);
	} else if (0.25 > 1.) {
	ramsey_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.25);
	}
	v[0] *= 0.759835685651593;
	t1 = v[0] + -x[11];
	t1 += -x[22];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = pow(x[1], 0.25);
	if (errno) in_trouble2("pow",x[1],0.25);
	if (x[1] > 0.) {
	ramsey_pd[1] = 0.25*(v[0]/x[1]);
	} else if (0.25 > 1.) {
	ramsey_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.25);
	}
	v[0] *= 0.77686866556676;
	t1 = v[0] + -x[12];
	t1 += -x[23];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = pow(x[2], 0.25);
	if (errno) in_trouble2("pow",x[2],0.25);
	if (x[2] > 0.) {
	ramsey_pd[2] = 0.25*(v[0]/x[2]);
	} else if (0.25 > 1.) {
	ramsey_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.25);
	}
	v[0] *= 0.794283468039448;
	t1 = v[0] + -x[13];
	t1 += -x[24];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = pow(x[3], 0.25);
	if (errno) in_trouble2("pow",x[3],0.25);
	if (x[3] > 0.) {
	ramsey_pd[3] = 0.25*(v[0]/x[3]);
	} else if (0.25 > 1.) {
	ramsey_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.25);
	}
	v[0] *= 0.812088652256959;
	t1 = v[0] + -x[14];
	t1 += -x[25];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = pow(x[4], 0.25);
	if (errno) in_trouble2("pow",x[4],0.25);
	if (x[4] > 0.) {
	ramsey_pd[4] = 0.25*(v[0]/x[4]);
	} else if (0.25 > 1.) {
	ramsey_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.25);
	}
	v[0] *= 0.830292969275008;
	t1 = v[0] + -x[15];
	t1 += -x[26];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = pow(x[5], 0.25);
	if (errno) in_trouble2("pow",x[5],0.25);
	if (x[5] > 0.) {
	ramsey_pd[5] = 0.25*(v[0]/x[5]);
	} else if (0.25 > 1.) {
	ramsey_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.25);
	}
	v[0] *= 0.848905366318769;
	t1 = v[0] + -x[16];
	t1 += -x[27];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = pow(x[6], 0.25);
	if (errno) in_trouble2("pow",x[6],0.25);
	if (x[6] > 0.) {
	ramsey_pd[6] = 0.25*(v[0]/x[6]);
	} else if (0.25 > 1.) {
	ramsey_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.25);
	}
	v[0] *= 0.867934991180342;
	t1 = v[0] + -x[17];
	t1 += -x[28];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = pow(x[7], 0.25);
	if (errno) in_trouble2("pow",x[7],0.25);
	if (x[7] > 0.) {
	ramsey_pd[7] = 0.25*(v[0]/x[7]);
	} else if (0.25 > 1.) {
	ramsey_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.25);
	}
	v[0] *= 0.88739119671479;
	t1 = v[0] + -x[18];
	t1 += -x[29];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = pow(x[8], 0.25);
	if (errno) in_trouble2("pow",x[8],0.25);
	if (x[8] > 0.) {
	ramsey_pd[8] = 0.25*(v[0]/x[8]);
	} else if (0.25 > 1.) {
	ramsey_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],0.25);
	}
	v[0] *= 0.907283545436972;
	t1 = v[0] + -x[19];
	t1 += -x[30];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = pow(x[9], 0.25);
	if (errno) in_trouble2("pow",x[9],0.25);
	if (x[9] > 0.) {
	ramsey_pd[9] = 0.25*(v[0]/x[9]);
	} else if (0.25 > 1.) {
	ramsey_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],0.25);
	}
	v[0] *= 0.92762181422141;
	t1 = v[0] + -x[20];
	t1 += -x[31];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = pow(x[10], 0.25);
	if (errno) in_trouble2("pow",x[10],0.25);
	if (x[10] > 0.) {
	ramsey_pd[10] = 0.25*(v[0]/x[10]);
	} else if (0.25 > 1.) {
	ramsey_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],0.25);
	}
	v[0] *= 0.948415999107521;
	t1 = v[0] + -x[21];
	t1 += -x[32];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += -x[22];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += -x[23];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += -x[24];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += -x[25];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += -x[26];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += -x[27];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += -x[28];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += -x[29];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += -x[30];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[9];
	t1 += x[10];
	t1 += -x[31];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = 0.03*x[10];
	t1 += -x[32];
	c[21] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 0.759835685651593*ramsey_pd[0];
	J[32] = -1.;
	J[43] = -1.;

   /*** derivatives for constraint 2 ***/

	J[2] = 0.77686866556676*ramsey_pd[1];
	J[33] = -1.;
	J[45] = -1.;

   /*** derivatives for constraint 3 ***/

	J[5] = 0.794283468039448*ramsey_pd[2];
	J[34] = -1.;
	J[47] = -1.;

   /*** derivatives for constraint 4 ***/

	J[8] = 0.812088652256959*ramsey_pd[3];
	J[35] = -1.;
	J[49] = -1.;

   /*** derivatives for constraint 5 ***/

	J[11] = 0.830292969275008*ramsey_pd[4];
	J[36] = -1.;
	J[51] = -1.;

   /*** derivatives for constraint 6 ***/

	J[14] = 0.848905366318769*ramsey_pd[5];
	J[37] = -1.;
	J[53] = -1.;

   /*** derivatives for constraint 7 ***/

	J[17] = 0.867934991180342*ramsey_pd[6];
	J[38] = -1.;
	J[55] = -1.;

   /*** derivatives for constraint 8 ***/

	J[20] = 0.88739119671479*ramsey_pd[7];
	J[39] = -1.;
	J[57] = -1.;

   /*** derivatives for constraint 9 ***/

	J[23] = 0.907283545436972*ramsey_pd[8];
	J[40] = -1.;
	J[59] = -1.;

   /*** derivatives for constraint 10 ***/

	J[26] = 0.92762181422141*ramsey_pd[9];
	J[41] = -1.;
	J[61] = -1.;

   /*** derivatives for constraint 11 ***/

	J[29] = 0.948415999107521*ramsey_pd[10];
	J[42] = -1.;
	J[63] = -1.;

   /*** derivatives for constraint 12 ***/

	J[1] = -1.;
	J[3] = 1.;
	J[44] = -1.;

   /*** derivatives for constraint 13 ***/

	J[4] = -1.;
	J[6] = 1.;
	J[46] = -1.;

   /*** derivatives for constraint 14 ***/

	J[7] = -1.;
	J[9] = 1.;
	J[48] = -1.;

   /*** derivatives for constraint 15 ***/

	J[10] = -1.;
	J[12] = 1.;
	J[50] = -1.;

   /*** derivatives for constraint 16 ***/

	J[13] = -1.;
	J[15] = 1.;
	J[52] = -1.;

   /*** derivatives for constraint 17 ***/

	J[16] = -1.;
	J[18] = 1.;
	J[54] = -1.;

   /*** derivatives for constraint 18 ***/

	J[19] = -1.;
	J[21] = 1.;
	J[56] = -1.;

   /*** derivatives for constraint 19 ***/

	J[22] = -1.;
	J[24] = 1.;
	J[58] = -1.;

   /*** derivatives for constraint 20 ***/

	J[25] = -1.;
	J[27] = 1.;
	J[60] = -1.;

   /*** derivatives for constraint 21 ***/

	J[28] = -1.;
	J[30] = 1.;
	J[62] = -1.;

   /*** derivatives for constraint 22 ***/

	J[31] = 0.03;
	J[64] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
