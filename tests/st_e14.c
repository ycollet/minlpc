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
 fint st_e14_auxcom_[1] = { 4 /* nlc */ };
 fint st_e14_funcom_[50] = {
	11 /* nvar */,
	1 /* nobj */,
	13 /* ncon */,
	32 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	14,
	17,
	20,
	21,
	22,
	25,
	28,
	31,
	33,

	/* rownos */
	1,
	5,
	6,
	9,
	1,
	2,
	5,
	7,
	1,
	3,
	4,
	5,
	8,
	2,
	4,
	11,
	1,
	3,
	12,
	10,
	13,
	5,
	6,
	10,
	5,
	7,
	11,
	5,
	8,
	12,
	9,
	13 };

 real st_e14_boundc_[1+22+26] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
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
		5.5,
		-1.7e308,
		1.64,
		-1.7e308,
		4.25,
		-1.7e308,
		4.64,
		-1.7e308,
		5.,
		-1.7e308,
		1.2,
		-1.7e308,
		1.8,
		-1.7e308,
		2.5,
		-1.7e308,
		1.2,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real st_e14_x0comn_[11] = {
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

 static real st_e14_pd[17];
static real st_e14_old_x[11];
static int st_e14_xkind = -1;

 static int
st_e14_xcheck(real *x)
{
	real *x1 = st_e14_old_x, *xe = x + 11;
	errno = 0;
	if (st_e14_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e14_xkind = 0;
	return 1;
	}
 real
st_e14_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (st_e14_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[5] + -1.;
	v[1] = v[0] * v[0];
	st_e14_pd[10] = v[0] + v[0];
	v[0] = x[3] + -2.;
	v[2] = v[0] * v[0];
	st_e14_pd[11] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[4] + -1.;
	v[0] = v[2] * v[2];
	st_e14_pd[12] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[6] + 1.;
	v[2] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	st_e14_pd[13] = 1. / v[0];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[0] + -1.;
	v[2] = v[0] * v[0];
	st_e14_pd[14] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[1] + -2.;
	v[0] = v[2] * v[2];
	st_e14_pd[15] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[2] + -3.;
	v[2] = v[0] * v[0];
	st_e14_pd[16] = v[0] + v[0];
	v[1] += v[2];
	;}

	if (wantfg & 2) {
	g[2] = st_e14_pd[16];
	g[1] = st_e14_pd[15];
	g[0] = st_e14_pd[14];
	g[6] = -st_e14_pd[13];
	g[4] = st_e14_pd[12];
	g[3] = st_e14_pd[11];
	g[5] = st_e14_pd[10];
	}

	return v[1];
}

 void
st_e14_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_e14_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[4] * x[4];
	st_e14_pd[0] = x[4] + x[4];
	v[1] = x[0] * x[0];
	st_e14_pd[1] = x[0] + x[0];
	v[0] += v[1];
	v[1] = x[1] * x[1];
	st_e14_pd[2] = x[1] + x[1];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	st_e14_pd[3] = x[2] + x[2];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[3] * x[3];
	st_e14_pd[4] = x[3] + x[3];
	v[1] = x[1] * x[1];
	st_e14_pd[5] = x[1] + x[1];
	v[2] = v[0] + v[1];
	c[1] = v[2];

  /***  constraint 3  ***/

	v[0] = x[4] * x[4];
	st_e14_pd[6] = x[4] + x[4];
	v[1] = x[2] * x[2];
	st_e14_pd[7] = x[2] + x[2];
	v[2] = v[0] + v[1];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = x[3] * x[3];
	st_e14_pd[8] = x[3] + x[3];
	v[1] = x[2] * x[2];
	st_e14_pd[9] = x[2] + x[2];
	v[2] = v[0] + v[1];
	c[3] = v[2];

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += x[7];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[1];
	t1 += x[8];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[2];
	t1 += x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[0];
	t1 += x[10];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[5];
	t1 += -x[7];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[3];
	t1 += -x[8];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[4];
	t1 += -x[9];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[6];
	t1 += -x[10];
	c[12] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = st_e14_pd[3];
	J[4] = st_e14_pd[2];
	J[0] = st_e14_pd[1];
	J[16] = st_e14_pd[0];

   /*** derivatives for constraint 2 ***/

	J[5] = st_e14_pd[5];
	J[13] = st_e14_pd[4];

   /*** derivatives for constraint 3 ***/

	J[9] = st_e14_pd[7];
	J[17] = st_e14_pd[6];

   /*** derivatives for constraint 4 ***/

	J[10] = st_e14_pd[9];
	J[14] = st_e14_pd[8];

   /*** derivatives for constraint 5 ***/

	J[1] = 1.;
	J[6] = 1.;
	J[11] = 1.;
	J[21] = 1.;
	J[24] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 6 ***/

	J[2] = 1.;
	J[22] = 1.;

   /*** derivatives for constraint 7 ***/

	J[7] = 1.;
	J[25] = 1.;

   /*** derivatives for constraint 8 ***/

	J[12] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 9 ***/

	J[3] = 1.;
	J[30] = 1.;

   /*** derivatives for constraint 10 ***/

	J[19] = 1.;
	J[23] = -1.;

   /*** derivatives for constraint 11 ***/

	J[15] = 1.;
	J[26] = -1.;

   /*** derivatives for constraint 12 ***/

	J[18] = 1.;
	J[29] = -1.;

   /*** derivatives for constraint 13 ***/

	J[20] = 1.;
	J[31] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
