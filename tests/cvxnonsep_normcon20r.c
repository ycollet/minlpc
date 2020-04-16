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
 fint cvxnonsep_normcon20r_auxcom_[1] = { 20 /* nlc */ };
 fint cvxnonsep_normcon20r_funcom_[107] = {
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

 real cvxnonsep_normcon20r_boundc_[1+80+42] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
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
		99.9999};

 real cvxnonsep_normcon20r_x0comn_[40] = {
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

 static real cvxnonsep_normcon20r_pd[20];
static real cvxnonsep_normcon20r_old_x[40];
static int cvxnonsep_normcon20r_xkind = -1;

 static int
cvxnonsep_normcon20r_xcheck(real *x)
{
	real *x1 = cvxnonsep_normcon20r_old_x, *xe = x + 40;
	errno = 0;
	if (cvxnonsep_normcon20r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_normcon20r_xkind = 0;
	return 1;
	}
 real
cvxnonsep_normcon20r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon20r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -0.29*x[0];
	rv += -0.43*x[1];
	rv += -0.015*x[2];
	rv += -0.985*x[3];
	rv += -0.165*x[4];
	rv += -0.105*x[5];
	rv += -0.37*x[6];
	rv += -0.2*x[7];
	rv += -0.49*x[8];
	rv += -0.34*x[9];
	rv += -0.175*x[10];
	rv += -0.39*x[11];
	rv += -0.83*x[12];
	rv += -0.805*x[13];
	rv += -0.06*x[14];
	rv += -0.4*x[15];
	rv += -0.52*x[16];
	rv += -0.415*x[17];
	rv += -0.655*x[18];
	rv += -0.63*x[19];
	;}

	if (wantfg & 2) {
	g[0] = -0.29;
	g[1] = -0.43;
	g[2] = -0.015;
	g[3] = -0.985;
	g[4] = -0.165;
	g[5] = -0.105;
	g[6] = -0.37;
	g[7] = -0.2;
	g[8] = -0.49;
	g[9] = -0.34;
	g[10] = -0.175;
	g[11] = -0.39;
	g[12] = -0.83;
	g[13] = -0.805;
	g[14] = -0.06;
	g[15] = -0.4;
	g[16] = -0.52;
	g[17] = -0.415;
	g[18] = -0.655;
	g[19] = -0.63;
	}

	return rv;
}

 void
cvxnonsep_normcon20r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon20r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[10] * x[10];
	cvxnonsep_normcon20r_pd[0] = x[10] + x[10];
	t1 = v[0] + -x[20];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[11] * x[11];
	cvxnonsep_normcon20r_pd[1] = x[11] + x[11];
	t1 = v[0] + -x[21];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[12] * x[12];
	cvxnonsep_normcon20r_pd[2] = x[12] + x[12];
	t1 = v[0] + -x[22];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[13] * x[13];
	cvxnonsep_normcon20r_pd[3] = x[13] + x[13];
	t1 = v[0] + -x[23];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[14] * x[14];
	cvxnonsep_normcon20r_pd[4] = x[14] + x[14];
	t1 = v[0] + -x[24];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[15] * x[15];
	cvxnonsep_normcon20r_pd[5] = x[15] + x[15];
	t1 = v[0] + -x[25];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[16] * x[16];
	cvxnonsep_normcon20r_pd[6] = x[16] + x[16];
	t1 = v[0] + -x[26];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[17] * x[17];
	cvxnonsep_normcon20r_pd[7] = x[17] + x[17];
	t1 = v[0] + -x[27];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[18] * x[18];
	cvxnonsep_normcon20r_pd[8] = x[18] + x[18];
	t1 = v[0] + -x[28];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[19] * x[19];
	cvxnonsep_normcon20r_pd[9] = x[19] + x[19];
	t1 = v[0] + -x[29];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[0] * x[0];
	cvxnonsep_normcon20r_pd[10] = x[0] + x[0];
	t1 = v[0] + -x[30];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[1] * x[1];
	cvxnonsep_normcon20r_pd[11] = x[1] + x[1];
	t1 = v[0] + -x[31];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[2] * x[2];
	cvxnonsep_normcon20r_pd[12] = x[2] + x[2];
	t1 = v[0] + -x[32];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[3] * x[3];
	cvxnonsep_normcon20r_pd[13] = x[3] + x[3];
	t1 = v[0] + -x[33];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[4] * x[4];
	cvxnonsep_normcon20r_pd[14] = x[4] + x[4];
	t1 = v[0] + -x[34];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[5] * x[5];
	cvxnonsep_normcon20r_pd[15] = x[5] + x[5];
	t1 = v[0] + -x[35];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[6] * x[6];
	cvxnonsep_normcon20r_pd[16] = x[6] + x[6];
	t1 = v[0] + -x[36];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[7] * x[7];
	cvxnonsep_normcon20r_pd[17] = x[7] + x[7];
	t1 = v[0] + -x[37];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[8] * x[8];
	cvxnonsep_normcon20r_pd[18] = x[8] + x[8];
	t1 = v[0] + -x[38];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[9] * x[9];
	cvxnonsep_normcon20r_pd[19] = x[9] + x[9];
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

	J[10] = cvxnonsep_normcon20r_pd[0];
	J[20] = -1.;

   /*** derivatives for constraint 2 ***/

	J[11] = cvxnonsep_normcon20r_pd[1];
	J[22] = -1.;

   /*** derivatives for constraint 3 ***/

	J[12] = cvxnonsep_normcon20r_pd[2];
	J[24] = -1.;

   /*** derivatives for constraint 4 ***/

	J[13] = cvxnonsep_normcon20r_pd[3];
	J[26] = -1.;

   /*** derivatives for constraint 5 ***/

	J[14] = cvxnonsep_normcon20r_pd[4];
	J[28] = -1.;

   /*** derivatives for constraint 6 ***/

	J[15] = cvxnonsep_normcon20r_pd[5];
	J[30] = -1.;

   /*** derivatives for constraint 7 ***/

	J[16] = cvxnonsep_normcon20r_pd[6];
	J[32] = -1.;

   /*** derivatives for constraint 8 ***/

	J[17] = cvxnonsep_normcon20r_pd[7];
	J[34] = -1.;

   /*** derivatives for constraint 9 ***/

	J[18] = cvxnonsep_normcon20r_pd[8];
	J[36] = -1.;

   /*** derivatives for constraint 10 ***/

	J[19] = cvxnonsep_normcon20r_pd[9];
	J[38] = -1.;

   /*** derivatives for constraint 11 ***/

	J[0] = cvxnonsep_normcon20r_pd[10];
	J[40] = -1.;

   /*** derivatives for constraint 12 ***/

	J[1] = cvxnonsep_normcon20r_pd[11];
	J[42] = -1.;

   /*** derivatives for constraint 13 ***/

	J[2] = cvxnonsep_normcon20r_pd[12];
	J[44] = -1.;

   /*** derivatives for constraint 14 ***/

	J[3] = cvxnonsep_normcon20r_pd[13];
	J[46] = -1.;

   /*** derivatives for constraint 15 ***/

	J[4] = cvxnonsep_normcon20r_pd[14];
	J[48] = -1.;

   /*** derivatives for constraint 16 ***/

	J[5] = cvxnonsep_normcon20r_pd[15];
	J[50] = -1.;

   /*** derivatives for constraint 17 ***/

	J[6] = cvxnonsep_normcon20r_pd[16];
	J[52] = -1.;

   /*** derivatives for constraint 18 ***/

	J[7] = cvxnonsep_normcon20r_pd[17];
	J[54] = -1.;

   /*** derivatives for constraint 19 ***/

	J[8] = cvxnonsep_normcon20r_pd[18];
	J[56] = -1.;

   /*** derivatives for constraint 20 ***/

	J[9] = cvxnonsep_normcon20r_pd[19];
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
