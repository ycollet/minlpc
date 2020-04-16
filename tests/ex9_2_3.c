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
 fint ex9_2_3_auxcom_[1] = { 6 /* nlc */ };
 fint ex9_2_3_funcom_[63] = {
	16 /* nvar */,
	1 /* nobj */,
	15 /* ncon */,
	40 /* nzc */,
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
	19,
	21,
	23,
	25,
	30,
	35,
	38,
	41,

	/* rownos */
	1,
	8,
	2,
	9,
	3,
	10,
	4,
	11,
	5,
	12,
	6,
	13,
	1,
	14,
	2,
	15,
	3,
	14,
	4,
	14,
	5,
	15,
	6,
	15,
	7,
	8,
	10,
	11,
	14,
	7,
	9,
	12,
	13,
	15,
	7,
	8,
	14,
	7,
	9,
	15 };

 real ex9_2_3_boundc_[1+32+30] /* Infinity, variable bounds, constraint bounds */ = {
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
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		50.,
		0.,
		50.,
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
		-1.7e308,
		40.,
		-10.,
		-10.,
		-10.,
		-10.,
		10.,
		10.,
		20.,
		20.,
		10.,
		10.,
		20.,
		20.,
		-40.,
		-40.,
		-40.,
		-40.};

 real ex9_2_3_x0comn_[16] = {
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
		-8.,
		-8.,
		1.,
		0. };

static real ex9_2_3_old_x[16];
static int ex9_2_3_xkind = -1;

 static int
ex9_2_3_xcheck(real *x)
{
	real *x1 = ex9_2_3_old_x, *xe = x + 16;
	errno = 0;
	if (ex9_2_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex9_2_3_xkind = 0;
	return 1;
	}
 real
ex9_2_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex9_2_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -60. + -3.*x[12];
	rv += -3.*x[13];
	rv += 2.*x[14];
	rv += 2.*x[15];
	;}

	if (wantfg & 2) {
	g[12] = -3.;
	g[13] = -3.;
	g[14] = 2.;
	g[15] = 2.;
	}

	return rv;
}

 void
ex9_2_3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex9_2_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[6];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[1] * x[7];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[2] * x[8];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[3] * x[9];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[4] * x[10];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[5] * x[11];
	c[5] = v[0];

  /***  constraint 7  ***/

	t1 = x[12];
	t1 += -2.*x[13];
	t1 += x[14];
	t1 += x[15];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[0];
	t1 += 2.*x[12];
	t1 += -x[14];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[1];
	t1 += 2.*x[13];
	t1 += -x[15];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[2];
	t1 += -x[12];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[3];
	t1 += x[12];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[4];
	t1 += -x[13];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[5];
	t1 += x[13];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 2.*x[6];
	t1 += -x[8];
	t1 += x[9];
	t1 += 2.*x[12];
	t1 += -2.*x[14];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 2.*x[7];
	t1 += -x[10];
	t1 += x[11];
	t1 += 2.*x[13];
	t1 += -2.*x[15];
	c[14] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[12] = x[0];
	J[0] = x[6];

   /*** derivatives for constraint 2 ***/

	J[14] = x[1];
	J[2] = x[7];

   /*** derivatives for constraint 3 ***/

	J[16] = x[2];
	J[4] = x[8];

   /*** derivatives for constraint 4 ***/

	J[18] = x[3];
	J[6] = x[9];

   /*** derivatives for constraint 5 ***/

	J[20] = x[4];
	J[8] = x[10];

   /*** derivatives for constraint 6 ***/

	J[22] = x[5];
	J[10] = x[11];

   /*** derivatives for constraint 7 ***/

	J[24] = 1.;
	J[29] = -2.;
	J[34] = 1.;
	J[37] = 1.;

   /*** derivatives for constraint 8 ***/

	J[1] = 1.;
	J[25] = 2.;
	J[35] = -1.;

   /*** derivatives for constraint 9 ***/

	J[3] = 1.;
	J[30] = 2.;
	J[38] = -1.;

   /*** derivatives for constraint 10 ***/

	J[5] = 1.;
	J[26] = -1.;

   /*** derivatives for constraint 11 ***/

	J[7] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 12 ***/

	J[9] = 1.;
	J[31] = -1.;

   /*** derivatives for constraint 13 ***/

	J[11] = 1.;
	J[32] = 1.;

   /*** derivatives for constraint 14 ***/

	J[13] = 2.;
	J[17] = -1.;
	J[19] = 1.;
	J[28] = 2.;
	J[36] = -2.;

   /*** derivatives for constraint 15 ***/

	J[15] = 2.;
	J[21] = -1.;
	J[23] = 1.;
	J[33] = 2.;
	J[39] = -2.;
	}
}
#ifdef __cplusplus
	}
#endif
