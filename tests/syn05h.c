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
 fint syn05h_auxcom_[1] = { 3 /* nlc */ };
 fint syn05h_funcom_[176] = {
	42 /* nvar */,
	1 /* nobj */,
	58 /* ncon */,
	127 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	28,
	37,
	43,
	44,
	46,
	48,
	50,
	52,
	54,
	55,
	57,
	59,
	61,
	63,
	64,
	65,
	66,
	67,
	70,
	73,
	76,
	79,
	82,
	85,
	88,
	91,
	94,
	97,
	100,
	103,
	106,
	109,
	113,
	116,
	121,
	128,

	/* rownos */
	1,
	10,
	12,
	2,
	18,
	20,
	1,
	11,
	14,
	2,
	19,
	22,
	3,
	35,
	37,
	3,
	36,
	39,
	1,
	12,
	13,
	14,
	15,
	55,
	56,
	57,
	58,
	2,
	20,
	21,
	22,
	23,
	55,
	56,
	57,
	58,
	3,
	37,
	38,
	39,
	40,
	57,
	4,
	4,
	10,
	4,
	18,
	5,
	11,
	5,
	19,
	5,
	6,
	6,
	6,
	7,
	7,
	27,
	7,
	35,
	7,
	46,
	47,
	28,
	36,
	48,
	8,
	10,
	13,
	16,
	18,
	21,
	9,
	11,
	15,
	17,
	19,
	23,
	24,
	27,
	29,
	25,
	27,
	30,
	33,
	35,
	38,
	41,
	46,
	49,
	43,
	46,
	50,
	42,
	47,
	51,
	44,
	47,
	52,
	24,
	28,
	31,
	26,
	28,
	32,
	34,
	36,
	40,
	41,
	42,
	48,
	53,
	45,
	48,
	54,
	29,
	30,
	31,
	32,
	56,
	49,
	50,
	51,
	52,
	53,
	54,
	58 };

 real syn05h_boundc_[1+84+116] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		10.,
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
		7.,
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
		1.,
		0.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
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
		-1.7e308,
		0.,
		-1.7e308,
		10.,
		-1.7e308,
		0.,
		-1.7e308,
		2.39789527279837,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		10.,
		-1.7e308,
		0.,
		-1.7e308,
		2.87747432735804,
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
		-1.7e308,
		0.,
		-1.7e308,
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		2.15810574551853,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		2.03277599268042,
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
		-1.7e308,
		0.,
		-1.7e308,
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		7.,
		-1.7e308,
		0.,
		-1.7e308,
		3.5,
		1.,
		1.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308};

 real syn05h_x0comn_[42] = {
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

 static real syn05h_pd[23];
static real syn05h_old_x[42];
static int syn05h_xkind = -1;

 static int
syn05h_xcheck(real *x)
{
	real *x1 = syn05h_old_x, *xe = x + 42;
	errno = 0;
	if (syn05h_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn05h_xkind = 0;
	return 1;
	}
 real
syn05h_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn05h_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -5.*x[6];
	rv += -8.*x[7];
	rv += -10.*x[8];
	rv += 5.*x[15];
	rv += -2.*x[20];
	rv += 200.*x[21];
	rv += 250.*x[22];
	rv += 300.*x[23];
	rv += -6.*x[40];
	rv += -6.*x[41];
	;}

	if (wantfg & 2) {
	g[6] = -5.;
	g[7] = -8.;
	g[8] = -10.;
	g[15] = 5.;
	g[20] = -2.;
	g[21] = 200.;
	g[22] = 250.;
	g[23] = 300.;
	g[40] = -6.;
	g[41] = -6.;
	}

	return rv;
}

 void
syn05h_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (syn05h_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[6] + 1.e-06;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	syn05h_pd[0] = 1. / v[0];
	syn05h_pd[1] = -v[1] * syn05h_pd[0];
	v[0] = x[6] + 1.e-06;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = x[0] / v[0];
	syn05h_pd[2] = 1. / v[0];
	syn05h_pd[3] = -v[2] * syn05h_pd[2];
	v[0] = v[2] + 1.;
	v[2] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05h_pd[4] = 1. / v[0];
	syn05h_pd[6] = v[1] - v[2];
	syn05h_pd[5] = x[6] + 1.e-06;
	v[1] = syn05h_pd[6] * syn05h_pd[5];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = x[7] + 1.e-06;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	syn05h_pd[7] = 1. / v[0];
	syn05h_pd[8] = -v[1] * syn05h_pd[7];
	v[0] = x[7] + 1.e-06;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = x[1] / v[0];
	syn05h_pd[9] = 1. / v[0];
	syn05h_pd[10] = -v[2] * syn05h_pd[9];
	v[0] = v[2] + 1.;
	syn05h_pd[11] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05h_pd[12] = 1. / v[0];
	v[0] = -1.2 * syn05h_pd[11];
	syn05h_pd[14] = v[1] + v[0];
	syn05h_pd[13] = x[7] + 1.e-06;
	v[1] = syn05h_pd[14] * syn05h_pd[13];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = x[8] + 1.e-06;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[5] / v[0];
	syn05h_pd[15] = 1. / v[0];
	syn05h_pd[16] = -v[1] * syn05h_pd[15];
	v[0] = x[8] + 1.e-06;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = x[4] / v[0];
	syn05h_pd[17] = 1. / v[0];
	syn05h_pd[18] = -v[2] * syn05h_pd[17];
	v[0] = v[2] + 1.;
	syn05h_pd[19] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05h_pd[20] = 1. / v[0];
	v[0] = -1.5 * syn05h_pd[19];
	syn05h_pd[22] = v[1] + v[0];
	syn05h_pd[21] = x[8] + 1.e-06;
	v[1] = syn05h_pd[22] * syn05h_pd[21];
	c[2] = v[1];

  /***  constraint 4  ***/

	t1 = x[9];
	t1 += -x[10];
	t1 += -x[11];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += x[14];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[14];
	t1 += -x[15];
	t1 += -x[16];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[24];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[26];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[0];
	t1 += x[10];
	t1 += -x[24];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[2];
	t1 += x[12];
	t1 += -x[26];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[0];
	t1 += -10.*x[6];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 10.*x[6];
	t1 += x[24];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[2];
	t1 += -2.39789527279837*x[6];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 2.39789527279837*x[6];
	t1 += x[26];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[25];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[27];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[1];
	t1 += x[11];
	t1 += -x[25];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[3];
	t1 += x[13];
	t1 += -x[27];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[1];
	t1 += -10.*x[7];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = 10.*x[7];
	t1 += x[25];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[3];
	t1 += -2.87747432735804*x[7];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = 2.87747432735804*x[7];
	t1 += x[27];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -0.75*x[28];
	t1 += x[35];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[29];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[36];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[17];
	t1 += -x[28];
	t1 += -x[29];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[21];
	t1 += -x[35];
	t1 += -x[36];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[28];
	t1 += -2.87747432735804*x[40];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[29];
	t1 += 2.87747432735804*x[40];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[35];
	t1 += -2.15810574551853*x[40];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[36];
	t1 += 2.15810574551853*x[40];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[30];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[37];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[4];
	t1 += x[18];
	t1 += -x[30];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[5];
	t1 += x[22];
	t1 += -x[37];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[4];
	t1 += -2.87747432735804*x[8];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = 2.87747432735804*x[8];
	t1 += x[30];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[5];
	t1 += -2.03277599268042*x[8];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = 2.03277599268042*x[8];
	t1 += x[37];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[31];
	t1 += x[38];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -0.5*x[33];
	t1 += x[38];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[32];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[34];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[39];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[19];
	t1 += -x[31];
	t1 += -x[32];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[20];
	t1 += -x[33];
	t1 += -x[34];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[23];
	t1 += -x[38];
	t1 += -x[39];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[31];
	t1 += -2.87747432735804*x[41];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[32];
	t1 += 2.87747432735804*x[41];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[33];
	t1 += -7.*x[41];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[34];
	t1 += 7.*x[41];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[38];
	t1 += -3.5*x[41];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[39];
	t1 += 3.5*x[41];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[6];
	t1 += x[7];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += -x[40];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += -x[8];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += -x[41];
	c[57] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[18] = syn05h_pd[6];
	dv[0] = -syn05h_pd[5];
	dv[0] *= syn05h_pd[4];
	dv[1] = dv[0]*syn05h_pd[3];
	J[0] = dv[0]*syn05h_pd[2];
	J[18] += dv[1];
	dv[2] = syn05h_pd[5]*syn05h_pd[1];
	J[6] = syn05h_pd[5]*syn05h_pd[0];
	J[18] += dv[2];

   /*** derivatives for constraint 2 ***/

	J[27] = syn05h_pd[14];
	dv[0] = syn05h_pd[13];
	dv[0] = -dv[0]*1.2;
	dv[0] *= syn05h_pd[12];
	dv[1] = dv[0]*syn05h_pd[10];
	J[3] = dv[0]*syn05h_pd[9];
	J[27] += dv[1];
	dv[2] = syn05h_pd[13]*syn05h_pd[8];
	J[9] = syn05h_pd[13]*syn05h_pd[7];
	J[27] += dv[2];

   /*** derivatives for constraint 3 ***/

	J[36] = syn05h_pd[22];
	dv[0] = syn05h_pd[21];
	dv[0] = -dv[0]*1.5;
	dv[0] *= syn05h_pd[20];
	dv[1] = dv[0]*syn05h_pd[18];
	J[12] = dv[0]*syn05h_pd[17];
	J[36] += dv[1];
	dv[2] = syn05h_pd[21]*syn05h_pd[16];
	J[15] = syn05h_pd[21]*syn05h_pd[15];
	J[36] += dv[2];

   /*** derivatives for constraint 4 ***/

	J[42] = 1.;
	J[43] = -1.;
	J[45] = -1.;

   /*** derivatives for constraint 5 ***/

	J[47] = -1.;
	J[49] = -1.;
	J[51] = 1.;

   /*** derivatives for constraint 6 ***/

	J[52] = 1.;
	J[53] = -1.;
	J[54] = -1.;

   /*** derivatives for constraint 7 ***/

	J[55] = 1.;
	J[56] = -1.;
	J[58] = -1.;
	J[60] = -1.;

   /*** derivatives for constraint 8 ***/

	J[66] = 1.;

   /*** derivatives for constraint 9 ***/

	J[72] = 1.;

   /*** derivatives for constraint 10 ***/

	J[1] = -1.;
	J[44] = 1.;
	J[67] = -1.;

   /*** derivatives for constraint 11 ***/

	J[7] = -1.;
	J[48] = 1.;
	J[73] = -1.;

   /*** derivatives for constraint 12 ***/

	J[2] = 1.;
	J[19] = -10.;

   /*** derivatives for constraint 13 ***/

	J[20] = 10.;
	J[68] = 1.;

   /*** derivatives for constraint 14 ***/

	J[8] = 1.;
	J[21] = -2.39789527279837;

   /*** derivatives for constraint 15 ***/

	J[22] = 2.39789527279837;
	J[74] = 1.;

   /*** derivatives for constraint 16 ***/

	J[69] = 1.;

   /*** derivatives for constraint 17 ***/

	J[75] = 1.;

   /*** derivatives for constraint 18 ***/

	J[4] = -1.;
	J[46] = 1.;
	J[70] = -1.;

   /*** derivatives for constraint 19 ***/

	J[10] = -1.;
	J[50] = 1.;
	J[76] = -1.;

   /*** derivatives for constraint 20 ***/

	J[5] = 1.;
	J[28] = -10.;

   /*** derivatives for constraint 21 ***/

	J[29] = 10.;
	J[71] = 1.;

   /*** derivatives for constraint 22 ***/

	J[11] = 1.;
	J[30] = -2.87747432735804;

   /*** derivatives for constraint 23 ***/

	J[31] = 2.87747432735804;
	J[77] = 1.;

   /*** derivatives for constraint 24 ***/

	J[78] = -0.75;
	J[99] = 1.;

   /*** derivatives for constraint 25 ***/

	J[81] = 1.;

   /*** derivatives for constraint 26 ***/

	J[102] = 1.;

   /*** derivatives for constraint 27 ***/

	J[57] = 1.;
	J[79] = -1.;
	J[82] = -1.;

   /*** derivatives for constraint 28 ***/

	J[63] = 1.;
	J[100] = -1.;
	J[103] = -1.;

   /*** derivatives for constraint 29 ***/

	J[80] = 1.;
	J[115] = -2.87747432735804;

   /*** derivatives for constraint 30 ***/

	J[83] = 1.;
	J[116] = 2.87747432735804;

   /*** derivatives for constraint 31 ***/

	J[101] = 1.;
	J[117] = -2.15810574551853;

   /*** derivatives for constraint 32 ***/

	J[104] = 1.;
	J[118] = 2.15810574551853;

   /*** derivatives for constraint 33 ***/

	J[84] = 1.;

   /*** derivatives for constraint 34 ***/

	J[105] = 1.;

   /*** derivatives for constraint 35 ***/

	J[13] = -1.;
	J[59] = 1.;
	J[85] = -1.;

   /*** derivatives for constraint 36 ***/

	J[16] = -1.;
	J[64] = 1.;
	J[106] = -1.;

   /*** derivatives for constraint 37 ***/

	J[14] = 1.;
	J[37] = -2.87747432735804;

   /*** derivatives for constraint 38 ***/

	J[38] = 2.87747432735804;
	J[86] = 1.;

   /*** derivatives for constraint 39 ***/

	J[17] = 1.;
	J[39] = -2.03277599268042;

   /*** derivatives for constraint 40 ***/

	J[40] = 2.03277599268042;
	J[107] = 1.;

   /*** derivatives for constraint 41 ***/

	J[87] = -1.;
	J[108] = 1.;

   /*** derivatives for constraint 42 ***/

	J[93] = -0.5;
	J[109] = 1.;

   /*** derivatives for constraint 43 ***/

	J[90] = 1.;

   /*** derivatives for constraint 44 ***/

	J[96] = 1.;

   /*** derivatives for constraint 45 ***/

	J[112] = 1.;

   /*** derivatives for constraint 46 ***/

	J[61] = 1.;
	J[88] = -1.;
	J[91] = -1.;

   /*** derivatives for constraint 47 ***/

	J[62] = 1.;
	J[94] = -1.;
	J[97] = -1.;

   /*** derivatives for constraint 48 ***/

	J[65] = 1.;
	J[110] = -1.;
	J[113] = -1.;

   /*** derivatives for constraint 49 ***/

	J[89] = 1.;
	J[120] = -2.87747432735804;

   /*** derivatives for constraint 50 ***/

	J[92] = 1.;
	J[121] = 2.87747432735804;

   /*** derivatives for constraint 51 ***/

	J[95] = 1.;
	J[122] = -7.;

   /*** derivatives for constraint 52 ***/

	J[98] = 1.;
	J[123] = 7.;

   /*** derivatives for constraint 53 ***/

	J[111] = 1.;
	J[124] = -3.5;

   /*** derivatives for constraint 54 ***/

	J[114] = 1.;
	J[125] = 3.5;

   /*** derivatives for constraint 55 ***/

	J[23] = 1.;
	J[32] = 1.;

   /*** derivatives for constraint 56 ***/

	J[24] = 1.;
	J[33] = 1.;
	J[119] = -1.;

   /*** derivatives for constraint 57 ***/

	J[25] = 1.;
	J[34] = 1.;
	J[41] = -1.;

   /*** derivatives for constraint 58 ***/

	J[26] = 1.;
	J[35] = 1.;
	J[126] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
