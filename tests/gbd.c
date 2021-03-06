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
 fint gbd_auxcom_[1] = { 0 /* nlc */ };
 fint gbd_funcom_[23] = {
	4 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	6,
	10,
	13,

	/* rownos */
	1,
	2,
	1,
	3,
	4,
	1,
	2,
	3,
	4,
	2,
	3,
	4 };

 real gbd_boundc_[1+8+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.2,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		2.,
		1.7e308,
		2.,
		1.7e308};

 real gbd_x0comn_[4] = {
		0.2,
		0.,
		0.,
		0. };

 static real gbd_pd[2];
static real gbd_old_x[4];
static int gbd_xkind = -1;

 static int
gbd_xcheck(real *x)
{
	real *x1 = gbd_old_x, *xe = x + 4;
	errno = 0;
	if (gbd_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	gbd_xkind = 0;
	return 1;
	}
 real
gbd_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], rv;
	fint wantfg = *needfg;
	if (gbd_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	gbd_pd[0] = x[0] * x[0];
	gbd_pd[1] = x[0] + x[0];
	v[0] = 5. * gbd_pd[0];
	rv = v[0] + x[1];
	rv += x[2];
	rv += x[3];
	;}

	if (wantfg & 2) {
	g[0] = 5.*gbd_pd[1];
	g[1] = 1.;
	g[2] = 1.;
	g[3] = 1.;
	}

	return rv;
}

 void
gbd_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (gbd_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 3.*x[0];
	t1 += -x[1];
	t1 += -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += 0.1*x[2];
	t1 += 0.25*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[1];
	t1 += x[2];
	t1 += x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[1];
	t1 += x[2];
	t1 += 2.*x[3];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 3.;
	J[2] = -1.;
	J[5] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[6] = 0.1;
	J[9] = 0.25;

   /*** derivatives for constraint 3 ***/

	J[3] = 1.;
	J[7] = 1.;
	J[10] = 1.;

   /*** derivatives for constraint 4 ***/

	J[4] = 1.;
	J[8] = 1.;
	J[11] = 2.;
	}
}
#ifdef __cplusplus
	}
#endif
