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
 fint st_test1_auxcom_[1] = { 0 /* nlc */ };
 fint st_test1_funcom_[17] = {
	5 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	5 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	6,

	/* rownos */
	1,
	1,
	1,
	1,
	1 };

 real st_test1_boundc_[1+10+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		40.};

 real st_test1_x0comn_[5] = {
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_test1_pd[4];
static real st_test1_old_x[5];
static int st_test1_xkind = -1;

 static int
st_test1_xcheck(real *x)
{
	real *x1 = st_test1_old_x, *xe = x + 5;
	errno = 0;
	if (st_test1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_test1_xkind = 0;
	return 1;
	}
 real
st_test1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_test1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_test1_pd[0] = 50. * x[0];
	v[0] = st_test1_pd[0] * x[0];
	st_test1_pd[1] = 50. * x[1];
	v[1] = st_test1_pd[1] * x[1];
	v[0] += v[1];
	st_test1_pd[2] = 50. * x[2];
	v[1] = st_test1_pd[2] * x[2];
	v[0] += v[1];
	st_test1_pd[3] = 50. * x[3];
	v[1] = st_test1_pd[3] * x[3];
	v[0] += v[1];
	rv = v[0] + 42.*x[0];
	rv += -44.*x[1];
	rv += -47.*x[2];
	rv += -47.5*x[3];
	rv += 45.*x[4];
	;}

	if (wantfg & 2) {
	g[3] = st_test1_pd[3] + -47.5;
	g[3] += x[3]*50.;
	g[2] = st_test1_pd[2] + -47.;
	g[2] += x[2]*50.;
	g[1] = st_test1_pd[1] + -44.;
	g[1] += x[1]*50.;
	g[0] = st_test1_pd[0] + 42.;
	g[0] += x[0]*50.;
	g[4] = 45.;
	}

	return rv;
}

 void
st_test1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_test1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 20.*x[0];
	t1 += 12.*x[1];
	t1 += 7.*x[2];
	t1 += 4.*x[3];
	t1 += 11.*x[4];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 20.;
	J[1] = 12.;
	J[2] = 7.;
	J[3] = 4.;
	J[4] = 11.;
	}
}
#ifdef __cplusplus
	}
#endif
