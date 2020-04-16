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
 fint st_ph1_auxcom_[1] = { 0 /* nlc */ };
 fint st_ph1_funcom_[37] = {
	6 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	24 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	9,
	11,
	16,
	21,
	25,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	1,
	3,
	4,
	2,
	3,
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
	4,
	5 };

 real st_ph1_boundc_[1+12+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
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
		96.,
		-1.7e308,
		72.,
		-1.7e308,
		84.,
		-1.7e308,
		100.,
		-1.7e308,
		80.};

 real st_ph1_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_ph1_pd[12];
static real st_ph1_old_x[6];
static int st_ph1_xkind = -1;

 static int
st_ph1_xcheck(real *x)
{
	real *x1 = st_ph1_old_x, *xe = x + 6;
	errno = 0;
	if (st_ph1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_ph1_xkind = 0;
	return 1;
	}
 real
st_ph1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_ph1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_ph1_pd[0] = x[0] * x[0];
	st_ph1_pd[1] = x[0] + x[0];
	v[0] = -0.5 * st_ph1_pd[0];
	st_ph1_pd[2] = x[1] * x[1];
	st_ph1_pd[3] = x[1] + x[1];
	v[1] = -0.5 * st_ph1_pd[2];
	v[0] += v[1];
	st_ph1_pd[4] = x[2] * x[2];
	st_ph1_pd[5] = x[2] + x[2];
	v[1] = -0.5 * st_ph1_pd[4];
	v[0] += v[1];
	st_ph1_pd[6] = x[3] * x[3];
	st_ph1_pd[7] = x[3] + x[3];
	v[1] = -0.5 * st_ph1_pd[6];
	v[0] += v[1];
	st_ph1_pd[8] = x[4] * x[4];
	st_ph1_pd[9] = x[4] + x[4];
	v[1] = -0.5 * st_ph1_pd[8];
	v[0] += v[1];
	st_ph1_pd[10] = x[5] * x[5];
	st_ph1_pd[11] = x[5] + x[5];
	v[1] = -0.5 * st_ph1_pd[10];
	v[0] += v[1];
	rv = v[0] + x[0];
	rv += x[1];
	rv += x[2];
	rv += x[3];
	rv += x[4];
	rv += x[5];
	;}

	if (wantfg & 2) {
	g[5] = -0.5*st_ph1_pd[11] + 1.;
	g[4] = -0.5*st_ph1_pd[9] + 1.;
	g[3] = -0.5*st_ph1_pd[7] + 1.;
	g[2] = -0.5*st_ph1_pd[5] + 1.;
	g[1] = -0.5*st_ph1_pd[3] + 1.;
	g[0] = -0.5*st_ph1_pd[1] + 1.;
	}

	return rv;
}

 void
st_ph1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_ph1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 6.*x[0];
	t1 += x[1];
	t1 += 9.*x[3];
	t1 += 3.*x[4];
	t1 += 5.*x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += 7.*x[2];
	t1 += 6.*x[3];
	t1 += 2.*x[4];
	t1 += 2.*x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 5.*x[0];
	t1 += 4.*x[1];
	t1 += x[2];
	t1 += 3.*x[3];
	t1 += 8.*x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 9.*x[0];
	t1 += x[1];
	t1 += 2.*x[3];
	t1 += 7.*x[4];
	t1 += 6.*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 2.*x[0];
	t1 += 6.*x[3];
	t1 += 3.*x[4];
	t1 += 9.*x[5];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 6.;
	J[5] = 1.;
	J[10] = 9.;
	J[15] = 3.;
	J[20] = 5.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[8] = 7.;
	J[11] = 6.;
	J[16] = 2.;
	J[21] = 2.;

   /*** derivatives for constraint 3 ***/

	J[2] = 5.;
	J[6] = 4.;
	J[9] = 1.;
	J[12] = 3.;
	J[17] = 8.;

   /*** derivatives for constraint 4 ***/

	J[3] = 9.;
	J[7] = 1.;
	J[13] = 2.;
	J[18] = 7.;
	J[22] = 6.;

   /*** derivatives for constraint 5 ***/

	J[4] = 2.;
	J[14] = 6.;
	J[19] = 3.;
	J[23] = 9.;
	}
}
#ifdef __cplusplus
	}
#endif
