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
 fint pointpack02_auxcom_[1] = { 1 /* nlc */ };
 fint pointpack02_funcom_[21] = {
	5 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	9 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	10,

	/* rownos */
	1,
	3,
	1,
	3,
	1,
	2,
	1,
	2,
	1 };

 real pointpack02_boundc_[1+10+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real pointpack02_x0comn_[5] = {
		0.5,
		0.,
		0.,
		0.,
		0. };

 static real pointpack02_pd[2];
static real pointpack02_old_x[5];
static int pointpack02_xkind = -1;

 static int
pointpack02_xcheck(real *x)
{
	real *x1 = pointpack02_old_x, *xe = x + 5;
	errno = 0;
	if (pointpack02_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pointpack02_xkind = 0;
	return 1;
	}
 real
pointpack02_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pointpack02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[4];
	;}

	if (wantfg & 2) {
	g[4] = 1.;
	}

	return rv;
}

 void
pointpack02_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (pointpack02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	pointpack02_pd[0] = 2. * x[0];
	v[0] = pointpack02_pd[0] * x[1];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	pointpack02_pd[1] = 2. * x[2];
	v[0] = pointpack02_pd[1] * x[3];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[3] * x[3];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[2];
	t1 += x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[0];
	t1 += x[1];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = -x[3];
	J[6] -= x[3];
	J[6] += pointpack02_pd[1];
	J[4] = x[3]*2.;
	J[4] -= x[2];
	J[4] -= x[2];
	J[2] = -x[1];
	J[2] -= x[1];
	J[0] = -x[0];
	J[0] -= x[0];
	J[2] += pointpack02_pd[0];
	J[0] += x[1]*2.;
	J[8] = 1.;

   /*** derivatives for constraint 2 ***/

	J[5] = -1.;
	J[7] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = -1.;
	J[3] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
