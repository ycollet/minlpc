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
 fint wastewater05m1_auxcom_[1] = { 12 /* nlc */ };
 fint wastewater05m1_funcom_[264] = {
	46 /* nvar */,
	1 /* nobj */,
	40 /* ncon */,
	211 /* nzc */,
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
	33,
	38,
	43,
	48,
	53,
	58,
	63,
	68,
	73,
	78,
	83,
	88,
	93,
	98,
	103,
	108,
	113,
	118,
	123,
	128,
	133,
	138,
	143,
	148,
	153,
	158,
	163,
	168,
	173,
	178,
	183,
	188,
	193,
	198,
	203,
	208,
	212,

	/* rownos */
	1,
	23,
	32,
	2,
	24,
	33,
	3,
	25,
	34,
	4,
	26,
	35,
	5,
	27,
	36,
	6,
	28,
	37,
	7,
	29,
	38,
	8,
	30,
	39,
	9,
	31,
	40,
	1,
	4,
	7,
	10,
	32,
	2,
	5,
	8,
	11,
	33,
	3,
	6,
	9,
	12,
	34,
	1,
	4,
	7,
	10,
	35,
	2,
	5,
	8,
	11,
	36,
	3,
	6,
	9,
	12,
	37,
	1,
	4,
	7,
	10,
	38,
	2,
	5,
	8,
	11,
	39,
	3,
	6,
	9,
	12,
	40,
	1,
	2,
	3,
	16,
	19,
	4,
	5,
	6,
	17,
	19,
	7,
	8,
	9,
	18,
	19,
	1,
	2,
	3,
	16,
	20,
	4,
	5,
	6,
	17,
	20,
	7,
	8,
	9,
	18,
	20,
	1,
	2,
	3,
	16,
	21,
	4,
	5,
	6,
	17,
	21,
	7,
	8,
	9,
	18,
	21,
	10,
	11,
	12,
	19,
	22,
	10,
	11,
	12,
	20,
	22,
	10,
	11,
	12,
	21,
	22,
	1,
	2,
	3,
	16,
	19,
	4,
	5,
	6,
	17,
	20,
	7,
	8,
	9,
	18,
	21,
	10,
	11,
	12,
	13,
	22,
	10,
	11,
	12,
	14,
	22,
	10,
	11,
	12,
	15,
	22,
	1,
	2,
	3,
	13,
	16,
	4,
	5,
	6,
	13,
	17,
	7,
	8,
	9,
	13,
	18,
	1,
	2,
	3,
	14,
	16,
	4,
	5,
	6,
	14,
	17,
	7,
	8,
	9,
	14,
	18,
	1,
	2,
	3,
	15,
	16,
	4,
	5,
	6,
	15,
	17,
	7,
	8,
	9,
	15,
	18,
	10,
	11,
	12,
	22 };

 real wastewater05m1_boundc_[1+92+80] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		-13.1,
		-13.1,
		-32.7,
		-32.7,
		-56.5,
		-56.5,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		20000.,
		-1.7e308,
		20000.,
		-1.7e308,
		20000.,
		-1.7e308,
		20000.,
		-1.7e308,
		20000.,
		-1.7e308,
		20000.,
		-1.7e308,
		20000.,
		-1.7e308,
		20000.,
		-1.7e308,
		20000.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real wastewater05m1_x0comn_[46] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real wastewater05m1_old_x[46];
static int wastewater05m1_xkind = -1;

 static int
wastewater05m1_xcheck(real *x)
{
	real *x1 = wastewater05m1_old_x, *xe = x + 46;
	errno = 0;
	if (wastewater05m1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wastewater05m1_xkind = 0;
	return 1;
	}
 real
wastewater05m1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wastewater05m1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[30];
	rv += x[31];
	rv += x[32];
	;}

	if (wantfg & 2) {
	g[30] = 1.;
	g[31] = 1.;
	g[32] = 1.;
	}

	return rv;
}

 void
wastewater05m1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (wastewater05m1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[18] * x[9];
	v[1] = x[21] * x[12];
	v[0] += v[1];
	v[1] = x[24] * x[15];
	v[0] += v[1];
	v[1] = x[30] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 10.*x[36];
	t1 += 110.*x[39];
	t1 += 100.*x[42];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[18] * x[10];
	v[1] = x[21] * x[13];
	v[0] += v[1];
	v[1] = x[24] * x[16];
	v[0] += v[1];
	v[1] = x[30] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 390.*x[36];
	t1 += 16780.*x[39];
	t1 += 25.*x[42];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[18] * x[11];
	v[1] = x[21] * x[14];
	v[0] += v[1];
	v[1] = x[24] * x[17];
	v[0] += v[1];
	v[1] = x[30] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 25.*x[36];
	t1 += 40.*x[39];
	t1 += 35.*x[42];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[19] * x[9];
	v[1] = x[22] * x[12];
	v[0] += v[1];
	v[1] = x[25] * x[15];
	v[0] += v[1];
	v[1] = x[31] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 10.*x[37];
	t1 += 110.*x[40];
	t1 += 100.*x[43];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[19] * x[10];
	v[1] = x[22] * x[13];
	v[0] += v[1];
	v[1] = x[25] * x[16];
	v[0] += v[1];
	v[1] = x[31] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 390.*x[37];
	t1 += 16780.*x[40];
	t1 += 25.*x[43];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[19] * x[11];
	v[1] = x[22] * x[14];
	v[0] += v[1];
	v[1] = x[25] * x[17];
	v[0] += v[1];
	v[1] = x[31] * x[5];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 25.*x[37];
	t1 += 40.*x[40];
	t1 += 35.*x[43];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[20] * x[9];
	v[1] = x[23] * x[12];
	v[0] += v[1];
	v[1] = x[26] * x[15];
	v[0] += v[1];
	v[1] = x[32] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 10.*x[38];
	t1 += 110.*x[41];
	t1 += 100.*x[44];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[20] * x[10];
	v[1] = x[23] * x[13];
	v[0] += v[1];
	v[1] = x[26] * x[16];
	v[0] += v[1];
	v[1] = x[32] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 390.*x[38];
	t1 += 16780.*x[41];
	t1 += 25.*x[44];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[20] * x[11];
	v[1] = x[23] * x[14];
	v[0] += v[1];
	v[1] = x[26] * x[17];
	v[0] += v[1];
	v[1] = x[32] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 25.*x[38];
	t1 += 40.*x[41];
	t1 += 35.*x[44];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[27] * x[9];
	v[1] = x[28] * x[12];
	v[0] += v[1];
	v[1] = x[29] * x[15];
	v[0] += v[1];
	t1 = v[0] + 10.*x[33];
	t1 += 110.*x[34];
	t1 += 100.*x[35];
	t1 += -2.*x[45];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[27] * x[10];
	v[1] = x[28] * x[13];
	v[0] += v[1];
	v[1] = x[29] * x[16];
	v[0] += v[1];
	t1 = v[0] + 390.*x[33];
	t1 += 16780.*x[34];
	t1 += 25.*x[35];
	t1 += -2.*x[45];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[27] * x[11];
	v[1] = x[28] * x[14];
	v[0] += v[1];
	v[1] = x[29] * x[17];
	v[0] += v[1];
	t1 = v[0] + 25.*x[33];
	t1 += 40.*x[34];
	t1 += 35.*x[35];
	t1 += -5.*x[45];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[33];
	t1 += -x[36];
	t1 += -x[37];
	t1 += -x[38];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[34];
	t1 += -x[39];
	t1 += -x[40];
	t1 += -x[41];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[35];
	t1 += -x[42];
	t1 += -x[43];
	t1 += -x[44];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[18];
	t1 += -x[21];
	t1 += -x[24];
	t1 += x[30];
	t1 += -x[36];
	t1 += -x[39];
	t1 += -x[42];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[19];
	t1 += -x[22];
	t1 += -x[25];
	t1 += x[31];
	t1 += -x[37];
	t1 += -x[40];
	t1 += -x[43];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[20];
	t1 += -x[23];
	t1 += -x[26];
	t1 += x[32];
	t1 += -x[38];
	t1 += -x[41];
	t1 += -x[44];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[18];
	t1 += -x[19];
	t1 += -x[20];
	t1 += -x[27];
	t1 += x[30];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[21];
	t1 += -x[22];
	t1 += -x[23];
	t1 += -x[28];
	t1 += x[31];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[24];
	t1 += -x[25];
	t1 += -x[26];
	t1 += -x[29];
	t1 += x[32];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[27];
	t1 += -x[28];
	t1 += -x[29];
	t1 += -x[33];
	t1 += -x[34];
	t1 += -x[35];
	t1 += x[45];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[0];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[1];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[2];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[3];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[4];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[5];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[6];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[7];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[8];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[0];
	t1 += x[9];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -0.001*x[1];
	t1 += x[10];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[2];
	t1 += x[11];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -0.1*x[3];
	t1 += x[12];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -0.1*x[4];
	t1 += x[13];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -0.03*x[5];
	t1 += x[14];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -0.05*x[6];
	t1 += x[15];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[7];
	t1 += x[16];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -0.8*x[8];
	t1 += x[17];
	c[39] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[30];
	J[132] = -x[0];
	J[57] = x[24];
	J[102] = x[15];
	J[42] = x[21];
	J[87] = x[12];
	J[27] = x[18];
	J[72] = x[9];
	J[162] = 10.;
	J[177] = 110.;
	J[192] = 100.;

   /*** derivatives for constraint 2 ***/

	J[3] = -x[30];
	J[133] = -x[1];
	J[62] = x[24];
	J[103] = x[16];
	J[47] = x[21];
	J[88] = x[13];
	J[32] = x[18];
	J[73] = x[10];
	J[163] = 390.;
	J[178] = 16780.;
	J[193] = 25.;

   /*** derivatives for constraint 3 ***/

	J[6] = -x[30];
	J[134] = -x[2];
	J[67] = x[24];
	J[104] = x[17];
	J[52] = x[21];
	J[89] = x[14];
	J[37] = x[18];
	J[74] = x[11];
	J[164] = 25.;
	J[179] = 40.;
	J[194] = 35.;

   /*** derivatives for constraint 4 ***/

	J[9] = -x[31];
	J[137] = -x[3];
	J[58] = x[25];
	J[107] = x[15];
	J[43] = x[22];
	J[92] = x[12];
	J[28] = x[19];
	J[77] = x[9];
	J[167] = 10.;
	J[182] = 110.;
	J[197] = 100.;

   /*** derivatives for constraint 5 ***/

	J[12] = -x[31];
	J[138] = -x[4];
	J[63] = x[25];
	J[108] = x[16];
	J[48] = x[22];
	J[93] = x[13];
	J[33] = x[19];
	J[78] = x[10];
	J[168] = 390.;
	J[183] = 16780.;
	J[198] = 25.;

   /*** derivatives for constraint 6 ***/

	J[15] = -x[31];
	J[139] = -x[5];
	J[68] = x[25];
	J[109] = x[17];
	J[53] = x[22];
	J[94] = x[14];
	J[38] = x[19];
	J[79] = x[11];
	J[169] = 25.;
	J[184] = 40.;
	J[199] = 35.;

   /*** derivatives for constraint 7 ***/

	J[18] = -x[32];
	J[142] = -x[6];
	J[59] = x[26];
	J[112] = x[15];
	J[44] = x[23];
	J[97] = x[12];
	J[29] = x[20];
	J[82] = x[9];
	J[172] = 10.;
	J[187] = 110.;
	J[202] = 100.;

   /*** derivatives for constraint 8 ***/

	J[21] = -x[32];
	J[143] = -x[7];
	J[64] = x[26];
	J[113] = x[16];
	J[49] = x[23];
	J[98] = x[13];
	J[34] = x[20];
	J[83] = x[10];
	J[173] = 390.;
	J[188] = 16780.;
	J[203] = 25.;

   /*** derivatives for constraint 9 ***/

	J[24] = -x[32];
	J[144] = -x[8];
	J[69] = x[26];
	J[114] = x[17];
	J[54] = x[23];
	J[99] = x[14];
	J[39] = x[20];
	J[84] = x[11];
	J[174] = 25.;
	J[189] = 40.;
	J[204] = 35.;

   /*** derivatives for constraint 10 ***/

	J[60] = x[29];
	J[127] = x[15];
	J[45] = x[28];
	J[122] = x[12];
	J[30] = x[27];
	J[117] = x[9];
	J[147] = 10.;
	J[152] = 110.;
	J[157] = 100.;
	J[207] = -2.;

   /*** derivatives for constraint 11 ***/

	J[65] = x[29];
	J[128] = x[16];
	J[50] = x[28];
	J[123] = x[13];
	J[35] = x[27];
	J[118] = x[10];
	J[148] = 390.;
	J[153] = 16780.;
	J[158] = 25.;
	J[208] = -2.;

   /*** derivatives for constraint 12 ***/

	J[70] = x[29];
	J[129] = x[17];
	J[55] = x[28];
	J[124] = x[14];
	J[40] = x[27];
	J[119] = x[11];
	J[149] = 25.;
	J[154] = 40.;
	J[159] = 35.;
	J[209] = -5.;

   /*** derivatives for constraint 13 ***/

	J[150] = -1.;
	J[165] = -1.;
	J[170] = -1.;
	J[175] = -1.;

   /*** derivatives for constraint 14 ***/

	J[155] = -1.;
	J[180] = -1.;
	J[185] = -1.;
	J[190] = -1.;

   /*** derivatives for constraint 15 ***/

	J[160] = -1.;
	J[195] = -1.;
	J[200] = -1.;
	J[205] = -1.;

   /*** derivatives for constraint 16 ***/

	J[75] = -1.;
	J[90] = -1.;
	J[105] = -1.;
	J[135] = 1.;
	J[166] = -1.;
	J[181] = -1.;
	J[196] = -1.;

   /*** derivatives for constraint 17 ***/

	J[80] = -1.;
	J[95] = -1.;
	J[110] = -1.;
	J[140] = 1.;
	J[171] = -1.;
	J[186] = -1.;
	J[201] = -1.;

   /*** derivatives for constraint 18 ***/

	J[85] = -1.;
	J[100] = -1.;
	J[115] = -1.;
	J[145] = 1.;
	J[176] = -1.;
	J[191] = -1.;
	J[206] = -1.;

   /*** derivatives for constraint 19 ***/

	J[76] = -1.;
	J[81] = -1.;
	J[86] = -1.;
	J[120] = -1.;
	J[136] = 1.;

   /*** derivatives for constraint 20 ***/

	J[91] = -1.;
	J[96] = -1.;
	J[101] = -1.;
	J[125] = -1.;
	J[141] = 1.;

   /*** derivatives for constraint 21 ***/

	J[106] = -1.;
	J[111] = -1.;
	J[116] = -1.;
	J[130] = -1.;
	J[146] = 1.;

   /*** derivatives for constraint 22 ***/

	J[121] = -1.;
	J[126] = -1.;
	J[131] = -1.;
	J[151] = -1.;
	J[156] = -1.;
	J[161] = -1.;
	J[210] = 1.;

   /*** derivatives for constraint 23 ***/

	J[1] = 1.;

   /*** derivatives for constraint 24 ***/

	J[4] = 1.;

   /*** derivatives for constraint 25 ***/

	J[7] = 1.;

   /*** derivatives for constraint 26 ***/

	J[10] = 1.;

   /*** derivatives for constraint 27 ***/

	J[13] = 1.;

   /*** derivatives for constraint 28 ***/

	J[16] = 1.;

   /*** derivatives for constraint 29 ***/

	J[19] = 1.;

   /*** derivatives for constraint 30 ***/

	J[22] = 1.;

   /*** derivatives for constraint 31 ***/

	J[25] = 1.;

   /*** derivatives for constraint 32 ***/

	J[2] = -1.;
	J[31] = 1.;

   /*** derivatives for constraint 33 ***/

	J[5] = -0.001;
	J[36] = 1.;

   /*** derivatives for constraint 34 ***/

	J[8] = -1.;
	J[41] = 1.;

   /*** derivatives for constraint 35 ***/

	J[11] = -0.1;
	J[46] = 1.;

   /*** derivatives for constraint 36 ***/

	J[14] = -0.1;
	J[51] = 1.;

   /*** derivatives for constraint 37 ***/

	J[17] = -0.03;
	J[56] = 1.;

   /*** derivatives for constraint 38 ***/

	J[20] = -0.05;
	J[61] = 1.;

   /*** derivatives for constraint 39 ***/

	J[23] = -1.;
	J[66] = 1.;

   /*** derivatives for constraint 40 ***/

	J[26] = -0.8;
	J[71] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
