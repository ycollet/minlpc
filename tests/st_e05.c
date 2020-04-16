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
 fint st_e05_auxcom_[1] = { 2 /* nlc */ };
 fint st_e05_funcom_[19] = {
	5 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	7 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	5,
	7,
	8,

	/* rownos */
	1,
	2,
	1,
	2,
	2,
	3,
	3 };

 real st_e05_boundc_[1+10+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		15834.,
		0.,
		36250.,
		100.,
		300.,
		100.,
		400.,
		0.,
		10000.,
		1.e+07,
		1.e+07,
		0.,
		0.,
		-5.e+07,
		-5.e+07};

 real st_e05_x0comn_[5] = {
		0.,
		0.,
		100.,
		100.,
		0. };

 static real st_e05_pd[4];
static real st_e05_old_x[5];
static int st_e05_xkind = -1;

 static int
st_e05_xcheck(real *x)
{
	real *x1 = st_e05_old_x, *xe = x + 5;
	errno = 0;
	if (st_e05_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e05_xkind = 0;
	return 1;
	}
 real
st_e05_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += x[4];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[4] = 1.;
	}

	return rv;
}

 void
st_e05_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_e05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e05_pd[0] = 120. * x[0];
	st_e05_pd[1] = 300. - x[2];
	v[1] = st_e05_pd[0] * st_e05_pd[1];
	v[2] = -v[1];
	t1 = v[2] + 100000.*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	st_e05_pd[2] = 80. * x[1];
	st_e05_pd[3] = 400. - x[3];
	v[1] = st_e05_pd[2] * st_e05_pd[3];
	v[2] = -v[1];
	t1 = v[2] + -100000.*x[2];
	t1 += 100000.*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -100000.*x[3];
	t1 += -4000.*x[4];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[2] = st_e05_pd[0] + 100000.;
	J[0] = -st_e05_pd[1]*120.;

   /*** derivatives for constraint 2 ***/

	J[4] = st_e05_pd[2] + 100000.;
	J[1] = -st_e05_pd[3]*80.;
	J[3] = -100000.;

   /*** derivatives for constraint 3 ***/

	J[5] = -100000.;
	J[6] = -4000.;
	}
}
#ifdef __cplusplus
	}
#endif
