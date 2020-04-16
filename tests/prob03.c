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
 fint prob03_auxcom_[1] = { 1 /* nlc */ };
 fint prob03_funcom_[11] = {
	2 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	2 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,

	/* rownos */
	1,
	1 };

 real prob03_boundc_[1+4+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		5.,
		1.,
		5.,
		-1.7e308,
		-3.5};

 real prob03_x0comn_[2] = {
		1.,
		1. };

static real prob03_old_x[2];
static int prob03_xkind = -1;

 static int
prob03_xcheck(real *x)
{
	real *x1 = prob03_old_x, *xe = x + 2;
	errno = 0;
	if (prob03_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	prob03_xkind = 0;
	return 1;
	}
 real
prob03_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (prob03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 3.*x[0];
	rv += 2.*x[1];
	;}

	if (wantfg & 2) {
	g[0] = 3.;
	g[1] = 2.;
	}

	return rv;
}

 void
prob03_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	fint wantfg = *needfg;
	if (prob03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	v[1] = -v[0];
	c[0] = v[1];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = -x[0];
	J[0] = -x[1];
	}
}
#ifdef __cplusplus
	}
#endif
