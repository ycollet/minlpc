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
 fint spring_auxcom_[1] = { 5 /* nlc */ };
 fint spring_funcom_[64] = {
	17 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	40 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	9,
	11,
	15,
	17,
	19,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	39,
	41,

	/* rownos */
	1,
	6,
	1,
	3,
	4,
	5,
	6,
	7,
	4,
	5,
	1,
	2,
	3,
	4,
	2,
	3,
	4,
	5,
	7,
	8,
	7,
	8,
	7,
	8,
	7,
	8,
	7,
	8,
	7,
	8,
	7,
	8,
	7,
	8,
	7,
	8,
	7,
	8,
	7,
	8 };

 real spring_boundc_[1+34+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.414,
		1.7e308,
		0.207,
		1.7e308,
		1.,
		100.,
		1.1,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.00178571428571429,
		0.02,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		189000.,
		0.,
		0.,
		-1.7e308,
		14.,
		-1.7e308,
		3.,
		0.,
		0.,
		1.,
		1.};

 real spring_x0comn_[17] = {
		0.414,
		0.207,
		1.,
		1.1,
		0.,
		0.00178571428571429,
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
		0. };

 static real spring_pd[18];
static real spring_old_x[17];
static int spring_xkind = -1;

 static int
spring_xcheck(real *x)
{
	real *x1 = spring_old_x, *xe = x + 17;
	errno = 0;
	if (spring_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	spring_xkind = 0;
	return 1;
	}
 real
spring_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[1];
	fint wantfg = *needfg;
	if (spring_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 0.7853981635 * x[2];
	spring_pd[14] = v[0] + 1.570796327;
	spring_pd[15] = spring_pd[14] * x[0];
	spring_pd[16] = x[1] * x[1];
	spring_pd[17] = x[1] + x[1];
	v[0] = spring_pd[15] * spring_pd[16];
	;}

	if (wantfg & 2) {
	g[1] = spring_pd[15]*spring_pd[17];
	g[0] = spring_pd[16]*spring_pd[14];
	dv[0] = spring_pd[16]*x[0];
	g[2] = dv[0]*0.7853981635;
	}

	return v[0];
}

 void
spring_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (spring_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = x[0] / x[1];
	spring_pd[0] = 1. / x[1];
	spring_pd[1] = -v[0] * spring_pd[0];
	v[1] = -v[0];
	t1 = v[1] + x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[0] = 0.615 / x[3];
	spring_pd[2] = -v[0] / x[3];
	v[1] = -v[0];
	v[0] = 4. * x[3];
	v[2] = v[0] + -1.;
	v[0] = 4. * x[3];
	v[3] = v[0] + -4.;
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = v[2] / v[3];
	spring_pd[3] = 1. / v[3];
	spring_pd[4] = -v[0] * spring_pd[3];
	v[3] = v[1] - v[0];
	t1 = v[3] + x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	spring_pd[5] = 2546.47908913782 * x[4];
	v[0] = spring_pd[5] * x[3];
	v[1] = x[1] * x[1];
	spring_pd[6] = x[1] + x[1];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	spring_pd[7] = 1. / v[1];
	spring_pd[8] = -v[2] * spring_pd[7];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = pow(x[3], 3.);
	if (errno) in_trouble2("pow",x[3],3.);
	if (x[3] != 0.) {
	spring_pd[9] = 3.*(x[3]*x[3]);
	} else {
	spring_pd[9] = 0.;
	}
	spring_pd[10] = -6.95652173913044e-07 * v[0];
	v[0] = spring_pd[10] * x[2];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	spring_pd[11] = 1. / x[1];
	spring_pd[12] = -v[1] * spring_pd[11];
	t1 = v[1] + x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 1.05 * x[2];
	spring_pd[13] = v[0] + 2.1;
	v[0] = spring_pd[13] * x[1];
	t1 = v[0] + 1000.*x[5];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += x[1];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[1];
	t1 += -0.207*x[6];
	t1 += -0.225*x[7];
	t1 += -0.244*x[8];
	t1 += -0.263*x[9];
	t1 += -0.283*x[10];
	t1 += -0.307*x[11];
	t1 += -0.331*x[12];
	t1 += -0.362*x[13];
	t1 += -0.394*x[14];
	t1 += -0.4375*x[15];
	t1 += -0.5*x[16];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[2] = -spring_pd[1];
	J[0] = -spring_pd[0];
	J[10] = 1.;

   /*** derivatives for constraint 2 ***/

	J[11] = -spring_pd[4]*4.;
	J[11] -= spring_pd[3]*4.;
	J[11] -= spring_pd[2];
	J[14] = 1.;

   /*** derivatives for constraint 3 ***/

	J[3] = spring_pd[8]*spring_pd[6];
	J[12] = spring_pd[7]*spring_pd[5];
	dv[0] = spring_pd[7]*x[3];
	J[15] = dv[0]*2546.47908913782;

   /*** derivatives for constraint 4 ***/

	J[4] = spring_pd[12];
	J[8] = spring_pd[11]*spring_pd[10];
	dv[0] = spring_pd[11]*x[2];
	dv[0] = -dv[0]*6.95652173913044e-07;
	J[13] = dv[0]*spring_pd[9];
	J[16] = 1.;

   /*** derivatives for constraint 5 ***/

	J[5] = spring_pd[13];
	J[9] = x[1]*1.05;
	J[17] = 1000.;

   /*** derivatives for constraint 6 ***/

	J[1] = 1.;
	J[6] = 1.;

   /*** derivatives for constraint 7 ***/

	J[7] = 1.;
	J[18] = -0.207;
	J[20] = -0.225;
	J[22] = -0.244;
	J[24] = -0.263;
	J[26] = -0.283;
	J[28] = -0.307;
	J[30] = -0.331;
	J[32] = -0.362;
	J[34] = -0.394;
	J[36] = -0.4375;
	J[38] = -0.5;

   /*** derivatives for constraint 8 ***/

	J[19] = 1.;
	J[21] = 1.;
	J[23] = 1.;
	J[25] = 1.;
	J[27] = 1.;
	J[29] = 1.;
	J[31] = 1.;
	J[33] = 1.;
	J[35] = 1.;
	J[37] = 1.;
	J[39] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
