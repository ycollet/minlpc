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
 fint st_e21_auxcom_[1] = { 0 /* nlc */ };
 fint st_e21_funcom_[27] = {
	6 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	14 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	6,
	8,
	11,
	13,
	15,

	/* rownos */
	1,
	4,
	1,
	2,
	5,
	2,
	6,
	1,
	3,
	4,
	2,
	5,
	3,
	6 };

 real st_e21_boundc_[1+12+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		3.,
		0.,
		4.,
		0.,
		4.,
		0.,
		2.,
		0.,
		2.,
		0.,
		6.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		4.,
		-1.7e308,
		4.,
		-1.7e308,
		6.};

 real st_e21_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_e21_pd[3];
static real st_e21_old_x[6];
static int st_e21_xkind = -1;

 static int
st_e21_xcheck(real *x)
{
	real *x1 = st_e21_old_x, *xe = x + 6;
	errno = 0;
	if (st_e21_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e21_xkind = 0;
	return 1;
	}
 real
st_e21_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_e21_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 0.6);
	if (errno) in_trouble2("pow",x[0],0.6);
	if (x[0] > 0.) {
	st_e21_pd[0] = 0.6*(v[0]/x[0]);
	} else if (0.6 > 1.) {
	st_e21_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6);
	}
	v[1] = pow(x[1], 0.6);
	if (errno) in_trouble2("pow",x[1],0.6);
	if (x[1] > 0.) {
	st_e21_pd[1] = 0.6*(v[1]/x[1]);
	} else if (0.6 > 1.) {
	st_e21_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.6);
	}
	v[0] += v[1];
	v[1] = pow(x[2], 0.4);
	if (errno) in_trouble2("pow",x[2],0.4);
	if (x[2] > 0.) {
	st_e21_pd[2] = 0.4*(v[1]/x[2]);
	} else if (0.4 > 1.) {
	st_e21_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.4);
	}
	v[0] += v[1];
	rv = v[0] + -4.*x[2];
	rv += 2.*x[3];
	rv += 5.*x[4];
	rv += -x[5];
	;}

	if (wantfg & 2) {
	g[2] = st_e21_pd[2] + -4.;
	g[1] = st_e21_pd[1];
	g[0] = st_e21_pd[0];
	g[3] = 2.;
	g[4] = 5.;
	g[5] = -1.;
	}

	return rv;
}

 void
st_e21_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_e21_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -3.*x[0];
	t1 += x[1];
	t1 += -3.*x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -2.*x[1];
	t1 += x[2];
	t1 += -2.*x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 4.*x[3];
	t1 += -x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += 2.*x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[1];
	t1 += x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[2];
	t1 += x[5];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -3.;
	J[2] = 1.;
	J[7] = -3.;

   /*** derivatives for constraint 2 ***/

	J[3] = -2.;
	J[5] = 1.;
	J[10] = -2.;

   /*** derivatives for constraint 3 ***/

	J[8] = 4.;
	J[12] = -1.;

   /*** derivatives for constraint 4 ***/

	J[1] = 1.;
	J[9] = 2.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	J[11] = 1.;

   /*** derivatives for constraint 6 ***/

	J[6] = 1.;
	J[13] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
