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
 fint ex7_2_3_auxcom_[1] = { 3 /* nlc */ };
 fint ex7_2_3_funcom_[32] = {
	8 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	17 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	8,
	12,
	14,
	16,
	18,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	4,
	5,
	2,
	3,
	5,
	6,
	1,
	4,
	2,
	5,
	3,
	6 };

 real ex7_2_3_boundc_[1+16+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		100.,
		10000.,
		1000.,
		10000.,
		1000.,
		10000.,
		10.,
		1000.,
		10.,
		1000.,
		10.,
		1000.,
		10.,
		1000.,
		10.,
		1000.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real ex7_2_3_x0comn_[8] = {
		100.,
		1000.,
		1000.,
		10.,
		10.,
		10.,
		10.,
		10. };

 static real ex7_2_3_pd[23];
static real ex7_2_3_old_x[8];
static int ex7_2_3_xkind = -1;

 static int
ex7_2_3_xcheck(real *x)
{
	real *x1 = ex7_2_3_old_x, *xe = x + 8;
	errno = 0;
	if (ex7_2_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_2_3_xkind = 0;
	return 1;
	}
 real
ex7_2_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex7_2_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += x[2];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[2] = 1.;
	}

	return rv;
}

 void
ex7_2_3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex7_2_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 833.33252 * x[3];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[1] = v[0] / x[0];
	ex7_2_3_pd[0] = 1. / x[0];
	ex7_2_3_pd[1] = -v[1] * ex7_2_3_pd[0];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[0] = v[1] / x[5];
	ex7_2_3_pd[2] = 1. / x[5];
	ex7_2_3_pd[3] = -v[0] * ex7_2_3_pd[2];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[1] = 100. / x[5];
	ex7_2_3_pd[4] = -v[1] / x[5];
	v[0] += v[1];
	v[1] = x[0] * x[5];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = 83333.333 / v[1];
	ex7_2_3_pd[5] = -v[2] / v[1];
	v[1] = -v[2];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = 1250. * x[4];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	ex7_2_3_pd[6] = 1. / x[1];
	ex7_2_3_pd[7] = -v[1] * ex7_2_3_pd[6];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[0] = v[1] / x[6];
	ex7_2_3_pd[8] = 1. / x[6];
	ex7_2_3_pd[9] = -v[0] * ex7_2_3_pd[8];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = x[3] / x[6];
	ex7_2_3_pd[10] = 1. / x[6];
	ex7_2_3_pd[11] = -v[1] * ex7_2_3_pd[10];
	v[0] += v[1];
	v[1] = 1250. * x[3];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[2] = v[1] / x[1];
	ex7_2_3_pd[12] = 1. / x[1];
	ex7_2_3_pd[13] = -v[2] * ex7_2_3_pd[12];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[2] / x[6];
	ex7_2_3_pd[14] = 1. / x[6];
	ex7_2_3_pd[15] = -v[1] * ex7_2_3_pd[14];
	v[2] = -v[1];
	v[0] += v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[2] * x[7];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = 1250000. / v[0];
	ex7_2_3_pd[16] = -v[1] / v[0];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[0] = x[4] / x[7];
	ex7_2_3_pd[17] = 1. / x[7];
	ex7_2_3_pd[18] = -v[0] * ex7_2_3_pd[17];
	v[1] += v[0];
	v[0] = 2500. * x[4];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[2] = v[0] / x[2];
	ex7_2_3_pd[19] = 1. / x[2];
	ex7_2_3_pd[20] = -v[2] * ex7_2_3_pd[19];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[0] = v[2] / x[7];
	ex7_2_3_pd[21] = 1. / x[7];
	ex7_2_3_pd[22] = -v[0] * ex7_2_3_pd[21];
	v[2] = -v[0];
	v[1] += v[2];
	c[2] = v[1];

  /***  constraint 4  ***/

	t1 = 0.0025*x[3];
	t1 += 0.0025*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -0.0025*x[3];
	t1 += 0.0025*x[4];
	t1 += 0.0025*x[6];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -0.01*x[4];
	t1 += 0.01*x[7];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[11] = -ex7_2_3_pd[5]*x[0];
	J[0] = -ex7_2_3_pd[5]*x[5];
	J[11] += ex7_2_3_pd[4];
	J[11] += ex7_2_3_pd[3];
	J[0] += ex7_2_3_pd[2]*ex7_2_3_pd[1];
	dv[0] = ex7_2_3_pd[2]*ex7_2_3_pd[0];
	J[3] = dv[0]*833.33252;

   /*** derivatives for constraint 2 ***/

	J[13] = -ex7_2_3_pd[15];
	J[1] = -ex7_2_3_pd[14]*ex7_2_3_pd[13];
	dv[0] = -ex7_2_3_pd[14]*ex7_2_3_pd[12];
	J[4] = dv[0]*1250.;
	J[13] += ex7_2_3_pd[11];
	J[4] += ex7_2_3_pd[10];
	J[13] += ex7_2_3_pd[9];
	J[1] += ex7_2_3_pd[8]*ex7_2_3_pd[7];
	dv[1] = ex7_2_3_pd[8]*ex7_2_3_pd[6];
	J[7] = dv[1]*1250.;

   /*** derivatives for constraint 3 ***/

	J[15] = -ex7_2_3_pd[22];
	J[2] = -ex7_2_3_pd[21]*ex7_2_3_pd[20];
	dv[0] = -ex7_2_3_pd[21]*ex7_2_3_pd[19];
	J[8] = dv[0]*2500.;
	J[15] += ex7_2_3_pd[18];
	J[8] += ex7_2_3_pd[17];
	J[15] += ex7_2_3_pd[16]*x[2];
	J[2] += ex7_2_3_pd[16]*x[7];

   /*** derivatives for constraint 4 ***/

	J[5] = 0.0025;
	J[12] = 0.0025;

   /*** derivatives for constraint 5 ***/

	J[6] = -0.0025;
	J[9] = 0.0025;
	J[14] = 0.0025;

   /*** derivatives for constraint 6 ***/

	J[10] = -0.01;
	J[16] = 0.01;
	}
}
#ifdef __cplusplus
	}
#endif
