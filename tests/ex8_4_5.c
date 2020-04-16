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
 fint ex8_4_5_auxcom_[1] = { 11 /* nlc */ };
 fint ex8_4_5_funcom_[77] = {
	15 /* nvar */,
	1 /* nobj */,
	11 /* ncon */,
	55 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	12,
	23,
	34,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11 };

 real ex8_4_5_boundc_[1+30+22] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-0.2892,
		0.2893,
		-0.2892,
		0.2893,
		-0.2892,
		0.2893,
		-0.2892,
		0.2893,
		0.1757,
		0.2157,
		0.1747,
		0.2147,
		0.1535,
		0.1935,
		0.14,
		0.18,
		0.0644,
		0.1044,
		0.0427,
		0.0827,
		0.0256,
		0.0656,
		0.0142,
		0.0542,
		0.0123,
		0.0523,
		0.0035,
		0.0435,
		0.0046,
		0.0446,
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

 real ex8_4_5_x0comn_[15] = {
		0.045597259173,
		0.2841704630615,
		0.1517618951595,
		-0.2135943985845,
		0.18256988528,
		0.20843066832,
		0.17551501424,
		0.15204551616,
		0.07608848468,
		0.05166211468,
		0.03959322016,
		0.04845081388,
		0.01498454892,
		0.02350842676,
		0.04452470508 };

 static real ex8_4_5_pd[44];
static real ex8_4_5_old_x[15];
static int ex8_4_5_xkind = -1;

 static int
ex8_4_5_xcheck(real *x)
{
	real *x1 = ex8_4_5_old_x, *xe = x + 15;
	errno = 0;
	if (ex8_4_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_4_5_xkind = 0;
	return 1;
	}
 real
ex8_4_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (ex8_4_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[4] + -0.1957;
	v[1] = v[0] * v[0];
	ex8_4_5_pd[33] = v[0] + v[0];
	v[0] = x[5] + -0.1947;
	v[2] = v[0] * v[0];
	ex8_4_5_pd[34] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[6] + -0.1735;
	v[0] = v[2] * v[2];
	ex8_4_5_pd[35] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[7] + -0.16;
	v[2] = v[0] * v[0];
	ex8_4_5_pd[36] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[8] + -0.0844;
	v[0] = v[2] * v[2];
	ex8_4_5_pd[37] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[9] + -0.0627;
	v[2] = v[0] * v[0];
	ex8_4_5_pd[38] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[10] + -0.0456;
	v[0] = v[2] * v[2];
	ex8_4_5_pd[39] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[11] + -0.0342;
	v[2] = v[0] * v[0];
	ex8_4_5_pd[40] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[12] + -0.0323;
	v[0] = v[2] * v[2];
	ex8_4_5_pd[41] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[13] + -0.0235;
	v[2] = v[0] * v[0];
	ex8_4_5_pd[42] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[14] + -0.0246;
	v[0] = v[2] * v[2];
	ex8_4_5_pd[43] = v[2] + v[2];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[14] = ex8_4_5_pd[43];
	g[13] = ex8_4_5_pd[42];
	g[12] = ex8_4_5_pd[41];
	g[11] = ex8_4_5_pd[40];
	g[10] = ex8_4_5_pd[39];
	g[9] = ex8_4_5_pd[38];
	g[8] = ex8_4_5_pd[37];
	g[7] = ex8_4_5_pd[36];
	g[6] = ex8_4_5_pd[35];
	g[5] = ex8_4_5_pd[34];
	g[4] = ex8_4_5_pd[33];
	}

	return v[1];
}

 void
ex8_4_5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ex8_4_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 4. * x[1];
	ex8_4_5_pd[0] = v[0] + 16.;
	v[0] = x[0] * ex8_4_5_pd[0];
	v[2] = 4. * x[2];
	v[2] += 16.;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[1] = 1. / v[2];
	ex8_4_5_pd[2] = -v[3] * ex8_4_5_pd[1];
	t1 = v[3] + -x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 2. * x[1];
	ex8_4_5_pd[3] = v[0] + 4.;
	v[0] = x[0] * ex8_4_5_pd[3];
	v[2] = 2. * x[2];
	v[2] += 4.;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[4] = 1. / v[2];
	ex8_4_5_pd[5] = -v[3] * ex8_4_5_pd[4];
	t1 = v[3] + -x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	ex8_4_5_pd[6] = x[1] + 1.;
	v[1] = x[0] * ex8_4_5_pd[6];
	v[2] = x[2] + 1.;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[1] / v[2];
	ex8_4_5_pd[7] = 1. / v[2];
	ex8_4_5_pd[8] = -v[3] * ex8_4_5_pd[7];
	t1 = v[3] + -x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 0.5 * x[1];
	ex8_4_5_pd[9] = v[0] + 0.25;
	v[0] = x[0] * ex8_4_5_pd[9];
	v[2] = 0.5 * x[2];
	v[2] += 0.25;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[10] = 1. / v[2];
	ex8_4_5_pd[11] = -v[3] * ex8_4_5_pd[10];
	t1 = v[3] + -x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 0.25 * x[1];
	ex8_4_5_pd[12] = v[0] + 0.0625;
	v[0] = x[0] * ex8_4_5_pd[12];
	v[2] = 0.25 * x[2];
	v[2] += 0.0625;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[13] = 1. / v[2];
	ex8_4_5_pd[14] = -v[3] * ex8_4_5_pd[13];
	t1 = v[3] + -x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = 0.166666666666667 * x[1];
	ex8_4_5_pd[15] = v[0] + 0.0277777777777778;
	v[0] = x[0] * ex8_4_5_pd[15];
	v[2] = 0.166666666666667 * x[2];
	v[2] += 0.0277777777777778;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[16] = 1. / v[2];
	ex8_4_5_pd[17] = -v[3] * ex8_4_5_pd[16];
	t1 = v[3] + -x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = 0.125 * x[1];
	ex8_4_5_pd[18] = v[0] + 0.015625;
	v[0] = x[0] * ex8_4_5_pd[18];
	v[2] = 0.125 * x[2];
	v[2] += 0.015625;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[19] = 1. / v[2];
	ex8_4_5_pd[20] = -v[3] * ex8_4_5_pd[19];
	t1 = v[3] + -x[10];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = 0.1 * x[1];
	ex8_4_5_pd[21] = v[0] + 0.01;
	v[0] = x[0] * ex8_4_5_pd[21];
	v[2] = 0.1 * x[2];
	v[2] += 0.01;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[22] = 1. / v[2];
	ex8_4_5_pd[23] = -v[3] * ex8_4_5_pd[22];
	t1 = v[3] + -x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = 0.0833333333333333 * x[1];
	ex8_4_5_pd[24] = v[0] + 0.00694444444444444;
	v[0] = x[0] * ex8_4_5_pd[24];
	v[2] = 0.0833333333333333 * x[2];
	v[2] += 0.00694444444444444;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[25] = 1. / v[2];
	ex8_4_5_pd[26] = -v[3] * ex8_4_5_pd[25];
	t1 = v[3] + -x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = 0.0714285714285714 * x[1];
	ex8_4_5_pd[27] = v[0] + 0.00510204081632653;
	v[0] = x[0] * ex8_4_5_pd[27];
	v[2] = 0.0714285714285714 * x[2];
	v[2] += 0.00510204081632653;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[28] = 1. / v[2];
	ex8_4_5_pd[29] = -v[3] * ex8_4_5_pd[28];
	t1 = v[3] + -x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = 0.0625 * x[1];
	ex8_4_5_pd[30] = v[0] + 0.00390625;
	v[0] = x[0] * ex8_4_5_pd[30];
	v[2] = 0.0625 * x[2];
	v[2] += 0.00390625;
	v[2] += x[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex8_4_5_pd[31] = 1. / v[2];
	ex8_4_5_pd[32] = -v[3] * ex8_4_5_pd[31];
	t1 = v[3] + -x[14];
	c[10] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[33] = ex8_4_5_pd[2];
	J[22] = ex8_4_5_pd[2]*4.;
	dv[0] = ex8_4_5_pd[1]*x[0];
	J[0] = ex8_4_5_pd[1]*ex8_4_5_pd[0];
	J[11] = dv[0]*4.;
	J[44] = -1.;

   /*** derivatives for constraint 2 ***/

	J[34] = ex8_4_5_pd[5];
	J[23] = ex8_4_5_pd[5]*2.;
	dv[0] = ex8_4_5_pd[4]*x[0];
	J[1] = ex8_4_5_pd[4]*ex8_4_5_pd[3];
	J[12] = dv[0]*2.;
	J[45] = -1.;

   /*** derivatives for constraint 3 ***/

	J[35] = ex8_4_5_pd[8];
	J[24] = ex8_4_5_pd[8];
	dv[0] = ex8_4_5_pd[7]*x[0];
	J[2] = ex8_4_5_pd[7]*ex8_4_5_pd[6];
	J[13] = dv[0];
	J[46] = -1.;

   /*** derivatives for constraint 4 ***/

	J[36] = ex8_4_5_pd[11];
	J[25] = ex8_4_5_pd[11]*0.5;
	dv[0] = ex8_4_5_pd[10]*x[0];
	J[3] = ex8_4_5_pd[10]*ex8_4_5_pd[9];
	J[14] = dv[0]*0.5;
	J[47] = -1.;

   /*** derivatives for constraint 5 ***/

	J[37] = ex8_4_5_pd[14];
	J[26] = ex8_4_5_pd[14]*0.25;
	dv[0] = ex8_4_5_pd[13]*x[0];
	J[4] = ex8_4_5_pd[13]*ex8_4_5_pd[12];
	J[15] = dv[0]*0.25;
	J[48] = -1.;

   /*** derivatives for constraint 6 ***/

	J[38] = ex8_4_5_pd[17];
	J[27] = ex8_4_5_pd[17]*0.166666666666667;
	dv[0] = ex8_4_5_pd[16]*x[0];
	J[5] = ex8_4_5_pd[16]*ex8_4_5_pd[15];
	J[16] = dv[0]*0.166666666666667;
	J[49] = -1.;

   /*** derivatives for constraint 7 ***/

	J[39] = ex8_4_5_pd[20];
	J[28] = ex8_4_5_pd[20]*0.125;
	dv[0] = ex8_4_5_pd[19]*x[0];
	J[6] = ex8_4_5_pd[19]*ex8_4_5_pd[18];
	J[17] = dv[0]*0.125;
	J[50] = -1.;

   /*** derivatives for constraint 8 ***/

	J[40] = ex8_4_5_pd[23];
	J[29] = ex8_4_5_pd[23]*0.1;
	dv[0] = ex8_4_5_pd[22]*x[0];
	J[7] = ex8_4_5_pd[22]*ex8_4_5_pd[21];
	J[18] = dv[0]*0.1;
	J[51] = -1.;

   /*** derivatives for constraint 9 ***/

	J[41] = ex8_4_5_pd[26];
	J[30] = ex8_4_5_pd[26]*0.0833333333333333;
	dv[0] = ex8_4_5_pd[25]*x[0];
	J[8] = ex8_4_5_pd[25]*ex8_4_5_pd[24];
	J[19] = dv[0]*0.0833333333333333;
	J[52] = -1.;

   /*** derivatives for constraint 10 ***/

	J[42] = ex8_4_5_pd[29];
	J[31] = ex8_4_5_pd[29]*0.0714285714285714;
	dv[0] = ex8_4_5_pd[28]*x[0];
	J[9] = ex8_4_5_pd[28]*ex8_4_5_pd[27];
	J[20] = dv[0]*0.0714285714285714;
	J[53] = -1.;

   /*** derivatives for constraint 11 ***/

	J[43] = ex8_4_5_pd[32];
	J[32] = ex8_4_5_pd[32]*0.0625;
	dv[0] = ex8_4_5_pd[31]*x[0];
	J[10] = ex8_4_5_pd[31]*ex8_4_5_pd[30];
	J[21] = dv[0]*0.0625;
	J[54] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
