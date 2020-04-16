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
 fint st_glmp_fp2_auxcom_[1] = { 0 /* nlc */ };
 fint st_glmp_fp2_funcom_[31] = {
	4 /* nvar */,
	1 /* nobj */,
	9 /* ncon */,
	20 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	12,
	21,

	/* rownos */
	1,
	9,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9 };

 real st_glmp_fp2_boundc_[1+8+18] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		5.,
		0.,
		10.,
		-1.7e308,
		14.,
		-1.7e308,
		10.,
		4.89,
		1.7e308,
		-1.7e308,
		5.65,
		-1.7e308,
		5.93,
		6.,
		1.7e308,
		-1.7e308,
		3.,
		0.,
		0.,
		-7.,
		-7.};

 real st_glmp_fp2_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

static real st_glmp_fp2_old_x[4];
static int st_glmp_fp2_xkind = -1;

 static int
st_glmp_fp2_xcheck(real *x)
{
	real *x1 = st_glmp_fp2_old_x, *xe = x + 4;
	errno = 0;
	if (st_glmp_fp2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_glmp_fp2_xkind = 0;
	return 1;
	}
 real
st_glmp_fp2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1];
	fint wantfg = *needfg;
	if (st_glmp_fp2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[1];
	;}

	if (wantfg & 2) {
	g[1] = x[0];
	g[0] = x[1];
	}

	return v[0];
}

 void
st_glmp_fp2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_glmp_fp2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 2.*x[2];
	t1 += x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[2];
	t1 += x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 1.44*x[2];
	t1 += x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -1.58*x[2];
	t1 += x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -1.03*x[2];
	t1 += x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[2];
	t1 += 2.*x[3];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += -x[3];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[3];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += -x[3];
	c[8] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[2] = 2.;
	J[11] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = 1.;
	J[12] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = 1.44;
	J[13] = 1.;

   /*** derivatives for constraint 4 ***/

	J[5] = -1.58;
	J[14] = 1.;

   /*** derivatives for constraint 5 ***/

	J[6] = -1.03;
	J[15] = 1.;

   /*** derivatives for constraint 6 ***/

	J[7] = 1.;
	J[16] = 2.;

   /*** derivatives for constraint 7 ***/

	J[8] = 1.;
	J[17] = -1.;

   /*** derivatives for constraint 8 ***/

	J[0] = -1.;
	J[9] = 1.;
	J[18] = 1.;

   /*** derivatives for constraint 9 ***/

	J[1] = -1.;
	J[10] = 1.;
	J[19] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
