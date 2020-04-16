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
 fint shiporig_auxcom_[1] = { 7 /* nlc */ };
 fint shiporig_funcom_[65] = {
	10 /* nvar */,
	1 /* nobj */,
	17 /* ncon */,
	48 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	17,
	25,
	32,
	35,
	38,
	41,
	49,

	/* rownos */
	1,
	11,
	14,
	2,
	12,
	15,
	3,
	13,
	16,
	1,
	2,
	3,
	4,
	11,
	12,
	13,
	1,
	2,
	3,
	4,
	14,
	15,
	16,
	17,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	1,
	5,
	8,
	2,
	6,
	9,
	3,
	7,
	10,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	17 };

 real shiporig_boundc_[1+20+34] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.05,
		1.7e308,
		1.05,
		1.7e308,
		1.05,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		1.,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.,
		1.7e308};

 real shiporig_x0comn_[10] = {
		1.2,
		1.2,
		1.3,
		45.8,
		43.2,
		76.3939536510076,
		934.032,
		934.032,
		1011.868,
		30.5 };

 static real shiporig_pd[21];
static real shiporig_old_x[10];
static int shiporig_xkind = -1;

 static int
shiporig_xcheck(real *x)
{
	real *x1 = shiporig_old_x, *xe = x + 10;
	errno = 0;
	if (shiporig_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	shiporig_xkind = 0;
	return 1;
	}
 real
shiporig_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[5];
	fint wantfg = *needfg;
	if (shiporig_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 0.0039 * x[3];
	v[1] = 0.0039 * x[4];
	shiporig_pd[18] = v[0] + v[1];
	shiporig_pd[16] = 495. * x[0];
	v[1] = 385. * x[1];
	shiporig_pd[17] = shiporig_pd[16] + v[1];
	v[0] = 315. * x[2];
	shiporig_pd[17] += v[0];
	v[0] = shiporig_pd[18] * shiporig_pd[17];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[3] = v[0] / x[5];
	shiporig_pd[19] = 1. / x[5];
	shiporig_pd[20] = -v[3] * shiporig_pd[19];
	;}

	if (wantfg & 2) {
	g[5] = shiporig_pd[20];
	dv[0] = shiporig_pd[19]*shiporig_pd[18];
	dv[1] = shiporig_pd[19]*shiporig_pd[17];
	dv[2] = dv[0];
	g[2] = dv[2]*315.;
	dv[3] = dv[0];
	g[1] = dv[3]*385.;
	g[0] = dv[0]*495.;
	dv[4] = dv[1];
	g[4] = dv[4]*0.0039;
	g[3] = dv[1]*0.0039;
	}

	return v[3];
}

 void
shiporig_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (shiporig_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	shiporig_pd[0] = -0.5 * x[9];
	shiporig_pd[1] = shiporig_pd[0] * x[0];
	v[0] = 0.8 * x[3];
	v[1] = 0.333333333333333 * x[4];
	shiporig_pd[2] = v[0] + v[1];
	v[1] = shiporig_pd[1] * shiporig_pd[2];
	t1 = v[1] + x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	shiporig_pd[3] = -0.5 * x[9];
	shiporig_pd[4] = shiporig_pd[3] * x[1];
	v[0] = 0.8 * x[3];
	v[1] = 0.333333333333333 * x[4];
	shiporig_pd[5] = v[0] + v[1];
	v[1] = shiporig_pd[4] * shiporig_pd[5];
	t1 = v[1] + x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	shiporig_pd[6] = -0.5 * x[9];
	shiporig_pd[7] = shiporig_pd[6] * x[2];
	v[0] = 0.8 * x[3];
	v[1] = 0.333333333333333 * x[4];
	shiporig_pd[8] = v[0] + v[1];
	v[1] = shiporig_pd[7] * shiporig_pd[8];
	t1 = v[1] + x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[4] * x[4];
	v[1] = x[9] * x[9];
	v[2] = v[0] - v[1];
	v[1] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	shiporig_pd[9] = 0.5 / v[1];
	v[2] = -v[1];
	t1 = v[2] + -x[3];
	t1 += x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	shiporig_pd[10] = 0.5 * x[6];
	v[0] = shiporig_pd[10] * x[9];
	v[1] = 8.4652734375 * x[5];
	v[2] = pow(v[1], 1.33333333333333);
	if (errno) in_trouble2("pow",v[1],1.33333333333333);
	if (v[1] > 0.) {
	shiporig_pd[11] = 1.33333333333333*(v[2]/v[1]);
	} else if (1.33333333333333 > 1.) {
	shiporig_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.33333333333333);
	}
	v[2] *= -2.2;
	v[1] = v[0] + v[2];
	c[4] = v[1];

  /***  constraint 6  ***/

	shiporig_pd[12] = 0.5 * x[7];
	v[0] = shiporig_pd[12] * x[9];
	v[1] = 9.65006510416667 * x[5];
	v[2] = pow(v[1], 1.33333333333333);
	if (errno) in_trouble2("pow",v[1],1.33333333333333);
	if (v[1] > 0.) {
	shiporig_pd[13] = 1.33333333333333*(v[2]/v[1]);
	} else if (1.33333333333333 > 1.) {
	shiporig_pd[13] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.33333333333333);
	}
	v[2] *= -2.2;
	v[1] = v[0] + v[2];
	c[5] = v[1];

  /***  constraint 7  ***/

	shiporig_pd[14] = 0.5 * x[8];
	v[0] = shiporig_pd[14] * x[9];
	v[1] = 8.8716796875 * x[5];
	v[2] = pow(v[1], 1.33333333333333);
	if (errno) in_trouble2("pow",v[1],1.33333333333333);
	if (v[1] > 0.) {
	shiporig_pd[15] = 1.33333333333333*(v[2]/v[1]);
	} else if (1.33333333333333 > 1.) {
	shiporig_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.33333333333333);
	}
	v[2] *= -2.2;
	v[1] = v[0] + v[2];
	c[6] = v[1];

  /***  constraint 8  ***/

	t1 = -8.4652734375*x[5];
	t1 += x[6];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -9.65006510416667*x[5];
	t1 += x[7];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -8.8716796875*x[5];
	t1 += x[8];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[0];
	t1 += -0.0111771747883801*x[3];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[1];
	t1 += -0.0137655360411427*x[3];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[2];
	t1 += -0.0155663872253648*x[3];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[0];
	t1 += -0.0111771747883801*x[4];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[1];
	t1 += -0.0137655360411427*x[4];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[2];
	t1 += -0.0155663872253648*x[4];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[4];
	t1 += -x[9];
	c[16] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = shiporig_pd[1];
	J[16] = dv[0]*0.333333333333333;
	J[9] = shiporig_pd[1]*0.8;
	J[0] = shiporig_pd[2]*shiporig_pd[0];
	dv[1] = shiporig_pd[2]*x[0];
	J[40] = -dv[1]*0.5;
	J[31] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = shiporig_pd[4];
	J[17] = dv[0]*0.333333333333333;
	J[10] = shiporig_pd[4]*0.8;
	J[3] = shiporig_pd[5]*shiporig_pd[3];
	dv[1] = shiporig_pd[5]*x[1];
	J[41] = -dv[1]*0.5;
	J[34] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = shiporig_pd[7];
	J[18] = dv[0]*0.333333333333333;
	J[11] = shiporig_pd[7]*0.8;
	J[6] = shiporig_pd[8]*shiporig_pd[6];
	dv[1] = shiporig_pd[8]*x[2];
	J[42] = -dv[1]*0.5;
	J[37] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = shiporig_pd[9];
	J[43] = dv[0]*x[9];
	J[43] += dv[0]*x[9];
	J[19] = -shiporig_pd[9]*x[4];
	J[19] -= shiporig_pd[9]*x[4];
	J[12] = -1.;
	J[24] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -2.2*shiporig_pd[11];
	J[25] = dv[0]*8.4652734375;
	J[44] = shiporig_pd[10];
	J[32] = x[9]*0.5;

   /*** derivatives for constraint 6 ***/

	dv[0] = -2.2*shiporig_pd[13];
	J[26] = dv[0]*9.65006510416667;
	J[45] = shiporig_pd[12];
	J[35] = x[9]*0.5;

   /*** derivatives for constraint 7 ***/

	dv[0] = -2.2*shiporig_pd[15];
	J[27] = dv[0]*8.8716796875;
	J[46] = shiporig_pd[14];
	J[38] = x[9]*0.5;

   /*** derivatives for constraint 8 ***/

	J[28] = -8.4652734375;
	J[33] = 1.;

   /*** derivatives for constraint 9 ***/

	J[29] = -9.65006510416667;
	J[36] = 1.;

   /*** derivatives for constraint 10 ***/

	J[30] = -8.8716796875;
	J[39] = 1.;

   /*** derivatives for constraint 11 ***/

	J[1] = 1.;
	J[13] = -0.0111771747883801;

   /*** derivatives for constraint 12 ***/

	J[4] = 1.;
	J[14] = -0.0137655360411427;

   /*** derivatives for constraint 13 ***/

	J[7] = 1.;
	J[15] = -0.0155663872253648;

   /*** derivatives for constraint 14 ***/

	J[2] = 1.;
	J[20] = -0.0111771747883801;

   /*** derivatives for constraint 15 ***/

	J[5] = 1.;
	J[21] = -0.0137655360411427;

   /*** derivatives for constraint 16 ***/

	J[8] = 1.;
	J[22] = -0.0155663872253648;

   /*** derivatives for constraint 17 ***/

	J[23] = 1.;
	J[47] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
