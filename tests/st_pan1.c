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
 fint st_pan1_auxcom_[1] = { 0 /* nlc */ };
 fint st_pan1_funcom_[22] = {
	3 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real st_pan1_boundc_[1+6+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		11.,
		-1.7e308,
		8.,
		-1.7e308,
		12.,
		-1.7e308,
		18.};

 real st_pan1_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real st_pan1_pd[6];
static real st_pan1_old_x[3];
static int st_pan1_xkind = -1;

 static int
st_pan1_xcheck(real *x)
{
	real *x1 = st_pan1_old_x, *xe = x + 3;
	errno = 0;
	if (st_pan1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_pan1_xkind = 0;
	return 1;
	}
 real
st_pan1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_pan1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_pan1_pd[0] = x[0] * x[0];
	st_pan1_pd[1] = x[0] + x[0];
	v[0] = -2.5 * st_pan1_pd[0];
	st_pan1_pd[2] = x[1] * x[1];
	st_pan1_pd[3] = x[1] + x[1];
	v[1] = -5. * st_pan1_pd[2];
	v[0] += v[1];
	st_pan1_pd[4] = x[2] * x[2];
	st_pan1_pd[5] = x[2] + x[2];
	v[1] = -7.5 * st_pan1_pd[4];
	v[0] += v[1];
	rv = v[0] + 1.25*x[0];
	rv += 2.5*x[1];
	rv += 5.*x[2];
	;}

	if (wantfg & 2) {
	g[2] = -7.5*st_pan1_pd[5] + 5.;
	g[1] = -5.*st_pan1_pd[3] + 2.5;
	g[0] = -2.5*st_pan1_pd[1] + 1.25;
	}

	return rv;
}

 void
st_pan1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_pan1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 10.*x[0];
	t1 += 0.2*x[1];
	t1 += -0.1*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -0.3*x[0];
	t1 += 9.*x[1];
	t1 += 0.2*x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.1*x[0];
	t1 += 0.4*x[1];
	t1 += 11.*x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 6.*x[0];
	t1 += 8.*x[1];
	t1 += 9.*x[2];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 10.;
	J[4] = 0.2;
	J[8] = -0.1;

   /*** derivatives for constraint 2 ***/

	J[1] = -0.3;
	J[5] = 9.;
	J[9] = 0.2;

   /*** derivatives for constraint 3 ***/

	J[2] = -0.1;
	J[6] = 0.4;
	J[10] = 11.;

   /*** derivatives for constraint 4 ***/

	J[3] = 6.;
	J[7] = 8.;
	J[11] = 9.;
	}
}
#ifdef __cplusplus
	}
#endif
