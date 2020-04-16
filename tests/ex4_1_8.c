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
 fint ex4_1_8_auxcom_[1] = { 1 /* nlc */ };
 fint ex4_1_8_funcom_[11] = {
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

 real ex4_1_8_boundc_[1+4+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		2.,
		0.,
		3.,
		-2.,
		-2.};

 real ex4_1_8_x0comn_[2] = {
		0.7175,
		1.47 };

 static real ex4_1_8_pd[2];
static real ex4_1_8_old_x[2];
static int ex4_1_8_xkind = -1;

 static int
ex4_1_8_xcheck(real *x)
{
	real *x1 = ex4_1_8_old_x, *xe = x + 2;
	errno = 0;
	if (ex4_1_8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex4_1_8_xkind = 0;
	return 1;
	}
 real
ex4_1_8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], rv;
	fint wantfg = *needfg;
	if (ex4_1_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[1] * x[1];
	ex4_1_8_pd[1] = x[1] + x[1];
	rv = v[0] + -12.*x[0];
	rv += -7.*x[1];
	;}

	if (wantfg & 2) {
	g[1] = ex4_1_8_pd[1] + -7.;
	g[0] = -12.;
	}

	return rv;
}

 void
ex4_1_8_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex4_1_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex4_1_8_pd[0] = 4.*(v[0]/x[0]);
	} else {
	ex4_1_8_pd[0] = 0.;
	}
	v[0] *= -2.;
	t1 = v[0] + -x[1];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -2.*ex4_1_8_pd[0];
	J[1] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
