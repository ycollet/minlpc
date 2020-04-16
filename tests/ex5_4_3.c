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
 fint ex5_4_3_auxcom_[1] = { 4 /* nlc */ };
 fint ex5_4_3_funcom_[61] = {
	16 /* nvar */,
	1 /* nobj */,
	13 /* ncon */,
	38 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	8,
	12,
	15,
	18,
	21,
	24,
	27,
	28,
	29,
	30,
	31,
	34,
	35,
	38,
	39,

	/* rownos */
	1,
	3,
	6,
	8,
	2,
	7,
	8,
	2,
	4,
	7,
	9,
	1,
	6,
	9,
	1,
	3,
	11,
	2,
	4,
	13,
	2,
	3,
	10,
	1,
	4,
	12,
	10,
	11,
	12,
	13,
	1,
	5,
	6,
	8,
	2,
	5,
	7,
	9 };

 real ex5_4_3_boundc_[1+32+26] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		150.,
		310.,
		150.,
		310.,
		150.,
		310.,
		150.,
		310.,
		10.,
		350.,
		10.,
		350.,
		10.,
		200.,
		10.,
		200.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		0.,
		0.,
		0.,
		1000.,
		1000.,
		600.,
		600.,
		10.,
		10.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		500.,
		500.,
		250.,
		250.,
		350.,
		350.,
		200.,
		200.};

 real ex5_4_3_x0comn_[16] = {
		0.,
		0.,
		0.,
		0.,
		150.,
		150.,
		150.,
		150.,
		10.,
		10.,
		10.,
		10.,
		0.,
		0.,
		0.,
		0. };

 static real ex5_4_3_pd[6];
static real ex5_4_3_old_x[16];
static int ex5_4_3_xkind = -1;

 static int
ex5_4_3_xcheck(real *x)
{
	real *x1 = ex5_4_3_old_x, *xe = x + 16;
	errno = 0;
	if (ex5_4_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex5_4_3_xkind = 0;
	return 1;
	}
 real
ex5_4_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[6];
	fint wantfg = *needfg;
	if (ex5_4_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex5_4_3_pd[0] = 0.0333333333333333 * x[8];
	v[0] = ex5_4_3_pd[0] * x[9];
	v[1] = 0.166666666666667 * x[8];
	v[0] += v[1];
	v[1] = 0.166666666666667 * x[9];
	v[0] += v[1];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = 1000. / v[0];
	ex5_4_3_pd[1] = -v[1] / v[0];
	v[0] = pow(v[1], 0.6);
	if (errno) in_trouble2("pow",v[1],0.6);
	if (v[1] > 0.) {
	ex5_4_3_pd[2] = 0.6*(v[0]/v[1]);
	} else if (0.6 > 1.) {
	ex5_4_3_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.6);
	}
	v[0] *= 1300.;
	ex5_4_3_pd[3] = 0.0333333333333333 * x[10];
	v[1] = ex5_4_3_pd[3] * x[11];
	v[2] = 0.166666666666667 * x[10];
	v[1] += v[2];
	v[2] = 0.166666666666667 * x[11];
	v[1] += v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = 600. / v[1];
	ex5_4_3_pd[4] = -v[2] / v[1];
	v[1] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	ex5_4_3_pd[5] = 0.6*(v[1]/v[2]);
	} else if (0.6 > 1.) {
	ex5_4_3_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[1] *= 1300.;
	v[2] = v[0] + v[1];
	;}

	if (wantfg & 2) {
	dv[0] = 1300.*ex5_4_3_pd[5];
	dv[0] *= ex5_4_3_pd[4];
	dv[1] = dv[0];
	g[11] = dv[1]*0.166666666666667;
	dv[2] = dv[0];
	g[10] = dv[2]*0.166666666666667;
	g[11] += dv[0]*ex5_4_3_pd[3];
	dv[0] *= x[11];
	g[10] += dv[0]*0.0333333333333333;
	dv[3] = 1300.*ex5_4_3_pd[2];
	dv[3] *= ex5_4_3_pd[1];
	dv[4] = dv[3];
	g[9] = dv[4]*0.166666666666667;
	dv[5] = dv[3];
	g[8] = dv[5]*0.166666666666667;
	g[9] += dv[3]*ex5_4_3_pd[0];
	dv[3] *= x[9];
	g[8] += dv[3]*0.0333333333333333;
	}

	return v[2];
}

 void
ex5_4_3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex5_4_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[7] * x[3];
	v[1] = x[4] * x[0];
	v[2] = v[0] - v[1];
	t1 = v[2] + 150.*x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[6] * x[1];
	v[1] = x[5] * x[2];
	v[2] = v[0] - v[1];
	t1 = v[2] + 150.*x[14];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[6];
	v[1] = x[0] * x[4];
	v[2] = v[0] - v[1];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = x[2] * x[7];
	v[1] = x[2] * x[5];
	v[2] = v[0] - v[1];
	c[3] = v[2];

  /***  constraint 5  ***/

	t1 = x[12];
	t1 += x[14];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += x[12];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[14];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[15];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[6];
	t1 += x[8];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[4];
	t1 += x[9];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[7];
	t1 += x[10];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[5];
	t1 += x[11];
	c[12] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[4];
	J[14] = -x[0];
	J[11] = x[7];
	J[23] = x[3];
	J[30] = 150.;

   /*** derivatives for constraint 2 ***/

	J[7] = -x[5];
	J[17] = -x[2];
	J[4] = x[6];
	J[20] = x[1];
	J[34] = 150.;

   /*** derivatives for constraint 3 ***/

	J[15] = -x[0];
	J[1] = -x[4];
	J[21] = x[0];
	J[1] += x[6];

   /*** derivatives for constraint 4 ***/

	J[18] = -x[2];
	J[8] = -x[5];
	J[24] = x[2];
	J[8] += x[7];

   /*** derivatives for constraint 5 ***/

	J[31] = 1.;
	J[35] = 1.;

   /*** derivatives for constraint 6 ***/

	J[2] = -1.;
	J[12] = 1.;
	J[32] = 1.;

   /*** derivatives for constraint 7 ***/

	J[5] = 1.;
	J[9] = -1.;
	J[36] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = -1.;
	J[6] = 1.;
	J[33] = 1.;

   /*** derivatives for constraint 9 ***/

	J[10] = -1.;
	J[13] = 1.;
	J[37] = 1.;

   /*** derivatives for constraint 10 ***/

	J[22] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 11 ***/

	J[16] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 12 ***/

	J[25] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 13 ***/

	J[19] = 1.;
	J[29] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
