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
 fint wastepaper3_auxcom_[1] = { 16 /* nlc */ };
 fint wastepaper3_funcom_[235] = {
	52 /* nvar */,
	1 /* nobj */,
	30 /* ncon */,
	176 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	12,
	15,
	21,
	26,
	29,
	35,
	40,
	43,
	49,
	54,
	57,
	63,
	68,
	71,
	77,
	82,
	85,
	91,
	94,
	97,
	100,
	103,
	106,
	109,
	112,
	115,
	118,
	121,
	124,
	127,
	130,
	133,
	136,
	139,
	142,
	145,
	148,
	151,
	154,
	157,
	160,
	163,
	165,
	166,
	167,
	168,
	171,
	174,
	177,

	/* rownos */
	1,
	4,
	2,
	5,
	3,
	6,
	7,
	8,
	9,
	13,
	18,
	1,
	7,
	18,
	1,
	7,
	8,
	9,
	15,
	18,
	7,
	8,
	9,
	13,
	19,
	2,
	8,
	19,
	2,
	7,
	8,
	9,
	15,
	19,
	7,
	8,
	9,
	13,
	20,
	3,
	9,
	20,
	3,
	7,
	8,
	9,
	15,
	20,
	10,
	11,
	12,
	14,
	21,
	4,
	10,
	21,
	4,
	10,
	11,
	12,
	16,
	21,
	10,
	11,
	12,
	14,
	22,
	5,
	11,
	22,
	5,
	10,
	11,
	12,
	16,
	22,
	10,
	11,
	12,
	14,
	23,
	6,
	12,
	23,
	6,
	10,
	11,
	12,
	16,
	23,
	7,
	10,
	24,
	8,
	11,
	24,
	9,
	12,
	24,
	7,
	10,
	27,
	8,
	11,
	27,
	9,
	12,
	27,
	7,
	10,
	25,
	8,
	11,
	25,
	9,
	12,
	25,
	7,
	10,
	28,
	8,
	11,
	28,
	9,
	12,
	28,
	7,
	10,
	26,
	8,
	11,
	26,
	9,
	12,
	26,
	7,
	10,
	29,
	8,
	11,
	29,
	9,
	12,
	29,
	13,
	14,
	24,
	13,
	14,
	25,
	13,
	14,
	26,
	15,
	16,
	27,
	15,
	16,
	28,
	15,
	16,
	29,
	13,
	17,
	15,
	14,
	16,
	7,
	10,
	30,
	8,
	11,
	30,
	9,
	12,
	30 };

 real wastepaper3_boundc_[1+104+60] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.1,
		0.9,
		0.1,
		0.9,
		0.1,
		0.9,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
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
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		1.,
		0.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.0675,
		0.,
		0.,
		0.,
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.};

 real wastepaper3_x0comn_[52] = {
		0.1,
		0.1,
		0.1,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real wastepaper3_pd[12];
static real wastepaper3_old_x[52];
static int wastepaper3_xkind = -1;

 static int
wastepaper3_xcheck(real *x)
{
	real *x1 = wastepaper3_old_x, *xe = x + 52;
	errno = 0;
	if (wastepaper3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wastepaper3_xkind = 0;
	return 1;
	}
 real
wastepaper3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wastepaper3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[48];
	;}

	if (wantfg & 2) {
	g[48] = 1.;
	}

	return rv;
}

 void
wastepaper3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (wastepaper3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	wastepaper3_pd[1] = pow(x[0], 0.29);
	if (errno) in_trouble2("pow",x[0],0.29);
	if (x[0] > 0.) {
	wastepaper3_pd[0] = 0.29*(wastepaper3_pd[1]/x[0]);
	} else if (0.29 > 1.) {
	wastepaper3_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.29);
	}
	v[1] = wastepaper3_pd[1] * x[4];
	t1 = v[1] + -x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	wastepaper3_pd[3] = pow(x[1], 0.13);
	if (errno) in_trouble2("pow",x[1],0.13);
	if (x[1] > 0.) {
	wastepaper3_pd[2] = 0.13*(wastepaper3_pd[3]/x[1]);
	} else if (0.13 > 1.) {
	wastepaper3_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.13);
	}
	v[1] = wastepaper3_pd[3] * x[7];
	t1 = v[1] + -x[8];
	c[1] = t1;

  /***  constraint 3  ***/

	wastepaper3_pd[5] = pow(x[2], 0.06);
	if (errno) in_trouble2("pow",x[2],0.06);
	if (x[2] > 0.) {
	wastepaper3_pd[4] = 0.06*(wastepaper3_pd[5]/x[2]);
	} else if (0.06 > 1.) {
	wastepaper3_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.06);
	}
	v[1] = wastepaper3_pd[5] * x[10];
	t1 = v[1] + -x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	wastepaper3_pd[7] = pow(x[0], 0.74);
	if (errno) in_trouble2("pow",x[0],0.74);
	if (x[0] > 0.) {
	wastepaper3_pd[6] = 0.74*(wastepaper3_pd[7]/x[0]);
	} else if (0.74 > 1.) {
	wastepaper3_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.74);
	}
	v[1] = wastepaper3_pd[7] * x[13];
	t1 = v[1] + -x[14];
	c[3] = t1;

  /***  constraint 5  ***/

	wastepaper3_pd[9] = pow(x[1], 0.79);
	if (errno) in_trouble2("pow",x[1],0.79);
	if (x[1] > 0.) {
	wastepaper3_pd[8] = 0.79*(wastepaper3_pd[9]/x[1]);
	} else if (0.79 > 1.) {
	wastepaper3_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.79);
	}
	v[1] = wastepaper3_pd[9] * x[16];
	t1 = v[1] + -x[17];
	c[4] = t1;

  /***  constraint 6  ***/

	wastepaper3_pd[11] = pow(x[2], 0.71);
	if (errno) in_trouble2("pow",x[2],0.71);
	if (x[2] > 0.) {
	wastepaper3_pd[10] = 0.71*(wastepaper3_pd[11]/x[2]);
	} else if (0.71 > 1.) {
	wastepaper3_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.71);
	}
	v[1] = wastepaper3_pd[11] * x[19];
	t1 = v[1] + -x[20];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[21] * x[3];
	v[1] = x[24] * x[5];
	v[0] += v[1];
	v[1] = x[27] * x[6];
	v[0] += v[1];
	v[1] = x[30] * x[8];
	v[0] += v[1];
	v[1] = x[33] * x[9];
	v[0] += v[1];
	v[1] = x[36] * x[11];
	v[0] += v[1];
	t1 = v[0] + -x[4];
	t1 += 0.675*x[49];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[22] * x[3];
	v[1] = x[25] * x[5];
	v[0] += v[1];
	v[1] = x[28] * x[6];
	v[0] += v[1];
	v[1] = x[31] * x[8];
	v[0] += v[1];
	v[1] = x[34] * x[9];
	v[0] += v[1];
	v[1] = x[37] * x[11];
	v[0] += v[1];
	t1 = v[0] + -x[7];
	t1 += 0.675*x[50];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[23] * x[3];
	v[1] = x[26] * x[5];
	v[0] += v[1];
	v[1] = x[29] * x[6];
	v[0] += v[1];
	v[1] = x[32] * x[8];
	v[0] += v[1];
	v[1] = x[35] * x[9];
	v[0] += v[1];
	v[1] = x[38] * x[11];
	v[0] += v[1];
	t1 = v[0] + -x[10];
	t1 += 0.675*x[51];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[21] * x[12];
	v[1] = x[24] * x[14];
	v[0] += v[1];
	v[1] = x[27] * x[15];
	v[0] += v[1];
	v[1] = x[30] * x[17];
	v[0] += v[1];
	v[1] = x[33] * x[18];
	v[0] += v[1];
	v[1] = x[36] * x[20];
	v[0] += v[1];
	t1 = v[0] + -x[13];
	t1 += 0.649*x[49];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[22] * x[12];
	v[1] = x[25] * x[14];
	v[0] += v[1];
	v[1] = x[28] * x[15];
	v[0] += v[1];
	v[1] = x[31] * x[17];
	v[0] += v[1];
	v[1] = x[34] * x[18];
	v[0] += v[1];
	v[1] = x[37] * x[20];
	v[0] += v[1];
	t1 = v[0] + -x[16];
	t1 += 0.649*x[50];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[23] * x[12];
	v[1] = x[26] * x[14];
	v[0] += v[1];
	v[1] = x[29] * x[15];
	v[0] += v[1];
	v[1] = x[32] * x[17];
	v[0] += v[1];
	v[1] = x[35] * x[18];
	v[0] += v[1];
	v[1] = x[38] * x[20];
	v[0] += v[1];
	t1 = v[0] + -x[19];
	t1 += 0.649*x[51];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[39] * x[3];
	v[1] = x[40] * x[6];
	v[0] += v[1];
	v[1] = x[41] * x[9];
	v[0] += v[1];
	t1 = v[0] + -x[45];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[39] * x[12];
	v[1] = x[40] * x[15];
	v[0] += v[1];
	v[1] = x[41] * x[18];
	v[0] += v[1];
	t1 = v[0] + -x[47];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[42] * x[5];
	v[1] = x[43] * x[8];
	v[0] += v[1];
	v[1] = x[44] * x[11];
	v[0] += v[1];
	t1 = v[0] + -x[46];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[42] * x[14];
	v[1] = x[43] * x[17];
	v[0] += v[1];
	v[1] = x[44] * x[20];
	v[0] += v[1];
	t1 = v[0] + -x[48];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[45];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += x[5];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[8];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[9];
	t1 += -x[10];
	t1 += x[11];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[12];
	t1 += -x[13];
	t1 += x[14];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[15];
	t1 += -x[16];
	t1 += x[17];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[18];
	t1 += -x[19];
	t1 += x[20];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[39];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[40];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[41];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[42];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[43];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[44];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[49];
	t1 += x[50];
	t1 += x[51];
	c[29] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[11] = wastepaper3_pd[1];
	J[0] = x[4]*wastepaper3_pd[0];
	J[14] = -1.;

   /*** derivatives for constraint 2 ***/

	J[25] = wastepaper3_pd[3];
	J[2] = x[7]*wastepaper3_pd[2];
	J[28] = -1.;

   /*** derivatives for constraint 3 ***/

	J[39] = wastepaper3_pd[5];
	J[4] = x[10]*wastepaper3_pd[4];
	J[42] = -1.;

   /*** derivatives for constraint 4 ***/

	J[53] = wastepaper3_pd[7];
	J[1] = x[13]*wastepaper3_pd[6];
	J[56] = -1.;

   /*** derivatives for constraint 5 ***/

	J[67] = wastepaper3_pd[9];
	J[3] = x[16]*wastepaper3_pd[8];
	J[70] = -1.;

   /*** derivatives for constraint 6 ***/

	J[81] = wastepaper3_pd[11];
	J[5] = x[19]*wastepaper3_pd[10];
	J[84] = -1.;

   /*** derivatives for constraint 7 ***/

	J[43] = x[36];
	J[135] = x[11];
	J[34] = x[33];
	J[126] = x[9];
	J[29] = x[30];
	J[117] = x[8];
	J[20] = x[27];
	J[108] = x[6];
	J[15] = x[24];
	J[99] = x[5];
	J[6] = x[21];
	J[90] = x[3];
	J[12] = -1.;
	J[167] = 0.675;

   /*** derivatives for constraint 8 ***/

	J[44] = x[37];
	J[138] = x[11];
	J[35] = x[34];
	J[129] = x[9];
	J[30] = x[31];
	J[120] = x[8];
	J[21] = x[28];
	J[111] = x[6];
	J[16] = x[25];
	J[102] = x[5];
	J[7] = x[22];
	J[93] = x[3];
	J[26] = -1.;
	J[170] = 0.675;

   /*** derivatives for constraint 9 ***/

	J[45] = x[38];
	J[141] = x[11];
	J[36] = x[35];
	J[132] = x[9];
	J[31] = x[32];
	J[123] = x[8];
	J[22] = x[29];
	J[114] = x[6];
	J[17] = x[26];
	J[105] = x[5];
	J[8] = x[23];
	J[96] = x[3];
	J[40] = -1.;
	J[173] = 0.675;

   /*** derivatives for constraint 10 ***/

	J[85] = x[36];
	J[136] = x[20];
	J[76] = x[33];
	J[127] = x[18];
	J[71] = x[30];
	J[118] = x[17];
	J[62] = x[27];
	J[109] = x[15];
	J[57] = x[24];
	J[100] = x[14];
	J[48] = x[21];
	J[91] = x[12];
	J[54] = -1.;
	J[168] = 0.649;

   /*** derivatives for constraint 11 ***/

	J[86] = x[37];
	J[139] = x[20];
	J[77] = x[34];
	J[130] = x[18];
	J[72] = x[31];
	J[121] = x[17];
	J[63] = x[28];
	J[112] = x[15];
	J[58] = x[25];
	J[103] = x[14];
	J[49] = x[22];
	J[94] = x[12];
	J[68] = -1.;
	J[171] = 0.649;

   /*** derivatives for constraint 12 ***/

	J[87] = x[38];
	J[142] = x[20];
	J[78] = x[35];
	J[133] = x[18];
	J[73] = x[32];
	J[124] = x[17];
	J[64] = x[29];
	J[115] = x[15];
	J[59] = x[26];
	J[106] = x[14];
	J[50] = x[23];
	J[97] = x[12];
	J[82] = -1.;
	J[174] = 0.649;

   /*** derivatives for constraint 13 ***/

	J[37] = x[41];
	J[150] = x[9];
	J[23] = x[40];
	J[147] = x[6];
	J[9] = x[39];
	J[144] = x[3];
	J[162] = -1.;

   /*** derivatives for constraint 14 ***/

	J[79] = x[41];
	J[151] = x[18];
	J[65] = x[40];
	J[148] = x[15];
	J[51] = x[39];
	J[145] = x[12];
	J[165] = -1.;

   /*** derivatives for constraint 15 ***/

	J[46] = x[44];
	J[159] = x[11];
	J[32] = x[43];
	J[156] = x[8];
	J[18] = x[42];
	J[153] = x[5];
	J[164] = -1.;

   /*** derivatives for constraint 16 ***/

	J[88] = x[44];
	J[160] = x[20];
	J[74] = x[43];
	J[157] = x[17];
	J[60] = x[42];
	J[154] = x[14];
	J[166] = -1.;

   /*** derivatives for constraint 17 ***/

	J[163] = 1.;

   /*** derivatives for constraint 18 ***/

	J[10] = 1.;
	J[13] = -1.;
	J[19] = 1.;

   /*** derivatives for constraint 19 ***/

	J[24] = 1.;
	J[27] = -1.;
	J[33] = 1.;

   /*** derivatives for constraint 20 ***/

	J[38] = 1.;
	J[41] = -1.;
	J[47] = 1.;

   /*** derivatives for constraint 21 ***/

	J[52] = 1.;
	J[55] = -1.;
	J[61] = 1.;

   /*** derivatives for constraint 22 ***/

	J[66] = 1.;
	J[69] = -1.;
	J[75] = 1.;

   /*** derivatives for constraint 23 ***/

	J[80] = 1.;
	J[83] = -1.;
	J[89] = 1.;

   /*** derivatives for constraint 24 ***/

	J[92] = 1.;
	J[95] = 1.;
	J[98] = 1.;
	J[146] = 1.;

   /*** derivatives for constraint 25 ***/

	J[110] = 1.;
	J[113] = 1.;
	J[116] = 1.;
	J[149] = 1.;

   /*** derivatives for constraint 26 ***/

	J[128] = 1.;
	J[131] = 1.;
	J[134] = 1.;
	J[152] = 1.;

   /*** derivatives for constraint 27 ***/

	J[101] = 1.;
	J[104] = 1.;
	J[107] = 1.;
	J[155] = 1.;

   /*** derivatives for constraint 28 ***/

	J[119] = 1.;
	J[122] = 1.;
	J[125] = 1.;
	J[158] = 1.;

   /*** derivatives for constraint 29 ***/

	J[137] = 1.;
	J[140] = 1.;
	J[143] = 1.;
	J[161] = 1.;

   /*** derivatives for constraint 30 ***/

	J[169] = 1.;
	J[172] = 1.;
	J[175] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
