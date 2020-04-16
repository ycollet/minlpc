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
 fint st_bpv1_auxcom_[1] = { 0 /* nlc */ };
 fint st_bpv1_funcom_[19] = {
	4 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,

	/* rownos */
	1,
	2,
	1,
	2,
	3,
	4,
	3,
	4 };

 real st_bpv1_boundc_[1+8+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		27.,
		0.,
		16.,
		0.,
		10.,
		0.,
		10.,
		30.,
		1.7e308,
		20.,
		1.7e308,
		10.,
		1.7e308,
		-1.7e308,
		15.};

 real st_bpv1_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

static real st_bpv1_old_x[4];
static int st_bpv1_xkind = -1;

 static int
st_bpv1_xcheck(real *x)
{
	real *x1 = st_bpv1_old_x, *xe = x + 4;
	errno = 0;
	if (st_bpv1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_bpv1_xkind = 0;
	return 1;
	}
 real
st_bpv1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (st_bpv1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[2];
	v[1] = x[1] * x[3];
	v[2] = v[0] + v[1];
	;}

	if (wantfg & 2) {
	g[3] = x[1];
	g[1] = x[3];
	g[2] = x[0];
	g[0] = x[2];
	}

	return v[2];
}

 void
st_bpv1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_bpv1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += 3.*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 2.*x[0];
	t1 += x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -1.6667*x[2];
	t1 += x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[2];
	t1 += x[3];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[2] = 3.;

   /*** derivatives for constraint 2 ***/

	J[1] = 2.;
	J[3] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = -1.6667;
	J[6] = 1.;

   /*** derivatives for constraint 4 ***/

	J[5] = 1.;
	J[7] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
