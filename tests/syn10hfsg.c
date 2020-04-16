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
 fint syn10hfsg_auxcom_[1] = { 6 /* nlc */ };
 fint syn10hfsg_funcom_[326] = {
	77 /* nvar */,
	1 /* nobj */,
	112 /* ncon */,
	242 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

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
	46,
	55,
	63,
	70,
	77,
	84,
	85,
	87,
	89,
	91,
	93,
	95,
	96,
	98,
	100,
	102,
	104,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	128,
	131,
	134,
	137,
	140,
	143,
	146,
	149,
	152,
	155,
	158,
	161,
	164,
	167,
	170,
	174,
	177,
	180,
	183,
	186,
	189,
	192,
	195,
	198,
	201,
	204,
	207,
	210,
	213,
	216,
	224,
	233,
	238,
	243,

	/* rownos */
	1,
	15,
	17,
	2,
	23,
	25,
	1,
	16,
	19,
	2,
	24,
	27,
	3,
	40,
	42,
	3,
	41,
	44,
	6,
	78,
	80,
	4,
	62,
	64,
	5,
	70,
	72,
	4,
	63,
	66,
	5,
	71,
	74,
	6,
	79,
	82,
	1,
	17,
	18,
	19,
	20,
	102,
	105,
	106,
	107,
	2,
	25,
	26,
	27,
	28,
	102,
	105,
	106,
	107,
	3,
	42,
	43,
	44,
	45,
	104,
	106,
	110,
	4,
	64,
	65,
	66,
	67,
	103,
	108,
	5,
	72,
	73,
	74,
	75,
	103,
	109,
	6,
	80,
	81,
	82,
	83,
	104,
	110,
	7,
	7,
	15,
	7,
	23,
	8,
	16,
	8,
	24,
	8,
	9,
	9,
	9,
	10,
	10,
	32,
	10,
	40,
	10,
	51,
	52,
	11,
	33,
	41,
	78,
	12,
	53,
	11,
	62,
	11,
	70,
	12,
	87,
	12,
	96,
	12,
	63,
	71,
	79,
	88,
	97,
	13,
	15,
	18,
	21,
	23,
	26,
	14,
	16,
	20,
	22,
	24,
	28,
	29,
	32,
	34,
	30,
	32,
	35,
	38,
	40,
	43,
	46,
	51,
	54,
	48,
	51,
	55,
	47,
	52,
	56,
	49,
	52,
	57,
	29,
	33,
	36,
	31,
	33,
	37,
	39,
	41,
	45,
	76,
	78,
	81,
	46,
	47,
	53,
	58,
	50,
	53,
	59,
	60,
	62,
	65,
	68,
	70,
	73,
	84,
	87,
	89,
	85,
	87,
	90,
	93,
	96,
	98,
	94,
	96,
	99,
	61,
	63,
	67,
	69,
	71,
	75,
	77,
	79,
	83,
	84,
	88,
	91,
	86,
	88,
	92,
	93,
	97,
	100,
	95,
	97,
	101,
	34,
	35,
	36,
	37,
	103,
	105,
	108,
	109,
	54,
	55,
	56,
	57,
	58,
	59,
	107,
	111,
	112,
	89,
	90,
	91,
	92,
	111,
	98,
	99,
	100,
	101,
	112 };

 real syn10hfsg_boundc_[1+154+224] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		10.,
		-1.7e308,
		0.,
		-1.7e308,
		2.39789527279837,
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
		10.,
		-1.7e308,
		0.,
		-1.7e308,
		2.87747432735804,
		0.,
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
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		2.15810574551853,
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
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		2.03277599268042,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		2.87747432735804,
		-1.7e308,
		0.,
		-1.7e308,
		7.,
		-1.7e308,
		0.,
		-1.7e308,
		3.5,
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
		2.15810574551853,
		-1.7e308,
		0.,
		-1.7e308,
		1.43746550029693,
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
		2.15810574551853,
		-1.7e308,
		0.,
		-1.7e308,
		1.03497516021379,
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
		2.03277599268042,
		-1.7e308,
		0.,
		-1.7e308,
		1.10947836929589,
		0.,
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
		3.5,
		-1.7e308,
		0.,
		-1.7e308,
		3.15,
		0.,
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
		3.5,
		-1.7e308,
		0.,
		-1.7e308,
		2.1,
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
		1.7e308};

 real syn10hfsg_x0comn_[77] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn10hfsg_pd[46];
static real syn10hfsg_old_x[77];
static int syn10hfsg_xkind = -1;

 static int
syn10hfsg_xcheck(real *x)
{
	real *x1 = syn10hfsg_old_x, *xe = x + 77;
	errno = 0;
	if (syn10hfsg_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn10hfsg_xkind = 0;
	return 1;
	}
 real
syn10hfsg_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn10hfsg_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -5.*x[12];
	rv += -8.*x[13];
	rv += -10.*x[14];
	rv += -7.*x[15];
	rv += -4.*x[16];
	rv += -5.*x[17];
	rv += 5.*x[24];
	rv += -2.*x[29];
	rv += 200.*x[37];
	rv += 250.*x[38];
	rv += 200.*x[39];
	rv += 200.*x[40];
	rv += 500.*x[41];
	rv += 350.*x[42];
	rv += -6.*x[73];
	rv += -6.*x[74];
	rv += -2.*x[75];
	rv += -4.*x[76];
	;}

	if (wantfg & 2) {
	g[12] = -5.;
	g[13] = -8.;
	g[14] = -10.;
	g[15] = -7.;
	g[16] = -4.;
	g[17] = -5.;
	g[24] = 5.;
	g[29] = -2.;
	g[37] = 200.;
	g[38] = 250.;
	g[39] = 200.;
	g[40] = 200.;
	g[41] = 500.;
	g[42] = 350.;
	g[73] = -6.;
	g[74] = -6.;
	g[75] = -2.;
	g[76] = -4.;
	}

	return rv;
}

 void
syn10hfsg_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (syn10hfsg_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.999 * x[12];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[2] / v[1];
	syn10hfsg_pd[0] = 1. / v[1];
	syn10hfsg_pd[1] = -v[0] * syn10hfsg_pd[0];
	v[1] = 0.999 * x[12];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[0] / v[2];
	syn10hfsg_pd[2] = 1. / v[2];
	syn10hfsg_pd[3] = -v[1] * syn10hfsg_pd[2];
	v[2] = v[1] + 1.;
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn10hfsg_pd[4] = 1. / v[2];
	syn10hfsg_pd[6] = v[0] - v[1];
	v[1] = 0.999 * x[12];
	syn10hfsg_pd[5] = v[1] + 0.001;
	v[1] = syn10hfsg_pd[6] * syn10hfsg_pd[5];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = 0.999 * x[13];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[3] / v[1];
	syn10hfsg_pd[7] = 1. / v[1];
	syn10hfsg_pd[8] = -v[0] * syn10hfsg_pd[7];
	v[1] = 0.999 * x[13];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[1] / v[2];
	syn10hfsg_pd[9] = 1. / v[2];
	syn10hfsg_pd[10] = -v[1] * syn10hfsg_pd[9];
	v[2] = v[1] + 1.;
	syn10hfsg_pd[11] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn10hfsg_pd[12] = 1. / v[2];
	v[2] = -1.2 * syn10hfsg_pd[11];
	syn10hfsg_pd[14] = v[0] + v[2];
	v[2] = 0.999 * x[13];
	syn10hfsg_pd[13] = v[2] + 0.001;
	v[2] = syn10hfsg_pd[14] * syn10hfsg_pd[13];
	c[1] = v[2];

  /***  constraint 3  ***/

	v[0] = 0.999 * x[14];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[5] / v[1];
	syn10hfsg_pd[15] = 1. / v[1];
	syn10hfsg_pd[16] = -v[0] * syn10hfsg_pd[15];
	v[1] = 0.999 * x[14];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[4] / v[2];
	syn10hfsg_pd[17] = 1. / v[2];
	syn10hfsg_pd[18] = -v[1] * syn10hfsg_pd[17];
	v[2] = v[1] + 1.;
	syn10hfsg_pd[19] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn10hfsg_pd[20] = 1. / v[2];
	v[2] = -1.5 * syn10hfsg_pd[19];
	syn10hfsg_pd[22] = v[0] + v[2];
	v[2] = 0.999 * x[14];
	syn10hfsg_pd[21] = v[2] + 0.001;
	v[2] = syn10hfsg_pd[22] * syn10hfsg_pd[21];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = 0.999 * x[15];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[9] / v[1];
	syn10hfsg_pd[23] = 1. / v[1];
	syn10hfsg_pd[24] = -v[0] * syn10hfsg_pd[23];
	v[1] = 0.999 * x[15];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[7] / v[2];
	syn10hfsg_pd[25] = 1. / v[2];
	syn10hfsg_pd[26] = -v[1] * syn10hfsg_pd[25];
	v[2] = v[1] + 1.;
	syn10hfsg_pd[27] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn10hfsg_pd[28] = 1. / v[2];
	v[2] = -1.25 * syn10hfsg_pd[27];
	syn10hfsg_pd[30] = v[0] + v[2];
	v[2] = 0.999 * x[15];
	syn10hfsg_pd[29] = v[2] + 0.001;
	v[2] = syn10hfsg_pd[30] * syn10hfsg_pd[29];
	c[3] = v[2];

  /***  constraint 5  ***/

	v[0] = 0.999 * x[16];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[10] / v[1];
	syn10hfsg_pd[31] = 1. / v[1];
	syn10hfsg_pd[32] = -v[0] * syn10hfsg_pd[31];
	v[1] = 0.999 * x[16];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[8] / v[2];
	syn10hfsg_pd[33] = 1. / v[2];
	syn10hfsg_pd[34] = -v[1] * syn10hfsg_pd[33];
	v[2] = v[1] + 1.;
	syn10hfsg_pd[35] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn10hfsg_pd[36] = 1. / v[2];
	v[2] = -0.9 * syn10hfsg_pd[35];
	syn10hfsg_pd[38] = v[0] + v[2];
	v[2] = 0.999 * x[16];
	syn10hfsg_pd[37] = v[2] + 0.001;
	v[2] = syn10hfsg_pd[38] * syn10hfsg_pd[37];
	c[4] = v[2];

  /***  constraint 6  ***/

	v[0] = 0.999 * x[17];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[11] / v[1];
	syn10hfsg_pd[39] = 1. / v[1];
	syn10hfsg_pd[40] = -v[0] * syn10hfsg_pd[39];
	v[1] = 0.999 * x[17];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[6] / v[2];
	syn10hfsg_pd[41] = 1. / v[2];
	syn10hfsg_pd[42] = -v[1] * syn10hfsg_pd[41];
	v[2] = v[1] + 1.;
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn10hfsg_pd[43] = 1. / v[2];
	syn10hfsg_pd[45] = v[0] - v[1];
	v[1] = 0.999 * x[17];
	syn10hfsg_pd[44] = v[1] + 0.001;
	v[1] = syn10hfsg_pd[45] * syn10hfsg_pd[44];
	c[5] = v[1];

  /***  constraint 7  ***/

	t1 = x[18];
	t1 += -x[19];
	t1 += -x[20];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[21];
	t1 += -x[22];
	t1 += x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[23];
	t1 += -x[24];
	t1 += -x[25];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[25];
	t1 += -x[26];
	t1 += -x[27];
	t1 += -x[28];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[30];
	t1 += -x[33];
	t1 += -x[34];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[32];
	t1 += -x[35];
	t1 += -x[36];
	t1 += -x[37];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[43];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[45];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[0];
	t1 += x[19];
	t1 += -x[43];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[2];
	t1 += x[21];
	t1 += -x[45];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[0];
	t1 += -10.*x[12];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 10.*x[12];
	t1 += x[43];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[2];
	t1 += -2.39789527279837*x[12];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = 2.39789527279837*x[12];
	t1 += x[45];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[44];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[46];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[1];
	t1 += x[20];
	t1 += -x[44];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[3];
	t1 += x[22];
	t1 += -x[46];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[1];
	t1 += -10.*x[13];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = 10.*x[13];
	t1 += x[44];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[3];
	t1 += -2.87747432735804*x[13];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = 2.87747432735804*x[13];
	t1 += x[46];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -0.75*x[47];
	t1 += x[54];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[48];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[55];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[26];
	t1 += -x[47];
	t1 += -x[48];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[30];
	t1 += -x[54];
	t1 += -x[55];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[47];
	t1 += -2.87747432735804*x[73];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[48];
	t1 += 2.87747432735804*x[73];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[54];
	t1 += -2.15810574551853*x[73];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[55];
	t1 += 2.15810574551853*x[73];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[49];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[56];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[4];
	t1 += x[27];
	t1 += -x[49];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[5];
	t1 += x[31];
	t1 += -x[56];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[4];
	t1 += -2.87747432735804*x[14];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = 2.87747432735804*x[14];
	t1 += x[49];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[5];
	t1 += -2.03277599268042*x[14];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = 2.03277599268042*x[14];
	t1 += x[56];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[50];
	t1 += x[58];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -0.5*x[52];
	t1 += x[58];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[51];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[53];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[59];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[28];
	t1 += -x[50];
	t1 += -x[51];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[29];
	t1 += -x[52];
	t1 += -x[53];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[32];
	t1 += -x[58];
	t1 += -x[59];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[50];
	t1 += -2.87747432735804*x[74];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[51];
	t1 += 2.87747432735804*x[74];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[52];
	t1 += -7.*x[74];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[53];
	t1 += 7.*x[74];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[58];
	t1 += -3.5*x[74];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[59];
	t1 += 3.5*x[74];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[60];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[66];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[7];
	t1 += x[33];
	t1 += -x[60];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[9];
	t1 += x[38];
	t1 += -x[66];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[7];
	t1 += -2.15810574551853*x[15];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = 2.15810574551853*x[15];
	t1 += x[60];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[9];
	t1 += -1.43746550029693*x[15];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = 1.43746550029693*x[15];
	t1 += x[66];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[61];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[67];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[8];
	t1 += x[34];
	t1 += -x[61];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[10];
	t1 += x[39];
	t1 += -x[67];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[8];
	t1 += -2.15810574551853*x[16];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = 2.15810574551853*x[16];
	t1 += x[61];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[10];
	t1 += -1.03497516021379*x[16];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = 1.03497516021379*x[16];
	t1 += x[67];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[57];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[68];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[6];
	t1 += x[31];
	t1 += -x[57];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[11];
	t1 += x[40];
	t1 += -x[68];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[6];
	t1 += -2.03277599268042*x[17];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = 2.03277599268042*x[17];
	t1 += x[57];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[11];
	t1 += -1.10947836929589*x[17];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = 1.10947836929589*x[17];
	t1 += x[68];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -0.9*x[62];
	t1 += x[69];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[63];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[70];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[35];
	t1 += -x[62];
	t1 += -x[63];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[41];
	t1 += -x[69];
	t1 += -x[70];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[62];
	t1 += -3.5*x[75];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[63];
	t1 += 3.5*x[75];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[69];
	t1 += -3.15*x[75];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[70];
	t1 += 3.15*x[75];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -0.6*x[64];
	t1 += x[71];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[65];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[72];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[36];
	t1 += -x[64];
	t1 += -x[65];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[42];
	t1 += -x[71];
	t1 += -x[72];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[64];
	t1 += -3.5*x[76];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[65];
	t1 += 3.5*x[76];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[71];
	t1 += -2.1*x[76];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[72];
	t1 += 2.1*x[76];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[12];
	t1 += x[13];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[15];
	t1 += x[16];
	t1 += -x[73];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = -x[14];
	t1 += x[17];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += -x[73];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += -x[14];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += -x[74];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -x[15];
	t1 += x[73];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -x[16];
	t1 += x[73];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[14];
	t1 += -x[17];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[74];
	t1 += -x[75];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[74];
	t1 += -x[76];
	c[111] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[36] = syn10hfsg_pd[6]*0.999;
	dv[0] = -syn10hfsg_pd[5];
	dv[0] *= syn10hfsg_pd[4];
	dv[1] = dv[0]*syn10hfsg_pd[3];
	J[0] = dv[0]*syn10hfsg_pd[2];
	J[36] += dv[1]*0.999;
	dv[2] = syn10hfsg_pd[5]*syn10hfsg_pd[1];
	J[6] = syn10hfsg_pd[5]*syn10hfsg_pd[0];
	J[36] += dv[2]*0.999;

   /*** derivatives for constraint 2 ***/

	J[45] = syn10hfsg_pd[14]*0.999;
	dv[0] = syn10hfsg_pd[13];
	dv[0] = -dv[0]*1.2;
	dv[0] *= syn10hfsg_pd[12];
	dv[1] = dv[0]*syn10hfsg_pd[10];
	J[3] = dv[0]*syn10hfsg_pd[9];
	J[45] += dv[1]*0.999;
	dv[2] = syn10hfsg_pd[13]*syn10hfsg_pd[8];
	J[9] = syn10hfsg_pd[13]*syn10hfsg_pd[7];
	J[45] += dv[2]*0.999;

   /*** derivatives for constraint 3 ***/

	J[54] = syn10hfsg_pd[22]*0.999;
	dv[0] = syn10hfsg_pd[21];
	dv[0] = -dv[0]*1.5;
	dv[0] *= syn10hfsg_pd[20];
	dv[1] = dv[0]*syn10hfsg_pd[18];
	J[12] = dv[0]*syn10hfsg_pd[17];
	J[54] += dv[1]*0.999;
	dv[2] = syn10hfsg_pd[21]*syn10hfsg_pd[16];
	J[15] = syn10hfsg_pd[21]*syn10hfsg_pd[15];
	J[54] += dv[2]*0.999;

   /*** derivatives for constraint 4 ***/

	J[62] = syn10hfsg_pd[30]*0.999;
	dv[0] = syn10hfsg_pd[29];
	dv[0] = -dv[0]*1.25;
	dv[0] *= syn10hfsg_pd[28];
	dv[1] = dv[0]*syn10hfsg_pd[26];
	J[21] = dv[0]*syn10hfsg_pd[25];
	J[62] += dv[1]*0.999;
	dv[2] = syn10hfsg_pd[29]*syn10hfsg_pd[24];
	J[27] = syn10hfsg_pd[29]*syn10hfsg_pd[23];
	J[62] += dv[2]*0.999;

   /*** derivatives for constraint 5 ***/

	J[69] = syn10hfsg_pd[38]*0.999;
	dv[0] = syn10hfsg_pd[37];
	dv[0] = -dv[0]*0.9;
	dv[0] *= syn10hfsg_pd[36];
	dv[1] = dv[0]*syn10hfsg_pd[34];
	J[24] = dv[0]*syn10hfsg_pd[33];
	J[69] += dv[1]*0.999;
	dv[2] = syn10hfsg_pd[37]*syn10hfsg_pd[32];
	J[30] = syn10hfsg_pd[37]*syn10hfsg_pd[31];
	J[69] += dv[2]*0.999;

   /*** derivatives for constraint 6 ***/

	J[76] = syn10hfsg_pd[45]*0.999;
	dv[0] = -syn10hfsg_pd[44];
	dv[0] *= syn10hfsg_pd[43];
	dv[1] = dv[0]*syn10hfsg_pd[42];
	J[18] = dv[0]*syn10hfsg_pd[41];
	J[76] += dv[1]*0.999;
	dv[2] = syn10hfsg_pd[44]*syn10hfsg_pd[40];
	J[33] = syn10hfsg_pd[44]*syn10hfsg_pd[39];
	J[76] += dv[2]*0.999;

   /*** derivatives for constraint 7 ***/

	J[83] = 1.;
	J[84] = -1.;
	J[86] = -1.;

   /*** derivatives for constraint 8 ***/

	J[88] = -1.;
	J[90] = -1.;
	J[92] = 1.;

   /*** derivatives for constraint 9 ***/

	J[93] = 1.;
	J[94] = -1.;
	J[95] = -1.;

   /*** derivatives for constraint 10 ***/

	J[96] = 1.;
	J[97] = -1.;
	J[99] = -1.;
	J[101] = -1.;

   /*** derivatives for constraint 11 ***/

	J[104] = 1.;
	J[110] = -1.;
	J[112] = -1.;

   /*** derivatives for constraint 12 ***/

	J[108] = 1.;
	J[114] = -1.;
	J[116] = -1.;
	J[118] = -1.;

   /*** derivatives for constraint 13 ***/

	J[124] = 1.;

   /*** derivatives for constraint 14 ***/

	J[130] = 1.;

   /*** derivatives for constraint 15 ***/

	J[1] = -1.;
	J[85] = 1.;
	J[125] = -1.;

   /*** derivatives for constraint 16 ***/

	J[7] = -1.;
	J[89] = 1.;
	J[131] = -1.;

   /*** derivatives for constraint 17 ***/

	J[2] = 1.;
	J[37] = -10.;

   /*** derivatives for constraint 18 ***/

	J[38] = 10.;
	J[126] = 1.;

   /*** derivatives for constraint 19 ***/

	J[8] = 1.;
	J[39] = -2.39789527279837;

   /*** derivatives for constraint 20 ***/

	J[40] = 2.39789527279837;
	J[132] = 1.;

   /*** derivatives for constraint 21 ***/

	J[127] = 1.;

   /*** derivatives for constraint 22 ***/

	J[133] = 1.;

   /*** derivatives for constraint 23 ***/

	J[4] = -1.;
	J[87] = 1.;
	J[128] = -1.;

   /*** derivatives for constraint 24 ***/

	J[10] = -1.;
	J[91] = 1.;
	J[134] = -1.;

   /*** derivatives for constraint 25 ***/

	J[5] = 1.;
	J[46] = -10.;

   /*** derivatives for constraint 26 ***/

	J[47] = 10.;
	J[129] = 1.;

   /*** derivatives for constraint 27 ***/

	J[11] = 1.;
	J[48] = -2.87747432735804;

   /*** derivatives for constraint 28 ***/

	J[49] = 2.87747432735804;
	J[135] = 1.;

   /*** derivatives for constraint 29 ***/

	J[136] = -0.75;
	J[157] = 1.;

   /*** derivatives for constraint 30 ***/

	J[139] = 1.;

   /*** derivatives for constraint 31 ***/

	J[160] = 1.;

   /*** derivatives for constraint 32 ***/

	J[98] = 1.;
	J[137] = -1.;
	J[140] = -1.;

   /*** derivatives for constraint 33 ***/

	J[105] = 1.;
	J[158] = -1.;
	J[161] = -1.;

   /*** derivatives for constraint 34 ***/

	J[138] = 1.;
	J[215] = -2.87747432735804;

   /*** derivatives for constraint 35 ***/

	J[141] = 1.;
	J[216] = 2.87747432735804;

   /*** derivatives for constraint 36 ***/

	J[159] = 1.;
	J[217] = -2.15810574551853;

   /*** derivatives for constraint 37 ***/

	J[162] = 1.;
	J[218] = 2.15810574551853;

   /*** derivatives for constraint 38 ***/

	J[142] = 1.;

   /*** derivatives for constraint 39 ***/

	J[163] = 1.;

   /*** derivatives for constraint 40 ***/

	J[13] = -1.;
	J[100] = 1.;
	J[143] = -1.;

   /*** derivatives for constraint 41 ***/

	J[16] = -1.;
	J[106] = 1.;
	J[164] = -1.;

   /*** derivatives for constraint 42 ***/

	J[14] = 1.;
	J[55] = -2.87747432735804;

   /*** derivatives for constraint 43 ***/

	J[56] = 2.87747432735804;
	J[144] = 1.;

   /*** derivatives for constraint 44 ***/

	J[17] = 1.;
	J[57] = -2.03277599268042;

   /*** derivatives for constraint 45 ***/

	J[58] = 2.03277599268042;
	J[165] = 1.;

   /*** derivatives for constraint 46 ***/

	J[145] = -1.;
	J[169] = 1.;

   /*** derivatives for constraint 47 ***/

	J[151] = -0.5;
	J[170] = 1.;

   /*** derivatives for constraint 48 ***/

	J[148] = 1.;

   /*** derivatives for constraint 49 ***/

	J[154] = 1.;

   /*** derivatives for constraint 50 ***/

	J[173] = 1.;

   /*** derivatives for constraint 51 ***/

	J[102] = 1.;
	J[146] = -1.;
	J[149] = -1.;

   /*** derivatives for constraint 52 ***/

	J[103] = 1.;
	J[152] = -1.;
	J[155] = -1.;

   /*** derivatives for constraint 53 ***/

	J[109] = 1.;
	J[171] = -1.;
	J[174] = -1.;

   /*** derivatives for constraint 54 ***/

	J[147] = 1.;
	J[223] = -2.87747432735804;

   /*** derivatives for constraint 55 ***/

	J[150] = 1.;
	J[224] = 2.87747432735804;

   /*** derivatives for constraint 56 ***/

	J[153] = 1.;
	J[225] = -7.;

   /*** derivatives for constraint 57 ***/

	J[156] = 1.;
	J[226] = 7.;

   /*** derivatives for constraint 58 ***/

	J[172] = 1.;
	J[227] = -3.5;

   /*** derivatives for constraint 59 ***/

	J[175] = 1.;
	J[228] = 3.5;

   /*** derivatives for constraint 60 ***/

	J[176] = 1.;

   /*** derivatives for constraint 61 ***/

	J[194] = 1.;

   /*** derivatives for constraint 62 ***/

	J[22] = -1.;
	J[111] = 1.;
	J[177] = -1.;

   /*** derivatives for constraint 63 ***/

	J[28] = -1.;
	J[119] = 1.;
	J[195] = -1.;

   /*** derivatives for constraint 64 ***/

	J[23] = 1.;
	J[63] = -2.15810574551853;

   /*** derivatives for constraint 65 ***/

	J[64] = 2.15810574551853;
	J[178] = 1.;

   /*** derivatives for constraint 66 ***/

	J[29] = 1.;
	J[65] = -1.43746550029693;

   /*** derivatives for constraint 67 ***/

	J[66] = 1.43746550029693;
	J[196] = 1.;

   /*** derivatives for constraint 68 ***/

	J[179] = 1.;

   /*** derivatives for constraint 69 ***/

	J[197] = 1.;

   /*** derivatives for constraint 70 ***/

	J[25] = -1.;
	J[113] = 1.;
	J[180] = -1.;

   /*** derivatives for constraint 71 ***/

	J[31] = -1.;
	J[120] = 1.;
	J[198] = -1.;

   /*** derivatives for constraint 72 ***/

	J[26] = 1.;
	J[70] = -2.15810574551853;

   /*** derivatives for constraint 73 ***/

	J[71] = 2.15810574551853;
	J[181] = 1.;

   /*** derivatives for constraint 74 ***/

	J[32] = 1.;
	J[72] = -1.03497516021379;

   /*** derivatives for constraint 75 ***/

	J[73] = 1.03497516021379;
	J[199] = 1.;

   /*** derivatives for constraint 76 ***/

	J[166] = 1.;

   /*** derivatives for constraint 77 ***/

	J[200] = 1.;

   /*** derivatives for constraint 78 ***/

	J[19] = -1.;
	J[107] = 1.;
	J[167] = -1.;

   /*** derivatives for constraint 79 ***/

	J[34] = -1.;
	J[121] = 1.;
	J[201] = -1.;

   /*** derivatives for constraint 80 ***/

	J[20] = 1.;
	J[77] = -2.03277599268042;

   /*** derivatives for constraint 81 ***/

	J[78] = 2.03277599268042;
	J[168] = 1.;

   /*** derivatives for constraint 82 ***/

	J[35] = 1.;
	J[79] = -1.10947836929589;

   /*** derivatives for constraint 83 ***/

	J[80] = 1.10947836929589;
	J[202] = 1.;

   /*** derivatives for constraint 84 ***/

	J[182] = -0.9;
	J[203] = 1.;

   /*** derivatives for constraint 85 ***/

	J[185] = 1.;

   /*** derivatives for constraint 86 ***/

	J[206] = 1.;

   /*** derivatives for constraint 87 ***/

	J[115] = 1.;
	J[183] = -1.;
	J[186] = -1.;

   /*** derivatives for constraint 88 ***/

	J[122] = 1.;
	J[204] = -1.;
	J[207] = -1.;

   /*** derivatives for constraint 89 ***/

	J[184] = 1.;
	J[232] = -3.5;

   /*** derivatives for constraint 90 ***/

	J[187] = 1.;
	J[233] = 3.5;

   /*** derivatives for constraint 91 ***/

	J[205] = 1.;
	J[234] = -3.15;

   /*** derivatives for constraint 92 ***/

	J[208] = 1.;
	J[235] = 3.15;

   /*** derivatives for constraint 93 ***/

	J[188] = -0.6;
	J[209] = 1.;

   /*** derivatives for constraint 94 ***/

	J[191] = 1.;

   /*** derivatives for constraint 95 ***/

	J[212] = 1.;

   /*** derivatives for constraint 96 ***/

	J[117] = 1.;
	J[189] = -1.;
	J[192] = -1.;

   /*** derivatives for constraint 97 ***/

	J[123] = 1.;
	J[210] = -1.;
	J[213] = -1.;

   /*** derivatives for constraint 98 ***/

	J[190] = 1.;
	J[237] = -3.5;

   /*** derivatives for constraint 99 ***/

	J[193] = 1.;
	J[238] = 3.5;

   /*** derivatives for constraint 100 ***/

	J[211] = 1.;
	J[239] = -2.1;

   /*** derivatives for constraint 101 ***/

	J[214] = 1.;
	J[240] = 2.1;

   /*** derivatives for constraint 102 ***/

	J[41] = 1.;
	J[50] = 1.;

   /*** derivatives for constraint 103 ***/

	J[67] = 1.;
	J[74] = 1.;
	J[219] = -1.;

   /*** derivatives for constraint 104 ***/

	J[59] = -1.;
	J[81] = 1.;

   /*** derivatives for constraint 105 ***/

	J[42] = 1.;
	J[51] = 1.;
	J[220] = -1.;

   /*** derivatives for constraint 106 ***/

	J[43] = 1.;
	J[52] = 1.;
	J[60] = -1.;

   /*** derivatives for constraint 107 ***/

	J[44] = 1.;
	J[53] = 1.;
	J[229] = -1.;

   /*** derivatives for constraint 108 ***/

	J[68] = -1.;
	J[221] = 1.;

   /*** derivatives for constraint 109 ***/

	J[75] = -1.;
	J[222] = 1.;

   /*** derivatives for constraint 110 ***/

	J[61] = 1.;
	J[82] = -1.;

   /*** derivatives for constraint 111 ***/

	J[230] = 1.;
	J[236] = -1.;

   /*** derivatives for constraint 112 ***/

	J[231] = 1.;
	J[241] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
