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
 fint alkylation_auxcom_[1] = { 6 /* nlc */ };
 fint alkylation_funcom_[48] = {
	10 /* nvar */,
	1 /* nobj */,
	11 /* ncon */,
	31 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	5,
	9,
	10,
	11,
	13,
	18,
	21,
	25,
	28,
	32,

	/* rownos */
	1,
	3,
	4,
	7,
	2,
	3,
	4,
	7,
	2,
	1,
	2,
	7,
	2,
	3,
	4,
	5,
	6,
	1,
	8,
	9,
	5,
	6,
	10,
	11,
	1,
	5,
	6,
	8,
	9,
	10,
	11 };

 real alkylation_boundc_[1+20+22] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-06,
		5000.,
		1.e-06,
		2000.,
		1.e-06,
		16000.,
		1.e-06,
		120.,
		1.e-06,
		2000.,
		3.,
		12.,
		0.01,
		4.,
		90.,
		95.,
		85.,
		93.,
		145.,
		162.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-57.425,
		1.7e308,
		57.425,
		1.7e308,
		0.,
		0.,
		-35.82,
		1.7e308,
		35.82,
		1.7e308,
		133.,
		1.7e308,
		-133.,
		1.7e308};

 real alkylation_x0comn_[10] = {
		3048.,
		1745.,
		12000.,
		110.,
		1974.,
		8.,
		3.6,
		92.8,
		89.2,
		145. };

 static real alkylation_pd[17];
static real alkylation_old_x[10];
static int alkylation_xkind = -1;

 static int
alkylation_xcheck(real *x)
{
	real *x1 = alkylation_old_x, *xe = x + 10;
	errno = 0;
	if (alkylation_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	alkylation_xkind = 0;
	return 1;
	}
 real
alkylation_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], rv;
	fint wantfg = *needfg;
	if (alkylation_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	alkylation_pd[16] = 0.063 * x[0];
	v[0] = alkylation_pd[16] * x[7];
	rv = v[0] + -5.04*x[1];
	rv += -0.035*x[2];
	rv += -10.*x[3];
	rv += -3.36*x[4];
	;}

	if (wantfg & 2) {
	g[7] = alkylation_pd[16];
	g[0] = x[7]*0.063;
	g[1] = -5.04;
	g[2] = -0.035;
	g[3] = -10.;
	g[4] = -3.36;
	}

	return rv;
}

 void
alkylation_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (alkylation_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = -98000. * x[3];
	v[1] = x[0] * x[6];
	v[2] = 1000. * x[3];
	v[3] = v[1] + v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[0] / v[3];
	alkylation_pd[0] = 1. / v[3];
	alkylation_pd[1] = -v[2] * alkylation_pd[0];
	t1 = v[2] + x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] + x[4];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	alkylation_pd[2] = 1. / x[1];
	alkylation_pd[3] = -v[1] * alkylation_pd[2];
	v[0] = -v[1];
	t1 = v[0] + x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	alkylation_pd[4] = 0.13167 * x[5];
	alkylation_pd[7] = alkylation_pd[4] + 1.12;
	alkylation_pd[5] = x[5] * x[5];
	alkylation_pd[6] = x[5] + x[5];
	v[1] = -0.00667 * alkylation_pd[5];
	alkylation_pd[7] += v[1];
	v[1] = alkylation_pd[7] * x[1];
	t1 = v[1] + -0.99*x[0];
	c[2] = t1;

  /***  constraint 4  ***/

	alkylation_pd[8] = 0.13167 * x[5];
	alkylation_pd[11] = alkylation_pd[8] + 1.12;
	alkylation_pd[9] = x[5] * x[5];
	alkylation_pd[10] = x[5] + x[5];
	v[1] = -0.00667 * alkylation_pd[9];
	alkylation_pd[11] += v[1];
	v[1] = alkylation_pd[11] * x[1];
	v[2] = -v[1];
	t1 = v[2] + 1.01010101010101*x[0];
	c[3] = t1;

  /***  constraint 5  ***/

	alkylation_pd[12] = x[5] * x[5];
	alkylation_pd[13] = x[5] + x[5];
	v[0] = -0.038 * alkylation_pd[12];
	t1 = v[0] + 1.098*x[5];
	t1 += -0.99*x[7];
	t1 += 0.325*x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	alkylation_pd[14] = x[5] * x[5];
	alkylation_pd[15] = x[5] + x[5];
	v[0] = 0.038 * alkylation_pd[14];
	t1 = v[0] + -1.098*x[5];
	t1 += 1.01010101010101*x[7];
	t1 += -0.325*x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -1.22*x[0];
	t1 += x[1];
	t1 += x[4];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -0.9*x[6];
	t1 += -0.222*x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 1.11111111111111*x[6];
	t1 += 0.222*x[9];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 3.*x[7];
	t1 += -0.99*x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -3.*x[7];
	t1 += 1.01010101010101*x[9];
	c[10] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = alkylation_pd[1];
	J[9] = dv[0]*1000.;
	J[17] = alkylation_pd[1]*x[0];
	J[0] = alkylation_pd[1]*x[6];
	J[9] -= alkylation_pd[0]*98000.;
	J[24] = 1.;

   /*** derivatives for constraint 2 ***/

	J[4] = -alkylation_pd[3];
	J[10] = -alkylation_pd[2];
	J[8] = -alkylation_pd[2];
	J[12] = 1.;

   /*** derivatives for constraint 3 ***/

	J[5] = alkylation_pd[7];
	dv[0] = x[1];
	dv[0] = -dv[0]*0.00667;
	J[13] = dv[0]*alkylation_pd[6];
	J[13] += x[1]*0.13167;
	J[1] = -0.99;

   /*** derivatives for constraint 4 ***/

	J[6] = -alkylation_pd[11];
	dv[0] = -x[1];
	dv[0] = -dv[0]*0.00667;
	J[14] = dv[0]*alkylation_pd[10];
	J[14] -= x[1]*0.13167;
	J[2] = 1.01010101010101;

   /*** derivatives for constraint 5 ***/

	J[15] = -0.038*alkylation_pd[13] + 1.098;
	J[20] = -0.99;
	J[25] = 0.325;

   /*** derivatives for constraint 6 ***/

	J[16] = 0.038*alkylation_pd[15] + -1.098;
	J[21] = 1.01010101010101;
	J[26] = -0.325;

   /*** derivatives for constraint 7 ***/

	J[3] = -1.22;
	J[7] = 1.;
	J[11] = 1.;

   /*** derivatives for constraint 8 ***/

	J[18] = -0.9;
	J[27] = -0.222;

   /*** derivatives for constraint 9 ***/

	J[19] = 1.11111111111111;
	J[28] = 0.222;

   /*** derivatives for constraint 10 ***/

	J[22] = 3.;
	J[29] = -0.99;

   /*** derivatives for constraint 11 ***/

	J[23] = -3.;
	J[30] = 1.01010101010101;
	}
}
#ifdef __cplusplus
	}
#endif
