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
 fint ex14_1_4_auxcom_[1] = { 4 /* nlc */ };
 fint ex14_1_4_funcom_[22] = {
	3 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,

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
	4 };

 real ex14_1_4_boundc_[1+6+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.25,
		1.,
		1.5,
		6.28,
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		2.5019678106022,
		-1.7e308,
		0.,
		-1.7e308,
		-2.5019678106022};

 real ex14_1_4_x0comn_[3] = {
		0.25,
		1.5,
		0. };

 static real ex14_1_4_pd[8];
static real ex14_1_4_old_x[3];
static int ex14_1_4_xkind = -1;

 static int
ex14_1_4_xcheck(real *x)
{
	real *x1 = ex14_1_4_old_x, *xe = x + 3;
	errno = 0;
	if (ex14_1_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_1_4_xkind = 0;
	return 1;
	}
 real
ex14_1_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[2];
	;}

	if (wantfg & 2) {
	g[2] = 1.;
	}

	return rv;
}

 void
ex14_1_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ex14_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	ex14_1_4_pd[0] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	ex14_1_4_pd[1] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = 0.5 * ex14_1_4_pd[0];
	t1 = v[0] + -0.5*x[0];
	t1 += -0.0795774703703634*x[1];
	t1 += -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 2. * x[0];
	ex14_1_4_pd[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_4_pd[3] = ex14_1_4_pd[2];
	v[0] = 0.920422529629637 * ex14_1_4_pd[2];
	t1 = v[0] + -5.4365636*x[0];
	t1 += 0.865255957591193*x[1];
	t1 += -x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[1];
	ex14_1_4_pd[4] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	ex14_1_4_pd[5] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = -0.5 * ex14_1_4_pd[4];
	t1 = v[0] + 0.5*x[0];
	t1 += 0.0795774703703634*x[1];
	t1 += -x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 2. * x[0];
	ex14_1_4_pd[6] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_4_pd[7] = ex14_1_4_pd[6];
	v[0] = -0.920422529629637 * ex14_1_4_pd[6];
	t1 = v[0] + 5.4365636*x[0];
	t1 += -0.865255957591193*x[1];
	t1 += -x[2];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = 0.5*ex14_1_4_pd[1];
	J[4] = dv[0]*x[0] + -0.0795774703703634;
	J[0] = dv[0]*x[1] + -0.5;
	J[8] = -1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = 0.920422529629637*ex14_1_4_pd[3];
	J[1] = dv[0]*2. + -5.4365636;
	J[5] = 0.865255957591193;
	J[9] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -0.5*ex14_1_4_pd[5];
	J[6] = dv[0]*x[0] + 0.0795774703703634;
	J[2] = dv[0]*x[1] + 0.5;
	J[10] = -1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -0.920422529629637*ex14_1_4_pd[7];
	J[3] = dv[0]*2. + 5.4365636;
	J[7] = -0.865255957591193;
	J[11] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
