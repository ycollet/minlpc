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
 fint slay04m_auxcom_[1] = { 0 /* nlc */ };
 fint slay04m_funcom_[219] = {
	44 /* nvar */,
	1 /* nobj */,
	54 /* ncon */,
	168 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	13,
	25,
	37,
	49,
	61,
	73,
	85,
	97,
	99,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	119,
	121,
	123,
	125,
	127,
	129,
	131,
	133,
	135,
	137,
	139,
	141,
	143,
	145,
	147,
	149,
	151,
	153,
	155,
	157,
	159,
	161,
	163,
	165,
	167,
	169,

	/* rownos */
	1,
	2,
	3,
	7,
	8,
	9,
	25,
	26,
	27,
	31,
	32,
	33,
	1,
	4,
	5,
	7,
	10,
	11,
	25,
	28,
	29,
	31,
	34,
	35,
	2,
	4,
	6,
	8,
	10,
	12,
	26,
	28,
	30,
	32,
	34,
	36,
	3,
	5,
	6,
	9,
	11,
	12,
	27,
	29,
	30,
	33,
	35,
	36,
	13,
	14,
	15,
	19,
	20,
	21,
	37,
	38,
	39,
	43,
	44,
	45,
	13,
	16,
	17,
	19,
	22,
	23,
	37,
	40,
	41,
	43,
	46,
	47,
	14,
	16,
	18,
	20,
	22,
	24,
	38,
	40,
	42,
	44,
	46,
	48,
	15,
	17,
	18,
	21,
	23,
	24,
	39,
	41,
	42,
	45,
	47,
	48,
	1,
	7,
	2,
	8,
	3,
	9,
	4,
	10,
	5,
	11,
	6,
	12,
	13,
	19,
	14,
	20,
	15,
	21,
	16,
	22,
	17,
	23,
	18,
	24,
	25,
	49,
	26,
	50,
	27,
	51,
	28,
	52,
	29,
	53,
	30,
	54,
	31,
	49,
	32,
	50,
	33,
	51,
	34,
	52,
	35,
	53,
	36,
	54,
	37,
	49,
	38,
	50,
	39,
	51,
	40,
	52,
	41,
	53,
	42,
	54,
	43,
	49,
	44,
	50,
	45,
	51,
	46,
	52,
	47,
	53,
	48,
	54 };

 real slay04m_boundc_[1+88+108] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		2.5,
		27.5,
		3.5,
		26.5,
		1.5,
		28.5,
		1.,
		29.,
		3.,
		27.,
		2.5,
		27.5,
		1.5,
		28.5,
		1.5,
		28.5,
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
		-1.7e308,
		24.,
		-1.7e308,
		26.,
		-1.7e308,
		26.5,
		-1.7e308,
		25.,
		-1.7e308,
		25.5,
		-1.7e308,
		27.5,
		-1.7e308,
		24.,
		-1.7e308,
		26.,
		-1.7e308,
		26.5,
		-1.7e308,
		25.,
		-1.7e308,
		25.5,
		-1.7e308,
		27.5,
		-1.7e308,
		24.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.5,
		-1.7e308,
		26.,
		-1.7e308,
		26.,
		-1.7e308,
		27.,
		-1.7e308,
		24.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.5,
		-1.7e308,
		26.,
		-1.7e308,
		26.,
		-1.7e308,
		27.,
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
		1.};

 real slay04m_x0comn_[44] = {
		2.5,
		3.5,
		1.5,
		1.,
		3.,
		2.5,
		1.5,
		1.5,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real slay04m_pd[16];
static real slay04m_old_x[44];
static int slay04m_xkind = -1;

 static int
slay04m_xcheck(real *x)
{
	real *x1 = slay04m_old_x, *xe = x + 44;
	errno = 0;
	if (slay04m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	slay04m_xkind = 0;
	return 1;
	}
 real
slay04m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[8], rv;
	fint wantfg = *needfg;
	if (slay04m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -4.;
	slay04m_pd[0] = v[0] * v[0];
	slay04m_pd[1] = v[0] + v[0];
	v[0] = 150. * slay04m_pd[0];
	v[1] = x[4] + -10.;
	slay04m_pd[2] = v[1] * v[1];
	slay04m_pd[3] = v[1] + v[1];
	v[1] = 150. * slay04m_pd[2];
	v[0] += v[1];
	v[1] = x[1] + -10.;
	slay04m_pd[4] = v[1] * v[1];
	slay04m_pd[5] = v[1] + v[1];
	v[1] = 390. * slay04m_pd[4];
	v[0] += v[1];
	v[1] = x[5] + -15.;
	slay04m_pd[6] = v[1] * v[1];
	slay04m_pd[7] = v[1] + v[1];
	v[1] = 390. * slay04m_pd[6];
	v[0] += v[1];
	v[1] = x[2] + -7.;
	slay04m_pd[8] = v[1] * v[1];
	slay04m_pd[9] = v[1] + v[1];
	v[1] = 240. * slay04m_pd[8];
	v[0] += v[1];
	v[1] = x[6] + -9.;
	slay04m_pd[10] = v[1] * v[1];
	slay04m_pd[11] = v[1] + v[1];
	v[1] = 240. * slay04m_pd[10];
	v[0] += v[1];
	v[1] = x[3] + -3.;
	slay04m_pd[12] = v[1] * v[1];
	slay04m_pd[13] = v[1] + v[1];
	v[1] = 70. * slay04m_pd[12];
	v[0] += v[1];
	v[1] = x[7] + -3.;
	slay04m_pd[14] = v[1] * v[1];
	slay04m_pd[15] = v[1] + v[1];
	v[1] = 70. * slay04m_pd[14];
	v[0] += v[1];
	rv = v[0] + 300.*x[8];
	rv += 240.*x[9];
	rv += 210.*x[10];
	rv += 100.*x[11];
	rv += 150.*x[12];
	rv += 120.*x[13];
	rv += 300.*x[14];
	rv += 240.*x[15];
	rv += 210.*x[16];
	rv += 100.*x[17];
	rv += 150.*x[18];
	rv += 120.*x[19];
	;}

	if (wantfg & 2) {
	dv[0] = 70.*slay04m_pd[15];
	g[7] = dv[0];
	dv[1] = 70.*slay04m_pd[13];
	g[3] = dv[1];
	dv[2] = 240.*slay04m_pd[11];
	g[6] = dv[2];
	dv[3] = 240.*slay04m_pd[9];
	g[2] = dv[3];
	dv[4] = 390.*slay04m_pd[7];
	g[5] = dv[4];
	dv[5] = 390.*slay04m_pd[5];
	g[1] = dv[5];
	dv[6] = 150.*slay04m_pd[3];
	g[4] = dv[6];
	dv[7] = 150.*slay04m_pd[1];
	g[0] = dv[7];
	g[8] = 300.;
	g[9] = 240.;
	g[10] = 210.;
	g[11] = 100.;
	g[12] = 150.;
	g[13] = 120.;
	g[14] = 300.;
	g[15] = 240.;
	g[16] = 210.;
	g[17] = 100.;
	g[18] = 150.;
	g[19] = 120.;
	}

	return rv;
}

 void
slay04m_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (slay04m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += x[10];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[11];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += x[12];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[13];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[8];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += x[10];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[11];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += x[12];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += x[13];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[14];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[4];
	t1 += x[6];
	t1 += x[15];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[4];
	t1 += x[7];
	t1 += x[16];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[17];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += x[18];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[19];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[14];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[4];
	t1 += -x[6];
	t1 += x[15];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[4];
	t1 += -x[7];
	t1 += x[16];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[17];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += x[18];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[19];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 30.*x[20];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += 30.*x[21];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += 30.*x[22];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += 30.*x[23];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += 30.*x[24];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += 30.*x[25];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += 30.*x[26];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += 30.*x[27];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += 30.*x[28];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += 30.*x[29];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += 30.*x[30];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += 30.*x[31];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += 30.*x[32];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[4];
	t1 += -x[6];
	t1 += 30.*x[33];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[4];
	t1 += -x[7];
	t1 += 30.*x[34];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += 30.*x[35];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += 30.*x[36];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += 30.*x[37];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += 30.*x[38];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[4];
	t1 += x[6];
	t1 += 30.*x[39];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[4];
	t1 += x[7];
	t1 += 30.*x[40];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += 30.*x[41];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += 30.*x[42];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += 30.*x[43];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[20];
	t1 += x[26];
	t1 += x[32];
	t1 += x[38];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[21];
	t1 += x[27];
	t1 += x[33];
	t1 += x[39];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[22];
	t1 += x[28];
	t1 += x[34];
	t1 += x[40];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[23];
	t1 += x[29];
	t1 += x[35];
	t1 += x[41];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[24];
	t1 += x[30];
	t1 += x[36];
	t1 += x[42];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[25];
	t1 += x[31];
	t1 += x[37];
	t1 += x[43];
	c[53] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[12] = 1.;
	J[96] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[24] = 1.;
	J[98] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -1.;
	J[36] = 1.;
	J[100] = 1.;

   /*** derivatives for constraint 4 ***/

	J[13] = -1.;
	J[25] = 1.;
	J[102] = 1.;

   /*** derivatives for constraint 5 ***/

	J[14] = -1.;
	J[37] = 1.;
	J[104] = 1.;

   /*** derivatives for constraint 6 ***/

	J[26] = -1.;
	J[38] = 1.;
	J[106] = 1.;

   /*** derivatives for constraint 7 ***/

	J[3] = 1.;
	J[15] = -1.;
	J[97] = 1.;

   /*** derivatives for constraint 8 ***/

	J[4] = 1.;
	J[27] = -1.;
	J[99] = 1.;

   /*** derivatives for constraint 9 ***/

	J[5] = 1.;
	J[39] = -1.;
	J[101] = 1.;

   /*** derivatives for constraint 10 ***/

	J[16] = 1.;
	J[28] = -1.;
	J[103] = 1.;

   /*** derivatives for constraint 11 ***/

	J[17] = 1.;
	J[40] = -1.;
	J[105] = 1.;

   /*** derivatives for constraint 12 ***/

	J[29] = 1.;
	J[41] = -1.;
	J[107] = 1.;

   /*** derivatives for constraint 13 ***/

	J[48] = -1.;
	J[60] = 1.;
	J[108] = 1.;

   /*** derivatives for constraint 14 ***/

	J[49] = -1.;
	J[72] = 1.;
	J[110] = 1.;

   /*** derivatives for constraint 15 ***/

	J[50] = -1.;
	J[84] = 1.;
	J[112] = 1.;

   /*** derivatives for constraint 16 ***/

	J[61] = -1.;
	J[73] = 1.;
	J[114] = 1.;

   /*** derivatives for constraint 17 ***/

	J[62] = -1.;
	J[85] = 1.;
	J[116] = 1.;

   /*** derivatives for constraint 18 ***/

	J[74] = -1.;
	J[86] = 1.;
	J[118] = 1.;

   /*** derivatives for constraint 19 ***/

	J[51] = 1.;
	J[63] = -1.;
	J[109] = 1.;

   /*** derivatives for constraint 20 ***/

	J[52] = 1.;
	J[75] = -1.;
	J[111] = 1.;

   /*** derivatives for constraint 21 ***/

	J[53] = 1.;
	J[87] = -1.;
	J[113] = 1.;

   /*** derivatives for constraint 22 ***/

	J[64] = 1.;
	J[76] = -1.;
	J[115] = 1.;

   /*** derivatives for constraint 23 ***/

	J[65] = 1.;
	J[88] = -1.;
	J[117] = 1.;

   /*** derivatives for constraint 24 ***/

	J[77] = 1.;
	J[89] = -1.;
	J[119] = 1.;

   /*** derivatives for constraint 25 ***/

	J[6] = 1.;
	J[18] = -1.;
	J[120] = 30.;

   /*** derivatives for constraint 26 ***/

	J[7] = 1.;
	J[30] = -1.;
	J[122] = 30.;

   /*** derivatives for constraint 27 ***/

	J[8] = 1.;
	J[42] = -1.;
	J[124] = 30.;

   /*** derivatives for constraint 28 ***/

	J[19] = 1.;
	J[31] = -1.;
	J[126] = 30.;

   /*** derivatives for constraint 29 ***/

	J[20] = 1.;
	J[43] = -1.;
	J[128] = 30.;

   /*** derivatives for constraint 30 ***/

	J[32] = 1.;
	J[44] = -1.;
	J[130] = 30.;

   /*** derivatives for constraint 31 ***/

	J[9] = -1.;
	J[21] = 1.;
	J[132] = 30.;

   /*** derivatives for constraint 32 ***/

	J[10] = -1.;
	J[33] = 1.;
	J[134] = 30.;

   /*** derivatives for constraint 33 ***/

	J[11] = -1.;
	J[45] = 1.;
	J[136] = 30.;

   /*** derivatives for constraint 34 ***/

	J[22] = -1.;
	J[34] = 1.;
	J[138] = 30.;

   /*** derivatives for constraint 35 ***/

	J[23] = -1.;
	J[46] = 1.;
	J[140] = 30.;

   /*** derivatives for constraint 36 ***/

	J[35] = -1.;
	J[47] = 1.;
	J[142] = 30.;

   /*** derivatives for constraint 37 ***/

	J[54] = 1.;
	J[66] = -1.;
	J[144] = 30.;

   /*** derivatives for constraint 38 ***/

	J[55] = 1.;
	J[78] = -1.;
	J[146] = 30.;

   /*** derivatives for constraint 39 ***/

	J[56] = 1.;
	J[90] = -1.;
	J[148] = 30.;

   /*** derivatives for constraint 40 ***/

	J[67] = 1.;
	J[79] = -1.;
	J[150] = 30.;

   /*** derivatives for constraint 41 ***/

	J[68] = 1.;
	J[91] = -1.;
	J[152] = 30.;

   /*** derivatives for constraint 42 ***/

	J[80] = 1.;
	J[92] = -1.;
	J[154] = 30.;

   /*** derivatives for constraint 43 ***/

	J[57] = -1.;
	J[69] = 1.;
	J[156] = 30.;

   /*** derivatives for constraint 44 ***/

	J[58] = -1.;
	J[81] = 1.;
	J[158] = 30.;

   /*** derivatives for constraint 45 ***/

	J[59] = -1.;
	J[93] = 1.;
	J[160] = 30.;

   /*** derivatives for constraint 46 ***/

	J[70] = -1.;
	J[82] = 1.;
	J[162] = 30.;

   /*** derivatives for constraint 47 ***/

	J[71] = -1.;
	J[94] = 1.;
	J[164] = 30.;

   /*** derivatives for constraint 48 ***/

	J[83] = -1.;
	J[95] = 1.;
	J[166] = 30.;

   /*** derivatives for constraint 49 ***/

	J[121] = 1.;
	J[133] = 1.;
	J[145] = 1.;
	J[157] = 1.;

   /*** derivatives for constraint 50 ***/

	J[123] = 1.;
	J[135] = 1.;
	J[147] = 1.;
	J[159] = 1.;

   /*** derivatives for constraint 51 ***/

	J[125] = 1.;
	J[137] = 1.;
	J[149] = 1.;
	J[161] = 1.;

   /*** derivatives for constraint 52 ***/

	J[127] = 1.;
	J[139] = 1.;
	J[151] = 1.;
	J[163] = 1.;

   /*** derivatives for constraint 53 ***/

	J[129] = 1.;
	J[141] = 1.;
	J[153] = 1.;
	J[165] = 1.;

   /*** derivatives for constraint 54 ***/

	J[131] = 1.;
	J[143] = 1.;
	J[155] = 1.;
	J[167] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
