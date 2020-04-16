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
 fint st_ph20_auxcom_[1] = { 0 /* nlc */ };
 fint st_ph20_funcom_[34] = {
	3 /* nvar */,
	1 /* nobj */,
	9 /* ncon */,
	24 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	17,
	25,

	/* rownos */
	1,
	2,
	4,
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
	9,
	1,
	2,
	3,
	4,
	6,
	7,
	8,
	9 };

 real st_ph20_boundc_[1+6+18] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		30.,
		-1.7e308,
		114.,
		-1.7e308,
		8.,
		-1.7e308,
		64.,
		-1.7e308,
		14.,
		-1.7e308,
		-18.,
		-1.7e308,
		-6.,
		-1.7e308,
		-40.,
		-1.7e308,
		-132.};

 real st_ph20_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real st_ph20_pd[2];
static real st_ph20_old_x[3];
static int st_ph20_xkind = -1;

 static int
st_ph20_xcheck(real *x)
{
	real *x1 = st_ph20_old_x, *xe = x + 3;
	errno = 0;
	if (st_ph20_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_ph20_xkind = 0;
	return 1;
	}
 real
st_ph20_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_ph20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[1] * x[1];
	st_ph20_pd[0] = x[1] + x[1];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	st_ph20_pd[1] = x[0] + x[0];
	v[2] = v[1] - v[0];
	rv = v[2] + 15.*x[0];
	rv += -2.*x[1];
	rv += x[2];
	;}

	if (wantfg & 2) {
	g[0] = -st_ph20_pd[1] + 15.;
	g[1] = -st_ph20_pd[0] + -2.;
	g[2] = 1.;
	}

	return rv;
}

 void
st_ph20_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_ph20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -4.*x[0];
	t1 += -3.*x[1];
	t1 += 4.*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 4.*x[0];
	t1 += 9.*x[1];
	t1 += -2.*x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[1];
	t1 += -x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 2.*x[0];
	t1 += 15.*x[1];
	t1 += -8.*x[2];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[1];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -4.*x[0];
	t1 += 3.*x[1];
	t1 += -2.*x[2];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 4.*x[0];
	t1 += -9.*x[1];
	t1 += 4.*x[2];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -6.*x[0];
	t1 += 5.*x[1];
	t1 += -4.*x[2];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 4.*x[0];
	t1 += -9.*x[1];
	t1 += -3.*x[2];
	c[8] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -4.;
	J[7] = -3.;
	J[16] = 4.;

   /*** derivatives for constraint 2 ***/

	J[1] = 4.;
	J[8] = 9.;
	J[17] = -2.;

   /*** derivatives for constraint 3 ***/

	J[9] = 2.;
	J[18] = -1.;

   /*** derivatives for constraint 4 ***/

	J[2] = 2.;
	J[10] = 15.;
	J[19] = -8.;

   /*** derivatives for constraint 5 ***/

	J[11] = 1.;

   /*** derivatives for constraint 6 ***/

	J[3] = -4.;
	J[12] = 3.;
	J[20] = -2.;

   /*** derivatives for constraint 7 ***/

	J[4] = 4.;
	J[13] = -9.;
	J[21] = 4.;

   /*** derivatives for constraint 8 ***/

	J[5] = -6.;
	J[14] = 5.;
	J[22] = -4.;

   /*** derivatives for constraint 9 ***/

	J[6] = 4.;
	J[15] = -9.;
	J[23] = -3.;
	}
}
#ifdef __cplusplus
	}
#endif
