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
 fint m3_auxcom_[1] = { 6 /* nlc */ };
 fint m3_funcom_[185] = {
	26 /* nvar */,
	1 /* nobj */,
	43 /* ncon */,
	152 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	9,
	17,
	25,
	33,
	41,
	49,
	51,
	53,
	55,
	57,
	59,
	61,
	64,
	67,
	78,
	89,
	99,
	109,
	119,
	129,
	133,
	137,
	141,
	145,
	149,
	153,

	/* rownos */
	1,
	2,
	8,
	9,
	24,
	25,
	32,
	33,
	3,
	4,
	12,
	13,
	24,
	25,
	40,
	41,
	5,
	6,
	16,
	17,
	32,
	33,
	40,
	41,
	1,
	2,
	10,
	11,
	26,
	27,
	34,
	35,
	3,
	4,
	14,
	15,
	26,
	27,
	42,
	43,
	5,
	6,
	18,
	19,
	34,
	35,
	42,
	43,
	20,
	21,
	22,
	23,
	28,
	29,
	30,
	31,
	36,
	37,
	38,
	39,
	8,
	12,
	16,
	10,
	14,
	18,
	7,
	8,
	9,
	20,
	21,
	24,
	25,
	28,
	29,
	32,
	33,
	7,
	12,
	13,
	20,
	21,
	24,
	25,
	36,
	37,
	40,
	41,
	16,
	17,
	28,
	29,
	32,
	33,
	36,
	37,
	40,
	41,
	10,
	11,
	22,
	23,
	26,
	27,
	30,
	31,
	34,
	35,
	14,
	15,
	22,
	23,
	26,
	27,
	38,
	39,
	42,
	43,
	18,
	19,
	30,
	31,
	34,
	35,
	38,
	39,
	42,
	43,
	24,
	25,
	26,
	27,
	24,
	25,
	26,
	27,
	32,
	33,
	34,
	35,
	32,
	33,
	34,
	35,
	40,
	41,
	42,
	43,
	40,
	41,
	42,
	43 };

 real m3_boundc_[1+52+86] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		2.,
		5.4772,
		3.,
		6.7081,
		3.8,
		7.5498,
		1.8258,
		5.,
		2.2361,
		5.,
		2.5166,
		5.,
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
		10.,
		10.,
		5.,
		5.,
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
		10.,
		-1.7e308,
		5.,
		-1.7e308,
		10.,
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
		10.,
		-1.7e308,
		5.,
		-1.7e308,
		10.,
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
		10.,
		-1.7e308,
		5.,
		-1.7e308,
		10.};

 real m3_x0comn_[26] = {
		2.,
		3.,
		3.8,
		1.8258,
		2.2361,
		2.5166,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		10.,
		5.,
		0.,
		0.,
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

 static real m3_pd[6];
static real m3_old_x[26];
static int m3_xkind = -1;

 static int
m3_xcheck(real *x)
{
	real *x1 = m3_old_x, *xe = x + 26;
	errno = 0;
	if (m3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	m3_xkind = 0;
	return 1;
	}
 real
m3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (m3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 6.*x[8];
	rv += 6.*x[9];
	rv += 6.*x[10];
	rv += 6.*x[11];
	;}

	if (wantfg & 2) {
	g[8] = 6.;
	g[9] = 6.;
	g[10] = 6.;
	g[11] = 6.;
	}

	return rv;
}

 void
m3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (m3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 10. / x[0];
	m3_pd[0] = -v[0] / x[0];
	t1 = v[0] + -x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[0] = 10. / x[3];
	m3_pd[1] = -v[0] / x[3];
	t1 = v[0] + -x[0];
	c[1] = t1;

  /***  constraint 3  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 15. / x[1];
	m3_pd[2] = -v[0] / x[1];
	t1 = v[0] + -x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[0] = 15. / x[4];
	m3_pd[3] = -v[0] / x[4];
	t1 = v[0] + -x[1];
	c[3] = t1;

  /***  constraint 5  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 19. / x[2];
	m3_pd[4] = -v[0] / x[2];
	t1 = v[0] + -x[5];
	c[4] = t1;

  /***  constraint 6  ***/

	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[0] = 19. / x[5];
	m3_pd[5] = -v[0] / x[5];
	t1 = v[0] + -x[2];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[14];
	t1 += -x[15];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 0.5*x[0];
	t1 += -x[12];
	t1 += x[14];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 0.5*x[0];
	t1 += -x[14];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 0.5*x[3];
	t1 += -x[13];
	t1 += x[17];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 0.5*x[3];
	t1 += -x[17];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 0.5*x[1];
	t1 += -x[12];
	t1 += x[15];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 0.5*x[1];
	t1 += -x[15];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 0.5*x[4];
	t1 += -x[13];
	t1 += x[18];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 0.5*x[4];
	t1 += -x[18];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 0.5*x[2];
	t1 += -x[12];
	t1 += x[16];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = 0.5*x[2];
	t1 += -x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 0.5*x[5];
	t1 += -x[13];
	t1 += x[19];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = 0.5*x[5];
	t1 += -x[19];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[6];
	t1 += x[14];
	t1 += -x[15];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[6];
	t1 += -x[14];
	t1 += x[15];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[7];
	t1 += x[17];
	t1 += -x[18];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[7];
	t1 += -x[17];
	t1 += x[18];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = 0.5*x[0];
	t1 += 0.5*x[1];
	t1 += -x[14];
	t1 += x[15];
	t1 += -10.*x[20];
	t1 += -10.*x[21];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = 0.5*x[0];
	t1 += 0.5*x[1];
	t1 += x[14];
	t1 += -x[15];
	t1 += -10.*x[20];
	t1 += 10.*x[21];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = 0.5*x[3];
	t1 += 0.5*x[4];
	t1 += -x[17];
	t1 += x[18];
	t1 += 5.*x[20];
	t1 += -5.*x[21];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = 0.5*x[3];
	t1 += 0.5*x[4];
	t1 += x[17];
	t1 += -x[18];
	t1 += 5.*x[20];
	t1 += 5.*x[21];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[8];
	t1 += x[14];
	t1 += -x[16];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[8];
	t1 += -x[14];
	t1 += x[16];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[9];
	t1 += x[17];
	t1 += -x[19];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[9];
	t1 += -x[17];
	t1 += x[19];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = 0.5*x[0];
	t1 += 0.5*x[2];
	t1 += -x[14];
	t1 += x[16];
	t1 += -10.*x[22];
	t1 += -10.*x[23];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = 0.5*x[0];
	t1 += 0.5*x[2];
	t1 += x[14];
	t1 += -x[16];
	t1 += -10.*x[22];
	t1 += 10.*x[23];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = 0.5*x[3];
	t1 += 0.5*x[5];
	t1 += -x[17];
	t1 += x[19];
	t1 += 5.*x[22];
	t1 += -5.*x[23];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = 0.5*x[3];
	t1 += 0.5*x[5];
	t1 += x[17];
	t1 += -x[19];
	t1 += 5.*x[22];
	t1 += 5.*x[23];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[10];
	t1 += x[15];
	t1 += -x[16];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[10];
	t1 += -x[15];
	t1 += x[16];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[11];
	t1 += x[18];
	t1 += -x[19];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[11];
	t1 += -x[18];
	t1 += x[19];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = 0.5*x[1];
	t1 += 0.5*x[2];
	t1 += -x[15];
	t1 += x[16];
	t1 += -10.*x[24];
	t1 += -10.*x[25];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = 0.5*x[1];
	t1 += 0.5*x[2];
	t1 += x[15];
	t1 += -x[16];
	t1 += -10.*x[24];
	t1 += 10.*x[25];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = 0.5*x[4];
	t1 += 0.5*x[5];
	t1 += -x[18];
	t1 += x[19];
	t1 += 5.*x[24];
	t1 += -5.*x[25];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = 0.5*x[4];
	t1 += 0.5*x[5];
	t1 += x[18];
	t1 += -x[19];
	t1 += 5.*x[24];
	t1 += 5.*x[25];
	c[42] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = m3_pd[0];
	J[24] = -1.;

   /*** derivatives for constraint 2 ***/

	J[25] = m3_pd[1];
	J[1] = -1.;

   /*** derivatives for constraint 3 ***/

	J[8] = m3_pd[2];
	J[32] = -1.;

   /*** derivatives for constraint 4 ***/

	J[33] = m3_pd[3];
	J[9] = -1.;

   /*** derivatives for constraint 5 ***/

	J[16] = m3_pd[4];
	J[40] = -1.;

   /*** derivatives for constraint 6 ***/

	J[41] = m3_pd[5];
	J[17] = -1.;

   /*** derivatives for constraint 7 ***/

	J[66] = 1.;
	J[77] = -1.;

   /*** derivatives for constraint 8 ***/

	J[2] = 0.5;
	J[60] = -1.;
	J[67] = 1.;

   /*** derivatives for constraint 9 ***/

	J[3] = 0.5;
	J[68] = -1.;

   /*** derivatives for constraint 10 ***/

	J[26] = 0.5;
	J[63] = -1.;
	J[98] = 1.;

   /*** derivatives for constraint 11 ***/

	J[27] = 0.5;
	J[99] = -1.;

   /*** derivatives for constraint 12 ***/

	J[10] = 0.5;
	J[61] = -1.;
	J[78] = 1.;

   /*** derivatives for constraint 13 ***/

	J[11] = 0.5;
	J[79] = -1.;

   /*** derivatives for constraint 14 ***/

	J[34] = 0.5;
	J[64] = -1.;
	J[108] = 1.;

   /*** derivatives for constraint 15 ***/

	J[35] = 0.5;
	J[109] = -1.;

   /*** derivatives for constraint 16 ***/

	J[18] = 0.5;
	J[62] = -1.;
	J[88] = 1.;

   /*** derivatives for constraint 17 ***/

	J[19] = 0.5;
	J[89] = -1.;

   /*** derivatives for constraint 18 ***/

	J[42] = 0.5;
	J[65] = -1.;
	J[118] = 1.;

   /*** derivatives for constraint 19 ***/

	J[43] = 0.5;
	J[119] = -1.;

   /*** derivatives for constraint 20 ***/

	J[48] = -1.;
	J[69] = 1.;
	J[80] = -1.;

   /*** derivatives for constraint 21 ***/

	J[49] = -1.;
	J[70] = -1.;
	J[81] = 1.;

   /*** derivatives for constraint 22 ***/

	J[50] = -1.;
	J[100] = 1.;
	J[110] = -1.;

   /*** derivatives for constraint 23 ***/

	J[51] = -1.;
	J[101] = -1.;
	J[111] = 1.;

   /*** derivatives for constraint 24 ***/

	J[4] = 0.5;
	J[12] = 0.5;
	J[71] = -1.;
	J[82] = 1.;
	J[128] = -10.;
	J[132] = -10.;

   /*** derivatives for constraint 25 ***/

	J[5] = 0.5;
	J[13] = 0.5;
	J[72] = 1.;
	J[83] = -1.;
	J[129] = -10.;
	J[133] = 10.;

   /*** derivatives for constraint 26 ***/

	J[28] = 0.5;
	J[36] = 0.5;
	J[102] = -1.;
	J[112] = 1.;
	J[130] = 5.;
	J[134] = -5.;

   /*** derivatives for constraint 27 ***/

	J[29] = 0.5;
	J[37] = 0.5;
	J[103] = 1.;
	J[113] = -1.;
	J[131] = 5.;
	J[135] = 5.;

   /*** derivatives for constraint 28 ***/

	J[52] = -1.;
	J[73] = 1.;
	J[90] = -1.;

   /*** derivatives for constraint 29 ***/

	J[53] = -1.;
	J[74] = -1.;
	J[91] = 1.;

   /*** derivatives for constraint 30 ***/

	J[54] = -1.;
	J[104] = 1.;
	J[120] = -1.;

   /*** derivatives for constraint 31 ***/

	J[55] = -1.;
	J[105] = -1.;
	J[121] = 1.;

   /*** derivatives for constraint 32 ***/

	J[6] = 0.5;
	J[20] = 0.5;
	J[75] = -1.;
	J[92] = 1.;
	J[136] = -10.;
	J[140] = -10.;

   /*** derivatives for constraint 33 ***/

	J[7] = 0.5;
	J[21] = 0.5;
	J[76] = 1.;
	J[93] = -1.;
	J[137] = -10.;
	J[141] = 10.;

   /*** derivatives for constraint 34 ***/

	J[30] = 0.5;
	J[44] = 0.5;
	J[106] = -1.;
	J[122] = 1.;
	J[138] = 5.;
	J[142] = -5.;

   /*** derivatives for constraint 35 ***/

	J[31] = 0.5;
	J[45] = 0.5;
	J[107] = 1.;
	J[123] = -1.;
	J[139] = 5.;
	J[143] = 5.;

   /*** derivatives for constraint 36 ***/

	J[56] = -1.;
	J[84] = 1.;
	J[94] = -1.;

   /*** derivatives for constraint 37 ***/

	J[57] = -1.;
	J[85] = -1.;
	J[95] = 1.;

   /*** derivatives for constraint 38 ***/

	J[58] = -1.;
	J[114] = 1.;
	J[124] = -1.;

   /*** derivatives for constraint 39 ***/

	J[59] = -1.;
	J[115] = -1.;
	J[125] = 1.;

   /*** derivatives for constraint 40 ***/

	J[14] = 0.5;
	J[22] = 0.5;
	J[86] = -1.;
	J[96] = 1.;
	J[144] = -10.;
	J[148] = -10.;

   /*** derivatives for constraint 41 ***/

	J[15] = 0.5;
	J[23] = 0.5;
	J[87] = 1.;
	J[97] = -1.;
	J[145] = -10.;
	J[149] = 10.;

   /*** derivatives for constraint 42 ***/

	J[38] = 0.5;
	J[46] = 0.5;
	J[116] = -1.;
	J[126] = 1.;
	J[146] = 5.;
	J[150] = -5.;

   /*** derivatives for constraint 43 ***/

	J[39] = 0.5;
	J[47] = 0.5;
	J[117] = 1.;
	J[127] = -1.;
	J[147] = 5.;
	J[151] = 5.;
	}
}
#ifdef __cplusplus
	}
#endif
