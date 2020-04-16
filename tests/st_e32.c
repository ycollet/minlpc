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
 fint st_e32_auxcom_[1] = { 12 /* nlc */ };
 fint st_e32_funcom_[208] = {
	35 /* nvar */,
	1 /* nobj */,
	18 /* ncon */,
	166 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	8,
	12,
	14,
	16,
	18,
	21,
	23,
	27,
	30,
	34,
	37,
	44,
	50,
	57,
	64,
	71,
	78,
	85,
	92,
	99,
	106,
	112,
	118,
	125,
	131,
	137,
	144,
	151,
	157,
	163,
	164,
	165,
	166,
	167,

	/* rownos */
	1,
	3,
	13,
	1,
	3,
	4,
	5,
	2,
	6,
	10,
	11,
	12,
	15,
	8,
	10,
	9,
	11,
	4,
	8,
	12,
	5,
	9,
	3,
	6,
	7,
	12,
	6,
	7,
	16,
	7,
	8,
	9,
	16,
	7,
	8,
	9,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	18,
	1,
	2,
	13,
	14,
	15,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	18,
	1,
	2,
	13,
	14,
	15,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	17,
	18,
	1,
	2,
	13,
	14,
	15,
	18,
	1,
	2,
	13,
	14,
	15,
	18,
	14,
	12,
	10,
	11 };

 real st_e32_boundc_[1+70+36] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		1000.,
		1.,
		1000.,
		1.,
		100.,
		1.,
		100.,
		0.001,
		1.,
		0.001,
		1.,
		0.001,
		1.,
		0.001,
		1.,
		0.001,
		1.,
		0.001,
		10.,
		0.001,
		10.,
		-10.,
		10.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		0.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		0.,
		14.,
		1.,
		32.2,
		18.4,
		100.,
		1.4,
		14.,
		1.4,
		14.,
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
		-198.2,
		-198.2,
		0.,
		0.,
		-15.3,
		-15.3,
		0.4835,
		0.4835,
		2.,
		2.,
		2.,
		1.7e308};

 real st_e32_x0comn_[35] = {
		1.,
		1.,
		1.,
		1.,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
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
		1.,
		18.4,
		1.4,
		1.4 };

 static real st_e32_pd[45];
static real st_e32_old_x[35];
static int st_e32_xkind = -1;

 static int
st_e32_xcheck(real *x)
{
	real *x1 = st_e32_old_x, *xe = x + 35;
	errno = 0;
	if (st_e32_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e32_xkind = 0;
	return 1;
	}
 real
st_e32_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (st_e32_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	if (x[31] == 0.) {
	zerdiv_(&x[31]);	}
	v[0] = x[32] / x[31];
	st_e32_pd[43] = 1. / x[31];
	st_e32_pd[44] = -v[0] * st_e32_pd[43];
	v[1] = -v[0];
	;}

	if (wantfg & 2) {
	g[31] = -st_e32_pd[44];
	g[32] = -st_e32_pd[43];
	}

	return v[1];
}

 void
st_e32_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[37];
	real t1;
	fint wantfg = *needfg;
	if (st_e32_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.0136065 * x[12];
	v[1] = v[0] + 0.584;
	v[0] = 0.0141 * x[12];
	v[2] = 0.0189 * x[13];
	v[0] += v[2];
	v[2] = 0.0164 * x[14];
	v[0] += v[2];
	v[2] = 0.0067 * x[15];
	v[0] += v[2];
	v[2] = 0.0111 * x[16];
	v[0] += v[2];
	v[2] = 0.0105 * x[17];
	v[0] += v[2];
	v[2] = 0.0133 * x[18];
	v[0] += v[2];
	v[2] = 0.0068 * x[19];
	v[0] += v[2];
	v[2] = 0.0741 * x[20];
	v[0] += v[2];
	v[2] = 0.0204 * x[21];
	v[0] += v[2];
	v[2] = 0.0168 * x[22];
	v[0] += v[2];
	v[2] = 0.0098 * x[23];
	v[0] += v[2];
	v[2] = 0.0243 * x[24];
	v[0] += v[2];
	v[2] = 0.0295 * x[25];
	v[0] += v[2];
	v[2] = 0.013 * x[26];
	v[0] += v[2];
	v[2] = 0.0169 * x[27];
	v[0] += v[2];
	v[2] = 0.0031 * x[28];
	v[0] += v[2];
	v[2] = 0.0119 * x[29];
	v[0] += v[2];
	v[2] = 0.0019 * x[30];
	v[0] += v[2];
	v[2] = v[0] * v[0];
	st_e32_pd[0] = v[0] + v[0];
	v[0] = v[1] - v[2];
	v[2] = 0.0182385 * x[13];
	v[0] += v[2];
	v[2] = 0.015826 * x[14];
	v[0] += v[2];
	v[2] = 0.0064655 * x[15];
	v[0] += v[2];
	v[2] = 0.0107115 * x[16];
	v[0] += v[2];
	v[2] = 0.0101325 * x[17];
	v[0] += v[2];
	v[2] = 0.0128345 * x[18];
	v[0] += v[2];
	v[2] = 0.006562 * x[19];
	v[0] += v[2];
	v[2] = 0.0715065 * x[20];
	v[0] += v[2];
	v[2] = 0.02316 * x[21];
	v[0] += v[2];
	v[2] = 0.016212 * x[22];
	v[0] += v[2];
	v[2] = 0.009457 * x[23];
	v[0] += v[2];
	v[2] = 0.0234495 * x[24];
	v[0] += v[2];
	v[2] = 0.0284675 * x[25];
	v[0] += v[2];
	v[2] = 0.012545 * x[26];
	v[0] += v[2];
	v[2] = 0.0163085 * x[27];
	v[0] += v[2];
	v[2] = 0.0029915 * x[28];
	v[0] += v[2];
	v[2] = 0.0114835 * x[29];
	v[0] += v[2];
	v[2] = 0.0018335 * x[30];
	v[0] += v[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = x[0] / v[0];
	st_e32_pd[1] = 1. / v[0];
	st_e32_pd[2] = -v[2] * st_e32_pd[1];
	v[0] = -v[2];
	t1 = v[0] + x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.014 * x[12];
	v[0] += 0.113;
	v[1] = 0.0096 * x[13];
	v[0] += v[1];
	v[1] = 0.0044 * x[14];
	v[0] += v[1];
	v[1] = -0.0011 * x[15];
	v[0] += v[1];
	v[1] = 0.0089 * x[16];
	v[0] += v[1];
	v[1] = 0.0081 * x[17];
	v[0] += v[1];
	v[1] = -0.0025 * x[18];
	v[0] += v[1];
	v[1] = 0.0066 * x[19];
	v[0] += v[1];
	v[1] = -0.0048 * x[20];
	v[0] += v[1];
	v[1] = -0.012 * x[21];
	v[0] += v[1];
	v[1] = 0.0017 * x[22];
	v[0] += v[1];
	v[1] = -0.0016 * x[23];
	v[0] += v[1];
	v[1] = -0.0013 * x[24];
	v[0] += v[1];
	v[1] = -0.0013 * x[25];
	v[0] += v[1];
	v[1] = -0.005 * x[26];
	v[0] += v[1];
	v[1] = -0.0042 * x[27];
	v[0] += v[1];
	v[1] = -0.002 * x[28];
	v[0] += v[1];
	v[1] = -0.0017 * x[29];
	v[0] += v[1];
	v[1] = -0.0019 * x[30];
	v[0] += v[1];
	v[1] = v[0] * v[0];
	st_e32_pd[3] = v[0] + v[0];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = -1. / v[1];
	st_e32_pd[4] = -v[0] / v[1];
	t1 = v[0] + x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = x[0] / x[1];
	st_e32_pd[5] = 1. / x[1];
	st_e32_pd[6] = -v[0] * st_e32_pd[5];
	v[1] = -v[0];
	t1 = v[1] + x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = -272.04 / x[1];
	st_e32_pd[7] = -v[0] / x[1];
	t1 = v[0] + x[6];
	c[3] = t1;

  /***  constraint 5  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = -316.48 / x[1];
	st_e32_pd[8] = -v[0] / x[1];
	t1 = v[0] + x[7];
	c[4] = t1;

  /***  constraint 6  ***/

	st_e32_pd[9] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	st_e32_pd[10] = 1. / x[2];
	v[0] = st_e32_pd[9] * x[8];
	v[1] = 1. - x[8];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	st_e32_pd[11] = 1. / v[1];
	st_e32_pd[12] = -v[2] * st_e32_pd[11];
	v[1] = -v[2];
	t1 = v[1] + x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	st_e32_pd[13] = x[8] + 1.;
	v[1] = st_e32_pd[13] * x[10];
	v[2] = x[9] - v[1];
	v[1] = x[8] + 3.;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[3] = v[2] / v[1];
	st_e32_pd[14] = 1. / v[1];
	st_e32_pd[15] = -v[3] * st_e32_pd[14];
	v[1] = 1. - x[8];
	v[2] = v[1] * v[1];
	st_e32_pd[16] = v[1] + v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[3] / v[2];
	st_e32_pd[17] = 1. / v[2];
	st_e32_pd[18] = -v[1] * st_e32_pd[17];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[2] = v[1] / x[10];
	st_e32_pd[19] = 1. / x[10];
	st_e32_pd[20] = -v[2] * st_e32_pd[19];
	v[1] = -v[2];
	t1 = v[1] + x[11];
	c[6] = t1;

  /***  constraint 8  ***/

	st_e32_pd[21] = x[6] + 3.;
	st_e32_pd[22] = x[11] * st_e32_pd[21];
	v[1] = 1. - x[6];
	st_e32_pd[24] = pow(v[1], 3.);
	if (errno) in_trouble2("pow",v[1],3.);
	if (v[1] != 0.) {
	st_e32_pd[23] = 3.*(v[1]*v[1]);
	} else {
	st_e32_pd[23] = 0.;
	}
	v[1] = st_e32_pd[22] * st_e32_pd[24];
	v[3] = v[1] + 1.;
	v[1] = x[6] * x[6];
	st_e32_pd[25] = x[6] + x[6];
	st_e32_pd[26] = v[3] - v[1];
	v[1] = st_e32_pd[26] * x[10];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[3] = v[1] / x[6];
	st_e32_pd[27] = 1. / x[6];
	st_e32_pd[28] = -v[3] * st_e32_pd[27];
	v[1] = -v[3];
	v[3] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	st_e32_pd[29] = v[3];
	v[1] = -v[3];
	t1 = v[1] + x[4];
	c[7] = t1;

  /***  constraint 9  ***/

	st_e32_pd[30] = x[7] + 3.;
	st_e32_pd[31] = x[11] * st_e32_pd[30];
	v[1] = 1. - x[7];
	st_e32_pd[33] = pow(v[1], 3.);
	if (errno) in_trouble2("pow",v[1],3.);
	if (v[1] != 0.) {
	st_e32_pd[32] = 3.*(v[1]*v[1]);
	} else {
	st_e32_pd[32] = 0.;
	}
	v[1] = st_e32_pd[31] * st_e32_pd[33];
	v[3] = v[1] + 1.;
	v[1] = x[7] * x[7];
	st_e32_pd[34] = x[7] + x[7];
	st_e32_pd[35] = v[3] - v[1];
	v[1] = st_e32_pd[35] * x[10];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[3] = v[1] / x[7];
	st_e32_pd[36] = 1. / x[7];
	st_e32_pd[37] = -v[3] * st_e32_pd[36];
	v[1] = -v[3];
	v[3] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	st_e32_pd[38] = v[3];
	v[1] = -v[3];
	t1 = v[1] + x[5];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[4] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[33];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[5] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[34];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = 1. - x[6];
	v[1] = 1. - x[8];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	st_e32_pd[39] = 1. / v[1];
	st_e32_pd[40] = -v[2] * st_e32_pd[39];
	st_e32_pd[42] = pow(v[2], 0.38);
	if (errno) in_trouble2("pow",v[2],0.38);
	if (v[2] > 0.) {
	st_e32_pd[41] = 0.38*(st_e32_pd[42]/v[2]);
	} else if (0.38 > 1.) {
	st_e32_pd[41] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.38);
	}
	v[2] = st_e32_pd[42] * x[3];
	v[0] = -v[2];
	t1 = v[0] + x[32];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[0];
	t1 += 23.58*x[12];
	t1 += 22.88*x[13];
	t1 += 21.74*x[14];
	t1 += 18.25*x[15];
	t1 += -0.03*x[16];
	t1 += 38.13*x[17];
	t1 += 66.86*x[18];
	t1 += 93.84*x[19];
	t1 += 92.88*x[20];
	t1 += 76.34*x[21];
	t1 += 22.42*x[22];
	t1 += 31.22*x[23];
	t1 += 73.23*x[24];
	t1 += 50.17*x[25];
	t1 += 52.82*x[26];
	t1 += 11.74*x[27];
	t1 += 63.56*x[28];
	t1 += 68.78*x[29];
	t1 += 52.1*x[30];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 8.8*x[12];
	t1 += 7.26*x[13];
	t1 += 5.*x[14];
	t1 += 1.76*x[15];
	t1 += 4.*x[16];
	t1 += 8.6*x[17];
	t1 += 9.*x[18];
	t1 += 8.6*x[19];
	t1 += 10.7*x[20];
	t1 += 10.7*x[21];
	t1 += 8.4*x[22];
	t1 += 8.4*x[23];
	t1 += 14.*x[24];
	t1 += 10.5*x[25];
	t1 += 10.5*x[26];
	t1 += 7.5*x[27];
	t1 += 10.7*x[28];
	t1 += 8.*x[29];
	t1 += 8.*x[30];
	t1 += -x[31];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[3];
	t1 += 2.373*x[12];
	t1 += 2.226*x[13];
	t1 += 1.691*x[14];
	t1 += 0.636*x[15];
	t1 += -0.67*x[16];
	t1 += 4.532*x[17];
	t1 += 6.582*x[18];
	t1 += 9.52*x[19];
	t1 += 16.826*x[20];
	t1 += 12.499*x[21];
	t1 += 2.41*x[22];
	t1 += 4.682*x[23];
	t1 += 10.788*x[24];
	t1 += 6.436*x[25];
	t1 += 6.93*x[26];
	t1 += 1.896*x[27];
	t1 += 6.884*x[28];
	t1 += 6.817*x[29];
	t1 += 5.984*x[30];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -0.4605*x[9];
	t1 += x[10];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[12];
	t1 += -x[14];
	t1 += -2.*x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	t1 += x[24];
	t1 += -x[27];
	t1 += x[28];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	c[17] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -st_e32_pd[1];
	dv[0] = -st_e32_pd[2];
	J[156] = dv[0]*0.0018335;
	dv[1] = -st_e32_pd[2];
	J[150] = dv[1]*0.0114835;
	dv[2] = -st_e32_pd[2];
	J[143] = dv[2]*0.0029915;
	dv[3] = -st_e32_pd[2];
	J[136] = dv[3]*0.0163085;
	dv[4] = -st_e32_pd[2];
	J[130] = dv[4]*0.012545;
	dv[5] = -st_e32_pd[2];
	J[124] = dv[5]*0.0284675;
	dv[6] = -st_e32_pd[2];
	J[117] = dv[6]*0.0234495;
	dv[7] = -st_e32_pd[2];
	J[111] = dv[7]*0.009457;
	dv[8] = -st_e32_pd[2];
	J[105] = dv[8]*0.016212;
	dv[9] = -st_e32_pd[2];
	J[98] = dv[9]*0.02316;
	dv[10] = -st_e32_pd[2];
	J[91] = dv[10]*0.0715065;
	dv[11] = -st_e32_pd[2];
	J[84] = dv[11]*0.006562;
	dv[12] = -st_e32_pd[2];
	J[77] = dv[12]*0.0128345;
	dv[13] = -st_e32_pd[2];
	J[70] = dv[13]*0.0101325;
	dv[14] = -st_e32_pd[2];
	J[63] = dv[14]*0.0107115;
	dv[15] = -st_e32_pd[2];
	J[56] = dv[15]*0.0064655;
	dv[16] = -st_e32_pd[2];
	J[49] = dv[16]*0.015826;
	dv[17] = -st_e32_pd[2];
	J[43] = dv[17]*0.0182385;
	dv[18] = st_e32_pd[2];
	dv[18] *= st_e32_pd[0];
	dv[19] = dv[18];
	J[156] += dv[19]*0.0019;
	dv[20] = dv[18];
	J[150] += dv[20]*0.0119;
	dv[21] = dv[18];
	J[143] += dv[21]*0.0031;
	dv[22] = dv[18];
	J[136] += dv[22]*0.0169;
	dv[23] = dv[18];
	J[130] += dv[23]*0.013;
	dv[24] = dv[18];
	J[124] += dv[24]*0.0295;
	dv[25] = dv[18];
	J[117] += dv[25]*0.0243;
	dv[26] = dv[18];
	J[111] += dv[26]*0.0098;
	dv[27] = dv[18];
	J[105] += dv[27]*0.0168;
	dv[28] = dv[18];
	J[98] += dv[28]*0.0204;
	dv[29] = dv[18];
	J[91] += dv[29]*0.0741;
	dv[30] = dv[18];
	J[84] += dv[30]*0.0068;
	dv[31] = dv[18];
	J[77] += dv[31]*0.0133;
	dv[32] = dv[18];
	J[70] += dv[32]*0.0105;
	dv[33] = dv[18];
	J[63] += dv[33]*0.0111;
	dv[34] = dv[18];
	J[56] += dv[34]*0.0067;
	dv[35] = dv[18];
	J[49] += dv[35]*0.0164;
	dv[36] = dv[18];
	J[43] += dv[36]*0.0189;
	J[36] = dv[18]*0.0141;
	J[36] -= st_e32_pd[2]*0.0136065;
	J[3] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = st_e32_pd[4]*st_e32_pd[3];
	dv[1] = dv[0];
	J[157] = -dv[1]*0.0019;
	dv[2] = dv[0];
	J[151] = -dv[2]*0.0017;
	dv[3] = dv[0];
	J[144] = -dv[3]*0.002;
	dv[4] = dv[0];
	J[137] = -dv[4]*0.0042;
	dv[5] = dv[0];
	J[131] = -dv[5]*0.005;
	dv[6] = dv[0];
	J[125] = -dv[6]*0.0013;
	dv[7] = dv[0];
	J[118] = -dv[7]*0.0013;
	dv[8] = dv[0];
	J[112] = -dv[8]*0.0016;
	dv[9] = dv[0];
	J[106] = dv[9]*0.0017;
	dv[10] = dv[0];
	J[99] = -dv[10]*0.012;
	dv[11] = dv[0];
	J[92] = -dv[11]*0.0048;
	dv[12] = dv[0];
	J[85] = dv[12]*0.0066;
	dv[13] = dv[0];
	J[78] = -dv[13]*0.0025;
	dv[14] = dv[0];
	J[71] = dv[14]*0.0081;
	dv[15] = dv[0];
	J[64] = dv[15]*0.0089;
	dv[16] = dv[0];
	J[57] = -dv[16]*0.0011;
	dv[17] = dv[0];
	J[50] = dv[17]*0.0044;
	dv[18] = dv[0];
	J[44] = dv[18]*0.0096;
	J[37] = dv[0]*0.014;
	J[7] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = -st_e32_pd[6];
	J[1] = -st_e32_pd[5];
	J[22] = 1.;

   /*** derivatives for constraint 4 ***/

	J[5] = st_e32_pd[7];
	J[17] = 1.;

   /*** derivatives for constraint 5 ***/

	J[6] = st_e32_pd[8];
	J[20] = 1.;

   /*** derivatives for constraint 6 ***/

	J[23] = st_e32_pd[12];
	J[23] -= st_e32_pd[11]*st_e32_pd[9];
	dv[0] = -st_e32_pd[11]*x[8];
	J[8] = dv[0]*st_e32_pd[10];
	J[26] = 1.;

   /*** derivatives for constraint 7 ***/

	J[29] = -st_e32_pd[20];
	dv[0] = -st_e32_pd[19]*st_e32_pd[18];
	dv[1] = -st_e32_pd[19]*st_e32_pd[17];
	dv[0] *= st_e32_pd[16];
	J[24] = -dv[0];
	dv[2] = dv[1]*st_e32_pd[15];
	dv[1] *= st_e32_pd[14];
	J[24] += dv[2];
	dv[3] = -dv[1];
	J[27] = dv[1];
	J[29] += dv[3]*st_e32_pd[13];
	dv[3] *= x[10];
	J[24] += dv[3];
	J[33] = 1.;

   /*** derivatives for constraint 8 ***/

	st_e32_pd[29] += st_e32_pd[29];
	J[18] = st_e32_pd[29]*st_e32_pd[28];
	dv[0] = st_e32_pd[29]*st_e32_pd[27];
	J[30] = dv[0]*st_e32_pd[26];
	dv[0] *= x[10];
	dv[1] = -dv[0];
	J[18] += dv[1]*st_e32_pd[25];
	dv[2] = dv[0]*st_e32_pd[22];
	dv[0] *= st_e32_pd[24];
	dv[2] *= st_e32_pd[23];
	J[18] -= dv[2];
	dv[3] = dv[0]*x[11];
	J[34] = dv[0]*st_e32_pd[21];
	J[18] += dv[3];
	J[13] = 1.;

   /*** derivatives for constraint 9 ***/

	st_e32_pd[38] += st_e32_pd[38];
	J[21] = st_e32_pd[38]*st_e32_pd[37];
	dv[0] = st_e32_pd[38]*st_e32_pd[36];
	J[31] = dv[0]*st_e32_pd[35];
	dv[0] *= x[10];
	dv[1] = -dv[0];
	J[21] += dv[1]*st_e32_pd[34];
	dv[2] = dv[0]*st_e32_pd[31];
	dv[0] *= st_e32_pd[33];
	dv[2] *= st_e32_pd[32];
	J[21] -= dv[2];
	dv[3] = dv[0]*x[11];
	J[35] = dv[0]*st_e32_pd[30];
	J[21] += dv[3];
	J[15] = 1.;

   /*** derivatives for constraint 10 ***/

	J[9] = -x[4];
	J[14] = -x[2];
	J[164] = 1.;

   /*** derivatives for constraint 11 ***/

	J[10] = -x[5];
	J[16] = -x[2];
	J[165] = 1.;

   /*** derivatives for constraint 12 ***/

	J[11] = -st_e32_pd[42];
	dv[0] = -x[3]*st_e32_pd[41];
	dv[1] = dv[0]*st_e32_pd[40];
	dv[0] *= st_e32_pd[39];
	J[25] = -dv[1];
	J[19] = -dv[0];
	J[163] = 1.;

   /*** derivatives for constraint 13 ***/

	J[2] = -1.;
	J[38] = 23.58;
	J[45] = 22.88;
	J[51] = 21.74;
	J[58] = 18.25;
	J[65] = -0.03;
	J[72] = 38.13;
	J[79] = 66.86;
	J[86] = 93.84;
	J[93] = 92.88;
	J[100] = 76.34;
	J[107] = 22.42;
	J[113] = 31.22;
	J[119] = 73.23;
	J[126] = 50.17;
	J[132] = 52.82;
	J[138] = 11.74;
	J[145] = 63.56;
	J[152] = 68.78;
	J[158] = 52.1;

   /*** derivatives for constraint 14 ***/

	J[39] = 8.8;
	J[46] = 7.26;
	J[52] = 5.;
	J[59] = 1.76;
	J[66] = 4.;
	J[73] = 8.6;
	J[80] = 9.;
	J[87] = 8.6;
	J[94] = 10.7;
	J[101] = 10.7;
	J[108] = 8.4;
	J[114] = 8.4;
	J[120] = 14.;
	J[127] = 10.5;
	J[133] = 10.5;
	J[139] = 7.5;
	J[146] = 10.7;
	J[153] = 8.;
	J[159] = 8.;
	J[162] = -1.;

   /*** derivatives for constraint 15 ***/

	J[12] = -1.;
	J[40] = 2.373;
	J[47] = 2.226;
	J[53] = 1.691;
	J[60] = 0.636;
	J[67] = -0.67;
	J[74] = 4.532;
	J[81] = 6.582;
	J[88] = 9.52;
	J[95] = 16.826;
	J[102] = 12.499;
	J[109] = 2.41;
	J[115] = 4.682;
	J[121] = 10.788;
	J[128] = 6.436;
	J[134] = 6.93;
	J[140] = 1.896;
	J[147] = 6.884;
	J[154] = 6.817;
	J[160] = 5.984;

   /*** derivatives for constraint 16 ***/

	J[28] = -0.4605;
	J[32] = 1.;

   /*** derivatives for constraint 17 ***/

	J[41] = 1.;
	J[54] = -1.;
	J[61] = -2.;
	J[68] = 1.;
	J[75] = 1.;
	J[82] = 1.;
	J[89] = 1.;
	J[96] = 1.;
	J[103] = 1.;
	J[122] = 1.;
	J[141] = -1.;
	J[148] = 1.;

   /*** derivatives for constraint 18 ***/

	J[42] = 1.;
	J[48] = 1.;
	J[55] = 1.;
	J[62] = 1.;
	J[69] = 1.;
	J[76] = 1.;
	J[83] = 1.;
	J[90] = 1.;
	J[97] = 1.;
	J[104] = 1.;
	J[110] = 1.;
	J[116] = 1.;
	J[123] = 1.;
	J[129] = 1.;
	J[135] = 1.;
	J[142] = 1.;
	J[149] = 1.;
	J[155] = 1.;
	J[161] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif