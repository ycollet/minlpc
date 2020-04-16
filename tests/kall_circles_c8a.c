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
 fint kall_circles_c8a_auxcom_[1] = { 37 /* nlc */ };
 fint kall_circles_c8a_funcom_[272] = {
	22 /* nvar */,
	1 /* nobj */,
	86 /* ncon */,
	243 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	18,
	28,
	44,
	53,
	69,
	78,
	94,
	103,
	119,
	128,
	144,
	153,
	169,
	178,
	194,
	203,
	212,
	221,
	231,
	241,
	243,
	244,

	/* rownos */
	1,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	39,
	57,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	40,
	58,
	2,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	41,
	59,
	66,
	67,
	68,
	69,
	70,
	71,
	2,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	42,
	3,
	10,
	17,
	18,
	19,
	20,
	21,
	22,
	43,
	60,
	66,
	72,
	73,
	74,
	75,
	76,
	3,
	10,
	17,
	18,
	19,
	20,
	21,
	22,
	44,
	4,
	11,
	17,
	23,
	24,
	25,
	26,
	27,
	45,
	61,
	67,
	72,
	77,
	78,
	79,
	80,
	4,
	11,
	17,
	23,
	24,
	25,
	26,
	27,
	46,
	5,
	12,
	18,
	23,
	28,
	29,
	30,
	31,
	47,
	62,
	68,
	73,
	77,
	81,
	82,
	83,
	5,
	12,
	18,
	23,
	28,
	29,
	30,
	31,
	48,
	6,
	13,
	19,
	24,
	28,
	32,
	33,
	34,
	49,
	63,
	69,
	74,
	78,
	81,
	84,
	85,
	6,
	13,
	19,
	24,
	28,
	32,
	33,
	34,
	50,
	7,
	14,
	20,
	25,
	29,
	32,
	35,
	36,
	51,
	64,
	70,
	75,
	79,
	82,
	84,
	86,
	7,
	14,
	20,
	25,
	29,
	32,
	35,
	36,
	52,
	8,
	15,
	21,
	26,
	30,
	33,
	35,
	37,
	53,
	65,
	71,
	76,
	80,
	83,
	85,
	86,
	8,
	15,
	21,
	26,
	30,
	33,
	35,
	37,
	54,
	9,
	16,
	22,
	27,
	31,
	34,
	36,
	37,
	55,
	9,
	16,
	22,
	27,
	31,
	34,
	36,
	37,
	56,
	1,
	39,
	41,
	43,
	45,
	47,
	49,
	51,
	53,
	55,
	1,
	40,
	42,
	44,
	46,
	48,
	50,
	52,
	54,
	56,
	1,
	38,
	38 };

 real kall_circles_c8a_boundc_[1+44+172] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		7.5,
		0.5,
		1.6,
		0.5,
		7.5,
		0.5,
		1.6,
		0.5,
		7.5,
		0.5,
		1.6,
		0.5,
		7.5,
		0.5,
		1.6,
		0.5,
		7.5,
		0.5,
		1.6,
		0.5,
		7.5,
		0.5,
		1.6,
		0.5,
		7.5,
		0.5,
		1.6,
		0.5,
		7.5,
		0.5,
		1.6,
		0.7,
		7.3,
		0.7,
		1.4,
		0.,
		8.,
		0.,
		2.1,
		0.49,
		16.8,
		0.,
		16.8,
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
		1.44,
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
		1.44,
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
		1.44,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.44,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.44,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.44,
		1.7e308,
		1.,
		1.7e308,
		1.44,
		1.7e308,
		1.44,
		1.7e308,
		-7.82256570743859,
		-7.82256570743859,
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
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.7,
		-1.7e308,
		-0.7,
		-1.7e308,
		4.,
		-1.7e308,
		1.05,
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

 real kall_circles_c8a_x0comn_[22] = {
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
		0.5,
		0.5,
		0.7,
		0.7,
		0.,
		0.,
		0.49,
		0. };

 static real kall_circles_c8a_pd[144];
static real kall_circles_c8a_old_x[22];
static int kall_circles_c8a_xkind = -1;

 static int
kall_circles_c8a_xcheck(real *x)
{
	real *x1 = kall_circles_c8a_old_x, *xe = x + 22;
	errno = 0;
	if (kall_circles_c8a_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_circles_c8a_xkind = 0;
	return 1;
	}
 real
kall_circles_c8a_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_circles_c8a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[21];
	;}

	if (wantfg & 2) {
	g[21] = 1.;
	}

	return rv;
}

 void
kall_circles_c8a_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_circles_c8a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[18] * x[19];
	v[1] = -v[0];
	t1 = v[1] + x[20];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_circles_c8a_pd[1] = x[0] - x[2];
	kall_circles_c8a_pd[0] = x[0] - x[2];
	v[2] = kall_circles_c8a_pd[1] * kall_circles_c8a_pd[0];
	kall_circles_c8a_pd[3] = x[1] - x[3];
	kall_circles_c8a_pd[2] = x[1] - x[3];
	v[5] = kall_circles_c8a_pd[3] * kall_circles_c8a_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_circles_c8a_pd[5] = x[0] - x[4];
	kall_circles_c8a_pd[4] = x[0] - x[4];
	v[2] = kall_circles_c8a_pd[5] * kall_circles_c8a_pd[4];
	kall_circles_c8a_pd[7] = x[1] - x[5];
	kall_circles_c8a_pd[6] = x[1] - x[5];
	v[5] = kall_circles_c8a_pd[7] * kall_circles_c8a_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_circles_c8a_pd[9] = x[0] - x[6];
	kall_circles_c8a_pd[8] = x[0] - x[6];
	v[2] = kall_circles_c8a_pd[9] * kall_circles_c8a_pd[8];
	kall_circles_c8a_pd[11] = x[1] - x[7];
	kall_circles_c8a_pd[10] = x[1] - x[7];
	v[5] = kall_circles_c8a_pd[11] * kall_circles_c8a_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_circles_c8a_pd[13] = x[0] - x[8];
	kall_circles_c8a_pd[12] = x[0] - x[8];
	v[2] = kall_circles_c8a_pd[13] * kall_circles_c8a_pd[12];
	kall_circles_c8a_pd[15] = x[1] - x[9];
	kall_circles_c8a_pd[14] = x[1] - x[9];
	v[5] = kall_circles_c8a_pd[15] * kall_circles_c8a_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_circles_c8a_pd[17] = x[0] - x[10];
	kall_circles_c8a_pd[16] = x[0] - x[10];
	v[2] = kall_circles_c8a_pd[17] * kall_circles_c8a_pd[16];
	kall_circles_c8a_pd[19] = x[1] - x[11];
	kall_circles_c8a_pd[18] = x[1] - x[11];
	v[5] = kall_circles_c8a_pd[19] * kall_circles_c8a_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_circles_c8a_pd[21] = x[0] - x[12];
	kall_circles_c8a_pd[20] = x[0] - x[12];
	v[2] = kall_circles_c8a_pd[21] * kall_circles_c8a_pd[20];
	kall_circles_c8a_pd[23] = x[1] - x[13];
	kall_circles_c8a_pd[22] = x[1] - x[13];
	v[5] = kall_circles_c8a_pd[23] * kall_circles_c8a_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	kall_circles_c8a_pd[25] = x[0] - x[14];
	kall_circles_c8a_pd[24] = x[0] - x[14];
	v[2] = kall_circles_c8a_pd[25] * kall_circles_c8a_pd[24];
	kall_circles_c8a_pd[27] = x[1] - x[15];
	kall_circles_c8a_pd[26] = x[1] - x[15];
	v[5] = kall_circles_c8a_pd[27] * kall_circles_c8a_pd[26];
	v[6] = v[2] + v[5];
	c[7] = v[6];

  /***  constraint 9  ***/

	kall_circles_c8a_pd[29] = x[0] - x[16];
	kall_circles_c8a_pd[28] = x[0] - x[16];
	v[2] = kall_circles_c8a_pd[29] * kall_circles_c8a_pd[28];
	kall_circles_c8a_pd[31] = x[1] - x[17];
	kall_circles_c8a_pd[30] = x[1] - x[17];
	v[5] = kall_circles_c8a_pd[31] * kall_circles_c8a_pd[30];
	v[6] = v[2] + v[5];
	c[8] = v[6];

  /***  constraint 10  ***/

	kall_circles_c8a_pd[33] = x[2] - x[4];
	kall_circles_c8a_pd[32] = x[2] - x[4];
	v[2] = kall_circles_c8a_pd[33] * kall_circles_c8a_pd[32];
	kall_circles_c8a_pd[35] = x[3] - x[5];
	kall_circles_c8a_pd[34] = x[3] - x[5];
	v[5] = kall_circles_c8a_pd[35] * kall_circles_c8a_pd[34];
	v[6] = v[2] + v[5];
	c[9] = v[6];

  /***  constraint 11  ***/

	kall_circles_c8a_pd[37] = x[2] - x[6];
	kall_circles_c8a_pd[36] = x[2] - x[6];
	v[2] = kall_circles_c8a_pd[37] * kall_circles_c8a_pd[36];
	kall_circles_c8a_pd[39] = x[3] - x[7];
	kall_circles_c8a_pd[38] = x[3] - x[7];
	v[5] = kall_circles_c8a_pd[39] * kall_circles_c8a_pd[38];
	v[6] = v[2] + v[5];
	c[10] = v[6];

  /***  constraint 12  ***/

	kall_circles_c8a_pd[41] = x[2] - x[8];
	kall_circles_c8a_pd[40] = x[2] - x[8];
	v[2] = kall_circles_c8a_pd[41] * kall_circles_c8a_pd[40];
	kall_circles_c8a_pd[43] = x[3] - x[9];
	kall_circles_c8a_pd[42] = x[3] - x[9];
	v[5] = kall_circles_c8a_pd[43] * kall_circles_c8a_pd[42];
	v[6] = v[2] + v[5];
	c[11] = v[6];

  /***  constraint 13  ***/

	kall_circles_c8a_pd[45] = x[2] - x[10];
	kall_circles_c8a_pd[44] = x[2] - x[10];
	v[2] = kall_circles_c8a_pd[45] * kall_circles_c8a_pd[44];
	kall_circles_c8a_pd[47] = x[3] - x[11];
	kall_circles_c8a_pd[46] = x[3] - x[11];
	v[5] = kall_circles_c8a_pd[47] * kall_circles_c8a_pd[46];
	v[6] = v[2] + v[5];
	c[12] = v[6];

  /***  constraint 14  ***/

	kall_circles_c8a_pd[49] = x[2] - x[12];
	kall_circles_c8a_pd[48] = x[2] - x[12];
	v[2] = kall_circles_c8a_pd[49] * kall_circles_c8a_pd[48];
	kall_circles_c8a_pd[51] = x[3] - x[13];
	kall_circles_c8a_pd[50] = x[3] - x[13];
	v[5] = kall_circles_c8a_pd[51] * kall_circles_c8a_pd[50];
	v[6] = v[2] + v[5];
	c[13] = v[6];

  /***  constraint 15  ***/

	kall_circles_c8a_pd[53] = x[2] - x[14];
	kall_circles_c8a_pd[52] = x[2] - x[14];
	v[2] = kall_circles_c8a_pd[53] * kall_circles_c8a_pd[52];
	kall_circles_c8a_pd[55] = x[3] - x[15];
	kall_circles_c8a_pd[54] = x[3] - x[15];
	v[5] = kall_circles_c8a_pd[55] * kall_circles_c8a_pd[54];
	v[6] = v[2] + v[5];
	c[14] = v[6];

  /***  constraint 16  ***/

	kall_circles_c8a_pd[57] = x[2] - x[16];
	kall_circles_c8a_pd[56] = x[2] - x[16];
	v[2] = kall_circles_c8a_pd[57] * kall_circles_c8a_pd[56];
	kall_circles_c8a_pd[59] = x[3] - x[17];
	kall_circles_c8a_pd[58] = x[3] - x[17];
	v[5] = kall_circles_c8a_pd[59] * kall_circles_c8a_pd[58];
	v[6] = v[2] + v[5];
	c[15] = v[6];

  /***  constraint 17  ***/

	kall_circles_c8a_pd[61] = x[4] - x[6];
	kall_circles_c8a_pd[60] = x[4] - x[6];
	v[2] = kall_circles_c8a_pd[61] * kall_circles_c8a_pd[60];
	kall_circles_c8a_pd[63] = x[5] - x[7];
	kall_circles_c8a_pd[62] = x[5] - x[7];
	v[5] = kall_circles_c8a_pd[63] * kall_circles_c8a_pd[62];
	v[6] = v[2] + v[5];
	c[16] = v[6];

  /***  constraint 18  ***/

	kall_circles_c8a_pd[65] = x[4] - x[8];
	kall_circles_c8a_pd[64] = x[4] - x[8];
	v[2] = kall_circles_c8a_pd[65] * kall_circles_c8a_pd[64];
	kall_circles_c8a_pd[67] = x[5] - x[9];
	kall_circles_c8a_pd[66] = x[5] - x[9];
	v[5] = kall_circles_c8a_pd[67] * kall_circles_c8a_pd[66];
	v[6] = v[2] + v[5];
	c[17] = v[6];

  /***  constraint 19  ***/

	kall_circles_c8a_pd[69] = x[4] - x[10];
	kall_circles_c8a_pd[68] = x[4] - x[10];
	v[2] = kall_circles_c8a_pd[69] * kall_circles_c8a_pd[68];
	kall_circles_c8a_pd[71] = x[5] - x[11];
	kall_circles_c8a_pd[70] = x[5] - x[11];
	v[5] = kall_circles_c8a_pd[71] * kall_circles_c8a_pd[70];
	v[6] = v[2] + v[5];
	c[18] = v[6];

  /***  constraint 20  ***/

	kall_circles_c8a_pd[73] = x[4] - x[12];
	kall_circles_c8a_pd[72] = x[4] - x[12];
	v[2] = kall_circles_c8a_pd[73] * kall_circles_c8a_pd[72];
	kall_circles_c8a_pd[75] = x[5] - x[13];
	kall_circles_c8a_pd[74] = x[5] - x[13];
	v[5] = kall_circles_c8a_pd[75] * kall_circles_c8a_pd[74];
	v[6] = v[2] + v[5];
	c[19] = v[6];

  /***  constraint 21  ***/

	kall_circles_c8a_pd[77] = x[4] - x[14];
	kall_circles_c8a_pd[76] = x[4] - x[14];
	v[2] = kall_circles_c8a_pd[77] * kall_circles_c8a_pd[76];
	kall_circles_c8a_pd[79] = x[5] - x[15];
	kall_circles_c8a_pd[78] = x[5] - x[15];
	v[5] = kall_circles_c8a_pd[79] * kall_circles_c8a_pd[78];
	v[6] = v[2] + v[5];
	c[20] = v[6];

  /***  constraint 22  ***/

	kall_circles_c8a_pd[81] = x[4] - x[16];
	kall_circles_c8a_pd[80] = x[4] - x[16];
	v[2] = kall_circles_c8a_pd[81] * kall_circles_c8a_pd[80];
	kall_circles_c8a_pd[83] = x[5] - x[17];
	kall_circles_c8a_pd[82] = x[5] - x[17];
	v[5] = kall_circles_c8a_pd[83] * kall_circles_c8a_pd[82];
	v[6] = v[2] + v[5];
	c[21] = v[6];

  /***  constraint 23  ***/

	kall_circles_c8a_pd[85] = x[6] - x[8];
	kall_circles_c8a_pd[84] = x[6] - x[8];
	v[2] = kall_circles_c8a_pd[85] * kall_circles_c8a_pd[84];
	kall_circles_c8a_pd[87] = x[7] - x[9];
	kall_circles_c8a_pd[86] = x[7] - x[9];
	v[5] = kall_circles_c8a_pd[87] * kall_circles_c8a_pd[86];
	v[6] = v[2] + v[5];
	c[22] = v[6];

  /***  constraint 24  ***/

	kall_circles_c8a_pd[89] = x[6] - x[10];
	kall_circles_c8a_pd[88] = x[6] - x[10];
	v[2] = kall_circles_c8a_pd[89] * kall_circles_c8a_pd[88];
	kall_circles_c8a_pd[91] = x[7] - x[11];
	kall_circles_c8a_pd[90] = x[7] - x[11];
	v[5] = kall_circles_c8a_pd[91] * kall_circles_c8a_pd[90];
	v[6] = v[2] + v[5];
	c[23] = v[6];

  /***  constraint 25  ***/

	kall_circles_c8a_pd[93] = x[6] - x[12];
	kall_circles_c8a_pd[92] = x[6] - x[12];
	v[2] = kall_circles_c8a_pd[93] * kall_circles_c8a_pd[92];
	kall_circles_c8a_pd[95] = x[7] - x[13];
	kall_circles_c8a_pd[94] = x[7] - x[13];
	v[5] = kall_circles_c8a_pd[95] * kall_circles_c8a_pd[94];
	v[6] = v[2] + v[5];
	c[24] = v[6];

  /***  constraint 26  ***/

	kall_circles_c8a_pd[97] = x[6] - x[14];
	kall_circles_c8a_pd[96] = x[6] - x[14];
	v[2] = kall_circles_c8a_pd[97] * kall_circles_c8a_pd[96];
	kall_circles_c8a_pd[99] = x[7] - x[15];
	kall_circles_c8a_pd[98] = x[7] - x[15];
	v[5] = kall_circles_c8a_pd[99] * kall_circles_c8a_pd[98];
	v[6] = v[2] + v[5];
	c[25] = v[6];

  /***  constraint 27  ***/

	kall_circles_c8a_pd[101] = x[6] - x[16];
	kall_circles_c8a_pd[100] = x[6] - x[16];
	v[2] = kall_circles_c8a_pd[101] * kall_circles_c8a_pd[100];
	kall_circles_c8a_pd[103] = x[7] - x[17];
	kall_circles_c8a_pd[102] = x[7] - x[17];
	v[5] = kall_circles_c8a_pd[103] * kall_circles_c8a_pd[102];
	v[6] = v[2] + v[5];
	c[26] = v[6];

  /***  constraint 28  ***/

	kall_circles_c8a_pd[105] = x[8] - x[10];
	kall_circles_c8a_pd[104] = x[8] - x[10];
	v[2] = kall_circles_c8a_pd[105] * kall_circles_c8a_pd[104];
	kall_circles_c8a_pd[107] = x[9] - x[11];
	kall_circles_c8a_pd[106] = x[9] - x[11];
	v[5] = kall_circles_c8a_pd[107] * kall_circles_c8a_pd[106];
	v[6] = v[2] + v[5];
	c[27] = v[6];

  /***  constraint 29  ***/

	kall_circles_c8a_pd[109] = x[8] - x[12];
	kall_circles_c8a_pd[108] = x[8] - x[12];
	v[2] = kall_circles_c8a_pd[109] * kall_circles_c8a_pd[108];
	kall_circles_c8a_pd[111] = x[9] - x[13];
	kall_circles_c8a_pd[110] = x[9] - x[13];
	v[5] = kall_circles_c8a_pd[111] * kall_circles_c8a_pd[110];
	v[6] = v[2] + v[5];
	c[28] = v[6];

  /***  constraint 30  ***/

	kall_circles_c8a_pd[113] = x[8] - x[14];
	kall_circles_c8a_pd[112] = x[8] - x[14];
	v[2] = kall_circles_c8a_pd[113] * kall_circles_c8a_pd[112];
	kall_circles_c8a_pd[115] = x[9] - x[15];
	kall_circles_c8a_pd[114] = x[9] - x[15];
	v[5] = kall_circles_c8a_pd[115] * kall_circles_c8a_pd[114];
	v[6] = v[2] + v[5];
	c[29] = v[6];

  /***  constraint 31  ***/

	kall_circles_c8a_pd[117] = x[8] - x[16];
	kall_circles_c8a_pd[116] = x[8] - x[16];
	v[2] = kall_circles_c8a_pd[117] * kall_circles_c8a_pd[116];
	kall_circles_c8a_pd[119] = x[9] - x[17];
	kall_circles_c8a_pd[118] = x[9] - x[17];
	v[5] = kall_circles_c8a_pd[119] * kall_circles_c8a_pd[118];
	v[6] = v[2] + v[5];
	c[30] = v[6];

  /***  constraint 32  ***/

	kall_circles_c8a_pd[121] = x[10] - x[12];
	kall_circles_c8a_pd[120] = x[10] - x[12];
	v[2] = kall_circles_c8a_pd[121] * kall_circles_c8a_pd[120];
	kall_circles_c8a_pd[123] = x[11] - x[13];
	kall_circles_c8a_pd[122] = x[11] - x[13];
	v[5] = kall_circles_c8a_pd[123] * kall_circles_c8a_pd[122];
	v[6] = v[2] + v[5];
	c[31] = v[6];

  /***  constraint 33  ***/

	kall_circles_c8a_pd[125] = x[10] - x[14];
	kall_circles_c8a_pd[124] = x[10] - x[14];
	v[2] = kall_circles_c8a_pd[125] * kall_circles_c8a_pd[124];
	kall_circles_c8a_pd[127] = x[11] - x[15];
	kall_circles_c8a_pd[126] = x[11] - x[15];
	v[5] = kall_circles_c8a_pd[127] * kall_circles_c8a_pd[126];
	v[6] = v[2] + v[5];
	c[32] = v[6];

  /***  constraint 34  ***/

	kall_circles_c8a_pd[129] = x[10] - x[16];
	kall_circles_c8a_pd[128] = x[10] - x[16];
	v[2] = kall_circles_c8a_pd[129] * kall_circles_c8a_pd[128];
	kall_circles_c8a_pd[131] = x[11] - x[17];
	kall_circles_c8a_pd[130] = x[11] - x[17];
	v[5] = kall_circles_c8a_pd[131] * kall_circles_c8a_pd[130];
	v[6] = v[2] + v[5];
	c[33] = v[6];

  /***  constraint 35  ***/

	kall_circles_c8a_pd[133] = x[12] - x[14];
	kall_circles_c8a_pd[132] = x[12] - x[14];
	v[2] = kall_circles_c8a_pd[133] * kall_circles_c8a_pd[132];
	kall_circles_c8a_pd[135] = x[13] - x[15];
	kall_circles_c8a_pd[134] = x[13] - x[15];
	v[5] = kall_circles_c8a_pd[135] * kall_circles_c8a_pd[134];
	v[6] = v[2] + v[5];
	c[34] = v[6];

  /***  constraint 36  ***/

	kall_circles_c8a_pd[137] = x[12] - x[16];
	kall_circles_c8a_pd[136] = x[12] - x[16];
	v[2] = kall_circles_c8a_pd[137] * kall_circles_c8a_pd[136];
	kall_circles_c8a_pd[139] = x[13] - x[17];
	kall_circles_c8a_pd[138] = x[13] - x[17];
	v[5] = kall_circles_c8a_pd[139] * kall_circles_c8a_pd[138];
	v[6] = v[2] + v[5];
	c[35] = v[6];

  /***  constraint 37  ***/

	kall_circles_c8a_pd[141] = x[14] - x[16];
	kall_circles_c8a_pd[140] = x[14] - x[16];
	v[2] = kall_circles_c8a_pd[141] * kall_circles_c8a_pd[140];
	kall_circles_c8a_pd[143] = x[15] - x[17];
	kall_circles_c8a_pd[142] = x[15] - x[17];
	v[5] = kall_circles_c8a_pd[143] * kall_circles_c8a_pd[142];
	v[6] = v[2] + v[5];
	c[36] = v[6];

  /***  constraint 38  ***/

	t1 = -x[20];
	t1 += x[21];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[0];
	t1 += -x[18];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[1];
	t1 += -x[19];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[2];
	t1 += -x[18];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[3];
	t1 += -x[19];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[4];
	t1 += -x[18];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[5];
	t1 += -x[19];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[6];
	t1 += -x[18];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[7];
	t1 += -x[19];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[8];
	t1 += -x[18];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[9];
	t1 += -x[19];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[10];
	t1 += -x[18];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[11];
	t1 += -x[19];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[12];
	t1 += -x[18];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[13];
	t1 += -x[19];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[14];
	t1 += -x[18];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[15];
	t1 += -x[19];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[16];
	t1 += -x[18];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[17];
	t1 += -x[19];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[0];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[1];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[0];
	t1 += -x[2];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[0];
	t1 += -x[4];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[0];
	t1 += -x[6];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[0];
	t1 += -x[8];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[0];
	t1 += -x[10];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[0];
	t1 += -x[12];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[0];
	t1 += -x[14];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[2];
	t1 += -x[4];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[2];
	t1 += -x[6];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[2];
	t1 += -x[8];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[2];
	t1 += -x[10];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[2];
	t1 += -x[12];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[2];
	t1 += -x[14];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[4];
	t1 += -x[6];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[4];
	t1 += -x[8];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[4];
	t1 += -x[10];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[4];
	t1 += -x[12];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[4];
	t1 += -x[14];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[6];
	t1 += -x[8];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[6];
	t1 += -x[10];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[6];
	t1 += -x[12];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[6];
	t1 += -x[14];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[8];
	t1 += -x[10];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[8];
	t1 += -x[12];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[8];
	t1 += -x[14];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[10];
	t1 += -x[12];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[10];
	t1 += -x[14];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[12];
	t1 += -x[14];
	c[85] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[230] = -x[18];
	J[220] = -x[19];
	J[240] = 1.;

   /*** derivatives for constraint 2 ***/

	J[43] = -kall_circles_c8a_pd[3];
	J[17] = kall_circles_c8a_pd[3];
	J[43] -= kall_circles_c8a_pd[2];
	J[17] += kall_circles_c8a_pd[2];
	J[27] = -kall_circles_c8a_pd[1];
	J[0] = kall_circles_c8a_pd[1];
	J[27] -= kall_circles_c8a_pd[0];
	J[0] += kall_circles_c8a_pd[0];

   /*** derivatives for constraint 3 ***/

	J[68] = -kall_circles_c8a_pd[7];
	J[18] = kall_circles_c8a_pd[7];
	J[68] -= kall_circles_c8a_pd[6];
	J[18] += kall_circles_c8a_pd[6];
	J[52] = -kall_circles_c8a_pd[5];
	J[1] = kall_circles_c8a_pd[5];
	J[52] -= kall_circles_c8a_pd[4];
	J[1] += kall_circles_c8a_pd[4];

   /*** derivatives for constraint 4 ***/

	J[93] = -kall_circles_c8a_pd[11];
	J[19] = kall_circles_c8a_pd[11];
	J[93] -= kall_circles_c8a_pd[10];
	J[19] += kall_circles_c8a_pd[10];
	J[77] = -kall_circles_c8a_pd[9];
	J[2] = kall_circles_c8a_pd[9];
	J[77] -= kall_circles_c8a_pd[8];
	J[2] += kall_circles_c8a_pd[8];

   /*** derivatives for constraint 5 ***/

	J[118] = -kall_circles_c8a_pd[15];
	J[20] = kall_circles_c8a_pd[15];
	J[118] -= kall_circles_c8a_pd[14];
	J[20] += kall_circles_c8a_pd[14];
	J[102] = -kall_circles_c8a_pd[13];
	J[3] = kall_circles_c8a_pd[13];
	J[102] -= kall_circles_c8a_pd[12];
	J[3] += kall_circles_c8a_pd[12];

   /*** derivatives for constraint 6 ***/

	J[143] = -kall_circles_c8a_pd[19];
	J[21] = kall_circles_c8a_pd[19];
	J[143] -= kall_circles_c8a_pd[18];
	J[21] += kall_circles_c8a_pd[18];
	J[127] = -kall_circles_c8a_pd[17];
	J[4] = kall_circles_c8a_pd[17];
	J[127] -= kall_circles_c8a_pd[16];
	J[4] += kall_circles_c8a_pd[16];

   /*** derivatives for constraint 7 ***/

	J[168] = -kall_circles_c8a_pd[23];
	J[22] = kall_circles_c8a_pd[23];
	J[168] -= kall_circles_c8a_pd[22];
	J[22] += kall_circles_c8a_pd[22];
	J[152] = -kall_circles_c8a_pd[21];
	J[5] = kall_circles_c8a_pd[21];
	J[152] -= kall_circles_c8a_pd[20];
	J[5] += kall_circles_c8a_pd[20];

   /*** derivatives for constraint 8 ***/

	J[193] = -kall_circles_c8a_pd[27];
	J[23] = kall_circles_c8a_pd[27];
	J[193] -= kall_circles_c8a_pd[26];
	J[23] += kall_circles_c8a_pd[26];
	J[177] = -kall_circles_c8a_pd[25];
	J[6] = kall_circles_c8a_pd[25];
	J[177] -= kall_circles_c8a_pd[24];
	J[6] += kall_circles_c8a_pd[24];

   /*** derivatives for constraint 9 ***/

	J[211] = -kall_circles_c8a_pd[31];
	J[24] = kall_circles_c8a_pd[31];
	J[211] -= kall_circles_c8a_pd[30];
	J[24] += kall_circles_c8a_pd[30];
	J[202] = -kall_circles_c8a_pd[29];
	J[7] = kall_circles_c8a_pd[29];
	J[202] -= kall_circles_c8a_pd[28];
	J[7] += kall_circles_c8a_pd[28];

   /*** derivatives for constraint 10 ***/

	J[69] = -kall_circles_c8a_pd[35];
	J[44] = kall_circles_c8a_pd[35];
	J[69] -= kall_circles_c8a_pd[34];
	J[44] += kall_circles_c8a_pd[34];
	J[53] = -kall_circles_c8a_pd[33];
	J[28] = kall_circles_c8a_pd[33];
	J[53] -= kall_circles_c8a_pd[32];
	J[28] += kall_circles_c8a_pd[32];

   /*** derivatives for constraint 11 ***/

	J[94] = -kall_circles_c8a_pd[39];
	J[45] = kall_circles_c8a_pd[39];
	J[94] -= kall_circles_c8a_pd[38];
	J[45] += kall_circles_c8a_pd[38];
	J[78] = -kall_circles_c8a_pd[37];
	J[29] = kall_circles_c8a_pd[37];
	J[78] -= kall_circles_c8a_pd[36];
	J[29] += kall_circles_c8a_pd[36];

   /*** derivatives for constraint 12 ***/

	J[119] = -kall_circles_c8a_pd[43];
	J[46] = kall_circles_c8a_pd[43];
	J[119] -= kall_circles_c8a_pd[42];
	J[46] += kall_circles_c8a_pd[42];
	J[103] = -kall_circles_c8a_pd[41];
	J[30] = kall_circles_c8a_pd[41];
	J[103] -= kall_circles_c8a_pd[40];
	J[30] += kall_circles_c8a_pd[40];

   /*** derivatives for constraint 13 ***/

	J[144] = -kall_circles_c8a_pd[47];
	J[47] = kall_circles_c8a_pd[47];
	J[144] -= kall_circles_c8a_pd[46];
	J[47] += kall_circles_c8a_pd[46];
	J[128] = -kall_circles_c8a_pd[45];
	J[31] = kall_circles_c8a_pd[45];
	J[128] -= kall_circles_c8a_pd[44];
	J[31] += kall_circles_c8a_pd[44];

   /*** derivatives for constraint 14 ***/

	J[169] = -kall_circles_c8a_pd[51];
	J[48] = kall_circles_c8a_pd[51];
	J[169] -= kall_circles_c8a_pd[50];
	J[48] += kall_circles_c8a_pd[50];
	J[153] = -kall_circles_c8a_pd[49];
	J[32] = kall_circles_c8a_pd[49];
	J[153] -= kall_circles_c8a_pd[48];
	J[32] += kall_circles_c8a_pd[48];

   /*** derivatives for constraint 15 ***/

	J[194] = -kall_circles_c8a_pd[55];
	J[49] = kall_circles_c8a_pd[55];
	J[194] -= kall_circles_c8a_pd[54];
	J[49] += kall_circles_c8a_pd[54];
	J[178] = -kall_circles_c8a_pd[53];
	J[33] = kall_circles_c8a_pd[53];
	J[178] -= kall_circles_c8a_pd[52];
	J[33] += kall_circles_c8a_pd[52];

   /*** derivatives for constraint 16 ***/

	J[212] = -kall_circles_c8a_pd[59];
	J[50] = kall_circles_c8a_pd[59];
	J[212] -= kall_circles_c8a_pd[58];
	J[50] += kall_circles_c8a_pd[58];
	J[203] = -kall_circles_c8a_pd[57];
	J[34] = kall_circles_c8a_pd[57];
	J[203] -= kall_circles_c8a_pd[56];
	J[34] += kall_circles_c8a_pd[56];

   /*** derivatives for constraint 17 ***/

	J[95] = -kall_circles_c8a_pd[63];
	J[70] = kall_circles_c8a_pd[63];
	J[95] -= kall_circles_c8a_pd[62];
	J[70] += kall_circles_c8a_pd[62];
	J[79] = -kall_circles_c8a_pd[61];
	J[54] = kall_circles_c8a_pd[61];
	J[79] -= kall_circles_c8a_pd[60];
	J[54] += kall_circles_c8a_pd[60];

   /*** derivatives for constraint 18 ***/

	J[120] = -kall_circles_c8a_pd[67];
	J[71] = kall_circles_c8a_pd[67];
	J[120] -= kall_circles_c8a_pd[66];
	J[71] += kall_circles_c8a_pd[66];
	J[104] = -kall_circles_c8a_pd[65];
	J[55] = kall_circles_c8a_pd[65];
	J[104] -= kall_circles_c8a_pd[64];
	J[55] += kall_circles_c8a_pd[64];

   /*** derivatives for constraint 19 ***/

	J[145] = -kall_circles_c8a_pd[71];
	J[72] = kall_circles_c8a_pd[71];
	J[145] -= kall_circles_c8a_pd[70];
	J[72] += kall_circles_c8a_pd[70];
	J[129] = -kall_circles_c8a_pd[69];
	J[56] = kall_circles_c8a_pd[69];
	J[129] -= kall_circles_c8a_pd[68];
	J[56] += kall_circles_c8a_pd[68];

   /*** derivatives for constraint 20 ***/

	J[170] = -kall_circles_c8a_pd[75];
	J[73] = kall_circles_c8a_pd[75];
	J[170] -= kall_circles_c8a_pd[74];
	J[73] += kall_circles_c8a_pd[74];
	J[154] = -kall_circles_c8a_pd[73];
	J[57] = kall_circles_c8a_pd[73];
	J[154] -= kall_circles_c8a_pd[72];
	J[57] += kall_circles_c8a_pd[72];

   /*** derivatives for constraint 21 ***/

	J[195] = -kall_circles_c8a_pd[79];
	J[74] = kall_circles_c8a_pd[79];
	J[195] -= kall_circles_c8a_pd[78];
	J[74] += kall_circles_c8a_pd[78];
	J[179] = -kall_circles_c8a_pd[77];
	J[58] = kall_circles_c8a_pd[77];
	J[179] -= kall_circles_c8a_pd[76];
	J[58] += kall_circles_c8a_pd[76];

   /*** derivatives for constraint 22 ***/

	J[213] = -kall_circles_c8a_pd[83];
	J[75] = kall_circles_c8a_pd[83];
	J[213] -= kall_circles_c8a_pd[82];
	J[75] += kall_circles_c8a_pd[82];
	J[204] = -kall_circles_c8a_pd[81];
	J[59] = kall_circles_c8a_pd[81];
	J[204] -= kall_circles_c8a_pd[80];
	J[59] += kall_circles_c8a_pd[80];

   /*** derivatives for constraint 23 ***/

	J[121] = -kall_circles_c8a_pd[87];
	J[96] = kall_circles_c8a_pd[87];
	J[121] -= kall_circles_c8a_pd[86];
	J[96] += kall_circles_c8a_pd[86];
	J[105] = -kall_circles_c8a_pd[85];
	J[80] = kall_circles_c8a_pd[85];
	J[105] -= kall_circles_c8a_pd[84];
	J[80] += kall_circles_c8a_pd[84];

   /*** derivatives for constraint 24 ***/

	J[146] = -kall_circles_c8a_pd[91];
	J[97] = kall_circles_c8a_pd[91];
	J[146] -= kall_circles_c8a_pd[90];
	J[97] += kall_circles_c8a_pd[90];
	J[130] = -kall_circles_c8a_pd[89];
	J[81] = kall_circles_c8a_pd[89];
	J[130] -= kall_circles_c8a_pd[88];
	J[81] += kall_circles_c8a_pd[88];

   /*** derivatives for constraint 25 ***/

	J[171] = -kall_circles_c8a_pd[95];
	J[98] = kall_circles_c8a_pd[95];
	J[171] -= kall_circles_c8a_pd[94];
	J[98] += kall_circles_c8a_pd[94];
	J[155] = -kall_circles_c8a_pd[93];
	J[82] = kall_circles_c8a_pd[93];
	J[155] -= kall_circles_c8a_pd[92];
	J[82] += kall_circles_c8a_pd[92];

   /*** derivatives for constraint 26 ***/

	J[196] = -kall_circles_c8a_pd[99];
	J[99] = kall_circles_c8a_pd[99];
	J[196] -= kall_circles_c8a_pd[98];
	J[99] += kall_circles_c8a_pd[98];
	J[180] = -kall_circles_c8a_pd[97];
	J[83] = kall_circles_c8a_pd[97];
	J[180] -= kall_circles_c8a_pd[96];
	J[83] += kall_circles_c8a_pd[96];

   /*** derivatives for constraint 27 ***/

	J[214] = -kall_circles_c8a_pd[103];
	J[100] = kall_circles_c8a_pd[103];
	J[214] -= kall_circles_c8a_pd[102];
	J[100] += kall_circles_c8a_pd[102];
	J[205] = -kall_circles_c8a_pd[101];
	J[84] = kall_circles_c8a_pd[101];
	J[205] -= kall_circles_c8a_pd[100];
	J[84] += kall_circles_c8a_pd[100];

   /*** derivatives for constraint 28 ***/

	J[147] = -kall_circles_c8a_pd[107];
	J[122] = kall_circles_c8a_pd[107];
	J[147] -= kall_circles_c8a_pd[106];
	J[122] += kall_circles_c8a_pd[106];
	J[131] = -kall_circles_c8a_pd[105];
	J[106] = kall_circles_c8a_pd[105];
	J[131] -= kall_circles_c8a_pd[104];
	J[106] += kall_circles_c8a_pd[104];

   /*** derivatives for constraint 29 ***/

	J[172] = -kall_circles_c8a_pd[111];
	J[123] = kall_circles_c8a_pd[111];
	J[172] -= kall_circles_c8a_pd[110];
	J[123] += kall_circles_c8a_pd[110];
	J[156] = -kall_circles_c8a_pd[109];
	J[107] = kall_circles_c8a_pd[109];
	J[156] -= kall_circles_c8a_pd[108];
	J[107] += kall_circles_c8a_pd[108];

   /*** derivatives for constraint 30 ***/

	J[197] = -kall_circles_c8a_pd[115];
	J[124] = kall_circles_c8a_pd[115];
	J[197] -= kall_circles_c8a_pd[114];
	J[124] += kall_circles_c8a_pd[114];
	J[181] = -kall_circles_c8a_pd[113];
	J[108] = kall_circles_c8a_pd[113];
	J[181] -= kall_circles_c8a_pd[112];
	J[108] += kall_circles_c8a_pd[112];

   /*** derivatives for constraint 31 ***/

	J[215] = -kall_circles_c8a_pd[119];
	J[125] = kall_circles_c8a_pd[119];
	J[215] -= kall_circles_c8a_pd[118];
	J[125] += kall_circles_c8a_pd[118];
	J[206] = -kall_circles_c8a_pd[117];
	J[109] = kall_circles_c8a_pd[117];
	J[206] -= kall_circles_c8a_pd[116];
	J[109] += kall_circles_c8a_pd[116];

   /*** derivatives for constraint 32 ***/

	J[173] = -kall_circles_c8a_pd[123];
	J[148] = kall_circles_c8a_pd[123];
	J[173] -= kall_circles_c8a_pd[122];
	J[148] += kall_circles_c8a_pd[122];
	J[157] = -kall_circles_c8a_pd[121];
	J[132] = kall_circles_c8a_pd[121];
	J[157] -= kall_circles_c8a_pd[120];
	J[132] += kall_circles_c8a_pd[120];

   /*** derivatives for constraint 33 ***/

	J[198] = -kall_circles_c8a_pd[127];
	J[149] = kall_circles_c8a_pd[127];
	J[198] -= kall_circles_c8a_pd[126];
	J[149] += kall_circles_c8a_pd[126];
	J[182] = -kall_circles_c8a_pd[125];
	J[133] = kall_circles_c8a_pd[125];
	J[182] -= kall_circles_c8a_pd[124];
	J[133] += kall_circles_c8a_pd[124];

   /*** derivatives for constraint 34 ***/

	J[216] = -kall_circles_c8a_pd[131];
	J[150] = kall_circles_c8a_pd[131];
	J[216] -= kall_circles_c8a_pd[130];
	J[150] += kall_circles_c8a_pd[130];
	J[207] = -kall_circles_c8a_pd[129];
	J[134] = kall_circles_c8a_pd[129];
	J[207] -= kall_circles_c8a_pd[128];
	J[134] += kall_circles_c8a_pd[128];

   /*** derivatives for constraint 35 ***/

	J[199] = -kall_circles_c8a_pd[135];
	J[174] = kall_circles_c8a_pd[135];
	J[199] -= kall_circles_c8a_pd[134];
	J[174] += kall_circles_c8a_pd[134];
	J[183] = -kall_circles_c8a_pd[133];
	J[158] = kall_circles_c8a_pd[133];
	J[183] -= kall_circles_c8a_pd[132];
	J[158] += kall_circles_c8a_pd[132];

   /*** derivatives for constraint 36 ***/

	J[217] = -kall_circles_c8a_pd[139];
	J[175] = kall_circles_c8a_pd[139];
	J[217] -= kall_circles_c8a_pd[138];
	J[175] += kall_circles_c8a_pd[138];
	J[208] = -kall_circles_c8a_pd[137];
	J[159] = kall_circles_c8a_pd[137];
	J[208] -= kall_circles_c8a_pd[136];
	J[159] += kall_circles_c8a_pd[136];

   /*** derivatives for constraint 37 ***/

	J[218] = -kall_circles_c8a_pd[143];
	J[200] = kall_circles_c8a_pd[143];
	J[218] -= kall_circles_c8a_pd[142];
	J[200] += kall_circles_c8a_pd[142];
	J[209] = -kall_circles_c8a_pd[141];
	J[184] = kall_circles_c8a_pd[141];
	J[209] -= kall_circles_c8a_pd[140];
	J[184] += kall_circles_c8a_pd[140];

   /*** derivatives for constraint 38 ***/

	J[241] = -1.;
	J[242] = 1.;

   /*** derivatives for constraint 39 ***/

	J[8] = 1.;
	J[221] = -1.;

   /*** derivatives for constraint 40 ***/

	J[25] = 1.;
	J[231] = -1.;

   /*** derivatives for constraint 41 ***/

	J[35] = 1.;
	J[222] = -1.;

   /*** derivatives for constraint 42 ***/

	J[51] = 1.;
	J[232] = -1.;

   /*** derivatives for constraint 43 ***/

	J[60] = 1.;
	J[223] = -1.;

   /*** derivatives for constraint 44 ***/

	J[76] = 1.;
	J[233] = -1.;

   /*** derivatives for constraint 45 ***/

	J[85] = 1.;
	J[224] = -1.;

   /*** derivatives for constraint 46 ***/

	J[101] = 1.;
	J[234] = -1.;

   /*** derivatives for constraint 47 ***/

	J[110] = 1.;
	J[225] = -1.;

   /*** derivatives for constraint 48 ***/

	J[126] = 1.;
	J[235] = -1.;

   /*** derivatives for constraint 49 ***/

	J[135] = 1.;
	J[226] = -1.;

   /*** derivatives for constraint 50 ***/

	J[151] = 1.;
	J[236] = -1.;

   /*** derivatives for constraint 51 ***/

	J[160] = 1.;
	J[227] = -1.;

   /*** derivatives for constraint 52 ***/

	J[176] = 1.;
	J[237] = -1.;

   /*** derivatives for constraint 53 ***/

	J[185] = 1.;
	J[228] = -1.;

   /*** derivatives for constraint 54 ***/

	J[201] = 1.;
	J[238] = -1.;

   /*** derivatives for constraint 55 ***/

	J[210] = 1.;
	J[229] = -1.;

   /*** derivatives for constraint 56 ***/

	J[219] = 1.;
	J[239] = -1.;

   /*** derivatives for constraint 57 ***/

	J[9] = 1.;

   /*** derivatives for constraint 58 ***/

	J[26] = 1.;

   /*** derivatives for constraint 59 ***/

	J[10] = 1.;
	J[36] = -1.;

   /*** derivatives for constraint 60 ***/

	J[11] = 1.;
	J[61] = -1.;

   /*** derivatives for constraint 61 ***/

	J[12] = 1.;
	J[86] = -1.;

   /*** derivatives for constraint 62 ***/

	J[13] = 1.;
	J[111] = -1.;

   /*** derivatives for constraint 63 ***/

	J[14] = 1.;
	J[136] = -1.;

   /*** derivatives for constraint 64 ***/

	J[15] = 1.;
	J[161] = -1.;

   /*** derivatives for constraint 65 ***/

	J[16] = 1.;
	J[186] = -1.;

   /*** derivatives for constraint 66 ***/

	J[37] = 1.;
	J[62] = -1.;

   /*** derivatives for constraint 67 ***/

	J[38] = 1.;
	J[87] = -1.;

   /*** derivatives for constraint 68 ***/

	J[39] = 1.;
	J[112] = -1.;

   /*** derivatives for constraint 69 ***/

	J[40] = 1.;
	J[137] = -1.;

   /*** derivatives for constraint 70 ***/

	J[41] = 1.;
	J[162] = -1.;

   /*** derivatives for constraint 71 ***/

	J[42] = 1.;
	J[187] = -1.;

   /*** derivatives for constraint 72 ***/

	J[63] = 1.;
	J[88] = -1.;

   /*** derivatives for constraint 73 ***/

	J[64] = 1.;
	J[113] = -1.;

   /*** derivatives for constraint 74 ***/

	J[65] = 1.;
	J[138] = -1.;

   /*** derivatives for constraint 75 ***/

	J[66] = 1.;
	J[163] = -1.;

   /*** derivatives for constraint 76 ***/

	J[67] = 1.;
	J[188] = -1.;

   /*** derivatives for constraint 77 ***/

	J[89] = 1.;
	J[114] = -1.;

   /*** derivatives for constraint 78 ***/

	J[90] = 1.;
	J[139] = -1.;

   /*** derivatives for constraint 79 ***/

	J[91] = 1.;
	J[164] = -1.;

   /*** derivatives for constraint 80 ***/

	J[92] = 1.;
	J[189] = -1.;

   /*** derivatives for constraint 81 ***/

	J[115] = 1.;
	J[140] = -1.;

   /*** derivatives for constraint 82 ***/

	J[116] = 1.;
	J[165] = -1.;

   /*** derivatives for constraint 83 ***/

	J[117] = 1.;
	J[190] = -1.;

   /*** derivatives for constraint 84 ***/

	J[141] = 1.;
	J[166] = -1.;

   /*** derivatives for constraint 85 ***/

	J[142] = 1.;
	J[191] = -1.;

   /*** derivatives for constraint 86 ***/

	J[167] = 1.;
	J[192] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
