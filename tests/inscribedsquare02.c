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
 fint inscribedsquare02_auxcom_[1] = { 8 /* nlc */ };
 fint inscribedsquare02_funcom_[39] = {
	8 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	24 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	13,
	17,
	21,
	25,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	3,
	6,
	7,
	8,
	4,
	5,
	7,
	8,
	1,
	3,
	5,
	7,
	2,
	4,
	6,
	8 };

 real inscribedsquare02_boundc_[1+16+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-3.14159265358979,
		3.14159265358979,
		-3.14159265358979,
		3.14159265358979,
		-3.14159265358979,
		3.14159265358979,
		-3.14159265358979,
		3.14159265358979,
		0.,
		1.7e308,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real inscribedsquare02_x0comn_[8] = {
		-3.14159265358979,
		-1.5707963267949,
		0.,
		1.5707963267949,
		1.,
		1.,
		-1.10547073912851e-16,
		3.84734138744358e-16 };

 static real inscribedsquare02_pd[26];
static real inscribedsquare02_old_x[8];
static int inscribedsquare02_xkind = -1;

 static int
inscribedsquare02_xcheck(real *x)
{
	real *x1 = inscribedsquare02_old_x, *xe = x + 8;
	errno = 0;
	if (inscribedsquare02_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	inscribedsquare02_xkind = 0;
	return 1;
	}
 real
inscribedsquare02_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (inscribedsquare02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[4] * x[4];
	inscribedsquare02_pd[24] = x[4] + x[4];
	v[1] = x[5] * x[5];
	inscribedsquare02_pd[25] = x[5] + x[5];
	v[2] = v[0] + v[1];
	;}

	if (wantfg & 2) {
	g[5] = inscribedsquare02_pd[25];
	g[4] = inscribedsquare02_pd[24];
	}

	return v[2];
}

 void
inscribedsquare02_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (inscribedsquare02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	inscribedsquare02_pd[0] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	inscribedsquare02_pd[1] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	v[0] = x[0] * x[0];
	v[1] = x[0] - v[0];
	inscribedsquare02_pd[2] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	inscribedsquare02_pd[3] = -sin(v[1]);
	v[1] = inscribedsquare02_pd[0] * inscribedsquare02_pd[2];
	t1 = v[1] + -x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	inscribedsquare02_pd[4] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	inscribedsquare02_pd[5] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	v[0] = inscribedsquare02_pd[4] * x[0];
	t1 = v[0] + -x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	inscribedsquare02_pd[6] = sin(x[1]);
	if (errno) in_trouble("sin",x[1]);
	inscribedsquare02_pd[7] = cos(x[1]);
	if (errno) in_trouble("sin'",x[1]);
	v[0] = x[1] * x[1];
	v[1] = x[1] - v[0];
	inscribedsquare02_pd[8] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	inscribedsquare02_pd[9] = -sin(v[1]);
	v[1] = inscribedsquare02_pd[6] * inscribedsquare02_pd[8];
	t1 = v[1] + -x[4];
	t1 += -x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	inscribedsquare02_pd[10] = sin(x[1]);
	if (errno) in_trouble("sin",x[1]);
	inscribedsquare02_pd[11] = cos(x[1]);
	if (errno) in_trouble("sin'",x[1]);
	v[0] = inscribedsquare02_pd[10] * x[1];
	t1 = v[0] + -x[5];
	t1 += -x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	inscribedsquare02_pd[12] = sin(x[2]);
	if (errno) in_trouble("sin",x[2]);
	inscribedsquare02_pd[13] = cos(x[2]);
	if (errno) in_trouble("sin'",x[2]);
	v[0] = x[2] * x[2];
	v[1] = x[2] - v[0];
	inscribedsquare02_pd[14] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	inscribedsquare02_pd[15] = -sin(v[1]);
	v[1] = inscribedsquare02_pd[12] * inscribedsquare02_pd[14];
	t1 = v[1] + x[5];
	t1 += -x[6];
	c[4] = t1;

  /***  constraint 6  ***/

	inscribedsquare02_pd[16] = sin(x[2]);
	if (errno) in_trouble("sin",x[2]);
	inscribedsquare02_pd[17] = cos(x[2]);
	if (errno) in_trouble("sin'",x[2]);
	v[0] = inscribedsquare02_pd[16] * x[2];
	t1 = v[0] + -x[4];
	t1 += -x[7];
	c[5] = t1;

  /***  constraint 7  ***/

	inscribedsquare02_pd[18] = sin(x[3]);
	if (errno) in_trouble("sin",x[3]);
	inscribedsquare02_pd[19] = cos(x[3]);
	if (errno) in_trouble("sin'",x[3]);
	v[0] = x[3] * x[3];
	v[1] = x[3] - v[0];
	inscribedsquare02_pd[20] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	inscribedsquare02_pd[21] = -sin(v[1]);
	v[1] = inscribedsquare02_pd[18] * inscribedsquare02_pd[20];
	t1 = v[1] + -x[4];
	t1 += x[5];
	t1 += -x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	inscribedsquare02_pd[22] = sin(x[3]);
	if (errno) in_trouble("sin",x[3]);
	inscribedsquare02_pd[23] = cos(x[3]);
	if (errno) in_trouble("sin'",x[3]);
	v[0] = inscribedsquare02_pd[22] * x[3];
	t1 = v[0] + -x[4];
	t1 += -x[5];
	t1 += -x[7];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = inscribedsquare02_pd[0]*inscribedsquare02_pd[3];
	dv[1] = -dv[0];
	J[0] = dv[0];
	J[0] += dv[1]*x[0];
	J[0] += dv[1]*x[0];
	J[0] += inscribedsquare02_pd[2]*inscribedsquare02_pd[1];
	J[16] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = inscribedsquare02_pd[4];
	J[1] += x[0]*inscribedsquare02_pd[5];
	J[20] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = inscribedsquare02_pd[6]*inscribedsquare02_pd[9];
	dv[1] = -dv[0];
	J[2] = dv[0];
	J[2] += dv[1]*x[1];
	J[2] += dv[1]*x[1];
	J[2] += inscribedsquare02_pd[8]*inscribedsquare02_pd[7];
	J[8] = -1.;
	J[17] = -1.;

   /*** derivatives for constraint 4 ***/

	J[3] = inscribedsquare02_pd[10];
	J[3] += x[1]*inscribedsquare02_pd[11];
	J[12] = -1.;
	J[21] = -1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = inscribedsquare02_pd[12]*inscribedsquare02_pd[15];
	dv[1] = -dv[0];
	J[4] = dv[0];
	J[4] += dv[1]*x[2];
	J[4] += dv[1]*x[2];
	J[4] += inscribedsquare02_pd[14]*inscribedsquare02_pd[13];
	J[13] = 1.;
	J[18] = -1.;

   /*** derivatives for constraint 6 ***/

	J[5] = inscribedsquare02_pd[16];
	J[5] += x[2]*inscribedsquare02_pd[17];
	J[9] = -1.;
	J[22] = -1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = inscribedsquare02_pd[18]*inscribedsquare02_pd[21];
	dv[1] = -dv[0];
	J[6] = dv[0];
	J[6] += dv[1]*x[3];
	J[6] += dv[1]*x[3];
	J[6] += inscribedsquare02_pd[20]*inscribedsquare02_pd[19];
	J[10] = -1.;
	J[14] = 1.;
	J[19] = -1.;

   /*** derivatives for constraint 8 ***/

	J[7] = inscribedsquare02_pd[22];
	J[7] += x[3]*inscribedsquare02_pd[23];
	J[11] = -1.;
	J[15] = -1.;
	J[23] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
