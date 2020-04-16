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
 fint orth_d3m6_pl_auxcom_[1] = { 66 /* nlc */ };
 fint orth_d3m6_pl_funcom_[639] = {
	42 /* nvar */,
	1 /* nobj */,
	127 /* ncon */,
	590 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	12,
	18,
	23,
	29,
	34,
	40,
	45,
	51,
	56,
	62,
	67,
	72,
	77,
	82,
	87,
	92,
	97,
	102,
	107,
	112,
	133,
	172,
	193,
	214,
	235,
	256,
	277,
	298,
	319,
	340,
	361,
	382,
	403,
	424,
	445,
	466,
	487,
	508,
	529,
	550,
	591,

	/* rownos */
	1,
	18,
	19,
	20,
	21,
	1,
	2,
	3,
	4,
	5,
	68,
	1,
	6,
	7,
	8,
	9,
	68,
	2,
	17,
	19,
	20,
	21,
	2,
	6,
	10,
	11,
	12,
	68,
	3,
	17,
	18,
	20,
	21,
	3,
	7,
	10,
	13,
	14,
	68,
	4,
	17,
	18,
	19,
	21,
	4,
	8,
	11,
	13,
	15,
	68,
	5,
	17,
	18,
	19,
	20,
	5,
	9,
	12,
	14,
	15,
	68,
	6,
	16,
	19,
	20,
	21,
	7,
	16,
	18,
	20,
	21,
	8,
	16,
	18,
	19,
	21,
	9,
	16,
	18,
	19,
	20,
	10,
	16,
	17,
	20,
	21,
	11,
	16,
	17,
	19,
	21,
	12,
	16,
	17,
	19,
	20,
	13,
	16,
	17,
	18,
	21,
	14,
	16,
	17,
	18,
	20,
	15,
	16,
	17,
	18,
	19,
	16,
	17,
	18,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	52,
	53,
	54,
	55,
	56,
	57,
	69,
	88,
	89,
	19,
	20,
	21,
	35,
	38,
	41,
	44,
	45,
	46,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
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
	86,
	87,
	126,
	127,
	16,
	17,
	19,
	22,
	23,
	24,
	25,
	31,
	32,
	33,
	34,
	35,
	52,
	53,
	58,
	59,
	60,
	61,
	70,
	90,
	91,
	16,
	17,
	20,
	22,
	23,
	26,
	27,
	31,
	32,
	36,
	37,
	38,
	52,
	54,
	58,
	62,
	63,
	64,
	71,
	92,
	93,
	16,
	17,
	21,
	24,
	25,
	26,
	27,
	31,
	32,
	39,
	40,
	41,
	52,
	55,
	59,
	62,
	65,
	66,
	72,
	94,
	95,
	16,
	18,
	19,
	22,
	24,
	28,
	29,
	33,
	34,
	42,
	43,
	44,
	53,
	56,
	60,
	62,
	63,
	65,
	73,
	96,
	97,
	16,
	18,
	20,
	22,
	26,
	28,
	30,
	36,
	37,
	42,
	43,
	45,
	54,
	56,
	59,
	61,
	64,
	65,
	74,
	98,
	99,
	16,
	18,
	21,
	24,
	26,
	29,
	30,
	39,
	40,
	42,
	43,
	46,
	55,
	56,
	58,
	61,
	63,
	66,
	75,
	100,
	101,
	16,
	19,
	20,
	22,
	31,
	33,
	35,
	36,
	38,
	42,
	44,
	45,
	55,
	57,
	58,
	60,
	64,
	65,
	76,
	102,
	103,
	16,
	19,
	21,
	24,
	31,
	34,
	35,
	39,
	41,
	42,
	44,
	46,
	54,
	57,
	59,
	60,
	63,
	66,
	77,
	104,
	105,
	16,
	20,
	21,
	26,
	31,
	37,
	38,
	40,
	41,
	42,
	45,
	46,
	53,
	57,
	61,
	62,
	64,
	66,
	78,
	106,
	107,
	17,
	18,
	19,
	23,
	25,
	28,
	29,
	33,
	34,
	47,
	48,
	49,
	53,
	57,
	61,
	62,
	64,
	66,
	79,
	108,
	109,
	17,
	18,
	20,
	23,
	27,
	28,
	30,
	36,
	37,
	47,
	48,
	50,
	54,
	57,
	59,
	60,
	63,
	66,
	80,
	110,
	111,
	17,
	18,
	21,
	25,
	27,
	29,
	30,
	39,
	40,
	47,
	48,
	51,
	55,
	57,
	58,
	60,
	64,
	65,
	81,
	112,
	113,
	17,
	19,
	20,
	23,
	32,
	33,
	35,
	36,
	38,
	47,
	49,
	50,
	55,
	56,
	58,
	61,
	63,
	66,
	82,
	114,
	115,
	17,
	19,
	21,
	25,
	32,
	34,
	35,
	39,
	41,
	47,
	49,
	51,
	54,
	56,
	59,
	61,
	64,
	65,
	83,
	116,
	117,
	17,
	20,
	21,
	27,
	32,
	37,
	38,
	40,
	41,
	47,
	50,
	51,
	53,
	56,
	60,
	62,
	63,
	65,
	84,
	118,
	119,
	18,
	19,
	20,
	28,
	33,
	36,
	43,
	44,
	45,
	48,
	49,
	50,
	52,
	55,
	59,
	62,
	65,
	66,
	85,
	120,
	121,
	18,
	19,
	21,
	29,
	34,
	39,
	43,
	44,
	46,
	48,
	49,
	51,
	52,
	54,
	58,
	62,
	63,
	64,
	86,
	122,
	123,
	18,
	20,
	21,
	30,
	37,
	40,
	43,
	45,
	46,
	48,
	50,
	51,
	52,
	53,
	58,
	59,
	60,
	61,
	87,
	124,
	125,
	67,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	126,
	127 };

 real orth_d3m6_pl_boundc_[1+84+254] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.7e308,
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
		1.7e308,
		3.,
		3.,
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

 real orth_d3m6_pl_x0comn_[42] = {
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

 static real orth_d3m6_pl_pd[120];
static real orth_d3m6_pl_old_x[42];
static int orth_d3m6_pl_xkind = -1;

 static int
orth_d3m6_pl_xcheck(real *x)
{
	real *x1 = orth_d3m6_pl_old_x, *xe = x + 42;
	errno = 0;
	if (orth_d3m6_pl_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	orth_d3m6_pl_xkind = 0;
	return 1;
	}
 real
orth_d3m6_pl_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (orth_d3m6_pl_xcheck(x) && wantfg == 2)
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
orth_d3m6_pl_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (orth_d3m6_pl_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[1] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[1] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[2] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[2] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[14];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[4] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[15];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[4] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[4] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[6] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[18];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[6] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[19];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[8] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[20];
	c[14] = t1;

  /***  constraint 16  ***/

	orth_d3m6_pl_pd[0] = x[21] * x[21];
	orth_d3m6_pl_pd[1] = x[21] + x[21];
	v[0] = orth_d3m6_pl_pd[0] * x[11];
	orth_d3m6_pl_pd[2] = x[23] * x[23];
	orth_d3m6_pl_pd[3] = x[23] + x[23];
	v[1] = orth_d3m6_pl_pd[2] * x[12];
	v[0] += v[1];
	orth_d3m6_pl_pd[4] = x[24] * x[24];
	orth_d3m6_pl_pd[5] = x[24] + x[24];
	v[1] = orth_d3m6_pl_pd[4] * x[13];
	v[0] += v[1];
	orth_d3m6_pl_pd[6] = x[25] * x[25];
	orth_d3m6_pl_pd[7] = x[25] + x[25];
	v[1] = orth_d3m6_pl_pd[6] * x[14];
	v[0] += v[1];
	orth_d3m6_pl_pd[8] = x[26] * x[26];
	orth_d3m6_pl_pd[9] = x[26] + x[26];
	v[1] = orth_d3m6_pl_pd[8] * x[15];
	v[0] += v[1];
	orth_d3m6_pl_pd[10] = x[27] * x[27];
	orth_d3m6_pl_pd[11] = x[27] + x[27];
	v[1] = orth_d3m6_pl_pd[10] * x[16];
	v[0] += v[1];
	orth_d3m6_pl_pd[12] = x[28] * x[28];
	orth_d3m6_pl_pd[13] = x[28] + x[28];
	v[1] = orth_d3m6_pl_pd[12] * x[17];
	v[0] += v[1];
	orth_d3m6_pl_pd[14] = x[29] * x[29];
	orth_d3m6_pl_pd[15] = x[29] + x[29];
	v[1] = orth_d3m6_pl_pd[14] * x[18];
	v[0] += v[1];
	orth_d3m6_pl_pd[16] = x[30] * x[30];
	orth_d3m6_pl_pd[17] = x[30] + x[30];
	v[1] = orth_d3m6_pl_pd[16] * x[19];
	v[0] += v[1];
	orth_d3m6_pl_pd[18] = x[31] * x[31];
	orth_d3m6_pl_pd[19] = x[31] + x[31];
	v[1] = orth_d3m6_pl_pd[18] * x[20];
	v[0] += v[1];
	c[15] = v[0];

  /***  constraint 17  ***/

	orth_d3m6_pl_pd[20] = x[21] * x[21];
	orth_d3m6_pl_pd[21] = x[21] + x[21];
	v[0] = orth_d3m6_pl_pd[20] * x[3];
	orth_d3m6_pl_pd[22] = x[23] * x[23];
	orth_d3m6_pl_pd[23] = x[23] + x[23];
	v[1] = orth_d3m6_pl_pd[22] * x[5];
	v[0] += v[1];
	orth_d3m6_pl_pd[24] = x[24] * x[24];
	orth_d3m6_pl_pd[25] = x[24] + x[24];
	v[1] = orth_d3m6_pl_pd[24] * x[7];
	v[0] += v[1];
	orth_d3m6_pl_pd[26] = x[25] * x[25];
	orth_d3m6_pl_pd[27] = x[25] + x[25];
	v[1] = orth_d3m6_pl_pd[26] * x[9];
	v[0] += v[1];
	orth_d3m6_pl_pd[28] = x[32] * x[32];
	orth_d3m6_pl_pd[29] = x[32] + x[32];
	v[1] = orth_d3m6_pl_pd[28] * x[15];
	v[0] += v[1];
	orth_d3m6_pl_pd[30] = x[33] * x[33];
	orth_d3m6_pl_pd[31] = x[33] + x[33];
	v[1] = orth_d3m6_pl_pd[30] * x[16];
	v[0] += v[1];
	orth_d3m6_pl_pd[32] = x[34] * x[34];
	orth_d3m6_pl_pd[33] = x[34] + x[34];
	v[1] = orth_d3m6_pl_pd[32] * x[17];
	v[0] += v[1];
	orth_d3m6_pl_pd[34] = x[35] * x[35];
	orth_d3m6_pl_pd[35] = x[35] + x[35];
	v[1] = orth_d3m6_pl_pd[34] * x[18];
	v[0] += v[1];
	orth_d3m6_pl_pd[36] = x[36] * x[36];
	orth_d3m6_pl_pd[37] = x[36] + x[36];
	v[1] = orth_d3m6_pl_pd[36] * x[19];
	v[0] += v[1];
	orth_d3m6_pl_pd[38] = x[37] * x[37];
	orth_d3m6_pl_pd[39] = x[37] + x[37];
	v[1] = orth_d3m6_pl_pd[38] * x[20];
	v[0] += v[1];
	c[16] = v[0];

  /***  constraint 18  ***/

	orth_d3m6_pl_pd[40] = x[21] * x[21];
	orth_d3m6_pl_pd[41] = x[21] + x[21];
	v[0] = orth_d3m6_pl_pd[40] * x[0];
	orth_d3m6_pl_pd[42] = x[26] * x[26];
	orth_d3m6_pl_pd[43] = x[26] + x[26];
	v[1] = orth_d3m6_pl_pd[42] * x[5];
	v[0] += v[1];
	orth_d3m6_pl_pd[44] = x[27] * x[27];
	orth_d3m6_pl_pd[45] = x[27] + x[27];
	v[1] = orth_d3m6_pl_pd[44] * x[7];
	v[0] += v[1];
	orth_d3m6_pl_pd[46] = x[28] * x[28];
	orth_d3m6_pl_pd[47] = x[28] + x[28];
	v[1] = orth_d3m6_pl_pd[46] * x[9];
	v[0] += v[1];
	orth_d3m6_pl_pd[48] = x[32] * x[32];
	orth_d3m6_pl_pd[49] = x[32] + x[32];
	v[1] = orth_d3m6_pl_pd[48] * x[12];
	v[0] += v[1];
	orth_d3m6_pl_pd[50] = x[33] * x[33];
	orth_d3m6_pl_pd[51] = x[33] + x[33];
	v[1] = orth_d3m6_pl_pd[50] * x[13];
	v[0] += v[1];
	orth_d3m6_pl_pd[52] = x[34] * x[34];
	orth_d3m6_pl_pd[53] = x[34] + x[34];
	v[1] = orth_d3m6_pl_pd[52] * x[14];
	v[0] += v[1];
	orth_d3m6_pl_pd[54] = x[38] * x[38];
	orth_d3m6_pl_pd[55] = x[38] + x[38];
	v[1] = orth_d3m6_pl_pd[54] * x[18];
	v[0] += v[1];
	orth_d3m6_pl_pd[56] = x[39] * x[39];
	orth_d3m6_pl_pd[57] = x[39] + x[39];
	v[1] = orth_d3m6_pl_pd[56] * x[19];
	v[0] += v[1];
	orth_d3m6_pl_pd[58] = x[40] * x[40];
	orth_d3m6_pl_pd[59] = x[40] + x[40];
	v[1] = orth_d3m6_pl_pd[58] * x[20];
	v[0] += v[1];
	c[17] = v[0];

  /***  constraint 19  ***/

	orth_d3m6_pl_pd[60] = x[23] * x[23];
	orth_d3m6_pl_pd[61] = x[23] + x[23];
	v[0] = orth_d3m6_pl_pd[60] * x[0];
	orth_d3m6_pl_pd[62] = x[26] * x[26];
	orth_d3m6_pl_pd[63] = x[26] + x[26];
	v[1] = orth_d3m6_pl_pd[62] * x[3];
	v[0] += v[1];
	orth_d3m6_pl_pd[64] = x[29] * x[29];
	orth_d3m6_pl_pd[65] = x[29] + x[29];
	v[1] = orth_d3m6_pl_pd[64] * x[7];
	v[0] += v[1];
	orth_d3m6_pl_pd[66] = x[30] * x[30];
	orth_d3m6_pl_pd[67] = x[30] + x[30];
	v[1] = orth_d3m6_pl_pd[66] * x[9];
	v[0] += v[1];
	orth_d3m6_pl_pd[68] = x[32] * x[32];
	orth_d3m6_pl_pd[69] = x[32] + x[32];
	v[1] = orth_d3m6_pl_pd[68] * x[11];
	v[0] += v[1];
	orth_d3m6_pl_pd[70] = x[35] * x[35];
	orth_d3m6_pl_pd[71] = x[35] + x[35];
	v[1] = orth_d3m6_pl_pd[70] * x[13];
	v[0] += v[1];
	orth_d3m6_pl_pd[72] = x[36] * x[36];
	orth_d3m6_pl_pd[73] = x[36] + x[36];
	v[1] = orth_d3m6_pl_pd[72] * x[14];
	v[0] += v[1];
	orth_d3m6_pl_pd[74] = x[38] * x[38];
	orth_d3m6_pl_pd[75] = x[38] + x[38];
	v[1] = orth_d3m6_pl_pd[74] * x[16];
	v[0] += v[1];
	orth_d3m6_pl_pd[76] = x[39] * x[39];
	orth_d3m6_pl_pd[77] = x[39] + x[39];
	v[1] = orth_d3m6_pl_pd[76] * x[17];
	v[0] += v[1];
	orth_d3m6_pl_pd[78] = x[22] * x[22];
	orth_d3m6_pl_pd[79] = x[22] + x[22];
	v[1] = orth_d3m6_pl_pd[78] * x[20];
	v[0] += v[1];
	c[18] = v[0];

  /***  constraint 20  ***/

	orth_d3m6_pl_pd[80] = x[24] * x[24];
	orth_d3m6_pl_pd[81] = x[24] + x[24];
	v[0] = orth_d3m6_pl_pd[80] * x[0];
	orth_d3m6_pl_pd[82] = x[27] * x[27];
	orth_d3m6_pl_pd[83] = x[27] + x[27];
	v[1] = orth_d3m6_pl_pd[82] * x[3];
	v[0] += v[1];
	orth_d3m6_pl_pd[84] = x[29] * x[29];
	orth_d3m6_pl_pd[85] = x[29] + x[29];
	v[1] = orth_d3m6_pl_pd[84] * x[5];
	v[0] += v[1];
	orth_d3m6_pl_pd[86] = x[31] * x[31];
	orth_d3m6_pl_pd[87] = x[31] + x[31];
	v[1] = orth_d3m6_pl_pd[86] * x[9];
	v[0] += v[1];
	orth_d3m6_pl_pd[88] = x[33] * x[33];
	orth_d3m6_pl_pd[89] = x[33] + x[33];
	v[1] = orth_d3m6_pl_pd[88] * x[11];
	v[0] += v[1];
	orth_d3m6_pl_pd[90] = x[35] * x[35];
	orth_d3m6_pl_pd[91] = x[35] + x[35];
	v[1] = orth_d3m6_pl_pd[90] * x[12];
	v[0] += v[1];
	orth_d3m6_pl_pd[92] = x[37] * x[37];
	orth_d3m6_pl_pd[93] = x[37] + x[37];
	v[1] = orth_d3m6_pl_pd[92] * x[14];
	v[0] += v[1];
	orth_d3m6_pl_pd[94] = x[38] * x[38];
	orth_d3m6_pl_pd[95] = x[38] + x[38];
	v[1] = orth_d3m6_pl_pd[94] * x[15];
	v[0] += v[1];
	orth_d3m6_pl_pd[96] = x[40] * x[40];
	orth_d3m6_pl_pd[97] = x[40] + x[40];
	v[1] = orth_d3m6_pl_pd[96] * x[17];
	v[0] += v[1];
	orth_d3m6_pl_pd[98] = x[22] * x[22];
	orth_d3m6_pl_pd[99] = x[22] + x[22];
	v[1] = orth_d3m6_pl_pd[98] * x[19];
	v[0] += v[1];
	c[19] = v[0];

  /***  constraint 21  ***/

	orth_d3m6_pl_pd[100] = x[25] * x[25];
	orth_d3m6_pl_pd[101] = x[25] + x[25];
	v[0] = orth_d3m6_pl_pd[100] * x[0];
	orth_d3m6_pl_pd[102] = x[28] * x[28];
	orth_d3m6_pl_pd[103] = x[28] + x[28];
	v[1] = orth_d3m6_pl_pd[102] * x[3];
	v[0] += v[1];
	orth_d3m6_pl_pd[104] = x[30] * x[30];
	orth_d3m6_pl_pd[105] = x[30] + x[30];
	v[1] = orth_d3m6_pl_pd[104] * x[5];
	v[0] += v[1];
	orth_d3m6_pl_pd[106] = x[31] * x[31];
	orth_d3m6_pl_pd[107] = x[31] + x[31];
	v[1] = orth_d3m6_pl_pd[106] * x[7];
	v[0] += v[1];
	orth_d3m6_pl_pd[108] = x[34] * x[34];
	orth_d3m6_pl_pd[109] = x[34] + x[34];
	v[1] = orth_d3m6_pl_pd[108] * x[11];
	v[0] += v[1];
	orth_d3m6_pl_pd[110] = x[36] * x[36];
	orth_d3m6_pl_pd[111] = x[36] + x[36];
	v[1] = orth_d3m6_pl_pd[110] * x[12];
	v[0] += v[1];
	orth_d3m6_pl_pd[112] = x[37] * x[37];
	orth_d3m6_pl_pd[113] = x[37] + x[37];
	v[1] = orth_d3m6_pl_pd[112] * x[13];
	v[0] += v[1];
	orth_d3m6_pl_pd[114] = x[39] * x[39];
	orth_d3m6_pl_pd[115] = x[39] + x[39];
	v[1] = orth_d3m6_pl_pd[114] * x[15];
	v[0] += v[1];
	orth_d3m6_pl_pd[116] = x[40] * x[40];
	orth_d3m6_pl_pd[117] = x[40] + x[40];
	v[1] = orth_d3m6_pl_pd[116] * x[16];
	v[0] += v[1];
	orth_d3m6_pl_pd[118] = x[22] * x[22];
	orth_d3m6_pl_pd[119] = x[22] + x[22];
	v[1] = orth_d3m6_pl_pd[118] * x[18];
	v[0] += v[1];
	c[20] = v[0];

  /***  constraint 22  ***/

	v[0] = x[21] * x[29];
	v[1] = x[23] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[24] * x[26];
	v[0] += v[2];
	c[21] = v[0];

  /***  constraint 23  ***/

	v[0] = x[21] * x[35];
	v[1] = x[23] * x[33];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[24] * x[32];
	v[0] += v[2];
	c[22] = v[0];

  /***  constraint 24  ***/

	v[0] = x[21] * x[30];
	v[1] = x[23] * x[28];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[25] * x[26];
	v[0] += v[2];
	c[23] = v[0];

  /***  constraint 25  ***/

	v[0] = x[21] * x[36];
	v[1] = x[23] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[25] * x[32];
	v[0] += v[2];
	c[24] = v[0];

  /***  constraint 26  ***/

	v[0] = x[21] * x[31];
	v[1] = x[24] * x[28];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[25] * x[27];
	v[0] += v[2];
	c[25] = v[0];

  /***  constraint 27  ***/

	v[0] = x[21] * x[37];
	v[1] = x[24] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[25] * x[33];
	v[0] += v[2];
	c[26] = v[0];

  /***  constraint 28  ***/

	v[0] = x[21] * x[38];
	v[1] = x[26] * x[33];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[27] * x[32];
	v[0] += v[2];
	c[27] = v[0];

  /***  constraint 29  ***/

	v[0] = x[21] * x[39];
	v[1] = x[26] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[32];
	v[0] += v[2];
	c[28] = v[0];

  /***  constraint 30  ***/

	v[0] = x[21] * x[40];
	v[1] = x[27] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[33];
	v[0] += v[2];
	c[29] = v[0];

  /***  constraint 31  ***/

	v[0] = x[23] * x[31];
	v[1] = x[24] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[25] * x[29];
	v[0] += v[2];
	c[30] = v[0];

  /***  constraint 32  ***/

	v[0] = x[23] * x[37];
	v[1] = x[24] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[25] * x[35];
	v[0] += v[2];
	c[31] = v[0];

  /***  constraint 33  ***/

	v[0] = x[23] * x[38];
	v[1] = x[26] * x[35];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[32];
	v[0] += v[2];
	c[32] = v[0];

  /***  constraint 34  ***/

	v[0] = x[23] * x[39];
	v[1] = x[26] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[32];
	v[0] += v[2];
	c[33] = v[0];

  /***  constraint 35  ***/

	v[0] = x[22] * x[23];
	v[1] = x[29] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[35];
	v[0] += v[2];
	c[34] = v[0];

  /***  constraint 36  ***/

	v[0] = x[24] * x[38];
	v[1] = x[27] * x[35];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[33];
	v[0] += v[2];
	c[35] = v[0];

  /***  constraint 37  ***/

	v[0] = x[24] * x[40];
	v[1] = x[27] * x[37];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[33];
	v[0] += v[2];
	c[36] = v[0];

  /***  constraint 38  ***/

	v[0] = x[22] * x[24];
	v[1] = x[29] * x[37];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[35];
	v[0] += v[2];
	c[37] = v[0];

  /***  constraint 39  ***/

	v[0] = x[25] * x[39];
	v[1] = x[28] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[34];
	v[0] += v[2];
	c[38] = v[0];

  /***  constraint 40  ***/

	v[0] = x[25] * x[40];
	v[1] = x[28] * x[37];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[34];
	v[0] += v[2];
	c[39] = v[0];

  /***  constraint 41  ***/

	v[0] = x[22] * x[25];
	v[1] = x[30] * x[37];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[36];
	v[0] += v[2];
	c[40] = v[0];

  /***  constraint 42  ***/

	v[0] = x[26] * x[31];
	v[1] = x[27] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[29];
	v[0] += v[2];
	c[41] = v[0];

  /***  constraint 43  ***/

	v[0] = x[26] * x[40];
	v[1] = x[27] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[38];
	v[0] += v[2];
	c[42] = v[0];

  /***  constraint 44  ***/

	v[0] = x[22] * x[26];
	v[1] = x[29] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[38];
	v[0] += v[2];
	c[43] = v[0];

  /***  constraint 45  ***/

	v[0] = x[22] * x[27];
	v[1] = x[29] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[38];
	v[0] += v[2];
	c[44] = v[0];

  /***  constraint 46  ***/

	v[0] = x[22] * x[28];
	v[1] = x[30] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[39];
	v[0] += v[2];
	c[45] = v[0];

  /***  constraint 47  ***/

	v[0] = x[32] * x[37];
	v[1] = x[33] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[34] * x[35];
	v[0] += v[2];
	c[46] = v[0];

  /***  constraint 48  ***/

	v[0] = x[32] * x[40];
	v[1] = x[33] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[34] * x[38];
	v[0] += v[2];
	c[47] = v[0];

  /***  constraint 49  ***/

	v[0] = x[22] * x[32];
	v[1] = x[35] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[36] * x[38];
	v[0] += v[2];
	c[48] = v[0];

  /***  constraint 50  ***/

	v[0] = x[22] * x[33];
	v[1] = x[35] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[37] * x[38];
	v[0] += v[2];
	c[49] = v[0];

  /***  constraint 51  ***/

	v[0] = x[22] * x[34];
	v[1] = x[36] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[37] * x[39];
	v[0] += v[2];
	c[50] = v[0];

  /***  constraint 52  ***/

	v[0] = x[21] * x[22];
	v[1] = x[23] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[24] * x[39];
	v[0] += v[2];
	v[2] = x[25] * x[38];
	v[1] = -v[2];
	v[0] += v[1];
	c[51] = v[0];

  /***  constraint 53  ***/

	v[0] = x[21] * x[22];
	v[1] = x[23] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[26] * x[37];
	v[0] += v[2];
	v[2] = x[31] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	c[52] = v[0];

  /***  constraint 54  ***/

	v[0] = x[21] * x[22];
	v[1] = x[24] * x[39];
	v[0] += v[1];
	v[1] = x[27] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[33];
	v[0] += v[2];
	c[53] = v[0];

  /***  constraint 55  ***/

	v[0] = x[21] * x[22];
	v[1] = x[25] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[35];
	v[0] += v[2];
	v[2] = x[29] * x[34];
	v[1] = -v[2];
	v[0] += v[1];
	c[54] = v[0];

  /***  constraint 56  ***/

	v[0] = x[21] * x[22];
	v[1] = x[26] * x[37];
	v[0] += v[1];
	v[1] = x[27] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[35];
	v[0] += v[2];
	c[55] = v[0];

  /***  constraint 57  ***/

	v[0] = x[21] * x[22];
	v[1] = x[29] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[33];
	v[0] += v[2];
	v[2] = x[31] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	c[56] = v[0];

  /***  constraint 58  ***/

	v[0] = x[23] * x[40];
	v[1] = x[24] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[35];
	v[0] += v[2];
	v[2] = x[29] * x[34];
	v[1] = -v[2];
	v[0] += v[1];
	c[57] = v[0];

  /***  constraint 59  ***/

	v[0] = x[23] * x[40];
	v[1] = x[25] * x[38];
	v[0] += v[1];
	v[1] = x[27] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[33];
	v[0] += v[2];
	c[58] = v[0];

  /***  constraint 60  ***/

	v[0] = x[23] * x[40];
	v[1] = x[26] * x[37];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[34];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[30] * x[33];
	v[0] += v[1];
	c[59] = v[0];

  /***  constraint 61  ***/

	v[0] = x[23] * x[40];
	v[1] = x[27] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[35];
	v[0] += v[2];
	v[2] = x[31] * x[32];
	v[0] += v[2];
	c[60] = v[0];

  /***  constraint 62  ***/

	v[0] = x[24] * x[39];
	v[1] = x[25] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[26] * x[37];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[31] * x[32];
	v[0] += v[1];
	c[61] = v[0];

  /***  constraint 63  ***/

	v[0] = x[24] * x[39];
	v[1] = x[26] * x[37];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[35];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[30] * x[33];
	v[0] += v[1];
	c[62] = v[0];

  /***  constraint 64  ***/

	v[0] = x[24] * x[39];
	v[1] = x[27] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[34];
	v[0] += v[2];
	v[2] = x[31] * x[32];
	v[0] += v[2];
	c[63] = v[0];

  /***  constraint 65  ***/

	v[0] = x[25] * x[38];
	v[1] = x[26] * x[37];
	v[0] += v[1];
	v[1] = x[27] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[34];
	v[0] += v[2];
	c[64] = v[0];

  /***  constraint 66  ***/

	v[0] = x[25] * x[38];
	v[1] = x[28] * x[35];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[33];
	v[0] += v[2];
	v[2] = x[31] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	c[65] = v[0];

  /***  constraint 67  ***/

	t1 = x[41];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[1];
	t1 += x[2];
	t1 += x[4];
	t1 += x[6];
	t1 += x[8];
	t1 += x[10];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[21];
	t1 += -x[22];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[22];
	t1 += x[23];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[22];
	t1 += x[24];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[22];
	t1 += x[25];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[22];
	t1 += x[26];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[22];
	t1 += x[27];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[22];
	t1 += x[28];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[22];
	t1 += x[29];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[22];
	t1 += x[30];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[22];
	t1 += x[31];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[22];
	t1 += x[32];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[22];
	t1 += x[33];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[22];
	t1 += x[34];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[22];
	t1 += x[35];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[22];
	t1 += x[36];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[22];
	t1 += x[37];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[22];
	t1 += x[38];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = -x[22];
	t1 += x[39];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[22];
	t1 += x[40];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[21];
	t1 += -x[41];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = -x[21];
	t1 += -x[41];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[23];
	t1 += -x[41];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = -x[23];
	t1 += -x[41];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[24];
	t1 += -x[41];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -x[24];
	t1 += -x[41];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[25];
	t1 += -x[41];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = -x[25];
	t1 += -x[41];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[26];
	t1 += -x[41];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = -x[26];
	t1 += -x[41];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[27];
	t1 += -x[41];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -x[27];
	t1 += -x[41];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[28];
	t1 += -x[41];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = -x[28];
	t1 += -x[41];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[29];
	t1 += -x[41];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = -x[29];
	t1 += -x[41];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[30];
	t1 += -x[41];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = -x[30];
	t1 += -x[41];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[31];
	t1 += -x[41];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = -x[31];
	t1 += -x[41];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[32];
	t1 += -x[41];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -x[32];
	t1 += -x[41];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[33];
	t1 += -x[41];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -x[33];
	t1 += -x[41];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[34];
	t1 += -x[41];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -x[34];
	t1 += -x[41];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[35];
	t1 += -x[41];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -x[35];
	t1 += -x[41];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[36];
	t1 += -x[41];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = -x[36];
	t1 += -x[41];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[37];
	t1 += -x[41];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = -x[37];
	t1 += -x[41];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = x[38];
	t1 += -x[41];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = -x[38];
	t1 += -x[41];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[39];
	t1 += -x[41];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = -x[39];
	t1 += -x[41];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[40];
	t1 += -x[41];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = -x[40];
	t1 += -x[41];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[22];
	t1 += -x[41];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = -x[22];
	t1 += -x[41];
	c[126] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[11] = -x[1];
	J[5] = -x[2];
	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[22] = -x[1];
	J[6] = -x[4];
	J[17] = 1.;

   /*** derivatives for constraint 3 ***/

	J[33] = -x[1];
	J[7] = -x[6];
	J[28] = 1.;

   /*** derivatives for constraint 4 ***/

	J[44] = -x[1];
	J[8] = -x[8];
	J[39] = 1.;

   /*** derivatives for constraint 5 ***/

	J[55] = -x[1];
	J[9] = -x[10];
	J[50] = 1.;

   /*** derivatives for constraint 6 ***/

	J[23] = -x[2];
	J[12] = -x[4];
	J[61] = 1.;

   /*** derivatives for constraint 7 ***/

	J[34] = -x[2];
	J[13] = -x[6];
	J[66] = 1.;

   /*** derivatives for constraint 8 ***/

	J[45] = -x[2];
	J[14] = -x[8];
	J[71] = 1.;

   /*** derivatives for constraint 9 ***/

	J[56] = -x[2];
	J[15] = -x[10];
	J[76] = 1.;

   /*** derivatives for constraint 10 ***/

	J[35] = -x[4];
	J[24] = -x[6];
	J[81] = 1.;

   /*** derivatives for constraint 11 ***/

	J[46] = -x[4];
	J[25] = -x[8];
	J[86] = 1.;

   /*** derivatives for constraint 12 ***/

	J[57] = -x[4];
	J[26] = -x[10];
	J[91] = 1.;

   /*** derivatives for constraint 13 ***/

	J[47] = -x[6];
	J[36] = -x[8];
	J[96] = 1.;

   /*** derivatives for constraint 14 ***/

	J[58] = -x[6];
	J[37] = -x[10];
	J[101] = 1.;

   /*** derivatives for constraint 15 ***/

	J[59] = -x[8];
	J[48] = -x[10];
	J[106] = 1.;

   /*** derivatives for constraint 16 ***/

	J[107] = orth_d3m6_pl_pd[18];
	J[339] = x[20]*orth_d3m6_pl_pd[19];
	J[102] = orth_d3m6_pl_pd[16];
	J[318] = x[19]*orth_d3m6_pl_pd[17];
	J[97] = orth_d3m6_pl_pd[14];
	J[297] = x[18]*orth_d3m6_pl_pd[15];
	J[92] = orth_d3m6_pl_pd[12];
	J[276] = x[17]*orth_d3m6_pl_pd[13];
	J[87] = orth_d3m6_pl_pd[10];
	J[255] = x[16]*orth_d3m6_pl_pd[11];
	J[82] = orth_d3m6_pl_pd[8];
	J[234] = x[15]*orth_d3m6_pl_pd[9];
	J[77] = orth_d3m6_pl_pd[6];
	J[213] = x[14]*orth_d3m6_pl_pd[7];
	J[72] = orth_d3m6_pl_pd[4];
	J[192] = x[13]*orth_d3m6_pl_pd[5];
	J[67] = orth_d3m6_pl_pd[2];
	J[171] = x[12]*orth_d3m6_pl_pd[3];
	J[62] = orth_d3m6_pl_pd[0];
	J[111] = x[11]*orth_d3m6_pl_pd[1];

   /*** derivatives for constraint 17 ***/

	J[108] = orth_d3m6_pl_pd[38];
	J[465] = x[20]*orth_d3m6_pl_pd[39];
	J[103] = orth_d3m6_pl_pd[36];
	J[444] = x[19]*orth_d3m6_pl_pd[37];
	J[98] = orth_d3m6_pl_pd[34];
	J[423] = x[18]*orth_d3m6_pl_pd[35];
	J[93] = orth_d3m6_pl_pd[32];
	J[402] = x[17]*orth_d3m6_pl_pd[33];
	J[88] = orth_d3m6_pl_pd[30];
	J[381] = x[16]*orth_d3m6_pl_pd[31];
	J[83] = orth_d3m6_pl_pd[28];
	J[360] = x[15]*orth_d3m6_pl_pd[29];
	J[51] = orth_d3m6_pl_pd[26];
	J[214] = x[9]*orth_d3m6_pl_pd[27];
	J[40] = orth_d3m6_pl_pd[24];
	J[193] = x[7]*orth_d3m6_pl_pd[25];
	J[29] = orth_d3m6_pl_pd[22];
	J[172] = x[5]*orth_d3m6_pl_pd[23];
	J[18] = orth_d3m6_pl_pd[20];
	J[112] = x[3]*orth_d3m6_pl_pd[21];

   /*** derivatives for constraint 18 ***/

	J[109] = orth_d3m6_pl_pd[58];
	J[528] = x[20]*orth_d3m6_pl_pd[59];
	J[104] = orth_d3m6_pl_pd[56];
	J[507] = x[19]*orth_d3m6_pl_pd[57];
	J[99] = orth_d3m6_pl_pd[54];
	J[486] = x[18]*orth_d3m6_pl_pd[55];
	J[78] = orth_d3m6_pl_pd[52];
	J[403] = x[14]*orth_d3m6_pl_pd[53];
	J[73] = orth_d3m6_pl_pd[50];
	J[382] = x[13]*orth_d3m6_pl_pd[51];
	J[68] = orth_d3m6_pl_pd[48];
	J[361] = x[12]*orth_d3m6_pl_pd[49];
	J[52] = orth_d3m6_pl_pd[46];
	J[277] = x[9]*orth_d3m6_pl_pd[47];
	J[41] = orth_d3m6_pl_pd[44];
	J[256] = x[7]*orth_d3m6_pl_pd[45];
	J[30] = orth_d3m6_pl_pd[42];
	J[235] = x[5]*orth_d3m6_pl_pd[43];
	J[1] = orth_d3m6_pl_pd[40];
	J[113] = x[0]*orth_d3m6_pl_pd[41];

   /*** derivatives for constraint 19 ***/

	J[110] = orth_d3m6_pl_pd[78];
	J[132] = x[20]*orth_d3m6_pl_pd[79];
	J[94] = orth_d3m6_pl_pd[76];
	J[508] = x[17]*orth_d3m6_pl_pd[77];
	J[89] = orth_d3m6_pl_pd[74];
	J[487] = x[16]*orth_d3m6_pl_pd[75];
	J[79] = orth_d3m6_pl_pd[72];
	J[445] = x[14]*orth_d3m6_pl_pd[73];
	J[74] = orth_d3m6_pl_pd[70];
	J[424] = x[13]*orth_d3m6_pl_pd[71];
	J[63] = orth_d3m6_pl_pd[68];
	J[362] = x[11]*orth_d3m6_pl_pd[69];
	J[53] = orth_d3m6_pl_pd[66];
	J[319] = x[9]*orth_d3m6_pl_pd[67];
	J[42] = orth_d3m6_pl_pd[64];
	J[298] = x[7]*orth_d3m6_pl_pd[65];
	J[19] = orth_d3m6_pl_pd[62];
	J[236] = x[3]*orth_d3m6_pl_pd[63];
	J[2] = orth_d3m6_pl_pd[60];
	J[173] = x[0]*orth_d3m6_pl_pd[61];

   /*** derivatives for constraint 20 ***/

	J[105] = orth_d3m6_pl_pd[98];
	J[133] = x[19]*orth_d3m6_pl_pd[99];
	J[95] = orth_d3m6_pl_pd[96];
	J[529] = x[17]*orth_d3m6_pl_pd[97];
	J[84] = orth_d3m6_pl_pd[94];
	J[488] = x[15]*orth_d3m6_pl_pd[95];
	J[80] = orth_d3m6_pl_pd[92];
	J[466] = x[14]*orth_d3m6_pl_pd[93];
	J[69] = orth_d3m6_pl_pd[90];
	J[425] = x[12]*orth_d3m6_pl_pd[91];
	J[64] = orth_d3m6_pl_pd[88];
	J[383] = x[11]*orth_d3m6_pl_pd[89];
	J[54] = orth_d3m6_pl_pd[86];
	J[340] = x[9]*orth_d3m6_pl_pd[87];
	J[31] = orth_d3m6_pl_pd[84];
	J[299] = x[5]*orth_d3m6_pl_pd[85];
	J[20] = orth_d3m6_pl_pd[82];
	J[257] = x[3]*orth_d3m6_pl_pd[83];
	J[3] = orth_d3m6_pl_pd[80];
	J[194] = x[0]*orth_d3m6_pl_pd[81];

   /*** derivatives for constraint 21 ***/

	J[100] = orth_d3m6_pl_pd[118];
	J[134] = x[18]*orth_d3m6_pl_pd[119];
	J[90] = orth_d3m6_pl_pd[116];
	J[530] = x[16]*orth_d3m6_pl_pd[117];
	J[85] = orth_d3m6_pl_pd[114];
	J[509] = x[15]*orth_d3m6_pl_pd[115];
	J[75] = orth_d3m6_pl_pd[112];
	J[467] = x[13]*orth_d3m6_pl_pd[113];
	J[70] = orth_d3m6_pl_pd[110];
	J[446] = x[12]*orth_d3m6_pl_pd[111];
	J[65] = orth_d3m6_pl_pd[108];
	J[404] = x[11]*orth_d3m6_pl_pd[109];
	J[43] = orth_d3m6_pl_pd[106];
	J[341] = x[7]*orth_d3m6_pl_pd[107];
	J[32] = orth_d3m6_pl_pd[104];
	J[320] = x[5]*orth_d3m6_pl_pd[105];
	J[21] = orth_d3m6_pl_pd[102];
	J[278] = x[3]*orth_d3m6_pl_pd[103];
	J[4] = orth_d3m6_pl_pd[100];
	J[215] = x[0]*orth_d3m6_pl_pd[101];

   /*** derivatives for constraint 22 ***/

	J[237] = x[24];
	J[195] = x[26];
	J[258] = -x[23];
	J[174] = -x[27];
	J[300] = x[21];
	J[114] = x[29];

   /*** derivatives for constraint 23 ***/

	J[363] = x[24];
	J[196] = x[32];
	J[384] = -x[23];
	J[175] = -x[33];
	J[426] = x[21];
	J[115] = x[35];

   /*** derivatives for constraint 24 ***/

	J[238] = x[25];
	J[216] = x[26];
	J[279] = -x[23];
	J[176] = -x[28];
	J[321] = x[21];
	J[116] = x[30];

   /*** derivatives for constraint 25 ***/

	J[364] = x[25];
	J[217] = x[32];
	J[405] = -x[23];
	J[177] = -x[34];
	J[447] = x[21];
	J[117] = x[36];

   /*** derivatives for constraint 26 ***/

	J[259] = x[25];
	J[218] = x[27];
	J[280] = -x[24];
	J[197] = -x[28];
	J[342] = x[21];
	J[118] = x[31];

   /*** derivatives for constraint 27 ***/

	J[385] = x[25];
	J[219] = x[33];
	J[406] = -x[24];
	J[198] = -x[34];
	J[468] = x[21];
	J[119] = x[37];

   /*** derivatives for constraint 28 ***/

	J[365] = x[27];
	J[260] = x[32];
	J[386] = -x[26];
	J[239] = -x[33];
	J[489] = x[21];
	J[120] = x[38];

   /*** derivatives for constraint 29 ***/

	J[366] = x[28];
	J[281] = x[32];
	J[407] = -x[26];
	J[240] = -x[34];
	J[510] = x[21];
	J[121] = x[39];

   /*** derivatives for constraint 30 ***/

	J[387] = x[28];
	J[282] = x[33];
	J[408] = -x[27];
	J[261] = -x[34];
	J[531] = x[21];
	J[122] = x[40];

   /*** derivatives for constraint 31 ***/

	J[301] = x[25];
	J[220] = x[29];
	J[322] = -x[24];
	J[199] = -x[30];
	J[343] = x[23];
	J[178] = x[31];

   /*** derivatives for constraint 32 ***/

	J[427] = x[25];
	J[221] = x[35];
	J[448] = -x[24];
	J[200] = -x[36];
	J[469] = x[23];
	J[179] = x[37];

   /*** derivatives for constraint 33 ***/

	J[367] = x[29];
	J[302] = x[32];
	J[428] = -x[26];
	J[241] = -x[35];
	J[490] = x[23];
	J[180] = x[38];

   /*** derivatives for constraint 34 ***/

	J[368] = x[30];
	J[323] = x[32];
	J[449] = -x[26];
	J[242] = -x[36];
	J[511] = x[23];
	J[181] = x[39];

   /*** derivatives for constraint 35 ***/

	J[429] = x[30];
	J[324] = x[35];
	J[450] = -x[29];
	J[303] = -x[36];
	J[182] = x[22];
	J[135] = x[23];

   /*** derivatives for constraint 36 ***/

	J[388] = x[29];
	J[304] = x[33];
	J[430] = -x[27];
	J[262] = -x[35];
	J[491] = x[24];
	J[201] = x[38];

   /*** derivatives for constraint 37 ***/

	J[389] = x[31];
	J[344] = x[33];
	J[470] = -x[27];
	J[263] = -x[37];
	J[532] = x[24];
	J[202] = x[40];

   /*** derivatives for constraint 38 ***/

	J[431] = x[31];
	J[345] = x[35];
	J[471] = -x[29];
	J[305] = -x[37];
	J[203] = x[22];
	J[136] = x[24];

   /*** derivatives for constraint 39 ***/

	J[409] = x[30];
	J[325] = x[34];
	J[451] = -x[28];
	J[283] = -x[36];
	J[512] = x[25];
	J[222] = x[39];

   /*** derivatives for constraint 40 ***/

	J[410] = x[31];
	J[346] = x[34];
	J[472] = -x[28];
	J[284] = -x[37];
	J[533] = x[25];
	J[223] = x[40];

   /*** derivatives for constraint 41 ***/

	J[452] = x[31];
	J[347] = x[36];
	J[473] = -x[30];
	J[326] = -x[37];
	J[224] = x[22];
	J[137] = x[25];

   /*** derivatives for constraint 42 ***/

	J[306] = x[28];
	J[285] = x[29];
	J[327] = -x[27];
	J[264] = -x[30];
	J[348] = x[26];
	J[243] = x[31];

   /*** derivatives for constraint 43 ***/

	J[492] = x[28];
	J[286] = x[38];
	J[513] = -x[27];
	J[265] = -x[39];
	J[534] = x[26];
	J[244] = x[40];

   /*** derivatives for constraint 44 ***/

	J[493] = x[30];
	J[328] = x[38];
	J[514] = -x[29];
	J[307] = -x[39];
	J[245] = x[22];
	J[138] = x[26];

   /*** derivatives for constraint 45 ***/

	J[494] = x[31];
	J[349] = x[38];
	J[535] = -x[29];
	J[308] = -x[40];
	J[266] = x[22];
	J[139] = x[27];

   /*** derivatives for constraint 46 ***/

	J[515] = x[31];
	J[350] = x[39];
	J[536] = -x[30];
	J[329] = -x[40];
	J[287] = x[22];
	J[140] = x[28];

   /*** derivatives for constraint 47 ***/

	J[432] = x[34];
	J[411] = x[35];
	J[453] = -x[33];
	J[390] = -x[36];
	J[474] = x[32];
	J[369] = x[37];

   /*** derivatives for constraint 48 ***/

	J[495] = x[34];
	J[412] = x[38];
	J[516] = -x[33];
	J[391] = -x[39];
	J[537] = x[32];
	J[370] = x[40];

   /*** derivatives for constraint 49 ***/

	J[496] = x[36];
	J[454] = x[38];
	J[517] = -x[35];
	J[433] = -x[39];
	J[371] = x[22];
	J[141] = x[32];

   /*** derivatives for constraint 50 ***/

	J[497] = x[37];
	J[475] = x[38];
	J[538] = -x[35];
	J[434] = -x[40];
	J[392] = x[22];
	J[142] = x[33];

   /*** derivatives for constraint 51 ***/

	J[518] = x[37];
	J[476] = x[39];
	J[539] = -x[36];
	J[455] = -x[40];
	J[413] = x[22];
	J[143] = x[34];

   /*** derivatives for constraint 52 ***/

	J[498] = -x[25];
	J[225] = -x[38];
	J[519] = x[24];
	J[204] = x[39];
	J[540] = -x[23];
	J[183] = -x[40];
	J[144] = x[21];
	J[123] = x[22];

   /*** derivatives for constraint 53 ***/

	J[372] = -x[31];
	J[351] = -x[32];
	J[477] = x[26];
	J[246] = x[37];
	J[541] = -x[23];
	J[184] = -x[40];
	J[145] = x[21];
	J[124] = x[22];

   /*** derivatives for constraint 54 ***/

	J[393] = x[30];
	J[330] = x[33];
	J[456] = -x[27];
	J[267] = -x[36];
	J[520] = x[24];
	J[205] = x[39];
	J[146] = x[21];
	J[125] = x[22];

   /*** derivatives for constraint 55 ***/

	J[414] = -x[29];
	J[309] = -x[34];
	J[435] = x[28];
	J[288] = x[35];
	J[499] = -x[25];
	J[226] = -x[38];
	J[147] = x[21];
	J[126] = x[22];

   /*** derivatives for constraint 56 ***/

	J[436] = x[28];
	J[289] = x[35];
	J[457] = -x[27];
	J[268] = -x[36];
	J[478] = x[26];
	J[247] = x[37];
	J[148] = x[21];
	J[127] = x[22];

   /*** derivatives for constraint 57 ***/

	J[373] = -x[31];
	J[352] = -x[32];
	J[394] = x[30];
	J[331] = x[33];
	J[415] = -x[29];
	J[310] = -x[34];
	J[149] = x[21];
	J[128] = x[22];

   /*** derivatives for constraint 58 ***/

	J[416] = -x[29];
	J[311] = -x[34];
	J[437] = x[28];
	J[290] = x[35];
	J[521] = -x[24];
	J[206] = -x[39];
	J[542] = x[23];
	J[185] = x[40];

   /*** derivatives for constraint 59 ***/

	J[395] = x[30];
	J[332] = x[33];
	J[458] = -x[27];
	J[269] = -x[36];
	J[500] = x[25];
	J[227] = x[38];
	J[543] = x[23];
	J[186] = x[40];

   /*** derivatives for constraint 60 ***/

	J[396] = x[30];
	J[333] = x[33];
	J[417] = -x[29];
	J[312] = -x[34];
	J[479] = -x[26];
	J[248] = -x[37];
	J[544] = x[23];
	J[187] = x[40];

   /*** derivatives for constraint 61 ***/

	J[374] = x[31];
	J[353] = x[32];
	J[438] = x[28];
	J[291] = x[35];
	J[459] = -x[27];
	J[270] = -x[36];
	J[545] = x[23];
	J[188] = x[40];

   /*** derivatives for constraint 62 ***/

	J[375] = x[31];
	J[354] = x[32];
	J[480] = -x[26];
	J[249] = -x[37];
	J[501] = -x[25];
	J[228] = -x[38];
	J[522] = x[24];
	J[207] = x[39];

   /*** derivatives for constraint 63 ***/

	J[397] = x[30];
	J[334] = x[33];
	J[439] = -x[28];
	J[292] = -x[35];
	J[481] = -x[26];
	J[250] = -x[37];
	J[523] = x[24];
	J[208] = x[39];

   /*** derivatives for constraint 64 ***/

	J[376] = x[31];
	J[355] = x[32];
	J[418] = x[29];
	J[313] = x[34];
	J[460] = -x[27];
	J[271] = -x[36];
	J[524] = x[24];
	J[209] = x[39];

   /*** derivatives for constraint 65 ***/

	J[419] = x[29];
	J[314] = x[34];
	J[461] = -x[27];
	J[272] = -x[36];
	J[482] = x[26];
	J[251] = x[37];
	J[502] = x[25];
	J[229] = x[38];

   /*** derivatives for constraint 66 ***/

	J[377] = -x[31];
	J[356] = -x[32];
	J[398] = x[30];
	J[335] = x[33];
	J[440] = -x[28];
	J[293] = -x[35];
	J[503] = x[25];
	J[230] = x[38];

   /*** derivatives for constraint 67 ***/

	J[549] = 1.;

   /*** derivatives for constraint 68 ***/

	J[10] = 1.;
	J[16] = 1.;
	J[27] = 1.;
	J[38] = 1.;
	J[49] = 1.;
	J[60] = 1.;

   /*** derivatives for constraint 69 ***/

	J[129] = 1.;
	J[150] = -1.;

   /*** derivatives for constraint 70 ***/

	J[151] = -1.;
	J[189] = 1.;

   /*** derivatives for constraint 71 ***/

	J[152] = -1.;
	J[210] = 1.;

   /*** derivatives for constraint 72 ***/

	J[153] = -1.;
	J[231] = 1.;

   /*** derivatives for constraint 73 ***/

	J[154] = -1.;
	J[252] = 1.;

   /*** derivatives for constraint 74 ***/

	J[155] = -1.;
	J[273] = 1.;

   /*** derivatives for constraint 75 ***/

	J[156] = -1.;
	J[294] = 1.;

   /*** derivatives for constraint 76 ***/

	J[157] = -1.;
	J[315] = 1.;

   /*** derivatives for constraint 77 ***/

	J[158] = -1.;
	J[336] = 1.;

   /*** derivatives for constraint 78 ***/

	J[159] = -1.;
	J[357] = 1.;

   /*** derivatives for constraint 79 ***/

	J[160] = -1.;
	J[378] = 1.;

   /*** derivatives for constraint 80 ***/

	J[161] = -1.;
	J[399] = 1.;

   /*** derivatives for constraint 81 ***/

	J[162] = -1.;
	J[420] = 1.;

   /*** derivatives for constraint 82 ***/

	J[163] = -1.;
	J[441] = 1.;

   /*** derivatives for constraint 83 ***/

	J[164] = -1.;
	J[462] = 1.;

   /*** derivatives for constraint 84 ***/

	J[165] = -1.;
	J[483] = 1.;

   /*** derivatives for constraint 85 ***/

	J[166] = -1.;
	J[504] = 1.;

   /*** derivatives for constraint 86 ***/

	J[167] = -1.;
	J[525] = 1.;

   /*** derivatives for constraint 87 ***/

	J[168] = -1.;
	J[546] = 1.;

   /*** derivatives for constraint 88 ***/

	J[130] = 1.;
	J[550] = -1.;

   /*** derivatives for constraint 89 ***/

	J[131] = -1.;
	J[551] = -1.;

   /*** derivatives for constraint 90 ***/

	J[190] = 1.;
	J[552] = -1.;

   /*** derivatives for constraint 91 ***/

	J[191] = -1.;
	J[553] = -1.;

   /*** derivatives for constraint 92 ***/

	J[211] = 1.;
	J[554] = -1.;

   /*** derivatives for constraint 93 ***/

	J[212] = -1.;
	J[555] = -1.;

   /*** derivatives for constraint 94 ***/

	J[232] = 1.;
	J[556] = -1.;

   /*** derivatives for constraint 95 ***/

	J[233] = -1.;
	J[557] = -1.;

   /*** derivatives for constraint 96 ***/

	J[253] = 1.;
	J[558] = -1.;

   /*** derivatives for constraint 97 ***/

	J[254] = -1.;
	J[559] = -1.;

   /*** derivatives for constraint 98 ***/

	J[274] = 1.;
	J[560] = -1.;

   /*** derivatives for constraint 99 ***/

	J[275] = -1.;
	J[561] = -1.;

   /*** derivatives for constraint 100 ***/

	J[295] = 1.;
	J[562] = -1.;

   /*** derivatives for constraint 101 ***/

	J[296] = -1.;
	J[563] = -1.;

   /*** derivatives for constraint 102 ***/

	J[316] = 1.;
	J[564] = -1.;

   /*** derivatives for constraint 103 ***/

	J[317] = -1.;
	J[565] = -1.;

   /*** derivatives for constraint 104 ***/

	J[337] = 1.;
	J[566] = -1.;

   /*** derivatives for constraint 105 ***/

	J[338] = -1.;
	J[567] = -1.;

   /*** derivatives for constraint 106 ***/

	J[358] = 1.;
	J[568] = -1.;

   /*** derivatives for constraint 107 ***/

	J[359] = -1.;
	J[569] = -1.;

   /*** derivatives for constraint 108 ***/

	J[379] = 1.;
	J[570] = -1.;

   /*** derivatives for constraint 109 ***/

	J[380] = -1.;
	J[571] = -1.;

   /*** derivatives for constraint 110 ***/

	J[400] = 1.;
	J[572] = -1.;

   /*** derivatives for constraint 111 ***/

	J[401] = -1.;
	J[573] = -1.;

   /*** derivatives for constraint 112 ***/

	J[421] = 1.;
	J[574] = -1.;

   /*** derivatives for constraint 113 ***/

	J[422] = -1.;
	J[575] = -1.;

   /*** derivatives for constraint 114 ***/

	J[442] = 1.;
	J[576] = -1.;

   /*** derivatives for constraint 115 ***/

	J[443] = -1.;
	J[577] = -1.;

   /*** derivatives for constraint 116 ***/

	J[463] = 1.;
	J[578] = -1.;

   /*** derivatives for constraint 117 ***/

	J[464] = -1.;
	J[579] = -1.;

   /*** derivatives for constraint 118 ***/

	J[484] = 1.;
	J[580] = -1.;

   /*** derivatives for constraint 119 ***/

	J[485] = -1.;
	J[581] = -1.;

   /*** derivatives for constraint 120 ***/

	J[505] = 1.;
	J[582] = -1.;

   /*** derivatives for constraint 121 ***/

	J[506] = -1.;
	J[583] = -1.;

   /*** derivatives for constraint 122 ***/

	J[526] = 1.;
	J[584] = -1.;

   /*** derivatives for constraint 123 ***/

	J[527] = -1.;
	J[585] = -1.;

   /*** derivatives for constraint 124 ***/

	J[547] = 1.;
	J[586] = -1.;

   /*** derivatives for constraint 125 ***/

	J[548] = -1.;
	J[587] = -1.;

   /*** derivatives for constraint 126 ***/

	J[169] = 1.;
	J[588] = -1.;

   /*** derivatives for constraint 127 ***/

	J[170] = -1.;
	J[589] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
