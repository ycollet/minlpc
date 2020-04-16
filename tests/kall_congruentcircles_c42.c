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
 fint kall_congruentcircles_c42_auxcom_[1] = { 7 /* nlc */ };
 fint kall_congruentcircles_c42_funcom_[78] = {
	12 /* nvar */,
	1 /* nobj */,
	24 /* ncon */,
	59 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	9,
	14,
	21,
	25,
	32,
	36,
	43,
	47,
	52,
	57,
	59,
	60,

	/* rownos */
	1,
	3,
	4,
	9,
	17,
	19,
	20,
	21,
	2,
	3,
	4,
	10,
	18,
	2,
	5,
	6,
	11,
	19,
	22,
	23,
	2,
	5,
	6,
	12,
	3,
	5,
	7,
	13,
	20,
	22,
	24,
	3,
	5,
	7,
	14,
	4,
	6,
	7,
	15,
	21,
	23,
	24,
	4,
	6,
	7,
	16,
	1,
	9,
	11,
	13,
	15,
	1,
	10,
	12,
	14,
	16,
	1,
	8,
	8 };

 real kall_congruentcircles_c42_boundc_[1+24+48] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		3.5,
		0.5,
		1.5,
		0.5,
		3.5,
		0.5,
		1.5,
		0.5,
		3.5,
		0.5,
		1.5,
		0.5,
		3.5,
		0.5,
		1.5,
		0.,
		4.,
		0.,
		2.,
		0.25,
		8.,
		0.,
		8.,
		0.,
		0.,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		-3.14159265358979,
		-3.14159265358979,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		2.,
		-1.7e308,
		1.,
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
		0.};

 real kall_congruentcircles_c42_x0comn_[12] = {
		0.5,
		0.5,
		0.5,
		0.5,
		0.5,
		0.5,
		0.5,
		0.5,
		0.,
		0.,
		0.25,
		0. };

 static real kall_congruentcircles_c42_pd[24];
static real kall_congruentcircles_c42_old_x[12];
static int kall_congruentcircles_c42_xkind = -1;

 static int
kall_congruentcircles_c42_xcheck(real *x)
{
	real *x1 = kall_congruentcircles_c42_old_x, *xe = x + 12;
	errno = 0;
	if (kall_congruentcircles_c42_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_congruentcircles_c42_xkind = 0;
	return 1;
	}
 real
kall_congruentcircles_c42_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_congruentcircles_c42_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[11];
	;}

	if (wantfg & 2) {
	g[11] = 1.;
	}

	return rv;
}

 void
kall_congruentcircles_c42_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_congruentcircles_c42_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[8] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[10];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_congruentcircles_c42_pd[1] = x[0] - x[2];
	kall_congruentcircles_c42_pd[0] = x[0] - x[2];
	v[2] = kall_congruentcircles_c42_pd[1] * kall_congruentcircles_c42_pd[0];
	kall_congruentcircles_c42_pd[3] = x[1] - x[3];
	kall_congruentcircles_c42_pd[2] = x[1] - x[3];
	v[5] = kall_congruentcircles_c42_pd[3] * kall_congruentcircles_c42_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_congruentcircles_c42_pd[5] = x[0] - x[4];
	kall_congruentcircles_c42_pd[4] = x[0] - x[4];
	v[2] = kall_congruentcircles_c42_pd[5] * kall_congruentcircles_c42_pd[4];
	kall_congruentcircles_c42_pd[7] = x[1] - x[5];
	kall_congruentcircles_c42_pd[6] = x[1] - x[5];
	v[5] = kall_congruentcircles_c42_pd[7] * kall_congruentcircles_c42_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_congruentcircles_c42_pd[9] = x[0] - x[6];
	kall_congruentcircles_c42_pd[8] = x[0] - x[6];
	v[2] = kall_congruentcircles_c42_pd[9] * kall_congruentcircles_c42_pd[8];
	kall_congruentcircles_c42_pd[11] = x[1] - x[7];
	kall_congruentcircles_c42_pd[10] = x[1] - x[7];
	v[5] = kall_congruentcircles_c42_pd[11] * kall_congruentcircles_c42_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_congruentcircles_c42_pd[13] = x[2] - x[4];
	kall_congruentcircles_c42_pd[12] = x[2] - x[4];
	v[2] = kall_congruentcircles_c42_pd[13] * kall_congruentcircles_c42_pd[12];
	kall_congruentcircles_c42_pd[15] = x[3] - x[5];
	kall_congruentcircles_c42_pd[14] = x[3] - x[5];
	v[5] = kall_congruentcircles_c42_pd[15] * kall_congruentcircles_c42_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_congruentcircles_c42_pd[17] = x[2] - x[6];
	kall_congruentcircles_c42_pd[16] = x[2] - x[6];
	v[2] = kall_congruentcircles_c42_pd[17] * kall_congruentcircles_c42_pd[16];
	kall_congruentcircles_c42_pd[19] = x[3] - x[7];
	kall_congruentcircles_c42_pd[18] = x[3] - x[7];
	v[5] = kall_congruentcircles_c42_pd[19] * kall_congruentcircles_c42_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_congruentcircles_c42_pd[21] = x[4] - x[6];
	kall_congruentcircles_c42_pd[20] = x[4] - x[6];
	v[2] = kall_congruentcircles_c42_pd[21] * kall_congruentcircles_c42_pd[20];
	kall_congruentcircles_c42_pd[23] = x[5] - x[7];
	kall_congruentcircles_c42_pd[22] = x[5] - x[7];
	v[5] = kall_congruentcircles_c42_pd[23] * kall_congruentcircles_c42_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	t1 = -x[10];
	t1 += x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[0];
	t1 += -x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[1];
	t1 += -x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[2];
	t1 += -x[8];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[3];
	t1 += -x[9];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[4];
	t1 += -x[8];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[5];
	t1 += -x[9];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[6];
	t1 += -x[8];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[7];
	t1 += -x[9];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[0];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[1];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[0];
	t1 += -x[2];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[0];
	t1 += -x[4];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[0];
	t1 += -x[6];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[2];
	t1 += -x[4];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[2];
	t1 += -x[6];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[4];
	t1 += -x[6];
	c[23] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[51] = -x[8];
	J[46] = -x[9];
	J[56] = 1.;

   /*** derivatives for constraint 2 ***/

	J[20] = -kall_congruentcircles_c42_pd[3];
	J[8] = kall_congruentcircles_c42_pd[3];
	J[20] -= kall_congruentcircles_c42_pd[2];
	J[8] += kall_congruentcircles_c42_pd[2];
	J[13] = -kall_congruentcircles_c42_pd[1];
	J[0] = kall_congruentcircles_c42_pd[1];
	J[13] -= kall_congruentcircles_c42_pd[0];
	J[0] += kall_congruentcircles_c42_pd[0];

   /*** derivatives for constraint 3 ***/

	J[31] = -kall_congruentcircles_c42_pd[7];
	J[9] = kall_congruentcircles_c42_pd[7];
	J[31] -= kall_congruentcircles_c42_pd[6];
	J[9] += kall_congruentcircles_c42_pd[6];
	J[24] = -kall_congruentcircles_c42_pd[5];
	J[1] = kall_congruentcircles_c42_pd[5];
	J[24] -= kall_congruentcircles_c42_pd[4];
	J[1] += kall_congruentcircles_c42_pd[4];

   /*** derivatives for constraint 4 ***/

	J[42] = -kall_congruentcircles_c42_pd[11];
	J[10] = kall_congruentcircles_c42_pd[11];
	J[42] -= kall_congruentcircles_c42_pd[10];
	J[10] += kall_congruentcircles_c42_pd[10];
	J[35] = -kall_congruentcircles_c42_pd[9];
	J[2] = kall_congruentcircles_c42_pd[9];
	J[35] -= kall_congruentcircles_c42_pd[8];
	J[2] += kall_congruentcircles_c42_pd[8];

   /*** derivatives for constraint 5 ***/

	J[32] = -kall_congruentcircles_c42_pd[15];
	J[21] = kall_congruentcircles_c42_pd[15];
	J[32] -= kall_congruentcircles_c42_pd[14];
	J[21] += kall_congruentcircles_c42_pd[14];
	J[25] = -kall_congruentcircles_c42_pd[13];
	J[14] = kall_congruentcircles_c42_pd[13];
	J[25] -= kall_congruentcircles_c42_pd[12];
	J[14] += kall_congruentcircles_c42_pd[12];

   /*** derivatives for constraint 6 ***/

	J[43] = -kall_congruentcircles_c42_pd[19];
	J[22] = kall_congruentcircles_c42_pd[19];
	J[43] -= kall_congruentcircles_c42_pd[18];
	J[22] += kall_congruentcircles_c42_pd[18];
	J[36] = -kall_congruentcircles_c42_pd[17];
	J[15] = kall_congruentcircles_c42_pd[17];
	J[36] -= kall_congruentcircles_c42_pd[16];
	J[15] += kall_congruentcircles_c42_pd[16];

   /*** derivatives for constraint 7 ***/

	J[44] = -kall_congruentcircles_c42_pd[23];
	J[33] = kall_congruentcircles_c42_pd[23];
	J[44] -= kall_congruentcircles_c42_pd[22];
	J[33] += kall_congruentcircles_c42_pd[22];
	J[37] = -kall_congruentcircles_c42_pd[21];
	J[26] = kall_congruentcircles_c42_pd[21];
	J[37] -= kall_congruentcircles_c42_pd[20];
	J[26] += kall_congruentcircles_c42_pd[20];

   /*** derivatives for constraint 8 ***/

	J[57] = -1.;
	J[58] = 1.;

   /*** derivatives for constraint 9 ***/

	J[3] = 1.;
	J[47] = -1.;

   /*** derivatives for constraint 10 ***/

	J[11] = 1.;
	J[52] = -1.;

   /*** derivatives for constraint 11 ***/

	J[16] = 1.;
	J[48] = -1.;

   /*** derivatives for constraint 12 ***/

	J[23] = 1.;
	J[53] = -1.;

   /*** derivatives for constraint 13 ***/

	J[27] = 1.;
	J[49] = -1.;

   /*** derivatives for constraint 14 ***/

	J[34] = 1.;
	J[54] = -1.;

   /*** derivatives for constraint 15 ***/

	J[38] = 1.;
	J[50] = -1.;

   /*** derivatives for constraint 16 ***/

	J[45] = 1.;
	J[55] = -1.;

   /*** derivatives for constraint 17 ***/

	J[4] = 1.;

   /*** derivatives for constraint 18 ***/

	J[12] = 1.;

   /*** derivatives for constraint 19 ***/

	J[5] = 1.;
	J[17] = -1.;

   /*** derivatives for constraint 20 ***/

	J[6] = 1.;
	J[28] = -1.;

   /*** derivatives for constraint 21 ***/

	J[7] = 1.;
	J[39] = -1.;

   /*** derivatives for constraint 22 ***/

	J[18] = 1.;
	J[29] = -1.;

   /*** derivatives for constraint 23 ***/

	J[19] = 1.;
	J[40] = -1.;

   /*** derivatives for constraint 24 ***/

	J[30] = 1.;
	J[41] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
