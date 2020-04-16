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
 fint nvs07_auxcom_[1] = { 1 /* nlc */ };
 fint nvs07_funcom_[15] = {
	3 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	5 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	4,
	6,

	/* rownos */
	1,
	1,
	2,
	1,
	2 };

 real nvs07_boundc_[1+6+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		10.,
		1.7e308,
		2.66,
		1.7e308};

 real nvs07_x0comn_[3] = {
		1.,
		1.,
		1. };

 static real nvs07_pd[4];
static real nvs07_old_x[3];
static int nvs07_xkind = -1;

 static int
nvs07_xcheck(real *x)
{
	real *x1 = nvs07_old_x, *xe = x + 3;
	errno = 0;
	if (nvs07_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs07_xkind = 0;
	return 1;
	}
 real
nvs07_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], rv;
	fint wantfg = *needfg;
	if (nvs07_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs07_pd[2] = x[0] * x[0];
	nvs07_pd[3] = x[0] + x[0];
	v[0] = 2. * nvs07_pd[2];
	rv = v[0] + 5.*x[1];
	rv += x[2];
	;}

	if (wantfg & 2) {
	g[0] = 2.*nvs07_pd[3];
	g[1] = 5.;
	g[2] = 1.;
	}

	return rv;
}

 void
nvs07_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (nvs07_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs07_pd[0] = x[1] * x[1];
	nvs07_pd[1] = x[1] + x[1];
	v[0] = nvs07_pd[0] * x[0];
	t1 = v[0] + 5.*x[1];
	t1 += 3.*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[1];
	t1 += x[2];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = nvs07_pd[0];
	J[1] = x[0]*nvs07_pd[1] + 5.;
	J[3] = 3.;

   /*** derivatives for constraint 2 ***/

	J[2] = -1.;
	J[4] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
