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
 fint st_testgr1_auxcom_[1] = { 0 /* nlc */ };
 fint st_testgr1_funcom_[58] = {
	10 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	41 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	14,
	18,
	22,
	26,
	30,
	34,
	38,
	42,

	/* rownos */
	1,
	2,
	4,
	5,
	1,
	2,
	3,
	5,
	1,
	2,
	3,
	4,
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
	4,
	5 };

 real st_testgr1_boundc_[1+20+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		-1.7e308,
		530.,
		-1.7e308,
		395.,
		-1.7e308,
		350.,
		-1.7e308,
		405.,
		-1.7e308,
		200.};

 real st_testgr1_x0comn_[10] = {
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

 static real st_testgr1_pd[10];
static real st_testgr1_old_x[10];
static int st_testgr1_xkind = -1;

 static int
st_testgr1_xcheck(real *x)
{
	real *x1 = st_testgr1_old_x, *xe = x + 10;
	errno = 0;
	if (st_testgr1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_testgr1_xkind = 0;
	return 1;
	}
 real
st_testgr1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_testgr1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_testgr1_pd[0] = 0.00055 * x[0];
	v[0] = st_testgr1_pd[0] * x[0];
	st_testgr1_pd[1] = 0.0019 * x[1];
	v[1] = st_testgr1_pd[1] * x[1];
	v[0] += v[1];
	st_testgr1_pd[2] = 0.0002 * x[2];
	v[1] = st_testgr1_pd[2] * x[2];
	v[0] += v[1];
	st_testgr1_pd[3] = 0.00095 * x[3];
	v[1] = st_testgr1_pd[3] * x[3];
	v[0] += v[1];
	st_testgr1_pd[4] = 0.0046 * x[4];
	v[1] = st_testgr1_pd[4] * x[4];
	v[0] += v[1];
	st_testgr1_pd[5] = 0.0035 * x[5];
	v[1] = st_testgr1_pd[5] * x[5];
	v[0] += v[1];
	st_testgr1_pd[6] = 0.00315 * x[6];
	v[1] = st_testgr1_pd[6] * x[6];
	v[0] += v[1];
	st_testgr1_pd[7] = 0.00475 * x[7];
	v[1] = st_testgr1_pd[7] * x[7];
	v[0] += v[1];
	st_testgr1_pd[8] = 0.0048 * x[8];
	v[1] = st_testgr1_pd[8] * x[8];
	v[0] += v[1];
	st_testgr1_pd[9] = 0.003 * x[9];
	v[1] = st_testgr1_pd[9] * x[9];
	v[0] += v[1];
	rv = v[0] + -0.0583*x[0];
	rv += 0.2318*x[1];
	rv += -0.0108*x[2];
	rv += 0.1634*x[3];
	rv += -0.138*x[4];
	rv += 0.357*x[5];
	rv += -0.1953*x[6];
	rv += -0.361*x[7];
	rv += 0.1824*x[8];
	rv += -0.162*x[9];
	;}

	if (wantfg & 2) {
	g[9] = st_testgr1_pd[9] + -0.162;
	g[9] += x[9]*0.003;
	g[8] = st_testgr1_pd[8] + 0.1824;
	g[8] += x[8]*0.0048;
	g[7] = st_testgr1_pd[7] + -0.361;
	g[7] += x[7]*0.00475;
	g[6] = st_testgr1_pd[6] + -0.1953;
	g[6] += x[6]*0.00315;
	g[5] = st_testgr1_pd[5] + 0.357;
	g[5] += x[5]*0.0035;
	g[4] = st_testgr1_pd[4] + -0.138;
	g[4] += x[4]*0.0046;
	g[3] = st_testgr1_pd[3] + 0.1634;
	g[3] += x[3]*0.00095;
	g[2] = st_testgr1_pd[2] + -0.0108;
	g[2] += x[2]*0.0002;
	g[1] = st_testgr1_pd[1] + 0.2318;
	g[1] += x[1]*0.0019;
	g[0] = st_testgr1_pd[0] + -0.0583;
	g[0] += x[0]*0.00055;
	}

	return rv;
}

 void
st_testgr1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_testgr1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 8.*x[0];
	t1 += 7.*x[1];
	t1 += 9.*x[2];
	t1 += 9.*x[4];
	t1 += 8.*x[5];
	t1 += 2.*x[6];
	t1 += 4.*x[8];
	t1 += x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 3.*x[0];
	t1 += 4.*x[1];
	t1 += 6.*x[2];
	t1 += 9.*x[3];
	t1 += 6.*x[5];
	t1 += 9.*x[6];
	t1 += x[7];
	t1 += x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[1];
	t1 += x[2];
	t1 += 5.*x[3];
	t1 += 5.*x[4];
	t1 += 7.*x[6];
	t1 += 4.*x[7];
	t1 += 2.*x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 5.*x[0];
	t1 += 7.*x[2];
	t1 += x[3];
	t1 += 7.*x[4];
	t1 += 5.*x[5];
	t1 += 7.*x[7];
	t1 += 9.*x[8];
	t1 += 5.*x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 8.;
	J[4] = 7.;
	J[8] = 9.;
	J[17] = 9.;
	J[21] = 8.;
	J[25] = 2.;
	J[33] = 4.;
	J[37] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 3.;
	J[5] = 4.;
	J[9] = 6.;
	J[13] = 9.;
	J[22] = 6.;
	J[26] = 9.;
	J[29] = 1.;
	J[38] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = 2.;
	J[10] = 1.;
	J[14] = 5.;
	J[18] = 5.;
	J[27] = 7.;
	J[30] = 4.;
	J[34] = 2.;

   /*** derivatives for constraint 4 ***/

	J[2] = 5.;
	J[11] = 7.;
	J[15] = 1.;
	J[19] = 7.;
	J[23] = 5.;
	J[31] = 7.;
	J[35] = 9.;
	J[39] = 5.;

   /*** derivatives for constraint 5 ***/

	J[3] = 1.;
	J[7] = 1.;
	J[12] = 1.;
	J[16] = 1.;
	J[20] = 1.;
	J[24] = 1.;
	J[28] = 1.;
	J[32] = 1.;
	J[36] = 1.;
	J[40] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
