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
 fint st_qpk1_auxcom_[1] = { 0 /* nlc */ };
 fint st_qpk1_funcom_[17] = {
	2 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real st_qpk1_boundc_[1+4+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		3.,
		-1.7e308,
		3.};

 real st_qpk1_x0comn_[2] = {
		0.,
		0. };

 static real st_qpk1_pd[3];
static real st_qpk1_old_x[2];
static int st_qpk1_xkind = -1;

 static int
st_qpk1_xcheck(real *x)
{
	real *x1 = st_qpk1_old_x, *xe = x + 2;
	errno = 0;
	if (st_qpk1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_qpk1_xkind = 0;
	return 1;
	}
 real
st_qpk1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_qpk1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_qpk1_pd[0] = 2. * x[0];
	v[0] = st_qpk1_pd[0] * x[0];
	v[1] = -v[0];
	st_qpk1_pd[1] = 2. * x[0];
	v[0] = st_qpk1_pd[1] * x[1];
	v[1] += v[0];
	st_qpk1_pd[2] = 2. * x[1];
	v[0] = st_qpk1_pd[2] * x[1];
	v[2] = -v[0];
	v[1] += v[2];
	rv = v[1] + 2.*x[0];
	rv += 3.*x[1];
	;}

	if (wantfg & 2) {
	g[1] = -st_qpk1_pd[2] + 3.;
	g[1] -= x[1]*2.;
	g[1] += st_qpk1_pd[1];
	g[0] = x[1]*2. + 2.;
	g[0] -= st_qpk1_pd[0];
	g[0] -= x[0]*2.;
	}

	return rv;
}

 void
st_qpk1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_qpk1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += -x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[0];
	t1 += 2.*x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 2.*x[0];
	t1 += -x[1];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[4] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[5] = -1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -1.;
	J[6] = 2.;

   /*** derivatives for constraint 4 ***/

	J[3] = 2.;
	J[7] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
