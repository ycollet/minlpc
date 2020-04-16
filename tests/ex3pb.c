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
 fint ex3pb_auxcom_[1] = { 5 /* nlc */ };
 fint ex3pb_funcom_[116] = {
	32 /* nvar */,
	1 /* nobj */,
	31 /* ncon */,
	77 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	6,
	8,
	10,
	12,
	14,
	16,
	17,
	19,
	22,
	27,
	29,
	34,
	36,
	41,
	44,
	46,
	51,
	54,
	57,
	59,
	60,
	61,
	63,
	65,
	68,
	70,
	72,
	74,
	76,
	78,

	/* rownos */
	1,
	12,
	2,
	12,
	5,
	3,
	14,
	4,
	14,
	1,
	20,
	2,
	21,
	12,
	13,
	13,
	6,
	13,
	6,
	10,
	22,
	5,
	6,
	16,
	17,
	27,
	11,
	12,
	7,
	11,
	18,
	19,
	23,
	7,
	9,
	7,
	15,
	18,
	19,
	23,
	8,
	11,
	24,
	8,
	10,
	5,
	10,
	16,
	17,
	27,
	3,
	9,
	25,
	4,
	9,
	26,
	14,
	15,
	15,
	10,
	21,
	28,
	22,
	31,
	23,
	29,
	30,
	24,
	29,
	25,
	30,
	26,
	30,
	27,
	31,
	20,
	28 };

 real ex3pb_boundc_[1+64+62] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		2.,
		0.,
		2.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
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
		2.,
		0.,
		1.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		2.,
		0.,
		2.,
		0.,
		2.,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		0.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
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

 real ex3pb_x0comn_[32] = {
		1.5,
		0.,
		0.75,
		1.5,
		0.,
		2.,
		0.,
		0.75,
		0.5,
		0.5,
		0.75,
		0.,
		1.5,
		1.34,
		2.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7,
		1.5,
		0.5,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex3pb_pd[5];
static real ex3pb_old_x[32];
static int ex3pb_xkind = -1;

 static int
ex3pb_xcheck(real *x)
{
	real *x1 = ex3pb_old_x, *xe = x + 32;
	errno = 0;
	if (ex3pb_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex3pb_xkind = 0;
	return 1;
	}
 real
ex3pb_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex3pb_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 122. + -10.*x[0];
	rv += -15.*x[1];
	rv += -65.*x[2];
	rv += -60.*x[3];
	rv += -80.*x[4];
	rv += x[5];
	rv += x[6];
	rv += -40.*x[10];
	rv += 15.*x[11];
	rv += 15.*x[15];
	rv += 80.*x[18];
	rv += 25.*x[19];
	rv += 35.*x[20];
	rv += -35.*x[23];
	rv += 8.*x[24];
	rv += 6.*x[25];
	rv += 10.*x[26];
	rv += 6.*x[27];
	rv += 7.*x[28];
	rv += 4.*x[29];
	rv += 5.*x[30];
	rv += 5.*x[31];
	;}

	if (wantfg & 2) {
	g[0] = -10.;
	g[1] = -15.;
	g[2] = -65.;
	g[3] = -60.;
	g[4] = -80.;
	g[5] = 1.;
	g[6] = 1.;
	g[10] = -40.;
	g[11] = 15.;
	g[15] = 15.;
	g[18] = 80.;
	g[19] = 25.;
	g[20] = 35.;
	g[23] = -35.;
	g[24] = 8.;
	g[25] = 6.;
	g[26] = 10.;
	g[27] = 6.;
	g[28] = 7.;
	g[29] = 4.;
	g[30] = 5.;
	g[31] = 5.;
	}

	return rv;
}

 void
ex3pb_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ex3pb_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = exp(x[0]);
	if (errno) in_trouble("exp",x[0]);
	ex3pb_pd[0] = v[0];
	t1 = v[0] + -x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.833333333333333 * x[1];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex3pb_pd[1] = v[1];
	t1 = v[1] + -x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 0.666666666666667 * x[3];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex3pb_pd[2] = v[1];
	t1 = v[1] + -x[19];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = exp(x[4]);
	if (errno) in_trouble("exp",x[4]);
	ex3pb_pd[3] = v[0];
	t1 = v[0] + -x[20];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = exp(x[2]);
	if (errno) in_trouble("exp",x[2]);
	ex3pb_pd[4] = v[0];
	t1 = v[0] + -x[11];
	t1 += -x[18];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[9];
	t1 += 1.5*x[10];
	t1 += x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 1.25*x[13];
	t1 += -x[14];
	t1 += 1.25*x[15];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[16];
	t1 += -2.*x[17];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[14];
	t1 += -x[19];
	t1 += -x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[10];
	t1 += -x[17];
	t1 += x[18];
	t1 += -x[23];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[12];
	t1 += -x[13];
	t1 += -x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += -x[7];
	t1 += -x[12];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += -x[9];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[3];
	t1 += -x[4];
	t1 += x[21];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[15];
	t1 += x[21];
	t1 += -x[22];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[11];
	t1 += -0.8*x[18];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[11];
	t1 += -0.4*x[18];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[13];
	t1 += -5.*x[15];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[13];
	t1 += -2.*x[15];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[5];
	t1 += -10.*x[31];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[6];
	t1 += -10.*x[24];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[10];
	t1 += -10.*x[25];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[13];
	t1 += x[15];
	t1 += -10.*x[26];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[16];
	t1 += -10.*x[27];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[19];
	t1 += -10.*x[28];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[20];
	t1 += -10.*x[29];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[11];
	t1 += x[18];
	t1 += -10.*x[30];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[24];
	t1 += x[31];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[26];
	t1 += x[27];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[26];
	t1 += x[28];
	t1 += x[29];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[25];
	t1 += -x[30];
	c[30] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = ex3pb_pd[0];
	J[9] = -1.;

   /*** derivatives for constraint 2 ***/

	J[2] = ex3pb_pd[1]*0.833333333333333;
	J[11] = -1.;

   /*** derivatives for constraint 3 ***/

	J[5] = ex3pb_pd[2]*0.666666666666667;
	J[50] = -1.;

   /*** derivatives for constraint 4 ***/

	J[7] = ex3pb_pd[3];
	J[53] = -1.;

   /*** derivatives for constraint 5 ***/

	J[4] = ex3pb_pd[4];
	J[21] = -1.;
	J[45] = -1.;

   /*** derivatives for constraint 6 ***/

	J[16] = -1.;
	J[18] = 1.5;
	J[22] = 1.;

   /*** derivatives for constraint 7 ***/

	J[28] = 1.25;
	J[33] = -1.;
	J[35] = 1.25;

   /*** derivatives for constraint 8 ***/

	J[40] = 1.;
	J[43] = -2.;

   /*** derivatives for constraint 9 ***/

	J[34] = 1.;
	J[51] = -1.;
	J[54] = -1.;

   /*** derivatives for constraint 10 ***/

	J[19] = -1.;
	J[44] = -1.;
	J[46] = 1.;
	J[59] = -1.;

   /*** derivatives for constraint 11 ***/

	J[26] = 1.;
	J[29] = -1.;
	J[41] = -1.;

   /*** derivatives for constraint 12 ***/

	J[1] = 1.;
	J[3] = 1.;
	J[13] = -1.;
	J[27] = -1.;

   /*** derivatives for constraint 13 ***/

	J[14] = 1.;
	J[15] = -1.;
	J[17] = -1.;

   /*** derivatives for constraint 14 ***/

	J[6] = -1.;
	J[8] = -1.;
	J[56] = 1.;

   /*** derivatives for constraint 15 ***/

	J[36] = -1.;
	J[57] = 1.;
	J[58] = -1.;

   /*** derivatives for constraint 16 ***/

	J[23] = 1.;
	J[47] = -0.8;

   /*** derivatives for constraint 17 ***/

	J[24] = 1.;
	J[48] = -0.4;

   /*** derivatives for constraint 18 ***/

	J[30] = 1.;
	J[37] = -5.;

   /*** derivatives for constraint 19 ***/

	J[31] = 1.;
	J[38] = -2.;

   /*** derivatives for constraint 20 ***/

	J[10] = 1.;
	J[75] = -10.;

   /*** derivatives for constraint 21 ***/

	J[12] = 1.;
	J[60] = -10.;

   /*** derivatives for constraint 22 ***/

	J[20] = 1.;
	J[62] = -10.;

   /*** derivatives for constraint 23 ***/

	J[32] = 1.;
	J[39] = 1.;
	J[64] = -10.;

   /*** derivatives for constraint 24 ***/

	J[42] = 1.;
	J[67] = -10.;

   /*** derivatives for constraint 25 ***/

	J[52] = 1.;
	J[69] = -10.;

   /*** derivatives for constraint 26 ***/

	J[55] = 1.;
	J[71] = -10.;

   /*** derivatives for constraint 27 ***/

	J[25] = 1.;
	J[49] = 1.;
	J[73] = -10.;

   /*** derivatives for constraint 28 ***/

	J[61] = 1.;
	J[76] = 1.;

   /*** derivatives for constraint 29 ***/

	J[65] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 30 ***/

	J[66] = -1.;
	J[70] = 1.;
	J[72] = 1.;

   /*** derivatives for constraint 31 ***/

	J[63] = 1.;
	J[74] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
