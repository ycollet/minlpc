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
 fint syn05m02m_auxcom_[1] = { 6 /* nlc */ };
 fint syn05m02m_funcom_[308] = {
	60 /* nvar */,
	1 /* nobj */,
	101 /* ncon */,
	241 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	20,
	21,
	24,
	27,
	30,
	33,
	35,
	37,
	38,
	39,
	41,
	43,
	47,
	51,
	55,
	59,
	62,
	65,
	68,
	71,
	73,
	75,
	80,
	85,
	87,
	89,
	91,
	93,
	95,
	97,
	99,
	101,
	103,
	105,
	115,
	124,
	134,
	143,
	151,
	158,
	165,
	171,
	182,
	192,
	197,
	202,
	207,
	212,
	217,
	222,
	227,
	232,
	237,
	242,

	/* rownos */
	1,
	7,
	15,
	2,
	8,
	16,
	3,
	7,
	19,
	4,
	8,
	20,
	5,
	13,
	31,
	6,
	14,
	32,
	7,
	8,
	1,
	9,
	17,
	2,
	10,
	18,
	3,
	9,
	21,
	4,
	10,
	22,
	9,
	11,
	10,
	12,
	11,
	12,
	11,
	13,
	12,
	14,
	13,
	23,
	25,
	27,
	14,
	24,
	26,
	28,
	13,
	35,
	37,
	43,
	14,
	36,
	38,
	44,
	39,
	41,
	45,
	40,
	42,
	46,
	23,
	25,
	29,
	24,
	26,
	30,
	5,
	33,
	6,
	34,
	35,
	37,
	39,
	41,
	47,
	36,
	38,
	40,
	42,
	48,
	49,
	59,
	50,
	60,
	51,
	61,
	52,
	62,
	53,
	63,
	54,
	64,
	55,
	65,
	56,
	66,
	57,
	67,
	58,
	68,
	1,
	15,
	17,
	69,
	84,
	85,
	94,
	96,
	98,
	100,
	2,
	16,
	18,
	69,
	85,
	95,
	97,
	99,
	101,
	3,
	19,
	21,
	70,
	86,
	87,
	94,
	96,
	98,
	100,
	4,
	20,
	22,
	70,
	87,
	95,
	97,
	99,
	101,
	23,
	25,
	27,
	29,
	71,
	88,
	89,
	96,
	24,
	26,
	28,
	30,
	71,
	89,
	97,
	5,
	31,
	33,
	72,
	90,
	91,
	98,
	6,
	32,
	34,
	72,
	91,
	99,
	35,
	37,
	39,
	41,
	43,
	45,
	47,
	73,
	92,
	93,
	100,
	36,
	38,
	40,
	42,
	44,
	46,
	48,
	73,
	93,
	101,
	49,
	59,
	74,
	75,
	84,
	50,
	60,
	74,
	75,
	85,
	51,
	61,
	76,
	77,
	86,
	52,
	62,
	76,
	77,
	87,
	53,
	63,
	78,
	79,
	88,
	54,
	64,
	78,
	79,
	89,
	55,
	65,
	80,
	81,
	90,
	56,
	66,
	80,
	81,
	91,
	57,
	67,
	82,
	83,
	92,
	58,
	68,
	82,
	83,
	93 };

 real syn05m02m_boundc_[1+120+202] /* Infinity, variable bounds, constraint bounds */ = {
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
		40.,
		0.,
		40.,
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
		30.,
		0.,
		30.,
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
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		-1.,
		1.7e308,
		-1.,
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
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.,
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
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
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

 real syn05m02m_x0comn_[60] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn05m02m_pd[10];
static real syn05m02m_old_x[60];
static int syn05m02m_xkind = -1;

 static int
syn05m02m_xcheck(real *x)
{
	real *x1 = syn05m02m_old_x, *xe = x + 60;
	errno = 0;
	if (syn05m02m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn05m02m_xkind = 0;
	return 1;
	}
 real
syn05m02m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn05m02m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[6];
	rv += -x[7];
	rv += 5.*x[14];
	rv += 10.*x[15];
	rv += -2.*x[22];
	rv += -x[23];
	rv += 80.*x[24];
	rv += 90.*x[25];
	rv += 285.*x[26];
	rv += 390.*x[27];
	rv += 290.*x[28];
	rv += 405.*x[29];
	rv += -5.*x[50];
	rv += -4.*x[51];
	rv += -8.*x[52];
	rv += -7.*x[53];
	rv += -6.*x[54];
	rv += -9.*x[55];
	rv += -10.*x[56];
	rv += -9.*x[57];
	rv += -6.*x[58];
	rv += -10.*x[59];
	;}

	if (wantfg & 2) {
	g[6] = -1.;
	g[7] = -1.;
	g[14] = 5.;
	g[15] = 10.;
	g[22] = -2.;
	g[23] = -1.;
	g[24] = 80.;
	g[25] = 90.;
	g[26] = 285.;
	g[27] = 390.;
	g[28] = 290.;
	g[29] = 405.;
	g[50] = -5.;
	g[51] = -4.;
	g[52] = -8.;
	g[53] = -7.;
	g[54] = -6.;
	g[55] = -9.;
	g[56] = -10.;
	g[57] = -9.;
	g[58] = -6.;
	g[59] = -10.;
	}

	return rv;
}

 void
syn05m02m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (syn05m02m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m02m_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[8];
	t1 += x[40];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m02m_pd[1] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[9];
	t1 += x[41];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + 1.;
	syn05m02m_pd[2] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m02m_pd[3] = 1. / v[0];
	v[0] = -1.2 * syn05m02m_pd[2];
	t1 = v[0] + x[10];
	t1 += x[42];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] + 1.;
	syn05m02m_pd[4] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m02m_pd[5] = 1. / v[0];
	v[0] = -1.2 * syn05m02m_pd[4];
	t1 = v[0] + x[11];
	t1 += x[43];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] + 1.;
	syn05m02m_pd[6] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m02m_pd[7] = 1. / v[0];
	v[0] = -1.5 * syn05m02m_pd[6];
	t1 = v[0] + x[26];
	t1 += x[46];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[5] + 1.;
	syn05m02m_pd[8] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m02m_pd[9] = 1. / v[0];
	v[0] = -1.5 * syn05m02m_pd[8];
	t1 = v[0] + x[27];
	t1 += x[47];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += -x[2];
	t1 += x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[1];
	t1 += -x[3];
	t1 += x[7];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[8];
	t1 += -x[10];
	t1 += x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[9];
	t1 += -x[11];
	t1 += x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[12];
	t1 += -x[14];
	t1 += -x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[13];
	t1 += -x[15];
	t1 += -x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[4];
	t1 += x[16];
	t1 += -x[18];
	t1 += -x[20];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[5];
	t1 += x[17];
	t1 += -x[19];
	t1 += -x[21];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[0];
	t1 += -40.*x[40];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[1];
	t1 += -40.*x[41];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[8];
	t1 += -3.71357206670431*x[40];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[9];
	t1 += -3.71357206670431*x[41];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[2];
	t1 += -40.*x[42];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[3];
	t1 += -40.*x[43];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[10];
	t1 += -4.45628648004517*x[42];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[11];
	t1 += -4.45628648004517*x[43];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -0.75*x[18];
	t1 += x[24];
	t1 += x[44];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -0.75*x[19];
	t1 += x[25];
	t1 += x[45];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.75*x[18];
	t1 += x[24];
	t1 += -x[44];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.75*x[19];
	t1 += x[25];
	t1 += -x[45];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[18];
	t1 += -4.45628648004517*x[44];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[19];
	t1 += -4.45628648004517*x[45];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[24];
	t1 += -3.34221486003388*x[44];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[25];
	t1 += -3.34221486003388*x[45];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[4];
	t1 += -4.45628648004517*x[46];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[5];
	t1 += -4.45628648004517*x[47];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[26];
	t1 += -2.54515263975353*x[46];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[27];
	t1 += -2.54515263975353*x[47];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[20];
	t1 += x[28];
	t1 += x[48];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[21];
	t1 += x[29];
	t1 += x[49];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[20];
	t1 += x[28];
	t1 += -x[48];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[21];
	t1 += x[29];
	t1 += -x[49];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -0.5*x[22];
	t1 += x[28];
	t1 += x[48];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -0.5*x[23];
	t1 += x[29];
	t1 += x[49];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -0.5*x[22];
	t1 += x[28];
	t1 += -x[48];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -0.5*x[23];
	t1 += x[29];
	t1 += -x[49];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[20];
	t1 += -4.45628648004517*x[48];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[21];
	t1 += -4.45628648004517*x[49];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[22];
	t1 += -30.*x[48];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[23];
	t1 += -30.*x[49];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[28];
	t1 += -15.*x[48];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[29];
	t1 += -15.*x[49];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[30];
	t1 += 5.*x[50];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[31];
	t1 += 4.*x[51];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[32];
	t1 += 8.*x[52];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[33];
	t1 += 7.*x[53];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[34];
	t1 += 6.*x[54];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[35];
	t1 += 9.*x[55];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[36];
	t1 += 10.*x[56];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[37];
	t1 += 9.*x[57];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[38];
	t1 += 6.*x[58];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[39];
	t1 += 10.*x[59];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[30];
	t1 += 5.*x[50];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[31];
	t1 += 4.*x[51];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[32];
	t1 += 8.*x[52];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[33];
	t1 += 7.*x[53];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[34];
	t1 += 6.*x[54];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[35];
	t1 += 9.*x[55];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[36];
	t1 += 10.*x[56];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[37];
	t1 += 9.*x[57];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[38];
	t1 += 6.*x[58];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[39];
	t1 += 10.*x[59];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[40];
	t1 += -x[41];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[42];
	t1 += -x[43];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[44];
	t1 += -x[45];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[46];
	t1 += -x[47];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[48];
	t1 += -x[49];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[50];
	t1 += x[51];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[50];
	t1 += x[51];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[52];
	t1 += x[53];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[52];
	t1 += x[53];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[54];
	t1 += x[55];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[54];
	t1 += x[55];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[56];
	t1 += x[57];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[56];
	t1 += x[57];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[58];
	t1 += x[59];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[58];
	t1 += x[59];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[40];
	t1 += -x[50];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[40];
	t1 += x[41];
	t1 += -x[51];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[42];
	t1 += -x[52];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[42];
	t1 += x[43];
	t1 += -x[53];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[44];
	t1 += -x[54];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = -x[44];
	t1 += x[45];
	t1 += -x[55];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[46];
	t1 += -x[56];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = -x[46];
	t1 += x[47];
	t1 += -x[57];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[48];
	t1 += -x[58];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -x[48];
	t1 += x[49];
	t1 += -x[59];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[40];
	t1 += x[42];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[41];
	t1 += x[43];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[40];
	t1 += x[42];
	t1 += -x[44];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[41];
	t1 += x[43];
	t1 += -x[45];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[40];
	t1 += x[42];
	t1 += -x[46];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[41];
	t1 += x[43];
	t1 += -x[47];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[40];
	t1 += x[42];
	t1 += -x[48];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[41];
	t1 += x[43];
	t1 += -x[49];
	c[100] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -syn05m02m_pd[0];
	J[20] = 1.;
	J[104] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = -syn05m02m_pd[1];
	J[23] = 1.;
	J[114] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -1.2*syn05m02m_pd[3];
	J[6] = dv[0];
	J[26] = 1.;
	J[123] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -1.2*syn05m02m_pd[5];
	J[9] = dv[0];
	J[29] = 1.;
	J[133] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -1.5*syn05m02m_pd[7];
	J[12] = dv[0];
	J[70] = 1.;
	J[157] = 1.;

   /*** derivatives for constraint 6 ***/

	dv[0] = -1.5*syn05m02m_pd[9];
	J[15] = dv[0];
	J[72] = 1.;
	J[164] = 1.;

   /*** derivatives for constraint 7 ***/

	J[1] = -1.;
	J[7] = -1.;
	J[18] = 1.;

   /*** derivatives for constraint 8 ***/

	J[4] = -1.;
	J[10] = -1.;
	J[19] = 1.;

   /*** derivatives for constraint 9 ***/

	J[21] = -1.;
	J[27] = -1.;
	J[32] = 1.;

   /*** derivatives for constraint 10 ***/

	J[24] = -1.;
	J[30] = -1.;
	J[34] = 1.;

   /*** derivatives for constraint 11 ***/

	J[33] = 1.;
	J[36] = -1.;
	J[38] = -1.;

   /*** derivatives for constraint 12 ***/

	J[35] = 1.;
	J[37] = -1.;
	J[40] = -1.;

   /*** derivatives for constraint 13 ***/

	J[13] = -1.;
	J[39] = 1.;
	J[42] = -1.;
	J[50] = -1.;

   /*** derivatives for constraint 14 ***/

	J[16] = -1.;
	J[41] = 1.;
	J[46] = -1.;
	J[54] = -1.;

   /*** derivatives for constraint 15 ***/

	J[2] = 1.;
	J[105] = -40.;

   /*** derivatives for constraint 16 ***/

	J[5] = 1.;
	J[115] = -40.;

   /*** derivatives for constraint 17 ***/

	J[22] = 1.;
	J[106] = -3.71357206670431;

   /*** derivatives for constraint 18 ***/

	J[25] = 1.;
	J[116] = -3.71357206670431;

   /*** derivatives for constraint 19 ***/

	J[8] = 1.;
	J[124] = -40.;

   /*** derivatives for constraint 20 ***/

	J[11] = 1.;
	J[134] = -40.;

   /*** derivatives for constraint 21 ***/

	J[28] = 1.;
	J[125] = -4.45628648004517;

   /*** derivatives for constraint 22 ***/

	J[31] = 1.;
	J[135] = -4.45628648004517;

   /*** derivatives for constraint 23 ***/

	J[43] = -0.75;
	J[64] = 1.;
	J[142] = 1.;

   /*** derivatives for constraint 24 ***/

	J[47] = -0.75;
	J[67] = 1.;
	J[150] = 1.;

   /*** derivatives for constraint 25 ***/

	J[44] = -0.75;
	J[65] = 1.;
	J[143] = -1.;

   /*** derivatives for constraint 26 ***/

	J[48] = -0.75;
	J[68] = 1.;
	J[151] = -1.;

   /*** derivatives for constraint 27 ***/

	J[45] = 1.;
	J[144] = -4.45628648004517;

   /*** derivatives for constraint 28 ***/

	J[49] = 1.;
	J[152] = -4.45628648004517;

   /*** derivatives for constraint 29 ***/

	J[66] = 1.;
	J[145] = -3.34221486003388;

   /*** derivatives for constraint 30 ***/

	J[69] = 1.;
	J[153] = -3.34221486003388;

   /*** derivatives for constraint 31 ***/

	J[14] = 1.;
	J[158] = -4.45628648004517;

   /*** derivatives for constraint 32 ***/

	J[17] = 1.;
	J[165] = -4.45628648004517;

   /*** derivatives for constraint 33 ***/

	J[71] = 1.;
	J[159] = -2.54515263975353;

   /*** derivatives for constraint 34 ***/

	J[73] = 1.;
	J[166] = -2.54515263975353;

   /*** derivatives for constraint 35 ***/

	J[51] = -1.;
	J[74] = 1.;
	J[170] = 1.;

   /*** derivatives for constraint 36 ***/

	J[55] = -1.;
	J[79] = 1.;
	J[181] = 1.;

   /*** derivatives for constraint 37 ***/

	J[52] = -1.;
	J[75] = 1.;
	J[171] = -1.;

   /*** derivatives for constraint 38 ***/

	J[56] = -1.;
	J[80] = 1.;
	J[182] = -1.;

   /*** derivatives for constraint 39 ***/

	J[58] = -0.5;
	J[76] = 1.;
	J[172] = 1.;

   /*** derivatives for constraint 40 ***/

	J[61] = -0.5;
	J[81] = 1.;
	J[183] = 1.;

   /*** derivatives for constraint 41 ***/

	J[59] = -0.5;
	J[77] = 1.;
	J[173] = -1.;

   /*** derivatives for constraint 42 ***/

	J[62] = -0.5;
	J[82] = 1.;
	J[184] = -1.;

   /*** derivatives for constraint 43 ***/

	J[53] = 1.;
	J[174] = -4.45628648004517;

   /*** derivatives for constraint 44 ***/

	J[57] = 1.;
	J[185] = -4.45628648004517;

   /*** derivatives for constraint 45 ***/

	J[60] = 1.;
	J[175] = -30.;

   /*** derivatives for constraint 46 ***/

	J[63] = 1.;
	J[186] = -30.;

   /*** derivatives for constraint 47 ***/

	J[78] = 1.;
	J[176] = -15.;

   /*** derivatives for constraint 48 ***/

	J[83] = 1.;
	J[187] = -15.;

   /*** derivatives for constraint 49 ***/

	J[84] = 1.;
	J[191] = 5.;

   /*** derivatives for constraint 50 ***/

	J[86] = 1.;
	J[196] = 4.;

   /*** derivatives for constraint 51 ***/

	J[88] = 1.;
	J[201] = 8.;

   /*** derivatives for constraint 52 ***/

	J[90] = 1.;
	J[206] = 7.;

   /*** derivatives for constraint 53 ***/

	J[92] = 1.;
	J[211] = 6.;

   /*** derivatives for constraint 54 ***/

	J[94] = 1.;
	J[216] = 9.;

   /*** derivatives for constraint 55 ***/

	J[96] = 1.;
	J[221] = 10.;

   /*** derivatives for constraint 56 ***/

	J[98] = 1.;
	J[226] = 9.;

   /*** derivatives for constraint 57 ***/

	J[100] = 1.;
	J[231] = 6.;

   /*** derivatives for constraint 58 ***/

	J[102] = 1.;
	J[236] = 10.;

   /*** derivatives for constraint 59 ***/

	J[85] = 1.;
	J[192] = 5.;

   /*** derivatives for constraint 60 ***/

	J[87] = 1.;
	J[197] = 4.;

   /*** derivatives for constraint 61 ***/

	J[89] = 1.;
	J[202] = 8.;

   /*** derivatives for constraint 62 ***/

	J[91] = 1.;
	J[207] = 7.;

   /*** derivatives for constraint 63 ***/

	J[93] = 1.;
	J[212] = 6.;

   /*** derivatives for constraint 64 ***/

	J[95] = 1.;
	J[217] = 9.;

   /*** derivatives for constraint 65 ***/

	J[97] = 1.;
	J[222] = 10.;

   /*** derivatives for constraint 66 ***/

	J[99] = 1.;
	J[227] = 9.;

   /*** derivatives for constraint 67 ***/

	J[101] = 1.;
	J[232] = 6.;

   /*** derivatives for constraint 68 ***/

	J[103] = 1.;
	J[237] = 10.;

   /*** derivatives for constraint 69 ***/

	J[107] = 1.;
	J[117] = -1.;

   /*** derivatives for constraint 70 ***/

	J[126] = 1.;
	J[136] = -1.;

   /*** derivatives for constraint 71 ***/

	J[146] = 1.;
	J[154] = -1.;

   /*** derivatives for constraint 72 ***/

	J[160] = 1.;
	J[167] = -1.;

   /*** derivatives for constraint 73 ***/

	J[177] = 1.;
	J[188] = -1.;

   /*** derivatives for constraint 74 ***/

	J[193] = 1.;
	J[198] = 1.;

   /*** derivatives for constraint 75 ***/

	J[194] = 1.;
	J[199] = 1.;

   /*** derivatives for constraint 76 ***/

	J[203] = 1.;
	J[208] = 1.;

   /*** derivatives for constraint 77 ***/

	J[204] = 1.;
	J[209] = 1.;

   /*** derivatives for constraint 78 ***/

	J[213] = 1.;
	J[218] = 1.;

   /*** derivatives for constraint 79 ***/

	J[214] = 1.;
	J[219] = 1.;

   /*** derivatives for constraint 80 ***/

	J[223] = 1.;
	J[228] = 1.;

   /*** derivatives for constraint 81 ***/

	J[224] = 1.;
	J[229] = 1.;

   /*** derivatives for constraint 82 ***/

	J[233] = 1.;
	J[238] = 1.;

   /*** derivatives for constraint 83 ***/

	J[234] = 1.;
	J[239] = 1.;

   /*** derivatives for constraint 84 ***/

	J[108] = 1.;
	J[195] = -1.;

   /*** derivatives for constraint 85 ***/

	J[109] = -1.;
	J[118] = 1.;
	J[200] = -1.;

   /*** derivatives for constraint 86 ***/

	J[127] = 1.;
	J[205] = -1.;

   /*** derivatives for constraint 87 ***/

	J[128] = -1.;
	J[137] = 1.;
	J[210] = -1.;

   /*** derivatives for constraint 88 ***/

	J[147] = 1.;
	J[215] = -1.;

   /*** derivatives for constraint 89 ***/

	J[148] = -1.;
	J[155] = 1.;
	J[220] = -1.;

   /*** derivatives for constraint 90 ***/

	J[161] = 1.;
	J[225] = -1.;

   /*** derivatives for constraint 91 ***/

	J[162] = -1.;
	J[168] = 1.;
	J[230] = -1.;

   /*** derivatives for constraint 92 ***/

	J[178] = 1.;
	J[235] = -1.;

   /*** derivatives for constraint 93 ***/

	J[179] = -1.;
	J[189] = 1.;
	J[240] = -1.;

   /*** derivatives for constraint 94 ***/

	J[110] = 1.;
	J[129] = 1.;

   /*** derivatives for constraint 95 ***/

	J[119] = 1.;
	J[138] = 1.;

   /*** derivatives for constraint 96 ***/

	J[111] = 1.;
	J[130] = 1.;
	J[149] = -1.;

   /*** derivatives for constraint 97 ***/

	J[120] = 1.;
	J[139] = 1.;
	J[156] = -1.;

   /*** derivatives for constraint 98 ***/

	J[112] = 1.;
	J[131] = 1.;
	J[163] = -1.;

   /*** derivatives for constraint 99 ***/

	J[121] = 1.;
	J[140] = 1.;
	J[169] = -1.;

   /*** derivatives for constraint 100 ***/

	J[113] = 1.;
	J[132] = 1.;
	J[180] = -1.;

   /*** derivatives for constraint 101 ***/

	J[122] = 1.;
	J[141] = 1.;
	J[190] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
