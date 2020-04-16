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
 fint nvs01_auxcom_[1] = { 2 /* nlc */ };
 fint nvs01_funcom_[17] = {
	3 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	7 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	8,

	/* rownos */
	1,
	2,
	1,
	2,
	1,
	2,
	3 };

 real nvs01_boundc_[1+6+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		100.,
		0.,
		0.,
		0.,
		1.7e308,
		-100.,
		1.7e308};

 real nvs01_x0comn_[3] = {
		100.,
		100.,
		100. };

 static real nvs01_pd[13];
static real nvs01_old_x[3];
static int nvs01_xkind = -1;

 static int
nvs01_xcheck(real *x)
{
	real *x1 = nvs01_old_x, *xe = x + 3;
	errno = 0;
	if (nvs01_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs01_xkind = 0;
	return 1;
	}
 real
nvs01_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[1];
	fint wantfg = *needfg;
	if (nvs01_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	nvs01_pd[9] = x[0] + x[0];
	v[1] = v[0] + 900.;
	nvs01_pd[10] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (nvs01_pd[10] <= 0.) {
	domain_("sqrt'", &nvs01_pd[10], 5L);
	}
	nvs01_pd[11] = 0.5 / nvs01_pd[10];
	nvs01_pd[12] = 0.04712385 * nvs01_pd[10];
	v[1] = nvs01_pd[12] * x[1];
	;}

	if (wantfg & 2) {
	g[1] = nvs01_pd[12];
	dv[0] = x[1]*0.04712385;
	dv[0] *= nvs01_pd[11];
	g[0] = dv[0]*nvs01_pd[9];
	}

	return v[1];
}

 void
nvs01_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (nvs01_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	nvs01_pd[0] = x[0] + x[0];
	v[1] = v[0] + 900.;
	nvs01_pd[1] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (nvs01_pd[1] <= 0.) {
	domain_("sqrt'", &nvs01_pd[1], 5L);
	}
	nvs01_pd[2] = 0.5 / nvs01_pd[1];
	v[1] = 420.169404664517 * nvs01_pd[1];
	nvs01_pd[3] = x[2] * x[0];
	v[0] = nvs01_pd[3] * x[1];
	v[2] = v[1] - v[0];
	c[0] = v[2];

  /***  constraint 2  ***/

	nvs01_pd[4] = x[1] * x[1];
	nvs01_pd[5] = x[1] + x[1];
	v[0] = 18505.4769901875 * nvs01_pd[4];
	v[1] = v[0] + 2960.87631843;
	v[0] = x[0] * x[0];
	nvs01_pd[6] = x[0] + x[0];
	v[2] = v[0] + 7200.;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = v[1] / v[2];
	nvs01_pd[7] = 1. / v[2];
	nvs01_pd[8] = -v[0] * nvs01_pd[7];
	t1 = v[0] + -x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[2];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[2] = -nvs01_pd[3];
	J[0] = -x[1]*x[2];
	J[4] = -x[1]*x[0];
	dv[0] = 420.169404664517*nvs01_pd[2];
	J[0] += dv[0]*nvs01_pd[0];

   /*** derivatives for constraint 2 ***/

	J[1] = nvs01_pd[8]*nvs01_pd[6];
	dv[0] = nvs01_pd[7]*18505.4769901875;
	J[3] = dv[0]*nvs01_pd[5];
	J[5] = -1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
