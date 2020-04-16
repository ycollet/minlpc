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
 fint kall_diffcircles_10_auxcom_[1] = { 46 /* nlc */ };
 fint kall_diffcircles_10_funcom_[262] = {
	24 /* nvar */,
	1 /* nobj */,
	71 /* ncon */,
	231 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	12,
	23,
	34,
	44,
	54,
	64,
	74,
	84,
	94,
	104,
	115,
	125,
	135,
	145,
	156,
	166,
	177,
	187,
	197,
	207,
	218,
	229,
	231,
	232,

	/* rownos */
	1,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	48,
	68,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	49,
	69,
	2,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	50,
	70,
	2,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	51,
	3,
	11,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	52,
	3,
	11,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	53,
	4,
	12,
	19,
	26,
	27,
	28,
	29,
	30,
	31,
	54,
	4,
	12,
	19,
	26,
	27,
	28,
	29,
	30,
	31,
	55,
	5,
	13,
	20,
	26,
	32,
	33,
	34,
	35,
	36,
	56,
	5,
	13,
	20,
	26,
	32,
	33,
	34,
	35,
	36,
	57,
	6,
	14,
	21,
	27,
	32,
	37,
	38,
	39,
	40,
	58,
	71,
	6,
	14,
	21,
	27,
	32,
	37,
	38,
	39,
	40,
	59,
	7,
	15,
	22,
	28,
	33,
	37,
	41,
	42,
	43,
	60,
	7,
	15,
	22,
	28,
	33,
	37,
	41,
	42,
	43,
	61,
	8,
	16,
	23,
	29,
	34,
	38,
	41,
	44,
	45,
	62,
	71,
	8,
	16,
	23,
	29,
	34,
	38,
	41,
	44,
	45,
	63,
	9,
	17,
	24,
	30,
	35,
	39,
	42,
	44,
	46,
	64,
	70,
	9,
	17,
	24,
	30,
	35,
	39,
	42,
	44,
	46,
	65,
	10,
	18,
	25,
	31,
	36,
	40,
	43,
	45,
	46,
	66,
	10,
	18,
	25,
	31,
	36,
	40,
	43,
	45,
	46,
	67,
	1,
	48,
	50,
	52,
	54,
	56,
	58,
	60,
	62,
	64,
	66,
	1,
	49,
	51,
	53,
	55,
	57,
	59,
	61,
	63,
	65,
	67,
	1,
	47,
	47 };

 real kall_diffcircles_10_boundc_[1+48+142] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.2,
		13.8,
		1.2,
		2.8,
		0.6,
		14.4,
		0.6,
		3.4,
		0.8,
		14.2,
		0.8,
		3.2,
		1.7,
		13.3,
		1.7,
		2.3,
		0.5,
		14.5,
		0.5,
		3.5,
		1.3,
		13.7,
		1.3,
		2.7,
		2.,
		13.,
		2.,
		2.,
		1.3,
		13.7,
		1.3,
		2.7,
		0.6,
		14.4,
		0.6,
		3.4,
		0.7,
		14.3,
		0.7,
		3.3,
		0.,
		15.,
		0.,
		4.,
		4.,
		60.,
		0.,
		60.,
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
		3.24,
		1.7e308,
		3.61,
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
		1.44,
		1.7e308,
		1.69,
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
		1.96,
		1.7e308,
		2.25,
		1.7e308,
		4.84,
		1.7e308,
		9.,
		1.7e308,
		13.69,
		1.7e308,
		9.,
		1.7e308,
		5.29,
		1.7e308,
		5.76,
		1.7e308,
		3.24,
		1.7e308,
		6.25,
		1.7e308,
		3.24,
		1.7e308,
		1.21,
		1.7e308,
		1.44,
		1.7e308,
		10.89,
		1.7e308,
		6.76,
		1.7e308,
		3.61,
		1.7e308,
		4.,
		1.7e308,
		10.89,
		1.7e308,
		6.76,
		1.7e308,
		7.29,
		1.7e308,
		3.61,
		1.7e308,
		4.,
		1.7e308,
		1.69,
		1.7e308,
		-43.385394546075,
		-43.385394546075,
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
		-0.6,
		-1.7e308,
		-0.6,
		-1.7e308,
		-0.7,
		-1.7e308,
		-0.7,
		-1.7e308,
		7.5,
		-1.7e308,
		2.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real kall_diffcircles_10_x0comn_[24] = {
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
		0.6,
		0.6,
		0.7,
		0.7,
		0.,
		0.,
		4.,
		0. };

 static real kall_diffcircles_10_pd[180];
static real kall_diffcircles_10_old_x[24];
static int kall_diffcircles_10_xkind = -1;

 static int
kall_diffcircles_10_xcheck(real *x)
{
	real *x1 = kall_diffcircles_10_old_x, *xe = x + 24;
	errno = 0;
	if (kall_diffcircles_10_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_diffcircles_10_xkind = 0;
	return 1;
	}
 real
kall_diffcircles_10_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_diffcircles_10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[23];
	;}

	if (wantfg & 2) {
	g[23] = 1.;
	}

	return rv;
}

 void
kall_diffcircles_10_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_diffcircles_10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[20] * x[21];
	v[1] = -v[0];
	t1 = v[1] + x[22];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_diffcircles_10_pd[1] = x[0] - x[2];
	kall_diffcircles_10_pd[0] = x[0] - x[2];
	v[2] = kall_diffcircles_10_pd[1] * kall_diffcircles_10_pd[0];
	kall_diffcircles_10_pd[3] = x[1] - x[3];
	kall_diffcircles_10_pd[2] = x[1] - x[3];
	v[5] = kall_diffcircles_10_pd[3] * kall_diffcircles_10_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_diffcircles_10_pd[5] = x[0] - x[4];
	kall_diffcircles_10_pd[4] = x[0] - x[4];
	v[2] = kall_diffcircles_10_pd[5] * kall_diffcircles_10_pd[4];
	kall_diffcircles_10_pd[7] = x[1] - x[5];
	kall_diffcircles_10_pd[6] = x[1] - x[5];
	v[5] = kall_diffcircles_10_pd[7] * kall_diffcircles_10_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_diffcircles_10_pd[9] = x[0] - x[6];
	kall_diffcircles_10_pd[8] = x[0] - x[6];
	v[2] = kall_diffcircles_10_pd[9] * kall_diffcircles_10_pd[8];
	kall_diffcircles_10_pd[11] = x[1] - x[7];
	kall_diffcircles_10_pd[10] = x[1] - x[7];
	v[5] = kall_diffcircles_10_pd[11] * kall_diffcircles_10_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	kall_diffcircles_10_pd[13] = x[0] - x[8];
	kall_diffcircles_10_pd[12] = x[0] - x[8];
	v[2] = kall_diffcircles_10_pd[13] * kall_diffcircles_10_pd[12];
	kall_diffcircles_10_pd[15] = x[1] - x[9];
	kall_diffcircles_10_pd[14] = x[1] - x[9];
	v[5] = kall_diffcircles_10_pd[15] * kall_diffcircles_10_pd[14];
	v[6] = v[2] + v[5];
	c[4] = v[6];

  /***  constraint 6  ***/

	kall_diffcircles_10_pd[17] = x[0] - x[10];
	kall_diffcircles_10_pd[16] = x[0] - x[10];
	v[2] = kall_diffcircles_10_pd[17] * kall_diffcircles_10_pd[16];
	kall_diffcircles_10_pd[19] = x[1] - x[11];
	kall_diffcircles_10_pd[18] = x[1] - x[11];
	v[5] = kall_diffcircles_10_pd[19] * kall_diffcircles_10_pd[18];
	v[6] = v[2] + v[5];
	c[5] = v[6];

  /***  constraint 7  ***/

	kall_diffcircles_10_pd[21] = x[0] - x[12];
	kall_diffcircles_10_pd[20] = x[0] - x[12];
	v[2] = kall_diffcircles_10_pd[21] * kall_diffcircles_10_pd[20];
	kall_diffcircles_10_pd[23] = x[1] - x[13];
	kall_diffcircles_10_pd[22] = x[1] - x[13];
	v[5] = kall_diffcircles_10_pd[23] * kall_diffcircles_10_pd[22];
	v[6] = v[2] + v[5];
	c[6] = v[6];

  /***  constraint 8  ***/

	kall_diffcircles_10_pd[25] = x[0] - x[14];
	kall_diffcircles_10_pd[24] = x[0] - x[14];
	v[2] = kall_diffcircles_10_pd[25] * kall_diffcircles_10_pd[24];
	kall_diffcircles_10_pd[27] = x[1] - x[15];
	kall_diffcircles_10_pd[26] = x[1] - x[15];
	v[5] = kall_diffcircles_10_pd[27] * kall_diffcircles_10_pd[26];
	v[6] = v[2] + v[5];
	c[7] = v[6];

  /***  constraint 9  ***/

	kall_diffcircles_10_pd[29] = x[0] - x[16];
	kall_diffcircles_10_pd[28] = x[0] - x[16];
	v[2] = kall_diffcircles_10_pd[29] * kall_diffcircles_10_pd[28];
	kall_diffcircles_10_pd[31] = x[1] - x[17];
	kall_diffcircles_10_pd[30] = x[1] - x[17];
	v[5] = kall_diffcircles_10_pd[31] * kall_diffcircles_10_pd[30];
	v[6] = v[2] + v[5];
	c[8] = v[6];

  /***  constraint 10  ***/

	kall_diffcircles_10_pd[33] = x[0] - x[18];
	kall_diffcircles_10_pd[32] = x[0] - x[18];
	v[2] = kall_diffcircles_10_pd[33] * kall_diffcircles_10_pd[32];
	kall_diffcircles_10_pd[35] = x[1] - x[19];
	kall_diffcircles_10_pd[34] = x[1] - x[19];
	v[5] = kall_diffcircles_10_pd[35] * kall_diffcircles_10_pd[34];
	v[6] = v[2] + v[5];
	c[9] = v[6];

  /***  constraint 11  ***/

	kall_diffcircles_10_pd[37] = x[2] - x[4];
	kall_diffcircles_10_pd[36] = x[2] - x[4];
	v[2] = kall_diffcircles_10_pd[37] * kall_diffcircles_10_pd[36];
	kall_diffcircles_10_pd[39] = x[3] - x[5];
	kall_diffcircles_10_pd[38] = x[3] - x[5];
	v[5] = kall_diffcircles_10_pd[39] * kall_diffcircles_10_pd[38];
	v[6] = v[2] + v[5];
	c[10] = v[6];

  /***  constraint 12  ***/

	kall_diffcircles_10_pd[41] = x[2] - x[6];
	kall_diffcircles_10_pd[40] = x[2] - x[6];
	v[2] = kall_diffcircles_10_pd[41] * kall_diffcircles_10_pd[40];
	kall_diffcircles_10_pd[43] = x[3] - x[7];
	kall_diffcircles_10_pd[42] = x[3] - x[7];
	v[5] = kall_diffcircles_10_pd[43] * kall_diffcircles_10_pd[42];
	v[6] = v[2] + v[5];
	c[11] = v[6];

  /***  constraint 13  ***/

	kall_diffcircles_10_pd[45] = x[2] - x[8];
	kall_diffcircles_10_pd[44] = x[2] - x[8];
	v[2] = kall_diffcircles_10_pd[45] * kall_diffcircles_10_pd[44];
	kall_diffcircles_10_pd[47] = x[3] - x[9];
	kall_diffcircles_10_pd[46] = x[3] - x[9];
	v[5] = kall_diffcircles_10_pd[47] * kall_diffcircles_10_pd[46];
	v[6] = v[2] + v[5];
	c[12] = v[6];

  /***  constraint 14  ***/

	kall_diffcircles_10_pd[49] = x[2] - x[10];
	kall_diffcircles_10_pd[48] = x[2] - x[10];
	v[2] = kall_diffcircles_10_pd[49] * kall_diffcircles_10_pd[48];
	kall_diffcircles_10_pd[51] = x[3] - x[11];
	kall_diffcircles_10_pd[50] = x[3] - x[11];
	v[5] = kall_diffcircles_10_pd[51] * kall_diffcircles_10_pd[50];
	v[6] = v[2] + v[5];
	c[13] = v[6];

  /***  constraint 15  ***/

	kall_diffcircles_10_pd[53] = x[2] - x[12];
	kall_diffcircles_10_pd[52] = x[2] - x[12];
	v[2] = kall_diffcircles_10_pd[53] * kall_diffcircles_10_pd[52];
	kall_diffcircles_10_pd[55] = x[3] - x[13];
	kall_diffcircles_10_pd[54] = x[3] - x[13];
	v[5] = kall_diffcircles_10_pd[55] * kall_diffcircles_10_pd[54];
	v[6] = v[2] + v[5];
	c[14] = v[6];

  /***  constraint 16  ***/

	kall_diffcircles_10_pd[57] = x[2] - x[14];
	kall_diffcircles_10_pd[56] = x[2] - x[14];
	v[2] = kall_diffcircles_10_pd[57] * kall_diffcircles_10_pd[56];
	kall_diffcircles_10_pd[59] = x[3] - x[15];
	kall_diffcircles_10_pd[58] = x[3] - x[15];
	v[5] = kall_diffcircles_10_pd[59] * kall_diffcircles_10_pd[58];
	v[6] = v[2] + v[5];
	c[15] = v[6];

  /***  constraint 17  ***/

	kall_diffcircles_10_pd[61] = x[2] - x[16];
	kall_diffcircles_10_pd[60] = x[2] - x[16];
	v[2] = kall_diffcircles_10_pd[61] * kall_diffcircles_10_pd[60];
	kall_diffcircles_10_pd[63] = x[3] - x[17];
	kall_diffcircles_10_pd[62] = x[3] - x[17];
	v[5] = kall_diffcircles_10_pd[63] * kall_diffcircles_10_pd[62];
	v[6] = v[2] + v[5];
	c[16] = v[6];

  /***  constraint 18  ***/

	kall_diffcircles_10_pd[65] = x[2] - x[18];
	kall_diffcircles_10_pd[64] = x[2] - x[18];
	v[2] = kall_diffcircles_10_pd[65] * kall_diffcircles_10_pd[64];
	kall_diffcircles_10_pd[67] = x[3] - x[19];
	kall_diffcircles_10_pd[66] = x[3] - x[19];
	v[5] = kall_diffcircles_10_pd[67] * kall_diffcircles_10_pd[66];
	v[6] = v[2] + v[5];
	c[17] = v[6];

  /***  constraint 19  ***/

	kall_diffcircles_10_pd[69] = x[4] - x[6];
	kall_diffcircles_10_pd[68] = x[4] - x[6];
	v[2] = kall_diffcircles_10_pd[69] * kall_diffcircles_10_pd[68];
	kall_diffcircles_10_pd[71] = x[5] - x[7];
	kall_diffcircles_10_pd[70] = x[5] - x[7];
	v[5] = kall_diffcircles_10_pd[71] * kall_diffcircles_10_pd[70];
	v[6] = v[2] + v[5];
	c[18] = v[6];

  /***  constraint 20  ***/

	kall_diffcircles_10_pd[73] = x[4] - x[8];
	kall_diffcircles_10_pd[72] = x[4] - x[8];
	v[2] = kall_diffcircles_10_pd[73] * kall_diffcircles_10_pd[72];
	kall_diffcircles_10_pd[75] = x[5] - x[9];
	kall_diffcircles_10_pd[74] = x[5] - x[9];
	v[5] = kall_diffcircles_10_pd[75] * kall_diffcircles_10_pd[74];
	v[6] = v[2] + v[5];
	c[19] = v[6];

  /***  constraint 21  ***/

	kall_diffcircles_10_pd[77] = x[4] - x[10];
	kall_diffcircles_10_pd[76] = x[4] - x[10];
	v[2] = kall_diffcircles_10_pd[77] * kall_diffcircles_10_pd[76];
	kall_diffcircles_10_pd[79] = x[5] - x[11];
	kall_diffcircles_10_pd[78] = x[5] - x[11];
	v[5] = kall_diffcircles_10_pd[79] * kall_diffcircles_10_pd[78];
	v[6] = v[2] + v[5];
	c[20] = v[6];

  /***  constraint 22  ***/

	kall_diffcircles_10_pd[81] = x[4] - x[12];
	kall_diffcircles_10_pd[80] = x[4] - x[12];
	v[2] = kall_diffcircles_10_pd[81] * kall_diffcircles_10_pd[80];
	kall_diffcircles_10_pd[83] = x[5] - x[13];
	kall_diffcircles_10_pd[82] = x[5] - x[13];
	v[5] = kall_diffcircles_10_pd[83] * kall_diffcircles_10_pd[82];
	v[6] = v[2] + v[5];
	c[21] = v[6];

  /***  constraint 23  ***/

	kall_diffcircles_10_pd[85] = x[4] - x[14];
	kall_diffcircles_10_pd[84] = x[4] - x[14];
	v[2] = kall_diffcircles_10_pd[85] * kall_diffcircles_10_pd[84];
	kall_diffcircles_10_pd[87] = x[5] - x[15];
	kall_diffcircles_10_pd[86] = x[5] - x[15];
	v[5] = kall_diffcircles_10_pd[87] * kall_diffcircles_10_pd[86];
	v[6] = v[2] + v[5];
	c[22] = v[6];

  /***  constraint 24  ***/

	kall_diffcircles_10_pd[89] = x[4] - x[16];
	kall_diffcircles_10_pd[88] = x[4] - x[16];
	v[2] = kall_diffcircles_10_pd[89] * kall_diffcircles_10_pd[88];
	kall_diffcircles_10_pd[91] = x[5] - x[17];
	kall_diffcircles_10_pd[90] = x[5] - x[17];
	v[5] = kall_diffcircles_10_pd[91] * kall_diffcircles_10_pd[90];
	v[6] = v[2] + v[5];
	c[23] = v[6];

  /***  constraint 25  ***/

	kall_diffcircles_10_pd[93] = x[4] - x[18];
	kall_diffcircles_10_pd[92] = x[4] - x[18];
	v[2] = kall_diffcircles_10_pd[93] * kall_diffcircles_10_pd[92];
	kall_diffcircles_10_pd[95] = x[5] - x[19];
	kall_diffcircles_10_pd[94] = x[5] - x[19];
	v[5] = kall_diffcircles_10_pd[95] * kall_diffcircles_10_pd[94];
	v[6] = v[2] + v[5];
	c[24] = v[6];

  /***  constraint 26  ***/

	kall_diffcircles_10_pd[97] = x[6] - x[8];
	kall_diffcircles_10_pd[96] = x[6] - x[8];
	v[2] = kall_diffcircles_10_pd[97] * kall_diffcircles_10_pd[96];
	kall_diffcircles_10_pd[99] = x[7] - x[9];
	kall_diffcircles_10_pd[98] = x[7] - x[9];
	v[5] = kall_diffcircles_10_pd[99] * kall_diffcircles_10_pd[98];
	v[6] = v[2] + v[5];
	c[25] = v[6];

  /***  constraint 27  ***/

	kall_diffcircles_10_pd[101] = x[6] - x[10];
	kall_diffcircles_10_pd[100] = x[6] - x[10];
	v[2] = kall_diffcircles_10_pd[101] * kall_diffcircles_10_pd[100];
	kall_diffcircles_10_pd[103] = x[7] - x[11];
	kall_diffcircles_10_pd[102] = x[7] - x[11];
	v[5] = kall_diffcircles_10_pd[103] * kall_diffcircles_10_pd[102];
	v[6] = v[2] + v[5];
	c[26] = v[6];

  /***  constraint 28  ***/

	kall_diffcircles_10_pd[105] = x[6] - x[12];
	kall_diffcircles_10_pd[104] = x[6] - x[12];
	v[2] = kall_diffcircles_10_pd[105] * kall_diffcircles_10_pd[104];
	kall_diffcircles_10_pd[107] = x[7] - x[13];
	kall_diffcircles_10_pd[106] = x[7] - x[13];
	v[5] = kall_diffcircles_10_pd[107] * kall_diffcircles_10_pd[106];
	v[6] = v[2] + v[5];
	c[27] = v[6];

  /***  constraint 29  ***/

	kall_diffcircles_10_pd[109] = x[6] - x[14];
	kall_diffcircles_10_pd[108] = x[6] - x[14];
	v[2] = kall_diffcircles_10_pd[109] * kall_diffcircles_10_pd[108];
	kall_diffcircles_10_pd[111] = x[7] - x[15];
	kall_diffcircles_10_pd[110] = x[7] - x[15];
	v[5] = kall_diffcircles_10_pd[111] * kall_diffcircles_10_pd[110];
	v[6] = v[2] + v[5];
	c[28] = v[6];

  /***  constraint 30  ***/

	kall_diffcircles_10_pd[113] = x[6] - x[16];
	kall_diffcircles_10_pd[112] = x[6] - x[16];
	v[2] = kall_diffcircles_10_pd[113] * kall_diffcircles_10_pd[112];
	kall_diffcircles_10_pd[115] = x[7] - x[17];
	kall_diffcircles_10_pd[114] = x[7] - x[17];
	v[5] = kall_diffcircles_10_pd[115] * kall_diffcircles_10_pd[114];
	v[6] = v[2] + v[5];
	c[29] = v[6];

  /***  constraint 31  ***/

	kall_diffcircles_10_pd[117] = x[6] - x[18];
	kall_diffcircles_10_pd[116] = x[6] - x[18];
	v[2] = kall_diffcircles_10_pd[117] * kall_diffcircles_10_pd[116];
	kall_diffcircles_10_pd[119] = x[7] - x[19];
	kall_diffcircles_10_pd[118] = x[7] - x[19];
	v[5] = kall_diffcircles_10_pd[119] * kall_diffcircles_10_pd[118];
	v[6] = v[2] + v[5];
	c[30] = v[6];

  /***  constraint 32  ***/

	kall_diffcircles_10_pd[121] = x[8] - x[10];
	kall_diffcircles_10_pd[120] = x[8] - x[10];
	v[2] = kall_diffcircles_10_pd[121] * kall_diffcircles_10_pd[120];
	kall_diffcircles_10_pd[123] = x[9] - x[11];
	kall_diffcircles_10_pd[122] = x[9] - x[11];
	v[5] = kall_diffcircles_10_pd[123] * kall_diffcircles_10_pd[122];
	v[6] = v[2] + v[5];
	c[31] = v[6];

  /***  constraint 33  ***/

	kall_diffcircles_10_pd[125] = x[8] - x[12];
	kall_diffcircles_10_pd[124] = x[8] - x[12];
	v[2] = kall_diffcircles_10_pd[125] * kall_diffcircles_10_pd[124];
	kall_diffcircles_10_pd[127] = x[9] - x[13];
	kall_diffcircles_10_pd[126] = x[9] - x[13];
	v[5] = kall_diffcircles_10_pd[127] * kall_diffcircles_10_pd[126];
	v[6] = v[2] + v[5];
	c[32] = v[6];

  /***  constraint 34  ***/

	kall_diffcircles_10_pd[129] = x[8] - x[14];
	kall_diffcircles_10_pd[128] = x[8] - x[14];
	v[2] = kall_diffcircles_10_pd[129] * kall_diffcircles_10_pd[128];
	kall_diffcircles_10_pd[131] = x[9] - x[15];
	kall_diffcircles_10_pd[130] = x[9] - x[15];
	v[5] = kall_diffcircles_10_pd[131] * kall_diffcircles_10_pd[130];
	v[6] = v[2] + v[5];
	c[33] = v[6];

  /***  constraint 35  ***/

	kall_diffcircles_10_pd[133] = x[8] - x[16];
	kall_diffcircles_10_pd[132] = x[8] - x[16];
	v[2] = kall_diffcircles_10_pd[133] * kall_diffcircles_10_pd[132];
	kall_diffcircles_10_pd[135] = x[9] - x[17];
	kall_diffcircles_10_pd[134] = x[9] - x[17];
	v[5] = kall_diffcircles_10_pd[135] * kall_diffcircles_10_pd[134];
	v[6] = v[2] + v[5];
	c[34] = v[6];

  /***  constraint 36  ***/

	kall_diffcircles_10_pd[137] = x[8] - x[18];
	kall_diffcircles_10_pd[136] = x[8] - x[18];
	v[2] = kall_diffcircles_10_pd[137] * kall_diffcircles_10_pd[136];
	kall_diffcircles_10_pd[139] = x[9] - x[19];
	kall_diffcircles_10_pd[138] = x[9] - x[19];
	v[5] = kall_diffcircles_10_pd[139] * kall_diffcircles_10_pd[138];
	v[6] = v[2] + v[5];
	c[35] = v[6];

  /***  constraint 37  ***/

	kall_diffcircles_10_pd[141] = x[10] - x[12];
	kall_diffcircles_10_pd[140] = x[10] - x[12];
	v[2] = kall_diffcircles_10_pd[141] * kall_diffcircles_10_pd[140];
	kall_diffcircles_10_pd[143] = x[11] - x[13];
	kall_diffcircles_10_pd[142] = x[11] - x[13];
	v[5] = kall_diffcircles_10_pd[143] * kall_diffcircles_10_pd[142];
	v[6] = v[2] + v[5];
	c[36] = v[6];

  /***  constraint 38  ***/

	kall_diffcircles_10_pd[145] = x[10] - x[14];
	kall_diffcircles_10_pd[144] = x[10] - x[14];
	v[2] = kall_diffcircles_10_pd[145] * kall_diffcircles_10_pd[144];
	kall_diffcircles_10_pd[147] = x[11] - x[15];
	kall_diffcircles_10_pd[146] = x[11] - x[15];
	v[5] = kall_diffcircles_10_pd[147] * kall_diffcircles_10_pd[146];
	v[6] = v[2] + v[5];
	c[37] = v[6];

  /***  constraint 39  ***/

	kall_diffcircles_10_pd[149] = x[10] - x[16];
	kall_diffcircles_10_pd[148] = x[10] - x[16];
	v[2] = kall_diffcircles_10_pd[149] * kall_diffcircles_10_pd[148];
	kall_diffcircles_10_pd[151] = x[11] - x[17];
	kall_diffcircles_10_pd[150] = x[11] - x[17];
	v[5] = kall_diffcircles_10_pd[151] * kall_diffcircles_10_pd[150];
	v[6] = v[2] + v[5];
	c[38] = v[6];

  /***  constraint 40  ***/

	kall_diffcircles_10_pd[153] = x[10] - x[18];
	kall_diffcircles_10_pd[152] = x[10] - x[18];
	v[2] = kall_diffcircles_10_pd[153] * kall_diffcircles_10_pd[152];
	kall_diffcircles_10_pd[155] = x[11] - x[19];
	kall_diffcircles_10_pd[154] = x[11] - x[19];
	v[5] = kall_diffcircles_10_pd[155] * kall_diffcircles_10_pd[154];
	v[6] = v[2] + v[5];
	c[39] = v[6];

  /***  constraint 41  ***/

	kall_diffcircles_10_pd[157] = x[12] - x[14];
	kall_diffcircles_10_pd[156] = x[12] - x[14];
	v[2] = kall_diffcircles_10_pd[157] * kall_diffcircles_10_pd[156];
	kall_diffcircles_10_pd[159] = x[13] - x[15];
	kall_diffcircles_10_pd[158] = x[13] - x[15];
	v[5] = kall_diffcircles_10_pd[159] * kall_diffcircles_10_pd[158];
	v[6] = v[2] + v[5];
	c[40] = v[6];

  /***  constraint 42  ***/

	kall_diffcircles_10_pd[161] = x[12] - x[16];
	kall_diffcircles_10_pd[160] = x[12] - x[16];
	v[2] = kall_diffcircles_10_pd[161] * kall_diffcircles_10_pd[160];
	kall_diffcircles_10_pd[163] = x[13] - x[17];
	kall_diffcircles_10_pd[162] = x[13] - x[17];
	v[5] = kall_diffcircles_10_pd[163] * kall_diffcircles_10_pd[162];
	v[6] = v[2] + v[5];
	c[41] = v[6];

  /***  constraint 43  ***/

	kall_diffcircles_10_pd[165] = x[12] - x[18];
	kall_diffcircles_10_pd[164] = x[12] - x[18];
	v[2] = kall_diffcircles_10_pd[165] * kall_diffcircles_10_pd[164];
	kall_diffcircles_10_pd[167] = x[13] - x[19];
	kall_diffcircles_10_pd[166] = x[13] - x[19];
	v[5] = kall_diffcircles_10_pd[167] * kall_diffcircles_10_pd[166];
	v[6] = v[2] + v[5];
	c[42] = v[6];

  /***  constraint 44  ***/

	kall_diffcircles_10_pd[169] = x[14] - x[16];
	kall_diffcircles_10_pd[168] = x[14] - x[16];
	v[2] = kall_diffcircles_10_pd[169] * kall_diffcircles_10_pd[168];
	kall_diffcircles_10_pd[171] = x[15] - x[17];
	kall_diffcircles_10_pd[170] = x[15] - x[17];
	v[5] = kall_diffcircles_10_pd[171] * kall_diffcircles_10_pd[170];
	v[6] = v[2] + v[5];
	c[43] = v[6];

  /***  constraint 45  ***/

	kall_diffcircles_10_pd[173] = x[14] - x[18];
	kall_diffcircles_10_pd[172] = x[14] - x[18];
	v[2] = kall_diffcircles_10_pd[173] * kall_diffcircles_10_pd[172];
	kall_diffcircles_10_pd[175] = x[15] - x[19];
	kall_diffcircles_10_pd[174] = x[15] - x[19];
	v[5] = kall_diffcircles_10_pd[175] * kall_diffcircles_10_pd[174];
	v[6] = v[2] + v[5];
	c[44] = v[6];

  /***  constraint 46  ***/

	kall_diffcircles_10_pd[177] = x[16] - x[18];
	kall_diffcircles_10_pd[176] = x[16] - x[18];
	v[2] = kall_diffcircles_10_pd[177] * kall_diffcircles_10_pd[176];
	kall_diffcircles_10_pd[179] = x[17] - x[19];
	kall_diffcircles_10_pd[178] = x[17] - x[19];
	v[5] = kall_diffcircles_10_pd[179] * kall_diffcircles_10_pd[178];
	v[6] = v[2] + v[5];
	c[45] = v[6];

  /***  constraint 47  ***/

	t1 = -x[22];
	t1 += x[23];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[0];
	t1 += -x[20];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[1];
	t1 += -x[21];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[2];
	t1 += -x[20];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[3];
	t1 += -x[21];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[4];
	t1 += -x[20];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[5];
	t1 += -x[21];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[6];
	t1 += -x[20];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[7];
	t1 += -x[21];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[8];
	t1 += -x[20];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[9];
	t1 += -x[21];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[10];
	t1 += -x[20];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[11];
	t1 += -x[21];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[12];
	t1 += -x[20];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[13];
	t1 += -x[21];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[14];
	t1 += -x[20];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[15];
	t1 += -x[21];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[16];
	t1 += -x[20];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[17];
	t1 += -x[21];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[18];
	t1 += -x[20];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[19];
	t1 += -x[21];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[0];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[1];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[2];
	t1 += -x[16];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[10];
	t1 += -x[14];
	c[70] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[217] = -x[20];
	J[206] = -x[21];
	J[228] = 1.;

   /*** derivatives for constraint 2 ***/

	J[33] = -kall_diffcircles_10_pd[3];
	J[11] = kall_diffcircles_10_pd[3];
	J[33] -= kall_diffcircles_10_pd[2];
	J[11] += kall_diffcircles_10_pd[2];
	J[22] = -kall_diffcircles_10_pd[1];
	J[0] = kall_diffcircles_10_pd[1];
	J[22] -= kall_diffcircles_10_pd[0];
	J[0] += kall_diffcircles_10_pd[0];

   /*** derivatives for constraint 3 ***/

	J[53] = -kall_diffcircles_10_pd[7];
	J[12] = kall_diffcircles_10_pd[7];
	J[53] -= kall_diffcircles_10_pd[6];
	J[12] += kall_diffcircles_10_pd[6];
	J[43] = -kall_diffcircles_10_pd[5];
	J[1] = kall_diffcircles_10_pd[5];
	J[43] -= kall_diffcircles_10_pd[4];
	J[1] += kall_diffcircles_10_pd[4];

   /*** derivatives for constraint 4 ***/

	J[73] = -kall_diffcircles_10_pd[11];
	J[13] = kall_diffcircles_10_pd[11];
	J[73] -= kall_diffcircles_10_pd[10];
	J[13] += kall_diffcircles_10_pd[10];
	J[63] = -kall_diffcircles_10_pd[9];
	J[2] = kall_diffcircles_10_pd[9];
	J[63] -= kall_diffcircles_10_pd[8];
	J[2] += kall_diffcircles_10_pd[8];

   /*** derivatives for constraint 5 ***/

	J[93] = -kall_diffcircles_10_pd[15];
	J[14] = kall_diffcircles_10_pd[15];
	J[93] -= kall_diffcircles_10_pd[14];
	J[14] += kall_diffcircles_10_pd[14];
	J[83] = -kall_diffcircles_10_pd[13];
	J[3] = kall_diffcircles_10_pd[13];
	J[83] -= kall_diffcircles_10_pd[12];
	J[3] += kall_diffcircles_10_pd[12];

   /*** derivatives for constraint 6 ***/

	J[114] = -kall_diffcircles_10_pd[19];
	J[15] = kall_diffcircles_10_pd[19];
	J[114] -= kall_diffcircles_10_pd[18];
	J[15] += kall_diffcircles_10_pd[18];
	J[103] = -kall_diffcircles_10_pd[17];
	J[4] = kall_diffcircles_10_pd[17];
	J[103] -= kall_diffcircles_10_pd[16];
	J[4] += kall_diffcircles_10_pd[16];

   /*** derivatives for constraint 7 ***/

	J[134] = -kall_diffcircles_10_pd[23];
	J[16] = kall_diffcircles_10_pd[23];
	J[134] -= kall_diffcircles_10_pd[22];
	J[16] += kall_diffcircles_10_pd[22];
	J[124] = -kall_diffcircles_10_pd[21];
	J[5] = kall_diffcircles_10_pd[21];
	J[124] -= kall_diffcircles_10_pd[20];
	J[5] += kall_diffcircles_10_pd[20];

   /*** derivatives for constraint 8 ***/

	J[155] = -kall_diffcircles_10_pd[27];
	J[17] = kall_diffcircles_10_pd[27];
	J[155] -= kall_diffcircles_10_pd[26];
	J[17] += kall_diffcircles_10_pd[26];
	J[144] = -kall_diffcircles_10_pd[25];
	J[6] = kall_diffcircles_10_pd[25];
	J[144] -= kall_diffcircles_10_pd[24];
	J[6] += kall_diffcircles_10_pd[24];

   /*** derivatives for constraint 9 ***/

	J[176] = -kall_diffcircles_10_pd[31];
	J[18] = kall_diffcircles_10_pd[31];
	J[176] -= kall_diffcircles_10_pd[30];
	J[18] += kall_diffcircles_10_pd[30];
	J[165] = -kall_diffcircles_10_pd[29];
	J[7] = kall_diffcircles_10_pd[29];
	J[165] -= kall_diffcircles_10_pd[28];
	J[7] += kall_diffcircles_10_pd[28];

   /*** derivatives for constraint 10 ***/

	J[196] = -kall_diffcircles_10_pd[35];
	J[19] = kall_diffcircles_10_pd[35];
	J[196] -= kall_diffcircles_10_pd[34];
	J[19] += kall_diffcircles_10_pd[34];
	J[186] = -kall_diffcircles_10_pd[33];
	J[8] = kall_diffcircles_10_pd[33];
	J[186] -= kall_diffcircles_10_pd[32];
	J[8] += kall_diffcircles_10_pd[32];

   /*** derivatives for constraint 11 ***/

	J[54] = -kall_diffcircles_10_pd[39];
	J[34] = kall_diffcircles_10_pd[39];
	J[54] -= kall_diffcircles_10_pd[38];
	J[34] += kall_diffcircles_10_pd[38];
	J[44] = -kall_diffcircles_10_pd[37];
	J[23] = kall_diffcircles_10_pd[37];
	J[44] -= kall_diffcircles_10_pd[36];
	J[23] += kall_diffcircles_10_pd[36];

   /*** derivatives for constraint 12 ***/

	J[74] = -kall_diffcircles_10_pd[43];
	J[35] = kall_diffcircles_10_pd[43];
	J[74] -= kall_diffcircles_10_pd[42];
	J[35] += kall_diffcircles_10_pd[42];
	J[64] = -kall_diffcircles_10_pd[41];
	J[24] = kall_diffcircles_10_pd[41];
	J[64] -= kall_diffcircles_10_pd[40];
	J[24] += kall_diffcircles_10_pd[40];

   /*** derivatives for constraint 13 ***/

	J[94] = -kall_diffcircles_10_pd[47];
	J[36] = kall_diffcircles_10_pd[47];
	J[94] -= kall_diffcircles_10_pd[46];
	J[36] += kall_diffcircles_10_pd[46];
	J[84] = -kall_diffcircles_10_pd[45];
	J[25] = kall_diffcircles_10_pd[45];
	J[84] -= kall_diffcircles_10_pd[44];
	J[25] += kall_diffcircles_10_pd[44];

   /*** derivatives for constraint 14 ***/

	J[115] = -kall_diffcircles_10_pd[51];
	J[37] = kall_diffcircles_10_pd[51];
	J[115] -= kall_diffcircles_10_pd[50];
	J[37] += kall_diffcircles_10_pd[50];
	J[104] = -kall_diffcircles_10_pd[49];
	J[26] = kall_diffcircles_10_pd[49];
	J[104] -= kall_diffcircles_10_pd[48];
	J[26] += kall_diffcircles_10_pd[48];

   /*** derivatives for constraint 15 ***/

	J[135] = -kall_diffcircles_10_pd[55];
	J[38] = kall_diffcircles_10_pd[55];
	J[135] -= kall_diffcircles_10_pd[54];
	J[38] += kall_diffcircles_10_pd[54];
	J[125] = -kall_diffcircles_10_pd[53];
	J[27] = kall_diffcircles_10_pd[53];
	J[125] -= kall_diffcircles_10_pd[52];
	J[27] += kall_diffcircles_10_pd[52];

   /*** derivatives for constraint 16 ***/

	J[156] = -kall_diffcircles_10_pd[59];
	J[39] = kall_diffcircles_10_pd[59];
	J[156] -= kall_diffcircles_10_pd[58];
	J[39] += kall_diffcircles_10_pd[58];
	J[145] = -kall_diffcircles_10_pd[57];
	J[28] = kall_diffcircles_10_pd[57];
	J[145] -= kall_diffcircles_10_pd[56];
	J[28] += kall_diffcircles_10_pd[56];

   /*** derivatives for constraint 17 ***/

	J[177] = -kall_diffcircles_10_pd[63];
	J[40] = kall_diffcircles_10_pd[63];
	J[177] -= kall_diffcircles_10_pd[62];
	J[40] += kall_diffcircles_10_pd[62];
	J[166] = -kall_diffcircles_10_pd[61];
	J[29] = kall_diffcircles_10_pd[61];
	J[166] -= kall_diffcircles_10_pd[60];
	J[29] += kall_diffcircles_10_pd[60];

   /*** derivatives for constraint 18 ***/

	J[197] = -kall_diffcircles_10_pd[67];
	J[41] = kall_diffcircles_10_pd[67];
	J[197] -= kall_diffcircles_10_pd[66];
	J[41] += kall_diffcircles_10_pd[66];
	J[187] = -kall_diffcircles_10_pd[65];
	J[30] = kall_diffcircles_10_pd[65];
	J[187] -= kall_diffcircles_10_pd[64];
	J[30] += kall_diffcircles_10_pd[64];

   /*** derivatives for constraint 19 ***/

	J[75] = -kall_diffcircles_10_pd[71];
	J[55] = kall_diffcircles_10_pd[71];
	J[75] -= kall_diffcircles_10_pd[70];
	J[55] += kall_diffcircles_10_pd[70];
	J[65] = -kall_diffcircles_10_pd[69];
	J[45] = kall_diffcircles_10_pd[69];
	J[65] -= kall_diffcircles_10_pd[68];
	J[45] += kall_diffcircles_10_pd[68];

   /*** derivatives for constraint 20 ***/

	J[95] = -kall_diffcircles_10_pd[75];
	J[56] = kall_diffcircles_10_pd[75];
	J[95] -= kall_diffcircles_10_pd[74];
	J[56] += kall_diffcircles_10_pd[74];
	J[85] = -kall_diffcircles_10_pd[73];
	J[46] = kall_diffcircles_10_pd[73];
	J[85] -= kall_diffcircles_10_pd[72];
	J[46] += kall_diffcircles_10_pd[72];

   /*** derivatives for constraint 21 ***/

	J[116] = -kall_diffcircles_10_pd[79];
	J[57] = kall_diffcircles_10_pd[79];
	J[116] -= kall_diffcircles_10_pd[78];
	J[57] += kall_diffcircles_10_pd[78];
	J[105] = -kall_diffcircles_10_pd[77];
	J[47] = kall_diffcircles_10_pd[77];
	J[105] -= kall_diffcircles_10_pd[76];
	J[47] += kall_diffcircles_10_pd[76];

   /*** derivatives for constraint 22 ***/

	J[136] = -kall_diffcircles_10_pd[83];
	J[58] = kall_diffcircles_10_pd[83];
	J[136] -= kall_diffcircles_10_pd[82];
	J[58] += kall_diffcircles_10_pd[82];
	J[126] = -kall_diffcircles_10_pd[81];
	J[48] = kall_diffcircles_10_pd[81];
	J[126] -= kall_diffcircles_10_pd[80];
	J[48] += kall_diffcircles_10_pd[80];

   /*** derivatives for constraint 23 ***/

	J[157] = -kall_diffcircles_10_pd[87];
	J[59] = kall_diffcircles_10_pd[87];
	J[157] -= kall_diffcircles_10_pd[86];
	J[59] += kall_diffcircles_10_pd[86];
	J[146] = -kall_diffcircles_10_pd[85];
	J[49] = kall_diffcircles_10_pd[85];
	J[146] -= kall_diffcircles_10_pd[84];
	J[49] += kall_diffcircles_10_pd[84];

   /*** derivatives for constraint 24 ***/

	J[178] = -kall_diffcircles_10_pd[91];
	J[60] = kall_diffcircles_10_pd[91];
	J[178] -= kall_diffcircles_10_pd[90];
	J[60] += kall_diffcircles_10_pd[90];
	J[167] = -kall_diffcircles_10_pd[89];
	J[50] = kall_diffcircles_10_pd[89];
	J[167] -= kall_diffcircles_10_pd[88];
	J[50] += kall_diffcircles_10_pd[88];

   /*** derivatives for constraint 25 ***/

	J[198] = -kall_diffcircles_10_pd[95];
	J[61] = kall_diffcircles_10_pd[95];
	J[198] -= kall_diffcircles_10_pd[94];
	J[61] += kall_diffcircles_10_pd[94];
	J[188] = -kall_diffcircles_10_pd[93];
	J[51] = kall_diffcircles_10_pd[93];
	J[188] -= kall_diffcircles_10_pd[92];
	J[51] += kall_diffcircles_10_pd[92];

   /*** derivatives for constraint 26 ***/

	J[96] = -kall_diffcircles_10_pd[99];
	J[76] = kall_diffcircles_10_pd[99];
	J[96] -= kall_diffcircles_10_pd[98];
	J[76] += kall_diffcircles_10_pd[98];
	J[86] = -kall_diffcircles_10_pd[97];
	J[66] = kall_diffcircles_10_pd[97];
	J[86] -= kall_diffcircles_10_pd[96];
	J[66] += kall_diffcircles_10_pd[96];

   /*** derivatives for constraint 27 ***/

	J[117] = -kall_diffcircles_10_pd[103];
	J[77] = kall_diffcircles_10_pd[103];
	J[117] -= kall_diffcircles_10_pd[102];
	J[77] += kall_diffcircles_10_pd[102];
	J[106] = -kall_diffcircles_10_pd[101];
	J[67] = kall_diffcircles_10_pd[101];
	J[106] -= kall_diffcircles_10_pd[100];
	J[67] += kall_diffcircles_10_pd[100];

   /*** derivatives for constraint 28 ***/

	J[137] = -kall_diffcircles_10_pd[107];
	J[78] = kall_diffcircles_10_pd[107];
	J[137] -= kall_diffcircles_10_pd[106];
	J[78] += kall_diffcircles_10_pd[106];
	J[127] = -kall_diffcircles_10_pd[105];
	J[68] = kall_diffcircles_10_pd[105];
	J[127] -= kall_diffcircles_10_pd[104];
	J[68] += kall_diffcircles_10_pd[104];

   /*** derivatives for constraint 29 ***/

	J[158] = -kall_diffcircles_10_pd[111];
	J[79] = kall_diffcircles_10_pd[111];
	J[158] -= kall_diffcircles_10_pd[110];
	J[79] += kall_diffcircles_10_pd[110];
	J[147] = -kall_diffcircles_10_pd[109];
	J[69] = kall_diffcircles_10_pd[109];
	J[147] -= kall_diffcircles_10_pd[108];
	J[69] += kall_diffcircles_10_pd[108];

   /*** derivatives for constraint 30 ***/

	J[179] = -kall_diffcircles_10_pd[115];
	J[80] = kall_diffcircles_10_pd[115];
	J[179] -= kall_diffcircles_10_pd[114];
	J[80] += kall_diffcircles_10_pd[114];
	J[168] = -kall_diffcircles_10_pd[113];
	J[70] = kall_diffcircles_10_pd[113];
	J[168] -= kall_diffcircles_10_pd[112];
	J[70] += kall_diffcircles_10_pd[112];

   /*** derivatives for constraint 31 ***/

	J[199] = -kall_diffcircles_10_pd[119];
	J[81] = kall_diffcircles_10_pd[119];
	J[199] -= kall_diffcircles_10_pd[118];
	J[81] += kall_diffcircles_10_pd[118];
	J[189] = -kall_diffcircles_10_pd[117];
	J[71] = kall_diffcircles_10_pd[117];
	J[189] -= kall_diffcircles_10_pd[116];
	J[71] += kall_diffcircles_10_pd[116];

   /*** derivatives for constraint 32 ***/

	J[118] = -kall_diffcircles_10_pd[123];
	J[97] = kall_diffcircles_10_pd[123];
	J[118] -= kall_diffcircles_10_pd[122];
	J[97] += kall_diffcircles_10_pd[122];
	J[107] = -kall_diffcircles_10_pd[121];
	J[87] = kall_diffcircles_10_pd[121];
	J[107] -= kall_diffcircles_10_pd[120];
	J[87] += kall_diffcircles_10_pd[120];

   /*** derivatives for constraint 33 ***/

	J[138] = -kall_diffcircles_10_pd[127];
	J[98] = kall_diffcircles_10_pd[127];
	J[138] -= kall_diffcircles_10_pd[126];
	J[98] += kall_diffcircles_10_pd[126];
	J[128] = -kall_diffcircles_10_pd[125];
	J[88] = kall_diffcircles_10_pd[125];
	J[128] -= kall_diffcircles_10_pd[124];
	J[88] += kall_diffcircles_10_pd[124];

   /*** derivatives for constraint 34 ***/

	J[159] = -kall_diffcircles_10_pd[131];
	J[99] = kall_diffcircles_10_pd[131];
	J[159] -= kall_diffcircles_10_pd[130];
	J[99] += kall_diffcircles_10_pd[130];
	J[148] = -kall_diffcircles_10_pd[129];
	J[89] = kall_diffcircles_10_pd[129];
	J[148] -= kall_diffcircles_10_pd[128];
	J[89] += kall_diffcircles_10_pd[128];

   /*** derivatives for constraint 35 ***/

	J[180] = -kall_diffcircles_10_pd[135];
	J[100] = kall_diffcircles_10_pd[135];
	J[180] -= kall_diffcircles_10_pd[134];
	J[100] += kall_diffcircles_10_pd[134];
	J[169] = -kall_diffcircles_10_pd[133];
	J[90] = kall_diffcircles_10_pd[133];
	J[169] -= kall_diffcircles_10_pd[132];
	J[90] += kall_diffcircles_10_pd[132];

   /*** derivatives for constraint 36 ***/

	J[200] = -kall_diffcircles_10_pd[139];
	J[101] = kall_diffcircles_10_pd[139];
	J[200] -= kall_diffcircles_10_pd[138];
	J[101] += kall_diffcircles_10_pd[138];
	J[190] = -kall_diffcircles_10_pd[137];
	J[91] = kall_diffcircles_10_pd[137];
	J[190] -= kall_diffcircles_10_pd[136];
	J[91] += kall_diffcircles_10_pd[136];

   /*** derivatives for constraint 37 ***/

	J[139] = -kall_diffcircles_10_pd[143];
	J[119] = kall_diffcircles_10_pd[143];
	J[139] -= kall_diffcircles_10_pd[142];
	J[119] += kall_diffcircles_10_pd[142];
	J[129] = -kall_diffcircles_10_pd[141];
	J[108] = kall_diffcircles_10_pd[141];
	J[129] -= kall_diffcircles_10_pd[140];
	J[108] += kall_diffcircles_10_pd[140];

   /*** derivatives for constraint 38 ***/

	J[160] = -kall_diffcircles_10_pd[147];
	J[120] = kall_diffcircles_10_pd[147];
	J[160] -= kall_diffcircles_10_pd[146];
	J[120] += kall_diffcircles_10_pd[146];
	J[149] = -kall_diffcircles_10_pd[145];
	J[109] = kall_diffcircles_10_pd[145];
	J[149] -= kall_diffcircles_10_pd[144];
	J[109] += kall_diffcircles_10_pd[144];

   /*** derivatives for constraint 39 ***/

	J[181] = -kall_diffcircles_10_pd[151];
	J[121] = kall_diffcircles_10_pd[151];
	J[181] -= kall_diffcircles_10_pd[150];
	J[121] += kall_diffcircles_10_pd[150];
	J[170] = -kall_diffcircles_10_pd[149];
	J[110] = kall_diffcircles_10_pd[149];
	J[170] -= kall_diffcircles_10_pd[148];
	J[110] += kall_diffcircles_10_pd[148];

   /*** derivatives for constraint 40 ***/

	J[201] = -kall_diffcircles_10_pd[155];
	J[122] = kall_diffcircles_10_pd[155];
	J[201] -= kall_diffcircles_10_pd[154];
	J[122] += kall_diffcircles_10_pd[154];
	J[191] = -kall_diffcircles_10_pd[153];
	J[111] = kall_diffcircles_10_pd[153];
	J[191] -= kall_diffcircles_10_pd[152];
	J[111] += kall_diffcircles_10_pd[152];

   /*** derivatives for constraint 41 ***/

	J[161] = -kall_diffcircles_10_pd[159];
	J[140] = kall_diffcircles_10_pd[159];
	J[161] -= kall_diffcircles_10_pd[158];
	J[140] += kall_diffcircles_10_pd[158];
	J[150] = -kall_diffcircles_10_pd[157];
	J[130] = kall_diffcircles_10_pd[157];
	J[150] -= kall_diffcircles_10_pd[156];
	J[130] += kall_diffcircles_10_pd[156];

   /*** derivatives for constraint 42 ***/

	J[182] = -kall_diffcircles_10_pd[163];
	J[141] = kall_diffcircles_10_pd[163];
	J[182] -= kall_diffcircles_10_pd[162];
	J[141] += kall_diffcircles_10_pd[162];
	J[171] = -kall_diffcircles_10_pd[161];
	J[131] = kall_diffcircles_10_pd[161];
	J[171] -= kall_diffcircles_10_pd[160];
	J[131] += kall_diffcircles_10_pd[160];

   /*** derivatives for constraint 43 ***/

	J[202] = -kall_diffcircles_10_pd[167];
	J[142] = kall_diffcircles_10_pd[167];
	J[202] -= kall_diffcircles_10_pd[166];
	J[142] += kall_diffcircles_10_pd[166];
	J[192] = -kall_diffcircles_10_pd[165];
	J[132] = kall_diffcircles_10_pd[165];
	J[192] -= kall_diffcircles_10_pd[164];
	J[132] += kall_diffcircles_10_pd[164];

   /*** derivatives for constraint 44 ***/

	J[183] = -kall_diffcircles_10_pd[171];
	J[162] = kall_diffcircles_10_pd[171];
	J[183] -= kall_diffcircles_10_pd[170];
	J[162] += kall_diffcircles_10_pd[170];
	J[172] = -kall_diffcircles_10_pd[169];
	J[151] = kall_diffcircles_10_pd[169];
	J[172] -= kall_diffcircles_10_pd[168];
	J[151] += kall_diffcircles_10_pd[168];

   /*** derivatives for constraint 45 ***/

	J[203] = -kall_diffcircles_10_pd[175];
	J[163] = kall_diffcircles_10_pd[175];
	J[203] -= kall_diffcircles_10_pd[174];
	J[163] += kall_diffcircles_10_pd[174];
	J[193] = -kall_diffcircles_10_pd[173];
	J[152] = kall_diffcircles_10_pd[173];
	J[193] -= kall_diffcircles_10_pd[172];
	J[152] += kall_diffcircles_10_pd[172];

   /*** derivatives for constraint 46 ***/

	J[204] = -kall_diffcircles_10_pd[179];
	J[184] = kall_diffcircles_10_pd[179];
	J[204] -= kall_diffcircles_10_pd[178];
	J[184] += kall_diffcircles_10_pd[178];
	J[194] = -kall_diffcircles_10_pd[177];
	J[173] = kall_diffcircles_10_pd[177];
	J[194] -= kall_diffcircles_10_pd[176];
	J[173] += kall_diffcircles_10_pd[176];

   /*** derivatives for constraint 47 ***/

	J[229] = -1.;
	J[230] = 1.;

   /*** derivatives for constraint 48 ***/

	J[9] = 1.;
	J[207] = -1.;

   /*** derivatives for constraint 49 ***/

	J[20] = 1.;
	J[218] = -1.;

   /*** derivatives for constraint 50 ***/

	J[31] = 1.;
	J[208] = -1.;

   /*** derivatives for constraint 51 ***/

	J[42] = 1.;
	J[219] = -1.;

   /*** derivatives for constraint 52 ***/

	J[52] = 1.;
	J[209] = -1.;

   /*** derivatives for constraint 53 ***/

	J[62] = 1.;
	J[220] = -1.;

   /*** derivatives for constraint 54 ***/

	J[72] = 1.;
	J[210] = -1.;

   /*** derivatives for constraint 55 ***/

	J[82] = 1.;
	J[221] = -1.;

   /*** derivatives for constraint 56 ***/

	J[92] = 1.;
	J[211] = -1.;

   /*** derivatives for constraint 57 ***/

	J[102] = 1.;
	J[222] = -1.;

   /*** derivatives for constraint 58 ***/

	J[112] = 1.;
	J[212] = -1.;

   /*** derivatives for constraint 59 ***/

	J[123] = 1.;
	J[223] = -1.;

   /*** derivatives for constraint 60 ***/

	J[133] = 1.;
	J[213] = -1.;

   /*** derivatives for constraint 61 ***/

	J[143] = 1.;
	J[224] = -1.;

   /*** derivatives for constraint 62 ***/

	J[153] = 1.;
	J[214] = -1.;

   /*** derivatives for constraint 63 ***/

	J[164] = 1.;
	J[225] = -1.;

   /*** derivatives for constraint 64 ***/

	J[174] = 1.;
	J[215] = -1.;

   /*** derivatives for constraint 65 ***/

	J[185] = 1.;
	J[226] = -1.;

   /*** derivatives for constraint 66 ***/

	J[195] = 1.;
	J[216] = -1.;

   /*** derivatives for constraint 67 ***/

	J[205] = 1.;
	J[227] = -1.;

   /*** derivatives for constraint 68 ***/

	J[10] = 1.;

   /*** derivatives for constraint 69 ***/

	J[21] = 1.;

   /*** derivatives for constraint 70 ***/

	J[32] = 1.;
	J[175] = -1.;

   /*** derivatives for constraint 71 ***/

	J[113] = 1.;
	J[154] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
