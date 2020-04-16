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
 fint syn10m_auxcom_[1] = { 6 /* nlc */ };
 fint syn10m_funcom_[178] = {
	35 /* nvar */,
	1 /* nobj */,
	54 /* ncon */,
	136 /* nzc */,
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
	21,
	24,
	27,
	29,
	30,
	32,
	36,
	40,
	43,
	47,
	53,
	57,
	61,
	62,
	64,
	66,
	68,
	71,
	74,
	81,
	88,
	96,
	102,
	112,
	117,
	122,
	127,
	132,
	137,

	/* rownos */
	1,
	7,
	13,
	2,
	7,
	15,
	3,
	10,
	21,
	3,
	6,
	22,
	34,
	4,
	11,
	30,
	5,
	11,
	32,
	7,
	1,
	8,
	14,
	2,
	8,
	16,
	8,
	9,
	9,
	9,
	10,
	10,
	17,
	18,
	19,
	10,
	23,
	24,
	27,
	25,
	26,
	28,
	11,
	17,
	18,
	20,
	12,
	23,
	24,
	25,
	26,
	29,
	12,
	36,
	37,
	38,
	12,
	40,
	41,
	42,
	12,
	4,
	31,
	5,
	33,
	6,
	35,
	36,
	37,
	39,
	40,
	41,
	43,
	1,
	13,
	14,
	44,
	47,
	48,
	49,
	2,
	15,
	16,
	44,
	47,
	48,
	49,
	17,
	18,
	19,
	20,
	45,
	47,
	50,
	51,
	3,
	21,
	22,
	46,
	48,
	52,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	49,
	53,
	54,
	4,
	30,
	31,
	45,
	50,
	5,
	32,
	33,
	45,
	51,
	6,
	34,
	35,
	46,
	52,
	36,
	37,
	38,
	39,
	53,
	40,
	41,
	42,
	43,
	54 };

 real syn10m_boundc_[1+70+108] /* Infinity, variable bounds, constraint bounds */ = {
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

 real syn10m_x0comn_[35] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn10m_pd[10];
static real syn10m_old_x[35];
static int syn10m_xkind = -1;

 static int
syn10m_xcheck(real *x)
{
	real *x1 = syn10m_old_x, *xe = x + 35;
	errno = 0;
	if (syn10m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn10m_xkind = 0;
	return 1;
	}
 real
syn10m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn10m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 5.*x[10];
	rv += -2.*x[14];
	rv += 200.*x[19];
	rv += 250.*x[20];
	rv += 200.*x[21];
	rv += 200.*x[22];
	rv += 500.*x[23];
	rv += 350.*x[24];
	rv += -5.*x[25];
	rv += -8.*x[26];
	rv += -6.*x[27];
	rv += -10.*x[28];
	rv += -6.*x[29];
	rv += -7.*x[30];
	rv += -4.*x[31];
	rv += -5.*x[32];
	rv += -2.*x[33];
	rv += -4.*x[34];
	;}

	if (wantfg & 2) {
	g[10] = 5.;
	g[14] = -2.;
	g[19] = 200.;
	g[20] = 250.;
	g[21] = 200.;
	g[22] = 200.;
	g[23] = 500.;
	g[24] = 350.;
	g[25] = -5.;
	g[26] = -8.;
	g[27] = -6.;
	g[28] = -10.;
	g[29] = -6.;
	g[30] = -7.;
	g[31] = -4.;
	g[32] = -5.;
	g[33] = -2.;
	g[34] = -4.;
	}

	return rv;
}

 void
syn10m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (syn10m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[7];
	t1 += x[25];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	syn10m_pd[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m_pd[2] = 1. / v[0];
	v[0] = -1.2 * syn10m_pd[1];
	t1 = v[0] + x[8];
	t1 += x[26];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + 1.;
	syn10m_pd[3] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m_pd[4] = 1. / v[0];
	v[0] = -1.5 * syn10m_pd[3];
	t1 = v[0] + x[3];
	t1 += x[28];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[4] + 1.;
	syn10m_pd[5] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m_pd[6] = 1. / v[0];
	v[0] = -1.25 * syn10m_pd[5];
	t1 = v[0] + x[20];
	t1 += x[30];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[5] + 1.;
	syn10m_pd[7] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m_pd[8] = 1. / v[0];
	v[0] = -0.9 * syn10m_pd[7];
	t1 = v[0] + x[21];
	t1 += x[31];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[3] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn10m_pd[9] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[22];
	t1 += x[32];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[7];
	t1 += -x[8];
	t1 += x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[9];
	t1 += -x[10];
	t1 += -x[11];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[2];
	t1 += x[11];
	t1 += -x[12];
	t1 += -x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += x[15];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += -10.*x[25];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[7];
	t1 += -2.39789527279837*x[25];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[1];
	t1 += -10.*x[26];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[8];
	t1 += -2.87747432735804*x[26];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -0.75*x[12];
	t1 += x[15];
	t1 += x[27];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -0.75*x[12];
	t1 += x[15];
	t1 += -x[27];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[12];
	t1 += -2.87747432735804*x[27];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[15];
	t1 += -2.15810574551853*x[27];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[2];
	t1 += -2.87747432735804*x[28];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[3];
	t1 += -2.03277599268042*x[28];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[13];
	t1 += x[16];
	t1 += x[29];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[13];
	t1 += x[16];
	t1 += -x[29];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.5*x[14];
	t1 += x[16];
	t1 += x[29];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.5*x[14];
	t1 += x[16];
	t1 += -x[29];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[13];
	t1 += -2.87747432735804*x[29];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[14];
	t1 += -7.*x[29];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[16];
	t1 += -3.5*x[29];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[4];
	t1 += -2.15810574551853*x[30];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[20];
	t1 += -1.43746550029693*x[30];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[5];
	t1 += -2.15810574551853*x[31];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[21];
	t1 += -1.03497516021379*x[31];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[3];
	t1 += -2.03277599268042*x[32];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[22];
	t1 += -1.10947836929589*x[32];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -0.9*x[17];
	t1 += x[23];
	t1 += x[33];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -0.9*x[17];
	t1 += x[23];
	t1 += -x[33];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[17];
	t1 += -3.5*x[33];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[23];
	t1 += -3.15*x[33];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -0.6*x[18];
	t1 += x[24];
	t1 += x[34];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -0.6*x[18];
	t1 += x[24];
	t1 += -x[34];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[18];
	t1 += -3.5*x[34];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[24];
	t1 += -2.1*x[34];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[25];
	t1 += x[26];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[27];
	t1 += x[30];
	t1 += x[31];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[28];
	t1 += x[32];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += -x[27];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += -x[28];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += -x[29];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[27];
	t1 += -x[30];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[27];
	t1 += -x[31];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[28];
	t1 += -x[32];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[29];
	t1 += -x[33];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[29];
	t1 += -x[34];
	c[53] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -syn10m_pd[0];
	J[20] = 1.;
	J[73] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -1.2*syn10m_pd[2];
	J[3] = dv[0];
	J[23] = 1.;
	J[80] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -1.5*syn10m_pd[4];
	J[6] = dv[0];
	J[9] = 1.;
	J[95] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -1.25*syn10m_pd[6];
	J[13] = dv[0];
	J[61] = 1.;
	J[111] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -0.9*syn10m_pd[8];
	J[16] = dv[0];
	J[63] = 1.;
	J[116] = 1.;

   /*** derivatives for constraint 6 ***/

	J[10] = -syn10m_pd[9];
	J[65] = 1.;
	J[121] = 1.;

   /*** derivatives for constraint 7 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[19] = 1.;

   /*** derivatives for constraint 8 ***/

	J[21] = -1.;
	J[24] = -1.;
	J[26] = 1.;

   /*** derivatives for constraint 9 ***/

	J[27] = 1.;
	J[28] = -1.;
	J[29] = -1.;

   /*** derivatives for constraint 10 ***/

	J[7] = -1.;
	J[30] = 1.;
	J[31] = -1.;
	J[35] = -1.;

   /*** derivatives for constraint 11 ***/

	J[14] = -1.;
	J[17] = -1.;
	J[42] = 1.;

   /*** derivatives for constraint 12 ***/

	J[46] = 1.;
	J[52] = -1.;
	J[56] = -1.;
	J[60] = -1.;

   /*** derivatives for constraint 13 ***/

	J[2] = 1.;
	J[74] = -10.;

   /*** derivatives for constraint 14 ***/

	J[22] = 1.;
	J[75] = -2.39789527279837;

   /*** derivatives for constraint 15 ***/

	J[5] = 1.;
	J[81] = -10.;

   /*** derivatives for constraint 16 ***/

	J[25] = 1.;
	J[82] = -2.87747432735804;

   /*** derivatives for constraint 17 ***/

	J[32] = -0.75;
	J[43] = 1.;
	J[87] = 1.;

   /*** derivatives for constraint 18 ***/

	J[33] = -0.75;
	J[44] = 1.;
	J[88] = -1.;

   /*** derivatives for constraint 19 ***/

	J[34] = 1.;
	J[89] = -2.87747432735804;

   /*** derivatives for constraint 20 ***/

	J[45] = 1.;
	J[90] = -2.15810574551853;

   /*** derivatives for constraint 21 ***/

	J[8] = 1.;
	J[96] = -2.87747432735804;

   /*** derivatives for constraint 22 ***/

	J[11] = 1.;
	J[97] = -2.03277599268042;

   /*** derivatives for constraint 23 ***/

	J[36] = -1.;
	J[47] = 1.;
	J[101] = 1.;

   /*** derivatives for constraint 24 ***/

	J[37] = -1.;
	J[48] = 1.;
	J[102] = -1.;

   /*** derivatives for constraint 25 ***/

	J[39] = -0.5;
	J[49] = 1.;
	J[103] = 1.;

   /*** derivatives for constraint 26 ***/

	J[40] = -0.5;
	J[50] = 1.;
	J[104] = -1.;

   /*** derivatives for constraint 27 ***/

	J[38] = 1.;
	J[105] = -2.87747432735804;

   /*** derivatives for constraint 28 ***/

	J[41] = 1.;
	J[106] = -7.;

   /*** derivatives for constraint 29 ***/

	J[51] = 1.;
	J[107] = -3.5;

   /*** derivatives for constraint 30 ***/

	J[15] = 1.;
	J[112] = -2.15810574551853;

   /*** derivatives for constraint 31 ***/

	J[62] = 1.;
	J[113] = -1.43746550029693;

   /*** derivatives for constraint 32 ***/

	J[18] = 1.;
	J[117] = -2.15810574551853;

   /*** derivatives for constraint 33 ***/

	J[64] = 1.;
	J[118] = -1.03497516021379;

   /*** derivatives for constraint 34 ***/

	J[12] = 1.;
	J[122] = -2.03277599268042;

   /*** derivatives for constraint 35 ***/

	J[66] = 1.;
	J[123] = -1.10947836929589;

   /*** derivatives for constraint 36 ***/

	J[53] = -0.9;
	J[67] = 1.;
	J[126] = 1.;

   /*** derivatives for constraint 37 ***/

	J[54] = -0.9;
	J[68] = 1.;
	J[127] = -1.;

   /*** derivatives for constraint 38 ***/

	J[55] = 1.;
	J[128] = -3.5;

   /*** derivatives for constraint 39 ***/

	J[69] = 1.;
	J[129] = -3.15;

   /*** derivatives for constraint 40 ***/

	J[57] = -0.6;
	J[70] = 1.;
	J[131] = 1.;

   /*** derivatives for constraint 41 ***/

	J[58] = -0.6;
	J[71] = 1.;
	J[132] = -1.;

   /*** derivatives for constraint 42 ***/

	J[59] = 1.;
	J[133] = -3.5;

   /*** derivatives for constraint 43 ***/

	J[72] = 1.;
	J[134] = -2.1;

   /*** derivatives for constraint 44 ***/

	J[76] = 1.;
	J[83] = 1.;

   /*** derivatives for constraint 45 ***/

	J[91] = -1.;
	J[114] = 1.;
	J[119] = 1.;

   /*** derivatives for constraint 46 ***/

	J[98] = -1.;
	J[124] = 1.;

   /*** derivatives for constraint 47 ***/

	J[77] = 1.;
	J[84] = 1.;
	J[92] = -1.;

   /*** derivatives for constraint 48 ***/

	J[78] = 1.;
	J[85] = 1.;
	J[99] = -1.;

   /*** derivatives for constraint 49 ***/

	J[79] = 1.;
	J[86] = 1.;
	J[108] = -1.;

   /*** derivatives for constraint 50 ***/

	J[93] = 1.;
	J[115] = -1.;

   /*** derivatives for constraint 51 ***/

	J[94] = 1.;
	J[120] = -1.;

   /*** derivatives for constraint 52 ***/

	J[100] = 1.;
	J[125] = -1.;

   /*** derivatives for constraint 53 ***/

	J[109] = 1.;
	J[130] = -1.;

   /*** derivatives for constraint 54 ***/

	J[110] = 1.;
	J[135] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
