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
 fint st_ht_auxcom_[1] = { 0 /* nlc */ };
 fint st_ht_funcom_[15] = {
	2 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	6 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3 };

 real st_ht_boundc_[1+4+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		3.,
		0.,
		2.,
		-1.7e308,
		1.,
		-1.7e308,
		4.,
		-1.7e308,
		1.};

 real st_ht_x0comn_[2] = {
		0.,
		0. };

 static real st_ht_pd[2];
static real st_ht_old_x[2];
static int st_ht_xkind = -1;

 static int
st_ht_xcheck(real *x)
{
	real *x1 = st_ht_old_x, *xe = x + 2;
	errno = 0;
	if (st_ht_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_ht_xkind = 0;
	return 1;
	}
 real
st_ht_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_ht_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[1] * x[1];
	st_ht_pd[0] = x[1] + x[1];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	st_ht_pd[1] = x[0] + x[0];
	v[2] = v[1] - v[0];
	rv = v[2] + 2.4*x[0];
	rv += 1.2*x[1];
	;}

	if (wantfg & 2) {
	g[0] = -st_ht_pd[1] + 2.4;
	g[1] = -st_ht_pd[0] + 1.2;
	}

	return rv;
}

 void
st_ht_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_ht_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -2.*x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 0.5*x[0];
	t1 += -x[1];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -2.;
	J[3] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[4] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 0.5;
	J[5] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif