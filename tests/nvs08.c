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
 fint nvs08_auxcom_[1] = { 3 /* nlc */ };
 fint nvs08_funcom_[19] = {
	3 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	9 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3,
	1,
	2,
	3 };

 real nvs08_boundc_[1+6+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.001,
		200.,
		0.,
		200.,
		0.,
		200.,
		10.,
		1.7e308,
		-3.,
		1.7e308,
		-12.,
		1.7e308};

 real nvs08_x0comn_[3] = {
		1.,
		1.,
		1. };

 static real nvs08_pd[12];
static real nvs08_old_x[3];
static int nvs08_xkind = -1;

 static int
nvs08_xcheck(real *x)
{
	real *x1 = nvs08_old_x, *xe = x + 3;
	errno = 0;
	if (nvs08_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs08_xkind = 0;
	return 1;
	}
 real
nvs08_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (nvs08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[1] + -3.;
	v[1] = v[0] * v[0];
	nvs08_pd[9] = v[0] + v[0];
	v[0] = x[2] + -2.;
	v[2] = v[0] * v[0];
	nvs08_pd[10] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[0] + 4.;
	v[0] = v[2] * v[2];
	nvs08_pd[11] = v[2] + v[2];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[0] = nvs08_pd[11];
	g[2] = nvs08_pd[10];
	g[1] = nvs08_pd[9];
	}

	return v[1];
}

 void
nvs08_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (nvs08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = sqrt(x[0]);
	if (errno) in_trouble("sqrt",x[0]);
	if (v[0] <= 0.) {
	domain_("sqrt'", &v[0], 5L);
	}
	nvs08_pd[0] = 0.5 / v[0];
	t1 = v[0] + x[1];
	t1 += 2.*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	nvs08_pd[1] = x[1] * x[1];
	nvs08_pd[2] = x[1] + x[1];
	v[0] = 0.240038406144983 * nvs08_pd[1];
	t1 = v[0] + 0.255036980362153*x[0];
	t1 += -x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[2];
	nvs08_pd[3] = x[2] + x[2];
	nvs08_pd[7] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	nvs08_pd[4] = 3.*(x[0]*x[0]);
	} else {
	nvs08_pd[4] = 0.;
	}
	nvs08_pd[5] = sqrt(x[0]);
	if (errno) in_trouble("sqrt",x[0]);
	if (nvs08_pd[5] <= 0.) {
	domain_("sqrt'", &nvs08_pd[5], 5L);
	}
	nvs08_pd[6] = 0.5 / nvs08_pd[5];
	v[2] = nvs08_pd[7] * nvs08_pd[5];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = 1. / v[2];
	nvs08_pd[8] = -v[3] / v[2];
	v[2] = v[0] - v[3];
	t1 = v[2] + -4.*x[1];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = nvs08_pd[0];
	J[3] = 1.;
	J[6] = 2.;

   /*** derivatives for constraint 2 ***/

	J[4] = 0.240038406144983*nvs08_pd[2];
	J[1] = 0.255036980362153;
	J[7] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -nvs08_pd[8]*nvs08_pd[7];
	dv[1] = -nvs08_pd[8]*nvs08_pd[5];
	J[2] = dv[0]*nvs08_pd[6];
	J[2] += dv[1]*nvs08_pd[4];
	J[8] = nvs08_pd[3];
	J[5] = -4.;
	}
}
#ifdef __cplusplus
	}
#endif
