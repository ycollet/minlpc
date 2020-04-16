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
 fint st_e30_auxcom_[1] = { 5 /* nlc */ };
 fint st_e30_funcom_[63] = {
	14 /* nvar */,
	1 /* nobj */,
	15 /* ncon */,
	42 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	11,
	13,
	16,
	19,
	21,
	25,
	29,
	32,
	35,
	38,
	41,
	43,

	/* rownos */
	1,
	3,
	5,
	7,
	2,
	4,
	5,
	6,
	3,
	6,
	4,
	7,
	3,
	4,
	9,
	1,
	2,
	8,
	3,
	4,
	1,
	3,
	10,
	13,
	2,
	4,
	10,
	13,
	1,
	11,
	14,
	2,
	11,
	14,
	3,
	12,
	15,
	4,
	12,
	15,
	8,
	9 };

 real st_e30_boundc_[1+28+30] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		0.,
		3.,
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
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real st_e30_x0comn_[14] = {
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

 static real st_e30_pd[2];
static real st_e30_old_x[14];
static int st_e30_xkind = -1;

 static int
st_e30_xcheck(real *x)
{
	real *x1 = st_e30_old_x, *xe = x + 14;
	errno = 0;
	if (st_e30_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e30_xkind = 0;
	return 1;
	}
 real
st_e30_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[13];
	;}

	if (wantfg & 2) {
	g[13] = -1.;
	}

	return rv;
}

 void
st_e30_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_e30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[5] * x[0];
	v[1] = -v[0];
	t1 = v[1] + -x[7];
	t1 += x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[5] * x[1];
	v[1] = -v[0];
	t1 = v[1] + -x[8];
	t1 += x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[4] * x[2];
	v[1] = -v[0];
	v[0] = x[6] * x[0];
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[7];
	t1 += x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[4] * x[3];
	v[1] = -v[0];
	v[0] = x[6] * x[1];
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[8];
	t1 += x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[0] * x[0];
	st_e30_pd[0] = x[0] + x[0];
	v[1] = x[1] * x[1];
	st_e30_pd[1] = x[1] + x[1];
	v[2] = v[0] + v[1];
	c[4] = v[2];

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += x[2];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += x[3];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[5];
	t1 += x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[4];
	t1 += x[13];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 2.*x[7];
	t1 += x[8];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 2.*x[9];
	t1 += x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 2.*x[11];
	t1 += x[12];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[7];
	t1 += x[8];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[9];
	t1 += x[10];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[11];
	t1 += x[12];
	c[14] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[5];
	J[15] = -x[0];
	J[20] = -1.;
	J[28] = 1.;

   /*** derivatives for constraint 2 ***/

	J[4] = -x[5];
	J[16] = -x[1];
	J[24] = -1.;
	J[31] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = -x[6];
	J[18] = -x[0];
	J[8] = -x[4];
	J[12] = -x[2];
	J[21] = -1.;
	J[34] = 1.;

   /*** derivatives for constraint 4 ***/

	J[5] = -x[6];
	J[19] = -x[1];
	J[10] = -x[4];
	J[13] = -x[3];
	J[25] = -1.;
	J[37] = 1.;

   /*** derivatives for constraint 5 ***/

	J[6] = st_e30_pd[1];
	J[2] = st_e30_pd[0];

   /*** derivatives for constraint 6 ***/

	J[7] = 1.;
	J[9] = 1.;

   /*** derivatives for constraint 7 ***/

	J[3] = -1.;
	J[11] = 1.;

   /*** derivatives for constraint 8 ***/

	J[17] = -1.;
	J[40] = 1.;

   /*** derivatives for constraint 9 ***/

	J[14] = -1.;
	J[41] = 1.;

   /*** derivatives for constraint 10 ***/

	J[22] = 2.;
	J[26] = 1.;

   /*** derivatives for constraint 11 ***/

	J[29] = 2.;
	J[32] = 1.;

   /*** derivatives for constraint 12 ***/

	J[35] = 2.;
	J[38] = 1.;

   /*** derivatives for constraint 13 ***/

	J[23] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 14 ***/

	J[30] = 1.;
	J[33] = 1.;

   /*** derivatives for constraint 15 ***/

	J[36] = 1.;
	J[39] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
