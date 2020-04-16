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
 fint st_bpk1_auxcom_[1] = { 0 /* nlc */ };
 fint st_bpk1_funcom_[23] = {
	4 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3,
	4,
	5,
	6,
	4,
	5,
	6 };

 real st_bpk1_boundc_[1+8+12] /* Infinity, variable bounds, constraint bounds */ = {
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
		8.,
		-1.7e308,
		12.,
		-1.7e308,
		12.,
		-1.7e308,
		8.,
		-1.7e308,
		8.,
		-1.7e308,
		5.};

 real st_bpk1_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

static real st_bpk1_old_x[4];
static int st_bpk1_xkind = -1;

 static int
st_bpk1_xcheck(real *x)
{
	real *x1 = st_bpk1_old_x, *xe = x + 4;
	errno = 0;
	if (st_bpk1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_bpk1_xkind = 0;
	return 1;
	}
 real
st_bpk1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_bpk1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[2];
	v[1] = -v[0];
	v[0] = x[0] * x[3];
	v[1] += v[0];
	v[0] = x[1] * x[2];
	v[1] += v[0];
	v[0] = x[1] * x[3];
	v[2] = -v[0];
	v[1] += v[2];
	rv = v[1] + x[0];
	rv += -x[1];
	rv += -x[2];
	;}

	if (wantfg & 2) {
	g[3] = -x[1];
	g[1] = -x[3] + -1.;
	g[2] = x[1] + -1.;
	g[1] += x[2];
	g[3] += x[0];
	g[0] = x[3] + 1.;
	g[2] -= x[0];
	g[0] -= x[2];
	}

	return rv;
}

 void
st_bpk1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_bpk1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += 4.*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 4.*x[0];
	t1 += x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 3.*x[0];
	t1 += 4.*x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 2.*x[2];
	t1 += x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[2];
	t1 += 2.*x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[2];
	t1 += x[3];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[3] = 4.;

   /*** derivatives for constraint 2 ***/

	J[1] = 4.;
	J[4] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 3.;
	J[5] = 4.;

   /*** derivatives for constraint 4 ***/

	J[6] = 2.;
	J[9] = 1.;

   /*** derivatives for constraint 5 ***/

	J[7] = 1.;
	J[10] = 2.;

   /*** derivatives for constraint 6 ***/

	J[8] = 1.;
	J[11] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
