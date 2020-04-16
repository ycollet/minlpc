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
 fint st_test3_auxcom_[1] = { 0 /* nlc */ };
 fint st_test3_funcom_[48] = {
	13 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	28 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	11,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	25,
	29,

	/* rownos */
	1,
	2,
	4,
	1,
	3,
	5,
	2,
	3,
	6,
	7,
	1,
	2,
	4,
	7,
	7,
	8,
	8,
	9,
	9,
	10,
	1,
	3,
	5,
	8,
	2,
	3,
	6,
	9 };

 real st_test3_boundc_[1+26+20] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.e+15,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.e+15,
		0.,
		1.e+15,
		-1.7e308,
		10.,
		-1.7e308,
		10.,
		-1.7e308,
		10.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.};

 real st_test3_x0comn_[13] = {
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
		0.,
		0.,
		0. };

 static real st_test3_pd[5];
static real st_test3_old_x[13];
static int st_test3_xkind = -1;

 static int
st_test3_xcheck(real *x)
{
	real *x1 = st_test3_old_x, *xe = x + 13;
	errno = 0;
	if (st_test3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_test3_xkind = 0;
	return 1;
	}
 real
st_test3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_test3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_test3_pd[0] = 5. * x[0];
	v[0] = st_test3_pd[0] * x[0];
	st_test3_pd[1] = 5. * x[1];
	v[1] = st_test3_pd[1] * x[1];
	v[0] += v[1];
	st_test3_pd[2] = 5. * x[2];
	v[1] = st_test3_pd[2] * x[2];
	v[0] += v[1];
	st_test3_pd[3] = 5. * x[3];
	v[1] = st_test3_pd[3] * x[3];
	v[0] += v[1];
	st_test3_pd[4] = 9. * x[4];
	v[1] = st_test3_pd[4] * x[4];
	v[0] += v[1];
	rv = v[0] + 5.*x[0];
	rv += -5.*x[1];
	rv += 5.*x[2];
	rv += 5.*x[3];
	rv += -x[4];
	rv += -x[5];
	rv += x[6];
	rv += -x[7];
	rv += -x[8];
	rv += -x[9];
	rv += -x[10];
	rv += -x[11];
	rv += -x[12];
	;}

	if (wantfg & 2) {
	g[4] = st_test3_pd[4] + -1.;
	g[4] += x[4]*9.;
	g[3] = st_test3_pd[3] + 5.;
	g[3] += x[3]*5.;
	g[2] = st_test3_pd[2] + 5.;
	g[2] += x[2]*5.;
	g[1] = st_test3_pd[1] + -5.;
	g[1] += x[1]*5.;
	g[0] = st_test3_pd[0] + 5.;
	g[0] += x[0]*5.;
	g[5] = -1.;
	g[6] = 1.;
	g[7] = -1.;
	g[8] = -1.;
	g[9] = -1.;
	g[10] = -1.;
	g[11] = -1.;
	g[12] = -1.;
	}

	return rv;
}

 void
st_test3_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_test3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 2.*x[0];
	t1 += 2.*x[1];
	t1 += x[4];
	t1 += x[11];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 2.*x[0];
	t1 += 2.*x[2];
	t1 += x[4];
	t1 += x[12];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[1];
	t1 += 2.*x[2];
	t1 += x[11];
	t1 += x[12];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -8.*x[0];
	t1 += x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -8.*x[1];
	t1 += x[11];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -8.*x[2];
	t1 += x[12];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -2.*x[3];
	t1 += x[4];
	t1 += -x[5];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -2.*x[6];
	t1 += -x[7];
	t1 += x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -2.*x[8];
	t1 += -x[9];
	t1 += x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[10];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 2.;
	J[3] = 2.;
	J[10] = 1.;
	J[20] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 2.;
	J[6] = 2.;
	J[11] = 1.;
	J[24] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = 2.;
	J[7] = 2.;
	J[21] = 1.;
	J[25] = 1.;

   /*** derivatives for constraint 4 ***/

	J[2] = -8.;
	J[12] = 1.;

   /*** derivatives for constraint 5 ***/

	J[5] = -8.;
	J[22] = 1.;

   /*** derivatives for constraint 6 ***/

	J[8] = -8.;
	J[26] = 1.;

   /*** derivatives for constraint 7 ***/

	J[9] = -2.;
	J[13] = 1.;
	J[14] = -1.;

   /*** derivatives for constraint 8 ***/

	J[15] = -2.;
	J[16] = -1.;
	J[23] = 1.;

   /*** derivatives for constraint 9 ***/

	J[17] = -2.;
	J[18] = -1.;
	J[27] = 1.;

   /*** derivatives for constraint 10 ***/

	J[19] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
