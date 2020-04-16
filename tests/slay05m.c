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
 fint slay05m_auxcom_[1] = { 0 /* nlc */ };
 fint slay05m_funcom_[357] = {
	70 /* nvar */,
	1 /* nobj */,
	90 /* ncon */,
	280 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	17,
	33,
	49,
	65,
	81,
	97,
	113,
	129,
	145,
	161,
	163,
	165,
	167,
	169,
	171,
	173,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	189,
	191,
	193,
	195,
	197,
	199,
	201,
	203,
	205,
	207,
	209,
	211,
	213,
	215,
	217,
	219,
	221,
	223,
	225,
	227,
	229,
	231,
	233,
	235,
	237,
	239,
	241,
	243,
	245,
	247,
	249,
	251,
	253,
	255,
	257,
	259,
	261,
	263,
	265,
	267,
	269,
	271,
	273,
	275,
	277,
	279,
	281,

	/* rownos */
	1,
	2,
	3,
	4,
	11,
	12,
	13,
	14,
	41,
	42,
	43,
	44,
	51,
	52,
	53,
	54,
	1,
	5,
	6,
	7,
	11,
	15,
	16,
	17,
	41,
	45,
	46,
	47,
	51,
	55,
	56,
	57,
	2,
	5,
	8,
	9,
	12,
	15,
	18,
	19,
	42,
	45,
	48,
	49,
	52,
	55,
	58,
	59,
	3,
	6,
	8,
	10,
	13,
	16,
	18,
	20,
	43,
	46,
	48,
	50,
	53,
	56,
	58,
	60,
	4,
	7,
	9,
	10,
	14,
	17,
	19,
	20,
	44,
	47,
	49,
	50,
	54,
	57,
	59,
	60,
	21,
	22,
	23,
	24,
	31,
	32,
	33,
	34,
	61,
	62,
	63,
	64,
	71,
	72,
	73,
	74,
	21,
	25,
	26,
	27,
	31,
	35,
	36,
	37,
	61,
	65,
	66,
	67,
	71,
	75,
	76,
	77,
	22,
	25,
	28,
	29,
	32,
	35,
	38,
	39,
	62,
	65,
	68,
	69,
	72,
	75,
	78,
	79,
	23,
	26,
	28,
	30,
	33,
	36,
	38,
	40,
	63,
	66,
	68,
	70,
	73,
	76,
	78,
	80,
	24,
	27,
	29,
	30,
	34,
	37,
	39,
	40,
	64,
	67,
	69,
	70,
	74,
	77,
	79,
	80,
	1,
	11,
	2,
	12,
	3,
	13,
	4,
	14,
	5,
	15,
	6,
	16,
	7,
	17,
	8,
	18,
	9,
	19,
	10,
	20,
	21,
	31,
	22,
	32,
	23,
	33,
	24,
	34,
	25,
	35,
	26,
	36,
	27,
	37,
	28,
	38,
	29,
	39,
	30,
	40,
	41,
	81,
	42,
	82,
	43,
	83,
	44,
	84,
	45,
	85,
	46,
	86,
	47,
	87,
	48,
	88,
	49,
	89,
	50,
	90,
	51,
	81,
	52,
	82,
	53,
	83,
	54,
	84,
	55,
	85,
	56,
	86,
	57,
	87,
	58,
	88,
	59,
	89,
	60,
	90,
	61,
	81,
	62,
	82,
	63,
	83,
	64,
	84,
	65,
	85,
	66,
	86,
	67,
	87,
	68,
	88,
	69,
	89,
	70,
	90,
	71,
	81,
	72,
	82,
	73,
	83,
	74,
	84,
	75,
	85,
	76,
	86,
	77,
	87,
	78,
	88,
	79,
	89,
	80,
	90 };

 real slay05m_boundc_[1+140+180] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		2.5,
		27.5,
		3.5,
		26.5,
		1.5,
		28.5,
		1.,
		29.,
		2.,
		28.,
		3.,
		27.,
		2.5,
		27.5,
		1.5,
		28.5,
		1.5,
		28.5,
		2.,
		28.,
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
		-1.7e308,
		24.,
		-1.7e308,
		26.,
		-1.7e308,
		26.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.,
		-1.7e308,
		25.5,
		-1.7e308,
		24.5,
		-1.7e308,
		27.5,
		-1.7e308,
		26.5,
		-1.7e308,
		27.,
		-1.7e308,
		24.,
		-1.7e308,
		26.,
		-1.7e308,
		26.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.,
		-1.7e308,
		25.5,
		-1.7e308,
		24.5,
		-1.7e308,
		27.5,
		-1.7e308,
		26.5,
		-1.7e308,
		27.,
		-1.7e308,
		24.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.,
		-1.7e308,
		26.,
		-1.7e308,
		26.,
		-1.7e308,
		25.5,
		-1.7e308,
		27.,
		-1.7e308,
		26.5,
		-1.7e308,
		26.5,
		-1.7e308,
		24.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.5,
		-1.7e308,
		25.,
		-1.7e308,
		26.,
		-1.7e308,
		26.,
		-1.7e308,
		25.5,
		-1.7e308,
		27.,
		-1.7e308,
		26.5,
		-1.7e308,
		26.5,
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
		1.};

 real slay05m_x0comn_[70] = {
		2.5,
		3.5,
		1.5,
		1.,
		2.,
		3.,
		2.5,
		1.5,
		1.5,
		2.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real slay05m_pd[20];
static real slay05m_old_x[70];
static int slay05m_xkind = -1;

 static int
slay05m_xcheck(real *x)
{
	real *x1 = slay05m_old_x, *xe = x + 70;
	errno = 0;
	if (slay05m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	slay05m_xkind = 0;
	return 1;
	}
 real
slay05m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[10], rv;
	fint wantfg = *needfg;
	if (slay05m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -4.;
	slay05m_pd[0] = v[0] * v[0];
	slay05m_pd[1] = v[0] + v[0];
	v[0] = 150. * slay05m_pd[0];
	v[1] = x[5] + -10.;
	slay05m_pd[2] = v[1] * v[1];
	slay05m_pd[3] = v[1] + v[1];
	v[1] = 150. * slay05m_pd[2];
	v[0] += v[1];
	v[1] = x[1] + -10.;
	slay05m_pd[4] = v[1] * v[1];
	slay05m_pd[5] = v[1] + v[1];
	v[1] = 390. * slay05m_pd[4];
	v[0] += v[1];
	v[1] = x[6] + -15.;
	slay05m_pd[6] = v[1] * v[1];
	slay05m_pd[7] = v[1] + v[1];
	v[1] = 390. * slay05m_pd[6];
	v[0] += v[1];
	v[1] = x[2] + -7.;
	slay05m_pd[8] = v[1] * v[1];
	slay05m_pd[9] = v[1] + v[1];
	v[1] = 240. * slay05m_pd[8];
	v[0] += v[1];
	v[1] = x[7] + -9.;
	slay05m_pd[10] = v[1] * v[1];
	slay05m_pd[11] = v[1] + v[1];
	v[1] = 240. * slay05m_pd[10];
	v[0] += v[1];
	v[1] = x[3] + -3.;
	slay05m_pd[12] = v[1] * v[1];
	slay05m_pd[13] = v[1] + v[1];
	v[1] = 70. * slay05m_pd[12];
	v[0] += v[1];
	v[1] = x[8] + -3.;
	slay05m_pd[14] = v[1] * v[1];
	slay05m_pd[15] = v[1] + v[1];
	v[1] = 70. * slay05m_pd[14];
	v[0] += v[1];
	v[1] = x[4] + -20.;
	slay05m_pd[16] = v[1] * v[1];
	slay05m_pd[17] = v[1] + v[1];
	v[1] = 165. * slay05m_pd[16];
	v[0] += v[1];
	v[1] = x[9] + -17.;
	slay05m_pd[18] = v[1] * v[1];
	slay05m_pd[19] = v[1] + v[1];
	v[1] = 165. * slay05m_pd[18];
	v[0] += v[1];
	rv = v[0] + 300.*x[10];
	rv += 240.*x[11];
	rv += 210.*x[12];
	rv += 140.*x[13];
	rv += 100.*x[14];
	rv += 150.*x[15];
	rv += 220.*x[16];
	rv += 120.*x[17];
	rv += 300.*x[18];
	rv += 100.*x[19];
	rv += 300.*x[20];
	rv += 240.*x[21];
	rv += 210.*x[22];
	rv += 140.*x[23];
	rv += 100.*x[24];
	rv += 150.*x[25];
	rv += 220.*x[26];
	rv += 120.*x[27];
	rv += 300.*x[28];
	rv += 100.*x[29];
	;}

	if (wantfg & 2) {
	dv[0] = 165.*slay05m_pd[19];
	g[9] = dv[0];
	dv[1] = 165.*slay05m_pd[17];
	g[4] = dv[1];
	dv[2] = 70.*slay05m_pd[15];
	g[8] = dv[2];
	dv[3] = 70.*slay05m_pd[13];
	g[3] = dv[3];
	dv[4] = 240.*slay05m_pd[11];
	g[7] = dv[4];
	dv[5] = 240.*slay05m_pd[9];
	g[2] = dv[5];
	dv[6] = 390.*slay05m_pd[7];
	g[6] = dv[6];
	dv[7] = 390.*slay05m_pd[5];
	g[1] = dv[7];
	dv[8] = 150.*slay05m_pd[3];
	g[5] = dv[8];
	dv[9] = 150.*slay05m_pd[1];
	g[0] = dv[9];
	g[10] = 300.;
	g[11] = 240.;
	g[12] = 210.;
	g[13] = 140.;
	g[14] = 100.;
	g[15] = 150.;
	g[16] = 220.;
	g[17] = 120.;
	g[18] = 300.;
	g[19] = 100.;
	g[20] = 300.;
	g[21] = 240.;
	g[22] = 210.;
	g[23] = 140.;
	g[24] = 100.;
	g[25] = 150.;
	g[26] = 220.;
	g[27] = 120.;
	g[28] = 300.;
	g[29] = 100.;
	}

	return rv;
}

 void
slay05m_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (slay05m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[10];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[11];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += x[12];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += x[4];
	t1 += x[13];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[14];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += x[15];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[1];
	t1 += x[4];
	t1 += x[16];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[17];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[2];
	t1 += x[4];
	t1 += x[18];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[19];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[0];
	t1 += -x[4];
	t1 += x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[14];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += x[17];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[2];
	t1 += -x[4];
	t1 += x[18];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += x[19];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[20];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += x[21];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[5];
	t1 += x[8];
	t1 += x[22];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[5];
	t1 += x[9];
	t1 += x[23];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[24];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += x[25];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[6];
	t1 += x[9];
	t1 += x[26];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += x[27];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += x[28];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += x[29];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[20];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += x[21];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[5];
	t1 += -x[8];
	t1 += x[22];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[5];
	t1 += -x[9];
	t1 += x[23];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[24];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[6];
	t1 += -x[8];
	t1 += x[25];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[6];
	t1 += -x[9];
	t1 += x[26];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += x[27];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += x[28];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += x[29];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 30.*x[30];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += 30.*x[31];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += 30.*x[32];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[0];
	t1 += -x[4];
	t1 += 30.*x[33];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += 30.*x[34];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += 30.*x[35];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += 30.*x[36];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += 30.*x[37];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[2];
	t1 += -x[4];
	t1 += 30.*x[38];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += 30.*x[39];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += 30.*x[40];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += 30.*x[41];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += 30.*x[42];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[0];
	t1 += x[4];
	t1 += 30.*x[43];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += 30.*x[44];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += 30.*x[45];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[1];
	t1 += x[4];
	t1 += 30.*x[46];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += 30.*x[47];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[2];
	t1 += x[4];
	t1 += 30.*x[48];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += 30.*x[49];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += 30.*x[50];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += 30.*x[51];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[5];
	t1 += -x[8];
	t1 += 30.*x[52];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[5];
	t1 += -x[9];
	t1 += 30.*x[53];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += 30.*x[54];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[6];
	t1 += -x[8];
	t1 += 30.*x[55];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[6];
	t1 += -x[9];
	t1 += 30.*x[56];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += 30.*x[57];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += 30.*x[58];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += 30.*x[59];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += 30.*x[60];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += 30.*x[61];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[5];
	t1 += x[8];
	t1 += 30.*x[62];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[5];
	t1 += x[9];
	t1 += 30.*x[63];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += 30.*x[64];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += 30.*x[65];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[6];
	t1 += x[9];
	t1 += 30.*x[66];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += 30.*x[67];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += 30.*x[68];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += 30.*x[69];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[30];
	t1 += x[40];
	t1 += x[50];
	t1 += x[60];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[31];
	t1 += x[41];
	t1 += x[51];
	t1 += x[61];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[32];
	t1 += x[42];
	t1 += x[52];
	t1 += x[62];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[33];
	t1 += x[43];
	t1 += x[53];
	t1 += x[63];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[34];
	t1 += x[44];
	t1 += x[54];
	t1 += x[64];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[35];
	t1 += x[45];
	t1 += x[55];
	t1 += x[65];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[36];
	t1 += x[46];
	t1 += x[56];
	t1 += x[66];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[37];
	t1 += x[47];
	t1 += x[57];
	t1 += x[67];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[38];
	t1 += x[48];
	t1 += x[58];
	t1 += x[68];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[39];
	t1 += x[49];
	t1 += x[59];
	t1 += x[69];
	c[89] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[16] = 1.;
	J[160] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[32] = 1.;
	J[162] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -1.;
	J[48] = 1.;
	J[164] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[64] = 1.;
	J[166] = 1.;

   /*** derivatives for constraint 5 ***/

	J[17] = -1.;
	J[33] = 1.;
	J[168] = 1.;

   /*** derivatives for constraint 6 ***/

	J[18] = -1.;
	J[49] = 1.;
	J[170] = 1.;

   /*** derivatives for constraint 7 ***/

	J[19] = -1.;
	J[65] = 1.;
	J[172] = 1.;

   /*** derivatives for constraint 8 ***/

	J[34] = -1.;
	J[50] = 1.;
	J[174] = 1.;

   /*** derivatives for constraint 9 ***/

	J[35] = -1.;
	J[66] = 1.;
	J[176] = 1.;

   /*** derivatives for constraint 10 ***/

	J[51] = -1.;
	J[67] = 1.;
	J[178] = 1.;

   /*** derivatives for constraint 11 ***/

	J[4] = 1.;
	J[20] = -1.;
	J[161] = 1.;

   /*** derivatives for constraint 12 ***/

	J[5] = 1.;
	J[36] = -1.;
	J[163] = 1.;

   /*** derivatives for constraint 13 ***/

	J[6] = 1.;
	J[52] = -1.;
	J[165] = 1.;

   /*** derivatives for constraint 14 ***/

	J[7] = 1.;
	J[68] = -1.;
	J[167] = 1.;

   /*** derivatives for constraint 15 ***/

	J[21] = 1.;
	J[37] = -1.;
	J[169] = 1.;

   /*** derivatives for constraint 16 ***/

	J[22] = 1.;
	J[53] = -1.;
	J[171] = 1.;

   /*** derivatives for constraint 17 ***/

	J[23] = 1.;
	J[69] = -1.;
	J[173] = 1.;

   /*** derivatives for constraint 18 ***/

	J[38] = 1.;
	J[54] = -1.;
	J[175] = 1.;

   /*** derivatives for constraint 19 ***/

	J[39] = 1.;
	J[70] = -1.;
	J[177] = 1.;

   /*** derivatives for constraint 20 ***/

	J[55] = 1.;
	J[71] = -1.;
	J[179] = 1.;

   /*** derivatives for constraint 21 ***/

	J[80] = -1.;
	J[96] = 1.;
	J[180] = 1.;

   /*** derivatives for constraint 22 ***/

	J[81] = -1.;
	J[112] = 1.;
	J[182] = 1.;

   /*** derivatives for constraint 23 ***/

	J[82] = -1.;
	J[128] = 1.;
	J[184] = 1.;

   /*** derivatives for constraint 24 ***/

	J[83] = -1.;
	J[144] = 1.;
	J[186] = 1.;

   /*** derivatives for constraint 25 ***/

	J[97] = -1.;
	J[113] = 1.;
	J[188] = 1.;

   /*** derivatives for constraint 26 ***/

	J[98] = -1.;
	J[129] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 27 ***/

	J[99] = -1.;
	J[145] = 1.;
	J[192] = 1.;

   /*** derivatives for constraint 28 ***/

	J[114] = -1.;
	J[130] = 1.;
	J[194] = 1.;

   /*** derivatives for constraint 29 ***/

	J[115] = -1.;
	J[146] = 1.;
	J[196] = 1.;

   /*** derivatives for constraint 30 ***/

	J[131] = -1.;
	J[147] = 1.;
	J[198] = 1.;

   /*** derivatives for constraint 31 ***/

	J[84] = 1.;
	J[100] = -1.;
	J[181] = 1.;

   /*** derivatives for constraint 32 ***/

	J[85] = 1.;
	J[116] = -1.;
	J[183] = 1.;

   /*** derivatives for constraint 33 ***/

	J[86] = 1.;
	J[132] = -1.;
	J[185] = 1.;

   /*** derivatives for constraint 34 ***/

	J[87] = 1.;
	J[148] = -1.;
	J[187] = 1.;

   /*** derivatives for constraint 35 ***/

	J[101] = 1.;
	J[117] = -1.;
	J[189] = 1.;

   /*** derivatives for constraint 36 ***/

	J[102] = 1.;
	J[133] = -1.;
	J[191] = 1.;

   /*** derivatives for constraint 37 ***/

	J[103] = 1.;
	J[149] = -1.;
	J[193] = 1.;

   /*** derivatives for constraint 38 ***/

	J[118] = 1.;
	J[134] = -1.;
	J[195] = 1.;

   /*** derivatives for constraint 39 ***/

	J[119] = 1.;
	J[150] = -1.;
	J[197] = 1.;

   /*** derivatives for constraint 40 ***/

	J[135] = 1.;
	J[151] = -1.;
	J[199] = 1.;

   /*** derivatives for constraint 41 ***/

	J[8] = 1.;
	J[24] = -1.;
	J[200] = 30.;

   /*** derivatives for constraint 42 ***/

	J[9] = 1.;
	J[40] = -1.;
	J[202] = 30.;

   /*** derivatives for constraint 43 ***/

	J[10] = 1.;
	J[56] = -1.;
	J[204] = 30.;

   /*** derivatives for constraint 44 ***/

	J[11] = 1.;
	J[72] = -1.;
	J[206] = 30.;

   /*** derivatives for constraint 45 ***/

	J[25] = 1.;
	J[41] = -1.;
	J[208] = 30.;

   /*** derivatives for constraint 46 ***/

	J[26] = 1.;
	J[57] = -1.;
	J[210] = 30.;

   /*** derivatives for constraint 47 ***/

	J[27] = 1.;
	J[73] = -1.;
	J[212] = 30.;

   /*** derivatives for constraint 48 ***/

	J[42] = 1.;
	J[58] = -1.;
	J[214] = 30.;

   /*** derivatives for constraint 49 ***/

	J[43] = 1.;
	J[74] = -1.;
	J[216] = 30.;

   /*** derivatives for constraint 50 ***/

	J[59] = 1.;
	J[75] = -1.;
	J[218] = 30.;

   /*** derivatives for constraint 51 ***/

	J[12] = -1.;
	J[28] = 1.;
	J[220] = 30.;

   /*** derivatives for constraint 52 ***/

	J[13] = -1.;
	J[44] = 1.;
	J[222] = 30.;

   /*** derivatives for constraint 53 ***/

	J[14] = -1.;
	J[60] = 1.;
	J[224] = 30.;

   /*** derivatives for constraint 54 ***/

	J[15] = -1.;
	J[76] = 1.;
	J[226] = 30.;

   /*** derivatives for constraint 55 ***/

	J[29] = -1.;
	J[45] = 1.;
	J[228] = 30.;

   /*** derivatives for constraint 56 ***/

	J[30] = -1.;
	J[61] = 1.;
	J[230] = 30.;

   /*** derivatives for constraint 57 ***/

	J[31] = -1.;
	J[77] = 1.;
	J[232] = 30.;

   /*** derivatives for constraint 58 ***/

	J[46] = -1.;
	J[62] = 1.;
	J[234] = 30.;

   /*** derivatives for constraint 59 ***/

	J[47] = -1.;
	J[78] = 1.;
	J[236] = 30.;

   /*** derivatives for constraint 60 ***/

	J[63] = -1.;
	J[79] = 1.;
	J[238] = 30.;

   /*** derivatives for constraint 61 ***/

	J[88] = 1.;
	J[104] = -1.;
	J[240] = 30.;

   /*** derivatives for constraint 62 ***/

	J[89] = 1.;
	J[120] = -1.;
	J[242] = 30.;

   /*** derivatives for constraint 63 ***/

	J[90] = 1.;
	J[136] = -1.;
	J[244] = 30.;

   /*** derivatives for constraint 64 ***/

	J[91] = 1.;
	J[152] = -1.;
	J[246] = 30.;

   /*** derivatives for constraint 65 ***/

	J[105] = 1.;
	J[121] = -1.;
	J[248] = 30.;

   /*** derivatives for constraint 66 ***/

	J[106] = 1.;
	J[137] = -1.;
	J[250] = 30.;

   /*** derivatives for constraint 67 ***/

	J[107] = 1.;
	J[153] = -1.;
	J[252] = 30.;

   /*** derivatives for constraint 68 ***/

	J[122] = 1.;
	J[138] = -1.;
	J[254] = 30.;

   /*** derivatives for constraint 69 ***/

	J[123] = 1.;
	J[154] = -1.;
	J[256] = 30.;

   /*** derivatives for constraint 70 ***/

	J[139] = 1.;
	J[155] = -1.;
	J[258] = 30.;

   /*** derivatives for constraint 71 ***/

	J[92] = -1.;
	J[108] = 1.;
	J[260] = 30.;

   /*** derivatives for constraint 72 ***/

	J[93] = -1.;
	J[124] = 1.;
	J[262] = 30.;

   /*** derivatives for constraint 73 ***/

	J[94] = -1.;
	J[140] = 1.;
	J[264] = 30.;

   /*** derivatives for constraint 74 ***/

	J[95] = -1.;
	J[156] = 1.;
	J[266] = 30.;

   /*** derivatives for constraint 75 ***/

	J[109] = -1.;
	J[125] = 1.;
	J[268] = 30.;

   /*** derivatives for constraint 76 ***/

	J[110] = -1.;
	J[141] = 1.;
	J[270] = 30.;

   /*** derivatives for constraint 77 ***/

	J[111] = -1.;
	J[157] = 1.;
	J[272] = 30.;

   /*** derivatives for constraint 78 ***/

	J[126] = -1.;
	J[142] = 1.;
	J[274] = 30.;

   /*** derivatives for constraint 79 ***/

	J[127] = -1.;
	J[158] = 1.;
	J[276] = 30.;

   /*** derivatives for constraint 80 ***/

	J[143] = -1.;
	J[159] = 1.;
	J[278] = 30.;

   /*** derivatives for constraint 81 ***/

	J[201] = 1.;
	J[221] = 1.;
	J[241] = 1.;
	J[261] = 1.;

   /*** derivatives for constraint 82 ***/

	J[203] = 1.;
	J[223] = 1.;
	J[243] = 1.;
	J[263] = 1.;

   /*** derivatives for constraint 83 ***/

	J[205] = 1.;
	J[225] = 1.;
	J[245] = 1.;
	J[265] = 1.;

   /*** derivatives for constraint 84 ***/

	J[207] = 1.;
	J[227] = 1.;
	J[247] = 1.;
	J[267] = 1.;

   /*** derivatives for constraint 85 ***/

	J[209] = 1.;
	J[229] = 1.;
	J[249] = 1.;
	J[269] = 1.;

   /*** derivatives for constraint 86 ***/

	J[211] = 1.;
	J[231] = 1.;
	J[251] = 1.;
	J[271] = 1.;

   /*** derivatives for constraint 87 ***/

	J[213] = 1.;
	J[233] = 1.;
	J[253] = 1.;
	J[273] = 1.;

   /*** derivatives for constraint 88 ***/

	J[215] = 1.;
	J[235] = 1.;
	J[255] = 1.;
	J[275] = 1.;

   /*** derivatives for constraint 89 ***/

	J[217] = 1.;
	J[237] = 1.;
	J[257] = 1.;
	J[277] = 1.;

   /*** derivatives for constraint 90 ***/

	J[219] = 1.;
	J[239] = 1.;
	J[259] = 1.;
	J[279] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
