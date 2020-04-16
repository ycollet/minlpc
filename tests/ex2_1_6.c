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
 fint ex2_1_6_auxcom_[1] = { 0 /* nlc */ };
 fint ex2_1_6_funcom_[63] = {
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

 real ex2_1_6_boundc_[1+20+10] /* Infinity, variable bounds, constraint bounds */ = {
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

 real ex2_1_6_x0comn_[10] = {
		1.,
		0.,
		0.,
		1.,
		1.,
		1.,
		0.,
		1.,
		1.,
		1. };

 static real ex2_1_6_pd[20];
static real ex2_1_6_old_x[10];
static int ex2_1_6_xkind = -1;

 static int
ex2_1_6_xcheck(real *x)
{
	real *x1 = ex2_1_6_old_x, *xe = x + 10;
	errno = 0;
	if (ex2_1_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex2_1_6_xkind = 0;
	return 1;
	}
 real
ex2_1_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[10], rv;
	fint wantfg = *needfg;
	if (ex2_1_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex2_1_6_pd[0] = 100. * x[0];
	ex2_1_6_pd[1] = ex2_1_6_pd[0] * x[0];
	v[0] = -0.5 * ex2_1_6_pd[1];
	ex2_1_6_pd[2] = 100. * x[1];
	ex2_1_6_pd[3] = ex2_1_6_pd[2] * x[1];
	v[1] = -0.5 * ex2_1_6_pd[3];
	v[0] += v[1];
	ex2_1_6_pd[4] = 100. * x[2];
	ex2_1_6_pd[5] = ex2_1_6_pd[4] * x[2];
	v[1] = -0.5 * ex2_1_6_pd[5];
	v[0] += v[1];
	ex2_1_6_pd[6] = 100. * x[3];
	ex2_1_6_pd[7] = ex2_1_6_pd[6] * x[3];
	v[1] = -0.5 * ex2_1_6_pd[7];
	v[0] += v[1];
	ex2_1_6_pd[8] = 100. * x[4];
	ex2_1_6_pd[9] = ex2_1_6_pd[8] * x[4];
	v[1] = -0.5 * ex2_1_6_pd[9];
	v[0] += v[1];
	ex2_1_6_pd[10] = 100. * x[5];
	ex2_1_6_pd[11] = ex2_1_6_pd[10] * x[5];
	v[1] = -0.5 * ex2_1_6_pd[11];
	v[0] += v[1];
	ex2_1_6_pd[12] = 100. * x[6];
	ex2_1_6_pd[13] = ex2_1_6_pd[12] * x[6];
	v[1] = -0.5 * ex2_1_6_pd[13];
	v[0] += v[1];
	ex2_1_6_pd[14] = 100. * x[7];
	ex2_1_6_pd[15] = ex2_1_6_pd[14] * x[7];
	v[1] = -0.5 * ex2_1_6_pd[15];
	v[0] += v[1];
	ex2_1_6_pd[16] = 100. * x[8];
	ex2_1_6_pd[17] = ex2_1_6_pd[16] * x[8];
	v[1] = -0.5 * ex2_1_6_pd[17];
	v[0] += v[1];
	ex2_1_6_pd[18] = 100. * x[9];
	ex2_1_6_pd[19] = ex2_1_6_pd[18] * x[9];
	v[1] = -0.5 * ex2_1_6_pd[19];
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
	g[9] = -0.5*ex2_1_6_pd[18] + 46.;
	dv[0] = -0.5*x[9];
	g[9] += dv[0]*100.;
	g[8] = -0.5*ex2_1_6_pd[16] + 45.;
	dv[1] = -0.5*x[8];
	g[8] += dv[1]*100.;
	g[7] = -0.5*ex2_1_6_pd[14] + 42.;
	dv[2] = -0.5*x[7];
	g[7] += dv[2]*100.;
	g[6] = -0.5*ex2_1_6_pd[12] + 47.;
	dv[3] = -0.5*x[6];
	g[6] += dv[3]*100.;
	g[5] = -0.5*ex2_1_6_pd[10] + 41.;
	dv[4] = -0.5*x[5];
	g[5] += dv[4]*100.;
	g[4] = -0.5*ex2_1_6_pd[8] + 44.;
	dv[5] = -0.5*x[4];
	g[4] += dv[5]*100.;
	g[3] = -0.5*ex2_1_6_pd[6] + 45.;
	dv[6] = -0.5*x[3];
	g[3] += dv[6]*100.;
	g[2] = -0.5*ex2_1_6_pd[4] + 48.;
	dv[7] = -0.5*x[2];
	g[2] += dv[7]*100.;
	g[1] = -0.5*ex2_1_6_pd[2] + 42.;
	dv[8] = -0.5*x[1];
	g[1] += dv[8]*100.;
	g[0] = -0.5*ex2_1_6_pd[0] + 48.;
	dv[9] = -0.5*x[0];
	g[0] += dv[9]*100.;
	}

	return rv;
}

 void
ex2_1_6_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex2_1_6_xcheck(x) && wantfg == 2)
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
