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
 fint kall_diffcircles_8_auxcom_[1] = { 29 /* nlc */ };
 fint kall_diffcircles_8_funcom_[180] = {
	20 /* nvar */,
	1 /* nobj */,
	49 /* ncon */,
	153 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	10,
	19,
	27,
	35,
	43,
	51,
	59,
	67,
	75,
	83,
	92,
	100,
	108,
	116,
	125,
	133,
	142,
	151,
	153,
	154,

	/* rownos */
	1,
	3,
	4,
	5,
	6,
	7,
	8,
	31,
	47,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	32,
	48,
	2,
	9,
	10,
	11,
	12,
	13,
	14,
	33,
	2,
	9,
	10,
	11,
	12,
	13,
	14,
	34,
	3,
	9,
	15,
	16,
	17,
	18,
	19,
	35,
	3,
	9,
	15,
	16,
	17,
	18,
	19,
	36,
	4,
	10,
	15,
	20,
	21,
	22,
	23,
	37,
	4,
	10,
	15,
	20,
	21,
	22,
	23,
	38,
	5,
	11,
	16,
	20,
	24,
	25,
	26,
	39,
	5,
	11,
	16,
	20,
	24,
	25,
	26,
	40,
	6,
	12,
	17,
	21,
	24,
	27,
	28,
	41,
	49,
	6,
	12,
	17,
	21,
	24,
	27,
	28,
	42,
	7,
	13,
	18,
	22,
	25,
	27,
	29,
	43,
	7,
	13,
	18,
	22,
	25,
	27,
	29,
	44,
	8,
	14,
	19,
	23,
	26,
	28,
	29,
	45,
	49,
	8,
	14,
	19,
	23,
	26,
	28,
	29,
	46,
	1,
	31,
	33,
	35,
	37,
	39,
	41,
	43,
	45,
	1,
	32,
	34,
	36,
	38,
	40,
	42,
	44,
	46,
	1,
	30,
	30 };

 real kall_diffcircles_8_boundc_[1+40+98] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.2,
		16.8,
		1.2,
		2.8,
		0.6,
		17.4,
		0.6,
		3.4,
		0.8,
		17.2,
		0.8,
		3.2,
		1.7,
		16.3,
		1.7,
		2.3,
		0.5,
		17.5,
		0.5,
		3.5,
		1.3,
		16.7,
		1.3,
		2.7,
		2.,
		16.,
		2.,
		2.,
		1.3,
		16.7,
		1.3,
		2.7,
		0.,
		18.,
		0.,
		4.,
		4.,
		72.,
		0.,
		72.,
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
		10.24,
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
		6.76,
		1.7e308,
		3.61,
		1.7e308,
		6.25,
		1.7e308,
		1.69,
		1.7e308,
		4.41,
		1.7e308,
		7.84,
		1.7e308,
		4.41,
		1.7e308,
		4.84,
		1.7e308,
		9.,
		1.7e308,
		13.69,
		1.7e308,
		9.,
		1.7e308,
		3.24,
		1.7e308,
		6.25,
		1.7e308,
		3.24,
		1.7e308,
		10.89,
		1.7e308,
		6.76,
		1.7e308,
		10.89,
		1.7e308,
		-40.7150407905237,
		-40.7150407905237,
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
		-2.,
		-1.7e308,
		-2.,
		-1.7e308,
		-1.3,
		-1.7e308,
		-1.3,
		-1.7e308,
		9.,
		-1.7e308,
		2.,
		-1.7e308,
		0.};

 real kall_diffcircles_8_x0comn_[20] = {
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
		2.,
		2.,
		1.3,
		1.3,
		0.,
		0.,
		4.,
		0. };

 static real kall_diffcircles_8_pd[112];
static real kall_diffcircles_8_old_x[20];
static int kall_diffcircles_8_xkind = -1;

 static int
kall_diffcircles_8_xcheck(real *x)
{
	real *x1 = kall_diffcircles_8_old_x, *xe = x + 20;
	errno = 0;
	if (kall_diffcircles_8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_diffcircles_8_xkind = 0;
	return 1;
	}
 real
kall_diffcircles_8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_diffcircles_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[19];
	;}

	if (wantfg & 2) {
	g[19] = 1.;
	}

	return rv;
}

 void
kall_diffcircles_8_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_diffcircles_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[16] * x[17];
	v[1] = -v[0];
	t1 = v[1] + x[18];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_diffcircles_8_pd[1] = x[0] - x[2];
	kall_diffcircles_8_pd[0] = x[0] - x[2];
	v[2] = kall_diffcircles_8_pd[1] * kall_diffcircles_8_pd[0];
	kall_diffcircles_8_pd[3] = x[1] - x[3];
	kall_diffcircles_8_pd[2] = x[1] - x[3];
	v[5] = kall_diffcircles_8_pd[3] * kall_diffcircles_8_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_diffcircles_8_pd[5] = x[0] - x[4];
	kall_diffcircles_8_pd[4] = x[0] - x[4];
	v[2] = kall_diffcircles_8_pd[5] * kall_diffcircles_8_pd[4];
	kall_diffcircles_8_pd[7] = x[1] - x[5];
	kall_diffcircles_8_pd[6] = x[1] - x[5];
	v[5] = kall_diffcircles_8_pd[7] * kall_diffcircles_8_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_diffcircles_8_pd[9] = x[0] - x[6];
	kall_diffcircles_8_pd[8] = x[0] - x[6];
	v[2] = kall_diffcircles_8_pd[9] * kall_diffcircles_8_pd[8];
	kall_diffcircles_8_pd[11] = x[1] - x[7];
	kall_diffcircles_8_pd[10] = x[1] - x[7];
	v[5] = kall_diffcircles_8_pd[11] * kall_diffcircles_8_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_diffcircles_8_pd[13] = x[0] - x[8];
	kall_diffcircles_8_pd[12] = x[0] - x[8];
	v[2] = kall_diffcircles_8_pd[13] * kall_diffcircles_8_pd[12];
	kall_diffcircles_8_pd[15] = x[1] - x[9];
	kall_diffcircles_8_pd[14] = x[1] - x[9];
	v[5] = kall_diffcircles_8_pd[15] * kall_diffcircles_8_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_diffcircles_8_pd[17] = x[0] - x[10];
	kall_diffcircles_8_pd[16] = x[0] - x[10];
	v[2] = kall_diffcircles_8_pd[17] * kall_diffcircles_8_pd[16];
	kall_diffcircles_8_pd[19] = x[1] - x[11];
	kall_diffcircles_8_pd[18] = x[1] - x[11];
	v[5] = kall_diffcircles_8_pd[19] * kall_diffcircles_8_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_diffcircles_8_pd[21] = x[0] - x[12];
	kall_diffcircles_8_pd[20] = x[0] - x[12];
	v[2] = kall_diffcircles_8_pd[21] * kall_diffcircles_8_pd[20];
	kall_diffcircles_8_pd[23] = x[1] - x[13];
	kall_diffcircles_8_pd[22] = x[1] - x[13];
	v[5] = kall_diffcircles_8_pd[23] * kall_diffcircles_8_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	kall_diffcircles_8_pd[25] = x[0] - x[14];
	kall_diffcircles_8_pd[24] = x[0] - x[14];
	v[2] = kall_diffcircles_8_pd[25] * kall_diffcircles_8_pd[24];
	kall_diffcircles_8_pd[27] = x[1] - x[15];
	kall_diffcircles_8_pd[26] = x[1] - x[15];
	v[5] = kall_diffcircles_8_pd[27] * kall_diffcircles_8_pd[26];
	v[6] = v[2] + v[5];
	c[7] = v[6];

  /***  constraint 9  ***/

	kall_diffcircles_8_pd[29] = x[2] - x[4];
	kall_diffcircles_8_pd[28] = x[2] - x[4];
	v[2] = kall_diffcircles_8_pd[29] * kall_diffcircles_8_pd[28];
	kall_diffcircles_8_pd[31] = x[3] - x[5];
	kall_diffcircles_8_pd[30] = x[3] - x[5];
	v[5] = kall_diffcircles_8_pd[31] * kall_diffcircles_8_pd[30];
	v[6] = v[2] + v[5];
	c[8] = v[6];

  /***  constraint 10  ***/

	kall_diffcircles_8_pd[33] = x[2] - x[6];
	kall_diffcircles_8_pd[32] = x[2] - x[6];
	v[2] = kall_diffcircles_8_pd[33] * kall_diffcircles_8_pd[32];
	kall_diffcircles_8_pd[35] = x[3] - x[7];
	kall_diffcircles_8_pd[34] = x[3] - x[7];
	v[5] = kall_diffcircles_8_pd[35] * kall_diffcircles_8_pd[34];
	v[6] = v[2] + v[5];
	c[9] = v[6];

  /***  constraint 11  ***/

	kall_diffcircles_8_pd[37] = x[2] - x[8];
	kall_diffcircles_8_pd[36] = x[2] - x[8];
	v[2] = kall_diffcircles_8_pd[37] * kall_diffcircles_8_pd[36];
	kall_diffcircles_8_pd[39] = x[3] - x[9];
	kall_diffcircles_8_pd[38] = x[3] - x[9];
	v[5] = kall_diffcircles_8_pd[39] * kall_diffcircles_8_pd[38];
	v[6] = v[2] + v[5];
	c[10] = v[6];

  /***  constraint 12  ***/

	kall_diffcircles_8_pd[41] = x[2] - x[10];
	kall_diffcircles_8_pd[40] = x[2] - x[10];
	v[2] = kall_diffcircles_8_pd[41] * kall_diffcircles_8_pd[40];
	kall_diffcircles_8_pd[43] = x[3] - x[11];
	kall_diffcircles_8_pd[42] = x[3] - x[11];
	v[5] = kall_diffcircles_8_pd[43] * kall_diffcircles_8_pd[42];
	v[6] = v[2] + v[5];
	c[11] = v[6];

  /***  constraint 13  ***/

	kall_diffcircles_8_pd[45] = x[2] - x[12];
	kall_diffcircles_8_pd[44] = x[2] - x[12];
	v[2] = kall_diffcircles_8_pd[45] * kall_diffcircles_8_pd[44];
	kall_diffcircles_8_pd[47] = x[3] - x[13];
	kall_diffcircles_8_pd[46] = x[3] - x[13];
	v[5] = kall_diffcircles_8_pd[47] * kall_diffcircles_8_pd[46];
	v[6] = v[2] + v[5];
	c[12] = v[6];

  /***  constraint 14  ***/

	kall_diffcircles_8_pd[49] = x[2] - x[14];
	kall_diffcircles_8_pd[48] = x[2] - x[14];
	v[2] = kall_diffcircles_8_pd[49] * kall_diffcircles_8_pd[48];
	kall_diffcircles_8_pd[51] = x[3] - x[15];
	kall_diffcircles_8_pd[50] = x[3] - x[15];
	v[5] = kall_diffcircles_8_pd[51] * kall_diffcircles_8_pd[50];
	v[6] = v[2] + v[5];
	c[13] = v[6];

  /***  constraint 15  ***/

	kall_diffcircles_8_pd[53] = x[4] - x[6];
	kall_diffcircles_8_pd[52] = x[4] - x[6];
	v[2] = kall_diffcircles_8_pd[53] * kall_diffcircles_8_pd[52];
	kall_diffcircles_8_pd[55] = x[5] - x[7];
	kall_diffcircles_8_pd[54] = x[5] - x[7];
	v[5] = kall_diffcircles_8_pd[55] * kall_diffcircles_8_pd[54];
	v[6] = v[2] + v[5];
	c[14] = v[6];

  /***  constraint 16  ***/

	kall_diffcircles_8_pd[57] = x[4] - x[8];
	kall_diffcircles_8_pd[56] = x[4] - x[8];
	v[2] = kall_diffcircles_8_pd[57] * kall_diffcircles_8_pd[56];
	kall_diffcircles_8_pd[59] = x[5] - x[9];
	kall_diffcircles_8_pd[58] = x[5] - x[9];
	v[5] = kall_diffcircles_8_pd[59] * kall_diffcircles_8_pd[58];
	v[6] = v[2] + v[5];
	c[15] = v[6];

  /***  constraint 17  ***/

	kall_diffcircles_8_pd[61] = x[4] - x[10];
	kall_diffcircles_8_pd[60] = x[4] - x[10];
	v[2] = kall_diffcircles_8_pd[61] * kall_diffcircles_8_pd[60];
	kall_diffcircles_8_pd[63] = x[5] - x[11];
	kall_diffcircles_8_pd[62] = x[5] - x[11];
	v[5] = kall_diffcircles_8_pd[63] * kall_diffcircles_8_pd[62];
	v[6] = v[2] + v[5];
	c[16] = v[6];

  /***  constraint 18  ***/

	kall_diffcircles_8_pd[65] = x[4] - x[12];
	kall_diffcircles_8_pd[64] = x[4] - x[12];
	v[2] = kall_diffcircles_8_pd[65] * kall_diffcircles_8_pd[64];
	kall_diffcircles_8_pd[67] = x[5] - x[13];
	kall_diffcircles_8_pd[66] = x[5] - x[13];
	v[5] = kall_diffcircles_8_pd[67] * kall_diffcircles_8_pd[66];
	v[6] = v[2] + v[5];
	c[17] = v[6];

  /***  constraint 19  ***/

	kall_diffcircles_8_pd[69] = x[4] - x[14];
	kall_diffcircles_8_pd[68] = x[4] - x[14];
	v[2] = kall_diffcircles_8_pd[69] * kall_diffcircles_8_pd[68];
	kall_diffcircles_8_pd[71] = x[5] - x[15];
	kall_diffcircles_8_pd[70] = x[5] - x[15];
	v[5] = kall_diffcircles_8_pd[71] * kall_diffcircles_8_pd[70];
	v[6] = v[2] + v[5];
	c[18] = v[6];

  /***  constraint 20  ***/

	kall_diffcircles_8_pd[73] = x[6] - x[8];
	kall_diffcircles_8_pd[72] = x[6] - x[8];
	v[2] = kall_diffcircles_8_pd[73] * kall_diffcircles_8_pd[72];
	kall_diffcircles_8_pd[75] = x[7] - x[9];
	kall_diffcircles_8_pd[74] = x[7] - x[9];
	v[5] = kall_diffcircles_8_pd[75] * kall_diffcircles_8_pd[74];
	v[6] = v[2] + v[5];
	c[19] = v[6];

  /***  constraint 21  ***/

	kall_diffcircles_8_pd[77] = x[6] - x[10];
	kall_diffcircles_8_pd[76] = x[6] - x[10];
	v[2] = kall_diffcircles_8_pd[77] * kall_diffcircles_8_pd[76];
	kall_diffcircles_8_pd[79] = x[7] - x[11];
	kall_diffcircles_8_pd[78] = x[7] - x[11];
	v[5] = kall_diffcircles_8_pd[79] * kall_diffcircles_8_pd[78];
	v[6] = v[2] + v[5];
	c[20] = v[6];

  /***  constraint 22  ***/

	kall_diffcircles_8_pd[81] = x[6] - x[12];
	kall_diffcircles_8_pd[80] = x[6] - x[12];
	v[2] = kall_diffcircles_8_pd[81] * kall_diffcircles_8_pd[80];
	kall_diffcircles_8_pd[83] = x[7] - x[13];
	kall_diffcircles_8_pd[82] = x[7] - x[13];
	v[5] = kall_diffcircles_8_pd[83] * kall_diffcircles_8_pd[82];
	v[6] = v[2] + v[5];
	c[21] = v[6];

  /***  constraint 23  ***/

	kall_diffcircles_8_pd[85] = x[6] - x[14];
	kall_diffcircles_8_pd[84] = x[6] - x[14];
	v[2] = kall_diffcircles_8_pd[85] * kall_diffcircles_8_pd[84];
	kall_diffcircles_8_pd[87] = x[7] - x[15];
	kall_diffcircles_8_pd[86] = x[7] - x[15];
	v[5] = kall_diffcircles_8_pd[87] * kall_diffcircles_8_pd[86];
	v[6] = v[2] + v[5];
	c[22] = v[6];

  /***  constraint 24  ***/

	kall_diffcircles_8_pd[89] = x[8] - x[10];
	kall_diffcircles_8_pd[88] = x[8] - x[10];
	v[2] = kall_diffcircles_8_pd[89] * kall_diffcircles_8_pd[88];
	kall_diffcircles_8_pd[91] = x[9] - x[11];
	kall_diffcircles_8_pd[90] = x[9] - x[11];
	v[5] = kall_diffcircles_8_pd[91] * kall_diffcircles_8_pd[90];
	v[6] = v[2] + v[5];
	c[23] = v[6];

  /***  constraint 25  ***/

	kall_diffcircles_8_pd[93] = x[8] - x[12];
	kall_diffcircles_8_pd[92] = x[8] - x[12];
	v[2] = kall_diffcircles_8_pd[93] * kall_diffcircles_8_pd[92];
	kall_diffcircles_8_pd[95] = x[9] - x[13];
	kall_diffcircles_8_pd[94] = x[9] - x[13];
	v[5] = kall_diffcircles_8_pd[95] * kall_diffcircles_8_pd[94];
	v[6] = v[2] + v[5];
	c[24] = v[6];

  /***  constraint 26  ***/

	kall_diffcircles_8_pd[97] = x[8] - x[14];
	kall_diffcircles_8_pd[96] = x[8] - x[14];
	v[2] = kall_diffcircles_8_pd[97] * kall_diffcircles_8_pd[96];
	kall_diffcircles_8_pd[99] = x[9] - x[15];
	kall_diffcircles_8_pd[98] = x[9] - x[15];
	v[5] = kall_diffcircles_8_pd[99] * kall_diffcircles_8_pd[98];
	v[6] = v[2] + v[5];
	c[25] = v[6];

  /***  constraint 27  ***/

	kall_diffcircles_8_pd[101] = x[10] - x[12];
	kall_diffcircles_8_pd[100] = x[10] - x[12];
	v[2] = kall_diffcircles_8_pd[101] * kall_diffcircles_8_pd[100];
	kall_diffcircles_8_pd[103] = x[11] - x[13];
	kall_diffcircles_8_pd[102] = x[11] - x[13];
	v[5] = kall_diffcircles_8_pd[103] * kall_diffcircles_8_pd[102];
	v[6] = v[2] + v[5];
	c[26] = v[6];

  /***  constraint 28  ***/

	kall_diffcircles_8_pd[105] = x[10] - x[14];
	kall_diffcircles_8_pd[104] = x[10] - x[14];
	v[2] = kall_diffcircles_8_pd[105] * kall_diffcircles_8_pd[104];
	kall_diffcircles_8_pd[107] = x[11] - x[15];
	kall_diffcircles_8_pd[106] = x[11] - x[15];
	v[5] = kall_diffcircles_8_pd[107] * kall_diffcircles_8_pd[106];
	v[6] = v[2] + v[5];
	c[27] = v[6];

  /***  constraint 29  ***/

	kall_diffcircles_8_pd[109] = x[12] - x[14];
	kall_diffcircles_8_pd[108] = x[12] - x[14];
	v[2] = kall_diffcircles_8_pd[109] * kall_diffcircles_8_pd[108];
	kall_diffcircles_8_pd[111] = x[13] - x[15];
	kall_diffcircles_8_pd[110] = x[13] - x[15];
	v[5] = kall_diffcircles_8_pd[111] * kall_diffcircles_8_pd[110];
	v[6] = v[2] + v[5];
	c[28] = v[6];

  /***  constraint 30  ***/

	t1 = -x[18];
	t1 += x[19];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[0];
	t1 += -x[16];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[1];
	t1 += -x[17];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[2];
	t1 += -x[16];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[3];
	t1 += -x[17];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[4];
	t1 += -x[16];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[5];
	t1 += -x[17];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[6];
	t1 += -x[16];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[7];
	t1 += -x[17];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[8];
	t1 += -x[16];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[9];
	t1 += -x[17];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[10];
	t1 += -x[16];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[11];
	t1 += -x[17];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[12];
	t1 += -x[16];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[13];
	t1 += -x[17];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[14];
	t1 += -x[16];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[15];
	t1 += -x[17];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[0];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[1];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[10];
	t1 += -x[14];
	c[48] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[141] = -x[16];
	J[132] = -x[17];
	J[150] = 1.;

   /*** derivatives for constraint 2 ***/

	J[26] = -kall_diffcircles_8_pd[3];
	J[9] = kall_diffcircles_8_pd[3];
	J[26] -= kall_diffcircles_8_pd[2];
	J[9] += kall_diffcircles_8_pd[2];
	J[18] = -kall_diffcircles_8_pd[1];
	J[0] = kall_diffcircles_8_pd[1];
	J[18] -= kall_diffcircles_8_pd[0];
	J[0] += kall_diffcircles_8_pd[0];

   /*** derivatives for constraint 3 ***/

	J[42] = -kall_diffcircles_8_pd[7];
	J[10] = kall_diffcircles_8_pd[7];
	J[42] -= kall_diffcircles_8_pd[6];
	J[10] += kall_diffcircles_8_pd[6];
	J[34] = -kall_diffcircles_8_pd[5];
	J[1] = kall_diffcircles_8_pd[5];
	J[34] -= kall_diffcircles_8_pd[4];
	J[1] += kall_diffcircles_8_pd[4];

   /*** derivatives for constraint 4 ***/

	J[58] = -kall_diffcircles_8_pd[11];
	J[11] = kall_diffcircles_8_pd[11];
	J[58] -= kall_diffcircles_8_pd[10];
	J[11] += kall_diffcircles_8_pd[10];
	J[50] = -kall_diffcircles_8_pd[9];
	J[2] = kall_diffcircles_8_pd[9];
	J[50] -= kall_diffcircles_8_pd[8];
	J[2] += kall_diffcircles_8_pd[8];

   /*** derivatives for constraint 5 ***/

	J[74] = -kall_diffcircles_8_pd[15];
	J[12] = kall_diffcircles_8_pd[15];
	J[74] -= kall_diffcircles_8_pd[14];
	J[12] += kall_diffcircles_8_pd[14];
	J[66] = -kall_diffcircles_8_pd[13];
	J[3] = kall_diffcircles_8_pd[13];
	J[66] -= kall_diffcircles_8_pd[12];
	J[3] += kall_diffcircles_8_pd[12];

   /*** derivatives for constraint 6 ***/

	J[91] = -kall_diffcircles_8_pd[19];
	J[13] = kall_diffcircles_8_pd[19];
	J[91] -= kall_diffcircles_8_pd[18];
	J[13] += kall_diffcircles_8_pd[18];
	J[82] = -kall_diffcircles_8_pd[17];
	J[4] = kall_diffcircles_8_pd[17];
	J[82] -= kall_diffcircles_8_pd[16];
	J[4] += kall_diffcircles_8_pd[16];

   /*** derivatives for constraint 7 ***/

	J[107] = -kall_diffcircles_8_pd[23];
	J[14] = kall_diffcircles_8_pd[23];
	J[107] -= kall_diffcircles_8_pd[22];
	J[14] += kall_diffcircles_8_pd[22];
	J[99] = -kall_diffcircles_8_pd[21];
	J[5] = kall_diffcircles_8_pd[21];
	J[99] -= kall_diffcircles_8_pd[20];
	J[5] += kall_diffcircles_8_pd[20];

   /*** derivatives for constraint 8 ***/

	J[124] = -kall_diffcircles_8_pd[27];
	J[15] = kall_diffcircles_8_pd[27];
	J[124] -= kall_diffcircles_8_pd[26];
	J[15] += kall_diffcircles_8_pd[26];
	J[115] = -kall_diffcircles_8_pd[25];
	J[6] = kall_diffcircles_8_pd[25];
	J[115] -= kall_diffcircles_8_pd[24];
	J[6] += kall_diffcircles_8_pd[24];

   /*** derivatives for constraint 9 ***/

	J[43] = -kall_diffcircles_8_pd[31];
	J[27] = kall_diffcircles_8_pd[31];
	J[43] -= kall_diffcircles_8_pd[30];
	J[27] += kall_diffcircles_8_pd[30];
	J[35] = -kall_diffcircles_8_pd[29];
	J[19] = kall_diffcircles_8_pd[29];
	J[35] -= kall_diffcircles_8_pd[28];
	J[19] += kall_diffcircles_8_pd[28];

   /*** derivatives for constraint 10 ***/

	J[59] = -kall_diffcircles_8_pd[35];
	J[28] = kall_diffcircles_8_pd[35];
	J[59] -= kall_diffcircles_8_pd[34];
	J[28] += kall_diffcircles_8_pd[34];
	J[51] = -kall_diffcircles_8_pd[33];
	J[20] = kall_diffcircles_8_pd[33];
	J[51] -= kall_diffcircles_8_pd[32];
	J[20] += kall_diffcircles_8_pd[32];

   /*** derivatives for constraint 11 ***/

	J[75] = -kall_diffcircles_8_pd[39];
	J[29] = kall_diffcircles_8_pd[39];
	J[75] -= kall_diffcircles_8_pd[38];
	J[29] += kall_diffcircles_8_pd[38];
	J[67] = -kall_diffcircles_8_pd[37];
	J[21] = kall_diffcircles_8_pd[37];
	J[67] -= kall_diffcircles_8_pd[36];
	J[21] += kall_diffcircles_8_pd[36];

   /*** derivatives for constraint 12 ***/

	J[92] = -kall_diffcircles_8_pd[43];
	J[30] = kall_diffcircles_8_pd[43];
	J[92] -= kall_diffcircles_8_pd[42];
	J[30] += kall_diffcircles_8_pd[42];
	J[83] = -kall_diffcircles_8_pd[41];
	J[22] = kall_diffcircles_8_pd[41];
	J[83] -= kall_diffcircles_8_pd[40];
	J[22] += kall_diffcircles_8_pd[40];

   /*** derivatives for constraint 13 ***/

	J[108] = -kall_diffcircles_8_pd[47];
	J[31] = kall_diffcircles_8_pd[47];
	J[108] -= kall_diffcircles_8_pd[46];
	J[31] += kall_diffcircles_8_pd[46];
	J[100] = -kall_diffcircles_8_pd[45];
	J[23] = kall_diffcircles_8_pd[45];
	J[100] -= kall_diffcircles_8_pd[44];
	J[23] += kall_diffcircles_8_pd[44];

   /*** derivatives for constraint 14 ***/

	J[125] = -kall_diffcircles_8_pd[51];
	J[32] = kall_diffcircles_8_pd[51];
	J[125] -= kall_diffcircles_8_pd[50];
	J[32] += kall_diffcircles_8_pd[50];
	J[116] = -kall_diffcircles_8_pd[49];
	J[24] = kall_diffcircles_8_pd[49];
	J[116] -= kall_diffcircles_8_pd[48];
	J[24] += kall_diffcircles_8_pd[48];

   /*** derivatives for constraint 15 ***/

	J[60] = -kall_diffcircles_8_pd[55];
	J[44] = kall_diffcircles_8_pd[55];
	J[60] -= kall_diffcircles_8_pd[54];
	J[44] += kall_diffcircles_8_pd[54];
	J[52] = -kall_diffcircles_8_pd[53];
	J[36] = kall_diffcircles_8_pd[53];
	J[52] -= kall_diffcircles_8_pd[52];
	J[36] += kall_diffcircles_8_pd[52];

   /*** derivatives for constraint 16 ***/

	J[76] = -kall_diffcircles_8_pd[59];
	J[45] = kall_diffcircles_8_pd[59];
	J[76] -= kall_diffcircles_8_pd[58];
	J[45] += kall_diffcircles_8_pd[58];
	J[68] = -kall_diffcircles_8_pd[57];
	J[37] = kall_diffcircles_8_pd[57];
	J[68] -= kall_diffcircles_8_pd[56];
	J[37] += kall_diffcircles_8_pd[56];

   /*** derivatives for constraint 17 ***/

	J[93] = -kall_diffcircles_8_pd[63];
	J[46] = kall_diffcircles_8_pd[63];
	J[93] -= kall_diffcircles_8_pd[62];
	J[46] += kall_diffcircles_8_pd[62];
	J[84] = -kall_diffcircles_8_pd[61];
	J[38] = kall_diffcircles_8_pd[61];
	J[84] -= kall_diffcircles_8_pd[60];
	J[38] += kall_diffcircles_8_pd[60];

   /*** derivatives for constraint 18 ***/

	J[109] = -kall_diffcircles_8_pd[67];
	J[47] = kall_diffcircles_8_pd[67];
	J[109] -= kall_diffcircles_8_pd[66];
	J[47] += kall_diffcircles_8_pd[66];
	J[101] = -kall_diffcircles_8_pd[65];
	J[39] = kall_diffcircles_8_pd[65];
	J[101] -= kall_diffcircles_8_pd[64];
	J[39] += kall_diffcircles_8_pd[64];

   /*** derivatives for constraint 19 ***/

	J[126] = -kall_diffcircles_8_pd[71];
	J[48] = kall_diffcircles_8_pd[71];
	J[126] -= kall_diffcircles_8_pd[70];
	J[48] += kall_diffcircles_8_pd[70];
	J[117] = -kall_diffcircles_8_pd[69];
	J[40] = kall_diffcircles_8_pd[69];
	J[117] -= kall_diffcircles_8_pd[68];
	J[40] += kall_diffcircles_8_pd[68];

   /*** derivatives for constraint 20 ***/

	J[77] = -kall_diffcircles_8_pd[75];
	J[61] = kall_diffcircles_8_pd[75];
	J[77] -= kall_diffcircles_8_pd[74];
	J[61] += kall_diffcircles_8_pd[74];
	J[69] = -kall_diffcircles_8_pd[73];
	J[53] = kall_diffcircles_8_pd[73];
	J[69] -= kall_diffcircles_8_pd[72];
	J[53] += kall_diffcircles_8_pd[72];

   /*** derivatives for constraint 21 ***/

	J[94] = -kall_diffcircles_8_pd[79];
	J[62] = kall_diffcircles_8_pd[79];
	J[94] -= kall_diffcircles_8_pd[78];
	J[62] += kall_diffcircles_8_pd[78];
	J[85] = -kall_diffcircles_8_pd[77];
	J[54] = kall_diffcircles_8_pd[77];
	J[85] -= kall_diffcircles_8_pd[76];
	J[54] += kall_diffcircles_8_pd[76];

   /*** derivatives for constraint 22 ***/

	J[110] = -kall_diffcircles_8_pd[83];
	J[63] = kall_diffcircles_8_pd[83];
	J[110] -= kall_diffcircles_8_pd[82];
	J[63] += kall_diffcircles_8_pd[82];
	J[102] = -kall_diffcircles_8_pd[81];
	J[55] = kall_diffcircles_8_pd[81];
	J[102] -= kall_diffcircles_8_pd[80];
	J[55] += kall_diffcircles_8_pd[80];

   /*** derivatives for constraint 23 ***/

	J[127] = -kall_diffcircles_8_pd[87];
	J[64] = kall_diffcircles_8_pd[87];
	J[127] -= kall_diffcircles_8_pd[86];
	J[64] += kall_diffcircles_8_pd[86];
	J[118] = -kall_diffcircles_8_pd[85];
	J[56] = kall_diffcircles_8_pd[85];
	J[118] -= kall_diffcircles_8_pd[84];
	J[56] += kall_diffcircles_8_pd[84];

   /*** derivatives for constraint 24 ***/

	J[95] = -kall_diffcircles_8_pd[91];
	J[78] = kall_diffcircles_8_pd[91];
	J[95] -= kall_diffcircles_8_pd[90];
	J[78] += kall_diffcircles_8_pd[90];
	J[86] = -kall_diffcircles_8_pd[89];
	J[70] = kall_diffcircles_8_pd[89];
	J[86] -= kall_diffcircles_8_pd[88];
	J[70] += kall_diffcircles_8_pd[88];

   /*** derivatives for constraint 25 ***/

	J[111] = -kall_diffcircles_8_pd[95];
	J[79] = kall_diffcircles_8_pd[95];
	J[111] -= kall_diffcircles_8_pd[94];
	J[79] += kall_diffcircles_8_pd[94];
	J[103] = -kall_diffcircles_8_pd[93];
	J[71] = kall_diffcircles_8_pd[93];
	J[103] -= kall_diffcircles_8_pd[92];
	J[71] += kall_diffcircles_8_pd[92];

   /*** derivatives for constraint 26 ***/

	J[128] = -kall_diffcircles_8_pd[99];
	J[80] = kall_diffcircles_8_pd[99];
	J[128] -= kall_diffcircles_8_pd[98];
	J[80] += kall_diffcircles_8_pd[98];
	J[119] = -kall_diffcircles_8_pd[97];
	J[72] = kall_diffcircles_8_pd[97];
	J[119] -= kall_diffcircles_8_pd[96];
	J[72] += kall_diffcircles_8_pd[96];

   /*** derivatives for constraint 27 ***/

	J[112] = -kall_diffcircles_8_pd[103];
	J[96] = kall_diffcircles_8_pd[103];
	J[112] -= kall_diffcircles_8_pd[102];
	J[96] += kall_diffcircles_8_pd[102];
	J[104] = -kall_diffcircles_8_pd[101];
	J[87] = kall_diffcircles_8_pd[101];
	J[104] -= kall_diffcircles_8_pd[100];
	J[87] += kall_diffcircles_8_pd[100];

   /*** derivatives for constraint 28 ***/

	J[129] = -kall_diffcircles_8_pd[107];
	J[97] = kall_diffcircles_8_pd[107];
	J[129] -= kall_diffcircles_8_pd[106];
	J[97] += kall_diffcircles_8_pd[106];
	J[120] = -kall_diffcircles_8_pd[105];
	J[88] = kall_diffcircles_8_pd[105];
	J[120] -= kall_diffcircles_8_pd[104];
	J[88] += kall_diffcircles_8_pd[104];

   /*** derivatives for constraint 29 ***/

	J[130] = -kall_diffcircles_8_pd[111];
	J[113] = kall_diffcircles_8_pd[111];
	J[130] -= kall_diffcircles_8_pd[110];
	J[113] += kall_diffcircles_8_pd[110];
	J[121] = -kall_diffcircles_8_pd[109];
	J[105] = kall_diffcircles_8_pd[109];
	J[121] -= kall_diffcircles_8_pd[108];
	J[105] += kall_diffcircles_8_pd[108];

   /*** derivatives for constraint 30 ***/

	J[151] = -1.;
	J[152] = 1.;

   /*** derivatives for constraint 31 ***/

	J[7] = 1.;
	J[133] = -1.;

   /*** derivatives for constraint 32 ***/

	J[16] = 1.;
	J[142] = -1.;

   /*** derivatives for constraint 33 ***/

	J[25] = 1.;
	J[134] = -1.;

   /*** derivatives for constraint 34 ***/

	J[33] = 1.;
	J[143] = -1.;

   /*** derivatives for constraint 35 ***/

	J[41] = 1.;
	J[135] = -1.;

   /*** derivatives for constraint 36 ***/

	J[49] = 1.;
	J[144] = -1.;

   /*** derivatives for constraint 37 ***/

	J[57] = 1.;
	J[136] = -1.;

   /*** derivatives for constraint 38 ***/

	J[65] = 1.;
	J[145] = -1.;

   /*** derivatives for constraint 39 ***/

	J[73] = 1.;
	J[137] = -1.;

   /*** derivatives for constraint 40 ***/

	J[81] = 1.;
	J[146] = -1.;

   /*** derivatives for constraint 41 ***/

	J[89] = 1.;
	J[138] = -1.;

   /*** derivatives for constraint 42 ***/

	J[98] = 1.;
	J[147] = -1.;

   /*** derivatives for constraint 43 ***/

	J[106] = 1.;
	J[139] = -1.;

   /*** derivatives for constraint 44 ***/

	J[114] = 1.;
	J[148] = -1.;

   /*** derivatives for constraint 45 ***/

	J[122] = 1.;
	J[140] = -1.;

   /*** derivatives for constraint 46 ***/

	J[131] = 1.;
	J[149] = -1.;

   /*** derivatives for constraint 47 ***/

	J[8] = 1.;

   /*** derivatives for constraint 48 ***/

	J[17] = 1.;

   /*** derivatives for constraint 49 ***/

	J[90] = 1.;
	J[123] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
