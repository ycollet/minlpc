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
 fint ex3_1_1_auxcom_[1] = { 3 /* nlc */ };
 fint ex3_1_1_funcom_[32] = {
	8 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	17 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	8,
	12,
	14,
	16,
	18,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	4,
	5,
	2,
	3,
	5,
	6,
	1,
	4,
	2,
	5,
	3,
	6 };

 real ex3_1_1_boundc_[1+16+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		100.,
		10000.,
		1000.,
		10000.,
		1000.,
		10000.,
		10.,
		1000.,
		10.,
		1000.,
		10.,
		1000.,
		10.,
		1000.,
		10.,
		1000.,
		-1.7e308,
		83333.333,
		-1.7e308,
		0.,
		-1.7e308,
		-1250000.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real ex3_1_1_x0comn_[8] = {
		579.19,
		1360.13,
		5109.92,
		182.01,
		295.6,
		217.99,
		286.4,
		395.6 };

static real ex3_1_1_old_x[8];
static int ex3_1_1_xkind = -1;

 static int
ex3_1_1_xcheck(real *x)
{
	real *x1 = ex3_1_1_old_x, *xe = x + 8;
	errno = 0;
	if (ex3_1_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex3_1_1_xkind = 0;
	return 1;
	}
 real
ex3_1_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex3_1_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += x[2];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[2] = 1.;
	}

	return rv;
}

 void
ex3_1_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex3_1_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[5];
	v[1] = -v[0];
	t1 = v[1] + 100.*x[0];
	t1 += 833.33252*x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[3];
	v[1] = x[1] * x[6];
	v[2] = v[0] - v[1];
	t1 = v[2] + -1250.*x[3];
	t1 += 1250.*x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[4];
	v[1] = x[2] * x[7];
	v[2] = v[0] - v[1];
	t1 = v[2] + -2500.*x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 0.0025*x[3];
	t1 += 0.0025*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -0.0025*x[3];
	t1 += 0.0025*x[4];
	t1 += 0.0025*x[6];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -0.01*x[4];
	t1 += 0.01*x[7];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[11] = -x[0];
	J[0] = -x[5] + 100.;
	J[3] = 833.33252;

   /*** derivatives for constraint 2 ***/

	J[13] = -x[1];
	J[1] = -x[6];
	J[4] = x[1] + -1250.;
	J[1] += x[3];
	J[7] = 1250.;

   /*** derivatives for constraint 3 ***/

	J[15] = -x[2];
	J[2] = -x[7];
	J[8] = x[2] + -2500.;
	J[2] += x[4];

   /*** derivatives for constraint 4 ***/

	J[5] = 0.0025;
	J[12] = 0.0025;

   /*** derivatives for constraint 5 ***/

	J[6] = -0.0025;
	J[9] = 0.0025;
	J[14] = 0.0025;

   /*** derivatives for constraint 6 ***/

	J[10] = -0.01;
	J[16] = 0.01;
	}
}
#ifdef __cplusplus
	}
#endif
