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
 fint nvs10_auxcom_[1] = { 2 /* nlc */ };
 fint nvs10_funcom_[13] = {
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

 real nvs10_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		-583.,
		1.7e308,
		-441.,
		1.7e308};

 real nvs10_x0comn_[2] = {
		1.,
		1. };

 static real nvs10_pd[14];
static real nvs10_old_x[2];
static int nvs10_xkind = -1;

 static int
nvs10_xcheck(real *x)
{
	real *x1 = nvs10_old_x, *xe = x + 2;
	errno = 0;
	if (nvs10_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs10_xkind = 0;
	return 1;
	}
 real
nvs10_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (nvs10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs10_pd[10] = x[0] * x[0];
	nvs10_pd[11] = x[0] + x[0];
	v[0] = 7. * nvs10_pd[10];
	nvs10_pd[12] = x[1] * x[1];
	nvs10_pd[13] = x[1] + x[1];
	v[1] = 6. * nvs10_pd[12];
	v[2] = v[0] + v[1];
	rv = v[2] + -35.*x[0];
	rv += -80.4*x[1];
	;}

	if (wantfg & 2) {
	g[1] = 6.*nvs10_pd[13] + -80.4;
	g[0] = 7.*nvs10_pd[11] + -35.;
	}

	return rv;
}

 void
nvs10_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	fint wantfg = *needfg;
	if (nvs10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs10_pd[0] = x[0] * x[0];
	nvs10_pd[1] = x[0] + x[0];
	v[0] = -9. * nvs10_pd[0];
	nvs10_pd[2] = 10. * x[0];
	v[1] = nvs10_pd[2] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs10_pd[3] = x[1] * x[1];
	nvs10_pd[4] = x[1] + x[1];
	v[2] = -8. * nvs10_pd[3];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	nvs10_pd[5] = x[0] * x[0];
	nvs10_pd[6] = x[0] + x[0];
	v[0] = -6. * nvs10_pd[5];
	nvs10_pd[7] = 8. * x[0];
	v[1] = nvs10_pd[7] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs10_pd[8] = x[1] * x[1];
	nvs10_pd[9] = x[1] + x[1];
	v[2] = -6. * nvs10_pd[8];
	v[0] += v[2];
	c[1] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[2] = -8.*nvs10_pd[4];
	J[2] -= nvs10_pd[2];
	J[0] = -x[1]*10.;
	J[0] -= 9.*nvs10_pd[1];

   /*** derivatives for constraint 2 ***/

	J[3] = -6.*nvs10_pd[9];
	J[3] -= nvs10_pd[7];
	J[1] = -x[1]*8.;
	J[1] -= 6.*nvs10_pd[6];
	}
}
#ifdef __cplusplus
	}
#endif
