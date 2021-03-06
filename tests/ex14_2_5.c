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
 fint ex14_2_5_auxcom_[1] = { 4 /* nlc */ };
 fint ex14_2_5_funcom_[29] = {
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

 real ex14_2_5_boundc_[1+8+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-06,
		1.,
		1.e-06,
		1.,
		60.,
		100.,
		0.,
		1.7e308,
		-1.7e308,
		-9.20816767045657,
		-1.7e308,
		-12.6599269316621,
		-1.7e308,
		9.20816767045657,
		-1.7e308,
		12.6599269316621,
		1.,
		1.};

 real ex14_2_5_x0comn_[4] = {
		0.937,
		1.e-06,
		80.166,
		0. };

 static real ex14_2_5_pd[52];
static real ex14_2_5_old_x[4];
static int ex14_2_5_xkind = -1;

 static int
ex14_2_5_xcheck(real *x)
{
	real *x1 = ex14_2_5_old_x, *xe = x + 4;
	errno = 0;
	if (ex14_2_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_2_5_xkind = 0;
	return 1;
	}
 real
ex14_2_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_2_5_xcheck(x) && wantfg == 2)
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
ex14_2_5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[6];
	real t1;
	fint wantfg = *needfg;
	if (ex14_2_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.361872516756437 * x[1];
	v[1] = 0.888649896608059 * x[1];
	v[2] = x[0] + v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	ex14_2_5_pd[0] = 1. / v[2];
	ex14_2_5_pd[1] = -v[1] * ex14_2_5_pd[0];
	v[2] = 0.868134622480909 * x[1];
	v[0] = 0.696880695582072 * x[0];
	v[3] = v[0] + x[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = v[2] / v[3];
	ex14_2_5_pd[2] = 1. / v[3];
	ex14_2_5_pd[3] = -v[0] * ex14_2_5_pd[2];
	v[1] += v[0];
	ex14_2_5_pd[4] = 0.361872516756437 * x[0];
	v[0] = ex14_2_5_pd[4] * x[1];
	v[3] = 0.888649896608059 * x[1];
	v[2] = x[0] + v[3];
	v[3] = v[2] * v[2];
	ex14_2_5_pd[5] = v[2] + v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[0] / v[3];
	ex14_2_5_pd[6] = 1. / v[3];
	ex14_2_5_pd[7] = -v[2] * ex14_2_5_pd[6];
	v[3] = -v[2];
	v[1] += v[3];
	ex14_2_5_pd[8] = 0.604986259573375 * x[1];
	v[3] = ex14_2_5_pd[8] * x[0];
	v[2] = 0.696880695582072 * x[0];
	v[0] = v[2] + x[1];
	v[2] = v[0] * v[0];
	ex14_2_5_pd[9] = v[0] + v[0];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = v[3] / v[2];
	ex14_2_5_pd[10] = 1. / v[2];
	ex14_2_5_pd[11] = -v[0] * ex14_2_5_pd[10];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[2] + 219.161;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = 2755.64173589155 / v[2];
	ex14_2_5_pd[12] = -v[0] / v[2];
	v[2] = -v[0];
	v[1] += v[2];
	t1 = v[1] + -x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.868134622480909 * x[0];
	v[1] = 0.696880695582072 * x[0];
	v[2] = v[1] + x[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	ex14_2_5_pd[13] = 1. / v[2];
	ex14_2_5_pd[14] = -v[1] * ex14_2_5_pd[13];
	v[2] = 0.361872516756437 * x[0];
	v[0] = 0.888649896608059 * x[1];
	v[3] = x[0] + v[0];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = v[2] / v[3];
	ex14_2_5_pd[15] = 1. / v[3];
	ex14_2_5_pd[16] = -v[0] * ex14_2_5_pd[15];
	v[1] += v[0];
	ex14_2_5_pd[17] = 0.321577974600906 * x[0];
	v[0] = ex14_2_5_pd[17] * x[1];
	v[3] = 0.888649896608059 * x[1];
	v[2] = x[0] + v[3];
	v[3] = v[2] * v[2];
	ex14_2_5_pd[18] = v[2] + v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[0] / v[3];
	ex14_2_5_pd[19] = 1. / v[3];
	ex14_2_5_pd[20] = -v[2] * ex14_2_5_pd[19];
	v[3] = -v[2];
	v[1] += v[3];
	ex14_2_5_pd[21] = 0.868134622480909 * x[1];
	v[3] = ex14_2_5_pd[21] * x[0];
	v[2] = 0.696880695582072 * x[0];
	v[0] = v[2] + x[1];
	v[2] = v[0] * v[0];
	ex14_2_5_pd[22] = v[0] + v[0];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = v[3] / v[2];
	ex14_2_5_pd[23] = 1. / v[2];
	ex14_2_5_pd[24] = -v[0] * ex14_2_5_pd[23];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[2] + 227.438;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = 4117.06819797521 / v[2];
	ex14_2_5_pd[25] = -v[0] / v[2];
	v[2] = -v[0];
	v[1] += v[2];
	t1 = v[1] + -x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = -0.361872516756437 * x[1];
	v[1] = 0.888649896608059 * x[1];
	v[2] = x[0] + v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	ex14_2_5_pd[26] = 1. / v[2];
	ex14_2_5_pd[27] = -v[1] * ex14_2_5_pd[26];
	v[2] = 0.868134622480909 * x[1];
	v[0] = 0.696880695582072 * x[0];
	v[3] = v[0] + x[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = v[2] / v[3];
	ex14_2_5_pd[28] = 1. / v[3];
	ex14_2_5_pd[29] = -v[0] * ex14_2_5_pd[28];
	v[3] = -v[0];
	v[1] += v[3];
	ex14_2_5_pd[30] = 0.361872516756437 * x[0];
	v[3] = ex14_2_5_pd[30] * x[1];
	v[0] = 0.888649896608059 * x[1];
	v[2] = x[0] + v[0];
	v[0] = v[2] * v[2];
	ex14_2_5_pd[31] = v[2] + v[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = v[3] / v[0];
	ex14_2_5_pd[32] = 1. / v[0];
	ex14_2_5_pd[33] = -v[2] * ex14_2_5_pd[32];
	v[1] += v[2];
	ex14_2_5_pd[34] = 0.604986259573375 * x[1];
	v[2] = ex14_2_5_pd[34] * x[0];
	v[0] = 0.696880695582072 * x[0];
	v[3] = v[0] + x[1];
	v[0] = v[3] * v[3];
	ex14_2_5_pd[35] = v[3] + v[3];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[2] / v[0];
	ex14_2_5_pd[36] = 1. / v[0];
	ex14_2_5_pd[37] = -v[3] * ex14_2_5_pd[36];
	v[1] += v[3];
	v[3] = x[2] + 219.161;
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = 2755.64173589155 / v[3];
	ex14_2_5_pd[38] = -v[0] / v[3];
	v[1] += v[0];
	t1 = v[1] + -x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = -0.868134622480909 * x[0];
	v[1] = 0.696880695582072 * x[0];
	v[2] = v[1] + x[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	ex14_2_5_pd[39] = 1. / v[2];
	ex14_2_5_pd[40] = -v[1] * ex14_2_5_pd[39];
	v[2] = 0.361872516756437 * x[0];
	v[0] = 0.888649896608059 * x[1];
	v[3] = x[0] + v[0];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = v[2] / v[3];
	ex14_2_5_pd[41] = 1. / v[3];
	ex14_2_5_pd[42] = -v[0] * ex14_2_5_pd[41];
	v[3] = -v[0];
	v[1] += v[3];
	ex14_2_5_pd[43] = 0.321577974600906 * x[0];
	v[3] = ex14_2_5_pd[43] * x[1];
	v[0] = 0.888649896608059 * x[1];
	v[2] = x[0] + v[0];
	v[0] = v[2] * v[2];
	ex14_2_5_pd[44] = v[2] + v[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = v[3] / v[0];
	ex14_2_5_pd[45] = 1. / v[0];
	ex14_2_5_pd[46] = -v[2] * ex14_2_5_pd[45];
	v[1] += v[2];
	ex14_2_5_pd[47] = 0.868134622480909 * x[1];
	v[2] = ex14_2_5_pd[47] * x[0];
	v[0] = 0.696880695582072 * x[0];
	v[3] = v[0] + x[1];
	v[0] = v[3] * v[3];
	ex14_2_5_pd[48] = v[3] + v[3];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[2] / v[0];
	ex14_2_5_pd[49] = 1. / v[0];
	ex14_2_5_pd[50] = -v[3] * ex14_2_5_pd[49];
	v[1] += v[3];
	v[3] = x[2] + 227.438;
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = 4117.06819797521 / v[3];
	ex14_2_5_pd[51] = -v[0] / v[3];
	v[1] += v[0];
	t1 = v[1] + -x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[1];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[10] = -ex14_2_5_pd[12];
	dv[0] = -ex14_2_5_pd[11]*ex14_2_5_pd[9];
	J[5] = dv[0];
	J[0] = dv[0]*0.696880695582072;
	J[0] -= ex14_2_5_pd[10]*ex14_2_5_pd[8];
	dv[1] = -ex14_2_5_pd[10]*x[0];
	J[5] += dv[1]*0.604986259573375;
	dv[2] = -ex14_2_5_pd[7]*ex14_2_5_pd[5];
	dv[3] = dv[2];
	J[0] += dv[2];
	J[5] += dv[3]*0.888649896608059;
	J[5] -= ex14_2_5_pd[6]*ex14_2_5_pd[4];
	dv[4] = -ex14_2_5_pd[6]*x[1];
	J[0] += dv[4]*0.361872516756437;
	J[5] += ex14_2_5_pd[3];
	J[0] += ex14_2_5_pd[3]*0.696880695582072;
	J[5] += ex14_2_5_pd[2]*0.868134622480909;
	dv[5] = ex14_2_5_pd[1];
	J[0] += ex14_2_5_pd[1];
	J[5] += dv[5]*0.888649896608059;
	J[5] += ex14_2_5_pd[0]*0.361872516756437;
	J[14] = -1.;

   /*** derivatives for constraint 2 ***/

	J[11] = -ex14_2_5_pd[25];
	dv[0] = -ex14_2_5_pd[24]*ex14_2_5_pd[22];
	J[6] = dv[0];
	J[1] = dv[0]*0.696880695582072;
	J[1] -= ex14_2_5_pd[23]*ex14_2_5_pd[21];
	dv[1] = -ex14_2_5_pd[23]*x[0];
	J[6] += dv[1]*0.868134622480909;
	dv[2] = -ex14_2_5_pd[20]*ex14_2_5_pd[18];
	dv[3] = dv[2];
	J[1] += dv[2];
	J[6] += dv[3]*0.888649896608059;
	J[6] -= ex14_2_5_pd[19]*ex14_2_5_pd[17];
	dv[4] = -ex14_2_5_pd[19]*x[1];
	J[1] += dv[4]*0.321577974600906;
	dv[5] = ex14_2_5_pd[16];
	J[1] += ex14_2_5_pd[16];
	J[6] += dv[5]*0.888649896608059;
	J[1] += ex14_2_5_pd[15]*0.361872516756437;
	J[6] += ex14_2_5_pd[14];
	J[1] += ex14_2_5_pd[14]*0.696880695582072;
	J[1] += ex14_2_5_pd[13]*0.868134622480909;
	J[15] = -1.;

   /*** derivatives for constraint 3 ***/

	J[12] = ex14_2_5_pd[38];
	dv[0] = ex14_2_5_pd[37]*ex14_2_5_pd[35];
	J[7] = dv[0];
	J[2] = dv[0]*0.696880695582072;
	J[2] += ex14_2_5_pd[36]*ex14_2_5_pd[34];
	dv[1] = ex14_2_5_pd[36]*x[0];
	J[7] += dv[1]*0.604986259573375;
	dv[2] = ex14_2_5_pd[33]*ex14_2_5_pd[31];
	dv[3] = dv[2];
	J[2] += dv[2];
	J[7] += dv[3]*0.888649896608059;
	J[7] += ex14_2_5_pd[32]*ex14_2_5_pd[30];
	dv[4] = ex14_2_5_pd[32]*x[1];
	J[2] += dv[4]*0.361872516756437;
	J[7] -= ex14_2_5_pd[29];
	J[2] -= ex14_2_5_pd[29]*0.696880695582072;
	J[7] -= ex14_2_5_pd[28]*0.868134622480909;
	dv[5] = ex14_2_5_pd[27];
	J[2] += ex14_2_5_pd[27];
	J[7] += dv[5]*0.888649896608059;
	J[7] -= ex14_2_5_pd[26]*0.361872516756437;
	J[16] = -1.;

   /*** derivatives for constraint 4 ***/

	J[13] = ex14_2_5_pd[51];
	dv[0] = ex14_2_5_pd[50]*ex14_2_5_pd[48];
	J[8] = dv[0];
	J[3] = dv[0]*0.696880695582072;
	J[3] += ex14_2_5_pd[49]*ex14_2_5_pd[47];
	dv[1] = ex14_2_5_pd[49]*x[0];
	J[8] += dv[1]*0.868134622480909;
	dv[2] = ex14_2_5_pd[46]*ex14_2_5_pd[44];
	dv[3] = dv[2];
	J[3] += dv[2];
	J[8] += dv[3]*0.888649896608059;
	J[8] += ex14_2_5_pd[45]*ex14_2_5_pd[43];
	dv[4] = ex14_2_5_pd[45]*x[1];
	J[3] += dv[4]*0.321577974600906;
	dv[5] = -ex14_2_5_pd[42];
	J[3] -= ex14_2_5_pd[42];
	J[8] += dv[5]*0.888649896608059;
	J[3] -= ex14_2_5_pd[41]*0.361872516756437;
	J[8] += ex14_2_5_pd[40];
	J[3] += ex14_2_5_pd[40]*0.696880695582072;
	J[3] -= ex14_2_5_pd[39]*0.868134622480909;
	J[17] = -1.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	J[9] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
