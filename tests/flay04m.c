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
 fint flay04m_auxcom_[1] = { 4 /* nlc */ };
 fint flay04m_funcom_[201] = {
	42 /* nvar */,
	1 /* nobj */,
	42 /* ncon */,
	152 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,
	21,
	28,
	35,
	42,
	49,
	56,
	63,
	70,
	77,
	82,
	87,
	92,
	97,
	101,
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

	/* rownos */
	1,
	9,
	25,
	26,
	27,
	2,
	10,
	28,
	29,
	31,
	3,
	11,
	30,
	32,
	34,
	4,
	12,
	33,
	35,
	36,
	5,
	13,
	14,
	15,
	19,
	20,
	21,
	6,
	13,
	16,
	17,
	19,
	22,
	23,
	7,
	14,
	16,
	18,
	20,
	22,
	24,
	8,
	15,
	17,
	18,
	21,
	23,
	24,
	9,
	25,
	26,
	27,
	31,
	32,
	33,
	10,
	25,
	28,
	29,
	31,
	34,
	35,
	11,
	26,
	28,
	30,
	32,
	34,
	36,
	12,
	27,
	29,
	30,
	33,
	35,
	36,
	1,
	5,
	13,
	14,
	15,
	2,
	6,
	16,
	17,
	19,
	3,
	7,
	18,
	20,
	22,
	4,
	8,
	21,
	23,
	24,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	37,
	14,
	38,
	15,
	39,
	16,
	40,
	17,
	41,
	18,
	42,
	19,
	37,
	20,
	38,
	21,
	39,
	22,
	40,
	23,
	41,
	24,
	42,
	25,
	37,
	26,
	38,
	27,
	39,
	28,
	40,
	29,
	41,
	30,
	42,
	31,
	37,
	32,
	38,
	33,
	39,
	34,
	40,
	35,
	41,
	36,
	42 };

 real flay04m_boundc_[1+84+84] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		3.,
		13.3333333333333,
		3.,
		16.6666666666667,
		3.,
		20.,
		3.,
		11.6666666666667,
		0.,
		97.,
		0.,
		97.,
		0.,
		97.,
		0.,
		97.,
		0.,
		97.,
		0.,
		97.,
		0.,
		97.,
		0.,
		97.,
		3.,
		13.3333333333333,
		3.,
		16.6666666666667,
		3.,
		20.,
		3.,
		11.6666666666667,
		0.,
		100.,
		0.,
		100.,
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
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
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
		110.333333333333,
		-1.7e308,
		110.333333333333,
		-1.7e308,
		110.333333333333,
		-1.7e308,
		113.666666666667,
		-1.7e308,
		113.666666666667,
		-1.7e308,
		117.,
		-1.7e308,
		113.666666666667,
		-1.7e308,
		117.,
		-1.7e308,
		108.666666666667,
		-1.7e308,
		117.,
		-1.7e308,
		108.666666666667,
		-1.7e308,
		108.666666666667,
		-1.7e308,
		110.333333333333,
		-1.7e308,
		110.333333333333,
		-1.7e308,
		110.333333333333,
		-1.7e308,
		113.666666666667,
		-1.7e308,
		113.666666666667,
		-1.7e308,
		117.,
		-1.7e308,
		113.666666666667,
		-1.7e308,
		117.,
		-1.7e308,
		108.666666666667,
		-1.7e308,
		117.,
		-1.7e308,
		108.666666666667,
		-1.7e308,
		108.666666666667,
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

 real flay04m_x0comn_[42] = {
		3.,
		3.,
		3.,
		3.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		3.,
		3.,
		3.,
		3.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real flay04m_pd[4];
static real flay04m_old_x[42];
static int flay04m_xkind = -1;

 static int
flay04m_xcheck(real *x)
{
	real *x1 = flay04m_old_x, *xe = x + 42;
	errno = 0;
	if (flay04m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	flay04m_xkind = 0;
	return 1;
	}
 real
flay04m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (flay04m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[16];
	rv += 2.*x[17];
	;}

	if (wantfg & 2) {
	g[16] = 2.;
	g[17] = 2.;
	}

	return rv;
}

 void
flay04m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (flay04m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 40. / x[0];
	flay04m_pd[0] = -v[0] / x[0];
	t1 = v[0] + -x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 50. / x[1];
	flay04m_pd[1] = -v[0] / x[1];
	t1 = v[0] + -x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 60. / x[2];
	flay04m_pd[2] = -v[0] / x[2];
	t1 = v[0] + -x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[0] = 35. / x[3];
	flay04m_pd[3] = -v[0] / x[3];
	t1 = v[0] + -x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[4];
	t1 += -x[12];
	t1 += x[16];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[5];
	t1 += -x[13];
	t1 += x[16];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[6];
	t1 += -x[14];
	t1 += x[16];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[7];
	t1 += -x[15];
	t1 += x[16];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[0];
	t1 += -x[8];
	t1 += x[17];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[1];
	t1 += -x[9];
	t1 += x[17];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[2];
	t1 += -x[10];
	t1 += x[17];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[3];
	t1 += -x[11];
	t1 += x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[12];
	t1 += 110.333333333333*x[18];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[4];
	t1 += -x[6];
	t1 += x[12];
	t1 += 110.333333333333*x[19];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[4];
	t1 += -x[7];
	t1 += x[12];
	t1 += 110.333333333333*x[20];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[13];
	t1 += 113.666666666667*x[21];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += x[13];
	t1 += 113.666666666667*x[22];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[14];
	t1 += 117.*x[23];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[13];
	t1 += 113.666666666667*x[24];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[4];
	t1 += x[6];
	t1 += x[14];
	t1 += 117.*x[25];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[4];
	t1 += x[7];
	t1 += x[15];
	t1 += 108.666666666667*x[26];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[14];
	t1 += 117.*x[27];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += x[15];
	t1 += 108.666666666667*x[28];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[15];
	t1 += 108.666666666667*x[29];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[0];
	t1 += x[8];
	t1 += -x[9];
	t1 += 110.333333333333*x[30];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[0];
	t1 += x[8];
	t1 += -x[10];
	t1 += 110.333333333333*x[31];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[0];
	t1 += x[8];
	t1 += -x[11];
	t1 += 110.333333333333*x[32];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[1];
	t1 += x[9];
	t1 += -x[10];
	t1 += 113.666666666667*x[33];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[1];
	t1 += x[9];
	t1 += -x[11];
	t1 += 113.666666666667*x[34];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[2];
	t1 += x[10];
	t1 += -x[11];
	t1 += 117.*x[35];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[1];
	t1 += -x[8];
	t1 += x[9];
	t1 += 113.666666666667*x[36];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[2];
	t1 += -x[8];
	t1 += x[10];
	t1 += 117.*x[37];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[3];
	t1 += -x[8];
	t1 += x[11];
	t1 += 108.666666666667*x[38];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[2];
	t1 += -x[9];
	t1 += x[10];
	t1 += 117.*x[39];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[3];
	t1 += -x[9];
	t1 += x[11];
	t1 += 108.666666666667*x[40];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[3];
	t1 += -x[10];
	t1 += x[11];
	t1 += 108.666666666667*x[41];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[18];
	t1 += x[24];
	t1 += x[30];
	t1 += x[36];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[19];
	t1 += x[25];
	t1 += x[31];
	t1 += x[37];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[20];
	t1 += x[26];
	t1 += x[32];
	t1 += x[38];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[21];
	t1 += x[27];
	t1 += x[33];
	t1 += x[39];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[22];
	t1 += x[28];
	t1 += x[34];
	t1 += x[40];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[23];
	t1 += x[29];
	t1 += x[35];
	t1 += x[41];
	c[41] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = flay04m_pd[0];
	J[76] = -1.;

   /*** derivatives for constraint 2 ***/

	J[5] = flay04m_pd[1];
	J[81] = -1.;

   /*** derivatives for constraint 3 ***/

	J[10] = flay04m_pd[2];
	J[86] = -1.;

   /*** derivatives for constraint 4 ***/

	J[15] = flay04m_pd[3];
	J[91] = -1.;

   /*** derivatives for constraint 5 ***/

	J[20] = -1.;
	J[77] = -1.;
	J[96] = 1.;

   /*** derivatives for constraint 6 ***/

	J[27] = -1.;
	J[82] = -1.;
	J[97] = 1.;

   /*** derivatives for constraint 7 ***/

	J[34] = -1.;
	J[87] = -1.;
	J[98] = 1.;

   /*** derivatives for constraint 8 ***/

	J[41] = -1.;
	J[92] = -1.;
	J[99] = 1.;

   /*** derivatives for constraint 9 ***/

	J[1] = -1.;
	J[48] = -1.;
	J[100] = 1.;

   /*** derivatives for constraint 10 ***/

	J[6] = -1.;
	J[55] = -1.;
	J[101] = 1.;

   /*** derivatives for constraint 11 ***/

	J[11] = -1.;
	J[62] = -1.;
	J[102] = 1.;

   /*** derivatives for constraint 12 ***/

	J[16] = -1.;
	J[69] = -1.;
	J[103] = 1.;

   /*** derivatives for constraint 13 ***/

	J[21] = 1.;
	J[28] = -1.;
	J[78] = 1.;
	J[104] = 110.333333333333;

   /*** derivatives for constraint 14 ***/

	J[22] = 1.;
	J[35] = -1.;
	J[79] = 1.;
	J[106] = 110.333333333333;

   /*** derivatives for constraint 15 ***/

	J[23] = 1.;
	J[42] = -1.;
	J[80] = 1.;
	J[108] = 110.333333333333;

   /*** derivatives for constraint 16 ***/

	J[29] = 1.;
	J[36] = -1.;
	J[83] = 1.;
	J[110] = 113.666666666667;

   /*** derivatives for constraint 17 ***/

	J[30] = 1.;
	J[43] = -1.;
	J[84] = 1.;
	J[112] = 113.666666666667;

   /*** derivatives for constraint 18 ***/

	J[37] = 1.;
	J[44] = -1.;
	J[88] = 1.;
	J[114] = 117.;

   /*** derivatives for constraint 19 ***/

	J[24] = -1.;
	J[31] = 1.;
	J[85] = 1.;
	J[116] = 113.666666666667;

   /*** derivatives for constraint 20 ***/

	J[25] = -1.;
	J[38] = 1.;
	J[89] = 1.;
	J[118] = 117.;

   /*** derivatives for constraint 21 ***/

	J[26] = -1.;
	J[45] = 1.;
	J[93] = 1.;
	J[120] = 108.666666666667;

   /*** derivatives for constraint 22 ***/

	J[32] = -1.;
	J[39] = 1.;
	J[90] = 1.;
	J[122] = 117.;

   /*** derivatives for constraint 23 ***/

	J[33] = -1.;
	J[46] = 1.;
	J[94] = 1.;
	J[124] = 108.666666666667;

   /*** derivatives for constraint 24 ***/

	J[40] = -1.;
	J[47] = 1.;
	J[95] = 1.;
	J[126] = 108.666666666667;

   /*** derivatives for constraint 25 ***/

	J[2] = 1.;
	J[49] = 1.;
	J[56] = -1.;
	J[128] = 110.333333333333;

   /*** derivatives for constraint 26 ***/

	J[3] = 1.;
	J[50] = 1.;
	J[63] = -1.;
	J[130] = 110.333333333333;

   /*** derivatives for constraint 27 ***/

	J[4] = 1.;
	J[51] = 1.;
	J[70] = -1.;
	J[132] = 110.333333333333;

   /*** derivatives for constraint 28 ***/

	J[7] = 1.;
	J[57] = 1.;
	J[64] = -1.;
	J[134] = 113.666666666667;

   /*** derivatives for constraint 29 ***/

	J[8] = 1.;
	J[58] = 1.;
	J[71] = -1.;
	J[136] = 113.666666666667;

   /*** derivatives for constraint 30 ***/

	J[12] = 1.;
	J[65] = 1.;
	J[72] = -1.;
	J[138] = 117.;

   /*** derivatives for constraint 31 ***/

	J[9] = 1.;
	J[52] = -1.;
	J[59] = 1.;
	J[140] = 113.666666666667;

   /*** derivatives for constraint 32 ***/

	J[13] = 1.;
	J[53] = -1.;
	J[66] = 1.;
	J[142] = 117.;

   /*** derivatives for constraint 33 ***/

	J[17] = 1.;
	J[54] = -1.;
	J[73] = 1.;
	J[144] = 108.666666666667;

   /*** derivatives for constraint 34 ***/

	J[14] = 1.;
	J[60] = -1.;
	J[67] = 1.;
	J[146] = 117.;

   /*** derivatives for constraint 35 ***/

	J[18] = 1.;
	J[61] = -1.;
	J[74] = 1.;
	J[148] = 108.666666666667;

   /*** derivatives for constraint 36 ***/

	J[19] = 1.;
	J[68] = -1.;
	J[75] = 1.;
	J[150] = 108.666666666667;

   /*** derivatives for constraint 37 ***/

	J[105] = 1.;
	J[117] = 1.;
	J[129] = 1.;
	J[141] = 1.;

   /*** derivatives for constraint 38 ***/

	J[107] = 1.;
	J[119] = 1.;
	J[131] = 1.;
	J[143] = 1.;

   /*** derivatives for constraint 39 ***/

	J[109] = 1.;
	J[121] = 1.;
	J[133] = 1.;
	J[145] = 1.;

   /*** derivatives for constraint 40 ***/

	J[111] = 1.;
	J[123] = 1.;
	J[135] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 41 ***/

	J[113] = 1.;
	J[125] = 1.;
	J[137] = 1.;
	J[149] = 1.;

   /*** derivatives for constraint 42 ***/

	J[115] = 1.;
	J[127] = 1.;
	J[139] = 1.;
	J[151] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
