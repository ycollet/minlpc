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
 fint haverly_auxcom_[1] = { 3 /* nlc */ };
 fint haverly_funcom_[50] = {
	12 /* nvar */,
	1 /* nobj */,
	9 /* ncon */,
	31 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	12,
	13,
	14,
	17,
	20,
	22,
	24,
	26,
	29,
	32,

	/* rownos */
	1,
	2,
	6,
	8,
	1,
	3,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	1,
	4,
	8,
	1,
	4,
	8,
	4,
	9,
	5,
	6,
	5,
	7,
	2,
	6,
	9,
	3,
	7,
	9 };

 real haverly_boundc_[1+24+18] /* Infinity, variable bounds, constraint bounds */ = {
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
		100.,
		0.,
		200.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
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
		0.};

 real haverly_x0comn_[12] = {
		1.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1. };

 static real haverly_pd[1];
static real haverly_old_x[12];
static int haverly_xkind = -1;

 static int
haverly_xcheck(real *x)
{
	real *x1 = haverly_old_x, *xe = x + 12;
	errno = 0;
	if (haverly_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	haverly_xkind = 0;
	return 1;
	}
 real
haverly_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (haverly_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[3];
	rv += -x[4];
	;}

	if (wantfg & 2) {
	g[3] = 1.;
	g[4] = -1.;
	}

	return rv;
}

 void
haverly_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (haverly_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	haverly_pd[0] = x[0] + x[1];
	v[1] = x[2] * haverly_pd[0];
	t1 = v[1] + -3.*x[5];
	t1 += -x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] * x[0];
	t1 = v[0] + -2.5*x[0];
	t1 += -0.5*x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[1];
	t1 = v[0] + -1.5*x[1];
	t1 += 0.5*x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[3];
	t1 += -6.*x[5];
	t1 += -16.*x[6];
	t1 += -10.*x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[4];
	t1 += -9.*x[8];
	t1 += -15.*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[0];
	t1 += x[8];
	t1 += -x[10];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[1];
	t1 += x[9];
	t1 += -x[11];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[5];
	t1 += x[6];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[7];
	t1 += -x[10];
	t1 += -x[11];
	c[8] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = haverly_pd[0];
	J[4] = x[2];
	J[0] = x[2];
	J[13] = -3.;
	J[16] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = x[2] + -2.5;
	J[9] = x[0];
	J[25] = -0.5;

   /*** derivatives for constraint 3 ***/

	J[5] = x[2] + -1.5;
	J[10] = x[1];
	J[28] = 0.5;

   /*** derivatives for constraint 4 ***/

	J[11] = 1.;
	J[14] = -6.;
	J[17] = -16.;
	J[19] = -10.;

   /*** derivatives for constraint 5 ***/

	J[12] = 1.;
	J[21] = -9.;
	J[23] = -15.;

   /*** derivatives for constraint 6 ***/

	J[2] = -1.;
	J[22] = 1.;
	J[26] = -1.;

   /*** derivatives for constraint 7 ***/

	J[6] = -1.;
	J[24] = 1.;
	J[29] = -1.;

   /*** derivatives for constraint 8 ***/

	J[3] = -1.;
	J[7] = -1.;
	J[15] = 1.;
	J[18] = 1.;

   /*** derivatives for constraint 9 ***/

	J[20] = 1.;
	J[27] = -1.;
	J[30] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
