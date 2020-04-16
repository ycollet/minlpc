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
 fint st_cqpjk2_auxcom_[1] = { 0 /* nlc */ };
 fint st_cqpjk2_funcom_[13] = {
	3 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	3 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,

	/* rownos */
	1,
	1,
	1 };

 real st_cqpjk2_boundc_[1+6+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		1.e+10};

 real st_cqpjk2_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real st_cqpjk2_pd[3];
static real st_cqpjk2_old_x[3];
static int st_cqpjk2_xkind = -1;

 static int
st_cqpjk2_xcheck(real *x)
{
	real *x1 = st_cqpjk2_old_x, *xe = x + 3;
	errno = 0;
	if (st_cqpjk2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_cqpjk2_xkind = 0;
	return 1;
	}
 real
st_cqpjk2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_cqpjk2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_cqpjk2_pd[0] = 9. * x[0];
	v[0] = st_cqpjk2_pd[0] * x[0];
	st_cqpjk2_pd[1] = 9. * x[1];
	v[1] = st_cqpjk2_pd[1] * x[1];
	v[0] += v[1];
	st_cqpjk2_pd[2] = 9. * x[2];
	v[1] = st_cqpjk2_pd[2] * x[2];
	v[0] += v[1];
	rv = v[0] + -15.*x[0];
	rv += -12.*x[1];
	rv += -9.*x[2];
	;}

	if (wantfg & 2) {
	g[2] = st_cqpjk2_pd[2] + -9.;
	g[2] += x[2]*9.;
	g[1] = st_cqpjk2_pd[1] + -12.;
	g[1] += x[1]*9.;
	g[0] = st_cqpjk2_pd[0] + -15.;
	g[0] += x[0]*9.;
	}

	return rv;
}

 void
st_cqpjk2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_cqpjk2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[1] = 1.;
	J[2] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
