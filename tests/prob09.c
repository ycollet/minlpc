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
 fint prob09_auxcom_[1] = { 1 /* nlc */ };
 fint prob09_funcom_[13] = {
	3 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	3 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,

	/* rownos */
	1,
	1,
	1 };

 real prob09_boundc_[1+6+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-2.,
		2.,
		-2.,
		2.,
		-100.,
		100.,
		0.,
		0.};

 real prob09_x0comn_[3] = {
		0.999139149741104,
		0.998154959548312,
		2.28067255148468e-06 };

 static real prob09_pd[4];
static real prob09_old_x[3];
static int prob09_xkind = -1;

 static int
prob09_xcheck(real *x)
{
	real *x1 = prob09_old_x, *xe = x + 3;
	errno = 0;
	if (prob09_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	prob09_xkind = 0;
	return 1;
	}
 real
prob09_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (prob09_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[2];
	;}

	if (wantfg & 2) {
	g[2] = 1.;
	}

	return rv;
}

 void
prob09_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (prob09_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	prob09_pd[0] = x[0] + x[0];
	v[1] = x[1] - v[0];
	prob09_pd[1] = v[1] * v[1];
	prob09_pd[2] = v[1] + v[1];
	v[1] = 100. * prob09_pd[1];
	v[0] = 1. - x[0];
	v[2] = v[0] * v[0];
	prob09_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + -x[2];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -prob09_pd[3];
	dv[0] = 100.*prob09_pd[2];
	dv[1] = -dv[0];
	J[1] = dv[0];
	J[0] += dv[1]*prob09_pd[0];
	J[2] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
