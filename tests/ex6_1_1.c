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
 fint ex6_1_1_auxcom_[1] = { 4 /* nlc */ };
 fint ex6_1_1_funcom_[31] = {
	8 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	14,
	15,
	16,
	17,

	/* rownos */
	1,
	3,
	5,
	2,
	4,
	5,
	1,
	3,
	6,
	2,
	4,
	6,
	1,
	2,
	3,
	4 };

 real ex6_1_1_boundc_[1+16+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-07,
		0.5,
		1.e-07,
		0.5,
		1.e-07,
		0.5,
		1.e-07,
		0.5,
		0.,
		1.7e308,
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
		0.,
		0.,
		0.5,
		0.5,
		0.5,
		0.5};

 real ex6_1_1_x0comn_[8] = {
		0.4993,
		0.0007,
		0.3441,
		0.1559,
		0.901221308981222,
		0.0274569351394739,
		0.691165161172019,
		0.998619236157215 };

 static real ex6_1_1_pd[20];
static real ex6_1_1_old_x[8];
static int ex6_1_1_xkind = -1;

 static int
ex6_1_1_xcheck(real *x)
{
	real *x1 = ex6_1_1_old_x, *xe = x + 8;
	errno = 0;
	if (ex6_1_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex6_1_1_xkind = 0;
	return 1;
	}
 real
ex6_1_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[7], dv[4];
	fint wantfg = *needfg;
	if (ex6_1_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_1_1_pd[4] = 1. / x[0];
	v[1] = x[0] + x[2];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex6_1_1_pd[5] = 1. / v[1];
	ex6_1_1_pd[6] = v[0] - v[2];
	v[2] = ex6_1_1_pd[6] * x[0];
	v[0] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_1_1_pd[7] = 1. / x[2];
	v[3] = x[0] + x[2];
	v[4] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_1_1_pd[8] = 1. / v[3];
	ex6_1_1_pd[9] = v[0] - v[4];
	v[4] = ex6_1_1_pd[9] * x[2];
	v[2] += v[4];
	v[4] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_1_1_pd[10] = 1. / x[1];
	v[0] = x[1] + x[3];
	v[5] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex6_1_1_pd[11] = 1. / v[0];
	ex6_1_1_pd[12] = v[4] - v[5];
	v[5] = ex6_1_1_pd[12] * x[1];
	v[2] += v[5];
	v[5] = log(x[3]);
	if (errno) in_trouble("log",x[3]);
	ex6_1_1_pd[13] = 1. / x[3];
	v[4] = x[1] + x[3];
	v[6] = log(v[4]);
	if (errno) in_trouble("log",v[4]);
	ex6_1_1_pd[14] = 1. / v[4];
	ex6_1_1_pd[15] = v[5] - v[6];
	v[6] = ex6_1_1_pd[15] * x[3];
	v[2] += v[6];
	ex6_1_1_pd[16] = 0.925356626778358 * x[0];
	v[6] = ex6_1_1_pd[16] * x[6];
	v[2] += v[6];
	ex6_1_1_pd[17] = 0.746014540096753 * x[2];
	v[6] = ex6_1_1_pd[17] * x[4];
	v[2] += v[6];
	ex6_1_1_pd[18] = 0.925356626778358 * x[1];
	v[6] = ex6_1_1_pd[18] * x[7];
	v[2] += v[6];
	ex6_1_1_pd[19] = 0.746014540096753 * x[3];
	v[6] = ex6_1_1_pd[19] * x[5];
	v[2] += v[6];
	;}

	if (wantfg & 2) {
	g[5] = ex6_1_1_pd[19];
	g[3] = x[5]*0.746014540096753;
	g[7] = ex6_1_1_pd[18];
	g[1] = x[7]*0.925356626778358;
	g[4] = ex6_1_1_pd[17];
	g[2] = x[4]*0.746014540096753;
	g[6] = ex6_1_1_pd[16];
	g[0] = x[6]*0.925356626778358;
	g[3] += ex6_1_1_pd[15];
	dv[0] = -x[3];
	dv[0] *= ex6_1_1_pd[14];
	g[3] += dv[0];
	g[1] += dv[0];
	g[3] += x[3]*ex6_1_1_pd[13];
	g[1] += ex6_1_1_pd[12];
	dv[1] = -x[1];
	dv[1] *= ex6_1_1_pd[11];
	g[3] += dv[1];
	g[1] += dv[1];
	g[1] += x[1]*ex6_1_1_pd[10];
	g[2] += ex6_1_1_pd[9];
	dv[2] = -x[2];
	dv[2] *= ex6_1_1_pd[8];
	g[2] += dv[2];
	g[0] += dv[2];
	g[2] += x[2]*ex6_1_1_pd[7];
	g[0] += ex6_1_1_pd[6];
	dv[3] = -x[0];
	dv[3] *= ex6_1_1_pd[5];
	g[2] += dv[3];
	g[0] += dv[3];
	g[0] += x[0]*ex6_1_1_pd[4];
	}

	return v[2];
}

 void
ex6_1_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ex6_1_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.159040857374844 * x[2];
	ex6_1_1_pd[0] = x[0] + v[0];
	v[0] = x[4] * ex6_1_1_pd[0];
	t1 = v[0] + -x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.159040857374844 * x[3];
	ex6_1_1_pd[1] = x[1] + v[0];
	v[0] = x[5] * ex6_1_1_pd[1];
	t1 = v[0] + -x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 0.307941026821595 * x[0];
	ex6_1_1_pd[2] = v[0] + x[2];
	v[0] = x[6] * ex6_1_1_pd[2];
	t1 = v[0] + -x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 0.307941026821595 * x[1];
	ex6_1_1_pd[3] = v[0] + x[3];
	v[0] = x[7] * ex6_1_1_pd[3];
	t1 = v[0] + -x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[1];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[2];
	t1 += x[3];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[12] = ex6_1_1_pd[0];
	dv[0] = x[4];
	J[0] = x[4] + -1.;
	J[6] = dv[0]*0.159040857374844;

   /*** derivatives for constraint 2 ***/

	J[13] = ex6_1_1_pd[1];
	dv[0] = x[5];
	J[3] = x[5] + -1.;
	J[9] = dv[0]*0.159040857374844;

   /*** derivatives for constraint 3 ***/

	J[14] = ex6_1_1_pd[2];
	J[7] = x[6] + -1.;
	J[1] = x[6]*0.307941026821595;

   /*** derivatives for constraint 4 ***/

	J[15] = ex6_1_1_pd[3];
	J[10] = x[7] + -1.;
	J[4] = x[7]*0.307941026821595;

   /*** derivatives for constraint 5 ***/

	J[2] = 1.;
	J[5] = 1.;

   /*** derivatives for constraint 6 ***/

	J[8] = 1.;
	J[11] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
