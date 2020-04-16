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
 fint pointpack06_auxcom_[1] = { 15 /* nlc */ };
 fint pointpack06_funcom_[107] = {
	13 /* nvar */,
	1 /* nobj */,
	21 /* ncon */,
	87 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	7,
	14,
	21,
	28,
	35,
	41,
	47,
	53,
	58,
	63,
	68,
	73,
	88,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	17,
	1,
	6,
	7,
	8,
	9,
	17,
	18,
	2,
	6,
	10,
	11,
	12,
	18,
	19,
	3,
	7,
	10,
	13,
	14,
	19,
	20,
	4,
	8,
	11,
	13,
	15,
	20,
	21,
	5,
	9,
	12,
	14,
	15,
	21,
	1,
	2,
	3,
	4,
	5,
	16,
	1,
	6,
	7,
	8,
	9,
	16,
	2,
	6,
	10,
	11,
	12,
	3,
	7,
	10,
	13,
	14,
	4,
	8,
	11,
	13,
	15,
	5,
	9,
	12,
	14,
	15,
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
	15 };

 real pointpack06_boundc_[1+26+42] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		1.,
		0.5,
		1.,
		0.5,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
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
		0.};

 real pointpack06_x0comn_[13] = {
		0.5,
		0.5,
		0.5,
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

 static real pointpack06_pd[30];
static real pointpack06_old_x[13];
static int pointpack06_xkind = -1;

 static int
pointpack06_xcheck(real *x)
{
	real *x1 = pointpack06_old_x, *xe = x + 13;
	errno = 0;
	if (pointpack06_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pointpack06_xkind = 0;
	return 1;
	}
 real
pointpack06_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pointpack06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[12];
	;}

	if (wantfg & 2) {
	g[12] = 1.;
	}

	return rv;
}

 void
pointpack06_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (pointpack06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	pointpack06_pd[0] = 2. * x[0];
	v[0] = pointpack06_pd[0] * x[1];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	pointpack06_pd[1] = 2. * x[6];
	v[0] = pointpack06_pd[1] * x[7];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[7] * x[7];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	pointpack06_pd[2] = 2. * x[0];
	v[0] = pointpack06_pd[2] * x[2];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	pointpack06_pd[3] = 2. * x[6];
	v[0] = pointpack06_pd[3] * x[8];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[8] * x[8];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[1] = t1;

  /***  constraint 3  ***/

	pointpack06_pd[4] = 2. * x[0];
	v[0] = pointpack06_pd[4] * x[3];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	pointpack06_pd[5] = 2. * x[6];
	v[0] = pointpack06_pd[5] * x[9];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[9] * x[9];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[2] = t1;

  /***  constraint 4  ***/

	pointpack06_pd[6] = 2. * x[0];
	v[0] = pointpack06_pd[6] * x[4];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	pointpack06_pd[7] = 2. * x[6];
	v[0] = pointpack06_pd[7] * x[10];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[10] * x[10];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	pointpack06_pd[8] = 2. * x[0];
	v[0] = pointpack06_pd[8] * x[5];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	pointpack06_pd[9] = 2. * x[6];
	v[0] = pointpack06_pd[9] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[4] = t1;

  /***  constraint 6  ***/

	pointpack06_pd[10] = 2. * x[1];
	v[0] = pointpack06_pd[10] * x[2];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	pointpack06_pd[11] = 2. * x[7];
	v[0] = pointpack06_pd[11] * x[8];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[8] * x[8];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[5] = t1;

  /***  constraint 7  ***/

	pointpack06_pd[12] = 2. * x[1];
	v[0] = pointpack06_pd[12] * x[3];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	pointpack06_pd[13] = 2. * x[7];
	v[0] = pointpack06_pd[13] * x[9];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[9] * x[9];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	pointpack06_pd[14] = 2. * x[1];
	v[0] = pointpack06_pd[14] * x[4];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	pointpack06_pd[15] = 2. * x[7];
	v[0] = pointpack06_pd[15] * x[10];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[10] * x[10];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[7] = t1;

  /***  constraint 9  ***/

	pointpack06_pd[16] = 2. * x[1];
	v[0] = pointpack06_pd[16] * x[5];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	pointpack06_pd[17] = 2. * x[7];
	v[0] = pointpack06_pd[17] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	pointpack06_pd[18] = 2. * x[2];
	v[0] = pointpack06_pd[18] * x[3];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack06_pd[19] = 2. * x[8];
	v[0] = pointpack06_pd[19] * x[9];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[9] * x[9];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[9] = t1;

  /***  constraint 11  ***/

	pointpack06_pd[20] = 2. * x[2];
	v[0] = pointpack06_pd[20] * x[4];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack06_pd[21] = 2. * x[8];
	v[0] = pointpack06_pd[21] * x[10];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[10] * x[10];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[10] = t1;

  /***  constraint 12  ***/

	pointpack06_pd[22] = 2. * x[2];
	v[0] = pointpack06_pd[22] * x[5];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack06_pd[23] = 2. * x[8];
	v[0] = pointpack06_pd[23] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[11] = t1;

  /***  constraint 13  ***/

	pointpack06_pd[24] = 2. * x[3];
	v[0] = pointpack06_pd[24] * x[4];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	pointpack06_pd[25] = 2. * x[9];
	v[0] = pointpack06_pd[25] * x[10];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[10] * x[10];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	pointpack06_pd[26] = 2. * x[3];
	v[0] = pointpack06_pd[26] * x[5];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	pointpack06_pd[27] = 2. * x[9];
	v[0] = pointpack06_pd[27] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[13] = t1;

  /***  constraint 15  ***/

	pointpack06_pd[28] = 2. * x[4];
	v[0] = pointpack06_pd[28] * x[5];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack06_pd[29] = 2. * x[10];
	v[0] = pointpack06_pd[29] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[6];
	t1 += x[7];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[0];
	t1 += x[1];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[1];
	t1 += x[2];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[2];
	t1 += x[3];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[3];
	t1 += x[4];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[4];
	t1 += x[5];
	c[20] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[46] = -x[7];
	J[46] -= x[7];
	J[46] += pointpack06_pd[1];
	J[40] = x[7]*2.;
	J[40] -= x[6];
	J[40] -= x[6];
	J[6] = -x[1];
	J[6] -= x[1];
	J[0] = -x[0];
	J[0] -= x[0];
	J[6] += pointpack06_pd[0];
	J[0] += x[1]*2.;
	J[72] = 1.;

   /*** derivatives for constraint 2 ***/

	J[52] = -x[8];
	J[52] -= x[8];
	J[52] += pointpack06_pd[3];
	J[41] = x[8]*2.;
	J[41] -= x[6];
	J[41] -= x[6];
	J[13] = -x[2];
	J[13] -= x[2];
	J[1] = -x[0];
	J[1] -= x[0];
	J[13] += pointpack06_pd[2];
	J[1] += x[2]*2.;
	J[73] = 1.;

   /*** derivatives for constraint 3 ***/

	J[57] = -x[9];
	J[57] -= x[9];
	J[57] += pointpack06_pd[5];
	J[42] = x[9]*2.;
	J[42] -= x[6];
	J[42] -= x[6];
	J[20] = -x[3];
	J[20] -= x[3];
	J[2] = -x[0];
	J[2] -= x[0];
	J[20] += pointpack06_pd[4];
	J[2] += x[3]*2.;
	J[74] = 1.;

   /*** derivatives for constraint 4 ***/

	J[62] = -x[10];
	J[62] -= x[10];
	J[62] += pointpack06_pd[7];
	J[43] = x[10]*2.;
	J[43] -= x[6];
	J[43] -= x[6];
	J[27] = -x[4];
	J[27] -= x[4];
	J[3] = -x[0];
	J[3] -= x[0];
	J[27] += pointpack06_pd[6];
	J[3] += x[4]*2.;
	J[75] = 1.;

   /*** derivatives for constraint 5 ***/

	J[67] = -x[11];
	J[67] -= x[11];
	J[67] += pointpack06_pd[9];
	J[44] = x[11]*2.;
	J[44] -= x[6];
	J[44] -= x[6];
	J[34] = -x[5];
	J[34] -= x[5];
	J[4] = -x[0];
	J[4] -= x[0];
	J[34] += pointpack06_pd[8];
	J[4] += x[5]*2.;
	J[76] = 1.;

   /*** derivatives for constraint 6 ***/

	J[53] = -x[8];
	J[53] -= x[8];
	J[53] += pointpack06_pd[11];
	J[47] = x[8]*2.;
	J[47] -= x[7];
	J[47] -= x[7];
	J[14] = -x[2];
	J[14] -= x[2];
	J[7] = -x[1];
	J[7] -= x[1];
	J[14] += pointpack06_pd[10];
	J[7] += x[2]*2.;
	J[77] = 1.;

   /*** derivatives for constraint 7 ***/

	J[58] = -x[9];
	J[58] -= x[9];
	J[58] += pointpack06_pd[13];
	J[48] = x[9]*2.;
	J[48] -= x[7];
	J[48] -= x[7];
	J[21] = -x[3];
	J[21] -= x[3];
	J[8] = -x[1];
	J[8] -= x[1];
	J[21] += pointpack06_pd[12];
	J[8] += x[3]*2.;
	J[78] = 1.;

   /*** derivatives for constraint 8 ***/

	J[63] = -x[10];
	J[63] -= x[10];
	J[63] += pointpack06_pd[15];
	J[49] = x[10]*2.;
	J[49] -= x[7];
	J[49] -= x[7];
	J[28] = -x[4];
	J[28] -= x[4];
	J[9] = -x[1];
	J[9] -= x[1];
	J[28] += pointpack06_pd[14];
	J[9] += x[4]*2.;
	J[79] = 1.;

   /*** derivatives for constraint 9 ***/

	J[68] = -x[11];
	J[68] -= x[11];
	J[68] += pointpack06_pd[17];
	J[50] = x[11]*2.;
	J[50] -= x[7];
	J[50] -= x[7];
	J[35] = -x[5];
	J[35] -= x[5];
	J[10] = -x[1];
	J[10] -= x[1];
	J[35] += pointpack06_pd[16];
	J[10] += x[5]*2.;
	J[80] = 1.;

   /*** derivatives for constraint 10 ***/

	J[59] = -x[9];
	J[59] -= x[9];
	J[59] += pointpack06_pd[19];
	J[54] = x[9]*2.;
	J[54] -= x[8];
	J[54] -= x[8];
	J[22] = -x[3];
	J[22] -= x[3];
	J[15] = -x[2];
	J[15] -= x[2];
	J[22] += pointpack06_pd[18];
	J[15] += x[3]*2.;
	J[81] = 1.;

   /*** derivatives for constraint 11 ***/

	J[64] = -x[10];
	J[64] -= x[10];
	J[64] += pointpack06_pd[21];
	J[55] = x[10]*2.;
	J[55] -= x[8];
	J[55] -= x[8];
	J[29] = -x[4];
	J[29] -= x[4];
	J[16] = -x[2];
	J[16] -= x[2];
	J[29] += pointpack06_pd[20];
	J[16] += x[4]*2.;
	J[82] = 1.;

   /*** derivatives for constraint 12 ***/

	J[69] = -x[11];
	J[69] -= x[11];
	J[69] += pointpack06_pd[23];
	J[56] = x[11]*2.;
	J[56] -= x[8];
	J[56] -= x[8];
	J[36] = -x[5];
	J[36] -= x[5];
	J[17] = -x[2];
	J[17] -= x[2];
	J[36] += pointpack06_pd[22];
	J[17] += x[5]*2.;
	J[83] = 1.;

   /*** derivatives for constraint 13 ***/

	J[65] = -x[10];
	J[65] -= x[10];
	J[65] += pointpack06_pd[25];
	J[60] = x[10]*2.;
	J[60] -= x[9];
	J[60] -= x[9];
	J[30] = -x[4];
	J[30] -= x[4];
	J[23] = -x[3];
	J[23] -= x[3];
	J[30] += pointpack06_pd[24];
	J[23] += x[4]*2.;
	J[84] = 1.;

   /*** derivatives for constraint 14 ***/

	J[70] = -x[11];
	J[70] -= x[11];
	J[70] += pointpack06_pd[27];
	J[61] = x[11]*2.;
	J[61] -= x[9];
	J[61] -= x[9];
	J[37] = -x[5];
	J[37] -= x[5];
	J[24] = -x[3];
	J[24] -= x[3];
	J[37] += pointpack06_pd[26];
	J[24] += x[5]*2.;
	J[85] = 1.;

   /*** derivatives for constraint 15 ***/

	J[71] = -x[11];
	J[71] -= x[11];
	J[71] += pointpack06_pd[29];
	J[66] = x[11]*2.;
	J[66] -= x[10];
	J[66] -= x[10];
	J[38] = -x[5];
	J[38] -= x[5];
	J[31] = -x[4];
	J[31] -= x[4];
	J[38] += pointpack06_pd[28];
	J[31] += x[5]*2.;
	J[86] = 1.;

   /*** derivatives for constraint 16 ***/

	J[45] = -1.;
	J[51] = 1.;

   /*** derivatives for constraint 17 ***/

	J[5] = -1.;
	J[11] = 1.;

   /*** derivatives for constraint 18 ***/

	J[12] = -1.;
	J[18] = 1.;

   /*** derivatives for constraint 19 ***/

	J[19] = -1.;
	J[25] = 1.;

   /*** derivatives for constraint 20 ***/

	J[26] = -1.;
	J[32] = 1.;

   /*** derivatives for constraint 21 ***/

	J[33] = -1.;
	J[39] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
