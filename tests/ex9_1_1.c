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
 fint ex9_1_1_auxcom_[1] = { 5 /* nlc */ };
 fint ex9_1_1_funcom_[53] = {
	13 /* nvar */,
	1 /* nobj */,
	12 /* ncon */,
	33 /* nzc */,
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
	16,
	19,
	21,
	23,
	28,
	31,
	34,

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
	11,
	12,
	3,
	11,
	12,
	4,
	11,
	5,
	11,
	6,
	7,
	8,
	9,
	10,
	6,
	7,
	8,
	6,
	7,
	8 };

 real ex9_1_1_boundc_[1+26+24] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
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
		16.,
		16.,
		48.,
		48.,
		-12.,
		-12.,
		0.,
		0.,
		4.,
		4.,
		1.,
		1.,
		0.,
		0.};

 real ex9_1_1_x0comn_[13] = {
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

static real ex9_1_1_old_x[13];
static int ex9_1_1_xkind = -1;

 static int
ex9_1_1_xcheck(real *x)
{
	real *x1 = ex9_1_1_old_x, *xe = x + 13;
	errno = 0;
	if (ex9_1_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex9_1_1_xkind = 0;
	return 1;
	}
 real
ex9_1_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex9_1_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -3.*x[10];
	rv += 2.*x[11];
	rv += -x[12];
	;}

	if (wantfg & 2) {
	g[10] = -3.;
	g[11] = 2.;
	g[12] = -1.;
	}

	return rv;
}

 void
ex9_1_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex9_1_1_xcheck(x) && wantfg == 2)
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
	t1 += 4.*x[11];
	t1 += -2.*x[12];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[1];
	t1 += 3.*x[10];
	t1 += -2.*x[11];
	t1 += 8.*x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[2];
	t1 += x[10];
	t1 += -3.*x[11];
	t1 += -2.*x[12];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[3];
	t1 += -x[10];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[4];
	t1 += x[10];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[5];
	t1 += 3.*x[6];
	t1 += x[7];
	t1 += -x[8];
	t1 += x[9];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 2.*x[6];
	t1 += -3.*x[7];
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
	J[15] = x[2];

   /*** derivatives for constraint 4 ***/

	J[6] = x[8];
	J[18] = x[3];

   /*** derivatives for constraint 5 ***/

	J[8] = x[9];
	J[20] = x[4];

   /*** derivatives for constraint 6 ***/

	J[1] = 1.;
	J[22] = 1.;
	J[27] = 4.;
	J[30] = -2.;

   /*** derivatives for constraint 7 ***/

	J[3] = 1.;
	J[23] = 3.;
	J[28] = -2.;
	J[31] = 8.;

   /*** derivatives for constraint 8 ***/

	J[5] = 1.;
	J[24] = 1.;
	J[29] = -3.;
	J[32] = -2.;

   /*** derivatives for constraint 9 ***/

	J[7] = 1.;
	J[25] = -1.;

   /*** derivatives for constraint 10 ***/

	J[9] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 11 ***/

	J[11] = 1.;
	J[13] = 3.;
	J[16] = 1.;
	J[19] = -1.;
	J[21] = 1.;

   /*** derivatives for constraint 12 ***/

	J[14] = 2.;
	J[17] = -3.;
	}
}
#ifdef __cplusplus
	}
#endif