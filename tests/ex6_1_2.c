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
 fint ex6_1_2_auxcom_[1] = { 2 /* nlc */ };
 fint ex6_1_2_funcom_[19] = {
	4 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	8,
	9,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3,
	1,
	2 };

 real ex6_1_2_boundc_[1+8+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-06,
		1.,
		1.e-06,
		1.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.};

 real ex6_1_2_x0comn_[4] = {
		0.00421,
		0.99579,
		0.0258947377097763,
		0.998699779997328 };

 static real ex6_1_2_pd[8];
static real ex6_1_2_old_x[4];
static int ex6_1_2_xkind = -1;

 static int
ex6_1_2_xcheck(real *x)
{
	real *x1 = ex6_1_2_old_x, *xe = x + 4;
	errno = 0;
	if (ex6_1_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex6_1_2_xkind = 0;
	return 1;
	}
 real
ex6_1_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4];
	fint wantfg = *needfg;
	if (ex6_1_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_1_2_pd[2] = 1. / x[0];
	ex6_1_2_pd[3] = v[0] + 0.06391;
	v[0] = ex6_1_2_pd[3] * x[0];
	v[2] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_1_2_pd[4] = 1. / x[1];
	ex6_1_2_pd[5] = v[2] + -0.02875;
	v[2] = ex6_1_2_pd[5] * x[1];
	v[0] += v[2];
	ex6_1_2_pd[6] = 0.925356626778358 * x[0];
	v[2] = ex6_1_2_pd[6] * x[3];
	v[0] += v[2];
	ex6_1_2_pd[7] = 0.746014540096753 * x[1];
	v[2] = ex6_1_2_pd[7] * x[2];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[2] = ex6_1_2_pd[7];
	g[1] = x[2]*0.746014540096753;
	g[3] = ex6_1_2_pd[6];
	g[0] = x[3]*0.925356626778358;
	g[1] += ex6_1_2_pd[5];
	g[1] += x[1]*ex6_1_2_pd[4];
	g[0] += ex6_1_2_pd[3];
	g[0] += x[0]*ex6_1_2_pd[2];
	}

	return v[0];
}

 void
ex6_1_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ex6_1_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.159040857374844 * x[1];
	ex6_1_2_pd[0] = x[0] + v[0];
	v[0] = x[2] * ex6_1_2_pd[0];
	t1 = v[0] + -x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.307941026821595 * x[0];
	ex6_1_2_pd[1] = v[0] + x[1];
	v[0] = x[3] * ex6_1_2_pd[1];
	t1 = v[0] + -x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += x[1];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = ex6_1_2_pd[0];
	dv[0] = x[2];
	J[0] = x[2] + -1.;
	J[3] = dv[0]*0.159040857374844;

   /*** derivatives for constraint 2 ***/

	J[7] = ex6_1_2_pd[1];
	J[4] = x[3] + -1.;
	J[1] = x[3]*0.307941026821595;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[5] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
