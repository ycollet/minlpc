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
 fint wastewater02m2_auxcom_[1] = { 12 /* nlc */ };
 fint wastewater02m2_funcom_[188] = {
	41 /* nvar */,
	1 /* nobj */,
	44 /* ncon */,
	140 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	18,
	23,
	26,
	29,
	32,
	35,
	38,
	41,
	44,
	47,
	50,
	53,
	56,
	59,
	62,
	65,
	68,
	71,
	74,
	77,
	79,
	83,
	87,
	91,
	95,
	98,
	101,
	104,
	107,
	111,
	115,
	119,
	123,
	126,
	129,
	132,
	135,
	138,
	141,

	/* rownos */
	1,
	8,
	11,
	15,
	17,
	36,
	9,
	10,
	12,
	16,
	18,
	37,
	1,
	2,
	5,
	38,
	40,
	3,
	4,
	6,
	39,
	41,
	1,
	7,
	42,
	2,
	8,
	42,
	3,
	9,
	43,
	4,
	10,
	43,
	5,
	11,
	42,
	6,
	12,
	43,
	7,
	15,
	17,
	8,
	16,
	17,
	9,
	15,
	18,
	10,
	16,
	18,
	13,
	19,
	32,
	14,
	19,
	33,
	11,
	17,
	19,
	12,
	18,
	19,
	13,
	15,
	28,
	13,
	16,
	29,
	14,
	15,
	30,
	14,
	16,
	31,
	19,
	44,
	1,
	36,
	38,
	40,
	2,
	37,
	39,
	40,
	3,
	36,
	38,
	41,
	4,
	37,
	39,
	41,
	20,
	26,
	44,
	21,
	27,
	44,
	5,
	40,
	44,
	6,
	41,
	44,
	20,
	22,
	36,
	38,
	20,
	23,
	37,
	39,
	21,
	24,
	36,
	38,
	21,
	25,
	37,
	39,
	26,
	32,
	34,
	27,
	33,
	35,
	22,
	28,
	34,
	23,
	29,
	34,
	24,
	30,
	35,
	25,
	31,
	35 };

 real wastewater02m2_boundc_[1+82+88] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-60.,
		-60.,
		-20.,
		-20.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-24000.,
		-24000.,
		-16000.,
		-16000.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.,
		1.,
		1.,
		1.,
		-1.7e308,
		0.};

 real wastewater02m2_x0comn_[41] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real wastewater02m2_old_x[41];
static int wastewater02m2_xkind = -1;

 static int
wastewater02m2_xcheck(real *x)
{
	real *x1 = wastewater02m2_old_x, *xe = x + 41;
	errno = 0;
	if (wastewater02m2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wastewater02m2_xkind = 0;
	return 1;
	}
 real
wastewater02m2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wastewater02m2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	}

	return rv;
}

 void
wastewater02m2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (wastewater02m2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] * x[4];
	t1 = v[0] + -x[23];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] * x[5];
	t1 = v[0] + -x[24];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[3] * x[6];
	t1 = v[0] + -x[25];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] * x[7];
	t1 = v[0] + -x[26];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[2] * x[8];
	t1 = v[0] + -x[29];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[3] * x[9];
	t1 = v[0] + -x[30];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[0] * x[4];
	t1 = v[0] + -x[10];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[0] * x[5];
	t1 = v[0] + -x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[1] * x[6];
	t1 = v[0] + -x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[1] * x[7];
	t1 = v[0] + -x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[0] * x[8];
	t1 = v[0] + -x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[1] * x[9];
	t1 = v[0] + -x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[14];
	t1 += -x[18];
	t1 += -x[19];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[15];
	t1 += -x[20];
	t1 += -x[21];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[0];
	t1 += -x[10];
	t1 += -x[12];
	t1 += -x[18];
	t1 += -x[20];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[1];
	t1 += -x[11];
	t1 += -x[13];
	t1 += -x[19];
	t1 += -x[21];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[0];
	t1 += -x[10];
	t1 += -x[11];
	t1 += -x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[1];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[17];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[14];
	t1 += -x[15];
	t1 += -x[16];
	t1 += -x[17];
	t1 += x[22];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[27];
	t1 += -x[31];
	t1 += -x[32];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[28];
	t1 += -x[33];
	t1 += -x[34];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[31];
	t1 += 24000.*x[37];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[32];
	t1 += 24000.*x[38];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[33];
	t1 += 16000.*x[39];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[34];
	t1 += 16000.*x[40];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[27];
	t1 += 24000.*x[35];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[28];
	t1 += 16000.*x[36];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[18];
	t1 += 60.*x[37];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[19];
	t1 += 60.*x[38];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[20];
	t1 += 20.*x[39];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[21];
	t1 += 20.*x[40];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[14];
	t1 += 60.*x[35];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[15];
	t1 += 20.*x[36];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[35];
	t1 += x[37];
	t1 += x[38];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[36];
	t1 += x[39];
	t1 += x[40];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -200.*x[0];
	t1 += x[23];
	t1 += x[25];
	t1 += x[31];
	t1 += x[33];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -1000.*x[1];
	t1 += x[24];
	t1 += x[26];
	t1 += x[32];
	t1 += x[34];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[2];
	t1 += 0.01*x[23];
	t1 += 0.01*x[25];
	t1 += 0.01*x[31];
	t1 += 0.01*x[33];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[3];
	t1 += 0.2*x[24];
	t1 += 0.2*x[26];
	t1 += 0.2*x[32];
	t1 += 0.2*x[34];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[2];
	t1 += -x[23];
	t1 += -x[24];
	t1 += -x[29];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[3];
	t1 += -x[25];
	t1 += -x[26];
	t1 += -x[30];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[8];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += x[9];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -10.*x[22];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	c[43] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[22] = x[2];
	J[12] = x[4];
	J[78] = -1.;

   /*** derivatives for constraint 2 ***/

	J[25] = x[2];
	J[13] = x[5];
	J[82] = -1.;

   /*** derivatives for constraint 3 ***/

	J[28] = x[3];
	J[17] = x[6];
	J[86] = -1.;

   /*** derivatives for constraint 4 ***/

	J[31] = x[3];
	J[18] = x[7];
	J[90] = -1.;

   /*** derivatives for constraint 5 ***/

	J[34] = x[2];
	J[14] = x[8];
	J[100] = -1.;

   /*** derivatives for constraint 6 ***/

	J[37] = x[3];
	J[19] = x[9];
	J[103] = -1.;

   /*** derivatives for constraint 7 ***/

	J[23] = x[0];
	J[0] = x[4];
	J[40] = -1.;

   /*** derivatives for constraint 8 ***/

	J[26] = x[0];
	J[1] = x[5];
	J[43] = -1.;

   /*** derivatives for constraint 9 ***/

	J[29] = x[1];
	J[6] = x[6];
	J[46] = -1.;

   /*** derivatives for constraint 10 ***/

	J[32] = x[1];
	J[7] = x[7];
	J[49] = -1.;

   /*** derivatives for constraint 11 ***/

	J[35] = x[0];
	J[2] = x[8];
	J[58] = -1.;

   /*** derivatives for constraint 12 ***/

	J[38] = x[1];
	J[8] = x[9];
	J[61] = -1.;

   /*** derivatives for constraint 13 ***/

	J[52] = -1.;
	J[64] = -1.;
	J[67] = -1.;

   /*** derivatives for constraint 14 ***/

	J[55] = -1.;
	J[70] = -1.;
	J[73] = -1.;

   /*** derivatives for constraint 15 ***/

	J[3] = 1.;
	J[41] = -1.;
	J[47] = -1.;
	J[65] = -1.;
	J[71] = -1.;

   /*** derivatives for constraint 16 ***/

	J[9] = 1.;
	J[44] = -1.;
	J[50] = -1.;
	J[68] = -1.;
	J[74] = -1.;

   /*** derivatives for constraint 17 ***/

	J[4] = 1.;
	J[42] = -1.;
	J[45] = -1.;
	J[59] = -1.;

   /*** derivatives for constraint 18 ***/

	J[10] = 1.;
	J[48] = -1.;
	J[51] = -1.;
	J[62] = -1.;

   /*** derivatives for constraint 19 ***/

	J[53] = -1.;
	J[56] = -1.;
	J[60] = -1.;
	J[63] = -1.;
	J[76] = 1.;

   /*** derivatives for constraint 20 ***/

	J[94] = -1.;
	J[106] = -1.;
	J[110] = -1.;

   /*** derivatives for constraint 21 ***/

	J[97] = -1.;
	J[114] = -1.;
	J[118] = -1.;

   /*** derivatives for constraint 22 ***/

	J[107] = -1.;
	J[128] = 24000.;

   /*** derivatives for constraint 23 ***/

	J[111] = -1.;
	J[131] = 24000.;

   /*** derivatives for constraint 24 ***/

	J[115] = -1.;
	J[134] = 16000.;

   /*** derivatives for constraint 25 ***/

	J[119] = -1.;
	J[137] = 16000.;

   /*** derivatives for constraint 26 ***/

	J[95] = -1.;
	J[122] = 24000.;

   /*** derivatives for constraint 27 ***/

	J[98] = -1.;
	J[125] = 16000.;

   /*** derivatives for constraint 28 ***/

	J[66] = -1.;
	J[129] = 60.;

   /*** derivatives for constraint 29 ***/

	J[69] = -1.;
	J[132] = 60.;

   /*** derivatives for constraint 30 ***/

	J[72] = -1.;
	J[135] = 20.;

   /*** derivatives for constraint 31 ***/

	J[75] = -1.;
	J[138] = 20.;

   /*** derivatives for constraint 32 ***/

	J[54] = -1.;
	J[123] = 60.;

   /*** derivatives for constraint 33 ***/

	J[57] = -1.;
	J[126] = 20.;

   /*** derivatives for constraint 34 ***/

	J[124] = 1.;
	J[130] = 1.;
	J[133] = 1.;

   /*** derivatives for constraint 35 ***/

	J[127] = 1.;
	J[136] = 1.;
	J[139] = 1.;

   /*** derivatives for constraint 36 ***/

	J[5] = -200.;
	J[79] = 1.;
	J[87] = 1.;
	J[108] = 1.;
	J[116] = 1.;

   /*** derivatives for constraint 37 ***/

	J[11] = -1000.;
	J[83] = 1.;
	J[91] = 1.;
	J[112] = 1.;
	J[120] = 1.;

   /*** derivatives for constraint 38 ***/

	J[15] = -1.;
	J[80] = 0.01;
	J[88] = 0.01;
	J[109] = 0.01;
	J[117] = 0.01;

   /*** derivatives for constraint 39 ***/

	J[20] = -1.;
	J[84] = 0.2;
	J[92] = 0.2;
	J[113] = 0.2;
	J[121] = 0.2;

   /*** derivatives for constraint 40 ***/

	J[16] = 1.;
	J[81] = -1.;
	J[85] = -1.;
	J[101] = -1.;

   /*** derivatives for constraint 41 ***/

	J[21] = 1.;
	J[89] = -1.;
	J[93] = -1.;
	J[104] = -1.;

   /*** derivatives for constraint 42 ***/

	J[24] = 1.;
	J[27] = 1.;
	J[36] = 1.;

   /*** derivatives for constraint 43 ***/

	J[30] = 1.;
	J[33] = 1.;
	J[39] = 1.;

   /*** derivatives for constraint 44 ***/

	J[77] = -10.;
	J[96] = 1.;
	J[99] = 1.;
	J[102] = 1.;
	J[105] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
