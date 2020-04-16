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
 fint st_e26_auxcom_[1] = { 0 /* nlc */ };
 fint st_e26_funcom_[17] = {
	2 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real st_e26_boundc_[1+4+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.,
		0.,
		30.,
		-1.7e308,
		6.3,
		-1.7e308,
		6.,
		-1.7e308,
		7.08,
		-1.7e308,
		1.35};

 real st_e26_x0comn_[2] = {
		0.,
		0. };

 static real st_e26_pd[4];
static real st_e26_old_x[2];
static int st_e26_xkind = -1;

 static int
st_e26_xcheck(real *x)
{
	real *x1 = st_e26_old_x, *xe = x + 2;
	errno = 0;
	if (st_e26_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e26_xkind = 0;
	return 1;
	}
 real
st_e26_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_e26_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e26_pd[0] = x[0] * x[0];
	st_e26_pd[1] = x[0] + x[0];
	v[0] = -3. * st_e26_pd[0];
	st_e26_pd[2] = x[1] * x[1];
	st_e26_pd[3] = x[1] + x[1];
	v[1] = -3. * st_e26_pd[2];
	v[2] = v[0] + v[1];
	rv = v[2] + -5.*x[0];
	rv += -5.*x[1];
	;}

	if (wantfg & 2) {
	g[1] = -3.*st_e26_pd[3] + -5.;
	g[0] = -3.*st_e26_pd[1] + -5.;
	}

	return rv;
}

 void
st_e26_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_e26_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 0.7*x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 0.5*x[0];
	t1 += 0.8333*x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += 0.6*x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 0.1*x[0];
	t1 += 0.25*x[1];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 0.7;
	J[4] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 0.5;
	J[5] = 0.8333;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[6] = 0.6;

   /*** derivatives for constraint 4 ***/

	J[3] = 0.1;
	J[7] = 0.25;
	}
}
#ifdef __cplusplus
	}
#endif
