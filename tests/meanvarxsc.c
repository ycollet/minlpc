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
 fint meanvarxsc_auxcom_[1] = { 0 /* nlc */ };
 fint meanvarxsc_funcom_[177] = {
	47 /* nvar */,
	1 /* nobj */,
	54 /* ncon */,
	123 /* nzc */,
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
	20,
	25,
	30,
	35,
	40,
	45,
	50,
	54,
	58,
	60,
	62,
	66,
	70,
	74,
	76,
	78,
	80,
	82,
	84,
	86,
	88,
	90,
	92,
	93,
	94,
	96,
	98,
	100,
	102,
	104,
	106,
	108,
	110,
	112,
	114,
	116,
	118,
	120,
	122,
	124,

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
	31,
	32,
	3,
	9,
	11,
	33,
	34,
	4,
	9,
	12,
	35,
	36,
	5,
	9,
	13,
	37,
	38,
	6,
	9,
	14,
	39,
	40,
	7,
	9,
	15,
	41,
	42,
	8,
	9,
	16,
	43,
	44,
	2,
	17,
	45,
	46,
	3,
	18,
	47,
	48,
	4,
	19,
	5,
	20,
	6,
	21,
	49,
	50,
	7,
	22,
	51,
	52,
	8,
	23,
	53,
	54,
	10,
	24,
	11,
	25,
	12,
	26,
	13,
	27,
	14,
	28,
	15,
	29,
	16,
	30,
	17,
	24,
	18,
	25,
	26,
	27,
	21,
	28,
	22,
	29,
	23,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54 };

 real meanvarxsc_boundc_[1+94+108] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.11,
		0.,
		0.1,
		0.,
		0.07,
		0.,
		0.11,
		0.,
		0.2,
		0.,
		0.1,
		0.,
		0.1,
		0.,
		0.2,
		0.,
		0.15,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.1,
		0.,
		0.15,
		0.,
		0.2,
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
		1.,
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308};

 real meanvarxsc_x0comn_[47] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real meanvarxsc_pd[28];
static real meanvarxsc_old_x[47];
static int meanvarxsc_xkind = -1;

 static int
meanvarxsc_xcheck(real *x)
{
	real *x1 = meanvarxsc_old_x, *xe = x + 47;
	errno = 0;
	if (meanvarxsc_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	meanvarxsc_xkind = 0;
	return 1;
	}
 real
meanvarxsc_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (meanvarxsc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	meanvarxsc_pd[0] = 42.18 * x[0];
	v[0] = meanvarxsc_pd[0] * x[0];
	meanvarxsc_pd[1] = 40.36 * x[0];
	v[1] = meanvarxsc_pd[1] * x[1];
	v[0] += v[1];
	meanvarxsc_pd[2] = 21.76 * x[0];
	v[1] = meanvarxsc_pd[2] * x[2];
	v[0] += v[1];
	meanvarxsc_pd[3] = 10.6 * x[0];
	v[1] = meanvarxsc_pd[3] * x[3];
	v[0] += v[1];
	meanvarxsc_pd[4] = 24.64 * x[0];
	v[1] = meanvarxsc_pd[4] * x[4];
	v[0] += v[1];
	meanvarxsc_pd[5] = 47.68 * x[0];
	v[1] = meanvarxsc_pd[5] * x[5];
	v[0] += v[1];
	meanvarxsc_pd[6] = 34.82 * x[0];
	v[1] = meanvarxsc_pd[6] * x[6];
	v[0] += v[1];
	meanvarxsc_pd[7] = 70.89 * x[1];
	v[1] = meanvarxsc_pd[7] * x[1];
	v[0] += v[1];
	meanvarxsc_pd[8] = 43.16 * x[1];
	v[1] = meanvarxsc_pd[8] * x[2];
	v[0] += v[1];
	meanvarxsc_pd[9] = 30.82 * x[1];
	v[1] = meanvarxsc_pd[9] * x[3];
	v[0] += v[1];
	meanvarxsc_pd[10] = 46.48 * x[1];
	v[1] = meanvarxsc_pd[10] * x[4];
	v[0] += v[1];
	meanvarxsc_pd[11] = 47.6 * x[1];
	v[1] = meanvarxsc_pd[11] * x[5];
	v[0] += v[1];
	meanvarxsc_pd[12] = 25.24 * x[1];
	v[1] = meanvarxsc_pd[12] * x[6];
	v[0] += v[1];
	meanvarxsc_pd[13] = 25.51 * x[2];
	v[1] = meanvarxsc_pd[13] * x[2];
	v[0] += v[1];
	meanvarxsc_pd[14] = 19.2 * x[2];
	v[1] = meanvarxsc_pd[14] * x[3];
	v[0] += v[1];
	meanvarxsc_pd[15] = 45.26 * x[2];
	v[1] = meanvarxsc_pd[15] * x[4];
	v[0] += v[1];
	meanvarxsc_pd[16] = 26.44 * x[2];
	v[1] = meanvarxsc_pd[16] * x[5];
	v[0] += v[1];
	meanvarxsc_pd[17] = 9.4 * x[2];
	v[1] = meanvarxsc_pd[17] * x[6];
	v[0] += v[1];
	meanvarxsc_pd[18] = 22.33 * x[3];
	v[1] = meanvarxsc_pd[18] * x[3];
	v[0] += v[1];
	meanvarxsc_pd[19] = 20.64 * x[3];
	v[1] = meanvarxsc_pd[19] * x[4];
	v[0] += v[1];
	meanvarxsc_pd[20] = 20.92 * x[3];
	v[1] = meanvarxsc_pd[20] * x[5];
	v[0] += v[1];
	meanvarxsc_pd[21] = 2. * x[3];
	v[1] = meanvarxsc_pd[21] * x[6];
	v[0] += v[1];
	meanvarxsc_pd[22] = 30.01 * x[4];
	v[1] = meanvarxsc_pd[22] * x[4];
	v[0] += v[1];
	meanvarxsc_pd[23] = 32.72 * x[4];
	v[1] = meanvarxsc_pd[23] * x[5];
	v[0] += v[1];
	meanvarxsc_pd[24] = 14.4 * x[4];
	v[1] = meanvarxsc_pd[24] * x[6];
	v[0] += v[1];
	meanvarxsc_pd[25] = 42.23 * x[5];
	v[1] = meanvarxsc_pd[25] * x[5];
	v[0] += v[1];
	meanvarxsc_pd[26] = 19.8 * x[5];
	v[1] = meanvarxsc_pd[26] * x[6];
	v[0] += v[1];
	meanvarxsc_pd[27] = 16.42 * x[6];
	v[1] = meanvarxsc_pd[27] * x[6];
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
	g[6] = meanvarxsc_pd[27] + -0.031;
	g[6] += x[6]*16.42;
	g[6] += meanvarxsc_pd[26];
	g[5] = x[6]*19.8 + -0.0927;
	g[5] += meanvarxsc_pd[25];
	g[5] += x[5]*42.23;
	g[6] += meanvarxsc_pd[24];
	g[4] = x[6]*14.4 + -0.03815;
	g[5] += meanvarxsc_pd[23];
	g[4] += x[5]*32.72;
	g[4] += meanvarxsc_pd[22];
	g[4] += x[4]*30.01;
	g[6] += meanvarxsc_pd[21];
	g[3] = x[6]*2. + -0.0762;
	g[5] += meanvarxsc_pd[20];
	g[3] += x[5]*20.92;
	g[4] += meanvarxsc_pd[19];
	g[3] += x[4]*20.64;
	g[3] += meanvarxsc_pd[18];
	g[3] += x[3]*22.33;
	g[6] += meanvarxsc_pd[17];
	g[2] = x[6]*9.4 + -0.02505;
	g[5] += meanvarxsc_pd[16];
	g[2] += x[5]*26.44;
	g[4] += meanvarxsc_pd[15];
	g[2] += x[4]*45.26;
	g[3] += meanvarxsc_pd[14];
	g[2] += x[3]*19.2;
	g[2] += meanvarxsc_pd[13];
	g[2] += x[2]*25.51;
	g[6] += meanvarxsc_pd[12];
	g[1] = x[6]*25.24 + -0.0548;
	g[5] += meanvarxsc_pd[11];
	g[1] += x[5]*47.6;
	g[4] += meanvarxsc_pd[10];
	g[1] += x[4]*46.48;
	g[3] += meanvarxsc_pd[9];
	g[1] += x[3]*30.82;
	g[2] += meanvarxsc_pd[8];
	g[1] += x[2]*43.16;
	g[1] += meanvarxsc_pd[7];
	g[1] += x[1]*70.89;
	g[6] += meanvarxsc_pd[6];
	g[0] = x[6]*34.82 + -0.06435;
	g[5] += meanvarxsc_pd[5];
	g[0] += x[5]*47.68;
	g[4] += meanvarxsc_pd[4];
	g[0] += x[4]*24.64;
	g[3] += meanvarxsc_pd[3];
	g[0] += x[3]*10.6;
	g[2] += meanvarxsc_pd[2];
	g[0] += x[2]*21.76;
	g[1] += meanvarxsc_pd[1];
	g[0] += x[1]*40.36;
	g[0] += meanvarxsc_pd[0];
	g[0] += x[0]*42.18;
	}

	return rv;
}

 void
meanvarxsc_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (meanvarxsc_xcheck(x) && wantfg == 2)
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

	t1 = x[14];
	t1 += -0.2*x[28];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[15];
	t1 += -0.15*x[29];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[16];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[17];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[18];
	t1 += -0.1*x[32];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[19];
	t1 += -0.15*x[33];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[20];
	t1 += -0.2*x[34];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[21];
	t1 += x[28];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[22];
	t1 += x[29];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[23];
	t1 += x[30];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[24];
	t1 += x[31];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[25];
	t1 += x[32];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[26];
	t1 += x[33];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[27];
	t1 += x[34];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[7];
	t1 += -0.03*x[35];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[7];
	t1 += 0.11*x[35];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[8];
	t1 += -0.04*x[36];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[8];
	t1 += 0.1*x[36];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[9];
	t1 += -0.04*x[37];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[9];
	t1 += 0.07*x[37];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[10];
	t1 += -0.03*x[38];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[10];
	t1 += 0.11*x[38];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[11];
	t1 += -0.03*x[39];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[11];
	t1 += 0.2*x[39];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[12];
	t1 += -0.03*x[40];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[12];
	t1 += 0.1*x[40];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[13];
	t1 += -0.03*x[41];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[13];
	t1 += 0.1*x[41];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[14];
	t1 += -0.02*x[42];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[14];
	t1 += 0.2*x[42];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[15];
	t1 += -0.02*x[43];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[15];
	t1 += 0.15*x[43];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[18];
	t1 += -0.04*x[44];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[18];
	t1 += 0.1*x[44];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[19];
	t1 += -0.04*x[45];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[19];
	t1 += 0.15*x[45];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[20];
	t1 += -0.04*x[46];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[20];
	t1 += 0.2*x[46];
	c[53] = t1;
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
	J[49] = 1.;

   /*** derivatives for constraint 3 ***/

	J[3] = 1.;
	J[19] = -1.;
	J[53] = 1.;

   /*** derivatives for constraint 4 ***/

	J[5] = 1.;
	J[24] = -1.;
	J[57] = 1.;

   /*** derivatives for constraint 5 ***/

	J[7] = 1.;
	J[29] = -1.;
	J[59] = 1.;

   /*** derivatives for constraint 6 ***/

	J[9] = 1.;
	J[34] = -1.;
	J[61] = 1.;

   /*** derivatives for constraint 7 ***/

	J[11] = 1.;
	J[39] = -1.;
	J[65] = 1.;

   /*** derivatives for constraint 8 ***/

	J[13] = 1.;
	J[44] = -1.;
	J[69] = 1.;

   /*** derivatives for constraint 9 ***/

	J[15] = 1.;
	J[20] = 1.;
	J[25] = 1.;
	J[30] = 1.;
	J[35] = 1.;
	J[40] = 1.;
	J[45] = 1.;

   /*** derivatives for constraint 10 ***/

	J[16] = 1.;
	J[73] = -0.11;

   /*** derivatives for constraint 11 ***/

	J[21] = 1.;
	J[75] = -0.1;

   /*** derivatives for constraint 12 ***/

	J[26] = 1.;
	J[77] = -0.07;

   /*** derivatives for constraint 13 ***/

	J[31] = 1.;
	J[79] = -0.11;

   /*** derivatives for constraint 14 ***/

	J[36] = 1.;
	J[81] = -0.2;

   /*** derivatives for constraint 15 ***/

	J[41] = 1.;
	J[83] = -0.1;

   /*** derivatives for constraint 16 ***/

	J[46] = 1.;
	J[85] = -0.1;

   /*** derivatives for constraint 17 ***/

	J[50] = 1.;
	J[87] = -0.2;

   /*** derivatives for constraint 18 ***/

	J[54] = 1.;
	J[89] = -0.15;

   /*** derivatives for constraint 19 ***/

	J[58] = 1.;

   /*** derivatives for constraint 20 ***/

	J[60] = 1.;

   /*** derivatives for constraint 21 ***/

	J[62] = 1.;
	J[93] = -0.1;

   /*** derivatives for constraint 22 ***/

	J[66] = 1.;
	J[95] = -0.15;

   /*** derivatives for constraint 23 ***/

	J[70] = 1.;
	J[97] = -0.2;

   /*** derivatives for constraint 24 ***/

	J[74] = 1.;
	J[88] = 1.;

   /*** derivatives for constraint 25 ***/

	J[76] = 1.;
	J[90] = 1.;

   /*** derivatives for constraint 26 ***/

	J[78] = 1.;
	J[91] = 1.;

   /*** derivatives for constraint 27 ***/

	J[80] = 1.;
	J[92] = 1.;

   /*** derivatives for constraint 28 ***/

	J[82] = 1.;
	J[94] = 1.;

   /*** derivatives for constraint 29 ***/

	J[84] = 1.;
	J[96] = 1.;

   /*** derivatives for constraint 30 ***/

	J[86] = 1.;
	J[98] = 1.;

   /*** derivatives for constraint 31 ***/

	J[17] = 1.;
	J[99] = -0.03;

   /*** derivatives for constraint 32 ***/

	J[18] = -1.;
	J[100] = 0.11;

   /*** derivatives for constraint 33 ***/

	J[22] = 1.;
	J[101] = -0.04;

   /*** derivatives for constraint 34 ***/

	J[23] = -1.;
	J[102] = 0.1;

   /*** derivatives for constraint 35 ***/

	J[27] = 1.;
	J[103] = -0.04;

   /*** derivatives for constraint 36 ***/

	J[28] = -1.;
	J[104] = 0.07;

   /*** derivatives for constraint 37 ***/

	J[32] = 1.;
	J[105] = -0.03;

   /*** derivatives for constraint 38 ***/

	J[33] = -1.;
	J[106] = 0.11;

   /*** derivatives for constraint 39 ***/

	J[37] = 1.;
	J[107] = -0.03;

   /*** derivatives for constraint 40 ***/

	J[38] = -1.;
	J[108] = 0.2;

   /*** derivatives for constraint 41 ***/

	J[42] = 1.;
	J[109] = -0.03;

   /*** derivatives for constraint 42 ***/

	J[43] = -1.;
	J[110] = 0.1;

   /*** derivatives for constraint 43 ***/

	J[47] = 1.;
	J[111] = -0.03;

   /*** derivatives for constraint 44 ***/

	J[48] = -1.;
	J[112] = 0.1;

   /*** derivatives for constraint 45 ***/

	J[51] = 1.;
	J[113] = -0.02;

   /*** derivatives for constraint 46 ***/

	J[52] = -1.;
	J[114] = 0.2;

   /*** derivatives for constraint 47 ***/

	J[55] = 1.;
	J[115] = -0.02;

   /*** derivatives for constraint 48 ***/

	J[56] = -1.;
	J[116] = 0.15;

   /*** derivatives for constraint 49 ***/

	J[63] = 1.;
	J[117] = -0.04;

   /*** derivatives for constraint 50 ***/

	J[64] = -1.;
	J[118] = 0.1;

   /*** derivatives for constraint 51 ***/

	J[67] = 1.;
	J[119] = -0.04;

   /*** derivatives for constraint 52 ***/

	J[68] = -1.;
	J[120] = 0.15;

   /*** derivatives for constraint 53 ***/

	J[71] = 1.;
	J[121] = -0.04;

   /*** derivatives for constraint 54 ***/

	J[72] = -1.;
	J[122] = 0.2;
	}
}
#ifdef __cplusplus
	}
#endif
