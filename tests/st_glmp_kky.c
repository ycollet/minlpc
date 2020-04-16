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
 fint st_glmp_kky_auxcom_[1] = { 0 /* nlc */ };
 fint st_glmp_kky_funcom_[45] = {
	7 /* nvar */,
	1 /* nobj */,
	13 /* ncon */,
	31 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	18,
	31,
	32,

	/* rownos */
	1,
	11,
	12,
	13,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	9 };

 real st_glmp_kky_boundc_[1+14+26] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		10.,
		0.,
		10.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		24.,
		-1.7e308,
		100.,
		-1.7e308,
		100.,
		-1.7e308,
		-10.,
		-1.7e308,
		100.,
		-1.7e308,
		44.,
		-1.7e308,
		15.,
		-1.7e308,
		100.,
		0.,
		0.,
		1.5,
		1.5,
		-4.,
		-4.,
		-8.5,
		-8.5,
		1.,
		1.};

 real st_glmp_kky_x0comn_[7] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

static real st_glmp_kky_old_x[7];
static int st_glmp_kky_xkind = -1;

 static int
st_glmp_kky_xcheck(real *x)
{
	real *x1 = st_glmp_kky_old_x, *xe = x + 7;
	errno = 0;
	if (st_glmp_kky_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_glmp_kky_xkind = 0;
	return 1;
	}
 real
st_glmp_kky_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_glmp_kky_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[1];
	v[1] = x[2] * x[3];
	v[2] = v[0] + v[1];
	rv = v[2] + x[6];
	;}

	if (wantfg & 2) {
	g[3] = x[2];
	g[2] = x[3];
	g[1] = x[0];
	g[0] = x[1];
	g[6] = 1.;
	}

	return rv;
}

 void
st_glmp_kky_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_glmp_kky_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -5.*x[4];
	t1 += 8.*x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -5.*x[4];
	t1 += -8.*x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -6.*x[4];
	t1 += 3.*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -4.*x[4];
	t1 += -5.*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 5.*x[4];
	t1 += -8.*x[5];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 5.*x[4];
	t1 += 8.*x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 6.*x[4];
	t1 += -3.*x[5];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 4.*x[4];
	t1 += 5.*x[5];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 3.*x[4];
	t1 += -4.*x[5];
	t1 += -x[6];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[0];
	t1 += x[4];
	t1 += 2.*x[5];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[1];
	t1 += 2.*x[4];
	t1 += -x[5];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[2];
	t1 += x[4];
	t1 += -2.*x[5];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[3];
	t1 += 2.*x[4];
	t1 += x[5];
	c[12] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = -5.;
	J[17] = 8.;

   /*** derivatives for constraint 2 ***/

	J[5] = -5.;
	J[18] = -8.;

   /*** derivatives for constraint 3 ***/

	J[6] = -6.;
	J[19] = 3.;

   /*** derivatives for constraint 4 ***/

	J[7] = -4.;
	J[20] = -5.;

   /*** derivatives for constraint 5 ***/

	J[8] = 5.;
	J[21] = -8.;

   /*** derivatives for constraint 6 ***/

	J[9] = 5.;
	J[22] = 8.;

   /*** derivatives for constraint 7 ***/

	J[10] = 6.;
	J[23] = -3.;

   /*** derivatives for constraint 8 ***/

	J[11] = 4.;
	J[24] = 5.;

   /*** derivatives for constraint 9 ***/

	J[12] = 3.;
	J[25] = -4.;
	J[30] = -1.;

   /*** derivatives for constraint 10 ***/

	J[0] = -1.;
	J[13] = 1.;
	J[26] = 2.;

   /*** derivatives for constraint 11 ***/

	J[1] = -1.;
	J[14] = 2.;
	J[27] = -1.;

   /*** derivatives for constraint 12 ***/

	J[2] = -1.;
	J[15] = 1.;
	J[28] = -2.;

   /*** derivatives for constraint 13 ***/

	J[3] = -1.;
	J[16] = 2.;
	J[29] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
