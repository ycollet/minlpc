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
 fint pooling_adhya1tp_auxcom_[1] = { 20 /* nlc */ };
 fint pooling_adhya1tp_funcom_[240] = {
	33 /* nvar */,
	1 /* nobj */,
	49 /* ncon */,
	200 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
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
	57,
	65,
	73,
	80,
	88,
	95,
	103,
	111,
	119,
	126,
	133,
	141,
	147,
	155,
	163,
	170,
	178,
	186,
	194,
	201,

	/* rownos */
	1,
	5,
	48,
	2,
	6,
	48,
	3,
	7,
	48,
	4,
	8,
	48,
	9,
	13,
	17,
	49,
	10,
	14,
	18,
	49,
	11,
	15,
	19,
	49,
	12,
	16,
	20,
	49,
	1,
	2,
	3,
	4,
	5,
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
	17,
	18,
	19,
	20,
	1,
	21,
	26,
	28,
	32,
	33,
	34,
	35,
	2,
	21,
	26,
	29,
	36,
	37,
	38,
	39,
	3,
	21,
	26,
	30,
	40,
	41,
	42,
	43,
	4,
	21,
	26,
	31,
	44,
	45,
	47,
	5,
	22,
	26,
	28,
	32,
	33,
	34,
	35,
	6,
	22,
	26,
	29,
	37,
	38,
	39,
	7,
	22,
	26,
	30,
	40,
	41,
	42,
	43,
	8,
	22,
	26,
	31,
	44,
	45,
	46,
	47,
	9,
	23,
	27,
	28,
	32,
	33,
	34,
	35,
	10,
	23,
	27,
	29,
	37,
	38,
	39,
	11,
	23,
	27,
	30,
	40,
	42,
	43,
	12,
	23,
	27,
	31,
	44,
	45,
	46,
	47,
	13,
	24,
	27,
	28,
	34,
	35,
	14,
	24,
	27,
	29,
	36,
	37,
	38,
	39,
	15,
	24,
	27,
	30,
	40,
	41,
	42,
	43,
	16,
	24,
	27,
	31,
	45,
	46,
	47,
	17,
	25,
	27,
	28,
	32,
	33,
	34,
	35,
	18,
	25,
	27,
	29,
	36,
	37,
	38,
	39,
	19,
	25,
	27,
	30,
	40,
	41,
	42,
	43,
	20,
	25,
	27,
	31,
	44,
	45,
	47 };

 real pooling_adhya1tp_boundc_[1+66+98] /* Infinity, variable bounds, constraint bounds */ = {
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
		75.,
		0.,
		75.,
		0.,
		75.,
		0.,
		75.,
		0.,
		75.,
		0.,
		10.,
		0.,
		25.,
		0.,
		30.,
		0.,
		10.,
		0.,
		10.,
		0.,
		25.,
		0.,
		30.,
		0.,
		10.,
		0.,
		10.,
		0.,
		25.,
		0.,
		30.,
		0.,
		10.,
		0.,
		10.,
		0.,
		25.,
		0.,
		30.,
		0.,
		10.,
		0.,
		10.,
		0.,
		25.,
		0.,
		30.,
		0.,
		10.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		75.,
		-1.7e308,
		75.,
		-1.7e308,
		75.,
		-1.7e308,
		75.,
		-1.7e308,
		75.,
		-1.7e308,
		75.,
		-1.7e308,
		75.,
		-1.7e308,
		10.,
		-1.7e308,
		25.,
		-1.7e308,
		30.,
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
		1.,
		1.,
		1.,
		1.};

 real pooling_adhya1tp_x0comn_[33] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real pooling_adhya1tp_old_x[33];
static int pooling_adhya1tp_xkind = -1;

 static int
pooling_adhya1tp_xcheck(real *x)
{
	real *x1 = pooling_adhya1tp_old_x, *xe = x + 33;
	errno = 0;
	if (pooling_adhya1tp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_adhya1tp_xkind = 0;
	return 1;
	}
 real
pooling_adhya1tp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_adhya1tp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -9.*x[13];
	rv += -18.*x[14];
	rv += -8.*x[15];
	rv += -3.*x[16];
	rv += -13.*x[17];
	rv += -22.*x[18];
	rv += -12.*x[19];
	rv += -7.*x[20];
	rv += -14.*x[21];
	rv += -23.*x[22];
	rv += -13.*x[23];
	rv += -8.*x[24];
	rv += -6.*x[25];
	rv += -15.*x[26];
	rv += -5.*x[27];
	rv += -11.*x[29];
	rv += -20.*x[30];
	rv += -10.*x[31];
	rv += -5.*x[32];
	;}

	if (wantfg & 2) {
	g[13] = -9.;
	g[14] = -18.;
	g[15] = -8.;
	g[16] = -3.;
	g[17] = -13.;
	g[18] = -22.;
	g[19] = -12.;
	g[20] = -7.;
	g[21] = -14.;
	g[22] = -23.;
	g[23] = -13.;
	g[24] = -8.;
	g[25] = -6.;
	g[26] = -15.;
	g[27] = -5.;
	g[29] = -11.;
	g[30] = -20.;
	g[31] = -10.;
	g[32] = -5.;
	}

	return rv;
}

 void
pooling_adhya1tp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_adhya1tp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[14];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[15];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[0] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[17];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[18];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[19];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[3] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[20];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[4] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[21];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[5] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[22];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[6] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[23];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[7] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[24];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[4] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[25];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[5] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[26];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[6] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[27];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[7] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[28];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[4] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[29];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[5] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[30];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[6] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[31];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[7] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[32];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[13];
	t1 += x[17];
	t1 += x[21];
	t1 += x[25];
	t1 += x[29];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[14];
	t1 += x[18];
	t1 += x[22];
	t1 += x[26];
	t1 += x[30];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[15];
	t1 += x[19];
	t1 += x[23];
	t1 += x[27];
	t1 += x[31];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[16];
	t1 += x[20];
	t1 += x[24];
	t1 += x[28];
	t1 += x[32];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -2.*x[13];
	t1 += x[17];
	t1 += x[21];
	t1 += -2.*x[29];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = 3.*x[13];
	t1 += -2.*x[17];
	t1 += 2.5*x[21];
	t1 += -0.3*x[29];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = 0.75*x[13];
	t1 += -0.25*x[17];
	t1 += -0.25*x[21];
	t1 += -0.25*x[25];
	t1 += 0.75*x[29];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -0.25*x[13];
	t1 += 1.25*x[17];
	t1 += 0.15*x[21];
	t1 += 0.25*x[25];
	t1 += 0.85*x[29];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -3.*x[14];
	t1 += -x[26];
	t1 += -3.*x[30];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = 3.5*x[14];
	t1 += -1.5*x[18];
	t1 += 3.*x[22];
	t1 += 0.5*x[26];
	t1 += 0.2*x[30];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = 0.5*x[14];
	t1 += -0.5*x[18];
	t1 += -0.5*x[22];
	t1 += -0.5*x[26];
	t1 += 0.5*x[30];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[14];
	t1 += 0.5*x[18];
	t1 += -0.6*x[22];
	t1 += -0.5*x[26];
	t1 += 0.1*x[30];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -0.5*x[15];
	t1 += 2.5*x[19];
	t1 += 2.5*x[23];
	t1 += 1.5*x[27];
	t1 += -0.5*x[31];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = 0.5*x[15];
	t1 += -4.5*x[19];
	t1 += -2.5*x[27];
	t1 += -2.8*x[31];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = 0.1*x[15];
	t1 += -0.9*x[19];
	t1 += -0.9*x[23];
	t1 += -0.9*x[27];
	t1 += 0.1*x[31];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -0.3*x[15];
	t1 += 1.2*x[19];
	t1 += 0.1*x[23];
	t1 += 0.2*x[27];
	t1 += 0.8*x[31];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -2.*x[16];
	t1 += x[20];
	t1 += x[24];
	t1 += -2.*x[32];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = 2.*x[16];
	t1 += -3.*x[20];
	t1 += 1.5*x[24];
	t1 += -x[28];
	t1 += -1.3*x[32];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[20];
	t1 += -x[24];
	t1 += -x[28];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -1.3*x[16];
	t1 += 0.2*x[20];
	t1 += -0.9*x[24];
	t1 += -0.8*x[28];
	t1 += -0.2*x[32];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	c[48] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[28] = -x[0];
	J[0] = -x[8];
	J[48] = 1.;

   /*** derivatives for constraint 2 ***/

	J[29] = -x[1];
	J[3] = -x[8];
	J[56] = 1.;

   /*** derivatives for constraint 3 ***/

	J[30] = -x[2];
	J[6] = -x[8];
	J[64] = 1.;

   /*** derivatives for constraint 4 ***/

	J[31] = -x[3];
	J[9] = -x[8];
	J[72] = 1.;

   /*** derivatives for constraint 5 ***/

	J[32] = -x[0];
	J[1] = -x[9];
	J[79] = 1.;

   /*** derivatives for constraint 6 ***/

	J[33] = -x[1];
	J[4] = -x[9];
	J[87] = 1.;

   /*** derivatives for constraint 7 ***/

	J[34] = -x[2];
	J[7] = -x[9];
	J[94] = 1.;

   /*** derivatives for constraint 8 ***/

	J[35] = -x[3];
	J[10] = -x[9];
	J[102] = 1.;

   /*** derivatives for constraint 9 ***/

	J[36] = -x[4];
	J[12] = -x[10];
	J[110] = 1.;

   /*** derivatives for constraint 10 ***/

	J[37] = -x[5];
	J[16] = -x[10];
	J[118] = 1.;

   /*** derivatives for constraint 11 ***/

	J[38] = -x[6];
	J[20] = -x[10];
	J[125] = 1.;

   /*** derivatives for constraint 12 ***/

	J[39] = -x[7];
	J[24] = -x[10];
	J[132] = 1.;

   /*** derivatives for constraint 13 ***/

	J[40] = -x[4];
	J[13] = -x[11];
	J[140] = 1.;

   /*** derivatives for constraint 14 ***/

	J[41] = -x[5];
	J[17] = -x[11];
	J[146] = 1.;

   /*** derivatives for constraint 15 ***/

	J[42] = -x[6];
	J[21] = -x[11];
	J[154] = 1.;

   /*** derivatives for constraint 16 ***/

	J[43] = -x[7];
	J[25] = -x[11];
	J[162] = 1.;

   /*** derivatives for constraint 17 ***/

	J[44] = -x[4];
	J[14] = -x[12];
	J[169] = 1.;

   /*** derivatives for constraint 18 ***/

	J[45] = -x[5];
	J[18] = -x[12];
	J[177] = 1.;

   /*** derivatives for constraint 19 ***/

	J[46] = -x[6];
	J[22] = -x[12];
	J[185] = 1.;

   /*** derivatives for constraint 20 ***/

	J[47] = -x[7];
	J[26] = -x[12];
	J[193] = 1.;

   /*** derivatives for constraint 21 ***/

	J[49] = 1.;
	J[57] = 1.;
	J[65] = 1.;
	J[73] = 1.;

   /*** derivatives for constraint 22 ***/

	J[80] = 1.;
	J[88] = 1.;
	J[95] = 1.;
	J[103] = 1.;

   /*** derivatives for constraint 23 ***/

	J[111] = 1.;
	J[119] = 1.;
	J[126] = 1.;
	J[133] = 1.;

   /*** derivatives for constraint 24 ***/

	J[141] = 1.;
	J[147] = 1.;
	J[155] = 1.;
	J[163] = 1.;

   /*** derivatives for constraint 25 ***/

	J[170] = 1.;
	J[178] = 1.;
	J[186] = 1.;
	J[194] = 1.;

   /*** derivatives for constraint 26 ***/

	J[50] = 1.;
	J[58] = 1.;
	J[66] = 1.;
	J[74] = 1.;
	J[81] = 1.;
	J[89] = 1.;
	J[96] = 1.;
	J[104] = 1.;

   /*** derivatives for constraint 27 ***/

	J[112] = 1.;
	J[120] = 1.;
	J[127] = 1.;
	J[134] = 1.;
	J[142] = 1.;
	J[148] = 1.;
	J[156] = 1.;
	J[164] = 1.;
	J[171] = 1.;
	J[179] = 1.;
	J[187] = 1.;
	J[195] = 1.;

   /*** derivatives for constraint 28 ***/

	J[51] = 1.;
	J[82] = 1.;
	J[113] = 1.;
	J[143] = 1.;
	J[172] = 1.;

   /*** derivatives for constraint 29 ***/

	J[59] = 1.;
	J[90] = 1.;
	J[121] = 1.;
	J[149] = 1.;
	J[180] = 1.;

   /*** derivatives for constraint 30 ***/

	J[67] = 1.;
	J[97] = 1.;
	J[128] = 1.;
	J[157] = 1.;
	J[188] = 1.;

   /*** derivatives for constraint 31 ***/

	J[75] = 1.;
	J[105] = 1.;
	J[135] = 1.;
	J[165] = 1.;
	J[196] = 1.;

   /*** derivatives for constraint 32 ***/

	J[52] = -2.;
	J[83] = 1.;
	J[114] = 1.;
	J[173] = -2.;

   /*** derivatives for constraint 33 ***/

	J[53] = 3.;
	J[84] = -2.;
	J[115] = 2.5;
	J[174] = -0.3;

   /*** derivatives for constraint 34 ***/

	J[54] = 0.75;
	J[85] = -0.25;
	J[116] = -0.25;
	J[144] = -0.25;
	J[175] = 0.75;

   /*** derivatives for constraint 35 ***/

	J[55] = -0.25;
	J[86] = 1.25;
	J[117] = 0.15;
	J[145] = 0.25;
	J[176] = 0.85;

   /*** derivatives for constraint 36 ***/

	J[60] = -3.;
	J[150] = -1.;
	J[181] = -3.;

   /*** derivatives for constraint 37 ***/

	J[61] = 3.5;
	J[91] = -1.5;
	J[122] = 3.;
	J[151] = 0.5;
	J[182] = 0.2;

   /*** derivatives for constraint 38 ***/

	J[62] = 0.5;
	J[92] = -0.5;
	J[123] = -0.5;
	J[152] = -0.5;
	J[183] = 0.5;

   /*** derivatives for constraint 39 ***/

	J[63] = -1.;
	J[93] = 0.5;
	J[124] = -0.6;
	J[153] = -0.5;
	J[184] = 0.1;

   /*** derivatives for constraint 40 ***/

	J[68] = -0.5;
	J[98] = 2.5;
	J[129] = 2.5;
	J[158] = 1.5;
	J[189] = -0.5;

   /*** derivatives for constraint 41 ***/

	J[69] = 0.5;
	J[99] = -4.5;
	J[159] = -2.5;
	J[190] = -2.8;

   /*** derivatives for constraint 42 ***/

	J[70] = 0.1;
	J[100] = -0.9;
	J[130] = -0.9;
	J[160] = -0.9;
	J[191] = 0.1;

   /*** derivatives for constraint 43 ***/

	J[71] = -0.3;
	J[101] = 1.2;
	J[131] = 0.1;
	J[161] = 0.2;
	J[192] = 0.8;

   /*** derivatives for constraint 44 ***/

	J[76] = -2.;
	J[106] = 1.;
	J[136] = 1.;
	J[197] = -2.;

   /*** derivatives for constraint 45 ***/

	J[77] = 2.;
	J[107] = -3.;
	J[137] = 1.5;
	J[166] = -1.;
	J[198] = -1.3;

   /*** derivatives for constraint 46 ***/

	J[108] = -1.;
	J[138] = -1.;
	J[167] = -1.;

   /*** derivatives for constraint 47 ***/

	J[78] = -1.3;
	J[109] = 0.2;
	J[139] = -0.9;
	J[168] = -0.8;
	J[199] = -0.2;

   /*** derivatives for constraint 48 ***/

	J[2] = 1.;
	J[5] = 1.;
	J[8] = 1.;
	J[11] = 1.;

   /*** derivatives for constraint 49 ***/

	J[15] = 1.;
	J[19] = 1.;
	J[23] = 1.;
	J[27] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
