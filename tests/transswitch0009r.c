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
 fint transswitch0009r_auxcom_[1] = { 72 /* nlc */ };
 fint transswitch0009r_funcom_[419] = {
	69 /* nvar */,
	1 /* nobj */,
	103 /* ncon */,
	343 /* nzc */,
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
	294,
	298,
	302,
	306,
	310,
	314,
	318,
	322,
	326,
	329,
	332,
	335,
	338,
	341,
	344,

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
	1,
	2,
	19,
	20,
	3,
	4,
	21,
	22,
	5,
	6,
	23,
	24,
	7,
	8,
	25,
	26,
	9,
	10,
	27,
	28,
	11,
	12,
	29,
	30,
	13,
	14,
	31,
	32,
	15,
	16,
	33,
	34,
	17,
	18,
	35,
	36,
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

 real transswitch0009r_boundc_[1+138+206] /* Infinity, variable bounds, constraint bounds */ = {
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

 real transswitch0009r_x0comn_[69] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real transswitch0009r_pd[198];
static real transswitch0009r_old_x[69];
static int transswitch0009r_xkind = -1;

 static int
transswitch0009r_xcheck(real *x)
{
	real *x1 = transswitch0009r_old_x, *xe = x + 69;
	errno = 0;
	if (transswitch0009r_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	transswitch0009r_xkind = 0;
	return 1;
	}
 real
transswitch0009r_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (transswitch0009r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	transswitch0009r_pd[192] = x[63] * x[63];
	transswitch0009r_pd[193] = x[63] + x[63];
	v[0] = 1100. * transswitch0009r_pd[192];
	transswitch0009r_pd[194] = x[64] * x[64];
	transswitch0009r_pd[195] = x[64] + x[64];
	v[1] = 850. * transswitch0009r_pd[194];
	v[0] += v[1];
	transswitch0009r_pd[196] = x[65] * x[65];
	transswitch0009r_pd[197] = x[65] + x[65];
	v[1] = 1225. * transswitch0009r_pd[196];
	v[0] += v[1];
	v[0] += 1085.;
	rv = v[0] + 500.*x[63];
	rv += 120.*x[64];
	rv += 100.*x[65];
	;}

	if (wantfg & 2) {
	g[65] = 1225.*transswitch0009r_pd[197] + 100.;
	g[64] = 850.*transswitch0009r_pd[195] + 120.;
	g[63] = 1100.*transswitch0009r_pd[193] + 500.;
	}

	return rv;
}

 void
transswitch0009r_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[6];
	real t1;
	fint wantfg = *needfg;
	if (transswitch0009r_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[38] * x[50];
	v[1] = x[41] * x[47];
	v[2] = v[0] - v[1];
	transswitch0009r_pd[0] = -17.0648464163823 * v[2];
	v[2] = transswitch0009r_pd[0] * x[54];
	t1 = v[2] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[41] * x[47];
	v[1] = x[38] * x[50];
	v[2] = v[0] - v[1];
	transswitch0009r_pd[1] = -17.0648464163823 * v[2];
	v[2] = transswitch0009r_pd[1] * x[54];
	t1 = v[2] + x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[42] * x[42];
	transswitch0009r_pd[2] = x[42] + x[42];
	v[1] = x[51] * x[51];
	transswitch0009r_pd[3] = x[51] + x[51];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[4] = 1.61712247324614 * v[2];
	v[2] = x[42] * x[43];
	v[1] = x[51] * x[52];
	v[0] = v[2] + v[1];
	v[0] *= -1.61712247324614;
	transswitch0009r_pd[5] = transswitch0009r_pd[4] + v[0];
	v[1] = x[42] * x[52];
	v[2] = x[43] * x[51];
	v[3] = v[1] - v[2];
	v[3] *= 13.6979785969084;
	transswitch0009r_pd[5] += v[3];
	v[3] = transswitch0009r_pd[5] * x[55];
	v[2] = -v[3];
	t1 = v[2] + x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[43] * x[43];
	transswitch0009r_pd[6] = x[43] + x[43];
	v[1] = x[52] * x[52];
	transswitch0009r_pd[7] = x[52] + x[52];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[8] = 1.61712247324614 * v[2];
	v[2] = x[43] * x[42];
	v[1] = x[52] * x[51];
	v[0] = v[2] + v[1];
	v[0] *= -1.61712247324614;
	transswitch0009r_pd[9] = transswitch0009r_pd[8] + v[0];
	v[1] = x[43] * x[51];
	v[2] = x[42] * x[52];
	v[3] = v[1] - v[2];
	v[3] *= 13.6979785969084;
	transswitch0009r_pd[9] += v[3];
	v[3] = transswitch0009r_pd[9] * x[55];
	v[2] = -v[3];
	t1 = v[2] + x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[40] * x[40];
	transswitch0009r_pd[10] = x[40] + x[40];
	v[1] = x[49] * x[49];
	transswitch0009r_pd[11] = x[49] + x[49];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[12] = 1.28200913842411 * v[2];
	v[2] = x[40] * x[41];
	v[1] = x[49] * x[50];
	v[0] = v[2] + v[1];
	v[0] *= -1.28200913842411;
	transswitch0009r_pd[13] = transswitch0009r_pd[12] + v[0];
	v[1] = x[40] * x[50];
	v[2] = x[41] * x[49];
	v[3] = v[1] - v[2];
	v[3] *= 5.58824496236153;
	transswitch0009r_pd[13] += v[3];
	v[3] = transswitch0009r_pd[13] * x[56];
	v[2] = -v[3];
	t1 = v[2] + x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[41] * x[41];
	transswitch0009r_pd[14] = x[41] + x[41];
	v[1] = x[50] * x[50];
	transswitch0009r_pd[15] = x[50] + x[50];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[16] = 1.28200913842411 * v[2];
	v[2] = x[41] * x[40];
	v[1] = x[50] * x[49];
	v[0] = v[2] + v[1];
	v[0] *= -1.28200913842411;
	transswitch0009r_pd[17] = transswitch0009r_pd[16] + v[0];
	v[1] = x[41] * x[49];
	v[2] = x[40] * x[50];
	v[3] = v[1] - v[2];
	v[3] *= 5.58824496236153;
	transswitch0009r_pd[17] += v[3];
	v[3] = transswitch0009r_pd[17] * x[56];
	v[2] = -v[3];
	t1 = v[2] + x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[41] * x[41];
	transswitch0009r_pd[18] = x[41] + x[41];
	v[1] = x[50] * x[50];
	transswitch0009r_pd[19] = x[50] + x[50];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[20] = 1.1550874808901 * v[2];
	v[2] = x[41] * x[42];
	v[1] = x[50] * x[51];
	v[0] = v[2] + v[1];
	v[0] *= -1.1550874808901;
	transswitch0009r_pd[21] = transswitch0009r_pd[20] + v[0];
	v[1] = x[41] * x[51];
	v[2] = x[42] * x[50];
	v[3] = v[1] - v[2];
	v[3] *= 9.78427042636317;
	transswitch0009r_pd[21] += v[3];
	v[3] = transswitch0009r_pd[21] * x[57];
	v[2] = -v[3];
	t1 = v[2] + x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[42] * x[42];
	transswitch0009r_pd[22] = x[42] + x[42];
	v[1] = x[51] * x[51];
	transswitch0009r_pd[23] = x[51] + x[51];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[24] = 1.1550874808901 * v[2];
	v[2] = x[42] * x[41];
	v[1] = x[51] * x[50];
	v[0] = v[2] + v[1];
	v[0] *= -1.1550874808901;
	transswitch0009r_pd[25] = transswitch0009r_pd[24] + v[0];
	v[1] = x[42] * x[50];
	v[2] = x[41] * x[51];
	v[3] = v[1] - v[2];
	v[3] *= 9.78427042636317;
	transswitch0009r_pd[25] += v[3];
	v[3] = transswitch0009r_pd[25] * x[57];
	v[2] = -v[3];
	t1 = v[2] + x[7];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[43] * x[46];
	v[1] = x[37] * x[52];
	v[2] = v[0] - v[1];
	transswitch0009r_pd[26] = -16. * v[2];
	v[2] = transswitch0009r_pd[26] * x[58];
	t1 = v[2] + x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[37] * x[52];
	v[1] = x[43] * x[46];
	v[2] = v[0] - v[1];
	transswitch0009r_pd[27] = -16. * v[2];
	v[2] = transswitch0009r_pd[27] * x[58];
	t1 = v[2] + x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[39] * x[39];
	transswitch0009r_pd[28] = x[39] + x[39];
	v[1] = x[48] * x[48];
	transswitch0009r_pd[29] = x[48] + x[48];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[30] = 1.94219124871473 * v[2];
	v[2] = x[39] * x[40];
	v[1] = x[48] * x[49];
	v[0] = v[2] + v[1];
	v[0] *= -1.94219124871473;
	transswitch0009r_pd[31] = transswitch0009r_pd[30] + v[0];
	v[1] = x[39] * x[49];
	v[2] = x[40] * x[48];
	v[3] = v[1] - v[2];
	v[3] *= 10.5106820518679;
	transswitch0009r_pd[31] += v[3];
	v[3] = transswitch0009r_pd[31] * x[59];
	v[2] = -v[3];
	t1 = v[2] + x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[40] * x[40];
	transswitch0009r_pd[32] = x[40] + x[40];
	v[1] = x[49] * x[49];
	transswitch0009r_pd[33] = x[49] + x[49];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[34] = 1.94219124871473 * v[2];
	v[2] = x[40] * x[39];
	v[1] = x[49] * x[48];
	v[0] = v[2] + v[1];
	v[0] *= -1.94219124871473;
	transswitch0009r_pd[35] = transswitch0009r_pd[34] + v[0];
	v[1] = x[40] * x[48];
	v[2] = x[39] * x[49];
	v[3] = v[1] - v[2];
	v[3] *= 10.5106820518679;
	transswitch0009r_pd[35] += v[3];
	v[3] = transswitch0009r_pd[35] * x[59];
	v[2] = -v[3];
	t1 = v[2] + x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[36] * x[48];
	v[1] = x[39] * x[45];
	v[2] = v[0] - v[1];
	transswitch0009r_pd[36] = -17.3611111111111 * v[2];
	v[2] = transswitch0009r_pd[36] * x[60];
	t1 = v[2] + x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[39] * x[45];
	v[1] = x[36] * x[48];
	v[2] = v[0] - v[1];
	transswitch0009r_pd[37] = -17.3611111111111 * v[2];
	v[2] = transswitch0009r_pd[37] * x[60];
	t1 = v[2] + x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[44] * x[44];
	transswitch0009r_pd[38] = x[44] + x[44];
	v[1] = x[53] * x[53];
	transswitch0009r_pd[39] = x[53] + x[53];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[40] = 1.36518771331058 * v[2];
	v[2] = x[44] * x[39];
	v[1] = x[53] * x[48];
	v[0] = v[2] + v[1];
	v[0] *= -1.36518771331058;
	transswitch0009r_pd[41] = transswitch0009r_pd[40] + v[0];
	v[1] = x[44] * x[48];
	v[2] = x[39] * x[53];
	v[3] = v[1] - v[2];
	v[3] *= 11.6040955631399;
	transswitch0009r_pd[41] += v[3];
	v[3] = transswitch0009r_pd[41] * x[61];
	v[2] = -v[3];
	t1 = v[2] + x[14];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[39] * x[39];
	transswitch0009r_pd[42] = x[39] + x[39];
	v[1] = x[48] * x[48];
	transswitch0009r_pd[43] = x[48] + x[48];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[44] = 1.36518771331058 * v[2];
	v[2] = x[39] * x[44];
	v[1] = x[48] * x[53];
	v[0] = v[2] + v[1];
	v[0] *= -1.36518771331058;
	transswitch0009r_pd[45] = transswitch0009r_pd[44] + v[0];
	v[1] = x[39] * x[53];
	v[2] = x[44] * x[48];
	v[3] = v[1] - v[2];
	v[3] *= 11.6040955631399;
	transswitch0009r_pd[45] += v[3];
	v[3] = transswitch0009r_pd[45] * x[61];
	v[2] = -v[3];
	t1 = v[2] + x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[43] * x[43];
	transswitch0009r_pd[46] = x[43] + x[43];
	v[1] = x[52] * x[52];
	transswitch0009r_pd[47] = x[52] + x[52];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[48] = 1.18760437929115 * v[2];
	v[2] = x[43] * x[44];
	v[1] = x[52] * x[53];
	v[0] = v[2] + v[1];
	v[0] *= -1.18760437929115;
	transswitch0009r_pd[49] = transswitch0009r_pd[48] + v[0];
	v[1] = x[43] * x[53];
	v[2] = x[44] * x[52];
	v[3] = v[1] - v[2];
	v[3] *= 5.97513453330859;
	transswitch0009r_pd[49] += v[3];
	v[3] = transswitch0009r_pd[49] * x[62];
	v[2] = -v[3];
	t1 = v[2] + x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[44] * x[44];
	transswitch0009r_pd[50] = x[44] + x[44];
	v[1] = x[53] * x[53];
	transswitch0009r_pd[51] = x[53] + x[53];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[52] = 1.18760437929115 * v[2];
	v[2] = x[44] * x[43];
	v[1] = x[53] * x[52];
	v[0] = v[2] + v[1];
	v[0] *= -1.18760437929115;
	transswitch0009r_pd[53] = transswitch0009r_pd[52] + v[0];
	v[1] = x[44] * x[52];
	v[2] = x[43] * x[53];
	v[3] = v[1] - v[2];
	v[3] *= 5.97513453330859;
	transswitch0009r_pd[53] += v[3];
	v[3] = transswitch0009r_pd[53] * x[62];
	v[2] = -v[3];
	t1 = v[2] + x[17];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[38] * x[38];
	transswitch0009r_pd[54] = x[38] + x[38];
	v[1] = x[47] * x[47];
	transswitch0009r_pd[55] = x[47] + x[47];
	v[2] = v[0] + v[1];
	v[2] *= 17.0648464163823;
	v[1] = x[38] * x[41];
	v[0] = x[47] * x[50];
	v[3] = v[1] + v[0];
	v[3] *= -17.0648464163823;
	transswitch0009r_pd[56] = v[2] + v[3];
	v[3] = transswitch0009r_pd[56] * x[54];
	v[2] = -v[3];
	t1 = v[2] + x[18];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[41] * x[41];
	transswitch0009r_pd[57] = x[41] + x[41];
	v[1] = x[50] * x[50];
	transswitch0009r_pd[58] = x[50] + x[50];
	v[2] = v[0] + v[1];
	v[2] *= 17.0648464163823;
	v[1] = x[41] * x[38];
	v[0] = x[50] * x[47];
	v[3] = v[1] + v[0];
	v[3] *= -17.0648464163823;
	transswitch0009r_pd[59] = v[2] + v[3];
	v[3] = transswitch0009r_pd[59] * x[54];
	v[2] = -v[3];
	t1 = v[2] + x[19];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[42] * x[42];
	transswitch0009r_pd[60] = x[42] + x[42];
	v[1] = x[51] * x[51];
	transswitch0009r_pd[61] = x[51] + x[51];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[62] = 13.6234785969084 * v[2];
	v[2] = x[42] * x[43];
	v[1] = x[51] * x[52];
	v[0] = v[2] + v[1];
	v[0] *= -13.6979785969084;
	transswitch0009r_pd[63] = transswitch0009r_pd[62] + v[0];
	v[1] = x[42] * x[52];
	v[2] = x[43] * x[51];
	v[3] = v[1] - v[2];
	v[3] *= -1.61712247324614;
	transswitch0009r_pd[63] += v[3];
	v[3] = transswitch0009r_pd[63] * x[55];
	v[2] = -v[3];
	t1 = v[2] + x[20];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[43] * x[43];
	transswitch0009r_pd[64] = x[43] + x[43];
	v[1] = x[52] * x[52];
	transswitch0009r_pd[65] = x[52] + x[52];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[66] = 13.6234785969084 * v[2];
	v[2] = x[43] * x[42];
	v[1] = x[52] * x[51];
	v[0] = v[2] + v[1];
	v[0] *= -13.6979785969084;
	transswitch0009r_pd[67] = transswitch0009r_pd[66] + v[0];
	v[1] = x[43] * x[51];
	v[2] = x[42] * x[52];
	v[3] = v[1] - v[2];
	v[3] *= -1.61712247324614;
	transswitch0009r_pd[67] += v[3];
	v[3] = transswitch0009r_pd[67] * x[55];
	v[2] = -v[3];
	t1 = v[2] + x[21];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[40] * x[40];
	transswitch0009r_pd[68] = x[40] + x[40];
	v[1] = x[49] * x[49];
	transswitch0009r_pd[69] = x[49] + x[49];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[70] = 5.40924496236153 * v[2];
	v[2] = x[40] * x[41];
	v[1] = x[49] * x[50];
	v[0] = v[2] + v[1];
	v[0] *= -5.58824496236153;
	transswitch0009r_pd[71] = transswitch0009r_pd[70] + v[0];
	v[1] = x[40] * x[50];
	v[2] = x[41] * x[49];
	v[3] = v[1] - v[2];
	v[3] *= -1.28200913842411;
	transswitch0009r_pd[71] += v[3];
	v[3] = transswitch0009r_pd[71] * x[56];
	v[2] = -v[3];
	t1 = v[2] + x[22];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[41] * x[41];
	transswitch0009r_pd[72] = x[41] + x[41];
	v[1] = x[50] * x[50];
	transswitch0009r_pd[73] = x[50] + x[50];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[74] = 5.40924496236153 * v[2];
	v[2] = x[41] * x[40];
	v[1] = x[50] * x[49];
	v[0] = v[2] + v[1];
	v[0] *= -5.58824496236153;
	transswitch0009r_pd[75] = transswitch0009r_pd[74] + v[0];
	v[1] = x[41] * x[49];
	v[2] = x[40] * x[50];
	v[3] = v[1] - v[2];
	v[3] *= -1.28200913842411;
	transswitch0009r_pd[75] += v[3];
	v[3] = transswitch0009r_pd[75] * x[56];
	v[2] = -v[3];
	t1 = v[2] + x[23];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[41] * x[41];
	transswitch0009r_pd[76] = x[41] + x[41];
	v[1] = x[50] * x[50];
	transswitch0009r_pd[77] = x[50] + x[50];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[78] = 9.67977042636317 * v[2];
	v[2] = x[41] * x[42];
	v[1] = x[50] * x[51];
	v[0] = v[2] + v[1];
	v[0] *= -9.78427042636317;
	transswitch0009r_pd[79] = transswitch0009r_pd[78] + v[0];
	v[1] = x[41] * x[51];
	v[2] = x[42] * x[50];
	v[3] = v[1] - v[2];
	v[3] *= -1.1550874808901;
	transswitch0009r_pd[79] += v[3];
	v[3] = transswitch0009r_pd[79] * x[57];
	v[2] = -v[3];
	t1 = v[2] + x[24];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[42] * x[42];
	transswitch0009r_pd[80] = x[42] + x[42];
	v[1] = x[51] * x[51];
	transswitch0009r_pd[81] = x[51] + x[51];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[82] = 9.67977042636317 * v[2];
	v[2] = x[42] * x[41];
	v[1] = x[51] * x[50];
	v[0] = v[2] + v[1];
	v[0] *= -9.78427042636317;
	transswitch0009r_pd[83] = transswitch0009r_pd[82] + v[0];
	v[1] = x[42] * x[50];
	v[2] = x[41] * x[51];
	v[3] = v[1] - v[2];
	v[3] *= -1.1550874808901;
	transswitch0009r_pd[83] += v[3];
	v[3] = transswitch0009r_pd[83] * x[57];
	v[2] = -v[3];
	t1 = v[2] + x[25];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[43] * x[43];
	transswitch0009r_pd[84] = x[43] + x[43];
	v[1] = x[52] * x[52];
	transswitch0009r_pd[85] = x[52] + x[52];
	v[2] = v[0] + v[1];
	v[2] *= 16.;
	v[1] = x[43] * x[37];
	v[0] = x[52] * x[46];
	v[3] = v[1] + v[0];
	v[3] *= -16.;
	transswitch0009r_pd[86] = v[2] + v[3];
	v[3] = transswitch0009r_pd[86] * x[58];
	v[2] = -v[3];
	t1 = v[2] + x[26];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[37] * x[37];
	transswitch0009r_pd[87] = x[37] + x[37];
	v[1] = x[46] * x[46];
	transswitch0009r_pd[88] = x[46] + x[46];
	v[2] = v[0] + v[1];
	v[2] *= 16.;
	v[1] = x[37] * x[43];
	v[0] = x[46] * x[52];
	v[3] = v[1] + v[0];
	v[3] *= -16.;
	transswitch0009r_pd[89] = v[2] + v[3];
	v[3] = transswitch0009r_pd[89] * x[58];
	v[2] = -v[3];
	t1 = v[2] + x[27];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[39] * x[39];
	transswitch0009r_pd[90] = x[39] + x[39];
	v[1] = x[48] * x[48];
	transswitch0009r_pd[91] = x[48] + x[48];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[92] = 10.4316820518679 * v[2];
	v[2] = x[39] * x[40];
	v[1] = x[48] * x[49];
	v[0] = v[2] + v[1];
	v[0] *= -10.5106820518679;
	transswitch0009r_pd[93] = transswitch0009r_pd[92] + v[0];
	v[1] = x[39] * x[49];
	v[2] = x[40] * x[48];
	v[3] = v[1] - v[2];
	v[3] *= -1.94219124871473;
	transswitch0009r_pd[93] += v[3];
	v[3] = transswitch0009r_pd[93] * x[59];
	v[2] = -v[3];
	t1 = v[2] + x[28];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[40] * x[40];
	transswitch0009r_pd[94] = x[40] + x[40];
	v[1] = x[49] * x[49];
	transswitch0009r_pd[95] = x[49] + x[49];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[96] = 10.4316820518679 * v[2];
	v[2] = x[40] * x[39];
	v[1] = x[49] * x[48];
	v[0] = v[2] + v[1];
	v[0] *= -10.5106820518679;
	transswitch0009r_pd[97] = transswitch0009r_pd[96] + v[0];
	v[1] = x[40] * x[48];
	v[2] = x[39] * x[49];
	v[3] = v[1] - v[2];
	v[3] *= -1.94219124871473;
	transswitch0009r_pd[97] += v[3];
	v[3] = transswitch0009r_pd[97] * x[59];
	v[2] = -v[3];
	t1 = v[2] + x[29];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[36] * x[36];
	transswitch0009r_pd[98] = x[36] + x[36];
	v[1] = x[45] * x[45];
	transswitch0009r_pd[99] = x[45] + x[45];
	v[2] = v[0] + v[1];
	v[2] *= 17.3611111111111;
	v[1] = x[36] * x[39];
	v[0] = x[45] * x[48];
	v[3] = v[1] + v[0];
	v[3] *= -17.3611111111111;
	transswitch0009r_pd[100] = v[2] + v[3];
	v[3] = transswitch0009r_pd[100] * x[60];
	v[2] = -v[3];
	t1 = v[2] + x[30];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[39] * x[39];
	transswitch0009r_pd[101] = x[39] + x[39];
	v[1] = x[48] * x[48];
	transswitch0009r_pd[102] = x[48] + x[48];
	v[2] = v[0] + v[1];
	v[2] *= 17.3611111111111;
	v[1] = x[39] * x[36];
	v[0] = x[48] * x[45];
	v[3] = v[1] + v[0];
	v[3] *= -17.3611111111111;
	transswitch0009r_pd[103] = v[2] + v[3];
	v[3] = transswitch0009r_pd[103] * x[60];
	v[2] = -v[3];
	t1 = v[2] + x[31];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[44] * x[44];
	transswitch0009r_pd[104] = x[44] + x[44];
	v[1] = x[53] * x[53];
	transswitch0009r_pd[105] = x[53] + x[53];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[106] = 11.5160955631399 * v[2];
	v[2] = x[44] * x[39];
	v[1] = x[53] * x[48];
	v[0] = v[2] + v[1];
	v[0] *= -11.6040955631399;
	transswitch0009r_pd[107] = transswitch0009r_pd[106] + v[0];
	v[1] = x[44] * x[48];
	v[2] = x[39] * x[53];
	v[3] = v[1] - v[2];
	v[3] *= -1.36518771331058;
	transswitch0009r_pd[107] += v[3];
	v[3] = transswitch0009r_pd[107] * x[61];
	v[2] = -v[3];
	t1 = v[2] + x[32];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[39] * x[39];
	transswitch0009r_pd[108] = x[39] + x[39];
	v[1] = x[48] * x[48];
	transswitch0009r_pd[109] = x[48] + x[48];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[110] = 11.5160955631399 * v[2];
	v[2] = x[39] * x[44];
	v[1] = x[48] * x[53];
	v[0] = v[2] + v[1];
	v[0] *= -11.6040955631399;
	transswitch0009r_pd[111] = transswitch0009r_pd[110] + v[0];
	v[1] = x[39] * x[53];
	v[2] = x[44] * x[48];
	v[3] = v[1] - v[2];
	v[3] *= -1.36518771331058;
	transswitch0009r_pd[111] += v[3];
	v[3] = transswitch0009r_pd[111] * x[61];
	v[2] = -v[3];
	t1 = v[2] + x[33];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[43] * x[43];
	transswitch0009r_pd[112] = x[43] + x[43];
	v[1] = x[52] * x[52];
	transswitch0009r_pd[113] = x[52] + x[52];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[114] = 5.82213453330859 * v[2];
	v[2] = x[43] * x[44];
	v[1] = x[52] * x[53];
	v[0] = v[2] + v[1];
	v[0] *= -5.97513453330859;
	transswitch0009r_pd[115] = transswitch0009r_pd[114] + v[0];
	v[1] = x[43] * x[53];
	v[2] = x[44] * x[52];
	v[3] = v[1] - v[2];
	v[3] *= -1.18760437929115;
	transswitch0009r_pd[115] += v[3];
	v[3] = transswitch0009r_pd[115] * x[62];
	v[2] = -v[3];
	t1 = v[2] + x[34];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[44] * x[44];
	transswitch0009r_pd[116] = x[44] + x[44];
	v[1] = x[53] * x[53];
	transswitch0009r_pd[117] = x[53] + x[53];
	v[2] = v[0] + v[1];
	transswitch0009r_pd[118] = 5.82213453330859 * v[2];
	v[2] = x[44] * x[43];
	v[1] = x[53] * x[52];
	v[0] = v[2] + v[1];
	v[0] *= -5.97513453330859;
	transswitch0009r_pd[119] = transswitch0009r_pd[118] + v[0];
	v[1] = x[44] * x[52];
	v[2] = x[43] * x[53];
	v[3] = v[1] - v[2];
	v[3] *= -1.18760437929115;
	transswitch0009r_pd[119] += v[3];
	v[3] = transswitch0009r_pd[119] * x[62];
	v[2] = -v[3];
	t1 = v[2] + x[35];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[0] * x[0];
	transswitch0009r_pd[120] = x[0] + x[0];
	v[1] = x[18] * x[18];
	transswitch0009r_pd[121] = x[18] + x[18];
	v[2] = v[0] + v[1];
	c[36] = v[2];

  /***  constraint 38  ***/

	v[0] = x[1] * x[1];
	transswitch0009r_pd[122] = x[1] + x[1];
	v[1] = x[19] * x[19];
	transswitch0009r_pd[123] = x[19] + x[19];
	v[2] = v[0] + v[1];
	c[37] = v[2];

  /***  constraint 39  ***/

	v[0] = x[2] * x[2];
	transswitch0009r_pd[124] = x[2] + x[2];
	v[1] = x[20] * x[20];
	transswitch0009r_pd[125] = x[20] + x[20];
	v[2] = v[0] + v[1];
	c[38] = v[2];

  /***  constraint 40  ***/

	v[0] = x[3] * x[3];
	transswitch0009r_pd[126] = x[3] + x[3];
	v[1] = x[21] * x[21];
	transswitch0009r_pd[127] = x[21] + x[21];
	v[2] = v[0] + v[1];
	c[39] = v[2];

  /***  constraint 41  ***/

	v[0] = x[4] * x[4];
	transswitch0009r_pd[128] = x[4] + x[4];
	v[1] = x[22] * x[22];
	transswitch0009r_pd[129] = x[22] + x[22];
	v[2] = v[0] + v[1];
	c[40] = v[2];

  /***  constraint 42  ***/

	v[0] = x[5] * x[5];
	transswitch0009r_pd[130] = x[5] + x[5];
	v[1] = x[23] * x[23];
	transswitch0009r_pd[131] = x[23] + x[23];
	v[2] = v[0] + v[1];
	c[41] = v[2];

  /***  constraint 43  ***/

	v[0] = x[6] * x[6];
	transswitch0009r_pd[132] = x[6] + x[6];
	v[1] = x[24] * x[24];
	transswitch0009r_pd[133] = x[24] + x[24];
	v[2] = v[0] + v[1];
	c[42] = v[2];

  /***  constraint 44  ***/

	v[0] = x[7] * x[7];
	transswitch0009r_pd[134] = x[7] + x[7];
	v[1] = x[25] * x[25];
	transswitch0009r_pd[135] = x[25] + x[25];
	v[2] = v[0] + v[1];
	c[43] = v[2];

  /***  constraint 45  ***/

	v[0] = x[8] * x[8];
	transswitch0009r_pd[136] = x[8] + x[8];
	v[1] = x[26] * x[26];
	transswitch0009r_pd[137] = x[26] + x[26];
	v[2] = v[0] + v[1];
	c[44] = v[2];

  /***  constraint 46  ***/

	v[0] = x[9] * x[9];
	transswitch0009r_pd[138] = x[9] + x[9];
	v[1] = x[27] * x[27];
	transswitch0009r_pd[139] = x[27] + x[27];
	v[2] = v[0] + v[1];
	c[45] = v[2];

  /***  constraint 47  ***/

	v[0] = x[10] * x[10];
	transswitch0009r_pd[140] = x[10] + x[10];
	v[1] = x[28] * x[28];
	transswitch0009r_pd[141] = x[28] + x[28];
	v[2] = v[0] + v[1];
	c[46] = v[2];

  /***  constraint 48  ***/

	v[0] = x[11] * x[11];
	transswitch0009r_pd[142] = x[11] + x[11];
	v[1] = x[29] * x[29];
	transswitch0009r_pd[143] = x[29] + x[29];
	v[2] = v[0] + v[1];
	c[47] = v[2];

  /***  constraint 49  ***/

	v[0] = x[12] * x[12];
	transswitch0009r_pd[144] = x[12] + x[12];
	v[1] = x[30] * x[30];
	transswitch0009r_pd[145] = x[30] + x[30];
	v[2] = v[0] + v[1];
	c[48] = v[2];

  /***  constraint 50  ***/

	v[0] = x[13] * x[13];
	transswitch0009r_pd[146] = x[13] + x[13];
	v[1] = x[31] * x[31];
	transswitch0009r_pd[147] = x[31] + x[31];
	v[2] = v[0] + v[1];
	c[49] = v[2];

  /***  constraint 51  ***/

	v[0] = x[14] * x[14];
	transswitch0009r_pd[148] = x[14] + x[14];
	v[1] = x[32] * x[32];
	transswitch0009r_pd[149] = x[32] + x[32];
	v[2] = v[0] + v[1];
	c[50] = v[2];

  /***  constraint 52  ***/

	v[0] = x[15] * x[15];
	transswitch0009r_pd[150] = x[15] + x[15];
	v[1] = x[33] * x[33];
	transswitch0009r_pd[151] = x[33] + x[33];
	v[2] = v[0] + v[1];
	c[51] = v[2];

  /***  constraint 53  ***/

	v[0] = x[16] * x[16];
	transswitch0009r_pd[152] = x[16] + x[16];
	v[1] = x[34] * x[34];
	transswitch0009r_pd[153] = x[34] + x[34];
	v[2] = v[0] + v[1];
	c[52] = v[2];

  /***  constraint 54  ***/

	v[0] = x[17] * x[17];
	transswitch0009r_pd[154] = x[17] + x[17];
	v[1] = x[35] * x[35];
	transswitch0009r_pd[155] = x[35] + x[35];
	v[2] = v[0] + v[1];
	c[53] = v[2];

  /***  constraint 55  ***/

	v[0] = x[36] * x[36];
	transswitch0009r_pd[156] = x[36] + x[36];
	v[1] = x[45] * x[45];
	transswitch0009r_pd[157] = x[45] + x[45];
	v[2] = v[0] + v[1];
	c[54] = v[2];

  /***  constraint 56  ***/

	v[0] = x[37] * x[37];
	transswitch0009r_pd[158] = x[37] + x[37];
	v[1] = x[46] * x[46];
	transswitch0009r_pd[159] = x[46] + x[46];
	v[2] = v[0] + v[1];
	c[55] = v[2];

  /***  constraint 57  ***/

	v[0] = x[38] * x[38];
	transswitch0009r_pd[160] = x[38] + x[38];
	v[1] = x[47] * x[47];
	transswitch0009r_pd[161] = x[47] + x[47];
	v[2] = v[0] + v[1];
	c[56] = v[2];

  /***  constraint 58  ***/

	v[0] = x[39] * x[39];
	transswitch0009r_pd[162] = x[39] + x[39];
	v[1] = x[48] * x[48];
	transswitch0009r_pd[163] = x[48] + x[48];
	v[2] = v[0] + v[1];
	c[57] = v[2];

  /***  constraint 59  ***/

	v[0] = x[40] * x[40];
	transswitch0009r_pd[164] = x[40] + x[40];
	v[1] = x[49] * x[49];
	transswitch0009r_pd[165] = x[49] + x[49];
	v[2] = v[0] + v[1];
	c[58] = v[2];

  /***  constraint 60  ***/

	v[0] = x[41] * x[41];
	transswitch0009r_pd[166] = x[41] + x[41];
	v[1] = x[50] * x[50];
	transswitch0009r_pd[167] = x[50] + x[50];
	v[2] = v[0] + v[1];
	c[59] = v[2];

  /***  constraint 61  ***/

	v[0] = x[42] * x[42];
	transswitch0009r_pd[168] = x[42] + x[42];
	v[1] = x[51] * x[51];
	transswitch0009r_pd[169] = x[51] + x[51];
	v[2] = v[0] + v[1];
	c[60] = v[2];

  /***  constraint 62  ***/

	v[0] = x[43] * x[43];
	transswitch0009r_pd[170] = x[43] + x[43];
	v[1] = x[52] * x[52];
	transswitch0009r_pd[171] = x[52] + x[52];
	v[2] = v[0] + v[1];
	c[61] = v[2];

  /***  constraint 63  ***/

	v[0] = x[44] * x[44];
	transswitch0009r_pd[172] = x[44] + x[44];
	v[1] = x[53] * x[53];
	transswitch0009r_pd[173] = x[53] + x[53];
	v[2] = v[0] + v[1];
	c[62] = v[2];

  /***  constraint 64  ***/

	v[0] = x[36] * x[36];
	transswitch0009r_pd[174] = x[36] + x[36];
	v[1] = x[45] * x[45];
	transswitch0009r_pd[175] = x[45] + x[45];
	v[2] = v[0] + v[1];
	c[63] = v[2];

  /***  constraint 65  ***/

	v[0] = x[37] * x[37];
	transswitch0009r_pd[176] = x[37] + x[37];
	v[1] = x[46] * x[46];
	transswitch0009r_pd[177] = x[46] + x[46];
	v[2] = v[0] + v[1];
	c[64] = v[2];

  /***  constraint 66  ***/

	v[0] = x[38] * x[38];
	transswitch0009r_pd[178] = x[38] + x[38];
	v[1] = x[47] * x[47];
	transswitch0009r_pd[179] = x[47] + x[47];
	v[2] = v[0] + v[1];
	c[65] = v[2];

  /***  constraint 67  ***/

	v[0] = x[39] * x[39];
	transswitch0009r_pd[180] = x[39] + x[39];
	v[1] = x[48] * x[48];
	transswitch0009r_pd[181] = x[48] + x[48];
	v[2] = v[0] + v[1];
	c[66] = v[2];

  /***  constraint 68  ***/

	v[0] = x[40] * x[40];
	transswitch0009r_pd[182] = x[40] + x[40];
	v[1] = x[49] * x[49];
	transswitch0009r_pd[183] = x[49] + x[49];
	v[2] = v[0] + v[1];
	c[67] = v[2];

  /***  constraint 69  ***/

	v[0] = x[41] * x[41];
	transswitch0009r_pd[184] = x[41] + x[41];
	v[1] = x[50] * x[50];
	transswitch0009r_pd[185] = x[50] + x[50];
	v[2] = v[0] + v[1];
	c[68] = v[2];

  /***  constraint 70  ***/

	v[0] = x[42] * x[42];
	transswitch0009r_pd[186] = x[42] + x[42];
	v[1] = x[51] * x[51];
	transswitch0009r_pd[187] = x[51] + x[51];
	v[2] = v[0] + v[1];
	c[69] = v[2];

  /***  constraint 71  ***/

	v[0] = x[43] * x[43];
	transswitch0009r_pd[188] = x[43] + x[43];
	v[1] = x[52] * x[52];
	transswitch0009r_pd[189] = x[52] + x[52];
	v[2] = v[0] + v[1];
	c[70] = v[2];

  /***  constraint 72  ***/

	v[0] = x[44] * x[44];
	transswitch0009r_pd[190] = x[44] + x[44];
	v[1] = x[53] * x[53];
	transswitch0009r_pd[191] = x[53] + x[53];
	v[2] = v[0] + v[1];
	c[71] = v[2];

  /***  constraint 73  ***/

	t1 = x[63];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[64];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[65];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[63];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[64];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[65];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[66];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[67];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[68];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[66];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[67];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[68];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[45];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[12];
	t1 += -x[63];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[9];
	t1 += -x[64];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[0];
	t1 += -x[65];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[30];
	t1 += -x[66];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[27];
	t1 += -x[67];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[18];
	t1 += -x[68];
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

	J[289] = transswitch0009r_pd[0];
	dv[0] = -x[54]*17.0648464163823;
	dv[1] = -dv[0];
	J[211] = dv[1]*x[41];
	J[150] = dv[1]*x[47];
	J[241] = dv[0]*x[38];
	J[120] = dv[0]*x[50];
	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[290] = transswitch0009r_pd[1];
	dv[0] = -x[54]*17.0648464163823;
	dv[1] = -dv[0];
	J[242] = dv[1]*x[38];
	J[121] = dv[1]*x[50];
	J[212] = dv[0]*x[41];
	J[151] = dv[0]*x[47];
	J[3] = 1.;

   /*** derivatives for constraint 3 ***/

	J[293] = -transswitch0009r_pd[5];
	dv[0] = -x[55];
	dv[0] *= 13.6979785969084;
	dv[1] = -dv[0];
	J[255] = dv[1]*x[43];
	J[174] = dv[1]*x[51];
	J[265] = dv[0]*x[42];
	J[164] = dv[0]*x[52];
	dv[2] = -x[55];
	dv[2] = -dv[2]*1.61712247324614;
	dv[3] = dv[2];
	J[265] += dv[3]*x[51];
	J[255] += dv[3]*x[52];
	J[174] += dv[2]*x[42];
	J[164] += dv[2]*x[43];
	dv[4] = -x[55]*1.61712247324614;
	dv[5] = dv[4];
	J[255] += dv[5]*transswitch0009r_pd[3];
	J[164] += dv[4]*transswitch0009r_pd[2];
	J[6] = 1.;

   /*** derivatives for constraint 4 ***/

	J[294] = -transswitch0009r_pd[9];
	dv[0] = -x[55];
	dv[0] *= 13.6979785969084;
	dv[1] = -dv[0];
	J[266] = dv[1]*x[42];
	J[165] = dv[1]*x[52];
	J[256] = dv[0]*x[43];
	J[175] = dv[0]*x[51];
	dv[2] = -x[55];
	dv[2] = -dv[2]*1.61712247324614;
	dv[3] = dv[2];
	J[256] += dv[3]*x[52];
	J[266] += dv[3]*x[51];
	J[165] += dv[2]*x[43];
	J[175] += dv[2]*x[42];
	dv[4] = -x[55]*1.61712247324614;
	dv[5] = dv[4];
	J[266] += dv[5]*transswitch0009r_pd[7];
	J[175] += dv[4]*transswitch0009r_pd[6];
	J[9] = 1.;

   /*** derivatives for constraint 5 ***/

	J[297] = -transswitch0009r_pd[13];
	dv[0] = -x[56];
	dv[0] *= 5.58824496236153;
	dv[1] = -dv[0];
	J[231] = dv[1]*x[41];
	J[152] = dv[1]*x[49];
	J[243] = dv[0]*x[40];
	J[140] = dv[0]*x[50];
	dv[2] = -x[56];
	dv[2] = -dv[2]*1.28200913842411;
	dv[3] = dv[2];
	J[243] += dv[3]*x[49];
	J[231] += dv[3]*x[50];
	J[152] += dv[2]*x[40];
	J[140] += dv[2]*x[41];
	dv[4] = -x[56]*1.28200913842411;
	dv[5] = dv[4];
	J[231] += dv[5]*transswitch0009r_pd[11];
	J[140] += dv[4]*transswitch0009r_pd[10];
	J[12] = 1.;

   /*** derivatives for constraint 6 ***/

	J[298] = -transswitch0009r_pd[17];
	dv[0] = -x[56];
	dv[0] *= 5.58824496236153;
	dv[1] = -dv[0];
	J[244] = dv[1]*x[40];
	J[141] = dv[1]*x[50];
	J[232] = dv[0]*x[41];
	J[153] = dv[0]*x[49];
	dv[2] = -x[56];
	dv[2] = -dv[2]*1.28200913842411;
	dv[3] = dv[2];
	J[232] += dv[3]*x[50];
	J[244] += dv[3]*x[49];
	J[141] += dv[2]*x[41];
	J[153] += dv[2]*x[40];
	dv[4] = -x[56]*1.28200913842411;
	dv[5] = dv[4];
	J[244] += dv[5]*transswitch0009r_pd[15];
	J[153] += dv[4]*transswitch0009r_pd[14];
	J[15] = 1.;

   /*** derivatives for constraint 7 ***/

	J[301] = -transswitch0009r_pd[21];
	dv[0] = -x[57];
	dv[0] *= 9.78427042636317;
	dv[1] = -dv[0];
	J[245] = dv[1]*x[42];
	J[166] = dv[1]*x[50];
	J[257] = dv[0]*x[41];
	J[154] = dv[0]*x[51];
	dv[2] = -x[57];
	dv[2] = -dv[2]*1.1550874808901;
	dv[3] = dv[2];
	J[257] += dv[3]*x[50];
	J[245] += dv[3]*x[51];
	J[166] += dv[2]*x[41];
	J[154] += dv[2]*x[42];
	dv[4] = -x[57]*1.1550874808901;
	dv[5] = dv[4];
	J[245] += dv[5]*transswitch0009r_pd[19];
	J[154] += dv[4]*transswitch0009r_pd[18];
	J[18] = 1.;

   /*** derivatives for constraint 8 ***/

	J[302] = -transswitch0009r_pd[25];
	dv[0] = -x[57];
	dv[0] *= 9.78427042636317;
	dv[1] = -dv[0];
	J[258] = dv[1]*x[41];
	J[155] = dv[1]*x[51];
	J[246] = dv[0]*x[42];
	J[167] = dv[0]*x[50];
	dv[2] = -x[57];
	dv[2] = -dv[2]*1.1550874808901;
	dv[3] = dv[2];
	J[246] += dv[3]*x[51];
	J[258] += dv[3]*x[50];
	J[155] += dv[2]*x[42];
	J[167] += dv[2]*x[41];
	dv[4] = -x[57]*1.1550874808901;
	dv[5] = dv[4];
	J[258] += dv[5]*transswitch0009r_pd[23];
	J[167] += dv[4]*transswitch0009r_pd[22];
	J[21] = 1.;

   /*** derivatives for constraint 9 ***/

	J[305] = transswitch0009r_pd[26];
	dv[0] = -x[58]*16.;
	dv[1] = -dv[0];
	J[267] = dv[1]*x[37];
	J[114] = dv[1]*x[52];
	J[205] = dv[0]*x[43];
	J[176] = dv[0]*x[46];
	J[24] = 1.;

   /*** derivatives for constraint 10 ***/

	J[306] = transswitch0009r_pd[27];
	dv[0] = -x[58]*16.;
	dv[1] = -dv[0];
	J[206] = dv[1]*x[43];
	J[177] = dv[1]*x[46];
	J[268] = dv[0]*x[37];
	J[115] = dv[0]*x[52];
	J[27] = 1.;

   /*** derivatives for constraint 11 ***/

	J[309] = -transswitch0009r_pd[31];
	dv[0] = -x[59];
	dv[0] *= 10.5106820518679;
	dv[1] = -dv[0];
	J[217] = dv[1]*x[40];
	J[142] = dv[1]*x[48];
	J[233] = dv[0]*x[39];
	J[126] = dv[0]*x[49];
	dv[2] = -x[59];
	dv[2] = -dv[2]*1.94219124871473;
	dv[3] = dv[2];
	J[233] += dv[3]*x[48];
	J[217] += dv[3]*x[49];
	J[142] += dv[2]*x[39];
	J[126] += dv[2]*x[40];
	dv[4] = -x[59]*1.94219124871473;
	dv[5] = dv[4];
	J[217] += dv[5]*transswitch0009r_pd[29];
	J[126] += dv[4]*transswitch0009r_pd[28];
	J[30] = 1.;

   /*** derivatives for constraint 12 ***/

	J[310] = -transswitch0009r_pd[35];
	dv[0] = -x[59];
	dv[0] *= 10.5106820518679;
	dv[1] = -dv[0];
	J[234] = dv[1]*x[39];
	J[127] = dv[1]*x[49];
	J[218] = dv[0]*x[40];
	J[143] = dv[0]*x[48];
	dv[2] = -x[59];
	dv[2] = -dv[2]*1.94219124871473;
	dv[3] = dv[2];
	J[218] += dv[3]*x[49];
	J[234] += dv[3]*x[48];
	J[127] += dv[2]*x[40];
	J[143] += dv[2]*x[39];
	dv[4] = -x[59]*1.94219124871473;
	dv[5] = dv[4];
	J[234] += dv[5]*transswitch0009r_pd[33];
	J[143] += dv[4]*transswitch0009r_pd[32];
	J[33] = 1.;

   /*** derivatives for constraint 13 ***/

	J[313] = transswitch0009r_pd[36];
	dv[0] = -x[60]*17.3611111111111;
	dv[1] = -dv[0];
	J[198] = dv[1]*x[39];
	J[128] = dv[1]*x[45];
	J[219] = dv[0]*x[36];
	J[108] = dv[0]*x[48];
	J[36] = 1.;

   /*** derivatives for constraint 14 ***/

	J[314] = transswitch0009r_pd[37];
	dv[0] = -x[60]*17.3611111111111;
	dv[1] = -dv[0];
	J[220] = dv[1]*x[36];
	J[109] = dv[1]*x[48];
	J[199] = dv[0]*x[39];
	J[129] = dv[0]*x[45];
	J[39] = 1.;

   /*** derivatives for constraint 15 ***/

	J[317] = -transswitch0009r_pd[41];
	dv[0] = -x[61];
	dv[0] *= 11.6040955631399;
	dv[1] = -dv[0];
	J[279] = dv[1]*x[39];
	J[130] = dv[1]*x[53];
	J[221] = dv[0]*x[44];
	J[188] = dv[0]*x[48];
	dv[2] = -x[61];
	dv[2] = -dv[2]*1.36518771331058;
	dv[3] = dv[2];
	J[221] += dv[3]*x[53];
	J[279] += dv[3]*x[48];
	J[130] += dv[2]*x[44];
	J[188] += dv[2]*x[39];
	dv[4] = -x[61]*1.36518771331058;
	dv[5] = dv[4];
	J[279] += dv[5]*transswitch0009r_pd[39];
	J[188] += dv[4]*transswitch0009r_pd[38];
	J[42] = 1.;

   /*** derivatives for constraint 16 ***/

	J[318] = -transswitch0009r_pd[45];
	dv[0] = -x[61];
	dv[0] *= 11.6040955631399;
	dv[1] = -dv[0];
	J[222] = dv[1]*x[44];
	J[189] = dv[1]*x[48];
	J[280] = dv[0]*x[39];
	J[131] = dv[0]*x[53];
	dv[2] = -x[61];
	dv[2] = -dv[2]*1.36518771331058;
	dv[3] = dv[2];
	J[280] += dv[3]*x[48];
	J[222] += dv[3]*x[53];
	J[189] += dv[2]*x[39];
	J[131] += dv[2]*x[44];
	dv[4] = -x[61]*1.36518771331058;
	dv[5] = dv[4];
	J[222] += dv[5]*transswitch0009r_pd[43];
	J[131] += dv[4]*transswitch0009r_pd[42];
	J[45] = 1.;

   /*** derivatives for constraint 17 ***/

	J[321] = -transswitch0009r_pd[49];
	dv[0] = -x[62];
	dv[0] *= 5.97513453330859;
	dv[1] = -dv[0];
	J[269] = dv[1]*x[44];
	J[190] = dv[1]*x[52];
	J[281] = dv[0]*x[43];
	J[178] = dv[0]*x[53];
	dv[2] = -x[62];
	dv[2] = -dv[2]*1.18760437929115;
	dv[3] = dv[2];
	J[281] += dv[3]*x[52];
	J[269] += dv[3]*x[53];
	J[190] += dv[2]*x[43];
	J[178] += dv[2]*x[44];
	dv[4] = -x[62]*1.18760437929115;
	dv[5] = dv[4];
	J[269] += dv[5]*transswitch0009r_pd[47];
	J[178] += dv[4]*transswitch0009r_pd[46];
	J[48] = 1.;

   /*** derivatives for constraint 18 ***/

	J[322] = -transswitch0009r_pd[53];
	dv[0] = -x[62];
	dv[0] *= 5.97513453330859;
	dv[1] = -dv[0];
	J[282] = dv[1]*x[43];
	J[179] = dv[1]*x[53];
	J[270] = dv[0]*x[44];
	J[191] = dv[0]*x[52];
	dv[2] = -x[62];
	dv[2] = -dv[2]*1.18760437929115;
	dv[3] = dv[2];
	J[270] += dv[3]*x[53];
	J[282] += dv[3]*x[52];
	J[179] += dv[2]*x[44];
	J[191] += dv[2]*x[43];
	dv[4] = -x[62]*1.18760437929115;
	dv[5] = dv[4];
	J[282] += dv[5]*transswitch0009r_pd[51];
	J[191] += dv[4]*transswitch0009r_pd[50];
	J[51] = 1.;

   /*** derivatives for constraint 19 ***/

	J[291] = -transswitch0009r_pd[56];
	dv[0] = -x[54];
	dv[0] = -dv[0]*17.0648464163823;
	dv[1] = dv[0];
	J[247] = dv[1]*x[47];
	J[213] = dv[1]*x[50];
	J[156] = dv[0]*x[38];
	J[122] = dv[0]*x[41];
	dv[2] = -x[54]*17.0648464163823;
	dv[3] = dv[2];
	J[213] += dv[3]*transswitch0009r_pd[55];
	J[122] += dv[2]*transswitch0009r_pd[54];
	J[54] = 1.;

   /*** derivatives for constraint 20 ***/

	J[292] = -transswitch0009r_pd[59];
	dv[0] = -x[54];
	dv[0] = -dv[0]*17.0648464163823;
	dv[1] = dv[0];
	J[214] = dv[1]*x[50];
	J[248] = dv[1]*x[47];
	J[123] = dv[0]*x[41];
	J[157] = dv[0]*x[38];
	dv[2] = -x[54]*17.0648464163823;
	dv[3] = dv[2];
	J[248] += dv[3]*transswitch0009r_pd[58];
	J[157] += dv[2]*transswitch0009r_pd[57];
	J[57] = 1.;

   /*** derivatives for constraint 21 ***/

	J[295] = -transswitch0009r_pd[63];
	dv[0] = -x[55];
	dv[0] = -dv[0]*1.61712247324614;
	dv[1] = -dv[0];
	J[259] = dv[1]*x[43];
	J[180] = dv[1]*x[51];
	J[271] = dv[0]*x[42];
	J[168] = dv[0]*x[52];
	dv[2] = -x[55];
	dv[2] = -dv[2]*13.6979785969084;
	dv[3] = dv[2];
	J[271] += dv[3]*x[51];
	J[259] += dv[3]*x[52];
	J[180] += dv[2]*x[42];
	J[168] += dv[2]*x[43];
	dv[4] = -x[55]*13.6234785969084;
	dv[5] = dv[4];
	J[259] += dv[5]*transswitch0009r_pd[61];
	J[168] += dv[4]*transswitch0009r_pd[60];
	J[60] = 1.;

   /*** derivatives for constraint 22 ***/

	J[296] = -transswitch0009r_pd[67];
	dv[0] = -x[55];
	dv[0] = -dv[0]*1.61712247324614;
	dv[1] = -dv[0];
	J[272] = dv[1]*x[42];
	J[169] = dv[1]*x[52];
	J[260] = dv[0]*x[43];
	J[181] = dv[0]*x[51];
	dv[2] = -x[55];
	dv[2] = -dv[2]*13.6979785969084;
	dv[3] = dv[2];
	J[260] += dv[3]*x[52];
	J[272] += dv[3]*x[51];
	J[169] += dv[2]*x[43];
	J[181] += dv[2]*x[42];
	dv[4] = -x[55]*13.6234785969084;
	dv[5] = dv[4];
	J[272] += dv[5]*transswitch0009r_pd[65];
	J[181] += dv[4]*transswitch0009r_pd[64];
	J[63] = 1.;

   /*** derivatives for constraint 23 ***/

	J[299] = -transswitch0009r_pd[71];
	dv[0] = -x[56];
	dv[0] = -dv[0]*1.28200913842411;
	dv[1] = -dv[0];
	J[235] = dv[1]*x[41];
	J[158] = dv[1]*x[49];
	J[249] = dv[0]*x[40];
	J[144] = dv[0]*x[50];
	dv[2] = -x[56];
	dv[2] = -dv[2]*5.58824496236153;
	dv[3] = dv[2];
	J[249] += dv[3]*x[49];
	J[235] += dv[3]*x[50];
	J[158] += dv[2]*x[40];
	J[144] += dv[2]*x[41];
	dv[4] = -x[56]*5.40924496236153;
	dv[5] = dv[4];
	J[235] += dv[5]*transswitch0009r_pd[69];
	J[144] += dv[4]*transswitch0009r_pd[68];
	J[66] = 1.;

   /*** derivatives for constraint 24 ***/

	J[300] = -transswitch0009r_pd[75];
	dv[0] = -x[56];
	dv[0] = -dv[0]*1.28200913842411;
	dv[1] = -dv[0];
	J[250] = dv[1]*x[40];
	J[145] = dv[1]*x[50];
	J[236] = dv[0]*x[41];
	J[159] = dv[0]*x[49];
	dv[2] = -x[56];
	dv[2] = -dv[2]*5.58824496236153;
	dv[3] = dv[2];
	J[236] += dv[3]*x[50];
	J[250] += dv[3]*x[49];
	J[145] += dv[2]*x[41];
	J[159] += dv[2]*x[40];
	dv[4] = -x[56]*5.40924496236153;
	dv[5] = dv[4];
	J[250] += dv[5]*transswitch0009r_pd[73];
	J[159] += dv[4]*transswitch0009r_pd[72];
	J[69] = 1.;

   /*** derivatives for constraint 25 ***/

	J[303] = -transswitch0009r_pd[79];
	dv[0] = -x[57];
	dv[0] = -dv[0]*1.1550874808901;
	dv[1] = -dv[0];
	J[251] = dv[1]*x[42];
	J[170] = dv[1]*x[50];
	J[261] = dv[0]*x[41];
	J[160] = dv[0]*x[51];
	dv[2] = -x[57];
	dv[2] = -dv[2]*9.78427042636317;
	dv[3] = dv[2];
	J[261] += dv[3]*x[50];
	J[251] += dv[3]*x[51];
	J[170] += dv[2]*x[41];
	J[160] += dv[2]*x[42];
	dv[4] = -x[57]*9.67977042636317;
	dv[5] = dv[4];
	J[251] += dv[5]*transswitch0009r_pd[77];
	J[160] += dv[4]*transswitch0009r_pd[76];
	J[72] = 1.;

   /*** derivatives for constraint 26 ***/

	J[304] = -transswitch0009r_pd[83];
	dv[0] = -x[57];
	dv[0] = -dv[0]*1.1550874808901;
	dv[1] = -dv[0];
	J[262] = dv[1]*x[41];
	J[161] = dv[1]*x[51];
	J[252] = dv[0]*x[42];
	J[171] = dv[0]*x[50];
	dv[2] = -x[57];
	dv[2] = -dv[2]*9.78427042636317;
	dv[3] = dv[2];
	J[252] += dv[3]*x[51];
	J[262] += dv[3]*x[50];
	J[161] += dv[2]*x[42];
	J[171] += dv[2]*x[41];
	dv[4] = -x[57]*9.67977042636317;
	dv[5] = dv[4];
	J[262] += dv[5]*transswitch0009r_pd[81];
	J[171] += dv[4]*transswitch0009r_pd[80];
	J[75] = 1.;

   /*** derivatives for constraint 27 ***/

	J[307] = -transswitch0009r_pd[86];
	dv[0] = -x[58];
	dv[0] = -dv[0]*16.;
	dv[1] = dv[0];
	J[207] = dv[1]*x[52];
	J[273] = dv[1]*x[46];
	J[116] = dv[0]*x[43];
	J[182] = dv[0]*x[37];
	dv[2] = -x[58]*16.;
	dv[3] = dv[2];
	J[273] += dv[3]*transswitch0009r_pd[85];
	J[182] += dv[2]*transswitch0009r_pd[84];
	J[78] = 1.;

   /*** derivatives for constraint 28 ***/

	J[308] = -transswitch0009r_pd[89];
	dv[0] = -x[58];
	dv[0] = -dv[0]*16.;
	dv[1] = dv[0];
	J[274] = dv[1]*x[46];
	J[208] = dv[1]*x[52];
	J[183] = dv[0]*x[37];
	J[117] = dv[0]*x[43];
	dv[2] = -x[58]*16.;
	dv[3] = dv[2];
	J[208] += dv[3]*transswitch0009r_pd[88];
	J[117] += dv[2]*transswitch0009r_pd[87];
	J[81] = 1.;

   /*** derivatives for constraint 29 ***/

	J[311] = -transswitch0009r_pd[93];
	dv[0] = -x[59];
	dv[0] = -dv[0]*1.94219124871473;
	dv[1] = -dv[0];
	J[223] = dv[1]*x[40];
	J[146] = dv[1]*x[48];
	J[237] = dv[0]*x[39];
	J[132] = dv[0]*x[49];
	dv[2] = -x[59];
	dv[2] = -dv[2]*10.5106820518679;
	dv[3] = dv[2];
	J[237] += dv[3]*x[48];
	J[223] += dv[3]*x[49];
	J[146] += dv[2]*x[39];
	J[132] += dv[2]*x[40];
	dv[4] = -x[59]*10.4316820518679;
	dv[5] = dv[4];
	J[223] += dv[5]*transswitch0009r_pd[91];
	J[132] += dv[4]*transswitch0009r_pd[90];
	J[84] = 1.;

   /*** derivatives for constraint 30 ***/

	J[312] = -transswitch0009r_pd[97];
	dv[0] = -x[59];
	dv[0] = -dv[0]*1.94219124871473;
	dv[1] = -dv[0];
	J[238] = dv[1]*x[39];
	J[133] = dv[1]*x[49];
	J[224] = dv[0]*x[40];
	J[147] = dv[0]*x[48];
	dv[2] = -x[59];
	dv[2] = -dv[2]*10.5106820518679;
	dv[3] = dv[2];
	J[224] += dv[3]*x[49];
	J[238] += dv[3]*x[48];
	J[133] += dv[2]*x[40];
	J[147] += dv[2]*x[39];
	dv[4] = -x[59]*10.4316820518679;
	dv[5] = dv[4];
	J[238] += dv[5]*transswitch0009r_pd[95];
	J[147] += dv[4]*transswitch0009r_pd[94];
	J[87] = 1.;

   /*** derivatives for constraint 31 ***/

	J[315] = -transswitch0009r_pd[100];
	dv[0] = -x[60];
	dv[0] = -dv[0]*17.3611111111111;
	dv[1] = dv[0];
	J[225] = dv[1]*x[45];
	J[200] = dv[1]*x[48];
	J[134] = dv[0]*x[36];
	J[110] = dv[0]*x[39];
	dv[2] = -x[60]*17.3611111111111;
	dv[3] = dv[2];
	J[200] += dv[3]*transswitch0009r_pd[99];
	J[110] += dv[2]*transswitch0009r_pd[98];
	J[90] = 1.;

   /*** derivatives for constraint 32 ***/

	J[316] = -transswitch0009r_pd[103];
	dv[0] = -x[60];
	dv[0] = -dv[0]*17.3611111111111;
	dv[1] = dv[0];
	J[201] = dv[1]*x[48];
	J[226] = dv[1]*x[45];
	J[111] = dv[0]*x[39];
	J[135] = dv[0]*x[36];
	dv[2] = -x[60]*17.3611111111111;
	dv[3] = dv[2];
	J[226] += dv[3]*transswitch0009r_pd[102];
	J[135] += dv[2]*transswitch0009r_pd[101];
	J[93] = 1.;

   /*** derivatives for constraint 33 ***/

	J[319] = -transswitch0009r_pd[107];
	dv[0] = -x[61];
	dv[0] = -dv[0]*1.36518771331058;
	dv[1] = -dv[0];
	J[283] = dv[1]*x[39];
	J[136] = dv[1]*x[53];
	J[227] = dv[0]*x[44];
	J[192] = dv[0]*x[48];
	dv[2] = -x[61];
	dv[2] = -dv[2]*11.6040955631399;
	dv[3] = dv[2];
	J[227] += dv[3]*x[53];
	J[283] += dv[3]*x[48];
	J[136] += dv[2]*x[44];
	J[192] += dv[2]*x[39];
	dv[4] = -x[61]*11.5160955631399;
	dv[5] = dv[4];
	J[283] += dv[5]*transswitch0009r_pd[105];
	J[192] += dv[4]*transswitch0009r_pd[104];
	J[96] = 1.;

   /*** derivatives for constraint 34 ***/

	J[320] = -transswitch0009r_pd[111];
	dv[0] = -x[61];
	dv[0] = -dv[0]*1.36518771331058;
	dv[1] = -dv[0];
	J[228] = dv[1]*x[44];
	J[193] = dv[1]*x[48];
	J[284] = dv[0]*x[39];
	J[137] = dv[0]*x[53];
	dv[2] = -x[61];
	dv[2] = -dv[2]*11.6040955631399;
	dv[3] = dv[2];
	J[284] += dv[3]*x[48];
	J[228] += dv[3]*x[53];
	J[193] += dv[2]*x[39];
	J[137] += dv[2]*x[44];
	dv[4] = -x[61]*11.5160955631399;
	dv[5] = dv[4];
	J[228] += dv[5]*transswitch0009r_pd[109];
	J[137] += dv[4]*transswitch0009r_pd[108];
	J[99] = 1.;

   /*** derivatives for constraint 35 ***/

	J[323] = -transswitch0009r_pd[115];
	dv[0] = -x[62];
	dv[0] = -dv[0]*1.18760437929115;
	dv[1] = -dv[0];
	J[275] = dv[1]*x[44];
	J[194] = dv[1]*x[52];
	J[285] = dv[0]*x[43];
	J[184] = dv[0]*x[53];
	dv[2] = -x[62];
	dv[2] = -dv[2]*5.97513453330859;
	dv[3] = dv[2];
	J[285] += dv[3]*x[52];
	J[275] += dv[3]*x[53];
	J[194] += dv[2]*x[43];
	J[184] += dv[2]*x[44];
	dv[4] = -x[62]*5.82213453330859;
	dv[5] = dv[4];
	J[275] += dv[5]*transswitch0009r_pd[113];
	J[184] += dv[4]*transswitch0009r_pd[112];
	J[102] = 1.;

   /*** derivatives for constraint 36 ***/

	J[324] = -transswitch0009r_pd[119];
	dv[0] = -x[62];
	dv[0] = -dv[0]*1.18760437929115;
	dv[1] = -dv[0];
	J[286] = dv[1]*x[43];
	J[185] = dv[1]*x[53];
	J[276] = dv[0]*x[44];
	J[195] = dv[0]*x[52];
	dv[2] = -x[62];
	dv[2] = -dv[2]*5.97513453330859;
	dv[3] = dv[2];
	J[276] += dv[3]*x[53];
	J[286] += dv[3]*x[52];
	J[185] += dv[2]*x[44];
	J[195] += dv[2]*x[43];
	dv[4] = -x[62]*5.82213453330859;
	dv[5] = dv[4];
	J[286] += dv[5]*transswitch0009r_pd[117];
	J[195] += dv[4]*transswitch0009r_pd[116];
	J[105] = 1.;

   /*** derivatives for constraint 37 ***/

	J[55] = transswitch0009r_pd[121];
	J[1] = transswitch0009r_pd[120];

   /*** derivatives for constraint 38 ***/

	J[58] = transswitch0009r_pd[123];
	J[4] = transswitch0009r_pd[122];

   /*** derivatives for constraint 39 ***/

	J[61] = transswitch0009r_pd[125];
	J[7] = transswitch0009r_pd[124];

   /*** derivatives for constraint 40 ***/

	J[64] = transswitch0009r_pd[127];
	J[10] = transswitch0009r_pd[126];

   /*** derivatives for constraint 41 ***/

	J[67] = transswitch0009r_pd[129];
	J[13] = transswitch0009r_pd[128];

   /*** derivatives for constraint 42 ***/

	J[70] = transswitch0009r_pd[131];
	J[16] = transswitch0009r_pd[130];

   /*** derivatives for constraint 43 ***/

	J[73] = transswitch0009r_pd[133];
	J[19] = transswitch0009r_pd[132];

   /*** derivatives for constraint 44 ***/

	J[76] = transswitch0009r_pd[135];
	J[22] = transswitch0009r_pd[134];

   /*** derivatives for constraint 45 ***/

	J[79] = transswitch0009r_pd[137];
	J[25] = transswitch0009r_pd[136];

   /*** derivatives for constraint 46 ***/

	J[82] = transswitch0009r_pd[139];
	J[28] = transswitch0009r_pd[138];

   /*** derivatives for constraint 47 ***/

	J[85] = transswitch0009r_pd[141];
	J[31] = transswitch0009r_pd[140];

   /*** derivatives for constraint 48 ***/

	J[88] = transswitch0009r_pd[143];
	J[34] = transswitch0009r_pd[142];

   /*** derivatives for constraint 49 ***/

	J[91] = transswitch0009r_pd[145];
	J[37] = transswitch0009r_pd[144];

   /*** derivatives for constraint 50 ***/

	J[94] = transswitch0009r_pd[147];
	J[40] = transswitch0009r_pd[146];

   /*** derivatives for constraint 51 ***/

	J[97] = transswitch0009r_pd[149];
	J[43] = transswitch0009r_pd[148];

   /*** derivatives for constraint 52 ***/

	J[100] = transswitch0009r_pd[151];
	J[46] = transswitch0009r_pd[150];

   /*** derivatives for constraint 53 ***/

	J[103] = transswitch0009r_pd[153];
	J[49] = transswitch0009r_pd[152];

   /*** derivatives for constraint 54 ***/

	J[106] = transswitch0009r_pd[155];
	J[52] = transswitch0009r_pd[154];

   /*** derivatives for constraint 55 ***/

	J[202] = transswitch0009r_pd[157];
	J[112] = transswitch0009r_pd[156];

   /*** derivatives for constraint 56 ***/

	J[209] = transswitch0009r_pd[159];
	J[118] = transswitch0009r_pd[158];

   /*** derivatives for constraint 57 ***/

	J[215] = transswitch0009r_pd[161];
	J[124] = transswitch0009r_pd[160];

   /*** derivatives for constraint 58 ***/

	J[229] = transswitch0009r_pd[163];
	J[138] = transswitch0009r_pd[162];

   /*** derivatives for constraint 59 ***/

	J[239] = transswitch0009r_pd[165];
	J[148] = transswitch0009r_pd[164];

   /*** derivatives for constraint 60 ***/

	J[253] = transswitch0009r_pd[167];
	J[162] = transswitch0009r_pd[166];

   /*** derivatives for constraint 61 ***/

	J[263] = transswitch0009r_pd[169];
	J[172] = transswitch0009r_pd[168];

   /*** derivatives for constraint 62 ***/

	J[277] = transswitch0009r_pd[171];
	J[186] = transswitch0009r_pd[170];

   /*** derivatives for constraint 63 ***/

	J[287] = transswitch0009r_pd[173];
	J[196] = transswitch0009r_pd[172];

   /*** derivatives for constraint 64 ***/

	J[203] = transswitch0009r_pd[175];
	J[113] = transswitch0009r_pd[174];

   /*** derivatives for constraint 65 ***/

	J[210] = transswitch0009r_pd[177];
	J[119] = transswitch0009r_pd[176];

   /*** derivatives for constraint 66 ***/

	J[216] = transswitch0009r_pd[179];
	J[125] = transswitch0009r_pd[178];

   /*** derivatives for constraint 67 ***/

	J[230] = transswitch0009r_pd[181];
	J[139] = transswitch0009r_pd[180];

   /*** derivatives for constraint 68 ***/

	J[240] = transswitch0009r_pd[183];
	J[149] = transswitch0009r_pd[182];

   /*** derivatives for constraint 69 ***/

	J[254] = transswitch0009r_pd[185];
	J[163] = transswitch0009r_pd[184];

   /*** derivatives for constraint 70 ***/

	J[264] = transswitch0009r_pd[187];
	J[173] = transswitch0009r_pd[186];

   /*** derivatives for constraint 71 ***/

	J[278] = transswitch0009r_pd[189];
	J[187] = transswitch0009r_pd[188];

   /*** derivatives for constraint 72 ***/

	J[288] = transswitch0009r_pd[191];
	J[197] = transswitch0009r_pd[190];

   /*** derivatives for constraint 73 ***/

	J[325] = 1.;

   /*** derivatives for constraint 74 ***/

	J[328] = 1.;

   /*** derivatives for constraint 75 ***/

	J[331] = 1.;

   /*** derivatives for constraint 76 ***/

	J[326] = 1.;

   /*** derivatives for constraint 77 ***/

	J[329] = 1.;

   /*** derivatives for constraint 78 ***/

	J[332] = 1.;

   /*** derivatives for constraint 79 ***/

	J[334] = 1.;

   /*** derivatives for constraint 80 ***/

	J[337] = 1.;

   /*** derivatives for constraint 81 ***/

	J[340] = 1.;

   /*** derivatives for constraint 82 ***/

	J[335] = 1.;

   /*** derivatives for constraint 83 ***/

	J[338] = 1.;

   /*** derivatives for constraint 84 ***/

	J[341] = 1.;

   /*** derivatives for constraint 85 ***/

	J[204] = 1.;

   /*** derivatives for constraint 86 ***/

	J[38] = 1.;
	J[327] = -1.;

   /*** derivatives for constraint 87 ***/

	J[29] = 1.;
	J[330] = -1.;

   /*** derivatives for constraint 88 ***/

	J[2] = 1.;
	J[333] = -1.;

   /*** derivatives for constraint 89 ***/

	J[92] = 1.;
	J[336] = -1.;

   /*** derivatives for constraint 90 ***/

	J[83] = 1.;
	J[339] = -1.;

   /*** derivatives for constraint 91 ***/

	J[56] = 1.;
	J[342] = -1.;

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
