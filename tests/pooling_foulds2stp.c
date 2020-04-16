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
 fint pooling_foulds2stp_auxcom_[1] = { 32 /* nlc */ };
 fint pooling_foulds2stp_funcom_[247] = {
	48 /* nvar */,
	1 /* nobj */,
	52 /* ncon */,
	192 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,
	19,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	38,
	43,
	48,
	53,
	56,
	59,
	62,
	65,
	68,
	71,
	74,
	77,
	80,
	83,
	86,
	88,
	90,
	93,
	96,
	99,
	105,
	111,
	116,
	122,
	128,
	134,
	140,
	146,
	152,
	158,
	164,
	170,
	176,
	181,
	187,
	193,

	/* rownos */
	1,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	1,
	5,
	2,
	6,
	3,
	7,
	4,
	8,
	9,
	13,
	10,
	14,
	11,
	15,
	12,
	16,
	1,
	2,
	3,
	4,
	49,
	5,
	6,
	7,
	8,
	49,
	9,
	10,
	11,
	12,
	50,
	13,
	14,
	15,
	16,
	50,
	17,
	21,
	51,
	18,
	22,
	51,
	19,
	23,
	51,
	20,
	24,
	51,
	25,
	29,
	52,
	26,
	30,
	52,
	27,
	31,
	52,
	28,
	32,
	52,
	35,
	41,
	45,
	35,
	42,
	46,
	35,
	43,
	47,
	35,
	44,
	38,
	41,
	38,
	42,
	46,
	38,
	43,
	47,
	38,
	44,
	48,
	1,
	17,
	33,
	39,
	41,
	45,
	2,
	18,
	33,
	39,
	42,
	46,
	3,
	19,
	33,
	39,
	43,
	4,
	20,
	33,
	39,
	44,
	48,
	5,
	21,
	34,
	39,
	41,
	45,
	6,
	22,
	34,
	39,
	42,
	46,
	7,
	23,
	34,
	39,
	43,
	47,
	8,
	24,
	34,
	39,
	44,
	48,
	9,
	25,
	36,
	40,
	41,
	45,
	10,
	26,
	36,
	40,
	42,
	46,
	11,
	27,
	36,
	40,
	43,
	47,
	12,
	28,
	36,
	40,
	44,
	48,
	13,
	29,
	37,
	40,
	41,
	45,
	14,
	30,
	37,
	40,
	42,
	15,
	31,
	37,
	40,
	43,
	47,
	16,
	32,
	37,
	40,
	44,
	48 };

 real pooling_foulds2stp_boundc_[1+96+104] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		600.,
		0.,
		600.,
		0.,
		600.,
		0.,
		600.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
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
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		100.,
		-1.7e308,
		200.,
		-1.7e308,
		100.,
		-1.7e308,
		200.,
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
		1.,
		1.,
		1.,
		1.,
		1.};

 real pooling_foulds2stp_x0comn_[48] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real pooling_foulds2stp_old_x[48];
static int pooling_foulds2stp_xkind = -1;

 static int
pooling_foulds2stp_xcheck(real *x)
{
	real *x1 = pooling_foulds2stp_old_x, *xe = x + 48;
	errno = 0;
	if (pooling_foulds2stp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_foulds2stp_xkind = 0;
	return 1;
	}
 real
pooling_foulds2stp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_foulds2stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[24];
	rv += -5.*x[25];
	rv += 4.*x[26];
	rv += -2.*x[27];
	rv += -2.*x[28];
	rv += -8.*x[29];
	rv += x[30];
	rv += -5.*x[31];
	rv += -3.*x[32];
	rv += -9.*x[33];
	rv += -6.*x[35];
	rv += 7.*x[36];
	rv += x[37];
	rv += 10.*x[38];
	rv += 4.*x[39];
	rv += -6.*x[40];
	rv += -12.*x[41];
	rv += -3.*x[42];
	rv += -9.*x[43];
	rv += 4.*x[44];
	rv += -2.*x[45];
	rv += 7.*x[46];
	rv += x[47];
	;}

	if (wantfg & 2) {
	g[24] = 1.;
	g[25] = -5.;
	g[26] = 4.;
	g[27] = -2.;
	g[28] = -2.;
	g[29] = -8.;
	g[30] = 1.;
	g[31] = -5.;
	g[32] = -3.;
	g[33] = -9.;
	g[35] = -6.;
	g[36] = 7.;
	g[37] = 1.;
	g[38] = 10.;
	g[39] = 4.;
	g[40] = -6.;
	g[41] = -12.;
	g[42] = -3.;
	g[43] = -9.;
	g[44] = 4.;
	g[45] = -2.;
	g[46] = 7.;
	g[47] = 1.;
	}

	return rv;
}

 void
pooling_foulds2stp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_foulds2stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[12] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[32];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[12] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[33];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[12] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[34];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[12] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[35];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[13] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[36];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[13] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[37];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[13] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[38];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[13] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[39];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[14] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[40];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[14] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[41];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[14] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[42];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[14] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[43];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[15] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[44];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[15] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[45];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[15] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[46];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[15] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[47];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[16] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[32];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[17] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[33];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[18] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[34];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[19] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[35];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[16] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[36];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[17] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[37];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[18] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[38];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[19] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[39];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[20] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[40];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[21] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[41];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[22] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[42];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[23] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[43];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[20] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[44];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[21] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[45];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[22] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[46];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[23] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[47];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[24];
	t1 += x[28];
	t1 += x[32];
	t1 += x[36];
	t1 += x[40];
	t1 += x[44];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[25];
	t1 += x[29];
	t1 += x[33];
	t1 += x[37];
	t1 += x[41];
	t1 += x[45];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[26];
	t1 += x[30];
	t1 += x[34];
	t1 += x[38];
	t1 += x[42];
	t1 += x[46];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[27];
	t1 += x[31];
	t1 += x[35];
	t1 += x[39];
	t1 += x[43];
	t1 += x[47];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -0.5*x[24];
	t1 += 0.5*x[32];
	t1 += -1.5*x[36];
	t1 += x[40];
	t1 += -x[44];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = 0.5*x[25];
	t1 += x[29];
	t1 += 1.5*x[33];
	t1 += -0.5*x[37];
	t1 += 2.*x[41];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[26];
	t1 += -0.5*x[30];
	t1 += -2.*x[38];
	t1 += 0.5*x[42];
	t1 += -1.5*x[46];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = 0.5*x[31];
	t1 += x[35];
	t1 += -x[39];
	t1 += 1.5*x[43];
	t1 += -0.5*x[47];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[12];
	t1 += x[13];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[14];
	t1 += x[15];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	c[51] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[16] = -x[12];
	J[32] = -x[4];
	J[98] = 1.;

   /*** derivatives for constraint 2 ***/

	J[18] = -x[12];
	J[33] = -x[5];
	J[104] = 1.;

   /*** derivatives for constraint 3 ***/

	J[20] = -x[12];
	J[34] = -x[6];
	J[110] = 1.;

   /*** derivatives for constraint 4 ***/

	J[22] = -x[12];
	J[35] = -x[7];
	J[115] = 1.;

   /*** derivatives for constraint 5 ***/

	J[17] = -x[13];
	J[37] = -x[4];
	J[121] = 1.;

   /*** derivatives for constraint 6 ***/

	J[19] = -x[13];
	J[38] = -x[5];
	J[127] = 1.;

   /*** derivatives for constraint 7 ***/

	J[21] = -x[13];
	J[39] = -x[6];
	J[133] = 1.;

   /*** derivatives for constraint 8 ***/

	J[23] = -x[13];
	J[40] = -x[7];
	J[139] = 1.;

   /*** derivatives for constraint 9 ***/

	J[24] = -x[14];
	J[42] = -x[8];
	J[145] = 1.;

   /*** derivatives for constraint 10 ***/

	J[26] = -x[14];
	J[43] = -x[9];
	J[151] = 1.;

   /*** derivatives for constraint 11 ***/

	J[28] = -x[14];
	J[44] = -x[10];
	J[157] = 1.;

   /*** derivatives for constraint 12 ***/

	J[30] = -x[14];
	J[45] = -x[11];
	J[163] = 1.;

   /*** derivatives for constraint 13 ***/

	J[25] = -x[15];
	J[47] = -x[8];
	J[169] = 1.;

   /*** derivatives for constraint 14 ***/

	J[27] = -x[15];
	J[48] = -x[9];
	J[175] = 1.;

   /*** derivatives for constraint 15 ***/

	J[29] = -x[15];
	J[49] = -x[10];
	J[180] = 1.;

   /*** derivatives for constraint 16 ***/

	J[31] = -x[15];
	J[50] = -x[11];
	J[186] = 1.;

   /*** derivatives for constraint 17 ***/

	J[0] = -x[16];
	J[52] = -x[0];
	J[99] = 1.;

   /*** derivatives for constraint 18 ***/

	J[1] = -x[17];
	J[55] = -x[0];
	J[105] = 1.;

   /*** derivatives for constraint 19 ***/

	J[2] = -x[18];
	J[58] = -x[0];
	J[111] = 1.;

   /*** derivatives for constraint 20 ***/

	J[3] = -x[19];
	J[61] = -x[0];
	J[116] = 1.;

   /*** derivatives for constraint 21 ***/

	J[4] = -x[16];
	J[53] = -x[1];
	J[122] = 1.;

   /*** derivatives for constraint 22 ***/

	J[5] = -x[17];
	J[56] = -x[1];
	J[128] = 1.;

   /*** derivatives for constraint 23 ***/

	J[6] = -x[18];
	J[59] = -x[1];
	J[134] = 1.;

   /*** derivatives for constraint 24 ***/

	J[7] = -x[19];
	J[62] = -x[1];
	J[140] = 1.;

   /*** derivatives for constraint 25 ***/

	J[8] = -x[20];
	J[64] = -x[2];
	J[146] = 1.;

   /*** derivatives for constraint 26 ***/

	J[9] = -x[21];
	J[67] = -x[2];
	J[152] = 1.;

   /*** derivatives for constraint 27 ***/

	J[10] = -x[22];
	J[70] = -x[2];
	J[158] = 1.;

   /*** derivatives for constraint 28 ***/

	J[11] = -x[23];
	J[73] = -x[2];
	J[164] = 1.;

   /*** derivatives for constraint 29 ***/

	J[12] = -x[20];
	J[65] = -x[3];
	J[170] = 1.;

   /*** derivatives for constraint 30 ***/

	J[13] = -x[21];
	J[68] = -x[3];
	J[176] = 1.;

   /*** derivatives for constraint 31 ***/

	J[14] = -x[22];
	J[71] = -x[3];
	J[181] = 1.;

   /*** derivatives for constraint 32 ***/

	J[15] = -x[23];
	J[74] = -x[3];
	J[187] = 1.;

   /*** derivatives for constraint 33 ***/

	J[100] = 1.;
	J[106] = 1.;
	J[112] = 1.;
	J[117] = 1.;

   /*** derivatives for constraint 34 ***/

	J[123] = 1.;
	J[129] = 1.;
	J[135] = 1.;
	J[141] = 1.;

   /*** derivatives for constraint 35 ***/

	J[76] = 1.;
	J[79] = 1.;
	J[82] = 1.;
	J[85] = 1.;

   /*** derivatives for constraint 36 ***/

	J[147] = 1.;
	J[153] = 1.;
	J[159] = 1.;
	J[165] = 1.;

   /*** derivatives for constraint 37 ***/

	J[171] = 1.;
	J[177] = 1.;
	J[182] = 1.;
	J[188] = 1.;

   /*** derivatives for constraint 38 ***/

	J[87] = 1.;
	J[89] = 1.;
	J[92] = 1.;
	J[95] = 1.;

   /*** derivatives for constraint 39 ***/

	J[101] = 1.;
	J[107] = 1.;
	J[113] = 1.;
	J[118] = 1.;
	J[124] = 1.;
	J[130] = 1.;
	J[136] = 1.;
	J[142] = 1.;

   /*** derivatives for constraint 40 ***/

	J[148] = 1.;
	J[154] = 1.;
	J[160] = 1.;
	J[166] = 1.;
	J[172] = 1.;
	J[178] = 1.;
	J[183] = 1.;
	J[189] = 1.;

   /*** derivatives for constraint 41 ***/

	J[77] = 1.;
	J[88] = 1.;
	J[102] = 1.;
	J[125] = 1.;
	J[149] = 1.;
	J[173] = 1.;

   /*** derivatives for constraint 42 ***/

	J[80] = 1.;
	J[90] = 1.;
	J[108] = 1.;
	J[131] = 1.;
	J[155] = 1.;
	J[179] = 1.;

   /*** derivatives for constraint 43 ***/

	J[83] = 1.;
	J[93] = 1.;
	J[114] = 1.;
	J[137] = 1.;
	J[161] = 1.;
	J[184] = 1.;

   /*** derivatives for constraint 44 ***/

	J[86] = 1.;
	J[96] = 1.;
	J[119] = 1.;
	J[143] = 1.;
	J[167] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 45 ***/

	J[78] = -0.5;
	J[103] = 0.5;
	J[126] = -1.5;
	J[150] = 1.;
	J[174] = -1.;

   /*** derivatives for constraint 46 ***/

	J[81] = 0.5;
	J[91] = 1.;
	J[109] = 1.5;
	J[132] = -0.5;
	J[156] = 2.;

   /*** derivatives for constraint 47 ***/

	J[84] = -1.;
	J[94] = -0.5;
	J[138] = -2.;
	J[162] = 0.5;
	J[185] = -1.5;

   /*** derivatives for constraint 48 ***/

	J[97] = 0.5;
	J[120] = 1.;
	J[144] = -1.;
	J[168] = 1.5;
	J[191] = -0.5;

   /*** derivatives for constraint 49 ***/

	J[36] = 1.;
	J[41] = 1.;

   /*** derivatives for constraint 50 ***/

	J[46] = 1.;
	J[51] = 1.;

   /*** derivatives for constraint 51 ***/

	J[54] = 1.;
	J[57] = 1.;
	J[60] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 52 ***/

	J[66] = 1.;
	J[69] = 1.;
	J[72] = 1.;
	J[75] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
