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
 fint st_miqp2_auxcom_[1] = { 0 /* nlc */ };
 fint st_miqp2_funcom_[17] = {
	4 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	6 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	6,
	7,

	/* rownos */
	1,
	3,
	2,
	3,
	1,
	2 };

 real st_miqp2_boundc_[1+8+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.e+10,
		0.,
		1.e+10,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		5.,
		1.7e308};

 real st_miqp2_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

 static real st_miqp2_pd[2];
static real st_miqp2_old_x[4];
static int st_miqp2_xkind = -1;

 static int
st_miqp2_xcheck(real *x)
{
	real *x1 = st_miqp2_old_x, *xe = x + 4;
	errno = 0;
	if (st_miqp2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_miqp2_xkind = 0;
	return 1;
	}
 real
st_miqp2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_miqp2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_miqp2_pd[0] = 4. * x[0];
	v[0] = st_miqp2_pd[0] * x[0];
	st_miqp2_pd[1] = 2. * x[1];
	v[1] = st_miqp2_pd[1] * x[1];
	v[2] = v[0] + v[1];
	rv = v[2] + -3.*x[0];
	rv += -10.*x[1];
	rv += 4.*x[2];
	rv += 5.*x[3];
	;}

	if (wantfg & 2) {
	g[1] = st_miqp2_pd[1] + -10.;
	g[1] += x[1]*2.;
	g[0] = st_miqp2_pd[0] + -3.;
	g[0] += x[0]*4.;
	g[2] = 4.;
	g[3] = 5.;
	}

	return rv;
}

 void
st_miqp2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_miqp2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += -10.*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	t1 += -20.*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += x[1];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[4] = -10.;

   /*** derivatives for constraint 2 ***/

	J[2] = 1.;
	J[5] = -20.;

   /*** derivatives for constraint 3 ***/

	J[1] = 1.;
	J[3] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
