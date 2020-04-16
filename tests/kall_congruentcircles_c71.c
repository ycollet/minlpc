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
 fint kall_congruentcircles_c71_auxcom_[1] = { 22 /* nlc */ };
 fint kall_congruentcircles_c71_funcom_[186] = {
	18 /* nvar */,
	1 /* nobj */,
	60 /* ncon */,
	161 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	15,
	23,
	36,
	43,
	56,
	63,
	76,
	83,
	96,
	103,
	116,
	123,
	136,
	143,
	151,
	159,
	161,
	162,

	/* rownos */
	1,
	3,
	4,
	5,
	6,
	7,
	24,
	38,
	40,
	41,
	42,
	43,
	44,
	45,
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
	46,
	47,
	48,
	49,
	50,
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
	41,
	46,
	51,
	52,
	53,
	54,
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
	42,
	47,
	51,
	55,
	56,
	57,
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
	43,
	48,
	52,
	55,
	58,
	59,
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
	44,
	49,
	53,
	56,
	58,
	60,
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
	45,
	50,
	54,
	57,
	59,
	60,
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

 real kall_congruentcircles_c71_boundc_[1+36+120] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		7.5,
		0.5,
		3.5,
		0.5,
		7.5,
		0.5,
		3.5,
		0.5,
		7.5,
		0.5,
		3.5,
		0.5,
		7.5,
		0.5,
		3.5,
		0.5,
		7.5,
		0.5,
		3.5,
		0.5,
		7.5,
		0.5,
		3.5,
		0.5,
		7.5,
		0.5,
		3.5,
		0.,
		8.,
		0.,
		4.,
		0.25,
		32.,
		0.,
		32.,
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
		-5.49778714378214,
		-5.49778714378214,
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
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		4.,
		-1.7e308,
		2.,
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

 real kall_congruentcircles_c71_x0comn_[18] = {
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
		0.5,
		0.5,
		0.,
		0.,
		0.25,
		0. };

 static real kall_congruentcircles_c71_pd[84];
static real kall_congruentcircles_c71_old_x[18];
static int kall_congruentcircles_c71_xkind = -1;

 static int
kall_congruentcircles_c71_xcheck(real *x)
{
	real *x1 = kall_congruentcircles_c71_old_x, *xe = x + 18;
	errno = 0;
	if (kall_congruentcircles_c71_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_congruentcircles_c71_xkind = 0;
	return 1;
	}
 real
kall_congruentcircles_c71_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_congruentcircles_c71_xcheck(x) && wantfg == 2)
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
kall_congruentcircles_c71_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_congruentcircles_c71_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[14] * x[15];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_congruentcircles_c71_pd[1] = x[0] - x[2];
	kall_congruentcircles_c71_pd[0] = x[0] - x[2];
	v[2] = kall_congruentcircles_c71_pd[1] * kall_congruentcircles_c71_pd[0];
	kall_congruentcircles_c71_pd[3] = x[1] - x[3];
	kall_congruentcircles_c71_pd[2] = x[1] - x[3];
	v[5] = kall_congruentcircles_c71_pd[3] * kall_congruentcircles_c71_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_congruentcircles_c71_pd[5] = x[0] - x[4];
	kall_congruentcircles_c71_pd[4] = x[0] - x[4];
	v[2] = kall_congruentcircles_c71_pd[5] * kall_congruentcircles_c71_pd[4];
	kall_congruentcircles_c71_pd[7] = x[1] - x[5];
	kall_congruentcircles_c71_pd[6] = x[1] - x[5];
	v[5] = kall_congruentcircles_c71_pd[7] * kall_congruentcircles_c71_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_congruentcircles_c71_pd[9] = x[0] - x[6];
	kall_congruentcircles_c71_pd[8] = x[0] - x[6];
	v[2] = kall_congruentcircles_c71_pd[9] * kall_congruentcircles_c71_pd[8];
	kall_congruentcircles_c71_pd[11] = x[1] - x[7];
	kall_congruentcircles_c71_pd[10] = x[1] - x[7];
	v[5] = kall_congruentcircles_c71_pd[11] * kall_congruentcircles_c71_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_congruentcircles_c71_pd[13] = x[0] - x[8];
	kall_congruentcircles_c71_pd[12] = x[0] - x[8];
	v[2] = kall_congruentcircles_c71_pd[13] * kall_congruentcircles_c71_pd[12];
	kall_congruentcircles_c71_pd[15] = x[1] - x[9];
	kall_congruentcircles_c71_pd[14] = x[1] - x[9];
	v[5] = kall_congruentcircles_c71_pd[15] * kall_congruentcircles_c71_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_congruentcircles_c71_pd[17] = x[0] - x[10];
	kall_congruentcircles_c71_pd[16] = x[0] - x[10];
	v[2] = kall_congruentcircles_c71_pd[17] * kall_congruentcircles_c71_pd[16];
	kall_congruentcircles_c71_pd[19] = x[1] - x[11];
	kall_congruentcircles_c71_pd[18] = x[1] - x[11];
	v[5] = kall_congruentcircles_c71_pd[19] * kall_congruentcircles_c71_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_congruentcircles_c71_pd[21] = x[0] - x[12];
	kall_congruentcircles_c71_pd[20] = x[0] - x[12];
	v[2] = kall_congruentcircles_c71_pd[21] * kall_congruentcircles_c71_pd[20];
	kall_congruentcircles_c71_pd[23] = x[1] - x[13];
	kall_congruentcircles_c71_pd[22] = x[1] - x[13];
	v[5] = kall_congruentcircles_c71_pd[23] * kall_congruentcircles_c71_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	kall_congruentcircles_c71_pd[25] = x[2] - x[4];
	kall_congruentcircles_c71_pd[24] = x[2] - x[4];
	v[2] = kall_congruentcircles_c71_pd[25] * kall_congruentcircles_c71_pd[24];
	kall_congruentcircles_c71_pd[27] = x[3] - x[5];
	kall_congruentcircles_c71_pd[26] = x[3] - x[5];
	v[5] = kall_congruentcircles_c71_pd[27] * kall_congruentcircles_c71_pd[26];
	v[6] = v[2] + v[5];
	c[7] = v[6];

  /***  constraint 9  ***/

	kall_congruentcircles_c71_pd[29] = x[2] - x[6];
	kall_congruentcircles_c71_pd[28] = x[2] - x[6];
	v[2] = kall_congruentcircles_c71_pd[29] * kall_congruentcircles_c71_pd[28];
	kall_congruentcircles_c71_pd[31] = x[3] - x[7];
	kall_congruentcircles_c71_pd[30] = x[3] - x[7];
	v[5] = kall_congruentcircles_c71_pd[31] * kall_congruentcircles_c71_pd[30];
	v[6] = v[2] + v[5];
	c[8] = v[6];

  /***  constraint 10  ***/

	kall_congruentcircles_c71_pd[33] = x[2] - x[8];
	kall_congruentcircles_c71_pd[32] = x[2] - x[8];
	v[2] = kall_congruentcircles_c71_pd[33] * kall_congruentcircles_c71_pd[32];
	kall_congruentcircles_c71_pd[35] = x[3] - x[9];
	kall_congruentcircles_c71_pd[34] = x[3] - x[9];
	v[5] = kall_congruentcircles_c71_pd[35] * kall_congruentcircles_c71_pd[34];
	v[6] = v[2] + v[5];
	c[9] = v[6];

  /***  constraint 11  ***/

	kall_congruentcircles_c71_pd[37] = x[2] - x[10];
	kall_congruentcircles_c71_pd[36] = x[2] - x[10];
	v[2] = kall_congruentcircles_c71_pd[37] * kall_congruentcircles_c71_pd[36];
	kall_congruentcircles_c71_pd[39] = x[3] - x[11];
	kall_congruentcircles_c71_pd[38] = x[3] - x[11];
	v[5] = kall_congruentcircles_c71_pd[39] * kall_congruentcircles_c71_pd[38];
	v[6] = v[2] + v[5];
	c[10] = v[6];

  /***  constraint 12  ***/

	kall_congruentcircles_c71_pd[41] = x[2] - x[12];
	kall_congruentcircles_c71_pd[40] = x[2] - x[12];
	v[2] = kall_congruentcircles_c71_pd[41] * kall_congruentcircles_c71_pd[40];
	kall_congruentcircles_c71_pd[43] = x[3] - x[13];
	kall_congruentcircles_c71_pd[42] = x[3] - x[13];
	v[5] = kall_congruentcircles_c71_pd[43] * kall_congruentcircles_c71_pd[42];
	v[6] = v[2] + v[5];
	c[11] = v[6];

  /***  constraint 13  ***/

	kall_congruentcircles_c71_pd[45] = x[4] - x[6];
	kall_congruentcircles_c71_pd[44] = x[4] - x[6];
	v[2] = kall_congruentcircles_c71_pd[45] * kall_congruentcircles_c71_pd[44];
	kall_congruentcircles_c71_pd[47] = x[5] - x[7];
	kall_congruentcircles_c71_pd[46] = x[5] - x[7];
	v[5] = kall_congruentcircles_c71_pd[47] * kall_congruentcircles_c71_pd[46];
	v[6] = v[2] + v[5];
	c[12] = v[6];

  /***  constraint 14  ***/

	kall_congruentcircles_c71_pd[49] = x[4] - x[8];
	kall_congruentcircles_c71_pd[48] = x[4] - x[8];
	v[2] = kall_congruentcircles_c71_pd[49] * kall_congruentcircles_c71_pd[48];
	kall_congruentcircles_c71_pd[51] = x[5] - x[9];
	kall_congruentcircles_c71_pd[50] = x[5] - x[9];
	v[5] = kall_congruentcircles_c71_pd[51] * kall_congruentcircles_c71_pd[50];
	v[6] = v[2] + v[5];
	c[13] = v[6];

  /***  constraint 15  ***/

	kall_congruentcircles_c71_pd[53] = x[4] - x[10];
	kall_congruentcircles_c71_pd[52] = x[4] - x[10];
	v[2] = kall_congruentcircles_c71_pd[53] * kall_congruentcircles_c71_pd[52];
	kall_congruentcircles_c71_pd[55] = x[5] - x[11];
	kall_congruentcircles_c71_pd[54] = x[5] - x[11];
	v[5] = kall_congruentcircles_c71_pd[55] * kall_congruentcircles_c71_pd[54];
	v[6] = v[2] + v[5];
	c[14] = v[6];

  /***  constraint 16  ***/

	kall_congruentcircles_c71_pd[57] = x[4] - x[12];
	kall_congruentcircles_c71_pd[56] = x[4] - x[12];
	v[2] = kall_congruentcircles_c71_pd[57] * kall_congruentcircles_c71_pd[56];
	kall_congruentcircles_c71_pd[59] = x[5] - x[13];
	kall_congruentcircles_c71_pd[58] = x[5] - x[13];
	v[5] = kall_congruentcircles_c71_pd[59] * kall_congruentcircles_c71_pd[58];
	v[6] = v[2] + v[5];
	c[15] = v[6];

  /***  constraint 17  ***/

	kall_congruentcircles_c71_pd[61] = x[6] - x[8];
	kall_congruentcircles_c71_pd[60] = x[6] - x[8];
	v[2] = kall_congruentcircles_c71_pd[61] * kall_congruentcircles_c71_pd[60];
	kall_congruentcircles_c71_pd[63] = x[7] - x[9];
	kall_congruentcircles_c71_pd[62] = x[7] - x[9];
	v[5] = kall_congruentcircles_c71_pd[63] * kall_congruentcircles_c71_pd[62];
	v[6] = v[2] + v[5];
	c[16] = v[6];

  /***  constraint 18  ***/

	kall_congruentcircles_c71_pd[65] = x[6] - x[10];
	kall_congruentcircles_c71_pd[64] = x[6] - x[10];
	v[2] = kall_congruentcircles_c71_pd[65] * kall_congruentcircles_c71_pd[64];
	kall_congruentcircles_c71_pd[67] = x[7] - x[11];
	kall_congruentcircles_c71_pd[66] = x[7] - x[11];
	v[5] = kall_congruentcircles_c71_pd[67] * kall_congruentcircles_c71_pd[66];
	v[6] = v[2] + v[5];
	c[17] = v[6];

  /***  constraint 19  ***/

	kall_congruentcircles_c71_pd[69] = x[6] - x[12];
	kall_congruentcircles_c71_pd[68] = x[6] - x[12];
	v[2] = kall_congruentcircles_c71_pd[69] * kall_congruentcircles_c71_pd[68];
	kall_congruentcircles_c71_pd[71] = x[7] - x[13];
	kall_congruentcircles_c71_pd[70] = x[7] - x[13];
	v[5] = kall_congruentcircles_c71_pd[71] * kall_congruentcircles_c71_pd[70];
	v[6] = v[2] + v[5];
	c[18] = v[6];

  /***  constraint 20  ***/

	kall_congruentcircles_c71_pd[73] = x[8] - x[10];
	kall_congruentcircles_c71_pd[72] = x[8] - x[10];
	v[2] = kall_congruentcircles_c71_pd[73] * kall_congruentcircles_c71_pd[72];
	kall_congruentcircles_c71_pd[75] = x[9] - x[11];
	kall_congruentcircles_c71_pd[74] = x[9] - x[11];
	v[5] = kall_congruentcircles_c71_pd[75] * kall_congruentcircles_c71_pd[74];
	v[6] = v[2] + v[5];
	c[19] = v[6];

  /***  constraint 21  ***/

	kall_congruentcircles_c71_pd[77] = x[8] - x[12];
	kall_congruentcircles_c71_pd[76] = x[8] - x[12];
	v[2] = kall_congruentcircles_c71_pd[77] * kall_congruentcircles_c71_pd[76];
	kall_congruentcircles_c71_pd[79] = x[9] - x[13];
	kall_congruentcircles_c71_pd[78] = x[9] - x[13];
	v[5] = kall_congruentcircles_c71_pd[79] * kall_congruentcircles_c71_pd[78];
	v[6] = v[2] + v[5];
	c[20] = v[6];

  /***  constraint 22  ***/

	kall_congruentcircles_c71_pd[81] = x[10] - x[12];
	kall_congruentcircles_c71_pd[80] = x[10] - x[12];
	v[2] = kall_congruentcircles_c71_pd[81] * kall_congruentcircles_c71_pd[80];
	kall_congruentcircles_c71_pd[83] = x[11] - x[13];
	kall_congruentcircles_c71_pd[82] = x[11] - x[13];
	v[5] = kall_congruentcircles_c71_pd[83] * kall_congruentcircles_c71_pd[82];
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

	t1 = x[0];
	t1 += -x[2];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[0];
	t1 += -x[4];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[0];
	t1 += -x[6];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[0];
	t1 += -x[8];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[0];
	t1 += -x[10];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[0];
	t1 += -x[12];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[2];
	t1 += -x[4];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[2];
	t1 += -x[6];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[2];
	t1 += -x[8];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[2];
	t1 += -x[10];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[2];
	t1 += -x[12];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[4];
	t1 += -x[6];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[4];
	t1 += -x[8];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[4];
	t1 += -x[10];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[4];
	t1 += -x[12];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[6];
	t1 += -x[8];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[6];
	t1 += -x[10];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[6];
	t1 += -x[12];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[8];
	t1 += -x[10];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[8];
	t1 += -x[12];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[10];
	t1 += -x[12];
	c[59] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[150] = -x[14];
	J[142] = -x[15];
	J[158] = 1.;

   /*** derivatives for constraint 2 ***/

	J[35] = -kall_congruentcircles_c71_pd[3];
	J[14] = kall_congruentcircles_c71_pd[3];
	J[35] -= kall_congruentcircles_c71_pd[2];
	J[14] += kall_congruentcircles_c71_pd[2];
	J[22] = -kall_congruentcircles_c71_pd[1];
	J[0] = kall_congruentcircles_c71_pd[1];
	J[22] -= kall_congruentcircles_c71_pd[0];
	J[0] += kall_congruentcircles_c71_pd[0];

   /*** derivatives for constraint 3 ***/

	J[55] = -kall_congruentcircles_c71_pd[7];
	J[15] = kall_congruentcircles_c71_pd[7];
	J[55] -= kall_congruentcircles_c71_pd[6];
	J[15] += kall_congruentcircles_c71_pd[6];
	J[42] = -kall_congruentcircles_c71_pd[5];
	J[1] = kall_congruentcircles_c71_pd[5];
	J[42] -= kall_congruentcircles_c71_pd[4];
	J[1] += kall_congruentcircles_c71_pd[4];

   /*** derivatives for constraint 4 ***/

	J[75] = -kall_congruentcircles_c71_pd[11];
	J[16] = kall_congruentcircles_c71_pd[11];
	J[75] -= kall_congruentcircles_c71_pd[10];
	J[16] += kall_congruentcircles_c71_pd[10];
	J[62] = -kall_congruentcircles_c71_pd[9];
	J[2] = kall_congruentcircles_c71_pd[9];
	J[62] -= kall_congruentcircles_c71_pd[8];
	J[2] += kall_congruentcircles_c71_pd[8];

   /*** derivatives for constraint 5 ***/

	J[95] = -kall_congruentcircles_c71_pd[15];
	J[17] = kall_congruentcircles_c71_pd[15];
	J[95] -= kall_congruentcircles_c71_pd[14];
	J[17] += kall_congruentcircles_c71_pd[14];
	J[82] = -kall_congruentcircles_c71_pd[13];
	J[3] = kall_congruentcircles_c71_pd[13];
	J[82] -= kall_congruentcircles_c71_pd[12];
	J[3] += kall_congruentcircles_c71_pd[12];

   /*** derivatives for constraint 6 ***/

	J[115] = -kall_congruentcircles_c71_pd[19];
	J[18] = kall_congruentcircles_c71_pd[19];
	J[115] -= kall_congruentcircles_c71_pd[18];
	J[18] += kall_congruentcircles_c71_pd[18];
	J[102] = -kall_congruentcircles_c71_pd[17];
	J[4] = kall_congruentcircles_c71_pd[17];
	J[102] -= kall_congruentcircles_c71_pd[16];
	J[4] += kall_congruentcircles_c71_pd[16];

   /*** derivatives for constraint 7 ***/

	J[135] = -kall_congruentcircles_c71_pd[23];
	J[19] = kall_congruentcircles_c71_pd[23];
	J[135] -= kall_congruentcircles_c71_pd[22];
	J[19] += kall_congruentcircles_c71_pd[22];
	J[122] = -kall_congruentcircles_c71_pd[21];
	J[5] = kall_congruentcircles_c71_pd[21];
	J[122] -= kall_congruentcircles_c71_pd[20];
	J[5] += kall_congruentcircles_c71_pd[20];

   /*** derivatives for constraint 8 ***/

	J[56] = -kall_congruentcircles_c71_pd[27];
	J[36] = kall_congruentcircles_c71_pd[27];
	J[56] -= kall_congruentcircles_c71_pd[26];
	J[36] += kall_congruentcircles_c71_pd[26];
	J[43] = -kall_congruentcircles_c71_pd[25];
	J[23] = kall_congruentcircles_c71_pd[25];
	J[43] -= kall_congruentcircles_c71_pd[24];
	J[23] += kall_congruentcircles_c71_pd[24];

   /*** derivatives for constraint 9 ***/

	J[76] = -kall_congruentcircles_c71_pd[31];
	J[37] = kall_congruentcircles_c71_pd[31];
	J[76] -= kall_congruentcircles_c71_pd[30];
	J[37] += kall_congruentcircles_c71_pd[30];
	J[63] = -kall_congruentcircles_c71_pd[29];
	J[24] = kall_congruentcircles_c71_pd[29];
	J[63] -= kall_congruentcircles_c71_pd[28];
	J[24] += kall_congruentcircles_c71_pd[28];

   /*** derivatives for constraint 10 ***/

	J[96] = -kall_congruentcircles_c71_pd[35];
	J[38] = kall_congruentcircles_c71_pd[35];
	J[96] -= kall_congruentcircles_c71_pd[34];
	J[38] += kall_congruentcircles_c71_pd[34];
	J[83] = -kall_congruentcircles_c71_pd[33];
	J[25] = kall_congruentcircles_c71_pd[33];
	J[83] -= kall_congruentcircles_c71_pd[32];
	J[25] += kall_congruentcircles_c71_pd[32];

   /*** derivatives for constraint 11 ***/

	J[116] = -kall_congruentcircles_c71_pd[39];
	J[39] = kall_congruentcircles_c71_pd[39];
	J[116] -= kall_congruentcircles_c71_pd[38];
	J[39] += kall_congruentcircles_c71_pd[38];
	J[103] = -kall_congruentcircles_c71_pd[37];
	J[26] = kall_congruentcircles_c71_pd[37];
	J[103] -= kall_congruentcircles_c71_pd[36];
	J[26] += kall_congruentcircles_c71_pd[36];

   /*** derivatives for constraint 12 ***/

	J[136] = -kall_congruentcircles_c71_pd[43];
	J[40] = kall_congruentcircles_c71_pd[43];
	J[136] -= kall_congruentcircles_c71_pd[42];
	J[40] += kall_congruentcircles_c71_pd[42];
	J[123] = -kall_congruentcircles_c71_pd[41];
	J[27] = kall_congruentcircles_c71_pd[41];
	J[123] -= kall_congruentcircles_c71_pd[40];
	J[27] += kall_congruentcircles_c71_pd[40];

   /*** derivatives for constraint 13 ***/

	J[77] = -kall_congruentcircles_c71_pd[47];
	J[57] = kall_congruentcircles_c71_pd[47];
	J[77] -= kall_congruentcircles_c71_pd[46];
	J[57] += kall_congruentcircles_c71_pd[46];
	J[64] = -kall_congruentcircles_c71_pd[45];
	J[44] = kall_congruentcircles_c71_pd[45];
	J[64] -= kall_congruentcircles_c71_pd[44];
	J[44] += kall_congruentcircles_c71_pd[44];

   /*** derivatives for constraint 14 ***/

	J[97] = -kall_congruentcircles_c71_pd[51];
	J[58] = kall_congruentcircles_c71_pd[51];
	J[97] -= kall_congruentcircles_c71_pd[50];
	J[58] += kall_congruentcircles_c71_pd[50];
	J[84] = -kall_congruentcircles_c71_pd[49];
	J[45] = kall_congruentcircles_c71_pd[49];
	J[84] -= kall_congruentcircles_c71_pd[48];
	J[45] += kall_congruentcircles_c71_pd[48];

   /*** derivatives for constraint 15 ***/

	J[117] = -kall_congruentcircles_c71_pd[55];
	J[59] = kall_congruentcircles_c71_pd[55];
	J[117] -= kall_congruentcircles_c71_pd[54];
	J[59] += kall_congruentcircles_c71_pd[54];
	J[104] = -kall_congruentcircles_c71_pd[53];
	J[46] = kall_congruentcircles_c71_pd[53];
	J[104] -= kall_congruentcircles_c71_pd[52];
	J[46] += kall_congruentcircles_c71_pd[52];

   /*** derivatives for constraint 16 ***/

	J[137] = -kall_congruentcircles_c71_pd[59];
	J[60] = kall_congruentcircles_c71_pd[59];
	J[137] -= kall_congruentcircles_c71_pd[58];
	J[60] += kall_congruentcircles_c71_pd[58];
	J[124] = -kall_congruentcircles_c71_pd[57];
	J[47] = kall_congruentcircles_c71_pd[57];
	J[124] -= kall_congruentcircles_c71_pd[56];
	J[47] += kall_congruentcircles_c71_pd[56];

   /*** derivatives for constraint 17 ***/

	J[98] = -kall_congruentcircles_c71_pd[63];
	J[78] = kall_congruentcircles_c71_pd[63];
	J[98] -= kall_congruentcircles_c71_pd[62];
	J[78] += kall_congruentcircles_c71_pd[62];
	J[85] = -kall_congruentcircles_c71_pd[61];
	J[65] = kall_congruentcircles_c71_pd[61];
	J[85] -= kall_congruentcircles_c71_pd[60];
	J[65] += kall_congruentcircles_c71_pd[60];

   /*** derivatives for constraint 18 ***/

	J[118] = -kall_congruentcircles_c71_pd[67];
	J[79] = kall_congruentcircles_c71_pd[67];
	J[118] -= kall_congruentcircles_c71_pd[66];
	J[79] += kall_congruentcircles_c71_pd[66];
	J[105] = -kall_congruentcircles_c71_pd[65];
	J[66] = kall_congruentcircles_c71_pd[65];
	J[105] -= kall_congruentcircles_c71_pd[64];
	J[66] += kall_congruentcircles_c71_pd[64];

   /*** derivatives for constraint 19 ***/

	J[138] = -kall_congruentcircles_c71_pd[71];
	J[80] = kall_congruentcircles_c71_pd[71];
	J[138] -= kall_congruentcircles_c71_pd[70];
	J[80] += kall_congruentcircles_c71_pd[70];
	J[125] = -kall_congruentcircles_c71_pd[69];
	J[67] = kall_congruentcircles_c71_pd[69];
	J[125] -= kall_congruentcircles_c71_pd[68];
	J[67] += kall_congruentcircles_c71_pd[68];

   /*** derivatives for constraint 20 ***/

	J[119] = -kall_congruentcircles_c71_pd[75];
	J[99] = kall_congruentcircles_c71_pd[75];
	J[119] -= kall_congruentcircles_c71_pd[74];
	J[99] += kall_congruentcircles_c71_pd[74];
	J[106] = -kall_congruentcircles_c71_pd[73];
	J[86] = kall_congruentcircles_c71_pd[73];
	J[106] -= kall_congruentcircles_c71_pd[72];
	J[86] += kall_congruentcircles_c71_pd[72];

   /*** derivatives for constraint 21 ***/

	J[139] = -kall_congruentcircles_c71_pd[79];
	J[100] = kall_congruentcircles_c71_pd[79];
	J[139] -= kall_congruentcircles_c71_pd[78];
	J[100] += kall_congruentcircles_c71_pd[78];
	J[126] = -kall_congruentcircles_c71_pd[77];
	J[87] = kall_congruentcircles_c71_pd[77];
	J[126] -= kall_congruentcircles_c71_pd[76];
	J[87] += kall_congruentcircles_c71_pd[76];

   /*** derivatives for constraint 22 ***/

	J[140] = -kall_congruentcircles_c71_pd[83];
	J[120] = kall_congruentcircles_c71_pd[83];
	J[140] -= kall_congruentcircles_c71_pd[82];
	J[120] += kall_congruentcircles_c71_pd[82];
	J[127] = -kall_congruentcircles_c71_pd[81];
	J[107] = kall_congruentcircles_c71_pd[81];
	J[127] -= kall_congruentcircles_c71_pd[80];
	J[107] += kall_congruentcircles_c71_pd[80];

   /*** derivatives for constraint 23 ***/

	J[159] = -1.;
	J[160] = 1.;

   /*** derivatives for constraint 24 ***/

	J[6] = 1.;
	J[143] = -1.;

   /*** derivatives for constraint 25 ***/

	J[20] = 1.;
	J[151] = -1.;

   /*** derivatives for constraint 26 ***/

	J[28] = 1.;
	J[144] = -1.;

   /*** derivatives for constraint 27 ***/

	J[41] = 1.;
	J[152] = -1.;

   /*** derivatives for constraint 28 ***/

	J[48] = 1.;
	J[145] = -1.;

   /*** derivatives for constraint 29 ***/

	J[61] = 1.;
	J[153] = -1.;

   /*** derivatives for constraint 30 ***/

	J[68] = 1.;
	J[146] = -1.;

   /*** derivatives for constraint 31 ***/

	J[81] = 1.;
	J[154] = -1.;

   /*** derivatives for constraint 32 ***/

	J[88] = 1.;
	J[147] = -1.;

   /*** derivatives for constraint 33 ***/

	J[101] = 1.;
	J[155] = -1.;

   /*** derivatives for constraint 34 ***/

	J[108] = 1.;
	J[148] = -1.;

   /*** derivatives for constraint 35 ***/

	J[121] = 1.;
	J[156] = -1.;

   /*** derivatives for constraint 36 ***/

	J[128] = 1.;
	J[149] = -1.;

   /*** derivatives for constraint 37 ***/

	J[141] = 1.;
	J[157] = -1.;

   /*** derivatives for constraint 38 ***/

	J[7] = 1.;

   /*** derivatives for constraint 39 ***/

	J[21] = 1.;

   /*** derivatives for constraint 40 ***/

	J[8] = 1.;
	J[29] = -1.;

   /*** derivatives for constraint 41 ***/

	J[9] = 1.;
	J[49] = -1.;

   /*** derivatives for constraint 42 ***/

	J[10] = 1.;
	J[69] = -1.;

   /*** derivatives for constraint 43 ***/

	J[11] = 1.;
	J[89] = -1.;

   /*** derivatives for constraint 44 ***/

	J[12] = 1.;
	J[109] = -1.;

   /*** derivatives for constraint 45 ***/

	J[13] = 1.;
	J[129] = -1.;

   /*** derivatives for constraint 46 ***/

	J[30] = 1.;
	J[50] = -1.;

   /*** derivatives for constraint 47 ***/

	J[31] = 1.;
	J[70] = -1.;

   /*** derivatives for constraint 48 ***/

	J[32] = 1.;
	J[90] = -1.;

   /*** derivatives for constraint 49 ***/

	J[33] = 1.;
	J[110] = -1.;

   /*** derivatives for constraint 50 ***/

	J[34] = 1.;
	J[130] = -1.;

   /*** derivatives for constraint 51 ***/

	J[51] = 1.;
	J[71] = -1.;

   /*** derivatives for constraint 52 ***/

	J[52] = 1.;
	J[91] = -1.;

   /*** derivatives for constraint 53 ***/

	J[53] = 1.;
	J[111] = -1.;

   /*** derivatives for constraint 54 ***/

	J[54] = 1.;
	J[131] = -1.;

   /*** derivatives for constraint 55 ***/

	J[72] = 1.;
	J[92] = -1.;

   /*** derivatives for constraint 56 ***/

	J[73] = 1.;
	J[112] = -1.;

   /*** derivatives for constraint 57 ***/

	J[74] = 1.;
	J[132] = -1.;

   /*** derivatives for constraint 58 ***/

	J[93] = 1.;
	J[113] = -1.;

   /*** derivatives for constraint 59 ***/

	J[94] = 1.;
	J[133] = -1.;

   /*** derivatives for constraint 60 ***/

	J[114] = 1.;
	J[134] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
