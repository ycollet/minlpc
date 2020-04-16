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
 fint st_phex_auxcom_[1] = { 0 /* nlc */ };
 fint st_phex_funcom_[19] = {
	2 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	10 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5 };

 real st_phex_boundc_[1+4+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		10.,
		-1.7e308,
		22.,
		-1.7e308,
		2.,
		-1.7e308,
		-4.,
		-1.7e308,
		4.};

 real st_phex_x0comn_[2] = {
		0.,
		0. };

 static real st_phex_pd[3];
static real st_phex_old_x[2];
static int st_phex_xkind = -1;

 static int
st_phex_xcheck(real *x)
{
	real *x1 = st_phex_old_x, *xe = x + 2;
	errno = 0;
	if (st_phex_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_phex_xkind = 0;
	return 1;
	}
 real
st_phex_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (st_phex_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_phex_pd[0] = x[1] * x[1];
	st_phex_pd[1] = x[1] + x[1];
	v[0] = -4. * st_phex_pd[0];
	v[1] = x[0] * x[0];
	st_phex_pd[2] = x[0] + x[0];
	v[2] = v[0] - v[1];
	;}

	if (wantfg & 2) {
	g[0] = -st_phex_pd[2];
	g[1] = -4.*st_phex_pd[1];
	}

	return v[2];
}

 void
st_phex_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_phex_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += 5.*x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -3.*x[0];
	t1 += 2.*x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += -4.*x[1];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += -2.*x[1];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[5] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[6] = 5.;

   /*** derivatives for constraint 3 ***/

	J[2] = -3.;
	J[7] = 2.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[8] = -4.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	J[9] = -2.;
	}
}
#ifdef __cplusplus
	}
#endif
