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
 fint ex1221_auxcom_[1] = { 2 /* nlc */ };
 fint ex1221_funcom_[23] = {
	5 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	11 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	8,
	11,
	12,

	/* rownos */
	1,
	3,
	2,
	4,
	1,
	3,
	5,
	2,
	4,
	5,
	5 };

 real ex1221_boundc_[1+10+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.,
		0.,
		10.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		1.25,
		1.25,
		3.,
		3.,
		-1.7e308,
		1.6,
		-1.7e308,
		3.,
		-1.7e308,
		0.};

 real ex1221_x0comn_[5] = {
		1.,
		1.,
		0.,
		0.,
		0. };

 static real ex1221_pd[2];
static real ex1221_old_x[5];
static int ex1221_xkind = -1;

 static int
ex1221_xcheck(real *x)
{
	real *x1 = ex1221_old_x, *xe = x + 5;
	errno = 0;
	if (ex1221_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1221_xkind = 0;
	return 1;
	}
 real
ex1221_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex1221_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[0];
	rv += 3.*x[1];
	rv += 1.5*x[2];
	rv += 2.*x[3];
	rv += -0.5*x[4];
	;}

	if (wantfg & 2) {
	g[0] = 2.;
	g[1] = 3.;
	g[2] = 1.5;
	g[3] = 2.;
	g[4] = -0.5;
	}

	return rv;
}

 void
ex1221_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex1221_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	ex1221_pd[0] = x[0] + x[0];
	t1 = v[0] + x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = pow(x[1], 1.5);
	if (errno) in_trouble2("pow",x[1],1.5);
	if (x[1] > 0.) {
	ex1221_pd[1] = 1.5*(v[0]/x[1]);
	} else if (1.5 > 1.) {
	ex1221_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],1.5);
	}
	t1 = v[0] + 1.5*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 1.333*x[1];
	t1 += x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[2];
	t1 += -x[3];
	t1 += x[4];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = ex1221_pd[0];
	J[4] = 1.;

   /*** derivatives for constraint 2 ***/

	J[2] = ex1221_pd[1];
	J[7] = 1.5;

   /*** derivatives for constraint 3 ***/

	J[1] = 1.;
	J[5] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.333;
	J[8] = 1.;

   /*** derivatives for constraint 5 ***/

	J[6] = -1.;
	J[9] = -1.;
	J[10] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
