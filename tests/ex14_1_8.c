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
 fint ex14_1_8_auxcom_[1] = { 4 /* nlc */ };
 fint ex14_1_8_funcom_[20] = {
	3 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	10 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	7,
	11,

	/* rownos */
	1,
	2,
	3,
	4,
	3,
	4,
	1,
	2,
	3,
	4 };

 real ex14_1_8_boundc_[1+6+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real ex14_1_8_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real ex14_1_8_pd[20];
static real ex14_1_8_old_x[3];
static int ex14_1_8_xkind = -1;

 static int
ex14_1_8_xcheck(real *x)
{
	real *x1 = ex14_1_8_old_x, *xe = x + 3;
	errno = 0;
	if (ex14_1_8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_1_8_xkind = 0;
	return 1;
	}
 real
ex14_1_8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_1_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[2];
	;}

	if (wantfg & 2) {
	g[2] = 1.;
	}

	return rv;
}

 void
ex14_1_8_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (ex14_1_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 10. * x[0];
	v[1] = 0.01 * x[0];
	v[2] = v[1] + 1.;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	ex14_1_8_pd[0] = 1. / v[2];
	ex14_1_8_pd[1] = -v[1] * ex14_1_8_pd[0];
	ex14_1_8_pd[2] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex14_1_8_pd[3] = ex14_1_8_pd[2];
	v[1] = -0.0649999999999999 * x[0];
	ex14_1_8_pd[4] = 0.0476666666666666 + v[1];
	v[1] = ex14_1_8_pd[2] * ex14_1_8_pd[4];
	t1 = v[1] + -x[0];
	t1 += -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 10. * x[0];
	v[1] = 0.01 * x[0];
	v[2] = v[1] + 1.;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	ex14_1_8_pd[5] = 1. / v[2];
	ex14_1_8_pd[6] = -v[1] * ex14_1_8_pd[5];
	ex14_1_8_pd[7] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex14_1_8_pd[8] = ex14_1_8_pd[7];
	v[1] = -0.0649999999999999 * x[0];
	ex14_1_8_pd[9] = 0.0476666666666666 + v[1];
	v[1] = ex14_1_8_pd[7] * ex14_1_8_pd[9];
	v[0] = -v[1];
	t1 = v[0] + x[0];
	t1 += -x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 10. * x[1];
	v[1] = 0.01 * x[1];
	v[2] = v[1] + 1.;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	ex14_1_8_pd[10] = 1. / v[2];
	ex14_1_8_pd[11] = -v[1] * ex14_1_8_pd[10];
	ex14_1_8_pd[12] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex14_1_8_pd[13] = ex14_1_8_pd[12];
	ex14_1_8_pd[14] = -0.13 * x[0];
	ex14_1_8_pd[14] += 0.143;
	v[1] = -0.195 * x[1];
	ex14_1_8_pd[14] += v[1];
	v[1] = ex14_1_8_pd[12] * ex14_1_8_pd[14];
	t1 = v[1] + x[0];
	t1 += -3.*x[1];
	t1 += -x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 10. * x[1];
	v[1] = 0.01 * x[1];
	v[2] = v[1] + 1.;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	ex14_1_8_pd[15] = 1. / v[2];
	ex14_1_8_pd[16] = -v[1] * ex14_1_8_pd[15];
	ex14_1_8_pd[17] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex14_1_8_pd[18] = ex14_1_8_pd[17];
	ex14_1_8_pd[19] = -0.13 * x[0];
	ex14_1_8_pd[19] += 0.143;
	v[1] = -0.195 * x[1];
	ex14_1_8_pd[19] += v[1];
	v[1] = ex14_1_8_pd[17] * ex14_1_8_pd[19];
	v[2] = -v[1];
	t1 = v[2] + -x[0];
	t1 += 3.*x[1];
	t1 += -x[2];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -ex14_1_8_pd[2]*0.0649999999999999 + -1.;
	dv[0] = ex14_1_8_pd[4]*ex14_1_8_pd[3];
	dv[1] = dv[0]*ex14_1_8_pd[1];
	dv[0] *= ex14_1_8_pd[0];
	J[0] += dv[1]*0.01;
	J[0] += dv[0]*10.;
	J[6] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = ex14_1_8_pd[7]*0.0649999999999999 + 1.;
	dv[0] = -ex14_1_8_pd[9]*ex14_1_8_pd[8];
	dv[1] = dv[0]*ex14_1_8_pd[6];
	dv[0] *= ex14_1_8_pd[5];
	J[1] += dv[1]*0.01;
	J[1] += dv[0]*10.;
	J[7] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = ex14_1_8_pd[12];
	J[4] = -dv[0]*0.195 + -3.;
	J[2] = -ex14_1_8_pd[12]*0.13 + 1.;
	dv[1] = ex14_1_8_pd[14]*ex14_1_8_pd[13];
	dv[2] = dv[1]*ex14_1_8_pd[11];
	dv[1] *= ex14_1_8_pd[10];
	J[4] += dv[2]*0.01;
	J[4] += dv[1]*10.;
	J[8] = -1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -ex14_1_8_pd[17];
	J[5] = -dv[0]*0.195 + 3.;
	J[3] = ex14_1_8_pd[17]*0.13 + -1.;
	dv[1] = -ex14_1_8_pd[19]*ex14_1_8_pd[18];
	dv[2] = dv[1]*ex14_1_8_pd[16];
	dv[1] *= ex14_1_8_pd[15];
	J[5] += dv[2]*0.01;
	J[5] += dv[1]*10.;
	J[9] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
