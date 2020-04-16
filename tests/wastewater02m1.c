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
 fint wastewater02m1_auxcom_[1] = { 3 /* nlc */ };
 fint wastewater02m1_funcom_[84] = {
	19 /* nvar */,
	1 /* nobj */,
	14 /* ncon */,
	58 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	11,
	15,
	18,
	21,
	24,
	27,
	30,
	33,
	36,
	39,
	42,
	45,
	48,
	51,
	54,
	57,
	59,

	/* rownos */
	1,
	11,
	13,
	2,
	12,
	14,
	1,
	2,
	3,
	13,
	1,
	2,
	3,
	14,
	1,
	6,
	8,
	2,
	7,
	8,
	1,
	6,
	9,
	2,
	7,
	9,
	3,
	8,
	10,
	3,
	9,
	10,
	1,
	6,
	8,
	2,
	7,
	9,
	3,
	4,
	10,
	3,
	5,
	10,
	1,
	4,
	6,
	2,
	4,
	7,
	1,
	5,
	6,
	2,
	5,
	7,
	3,
	10 };

 real wastewater02m1_boundc_[1+38+28] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-60.,
		-60.,
		-20.,
		-20.,
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
		200.,
		-1.7e308,
		1000.,
		0.,
		0.,
		0.,
		0.};

 real wastewater02m1_x0comn_[19] = {
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

static real wastewater02m1_old_x[19];
static int wastewater02m1_xkind = -1;

 static int
wastewater02m1_xcheck(real *x)
{
	real *x1 = wastewater02m1_old_x, *xe = x + 19;
	errno = 0;
	if (wastewater02m1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wastewater02m1_xkind = 0;
	return 1;
	}
 real
wastewater02m1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wastewater02m1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[10];
	rv += x[11];
	;}

	if (wantfg & 2) {
	g[10] = 1.;
	g[11] = 1.;
	}

	return rv;
}

 void
wastewater02m1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (wastewater02m1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[4] * x[2];
	v[1] = x[6] * x[3];
	v[0] += v[1];
	v[1] = x[10] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 400.*x[14];
	t1 += 800.*x[16];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[5] * x[2];
	v[1] = x[7] * x[3];
	v[0] += v[1];
	v[1] = x[11] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 400.*x[15];
	t1 += 800.*x[17];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[8] * x[2];
	v[1] = x[9] * x[3];
	v[2] = v[0] + v[1];
	t1 = v[2] + 400.*x[12];
	t1 += 800.*x[13];
	t1 += -10.*x[18];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[12];
	t1 += -x[14];
	t1 += -x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[13];
	t1 += -x[16];
	t1 += -x[17];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[4];
	t1 += -x[6];
	t1 += x[10];
	t1 += -x[14];
	t1 += -x[16];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[5];
	t1 += -x[7];
	t1 += x[11];
	t1 += -x[15];
	t1 += -x[17];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += -x[8];
	t1 += x[10];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[6];
	t1 += -x[7];
	t1 += -x[9];
	t1 += x[11];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += -x[12];
	t1 += -x[13];
	t1 += x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[0];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[1];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -0.01*x[0];
	t1 += x[2];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -0.2*x[1];
	t1 += x[3];
	c[13] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[10];
	J[32] = -x[0];
	J[10] = x[6];
	J[20] = x[3];
	J[6] = x[4];
	J[14] = x[2];
	J[44] = 400.;
	J[50] = 800.;

   /*** derivatives for constraint 2 ***/

	J[3] = -x[11];
	J[35] = -x[1];
	J[11] = x[7];
	J[23] = x[3];
	J[7] = x[5];
	J[17] = x[2];
	J[47] = 400.;
	J[53] = 800.;

   /*** derivatives for constraint 3 ***/

	J[12] = x[9];
	J[29] = x[3];
	J[8] = x[8];
	J[26] = x[2];
	J[38] = 400.;
	J[41] = 800.;
	J[56] = -10.;

   /*** derivatives for constraint 4 ***/

	J[39] = -1.;
	J[45] = -1.;
	J[48] = -1.;

   /*** derivatives for constraint 5 ***/

	J[42] = -1.;
	J[51] = -1.;
	J[54] = -1.;

   /*** derivatives for constraint 6 ***/

	J[15] = -1.;
	J[21] = -1.;
	J[33] = 1.;
	J[46] = -1.;
	J[52] = -1.;

   /*** derivatives for constraint 7 ***/

	J[18] = -1.;
	J[24] = -1.;
	J[36] = 1.;
	J[49] = -1.;
	J[55] = -1.;

   /*** derivatives for constraint 8 ***/

	J[16] = -1.;
	J[19] = -1.;
	J[27] = -1.;
	J[34] = 1.;

   /*** derivatives for constraint 9 ***/

	J[22] = -1.;
	J[25] = -1.;
	J[30] = -1.;
	J[37] = 1.;

   /*** derivatives for constraint 10 ***/

	J[28] = -1.;
	J[31] = -1.;
	J[40] = -1.;
	J[43] = -1.;
	J[57] = 1.;

   /*** derivatives for constraint 11 ***/

	J[1] = 1.;

   /*** derivatives for constraint 12 ***/

	J[4] = 1.;

   /*** derivatives for constraint 13 ***/

	J[2] = -0.01;
	J[9] = 1.;

   /*** derivatives for constraint 14 ***/

	J[5] = -0.2;
	J[13] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
