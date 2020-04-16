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
 fint orth_d3m6_auxcom_[1] = { 52 /* nlc */ };
 fint orth_d3m6_funcom_[558] = {
	25 /* nvar */,
	1 /* nobj */,
	62 /* ncon */,
	526 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	26,
	51,
	76,
	101,
	126,
	151,
	177,
	203,
	229,
	253,
	277,
	301,
	325,
	349,
	373,
	397,
	421,
	445,
	452,
	459,
	466,
	473,
	480,
	487,
	527,

	/* rownos */
	1,
	7,
	8,
	9,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	53,
	1,
	8,
	10,
	11,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	54,
	1,
	9,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	55,
	2,
	9,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	56,
	2,
	7,
	8,
	9,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	57,
	3,
	7,
	8,
	9,
	13,
	14,
	21,
	22,
	23,
	24,
	25,
	26,
	33,
	34,
	35,
	36,
	37,
	38,
	45,
	46,
	47,
	48,
	49,
	50,
	58,
	4,
	7,
	8,
	9,
	15,
	16,
	21,
	22,
	27,
	28,
	29,
	30,
	33,
	34,
	39,
	40,
	41,
	42,
	45,
	46,
	47,
	48,
	51,
	52,
	58,
	59,
	5,
	7,
	8,
	9,
	17,
	18,
	23,
	24,
	27,
	28,
	31,
	32,
	35,
	36,
	39,
	40,
	43,
	44,
	45,
	46,
	49,
	50,
	51,
	52,
	59,
	60,
	6,
	7,
	8,
	9,
	19,
	20,
	25,
	26,
	29,
	30,
	31,
	32,
	37,
	38,
	41,
	42,
	43,
	44,
	47,
	48,
	49,
	50,
	51,
	52,
	60,
	61,
	2,
	8,
	10,
	11,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	3,
	8,
	10,
	11,
	13,
	14,
	21,
	22,
	23,
	24,
	25,
	26,
	33,
	34,
	35,
	36,
	37,
	38,
	45,
	46,
	47,
	48,
	49,
	50,
	3,
	9,
	11,
	12,
	13,
	14,
	21,
	22,
	23,
	24,
	25,
	26,
	33,
	34,
	35,
	36,
	37,
	38,
	45,
	46,
	47,
	48,
	49,
	50,
	4,
	8,
	10,
	11,
	15,
	16,
	21,
	22,
	27,
	28,
	29,
	30,
	33,
	34,
	39,
	40,
	41,
	42,
	45,
	46,
	47,
	48,
	51,
	52,
	4,
	9,
	11,
	12,
	15,
	16,
	21,
	22,
	27,
	28,
	29,
	30,
	33,
	34,
	39,
	40,
	41,
	42,
	45,
	46,
	47,
	48,
	51,
	52,
	5,
	8,
	10,
	11,
	17,
	18,
	23,
	24,
	27,
	28,
	31,
	32,
	35,
	36,
	39,
	40,
	43,
	44,
	45,
	46,
	49,
	50,
	51,
	52,
	5,
	9,
	11,
	12,
	17,
	18,
	23,
	24,
	27,
	28,
	31,
	32,
	35,
	36,
	39,
	40,
	43,
	44,
	45,
	46,
	49,
	50,
	51,
	52,
	6,
	8,
	10,
	11,
	19,
	20,
	25,
	26,
	29,
	30,
	31,
	32,
	37,
	38,
	41,
	42,
	43,
	44,
	47,
	48,
	49,
	50,
	51,
	52,
	6,
	9,
	11,
	12,
	19,
	20,
	25,
	26,
	29,
	30,
	31,
	32,
	37,
	38,
	41,
	42,
	43,
	44,
	47,
	48,
	49,
	50,
	51,
	52,
	7,
	8,
	9,
	10,
	11,
	12,
	62,
	7,
	8,
	9,
	10,
	11,
	12,
	62,
	7,
	8,
	9,
	10,
	11,
	12,
	62,
	7,
	8,
	9,
	10,
	11,
	12,
	62,
	7,
	8,
	9,
	10,
	11,
	12,
	62,
	7,
	8,
	9,
	10,
	11,
	12,
	62,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52 };

 real orth_d3m6_boundc_[1+50+124] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		0.,
		0.,
		1.,
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
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		3.,
		3.};

 real orth_d3m6_x0comn_[25] = {
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

 static real orth_d3m6_pd[312];
static real orth_d3m6_old_x[25];
static int orth_d3m6_xkind = -1;

 static int
orth_d3m6_xcheck(real *x)
{
	real *x1 = orth_d3m6_old_x, *xe = x + 25;
	errno = 0;
	if (orth_d3m6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	orth_d3m6_xkind = 0;
	return 1;
	}
 real
orth_d3m6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (orth_d3m6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[24];
	;}

	if (wantfg & 2) {
	g[24] = 1.;
	}

	return rv;
}

 void
orth_d3m6_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (orth_d3m6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	orth_d3m6_pd[0] = x[0] + x[0];
	v[1] = x[1] * x[1];
	orth_d3m6_pd[1] = x[1] + x[1];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	orth_d3m6_pd[2] = x[2] + x[2];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[4] * x[4];
	orth_d3m6_pd[3] = x[4] + x[4];
	v[1] = x[9] * x[9];
	orth_d3m6_pd[4] = x[9] + x[9];
	v[0] += v[1];
	v[1] = x[3] * x[3];
	orth_d3m6_pd[5] = x[3] + x[3];
	v[0] += v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[5] * x[5];
	orth_d3m6_pd[6] = x[5] + x[5];
	v[1] = x[10] * x[10];
	orth_d3m6_pd[7] = x[10] + x[10];
	v[0] += v[1];
	v[1] = x[11] * x[11];
	orth_d3m6_pd[8] = x[11] + x[11];
	v[0] += v[1];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[6] * x[6];
	orth_d3m6_pd[9] = x[6] + x[6];
	v[1] = x[12] * x[12];
	orth_d3m6_pd[10] = x[12] + x[12];
	v[0] += v[1];
	v[1] = x[13] * x[13];
	orth_d3m6_pd[11] = x[13] + x[13];
	v[0] += v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[7] * x[7];
	orth_d3m6_pd[12] = x[7] + x[7];
	v[1] = x[14] * x[14];
	orth_d3m6_pd[13] = x[14] + x[14];
	v[0] += v[1];
	v[1] = x[15] * x[15];
	orth_d3m6_pd[14] = x[15] + x[15];
	v[0] += v[1];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[8] * x[8];
	orth_d3m6_pd[15] = x[8] + x[8];
	v[1] = x[16] * x[16];
	orth_d3m6_pd[16] = x[16] + x[16];
	v[0] += v[1];
	v[1] = x[17] * x[17];
	orth_d3m6_pd[17] = x[17] + x[17];
	v[0] += v[1];
	c[5] = v[0];

  /***  constraint 7  ***/

	orth_d3m6_pd[18] = x[0] * x[0];
	orth_d3m6_pd[19] = x[0] + x[0];
	v[0] = orth_d3m6_pd[18] * x[18];
	orth_d3m6_pd[20] = x[4] * x[4];
	orth_d3m6_pd[21] = x[4] + x[4];
	v[1] = orth_d3m6_pd[20] * x[19];
	v[0] += v[1];
	orth_d3m6_pd[22] = x[5] * x[5];
	orth_d3m6_pd[23] = x[5] + x[5];
	v[1] = orth_d3m6_pd[22] * x[20];
	v[0] += v[1];
	orth_d3m6_pd[24] = x[6] * x[6];
	orth_d3m6_pd[25] = x[6] + x[6];
	v[1] = orth_d3m6_pd[24] * x[21];
	v[0] += v[1];
	orth_d3m6_pd[26] = x[7] * x[7];
	orth_d3m6_pd[27] = x[7] + x[7];
	v[1] = orth_d3m6_pd[26] * x[22];
	v[0] += v[1];
	orth_d3m6_pd[28] = x[8] * x[8];
	orth_d3m6_pd[29] = x[8] + x[8];
	v[1] = orth_d3m6_pd[28] * x[23];
	v[0] += v[1];
	c[6] = v[0];

  /***  constraint 8  ***/

	orth_d3m6_pd[30] = x[18] * x[0];
	v[0] = orth_d3m6_pd[30] * x[1];
	orth_d3m6_pd[31] = x[19] * x[4];
	v[1] = orth_d3m6_pd[31] * x[9];
	v[0] += v[1];
	orth_d3m6_pd[32] = x[20] * x[5];
	v[1] = orth_d3m6_pd[32] * x[10];
	v[0] += v[1];
	orth_d3m6_pd[33] = x[21] * x[6];
	v[1] = orth_d3m6_pd[33] * x[12];
	v[0] += v[1];
	orth_d3m6_pd[34] = x[22] * x[7];
	v[1] = orth_d3m6_pd[34] * x[14];
	v[0] += v[1];
	orth_d3m6_pd[35] = x[23] * x[8];
	v[1] = orth_d3m6_pd[35] * x[16];
	v[0] += v[1];
	c[7] = v[0];

  /***  constraint 9  ***/

	orth_d3m6_pd[36] = x[18] * x[0];
	v[0] = orth_d3m6_pd[36] * x[2];
	orth_d3m6_pd[37] = x[19] * x[4];
	v[1] = orth_d3m6_pd[37] * x[3];
	v[0] += v[1];
	orth_d3m6_pd[38] = x[20] * x[5];
	v[1] = orth_d3m6_pd[38] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[39] = x[21] * x[6];
	v[1] = orth_d3m6_pd[39] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[40] = x[22] * x[7];
	v[1] = orth_d3m6_pd[40] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[41] = x[23] * x[8];
	v[1] = orth_d3m6_pd[41] * x[17];
	v[0] += v[1];
	c[8] = v[0];

  /***  constraint 10  ***/

	orth_d3m6_pd[42] = x[1] * x[1];
	orth_d3m6_pd[43] = x[1] + x[1];
	v[0] = orth_d3m6_pd[42] * x[18];
	orth_d3m6_pd[44] = x[9] * x[9];
	orth_d3m6_pd[45] = x[9] + x[9];
	v[1] = orth_d3m6_pd[44] * x[19];
	v[0] += v[1];
	orth_d3m6_pd[46] = x[10] * x[10];
	orth_d3m6_pd[47] = x[10] + x[10];
	v[1] = orth_d3m6_pd[46] * x[20];
	v[0] += v[1];
	orth_d3m6_pd[48] = x[12] * x[12];
	orth_d3m6_pd[49] = x[12] + x[12];
	v[1] = orth_d3m6_pd[48] * x[21];
	v[0] += v[1];
	orth_d3m6_pd[50] = x[14] * x[14];
	orth_d3m6_pd[51] = x[14] + x[14];
	v[1] = orth_d3m6_pd[50] * x[22];
	v[0] += v[1];
	orth_d3m6_pd[52] = x[16] * x[16];
	orth_d3m6_pd[53] = x[16] + x[16];
	v[1] = orth_d3m6_pd[52] * x[23];
	v[0] += v[1];
	c[9] = v[0];

  /***  constraint 11  ***/

	orth_d3m6_pd[54] = x[18] * x[1];
	v[0] = orth_d3m6_pd[54] * x[2];
	orth_d3m6_pd[55] = x[19] * x[9];
	v[1] = orth_d3m6_pd[55] * x[3];
	v[0] += v[1];
	orth_d3m6_pd[56] = x[20] * x[10];
	v[1] = orth_d3m6_pd[56] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[57] = x[21] * x[12];
	v[1] = orth_d3m6_pd[57] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[58] = x[22] * x[14];
	v[1] = orth_d3m6_pd[58] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[59] = x[23] * x[16];
	v[1] = orth_d3m6_pd[59] * x[17];
	v[0] += v[1];
	c[10] = v[0];

  /***  constraint 12  ***/

	orth_d3m6_pd[60] = x[2] * x[2];
	orth_d3m6_pd[61] = x[2] + x[2];
	v[0] = orth_d3m6_pd[60] * x[18];
	orth_d3m6_pd[62] = x[3] * x[3];
	orth_d3m6_pd[63] = x[3] + x[3];
	v[1] = orth_d3m6_pd[62] * x[19];
	v[0] += v[1];
	orth_d3m6_pd[64] = x[11] * x[11];
	orth_d3m6_pd[65] = x[11] + x[11];
	v[1] = orth_d3m6_pd[64] * x[20];
	v[0] += v[1];
	orth_d3m6_pd[66] = x[13] * x[13];
	orth_d3m6_pd[67] = x[13] + x[13];
	v[1] = orth_d3m6_pd[66] * x[21];
	v[0] += v[1];
	orth_d3m6_pd[68] = x[15] * x[15];
	orth_d3m6_pd[69] = x[15] + x[15];
	v[1] = orth_d3m6_pd[68] * x[22];
	v[0] += v[1];
	orth_d3m6_pd[70] = x[17] * x[17];
	orth_d3m6_pd[71] = x[17] + x[17];
	v[1] = orth_d3m6_pd[70] * x[23];
	v[0] += v[1];
	c[11] = v[0];

  /***  constraint 13  ***/

	orth_d3m6_pd[72] = x[4] * x[10];
	v[0] = orth_d3m6_pd[72] * x[2];
	orth_d3m6_pd[73] = x[5] * x[9];
	v[1] = orth_d3m6_pd[73] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[74] = x[5] * x[1];
	v[2] = orth_d3m6_pd[74] * x[3];
	v[0] += v[2];
	orth_d3m6_pd[75] = x[0] * x[10];
	v[2] = orth_d3m6_pd[75] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[76] = x[4] * x[1];
	v[1] = orth_d3m6_pd[76] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[77] = x[0] * x[9];
	v[2] = orth_d3m6_pd[77] * x[11];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[12] = t1;

  /***  constraint 14  ***/

	orth_d3m6_pd[78] = x[5] * x[9];
	v[0] = orth_d3m6_pd[78] * x[2];
	orth_d3m6_pd[79] = x[4] * x[10];
	v[1] = orth_d3m6_pd[79] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[80] = x[5] * x[1];
	v[2] = orth_d3m6_pd[80] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[81] = x[0] * x[10];
	v[1] = orth_d3m6_pd[81] * x[3];
	v[0] += v[1];
	orth_d3m6_pd[82] = x[4] * x[1];
	v[1] = orth_d3m6_pd[82] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[83] = x[0] * x[9];
	v[1] = orth_d3m6_pd[83] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[13] = t1;

  /***  constraint 15  ***/

	orth_d3m6_pd[84] = x[4] * x[12];
	v[0] = orth_d3m6_pd[84] * x[2];
	orth_d3m6_pd[85] = x[6] * x[9];
	v[1] = orth_d3m6_pd[85] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[86] = x[6] * x[1];
	v[2] = orth_d3m6_pd[86] * x[3];
	v[0] += v[2];
	orth_d3m6_pd[87] = x[0] * x[12];
	v[2] = orth_d3m6_pd[87] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[88] = x[4] * x[1];
	v[1] = orth_d3m6_pd[88] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[89] = x[0] * x[9];
	v[2] = orth_d3m6_pd[89] * x[13];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[14] = t1;

  /***  constraint 16  ***/

	orth_d3m6_pd[90] = x[6] * x[9];
	v[0] = orth_d3m6_pd[90] * x[2];
	orth_d3m6_pd[91] = x[4] * x[12];
	v[1] = orth_d3m6_pd[91] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[92] = x[6] * x[1];
	v[2] = orth_d3m6_pd[92] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[93] = x[0] * x[12];
	v[1] = orth_d3m6_pd[93] * x[3];
	v[0] += v[1];
	orth_d3m6_pd[94] = x[4] * x[1];
	v[1] = orth_d3m6_pd[94] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[95] = x[0] * x[9];
	v[1] = orth_d3m6_pd[95] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[15] = t1;

  /***  constraint 17  ***/

	orth_d3m6_pd[96] = x[4] * x[14];
	v[0] = orth_d3m6_pd[96] * x[2];
	orth_d3m6_pd[97] = x[7] * x[9];
	v[1] = orth_d3m6_pd[97] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[98] = x[7] * x[1];
	v[2] = orth_d3m6_pd[98] * x[3];
	v[0] += v[2];
	orth_d3m6_pd[99] = x[0] * x[14];
	v[2] = orth_d3m6_pd[99] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[100] = x[4] * x[1];
	v[1] = orth_d3m6_pd[100] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[101] = x[0] * x[9];
	v[2] = orth_d3m6_pd[101] * x[15];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[16] = t1;

  /***  constraint 18  ***/

	orth_d3m6_pd[102] = x[7] * x[9];
	v[0] = orth_d3m6_pd[102] * x[2];
	orth_d3m6_pd[103] = x[4] * x[14];
	v[1] = orth_d3m6_pd[103] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[104] = x[7] * x[1];
	v[2] = orth_d3m6_pd[104] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[105] = x[0] * x[14];
	v[1] = orth_d3m6_pd[105] * x[3];
	v[0] += v[1];
	orth_d3m6_pd[106] = x[4] * x[1];
	v[1] = orth_d3m6_pd[106] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[107] = x[0] * x[9];
	v[1] = orth_d3m6_pd[107] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[17] = t1;

  /***  constraint 19  ***/

	orth_d3m6_pd[108] = x[4] * x[16];
	v[0] = orth_d3m6_pd[108] * x[2];
	orth_d3m6_pd[109] = x[8] * x[9];
	v[1] = orth_d3m6_pd[109] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[110] = x[8] * x[1];
	v[2] = orth_d3m6_pd[110] * x[3];
	v[0] += v[2];
	orth_d3m6_pd[111] = x[0] * x[16];
	v[2] = orth_d3m6_pd[111] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[112] = x[4] * x[1];
	v[1] = orth_d3m6_pd[112] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[113] = x[0] * x[9];
	v[2] = orth_d3m6_pd[113] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[18] = t1;

  /***  constraint 20  ***/

	orth_d3m6_pd[114] = x[8] * x[9];
	v[0] = orth_d3m6_pd[114] * x[2];
	orth_d3m6_pd[115] = x[4] * x[16];
	v[1] = orth_d3m6_pd[115] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[116] = x[8] * x[1];
	v[2] = orth_d3m6_pd[116] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[117] = x[0] * x[16];
	v[1] = orth_d3m6_pd[117] * x[3];
	v[0] += v[1];
	orth_d3m6_pd[118] = x[4] * x[1];
	v[1] = orth_d3m6_pd[118] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[119] = x[0] * x[9];
	v[1] = orth_d3m6_pd[119] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[19] = t1;

  /***  constraint 21  ***/

	orth_d3m6_pd[120] = x[5] * x[12];
	v[0] = orth_d3m6_pd[120] * x[2];
	orth_d3m6_pd[121] = x[6] * x[10];
	v[1] = orth_d3m6_pd[121] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[122] = x[6] * x[1];
	v[2] = orth_d3m6_pd[122] * x[11];
	v[0] += v[2];
	orth_d3m6_pd[123] = x[0] * x[12];
	v[2] = orth_d3m6_pd[123] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[124] = x[5] * x[1];
	v[1] = orth_d3m6_pd[124] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[125] = x[0] * x[10];
	v[2] = orth_d3m6_pd[125] * x[13];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[20] = t1;

  /***  constraint 22  ***/

	orth_d3m6_pd[126] = x[6] * x[10];
	v[0] = orth_d3m6_pd[126] * x[2];
	orth_d3m6_pd[127] = x[5] * x[12];
	v[1] = orth_d3m6_pd[127] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[128] = x[6] * x[1];
	v[2] = orth_d3m6_pd[128] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[129] = x[0] * x[12];
	v[1] = orth_d3m6_pd[129] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[130] = x[5] * x[1];
	v[1] = orth_d3m6_pd[130] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[131] = x[0] * x[10];
	v[1] = orth_d3m6_pd[131] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[21] = t1;

  /***  constraint 23  ***/

	orth_d3m6_pd[132] = x[5] * x[14];
	v[0] = orth_d3m6_pd[132] * x[2];
	orth_d3m6_pd[133] = x[7] * x[10];
	v[1] = orth_d3m6_pd[133] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[134] = x[7] * x[1];
	v[2] = orth_d3m6_pd[134] * x[11];
	v[0] += v[2];
	orth_d3m6_pd[135] = x[0] * x[14];
	v[2] = orth_d3m6_pd[135] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[136] = x[5] * x[1];
	v[1] = orth_d3m6_pd[136] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[137] = x[0] * x[10];
	v[2] = orth_d3m6_pd[137] * x[15];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[22] = t1;

  /***  constraint 24  ***/

	orth_d3m6_pd[138] = x[7] * x[10];
	v[0] = orth_d3m6_pd[138] * x[2];
	orth_d3m6_pd[139] = x[5] * x[14];
	v[1] = orth_d3m6_pd[139] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[140] = x[7] * x[1];
	v[2] = orth_d3m6_pd[140] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[141] = x[0] * x[14];
	v[1] = orth_d3m6_pd[141] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[142] = x[5] * x[1];
	v[1] = orth_d3m6_pd[142] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[143] = x[0] * x[10];
	v[1] = orth_d3m6_pd[143] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[23] = t1;

  /***  constraint 25  ***/

	orth_d3m6_pd[144] = x[5] * x[16];
	v[0] = orth_d3m6_pd[144] * x[2];
	orth_d3m6_pd[145] = x[8] * x[10];
	v[1] = orth_d3m6_pd[145] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[146] = x[8] * x[1];
	v[2] = orth_d3m6_pd[146] * x[11];
	v[0] += v[2];
	orth_d3m6_pd[147] = x[0] * x[16];
	v[2] = orth_d3m6_pd[147] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[148] = x[5] * x[1];
	v[1] = orth_d3m6_pd[148] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[149] = x[0] * x[10];
	v[2] = orth_d3m6_pd[149] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[24] = t1;

  /***  constraint 26  ***/

	orth_d3m6_pd[150] = x[8] * x[10];
	v[0] = orth_d3m6_pd[150] * x[2];
	orth_d3m6_pd[151] = x[5] * x[16];
	v[1] = orth_d3m6_pd[151] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[152] = x[8] * x[1];
	v[2] = orth_d3m6_pd[152] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[153] = x[0] * x[16];
	v[1] = orth_d3m6_pd[153] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[154] = x[5] * x[1];
	v[1] = orth_d3m6_pd[154] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[155] = x[0] * x[10];
	v[1] = orth_d3m6_pd[155] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[25] = t1;

  /***  constraint 27  ***/

	orth_d3m6_pd[156] = x[6] * x[14];
	v[0] = orth_d3m6_pd[156] * x[2];
	orth_d3m6_pd[157] = x[7] * x[12];
	v[1] = orth_d3m6_pd[157] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[158] = x[7] * x[1];
	v[2] = orth_d3m6_pd[158] * x[13];
	v[0] += v[2];
	orth_d3m6_pd[159] = x[0] * x[14];
	v[2] = orth_d3m6_pd[159] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[160] = x[6] * x[1];
	v[1] = orth_d3m6_pd[160] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[161] = x[0] * x[12];
	v[2] = orth_d3m6_pd[161] * x[15];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[26] = t1;

  /***  constraint 28  ***/

	orth_d3m6_pd[162] = x[7] * x[12];
	v[0] = orth_d3m6_pd[162] * x[2];
	orth_d3m6_pd[163] = x[6] * x[14];
	v[1] = orth_d3m6_pd[163] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[164] = x[7] * x[1];
	v[2] = orth_d3m6_pd[164] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[165] = x[0] * x[14];
	v[1] = orth_d3m6_pd[165] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[166] = x[6] * x[1];
	v[1] = orth_d3m6_pd[166] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[167] = x[0] * x[12];
	v[1] = orth_d3m6_pd[167] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[27] = t1;

  /***  constraint 29  ***/

	orth_d3m6_pd[168] = x[6] * x[16];
	v[0] = orth_d3m6_pd[168] * x[2];
	orth_d3m6_pd[169] = x[8] * x[12];
	v[1] = orth_d3m6_pd[169] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[170] = x[8] * x[1];
	v[2] = orth_d3m6_pd[170] * x[13];
	v[0] += v[2];
	orth_d3m6_pd[171] = x[0] * x[16];
	v[2] = orth_d3m6_pd[171] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[172] = x[6] * x[1];
	v[1] = orth_d3m6_pd[172] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[173] = x[0] * x[12];
	v[2] = orth_d3m6_pd[173] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[28] = t1;

  /***  constraint 30  ***/

	orth_d3m6_pd[174] = x[8] * x[12];
	v[0] = orth_d3m6_pd[174] * x[2];
	orth_d3m6_pd[175] = x[6] * x[16];
	v[1] = orth_d3m6_pd[175] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[176] = x[8] * x[1];
	v[2] = orth_d3m6_pd[176] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[177] = x[0] * x[16];
	v[1] = orth_d3m6_pd[177] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[178] = x[6] * x[1];
	v[1] = orth_d3m6_pd[178] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[179] = x[0] * x[12];
	v[1] = orth_d3m6_pd[179] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[29] = t1;

  /***  constraint 31  ***/

	orth_d3m6_pd[180] = x[7] * x[16];
	v[0] = orth_d3m6_pd[180] * x[2];
	orth_d3m6_pd[181] = x[8] * x[14];
	v[1] = orth_d3m6_pd[181] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[182] = x[8] * x[1];
	v[2] = orth_d3m6_pd[182] * x[15];
	v[0] += v[2];
	orth_d3m6_pd[183] = x[0] * x[16];
	v[2] = orth_d3m6_pd[183] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[184] = x[7] * x[1];
	v[1] = orth_d3m6_pd[184] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[185] = x[0] * x[14];
	v[2] = orth_d3m6_pd[185] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[30] = t1;

  /***  constraint 32  ***/

	orth_d3m6_pd[186] = x[8] * x[14];
	v[0] = orth_d3m6_pd[186] * x[2];
	orth_d3m6_pd[187] = x[7] * x[16];
	v[1] = orth_d3m6_pd[187] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[188] = x[8] * x[1];
	v[2] = orth_d3m6_pd[188] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[189] = x[0] * x[16];
	v[1] = orth_d3m6_pd[189] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[190] = x[7] * x[1];
	v[1] = orth_d3m6_pd[190] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[191] = x[0] * x[14];
	v[1] = orth_d3m6_pd[191] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[31] = t1;

  /***  constraint 33  ***/

	orth_d3m6_pd[192] = x[5] * x[12];
	v[0] = orth_d3m6_pd[192] * x[3];
	orth_d3m6_pd[193] = x[6] * x[10];
	v[1] = orth_d3m6_pd[193] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[194] = x[6] * x[9];
	v[2] = orth_d3m6_pd[194] * x[11];
	v[0] += v[2];
	orth_d3m6_pd[195] = x[4] * x[12];
	v[2] = orth_d3m6_pd[195] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[196] = x[5] * x[9];
	v[1] = orth_d3m6_pd[196] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[197] = x[4] * x[10];
	v[2] = orth_d3m6_pd[197] * x[13];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[32] = t1;

  /***  constraint 34  ***/

	orth_d3m6_pd[198] = x[6] * x[10];
	v[0] = orth_d3m6_pd[198] * x[3];
	orth_d3m6_pd[199] = x[5] * x[12];
	v[1] = orth_d3m6_pd[199] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[200] = x[6] * x[9];
	v[2] = orth_d3m6_pd[200] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[201] = x[4] * x[12];
	v[1] = orth_d3m6_pd[201] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[202] = x[5] * x[9];
	v[1] = orth_d3m6_pd[202] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[203] = x[4] * x[10];
	v[1] = orth_d3m6_pd[203] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[33] = t1;

  /***  constraint 35  ***/

	orth_d3m6_pd[204] = x[5] * x[14];
	v[0] = orth_d3m6_pd[204] * x[3];
	orth_d3m6_pd[205] = x[7] * x[10];
	v[1] = orth_d3m6_pd[205] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[206] = x[7] * x[9];
	v[2] = orth_d3m6_pd[206] * x[11];
	v[0] += v[2];
	orth_d3m6_pd[207] = x[4] * x[14];
	v[2] = orth_d3m6_pd[207] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[208] = x[5] * x[9];
	v[1] = orth_d3m6_pd[208] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[209] = x[4] * x[10];
	v[2] = orth_d3m6_pd[209] * x[15];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[34] = t1;

  /***  constraint 36  ***/

	orth_d3m6_pd[210] = x[7] * x[10];
	v[0] = orth_d3m6_pd[210] * x[3];
	orth_d3m6_pd[211] = x[5] * x[14];
	v[1] = orth_d3m6_pd[211] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[212] = x[7] * x[9];
	v[2] = orth_d3m6_pd[212] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[213] = x[4] * x[14];
	v[1] = orth_d3m6_pd[213] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[214] = x[5] * x[9];
	v[1] = orth_d3m6_pd[214] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[215] = x[4] * x[10];
	v[1] = orth_d3m6_pd[215] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[35] = t1;

  /***  constraint 37  ***/

	orth_d3m6_pd[216] = x[5] * x[16];
	v[0] = orth_d3m6_pd[216] * x[3];
	orth_d3m6_pd[217] = x[8] * x[10];
	v[1] = orth_d3m6_pd[217] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[218] = x[8] * x[9];
	v[2] = orth_d3m6_pd[218] * x[11];
	v[0] += v[2];
	orth_d3m6_pd[219] = x[4] * x[16];
	v[2] = orth_d3m6_pd[219] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[220] = x[5] * x[9];
	v[1] = orth_d3m6_pd[220] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[221] = x[4] * x[10];
	v[2] = orth_d3m6_pd[221] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[36] = t1;

  /***  constraint 38  ***/

	orth_d3m6_pd[222] = x[8] * x[10];
	v[0] = orth_d3m6_pd[222] * x[3];
	orth_d3m6_pd[223] = x[5] * x[16];
	v[1] = orth_d3m6_pd[223] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[224] = x[8] * x[9];
	v[2] = orth_d3m6_pd[224] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[225] = x[4] * x[16];
	v[1] = orth_d3m6_pd[225] * x[11];
	v[0] += v[1];
	orth_d3m6_pd[226] = x[5] * x[9];
	v[1] = orth_d3m6_pd[226] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[227] = x[4] * x[10];
	v[1] = orth_d3m6_pd[227] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[37] = t1;

  /***  constraint 39  ***/

	orth_d3m6_pd[228] = x[6] * x[14];
	v[0] = orth_d3m6_pd[228] * x[3];
	orth_d3m6_pd[229] = x[7] * x[12];
	v[1] = orth_d3m6_pd[229] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[230] = x[7] * x[9];
	v[2] = orth_d3m6_pd[230] * x[13];
	v[0] += v[2];
	orth_d3m6_pd[231] = x[4] * x[14];
	v[2] = orth_d3m6_pd[231] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[232] = x[6] * x[9];
	v[1] = orth_d3m6_pd[232] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[233] = x[4] * x[12];
	v[2] = orth_d3m6_pd[233] * x[15];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[38] = t1;

  /***  constraint 40  ***/

	orth_d3m6_pd[234] = x[7] * x[12];
	v[0] = orth_d3m6_pd[234] * x[3];
	orth_d3m6_pd[235] = x[6] * x[14];
	v[1] = orth_d3m6_pd[235] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[236] = x[7] * x[9];
	v[2] = orth_d3m6_pd[236] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[237] = x[4] * x[14];
	v[1] = orth_d3m6_pd[237] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[238] = x[6] * x[9];
	v[1] = orth_d3m6_pd[238] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[239] = x[4] * x[12];
	v[1] = orth_d3m6_pd[239] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[39] = t1;

  /***  constraint 41  ***/

	orth_d3m6_pd[240] = x[6] * x[16];
	v[0] = orth_d3m6_pd[240] * x[3];
	orth_d3m6_pd[241] = x[8] * x[12];
	v[1] = orth_d3m6_pd[241] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[242] = x[8] * x[9];
	v[2] = orth_d3m6_pd[242] * x[13];
	v[0] += v[2];
	orth_d3m6_pd[243] = x[4] * x[16];
	v[2] = orth_d3m6_pd[243] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[244] = x[6] * x[9];
	v[1] = orth_d3m6_pd[244] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[245] = x[4] * x[12];
	v[2] = orth_d3m6_pd[245] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[40] = t1;

  /***  constraint 42  ***/

	orth_d3m6_pd[246] = x[8] * x[12];
	v[0] = orth_d3m6_pd[246] * x[3];
	orth_d3m6_pd[247] = x[6] * x[16];
	v[1] = orth_d3m6_pd[247] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[248] = x[8] * x[9];
	v[2] = orth_d3m6_pd[248] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[249] = x[4] * x[16];
	v[1] = orth_d3m6_pd[249] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[250] = x[6] * x[9];
	v[1] = orth_d3m6_pd[250] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[251] = x[4] * x[12];
	v[1] = orth_d3m6_pd[251] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[41] = t1;

  /***  constraint 43  ***/

	orth_d3m6_pd[252] = x[7] * x[16];
	v[0] = orth_d3m6_pd[252] * x[3];
	orth_d3m6_pd[253] = x[8] * x[14];
	v[1] = orth_d3m6_pd[253] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[254] = x[8] * x[9];
	v[2] = orth_d3m6_pd[254] * x[15];
	v[0] += v[2];
	orth_d3m6_pd[255] = x[4] * x[16];
	v[2] = orth_d3m6_pd[255] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[256] = x[7] * x[9];
	v[1] = orth_d3m6_pd[256] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[257] = x[4] * x[14];
	v[2] = orth_d3m6_pd[257] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[42] = t1;

  /***  constraint 44  ***/

	orth_d3m6_pd[258] = x[8] * x[14];
	v[0] = orth_d3m6_pd[258] * x[3];
	orth_d3m6_pd[259] = x[7] * x[16];
	v[1] = orth_d3m6_pd[259] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[260] = x[8] * x[9];
	v[2] = orth_d3m6_pd[260] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[261] = x[4] * x[16];
	v[1] = orth_d3m6_pd[261] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[262] = x[7] * x[9];
	v[1] = orth_d3m6_pd[262] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[263] = x[4] * x[14];
	v[1] = orth_d3m6_pd[263] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[43] = t1;

  /***  constraint 45  ***/

	orth_d3m6_pd[264] = x[6] * x[14];
	v[0] = orth_d3m6_pd[264] * x[11];
	orth_d3m6_pd[265] = x[7] * x[12];
	v[1] = orth_d3m6_pd[265] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[266] = x[7] * x[10];
	v[2] = orth_d3m6_pd[266] * x[13];
	v[0] += v[2];
	orth_d3m6_pd[267] = x[5] * x[14];
	v[2] = orth_d3m6_pd[267] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[268] = x[6] * x[10];
	v[1] = orth_d3m6_pd[268] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[269] = x[5] * x[12];
	v[2] = orth_d3m6_pd[269] * x[15];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[44] = t1;

  /***  constraint 46  ***/

	orth_d3m6_pd[270] = x[7] * x[12];
	v[0] = orth_d3m6_pd[270] * x[11];
	orth_d3m6_pd[271] = x[6] * x[14];
	v[1] = orth_d3m6_pd[271] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[272] = x[7] * x[10];
	v[2] = orth_d3m6_pd[272] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[273] = x[5] * x[14];
	v[1] = orth_d3m6_pd[273] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[274] = x[6] * x[10];
	v[1] = orth_d3m6_pd[274] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[275] = x[5] * x[12];
	v[1] = orth_d3m6_pd[275] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[45] = t1;

  /***  constraint 47  ***/

	orth_d3m6_pd[276] = x[6] * x[16];
	v[0] = orth_d3m6_pd[276] * x[11];
	orth_d3m6_pd[277] = x[8] * x[12];
	v[1] = orth_d3m6_pd[277] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[278] = x[8] * x[10];
	v[2] = orth_d3m6_pd[278] * x[13];
	v[0] += v[2];
	orth_d3m6_pd[279] = x[5] * x[16];
	v[2] = orth_d3m6_pd[279] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[280] = x[6] * x[10];
	v[1] = orth_d3m6_pd[280] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[281] = x[5] * x[12];
	v[2] = orth_d3m6_pd[281] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[46] = t1;

  /***  constraint 48  ***/

	orth_d3m6_pd[282] = x[8] * x[12];
	v[0] = orth_d3m6_pd[282] * x[11];
	orth_d3m6_pd[283] = x[6] * x[16];
	v[1] = orth_d3m6_pd[283] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[284] = x[8] * x[10];
	v[2] = orth_d3m6_pd[284] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[285] = x[5] * x[16];
	v[1] = orth_d3m6_pd[285] * x[13];
	v[0] += v[1];
	orth_d3m6_pd[286] = x[6] * x[10];
	v[1] = orth_d3m6_pd[286] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[287] = x[5] * x[12];
	v[1] = orth_d3m6_pd[287] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[47] = t1;

  /***  constraint 49  ***/

	orth_d3m6_pd[288] = x[7] * x[16];
	v[0] = orth_d3m6_pd[288] * x[11];
	orth_d3m6_pd[289] = x[8] * x[14];
	v[1] = orth_d3m6_pd[289] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[290] = x[8] * x[10];
	v[2] = orth_d3m6_pd[290] * x[15];
	v[0] += v[2];
	orth_d3m6_pd[291] = x[5] * x[16];
	v[2] = orth_d3m6_pd[291] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[292] = x[7] * x[10];
	v[1] = orth_d3m6_pd[292] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[293] = x[5] * x[14];
	v[2] = orth_d3m6_pd[293] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[48] = t1;

  /***  constraint 50  ***/

	orth_d3m6_pd[294] = x[8] * x[14];
	v[0] = orth_d3m6_pd[294] * x[11];
	orth_d3m6_pd[295] = x[7] * x[16];
	v[1] = orth_d3m6_pd[295] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[296] = x[8] * x[10];
	v[2] = orth_d3m6_pd[296] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[297] = x[5] * x[16];
	v[1] = orth_d3m6_pd[297] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[298] = x[7] * x[10];
	v[1] = orth_d3m6_pd[298] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[299] = x[5] * x[14];
	v[1] = orth_d3m6_pd[299] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[49] = t1;

  /***  constraint 51  ***/

	orth_d3m6_pd[300] = x[7] * x[16];
	v[0] = orth_d3m6_pd[300] * x[13];
	orth_d3m6_pd[301] = x[8] * x[14];
	v[1] = orth_d3m6_pd[301] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[302] = x[8] * x[12];
	v[2] = orth_d3m6_pd[302] * x[15];
	v[0] += v[2];
	orth_d3m6_pd[303] = x[6] * x[16];
	v[2] = orth_d3m6_pd[303] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[304] = x[7] * x[12];
	v[1] = orth_d3m6_pd[304] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[305] = x[6] * x[14];
	v[2] = orth_d3m6_pd[305] * x[17];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[50] = t1;

  /***  constraint 52  ***/

	orth_d3m6_pd[306] = x[8] * x[14];
	v[0] = orth_d3m6_pd[306] * x[13];
	orth_d3m6_pd[307] = x[7] * x[16];
	v[1] = orth_d3m6_pd[307] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	orth_d3m6_pd[308] = x[8] * x[12];
	v[2] = orth_d3m6_pd[308] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	orth_d3m6_pd[309] = x[6] * x[16];
	v[1] = orth_d3m6_pd[309] * x[15];
	v[0] += v[1];
	orth_d3m6_pd[310] = x[7] * x[12];
	v[1] = orth_d3m6_pd[310] * x[17];
	v[0] += v[1];
	orth_d3m6_pd[311] = x[6] * x[14];
	v[1] = orth_d3m6_pd[311] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[24];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[0];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[1];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[2];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[3];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[4];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[5];
	t1 += -x[6];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[6];
	t1 += -x[7];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[7];
	t1 += -x[8];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[8];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	c[61] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[50] = orth_d3m6_pd[2];
	J[25] = orth_d3m6_pd[1];
	J[0] = orth_d3m6_pd[0];

   /*** derivatives for constraint 2 ***/

	J[75] = orth_d3m6_pd[5];
	J[228] = orth_d3m6_pd[4];
	J[100] = orth_d3m6_pd[3];

   /*** derivatives for constraint 3 ***/

	J[276] = orth_d3m6_pd[8];
	J[252] = orth_d3m6_pd[7];
	J[125] = orth_d3m6_pd[6];

   /*** derivatives for constraint 4 ***/

	J[324] = orth_d3m6_pd[11];
	J[300] = orth_d3m6_pd[10];
	J[150] = orth_d3m6_pd[9];

   /*** derivatives for constraint 5 ***/

	J[372] = orth_d3m6_pd[14];
	J[348] = orth_d3m6_pd[13];
	J[176] = orth_d3m6_pd[12];

   /*** derivatives for constraint 6 ***/

	J[420] = orth_d3m6_pd[17];
	J[396] = orth_d3m6_pd[16];
	J[202] = orth_d3m6_pd[15];

   /*** derivatives for constraint 7 ***/

	J[479] = orth_d3m6_pd[28];
	J[203] = x[23]*orth_d3m6_pd[29];
	J[472] = orth_d3m6_pd[26];
	J[177] = x[22]*orth_d3m6_pd[27];
	J[465] = orth_d3m6_pd[24];
	J[151] = x[21]*orth_d3m6_pd[25];
	J[458] = orth_d3m6_pd[22];
	J[126] = x[20]*orth_d3m6_pd[23];
	J[451] = orth_d3m6_pd[20];
	J[101] = x[19]*orth_d3m6_pd[21];
	J[444] = orth_d3m6_pd[18];
	J[1] = x[18]*orth_d3m6_pd[19];

   /*** derivatives for constraint 8 ***/

	J[397] = orth_d3m6_pd[35];
	J[204] = x[16]*x[23];
	J[480] = x[16]*x[8];
	J[349] = orth_d3m6_pd[34];
	J[178] = x[14]*x[22];
	J[473] = x[14]*x[7];
	J[301] = orth_d3m6_pd[33];
	J[152] = x[12]*x[21];
	J[466] = x[12]*x[6];
	J[253] = orth_d3m6_pd[32];
	J[127] = x[10]*x[20];
	J[459] = x[10]*x[5];
	J[229] = orth_d3m6_pd[31];
	J[102] = x[9]*x[19];
	J[452] = x[9]*x[4];
	J[26] = orth_d3m6_pd[30];
	J[2] = x[1]*x[18];
	J[445] = x[1]*x[0];

   /*** derivatives for constraint 9 ***/

	J[421] = orth_d3m6_pd[41];
	J[205] = x[17]*x[23];
	J[481] = x[17]*x[8];
	J[373] = orth_d3m6_pd[40];
	J[179] = x[15]*x[22];
	J[474] = x[15]*x[7];
	J[325] = orth_d3m6_pd[39];
	J[153] = x[13]*x[21];
	J[467] = x[13]*x[6];
	J[277] = orth_d3m6_pd[38];
	J[128] = x[11]*x[20];
	J[460] = x[11]*x[5];
	J[76] = orth_d3m6_pd[37];
	J[103] = x[3]*x[19];
	J[453] = x[3]*x[4];
	J[51] = orth_d3m6_pd[36];
	J[3] = x[2]*x[18];
	J[446] = x[2]*x[0];

   /*** derivatives for constraint 10 ***/

	J[482] = orth_d3m6_pd[52];
	J[398] = x[23]*orth_d3m6_pd[53];
	J[475] = orth_d3m6_pd[50];
	J[350] = x[22]*orth_d3m6_pd[51];
	J[468] = orth_d3m6_pd[48];
	J[302] = x[21]*orth_d3m6_pd[49];
	J[461] = orth_d3m6_pd[46];
	J[254] = x[20]*orth_d3m6_pd[47];
	J[454] = orth_d3m6_pd[44];
	J[230] = x[19]*orth_d3m6_pd[45];
	J[447] = orth_d3m6_pd[42];
	J[27] = x[18]*orth_d3m6_pd[43];

   /*** derivatives for constraint 11 ***/

	J[422] = orth_d3m6_pd[59];
	J[399] = x[17]*x[23];
	J[483] = x[17]*x[16];
	J[374] = orth_d3m6_pd[58];
	J[351] = x[15]*x[22];
	J[476] = x[15]*x[14];
	J[326] = orth_d3m6_pd[57];
	J[303] = x[13]*x[21];
	J[469] = x[13]*x[12];
	J[278] = orth_d3m6_pd[56];
	J[255] = x[11]*x[20];
	J[462] = x[11]*x[10];
	J[77] = orth_d3m6_pd[55];
	J[231] = x[3]*x[19];
	J[455] = x[3]*x[9];
	J[52] = orth_d3m6_pd[54];
	J[28] = x[2]*x[18];
	J[448] = x[2]*x[1];

   /*** derivatives for constraint 12 ***/

	J[484] = orth_d3m6_pd[70];
	J[423] = x[23]*orth_d3m6_pd[71];
	J[477] = orth_d3m6_pd[68];
	J[375] = x[22]*orth_d3m6_pd[69];
	J[470] = orth_d3m6_pd[66];
	J[327] = x[21]*orth_d3m6_pd[67];
	J[463] = orth_d3m6_pd[64];
	J[279] = x[20]*orth_d3m6_pd[65];
	J[456] = orth_d3m6_pd[62];
	J[78] = x[19]*orth_d3m6_pd[63];
	J[449] = orth_d3m6_pd[60];
	J[53] = x[18]*orth_d3m6_pd[61];

   /*** derivatives for constraint 13 ***/

	J[280] = orth_d3m6_pd[77];
	J[232] = x[11]*x[0];
	J[4] = x[11]*x[9];
	J[280] -= orth_d3m6_pd[76];
	J[29] = -x[11]*x[4];
	J[104] = -x[11]*x[1];
	J[79] = -orth_d3m6_pd[75];
	J[256] = -x[3]*x[0];
	J[4] -= x[3]*x[10];
	J[79] += orth_d3m6_pd[74];
	J[29] += x[3]*x[5];
	J[129] = x[3]*x[1];
	J[54] = -orth_d3m6_pd[73];
	J[232] -= x[2]*x[5];
	J[129] -= x[2]*x[9];
	J[54] += orth_d3m6_pd[72];
	J[256] += x[2]*x[4];
	J[104] += x[2]*x[10];
	J[486] = -1.;

   /*** derivatives for constraint 14 ***/

	J[281] = -orth_d3m6_pd[83];
	J[233] = -x[11]*x[0];
	J[5] = -x[11]*x[9];
	J[281] += orth_d3m6_pd[82];
	J[30] = x[11]*x[4];
	J[105] = x[11]*x[1];
	J[80] = orth_d3m6_pd[81];
	J[257] = x[3]*x[0];
	J[5] += x[3]*x[10];
	J[80] -= orth_d3m6_pd[80];
	J[30] -= x[3]*x[5];
	J[130] = -x[3]*x[1];
	J[55] = -orth_d3m6_pd[79];
	J[257] -= x[2]*x[4];
	J[105] -= x[2]*x[10];
	J[55] += orth_d3m6_pd[78];
	J[233] += x[2]*x[5];
	J[130] += x[2]*x[9];
	J[487] = -1.;

   /*** derivatives for constraint 15 ***/

	J[328] = orth_d3m6_pd[89];
	J[234] = x[13]*x[0];
	J[6] = x[13]*x[9];
	J[328] -= orth_d3m6_pd[88];
	J[31] = -x[13]*x[4];
	J[106] = -x[13]*x[1];
	J[81] = -orth_d3m6_pd[87];
	J[304] = -x[3]*x[0];
	J[6] -= x[3]*x[12];
	J[81] += orth_d3m6_pd[86];
	J[31] += x[3]*x[6];
	J[154] = x[3]*x[1];
	J[56] = -orth_d3m6_pd[85];
	J[234] -= x[2]*x[6];
	J[154] -= x[2]*x[9];
	J[56] += orth_d3m6_pd[84];
	J[304] += x[2]*x[4];
	J[106] += x[2]*x[12];
	J[488] = -1.;

   /*** derivatives for constraint 16 ***/

	J[329] = -orth_d3m6_pd[95];
	J[235] = -x[13]*x[0];
	J[7] = -x[13]*x[9];
	J[329] += orth_d3m6_pd[94];
	J[32] = x[13]*x[4];
	J[107] = x[13]*x[1];
	J[82] = orth_d3m6_pd[93];
	J[305] = x[3]*x[0];
	J[7] += x[3]*x[12];
	J[82] -= orth_d3m6_pd[92];
	J[32] -= x[3]*x[6];
	J[155] = -x[3]*x[1];
	J[57] = -orth_d3m6_pd[91];
	J[305] -= x[2]*x[4];
	J[107] -= x[2]*x[12];
	J[57] += orth_d3m6_pd[90];
	J[235] += x[2]*x[6];
	J[155] += x[2]*x[9];
	J[489] = -1.;

   /*** derivatives for constraint 17 ***/

	J[376] = orth_d3m6_pd[101];
	J[236] = x[15]*x[0];
	J[8] = x[15]*x[9];
	J[376] -= orth_d3m6_pd[100];
	J[33] = -x[15]*x[4];
	J[108] = -x[15]*x[1];
	J[83] = -orth_d3m6_pd[99];
	J[352] = -x[3]*x[0];
	J[8] -= x[3]*x[14];
	J[83] += orth_d3m6_pd[98];
	J[33] += x[3]*x[7];
	J[180] = x[3]*x[1];
	J[58] = -orth_d3m6_pd[97];
	J[236] -= x[2]*x[7];
	J[180] -= x[2]*x[9];
	J[58] += orth_d3m6_pd[96];
	J[352] += x[2]*x[4];
	J[108] += x[2]*x[14];
	J[490] = -1.;

   /*** derivatives for constraint 18 ***/

	J[377] = -orth_d3m6_pd[107];
	J[237] = -x[15]*x[0];
	J[9] = -x[15]*x[9];
	J[377] += orth_d3m6_pd[106];
	J[34] = x[15]*x[4];
	J[109] = x[15]*x[1];
	J[84] = orth_d3m6_pd[105];
	J[353] = x[3]*x[0];
	J[9] += x[3]*x[14];
	J[84] -= orth_d3m6_pd[104];
	J[34] -= x[3]*x[7];
	J[181] = -x[3]*x[1];
	J[59] = -orth_d3m6_pd[103];
	J[353] -= x[2]*x[4];
	J[109] -= x[2]*x[14];
	J[59] += orth_d3m6_pd[102];
	J[237] += x[2]*x[7];
	J[181] += x[2]*x[9];
	J[491] = -1.;

   /*** derivatives for constraint 19 ***/

	J[424] = orth_d3m6_pd[113];
	J[238] = x[17]*x[0];
	J[10] = x[17]*x[9];
	J[424] -= orth_d3m6_pd[112];
	J[35] = -x[17]*x[4];
	J[110] = -x[17]*x[1];
	J[85] = -orth_d3m6_pd[111];
	J[400] = -x[3]*x[0];
	J[10] -= x[3]*x[16];
	J[85] += orth_d3m6_pd[110];
	J[35] += x[3]*x[8];
	J[206] = x[3]*x[1];
	J[60] = -orth_d3m6_pd[109];
	J[238] -= x[2]*x[8];
	J[206] -= x[2]*x[9];
	J[60] += orth_d3m6_pd[108];
	J[400] += x[2]*x[4];
	J[110] += x[2]*x[16];
	J[492] = -1.;

   /*** derivatives for constraint 20 ***/

	J[425] = -orth_d3m6_pd[119];
	J[239] = -x[17]*x[0];
	J[11] = -x[17]*x[9];
	J[425] += orth_d3m6_pd[118];
	J[36] = x[17]*x[4];
	J[111] = x[17]*x[1];
	J[86] = orth_d3m6_pd[117];
	J[401] = x[3]*x[0];
	J[11] += x[3]*x[16];
	J[86] -= orth_d3m6_pd[116];
	J[36] -= x[3]*x[8];
	J[207] = -x[3]*x[1];
	J[61] = -orth_d3m6_pd[115];
	J[401] -= x[2]*x[4];
	J[111] -= x[2]*x[16];
	J[61] += orth_d3m6_pd[114];
	J[239] += x[2]*x[8];
	J[207] += x[2]*x[9];
	J[493] = -1.;

   /*** derivatives for constraint 21 ***/

	J[330] = orth_d3m6_pd[125];
	J[258] = x[13]*x[0];
	J[12] = x[13]*x[10];
	J[330] -= orth_d3m6_pd[124];
	J[37] = -x[13]*x[5];
	J[131] = -x[13]*x[1];
	J[282] = -orth_d3m6_pd[123];
	J[306] = -x[11]*x[0];
	J[12] -= x[11]*x[12];
	J[282] += orth_d3m6_pd[122];
	J[37] += x[11]*x[6];
	J[156] = x[11]*x[1];
	J[62] = -orth_d3m6_pd[121];
	J[258] -= x[2]*x[6];
	J[156] -= x[2]*x[10];
	J[62] += orth_d3m6_pd[120];
	J[306] += x[2]*x[5];
	J[131] += x[2]*x[12];
	J[494] = -1.;

   /*** derivatives for constraint 22 ***/

	J[331] = -orth_d3m6_pd[131];
	J[259] = -x[13]*x[0];
	J[13] = -x[13]*x[10];
	J[331] += orth_d3m6_pd[130];
	J[38] = x[13]*x[5];
	J[132] = x[13]*x[1];
	J[283] = orth_d3m6_pd[129];
	J[307] = x[11]*x[0];
	J[13] += x[11]*x[12];
	J[283] -= orth_d3m6_pd[128];
	J[38] -= x[11]*x[6];
	J[157] = -x[11]*x[1];
	J[63] = -orth_d3m6_pd[127];
	J[307] -= x[2]*x[5];
	J[132] -= x[2]*x[12];
	J[63] += orth_d3m6_pd[126];
	J[259] += x[2]*x[6];
	J[157] += x[2]*x[10];
	J[495] = -1.;

   /*** derivatives for constraint 23 ***/

	J[378] = orth_d3m6_pd[137];
	J[260] = x[15]*x[0];
	J[14] = x[15]*x[10];
	J[378] -= orth_d3m6_pd[136];
	J[39] = -x[15]*x[5];
	J[133] = -x[15]*x[1];
	J[284] = -orth_d3m6_pd[135];
	J[354] = -x[11]*x[0];
	J[14] -= x[11]*x[14];
	J[284] += orth_d3m6_pd[134];
	J[39] += x[11]*x[7];
	J[182] = x[11]*x[1];
	J[64] = -orth_d3m6_pd[133];
	J[260] -= x[2]*x[7];
	J[182] -= x[2]*x[10];
	J[64] += orth_d3m6_pd[132];
	J[354] += x[2]*x[5];
	J[133] += x[2]*x[14];
	J[496] = -1.;

   /*** derivatives for constraint 24 ***/

	J[379] = -orth_d3m6_pd[143];
	J[261] = -x[15]*x[0];
	J[15] = -x[15]*x[10];
	J[379] += orth_d3m6_pd[142];
	J[40] = x[15]*x[5];
	J[134] = x[15]*x[1];
	J[285] = orth_d3m6_pd[141];
	J[355] = x[11]*x[0];
	J[15] += x[11]*x[14];
	J[285] -= orth_d3m6_pd[140];
	J[40] -= x[11]*x[7];
	J[183] = -x[11]*x[1];
	J[65] = -orth_d3m6_pd[139];
	J[355] -= x[2]*x[5];
	J[134] -= x[2]*x[14];
	J[65] += orth_d3m6_pd[138];
	J[261] += x[2]*x[7];
	J[183] += x[2]*x[10];
	J[497] = -1.;

   /*** derivatives for constraint 25 ***/

	J[426] = orth_d3m6_pd[149];
	J[262] = x[17]*x[0];
	J[16] = x[17]*x[10];
	J[426] -= orth_d3m6_pd[148];
	J[41] = -x[17]*x[5];
	J[135] = -x[17]*x[1];
	J[286] = -orth_d3m6_pd[147];
	J[402] = -x[11]*x[0];
	J[16] -= x[11]*x[16];
	J[286] += orth_d3m6_pd[146];
	J[41] += x[11]*x[8];
	J[208] = x[11]*x[1];
	J[66] = -orth_d3m6_pd[145];
	J[262] -= x[2]*x[8];
	J[208] -= x[2]*x[10];
	J[66] += orth_d3m6_pd[144];
	J[402] += x[2]*x[5];
	J[135] += x[2]*x[16];
	J[498] = -1.;

   /*** derivatives for constraint 26 ***/

	J[427] = -orth_d3m6_pd[155];
	J[263] = -x[17]*x[0];
	J[17] = -x[17]*x[10];
	J[427] += orth_d3m6_pd[154];
	J[42] = x[17]*x[5];
	J[136] = x[17]*x[1];
	J[287] = orth_d3m6_pd[153];
	J[403] = x[11]*x[0];
	J[17] += x[11]*x[16];
	J[287] -= orth_d3m6_pd[152];
	J[42] -= x[11]*x[8];
	J[209] = -x[11]*x[1];
	J[67] = -orth_d3m6_pd[151];
	J[403] -= x[2]*x[5];
	J[136] -= x[2]*x[16];
	J[67] += orth_d3m6_pd[150];
	J[263] += x[2]*x[8];
	J[209] += x[2]*x[10];
	J[499] = -1.;

   /*** derivatives for constraint 27 ***/

	J[380] = orth_d3m6_pd[161];
	J[308] = x[15]*x[0];
	J[18] = x[15]*x[12];
	J[380] -= orth_d3m6_pd[160];
	J[43] = -x[15]*x[6];
	J[158] = -x[15]*x[1];
	J[332] = -orth_d3m6_pd[159];
	J[356] = -x[13]*x[0];
	J[18] -= x[13]*x[14];
	J[332] += orth_d3m6_pd[158];
	J[43] += x[13]*x[7];
	J[184] = x[13]*x[1];
	J[68] = -orth_d3m6_pd[157];
	J[308] -= x[2]*x[7];
	J[184] -= x[2]*x[12];
	J[68] += orth_d3m6_pd[156];
	J[356] += x[2]*x[6];
	J[158] += x[2]*x[14];
	J[500] = -1.;

   /*** derivatives for constraint 28 ***/

	J[381] = -orth_d3m6_pd[167];
	J[309] = -x[15]*x[0];
	J[19] = -x[15]*x[12];
	J[381] += orth_d3m6_pd[166];
	J[44] = x[15]*x[6];
	J[159] = x[15]*x[1];
	J[333] = orth_d3m6_pd[165];
	J[357] = x[13]*x[0];
	J[19] += x[13]*x[14];
	J[333] -= orth_d3m6_pd[164];
	J[44] -= x[13]*x[7];
	J[185] = -x[13]*x[1];
	J[69] = -orth_d3m6_pd[163];
	J[357] -= x[2]*x[6];
	J[159] -= x[2]*x[14];
	J[69] += orth_d3m6_pd[162];
	J[309] += x[2]*x[7];
	J[185] += x[2]*x[12];
	J[501] = -1.;

   /*** derivatives for constraint 29 ***/

	J[428] = orth_d3m6_pd[173];
	J[310] = x[17]*x[0];
	J[20] = x[17]*x[12];
	J[428] -= orth_d3m6_pd[172];
	J[45] = -x[17]*x[6];
	J[160] = -x[17]*x[1];
	J[334] = -orth_d3m6_pd[171];
	J[404] = -x[13]*x[0];
	J[20] -= x[13]*x[16];
	J[334] += orth_d3m6_pd[170];
	J[45] += x[13]*x[8];
	J[210] = x[13]*x[1];
	J[70] = -orth_d3m6_pd[169];
	J[310] -= x[2]*x[8];
	J[210] -= x[2]*x[12];
	J[70] += orth_d3m6_pd[168];
	J[404] += x[2]*x[6];
	J[160] += x[2]*x[16];
	J[502] = -1.;

   /*** derivatives for constraint 30 ***/

	J[429] = -orth_d3m6_pd[179];
	J[311] = -x[17]*x[0];
	J[21] = -x[17]*x[12];
	J[429] += orth_d3m6_pd[178];
	J[46] = x[17]*x[6];
	J[161] = x[17]*x[1];
	J[335] = orth_d3m6_pd[177];
	J[405] = x[13]*x[0];
	J[21] += x[13]*x[16];
	J[335] -= orth_d3m6_pd[176];
	J[46] -= x[13]*x[8];
	J[211] = -x[13]*x[1];
	J[71] = -orth_d3m6_pd[175];
	J[405] -= x[2]*x[6];
	J[161] -= x[2]*x[16];
	J[71] += orth_d3m6_pd[174];
	J[311] += x[2]*x[8];
	J[211] += x[2]*x[12];
	J[503] = -1.;

   /*** derivatives for constraint 31 ***/

	J[430] = orth_d3m6_pd[185];
	J[358] = x[17]*x[0];
	J[22] = x[17]*x[14];
	J[430] -= orth_d3m6_pd[184];
	J[47] = -x[17]*x[7];
	J[186] = -x[17]*x[1];
	J[382] = -orth_d3m6_pd[183];
	J[406] = -x[15]*x[0];
	J[22] -= x[15]*x[16];
	J[382] += orth_d3m6_pd[182];
	J[47] += x[15]*x[8];
	J[212] = x[15]*x[1];
	J[72] = -orth_d3m6_pd[181];
	J[358] -= x[2]*x[8];
	J[212] -= x[2]*x[14];
	J[72] += orth_d3m6_pd[180];
	J[406] += x[2]*x[7];
	J[186] += x[2]*x[16];
	J[504] = -1.;

   /*** derivatives for constraint 32 ***/

	J[431] = -orth_d3m6_pd[191];
	J[359] = -x[17]*x[0];
	J[23] = -x[17]*x[14];
	J[431] += orth_d3m6_pd[190];
	J[48] = x[17]*x[7];
	J[187] = x[17]*x[1];
	J[383] = orth_d3m6_pd[189];
	J[407] = x[15]*x[0];
	J[23] += x[15]*x[16];
	J[383] -= orth_d3m6_pd[188];
	J[48] -= x[15]*x[8];
	J[213] = -x[15]*x[1];
	J[73] = -orth_d3m6_pd[187];
	J[407] -= x[2]*x[7];
	J[187] -= x[2]*x[16];
	J[73] += orth_d3m6_pd[186];
	J[359] += x[2]*x[8];
	J[213] += x[2]*x[14];
	J[505] = -1.;

   /*** derivatives for constraint 33 ***/

	J[336] = orth_d3m6_pd[197];
	J[264] = x[13]*x[4];
	J[112] = x[13]*x[10];
	J[336] -= orth_d3m6_pd[196];
	J[240] = -x[13]*x[5];
	J[137] = -x[13]*x[9];
	J[288] = -orth_d3m6_pd[195];
	J[312] = -x[11]*x[4];
	J[112] -= x[11]*x[12];
	J[288] += orth_d3m6_pd[194];
	J[240] += x[11]*x[6];
	J[162] = x[11]*x[9];
	J[87] = -orth_d3m6_pd[193];
	J[264] -= x[3]*x[6];
	J[162] -= x[3]*x[10];
	J[87] += orth_d3m6_pd[192];
	J[312] += x[3]*x[5];
	J[137] += x[3]*x[12];
	J[506] = -1.;

   /*** derivatives for constraint 34 ***/

	J[337] = -orth_d3m6_pd[203];
	J[265] = -x[13]*x[4];
	J[113] = -x[13]*x[10];
	J[337] += orth_d3m6_pd[202];
	J[241] = x[13]*x[5];
	J[138] = x[13]*x[9];
	J[289] = orth_d3m6_pd[201];
	J[313] = x[11]*x[4];
	J[113] += x[11]*x[12];
	J[289] -= orth_d3m6_pd[200];
	J[241] -= x[11]*x[6];
	J[163] = -x[11]*x[9];
	J[88] = -orth_d3m6_pd[199];
	J[313] -= x[3]*x[5];
	J[138] -= x[3]*x[12];
	J[88] += orth_d3m6_pd[198];
	J[265] += x[3]*x[6];
	J[163] += x[3]*x[10];
	J[507] = -1.;

   /*** derivatives for constraint 35 ***/

	J[384] = orth_d3m6_pd[209];
	J[266] = x[15]*x[4];
	J[114] = x[15]*x[10];
	J[384] -= orth_d3m6_pd[208];
	J[242] = -x[15]*x[5];
	J[139] = -x[15]*x[9];
	J[290] = -orth_d3m6_pd[207];
	J[360] = -x[11]*x[4];
	J[114] -= x[11]*x[14];
	J[290] += orth_d3m6_pd[206];
	J[242] += x[11]*x[7];
	J[188] = x[11]*x[9];
	J[89] = -orth_d3m6_pd[205];
	J[266] -= x[3]*x[7];
	J[188] -= x[3]*x[10];
	J[89] += orth_d3m6_pd[204];
	J[360] += x[3]*x[5];
	J[139] += x[3]*x[14];
	J[508] = -1.;

   /*** derivatives for constraint 36 ***/

	J[385] = -orth_d3m6_pd[215];
	J[267] = -x[15]*x[4];
	J[115] = -x[15]*x[10];
	J[385] += orth_d3m6_pd[214];
	J[243] = x[15]*x[5];
	J[140] = x[15]*x[9];
	J[291] = orth_d3m6_pd[213];
	J[361] = x[11]*x[4];
	J[115] += x[11]*x[14];
	J[291] -= orth_d3m6_pd[212];
	J[243] -= x[11]*x[7];
	J[189] = -x[11]*x[9];
	J[90] = -orth_d3m6_pd[211];
	J[361] -= x[3]*x[5];
	J[140] -= x[3]*x[14];
	J[90] += orth_d3m6_pd[210];
	J[267] += x[3]*x[7];
	J[189] += x[3]*x[10];
	J[509] = -1.;

   /*** derivatives for constraint 37 ***/

	J[432] = orth_d3m6_pd[221];
	J[268] = x[17]*x[4];
	J[116] = x[17]*x[10];
	J[432] -= orth_d3m6_pd[220];
	J[244] = -x[17]*x[5];
	J[141] = -x[17]*x[9];
	J[292] = -orth_d3m6_pd[219];
	J[408] = -x[11]*x[4];
	J[116] -= x[11]*x[16];
	J[292] += orth_d3m6_pd[218];
	J[244] += x[11]*x[8];
	J[214] = x[11]*x[9];
	J[91] = -orth_d3m6_pd[217];
	J[268] -= x[3]*x[8];
	J[214] -= x[3]*x[10];
	J[91] += orth_d3m6_pd[216];
	J[408] += x[3]*x[5];
	J[141] += x[3]*x[16];
	J[510] = -1.;

   /*** derivatives for constraint 38 ***/

	J[433] = -orth_d3m6_pd[227];
	J[269] = -x[17]*x[4];
	J[117] = -x[17]*x[10];
	J[433] += orth_d3m6_pd[226];
	J[245] = x[17]*x[5];
	J[142] = x[17]*x[9];
	J[293] = orth_d3m6_pd[225];
	J[409] = x[11]*x[4];
	J[117] += x[11]*x[16];
	J[293] -= orth_d3m6_pd[224];
	J[245] -= x[11]*x[8];
	J[215] = -x[11]*x[9];
	J[92] = -orth_d3m6_pd[223];
	J[409] -= x[3]*x[5];
	J[142] -= x[3]*x[16];
	J[92] += orth_d3m6_pd[222];
	J[269] += x[3]*x[8];
	J[215] += x[3]*x[10];
	J[511] = -1.;

   /*** derivatives for constraint 39 ***/

	J[386] = orth_d3m6_pd[233];
	J[314] = x[15]*x[4];
	J[118] = x[15]*x[12];
	J[386] -= orth_d3m6_pd[232];
	J[246] = -x[15]*x[6];
	J[164] = -x[15]*x[9];
	J[338] = -orth_d3m6_pd[231];
	J[362] = -x[13]*x[4];
	J[118] -= x[13]*x[14];
	J[338] += orth_d3m6_pd[230];
	J[246] += x[13]*x[7];
	J[190] = x[13]*x[9];
	J[93] = -orth_d3m6_pd[229];
	J[314] -= x[3]*x[7];
	J[190] -= x[3]*x[12];
	J[93] += orth_d3m6_pd[228];
	J[362] += x[3]*x[6];
	J[164] += x[3]*x[14];
	J[512] = -1.;

   /*** derivatives for constraint 40 ***/

	J[387] = -orth_d3m6_pd[239];
	J[315] = -x[15]*x[4];
	J[119] = -x[15]*x[12];
	J[387] += orth_d3m6_pd[238];
	J[247] = x[15]*x[6];
	J[165] = x[15]*x[9];
	J[339] = orth_d3m6_pd[237];
	J[363] = x[13]*x[4];
	J[119] += x[13]*x[14];
	J[339] -= orth_d3m6_pd[236];
	J[247] -= x[13]*x[7];
	J[191] = -x[13]*x[9];
	J[94] = -orth_d3m6_pd[235];
	J[363] -= x[3]*x[6];
	J[165] -= x[3]*x[14];
	J[94] += orth_d3m6_pd[234];
	J[315] += x[3]*x[7];
	J[191] += x[3]*x[12];
	J[513] = -1.;

   /*** derivatives for constraint 41 ***/

	J[434] = orth_d3m6_pd[245];
	J[316] = x[17]*x[4];
	J[120] = x[17]*x[12];
	J[434] -= orth_d3m6_pd[244];
	J[248] = -x[17]*x[6];
	J[166] = -x[17]*x[9];
	J[340] = -orth_d3m6_pd[243];
	J[410] = -x[13]*x[4];
	J[120] -= x[13]*x[16];
	J[340] += orth_d3m6_pd[242];
	J[248] += x[13]*x[8];
	J[216] = x[13]*x[9];
	J[95] = -orth_d3m6_pd[241];
	J[316] -= x[3]*x[8];
	J[216] -= x[3]*x[12];
	J[95] += orth_d3m6_pd[240];
	J[410] += x[3]*x[6];
	J[166] += x[3]*x[16];
	J[514] = -1.;

   /*** derivatives for constraint 42 ***/

	J[435] = -orth_d3m6_pd[251];
	J[317] = -x[17]*x[4];
	J[121] = -x[17]*x[12];
	J[435] += orth_d3m6_pd[250];
	J[249] = x[17]*x[6];
	J[167] = x[17]*x[9];
	J[341] = orth_d3m6_pd[249];
	J[411] = x[13]*x[4];
	J[121] += x[13]*x[16];
	J[341] -= orth_d3m6_pd[248];
	J[249] -= x[13]*x[8];
	J[217] = -x[13]*x[9];
	J[96] = -orth_d3m6_pd[247];
	J[411] -= x[3]*x[6];
	J[167] -= x[3]*x[16];
	J[96] += orth_d3m6_pd[246];
	J[317] += x[3]*x[8];
	J[217] += x[3]*x[12];
	J[515] = -1.;

   /*** derivatives for constraint 43 ***/

	J[436] = orth_d3m6_pd[257];
	J[364] = x[17]*x[4];
	J[122] = x[17]*x[14];
	J[436] -= orth_d3m6_pd[256];
	J[250] = -x[17]*x[7];
	J[192] = -x[17]*x[9];
	J[388] = -orth_d3m6_pd[255];
	J[412] = -x[15]*x[4];
	J[122] -= x[15]*x[16];
	J[388] += orth_d3m6_pd[254];
	J[250] += x[15]*x[8];
	J[218] = x[15]*x[9];
	J[97] = -orth_d3m6_pd[253];
	J[364] -= x[3]*x[8];
	J[218] -= x[3]*x[14];
	J[97] += orth_d3m6_pd[252];
	J[412] += x[3]*x[7];
	J[192] += x[3]*x[16];
	J[516] = -1.;

   /*** derivatives for constraint 44 ***/

	J[437] = -orth_d3m6_pd[263];
	J[365] = -x[17]*x[4];
	J[123] = -x[17]*x[14];
	J[437] += orth_d3m6_pd[262];
	J[251] = x[17]*x[7];
	J[193] = x[17]*x[9];
	J[389] = orth_d3m6_pd[261];
	J[413] = x[15]*x[4];
	J[123] += x[15]*x[16];
	J[389] -= orth_d3m6_pd[260];
	J[251] -= x[15]*x[8];
	J[219] = -x[15]*x[9];
	J[98] = -orth_d3m6_pd[259];
	J[413] -= x[3]*x[7];
	J[193] -= x[3]*x[16];
	J[98] += orth_d3m6_pd[258];
	J[365] += x[3]*x[8];
	J[219] += x[3]*x[14];
	J[517] = -1.;

   /*** derivatives for constraint 45 ***/

	J[390] = orth_d3m6_pd[269];
	J[318] = x[15]*x[5];
	J[143] = x[15]*x[12];
	J[390] -= orth_d3m6_pd[268];
	J[270] = -x[15]*x[6];
	J[168] = -x[15]*x[10];
	J[342] = -orth_d3m6_pd[267];
	J[366] = -x[13]*x[5];
	J[143] -= x[13]*x[14];
	J[342] += orth_d3m6_pd[266];
	J[270] += x[13]*x[7];
	J[194] = x[13]*x[10];
	J[294] = -orth_d3m6_pd[265];
	J[318] -= x[11]*x[7];
	J[194] -= x[11]*x[12];
	J[294] += orth_d3m6_pd[264];
	J[366] += x[11]*x[6];
	J[168] += x[11]*x[14];
	J[518] = -1.;

   /*** derivatives for constraint 46 ***/

	J[391] = -orth_d3m6_pd[275];
	J[319] = -x[15]*x[5];
	J[144] = -x[15]*x[12];
	J[391] += orth_d3m6_pd[274];
	J[271] = x[15]*x[6];
	J[169] = x[15]*x[10];
	J[343] = orth_d3m6_pd[273];
	J[367] = x[13]*x[5];
	J[144] += x[13]*x[14];
	J[343] -= orth_d3m6_pd[272];
	J[271] -= x[13]*x[7];
	J[195] = -x[13]*x[10];
	J[295] = -orth_d3m6_pd[271];
	J[367] -= x[11]*x[6];
	J[169] -= x[11]*x[14];
	J[295] += orth_d3m6_pd[270];
	J[319] += x[11]*x[7];
	J[195] += x[11]*x[12];
	J[519] = -1.;

   /*** derivatives for constraint 47 ***/

	J[438] = orth_d3m6_pd[281];
	J[320] = x[17]*x[5];
	J[145] = x[17]*x[12];
	J[438] -= orth_d3m6_pd[280];
	J[272] = -x[17]*x[6];
	J[170] = -x[17]*x[10];
	J[344] = -orth_d3m6_pd[279];
	J[414] = -x[13]*x[5];
	J[145] -= x[13]*x[16];
	J[344] += orth_d3m6_pd[278];
	J[272] += x[13]*x[8];
	J[220] = x[13]*x[10];
	J[296] = -orth_d3m6_pd[277];
	J[320] -= x[11]*x[8];
	J[220] -= x[11]*x[12];
	J[296] += orth_d3m6_pd[276];
	J[414] += x[11]*x[6];
	J[170] += x[11]*x[16];
	J[520] = -1.;

   /*** derivatives for constraint 48 ***/

	J[439] = -orth_d3m6_pd[287];
	J[321] = -x[17]*x[5];
	J[146] = -x[17]*x[12];
	J[439] += orth_d3m6_pd[286];
	J[273] = x[17]*x[6];
	J[171] = x[17]*x[10];
	J[345] = orth_d3m6_pd[285];
	J[415] = x[13]*x[5];
	J[146] += x[13]*x[16];
	J[345] -= orth_d3m6_pd[284];
	J[273] -= x[13]*x[8];
	J[221] = -x[13]*x[10];
	J[297] = -orth_d3m6_pd[283];
	J[415] -= x[11]*x[6];
	J[171] -= x[11]*x[16];
	J[297] += orth_d3m6_pd[282];
	J[321] += x[11]*x[8];
	J[221] += x[11]*x[12];
	J[521] = -1.;

   /*** derivatives for constraint 49 ***/

	J[440] = orth_d3m6_pd[293];
	J[368] = x[17]*x[5];
	J[147] = x[17]*x[14];
	J[440] -= orth_d3m6_pd[292];
	J[274] = -x[17]*x[7];
	J[196] = -x[17]*x[10];
	J[392] = -orth_d3m6_pd[291];
	J[416] = -x[15]*x[5];
	J[147] -= x[15]*x[16];
	J[392] += orth_d3m6_pd[290];
	J[274] += x[15]*x[8];
	J[222] = x[15]*x[10];
	J[298] = -orth_d3m6_pd[289];
	J[368] -= x[11]*x[8];
	J[222] -= x[11]*x[14];
	J[298] += orth_d3m6_pd[288];
	J[416] += x[11]*x[7];
	J[196] += x[11]*x[16];
	J[522] = -1.;

   /*** derivatives for constraint 50 ***/

	J[441] = -orth_d3m6_pd[299];
	J[369] = -x[17]*x[5];
	J[148] = -x[17]*x[14];
	J[441] += orth_d3m6_pd[298];
	J[275] = x[17]*x[7];
	J[197] = x[17]*x[10];
	J[393] = orth_d3m6_pd[297];
	J[417] = x[15]*x[5];
	J[148] += x[15]*x[16];
	J[393] -= orth_d3m6_pd[296];
	J[275] -= x[15]*x[8];
	J[223] = -x[15]*x[10];
	J[299] = -orth_d3m6_pd[295];
	J[417] -= x[11]*x[7];
	J[197] -= x[11]*x[16];
	J[299] += orth_d3m6_pd[294];
	J[369] += x[11]*x[8];
	J[223] += x[11]*x[14];
	J[523] = -1.;

   /*** derivatives for constraint 51 ***/

	J[442] = orth_d3m6_pd[305];
	J[370] = x[17]*x[6];
	J[172] = x[17]*x[14];
	J[442] -= orth_d3m6_pd[304];
	J[322] = -x[17]*x[7];
	J[198] = -x[17]*x[12];
	J[394] = -orth_d3m6_pd[303];
	J[418] = -x[15]*x[6];
	J[172] -= x[15]*x[16];
	J[394] += orth_d3m6_pd[302];
	J[322] += x[15]*x[8];
	J[224] = x[15]*x[12];
	J[346] = -orth_d3m6_pd[301];
	J[370] -= x[13]*x[8];
	J[224] -= x[13]*x[14];
	J[346] += orth_d3m6_pd[300];
	J[418] += x[13]*x[7];
	J[198] += x[13]*x[16];
	J[524] = -1.;

   /*** derivatives for constraint 52 ***/

	J[443] = -orth_d3m6_pd[311];
	J[371] = -x[17]*x[6];
	J[173] = -x[17]*x[14];
	J[443] += orth_d3m6_pd[310];
	J[323] = x[17]*x[7];
	J[199] = x[17]*x[12];
	J[395] = orth_d3m6_pd[309];
	J[419] = x[15]*x[6];
	J[173] += x[15]*x[16];
	J[395] -= orth_d3m6_pd[308];
	J[323] -= x[15]*x[8];
	J[225] = -x[15]*x[12];
	J[347] = -orth_d3m6_pd[307];
	J[419] -= x[13]*x[7];
	J[199] -= x[13]*x[16];
	J[347] += orth_d3m6_pd[306];
	J[371] += x[13]*x[8];
	J[225] += x[13]*x[14];
	J[525] = -1.;

   /*** derivatives for constraint 53 ***/

	J[24] = 1.;

   /*** derivatives for constraint 54 ***/

	J[49] = 1.;

   /*** derivatives for constraint 55 ***/

	J[74] = 1.;

   /*** derivatives for constraint 56 ***/

	J[99] = 1.;

   /*** derivatives for constraint 57 ***/

	J[124] = 1.;

   /*** derivatives for constraint 58 ***/

	J[149] = 1.;
	J[174] = -1.;

   /*** derivatives for constraint 59 ***/

	J[175] = 1.;
	J[200] = -1.;

   /*** derivatives for constraint 60 ***/

	J[201] = 1.;
	J[226] = -1.;

   /*** derivatives for constraint 61 ***/

	J[227] = 1.;

   /*** derivatives for constraint 62 ***/

	J[450] = 1.;
	J[457] = 1.;
	J[464] = 1.;
	J[471] = 1.;
	J[478] = 1.;
	J[485] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
