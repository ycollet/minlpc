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
 fint ex9_2_8_auxcom_[1] = { 2 /* nlc */ };
 fint ex9_2_8_funcom_[24] = {
	6 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	11 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	10,
	12,

	/* rownos */
	1,
	3,
	2,
	4,
	1,
	5,
	2,
	5,
	5,
	3,
	4 };

 real ex9_2_8_boundc_[1+12+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		20.,
		0.,
		20.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		0.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.};

 real ex9_2_8_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex9_2_8_pd[1];
static real ex9_2_8_old_x[6];
static int ex9_2_8_xkind = -1;

 static int
ex9_2_8_xcheck(real *x)
{
	real *x1 = ex9_2_8_old_x, *xe = x + 6;
	errno = 0;
	if (ex9_2_8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex9_2_8_xkind = 0;
	return 1;
	}
 real
ex9_2_8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex9_2_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex9_2_8_pd[0] = 4. * x[4];
	v[0] = ex9_2_8_pd[0] * x[5];
	v[1] = 1. - v[0];
	rv = v[1] + 2.*x[4];
	rv += 3.*x[5];
	;}

	if (wantfg & 2) {
	g[5] = -ex9_2_8_pd[0] + 3.;
	g[4] = -x[5]*4. + 2.;
	}

	return rv;
}

 void
ex9_2_8_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex9_2_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] * x[0];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[3] * x[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += -x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[1];
	t1 += x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += 4.*x[4];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = x[2];
	J[4] = x[0];

   /*** derivatives for constraint 2 ***/

	J[2] = x[3];
	J[6] = x[1];

   /*** derivatives for constraint 3 ***/

	J[1] = 1.;
	J[9] = -1.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;
	J[10] = 1.;

   /*** derivatives for constraint 5 ***/

	J[5] = -1.;
	J[7] = 1.;
	J[8] = 4.;
	}
}
#ifdef __cplusplus
	}
#endif
