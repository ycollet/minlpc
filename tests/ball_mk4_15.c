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
 fint ball_mk4_15_auxcom_[1] = { 1 /* nlc */ };
 fint ball_mk4_15_funcom_[67] = {
	30 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	30 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
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
	31,

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real ball_mk4_15_boundc_[1+60+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-1.7e308,
		-1.};

 real ball_mk4_15_x0comn_[30] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real ball_mk4_15_pd[90];
static real ball_mk4_15_old_x[30];
static int ball_mk4_15_xkind = -1;

 static int
ball_mk4_15_xcheck(real *x)
{
	real *x1 = ball_mk4_15_old_x, *xe = x + 30;
	errno = 0;
	if (ball_mk4_15_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ball_mk4_15_xkind = 0;
	return 1;
	}
 real
ball_mk4_15_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ball_mk4_15_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 29.*x[0];
	rv += 28.*x[1];
	rv += 27.*x[2];
	rv += 26.*x[3];
	rv += 25.*x[4];
	rv += 24.*x[5];
	rv += 23.*x[6];
	rv += 22.*x[7];
	rv += 21.*x[8];
	rv += 20.*x[9];
	rv += 19.*x[10];
	rv += 18.*x[11];
	rv += 17.*x[12];
	rv += 16.*x[13];
	rv += 15.*x[14];
	rv += 14.*x[15];
	rv += 13.*x[16];
	rv += 12.*x[17];
	rv += 11.*x[18];
	rv += 10.*x[19];
	rv += 9.*x[20];
	rv += 8.*x[21];
	rv += 7.*x[22];
	rv += 6.*x[23];
	rv += 5.*x[24];
	rv += 4.*x[25];
	rv += 3.*x[26];
	rv += 2.*x[27];
	rv += x[28];
	rv += 30.*x[29];
	;}

	if (wantfg & 2) {
	g[0] = 29.;
	g[1] = 28.;
	g[2] = 27.;
	g[3] = 26.;
	g[4] = 25.;
	g[5] = 24.;
	g[6] = 23.;
	g[7] = 22.;
	g[8] = 21.;
	g[9] = 20.;
	g[10] = 19.;
	g[11] = 18.;
	g[12] = 17.;
	g[13] = 16.;
	g[14] = 15.;
	g[15] = 14.;
	g[16] = 13.;
	g[17] = 12.;
	g[18] = 11.;
	g[19] = 10.;
	g[20] = 9.;
	g[21] = 8.;
	g[22] = 7.;
	g[23] = 6.;
	g[24] = 5.;
	g[25] = 4.;
	g[26] = 3.;
	g[27] = 2.;
	g[28] = 1.;
	g[29] = 30.;
	}

	return rv;
}

 void
ball_mk4_15_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ball_mk4_15_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ball_mk4_15_pd[0] = x[28] * x[28];
	ball_mk4_15_pd[1] = x[28] + x[28];
	v[0] = 100. * ball_mk4_15_pd[0];
	ball_mk4_15_pd[2] = x[27] * x[27];
	ball_mk4_15_pd[3] = x[27] + x[27];
	v[1] = 100. * ball_mk4_15_pd[2];
	v[0] += v[1];
	ball_mk4_15_pd[4] = x[26] * x[26];
	ball_mk4_15_pd[5] = x[26] + x[26];
	v[1] = 100. * ball_mk4_15_pd[4];
	v[0] += v[1];
	ball_mk4_15_pd[6] = x[25] * x[25];
	ball_mk4_15_pd[7] = x[25] + x[25];
	v[1] = 100. * ball_mk4_15_pd[6];
	v[0] += v[1];
	ball_mk4_15_pd[8] = x[24] * x[24];
	ball_mk4_15_pd[9] = x[24] + x[24];
	v[1] = 100. * ball_mk4_15_pd[8];
	v[0] += v[1];
	ball_mk4_15_pd[10] = x[23] * x[23];
	ball_mk4_15_pd[11] = x[23] + x[23];
	v[1] = 100. * ball_mk4_15_pd[10];
	v[0] += v[1];
	ball_mk4_15_pd[12] = x[22] * x[22];
	ball_mk4_15_pd[13] = x[22] + x[22];
	v[1] = 100. * ball_mk4_15_pd[12];
	v[0] += v[1];
	ball_mk4_15_pd[14] = x[21] * x[21];
	ball_mk4_15_pd[15] = x[21] + x[21];
	v[1] = 100. * ball_mk4_15_pd[14];
	v[0] += v[1];
	ball_mk4_15_pd[16] = x[20] * x[20];
	ball_mk4_15_pd[17] = x[20] + x[20];
	v[1] = 100. * ball_mk4_15_pd[16];
	v[0] += v[1];
	ball_mk4_15_pd[18] = x[19] * x[19];
	ball_mk4_15_pd[19] = x[19] + x[19];
	v[1] = 100. * ball_mk4_15_pd[18];
	v[0] += v[1];
	ball_mk4_15_pd[20] = x[18] * x[18];
	ball_mk4_15_pd[21] = x[18] + x[18];
	v[1] = 100. * ball_mk4_15_pd[20];
	v[0] += v[1];
	ball_mk4_15_pd[22] = x[17] * x[17];
	ball_mk4_15_pd[23] = x[17] + x[17];
	v[1] = 100. * ball_mk4_15_pd[22];
	v[0] += v[1];
	ball_mk4_15_pd[24] = x[16] * x[16];
	ball_mk4_15_pd[25] = x[16] + x[16];
	v[1] = 100. * ball_mk4_15_pd[24];
	v[0] += v[1];
	ball_mk4_15_pd[26] = x[15] * x[15];
	ball_mk4_15_pd[27] = x[15] + x[15];
	v[1] = 100. * ball_mk4_15_pd[26];
	v[0] += v[1];
	ball_mk4_15_pd[28] = x[14] * x[14];
	ball_mk4_15_pd[29] = x[14] + x[14];
	v[1] = 100. * ball_mk4_15_pd[28];
	v[0] += v[1];
	ball_mk4_15_pd[30] = x[13] * x[13];
	ball_mk4_15_pd[31] = x[13] + x[13];
	v[1] = 100. * ball_mk4_15_pd[30];
	v[0] += v[1];
	ball_mk4_15_pd[32] = x[12] * x[12];
	ball_mk4_15_pd[33] = x[12] + x[12];
	v[1] = 100. * ball_mk4_15_pd[32];
	v[0] += v[1];
	ball_mk4_15_pd[34] = x[11] * x[11];
	ball_mk4_15_pd[35] = x[11] + x[11];
	v[1] = 100. * ball_mk4_15_pd[34];
	v[0] += v[1];
	ball_mk4_15_pd[36] = x[10] * x[10];
	ball_mk4_15_pd[37] = x[10] + x[10];
	v[1] = 100. * ball_mk4_15_pd[36];
	v[0] += v[1];
	ball_mk4_15_pd[38] = x[9] * x[9];
	ball_mk4_15_pd[39] = x[9] + x[9];
	v[1] = 100. * ball_mk4_15_pd[38];
	v[0] += v[1];
	ball_mk4_15_pd[40] = x[8] * x[8];
	ball_mk4_15_pd[41] = x[8] + x[8];
	v[1] = 100. * ball_mk4_15_pd[40];
	v[0] += v[1];
	ball_mk4_15_pd[42] = x[7] * x[7];
	ball_mk4_15_pd[43] = x[7] + x[7];
	v[1] = 100. * ball_mk4_15_pd[42];
	v[0] += v[1];
	ball_mk4_15_pd[44] = x[6] * x[6];
	ball_mk4_15_pd[45] = x[6] + x[6];
	v[1] = 100. * ball_mk4_15_pd[44];
	v[0] += v[1];
	ball_mk4_15_pd[46] = x[5] * x[5];
	ball_mk4_15_pd[47] = x[5] + x[5];
	v[1] = 100. * ball_mk4_15_pd[46];
	v[0] += v[1];
	ball_mk4_15_pd[48] = x[4] * x[4];
	ball_mk4_15_pd[49] = x[4] + x[4];
	v[1] = 100. * ball_mk4_15_pd[48];
	v[0] += v[1];
	ball_mk4_15_pd[50] = x[3] * x[3];
	ball_mk4_15_pd[51] = x[3] + x[3];
	v[1] = 100. * ball_mk4_15_pd[50];
	v[0] += v[1];
	ball_mk4_15_pd[52] = x[2] * x[2];
	ball_mk4_15_pd[53] = x[2] + x[2];
	v[1] = 100. * ball_mk4_15_pd[52];
	v[0] += v[1];
	ball_mk4_15_pd[54] = x[1] * x[1];
	ball_mk4_15_pd[55] = x[1] + x[1];
	v[1] = 100. * ball_mk4_15_pd[54];
	v[0] += v[1];
	ball_mk4_15_pd[56] = x[0] * x[0];
	ball_mk4_15_pd[57] = x[0] + x[0];
	v[1] = 100. * ball_mk4_15_pd[56];
	v[0] += v[1];
	ball_mk4_15_pd[58] = x[29] * x[29];
	ball_mk4_15_pd[59] = x[29] + x[29];
	v[1] = 100. * ball_mk4_15_pd[58];
	v[0] += v[1];
	ball_mk4_15_pd[60] = 2. * x[28];
	v[1] = ball_mk4_15_pd[60] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[61] = 2. * x[28];
	v[2] = ball_mk4_15_pd[61] * x[27];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[62] = 2. * x[26];
	v[1] = ball_mk4_15_pd[62] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[63] = 2. * x[26];
	v[2] = ball_mk4_15_pd[63] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[64] = 2. * x[24];
	v[1] = ball_mk4_15_pd[64] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[65] = 2. * x[24];
	v[2] = ball_mk4_15_pd[65] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[66] = 2. * x[22];
	v[1] = ball_mk4_15_pd[66] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[67] = 2. * x[22];
	v[2] = ball_mk4_15_pd[67] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[68] = 2. * x[20];
	v[1] = ball_mk4_15_pd[68] * x[19];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[69] = 2. * x[20];
	v[2] = ball_mk4_15_pd[69] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[70] = 2. * x[18];
	v[1] = ball_mk4_15_pd[70] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[71] = 2. * x[18];
	v[2] = ball_mk4_15_pd[71] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[72] = 2. * x[16];
	v[1] = ball_mk4_15_pd[72] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[73] = 2. * x[16];
	v[2] = ball_mk4_15_pd[73] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[74] = 2. * x[14];
	v[1] = ball_mk4_15_pd[74] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[75] = 2. * x[14];
	v[2] = ball_mk4_15_pd[75] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[76] = 2. * x[12];
	v[1] = ball_mk4_15_pd[76] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[77] = 2. * x[12];
	v[2] = ball_mk4_15_pd[77] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[78] = 2. * x[10];
	v[1] = ball_mk4_15_pd[78] * x[9];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[79] = 2. * x[10];
	v[2] = ball_mk4_15_pd[79] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[80] = 2. * x[8];
	v[1] = ball_mk4_15_pd[80] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[81] = 2. * x[8];
	v[2] = ball_mk4_15_pd[81] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[82] = 2. * x[6];
	v[1] = ball_mk4_15_pd[82] * x[5];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[83] = 2. * x[6];
	v[2] = ball_mk4_15_pd[83] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[84] = 2. * x[4];
	v[1] = ball_mk4_15_pd[84] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[85] = 2. * x[4];
	v[2] = ball_mk4_15_pd[85] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[86] = 2. * x[2];
	v[1] = ball_mk4_15_pd[86] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[87] = 2. * x[2];
	v[2] = ball_mk4_15_pd[87] * x[1];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_15_pd[88] = 2. * x[0];
	v[1] = ball_mk4_15_pd[88] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_15_pd[89] = 2. * x[0];
	v[2] = ball_mk4_15_pd[89] * x[29];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -98.*x[0];
	t1 += -98.*x[1];
	t1 += -98.*x[2];
	t1 += -98.*x[3];
	t1 += -98.*x[4];
	t1 += -98.*x[5];
	t1 += -98.*x[6];
	t1 += -98.*x[7];
	t1 += -98.*x[8];
	t1 += -98.*x[9];
	t1 += -98.*x[10];
	t1 += -98.*x[11];
	t1 += -98.*x[12];
	t1 += -98.*x[13];
	t1 += -98.*x[14];
	t1 += -98.*x[15];
	t1 += -98.*x[16];
	t1 += -98.*x[17];
	t1 += -98.*x[18];
	t1 += -98.*x[19];
	t1 += -98.*x[20];
	t1 += -98.*x[21];
	t1 += -98.*x[22];
	t1 += -98.*x[23];
	t1 += -98.*x[24];
	t1 += -98.*x[25];
	t1 += -98.*x[26];
	t1 += -98.*x[27];
	t1 += -98.*x[28];
	t1 += -98.*x[29];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[29] = -ball_mk4_15_pd[89] + -98.;
	J[0] = -x[29]*2. + -98.;
	J[29] -= ball_mk4_15_pd[88];
	J[0] -= x[29]*2.;
	J[1] = -ball_mk4_15_pd[87] + -98.;
	J[2] = -x[1]*2. + -98.;
	J[1] -= ball_mk4_15_pd[86];
	J[2] -= x[1]*2.;
	J[3] = -ball_mk4_15_pd[85] + -98.;
	J[4] = -x[3]*2. + -98.;
	J[3] -= ball_mk4_15_pd[84];
	J[4] -= x[3]*2.;
	J[5] = -ball_mk4_15_pd[83] + -98.;
	J[6] = -x[5]*2. + -98.;
	J[5] -= ball_mk4_15_pd[82];
	J[6] -= x[5]*2.;
	J[7] = -ball_mk4_15_pd[81] + -98.;
	J[8] = -x[7]*2. + -98.;
	J[7] -= ball_mk4_15_pd[80];
	J[8] -= x[7]*2.;
	J[9] = -ball_mk4_15_pd[79] + -98.;
	J[10] = -x[9]*2. + -98.;
	J[9] -= ball_mk4_15_pd[78];
	J[10] -= x[9]*2.;
	J[11] = -ball_mk4_15_pd[77] + -98.;
	J[12] = -x[11]*2. + -98.;
	J[11] -= ball_mk4_15_pd[76];
	J[12] -= x[11]*2.;
	J[13] = -ball_mk4_15_pd[75] + -98.;
	J[14] = -x[13]*2. + -98.;
	J[13] -= ball_mk4_15_pd[74];
	J[14] -= x[13]*2.;
	J[15] = -ball_mk4_15_pd[73] + -98.;
	J[16] = -x[15]*2. + -98.;
	J[15] -= ball_mk4_15_pd[72];
	J[16] -= x[15]*2.;
	J[17] = -ball_mk4_15_pd[71] + -98.;
	J[18] = -x[17]*2. + -98.;
	J[17] -= ball_mk4_15_pd[70];
	J[18] -= x[17]*2.;
	J[19] = -ball_mk4_15_pd[69] + -98.;
	J[20] = -x[19]*2. + -98.;
	J[19] -= ball_mk4_15_pd[68];
	J[20] -= x[19]*2.;
	J[21] = -ball_mk4_15_pd[67] + -98.;
	J[22] = -x[21]*2. + -98.;
	J[21] -= ball_mk4_15_pd[66];
	J[22] -= x[21]*2.;
	J[23] = -ball_mk4_15_pd[65] + -98.;
	J[24] = -x[23]*2. + -98.;
	J[23] -= ball_mk4_15_pd[64];
	J[24] -= x[23]*2.;
	J[25] = -ball_mk4_15_pd[63] + -98.;
	J[26] = -x[25]*2. + -98.;
	J[25] -= ball_mk4_15_pd[62];
	J[26] -= x[25]*2.;
	J[27] = -ball_mk4_15_pd[61] + -98.;
	J[28] = -x[27]*2. + -98.;
	J[27] -= ball_mk4_15_pd[60];
	J[28] -= x[27]*2.;
	J[29] += 100.*ball_mk4_15_pd[59];
	J[0] += 100.*ball_mk4_15_pd[57];
	J[1] += 100.*ball_mk4_15_pd[55];
	J[2] += 100.*ball_mk4_15_pd[53];
	J[3] += 100.*ball_mk4_15_pd[51];
	J[4] += 100.*ball_mk4_15_pd[49];
	J[5] += 100.*ball_mk4_15_pd[47];
	J[6] += 100.*ball_mk4_15_pd[45];
	J[7] += 100.*ball_mk4_15_pd[43];
	J[8] += 100.*ball_mk4_15_pd[41];
	J[9] += 100.*ball_mk4_15_pd[39];
	J[10] += 100.*ball_mk4_15_pd[37];
	J[11] += 100.*ball_mk4_15_pd[35];
	J[12] += 100.*ball_mk4_15_pd[33];
	J[13] += 100.*ball_mk4_15_pd[31];
	J[14] += 100.*ball_mk4_15_pd[29];
	J[15] += 100.*ball_mk4_15_pd[27];
	J[16] += 100.*ball_mk4_15_pd[25];
	J[17] += 100.*ball_mk4_15_pd[23];
	J[18] += 100.*ball_mk4_15_pd[21];
	J[19] += 100.*ball_mk4_15_pd[19];
	J[20] += 100.*ball_mk4_15_pd[17];
	J[21] += 100.*ball_mk4_15_pd[15];
	J[22] += 100.*ball_mk4_15_pd[13];
	J[23] += 100.*ball_mk4_15_pd[11];
	J[24] += 100.*ball_mk4_15_pd[9];
	J[25] += 100.*ball_mk4_15_pd[7];
	J[26] += 100.*ball_mk4_15_pd[5];
	J[27] += 100.*ball_mk4_15_pd[3];
	J[28] += 100.*ball_mk4_15_pd[1];
	}
}
#ifdef __cplusplus
	}
#endif
