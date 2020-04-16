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
 fint ex4_auxcom_[1] = { 25 /* nlc */ };
 fint ex4_funcom_[243] = {
	36 /* nvar */,
	1 /* nobj */,
	30 /* ncon */,
	200 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	30,
	59,
	89,
	117,
	146,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,

	/* rownos */
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
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
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
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	30,
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
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
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
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
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
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	30,
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
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
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
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25 };

 real ex4_boundc_[1+72+60] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		2.,
		4.5,
		0.,
		5.,
		0.,
		8.,
		3.,
		9.,
		4.,
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		1077.839848,
		-1.7e308,
		1175.970966,
		-1.7e308,
		1201.822621,
		-1.7e308,
		1143.953331,
		-1.7e308,
		1154.389533,
		-1.7e308,
		1433.317653,
		-1.7e308,
		1109.07636,
		-1.7e308,
		1041.595916,
		-1.7e308,
		1144.062266,
		-1.7e308,
		1099.834164,
		-1.7e308,
		1149.179125,
		-1.7e308,
		1123.807402,
		-1.7e308,
		1027.221972,
		-1.7e308,
		1089.926827,
		-1.7e308,
		1293.076557,
		-1.7e308,
		1174.31702,
		-1.7e308,
		1125.102783,
		-1.7e308,
		1222.841697,
		-1.7e308,
		1050.485931,
		-1.7e308,
		1361.197344,
		-1.7e308,
		1040.326419,
		-1.7e308,
		1161.851799,
		-1.7e308,
		1066.858266,
		-1.7e308,
		1340.580732,
		-1.7e308,
		1407.519966,
		-1.7e308,
		10.,
		-1.7e308,
		-0.64,
		0.69,
		1.7e308,
		-1.7e308,
		1.5,
		4.5,
		1.7e308};

 real ex4_x0comn_[36] = {
		2.,
		4.,
		0.,
		8.,
		4.5,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real ex4_pd[254];
static real ex4_old_x[36];
static int ex4_xkind = -1;

 static int
ex4_xcheck(real *x)
{
	real *x1 = ex4_old_x, *xe = x + 36;
	errno = 0;
	if (ex4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex4_xkind = 0;
	return 1;
	}
 real
ex4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (ex4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex4_pd[250] = x[0] * x[0];
	ex4_pd[251] = x[0] + x[0];
	v[0] = 0.6 * ex4_pd[250];
	ex4_pd[252] = x[1] * x[1];
	ex4_pd[253] = x[1] + x[1];
	v[1] = 0.1 * ex4_pd[252];
	v[2] = v[0] + v[1];
	rv = v[2] + -0.9*x[2];
	rv += -0.5*x[3];
	rv += x[4];
	rv += 1000.*x[5];
	rv += 1000.*x[6];
	rv += 1000.*x[7];
	rv += 1000.*x[8];
	rv += 1000.*x[9];
	rv += 1000.*x[10];
	rv += -x[11];
	rv += -0.2*x[12];
	rv += -x[13];
	rv += -0.2*x[14];
	rv += -0.9*x[15];
	rv += -0.9*x[16];
	rv += -0.1*x[17];
	rv += -0.8*x[18];
	rv += -x[19];
	rv += -0.4*x[20];
	rv += -x[21];
	rv += -0.3*x[22];
	rv += -0.1*x[23];
	rv += -0.3*x[24];
	rv += -0.5*x[25];
	rv += -0.9*x[26];
	rv += -0.8*x[27];
	rv += -0.1*x[28];
	rv += -0.9*x[29];
	rv += -x[30];
	rv += -x[31];
	rv += -x[32];
	rv += -0.2*x[33];
	rv += -0.7*x[34];
	rv += -0.7*x[35];
	;}

	if (wantfg & 2) {
	g[1] = 0.1*ex4_pd[253];
	g[0] = 0.6*ex4_pd[251];
	g[2] = -0.9;
	g[3] = -0.5;
	g[4] = 1.;
	g[5] = 1000.;
	g[6] = 1000.;
	g[7] = 1000.;
	g[8] = 1000.;
	g[9] = 1000.;
	g[10] = 1000.;
	g[11] = -1.;
	g[12] = -0.2;
	g[13] = -1.;
	g[14] = -0.2;
	g[15] = -0.9;
	g[16] = -0.9;
	g[17] = -0.1;
	g[18] = -0.8;
	g[19] = -1.;
	g[20] = -0.4;
	g[21] = -1.;
	g[22] = -0.3;
	g[23] = -0.1;
	g[24] = -0.3;
	g[25] = -0.5;
	g[26] = -0.9;
	g[27] = -0.8;
	g[28] = -0.1;
	g[29] = -0.9;
	g[30] = -1.;
	g[31] = -1.;
	g[32] = -1.;
	g[33] = -0.2;
	g[34] = -0.7;
	g[35] = -0.7;
	}

	return rv;
}

 void
ex4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[5];
	real t1;
	fint wantfg = *needfg;
	if (ex4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -2.26;
	ex4_pd[0] = v[0] * v[0];
	ex4_pd[1] = v[0] + v[0];
	v[0] = 9.57 * ex4_pd[0];
	v[1] = x[2] + -5.15;
	ex4_pd[2] = v[1] * v[1];
	ex4_pd[3] = v[1] + v[1];
	v[1] = 2.74 * ex4_pd[2];
	v[0] += v[1];
	v[1] = x[3] + -4.03;
	ex4_pd[4] = v[1] * v[1];
	ex4_pd[5] = v[1] + v[1];
	v[1] = 9.75 * ex4_pd[4];
	v[0] += v[1];
	v[1] = x[1] + -1.74;
	ex4_pd[6] = v[1] * v[1];
	ex4_pd[7] = v[1] + v[1];
	v[1] = 3.96 * ex4_pd[6];
	v[0] += v[1];
	v[1] = x[4] + -4.74;
	ex4_pd[8] = v[1] * v[1];
	ex4_pd[9] = v[1] + v[1];
	v[1] = 8.67 * ex4_pd[8];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[11];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] + -5.51;
	ex4_pd[10] = v[0] * v[0];
	ex4_pd[11] = v[0] + v[0];
	v[0] = 8.38 * ex4_pd[10];
	v[1] = x[2] + -9.01;
	ex4_pd[12] = v[1] * v[1];
	ex4_pd[13] = v[1] + v[1];
	v[1] = 3.93 * ex4_pd[12];
	v[0] += v[1];
	v[1] = x[3] + -3.84;
	ex4_pd[14] = v[1] * v[1];
	ex4_pd[15] = v[1] + v[1];
	v[1] = 5.18 * ex4_pd[14];
	v[0] += v[1];
	v[1] = x[1] + -1.47;
	ex4_pd[16] = v[1] * v[1];
	ex4_pd[17] = v[1] + v[1];
	v[1] = 5.2 * ex4_pd[16];
	v[0] += v[1];
	v[1] = x[4] + -9.92;
	ex4_pd[18] = v[1] * v[1];
	ex4_pd[19] = v[1] + v[1];
	v[1] = 7.82 * ex4_pd[18];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[12];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] + -4.06;
	ex4_pd[20] = v[0] * v[0];
	ex4_pd[21] = v[0] + v[0];
	v[0] = 9.81 * ex4_pd[20];
	v[1] = x[2] + -1.8;
	ex4_pd[22] = v[1] * v[1];
	ex4_pd[23] = v[1] + v[1];
	v[1] = 0.04 * ex4_pd[22];
	v[0] += v[1];
	v[1] = x[3] + -0.71;
	ex4_pd[24] = v[1] * v[1];
	ex4_pd[25] = v[1] + v[1];
	v[1] = 4.21 * ex4_pd[24];
	v[0] += v[1];
	v[1] = x[1] + -9.09;
	ex4_pd[26] = v[1] * v[1];
	ex4_pd[27] = v[1] + v[1];
	v[1] = 7.38 * ex4_pd[26];
	v[0] += v[1];
	v[1] = x[4] + -8.13;
	ex4_pd[28] = v[1] * v[1];
	ex4_pd[29] = v[1] + v[1];
	v[1] = 4.11 * ex4_pd[28];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[13];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] + -6.3;
	ex4_pd[30] = v[0] * v[0];
	ex4_pd[31] = v[0] + v[0];
	v[0] = 7.41 * ex4_pd[30];
	v[1] = x[2] + -0.11;
	ex4_pd[32] = v[1] * v[1];
	ex4_pd[33] = v[1] + v[1];
	v[1] = 6.08 * ex4_pd[32];
	v[0] += v[1];
	v[1] = x[3] + -4.08;
	ex4_pd[34] = v[1] * v[1];
	ex4_pd[35] = v[1] + v[1];
	v[1] = 5.46 * ex4_pd[34];
	v[0] += v[1];
	v[1] = x[1] + -7.29;
	ex4_pd[36] = v[1] * v[1];
	ex4_pd[37] = v[1] + v[1];
	v[1] = 4.86 * ex4_pd[36];
	v[0] += v[1];
	v[1] = x[4] + -4.24;
	ex4_pd[38] = v[1] * v[1];
	ex4_pd[39] = v[1] + v[1];
	v[1] = 1.48 * ex4_pd[38];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[14];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[0] + -2.81;
	ex4_pd[40] = v[0] * v[0];
	ex4_pd[41] = v[0] + v[0];
	v[0] = 9.96 * ex4_pd[40];
	v[1] = x[2] + -1.65;
	ex4_pd[42] = v[1] * v[1];
	ex4_pd[43] = v[1] + v[1];
	v[1] = 9.13 * ex4_pd[42];
	v[0] += v[1];
	v[1] = x[3] + -8.08;
	ex4_pd[44] = v[1] * v[1];
	ex4_pd[45] = v[1] + v[1];
	v[1] = 2.95 * ex4_pd[44];
	v[0] += v[1];
	v[1] = x[1] + -3.99;
	ex4_pd[46] = v[1] * v[1];
	ex4_pd[47] = v[1] + v[1];
	v[1] = 8.25 * ex4_pd[46];
	v[0] += v[1];
	v[1] = x[4] + -3.51;
	ex4_pd[48] = v[1] * v[1];
	ex4_pd[49] = v[1] + v[1];
	v[1] = 3.58 * ex4_pd[48];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[15];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[0] + -4.29;
	ex4_pd[50] = v[0] * v[0];
	ex4_pd[51] = v[0] + v[0];
	v[0] = 9.39 * ex4_pd[50];
	v[1] = x[2] + -9.49;
	ex4_pd[52] = v[1] * v[1];
	ex4_pd[53] = v[1] + v[1];
	v[1] = 4.27 * ex4_pd[52];
	v[0] += v[1];
	v[1] = x[3] + -2.24;
	ex4_pd[54] = v[1] * v[1];
	ex4_pd[55] = v[1] + v[1];
	v[1] = 5.09 * ex4_pd[54];
	v[0] += v[1];
	v[1] = x[1] + -9.78;
	ex4_pd[56] = v[1] * v[1];
	ex4_pd[57] = v[1] + v[1];
	v[1] = 1.81 * ex4_pd[56];
	v[0] += v[1];
	v[1] = x[4] + -1.52;
	ex4_pd[58] = v[1] * v[1];
	ex4_pd[59] = v[1] + v[1];
	v[1] = 7.58 * ex4_pd[58];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[16];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[0] + -9.76;
	ex4_pd[60] = v[0] * v[0];
	ex4_pd[61] = v[0] + v[0];
	v[0] = 1.88 * ex4_pd[60];
	v[1] = x[2] + -3.64;
	ex4_pd[62] = v[1] * v[1];
	ex4_pd[63] = v[1] + v[1];
	v[1] = 7.2 * ex4_pd[62];
	v[0] += v[1];
	v[1] = x[3] + -6.62;
	ex4_pd[64] = v[1] * v[1];
	ex4_pd[65] = v[1] + v[1];
	v[1] = 6.65 * ex4_pd[64];
	v[0] += v[1];
	v[1] = x[1] + -3.66;
	ex4_pd[66] = v[1] * v[1];
	ex4_pd[67] = v[1] + v[1];
	v[1] = 1.74 * ex4_pd[66];
	v[0] += v[1];
	v[1] = x[4] + -9.08;
	ex4_pd[68] = v[1] * v[1];
	ex4_pd[69] = v[1] + v[1];
	v[1] = 2.86 * ex4_pd[68];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[17];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[0] + -1.37;
	ex4_pd[70] = v[0] * v[0];
	ex4_pd[71] = v[0] + v[0];
	v[0] = 4.01 * ex4_pd[70];
	v[1] = x[2] + -6.99;
	ex4_pd[72] = v[1] * v[1];
	ex4_pd[73] = v[1] + v[1];
	v[1] = 2.67 * ex4_pd[72];
	v[0] += v[1];
	v[1] = x[3] + -7.19;
	ex4_pd[74] = v[1] * v[1];
	ex4_pd[75] = v[1] + v[1];
	v[1] = 4.86 * ex4_pd[74];
	v[0] += v[1];
	v[1] = x[1] + -3.03;
	ex4_pd[76] = v[1] * v[1];
	ex4_pd[77] = v[1] + v[1];
	v[1] = 2.55 * ex4_pd[76];
	v[0] += v[1];
	v[1] = x[4] + -3.39;
	ex4_pd[78] = v[1] * v[1];
	ex4_pd[79] = v[1] + v[1];
	v[1] = 6.91 * ex4_pd[78];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[18];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[0] + -8.89;
	ex4_pd[80] = v[0] * v[0];
	ex4_pd[81] = v[0] + v[0];
	v[0] = 4.18 * ex4_pd[80];
	v[1] = x[2] + -8.29;
	ex4_pd[82] = v[1] * v[1];
	ex4_pd[83] = v[1] + v[1];
	v[1] = 1.92 * ex4_pd[82];
	v[0] += v[1];
	v[1] = x[3] + -6.05;
	ex4_pd[84] = v[1] * v[1];
	ex4_pd[85] = v[1] + v[1];
	v[1] = 2.6 * ex4_pd[84];
	v[0] += v[1];
	v[1] = x[1] + -7.48;
	ex4_pd[86] = v[1] * v[1];
	ex4_pd[87] = v[1] + v[1];
	v[1] = 7.15 * ex4_pd[86];
	v[0] += v[1];
	v[1] = x[4] + -4.09;
	ex4_pd[88] = v[1] * v[1];
	ex4_pd[89] = v[1] + v[1];
	v[1] = 2.86 * ex4_pd[88];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[19];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[0] + -7.42;
	ex4_pd[90] = v[0] * v[0];
	ex4_pd[91] = v[0] + v[0];
	v[0] = 7.81 * ex4_pd[90];
	v[1] = x[2] + -4.6;
	ex4_pd[92] = v[1] * v[1];
	ex4_pd[93] = v[1] + v[1];
	v[1] = 2.14 * ex4_pd[92];
	v[0] += v[1];
	v[1] = x[3] + -0.3;
	ex4_pd[94] = v[1] * v[1];
	ex4_pd[95] = v[1] + v[1];
	v[1] = 9.63 * ex4_pd[94];
	v[0] += v[1];
	v[1] = x[1] + -0.97;
	ex4_pd[96] = v[1] * v[1];
	ex4_pd[97] = v[1] + v[1];
	v[1] = 7.61 * ex4_pd[96];
	v[0] += v[1];
	v[1] = x[4] + -8.77;
	ex4_pd[98] = v[1] * v[1];
	ex4_pd[99] = v[1] + v[1];
	v[1] = 9.17 * ex4_pd[98];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[20];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[0] + -1.54;
	ex4_pd[100] = v[0] * v[0];
	ex4_pd[101] = v[0] + v[0];
	v[0] = 8.96 * ex4_pd[100];
	v[1] = x[2] + -7.06;
	ex4_pd[102] = v[1] * v[1];
	ex4_pd[103] = v[1] + v[1];
	v[1] = 3.47 * ex4_pd[102];
	v[0] += v[1];
	v[1] = x[3] + -0.01;
	ex4_pd[104] = v[1] * v[1];
	ex4_pd[105] = v[1] + v[1];
	v[1] = 5.49 * ex4_pd[104];
	v[0] += v[1];
	v[1] = x[1] + -1.23;
	ex4_pd[106] = v[1] * v[1];
	ex4_pd[107] = v[1] + v[1];
	v[1] = 4.73 * ex4_pd[106];
	v[0] += v[1];
	v[1] = x[4] + -3.11;
	ex4_pd[108] = v[1] * v[1];
	ex4_pd[109] = v[1] + v[1];
	v[1] = 9.43 * ex4_pd[108];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[21];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[0] + -7.74;
	ex4_pd[110] = v[0] * v[0];
	ex4_pd[111] = v[0] + v[0];
	v[0] = 9.94 * ex4_pd[110];
	v[1] = x[2] + -4.4;
	ex4_pd[112] = v[1] * v[1];
	ex4_pd[113] = v[1] + v[1];
	v[1] = 1.63 * ex4_pd[112];
	v[0] += v[1];
	v[1] = x[3] + -7.93;
	ex4_pd[114] = v[1] * v[1];
	ex4_pd[115] = v[1] + v[1];
	v[1] = 1.23 * ex4_pd[114];
	v[0] += v[1];
	v[1] = x[1] + -5.95;
	ex4_pd[116] = v[1] * v[1];
	ex4_pd[117] = v[1] + v[1];
	v[1] = 4.33 * ex4_pd[116];
	v[0] += v[1];
	v[1] = x[4] + -4.88;
	ex4_pd[118] = v[1] * v[1];
	ex4_pd[119] = v[1] + v[1];
	v[1] = 7.08 * ex4_pd[118];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[22];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[0] + -9.94;
	ex4_pd[120] = v[0] * v[0];
	ex4_pd[121] = v[0] + v[0];
	v[0] = 0.31 * ex4_pd[120];
	v[1] = x[2] + -5.21;
	ex4_pd[122] = v[1] * v[1];
	ex4_pd[123] = v[1] + v[1];
	v[1] = 5. * ex4_pd[122];
	v[0] += v[1];
	v[1] = x[3] + -8.58;
	ex4_pd[124] = v[1] * v[1];
	ex4_pd[125] = v[1] + v[1];
	v[1] = 0.16 * ex4_pd[124];
	v[0] += v[1];
	v[1] = x[1] + -0.13;
	ex4_pd[126] = v[1] * v[1];
	ex4_pd[127] = v[1] + v[1];
	v[1] = 2.52 * ex4_pd[126];
	v[0] += v[1];
	v[1] = x[4] + -4.57;
	ex4_pd[128] = v[1] * v[1];
	ex4_pd[129] = v[1] + v[1];
	v[1] = 3.08 * ex4_pd[128];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[23];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[0] + -9.54;
	ex4_pd[130] = v[0] * v[0];
	ex4_pd[131] = v[0] + v[0];
	v[0] = 6.02 * ex4_pd[130];
	v[1] = x[2] + -1.57;
	ex4_pd[132] = v[1] * v[1];
	ex4_pd[133] = v[1] + v[1];
	v[1] = 0.92 * ex4_pd[132];
	v[0] += v[1];
	v[1] = x[3] + -9.66;
	ex4_pd[134] = v[1] * v[1];
	ex4_pd[135] = v[1] + v[1];
	v[1] = 7.47 * ex4_pd[134];
	v[0] += v[1];
	v[1] = x[1] + -5.24;
	ex4_pd[136] = v[1] * v[1];
	ex4_pd[137] = v[1] + v[1];
	v[1] = 9.74 * ex4_pd[136];
	v[0] += v[1];
	v[1] = x[4] + -7.9;
	ex4_pd[138] = v[1] * v[1];
	ex4_pd[139] = v[1] + v[1];
	v[1] = 1.76 * ex4_pd[138];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[24];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[0] + -7.46;
	ex4_pd[140] = v[0] * v[0];
	ex4_pd[141] = v[0] + v[0];
	v[0] = 5.06 * ex4_pd[140];
	v[1] = x[2] + -8.81;
	ex4_pd[142] = v[1] * v[1];
	ex4_pd[143] = v[1] + v[1];
	v[1] = 4.52 * ex4_pd[142];
	v[0] += v[1];
	v[1] = x[3] + -1.67;
	ex4_pd[144] = v[1] * v[1];
	ex4_pd[145] = v[1] + v[1];
	v[1] = 1.89 * ex4_pd[144];
	v[0] += v[1];
	v[1] = x[1] + -6.47;
	ex4_pd[146] = v[1] * v[1];
	ex4_pd[147] = v[1] + v[1];
	v[1] = 1.22 * ex4_pd[146];
	v[0] += v[1];
	v[1] = x[4] + -1.81;
	ex4_pd[148] = v[1] * v[1];
	ex4_pd[149] = v[1] + v[1];
	v[1] = 9.05 * ex4_pd[148];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[25];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[0] + -0.56;
	ex4_pd[150] = v[0] * v[0];
	ex4_pd[151] = v[0] + v[0];
	v[0] = 5.92 * ex4_pd[150];
	v[1] = x[2] + -8.1;
	ex4_pd[152] = v[1] * v[1];
	ex4_pd[153] = v[1] + v[1];
	v[1] = 2.56 * ex4_pd[152];
	v[0] += v[1];
	v[1] = x[3] + -0.19;
	ex4_pd[154] = v[1] * v[1];
	ex4_pd[155] = v[1] + v[1];
	v[1] = 7.74 * ex4_pd[154];
	v[0] += v[1];
	v[1] = x[1] + -6.11;
	ex4_pd[156] = v[1] * v[1];
	ex4_pd[157] = v[1] + v[1];
	v[1] = 6.96 * ex4_pd[156];
	v[0] += v[1];
	v[1] = x[4] + -6.4;
	ex4_pd[158] = v[1] * v[1];
	ex4_pd[159] = v[1] + v[1];
	v[1] = 5.18 * ex4_pd[158];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[26];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[0] + -3.86;
	ex4_pd[160] = v[0] * v[0];
	ex4_pd[161] = v[0] + v[0];
	v[0] = 6.45 * ex4_pd[160];
	v[1] = x[2] + -6.68;
	ex4_pd[162] = v[1] * v[1];
	ex4_pd[163] = v[1] + v[1];
	v[1] = 1.52 * ex4_pd[162];
	v[0] += v[1];
	v[1] = x[3] + -6.42;
	ex4_pd[164] = v[1] * v[1];
	ex4_pd[165] = v[1] + v[1];
	v[1] = 0.06 * ex4_pd[164];
	v[0] += v[1];
	v[1] = x[1] + -7.29;
	ex4_pd[166] = v[1] * v[1];
	ex4_pd[167] = v[1] + v[1];
	v[1] = 5.34 * ex4_pd[166];
	v[0] += v[1];
	v[1] = x[4] + -4.66;
	ex4_pd[168] = v[1] * v[1];
	ex4_pd[169] = v[1] + v[1];
	v[1] = 8.47 * ex4_pd[168];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[27];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[0] + -2.98;
	ex4_pd[170] = v[0] * v[0];
	ex4_pd[171] = v[0] + v[0];
	v[0] = 1.04 * ex4_pd[170];
	v[1] = x[2] + -2.98;
	ex4_pd[172] = v[1] * v[1];
	ex4_pd[173] = v[1] + v[1];
	v[1] = 1.36 * ex4_pd[172];
	v[0] += v[1];
	v[1] = x[3] + -3.03;
	ex4_pd[174] = v[1] * v[1];
	ex4_pd[175] = v[1] + v[1];
	v[1] = 5.99 * ex4_pd[174];
	v[0] += v[1];
	v[1] = x[1] + -0.02;
	ex4_pd[176] = v[1] * v[1];
	ex4_pd[177] = v[1] + v[1];
	v[1] = 8.1 * ex4_pd[176];
	v[0] += v[1];
	v[1] = x[4] + -0.67;
	ex4_pd[178] = v[1] * v[1];
	ex4_pd[179] = v[1] + v[1];
	v[1] = 5.22 * ex4_pd[178];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[28];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[0] + -3.61;
	ex4_pd[180] = v[0] * v[0];
	ex4_pd[181] = v[0] + v[0];
	v[0] = 1.4 * ex4_pd[180];
	v[1] = x[2] + -7.62;
	ex4_pd[182] = v[1] * v[1];
	ex4_pd[183] = v[1] + v[1];
	v[1] = 1.35 * ex4_pd[182];
	v[0] += v[1];
	v[1] = x[3] + -1.79;
	ex4_pd[184] = v[1] * v[1];
	ex4_pd[185] = v[1] + v[1];
	v[1] = 0.59 * ex4_pd[184];
	v[0] += v[1];
	v[1] = x[1] + -7.8;
	ex4_pd[186] = v[1] * v[1];
	ex4_pd[187] = v[1] + v[1];
	v[1] = 8.58 * ex4_pd[186];
	v[0] += v[1];
	v[1] = x[4] + -9.81;
	ex4_pd[188] = v[1] * v[1];
	ex4_pd[189] = v[1] + v[1];
	v[1] = 1.21 * ex4_pd[188];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[29];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[0] + -5.68;
	ex4_pd[190] = v[0] * v[0];
	ex4_pd[191] = v[0] + v[0];
	v[0] = 6.68 * ex4_pd[190];
	v[1] = x[2] + -4.24;
	ex4_pd[192] = v[1] * v[1];
	ex4_pd[193] = v[1] + v[1];
	v[1] = 9.48 * ex4_pd[192];
	v[0] += v[1];
	v[1] = x[3] + -4.17;
	ex4_pd[194] = v[1] * v[1];
	ex4_pd[195] = v[1] + v[1];
	v[1] = 1.6 * ex4_pd[194];
	v[0] += v[1];
	v[1] = x[1] + -6.75;
	ex4_pd[196] = v[1] * v[1];
	ex4_pd[197] = v[1] + v[1];
	v[1] = 6.74 * ex4_pd[196];
	v[0] += v[1];
	v[1] = x[4] + -1.08;
	ex4_pd[198] = v[1] * v[1];
	ex4_pd[199] = v[1] + v[1];
	v[1] = 8.92 * ex4_pd[198];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[30];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[0] + -5.48;
	ex4_pd[200] = v[0] * v[0];
	ex4_pd[201] = v[0] + v[0];
	v[0] = 1.95 * ex4_pd[200];
	v[1] = x[2] + -3.74;
	ex4_pd[202] = v[1] * v[1];
	ex4_pd[203] = v[1] + v[1];
	v[1] = 0.46 * ex4_pd[202];
	v[0] += v[1];
	v[1] = x[3] + -3.34;
	ex4_pd[204] = v[1] * v[1];
	ex4_pd[205] = v[1] + v[1];
	v[1] = 2.9 * ex4_pd[204];
	v[0] += v[1];
	v[1] = x[1] + -6.22;
	ex4_pd[206] = v[1] * v[1];
	ex4_pd[207] = v[1] + v[1];
	v[1] = 1.79 * ex4_pd[206];
	v[0] += v[1];
	v[1] = x[4] + -7.94;
	ex4_pd[208] = v[1] * v[1];
	ex4_pd[209] = v[1] + v[1];
	v[1] = 0.99 * ex4_pd[208];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[31];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[0] + -8.13;
	ex4_pd[210] = v[0] * v[0];
	ex4_pd[211] = v[0] + v[0];
	v[0] = 5.18 * ex4_pd[210];
	v[1] = x[2] + -8.72;
	ex4_pd[212] = v[1] * v[1];
	ex4_pd[213] = v[1] + v[1];
	v[1] = 5.1 * ex4_pd[212];
	v[0] += v[1];
	v[1] = x[3] + -3.93;
	ex4_pd[214] = v[1] * v[1];
	ex4_pd[215] = v[1] + v[1];
	v[1] = 8.81 * ex4_pd[214];
	v[0] += v[1];
	v[1] = x[1] + -8.8;
	ex4_pd[216] = v[1] * v[1];
	ex4_pd[217] = v[1] + v[1];
	v[1] = 3.27 * ex4_pd[216];
	v[0] += v[1];
	v[1] = x[4] + -8.56;
	ex4_pd[218] = v[1] * v[1];
	ex4_pd[219] = v[1] + v[1];
	v[1] = 9.63 * ex4_pd[218];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[32];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[0] + -1.37;
	ex4_pd[220] = v[0] * v[0];
	ex4_pd[221] = v[0] + v[0];
	v[0] = 1.47 * ex4_pd[220];
	v[1] = x[2] + -0.54;
	ex4_pd[222] = v[1] * v[1];
	ex4_pd[223] = v[1] + v[1];
	v[1] = 5.71 * ex4_pd[222];
	v[0] += v[1];
	v[1] = x[3] + -1.55;
	ex4_pd[224] = v[1] * v[1];
	ex4_pd[225] = v[1] + v[1];
	v[1] = 6.95 * ex4_pd[224];
	v[0] += v[1];
	v[1] = x[1] + -5.56;
	ex4_pd[226] = v[1] * v[1];
	ex4_pd[227] = v[1] + v[1];
	v[1] = 1.42 * ex4_pd[226];
	v[0] += v[1];
	v[1] = x[4] + -5.85;
	ex4_pd[228] = v[1] * v[1];
	ex4_pd[229] = v[1] + v[1];
	v[1] = 3.49 * ex4_pd[228];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[33];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[0] + -8.79;
	ex4_pd[230] = v[0] * v[0];
	ex4_pd[231] = v[0] + v[0];
	v[0] = 5.4 * ex4_pd[230];
	v[1] = x[2] + -5.04;
	ex4_pd[232] = v[1] * v[1];
	ex4_pd[233] = v[1] + v[1];
	v[1] = 3.12 * ex4_pd[232];
	v[0] += v[1];
	v[1] = x[3] + -4.83;
	ex4_pd[234] = v[1] * v[1];
	ex4_pd[235] = v[1] + v[1];
	v[1] = 5.37 * ex4_pd[234];
	v[0] += v[1];
	v[1] = x[1] + -6.94;
	ex4_pd[236] = v[1] * v[1];
	ex4_pd[237] = v[1] + v[1];
	v[1] = 6.1 * ex4_pd[236];
	v[0] += v[1];
	v[1] = x[4] + -0.38;
	ex4_pd[238] = v[1] * v[1];
	ex4_pd[239] = v[1] + v[1];
	v[1] = 3.71 * ex4_pd[238];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[34];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[0] + -2.66;
	ex4_pd[240] = v[0] * v[0];
	ex4_pd[241] = v[0] + v[0];
	v[0] = 6.32 * ex4_pd[240];
	v[1] = x[2] + -4.19;
	ex4_pd[242] = v[1] * v[1];
	ex4_pd[243] = v[1] + v[1];
	v[1] = 0.81 * ex4_pd[242];
	v[0] += v[1];
	v[1] = x[3] + -6.49;
	ex4_pd[244] = v[1] * v[1];
	ex4_pd[245] = v[1] + v[1];
	v[1] = 6.12 * ex4_pd[244];
	v[0] += v[1];
	v[1] = x[1] + -8.04;
	ex4_pd[246] = v[1] * v[1];
	ex4_pd[247] = v[1] + v[1];
	v[1] = 6.73 * ex4_pd[246];
	v[0] += v[1];
	v[1] = x[4] + -1.66;
	ex4_pd[248] = v[1] * v[1];
	ex4_pd[249] = v[1] + v[1];
	v[1] = 7.93 * ex4_pd[248];
	v[0] += v[1];
	t1 = v[0] + -x[5];
	t1 += 1000.*x[35];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += -x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += -x[6];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = 0.6*x[0];
	t1 += 0.1*x[1];
	t1 += -0.9*x[2];
	t1 += -0.5*x[3];
	t1 += x[4];
	t1 += -x[7];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[8];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = 0.157*x[0];
	t1 += 0.05*x[2];
	t1 += -x[9];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = 1.05*x[1];
	t1 += 0.25*x[2];
	t1 += -0.3*x[4];
	t1 += -x[10];
	c[29] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = 8.67*ex4_pd[9];
	J[116] = dv[0];
	dv[1] = 3.96*ex4_pd[7];
	J[29] = dv[1];
	dv[2] = 9.75*ex4_pd[5];
	J[88] = dv[2];
	dv[3] = 2.74*ex4_pd[3];
	J[58] = dv[3];
	dv[4] = 9.57*ex4_pd[1];
	J[0] = dv[4];
	J[145] = -1.;
	J[175] = 1000.;

   /*** derivatives for constraint 2 ***/

	dv[0] = 7.82*ex4_pd[19];
	J[117] = dv[0];
	dv[1] = 5.2*ex4_pd[17];
	J[30] = dv[1];
	dv[2] = 5.18*ex4_pd[15];
	J[89] = dv[2];
	dv[3] = 3.93*ex4_pd[13];
	J[59] = dv[3];
	dv[4] = 8.38*ex4_pd[11];
	J[1] = dv[4];
	J[146] = -1.;
	J[176] = 1000.;

   /*** derivatives for constraint 3 ***/

	dv[0] = 4.11*ex4_pd[29];
	J[118] = dv[0];
	dv[1] = 7.38*ex4_pd[27];
	J[31] = dv[1];
	dv[2] = 4.21*ex4_pd[25];
	J[90] = dv[2];
	dv[3] = 0.04*ex4_pd[23];
	J[60] = dv[3];
	dv[4] = 9.81*ex4_pd[21];
	J[2] = dv[4];
	J[147] = -1.;
	J[177] = 1000.;

   /*** derivatives for constraint 4 ***/

	dv[0] = 1.48*ex4_pd[39];
	J[119] = dv[0];
	dv[1] = 4.86*ex4_pd[37];
	J[32] = dv[1];
	dv[2] = 5.46*ex4_pd[35];
	J[91] = dv[2];
	dv[3] = 6.08*ex4_pd[33];
	J[61] = dv[3];
	dv[4] = 7.41*ex4_pd[31];
	J[3] = dv[4];
	J[148] = -1.;
	J[178] = 1000.;

   /*** derivatives for constraint 5 ***/

	dv[0] = 3.58*ex4_pd[49];
	J[120] = dv[0];
	dv[1] = 8.25*ex4_pd[47];
	J[33] = dv[1];
	dv[2] = 2.95*ex4_pd[45];
	J[92] = dv[2];
	dv[3] = 9.13*ex4_pd[43];
	J[62] = dv[3];
	dv[4] = 9.96*ex4_pd[41];
	J[4] = dv[4];
	J[149] = -1.;
	J[179] = 1000.;

   /*** derivatives for constraint 6 ***/

	dv[0] = 7.58*ex4_pd[59];
	J[121] = dv[0];
	dv[1] = 1.81*ex4_pd[57];
	J[34] = dv[1];
	dv[2] = 5.09*ex4_pd[55];
	J[93] = dv[2];
	dv[3] = 4.27*ex4_pd[53];
	J[63] = dv[3];
	dv[4] = 9.39*ex4_pd[51];
	J[5] = dv[4];
	J[150] = -1.;
	J[180] = 1000.;

   /*** derivatives for constraint 7 ***/

	dv[0] = 2.86*ex4_pd[69];
	J[122] = dv[0];
	dv[1] = 1.74*ex4_pd[67];
	J[35] = dv[1];
	dv[2] = 6.65*ex4_pd[65];
	J[94] = dv[2];
	dv[3] = 7.2*ex4_pd[63];
	J[64] = dv[3];
	dv[4] = 1.88*ex4_pd[61];
	J[6] = dv[4];
	J[151] = -1.;
	J[181] = 1000.;

   /*** derivatives for constraint 8 ***/

	dv[0] = 6.91*ex4_pd[79];
	J[123] = dv[0];
	dv[1] = 2.55*ex4_pd[77];
	J[36] = dv[1];
	dv[2] = 4.86*ex4_pd[75];
	J[95] = dv[2];
	dv[3] = 2.67*ex4_pd[73];
	J[65] = dv[3];
	dv[4] = 4.01*ex4_pd[71];
	J[7] = dv[4];
	J[152] = -1.;
	J[182] = 1000.;

   /*** derivatives for constraint 9 ***/

	dv[0] = 2.86*ex4_pd[89];
	J[124] = dv[0];
	dv[1] = 7.15*ex4_pd[87];
	J[37] = dv[1];
	dv[2] = 2.6*ex4_pd[85];
	J[96] = dv[2];
	dv[3] = 1.92*ex4_pd[83];
	J[66] = dv[3];
	dv[4] = 4.18*ex4_pd[81];
	J[8] = dv[4];
	J[153] = -1.;
	J[183] = 1000.;

   /*** derivatives for constraint 10 ***/

	dv[0] = 9.17*ex4_pd[99];
	J[125] = dv[0];
	dv[1] = 7.61*ex4_pd[97];
	J[38] = dv[1];
	dv[2] = 9.63*ex4_pd[95];
	J[97] = dv[2];
	dv[3] = 2.14*ex4_pd[93];
	J[67] = dv[3];
	dv[4] = 7.81*ex4_pd[91];
	J[9] = dv[4];
	J[154] = -1.;
	J[184] = 1000.;

   /*** derivatives for constraint 11 ***/

	dv[0] = 9.43*ex4_pd[109];
	J[126] = dv[0];
	dv[1] = 4.73*ex4_pd[107];
	J[39] = dv[1];
	dv[2] = 5.49*ex4_pd[105];
	J[98] = dv[2];
	dv[3] = 3.47*ex4_pd[103];
	J[68] = dv[3];
	dv[4] = 8.96*ex4_pd[101];
	J[10] = dv[4];
	J[155] = -1.;
	J[185] = 1000.;

   /*** derivatives for constraint 12 ***/

	dv[0] = 7.08*ex4_pd[119];
	J[127] = dv[0];
	dv[1] = 4.33*ex4_pd[117];
	J[40] = dv[1];
	dv[2] = 1.23*ex4_pd[115];
	J[99] = dv[2];
	dv[3] = 1.63*ex4_pd[113];
	J[69] = dv[3];
	dv[4] = 9.94*ex4_pd[111];
	J[11] = dv[4];
	J[156] = -1.;
	J[186] = 1000.;

   /*** derivatives for constraint 13 ***/

	dv[0] = 3.08*ex4_pd[129];
	J[128] = dv[0];
	dv[1] = 2.52*ex4_pd[127];
	J[41] = dv[1];
	dv[2] = 0.16*ex4_pd[125];
	J[100] = dv[2];
	dv[3] = 5.*ex4_pd[123];
	J[70] = dv[3];
	dv[4] = 0.31*ex4_pd[121];
	J[12] = dv[4];
	J[157] = -1.;
	J[187] = 1000.;

   /*** derivatives for constraint 14 ***/

	dv[0] = 1.76*ex4_pd[139];
	J[129] = dv[0];
	dv[1] = 9.74*ex4_pd[137];
	J[42] = dv[1];
	dv[2] = 7.47*ex4_pd[135];
	J[101] = dv[2];
	dv[3] = 0.92*ex4_pd[133];
	J[71] = dv[3];
	dv[4] = 6.02*ex4_pd[131];
	J[13] = dv[4];
	J[158] = -1.;
	J[188] = 1000.;

   /*** derivatives for constraint 15 ***/

	dv[0] = 9.05*ex4_pd[149];
	J[130] = dv[0];
	dv[1] = 1.22*ex4_pd[147];
	J[43] = dv[1];
	dv[2] = 1.89*ex4_pd[145];
	J[102] = dv[2];
	dv[3] = 4.52*ex4_pd[143];
	J[72] = dv[3];
	dv[4] = 5.06*ex4_pd[141];
	J[14] = dv[4];
	J[159] = -1.;
	J[189] = 1000.;

   /*** derivatives for constraint 16 ***/

	dv[0] = 5.18*ex4_pd[159];
	J[131] = dv[0];
	dv[1] = 6.96*ex4_pd[157];
	J[44] = dv[1];
	dv[2] = 7.74*ex4_pd[155];
	J[103] = dv[2];
	dv[3] = 2.56*ex4_pd[153];
	J[73] = dv[3];
	dv[4] = 5.92*ex4_pd[151];
	J[15] = dv[4];
	J[160] = -1.;
	J[190] = 1000.;

   /*** derivatives for constraint 17 ***/

	dv[0] = 8.47*ex4_pd[169];
	J[132] = dv[0];
	dv[1] = 5.34*ex4_pd[167];
	J[45] = dv[1];
	dv[2] = 0.06*ex4_pd[165];
	J[104] = dv[2];
	dv[3] = 1.52*ex4_pd[163];
	J[74] = dv[3];
	dv[4] = 6.45*ex4_pd[161];
	J[16] = dv[4];
	J[161] = -1.;
	J[191] = 1000.;

   /*** derivatives for constraint 18 ***/

	dv[0] = 5.22*ex4_pd[179];
	J[133] = dv[0];
	dv[1] = 8.1*ex4_pd[177];
	J[46] = dv[1];
	dv[2] = 5.99*ex4_pd[175];
	J[105] = dv[2];
	dv[3] = 1.36*ex4_pd[173];
	J[75] = dv[3];
	dv[4] = 1.04*ex4_pd[171];
	J[17] = dv[4];
	J[162] = -1.;
	J[192] = 1000.;

   /*** derivatives for constraint 19 ***/

	dv[0] = 1.21*ex4_pd[189];
	J[134] = dv[0];
	dv[1] = 8.58*ex4_pd[187];
	J[47] = dv[1];
	dv[2] = 0.59*ex4_pd[185];
	J[106] = dv[2];
	dv[3] = 1.35*ex4_pd[183];
	J[76] = dv[3];
	dv[4] = 1.4*ex4_pd[181];
	J[18] = dv[4];
	J[163] = -1.;
	J[193] = 1000.;

   /*** derivatives for constraint 20 ***/

	dv[0] = 8.92*ex4_pd[199];
	J[135] = dv[0];
	dv[1] = 6.74*ex4_pd[197];
	J[48] = dv[1];
	dv[2] = 1.6*ex4_pd[195];
	J[107] = dv[2];
	dv[3] = 9.48*ex4_pd[193];
	J[77] = dv[3];
	dv[4] = 6.68*ex4_pd[191];
	J[19] = dv[4];
	J[164] = -1.;
	J[194] = 1000.;

   /*** derivatives for constraint 21 ***/

	dv[0] = 0.99*ex4_pd[209];
	J[136] = dv[0];
	dv[1] = 1.79*ex4_pd[207];
	J[49] = dv[1];
	dv[2] = 2.9*ex4_pd[205];
	J[108] = dv[2];
	dv[3] = 0.46*ex4_pd[203];
	J[78] = dv[3];
	dv[4] = 1.95*ex4_pd[201];
	J[20] = dv[4];
	J[165] = -1.;
	J[195] = 1000.;

   /*** derivatives for constraint 22 ***/

	dv[0] = 9.63*ex4_pd[219];
	J[137] = dv[0];
	dv[1] = 3.27*ex4_pd[217];
	J[50] = dv[1];
	dv[2] = 8.81*ex4_pd[215];
	J[109] = dv[2];
	dv[3] = 5.1*ex4_pd[213];
	J[79] = dv[3];
	dv[4] = 5.18*ex4_pd[211];
	J[21] = dv[4];
	J[166] = -1.;
	J[196] = 1000.;

   /*** derivatives for constraint 23 ***/

	dv[0] = 3.49*ex4_pd[229];
	J[138] = dv[0];
	dv[1] = 1.42*ex4_pd[227];
	J[51] = dv[1];
	dv[2] = 6.95*ex4_pd[225];
	J[110] = dv[2];
	dv[3] = 5.71*ex4_pd[223];
	J[80] = dv[3];
	dv[4] = 1.47*ex4_pd[221];
	J[22] = dv[4];
	J[167] = -1.;
	J[197] = 1000.;

   /*** derivatives for constraint 24 ***/

	dv[0] = 3.71*ex4_pd[239];
	J[139] = dv[0];
	dv[1] = 6.1*ex4_pd[237];
	J[52] = dv[1];
	dv[2] = 5.37*ex4_pd[235];
	J[111] = dv[2];
	dv[3] = 3.12*ex4_pd[233];
	J[81] = dv[3];
	dv[4] = 5.4*ex4_pd[231];
	J[23] = dv[4];
	J[168] = -1.;
	J[198] = 1000.;

   /*** derivatives for constraint 25 ***/

	dv[0] = 7.93*ex4_pd[249];
	J[140] = dv[0];
	dv[1] = 6.73*ex4_pd[247];
	J[53] = dv[1];
	dv[2] = 6.12*ex4_pd[245];
	J[112] = dv[2];
	dv[3] = 0.81*ex4_pd[243];
	J[82] = dv[3];
	dv[4] = 6.32*ex4_pd[241];
	J[24] = dv[4];
	J[169] = -1.;
	J[199] = 1000.;

   /*** derivatives for constraint 26 ***/

	J[25] = 1.;
	J[54] = 1.;
	J[83] = -1.;
	J[113] = 1.;
	J[141] = 1.;
	J[170] = -1.;

   /*** derivatives for constraint 27 ***/

	J[26] = 0.6;
	J[55] = 0.1;
	J[84] = -0.9;
	J[114] = -0.5;
	J[142] = 1.;
	J[171] = -1.;

   /*** derivatives for constraint 28 ***/

	J[27] = 1.;
	J[56] = -1.;
	J[85] = -1.;
	J[115] = 1.;
	J[143] = 1.;
	J[172] = 1.;

   /*** derivatives for constraint 29 ***/

	J[28] = 0.157;
	J[86] = 0.05;
	J[173] = -1.;

   /*** derivatives for constraint 30 ***/

	J[57] = 1.05;
	J[87] = 0.25;
	J[144] = -0.3;
	J[174] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif