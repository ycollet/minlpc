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
 fint st_test4_auxcom_[1] = { 0 /* nlc */ };
 fint st_test4_funcom_[43] = {
	6 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	30 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,
	21,
	26,
	31,

	/* rownos */
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
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5 };

 real st_test4_boundc_[1+12+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.e+15,
		0.,
		2.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.e+15,
		0.,
		1.e+15,
		-1.7e308,
		16.,
		-1.7e308,
		-1.,
		-1.7e308,
		24.,
		-1.7e308,
		12.,
		-1.7e308,
		3.};

 real st_test4_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_test4_pd[2];
static real st_test4_old_x[6];
static int st_test4_xkind = -1;

 static int
st_test4_xcheck(real *x)
{
	real *x1 = st_test4_old_x, *xe = x + 6;
	errno = 0;
	if (st_test4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_test4_xkind = 0;
	return 1;
	}
 real
st_test4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_test4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_test4_pd[0] = 0.5 * x[0];
	v[0] = st_test4_pd[0] * x[0];
	st_test4_pd[1] = 7. * x[1];
	v[1] = st_test4_pd[1] * x[1];
	v[2] = v[0] + v[1];
	rv = v[2] + 6.5*x[0];
	rv += -x[1];
	rv += 3.*x[2];
	rv += -2.*x[3];
	rv += -x[4];
	rv += -2.*x[5];
	;}

	if (wantfg & 2) {
	g[1] = st_test4_pd[1] + -1.;
	g[1] += x[1]*7.;
	g[0] = st_test4_pd[0] + 6.5;
	g[0] += x[0]*0.5;
	g[2] = 3.;
	g[3] = -2.;
	g[4] = -1.;
	g[5] = -2.;
	}

	return rv;
}

 void
st_test4_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_test4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += 5.*x[1];
	t1 += x[2];
	t1 += 3.*x[3];
	t1 += 2.*x[4];
	t1 += 8.*x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -8.*x[0];
	t1 += -x[1];
	t1 += 2.*x[2];
	t1 += 4.*x[3];
	t1 += -4.*x[4];
	t1 += -2.*x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[0];
	t1 += -4.*x[1];
	t1 += -3.*x[2];
	t1 += -x[3];
	t1 += 0.5*x[4];
	t1 += 0.2*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 0.2*x[0];
	t1 += 2.*x[1];
	t1 += -4.*x[2];
	t1 += 2.*x[3];
	t1 += 2.*x[4];
	t1 += 0.1*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -0.1*x[0];
	t1 += 3.*x[1];
	t1 += 5.*x[2];
	t1 += -5.*x[3];
	t1 += -0.5*x[4];
	t1 += 2.*x[5];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[5] = 5.;
	J[10] = 1.;
	J[15] = 3.;
	J[20] = 2.;
	J[25] = 8.;

   /*** derivatives for constraint 2 ***/

	J[1] = -8.;
	J[6] = -1.;
	J[11] = 2.;
	J[16] = 4.;
	J[21] = -4.;
	J[26] = -2.;

   /*** derivatives for constraint 3 ***/

	J[2] = 2.;
	J[7] = -4.;
	J[12] = -3.;
	J[17] = -1.;
	J[22] = 0.5;
	J[27] = 0.2;

   /*** derivatives for constraint 4 ***/

	J[3] = 0.2;
	J[8] = 2.;
	J[13] = -4.;
	J[18] = 2.;
	J[23] = 2.;
	J[28] = 0.1;

   /*** derivatives for constraint 5 ***/

	J[4] = -0.1;
	J[9] = 3.;
	J[14] = 5.;
	J[19] = -5.;
	J[24] = -0.5;
	J[29] = 2.;
	}
}
#ifdef __cplusplus
	}
#endif
