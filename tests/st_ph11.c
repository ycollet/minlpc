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
 fint st_ph11_auxcom_[1] = { 0 /* nlc */ };
 fint st_ph11_funcom_[16] = {
	3 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
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
	4,
	2,
	4,
	3,
	4 };

 real st_ph11_boundc_[1+6+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		4.,
		-1.7e308,
		4.,
		-1.7e308,
		4.,
		-1.7e308,
		35.};

 real st_ph11_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real st_ph11_pd[6];
static real st_ph11_old_x[3];
static int st_ph11_xkind = -1;

 static int
st_ph11_xcheck(real *x)
{
	real *x1 = st_ph11_old_x, *xe = x + 3;
	errno = 0;
	if (st_ph11_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_ph11_xkind = 0;
	return 1;
	}
 real
st_ph11_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_ph11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_ph11_pd[0] = x[0] * x[0];
	st_ph11_pd[1] = x[0] + x[0];
	v[0] = -0.5 * st_ph11_pd[0];
	st_ph11_pd[2] = x[1] * x[1];
	st_ph11_pd[3] = x[1] + x[1];
	v[1] = -0.5 * st_ph11_pd[2];
	v[0] += v[1];
	st_ph11_pd[4] = x[2] * x[2];
	st_ph11_pd[5] = x[2] + x[2];
	v[1] = -0.5 * st_ph11_pd[4];
	v[0] += v[1];
	rv = v[0] + x[0];
	rv += x[1];
	rv += x[2];
	;}

	if (wantfg & 2) {
	g[2] = -0.5*st_ph11_pd[5] + 1.;
	g[1] = -0.5*st_ph11_pd[3] + 1.;
	g[0] = -0.5*st_ph11_pd[1] + 1.;
	}

	return rv;
}

 void
st_ph11_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_ph11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 2.*x[0];
	t1 += 3.*x[1];
	t1 += 4.*x[2];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[2] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = 1.;

   /*** derivatives for constraint 4 ***/

	J[1] = 2.;
	J[3] = 3.;
	J[5] = 4.;
	}
}
#ifdef __cplusplus
	}
#endif
