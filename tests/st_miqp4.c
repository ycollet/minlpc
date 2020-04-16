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
 fint st_miqp4_auxcom_[1] = { 0 /* nlc */ };
 fint st_miqp4_funcom_[22] = {
	6 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	9 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	8,
	9,
	10,

	/* rownos */
	1,
	2,
	1,
	3,
	1,
	4,
	2,
	3,
	4 };

 real st_miqp4_boundc_[1+12+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.e+15,
		0.,
		1.e+15,
		0.,
		1.e+15,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real st_miqp4_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_miqp4_pd[3];
static real st_miqp4_old_x[6];
static int st_miqp4_xkind = -1;

 static int
st_miqp4_xcheck(real *x)
{
	real *x1 = st_miqp4_old_x, *xe = x + 6;
	errno = 0;
	if (st_miqp4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_miqp4_xkind = 0;
	return 1;
	}
 real
st_miqp4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_miqp4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_miqp4_pd[0] = 5. * x[0];
	v[0] = st_miqp4_pd[0] * x[0];
	st_miqp4_pd[1] = 5. * x[1];
	v[1] = st_miqp4_pd[1] * x[1];
	v[0] += v[1];
	st_miqp4_pd[2] = 10. * x[2];
	v[1] = st_miqp4_pd[2] * x[2];
	v[0] += v[1];
	rv = v[0] + 2.*x[0];
	rv += 3.*x[1];
	rv += -500.*x[2];
	rv += 10.*x[3];
	rv += -4.*x[4];
	rv += 5.*x[5];
	;}

	if (wantfg & 2) {
	g[2] = st_miqp4_pd[2] + -500.;
	g[2] += x[2]*10.;
	g[1] = st_miqp4_pd[1] + 3.;
	g[1] += x[1]*5.;
	g[0] = st_miqp4_pd[0] + 2.;
	g[0] += x[0]*5.;
	g[3] = 10.;
	g[4] = -4.;
	g[5] = 5.;
	}

	return rv;
}

 void
st_miqp4_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_miqp4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += -5.*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[1];
	t1 += -10.*x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[2];
	t1 += -30.*x[5];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[2] = 1.;
	J[4] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[6] = -5.;

   /*** derivatives for constraint 3 ***/

	J[3] = 1.;
	J[7] = -10.;

   /*** derivatives for constraint 4 ***/

	J[5] = 1.;
	J[8] = -30.;
	}
}
#ifdef __cplusplus
	}
#endif
