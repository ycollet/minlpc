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
 fint st_e06_auxcom_[1] = { 1 /* nlc */ };
 fint st_e06_funcom_[18] = {
	3 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	9,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3,
	1,
	2 };

 real st_e06_boundc_[1+6+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		12.5,
		0.,
		37.5,
		0.,
		50.,
		0.,
		0.,
		50.,
		50.,
		0.,
		0.};

 real st_e06_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real st_e06_pd[2];
static real st_e06_old_x[3];
static int st_e06_xkind = -1;

 static int
st_e06_xcheck(real *x)
{
	real *x1 = st_e06_old_x, *xe = x + 3;
	errno = 0;
	if (st_e06_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e06_xkind = 0;
	return 1;
	}
 real
st_e06_feval_(fint *nobj, fint *needfg, real *x, real *g)
{	fint wantfg = *needfg;
	if (st_e06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	;}

	if (wantfg & 2) {
	}

	return 0.;
}

 void
st_e06_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (st_e06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] * x[2];
	v[1] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	st_e06_pd[0] = 3.*(x[1]*x[1]);
	} else {
	st_e06_pd[0] = 0.;
	}
	st_e06_pd[1] = 0.000169 * v[1];
	v[1] = st_e06_pd[1] * x[0];
	v[2] = v[0] - v[1];
	c[0] = v[2];

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -3.*x[0];
	t1 += x[1];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -st_e06_pd[1];
	dv[0] = -x[0]*0.000169;
	J[3] = dv[0]*st_e06_pd[0];
	J[6] = x[2];
	J[6] += x[2];

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[4] = 1.;
	J[7] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -3.;
	J[5] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
