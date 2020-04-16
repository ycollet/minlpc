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
 fint ex2_1_3_auxcom_[1] = { 0 /* nlc */ };
 fint ex2_1_3_funcom_[47] = {
	13 /* nvar */,
	1 /* nobj */,
	9 /* ncon */,
	27 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	20,
	24,
	28,
	28,

	/* rownos */
	1,
	2,
	4,
	1,
	3,
	5,
	2,
	3,
	6,
	7,
	7,
	8,
	8,
	9,
	9,
	1,
	2,
	4,
	7,
	1,
	3,
	5,
	8,
	2,
	3,
	6,
	9 };

 real ex2_1_3_boundc_[1+26+18] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.,
		-1.7e308,
		10.,
		-1.7e308,
		10.,
		-1.7e308,
		10.,
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

 real ex2_1_3_x0comn_[13] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		3.,
		3.,
		3.,
		1. };

 static real ex2_1_3_pd[8];
static real ex2_1_3_old_x[13];
static int ex2_1_3_xkind = -1;

 static int
ex2_1_3_xcheck(real *x)
{
	real *x1 = ex2_1_3_old_x, *xe = x + 13;
	errno = 0;
	if (ex2_1_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex2_1_3_xkind = 0;
	return 1;
	}
 real
ex2_1_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[4], rv;
	fint wantfg = *needfg;
	if (ex2_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex2_1_3_pd[0] = 10. * x[0];
	ex2_1_3_pd[1] = ex2_1_3_pd[0] * x[0];
	v[0] = -0.5 * ex2_1_3_pd[1];
	ex2_1_3_pd[2] = 10. * x[1];
	ex2_1_3_pd[3] = ex2_1_3_pd[2] * x[1];
	v[1] = -0.5 * ex2_1_3_pd[3];
	v[0] += v[1];
	ex2_1_3_pd[4] = 10. * x[2];
	ex2_1_3_pd[5] = ex2_1_3_pd[4] * x[2];
	v[1] = -0.5 * ex2_1_3_pd[5];
	v[0] += v[1];
	ex2_1_3_pd[6] = 10. * x[3];
	ex2_1_3_pd[7] = ex2_1_3_pd[6] * x[3];
	v[1] = -0.5 * ex2_1_3_pd[7];
	v[0] += v[1];
	rv = v[0] + 5.*x[0];
	rv += 5.*x[1];
	rv += 5.*x[2];
	rv += 5.*x[3];
	rv += -x[4];
	rv += -x[5];
	rv += -x[6];
	rv += -x[7];
	rv += -x[8];
	rv += -x[9];
	rv += -x[10];
	rv += -x[11];
	rv += -x[12];
	;}

	if (wantfg & 2) {
	g[3] = -0.5*ex2_1_3_pd[6] + 5.;
	dv[0] = -0.5*x[3];
	g[3] += dv[0]*10.;
	g[2] = -0.5*ex2_1_3_pd[4] + 5.;
	dv[1] = -0.5*x[2];
	g[2] += dv[1]*10.;
	g[1] = -0.5*ex2_1_3_pd[2] + 5.;
	dv[2] = -0.5*x[1];
	g[1] += dv[2]*10.;
	g[0] = -0.5*ex2_1_3_pd[0] + 5.;
	dv[3] = -0.5*x[0];
	g[0] += dv[3]*10.;
	g[4] = -1.;
	g[5] = -1.;
	g[6] = -1.;
	g[7] = -1.;
	g[8] = -1.;
	g[9] = -1.;
	g[10] = -1.;
	g[11] = -1.;
	g[12] = -1.;
	}

	return rv;
}

 void
ex2_1_3_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex2_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 2.*x[0];
	t1 += 2.*x[1];
	t1 += x[9];
	t1 += x[10];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 2.*x[0];
	t1 += 2.*x[2];
	t1 += x[9];
	t1 += x[11];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[1];
	t1 += 2.*x[2];
	t1 += x[10];
	t1 += x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -8.*x[0];
	t1 += x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -8.*x[1];
	t1 += x[10];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -8.*x[2];
	t1 += x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -2.*x[3];
	t1 += -x[4];
	t1 += x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -2.*x[5];
	t1 += -x[6];
	t1 += x[10];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -2.*x[7];
	t1 += -x[8];
	t1 += x[11];
	c[8] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 2.;
	J[3] = 2.;
	J[15] = 1.;
	J[19] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 2.;
	J[6] = 2.;
	J[16] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = 2.;
	J[7] = 2.;
	J[20] = 1.;
	J[24] = 1.;

   /*** derivatives for constraint 4 ***/

	J[2] = -8.;
	J[17] = 1.;

   /*** derivatives for constraint 5 ***/

	J[5] = -8.;
	J[21] = 1.;

   /*** derivatives for constraint 6 ***/

	J[8] = -8.;
	J[25] = 1.;

   /*** derivatives for constraint 7 ***/

	J[9] = -2.;
	J[10] = -1.;
	J[18] = 1.;

   /*** derivatives for constraint 8 ***/

	J[11] = -2.;
	J[12] = -1.;
	J[22] = 1.;

   /*** derivatives for constraint 9 ***/

	J[13] = -2.;
	J[14] = -1.;
	J[26] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif