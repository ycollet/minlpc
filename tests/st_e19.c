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
 fint st_e19_auxcom_[1] = { 1 /* nlc */ };
 fint st_e19_funcom_[13] = {
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

 real st_e19_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-8.,
		10.,
		0.,
		10.,
		-1.7e308,
		-2.,
		-1.7e308,
		8.};

 real st_e19_x0comn_[2] = {
		0.,
		0. };

 static real st_e19_pd[5];
static real st_e19_old_x[2];
static int st_e19_xkind = -1;

 static int
st_e19_xcheck(real *x)
{
	real *x1 = st_e19_old_x, *xe = x + 2;
	errno = 0;
	if (st_e19_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e19_xkind = 0;
	return 1;
	}
 real
st_e19_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_e19_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	st_e19_pd[1] = 4.*(v[0]/x[0]);
	} else {
	st_e19_pd[1] = 0.;
	}
	st_e19_pd[2] = x[0] * x[0];
	st_e19_pd[3] = x[0] + x[0];
	v[1] = -14. * st_e19_pd[2];
	v[0] += v[1];
	v[1] = x[1] * x[1];
	st_e19_pd[4] = x[1] + x[1];
	v[2] = -v[1];
	v[0] += v[2];
	rv = v[0] + 24.*x[0];
	;}

	if (wantfg & 2) {
	g[1] = -st_e19_pd[4];
	g[0] = -14.*st_e19_pd[3] + 24.;
	g[0] += st_e19_pd[1];
	}

	return rv;
}

 void
st_e19_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (st_e19_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	st_e19_pd[0] = x[0] + x[0];
	v[1] = -v[0];
	t1 = v[1] + -2.*x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -st_e19_pd[0] + -2.;
	J[2] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[3] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
