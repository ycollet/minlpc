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
 fint ex3_1_3_auxcom_[1] = { 2 /* nlc */ };
 fint ex3_1_3_funcom_[25] = {
	6 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	7,
	11,
	12,
	13,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	3,
	4,
	5,
	6,
	1,
	2 };

 real ex3_1_3_boundc_[1+12+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		5.,
		1.,
		5.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		6.,
		0.,
		10.,
		4.,
		1.7e308,
		4.,
		1.7e308,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		6.,
		2.,
		1.7e308};

 real ex3_1_3_x0comn_[6] = {
		5.,
		5.,
		5.,
		1.,
		0.,
		10. };

 static real ex3_1_3_pd[9];
static real ex3_1_3_old_x[6];
static int ex3_1_3_xkind = -1;

 static int
ex3_1_3_xcheck(real *x)
{
	real *x1 = ex3_1_3_old_x, *xe = x + 6;
	errno = 0;
	if (ex3_1_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex3_1_3_xkind = 0;
	return 1;
	}
 real
ex3_1_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[1];
	fint wantfg = *needfg;
	if (ex3_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[2] + -2.;
	ex3_1_3_pd[2] = v[0] * v[0];
	ex3_1_3_pd[3] = v[0] + v[0];
	v[0] = -25. * ex3_1_3_pd[2];
	v[1] = -v[0];
	v[0] = x[3] + -2.;
	v[2] = v[0] * v[0];
	ex3_1_3_pd[4] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[0] + -1.;
	v[0] = v[2] * v[2];
	ex3_1_3_pd[5] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[4] + -4.;
	v[2] = v[0] * v[0];
	ex3_1_3_pd[6] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[1] + -1.;
	v[0] = v[2] * v[2];
	ex3_1_3_pd[7] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[5] + -4.;
	v[2] = v[0] * v[0];
	ex3_1_3_pd[8] = v[0] + v[0];
	v[1] += v[2];
	v[2] = -v[1];
	;}

	if (wantfg & 2) {
	g[5] = -ex3_1_3_pd[8];
	g[1] = -ex3_1_3_pd[7];
	g[4] = -ex3_1_3_pd[6];
	g[0] = -ex3_1_3_pd[5];
	g[3] = -ex3_1_3_pd[4];
	dv[0] = -25.*ex3_1_3_pd[3];
	g[2] = dv[0];
	}

	return v[2];
}

 void
ex3_1_3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ex3_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -3.;
	v[1] = v[0] * v[0];
	ex3_1_3_pd[0] = v[0] + v[0];
	t1 = v[1] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + -3.;
	v[1] = v[0] * v[0];
	ex3_1_3_pd[1] = v[0] + v[0];
	t1 = v[1] + x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	t1 += -3.*x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[2];
	t1 += x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[2];
	t1 += x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[2];
	t1 += x[3];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = ex3_1_3_pd[0];
	J[10] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = ex3_1_3_pd[1];
	J[11] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[6] = -3.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[7] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	J[8] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = 1.;
	J[9] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
