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
 fint st_e08_auxcom_[1] = { 2 /* nlc */ };
 fint st_e08_funcom_[13] = {
	2 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	4 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,

	/* rownos */
	1,
	2,
	1,
	2 };

 real st_e08_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		-1.,
		-1.7e308,
		-1.};

 real st_e08_x0comn_[2] = {
		0.,
		0. };

 static real st_e08_pd[5];
static real st_e08_old_x[2];
static int st_e08_xkind = -1;

 static int
st_e08_xcheck(real *x)
{
	real *x1 = st_e08_old_x, *xe = x + 2;
	errno = 0;
	if (st_e08_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e08_xkind = 0;
	return 1;
	}
 real
st_e08_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[0];
	rv += x[1];
	;}

	if (wantfg & 2) {
	g[0] = 2.;
	g[1] = 1.;
	}

	return rv;
}

 void
st_e08_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	fint wantfg = *needfg;
	if (st_e08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e08_pd[0] = -16. * x[0];
	v[0] = st_e08_pd[0] * x[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	st_e08_pd[1] = x[0] * x[0];
	st_e08_pd[2] = x[0] + x[0];
	v[0] = -4. * st_e08_pd[1];
	st_e08_pd[3] = x[1] * x[1];
	st_e08_pd[4] = x[1] + x[1];
	v[1] = -4. * st_e08_pd[3];
	v[2] = v[0] + v[1];
	c[1] = v[2];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[2] = st_e08_pd[0];
	J[0] = -x[1]*16.;

   /*** derivatives for constraint 2 ***/

	J[3] = -4.*st_e08_pd[4];
	J[1] = -4.*st_e08_pd[2];
	}
}
#ifdef __cplusplus
	}
#endif
