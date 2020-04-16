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
 fint ex8_1_7_auxcom_[1] = { 5 /* nlc */ };
 fint ex8_1_7_funcom_[26] = {
	5 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	14 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	8,
	12,
	13,
	15,

	/* rownos */
	1,
	2,
	5,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	5,
	3,
	4 };

 real ex8_1_7_boundc_[1+10+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-5.,
		5.,
		-5.,
		5.,
		-5.,
		5.,
		-5.,
		5.,
		-5.,
		5.,
		-1.7e308,
		6.24264068711929,
		-1.7e308,
		-6.24264068711929,
		-1.7e308,
		0.82842712474619,
		-1.7e308,
		-0.82842712474619,
		2.,
		2.};

 real ex8_1_7_x0comn_[5] = {
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex8_1_7_pd[13];
static real ex8_1_7_old_x[5];
static int ex8_1_7_xkind = -1;

 static int
ex8_1_7_xcheck(real *x)
{
	real *x1 = ex8_1_7_old_x, *xe = x + 5;
	errno = 0;
	if (ex8_1_7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_1_7_xkind = 0;
	return 1;
	}
 real
ex8_1_7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (ex8_1_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -1.;
	v[1] = v[0] * v[0];
	ex8_1_7_pd[8] = v[0] + v[0];
	v[0] = x[0] - x[1];
	v[2] = v[0] * v[0];
	ex8_1_7_pd[9] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[1] - x[2];
	v[0] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	ex8_1_7_pd[10] = 3.*(v[2]*v[2]);
	} else {
	ex8_1_7_pd[10] = 0.;
	}
	v[1] += v[0];
	v[0] = x[2] - x[4];
	v[2] = pow(v[0], 4.);
	if (errno) in_trouble2("pow",v[0],4.);
	if (v[0] != 0.) {
	ex8_1_7_pd[11] = 4.*(v[2]/v[0]);
	} else {
	ex8_1_7_pd[11] = 0.;
	}
	v[1] += v[2];
	v[2] = x[4] - x[3];
	v[0] = pow(v[2], 4.);
	if (errno) in_trouble2("pow",v[2],4.);
	if (v[2] != 0.) {
	ex8_1_7_pd[12] = 4.*(v[0]/v[2]);
	} else {
	ex8_1_7_pd[12] = 0.;
	}
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[3] = -ex8_1_7_pd[12];
	g[4] = ex8_1_7_pd[12];
	g[4] -= ex8_1_7_pd[11];
	g[2] = ex8_1_7_pd[11];
	g[2] -= ex8_1_7_pd[10];
	g[1] = ex8_1_7_pd[10];
	g[1] -= ex8_1_7_pd[9];
	g[0] = ex8_1_7_pd[9];
	g[0] += ex8_1_7_pd[8];
	}

	return v[1];
}

 void
ex8_1_7_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex8_1_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[1] * x[1];
	ex8_1_7_pd[0] = x[1] + x[1];
	v[1] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	ex8_1_7_pd[1] = 3.*(x[2]*x[2]);
	} else {
	ex8_1_7_pd[1] = 0.;
	}
	v[2] = v[0] + v[1];
	t1 = v[2] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[1];
	ex8_1_7_pd[2] = x[1] + x[1];
	v[1] = -v[0];
	v[0] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	ex8_1_7_pd[3] = 3.*(x[2]*x[2]);
	} else {
	ex8_1_7_pd[3] = 0.;
	}
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[0];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[2];
	ex8_1_7_pd[4] = x[2] + x[2];
	v[1] = -v[0];
	t1 = v[1] + x[1];
	t1 += x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[2] * x[2];
	ex8_1_7_pd[5] = x[2] + x[2];
	t1 = v[0] + -x[1];
	t1 += -x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	ex8_1_7_pd[6] = 0.5 * x[0];
	v[0] = ex8_1_7_pd[6] * x[3];
	ex8_1_7_pd[7] = 0.5 * x[0];
	v[1] = ex8_1_7_pd[7] * x[3];
	v[2] = v[0] + v[1];
	c[4] = v[2];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[7] = ex8_1_7_pd[1];
	J[3] = ex8_1_7_pd[0];
	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[8] = -ex8_1_7_pd[3];
	J[4] = -ex8_1_7_pd[2];
	J[1] = -1.;

   /*** derivatives for constraint 3 ***/

	J[9] = -ex8_1_7_pd[4];
	J[5] = 1.;
	J[12] = 1.;

   /*** derivatives for constraint 4 ***/

	J[10] = ex8_1_7_pd[5];
	J[6] = -1.;
	J[13] = -1.;

   /*** derivatives for constraint 5 ***/

	J[11] = ex8_1_7_pd[7];
	J[2] = x[3]*0.5;
	J[11] += ex8_1_7_pd[6];
	J[2] += x[3]*0.5;
	}
}
#ifdef __cplusplus
	}
#endif
