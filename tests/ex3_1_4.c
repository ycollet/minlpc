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
 fint ex3_1_4_auxcom_[1] = { 1 /* nlc */ };
 fint ex3_1_4_funcom_[18] = {
	3 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	6,
	9,

	/* rownos */
	1,
	2,
	1,
	2,
	3,
	1,
	2,
	3 };

 real ex3_1_4_boundc_[1+6+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		2.,
		0.,
		1.7e308,
		0.,
		3.,
		-24.,
		1.7e308,
		-1.7e308,
		4.,
		-1.7e308,
		6.};

 real ex3_1_4_x0comn_[3] = {
		0.5,
		0.,
		3. };

 static real ex3_1_4_pd[4];
static real ex3_1_4_old_x[3];
static int ex3_1_4_xkind = -1;

 static int
ex3_1_4_xcheck(real *x)
{
	real *x1 = ex3_1_4_old_x, *xe = x + 3;
	errno = 0;
	if (ex3_1_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex3_1_4_xkind = 0;
	return 1;
	}
 real
ex3_1_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex3_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -2.*x[0];
	rv += x[1];
	rv += -x[2];
	;}

	if (wantfg & 2) {
	g[0] = -2.;
	g[1] = 1.;
	g[2] = -1.;
	}

	return rv;
}

 void
ex3_1_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[6], dv[4];
	real t1;
	fint wantfg = *needfg;
	if (ex3_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex3_1_4_pd[0] = 4. * x[0];
	v[0] = -2. * x[1];
	ex3_1_4_pd[1] = ex3_1_4_pd[0] + v[0];
	v[1] = 2. * x[2];
	ex3_1_4_pd[1] += v[1];
	v[1] = x[0] * ex3_1_4_pd[1];
	v[2] = 2. * x[1];
	v[3] = -2. * x[0];
	v[4] = v[2] + v[3];
	ex3_1_4_pd[2] = v[4] - x[2];
	v[4] = x[1] * ex3_1_4_pd[2];
	v[1] += v[4];
	v[4] = 2. * x[0];
	v[2] = v[4] - x[1];
	v[4] = 2. * x[2];
	ex3_1_4_pd[3] = v[2] + v[4];
	v[4] = x[2] * ex3_1_4_pd[3];
	v[1] += v[4];
	t1 = v[1] + -20.*x[0];
	t1 += 9.*x[1];
	t1 += -13.*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 3.*x[1];
	t1 += x[2];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[5] = ex3_1_4_pd[3] + -13.;
	dv[0] = x[2];
	J[5] += dv[0]*2.;
	J[2] = -x[2] + 9.;
	J[0] = x[2]*2. + -20.;
	J[2] += ex3_1_4_pd[2];
	J[5] -= x[1];
	dv[1] = x[1];
	J[0] -= dv[1]*2.;
	J[2] += x[1]*2.;
	J[0] += ex3_1_4_pd[1];
	dv[2] = x[0];
	J[5] += dv[2]*2.;
	dv[3] = x[0];
	J[2] -= dv[3]*2.;
	J[0] += x[0]*4.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[3] = 1.;
	J[6] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = 3.;
	J[7] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
