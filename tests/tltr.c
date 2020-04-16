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
 fint tltr_auxcom_[1] = { 3 /* nlc */ };
 fint tltr_funcom_[271] = {
	48 /* nvar */,
	1 /* nobj */,
	54 /* ncon */,
	216 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,
	21,
	25,
	29,
	33,
	37,
	41,
	45,
	49,
	53,
	57,
	61,
	65,
	69,
	73,
	77,
	81,
	85,
	89,
	93,
	97,
	101,
	105,
	109,
	115,
	121,
	127,
	134,
	141,
	148,
	154,
	160,
	166,
	167,
	168,
	169,
	174,
	179,
	184,
	190,
	196,
	202,
	207,
	212,
	217,

	/* rownos */
	1,
	4,
	13,
	31,
	1,
	5,
	14,
	32,
	1,
	6,
	15,
	33,
	1,
	7,
	16,
	34,
	1,
	8,
	17,
	35,
	1,
	9,
	18,
	36,
	1,
	10,
	19,
	37,
	1,
	11,
	20,
	38,
	1,
	12,
	21,
	39,
	2,
	4,
	13,
	31,
	2,
	5,
	14,
	32,
	2,
	6,
	15,
	33,
	2,
	7,
	16,
	34,
	2,
	8,
	17,
	35,
	2,
	9,
	18,
	36,
	2,
	10,
	19,
	37,
	2,
	11,
	20,
	38,
	2,
	12,
	21,
	39,
	3,
	4,
	13,
	31,
	3,
	5,
	14,
	32,
	3,
	6,
	15,
	33,
	3,
	7,
	16,
	34,
	3,
	8,
	17,
	35,
	3,
	9,
	18,
	36,
	3,
	10,
	19,
	37,
	3,
	11,
	20,
	38,
	3,
	12,
	21,
	39,
	1,
	2,
	3,
	22,
	40,
	49,
	1,
	2,
	3,
	23,
	41,
	50,
	1,
	2,
	3,
	24,
	42,
	51,
	1,
	2,
	3,
	25,
	40,
	49,
	52,
	1,
	2,
	3,
	26,
	41,
	50,
	53,
	1,
	2,
	3,
	27,
	42,
	51,
	54,
	1,
	2,
	3,
	28,
	40,
	52,
	1,
	2,
	3,
	29,
	41,
	53,
	1,
	2,
	3,
	30,
	42,
	54,
	40,
	41,
	42,
	4,
	13,
	22,
	31,
	43,
	5,
	14,
	23,
	32,
	44,
	6,
	15,
	24,
	33,
	45,
	7,
	16,
	25,
	34,
	43,
	46,
	8,
	17,
	26,
	35,
	44,
	47,
	9,
	18,
	27,
	36,
	45,
	48,
	10,
	19,
	28,
	37,
	46,
	11,
	20,
	29,
	38,
	47,
	12,
	21,
	30,
	39,
	48 };

 real tltr_boundc_[1+96+108] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
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
		9.,
		1.7e308,
		15.,
		1.7e308,
		80.,
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
		0.};

 real tltr_x0comn_[48] = {
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		15.,
		80.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real tltr_old_x[48];
static int tltr_xkind = -1;

 static int
tltr_xcheck(real *x)
{
	real *x1 = tltr_old_x, *xe = x + 48;
	errno = 0;
	if (tltr_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tltr_xkind = 0;
	return 1;
	}
 real
tltr_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (tltr_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 35.*x[37];
	rv += 35.*x[38];
	rv += 6.53333333333333*x[39];
	rv += 6.53333333333333*x[40];
	rv += 6.7375*x[41];
	rv += 6.53333333333333*x[42];
	rv += 6.53333333333333*x[43];
	rv += 6.7375*x[44];
	rv += 6.53333333333333*x[45];
	rv += 6.53333333333333*x[46];
	rv += 6.7375*x[47];
	;}

	if (wantfg & 2) {
	g[37] = 35.;
	g[38] = 35.;
	g[39] = 6.53333333333333;
	g[40] = 6.53333333333333;
	g[41] = 6.7375;
	g[42] = 6.53333333333333;
	g[43] = 6.53333333333333;
	g[44] = 6.7375;
	g[45] = 6.53333333333333;
	g[46] = 6.53333333333333;
	g[47] = 6.7375;
	}

	return rv;
}

 void
tltr_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (tltr_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[27] * x[0];
	v[1] = x[30] * x[3];
	v[0] += v[1];
	v[1] = x[33] * x[6];
	v[0] += v[1];
	v[1] = x[28] * x[1];
	v[0] += v[1];
	v[1] = x[31] * x[4];
	v[0] += v[1];
	v[1] = x[34] * x[7];
	v[0] += v[1];
	v[1] = x[29] * x[2];
	v[0] += v[1];
	v[1] = x[32] * x[5];
	v[0] += v[1];
	v[1] = x[35] * x[8];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[27] * x[9];
	v[1] = x[30] * x[12];
	v[0] += v[1];
	v[1] = x[33] * x[15];
	v[0] += v[1];
	v[1] = x[28] * x[10];
	v[0] += v[1];
	v[1] = x[31] * x[13];
	v[0] += v[1];
	v[1] = x[34] * x[16];
	v[0] += v[1];
	v[1] = x[29] * x[11];
	v[0] += v[1];
	v[1] = x[32] * x[14];
	v[0] += v[1];
	v[1] = x[35] * x[17];
	v[0] += v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[27] * x[18];
	v[1] = x[30] * x[21];
	v[0] += v[1];
	v[1] = x[33] * x[24];
	v[0] += v[1];
	v[1] = x[28] * x[19];
	v[0] += v[1];
	v[1] = x[31] * x[22];
	v[0] += v[1];
	v[1] = x[34] * x[25];
	v[0] += v[1];
	v[1] = x[29] * x[20];
	v[0] += v[1];
	v[1] = x[32] * x[23];
	v[0] += v[1];
	v[1] = x[35] * x[26];
	v[0] += v[1];
	c[2] = v[0];

  /***  constraint 4  ***/

	t1 = 12.*x[0];
	t1 += 24.*x[9];
	t1 += 36.*x[18];
	t1 += -48.*x[39];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 12.*x[1];
	t1 += 24.*x[10];
	t1 += 36.*x[19];
	t1 += -48.*x[40];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 12.*x[2];
	t1 += 24.*x[11];
	t1 += 36.*x[20];
	t1 += -62.*x[41];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 12.*x[3];
	t1 += 24.*x[12];
	t1 += 36.*x[21];
	t1 += -48.*x[42];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 12.*x[4];
	t1 += 24.*x[13];
	t1 += 36.*x[22];
	t1 += -48.*x[43];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 12.*x[5];
	t1 += 24.*x[14];
	t1 += 36.*x[23];
	t1 += -62.*x[44];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 12.*x[6];
	t1 += 24.*x[15];
	t1 += 36.*x[24];
	t1 += -48.*x[45];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 12.*x[7];
	t1 += 24.*x[16];
	t1 += 36.*x[25];
	t1 += -48.*x[46];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 12.*x[8];
	t1 += 24.*x[17];
	t1 += 36.*x[26];
	t1 += -62.*x[47];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[0];
	t1 += -x[9];
	t1 += -x[18];
	t1 += x[39];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[1];
	t1 += -x[10];
	t1 += -x[19];
	t1 += x[40];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[2];
	t1 += -x[11];
	t1 += -x[20];
	t1 += x[41];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[3];
	t1 += -x[12];
	t1 += -x[21];
	t1 += x[42];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[4];
	t1 += -x[13];
	t1 += -x[22];
	t1 += x[43];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[5];
	t1 += -x[14];
	t1 += -x[23];
	t1 += x[44];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[6];
	t1 += -x[15];
	t1 += -x[24];
	t1 += x[45];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[7];
	t1 += -x[16];
	t1 += -x[25];
	t1 += x[46];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[8];
	t1 += -x[17];
	t1 += -x[26];
	t1 += x[47];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[27];
	t1 += -72.*x[39];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[28];
	t1 += -182.*x[40];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[29];
	t1 += -182.*x[41];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[30];
	t1 += -72.*x[42];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[31];
	t1 += -182.*x[43];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[32];
	t1 += -182.*x[44];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[33];
	t1 += -72.*x[45];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[34];
	t1 += -182.*x[46];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[35];
	t1 += -182.*x[47];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[0];
	t1 += x[9];
	t1 += x[18];
	t1 += -5.*x[39];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[1];
	t1 += x[10];
	t1 += x[19];
	t1 += -5.*x[40];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[2];
	t1 += x[11];
	t1 += x[20];
	t1 += -5.*x[41];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[3];
	t1 += x[12];
	t1 += x[21];
	t1 += -5.*x[42];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[4];
	t1 += x[13];
	t1 += x[22];
	t1 += -5.*x[43];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[5];
	t1 += x[14];
	t1 += x[23];
	t1 += -5.*x[44];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[6];
	t1 += x[15];
	t1 += x[24];
	t1 += -5.*x[45];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[7];
	t1 += x[16];
	t1 += x[25];
	t1 += -5.*x[46];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[8];
	t1 += x[17];
	t1 += x[26];
	t1 += -5.*x[47];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = 7.*x[27];
	t1 += 7.*x[30];
	t1 += 7.*x[33];
	t1 += -500.*x[36];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = 7.*x[28];
	t1 += 7.*x[31];
	t1 += 7.*x[34];
	t1 += -1270.*x[37];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = 7.*x[29];
	t1 += 7.*x[32];
	t1 += 7.*x[35];
	t1 += -1270.*x[38];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[39];
	t1 += x[42];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[40];
	t1 += x[43];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[41];
	t1 += x[44];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[42];
	t1 += x[45];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[43];
	t1 += x[46];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[44];
	t1 += x[47];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[27];
	t1 += x[30];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[28];
	t1 += x[31];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[29];
	t1 += x[32];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[30];
	t1 += x[33];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[31];
	t1 += x[34];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[32];
	t1 += x[35];
	c[53] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[32] = x[35];
	J[159] = x[8];
	J[20] = x[32];
	J[140] = x[5];
	J[8] = x[29];
	J[120] = x[2];
	J[28] = x[34];
	J[153] = x[7];
	J[16] = x[31];
	J[133] = x[4];
	J[4] = x[28];
	J[114] = x[1];
	J[24] = x[33];
	J[147] = x[6];
	J[12] = x[30];
	J[126] = x[3];
	J[0] = x[27];
	J[108] = x[0];

   /*** derivatives for constraint 2 ***/

	J[68] = x[35];
	J[160] = x[17];
	J[56] = x[32];
	J[141] = x[14];
	J[44] = x[29];
	J[121] = x[11];
	J[64] = x[34];
	J[154] = x[16];
	J[52] = x[31];
	J[134] = x[13];
	J[40] = x[28];
	J[115] = x[10];
	J[60] = x[33];
	J[148] = x[15];
	J[48] = x[30];
	J[127] = x[12];
	J[36] = x[27];
	J[109] = x[9];

   /*** derivatives for constraint 3 ***/

	J[104] = x[35];
	J[161] = x[26];
	J[92] = x[32];
	J[142] = x[23];
	J[80] = x[29];
	J[122] = x[20];
	J[100] = x[34];
	J[155] = x[25];
	J[88] = x[31];
	J[135] = x[22];
	J[76] = x[28];
	J[116] = x[19];
	J[96] = x[33];
	J[149] = x[24];
	J[84] = x[30];
	J[128] = x[21];
	J[72] = x[27];
	J[110] = x[18];

   /*** derivatives for constraint 4 ***/

	J[1] = 12.;
	J[37] = 24.;
	J[73] = 36.;
	J[168] = -48.;

   /*** derivatives for constraint 5 ***/

	J[5] = 12.;
	J[41] = 24.;
	J[77] = 36.;
	J[173] = -48.;

   /*** derivatives for constraint 6 ***/

	J[9] = 12.;
	J[45] = 24.;
	J[81] = 36.;
	J[178] = -62.;

   /*** derivatives for constraint 7 ***/

	J[13] = 12.;
	J[49] = 24.;
	J[85] = 36.;
	J[183] = -48.;

   /*** derivatives for constraint 8 ***/

	J[17] = 12.;
	J[53] = 24.;
	J[89] = 36.;
	J[189] = -48.;

   /*** derivatives for constraint 9 ***/

	J[21] = 12.;
	J[57] = 24.;
	J[93] = 36.;
	J[195] = -62.;

   /*** derivatives for constraint 10 ***/

	J[25] = 12.;
	J[61] = 24.;
	J[97] = 36.;
	J[201] = -48.;

   /*** derivatives for constraint 11 ***/

	J[29] = 12.;
	J[65] = 24.;
	J[101] = 36.;
	J[206] = -48.;

   /*** derivatives for constraint 12 ***/

	J[33] = 12.;
	J[69] = 24.;
	J[105] = 36.;
	J[211] = -62.;

   /*** derivatives for constraint 13 ***/

	J[2] = -1.;
	J[38] = -1.;
	J[74] = -1.;
	J[169] = 1.;

   /*** derivatives for constraint 14 ***/

	J[6] = -1.;
	J[42] = -1.;
	J[78] = -1.;
	J[174] = 1.;

   /*** derivatives for constraint 15 ***/

	J[10] = -1.;
	J[46] = -1.;
	J[82] = -1.;
	J[179] = 1.;

   /*** derivatives for constraint 16 ***/

	J[14] = -1.;
	J[50] = -1.;
	J[86] = -1.;
	J[184] = 1.;

   /*** derivatives for constraint 17 ***/

	J[18] = -1.;
	J[54] = -1.;
	J[90] = -1.;
	J[190] = 1.;

   /*** derivatives for constraint 18 ***/

	J[22] = -1.;
	J[58] = -1.;
	J[94] = -1.;
	J[196] = 1.;

   /*** derivatives for constraint 19 ***/

	J[26] = -1.;
	J[62] = -1.;
	J[98] = -1.;
	J[202] = 1.;

   /*** derivatives for constraint 20 ***/

	J[30] = -1.;
	J[66] = -1.;
	J[102] = -1.;
	J[207] = 1.;

   /*** derivatives for constraint 21 ***/

	J[34] = -1.;
	J[70] = -1.;
	J[106] = -1.;
	J[212] = 1.;

   /*** derivatives for constraint 22 ***/

	J[111] = 1.;
	J[170] = -72.;

   /*** derivatives for constraint 23 ***/

	J[117] = 1.;
	J[175] = -182.;

   /*** derivatives for constraint 24 ***/

	J[123] = 1.;
	J[180] = -182.;

   /*** derivatives for constraint 25 ***/

	J[129] = 1.;
	J[185] = -72.;

   /*** derivatives for constraint 26 ***/

	J[136] = 1.;
	J[191] = -182.;

   /*** derivatives for constraint 27 ***/

	J[143] = 1.;
	J[197] = -182.;

   /*** derivatives for constraint 28 ***/

	J[150] = 1.;
	J[203] = -72.;

   /*** derivatives for constraint 29 ***/

	J[156] = 1.;
	J[208] = -182.;

   /*** derivatives for constraint 30 ***/

	J[162] = 1.;
	J[213] = -182.;

   /*** derivatives for constraint 31 ***/

	J[3] = 1.;
	J[39] = 1.;
	J[75] = 1.;
	J[171] = -5.;

   /*** derivatives for constraint 32 ***/

	J[7] = 1.;
	J[43] = 1.;
	J[79] = 1.;
	J[176] = -5.;

   /*** derivatives for constraint 33 ***/

	J[11] = 1.;
	J[47] = 1.;
	J[83] = 1.;
	J[181] = -5.;

   /*** derivatives for constraint 34 ***/

	J[15] = 1.;
	J[51] = 1.;
	J[87] = 1.;
	J[186] = -5.;

   /*** derivatives for constraint 35 ***/

	J[19] = 1.;
	J[55] = 1.;
	J[91] = 1.;
	J[192] = -5.;

   /*** derivatives for constraint 36 ***/

	J[23] = 1.;
	J[59] = 1.;
	J[95] = 1.;
	J[198] = -5.;

   /*** derivatives for constraint 37 ***/

	J[27] = 1.;
	J[63] = 1.;
	J[99] = 1.;
	J[204] = -5.;

   /*** derivatives for constraint 38 ***/

	J[31] = 1.;
	J[67] = 1.;
	J[103] = 1.;
	J[209] = -5.;

   /*** derivatives for constraint 39 ***/

	J[35] = 1.;
	J[71] = 1.;
	J[107] = 1.;
	J[214] = -5.;

   /*** derivatives for constraint 40 ***/

	J[112] = 7.;
	J[130] = 7.;
	J[151] = 7.;
	J[165] = -500.;

   /*** derivatives for constraint 41 ***/

	J[118] = 7.;
	J[137] = 7.;
	J[157] = 7.;
	J[166] = -1270.;

   /*** derivatives for constraint 42 ***/

	J[124] = 7.;
	J[144] = 7.;
	J[163] = 7.;
	J[167] = -1270.;

   /*** derivatives for constraint 43 ***/

	J[172] = -1.;
	J[187] = 1.;

   /*** derivatives for constraint 44 ***/

	J[177] = -1.;
	J[193] = 1.;

   /*** derivatives for constraint 45 ***/

	J[182] = -1.;
	J[199] = 1.;

   /*** derivatives for constraint 46 ***/

	J[188] = -1.;
	J[205] = 1.;

   /*** derivatives for constraint 47 ***/

	J[194] = -1.;
	J[210] = 1.;

   /*** derivatives for constraint 48 ***/

	J[200] = -1.;
	J[215] = 1.;

   /*** derivatives for constraint 49 ***/

	J[113] = -1.;
	J[131] = 1.;

   /*** derivatives for constraint 50 ***/

	J[119] = -1.;
	J[138] = 1.;

   /*** derivatives for constraint 51 ***/

	J[125] = -1.;
	J[145] = 1.;

   /*** derivatives for constraint 52 ***/

	J[132] = -1.;
	J[152] = 1.;

   /*** derivatives for constraint 53 ***/

	J[139] = -1.;
	J[158] = 1.;

   /*** derivatives for constraint 54 ***/

	J[146] = -1.;
	J[164] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
