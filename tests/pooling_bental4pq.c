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
 fint pooling_bental4pq_auxcom_[1] = { 6 /* nlc */ };
 fint pooling_bental4pq_funcom_[71] = {
	13 /* nvar */,
	1 /* nobj */,
	16 /* ncon */,
	51 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	27,
	32,
	37,
	42,
	47,
	52,

	/* rownos */
	1,
	2,
	16,
	3,
	4,
	16,
	5,
	6,
	16,
	1,
	3,
	5,
	2,
	4,
	6,
	10,
	12,
	14,
	10,
	13,
	15,
	1,
	7,
	11,
	12,
	14,
	2,
	7,
	11,
	13,
	15,
	3,
	8,
	11,
	12,
	14,
	4,
	8,
	11,
	13,
	15,
	5,
	9,
	11,
	12,
	14,
	6,
	9,
	11,
	13,
	15 };

 real pooling_bental4pq_boundc_[1+26+32] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		50.,
		0.,
		50.,
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
		-1.7e308,
		300.,
		-1.7e308,
		50.,
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
		1.};

 real pooling_bental4pq_x0comn_[13] = {
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

static real pooling_bental4pq_old_x[13];
static int pooling_bental4pq_xkind = -1;

 static int
pooling_bental4pq_xcheck(real *x)
{
	real *x1 = pooling_bental4pq_old_x, *xe = x + 13;
	errno = 0;
	if (pooling_bental4pq_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_bental4pq_xkind = 0;
	return 1;
	}
 real
pooling_bental4pq_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_bental4pq_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[5];
	rv += -5.*x[6];
	rv += -3.*x[7];
	rv += -9.*x[8];
	rv += 6.*x[9];
	rv += 7.*x[11];
	rv += x[12];
	;}

	if (wantfg & 2) {
	g[5] = 1.;
	g[6] = -5.;
	g[7] = -3.;
	g[8] = -9.;
	g[9] = 6.;
	g[11] = 7.;
	g[12] = 1.;
	}

	return rv;
}

 void
pooling_bental4pq_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_bental4pq_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[8];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[1] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[10];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[2] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[11];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[2] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[7];
	t1 += x[8];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[9];
	t1 += x[10];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[11];
	t1 += x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[5];
	t1 += x[6];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[5];
	t1 += x[7];
	t1 += x[9];
	t1 += x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[6];
	t1 += x[8];
	t1 += x[10];
	t1 += x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -0.5*x[5];
	t1 += 0.5*x[7];
	t1 += -1.5*x[9];
	t1 += -1.5*x[11];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 0.5*x[6];
	t1 += 1.5*x[8];
	t1 += -0.5*x[10];
	t1 += -0.5*x[12];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[15] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[9] = -x[0];
	J[0] = -x[3];
	J[21] = 1.;

   /*** derivatives for constraint 2 ***/

	J[12] = -x[0];
	J[1] = -x[4];
	J[26] = 1.;

   /*** derivatives for constraint 3 ***/

	J[10] = -x[1];
	J[3] = -x[3];
	J[31] = 1.;

   /*** derivatives for constraint 4 ***/

	J[13] = -x[1];
	J[4] = -x[4];
	J[36] = 1.;

   /*** derivatives for constraint 5 ***/

	J[11] = -x[2];
	J[6] = -x[3];
	J[41] = 1.;

   /*** derivatives for constraint 6 ***/

	J[14] = -x[2];
	J[7] = -x[4];
	J[46] = 1.;

   /*** derivatives for constraint 7 ***/

	J[22] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 8 ***/

	J[32] = 1.;
	J[37] = 1.;

   /*** derivatives for constraint 9 ***/

	J[42] = 1.;
	J[47] = 1.;

   /*** derivatives for constraint 10 ***/

	J[15] = 1.;
	J[18] = 1.;

   /*** derivatives for constraint 11 ***/

	J[23] = 1.;
	J[28] = 1.;
	J[33] = 1.;
	J[38] = 1.;
	J[43] = 1.;
	J[48] = 1.;

   /*** derivatives for constraint 12 ***/

	J[16] = 1.;
	J[24] = 1.;
	J[34] = 1.;
	J[44] = 1.;

   /*** derivatives for constraint 13 ***/

	J[19] = 1.;
	J[29] = 1.;
	J[39] = 1.;
	J[49] = 1.;

   /*** derivatives for constraint 14 ***/

	J[17] = -0.5;
	J[25] = 0.5;
	J[35] = -1.5;
	J[45] = -1.5;

   /*** derivatives for constraint 15 ***/

	J[20] = 0.5;
	J[30] = 1.5;
	J[40] = -0.5;
	J[50] = -0.5;

   /*** derivatives for constraint 16 ***/

	J[2] = 1.;
	J[5] = 1.;
	J[8] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
