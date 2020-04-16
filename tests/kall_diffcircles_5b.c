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
 fint kall_diffcircles_5b_auxcom_[1] = { 11 /* nlc */ };
 fint kall_diffcircles_5b_funcom_[88] = {
	14 /* nvar */,
	1 /* nobj */,
	24 /* ncon */,
	67 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	18,
	23,
	28,
	33,
	38,
	43,
	48,
	53,
	59,
	65,
	67,
	68,

	/* rownos */
	1,
	3,
	4,
	5,
	13,
	23,
	2,
	3,
	4,
	5,
	14,
	24,
	2,
	6,
	7,
	8,
	15,
	2,
	6,
	7,
	8,
	16,
	3,
	6,
	9,
	10,
	17,
	3,
	6,
	9,
	10,
	18,
	4,
	7,
	9,
	11,
	19,
	4,
	7,
	9,
	11,
	20,
	5,
	8,
	10,
	11,
	21,
	5,
	8,
	10,
	11,
	22,
	1,
	13,
	15,
	17,
	19,
	21,
	1,
	14,
	16,
	18,
	20,
	22,
	1,
	12,
	12 };

 real kall_diffcircles_5b_boundc_[1+28+48] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.2,
		16.8,
		1.2,
		3.8,
		0.6,
		17.4,
		0.6,
		4.4,
		0.8,
		17.2,
		0.8,
		4.2,
		1.7,
		16.3,
		1.7,
		3.3,
		0.5,
		17.5,
		0.5,
		4.5,
		0.,
		18.,
		0.,
		5.,
		2.89,
		90.,
		0.,
		90.,
		0.,
		0.,
		3.24,
		1.7e308,
		4.,
		1.7e308,
		8.41,
		1.7e308,
		2.89,
		1.7e308,
		1.96,
		1.7e308,
		5.29,
		1.7e308,
		1.21,
		1.7e308,
		6.25,
		1.7e308,
		1.69,
		1.7e308,
		4.84,
		1.7e308,
		-17.530087007031,
		-17.530087007031,
		-1.7e308,
		-1.2,
		-1.7e308,
		-1.2,
		-1.7e308,
		-0.6,
		-1.7e308,
		-0.6,
		-1.7e308,
		-0.8,
		-1.7e308,
		-0.8,
		-1.7e308,
		-1.7,
		-1.7e308,
		-1.7,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		9.,
		-1.7e308,
		2.5};

 real kall_diffcircles_5b_x0comn_[14] = {
		1.2,
		1.2,
		0.6,
		0.6,
		0.8,
		0.8,
		1.7,
		1.7,
		0.5,
		0.5,
		0.,
		0.,
		2.89,
		0. };

 static real kall_diffcircles_5b_pd[40];
static real kall_diffcircles_5b_old_x[14];
static int kall_diffcircles_5b_xkind = -1;

 static int
kall_diffcircles_5b_xcheck(real *x)
{
	real *x1 = kall_diffcircles_5b_old_x, *xe = x + 14;
	errno = 0;
	if (kall_diffcircles_5b_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_diffcircles_5b_xkind = 0;
	return 1;
	}
 real
kall_diffcircles_5b_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_diffcircles_5b_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[13];
	;}

	if (wantfg & 2) {
	g[13] = 1.;
	}

	return rv;
}

 void
kall_diffcircles_5b_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_diffcircles_5b_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[10] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_diffcircles_5b_pd[1] = x[0] - x[2];
	kall_diffcircles_5b_pd[0] = x[0] - x[2];
	v[2] = kall_diffcircles_5b_pd[1] * kall_diffcircles_5b_pd[0];
	kall_diffcircles_5b_pd[3] = x[1] - x[3];
	kall_diffcircles_5b_pd[2] = x[1] - x[3];
	v[5] = kall_diffcircles_5b_pd[3] * kall_diffcircles_5b_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_diffcircles_5b_pd[5] = x[0] - x[4];
	kall_diffcircles_5b_pd[4] = x[0] - x[4];
	v[2] = kall_diffcircles_5b_pd[5] * kall_diffcircles_5b_pd[4];
	kall_diffcircles_5b_pd[7] = x[1] - x[5];
	kall_diffcircles_5b_pd[6] = x[1] - x[5];
	v[5] = kall_diffcircles_5b_pd[7] * kall_diffcircles_5b_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_diffcircles_5b_pd[9] = x[0] - x[6];
	kall_diffcircles_5b_pd[8] = x[0] - x[6];
	v[2] = kall_diffcircles_5b_pd[9] * kall_diffcircles_5b_pd[8];
	kall_diffcircles_5b_pd[11] = x[1] - x[7];
	kall_diffcircles_5b_pd[10] = x[1] - x[7];
	v[5] = kall_diffcircles_5b_pd[11] * kall_diffcircles_5b_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_diffcircles_5b_pd[13] = x[0] - x[8];
	kall_diffcircles_5b_pd[12] = x[0] - x[8];
	v[2] = kall_diffcircles_5b_pd[13] * kall_diffcircles_5b_pd[12];
	kall_diffcircles_5b_pd[15] = x[1] - x[9];
	kall_diffcircles_5b_pd[14] = x[1] - x[9];
	v[5] = kall_diffcircles_5b_pd[15] * kall_diffcircles_5b_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_diffcircles_5b_pd[17] = x[2] - x[4];
	kall_diffcircles_5b_pd[16] = x[2] - x[4];
	v[2] = kall_diffcircles_5b_pd[17] * kall_diffcircles_5b_pd[16];
	kall_diffcircles_5b_pd[19] = x[3] - x[5];
	kall_diffcircles_5b_pd[18] = x[3] - x[5];
	v[5] = kall_diffcircles_5b_pd[19] * kall_diffcircles_5b_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_diffcircles_5b_pd[21] = x[2] - x[6];
	kall_diffcircles_5b_pd[20] = x[2] - x[6];
	v[2] = kall_diffcircles_5b_pd[21] * kall_diffcircles_5b_pd[20];
	kall_diffcircles_5b_pd[23] = x[3] - x[7];
	kall_diffcircles_5b_pd[22] = x[3] - x[7];
	v[5] = kall_diffcircles_5b_pd[23] * kall_diffcircles_5b_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	kall_diffcircles_5b_pd[25] = x[2] - x[8];
	kall_diffcircles_5b_pd[24] = x[2] - x[8];
	v[2] = kall_diffcircles_5b_pd[25] * kall_diffcircles_5b_pd[24];
	kall_diffcircles_5b_pd[27] = x[3] - x[9];
	kall_diffcircles_5b_pd[26] = x[3] - x[9];
	v[5] = kall_diffcircles_5b_pd[27] * kall_diffcircles_5b_pd[26];
	v[6] = v[2] + v[5];
	c[7] = v[6];

  /***  constraint 9  ***/

	kall_diffcircles_5b_pd[29] = x[4] - x[6];
	kall_diffcircles_5b_pd[28] = x[4] - x[6];
	v[2] = kall_diffcircles_5b_pd[29] * kall_diffcircles_5b_pd[28];
	kall_diffcircles_5b_pd[31] = x[5] - x[7];
	kall_diffcircles_5b_pd[30] = x[5] - x[7];
	v[5] = kall_diffcircles_5b_pd[31] * kall_diffcircles_5b_pd[30];
	v[6] = v[2] + v[5];
	c[8] = v[6];

  /***  constraint 10  ***/

	kall_diffcircles_5b_pd[33] = x[4] - x[8];
	kall_diffcircles_5b_pd[32] = x[4] - x[8];
	v[2] = kall_diffcircles_5b_pd[33] * kall_diffcircles_5b_pd[32];
	kall_diffcircles_5b_pd[35] = x[5] - x[9];
	kall_diffcircles_5b_pd[34] = x[5] - x[9];
	v[5] = kall_diffcircles_5b_pd[35] * kall_diffcircles_5b_pd[34];
	v[6] = v[2] + v[5];
	c[9] = v[6];

  /***  constraint 11  ***/

	kall_diffcircles_5b_pd[37] = x[6] - x[8];
	kall_diffcircles_5b_pd[36] = x[6] - x[8];
	v[2] = kall_diffcircles_5b_pd[37] * kall_diffcircles_5b_pd[36];
	kall_diffcircles_5b_pd[39] = x[7] - x[9];
	kall_diffcircles_5b_pd[38] = x[7] - x[9];
	v[5] = kall_diffcircles_5b_pd[39] * kall_diffcircles_5b_pd[38];
	v[6] = v[2] + v[5];
	c[10] = v[6];

  /***  constraint 12  ***/

	t1 = -x[12];
	t1 += x[13];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += -x[10];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[1];
	t1 += -x[11];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[2];
	t1 += -x[10];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[3];
	t1 += -x[11];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[4];
	t1 += -x[10];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[5];
	t1 += -x[11];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[6];
	t1 += -x[10];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[7];
	t1 += -x[11];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[8];
	t1 += -x[10];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[9];
	t1 += -x[11];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[0];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[1];
	c[23] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[58] = -x[10];
	J[52] = -x[11];
	J[64] = 1.;

   /*** derivatives for constraint 2 ***/

	J[17] = -kall_diffcircles_5b_pd[3];
	J[6] = kall_diffcircles_5b_pd[3];
	J[17] -= kall_diffcircles_5b_pd[2];
	J[6] += kall_diffcircles_5b_pd[2];
	J[12] = -kall_diffcircles_5b_pd[1];
	J[0] = kall_diffcircles_5b_pd[1];
	J[12] -= kall_diffcircles_5b_pd[0];
	J[0] += kall_diffcircles_5b_pd[0];

   /*** derivatives for constraint 3 ***/

	J[27] = -kall_diffcircles_5b_pd[7];
	J[7] = kall_diffcircles_5b_pd[7];
	J[27] -= kall_diffcircles_5b_pd[6];
	J[7] += kall_diffcircles_5b_pd[6];
	J[22] = -kall_diffcircles_5b_pd[5];
	J[1] = kall_diffcircles_5b_pd[5];
	J[22] -= kall_diffcircles_5b_pd[4];
	J[1] += kall_diffcircles_5b_pd[4];

   /*** derivatives for constraint 4 ***/

	J[37] = -kall_diffcircles_5b_pd[11];
	J[8] = kall_diffcircles_5b_pd[11];
	J[37] -= kall_diffcircles_5b_pd[10];
	J[8] += kall_diffcircles_5b_pd[10];
	J[32] = -kall_diffcircles_5b_pd[9];
	J[2] = kall_diffcircles_5b_pd[9];
	J[32] -= kall_diffcircles_5b_pd[8];
	J[2] += kall_diffcircles_5b_pd[8];

   /*** derivatives for constraint 5 ***/

	J[47] = -kall_diffcircles_5b_pd[15];
	J[9] = kall_diffcircles_5b_pd[15];
	J[47] -= kall_diffcircles_5b_pd[14];
	J[9] += kall_diffcircles_5b_pd[14];
	J[42] = -kall_diffcircles_5b_pd[13];
	J[3] = kall_diffcircles_5b_pd[13];
	J[42] -= kall_diffcircles_5b_pd[12];
	J[3] += kall_diffcircles_5b_pd[12];

   /*** derivatives for constraint 6 ***/

	J[28] = -kall_diffcircles_5b_pd[19];
	J[18] = kall_diffcircles_5b_pd[19];
	J[28] -= kall_diffcircles_5b_pd[18];
	J[18] += kall_diffcircles_5b_pd[18];
	J[23] = -kall_diffcircles_5b_pd[17];
	J[13] = kall_diffcircles_5b_pd[17];
	J[23] -= kall_diffcircles_5b_pd[16];
	J[13] += kall_diffcircles_5b_pd[16];

   /*** derivatives for constraint 7 ***/

	J[38] = -kall_diffcircles_5b_pd[23];
	J[19] = kall_diffcircles_5b_pd[23];
	J[38] -= kall_diffcircles_5b_pd[22];
	J[19] += kall_diffcircles_5b_pd[22];
	J[33] = -kall_diffcircles_5b_pd[21];
	J[14] = kall_diffcircles_5b_pd[21];
	J[33] -= kall_diffcircles_5b_pd[20];
	J[14] += kall_diffcircles_5b_pd[20];

   /*** derivatives for constraint 8 ***/

	J[48] = -kall_diffcircles_5b_pd[27];
	J[20] = kall_diffcircles_5b_pd[27];
	J[48] -= kall_diffcircles_5b_pd[26];
	J[20] += kall_diffcircles_5b_pd[26];
	J[43] = -kall_diffcircles_5b_pd[25];
	J[15] = kall_diffcircles_5b_pd[25];
	J[43] -= kall_diffcircles_5b_pd[24];
	J[15] += kall_diffcircles_5b_pd[24];

   /*** derivatives for constraint 9 ***/

	J[39] = -kall_diffcircles_5b_pd[31];
	J[29] = kall_diffcircles_5b_pd[31];
	J[39] -= kall_diffcircles_5b_pd[30];
	J[29] += kall_diffcircles_5b_pd[30];
	J[34] = -kall_diffcircles_5b_pd[29];
	J[24] = kall_diffcircles_5b_pd[29];
	J[34] -= kall_diffcircles_5b_pd[28];
	J[24] += kall_diffcircles_5b_pd[28];

   /*** derivatives for constraint 10 ***/

	J[49] = -kall_diffcircles_5b_pd[35];
	J[30] = kall_diffcircles_5b_pd[35];
	J[49] -= kall_diffcircles_5b_pd[34];
	J[30] += kall_diffcircles_5b_pd[34];
	J[44] = -kall_diffcircles_5b_pd[33];
	J[25] = kall_diffcircles_5b_pd[33];
	J[44] -= kall_diffcircles_5b_pd[32];
	J[25] += kall_diffcircles_5b_pd[32];

   /*** derivatives for constraint 11 ***/

	J[50] = -kall_diffcircles_5b_pd[39];
	J[40] = kall_diffcircles_5b_pd[39];
	J[50] -= kall_diffcircles_5b_pd[38];
	J[40] += kall_diffcircles_5b_pd[38];
	J[45] = -kall_diffcircles_5b_pd[37];
	J[35] = kall_diffcircles_5b_pd[37];
	J[45] -= kall_diffcircles_5b_pd[36];
	J[35] += kall_diffcircles_5b_pd[36];

   /*** derivatives for constraint 12 ***/

	J[65] = -1.;
	J[66] = 1.;

   /*** derivatives for constraint 13 ***/

	J[4] = 1.;
	J[53] = -1.;

   /*** derivatives for constraint 14 ***/

	J[10] = 1.;
	J[59] = -1.;

   /*** derivatives for constraint 15 ***/

	J[16] = 1.;
	J[54] = -1.;

   /*** derivatives for constraint 16 ***/

	J[21] = 1.;
	J[60] = -1.;

   /*** derivatives for constraint 17 ***/

	J[26] = 1.;
	J[55] = -1.;

   /*** derivatives for constraint 18 ***/

	J[31] = 1.;
	J[61] = -1.;

   /*** derivatives for constraint 19 ***/

	J[36] = 1.;
	J[56] = -1.;

   /*** derivatives for constraint 20 ***/

	J[41] = 1.;
	J[62] = -1.;

   /*** derivatives for constraint 21 ***/

	J[46] = 1.;
	J[57] = -1.;

   /*** derivatives for constraint 22 ***/

	J[51] = 1.;
	J[63] = -1.;

   /*** derivatives for constraint 23 ***/

	J[5] = 1.;

   /*** derivatives for constraint 24 ***/

	J[11] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
