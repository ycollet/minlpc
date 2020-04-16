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
 fint st_bsj2_auxcom_[1] = { 0 /* nlc */ };
 fint st_bsj2_funcom_[25] = {
	3 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	15 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5 };

 real st_bsj2_boundc_[1+6+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		-1.,
		-1.7e308,
		34.8,
		-1.7e308,
		29.1,
		-1.7e308,
		-4.1};

 real st_bsj2_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real st_bsj2_pd[3];
static real st_bsj2_old_x[3];
static int st_bsj2_xkind = -1;

 static int
st_bsj2_xcheck(real *x)
{
	real *x1 = st_bsj2_old_x, *xe = x + 3;
	errno = 0;
	if (st_bsj2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_bsj2_xkind = 0;
	return 1;
	}
 real
st_bsj2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_bsj2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	st_bsj2_pd[0] = x[0] + x[0];
	v[1] = x[1] * x[1];
	st_bsj2_pd[1] = x[1] + x[1];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	st_bsj2_pd[2] = x[2] + x[2];
	v[0] += v[1];
	v[1] = -v[0];
	rv = v[1] + 2.*x[0];
	rv += 2.*x[2];
	;}

	if (wantfg & 2) {
	g[2] = -st_bsj2_pd[2] + 2.;
	g[1] = -st_bsj2_pd[1];
	g[0] = -st_bsj2_pd[0] + 2.;
	}

	return rv;
}

 void
st_bsj2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_bsj2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += -x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 12.*x[0];
	t1 += 5.*x[1];
	t1 += 12.*x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 12.*x[0];
	t1 += 12.*x[1];
	t1 += 7.*x[2];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -6.*x[0];
	t1 += x[1];
	t1 += x[2];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[5] = 1.;
	J[10] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[6] = 1.;
	J[11] = -1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 12.;
	J[7] = 5.;
	J[12] = 12.;

   /*** derivatives for constraint 4 ***/

	J[3] = 12.;
	J[8] = 12.;
	J[13] = 7.;

   /*** derivatives for constraint 5 ***/

	J[4] = -6.;
	J[9] = 1.;
	J[14] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
