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
 fint st_cqpjk1_auxcom_[1] = { 0 /* nlc */ };
 fint st_cqpjk1_funcom_[19] = {
	4 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
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
	1,
	2,
	1,
	2 };

 real st_cqpjk1_boundc_[1+8+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		1.7e308,
		-10000.,
		10000.,
		-10000.,
		10000.,
		-1.7e308,
		-1.,
		-1.7e308,
		1.};

 real st_cqpjk1_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

 static real st_cqpjk1_pd[4];
static real st_cqpjk1_old_x[4];
static int st_cqpjk1_xkind = -1;

 static int
st_cqpjk1_xcheck(real *x)
{
	real *x1 = st_cqpjk1_old_x, *xe = x + 4;
	errno = 0;
	if (st_cqpjk1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_cqpjk1_xkind = 0;
	return 1;
	}
 real
st_cqpjk1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_cqpjk1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_cqpjk1_pd[0] = 2. * x[0];
	v[0] = st_cqpjk1_pd[0] * x[0];
	st_cqpjk1_pd[1] = 4. * x[1];
	v[1] = st_cqpjk1_pd[1] * x[1];
	v[0] += v[1];
	st_cqpjk1_pd[2] = 6. * x[2];
	v[1] = st_cqpjk1_pd[2] * x[2];
	v[0] += v[1];
	st_cqpjk1_pd[3] = 0.5 * x[3];
	v[1] = st_cqpjk1_pd[3] * x[3];
	v[0] += v[1];
	rv = v[0] + -1.33333*x[0];
	rv += -2.66667*x[1];
	rv += -4.*x[2];
	rv += -10.*x[3];
	;}

	if (wantfg & 2) {
	g[3] = st_cqpjk1_pd[3] + -10.;
	g[3] += x[3]*0.5;
	g[2] = st_cqpjk1_pd[2] + -4.;
	g[2] += x[2]*6.;
	g[1] = st_cqpjk1_pd[1] + -2.66667;
	g[1] += x[1]*4.;
	g[0] = st_cqpjk1_pd[0] + -1.33333;
	g[0] += x[0]*2.;
	}

	return rv;
}

 void
st_cqpjk1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_cqpjk1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[2] = -1.;
	J[4] = -1.;
	J[6] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[3] = 1.;
	J[5] = 1.;
	J[7] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
