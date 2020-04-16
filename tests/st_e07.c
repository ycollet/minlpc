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
 fint st_e07_auxcom_[1] = { 3 /* nlc */ };
 fint st_e07_funcom_[43] = {
	10 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	26 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	12,
	14,
	16,
	18,
	19,
	22,
	25,
	27,

	/* rownos */
	1,
	3,
	4,
	5,
	2,
	3,
	4,
	6,
	1,
	2,
	3,
	3,
	4,
	3,
	4,
	1,
	5,
	7,
	1,
	5,
	7,
	2,
	6,
	7,
	2,
	6 };

 real st_e07_boundc_[1+20+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		100.,
		0.,
		200.,
		1.,
		3.,
		0.,
		300.,
		0.,
		300.,
		0.,
		100.,
		0.,
		300.,
		0.,
		100.,
		0.,
		200.,
		0.,
		200.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real st_e07_x0comn_[10] = {
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_e07_pd[1];
static real st_e07_old_x[10];
static int st_e07_xkind = -1;

 static int
st_e07_xcheck(real *x)
{
	real *x1 = st_e07_old_x, *xe = x + 10;
	errno = 0;
	if (st_e07_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e07_xkind = 0;
	return 1;
	}
 real
st_e07_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e07_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 6.*x[3];
	rv += 16.*x[4];
	rv += -9.*x[5];
	rv += 10.*x[6];
	rv += -15.*x[9];
	;}

	if (wantfg & 2) {
	g[3] = 6.;
	g[4] = 16.;
	g[5] = -9.;
	g[6] = 10.;
	g[9] = -15.;
	}

	return rv;
}

 void
st_e07_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_e07_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] * x[0];
	t1 = v[0] + -2.5*x[5];
	t1 += 2.*x[7];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] * x[1];
	t1 = v[0] + 2.*x[8];
	t1 += -1.5*x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	st_e07_pd[0] = x[0] + x[1];
	v[1] = x[2] * st_e07_pd[0];
	v[2] = -v[1];
	t1 = v[2] + 3.*x[3];
	t1 += x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[3];
	t1 += x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += -x[5];
	t1 += x[7];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += x[8];
	t1 += -x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[8];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = x[2];
	J[8] = x[0];
	J[15] = -2.5;
	J[18] = 2.;

   /*** derivatives for constraint 2 ***/

	J[4] = x[2];
	J[9] = x[1];
	J[21] = 2.;
	J[24] = -1.5;

   /*** derivatives for constraint 3 ***/

	J[10] = -st_e07_pd[0];
	J[5] = -x[2];
	J[1] = -x[2];
	J[11] = 3.;
	J[13] = 1.;

   /*** derivatives for constraint 4 ***/

	J[2] = -1.;
	J[6] = -1.;
	J[12] = 1.;
	J[14] = 1.;

   /*** derivatives for constraint 5 ***/

	J[3] = 1.;
	J[16] = -1.;
	J[19] = 1.;

   /*** derivatives for constraint 6 ***/

	J[7] = 1.;
	J[22] = 1.;
	J[25] = -1.;

   /*** derivatives for constraint 7 ***/

	J[17] = -1.;
	J[20] = 1.;
	J[23] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
