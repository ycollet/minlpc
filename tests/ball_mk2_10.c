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
 fint ball_mk2_10_auxcom_[1] = { 1 /* nlc */ };
 fint ball_mk2_10_funcom_[27] = {
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

 real ball_mk2_10_boundc_[1+20+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.7e308,
		0.};

 real ball_mk2_10_x0comn_[10] = {
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

 static real ball_mk2_10_pd[10];
static real ball_mk2_10_old_x[10];
static int ball_mk2_10_xkind = -1;

 static int
ball_mk2_10_xcheck(real *x)
{
	real *x1 = ball_mk2_10_old_x, *xe = x + 10;
	errno = 0;
	if (ball_mk2_10_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ball_mk2_10_xkind = 0;
	return 1;
	}
 real
ball_mk2_10_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ball_mk2_10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[0];
	rv += -x[1];
	rv += -x[2];
	rv += -x[3];
	rv += -x[4];
	rv += -x[5];
	rv += -x[6];
	rv += -x[7];
	rv += -x[8];
	rv += -x[9];
	;}

	if (wantfg & 2) {
	g[0] = -1.;
	g[1] = -1.;
	g[2] = -1.;
	g[3] = -1.;
	g[4] = -1.;
	g[5] = -1.;
	g[6] = -1.;
	g[7] = -1.;
	g[8] = -1.;
	g[9] = -1.;
	}

	return rv;
}

 void
ball_mk2_10_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ball_mk2_10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[8] * x[8];
	ball_mk2_10_pd[0] = x[8] + x[8];
	v[1] = x[7] * x[7];
	ball_mk2_10_pd[1] = x[7] + x[7];
	v[0] += v[1];
	v[1] = x[6] * x[6];
	ball_mk2_10_pd[2] = x[6] + x[6];
	v[0] += v[1];
	v[1] = x[5] * x[5];
	ball_mk2_10_pd[3] = x[5] + x[5];
	v[0] += v[1];
	v[1] = x[4] * x[4];
	ball_mk2_10_pd[4] = x[4] + x[4];
	v[0] += v[1];
	v[1] = x[3] * x[3];
	ball_mk2_10_pd[5] = x[3] + x[3];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	ball_mk2_10_pd[6] = x[2] + x[2];
	v[0] += v[1];
	v[1] = x[1] * x[1];
	ball_mk2_10_pd[7] = x[1] + x[1];
	v[0] += v[1];
	v[1] = x[0] * x[0];
	ball_mk2_10_pd[8] = x[0] + x[0];
	v[0] += v[1];
	v[1] = x[9] * x[9];
	ball_mk2_10_pd[9] = x[9] + x[9];
	v[0] += v[1];
	t1 = v[0] + -0.987420882906575*x[0];
	t1 += -0.987420882906575*x[1];
	t1 += -0.987420882906575*x[2];
	t1 += -0.987420882906575*x[3];
	t1 += -0.987420882906575*x[4];
	t1 += -0.987420882906575*x[5];
	t1 += -0.987420882906575*x[6];
	t1 += -0.987420882906575*x[7];
	t1 += -0.987420882906575*x[8];
	t1 += -0.987420882906575*x[9];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[9] = ball_mk2_10_pd[9] + -0.987420882906575;
	J[0] = ball_mk2_10_pd[8] + -0.987420882906575;
	J[1] = ball_mk2_10_pd[7] + -0.987420882906575;
	J[2] = ball_mk2_10_pd[6] + -0.987420882906575;
	J[3] = ball_mk2_10_pd[5] + -0.987420882906575;
	J[4] = ball_mk2_10_pd[4] + -0.987420882906575;
	J[5] = ball_mk2_10_pd[3] + -0.987420882906575;
	J[6] = ball_mk2_10_pd[2] + -0.987420882906575;
	J[7] = ball_mk2_10_pd[1] + -0.987420882906575;
	J[8] = ball_mk2_10_pd[0] + -0.987420882906575;
	}
}
#ifdef __cplusplus
	}
#endif
