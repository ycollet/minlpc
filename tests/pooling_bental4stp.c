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
 fint pooling_bental4stp_auxcom_[1] = { 12 /* nlc */ };
 fint pooling_bental4stp_funcom_[96] = {
	18 /* nvar */,
	1 /* nobj */,
	23 /* ncon */,
	71 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	10,
	13,
	16,
	19,
	22,
	26,
	30,
	33,
	36,
	42,
	48,
	54,
	60,
	66,
	72,

	/* rownos */
	1,
	8,
	9,
	10,
	11,
	12,
	1,
	3,
	5,
	2,
	4,
	6,
	1,
	2,
	22,
	3,
	4,
	22,
	5,
	6,
	22,
	7,
	9,
	11,
	23,
	8,
	10,
	12,
	23,
	16,
	18,
	20,
	16,
	19,
	21,
	1,
	7,
	13,
	17,
	18,
	20,
	2,
	8,
	13,
	17,
	19,
	21,
	3,
	9,
	14,
	17,
	18,
	20,
	4,
	10,
	14,
	17,
	19,
	21,
	5,
	11,
	15,
	17,
	18,
	20,
	6,
	12,
	15,
	17,
	19,
	21 };

 real pooling_bental4stp_boundc_[1+36+46] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		300.,
		0.,
		50.,
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
		1.,
		1.,
		1.};

 real pooling_bental4stp_x0comn_[18] = {
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
		0.,
		0. };

static real pooling_bental4stp_old_x[18];
static int pooling_bental4stp_xkind = -1;

 static int
pooling_bental4stp_xcheck(real *x)
{
	real *x1 = pooling_bental4stp_old_x, *xe = x + 18;
	errno = 0;
	if (pooling_bental4stp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_bental4stp_xkind = 0;
	return 1;
	}
 real
pooling_bental4stp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_bental4stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[10];
	rv += -5.*x[11];
	rv += -3.*x[12];
	rv += -9.*x[13];
	rv += 6.*x[14];
	rv += 7.*x[16];
	rv += x[17];
	;}

	if (wantfg & 2) {
	g[10] = 1.;
	g[11] = -5.;
	g[12] = -3.;
	g[13] = -9.;
	g[14] = 6.;
	g[16] = 7.;
	g[17] = 1.;
	}

	return rv;
}

 void
pooling_bental4stp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_bental4stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[5] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[5] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[6] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[6] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[7] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[7] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[17];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[8] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[9] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[8] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[14];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[9] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[15];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[8] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[9] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[12];
	t1 += x[13];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[14];
	t1 += x[15];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[16];
	t1 += x[17];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[10];
	t1 += x[11];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[10];
	t1 += x[12];
	t1 += x[14];
	t1 += x[16];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[11];
	t1 += x[13];
	t1 += x[15];
	t1 += x[17];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -0.5*x[10];
	t1 += 0.5*x[12];
	t1 += -1.5*x[14];
	t1 += -1.5*x[16];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = 0.5*x[11];
	t1 += 1.5*x[13];
	t1 += -0.5*x[15];
	t1 += -0.5*x[17];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[5];
	t1 += x[6];
	t1 += x[7];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[8];
	t1 += x[9];
	c[22] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = -x[5];
	J[12] = -x[3];
	J[35] = 1.;

   /*** derivatives for constraint 2 ***/

	J[9] = -x[5];
	J[13] = -x[4];
	J[41] = 1.;

   /*** derivatives for constraint 3 ***/

	J[7] = -x[6];
	J[15] = -x[3];
	J[47] = 1.;

   /*** derivatives for constraint 4 ***/

	J[10] = -x[6];
	J[16] = -x[4];
	J[53] = 1.;

   /*** derivatives for constraint 5 ***/

	J[8] = -x[7];
	J[18] = -x[3];
	J[59] = 1.;

   /*** derivatives for constraint 6 ***/

	J[11] = -x[7];
	J[19] = -x[4];
	J[65] = 1.;

   /*** derivatives for constraint 7 ***/

	J[0] = -x[8];
	J[21] = -x[0];
	J[36] = 1.;

   /*** derivatives for constraint 8 ***/

	J[1] = -x[9];
	J[25] = -x[0];
	J[42] = 1.;

   /*** derivatives for constraint 9 ***/

	J[2] = -x[8];
	J[22] = -x[1];
	J[48] = 1.;

   /*** derivatives for constraint 10 ***/

	J[3] = -x[9];
	J[26] = -x[1];
	J[54] = 1.;

   /*** derivatives for constraint 11 ***/

	J[4] = -x[8];
	J[23] = -x[2];
	J[60] = 1.;

   /*** derivatives for constraint 12 ***/

	J[5] = -x[9];
	J[27] = -x[2];
	J[66] = 1.;

   /*** derivatives for constraint 13 ***/

	J[37] = 1.;
	J[43] = 1.;

   /*** derivatives for constraint 14 ***/

	J[49] = 1.;
	J[55] = 1.;

   /*** derivatives for constraint 15 ***/

	J[61] = 1.;
	J[67] = 1.;

   /*** derivatives for constraint 16 ***/

	J[29] = 1.;
	J[32] = 1.;

   /*** derivatives for constraint 17 ***/

	J[38] = 1.;
	J[44] = 1.;
	J[50] = 1.;
	J[56] = 1.;
	J[62] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 18 ***/

	J[30] = 1.;
	J[39] = 1.;
	J[51] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 19 ***/

	J[33] = 1.;
	J[45] = 1.;
	J[57] = 1.;
	J[69] = 1.;

   /*** derivatives for constraint 20 ***/

	J[31] = -0.5;
	J[40] = 0.5;
	J[52] = -1.5;
	J[64] = -1.5;

   /*** derivatives for constraint 21 ***/

	J[34] = 0.5;
	J[46] = 1.5;
	J[58] = -0.5;
	J[70] = -0.5;

   /*** derivatives for constraint 22 ***/

	J[14] = 1.;
	J[17] = 1.;
	J[20] = 1.;

   /*** derivatives for constraint 23 ***/

	J[24] = 1.;
	J[28] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
