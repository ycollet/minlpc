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
 fint pooling_haverly2tp_auxcom_[1] = { 4 /* nlc */ };
 fint pooling_haverly2tp_funcom_[53] = {
	10 /* nvar */,
	1 /* nobj */,
	13 /* ncon */,
	36 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	9,
	11,
	16,
	21,
	26,
	31,
	34,
	37,

	/* rownos */
	1,
	3,
	13,
	2,
	4,
	13,
	1,
	2,
	3,
	4,
	1,
	5,
	8,
	9,
	11,
	2,
	5,
	8,
	10,
	12,
	3,
	6,
	8,
	9,
	11,
	4,
	6,
	8,
	10,
	12,
	7,
	9,
	11,
	7,
	10,
	12 };

 real pooling_haverly2tp_boundc_[1+20+26] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		800.,
		0.,
		800.,
		0.,
		600.,
		0.,
		200.,
		0.,
		600.,
		0.,
		200.,
		0.,
		600.,
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
		-1.7e308,
		800.,
		-1.7e308,
		800.,
		-1.7e308,
		800.,
		-1.7e308,
		800.,
		-1.7e308,
		600.,
		-1.7e308,
		200.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		1.,
		1.};

 real pooling_haverly2tp_x0comn_[10] = {
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

static real pooling_haverly2tp_old_x[10];
static int pooling_haverly2tp_xkind = -1;

 static int
pooling_haverly2tp_xcheck(real *x)
{
	real *x1 = pooling_haverly2tp_old_x, *xe = x + 10;
	errno = 0;
	if (pooling_haverly2tp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_haverly2tp_xkind = 0;
	return 1;
	}
 real
pooling_haverly2tp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_haverly2tp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -3.*x[4];
	rv += -9.*x[5];
	rv += 7.*x[6];
	rv += x[7];
	rv += x[8];
	rv += -5.*x[9];
	;}

	if (wantfg & 2) {
	g[4] = -3.;
	g[5] = -9.;
	g[6] = 7.;
	g[7] = 1.;
	g[8] = 1.;
	g[9] = -5.;
	}

	return rv;
}

 void
pooling_haverly2tp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_haverly2tp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[4];
	t1 += x[5];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[6];
	t1 += x[7];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[8];
	t1 += x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[4];
	t1 += x[6];
	t1 += x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[5];
	t1 += x[7];
	t1 += x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 0.5*x[4];
	t1 += -1.5*x[6];
	t1 += -0.5*x[8];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 1.5*x[5];
	t1 += -0.5*x[7];
	t1 += 0.5*x[9];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += x[1];
	c[12] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = -x[0];
	J[0] = -x[2];
	J[10] = 1.;

   /*** derivatives for constraint 2 ***/

	J[7] = -x[1];
	J[3] = -x[2];
	J[15] = 1.;

   /*** derivatives for constraint 3 ***/

	J[8] = -x[0];
	J[1] = -x[3];
	J[20] = 1.;

   /*** derivatives for constraint 4 ***/

	J[9] = -x[1];
	J[4] = -x[3];
	J[25] = 1.;

   /*** derivatives for constraint 5 ***/

	J[11] = 1.;
	J[16] = 1.;

   /*** derivatives for constraint 6 ***/

	J[21] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 7 ***/

	J[30] = 1.;
	J[33] = 1.;

   /*** derivatives for constraint 8 ***/

	J[12] = 1.;
	J[17] = 1.;
	J[22] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 9 ***/

	J[13] = 1.;
	J[23] = 1.;
	J[31] = 1.;

   /*** derivatives for constraint 10 ***/

	J[18] = 1.;
	J[28] = 1.;
	J[34] = 1.;

   /*** derivatives for constraint 11 ***/

	J[14] = 0.5;
	J[24] = -1.5;
	J[32] = -0.5;

   /*** derivatives for constraint 12 ***/

	J[19] = 1.5;
	J[29] = -0.5;
	J[35] = 0.5;

   /*** derivatives for constraint 13 ***/

	J[2] = 1.;
	J[5] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif