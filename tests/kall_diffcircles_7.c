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
 fint kall_diffcircles_7_auxcom_[1] = { 22 /* nlc */ };
 fint kall_diffcircles_7_funcom_[146] = {
	18 /* nvar */,
	1 /* nobj */,
	40 /* ncon */,
	121 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	9,
	17,
	25,
	32,
	39,
	46,
	53,
	60,
	67,
	74,
	81,
	88,
	96,
	103,
	111,
	119,
	121,
	122,

	/* rownos */
	1,
	3,
	4,
	5,
	6,
	7,
	24,
	38,
	2,
	3,
	4,
	5,
	6,
	7,
	25,
	39,
	2,
	8,
	9,
	10,
	11,
	12,
	26,
	40,
	2,
	8,
	9,
	10,
	11,
	12,
	27,
	3,
	8,
	13,
	14,
	15,
	16,
	28,
	3,
	8,
	13,
	14,
	15,
	16,
	29,
	4,
	9,
	13,
	17,
	18,
	19,
	30,
	4,
	9,
	13,
	17,
	18,
	19,
	31,
	5,
	10,
	14,
	17,
	20,
	21,
	32,
	5,
	10,
	14,
	17,
	20,
	21,
	33,
	6,
	11,
	15,
	18,
	20,
	22,
	34,
	6,
	11,
	15,
	18,
	20,
	22,
	35,
	7,
	12,
	16,
	19,
	21,
	22,
	36,
	40,
	7,
	12,
	16,
	19,
	21,
	22,
	37,
	1,
	24,
	26,
	28,
	30,
	32,
	34,
	36,
	1,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	1,
	23,
	23 };

 real kall_diffcircles_7_boundc_[1+36+80] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.6,
		7.4,
		0.6,
		3.4,
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
		3.24,
		1.7e308,
		1.96,
		1.7e308,
		5.29,
		1.7e308,
		1.21,
		1.7e308,
		3.61,
		1.7e308,
		1.44,
		1.7e308,
		6.25,
		1.7e308,
		1.69,
		1.7e308,
		4.41,
		1.7e308,
		1.96,
		1.7e308,
		4.84,
		1.7e308,
		9.,
		1.7e308,
		5.29,
		1.7e308,
		3.24,
		1.7e308,
		1.21,
		1.7e308,
		3.61,
		1.7e308,
		-23.9703519468901,
		-23.9703519468901,
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
		-0.6,
		-1.7e308,
		-0.6,
		-1.7e308,
		4.,
		-1.7e308,
		2.,
		-1.7e308,
		0.};

 real kall_diffcircles_7_x0comn_[18] = {
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
		0.6,
		0.6,
		0.,
		0.,
		2.89,
		0. };

 static real kall_diffcircles_7_pd[84];
static real kall_diffcircles_7_old_x[18];
static int kall_diffcircles_7_xkind = -1;

 static int
kall_diffcircles_7_xcheck(real *x)
{
	real *x1 = kall_diffcircles_7_old_x, *xe = x + 18;
	errno = 0;
	if (kall_diffcircles_7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_diffcircles_7_xkind = 0;
	return 1;
	}
 real
kall_diffcircles_7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_diffcircles_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[17];
	;}

	if (wantfg & 2) {
	g[17] = 1.;
	}

	return rv;
}

 void
kall_diffcircles_7_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_diffcircles_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[14] * x[15];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_diffcircles_7_pd[1] = x[0] - x[2];
	kall_diffcircles_7_pd[0] = x[0] - x[2];
	v[2] = kall_diffcircles_7_pd[1] * kall_diffcircles_7_pd[0];
	kall_diffcircles_7_pd[3] = x[1] - x[3];
	kall_diffcircles_7_pd[2] = x[1] - x[3];
	v[5] = kall_diffcircles_7_pd[3] * kall_diffcircles_7_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_diffcircles_7_pd[5] = x[0] - x[4];
	kall_diffcircles_7_pd[4] = x[0] - x[4];
	v[2] = kall_diffcircles_7_pd[5] * kall_diffcircles_7_pd[4];
	kall_diffcircles_7_pd[7] = x[1] - x[5];
	kall_diffcircles_7_pd[6] = x[1] - x[5];
	v[5] = kall_diffcircles_7_pd[7] * kall_diffcircles_7_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_diffcircles_7_pd[9] = x[0] - x[6];
	kall_diffcircles_7_pd[8] = x[0] - x[6];
	v[2] = kall_diffcircles_7_pd[9] * kall_diffcircles_7_pd[8];
	kall_diffcircles_7_pd[11] = x[1] - x[7];
	kall_diffcircles_7_pd[10] = x[1] - x[7];
	v[5] = kall_diffcircles_7_pd[11] * kall_diffcircles_7_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_diffcircles_7_pd[13] = x[0] - x[8];
	kall_diffcircles_7_pd[12] = x[0] - x[8];
	v[2] = kall_diffcircles_7_pd[13] * kall_diffcircles_7_pd[12];
	kall_diffcircles_7_pd[15] = x[1] - x[9];
	kall_diffcircles_7_pd[14] = x[1] - x[9];
	v[5] = kall_diffcircles_7_pd[15] * kall_diffcircles_7_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_diffcircles_7_pd[17] = x[0] - x[10];
	kall_diffcircles_7_pd[16] = x[0] - x[10];
	v[2] = kall_diffcircles_7_pd[17] * kall_diffcircles_7_pd[16];
	kall_diffcircles_7_pd[19] = x[1] - x[11];
	kall_diffcircles_7_pd[18] = x[1] - x[11];
	v[5] = kall_diffcircles_7_pd[19] * kall_diffcircles_7_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_diffcircles_7_pd[21] = x[0] - x[12];
	kall_diffcircles_7_pd[20] = x[0] - x[12];
	v[2] = kall_diffcircles_7_pd[21] * kall_diffcircles_7_pd[20];
	kall_diffcircles_7_pd[23] = x[1] - x[13];
	kall_diffcircles_7_pd[22] = x[1] - x[13];
	v[5] = kall_diffcircles_7_pd[23] * kall_diffcircles_7_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	kall_diffcircles_7_pd[25] = x[2] - x[4];
	kall_diffcircles_7_pd[24] = x[2] - x[4];
	v[2] = kall_diffcircles_7_pd[25] * kall_diffcircles_7_pd[24];
	kall_diffcircles_7_pd[27] = x[3] - x[5];
	kall_diffcircles_7_pd[26] = x[3] - x[5];
	v[5] = kall_diffcircles_7_pd[27] * kall_diffcircles_7_pd[26];
	v[6] = v[2] + v[5];
	c[7] = v[6];

  /***  constraint 9  ***/

	kall_diffcircles_7_pd[29] = x[2] - x[6];
	kall_diffcircles_7_pd[28] = x[2] - x[6];
	v[2] = kall_diffcircles_7_pd[29] * kall_diffcircles_7_pd[28];
	kall_diffcircles_7_pd[31] = x[3] - x[7];
	kall_diffcircles_7_pd[30] = x[3] - x[7];
	v[5] = kall_diffcircles_7_pd[31] * kall_diffcircles_7_pd[30];
	v[6] = v[2] + v[5];
	c[8] = v[6];

  /***  constraint 10  ***/

	kall_diffcircles_7_pd[33] = x[2] - x[8];
	kall_diffcircles_7_pd[32] = x[2] - x[8];
	v[2] = kall_diffcircles_7_pd[33] * kall_diffcircles_7_pd[32];
	kall_diffcircles_7_pd[35] = x[3] - x[9];
	kall_diffcircles_7_pd[34] = x[3] - x[9];
	v[5] = kall_diffcircles_7_pd[35] * kall_diffcircles_7_pd[34];
	v[6] = v[2] + v[5];
	c[9] = v[6];

  /***  constraint 11  ***/

	kall_diffcircles_7_pd[37] = x[2] - x[10];
	kall_diffcircles_7_pd[36] = x[2] - x[10];
	v[2] = kall_diffcircles_7_pd[37] * kall_diffcircles_7_pd[36];
	kall_diffcircles_7_pd[39] = x[3] - x[11];
	kall_diffcircles_7_pd[38] = x[3] - x[11];
	v[5] = kall_diffcircles_7_pd[39] * kall_diffcircles_7_pd[38];
	v[6] = v[2] + v[5];
	c[10] = v[6];

  /***  constraint 12  ***/

	kall_diffcircles_7_pd[41] = x[2] - x[12];
	kall_diffcircles_7_pd[40] = x[2] - x[12];
	v[2] = kall_diffcircles_7_pd[41] * kall_diffcircles_7_pd[40];
	kall_diffcircles_7_pd[43] = x[3] - x[13];
	kall_diffcircles_7_pd[42] = x[3] - x[13];
	v[5] = kall_diffcircles_7_pd[43] * kall_diffcircles_7_pd[42];
	v[6] = v[2] + v[5];
	c[11] = v[6];

  /***  constraint 13  ***/

	kall_diffcircles_7_pd[45] = x[4] - x[6];
	kall_diffcircles_7_pd[44] = x[4] - x[6];
	v[2] = kall_diffcircles_7_pd[45] * kall_diffcircles_7_pd[44];
	kall_diffcircles_7_pd[47] = x[5] - x[7];
	kall_diffcircles_7_pd[46] = x[5] - x[7];
	v[5] = kall_diffcircles_7_pd[47] * kall_diffcircles_7_pd[46];
	v[6] = v[2] + v[5];
	c[12] = v[6];

  /***  constraint 14  ***/

	kall_diffcircles_7_pd[49] = x[4] - x[8];
	kall_diffcircles_7_pd[48] = x[4] - x[8];
	v[2] = kall_diffcircles_7_pd[49] * kall_diffcircles_7_pd[48];
	kall_diffcircles_7_pd[51] = x[5] - x[9];
	kall_diffcircles_7_pd[50] = x[5] - x[9];
	v[5] = kall_diffcircles_7_pd[51] * kall_diffcircles_7_pd[50];
	v[6] = v[2] + v[5];
	c[13] = v[6];

  /***  constraint 15  ***/

	kall_diffcircles_7_pd[53] = x[4] - x[10];
	kall_diffcircles_7_pd[52] = x[4] - x[10];
	v[2] = kall_diffcircles_7_pd[53] * kall_diffcircles_7_pd[52];
	kall_diffcircles_7_pd[55] = x[5] - x[11];
	kall_diffcircles_7_pd[54] = x[5] - x[11];
	v[5] = kall_diffcircles_7_pd[55] * kall_diffcircles_7_pd[54];
	v[6] = v[2] + v[5];
	c[14] = v[6];

  /***  constraint 16  ***/

	kall_diffcircles_7_pd[57] = x[4] - x[12];
	kall_diffcircles_7_pd[56] = x[4] - x[12];
	v[2] = kall_diffcircles_7_pd[57] * kall_diffcircles_7_pd[56];
	kall_diffcircles_7_pd[59] = x[5] - x[13];
	kall_diffcircles_7_pd[58] = x[5] - x[13];
	v[5] = kall_diffcircles_7_pd[59] * kall_diffcircles_7_pd[58];
	v[6] = v[2] + v[5];
	c[15] = v[6];

  /***  constraint 17  ***/

	kall_diffcircles_7_pd[61] = x[6] - x[8];
	kall_diffcircles_7_pd[60] = x[6] - x[8];
	v[2] = kall_diffcircles_7_pd[61] * kall_diffcircles_7_pd[60];
	kall_diffcircles_7_pd[63] = x[7] - x[9];
	kall_diffcircles_7_pd[62] = x[7] - x[9];
	v[5] = kall_diffcircles_7_pd[63] * kall_diffcircles_7_pd[62];
	v[6] = v[2] + v[5];
	c[16] = v[6];

  /***  constraint 18  ***/

	kall_diffcircles_7_pd[65] = x[6] - x[10];
	kall_diffcircles_7_pd[64] = x[6] - x[10];
	v[2] = kall_diffcircles_7_pd[65] * kall_diffcircles_7_pd[64];
	kall_diffcircles_7_pd[67] = x[7] - x[11];
	kall_diffcircles_7_pd[66] = x[7] - x[11];
	v[5] = kall_diffcircles_7_pd[67] * kall_diffcircles_7_pd[66];
	v[6] = v[2] + v[5];
	c[17] = v[6];

  /***  constraint 19  ***/

	kall_diffcircles_7_pd[69] = x[6] - x[12];
	kall_diffcircles_7_pd[68] = x[6] - x[12];
	v[2] = kall_diffcircles_7_pd[69] * kall_diffcircles_7_pd[68];
	kall_diffcircles_7_pd[71] = x[7] - x[13];
	kall_diffcircles_7_pd[70] = x[7] - x[13];
	v[5] = kall_diffcircles_7_pd[71] * kall_diffcircles_7_pd[70];
	v[6] = v[2] + v[5];
	c[18] = v[6];

  /***  constraint 20  ***/

	kall_diffcircles_7_pd[73] = x[8] - x[10];
	kall_diffcircles_7_pd[72] = x[8] - x[10];
	v[2] = kall_diffcircles_7_pd[73] * kall_diffcircles_7_pd[72];
	kall_diffcircles_7_pd[75] = x[9] - x[11];
	kall_diffcircles_7_pd[74] = x[9] - x[11];
	v[5] = kall_diffcircles_7_pd[75] * kall_diffcircles_7_pd[74];
	v[6] = v[2] + v[5];
	c[19] = v[6];

  /***  constraint 21  ***/

	kall_diffcircles_7_pd[77] = x[8] - x[12];
	kall_diffcircles_7_pd[76] = x[8] - x[12];
	v[2] = kall_diffcircles_7_pd[77] * kall_diffcircles_7_pd[76];
	kall_diffcircles_7_pd[79] = x[9] - x[13];
	kall_diffcircles_7_pd[78] = x[9] - x[13];
	v[5] = kall_diffcircles_7_pd[79] * kall_diffcircles_7_pd[78];
	v[6] = v[2] + v[5];
	c[20] = v[6];

  /***  constraint 22  ***/

	kall_diffcircles_7_pd[81] = x[10] - x[12];
	kall_diffcircles_7_pd[80] = x[10] - x[12];
	v[2] = kall_diffcircles_7_pd[81] * kall_diffcircles_7_pd[80];
	kall_diffcircles_7_pd[83] = x[11] - x[13];
	kall_diffcircles_7_pd[82] = x[11] - x[13];
	v[5] = kall_diffcircles_7_pd[83] * kall_diffcircles_7_pd[82];
	v[6] = v[2] + v[5];
	c[21] = v[6];

  /***  constraint 23  ***/

	t1 = -x[16];
	t1 += x[17];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[0];
	t1 += -x[14];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[1];
	t1 += -x[15];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[2];
	t1 += -x[14];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[3];
	t1 += -x[15];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[4];
	t1 += -x[14];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[5];
	t1 += -x[15];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[6];
	t1 += -x[14];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[7];
	t1 += -x[15];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[8];
	t1 += -x[14];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[9];
	t1 += -x[15];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[10];
	t1 += -x[14];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[11];
	t1 += -x[15];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[12];
	t1 += -x[14];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[13];
	t1 += -x[15];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[0];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[1];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[2];
	t1 += -x[12];
	c[39] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[110] = -x[14];
	J[102] = -x[15];
	J[118] = 1.;

   /*** derivatives for constraint 2 ***/

	J[24] = -kall_diffcircles_7_pd[3];
	J[8] = kall_diffcircles_7_pd[3];
	J[24] -= kall_diffcircles_7_pd[2];
	J[8] += kall_diffcircles_7_pd[2];
	J[16] = -kall_diffcircles_7_pd[1];
	J[0] = kall_diffcircles_7_pd[1];
	J[16] -= kall_diffcircles_7_pd[0];
	J[0] += kall_diffcircles_7_pd[0];

   /*** derivatives for constraint 3 ***/

	J[38] = -kall_diffcircles_7_pd[7];
	J[9] = kall_diffcircles_7_pd[7];
	J[38] -= kall_diffcircles_7_pd[6];
	J[9] += kall_diffcircles_7_pd[6];
	J[31] = -kall_diffcircles_7_pd[5];
	J[1] = kall_diffcircles_7_pd[5];
	J[31] -= kall_diffcircles_7_pd[4];
	J[1] += kall_diffcircles_7_pd[4];

   /*** derivatives for constraint 4 ***/

	J[52] = -kall_diffcircles_7_pd[11];
	J[10] = kall_diffcircles_7_pd[11];
	J[52] -= kall_diffcircles_7_pd[10];
	J[10] += kall_diffcircles_7_pd[10];
	J[45] = -kall_diffcircles_7_pd[9];
	J[2] = kall_diffcircles_7_pd[9];
	J[45] -= kall_diffcircles_7_pd[8];
	J[2] += kall_diffcircles_7_pd[8];

   /*** derivatives for constraint 5 ***/

	J[66] = -kall_diffcircles_7_pd[15];
	J[11] = kall_diffcircles_7_pd[15];
	J[66] -= kall_diffcircles_7_pd[14];
	J[11] += kall_diffcircles_7_pd[14];
	J[59] = -kall_diffcircles_7_pd[13];
	J[3] = kall_diffcircles_7_pd[13];
	J[59] -= kall_diffcircles_7_pd[12];
	J[3] += kall_diffcircles_7_pd[12];

   /*** derivatives for constraint 6 ***/

	J[80] = -kall_diffcircles_7_pd[19];
	J[12] = kall_diffcircles_7_pd[19];
	J[80] -= kall_diffcircles_7_pd[18];
	J[12] += kall_diffcircles_7_pd[18];
	J[73] = -kall_diffcircles_7_pd[17];
	J[4] = kall_diffcircles_7_pd[17];
	J[73] -= kall_diffcircles_7_pd[16];
	J[4] += kall_diffcircles_7_pd[16];

   /*** derivatives for constraint 7 ***/

	J[95] = -kall_diffcircles_7_pd[23];
	J[13] = kall_diffcircles_7_pd[23];
	J[95] -= kall_diffcircles_7_pd[22];
	J[13] += kall_diffcircles_7_pd[22];
	J[87] = -kall_diffcircles_7_pd[21];
	J[5] = kall_diffcircles_7_pd[21];
	J[87] -= kall_diffcircles_7_pd[20];
	J[5] += kall_diffcircles_7_pd[20];

   /*** derivatives for constraint 8 ***/

	J[39] = -kall_diffcircles_7_pd[27];
	J[25] = kall_diffcircles_7_pd[27];
	J[39] -= kall_diffcircles_7_pd[26];
	J[25] += kall_diffcircles_7_pd[26];
	J[32] = -kall_diffcircles_7_pd[25];
	J[17] = kall_diffcircles_7_pd[25];
	J[32] -= kall_diffcircles_7_pd[24];
	J[17] += kall_diffcircles_7_pd[24];

   /*** derivatives for constraint 9 ***/

	J[53] = -kall_diffcircles_7_pd[31];
	J[26] = kall_diffcircles_7_pd[31];
	J[53] -= kall_diffcircles_7_pd[30];
	J[26] += kall_diffcircles_7_pd[30];
	J[46] = -kall_diffcircles_7_pd[29];
	J[18] = kall_diffcircles_7_pd[29];
	J[46] -= kall_diffcircles_7_pd[28];
	J[18] += kall_diffcircles_7_pd[28];

   /*** derivatives for constraint 10 ***/

	J[67] = -kall_diffcircles_7_pd[35];
	J[27] = kall_diffcircles_7_pd[35];
	J[67] -= kall_diffcircles_7_pd[34];
	J[27] += kall_diffcircles_7_pd[34];
	J[60] = -kall_diffcircles_7_pd[33];
	J[19] = kall_diffcircles_7_pd[33];
	J[60] -= kall_diffcircles_7_pd[32];
	J[19] += kall_diffcircles_7_pd[32];

   /*** derivatives for constraint 11 ***/

	J[81] = -kall_diffcircles_7_pd[39];
	J[28] = kall_diffcircles_7_pd[39];
	J[81] -= kall_diffcircles_7_pd[38];
	J[28] += kall_diffcircles_7_pd[38];
	J[74] = -kall_diffcircles_7_pd[37];
	J[20] = kall_diffcircles_7_pd[37];
	J[74] -= kall_diffcircles_7_pd[36];
	J[20] += kall_diffcircles_7_pd[36];

   /*** derivatives for constraint 12 ***/

	J[96] = -kall_diffcircles_7_pd[43];
	J[29] = kall_diffcircles_7_pd[43];
	J[96] -= kall_diffcircles_7_pd[42];
	J[29] += kall_diffcircles_7_pd[42];
	J[88] = -kall_diffcircles_7_pd[41];
	J[21] = kall_diffcircles_7_pd[41];
	J[88] -= kall_diffcircles_7_pd[40];
	J[21] += kall_diffcircles_7_pd[40];

   /*** derivatives for constraint 13 ***/

	J[54] = -kall_diffcircles_7_pd[47];
	J[40] = kall_diffcircles_7_pd[47];
	J[54] -= kall_diffcircles_7_pd[46];
	J[40] += kall_diffcircles_7_pd[46];
	J[47] = -kall_diffcircles_7_pd[45];
	J[33] = kall_diffcircles_7_pd[45];
	J[47] -= kall_diffcircles_7_pd[44];
	J[33] += kall_diffcircles_7_pd[44];

   /*** derivatives for constraint 14 ***/

	J[68] = -kall_diffcircles_7_pd[51];
	J[41] = kall_diffcircles_7_pd[51];
	J[68] -= kall_diffcircles_7_pd[50];
	J[41] += kall_diffcircles_7_pd[50];
	J[61] = -kall_diffcircles_7_pd[49];
	J[34] = kall_diffcircles_7_pd[49];
	J[61] -= kall_diffcircles_7_pd[48];
	J[34] += kall_diffcircles_7_pd[48];

   /*** derivatives for constraint 15 ***/

	J[82] = -kall_diffcircles_7_pd[55];
	J[42] = kall_diffcircles_7_pd[55];
	J[82] -= kall_diffcircles_7_pd[54];
	J[42] += kall_diffcircles_7_pd[54];
	J[75] = -kall_diffcircles_7_pd[53];
	J[35] = kall_diffcircles_7_pd[53];
	J[75] -= kall_diffcircles_7_pd[52];
	J[35] += kall_diffcircles_7_pd[52];

   /*** derivatives for constraint 16 ***/

	J[97] = -kall_diffcircles_7_pd[59];
	J[43] = kall_diffcircles_7_pd[59];
	J[97] -= kall_diffcircles_7_pd[58];
	J[43] += kall_diffcircles_7_pd[58];
	J[89] = -kall_diffcircles_7_pd[57];
	J[36] = kall_diffcircles_7_pd[57];
	J[89] -= kall_diffcircles_7_pd[56];
	J[36] += kall_diffcircles_7_pd[56];

   /*** derivatives for constraint 17 ***/

	J[69] = -kall_diffcircles_7_pd[63];
	J[55] = kall_diffcircles_7_pd[63];
	J[69] -= kall_diffcircles_7_pd[62];
	J[55] += kall_diffcircles_7_pd[62];
	J[62] = -kall_diffcircles_7_pd[61];
	J[48] = kall_diffcircles_7_pd[61];
	J[62] -= kall_diffcircles_7_pd[60];
	J[48] += kall_diffcircles_7_pd[60];

   /*** derivatives for constraint 18 ***/

	J[83] = -kall_diffcircles_7_pd[67];
	J[56] = kall_diffcircles_7_pd[67];
	J[83] -= kall_diffcircles_7_pd[66];
	J[56] += kall_diffcircles_7_pd[66];
	J[76] = -kall_diffcircles_7_pd[65];
	J[49] = kall_diffcircles_7_pd[65];
	J[76] -= kall_diffcircles_7_pd[64];
	J[49] += kall_diffcircles_7_pd[64];

   /*** derivatives for constraint 19 ***/

	J[98] = -kall_diffcircles_7_pd[71];
	J[57] = kall_diffcircles_7_pd[71];
	J[98] -= kall_diffcircles_7_pd[70];
	J[57] += kall_diffcircles_7_pd[70];
	J[90] = -kall_diffcircles_7_pd[69];
	J[50] = kall_diffcircles_7_pd[69];
	J[90] -= kall_diffcircles_7_pd[68];
	J[50] += kall_diffcircles_7_pd[68];

   /*** derivatives for constraint 20 ***/

	J[84] = -kall_diffcircles_7_pd[75];
	J[70] = kall_diffcircles_7_pd[75];
	J[84] -= kall_diffcircles_7_pd[74];
	J[70] += kall_diffcircles_7_pd[74];
	J[77] = -kall_diffcircles_7_pd[73];
	J[63] = kall_diffcircles_7_pd[73];
	J[77] -= kall_diffcircles_7_pd[72];
	J[63] += kall_diffcircles_7_pd[72];

   /*** derivatives for constraint 21 ***/

	J[99] = -kall_diffcircles_7_pd[79];
	J[71] = kall_diffcircles_7_pd[79];
	J[99] -= kall_diffcircles_7_pd[78];
	J[71] += kall_diffcircles_7_pd[78];
	J[91] = -kall_diffcircles_7_pd[77];
	J[64] = kall_diffcircles_7_pd[77];
	J[91] -= kall_diffcircles_7_pd[76];
	J[64] += kall_diffcircles_7_pd[76];

   /*** derivatives for constraint 22 ***/

	J[100] = -kall_diffcircles_7_pd[83];
	J[85] = kall_diffcircles_7_pd[83];
	J[100] -= kall_diffcircles_7_pd[82];
	J[85] += kall_diffcircles_7_pd[82];
	J[92] = -kall_diffcircles_7_pd[81];
	J[78] = kall_diffcircles_7_pd[81];
	J[92] -= kall_diffcircles_7_pd[80];
	J[78] += kall_diffcircles_7_pd[80];

   /*** derivatives for constraint 23 ***/

	J[119] = -1.;
	J[120] = 1.;

   /*** derivatives for constraint 24 ***/

	J[6] = 1.;
	J[103] = -1.;

   /*** derivatives for constraint 25 ***/

	J[14] = 1.;
	J[111] = -1.;

   /*** derivatives for constraint 26 ***/

	J[22] = 1.;
	J[104] = -1.;

   /*** derivatives for constraint 27 ***/

	J[30] = 1.;
	J[112] = -1.;

   /*** derivatives for constraint 28 ***/

	J[37] = 1.;
	J[105] = -1.;

   /*** derivatives for constraint 29 ***/

	J[44] = 1.;
	J[113] = -1.;

   /*** derivatives for constraint 30 ***/

	J[51] = 1.;
	J[106] = -1.;

   /*** derivatives for constraint 31 ***/

	J[58] = 1.;
	J[114] = -1.;

   /*** derivatives for constraint 32 ***/

	J[65] = 1.;
	J[107] = -1.;

   /*** derivatives for constraint 33 ***/

	J[72] = 1.;
	J[115] = -1.;

   /*** derivatives for constraint 34 ***/

	J[79] = 1.;
	J[108] = -1.;

   /*** derivatives for constraint 35 ***/

	J[86] = 1.;
	J[116] = -1.;

   /*** derivatives for constraint 36 ***/

	J[93] = 1.;
	J[109] = -1.;

   /*** derivatives for constraint 37 ***/

	J[101] = 1.;
	J[117] = -1.;

   /*** derivatives for constraint 38 ***/

	J[7] = 1.;

   /*** derivatives for constraint 39 ***/

	J[15] = 1.;

   /*** derivatives for constraint 40 ***/

	J[23] = 1.;
	J[94] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
