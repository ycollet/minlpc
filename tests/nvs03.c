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
 fint nvs03_auxcom_[1] = { 1 /* nlc */ };
 fint nvs03_funcom_[13] = {
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

 real nvs03_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		1.7e308,
		-4.5,
		1.7e308};

 real nvs03_x0comn_[2] = {
		100.,
		100. };

 static real nvs03_pd[4];
static real nvs03_old_x[2];
static int nvs03_xkind = -1;

 static int
nvs03_xcheck(real *x)
{
	real *x1 = nvs03_old_x, *xe = x + 2;
	errno = 0;
	if (nvs03_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs03_xkind = 0;
	return 1;
	}
 real
nvs03_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (nvs03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -8.;
	v[1] = v[0] * v[0];
	nvs03_pd[2] = v[0] + v[0];
	v[0] = x[1] + -2.;
	v[2] = v[0] * v[0];
	nvs03_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	;}

	if (wantfg & 2) {
	g[1] = nvs03_pd[3];
	g[0] = nvs03_pd[2];
	}

	return v[0];
}

 void
nvs03_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (nvs03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs03_pd[0] = x[0] * x[0];
	nvs03_pd[1] = x[0] + x[0];
	v[0] = -0.1 * nvs03_pd[0];
	t1 = v[0] + x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -0.333333333333333*x[0];
	t1 += -x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -0.1*nvs03_pd[1];
	J[2] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -0.333333333333333;
	J[3] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
