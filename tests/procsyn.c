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
 fint procsyn_auxcom_[1] = { 18 /* nlc */ };
 fint procsyn_funcom_[99] = {
	20 /* nvar */,
	1 /* nobj */,
	27 /* ncon */,
	72 /* nzc */,
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
	25,
	28,
	31,
	34,
	37,
	40,
	43,
	46,
	49,
	52,
	55,
	64,
	73,

	/* rownos */
	1,
	10,
	19,
	2,
	11,
	20,
	3,
	12,
	21,
	4,
	13,
	22,
	5,
	14,
	23,
	6,
	15,
	24,
	7,
	16,
	25,
	8,
	17,
	26,
	9,
	18,
	27,
	1,
	10,
	19,
	2,
	11,
	20,
	3,
	12,
	21,
	4,
	13,
	22,
	5,
	14,
	23,
	6,
	15,
	24,
	7,
	16,
	25,
	8,
	17,
	26,
	9,
	18,
	27,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9 };

 real procsyn_boundc_[1+40+54] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
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
		1.7e308,
		0.,
		1.7e308,
		2.5,
		1.7e308,
		6.5,
		1.7e308,
		10.5,
		1.7e308,
		3.5,
		1.7e308,
		7.5,
		1.7e308,
		11.5,
		1.7e308,
		4.5,
		1.7e308,
		8.5,
		1.7e308,
		12.5,
		1.7e308,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-3.,
		1.7e308,
		-3.,
		1.7e308,
		-3.,
		1.7e308,
		-5.,
		1.7e308,
		-5.,
		1.7e308,
		-5.,
		1.7e308};

 real procsyn_x0comn_[20] = {
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
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

 static real procsyn_pd[54];
static real procsyn_old_x[20];
static int procsyn_xkind = -1;

 static int
procsyn_xcheck(real *x)
{
	real *x1 = procsyn_old_x, *xe = x + 20;
	errno = 0;
	if (procsyn_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	procsyn_xkind = 0;
	return 1;
	}
 real
procsyn_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (procsyn_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	procsyn_pd[27] = x[18] * x[18];
	procsyn_pd[28] = x[18] + x[18];
	v[0] = 0.05 * procsyn_pd[27];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[29] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[29] = 0.;
	}
	v[1] *= 0.05;
	v[0] += v[1];
	procsyn_pd[30] = x[18] * x[18];
	procsyn_pd[31] = x[18] + x[18];
	v[1] = 0.175 * procsyn_pd[30];
	v[0] += v[1];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[32] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[32] = 0.;
	}
	v[1] *= 0.175;
	v[0] += v[1];
	procsyn_pd[33] = x[18] * x[18];
	procsyn_pd[34] = x[18] + x[18];
	v[1] = 0.025 * procsyn_pd[33];
	v[0] += v[1];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[35] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[35] = 0.;
	}
	v[1] *= 0.025;
	v[0] += v[1];
	procsyn_pd[36] = x[18] * x[18];
	procsyn_pd[37] = x[18] + x[18];
	v[1] = 0.1 * procsyn_pd[36];
	v[0] += v[1];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[38] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[38] = 0.;
	}
	v[1] *= 0.1;
	v[0] += v[1];
	procsyn_pd[39] = x[18] * x[18];
	procsyn_pd[40] = x[18] + x[18];
	v[1] = 0.35 * procsyn_pd[39];
	v[0] += v[1];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[41] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[41] = 0.;
	}
	v[1] *= 0.35;
	v[0] += v[1];
	procsyn_pd[42] = x[18] * x[18];
	procsyn_pd[43] = x[18] + x[18];
	v[1] = 0.05 * procsyn_pd[42];
	v[0] += v[1];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[44] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[44] = 0.;
	}
	v[1] *= 0.05;
	v[0] += v[1];
	procsyn_pd[45] = x[18] * x[18];
	procsyn_pd[46] = x[18] + x[18];
	v[1] = 0.05 * procsyn_pd[45];
	v[0] += v[1];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[47] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[47] = 0.;
	}
	v[1] *= 0.05;
	v[0] += v[1];
	procsyn_pd[48] = x[18] * x[18];
	procsyn_pd[49] = x[18] + x[18];
	v[1] = 0.175 * procsyn_pd[48];
	v[0] += v[1];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[50] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[50] = 0.;
	}
	v[1] *= 0.175;
	v[0] += v[1];
	procsyn_pd[51] = x[18] * x[18];
	procsyn_pd[52] = x[18] + x[18];
	v[1] = 0.025 * procsyn_pd[51];
	v[0] += v[1];
	v[1] = pow(x[19], 3.);
	if (errno) in_trouble2("pow",x[19],3.);
	if (x[19] != 0.) {
	procsyn_pd[53] = 3.*(x[19]*x[19]);
	} else {
	procsyn_pd[53] = 0.;
	}
	v[1] *= 0.025;
	v[0] += v[1];
	v[0] += -3.2;
	rv = v[0] + 0.15*x[0];
	rv += 0.525*x[1];
	rv += 0.075*x[2];
	rv += 0.3*x[3];
	rv += 1.05*x[4];
	rv += 0.15*x[5];
	rv += 0.15*x[6];
	rv += 0.525*x[7];
	rv += 0.075*x[8];
	rv += 0.1*x[9];
	rv += 0.35*x[10];
	rv += 0.05*x[11];
	rv += 0.2*x[12];
	rv += 0.7*x[13];
	rv += 0.1*x[14];
	rv += 0.1*x[15];
	rv += 0.35*x[16];
	rv += 0.05*x[17];
	;}

	if (wantfg & 2) {
	g[19] = 0.025*procsyn_pd[53];
	g[18] = 0.025*procsyn_pd[52];
	g[19] += 0.175*procsyn_pd[50];
	g[18] += 0.175*procsyn_pd[49];
	g[19] += 0.05*procsyn_pd[47];
	g[18] += 0.05*procsyn_pd[46];
	g[19] += 0.05*procsyn_pd[44];
	g[18] += 0.05*procsyn_pd[43];
	g[19] += 0.35*procsyn_pd[41];
	g[18] += 0.35*procsyn_pd[40];
	g[19] += 0.1*procsyn_pd[38];
	g[18] += 0.1*procsyn_pd[37];
	g[19] += 0.025*procsyn_pd[35];
	g[18] += 0.025*procsyn_pd[34];
	g[19] += 0.175*procsyn_pd[32];
	g[18] += 0.175*procsyn_pd[31];
	g[19] += 0.05*procsyn_pd[29];
	g[18] += 0.05*procsyn_pd[28];
	g[0] = 0.15;
	g[1] = 0.525;
	g[2] = 0.075;
	g[3] = 0.3;
	g[4] = 1.05;
	g[5] = 0.15;
	g[6] = 0.15;
	g[7] = 0.525;
	g[8] = 0.075;
	g[9] = 0.1;
	g[10] = 0.35;
	g[11] = 0.05;
	g[12] = 0.2;
	g[13] = 0.7;
	g[14] = 0.1;
	g[15] = 0.1;
	g[16] = 0.35;
	g[17] = 0.05;
	}

	return rv;
}

 void
procsyn_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (procsyn_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[9] * x[9];
	procsyn_pd[0] = x[9] + x[9];
	v[1] = -v[0];
	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 1. / x[0];
	procsyn_pd[1] = -v[0] / x[0];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[10] * x[10];
	procsyn_pd[2] = x[10] + x[10];
	v[1] = -v[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 1. / x[1];
	procsyn_pd[3] = -v[0] / x[1];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[11] * x[11];
	procsyn_pd[4] = x[11] + x[11];
	v[1] = -v[0];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 1. / x[2];
	procsyn_pd[5] = -v[0] / x[2];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[12] * x[12];
	procsyn_pd[6] = x[12] + x[12];
	v[1] = -v[0];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[0] = 1. / x[3];
	procsyn_pd[7] = -v[0] / x[3];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[13] * x[13];
	procsyn_pd[8] = x[13] + x[13];
	v[1] = -v[0];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[0] = 1. / x[4];
	procsyn_pd[9] = -v[0] / x[4];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[14] * x[14];
	procsyn_pd[10] = x[14] + x[14];
	v[1] = -v[0];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[0] = 1. / x[5];
	procsyn_pd[11] = -v[0] / x[5];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[15] * x[15];
	procsyn_pd[12] = x[15] + x[15];
	v[1] = -v[0];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[0] = 1. / x[6];
	procsyn_pd[13] = -v[0] / x[6];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[16] * x[16];
	procsyn_pd[14] = x[16] + x[16];
	v[1] = -v[0];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[0] = 1. / x[7];
	procsyn_pd[15] = -v[0] / x[7];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[17] * x[17];
	procsyn_pd[16] = x[17] + x[17];
	v[1] = -v[0];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[0] = 1. / x[8];
	procsyn_pd[17] = -v[0] / x[8];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[19];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[0] * x[0];
	procsyn_pd[18] = x[0] + x[0];
	t1 = v[0] + 2.*x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[1] * x[1];
	procsyn_pd[19] = x[1] + x[1];
	t1 = v[0] + 2.*x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[2] * x[2];
	procsyn_pd[20] = x[2] + x[2];
	t1 = v[0] + 2.*x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[3] * x[3];
	procsyn_pd[21] = x[3] + x[3];
	t1 = v[0] + 2.*x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[4] * x[4];
	procsyn_pd[22] = x[4] + x[4];
	t1 = v[0] + 2.*x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[5] * x[5];
	procsyn_pd[23] = x[5] + x[5];
	t1 = v[0] + 2.*x[14];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[6] * x[6];
	procsyn_pd[24] = x[6] + x[6];
	t1 = v[0] + 2.*x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[7] * x[7];
	procsyn_pd[25] = x[7] + x[7];
	t1 = v[0] + 2.*x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[8] * x[8];
	procsyn_pd[26] = x[8] + x[8];
	t1 = v[0] + 2.*x[17];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -2.*x[0];
	t1 += -2.*x[9];
	t1 += x[18];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -2.*x[1];
	t1 += -2.*x[10];
	t1 += x[18];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -2.*x[2];
	t1 += -2.*x[11];
	t1 += x[18];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -2.*x[3];
	t1 += -2.*x[12];
	t1 += x[18];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -2.*x[4];
	t1 += -2.*x[13];
	t1 += x[18];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -2.*x[5];
	t1 += -2.*x[14];
	t1 += x[18];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -2.*x[6];
	t1 += -2.*x[15];
	t1 += x[18];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -2.*x[7];
	t1 += -2.*x[16];
	t1 += x[18];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -2.*x[8];
	t1 += -2.*x[17];
	t1 += x[18];
	c[26] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -procsyn_pd[1];
	J[27] = -procsyn_pd[0];
	J[63] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = -procsyn_pd[3];
	J[30] = -procsyn_pd[2];
	J[64] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -procsyn_pd[5];
	J[33] = -procsyn_pd[4];
	J[65] = 1.;

   /*** derivatives for constraint 4 ***/

	J[9] = -procsyn_pd[7];
	J[36] = -procsyn_pd[6];
	J[66] = 1.;

   /*** derivatives for constraint 5 ***/

	J[12] = -procsyn_pd[9];
	J[39] = -procsyn_pd[8];
	J[67] = 1.;

   /*** derivatives for constraint 6 ***/

	J[15] = -procsyn_pd[11];
	J[42] = -procsyn_pd[10];
	J[68] = 1.;

   /*** derivatives for constraint 7 ***/

	J[18] = -procsyn_pd[13];
	J[45] = -procsyn_pd[12];
	J[69] = 1.;

   /*** derivatives for constraint 8 ***/

	J[21] = -procsyn_pd[15];
	J[48] = -procsyn_pd[14];
	J[70] = 1.;

   /*** derivatives for constraint 9 ***/

	J[24] = -procsyn_pd[17];
	J[51] = -procsyn_pd[16];
	J[71] = 1.;

   /*** derivatives for constraint 10 ***/

	J[1] = procsyn_pd[18];
	J[28] = 2.;

   /*** derivatives for constraint 11 ***/

	J[4] = procsyn_pd[19];
	J[31] = 2.;

   /*** derivatives for constraint 12 ***/

	J[7] = procsyn_pd[20];
	J[34] = 2.;

   /*** derivatives for constraint 13 ***/

	J[10] = procsyn_pd[21];
	J[37] = 2.;

   /*** derivatives for constraint 14 ***/

	J[13] = procsyn_pd[22];
	J[40] = 2.;

   /*** derivatives for constraint 15 ***/

	J[16] = procsyn_pd[23];
	J[43] = 2.;

   /*** derivatives for constraint 16 ***/

	J[19] = procsyn_pd[24];
	J[46] = 2.;

   /*** derivatives for constraint 17 ***/

	J[22] = procsyn_pd[25];
	J[49] = 2.;

   /*** derivatives for constraint 18 ***/

	J[25] = procsyn_pd[26];
	J[52] = 2.;

   /*** derivatives for constraint 19 ***/

	J[2] = -2.;
	J[29] = -2.;
	J[54] = 1.;

   /*** derivatives for constraint 20 ***/

	J[5] = -2.;
	J[32] = -2.;
	J[55] = 1.;

   /*** derivatives for constraint 21 ***/

	J[8] = -2.;
	J[35] = -2.;
	J[56] = 1.;

   /*** derivatives for constraint 22 ***/

	J[11] = -2.;
	J[38] = -2.;
	J[57] = 1.;

   /*** derivatives for constraint 23 ***/

	J[14] = -2.;
	J[41] = -2.;
	J[58] = 1.;

   /*** derivatives for constraint 24 ***/

	J[17] = -2.;
	J[44] = -2.;
	J[59] = 1.;

   /*** derivatives for constraint 25 ***/

	J[20] = -2.;
	J[47] = -2.;
	J[60] = 1.;

   /*** derivatives for constraint 26 ***/

	J[23] = -2.;
	J[50] = -2.;
	J[61] = 1.;

   /*** derivatives for constraint 27 ***/

	J[26] = -2.;
	J[53] = -2.;
	J[62] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
