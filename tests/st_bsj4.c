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
 fint st_bsj4_auxcom_[1] = { 0 /* nlc */ };
 fint st_bsj4_funcom_[29] = {
	6 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	8,
	11,
	14,
	17,

	/* rownos */
	1,
	2,
	1,
	2,
	1,
	2,
	4,
	1,
	2,
	4,
	1,
	3,
	4,
	1,
	3,
	4 };

 real st_bsj4_boundc_[1+12+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		99.,
		0.,
		99.,
		0.,
		99.,
		0.,
		99.,
		0.,
		99.,
		0.,
		99.,
		-1.7e308,
		500.,
		50.,
		1.7e308,
		50.,
		1.7e308,
		-1.7e308,
		350.};

 real st_bsj4_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_bsj4_pd[9];
static real st_bsj4_old_x[6];
static int st_bsj4_xkind = -1;

 static int
st_bsj4_xcheck(real *x)
{
	real *x1 = st_bsj4_old_x, *xe = x + 6;
	errno = 0;
	if (st_bsj4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_bsj4_xkind = 0;
	return 1;
	}
 real
st_bsj4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_bsj4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_bsj4_pd[0] = x[0] * x[0];
	st_bsj4_pd[1] = x[0] + x[0];
	v[0] = -1.5 * st_bsj4_pd[0];
	v[1] = x[1] * x[1];
	st_bsj4_pd[2] = x[1] + x[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[2] * x[2];
	st_bsj4_pd[3] = x[2] + x[2];
	v[1] = -v[2];
	v[0] += v[1];
	st_bsj4_pd[4] = x[3] * x[3];
	st_bsj4_pd[5] = x[3] + x[3];
	v[1] = -2. * st_bsj4_pd[4];
	v[0] += v[1];
	v[1] = x[4] * x[4];
	st_bsj4_pd[6] = x[4] + x[4];
	v[2] = -v[1];
	v[0] += v[2];
	st_bsj4_pd[7] = x[5] * x[5];
	st_bsj4_pd[8] = x[5] + x[5];
	v[2] = -2.5 * st_bsj4_pd[7];
	v[0] += v[2];
	rv = v[0] + 10.5*x[0];
	rv += -3.95*x[1];
	rv += 3.*x[2];
	rv += 5.*x[3];
	rv += 1.5*x[4];
	rv += -1.5*x[5];
	;}

	if (wantfg & 2) {
	g[5] = -2.5*st_bsj4_pd[8] + -1.5;
	g[4] = -st_bsj4_pd[6] + 1.5;
	g[3] = -2.*st_bsj4_pd[5] + 5.;
	g[2] = -st_bsj4_pd[3] + 3.;
	g[1] = -st_bsj4_pd[2] + -3.95;
	g[0] = -1.5*st_bsj4_pd[1] + 10.5;
	}

	return rv;
}

 void
st_bsj4_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_bsj4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += 3.*x[1];
	t1 += 6.*x[2];
	t1 += 2.*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 3.*x[4];
	t1 += 4.*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[2];
	t1 += 2.*x[3];
	t1 += 3.*x[4];
	t1 += x[5];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[2] = 1.;
	J[4] = 1.;
	J[7] = 1.;
	J[10] = 1.;
	J[13] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[3] = 3.;
	J[5] = 6.;
	J[8] = 2.;

   /*** derivatives for constraint 3 ***/

	J[11] = 3.;
	J[14] = 4.;

   /*** derivatives for constraint 4 ***/

	J[6] = 1.;
	J[9] = 2.;
	J[12] = 3.;
	J[15] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
