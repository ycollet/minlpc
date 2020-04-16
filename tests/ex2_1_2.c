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
 fint ex2_1_2_auxcom_[1] = { 0 /* nlc */ };
 fint ex2_1_2_funcom_[21] = {
	6 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	4,
	6,
	7,
	8,
	9,

	/* rownos */
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	2 };

 real ex2_1_2_boundc_[1+12+4] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		0.,
		1.7e308,
		-1.7e308,
		6.5,
		-1.7e308,
		20.};

 real ex2_1_2_x0comn_[6] = {
		0.,
		1.,
		0.,
		1.,
		1.,
		20. };

 static real ex2_1_2_pd[5];
static real ex2_1_2_old_x[6];
static int ex2_1_2_xkind = -1;

 static int
ex2_1_2_xcheck(real *x)
{
	real *x1 = ex2_1_2_old_x, *xe = x + 6;
	errno = 0;
	if (ex2_1_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex2_1_2_xkind = 0;
	return 1;
	}
 real
ex2_1_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex2_1_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex2_1_2_pd[0] = x[0] * x[0];
	v[0] = -0.5 * ex2_1_2_pd[0];
	ex2_1_2_pd[1] = x[1] * x[1];
	v[1] = -0.5 * ex2_1_2_pd[1];
	v[0] += v[1];
	ex2_1_2_pd[2] = x[2] * x[2];
	v[1] = -0.5 * ex2_1_2_pd[2];
	v[0] += v[1];
	ex2_1_2_pd[3] = x[3] * x[3];
	v[1] = -0.5 * ex2_1_2_pd[3];
	v[0] += v[1];
	ex2_1_2_pd[4] = x[4] * x[4];
	v[1] = -0.5 * ex2_1_2_pd[4];
	v[0] += v[1];
	rv = v[0] + -10.5*x[0];
	rv += -7.5*x[1];
	rv += -3.5*x[2];
	rv += -2.5*x[3];
	rv += -1.5*x[4];
	rv += -10.*x[5];
	;}

	if (wantfg & 2) {
	g[4] = -0.5*x[4] + -1.5;
	g[4] -= 0.5*x[4];
	g[3] = -0.5*x[3] + -2.5;
	g[3] -= 0.5*x[3];
	g[2] = -0.5*x[2] + -3.5;
	g[2] -= 0.5*x[2];
	g[1] = -0.5*x[1] + -7.5;
	g[1] -= 0.5*x[1];
	g[0] = -0.5*x[0] + -10.5;
	g[0] -= 0.5*x[0];
	g[5] = -10.;
	}

	return rv;
}

 void
ex2_1_2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex2_1_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 6.*x[0];
	t1 += 3.*x[1];
	t1 += 3.*x[2];
	t1 += 2.*x[3];
	t1 += x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 10.*x[0];
	t1 += 10.*x[2];
	t1 += x[5];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 6.;
	J[2] = 3.;
	J[3] = 3.;
	J[5] = 2.;
	J[6] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 10.;
	J[4] = 10.;
	J[7] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
