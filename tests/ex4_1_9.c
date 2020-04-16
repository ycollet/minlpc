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
 fint ex4_1_9_auxcom_[1] = { 2 /* nlc */ };
 fint ex4_1_9_funcom_[13] = {
	2 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	4 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,

	/* rownos */
	1,
	2,
	1,
	2 };

 real ex4_1_9_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		3.,
		0.,
		4.,
		-1.7e308,
		2.,
		-1.7e308,
		36.};

 real ex4_1_9_x0comn_[2] = {
		2.3295,
		3.17846 };

 static real ex4_1_9_pd[8];
static real ex4_1_9_old_x[2];
static int ex4_1_9_xkind = -1;

 static int
ex4_1_9_xcheck(real *x)
{
	real *x1 = ex4_1_9_old_x, *xe = x + 2;
	errno = 0;
	if (ex4_1_9_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex4_1_9_xkind = 0;
	return 1;
	}
 real
ex4_1_9_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex4_1_9_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[0];
	rv += -x[1];
	;}

	if (wantfg & 2) {
	g[0] = -1.;
	g[1] = -1.;
	}

	return rv;
}

 void
ex4_1_9_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ex4_1_9_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ex4_1_9_pd[0] = 3.*(x[0]*x[0]);
	} else {
	ex4_1_9_pd[0] = 0.;
	}
	v[0] *= 8.;
	v[1] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex4_1_9_pd[1] = 4.*(v[1]/x[0]);
	} else {
	ex4_1_9_pd[1] = 0.;
	}
	v[1] *= -2.;
	v[0] += v[1];
	ex4_1_9_pd[2] = x[0] * x[0];
	ex4_1_9_pd[3] = x[0] + x[0];
	v[1] = -8. * ex4_1_9_pd[2];
	v[0] += v[1];
	t1 = v[0] + x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ex4_1_9_pd[4] = 3.*(x[0]*x[0]);
	} else {
	ex4_1_9_pd[4] = 0.;
	}
	v[0] *= 32.;
	v[1] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex4_1_9_pd[5] = 4.*(v[1]/x[0]);
	} else {
	ex4_1_9_pd[5] = 0.;
	}
	v[1] *= -4.;
	v[0] += v[1];
	ex4_1_9_pd[6] = x[0] * x[0];
	ex4_1_9_pd[7] = x[0] + x[0];
	v[1] = -88. * ex4_1_9_pd[6];
	v[0] += v[1];
	t1 = v[0] + 96.*x[0];
	t1 += x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -8.*ex4_1_9_pd[3];
	J[0] -= 2.*ex4_1_9_pd[1];
	J[0] += 8.*ex4_1_9_pd[0];
	J[2] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -88.*ex4_1_9_pd[7] + 96.;
	J[1] -= 4.*ex4_1_9_pd[5];
	J[1] += 32.*ex4_1_9_pd[4];
	J[3] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
