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
 fint synthes1_auxcom_[1] = { 2 /* nlc */ };
 fint synthes1_funcom_[29] = {
	6 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	10,
	12,
	14,
	16,
	17,

	/* rownos */
	1,
	2,
	3,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	4,
	6,
	5,
	6,
	2 };

 real synthes1_boundc_[1+12+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		2.,
		0.,
		2.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.7e308,
		-2.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.};

 real synthes1_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real synthes1_pd[11];
static real synthes1_old_x[6];
static int synthes1_xkind = -1;

 static int
synthes1_xcheck(real *x)
{
	real *x1 = synthes1_old_x, *xe = x + 6;
	errno = 0;
	if (synthes1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	synthes1_xkind = 0;
	return 1;
	}
 real
synthes1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2], rv;
	fint wantfg = *needfg;
	if (synthes1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[1] + 1.;
	synthes1_pd[7] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	synthes1_pd[8] = 1. / v[0];
	v[0] = -18. * synthes1_pd[7];
	v[1] = x[0] + 1.;
	v[2] = v[1] - x[1];
	synthes1_pd[9] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	synthes1_pd[10] = 1. / v[2];
	v[2] = -19.2 * synthes1_pd[9];
	v[0] += v[2];
	v[0] += 10.;
	rv = v[0] + 10.*x[0];
	rv += -7.*x[2];
	rv += 5.*x[3];
	rv += 6.*x[4];
	rv += 8.*x[5];
	;}

	if (wantfg & 2) {
	dv[0] = -19.2*synthes1_pd[10];
	g[1] = -dv[0];
	g[0] = dv[0] + 10.;
	dv[1] = -18.*synthes1_pd[8];
	g[1] += dv[1];
	g[2] = -7.;
	g[3] = 5.;
	g[4] = 6.;
	g[5] = 8.;
	}

	return rv;
}

 void
synthes1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (synthes1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[1] + 1.;
	synthes1_pd[0] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	synthes1_pd[1] = 1. / v[0];
	v[0] = 0.8 * synthes1_pd[0];
	v[1] = x[0] + 1.;
	v[2] = v[1] - x[1];
	synthes1_pd[2] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	synthes1_pd[3] = 1. / v[2];
	v[2] = 0.96 * synthes1_pd[2];
	v[1] = v[0] + v[2];
	t1 = v[1] + -0.8*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	synthes1_pd[4] = 1. / v[0];
	v[0] = x[0] + 1.;
	v[2] = v[0] - x[1];
	synthes1_pd[5] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	synthes1_pd[6] = 1. / v[2];
	v[2] = 1.2 * synthes1_pd[5];
	v[0] = v[1] + v[2];
	t1 = v[0] + -x[2];
	t1 += -2.*x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[0];
	t1 += x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[1];
	t1 += -2.*x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += -2.*x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[3];
	t1 += x[4];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = 0.96*synthes1_pd[3];
	J[4] = -dv[0];
	J[0] = dv[0];
	dv[1] = 0.8*synthes1_pd[1];
	J[4] += dv[1];
	J[9] = -0.8;

   /*** derivatives for constraint 2 ***/

	dv[0] = 1.2*synthes1_pd[6];
	J[5] = -dv[0];
	J[1] = dv[0];
	J[5] += synthes1_pd[4];
	J[10] = -1.;
	J[15] = -2.;

   /*** derivatives for constraint 3 ***/

	J[2] = -1.;
	J[6] = 1.;

   /*** derivatives for constraint 4 ***/

	J[7] = 1.;
	J[11] = -2.;

   /*** derivatives for constraint 5 ***/

	J[3] = 1.;
	J[8] = -1.;
	J[13] = -2.;

   /*** derivatives for constraint 6 ***/

	J[12] = 1.;
	J[14] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
