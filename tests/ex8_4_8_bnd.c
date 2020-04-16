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
 fint ex8_4_8_bnd_auxcom_[1] = { 30 /* nlc */ };
 fint ex8_4_8_bnd_funcom_[169] = {
	42 /* nvar */,
	1 /* nobj */,
	30 /* ncon */,
	120 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	7,
	11,
	13,
	17,
	19,
	23,
	25,
	29,
	31,
	35,
	37,
	41,
	43,
	47,
	49,
	53,
	55,
	59,
	61,
	71,
	81,
	83,
	85,
	87,
	89,
	91,
	93,
	95,
	97,
	99,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	119,
	121,

	/* rownos */
	1,
	16,
	21,
	26,
	11,
	16,
	1,
	2,
	21,
	26,
	11,
	16,
	12,
	17,
	22,
	27,
	12,
	17,
	3,
	4,
	22,
	27,
	12,
	17,
	13,
	18,
	23,
	28,
	13,
	18,
	5,
	6,
	23,
	28,
	13,
	18,
	14,
	19,
	24,
	29,
	14,
	19,
	7,
	8,
	24,
	29,
	14,
	19,
	15,
	20,
	25,
	30,
	15,
	20,
	9,
	10,
	25,
	30,
	15,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	11,
	21,
	16,
	26,
	12,
	22,
	17,
	27,
	13,
	23,
	18,
	28,
	14,
	24,
	19,
	29,
	15,
	25,
	20,
	30,
	1,
	11,
	2,
	16,
	3,
	12,
	4,
	17,
	5,
	13,
	6,
	18,
	7,
	14,
	8,
	19,
	9,
	15,
	10,
	20 };

 real ex8_4_8_bnd_boundc_[1+84+60] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.285,
		0.315,
		0.546,
		0.636,
		0.999071638557945,
		1.00092836144205,
		481.55,
		486.05,
		0.385,
		0.415,
		0.557,
		0.647,
		0.999071638557945,
		1.00092836144205,
		490.95,
		495.45,
		0.485,
		0.515,
		0.567,
		0.657,
		0.999071638557945,
		1.00092836144205,
		497.65,
		502.15,
		0.685,
		0.715,
		0.612,
		0.702,
		0.999071638557945,
		1.00092836144205,
		499.15,
		503.65,
		0.885,
		0.915,
		0.769,
		0.859,
		0.999071638557945,
		1.00092836144205,
		467.45,
		471.95,
		1.,
		2.,
		1.,
		2.,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
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
		0.,
		0.};

 real ex8_4_8_bnd_x0comn_[42] = {
		0.29015241396,
		0.62189400372,
		1.00009353307628,
		482.905120568,
		0.39376636351,
		0.57716475803,
		0.999721176860282,
		494.8032165615,
		0.48701341169,
		0.61201896021,
		1.00092486639703,
		500.254300201,
		0.71473399117,
		0.68060254203,
		0.999314298281912,
		502.0287344155,
		0.88978553592,
		0.79150724797,
		1.00031365361411,
		469.4091037145,
		1.9,
		1.6,
		1.,
		1.,
		1.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex8_4_8_bnd_pd[175];
static real ex8_4_8_bnd_old_x[42];
static int ex8_4_8_bnd_xkind = -1;

 static int
ex8_4_8_bnd_xcheck(real *x)
{
	real *x1 = ex8_4_8_bnd_old_x, *xe = x + 42;
	errno = 0;
	if (ex8_4_8_bnd_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_4_8_bnd_xkind = 0;
	return 1;
	}
 real
ex8_4_8_bnd_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (ex8_4_8_bnd_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 200. * x[0];
	v[1] = v[0] + -60.;
	v[0] = v[1] * v[1];
	ex8_4_8_bnd_pd[155] = v[1] + v[1];
	v[1] = 66.6666666666667 * x[1];
	v[2] = v[1] + -39.4;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[156] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 3231.5 * x[2];
	v[2] = v[1] + -3231.5;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[157] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 1.33333333333333 * x[3];
	v[2] = v[1] + -645.066666666667;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[158] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 200. * x[4];
	v[2] = v[1] + -80.;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[159] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 66.6666666666667 * x[5];
	v[2] = v[1] + -40.1333333333333;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[160] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 3231.5 * x[6];
	v[2] = v[1] + -3231.5;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[161] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 1.33333333333333 * x[7];
	v[2] = v[1] + -657.6;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[162] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 200. * x[8];
	v[2] = v[1] + -100.;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[163] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 66.6666666666667 * x[9];
	v[2] = v[1] + -40.8;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[164] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 3231.5 * x[10];
	v[2] = v[1] + -3231.5;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[165] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 1.33333333333333 * x[11];
	v[2] = v[1] + -666.533333333333;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[166] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 200. * x[12];
	v[2] = v[1] + -140.;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[167] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 66.6666666666667 * x[13];
	v[2] = v[1] + -43.8;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[168] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 3231.5 * x[14];
	v[2] = v[1] + -3231.5;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[169] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 1.33333333333333 * x[15];
	v[2] = v[1] + -668.533333333333;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[170] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 200. * x[16];
	v[2] = v[1] + -180.;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[171] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 66.6666666666667 * x[17];
	v[2] = v[1] + -54.2666666666667;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[172] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 3231.5 * x[18];
	v[2] = v[1] + -3231.5;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[173] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 1.33333333333333 * x[19];
	v[2] = v[1] + -626.266666666667;
	v[1] = v[2] * v[2];
	ex8_4_8_bnd_pd[174] = v[2] + v[2];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[19] = ex8_4_8_bnd_pd[174]*1.33333333333333;
	g[18] = ex8_4_8_bnd_pd[173]*3231.5;
	g[17] = ex8_4_8_bnd_pd[172]*66.6666666666667;
	g[16] = ex8_4_8_bnd_pd[171]*200.;
	g[15] = ex8_4_8_bnd_pd[170]*1.33333333333333;
	g[14] = ex8_4_8_bnd_pd[169]*3231.5;
	g[13] = ex8_4_8_bnd_pd[168]*66.6666666666667;
	g[12] = ex8_4_8_bnd_pd[167]*200.;
	g[11] = ex8_4_8_bnd_pd[166]*1.33333333333333;
	g[10] = ex8_4_8_bnd_pd[165]*3231.5;
	g[9] = ex8_4_8_bnd_pd[164]*66.6666666666667;
	g[8] = ex8_4_8_bnd_pd[163]*200.;
	g[7] = ex8_4_8_bnd_pd[162]*1.33333333333333;
	g[6] = ex8_4_8_bnd_pd[161]*3231.5;
	g[5] = ex8_4_8_bnd_pd[160]*66.6666666666667;
	g[4] = ex8_4_8_bnd_pd[159]*200.;
	g[3] = ex8_4_8_bnd_pd[158]*1.33333333333333;
	g[2] = ex8_4_8_bnd_pd[157]*3231.5;
	g[1] = ex8_4_8_bnd_pd[156]*66.6666666666667;
	g[0] = ex8_4_8_bnd_pd[155]*200.;
	}

	return v[0];
}

 void
ex8_4_8_bnd_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex8_4_8_bnd_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 323.15 * x[2];
	v[1] = v[0] + -34.29;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 3626.55 / v[1];
	ex8_4_8_bnd_pd[0] = -v[0] / v[1];
	v[1] = 18.5875 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[1] = v[0];
	t1 = v[0] + -x[32];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 323.15 * x[2];
	v[1] = v[0] + -50.22;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 2927.17 / v[1];
	ex8_4_8_bnd_pd[2] = -v[0] / v[1];
	v[1] = 16.1764 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[3] = v[0];
	t1 = v[0] + -x[33];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 323.15 * x[6];
	v[1] = v[0] + -34.29;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 3626.55 / v[1];
	ex8_4_8_bnd_pd[4] = -v[0] / v[1];
	v[1] = 18.5875 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[5] = v[0];
	t1 = v[0] + -x[34];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 323.15 * x[6];
	v[1] = v[0] + -50.22;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 2927.17 / v[1];
	ex8_4_8_bnd_pd[6] = -v[0] / v[1];
	v[1] = 16.1764 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[7] = v[0];
	t1 = v[0] + -x[35];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 323.15 * x[10];
	v[1] = v[0] + -34.29;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 3626.55 / v[1];
	ex8_4_8_bnd_pd[8] = -v[0] / v[1];
	v[1] = 18.5875 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[9] = v[0];
	t1 = v[0] + -x[36];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = 323.15 * x[10];
	v[1] = v[0] + -50.22;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 2927.17 / v[1];
	ex8_4_8_bnd_pd[10] = -v[0] / v[1];
	v[1] = 16.1764 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[11] = v[0];
	t1 = v[0] + -x[37];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = 323.15 * x[14];
	v[1] = v[0] + -34.29;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 3626.55 / v[1];
	ex8_4_8_bnd_pd[12] = -v[0] / v[1];
	v[1] = 18.5875 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[13] = v[0];
	t1 = v[0] + -x[38];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = 323.15 * x[14];
	v[1] = v[0] + -50.22;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 2927.17 / v[1];
	ex8_4_8_bnd_pd[14] = -v[0] / v[1];
	v[1] = 16.1764 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[15] = v[0];
	t1 = v[0] + -x[39];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = 323.15 * x[18];
	v[1] = v[0] + -34.29;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 3626.55 / v[1];
	ex8_4_8_bnd_pd[16] = -v[0] / v[1];
	v[1] = 18.5875 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[17] = v[0];
	t1 = v[0] + -x[40];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = 323.15 * x[18];
	v[1] = v[0] + -50.22;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = 2927.17 / v[1];
	ex8_4_8_bnd_pd[18] = -v[0] / v[1];
	v[1] = 16.1764 - v[0];
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_8_bnd_pd[19] = v[0];
	t1 = v[0] + -x[41];
	c[9] = t1;

  /***  constraint 11  ***/

	ex8_4_8_bnd_pd[20] = x[22] * x[0];
	v[0] = ex8_4_8_bnd_pd[20] * x[32];
	v[1] = x[1] * x[3];
	v[2] = v[0] - v[1];
	c[10] = v[2];

  /***  constraint 12  ***/

	ex8_4_8_bnd_pd[21] = x[24] * x[4];
	v[0] = ex8_4_8_bnd_pd[21] * x[34];
	v[1] = x[5] * x[7];
	v[2] = v[0] - v[1];
	c[11] = v[2];

  /***  constraint 13  ***/

	ex8_4_8_bnd_pd[22] = x[26] * x[8];
	v[0] = ex8_4_8_bnd_pd[22] * x[36];
	v[1] = x[9] * x[11];
	v[2] = v[0] - v[1];
	c[12] = v[2];

  /***  constraint 14  ***/

	ex8_4_8_bnd_pd[23] = x[28] * x[12];
	v[0] = ex8_4_8_bnd_pd[23] * x[38];
	v[1] = x[13] * x[15];
	v[2] = v[0] - v[1];
	c[13] = v[2];

  /***  constraint 15  ***/

	ex8_4_8_bnd_pd[24] = x[30] * x[16];
	v[0] = ex8_4_8_bnd_pd[24] * x[40];
	v[1] = x[17] * x[19];
	v[2] = v[0] - v[1];
	c[14] = v[2];

  /***  constraint 16  ***/

	ex8_4_8_bnd_pd[25] = 1. - x[0];
	ex8_4_8_bnd_pd[26] = x[23] * ex8_4_8_bnd_pd[25];
	v[1] = ex8_4_8_bnd_pd[26] * x[33];
	ex8_4_8_bnd_pd[27] = 1. - x[1];
	v[3] = ex8_4_8_bnd_pd[27] * x[3];
	v[4] = v[1] - v[3];
	c[15] = v[4];

  /***  constraint 17  ***/

	ex8_4_8_bnd_pd[28] = 1. - x[4];
	ex8_4_8_bnd_pd[29] = x[25] * ex8_4_8_bnd_pd[28];
	v[1] = ex8_4_8_bnd_pd[29] * x[35];
	ex8_4_8_bnd_pd[30] = 1. - x[5];
	v[3] = ex8_4_8_bnd_pd[30] * x[7];
	v[4] = v[1] - v[3];
	c[16] = v[4];

  /***  constraint 18  ***/

	ex8_4_8_bnd_pd[31] = 1. - x[8];
	ex8_4_8_bnd_pd[32] = x[27] * ex8_4_8_bnd_pd[31];
	v[1] = ex8_4_8_bnd_pd[32] * x[37];
	ex8_4_8_bnd_pd[33] = 1. - x[9];
	v[3] = ex8_4_8_bnd_pd[33] * x[11];
	v[4] = v[1] - v[3];
	c[17] = v[4];

  /***  constraint 19  ***/

	ex8_4_8_bnd_pd[34] = 1. - x[12];
	ex8_4_8_bnd_pd[35] = x[29] * ex8_4_8_bnd_pd[34];
	v[1] = ex8_4_8_bnd_pd[35] * x[39];
	ex8_4_8_bnd_pd[36] = 1. - x[13];
	v[3] = ex8_4_8_bnd_pd[36] * x[15];
	v[4] = v[1] - v[3];
	c[18] = v[4];

  /***  constraint 20  ***/

	ex8_4_8_bnd_pd[37] = 1. - x[16];
	ex8_4_8_bnd_pd[38] = x[31] * ex8_4_8_bnd_pd[37];
	v[1] = ex8_4_8_bnd_pd[38] * x[41];
	ex8_4_8_bnd_pd[39] = 1. - x[17];
	v[3] = ex8_4_8_bnd_pd[39] * x[19];
	v[4] = v[1] - v[3];
	c[19] = v[4];

  /***  constraint 21  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = x[20] / x[2];
	ex8_4_8_bnd_pd[40] = 1. / x[2];
	ex8_4_8_bnd_pd[41] = -v[0] * ex8_4_8_bnd_pd[40];
	if (x[21] == 0.) {
	zerdiv_(&x[21]);	}
	ex8_4_8_bnd_pd[44] = x[20] / x[21];
	ex8_4_8_bnd_pd[42] = 1. / x[21];
	ex8_4_8_bnd_pd[43] = -ex8_4_8_bnd_pd[44] * ex8_4_8_bnd_pd[42];
	v[2] = ex8_4_8_bnd_pd[44] * x[0];
	v[3] = 1. - x[0];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[2] / v[3];
	ex8_4_8_bnd_pd[45] = 1. / v[3];
	ex8_4_8_bnd_pd[46] = -v[4] * ex8_4_8_bnd_pd[45];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[47] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[48] = 1. / v[4];
	ex8_4_8_bnd_pd[49] = -v[3] * ex8_4_8_bnd_pd[48];
	v[4] = log(x[22]);
	if (errno) in_trouble("log",x[22]);
	ex8_4_8_bnd_pd[50] = 1. / x[22];
	v[0] = v[3] - v[4];
	c[20] = v[0];

  /***  constraint 22  ***/

	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[0] = x[20] / x[6];
	ex8_4_8_bnd_pd[51] = 1. / x[6];
	ex8_4_8_bnd_pd[52] = -v[0] * ex8_4_8_bnd_pd[51];
	if (x[21] == 0.) {
	zerdiv_(&x[21]);	}
	ex8_4_8_bnd_pd[55] = x[20] / x[21];
	ex8_4_8_bnd_pd[53] = 1. / x[21];
	ex8_4_8_bnd_pd[54] = -ex8_4_8_bnd_pd[55] * ex8_4_8_bnd_pd[53];
	v[2] = ex8_4_8_bnd_pd[55] * x[4];
	v[3] = 1. - x[4];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[2] / v[3];
	ex8_4_8_bnd_pd[56] = 1. / v[3];
	ex8_4_8_bnd_pd[57] = -v[4] * ex8_4_8_bnd_pd[56];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[58] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[59] = 1. / v[4];
	ex8_4_8_bnd_pd[60] = -v[3] * ex8_4_8_bnd_pd[59];
	v[4] = log(x[24]);
	if (errno) in_trouble("log",x[24]);
	ex8_4_8_bnd_pd[61] = 1. / x[24];
	v[0] = v[3] - v[4];
	c[21] = v[0];

  /***  constraint 23  ***/

	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[0] = x[20] / x[10];
	ex8_4_8_bnd_pd[62] = 1. / x[10];
	ex8_4_8_bnd_pd[63] = -v[0] * ex8_4_8_bnd_pd[62];
	if (x[21] == 0.) {
	zerdiv_(&x[21]);	}
	ex8_4_8_bnd_pd[66] = x[20] / x[21];
	ex8_4_8_bnd_pd[64] = 1. / x[21];
	ex8_4_8_bnd_pd[65] = -ex8_4_8_bnd_pd[66] * ex8_4_8_bnd_pd[64];
	v[2] = ex8_4_8_bnd_pd[66] * x[8];
	v[3] = 1. - x[8];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[2] / v[3];
	ex8_4_8_bnd_pd[67] = 1. / v[3];
	ex8_4_8_bnd_pd[68] = -v[4] * ex8_4_8_bnd_pd[67];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[69] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[70] = 1. / v[4];
	ex8_4_8_bnd_pd[71] = -v[3] * ex8_4_8_bnd_pd[70];
	v[4] = log(x[26]);
	if (errno) in_trouble("log",x[26]);
	ex8_4_8_bnd_pd[72] = 1. / x[26];
	v[0] = v[3] - v[4];
	c[22] = v[0];

  /***  constraint 24  ***/

	if (x[14] == 0.) {
	zerdiv_(&x[14]);	}
	v[0] = x[20] / x[14];
	ex8_4_8_bnd_pd[73] = 1. / x[14];
	ex8_4_8_bnd_pd[74] = -v[0] * ex8_4_8_bnd_pd[73];
	if (x[21] == 0.) {
	zerdiv_(&x[21]);	}
	ex8_4_8_bnd_pd[77] = x[20] / x[21];
	ex8_4_8_bnd_pd[75] = 1. / x[21];
	ex8_4_8_bnd_pd[76] = -ex8_4_8_bnd_pd[77] * ex8_4_8_bnd_pd[75];
	v[2] = ex8_4_8_bnd_pd[77] * x[12];
	v[3] = 1. - x[12];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[2] / v[3];
	ex8_4_8_bnd_pd[78] = 1. / v[3];
	ex8_4_8_bnd_pd[79] = -v[4] * ex8_4_8_bnd_pd[78];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[80] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[81] = 1. / v[4];
	ex8_4_8_bnd_pd[82] = -v[3] * ex8_4_8_bnd_pd[81];
	v[4] = log(x[28]);
	if (errno) in_trouble("log",x[28]);
	ex8_4_8_bnd_pd[83] = 1. / x[28];
	v[0] = v[3] - v[4];
	c[23] = v[0];

  /***  constraint 25  ***/

	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[0] = x[20] / x[18];
	ex8_4_8_bnd_pd[84] = 1. / x[18];
	ex8_4_8_bnd_pd[85] = -v[0] * ex8_4_8_bnd_pd[84];
	if (x[21] == 0.) {
	zerdiv_(&x[21]);	}
	ex8_4_8_bnd_pd[88] = x[20] / x[21];
	ex8_4_8_bnd_pd[86] = 1. / x[21];
	ex8_4_8_bnd_pd[87] = -ex8_4_8_bnd_pd[88] * ex8_4_8_bnd_pd[86];
	v[2] = ex8_4_8_bnd_pd[88] * x[16];
	v[3] = 1. - x[16];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[2] / v[3];
	ex8_4_8_bnd_pd[89] = 1. / v[3];
	ex8_4_8_bnd_pd[90] = -v[4] * ex8_4_8_bnd_pd[89];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[91] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[92] = 1. / v[4];
	ex8_4_8_bnd_pd[93] = -v[3] * ex8_4_8_bnd_pd[92];
	v[4] = log(x[30]);
	if (errno) in_trouble("log",x[30]);
	ex8_4_8_bnd_pd[94] = 1. / x[30];
	v[0] = v[3] - v[4];
	c[24] = v[0];

  /***  constraint 26  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = x[21] / x[2];
	ex8_4_8_bnd_pd[95] = 1. / x[2];
	ex8_4_8_bnd_pd[96] = -v[0] * ex8_4_8_bnd_pd[95];
	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	ex8_4_8_bnd_pd[100] = x[21] / x[20];
	ex8_4_8_bnd_pd[97] = 1. / x[20];
	ex8_4_8_bnd_pd[98] = -ex8_4_8_bnd_pd[100] * ex8_4_8_bnd_pd[97];
	ex8_4_8_bnd_pd[99] = 1. - x[0];
	v[3] = ex8_4_8_bnd_pd[100] * ex8_4_8_bnd_pd[99];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[4] = v[3] / x[0];
	ex8_4_8_bnd_pd[101] = 1. / x[0];
	ex8_4_8_bnd_pd[102] = -v[4] * ex8_4_8_bnd_pd[101];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[103] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[104] = 1. / v[4];
	ex8_4_8_bnd_pd[105] = -v[3] * ex8_4_8_bnd_pd[104];
	v[4] = log(x[23]);
	if (errno) in_trouble("log",x[23]);
	ex8_4_8_bnd_pd[106] = 1. / x[23];
	v[0] = v[3] - v[4];
	c[25] = v[0];

  /***  constraint 27  ***/

	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[0] = x[21] / x[6];
	ex8_4_8_bnd_pd[107] = 1. / x[6];
	ex8_4_8_bnd_pd[108] = -v[0] * ex8_4_8_bnd_pd[107];
	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	ex8_4_8_bnd_pd[112] = x[21] / x[20];
	ex8_4_8_bnd_pd[109] = 1. / x[20];
	ex8_4_8_bnd_pd[110] = -ex8_4_8_bnd_pd[112] * ex8_4_8_bnd_pd[109];
	ex8_4_8_bnd_pd[111] = 1. - x[4];
	v[3] = ex8_4_8_bnd_pd[112] * ex8_4_8_bnd_pd[111];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[4] = v[3] / x[4];
	ex8_4_8_bnd_pd[113] = 1. / x[4];
	ex8_4_8_bnd_pd[114] = -v[4] * ex8_4_8_bnd_pd[113];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[115] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[116] = 1. / v[4];
	ex8_4_8_bnd_pd[117] = -v[3] * ex8_4_8_bnd_pd[116];
	v[4] = log(x[25]);
	if (errno) in_trouble("log",x[25]);
	ex8_4_8_bnd_pd[118] = 1. / x[25];
	v[0] = v[3] - v[4];
	c[26] = v[0];

  /***  constraint 28  ***/

	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[0] = x[21] / x[10];
	ex8_4_8_bnd_pd[119] = 1. / x[10];
	ex8_4_8_bnd_pd[120] = -v[0] * ex8_4_8_bnd_pd[119];
	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	ex8_4_8_bnd_pd[124] = x[21] / x[20];
	ex8_4_8_bnd_pd[121] = 1. / x[20];
	ex8_4_8_bnd_pd[122] = -ex8_4_8_bnd_pd[124] * ex8_4_8_bnd_pd[121];
	ex8_4_8_bnd_pd[123] = 1. - x[8];
	v[3] = ex8_4_8_bnd_pd[124] * ex8_4_8_bnd_pd[123];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[4] = v[3] / x[8];
	ex8_4_8_bnd_pd[125] = 1. / x[8];
	ex8_4_8_bnd_pd[126] = -v[4] * ex8_4_8_bnd_pd[125];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[127] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[128] = 1. / v[4];
	ex8_4_8_bnd_pd[129] = -v[3] * ex8_4_8_bnd_pd[128];
	v[4] = log(x[27]);
	if (errno) in_trouble("log",x[27]);
	ex8_4_8_bnd_pd[130] = 1. / x[27];
	v[0] = v[3] - v[4];
	c[27] = v[0];

  /***  constraint 29  ***/

	if (x[14] == 0.) {
	zerdiv_(&x[14]);	}
	v[0] = x[21] / x[14];
	ex8_4_8_bnd_pd[131] = 1. / x[14];
	ex8_4_8_bnd_pd[132] = -v[0] * ex8_4_8_bnd_pd[131];
	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	ex8_4_8_bnd_pd[136] = x[21] / x[20];
	ex8_4_8_bnd_pd[133] = 1. / x[20];
	ex8_4_8_bnd_pd[134] = -ex8_4_8_bnd_pd[136] * ex8_4_8_bnd_pd[133];
	ex8_4_8_bnd_pd[135] = 1. - x[12];
	v[3] = ex8_4_8_bnd_pd[136] * ex8_4_8_bnd_pd[135];
	if (x[12] == 0.) {
	zerdiv_(&x[12]);	}
	v[4] = v[3] / x[12];
	ex8_4_8_bnd_pd[137] = 1. / x[12];
	ex8_4_8_bnd_pd[138] = -v[4] * ex8_4_8_bnd_pd[137];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[139] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[140] = 1. / v[4];
	ex8_4_8_bnd_pd[141] = -v[3] * ex8_4_8_bnd_pd[140];
	v[4] = log(x[29]);
	if (errno) in_trouble("log",x[29]);
	ex8_4_8_bnd_pd[142] = 1. / x[29];
	v[0] = v[3] - v[4];
	c[28] = v[0];

  /***  constraint 30  ***/

	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[0] = x[21] / x[18];
	ex8_4_8_bnd_pd[143] = 1. / x[18];
	ex8_4_8_bnd_pd[144] = -v[0] * ex8_4_8_bnd_pd[143];
	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	ex8_4_8_bnd_pd[148] = x[21] / x[20];
	ex8_4_8_bnd_pd[145] = 1. / x[20];
	ex8_4_8_bnd_pd[146] = -ex8_4_8_bnd_pd[148] * ex8_4_8_bnd_pd[145];
	ex8_4_8_bnd_pd[147] = 1. - x[16];
	v[3] = ex8_4_8_bnd_pd[148] * ex8_4_8_bnd_pd[147];
	if (x[16] == 0.) {
	zerdiv_(&x[16]);	}
	v[4] = v[3] / x[16];
	ex8_4_8_bnd_pd[149] = 1. / x[16];
	ex8_4_8_bnd_pd[150] = -v[4] * ex8_4_8_bnd_pd[149];
	v[3] = v[4] + 1.;
	v[4] = v[3] * v[3];
	ex8_4_8_bnd_pd[151] = v[3] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[0] / v[4];
	ex8_4_8_bnd_pd[152] = 1. / v[4];
	ex8_4_8_bnd_pd[153] = -v[3] * ex8_4_8_bnd_pd[152];
	v[4] = log(x[31]);
	if (errno) in_trouble("log",x[31]);
	ex8_4_8_bnd_pd[154] = 1. / x[31];
	v[0] = v[3] - v[4];
	c[29] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	ex8_4_8_bnd_pd[1] += ex8_4_8_bnd_pd[1];
	dv[0] = -ex8_4_8_bnd_pd[1]*ex8_4_8_bnd_pd[0];
	J[6] = dv[0]*323.15;
	J[100] = -1.;

   /*** derivatives for constraint 2 ***/

	ex8_4_8_bnd_pd[3] += ex8_4_8_bnd_pd[3];
	dv[0] = -ex8_4_8_bnd_pd[3]*ex8_4_8_bnd_pd[2];
	J[7] = dv[0]*323.15;
	J[102] = -1.;

   /*** derivatives for constraint 3 ***/

	ex8_4_8_bnd_pd[5] += ex8_4_8_bnd_pd[5];
	dv[0] = -ex8_4_8_bnd_pd[5]*ex8_4_8_bnd_pd[4];
	J[18] = dv[0]*323.15;
	J[104] = -1.;

   /*** derivatives for constraint 4 ***/

	ex8_4_8_bnd_pd[7] += ex8_4_8_bnd_pd[7];
	dv[0] = -ex8_4_8_bnd_pd[7]*ex8_4_8_bnd_pd[6];
	J[19] = dv[0]*323.15;
	J[106] = -1.;

   /*** derivatives for constraint 5 ***/

	ex8_4_8_bnd_pd[9] += ex8_4_8_bnd_pd[9];
	dv[0] = -ex8_4_8_bnd_pd[9]*ex8_4_8_bnd_pd[8];
	J[30] = dv[0]*323.15;
	J[108] = -1.;

   /*** derivatives for constraint 6 ***/

	ex8_4_8_bnd_pd[11] += ex8_4_8_bnd_pd[11];
	dv[0] = -ex8_4_8_bnd_pd[11]*ex8_4_8_bnd_pd[10];
	J[31] = dv[0]*323.15;
	J[110] = -1.;

   /*** derivatives for constraint 7 ***/

	ex8_4_8_bnd_pd[13] += ex8_4_8_bnd_pd[13];
	dv[0] = -ex8_4_8_bnd_pd[13]*ex8_4_8_bnd_pd[12];
	J[42] = dv[0]*323.15;
	J[112] = -1.;

   /*** derivatives for constraint 8 ***/

	ex8_4_8_bnd_pd[15] += ex8_4_8_bnd_pd[15];
	dv[0] = -ex8_4_8_bnd_pd[15]*ex8_4_8_bnd_pd[14];
	J[43] = dv[0]*323.15;
	J[114] = -1.;

   /*** derivatives for constraint 9 ***/

	ex8_4_8_bnd_pd[17] += ex8_4_8_bnd_pd[17];
	dv[0] = -ex8_4_8_bnd_pd[17]*ex8_4_8_bnd_pd[16];
	J[54] = dv[0]*323.15;
	J[116] = -1.;

   /*** derivatives for constraint 10 ***/

	ex8_4_8_bnd_pd[19] += ex8_4_8_bnd_pd[19];
	dv[0] = -ex8_4_8_bnd_pd[19]*ex8_4_8_bnd_pd[18];
	J[55] = dv[0]*323.15;
	J[118] = -1.;

   /*** derivatives for constraint 11 ***/

	J[10] = -x[1];
	J[4] = -x[3];
	J[101] = ex8_4_8_bnd_pd[20];
	J[0] = x[32]*x[22];
	J[80] = x[32]*x[0];

   /*** derivatives for constraint 12 ***/

	J[22] = -x[5];
	J[16] = -x[7];
	J[105] = ex8_4_8_bnd_pd[21];
	J[12] = x[34]*x[24];
	J[84] = x[34]*x[4];

   /*** derivatives for constraint 13 ***/

	J[34] = -x[9];
	J[28] = -x[11];
	J[109] = ex8_4_8_bnd_pd[22];
	J[24] = x[36]*x[26];
	J[88] = x[36]*x[8];

   /*** derivatives for constraint 14 ***/

	J[46] = -x[13];
	J[40] = -x[15];
	J[113] = ex8_4_8_bnd_pd[23];
	J[36] = x[38]*x[28];
	J[92] = x[38]*x[12];

   /*** derivatives for constraint 15 ***/

	J[58] = -x[17];
	J[52] = -x[19];
	J[117] = ex8_4_8_bnd_pd[24];
	J[48] = x[40]*x[30];
	J[96] = x[40]*x[16];

   /*** derivatives for constraint 16 ***/

	J[11] = -ex8_4_8_bnd_pd[27];
	J[5] = x[3];
	J[103] = ex8_4_8_bnd_pd[26];
	dv[0] = x[33]*x[23];
	J[82] = x[33]*ex8_4_8_bnd_pd[25];
	J[1] = -dv[0];

   /*** derivatives for constraint 17 ***/

	J[23] = -ex8_4_8_bnd_pd[30];
	J[17] = x[7];
	J[107] = ex8_4_8_bnd_pd[29];
	dv[0] = x[35]*x[25];
	J[86] = x[35]*ex8_4_8_bnd_pd[28];
	J[13] = -dv[0];

   /*** derivatives for constraint 18 ***/

	J[35] = -ex8_4_8_bnd_pd[33];
	J[29] = x[11];
	J[111] = ex8_4_8_bnd_pd[32];
	dv[0] = x[37]*x[27];
	J[90] = x[37]*ex8_4_8_bnd_pd[31];
	J[25] = -dv[0];

   /*** derivatives for constraint 19 ***/

	J[47] = -ex8_4_8_bnd_pd[36];
	J[41] = x[15];
	J[115] = ex8_4_8_bnd_pd[35];
	dv[0] = x[39]*x[29];
	J[94] = x[39]*ex8_4_8_bnd_pd[34];
	J[37] = -dv[0];

   /*** derivatives for constraint 20 ***/

	J[59] = -ex8_4_8_bnd_pd[39];
	J[53] = x[19];
	J[119] = ex8_4_8_bnd_pd[38];
	dv[0] = x[41]*x[31];
	J[98] = x[41]*ex8_4_8_bnd_pd[37];
	J[49] = -dv[0];

   /*** derivatives for constraint 21 ***/

	J[81] = -ex8_4_8_bnd_pd[50];
	dv[0] = ex8_4_8_bnd_pd[49]*ex8_4_8_bnd_pd[47];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[46];
	dv[0] *= ex8_4_8_bnd_pd[45];
	J[2] = -dv[1];
	J[2] += dv[0]*ex8_4_8_bnd_pd[44];
	dv[0] *= x[0];
	J[70] = dv[0]*ex8_4_8_bnd_pd[43];
	J[60] = dv[0]*ex8_4_8_bnd_pd[42];
	J[8] = ex8_4_8_bnd_pd[48]*ex8_4_8_bnd_pd[41];
	J[60] += ex8_4_8_bnd_pd[48]*ex8_4_8_bnd_pd[40];

   /*** derivatives for constraint 22 ***/

	J[85] = -ex8_4_8_bnd_pd[61];
	dv[0] = ex8_4_8_bnd_pd[60]*ex8_4_8_bnd_pd[58];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[57];
	dv[0] *= ex8_4_8_bnd_pd[56];
	J[14] = -dv[1];
	J[14] += dv[0]*ex8_4_8_bnd_pd[55];
	dv[0] *= x[4];
	J[71] = dv[0]*ex8_4_8_bnd_pd[54];
	J[61] = dv[0]*ex8_4_8_bnd_pd[53];
	J[20] = ex8_4_8_bnd_pd[59]*ex8_4_8_bnd_pd[52];
	J[61] += ex8_4_8_bnd_pd[59]*ex8_4_8_bnd_pd[51];

   /*** derivatives for constraint 23 ***/

	J[89] = -ex8_4_8_bnd_pd[72];
	dv[0] = ex8_4_8_bnd_pd[71]*ex8_4_8_bnd_pd[69];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[68];
	dv[0] *= ex8_4_8_bnd_pd[67];
	J[26] = -dv[1];
	J[26] += dv[0]*ex8_4_8_bnd_pd[66];
	dv[0] *= x[8];
	J[72] = dv[0]*ex8_4_8_bnd_pd[65];
	J[62] = dv[0]*ex8_4_8_bnd_pd[64];
	J[32] = ex8_4_8_bnd_pd[70]*ex8_4_8_bnd_pd[63];
	J[62] += ex8_4_8_bnd_pd[70]*ex8_4_8_bnd_pd[62];

   /*** derivatives for constraint 24 ***/

	J[93] = -ex8_4_8_bnd_pd[83];
	dv[0] = ex8_4_8_bnd_pd[82]*ex8_4_8_bnd_pd[80];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[79];
	dv[0] *= ex8_4_8_bnd_pd[78];
	J[38] = -dv[1];
	J[38] += dv[0]*ex8_4_8_bnd_pd[77];
	dv[0] *= x[12];
	J[73] = dv[0]*ex8_4_8_bnd_pd[76];
	J[63] = dv[0]*ex8_4_8_bnd_pd[75];
	J[44] = ex8_4_8_bnd_pd[81]*ex8_4_8_bnd_pd[74];
	J[63] += ex8_4_8_bnd_pd[81]*ex8_4_8_bnd_pd[73];

   /*** derivatives for constraint 25 ***/

	J[97] = -ex8_4_8_bnd_pd[94];
	dv[0] = ex8_4_8_bnd_pd[93]*ex8_4_8_bnd_pd[91];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[90];
	dv[0] *= ex8_4_8_bnd_pd[89];
	J[50] = -dv[1];
	J[50] += dv[0]*ex8_4_8_bnd_pd[88];
	dv[0] *= x[16];
	J[74] = dv[0]*ex8_4_8_bnd_pd[87];
	J[64] = dv[0]*ex8_4_8_bnd_pd[86];
	J[56] = ex8_4_8_bnd_pd[92]*ex8_4_8_bnd_pd[85];
	J[64] += ex8_4_8_bnd_pd[92]*ex8_4_8_bnd_pd[84];

   /*** derivatives for constraint 26 ***/

	J[83] = -ex8_4_8_bnd_pd[106];
	dv[0] = ex8_4_8_bnd_pd[105]*ex8_4_8_bnd_pd[103];
	J[3] = dv[0]*ex8_4_8_bnd_pd[102];
	dv[0] *= ex8_4_8_bnd_pd[101];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[100];
	dv[0] *= ex8_4_8_bnd_pd[99];
	J[3] -= dv[1];
	J[65] = dv[0]*ex8_4_8_bnd_pd[98];
	J[75] = dv[0]*ex8_4_8_bnd_pd[97];
	J[9] = ex8_4_8_bnd_pd[104]*ex8_4_8_bnd_pd[96];
	J[75] += ex8_4_8_bnd_pd[104]*ex8_4_8_bnd_pd[95];

   /*** derivatives for constraint 27 ***/

	J[87] = -ex8_4_8_bnd_pd[118];
	dv[0] = ex8_4_8_bnd_pd[117]*ex8_4_8_bnd_pd[115];
	J[15] = dv[0]*ex8_4_8_bnd_pd[114];
	dv[0] *= ex8_4_8_bnd_pd[113];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[112];
	dv[0] *= ex8_4_8_bnd_pd[111];
	J[15] -= dv[1];
	J[66] = dv[0]*ex8_4_8_bnd_pd[110];
	J[76] = dv[0]*ex8_4_8_bnd_pd[109];
	J[21] = ex8_4_8_bnd_pd[116]*ex8_4_8_bnd_pd[108];
	J[76] += ex8_4_8_bnd_pd[116]*ex8_4_8_bnd_pd[107];

   /*** derivatives for constraint 28 ***/

	J[91] = -ex8_4_8_bnd_pd[130];
	dv[0] = ex8_4_8_bnd_pd[129]*ex8_4_8_bnd_pd[127];
	J[27] = dv[0]*ex8_4_8_bnd_pd[126];
	dv[0] *= ex8_4_8_bnd_pd[125];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[124];
	dv[0] *= ex8_4_8_bnd_pd[123];
	J[27] -= dv[1];
	J[67] = dv[0]*ex8_4_8_bnd_pd[122];
	J[77] = dv[0]*ex8_4_8_bnd_pd[121];
	J[33] = ex8_4_8_bnd_pd[128]*ex8_4_8_bnd_pd[120];
	J[77] += ex8_4_8_bnd_pd[128]*ex8_4_8_bnd_pd[119];

   /*** derivatives for constraint 29 ***/

	J[95] = -ex8_4_8_bnd_pd[142];
	dv[0] = ex8_4_8_bnd_pd[141]*ex8_4_8_bnd_pd[139];
	J[39] = dv[0]*ex8_4_8_bnd_pd[138];
	dv[0] *= ex8_4_8_bnd_pd[137];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[136];
	dv[0] *= ex8_4_8_bnd_pd[135];
	J[39] -= dv[1];
	J[68] = dv[0]*ex8_4_8_bnd_pd[134];
	J[78] = dv[0]*ex8_4_8_bnd_pd[133];
	J[45] = ex8_4_8_bnd_pd[140]*ex8_4_8_bnd_pd[132];
	J[78] += ex8_4_8_bnd_pd[140]*ex8_4_8_bnd_pd[131];

   /*** derivatives for constraint 30 ***/

	J[99] = -ex8_4_8_bnd_pd[154];
	dv[0] = ex8_4_8_bnd_pd[153]*ex8_4_8_bnd_pd[151];
	J[51] = dv[0]*ex8_4_8_bnd_pd[150];
	dv[0] *= ex8_4_8_bnd_pd[149];
	dv[1] = dv[0]*ex8_4_8_bnd_pd[148];
	dv[0] *= ex8_4_8_bnd_pd[147];
	J[51] -= dv[1];
	J[69] = dv[0]*ex8_4_8_bnd_pd[146];
	J[79] = dv[0]*ex8_4_8_bnd_pd[145];
	J[57] = ex8_4_8_bnd_pd[152]*ex8_4_8_bnd_pd[144];
	J[79] += ex8_4_8_bnd_pd[152]*ex8_4_8_bnd_pd[143];
	}
}
#ifdef __cplusplus
	}
#endif
