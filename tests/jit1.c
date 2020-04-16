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
 fint jit1_auxcom_[1] = { 0 /* nlc */ };
 fint jit1_funcom_[118] = {
	25 /* nvar */,
	1 /* nobj */,
	32 /* ncon */,
	86 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	9,
	14,
	17,
	20,
	25,
	30,
	33,
	36,
	41,
	46,
	49,
	51,
	53,
	55,
	57,
	59,
	61,
	63,
	65,
	67,
	72,
	77,
	82,
	87,

	/* rownos */
	1,
	15,
	24,
	2,
	15,
	16,
	24,
	25,
	3,
	16,
	17,
	25,
	26,
	4,
	17,
	26,
	5,
	18,
	27,
	6,
	18,
	19,
	27,
	28,
	7,
	19,
	20,
	28,
	29,
	8,
	20,
	29,
	9,
	21,
	30,
	10,
	21,
	22,
	30,
	31,
	11,
	22,
	23,
	31,
	32,
	12,
	23,
	32,
	15,
	24,
	16,
	25,
	17,
	26,
	18,
	27,
	19,
	28,
	20,
	29,
	21,
	30,
	22,
	31,
	23,
	32,
	1,
	5,
	9,
	13,
	14,
	2,
	6,
	10,
	13,
	14,
	3,
	7,
	11,
	13,
	14,
	4,
	8,
	12,
	13,
	14 };

 real jit1_boundc_[1+50+64] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.000252525252525253,
		1.7e308,
		0.000508388408744281,
		1.7e308,
		0.000635162601626016,
		1.7e308,
		0.000636456211812627,
		1.7e308,
		0.000861450107681263,
		1.7e308,
		0.000438212094653812,
		1.7e308,
		0.000433776749566223,
		1.7e308,
		0.000289184499710815,
		1.7e308,
		0.000224466891133558,
		1.7e308,
		0.00033892560582952,
		1.7e308,
		0.000224014336917563,
		1.7e308,
		0.000337381916329285,
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
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
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
		-1.7e308,
		6.e+06,
		-1.7e308,
		3000.,
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308};

 real jit1_x0comn_[25] = {
		0.000252525252525253,
		0.000508388408744281,
		0.000635162601626016,
		0.000636456211812627,
		0.000861450107681263,
		0.000438212094653812,
		0.000433776749566223,
		0.000289184499710815,
		0.000224466891133558,
		0.00033892560582952,
		0.000224014336917563,
		0.000337381916329285,
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
		1.,
		1.,
		1. };

 static real jit1_pd[12];
static real jit1_old_x[25];
static int jit1_xkind = -1;

 static int
jit1_xcheck(real *x)
{
	real *x1 = jit1_old_x, *xe = x + 25;
	errno = 0;
	if (jit1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	jit1_xkind = 0;
	return 1;
	}
 real
jit1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (jit1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 7.5 / x[0];
	jit1_pd[0] = -v[0] / x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = 5.625 / x[1];
	jit1_pd[1] = -v[1] / x[1];
	v[0] += v[1];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[1] = 11.25 / x[2];
	jit1_pd[2] = -v[1] / x[2];
	v[0] += v[1];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = 7.5 / x[3];
	jit1_pd[3] = -v[1] / x[3];
	v[0] += v[1];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[1] = 8.57142857142857 / x[4];
	jit1_pd[4] = -v[1] / x[4];
	v[0] += v[1];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[1] = 7.14285714285714 / x[5];
	jit1_pd[5] = -v[1] / x[5];
	v[0] += v[1];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = 2.85714285714286 / x[6];
	jit1_pd[6] = -v[1] / x[6];
	v[0] += v[1];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[1] = 5.71428571428571 / x[7];
	jit1_pd[7] = -v[1] / x[7];
	v[0] += v[1];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[1] = 8.88888888888889 / x[8];
	jit1_pd[8] = -v[1] / x[8];
	v[0] += v[1];
	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[1] = 8.88888888888889 / x[9];
	jit1_pd[9] = -v[1] / x[9];
	v[0] += v[1];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[1] = 8.88888888888889 / x[10];
	jit1_pd[10] = -v[1] / x[10];
	v[0] += v[1];
	if (x[11] == 0.) {
	zerdiv_(&x[11]);	}
	v[1] = 4.44444444444444 / x[11];
	jit1_pd[11] = -v[1] / x[11];
	v[0] += v[1];
	rv = v[0] + 6.e+06*x[12];
	rv += 9.e+06*x[13];
	rv += 6.e+06*x[14];
	rv += 9.e+06*x[15];
	rv += 8.e+06*x[16];
	rv += 8.e+06*x[17];
	rv += 8.e+06*x[18];
	rv += 1.e+07*x[19];
	rv += 8.e+06*x[20];
	rv += 5000.*x[21];
	rv += 5500.*x[22];
	rv += 4000.*x[23];
	rv += 6000.*x[24];
	;}

	if (wantfg & 2) {
	g[11] = jit1_pd[11];
	g[10] = jit1_pd[10];
	g[9] = jit1_pd[9];
	g[8] = jit1_pd[8];
	g[7] = jit1_pd[7];
	g[6] = jit1_pd[6];
	g[5] = jit1_pd[5];
	g[4] = jit1_pd[4];
	g[3] = jit1_pd[3];
	g[2] = jit1_pd[2];
	g[1] = jit1_pd[1];
	g[0] = jit1_pd[0];
	g[12] = 6.e+06;
	g[13] = 9.e+06;
	g[14] = 6.e+06;
	g[15] = 9.e+06;
	g[16] = 8.e+06;
	g[17] = 8.e+06;
	g[18] = 8.e+06;
	g[19] = 1.e+07;
	g[20] = 8.e+06;
	g[21] = 5000.;
	g[22] = 5500.;
	g[23] = 4000.;
	g[24] = 6000.;
	}

	return rv;
}

 void
jit1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (jit1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += -0.000252525252525253*x[21];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	t1 += -0.000508388408744281*x[22];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	t1 += -0.000635162601626016*x[23];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[3];
	t1 += -0.000636456211812627*x[24];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[4];
	t1 += -0.000861450107681263*x[21];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[5];
	t1 += -0.000438212094653812*x[22];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[6];
	t1 += -0.000433776749566223*x[23];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[7];
	t1 += -0.000289184499710815*x[24];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[8];
	t1 += -0.000224466891133558*x[21];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[9];
	t1 += -0.00033892560582952*x[22];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[10];
	t1 += -0.000224014336917563*x[23];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[11];
	t1 += -0.000337381916329285*x[24];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 5000.*x[21];
	t1 += 5500.*x[22];
	t1 += 4000.*x[23];
	t1 += 6000.*x[24];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 60.*x[21];
	t1 += 50.*x[22];
	t1 += 80.*x[23];
	t1 += 40.*x[24];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[12];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[13];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[14];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[15];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[16];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[17];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += x[18];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[9];
	t1 += x[10];
	t1 += x[19];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[10];
	t1 += x[11];
	t1 += x[20];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[12];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[13];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += x[14];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[15];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[16];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[17];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += x[18];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[9];
	t1 += -x[10];
	t1 += x[19];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[10];
	t1 += -x[11];
	t1 += x[20];
	c[31] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[66] = -0.000252525252525253;

   /*** derivatives for constraint 2 ***/

	J[3] = 1.;
	J[71] = -0.000508388408744281;

   /*** derivatives for constraint 3 ***/

	J[8] = 1.;
	J[76] = -0.000635162601626016;

   /*** derivatives for constraint 4 ***/

	J[13] = 1.;
	J[81] = -0.000636456211812627;

   /*** derivatives for constraint 5 ***/

	J[16] = 1.;
	J[67] = -0.000861450107681263;

   /*** derivatives for constraint 6 ***/

	J[19] = 1.;
	J[72] = -0.000438212094653812;

   /*** derivatives for constraint 7 ***/

	J[24] = 1.;
	J[77] = -0.000433776749566223;

   /*** derivatives for constraint 8 ***/

	J[29] = 1.;
	J[82] = -0.000289184499710815;

   /*** derivatives for constraint 9 ***/

	J[32] = 1.;
	J[68] = -0.000224466891133558;

   /*** derivatives for constraint 10 ***/

	J[35] = 1.;
	J[73] = -0.00033892560582952;

   /*** derivatives for constraint 11 ***/

	J[40] = 1.;
	J[78] = -0.000224014336917563;

   /*** derivatives for constraint 12 ***/

	J[45] = 1.;
	J[83] = -0.000337381916329285;

   /*** derivatives for constraint 13 ***/

	J[69] = 5000.;
	J[74] = 5500.;
	J[79] = 4000.;
	J[84] = 6000.;

   /*** derivatives for constraint 14 ***/

	J[70] = 60.;
	J[75] = 50.;
	J[80] = 80.;
	J[85] = 40.;

   /*** derivatives for constraint 15 ***/

	J[1] = -1.;
	J[4] = 1.;
	J[48] = 1.;

   /*** derivatives for constraint 16 ***/

	J[5] = -1.;
	J[9] = 1.;
	J[50] = 1.;

   /*** derivatives for constraint 17 ***/

	J[10] = -1.;
	J[14] = 1.;
	J[52] = 1.;

   /*** derivatives for constraint 18 ***/

	J[17] = -1.;
	J[20] = 1.;
	J[54] = 1.;

   /*** derivatives for constraint 19 ***/

	J[21] = -1.;
	J[25] = 1.;
	J[56] = 1.;

   /*** derivatives for constraint 20 ***/

	J[26] = -1.;
	J[30] = 1.;
	J[58] = 1.;

   /*** derivatives for constraint 21 ***/

	J[33] = -1.;
	J[36] = 1.;
	J[60] = 1.;

   /*** derivatives for constraint 22 ***/

	J[37] = -1.;
	J[41] = 1.;
	J[62] = 1.;

   /*** derivatives for constraint 23 ***/

	J[42] = -1.;
	J[46] = 1.;
	J[64] = 1.;

   /*** derivatives for constraint 24 ***/

	J[2] = 1.;
	J[6] = -1.;
	J[49] = 1.;

   /*** derivatives for constraint 25 ***/

	J[7] = 1.;
	J[11] = -1.;
	J[51] = 1.;

   /*** derivatives for constraint 26 ***/

	J[12] = 1.;
	J[15] = -1.;
	J[53] = 1.;

   /*** derivatives for constraint 27 ***/

	J[18] = 1.;
	J[22] = -1.;
	J[55] = 1.;

   /*** derivatives for constraint 28 ***/

	J[23] = 1.;
	J[27] = -1.;
	J[57] = 1.;

   /*** derivatives for constraint 29 ***/

	J[28] = 1.;
	J[31] = -1.;
	J[59] = 1.;

   /*** derivatives for constraint 30 ***/

	J[34] = 1.;
	J[38] = -1.;
	J[61] = 1.;

   /*** derivatives for constraint 31 ***/

	J[39] = 1.;
	J[43] = -1.;
	J[63] = 1.;

   /*** derivatives for constraint 32 ***/

	J[44] = 1.;
	J[47] = -1.;
	J[65] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
