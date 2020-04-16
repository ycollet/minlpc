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
 fint flay05m_auxcom_[1] = { 5 /* nlc */ };
 fint flay05m_funcom_[309] = {
	62 /* nvar */,
	1 /* nobj */,
	65 /* ncon */,
	240 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	25,
	31,
	40,
	49,
	58,
	67,
	76,
	85,
	94,
	103,
	112,
	121,
	127,
	133,
	139,
	145,
	151,
	156,
	161,
	163,
	165,
	167,
	169,
	171,
	173,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	189,
	191,
	193,
	195,
	197,
	199,
	201,
	203,
	205,
	207,
	209,
	211,
	213,
	215,
	217,
	219,
	221,
	223,
	225,
	227,
	229,
	231,
	233,
	235,
	237,
	239,
	241,

	/* rownos */
	1,
	11,
	36,
	37,
	38,
	39,
	2,
	12,
	40,
	41,
	42,
	46,
	3,
	13,
	43,
	44,
	47,
	50,
	4,
	14,
	45,
	48,
	51,
	53,
	5,
	15,
	49,
	52,
	54,
	55,
	6,
	16,
	17,
	18,
	19,
	26,
	27,
	28,
	29,
	7,
	16,
	20,
	21,
	22,
	26,
	30,
	31,
	32,
	8,
	17,
	20,
	23,
	24,
	27,
	30,
	33,
	34,
	9,
	18,
	21,
	23,
	25,
	28,
	31,
	33,
	35,
	10,
	19,
	22,
	24,
	25,
	29,
	32,
	34,
	35,
	11,
	36,
	37,
	38,
	39,
	46,
	47,
	48,
	49,
	12,
	36,
	40,
	41,
	42,
	46,
	50,
	51,
	52,
	13,
	37,
	40,
	43,
	44,
	47,
	50,
	53,
	54,
	14,
	38,
	41,
	43,
	45,
	48,
	51,
	53,
	55,
	15,
	39,
	42,
	44,
	45,
	49,
	52,
	54,
	55,
	1,
	6,
	16,
	17,
	18,
	19,
	2,
	7,
	20,
	21,
	22,
	26,
	3,
	8,
	23,
	24,
	27,
	30,
	4,
	9,
	25,
	28,
	31,
	33,
	5,
	10,
	29,
	32,
	34,
	35,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	56,
	17,
	57,
	18,
	58,
	19,
	59,
	20,
	60,
	21,
	61,
	22,
	62,
	23,
	63,
	24,
	64,
	25,
	65,
	26,
	56,
	27,
	57,
	28,
	58,
	29,
	59,
	30,
	60,
	31,
	61,
	32,
	62,
	33,
	63,
	34,
	64,
	35,
	65,
	36,
	56,
	37,
	57,
	38,
	58,
	39,
	59,
	40,
	60,
	41,
	61,
	42,
	62,
	43,
	63,
	44,
	64,
	45,
	65,
	46,
	56,
	47,
	57,
	48,
	58,
	49,
	59,
	50,
	60,
	51,
	61,
	52,
	62,
	53,
	63,
	54,
	64,
	55,
	65 };

 real flay05m_boundc_[1+124+130] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		40.,
		1.,
		50.,
		1.,
		60.,
		1.,
		35.,
		1.,
		75.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		1.,
		40.,
		1.,
		50.,
		1.,
		60.,
		1.,
		35.,
		1.,
		75.,
		0.,
		30.,
		0.,
		30.,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		104.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		104.,
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.};

 real flay05m_x0comn_[62] = {
		1.,
		1.,
		1.,
		1.,
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
		1.,
		1.,
		1.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real flay05m_pd[5];
static real flay05m_old_x[62];
static int flay05m_xkind = -1;

 static int
flay05m_xcheck(real *x)
{
	real *x1 = flay05m_old_x, *xe = x + 62;
	errno = 0;
	if (flay05m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	flay05m_xkind = 0;
	return 1;
	}
 real
flay05m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (flay05m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[20];
	rv += 2.*x[21];
	;}

	if (wantfg & 2) {
	g[20] = 2.;
	g[21] = 2.;
	}

	return rv;
}

 void
flay05m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (flay05m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 40. / x[0];
	flay05m_pd[0] = -v[0] / x[0];
	t1 = v[0] + -x[15];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 50. / x[1];
	flay05m_pd[1] = -v[0] / x[1];
	t1 = v[0] + -x[16];
	c[1] = t1;

  /***  constraint 3  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 60. / x[2];
	flay05m_pd[2] = -v[0] / x[2];
	t1 = v[0] + -x[17];
	c[2] = t1;

  /***  constraint 4  ***/

	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[0] = 35. / x[3];
	flay05m_pd[3] = -v[0] / x[3];
	t1 = v[0] + -x[18];
	c[3] = t1;

  /***  constraint 5  ***/

	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[0] = 75. / x[4];
	flay05m_pd[4] = -v[0] / x[4];
	t1 = v[0] + -x[19];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[5];
	t1 += -x[15];
	t1 += x[20];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[6];
	t1 += -x[16];
	t1 += x[20];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[7];
	t1 += -x[17];
	t1 += x[20];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[8];
	t1 += -x[18];
	t1 += x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[9];
	t1 += -x[19];
	t1 += x[20];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[0];
	t1 += -x[10];
	t1 += x[21];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[1];
	t1 += -x[11];
	t1 += x[21];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[2];
	t1 += -x[12];
	t1 += x[21];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[3];
	t1 += -x[13];
	t1 += x[21];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[4];
	t1 += -x[14];
	t1 += x[21];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[15];
	t1 += 69.*x[22];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += x[15];
	t1 += 69.*x[23];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[5];
	t1 += -x[8];
	t1 += x[15];
	t1 += 69.*x[24];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[5];
	t1 += -x[9];
	t1 += x[15];
	t1 += 69.*x[25];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[16];
	t1 += 79.*x[26];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[6];
	t1 += -x[8];
	t1 += x[16];
	t1 += 79.*x[27];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[6];
	t1 += -x[9];
	t1 += x[16];
	t1 += 79.*x[28];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += x[17];
	t1 += 89.*x[29];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += x[17];
	t1 += 89.*x[30];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += x[18];
	t1 += 64.*x[31];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[16];
	t1 += 79.*x[32];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += x[17];
	t1 += 89.*x[33];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[5];
	t1 += x[8];
	t1 += x[18];
	t1 += 64.*x[34];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[5];
	t1 += x[9];
	t1 += x[19];
	t1 += 104.*x[35];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[17];
	t1 += 89.*x[36];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += x[18];
	t1 += 64.*x[37];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[6];
	t1 += x[9];
	t1 += x[19];
	t1 += 104.*x[38];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += x[18];
	t1 += 64.*x[39];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += x[19];
	t1 += 104.*x[40];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += x[19];
	t1 += 104.*x[41];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[0];
	t1 += x[10];
	t1 += -x[11];
	t1 += 69.*x[42];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[0];
	t1 += x[10];
	t1 += -x[12];
	t1 += 69.*x[43];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[0];
	t1 += x[10];
	t1 += -x[13];
	t1 += 69.*x[44];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[0];
	t1 += x[10];
	t1 += -x[14];
	t1 += 69.*x[45];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[1];
	t1 += x[11];
	t1 += -x[12];
	t1 += 79.*x[46];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[1];
	t1 += x[11];
	t1 += -x[13];
	t1 += 79.*x[47];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[1];
	t1 += x[11];
	t1 += -x[14];
	t1 += 79.*x[48];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[2];
	t1 += x[12];
	t1 += -x[13];
	t1 += 89.*x[49];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[2];
	t1 += x[12];
	t1 += -x[14];
	t1 += 89.*x[50];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[3];
	t1 += x[13];
	t1 += -x[14];
	t1 += 64.*x[51];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[1];
	t1 += -x[10];
	t1 += x[11];
	t1 += 79.*x[52];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[2];
	t1 += -x[10];
	t1 += x[12];
	t1 += 89.*x[53];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[3];
	t1 += -x[10];
	t1 += x[13];
	t1 += 64.*x[54];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[4];
	t1 += -x[10];
	t1 += x[14];
	t1 += 104.*x[55];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[2];
	t1 += -x[11];
	t1 += x[12];
	t1 += 89.*x[56];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[3];
	t1 += -x[11];
	t1 += x[13];
	t1 += 64.*x[57];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[4];
	t1 += -x[11];
	t1 += x[14];
	t1 += 104.*x[58];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[3];
	t1 += -x[12];
	t1 += x[13];
	t1 += 64.*x[59];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[4];
	t1 += -x[12];
	t1 += x[14];
	t1 += 104.*x[60];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[4];
	t1 += -x[13];
	t1 += x[14];
	t1 += 104.*x[61];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[22];
	t1 += x[32];
	t1 += x[42];
	t1 += x[52];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[23];
	t1 += x[33];
	t1 += x[43];
	t1 += x[53];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[24];
	t1 += x[34];
	t1 += x[44];
	t1 += x[54];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[25];
	t1 += x[35];
	t1 += x[45];
	t1 += x[55];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[26];
	t1 += x[36];
	t1 += x[46];
	t1 += x[56];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[27];
	t1 += x[37];
	t1 += x[47];
	t1 += x[57];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[28];
	t1 += x[38];
	t1 += x[48];
	t1 += x[58];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[29];
	t1 += x[39];
	t1 += x[49];
	t1 += x[59];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[30];
	t1 += x[40];
	t1 += x[50];
	t1 += x[60];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[31];
	t1 += x[41];
	t1 += x[51];
	t1 += x[61];
	c[64] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = flay05m_pd[0];
	J[120] = -1.;

   /*** derivatives for constraint 2 ***/

	J[6] = flay05m_pd[1];
	J[126] = -1.;

   /*** derivatives for constraint 3 ***/

	J[12] = flay05m_pd[2];
	J[132] = -1.;

   /*** derivatives for constraint 4 ***/

	J[18] = flay05m_pd[3];
	J[138] = -1.;

   /*** derivatives for constraint 5 ***/

	J[24] = flay05m_pd[4];
	J[144] = -1.;

   /*** derivatives for constraint 6 ***/

	J[30] = -1.;
	J[121] = -1.;
	J[150] = 1.;

   /*** derivatives for constraint 7 ***/

	J[39] = -1.;
	J[127] = -1.;
	J[151] = 1.;

   /*** derivatives for constraint 8 ***/

	J[48] = -1.;
	J[133] = -1.;
	J[152] = 1.;

   /*** derivatives for constraint 9 ***/

	J[57] = -1.;
	J[139] = -1.;
	J[153] = 1.;

   /*** derivatives for constraint 10 ***/

	J[66] = -1.;
	J[145] = -1.;
	J[154] = 1.;

   /*** derivatives for constraint 11 ***/

	J[1] = -1.;
	J[75] = -1.;
	J[155] = 1.;

   /*** derivatives for constraint 12 ***/

	J[7] = -1.;
	J[84] = -1.;
	J[156] = 1.;

   /*** derivatives for constraint 13 ***/

	J[13] = -1.;
	J[93] = -1.;
	J[157] = 1.;

   /*** derivatives for constraint 14 ***/

	J[19] = -1.;
	J[102] = -1.;
	J[158] = 1.;

   /*** derivatives for constraint 15 ***/

	J[25] = -1.;
	J[111] = -1.;
	J[159] = 1.;

   /*** derivatives for constraint 16 ***/

	J[31] = 1.;
	J[40] = -1.;
	J[122] = 1.;
	J[160] = 69.;

   /*** derivatives for constraint 17 ***/

	J[32] = 1.;
	J[49] = -1.;
	J[123] = 1.;
	J[162] = 69.;

   /*** derivatives for constraint 18 ***/

	J[33] = 1.;
	J[58] = -1.;
	J[124] = 1.;
	J[164] = 69.;

   /*** derivatives for constraint 19 ***/

	J[34] = 1.;
	J[67] = -1.;
	J[125] = 1.;
	J[166] = 69.;

   /*** derivatives for constraint 20 ***/

	J[41] = 1.;
	J[50] = -1.;
	J[128] = 1.;
	J[168] = 79.;

   /*** derivatives for constraint 21 ***/

	J[42] = 1.;
	J[59] = -1.;
	J[129] = 1.;
	J[170] = 79.;

   /*** derivatives for constraint 22 ***/

	J[43] = 1.;
	J[68] = -1.;
	J[130] = 1.;
	J[172] = 79.;

   /*** derivatives for constraint 23 ***/

	J[51] = 1.;
	J[60] = -1.;
	J[134] = 1.;
	J[174] = 89.;

   /*** derivatives for constraint 24 ***/

	J[52] = 1.;
	J[69] = -1.;
	J[135] = 1.;
	J[176] = 89.;

   /*** derivatives for constraint 25 ***/

	J[61] = 1.;
	J[70] = -1.;
	J[140] = 1.;
	J[178] = 64.;

   /*** derivatives for constraint 26 ***/

	J[35] = -1.;
	J[44] = 1.;
	J[131] = 1.;
	J[180] = 79.;

   /*** derivatives for constraint 27 ***/

	J[36] = -1.;
	J[53] = 1.;
	J[136] = 1.;
	J[182] = 89.;

   /*** derivatives for constraint 28 ***/

	J[37] = -1.;
	J[62] = 1.;
	J[141] = 1.;
	J[184] = 64.;

   /*** derivatives for constraint 29 ***/

	J[38] = -1.;
	J[71] = 1.;
	J[146] = 1.;
	J[186] = 104.;

   /*** derivatives for constraint 30 ***/

	J[45] = -1.;
	J[54] = 1.;
	J[137] = 1.;
	J[188] = 89.;

   /*** derivatives for constraint 31 ***/

	J[46] = -1.;
	J[63] = 1.;
	J[142] = 1.;
	J[190] = 64.;

   /*** derivatives for constraint 32 ***/

	J[47] = -1.;
	J[72] = 1.;
	J[147] = 1.;
	J[192] = 104.;

   /*** derivatives for constraint 33 ***/

	J[55] = -1.;
	J[64] = 1.;
	J[143] = 1.;
	J[194] = 64.;

   /*** derivatives for constraint 34 ***/

	J[56] = -1.;
	J[73] = 1.;
	J[148] = 1.;
	J[196] = 104.;

   /*** derivatives for constraint 35 ***/

	J[65] = -1.;
	J[74] = 1.;
	J[149] = 1.;
	J[198] = 104.;

   /*** derivatives for constraint 36 ***/

	J[2] = 1.;
	J[76] = 1.;
	J[85] = -1.;
	J[200] = 69.;

   /*** derivatives for constraint 37 ***/

	J[3] = 1.;
	J[77] = 1.;
	J[94] = -1.;
	J[202] = 69.;

   /*** derivatives for constraint 38 ***/

	J[4] = 1.;
	J[78] = 1.;
	J[103] = -1.;
	J[204] = 69.;

   /*** derivatives for constraint 39 ***/

	J[5] = 1.;
	J[79] = 1.;
	J[112] = -1.;
	J[206] = 69.;

   /*** derivatives for constraint 40 ***/

	J[8] = 1.;
	J[86] = 1.;
	J[95] = -1.;
	J[208] = 79.;

   /*** derivatives for constraint 41 ***/

	J[9] = 1.;
	J[87] = 1.;
	J[104] = -1.;
	J[210] = 79.;

   /*** derivatives for constraint 42 ***/

	J[10] = 1.;
	J[88] = 1.;
	J[113] = -1.;
	J[212] = 79.;

   /*** derivatives for constraint 43 ***/

	J[14] = 1.;
	J[96] = 1.;
	J[105] = -1.;
	J[214] = 89.;

   /*** derivatives for constraint 44 ***/

	J[15] = 1.;
	J[97] = 1.;
	J[114] = -1.;
	J[216] = 89.;

   /*** derivatives for constraint 45 ***/

	J[20] = 1.;
	J[106] = 1.;
	J[115] = -1.;
	J[218] = 64.;

   /*** derivatives for constraint 46 ***/

	J[11] = 1.;
	J[80] = -1.;
	J[89] = 1.;
	J[220] = 79.;

   /*** derivatives for constraint 47 ***/

	J[16] = 1.;
	J[81] = -1.;
	J[98] = 1.;
	J[222] = 89.;

   /*** derivatives for constraint 48 ***/

	J[21] = 1.;
	J[82] = -1.;
	J[107] = 1.;
	J[224] = 64.;

   /*** derivatives for constraint 49 ***/

	J[26] = 1.;
	J[83] = -1.;
	J[116] = 1.;
	J[226] = 104.;

   /*** derivatives for constraint 50 ***/

	J[17] = 1.;
	J[90] = -1.;
	J[99] = 1.;
	J[228] = 89.;

   /*** derivatives for constraint 51 ***/

	J[22] = 1.;
	J[91] = -1.;
	J[108] = 1.;
	J[230] = 64.;

   /*** derivatives for constraint 52 ***/

	J[27] = 1.;
	J[92] = -1.;
	J[117] = 1.;
	J[232] = 104.;

   /*** derivatives for constraint 53 ***/

	J[23] = 1.;
	J[100] = -1.;
	J[109] = 1.;
	J[234] = 64.;

   /*** derivatives for constraint 54 ***/

	J[28] = 1.;
	J[101] = -1.;
	J[118] = 1.;
	J[236] = 104.;

   /*** derivatives for constraint 55 ***/

	J[29] = 1.;
	J[110] = -1.;
	J[119] = 1.;
	J[238] = 104.;

   /*** derivatives for constraint 56 ***/

	J[161] = 1.;
	J[181] = 1.;
	J[201] = 1.;
	J[221] = 1.;

   /*** derivatives for constraint 57 ***/

	J[163] = 1.;
	J[183] = 1.;
	J[203] = 1.;
	J[223] = 1.;

   /*** derivatives for constraint 58 ***/

	J[165] = 1.;
	J[185] = 1.;
	J[205] = 1.;
	J[225] = 1.;

   /*** derivatives for constraint 59 ***/

	J[167] = 1.;
	J[187] = 1.;
	J[207] = 1.;
	J[227] = 1.;

   /*** derivatives for constraint 60 ***/

	J[169] = 1.;
	J[189] = 1.;
	J[209] = 1.;
	J[229] = 1.;

   /*** derivatives for constraint 61 ***/

	J[171] = 1.;
	J[191] = 1.;
	J[211] = 1.;
	J[231] = 1.;

   /*** derivatives for constraint 62 ***/

	J[173] = 1.;
	J[193] = 1.;
	J[213] = 1.;
	J[233] = 1.;

   /*** derivatives for constraint 63 ***/

	J[175] = 1.;
	J[195] = 1.;
	J[215] = 1.;
	J[235] = 1.;

   /*** derivatives for constraint 64 ***/

	J[177] = 1.;
	J[197] = 1.;
	J[217] = 1.;
	J[237] = 1.;

   /*** derivatives for constraint 65 ***/

	J[179] = 1.;
	J[199] = 1.;
	J[219] = 1.;
	J[239] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
