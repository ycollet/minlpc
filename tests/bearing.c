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
 fint bearing_auxcom_[1] = { 9 /* nlc */ };
 fint bearing_funcom_[58] = {
	13 /* nvar */,
	1 /* nobj */,
	12 /* ncon */,
	38 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	10,
	13,
	17,
	21,
	23,
	26,
	28,
	30,
	32,
	35,
	38,
	39,

	/* rownos */
	1,
	7,
	8,
	9,
	11,
	2,
	8,
	9,
	11,
	2,
	4,
	6,
	1,
	3,
	4,
	7,
	1,
	4,
	5,
	7,
	2,
	3,
	2,
	4,
	7,
	3,
	10,
	6,
	10,
	5,
	12,
	4,
	5,
	8,
	5,
	9,
	12,
	1 };

 real bearing_boundc_[1+26+24] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		16.,
		1.,
		16.,
		1.,
		16.,
		1.,
		16.,
		1.,
		1000.,
		0.0001,
		1.7e308,
		1.,
		1.7e308,
		-1.7e308,
		50.,
		100.,
		1.7e308,
		1.,
		1.7e308,
		0.0001,
		1.7e308,
		0.01,
		1.7e308,
		0.0001,
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
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		560.,
		560.,
		0.,
		1.7e308,
		-1.7e308,
		0.};

 real bearing_x0comn_[13] = {
		6.,
		5.,
		6.,
		3.,
		1000.,
		1.6,
		1.,
		50.,
		600.,
		1.,
		0.0001,
		0.01,
		0.3 };

 static real bearing_pd[24];
static real bearing_old_x[13];
static int bearing_xkind = -1;

 static int
bearing_xcheck(real *x)
{
	real *x1 = bearing_old_x, *xe = x + 13;
	errno = 0;
	if (bearing_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	bearing_xkind = 0;
	return 1;
	}
 real
bearing_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (bearing_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[5];
	rv += x[12];
	;}

	if (wantfg & 2) {
	g[5] = 1.;
	g[12] = 1.;
	}

	return rv;
}

 void
bearing_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (bearing_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	bearing_pd[0] = -1.42857142857143 * x[3];
	v[0] = bearing_pd[0] * x[4];
	t1 = v[0] + 10000.*x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	bearing_pd[1] = 10. * x[5];
	v[0] = bearing_pd[1] * x[6];
	v[1] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	bearing_pd[2] = 4.*(v[1]/x[0]);
	} else {
	bearing_pd[2] = 0.;
	}
	v[2] = pow(x[1], 4.);
	if (errno) in_trouble2("pow",x[1],4.);
	if (x[1] != 0.) {
	bearing_pd[3] = 4.*(v[2]/x[1]);
	} else {
	bearing_pd[3] = 0.;
	}
	v[3] = v[1] - v[2];
	bearing_pd[4] = 0.00968946189201592 * v[3];
	v[3] = bearing_pd[4] * x[2];
	v[2] = v[0] - v[3];
	c[1] = v[2];

  /***  constraint 3  ***/

	bearing_pd[5] = 143.3076 * x[7];
	v[0] = bearing_pd[5] * x[3];
	t1 = v[0] + -10000.*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 0.001 * x[6];
	v[1] = pow(v[0], 3.);
	if (errno) in_trouble2("pow",v[0],3.);
	if (v[0] != 0.) {
	bearing_pd[6] = 3.*(v[0]*v[0]);
	} else {
	bearing_pd[6] = 0.;
	}
	bearing_pd[7] = 3.1415927 * v[1];
	v[1] = bearing_pd[7] * x[4];
	bearing_pd[8] = 6.e-06 * x[2];
	bearing_pd[9] = bearing_pd[8] * x[3];
	v[0] = bearing_pd[9] * x[10];
	v[2] = v[1] - v[0];
	c[3] = v[2];

  /***  constraint 5  ***/

	bearing_pd[10] = 101000. * x[9];
	v[0] = bearing_pd[10] * x[10];
	bearing_pd[11] = 1.57079635 * x[4];
	v[1] = bearing_pd[11] * x[11];
	v[2] = v[0] - v[1];
	c[4] = v[2];

  /***  constraint 6  ***/

	v[0] = 8.112 * x[2];
	v[1] = v[0] + 0.8;
	v[0] = log10(v[1]);
	if (errno) in_trouble("log10",v[1]);
	bearing_pd[12] = 0.43429448190325176 / v[1];
	v[1] = pow(x[8], -3.55);
	if (errno) in_trouble2("pow",x[8],-3.55);
	if (x[8] > 0.) {
	bearing_pd[13] = -3.55*(v[1]/x[8]);
	} else if (-3.55 > 1.) {
	bearing_pd[13] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],-3.55);
	}
	v[1] *= -10964781961.4318;
	v[2] = v[0] + v[1];
	c[5] = v[2];

  /***  constraint 7  ***/

	bearing_pd[14] = x[3] * x[3];
	bearing_pd[15] = x[3] + x[3];
	v[0] = 0.0307 * bearing_pd[14];
	bearing_pd[16] = 0.0062831854 * x[0];
	v[1] = bearing_pd[16] * x[6];
	bearing_pd[17] = v[1] * v[1];
	bearing_pd[18] = v[1] + v[1];
	bearing_pd[19] = 0.3864 * bearing_pd[17];
	v[1] = bearing_pd[19] * x[4];
	v[2] = v[0] - v[1];
	c[6] = v[2];

  /***  constraint 8  ***/

	v[0] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	bearing_pd[20] = 1. / x[1];
	v[1] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	bearing_pd[21] = 1. / x[0];
	v[2] = v[0] - v[1];
	t1 = v[2] + x[10];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[1] * x[1];
	bearing_pd[22] = x[1] + x[1];
	v[1] = x[0] * x[0];
	bearing_pd[23] = x[0] + x[0];
	v[2] = v[0] - v[1];
	t1 = v[2] + x[11];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -0.5*x[7];
	t1 += x[8];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[0];
	t1 += -x[1];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 101000.*x[9];
	t1 += -15707.9635*x[11];
	c[11] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[16] = bearing_pd[0];
	J[12] = -x[4]*1.42857142857143;
	J[37] = 10000.;

   /*** derivatives for constraint 2 ***/

	J[9] = -bearing_pd[4];
	dv[0] = -x[2]*0.00968946189201592;
	dv[1] = -dv[0];
	J[5] = dv[1]*bearing_pd[3];
	J[0] = dv[0]*bearing_pd[2];
	J[22] = bearing_pd[1];
	J[20] = x[6]*10.;

   /*** derivatives for constraint 3 ***/

	J[13] = bearing_pd[5];
	J[25] = x[3]*143.3076;
	J[21] = -10000.;

   /*** derivatives for constraint 4 ***/

	J[31] = -bearing_pd[9];
	J[14] = -x[10]*bearing_pd[8];
	dv[0] = -x[10]*x[3];
	J[10] = dv[0]*6.e-06;
	J[17] = bearing_pd[7];
	dv[1] = x[4]*3.1415927;
	dv[1] *= bearing_pd[6];
	J[23] = dv[1]*0.001;

   /*** derivatives for constraint 5 ***/

	J[34] = -bearing_pd[11];
	J[18] = -x[11]*1.57079635;
	J[32] = bearing_pd[10];
	J[29] = x[10]*101000.;

   /*** derivatives for constraint 6 ***/

	J[27] = -10964781961.4318*bearing_pd[13];
	J[11] = bearing_pd[12]*8.112;

   /*** derivatives for constraint 7 ***/

	J[19] = -bearing_pd[19];
	dv[0] = -x[4]*0.3864;
	dv[0] *= bearing_pd[18];
	J[24] = dv[0]*bearing_pd[16];
	dv[0] *= x[6];
	J[1] = dv[0]*0.0062831854;
	J[15] = 0.0307*bearing_pd[15];

   /*** derivatives for constraint 8 ***/

	J[2] = -bearing_pd[21];
	J[6] = bearing_pd[20];
	J[33] = 1.;

   /*** derivatives for constraint 9 ***/

	J[3] = -bearing_pd[23];
	J[7] = bearing_pd[22];
	J[35] = 1.;

   /*** derivatives for constraint 10 ***/

	J[26] = -0.5;
	J[28] = 1.;

   /*** derivatives for constraint 11 ***/

	J[4] = 1.;
	J[8] = -1.;

   /*** derivatives for constraint 12 ***/

	J[30] = 101000.;
	J[36] = -15707.9635;
	}
}
#ifdef __cplusplus
	}
#endif
