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
 fint procsel_auxcom_[1] = { 2 /* nlc */ };
 fint procsel_funcom_[33] = {
	10 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	8,
	9,
	10,
	12,
	14,
	15,
	16,
	17,

	/* rownos */
	1,
	4,
	6,
	2,
	4,
	7,
	1,
	2,
	4,
	3,
	4,
	3,
	5,
	5,
	6,
	7 };

 real procsel_boundc_[1+20+14] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		1.,
		1.,
		1.,
		1.,
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

 real procsel_x0comn_[10] = {
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

 static real procsel_pd[2];
static real procsel_old_x[10];
static int procsel_xkind = -1;

 static int
procsel_xcheck(real *x)
{
	real *x1 = procsel_old_x, *xe = x + 10;
	errno = 0;
	if (procsel_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	procsel_xkind = 0;
	return 1;
	}
 real
procsel_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (procsel_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += 1.2*x[1];
	rv += 1.8*x[2];
	rv += 1.8*x[3];
	rv += 7.*x[4];
	rv += -11.*x[6];
	rv += 3.5*x[7];
	rv += x[8];
	rv += 1.5*x[9];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.2;
	g[2] = 1.8;
	g[3] = 1.8;
	g[4] = 7.;
	g[6] = -11.;
	g[7] = 3.5;
	g[8] = 1.;
	g[9] = 1.5;
	}

	return rv;
}

 void
procsel_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (procsel_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = exp(x[0]);
	if (errno) in_trouble("exp",x[0]);
	procsel_pd[0] = v[0];
	t1 = v[0] + -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.833333333333333 * x[1];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	procsel_pd[1] = v[1];
	t1 = v[1] + -x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.9*x[5];
	t1 += x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[4];
	t1 += x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[6];
	t1 += -2.*x[7];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += -4.*x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[1];
	t1 += -5.*x[9];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = procsel_pd[0];
	J[6] = -1.;

   /*** derivatives for constraint 2 ***/

	J[3] = procsel_pd[1]*0.833333333333333;
	J[7] = -1.;

   /*** derivatives for constraint 3 ***/

	J[9] = -0.9;
	J[11] = 1.;

   /*** derivatives for constraint 4 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[8] = -1.;
	J[10] = 1.;

   /*** derivatives for constraint 5 ***/

	J[12] = 1.;
	J[13] = -2.;

   /*** derivatives for constraint 6 ***/

	J[2] = 1.;
	J[14] = -4.;

   /*** derivatives for constraint 7 ***/

	J[5] = 1.;
	J[15] = -5.;
	}
}
#ifdef __cplusplus
	}
#endif
