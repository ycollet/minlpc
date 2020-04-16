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
 fint ex14_2_2_auxcom_[1] = { 4 /* nlc */ };
 fint ex14_2_2_funcom_[29] = {
	4 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	18 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	15,
	19,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real ex14_2_2_boundc_[1+8+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-06,
		1.,
		1.e-06,
		1.,
		20.,
		80.,
		0.,
		1.7e308,
		-1.7e308,
		12.9738026256517,
		-1.7e308,
		10.2081676704566,
		-1.7e308,
		-12.9738026256517,
		-1.7e308,
		-10.2081676704566,
		1.,
		1.};

 real ex14_2_2_x0comn_[4] = {
		0.624,
		0.376,
		58.129,
		0. };

 static real ex14_2_2_pd[24];
static real ex14_2_2_old_x[4];
static int ex14_2_2_xkind = -1;

 static int
ex14_2_2_xcheck(real *x)
{
	real *x1 = ex14_2_2_old_x, *xe = x + 4;
	errno = 0;
	if (ex14_2_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_2_2_xkind = 0;
	return 1;
	}
 real
ex14_2_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_2_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[3];
	;}

	if (wantfg & 2) {
	g[3] = 1.;
	}

	return rv;
}

 void
ex14_2_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex14_2_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.191987347447993 * x[1];
	v[1] = x[0] + v[0];
	v[0] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex14_2_2_pd[0] = 1. / v[1];
	v[1] = 0.191987347447993 * x[1];
	v[2] = x[0] + v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[0] / v[2];
	ex14_2_2_pd[1] = 1. / v[2];
	ex14_2_2_pd[2] = -v[1] * ex14_2_2_pd[1];
	v[0] += v[1];
	v[1] = 0.315693799947296 * x[1];
	v[2] = 0.315693799947296 * x[0];
	v[3] = v[2] + x[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[1] / v[3];
	ex14_2_2_pd[3] = 1. / v[3];
	ex14_2_2_pd[4] = -v[2] * ex14_2_2_pd[3];
	v[0] += v[2];
	v[2] = x[2] + 239.726;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = 3643.31361767678 / v[2];
	ex14_2_2_pd[5] = -v[3] / v[2];
	v[0] += v[3];
	t1 = v[0] + -x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.315693799947296 * x[0];
	v[1] = v[0] + x[1];
	v[0] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex14_2_2_pd[6] = 1. / v[1];
	v[1] = 0.191987347447993 * x[0];
	v[2] = 0.191987347447993 * x[1];
	v[3] = x[0] + v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[1] / v[3];
	ex14_2_2_pd[7] = 1. / v[3];
	ex14_2_2_pd[8] = -v[2] * ex14_2_2_pd[7];
	v[0] += v[2];
	v[2] = 0.315693799947296 * x[0];
	v[3] = v[2] + x[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = x[1] / v[3];
	ex14_2_2_pd[9] = 1. / v[3];
	ex14_2_2_pd[10] = -v[2] * ex14_2_2_pd[9];
	v[0] += v[2];
	v[2] = x[2] + 219.161;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = 2755.64173589155 / v[2];
	ex14_2_2_pd[11] = -v[3] / v[2];
	v[0] += v[3];
	t1 = v[0] + -x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 0.191987347447993 * x[1];
	v[1] = x[0] + v[0];
	v[0] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex14_2_2_pd[12] = 1. / v[1];
	v[1] = 0.191987347447993 * x[1];
	v[2] = x[0] + v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[0] / v[2];
	ex14_2_2_pd[13] = 1. / v[2];
	ex14_2_2_pd[14] = -v[1] * ex14_2_2_pd[13];
	v[0] += v[1];
	v[1] = 0.315693799947296 * x[1];
	v[2] = 0.315693799947296 * x[0];
	v[3] = v[2] + x[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[1] / v[3];
	ex14_2_2_pd[15] = 1. / v[3];
	ex14_2_2_pd[16] = -v[2] * ex14_2_2_pd[15];
	v[0] += v[2];
	v[2] = x[2] + 239.726;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = 3643.31361767678 / v[2];
	ex14_2_2_pd[17] = -v[3] / v[2];
	v[0] += v[3];
	v[3] = -v[0];
	t1 = v[3] + -x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 0.315693799947296 * x[0];
	v[1] = v[0] + x[1];
	v[0] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex14_2_2_pd[18] = 1. / v[1];
	v[1] = 0.191987347447993 * x[0];
	v[2] = 0.191987347447993 * x[1];
	v[3] = x[0] + v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[1] / v[3];
	ex14_2_2_pd[19] = 1. / v[3];
	ex14_2_2_pd[20] = -v[2] * ex14_2_2_pd[19];
	v[0] += v[2];
	v[2] = 0.315693799947296 * x[0];
	v[3] = v[2] + x[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = x[1] / v[3];
	ex14_2_2_pd[21] = 1. / v[3];
	ex14_2_2_pd[22] = -v[2] * ex14_2_2_pd[21];
	v[0] += v[2];
	v[2] = x[2] + 219.161;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = 2755.64173589155 / v[2];
	ex14_2_2_pd[23] = -v[3] / v[2];
	v[0] += v[3];
	v[3] = -v[0];
	t1 = v[3] + -x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[1];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[10] = ex14_2_2_pd[5];
	J[5] = ex14_2_2_pd[4];
	J[0] = ex14_2_2_pd[4]*0.315693799947296;
	J[5] += ex14_2_2_pd[3]*0.315693799947296;
	J[0] += ex14_2_2_pd[1];
	dv[0] = ex14_2_2_pd[2];
	J[0] += ex14_2_2_pd[2];
	J[5] += dv[0]*0.191987347447993;
	dv[1] = ex14_2_2_pd[0];
	J[0] += ex14_2_2_pd[0];
	J[5] += dv[1]*0.191987347447993;
	J[14] = -1.;

   /*** derivatives for constraint 2 ***/

	J[11] = ex14_2_2_pd[11];
	J[6] = ex14_2_2_pd[9];
	J[6] += ex14_2_2_pd[10];
	J[1] = ex14_2_2_pd[10]*0.315693799947296;
	dv[0] = ex14_2_2_pd[8];
	J[1] += ex14_2_2_pd[8];
	J[6] += dv[0]*0.191987347447993;
	J[1] += ex14_2_2_pd[7]*0.191987347447993;
	J[6] += ex14_2_2_pd[6];
	J[1] += ex14_2_2_pd[6]*0.315693799947296;
	J[15] = -1.;

   /*** derivatives for constraint 3 ***/

	J[12] = -ex14_2_2_pd[17];
	J[7] = -ex14_2_2_pd[16];
	J[2] = -ex14_2_2_pd[16]*0.315693799947296;
	J[7] -= ex14_2_2_pd[15]*0.315693799947296;
	J[2] -= ex14_2_2_pd[13];
	dv[0] = -ex14_2_2_pd[14];
	J[2] -= ex14_2_2_pd[14];
	J[7] += dv[0]*0.191987347447993;
	dv[1] = -ex14_2_2_pd[12];
	J[2] -= ex14_2_2_pd[12];
	J[7] += dv[1]*0.191987347447993;
	J[16] = -1.;

   /*** derivatives for constraint 4 ***/

	J[13] = -ex14_2_2_pd[23];
	J[8] = -ex14_2_2_pd[21];
	J[8] -= ex14_2_2_pd[22];
	J[3] = -ex14_2_2_pd[22]*0.315693799947296;
	dv[0] = -ex14_2_2_pd[20];
	J[3] -= ex14_2_2_pd[20];
	J[8] += dv[0]*0.191987347447993;
	J[3] -= ex14_2_2_pd[19]*0.191987347447993;
	J[8] -= ex14_2_2_pd[18];
	J[3] -= ex14_2_2_pd[18]*0.315693799947296;
	J[17] = -1.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	J[9] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
