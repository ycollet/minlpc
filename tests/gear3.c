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
 fint gear3_auxcom_[1] = { 0 /* nlc */ };
 fint gear3_funcom_[23] = {
	8 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	8 /* nzc */,
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
	7,
	8,
	9,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real gear3_boundc_[1+16+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real gear3_x0comn_[8] = {
		12.,
		12.,
		12.,
		12.,
		12.,
		12.,
		12.,
		12. };

 static real gear3_pd[3];
static real gear3_old_x[8];
static int gear3_xkind = -1;

 static int
gear3_xcheck(real *x)
{
	real *x1 = gear3_old_x, *xe = x + 8;
	errno = 0;
	if (gear3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	gear3_xkind = 0;
	return 1;
	}
 real
gear3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2];
	fint wantfg = *needfg;
	if (gear3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[1];
	v[1] = x[2] * x[3];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	gear3_pd[0] = 1. / v[1];
	gear3_pd[1] = -v[2] * gear3_pd[0];
	v[1] = 0.14427932477276 - v[2];
	v[2] = v[1] * v[1];
	gear3_pd[2] = v[1] + v[1];
	;}

	if (wantfg & 2) {
	gear3_pd[2] += gear3_pd[2];
	dv[0] = -gear3_pd[2]*gear3_pd[1];
	dv[1] = -gear3_pd[2]*gear3_pd[0];
	g[3] = dv[0]*x[2];
	g[2] = dv[0]*x[3];
	g[1] = dv[1]*x[0];
	g[0] = dv[1]*x[1];
	}

	return v[2];
}

 void
gear3_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (gear3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += -x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	t1 += -x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	t1 += -x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[3];
	t1 += -x[7];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[4] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[5] = -1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[6] = -1.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;
	J[7] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
