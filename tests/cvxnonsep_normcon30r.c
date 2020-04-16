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
 fint cvxnonsep_normcon30r_auxcom_[1] = { 30 /* nlc */ };
 fint cvxnonsep_normcon30r_funcom_[157] = {
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

 real cvxnonsep_normcon30r_boundc_[1+120+62] /* Infinity, variable bounds, constraint bounds */ = {
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
		99.9999};

 real cvxnonsep_normcon30r_x0comn_[60] = {
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

 static real cvxnonsep_normcon30r_pd[30];
static real cvxnonsep_normcon30r_old_x[60];
static int cvxnonsep_normcon30r_xkind = -1;

 static int
cvxnonsep_normcon30r_xcheck(real *x)
{
	real *x1 = cvxnonsep_normcon30r_old_x, *xe = x + 60;
	errno = 0;
	if (cvxnonsep_normcon30r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_normcon30r_xkind = 0;
	return 1;
	}
 real
cvxnonsep_normcon30r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon30r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -0.665*x[0];
	rv += -0.18*x[1];
	rv += -0.13*x[2];
	rv += -x[3];
	rv += -0.17*x[4];
	rv += -0.035*x[5];
	rv += -0.56*x[6];
	rv += -0.88*x[7];
	rv += -0.67*x[8];
	rv += -0.19*x[9];
	rv += -0.37*x[10];
	rv += -0.46*x[11];
	rv += -0.98*x[12];
	rv += -0.155*x[13];
	rv += -0.855*x[14];
	rv += -0.95*x[15];
	rv += -0.92*x[16];
	rv += -0.055*x[17];
	rv += -0.74*x[18];
	rv += -0.27*x[19];
	rv += -0.42*x[20];
	rv += -0.55*x[21];
	rv += -0.945*x[22];
	rv += -0.42*x[23];
	rv += -0.985*x[24];
	rv += -0.3*x[25];
	rv += -0.7*x[26];
	rv += -0.665*x[27];
	rv += -0.54*x[28];
	rv += -0.7*x[29];
	;}

	if (wantfg & 2) {
	g[0] = -0.665;
	g[1] = -0.18;
	g[2] = -0.13;
	g[3] = -1.;
	g[4] = -0.17;
	g[5] = -0.035;
	g[6] = -0.56;
	g[7] = -0.88;
	g[8] = -0.67;
	g[9] = -0.19;
	g[10] = -0.37;
	g[11] = -0.46;
	g[12] = -0.98;
	g[13] = -0.155;
	g[14] = -0.855;
	g[15] = -0.95;
	g[16] = -0.92;
	g[17] = -0.055;
	g[18] = -0.74;
	g[19] = -0.27;
	g[20] = -0.42;
	g[21] = -0.55;
	g[22] = -0.945;
	g[23] = -0.42;
	g[24] = -0.985;
	g[25] = -0.3;
	g[26] = -0.7;
	g[27] = -0.665;
	g[28] = -0.54;
	g[29] = -0.7;
	}

	return rv;
}

 void
cvxnonsep_normcon30r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon30r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[15] * x[15];
	cvxnonsep_normcon30r_pd[0] = x[15] + x[15];
	t1 = v[0] + -x[30];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[16] * x[16];
	cvxnonsep_normcon30r_pd[1] = x[16] + x[16];
	t1 = v[0] + -x[31];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[17] * x[17];
	cvxnonsep_normcon30r_pd[2] = x[17] + x[17];
	t1 = v[0] + -x[32];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[18] * x[18];
	cvxnonsep_normcon30r_pd[3] = x[18] + x[18];
	t1 = v[0] + -x[33];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[19] * x[19];
	cvxnonsep_normcon30r_pd[4] = x[19] + x[19];
	t1 = v[0] + -x[34];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[20] * x[20];
	cvxnonsep_normcon30r_pd[5] = x[20] + x[20];
	t1 = v[0] + -x[35];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[21] * x[21];
	cvxnonsep_normcon30r_pd[6] = x[21] + x[21];
	t1 = v[0] + -x[36];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[22] * x[22];
	cvxnonsep_normcon30r_pd[7] = x[22] + x[22];
	t1 = v[0] + -x[37];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[23] * x[23];
	cvxnonsep_normcon30r_pd[8] = x[23] + x[23];
	t1 = v[0] + -x[38];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[24] * x[24];
	cvxnonsep_normcon30r_pd[9] = x[24] + x[24];
	t1 = v[0] + -x[39];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[25] * x[25];
	cvxnonsep_normcon30r_pd[10] = x[25] + x[25];
	t1 = v[0] + -x[40];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[26] * x[26];
	cvxnonsep_normcon30r_pd[11] = x[26] + x[26];
	t1 = v[0] + -x[41];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[27] * x[27];
	cvxnonsep_normcon30r_pd[12] = x[27] + x[27];
	t1 = v[0] + -x[42];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[28] * x[28];
	cvxnonsep_normcon30r_pd[13] = x[28] + x[28];
	t1 = v[0] + -x[43];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[29] * x[29];
	cvxnonsep_normcon30r_pd[14] = x[29] + x[29];
	t1 = v[0] + -x[44];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[0] * x[0];
	cvxnonsep_normcon30r_pd[15] = x[0] + x[0];
	t1 = v[0] + -x[45];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[1] * x[1];
	cvxnonsep_normcon30r_pd[16] = x[1] + x[1];
	t1 = v[0] + -x[46];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[2] * x[2];
	cvxnonsep_normcon30r_pd[17] = x[2] + x[2];
	t1 = v[0] + -x[47];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[3] * x[3];
	cvxnonsep_normcon30r_pd[18] = x[3] + x[3];
	t1 = v[0] + -x[48];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[4] * x[4];
	cvxnonsep_normcon30r_pd[19] = x[4] + x[4];
	t1 = v[0] + -x[49];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[5] * x[5];
	cvxnonsep_normcon30r_pd[20] = x[5] + x[5];
	t1 = v[0] + -x[50];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[6] * x[6];
	cvxnonsep_normcon30r_pd[21] = x[6] + x[6];
	t1 = v[0] + -x[51];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[7] * x[7];
	cvxnonsep_normcon30r_pd[22] = x[7] + x[7];
	t1 = v[0] + -x[52];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[8] * x[8];
	cvxnonsep_normcon30r_pd[23] = x[8] + x[8];
	t1 = v[0] + -x[53];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[9] * x[9];
	cvxnonsep_normcon30r_pd[24] = x[9] + x[9];
	t1 = v[0] + -x[54];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[10] * x[10];
	cvxnonsep_normcon30r_pd[25] = x[10] + x[10];
	t1 = v[0] + -x[55];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[11] * x[11];
	cvxnonsep_normcon30r_pd[26] = x[11] + x[11];
	t1 = v[0] + -x[56];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[12] * x[12];
	cvxnonsep_normcon30r_pd[27] = x[12] + x[12];
	t1 = v[0] + -x[57];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[13] * x[13];
	cvxnonsep_normcon30r_pd[28] = x[13] + x[13];
	t1 = v[0] + -x[58];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[14] * x[14];
	cvxnonsep_normcon30r_pd[29] = x[14] + x[14];
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

	J[15] = cvxnonsep_normcon30r_pd[0];
	J[30] = -1.;

   /*** derivatives for constraint 2 ***/

	J[16] = cvxnonsep_normcon30r_pd[1];
	J[32] = -1.;

   /*** derivatives for constraint 3 ***/

	J[17] = cvxnonsep_normcon30r_pd[2];
	J[34] = -1.;

   /*** derivatives for constraint 4 ***/

	J[18] = cvxnonsep_normcon30r_pd[3];
	J[36] = -1.;

   /*** derivatives for constraint 5 ***/

	J[19] = cvxnonsep_normcon30r_pd[4];
	J[38] = -1.;

   /*** derivatives for constraint 6 ***/

	J[20] = cvxnonsep_normcon30r_pd[5];
	J[40] = -1.;

   /*** derivatives for constraint 7 ***/

	J[21] = cvxnonsep_normcon30r_pd[6];
	J[42] = -1.;

   /*** derivatives for constraint 8 ***/

	J[22] = cvxnonsep_normcon30r_pd[7];
	J[44] = -1.;

   /*** derivatives for constraint 9 ***/

	J[23] = cvxnonsep_normcon30r_pd[8];
	J[46] = -1.;

   /*** derivatives for constraint 10 ***/

	J[24] = cvxnonsep_normcon30r_pd[9];
	J[48] = -1.;

   /*** derivatives for constraint 11 ***/

	J[25] = cvxnonsep_normcon30r_pd[10];
	J[50] = -1.;

   /*** derivatives for constraint 12 ***/

	J[26] = cvxnonsep_normcon30r_pd[11];
	J[52] = -1.;

   /*** derivatives for constraint 13 ***/

	J[27] = cvxnonsep_normcon30r_pd[12];
	J[54] = -1.;

   /*** derivatives for constraint 14 ***/

	J[28] = cvxnonsep_normcon30r_pd[13];
	J[56] = -1.;

   /*** derivatives for constraint 15 ***/

	J[29] = cvxnonsep_normcon30r_pd[14];
	J[58] = -1.;

   /*** derivatives for constraint 16 ***/

	J[0] = cvxnonsep_normcon30r_pd[15];
	J[60] = -1.;

   /*** derivatives for constraint 17 ***/

	J[1] = cvxnonsep_normcon30r_pd[16];
	J[62] = -1.;

   /*** derivatives for constraint 18 ***/

	J[2] = cvxnonsep_normcon30r_pd[17];
	J[64] = -1.;

   /*** derivatives for constraint 19 ***/

	J[3] = cvxnonsep_normcon30r_pd[18];
	J[66] = -1.;

   /*** derivatives for constraint 20 ***/

	J[4] = cvxnonsep_normcon30r_pd[19];
	J[68] = -1.;

   /*** derivatives for constraint 21 ***/

	J[5] = cvxnonsep_normcon30r_pd[20];
	J[70] = -1.;

   /*** derivatives for constraint 22 ***/

	J[6] = cvxnonsep_normcon30r_pd[21];
	J[72] = -1.;

   /*** derivatives for constraint 23 ***/

	J[7] = cvxnonsep_normcon30r_pd[22];
	J[74] = -1.;

   /*** derivatives for constraint 24 ***/

	J[8] = cvxnonsep_normcon30r_pd[23];
	J[76] = -1.;

   /*** derivatives for constraint 25 ***/

	J[9] = cvxnonsep_normcon30r_pd[24];
	J[78] = -1.;

   /*** derivatives for constraint 26 ***/

	J[10] = cvxnonsep_normcon30r_pd[25];
	J[80] = -1.;

   /*** derivatives for constraint 27 ***/

	J[11] = cvxnonsep_normcon30r_pd[26];
	J[82] = -1.;

   /*** derivatives for constraint 28 ***/

	J[12] = cvxnonsep_normcon30r_pd[27];
	J[84] = -1.;

   /*** derivatives for constraint 29 ***/

	J[13] = cvxnonsep_normcon30r_pd[28];
	J[86] = -1.;

   /*** derivatives for constraint 30 ***/

	J[14] = cvxnonsep_normcon30r_pd[29];
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
