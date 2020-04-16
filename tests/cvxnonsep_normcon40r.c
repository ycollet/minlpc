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
 fint cvxnonsep_normcon40r_auxcom_[1] = { 40 /* nlc */ };
 fint cvxnonsep_normcon40r_funcom_[207] = {
	80 /* nvar */,
	1 /* nobj */,
	41 /* ncon */,
	120 /* nzc */,
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
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
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
	93,
	95,
	97,
	99,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	119,
	121,

	/* rownos */
	1,
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
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
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
	1,
	41,
	2,
	41,
	3,
	41,
	4,
	41,
	5,
	41,
	6,
	41,
	7,
	41,
	8,
	41,
	9,
	41,
	10,
	41,
	11,
	41,
	12,
	41,
	13,
	41,
	14,
	41,
	15,
	41,
	16,
	41,
	17,
	41,
	18,
	41,
	19,
	41,
	20,
	41,
	21,
	41,
	22,
	41,
	23,
	41,
	24,
	41,
	25,
	41,
	26,
	41,
	27,
	41,
	28,
	41,
	29,
	41,
	30,
	41,
	31,
	41,
	32,
	41,
	33,
	41,
	34,
	41,
	35,
	41,
	36,
	41,
	37,
	41,
	38,
	41,
	39,
	41,
	40,
	41 };

 real cvxnonsep_normcon40r_boundc_[1+160+82] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
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

 real cvxnonsep_normcon40r_x0comn_[80] = {
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

 static real cvxnonsep_normcon40r_pd[40];
static real cvxnonsep_normcon40r_old_x[80];
static int cvxnonsep_normcon40r_xkind = -1;

 static int
cvxnonsep_normcon40r_xcheck(real *x)
{
	real *x1 = cvxnonsep_normcon40r_old_x, *xe = x + 80;
	errno = 0;
	if (cvxnonsep_normcon40r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_normcon40r_xkind = 0;
	return 1;
	}
 real
cvxnonsep_normcon40r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon40r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -0.91*x[0];
	rv += -0.88*x[1];
	rv += -0.82*x[2];
	rv += -0.26*x[3];
	rv += -0.02*x[4];
	rv += -0.43*x[5];
	rv += -0.31*x[6];
	rv += -0.59*x[7];
	rv += -0.16*x[8];
	rv += -0.18*x[9];
	rv += -0.42*x[10];
	rv += -0.09*x[11];
	rv += -0.6*x[12];
	rv += -0.47*x[13];
	rv += -0.7*x[14];
	rv += -0.7*x[15];
	rv += -0.64*x[16];
	rv += -0.03*x[17];
	rv += -0.07*x[18];
	rv += -0.32*x[19];
	rv += -0.64*x[20];
	rv += -0.38*x[21];
	rv += -0.19*x[22];
	rv += -0.43*x[23];
	rv += -0.48*x[24];
	rv += -0.12*x[25];
	rv += -0.59*x[26];
	rv += -0.23*x[27];
	rv += -0.38*x[28];
	rv += -0.85*x[29];
	rv += -0.25*x[30];
	rv += -0.29*x[31];
	rv += -0.62*x[32];
	rv += -0.82*x[33];
	rv += -0.27*x[34];
	rv += -0.98*x[35];
	rv += -0.73*x[36];
	rv += -0.34*x[37];
	rv += -0.58*x[38];
	rv += -0.11*x[39];
	;}

	if (wantfg & 2) {
	g[0] = -0.91;
	g[1] = -0.88;
	g[2] = -0.82;
	g[3] = -0.26;
	g[4] = -0.02;
	g[5] = -0.43;
	g[6] = -0.31;
	g[7] = -0.59;
	g[8] = -0.16;
	g[9] = -0.18;
	g[10] = -0.42;
	g[11] = -0.09;
	g[12] = -0.6;
	g[13] = -0.47;
	g[14] = -0.7;
	g[15] = -0.7;
	g[16] = -0.64;
	g[17] = -0.03;
	g[18] = -0.07;
	g[19] = -0.32;
	g[20] = -0.64;
	g[21] = -0.38;
	g[22] = -0.19;
	g[23] = -0.43;
	g[24] = -0.48;
	g[25] = -0.12;
	g[26] = -0.59;
	g[27] = -0.23;
	g[28] = -0.38;
	g[29] = -0.85;
	g[30] = -0.25;
	g[31] = -0.29;
	g[32] = -0.62;
	g[33] = -0.82;
	g[34] = -0.27;
	g[35] = -0.98;
	g[36] = -0.73;
	g[37] = -0.34;
	g[38] = -0.58;
	g[39] = -0.11;
	}

	return rv;
}

 void
cvxnonsep_normcon40r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon40r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[20] * x[20];
	cvxnonsep_normcon40r_pd[0] = x[20] + x[20];
	t1 = v[0] + -x[40];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[21] * x[21];
	cvxnonsep_normcon40r_pd[1] = x[21] + x[21];
	t1 = v[0] + -x[41];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[22] * x[22];
	cvxnonsep_normcon40r_pd[2] = x[22] + x[22];
	t1 = v[0] + -x[42];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[23] * x[23];
	cvxnonsep_normcon40r_pd[3] = x[23] + x[23];
	t1 = v[0] + -x[43];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[24] * x[24];
	cvxnonsep_normcon40r_pd[4] = x[24] + x[24];
	t1 = v[0] + -x[44];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[25] * x[25];
	cvxnonsep_normcon40r_pd[5] = x[25] + x[25];
	t1 = v[0] + -x[45];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[26] * x[26];
	cvxnonsep_normcon40r_pd[6] = x[26] + x[26];
	t1 = v[0] + -x[46];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[27] * x[27];
	cvxnonsep_normcon40r_pd[7] = x[27] + x[27];
	t1 = v[0] + -x[47];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[28] * x[28];
	cvxnonsep_normcon40r_pd[8] = x[28] + x[28];
	t1 = v[0] + -x[48];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[29] * x[29];
	cvxnonsep_normcon40r_pd[9] = x[29] + x[29];
	t1 = v[0] + -x[49];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[30] * x[30];
	cvxnonsep_normcon40r_pd[10] = x[30] + x[30];
	t1 = v[0] + -x[50];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[31] * x[31];
	cvxnonsep_normcon40r_pd[11] = x[31] + x[31];
	t1 = v[0] + -x[51];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[32] * x[32];
	cvxnonsep_normcon40r_pd[12] = x[32] + x[32];
	t1 = v[0] + -x[52];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[33] * x[33];
	cvxnonsep_normcon40r_pd[13] = x[33] + x[33];
	t1 = v[0] + -x[53];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[34] * x[34];
	cvxnonsep_normcon40r_pd[14] = x[34] + x[34];
	t1 = v[0] + -x[54];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[35] * x[35];
	cvxnonsep_normcon40r_pd[15] = x[35] + x[35];
	t1 = v[0] + -x[55];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[36] * x[36];
	cvxnonsep_normcon40r_pd[16] = x[36] + x[36];
	t1 = v[0] + -x[56];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[37] * x[37];
	cvxnonsep_normcon40r_pd[17] = x[37] + x[37];
	t1 = v[0] + -x[57];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[38] * x[38];
	cvxnonsep_normcon40r_pd[18] = x[38] + x[38];
	t1 = v[0] + -x[58];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[39] * x[39];
	cvxnonsep_normcon40r_pd[19] = x[39] + x[39];
	t1 = v[0] + -x[59];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[0] * x[0];
	cvxnonsep_normcon40r_pd[20] = x[0] + x[0];
	t1 = v[0] + -x[60];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[1] * x[1];
	cvxnonsep_normcon40r_pd[21] = x[1] + x[1];
	t1 = v[0] + -x[61];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[2] * x[2];
	cvxnonsep_normcon40r_pd[22] = x[2] + x[2];
	t1 = v[0] + -x[62];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[3] * x[3];
	cvxnonsep_normcon40r_pd[23] = x[3] + x[3];
	t1 = v[0] + -x[63];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[4] * x[4];
	cvxnonsep_normcon40r_pd[24] = x[4] + x[4];
	t1 = v[0] + -x[64];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[5] * x[5];
	cvxnonsep_normcon40r_pd[25] = x[5] + x[5];
	t1 = v[0] + -x[65];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[6] * x[6];
	cvxnonsep_normcon40r_pd[26] = x[6] + x[6];
	t1 = v[0] + -x[66];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[7] * x[7];
	cvxnonsep_normcon40r_pd[27] = x[7] + x[7];
	t1 = v[0] + -x[67];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[8] * x[8];
	cvxnonsep_normcon40r_pd[28] = x[8] + x[8];
	t1 = v[0] + -x[68];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[9] * x[9];
	cvxnonsep_normcon40r_pd[29] = x[9] + x[9];
	t1 = v[0] + -x[69];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[10] * x[10];
	cvxnonsep_normcon40r_pd[30] = x[10] + x[10];
	t1 = v[0] + -x[70];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[11] * x[11];
	cvxnonsep_normcon40r_pd[31] = x[11] + x[11];
	t1 = v[0] + -x[71];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[12] * x[12];
	cvxnonsep_normcon40r_pd[32] = x[12] + x[12];
	t1 = v[0] + -x[72];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[13] * x[13];
	cvxnonsep_normcon40r_pd[33] = x[13] + x[13];
	t1 = v[0] + -x[73];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[14] * x[14];
	cvxnonsep_normcon40r_pd[34] = x[14] + x[14];
	t1 = v[0] + -x[74];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[15] * x[15];
	cvxnonsep_normcon40r_pd[35] = x[15] + x[15];
	t1 = v[0] + -x[75];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[16] * x[16];
	cvxnonsep_normcon40r_pd[36] = x[16] + x[16];
	t1 = v[0] + -x[76];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[17] * x[17];
	cvxnonsep_normcon40r_pd[37] = x[17] + x[17];
	t1 = v[0] + -x[77];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[18] * x[18];
	cvxnonsep_normcon40r_pd[38] = x[18] + x[18];
	t1 = v[0] + -x[78];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[19] * x[19];
	cvxnonsep_normcon40r_pd[39] = x[19] + x[19];
	t1 = v[0] + -x[79];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[40];
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
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	t1 += x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[40] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[20] = cvxnonsep_normcon40r_pd[0];
	J[40] = -1.;

   /*** derivatives for constraint 2 ***/

	J[21] = cvxnonsep_normcon40r_pd[1];
	J[42] = -1.;

   /*** derivatives for constraint 3 ***/

	J[22] = cvxnonsep_normcon40r_pd[2];
	J[44] = -1.;

   /*** derivatives for constraint 4 ***/

	J[23] = cvxnonsep_normcon40r_pd[3];
	J[46] = -1.;

   /*** derivatives for constraint 5 ***/

	J[24] = cvxnonsep_normcon40r_pd[4];
	J[48] = -1.;

   /*** derivatives for constraint 6 ***/

	J[25] = cvxnonsep_normcon40r_pd[5];
	J[50] = -1.;

   /*** derivatives for constraint 7 ***/

	J[26] = cvxnonsep_normcon40r_pd[6];
	J[52] = -1.;

   /*** derivatives for constraint 8 ***/

	J[27] = cvxnonsep_normcon40r_pd[7];
	J[54] = -1.;

   /*** derivatives for constraint 9 ***/

	J[28] = cvxnonsep_normcon40r_pd[8];
	J[56] = -1.;

   /*** derivatives for constraint 10 ***/

	J[29] = cvxnonsep_normcon40r_pd[9];
	J[58] = -1.;

   /*** derivatives for constraint 11 ***/

	J[30] = cvxnonsep_normcon40r_pd[10];
	J[60] = -1.;

   /*** derivatives for constraint 12 ***/

	J[31] = cvxnonsep_normcon40r_pd[11];
	J[62] = -1.;

   /*** derivatives for constraint 13 ***/

	J[32] = cvxnonsep_normcon40r_pd[12];
	J[64] = -1.;

   /*** derivatives for constraint 14 ***/

	J[33] = cvxnonsep_normcon40r_pd[13];
	J[66] = -1.;

   /*** derivatives for constraint 15 ***/

	J[34] = cvxnonsep_normcon40r_pd[14];
	J[68] = -1.;

   /*** derivatives for constraint 16 ***/

	J[35] = cvxnonsep_normcon40r_pd[15];
	J[70] = -1.;

   /*** derivatives for constraint 17 ***/

	J[36] = cvxnonsep_normcon40r_pd[16];
	J[72] = -1.;

   /*** derivatives for constraint 18 ***/

	J[37] = cvxnonsep_normcon40r_pd[17];
	J[74] = -1.;

   /*** derivatives for constraint 19 ***/

	J[38] = cvxnonsep_normcon40r_pd[18];
	J[76] = -1.;

   /*** derivatives for constraint 20 ***/

	J[39] = cvxnonsep_normcon40r_pd[19];
	J[78] = -1.;

   /*** derivatives for constraint 21 ***/

	J[0] = cvxnonsep_normcon40r_pd[20];
	J[80] = -1.;

   /*** derivatives for constraint 22 ***/

	J[1] = cvxnonsep_normcon40r_pd[21];
	J[82] = -1.;

   /*** derivatives for constraint 23 ***/

	J[2] = cvxnonsep_normcon40r_pd[22];
	J[84] = -1.;

   /*** derivatives for constraint 24 ***/

	J[3] = cvxnonsep_normcon40r_pd[23];
	J[86] = -1.;

   /*** derivatives for constraint 25 ***/

	J[4] = cvxnonsep_normcon40r_pd[24];
	J[88] = -1.;

   /*** derivatives for constraint 26 ***/

	J[5] = cvxnonsep_normcon40r_pd[25];
	J[90] = -1.;

   /*** derivatives for constraint 27 ***/

	J[6] = cvxnonsep_normcon40r_pd[26];
	J[92] = -1.;

   /*** derivatives for constraint 28 ***/

	J[7] = cvxnonsep_normcon40r_pd[27];
	J[94] = -1.;

   /*** derivatives for constraint 29 ***/

	J[8] = cvxnonsep_normcon40r_pd[28];
	J[96] = -1.;

   /*** derivatives for constraint 30 ***/

	J[9] = cvxnonsep_normcon40r_pd[29];
	J[98] = -1.;

   /*** derivatives for constraint 31 ***/

	J[10] = cvxnonsep_normcon40r_pd[30];
	J[100] = -1.;

   /*** derivatives for constraint 32 ***/

	J[11] = cvxnonsep_normcon40r_pd[31];
	J[102] = -1.;

   /*** derivatives for constraint 33 ***/

	J[12] = cvxnonsep_normcon40r_pd[32];
	J[104] = -1.;

   /*** derivatives for constraint 34 ***/

	J[13] = cvxnonsep_normcon40r_pd[33];
	J[106] = -1.;

   /*** derivatives for constraint 35 ***/

	J[14] = cvxnonsep_normcon40r_pd[34];
	J[108] = -1.;

   /*** derivatives for constraint 36 ***/

	J[15] = cvxnonsep_normcon40r_pd[35];
	J[110] = -1.;

   /*** derivatives for constraint 37 ***/

	J[16] = cvxnonsep_normcon40r_pd[36];
	J[112] = -1.;

   /*** derivatives for constraint 38 ***/

	J[17] = cvxnonsep_normcon40r_pd[37];
	J[114] = -1.;

   /*** derivatives for constraint 39 ***/

	J[18] = cvxnonsep_normcon40r_pd[38];
	J[116] = -1.;

   /*** derivatives for constraint 40 ***/

	J[19] = cvxnonsep_normcon40r_pd[39];
	J[118] = -1.;

   /*** derivatives for constraint 41 ***/

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
	J[91] = 1.;
	J[93] = 1.;
	J[95] = 1.;
	J[97] = 1.;
	J[99] = 1.;
	J[101] = 1.;
	J[103] = 1.;
	J[105] = 1.;
	J[107] = 1.;
	J[109] = 1.;
	J[111] = 1.;
	J[113] = 1.;
	J[115] = 1.;
	J[117] = 1.;
	J[119] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
