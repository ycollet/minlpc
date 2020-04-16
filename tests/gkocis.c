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
 fint gkocis_auxcom_[1] = { 2 /* nlc */ };
 fint gkocis_funcom_[37] = {
	11 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	19 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	8,
	11,
	12,
	14,
	16,
	17,
	18,
	19,
	20,

	/* rownos */
	1,
	5,
	7,
	2,
	5,
	8,
	5,
	3,
	4,
	6,
	4,
	1,
	4,
	2,
	4,
	3,
	6,
	7,
	8 };

 real gkocis_boundc_[1+22+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		5.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real gkocis_x0comn_[11] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real gkocis_pd[3];
static real gkocis_old_x[11];
static int gkocis_xkind = -1;

 static int
gkocis_xcheck(real *x)
{
	real *x1 = gkocis_old_x, *xe = x + 11;
	errno = 0;
	if (gkocis_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	gkocis_xkind = 0;
	return 1;
	}
 real
gkocis_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (gkocis_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 1.8*x[2];
	rv += 7.*x[4];
	rv += x[5];
	rv += 1.2*x[6];
	rv += -11.*x[7];
	rv += 3.5*x[8];
	rv += x[9];
	rv += 1.5*x[10];
	;}

	if (wantfg & 2) {
	g[2] = 1.8;
	g[4] = 7.;
	g[5] = 1.;
	g[6] = 1.2;
	g[7] = -11.;
	g[8] = 3.5;
	g[9] = 1.;
	g[10] = 1.5;
	}

	return rv;
}

 void
gkocis_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (gkocis_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	gkocis_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	gkocis_pd[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	gkocis_pd[2] = 1. / v[0];
	v[0] = -1.2 * gkocis_pd[1];
	t1 = v[0] + x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.9*x[3];
	t1 += x[7];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[2];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[3];
	t1 += -5.*x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += -5.*x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[1];
	t1 += -5.*x[10];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -gkocis_pd[0];
	J[11] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -1.2*gkocis_pd[2];
	J[3] = dv[0];
	J[13] = 1.;

   /*** derivatives for constraint 3 ***/

	J[7] = -0.9;
	J[15] = 1.;

   /*** derivatives for constraint 4 ***/

	J[8] = -1.;
	J[10] = 1.;
	J[12] = 1.;
	J[14] = 1.;

   /*** derivatives for constraint 5 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[6] = 1.;

   /*** derivatives for constraint 6 ***/

	J[9] = 1.;
	J[16] = -5.;

   /*** derivatives for constraint 7 ***/

	J[2] = 1.;
	J[17] = -5.;

   /*** derivatives for constraint 8 ***/

	J[5] = 1.;
	J[18] = -5.;
	}
}
#ifdef __cplusplus
	}
#endif
