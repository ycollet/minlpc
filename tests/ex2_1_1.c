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
 fint ex2_1_1_auxcom_[1] = { 0 /* nlc */ };
 fint ex2_1_1_funcom_[17] = {
	5 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	5 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	6,

	/* rownos */
	1,
	1,
	1,
	1,
	1 };

 real ex2_1_1_boundc_[1+10+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		40.};

 real ex2_1_1_x0comn_[5] = {
		1.,
		1.,
		0.,
		1.,
		0. };

 static real ex2_1_1_pd[10];
static real ex2_1_1_old_x[5];
static int ex2_1_1_xkind = -1;

 static int
ex2_1_1_xcheck(real *x)
{
	real *x1 = ex2_1_1_old_x, *xe = x + 5;
	errno = 0;
	if (ex2_1_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex2_1_1_xkind = 0;
	return 1;
	}
 real
ex2_1_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[5], rv;
	fint wantfg = *needfg;
	if (ex2_1_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex2_1_1_pd[0] = 100. * x[0];
	ex2_1_1_pd[1] = ex2_1_1_pd[0] * x[0];
	v[0] = -0.5 * ex2_1_1_pd[1];
	ex2_1_1_pd[2] = 100. * x[1];
	ex2_1_1_pd[3] = ex2_1_1_pd[2] * x[1];
	v[1] = -0.5 * ex2_1_1_pd[3];
	v[0] += v[1];
	ex2_1_1_pd[4] = 100. * x[2];
	ex2_1_1_pd[5] = ex2_1_1_pd[4] * x[2];
	v[1] = -0.5 * ex2_1_1_pd[5];
	v[0] += v[1];
	ex2_1_1_pd[6] = 100. * x[3];
	ex2_1_1_pd[7] = ex2_1_1_pd[6] * x[3];
	v[1] = -0.5 * ex2_1_1_pd[7];
	v[0] += v[1];
	ex2_1_1_pd[8] = 100. * x[4];
	ex2_1_1_pd[9] = ex2_1_1_pd[8] * x[4];
	v[1] = -0.5 * ex2_1_1_pd[9];
	v[0] += v[1];
	rv = v[0] + 42.*x[0];
	rv += 44.*x[1];
	rv += 45.*x[2];
	rv += 47.*x[3];
	rv += 47.5*x[4];
	;}

	if (wantfg & 2) {
	g[4] = -0.5*ex2_1_1_pd[8] + 47.5;
	dv[0] = -0.5*x[4];
	g[4] += dv[0]*100.;
	g[3] = -0.5*ex2_1_1_pd[6] + 47.;
	dv[1] = -0.5*x[3];
	g[3] += dv[1]*100.;
	g[2] = -0.5*ex2_1_1_pd[4] + 45.;
	dv[2] = -0.5*x[2];
	g[2] += dv[2]*100.;
	g[1] = -0.5*ex2_1_1_pd[2] + 44.;
	dv[3] = -0.5*x[1];
	g[1] += dv[3]*100.;
	g[0] = -0.5*ex2_1_1_pd[0] + 42.;
	dv[4] = -0.5*x[0];
	g[0] += dv[4]*100.;
	}

	return rv;
}

 void
ex2_1_1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex2_1_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 20.*x[0];
	t1 += 12.*x[1];
	t1 += 11.*x[2];
	t1 += 7.*x[3];
	t1 += 4.*x[4];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 20.;
	J[1] = 12.;
	J[2] = 11.;
	J[3] = 7.;
	J[4] = 4.;
	}
}
#ifdef __cplusplus
	}
#endif
