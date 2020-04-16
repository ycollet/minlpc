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
 fint csched1a_auxcom_[1] = { 0 /* nlc */ };
 fint csched1a_funcom_[105] = {
	28 /* nvar */,
	1 /* nobj */,
	22 /* ncon */,
	70 /* nzc */,
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
	26,
	28,
	30,
	32,
	34,
	36,
	38,
	41,
	43,
	45,
	47,
	49,
	52,
	54,
	56,
	58,
	60,
	63,
	65,
	67,
	69,
	71,

	/* rownos */
	1,
	13,
	17,
	2,
	14,
	18,
	3,
	15,
	19,
	7,
	13,
	20,
	8,
	14,
	21,
	9,
	15,
	22,
	1,
	2,
	3,
	4,
	5,
	6,
	16,
	1,
	4,
	2,
	5,
	3,
	6,
	13,
	16,
	14,
	16,
	15,
	16,
	7,
	10,
	17,
	7,
	10,
	7,
	10,
	7,
	10,
	7,
	10,
	8,
	11,
	18,
	8,
	11,
	8,
	11,
	8,
	11,
	8,
	11,
	9,
	12,
	19,
	9,
	12,
	9,
	12,
	9,
	12,
	9,
	12 };

 real csched1a_boundc_[1+56+44] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.01,
		4.,
		0.01,
		4.,
		0.01,
		4.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		-1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		150.,
		-1.7e308,
		150.,
		-1.7e308,
		150.,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308};

 real csched1a_x0comn_[28] = {
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
		100.,
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
		0. };

 static real csched1a_pd[17];
static real csched1a_old_x[28];
static int csched1a_xkind = -1;

 static int
csched1a_xcheck(real *x)
{
	real *x1 = csched1a_old_x, *xe = x + 28;
	errno = 0;
	if (csched1a_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	csched1a_xkind = 0;
	return 1;
	}
 real
csched1a_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[5], dv[9];
	fint wantfg = *needfg;
	if (csched1a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = -0.1 * x[0];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = v[0] / x[3];
	csched1a_pd[0] = 1. / x[3];
	csched1a_pd[1] = -v[1] * csched1a_pd[0];
	csched1a_pd[2] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	csched1a_pd[3] = csched1a_pd[2];
	v[1] = -416000. * csched1a_pd[2];
	csched1a_pd[4] = 416000. + v[1];
	v[1] = csched1a_pd[4] * x[3];
	v[2] = 37440. * x[0];
	v[1] += v[2];
	v[2] = -100. * x[3];
	v[1] += v[2];
	v[2] = -0.13 * x[1];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[3] = v[2] / x[4];
	csched1a_pd[5] = 1. / x[4];
	csched1a_pd[6] = -v[3] * csched1a_pd[5];
	csched1a_pd[7] = exp(v[3]);
	if (errno) in_trouble("exp",v[3]);
	csched1a_pd[8] = csched1a_pd[7];
	v[3] = -124615.384615385 * csched1a_pd[7];
	csched1a_pd[9] = 124615.384615385 + v[3];
	v[3] = csched1a_pd[9] * x[4];
	v[1] += v[3];
	v[3] = 9000. * x[1];
	v[1] += v[3];
	v[3] = -90. * x[4];
	v[1] += v[3];
	v[3] = -0.09 * x[2];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[4] = v[3] / x[5];
	csched1a_pd[10] = 1. / x[5];
	csched1a_pd[11] = -v[4] * csched1a_pd[10];
	csched1a_pd[12] = exp(v[4]);
	if (errno) in_trouble("exp",v[4]);
	csched1a_pd[13] = csched1a_pd[12];
	v[4] = -278666.666666667 * csched1a_pd[12];
	csched1a_pd[14] = 278666.666666667 + v[4];
	v[4] = csched1a_pd[14] * x[5];
	v[1] += v[4];
	v[4] = 15840. * x[2];
	v[1] += v[4];
	v[4] = -80. * x[5];
	v[1] += v[4];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[4] = v[1] / x[6];
	csched1a_pd[15] = 1. / x[6];
	csched1a_pd[16] = -v[4] * csched1a_pd[15];
	v[1] = -v[4];
	;}

	if (wantfg & 2) {
	g[6] = -csched1a_pd[16];
	dv[0] = -csched1a_pd[15];
	g[5] = -dv[0]*80.;
	dv[1] = -csched1a_pd[15];
	g[2] = dv[1]*15840.;
	dv[2] = -csched1a_pd[15];
	g[5] += dv[2]*csched1a_pd[14];
	dv[2] *= x[5];
	dv[2] = -dv[2]*278666.666666667;
	dv[2] *= csched1a_pd[13];
	g[5] += dv[2]*csched1a_pd[11];
	dv[2] *= csched1a_pd[10];
	g[2] -= dv[2]*0.09;
	dv[3] = -csched1a_pd[15];
	g[4] = -dv[3]*90.;
	dv[4] = -csched1a_pd[15];
	g[1] = dv[4]*9000.;
	dv[5] = -csched1a_pd[15];
	g[4] += dv[5]*csched1a_pd[9];
	dv[5] *= x[4];
	dv[5] = -dv[5]*124615.384615385;
	dv[5] *= csched1a_pd[8];
	g[4] += dv[5]*csched1a_pd[6];
	dv[5] *= csched1a_pd[5];
	g[1] -= dv[5]*0.13;
	dv[6] = -csched1a_pd[15];
	g[3] = -dv[6]*100.;
	dv[7] = -csched1a_pd[15];
	g[0] = dv[7]*37440.;
	g[3] -= csched1a_pd[15]*csched1a_pd[4];
	dv[8] = -csched1a_pd[15]*x[3];
	dv[8] = -dv[8]*416000.;
	dv[8] *= csched1a_pd[3];
	g[3] += dv[8]*csched1a_pd[1];
	dv[8] *= csched1a_pd[0];
	g[0] -= dv[8]*0.1;
	}

	return v[1];
}

 void
csched1a_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (csched1a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -1300.*x[0];
	t1 += 350.*x[6];
	t1 += x[7];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -1000.*x[1];
	t1 += 300.*x[6];
	t1 += x[8];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -1100.*x[2];
	t1 += 300.*x[6];
	t1 += x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -300.*x[6];
	t1 += x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -300.*x[6];
	t1 += x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -300.*x[6];
	t1 += x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[3];
	t1 += -0.01*x[13];
	t1 += -x[14];
	t1 += -2.*x[15];
	t1 += -3.*x[16];
	t1 += -4.*x[17];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[4];
	t1 += -0.01*x[18];
	t1 += -x[19];
	t1 += -2.*x[20];
	t1 += -3.*x[21];
	t1 += -4.*x[22];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[5];
	t1 += -0.01*x[23];
	t1 += -x[24];
	t1 += -2.*x[25];
	t1 += -3.*x[26];
	t1 += -4.*x[27];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[13];
	t1 += -x[14];
	t1 += -x[15];
	t1 += -x[16];
	t1 += -x[17];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[18];
	t1 += -x[19];
	t1 += -x[20];
	t1 += -x[21];
	t1 += -x[22];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[23];
	t1 += -x[24];
	t1 += -x[25];
	t1 += -x[26];
	t1 += -x[27];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[0];
	t1 += -2.*x[3];
	t1 += x[10];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[1];
	t1 += -3.*x[4];
	t1 += x[11];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[2];
	t1 += -3.*x[5];
	t1 += x[12];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[6];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[0];
	t1 += 150.*x[13];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[1];
	t1 += 150.*x[18];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[2];
	t1 += 150.*x[23];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[3];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[4];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[5];
	c[21] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1300.;
	J[18] = 350.;
	J[25] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = -1000.;
	J[19] = 300.;
	J[27] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -1100.;
	J[20] = 300.;
	J[29] = 1.;

   /*** derivatives for constraint 4 ***/

	J[21] = -300.;
	J[26] = 1.;

   /*** derivatives for constraint 5 ***/

	J[22] = -300.;
	J[28] = 1.;

   /*** derivatives for constraint 6 ***/

	J[23] = -300.;
	J[30] = 1.;

   /*** derivatives for constraint 7 ***/

	J[9] = 1.;
	J[37] = -0.01;
	J[40] = -1.;
	J[42] = -2.;
	J[44] = -3.;
	J[46] = -4.;

   /*** derivatives for constraint 8 ***/

	J[12] = 1.;
	J[48] = -0.01;
	J[51] = -1.;
	J[53] = -2.;
	J[55] = -3.;
	J[57] = -4.;

   /*** derivatives for constraint 9 ***/

	J[15] = 1.;
	J[59] = -0.01;
	J[62] = -1.;
	J[64] = -2.;
	J[66] = -3.;
	J[68] = -4.;

   /*** derivatives for constraint 10 ***/

	J[38] = -1.;
	J[41] = -1.;
	J[43] = -1.;
	J[45] = -1.;
	J[47] = -1.;

   /*** derivatives for constraint 11 ***/

	J[49] = -1.;
	J[52] = -1.;
	J[54] = -1.;
	J[56] = -1.;
	J[58] = -1.;

   /*** derivatives for constraint 12 ***/

	J[60] = -1.;
	J[63] = -1.;
	J[65] = -1.;
	J[67] = -1.;
	J[69] = -1.;

   /*** derivatives for constraint 13 ***/

	J[1] = -1.;
	J[10] = -2.;
	J[31] = 1.;

   /*** derivatives for constraint 14 ***/

	J[4] = -1.;
	J[13] = -3.;
	J[33] = 1.;

   /*** derivatives for constraint 15 ***/

	J[7] = -1.;
	J[16] = -3.;
	J[35] = 1.;

   /*** derivatives for constraint 16 ***/

	J[24] = -1.;
	J[32] = 1.;
	J[34] = 1.;
	J[36] = 1.;

   /*** derivatives for constraint 17 ***/

	J[2] = 1.;
	J[39] = 150.;

   /*** derivatives for constraint 18 ***/

	J[5] = 1.;
	J[50] = 150.;

   /*** derivatives for constraint 19 ***/

	J[8] = 1.;
	J[61] = 150.;

   /*** derivatives for constraint 20 ***/

	J[11] = 1.;

   /*** derivatives for constraint 21 ***/

	J[14] = 1.;

   /*** derivatives for constraint 22 ***/

	J[17] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
