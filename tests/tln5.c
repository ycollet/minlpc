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
 fint tln5_auxcom_[1] = { 5 /* nlc */ };
 fint tln5_funcom_[187] = {
	35 /* nvar */,
	1 /* nobj */,
	30 /* ncon */,
	145 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	22,
	29,
	36,
	40,
	44,
	48,
	52,
	56,
	60,
	64,
	68,
	72,
	76,
	80,
	84,
	88,
	92,
	96,
	100,
	104,
	108,
	112,
	116,
	120,
	124,
	128,
	132,
	136,
	138,
	140,
	142,
	144,
	146,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	21,
	26,
	1,
	2,
	3,
	4,
	5,
	22,
	27,
	1,
	2,
	3,
	4,
	5,
	23,
	28,
	1,
	2,
	3,
	4,
	5,
	24,
	29,
	1,
	2,
	3,
	4,
	5,
	25,
	30,
	1,
	6,
	11,
	16,
	1,
	7,
	12,
	17,
	1,
	8,
	13,
	18,
	1,
	9,
	14,
	19,
	1,
	10,
	15,
	20,
	2,
	6,
	11,
	16,
	2,
	7,
	12,
	17,
	2,
	8,
	13,
	18,
	2,
	9,
	14,
	19,
	2,
	10,
	15,
	20,
	3,
	6,
	11,
	16,
	3,
	7,
	12,
	17,
	3,
	8,
	13,
	18,
	3,
	9,
	14,
	19,
	3,
	10,
	15,
	20,
	4,
	6,
	11,
	16,
	4,
	7,
	12,
	17,
	4,
	8,
	13,
	18,
	4,
	9,
	14,
	19,
	4,
	10,
	15,
	20,
	5,
	6,
	11,
	16,
	5,
	7,
	12,
	17,
	5,
	8,
	13,
	18,
	5,
	9,
	14,
	19,
	5,
	10,
	15,
	20,
	21,
	26,
	22,
	27,
	23,
	28,
	24,
	29,
	25,
	30 };

 real tln5_boundc_[1+70+60] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		15.,
		0.,
		15.,
		0.,
		15.,
		0.,
		15.,
		0.,
		15.,
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
		-12.,
		-1.7e308,
		-6.,
		-1.7e308,
		-15.,
		-1.7e308,
		-6.,
		-1.7e308,
		-9.,
		-1.7e308,
		2000.,
		-1.7e308,
		2000.,
		-1.7e308,
		2000.,
		-1.7e308,
		2000.,
		-1.7e308,
		2000.,
		-1.7e308,
		-1800.,
		-1.7e308,
		-1800.,
		-1.7e308,
		-1800.,
		-1.7e308,
		-1800.,
		-1.7e308,
		-1800.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
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

 real tln5_x0comn_[35] = {
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
		0.,
		0.,
		0.,
		0.,
		0. };

static real tln5_old_x[35];
static int tln5_xkind = -1;

 static int
tln5_xcheck(real *x)
{
	real *x1 = tln5_old_x, *xe = x + 35;
	errno = 0;
	if (tln5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tln5_xkind = 0;
	return 1;
	}
 real
tln5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (tln5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += x[2];
	rv += x[3];
	rv += x[4];
	rv += 0.1*x[30];
	rv += 0.2*x[31];
	rv += 0.3*x[32];
	rv += 0.4*x[33];
	rv += 0.5*x[34];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[2] = 1.;
	g[3] = 1.;
	g[4] = 1.;
	g[30] = 0.1;
	g[31] = 0.2;
	g[32] = 0.3;
	g[33] = 0.4;
	g[34] = 0.5;
	}

	return rv;
}

 void
tln5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (tln5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[5];
	v[1] = x[1] * x[6];
	v[0] += v[1];
	v[1] = x[2] * x[7];
	v[0] += v[1];
	v[1] = x[3] * x[8];
	v[0] += v[1];
	v[1] = x[4] * x[9];
	v[0] += v[1];
	v[1] = -v[0];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = x[0] * x[10];
	v[1] = x[1] * x[11];
	v[0] += v[1];
	v[1] = x[2] * x[12];
	v[0] += v[1];
	v[1] = x[3] * x[13];
	v[0] += v[1];
	v[1] = x[4] * x[14];
	v[0] += v[1];
	v[1] = -v[0];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = x[0] * x[15];
	v[1] = x[1] * x[16];
	v[0] += v[1];
	v[1] = x[2] * x[17];
	v[0] += v[1];
	v[1] = x[3] * x[18];
	v[0] += v[1];
	v[1] = x[4] * x[19];
	v[0] += v[1];
	v[1] = -v[0];
	c[2] = v[1];

  /***  constraint 4  ***/

	v[0] = x[0] * x[20];
	v[1] = x[1] * x[21];
	v[0] += v[1];
	v[1] = x[2] * x[22];
	v[0] += v[1];
	v[1] = x[3] * x[23];
	v[0] += v[1];
	v[1] = x[4] * x[24];
	v[0] += v[1];
	v[1] = -v[0];
	c[3] = v[1];

  /***  constraint 5  ***/

	v[0] = x[0] * x[25];
	v[1] = x[1] * x[26];
	v[0] += v[1];
	v[1] = x[2] * x[27];
	v[0] += v[1];
	v[1] = x[3] * x[28];
	v[0] += v[1];
	v[1] = x[4] * x[29];
	v[0] += v[1];
	v[1] = -v[0];
	c[4] = v[1];

  /***  constraint 6  ***/

	t1 = 330.*x[5];
	t1 += 360.*x[10];
	t1 += 370.*x[15];
	t1 += 415.*x[20];
	t1 += 435.*x[25];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 330.*x[6];
	t1 += 360.*x[11];
	t1 += 370.*x[16];
	t1 += 415.*x[21];
	t1 += 435.*x[26];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 330.*x[7];
	t1 += 360.*x[12];
	t1 += 370.*x[17];
	t1 += 415.*x[22];
	t1 += 435.*x[27];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 330.*x[8];
	t1 += 360.*x[13];
	t1 += 370.*x[18];
	t1 += 415.*x[23];
	t1 += 435.*x[28];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 330.*x[9];
	t1 += 360.*x[14];
	t1 += 370.*x[19];
	t1 += 415.*x[24];
	t1 += 435.*x[29];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -330.*x[5];
	t1 += -360.*x[10];
	t1 += -370.*x[15];
	t1 += -415.*x[20];
	t1 += -435.*x[25];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -330.*x[6];
	t1 += -360.*x[11];
	t1 += -370.*x[16];
	t1 += -415.*x[21];
	t1 += -435.*x[26];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -330.*x[7];
	t1 += -360.*x[12];
	t1 += -370.*x[17];
	t1 += -415.*x[22];
	t1 += -435.*x[27];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -330.*x[8];
	t1 += -360.*x[13];
	t1 += -370.*x[18];
	t1 += -415.*x[23];
	t1 += -435.*x[28];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -330.*x[9];
	t1 += -360.*x[14];
	t1 += -370.*x[19];
	t1 += -415.*x[24];
	t1 += -435.*x[29];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[5];
	t1 += x[10];
	t1 += x[15];
	t1 += x[20];
	t1 += x[25];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[6];
	t1 += x[11];
	t1 += x[16];
	t1 += x[21];
	t1 += x[26];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[7];
	t1 += x[12];
	t1 += x[17];
	t1 += x[22];
	t1 += x[27];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[8];
	t1 += x[13];
	t1 += x[18];
	t1 += x[23];
	t1 += x[28];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[9];
	t1 += x[14];
	t1 += x[19];
	t1 += x[24];
	t1 += x[29];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[0];
	t1 += x[30];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[1];
	t1 += x[31];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[2];
	t1 += x[32];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[3];
	t1 += x[33];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[4];
	t1 += x[34];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[0];
	t1 += -15.*x[30];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[1];
	t1 += -15.*x[31];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[2];
	t1 += -15.*x[32];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[3];
	t1 += -15.*x[33];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[4];
	t1 += -15.*x[34];
	c[29] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[51] = -x[4];
	J[28] = -x[9];
	J[47] = -x[3];
	J[21] = -x[8];
	J[43] = -x[2];
	J[14] = -x[7];
	J[39] = -x[1];
	J[7] = -x[6];
	J[35] = -x[0];
	J[0] = -x[5];

   /*** derivatives for constraint 2 ***/

	J[71] = -x[4];
	J[29] = -x[14];
	J[67] = -x[3];
	J[22] = -x[13];
	J[63] = -x[2];
	J[15] = -x[12];
	J[59] = -x[1];
	J[8] = -x[11];
	J[55] = -x[0];
	J[1] = -x[10];

   /*** derivatives for constraint 3 ***/

	J[91] = -x[4];
	J[30] = -x[19];
	J[87] = -x[3];
	J[23] = -x[18];
	J[83] = -x[2];
	J[16] = -x[17];
	J[79] = -x[1];
	J[9] = -x[16];
	J[75] = -x[0];
	J[2] = -x[15];

   /*** derivatives for constraint 4 ***/

	J[111] = -x[4];
	J[31] = -x[24];
	J[107] = -x[3];
	J[24] = -x[23];
	J[103] = -x[2];
	J[17] = -x[22];
	J[99] = -x[1];
	J[10] = -x[21];
	J[95] = -x[0];
	J[3] = -x[20];

   /*** derivatives for constraint 5 ***/

	J[131] = -x[4];
	J[32] = -x[29];
	J[127] = -x[3];
	J[25] = -x[28];
	J[123] = -x[2];
	J[18] = -x[27];
	J[119] = -x[1];
	J[11] = -x[26];
	J[115] = -x[0];
	J[4] = -x[25];

   /*** derivatives for constraint 6 ***/

	J[36] = 330.;
	J[56] = 360.;
	J[76] = 370.;
	J[96] = 415.;
	J[116] = 435.;

   /*** derivatives for constraint 7 ***/

	J[40] = 330.;
	J[60] = 360.;
	J[80] = 370.;
	J[100] = 415.;
	J[120] = 435.;

   /*** derivatives for constraint 8 ***/

	J[44] = 330.;
	J[64] = 360.;
	J[84] = 370.;
	J[104] = 415.;
	J[124] = 435.;

   /*** derivatives for constraint 9 ***/

	J[48] = 330.;
	J[68] = 360.;
	J[88] = 370.;
	J[108] = 415.;
	J[128] = 435.;

   /*** derivatives for constraint 10 ***/

	J[52] = 330.;
	J[72] = 360.;
	J[92] = 370.;
	J[112] = 415.;
	J[132] = 435.;

   /*** derivatives for constraint 11 ***/

	J[37] = -330.;
	J[57] = -360.;
	J[77] = -370.;
	J[97] = -415.;
	J[117] = -435.;

   /*** derivatives for constraint 12 ***/

	J[41] = -330.;
	J[61] = -360.;
	J[81] = -370.;
	J[101] = -415.;
	J[121] = -435.;

   /*** derivatives for constraint 13 ***/

	J[45] = -330.;
	J[65] = -360.;
	J[85] = -370.;
	J[105] = -415.;
	J[125] = -435.;

   /*** derivatives for constraint 14 ***/

	J[49] = -330.;
	J[69] = -360.;
	J[89] = -370.;
	J[109] = -415.;
	J[129] = -435.;

   /*** derivatives for constraint 15 ***/

	J[53] = -330.;
	J[73] = -360.;
	J[93] = -370.;
	J[113] = -415.;
	J[133] = -435.;

   /*** derivatives for constraint 16 ***/

	J[38] = 1.;
	J[58] = 1.;
	J[78] = 1.;
	J[98] = 1.;
	J[118] = 1.;

   /*** derivatives for constraint 17 ***/

	J[42] = 1.;
	J[62] = 1.;
	J[82] = 1.;
	J[102] = 1.;
	J[122] = 1.;

   /*** derivatives for constraint 18 ***/

	J[46] = 1.;
	J[66] = 1.;
	J[86] = 1.;
	J[106] = 1.;
	J[126] = 1.;

   /*** derivatives for constraint 19 ***/

	J[50] = 1.;
	J[70] = 1.;
	J[90] = 1.;
	J[110] = 1.;
	J[130] = 1.;

   /*** derivatives for constraint 20 ***/

	J[54] = 1.;
	J[74] = 1.;
	J[94] = 1.;
	J[114] = 1.;
	J[134] = 1.;

   /*** derivatives for constraint 21 ***/

	J[5] = -1.;
	J[135] = 1.;

   /*** derivatives for constraint 22 ***/

	J[12] = -1.;
	J[137] = 1.;

   /*** derivatives for constraint 23 ***/

	J[19] = -1.;
	J[139] = 1.;

   /*** derivatives for constraint 24 ***/

	J[26] = -1.;
	J[141] = 1.;

   /*** derivatives for constraint 25 ***/

	J[33] = -1.;
	J[143] = 1.;

   /*** derivatives for constraint 26 ***/

	J[6] = 1.;
	J[136] = -15.;

   /*** derivatives for constraint 27 ***/

	J[13] = 1.;
	J[138] = -15.;

   /*** derivatives for constraint 28 ***/

	J[20] = 1.;
	J[140] = -15.;

   /*** derivatives for constraint 29 ***/

	J[27] = 1.;
	J[142] = -15.;

   /*** derivatives for constraint 30 ***/

	J[34] = 1.;
	J[144] = -15.;
	}
}
#ifdef __cplusplus
	}
#endif
