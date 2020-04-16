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
 fint synthes3_auxcom_[1] = { 4 /* nlc */ };
 fint synthes3_funcom_[97] = {
	17 /* nvar */,
	1 /* nobj */,
	23 /* ncon */,
	73 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	12,
	21,
	30,
	39,
	45,
	52,
	57,
	59,
	61,
	63,
	66,
	68,
	70,
	72,
	74,

	/* rownos */
	1,
	5,
	6,
	4,
	5,
	6,
	2,
	5,
	12,
	13,
	19,
	2,
	5,
	6,
	7,
	9,
	12,
	13,
	16,
	19,
	1,
	5,
	6,
	7,
	8,
	10,
	11,
	15,
	17,
	1,
	5,
	6,
	7,
	8,
	10,
	11,
	15,
	18,
	5,
	6,
	7,
	9,
	14,
	16,
	1,
	5,
	6,
	7,
	8,
	10,
	11,
	5,
	6,
	7,
	9,
	16,
	3,
	20,
	4,
	20,
	14,
	23,
	15,
	21,
	22,
	16,
	21,
	17,
	22,
	18,
	22,
	19,
	23 };

 real synthes3_boundc_[1+34+46] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		2.,
		0.,
		2.,
		0.,
		1.,
		0.,
		2.,
		0.,
		2.,
		0.,
		2.,
		0.,
		2.,
		0.,
		1.,
		0.,
		3.,
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
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
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
		1.,
		1.,
		-1.7e308,
		1.,
		0.,
		0.,
		-1.7e308,
		0.};

 real synthes3_x0comn_[17] = {
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

 static real synthes3_pd[14];
static real synthes3_old_x[17];
static int synthes3_xkind = -1;

 static int
synthes3_xcheck(real *x)
{
	real *x1 = synthes3_old_x, *xe = x + 17;
	errno = 0;
	if (synthes3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	synthes3_xkind = 0;
	return 1;
	}
 real
synthes3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[3], rv;
	fint wantfg = *needfg;
	if (synthes3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = exp(x[0]);
	if (errno) in_trouble("exp",x[0]);
	synthes3_pd[6] = v[0];
	v[1] = 0.833333 * x[1];
	v[2] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	synthes3_pd[7] = v[2];
	v[0] += v[2];
	v[2] = x[2] + 1.;
	v[2] += x[3];
	synthes3_pd[8] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	synthes3_pd[9] = 1. / v[2];
	v[2] = -65. * synthes3_pd[8];
	v[0] += v[2];
	v[2] = x[4] + 1.;
	synthes3_pd[10] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	synthes3_pd[11] = 1. / v[2];
	v[2] = -90. * synthes3_pd[10];
	v[0] += v[2];
	v[2] = x[5] + 1.;
	synthes3_pd[12] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	synthes3_pd[13] = 1. / v[2];
	v[2] = -80. * synthes3_pd[12];
	v[0] += v[2];
	v[0] += 120.;
	rv = v[0] + -10.*x[0];
	rv += -15.*x[1];
	rv += 15.*x[2];
	rv += 80.*x[3];
	rv += 25.*x[4];
	rv += 35.*x[5];
	rv += -40.*x[6];
	rv += 15.*x[7];
	rv += -35.*x[8];
	rv += 5.*x[9];
	rv += 8.*x[10];
	rv += 6.*x[11];
	rv += 10.*x[12];
	rv += 6.*x[13];
	rv += 7.*x[14];
	rv += 4.*x[15];
	rv += 5.*x[16];
	;}

	if (wantfg & 2) {
	dv[0] = -80.*synthes3_pd[13];
	g[5] = dv[0] + 35.;
	dv[1] = -90.*synthes3_pd[11];
	g[4] = dv[1] + 25.;
	dv[2] = -65.*synthes3_pd[9];
	g[3] = dv[2] + 80.;
	g[2] = dv[2] + 15.;
	g[1] = synthes3_pd[7]*0.833333 + -15.;
	g[0] = synthes3_pd[6] + -10.;
	g[6] = -40.;
	g[7] = 15.;
	g[8] = -35.;
	g[9] = 5.;
	g[10] = 8.;
	g[11] = 6.;
	g[12] = 10.;
	g[13] = 6.;
	g[14] = 7.;
	g[15] = 4.;
	g[16] = 5.;
	}

	return rv;
}

 void
synthes3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (synthes3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[4] + 1.;
	synthes3_pd[0] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	synthes3_pd[1] = 1. / v[0];
	v[0] = -1.5 * synthes3_pd[0];
	v[1] = x[5] + 1.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	synthes3_pd[2] = 1. / v[1];
	v[1] = v[0] - v[2];
	t1 = v[1] + -x[7];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] + 1.;
	v[0] += x[3];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	synthes3_pd[3] = 1. / v[0];
	v[0] = -v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = exp(x[0]);
	if (errno) in_trouble("exp",x[0]);
	synthes3_pd[4] = v[0];
	t1 = v[0] + -10.*x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 0.833333 * x[1];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	synthes3_pd[5] = v[1];
	t1 = v[1] + -10.*x[10];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[2];
	t1 += 2.*x[3];
	t1 += 0.8*x[4];
	t1 += 0.8*x[5];
	t1 += -0.5*x[6];
	t1 += -x[7];
	t1 += -2.*x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += 2.*x[3];
	t1 += 0.8*x[4];
	t1 += 0.8*x[5];
	t1 += -2.*x[6];
	t1 += -x[7];
	t1 += -2.*x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -2.*x[3];
	t1 += -0.8*x[4];
	t1 += -0.8*x[5];
	t1 += 2.*x[6];
	t1 += x[7];
	t1 += 2.*x[8];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -0.8*x[4];
	t1 += -0.8*x[5];
	t1 += x[7];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[3];
	t1 += x[6];
	t1 += x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -0.4*x[4];
	t1 += -0.4*x[5];
	t1 += 1.5*x[7];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 0.16*x[4];
	t1 += 0.16*x[5];
	t1 += -1.2*x[7];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[2];
	t1 += -0.8*x[3];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[2];
	t1 += 0.4*x[3];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[6];
	t1 += -10.*x[11];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 0.8*x[4];
	t1 += 0.8*x[5];
	t1 += -10.*x[12];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 2.*x[3];
	t1 += -2.*x[6];
	t1 += -2.*x[8];
	t1 += -10.*x[13];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[4];
	t1 += -10.*x[14];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[5];
	t1 += -10.*x[15];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[2];
	t1 += x[3];
	t1 += -10.*x[16];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[9];
	t1 += x[10];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[12];
	t1 += x[13];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[12];
	t1 += x[14];
	t1 += x[15];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[11];
	t1 += -x[16];
	c[22] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[29] = -synthes3_pd[2];
	dv[0] = -1.5*synthes3_pd[1];
	J[20] = dv[0];
	J[44] = -1.;

   /*** derivatives for constraint 2 ***/

	J[11] = -synthes3_pd[3];
	J[6] = -synthes3_pd[3];

   /*** derivatives for constraint 3 ***/

	J[0] = synthes3_pd[4];
	J[56] = -10.;

   /*** derivatives for constraint 4 ***/

	J[3] = synthes3_pd[5]*0.833333;
	J[58] = -10.;

   /*** derivatives for constraint 5 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[7] = 1.;
	J[12] = 2.;
	J[21] = 0.8;
	J[30] = 0.8;
	J[38] = -0.5;
	J[45] = -1.;
	J[51] = -2.;

   /*** derivatives for constraint 6 ***/

	J[2] = -1.;
	J[5] = -1.;
	J[13] = 2.;
	J[22] = 0.8;
	J[31] = 0.8;
	J[39] = -2.;
	J[46] = -1.;
	J[52] = -2.;

   /*** derivatives for constraint 7 ***/

	J[14] = -2.;
	J[23] = -0.8;
	J[32] = -0.8;
	J[40] = 2.;
	J[47] = 1.;
	J[53] = 2.;

   /*** derivatives for constraint 8 ***/

	J[24] = -0.8;
	J[33] = -0.8;
	J[48] = 1.;

   /*** derivatives for constraint 9 ***/

	J[15] = -1.;
	J[41] = 1.;
	J[54] = 1.;

   /*** derivatives for constraint 10 ***/

	J[25] = -0.4;
	J[34] = -0.4;
	J[49] = 1.5;

   /*** derivatives for constraint 11 ***/

	J[26] = 0.16;
	J[35] = 0.16;
	J[50] = -1.2;

   /*** derivatives for constraint 12 ***/

	J[8] = 1.;
	J[16] = -0.8;

   /*** derivatives for constraint 13 ***/

	J[9] = -1.;
	J[17] = 0.4;

   /*** derivatives for constraint 14 ***/

	J[42] = 1.;
	J[60] = -10.;

   /*** derivatives for constraint 15 ***/

	J[27] = 0.8;
	J[36] = 0.8;
	J[62] = -10.;

   /*** derivatives for constraint 16 ***/

	J[18] = 2.;
	J[43] = -2.;
	J[55] = -2.;
	J[65] = -10.;

   /*** derivatives for constraint 17 ***/

	J[28] = 1.;
	J[67] = -10.;

   /*** derivatives for constraint 18 ***/

	J[37] = 1.;
	J[69] = -10.;

   /*** derivatives for constraint 19 ***/

	J[10] = 1.;
	J[19] = 1.;
	J[71] = -10.;

   /*** derivatives for constraint 20 ***/

	J[57] = 1.;
	J[59] = 1.;

   /*** derivatives for constraint 21 ***/

	J[63] = 1.;
	J[66] = 1.;

   /*** derivatives for constraint 22 ***/

	J[64] = -1.;
	J[68] = 1.;
	J[70] = 1.;

   /*** derivatives for constraint 23 ***/

	J[61] = 1.;
	J[72] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
