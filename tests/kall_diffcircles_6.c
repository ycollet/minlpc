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
 fint kall_diffcircles_6_auxcom_[1] = { 16 /* nlc */ };
 fint kall_diffcircles_6_funcom_[114] = {
	16 /* nvar */,
	1 /* nobj */,
	31 /* ncon */,
	91 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	21,
	27,
	33,
	39,
	45,
	51,
	57,
	63,
	69,
	75,
	82,
	89,
	91,
	92,

	/* rownos */
	1,
	3,
	4,
	5,
	6,
	18,
	30,
	2,
	3,
	4,
	5,
	6,
	19,
	31,
	2,
	7,
	8,
	9,
	10,
	20,
	2,
	7,
	8,
	9,
	10,
	21,
	3,
	7,
	11,
	12,
	13,
	22,
	3,
	7,
	11,
	12,
	13,
	23,
	4,
	8,
	11,
	14,
	15,
	24,
	4,
	8,
	11,
	14,
	15,
	25,
	5,
	9,
	12,
	14,
	16,
	26,
	5,
	9,
	12,
	14,
	16,
	27,
	6,
	10,
	13,
	15,
	16,
	28,
	6,
	10,
	13,
	15,
	16,
	29,
	1,
	18,
	20,
	22,
	24,
	26,
	28,
	1,
	19,
	21,
	23,
	25,
	27,
	29,
	1,
	17,
	17 };

 real kall_diffcircles_6_boundc_[1+32+62] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.2,
		6.8,
		1.2,
		2.8,
		0.6,
		7.4,
		0.6,
		3.4,
		0.8,
		7.2,
		0.8,
		3.2,
		1.7,
		6.3,
		1.7,
		2.3,
		0.5,
		7.5,
		0.5,
		3.5,
		1.3,
		6.7,
		1.3,
		2.7,
		0.,
		8.,
		0.,
		4.,
		2.89,
		32.,
		0.,
		32.,
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
		6.25,
		1.7e308,
		1.96,
		1.7e308,
		5.29,
		1.7e308,
		1.21,
		1.7e308,
		3.61,
		1.7e308,
		6.25,
		1.7e308,
		1.69,
		1.7e308,
		4.41,
		1.7e308,
		4.84,
		1.7e308,
		9.,
		1.7e308,
		3.24,
		1.7e308,
		-22.8393785915978,
		-22.8393785915978,
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
		-1.3,
		-1.7e308,
		-1.3,
		-1.7e308,
		4.,
		-1.7e308,
		2.};

 real kall_diffcircles_6_x0comn_[16] = {
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
		1.3,
		1.3,
		0.,
		0.,
		2.89,
		0. };

 static real kall_diffcircles_6_pd[60];
static real kall_diffcircles_6_old_x[16];
static int kall_diffcircles_6_xkind = -1;

 static int
kall_diffcircles_6_xcheck(real *x)
{
	real *x1 = kall_diffcircles_6_old_x, *xe = x + 16;
	errno = 0;
	if (kall_diffcircles_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_diffcircles_6_xkind = 0;
	return 1;
	}
 real
kall_diffcircles_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_diffcircles_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[15];
	;}

	if (wantfg & 2) {
	g[15] = 1.;
	}

	return rv;
}

 void
kall_diffcircles_6_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_diffcircles_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[12] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[14];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_diffcircles_6_pd[1] = x[0] - x[2];
	kall_diffcircles_6_pd[0] = x[0] - x[2];
	v[2] = kall_diffcircles_6_pd[1] * kall_diffcircles_6_pd[0];
	kall_diffcircles_6_pd[3] = x[1] - x[3];
	kall_diffcircles_6_pd[2] = x[1] - x[3];
	v[5] = kall_diffcircles_6_pd[3] * kall_diffcircles_6_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_diffcircles_6_pd[5] = x[0] - x[4];
	kall_diffcircles_6_pd[4] = x[0] - x[4];
	v[2] = kall_diffcircles_6_pd[5] * kall_diffcircles_6_pd[4];
	kall_diffcircles_6_pd[7] = x[1] - x[5];
	kall_diffcircles_6_pd[6] = x[1] - x[5];
	v[5] = kall_diffcircles_6_pd[7] * kall_diffcircles_6_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_diffcircles_6_pd[9] = x[0] - x[6];
	kall_diffcircles_6_pd[8] = x[0] - x[6];
	v[2] = kall_diffcircles_6_pd[9] * kall_diffcircles_6_pd[8];
	kall_diffcircles_6_pd[11] = x[1] - x[7];
	kall_diffcircles_6_pd[10] = x[1] - x[7];
	v[5] = kall_diffcircles_6_pd[11] * kall_diffcircles_6_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_diffcircles_6_pd[13] = x[0] - x[8];
	kall_diffcircles_6_pd[12] = x[0] - x[8];
	v[2] = kall_diffcircles_6_pd[13] * kall_diffcircles_6_pd[12];
	kall_diffcircles_6_pd[15] = x[1] - x[9];
	kall_diffcircles_6_pd[14] = x[1] - x[9];
	v[5] = kall_diffcircles_6_pd[15] * kall_diffcircles_6_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_diffcircles_6_pd[17] = x[0] - x[10];
	kall_diffcircles_6_pd[16] = x[0] - x[10];
	v[2] = kall_diffcircles_6_pd[17] * kall_diffcircles_6_pd[16];
	kall_diffcircles_6_pd[19] = x[1] - x[11];
	kall_diffcircles_6_pd[18] = x[1] - x[11];
	v[5] = kall_diffcircles_6_pd[19] * kall_diffcircles_6_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_diffcircles_6_pd[21] = x[2] - x[4];
	kall_diffcircles_6_pd[20] = x[2] - x[4];
	v[2] = kall_diffcircles_6_pd[21] * kall_diffcircles_6_pd[20];
	kall_diffcircles_6_pd[23] = x[3] - x[5];
	kall_diffcircles_6_pd[22] = x[3] - x[5];
	v[5] = kall_diffcircles_6_pd[23] * kall_diffcircles_6_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	kall_diffcircles_6_pd[25] = x[2] - x[6];
	kall_diffcircles_6_pd[24] = x[2] - x[6];
	v[2] = kall_diffcircles_6_pd[25] * kall_diffcircles_6_pd[24];
	kall_diffcircles_6_pd[27] = x[3] - x[7];
	kall_diffcircles_6_pd[26] = x[3] - x[7];
	v[5] = kall_diffcircles_6_pd[27] * kall_diffcircles_6_pd[26];
	v[6] = v[2] + v[5];
	c[7] = v[6];

  /***  constraint 9  ***/

	kall_diffcircles_6_pd[29] = x[2] - x[8];
	kall_diffcircles_6_pd[28] = x[2] - x[8];
	v[2] = kall_diffcircles_6_pd[29] * kall_diffcircles_6_pd[28];
	kall_diffcircles_6_pd[31] = x[3] - x[9];
	kall_diffcircles_6_pd[30] = x[3] - x[9];
	v[5] = kall_diffcircles_6_pd[31] * kall_diffcircles_6_pd[30];
	v[6] = v[2] + v[5];
	c[8] = v[6];

  /***  constraint 10  ***/

	kall_diffcircles_6_pd[33] = x[2] - x[10];
	kall_diffcircles_6_pd[32] = x[2] - x[10];
	v[2] = kall_diffcircles_6_pd[33] * kall_diffcircles_6_pd[32];
	kall_diffcircles_6_pd[35] = x[3] - x[11];
	kall_diffcircles_6_pd[34] = x[3] - x[11];
	v[5] = kall_diffcircles_6_pd[35] * kall_diffcircles_6_pd[34];
	v[6] = v[2] + v[5];
	c[9] = v[6];

  /***  constraint 11  ***/

	kall_diffcircles_6_pd[37] = x[4] - x[6];
	kall_diffcircles_6_pd[36] = x[4] - x[6];
	v[2] = kall_diffcircles_6_pd[37] * kall_diffcircles_6_pd[36];
	kall_diffcircles_6_pd[39] = x[5] - x[7];
	kall_diffcircles_6_pd[38] = x[5] - x[7];
	v[5] = kall_diffcircles_6_pd[39] * kall_diffcircles_6_pd[38];
	v[6] = v[2] + v[5];
	c[10] = v[6];

  /***  constraint 12  ***/

	kall_diffcircles_6_pd[41] = x[4] - x[8];
	kall_diffcircles_6_pd[40] = x[4] - x[8];
	v[2] = kall_diffcircles_6_pd[41] * kall_diffcircles_6_pd[40];
	kall_diffcircles_6_pd[43] = x[5] - x[9];
	kall_diffcircles_6_pd[42] = x[5] - x[9];
	v[5] = kall_diffcircles_6_pd[43] * kall_diffcircles_6_pd[42];
	v[6] = v[2] + v[5];
	c[11] = v[6];

  /***  constraint 13  ***/

	kall_diffcircles_6_pd[45] = x[4] - x[10];
	kall_diffcircles_6_pd[44] = x[4] - x[10];
	v[2] = kall_diffcircles_6_pd[45] * kall_diffcircles_6_pd[44];
	kall_diffcircles_6_pd[47] = x[5] - x[11];
	kall_diffcircles_6_pd[46] = x[5] - x[11];
	v[5] = kall_diffcircles_6_pd[47] * kall_diffcircles_6_pd[46];
	v[6] = v[2] + v[5];
	c[12] = v[6];

  /***  constraint 14  ***/

	kall_diffcircles_6_pd[49] = x[6] - x[8];
	kall_diffcircles_6_pd[48] = x[6] - x[8];
	v[2] = kall_diffcircles_6_pd[49] * kall_diffcircles_6_pd[48];
	kall_diffcircles_6_pd[51] = x[7] - x[9];
	kall_diffcircles_6_pd[50] = x[7] - x[9];
	v[5] = kall_diffcircles_6_pd[51] * kall_diffcircles_6_pd[50];
	v[6] = v[2] + v[5];
	c[13] = v[6];

  /***  constraint 15  ***/

	kall_diffcircles_6_pd[53] = x[6] - x[10];
	kall_diffcircles_6_pd[52] = x[6] - x[10];
	v[2] = kall_diffcircles_6_pd[53] * kall_diffcircles_6_pd[52];
	kall_diffcircles_6_pd[55] = x[7] - x[11];
	kall_diffcircles_6_pd[54] = x[7] - x[11];
	v[5] = kall_diffcircles_6_pd[55] * kall_diffcircles_6_pd[54];
	v[6] = v[2] + v[5];
	c[14] = v[6];

  /***  constraint 16  ***/

	kall_diffcircles_6_pd[57] = x[8] - x[10];
	kall_diffcircles_6_pd[56] = x[8] - x[10];
	v[2] = kall_diffcircles_6_pd[57] * kall_diffcircles_6_pd[56];
	kall_diffcircles_6_pd[59] = x[9] - x[11];
	kall_diffcircles_6_pd[58] = x[9] - x[11];
	v[5] = kall_diffcircles_6_pd[59] * kall_diffcircles_6_pd[58];
	v[6] = v[2] + v[5];
	c[15] = v[6];

  /***  constraint 17  ***/

	t1 = -x[14];
	t1 += x[15];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[0];
	t1 += -x[12];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[1];
	t1 += -x[13];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[2];
	t1 += -x[12];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[3];
	t1 += -x[13];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[4];
	t1 += -x[12];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[5];
	t1 += -x[13];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[6];
	t1 += -x[12];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[7];
	t1 += -x[13];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[8];
	t1 += -x[12];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[9];
	t1 += -x[13];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[10];
	t1 += -x[12];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[11];
	t1 += -x[13];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[0];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[1];
	c[30] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[81] = -x[12];
	J[74] = -x[13];
	J[88] = 1.;

   /*** derivatives for constraint 2 ***/

	J[20] = -kall_diffcircles_6_pd[3];
	J[7] = kall_diffcircles_6_pd[3];
	J[20] -= kall_diffcircles_6_pd[2];
	J[7] += kall_diffcircles_6_pd[2];
	J[14] = -kall_diffcircles_6_pd[1];
	J[0] = kall_diffcircles_6_pd[1];
	J[14] -= kall_diffcircles_6_pd[0];
	J[0] += kall_diffcircles_6_pd[0];

   /*** derivatives for constraint 3 ***/

	J[32] = -kall_diffcircles_6_pd[7];
	J[8] = kall_diffcircles_6_pd[7];
	J[32] -= kall_diffcircles_6_pd[6];
	J[8] += kall_diffcircles_6_pd[6];
	J[26] = -kall_diffcircles_6_pd[5];
	J[1] = kall_diffcircles_6_pd[5];
	J[26] -= kall_diffcircles_6_pd[4];
	J[1] += kall_diffcircles_6_pd[4];

   /*** derivatives for constraint 4 ***/

	J[44] = -kall_diffcircles_6_pd[11];
	J[9] = kall_diffcircles_6_pd[11];
	J[44] -= kall_diffcircles_6_pd[10];
	J[9] += kall_diffcircles_6_pd[10];
	J[38] = -kall_diffcircles_6_pd[9];
	J[2] = kall_diffcircles_6_pd[9];
	J[38] -= kall_diffcircles_6_pd[8];
	J[2] += kall_diffcircles_6_pd[8];

   /*** derivatives for constraint 5 ***/

	J[56] = -kall_diffcircles_6_pd[15];
	J[10] = kall_diffcircles_6_pd[15];
	J[56] -= kall_diffcircles_6_pd[14];
	J[10] += kall_diffcircles_6_pd[14];
	J[50] = -kall_diffcircles_6_pd[13];
	J[3] = kall_diffcircles_6_pd[13];
	J[50] -= kall_diffcircles_6_pd[12];
	J[3] += kall_diffcircles_6_pd[12];

   /*** derivatives for constraint 6 ***/

	J[68] = -kall_diffcircles_6_pd[19];
	J[11] = kall_diffcircles_6_pd[19];
	J[68] -= kall_diffcircles_6_pd[18];
	J[11] += kall_diffcircles_6_pd[18];
	J[62] = -kall_diffcircles_6_pd[17];
	J[4] = kall_diffcircles_6_pd[17];
	J[62] -= kall_diffcircles_6_pd[16];
	J[4] += kall_diffcircles_6_pd[16];

   /*** derivatives for constraint 7 ***/

	J[33] = -kall_diffcircles_6_pd[23];
	J[21] = kall_diffcircles_6_pd[23];
	J[33] -= kall_diffcircles_6_pd[22];
	J[21] += kall_diffcircles_6_pd[22];
	J[27] = -kall_diffcircles_6_pd[21];
	J[15] = kall_diffcircles_6_pd[21];
	J[27] -= kall_diffcircles_6_pd[20];
	J[15] += kall_diffcircles_6_pd[20];

   /*** derivatives for constraint 8 ***/

	J[45] = -kall_diffcircles_6_pd[27];
	J[22] = kall_diffcircles_6_pd[27];
	J[45] -= kall_diffcircles_6_pd[26];
	J[22] += kall_diffcircles_6_pd[26];
	J[39] = -kall_diffcircles_6_pd[25];
	J[16] = kall_diffcircles_6_pd[25];
	J[39] -= kall_diffcircles_6_pd[24];
	J[16] += kall_diffcircles_6_pd[24];

   /*** derivatives for constraint 9 ***/

	J[57] = -kall_diffcircles_6_pd[31];
	J[23] = kall_diffcircles_6_pd[31];
	J[57] -= kall_diffcircles_6_pd[30];
	J[23] += kall_diffcircles_6_pd[30];
	J[51] = -kall_diffcircles_6_pd[29];
	J[17] = kall_diffcircles_6_pd[29];
	J[51] -= kall_diffcircles_6_pd[28];
	J[17] += kall_diffcircles_6_pd[28];

   /*** derivatives for constraint 10 ***/

	J[69] = -kall_diffcircles_6_pd[35];
	J[24] = kall_diffcircles_6_pd[35];
	J[69] -= kall_diffcircles_6_pd[34];
	J[24] += kall_diffcircles_6_pd[34];
	J[63] = -kall_diffcircles_6_pd[33];
	J[18] = kall_diffcircles_6_pd[33];
	J[63] -= kall_diffcircles_6_pd[32];
	J[18] += kall_diffcircles_6_pd[32];

   /*** derivatives for constraint 11 ***/

	J[46] = -kall_diffcircles_6_pd[39];
	J[34] = kall_diffcircles_6_pd[39];
	J[46] -= kall_diffcircles_6_pd[38];
	J[34] += kall_diffcircles_6_pd[38];
	J[40] = -kall_diffcircles_6_pd[37];
	J[28] = kall_diffcircles_6_pd[37];
	J[40] -= kall_diffcircles_6_pd[36];
	J[28] += kall_diffcircles_6_pd[36];

   /*** derivatives for constraint 12 ***/

	J[58] = -kall_diffcircles_6_pd[43];
	J[35] = kall_diffcircles_6_pd[43];
	J[58] -= kall_diffcircles_6_pd[42];
	J[35] += kall_diffcircles_6_pd[42];
	J[52] = -kall_diffcircles_6_pd[41];
	J[29] = kall_diffcircles_6_pd[41];
	J[52] -= kall_diffcircles_6_pd[40];
	J[29] += kall_diffcircles_6_pd[40];

   /*** derivatives for constraint 13 ***/

	J[70] = -kall_diffcircles_6_pd[47];
	J[36] = kall_diffcircles_6_pd[47];
	J[70] -= kall_diffcircles_6_pd[46];
	J[36] += kall_diffcircles_6_pd[46];
	J[64] = -kall_diffcircles_6_pd[45];
	J[30] = kall_diffcircles_6_pd[45];
	J[64] -= kall_diffcircles_6_pd[44];
	J[30] += kall_diffcircles_6_pd[44];

   /*** derivatives for constraint 14 ***/

	J[59] = -kall_diffcircles_6_pd[51];
	J[47] = kall_diffcircles_6_pd[51];
	J[59] -= kall_diffcircles_6_pd[50];
	J[47] += kall_diffcircles_6_pd[50];
	J[53] = -kall_diffcircles_6_pd[49];
	J[41] = kall_diffcircles_6_pd[49];
	J[53] -= kall_diffcircles_6_pd[48];
	J[41] += kall_diffcircles_6_pd[48];

   /*** derivatives for constraint 15 ***/

	J[71] = -kall_diffcircles_6_pd[55];
	J[48] = kall_diffcircles_6_pd[55];
	J[71] -= kall_diffcircles_6_pd[54];
	J[48] += kall_diffcircles_6_pd[54];
	J[65] = -kall_diffcircles_6_pd[53];
	J[42] = kall_diffcircles_6_pd[53];
	J[65] -= kall_diffcircles_6_pd[52];
	J[42] += kall_diffcircles_6_pd[52];

   /*** derivatives for constraint 16 ***/

	J[72] = -kall_diffcircles_6_pd[59];
	J[60] = kall_diffcircles_6_pd[59];
	J[72] -= kall_diffcircles_6_pd[58];
	J[60] += kall_diffcircles_6_pd[58];
	J[66] = -kall_diffcircles_6_pd[57];
	J[54] = kall_diffcircles_6_pd[57];
	J[66] -= kall_diffcircles_6_pd[56];
	J[54] += kall_diffcircles_6_pd[56];

   /*** derivatives for constraint 17 ***/

	J[89] = -1.;
	J[90] = 1.;

   /*** derivatives for constraint 18 ***/

	J[5] = 1.;
	J[75] = -1.;

   /*** derivatives for constraint 19 ***/

	J[12] = 1.;
	J[82] = -1.;

   /*** derivatives for constraint 20 ***/

	J[19] = 1.;
	J[76] = -1.;

   /*** derivatives for constraint 21 ***/

	J[25] = 1.;
	J[83] = -1.;

   /*** derivatives for constraint 22 ***/

	J[31] = 1.;
	J[77] = -1.;

   /*** derivatives for constraint 23 ***/

	J[37] = 1.;
	J[84] = -1.;

   /*** derivatives for constraint 24 ***/

	J[43] = 1.;
	J[78] = -1.;

   /*** derivatives for constraint 25 ***/

	J[49] = 1.;
	J[85] = -1.;

   /*** derivatives for constraint 26 ***/

	J[55] = 1.;
	J[79] = -1.;

   /*** derivatives for constraint 27 ***/

	J[61] = 1.;
	J[86] = -1.;

   /*** derivatives for constraint 28 ***/

	J[67] = 1.;
	J[80] = -1.;

   /*** derivatives for constraint 29 ***/

	J[73] = 1.;
	J[87] = -1.;

   /*** derivatives for constraint 30 ***/

	J[6] = 1.;

   /*** derivatives for constraint 31 ***/

	J[13] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
