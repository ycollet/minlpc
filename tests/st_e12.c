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
 fint st_e12_auxcom_[1] = { 0 /* nlc */ };
 fint st_e12_funcom_[18] = {
	4 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	7 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	8,

	/* rownos */
	1,
	2,
	1,
	3,
	1,
	2,
	3 };

 real st_e12_boundc_[1+8+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		3.,
		0.,
		4.,
		0.,
		2.,
		0.,
		1.,
		0.,
		0.,
		-1.7e308,
		4.,
		-1.7e308,
		4.};

 real st_e12_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

 static real st_e12_pd[2];
static real st_e12_old_x[4];
static int st_e12_xkind = -1;

 static int
st_e12_xcheck(real *x)
{
	real *x1 = st_e12_old_x, *xe = x + 4;
	errno = 0;
	if (st_e12_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e12_xkind = 0;
	return 1;
	}
 real
st_e12_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_e12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 0.6);
	if (errno) in_trouble2("pow",x[0],0.6);
	if (x[0] > 0.) {
	st_e12_pd[0] = 0.6*(v[0]/x[0]);
	} else if (0.6 > 1.) {
	st_e12_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6);
	}
	v[1] = pow(x[1], 0.6);
	if (errno) in_trouble2("pow",x[1],0.6);
	if (x[1] > 0.) {
	st_e12_pd[1] = 0.6*(v[1]/x[1]);
	} else if (0.6 > 1.) {
	st_e12_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.6);
	}
	v[2] = v[0] + v[1];
	rv = v[2] + -6.*x[0];
	rv += -4.*x[2];
	rv += 3.*x[3];
	;}

	if (wantfg & 2) {
	g[1] = st_e12_pd[1];
	g[0] = st_e12_pd[0] + -6.;
	g[2] = -4.;
	g[3] = 3.;
	}

	return rv;
}

 void
st_e12_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_e12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -3.*x[0];
	t1 += x[1];
	t1 += -3.*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += 2.*x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[1];
	t1 += 2.*x[3];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -3.;
	J[2] = 1.;
	J[4] = -3.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[5] = 2.;

   /*** derivatives for constraint 3 ***/

	J[3] = 1.;
	J[6] = 2.;
	}
}
#ifdef __cplusplus
	}
#endif
