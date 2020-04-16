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
 fint ex14_1_1_auxcom_[1] = { 4 /* nlc */ };
 fint ex14_1_1_funcom_[22] = {
	3 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real ex14_1_1_boundc_[1+6+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-5.,
		5.,
		-5.,
		5.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		14.,
		-1.7e308,
		-14.,
		-1.7e308,
		22.,
		-1.7e308,
		-22.};

 real ex14_1_1_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real ex14_1_1_pd[16];
static real ex14_1_1_old_x[3];
static int ex14_1_1_xkind = -1;

 static int
ex14_1_1_xcheck(real *x)
{
	real *x1 = ex14_1_1_old_x, *xe = x + 3;
	errno = 0;
	if (ex14_1_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_1_1_xkind = 0;
	return 1;
	}
 real
ex14_1_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_1_1_xcheck(x) && wantfg == 2)
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
ex14_1_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex14_1_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex14_1_1_pd[0] = x[1] * x[1];
	ex14_1_1_pd[1] = x[1] + x[1];
	v[0] = 2. * ex14_1_1_pd[0];
	ex14_1_1_pd[2] = 4. * x[0];
	v[1] = ex14_1_1_pd[2] * x[1];
	v[0] += v[1];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ex14_1_1_pd[3] = 3.*(x[0]*x[0]);
	} else {
	ex14_1_1_pd[3] = 0.;
	}
	v[1] *= 4.;
	v[0] += v[1];
	t1 = v[0] + -42.*x[0];
	t1 += -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	ex14_1_1_pd[4] = x[1] * x[1];
	ex14_1_1_pd[5] = x[1] + x[1];
	v[0] = -2. * ex14_1_1_pd[4];
	ex14_1_1_pd[6] = 4. * x[0];
	v[1] = ex14_1_1_pd[6] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ex14_1_1_pd[7] = 3.*(x[0]*x[0]);
	} else {
	ex14_1_1_pd[7] = 0.;
	}
	v[2] *= -4.;
	v[0] += v[2];
	t1 = v[0] + 42.*x[0];
	t1 += -x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	ex14_1_1_pd[8] = x[0] * x[0];
	ex14_1_1_pd[9] = x[0] + x[0];
	v[0] = 2. * ex14_1_1_pd[8];
	ex14_1_1_pd[10] = 4. * x[0];
	v[1] = ex14_1_1_pd[10] * x[1];
	v[0] += v[1];
	v[1] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	ex14_1_1_pd[11] = 3.*(x[1]*x[1]);
	} else {
	ex14_1_1_pd[11] = 0.;
	}
	v[1] *= 4.;
	v[0] += v[1];
	t1 = v[0] + -26.*x[1];
	t1 += -x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	ex14_1_1_pd[12] = x[0] * x[0];
	ex14_1_1_pd[13] = x[0] + x[0];
	v[0] = -2. * ex14_1_1_pd[12];
	ex14_1_1_pd[14] = 4. * x[0];
	v[1] = ex14_1_1_pd[14] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	ex14_1_1_pd[15] = 3.*(x[1]*x[1]);
	} else {
	ex14_1_1_pd[15] = 0.;
	}
	v[2] *= -4.;
	v[0] += v[2];
	t1 = v[0] + 26.*x[1];
	t1 += -x[2];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 4.*ex14_1_1_pd[3] + -42.;
	J[4] = ex14_1_1_pd[2];
	J[0] += x[1]*4.;
	J[4] += 2.*ex14_1_1_pd[1];
	J[8] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -4.*ex14_1_1_pd[7] + 42.;
	J[5] = -ex14_1_1_pd[6];
	J[1] -= x[1]*4.;
	J[5] -= 2.*ex14_1_1_pd[5];
	J[9] = -1.;

   /*** derivatives for constraint 3 ***/

	J[6] = 4.*ex14_1_1_pd[11] + -26.;
	J[6] += ex14_1_1_pd[10];
	J[2] = x[1]*4.;
	J[2] += 2.*ex14_1_1_pd[9];
	J[10] = -1.;

   /*** derivatives for constraint 4 ***/

	J[7] = -4.*ex14_1_1_pd[15] + 26.;
	J[7] -= ex14_1_1_pd[14];
	J[3] = -x[1]*4.;
	J[3] -= 2.*ex14_1_1_pd[13];
	J[11] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
