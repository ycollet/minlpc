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
 fint cvxnonsep_nsig20r_auxcom_[1] = { 20 /* nlc */ };
 fint cvxnonsep_nsig20r_funcom_[107] = {
	40 /* nvar */,
	1 /* nobj */,
	21 /* ncon */,
	60 /* nzc */,
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
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	39,
	41,
	43,
	45,
	47,
	49,
	51,
	53,
	55,
	57,
	59,
	61,

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
	21,
	2,
	21,
	3,
	21,
	4,
	21,
	5,
	21,
	6,
	21,
	7,
	21,
	8,
	21,
	9,
	21,
	10,
	21,
	11,
	21,
	12,
	21,
	13,
	21,
	14,
	21,
	15,
	21,
	16,
	21,
	17,
	21,
	18,
	21,
	19,
	21,
	20,
	21 };

 real cvxnonsep_nsig20r_boundc_[1+80+42] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
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
		1.,
		10.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
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
		-1.6094379124341};

 real cvxnonsep_nsig20r_x0comn_[40] = {
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
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
		0. };

 static real cvxnonsep_nsig20r_pd[40];
static real cvxnonsep_nsig20r_old_x[40];
static int cvxnonsep_nsig20r_xkind = -1;

 static int
cvxnonsep_nsig20r_xcheck(real *x)
{
	real *x1 = cvxnonsep_nsig20r_old_x, *xe = x + 40;
	errno = 0;
	if (cvxnonsep_nsig20r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_nsig20r_xkind = 0;
	return 1;
	}
 real
cvxnonsep_nsig20r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_nsig20r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 1.68*x[0];
	rv += 0.51*x[1];
	rv += 1.63*x[2];
	rv += 0.49*x[3];
	rv += 1.86*x[4];
	rv += 0.7*x[5];
	rv += 0.39*x[6];
	rv += 0.5*x[7];
	rv += 1.23*x[8];
	rv += 0.95*x[9];
	rv += 1.5*x[10];
	rv += 0.51*x[11];
	rv += 1.01*x[12];
	rv += 1.4*x[13];
	rv += 1.78*x[14];
	rv += 1.92*x[15];
	rv += 1.09*x[16];
	rv += 0.48*x[17];
	rv += 0.67*x[18];
	rv += 0.52*x[19];
	;}

	if (wantfg & 2) {
	g[0] = 1.68;
	g[1] = 0.51;
	g[2] = 1.63;
	g[3] = 0.49;
	g[4] = 1.86;
	g[5] = 0.7;
	g[6] = 0.39;
	g[7] = 0.5;
	g[8] = 1.23;
	g[9] = 0.95;
	g[10] = 1.5;
	g[11] = 0.51;
	g[12] = 1.01;
	g[13] = 1.4;
	g[14] = 1.78;
	g[15] = 1.92;
	g[16] = 1.09;
	g[17] = 0.48;
	g[18] = 0.67;
	g[19] = 0.52;
	}

	return rv;
}

 void
cvxnonsep_nsig20r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (cvxnonsep_nsig20r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	cvxnonsep_nsig20r_pd[0] = log(x[10]);
	if (errno) in_trouble("log",x[10]);
	cvxnonsep_nsig20r_pd[1] = 1. / x[10];
	v[0] = -0.065 * cvxnonsep_nsig20r_pd[0];
	t1 = v[0] + -x[20];
	c[0] = t1;

  /***  constraint 2  ***/

	cvxnonsep_nsig20r_pd[2] = log(x[11]);
	if (errno) in_trouble("log",x[11]);
	cvxnonsep_nsig20r_pd[3] = 1. / x[11];
	v[0] = -0.004 * cvxnonsep_nsig20r_pd[2];
	t1 = v[0] + -x[21];
	c[1] = t1;

  /***  constraint 3  ***/

	cvxnonsep_nsig20r_pd[4] = log(x[12]);
	if (errno) in_trouble("log",x[12]);
	cvxnonsep_nsig20r_pd[5] = 1. / x[12];
	v[0] = -0.084 * cvxnonsep_nsig20r_pd[4];
	t1 = v[0] + -x[22];
	c[2] = t1;

  /***  constraint 4  ***/

	cvxnonsep_nsig20r_pd[6] = log(x[13]);
	if (errno) in_trouble("log",x[13]);
	cvxnonsep_nsig20r_pd[7] = 1. / x[13];
	v[0] = -0.093 * cvxnonsep_nsig20r_pd[6];
	t1 = v[0] + -x[23];
	c[3] = t1;

  /***  constraint 5  ***/

	cvxnonsep_nsig20r_pd[8] = log(x[14]);
	if (errno) in_trouble("log",x[14]);
	cvxnonsep_nsig20r_pd[9] = 1. / x[14];
	v[0] = -0.06 * cvxnonsep_nsig20r_pd[8];
	t1 = v[0] + -x[24];
	c[4] = t1;

  /***  constraint 6  ***/

	cvxnonsep_nsig20r_pd[10] = log(x[15]);
	if (errno) in_trouble("log",x[15]);
	cvxnonsep_nsig20r_pd[11] = 1. / x[15];
	v[0] = -0.075 * cvxnonsep_nsig20r_pd[10];
	t1 = v[0] + -x[25];
	c[5] = t1;

  /***  constraint 7  ***/

	cvxnonsep_nsig20r_pd[12] = log(x[16]);
	if (errno) in_trouble("log",x[16]);
	cvxnonsep_nsig20r_pd[13] = 1. / x[16];
	v[0] = -0.074 * cvxnonsep_nsig20r_pd[12];
	t1 = v[0] + -x[26];
	c[6] = t1;

  /***  constraint 8  ***/

	cvxnonsep_nsig20r_pd[14] = log(x[17]);
	if (errno) in_trouble("log",x[17]);
	cvxnonsep_nsig20r_pd[15] = 1. / x[17];
	v[0] = -0.039 * cvxnonsep_nsig20r_pd[14];
	t1 = v[0] + -x[27];
	c[7] = t1;

  /***  constraint 9  ***/

	cvxnonsep_nsig20r_pd[16] = log(x[18]);
	if (errno) in_trouble("log",x[18]);
	cvxnonsep_nsig20r_pd[17] = 1. / x[18];
	v[0] = -0.065 * cvxnonsep_nsig20r_pd[16];
	t1 = v[0] + -x[28];
	c[8] = t1;

  /***  constraint 10  ***/

	cvxnonsep_nsig20r_pd[18] = log(x[19]);
	if (errno) in_trouble("log",x[19]);
	cvxnonsep_nsig20r_pd[19] = 1. / x[19];
	v[0] = -0.017 * cvxnonsep_nsig20r_pd[18];
	t1 = v[0] + -x[29];
	c[9] = t1;

  /***  constraint 11  ***/

	cvxnonsep_nsig20r_pd[20] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	cvxnonsep_nsig20r_pd[21] = 1. / x[0];
	v[0] = -0.07 * cvxnonsep_nsig20r_pd[20];
	t1 = v[0] + -x[30];
	c[10] = t1;

  /***  constraint 12  ***/

	cvxnonsep_nsig20r_pd[22] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	cvxnonsep_nsig20r_pd[23] = 1. / x[1];
	v[0] = -0.03 * cvxnonsep_nsig20r_pd[22];
	t1 = v[0] + -x[31];
	c[11] = t1;

  /***  constraint 13  ***/

	cvxnonsep_nsig20r_pd[24] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	cvxnonsep_nsig20r_pd[25] = 1. / x[2];
	v[0] = -0.028 * cvxnonsep_nsig20r_pd[24];
	t1 = v[0] + -x[32];
	c[12] = t1;

  /***  constraint 14  ***/

	cvxnonsep_nsig20r_pd[26] = log(x[3]);
	if (errno) in_trouble("log",x[3]);
	cvxnonsep_nsig20r_pd[27] = 1. / x[3];
	v[0] = -0.005 * cvxnonsep_nsig20r_pd[26];
	t1 = v[0] + -x[33];
	c[13] = t1;

  /***  constraint 15  ***/

	cvxnonsep_nsig20r_pd[28] = log(x[4]);
	if (errno) in_trouble("log",x[4]);
	cvxnonsep_nsig20r_pd[29] = 1. / x[4];
	v[0] = -0.01 * cvxnonsep_nsig20r_pd[28];
	t1 = v[0] + -x[34];
	c[14] = t1;

  /***  constraint 16  ***/

	cvxnonsep_nsig20r_pd[30] = log(x[5]);
	if (errno) in_trouble("log",x[5]);
	cvxnonsep_nsig20r_pd[31] = 1. / x[5];
	v[0] = -0.082 * cvxnonsep_nsig20r_pd[30];
	t1 = v[0] + -x[35];
	c[15] = t1;

  /***  constraint 17  ***/

	cvxnonsep_nsig20r_pd[32] = log(x[6]);
	if (errno) in_trouble("log",x[6]);
	cvxnonsep_nsig20r_pd[33] = 1. / x[6];
	v[0] = -0.069 * cvxnonsep_nsig20r_pd[32];
	t1 = v[0] + -x[36];
	c[16] = t1;

  /***  constraint 18  ***/

	cvxnonsep_nsig20r_pd[34] = log(x[7]);
	if (errno) in_trouble("log",x[7]);
	cvxnonsep_nsig20r_pd[35] = 1. / x[7];
	v[0] = -0.032 * cvxnonsep_nsig20r_pd[34];
	t1 = v[0] + -x[37];
	c[17] = t1;

  /***  constraint 19  ***/

	cvxnonsep_nsig20r_pd[36] = log(x[8]);
	if (errno) in_trouble("log",x[8]);
	cvxnonsep_nsig20r_pd[37] = 1. / x[8];
	v[0] = -0.095 * cvxnonsep_nsig20r_pd[36];
	t1 = v[0] + -x[38];
	c[18] = t1;

  /***  constraint 20  ***/

	cvxnonsep_nsig20r_pd[38] = log(x[9]);
	if (errno) in_trouble("log",x[9]);
	cvxnonsep_nsig20r_pd[39] = 1. / x[9];
	v[0] = -0.003 * cvxnonsep_nsig20r_pd[38];
	t1 = v[0] + -x[39];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[20];
	t1 += x[21];
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
	c[20] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[10] = -0.065*cvxnonsep_nsig20r_pd[1];
	J[20] = -1.;

   /*** derivatives for constraint 2 ***/

	J[11] = -0.004*cvxnonsep_nsig20r_pd[3];
	J[22] = -1.;

   /*** derivatives for constraint 3 ***/

	J[12] = -0.084*cvxnonsep_nsig20r_pd[5];
	J[24] = -1.;

   /*** derivatives for constraint 4 ***/

	J[13] = -0.093*cvxnonsep_nsig20r_pd[7];
	J[26] = -1.;

   /*** derivatives for constraint 5 ***/

	J[14] = -0.06*cvxnonsep_nsig20r_pd[9];
	J[28] = -1.;

   /*** derivatives for constraint 6 ***/

	J[15] = -0.075*cvxnonsep_nsig20r_pd[11];
	J[30] = -1.;

   /*** derivatives for constraint 7 ***/

	J[16] = -0.074*cvxnonsep_nsig20r_pd[13];
	J[32] = -1.;

   /*** derivatives for constraint 8 ***/

	J[17] = -0.039*cvxnonsep_nsig20r_pd[15];
	J[34] = -1.;

   /*** derivatives for constraint 9 ***/

	J[18] = -0.065*cvxnonsep_nsig20r_pd[17];
	J[36] = -1.;

   /*** derivatives for constraint 10 ***/

	J[19] = -0.017*cvxnonsep_nsig20r_pd[19];
	J[38] = -1.;

   /*** derivatives for constraint 11 ***/

	J[0] = -0.07*cvxnonsep_nsig20r_pd[21];
	J[40] = -1.;

   /*** derivatives for constraint 12 ***/

	J[1] = -0.03*cvxnonsep_nsig20r_pd[23];
	J[42] = -1.;

   /*** derivatives for constraint 13 ***/

	J[2] = -0.028*cvxnonsep_nsig20r_pd[25];
	J[44] = -1.;

   /*** derivatives for constraint 14 ***/

	J[3] = -0.005*cvxnonsep_nsig20r_pd[27];
	J[46] = -1.;

   /*** derivatives for constraint 15 ***/

	J[4] = -0.01*cvxnonsep_nsig20r_pd[29];
	J[48] = -1.;

   /*** derivatives for constraint 16 ***/

	J[5] = -0.082*cvxnonsep_nsig20r_pd[31];
	J[50] = -1.;

   /*** derivatives for constraint 17 ***/

	J[6] = -0.069*cvxnonsep_nsig20r_pd[33];
	J[52] = -1.;

   /*** derivatives for constraint 18 ***/

	J[7] = -0.032*cvxnonsep_nsig20r_pd[35];
	J[54] = -1.;

   /*** derivatives for constraint 19 ***/

	J[8] = -0.095*cvxnonsep_nsig20r_pd[37];
	J[56] = -1.;

   /*** derivatives for constraint 20 ***/

	J[9] = -0.003*cvxnonsep_nsig20r_pd[39];
	J[58] = -1.;

   /*** derivatives for constraint 21 ***/

	J[21] = 1.;
	J[23] = 1.;
	J[25] = 1.;
	J[27] = 1.;
	J[29] = 1.;
	J[31] = 1.;
	J[33] = 1.;
	J[35] = 1.;
	J[37] = 1.;
	J[39] = 1.;
	J[41] = 1.;
	J[43] = 1.;
	J[45] = 1.;
	J[47] = 1.;
	J[49] = 1.;
	J[51] = 1.;
	J[53] = 1.;
	J[55] = 1.;
	J[57] = 1.;
	J[59] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
