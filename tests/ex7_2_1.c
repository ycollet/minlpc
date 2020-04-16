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
 fint ex7_2_1_auxcom_[1] = { 12 /* nlc */ };
 fint ex7_2_1_funcom_[54] = {
	7 /* nvar */,
	1 /* nobj */,
	14 /* ncon */,
	40 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	17,
	21,
	27,
	31,
	37,
	41,

	/* rownos */
	1,
	2,
	8,
	11,
	12,
	14,
	1,
	2,
	5,
	6,
	8,
	9,
	10,
	11,
	12,
	14,
	3,
	4,
	7,
	13,
	1,
	2,
	3,
	4,
	11,
	12,
	5,
	6,
	9,
	10,
	3,
	4,
	5,
	6,
	9,
	10,
	5,
	6,
	7,
	13 };

 real ex7_2_1_boundc_[1+14+28] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1500.,
		2000.,
		3000.,
		3500.,
		90.,
		95.,
		3.,
		12.,
		1.,
		120.,
		85.,
		93.,
		145.,
		162.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real ex7_2_1_x0comn_[7] = {
		1500.,
		3000.,
		90.,
		3.,
		1.,
		85.,
		145. };

 static real ex7_2_1_pd[63];
static real ex7_2_1_old_x[7];
static int ex7_2_1_xkind = -1;

 static int
ex7_2_1_xcheck(real *x)
{
	real *x1 = ex7_2_1_old_x, *xe = x + 7;
	errno = 0;
	if (ex7_2_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_2_1_xkind = 0;
	return 1;
	}
 real
ex7_2_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (ex7_2_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex7_2_1_pd[61] = 0.035 * x[0];
	v[0] = ex7_2_1_pd[61] * x[3];
	ex7_2_1_pd[62] = 0.063 * x[1];
	v[1] = ex7_2_1_pd[62] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	v[0] += 3000.;
	rv = v[0] + 1.715*x[0];
	rv += 4.0565*x[1];
	rv += 10.*x[4];
	;}

	if (wantfg & 2) {
	g[2] = -ex7_2_1_pd[62];
	g[1] = -x[2]*0.063 + 4.0565;
	g[3] = ex7_2_1_pd[61];
	g[0] = x[3]*0.035 + 1.715;
	g[4] = 10.;
	}

	return rv;
}

 void
ex7_2_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex7_2_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex7_2_1_pd[0] = x[3] * x[3];
	ex7_2_1_pd[1] = x[3] + x[3];
	v[0] = 0.0059553571 * ex7_2_1_pd[0];
	v[1] = 0.88392857 * x[1];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[2] = v[1] / x[0];
	ex7_2_1_pd[2] = 1. / x[0];
	ex7_2_1_pd[3] = -v[2] * ex7_2_1_pd[2];
	v[1] = v[0] + v[2];
	t1 = v[1] + -0.1175625*x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 1.1088 * x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	ex7_2_1_pd[4] = 1. / x[1];
	ex7_2_1_pd[5] = -v[1] * ex7_2_1_pd[4];
	v[0] = 0.1303533 * x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	ex7_2_1_pd[8] = v[0] / x[1];
	ex7_2_1_pd[6] = 1. / x[1];
	ex7_2_1_pd[7] = -ex7_2_1_pd[8] * ex7_2_1_pd[6];
	v[0] = ex7_2_1_pd[8] * x[3];
	v[1] += v[0];
	v[0] = 0.0066033 * x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	ex7_2_1_pd[13] = v[0] / x[1];
	ex7_2_1_pd[9] = 1. / x[1];
	ex7_2_1_pd[10] = -ex7_2_1_pd[13] * ex7_2_1_pd[9];
	ex7_2_1_pd[11] = x[3] * x[3];
	ex7_2_1_pd[12] = x[3] + x[3];
	v[0] = ex7_2_1_pd[13] * ex7_2_1_pd[11];
	v[4] = -v[0];
	v[1] += v[4];
	c[1] = v[1];

  /***  constraint 3  ***/

	ex7_2_1_pd[14] = x[3] * x[3];
	ex7_2_1_pd[15] = x[3] + x[3];
	v[0] = 0.00066173269 * ex7_2_1_pd[14];
	t1 = v[0] + 0.017239878*x[2];
	t1 += -0.019120592*x[3];
	t1 += -0.0056595559*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 56.85075 / x[2];
	ex7_2_1_pd[16] = -v[0] / x[2];
	v[1] = 1.08702 * x[3];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[2] = v[1] / x[2];
	ex7_2_1_pd[17] = 1. / x[2];
	ex7_2_1_pd[18] = -v[2] * ex7_2_1_pd[17];
	v[0] += v[2];
	v[2] = 0.32175 * x[5];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[1] = v[2] / x[2];
	ex7_2_1_pd[19] = 1. / x[2];
	ex7_2_1_pd[20] = -v[1] * ex7_2_1_pd[19];
	v[0] += v[1];
	ex7_2_1_pd[21] = x[3] * x[3];
	ex7_2_1_pd[22] = x[3] + x[3];
	v[1] = 0.03762 * ex7_2_1_pd[21];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[2] = v[1] / x[2];
	ex7_2_1_pd[23] = 1. / x[2];
	ex7_2_1_pd[24] = -v[2] * ex7_2_1_pd[23];
	v[1] = -v[2];
	v[0] += v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = 2462.3121 * x[4];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	ex7_2_1_pd[25] = 1. / x[1];
	ex7_2_1_pd[26] = -v[1] * ex7_2_1_pd[25];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[0] = v[1] / x[5];
	ex7_2_1_pd[27] = 1. / x[5];
	ex7_2_1_pd[28] = -v[0] * ex7_2_1_pd[27];
	v[1] = 25.125634 * x[4];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[2] = v[1] / x[1];
	ex7_2_1_pd[29] = 1. / x[1];
	ex7_2_1_pd[30] = -v[2] * ex7_2_1_pd[29];
	v[1] = v[0] - v[2];
	t1 = v[1] + 0.006198*x[6];
	c[4] = t1;

  /***  constraint 6  ***/

	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[0] = 161.18996 / x[6];
	ex7_2_1_pd[31] = -v[0] / x[6];
	v[1] = 5000. * x[4];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[2] = v[1] / x[1];
	ex7_2_1_pd[32] = 1. / x[1];
	ex7_2_1_pd[33] = -v[2] * ex7_2_1_pd[32];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[2] / x[6];
	ex7_2_1_pd[34] = 1. / x[6];
	ex7_2_1_pd[35] = -v[1] * ex7_2_1_pd[34];
	v[0] += v[1];
	v[1] = 489510. * x[4];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[2] = v[1] / x[1];
	ex7_2_1_pd[36] = 1. / x[1];
	ex7_2_1_pd[37] = -v[2] * ex7_2_1_pd[36];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[1] = v[2] / x[5];
	ex7_2_1_pd[38] = 1. / x[5];
	ex7_2_1_pd[39] = -v[1] * ex7_2_1_pd[38];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[2] = v[1] / x[6];
	ex7_2_1_pd[40] = 1. / x[6];
	ex7_2_1_pd[41] = -v[2] * ex7_2_1_pd[40];
	v[1] = -v[2];
	v[0] += v[1];
	c[5] = v[0];

  /***  constraint 7  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 44.333333 / x[2];
	ex7_2_1_pd[42] = -v[0] / x[2];
	v[1] = 0.33 * x[6];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[2] = v[1] / x[2];
	ex7_2_1_pd[43] = 1. / x[2];
	ex7_2_1_pd[44] = -v[2] * ex7_2_1_pd[43];
	v[1] = v[0] + v[2];
	c[6] = v[1];

  /***  constraint 8  ***/

	v[0] = 0.819672 * x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	ex7_2_1_pd[45] = 1. / x[1];
	ex7_2_1_pd[46] = -v[1] * ex7_2_1_pd[45];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 0.819672 / x[1];
	ex7_2_1_pd[47] = -v[0] / x[1];
	v[2] = v[1] + v[0];
	c[7] = v[2];

  /***  constraint 9  ***/

	v[0] = 24500. * x[4];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	ex7_2_1_pd[48] = 1. / x[1];
	ex7_2_1_pd[49] = -v[1] * ex7_2_1_pd[48];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[0] = v[1] / x[5];
	ex7_2_1_pd[50] = 1. / x[5];
	ex7_2_1_pd[51] = -v[0] * ex7_2_1_pd[50];
	v[1] = 250. * x[4];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[2] = v[1] / x[1];
	ex7_2_1_pd[52] = 1. / x[1];
	ex7_2_1_pd[53] = -v[2] * ex7_2_1_pd[52];
	v[1] = v[0] - v[2];
	c[8] = v[1];

  /***  constraint 10  ***/

	v[0] = 1.2244898e-05 * x[1];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	ex7_2_1_pd[56] = v[0] / x[4];
	ex7_2_1_pd[54] = 1. / x[4];
	ex7_2_1_pd[55] = -ex7_2_1_pd[56] * ex7_2_1_pd[54];
	v[0] = ex7_2_1_pd[56] * x[5];
	t1 = v[0] + 0.010204082*x[5];
	c[9] = t1;

  /***  constraint 11  ***/

	ex7_2_1_pd[57] = 6.25e-05 * x[0];
	v[0] = ex7_2_1_pd[57] * x[3];
	t1 = v[0] + 6.25e-05*x[0];
	t1 += -7.625e-05*x[1];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = 1.22 * x[1];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[1] = v[0] / x[0];
	ex7_2_1_pd[58] = 1. / x[0];
	ex7_2_1_pd[59] = -v[1] * ex7_2_1_pd[58];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 1. / x[0];
	ex7_2_1_pd[60] = -v[0] / x[0];
	v[2] = v[1] + v[0];
	t1 = v[2] + -x[3];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 0.022556*x[2];
	t1 += -0.007595*x[6];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -0.0005*x[0];
	t1 += 0.00061*x[1];
	c[13] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = ex7_2_1_pd[3];
	J[6] = ex7_2_1_pd[2]*0.88392857;
	J[20] = 0.0059553571*ex7_2_1_pd[1] + -0.1175625;

   /*** derivatives for constraint 2 ***/

	J[21] = -ex7_2_1_pd[13]*ex7_2_1_pd[12];
	J[7] = -ex7_2_1_pd[11]*ex7_2_1_pd[10];
	dv[0] = -ex7_2_1_pd[11]*ex7_2_1_pd[9];
	J[1] = dv[0]*0.0066033;
	J[21] += ex7_2_1_pd[8];
	J[7] += x[3]*ex7_2_1_pd[7];
	dv[1] = x[3]*ex7_2_1_pd[6];
	J[1] += dv[1]*0.1303533;
	J[7] += ex7_2_1_pd[5];
	J[1] += ex7_2_1_pd[4]*1.1088;

   /*** derivatives for constraint 3 ***/

	J[22] = 0.00066173269*ex7_2_1_pd[15] + -0.019120592;
	J[16] = 0.017239878;
	J[30] = -0.0056595559;

   /*** derivatives for constraint 4 ***/

	J[17] = -ex7_2_1_pd[24];
	dv[0] = -ex7_2_1_pd[23]*0.03762;
	J[23] = dv[0]*ex7_2_1_pd[22];
	J[17] += ex7_2_1_pd[20];
	J[31] = ex7_2_1_pd[19]*0.32175;
	J[17] += ex7_2_1_pd[18];
	J[23] += ex7_2_1_pd[17]*1.08702;
	J[17] += ex7_2_1_pd[16];

   /*** derivatives for constraint 5 ***/

	J[8] = -ex7_2_1_pd[30];
	J[26] = -ex7_2_1_pd[29]*25.125634;
	J[32] = ex7_2_1_pd[28];
	J[8] += ex7_2_1_pd[27]*ex7_2_1_pd[26];
	dv[0] = ex7_2_1_pd[27]*ex7_2_1_pd[25];
	J[26] += dv[0]*2462.3121;
	J[36] = 0.006198;

   /*** derivatives for constraint 6 ***/

	J[37] = -ex7_2_1_pd[41];
	J[33] = -ex7_2_1_pd[40]*ex7_2_1_pd[39];
	dv[0] = -ex7_2_1_pd[40]*ex7_2_1_pd[38];
	J[9] = dv[0]*ex7_2_1_pd[37];
	dv[0] *= ex7_2_1_pd[36];
	J[27] = dv[0]*489510.;
	J[37] += ex7_2_1_pd[35];
	J[9] += ex7_2_1_pd[34]*ex7_2_1_pd[33];
	dv[1] = ex7_2_1_pd[34]*ex7_2_1_pd[32];
	J[27] += dv[1]*5000.;
	J[37] += ex7_2_1_pd[31];

   /*** derivatives for constraint 7 ***/

	J[18] = ex7_2_1_pd[44];
	J[38] = ex7_2_1_pd[43]*0.33;
	J[18] += ex7_2_1_pd[42];

   /*** derivatives for constraint 8 ***/

	J[10] = ex7_2_1_pd[47];
	J[10] += ex7_2_1_pd[46];
	J[2] = ex7_2_1_pd[45]*0.819672;

   /*** derivatives for constraint 9 ***/

	J[11] = -ex7_2_1_pd[53];
	J[28] = -ex7_2_1_pd[52]*250.;
	J[34] = ex7_2_1_pd[51];
	J[11] += ex7_2_1_pd[50]*ex7_2_1_pd[49];
	dv[0] = ex7_2_1_pd[50]*ex7_2_1_pd[48];
	J[28] += dv[0]*24500.;

   /*** derivatives for constraint 10 ***/

	J[35] = ex7_2_1_pd[56] + 0.010204082;
	J[29] = x[5]*ex7_2_1_pd[55];
	dv[0] = x[5]*ex7_2_1_pd[54];
	J[12] = dv[0]*1.2244898e-05;

   /*** derivatives for constraint 11 ***/

	J[24] = ex7_2_1_pd[57];
	J[3] = x[3]*6.25e-05 + 6.25e-05;
	J[13] = -7.625e-05;

   /*** derivatives for constraint 12 ***/

	J[4] = ex7_2_1_pd[60];
	J[4] += ex7_2_1_pd[59];
	J[14] = ex7_2_1_pd[58]*1.22;
	J[25] = -1.;

   /*** derivatives for constraint 13 ***/

	J[19] = 0.022556;
	J[39] = -0.007595;

   /*** derivatives for constraint 14 ***/

	J[5] = -0.0005;
	J[15] = 0.00061;
	}
}
#ifdef __cplusplus
	}
#endif
