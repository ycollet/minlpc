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
 fint st_test6_auxcom_[1] = { 0 /* nlc */ };
 fint st_test6_funcom_[63] = {
	10 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	46 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	15,
	19,
	23,
	28,
	33,
	38,
	42,
	47,

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
	5,
	2,
	3,
	4,
	5,
	1,
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
	4,
	5,
	1,
	2,
	3,
	4,
	5 };

 real st_test6_boundc_[1+20+10] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		-4.,
		-1.7e308,
		22.,
		-1.7e308,
		-6.,
		-1.7e308,
		-23.,
		-1.7e308,
		-12.};

 real st_test6_x0comn_[10] = {
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

 static real st_test6_pd[10];
static real st_test6_old_x[10];
static int st_test6_xkind = -1;

 static int
st_test6_xcheck(real *x)
{
	real *x1 = st_test6_old_x, *xe = x + 10;
	errno = 0;
	if (st_test6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_test6_xkind = 0;
	return 1;
	}
 real
st_test6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_test6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_test6_pd[0] = 50. * x[0];
	v[0] = st_test6_pd[0] * x[0];
	st_test6_pd[1] = 50. * x[1];
	v[1] = st_test6_pd[1] * x[1];
	v[0] += v[1];
	st_test6_pd[2] = 50. * x[2];
	v[1] = st_test6_pd[2] * x[2];
	v[0] += v[1];
	st_test6_pd[3] = 50. * x[3];
	v[1] = st_test6_pd[3] * x[3];
	v[0] += v[1];
	st_test6_pd[4] = 50. * x[4];
	v[1] = st_test6_pd[4] * x[4];
	v[0] += v[1];
	st_test6_pd[5] = 50. * x[5];
	v[1] = st_test6_pd[5] * x[5];
	v[0] += v[1];
	st_test6_pd[6] = 50. * x[6];
	v[1] = st_test6_pd[6] * x[6];
	v[0] += v[1];
	st_test6_pd[7] = 50. * x[7];
	v[1] = st_test6_pd[7] * x[7];
	v[0] += v[1];
	st_test6_pd[8] = 50. * x[8];
	v[1] = st_test6_pd[8] * x[8];
	v[0] += v[1];
	st_test6_pd[9] = 50. * x[9];
	v[1] = st_test6_pd[9] * x[9];
	v[0] += v[1];
	rv = v[0] + 48.*x[0];
	rv += 42.*x[1];
	rv += 48.*x[2];
	rv += 45.*x[3];
	rv += 44.*x[4];
	rv += 41.*x[5];
	rv += 47.*x[6];
	rv += 42.*x[7];
	rv += 45.*x[8];
	rv += 46.*x[9];
	;}

	if (wantfg & 2) {
	g[9] = st_test6_pd[9] + 46.;
	g[9] += x[9]*50.;
	g[8] = st_test6_pd[8] + 45.;
	g[8] += x[8]*50.;
	g[7] = st_test6_pd[7] + 42.;
	g[7] += x[7]*50.;
	g[6] = st_test6_pd[6] + 47.;
	g[6] += x[6]*50.;
	g[5] = st_test6_pd[5] + 41.;
	g[5] += x[5]*50.;
	g[4] = st_test6_pd[4] + 44.;
	g[4] += x[4]*50.;
	g[3] = st_test6_pd[3] + 45.;
	g[3] += x[3]*50.;
	g[2] = st_test6_pd[2] + 48.;
	g[2] += x[2]*50.;
	g[1] = st_test6_pd[1] + 42.;
	g[1] += x[1]*50.;
	g[0] = st_test6_pd[0] + 48.;
	g[0] += x[0]*50.;
	}

	return rv;
}

 void
st_test6_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_test6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -2.*x[0];
	t1 += -6.*x[1];
	t1 += -x[2];
	t1 += -3.*x[4];
	t1 += -3.*x[5];
	t1 += -2.*x[6];
	t1 += -6.*x[7];
	t1 += -2.*x[8];
	t1 += -2.*x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 6.*x[0];
	t1 += -5.*x[1];
	t1 += 8.*x[2];
	t1 += -3.*x[3];
	t1 += x[5];
	t1 += 3.*x[6];
	t1 += 8.*x[7];
	t1 += 9.*x[8];
	t1 += -3.*x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -5.*x[0];
	t1 += 6.*x[1];
	t1 += 5.*x[2];
	t1 += 3.*x[3];
	t1 += 8.*x[4];
	t1 += -8.*x[5];
	t1 += 9.*x[6];
	t1 += 2.*x[7];
	t1 += -9.*x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 9.*x[0];
	t1 += 5.*x[1];
	t1 += -9.*x[3];
	t1 += x[4];
	t1 += -8.*x[5];
	t1 += 3.*x[6];
	t1 += -9.*x[7];
	t1 += -9.*x[8];
	t1 += -3.*x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -8.*x[0];
	t1 += 7.*x[1];
	t1 += -4.*x[2];
	t1 += -5.*x[3];
	t1 += -9.*x[4];
	t1 += x[5];
	t1 += -7.*x[6];
	t1 += -x[7];
	t1 += 3.*x[8];
	t1 += -2.*x[9];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -2.;
	J[5] = -6.;
	J[10] = -1.;
	J[18] = -3.;
	J[22] = -3.;
	J[27] = -2.;
	J[32] = -6.;
	J[37] = -2.;
	J[41] = -2.;

   /*** derivatives for constraint 2 ***/

	J[1] = 6.;
	J[6] = -5.;
	J[11] = 8.;
	J[14] = -3.;
	J[23] = 1.;
	J[28] = 3.;
	J[33] = 8.;
	J[38] = 9.;
	J[42] = -3.;

   /*** derivatives for constraint 3 ***/

	J[2] = -5.;
	J[7] = 6.;
	J[12] = 5.;
	J[15] = 3.;
	J[19] = 8.;
	J[24] = -8.;
	J[29] = 9.;
	J[34] = 2.;
	J[43] = -9.;

   /*** derivatives for constraint 4 ***/

	J[3] = 9.;
	J[8] = 5.;
	J[16] = -9.;
	J[20] = 1.;
	J[25] = -8.;
	J[30] = 3.;
	J[35] = -9.;
	J[39] = -9.;
	J[44] = -3.;

   /*** derivatives for constraint 5 ***/

	J[4] = -8.;
	J[9] = 7.;
	J[13] = -4.;
	J[17] = -5.;
	J[21] = -9.;
	J[26] = 1.;
	J[31] = -7.;
	J[36] = -1.;
	J[40] = 3.;
	J[45] = -2.;
	}
}
#ifdef __cplusplus
	}
#endif
