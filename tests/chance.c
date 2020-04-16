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
 fint chance_auxcom_[1] = { 1 /* nlc */ };
 fint chance_funcom_[23] = {
	4 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3,
	1,
	2,
	3,
	1,
	2,
	3 };

 real chance_boundc_[1+8+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		21.,
		1.7e308,
		1.,
		1.,
		5.,
		1.7e308};

 real chance_x0comn_[4] = {
		0.685244910300343,
		0.0126990526103601,
		0.302056037089293,
		0. };

 static real chance_pd[10];
static real chance_old_x[4];
static int chance_xkind = -1;

 static int
chance_xcheck(real *x)
{
	real *x1 = chance_old_x, *xe = x + 4;
	errno = 0;
	if (chance_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	chance_xkind = 0;
	return 1;
	}
 real
chance_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (chance_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 24.55*x[0];
	rv += 26.75*x[1];
	rv += 39.*x[2];
	rv += 40.5*x[3];
	;}

	if (wantfg & 2) {
	g[0] = 24.55;
	g[1] = 26.75;
	g[2] = 39.;
	g[3] = 40.5;
	}

	return rv;
}

 void
chance_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[4];
	real t1;
	fint wantfg = *needfg;
	if (chance_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	chance_pd[0] = x[0] * x[0];
	chance_pd[1] = x[0] + x[0];
	v[0] = 0.28 * chance_pd[0];
	chance_pd[2] = x[1] * x[1];
	chance_pd[3] = x[1] + x[1];
	v[1] = 0.19 * chance_pd[2];
	v[0] += v[1];
	chance_pd[4] = x[2] * x[2];
	chance_pd[5] = x[2] + x[2];
	v[1] = 20.5 * chance_pd[4];
	v[0] += v[1];
	chance_pd[6] = x[3] * x[3];
	chance_pd[7] = x[3] + x[3];
	v[1] = 0.62 * chance_pd[6];
	v[0] += v[1];
	chance_pd[8] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chance_pd[8] <= 0.) {
	domain_("sqrt'", &chance_pd[8], 5L);
	}
	chance_pd[9] = 0.5 / chance_pd[8];
	v[0] = -1.645 * chance_pd[8];
	t1 = v[0] + 12.*x[0];
	t1 += 11.9*x[1];
	t1 += 41.8*x[2];
	t1 += 52.1*x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.3*x[0];
	t1 += 5.6*x[1];
	t1 += 11.1*x[2];
	t1 += 1.3*x[3];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -1.645*chance_pd[9];
	dv[1] = dv[0];
	dv[1] *= 0.62;
	J[9] = dv[1]*chance_pd[7] + 52.1;
	dv[2] = dv[0];
	dv[2] *= 20.5;
	J[6] = dv[2]*chance_pd[5] + 41.8;
	dv[3] = dv[0];
	dv[3] *= 0.19;
	J[3] = dv[3]*chance_pd[3] + 11.9;
	dv[0] *= 0.28;
	J[0] = dv[0]*chance_pd[1] + 12.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[4] = 1.;
	J[7] = 1.;
	J[10] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 2.3;
	J[5] = 5.6;
	J[8] = 11.1;
	J[11] = 1.3;
	}
}
#ifdef __cplusplus
	}
#endif
