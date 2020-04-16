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
 fint ex1226_auxcom_[1] = { 1 /* nlc */ };
 fint ex1226_funcom_[24] = {
	5 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	8,
	9,
	11,
	13,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3,
	4,
	4,
	4,
	5,
	4,
	5 };

 real ex1226_boundc_[1+10+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		10.,
		1.,
		6.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		39.,
		-1.7e308,
		3.,
		-1.7e308,
		24.,
		1.,
		1.,
		-1.7e308,
		1.};

 real ex1226_x0comn_[5] = {
		1.,
		1.,
		0.,
		0.,
		0. };

 static real ex1226_pd[9];
static real ex1226_old_x[5];
static int ex1226_xkind = -1;

 static int
ex1226_xcheck(real *x)
{
	real *x1 = ex1226_old_x, *xe = x + 5;
	errno = 0;
	if (ex1226_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1226_xkind = 0;
	return 1;
	}
 real
ex1226_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex1226_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -5.*x[0];
	rv += 3.*x[1];
	;}

	if (wantfg & 2) {
	g[0] = -5.;
	g[1] = 3.;
	}

	return rv;
}

 void
ex1226_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ex1226_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex1226_pd[0] = sqrt(x[0]);
	if (errno) in_trouble("sqrt",x[0]);
	if (ex1226_pd[0] <= 0.) {
	domain_("sqrt'", &ex1226_pd[0], 5L);
	}
	ex1226_pd[1] = 0.5 / ex1226_pd[0];
	ex1226_pd[2] = 2. * ex1226_pd[0];
	ex1226_pd[3] = x[1] * x[1];
	ex1226_pd[4] = x[1] + x[1];
	v[0] = ex1226_pd[2] * ex1226_pd[3];
	v[1] = -v[0];
	ex1226_pd[5] = x[1] * x[1];
	ex1226_pd[6] = x[1] + x[1];
	v[0] = 2. * ex1226_pd[5];
	v[1] += v[0];
	ex1226_pd[7] = sqrt(x[1]);
	if (errno) in_trouble("sqrt",x[1]);
	if (ex1226_pd[7] <= 0.) {
	domain_("sqrt'", &ex1226_pd[7], 5L);
	}
	ex1226_pd[8] = 0.5 / ex1226_pd[7];
	v[0] = -2. * ex1226_pd[7];
	v[1] += v[0];
	t1 = v[1] + 8.*x[0];
	t1 += 11.*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += -x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 3.*x[0];
	t1 += 2.*x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += -2.*x[3];
	t1 += -4.*x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[3];
	t1 += x[4];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[3] = -2.*ex1226_pd[8] + 11.;
	J[3] += 2.*ex1226_pd[6];
	J[3] -= ex1226_pd[2]*ex1226_pd[4];
	dv[0] = -ex1226_pd[3]*2.;
	J[0] = dv[0]*ex1226_pd[1] + 8.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[4] = -1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 3.;
	J[5] = 2.;

   /*** derivatives for constraint 4 ***/

	J[6] = 1.;
	J[7] = -1.;
	J[8] = -2.;
	J[10] = -4.;

   /*** derivatives for constraint 5 ***/

	J[9] = 1.;
	J[11] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
