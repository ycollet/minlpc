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
 fint hhfair_auxcom_[1] = { 6 /* nlc */ };
 fint hhfair_funcom_[113] = {
	29 /* nvar */,
	1 /* nobj */,
	25 /* ncon */,
	77 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	16,
	19,
	22,
	26,
	30,
	34,
	37,
	40,
	43,
	44,
	45,
	46,
	47,
	50,
	53,
	56,
	57,
	59,
	61,
	63,
	65,
	67,
	69,
	72,
	75,
	78,

	/* rownos */
	1,
	4,
	13,
	20,
	2,
	5,
	14,
	21,
	3,
	6,
	15,
	22,
	1,
	7,
	23,
	2,
	8,
	24,
	3,
	9,
	25,
	4,
	16,
	17,
	20,
	5,
	17,
	18,
	21,
	6,
	18,
	19,
	22,
	1,
	4,
	23,
	2,
	5,
	24,
	3,
	6,
	25,
	1,
	2,
	3,
	16,
	7,
	16,
	17,
	8,
	17,
	18,
	9,
	18,
	19,
	16,
	13,
	16,
	14,
	17,
	15,
	18,
	10,
	13,
	11,
	14,
	12,
	15,
	7,
	10,
	13,
	8,
	11,
	14,
	9,
	12,
	15 };

 real hhfair_boundc_[1+58+50] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		100.,
		1.7e308,
		100.,
		1.7e308,
		100.,
		1.7e308,
		100.,
		400.,
		100.,
		400.,
		100.,
		400.,
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
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		1000.,
		1000.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		100.,
		100.,
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
		1100.,
		1100.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		904.251294,
		-1.7e308,
		904.251294,
		-1.7e308,
		904.251294};

 real hhfair_x0comn_[29] = {
		100.,
		100.,
		100.,
		400.,
		400.,
		400.,
		100.,
		100.,
		100.,
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1000.,
		1000.,
		1000.,
		1000.,
		100.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real hhfair_pd[26];
static real hhfair_old_x[29];
static int hhfair_xkind = -1;

 static int
hhfair_xcheck(real *x)
{
	real *x1 = hhfair_old_x, *xe = x + 29;
	errno = 0;
	if (hhfair_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hhfair_xkind = 0;
	return 1;
	}
 real
hhfair_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[1];
	fint wantfg = *needfg;
	if (hhfair_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	hhfair_pd[22] = pow(x[13], 0.944);
	if (errno) in_trouble2("pow",x[13],0.944);
	if (x[13] > 0.) {
	hhfair_pd[21] = 0.944*(hhfair_pd[22]/x[13]);
	} else if (0.944 > 1.) {
	hhfair_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],0.944);
	}
	hhfair_pd[23] = hhfair_pd[22] * x[12];
	hhfair_pd[25] = pow(x[14], 0.891136);
	if (errno) in_trouble2("pow",x[14],0.891136);
	if (x[14] > 0.) {
	hhfair_pd[24] = 0.891136*(hhfair_pd[25]/x[14]);
	} else if (0.891136 > 1.) {
	hhfair_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],0.891136);
	}
	v[2] = hhfair_pd[23] * hhfair_pd[25];
	v[3] = -v[2];
	;}

	if (wantfg & 2) {
	g[14] = -hhfair_pd[23]*hhfair_pd[24];
	g[12] = -hhfair_pd[25]*hhfair_pd[22];
	dv[0] = -hhfair_pd[25]*x[12];
	g[13] = dv[0]*hhfair_pd[21];
	}

	return v[3];
}

 void
hhfair_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (hhfair_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	hhfair_pd[0] = sqrt(x[0]);
	if (errno) in_trouble("sqrt",x[0]);
	if (hhfair_pd[0] <= 0.) {
	domain_("sqrt'", &hhfair_pd[0], 5L);
	}
	hhfair_pd[1] = 0.5 / hhfair_pd[0];
	v[0] = 0.5 * hhfair_pd[0];
	v[1] = 1004.72366 - x[3];
	v[2] = v[1] - x[9];
	hhfair_pd[2] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (hhfair_pd[2] <= 0.) {
	domain_("sqrt'", &hhfair_pd[2], 5L);
	}
	hhfair_pd[3] = 0.5 / hhfair_pd[2];
	v[2] = 0.5 * hhfair_pd[2];
	v[1] = v[0] + v[2];
	hhfair_pd[4] = v[1] * v[1];
	hhfair_pd[5] = v[1] + v[1];
	v[1] = -0.01 * hhfair_pd[4];
	t1 = v[1] + x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	hhfair_pd[6] = sqrt(x[1]);
	if (errno) in_trouble("sqrt",x[1]);
	if (hhfair_pd[6] <= 0.) {
	domain_("sqrt'", &hhfair_pd[6], 5L);
	}
	hhfair_pd[7] = 0.5 / hhfair_pd[6];
	v[0] = 0.5 * hhfair_pd[6];
	v[1] = 1004.72366 - x[4];
	v[2] = v[1] - x[10];
	hhfair_pd[8] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (hhfair_pd[8] <= 0.) {
	domain_("sqrt'", &hhfair_pd[8], 5L);
	}
	hhfair_pd[9] = 0.5 / hhfair_pd[8];
	v[2] = 0.5 * hhfair_pd[8];
	v[1] = v[0] + v[2];
	hhfair_pd[10] = v[1] * v[1];
	hhfair_pd[11] = v[1] + v[1];
	v[1] = -0.01 * hhfair_pd[10];
	t1 = v[1] + x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	hhfair_pd[12] = sqrt(x[2]);
	if (errno) in_trouble("sqrt",x[2]);
	if (hhfair_pd[12] <= 0.) {
	domain_("sqrt'", &hhfair_pd[12], 5L);
	}
	hhfair_pd[13] = 0.5 / hhfair_pd[12];
	v[0] = 0.5 * hhfair_pd[12];
	v[1] = 1004.72366 - x[5];
	v[2] = v[1] - x[11];
	hhfair_pd[14] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (hhfair_pd[14] <= 0.) {
	domain_("sqrt'", &hhfair_pd[14], 5L);
	}
	hhfair_pd[15] = 0.5 / hhfair_pd[14];
	v[2] = 0.5 * hhfair_pd[14];
	v[1] = v[0] + v[2];
	hhfair_pd[16] = v[1] * v[1];
	hhfair_pd[17] = v[1] + v[1];
	v[1] = -0.01 * hhfair_pd[16];
	t1 = v[1] + x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = -0.255905 * x[0];
	hhfair_pd[18] = x[6] + v[0];
	v[0] = x[9] * hhfair_pd[18];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = -0.255905 * x[1];
	hhfair_pd[19] = x[7] + v[0];
	v[0] = x[10] * hhfair_pd[19];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = -0.255905 * x[2];
	hhfair_pd[20] = x[8] + v[0];
	v[0] = x[11] * hhfair_pd[20];
	c[5] = v[0];

  /***  constraint 7  ***/

	t1 = -x[3];
	t1 += -0.07*x[16];
	t1 += x[26];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[4];
	t1 += -0.07*x[17];
	t1 += x[27];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[5];
	t1 += -0.07*x[18];
	t1 += x[28];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[23];
	t1 += -0.2*x[26];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[24];
	t1 += -0.2*x[27];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[25];
	t1 += -0.2*x[28];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += x[20];
	t1 += x[23];
	t1 += -x[26];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[1];
	t1 += x[21];
	t1 += x[24];
	t1 += -x[27];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[2];
	t1 += x[22];
	t1 += x[25];
	t1 += -x[28];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[6];
	t1 += x[15];
	t1 += -x[16];
	t1 += x[19];
	t1 += x[20];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[16];
	t1 += -x[17];
	t1 += x[21];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += x[17];
	t1 += -x[18];
	t1 += x[22];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[8];
	t1 += x[18];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -0.25846405*x[0];
	t1 += x[6];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -0.25846405*x[1];
	t1 += x[7];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -0.25846405*x[2];
	t1 += x[8];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[3];
	t1 += x[9];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[4];
	t1 += x[10];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[5];
	t1 += x[11];
	c[24] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -0.01*hhfair_pd[5];
	dv[1] = dv[0];
	dv[1] *= 0.5;
	dv[1] *= hhfair_pd[3];
	J[33] = -dv[1];
	J[12] = -dv[1];
	dv[0] *= 0.5;
	J[0] = dv[0]*hhfair_pd[1];
	J[42] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -0.01*hhfair_pd[11];
	dv[1] = dv[0];
	dv[1] *= 0.5;
	dv[1] *= hhfair_pd[9];
	J[36] = -dv[1];
	J[15] = -dv[1];
	dv[0] *= 0.5;
	J[4] = dv[0]*hhfair_pd[7];
	J[43] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -0.01*hhfair_pd[17];
	dv[1] = dv[0];
	dv[1] *= 0.5;
	dv[1] *= hhfair_pd[15];
	J[39] = -dv[1];
	J[18] = -dv[1];
	dv[0] *= 0.5;
	J[8] = dv[0]*hhfair_pd[13];
	J[44] = 1.;

   /*** derivatives for constraint 4 ***/

	J[34] = hhfair_pd[18];
	dv[0] = x[9];
	J[21] = x[9];
	J[1] = -dv[0]*0.255905;

   /*** derivatives for constraint 5 ***/

	J[37] = hhfair_pd[19];
	dv[0] = x[10];
	J[25] = x[10];
	J[5] = -dv[0]*0.255905;

   /*** derivatives for constraint 6 ***/

	J[40] = hhfair_pd[20];
	dv[0] = x[11];
	J[29] = x[11];
	J[9] = -dv[0]*0.255905;

   /*** derivatives for constraint 7 ***/

	J[13] = -1.;
	J[46] = -0.07;
	J[68] = 1.;

   /*** derivatives for constraint 8 ***/

	J[16] = -1.;
	J[49] = -0.07;
	J[71] = 1.;

   /*** derivatives for constraint 9 ***/

	J[19] = -1.;
	J[52] = -0.07;
	J[74] = 1.;

   /*** derivatives for constraint 10 ***/

	J[62] = 1.;
	J[69] = -0.2;

   /*** derivatives for constraint 11 ***/

	J[64] = 1.;
	J[72] = -0.2;

   /*** derivatives for constraint 12 ***/

	J[66] = 1.;
	J[75] = -0.2;

   /*** derivatives for constraint 13 ***/

	J[2] = 1.;
	J[56] = 1.;
	J[63] = 1.;
	J[70] = -1.;

   /*** derivatives for constraint 14 ***/

	J[6] = 1.;
	J[58] = 1.;
	J[65] = 1.;
	J[73] = -1.;

   /*** derivatives for constraint 15 ***/

	J[10] = 1.;
	J[60] = 1.;
	J[67] = 1.;
	J[76] = -1.;

   /*** derivatives for constraint 16 ***/

	J[22] = -1.;
	J[45] = 1.;
	J[47] = -1.;
	J[55] = 1.;
	J[57] = 1.;

   /*** derivatives for constraint 17 ***/

	J[23] = 1.;
	J[26] = -1.;
	J[48] = 1.;
	J[50] = -1.;
	J[59] = 1.;

   /*** derivatives for constraint 18 ***/

	J[27] = 1.;
	J[30] = -1.;
	J[51] = 1.;
	J[53] = -1.;
	J[61] = 1.;

   /*** derivatives for constraint 19 ***/

	J[31] = 1.;
	J[54] = 1.;

   /*** derivatives for constraint 20 ***/

	J[3] = -0.25846405;
	J[24] = 1.;

   /*** derivatives for constraint 21 ***/

	J[7] = -0.25846405;
	J[28] = 1.;

   /*** derivatives for constraint 22 ***/

	J[11] = -0.25846405;
	J[32] = 1.;

   /*** derivatives for constraint 23 ***/

	J[14] = 1.;
	J[35] = 1.;

   /*** derivatives for constraint 24 ***/

	J[17] = 1.;
	J[38] = 1.;

   /*** derivatives for constraint 25 ***/

	J[20] = 1.;
	J[41] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
