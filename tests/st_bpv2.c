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
 fint st_bpv2_auxcom_[1] = { 0 /* nlc */ };
 fint st_bpv2_funcom_[21] = {
	4 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	10 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	8,
	11,

	/* rownos */
	1,
	2,
	1,
	2,
	3,
	4,
	5,
	3,
	4,
	5 };

 real st_bpv2_boundc_[1+8+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		4.,
		0.,
		4.,
		0.,
		5.,
		0.,
		5.,
		-12.,
		1.7e308,
		-1.,
		1.7e308,
		-1.7e308,
		12.,
		-8.,
		1.7e308,
		-1.,
		1.7e308};

 real st_bpv2_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

static real st_bpv2_old_x[4];
static int st_bpv2_xkind = -1;

 static int
st_bpv2_xcheck(real *x)
{
	real *x1 = st_bpv2_old_x, *xe = x + 4;
	errno = 0;
	if (st_bpv2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_bpv2_xkind = 0;
	return 1;
	}
 real
st_bpv2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_bpv2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[1] * x[2];
	v[1] = x[0] * x[2];
	v[2] = v[0] - v[1];
	rv = v[2] + x[1];
	rv += x[2];
	;}

	if (wantfg & 2) {
	g[2] = -x[0] + 1.;
	g[0] = -x[2];
	g[2] += x[1];
	g[1] = x[2] + 1.;
	}

	return rv;
}

 void
st_bpv2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_bpv2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -4.*x[0];
	t1 += -x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 3.*x[0];
	t1 += -x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 4.*x[2];
	t1 += -x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[2];
	t1 += -x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 4.*x[2];
	t1 += -x[3];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -4.;
	J[2] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 3.;
	J[3] = -1.;

   /*** derivatives for constraint 3 ***/

	J[4] = 4.;
	J[7] = -1.;

   /*** derivatives for constraint 4 ***/

	J[5] = -1.;
	J[8] = -1.;

   /*** derivatives for constraint 5 ***/

	J[6] = 4.;
	J[9] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
