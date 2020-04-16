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
 fint wall_auxcom_[1] = { 4 /* nlc */ };
 fint wall_funcom_[33] = {
	6 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	20 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	12,
	15,
	18,
	21,

	/* rownos */
	1,
	2,
	5,
	6,
	1,
	3,
	5,
	6,
	2,
	5,
	6,
	2,
	4,
	6,
	3,
	5,
	6,
	3,
	4,
	6 };

 real wall_boundc_[1+12+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		1.,
		1.,
		4.8,
		4.8,
		0.98,
		0.98,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.};

 real wall_x0comn_[6] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1. };

 static real wall_pd[8];
static real wall_old_x[6];
static int wall_xkind = -1;

 static int
wall_xcheck(real *x)
{
	real *x1 = wall_old_x, *xe = x + 6;
	errno = 0;
	if (wall_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wall_xkind = 0;
	return 1;
	}
 real
wall_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wall_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	}

	return rv;
}

 void
wall_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (wall_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = x[2] / x[0];
	wall_pd[0] = 1. / x[0];
	wall_pd[1] = -v[0] * wall_pd[0];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = v[0] / x[3];
	wall_pd[2] = 1. / x[3];
	wall_pd[3] = -v[1] * wall_pd[2];
	c[1] = v[1];

  /***  constraint 3  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = x[4] / x[1];
	wall_pd[4] = 1. / x[1];
	wall_pd[5] = -v[0] * wall_pd[4];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[1] = v[0] / x[5];
	wall_pd[6] = 1. / x[5];
	wall_pd[7] = -v[1] * wall_pd[6];
	c[2] = v[1];

  /***  constraint 4  ***/

	v[0] = x[5] * x[3];
	c[3] = v[0];

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 1.e-07*x[2];
	t1 += -1.e-05*x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 2.*x[0];
	t1 += -2.*x[1];
	t1 += 1.e-07*x[2];
	t1 += -0.01*x[3];
	t1 += -1.e-05*x[4];
	t1 += 0.01*x[5];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = x[0];
	J[0] = x[1];

   /*** derivatives for constraint 2 ***/

	J[11] = wall_pd[3];
	J[1] = wall_pd[2]*wall_pd[1];
	J[8] = wall_pd[2]*wall_pd[0];

   /*** derivatives for constraint 3 ***/

	J[17] = wall_pd[7];
	J[5] = wall_pd[6]*wall_pd[5];
	J[14] = wall_pd[6]*wall_pd[4];

   /*** derivatives for constraint 4 ***/

	J[12] = x[5];
	J[18] = x[3];

   /*** derivatives for constraint 5 ***/

	J[2] = 1.;
	J[6] = -1.;
	J[9] = 1.e-07;
	J[15] = -1.e-05;

   /*** derivatives for constraint 6 ***/

	J[3] = 2.;
	J[7] = -2.;
	J[10] = 1.e-07;
	J[13] = -0.01;
	J[16] = -1.e-05;
	J[19] = 0.01;
	}
}
#ifdef __cplusplus
	}
#endif
