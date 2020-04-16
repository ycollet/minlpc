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
 fint st_e28_auxcom_[1] = { 3 /* nlc */ };
 fint st_e28_funcom_[38] = {
	9 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	22 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	15,
	17,
	18,
	19,
	20,
	23,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	1,
	3,
	1,
	2,
	3,
	1,
	3,
	4 };

 real st_e28_boundc_[1+18+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		78.,
		102.,
		27.,
		45.,
		27.,
		45.,
		33.,
		45.,
		27.,
		45.,
		0.,
		92.,
		90.,
		110.,
		20.,
		25.,
		0.,
		1.7e308,
		85.334407,
		85.334407,
		80.51249,
		80.51249,
		9.300961,
		9.300961,
		0.,
		1.7e308};

 real st_e28_x0comn_[9] = {
		78.62,
		31.07,
		35.22,
		33.44,
		44.18,
		0.,
		90.,
		20.,
		0. };

 static real st_e28_pd[13];
static real st_e28_old_x[9];
static int st_e28_xkind = -1;

 static int
st_e28_xcheck(real *x)
{
	real *x1 = st_e28_old_x, *xe = x + 9;
	errno = 0;
	if (st_e28_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e28_xkind = 0;
	return 1;
	}
 real
st_e28_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_e28_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e28_pd[10] = x[1] * x[1];
	st_e28_pd[11] = x[1] + x[1];
	v[0] = 5.3578547 * st_e28_pd[10];
	st_e28_pd[12] = 0.8356891 * x[0];
	v[1] = st_e28_pd[12] * x[2];
	v[0] += v[1];
	v[0] += -40792.141;
	rv = v[0] + 37.293239*x[0];
	rv += 5000.*x[8];
	;}

	if (wantfg & 2) {
	g[2] = st_e28_pd[12];
	g[0] = x[2]*0.8356891 + 37.293239;
	g[1] = 5.3578547*st_e28_pd[11];
	g[8] = 5000.;
	}

	return rv;
}

 void
st_e28_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_e28_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e28_pd[0] = 0.0056858 * x[3];
	v[0] = st_e28_pd[0] * x[2];
	v[1] = -v[0];
	st_e28_pd[1] = 0.0006262 * x[0];
	v[0] = st_e28_pd[1] * x[4];
	v[2] = -v[0];
	v[1] += v[2];
	st_e28_pd[2] = 0.0022053 * x[1];
	v[2] = st_e28_pd[2] * x[2];
	v[1] += v[2];
	t1 = v[1] + x[5];
	t1 += 2.*x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	st_e28_pd[3] = 0.0071317 * x[3];
	v[0] = st_e28_pd[3] * x[2];
	v[1] = -v[0];
	st_e28_pd[4] = 0.0029955 * x[0];
	v[0] = st_e28_pd[4] * x[3];
	v[2] = -v[0];
	v[1] += v[2];
	st_e28_pd[5] = x[1] * x[1];
	st_e28_pd[6] = x[1] + x[1];
	v[2] = -0.0021813 * st_e28_pd[5];
	v[1] += v[2];
	t1 = v[1] + x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	st_e28_pd[7] = 0.0047026 * x[1];
	v[0] = st_e28_pd[7] * x[2];
	st_e28_pd[8] = 0.0012547 * x[0];
	v[1] = st_e28_pd[8] * x[1];
	v[0] += v[1];
	st_e28_pd[9] = 0.0019085 * x[1];
	v[1] = st_e28_pd[9] * x[4];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	t1 += 4.*x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += 7.*x[1];
	t1 += -x[2];
	t1 += 5.*x[8];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = st_e28_pd[2];
	J[4] = x[2]*0.0022053;
	J[14] = -st_e28_pd[1];
	J[0] = -x[4]*0.0006262;
	J[8] -= st_e28_pd[0];
	J[12] = -x[2]*0.0056858;
	J[16] = 1.;
	J[19] = 2.;

   /*** derivatives for constraint 2 ***/

	J[5] = -0.0021813*st_e28_pd[6];
	J[13] = -st_e28_pd[4];
	J[1] = -x[3]*0.0029955;
	J[9] = -st_e28_pd[3];
	J[13] -= x[2]*0.0071317;
	J[17] = 1.;

   /*** derivatives for constraint 3 ***/

	J[15] = -st_e28_pd[9];
	J[6] = -x[4]*0.0019085;
	J[6] -= st_e28_pd[8];
	J[2] = -x[1]*0.0012547;
	J[10] = -st_e28_pd[7];
	J[6] -= x[2]*0.0047026;
	J[18] = 1.;
	J[20] = 4.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[7] = 7.;
	J[11] = -1.;
	J[21] = 5.;
	}
}
#ifdef __cplusplus
	}
#endif
