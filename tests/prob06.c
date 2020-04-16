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
 fint prob06_auxcom_[1] = { 2 /* nlc */ };
 fint prob06_funcom_[13] = {
	2 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	4 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,

	/* rownos */
	1,
	2,
	1,
	2 };

 real prob06_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		5.5,
		1.,
		5.5,
		-1.7e308,
		1.,
		-1.7e308,
		-1.};

 real prob06_x0comn_[2] = {
		1.,
		1. };

 static real prob06_pd[8];
static real prob06_old_x[2];
static int prob06_xkind = -1;

 static int
prob06_xcheck(real *x)
{
	real *x1 = prob06_old_x, *xe = x + 2;
	errno = 0;
	if (prob06_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	prob06_xkind = 0;
	return 1;
	}
 real
prob06_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (prob06_xcheck(x) && wantfg == 2)
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
prob06_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (prob06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	prob06_pd[0] = x[0] * x[0];
	prob06_pd[1] = x[0] + x[0];
	v[0] = -0.0625 * prob06_pd[0];
	prob06_pd[2] = x[1] * x[1];
	prob06_pd[3] = x[1] + x[1];
	v[1] = -0.0625 * prob06_pd[2];
	v[2] = v[0] + v[1];
	t1 = v[2] + 0.25*x[0];
	t1 += 0.5*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	prob06_pd[4] = x[0] * x[0];
	prob06_pd[5] = x[0] + x[0];
	v[0] = 0.0714285714285714 * prob06_pd[4];
	prob06_pd[6] = x[1] * x[1];
	prob06_pd[7] = x[1] + x[1];
	v[1] = 0.0714285714285714 * prob06_pd[6];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.428571428571429*x[0];
	t1 += -0.428571428571429*x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[2] = -0.0625*prob06_pd[3] + 0.5;
	J[0] = -0.0625*prob06_pd[1] + 0.25;

   /*** derivatives for constraint 2 ***/

	J[3] = 0.0714285714285714*prob06_pd[7] + -0.428571428571429;
	J[1] = 0.0714285714285714*prob06_pd[5] + -0.428571428571429;
	}
}
#ifdef __cplusplus
	}
#endif
