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
 fint st_e34_auxcom_[1] = { 4 /* nlc */ };
 fint st_e34_funcom_[33] = {
	6 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	20 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	6,
	10,
	14,
	17,
	21,

	/* rownos */
	1,
	2,
	4,
	1,
	2,
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
	4,
	1,
	2,
	3,
	4 };

 real st_e34_boundc_[1+12+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		0.31,
		0.,
		0.068,
		0.,
		0.042,
		0.,
		0.028,
		0.,
		0.0134,
		0.,
		0.046,
		4.97,
		1.7e308,
		-1.88,
		1.7e308,
		-69.08,
		1.7e308,
		-118.02,
		1.7e308};

 real st_e34_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_e34_pd[10];
static real st_e34_old_x[6];
static int st_e34_xkind = -1;

 static int
st_e34_xcheck(real *x)
{
	real *x1 = st_e34_old_x, *xe = x + 6;
	errno = 0;
	if (st_e34_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e34_xkind = 0;
	return 1;
	}
 real
st_e34_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e34_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 4.3*x[0];
	rv += 63.3*x[1];
	rv += 15.8*x[2];
	rv += 68.5*x[3];
	rv += 4.7*x[4];
	rv += 31.8*x[5];
	;}

	if (wantfg & 2) {
	g[0] = 4.3;
	g[1] = 63.3;
	g[2] = 15.8;
	g[3] = 68.5;
	g[4] = 4.7;
	g[5] = 31.8;
	}

	return rv;
}

 void
st_e34_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (st_e34_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e34_pd[0] = 169. * x[0];
	v[0] = st_e34_pd[0] * x[1];
	st_e34_pd[1] = 3580. * x[1];
	v[1] = st_e34_pd[1] * x[3];
	v[0] += v[1];
	st_e34_pd[2] = 3810. * x[2];
	v[1] = st_e34_pd[2] * x[4];
	v[0] += v[1];
	st_e34_pd[3] = 18500. * x[2];
	v[1] = st_e34_pd[3] * x[4];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + 17.1*x[0];
	t1 += 204.2*x[1];
	t1 += 212.3*x[2];
	t1 += 623.4*x[3];
	t1 += 1495.5*x[4];
	t1 += 38.2*x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	st_e34_pd[4] = 139. * x[0];
	v[0] = st_e34_pd[4] * x[1];
	st_e34_pd[5] = 2450. * x[2];
	v[1] = st_e34_pd[5] * x[3];
	v[0] += v[1];
	st_e34_pd[6] = 16600. * x[2];
	v[1] = st_e34_pd[6] * x[4];
	v[0] += v[1];
	st_e34_pd[7] = 17200. * x[3];
	v[1] = st_e34_pd[7] * x[4];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + 17.9*x[0];
	t1 += 113.9*x[1];
	t1 += 169.7*x[2];
	t1 += 337.8*x[3];
	t1 += 1385.2*x[4];
	t1 += 36.8*x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	st_e34_pd[8] = 26000. * x[2];
	v[0] = st_e34_pd[8] * x[3];
	t1 = v[0] + -70.*x[2];
	t1 += -819.*x[3];
	t1 += -273.*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	st_e34_pd[9] = 14000. * x[0];
	v[0] = st_e34_pd[9] * x[4];
	v[1] = -v[0];
	t1 = v[1] + 159.9*x[0];
	t1 += 587.*x[2];
	t1 += 391.*x[3];
	t1 += 2198.*x[4];
	t1 += -311.*x[5];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[13] = -st_e34_pd[3] + 1495.5;
	J[5] = -x[4]*18500. + 212.3;
	J[13] -= st_e34_pd[2];
	J[5] -= x[4]*3810.;
	J[9] = -st_e34_pd[1] + 623.4;
	J[3] = -x[3]*3580. + 204.2;
	J[3] -= st_e34_pd[0];
	J[0] = -x[1]*169. + 17.1;
	J[16] = 38.2;

   /*** derivatives for constraint 2 ***/

	J[14] = -st_e34_pd[7] + 1385.2;
	J[10] = -x[4]*17200. + 337.8;
	J[14] -= st_e34_pd[6];
	J[6] = -x[4]*16600. + 169.7;
	J[10] -= st_e34_pd[5];
	J[6] -= x[3]*2450.;
	J[4] = -st_e34_pd[4] + 113.9;
	J[1] = -x[1]*139. + 17.9;
	J[17] = 36.8;

   /*** derivatives for constraint 3 ***/

	J[11] = st_e34_pd[8] + -819.;
	J[7] = x[3]*26000. + -70.;
	J[18] = -273.;

   /*** derivatives for constraint 4 ***/

	J[15] = -st_e34_pd[9] + 2198.;
	J[2] = -x[4]*14000. + 159.9;
	J[8] = 587.;
	J[12] = 391.;
	J[19] = -311.;
	}
}
#ifdef __cplusplus
	}
#endif
