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
 fint ball_mk4_05_auxcom_[1] = { 1 /* nlc */ };
 fint ball_mk4_05_funcom_[27] = {
	10 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	10 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real ball_mk4_05_boundc_[1+20+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-1.7e308,
		-1.};

 real ball_mk4_05_x0comn_[10] = {
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

 static real ball_mk4_05_pd[30];
static real ball_mk4_05_old_x[10];
static int ball_mk4_05_xkind = -1;

 static int
ball_mk4_05_xcheck(real *x)
{
	real *x1 = ball_mk4_05_old_x, *xe = x + 10;
	errno = 0;
	if (ball_mk4_05_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ball_mk4_05_xkind = 0;
	return 1;
	}
 real
ball_mk4_05_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ball_mk4_05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 9.*x[0];
	rv += 8.*x[1];
	rv += 7.*x[2];
	rv += 6.*x[3];
	rv += 5.*x[4];
	rv += 4.*x[5];
	rv += 3.*x[6];
	rv += 2.*x[7];
	rv += x[8];
	rv += 10.*x[9];
	;}

	if (wantfg & 2) {
	g[0] = 9.;
	g[1] = 8.;
	g[2] = 7.;
	g[3] = 6.;
	g[4] = 5.;
	g[5] = 4.;
	g[6] = 3.;
	g[7] = 2.;
	g[8] = 1.;
	g[9] = 10.;
	}

	return rv;
}

 void
ball_mk4_05_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ball_mk4_05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ball_mk4_05_pd[0] = x[8] * x[8];
	ball_mk4_05_pd[1] = x[8] + x[8];
	v[0] = 100. * ball_mk4_05_pd[0];
	ball_mk4_05_pd[2] = x[7] * x[7];
	ball_mk4_05_pd[3] = x[7] + x[7];
	v[1] = 100. * ball_mk4_05_pd[2];
	v[0] += v[1];
	ball_mk4_05_pd[4] = x[6] * x[6];
	ball_mk4_05_pd[5] = x[6] + x[6];
	v[1] = 100. * ball_mk4_05_pd[4];
	v[0] += v[1];
	ball_mk4_05_pd[6] = x[5] * x[5];
	ball_mk4_05_pd[7] = x[5] + x[5];
	v[1] = 100. * ball_mk4_05_pd[6];
	v[0] += v[1];
	ball_mk4_05_pd[8] = x[4] * x[4];
	ball_mk4_05_pd[9] = x[4] + x[4];
	v[1] = 100. * ball_mk4_05_pd[8];
	v[0] += v[1];
	ball_mk4_05_pd[10] = x[3] * x[3];
	ball_mk4_05_pd[11] = x[3] + x[3];
	v[1] = 100. * ball_mk4_05_pd[10];
	v[0] += v[1];
	ball_mk4_05_pd[12] = x[2] * x[2];
	ball_mk4_05_pd[13] = x[2] + x[2];
	v[1] = 100. * ball_mk4_05_pd[12];
	v[0] += v[1];
	ball_mk4_05_pd[14] = x[1] * x[1];
	ball_mk4_05_pd[15] = x[1] + x[1];
	v[1] = 100. * ball_mk4_05_pd[14];
	v[0] += v[1];
	ball_mk4_05_pd[16] = x[0] * x[0];
	ball_mk4_05_pd[17] = x[0] + x[0];
	v[1] = 100. * ball_mk4_05_pd[16];
	v[0] += v[1];
	ball_mk4_05_pd[18] = x[9] * x[9];
	ball_mk4_05_pd[19] = x[9] + x[9];
	v[1] = 100. * ball_mk4_05_pd[18];
	v[0] += v[1];
	ball_mk4_05_pd[20] = 2. * x[8];
	v[1] = ball_mk4_05_pd[20] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_05_pd[21] = 2. * x[8];
	v[2] = ball_mk4_05_pd[21] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_05_pd[22] = 2. * x[6];
	v[1] = ball_mk4_05_pd[22] * x[5];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_05_pd[23] = 2. * x[6];
	v[2] = ball_mk4_05_pd[23] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_05_pd[24] = 2. * x[4];
	v[1] = ball_mk4_05_pd[24] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_05_pd[25] = 2. * x[4];
	v[2] = ball_mk4_05_pd[25] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_05_pd[26] = 2. * x[2];
	v[1] = ball_mk4_05_pd[26] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_05_pd[27] = 2. * x[2];
	v[2] = ball_mk4_05_pd[27] * x[1];
	v[1] = -v[2];
	v[0] += v[1];
	ball_mk4_05_pd[28] = 2. * x[0];
	v[1] = ball_mk4_05_pd[28] * x[9];
	v[2] = -v[1];
	v[0] += v[2];
	ball_mk4_05_pd[29] = 2. * x[0];
	v[2] = ball_mk4_05_pd[29] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -98.*x[0];
	t1 += -98.*x[1];
	t1 += -98.*x[2];
	t1 += -98.*x[3];
	t1 += -98.*x[4];
	t1 += -98.*x[5];
	t1 += -98.*x[6];
	t1 += -98.*x[7];
	t1 += -98.*x[8];
	t1 += -98.*x[9];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[9] = -ball_mk4_05_pd[29] + -98.;
	J[0] = -x[9]*2. + -98.;
	J[9] -= ball_mk4_05_pd[28];
	J[0] -= x[9]*2.;
	J[1] = -ball_mk4_05_pd[27] + -98.;
	J[2] = -x[1]*2. + -98.;
	J[1] -= ball_mk4_05_pd[26];
	J[2] -= x[1]*2.;
	J[3] = -ball_mk4_05_pd[25] + -98.;
	J[4] = -x[3]*2. + -98.;
	J[3] -= ball_mk4_05_pd[24];
	J[4] -= x[3]*2.;
	J[5] = -ball_mk4_05_pd[23] + -98.;
	J[6] = -x[5]*2. + -98.;
	J[5] -= ball_mk4_05_pd[22];
	J[6] -= x[5]*2.;
	J[7] = -ball_mk4_05_pd[21] + -98.;
	J[8] = -x[7]*2. + -98.;
	J[7] -= ball_mk4_05_pd[20];
	J[8] -= x[7]*2.;
	J[9] += 100.*ball_mk4_05_pd[19];
	J[0] += 100.*ball_mk4_05_pd[17];
	J[1] += 100.*ball_mk4_05_pd[15];
	J[2] += 100.*ball_mk4_05_pd[13];
	J[3] += 100.*ball_mk4_05_pd[11];
	J[4] += 100.*ball_mk4_05_pd[9];
	J[5] += 100.*ball_mk4_05_pd[7];
	J[6] += 100.*ball_mk4_05_pd[5];
	J[7] += 100.*ball_mk4_05_pd[3];
	J[8] += 100.*ball_mk4_05_pd[1];
	}
}
#ifdef __cplusplus
	}
#endif
