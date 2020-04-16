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
 fint cvxnonsep_psig20r_auxcom_[1] = { 21 /* nlc */ };
 fint cvxnonsep_psig20r_funcom_[112] = {
	42 /* nvar */,
	1 /* nobj */,
	22 /* ncon */,
	63 /* nzc */,
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
	24,
	26,
	28,
	30,
	32,
	34,
	36,
	38,
	40,
	42,
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

	/* rownos */
	1,
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
	1,
	22,
	2,
	22,
	3,
	22,
	4,
	22,
	5,
	22,
	6,
	22,
	7,
	22,
	8,
	22,
	9,
	22,
	10,
	22,
	11,
	22,
	12,
	22,
	13,
	22,
	14,
	22,
	15,
	22,
	16,
	22,
	17,
	22,
	18,
	22,
	19,
	22,
	20,
	22,
	21,
	22 };

 real cvxnonsep_psig20r_boundc_[1+84+44] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.e-08,
		1.7e308,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
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
		1.7e308,
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
		0.};

 real cvxnonsep_psig20r_x0comn_[42] = {
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
		1.e-08,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real cvxnonsep_psig20r_pd[41];
static real cvxnonsep_psig20r_old_x[42];
static int cvxnonsep_psig20r_xkind = -1;

 static int
cvxnonsep_psig20r_xcheck(real *x)
{
	real *x1 = cvxnonsep_psig20r_old_x, *xe = x + 42;
	errno = 0;
	if (cvxnonsep_psig20r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_psig20r_xkind = 0;
	return 1;
	}
 real
cvxnonsep_psig20r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_psig20r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += x[2];
	rv += x[3];
	rv += x[4];
	rv += x[5];
	rv += x[6];
	rv += x[7];
	rv += x[8];
	rv += x[9];
	rv += 20000.*x[10];
	rv += x[11];
	rv += x[12];
	rv += x[13];
	rv += x[14];
	rv += x[15];
	rv += x[16];
	rv += x[17];
	rv += x[18];
	rv += x[19];
	rv += x[20];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[2] = 1.;
	g[3] = 1.;
	g[4] = 1.;
	g[5] = 1.;
	g[6] = 1.;
	g[7] = 1.;
	g[8] = 1.;
	g[9] = 1.;
	g[10] = 20000.;
	g[11] = 1.;
	g[12] = 1.;
	g[13] = 1.;
	g[14] = 1.;
	g[15] = 1.;
	g[16] = 1.;
	g[17] = 1.;
	g[18] = 1.;
	g[19] = 1.;
	g[20] = 1.;
	}

	return rv;
}

 void
cvxnonsep_psig20r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (cvxnonsep_psig20r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	cvxnonsep_psig20r_pd[0] = log(x[11]);
	if (errno) in_trouble("log",x[11]);
	cvxnonsep_psig20r_pd[1] = 1. / x[11];
	v[0] = -0.32 * cvxnonsep_psig20r_pd[0];
	t1 = v[0] + -x[21];
	c[0] = t1;

  /***  constraint 2  ***/

	cvxnonsep_psig20r_pd[2] = log(x[12]);
	if (errno) in_trouble("log",x[12]);
	cvxnonsep_psig20r_pd[3] = 1. / x[12];
	v[0] = -0.19 * cvxnonsep_psig20r_pd[2];
	t1 = v[0] + -x[22];
	c[1] = t1;

  /***  constraint 3  ***/

	cvxnonsep_psig20r_pd[4] = log(x[13]);
	if (errno) in_trouble("log",x[13]);
	cvxnonsep_psig20r_pd[5] = 1. / x[13];
	v[0] = -0.405 * cvxnonsep_psig20r_pd[4];
	t1 = v[0] + -x[23];
	c[2] = t1;

  /***  constraint 4  ***/

	cvxnonsep_psig20r_pd[6] = log(x[14]);
	if (errno) in_trouble("log",x[14]);
	cvxnonsep_psig20r_pd[7] = 1. / x[14];
	v[0] = -0.265 * cvxnonsep_psig20r_pd[6];
	t1 = v[0] + -x[24];
	c[3] = t1;

  /***  constraint 5  ***/

	cvxnonsep_psig20r_pd[8] = log(x[15]);
	if (errno) in_trouble("log",x[15]);
	cvxnonsep_psig20r_pd[9] = 1. / x[15];
	v[0] = -0.175 * cvxnonsep_psig20r_pd[8];
	t1 = v[0] + -x[25];
	c[4] = t1;

  /***  constraint 6  ***/

	cvxnonsep_psig20r_pd[10] = log(x[16]);
	if (errno) in_trouble("log",x[16]);
	cvxnonsep_psig20r_pd[11] = 1. / x[16];
	v[0] = -0.44 * cvxnonsep_psig20r_pd[10];
	t1 = v[0] + -x[26];
	c[5] = t1;

  /***  constraint 7  ***/

	cvxnonsep_psig20r_pd[12] = log(x[17]);
	if (errno) in_trouble("log",x[17]);
	cvxnonsep_psig20r_pd[13] = 1. / x[17];
	v[0] = -0.275 * cvxnonsep_psig20r_pd[12];
	t1 = v[0] + -x[27];
	c[6] = t1;

  /***  constraint 8  ***/

	cvxnonsep_psig20r_pd[14] = log(x[18]);
	if (errno) in_trouble("log",x[18]);
	cvxnonsep_psig20r_pd[15] = 1. / x[18];
	v[0] = -0.47 * cvxnonsep_psig20r_pd[14];
	t1 = v[0] + -x[28];
	c[7] = t1;

  /***  constraint 9  ***/

	cvxnonsep_psig20r_pd[16] = log(x[19]);
	if (errno) in_trouble("log",x[19]);
	cvxnonsep_psig20r_pd[17] = 1. / x[19];
	v[0] = -0.31 * cvxnonsep_psig20r_pd[16];
	t1 = v[0] + -x[29];
	c[8] = t1;

  /***  constraint 10  ***/

	cvxnonsep_psig20r_pd[18] = log(x[20]);
	if (errno) in_trouble("log",x[20]);
	cvxnonsep_psig20r_pd[19] = 1. / x[20];
	v[0] = -0.295 * cvxnonsep_psig20r_pd[18];
	t1 = v[0] + -x[30];
	c[9] = t1;

  /***  constraint 11  ***/

	cvxnonsep_psig20r_pd[20] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	cvxnonsep_psig20r_pd[21] = 1. / x[0];
	v[0] = -0.105 * cvxnonsep_psig20r_pd[20];
	t1 = v[0] + -x[31];
	c[10] = t1;

  /***  constraint 12  ***/

	cvxnonsep_psig20r_pd[22] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	cvxnonsep_psig20r_pd[23] = 1. / x[1];
	v[0] = -0.15 * cvxnonsep_psig20r_pd[22];
	t1 = v[0] + -x[32];
	c[11] = t1;

  /***  constraint 13  ***/

	cvxnonsep_psig20r_pd[24] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	cvxnonsep_psig20r_pd[25] = 1. / x[2];
	v[0] = -0.235 * cvxnonsep_psig20r_pd[24];
	t1 = v[0] + -x[33];
	c[12] = t1;

  /***  constraint 14  ***/

	cvxnonsep_psig20r_pd[26] = log(x[3]);
	if (errno) in_trouble("log",x[3]);
	cvxnonsep_psig20r_pd[27] = 1. / x[3];
	v[0] = -0.115 * cvxnonsep_psig20r_pd[26];
	t1 = v[0] + -x[34];
	c[13] = t1;

  /***  constraint 15  ***/

	cvxnonsep_psig20r_pd[28] = log(x[4]);
	if (errno) in_trouble("log",x[4]);
	cvxnonsep_psig20r_pd[29] = 1. / x[4];
	v[0] = -0.42 * cvxnonsep_psig20r_pd[28];
	t1 = v[0] + -x[35];
	c[14] = t1;

  /***  constraint 16  ***/

	cvxnonsep_psig20r_pd[30] = log(x[5]);
	if (errno) in_trouble("log",x[5]);
	cvxnonsep_psig20r_pd[31] = 1. / x[5];
	v[0] = -0.095 * cvxnonsep_psig20r_pd[30];
	t1 = v[0] + -x[36];
	c[15] = t1;

  /***  constraint 17  ***/

	cvxnonsep_psig20r_pd[32] = log(x[6]);
	if (errno) in_trouble("log",x[6]);
	cvxnonsep_psig20r_pd[33] = 1. / x[6];
	v[0] = -0.115 * cvxnonsep_psig20r_pd[32];
	t1 = v[0] + -x[37];
	c[16] = t1;

  /***  constraint 18  ***/

	cvxnonsep_psig20r_pd[34] = log(x[7]);
	if (errno) in_trouble("log",x[7]);
	cvxnonsep_psig20r_pd[35] = 1. / x[7];
	v[0] = -0.085 * cvxnonsep_psig20r_pd[34];
	t1 = v[0] + -x[38];
	c[17] = t1;

  /***  constraint 19  ***/

	cvxnonsep_psig20r_pd[36] = log(x[8]);
	if (errno) in_trouble("log",x[8]);
	cvxnonsep_psig20r_pd[37] = 1. / x[8];
	v[0] = -0.115 * cvxnonsep_psig20r_pd[36];
	t1 = v[0] + -x[39];
	c[18] = t1;

  /***  constraint 20  ***/

	cvxnonsep_psig20r_pd[38] = log(x[9]);
	if (errno) in_trouble("log",x[9]);
	cvxnonsep_psig20r_pd[39] = 1. / x[9];
	v[0] = -0.022 * cvxnonsep_psig20r_pd[38];
	t1 = v[0] + -x[40];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = log(x[10]);
	if (errno) in_trouble("log",x[10]);
	cvxnonsep_psig20r_pd[40] = 1. / x[10];
	v[1] = -v[0];
	t1 = v[1] + -x[41];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	c[21] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[11] = -0.32*cvxnonsep_psig20r_pd[1];
	J[21] = -1.;

   /*** derivatives for constraint 2 ***/

	J[12] = -0.19*cvxnonsep_psig20r_pd[3];
	J[23] = -1.;

   /*** derivatives for constraint 3 ***/

	J[13] = -0.405*cvxnonsep_psig20r_pd[5];
	J[25] = -1.;

   /*** derivatives for constraint 4 ***/

	J[14] = -0.265*cvxnonsep_psig20r_pd[7];
	J[27] = -1.;

   /*** derivatives for constraint 5 ***/

	J[15] = -0.175*cvxnonsep_psig20r_pd[9];
	J[29] = -1.;

   /*** derivatives for constraint 6 ***/

	J[16] = -0.44*cvxnonsep_psig20r_pd[11];
	J[31] = -1.;

   /*** derivatives for constraint 7 ***/

	J[17] = -0.275*cvxnonsep_psig20r_pd[13];
	J[33] = -1.;

   /*** derivatives for constraint 8 ***/

	J[18] = -0.47*cvxnonsep_psig20r_pd[15];
	J[35] = -1.;

   /*** derivatives for constraint 9 ***/

	J[19] = -0.31*cvxnonsep_psig20r_pd[17];
	J[37] = -1.;

   /*** derivatives for constraint 10 ***/

	J[20] = -0.295*cvxnonsep_psig20r_pd[19];
	J[39] = -1.;

   /*** derivatives for constraint 11 ***/

	J[0] = -0.105*cvxnonsep_psig20r_pd[21];
	J[41] = -1.;

   /*** derivatives for constraint 12 ***/

	J[1] = -0.15*cvxnonsep_psig20r_pd[23];
	J[43] = -1.;

   /*** derivatives for constraint 13 ***/

	J[2] = -0.235*cvxnonsep_psig20r_pd[25];
	J[45] = -1.;

   /*** derivatives for constraint 14 ***/

	J[3] = -0.115*cvxnonsep_psig20r_pd[27];
	J[47] = -1.;

   /*** derivatives for constraint 15 ***/

	J[4] = -0.42*cvxnonsep_psig20r_pd[29];
	J[49] = -1.;

   /*** derivatives for constraint 16 ***/

	J[5] = -0.095*cvxnonsep_psig20r_pd[31];
	J[51] = -1.;

   /*** derivatives for constraint 17 ***/

	J[6] = -0.115*cvxnonsep_psig20r_pd[33];
	J[53] = -1.;

   /*** derivatives for constraint 18 ***/

	J[7] = -0.085*cvxnonsep_psig20r_pd[35];
	J[55] = -1.;

   /*** derivatives for constraint 19 ***/

	J[8] = -0.115*cvxnonsep_psig20r_pd[37];
	J[57] = -1.;

   /*** derivatives for constraint 20 ***/

	J[9] = -0.022*cvxnonsep_psig20r_pd[39];
	J[59] = -1.;

   /*** derivatives for constraint 21 ***/

	J[10] = -cvxnonsep_psig20r_pd[40];
	J[61] = -1.;

   /*** derivatives for constraint 22 ***/

	J[22] = 1.;
	J[24] = 1.;
	J[26] = 1.;
	J[28] = 1.;
	J[30] = 1.;
	J[32] = 1.;
	J[34] = 1.;
	J[36] = 1.;
	J[38] = 1.;
	J[40] = 1.;
	J[42] = 1.;
	J[44] = 1.;
	J[46] = 1.;
	J[48] = 1.;
	J[50] = 1.;
	J[52] = 1.;
	J[54] = 1.;
	J[56] = 1.;
	J[58] = 1.;
	J[60] = 1.;
	J[62] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
