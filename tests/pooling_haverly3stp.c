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
 fint pooling_haverly3stp_auxcom_[1] = { 8 /* nlc */ };
 fint pooling_haverly3stp_funcom_[71] = {
	14 /* nvar */,
	1 /* nobj */,
	18 /* ncon */,
	50 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	12,
	15,
	18,
	21,
	24,
	27,
	33,
	39,
	45,
	51,

	/* rownos */
	1,
	6,
	7,
	8,
	1,
	3,
	2,
	4,
	1,
	2,
	17,
	3,
	4,
	17,
	5,
	7,
	18,
	6,
	8,
	18,
	11,
	13,
	15,
	11,
	14,
	16,
	1,
	5,
	9,
	12,
	13,
	15,
	2,
	6,
	9,
	12,
	14,
	16,
	3,
	7,
	10,
	12,
	13,
	15,
	4,
	8,
	10,
	12,
	14,
	16 };

 real pooling_haverly3stp_boundc_[1+28+36] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		300.,
		0.,
		300.,
		0.,
		100.,
		0.,
		200.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
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
		0.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		100.,
		-1.7e308,
		200.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		1.,
		1.,
		1.,
		1.};

 real pooling_haverly3stp_x0comn_[14] = {
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

static real pooling_haverly3stp_old_x[14];
static int pooling_haverly3stp_xkind = -1;

 static int
pooling_haverly3stp_xcheck(real *x)
{
	real *x1 = pooling_haverly3stp_old_x, *xe = x + 14;
	errno = 0;
	if (pooling_haverly3stp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_haverly3stp_xkind = 0;
	return 1;
	}
 real
pooling_haverly3stp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_haverly3stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[8];
	rv += -5.*x[9];
	rv += -3.*x[10];
	rv += -9.*x[11];
	rv += 4.*x[12];
	rv += -2.*x[13];
	;}

	if (wantfg & 2) {
	g[8] = 1.;
	g[9] = -5.;
	g[10] = -3.;
	g[11] = -9.;
	g[12] = 4.;
	g[13] = -2.;
	}

	return rv;
}

 void
pooling_haverly3stp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_haverly3stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[4] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[10];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[4] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[11];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[5] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[5] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[6] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[10];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[7] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[6] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[7] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[10];
	t1 += x[11];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[12];
	t1 += x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[8];
	t1 += x[9];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[8];
	t1 += x[10];
	t1 += x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[9];
	t1 += x[11];
	t1 += x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -0.5*x[8];
	t1 += 0.5*x[10];
	t1 += -1.5*x[12];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 0.5*x[9];
	t1 += 1.5*x[11];
	t1 += -0.5*x[13];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[4];
	t1 += x[5];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[6];
	t1 += x[7];
	c[17] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = -x[4];
	J[8] = -x[2];
	J[26] = 1.;

   /*** derivatives for constraint 2 ***/

	J[6] = -x[4];
	J[9] = -x[3];
	J[32] = 1.;

   /*** derivatives for constraint 3 ***/

	J[5] = -x[5];
	J[11] = -x[2];
	J[38] = 1.;

   /*** derivatives for constraint 4 ***/

	J[7] = -x[5];
	J[12] = -x[3];
	J[44] = 1.;

   /*** derivatives for constraint 5 ***/

	J[0] = -x[6];
	J[14] = -x[0];
	J[27] = 1.;

   /*** derivatives for constraint 6 ***/

	J[1] = -x[7];
	J[17] = -x[0];
	J[33] = 1.;

   /*** derivatives for constraint 7 ***/

	J[2] = -x[6];
	J[15] = -x[1];
	J[39] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = -x[7];
	J[18] = -x[1];
	J[45] = 1.;

   /*** derivatives for constraint 9 ***/

	J[28] = 1.;
	J[34] = 1.;

   /*** derivatives for constraint 10 ***/

	J[40] = 1.;
	J[46] = 1.;

   /*** derivatives for constraint 11 ***/

	J[20] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 12 ***/

	J[29] = 1.;
	J[35] = 1.;
	J[41] = 1.;
	J[47] = 1.;

   /*** derivatives for constraint 13 ***/

	J[21] = 1.;
	J[30] = 1.;
	J[42] = 1.;

   /*** derivatives for constraint 14 ***/

	J[24] = 1.;
	J[36] = 1.;
	J[48] = 1.;

   /*** derivatives for constraint 15 ***/

	J[22] = -0.5;
	J[31] = 0.5;
	J[43] = -1.5;

   /*** derivatives for constraint 16 ***/

	J[25] = 0.5;
	J[37] = 1.5;
	J[49] = -0.5;

   /*** derivatives for constraint 17 ***/

	J[10] = 1.;
	J[13] = 1.;

   /*** derivatives for constraint 18 ***/

	J[16] = 1.;
	J[19] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
