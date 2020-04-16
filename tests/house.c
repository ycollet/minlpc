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
 fint house_auxcom_[1] = { 3 /* nlc */ };
 fint house_funcom_[38] = {
	8 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	23 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	13,
	17,
	21,
	22,
	23,
	24,

	/* rownos */
	1,
	2,
	3,
	5,
	6,
	1,
	3,
	4,
	7,
	8,
	2,
	7,
	1,
	3,
	5,
	6,
	1,
	4,
	7,
	8,
	4,
	1,
	2 };

 real house_boundc_[1+16+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		40.,
		68.,
		-1.7e308,
		1.7e308,
		56.,
		100.,
		-1.7e308,
		3000.,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		1500.,
		1.7e308,
		0.,
		0.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		0.,
		0.,
		1.7e308};

 real house_x0comn_[8] = {
		30.,
		0.,
		0.,
		68.,
		0.,
		56.,
		0.,
		0. };

 static real house_pd[1];
static real house_old_x[8];
static int house_xkind = -1;

 static int
house_xcheck(real *x)
{
	real *x1 = house_old_x, *xe = x + 8;
	errno = 0;
	if (house_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	house_xkind = 0;
	return 1;
	}
 real
house_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (house_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[6];
	rv += -x[7];
	;}

	if (wantfg & 2) {
	g[6] = -1.;
	g[7] = -1.;
	}

	return rv;
}

 void
house_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (house_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[4] * x[3];
	v[1] = -v[0];
	v[0] = x[0] * x[1];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	house_pd[0] = x[3] - x[0];
	v[1] = x[1] * house_pd[0];
	c[2] = v[1];

  /***  constraint 4  ***/

	t1 = -x[1];
	t1 += -x[4];
	t1 += x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += -0.333333333333333*x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += -0.5*x[3];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -0.5*x[1];
	t1 += x[2];
	t1 += -x[4];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -0.5*x[1];
	t1 += x[4];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[5] = -x[0];
	J[0] = -x[1];
	J[12] = -x[4];
	J[16] = -x[3];
	J[21] = 1.;

   /*** derivatives for constraint 2 ***/

	J[10] = -x[0];
	J[1] = -x[2];
	J[22] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = house_pd[0];
	J[2] = -x[1];
	J[13] = x[1];

   /*** derivatives for constraint 4 ***/

	J[7] = -1.;
	J[17] = -1.;
	J[20] = 1.;

   /*** derivatives for constraint 5 ***/

	J[3] = 1.;
	J[14] = -0.333333333333333;

   /*** derivatives for constraint 6 ***/

	J[4] = 1.;
	J[15] = -0.5;

   /*** derivatives for constraint 7 ***/

	J[8] = -0.5;
	J[11] = 1.;
	J[18] = -1.;

   /*** derivatives for constraint 8 ***/

	J[9] = -0.5;
	J[19] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
