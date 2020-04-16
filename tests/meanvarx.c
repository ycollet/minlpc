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
 fint meanvarx_auxcom_[1] = { 0 /* nlc */ };
 fint meanvarx_funcom_[145] = {
	35 /* nvar */,
	1 /* nobj */,
	44 /* ncon */,
	103 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	11,
	13,
	15,
	19,
	23,
	27,
	31,
	35,
	39,
	43,
	46,
	49,
	52,
	55,
	58,
	61,
	64,
	67,
	70,
	73,
	76,
	79,
	82,
	85,
	88,
	91,
	93,
	95,
	98,
	101,
	104,

	/* rownos */
	1,
	2,
	1,
	3,
	1,
	4,
	1,
	5,
	1,
	6,
	1,
	7,
	1,
	8,
	2,
	9,
	10,
	17,
	3,
	9,
	11,
	18,
	4,
	9,
	12,
	19,
	5,
	9,
	13,
	20,
	6,
	9,
	14,
	21,
	7,
	9,
	15,
	22,
	8,
	9,
	16,
	23,
	2,
	24,
	31,
	3,
	25,
	32,
	4,
	26,
	33,
	5,
	27,
	34,
	6,
	28,
	35,
	7,
	29,
	36,
	8,
	30,
	37,
	10,
	17,
	38,
	11,
	18,
	39,
	12,
	19,
	40,
	13,
	20,
	41,
	14,
	21,
	42,
	15,
	22,
	43,
	16,
	23,
	44,
	24,
	31,
	38,
	25,
	32,
	39,
	33,
	40,
	34,
	41,
	28,
	35,
	42,
	29,
	36,
	43,
	30,
	37,
	44 };

 real meanvarx_boundc_[1+70+88] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		1.,
		0.2,
		0.2,
		0.2,
		0.2,
		0.,
		0.,
		0.,
		0.,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		-1.7e308,
		0.3,
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
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real meanvarx_x0comn_[35] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real meanvarx_pd[28];
static real meanvarx_old_x[35];
static int meanvarx_xkind = -1;

 static int
meanvarx_xcheck(real *x)
{
	real *x1 = meanvarx_old_x, *xe = x + 35;
	errno = 0;
	if (meanvarx_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	meanvarx_xkind = 0;
	return 1;
	}
 real
meanvarx_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (meanvarx_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	meanvarx_pd[0] = 42.18 * x[0];
	v[0] = meanvarx_pd[0] * x[0];
	meanvarx_pd[1] = 40.36 * x[0];
	v[1] = meanvarx_pd[1] * x[1];
	v[0] += v[1];
	meanvarx_pd[2] = 21.76 * x[0];
	v[1] = meanvarx_pd[2] * x[2];
	v[0] += v[1];
	meanvarx_pd[3] = 10.6 * x[0];
	v[1] = meanvarx_pd[3] * x[3];
	v[0] += v[1];
	meanvarx_pd[4] = 24.64 * x[0];
	v[1] = meanvarx_pd[4] * x[4];
	v[0] += v[1];
	meanvarx_pd[5] = 47.68 * x[0];
	v[1] = meanvarx_pd[5] * x[5];
	v[0] += v[1];
	meanvarx_pd[6] = 34.82 * x[0];
	v[1] = meanvarx_pd[6] * x[6];
	v[0] += v[1];
	meanvarx_pd[7] = 70.89 * x[1];
	v[1] = meanvarx_pd[7] * x[1];
	v[0] += v[1];
	meanvarx_pd[8] = 43.16 * x[1];
	v[1] = meanvarx_pd[8] * x[2];
	v[0] += v[1];
	meanvarx_pd[9] = 30.82 * x[1];
	v[1] = meanvarx_pd[9] * x[3];
	v[0] += v[1];
	meanvarx_pd[10] = 46.48 * x[1];
	v[1] = meanvarx_pd[10] * x[4];
	v[0] += v[1];
	meanvarx_pd[11] = 47.6 * x[1];
	v[1] = meanvarx_pd[11] * x[5];
	v[0] += v[1];
	meanvarx_pd[12] = 25.24 * x[1];
	v[1] = meanvarx_pd[12] * x[6];
	v[0] += v[1];
	meanvarx_pd[13] = 25.51 * x[2];
	v[1] = meanvarx_pd[13] * x[2];
	v[0] += v[1];
	meanvarx_pd[14] = 19.2 * x[2];
	v[1] = meanvarx_pd[14] * x[3];
	v[0] += v[1];
	meanvarx_pd[15] = 45.26 * x[2];
	v[1] = meanvarx_pd[15] * x[4];
	v[0] += v[1];
	meanvarx_pd[16] = 26.44 * x[2];
	v[1] = meanvarx_pd[16] * x[5];
	v[0] += v[1];
	meanvarx_pd[17] = 9.4 * x[2];
	v[1] = meanvarx_pd[17] * x[6];
	v[0] += v[1];
	meanvarx_pd[18] = 22.33 * x[3];
	v[1] = meanvarx_pd[18] * x[3];
	v[0] += v[1];
	meanvarx_pd[19] = 20.64 * x[3];
	v[1] = meanvarx_pd[19] * x[4];
	v[0] += v[1];
	meanvarx_pd[20] = 20.92 * x[3];
	v[1] = meanvarx_pd[20] * x[5];
	v[0] += v[1];
	meanvarx_pd[21] = 2. * x[3];
	v[1] = meanvarx_pd[21] * x[6];
	v[0] += v[1];
	meanvarx_pd[22] = 30.01 * x[4];
	v[1] = meanvarx_pd[22] * x[4];
	v[0] += v[1];
	meanvarx_pd[23] = 32.72 * x[4];
	v[1] = meanvarx_pd[23] * x[5];
	v[0] += v[1];
	meanvarx_pd[24] = 14.4 * x[4];
	v[1] = meanvarx_pd[24] * x[6];
	v[0] += v[1];
	meanvarx_pd[25] = 42.23 * x[5];
	v[1] = meanvarx_pd[25] * x[5];
	v[0] += v[1];
	meanvarx_pd[26] = 19.8 * x[5];
	v[1] = meanvarx_pd[26] * x[6];
	v[0] += v[1];
	meanvarx_pd[27] = 16.42 * x[6];
	v[1] = meanvarx_pd[27] * x[6];
	v[0] += v[1];
	rv = v[0] + -0.06435*x[0];
	rv += -0.0548*x[1];
	rv += -0.02505*x[2];
	rv += -0.0762*x[3];
	rv += -0.03815*x[4];
	rv += -0.0927*x[5];
	rv += -0.031*x[6];
	;}

	if (wantfg & 2) {
	g[6] = meanvarx_pd[27] + -0.031;
	g[6] += x[6]*16.42;
	g[6] += meanvarx_pd[26];
	g[5] = x[6]*19.8 + -0.0927;
	g[5] += meanvarx_pd[25];
	g[5] += x[5]*42.23;
	g[6] += meanvarx_pd[24];
	g[4] = x[6]*14.4 + -0.03815;
	g[5] += meanvarx_pd[23];
	g[4] += x[5]*32.72;
	g[4] += meanvarx_pd[22];
	g[4] += x[4]*30.01;
	g[6] += meanvarx_pd[21];
	g[3] = x[6]*2. + -0.0762;
	g[5] += meanvarx_pd[20];
	g[3] += x[5]*20.92;
	g[4] += meanvarx_pd[19];
	g[3] += x[4]*20.64;
	g[3] += meanvarx_pd[18];
	g[3] += x[3]*22.33;
	g[6] += meanvarx_pd[17];
	g[2] = x[6]*9.4 + -0.02505;
	g[5] += meanvarx_pd[16];
	g[2] += x[5]*26.44;
	g[4] += meanvarx_pd[15];
	g[2] += x[4]*45.26;
	g[3] += meanvarx_pd[14];
	g[2] += x[3]*19.2;
	g[2] += meanvarx_pd[13];
	g[2] += x[2]*25.51;
	g[6] += meanvarx_pd[12];
	g[1] = x[6]*25.24 + -0.0548;
	g[5] += meanvarx_pd[11];
	g[1] += x[5]*47.6;
	g[4] += meanvarx_pd[10];
	g[1] += x[4]*46.48;
	g[3] += meanvarx_pd[9];
	g[1] += x[3]*30.82;
	g[2] += meanvarx_pd[8];
	g[1] += x[2]*43.16;
	g[1] += meanvarx_pd[7];
	g[1] += x[1]*70.89;
	g[6] += meanvarx_pd[6];
	g[0] = x[6]*34.82 + -0.06435;
	g[5] += meanvarx_pd[5];
	g[0] += x[5]*47.68;
	g[4] += meanvarx_pd[4];
	g[0] += x[4]*24.64;
	g[3] += meanvarx_pd[3];
	g[0] += x[3]*10.6;
	g[2] += meanvarx_pd[2];
	g[0] += x[2]*21.76;
	g[1] += meanvarx_pd[1];
	g[0] += x[1]*40.36;
	g[0] += meanvarx_pd[0];
	g[0] += x[0]*42.18;
	}

	return rv;
}

 void
meanvarx_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (meanvarx_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += -x[7];
	t1 += x[14];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[1];
	t1 += -x[8];
	t1 += x[15];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[2];
	t1 += -x[9];
	t1 += x[16];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[3];
	t1 += -x[10];
	t1 += x[17];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[4];
	t1 += -x[11];
	t1 += x[18];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[5];
	t1 += -x[12];
	t1 += x[19];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[6];
	t1 += -x[13];
	t1 += x[20];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[7];
	t1 += -0.11*x[21];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[8];
	t1 += -0.1*x[22];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[9];
	t1 += -0.07*x[23];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[10];
	t1 += -0.11*x[24];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[11];
	t1 += -0.2*x[25];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[12];
	t1 += -0.1*x[26];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[13];
	t1 += -0.1*x[27];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[7];
	t1 += -0.03*x[21];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[8];
	t1 += -0.04*x[22];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[9];
	t1 += -0.04*x[23];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[10];
	t1 += -0.03*x[24];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[11];
	t1 += -0.03*x[25];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[12];
	t1 += -0.03*x[26];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[13];
	t1 += -0.03*x[27];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[14];
	t1 += -0.2*x[28];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[15];
	t1 += -0.15*x[29];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[16];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[17];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[18];
	t1 += -0.1*x[32];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[19];
	t1 += -0.15*x[33];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[20];
	t1 += -0.2*x[34];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[14];
	t1 += -0.02*x[28];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[15];
	t1 += -0.02*x[29];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[16];
	t1 += -0.04*x[30];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[17];
	t1 += -0.04*x[31];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[18];
	t1 += -0.04*x[32];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[19];
	t1 += -0.04*x[33];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[20];
	t1 += -0.04*x[34];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[21];
	t1 += x[28];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[22];
	t1 += x[29];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[23];
	t1 += x[30];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[24];
	t1 += x[31];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[25];
	t1 += x[32];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[26];
	t1 += x[33];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[27];
	t1 += x[34];
	c[43] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[2] = 1.;
	J[4] = 1.;
	J[6] = 1.;
	J[8] = 1.;
	J[10] = 1.;
	J[12] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[14] = -1.;
	J[42] = 1.;

   /*** derivatives for constraint 3 ***/

	J[3] = 1.;
	J[18] = -1.;
	J[45] = 1.;

   /*** derivatives for constraint 4 ***/

	J[5] = 1.;
	J[22] = -1.;
	J[48] = 1.;

   /*** derivatives for constraint 5 ***/

	J[7] = 1.;
	J[26] = -1.;
	J[51] = 1.;

   /*** derivatives for constraint 6 ***/

	J[9] = 1.;
	J[30] = -1.;
	J[54] = 1.;

   /*** derivatives for constraint 7 ***/

	J[11] = 1.;
	J[34] = -1.;
	J[57] = 1.;

   /*** derivatives for constraint 8 ***/

	J[13] = 1.;
	J[38] = -1.;
	J[60] = 1.;

   /*** derivatives for constraint 9 ***/

	J[15] = 1.;
	J[19] = 1.;
	J[23] = 1.;
	J[27] = 1.;
	J[31] = 1.;
	J[35] = 1.;
	J[39] = 1.;

   /*** derivatives for constraint 10 ***/

	J[16] = 1.;
	J[63] = -0.11;

   /*** derivatives for constraint 11 ***/

	J[20] = 1.;
	J[66] = -0.1;

   /*** derivatives for constraint 12 ***/

	J[24] = 1.;
	J[69] = -0.07;

   /*** derivatives for constraint 13 ***/

	J[28] = 1.;
	J[72] = -0.11;

   /*** derivatives for constraint 14 ***/

	J[32] = 1.;
	J[75] = -0.2;

   /*** derivatives for constraint 15 ***/

	J[36] = 1.;
	J[78] = -0.1;

   /*** derivatives for constraint 16 ***/

	J[40] = 1.;
	J[81] = -0.1;

   /*** derivatives for constraint 17 ***/

	J[17] = 1.;
	J[64] = -0.03;

   /*** derivatives for constraint 18 ***/

	J[21] = 1.;
	J[67] = -0.04;

   /*** derivatives for constraint 19 ***/

	J[25] = 1.;
	J[70] = -0.04;

   /*** derivatives for constraint 20 ***/

	J[29] = 1.;
	J[73] = -0.03;

   /*** derivatives for constraint 21 ***/

	J[33] = 1.;
	J[76] = -0.03;

   /*** derivatives for constraint 22 ***/

	J[37] = 1.;
	J[79] = -0.03;

   /*** derivatives for constraint 23 ***/

	J[41] = 1.;
	J[82] = -0.03;

   /*** derivatives for constraint 24 ***/

	J[43] = 1.;
	J[84] = -0.2;

   /*** derivatives for constraint 25 ***/

	J[46] = 1.;
	J[87] = -0.15;

   /*** derivatives for constraint 26 ***/

	J[49] = 1.;

   /*** derivatives for constraint 27 ***/

	J[52] = 1.;

   /*** derivatives for constraint 28 ***/

	J[55] = 1.;
	J[94] = -0.1;

   /*** derivatives for constraint 29 ***/

	J[58] = 1.;
	J[97] = -0.15;

   /*** derivatives for constraint 30 ***/

	J[61] = 1.;
	J[100] = -0.2;

   /*** derivatives for constraint 31 ***/

	J[44] = 1.;
	J[85] = -0.02;

   /*** derivatives for constraint 32 ***/

	J[47] = 1.;
	J[88] = -0.02;

   /*** derivatives for constraint 33 ***/

	J[50] = 1.;
	J[90] = -0.04;

   /*** derivatives for constraint 34 ***/

	J[53] = 1.;
	J[92] = -0.04;

   /*** derivatives for constraint 35 ***/

	J[56] = 1.;
	J[95] = -0.04;

   /*** derivatives for constraint 36 ***/

	J[59] = 1.;
	J[98] = -0.04;

   /*** derivatives for constraint 37 ***/

	J[62] = 1.;
	J[101] = -0.04;

   /*** derivatives for constraint 38 ***/

	J[65] = 1.;
	J[86] = 1.;

   /*** derivatives for constraint 39 ***/

	J[68] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 40 ***/

	J[71] = 1.;
	J[91] = 1.;

   /*** derivatives for constraint 41 ***/

	J[74] = 1.;
	J[93] = 1.;

   /*** derivatives for constraint 42 ***/

	J[77] = 1.;
	J[96] = 1.;

   /*** derivatives for constraint 43 ***/

	J[80] = 1.;
	J[99] = 1.;

   /*** derivatives for constraint 44 ***/

	J[83] = 1.;
	J[102] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
