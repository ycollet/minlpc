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
 fint ex9_2_5_auxcom_[1] = { 3 /* nlc */ };
 fint ex9_2_5_funcom_[34] = {
	8 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	19 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	11,
	13,
	17,
	20,

	/* rownos */
	1,
	4,
	2,
	5,
	3,
	6,
	1,
	7,
	2,
	7,
	3,
	7,
	4,
	5,
	6,
	7,
	4,
	5,
	6 };

 real ex9_2_5_boundc_[1+16+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		8.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		2.,
		2.,
		14.,
		14.,
		10.,
		10.};

 real ex9_2_5_x0comn_[8] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex9_2_5_pd[4];
static real ex9_2_5_old_x[8];
static int ex9_2_5_xkind = -1;

 static int
ex9_2_5_xcheck(real *x)
{
	real *x1 = ex9_2_5_old_x, *xe = x + 8;
	errno = 0;
	if (ex9_2_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex9_2_5_xkind = 0;
	return 1;
	}
 real
ex9_2_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[7];
	fint wantfg = *needfg;
	if (ex9_2_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex9_2_5_pd[1] = x[7] + -3.;
	ex9_2_5_pd[0] = x[7] + -3.;
	v[2] = ex9_2_5_pd[1] * ex9_2_5_pd[0];
	ex9_2_5_pd[3] = x[6] + -2.;
	ex9_2_5_pd[2] = x[6] + -2.;
	v[5] = ex9_2_5_pd[3] * ex9_2_5_pd[2];
	v[6] = v[2] + v[5];
	;}

	if (wantfg & 2) {
	g[6] = ex9_2_5_pd[3];
	g[6] += ex9_2_5_pd[2];
	g[7] = ex9_2_5_pd[1];
	g[7] += ex9_2_5_pd[0];
	}

	return v[6];
}

 void
ex9_2_5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex9_2_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[3];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[1] * x[4];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[2] * x[5];
	c[2] = v[0];

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += x[6];
	t1 += -2.*x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[1];
	t1 += -2.*x[6];
	t1 += x[7];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[2];
	t1 += 2.*x[6];
	t1 += x[7];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[3];
	t1 += -2.*x[4];
	t1 += 2.*x[5];
	t1 += 2.*x[6];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = x[0];
	J[0] = x[3];

   /*** derivatives for constraint 2 ***/

	J[8] = x[1];
	J[2] = x[4];

   /*** derivatives for constraint 3 ***/

	J[10] = x[2];
	J[4] = x[5];

   /*** derivatives for constraint 4 ***/

	J[1] = 1.;
	J[12] = 1.;
	J[16] = -2.;

   /*** derivatives for constraint 5 ***/

	J[3] = 1.;
	J[13] = -2.;
	J[17] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = 1.;
	J[14] = 2.;
	J[18] = 1.;

   /*** derivatives for constraint 7 ***/

	J[7] = 1.;
	J[9] = -2.;
	J[11] = 2.;
	J[15] = 2.;
	}
}
#ifdef __cplusplus
	}
#endif
