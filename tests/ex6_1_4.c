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
 fint ex6_1_4_auxcom_[1] = { 3 /* nlc */ };
 fint ex6_1_4_funcom_[28] = {
	6 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	15 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	14,
	15,
	16,

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
	4,
	1,
	2,
	3 };

 real ex6_1_4_boundc_[1+12+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-06,
		1.,
		1.e-06,
		1.,
		1.e-06,
		1.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.};

 real ex6_1_4_x0comn_[6] = {
		7.e-05,
		0.99686,
		0.00307,
		0.000474076675116379,
		0.997993046160137,
		0.0126755759820888 };

 static real ex6_1_4_pd[14];
static real ex6_1_4_old_x[6];
static int ex6_1_4_xkind = -1;

 static int
ex6_1_4_xcheck(real *x)
{
	real *x1 = ex6_1_4_old_x, *xe = x + 6;
	errno = 0;
	if (ex6_1_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex6_1_4_xkind = 0;
	return 1;
	}
 real
ex6_1_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[9], dv[3];
	fint wantfg = *needfg;
	if (ex6_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_1_4_pd[5] = 1. / x[0];
	ex6_1_4_pd[6] = v[0] + 0.28809;
	v[0] = ex6_1_4_pd[6] * x[0];
	v[2] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_1_4_pd[7] = 1. / x[1];
	ex6_1_4_pd[8] = v[2] + -0.29158;
	v[2] = ex6_1_4_pd[8] * x[1];
	v[0] += v[2];
	v[2] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_1_4_pd[9] = 1. / x[2];
	ex6_1_4_pd[10] = v[2] + 0.59336;
	v[2] = ex6_1_4_pd[10] * x[2];
	v[0] += v[2];
	v[2] = 1.44805026165593 * x[4];
	v[5] = 0.989428667054834 * x[5];
	ex6_1_4_pd[11] = v[2] + v[5];
	v[5] = x[0] * ex6_1_4_pd[11];
	v[0] += v[5];
	v[5] = 1.12676386427658 * x[3];
	v[2] = 1.00363012835441 * x[5];
	ex6_1_4_pd[12] = v[5] + v[2];
	v[2] = x[1] * ex6_1_4_pd[12];
	v[0] += v[2];
	v[2] = 0.0347225450624344 * x[3];
	v[5] = 0.82681418300153 * x[4];
	ex6_1_4_pd[13] = v[2] + v[5];
	v[5] = x[2] * ex6_1_4_pd[13];
	v[0] += v[5];
	;}

	if (wantfg & 2) {
	g[2] = ex6_1_4_pd[13];
	dv[0] = x[2];
	g[4] = dv[0]*0.82681418300153;
	g[3] = x[2]*0.0347225450624344;
	g[1] = ex6_1_4_pd[12];
	dv[1] = x[1];
	g[5] = dv[1]*1.00363012835441;
	g[3] += x[1]*1.12676386427658;
	g[0] = ex6_1_4_pd[11];
	dv[2] = x[0];
	g[5] += dv[2]*0.989428667054834;
	g[4] += x[0]*1.44805026165593;
	g[2] += ex6_1_4_pd[10];
	g[2] += x[2]*ex6_1_4_pd[9];
	g[1] += ex6_1_4_pd[8];
	g[1] += x[1]*ex6_1_4_pd[7];
	g[0] += ex6_1_4_pd[6];
	g[0] += x[0]*ex6_1_4_pd[5];
	}

	return v[0];
}

 void
ex6_1_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex6_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex6_1_4_pd[0] = 0.145002897355373 * x[1];
	ex6_1_4_pd[0] += x[0];
	v[0] = 0.989528214945409 * x[2];
	ex6_1_4_pd[0] += v[0];
	v[0] = x[3] * ex6_1_4_pd[0];
	t1 = v[0] + -x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	ex6_1_4_pd[1] = 0.293701311601799 * x[0];
	ex6_1_4_pd[2] = ex6_1_4_pd[1] + x[1];
	v[1] = 0.646291923054068 * x[2];
	ex6_1_4_pd[2] += v[1];
	v[1] = x[4] * ex6_1_4_pd[2];
	t1 = v[1] + -x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	ex6_1_4_pd[3] = 0.619143628558899 * x[0];
	v[0] = 0.239837817616513 * x[1];
	ex6_1_4_pd[4] = ex6_1_4_pd[3] + v[0];
	ex6_1_4_pd[4] += x[2];
	v[1] = x[5] * ex6_1_4_pd[4];
	t1 = v[1] + -x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[12] = ex6_1_4_pd[0];
	dv[0] = x[3];
	J[8] = dv[0]*0.989528214945409;
	dv[1] = x[3];
	J[4] = dv[1]*0.145002897355373;
	J[0] = x[3] + -1.;

   /*** derivatives for constraint 2 ***/

	J[13] = ex6_1_4_pd[2];
	dv[0] = x[4];
	J[9] = dv[0]*0.646291923054068;
	J[5] = x[4] + -1.;
	J[1] = x[4]*0.293701311601799;

   /*** derivatives for constraint 3 ***/

	J[14] = ex6_1_4_pd[4];
	J[10] = x[5] + -1.;
	dv[0] = x[5];
	J[6] = dv[0]*0.239837817616513;
	J[2] = x[5]*0.619143628558899;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;
	J[7] = 1.;
	J[11] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
