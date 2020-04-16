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
 fint st_e31_auxcom_[1] = { 5 /* nlc */ };
 fint st_e31_funcom_[431] = {
	112 /* nvar */,
	1 /* nobj */,
	135 /* ncon */,
	312 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	11,
	13,
	16,
	19,
	21,
	27,
	33,
	38,
	43,
	48,
	53,
	54,
	55,
	57,
	59,
	60,
	61,
	63,
	65,
	66,
	67,
	69,
	71,
	75,
	79,
	84,
	89,
	93,
	97,
	102,
	107,
	111,
	115,
	120,
	125,
	128,
	132,
	135,
	139,
	142,
	146,
	149,
	153,
	156,
	160,
	163,
	167,
	170,
	174,
	177,
	181,
	184,
	188,
	191,
	195,
	198,
	202,
	205,
	209,
	212,
	215,
	218,
	221,
	224,
	227,
	230,
	233,
	236,
	239,
	242,
	245,
	246,
	247,
	248,
	249,
	251,
	253,
	255,
	257,
	258,
	259,
	260,
	261,
	262,
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
	283,
	285,
	287,
	289,
	291,
	293,
	295,
	297,
	299,
	301,
	303,
	305,
	307,
	309,
	311,
	313,

	/* rownos */
	1,
	3,
	5,
	7,
	2,
	4,
	5,
	6,
	3,
	6,
	4,
	7,
	3,
	4,
	9,
	1,
	2,
	8,
	3,
	4,
	1,
	3,
	10,
	11,
	12,
	13,
	2,
	4,
	22,
	23,
	24,
	25,
	1,
	14,
	15,
	16,
	17,
	2,
	26,
	27,
	28,
	29,
	3,
	18,
	19,
	20,
	21,
	4,
	30,
	31,
	32,
	33,
	22,
	11,
	12,
	24,
	13,
	25,
	26,
	15,
	16,
	28,
	17,
	29,
	30,
	19,
	20,
	32,
	21,
	33,
	10,
	94,
	118,
	130,
	23,
	95,
	119,
	130,
	12,
	24,
	96,
	120,
	130,
	13,
	25,
	97,
	121,
	130,
	14,
	98,
	118,
	131,
	27,
	99,
	119,
	131,
	16,
	28,
	100,
	120,
	131,
	17,
	29,
	101,
	121,
	131,
	18,
	102,
	118,
	132,
	31,
	103,
	119,
	132,
	20,
	32,
	104,
	120,
	132,
	21,
	33,
	105,
	121,
	132,
	34,
	58,
	94,
	46,
	70,
	94,
	106,
	35,
	59,
	95,
	47,
	71,
	95,
	107,
	36,
	60,
	96,
	48,
	72,
	96,
	108,
	37,
	61,
	97,
	49,
	73,
	97,
	109,
	38,
	62,
	98,
	50,
	74,
	98,
	110,
	39,
	63,
	99,
	51,
	75,
	99,
	111,
	40,
	64,
	100,
	52,
	76,
	100,
	112,
	41,
	65,
	101,
	53,
	77,
	101,
	113,
	42,
	66,
	102,
	54,
	78,
	102,
	114,
	43,
	67,
	103,
	55,
	79,
	103,
	115,
	44,
	68,
	104,
	56,
	80,
	104,
	116,
	45,
	69,
	105,
	57,
	81,
	105,
	117,
	106,
	122,
	133,
	107,
	123,
	133,
	108,
	124,
	133,
	109,
	125,
	133,
	110,
	122,
	134,
	111,
	123,
	134,
	112,
	124,
	134,
	113,
	125,
	134,
	114,
	122,
	135,
	115,
	123,
	135,
	116,
	124,
	135,
	117,
	125,
	135,
	118,
	119,
	120,
	121,
	122,
	126,
	123,
	127,
	124,
	128,
	125,
	129,
	130,
	131,
	132,
	133,
	134,
	135,
	8,
	9,
	34,
	82,
	70,
	82,
	35,
	83,
	71,
	83,
	36,
	84,
	72,
	84,
	37,
	85,
	73,
	85,
	38,
	86,
	74,
	86,
	39,
	87,
	75,
	87,
	40,
	88,
	76,
	88,
	41,
	89,
	77,
	89,
	42,
	90,
	78,
	90,
	43,
	91,
	79,
	91,
	44,
	92,
	80,
	92,
	45,
	93,
	81,
	93 };

 real st_e31_boundc_[1+224+270] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-1.7e308,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-1.7e308,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		-3.,
		0.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		-6.,
		6.,
		-6.,
		6.,
		-6.,
		1.7e308,
		-6.,
		1.7e308,
		0.,
		6.,
		0.,
		6.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-6.,
		6.,
		-6.,
		6.,
		-6.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		3.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real st_e31_x0comn_[112] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real st_e31_pd[2];
static real st_e31_old_x[112];
static int st_e31_xkind = -1;

 static int
st_e31_xcheck(real *x)
{
	real *x1 = st_e31_old_x, *xe = x + 112;
	errno = 0;
	if (st_e31_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e31_xkind = 0;
	return 1;
	}
 real
st_e31_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e31_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[87];
	;}

	if (wantfg & 2) {
	g[87] = -1.;
	}

	return rv;
}

 void
st_e31_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_e31_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[5] * x[0];
	v[1] = -v[0];
	t1 = v[1] + -x[7];
	t1 += x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[5] * x[1];
	v[1] = -v[0];
	t1 = v[1] + -x[8];
	t1 += x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[4] * x[2];
	v[1] = -v[0];
	v[0] = x[6] * x[0];
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[7];
	t1 += x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[4] * x[3];
	v[1] = -v[0];
	v[0] = x[6] * x[1];
	v[2] = v[1] - v[0];
	t1 = v[2] + -x[8];
	t1 += x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[0] * x[0];
	st_e31_pd[0] = x[0] + x[0];
	v[1] = x[1] * x[1];
	st_e31_pd[1] = x[1] + x[1];
	v[2] = v[0] + v[1];
	c[4] = v[2];

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += x[2];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += x[3];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[5];
	t1 += x[87];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[4];
	t1 += x[87];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[7];
	t1 += -x[25];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[7];
	t1 += x[14];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[7];
	t1 += 0.8944*x[15];
	t1 += -0.4472*x[27];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[7];
	t1 += -0.8944*x[16];
	t1 += -0.4772*x[28];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[9];
	t1 += -x[29];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[9];
	t1 += x[18];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[9];
	t1 += 0.8944*x[19];
	t1 += -0.4472*x[31];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[9];
	t1 += -0.8944*x[20];
	t1 += -0.4772*x[32];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[11];
	t1 += -x[33];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[11];
	t1 += x[22];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[11];
	t1 += 0.8944*x[23];
	t1 += -0.4472*x[35];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[11];
	t1 += -0.8944*x[24];
	t1 += -0.4772*x[36];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[8];
	t1 += x[13];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[8];
	t1 += x[26];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[8];
	t1 += 0.4472*x[15];
	t1 += 0.8944*x[27];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[8];
	t1 += 0.4772*x[16];
	t1 += -0.8944*x[28];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[10];
	t1 += x[17];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[10];
	t1 += x[30];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[10];
	t1 += 0.4472*x[19];
	t1 += 0.8944*x[31];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[10];
	t1 += 0.4772*x[20];
	t1 += -0.8944*x[32];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[12];
	t1 += x[21];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[12];
	t1 += x[34];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[12];
	t1 += 0.4472*x[23];
	t1 += 0.8944*x[35];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[12];
	t1 += 0.4772*x[24];
	t1 += -0.8944*x[36];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[37];
	t1 += -3.5*x[88];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[39];
	t1 += -3.5*x[90];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[41];
	t1 += -3.5*x[92];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[43];
	t1 += -3.5*x[94];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[45];
	t1 += -3.5*x[96];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[47];
	t1 += -3.5*x[98];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[49];
	t1 += -3.5*x[100];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[51];
	t1 += -3.5*x[102];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[53];
	t1 += -3.5*x[104];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[55];
	t1 += -3.5*x[106];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[57];
	t1 += -3.5*x[108];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[59];
	t1 += -3.5*x[110];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[38];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[40];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[42];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[44];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[46];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[48];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[50];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[52];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[54];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[56];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[58];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[60];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[37];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[39];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[41];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[43];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[45];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[47];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[49];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[51];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[53];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[55];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[57];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[59];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[38];
	t1 += 3.5*x[89];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[40];
	t1 += 3.5*x[91];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[42];
	t1 += 3.5*x[93];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[44];
	t1 += 3.5*x[95];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[46];
	t1 += 3.5*x[97];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[48];
	t1 += 3.5*x[99];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[50];
	t1 += 3.5*x[101];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[52];
	t1 += 3.5*x[103];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[54];
	t1 += 3.5*x[105];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[56];
	t1 += 3.5*x[107];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[58];
	t1 += 3.5*x[109];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[60];
	t1 += 3.5*x[111];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[88];
	t1 += x[89];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[90];
	t1 += x[91];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[92];
	t1 += x[93];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[94];
	t1 += x[95];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[96];
	t1 += x[97];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[98];
	t1 += x[99];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[100];
	t1 += x[101];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[102];
	t1 += x[103];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[104];
	t1 += x[105];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[106];
	t1 += x[107];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[108];
	t1 += x[109];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[110];
	t1 += x[111];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[25];
	t1 += -x[37];
	t1 += -x[38];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[26];
	t1 += -x[39];
	t1 += -x[40];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[27];
	t1 += -x[41];
	t1 += -x[42];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[28];
	t1 += -x[43];
	t1 += -x[44];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[29];
	t1 += -x[45];
	t1 += -x[46];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[30];
	t1 += -x[47];
	t1 += -x[48];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[31];
	t1 += -x[49];
	t1 += -x[50];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[32];
	t1 += -x[51];
	t1 += -x[52];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[33];
	t1 += -x[53];
	t1 += -x[54];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[34];
	t1 += -x[55];
	t1 += -x[56];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[35];
	t1 += -x[57];
	t1 += -x[58];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[36];
	t1 += -x[59];
	t1 += -x[60];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -x[38];
	t1 += x[61];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = -x[40];
	t1 += x[62];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -x[42];
	t1 += x[63];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -x[44];
	t1 += x[64];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = -x[46];
	t1 += x[65];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -x[48];
	t1 += x[66];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = -x[50];
	t1 += x[67];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -x[52];
	t1 += x[68];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -x[54];
	t1 += x[69];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -x[56];
	t1 += x[70];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = -x[58];
	t1 += x[71];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = -x[60];
	t1 += x[72];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = -x[25];
	t1 += -x[29];
	t1 += -x[33];
	t1 += x[73];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = -x[26];
	t1 += -x[30];
	t1 += -x[34];
	t1 += x[74];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -x[27];
	t1 += -x[31];
	t1 += -x[35];
	t1 += x[75];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = -x[28];
	t1 += -x[32];
	t1 += -x[36];
	t1 += x[76];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = -x[61];
	t1 += -x[65];
	t1 += -x[69];
	t1 += x[77];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = -x[62];
	t1 += -x[66];
	t1 += -x[70];
	t1 += x[78];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = -x[63];
	t1 += -x[67];
	t1 += -x[71];
	t1 += x[79];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = -x[64];
	t1 += -x[68];
	t1 += -x[72];
	t1 += x[80];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[77];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[78];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[79];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[80];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = -x[25];
	t1 += -x[26];
	t1 += -x[27];
	t1 += -x[28];
	t1 += x[81];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = -x[29];
	t1 += -x[30];
	t1 += -x[31];
	t1 += -x[32];
	t1 += x[82];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = -x[33];
	t1 += -x[34];
	t1 += -x[35];
	t1 += -x[36];
	t1 += x[83];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = -x[61];
	t1 += -x[62];
	t1 += -x[63];
	t1 += -x[64];
	t1 += x[84];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = -x[65];
	t1 += -x[66];
	t1 += -x[67];
	t1 += -x[68];
	t1 += x[85];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = -x[69];
	t1 += -x[70];
	t1 += -x[71];
	t1 += -x[72];
	t1 += x[86];
	c[134] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[5];
	J[15] = -x[0];
	J[20] = -1.;
	J[32] = 1.;

   /*** derivatives for constraint 2 ***/

	J[4] = -x[5];
	J[16] = -x[1];
	J[26] = -1.;
	J[37] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = -x[6];
	J[18] = -x[0];
	J[8] = -x[4];
	J[12] = -x[2];
	J[21] = -1.;
	J[42] = 1.;

   /*** derivatives for constraint 4 ***/

	J[5] = -x[6];
	J[19] = -x[1];
	J[10] = -x[4];
	J[13] = -x[3];
	J[27] = -1.;
	J[47] = 1.;

   /*** derivatives for constraint 5 ***/

	J[6] = st_e31_pd[1];
	J[2] = st_e31_pd[0];

   /*** derivatives for constraint 6 ***/

	J[7] = 1.;
	J[9] = 1.;

   /*** derivatives for constraint 7 ***/

	J[3] = -1.;
	J[11] = 1.;

   /*** derivatives for constraint 8 ***/

	J[17] = -1.;
	J[262] = 1.;

   /*** derivatives for constraint 9 ***/

	J[14] = -1.;
	J[263] = 1.;

   /*** derivatives for constraint 10 ***/

	J[22] = -1.;
	J[70] = -1.;

   /*** derivatives for constraint 11 ***/

	J[23] = -1.;
	J[53] = 1.;

   /*** derivatives for constraint 12 ***/

	J[24] = -1.;
	J[54] = 0.8944;
	J[78] = -0.4472;

   /*** derivatives for constraint 13 ***/

	J[25] = -1.;
	J[56] = -0.8944;
	J[83] = -0.4772;

   /*** derivatives for constraint 14 ***/

	J[33] = -1.;
	J[88] = -1.;

   /*** derivatives for constraint 15 ***/

	J[34] = -1.;
	J[59] = 1.;

   /*** derivatives for constraint 16 ***/

	J[35] = -1.;
	J[60] = 0.8944;
	J[96] = -0.4472;

   /*** derivatives for constraint 17 ***/

	J[36] = -1.;
	J[62] = -0.8944;
	J[101] = -0.4772;

   /*** derivatives for constraint 18 ***/

	J[43] = -1.;
	J[106] = -1.;

   /*** derivatives for constraint 19 ***/

	J[44] = -1.;
	J[65] = 1.;

   /*** derivatives for constraint 20 ***/

	J[45] = -1.;
	J[66] = 0.8944;
	J[114] = -0.4472;

   /*** derivatives for constraint 21 ***/

	J[46] = -1.;
	J[68] = -0.8944;
	J[119] = -0.4772;

   /*** derivatives for constraint 22 ***/

	J[28] = -1.;
	J[52] = 1.;

   /*** derivatives for constraint 23 ***/

	J[29] = -1.;
	J[74] = 1.;

   /*** derivatives for constraint 24 ***/

	J[30] = -1.;
	J[55] = 0.4472;
	J[79] = 0.8944;

   /*** derivatives for constraint 25 ***/

	J[31] = -1.;
	J[57] = 0.4772;
	J[84] = -0.8944;

   /*** derivatives for constraint 26 ***/

	J[38] = -1.;
	J[58] = 1.;

   /*** derivatives for constraint 27 ***/

	J[39] = -1.;
	J[92] = 1.;

   /*** derivatives for constraint 28 ***/

	J[40] = -1.;
	J[61] = 0.4472;
	J[97] = 0.8944;

   /*** derivatives for constraint 29 ***/

	J[41] = -1.;
	J[63] = 0.4772;
	J[102] = -0.8944;

   /*** derivatives for constraint 30 ***/

	J[48] = -1.;
	J[64] = 1.;

   /*** derivatives for constraint 31 ***/

	J[49] = -1.;
	J[110] = 1.;

   /*** derivatives for constraint 32 ***/

	J[50] = -1.;
	J[67] = 0.4472;
	J[115] = 0.8944;

   /*** derivatives for constraint 33 ***/

	J[51] = -1.;
	J[69] = 0.4772;
	J[120] = -0.8944;

   /*** derivatives for constraint 34 ***/

	J[124] = -1.;
	J[264] = -3.5;

   /*** derivatives for constraint 35 ***/

	J[131] = -1.;
	J[268] = -3.5;

   /*** derivatives for constraint 36 ***/

	J[138] = -1.;
	J[272] = -3.5;

   /*** derivatives for constraint 37 ***/

	J[145] = -1.;
	J[276] = -3.5;

   /*** derivatives for constraint 38 ***/

	J[152] = -1.;
	J[280] = -3.5;

   /*** derivatives for constraint 39 ***/

	J[159] = -1.;
	J[284] = -3.5;

   /*** derivatives for constraint 40 ***/

	J[166] = -1.;
	J[288] = -3.5;

   /*** derivatives for constraint 41 ***/

	J[173] = -1.;
	J[292] = -3.5;

   /*** derivatives for constraint 42 ***/

	J[180] = -1.;
	J[296] = -3.5;

   /*** derivatives for constraint 43 ***/

	J[187] = -1.;
	J[300] = -3.5;

   /*** derivatives for constraint 44 ***/

	J[194] = -1.;
	J[304] = -3.5;

   /*** derivatives for constraint 45 ***/

	J[201] = -1.;
	J[308] = -3.5;

   /*** derivatives for constraint 46 ***/

	J[127] = -1.;

   /*** derivatives for constraint 47 ***/

	J[134] = -1.;

   /*** derivatives for constraint 48 ***/

	J[141] = -1.;

   /*** derivatives for constraint 49 ***/

	J[148] = -1.;

   /*** derivatives for constraint 50 ***/

	J[155] = -1.;

   /*** derivatives for constraint 51 ***/

	J[162] = -1.;

   /*** derivatives for constraint 52 ***/

	J[169] = -1.;

   /*** derivatives for constraint 53 ***/

	J[176] = -1.;

   /*** derivatives for constraint 54 ***/

	J[183] = -1.;

   /*** derivatives for constraint 55 ***/

	J[190] = -1.;

   /*** derivatives for constraint 56 ***/

	J[197] = -1.;

   /*** derivatives for constraint 57 ***/

	J[204] = -1.;

   /*** derivatives for constraint 58 ***/

	J[125] = -1.;

   /*** derivatives for constraint 59 ***/

	J[132] = -1.;

   /*** derivatives for constraint 60 ***/

	J[139] = -1.;

   /*** derivatives for constraint 61 ***/

	J[146] = -1.;

   /*** derivatives for constraint 62 ***/

	J[153] = -1.;

   /*** derivatives for constraint 63 ***/

	J[160] = -1.;

   /*** derivatives for constraint 64 ***/

	J[167] = -1.;

   /*** derivatives for constraint 65 ***/

	J[174] = -1.;

   /*** derivatives for constraint 66 ***/

	J[181] = -1.;

   /*** derivatives for constraint 67 ***/

	J[188] = -1.;

   /*** derivatives for constraint 68 ***/

	J[195] = -1.;

   /*** derivatives for constraint 69 ***/

	J[202] = -1.;

   /*** derivatives for constraint 70 ***/

	J[128] = -1.;
	J[266] = 3.5;

   /*** derivatives for constraint 71 ***/

	J[135] = -1.;
	J[270] = 3.5;

   /*** derivatives for constraint 72 ***/

	J[142] = -1.;
	J[274] = 3.5;

   /*** derivatives for constraint 73 ***/

	J[149] = -1.;
	J[278] = 3.5;

   /*** derivatives for constraint 74 ***/

	J[156] = -1.;
	J[282] = 3.5;

   /*** derivatives for constraint 75 ***/

	J[163] = -1.;
	J[286] = 3.5;

   /*** derivatives for constraint 76 ***/

	J[170] = -1.;
	J[290] = 3.5;

   /*** derivatives for constraint 77 ***/

	J[177] = -1.;
	J[294] = 3.5;

   /*** derivatives for constraint 78 ***/

	J[184] = -1.;
	J[298] = 3.5;

   /*** derivatives for constraint 79 ***/

	J[191] = -1.;
	J[302] = 3.5;

   /*** derivatives for constraint 80 ***/

	J[198] = -1.;
	J[306] = 3.5;

   /*** derivatives for constraint 81 ***/

	J[205] = -1.;
	J[310] = 3.5;

   /*** derivatives for constraint 82 ***/

	J[265] = 1.;
	J[267] = 1.;

   /*** derivatives for constraint 83 ***/

	J[269] = 1.;
	J[271] = 1.;

   /*** derivatives for constraint 84 ***/

	J[273] = 1.;
	J[275] = 1.;

   /*** derivatives for constraint 85 ***/

	J[277] = 1.;
	J[279] = 1.;

   /*** derivatives for constraint 86 ***/

	J[281] = 1.;
	J[283] = 1.;

   /*** derivatives for constraint 87 ***/

	J[285] = 1.;
	J[287] = 1.;

   /*** derivatives for constraint 88 ***/

	J[289] = 1.;
	J[291] = 1.;

   /*** derivatives for constraint 89 ***/

	J[293] = 1.;
	J[295] = 1.;

   /*** derivatives for constraint 90 ***/

	J[297] = 1.;
	J[299] = 1.;

   /*** derivatives for constraint 91 ***/

	J[301] = 1.;
	J[303] = 1.;

   /*** derivatives for constraint 92 ***/

	J[305] = 1.;
	J[307] = 1.;

   /*** derivatives for constraint 93 ***/

	J[309] = 1.;
	J[311] = 1.;

   /*** derivatives for constraint 94 ***/

	J[71] = 1.;
	J[126] = -1.;
	J[129] = -1.;

   /*** derivatives for constraint 95 ***/

	J[75] = 1.;
	J[133] = -1.;
	J[136] = -1.;

   /*** derivatives for constraint 96 ***/

	J[80] = 1.;
	J[140] = -1.;
	J[143] = -1.;

   /*** derivatives for constraint 97 ***/

	J[85] = 1.;
	J[147] = -1.;
	J[150] = -1.;

   /*** derivatives for constraint 98 ***/

	J[89] = 1.;
	J[154] = -1.;
	J[157] = -1.;

   /*** derivatives for constraint 99 ***/

	J[93] = 1.;
	J[161] = -1.;
	J[164] = -1.;

   /*** derivatives for constraint 100 ***/

	J[98] = 1.;
	J[168] = -1.;
	J[171] = -1.;

   /*** derivatives for constraint 101 ***/

	J[103] = 1.;
	J[175] = -1.;
	J[178] = -1.;

   /*** derivatives for constraint 102 ***/

	J[107] = 1.;
	J[182] = -1.;
	J[185] = -1.;

   /*** derivatives for constraint 103 ***/

	J[111] = 1.;
	J[189] = -1.;
	J[192] = -1.;

   /*** derivatives for constraint 104 ***/

	J[116] = 1.;
	J[196] = -1.;
	J[199] = -1.;

   /*** derivatives for constraint 105 ***/

	J[121] = 1.;
	J[203] = -1.;
	J[206] = -1.;

   /*** derivatives for constraint 106 ***/

	J[130] = -1.;
	J[208] = 1.;

   /*** derivatives for constraint 107 ***/

	J[137] = -1.;
	J[211] = 1.;

   /*** derivatives for constraint 108 ***/

	J[144] = -1.;
	J[214] = 1.;

   /*** derivatives for constraint 109 ***/

	J[151] = -1.;
	J[217] = 1.;

   /*** derivatives for constraint 110 ***/

	J[158] = -1.;
	J[220] = 1.;

   /*** derivatives for constraint 111 ***/

	J[165] = -1.;
	J[223] = 1.;

   /*** derivatives for constraint 112 ***/

	J[172] = -1.;
	J[226] = 1.;

   /*** derivatives for constraint 113 ***/

	J[179] = -1.;
	J[229] = 1.;

   /*** derivatives for constraint 114 ***/

	J[186] = -1.;
	J[232] = 1.;

   /*** derivatives for constraint 115 ***/

	J[193] = -1.;
	J[235] = 1.;

   /*** derivatives for constraint 116 ***/

	J[200] = -1.;
	J[238] = 1.;

   /*** derivatives for constraint 117 ***/

	J[207] = -1.;
	J[241] = 1.;

   /*** derivatives for constraint 118 ***/

	J[72] = -1.;
	J[90] = -1.;
	J[108] = -1.;
	J[244] = 1.;

   /*** derivatives for constraint 119 ***/

	J[76] = -1.;
	J[94] = -1.;
	J[112] = -1.;
	J[245] = 1.;

   /*** derivatives for constraint 120 ***/

	J[81] = -1.;
	J[99] = -1.;
	J[117] = -1.;
	J[246] = 1.;

   /*** derivatives for constraint 121 ***/

	J[86] = -1.;
	J[104] = -1.;
	J[122] = -1.;
	J[247] = 1.;

   /*** derivatives for constraint 122 ***/

	J[209] = -1.;
	J[221] = -1.;
	J[233] = -1.;
	J[248] = 1.;

   /*** derivatives for constraint 123 ***/

	J[212] = -1.;
	J[224] = -1.;
	J[236] = -1.;
	J[250] = 1.;

   /*** derivatives for constraint 124 ***/

	J[215] = -1.;
	J[227] = -1.;
	J[239] = -1.;
	J[252] = 1.;

   /*** derivatives for constraint 125 ***/

	J[218] = -1.;
	J[230] = -1.;
	J[242] = -1.;
	J[254] = 1.;

   /*** derivatives for constraint 126 ***/

	J[249] = 1.;

   /*** derivatives for constraint 127 ***/

	J[251] = 1.;

   /*** derivatives for constraint 128 ***/

	J[253] = 1.;

   /*** derivatives for constraint 129 ***/

	J[255] = 1.;

   /*** derivatives for constraint 130 ***/

	J[73] = -1.;
	J[77] = -1.;
	J[82] = -1.;
	J[87] = -1.;
	J[256] = 1.;

   /*** derivatives for constraint 131 ***/

	J[91] = -1.;
	J[95] = -1.;
	J[100] = -1.;
	J[105] = -1.;
	J[257] = 1.;

   /*** derivatives for constraint 132 ***/

	J[109] = -1.;
	J[113] = -1.;
	J[118] = -1.;
	J[123] = -1.;
	J[258] = 1.;

   /*** derivatives for constraint 133 ***/

	J[210] = -1.;
	J[213] = -1.;
	J[216] = -1.;
	J[219] = -1.;
	J[259] = 1.;

   /*** derivatives for constraint 134 ***/

	J[222] = -1.;
	J[225] = -1.;
	J[228] = -1.;
	J[231] = -1.;
	J[260] = 1.;

   /*** derivatives for constraint 135 ***/

	J[234] = -1.;
	J[237] = -1.;
	J[240] = -1.;
	J[243] = -1.;
	J[261] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
