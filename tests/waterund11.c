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
 fint waterund11_auxcom_[1] = { 28 /* nlc */ };
 fint waterund11_funcom_[381] = {
	64 /* nvar */,
	1 /* nobj */,
	64 /* ncon */,
	310 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	12,
	23,
	34,
	40,
	46,
	52,
	58,
	64,
	70,
	76,
	82,
	88,
	94,
	100,
	106,
	109,
	112,
	115,
	118,
	121,
	124,
	127,
	130,
	133,
	136,
	139,
	142,
	148,
	154,
	160,
	166,
	172,
	178,
	184,
	190,
	196,
	202,
	208,
	214,
	218,
	222,
	226,
	230,
	234,
	238,
	242,
	246,
	251,
	256,
	261,
	266,
	270,
	274,
	278,
	282,
	283,
	284,
	285,
	286,
	287,
	293,
	299,
	305,
	311,

	/* rownos */
	1,
	2,
	3,
	4,
	13,
	14,
	15,
	16,
	29,
	33,
	61,
	5,
	6,
	7,
	8,
	17,
	18,
	19,
	20,
	30,
	34,
	62,
	9,
	10,
	11,
	12,
	21,
	22,
	23,
	24,
	31,
	35,
	63,
	1,
	2,
	3,
	4,
	29,
	33,
	5,
	6,
	7,
	8,
	30,
	33,
	9,
	10,
	11,
	12,
	31,
	33,
	25,
	26,
	27,
	28,
	32,
	33,
	1,
	2,
	3,
	4,
	29,
	34,
	5,
	6,
	7,
	8,
	30,
	34,
	9,
	10,
	11,
	12,
	31,
	34,
	25,
	26,
	27,
	28,
	32,
	34,
	1,
	2,
	3,
	4,
	29,
	35,
	5,
	6,
	7,
	8,
	30,
	35,
	9,
	10,
	11,
	12,
	31,
	35,
	25,
	26,
	27,
	28,
	32,
	35,
	1,
	13,
	37,
	2,
	14,
	38,
	3,
	15,
	39,
	4,
	16,
	40,
	5,
	17,
	41,
	6,
	18,
	42,
	7,
	19,
	43,
	8,
	20,
	44,
	9,
	21,
	45,
	10,
	22,
	46,
	11,
	23,
	47,
	12,
	24,
	48,
	1,
	5,
	9,
	13,
	25,
	49,
	2,
	6,
	10,
	14,
	26,
	50,
	3,
	7,
	11,
	15,
	27,
	51,
	4,
	8,
	12,
	16,
	28,
	52,
	1,
	5,
	9,
	17,
	25,
	53,
	2,
	6,
	10,
	18,
	26,
	54,
	3,
	7,
	11,
	19,
	27,
	55,
	4,
	8,
	12,
	20,
	28,
	56,
	1,
	5,
	9,
	21,
	25,
	57,
	2,
	6,
	10,
	22,
	26,
	58,
	3,
	7,
	11,
	23,
	27,
	59,
	4,
	8,
	12,
	24,
	28,
	60,
	1,
	3,
	4,
	29,
	5,
	7,
	8,
	30,
	9,
	11,
	12,
	31,
	25,
	27,
	28,
	32,
	1,
	2,
	4,
	29,
	5,
	6,
	8,
	30,
	9,
	10,
	12,
	31,
	25,
	26,
	28,
	32,
	1,
	2,
	3,
	4,
	29,
	5,
	6,
	7,
	8,
	30,
	9,
	10,
	11,
	12,
	31,
	25,
	26,
	27,
	28,
	32,
	2,
	3,
	4,
	29,
	6,
	7,
	8,
	30,
	10,
	11,
	12,
	31,
	26,
	27,
	28,
	32,
	64,
	33,
	34,
	35,
	36,
	1,
	2,
	3,
	4,
	29,
	36,
	5,
	6,
	7,
	8,
	30,
	36,
	9,
	10,
	11,
	12,
	31,
	36,
	25,
	26,
	27,
	28,
	32,
	36 };

 real waterund11_boundc_[1+128+128] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
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
		-18598.,
		-18598.,
		-3672.,
		-3672.,
		-7582.,
		-7582.,
		-11662.,
		-11662.,
		-1776.,
		-1776.,
		-576.,
		-576.,
		-4236.,
		-4236.,
		-2724.,
		-2724.,
		-5130.,
		-5130.,
		-14310.,
		-14310.,
		-1035.,
		-1035.,
		-33975.,
		-33975.,
		-13015.,
		1.7e308,
		-69160.,
		1.7e308,
		-65265.,
		1.7e308,
		-48260.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-95.,
		-95.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-50.,
		-50.,
		-1.7e308,
		326.,
		-1.7e308,
		842.,
		-1.7e308,
		733.,
		-1.7e308,
		214.,
		-1.7e308,
		751.,
		-1.7e308,
		963.,
		-1.7e308,
		337.,
		-1.7e308,
		762.,
		-1.7e308,
		837.,
		-1.7e308,
		695.,
		-1.7e308,
		991.,
		-1.7e308,
		180.,
		-1.7e308,
		873.,
		-1.7e308,
		950.,
		-1.7e308,
		956.,
		-1.7e308,
		557.,
		-1.7e308,
		899.,
		-1.7e308,
		1011.,
		-1.7e308,
		690.,
		-1.7e308,
		989.,
		-1.7e308,
		951.,
		-1.7e308,
		1013.,
		-1.7e308,
		1014.,
		-1.7e308,
		935.,
		-1.7e308,
		34.,
		-1.7e308,
		12.,
		-1.7e308,
		45.,
		-1.7e308,
		0.};

 real waterund11_x0comn_[64] = {
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
		0. };

 static real waterund11_pd[12];
static real waterund11_old_x[64];
static int waterund11_xkind = -1;

 static int
waterund11_xcheck(real *x)
{
	real *x1 = waterund11_old_x, *xe = x + 64;
	errno = 0;
	if (waterund11_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	waterund11_xkind = 0;
	return 1;
	}
 real
waterund11_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (waterund11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[39];
	rv += x[40];
	rv += x[41];
	rv += x[42];
	rv += x[43];
	rv += x[44];
	rv += x[45];
	rv += x[46];
	rv += x[47];
	rv += x[48];
	rv += x[49];
	rv += x[50];
	rv += x[51];
	rv += x[52];
	rv += x[53];
	rv += x[54];
	;}

	if (wantfg & 2) {
	g[39] = 1.;
	g[40] = 1.;
	g[41] = 1.;
	g[42] = 1.;
	g[43] = 1.;
	g[44] = 1.;
	g[45] = 1.;
	g[46] = 1.;
	g[47] = 1.;
	g[48] = 1.;
	g[49] = 1.;
	g[50] = 1.;
	g[51] = 1.;
	g[52] = 1.;
	g[53] = 1.;
	g[54] = 1.;
	}

	return rv;
}

 void
waterund11_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (waterund11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[15];
	v[1] = -v[0];
	v[0] = x[3] * x[27];
	v[1] += v[0];
	v[0] = x[7] * x[31];
	v[1] += v[0];
	v[0] = x[11] * x[35];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -2.*x[39];
	t1 += -3.*x[43];
	t1 += -4.*x[47];
	t1 += -623.*x[60];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[16];
	v[1] = -v[0];
	v[0] = x[3] * x[28];
	v[1] += v[0];
	v[0] = x[7] * x[32];
	v[1] += v[0];
	v[0] = x[11] * x[36];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -2.*x[43];
	t1 += -5.*x[47];
	t1 += -2.*x[51];
	t1 += -904.*x[60];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[17];
	v[1] = -v[0];
	v[0] = x[3] * x[29];
	v[1] += v[0];
	v[0] = x[7] * x[33];
	v[1] += v[0];
	v[0] = x[11] * x[37];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -6.*x[39];
	t1 += -2.*x[47];
	t1 += -x[51];
	t1 += -846.*x[60];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] * x[18];
	v[1] = -v[0];
	v[0] = x[3] * x[30];
	v[1] += v[0];
	v[0] = x[7] * x[34];
	v[1] += v[0];
	v[0] = x[11] * x[38];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -5.*x[39];
	t1 += -3.*x[43];
	t1 += -x[47];
	t1 += -3.*x[51];
	t1 += -611.*x[60];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] * x[19];
	v[1] = -v[0];
	v[0] = x[4] * x[27];
	v[1] += v[0];
	v[0] = x[8] * x[31];
	v[1] += v[0];
	v[0] = x[12] * x[35];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -2.*x[40];
	t1 += -3.*x[44];
	t1 += -4.*x[48];
	t1 += -623.*x[61];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] * x[20];
	v[1] = -v[0];
	v[0] = x[4] * x[28];
	v[1] += v[0];
	v[0] = x[8] * x[32];
	v[1] += v[0];
	v[0] = x[12] * x[36];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -2.*x[44];
	t1 += -5.*x[48];
	t1 += -2.*x[52];
	t1 += -904.*x[61];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[1] * x[21];
	v[1] = -v[0];
	v[0] = x[4] * x[29];
	v[1] += v[0];
	v[0] = x[8] * x[33];
	v[1] += v[0];
	v[0] = x[12] * x[37];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -6.*x[40];
	t1 += -2.*x[48];
	t1 += -x[52];
	t1 += -846.*x[61];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[1] * x[22];
	v[1] = -v[0];
	v[0] = x[4] * x[30];
	v[1] += v[0];
	v[0] = x[8] * x[34];
	v[1] += v[0];
	v[0] = x[12] * x[38];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -5.*x[40];
	t1 += -3.*x[44];
	t1 += -x[48];
	t1 += -3.*x[52];
	t1 += -611.*x[61];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] * x[23];
	v[1] = -v[0];
	v[0] = x[5] * x[27];
	v[1] += v[0];
	v[0] = x[9] * x[31];
	v[1] += v[0];
	v[0] = x[13] * x[35];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -2.*x[41];
	t1 += -3.*x[45];
	t1 += -4.*x[49];
	t1 += -623.*x[62];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[2] * x[24];
	v[1] = -v[0];
	v[0] = x[5] * x[28];
	v[1] += v[0];
	v[0] = x[9] * x[32];
	v[1] += v[0];
	v[0] = x[13] * x[36];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -2.*x[45];
	t1 += -5.*x[49];
	t1 += -2.*x[53];
	t1 += -904.*x[62];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[2] * x[25];
	v[1] = -v[0];
	v[0] = x[5] * x[29];
	v[1] += v[0];
	v[0] = x[9] * x[33];
	v[1] += v[0];
	v[0] = x[13] * x[37];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -6.*x[41];
	t1 += -2.*x[49];
	t1 += -x[53];
	t1 += -846.*x[62];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[2] * x[26];
	v[1] = -v[0];
	v[0] = x[5] * x[30];
	v[1] += v[0];
	v[0] = x[9] * x[34];
	v[1] += v[0];
	v[0] = x[13] * x[38];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -5.*x[41];
	t1 += -3.*x[45];
	t1 += -x[49];
	t1 += -3.*x[53];
	t1 += -611.*x[62];
	c[11] = t1;

  /***  constraint 13  ***/

	waterund11_pd[0] = x[27] - x[15];
	v[1] = x[0] * waterund11_pd[0];
	v[2] = -v[1];
	c[12] = v[2];

  /***  constraint 14  ***/

	waterund11_pd[1] = x[28] - x[16];
	v[1] = x[0] * waterund11_pd[1];
	v[2] = -v[1];
	c[13] = v[2];

  /***  constraint 15  ***/

	waterund11_pd[2] = x[29] - x[17];
	v[1] = x[0] * waterund11_pd[2];
	v[2] = -v[1];
	c[14] = v[2];

  /***  constraint 16  ***/

	waterund11_pd[3] = x[30] - x[18];
	v[1] = x[0] * waterund11_pd[3];
	v[2] = -v[1];
	c[15] = v[2];

  /***  constraint 17  ***/

	waterund11_pd[4] = x[31] - x[19];
	v[1] = x[1] * waterund11_pd[4];
	v[2] = -v[1];
	c[16] = v[2];

  /***  constraint 18  ***/

	waterund11_pd[5] = x[32] - x[20];
	v[1] = x[1] * waterund11_pd[5];
	v[2] = -v[1];
	c[17] = v[2];

  /***  constraint 19  ***/

	waterund11_pd[6] = x[33] - x[21];
	v[1] = x[1] * waterund11_pd[6];
	v[2] = -v[1];
	c[18] = v[2];

  /***  constraint 20  ***/

	waterund11_pd[7] = x[34] - x[22];
	v[1] = x[1] * waterund11_pd[7];
	v[2] = -v[1];
	c[19] = v[2];

  /***  constraint 21  ***/

	waterund11_pd[8] = x[35] - x[23];
	v[1] = x[2] * waterund11_pd[8];
	v[2] = -v[1];
	c[20] = v[2];

  /***  constraint 22  ***/

	waterund11_pd[9] = x[36] - x[24];
	v[1] = x[2] * waterund11_pd[9];
	v[2] = -v[1];
	c[21] = v[2];

  /***  constraint 23  ***/

	waterund11_pd[10] = x[37] - x[25];
	v[1] = x[2] * waterund11_pd[10];
	v[2] = -v[1];
	c[22] = v[2];

  /***  constraint 24  ***/

	waterund11_pd[11] = x[38] - x[26];
	v[1] = x[2] * waterund11_pd[11];
	v[2] = -v[1];
	c[23] = v[2];

  /***  constraint 25  ***/

	v[0] = x[6] * x[27];
	v[1] = x[10] * x[31];
	v[0] += v[1];
	v[1] = x[14] * x[35];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + -2.*x[42];
	t1 += -3.*x[46];
	t1 += -4.*x[50];
	t1 += -623.*x[63];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[6] * x[28];
	v[1] = x[10] * x[32];
	v[0] += v[1];
	v[1] = x[14] * x[36];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + -2.*x[46];
	t1 += -5.*x[50];
	t1 += -2.*x[54];
	t1 += -904.*x[63];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[6] * x[29];
	v[1] = x[10] * x[33];
	v[0] += v[1];
	v[1] = x[14] * x[37];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + -6.*x[42];
	t1 += -2.*x[50];
	t1 += -x[54];
	t1 += -846.*x[63];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[6] * x[30];
	v[1] = x[10] * x[34];
	v[0] += v[1];
	v[1] = x[14] * x[38];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + -5.*x[42];
	t1 += -3.*x[46];
	t1 += -x[50];
	t1 += -3.*x[54];
	t1 += -611.*x[63];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += -x[7];
	t1 += -x[11];
	t1 += -x[39];
	t1 += -x[43];
	t1 += -x[47];
	t1 += -x[51];
	t1 += -x[60];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += -x[8];
	t1 += -x[12];
	t1 += -x[40];
	t1 += -x[44];
	t1 += -x[48];
	t1 += -x[52];
	t1 += -x[61];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[2];
	t1 += -x[5];
	t1 += -x[9];
	t1 += -x[13];
	t1 += -x[41];
	t1 += -x[45];
	t1 += -x[49];
	t1 += -x[53];
	t1 += -x[62];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[6];
	t1 += -x[10];
	t1 += -x[14];
	t1 += -x[42];
	t1 += -x[46];
	t1 += -x[50];
	t1 += -x[54];
	t1 += -x[63];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -x[56];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[1];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[57];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[2];
	t1 += -x[11];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[14];
	t1 += -x[58];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[59];
	t1 += -x[60];
	t1 += -x[61];
	t1 += -x[62];
	t1 += -x[63];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[15];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[16];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[17];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[18];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[19];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[20];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[21];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[22];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[23];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[24];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[25];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[26];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[27];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[28];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[29];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[30];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[31];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[32];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[33];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[34];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[35];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[36];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[37];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[38];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[0];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[1];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[2];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[55];
	c[63] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[189] = -x[11];
	J[81] = -x[35];
	J[165] = -x[7];
	J[57] = -x[31];
	J[141] = -x[3];
	J[33] = -x[27];
	J[105] = x[0];
	J[0] = x[15];
	J[213] = -2.;
	J[229] = -3.;
	J[245] = -4.;
	J[286] = -623.;

   /*** derivatives for constraint 2 ***/

	J[195] = -x[11];
	J[82] = -x[36];
	J[171] = -x[7];
	J[58] = -x[32];
	J[147] = -x[3];
	J[34] = -x[28];
	J[108] = x[0];
	J[1] = x[16];
	J[230] = -2.;
	J[246] = -5.;
	J[265] = -2.;
	J[287] = -904.;

   /*** derivatives for constraint 3 ***/

	J[201] = -x[11];
	J[83] = -x[37];
	J[177] = -x[7];
	J[59] = -x[33];
	J[153] = -x[3];
	J[35] = -x[29];
	J[111] = x[0];
	J[2] = x[17];
	J[214] = -6.;
	J[247] = -2.;
	J[266] = -1.;
	J[288] = -846.;

   /*** derivatives for constraint 4 ***/

	J[207] = -x[11];
	J[84] = -x[38];
	J[183] = -x[7];
	J[60] = -x[34];
	J[159] = -x[3];
	J[36] = -x[30];
	J[114] = x[0];
	J[3] = x[18];
	J[215] = -5.;
	J[231] = -3.;
	J[248] = -1.;
	J[267] = -3.;
	J[289] = -611.;

   /*** derivatives for constraint 5 ***/

	J[190] = -x[12];
	J[87] = -x[35];
	J[166] = -x[8];
	J[63] = -x[31];
	J[142] = -x[4];
	J[39] = -x[27];
	J[117] = x[1];
	J[11] = x[19];
	J[217] = -2.;
	J[233] = -3.;
	J[250] = -4.;
	J[292] = -623.;

   /*** derivatives for constraint 6 ***/

	J[196] = -x[12];
	J[88] = -x[36];
	J[172] = -x[8];
	J[64] = -x[32];
	J[148] = -x[4];
	J[40] = -x[28];
	J[120] = x[1];
	J[12] = x[20];
	J[234] = -2.;
	J[251] = -5.;
	J[269] = -2.;
	J[293] = -904.;

   /*** derivatives for constraint 7 ***/

	J[202] = -x[12];
	J[89] = -x[37];
	J[178] = -x[8];
	J[65] = -x[33];
	J[154] = -x[4];
	J[41] = -x[29];
	J[123] = x[1];
	J[13] = x[21];
	J[218] = -6.;
	J[252] = -2.;
	J[270] = -1.;
	J[294] = -846.;

   /*** derivatives for constraint 8 ***/

	J[208] = -x[12];
	J[90] = -x[38];
	J[184] = -x[8];
	J[66] = -x[34];
	J[160] = -x[4];
	J[42] = -x[30];
	J[126] = x[1];
	J[14] = x[22];
	J[219] = -5.;
	J[235] = -3.;
	J[253] = -1.;
	J[271] = -3.;
	J[295] = -611.;

   /*** derivatives for constraint 9 ***/

	J[191] = -x[13];
	J[93] = -x[35];
	J[167] = -x[9];
	J[69] = -x[31];
	J[143] = -x[5];
	J[45] = -x[27];
	J[129] = x[2];
	J[22] = x[23];
	J[221] = -2.;
	J[237] = -3.;
	J[255] = -4.;
	J[298] = -623.;

   /*** derivatives for constraint 10 ***/

	J[197] = -x[13];
	J[94] = -x[36];
	J[173] = -x[9];
	J[70] = -x[32];
	J[149] = -x[5];
	J[46] = -x[28];
	J[132] = x[2];
	J[23] = x[24];
	J[238] = -2.;
	J[256] = -5.;
	J[273] = -2.;
	J[299] = -904.;

   /*** derivatives for constraint 11 ***/

	J[203] = -x[13];
	J[95] = -x[37];
	J[179] = -x[9];
	J[71] = -x[33];
	J[155] = -x[5];
	J[47] = -x[29];
	J[135] = x[2];
	J[24] = x[25];
	J[222] = -6.;
	J[257] = -2.;
	J[274] = -1.;
	J[300] = -846.;

   /*** derivatives for constraint 12 ***/

	J[209] = -x[13];
	J[96] = -x[38];
	J[185] = -x[9];
	J[72] = -x[34];
	J[161] = -x[5];
	J[48] = -x[30];
	J[138] = x[2];
	J[25] = x[26];
	J[223] = -5.;
	J[239] = -3.;
	J[258] = -1.;
	J[275] = -3.;
	J[301] = -611.;

   /*** derivatives for constraint 13 ***/

	J[4] = -waterund11_pd[0];
	J[106] = x[0];
	J[144] = -x[0];

   /*** derivatives for constraint 14 ***/

	J[5] = -waterund11_pd[1];
	J[109] = x[0];
	J[150] = -x[0];

   /*** derivatives for constraint 15 ***/

	J[6] = -waterund11_pd[2];
	J[112] = x[0];
	J[156] = -x[0];

   /*** derivatives for constraint 16 ***/

	J[7] = -waterund11_pd[3];
	J[115] = x[0];
	J[162] = -x[0];

   /*** derivatives for constraint 17 ***/

	J[15] = -waterund11_pd[4];
	J[118] = x[1];
	J[168] = -x[1];

   /*** derivatives for constraint 18 ***/

	J[16] = -waterund11_pd[5];
	J[121] = x[1];
	J[174] = -x[1];

   /*** derivatives for constraint 19 ***/

	J[17] = -waterund11_pd[6];
	J[124] = x[1];
	J[180] = -x[1];

   /*** derivatives for constraint 20 ***/

	J[18] = -waterund11_pd[7];
	J[127] = x[1];
	J[186] = -x[1];

   /*** derivatives for constraint 21 ***/

	J[26] = -waterund11_pd[8];
	J[130] = x[2];
	J[192] = -x[2];

   /*** derivatives for constraint 22 ***/

	J[27] = -waterund11_pd[9];
	J[133] = x[2];
	J[198] = -x[2];

   /*** derivatives for constraint 23 ***/

	J[28] = -waterund11_pd[10];
	J[136] = x[2];
	J[204] = -x[2];

   /*** derivatives for constraint 24 ***/

	J[29] = -waterund11_pd[11];
	J[139] = x[2];
	J[210] = -x[2];

   /*** derivatives for constraint 25 ***/

	J[193] = -x[14];
	J[99] = -x[35];
	J[169] = -x[10];
	J[75] = -x[31];
	J[145] = -x[6];
	J[51] = -x[27];
	J[225] = -2.;
	J[241] = -3.;
	J[260] = -4.;
	J[304] = -623.;

   /*** derivatives for constraint 26 ***/

	J[199] = -x[14];
	J[100] = -x[36];
	J[175] = -x[10];
	J[76] = -x[32];
	J[151] = -x[6];
	J[52] = -x[28];
	J[242] = -2.;
	J[261] = -5.;
	J[277] = -2.;
	J[305] = -904.;

   /*** derivatives for constraint 27 ***/

	J[205] = -x[14];
	J[101] = -x[37];
	J[181] = -x[10];
	J[77] = -x[33];
	J[157] = -x[6];
	J[53] = -x[29];
	J[226] = -6.;
	J[262] = -2.;
	J[278] = -1.;
	J[306] = -846.;

   /*** derivatives for constraint 28 ***/

	J[211] = -x[14];
	J[102] = -x[38];
	J[187] = -x[10];
	J[78] = -x[34];
	J[163] = -x[6];
	J[54] = -x[30];
	J[227] = -5.;
	J[243] = -3.;
	J[263] = -1.;
	J[279] = -3.;
	J[307] = -611.;

   /*** derivatives for constraint 29 ***/

	J[8] = 1.;
	J[37] = -1.;
	J[61] = -1.;
	J[85] = -1.;
	J[216] = -1.;
	J[232] = -1.;
	J[249] = -1.;
	J[268] = -1.;
	J[290] = -1.;

   /*** derivatives for constraint 30 ***/

	J[19] = 1.;
	J[43] = -1.;
	J[67] = -1.;
	J[91] = -1.;
	J[220] = -1.;
	J[236] = -1.;
	J[254] = -1.;
	J[272] = -1.;
	J[296] = -1.;

   /*** derivatives for constraint 31 ***/

	J[30] = 1.;
	J[49] = -1.;
	J[73] = -1.;
	J[97] = -1.;
	J[224] = -1.;
	J[240] = -1.;
	J[259] = -1.;
	J[276] = -1.;
	J[302] = -1.;

   /*** derivatives for constraint 32 ***/

	J[55] = -1.;
	J[79] = -1.;
	J[103] = -1.;
	J[228] = -1.;
	J[244] = -1.;
	J[264] = -1.;
	J[280] = -1.;
	J[308] = -1.;

   /*** derivatives for constraint 33 ***/

	J[9] = 1.;
	J[38] = -1.;
	J[44] = -1.;
	J[50] = -1.;
	J[56] = -1.;
	J[282] = -1.;

   /*** derivatives for constraint 34 ***/

	J[20] = 1.;
	J[62] = -1.;
	J[68] = -1.;
	J[74] = -1.;
	J[80] = -1.;
	J[283] = -1.;

   /*** derivatives for constraint 35 ***/

	J[31] = 1.;
	J[86] = -1.;
	J[92] = -1.;
	J[98] = -1.;
	J[104] = -1.;
	J[284] = -1.;

   /*** derivatives for constraint 36 ***/

	J[285] = -1.;
	J[291] = -1.;
	J[297] = -1.;
	J[303] = -1.;
	J[309] = -1.;

   /*** derivatives for constraint 37 ***/

	J[107] = 1.;

   /*** derivatives for constraint 38 ***/

	J[110] = 1.;

   /*** derivatives for constraint 39 ***/

	J[113] = 1.;

   /*** derivatives for constraint 40 ***/

	J[116] = 1.;

   /*** derivatives for constraint 41 ***/

	J[119] = 1.;

   /*** derivatives for constraint 42 ***/

	J[122] = 1.;

   /*** derivatives for constraint 43 ***/

	J[125] = 1.;

   /*** derivatives for constraint 44 ***/

	J[128] = 1.;

   /*** derivatives for constraint 45 ***/

	J[131] = 1.;

   /*** derivatives for constraint 46 ***/

	J[134] = 1.;

   /*** derivatives for constraint 47 ***/

	J[137] = 1.;

   /*** derivatives for constraint 48 ***/

	J[140] = 1.;

   /*** derivatives for constraint 49 ***/

	J[146] = 1.;

   /*** derivatives for constraint 50 ***/

	J[152] = 1.;

   /*** derivatives for constraint 51 ***/

	J[158] = 1.;

   /*** derivatives for constraint 52 ***/

	J[164] = 1.;

   /*** derivatives for constraint 53 ***/

	J[170] = 1.;

   /*** derivatives for constraint 54 ***/

	J[176] = 1.;

   /*** derivatives for constraint 55 ***/

	J[182] = 1.;

   /*** derivatives for constraint 56 ***/

	J[188] = 1.;

   /*** derivatives for constraint 57 ***/

	J[194] = 1.;

   /*** derivatives for constraint 58 ***/

	J[200] = 1.;

   /*** derivatives for constraint 59 ***/

	J[206] = 1.;

   /*** derivatives for constraint 60 ***/

	J[212] = 1.;

   /*** derivatives for constraint 61 ***/

	J[10] = 1.;

   /*** derivatives for constraint 62 ***/

	J[21] = 1.;

   /*** derivatives for constraint 63 ***/

	J[32] = 1.;

   /*** derivatives for constraint 64 ***/

	J[281] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
