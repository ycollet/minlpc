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
 fint ex7_3_3_auxcom_[1] = { 2 /* nlc */ };
 fint ex7_3_3_funcom_[32] = {
	5 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	20 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	11,
	15,
	21,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	5,
	6,
	1,
	2,
	1,
	2,
	7,
	8,
	3,
	4,
	5,
	6,
	7,
	8 };

 real ex7_3_3_boundc_[1+10+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		10.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-12.,
		-12.,
		-44.,
		-44.,
		-1.7e308,
		2.25,
		-1.7e308,
		-2.25,
		-1.7e308,
		-1.5,
		-1.7e308,
		1.5,
		-1.7e308,
		-1.5,
		-1.7e308,
		1.5};

 real ex7_3_3_x0comn_[5] = {
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex7_3_3_pd[5];
static real ex7_3_3_old_x[5];
static int ex7_3_3_xkind = -1;

 static int
ex7_3_3_xcheck(real *x)
{
	real *x1 = ex7_3_3_old_x, *xe = x + 5;
	errno = 0;
	if (ex7_3_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_3_3_xkind = 0;
	return 1;
	}
 real
ex7_3_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex7_3_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[4];
	;}

	if (wantfg & 2) {
	g[4] = 1.;
	}

	return rv;
}

 void
ex7_3_3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ex7_3_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex7_3_3_pd[0] = 9.625 * x[0];
	v[0] = ex7_3_3_pd[0] * x[2];
	ex7_3_3_pd[1] = 16. * x[1];
	v[1] = ex7_3_3_pd[1] * x[2];
	v[0] += v[1];
	ex7_3_3_pd[2] = x[2] * x[2];
	ex7_3_3_pd[3] = x[2] + x[2];
	v[1] = 16. * ex7_3_3_pd[2];
	v[0] += v[1];
	t1 = v[0] + -4.*x[0];
	t1 += -x[1];
	t1 += -78.*x[2];
	t1 += x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	ex7_3_3_pd[4] = 16. * x[0];
	v[0] = ex7_3_3_pd[4] * x[2];
	t1 = v[0] + -19.*x[0];
	t1 += -8.*x[1];
	t1 += -24.*x[2];
	t1 += -x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += -0.25*x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += -0.25*x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[1];
	t1 += -0.5*x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += -0.5*x[4];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[3];
	t1 += -1.5*x[4];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[3];
	t1 += -1.5*x[4];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = 16.*ex7_3_3_pd[3] + -78.;
	J[8] += ex7_3_3_pd[1];
	J[4] = x[2]*16. + -1.;
	J[8] += ex7_3_3_pd[0];
	J[0] = x[2]*9.625 + -4.;
	J[10] = 1.;

   /*** derivatives for constraint 2 ***/

	J[9] = ex7_3_3_pd[4] + -24.;
	J[1] = x[2]*16. + -19.;
	J[5] = -8.;
	J[11] = -1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[14] = -0.25;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[15] = -0.25;

   /*** derivatives for constraint 5 ***/

	J[6] = -1.;
	J[16] = -0.5;

   /*** derivatives for constraint 6 ***/

	J[7] = 1.;
	J[17] = -0.5;

   /*** derivatives for constraint 7 ***/

	J[12] = -1.;
	J[18] = -1.5;

   /*** derivatives for constraint 8 ***/

	J[13] = 1.;
	J[19] = -1.5;
	}
}
#ifdef __cplusplus
	}
#endif
