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
 fint ex9_2_4_auxcom_[1] = { 2 /* nlc */ };
 fint ex9_2_4_funcom_[31] = {
	8 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	12,
	14,
	16,
	17,

	/* rownos */
	1,
	4,
	2,
	5,
	1,
	6,
	2,
	7,
	3,
	4,
	6,
	3,
	5,
	6,
	7,
	3 };

 real ex9_2_4_boundc_[1+16+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		-1.,
		-1.};

 real ex9_2_4_x0comn_[8] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex9_2_4_pd[4];
static real ex9_2_4_old_x[8];
static int ex9_2_4_xkind = -1;

 static int
ex9_2_4_xcheck(real *x)
{
	real *x1 = ex9_2_4_old_x, *xe = x + 8;
	errno = 0;
	if (ex9_2_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex9_2_4_xkind = 0;
	return 1;
	}
 real
ex9_2_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[7];
	fint wantfg = *needfg;
	if (ex9_2_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 0.5 * x[4];
	ex9_2_4_pd[1] = v[0] + -1.;
	ex9_2_4_pd[0] = x[4] + -2.;
	v[2] = ex9_2_4_pd[1] * ex9_2_4_pd[0];
	v[3] = 0.5 * x[5];
	ex9_2_4_pd[3] = v[3] + -1.;
	ex9_2_4_pd[2] = x[5] + -2.;
	v[5] = ex9_2_4_pd[3] * ex9_2_4_pd[2];
	v[6] = v[2] + v[5];
	;}

	if (wantfg & 2) {
	g[5] = ex9_2_4_pd[3];
	g[5] += ex9_2_4_pd[2]*0.5;
	g[4] = ex9_2_4_pd[1];
	g[4] += ex9_2_4_pd[0]*0.5;
	}

	return v[6];
}

 void
ex9_2_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex9_2_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[1] * x[3];
	c[1] = v[0];

  /***  constraint 3  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += -x[7];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += -x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[1];
	t1 += -x[5];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[2];
	t1 += x[4];
	t1 += x[6];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[3];
	t1 += x[6];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = x[0];
	J[0] = x[2];

   /*** derivatives for constraint 2 ***/

	J[6] = x[1];
	J[2] = x[3];

   /*** derivatives for constraint 3 ***/

	J[8] = 1.;
	J[11] = 1.;
	J[15] = -1.;

   /*** derivatives for constraint 4 ***/

	J[1] = 1.;
	J[9] = -1.;

   /*** derivatives for constraint 5 ***/

	J[3] = 1.;
	J[12] = -1.;

   /*** derivatives for constraint 6 ***/

	J[5] = -1.;
	J[10] = 1.;
	J[13] = 1.;

   /*** derivatives for constraint 7 ***/

	J[7] = -1.;
	J[14] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
