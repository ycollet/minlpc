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
 fint st_e17_auxcom_[1] = { 1 /* nlc */ };
 fint st_e17_funcom_[11] = {
	2 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	2 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,

	/* rownos */
	1,
	1 };

 real st_e17_boundc_[1+4+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		115.8,
		1.e-05,
		30.,
		6.,
		1.7e308};

 real st_e17_x0comn_[2] = {
		0.,
		1.e-05 };

 static real st_e17_pd[4];
static real st_e17_old_x[2];
static int st_e17_xkind = -1;

 static int
st_e17_xcheck(real *x)
{
	real *x1 = st_e17_old_x, *xe = x + 2;
	errno = 0;
	if (st_e17_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e17_xkind = 0;
	return 1;
	}
 real
st_e17_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e17_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 29.4*x[0];
	rv += 18.*x[1];
	;}

	if (wantfg & 2) {
	g[0] = 29.4;
	g[1] = 18.;
	}

	return rv;
}

 void
st_e17_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (st_e17_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e17_pd[0] = x[0] * x[0];
	st_e17_pd[1] = x[0] + x[0];
	v[0] = 0.2458 * st_e17_pd[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	st_e17_pd[2] = 1. / x[1];
	st_e17_pd[3] = -v[1] * st_e17_pd[2];
	v[0] = -v[1];
	t1 = v[0] + x[0];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = -st_e17_pd[3];
	dv[0] = -st_e17_pd[2]*0.2458;
	J[0] = dv[0]*st_e17_pd[1] + 1.;
	}
}
#ifdef __cplusplus
	}
#endif
