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
 fint pooling_adhya1stp_auxcom_[1] = { 40 /* nlc */ };
 fint pooling_adhya1stp_funcom_[318] = {
	46 /* nvar */,
	1 /* nobj */,
	71 /* ncon */,
	265 /* nzc */,
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
	23,
	25,
	27,
	29,
	32,
	35,
	38,
	41,
	46,
	51,
	56,
	61,
	66,
	69,
	72,
	75,
	78,
	82,
	86,
	90,
	94,
	103,
	112,
	121,
	129,
	138,
	146,
	155,
	164,
	173,
	181,
	189,
	198,
	205,
	214,
	223,
	231,
	240,
	249,
	258,
	266,

	/* rownos */
	1,
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
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
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
	17,
	10,
	14,
	18,
	11,
	15,
	19,
	12,
	16,
	20,
	1,
	2,
	3,
	4,
	68,
	5,
	6,
	7,
	8,
	68,
	9,
	10,
	11,
	12,
	69,
	13,
	14,
	15,
	16,
	69,
	17,
	18,
	19,
	20,
	69,
	21,
	25,
	70,
	22,
	26,
	70,
	23,
	27,
	70,
	24,
	28,
	70,
	29,
	33,
	37,
	71,
	30,
	34,
	38,
	71,
	31,
	35,
	39,
	71,
	32,
	36,
	40,
	71,
	1,
	21,
	41,
	46,
	48,
	52,
	53,
	54,
	55,
	2,
	22,
	41,
	46,
	49,
	56,
	57,
	58,
	59,
	3,
	23,
	41,
	46,
	50,
	60,
	61,
	62,
	63,
	4,
	24,
	41,
	46,
	51,
	64,
	65,
	67,
	5,
	25,
	42,
	46,
	48,
	52,
	53,
	54,
	55,
	6,
	26,
	42,
	46,
	49,
	57,
	58,
	59,
	7,
	27,
	42,
	46,
	50,
	60,
	61,
	62,
	63,
	8,
	28,
	42,
	46,
	51,
	64,
	65,
	66,
	67,
	9,
	29,
	43,
	47,
	48,
	52,
	53,
	54,
	55,
	10,
	30,
	43,
	47,
	49,
	57,
	58,
	59,
	11,
	31,
	43,
	47,
	50,
	60,
	62,
	63,
	12,
	32,
	43,
	47,
	51,
	64,
	65,
	66,
	67,
	13,
	33,
	44,
	47,
	48,
	54,
	55,
	14,
	34,
	44,
	47,
	49,
	56,
	57,
	58,
	59,
	15,
	35,
	44,
	47,
	50,
	60,
	61,
	62,
	63,
	16,
	36,
	44,
	47,
	51,
	65,
	66,
	67,
	17,
	37,
	45,
	47,
	48,
	52,
	53,
	54,
	55,
	18,
	38,
	45,
	47,
	49,
	56,
	57,
	58,
	59,
	19,
	39,
	45,
	47,
	50,
	60,
	61,
	62,
	63,
	20,
	40,
	45,
	47,
	51,
	64,
	65,
	67 };

 real pooling_adhya1stp_boundc_[1+92+142] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.,
		1.,
		1.,
		1.,
		1.};

 real pooling_adhya1stp_x0comn_[46] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real pooling_adhya1stp_old_x[46];
static int pooling_adhya1stp_xkind = -1;

 static int
pooling_adhya1stp_xcheck(real *x)
{
	real *x1 = pooling_adhya1stp_old_x, *xe = x + 46;
	errno = 0;
	if (pooling_adhya1stp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_adhya1stp_xkind = 0;
	return 1;
	}
 real
pooling_adhya1stp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_adhya1stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -9.*x[26];
	rv += -18.*x[27];
	rv += -8.*x[28];
	rv += -3.*x[29];
	rv += -13.*x[30];
	rv += -22.*x[31];
	rv += -12.*x[32];
	rv += -7.*x[33];
	rv += -14.*x[34];
	rv += -23.*x[35];
	rv += -13.*x[36];
	rv += -8.*x[37];
	rv += -6.*x[38];
	rv += -15.*x[39];
	rv += -5.*x[40];
	rv += -11.*x[42];
	rv += -20.*x[43];
	rv += -10.*x[44];
	rv += -5.*x[45];
	;}

	if (wantfg & 2) {
	g[26] = -9.;
	g[27] = -18.;
	g[28] = -8.;
	g[29] = -3.;
	g[30] = -13.;
	g[31] = -22.;
	g[32] = -12.;
	g[33] = -7.;
	g[34] = -14.;
	g[35] = -23.;
	g[36] = -13.;
	g[37] = -8.;
	g[38] = -6.;
	g[39] = -15.;
	g[40] = -5.;
	g[42] = -11.;
	g[43] = -20.;
	g[44] = -10.;
	g[45] = -5.;
	}

	return rv;
}

 void
pooling_adhya1stp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_adhya1stp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[13] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[26];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[13] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[27];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[13] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[28];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[13] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[29];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[14] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[30];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[14] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[31];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[14] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[32];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[14] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[33];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[15] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[34];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[15] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[35];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[15] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[36];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[15] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[37];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[16] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[38];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[16] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[39];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[16] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[40];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[16] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[41];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[17] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[42];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[17] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[43];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[17] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[44];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[17] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[45];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[18] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[26];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[19] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[27];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[20] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[28];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[21] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[29];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[18] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[30];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[19] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[31];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[20] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[32];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[21] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[33];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[22] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[34];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[23] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[35];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[24] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[36];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[25] * x[2];
	v[1] = -v[0];
	t1 = v[1] + x[37];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[22] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[38];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[23] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[39];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[24] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[40];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[25] * x[3];
	v[1] = -v[0];
	t1 = v[1] + x[41];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[22] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[42];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[23] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[43];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[24] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[44];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[25] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[45];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[45];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[45];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[26];
	t1 += x[30];
	t1 += x[34];
	t1 += x[38];
	t1 += x[42];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[27];
	t1 += x[31];
	t1 += x[35];
	t1 += x[39];
	t1 += x[43];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[28];
	t1 += x[32];
	t1 += x[36];
	t1 += x[40];
	t1 += x[44];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[29];
	t1 += x[33];
	t1 += x[37];
	t1 += x[41];
	t1 += x[45];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -2.*x[26];
	t1 += x[30];
	t1 += x[34];
	t1 += -2.*x[42];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = 3.*x[26];
	t1 += -2.*x[30];
	t1 += 2.5*x[34];
	t1 += -0.3*x[42];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = 0.75*x[26];
	t1 += -0.25*x[30];
	t1 += -0.25*x[34];
	t1 += -0.25*x[38];
	t1 += 0.75*x[42];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -0.25*x[26];
	t1 += 1.25*x[30];
	t1 += 0.15*x[34];
	t1 += 0.25*x[38];
	t1 += 0.85*x[42];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -3.*x[27];
	t1 += -x[39];
	t1 += -3.*x[43];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = 3.5*x[27];
	t1 += -1.5*x[31];
	t1 += 3.*x[35];
	t1 += 0.5*x[39];
	t1 += 0.2*x[43];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = 0.5*x[27];
	t1 += -0.5*x[31];
	t1 += -0.5*x[35];
	t1 += -0.5*x[39];
	t1 += 0.5*x[43];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[27];
	t1 += 0.5*x[31];
	t1 += -0.6*x[35];
	t1 += -0.5*x[39];
	t1 += 0.1*x[43];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -0.5*x[28];
	t1 += 2.5*x[32];
	t1 += 2.5*x[36];
	t1 += 1.5*x[40];
	t1 += -0.5*x[44];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = 0.5*x[28];
	t1 += -4.5*x[32];
	t1 += -2.5*x[40];
	t1 += -2.8*x[44];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = 0.1*x[28];
	t1 += -0.9*x[32];
	t1 += -0.9*x[36];
	t1 += -0.9*x[40];
	t1 += 0.1*x[44];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -0.3*x[28];
	t1 += 1.2*x[32];
	t1 += 0.1*x[36];
	t1 += 0.2*x[40];
	t1 += 0.8*x[44];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -2.*x[29];
	t1 += x[33];
	t1 += x[37];
	t1 += -2.*x[45];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = 2.*x[29];
	t1 += -3.*x[33];
	t1 += 1.5*x[37];
	t1 += -x[41];
	t1 += -1.3*x[45];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[33];
	t1 += -x[37];
	t1 += -x[41];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -1.3*x[29];
	t1 += 0.2*x[33];
	t1 += -0.9*x[37];
	t1 += -0.8*x[41];
	t1 += -0.2*x[45];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[13];
	t1 += x[14];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[15];
	t1 += x[16];
	t1 += x[17];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	c[70] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[20] = -x[13];
	J[40] = -x[5];
	J[93] = 1.;

   /*** derivatives for constraint 2 ***/

	J[22] = -x[13];
	J[41] = -x[6];
	J[102] = 1.;

   /*** derivatives for constraint 3 ***/

	J[24] = -x[13];
	J[42] = -x[7];
	J[111] = 1.;

   /*** derivatives for constraint 4 ***/

	J[26] = -x[13];
	J[43] = -x[8];
	J[120] = 1.;

   /*** derivatives for constraint 5 ***/

	J[21] = -x[14];
	J[45] = -x[5];
	J[128] = 1.;

   /*** derivatives for constraint 6 ***/

	J[23] = -x[14];
	J[46] = -x[6];
	J[137] = 1.;

   /*** derivatives for constraint 7 ***/

	J[25] = -x[14];
	J[47] = -x[7];
	J[145] = 1.;

   /*** derivatives for constraint 8 ***/

	J[27] = -x[14];
	J[48] = -x[8];
	J[154] = 1.;

   /*** derivatives for constraint 9 ***/

	J[28] = -x[15];
	J[50] = -x[9];
	J[163] = 1.;

   /*** derivatives for constraint 10 ***/

	J[31] = -x[15];
	J[51] = -x[10];
	J[172] = 1.;

   /*** derivatives for constraint 11 ***/

	J[34] = -x[15];
	J[52] = -x[11];
	J[180] = 1.;

   /*** derivatives for constraint 12 ***/

	J[37] = -x[15];
	J[53] = -x[12];
	J[188] = 1.;

   /*** derivatives for constraint 13 ***/

	J[29] = -x[16];
	J[55] = -x[9];
	J[197] = 1.;

   /*** derivatives for constraint 14 ***/

	J[32] = -x[16];
	J[56] = -x[10];
	J[204] = 1.;

   /*** derivatives for constraint 15 ***/

	J[35] = -x[16];
	J[57] = -x[11];
	J[213] = 1.;

   /*** derivatives for constraint 16 ***/

	J[38] = -x[16];
	J[58] = -x[12];
	J[222] = 1.;

   /*** derivatives for constraint 17 ***/

	J[30] = -x[17];
	J[60] = -x[9];
	J[230] = 1.;

   /*** derivatives for constraint 18 ***/

	J[33] = -x[17];
	J[61] = -x[10];
	J[239] = 1.;

   /*** derivatives for constraint 19 ***/

	J[36] = -x[17];
	J[62] = -x[11];
	J[248] = 1.;

   /*** derivatives for constraint 20 ***/

	J[39] = -x[17];
	J[63] = -x[12];
	J[257] = 1.;

   /*** derivatives for constraint 21 ***/

	J[0] = -x[18];
	J[65] = -x[0];
	J[94] = 1.;

   /*** derivatives for constraint 22 ***/

	J[1] = -x[19];
	J[68] = -x[0];
	J[103] = 1.;

   /*** derivatives for constraint 23 ***/

	J[2] = -x[20];
	J[71] = -x[0];
	J[112] = 1.;

   /*** derivatives for constraint 24 ***/

	J[3] = -x[21];
	J[74] = -x[0];
	J[121] = 1.;

   /*** derivatives for constraint 25 ***/

	J[4] = -x[18];
	J[66] = -x[1];
	J[129] = 1.;

   /*** derivatives for constraint 26 ***/

	J[5] = -x[19];
	J[69] = -x[1];
	J[138] = 1.;

   /*** derivatives for constraint 27 ***/

	J[6] = -x[20];
	J[72] = -x[1];
	J[146] = 1.;

   /*** derivatives for constraint 28 ***/

	J[7] = -x[21];
	J[75] = -x[1];
	J[155] = 1.;

   /*** derivatives for constraint 29 ***/

	J[8] = -x[22];
	J[77] = -x[2];
	J[164] = 1.;

   /*** derivatives for constraint 30 ***/

	J[9] = -x[23];
	J[81] = -x[2];
	J[173] = 1.;

   /*** derivatives for constraint 31 ***/

	J[10] = -x[24];
	J[85] = -x[2];
	J[181] = 1.;

   /*** derivatives for constraint 32 ***/

	J[11] = -x[25];
	J[89] = -x[2];
	J[189] = 1.;

   /*** derivatives for constraint 33 ***/

	J[12] = -x[22];
	J[78] = -x[3];
	J[198] = 1.;

   /*** derivatives for constraint 34 ***/

	J[13] = -x[23];
	J[82] = -x[3];
	J[205] = 1.;

   /*** derivatives for constraint 35 ***/

	J[14] = -x[24];
	J[86] = -x[3];
	J[214] = 1.;

   /*** derivatives for constraint 36 ***/

	J[15] = -x[25];
	J[90] = -x[3];
	J[223] = 1.;

   /*** derivatives for constraint 37 ***/

	J[16] = -x[22];
	J[79] = -x[4];
	J[231] = 1.;

   /*** derivatives for constraint 38 ***/

	J[17] = -x[23];
	J[83] = -x[4];
	J[240] = 1.;

   /*** derivatives for constraint 39 ***/

	J[18] = -x[24];
	J[87] = -x[4];
	J[249] = 1.;

   /*** derivatives for constraint 40 ***/

	J[19] = -x[25];
	J[91] = -x[4];
	J[258] = 1.;

   /*** derivatives for constraint 41 ***/

	J[95] = 1.;
	J[104] = 1.;
	J[113] = 1.;
	J[122] = 1.;

   /*** derivatives for constraint 42 ***/

	J[130] = 1.;
	J[139] = 1.;
	J[147] = 1.;
	J[156] = 1.;

   /*** derivatives for constraint 43 ***/

	J[165] = 1.;
	J[174] = 1.;
	J[182] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 44 ***/

	J[199] = 1.;
	J[206] = 1.;
	J[215] = 1.;
	J[224] = 1.;

   /*** derivatives for constraint 45 ***/

	J[232] = 1.;
	J[241] = 1.;
	J[250] = 1.;
	J[259] = 1.;

   /*** derivatives for constraint 46 ***/

	J[96] = 1.;
	J[105] = 1.;
	J[114] = 1.;
	J[123] = 1.;
	J[131] = 1.;
	J[140] = 1.;
	J[148] = 1.;
	J[157] = 1.;

   /*** derivatives for constraint 47 ***/

	J[166] = 1.;
	J[175] = 1.;
	J[183] = 1.;
	J[191] = 1.;
	J[200] = 1.;
	J[207] = 1.;
	J[216] = 1.;
	J[225] = 1.;
	J[233] = 1.;
	J[242] = 1.;
	J[251] = 1.;
	J[260] = 1.;

   /*** derivatives for constraint 48 ***/

	J[97] = 1.;
	J[132] = 1.;
	J[167] = 1.;
	J[201] = 1.;
	J[234] = 1.;

   /*** derivatives for constraint 49 ***/

	J[106] = 1.;
	J[141] = 1.;
	J[176] = 1.;
	J[208] = 1.;
	J[243] = 1.;

   /*** derivatives for constraint 50 ***/

	J[115] = 1.;
	J[149] = 1.;
	J[184] = 1.;
	J[217] = 1.;
	J[252] = 1.;

   /*** derivatives for constraint 51 ***/

	J[124] = 1.;
	J[158] = 1.;
	J[192] = 1.;
	J[226] = 1.;
	J[261] = 1.;

   /*** derivatives for constraint 52 ***/

	J[98] = -2.;
	J[133] = 1.;
	J[168] = 1.;
	J[235] = -2.;

   /*** derivatives for constraint 53 ***/

	J[99] = 3.;
	J[134] = -2.;
	J[169] = 2.5;
	J[236] = -0.3;

   /*** derivatives for constraint 54 ***/

	J[100] = 0.75;
	J[135] = -0.25;
	J[170] = -0.25;
	J[202] = -0.25;
	J[237] = 0.75;

   /*** derivatives for constraint 55 ***/

	J[101] = -0.25;
	J[136] = 1.25;
	J[171] = 0.15;
	J[203] = 0.25;
	J[238] = 0.85;

   /*** derivatives for constraint 56 ***/

	J[107] = -3.;
	J[209] = -1.;
	J[244] = -3.;

   /*** derivatives for constraint 57 ***/

	J[108] = 3.5;
	J[142] = -1.5;
	J[177] = 3.;
	J[210] = 0.5;
	J[245] = 0.2;

   /*** derivatives for constraint 58 ***/

	J[109] = 0.5;
	J[143] = -0.5;
	J[178] = -0.5;
	J[211] = -0.5;
	J[246] = 0.5;

   /*** derivatives for constraint 59 ***/

	J[110] = -1.;
	J[144] = 0.5;
	J[179] = -0.6;
	J[212] = -0.5;
	J[247] = 0.1;

   /*** derivatives for constraint 60 ***/

	J[116] = -0.5;
	J[150] = 2.5;
	J[185] = 2.5;
	J[218] = 1.5;
	J[253] = -0.5;

   /*** derivatives for constraint 61 ***/

	J[117] = 0.5;
	J[151] = -4.5;
	J[219] = -2.5;
	J[254] = -2.8;

   /*** derivatives for constraint 62 ***/

	J[118] = 0.1;
	J[152] = -0.9;
	J[186] = -0.9;
	J[220] = -0.9;
	J[255] = 0.1;

   /*** derivatives for constraint 63 ***/

	J[119] = -0.3;
	J[153] = 1.2;
	J[187] = 0.1;
	J[221] = 0.2;
	J[256] = 0.8;

   /*** derivatives for constraint 64 ***/

	J[125] = -2.;
	J[159] = 1.;
	J[193] = 1.;
	J[262] = -2.;

   /*** derivatives for constraint 65 ***/

	J[126] = 2.;
	J[160] = -3.;
	J[194] = 1.5;
	J[227] = -1.;
	J[263] = -1.3;

   /*** derivatives for constraint 66 ***/

	J[161] = -1.;
	J[195] = -1.;
	J[228] = -1.;

   /*** derivatives for constraint 67 ***/

	J[127] = -1.3;
	J[162] = 0.2;
	J[196] = -0.9;
	J[229] = -0.8;
	J[264] = -0.2;

   /*** derivatives for constraint 68 ***/

	J[44] = 1.;
	J[49] = 1.;

   /*** derivatives for constraint 69 ***/

	J[54] = 1.;
	J[59] = 1.;
	J[64] = 1.;

   /*** derivatives for constraint 70 ***/

	J[67] = 1.;
	J[70] = 1.;
	J[73] = 1.;
	J[76] = 1.;

   /*** derivatives for constraint 71 ***/

	J[80] = 1.;
	J[84] = 1.;
	J[88] = 1.;
	J[92] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
