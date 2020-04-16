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
 fint meanvar_auxcom_[1] = { 0 /* nlc */ };
 fint meanvar_funcom_[30] = {
	8 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	15 /* nzc */,
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
	13,
	15,
	16,

	/* rownos */
	1,
	2,
	1,
	2,
	1,
	2,
	1,
	2,
	1,
	2,
	1,
	2,
	1,
	2,
	1 };

 real meanvar_boundc_[1+16+4] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.115,
		0.115,
		0.,
		0.,
		1.,
		1.};

 real meanvar_x0comn_[8] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.115 };

 static real meanvar_pd[96];
static real meanvar_old_x[8];
static int meanvar_xkind = -1;

 static int
meanvar_xcheck(real *x)
{
	real *x1 = meanvar_old_x, *xe = x + 8;
	errno = 0;
	if (meanvar_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	meanvar_xkind = 0;
	return 1;
	}
 real
meanvar_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[47];
	fint wantfg = *needfg;
	if (meanvar_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	meanvar_pd[0] = 42.18 * x[0];
	meanvar_pd[1] = meanvar_pd[0] * x[0];
	v[0] = 0.5 * meanvar_pd[1];
	meanvar_pd[2] = 20.18 * x[0];
	meanvar_pd[3] = meanvar_pd[2] * x[1];
	v[1] = 0.5 * meanvar_pd[3];
	v[0] += v[1];
	meanvar_pd[4] = 10.88 * x[0];
	meanvar_pd[5] = meanvar_pd[4] * x[2];
	v[1] = 0.5 * meanvar_pd[5];
	v[0] += v[1];
	meanvar_pd[6] = 5.3 * x[0];
	meanvar_pd[7] = meanvar_pd[6] * x[3];
	v[1] = 0.5 * meanvar_pd[7];
	v[0] += v[1];
	meanvar_pd[8] = 12.32 * x[0];
	meanvar_pd[9] = meanvar_pd[8] * x[4];
	v[1] = 0.5 * meanvar_pd[9];
	v[0] += v[1];
	meanvar_pd[10] = 23.84 * x[0];
	meanvar_pd[11] = meanvar_pd[10] * x[5];
	v[1] = 0.5 * meanvar_pd[11];
	v[0] += v[1];
	meanvar_pd[12] = 17.41 * x[0];
	meanvar_pd[13] = meanvar_pd[12] * x[6];
	v[1] = 0.5 * meanvar_pd[13];
	v[0] += v[1];
	meanvar_pd[14] = 20.18 * x[1];
	meanvar_pd[15] = meanvar_pd[14] * x[0];
	v[1] = 0.5 * meanvar_pd[15];
	v[0] += v[1];
	meanvar_pd[16] = 70.89 * x[1];
	meanvar_pd[17] = meanvar_pd[16] * x[1];
	v[1] = 0.5 * meanvar_pd[17];
	v[0] += v[1];
	meanvar_pd[18] = 21.58 * x[1];
	meanvar_pd[19] = meanvar_pd[18] * x[2];
	v[1] = 0.5 * meanvar_pd[19];
	v[0] += v[1];
	meanvar_pd[20] = 15.41 * x[1];
	meanvar_pd[21] = meanvar_pd[20] * x[3];
	v[1] = 0.5 * meanvar_pd[21];
	v[0] += v[1];
	meanvar_pd[22] = 23.24 * x[1];
	meanvar_pd[23] = meanvar_pd[22] * x[4];
	v[1] = 0.5 * meanvar_pd[23];
	v[0] += v[1];
	meanvar_pd[24] = 23.8 * x[1];
	meanvar_pd[25] = meanvar_pd[24] * x[5];
	v[1] = 0.5 * meanvar_pd[25];
	v[0] += v[1];
	meanvar_pd[26] = 12.62 * x[1];
	meanvar_pd[27] = meanvar_pd[26] * x[6];
	v[1] = 0.5 * meanvar_pd[27];
	v[0] += v[1];
	meanvar_pd[28] = 10.88 * x[2];
	meanvar_pd[29] = meanvar_pd[28] * x[0];
	v[1] = 0.5 * meanvar_pd[29];
	v[0] += v[1];
	meanvar_pd[30] = 21.58 * x[2];
	meanvar_pd[31] = meanvar_pd[30] * x[1];
	v[1] = 0.5 * meanvar_pd[31];
	v[0] += v[1];
	meanvar_pd[32] = 25.51 * x[2];
	meanvar_pd[33] = meanvar_pd[32] * x[2];
	v[1] = 0.5 * meanvar_pd[33];
	v[0] += v[1];
	meanvar_pd[34] = 9.6 * x[2];
	meanvar_pd[35] = meanvar_pd[34] * x[3];
	v[1] = 0.5 * meanvar_pd[35];
	v[0] += v[1];
	meanvar_pd[36] = 22.63 * x[2];
	meanvar_pd[37] = meanvar_pd[36] * x[4];
	v[1] = 0.5 * meanvar_pd[37];
	v[0] += v[1];
	meanvar_pd[38] = 13.22 * x[2];
	meanvar_pd[39] = meanvar_pd[38] * x[5];
	v[1] = 0.5 * meanvar_pd[39];
	v[0] += v[1];
	meanvar_pd[40] = 4.7 * x[2];
	meanvar_pd[41] = meanvar_pd[40] * x[6];
	v[1] = 0.5 * meanvar_pd[41];
	v[0] += v[1];
	meanvar_pd[42] = 5.3 * x[3];
	meanvar_pd[43] = meanvar_pd[42] * x[0];
	v[1] = 0.5 * meanvar_pd[43];
	v[0] += v[1];
	meanvar_pd[44] = 15.41 * x[3];
	meanvar_pd[45] = meanvar_pd[44] * x[1];
	v[1] = 0.5 * meanvar_pd[45];
	v[0] += v[1];
	meanvar_pd[46] = 9.6 * x[3];
	meanvar_pd[47] = meanvar_pd[46] * x[2];
	v[1] = 0.5 * meanvar_pd[47];
	v[0] += v[1];
	meanvar_pd[48] = 22.33 * x[3];
	meanvar_pd[49] = meanvar_pd[48] * x[3];
	v[1] = 0.5 * meanvar_pd[49];
	v[0] += v[1];
	meanvar_pd[50] = 10.32 * x[3];
	meanvar_pd[51] = meanvar_pd[50] * x[4];
	v[1] = 0.5 * meanvar_pd[51];
	v[0] += v[1];
	meanvar_pd[52] = 10.46 * x[3];
	meanvar_pd[53] = meanvar_pd[52] * x[5];
	v[1] = 0.5 * meanvar_pd[53];
	v[0] += v[1];
	meanvar_pd[54] = x[3] * x[6];
	v[1] = 0.5 * meanvar_pd[54];
	v[0] += v[1];
	meanvar_pd[55] = 12.32 * x[4];
	meanvar_pd[56] = meanvar_pd[55] * x[0];
	v[1] = 0.5 * meanvar_pd[56];
	v[0] += v[1];
	meanvar_pd[57] = 23.24 * x[4];
	meanvar_pd[58] = meanvar_pd[57] * x[1];
	v[1] = 0.5 * meanvar_pd[58];
	v[0] += v[1];
	meanvar_pd[59] = 22.63 * x[4];
	meanvar_pd[60] = meanvar_pd[59] * x[2];
	v[1] = 0.5 * meanvar_pd[60];
	v[0] += v[1];
	meanvar_pd[61] = 10.32 * x[4];
	meanvar_pd[62] = meanvar_pd[61] * x[3];
	v[1] = 0.5 * meanvar_pd[62];
	v[0] += v[1];
	meanvar_pd[63] = 30.01 * x[4];
	meanvar_pd[64] = meanvar_pd[63] * x[4];
	v[1] = 0.5 * meanvar_pd[64];
	v[0] += v[1];
	meanvar_pd[65] = 16.36 * x[4];
	meanvar_pd[66] = meanvar_pd[65] * x[5];
	v[1] = 0.5 * meanvar_pd[66];
	v[0] += v[1];
	meanvar_pd[67] = 7.2 * x[4];
	meanvar_pd[68] = meanvar_pd[67] * x[6];
	v[1] = 0.5 * meanvar_pd[68];
	v[0] += v[1];
	meanvar_pd[69] = 23.84 * x[5];
	meanvar_pd[70] = meanvar_pd[69] * x[0];
	v[1] = 0.5 * meanvar_pd[70];
	v[0] += v[1];
	meanvar_pd[71] = 23.8 * x[5];
	meanvar_pd[72] = meanvar_pd[71] * x[1];
	v[1] = 0.5 * meanvar_pd[72];
	v[0] += v[1];
	meanvar_pd[73] = 13.22 * x[5];
	meanvar_pd[74] = meanvar_pd[73] * x[2];
	v[1] = 0.5 * meanvar_pd[74];
	v[0] += v[1];
	meanvar_pd[75] = 10.46 * x[5];
	meanvar_pd[76] = meanvar_pd[75] * x[3];
	v[1] = 0.5 * meanvar_pd[76];
	v[0] += v[1];
	meanvar_pd[77] = 16.36 * x[5];
	meanvar_pd[78] = meanvar_pd[77] * x[4];
	v[1] = 0.5 * meanvar_pd[78];
	v[0] += v[1];
	meanvar_pd[79] = 42.23 * x[5];
	meanvar_pd[80] = meanvar_pd[79] * x[5];
	v[1] = 0.5 * meanvar_pd[80];
	v[0] += v[1];
	meanvar_pd[81] = 9.9 * x[5];
	meanvar_pd[82] = meanvar_pd[81] * x[6];
	v[1] = 0.5 * meanvar_pd[82];
	v[0] += v[1];
	meanvar_pd[83] = 17.41 * x[6];
	meanvar_pd[84] = meanvar_pd[83] * x[0];
	v[1] = 0.5 * meanvar_pd[84];
	v[0] += v[1];
	meanvar_pd[85] = 12.62 * x[6];
	meanvar_pd[86] = meanvar_pd[85] * x[1];
	v[1] = 0.5 * meanvar_pd[86];
	v[0] += v[1];
	meanvar_pd[87] = 4.7 * x[6];
	meanvar_pd[88] = meanvar_pd[87] * x[2];
	v[1] = 0.5 * meanvar_pd[88];
	v[0] += v[1];
	meanvar_pd[89] = x[6] * x[3];
	v[1] = 0.5 * meanvar_pd[89];
	v[0] += v[1];
	meanvar_pd[90] = 7.2 * x[6];
	meanvar_pd[91] = meanvar_pd[90] * x[4];
	v[1] = 0.5 * meanvar_pd[91];
	v[0] += v[1];
	meanvar_pd[92] = 9.9 * x[6];
	meanvar_pd[93] = meanvar_pd[92] * x[5];
	v[1] = 0.5 * meanvar_pd[93];
	v[0] += v[1];
	meanvar_pd[94] = 16.42 * x[6];
	meanvar_pd[95] = meanvar_pd[94] * x[6];
	v[1] = 0.5 * meanvar_pd[95];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[6] = 0.5*meanvar_pd[94];
	dv[0] = 0.5*x[6];
	g[6] += dv[0]*16.42;
	g[5] = 0.5*meanvar_pd[92];
	dv[1] = 0.5*x[5];
	g[6] += dv[1]*9.9;
	g[4] = 0.5*meanvar_pd[90];
	dv[2] = 0.5*x[4];
	g[6] += dv[2]*7.2;
	g[3] = 0.5*x[6];
	g[6] += 0.5*x[3];
	g[2] = 0.5*meanvar_pd[87];
	dv[3] = 0.5*x[2];
	g[6] += dv[3]*4.7;
	g[1] = 0.5*meanvar_pd[85];
	dv[4] = 0.5*x[1];
	g[6] += dv[4]*12.62;
	g[0] = 0.5*meanvar_pd[83];
	dv[5] = 0.5*x[0];
	g[6] += dv[5]*17.41;
	g[6] += 0.5*meanvar_pd[81];
	dv[6] = 0.5*x[6];
	g[5] += dv[6]*9.9;
	g[5] += 0.5*meanvar_pd[79];
	dv[7] = 0.5*x[5];
	g[5] += dv[7]*42.23;
	g[4] += 0.5*meanvar_pd[77];
	dv[8] = 0.5*x[4];
	g[5] += dv[8]*16.36;
	g[3] += 0.5*meanvar_pd[75];
	dv[9] = 0.5*x[3];
	g[5] += dv[9]*10.46;
	g[2] += 0.5*meanvar_pd[73];
	dv[10] = 0.5*x[2];
	g[5] += dv[10]*13.22;
	g[1] += 0.5*meanvar_pd[71];
	dv[11] = 0.5*x[1];
	g[5] += dv[11]*23.8;
	g[0] += 0.5*meanvar_pd[69];
	dv[12] = 0.5*x[0];
	g[5] += dv[12]*23.84;
	g[6] += 0.5*meanvar_pd[67];
	dv[13] = 0.5*x[6];
	g[4] += dv[13]*7.2;
	g[5] += 0.5*meanvar_pd[65];
	dv[14] = 0.5*x[5];
	g[4] += dv[14]*16.36;
	g[4] += 0.5*meanvar_pd[63];
	dv[15] = 0.5*x[4];
	g[4] += dv[15]*30.01;
	g[3] += 0.5*meanvar_pd[61];
	dv[16] = 0.5*x[3];
	g[4] += dv[16]*10.32;
	g[2] += 0.5*meanvar_pd[59];
	dv[17] = 0.5*x[2];
	g[4] += dv[17]*22.63;
	g[1] += 0.5*meanvar_pd[57];
	dv[18] = 0.5*x[1];
	g[4] += dv[18]*23.24;
	g[0] += 0.5*meanvar_pd[55];
	dv[19] = 0.5*x[0];
	g[4] += dv[19]*12.32;
	g[6] += 0.5*x[3];
	g[3] += 0.5*x[6];
	g[5] += 0.5*meanvar_pd[52];
	dv[20] = 0.5*x[5];
	g[3] += dv[20]*10.46;
	g[4] += 0.5*meanvar_pd[50];
	dv[21] = 0.5*x[4];
	g[3] += dv[21]*10.32;
	g[3] += 0.5*meanvar_pd[48];
	dv[22] = 0.5*x[3];
	g[3] += dv[22]*22.33;
	g[2] += 0.5*meanvar_pd[46];
	dv[23] = 0.5*x[2];
	g[3] += dv[23]*9.6;
	g[1] += 0.5*meanvar_pd[44];
	dv[24] = 0.5*x[1];
	g[3] += dv[24]*15.41;
	g[0] += 0.5*meanvar_pd[42];
	dv[25] = 0.5*x[0];
	g[3] += dv[25]*5.3;
	g[6] += 0.5*meanvar_pd[40];
	dv[26] = 0.5*x[6];
	g[2] += dv[26]*4.7;
	g[5] += 0.5*meanvar_pd[38];
	dv[27] = 0.5*x[5];
	g[2] += dv[27]*13.22;
	g[4] += 0.5*meanvar_pd[36];
	dv[28] = 0.5*x[4];
	g[2] += dv[28]*22.63;
	g[3] += 0.5*meanvar_pd[34];
	dv[29] = 0.5*x[3];
	g[2] += dv[29]*9.6;
	g[2] += 0.5*meanvar_pd[32];
	dv[30] = 0.5*x[2];
	g[2] += dv[30]*25.51;
	g[1] += 0.5*meanvar_pd[30];
	dv[31] = 0.5*x[1];
	g[2] += dv[31]*21.58;
	g[0] += 0.5*meanvar_pd[28];
	dv[32] = 0.5*x[0];
	g[2] += dv[32]*10.88;
	g[6] += 0.5*meanvar_pd[26];
	dv[33] = 0.5*x[6];
	g[1] += dv[33]*12.62;
	g[5] += 0.5*meanvar_pd[24];
	dv[34] = 0.5*x[5];
	g[1] += dv[34]*23.8;
	g[4] += 0.5*meanvar_pd[22];
	dv[35] = 0.5*x[4];
	g[1] += dv[35]*23.24;
	g[3] += 0.5*meanvar_pd[20];
	dv[36] = 0.5*x[3];
	g[1] += dv[36]*15.41;
	g[2] += 0.5*meanvar_pd[18];
	dv[37] = 0.5*x[2];
	g[1] += dv[37]*21.58;
	g[1] += 0.5*meanvar_pd[16];
	dv[38] = 0.5*x[1];
	g[1] += dv[38]*70.89;
	g[0] += 0.5*meanvar_pd[14];
	dv[39] = 0.5*x[0];
	g[1] += dv[39]*20.18;
	g[6] += 0.5*meanvar_pd[12];
	dv[40] = 0.5*x[6];
	g[0] += dv[40]*17.41;
	g[5] += 0.5*meanvar_pd[10];
	dv[41] = 0.5*x[5];
	g[0] += dv[41]*23.84;
	g[4] += 0.5*meanvar_pd[8];
	dv[42] = 0.5*x[4];
	g[0] += dv[42]*12.32;
	g[3] += 0.5*meanvar_pd[6];
	dv[43] = 0.5*x[3];
	g[0] += dv[43]*5.3;
	g[2] += 0.5*meanvar_pd[4];
	dv[44] = 0.5*x[2];
	g[0] += dv[44]*10.88;
	g[1] += 0.5*meanvar_pd[2];
	dv[45] = 0.5*x[1];
	g[0] += dv[45]*20.18;
	g[0] += 0.5*meanvar_pd[0];
	dv[46] = 0.5*x[0];
	g[0] += dv[46]*42.18;
	}

	return v[0];
}

 void
meanvar_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (meanvar_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -0.1287*x[0];
	t1 += -0.1096*x[1];
	t1 += -0.0501*x[2];
	t1 += -0.1524*x[3];
	t1 += -0.0763*x[4];
	t1 += -0.1854*x[5];
	t1 += -0.062*x[6];
	t1 += x[7];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -0.1287;
	J[2] = -0.1096;
	J[4] = -0.0501;
	J[6] = -0.1524;
	J[8] = -0.0763;
	J[10] = -0.1854;
	J[12] = -0.062;
	J[14] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[3] = 1.;
	J[5] = 1.;
	J[7] = 1.;
	J[9] = 1.;
	J[11] = 1.;
	J[13] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
