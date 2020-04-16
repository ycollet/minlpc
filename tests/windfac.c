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
 fint windfac_auxcom_[1] = { 10 /* nlc */ };
 fint windfac_funcom_[56] = {
	14 /* nvar */,
	1 /* nobj */,
	13 /* ncon */,
	35 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	10,
	12,
	14,
	16,
	18,
	20,
	22,
	26,
	29,
	33,
	34,
	35,
	36,

	/* rownos */
	1,
	2,
	5,
	8,
	3,
	6,
	9,
	12,
	13,
	2,
	4,
	5,
	7,
	8,
	10,
	3,
	4,
	6,
	7,
	9,
	10,
	2,
	5,
	8,
	11,
	1,
	11,
	12,
	3,
	6,
	9,
	13,
	7,
	10,
	4 };

 real windfac_boundc_[1+28+26] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		1.,
		10.,
		1.,
		100.,
		1.,
		100.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.8,
		1.7e308,
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
		-1.,
		-1.};

 real windfac_x0comn_[14] = {
		1.5,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.3,
		15.4,
		2.8,
		0.,
		0.,
		0.8 };

 static real windfac_pd[25];
static real windfac_old_x[14];
static int windfac_xkind = -1;

 static int
windfac_xcheck(real *x)
{
	real *x1 = windfac_old_x, *xe = x + 14;
	errno = 0;
	if (windfac_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	windfac_xkind = 0;
	return 1;
	}
 real
windfac_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (windfac_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[11] * x[11];
	v[1] = x[12] * x[12];
	v[2] = v[0] + v[1];
	;}

	if (wantfg & 2) {
	g[12] = x[12];
	g[12] += x[12];
	g[11] = x[11];
	g[11] += x[11];
	}

	return v[2];
}

 void
windfac_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (windfac_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[0] = -12.566370616 / x[9];
	windfac_pd[0] = -v[0] / x[9];
	t1 = v[0] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.5 * x[0];
	windfac_pd[1] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	windfac_pd[2] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	windfac_pd[3] = windfac_pd[1] * x[8];
	v[0] = windfac_pd[3] * x[2];
	windfac_pd[4] = 0.5 * x[8];
	v[1] = windfac_pd[4] * x[0];
	v[2] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	windfac_pd[5] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = v[0] - v[2];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = 1.570796327 * x[10];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	windfac_pd[6] = 1. / x[1];
	windfac_pd[7] = -v[1] * windfac_pd[6];
	v[0] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	windfac_pd[8] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = -v[0];
	t1 = v[1] + x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[5] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 1.5 * x[0];
	windfac_pd[9] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	windfac_pd[10] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	windfac_pd[11] = windfac_pd[9] * x[8];
	v[0] = windfac_pd[11] * x[3];
	windfac_pd[12] = 1.5 * x[8];
	v[1] = windfac_pd[12] * x[0];
	v[2] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	windfac_pd[13] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = v[0] - v[2];
	c[4] = v[1];

  /***  constraint 6  ***/

	v[0] = 4.712388981 * x[10];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	windfac_pd[14] = 1. / x[1];
	windfac_pd[15] = -v[1] * windfac_pd[14];
	v[0] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	windfac_pd[16] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = -v[0];
	t1 = v[1] + x[6];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[6] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[11];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = 2.5 * x[0];
	windfac_pd[17] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	windfac_pd[18] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	windfac_pd[19] = windfac_pd[17] * x[8];
	v[0] = windfac_pd[19] * x[4];
	windfac_pd[20] = 2.5 * x[8];
	v[1] = windfac_pd[20] * x[0];
	v[2] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	windfac_pd[21] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = v[0] - v[2];
	c[7] = v[1];

  /***  constraint 9  ***/

	v[0] = 7.853981635 * x[10];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	windfac_pd[22] = 1. / x[1];
	windfac_pd[23] = -v[1] * windfac_pd[22];
	v[0] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	windfac_pd[24] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[7] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -12.*x[8];
	t1 += x[9];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[1];
	t1 += -0.25*x[9];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[1];
	t1 += x[10];
	c[12] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[25] = windfac_pd[0];
	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -windfac_pd[5]*windfac_pd[4];
	dv[0] = -windfac_pd[5]*x[0];
	J[21] = dv[0]*0.5;
	J[9] = windfac_pd[3];
	J[21] += x[2]*windfac_pd[1];
	dv[1] = x[2]*x[8];
	dv[1] *= windfac_pd[2];
	J[1] += dv[1]*0.5;

   /*** derivatives for constraint 3 ***/

	J[4] = -windfac_pd[8]*windfac_pd[7];
	dv[0] = -windfac_pd[8]*windfac_pd[6];
	J[28] = dv[0]*1.570796327;
	J[15] = 1.;

   /*** derivatives for constraint 4 ***/

	J[10] = -x[5];
	J[16] = -x[2];
	J[34] = 1.;

   /*** derivatives for constraint 5 ***/

	J[2] = -windfac_pd[13]*windfac_pd[12];
	dv[0] = -windfac_pd[13]*x[0];
	J[22] = dv[0]*1.5;
	J[11] = windfac_pd[11];
	J[22] += x[3]*windfac_pd[9];
	dv[1] = x[3]*x[8];
	dv[1] *= windfac_pd[10];
	J[2] += dv[1]*1.5;

   /*** derivatives for constraint 6 ***/

	J[5] = -windfac_pd[16]*windfac_pd[15];
	dv[0] = -windfac_pd[16]*windfac_pd[14];
	J[29] = dv[0]*4.712388981;
	J[17] = 1.;

   /*** derivatives for constraint 7 ***/

	J[12] = -x[6];
	J[18] = -x[3];
	J[32] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = -windfac_pd[21]*windfac_pd[20];
	dv[0] = -windfac_pd[21]*x[0];
	J[23] = dv[0]*2.5;
	J[13] = windfac_pd[19];
	J[23] += x[4]*windfac_pd[17];
	dv[1] = x[4]*x[8];
	dv[1] *= windfac_pd[18];
	J[3] += dv[1]*2.5;

   /*** derivatives for constraint 9 ***/

	J[6] = -windfac_pd[24]*windfac_pd[23];
	dv[0] = -windfac_pd[24]*windfac_pd[22];
	J[30] = dv[0]*7.853981635;
	J[19] = 1.;

   /*** derivatives for constraint 10 ***/

	J[14] = -x[7];
	J[20] = -x[4];
	J[33] = 1.;

   /*** derivatives for constraint 11 ***/

	J[24] = -12.;
	J[26] = 1.;

   /*** derivatives for constraint 12 ***/

	J[7] = 1.;
	J[27] = -0.25;

   /*** derivatives for constraint 13 ***/

	J[8] = -1.;
	J[31] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
