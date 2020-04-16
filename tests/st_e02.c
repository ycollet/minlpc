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
 fint st_e02_auxcom_[1] = { 3 /* nlc */ };
 fint st_e02_funcom_[17] = {
	3 /* nvar */,
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
	8,

	/* rownos */
	1,
	3,
	2,
	3,
	1,
	2,
	3 };

 real st_e02_boundc_[1+6+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		9.422,
		0.,
		5.9023,
		0.,
		267.417085245,
		-250.,
		-250.,
		-300.,
		-300.,
		-150.,
		-150.};

 real st_e02_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real st_e02_pd[4];
static real st_e02_old_x[3];
static int st_e02_xkind = -1;

 static int
st_e02_xcheck(real *x)
{
	real *x1 = st_e02_old_x, *xe = x + 3;
	errno = 0;
	if (st_e02_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e02_xkind = 0;
	return 1;
	}
 real
st_e02_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e02_xcheck(x) && wantfg == 2)
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
st_e02_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (st_e02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e02_pd[0] = 6. * x[0];
	v[0] = st_e02_pd[0] * x[0];
	v[1] = -v[0];
	t1 = v[1] + 30.*x[0];
	t1 += -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	st_e02_pd[1] = 12. * x[1];
	v[0] = st_e02_pd[1] * x[1];
	v[1] = -v[0];
	t1 = v[1] + 20.*x[1];
	t1 += -x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] + x[1];
	st_e02_pd[2] = v[0] * v[0];
	st_e02_pd[3] = v[0] + v[0];
	v[0] = 0.5 * st_e02_pd[2];
	t1 = v[0] + -x[2];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -st_e02_pd[0] + 30.;
	J[0] -= x[0]*6.;
	J[4] = -1.;

   /*** derivatives for constraint 2 ***/

	J[2] = -st_e02_pd[1] + 20.;
	J[2] -= x[1]*12.;
	J[5] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = 0.5*st_e02_pd[3];
	J[3] = dv[0];
	J[1] = dv[0];
	J[6] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
