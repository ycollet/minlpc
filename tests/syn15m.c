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
 fint syn15m_auxcom_[1] = { 11 /* nlc */ };
 fint syn15m_funcom_[285] = {
	55 /* nvar */,
	1 /* nobj */,
	89 /* ncon */,
	223 /* nzc */,
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
	37,
	40,
	43,
	45,
	46,
	48,
	52,
	56,
	59,
	63,
	69,
	73,
	77,
	82,
	85,
	89,
	93,
	96,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	110,
	112,
	114,
	117,
	124,
	131,
	139,
	145,
	157,
	164,
	171,
	179,
	186,
	192,
	197,
	206,
	211,
	216,
	224,

	/* rownos */
	1,
	12,
	22,
	2,
	12,
	24,
	3,
	15,
	30,
	3,
	6,
	31,
	43,
	4,
	16,
	39,
	5,
	16,
	41,
	7,
	17,
	53,
	5,
	8,
	42,
	62,
	9,
	18,
	64,
	10,
	18,
	66,
	11,
	19,
	67,
	12,
	1,
	13,
	23,
	2,
	13,
	25,
	13,
	14,
	14,
	14,
	15,
	15,
	26,
	27,
	28,
	15,
	32,
	33,
	36,
	34,
	35,
	37,
	16,
	26,
	27,
	29,
	17,
	32,
	33,
	34,
	35,
	38,
	17,
	45,
	46,
	47,
	17,
	49,
	50,
	51,
	4,
	40,
	55,
	56,
	59,
	6,
	18,
	44,
	19,
	45,
	46,
	48,
	20,
	49,
	50,
	52,
	7,
	21,
	54,
	57,
	58,
	60,
	19,
	20,
	20,
	21,
	21,
	21,
	55,
	56,
	57,
	58,
	61,
	8,
	63,
	9,
	65,
	10,
	11,
	68,
	1,
	22,
	23,
	69,
	77,
	78,
	79,
	2,
	24,
	25,
	69,
	77,
	78,
	79,
	26,
	27,
	28,
	29,
	70,
	77,
	80,
	81,
	3,
	30,
	31,
	73,
	78,
	82,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	75,
	79,
	83,
	84,
	85,
	4,
	39,
	40,
	70,
	71,
	80,
	86,
	5,
	41,
	42,
	70,
	72,
	81,
	87,
	6,
	43,
	44,
	73,
	74,
	82,
	88,
	89,
	45,
	46,
	47,
	48,
	75,
	76,
	83,
	49,
	50,
	51,
	52,
	75,
	84,
	7,
	53,
	54,
	75,
	85,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	71,
	86,
	8,
	62,
	63,
	72,
	87,
	9,
	64,
	65,
	74,
	88,
	10,
	11,
	66,
	67,
	68,
	74,
	76,
	89 };

 real syn15m_boundc_[1+110+178] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.7e308};

 real syn15m_x0comn_[55] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn15m_pd[19];
static real syn15m_old_x[55];
static int syn15m_xkind = -1;

 static int
syn15m_xcheck(real *x)
{
	real *x1 = syn15m_old_x, *xe = x + 55;
	errno = 0;
	if (syn15m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn15m_xkind = 0;
	return 1;
	}
 real
syn15m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn15m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 5.*x[15];
	rv += 500.*x[27];
	rv += 350.*x[28];
	rv += 200.*x[36];
	rv += 250.*x[37];
	rv += 200.*x[38];
	rv += 200.*x[39];
	rv += -5.*x[40];
	rv += -8.*x[41];
	rv += -6.*x[42];
	rv += -10.*x[43];
	rv += -6.*x[44];
	rv += -7.*x[45];
	rv += -4.*x[46];
	rv += -5.*x[47];
	rv += -2.*x[48];
	rv += -4.*x[49];
	rv += -3.*x[50];
	rv += -7.*x[51];
	rv += -3.*x[52];
	rv += -2.*x[53];
	rv += -4.*x[54];
	;}

	if (wantfg & 2) {
	g[15] = 5.;
	g[27] = 500.;
	g[28] = 350.;
	g[36] = 200.;
	g[37] = 250.;
	g[38] = 200.;
	g[39] = 200.;
	g[40] = -5.;
	g[41] = -8.;
	g[42] = -6.;
	g[43] = -10.;
	g[44] = -6.;
	g[45] = -7.;
	g[46] = -4.;
	g[47] = -5.;
	g[48] = -2.;
	g[49] = -4.;
	g[50] = -3.;
	g[51] = -7.;
	g[52] = -3.;
	g[53] = -2.;
	g[54] = -4.;
	}

	return rv;
}

 void
syn15m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (syn15m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[12];
	t1 += x[40];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	syn15m_pd[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[2] = 1. / v[0];
	v[0] = -1.2 * syn15m_pd[1];
	t1 = v[0] + x[13];
	t1 += x[41];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + 1.;
	syn15m_pd[3] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[4] = 1. / v[0];
	v[0] = -1.5 * syn15m_pd[3];
	t1 = v[0] + x[3];
	t1 += x[43];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[4] + 1.;
	syn15m_pd[5] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[6] = 1. / v[0];
	v[0] = -1.25 * syn15m_pd[5];
	t1 = v[0] + x[24];
	t1 += x[45];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[5] + 1.;
	syn15m_pd[7] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[8] = 1. / v[0];
	v[0] = -0.9 * syn15m_pd[7];
	t1 = v[0] + x[7];
	t1 += x[46];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[3] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[9] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[25];
	t1 += x[47];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[6] + 1.;
	syn15m_pd[10] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[11] = 1. / v[0];
	v[0] = -1.1 * syn15m_pd[10];
	t1 = v[0] + x[28];
	t1 += x[50];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[7] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[12] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[37];
	t1 += x[52];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[8] + 1.;
	syn15m_pd[13] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[14] = 1. / v[0];
	v[0] = -0.7 * syn15m_pd[13];
	t1 = v[0] + x[38];
	t1 += x[53];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[9] + 1.;
	syn15m_pd[15] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[16] = 1. / v[0];
	v[0] = -0.65 * syn15m_pd[15];
	t1 = v[0] + x[39];
	t1 += x[54];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[10] + 1.;
	syn15m_pd[17] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn15m_pd[18] = 1. / v[0];
	v[0] = -0.65 * syn15m_pd[17];
	t1 = v[0] + x[39];
	t1 += x[54];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += x[14];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[14];
	t1 += -x[15];
	t1 += -x[16];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[2];
	t1 += x[16];
	t1 += -x[17];
	t1 += -x[18];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += x[20];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[6];
	t1 += x[21];
	t1 += -x[22];
	t1 += -x[23];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += x[25];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[10];
	t1 += -x[26];
	t1 += -x[30];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[27];
	t1 += -x[31];
	t1 += -x[32];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[28];
	t1 += -x[33];
	t1 += -x[34];
	t1 += -x[35];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[0];
	t1 += -10.*x[40];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[12];
	t1 += -2.39789527279837*x[40];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[1];
	t1 += -10.*x[41];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[13];
	t1 += -2.87747432735804*x[41];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.75*x[17];
	t1 += x[20];
	t1 += x[42];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -0.75*x[17];
	t1 += x[20];
	t1 += -x[42];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[17];
	t1 += -2.87747432735804*x[42];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[20];
	t1 += -2.15810574551853*x[42];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[2];
	t1 += -2.87747432735804*x[43];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[3];
	t1 += -2.03277599268042*x[43];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[18];
	t1 += x[21];
	t1 += x[44];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[18];
	t1 += x[21];
	t1 += -x[44];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -0.5*x[19];
	t1 += x[21];
	t1 += x[44];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -0.5*x[19];
	t1 += x[21];
	t1 += -x[44];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[18];
	t1 += -2.87747432735804*x[44];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[19];
	t1 += -7.*x[44];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[21];
	t1 += -3.5*x[44];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[4];
	t1 += -2.15810574551853*x[45];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[24];
	t1 += -1.43746550029693*x[45];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[5];
	t1 += -2.15810574551853*x[46];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[7];
	t1 += -1.03497516021379*x[46];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[3];
	t1 += -2.03277599268042*x[47];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[25];
	t1 += -1.10947836929589*x[47];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -0.9*x[22];
	t1 += x[26];
	t1 += x[48];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -0.9*x[22];
	t1 += x[26];
	t1 += -x[48];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[22];
	t1 += -3.5*x[48];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[26];
	t1 += -3.15*x[48];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -0.6*x[23];
	t1 += x[27];
	t1 += x[49];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -0.6*x[23];
	t1 += x[27];
	t1 += -x[49];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[23];
	t1 += -3.5*x[49];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[27];
	t1 += -2.1*x[49];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[6];
	t1 += -3.5*x[50];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[28];
	t1 += -1.6544851364539*x[50];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -0.9*x[24];
	t1 += x[36];
	t1 += x[51];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -0.9*x[24];
	t1 += x[36];
	t1 += -x[51];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[29];
	t1 += x[36];
	t1 += x[51];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[29];
	t1 += x[36];
	t1 += -x[51];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[24];
	t1 += -1.43746550029693*x[51];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[29];
	t1 += -5.*x[51];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[36];
	t1 += -5.*x[51];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[7];
	t1 += -1.03497516021379*x[52];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[37];
	t1 += -0.710483612536911*x[52];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[8];
	t1 += -1.10947836929589*x[53];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[38];
	t1 += -0.522508489006913*x[53];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[9];
	t1 += -1.10947836929589*x[54];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[10];
	t1 += -8.15*x[54];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[39];
	t1 += -1.43894002153683*x[54];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[40];
	t1 += x[41];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[42];
	t1 += x[45];
	t1 += x[46];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[45];
	t1 += x[51];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[46];
	t1 += x[52];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[43];
	t1 += x[47];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[47];
	t1 += x[53];
	t1 += x[54];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[44];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[48];
	t1 += x[54];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += -x[42];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += -x[43];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += -x[44];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[42];
	t1 += -x[45];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[42];
	t1 += -x[46];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[43];
	t1 += -x[47];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[44];
	t1 += -x[48];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[44];
	t1 += -x[49];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[44];
	t1 += -x[50];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[45];
	t1 += -x[51];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[46];
	t1 += -x[52];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[47];
	t1 += -x[53];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[47];
	t1 += -x[54];
	c[88] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -syn15m_pd[0];
	J[36] = 1.;
	J[116] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -1.2*syn15m_pd[2];
	J[3] = dv[0];
	J[39] = 1.;
	J[123] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -1.5*syn15m_pd[4];
	J[6] = dv[0];
	J[9] = 1.;
	J[138] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -1.25*syn15m_pd[6];
	J[13] = dv[0];
	J[76] = 1.;
	J[156] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -0.9*syn15m_pd[8];
	J[16] = dv[0];
	J[22] = 1.;
	J[163] = 1.;

   /*** derivatives for constraint 6 ***/

	J[10] = -syn15m_pd[9];
	J[81] = 1.;
	J[170] = 1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -1.1*syn15m_pd[11];
	J[19] = dv[0];
	J[92] = 1.;
	J[191] = 1.;

   /*** derivatives for constraint 8 ***/

	J[23] = -syn15m_pd[12];
	J[109] = 1.;
	J[205] = 1.;

   /*** derivatives for constraint 9 ***/

	dv[0] = -0.7*syn15m_pd[14];
	J[26] = dv[0];
	J[111] = 1.;
	J[210] = 1.;

   /*** derivatives for constraint 10 ***/

	dv[0] = -0.65*syn15m_pd[16];
	J[29] = dv[0];
	J[113] = 1.;
	J[215] = 1.;

   /*** derivatives for constraint 11 ***/

	dv[0] = -0.65*syn15m_pd[18];
	J[32] = dv[0];
	J[114] = 1.;
	J[216] = 1.;

   /*** derivatives for constraint 12 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[35] = 1.;

   /*** derivatives for constraint 13 ***/

	J[37] = -1.;
	J[40] = -1.;
	J[42] = 1.;

   /*** derivatives for constraint 14 ***/

	J[43] = 1.;
	J[44] = -1.;
	J[45] = -1.;

   /*** derivatives for constraint 15 ***/

	J[7] = -1.;
	J[46] = 1.;
	J[47] = -1.;
	J[51] = -1.;

   /*** derivatives for constraint 16 ***/

	J[14] = -1.;
	J[17] = -1.;
	J[58] = 1.;

   /*** derivatives for constraint 17 ***/

	J[20] = -1.;
	J[62] = 1.;
	J[68] = -1.;
	J[72] = -1.;

   /*** derivatives for constraint 18 ***/

	J[27] = -1.;
	J[30] = -1.;
	J[82] = 1.;

   /*** derivatives for constraint 19 ***/

	J[33] = 1.;
	J[84] = -1.;
	J[98] = -1.;

   /*** derivatives for constraint 20 ***/

	J[88] = 1.;
	J[99] = -1.;
	J[100] = -1.;

   /*** derivatives for constraint 21 ***/

	J[93] = 1.;
	J[101] = -1.;
	J[102] = -1.;
	J[103] = -1.;

   /*** derivatives for constraint 22 ***/

	J[2] = 1.;
	J[117] = -10.;

   /*** derivatives for constraint 23 ***/

	J[38] = 1.;
	J[118] = -2.39789527279837;

   /*** derivatives for constraint 24 ***/

	J[5] = 1.;
	J[124] = -10.;

   /*** derivatives for constraint 25 ***/

	J[41] = 1.;
	J[125] = -2.87747432735804;

   /*** derivatives for constraint 26 ***/

	J[48] = -0.75;
	J[59] = 1.;
	J[130] = 1.;

   /*** derivatives for constraint 27 ***/

	J[49] = -0.75;
	J[60] = 1.;
	J[131] = -1.;

   /*** derivatives for constraint 28 ***/

	J[50] = 1.;
	J[132] = -2.87747432735804;

   /*** derivatives for constraint 29 ***/

	J[61] = 1.;
	J[133] = -2.15810574551853;

   /*** derivatives for constraint 30 ***/

	J[8] = 1.;
	J[139] = -2.87747432735804;

   /*** derivatives for constraint 31 ***/

	J[11] = 1.;
	J[140] = -2.03277599268042;

   /*** derivatives for constraint 32 ***/

	J[52] = -1.;
	J[63] = 1.;
	J[144] = 1.;

   /*** derivatives for constraint 33 ***/

	J[53] = -1.;
	J[64] = 1.;
	J[145] = -1.;

   /*** derivatives for constraint 34 ***/

	J[55] = -0.5;
	J[65] = 1.;
	J[146] = 1.;

   /*** derivatives for constraint 35 ***/

	J[56] = -0.5;
	J[66] = 1.;
	J[147] = -1.;

   /*** derivatives for constraint 36 ***/

	J[54] = 1.;
	J[148] = -2.87747432735804;

   /*** derivatives for constraint 37 ***/

	J[57] = 1.;
	J[149] = -7.;

   /*** derivatives for constraint 38 ***/

	J[67] = 1.;
	J[150] = -3.5;

   /*** derivatives for constraint 39 ***/

	J[15] = 1.;
	J[157] = -2.15810574551853;

   /*** derivatives for constraint 40 ***/

	J[77] = 1.;
	J[158] = -1.43746550029693;

   /*** derivatives for constraint 41 ***/

	J[18] = 1.;
	J[164] = -2.15810574551853;

   /*** derivatives for constraint 42 ***/

	J[24] = 1.;
	J[165] = -1.03497516021379;

   /*** derivatives for constraint 43 ***/

	J[12] = 1.;
	J[171] = -2.03277599268042;

   /*** derivatives for constraint 44 ***/

	J[83] = 1.;
	J[172] = -1.10947836929589;

   /*** derivatives for constraint 45 ***/

	J[69] = -0.9;
	J[85] = 1.;
	J[178] = 1.;

   /*** derivatives for constraint 46 ***/

	J[70] = -0.9;
	J[86] = 1.;
	J[179] = -1.;

   /*** derivatives for constraint 47 ***/

	J[71] = 1.;
	J[180] = -3.5;

   /*** derivatives for constraint 48 ***/

	J[87] = 1.;
	J[181] = -3.15;

   /*** derivatives for constraint 49 ***/

	J[73] = -0.6;
	J[89] = 1.;
	J[185] = 1.;

   /*** derivatives for constraint 50 ***/

	J[74] = -0.6;
	J[90] = 1.;
	J[186] = -1.;

   /*** derivatives for constraint 51 ***/

	J[75] = 1.;
	J[187] = -3.5;

   /*** derivatives for constraint 52 ***/

	J[91] = 1.;
	J[188] = -2.1;

   /*** derivatives for constraint 53 ***/

	J[21] = 1.;
	J[192] = -3.5;

   /*** derivatives for constraint 54 ***/

	J[94] = 1.;
	J[193] = -1.6544851364539;

   /*** derivatives for constraint 55 ***/

	J[78] = -0.9;
	J[104] = 1.;
	J[196] = 1.;

   /*** derivatives for constraint 56 ***/

	J[79] = -0.9;
	J[105] = 1.;
	J[197] = -1.;

   /*** derivatives for constraint 57 ***/

	J[95] = -1.;
	J[106] = 1.;
	J[198] = 1.;

   /*** derivatives for constraint 58 ***/

	J[96] = -1.;
	J[107] = 1.;
	J[199] = -1.;

   /*** derivatives for constraint 59 ***/

	J[80] = 1.;
	J[200] = -1.43746550029693;

   /*** derivatives for constraint 60 ***/

	J[97] = 1.;
	J[201] = -5.;

   /*** derivatives for constraint 61 ***/

	J[108] = 1.;
	J[202] = -5.;

   /*** derivatives for constraint 62 ***/

	J[25] = 1.;
	J[206] = -1.03497516021379;

   /*** derivatives for constraint 63 ***/

	J[110] = 1.;
	J[207] = -0.710483612536911;

   /*** derivatives for constraint 64 ***/

	J[28] = 1.;
	J[211] = -1.10947836929589;

   /*** derivatives for constraint 65 ***/

	J[112] = 1.;
	J[212] = -0.522508489006913;

   /*** derivatives for constraint 66 ***/

	J[31] = 1.;
	J[217] = -1.10947836929589;

   /*** derivatives for constraint 67 ***/

	J[34] = 1.;
	J[218] = -8.15;

   /*** derivatives for constraint 68 ***/

	J[115] = 1.;
	J[219] = -1.43894002153683;

   /*** derivatives for constraint 69 ***/

	J[119] = 1.;
	J[126] = 1.;

   /*** derivatives for constraint 70 ***/

	J[134] = -1.;
	J[159] = 1.;
	J[166] = 1.;

   /*** derivatives for constraint 71 ***/

	J[160] = -1.;
	J[203] = 1.;

   /*** derivatives for constraint 72 ***/

	J[167] = -1.;
	J[208] = 1.;

   /*** derivatives for constraint 73 ***/

	J[141] = -1.;
	J[173] = 1.;

   /*** derivatives for constraint 74 ***/

	J[174] = -1.;
	J[213] = 1.;
	J[220] = 1.;

   /*** derivatives for constraint 75 ***/

	J[151] = -1.;
	J[182] = 1.;
	J[189] = 1.;
	J[194] = 1.;

   /*** derivatives for constraint 76 ***/

	J[183] = -1.;
	J[221] = 1.;

   /*** derivatives for constraint 77 ***/

	J[120] = 1.;
	J[127] = 1.;
	J[135] = -1.;

   /*** derivatives for constraint 78 ***/

	J[121] = 1.;
	J[128] = 1.;
	J[142] = -1.;

   /*** derivatives for constraint 79 ***/

	J[122] = 1.;
	J[129] = 1.;
	J[152] = -1.;

   /*** derivatives for constraint 80 ***/

	J[136] = 1.;
	J[161] = -1.;

   /*** derivatives for constraint 81 ***/

	J[137] = 1.;
	J[168] = -1.;

   /*** derivatives for constraint 82 ***/

	J[143] = 1.;
	J[175] = -1.;

   /*** derivatives for constraint 83 ***/

	J[153] = 1.;
	J[184] = -1.;

   /*** derivatives for constraint 84 ***/

	J[154] = 1.;
	J[190] = -1.;

   /*** derivatives for constraint 85 ***/

	J[155] = 1.;
	J[195] = -1.;

   /*** derivatives for constraint 86 ***/

	J[162] = 1.;
	J[204] = -1.;

   /*** derivatives for constraint 87 ***/

	J[169] = 1.;
	J[209] = -1.;

   /*** derivatives for constraint 88 ***/

	J[176] = 1.;
	J[214] = -1.;

   /*** derivatives for constraint 89 ***/

	J[177] = 1.;
	J[222] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
