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
 fint powerflow0009r_auxcom_[1] = { 72 /* nlc */ };
 fint powerflow0009r_funcom_[374] = {
	60 /* nvar */,
	1 /* nobj */,
	103 /* ncon */,
	307 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	25,
	28,
	31,
	34,
	37,
	40,
	43,
	46,
	49,
	52,
	55,
	58,
	61,
	64,
	67,
	70,
	73,
	76,
	79,
	82,
	85,
	88,
	91,
	94,
	97,
	100,
	103,
	106,
	109,
	115,
	121,
	127,
	141,
	151,
	165,
	175,
	189,
	199,
	206,
	212,
	218,
	232,
	242,
	256,
	266,
	280,
	290,
	293,
	296,
	299,
	302,
	305,
	308,

	/* rownos */
	1,
	37,
	88,
	2,
	38,
	94,
	3,
	39,
	95,
	4,
	40,
	96,
	5,
	41,
	93,
	6,
	42,
	94,
	7,
	43,
	94,
	8,
	44,
	95,
	9,
	45,
	96,
	10,
	46,
	87,
	11,
	47,
	92,
	12,
	48,
	93,
	13,
	49,
	86,
	14,
	50,
	92,
	15,
	51,
	97,
	16,
	52,
	92,
	17,
	53,
	96,
	18,
	54,
	97,
	19,
	37,
	91,
	20,
	38,
	100,
	21,
	39,
	101,
	22,
	40,
	102,
	23,
	41,
	99,
	24,
	42,
	100,
	25,
	43,
	100,
	26,
	44,
	101,
	27,
	45,
	102,
	28,
	46,
	90,
	29,
	47,
	98,
	30,
	48,
	99,
	31,
	49,
	89,
	32,
	50,
	98,
	33,
	51,
	103,
	34,
	52,
	98,
	35,
	53,
	102,
	36,
	54,
	103,
	13,
	14,
	31,
	32,
	55,
	64,
	9,
	10,
	27,
	28,
	56,
	65,
	1,
	2,
	19,
	20,
	57,
	66,
	11,
	12,
	13,
	14,
	15,
	16,
	29,
	30,
	31,
	32,
	33,
	34,
	58,
	67,
	5,
	6,
	11,
	12,
	23,
	24,
	29,
	30,
	59,
	68,
	1,
	2,
	5,
	6,
	7,
	8,
	19,
	20,
	23,
	24,
	25,
	26,
	60,
	69,
	3,
	4,
	7,
	8,
	21,
	22,
	25,
	26,
	61,
	70,
	3,
	4,
	9,
	10,
	17,
	18,
	21,
	22,
	27,
	28,
	35,
	36,
	62,
	71,
	15,
	16,
	17,
	18,
	33,
	34,
	35,
	36,
	63,
	72,
	13,
	14,
	31,
	32,
	55,
	64,
	85,
	9,
	10,
	27,
	28,
	56,
	65,
	1,
	2,
	19,
	20,
	57,
	66,
	11,
	12,
	13,
	14,
	15,
	16,
	29,
	30,
	31,
	32,
	33,
	34,
	58,
	67,
	5,
	6,
	11,
	12,
	23,
	24,
	29,
	30,
	59,
	68,
	1,
	2,
	5,
	6,
	7,
	8,
	19,
	20,
	23,
	24,
	25,
	26,
	60,
	69,
	3,
	4,
	7,
	8,
	21,
	22,
	25,
	26,
	61,
	70,
	3,
	4,
	9,
	10,
	17,
	18,
	21,
	22,
	27,
	28,
	35,
	36,
	62,
	71,
	15,
	16,
	17,
	18,
	33,
	34,
	35,
	36,
	63,
	72,
	73,
	76,
	86,
	74,
	77,
	87,
	75,
	78,
	88,
	79,
	82,
	89,
	80,
	83,
	90,
	81,
	84,
	91 };

 real powerflow0009r_boundc_[1+120+206] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		9.,
		-1.7e308,
		9.,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		2.25,
		-1.7e308,
		2.25,
		-1.7e308,
		2.25,
		-1.7e308,
		2.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		6.25,
		-1.7e308,
		1.21,
		-1.7e308,
		1.21,
		-1.7e308,
		1.21,
		-1.7e308,
		1.21,
		-1.7e308,
		1.21,
		-1.7e308,
		1.21,
		-1.7e308,
		1.21,
		-1.7e308,
		1.21,
		-1.7e308,
		1.21,
		0.81,
		1.7e308,
		0.81,
		1.7e308,
		0.81,
		1.7e308,
		0.81,
		1.7e308,
		0.81,
		1.7e308,
		0.81,
		1.7e308,
		0.81,
		1.7e308,
		0.81,
		1.7e308,
		0.81,
		1.7e308,
		-1.7e308,
		2.5,
		-1.7e308,
		3.,
		-1.7e308,
		2.7,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		-1.7e308,
		3.,
		-1.7e308,
		3.,
		-1.7e308,
		3.,
		-3.,
		1.7e308,
		-3.,
		1.7e308,
		-3.,
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
		-0.9,
		-0.9,
		0.,
		0.,
		-1.,
		-1.,
		0.,
		0.,
		-1.25,
		-1.25,
		0.,
		0.,
		-0.3,
		-0.3,
		0.,
		0.,
		-0.35,
		-0.35,
		0.,
		0.,
		-0.5,
		-0.5};

 real powerflow0009r_x0comn_[60] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real powerflow0009r_pd[438];
static real powerflow0009r_old_x[60];
static int powerflow0009r_xkind = -1;

 static int
powerflow0009r_xcheck(real *x)
{
	real *x1 = powerflow0009r_old_x, *xe = x + 60;
	errno = 0;
	if (powerflow0009r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	powerflow0009r_xkind = 0;
	return 1;
	}
 real
powerflow0009r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (powerflow0009r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	powerflow0009r_pd[432] = x[54] * x[54];
	powerflow0009r_pd[433] = x[54] + x[54];
	v[0] = 1100. * powerflow0009r_pd[432];
	powerflow0009r_pd[434] = x[55] * x[55];
	powerflow0009r_pd[435] = x[55] + x[55];
	v[1] = 850. * powerflow0009r_pd[434];
	v[0] += v[1];
	powerflow0009r_pd[436] = x[56] * x[56];
	powerflow0009r_pd[437] = x[56] + x[56];
	v[1] = 1225. * powerflow0009r_pd[436];
	v[0] += v[1];
	v[0] += 1085.;
	rv = v[0] + 500.*x[54];
	rv += 120.*x[55];
	rv += 100.*x[56];
	;}

	if (wantfg & 2) {
	g[56] = 1225.*powerflow0009r_pd[437] + 100.;
	g[55] = 850.*powerflow0009r_pd[435] + 120.;
	g[54] = 1100.*powerflow0009r_pd[433] + 500.;
	}

	return rv;
}

 void
powerflow0009r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (powerflow0009r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	powerflow0009r_pd[0] = 8.53242320819113 * x[41];
	v[0] = powerflow0009r_pd[0] * x[47];
	powerflow0009r_pd[1] = 8.53242320819113 * x[38];
	v[1] = powerflow0009r_pd[1] * x[50];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[2] = 8.53242320819113 * x[47];
	v[2] = powerflow0009r_pd[2] * x[41];
	v[0] += v[2];
	powerflow0009r_pd[3] = 8.53242320819113 * x[50];
	v[2] = powerflow0009r_pd[3] * x[38];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	powerflow0009r_pd[4] = 8.53242320819113 * x[38];
	v[0] = powerflow0009r_pd[4] * x[50];
	powerflow0009r_pd[5] = 8.53242320819113 * x[41];
	v[1] = powerflow0009r_pd[5] * x[47];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[6] = 8.53242320819113 * x[47];
	v[2] = powerflow0009r_pd[6] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[7] = 8.53242320819113 * x[50];
	v[1] = powerflow0009r_pd[7] * x[38];
	v[0] += v[1];
	t1 = v[0] + x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	powerflow0009r_pd[8] = 0.808561236623068 * x[42];
	v[0] = powerflow0009r_pd[8] * x[43];
	powerflow0009r_pd[9] = x[42] * x[42];
	powerflow0009r_pd[10] = x[42] + x[42];
	v[1] = -1.61712247324614 * powerflow0009r_pd[9];
	v[0] += v[1];
	powerflow0009r_pd[11] = 6.84898929845422 * x[42];
	v[1] = powerflow0009r_pd[11] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[12] = 0.808561236623068 * x[43];
	v[2] = powerflow0009r_pd[12] * x[42];
	v[0] += v[2];
	powerflow0009r_pd[13] = 6.84898929845422 * x[43];
	v[2] = powerflow0009r_pd[13] * x[51];
	v[0] += v[2];
	powerflow0009r_pd[14] = 6.84898929845422 * x[51];
	v[2] = powerflow0009r_pd[14] * x[43];
	v[0] += v[2];
	powerflow0009r_pd[15] = x[51] * x[51];
	powerflow0009r_pd[16] = x[51] + x[51];
	v[2] = -1.61712247324614 * powerflow0009r_pd[15];
	v[0] += v[2];
	powerflow0009r_pd[17] = 0.808561236623068 * x[51];
	v[2] = powerflow0009r_pd[17] * x[52];
	v[0] += v[2];
	powerflow0009r_pd[18] = 6.84898929845422 * x[52];
	v[2] = powerflow0009r_pd[18] * x[42];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[19] = 0.808561236623068 * x[52];
	v[1] = powerflow0009r_pd[19] * x[51];
	v[0] += v[1];
	t1 = v[0] + x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	powerflow0009r_pd[20] = 0.808561236623068 * x[42];
	v[0] = powerflow0009r_pd[20] * x[43];
	powerflow0009r_pd[21] = 6.84898929845422 * x[42];
	v[1] = powerflow0009r_pd[21] * x[52];
	v[0] += v[1];
	powerflow0009r_pd[22] = 0.808561236623068 * x[43];
	v[1] = powerflow0009r_pd[22] * x[42];
	v[0] += v[1];
	powerflow0009r_pd[23] = x[43] * x[43];
	powerflow0009r_pd[24] = x[43] + x[43];
	v[1] = -1.61712247324614 * powerflow0009r_pd[23];
	v[0] += v[1];
	powerflow0009r_pd[25] = 6.84898929845422 * x[43];
	v[1] = powerflow0009r_pd[25] * x[51];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[26] = 6.84898929845422 * x[51];
	v[2] = powerflow0009r_pd[26] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[27] = 0.808561236623068 * x[51];
	v[1] = powerflow0009r_pd[27] * x[52];
	v[0] += v[1];
	powerflow0009r_pd[28] = 6.84898929845422 * x[52];
	v[1] = powerflow0009r_pd[28] * x[42];
	v[0] += v[1];
	powerflow0009r_pd[29] = 0.808561236623068 * x[52];
	v[1] = powerflow0009r_pd[29] * x[51];
	v[0] += v[1];
	powerflow0009r_pd[30] = x[52] * x[52];
	powerflow0009r_pd[31] = x[52] + x[52];
	v[1] = -1.61712247324614 * powerflow0009r_pd[30];
	v[0] += v[1];
	t1 = v[0] + x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	powerflow0009r_pd[32] = 0.641004569212057 * x[40];
	v[0] = powerflow0009r_pd[32] * x[41];
	powerflow0009r_pd[33] = x[40] * x[40];
	powerflow0009r_pd[34] = x[40] + x[40];
	v[1] = -1.28200913842411 * powerflow0009r_pd[33];
	v[0] += v[1];
	powerflow0009r_pd[35] = 2.79412248118076 * x[40];
	v[1] = powerflow0009r_pd[35] * x[50];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[36] = 0.641004569212057 * x[41];
	v[2] = powerflow0009r_pd[36] * x[40];
	v[0] += v[2];
	powerflow0009r_pd[37] = 2.79412248118076 * x[41];
	v[2] = powerflow0009r_pd[37] * x[49];
	v[0] += v[2];
	powerflow0009r_pd[38] = 2.79412248118076 * x[49];
	v[2] = powerflow0009r_pd[38] * x[41];
	v[0] += v[2];
	powerflow0009r_pd[39] = x[49] * x[49];
	powerflow0009r_pd[40] = x[49] + x[49];
	v[2] = -1.28200913842411 * powerflow0009r_pd[39];
	v[0] += v[2];
	powerflow0009r_pd[41] = 0.641004569212057 * x[49];
	v[2] = powerflow0009r_pd[41] * x[50];
	v[0] += v[2];
	powerflow0009r_pd[42] = 2.79412248118076 * x[50];
	v[2] = powerflow0009r_pd[42] * x[40];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[43] = 0.641004569212057 * x[50];
	v[1] = powerflow0009r_pd[43] * x[49];
	v[0] += v[1];
	t1 = v[0] + x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	powerflow0009r_pd[44] = 0.641004569212057 * x[40];
	v[0] = powerflow0009r_pd[44] * x[41];
	powerflow0009r_pd[45] = 2.79412248118076 * x[40];
	v[1] = powerflow0009r_pd[45] * x[50];
	v[0] += v[1];
	powerflow0009r_pd[46] = 0.641004569212057 * x[41];
	v[1] = powerflow0009r_pd[46] * x[40];
	v[0] += v[1];
	powerflow0009r_pd[47] = x[41] * x[41];
	powerflow0009r_pd[48] = x[41] + x[41];
	v[1] = -1.28200913842411 * powerflow0009r_pd[47];
	v[0] += v[1];
	powerflow0009r_pd[49] = 2.79412248118076 * x[41];
	v[1] = powerflow0009r_pd[49] * x[49];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[50] = 2.79412248118076 * x[49];
	v[2] = powerflow0009r_pd[50] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[51] = 0.641004569212057 * x[49];
	v[1] = powerflow0009r_pd[51] * x[50];
	v[0] += v[1];
	powerflow0009r_pd[52] = 2.79412248118076 * x[50];
	v[1] = powerflow0009r_pd[52] * x[40];
	v[0] += v[1];
	powerflow0009r_pd[53] = 0.641004569212057 * x[50];
	v[1] = powerflow0009r_pd[53] * x[49];
	v[0] += v[1];
	powerflow0009r_pd[54] = x[50] * x[50];
	powerflow0009r_pd[55] = x[50] + x[50];
	v[1] = -1.28200913842411 * powerflow0009r_pd[54];
	v[0] += v[1];
	t1 = v[0] + x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	powerflow0009r_pd[56] = 0.577543740445048 * x[41];
	v[0] = powerflow0009r_pd[56] * x[42];
	powerflow0009r_pd[57] = x[41] * x[41];
	powerflow0009r_pd[58] = x[41] + x[41];
	v[1] = -1.1550874808901 * powerflow0009r_pd[57];
	v[0] += v[1];
	powerflow0009r_pd[59] = 4.89213521318159 * x[41];
	v[1] = powerflow0009r_pd[59] * x[51];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[60] = 0.577543740445048 * x[42];
	v[2] = powerflow0009r_pd[60] * x[41];
	v[0] += v[2];
	powerflow0009r_pd[61] = 4.89213521318159 * x[42];
	v[2] = powerflow0009r_pd[61] * x[50];
	v[0] += v[2];
	powerflow0009r_pd[62] = 4.89213521318159 * x[50];
	v[2] = powerflow0009r_pd[62] * x[42];
	v[0] += v[2];
	powerflow0009r_pd[63] = x[50] * x[50];
	powerflow0009r_pd[64] = x[50] + x[50];
	v[2] = -1.1550874808901 * powerflow0009r_pd[63];
	v[0] += v[2];
	powerflow0009r_pd[65] = 0.577543740445048 * x[50];
	v[2] = powerflow0009r_pd[65] * x[51];
	v[0] += v[2];
	powerflow0009r_pd[66] = 4.89213521318159 * x[51];
	v[2] = powerflow0009r_pd[66] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[67] = 0.577543740445048 * x[51];
	v[1] = powerflow0009r_pd[67] * x[50];
	v[0] += v[1];
	t1 = v[0] + x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	powerflow0009r_pd[68] = 0.577543740445048 * x[41];
	v[0] = powerflow0009r_pd[68] * x[42];
	powerflow0009r_pd[69] = 4.89213521318159 * x[41];
	v[1] = powerflow0009r_pd[69] * x[51];
	v[0] += v[1];
	powerflow0009r_pd[70] = 0.577543740445048 * x[42];
	v[1] = powerflow0009r_pd[70] * x[41];
	v[0] += v[1];
	powerflow0009r_pd[71] = x[42] * x[42];
	powerflow0009r_pd[72] = x[42] + x[42];
	v[1] = -1.1550874808901 * powerflow0009r_pd[71];
	v[0] += v[1];
	powerflow0009r_pd[73] = 4.89213521318159 * x[42];
	v[1] = powerflow0009r_pd[73] * x[50];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[74] = 4.89213521318159 * x[50];
	v[2] = powerflow0009r_pd[74] * x[42];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[75] = 0.577543740445048 * x[50];
	v[1] = powerflow0009r_pd[75] * x[51];
	v[0] += v[1];
	powerflow0009r_pd[76] = 4.89213521318159 * x[51];
	v[1] = powerflow0009r_pd[76] * x[41];
	v[0] += v[1];
	powerflow0009r_pd[77] = 0.577543740445048 * x[51];
	v[1] = powerflow0009r_pd[77] * x[50];
	v[0] += v[1];
	powerflow0009r_pd[78] = x[51] * x[51];
	powerflow0009r_pd[79] = x[51] + x[51];
	v[1] = -1.1550874808901 * powerflow0009r_pd[78];
	v[0] += v[1];
	t1 = v[0] + x[7];
	c[7] = t1;

  /***  constraint 9  ***/

	powerflow0009r_pd[80] = 8. * x[37];
	v[0] = powerflow0009r_pd[80] * x[52];
	powerflow0009r_pd[81] = 8. * x[43];
	v[1] = powerflow0009r_pd[81] * x[46];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[82] = 8. * x[46];
	v[2] = powerflow0009r_pd[82] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[83] = 8. * x[52];
	v[1] = powerflow0009r_pd[83] * x[37];
	v[0] += v[1];
	t1 = v[0] + x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	powerflow0009r_pd[84] = 8. * x[43];
	v[0] = powerflow0009r_pd[84] * x[46];
	powerflow0009r_pd[85] = 8. * x[37];
	v[1] = powerflow0009r_pd[85] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[86] = 8. * x[46];
	v[2] = powerflow0009r_pd[86] * x[43];
	v[0] += v[2];
	powerflow0009r_pd[87] = 8. * x[52];
	v[2] = powerflow0009r_pd[87] * x[37];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	powerflow0009r_pd[88] = 0.971095624357363 * x[39];
	v[0] = powerflow0009r_pd[88] * x[40];
	powerflow0009r_pd[89] = x[39] * x[39];
	powerflow0009r_pd[90] = x[39] + x[39];
	v[1] = -1.94219124871473 * powerflow0009r_pd[89];
	v[0] += v[1];
	powerflow0009r_pd[91] = 5.25534102593397 * x[39];
	v[1] = powerflow0009r_pd[91] * x[49];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[92] = 0.971095624357363 * x[40];
	v[2] = powerflow0009r_pd[92] * x[39];
	v[0] += v[2];
	powerflow0009r_pd[93] = 5.25534102593397 * x[40];
	v[2] = powerflow0009r_pd[93] * x[48];
	v[0] += v[2];
	powerflow0009r_pd[94] = 5.25534102593397 * x[48];
	v[2] = powerflow0009r_pd[94] * x[40];
	v[0] += v[2];
	powerflow0009r_pd[95] = x[48] * x[48];
	powerflow0009r_pd[96] = x[48] + x[48];
	v[2] = -1.94219124871473 * powerflow0009r_pd[95];
	v[0] += v[2];
	powerflow0009r_pd[97] = 0.971095624357363 * x[48];
	v[2] = powerflow0009r_pd[97] * x[49];
	v[0] += v[2];
	powerflow0009r_pd[98] = 5.25534102593397 * x[49];
	v[2] = powerflow0009r_pd[98] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[99] = 0.971095624357363 * x[49];
	v[1] = powerflow0009r_pd[99] * x[48];
	v[0] += v[1];
	t1 = v[0] + x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	powerflow0009r_pd[100] = 0.971095624357363 * x[39];
	v[0] = powerflow0009r_pd[100] * x[40];
	powerflow0009r_pd[101] = 5.25534102593397 * x[39];
	v[1] = powerflow0009r_pd[101] * x[49];
	v[0] += v[1];
	powerflow0009r_pd[102] = 0.971095624357363 * x[40];
	v[1] = powerflow0009r_pd[102] * x[39];
	v[0] += v[1];
	powerflow0009r_pd[103] = x[40] * x[40];
	powerflow0009r_pd[104] = x[40] + x[40];
	v[1] = -1.94219124871473 * powerflow0009r_pd[103];
	v[0] += v[1];
	powerflow0009r_pd[105] = 5.25534102593397 * x[40];
	v[1] = powerflow0009r_pd[105] * x[48];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[106] = 5.25534102593397 * x[48];
	v[2] = powerflow0009r_pd[106] * x[40];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[107] = 0.971095624357363 * x[48];
	v[1] = powerflow0009r_pd[107] * x[49];
	v[0] += v[1];
	powerflow0009r_pd[108] = 5.25534102593397 * x[49];
	v[1] = powerflow0009r_pd[108] * x[39];
	v[0] += v[1];
	powerflow0009r_pd[109] = 0.971095624357363 * x[49];
	v[1] = powerflow0009r_pd[109] * x[48];
	v[0] += v[1];
	powerflow0009r_pd[110] = x[49] * x[49];
	powerflow0009r_pd[111] = x[49] + x[49];
	v[1] = -1.94219124871473 * powerflow0009r_pd[110];
	v[0] += v[1];
	t1 = v[0] + x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	powerflow0009r_pd[112] = 8.68055555555556 * x[39];
	v[0] = powerflow0009r_pd[112] * x[45];
	powerflow0009r_pd[113] = 8.68055555555556 * x[36];
	v[1] = powerflow0009r_pd[113] * x[48];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[114] = 8.68055555555556 * x[45];
	v[2] = powerflow0009r_pd[114] * x[39];
	v[0] += v[2];
	powerflow0009r_pd[115] = 8.68055555555556 * x[48];
	v[2] = powerflow0009r_pd[115] * x[36];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	powerflow0009r_pd[116] = 8.68055555555556 * x[36];
	v[0] = powerflow0009r_pd[116] * x[48];
	powerflow0009r_pd[117] = 8.68055555555556 * x[39];
	v[1] = powerflow0009r_pd[117] * x[45];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[118] = 8.68055555555556 * x[45];
	v[2] = powerflow0009r_pd[118] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[119] = 8.68055555555556 * x[48];
	v[1] = powerflow0009r_pd[119] * x[36];
	v[0] += v[1];
	t1 = v[0] + x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	powerflow0009r_pd[120] = 0.68259385665529 * x[39];
	v[0] = powerflow0009r_pd[120] * x[44];
	powerflow0009r_pd[121] = 5.80204778156997 * x[39];
	v[1] = powerflow0009r_pd[121] * x[53];
	v[0] += v[1];
	powerflow0009r_pd[122] = 0.68259385665529 * x[44];
	v[1] = powerflow0009r_pd[122] * x[39];
	v[0] += v[1];
	powerflow0009r_pd[123] = x[44] * x[44];
	powerflow0009r_pd[124] = x[44] + x[44];
	v[1] = -1.36518771331058 * powerflow0009r_pd[123];
	v[0] += v[1];
	powerflow0009r_pd[125] = 5.80204778156997 * x[44];
	v[1] = powerflow0009r_pd[125] * x[48];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[126] = 5.80204778156997 * x[48];
	v[2] = powerflow0009r_pd[126] * x[44];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[127] = 0.68259385665529 * x[48];
	v[1] = powerflow0009r_pd[127] * x[53];
	v[0] += v[1];
	powerflow0009r_pd[128] = 5.80204778156997 * x[53];
	v[1] = powerflow0009r_pd[128] * x[39];
	v[0] += v[1];
	powerflow0009r_pd[129] = 0.68259385665529 * x[53];
	v[1] = powerflow0009r_pd[129] * x[48];
	v[0] += v[1];
	powerflow0009r_pd[130] = x[53] * x[53];
	powerflow0009r_pd[131] = x[53] + x[53];
	v[1] = -1.36518771331058 * powerflow0009r_pd[130];
	v[0] += v[1];
	t1 = v[0] + x[14];
	c[14] = t1;

  /***  constraint 16  ***/

	powerflow0009r_pd[132] = 0.68259385665529 * x[39];
	v[0] = powerflow0009r_pd[132] * x[44];
	powerflow0009r_pd[133] = x[39] * x[39];
	powerflow0009r_pd[134] = x[39] + x[39];
	v[1] = -1.36518771331058 * powerflow0009r_pd[133];
	v[0] += v[1];
	powerflow0009r_pd[135] = 5.80204778156997 * x[39];
	v[1] = powerflow0009r_pd[135] * x[53];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[136] = 0.68259385665529 * x[44];
	v[2] = powerflow0009r_pd[136] * x[39];
	v[0] += v[2];
	powerflow0009r_pd[137] = 5.80204778156997 * x[44];
	v[2] = powerflow0009r_pd[137] * x[48];
	v[0] += v[2];
	powerflow0009r_pd[138] = 5.80204778156997 * x[48];
	v[2] = powerflow0009r_pd[138] * x[44];
	v[0] += v[2];
	powerflow0009r_pd[139] = x[48] * x[48];
	powerflow0009r_pd[140] = x[48] + x[48];
	v[2] = -1.36518771331058 * powerflow0009r_pd[139];
	v[0] += v[2];
	powerflow0009r_pd[141] = 0.68259385665529 * x[48];
	v[2] = powerflow0009r_pd[141] * x[53];
	v[0] += v[2];
	powerflow0009r_pd[142] = 5.80204778156997 * x[53];
	v[2] = powerflow0009r_pd[142] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[143] = 0.68259385665529 * x[53];
	v[1] = powerflow0009r_pd[143] * x[48];
	v[0] += v[1];
	t1 = v[0] + x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	powerflow0009r_pd[144] = 0.593802189645574 * x[43];
	v[0] = powerflow0009r_pd[144] * x[44];
	powerflow0009r_pd[145] = x[43] * x[43];
	powerflow0009r_pd[146] = x[43] + x[43];
	v[1] = -1.18760437929115 * powerflow0009r_pd[145];
	v[0] += v[1];
	powerflow0009r_pd[147] = 2.9875672666543 * x[43];
	v[1] = powerflow0009r_pd[147] * x[53];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[148] = 0.593802189645574 * x[44];
	v[2] = powerflow0009r_pd[148] * x[43];
	v[0] += v[2];
	powerflow0009r_pd[149] = 2.9875672666543 * x[44];
	v[2] = powerflow0009r_pd[149] * x[52];
	v[0] += v[2];
	powerflow0009r_pd[150] = 2.9875672666543 * x[52];
	v[2] = powerflow0009r_pd[150] * x[44];
	v[0] += v[2];
	powerflow0009r_pd[151] = x[52] * x[52];
	powerflow0009r_pd[152] = x[52] + x[52];
	v[2] = -1.18760437929115 * powerflow0009r_pd[151];
	v[0] += v[2];
	powerflow0009r_pd[153] = 0.593802189645574 * x[52];
	v[2] = powerflow0009r_pd[153] * x[53];
	v[0] += v[2];
	powerflow0009r_pd[154] = 2.9875672666543 * x[53];
	v[2] = powerflow0009r_pd[154] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[155] = 0.593802189645574 * x[53];
	v[1] = powerflow0009r_pd[155] * x[52];
	v[0] += v[1];
	t1 = v[0] + x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	powerflow0009r_pd[156] = 0.593802189645574 * x[43];
	v[0] = powerflow0009r_pd[156] * x[44];
	powerflow0009r_pd[157] = 2.9875672666543 * x[43];
	v[1] = powerflow0009r_pd[157] * x[53];
	v[0] += v[1];
	powerflow0009r_pd[158] = 0.593802189645574 * x[44];
	v[1] = powerflow0009r_pd[158] * x[43];
	v[0] += v[1];
	powerflow0009r_pd[159] = x[44] * x[44];
	powerflow0009r_pd[160] = x[44] + x[44];
	v[1] = -1.18760437929115 * powerflow0009r_pd[159];
	v[0] += v[1];
	powerflow0009r_pd[161] = 2.9875672666543 * x[44];
	v[1] = powerflow0009r_pd[161] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[162] = 2.9875672666543 * x[52];
	v[2] = powerflow0009r_pd[162] * x[44];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[163] = 0.593802189645574 * x[52];
	v[1] = powerflow0009r_pd[163] * x[53];
	v[0] += v[1];
	powerflow0009r_pd[164] = 2.9875672666543 * x[53];
	v[1] = powerflow0009r_pd[164] * x[43];
	v[0] += v[1];
	powerflow0009r_pd[165] = 0.593802189645574 * x[53];
	v[1] = powerflow0009r_pd[165] * x[52];
	v[0] += v[1];
	powerflow0009r_pd[166] = x[53] * x[53];
	powerflow0009r_pd[167] = x[53] + x[53];
	v[1] = -1.18760437929115 * powerflow0009r_pd[166];
	v[0] += v[1];
	t1 = v[0] + x[17];
	c[17] = t1;

  /***  constraint 19  ***/

	powerflow0009r_pd[168] = 8.53242320819113 * x[38];
	v[0] = powerflow0009r_pd[168] * x[41];
	powerflow0009r_pd[169] = x[38] * x[38];
	powerflow0009r_pd[170] = x[38] + x[38];
	v[1] = -17.0648464163823 * powerflow0009r_pd[169];
	v[0] += v[1];
	powerflow0009r_pd[171] = 8.53242320819113 * x[41];
	v[1] = powerflow0009r_pd[171] * x[38];
	v[0] += v[1];
	powerflow0009r_pd[172] = x[47] * x[47];
	powerflow0009r_pd[173] = x[47] + x[47];
	v[1] = -17.0648464163823 * powerflow0009r_pd[172];
	v[0] += v[1];
	powerflow0009r_pd[174] = 8.53242320819113 * x[47];
	v[1] = powerflow0009r_pd[174] * x[50];
	v[0] += v[1];
	powerflow0009r_pd[175] = 8.53242320819113 * x[50];
	v[1] = powerflow0009r_pd[175] * x[47];
	v[0] += v[1];
	t1 = v[0] + x[18];
	c[18] = t1;

  /***  constraint 20  ***/

	powerflow0009r_pd[176] = 8.53242320819113 * x[38];
	v[0] = powerflow0009r_pd[176] * x[41];
	powerflow0009r_pd[177] = 8.53242320819113 * x[41];
	v[1] = powerflow0009r_pd[177] * x[38];
	v[0] += v[1];
	powerflow0009r_pd[178] = x[41] * x[41];
	powerflow0009r_pd[179] = x[41] + x[41];
	v[1] = -17.0648464163823 * powerflow0009r_pd[178];
	v[0] += v[1];
	powerflow0009r_pd[180] = 8.53242320819113 * x[47];
	v[1] = powerflow0009r_pd[180] * x[50];
	v[0] += v[1];
	powerflow0009r_pd[181] = 8.53242320819113 * x[50];
	v[1] = powerflow0009r_pd[181] * x[47];
	v[0] += v[1];
	powerflow0009r_pd[182] = x[50] * x[50];
	powerflow0009r_pd[183] = x[50] + x[50];
	v[1] = -17.0648464163823 * powerflow0009r_pd[182];
	v[0] += v[1];
	t1 = v[0] + x[19];
	c[19] = t1;

  /***  constraint 21  ***/

	powerflow0009r_pd[184] = 6.84898929845422 * x[42];
	v[0] = powerflow0009r_pd[184] * x[43];
	powerflow0009r_pd[185] = x[42] * x[42];
	powerflow0009r_pd[186] = x[42] + x[42];
	v[1] = -13.6234785969084 * powerflow0009r_pd[185];
	v[0] += v[1];
	powerflow0009r_pd[187] = 0.808561236623068 * x[42];
	v[1] = powerflow0009r_pd[187] * x[52];
	v[0] += v[1];
	powerflow0009r_pd[188] = 6.84898929845422 * x[43];
	v[1] = powerflow0009r_pd[188] * x[42];
	v[0] += v[1];
	powerflow0009r_pd[189] = 0.808561236623068 * x[43];
	v[1] = powerflow0009r_pd[189] * x[51];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[190] = 0.808561236623068 * x[51];
	v[2] = powerflow0009r_pd[190] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[191] = x[51] * x[51];
	powerflow0009r_pd[192] = x[51] + x[51];
	v[1] = -13.6234785969084 * powerflow0009r_pd[191];
	v[0] += v[1];
	powerflow0009r_pd[193] = 6.84898929845422 * x[51];
	v[1] = powerflow0009r_pd[193] * x[52];
	v[0] += v[1];
	powerflow0009r_pd[194] = 0.808561236623068 * x[52];
	v[1] = powerflow0009r_pd[194] * x[42];
	v[0] += v[1];
	powerflow0009r_pd[195] = 6.84898929845422 * x[52];
	v[1] = powerflow0009r_pd[195] * x[51];
	v[0] += v[1];
	t1 = v[0] + x[20];
	c[20] = t1;

  /***  constraint 22  ***/

	powerflow0009r_pd[196] = 6.84898929845422 * x[42];
	v[0] = powerflow0009r_pd[196] * x[43];
	powerflow0009r_pd[197] = 0.808561236623068 * x[42];
	v[1] = powerflow0009r_pd[197] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[198] = 6.84898929845422 * x[43];
	v[2] = powerflow0009r_pd[198] * x[42];
	v[0] += v[2];
	powerflow0009r_pd[199] = x[43] * x[43];
	powerflow0009r_pd[200] = x[43] + x[43];
	v[2] = -13.6234785969084 * powerflow0009r_pd[199];
	v[0] += v[2];
	powerflow0009r_pd[201] = 0.808561236623068 * x[43];
	v[2] = powerflow0009r_pd[201] * x[51];
	v[0] += v[2];
	powerflow0009r_pd[202] = 0.808561236623068 * x[51];
	v[2] = powerflow0009r_pd[202] * x[43];
	v[0] += v[2];
	powerflow0009r_pd[203] = 6.84898929845422 * x[51];
	v[2] = powerflow0009r_pd[203] * x[52];
	v[0] += v[2];
	powerflow0009r_pd[204] = 0.808561236623068 * x[52];
	v[2] = powerflow0009r_pd[204] * x[42];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[205] = 6.84898929845422 * x[52];
	v[1] = powerflow0009r_pd[205] * x[51];
	v[0] += v[1];
	powerflow0009r_pd[206] = x[52] * x[52];
	powerflow0009r_pd[207] = x[52] + x[52];
	v[1] = -13.6234785969084 * powerflow0009r_pd[206];
	v[0] += v[1];
	t1 = v[0] + x[21];
	c[21] = t1;

  /***  constraint 23  ***/

	powerflow0009r_pd[208] = 2.79412248118076 * x[40];
	v[0] = powerflow0009r_pd[208] * x[41];
	powerflow0009r_pd[209] = x[40] * x[40];
	powerflow0009r_pd[210] = x[40] + x[40];
	v[1] = -5.40924496236153 * powerflow0009r_pd[209];
	v[0] += v[1];
	powerflow0009r_pd[211] = 0.641004569212057 * x[40];
	v[1] = powerflow0009r_pd[211] * x[50];
	v[0] += v[1];
	powerflow0009r_pd[212] = 2.79412248118076 * x[41];
	v[1] = powerflow0009r_pd[212] * x[40];
	v[0] += v[1];
	powerflow0009r_pd[213] = 0.641004569212057 * x[41];
	v[1] = powerflow0009r_pd[213] * x[49];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[214] = 0.641004569212057 * x[49];
	v[2] = powerflow0009r_pd[214] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[215] = x[49] * x[49];
	powerflow0009r_pd[216] = x[49] + x[49];
	v[1] = -5.40924496236153 * powerflow0009r_pd[215];
	v[0] += v[1];
	powerflow0009r_pd[217] = 2.79412248118076 * x[49];
	v[1] = powerflow0009r_pd[217] * x[50];
	v[0] += v[1];
	powerflow0009r_pd[218] = 0.641004569212057 * x[50];
	v[1] = powerflow0009r_pd[218] * x[40];
	v[0] += v[1];
	powerflow0009r_pd[219] = 2.79412248118076 * x[50];
	v[1] = powerflow0009r_pd[219] * x[49];
	v[0] += v[1];
	t1 = v[0] + x[22];
	c[22] = t1;

  /***  constraint 24  ***/

	powerflow0009r_pd[220] = 2.79412248118076 * x[40];
	v[0] = powerflow0009r_pd[220] * x[41];
	powerflow0009r_pd[221] = 0.641004569212057 * x[40];
	v[1] = powerflow0009r_pd[221] * x[50];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[222] = 2.79412248118076 * x[41];
	v[2] = powerflow0009r_pd[222] * x[40];
	v[0] += v[2];
	powerflow0009r_pd[223] = x[41] * x[41];
	powerflow0009r_pd[224] = x[41] + x[41];
	v[2] = -5.40924496236153 * powerflow0009r_pd[223];
	v[0] += v[2];
	powerflow0009r_pd[225] = 0.641004569212057 * x[41];
	v[2] = powerflow0009r_pd[225] * x[49];
	v[0] += v[2];
	powerflow0009r_pd[226] = 0.641004569212057 * x[49];
	v[2] = powerflow0009r_pd[226] * x[41];
	v[0] += v[2];
	powerflow0009r_pd[227] = 2.79412248118076 * x[49];
	v[2] = powerflow0009r_pd[227] * x[50];
	v[0] += v[2];
	powerflow0009r_pd[228] = 0.641004569212057 * x[50];
	v[2] = powerflow0009r_pd[228] * x[40];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[229] = 2.79412248118076 * x[50];
	v[1] = powerflow0009r_pd[229] * x[49];
	v[0] += v[1];
	powerflow0009r_pd[230] = x[50] * x[50];
	powerflow0009r_pd[231] = x[50] + x[50];
	v[1] = -5.40924496236153 * powerflow0009r_pd[230];
	v[0] += v[1];
	t1 = v[0] + x[23];
	c[23] = t1;

  /***  constraint 25  ***/

	powerflow0009r_pd[232] = 4.89213521318159 * x[41];
	v[0] = powerflow0009r_pd[232] * x[42];
	powerflow0009r_pd[233] = x[41] * x[41];
	powerflow0009r_pd[234] = x[41] + x[41];
	v[1] = -9.67977042636317 * powerflow0009r_pd[233];
	v[0] += v[1];
	powerflow0009r_pd[235] = 0.577543740445048 * x[41];
	v[1] = powerflow0009r_pd[235] * x[51];
	v[0] += v[1];
	powerflow0009r_pd[236] = 4.89213521318159 * x[42];
	v[1] = powerflow0009r_pd[236] * x[41];
	v[0] += v[1];
	powerflow0009r_pd[237] = 0.577543740445048 * x[42];
	v[1] = powerflow0009r_pd[237] * x[50];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[238] = 0.577543740445048 * x[50];
	v[2] = powerflow0009r_pd[238] * x[42];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[239] = x[50] * x[50];
	powerflow0009r_pd[240] = x[50] + x[50];
	v[1] = -9.67977042636317 * powerflow0009r_pd[239];
	v[0] += v[1];
	powerflow0009r_pd[241] = 4.89213521318159 * x[50];
	v[1] = powerflow0009r_pd[241] * x[51];
	v[0] += v[1];
	powerflow0009r_pd[242] = 0.577543740445048 * x[51];
	v[1] = powerflow0009r_pd[242] * x[41];
	v[0] += v[1];
	powerflow0009r_pd[243] = 4.89213521318159 * x[51];
	v[1] = powerflow0009r_pd[243] * x[50];
	v[0] += v[1];
	t1 = v[0] + x[24];
	c[24] = t1;

  /***  constraint 26  ***/

	powerflow0009r_pd[244] = 4.89213521318159 * x[41];
	v[0] = powerflow0009r_pd[244] * x[42];
	powerflow0009r_pd[245] = 0.577543740445048 * x[41];
	v[1] = powerflow0009r_pd[245] * x[51];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[246] = 4.89213521318159 * x[42];
	v[2] = powerflow0009r_pd[246] * x[41];
	v[0] += v[2];
	powerflow0009r_pd[247] = x[42] * x[42];
	powerflow0009r_pd[248] = x[42] + x[42];
	v[2] = -9.67977042636317 * powerflow0009r_pd[247];
	v[0] += v[2];
	powerflow0009r_pd[249] = 0.577543740445048 * x[42];
	v[2] = powerflow0009r_pd[249] * x[50];
	v[0] += v[2];
	powerflow0009r_pd[250] = 0.577543740445048 * x[50];
	v[2] = powerflow0009r_pd[250] * x[42];
	v[0] += v[2];
	powerflow0009r_pd[251] = 4.89213521318159 * x[50];
	v[2] = powerflow0009r_pd[251] * x[51];
	v[0] += v[2];
	powerflow0009r_pd[252] = 0.577543740445048 * x[51];
	v[2] = powerflow0009r_pd[252] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[253] = 4.89213521318159 * x[51];
	v[1] = powerflow0009r_pd[253] * x[50];
	v[0] += v[1];
	powerflow0009r_pd[254] = x[51] * x[51];
	powerflow0009r_pd[255] = x[51] + x[51];
	v[1] = -9.67977042636317 * powerflow0009r_pd[254];
	v[0] += v[1];
	t1 = v[0] + x[25];
	c[25] = t1;

  /***  constraint 27  ***/

	powerflow0009r_pd[256] = 8. * x[37];
	v[0] = powerflow0009r_pd[256] * x[43];
	powerflow0009r_pd[257] = 8. * x[43];
	v[1] = powerflow0009r_pd[257] * x[37];
	v[0] += v[1];
	powerflow0009r_pd[258] = x[43] * x[43];
	powerflow0009r_pd[259] = x[43] + x[43];
	v[1] = -16. * powerflow0009r_pd[258];
	v[0] += v[1];
	powerflow0009r_pd[260] = 8. * x[46];
	v[1] = powerflow0009r_pd[260] * x[52];
	v[0] += v[1];
	powerflow0009r_pd[261] = 8. * x[52];
	v[1] = powerflow0009r_pd[261] * x[46];
	v[0] += v[1];
	powerflow0009r_pd[262] = x[52] * x[52];
	powerflow0009r_pd[263] = x[52] + x[52];
	v[1] = -16. * powerflow0009r_pd[262];
	v[0] += v[1];
	t1 = v[0] + x[26];
	c[26] = t1;

  /***  constraint 28  ***/

	powerflow0009r_pd[264] = 8. * x[37];
	v[0] = powerflow0009r_pd[264] * x[43];
	powerflow0009r_pd[265] = x[37] * x[37];
	powerflow0009r_pd[266] = x[37] + x[37];
	v[1] = -16. * powerflow0009r_pd[265];
	v[0] += v[1];
	powerflow0009r_pd[267] = 8. * x[43];
	v[1] = powerflow0009r_pd[267] * x[37];
	v[0] += v[1];
	powerflow0009r_pd[268] = x[46] * x[46];
	powerflow0009r_pd[269] = x[46] + x[46];
	v[1] = -16. * powerflow0009r_pd[268];
	v[0] += v[1];
	powerflow0009r_pd[270] = 8. * x[46];
	v[1] = powerflow0009r_pd[270] * x[52];
	v[0] += v[1];
	powerflow0009r_pd[271] = 8. * x[52];
	v[1] = powerflow0009r_pd[271] * x[46];
	v[0] += v[1];
	t1 = v[0] + x[27];
	c[27] = t1;

  /***  constraint 29  ***/

	powerflow0009r_pd[272] = 5.25534102593397 * x[39];
	v[0] = powerflow0009r_pd[272] * x[40];
	powerflow0009r_pd[273] = x[39] * x[39];
	powerflow0009r_pd[274] = x[39] + x[39];
	v[1] = -10.4316820518679 * powerflow0009r_pd[273];
	v[0] += v[1];
	powerflow0009r_pd[275] = 0.971095624357363 * x[39];
	v[1] = powerflow0009r_pd[275] * x[49];
	v[0] += v[1];
	powerflow0009r_pd[276] = 5.25534102593397 * x[40];
	v[1] = powerflow0009r_pd[276] * x[39];
	v[0] += v[1];
	powerflow0009r_pd[277] = 0.971095624357363 * x[40];
	v[1] = powerflow0009r_pd[277] * x[48];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[278] = 0.971095624357363 * x[48];
	v[2] = powerflow0009r_pd[278] * x[40];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[279] = x[48] * x[48];
	powerflow0009r_pd[280] = x[48] + x[48];
	v[1] = -10.4316820518679 * powerflow0009r_pd[279];
	v[0] += v[1];
	powerflow0009r_pd[281] = 5.25534102593397 * x[48];
	v[1] = powerflow0009r_pd[281] * x[49];
	v[0] += v[1];
	powerflow0009r_pd[282] = 0.971095624357363 * x[49];
	v[1] = powerflow0009r_pd[282] * x[39];
	v[0] += v[1];
	powerflow0009r_pd[283] = 5.25534102593397 * x[49];
	v[1] = powerflow0009r_pd[283] * x[48];
	v[0] += v[1];
	t1 = v[0] + x[28];
	c[28] = t1;

  /***  constraint 30  ***/

	powerflow0009r_pd[284] = 5.25534102593397 * x[39];
	v[0] = powerflow0009r_pd[284] * x[40];
	powerflow0009r_pd[285] = 0.971095624357363 * x[39];
	v[1] = powerflow0009r_pd[285] * x[49];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[286] = 5.25534102593397 * x[40];
	v[2] = powerflow0009r_pd[286] * x[39];
	v[0] += v[2];
	powerflow0009r_pd[287] = x[40] * x[40];
	powerflow0009r_pd[288] = x[40] + x[40];
	v[2] = -10.4316820518679 * powerflow0009r_pd[287];
	v[0] += v[2];
	powerflow0009r_pd[289] = 0.971095624357363 * x[40];
	v[2] = powerflow0009r_pd[289] * x[48];
	v[0] += v[2];
	powerflow0009r_pd[290] = 0.971095624357363 * x[48];
	v[2] = powerflow0009r_pd[290] * x[40];
	v[0] += v[2];
	powerflow0009r_pd[291] = 5.25534102593397 * x[48];
	v[2] = powerflow0009r_pd[291] * x[49];
	v[0] += v[2];
	powerflow0009r_pd[292] = 0.971095624357363 * x[49];
	v[2] = powerflow0009r_pd[292] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[293] = 5.25534102593397 * x[49];
	v[1] = powerflow0009r_pd[293] * x[48];
	v[0] += v[1];
	powerflow0009r_pd[294] = x[49] * x[49];
	powerflow0009r_pd[295] = x[49] + x[49];
	v[1] = -10.4316820518679 * powerflow0009r_pd[294];
	v[0] += v[1];
	t1 = v[0] + x[29];
	c[29] = t1;

  /***  constraint 31  ***/

	powerflow0009r_pd[296] = 8.68055555555556 * x[36];
	v[0] = powerflow0009r_pd[296] * x[39];
	powerflow0009r_pd[297] = x[36] * x[36];
	powerflow0009r_pd[298] = x[36] + x[36];
	v[1] = -17.3611111111111 * powerflow0009r_pd[297];
	v[0] += v[1];
	powerflow0009r_pd[299] = 8.68055555555556 * x[39];
	v[1] = powerflow0009r_pd[299] * x[36];
	v[0] += v[1];
	powerflow0009r_pd[300] = x[45] * x[45];
	powerflow0009r_pd[301] = x[45] + x[45];
	v[1] = -17.3611111111111 * powerflow0009r_pd[300];
	v[0] += v[1];
	powerflow0009r_pd[302] = 8.68055555555556 * x[45];
	v[1] = powerflow0009r_pd[302] * x[48];
	v[0] += v[1];
	powerflow0009r_pd[303] = 8.68055555555556 * x[48];
	v[1] = powerflow0009r_pd[303] * x[45];
	v[0] += v[1];
	t1 = v[0] + x[30];
	c[30] = t1;

  /***  constraint 32  ***/

	powerflow0009r_pd[304] = 8.68055555555556 * x[36];
	v[0] = powerflow0009r_pd[304] * x[39];
	powerflow0009r_pd[305] = 8.68055555555556 * x[39];
	v[1] = powerflow0009r_pd[305] * x[36];
	v[0] += v[1];
	powerflow0009r_pd[306] = x[39] * x[39];
	powerflow0009r_pd[307] = x[39] + x[39];
	v[1] = -17.3611111111111 * powerflow0009r_pd[306];
	v[0] += v[1];
	powerflow0009r_pd[308] = 8.68055555555556 * x[45];
	v[1] = powerflow0009r_pd[308] * x[48];
	v[0] += v[1];
	powerflow0009r_pd[309] = 8.68055555555556 * x[48];
	v[1] = powerflow0009r_pd[309] * x[45];
	v[0] += v[1];
	powerflow0009r_pd[310] = x[48] * x[48];
	powerflow0009r_pd[311] = x[48] + x[48];
	v[1] = -17.3611111111111 * powerflow0009r_pd[310];
	v[0] += v[1];
	t1 = v[0] + x[31];
	c[31] = t1;

  /***  constraint 33  ***/

	powerflow0009r_pd[312] = 5.80204778156997 * x[39];
	v[0] = powerflow0009r_pd[312] * x[44];
	powerflow0009r_pd[313] = 0.68259385665529 * x[39];
	v[1] = powerflow0009r_pd[313] * x[53];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[314] = 5.80204778156997 * x[44];
	v[2] = powerflow0009r_pd[314] * x[39];
	v[0] += v[2];
	powerflow0009r_pd[315] = x[44] * x[44];
	powerflow0009r_pd[316] = x[44] + x[44];
	v[2] = -11.5160955631399 * powerflow0009r_pd[315];
	v[0] += v[2];
	powerflow0009r_pd[317] = 0.68259385665529 * x[44];
	v[2] = powerflow0009r_pd[317] * x[48];
	v[0] += v[2];
	powerflow0009r_pd[318] = 0.68259385665529 * x[48];
	v[2] = powerflow0009r_pd[318] * x[44];
	v[0] += v[2];
	powerflow0009r_pd[319] = 5.80204778156997 * x[48];
	v[2] = powerflow0009r_pd[319] * x[53];
	v[0] += v[2];
	powerflow0009r_pd[320] = 0.68259385665529 * x[53];
	v[2] = powerflow0009r_pd[320] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[321] = 5.80204778156997 * x[53];
	v[1] = powerflow0009r_pd[321] * x[48];
	v[0] += v[1];
	powerflow0009r_pd[322] = x[53] * x[53];
	powerflow0009r_pd[323] = x[53] + x[53];
	v[1] = -11.5160955631399 * powerflow0009r_pd[322];
	v[0] += v[1];
	t1 = v[0] + x[32];
	c[32] = t1;

  /***  constraint 34  ***/

	powerflow0009r_pd[324] = 5.80204778156997 * x[39];
	v[0] = powerflow0009r_pd[324] * x[44];
	powerflow0009r_pd[325] = x[39] * x[39];
	powerflow0009r_pd[326] = x[39] + x[39];
	v[1] = -11.5160955631399 * powerflow0009r_pd[325];
	v[0] += v[1];
	powerflow0009r_pd[327] = 0.68259385665529 * x[39];
	v[1] = powerflow0009r_pd[327] * x[53];
	v[0] += v[1];
	powerflow0009r_pd[328] = 5.80204778156997 * x[44];
	v[1] = powerflow0009r_pd[328] * x[39];
	v[0] += v[1];
	powerflow0009r_pd[329] = 0.68259385665529 * x[44];
	v[1] = powerflow0009r_pd[329] * x[48];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[330] = 0.68259385665529 * x[48];
	v[2] = powerflow0009r_pd[330] * x[44];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[331] = x[48] * x[48];
	powerflow0009r_pd[332] = x[48] + x[48];
	v[1] = -11.5160955631399 * powerflow0009r_pd[331];
	v[0] += v[1];
	powerflow0009r_pd[333] = 5.80204778156997 * x[48];
	v[1] = powerflow0009r_pd[333] * x[53];
	v[0] += v[1];
	powerflow0009r_pd[334] = 0.68259385665529 * x[53];
	v[1] = powerflow0009r_pd[334] * x[39];
	v[0] += v[1];
	powerflow0009r_pd[335] = 5.80204778156997 * x[53];
	v[1] = powerflow0009r_pd[335] * x[48];
	v[0] += v[1];
	t1 = v[0] + x[33];
	c[33] = t1;

  /***  constraint 35  ***/

	powerflow0009r_pd[336] = 2.9875672666543 * x[43];
	v[0] = powerflow0009r_pd[336] * x[44];
	powerflow0009r_pd[337] = x[43] * x[43];
	powerflow0009r_pd[338] = x[43] + x[43];
	v[1] = -5.82213453330859 * powerflow0009r_pd[337];
	v[0] += v[1];
	powerflow0009r_pd[339] = 0.593802189645574 * x[43];
	v[1] = powerflow0009r_pd[339] * x[53];
	v[0] += v[1];
	powerflow0009r_pd[340] = 2.9875672666543 * x[44];
	v[1] = powerflow0009r_pd[340] * x[43];
	v[0] += v[1];
	powerflow0009r_pd[341] = 0.593802189645574 * x[44];
	v[1] = powerflow0009r_pd[341] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[342] = 0.593802189645574 * x[52];
	v[2] = powerflow0009r_pd[342] * x[44];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[343] = x[52] * x[52];
	powerflow0009r_pd[344] = x[52] + x[52];
	v[1] = -5.82213453330859 * powerflow0009r_pd[343];
	v[0] += v[1];
	powerflow0009r_pd[345] = 2.9875672666543 * x[52];
	v[1] = powerflow0009r_pd[345] * x[53];
	v[0] += v[1];
	powerflow0009r_pd[346] = 0.593802189645574 * x[53];
	v[1] = powerflow0009r_pd[346] * x[43];
	v[0] += v[1];
	powerflow0009r_pd[347] = 2.9875672666543 * x[53];
	v[1] = powerflow0009r_pd[347] * x[52];
	v[0] += v[1];
	t1 = v[0] + x[34];
	c[34] = t1;

  /***  constraint 36  ***/

	powerflow0009r_pd[348] = 2.9875672666543 * x[43];
	v[0] = powerflow0009r_pd[348] * x[44];
	powerflow0009r_pd[349] = 0.593802189645574 * x[43];
	v[1] = powerflow0009r_pd[349] * x[53];
	v[2] = -v[1];
	v[0] += v[2];
	powerflow0009r_pd[350] = 2.9875672666543 * x[44];
	v[2] = powerflow0009r_pd[350] * x[43];
	v[0] += v[2];
	powerflow0009r_pd[351] = x[44] * x[44];
	powerflow0009r_pd[352] = x[44] + x[44];
	v[2] = -5.82213453330859 * powerflow0009r_pd[351];
	v[0] += v[2];
	powerflow0009r_pd[353] = 0.593802189645574 * x[44];
	v[2] = powerflow0009r_pd[353] * x[52];
	v[0] += v[2];
	powerflow0009r_pd[354] = 0.593802189645574 * x[52];
	v[2] = powerflow0009r_pd[354] * x[44];
	v[0] += v[2];
	powerflow0009r_pd[355] = 2.9875672666543 * x[52];
	v[2] = powerflow0009r_pd[355] * x[53];
	v[0] += v[2];
	powerflow0009r_pd[356] = 0.593802189645574 * x[53];
	v[2] = powerflow0009r_pd[356] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	powerflow0009r_pd[357] = 2.9875672666543 * x[53];
	v[1] = powerflow0009r_pd[357] * x[52];
	v[0] += v[1];
	powerflow0009r_pd[358] = x[53] * x[53];
	powerflow0009r_pd[359] = x[53] + x[53];
	v[1] = -5.82213453330859 * powerflow0009r_pd[358];
	v[0] += v[1];
	t1 = v[0] + x[35];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[0] * x[0];
	powerflow0009r_pd[360] = x[0] + x[0];
	v[1] = x[18] * x[18];
	powerflow0009r_pd[361] = x[18] + x[18];
	v[2] = v[0] + v[1];
	c[36] = v[2];

  /***  constraint 38  ***/

	v[0] = x[1] * x[1];
	powerflow0009r_pd[362] = x[1] + x[1];
	v[1] = x[19] * x[19];
	powerflow0009r_pd[363] = x[19] + x[19];
	v[2] = v[0] + v[1];
	c[37] = v[2];

  /***  constraint 39  ***/

	v[0] = x[2] * x[2];
	powerflow0009r_pd[364] = x[2] + x[2];
	v[1] = x[20] * x[20];
	powerflow0009r_pd[365] = x[20] + x[20];
	v[2] = v[0] + v[1];
	c[38] = v[2];

  /***  constraint 40  ***/

	v[0] = x[3] * x[3];
	powerflow0009r_pd[366] = x[3] + x[3];
	v[1] = x[21] * x[21];
	powerflow0009r_pd[367] = x[21] + x[21];
	v[2] = v[0] + v[1];
	c[39] = v[2];

  /***  constraint 41  ***/

	v[0] = x[4] * x[4];
	powerflow0009r_pd[368] = x[4] + x[4];
	v[1] = x[22] * x[22];
	powerflow0009r_pd[369] = x[22] + x[22];
	v[2] = v[0] + v[1];
	c[40] = v[2];

  /***  constraint 42  ***/

	v[0] = x[5] * x[5];
	powerflow0009r_pd[370] = x[5] + x[5];
	v[1] = x[23] * x[23];
	powerflow0009r_pd[371] = x[23] + x[23];
	v[2] = v[0] + v[1];
	c[41] = v[2];

  /***  constraint 43  ***/

	v[0] = x[6] * x[6];
	powerflow0009r_pd[372] = x[6] + x[6];
	v[1] = x[24] * x[24];
	powerflow0009r_pd[373] = x[24] + x[24];
	v[2] = v[0] + v[1];
	c[42] = v[2];

  /***  constraint 44  ***/

	v[0] = x[7] * x[7];
	powerflow0009r_pd[374] = x[7] + x[7];
	v[1] = x[25] * x[25];
	powerflow0009r_pd[375] = x[25] + x[25];
	v[2] = v[0] + v[1];
	c[43] = v[2];

  /***  constraint 45  ***/

	v[0] = x[8] * x[8];
	powerflow0009r_pd[376] = x[8] + x[8];
	v[1] = x[26] * x[26];
	powerflow0009r_pd[377] = x[26] + x[26];
	v[2] = v[0] + v[1];
	c[44] = v[2];

  /***  constraint 46  ***/

	v[0] = x[9] * x[9];
	powerflow0009r_pd[378] = x[9] + x[9];
	v[1] = x[27] * x[27];
	powerflow0009r_pd[379] = x[27] + x[27];
	v[2] = v[0] + v[1];
	c[45] = v[2];

  /***  constraint 47  ***/

	v[0] = x[10] * x[10];
	powerflow0009r_pd[380] = x[10] + x[10];
	v[1] = x[28] * x[28];
	powerflow0009r_pd[381] = x[28] + x[28];
	v[2] = v[0] + v[1];
	c[46] = v[2];

  /***  constraint 48  ***/

	v[0] = x[11] * x[11];
	powerflow0009r_pd[382] = x[11] + x[11];
	v[1] = x[29] * x[29];
	powerflow0009r_pd[383] = x[29] + x[29];
	v[2] = v[0] + v[1];
	c[47] = v[2];

  /***  constraint 49  ***/

	v[0] = x[12] * x[12];
	powerflow0009r_pd[384] = x[12] + x[12];
	v[1] = x[30] * x[30];
	powerflow0009r_pd[385] = x[30] + x[30];
	v[2] = v[0] + v[1];
	c[48] = v[2];

  /***  constraint 50  ***/

	v[0] = x[13] * x[13];
	powerflow0009r_pd[386] = x[13] + x[13];
	v[1] = x[31] * x[31];
	powerflow0009r_pd[387] = x[31] + x[31];
	v[2] = v[0] + v[1];
	c[49] = v[2];

  /***  constraint 51  ***/

	v[0] = x[14] * x[14];
	powerflow0009r_pd[388] = x[14] + x[14];
	v[1] = x[32] * x[32];
	powerflow0009r_pd[389] = x[32] + x[32];
	v[2] = v[0] + v[1];
	c[50] = v[2];

  /***  constraint 52  ***/

	v[0] = x[15] * x[15];
	powerflow0009r_pd[390] = x[15] + x[15];
	v[1] = x[33] * x[33];
	powerflow0009r_pd[391] = x[33] + x[33];
	v[2] = v[0] + v[1];
	c[51] = v[2];

  /***  constraint 53  ***/

	v[0] = x[16] * x[16];
	powerflow0009r_pd[392] = x[16] + x[16];
	v[1] = x[34] * x[34];
	powerflow0009r_pd[393] = x[34] + x[34];
	v[2] = v[0] + v[1];
	c[52] = v[2];

  /***  constraint 54  ***/

	v[0] = x[17] * x[17];
	powerflow0009r_pd[394] = x[17] + x[17];
	v[1] = x[35] * x[35];
	powerflow0009r_pd[395] = x[35] + x[35];
	v[2] = v[0] + v[1];
	c[53] = v[2];

  /***  constraint 55  ***/

	v[0] = x[36] * x[36];
	powerflow0009r_pd[396] = x[36] + x[36];
	v[1] = x[45] * x[45];
	powerflow0009r_pd[397] = x[45] + x[45];
	v[2] = v[0] + v[1];
	c[54] = v[2];

  /***  constraint 56  ***/

	v[0] = x[37] * x[37];
	powerflow0009r_pd[398] = x[37] + x[37];
	v[1] = x[46] * x[46];
	powerflow0009r_pd[399] = x[46] + x[46];
	v[2] = v[0] + v[1];
	c[55] = v[2];

  /***  constraint 57  ***/

	v[0] = x[38] * x[38];
	powerflow0009r_pd[400] = x[38] + x[38];
	v[1] = x[47] * x[47];
	powerflow0009r_pd[401] = x[47] + x[47];
	v[2] = v[0] + v[1];
	c[56] = v[2];

  /***  constraint 58  ***/

	v[0] = x[39] * x[39];
	powerflow0009r_pd[402] = x[39] + x[39];
	v[1] = x[48] * x[48];
	powerflow0009r_pd[403] = x[48] + x[48];
	v[2] = v[0] + v[1];
	c[57] = v[2];

  /***  constraint 59  ***/

	v[0] = x[40] * x[40];
	powerflow0009r_pd[404] = x[40] + x[40];
	v[1] = x[49] * x[49];
	powerflow0009r_pd[405] = x[49] + x[49];
	v[2] = v[0] + v[1];
	c[58] = v[2];

  /***  constraint 60  ***/

	v[0] = x[41] * x[41];
	powerflow0009r_pd[406] = x[41] + x[41];
	v[1] = x[50] * x[50];
	powerflow0009r_pd[407] = x[50] + x[50];
	v[2] = v[0] + v[1];
	c[59] = v[2];

  /***  constraint 61  ***/

	v[0] = x[42] * x[42];
	powerflow0009r_pd[408] = x[42] + x[42];
	v[1] = x[51] * x[51];
	powerflow0009r_pd[409] = x[51] + x[51];
	v[2] = v[0] + v[1];
	c[60] = v[2];

  /***  constraint 62  ***/

	v[0] = x[43] * x[43];
	powerflow0009r_pd[410] = x[43] + x[43];
	v[1] = x[52] * x[52];
	powerflow0009r_pd[411] = x[52] + x[52];
	v[2] = v[0] + v[1];
	c[61] = v[2];

  /***  constraint 63  ***/

	v[0] = x[44] * x[44];
	powerflow0009r_pd[412] = x[44] + x[44];
	v[1] = x[53] * x[53];
	powerflow0009r_pd[413] = x[53] + x[53];
	v[2] = v[0] + v[1];
	c[62] = v[2];

  /***  constraint 64  ***/

	v[0] = x[36] * x[36];
	powerflow0009r_pd[414] = x[36] + x[36];
	v[1] = x[45] * x[45];
	powerflow0009r_pd[415] = x[45] + x[45];
	v[2] = v[0] + v[1];
	c[63] = v[2];

  /***  constraint 65  ***/

	v[0] = x[37] * x[37];
	powerflow0009r_pd[416] = x[37] + x[37];
	v[1] = x[46] * x[46];
	powerflow0009r_pd[417] = x[46] + x[46];
	v[2] = v[0] + v[1];
	c[64] = v[2];

  /***  constraint 66  ***/

	v[0] = x[38] * x[38];
	powerflow0009r_pd[418] = x[38] + x[38];
	v[1] = x[47] * x[47];
	powerflow0009r_pd[419] = x[47] + x[47];
	v[2] = v[0] + v[1];
	c[65] = v[2];

  /***  constraint 67  ***/

	v[0] = x[39] * x[39];
	powerflow0009r_pd[420] = x[39] + x[39];
	v[1] = x[48] * x[48];
	powerflow0009r_pd[421] = x[48] + x[48];
	v[2] = v[0] + v[1];
	c[66] = v[2];

  /***  constraint 68  ***/

	v[0] = x[40] * x[40];
	powerflow0009r_pd[422] = x[40] + x[40];
	v[1] = x[49] * x[49];
	powerflow0009r_pd[423] = x[49] + x[49];
	v[2] = v[0] + v[1];
	c[67] = v[2];

  /***  constraint 69  ***/

	v[0] = x[41] * x[41];
	powerflow0009r_pd[424] = x[41] + x[41];
	v[1] = x[50] * x[50];
	powerflow0009r_pd[425] = x[50] + x[50];
	v[2] = v[0] + v[1];
	c[68] = v[2];

  /***  constraint 70  ***/

	v[0] = x[42] * x[42];
	powerflow0009r_pd[426] = x[42] + x[42];
	v[1] = x[51] * x[51];
	powerflow0009r_pd[427] = x[51] + x[51];
	v[2] = v[0] + v[1];
	c[69] = v[2];

  /***  constraint 71  ***/

	v[0] = x[43] * x[43];
	powerflow0009r_pd[428] = x[43] + x[43];
	v[1] = x[52] * x[52];
	powerflow0009r_pd[429] = x[52] + x[52];
	v[2] = v[0] + v[1];
	c[70] = v[2];

  /***  constraint 72  ***/

	v[0] = x[44] * x[44];
	powerflow0009r_pd[430] = x[44] + x[44];
	v[1] = x[53] * x[53];
	powerflow0009r_pd[431] = x[53] + x[53];
	v[2] = v[0] + v[1];
	c[71] = v[2];

  /***  constraint 73  ***/

	t1 = x[54];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[55];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[56];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[54];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[55];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[56];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[57];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[58];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[59];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[57];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[58];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[59];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[45];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[12];
	t1 += -x[54];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[9];
	t1 += -x[55];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[0];
	t1 += -x[56];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[30];
	t1 += -x[57];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[27];
	t1 += -x[58];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[18];
	t1 += -x[59];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[10];
	t1 += x[13];
	t1 += x[15];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[4];
	t1 += x[11];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[1];
	t1 += x[5];
	t1 += x[6];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[2];
	t1 += x[7];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[3];
	t1 += x[8];
	t1 += x[16];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[14];
	t1 += x[17];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[28];
	t1 += x[31];
	t1 += x[33];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[22];
	t1 += x[29];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[19];
	t1 += x[23];
	t1 += x[24];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[20];
	t1 += x[25];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[21];
	t1 += x[26];
	t1 += x[34];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[32];
	t1 += x[35];
	c[102] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[120] = -powerflow0009r_pd[3];
	J[241] = -x[38]*8.53242320819113;
	J[150] = powerflow0009r_pd[2];
	J[211] = x[41]*8.53242320819113;
	J[241] -= powerflow0009r_pd[1];
	J[120] -= x[50]*8.53242320819113;
	J[211] += powerflow0009r_pd[0];
	J[150] += x[47]*8.53242320819113;
	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[121] = powerflow0009r_pd[7];
	J[242] = x[38]*8.53242320819113;
	J[151] = -powerflow0009r_pd[6];
	J[212] = -x[41]*8.53242320819113;
	J[212] -= powerflow0009r_pd[5];
	J[151] -= x[47]*8.53242320819113;
	J[242] += powerflow0009r_pd[4];
	J[121] += x[50]*8.53242320819113;
	J[3] = 1.;

   /*** derivatives for constraint 3 ***/

	J[255] = powerflow0009r_pd[19];
	J[265] = x[51]*0.808561236623068;
	J[164] = -powerflow0009r_pd[18];
	J[265] -= x[42]*6.84898929845422;
	J[265] += powerflow0009r_pd[17];
	J[255] += x[52]*0.808561236623068;
	J[255] -= 1.61712247324614*powerflow0009r_pd[16];
	J[174] = powerflow0009r_pd[14];
	J[255] += x[43]*6.84898929845422;
	J[255] += powerflow0009r_pd[13];
	J[174] += x[51]*6.84898929845422;
	J[164] += powerflow0009r_pd[12];
	J[174] += x[42]*0.808561236623068;
	J[265] -= powerflow0009r_pd[11];
	J[164] -= x[52]*6.84898929845422;
	J[164] -= 1.61712247324614*powerflow0009r_pd[10];
	J[174] += powerflow0009r_pd[8];
	J[164] += x[43]*0.808561236623068;
	J[6] = 1.;

   /*** derivatives for constraint 4 ***/

	J[266] = -1.61712247324614*powerflow0009r_pd[31];
	J[256] = powerflow0009r_pd[29];
	J[266] += x[51]*0.808561236623068;
	J[165] = powerflow0009r_pd[28];
	J[266] += x[42]*6.84898929845422;
	J[266] += powerflow0009r_pd[27];
	J[256] += x[52]*0.808561236623068;
	J[175] = -powerflow0009r_pd[26];
	J[256] -= x[43]*6.84898929845422;
	J[256] -= powerflow0009r_pd[25];
	J[175] -= x[51]*6.84898929845422;
	J[175] -= 1.61712247324614*powerflow0009r_pd[24];
	J[165] += powerflow0009r_pd[22];
	J[175] += x[42]*0.808561236623068;
	J[266] += powerflow0009r_pd[21];
	J[165] += x[52]*6.84898929845422;
	J[175] += powerflow0009r_pd[20];
	J[165] += x[43]*0.808561236623068;
	J[9] = 1.;

   /*** derivatives for constraint 5 ***/

	J[231] = powerflow0009r_pd[43];
	J[243] = x[49]*0.641004569212057;
	J[140] = -powerflow0009r_pd[42];
	J[243] -= x[40]*2.79412248118076;
	J[243] += powerflow0009r_pd[41];
	J[231] += x[50]*0.641004569212057;
	J[231] -= 1.28200913842411*powerflow0009r_pd[40];
	J[152] = powerflow0009r_pd[38];
	J[231] += x[41]*2.79412248118076;
	J[231] += powerflow0009r_pd[37];
	J[152] += x[49]*2.79412248118076;
	J[140] += powerflow0009r_pd[36];
	J[152] += x[40]*0.641004569212057;
	J[243] -= powerflow0009r_pd[35];
	J[140] -= x[50]*2.79412248118076;
	J[140] -= 1.28200913842411*powerflow0009r_pd[34];
	J[152] += powerflow0009r_pd[32];
	J[140] += x[41]*0.641004569212057;
	J[12] = 1.;

   /*** derivatives for constraint 6 ***/

	J[244] = -1.28200913842411*powerflow0009r_pd[55];
	J[232] = powerflow0009r_pd[53];
	J[244] += x[49]*0.641004569212057;
	J[141] = powerflow0009r_pd[52];
	J[244] += x[40]*2.79412248118076;
	J[244] += powerflow0009r_pd[51];
	J[232] += x[50]*0.641004569212057;
	J[153] = -powerflow0009r_pd[50];
	J[232] -= x[41]*2.79412248118076;
	J[232] -= powerflow0009r_pd[49];
	J[153] -= x[49]*2.79412248118076;
	J[153] -= 1.28200913842411*powerflow0009r_pd[48];
	J[141] += powerflow0009r_pd[46];
	J[153] += x[40]*0.641004569212057;
	J[244] += powerflow0009r_pd[45];
	J[141] += x[50]*2.79412248118076;
	J[153] += powerflow0009r_pd[44];
	J[141] += x[41]*0.641004569212057;
	J[15] = 1.;

   /*** derivatives for constraint 7 ***/

	J[245] = powerflow0009r_pd[67];
	J[257] = x[50]*0.577543740445048;
	J[154] = -powerflow0009r_pd[66];
	J[257] -= x[41]*4.89213521318159;
	J[257] += powerflow0009r_pd[65];
	J[245] += x[51]*0.577543740445048;
	J[245] -= 1.1550874808901*powerflow0009r_pd[64];
	J[166] = powerflow0009r_pd[62];
	J[245] += x[42]*4.89213521318159;
	J[245] += powerflow0009r_pd[61];
	J[166] += x[50]*4.89213521318159;
	J[154] += powerflow0009r_pd[60];
	J[166] += x[41]*0.577543740445048;
	J[257] -= powerflow0009r_pd[59];
	J[154] -= x[51]*4.89213521318159;
	J[154] -= 1.1550874808901*powerflow0009r_pd[58];
	J[166] += powerflow0009r_pd[56];
	J[154] += x[42]*0.577543740445048;
	J[18] = 1.;

   /*** derivatives for constraint 8 ***/

	J[258] = -1.1550874808901*powerflow0009r_pd[79];
	J[246] = powerflow0009r_pd[77];
	J[258] += x[50]*0.577543740445048;
	J[155] = powerflow0009r_pd[76];
	J[258] += x[41]*4.89213521318159;
	J[258] += powerflow0009r_pd[75];
	J[246] += x[51]*0.577543740445048;
	J[167] = -powerflow0009r_pd[74];
	J[246] -= x[42]*4.89213521318159;
	J[246] -= powerflow0009r_pd[73];
	J[167] -= x[50]*4.89213521318159;
	J[167] -= 1.1550874808901*powerflow0009r_pd[72];
	J[155] += powerflow0009r_pd[70];
	J[167] += x[41]*0.577543740445048;
	J[258] += powerflow0009r_pd[69];
	J[155] += x[51]*4.89213521318159;
	J[167] += powerflow0009r_pd[68];
	J[155] += x[42]*0.577543740445048;
	J[21] = 1.;

   /*** derivatives for constraint 9 ***/

	J[114] = powerflow0009r_pd[83];
	J[267] = x[37]*8.;
	J[176] = -powerflow0009r_pd[82];
	J[205] = -x[43]*8.;
	J[205] -= powerflow0009r_pd[81];
	J[176] -= x[46]*8.;
	J[267] += powerflow0009r_pd[80];
	J[114] += x[52]*8.;
	J[24] = 1.;

   /*** derivatives for constraint 10 ***/

	J[115] = -powerflow0009r_pd[87];
	J[268] = -x[37]*8.;
	J[177] = powerflow0009r_pd[86];
	J[206] = x[43]*8.;
	J[268] -= powerflow0009r_pd[85];
	J[115] -= x[52]*8.;
	J[206] += powerflow0009r_pd[84];
	J[177] += x[46]*8.;
	J[27] = 1.;

   /*** derivatives for constraint 11 ***/

	J[217] = powerflow0009r_pd[99];
	J[233] = x[48]*0.971095624357363;
	J[126] = -powerflow0009r_pd[98];
	J[233] -= x[39]*5.25534102593397;
	J[233] += powerflow0009r_pd[97];
	J[217] += x[49]*0.971095624357363;
	J[217] -= 1.94219124871473*powerflow0009r_pd[96];
	J[142] = powerflow0009r_pd[94];
	J[217] += x[40]*5.25534102593397;
	J[217] += powerflow0009r_pd[93];
	J[142] += x[48]*5.25534102593397;
	J[126] += powerflow0009r_pd[92];
	J[142] += x[39]*0.971095624357363;
	J[233] -= powerflow0009r_pd[91];
	J[126] -= x[49]*5.25534102593397;
	J[126] -= 1.94219124871473*powerflow0009r_pd[90];
	J[142] += powerflow0009r_pd[88];
	J[126] += x[40]*0.971095624357363;
	J[30] = 1.;

   /*** derivatives for constraint 12 ***/

	J[234] = -1.94219124871473*powerflow0009r_pd[111];
	J[218] = powerflow0009r_pd[109];
	J[234] += x[48]*0.971095624357363;
	J[127] = powerflow0009r_pd[108];
	J[234] += x[39]*5.25534102593397;
	J[234] += powerflow0009r_pd[107];
	J[218] += x[49]*0.971095624357363;
	J[143] = -powerflow0009r_pd[106];
	J[218] -= x[40]*5.25534102593397;
	J[218] -= powerflow0009r_pd[105];
	J[143] -= x[48]*5.25534102593397;
	J[143] -= 1.94219124871473*powerflow0009r_pd[104];
	J[127] += powerflow0009r_pd[102];
	J[143] += x[39]*0.971095624357363;
	J[234] += powerflow0009r_pd[101];
	J[127] += x[49]*5.25534102593397;
	J[143] += powerflow0009r_pd[100];
	J[127] += x[40]*0.971095624357363;
	J[33] = 1.;

   /*** derivatives for constraint 13 ***/

	J[108] = -powerflow0009r_pd[115];
	J[219] = -x[36]*8.68055555555556;
	J[128] = powerflow0009r_pd[114];
	J[198] = x[39]*8.68055555555556;
	J[219] -= powerflow0009r_pd[113];
	J[108] -= x[48]*8.68055555555556;
	J[198] += powerflow0009r_pd[112];
	J[128] += x[45]*8.68055555555556;
	J[36] = 1.;

   /*** derivatives for constraint 14 ***/

	J[109] = powerflow0009r_pd[119];
	J[220] = x[36]*8.68055555555556;
	J[129] = -powerflow0009r_pd[118];
	J[199] = -x[39]*8.68055555555556;
	J[199] -= powerflow0009r_pd[117];
	J[129] -= x[45]*8.68055555555556;
	J[220] += powerflow0009r_pd[116];
	J[109] += x[48]*8.68055555555556;
	J[39] = 1.;

   /*** derivatives for constraint 15 ***/

	J[279] = -1.36518771331058*powerflow0009r_pd[131];
	J[221] = powerflow0009r_pd[129];
	J[279] += x[48]*0.68259385665529;
	J[130] = powerflow0009r_pd[128];
	J[279] += x[39]*5.80204778156997;
	J[279] += powerflow0009r_pd[127];
	J[221] += x[53]*0.68259385665529;
	J[188] = -powerflow0009r_pd[126];
	J[221] -= x[44]*5.80204778156997;
	J[221] -= powerflow0009r_pd[125];
	J[188] -= x[48]*5.80204778156997;
	J[188] -= 1.36518771331058*powerflow0009r_pd[124];
	J[130] += powerflow0009r_pd[122];
	J[188] += x[39]*0.68259385665529;
	J[279] += powerflow0009r_pd[121];
	J[130] += x[53]*5.80204778156997;
	J[188] += powerflow0009r_pd[120];
	J[130] += x[44]*0.68259385665529;
	J[42] = 1.;

   /*** derivatives for constraint 16 ***/

	J[222] = powerflow0009r_pd[143];
	J[280] = x[48]*0.68259385665529;
	J[131] = -powerflow0009r_pd[142];
	J[280] -= x[39]*5.80204778156997;
	J[280] += powerflow0009r_pd[141];
	J[222] += x[53]*0.68259385665529;
	J[222] -= 1.36518771331058*powerflow0009r_pd[140];
	J[189] = powerflow0009r_pd[138];
	J[222] += x[44]*5.80204778156997;
	J[222] += powerflow0009r_pd[137];
	J[189] += x[48]*5.80204778156997;
	J[131] += powerflow0009r_pd[136];
	J[189] += x[39]*0.68259385665529;
	J[280] -= powerflow0009r_pd[135];
	J[131] -= x[53]*5.80204778156997;
	J[131] -= 1.36518771331058*powerflow0009r_pd[134];
	J[189] += powerflow0009r_pd[132];
	J[131] += x[44]*0.68259385665529;
	J[45] = 1.;

   /*** derivatives for constraint 17 ***/

	J[269] = powerflow0009r_pd[155];
	J[281] = x[52]*0.593802189645574;
	J[178] = -powerflow0009r_pd[154];
	J[281] -= x[43]*2.9875672666543;
	J[281] += powerflow0009r_pd[153];
	J[269] += x[53]*0.593802189645574;
	J[269] -= 1.18760437929115*powerflow0009r_pd[152];
	J[190] = powerflow0009r_pd[150];
	J[269] += x[44]*2.9875672666543;
	J[269] += powerflow0009r_pd[149];
	J[190] += x[52]*2.9875672666543;
	J[178] += powerflow0009r_pd[148];
	J[190] += x[43]*0.593802189645574;
	J[281] -= powerflow0009r_pd[147];
	J[178] -= x[53]*2.9875672666543;
	J[178] -= 1.18760437929115*powerflow0009r_pd[146];
	J[190] += powerflow0009r_pd[144];
	J[178] += x[44]*0.593802189645574;
	J[48] = 1.;

   /*** derivatives for constraint 18 ***/

	J[282] = -1.18760437929115*powerflow0009r_pd[167];
	J[270] = powerflow0009r_pd[165];
	J[282] += x[52]*0.593802189645574;
	J[179] = powerflow0009r_pd[164];
	J[282] += x[43]*2.9875672666543;
	J[282] += powerflow0009r_pd[163];
	J[270] += x[53]*0.593802189645574;
	J[191] = -powerflow0009r_pd[162];
	J[270] -= x[44]*2.9875672666543;
	J[270] -= powerflow0009r_pd[161];
	J[191] -= x[52]*2.9875672666543;
	J[191] -= 1.18760437929115*powerflow0009r_pd[160];
	J[179] += powerflow0009r_pd[158];
	J[191] += x[43]*0.593802189645574;
	J[282] += powerflow0009r_pd[157];
	J[179] += x[53]*2.9875672666543;
	J[191] += powerflow0009r_pd[156];
	J[179] += x[44]*0.593802189645574;
	J[51] = 1.;

   /*** derivatives for constraint 19 ***/

	J[213] = powerflow0009r_pd[175];
	J[247] = x[47]*8.53242320819113;
	J[247] += powerflow0009r_pd[174];
	J[213] += x[50]*8.53242320819113;
	J[213] -= 17.0648464163823*powerflow0009r_pd[173];
	J[122] = powerflow0009r_pd[171];
	J[156] = x[38]*8.53242320819113;
	J[122] -= 17.0648464163823*powerflow0009r_pd[170];
	J[156] += powerflow0009r_pd[168];
	J[122] += x[41]*8.53242320819113;
	J[54] = 1.;

   /*** derivatives for constraint 20 ***/

	J[248] = -17.0648464163823*powerflow0009r_pd[183];
	J[214] = powerflow0009r_pd[181];
	J[248] += x[47]*8.53242320819113;
	J[248] += powerflow0009r_pd[180];
	J[214] += x[50]*8.53242320819113;
	J[157] = -17.0648464163823*powerflow0009r_pd[179];
	J[123] = powerflow0009r_pd[177];
	J[157] += x[38]*8.53242320819113;
	J[157] += powerflow0009r_pd[176];
	J[123] += x[41]*8.53242320819113;
	J[57] = 1.;

   /*** derivatives for constraint 21 ***/

	J[259] = powerflow0009r_pd[195];
	J[271] = x[51]*6.84898929845422;
	J[168] = powerflow0009r_pd[194];
	J[271] += x[42]*0.808561236623068;
	J[271] += powerflow0009r_pd[193];
	J[259] += x[52]*6.84898929845422;
	J[259] -= 13.6234785969084*powerflow0009r_pd[192];
	J[180] = -powerflow0009r_pd[190];
	J[259] -= x[43]*0.808561236623068;
	J[259] -= powerflow0009r_pd[189];
	J[180] -= x[51]*0.808561236623068;
	J[168] += powerflow0009r_pd[188];
	J[180] += x[42]*6.84898929845422;
	J[271] += powerflow0009r_pd[187];
	J[168] += x[52]*0.808561236623068;
	J[168] -= 13.6234785969084*powerflow0009r_pd[186];
	J[180] += powerflow0009r_pd[184];
	J[168] += x[43]*6.84898929845422;
	J[60] = 1.;

   /*** derivatives for constraint 22 ***/

	J[272] = -13.6234785969084*powerflow0009r_pd[207];
	J[260] = powerflow0009r_pd[205];
	J[272] += x[51]*6.84898929845422;
	J[169] = -powerflow0009r_pd[204];
	J[272] -= x[42]*0.808561236623068;
	J[272] += powerflow0009r_pd[203];
	J[260] += x[52]*6.84898929845422;
	J[181] = powerflow0009r_pd[202];
	J[260] += x[43]*0.808561236623068;
	J[260] += powerflow0009r_pd[201];
	J[181] += x[51]*0.808561236623068;
	J[181] -= 13.6234785969084*powerflow0009r_pd[200];
	J[169] += powerflow0009r_pd[198];
	J[181] += x[42]*6.84898929845422;
	J[272] -= powerflow0009r_pd[197];
	J[169] -= x[52]*0.808561236623068;
	J[181] += powerflow0009r_pd[196];
	J[169] += x[43]*6.84898929845422;
	J[63] = 1.;

   /*** derivatives for constraint 23 ***/

	J[235] = powerflow0009r_pd[219];
	J[249] = x[49]*2.79412248118076;
	J[144] = powerflow0009r_pd[218];
	J[249] += x[40]*0.641004569212057;
	J[249] += powerflow0009r_pd[217];
	J[235] += x[50]*2.79412248118076;
	J[235] -= 5.40924496236153*powerflow0009r_pd[216];
	J[158] = -powerflow0009r_pd[214];
	J[235] -= x[41]*0.641004569212057;
	J[235] -= powerflow0009r_pd[213];
	J[158] -= x[49]*0.641004569212057;
	J[144] += powerflow0009r_pd[212];
	J[158] += x[40]*2.79412248118076;
	J[249] += powerflow0009r_pd[211];
	J[144] += x[50]*0.641004569212057;
	J[144] -= 5.40924496236153*powerflow0009r_pd[210];
	J[158] += powerflow0009r_pd[208];
	J[144] += x[41]*2.79412248118076;
	J[66] = 1.;

   /*** derivatives for constraint 24 ***/

	J[250] = -5.40924496236153*powerflow0009r_pd[231];
	J[236] = powerflow0009r_pd[229];
	J[250] += x[49]*2.79412248118076;
	J[145] = -powerflow0009r_pd[228];
	J[250] -= x[40]*0.641004569212057;
	J[250] += powerflow0009r_pd[227];
	J[236] += x[50]*2.79412248118076;
	J[159] = powerflow0009r_pd[226];
	J[236] += x[41]*0.641004569212057;
	J[236] += powerflow0009r_pd[225];
	J[159] += x[49]*0.641004569212057;
	J[159] -= 5.40924496236153*powerflow0009r_pd[224];
	J[145] += powerflow0009r_pd[222];
	J[159] += x[40]*2.79412248118076;
	J[250] -= powerflow0009r_pd[221];
	J[145] -= x[50]*0.641004569212057;
	J[159] += powerflow0009r_pd[220];
	J[145] += x[41]*2.79412248118076;
	J[69] = 1.;

   /*** derivatives for constraint 25 ***/

	J[251] = powerflow0009r_pd[243];
	J[261] = x[50]*4.89213521318159;
	J[160] = powerflow0009r_pd[242];
	J[261] += x[41]*0.577543740445048;
	J[261] += powerflow0009r_pd[241];
	J[251] += x[51]*4.89213521318159;
	J[251] -= 9.67977042636317*powerflow0009r_pd[240];
	J[170] = -powerflow0009r_pd[238];
	J[251] -= x[42]*0.577543740445048;
	J[251] -= powerflow0009r_pd[237];
	J[170] -= x[50]*0.577543740445048;
	J[160] += powerflow0009r_pd[236];
	J[170] += x[41]*4.89213521318159;
	J[261] += powerflow0009r_pd[235];
	J[160] += x[51]*0.577543740445048;
	J[160] -= 9.67977042636317*powerflow0009r_pd[234];
	J[170] += powerflow0009r_pd[232];
	J[160] += x[42]*4.89213521318159;
	J[72] = 1.;

   /*** derivatives for constraint 26 ***/

	J[262] = -9.67977042636317*powerflow0009r_pd[255];
	J[252] = powerflow0009r_pd[253];
	J[262] += x[50]*4.89213521318159;
	J[161] = -powerflow0009r_pd[252];
	J[262] -= x[41]*0.577543740445048;
	J[262] += powerflow0009r_pd[251];
	J[252] += x[51]*4.89213521318159;
	J[171] = powerflow0009r_pd[250];
	J[252] += x[42]*0.577543740445048;
	J[252] += powerflow0009r_pd[249];
	J[171] += x[50]*0.577543740445048;
	J[171] -= 9.67977042636317*powerflow0009r_pd[248];
	J[161] += powerflow0009r_pd[246];
	J[171] += x[41]*4.89213521318159;
	J[262] -= powerflow0009r_pd[245];
	J[161] -= x[51]*0.577543740445048;
	J[171] += powerflow0009r_pd[244];
	J[161] += x[42]*4.89213521318159;
	J[75] = 1.;

   /*** derivatives for constraint 27 ***/

	J[273] = -16.*powerflow0009r_pd[263];
	J[207] = powerflow0009r_pd[261];
	J[273] += x[46]*8.;
	J[273] += powerflow0009r_pd[260];
	J[207] += x[52]*8.;
	J[182] = -16.*powerflow0009r_pd[259];
	J[116] = powerflow0009r_pd[257];
	J[182] += x[37]*8.;
	J[182] += powerflow0009r_pd[256];
	J[116] += x[43]*8.;
	J[78] = 1.;

   /*** derivatives for constraint 28 ***/

	J[208] = powerflow0009r_pd[271];
	J[274] = x[46]*8.;
	J[274] += powerflow0009r_pd[270];
	J[208] += x[52]*8.;
	J[208] -= 16.*powerflow0009r_pd[269];
	J[117] = powerflow0009r_pd[267];
	J[183] = x[37]*8.;
	J[117] -= 16.*powerflow0009r_pd[266];
	J[183] += powerflow0009r_pd[264];
	J[117] += x[43]*8.;
	J[81] = 1.;

   /*** derivatives for constraint 29 ***/

	J[223] = powerflow0009r_pd[283];
	J[237] = x[48]*5.25534102593397;
	J[132] = powerflow0009r_pd[282];
	J[237] += x[39]*0.971095624357363;
	J[237] += powerflow0009r_pd[281];
	J[223] += x[49]*5.25534102593397;
	J[223] -= 10.4316820518679*powerflow0009r_pd[280];
	J[146] = -powerflow0009r_pd[278];
	J[223] -= x[40]*0.971095624357363;
	J[223] -= powerflow0009r_pd[277];
	J[146] -= x[48]*0.971095624357363;
	J[132] += powerflow0009r_pd[276];
	J[146] += x[39]*5.25534102593397;
	J[237] += powerflow0009r_pd[275];
	J[132] += x[49]*0.971095624357363;
	J[132] -= 10.4316820518679*powerflow0009r_pd[274];
	J[146] += powerflow0009r_pd[272];
	J[132] += x[40]*5.25534102593397;
	J[84] = 1.;

   /*** derivatives for constraint 30 ***/

	J[238] = -10.4316820518679*powerflow0009r_pd[295];
	J[224] = powerflow0009r_pd[293];
	J[238] += x[48]*5.25534102593397;
	J[133] = -powerflow0009r_pd[292];
	J[238] -= x[39]*0.971095624357363;
	J[238] += powerflow0009r_pd[291];
	J[224] += x[49]*5.25534102593397;
	J[147] = powerflow0009r_pd[290];
	J[224] += x[40]*0.971095624357363;
	J[224] += powerflow0009r_pd[289];
	J[147] += x[48]*0.971095624357363;
	J[147] -= 10.4316820518679*powerflow0009r_pd[288];
	J[133] += powerflow0009r_pd[286];
	J[147] += x[39]*5.25534102593397;
	J[238] -= powerflow0009r_pd[285];
	J[133] -= x[49]*0.971095624357363;
	J[147] += powerflow0009r_pd[284];
	J[133] += x[40]*5.25534102593397;
	J[87] = 1.;

   /*** derivatives for constraint 31 ***/

	J[200] = powerflow0009r_pd[303];
	J[225] = x[45]*8.68055555555556;
	J[225] += powerflow0009r_pd[302];
	J[200] += x[48]*8.68055555555556;
	J[200] -= 17.3611111111111*powerflow0009r_pd[301];
	J[110] = powerflow0009r_pd[299];
	J[134] = x[36]*8.68055555555556;
	J[110] -= 17.3611111111111*powerflow0009r_pd[298];
	J[134] += powerflow0009r_pd[296];
	J[110] += x[39]*8.68055555555556;
	J[90] = 1.;

   /*** derivatives for constraint 32 ***/

	J[226] = -17.3611111111111*powerflow0009r_pd[311];
	J[201] = powerflow0009r_pd[309];
	J[226] += x[45]*8.68055555555556;
	J[226] += powerflow0009r_pd[308];
	J[201] += x[48]*8.68055555555556;
	J[135] = -17.3611111111111*powerflow0009r_pd[307];
	J[111] = powerflow0009r_pd[305];
	J[135] += x[36]*8.68055555555556;
	J[135] += powerflow0009r_pd[304];
	J[111] += x[39]*8.68055555555556;
	J[93] = 1.;

   /*** derivatives for constraint 33 ***/

	J[283] = -11.5160955631399*powerflow0009r_pd[323];
	J[227] = powerflow0009r_pd[321];
	J[283] += x[48]*5.80204778156997;
	J[136] = -powerflow0009r_pd[320];
	J[283] -= x[39]*0.68259385665529;
	J[283] += powerflow0009r_pd[319];
	J[227] += x[53]*5.80204778156997;
	J[192] = powerflow0009r_pd[318];
	J[227] += x[44]*0.68259385665529;
	J[227] += powerflow0009r_pd[317];
	J[192] += x[48]*0.68259385665529;
	J[192] -= 11.5160955631399*powerflow0009r_pd[316];
	J[136] += powerflow0009r_pd[314];
	J[192] += x[39]*5.80204778156997;
	J[283] -= powerflow0009r_pd[313];
	J[136] -= x[53]*0.68259385665529;
	J[192] += powerflow0009r_pd[312];
	J[136] += x[44]*5.80204778156997;
	J[96] = 1.;

   /*** derivatives for constraint 34 ***/

	J[228] = powerflow0009r_pd[335];
	J[284] = x[48]*5.80204778156997;
	J[137] = powerflow0009r_pd[334];
	J[284] += x[39]*0.68259385665529;
	J[284] += powerflow0009r_pd[333];
	J[228] += x[53]*5.80204778156997;
	J[228] -= 11.5160955631399*powerflow0009r_pd[332];
	J[193] = -powerflow0009r_pd[330];
	J[228] -= x[44]*0.68259385665529;
	J[228] -= powerflow0009r_pd[329];
	J[193] -= x[48]*0.68259385665529;
	J[137] += powerflow0009r_pd[328];
	J[193] += x[39]*5.80204778156997;
	J[284] += powerflow0009r_pd[327];
	J[137] += x[53]*0.68259385665529;
	J[137] -= 11.5160955631399*powerflow0009r_pd[326];
	J[193] += powerflow0009r_pd[324];
	J[137] += x[44]*5.80204778156997;
	J[99] = 1.;

   /*** derivatives for constraint 35 ***/

	J[275] = powerflow0009r_pd[347];
	J[285] = x[52]*2.9875672666543;
	J[184] = powerflow0009r_pd[346];
	J[285] += x[43]*0.593802189645574;
	J[285] += powerflow0009r_pd[345];
	J[275] += x[53]*2.9875672666543;
	J[275] -= 5.82213453330859*powerflow0009r_pd[344];
	J[194] = -powerflow0009r_pd[342];
	J[275] -= x[44]*0.593802189645574;
	J[275] -= powerflow0009r_pd[341];
	J[194] -= x[52]*0.593802189645574;
	J[184] += powerflow0009r_pd[340];
	J[194] += x[43]*2.9875672666543;
	J[285] += powerflow0009r_pd[339];
	J[184] += x[53]*0.593802189645574;
	J[184] -= 5.82213453330859*powerflow0009r_pd[338];
	J[194] += powerflow0009r_pd[336];
	J[184] += x[44]*2.9875672666543;
	J[102] = 1.;

   /*** derivatives for constraint 36 ***/

	J[286] = -5.82213453330859*powerflow0009r_pd[359];
	J[276] = powerflow0009r_pd[357];
	J[286] += x[52]*2.9875672666543;
	J[185] = -powerflow0009r_pd[356];
	J[286] -= x[43]*0.593802189645574;
	J[286] += powerflow0009r_pd[355];
	J[276] += x[53]*2.9875672666543;
	J[195] = powerflow0009r_pd[354];
	J[276] += x[44]*0.593802189645574;
	J[276] += powerflow0009r_pd[353];
	J[195] += x[52]*0.593802189645574;
	J[195] -= 5.82213453330859*powerflow0009r_pd[352];
	J[185] += powerflow0009r_pd[350];
	J[195] += x[43]*2.9875672666543;
	J[286] -= powerflow0009r_pd[349];
	J[185] -= x[53]*0.593802189645574;
	J[195] += powerflow0009r_pd[348];
	J[185] += x[44]*2.9875672666543;
	J[105] = 1.;

   /*** derivatives for constraint 37 ***/

	J[55] = powerflow0009r_pd[361];
	J[1] = powerflow0009r_pd[360];

   /*** derivatives for constraint 38 ***/

	J[58] = powerflow0009r_pd[363];
	J[4] = powerflow0009r_pd[362];

   /*** derivatives for constraint 39 ***/

	J[61] = powerflow0009r_pd[365];
	J[7] = powerflow0009r_pd[364];

   /*** derivatives for constraint 40 ***/

	J[64] = powerflow0009r_pd[367];
	J[10] = powerflow0009r_pd[366];

   /*** derivatives for constraint 41 ***/

	J[67] = powerflow0009r_pd[369];
	J[13] = powerflow0009r_pd[368];

   /*** derivatives for constraint 42 ***/

	J[70] = powerflow0009r_pd[371];
	J[16] = powerflow0009r_pd[370];

   /*** derivatives for constraint 43 ***/

	J[73] = powerflow0009r_pd[373];
	J[19] = powerflow0009r_pd[372];

   /*** derivatives for constraint 44 ***/

	J[76] = powerflow0009r_pd[375];
	J[22] = powerflow0009r_pd[374];

   /*** derivatives for constraint 45 ***/

	J[79] = powerflow0009r_pd[377];
	J[25] = powerflow0009r_pd[376];

   /*** derivatives for constraint 46 ***/

	J[82] = powerflow0009r_pd[379];
	J[28] = powerflow0009r_pd[378];

   /*** derivatives for constraint 47 ***/

	J[85] = powerflow0009r_pd[381];
	J[31] = powerflow0009r_pd[380];

   /*** derivatives for constraint 48 ***/

	J[88] = powerflow0009r_pd[383];
	J[34] = powerflow0009r_pd[382];

   /*** derivatives for constraint 49 ***/

	J[91] = powerflow0009r_pd[385];
	J[37] = powerflow0009r_pd[384];

   /*** derivatives for constraint 50 ***/

	J[94] = powerflow0009r_pd[387];
	J[40] = powerflow0009r_pd[386];

   /*** derivatives for constraint 51 ***/

	J[97] = powerflow0009r_pd[389];
	J[43] = powerflow0009r_pd[388];

   /*** derivatives for constraint 52 ***/

	J[100] = powerflow0009r_pd[391];
	J[46] = powerflow0009r_pd[390];

   /*** derivatives for constraint 53 ***/

	J[103] = powerflow0009r_pd[393];
	J[49] = powerflow0009r_pd[392];

   /*** derivatives for constraint 54 ***/

	J[106] = powerflow0009r_pd[395];
	J[52] = powerflow0009r_pd[394];

   /*** derivatives for constraint 55 ***/

	J[202] = powerflow0009r_pd[397];
	J[112] = powerflow0009r_pd[396];

   /*** derivatives for constraint 56 ***/

	J[209] = powerflow0009r_pd[399];
	J[118] = powerflow0009r_pd[398];

   /*** derivatives for constraint 57 ***/

	J[215] = powerflow0009r_pd[401];
	J[124] = powerflow0009r_pd[400];

   /*** derivatives for constraint 58 ***/

	J[229] = powerflow0009r_pd[403];
	J[138] = powerflow0009r_pd[402];

   /*** derivatives for constraint 59 ***/

	J[239] = powerflow0009r_pd[405];
	J[148] = powerflow0009r_pd[404];

   /*** derivatives for constraint 60 ***/

	J[253] = powerflow0009r_pd[407];
	J[162] = powerflow0009r_pd[406];

   /*** derivatives for constraint 61 ***/

	J[263] = powerflow0009r_pd[409];
	J[172] = powerflow0009r_pd[408];

   /*** derivatives for constraint 62 ***/

	J[277] = powerflow0009r_pd[411];
	J[186] = powerflow0009r_pd[410];

   /*** derivatives for constraint 63 ***/

	J[287] = powerflow0009r_pd[413];
	J[196] = powerflow0009r_pd[412];

   /*** derivatives for constraint 64 ***/

	J[203] = powerflow0009r_pd[415];
	J[113] = powerflow0009r_pd[414];

   /*** derivatives for constraint 65 ***/

	J[210] = powerflow0009r_pd[417];
	J[119] = powerflow0009r_pd[416];

   /*** derivatives for constraint 66 ***/

	J[216] = powerflow0009r_pd[419];
	J[125] = powerflow0009r_pd[418];

   /*** derivatives for constraint 67 ***/

	J[230] = powerflow0009r_pd[421];
	J[139] = powerflow0009r_pd[420];

   /*** derivatives for constraint 68 ***/

	J[240] = powerflow0009r_pd[423];
	J[149] = powerflow0009r_pd[422];

   /*** derivatives for constraint 69 ***/

	J[254] = powerflow0009r_pd[425];
	J[163] = powerflow0009r_pd[424];

   /*** derivatives for constraint 70 ***/

	J[264] = powerflow0009r_pd[427];
	J[173] = powerflow0009r_pd[426];

   /*** derivatives for constraint 71 ***/

	J[278] = powerflow0009r_pd[429];
	J[187] = powerflow0009r_pd[428];

   /*** derivatives for constraint 72 ***/

	J[288] = powerflow0009r_pd[431];
	J[197] = powerflow0009r_pd[430];

   /*** derivatives for constraint 73 ***/

	J[289] = 1.;

   /*** derivatives for constraint 74 ***/

	J[292] = 1.;

   /*** derivatives for constraint 75 ***/

	J[295] = 1.;

   /*** derivatives for constraint 76 ***/

	J[290] = 1.;

   /*** derivatives for constraint 77 ***/

	J[293] = 1.;

   /*** derivatives for constraint 78 ***/

	J[296] = 1.;

   /*** derivatives for constraint 79 ***/

	J[298] = 1.;

   /*** derivatives for constraint 80 ***/

	J[301] = 1.;

   /*** derivatives for constraint 81 ***/

	J[304] = 1.;

   /*** derivatives for constraint 82 ***/

	J[299] = 1.;

   /*** derivatives for constraint 83 ***/

	J[302] = 1.;

   /*** derivatives for constraint 84 ***/

	J[305] = 1.;

   /*** derivatives for constraint 85 ***/

	J[204] = 1.;

   /*** derivatives for constraint 86 ***/

	J[38] = 1.;
	J[291] = -1.;

   /*** derivatives for constraint 87 ***/

	J[29] = 1.;
	J[294] = -1.;

   /*** derivatives for constraint 88 ***/

	J[2] = 1.;
	J[297] = -1.;

   /*** derivatives for constraint 89 ***/

	J[92] = 1.;
	J[300] = -1.;

   /*** derivatives for constraint 90 ***/

	J[83] = 1.;
	J[303] = -1.;

   /*** derivatives for constraint 91 ***/

	J[56] = 1.;
	J[306] = -1.;

   /*** derivatives for constraint 92 ***/

	J[32] = 1.;
	J[41] = 1.;
	J[47] = 1.;

   /*** derivatives for constraint 93 ***/

	J[14] = 1.;
	J[35] = 1.;

   /*** derivatives for constraint 94 ***/

	J[5] = 1.;
	J[17] = 1.;
	J[20] = 1.;

   /*** derivatives for constraint 95 ***/

	J[8] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 96 ***/

	J[11] = 1.;
	J[26] = 1.;
	J[50] = 1.;

   /*** derivatives for constraint 97 ***/

	J[44] = 1.;
	J[53] = 1.;

   /*** derivatives for constraint 98 ***/

	J[86] = 1.;
	J[95] = 1.;
	J[101] = 1.;

   /*** derivatives for constraint 99 ***/

	J[68] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 100 ***/

	J[59] = 1.;
	J[71] = 1.;
	J[74] = 1.;

   /*** derivatives for constraint 101 ***/

	J[62] = 1.;
	J[77] = 1.;

   /*** derivatives for constraint 102 ***/

	J[65] = 1.;
	J[80] = 1.;
	J[104] = 1.;

   /*** derivatives for constraint 103 ***/

	J[98] = 1.;
	J[107] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
