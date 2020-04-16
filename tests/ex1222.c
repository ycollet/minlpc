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
 fint ex1222_auxcom_[1] = { 1 /* nlc */ };
 fint ex1222_funcom_[16] = {
	3 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	6 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,

	/* rownos */
	1,
	3,
	1,
	2,
	2,
	3 };

 real ex1222_boundc_[1+6+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.2,
		1.,
		-2.22554,
		-1.,
		0.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		-1.,
		-1.7e308,
		0.};

 real ex1222_x0comn_[3] = {
		0.2,
		-1.,
		0. };

 static real ex1222_pd[3];
static real ex1222_old_x[3];
static int ex1222_xkind = -1;

 static int
ex1222_xcheck(real *x)
{
	real *x1 = ex1222_old_x, *xe = x + 3;
	errno = 0;
	if (ex1222_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1222_xkind = 0;
	return 1;
	}
 real
ex1222_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[1], rv;
	fint wantfg = *needfg;
	if (ex1222_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -0.5;
	ex1222_pd[1] = v[0] * v[0];
	ex1222_pd[2] = v[0] + v[0];
	v[0] = 5. * ex1222_pd[1];
	v[1] = v[0] + 0.8;
	rv = v[1] + -0.7*x[2];
	;}

	if (wantfg & 2) {
	dv[0] = 5.*ex1222_pd[2];
	g[0] = dv[0];
	g[2] = -0.7;
	}

	return rv;
}

 void
ex1222_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ex1222_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -0.2;
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex1222_pd[0] = v[1];
	v[0] = -v[1];
	t1 = v[0] + -x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	t1 += 1.1*x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += -1.2*x[2];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -ex1222_pd[0];
	J[2] = -1.;

   /*** derivatives for constraint 2 ***/

	J[3] = 1.;
	J[4] = 1.1;

   /*** derivatives for constraint 3 ***/

	J[1] = 1.;
	J[5] = -1.2;
	}
}
#ifdef __cplusplus
	}
#endif
