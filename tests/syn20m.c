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
 fint syn20m_auxcom_[1] = { 14 /* nlc */ };
 fint syn20m_funcom_[353] = {
	65 /* nvar */,
	1 /* nobj */,
	113 /* ncon */,
	281 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	4,
	7,
	10,
	14,
	17,
	20,
	23,
	27,
	30,
	33,
	36,
	39,
	42,
	45,
	46,
	49,
	52,
	54,
	55,
	57,
	61,
	65,
	68,
	72,
	78,
	82,
	86,
	91,
	94,
	98,
	102,
	105,
	108,
	109,
	113,
	117,
	122,
	124,
	126,
	129,
	132,
	135,
	137,
	139,
	141,
	148,
	155,
	163,
	169,
	181,
	188,
	195,
	203,
	210,
	219,
	228,
	237,
	242,
	247,
	255,
	261,
	267,
	272,
	277,
	282,

	/* rownos */
	1,
	15,
	25,
	2,
	15,
	27,
	3,
	18,
	33,
	3,
	6,
	34,
	46,
	4,
	19,
	42,
	5,
	19,
	44,
	7,
	20,
	56,
	5,
	8,
	45,
	65,
	9,
	21,
	67,
	10,
	21,
	69,
	11,
	22,
	70,
	12,
	24,
	80,
	13,
	24,
	82,
	14,
	24,
	84,
	15,
	1,
	16,
	26,
	2,
	16,
	28,
	16,
	17,
	17,
	17,
	18,
	18,
	29,
	30,
	31,
	18,
	35,
	36,
	39,
	37,
	38,
	40,
	19,
	29,
	30,
	32,
	20,
	35,
	36,
	37,
	38,
	41,
	20,
	48,
	49,
	50,
	20,
	52,
	53,
	54,
	4,
	43,
	58,
	59,
	62,
	6,
	21,
	47,
	22,
	48,
	49,
	51,
	23,
	52,
	53,
	55,
	7,
	24,
	57,
	60,
	61,
	63,
	22,
	23,
	72,
	73,
	74,
	23,
	76,
	77,
	78,
	58,
	59,
	60,
	61,
	64,
	8,
	66,
	9,
	68,
	10,
	11,
	71,
	72,
	73,
	75,
	76,
	77,
	79,
	12,
	81,
	13,
	83,
	14,
	85,
	1,
	25,
	26,
	86,
	96,
	97,
	98,
	2,
	27,
	28,
	86,
	96,
	97,
	98,
	29,
	30,
	31,
	32,
	87,
	96,
	99,
	100,
	3,
	33,
	34,
	90,
	97,
	101,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	92,
	98,
	102,
	103,
	104,
	4,
	42,
	43,
	87,
	88,
	99,
	105,
	5,
	44,
	45,
	87,
	89,
	100,
	106,
	6,
	46,
	47,
	90,
	91,
	101,
	107,
	108,
	48,
	49,
	50,
	51,
	92,
	93,
	102,
	52,
	53,
	54,
	55,
	92,
	94,
	103,
	109,
	110,
	7,
	56,
	57,
	92,
	95,
	104,
	111,
	112,
	113,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	88,
	105,
	8,
	65,
	66,
	89,
	106,
	9,
	67,
	68,
	91,
	107,
	10,
	11,
	69,
	70,
	71,
	91,
	93,
	108,
	72,
	73,
	74,
	75,
	94,
	109,
	76,
	77,
	78,
	79,
	94,
	110,
	12,
	80,
	81,
	95,
	111,
	13,
	82,
	83,
	95,
	112,
	14,
	84,
	85,
	95,
	113 };

 real syn20m_boundc_[1+130+226] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		10.,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		7.,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		5.,
		0.,
		5.,
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
		0.,
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
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
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
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
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
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
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
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
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
		1.7e308,
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
		0.,
		1.7e308};

 real syn20m_x0comn_[65] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn20m_pd[25];
static real syn20m_old_x[65];
static int syn20m_xkind = -1;

 static int
syn20m_xcheck(real *x)
{
	real *x1 = syn20m_old_x, *xe = x + 65;
	errno = 0;
	if (syn20m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn20m_xkind = 0;
	return 1;
	}
 real
syn20m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn20m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 5.*x[18];
	rv += 200.*x[36];
	rv += 250.*x[37];
	rv += 200.*x[38];
	rv += 700.*x[39];
	rv += 400.*x[40];
	rv += 500.*x[41];
	rv += 400.*x[42];
	rv += 600.*x[43];
	rv += 700.*x[44];
	rv += -5.*x[45];
	rv += -8.*x[46];
	rv += -6.*x[47];
	rv += -10.*x[48];
	rv += -6.*x[49];
	rv += -7.*x[50];
	rv += -4.*x[51];
	rv += -5.*x[52];
	rv += -2.*x[53];
	rv += -4.*x[54];
	rv += -3.*x[55];
	rv += -7.*x[56];
	rv += -3.*x[57];
	rv += -2.*x[58];
	rv += -4.*x[59];
	rv += -2.*x[60];
	rv += -3.*x[61];
	rv += -5.*x[62];
	rv += -2.*x[63];
	rv += -8.*x[64];
	;}

	if (wantfg & 2) {
	g[18] = 5.;
	g[36] = 200.;
	g[37] = 250.;
	g[38] = 200.;
	g[39] = 700.;
	g[40] = 400.;
	g[41] = 500.;
	g[42] = 400.;
	g[43] = 600.;
	g[44] = 700.;
	g[45] = -5.;
	g[46] = -8.;
	g[47] = -6.;
	g[48] = -10.;
	g[49] = -6.;
	g[50] = -7.;
	g[51] = -4.;
	g[52] = -5.;
	g[53] = -2.;
	g[54] = -4.;
	g[55] = -3.;
	g[56] = -7.;
	g[57] = -3.;
	g[58] = -2.;
	g[59] = -4.;
	g[60] = -2.;
	g[61] = -3.;
	g[62] = -5.;
	g[63] = -2.;
	g[64] = -8.;
	}

	return rv;
}

 void
syn20m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (syn20m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[15];
	t1 += x[45];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	syn20m_pd[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[2] = 1. / v[0];
	v[0] = -1.2 * syn20m_pd[1];
	t1 = v[0] + x[16];
	t1 += x[46];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + 1.;
	syn20m_pd[3] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[4] = 1. / v[0];
	v[0] = -1.5 * syn20m_pd[3];
	t1 = v[0] + x[3];
	t1 += x[48];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[4] + 1.;
	syn20m_pd[5] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[6] = 1. / v[0];
	v[0] = -1.25 * syn20m_pd[5];
	t1 = v[0] + x[27];
	t1 += x[50];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[5] + 1.;
	syn20m_pd[7] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[8] = 1. / v[0];
	v[0] = -0.9 * syn20m_pd[7];
	t1 = v[0] + x[7];
	t1 += x[51];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[3] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[9] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[28];
	t1 += x[52];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[6] + 1.;
	syn20m_pd[10] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[11] = 1. / v[0];
	v[0] = -1.1 * syn20m_pd[10];
	t1 = v[0] + x[31];
	t1 += x[55];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[7] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[12] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[37];
	t1 += x[57];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[8] + 1.;
	syn20m_pd[13] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[14] = 1. / v[0];
	v[0] = -0.7 * syn20m_pd[13];
	t1 = v[0] + x[38];
	t1 += x[58];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[9] + 1.;
	syn20m_pd[15] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[16] = 1. / v[0];
	v[0] = -0.65 * syn20m_pd[15];
	t1 = v[0] + x[39];
	t1 += x[59];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[10] + 1.;
	syn20m_pd[17] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[18] = 1. / v[0];
	v[0] = -0.65 * syn20m_pd[17];
	t1 = v[0] + x[39];
	t1 += x[59];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[11] + 1.;
	syn20m_pd[19] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[20] = 1. / v[0];
	v[0] = -0.75 * syn20m_pd[19];
	t1 = v[0] + x[42];
	t1 += x[62];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[12] + 1.;
	syn20m_pd[21] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[22] = 1. / v[0];
	v[0] = -0.8 * syn20m_pd[21];
	t1 = v[0] + x[43];
	t1 += x[63];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[13] + 1.;
	syn20m_pd[23] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn20m_pd[24] = 1. / v[0];
	v[0] = -0.85 * syn20m_pd[23];
	t1 = v[0] + x[44];
	t1 += x[64];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[14];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[15];
	t1 += -x[16];
	t1 += x[17];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[17];
	t1 += -x[18];
	t1 += -x[19];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[2];
	t1 += x[19];
	t1 += -x[20];
	t1 += -x[21];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += x[23];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[6];
	t1 += x[24];
	t1 += -x[25];
	t1 += -x[26];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += x[28];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[10];
	t1 += -x[29];
	t1 += -x[33];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[30];
	t1 += -x[34];
	t1 += -x[35];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[11];
	t1 += -x[12];
	t1 += -x[13];
	t1 += x[31];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[0];
	t1 += -10.*x[45];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[15];
	t1 += -2.39789527279837*x[45];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[1];
	t1 += -10.*x[46];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[16];
	t1 += -2.87747432735804*x[46];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -0.75*x[20];
	t1 += x[23];
	t1 += x[47];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -0.75*x[20];
	t1 += x[23];
	t1 += -x[47];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[20];
	t1 += -2.87747432735804*x[47];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[23];
	t1 += -2.15810574551853*x[47];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[2];
	t1 += -2.87747432735804*x[48];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[3];
	t1 += -2.03277599268042*x[48];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[21];
	t1 += x[24];
	t1 += x[49];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[21];
	t1 += x[24];
	t1 += -x[49];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -0.5*x[22];
	t1 += x[24];
	t1 += x[49];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -0.5*x[22];
	t1 += x[24];
	t1 += -x[49];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[21];
	t1 += -2.87747432735804*x[49];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[22];
	t1 += -7.*x[49];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[24];
	t1 += -3.5*x[49];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[4];
	t1 += -2.15810574551853*x[50];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[27];
	t1 += -1.43746550029693*x[50];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[5];
	t1 += -2.15810574551853*x[51];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[7];
	t1 += -1.03497516021379*x[51];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[3];
	t1 += -2.03277599268042*x[52];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[28];
	t1 += -1.10947836929589*x[52];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -0.9*x[25];
	t1 += x[29];
	t1 += x[53];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -0.9*x[25];
	t1 += x[29];
	t1 += -x[53];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[25];
	t1 += -3.5*x[53];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[29];
	t1 += -3.15*x[53];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -0.6*x[26];
	t1 += x[30];
	t1 += x[54];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -0.6*x[26];
	t1 += x[30];
	t1 += -x[54];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[26];
	t1 += -3.5*x[54];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[30];
	t1 += -2.1*x[54];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[6];
	t1 += -3.5*x[55];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[31];
	t1 += -1.6544851364539*x[55];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -0.9*x[27];
	t1 += x[36];
	t1 += x[56];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -0.9*x[27];
	t1 += x[36];
	t1 += -x[56];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[32];
	t1 += x[36];
	t1 += x[56];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[32];
	t1 += x[36];
	t1 += -x[56];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[27];
	t1 += -1.43746550029693*x[56];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[32];
	t1 += -5.*x[56];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[36];
	t1 += -5.*x[56];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[7];
	t1 += -1.03497516021379*x[57];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[37];
	t1 += -0.710483612536911*x[57];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[8];
	t1 += -1.10947836929589*x[58];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[38];
	t1 += -0.522508489006913*x[58];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[9];
	t1 += -1.10947836929589*x[59];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[10];
	t1 += -8.15*x[59];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[39];
	t1 += -1.43894002153683*x[59];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[34];
	t1 += x[40];
	t1 += x[60];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[34];
	t1 += x[40];
	t1 += -x[60];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[34];
	t1 += -2.1*x[60];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[40];
	t1 += -2.1*x[60];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[35];
	t1 += x[41];
	t1 += x[61];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[35];
	t1 += x[41];
	t1 += -x[61];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[35];
	t1 += -2.1*x[61];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[41];
	t1 += -2.1*x[61];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[11];
	t1 += -1.6544851364539*x[62];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[42];
	t1 += -0.732188035236726*x[62];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[12];
	t1 += -1.6544851364539*x[63];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[43];
	t1 += -0.781000570919175*x[63];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[13];
	t1 += -1.6544851364539*x[64];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[44];
	t1 += -0.829813106601623*x[64];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[45];
	t1 += x[46];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[47];
	t1 += x[50];
	t1 += x[51];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = -x[50];
	t1 += x[56];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = -x[51];
	t1 += x[57];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = -x[48];
	t1 += x[52];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = -x[52];
	t1 += x[58];
	t1 += x[59];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = -x[49];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -x[53];
	t1 += x[59];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = -x[54];
	t1 += x[60];
	t1 += x[61];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = -x[55];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += -x[47];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += -x[48];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += -x[49];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[47];
	t1 += -x[50];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[47];
	t1 += -x[51];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[48];
	t1 += -x[52];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[49];
	t1 += -x[53];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[49];
	t1 += -x[54];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[49];
	t1 += -x[55];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[50];
	t1 += -x[56];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[51];
	t1 += -x[57];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[52];
	t1 += -x[58];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[52];
	t1 += -x[59];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[54];
	t1 += -x[60];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[54];
	t1 += -x[61];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[55];
	t1 += -x[62];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[55];
	t1 += -x[63];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[55];
	t1 += -x[64];
	c[112] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -syn20m_pd[0];
	J[45] = 1.;
	J[140] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -1.2*syn20m_pd[2];
	J[3] = dv[0];
	J[48] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -1.5*syn20m_pd[4];
	J[6] = dv[0];
	J[9] = 1.;
	J[162] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -1.25*syn20m_pd[6];
	J[13] = dv[0];
	J[85] = 1.;
	J[180] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -0.9*syn20m_pd[8];
	J[16] = dv[0];
	J[22] = 1.;
	J[187] = 1.;

   /*** derivatives for constraint 6 ***/

	J[10] = -syn20m_pd[9];
	J[90] = 1.;
	J[194] = 1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -1.1*syn20m_pd[11];
	J[19] = dv[0];
	J[101] = 1.;
	J[218] = 1.;

   /*** derivatives for constraint 8 ***/

	J[23] = -syn20m_pd[12];
	J[121] = 1.;
	J[236] = 1.;

   /*** derivatives for constraint 9 ***/

	dv[0] = -0.7*syn20m_pd[14];
	J[26] = dv[0];
	J[123] = 1.;
	J[241] = 1.;

   /*** derivatives for constraint 10 ***/

	dv[0] = -0.65*syn20m_pd[16];
	J[29] = dv[0];
	J[125] = 1.;
	J[246] = 1.;

   /*** derivatives for constraint 11 ***/

	dv[0] = -0.65*syn20m_pd[18];
	J[32] = dv[0];
	J[126] = 1.;
	J[247] = 1.;

   /*** derivatives for constraint 12 ***/

	dv[0] = -0.75*syn20m_pd[20];
	J[35] = dv[0];
	J[134] = 1.;
	J[266] = 1.;

   /*** derivatives for constraint 13 ***/

	dv[0] = -0.8*syn20m_pd[22];
	J[38] = dv[0];
	J[136] = 1.;
	J[271] = 1.;

   /*** derivatives for constraint 14 ***/

	dv[0] = -0.85*syn20m_pd[24];
	J[41] = dv[0];
	J[138] = 1.;
	J[276] = 1.;

   /*** derivatives for constraint 15 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[44] = 1.;

   /*** derivatives for constraint 16 ***/

	J[46] = -1.;
	J[49] = -1.;
	J[51] = 1.;

   /*** derivatives for constraint 17 ***/

	J[52] = 1.;
	J[53] = -1.;
	J[54] = -1.;

   /*** derivatives for constraint 18 ***/

	J[7] = -1.;
	J[55] = 1.;
	J[56] = -1.;
	J[60] = -1.;

   /*** derivatives for constraint 19 ***/

	J[14] = -1.;
	J[17] = -1.;
	J[67] = 1.;

   /*** derivatives for constraint 20 ***/

	J[20] = -1.;
	J[71] = 1.;
	J[77] = -1.;
	J[81] = -1.;

   /*** derivatives for constraint 21 ***/

	J[27] = -1.;
	J[30] = -1.;
	J[91] = 1.;

   /*** derivatives for constraint 22 ***/

	J[33] = 1.;
	J[93] = -1.;
	J[107] = -1.;

   /*** derivatives for constraint 23 ***/

	J[97] = 1.;
	J[108] = -1.;
	J[112] = -1.;

   /*** derivatives for constraint 24 ***/

	J[36] = -1.;
	J[39] = -1.;
	J[42] = -1.;
	J[102] = 1.;

   /*** derivatives for constraint 25 ***/

	J[2] = 1.;
	J[141] = -10.;

   /*** derivatives for constraint 26 ***/

	J[47] = 1.;
	J[142] = -2.39789527279837;

   /*** derivatives for constraint 27 ***/

	J[5] = 1.;
	J[148] = -10.;

   /*** derivatives for constraint 28 ***/

	J[50] = 1.;
	J[149] = -2.87747432735804;

   /*** derivatives for constraint 29 ***/

	J[57] = -0.75;
	J[68] = 1.;
	J[154] = 1.;

   /*** derivatives for constraint 30 ***/

	J[58] = -0.75;
	J[69] = 1.;
	J[155] = -1.;

   /*** derivatives for constraint 31 ***/

	J[59] = 1.;
	J[156] = -2.87747432735804;

   /*** derivatives for constraint 32 ***/

	J[70] = 1.;
	J[157] = -2.15810574551853;

   /*** derivatives for constraint 33 ***/

	J[8] = 1.;
	J[163] = -2.87747432735804;

   /*** derivatives for constraint 34 ***/

	J[11] = 1.;
	J[164] = -2.03277599268042;

   /*** derivatives for constraint 35 ***/

	J[61] = -1.;
	J[72] = 1.;
	J[168] = 1.;

   /*** derivatives for constraint 36 ***/

	J[62] = -1.;
	J[73] = 1.;
	J[169] = -1.;

   /*** derivatives for constraint 37 ***/

	J[64] = -0.5;
	J[74] = 1.;
	J[170] = 1.;

   /*** derivatives for constraint 38 ***/

	J[65] = -0.5;
	J[75] = 1.;
	J[171] = -1.;

   /*** derivatives for constraint 39 ***/

	J[63] = 1.;
	J[172] = -2.87747432735804;

   /*** derivatives for constraint 40 ***/

	J[66] = 1.;
	J[173] = -7.;

   /*** derivatives for constraint 41 ***/

	J[76] = 1.;
	J[174] = -3.5;

   /*** derivatives for constraint 42 ***/

	J[15] = 1.;
	J[181] = -2.15810574551853;

   /*** derivatives for constraint 43 ***/

	J[86] = 1.;
	J[182] = -1.43746550029693;

   /*** derivatives for constraint 44 ***/

	J[18] = 1.;
	J[188] = -2.15810574551853;

   /*** derivatives for constraint 45 ***/

	J[24] = 1.;
	J[189] = -1.03497516021379;

   /*** derivatives for constraint 46 ***/

	J[12] = 1.;
	J[195] = -2.03277599268042;

   /*** derivatives for constraint 47 ***/

	J[92] = 1.;
	J[196] = -1.10947836929589;

   /*** derivatives for constraint 48 ***/

	J[78] = -0.9;
	J[94] = 1.;
	J[202] = 1.;

   /*** derivatives for constraint 49 ***/

	J[79] = -0.9;
	J[95] = 1.;
	J[203] = -1.;

   /*** derivatives for constraint 50 ***/

	J[80] = 1.;
	J[204] = -3.5;

   /*** derivatives for constraint 51 ***/

	J[96] = 1.;
	J[205] = -3.15;

   /*** derivatives for constraint 52 ***/

	J[82] = -0.6;
	J[98] = 1.;
	J[209] = 1.;

   /*** derivatives for constraint 53 ***/

	J[83] = -0.6;
	J[99] = 1.;
	J[210] = -1.;

   /*** derivatives for constraint 54 ***/

	J[84] = 1.;
	J[211] = -3.5;

   /*** derivatives for constraint 55 ***/

	J[100] = 1.;
	J[212] = -2.1;

   /*** derivatives for constraint 56 ***/

	J[21] = 1.;
	J[219] = -3.5;

   /*** derivatives for constraint 57 ***/

	J[103] = 1.;
	J[220] = -1.6544851364539;

   /*** derivatives for constraint 58 ***/

	J[87] = -0.9;
	J[116] = 1.;
	J[227] = 1.;

   /*** derivatives for constraint 59 ***/

	J[88] = -0.9;
	J[117] = 1.;
	J[228] = -1.;

   /*** derivatives for constraint 60 ***/

	J[104] = -1.;
	J[118] = 1.;
	J[229] = 1.;

   /*** derivatives for constraint 61 ***/

	J[105] = -1.;
	J[119] = 1.;
	J[230] = -1.;

   /*** derivatives for constraint 62 ***/

	J[89] = 1.;
	J[231] = -1.43746550029693;

   /*** derivatives for constraint 63 ***/

	J[106] = 1.;
	J[232] = -5.;

   /*** derivatives for constraint 64 ***/

	J[120] = 1.;
	J[233] = -5.;

   /*** derivatives for constraint 65 ***/

	J[25] = 1.;
	J[237] = -1.03497516021379;

   /*** derivatives for constraint 66 ***/

	J[122] = 1.;
	J[238] = -0.710483612536911;

   /*** derivatives for constraint 67 ***/

	J[28] = 1.;
	J[242] = -1.10947836929589;

   /*** derivatives for constraint 68 ***/

	J[124] = 1.;
	J[243] = -0.522508489006913;

   /*** derivatives for constraint 69 ***/

	J[31] = 1.;
	J[248] = -1.10947836929589;

   /*** derivatives for constraint 70 ***/

	J[34] = 1.;
	J[249] = -8.15;

   /*** derivatives for constraint 71 ***/

	J[127] = 1.;
	J[250] = -1.43894002153683;

   /*** derivatives for constraint 72 ***/

	J[109] = -1.;
	J[128] = 1.;
	J[254] = 1.;

   /*** derivatives for constraint 73 ***/

	J[110] = -1.;
	J[129] = 1.;
	J[255] = -1.;

   /*** derivatives for constraint 74 ***/

	J[111] = 1.;
	J[256] = -2.1;

   /*** derivatives for constraint 75 ***/

	J[130] = 1.;
	J[257] = -2.1;

   /*** derivatives for constraint 76 ***/

	J[113] = -1.;
	J[131] = 1.;
	J[260] = 1.;

   /*** derivatives for constraint 77 ***/

	J[114] = -1.;
	J[132] = 1.;
	J[261] = -1.;

   /*** derivatives for constraint 78 ***/

	J[115] = 1.;
	J[262] = -2.1;

   /*** derivatives for constraint 79 ***/

	J[133] = 1.;
	J[263] = -2.1;

   /*** derivatives for constraint 80 ***/

	J[37] = 1.;
	J[267] = -1.6544851364539;

   /*** derivatives for constraint 81 ***/

	J[135] = 1.;
	J[268] = -0.732188035236726;

   /*** derivatives for constraint 82 ***/

	J[40] = 1.;
	J[272] = -1.6544851364539;

   /*** derivatives for constraint 83 ***/

	J[137] = 1.;
	J[273] = -0.781000570919175;

   /*** derivatives for constraint 84 ***/

	J[43] = 1.;
	J[277] = -1.6544851364539;

   /*** derivatives for constraint 85 ***/

	J[139] = 1.;
	J[278] = -0.829813106601623;

   /*** derivatives for constraint 86 ***/

	J[143] = 1.;
	J[150] = 1.;

   /*** derivatives for constraint 87 ***/

	J[158] = -1.;
	J[183] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 88 ***/

	J[184] = -1.;
	J[234] = 1.;

   /*** derivatives for constraint 89 ***/

	J[191] = -1.;
	J[239] = 1.;

   /*** derivatives for constraint 90 ***/

	J[165] = -1.;
	J[197] = 1.;

   /*** derivatives for constraint 91 ***/

	J[198] = -1.;
	J[244] = 1.;
	J[251] = 1.;

   /*** derivatives for constraint 92 ***/

	J[175] = -1.;
	J[206] = 1.;
	J[213] = 1.;
	J[221] = 1.;

   /*** derivatives for constraint 93 ***/

	J[207] = -1.;
	J[252] = 1.;

   /*** derivatives for constraint 94 ***/

	J[214] = -1.;
	J[258] = 1.;
	J[264] = 1.;

   /*** derivatives for constraint 95 ***/

	J[222] = -1.;
	J[269] = 1.;
	J[274] = 1.;
	J[279] = 1.;

   /*** derivatives for constraint 96 ***/

	J[144] = 1.;
	J[151] = 1.;
	J[159] = -1.;

   /*** derivatives for constraint 97 ***/

	J[145] = 1.;
	J[152] = 1.;
	J[166] = -1.;

   /*** derivatives for constraint 98 ***/

	J[146] = 1.;
	J[153] = 1.;
	J[176] = -1.;

   /*** derivatives for constraint 99 ***/

	J[160] = 1.;
	J[185] = -1.;

   /*** derivatives for constraint 100 ***/

	J[161] = 1.;
	J[192] = -1.;

   /*** derivatives for constraint 101 ***/

	J[167] = 1.;
	J[199] = -1.;

   /*** derivatives for constraint 102 ***/

	J[177] = 1.;
	J[208] = -1.;

   /*** derivatives for constraint 103 ***/

	J[178] = 1.;
	J[215] = -1.;

   /*** derivatives for constraint 104 ***/

	J[179] = 1.;
	J[223] = -1.;

   /*** derivatives for constraint 105 ***/

	J[186] = 1.;
	J[235] = -1.;

   /*** derivatives for constraint 106 ***/

	J[193] = 1.;
	J[240] = -1.;

   /*** derivatives for constraint 107 ***/

	J[200] = 1.;
	J[245] = -1.;

   /*** derivatives for constraint 108 ***/

	J[201] = 1.;
	J[253] = -1.;

   /*** derivatives for constraint 109 ***/

	J[216] = 1.;
	J[259] = -1.;

   /*** derivatives for constraint 110 ***/

	J[217] = 1.;
	J[265] = -1.;

   /*** derivatives for constraint 111 ***/

	J[224] = 1.;
	J[270] = -1.;

   /*** derivatives for constraint 112 ***/

	J[225] = 1.;
	J[275] = -1.;

   /*** derivatives for constraint 113 ***/

	J[226] = 1.;
	J[280] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
