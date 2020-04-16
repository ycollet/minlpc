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
 fint st_e29_auxcom_[1] = { 3 /* nlc */ };
 fint st_e29_funcom_[45] = {
	11 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	27 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	25,
	28,

	/* rownos */
	1,
	2,
	3,
	1,
	4,
	7,
	1,
	4,
	7,
	1,
	4,
	7,
	2,
	5,
	7,
	2,
	5,
	7,
	2,
	5,
	7,
	3,
	6,
	7,
	3,
	6,
	7 };

 real st_e29_boundc_[1+22+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		0.997,
		0.,
		0.9985,
		0.,
		0.9988,
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
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		-1.,
		-1.7e308,
		-1.,
		-1.7e308,
		-1.,
		-1.7e308,
		10.};

 real st_e29_x0comn_[11] = {
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

 static real st_e29_pd[4];
static real st_e29_old_x[11];
static int st_e29_xkind = -1;

 static int
st_e29_xcheck(real *x)
{
	real *x1 = st_e29_old_x, *xe = x + 11;
	errno = 0;
	if (st_e29_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e29_xkind = 0;
	return 1;
	}
 real
st_e29_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (st_e29_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e29_pd[3] = x[0] * x[1];
	v[0] = st_e29_pd[3] * x[2];
	v[1] = -v[0];
	;}

	if (wantfg & 2) {
	g[2] = -st_e29_pd[3];
	g[1] = -x[2]*x[0];
	g[0] = -x[2]*x[1];
	}

	return v[1];
}

 void
st_e29_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (st_e29_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 1. - x[0];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	st_e29_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + -2.30258509299405*x[3];
	t1 += -1.6094379124341*x[4];
	t1 += -1.89711998488588*x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 1. - x[1];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	st_e29_pd[1] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + -2.99573227355399*x[6];
	t1 += -1.6094379124341*x[7];
	t1 += -1.89711998488588*x[8];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 1. - x[2];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	st_e29_pd[2] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + -3.91202300542815*x[9];
	t1 += -2.81341071676004*x[10];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += -x[4];
	t1 += -x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[6];
	t1 += -x[7];
	t1 += -x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[9];
	t1 += -x[10];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 3.*x[3];
	t1 += x[4];
	t1 += 2.*x[5];
	t1 += 3.*x[6];
	t1 += 2.*x[7];
	t1 += x[8];
	t1 += 3.*x[9];
	t1 += 2.*x[10];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = st_e29_pd[0];
	J[3] = -2.30258509299405;
	J[6] = -1.6094379124341;
	J[9] = -1.89711998488588;

   /*** derivatives for constraint 2 ***/

	J[1] = st_e29_pd[1];
	J[12] = -2.99573227355399;
	J[15] = -1.6094379124341;
	J[18] = -1.89711998488588;

   /*** derivatives for constraint 3 ***/

	J[2] = st_e29_pd[2];
	J[21] = -3.91202300542815;
	J[24] = -2.81341071676004;

   /*** derivatives for constraint 4 ***/

	J[4] = -1.;
	J[7] = -1.;
	J[10] = -1.;

   /*** derivatives for constraint 5 ***/

	J[13] = -1.;
	J[16] = -1.;
	J[19] = -1.;

   /*** derivatives for constraint 6 ***/

	J[22] = -1.;
	J[25] = -1.;

   /*** derivatives for constraint 7 ***/

	J[5] = 3.;
	J[8] = 1.;
	J[11] = 2.;
	J[14] = 3.;
	J[17] = 2.;
	J[20] = 1.;
	J[23] = 3.;
	J[26] = 2.;
	}
}
#ifdef __cplusplus
	}
#endif
