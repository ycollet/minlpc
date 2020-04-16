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
 fint tln2_auxcom_[1] = { 2 /* nlc */ };
 fint tln2_funcom_[43] = {
	8 /* nvar */,
	1 /* nobj */,
	12 /* ncon */,
	28 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,
	21,
	25,
	27,
	29,

	/* rownos */
	1,
	2,
	9,
	11,
	1,
	2,
	10,
	12,
	1,
	3,
	5,
	7,
	1,
	4,
	6,
	8,
	2,
	3,
	5,
	7,
	2,
	4,
	6,
	8,
	9,
	11,
	10,
	12 };

 real tln2_boundc_[1+16+24] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		15.,
		0.,
		15.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		-8.,
		-1.7e308,
		-7.,
		-1.7e308,
		1900.,
		-1.7e308,
		1900.,
		-1.7e308,
		-1700.,
		-1.7e308,
		-1700.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real tln2_x0comn_[8] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		0.,
		0. };

static real tln2_old_x[8];
static int tln2_xkind = -1;

 static int
tln2_xcheck(real *x)
{
	real *x1 = tln2_old_x, *xe = x + 8;
	errno = 0;
	if (tln2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tln2_xkind = 0;
	return 1;
	}
 real
tln2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (tln2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += 0.1*x[6];
	rv += 0.2*x[7];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[6] = 0.1;
	g[7] = 0.2;
	}

	return rv;
}

 void
tln2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (tln2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[1] * x[3];
	v[1] = -v[0];
	v[0] = x[0] * x[2];
	v[2] = v[1] - v[0];
	c[0] = v[2];

  /***  constraint 2  ***/

	v[0] = x[1] * x[5];
	v[1] = -v[0];
	v[0] = x[0] * x[4];
	v[2] = v[1] - v[0];
	c[1] = v[2];

  /***  constraint 3  ***/

	t1 = 460.*x[2];
	t1 += 570.*x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 460.*x[3];
	t1 += 570.*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -460.*x[2];
	t1 += -570.*x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -460.*x[3];
	t1 += -570.*x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += x[4];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[3];
	t1 += x[5];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[0];
	t1 += x[6];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[1];
	t1 += x[7];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[0];
	t1 += -15.*x[6];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[1];
	t1 += -15.*x[7];
	c[11] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = -x[0];
	J[0] = -x[2];
	J[12] = -x[1];
	J[4] = -x[3];

   /*** derivatives for constraint 2 ***/

	J[16] = -x[0];
	J[1] = -x[4];
	J[20] = -x[1];
	J[5] = -x[5];

   /*** derivatives for constraint 3 ***/

	J[9] = 460.;
	J[17] = 570.;

   /*** derivatives for constraint 4 ***/

	J[13] = 460.;
	J[21] = 570.;

   /*** derivatives for constraint 5 ***/

	J[10] = -460.;
	J[18] = -570.;

   /*** derivatives for constraint 6 ***/

	J[14] = -460.;
	J[22] = -570.;

   /*** derivatives for constraint 7 ***/

	J[11] = 1.;
	J[19] = 1.;

   /*** derivatives for constraint 8 ***/

	J[15] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 9 ***/

	J[2] = -1.;
	J[24] = 1.;

   /*** derivatives for constraint 10 ***/

	J[6] = -1.;
	J[26] = 1.;

   /*** derivatives for constraint 11 ***/

	J[3] = 1.;
	J[25] = -15.;

   /*** derivatives for constraint 12 ***/

	J[7] = 1.;
	J[27] = -15.;
	}
}
#ifdef __cplusplus
	}
#endif
