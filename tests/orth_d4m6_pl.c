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
 fint orth_d4m6_pl_auxcom_[1] = { 41 /* nlc */ };
 fint orth_d4m6_pl_funcom_[433] = {
	42 /* nvar */,
	1 /* nobj */,
	86 /* ncon */,
	384 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	12,
	23,
	34,
	38,
	49,
	53,
	64,
	68,
	79,
	83,
	87,
	91,
	95,
	99,
	103,
	107,
	111,
	115,
	119,
	123,
	127,
	131,
	135,
	139,
	143,
	147,
	160,
	186,
	199,
	212,
	225,
	238,
	251,
	264,
	277,
	290,
	303,
	316,
	329,
	342,
	355,
	385,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	42,
	1,
	2,
	3,
	4,
	11,
	12,
	13,
	14,
	15,
	16,
	42,
	1,
	5,
	6,
	7,
	11,
	12,
	13,
	17,
	18,
	19,
	42,
	1,
	24,
	25,
	26,
	2,
	5,
	8,
	9,
	11,
	14,
	15,
	17,
	18,
	20,
	42,
	2,
	23,
	25,
	26,
	3,
	6,
	8,
	10,
	12,
	14,
	16,
	17,
	19,
	20,
	42,
	3,
	23,
	24,
	26,
	4,
	7,
	9,
	10,
	13,
	15,
	16,
	18,
	19,
	20,
	42,
	4,
	23,
	24,
	25,
	5,
	22,
	25,
	26,
	6,
	22,
	24,
	26,
	7,
	22,
	24,
	25,
	8,
	22,
	23,
	26,
	9,
	22,
	23,
	25,
	10,
	22,
	23,
	24,
	11,
	21,
	25,
	26,
	12,
	21,
	24,
	26,
	13,
	21,
	24,
	25,
	14,
	21,
	23,
	26,
	15,
	21,
	23,
	25,
	16,
	21,
	23,
	24,
	17,
	21,
	22,
	26,
	18,
	21,
	22,
	25,
	19,
	21,
	22,
	24,
	20,
	21,
	22,
	23,
	21,
	22,
	23,
	24,
	27,
	28,
	29,
	30,
	31,
	32,
	43,
	57,
	58,
	23,
	24,
	25,
	26,
	32,
	35,
	38,
	39,
	40,
	41,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	85,
	86,
	21,
	22,
	23,
	25,
	27,
	28,
	29,
	33,
	34,
	35,
	44,
	59,
	60,
	21,
	22,
	23,
	26,
	27,
	28,
	29,
	36,
	37,
	38,
	45,
	61,
	62,
	21,
	22,
	24,
	25,
	27,
	30,
	31,
	33,
	34,
	39,
	46,
	63,
	64,
	21,
	22,
	24,
	26,
	27,
	30,
	31,
	36,
	37,
	40,
	47,
	65,
	66,
	21,
	22,
	25,
	26,
	27,
	33,
	34,
	36,
	37,
	41,
	48,
	67,
	68,
	21,
	23,
	24,
	25,
	28,
	30,
	32,
	33,
	35,
	39,
	49,
	69,
	70,
	21,
	23,
	24,
	26,
	28,
	30,
	32,
	36,
	38,
	40,
	50,
	71,
	72,
	21,
	23,
	25,
	26,
	28,
	33,
	35,
	36,
	38,
	41,
	51,
	73,
	74,
	21,
	24,
	25,
	26,
	30,
	33,
	36,
	39,
	40,
	41,
	52,
	75,
	76,
	22,
	23,
	24,
	25,
	29,
	31,
	32,
	34,
	35,
	39,
	53,
	77,
	78,
	22,
	23,
	24,
	26,
	29,
	31,
	32,
	37,
	38,
	40,
	54,
	79,
	80,
	22,
	23,
	25,
	26,
	29,
	34,
	35,
	37,
	38,
	41,
	55,
	81,
	82,
	22,
	24,
	25,
	26,
	31,
	34,
	37,
	39,
	40,
	41,
	56,
	83,
	84,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86 };

 real orth_d4m6_pl_boundc_[1+84+172] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		0.,
		1.,
		0.,
		1.,
		-1.,
		1.,
		0.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		0.,
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
		4.,
		4.,
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

 real orth_d4m6_pl_x0comn_[42] = {
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
		0.,
		0. };

 static real orth_d4m6_pl_pd[140];
static real orth_d4m6_pl_old_x[42];
static int orth_d4m6_pl_xkind = -1;

 static int
orth_d4m6_pl_xcheck(real *x)
{
	real *x1 = orth_d4m6_pl_old_x, *xe = x + 42;
	errno = 0;
	if (orth_d4m6_pl_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	orth_d4m6_pl_xkind = 0;
	return 1;
	}
 real
orth_d4m6_pl_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (orth_d4m6_pl_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[41];
	;}

	if (wantfg & 2) {
	g[41] = 1.;
	}

	return rv;
}

 void
orth_d4m6_pl_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (orth_d4m6_pl_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	orth_d4m6_pl_pd[0] = x[0] * x[1];
	v[0] = orth_d4m6_pl_pd[0] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	orth_d4m6_pl_pd[1] = x[0] * x[1];
	v[0] = orth_d4m6_pl_pd[1] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	orth_d4m6_pl_pd[2] = x[0] * x[1];
	v[0] = orth_d4m6_pl_pd[2] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[2] = t1;

  /***  constraint 4  ***/

	orth_d4m6_pl_pd[3] = x[0] * x[1];
	v[0] = orth_d4m6_pl_pd[3] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	orth_d4m6_pl_pd[4] = x[0] * x[2];
	v[0] = orth_d4m6_pl_pd[4] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[10];
	c[4] = t1;

  /***  constraint 6  ***/

	orth_d4m6_pl_pd[5] = x[0] * x[2];
	v[0] = orth_d4m6_pl_pd[5] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	orth_d4m6_pl_pd[6] = x[0] * x[2];
	v[0] = orth_d4m6_pl_pd[6] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	orth_d4m6_pl_pd[7] = x[0] * x[4];
	v[0] = orth_d4m6_pl_pd[7] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	orth_d4m6_pl_pd[8] = x[0] * x[4];
	v[0] = orth_d4m6_pl_pd[8] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[14];
	c[8] = t1;

  /***  constraint 10  ***/

	orth_d4m6_pl_pd[9] = x[0] * x[6];
	v[0] = orth_d4m6_pl_pd[9] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[15];
	c[9] = t1;

  /***  constraint 11  ***/

	orth_d4m6_pl_pd[10] = x[1] * x[2];
	v[0] = orth_d4m6_pl_pd[10] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	orth_d4m6_pl_pd[11] = x[1] * x[2];
	v[0] = orth_d4m6_pl_pd[11] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	orth_d4m6_pl_pd[12] = x[1] * x[2];
	v[0] = orth_d4m6_pl_pd[12] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[18];
	c[12] = t1;

  /***  constraint 14  ***/

	orth_d4m6_pl_pd[13] = x[1] * x[4];
	v[0] = orth_d4m6_pl_pd[13] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[19];
	c[13] = t1;

  /***  constraint 15  ***/

	orth_d4m6_pl_pd[14] = x[1] * x[4];
	v[0] = orth_d4m6_pl_pd[14] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[20];
	c[14] = t1;

  /***  constraint 16  ***/

	orth_d4m6_pl_pd[15] = x[1] * x[6];
	v[0] = orth_d4m6_pl_pd[15] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[21];
	c[15] = t1;

  /***  constraint 17  ***/

	orth_d4m6_pl_pd[16] = x[2] * x[4];
	v[0] = orth_d4m6_pl_pd[16] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[22];
	c[16] = t1;

  /***  constraint 18  ***/

	orth_d4m6_pl_pd[17] = x[2] * x[4];
	v[0] = orth_d4m6_pl_pd[17] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[23];
	c[17] = t1;

  /***  constraint 19  ***/

	orth_d4m6_pl_pd[18] = x[2] * x[6];
	v[0] = orth_d4m6_pl_pd[18] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[24];
	c[18] = t1;

  /***  constraint 20  ***/

	orth_d4m6_pl_pd[19] = x[4] * x[6];
	v[0] = orth_d4m6_pl_pd[19] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[25];
	c[19] = t1;

  /***  constraint 21  ***/

	orth_d4m6_pl_pd[20] = x[26] * x[26];
	orth_d4m6_pl_pd[21] = x[26] + x[26];
	v[0] = orth_d4m6_pl_pd[20] * x[16];
	orth_d4m6_pl_pd[22] = x[28] * x[28];
	orth_d4m6_pl_pd[23] = x[28] + x[28];
	v[1] = orth_d4m6_pl_pd[22] * x[17];
	v[0] += v[1];
	orth_d4m6_pl_pd[24] = x[29] * x[29];
	orth_d4m6_pl_pd[25] = x[29] + x[29];
	v[1] = orth_d4m6_pl_pd[24] * x[18];
	v[0] += v[1];
	orth_d4m6_pl_pd[26] = x[30] * x[30];
	orth_d4m6_pl_pd[27] = x[30] + x[30];
	v[1] = orth_d4m6_pl_pd[26] * x[19];
	v[0] += v[1];
	orth_d4m6_pl_pd[28] = x[31] * x[31];
	orth_d4m6_pl_pd[29] = x[31] + x[31];
	v[1] = orth_d4m6_pl_pd[28] * x[20];
	v[0] += v[1];
	orth_d4m6_pl_pd[30] = x[32] * x[32];
	orth_d4m6_pl_pd[31] = x[32] + x[32];
	v[1] = orth_d4m6_pl_pd[30] * x[21];
	v[0] += v[1];
	orth_d4m6_pl_pd[32] = x[33] * x[33];
	orth_d4m6_pl_pd[33] = x[33] + x[33];
	v[1] = orth_d4m6_pl_pd[32] * x[22];
	v[0] += v[1];
	orth_d4m6_pl_pd[34] = x[34] * x[34];
	orth_d4m6_pl_pd[35] = x[34] + x[34];
	v[1] = orth_d4m6_pl_pd[34] * x[23];
	v[0] += v[1];
	orth_d4m6_pl_pd[36] = x[35] * x[35];
	orth_d4m6_pl_pd[37] = x[35] + x[35];
	v[1] = orth_d4m6_pl_pd[36] * x[24];
	v[0] += v[1];
	orth_d4m6_pl_pd[38] = x[36] * x[36];
	orth_d4m6_pl_pd[39] = x[36] + x[36];
	v[1] = orth_d4m6_pl_pd[38] * x[25];
	v[0] += v[1];
	c[20] = v[0];

  /***  constraint 22  ***/

	orth_d4m6_pl_pd[40] = x[26] * x[26];
	orth_d4m6_pl_pd[41] = x[26] + x[26];
	v[0] = orth_d4m6_pl_pd[40] * x[10];
	orth_d4m6_pl_pd[42] = x[28] * x[28];
	orth_d4m6_pl_pd[43] = x[28] + x[28];
	v[1] = orth_d4m6_pl_pd[42] * x[11];
	v[0] += v[1];
	orth_d4m6_pl_pd[44] = x[29] * x[29];
	orth_d4m6_pl_pd[45] = x[29] + x[29];
	v[1] = orth_d4m6_pl_pd[44] * x[12];
	v[0] += v[1];
	orth_d4m6_pl_pd[46] = x[30] * x[30];
	orth_d4m6_pl_pd[47] = x[30] + x[30];
	v[1] = orth_d4m6_pl_pd[46] * x[13];
	v[0] += v[1];
	orth_d4m6_pl_pd[48] = x[31] * x[31];
	orth_d4m6_pl_pd[49] = x[31] + x[31];
	v[1] = orth_d4m6_pl_pd[48] * x[14];
	v[0] += v[1];
	orth_d4m6_pl_pd[50] = x[32] * x[32];
	orth_d4m6_pl_pd[51] = x[32] + x[32];
	v[1] = orth_d4m6_pl_pd[50] * x[15];
	v[0] += v[1];
	orth_d4m6_pl_pd[52] = x[37] * x[37];
	orth_d4m6_pl_pd[53] = x[37] + x[37];
	v[1] = orth_d4m6_pl_pd[52] * x[22];
	v[0] += v[1];
	orth_d4m6_pl_pd[54] = x[38] * x[38];
	orth_d4m6_pl_pd[55] = x[38] + x[38];
	v[1] = orth_d4m6_pl_pd[54] * x[23];
	v[0] += v[1];
	orth_d4m6_pl_pd[56] = x[39] * x[39];
	orth_d4m6_pl_pd[57] = x[39] + x[39];
	v[1] = orth_d4m6_pl_pd[56] * x[24];
	v[0] += v[1];
	orth_d4m6_pl_pd[58] = x[40] * x[40];
	orth_d4m6_pl_pd[59] = x[40] + x[40];
	v[1] = orth_d4m6_pl_pd[58] * x[25];
	v[0] += v[1];
	c[21] = v[0];

  /***  constraint 23  ***/

	orth_d4m6_pl_pd[60] = x[26] * x[26];
	orth_d4m6_pl_pd[61] = x[26] + x[26];
	v[0] = orth_d4m6_pl_pd[60] * x[5];
	orth_d4m6_pl_pd[62] = x[28] * x[28];
	orth_d4m6_pl_pd[63] = x[28] + x[28];
	v[1] = orth_d4m6_pl_pd[62] * x[7];
	v[0] += v[1];
	orth_d4m6_pl_pd[64] = x[29] * x[29];
	orth_d4m6_pl_pd[65] = x[29] + x[29];
	v[1] = orth_d4m6_pl_pd[64] * x[9];
	v[0] += v[1];
	orth_d4m6_pl_pd[66] = x[33] * x[33];
	orth_d4m6_pl_pd[67] = x[33] + x[33];
	v[1] = orth_d4m6_pl_pd[66] * x[13];
	v[0] += v[1];
	orth_d4m6_pl_pd[68] = x[34] * x[34];
	orth_d4m6_pl_pd[69] = x[34] + x[34];
	v[1] = orth_d4m6_pl_pd[68] * x[14];
	v[0] += v[1];
	orth_d4m6_pl_pd[70] = x[35] * x[35];
	orth_d4m6_pl_pd[71] = x[35] + x[35];
	v[1] = orth_d4m6_pl_pd[70] * x[15];
	v[0] += v[1];
	orth_d4m6_pl_pd[72] = x[37] * x[37];
	orth_d4m6_pl_pd[73] = x[37] + x[37];
	v[1] = orth_d4m6_pl_pd[72] * x[19];
	v[0] += v[1];
	orth_d4m6_pl_pd[74] = x[38] * x[38];
	orth_d4m6_pl_pd[75] = x[38] + x[38];
	v[1] = orth_d4m6_pl_pd[74] * x[20];
	v[0] += v[1];
	orth_d4m6_pl_pd[76] = x[39] * x[39];
	orth_d4m6_pl_pd[77] = x[39] + x[39];
	v[1] = orth_d4m6_pl_pd[76] * x[21];
	v[0] += v[1];
	orth_d4m6_pl_pd[78] = x[27] * x[27];
	orth_d4m6_pl_pd[79] = x[27] + x[27];
	v[1] = orth_d4m6_pl_pd[78] * x[25];
	v[0] += v[1];
	c[22] = v[0];

  /***  constraint 24  ***/

	orth_d4m6_pl_pd[80] = x[26] * x[26];
	orth_d4m6_pl_pd[81] = x[26] + x[26];
	v[0] = orth_d4m6_pl_pd[80] * x[3];
	orth_d4m6_pl_pd[82] = x[30] * x[30];
	orth_d4m6_pl_pd[83] = x[30] + x[30];
	v[1] = orth_d4m6_pl_pd[82] * x[7];
	v[0] += v[1];
	orth_d4m6_pl_pd[84] = x[31] * x[31];
	orth_d4m6_pl_pd[85] = x[31] + x[31];
	v[1] = orth_d4m6_pl_pd[84] * x[9];
	v[0] += v[1];
	orth_d4m6_pl_pd[86] = x[33] * x[33];
	orth_d4m6_pl_pd[87] = x[33] + x[33];
	v[1] = orth_d4m6_pl_pd[86] * x[11];
	v[0] += v[1];
	orth_d4m6_pl_pd[88] = x[34] * x[34];
	orth_d4m6_pl_pd[89] = x[34] + x[34];
	v[1] = orth_d4m6_pl_pd[88] * x[12];
	v[0] += v[1];
	orth_d4m6_pl_pd[90] = x[36] * x[36];
	orth_d4m6_pl_pd[91] = x[36] + x[36];
	v[1] = orth_d4m6_pl_pd[90] * x[15];
	v[0] += v[1];
	orth_d4m6_pl_pd[92] = x[37] * x[37];
	orth_d4m6_pl_pd[93] = x[37] + x[37];
	v[1] = orth_d4m6_pl_pd[92] * x[17];
	v[0] += v[1];
	orth_d4m6_pl_pd[94] = x[38] * x[38];
	orth_d4m6_pl_pd[95] = x[38] + x[38];
	v[1] = orth_d4m6_pl_pd[94] * x[18];
	v[0] += v[1];
	orth_d4m6_pl_pd[96] = x[40] * x[40];
	orth_d4m6_pl_pd[97] = x[40] + x[40];
	v[1] = orth_d4m6_pl_pd[96] * x[21];
	v[0] += v[1];
	orth_d4m6_pl_pd[98] = x[27] * x[27];
	orth_d4m6_pl_pd[99] = x[27] + x[27];
	v[1] = orth_d4m6_pl_pd[98] * x[24];
	v[0] += v[1];
	c[23] = v[0];

  /***  constraint 25  ***/

	orth_d4m6_pl_pd[100] = x[28] * x[28];
	orth_d4m6_pl_pd[101] = x[28] + x[28];
	v[0] = orth_d4m6_pl_pd[100] * x[3];
	orth_d4m6_pl_pd[102] = x[30] * x[30];
	orth_d4m6_pl_pd[103] = x[30] + x[30];
	v[1] = orth_d4m6_pl_pd[102] * x[5];
	v[0] += v[1];
	orth_d4m6_pl_pd[104] = x[32] * x[32];
	orth_d4m6_pl_pd[105] = x[32] + x[32];
	v[1] = orth_d4m6_pl_pd[104] * x[9];
	v[0] += v[1];
	orth_d4m6_pl_pd[106] = x[33] * x[33];
	orth_d4m6_pl_pd[107] = x[33] + x[33];
	v[1] = orth_d4m6_pl_pd[106] * x[10];
	v[0] += v[1];
	orth_d4m6_pl_pd[108] = x[35] * x[35];
	orth_d4m6_pl_pd[109] = x[35] + x[35];
	v[1] = orth_d4m6_pl_pd[108] * x[12];
	v[0] += v[1];
	orth_d4m6_pl_pd[110] = x[36] * x[36];
	orth_d4m6_pl_pd[111] = x[36] + x[36];
	v[1] = orth_d4m6_pl_pd[110] * x[14];
	v[0] += v[1];
	orth_d4m6_pl_pd[112] = x[37] * x[37];
	orth_d4m6_pl_pd[113] = x[37] + x[37];
	v[1] = orth_d4m6_pl_pd[112] * x[16];
	v[0] += v[1];
	orth_d4m6_pl_pd[114] = x[39] * x[39];
	orth_d4m6_pl_pd[115] = x[39] + x[39];
	v[1] = orth_d4m6_pl_pd[114] * x[18];
	v[0] += v[1];
	orth_d4m6_pl_pd[116] = x[40] * x[40];
	orth_d4m6_pl_pd[117] = x[40] + x[40];
	v[1] = orth_d4m6_pl_pd[116] * x[20];
	v[0] += v[1];
	orth_d4m6_pl_pd[118] = x[27] * x[27];
	orth_d4m6_pl_pd[119] = x[27] + x[27];
	v[1] = orth_d4m6_pl_pd[118] * x[23];
	v[0] += v[1];
	c[24] = v[0];

  /***  constraint 26  ***/

	orth_d4m6_pl_pd[120] = x[29] * x[29];
	orth_d4m6_pl_pd[121] = x[29] + x[29];
	v[0] = orth_d4m6_pl_pd[120] * x[3];
	orth_d4m6_pl_pd[122] = x[31] * x[31];
	orth_d4m6_pl_pd[123] = x[31] + x[31];
	v[1] = orth_d4m6_pl_pd[122] * x[5];
	v[0] += v[1];
	orth_d4m6_pl_pd[124] = x[32] * x[32];
	orth_d4m6_pl_pd[125] = x[32] + x[32];
	v[1] = orth_d4m6_pl_pd[124] * x[7];
	v[0] += v[1];
	orth_d4m6_pl_pd[126] = x[34] * x[34];
	orth_d4m6_pl_pd[127] = x[34] + x[34];
	v[1] = orth_d4m6_pl_pd[126] * x[10];
	v[0] += v[1];
	orth_d4m6_pl_pd[128] = x[35] * x[35];
	orth_d4m6_pl_pd[129] = x[35] + x[35];
	v[1] = orth_d4m6_pl_pd[128] * x[11];
	v[0] += v[1];
	orth_d4m6_pl_pd[130] = x[36] * x[36];
	orth_d4m6_pl_pd[131] = x[36] + x[36];
	v[1] = orth_d4m6_pl_pd[130] * x[13];
	v[0] += v[1];
	orth_d4m6_pl_pd[132] = x[38] * x[38];
	orth_d4m6_pl_pd[133] = x[38] + x[38];
	v[1] = orth_d4m6_pl_pd[132] * x[16];
	v[0] += v[1];
	orth_d4m6_pl_pd[134] = x[39] * x[39];
	orth_d4m6_pl_pd[135] = x[39] + x[39];
	v[1] = orth_d4m6_pl_pd[134] * x[17];
	v[0] += v[1];
	orth_d4m6_pl_pd[136] = x[40] * x[40];
	orth_d4m6_pl_pd[137] = x[40] + x[40];
	v[1] = orth_d4m6_pl_pd[136] * x[19];
	v[0] += v[1];
	orth_d4m6_pl_pd[138] = x[27] * x[27];
	orth_d4m6_pl_pd[139] = x[27] + x[27];
	v[1] = orth_d4m6_pl_pd[138] * x[22];
	v[0] += v[1];
	c[25] = v[0];

  /***  constraint 27  ***/

	v[0] = x[26] * x[32];
	v[1] = x[28] * x[31];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[30];
	v[0] += v[2];
	c[26] = v[0];

  /***  constraint 28  ***/

	v[0] = x[26] * x[35];
	v[1] = x[28] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[33];
	v[0] += v[2];
	c[27] = v[0];

  /***  constraint 29  ***/

	v[0] = x[26] * x[39];
	v[1] = x[28] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[37];
	v[0] += v[2];
	c[28] = v[0];

  /***  constraint 30  ***/

	v[0] = x[26] * x[36];
	v[1] = x[30] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[33];
	v[0] += v[2];
	c[29] = v[0];

  /***  constraint 31  ***/

	v[0] = x[26] * x[40];
	v[1] = x[30] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[37];
	v[0] += v[2];
	c[30] = v[0];

  /***  constraint 32  ***/

	v[0] = x[26] * x[27];
	v[1] = x[33] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[34] * x[37];
	v[0] += v[2];
	c[31] = v[0];

  /***  constraint 33  ***/

	v[0] = x[28] * x[36];
	v[1] = x[30] * x[35];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[32] * x[33];
	v[0] += v[2];
	c[32] = v[0];

  /***  constraint 34  ***/

	v[0] = x[28] * x[40];
	v[1] = x[30] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[32] * x[37];
	v[0] += v[2];
	c[33] = v[0];

  /***  constraint 35  ***/

	v[0] = x[27] * x[28];
	v[1] = x[33] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[35] * x[37];
	v[0] += v[2];
	c[34] = v[0];

  /***  constraint 36  ***/

	v[0] = x[29] * x[36];
	v[1] = x[31] * x[35];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[32] * x[34];
	v[0] += v[2];
	c[35] = v[0];

  /***  constraint 37  ***/

	v[0] = x[29] * x[40];
	v[1] = x[31] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[32] * x[38];
	v[0] += v[2];
	c[36] = v[0];

  /***  constraint 38  ***/

	v[0] = x[27] * x[29];
	v[1] = x[34] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[35] * x[38];
	v[0] += v[2];
	c[37] = v[0];

  /***  constraint 39  ***/

	v[0] = x[27] * x[30];
	v[1] = x[33] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[36] * x[37];
	v[0] += v[2];
	c[38] = v[0];

  /***  constraint 40  ***/

	v[0] = x[27] * x[31];
	v[1] = x[34] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[36] * x[38];
	v[0] += v[2];
	c[39] = v[0];

  /***  constraint 41  ***/

	v[0] = x[27] * x[32];
	v[1] = x[35] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[36] * x[39];
	v[0] += v[2];
	c[40] = v[0];

  /***  constraint 42  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[4];
	t1 += x[6];
	t1 += x[8];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[26];
	t1 += -x[27];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[27];
	t1 += x[28];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[27];
	t1 += x[29];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[27];
	t1 += x[30];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[27];
	t1 += x[31];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[27];
	t1 += x[32];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[27];
	t1 += x[33];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[27];
	t1 += x[34];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[27];
	t1 += x[35];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[27];
	t1 += x[36];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[27];
	t1 += x[37];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[27];
	t1 += x[38];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[27];
	t1 += x[39];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[27];
	t1 += x[40];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[26];
	t1 += -x[41];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[26];
	t1 += -x[41];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[28];
	t1 += -x[41];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[28];
	t1 += -x[41];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[29];
	t1 += -x[41];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[29];
	t1 += -x[41];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[30];
	t1 += -x[41];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[30];
	t1 += -x[41];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[31];
	t1 += -x[41];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[31];
	t1 += -x[41];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[32];
	t1 += -x[41];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[32];
	t1 += -x[41];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[33];
	t1 += -x[41];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[33];
	t1 += -x[41];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[34];
	t1 += -x[41];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[34];
	t1 += -x[41];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[35];
	t1 += -x[41];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[35];
	t1 += -x[41];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[36];
	t1 += -x[41];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[36];
	t1 += -x[41];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[37];
	t1 += -x[41];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[37];
	t1 += -x[41];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[38];
	t1 += -x[41];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[38];
	t1 += -x[41];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[39];
	t1 += -x[41];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[39];
	t1 += -x[41];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[40];
	t1 += -x[41];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[40];
	t1 += -x[41];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[27];
	t1 += -x[41];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[27];
	t1 += -x[41];
	c[85] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[22] = -orth_d4m6_pl_pd[0];
	J[11] = -x[2]*x[0];
	J[0] = -x[2]*x[1];
	J[33] = 1.;

   /*** derivatives for constraint 2 ***/

	J[37] = -orth_d4m6_pl_pd[1];
	J[12] = -x[4]*x[0];
	J[1] = -x[4]*x[1];
	J[48] = 1.;

   /*** derivatives for constraint 3 ***/

	J[52] = -orth_d4m6_pl_pd[2];
	J[13] = -x[6]*x[0];
	J[2] = -x[6]*x[1];
	J[63] = 1.;

   /*** derivatives for constraint 4 ***/

	J[67] = -orth_d4m6_pl_pd[3];
	J[14] = -x[8]*x[0];
	J[3] = -x[8]*x[1];
	J[78] = 1.;

   /*** derivatives for constraint 5 ***/

	J[38] = -orth_d4m6_pl_pd[4];
	J[23] = -x[4]*x[0];
	J[4] = -x[4]*x[2];
	J[82] = 1.;

   /*** derivatives for constraint 6 ***/

	J[53] = -orth_d4m6_pl_pd[5];
	J[24] = -x[6]*x[0];
	J[5] = -x[6]*x[2];
	J[86] = 1.;

   /*** derivatives for constraint 7 ***/

	J[68] = -orth_d4m6_pl_pd[6];
	J[25] = -x[8]*x[0];
	J[6] = -x[8]*x[2];
	J[90] = 1.;

   /*** derivatives for constraint 8 ***/

	J[54] = -orth_d4m6_pl_pd[7];
	J[39] = -x[6]*x[0];
	J[7] = -x[6]*x[4];
	J[94] = 1.;

   /*** derivatives for constraint 9 ***/

	J[69] = -orth_d4m6_pl_pd[8];
	J[40] = -x[8]*x[0];
	J[8] = -x[8]*x[4];
	J[98] = 1.;

   /*** derivatives for constraint 10 ***/

	J[70] = -orth_d4m6_pl_pd[9];
	J[55] = -x[8]*x[0];
	J[9] = -x[8]*x[6];
	J[102] = 1.;

   /*** derivatives for constraint 11 ***/

	J[41] = -orth_d4m6_pl_pd[10];
	J[26] = -x[4]*x[1];
	J[15] = -x[4]*x[2];
	J[106] = 1.;

   /*** derivatives for constraint 12 ***/

	J[56] = -orth_d4m6_pl_pd[11];
	J[27] = -x[6]*x[1];
	J[16] = -x[6]*x[2];
	J[110] = 1.;

   /*** derivatives for constraint 13 ***/

	J[71] = -orth_d4m6_pl_pd[12];
	J[28] = -x[8]*x[1];
	J[17] = -x[8]*x[2];
	J[114] = 1.;

   /*** derivatives for constraint 14 ***/

	J[57] = -orth_d4m6_pl_pd[13];
	J[42] = -x[6]*x[1];
	J[18] = -x[6]*x[4];
	J[118] = 1.;

   /*** derivatives for constraint 15 ***/

	J[72] = -orth_d4m6_pl_pd[14];
	J[43] = -x[8]*x[1];
	J[19] = -x[8]*x[4];
	J[122] = 1.;

   /*** derivatives for constraint 16 ***/

	J[73] = -orth_d4m6_pl_pd[15];
	J[58] = -x[8]*x[1];
	J[20] = -x[8]*x[6];
	J[126] = 1.;

   /*** derivatives for constraint 17 ***/

	J[59] = -orth_d4m6_pl_pd[16];
	J[44] = -x[6]*x[2];
	J[29] = -x[6]*x[4];
	J[130] = 1.;

   /*** derivatives for constraint 18 ***/

	J[74] = -orth_d4m6_pl_pd[17];
	J[45] = -x[8]*x[2];
	J[30] = -x[8]*x[4];
	J[134] = 1.;

   /*** derivatives for constraint 19 ***/

	J[75] = -orth_d4m6_pl_pd[18];
	J[60] = -x[8]*x[2];
	J[31] = -x[8]*x[6];
	J[138] = 1.;

   /*** derivatives for constraint 20 ***/

	J[76] = -orth_d4m6_pl_pd[19];
	J[61] = -x[8]*x[4];
	J[46] = -x[8]*x[6];
	J[142] = 1.;

   /*** derivatives for constraint 21 ***/

	J[143] = orth_d4m6_pl_pd[38];
	J[289] = x[25]*orth_d4m6_pl_pd[39];
	J[139] = orth_d4m6_pl_pd[36];
	J[276] = x[24]*orth_d4m6_pl_pd[37];
	J[135] = orth_d4m6_pl_pd[34];
	J[263] = x[23]*orth_d4m6_pl_pd[35];
	J[131] = orth_d4m6_pl_pd[32];
	J[250] = x[22]*orth_d4m6_pl_pd[33];
	J[127] = orth_d4m6_pl_pd[30];
	J[237] = x[21]*orth_d4m6_pl_pd[31];
	J[123] = orth_d4m6_pl_pd[28];
	J[224] = x[20]*orth_d4m6_pl_pd[29];
	J[119] = orth_d4m6_pl_pd[26];
	J[211] = x[19]*orth_d4m6_pl_pd[27];
	J[115] = orth_d4m6_pl_pd[24];
	J[198] = x[18]*orth_d4m6_pl_pd[25];
	J[111] = orth_d4m6_pl_pd[22];
	J[185] = x[17]*orth_d4m6_pl_pd[23];
	J[107] = orth_d4m6_pl_pd[20];
	J[146] = x[16]*orth_d4m6_pl_pd[21];

   /*** derivatives for constraint 22 ***/

	J[144] = orth_d4m6_pl_pd[58];
	J[341] = x[25]*orth_d4m6_pl_pd[59];
	J[140] = orth_d4m6_pl_pd[56];
	J[328] = x[24]*orth_d4m6_pl_pd[57];
	J[136] = orth_d4m6_pl_pd[54];
	J[315] = x[23]*orth_d4m6_pl_pd[55];
	J[132] = orth_d4m6_pl_pd[52];
	J[302] = x[22]*orth_d4m6_pl_pd[53];
	J[103] = orth_d4m6_pl_pd[50];
	J[238] = x[15]*orth_d4m6_pl_pd[51];
	J[99] = orth_d4m6_pl_pd[48];
	J[225] = x[14]*orth_d4m6_pl_pd[49];
	J[95] = orth_d4m6_pl_pd[46];
	J[212] = x[13]*orth_d4m6_pl_pd[47];
	J[91] = orth_d4m6_pl_pd[44];
	J[199] = x[12]*orth_d4m6_pl_pd[45];
	J[87] = orth_d4m6_pl_pd[42];
	J[186] = x[11]*orth_d4m6_pl_pd[43];
	J[83] = orth_d4m6_pl_pd[40];
	J[147] = x[10]*orth_d4m6_pl_pd[41];

   /*** derivatives for constraint 23 ***/

	J[145] = orth_d4m6_pl_pd[78];
	J[159] = x[25]*orth_d4m6_pl_pd[79];
	J[128] = orth_d4m6_pl_pd[76];
	J[329] = x[21]*orth_d4m6_pl_pd[77];
	J[124] = orth_d4m6_pl_pd[74];
	J[316] = x[20]*orth_d4m6_pl_pd[75];
	J[120] = orth_d4m6_pl_pd[72];
	J[303] = x[19]*orth_d4m6_pl_pd[73];
	J[104] = orth_d4m6_pl_pd[70];
	J[277] = x[15]*orth_d4m6_pl_pd[71];
	J[100] = orth_d4m6_pl_pd[68];
	J[264] = x[14]*orth_d4m6_pl_pd[69];
	J[96] = orth_d4m6_pl_pd[66];
	J[251] = x[13]*orth_d4m6_pl_pd[67];
	J[79] = orth_d4m6_pl_pd[64];
	J[200] = x[9]*orth_d4m6_pl_pd[65];
	J[64] = orth_d4m6_pl_pd[62];
	J[187] = x[7]*orth_d4m6_pl_pd[63];
	J[49] = orth_d4m6_pl_pd[60];
	J[148] = x[5]*orth_d4m6_pl_pd[61];

   /*** derivatives for constraint 24 ***/

	J[141] = orth_d4m6_pl_pd[98];
	J[160] = x[24]*orth_d4m6_pl_pd[99];
	J[129] = orth_d4m6_pl_pd[96];
	J[342] = x[21]*orth_d4m6_pl_pd[97];
	J[116] = orth_d4m6_pl_pd[94];
	J[317] = x[18]*orth_d4m6_pl_pd[95];
	J[112] = orth_d4m6_pl_pd[92];
	J[304] = x[17]*orth_d4m6_pl_pd[93];
	J[105] = orth_d4m6_pl_pd[90];
	J[290] = x[15]*orth_d4m6_pl_pd[91];
	J[92] = orth_d4m6_pl_pd[88];
	J[265] = x[12]*orth_d4m6_pl_pd[89];
	J[88] = orth_d4m6_pl_pd[86];
	J[252] = x[11]*orth_d4m6_pl_pd[87];
	J[80] = orth_d4m6_pl_pd[84];
	J[226] = x[9]*orth_d4m6_pl_pd[85];
	J[65] = orth_d4m6_pl_pd[82];
	J[213] = x[7]*orth_d4m6_pl_pd[83];
	J[34] = orth_d4m6_pl_pd[80];
	J[149] = x[3]*orth_d4m6_pl_pd[81];

   /*** derivatives for constraint 25 ***/

	J[137] = orth_d4m6_pl_pd[118];
	J[161] = x[23]*orth_d4m6_pl_pd[119];
	J[125] = orth_d4m6_pl_pd[116];
	J[343] = x[20]*orth_d4m6_pl_pd[117];
	J[117] = orth_d4m6_pl_pd[114];
	J[330] = x[18]*orth_d4m6_pl_pd[115];
	J[108] = orth_d4m6_pl_pd[112];
	J[305] = x[16]*orth_d4m6_pl_pd[113];
	J[101] = orth_d4m6_pl_pd[110];
	J[291] = x[14]*orth_d4m6_pl_pd[111];
	J[93] = orth_d4m6_pl_pd[108];
	J[278] = x[12]*orth_d4m6_pl_pd[109];
	J[84] = orth_d4m6_pl_pd[106];
	J[253] = x[10]*orth_d4m6_pl_pd[107];
	J[81] = orth_d4m6_pl_pd[104];
	J[239] = x[9]*orth_d4m6_pl_pd[105];
	J[50] = orth_d4m6_pl_pd[102];
	J[214] = x[5]*orth_d4m6_pl_pd[103];
	J[35] = orth_d4m6_pl_pd[100];
	J[188] = x[3]*orth_d4m6_pl_pd[101];

   /*** derivatives for constraint 26 ***/

	J[133] = orth_d4m6_pl_pd[138];
	J[162] = x[22]*orth_d4m6_pl_pd[139];
	J[121] = orth_d4m6_pl_pd[136];
	J[344] = x[19]*orth_d4m6_pl_pd[137];
	J[113] = orth_d4m6_pl_pd[134];
	J[331] = x[17]*orth_d4m6_pl_pd[135];
	J[109] = orth_d4m6_pl_pd[132];
	J[318] = x[16]*orth_d4m6_pl_pd[133];
	J[97] = orth_d4m6_pl_pd[130];
	J[292] = x[13]*orth_d4m6_pl_pd[131];
	J[89] = orth_d4m6_pl_pd[128];
	J[279] = x[11]*orth_d4m6_pl_pd[129];
	J[85] = orth_d4m6_pl_pd[126];
	J[266] = x[10]*orth_d4m6_pl_pd[127];
	J[66] = orth_d4m6_pl_pd[124];
	J[240] = x[7]*orth_d4m6_pl_pd[125];
	J[51] = orth_d4m6_pl_pd[122];
	J[227] = x[5]*orth_d4m6_pl_pd[123];
	J[36] = orth_d4m6_pl_pd[120];
	J[201] = x[3]*orth_d4m6_pl_pd[121];

   /*** derivatives for constraint 27 ***/

	J[215] = x[29];
	J[202] = x[30];
	J[228] = -x[28];
	J[189] = -x[31];
	J[241] = x[26];
	J[150] = x[32];

   /*** derivatives for constraint 28 ***/

	J[254] = x[29];
	J[203] = x[33];
	J[267] = -x[28];
	J[190] = -x[34];
	J[280] = x[26];
	J[151] = x[35];

   /*** derivatives for constraint 29 ***/

	J[306] = x[29];
	J[204] = x[37];
	J[319] = -x[28];
	J[191] = -x[38];
	J[332] = x[26];
	J[152] = x[39];

   /*** derivatives for constraint 30 ***/

	J[255] = x[31];
	J[229] = x[33];
	J[268] = -x[30];
	J[216] = -x[34];
	J[293] = x[26];
	J[153] = x[36];

   /*** derivatives for constraint 31 ***/

	J[307] = x[31];
	J[230] = x[37];
	J[320] = -x[30];
	J[217] = -x[38];
	J[345] = x[26];
	J[154] = x[40];

   /*** derivatives for constraint 32 ***/

	J[308] = x[34];
	J[269] = x[37];
	J[321] = -x[33];
	J[256] = -x[38];
	J[163] = x[26];
	J[155] = x[27];

   /*** derivatives for constraint 33 ***/

	J[257] = x[32];
	J[242] = x[33];
	J[281] = -x[30];
	J[218] = -x[35];
	J[294] = x[28];
	J[192] = x[36];

   /*** derivatives for constraint 34 ***/

	J[309] = x[32];
	J[243] = x[37];
	J[333] = -x[30];
	J[219] = -x[39];
	J[346] = x[28];
	J[193] = x[40];

   /*** derivatives for constraint 35 ***/

	J[310] = x[35];
	J[282] = x[37];
	J[334] = -x[33];
	J[258] = -x[39];
	J[194] = x[27];
	J[164] = x[28];

   /*** derivatives for constraint 36 ***/

	J[270] = x[32];
	J[244] = x[34];
	J[283] = -x[31];
	J[231] = -x[35];
	J[295] = x[29];
	J[205] = x[36];

   /*** derivatives for constraint 37 ***/

	J[322] = x[32];
	J[245] = x[38];
	J[335] = -x[31];
	J[232] = -x[39];
	J[347] = x[29];
	J[206] = x[40];

   /*** derivatives for constraint 38 ***/

	J[323] = x[35];
	J[284] = x[38];
	J[336] = -x[34];
	J[271] = -x[39];
	J[207] = x[27];
	J[165] = x[29];

   /*** derivatives for constraint 39 ***/

	J[311] = x[36];
	J[296] = x[37];
	J[348] = -x[33];
	J[259] = -x[40];
	J[220] = x[27];
	J[166] = x[30];

   /*** derivatives for constraint 40 ***/

	J[324] = x[36];
	J[297] = x[38];
	J[349] = -x[34];
	J[272] = -x[40];
	J[233] = x[27];
	J[167] = x[31];

   /*** derivatives for constraint 41 ***/

	J[337] = x[36];
	J[298] = x[39];
	J[350] = -x[35];
	J[285] = -x[40];
	J[246] = x[27];
	J[168] = x[32];

   /*** derivatives for constraint 42 ***/

	J[10] = 1.;
	J[21] = 1.;
	J[32] = 1.;
	J[47] = 1.;
	J[62] = 1.;
	J[77] = 1.;

   /*** derivatives for constraint 43 ***/

	J[156] = 1.;
	J[169] = -1.;

   /*** derivatives for constraint 44 ***/

	J[170] = -1.;
	J[195] = 1.;

   /*** derivatives for constraint 45 ***/

	J[171] = -1.;
	J[208] = 1.;

   /*** derivatives for constraint 46 ***/

	J[172] = -1.;
	J[221] = 1.;

   /*** derivatives for constraint 47 ***/

	J[173] = -1.;
	J[234] = 1.;

   /*** derivatives for constraint 48 ***/

	J[174] = -1.;
	J[247] = 1.;

   /*** derivatives for constraint 49 ***/

	J[175] = -1.;
	J[260] = 1.;

   /*** derivatives for constraint 50 ***/

	J[176] = -1.;
	J[273] = 1.;

   /*** derivatives for constraint 51 ***/

	J[177] = -1.;
	J[286] = 1.;

   /*** derivatives for constraint 52 ***/

	J[178] = -1.;
	J[299] = 1.;

   /*** derivatives for constraint 53 ***/

	J[179] = -1.;
	J[312] = 1.;

   /*** derivatives for constraint 54 ***/

	J[180] = -1.;
	J[325] = 1.;

   /*** derivatives for constraint 55 ***/

	J[181] = -1.;
	J[338] = 1.;

   /*** derivatives for constraint 56 ***/

	J[182] = -1.;
	J[351] = 1.;

   /*** derivatives for constraint 57 ***/

	J[157] = -1.;
	J[354] = -1.;

   /*** derivatives for constraint 58 ***/

	J[158] = 1.;
	J[355] = -1.;

   /*** derivatives for constraint 59 ***/

	J[196] = -1.;
	J[356] = -1.;

   /*** derivatives for constraint 60 ***/

	J[197] = 1.;
	J[357] = -1.;

   /*** derivatives for constraint 61 ***/

	J[209] = -1.;
	J[358] = -1.;

   /*** derivatives for constraint 62 ***/

	J[210] = 1.;
	J[359] = -1.;

   /*** derivatives for constraint 63 ***/

	J[222] = -1.;
	J[360] = -1.;

   /*** derivatives for constraint 64 ***/

	J[223] = 1.;
	J[361] = -1.;

   /*** derivatives for constraint 65 ***/

	J[235] = -1.;
	J[362] = -1.;

   /*** derivatives for constraint 66 ***/

	J[236] = 1.;
	J[363] = -1.;

   /*** derivatives for constraint 67 ***/

	J[248] = -1.;
	J[364] = -1.;

   /*** derivatives for constraint 68 ***/

	J[249] = 1.;
	J[365] = -1.;

   /*** derivatives for constraint 69 ***/

	J[261] = -1.;
	J[366] = -1.;

   /*** derivatives for constraint 70 ***/

	J[262] = 1.;
	J[367] = -1.;

   /*** derivatives for constraint 71 ***/

	J[274] = -1.;
	J[368] = -1.;

   /*** derivatives for constraint 72 ***/

	J[275] = 1.;
	J[369] = -1.;

   /*** derivatives for constraint 73 ***/

	J[287] = -1.;
	J[370] = -1.;

   /*** derivatives for constraint 74 ***/

	J[288] = 1.;
	J[371] = -1.;

   /*** derivatives for constraint 75 ***/

	J[300] = -1.;
	J[372] = -1.;

   /*** derivatives for constraint 76 ***/

	J[301] = 1.;
	J[373] = -1.;

   /*** derivatives for constraint 77 ***/

	J[313] = -1.;
	J[374] = -1.;

   /*** derivatives for constraint 78 ***/

	J[314] = 1.;
	J[375] = -1.;

   /*** derivatives for constraint 79 ***/

	J[326] = -1.;
	J[376] = -1.;

   /*** derivatives for constraint 80 ***/

	J[327] = 1.;
	J[377] = -1.;

   /*** derivatives for constraint 81 ***/

	J[339] = -1.;
	J[378] = -1.;

   /*** derivatives for constraint 82 ***/

	J[340] = 1.;
	J[379] = -1.;

   /*** derivatives for constraint 83 ***/

	J[352] = -1.;
	J[380] = -1.;

   /*** derivatives for constraint 84 ***/

	J[353] = 1.;
	J[381] = -1.;

   /*** derivatives for constraint 85 ***/

	J[183] = -1.;
	J[382] = -1.;

   /*** derivatives for constraint 86 ***/

	J[184] = 1.;
	J[383] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
