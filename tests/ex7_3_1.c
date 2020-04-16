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
 fint ex7_3_1_auxcom_[1] = { 1 /* nlc */ };
 fint ex7_3_1_funcom_[26] = {
	4 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	15 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	16,

	/* rownos */
	1,
	2,
	3,
	1,
	4,
	5,
	1,
	6,
	7,
	2,
	3,
	4,
	5,
	6,
	7 };

 real ex7_3_1_boundc_[1+8+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		-800.,
		-1.7e308,
		800.,
		-1.7e308,
		-4.,
		-1.7e308,
		4.,
		-1.7e308,
		-6.,
		-1.7e308,
		6.};

 real ex7_3_1_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

 static real ex7_3_1_pd[41];
static real ex7_3_1_old_x[4];
static int ex7_3_1_xkind = -1;

 static int
ex7_3_1_xcheck(real *x)
{
	real *x1 = ex7_3_1_old_x, *xe = x + 4;
	errno = 0;
	if (ex7_3_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_3_1_xkind = 0;
	return 1;
	}
 real
ex7_3_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex7_3_1_xcheck(x) && wantfg == 2)
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
ex7_3_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[11];
	real t1;
	fint wantfg = *needfg;
	if (ex7_3_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex7_3_1_pd[0] = x[1] * x[1];
	ex7_3_1_pd[1] = x[1] + x[1];
	ex7_3_1_pd[2] = 10. * ex7_3_1_pd[0];
	ex7_3_1_pd[4] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	ex7_3_1_pd[3] = 3.*(x[2]*x[2]);
	} else {
	ex7_3_1_pd[3] = 0.;
	}
	v[1] = ex7_3_1_pd[2] * ex7_3_1_pd[4];
	v[2] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	ex7_3_1_pd[5] = 3.*(x[1]*x[1]);
	} else {
	ex7_3_1_pd[5] = 0.;
	}
	ex7_3_1_pd[6] = 10. * v[2];
	ex7_3_1_pd[7] = x[2] * x[2];
	ex7_3_1_pd[8] = x[2] + x[2];
	v[2] = ex7_3_1_pd[6] * ex7_3_1_pd[7];
	v[1] += v[2];
	ex7_3_1_pd[9] = x[1] * x[1];
	ex7_3_1_pd[10] = x[1] + x[1];
	ex7_3_1_pd[11] = 200. * ex7_3_1_pd[9];
	ex7_3_1_pd[12] = x[2] * x[2];
	ex7_3_1_pd[13] = x[2] + x[2];
	v[2] = ex7_3_1_pd[11] * ex7_3_1_pd[12];
	v[1] += v[2];
	v[2] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	ex7_3_1_pd[14] = 3.*(x[1]*x[1]);
	} else {
	ex7_3_1_pd[14] = 0.;
	}
	ex7_3_1_pd[15] = 100. * v[2];
	v[2] = ex7_3_1_pd[15] * x[2];
	v[1] += v[2];
	v[2] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	ex7_3_1_pd[16] = 3.*(x[2]*x[2]);
	} else {
	ex7_3_1_pd[16] = 0.;
	}
	ex7_3_1_pd[17] = 100. * v[2];
	v[2] = ex7_3_1_pd[17] * x[1];
	v[1] += v[2];
	ex7_3_1_pd[18] = x[0] * x[1];
	ex7_3_1_pd[19] = x[2] * x[2];
	ex7_3_1_pd[20] = x[2] + x[2];
	v[2] = ex7_3_1_pd[18] * ex7_3_1_pd[19];
	v[1] += v[2];
	ex7_3_1_pd[21] = x[1] * x[1];
	ex7_3_1_pd[22] = x[1] + x[1];
	ex7_3_1_pd[23] = ex7_3_1_pd[21] * x[0];
	v[2] = ex7_3_1_pd[23] * x[2];
	v[1] += v[2];
	ex7_3_1_pd[24] = x[2] * x[2];
	ex7_3_1_pd[25] = x[2] + x[2];
	ex7_3_1_pd[26] = 1000. * ex7_3_1_pd[24];
	v[2] = ex7_3_1_pd[26] * x[1];
	v[1] += v[2];
	ex7_3_1_pd[27] = x[2] * x[2];
	ex7_3_1_pd[28] = x[2] + x[2];
	ex7_3_1_pd[29] = 8. * ex7_3_1_pd[27];
	v[2] = ex7_3_1_pd[29] * x[0];
	v[1] += v[2];
	ex7_3_1_pd[30] = x[1] * x[1];
	ex7_3_1_pd[31] = x[1] + x[1];
	ex7_3_1_pd[32] = 1000. * ex7_3_1_pd[30];
	v[2] = ex7_3_1_pd[32] * x[2];
	v[1] += v[2];
	ex7_3_1_pd[33] = x[1] * x[1];
	ex7_3_1_pd[34] = x[1] + x[1];
	ex7_3_1_pd[35] = 8. * ex7_3_1_pd[33];
	v[2] = ex7_3_1_pd[35] * x[0];
	v[1] += v[2];
	ex7_3_1_pd[36] = 6. * x[0];
	ex7_3_1_pd[37] = ex7_3_1_pd[36] * x[1];
	v[2] = ex7_3_1_pd[37] * x[2];
	v[1] += v[2];
	v[2] = x[0] * x[0];
	ex7_3_1_pd[38] = x[0] + x[0];
	v[3] = -v[2];
	v[1] += v[3];
	ex7_3_1_pd[39] = 60. * x[0];
	v[3] = ex7_3_1_pd[39] * x[2];
	v[1] += v[3];
	ex7_3_1_pd[40] = 60. * x[0];
	v[3] = ex7_3_1_pd[40] * x[1];
	v[1] += v[3];
	t1 = v[1] + -200.*x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += -800.*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += -800.*x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[1];
	t1 += -2.*x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[1];
	t1 += -2.*x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[2];
	t1 += -3.*x[3];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += -3.*x[3];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[3] = ex7_3_1_pd[40];
	J[0] = x[1]*60. + -200.;
	J[6] = ex7_3_1_pd[39];
	J[0] += x[2]*60.;
	J[0] -= ex7_3_1_pd[38];
	J[6] += ex7_3_1_pd[37];
	J[3] += x[2]*ex7_3_1_pd[36];
	dv[0] = x[2]*x[1];
	J[0] += dv[0]*6.;
	J[0] += ex7_3_1_pd[35];
	dv[1] = x[0]*8.;
	J[3] += dv[1]*ex7_3_1_pd[34];
	J[6] += ex7_3_1_pd[32];
	dv[2] = x[2]*1000.;
	J[3] += dv[2]*ex7_3_1_pd[31];
	J[0] += ex7_3_1_pd[29];
	dv[3] = x[0]*8.;
	J[6] += dv[3]*ex7_3_1_pd[28];
	J[3] += ex7_3_1_pd[26];
	dv[4] = x[1]*1000.;
	J[6] += dv[4]*ex7_3_1_pd[25];
	J[6] += ex7_3_1_pd[23];
	J[0] += x[2]*ex7_3_1_pd[21];
	dv[5] = x[2]*x[0];
	J[3] += dv[5]*ex7_3_1_pd[22];
	J[6] += ex7_3_1_pd[18]*ex7_3_1_pd[20];
	J[3] += ex7_3_1_pd[19]*x[0];
	J[0] += ex7_3_1_pd[19]*x[1];
	J[3] += ex7_3_1_pd[17];
	dv[6] = x[1]*100.;
	J[6] += dv[6]*ex7_3_1_pd[16];
	J[6] += ex7_3_1_pd[15];
	dv[7] = x[2]*100.;
	J[3] += dv[7]*ex7_3_1_pd[14];
	J[6] += ex7_3_1_pd[11]*ex7_3_1_pd[13];
	dv[8] = ex7_3_1_pd[12]*200.;
	J[3] += dv[8]*ex7_3_1_pd[10];
	J[6] += ex7_3_1_pd[6]*ex7_3_1_pd[8];
	dv[9] = ex7_3_1_pd[7]*10.;
	J[3] += dv[9]*ex7_3_1_pd[5];
	J[6] += ex7_3_1_pd[2]*ex7_3_1_pd[3];
	dv[10] = ex7_3_1_pd[4]*10.;
	J[3] += dv[10]*ex7_3_1_pd[1];

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[9] = -800.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[10] = -800.;

   /*** derivatives for constraint 4 ***/

	J[4] = -1.;
	J[11] = -2.;

   /*** derivatives for constraint 5 ***/

	J[5] = 1.;
	J[12] = -2.;

   /*** derivatives for constraint 6 ***/

	J[7] = -1.;
	J[13] = -3.;

   /*** derivatives for constraint 7 ***/

	J[8] = 1.;
	J[14] = -3.;
	}
}
#ifdef __cplusplus
	}
#endif
