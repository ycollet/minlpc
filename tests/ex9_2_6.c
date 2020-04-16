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
 fint ex9_2_6_auxcom_[1] = { 6 /* nlc */ };
 fint ex9_2_6_funcom_[51] = {
	16 /* nvar */,
	1 /* nobj */,
	12 /* ncon */,
	28 /* nzc */,
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
	11,
	13,
	15,
	17,
	19,
	20,
	21,
	22,
	23,
	26,
	29,

	/* rownos */
	1,
	7,
	2,
	8,
	3,
	9,
	4,
	10,
	5,
	6,
	1,
	11,
	2,
	12,
	3,
	11,
	4,
	12,
	5,
	6,
	11,
	12,
	7,
	9,
	11,
	8,
	10,
	12 };

 real ex9_2_6_boundc_[1+32+24] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		-0.5,
		-0.5,
		-0.5,
		-0.5,
		1.5,
		1.5,
		1.5,
		1.5,
		0.,
		0.,
		0.,
		0.};

 real ex9_2_6_x0comn_[16] = {
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
		0.,
		0.,
		0.,
		0. };

static real ex9_2_6_old_x[16];
static int ex9_2_6_xkind = -1;

 static int
ex9_2_6_xcheck(real *x)
{
	real *x1 = ex9_2_6_old_x, *xe = x + 16;
	errno = 0;
	if (ex9_2_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex9_2_6_xkind = 0;
	return 1;
	}
 real
ex9_2_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex9_2_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[12] * x[12];
	v[1] = x[13] * x[13];
	v[0] += v[1];
	v[1] = x[14] * x[14];
	v[0] += v[1];
	v[1] = x[15] * x[15];
	v[0] += v[1];
	rv = v[0] + -2.*x[12];
	rv += -2.*x[13];
	;}

	if (wantfg & 2) {
	g[15] = x[15];
	g[15] += x[15];
	g[14] = x[14];
	g[14] += x[14];
	g[13] = x[13] + -2.;
	g[13] += x[13];
	g[12] = x[12] + -2.;
	g[12] += x[12];
	}

	return rv;
}

 void
ex9_2_6_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex9_2_6_xcheck(x) && wantfg == 2)
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

	t1 = x[0];
	t1 += -x[14];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[1];
	t1 += -x[15];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[2];
	t1 += x[14];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[3];
	t1 += x[15];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += -2.*x[12];
	t1 += 2.*x[14];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += -2.*x[13];
	t1 += 2.*x[15];
	c[11] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[10] = x[0];
	J[0] = x[6];

   /*** derivatives for constraint 2 ***/

	J[12] = x[1];
	J[2] = x[7];

   /*** derivatives for constraint 3 ***/

	J[14] = x[2];
	J[4] = x[8];

   /*** derivatives for constraint 4 ***/

	J[16] = x[3];
	J[6] = x[9];

   /*** derivatives for constraint 5 ***/

	J[18] = x[4];
	J[8] = x[10];

   /*** derivatives for constraint 6 ***/

	J[19] = x[5];
	J[9] = x[11];

   /*** derivatives for constraint 7 ***/

	J[1] = 1.;
	J[22] = -1.;

   /*** derivatives for constraint 8 ***/

	J[3] = 1.;
	J[25] = -1.;

   /*** derivatives for constraint 9 ***/

	J[5] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 10 ***/

	J[7] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 11 ***/

	J[11] = -1.;
	J[15] = 1.;
	J[20] = -2.;
	J[24] = 2.;

   /*** derivatives for constraint 12 ***/

	J[13] = -1.;
	J[17] = 1.;
	J[21] = -2.;
	J[27] = 2.;
	}
}
#ifdef __cplusplus
	}
#endif
