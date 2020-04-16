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
 fint ex14_1_6_auxcom_[1] = { 14 /* nlc */ };
 fint ex14_1_6_funcom_[76] = {
	9 /* nvar */,
	1 /* nobj */,
	15 /* ncon */,
	60 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	10,
	19,
	25,
	31,
	33,
	37,
	43,
	47,
	61,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	15,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	15,
	1,
	2,
	3,
	4,
	9,
	10,
	1,
	2,
	3,
	4,
	9,
	10,
	11,
	12,
	5,
	6,
	11,
	12,
	1,
	2,
	3,
	4,
	13,
	14,
	5,
	6,
	13,
	14,
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
	14 };

 real ex14_1_6_boundc_[1+18+30] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.3571,
		-1.7e308,
		-0.3571,
		-1.7e308,
		0.6022,
		-1.7e308,
		-0.6022,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		-1.,
		-1.7e308,
		1.,
		-1.7e308,
		-1.,
		-1.7e308,
		1.,
		-1.7e308,
		-1.,
		-1.7e308,
		1.,
		-1.7e308,
		-1.,
		-0.3461,
		-0.3461};

 real ex14_1_6_x0comn_[9] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex14_1_6_pd[24];
static real ex14_1_6_old_x[9];
static int ex14_1_6_xkind = -1;

 static int
ex14_1_6_xcheck(real *x)
{
	real *x1 = ex14_1_6_old_x, *xe = x + 9;
	errno = 0;
	if (ex14_1_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_1_6_xkind = 0;
	return 1;
	}
 real
ex14_1_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_1_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[8];
	;}

	if (wantfg & 2) {
	g[8] = 1.;
	}

	return rv;
}

 void
ex14_1_6_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex14_1_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex14_1_6_pd[0] = 0.004731 * x[0];
	v[0] = ex14_1_6_pd[0] * x[2];
	ex14_1_6_pd[1] = 0.3578 * x[1];
	v[1] = ex14_1_6_pd[1] * x[2];
	v[2] = v[0] - v[1];
	t1 = v[2] + -0.1238*x[0];
	t1 += -0.001637*x[1];
	t1 += -0.9338*x[3];
	t1 += x[6];
	t1 += -x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	ex14_1_6_pd[2] = 0.3578 * x[1];
	v[0] = ex14_1_6_pd[2] * x[2];
	ex14_1_6_pd[3] = 0.004731 * x[0];
	v[1] = ex14_1_6_pd[3] * x[2];
	v[2] = v[0] - v[1];
	t1 = v[2] + 0.1238*x[0];
	t1 += 0.001637*x[1];
	t1 += 0.9338*x[3];
	t1 += -x[6];
	t1 += -x[8];
	c[1] = t1;

  /***  constraint 3  ***/

	ex14_1_6_pd[4] = 0.2238 * x[0];
	v[0] = ex14_1_6_pd[4] * x[2];
	ex14_1_6_pd[5] = 0.7623 * x[1];
	v[1] = ex14_1_6_pd[5] * x[2];
	v[2] = v[0] + v[1];
	t1 = v[2] + 0.2638*x[0];
	t1 += -0.07745*x[1];
	t1 += -0.6734*x[3];
	t1 += -x[6];
	t1 += -x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	ex14_1_6_pd[6] = -0.2238 * x[0];
	v[0] = ex14_1_6_pd[6] * x[2];
	ex14_1_6_pd[7] = 0.7623 * x[1];
	v[1] = ex14_1_6_pd[7] * x[2];
	v[2] = v[0] - v[1];
	t1 = v[2] + -0.2638*x[0];
	t1 += 0.07745*x[1];
	t1 += 0.6734*x[3];
	t1 += x[6];
	t1 += -x[8];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[5] * x[7];
	t1 = v[0] + 0.3578*x[0];
	t1 += 0.004731*x[1];
	t1 += -x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[5] * x[7];
	v[1] = -v[0];
	t1 = v[1] + -0.3578*x[0];
	t1 += -0.004731*x[1];
	t1 += -x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[0] * x[0];
	ex14_1_6_pd[8] = x[0] + x[0];
	v[1] = x[1] * x[1];
	ex14_1_6_pd[9] = x[1] + x[1];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[8];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[1] * x[1];
	ex14_1_6_pd[10] = x[1] + x[1];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	ex14_1_6_pd[11] = x[0] + x[0];
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[8];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] * x[2];
	ex14_1_6_pd[12] = x[2] + x[2];
	v[1] = x[3] * x[3];
	ex14_1_6_pd[13] = x[3] + x[3];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[3] * x[3];
	ex14_1_6_pd[14] = x[3] + x[3];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	ex14_1_6_pd[15] = x[2] + x[2];
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[8];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[4] * x[4];
	ex14_1_6_pd[16] = x[4] + x[4];
	v[1] = x[5] * x[5];
	ex14_1_6_pd[17] = x[5] + x[5];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[8];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[5] * x[5];
	ex14_1_6_pd[18] = x[5] + x[5];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	ex14_1_6_pd[19] = x[4] + x[4];
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[8];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[6] * x[6];
	ex14_1_6_pd[20] = x[6] + x[6];
	v[1] = x[7] * x[7];
	ex14_1_6_pd[21] = x[7] + x[7];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[8];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[7] * x[7];
	ex14_1_6_pd[22] = x[7] + x[7];
	v[1] = -v[0];
	v[0] = x[6] * x[6];
	ex14_1_6_pd[23] = x[6] + x[6];
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[8];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -0.7623*x[0];
	t1 += 0.2238*x[1];
	c[14] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[18] = -ex14_1_6_pd[1];
	J[9] = -x[2]*0.3578 + -0.001637;
	J[18] += ex14_1_6_pd[0];
	J[0] = x[2]*0.004731 + -0.1238;
	J[24] = -0.9338;
	J[36] = 1.;
	J[46] = -1.;

   /*** derivatives for constraint 2 ***/

	J[19] = -ex14_1_6_pd[3];
	J[1] = -x[2]*0.004731 + 0.1238;
	J[19] += ex14_1_6_pd[2];
	J[10] = x[2]*0.3578 + 0.001637;
	J[25] = 0.9338;
	J[37] = -1.;
	J[47] = -1.;

   /*** derivatives for constraint 3 ***/

	J[20] = ex14_1_6_pd[5];
	J[11] = x[2]*0.7623 + -0.07745;
	J[20] += ex14_1_6_pd[4];
	J[2] = x[2]*0.2238 + 0.2638;
	J[26] = -0.6734;
	J[38] = -1.;
	J[48] = -1.;

   /*** derivatives for constraint 4 ***/

	J[21] = -ex14_1_6_pd[7];
	J[12] = -x[2]*0.7623 + 0.07745;
	J[21] += ex14_1_6_pd[6];
	J[3] = -x[2]*0.2238 + -0.2638;
	J[27] = 0.6734;
	J[39] = 1.;
	J[49] = -1.;

   /*** derivatives for constraint 5 ***/

	J[42] = x[5];
	J[32] = x[7];
	J[4] = 0.3578;
	J[13] = 0.004731;
	J[50] = -1.;

   /*** derivatives for constraint 6 ***/

	J[43] = -x[5];
	J[33] = -x[7];
	J[5] = -0.3578;
	J[14] = -0.004731;
	J[51] = -1.;

   /*** derivatives for constraint 7 ***/

	J[15] = ex14_1_6_pd[9];
	J[6] = ex14_1_6_pd[8];
	J[52] = -1.;

   /*** derivatives for constraint 8 ***/

	J[7] = -ex14_1_6_pd[11];
	J[16] = -ex14_1_6_pd[10];
	J[53] = -1.;

   /*** derivatives for constraint 9 ***/

	J[28] = ex14_1_6_pd[13];
	J[22] = ex14_1_6_pd[12];
	J[54] = -1.;

   /*** derivatives for constraint 10 ***/

	J[23] = -ex14_1_6_pd[15];
	J[29] = -ex14_1_6_pd[14];
	J[55] = -1.;

   /*** derivatives for constraint 11 ***/

	J[34] = ex14_1_6_pd[17];
	J[30] = ex14_1_6_pd[16];
	J[56] = -1.;

   /*** derivatives for constraint 12 ***/

	J[31] = -ex14_1_6_pd[19];
	J[35] = -ex14_1_6_pd[18];
	J[57] = -1.;

   /*** derivatives for constraint 13 ***/

	J[44] = ex14_1_6_pd[21];
	J[40] = ex14_1_6_pd[20];
	J[58] = -1.;

   /*** derivatives for constraint 14 ***/

	J[41] = -ex14_1_6_pd[23];
	J[45] = -ex14_1_6_pd[22];
	J[59] = -1.;

   /*** derivatives for constraint 15 ***/

	J[8] = -0.7623;
	J[17] = 0.2238;
	}
}
#ifdef __cplusplus
	}
#endif
