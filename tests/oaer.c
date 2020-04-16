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
 fint oaer_auxcom_[1] = { 2 /* nlc */ };
 fint oaer_funcom_[32] = {
	9 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	7,
	10,
	12,
	13,
	15,
	17,

	/* rownos */
	1,
	2,
	3,
	1,
	3,
	5,
	2,
	3,
	6,
	3,
	4,
	4,
	5,
	7,
	6,
	7 };

 real oaer_boundc_[1+18+14] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.7e308,
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
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.};

 real oaer_x0comn_[9] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real oaer_pd[3];
static real oaer_old_x[9];
static int oaer_xkind = -1;

 static int
oaer_xcheck(real *x)
{
	real *x1 = oaer_old_x, *xe = x + 9;
	errno = 0;
	if (oaer_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	oaer_xkind = 0;
	return 1;
	}
 real
oaer_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (oaer_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 1.8*x[0];
	rv += 1.8*x[1];
	rv += 7.*x[2];
	rv += x[3];
	rv += 1.2*x[4];
	rv += -11.*x[5];
	rv += 3.5*x[6];
	rv += x[7];
	rv += 1.5*x[8];
	;}

	if (wantfg & 2) {
	g[0] = 1.8;
	g[1] = 1.8;
	g[2] = 7.;
	g[3] = 1.;
	g[4] = 1.2;
	g[5] = -11.;
	g[6] = 3.5;
	g[7] = 1.;
	g[8] = 1.5;
	}

	return rv;
}

 void
oaer_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (oaer_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	oaer_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	oaer_pd[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	oaer_pd[2] = 1. / v[0];
	v[0] = -1.2 * oaer_pd[1];
	t1 = v[0] + x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.9*x[2];
	t1 += -0.9*x[3];
	t1 += -0.9*x[4];
	t1 += x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[5];
	t1 += -x[6];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[3];
	t1 += -1.111111*x[7];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[4];
	t1 += -1.111111*x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[7];
	t1 += x[8];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -oaer_pd[0];
	J[3] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -1.2*oaer_pd[2];
	J[1] = dv[0];
	J[6] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -0.9;
	J[4] = -0.9;
	J[7] = -0.9;
	J[9] = 1.;

   /*** derivatives for constraint 4 ***/

	J[10] = 1.;
	J[11] = -1.;

   /*** derivatives for constraint 5 ***/

	J[5] = 1.;
	J[12] = -1.111111;

   /*** derivatives for constraint 6 ***/

	J[8] = 1.;
	J[14] = -1.111111;

   /*** derivatives for constraint 7 ***/

	J[13] = 1.;
	J[15] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
