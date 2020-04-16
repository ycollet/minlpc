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
 fint kall_congruentcircles_c63_auxcom_[1] = { 16 /* nlc */ };
 fint kall_congruentcircles_c63_funcom_[144] = {
	16 /* nvar */,
	1 /* nobj */,
	46 /* ncon */,
	121 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	13,
	20,
	31,
	37,
	48,
	54,
	65,
	71,
	82,
	88,
	99,
	105,
	112,
	119,
	121,
	122,

	/* rownos */
	1,
	3,
	4,
	5,
	6,
	18,
	30,
	32,
	33,
	34,
	35,
	36,
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
	32,
	37,
	38,
	39,
	40,
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
	33,
	37,
	41,
	42,
	43,
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
	34,
	38,
	41,
	44,
	45,
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
	35,
	39,
	42,
	44,
	46,
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
	36,
	40,
	43,
	45,
	46,
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

 real kall_congruentcircles_c63_boundc_[1+32+92] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		7.5,
		0.5,
		1.4,
		0.5,
		7.5,
		0.5,
		1.4,
		0.5,
		7.5,
		0.5,
		1.4,
		0.5,
		7.5,
		0.5,
		1.4,
		0.5,
		7.5,
		0.5,
		1.4,
		0.5,
		7.5,
		0.5,
		1.4,
		0.,
		8.,
		0.,
		1.9,
		0.25,
		15.2,
		0.,
		15.2,
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
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		-4.71238898038469,
		-4.71238898038469,
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
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		4.,
		-1.7e308,
		0.95,
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
		0.};

 real kall_congruentcircles_c63_x0comn_[16] = {
		0.5,
		0.5,
		0.5,
		0.5,
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

 static real kall_congruentcircles_c63_pd[60];
static real kall_congruentcircles_c63_old_x[16];
static int kall_congruentcircles_c63_xkind = -1;

 static int
kall_congruentcircles_c63_xcheck(real *x)
{
	real *x1 = kall_congruentcircles_c63_old_x, *xe = x + 16;
	errno = 0;
	if (kall_congruentcircles_c63_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_congruentcircles_c63_xkind = 0;
	return 1;
	}
 real
kall_congruentcircles_c63_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_congruentcircles_c63_xcheck(x) && wantfg == 2)
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
kall_congruentcircles_c63_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_congruentcircles_c63_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[12] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[14];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_congruentcircles_c63_pd[1] = x[0] - x[2];
	kall_congruentcircles_c63_pd[0] = x[0] - x[2];
	v[2] = kall_congruentcircles_c63_pd[1] * kall_congruentcircles_c63_pd[0];
	kall_congruentcircles_c63_pd[3] = x[1] - x[3];
	kall_congruentcircles_c63_pd[2] = x[1] - x[3];
	v[5] = kall_congruentcircles_c63_pd[3] * kall_congruentcircles_c63_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_congruentcircles_c63_pd[5] = x[0] - x[4];
	kall_congruentcircles_c63_pd[4] = x[0] - x[4];
	v[2] = kall_congruentcircles_c63_pd[5] * kall_congruentcircles_c63_pd[4];
	kall_congruentcircles_c63_pd[7] = x[1] - x[5];
	kall_congruentcircles_c63_pd[6] = x[1] - x[5];
	v[5] = kall_congruentcircles_c63_pd[7] * kall_congruentcircles_c63_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_congruentcircles_c63_pd[9] = x[0] - x[6];
	kall_congruentcircles_c63_pd[8] = x[0] - x[6];
	v[2] = kall_congruentcircles_c63_pd[9] * kall_congruentcircles_c63_pd[8];
	kall_congruentcircles_c63_pd[11] = x[1] - x[7];
	kall_congruentcircles_c63_pd[10] = x[1] - x[7];
	v[5] = kall_congruentcircles_c63_pd[11] * kall_congruentcircles_c63_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_congruentcircles_c63_pd[13] = x[0] - x[8];
	kall_congruentcircles_c63_pd[12] = x[0] - x[8];
	v[2] = kall_congruentcircles_c63_pd[13] * kall_congruentcircles_c63_pd[12];
	kall_congruentcircles_c63_pd[15] = x[1] - x[9];
	kall_congruentcircles_c63_pd[14] = x[1] - x[9];
	v[5] = kall_congruentcircles_c63_pd[15] * kall_congruentcircles_c63_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_congruentcircles_c63_pd[17] = x[0] - x[10];
	kall_congruentcircles_c63_pd[16] = x[0] - x[10];
	v[2] = kall_congruentcircles_c63_pd[17] * kall_congruentcircles_c63_pd[16];
	kall_congruentcircles_c63_pd[19] = x[1] - x[11];
	kall_congruentcircles_c63_pd[18] = x[1] - x[11];
	v[5] = kall_congruentcircles_c63_pd[19] * kall_congruentcircles_c63_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_congruentcircles_c63_pd[21] = x[2] - x[4];
	kall_congruentcircles_c63_pd[20] = x[2] - x[4];
	v[2] = kall_congruentcircles_c63_pd[21] * kall_congruentcircles_c63_pd[20];
	kall_congruentcircles_c63_pd[23] = x[3] - x[5];
	kall_congruentcircles_c63_pd[22] = x[3] - x[5];
	v[5] = kall_congruentcircles_c63_pd[23] * kall_congruentcircles_c63_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	kall_congruentcircles_c63_pd[25] = x[2] - x[6];
	kall_congruentcircles_c63_pd[24] = x[2] - x[6];
	v[2] = kall_congruentcircles_c63_pd[25] * kall_congruentcircles_c63_pd[24];
	kall_congruentcircles_c63_pd[27] = x[3] - x[7];
	kall_congruentcircles_c63_pd[26] = x[3] - x[7];
	v[5] = kall_congruentcircles_c63_pd[27] * kall_congruentcircles_c63_pd[26];
	v[6] = v[2] + v[5];
	c[7] = v[6];

  /***  constraint 9  ***/

	kall_congruentcircles_c63_pd[29] = x[2] - x[8];
	kall_congruentcircles_c63_pd[28] = x[2] - x[8];
	v[2] = kall_congruentcircles_c63_pd[29] * kall_congruentcircles_c63_pd[28];
	kall_congruentcircles_c63_pd[31] = x[3] - x[9];
	kall_congruentcircles_c63_pd[30] = x[3] - x[9];
	v[5] = kall_congruentcircles_c63_pd[31] * kall_congruentcircles_c63_pd[30];
	v[6] = v[2] + v[5];
	c[8] = v[6];

  /***  constraint 10  ***/

	kall_congruentcircles_c63_pd[33] = x[2] - x[10];
	kall_congruentcircles_c63_pd[32] = x[2] - x[10];
	v[2] = kall_congruentcircles_c63_pd[33] * kall_congruentcircles_c63_pd[32];
	kall_congruentcircles_c63_pd[35] = x[3] - x[11];
	kall_congruentcircles_c63_pd[34] = x[3] - x[11];
	v[5] = kall_congruentcircles_c63_pd[35] * kall_congruentcircles_c63_pd[34];
	v[6] = v[2] + v[5];
	c[9] = v[6];

  /***  constraint 11  ***/

	kall_congruentcircles_c63_pd[37] = x[4] - x[6];
	kall_congruentcircles_c63_pd[36] = x[4] - x[6];
	v[2] = kall_congruentcircles_c63_pd[37] * kall_congruentcircles_c63_pd[36];
	kall_congruentcircles_c63_pd[39] = x[5] - x[7];
	kall_congruentcircles_c63_pd[38] = x[5] - x[7];
	v[5] = kall_congruentcircles_c63_pd[39] * kall_congruentcircles_c63_pd[38];
	v[6] = v[2] + v[5];
	c[10] = v[6];

  /***  constraint 12  ***/

	kall_congruentcircles_c63_pd[41] = x[4] - x[8];
	kall_congruentcircles_c63_pd[40] = x[4] - x[8];
	v[2] = kall_congruentcircles_c63_pd[41] * kall_congruentcircles_c63_pd[40];
	kall_congruentcircles_c63_pd[43] = x[5] - x[9];
	kall_congruentcircles_c63_pd[42] = x[5] - x[9];
	v[5] = kall_congruentcircles_c63_pd[43] * kall_congruentcircles_c63_pd[42];
	v[6] = v[2] + v[5];
	c[11] = v[6];

  /***  constraint 13  ***/

	kall_congruentcircles_c63_pd[45] = x[4] - x[10];
	kall_congruentcircles_c63_pd[44] = x[4] - x[10];
	v[2] = kall_congruentcircles_c63_pd[45] * kall_congruentcircles_c63_pd[44];
	kall_congruentcircles_c63_pd[47] = x[5] - x[11];
	kall_congruentcircles_c63_pd[46] = x[5] - x[11];
	v[5] = kall_congruentcircles_c63_pd[47] * kall_congruentcircles_c63_pd[46];
	v[6] = v[2] + v[5];
	c[12] = v[6];

  /***  constraint 14  ***/

	kall_congruentcircles_c63_pd[49] = x[6] - x[8];
	kall_congruentcircles_c63_pd[48] = x[6] - x[8];
	v[2] = kall_congruentcircles_c63_pd[49] * kall_congruentcircles_c63_pd[48];
	kall_congruentcircles_c63_pd[51] = x[7] - x[9];
	kall_congruentcircles_c63_pd[50] = x[7] - x[9];
	v[5] = kall_congruentcircles_c63_pd[51] * kall_congruentcircles_c63_pd[50];
	v[6] = v[2] + v[5];
	c[13] = v[6];

  /***  constraint 15  ***/

	kall_congruentcircles_c63_pd[53] = x[6] - x[10];
	kall_congruentcircles_c63_pd[52] = x[6] - x[10];
	v[2] = kall_congruentcircles_c63_pd[53] * kall_congruentcircles_c63_pd[52];
	kall_congruentcircles_c63_pd[55] = x[7] - x[11];
	kall_congruentcircles_c63_pd[54] = x[7] - x[11];
	v[5] = kall_congruentcircles_c63_pd[55] * kall_congruentcircles_c63_pd[54];
	v[6] = v[2] + v[5];
	c[14] = v[6];

  /***  constraint 16  ***/

	kall_congruentcircles_c63_pd[57] = x[8] - x[10];
	kall_congruentcircles_c63_pd[56] = x[8] - x[10];
	v[2] = kall_congruentcircles_c63_pd[57] * kall_congruentcircles_c63_pd[56];
	kall_congruentcircles_c63_pd[59] = x[9] - x[11];
	kall_congruentcircles_c63_pd[58] = x[9] - x[11];
	v[5] = kall_congruentcircles_c63_pd[59] * kall_congruentcircles_c63_pd[58];
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

  /***  constraint 32  ***/

	t1 = x[0];
	t1 += -x[2];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[0];
	t1 += -x[4];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[0];
	t1 += -x[6];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[0];
	t1 += -x[8];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[0];
	t1 += -x[10];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[2];
	t1 += -x[4];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[2];
	t1 += -x[6];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[2];
	t1 += -x[8];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[2];
	t1 += -x[10];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[4];
	t1 += -x[6];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[4];
	t1 += -x[8];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[4];
	t1 += -x[10];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[6];
	t1 += -x[8];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[6];
	t1 += -x[10];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[8];
	t1 += -x[10];
	c[45] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[111] = -x[12];
	J[104] = -x[13];
	J[118] = 1.;

   /*** derivatives for constraint 2 ***/

	J[30] = -kall_congruentcircles_c63_pd[3];
	J[12] = kall_congruentcircles_c63_pd[3];
	J[30] -= kall_congruentcircles_c63_pd[2];
	J[12] += kall_congruentcircles_c63_pd[2];
	J[19] = -kall_congruentcircles_c63_pd[1];
	J[0] = kall_congruentcircles_c63_pd[1];
	J[19] -= kall_congruentcircles_c63_pd[0];
	J[0] += kall_congruentcircles_c63_pd[0];

   /*** derivatives for constraint 3 ***/

	J[47] = -kall_congruentcircles_c63_pd[7];
	J[13] = kall_congruentcircles_c63_pd[7];
	J[47] -= kall_congruentcircles_c63_pd[6];
	J[13] += kall_congruentcircles_c63_pd[6];
	J[36] = -kall_congruentcircles_c63_pd[5];
	J[1] = kall_congruentcircles_c63_pd[5];
	J[36] -= kall_congruentcircles_c63_pd[4];
	J[1] += kall_congruentcircles_c63_pd[4];

   /*** derivatives for constraint 4 ***/

	J[64] = -kall_congruentcircles_c63_pd[11];
	J[14] = kall_congruentcircles_c63_pd[11];
	J[64] -= kall_congruentcircles_c63_pd[10];
	J[14] += kall_congruentcircles_c63_pd[10];
	J[53] = -kall_congruentcircles_c63_pd[9];
	J[2] = kall_congruentcircles_c63_pd[9];
	J[53] -= kall_congruentcircles_c63_pd[8];
	J[2] += kall_congruentcircles_c63_pd[8];

   /*** derivatives for constraint 5 ***/

	J[81] = -kall_congruentcircles_c63_pd[15];
	J[15] = kall_congruentcircles_c63_pd[15];
	J[81] -= kall_congruentcircles_c63_pd[14];
	J[15] += kall_congruentcircles_c63_pd[14];
	J[70] = -kall_congruentcircles_c63_pd[13];
	J[3] = kall_congruentcircles_c63_pd[13];
	J[70] -= kall_congruentcircles_c63_pd[12];
	J[3] += kall_congruentcircles_c63_pd[12];

   /*** derivatives for constraint 6 ***/

	J[98] = -kall_congruentcircles_c63_pd[19];
	J[16] = kall_congruentcircles_c63_pd[19];
	J[98] -= kall_congruentcircles_c63_pd[18];
	J[16] += kall_congruentcircles_c63_pd[18];
	J[87] = -kall_congruentcircles_c63_pd[17];
	J[4] = kall_congruentcircles_c63_pd[17];
	J[87] -= kall_congruentcircles_c63_pd[16];
	J[4] += kall_congruentcircles_c63_pd[16];

   /*** derivatives for constraint 7 ***/

	J[48] = -kall_congruentcircles_c63_pd[23];
	J[31] = kall_congruentcircles_c63_pd[23];
	J[48] -= kall_congruentcircles_c63_pd[22];
	J[31] += kall_congruentcircles_c63_pd[22];
	J[37] = -kall_congruentcircles_c63_pd[21];
	J[20] = kall_congruentcircles_c63_pd[21];
	J[37] -= kall_congruentcircles_c63_pd[20];
	J[20] += kall_congruentcircles_c63_pd[20];

   /*** derivatives for constraint 8 ***/

	J[65] = -kall_congruentcircles_c63_pd[27];
	J[32] = kall_congruentcircles_c63_pd[27];
	J[65] -= kall_congruentcircles_c63_pd[26];
	J[32] += kall_congruentcircles_c63_pd[26];
	J[54] = -kall_congruentcircles_c63_pd[25];
	J[21] = kall_congruentcircles_c63_pd[25];
	J[54] -= kall_congruentcircles_c63_pd[24];
	J[21] += kall_congruentcircles_c63_pd[24];

   /*** derivatives for constraint 9 ***/

	J[82] = -kall_congruentcircles_c63_pd[31];
	J[33] = kall_congruentcircles_c63_pd[31];
	J[82] -= kall_congruentcircles_c63_pd[30];
	J[33] += kall_congruentcircles_c63_pd[30];
	J[71] = -kall_congruentcircles_c63_pd[29];
	J[22] = kall_congruentcircles_c63_pd[29];
	J[71] -= kall_congruentcircles_c63_pd[28];
	J[22] += kall_congruentcircles_c63_pd[28];

   /*** derivatives for constraint 10 ***/

	J[99] = -kall_congruentcircles_c63_pd[35];
	J[34] = kall_congruentcircles_c63_pd[35];
	J[99] -= kall_congruentcircles_c63_pd[34];
	J[34] += kall_congruentcircles_c63_pd[34];
	J[88] = -kall_congruentcircles_c63_pd[33];
	J[23] = kall_congruentcircles_c63_pd[33];
	J[88] -= kall_congruentcircles_c63_pd[32];
	J[23] += kall_congruentcircles_c63_pd[32];

   /*** derivatives for constraint 11 ***/

	J[66] = -kall_congruentcircles_c63_pd[39];
	J[49] = kall_congruentcircles_c63_pd[39];
	J[66] -= kall_congruentcircles_c63_pd[38];
	J[49] += kall_congruentcircles_c63_pd[38];
	J[55] = -kall_congruentcircles_c63_pd[37];
	J[38] = kall_congruentcircles_c63_pd[37];
	J[55] -= kall_congruentcircles_c63_pd[36];
	J[38] += kall_congruentcircles_c63_pd[36];

   /*** derivatives for constraint 12 ***/

	J[83] = -kall_congruentcircles_c63_pd[43];
	J[50] = kall_congruentcircles_c63_pd[43];
	J[83] -= kall_congruentcircles_c63_pd[42];
	J[50] += kall_congruentcircles_c63_pd[42];
	J[72] = -kall_congruentcircles_c63_pd[41];
	J[39] = kall_congruentcircles_c63_pd[41];
	J[72] -= kall_congruentcircles_c63_pd[40];
	J[39] += kall_congruentcircles_c63_pd[40];

   /*** derivatives for constraint 13 ***/

	J[100] = -kall_congruentcircles_c63_pd[47];
	J[51] = kall_congruentcircles_c63_pd[47];
	J[100] -= kall_congruentcircles_c63_pd[46];
	J[51] += kall_congruentcircles_c63_pd[46];
	J[89] = -kall_congruentcircles_c63_pd[45];
	J[40] = kall_congruentcircles_c63_pd[45];
	J[89] -= kall_congruentcircles_c63_pd[44];
	J[40] += kall_congruentcircles_c63_pd[44];

   /*** derivatives for constraint 14 ***/

	J[84] = -kall_congruentcircles_c63_pd[51];
	J[67] = kall_congruentcircles_c63_pd[51];
	J[84] -= kall_congruentcircles_c63_pd[50];
	J[67] += kall_congruentcircles_c63_pd[50];
	J[73] = -kall_congruentcircles_c63_pd[49];
	J[56] = kall_congruentcircles_c63_pd[49];
	J[73] -= kall_congruentcircles_c63_pd[48];
	J[56] += kall_congruentcircles_c63_pd[48];

   /*** derivatives for constraint 15 ***/

	J[101] = -kall_congruentcircles_c63_pd[55];
	J[68] = kall_congruentcircles_c63_pd[55];
	J[101] -= kall_congruentcircles_c63_pd[54];
	J[68] += kall_congruentcircles_c63_pd[54];
	J[90] = -kall_congruentcircles_c63_pd[53];
	J[57] = kall_congruentcircles_c63_pd[53];
	J[90] -= kall_congruentcircles_c63_pd[52];
	J[57] += kall_congruentcircles_c63_pd[52];

   /*** derivatives for constraint 16 ***/

	J[102] = -kall_congruentcircles_c63_pd[59];
	J[85] = kall_congruentcircles_c63_pd[59];
	J[102] -= kall_congruentcircles_c63_pd[58];
	J[85] += kall_congruentcircles_c63_pd[58];
	J[91] = -kall_congruentcircles_c63_pd[57];
	J[74] = kall_congruentcircles_c63_pd[57];
	J[91] -= kall_congruentcircles_c63_pd[56];
	J[74] += kall_congruentcircles_c63_pd[56];

   /*** derivatives for constraint 17 ***/

	J[119] = -1.;
	J[120] = 1.;

   /*** derivatives for constraint 18 ***/

	J[5] = 1.;
	J[105] = -1.;

   /*** derivatives for constraint 19 ***/

	J[17] = 1.;
	J[112] = -1.;

   /*** derivatives for constraint 20 ***/

	J[24] = 1.;
	J[106] = -1.;

   /*** derivatives for constraint 21 ***/

	J[35] = 1.;
	J[113] = -1.;

   /*** derivatives for constraint 22 ***/

	J[41] = 1.;
	J[107] = -1.;

   /*** derivatives for constraint 23 ***/

	J[52] = 1.;
	J[114] = -1.;

   /*** derivatives for constraint 24 ***/

	J[58] = 1.;
	J[108] = -1.;

   /*** derivatives for constraint 25 ***/

	J[69] = 1.;
	J[115] = -1.;

   /*** derivatives for constraint 26 ***/

	J[75] = 1.;
	J[109] = -1.;

   /*** derivatives for constraint 27 ***/

	J[86] = 1.;
	J[116] = -1.;

   /*** derivatives for constraint 28 ***/

	J[92] = 1.;
	J[110] = -1.;

   /*** derivatives for constraint 29 ***/

	J[103] = 1.;
	J[117] = -1.;

   /*** derivatives for constraint 30 ***/

	J[6] = 1.;

   /*** derivatives for constraint 31 ***/

	J[18] = 1.;

   /*** derivatives for constraint 32 ***/

	J[7] = 1.;
	J[25] = -1.;

   /*** derivatives for constraint 33 ***/

	J[8] = 1.;
	J[42] = -1.;

   /*** derivatives for constraint 34 ***/

	J[9] = 1.;
	J[59] = -1.;

   /*** derivatives for constraint 35 ***/

	J[10] = 1.;
	J[76] = -1.;

   /*** derivatives for constraint 36 ***/

	J[11] = 1.;
	J[93] = -1.;

   /*** derivatives for constraint 37 ***/

	J[26] = 1.;
	J[43] = -1.;

   /*** derivatives for constraint 38 ***/

	J[27] = 1.;
	J[60] = -1.;

   /*** derivatives for constraint 39 ***/

	J[28] = 1.;
	J[77] = -1.;

   /*** derivatives for constraint 40 ***/

	J[29] = 1.;
	J[94] = -1.;

   /*** derivatives for constraint 41 ***/

	J[44] = 1.;
	J[61] = -1.;

   /*** derivatives for constraint 42 ***/

	J[45] = 1.;
	J[78] = -1.;

   /*** derivatives for constraint 43 ***/

	J[46] = 1.;
	J[95] = -1.;

   /*** derivatives for constraint 44 ***/

	J[62] = 1.;
	J[79] = -1.;

   /*** derivatives for constraint 45 ***/

	J[63] = 1.;
	J[96] = -1.;

   /*** derivatives for constraint 46 ***/

	J[80] = 1.;
	J[97] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
