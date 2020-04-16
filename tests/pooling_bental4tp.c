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
 fint pooling_bental4tp_auxcom_[1] = { 6 /* nlc */ };
 fint pooling_bental4tp_funcom_[70] = {
	13 /* nvar */,
	1 /* nobj */,
	16 /* ncon */,
	50 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	11,
	13,
	15,
	20,
	25,
	30,
	35,
	40,
	45,
	48,
	51,

	/* rownos */
	1,
	3,
	5,
	16,
	2,
	4,
	6,
	16,
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	7,
	11,
	12,
	14,
	2,
	7,
	11,
	13,
	15,
	3,
	8,
	11,
	12,
	14,
	4,
	8,
	11,
	13,
	15,
	5,
	9,
	11,
	12,
	14,
	6,
	9,
	11,
	13,
	15,
	10,
	12,
	14,
	10,
	13,
	15 };

 real pooling_bental4tp_boundc_[1+26+32] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		300.,
		0.,
		50.,
		0.,
		300.,
		0.,
		100.,
		0.,
		200.,
		0.,
		50.,
		0.,
		50.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
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
		300.,
		-1.7e308,
		50.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		100.,
		-1.7e308,
		200.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		1.,
		1.};

 real pooling_bental4tp_x0comn_[13] = {
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

static real pooling_bental4tp_old_x[13];
static int pooling_bental4tp_xkind = -1;

 static int
pooling_bental4tp_xcheck(real *x)
{
	real *x1 = pooling_bental4tp_old_x, *xe = x + 13;
	errno = 0;
	if (pooling_bental4tp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_bental4tp_xkind = 0;
	return 1;
	}
 real
pooling_bental4tp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_bental4tp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -3.*x[5];
	rv += -9.*x[6];
	rv += 6.*x[7];
	rv += 7.*x[9];
	rv += x[10];
	rv += x[11];
	rv += -5.*x[12];
	;}

	if (wantfg & 2) {
	g[5] = -3.;
	g[6] = -9.;
	g[7] = 6.;
	g[9] = 7.;
	g[10] = 1.;
	g[11] = 1.;
	g[12] = -5.;
	}

	return rv;
}

 void
pooling_bental4tp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_bental4tp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[8];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[0] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[10];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[5];
	t1 += x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[7];
	t1 += x[8];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[9];
	t1 += x[10];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[11];
	t1 += x[12];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[5];
	t1 += x[7];
	t1 += x[9];
	t1 += x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[6];
	t1 += x[8];
	t1 += x[10];
	t1 += x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 0.5*x[5];
	t1 += -1.5*x[7];
	t1 += -1.5*x[9];
	t1 += -0.5*x[11];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 1.5*x[6];
	t1 += -0.5*x[8];
	t1 += -0.5*x[10];
	t1 += 0.5*x[12];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[0];
	t1 += x[1];
	c[15] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = -x[0];
	J[0] = -x[2];
	J[14] = 1.;

   /*** derivatives for constraint 2 ***/

	J[9] = -x[1];
	J[4] = -x[2];
	J[19] = 1.;

   /*** derivatives for constraint 3 ***/

	J[10] = -x[0];
	J[1] = -x[3];
	J[24] = 1.;

   /*** derivatives for constraint 4 ***/

	J[11] = -x[1];
	J[5] = -x[3];
	J[29] = 1.;

   /*** derivatives for constraint 5 ***/

	J[12] = -x[0];
	J[2] = -x[4];
	J[34] = 1.;

   /*** derivatives for constraint 6 ***/

	J[13] = -x[1];
	J[6] = -x[4];
	J[39] = 1.;

   /*** derivatives for constraint 7 ***/

	J[15] = 1.;
	J[20] = 1.;

   /*** derivatives for constraint 8 ***/

	J[25] = 1.;
	J[30] = 1.;

   /*** derivatives for constraint 9 ***/

	J[35] = 1.;
	J[40] = 1.;

   /*** derivatives for constraint 10 ***/

	J[44] = 1.;
	J[47] = 1.;

   /*** derivatives for constraint 11 ***/

	J[16] = 1.;
	J[21] = 1.;
	J[26] = 1.;
	J[31] = 1.;
	J[36] = 1.;
	J[41] = 1.;

   /*** derivatives for constraint 12 ***/

	J[17] = 1.;
	J[27] = 1.;
	J[37] = 1.;
	J[45] = 1.;

   /*** derivatives for constraint 13 ***/

	J[22] = 1.;
	J[32] = 1.;
	J[42] = 1.;
	J[48] = 1.;

   /*** derivatives for constraint 14 ***/

	J[18] = 0.5;
	J[28] = -1.5;
	J[38] = -1.5;
	J[46] = -0.5;

   /*** derivatives for constraint 15 ***/

	J[23] = 1.5;
	J[33] = -0.5;
	J[43] = -0.5;
	J[49] = 0.5;

   /*** derivatives for constraint 16 ***/

	J[3] = 1.;
	J[7] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
