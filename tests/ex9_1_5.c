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
 fint ex9_1_5_auxcom_[1] = { 5 /* nlc */ };
 fint ex9_1_5_funcom_[49] = {
	13 /* nvar */,
	1 /* nobj */,
	12 /* ncon */,
	29 /* nzc */,
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
	18,
	20,
	22,
	24,
	27,
	30,

	/* rownos */
	1,
	6,
	2,
	7,
	3,
	8,
	4,
	9,
	5,
	10,
	1,
	11,
	2,
	12,
	3,
	11,
	12,
	4,
	11,
	5,
	12,
	6,
	7,
	6,
	8,
	9,
	7,
	8,
	10 };

 real ex9_1_5_boundc_[1+26+24] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.};

 real ex9_1_5_x0comn_[13] = {
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

static real ex9_1_5_old_x[13];
static int ex9_1_5_xkind = -1;

 static int
ex9_1_5_xcheck(real *x)
{
	real *x1 = ex9_1_5_old_x, *xe = x + 13;
	errno = 0;
	if (ex9_1_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex9_1_5_xkind = 0;
	return 1;
	}
 real
ex9_1_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex9_1_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[10];
	rv += 10.*x[11];
	rv += -x[12];
	;}

	if (wantfg & 2) {
	g[10] = -1.;
	g[11] = 10.;
	g[12] = -1.;
	}

	return rv;
}

 void
ex9_1_5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex9_1_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[5] * x[0];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[6] * x[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[7] * x[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[8] * x[3];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[9] * x[4];
	c[4] = v[0];

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += x[10];
	t1 += x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[1];
	t1 += x[10];
	t1 += x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[2];
	t1 += x[11];
	t1 += x[12];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[3];
	t1 += -x[11];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[4];
	t1 += -x[12];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[5];
	t1 += x[7];
	t1 += -x[8];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += -x[9];
	c[11] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = x[5];
	J[10] = x[0];

   /*** derivatives for constraint 2 ***/

	J[2] = x[6];
	J[12] = x[1];

   /*** derivatives for constraint 3 ***/

	J[4] = x[7];
	J[14] = x[2];

   /*** derivatives for constraint 4 ***/

	J[6] = x[8];
	J[17] = x[3];

   /*** derivatives for constraint 5 ***/

	J[8] = x[9];
	J[19] = x[4];

   /*** derivatives for constraint 6 ***/

	J[1] = 1.;
	J[21] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 7 ***/

	J[3] = 1.;
	J[22] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 8 ***/

	J[5] = 1.;
	J[24] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 9 ***/

	J[7] = 1.;
	J[25] = -1.;

   /*** derivatives for constraint 10 ***/

	J[9] = 1.;
	J[28] = -1.;

   /*** derivatives for constraint 11 ***/

	J[11] = 1.;
	J[15] = 1.;
	J[18] = -1.;

   /*** derivatives for constraint 12 ***/

	J[13] = 1.;
	J[16] = 1.;
	J[20] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
