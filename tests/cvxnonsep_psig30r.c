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
 fint cvxnonsep_psig30r_auxcom_[1] = { 31 /* nlc */ };
 fint cvxnonsep_psig30r_funcom_[162] = {
	62 /* nvar */,
	1 /* nobj */,
	32 /* ncon */,
	93 /* nzc */,
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
	66,
	68,
	70,
	72,
	74,
	76,
	78,
	80,
	82,
	84,
	86,
	88,
	90,
	92,
	94,

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
	31,
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
	32,
	2,
	32,
	3,
	32,
	4,
	32,
	5,
	32,
	6,
	32,
	7,
	32,
	8,
	32,
	9,
	32,
	10,
	32,
	11,
	32,
	12,
	32,
	13,
	32,
	14,
	32,
	15,
	32,
	16,
	32,
	17,
	32,
	18,
	32,
	19,
	32,
	20,
	32,
	21,
	32,
	22,
	32,
	23,
	32,
	24,
	32,
	25,
	32,
	26,
	32,
	27,
	32,
	28,
	32,
	29,
	32,
	30,
	32,
	31,
	32 };

 real cvxnonsep_psig30r_boundc_[1+124+64] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.e-10,
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

 real cvxnonsep_psig30r_x0comn_[62] = {
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
		1.e-10,
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
		0.,
		0. };

 static real cvxnonsep_psig30r_pd[61];
static real cvxnonsep_psig30r_old_x[62];
static int cvxnonsep_psig30r_xkind = -1;

 static int
cvxnonsep_psig30r_xcheck(real *x)
{
	real *x1 = cvxnonsep_psig30r_old_x, *xe = x + 62;
	errno = 0;
	if (cvxnonsep_psig30r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_psig30r_xkind = 0;
	return 1;
	}
 real
cvxnonsep_psig30r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_psig30r_xcheck(x) && wantfg == 2)
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
	rv += x[10];
	rv += x[11];
	rv += x[12];
	rv += x[13];
	rv += x[14];
	rv += 30000.*x[15];
	rv += x[16];
	rv += x[17];
	rv += x[18];
	rv += x[19];
	rv += x[20];
	rv += x[21];
	rv += x[22];
	rv += x[23];
	rv += x[24];
	rv += x[25];
	rv += x[26];
	rv += x[27];
	rv += x[28];
	rv += x[29];
	rv += x[30];
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
	g[10] = 1.;
	g[11] = 1.;
	g[12] = 1.;
	g[13] = 1.;
	g[14] = 1.;
	g[15] = 30000.;
	g[16] = 1.;
	g[17] = 1.;
	g[18] = 1.;
	g[19] = 1.;
	g[20] = 1.;
	g[21] = 1.;
	g[22] = 1.;
	g[23] = 1.;
	g[24] = 1.;
	g[25] = 1.;
	g[26] = 1.;
	g[27] = 1.;
	g[28] = 1.;
	g[29] = 1.;
	g[30] = 1.;
	}

	return rv;
}

 void
cvxnonsep_psig30r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (cvxnonsep_psig30r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	cvxnonsep_psig30r_pd[0] = log(x[16]);
	if (errno) in_trouble("log",x[16]);
	cvxnonsep_psig30r_pd[1] = 1. / x[16];
	v[0] = -0.48 * cvxnonsep_psig30r_pd[0];
	t1 = v[0] + -x[31];
	c[0] = t1;

  /***  constraint 2  ***/

	cvxnonsep_psig30r_pd[2] = log(x[17]);
	if (errno) in_trouble("log",x[17]);
	cvxnonsep_psig30r_pd[3] = 1. / x[17];
	v[0] = -0.275 * cvxnonsep_psig30r_pd[2];
	t1 = v[0] + -x[32];
	c[1] = t1;

  /***  constraint 3  ***/

	cvxnonsep_psig30r_pd[4] = log(x[18]);
	if (errno) in_trouble("log",x[18]);
	cvxnonsep_psig30r_pd[5] = 1. / x[18];
	v[0] = -0.26 * cvxnonsep_psig30r_pd[4];
	t1 = v[0] + -x[33];
	c[2] = t1;

  /***  constraint 4  ***/

	cvxnonsep_psig30r_pd[6] = log(x[19]);
	if (errno) in_trouble("log",x[19]);
	cvxnonsep_psig30r_pd[7] = 1. / x[19];
	v[0] = -0.215 * cvxnonsep_psig30r_pd[6];
	t1 = v[0] + -x[34];
	c[3] = t1;

  /***  constraint 5  ***/

	cvxnonsep_psig30r_pd[8] = log(x[20]);
	if (errno) in_trouble("log",x[20]);
	cvxnonsep_psig30r_pd[9] = 1. / x[20];
	v[0] = -0.245 * cvxnonsep_psig30r_pd[8];
	t1 = v[0] + -x[35];
	c[4] = t1;

  /***  constraint 6  ***/

	cvxnonsep_psig30r_pd[10] = log(x[21]);
	if (errno) in_trouble("log",x[21]);
	cvxnonsep_psig30r_pd[11] = 1. / x[21];
	v[0] = -0.31 * cvxnonsep_psig30r_pd[10];
	t1 = v[0] + -x[36];
	c[5] = t1;

  /***  constraint 7  ***/

	cvxnonsep_psig30r_pd[12] = log(x[22]);
	if (errno) in_trouble("log",x[22]);
	cvxnonsep_psig30r_pd[13] = 1. / x[22];
	v[0] = -0.34 * cvxnonsep_psig30r_pd[12];
	t1 = v[0] + -x[37];
	c[6] = t1;

  /***  constraint 8  ***/

	cvxnonsep_psig30r_pd[14] = log(x[23]);
	if (errno) in_trouble("log",x[23]);
	cvxnonsep_psig30r_pd[15] = 1. / x[23];
	v[0] = -0.2 * cvxnonsep_psig30r_pd[14];
	t1 = v[0] + -x[38];
	c[7] = t1;

  /***  constraint 9  ***/

	cvxnonsep_psig30r_pd[16] = log(x[24]);
	if (errno) in_trouble("log",x[24]);
	cvxnonsep_psig30r_pd[17] = 1. / x[24];
	v[0] = -0.185 * cvxnonsep_psig30r_pd[16];
	t1 = v[0] + -x[39];
	c[8] = t1;

  /***  constraint 10  ***/

	cvxnonsep_psig30r_pd[18] = log(x[25]);
	if (errno) in_trouble("log",x[25]);
	cvxnonsep_psig30r_pd[19] = 1. / x[25];
	v[0] = -0.495 * cvxnonsep_psig30r_pd[18];
	t1 = v[0] + -x[40];
	c[9] = t1;

  /***  constraint 11  ***/

	cvxnonsep_psig30r_pd[20] = log(x[26]);
	if (errno) in_trouble("log",x[26]);
	cvxnonsep_psig30r_pd[21] = 1. / x[26];
	v[0] = -0.02 * cvxnonsep_psig30r_pd[20];
	t1 = v[0] + -x[41];
	c[10] = t1;

  /***  constraint 12  ***/

	cvxnonsep_psig30r_pd[22] = log(x[27]);
	if (errno) in_trouble("log",x[27]);
	cvxnonsep_psig30r_pd[23] = 1. / x[27];
	v[0] = -0.445 * cvxnonsep_psig30r_pd[22];
	t1 = v[0] + -x[42];
	c[11] = t1;

  /***  constraint 13  ***/

	cvxnonsep_psig30r_pd[24] = log(x[28]);
	if (errno) in_trouble("log",x[28]);
	cvxnonsep_psig30r_pd[25] = 1. / x[28];
	v[0] = -0.455 * cvxnonsep_psig30r_pd[24];
	t1 = v[0] + -x[43];
	c[12] = t1;

  /***  constraint 14  ***/

	cvxnonsep_psig30r_pd[26] = log(x[29]);
	if (errno) in_trouble("log",x[29]);
	cvxnonsep_psig30r_pd[27] = 1. / x[29];
	v[0] = -0.4 * cvxnonsep_psig30r_pd[26];
	t1 = v[0] + -x[44];
	c[13] = t1;

  /***  constraint 15  ***/

	cvxnonsep_psig30r_pd[28] = log(x[30]);
	if (errno) in_trouble("log",x[30]);
	cvxnonsep_psig30r_pd[29] = 1. / x[30];
	v[0] = -0.05 * cvxnonsep_psig30r_pd[28];
	t1 = v[0] + -x[45];
	c[14] = t1;

  /***  constraint 16  ***/

	cvxnonsep_psig30r_pd[30] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	cvxnonsep_psig30r_pd[31] = 1. / x[0];
	v[0] = -0.13 * cvxnonsep_psig30r_pd[30];
	t1 = v[0] + -x[46];
	c[15] = t1;

  /***  constraint 17  ***/

	cvxnonsep_psig30r_pd[32] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	cvxnonsep_psig30r_pd[33] = 1. / x[1];
	v[0] = -0.17 * cvxnonsep_psig30r_pd[32];
	t1 = v[0] + -x[47];
	c[16] = t1;

  /***  constraint 18  ***/

	cvxnonsep_psig30r_pd[34] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	cvxnonsep_psig30r_pd[35] = 1. / x[2];
	v[0] = -0.34 * cvxnonsep_psig30r_pd[34];
	t1 = v[0] + -x[48];
	c[17] = t1;

  /***  constraint 19  ***/

	cvxnonsep_psig30r_pd[36] = log(x[3]);
	if (errno) in_trouble("log",x[3]);
	cvxnonsep_psig30r_pd[37] = 1. / x[3];
	v[0] = -0.07 * cvxnonsep_psig30r_pd[36];
	t1 = v[0] + -x[49];
	c[18] = t1;

  /***  constraint 20  ***/

	cvxnonsep_psig30r_pd[38] = log(x[4]);
	if (errno) in_trouble("log",x[4]);
	cvxnonsep_psig30r_pd[39] = 1. / x[4];
	v[0] = -0.36 * cvxnonsep_psig30r_pd[38];
	t1 = v[0] + -x[50];
	c[19] = t1;

  /***  constraint 21  ***/

	cvxnonsep_psig30r_pd[40] = log(x[5]);
	if (errno) in_trouble("log",x[5]);
	cvxnonsep_psig30r_pd[41] = 1. / x[5];
	v[0] = -0.05 * cvxnonsep_psig30r_pd[40];
	t1 = v[0] + -x[51];
	c[20] = t1;

  /***  constraint 22  ***/

	cvxnonsep_psig30r_pd[42] = log(x[6]);
	if (errno) in_trouble("log",x[6]);
	cvxnonsep_psig30r_pd[43] = 1. / x[6];
	v[0] = -0.325 * cvxnonsep_psig30r_pd[42];
	t1 = v[0] + -x[52];
	c[21] = t1;

  /***  constraint 23  ***/

	cvxnonsep_psig30r_pd[44] = log(x[7]);
	if (errno) in_trouble("log",x[7]);
	cvxnonsep_psig30r_pd[45] = 1. / x[7];
	v[0] = -0.245 * cvxnonsep_psig30r_pd[44];
	t1 = v[0] + -x[53];
	c[22] = t1;

  /***  constraint 24  ***/

	cvxnonsep_psig30r_pd[46] = log(x[8]);
	if (errno) in_trouble("log",x[8]);
	cvxnonsep_psig30r_pd[47] = 1. / x[8];
	v[0] = -0.39 * cvxnonsep_psig30r_pd[46];
	t1 = v[0] + -x[54];
	c[23] = t1;

  /***  constraint 25  ***/

	cvxnonsep_psig30r_pd[48] = log(x[9]);
	if (errno) in_trouble("log",x[9]);
	cvxnonsep_psig30r_pd[49] = 1. / x[9];
	v[0] = -0.36 * cvxnonsep_psig30r_pd[48];
	t1 = v[0] + -x[55];
	c[24] = t1;

  /***  constraint 26  ***/

	cvxnonsep_psig30r_pd[50] = log(x[10]);
	if (errno) in_trouble("log",x[10]);
	cvxnonsep_psig30r_pd[51] = 1. / x[10];
	v[0] = -0.45 * cvxnonsep_psig30r_pd[50];
	t1 = v[0] + -x[56];
	c[25] = t1;

  /***  constraint 27  ***/

	cvxnonsep_psig30r_pd[52] = log(x[11]);
	if (errno) in_trouble("log",x[11]);
	cvxnonsep_psig30r_pd[53] = 1. / x[11];
	v[0] = -0.445 * cvxnonsep_psig30r_pd[52];
	t1 = v[0] + -x[57];
	c[26] = t1;

  /***  constraint 28  ***/

	cvxnonsep_psig30r_pd[54] = log(x[12]);
	if (errno) in_trouble("log",x[12]);
	cvxnonsep_psig30r_pd[55] = 1. / x[12];
	v[0] = -0.165 * cvxnonsep_psig30r_pd[54];
	t1 = v[0] + -x[58];
	c[27] = t1;

  /***  constraint 29  ***/

	cvxnonsep_psig30r_pd[56] = log(x[13]);
	if (errno) in_trouble("log",x[13]);
	cvxnonsep_psig30r_pd[57] = 1. / x[13];
	v[0] = -0.35 * cvxnonsep_psig30r_pd[56];
	t1 = v[0] + -x[59];
	c[28] = t1;

  /***  constraint 30  ***/

	cvxnonsep_psig30r_pd[58] = log(x[14]);
	if (errno) in_trouble("log",x[14]);
	cvxnonsep_psig30r_pd[59] = 1. / x[14];
	v[0] = -0.1 * cvxnonsep_psig30r_pd[58];
	t1 = v[0] + -x[60];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = log(x[15]);
	if (errno) in_trouble("log",x[15]);
	cvxnonsep_psig30r_pd[60] = 1. / x[15];
	v[1] = -v[0];
	t1 = v[1] + -x[61];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[31];
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
	t1 += x[60];
	t1 += x[61];
	c[31] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[16] = -0.48*cvxnonsep_psig30r_pd[1];
	J[31] = -1.;

   /*** derivatives for constraint 2 ***/

	J[17] = -0.275*cvxnonsep_psig30r_pd[3];
	J[33] = -1.;

   /*** derivatives for constraint 3 ***/

	J[18] = -0.26*cvxnonsep_psig30r_pd[5];
	J[35] = -1.;

   /*** derivatives for constraint 4 ***/

	J[19] = -0.215*cvxnonsep_psig30r_pd[7];
	J[37] = -1.;

   /*** derivatives for constraint 5 ***/

	J[20] = -0.245*cvxnonsep_psig30r_pd[9];
	J[39] = -1.;

   /*** derivatives for constraint 6 ***/

	J[21] = -0.31*cvxnonsep_psig30r_pd[11];
	J[41] = -1.;

   /*** derivatives for constraint 7 ***/

	J[22] = -0.34*cvxnonsep_psig30r_pd[13];
	J[43] = -1.;

   /*** derivatives for constraint 8 ***/

	J[23] = -0.2*cvxnonsep_psig30r_pd[15];
	J[45] = -1.;

   /*** derivatives for constraint 9 ***/

	J[24] = -0.185*cvxnonsep_psig30r_pd[17];
	J[47] = -1.;

   /*** derivatives for constraint 10 ***/

	J[25] = -0.495*cvxnonsep_psig30r_pd[19];
	J[49] = -1.;

   /*** derivatives for constraint 11 ***/

	J[26] = -0.02*cvxnonsep_psig30r_pd[21];
	J[51] = -1.;

   /*** derivatives for constraint 12 ***/

	J[27] = -0.445*cvxnonsep_psig30r_pd[23];
	J[53] = -1.;

   /*** derivatives for constraint 13 ***/

	J[28] = -0.455*cvxnonsep_psig30r_pd[25];
	J[55] = -1.;

   /*** derivatives for constraint 14 ***/

	J[29] = -0.4*cvxnonsep_psig30r_pd[27];
	J[57] = -1.;

   /*** derivatives for constraint 15 ***/

	J[30] = -0.05*cvxnonsep_psig30r_pd[29];
	J[59] = -1.;

   /*** derivatives for constraint 16 ***/

	J[0] = -0.13*cvxnonsep_psig30r_pd[31];
	J[61] = -1.;

   /*** derivatives for constraint 17 ***/

	J[1] = -0.17*cvxnonsep_psig30r_pd[33];
	J[63] = -1.;

   /*** derivatives for constraint 18 ***/

	J[2] = -0.34*cvxnonsep_psig30r_pd[35];
	J[65] = -1.;

   /*** derivatives for constraint 19 ***/

	J[3] = -0.07*cvxnonsep_psig30r_pd[37];
	J[67] = -1.;

   /*** derivatives for constraint 20 ***/

	J[4] = -0.36*cvxnonsep_psig30r_pd[39];
	J[69] = -1.;

   /*** derivatives for constraint 21 ***/

	J[5] = -0.05*cvxnonsep_psig30r_pd[41];
	J[71] = -1.;

   /*** derivatives for constraint 22 ***/

	J[6] = -0.325*cvxnonsep_psig30r_pd[43];
	J[73] = -1.;

   /*** derivatives for constraint 23 ***/

	J[7] = -0.245*cvxnonsep_psig30r_pd[45];
	J[75] = -1.;

   /*** derivatives for constraint 24 ***/

	J[8] = -0.39*cvxnonsep_psig30r_pd[47];
	J[77] = -1.;

   /*** derivatives for constraint 25 ***/

	J[9] = -0.36*cvxnonsep_psig30r_pd[49];
	J[79] = -1.;

   /*** derivatives for constraint 26 ***/

	J[10] = -0.45*cvxnonsep_psig30r_pd[51];
	J[81] = -1.;

   /*** derivatives for constraint 27 ***/

	J[11] = -0.445*cvxnonsep_psig30r_pd[53];
	J[83] = -1.;

   /*** derivatives for constraint 28 ***/

	J[12] = -0.165*cvxnonsep_psig30r_pd[55];
	J[85] = -1.;

   /*** derivatives for constraint 29 ***/

	J[13] = -0.35*cvxnonsep_psig30r_pd[57];
	J[87] = -1.;

   /*** derivatives for constraint 30 ***/

	J[14] = -0.1*cvxnonsep_psig30r_pd[59];
	J[89] = -1.;

   /*** derivatives for constraint 31 ***/

	J[15] = -cvxnonsep_psig30r_pd[60];
	J[91] = -1.;

   /*** derivatives for constraint 32 ***/

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
	J[64] = 1.;
	J[66] = 1.;
	J[68] = 1.;
	J[70] = 1.;
	J[72] = 1.;
	J[74] = 1.;
	J[76] = 1.;
	J[78] = 1.;
	J[80] = 1.;
	J[82] = 1.;
	J[84] = 1.;
	J[86] = 1.;
	J[88] = 1.;
	J[90] = 1.;
	J[92] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
