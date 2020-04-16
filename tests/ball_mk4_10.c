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
 fint ball_mk4_10_auxcom_[1] = { 1 /* nlc */ };
 fint ball_mk4_10_funcom_[47] = {
	20 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	20 /* nzc */,
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
	1 };

 real ball_mk4_10_boundc_[1+40+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real ball_mk4_10_x0comn_[20] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real ball_mk4_10_pd[60];
static real ball_mk4_10_old_x[20];
static int ball_mk4_10_xkind = -1;

 static int
ball_mk4_10_xcheck(real *x)
{
	real *x1 = ball_mk4_10_old_x, *xe = x + 20;
	errno = 0;
	if (ball_mk4_10_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ball_mk4_10_xkind = 0;
	return 1;
	}
 real
ball_mk4_10_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ball_mk4_10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 19.*x[0];
	rv += 18.*x[1];
	rv += 17.*x[2];
	rv += 16.*x[3];
	rv += 15.*x[4];
	rv += 14.*x[5];
	rv += 13.*x[6];
	rv += 12.*x[7];
	rv += 11.*x[8];
	rv += 10.*x[9];
	rv += 9.*x[10];
	rv += 8.*x[11];
	rv += 7.*x[12];
	rv += 6.*x[13];
	rv += 5.*x[14];
	rv += 4.*x[15];
	rv += 3.*x[16];
	rv += 2.*x[17];
	rv += x[18];
	rv += 20.*x[19];
	;}

	if (wantfg & 2) {
	g[0] = 19.;
	g[1] = 18.;
	g[2] = 17.;
	g[3] = 16.;
	g[4] = 15.;
	g[5] = 14.;
	g[6] = 13.;
	g[7] = 12.;
	g[8] = 11.;
	g[9] = 10.;
	g[10] = 9.;
	g[11] = 8.;
	g[12] = 7.;
	g[13] = 6.;
	g[14] = 5.;
	g[15] = 4.;
	g[16] = 3.;
	g[17] = 2.;
	g[18] = 1.;
	g[19] = 20.;
	}

	return rv;
}

 void
ball_mk4_10_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ball_mk4_10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ball_mk4_10_pd[0] = x[18] * x[18];
	ball_mk4_10_pd[1] = x[18] + x[18];
	v[0] = 100. * ball_mk4_10_pd[0];
	ball_mk4_10_pd[2] = x[17] * x[17];
	ball_mk4_10_pd[3] = x[17] + x[17];
	v[1] = 100. * ball_mk4_10_pd[2];
	v[0] += v[1];
	ball_mk4_10_pd[4] = x[16] * x[16];
	ball_mk4_10_pd[5] = x[16] + x[16];
	v[1] = 100. * ball_mk4_10_pd[4];
	v[0] += v[1];
	ball_mk4_10_pd[6] = x[15] * x[15];
	ball_mk4_10_pd[7] = x[15] + x[15];
	v[1] = 100. * ball_mk4_10_pd[6];
	v[0] += v[1];
	ball_mk4_10_pd[8] = x[14] * x[14];
	ball_mk4_10_pd[9] = x[14] + x[14];
	v[1] = 100. * ball_mk4_10_pd[8];
	v[0] += v[1];
	ball_mk4_10_pd[10] = x[13] * x[13];
	ball_mk4_10_pd[11] = x[13] + x[13];
	v[1] = 100. * ball_mk4_10_pd[10];
	v[0] += v[1];
	ball_mk4_10_pd[12] = x[12] * x[12];
	ball_mk4_10_pd[13] = x[12] + x[12];
	v[1] = 100. * ball_mk4_10_pd[12];
	v[0] += v[1];
	ball_mk4_10_pd[14] = x[11] * x[11];
	ball_mk4_10_pd[15] = x[11] + x[11];
	v[1] = 100. * ball_mk4_10_pd[14];
	v[0] += v[1];
	ball_mk4_10_pd[16] = x[10] * x[10];
	ball_mk4_10_pd[17] = x[10] + x[10];
	v[1] = 100. * ball_mk4_10_pd[16];
	v[0] += v[1];
	ball_mk4_10_pd[18] = x[9] * x[9];
	ball_mk4_10_pd[19] = x[9] + x[9];
	v[1] = 100. * ball_mk4_10_pd[18];
	v[0] += v[1];
	ball_mk4_10_pd[20] = x[8] * x[8];
	ball_mk4_10_pd[21] = x[8] + x[8];
	v[1] = 100. * ball_mk4_10_pd[20];
	v[0] += v[1];
	ball_mk4_10_pd[22] = x[7] * x[7];
	ball_mk4_10_pd[23] = x[7] + x[7];
	v[1] = 100. * ball_mk4_10_pd[22];
	v[0] += v[1];
	ball_mk4_10_pd[24] = x[6] * x[6];
	ball_mk4_10_pd[25] = x[6] + x[6];
	v[1] = 100. * ball_mk4_10_pd[24];
	v[0] += v[1];
	ball_mk4_10_pd[26] = x[5] * x[5];
	ball_mk4_10_pd[27] = x[5] + x[5];
	v[1] = 100. * ball_mk4_10_pd[26];
	v[0] += v[1];
	ball_mk4_10_pd[28] = x[4] * x[4];
	ball_mk4_10_pd[29] = x[4] + x[4];
	v[1] = 100. * ball_mk4_10_pd[28];
	v[0] += v[1];
	ball_mk4_10_pd[30] = x[3] * x[3];
	ball_mk4_10_pd[31] = x[3] + x[3];
	v[1] = 100. * ball_mk4_10_pd[30];
	v[0] += v[1];
	ball_mk4_10_pd[32] = x[2] * x[2];
	ball_mk4_10_pd[33] = x[2] + x[2];
	v[1] = 100. * ball_mk4_10_pd[32];
	v[0] += v[1];
	ball_mk4_10_pd[34] = x[1] * x[1];
	ball_mk4_10_pd[35] = x[1] + x[1];
	v[1] = 100. * ball_mk4_10_pd[34];
	v[0] += v[1];
	ball_mk4_10_pd[36] = x[0] * x[0];
	ball_mk4_10_pd[37] = x[0] + x[0];
	v[1] = 100. * ball_mk4_10_pd[36];
	v[0] += v[1];
	ball_mk4_10_pd[38] = x[19] * x[19];
	ball_mk4_10_pd[39] = x[19] + x[19];
	v[1] = 100. * ball_mk4_10_pd[38];
	v[0] += v[1];
	ball_mk4_10_pd[40] = 2. * x[18];
	v[1] = ball_mk4_10_pd[40] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[41] = 2. * x[18];
	v[2] = ball_mk4_10_pd[41] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[42] = 2. * x[16];
	v[1] = ball_mk4_10_pd[42] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[43] = 2. * x[16];
	v[2] = ball_mk4_10_pd[43] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[44] = 2. * x[14];
	v[1] = ball_mk4_10_pd[44] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[45] = 2. * x[14];
	v[2] = ball_mk4_10_pd[45] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[46] = 2. * x[12];
	v[1] = ball_mk4_10_pd[46] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[47] = 2. * x[12];
	v[2] = ball_mk4_10_pd[47] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[48] = 2. * x[10];
	v[1] = ball_mk4_10_pd[48] * x[9];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[49] = 2. * x[10];
	v[2] = ball_mk4_10_pd[49] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[50] = 2. * x[8];
	v[1] = ball_mk4_10_pd[50] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[51] = 2. * x[8];
	v[2] = ball_mk4_10_pd[51] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[52] = 2. * x[6];
	v[1] = ball_mk4_10_pd[52] * x[5];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[53] = 2. * x[6];
	v[2] = ball_mk4_10_pd[53] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[54] = 2. * x[4];
	v[1] = ball_mk4_10_pd[54] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[55] = 2. * x[4];
	v[2] = ball_mk4_10_pd[55] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[56] = 2. * x[2];
	v[1] = ball_mk4_10_pd[56] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[57] = 2. * x[2];
	v[2] = ball_mk4_10_pd[57] * x[1];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_10_pd[58] = 2. * x[0];
	v[1] = ball_mk4_10_pd[58] * x[19];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_10_pd[59] = 2. * x[0];
	v[2] = ball_mk4_10_pd[59] * x[19];
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
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[19] = -ball_mk4_10_pd[59] + -98.;
	J[0] = -x[19]*2. + -98.;
	J[19] -= ball_mk4_10_pd[58];
	J[0] -= x[19]*2.;
	J[1] = -ball_mk4_10_pd[57] + -98.;
	J[2] = -x[1]*2. + -98.;
	J[1] -= ball_mk4_10_pd[56];
	J[2] -= x[1]*2.;
	J[3] = -ball_mk4_10_pd[55] + -98.;
	J[4] = -x[3]*2. + -98.;
	J[3] -= ball_mk4_10_pd[54];
	J[4] -= x[3]*2.;
	J[5] = -ball_mk4_10_pd[53] + -98.;
	J[6] = -x[5]*2. + -98.;
	J[5] -= ball_mk4_10_pd[52];
	J[6] -= x[5]*2.;
	J[7] = -ball_mk4_10_pd[51] + -98.;
	J[8] = -x[7]*2. + -98.;
	J[7] -= ball_mk4_10_pd[50];
	J[8] -= x[7]*2.;
	J[9] = -ball_mk4_10_pd[49] + -98.;
	J[10] = -x[9]*2. + -98.;
	J[9] -= ball_mk4_10_pd[48];
	J[10] -= x[9]*2.;
	J[11] = -ball_mk4_10_pd[47] + -98.;
	J[12] = -x[11]*2. + -98.;
	J[11] -= ball_mk4_10_pd[46];
	J[12] -= x[11]*2.;
	J[13] = -ball_mk4_10_pd[45] + -98.;
	J[14] = -x[13]*2. + -98.;
	J[13] -= ball_mk4_10_pd[44];
	J[14] -= x[13]*2.;
	J[15] = -ball_mk4_10_pd[43] + -98.;
	J[16] = -x[15]*2. + -98.;
	J[15] -= ball_mk4_10_pd[42];
	J[16] -= x[15]*2.;
	J[17] = -ball_mk4_10_pd[41] + -98.;
	J[18] = -x[17]*2. + -98.;
	J[17] -= ball_mk4_10_pd[40];
	J[18] -= x[17]*2.;
	J[19] += 100.*ball_mk4_10_pd[39];
	J[0] += 100.*ball_mk4_10_pd[37];
	J[1] += 100.*ball_mk4_10_pd[35];
	J[2] += 100.*ball_mk4_10_pd[33];
	J[3] += 100.*ball_mk4_10_pd[31];
	J[4] += 100.*ball_mk4_10_pd[29];
	J[5] += 100.*ball_mk4_10_pd[27];
	J[6] += 100.*ball_mk4_10_pd[25];
	J[7] += 100.*ball_mk4_10_pd[23];
	J[8] += 100.*ball_mk4_10_pd[21];
	J[9] += 100.*ball_mk4_10_pd[19];
	J[10] += 100.*ball_mk4_10_pd[17];
	J[11] += 100.*ball_mk4_10_pd[15];
	J[12] += 100.*ball_mk4_10_pd[13];
	J[13] += 100.*ball_mk4_10_pd[11];
	J[14] += 100.*ball_mk4_10_pd[9];
	J[15] += 100.*ball_mk4_10_pd[7];
	J[16] += 100.*ball_mk4_10_pd[5];
	J[17] += 100.*ball_mk4_10_pd[3];
	J[18] += 100.*ball_mk4_10_pd[1];
	}
}
#ifdef __cplusplus
	}
#endif
