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
 fint pointpack04_auxcom_[1] = { 6 /* nlc */ };
 fint pointpack04_funcom_[54] = {
	9 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	38 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	5,
	10,
	15,
	19,
	23,
	27,
	30,
	33,
	39,

	/* rownos */
	1,
	2,
	3,
	8,
	1,
	4,
	5,
	8,
	9,
	2,
	4,
	6,
	9,
	10,
	3,
	5,
	6,
	10,
	1,
	2,
	3,
	7,
	1,
	4,
	5,
	7,
	2,
	4,
	6,
	3,
	5,
	6,
	1,
	2,
	3,
	4,
	5,
	6 };

 real pointpack04_boundc_[1+18+20] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		1.,
		0.5,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real pointpack04_x0comn_[9] = {
		0.5,
		0.5,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real pointpack04_pd[12];
static real pointpack04_old_x[9];
static int pointpack04_xkind = -1;

 static int
pointpack04_xcheck(real *x)
{
	real *x1 = pointpack04_old_x, *xe = x + 9;
	errno = 0;
	if (pointpack04_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pointpack04_xkind = 0;
	return 1;
	}
 real
pointpack04_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pointpack04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[8];
	;}

	if (wantfg & 2) {
	g[8] = 1.;
	}

	return rv;
}

 void
pointpack04_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (pointpack04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	pointpack04_pd[0] = 2. * x[0];
	v[0] = pointpack04_pd[0] * x[1];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	pointpack04_pd[1] = 2. * x[4];
	v[0] = pointpack04_pd[1] * x[5];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[5] * x[5];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	pointpack04_pd[2] = 2. * x[0];
	v[0] = pointpack04_pd[2] * x[2];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	pointpack04_pd[3] = 2. * x[4];
	v[0] = pointpack04_pd[3] * x[6];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[6] * x[6];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[8];
	c[1] = t1;

  /***  constraint 3  ***/

	pointpack04_pd[4] = 2. * x[0];
	v[0] = pointpack04_pd[4] * x[3];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	pointpack04_pd[5] = 2. * x[4];
	v[0] = pointpack04_pd[5] * x[7];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[7] * x[7];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	pointpack04_pd[6] = 2. * x[1];
	v[0] = pointpack04_pd[6] * x[2];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	pointpack04_pd[7] = 2. * x[5];
	v[0] = pointpack04_pd[7] * x[6];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[6] * x[6];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[8];
	c[3] = t1;

  /***  constraint 5  ***/

	pointpack04_pd[8] = 2. * x[1];
	v[0] = pointpack04_pd[8] * x[3];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	pointpack04_pd[9] = 2. * x[5];
	v[0] = pointpack04_pd[9] * x[7];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[7] * x[7];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	pointpack04_pd[10] = 2. * x[2];
	v[0] = pointpack04_pd[10] * x[3];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	pointpack04_pd[11] = 2. * x[6];
	v[0] = pointpack04_pd[11] * x[7];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[7] * x[7];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[4];
	t1 += x[5];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[0];
	t1 += x[1];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[1];
	t1 += x[2];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[2];
	t1 += x[3];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[22] = -x[5];
	J[22] -= x[5];
	J[22] += pointpack04_pd[1];
	J[18] = x[5]*2.;
	J[18] -= x[4];
	J[18] -= x[4];
	J[4] = -x[1];
	J[4] -= x[1];
	J[0] = -x[0];
	J[0] -= x[0];
	J[4] += pointpack04_pd[0];
	J[0] += x[1]*2.;
	J[32] = 1.;

   /*** derivatives for constraint 2 ***/

	J[26] = -x[6];
	J[26] -= x[6];
	J[26] += pointpack04_pd[3];
	J[19] = x[6]*2.;
	J[19] -= x[4];
	J[19] -= x[4];
	J[9] = -x[2];
	J[9] -= x[2];
	J[1] = -x[0];
	J[1] -= x[0];
	J[9] += pointpack04_pd[2];
	J[1] += x[2]*2.;
	J[33] = 1.;

   /*** derivatives for constraint 3 ***/

	J[29] = -x[7];
	J[29] -= x[7];
	J[29] += pointpack04_pd[5];
	J[20] = x[7]*2.;
	J[20] -= x[4];
	J[20] -= x[4];
	J[14] = -x[3];
	J[14] -= x[3];
	J[2] = -x[0];
	J[2] -= x[0];
	J[14] += pointpack04_pd[4];
	J[2] += x[3]*2.;
	J[34] = 1.;

   /*** derivatives for constraint 4 ***/

	J[27] = -x[6];
	J[27] -= x[6];
	J[27] += pointpack04_pd[7];
	J[23] = x[6]*2.;
	J[23] -= x[5];
	J[23] -= x[5];
	J[10] = -x[2];
	J[10] -= x[2];
	J[5] = -x[1];
	J[5] -= x[1];
	J[10] += pointpack04_pd[6];
	J[5] += x[2]*2.;
	J[35] = 1.;

   /*** derivatives for constraint 5 ***/

	J[30] = -x[7];
	J[30] -= x[7];
	J[30] += pointpack04_pd[9];
	J[24] = x[7]*2.;
	J[24] -= x[5];
	J[24] -= x[5];
	J[15] = -x[3];
	J[15] -= x[3];
	J[6] = -x[1];
	J[6] -= x[1];
	J[15] += pointpack04_pd[8];
	J[6] += x[3]*2.;
	J[36] = 1.;

   /*** derivatives for constraint 6 ***/

	J[31] = -x[7];
	J[31] -= x[7];
	J[31] += pointpack04_pd[11];
	J[28] = x[7]*2.;
	J[28] -= x[6];
	J[28] -= x[6];
	J[16] = -x[3];
	J[16] -= x[3];
	J[11] = -x[2];
	J[11] -= x[2];
	J[16] += pointpack04_pd[10];
	J[11] += x[3]*2.;
	J[37] = 1.;

   /*** derivatives for constraint 7 ***/

	J[21] = -1.;
	J[25] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = -1.;
	J[7] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = -1.;
	J[12] = 1.;

   /*** derivatives for constraint 10 ***/

	J[13] = -1.;
	J[17] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
