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
 fint st_e09_auxcom_[1] = { 1 /* nlc */ };
 fint st_e09_funcom_[11] = {
	2 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	2 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,

	/* rownos */
	1,
	1 };

 real st_e09_boundc_[1+4+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		3.};

 real st_e09_x0comn_[2] = {
		0.,
		0. };

 static real st_e09_pd[2];
static real st_e09_old_x[2];
static int st_e09_xkind = -1;

 static int
st_e09_xcheck(real *x)
{
	real *x1 = st_e09_old_x, *xe = x + 2;
	errno = 0;
	if (st_e09_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e09_xkind = 0;
	return 1;
	}
 real
st_e09_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1];
	fint wantfg = *needfg;
	if (st_e09_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e09_pd[1] = -2. * x[0];
	v[0] = st_e09_pd[1] * x[1];
	;}

	if (wantfg & 2) {
	g[1] = st_e09_pd[1];
	g[0] = -x[1]*2.;
	}

	return v[0];
}

 void
st_e09_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (st_e09_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e09_pd[0] = 4. * x[0];
	v[0] = st_e09_pd[0] * x[1];
	t1 = v[0] + 2.*x[0];
	t1 += 2.*x[1];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = st_e09_pd[0] + 2.;
	J[0] = x[1]*4. + 2.;
	}
}
#ifdef __cplusplus
	}
#endif
