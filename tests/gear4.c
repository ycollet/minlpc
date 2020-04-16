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
 fint gear4_auxcom_[1] = { 1 /* nlc */ };
 fint gear4_funcom_[19] = {
	6 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	6 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	6,
	7,

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1 };

 real gear4_boundc_[1+12+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-144279.32477276,
		-144279.32477276};

 real gear4_x0comn_[6] = {
		12.,
		12.,
		12.,
		12.,
		0.,
		0. };

 static real gear4_pd[3];
static real gear4_old_x[6];
static int gear4_xkind = -1;

 static int
gear4_xcheck(real *x)
{
	real *x1 = gear4_old_x, *xe = x + 6;
	errno = 0;
	if (gear4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	gear4_xkind = 0;
	return 1;
	}
 real
gear4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (gear4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[4];
	rv += x[5];
	;}

	if (wantfg & 2) {
	g[4] = 1.;
	g[5] = 1.;
	}

	return rv;
}

 void
gear4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (gear4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	gear4_pd[0] = -1.e+06 * x[0];
	v[0] = gear4_pd[0] * x[1];
	v[1] = x[2] * x[3];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	gear4_pd[1] = 1. / v[1];
	gear4_pd[2] = -v[2] * gear4_pd[1];
	t1 = v[2] + -x[4];
	t1 += x[5];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[3] = gear4_pd[2]*x[2];
	J[2] = gear4_pd[2]*x[3];
	J[1] = gear4_pd[1]*gear4_pd[0];
	dv[0] = gear4_pd[1]*x[1];
	J[0] = -dv[0]*1.e+06;
	J[4] = -1.;
	J[5] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
