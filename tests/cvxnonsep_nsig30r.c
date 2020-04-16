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
 fint cvxnonsep_nsig30r_auxcom_[1] = { 30 /* nlc */ };
 fint cvxnonsep_nsig30r_funcom_[157] = {
	60 /* nvar */,
	1 /* nobj */,
	31 /* ncon */,
	90 /* nzc */,
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
	63,
	65,
	67,
	69,
	71,
	73,
	75,
	77,
	79,
	81,
	83,
	85,
	87,
	89,
	91,

	/* rownos */
	1,
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
	1,
	31,
	2,
	31,
	3,
	31,
	4,
	31,
	5,
	31,
	6,
	31,
	7,
	31,
	8,
	31,
	9,
	31,
	10,
	31,
	11,
	31,
	12,
	31,
	13,
	31,
	14,
	31,
	15,
	31,
	16,
	31,
	17,
	31,
	18,
	31,
	19,
	31,
	20,
	31,
	21,
	31,
	22,
	31,
	23,
	31,
	24,
	31,
	25,
	31,
	26,
	31,
	27,
	31,
	28,
	31,
	29,
	31,
	30,
	31 };

 real cvxnonsep_nsig30r_boundc_[1+120+62] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.77195684190188};

 real cvxnonsep_nsig30r_x0comn_[60] = {
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

 static real cvxnonsep_nsig30r_pd[60];
static real cvxnonsep_nsig30r_old_x[60];
static int cvxnonsep_nsig30r_xkind = -1;

 static int
cvxnonsep_nsig30r_xcheck(real *x)
{
	real *x1 = cvxnonsep_nsig30r_old_x, *xe = x + 60;
	errno = 0;
	if (cvxnonsep_nsig30r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_nsig30r_xkind = 0;
	return 1;
	}
 real
cvxnonsep_nsig30r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_nsig30r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 1.69*x[0];
	rv += 0.39*x[1];
	rv += 0.45*x[2];
	rv += 0.34*x[3];
	rv += 0.46*x[4];
	rv += 1.86*x[5];
	rv += 1.46*x[6];
	rv += 0.98*x[7];
	rv += 1.16*x[8];
	rv += 0.47*x[9];
	rv += 0.92*x[10];
	rv += 1.43*x[11];
	rv += 1.81*x[12];
	rv += 1.78*x[13];
	rv += 0.67*x[14];
	rv += 1.29*x[15];
	rv += 0.76*x[16];
	rv += x[17];
	rv += 1.62*x[18];
	rv += 1.07*x[19];
	rv += 0.7*x[20];
	rv += 1.88*x[21];
	rv += 1.75*x[22];
	rv += 1.1*x[23];
	rv += 1.24*x[24];
	rv += 1.17*x[25];
	rv += 0.82*x[26];
	rv += 1.06*x[27];
	rv += 0.94*x[28];
	rv += 0.46*x[29];
	;}

	if (wantfg & 2) {
	g[0] = 1.69;
	g[1] = 0.39;
	g[2] = 0.45;
	g[3] = 0.34;
	g[4] = 0.46;
	g[5] = 1.86;
	g[6] = 1.46;
	g[7] = 0.98;
	g[8] = 1.16;
	g[9] = 0.47;
	g[10] = 0.92;
	g[11] = 1.43;
	g[12] = 1.81;
	g[13] = 1.78;
	g[14] = 0.67;
	g[15] = 1.29;
	g[16] = 0.76;
	g[17] = 1.;
	g[18] = 1.62;
	g[19] = 1.07;
	g[20] = 0.7;
	g[21] = 1.88;
	g[22] = 1.75;
	g[23] = 1.1;
	g[24] = 1.24;
	g[25] = 1.17;
	g[26] = 0.82;
	g[27] = 1.06;
	g[28] = 0.94;
	g[29] = 0.46;
	}

	return rv;
}

 void
cvxnonsep_nsig30r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (cvxnonsep_nsig30r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	cvxnonsep_nsig30r_pd[0] = log(x[15]);
	if (errno) in_trouble("log",x[15]);
	cvxnonsep_nsig30r_pd[1] = 1. / x[15];
	v[0] = -0.028 * cvxnonsep_nsig30r_pd[0];
	t1 = v[0] + -x[30];
	c[0] = t1;

  /***  constraint 2  ***/

	cvxnonsep_nsig30r_pd[2] = log(x[16]);
	if (errno) in_trouble("log",x[16]);
	cvxnonsep_nsig30r_pd[3] = 1. / x[16];
	v[0] = -0.041 * cvxnonsep_nsig30r_pd[2];
	t1 = v[0] + -x[31];
	c[1] = t1;

  /***  constraint 3  ***/

	cvxnonsep_nsig30r_pd[4] = log(x[17]);
	if (errno) in_trouble("log",x[17]);
	cvxnonsep_nsig30r_pd[5] = 1. / x[17];
	v[0] = -0.047 * cvxnonsep_nsig30r_pd[4];
	t1 = v[0] + -x[32];
	c[2] = t1;

  /***  constraint 4  ***/

	cvxnonsep_nsig30r_pd[6] = log(x[18]);
	if (errno) in_trouble("log",x[18]);
	cvxnonsep_nsig30r_pd[7] = 1. / x[18];
	v[0] = -0.022 * cvxnonsep_nsig30r_pd[6];
	t1 = v[0] + -x[33];
	c[3] = t1;

  /***  constraint 5  ***/

	cvxnonsep_nsig30r_pd[8] = log(x[19]);
	if (errno) in_trouble("log",x[19]);
	cvxnonsep_nsig30r_pd[9] = 1. / x[19];
	v[0] = -0.041 * cvxnonsep_nsig30r_pd[8];
	t1 = v[0] + -x[34];
	c[4] = t1;

  /***  constraint 6  ***/

	cvxnonsep_nsig30r_pd[10] = log(x[20]);
	if (errno) in_trouble("log",x[20]);
	cvxnonsep_nsig30r_pd[11] = 1. / x[20];
	v[0] = -0.026 * cvxnonsep_nsig30r_pd[10];
	t1 = v[0] + -x[35];
	c[5] = t1;

  /***  constraint 7  ***/

	cvxnonsep_nsig30r_pd[12] = log(x[21]);
	if (errno) in_trouble("log",x[21]);
	cvxnonsep_nsig30r_pd[13] = 1. / x[21];
	v[0] = -0.052 * cvxnonsep_nsig30r_pd[12];
	t1 = v[0] + -x[36];
	c[6] = t1;

  /***  constraint 8  ***/

	cvxnonsep_nsig30r_pd[14] = log(x[22]);
	if (errno) in_trouble("log",x[22]);
	cvxnonsep_nsig30r_pd[15] = 1. / x[22];
	v[0] = -0.051 * cvxnonsep_nsig30r_pd[14];
	t1 = v[0] + -x[37];
	c[7] = t1;

  /***  constraint 9  ***/

	cvxnonsep_nsig30r_pd[16] = log(x[23]);
	if (errno) in_trouble("log",x[23]);
	cvxnonsep_nsig30r_pd[17] = 1. / x[23];
	v[0] = -0.016 * cvxnonsep_nsig30r_pd[16];
	t1 = v[0] + -x[38];
	c[8] = t1;

  /***  constraint 10  ***/

	cvxnonsep_nsig30r_pd[18] = log(x[24]);
	if (errno) in_trouble("log",x[24]);
	cvxnonsep_nsig30r_pd[19] = 1. / x[24];
	v[0] = -0.038 * cvxnonsep_nsig30r_pd[18];
	t1 = v[0] + -x[39];
	c[9] = t1;

  /***  constraint 11  ***/

	cvxnonsep_nsig30r_pd[20] = log(x[25]);
	if (errno) in_trouble("log",x[25]);
	cvxnonsep_nsig30r_pd[21] = 1. / x[25];
	v[0] = -0.036 * cvxnonsep_nsig30r_pd[20];
	t1 = v[0] + -x[40];
	c[10] = t1;

  /***  constraint 12  ***/

	cvxnonsep_nsig30r_pd[22] = log(x[26]);
	if (errno) in_trouble("log",x[26]);
	cvxnonsep_nsig30r_pd[23] = 1. / x[26];
	v[0] = -0.033 * cvxnonsep_nsig30r_pd[22];
	t1 = v[0] + -x[41];
	c[11] = t1;

  /***  constraint 13  ***/

	cvxnonsep_nsig30r_pd[24] = log(x[27]);
	if (errno) in_trouble("log",x[27]);
	cvxnonsep_nsig30r_pd[25] = 1. / x[27];
	v[0] = -0.054 * cvxnonsep_nsig30r_pd[24];
	t1 = v[0] + -x[42];
	c[12] = t1;

  /***  constraint 14  ***/

	cvxnonsep_nsig30r_pd[26] = log(x[28]);
	if (errno) in_trouble("log",x[28]);
	cvxnonsep_nsig30r_pd[27] = 1. / x[28];
	v[0] = -0.016 * cvxnonsep_nsig30r_pd[26];
	t1 = v[0] + -x[43];
	c[13] = t1;

  /***  constraint 15  ***/

	cvxnonsep_nsig30r_pd[28] = log(x[29]);
	if (errno) in_trouble("log",x[29]);
	cvxnonsep_nsig30r_pd[29] = 1. / x[29];
	v[0] = -0.02 * cvxnonsep_nsig30r_pd[28];
	t1 = v[0] + -x[44];
	c[14] = t1;

  /***  constraint 16  ***/

	cvxnonsep_nsig30r_pd[30] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	cvxnonsep_nsig30r_pd[31] = 1. / x[0];
	v[0] = -0.007 * cvxnonsep_nsig30r_pd[30];
	t1 = v[0] + -x[45];
	c[15] = t1;

  /***  constraint 17  ***/

	cvxnonsep_nsig30r_pd[32] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	cvxnonsep_nsig30r_pd[33] = 1. / x[1];
	v[0] = -0.058 * cvxnonsep_nsig30r_pd[32];
	t1 = v[0] + -x[46];
	c[16] = t1;

  /***  constraint 18  ***/

	cvxnonsep_nsig30r_pd[34] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	cvxnonsep_nsig30r_pd[35] = 1. / x[2];
	v[0] = -0.04 * cvxnonsep_nsig30r_pd[34];
	t1 = v[0] + -x[47];
	c[17] = t1;

  /***  constraint 19  ***/

	cvxnonsep_nsig30r_pd[36] = log(x[3]);
	if (errno) in_trouble("log",x[3]);
	cvxnonsep_nsig30r_pd[37] = 1. / x[3];
	v[0] = -0.03 * cvxnonsep_nsig30r_pd[36];
	t1 = v[0] + -x[48];
	c[18] = t1;

  /***  constraint 20  ***/

	cvxnonsep_nsig30r_pd[38] = log(x[4]);
	if (errno) in_trouble("log",x[4]);
	cvxnonsep_nsig30r_pd[39] = 1. / x[4];
	v[0] = -0.039 * cvxnonsep_nsig30r_pd[38];
	t1 = v[0] + -x[49];
	c[19] = t1;

  /***  constraint 21  ***/

	cvxnonsep_nsig30r_pd[40] = log(x[5]);
	if (errno) in_trouble("log",x[5]);
	cvxnonsep_nsig30r_pd[41] = 1. / x[5];
	v[0] = -0.034 * cvxnonsep_nsig30r_pd[40];
	t1 = v[0] + -x[50];
	c[20] = t1;

  /***  constraint 22  ***/

	cvxnonsep_nsig30r_pd[42] = log(x[6]);
	if (errno) in_trouble("log",x[6]);
	cvxnonsep_nsig30r_pd[43] = 1. / x[6];
	v[0] = -0.04 * cvxnonsep_nsig30r_pd[42];
	t1 = v[0] + -x[51];
	c[21] = t1;

  /***  constraint 23  ***/

	cvxnonsep_nsig30r_pd[44] = log(x[7]);
	if (errno) in_trouble("log",x[7]);
	cvxnonsep_nsig30r_pd[45] = 1. / x[7];
	v[0] = -0.034 * cvxnonsep_nsig30r_pd[44];
	t1 = v[0] + -x[52];
	c[22] = t1;

  /***  constraint 24  ***/

	cvxnonsep_nsig30r_pd[46] = log(x[8]);
	if (errno) in_trouble("log",x[8]);
	cvxnonsep_nsig30r_pd[47] = 1. / x[8];
	v[0] = -0.044 * cvxnonsep_nsig30r_pd[46];
	t1 = v[0] + -x[53];
	c[23] = t1;

  /***  constraint 25  ***/

	cvxnonsep_nsig30r_pd[48] = log(x[9]);
	if (errno) in_trouble("log",x[9]);
	cvxnonsep_nsig30r_pd[49] = 1. / x[9];
	v[0] = -0.032 * cvxnonsep_nsig30r_pd[48];
	t1 = v[0] + -x[54];
	c[24] = t1;

  /***  constraint 26  ***/

	cvxnonsep_nsig30r_pd[50] = log(x[10]);
	if (errno) in_trouble("log",x[10]);
	cvxnonsep_nsig30r_pd[51] = 1. / x[10];
	v[0] = -0.061 * cvxnonsep_nsig30r_pd[50];
	t1 = v[0] + -x[55];
	c[25] = t1;

  /***  constraint 27  ***/

	cvxnonsep_nsig30r_pd[52] = log(x[11]);
	if (errno) in_trouble("log",x[11]);
	cvxnonsep_nsig30r_pd[53] = 1. / x[11];
	v[0] = -0.013 * cvxnonsep_nsig30r_pd[52];
	t1 = v[0] + -x[56];
	c[26] = t1;

  /***  constraint 28  ***/

	cvxnonsep_nsig30r_pd[54] = log(x[12]);
	if (errno) in_trouble("log",x[12]);
	cvxnonsep_nsig30r_pd[55] = 1. / x[12];
	v[0] = -0.007 * cvxnonsep_nsig30r_pd[54];
	t1 = v[0] + -x[57];
	c[27] = t1;

  /***  constraint 29  ***/

	cvxnonsep_nsig30r_pd[56] = log(x[13]);
	if (errno) in_trouble("log",x[13]);
	cvxnonsep_nsig30r_pd[57] = 1. / x[13];
	v[0] = -0.007 * cvxnonsep_nsig30r_pd[56];
	t1 = v[0] + -x[58];
	c[28] = t1;

  /***  constraint 30  ***/

	cvxnonsep_nsig30r_pd[58] = log(x[14]);
	if (errno) in_trouble("log",x[14]);
	cvxnonsep_nsig30r_pd[59] = 1. / x[14];
	v[0] = -0.004 * cvxnonsep_nsig30r_pd[58];
	t1 = v[0] + -x[59];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[30];
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
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	c[30] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[15] = -0.028*cvxnonsep_nsig30r_pd[1];
	J[30] = -1.;

   /*** derivatives for constraint 2 ***/

	J[16] = -0.041*cvxnonsep_nsig30r_pd[3];
	J[32] = -1.;

   /*** derivatives for constraint 3 ***/

	J[17] = -0.047*cvxnonsep_nsig30r_pd[5];
	J[34] = -1.;

   /*** derivatives for constraint 4 ***/

	J[18] = -0.022*cvxnonsep_nsig30r_pd[7];
	J[36] = -1.;

   /*** derivatives for constraint 5 ***/

	J[19] = -0.041*cvxnonsep_nsig30r_pd[9];
	J[38] = -1.;

   /*** derivatives for constraint 6 ***/

	J[20] = -0.026*cvxnonsep_nsig30r_pd[11];
	J[40] = -1.;

   /*** derivatives for constraint 7 ***/

	J[21] = -0.052*cvxnonsep_nsig30r_pd[13];
	J[42] = -1.;

   /*** derivatives for constraint 8 ***/

	J[22] = -0.051*cvxnonsep_nsig30r_pd[15];
	J[44] = -1.;

   /*** derivatives for constraint 9 ***/

	J[23] = -0.016*cvxnonsep_nsig30r_pd[17];
	J[46] = -1.;

   /*** derivatives for constraint 10 ***/

	J[24] = -0.038*cvxnonsep_nsig30r_pd[19];
	J[48] = -1.;

   /*** derivatives for constraint 11 ***/

	J[25] = -0.036*cvxnonsep_nsig30r_pd[21];
	J[50] = -1.;

   /*** derivatives for constraint 12 ***/

	J[26] = -0.033*cvxnonsep_nsig30r_pd[23];
	J[52] = -1.;

   /*** derivatives for constraint 13 ***/

	J[27] = -0.054*cvxnonsep_nsig30r_pd[25];
	J[54] = -1.;

   /*** derivatives for constraint 14 ***/

	J[28] = -0.016*cvxnonsep_nsig30r_pd[27];
	J[56] = -1.;

   /*** derivatives for constraint 15 ***/

	J[29] = -0.02*cvxnonsep_nsig30r_pd[29];
	J[58] = -1.;

   /*** derivatives for constraint 16 ***/

	J[0] = -0.007*cvxnonsep_nsig30r_pd[31];
	J[60] = -1.;

   /*** derivatives for constraint 17 ***/

	J[1] = -0.058*cvxnonsep_nsig30r_pd[33];
	J[62] = -1.;

   /*** derivatives for constraint 18 ***/

	J[2] = -0.04*cvxnonsep_nsig30r_pd[35];
	J[64] = -1.;

   /*** derivatives for constraint 19 ***/

	J[3] = -0.03*cvxnonsep_nsig30r_pd[37];
	J[66] = -1.;

   /*** derivatives for constraint 20 ***/

	J[4] = -0.039*cvxnonsep_nsig30r_pd[39];
	J[68] = -1.;

   /*** derivatives for constraint 21 ***/

	J[5] = -0.034*cvxnonsep_nsig30r_pd[41];
	J[70] = -1.;

   /*** derivatives for constraint 22 ***/

	J[6] = -0.04*cvxnonsep_nsig30r_pd[43];
	J[72] = -1.;

   /*** derivatives for constraint 23 ***/

	J[7] = -0.034*cvxnonsep_nsig30r_pd[45];
	J[74] = -1.;

   /*** derivatives for constraint 24 ***/

	J[8] = -0.044*cvxnonsep_nsig30r_pd[47];
	J[76] = -1.;

   /*** derivatives for constraint 25 ***/

	J[9] = -0.032*cvxnonsep_nsig30r_pd[49];
	J[78] = -1.;

   /*** derivatives for constraint 26 ***/

	J[10] = -0.061*cvxnonsep_nsig30r_pd[51];
	J[80] = -1.;

   /*** derivatives for constraint 27 ***/

	J[11] = -0.013*cvxnonsep_nsig30r_pd[53];
	J[82] = -1.;

   /*** derivatives for constraint 28 ***/

	J[12] = -0.007*cvxnonsep_nsig30r_pd[55];
	J[84] = -1.;

   /*** derivatives for constraint 29 ***/

	J[13] = -0.007*cvxnonsep_nsig30r_pd[57];
	J[86] = -1.;

   /*** derivatives for constraint 30 ***/

	J[14] = -0.004*cvxnonsep_nsig30r_pd[59];
	J[88] = -1.;

   /*** derivatives for constraint 31 ***/

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
	J[61] = 1.;
	J[63] = 1.;
	J[65] = 1.;
	J[67] = 1.;
	J[69] = 1.;
	J[71] = 1.;
	J[73] = 1.;
	J[75] = 1.;
	J[77] = 1.;
	J[79] = 1.;
	J[81] = 1.;
	J[83] = 1.;
	J[85] = 1.;
	J[87] = 1.;
	J[89] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif