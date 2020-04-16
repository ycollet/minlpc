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
 fint linear_auxcom_[1] = { 0 /* nlc */ };
 fint linear_funcom_[131] = {
	24 /* nvar */,
	1 /* nobj */,
	20 /* ncon */,
	100 /* nzc */,
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
	41,
	61,
	81,
	101,

	/* rownos */
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
	20 };

 real linear_boundc_[1+48+40] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-100.,
		100.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		99.,
		99.,
		93.,
		93.,
		99.,
		99.,
		97.,
		97.,
		90.,
		90.,
		96.,
		96.,
		93.,
		93.,
		130.,
		130.,
		118.,
		118.,
		88.,
		88.,
		89.,
		89.,
		93.,
		93.,
		94.,
		94.,
		75.,
		75.,
		84.,
		84.,
		91.,
		91.,
		100.,
		100.,
		98.,
		98.,
		101.,
		101.,
		80.,
		80.};

 real linear_x0comn_[24] = {
		0.,
		0.,
		-92.,
		-94.,
		0.,
		-94.,
		-96.,
		-83.,
		-90.,
		-93.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-84.,
		-83.,
		-92.,
		0.,
		1.,
		1.,
		1.,
		1. };

 static real linear_pd[20];
static real linear_old_x[24];
static int linear_xkind = -1;

 static int
linear_xcheck(real *x)
{
	real *x1 = linear_old_x, *xe = x + 24;
	errno = 0;
	if (linear_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	linear_xkind = 0;
	return 1;
	}
 real
linear_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (linear_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	if (x[0] < 0.) {
	v[0] = -x[0];
	linear_pd[0] = -1.;
	} else {
	v[0] = x[0];
	linear_pd[0] = 1.;
	}
	if (x[1] < 0.) {
	v[1] = -x[1];
	linear_pd[1] = -1.;
	} else {
	v[1] = x[1];
	linear_pd[1] = 1.;
	}
	v[0] += v[1];
	if (x[2] < 0.) {
	v[1] = -x[2];
	linear_pd[2] = -1.;
	} else {
	v[1] = x[2];
	linear_pd[2] = 1.;
	}
	v[0] += v[1];
	if (x[3] < 0.) {
	v[1] = -x[3];
	linear_pd[3] = -1.;
	} else {
	v[1] = x[3];
	linear_pd[3] = 1.;
	}
	v[0] += v[1];
	if (x[4] < 0.) {
	v[1] = -x[4];
	linear_pd[4] = -1.;
	} else {
	v[1] = x[4];
	linear_pd[4] = 1.;
	}
	v[0] += v[1];
	if (x[5] < 0.) {
	v[1] = -x[5];
	linear_pd[5] = -1.;
	} else {
	v[1] = x[5];
	linear_pd[5] = 1.;
	}
	v[0] += v[1];
	if (x[6] < 0.) {
	v[1] = -x[6];
	linear_pd[6] = -1.;
	} else {
	v[1] = x[6];
	linear_pd[6] = 1.;
	}
	v[0] += v[1];
	if (x[7] < 0.) {
	v[1] = -x[7];
	linear_pd[7] = -1.;
	} else {
	v[1] = x[7];
	linear_pd[7] = 1.;
	}
	v[0] += v[1];
	if (x[8] < 0.) {
	v[1] = -x[8];
	linear_pd[8] = -1.;
	} else {
	v[1] = x[8];
	linear_pd[8] = 1.;
	}
	v[0] += v[1];
	if (x[9] < 0.) {
	v[1] = -x[9];
	linear_pd[9] = -1.;
	} else {
	v[1] = x[9];
	linear_pd[9] = 1.;
	}
	v[0] += v[1];
	if (x[10] < 0.) {
	v[1] = -x[10];
	linear_pd[10] = -1.;
	} else {
	v[1] = x[10];
	linear_pd[10] = 1.;
	}
	v[0] += v[1];
	if (x[11] < 0.) {
	v[1] = -x[11];
	linear_pd[11] = -1.;
	} else {
	v[1] = x[11];
	linear_pd[11] = 1.;
	}
	v[0] += v[1];
	if (x[12] < 0.) {
	v[1] = -x[12];
	linear_pd[12] = -1.;
	} else {
	v[1] = x[12];
	linear_pd[12] = 1.;
	}
	v[0] += v[1];
	if (x[13] < 0.) {
	v[1] = -x[13];
	linear_pd[13] = -1.;
	} else {
	v[1] = x[13];
	linear_pd[13] = 1.;
	}
	v[0] += v[1];
	if (x[14] < 0.) {
	v[1] = -x[14];
	linear_pd[14] = -1.;
	} else {
	v[1] = x[14];
	linear_pd[14] = 1.;
	}
	v[0] += v[1];
	if (x[15] < 0.) {
	v[1] = -x[15];
	linear_pd[15] = -1.;
	} else {
	v[1] = x[15];
	linear_pd[15] = 1.;
	}
	v[0] += v[1];
	if (x[16] < 0.) {
	v[1] = -x[16];
	linear_pd[16] = -1.;
	} else {
	v[1] = x[16];
	linear_pd[16] = 1.;
	}
	v[0] += v[1];
	if (x[17] < 0.) {
	v[1] = -x[17];
	linear_pd[17] = -1.;
	} else {
	v[1] = x[17];
	linear_pd[17] = 1.;
	}
	v[0] += v[1];
	if (x[18] < 0.) {
	v[1] = -x[18];
	linear_pd[18] = -1.;
	} else {
	v[1] = x[18];
	linear_pd[18] = 1.;
	}
	v[0] += v[1];
	if (x[19] < 0.) {
	v[1] = -x[19];
	linear_pd[19] = -1.;
	} else {
	v[1] = x[19];
	linear_pd[19] = 1.;
	}
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[19] = linear_pd[19];
	g[18] = linear_pd[18];
	g[17] = linear_pd[17];
	g[16] = linear_pd[16];
	g[15] = linear_pd[15];
	g[14] = linear_pd[14];
	g[13] = linear_pd[13];
	g[12] = linear_pd[12];
	g[11] = linear_pd[11];
	g[10] = linear_pd[10];
	g[9] = linear_pd[9];
	g[8] = linear_pd[8];
	g[7] = linear_pd[7];
	g[6] = linear_pd[6];
	g[5] = linear_pd[5];
	g[4] = linear_pd[4];
	g[3] = linear_pd[3];
	g[2] = linear_pd[2];
	g[1] = linear_pd[1];
	g[0] = linear_pd[0];
	}

	return v[0];
}

 void
linear_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (linear_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[20];
	t1 += 85.*x[21];
	t1 += 76.*x[22];
	t1 += 44.*x[23];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	t1 += x[20];
	t1 += 82.*x[21];
	t1 += 78.*x[22];
	t1 += 42.*x[23];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	t1 += x[20];
	t1 += 75.*x[21];
	t1 += 73.*x[22];
	t1 += 42.*x[23];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[3];
	t1 += x[20];
	t1 += 74.*x[21];
	t1 += 72.*x[22];
	t1 += 44.*x[23];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[4];
	t1 += x[20];
	t1 += 76.*x[21];
	t1 += 73.*x[22];
	t1 += 43.*x[23];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[5];
	t1 += x[20];
	t1 += 74.*x[21];
	t1 += 69.*x[22];
	t1 += 46.*x[23];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[6];
	t1 += x[20];
	t1 += 73.*x[21];
	t1 += 69.*x[22];
	t1 += 46.*x[23];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[7];
	t1 += x[20];
	t1 += 96.*x[21];
	t1 += 80.*x[22];
	t1 += 36.*x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[8];
	t1 += x[20];
	t1 += 93.*x[21];
	t1 += 78.*x[22];
	t1 += 36.*x[23];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[9];
	t1 += x[20];
	t1 += 70.*x[21];
	t1 += 73.*x[22];
	t1 += 37.*x[23];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[10];
	t1 += x[20];
	t1 += 82.*x[21];
	t1 += 71.*x[22];
	t1 += 46.*x[23];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[11];
	t1 += x[20];
	t1 += 80.*x[21];
	t1 += 72.*x[22];
	t1 += 45.*x[23];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[12];
	t1 += x[20];
	t1 += 77.*x[21];
	t1 += 76.*x[22];
	t1 += 42.*x[23];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[13];
	t1 += x[20];
	t1 += 67.*x[21];
	t1 += 76.*x[22];
	t1 += 50.*x[23];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[14];
	t1 += x[20];
	t1 += 82.*x[21];
	t1 += 70.*x[22];
	t1 += 48.*x[23];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[15];
	t1 += x[20];
	t1 += 76.*x[21];
	t1 += 76.*x[22];
	t1 += 41.*x[23];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[16];
	t1 += x[20];
	t1 += 74.*x[21];
	t1 += 78.*x[22];
	t1 += 31.*x[23];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[17];
	t1 += x[20];
	t1 += 71.*x[21];
	t1 += 80.*x[22];
	t1 += 29.*x[23];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[18];
	t1 += x[20];
	t1 += 70.*x[21];
	t1 += 83.*x[22];
	t1 += 39.*x[23];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[19];
	t1 += x[20];
	t1 += 64.*x[21];
	t1 += 79.*x[22];
	t1 += 38.*x[23];
	c[19] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[20] = 1.;
	J[40] = 85.;
	J[60] = 76.;
	J[80] = 44.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[21] = 1.;
	J[41] = 82.;
	J[61] = 78.;
	J[81] = 42.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[22] = 1.;
	J[42] = 75.;
	J[62] = 73.;
	J[82] = 42.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;
	J[23] = 1.;
	J[43] = 74.;
	J[63] = 72.;
	J[83] = 44.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	J[24] = 1.;
	J[44] = 76.;
	J[64] = 73.;
	J[84] = 43.;

   /*** derivatives for constraint 6 ***/

	J[5] = 1.;
	J[25] = 1.;
	J[45] = 74.;
	J[65] = 69.;
	J[85] = 46.;

   /*** derivatives for constraint 7 ***/

	J[6] = 1.;
	J[26] = 1.;
	J[46] = 73.;
	J[66] = 69.;
	J[86] = 46.;

   /*** derivatives for constraint 8 ***/

	J[7] = 1.;
	J[27] = 1.;
	J[47] = 96.;
	J[67] = 80.;
	J[87] = 36.;

   /*** derivatives for constraint 9 ***/

	J[8] = 1.;
	J[28] = 1.;
	J[48] = 93.;
	J[68] = 78.;
	J[88] = 36.;

   /*** derivatives for constraint 10 ***/

	J[9] = 1.;
	J[29] = 1.;
	J[49] = 70.;
	J[69] = 73.;
	J[89] = 37.;

   /*** derivatives for constraint 11 ***/

	J[10] = 1.;
	J[30] = 1.;
	J[50] = 82.;
	J[70] = 71.;
	J[90] = 46.;

   /*** derivatives for constraint 12 ***/

	J[11] = 1.;
	J[31] = 1.;
	J[51] = 80.;
	J[71] = 72.;
	J[91] = 45.;

   /*** derivatives for constraint 13 ***/

	J[12] = 1.;
	J[32] = 1.;
	J[52] = 77.;
	J[72] = 76.;
	J[92] = 42.;

   /*** derivatives for constraint 14 ***/

	J[13] = 1.;
	J[33] = 1.;
	J[53] = 67.;
	J[73] = 76.;
	J[93] = 50.;

   /*** derivatives for constraint 15 ***/

	J[14] = 1.;
	J[34] = 1.;
	J[54] = 82.;
	J[74] = 70.;
	J[94] = 48.;

   /*** derivatives for constraint 16 ***/

	J[15] = 1.;
	J[35] = 1.;
	J[55] = 76.;
	J[75] = 76.;
	J[95] = 41.;

   /*** derivatives for constraint 17 ***/

	J[16] = 1.;
	J[36] = 1.;
	J[56] = 74.;
	J[76] = 78.;
	J[96] = 31.;

   /*** derivatives for constraint 18 ***/

	J[17] = 1.;
	J[37] = 1.;
	J[57] = 71.;
	J[77] = 80.;
	J[97] = 29.;

   /*** derivatives for constraint 19 ***/

	J[18] = 1.;
	J[38] = 1.;
	J[58] = 70.;
	J[78] = 83.;
	J[98] = 39.;

   /*** derivatives for constraint 20 ***/

	J[19] = 1.;
	J[39] = 1.;
	J[59] = 64.;
	J[79] = 79.;
	J[99] = 38.;
	}
}
#ifdef __cplusplus
	}
#endif
