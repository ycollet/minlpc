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
 fint fuel_auxcom_[1] = { 3 /* nlc */ };
 fint fuel_funcom_[57] = {
	15 /* nvar */,
	1 /* nobj */,
	15 /* ncon */,
	35 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	14,
	15,
	16,
	18,
	20,
	22,
	24,
	26,
	27,
	30,
	33,
	36,

	/* rownos */
	1,
	4,
	7,
	13,
	2,
	5,
	8,
	14,
	3,
	6,
	9,
	15,
	13,
	14,
	15,
	1,
	10,
	2,
	11,
	3,
	12,
	10,
	11,
	11,
	12,
	12,
	1,
	4,
	7,
	2,
	5,
	8,
	3,
	6,
	9 };

 real fuel_boundc_[1+30+30] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		50.,
		700.,
		50.,
		700.,
		50.,
		700.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		4000.,
		0.,
		4000.,
		2000.,
		4000.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		3500.,
		3500.,
		500.,
		500.,
		500.,
		500.,
		400.,
		1.7e308,
		900.,
		1.7e308,
		700.,
		1.7e308};

 real fuel_x0comn_[15] = {
		100.,
		100.,
		100.,
		50.,
		50.,
		50.,
		0.,
		0.,
		0.,
		0.,
		0.,
		2000.,
		0.,
		0.,
		0. };

 static real fuel_pd[12];
static real fuel_old_x[15];
static int fuel_xkind = -1;

 static int
fuel_xcheck(real *x)
{
	real *x1 = fuel_old_x, *xe = x + 15;
	errno = 0;
	if (fuel_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	fuel_xkind = 0;
	return 1;
	}
 real
fuel_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (fuel_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	fuel_pd[6] = x[3] * x[3];
	fuel_pd[7] = x[3] + x[3];
	v[0] = 0.0025 * fuel_pd[6];
	fuel_pd[8] = x[4] * x[4];
	fuel_pd[9] = x[4] + x[4];
	v[1] = 0.0025 * fuel_pd[8];
	v[0] += v[1];
	fuel_pd[10] = x[5] * x[5];
	fuel_pd[11] = x[5] + x[5];
	v[1] = 0.0025 * fuel_pd[10];
	v[0] += v[1];
	v[0] += 900.;
	rv = v[0] + 6.*x[3];
	rv += 6.*x[4];
	rv += 6.*x[5];
	;}

	if (wantfg & 2) {
	g[5] = 0.0025*fuel_pd[11] + 6.;
	g[4] = 0.0025*fuel_pd[9] + 6.;
	g[3] = 0.0025*fuel_pd[7] + 6.;
	}

	return rv;
}

 void
fuel_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (fuel_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	fuel_pd[0] = x[0] * x[0];
	fuel_pd[1] = x[0] + x[0];
	v[0] = -0.005 * fuel_pd[0];
	t1 = v[0] + -x[0];
	t1 += x[6];
	t1 += -50.*x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	fuel_pd[2] = x[1] * x[1];
	fuel_pd[3] = x[1] + x[1];
	v[0] = -0.005 * fuel_pd[2];
	t1 = v[0] + -x[1];
	t1 += x[7];
	t1 += -50.*x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	fuel_pd[4] = x[2] * x[2];
	fuel_pd[5] = x[2] + x[2];
	v[0] = -0.005 * fuel_pd[4];
	t1 = v[0] + -x[2];
	t1 += x[8];
	t1 += -50.*x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += -100.*x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[1];
	t1 += -100.*x[13];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[2];
	t1 += -100.*x[14];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += -500.*x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[1];
	t1 += -500.*x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[2];
	t1 += -500.*x[14];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[6];
	t1 += x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[8];
	t1 += -x[10];
	t1 += x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += x[3];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[1];
	t1 += x[4];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[2];
	t1 += x[5];
	c[14] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -0.005*fuel_pd[1] + -1.;
	J[15] = 1.;
	J[26] = -50.;

   /*** derivatives for constraint 2 ***/

	J[4] = -0.005*fuel_pd[3] + -1.;
	J[17] = 1.;
	J[29] = -50.;

   /*** derivatives for constraint 3 ***/

	J[8] = -0.005*fuel_pd[5] + -1.;
	J[19] = 1.;
	J[32] = -50.;

   /*** derivatives for constraint 4 ***/

	J[1] = 1.;
	J[27] = -100.;

   /*** derivatives for constraint 5 ***/

	J[5] = 1.;
	J[30] = -100.;

   /*** derivatives for constraint 6 ***/

	J[9] = 1.;
	J[33] = -100.;

   /*** derivatives for constraint 7 ***/

	J[2] = 1.;
	J[28] = -500.;

   /*** derivatives for constraint 8 ***/

	J[6] = 1.;
	J[31] = -500.;

   /*** derivatives for constraint 9 ***/

	J[10] = 1.;
	J[34] = -500.;

   /*** derivatives for constraint 10 ***/

	J[16] = 1.;
	J[21] = 1.;

   /*** derivatives for constraint 11 ***/

	J[18] = 1.;
	J[22] = -1.;
	J[23] = 1.;

   /*** derivatives for constraint 12 ***/

	J[20] = 1.;
	J[24] = -1.;
	J[25] = 1.;

   /*** derivatives for constraint 13 ***/

	J[3] = 1.;
	J[12] = 1.;

   /*** derivatives for constraint 14 ***/

	J[7] = 1.;
	J[13] = 1.;

   /*** derivatives for constraint 15 ***/

	J[11] = 1.;
	J[14] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
