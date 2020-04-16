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
 fint ex9_2_7_auxcom_[1] = { 4 /* nlc */ };
 fint ex9_2_7_funcom_[42] = {
	10 /* nvar */,
	1 /* nobj */,
	9 /* ncon */,
	25 /* nzc */,
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
	15,
	17,
	21,
	26,

	/* rownos */
	1,
	5,
	2,
	6,
	3,
	7,
	4,
	8,
	1,
	9,
	2,
	9,
	3,
	9,
	4,
	9,
	5,
	6,
	7,
	9,
	5,
	6,
	7,
	8,
	9 };

 real ex9_2_7_boundc_[1+20+18] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-3.,
		-3.,
		4.,
		4.,
		7.,
		7.,
		0.,
		0.,
		2.,
		2.};

 real ex9_2_7_x0comn_[10] = {
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

 static real ex9_2_7_pd[4];
static real ex9_2_7_old_x[10];
static int ex9_2_7_xkind = -1;

 static int
ex9_2_7_xcheck(real *x)
{
	real *x1 = ex9_2_7_old_x, *xe = x + 10;
	errno = 0;
	if (ex9_2_7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex9_2_7_xkind = 0;
	return 1;
	}
 real
ex9_2_7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[7];
	fint wantfg = *needfg;
	if (ex9_2_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex9_2_7_pd[1] = x[8] + -5.;
	ex9_2_7_pd[0] = x[8] + -5.;
	v[2] = ex9_2_7_pd[1] * ex9_2_7_pd[0];
	v[3] = 2. * x[9];
	ex9_2_7_pd[3] = v[3] + 1.;
	v[3] = 2. * x[9];
	ex9_2_7_pd[2] = v[3] + 1.;
	v[3] = ex9_2_7_pd[3] * ex9_2_7_pd[2];
	v[6] = v[2] + v[3];
	;}

	if (wantfg & 2) {
	g[9] = ex9_2_7_pd[3]*2.;
	g[9] += ex9_2_7_pd[2]*2.;
	g[8] = ex9_2_7_pd[1];
	g[8] += ex9_2_7_pd[0];
	}

	return v[6];
}

 void
ex9_2_7_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex9_2_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[4];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[1] * x[5];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[2] * x[6];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[3] * x[7];
	c[3] = v[0];

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += -3.*x[8];
	t1 += x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += x[8];
	t1 += -0.5*x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += x[8];
	t1 += x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[3];
	t1 += -x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[4];
	t1 += -0.5*x[5];
	t1 += x[6];
	t1 += -x[7];
	t1 += -1.5*x[8];
	t1 += 2.*x[9];
	c[8] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = x[0];
	J[0] = x[4];

   /*** derivatives for constraint 2 ***/

	J[10] = x[1];
	J[2] = x[5];

   /*** derivatives for constraint 3 ***/

	J[12] = x[2];
	J[4] = x[6];

   /*** derivatives for constraint 4 ***/

	J[14] = x[3];
	J[6] = x[7];

   /*** derivatives for constraint 5 ***/

	J[1] = 1.;
	J[16] = -3.;
	J[20] = 1.;

   /*** derivatives for constraint 6 ***/

	J[3] = 1.;
	J[17] = 1.;
	J[21] = -0.5;

   /*** derivatives for constraint 7 ***/

	J[5] = 1.;
	J[18] = 1.;
	J[22] = 1.;

   /*** derivatives for constraint 8 ***/

	J[7] = 1.;
	J[23] = -1.;

   /*** derivatives for constraint 9 ***/

	J[9] = 1.;
	J[11] = -0.5;
	J[13] = 1.;
	J[15] = -1.;
	J[19] = -1.5;
	J[24] = 2.;
	}
}
#ifdef __cplusplus
	}
#endif