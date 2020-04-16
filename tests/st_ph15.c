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
 fint st_ph15_auxcom_[1] = { 0 /* nlc */ };
 fint st_ph15_funcom_[27] = {
	4 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real st_ph15_boundc_[1+8+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		6.,
		-1.7e308,
		7.,
		-1.7e308,
		29.,
		-1.7e308,
		11.};

 real st_ph15_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

 static real st_ph15_pd[7];
static real st_ph15_old_x[4];
static int st_ph15_xkind = -1;

 static int
st_ph15_xcheck(real *x)
{
	real *x1 = st_ph15_old_x, *xe = x + 4;
	errno = 0;
	if (st_ph15_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_ph15_xkind = 0;
	return 1;
	}
 real
st_ph15_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_ph15_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_ph15_pd[0] = x[0] * x[0];
	st_ph15_pd[1] = x[0] + x[0];
	v[0] = -4. * st_ph15_pd[0];
	st_ph15_pd[2] = x[1] * x[1];
	st_ph15_pd[3] = x[1] + x[1];
	v[1] = -0.5 * st_ph15_pd[2];
	v[0] += v[1];
	st_ph15_pd[4] = x[2] * x[2];
	st_ph15_pd[5] = x[2] + x[2];
	v[1] = -2.5 * st_ph15_pd[4];
	v[0] += v[1];
	v[1] = x[3] * x[3];
	st_ph15_pd[6] = x[3] + x[3];
	v[2] = -v[1];
	v[0] += v[2];
	rv = v[0] + 16.*x[0];
	rv += x[1];
	rv += 15.*x[2];
	rv += 8.*x[3];
	;}

	if (wantfg & 2) {
	g[3] = -st_ph15_pd[6] + 8.;
	g[2] = -2.5*st_ph15_pd[5] + 15.;
	g[1] = -0.5*st_ph15_pd[3] + 1.;
	g[0] = -4.*st_ph15_pd[1] + 16.;
	}

	return rv;
}

 void
st_ph15_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_ph15_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 3.*x[2];
	t1 += -2.*x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += 4.*x[1];
	t1 += x[2];
	t1 += -2.*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[0];
	t1 += x[1];
	t1 += 2.*x[2];
	t1 += x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[2];
	t1 += x[3];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[4] = -1.;
	J[8] = 3.;
	J[12] = -2.;

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[5] = 4.;
	J[9] = 1.;
	J[13] = -2.;

   /*** derivatives for constraint 3 ***/

	J[2] = 2.;
	J[6] = 1.;
	J[10] = 2.;
	J[14] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;
	J[7] = -1.;
	J[11] = 1.;
	J[15] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
