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
 fint ex5_2_4_auxcom_[1] = { 3 /* nlc */ };
 fint ex5_2_4_funcom_[34] = {
	7 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	20 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	11,
	14,
	17,
	19,
	21,

	/* rownos */
	1,
	3,
	6,
	2,
	3,
	6,
	1,
	2,
	3,
	6,
	1,
	2,
	4,
	1,
	3,
	5,
	2,
	4,
	3,
	5 };

 real ex5_2_4_boundc_[1+14+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		-1.7e308,
		50.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		100.,
		-1.7e308,
		200.,
		1.,
		1.};

 real ex5_2_4_x0comn_[7] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex5_2_4_pd[6];
static real ex5_2_4_old_x[7];
static int ex5_2_4_xkind = -1;

 static int
ex5_2_4_xcheck(real *x)
{
	real *x1 = ex5_2_4_old_x, *xe = x + 7;
	errno = 0;
	if (ex5_2_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex5_2_4_xkind = 0;
	return 1;
	}
 real
ex5_2_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[4], rv;
	fint wantfg = *needfg;
	if (ex5_2_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex5_2_4_pd[4] = -6. * x[0];
	ex5_2_4_pd[4] += 15.;
	v[0] = -16. * x[1];
	ex5_2_4_pd[4] += v[0];
	v[0] = -15. * x[2];
	ex5_2_4_pd[4] += v[0];
	v[0] = ex5_2_4_pd[4] * x[4];
	v[1] = -v[0];
	ex5_2_4_pd[5] = -6. * x[0];
	ex5_2_4_pd[5] += 9.;
	v[0] = -16. * x[1];
	ex5_2_4_pd[5] += v[0];
	v[0] = -15. * x[2];
	ex5_2_4_pd[5] += v[0];
	v[0] = ex5_2_4_pd[5] * x[3];
	v[2] = v[1] - v[0];
	rv = v[2] + x[5];
	rv += -5.*x[6];
	;}

	if (wantfg & 2) {
	g[3] = -ex5_2_4_pd[5];
	dv[0] = -x[3];
	g[2] = -dv[0]*15.;
	dv[1] = -x[3];
	g[1] = -dv[1]*16.;
	g[0] = x[3]*6.;
	g[4] = -ex5_2_4_pd[4];
	dv[2] = -x[4];
	g[2] -= dv[2]*15.;
	dv[3] = -x[4];
	g[1] -= dv[3]*16.;
	g[0] += x[4]*6.;
	g[5] = 1.;
	g[6] = -5.;
	}

	return rv;
}

 void
ex5_2_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex5_2_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] * x[3];
	v[1] = x[2] * x[4];
	v[2] = v[0] + v[1];
	c[0] = v[2];

  /***  constraint 2  ***/

	ex5_2_4_pd[0] = 3. * x[0];
	ex5_2_4_pd[1] = ex5_2_4_pd[0] + -2.5;
	ex5_2_4_pd[1] += x[1];
	ex5_2_4_pd[1] += x[2];
	v[1] = ex5_2_4_pd[1] * x[3];
	t1 = v[1] + -0.5*x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	ex5_2_4_pd[2] = 3. * x[0];
	ex5_2_4_pd[3] = ex5_2_4_pd[2] + -1.5;
	ex5_2_4_pd[3] += x[1];
	ex5_2_4_pd[3] += x[2];
	v[1] = ex5_2_4_pd[3] * x[4];
	t1 = v[1] + 0.5*x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[3];
	t1 += x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[4];
	t1 += x[6];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[13] = x[2];
	J[6] = x[4];
	J[10] = x[2];
	J[6] += x[3];

   /*** derivatives for constraint 2 ***/

	J[11] = ex5_2_4_pd[1];
	J[7] = x[3];
	J[3] = x[3];
	J[0] = x[3]*3.;
	J[16] = -0.5;

   /*** derivatives for constraint 3 ***/

	J[14] = ex5_2_4_pd[3];
	J[8] = x[4];
	J[4] = x[4];
	J[1] = x[4]*3.;
	J[18] = 0.5;

   /*** derivatives for constraint 4 ***/

	J[12] = 1.;
	J[17] = 1.;

   /*** derivatives for constraint 5 ***/

	J[15] = 1.;
	J[19] = 1.;

   /*** derivatives for constraint 6 ***/

	J[2] = 1.;
	J[5] = 1.;
	J[9] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
