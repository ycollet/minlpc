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
 fint nvs21_auxcom_[1] = { 2 /* nlc */ };
 fint nvs21_funcom_[14] = {
	3 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	4 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	4,
	5,

	/* rownos */
	1,
	1,
	2,
	1 };

 real nvs21_boundc_[1+6+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		0.2,
		0.,
		200.,
		0.,
		200.,
		-675.,
		1.7e308,
		-0.419,
		1.7e308};

 real nvs21_x0comn_[3] = {
		0.1,
		1.,
		1. };

 static real nvs21_pd[12];
static real nvs21_old_x[3];
static int nvs21_xkind = -1;

 static int
nvs21_xcheck(real *x)
{
	real *x1 = nvs21_old_x, *xe = x + 3;
	errno = 0;
	if (nvs21_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs21_xkind = 0;
	return 1;
	}
 real
nvs21_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], dv[1];
	fint wantfg = *needfg;
	if (nvs21_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[1], 4.);
	if (errno) in_trouble2("pow",x[1],4.);
	if (x[1] != 0.) {
	nvs21_pd[7] = 4.*(v[0]/x[1]);
	} else {
	nvs21_pd[7] = 0.;
	}
	nvs21_pd[8] = -0.00201 * v[0];
	nvs21_pd[9] = nvs21_pd[8] * x[2];
	nvs21_pd[10] = x[0] * x[0];
	nvs21_pd[11] = x[0] + x[0];
	v[0] = nvs21_pd[9] * nvs21_pd[10];
	;}

	if (wantfg & 2) {
	g[0] = nvs21_pd[9]*nvs21_pd[11];
	g[2] = nvs21_pd[10]*nvs21_pd[8];
	dv[0] = nvs21_pd[10]*x[2];
	dv[0] = -dv[0]*0.00201;
	g[1] = dv[0]*nvs21_pd[7];
	}

	return v[0];
}

 void
nvs21_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	fint wantfg = *needfg;
	if (nvs21_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs21_pd[0] = x[1] * x[1];
	nvs21_pd[1] = x[1] + x[1];
	v[0] = nvs21_pd[0] * x[2];
	v[1] = -v[0];
	c[0] = v[1];

  /***  constraint 2  ***/

	nvs21_pd[2] = x[1] * x[1];
	nvs21_pd[3] = x[1] + x[1];
	nvs21_pd[4] = -0.1 * nvs21_pd[2];
	nvs21_pd[5] = x[0] * x[0];
	nvs21_pd[6] = x[0] + x[0];
	v[0] = nvs21_pd[4] * nvs21_pd[5];
	c[1] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[3] = -nvs21_pd[0];
	J[1] = -x[2]*nvs21_pd[1];

   /*** derivatives for constraint 2 ***/

	J[0] = nvs21_pd[4]*nvs21_pd[6];
	dv[0] = -nvs21_pd[5]*0.1;
	J[2] = dv[0]*nvs21_pd[3];
	}
}
#ifdef __cplusplus
	}
#endif
