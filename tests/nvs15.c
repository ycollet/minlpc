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
 fint nvs15_auxcom_[1] = { 0 /* nlc */ };
 fint nvs15_funcom_[13] = {
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

 real nvs15_boundc_[1+6+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		-3.,
		1.7e308};

 real nvs15_x0comn_[3] = {
		100.,
		100.,
		100. };

 static real nvs15_pd[7];
static real nvs15_old_x[3];
static int nvs15_xkind = -1;

 static int
nvs15_xcheck(real *x)
{
	real *x1 = nvs15_old_x, *xe = x + 3;
	errno = 0;
	if (nvs15_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs15_xkind = 0;
	return 1;
	}
 real
nvs15_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (nvs15_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs15_pd[0] = x[0] * x[0];
	nvs15_pd[1] = x[0] + x[0];
	v[0] = 2. * nvs15_pd[0];
	nvs15_pd[2] = x[1] * x[1];
	nvs15_pd[3] = x[1] + x[1];
	v[1] = 2. * nvs15_pd[2];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	nvs15_pd[4] = x[2] + x[2];
	v[0] += v[1];
	nvs15_pd[5] = 2. * x[0];
	v[1] = nvs15_pd[5] * x[1];
	v[0] += v[1];
	nvs15_pd[6] = 2. * x[0];
	v[1] = nvs15_pd[6] * x[2];
	v[0] += v[1];
	v[0] += 9.;
	rv = v[0] + -8.*x[0];
	rv += -6.*x[1];
	rv += -4.*x[2];
	;}

	if (wantfg & 2) {
	g[2] = nvs15_pd[6] + -4.;
	g[0] = x[2]*2. + -8.;
	g[1] = nvs15_pd[5] + -6.;
	g[0] += x[1]*2.;
	g[2] += nvs15_pd[4];
	g[1] += 2.*nvs15_pd[3];
	g[0] += 2.*nvs15_pd[1];
	}

	return rv;
}

 void
nvs15_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (nvs15_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -2.*x[2];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[1] = -1.;
	J[2] = -2.;
	}
}
#ifdef __cplusplus
	}
#endif
