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
 fint pooling_adhya2tp_auxcom_[1] = { 20 /* nlc */ };
 fint pooling_adhya2tp_funcom_[278] = {
	33 /* nvar */,
	1 /* nobj */,
	57 /* ncon */,
	238 /* nzc */,
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
	59,
	69,
	79,
	88,
	98,
	107,
	117,
	127,
	137,
	145,
	153,
	163,
	171,
	181,
	191,
	200,
	210,
	220,
	230,
	239,

	/* rownos */
	1,
	5,
	56,
	2,
	6,
	56,
	3,
	7,
	56,
	4,
	8,
	56,
	9,
	13,
	17,
	57,
	10,
	14,
	18,
	57,
	11,
	15,
	19,
	57,
	12,
	16,
	20,
	57,
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
	36,
	37,
	2,
	21,
	26,
	29,
	38,
	39,
	40,
	41,
	42,
	43,
	3,
	21,
	26,
	30,
	44,
	45,
	46,
	47,
	48,
	49,
	4,
	21,
	26,
	31,
	50,
	51,
	53,
	54,
	55,
	5,
	22,
	26,
	28,
	32,
	33,
	34,
	35,
	36,
	37,
	6,
	22,
	26,
	29,
	39,
	40,
	41,
	42,
	43,
	7,
	22,
	26,
	30,
	44,
	45,
	46,
	47,
	48,
	49,
	8,
	22,
	26,
	31,
	50,
	51,
	52,
	53,
	54,
	55,
	9,
	23,
	27,
	28,
	32,
	33,
	34,
	35,
	36,
	37,
	10,
	23,
	27,
	29,
	39,
	40,
	41,
	43,
	11,
	23,
	27,
	30,
	44,
	46,
	47,
	49,
	12,
	23,
	27,
	31,
	50,
	51,
	52,
	53,
	54,
	55,
	13,
	24,
	27,
	28,
	34,
	35,
	36,
	37,
	14,
	24,
	27,
	29,
	38,
	39,
	40,
	41,
	42,
	43,
	15,
	24,
	27,
	30,
	44,
	45,
	46,
	47,
	48,
	49,
	16,
	24,
	27,
	31,
	51,
	52,
	53,
	54,
	55,
	17,
	25,
	27,
	28,
	32,
	33,
	34,
	35,
	36,
	37,
	18,
	25,
	27,
	29,
	38,
	39,
	40,
	41,
	42,
	43,
	19,
	25,
	27,
	30,
	44,
	45,
	46,
	47,
	48,
	49,
	20,
	25,
	27,
	31,
	50,
	51,
	53,
	54,
	55 };

 real pooling_adhya2tp_boundc_[1+66+114] /* Infinity, variable bounds, constraint bounds */ = {
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

 real pooling_adhya2tp_x0comn_[33] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real pooling_adhya2tp_old_x[33];
static int pooling_adhya2tp_xkind = -1;

 static int
pooling_adhya2tp_xcheck(real *x)
{
	real *x1 = pooling_adhya2tp_old_x, *xe = x + 33;
	errno = 0;
	if (pooling_adhya2tp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_adhya2tp_xkind = 0;
	return 1;
	}
 real
pooling_adhya2tp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_adhya2tp_xcheck(x) && wantfg == 2)
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
pooling_adhya2tp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_adhya2tp_xcheck(x) && wantfg == 2)
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

	t1 = -x[13];
	t1 += -2.*x[17];
	t1 += x[21];
	t1 += -3.*x[25];
	t1 += -3.*x[29];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = 4.*x[13];
	t1 += -x[17];
	t1 += 5.*x[21];
	t1 += -x[25];
	t1 += 2.*x[29];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -3.*x[14];
	t1 += -x[26];
	t1 += -3.*x[30];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = 3.5*x[14];
	t1 += -1.5*x[18];
	t1 += 3.*x[22];
	t1 += 0.5*x[26];
	t1 += 0.2*x[30];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = 0.5*x[14];
	t1 += -0.5*x[18];
	t1 += -0.5*x[22];
	t1 += -0.5*x[26];
	t1 += 0.5*x[30];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[14];
	t1 += 0.5*x[18];
	t1 += -0.6*x[22];
	t1 += -0.5*x[26];
	t1 += 0.1*x[30];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -2.*x[14];
	t1 += -3.*x[18];
	t1 += -4.*x[26];
	t1 += -4.*x[30];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = 3.*x[14];
	t1 += -2.*x[18];
	t1 += 4.*x[22];
	t1 += -2.*x[26];
	t1 += x[30];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -0.5*x[15];
	t1 += 2.5*x[19];
	t1 += 2.5*x[23];
	t1 += 1.5*x[27];
	t1 += -0.5*x[31];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = 0.5*x[15];
	t1 += -4.5*x[19];
	t1 += -2.5*x[27];
	t1 += -2.8*x[31];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = 0.1*x[15];
	t1 += -0.9*x[19];
	t1 += -0.9*x[23];
	t1 += -0.9*x[27];
	t1 += 0.1*x[31];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -0.3*x[15];
	t1 += 1.2*x[19];
	t1 += 0.1*x[23];
	t1 += 0.2*x[27];
	t1 += 0.8*x[31];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -2.*x[15];
	t1 += -3.*x[19];
	t1 += -4.*x[27];
	t1 += -4.*x[31];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = 3.*x[15];
	t1 += -2.*x[19];
	t1 += 4.*x[23];
	t1 += -2.*x[27];
	t1 += x[31];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -2.*x[16];
	t1 += x[20];
	t1 += x[24];
	t1 += -2.*x[32];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = 2.*x[16];
	t1 += -3.*x[20];
	t1 += 1.5*x[24];
	t1 += -x[28];
	t1 += -1.3*x[32];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[20];
	t1 += -x[24];
	t1 += -x[28];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -1.3*x[16];
	t1 += 0.2*x[20];
	t1 += -0.9*x[24];
	t1 += -0.8*x[28];
	t1 += -0.2*x[32];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -3.*x[16];
	t1 += -4.*x[20];
	t1 += -x[24];
	t1 += -5.*x[28];
	t1 += -5.*x[32];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = 3.*x[16];
	t1 += -2.*x[20];
	t1 += 4.*x[24];
	t1 += -2.*x[28];
	t1 += x[32];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	c[56] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[28] = -x[0];
	J[0] = -x[8];
	J[48] = 1.;

   /*** derivatives for constraint 2 ***/

	J[29] = -x[1];
	J[3] = -x[8];
	J[58] = 1.;

   /*** derivatives for constraint 3 ***/

	J[30] = -x[2];
	J[6] = -x[8];
	J[68] = 1.;

   /*** derivatives for constraint 4 ***/

	J[31] = -x[3];
	J[9] = -x[8];
	J[78] = 1.;

   /*** derivatives for constraint 5 ***/

	J[32] = -x[0];
	J[1] = -x[9];
	J[87] = 1.;

   /*** derivatives for constraint 6 ***/

	J[33] = -x[1];
	J[4] = -x[9];
	J[97] = 1.;

   /*** derivatives for constraint 7 ***/

	J[34] = -x[2];
	J[7] = -x[9];
	J[106] = 1.;

   /*** derivatives for constraint 8 ***/

	J[35] = -x[3];
	J[10] = -x[9];
	J[116] = 1.;

   /*** derivatives for constraint 9 ***/

	J[36] = -x[4];
	J[12] = -x[10];
	J[126] = 1.;

   /*** derivatives for constraint 10 ***/

	J[37] = -x[5];
	J[16] = -x[10];
	J[136] = 1.;

   /*** derivatives for constraint 11 ***/

	J[38] = -x[6];
	J[20] = -x[10];
	J[144] = 1.;

   /*** derivatives for constraint 12 ***/

	J[39] = -x[7];
	J[24] = -x[10];
	J[152] = 1.;

   /*** derivatives for constraint 13 ***/

	J[40] = -x[4];
	J[13] = -x[11];
	J[162] = 1.;

   /*** derivatives for constraint 14 ***/

	J[41] = -x[5];
	J[17] = -x[11];
	J[170] = 1.;

   /*** derivatives for constraint 15 ***/

	J[42] = -x[6];
	J[21] = -x[11];
	J[180] = 1.;

   /*** derivatives for constraint 16 ***/

	J[43] = -x[7];
	J[25] = -x[11];
	J[190] = 1.;

   /*** derivatives for constraint 17 ***/

	J[44] = -x[4];
	J[14] = -x[12];
	J[199] = 1.;

   /*** derivatives for constraint 18 ***/

	J[45] = -x[5];
	J[18] = -x[12];
	J[209] = 1.;

   /*** derivatives for constraint 19 ***/

	J[46] = -x[6];
	J[22] = -x[12];
	J[219] = 1.;

   /*** derivatives for constraint 20 ***/

	J[47] = -x[7];
	J[26] = -x[12];
	J[229] = 1.;

   /*** derivatives for constraint 21 ***/

	J[49] = 1.;
	J[59] = 1.;
	J[69] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 22 ***/

	J[88] = 1.;
	J[98] = 1.;
	J[107] = 1.;
	J[117] = 1.;

   /*** derivatives for constraint 23 ***/

	J[127] = 1.;
	J[137] = 1.;
	J[145] = 1.;
	J[153] = 1.;

   /*** derivatives for constraint 24 ***/

	J[163] = 1.;
	J[171] = 1.;
	J[181] = 1.;
	J[191] = 1.;

   /*** derivatives for constraint 25 ***/

	J[200] = 1.;
	J[210] = 1.;
	J[220] = 1.;
	J[230] = 1.;

   /*** derivatives for constraint 26 ***/

	J[50] = 1.;
	J[60] = 1.;
	J[70] = 1.;
	J[80] = 1.;
	J[89] = 1.;
	J[99] = 1.;
	J[108] = 1.;
	J[118] = 1.;

   /*** derivatives for constraint 27 ***/

	J[128] = 1.;
	J[138] = 1.;
	J[146] = 1.;
	J[154] = 1.;
	J[164] = 1.;
	J[172] = 1.;
	J[182] = 1.;
	J[192] = 1.;
	J[201] = 1.;
	J[211] = 1.;
	J[221] = 1.;
	J[231] = 1.;

   /*** derivatives for constraint 28 ***/

	J[51] = 1.;
	J[90] = 1.;
	J[129] = 1.;
	J[165] = 1.;
	J[202] = 1.;

   /*** derivatives for constraint 29 ***/

	J[61] = 1.;
	J[100] = 1.;
	J[139] = 1.;
	J[173] = 1.;
	J[212] = 1.;

   /*** derivatives for constraint 30 ***/

	J[71] = 1.;
	J[109] = 1.;
	J[147] = 1.;
	J[183] = 1.;
	J[222] = 1.;

   /*** derivatives for constraint 31 ***/

	J[81] = 1.;
	J[119] = 1.;
	J[155] = 1.;
	J[193] = 1.;
	J[232] = 1.;

   /*** derivatives for constraint 32 ***/

	J[52] = -2.;
	J[91] = 1.;
	J[130] = 1.;
	J[203] = -2.;

   /*** derivatives for constraint 33 ***/

	J[53] = 3.;
	J[92] = -2.;
	J[131] = 2.5;
	J[204] = -0.3;

   /*** derivatives for constraint 34 ***/

	J[54] = 0.75;
	J[93] = -0.25;
	J[132] = -0.25;
	J[166] = -0.25;
	J[205] = 0.75;

   /*** derivatives for constraint 35 ***/

	J[55] = -0.25;
	J[94] = 1.25;
	J[133] = 0.15;
	J[167] = 0.25;
	J[206] = 0.85;

   /*** derivatives for constraint 36 ***/

	J[56] = -1.;
	J[95] = -2.;
	J[134] = 1.;
	J[168] = -3.;
	J[207] = -3.;

   /*** derivatives for constraint 37 ***/

	J[57] = 4.;
	J[96] = -1.;
	J[135] = 5.;
	J[169] = -1.;
	J[208] = 2.;

   /*** derivatives for constraint 38 ***/

	J[62] = -3.;
	J[174] = -1.;
	J[213] = -3.;

   /*** derivatives for constraint 39 ***/

	J[63] = 3.5;
	J[101] = -1.5;
	J[140] = 3.;
	J[175] = 0.5;
	J[214] = 0.2;

   /*** derivatives for constraint 40 ***/

	J[64] = 0.5;
	J[102] = -0.5;
	J[141] = -0.5;
	J[176] = -0.5;
	J[215] = 0.5;

   /*** derivatives for constraint 41 ***/

	J[65] = -1.;
	J[103] = 0.5;
	J[142] = -0.6;
	J[177] = -0.5;
	J[216] = 0.1;

   /*** derivatives for constraint 42 ***/

	J[66] = -2.;
	J[104] = -3.;
	J[178] = -4.;
	J[217] = -4.;

   /*** derivatives for constraint 43 ***/

	J[67] = 3.;
	J[105] = -2.;
	J[143] = 4.;
	J[179] = -2.;
	J[218] = 1.;

   /*** derivatives for constraint 44 ***/

	J[72] = -0.5;
	J[110] = 2.5;
	J[148] = 2.5;
	J[184] = 1.5;
	J[223] = -0.5;

   /*** derivatives for constraint 45 ***/

	J[73] = 0.5;
	J[111] = -4.5;
	J[185] = -2.5;
	J[224] = -2.8;

   /*** derivatives for constraint 46 ***/

	J[74] = 0.1;
	J[112] = -0.9;
	J[149] = -0.9;
	J[186] = -0.9;
	J[225] = 0.1;

   /*** derivatives for constraint 47 ***/

	J[75] = -0.3;
	J[113] = 1.2;
	J[150] = 0.1;
	J[187] = 0.2;
	J[226] = 0.8;

   /*** derivatives for constraint 48 ***/

	J[76] = -2.;
	J[114] = -3.;
	J[188] = -4.;
	J[227] = -4.;

   /*** derivatives for constraint 49 ***/

	J[77] = 3.;
	J[115] = -2.;
	J[151] = 4.;
	J[189] = -2.;
	J[228] = 1.;

   /*** derivatives for constraint 50 ***/

	J[82] = -2.;
	J[120] = 1.;
	J[156] = 1.;
	J[233] = -2.;

   /*** derivatives for constraint 51 ***/

	J[83] = 2.;
	J[121] = -3.;
	J[157] = 1.5;
	J[194] = -1.;
	J[234] = -1.3;

   /*** derivatives for constraint 52 ***/

	J[122] = -1.;
	J[158] = -1.;
	J[195] = -1.;

   /*** derivatives for constraint 53 ***/

	J[84] = -1.3;
	J[123] = 0.2;
	J[159] = -0.9;
	J[196] = -0.8;
	J[235] = -0.2;

   /*** derivatives for constraint 54 ***/

	J[85] = -3.;
	J[124] = -4.;
	J[160] = -1.;
	J[197] = -5.;
	J[236] = -5.;

   /*** derivatives for constraint 55 ***/

	J[86] = 3.;
	J[125] = -2.;
	J[161] = 4.;
	J[198] = -2.;
	J[237] = 1.;

   /*** derivatives for constraint 56 ***/

	J[2] = 1.;
	J[5] = 1.;
	J[8] = 1.;
	J[11] = 1.;

   /*** derivatives for constraint 57 ***/

	J[15] = 1.;
	J[19] = 1.;
	J[23] = 1.;
	J[27] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
