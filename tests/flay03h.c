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
 fint flay03h_auxcom_[1] = { 3 /* nlc */ };
 fint flay03h_funcom_[513] = {
	122 /* nvar */,
	1 /* nobj */,
	144 /* ncon */,
	384 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	16,
	19,
	22,
	25,
	28,
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
	63,
	65,
	67,
	69,
	72,
	75,
	78,
	81,
	83,
	85,
	87,
	89,
	92,
	95,
	98,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	120,
	123,
	126,
	129,
	131,
	133,
	135,
	137,
	140,
	143,
	146,
	149,
	151,
	153,
	155,
	157,
	160,
	163,
	166,
	169,
	172,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	189,
	192,
	195,
	197,
	199,
	201,
	203,
	205,
	207,
	209,
	212,
	215,
	217,
	219,
	221,
	223,
	225,
	227,
	229,
	231,
	234,
	237,
	239,
	241,
	243,
	245,
	247,
	249,
	251,
	254,
	257,
	259,
	261,
	263,
	265,
	267,
	269,
	271,
	274,
	277,
	286,
	295,
	304,
	313,
	322,
	331,
	340,
	349,
	358,
	367,
	376,
	385,

	/* rownos */
	1,
	7,
	28,
	29,
	2,
	8,
	30,
	31,
	3,
	9,
	32,
	33,
	4,
	10,
	11,
	5,
	12,
	13,
	6,
	14,
	15,
	7,
	16,
	17,
	8,
	18,
	19,
	9,
	20,
	21,
	1,
	4,
	22,
	23,
	2,
	5,
	24,
	25,
	3,
	6,
	26,
	27,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	34,
	130,
	11,
	35,
	131,
	10,
	36,
	133,
	11,
	37,
	134,
	10,
	38,
	11,
	39,
	10,
	40,
	11,
	41,
	12,
	42,
	130,
	13,
	43,
	132,
	12,
	44,
	133,
	13,
	45,
	135,
	12,
	46,
	13,
	47,
	12,
	48,
	13,
	49,
	14,
	50,
	131,
	15,
	51,
	132,
	14,
	52,
	134,
	15,
	53,
	135,
	14,
	54,
	15,
	55,
	14,
	56,
	15,
	57,
	16,
	58,
	17,
	59,
	16,
	60,
	17,
	61,
	16,
	62,
	136,
	17,
	63,
	137,
	16,
	64,
	139,
	17,
	65,
	140,
	18,
	66,
	19,
	67,
	18,
	68,
	19,
	69,
	18,
	70,
	136,
	19,
	71,
	138,
	18,
	72,
	139,
	19,
	73,
	141,
	20,
	74,
	21,
	75,
	20,
	76,
	21,
	77,
	20,
	78,
	137,
	21,
	79,
	138,
	20,
	80,
	140,
	21,
	81,
	141,
	22,
	82,
	130,
	23,
	83,
	131,
	22,
	84,
	23,
	85,
	22,
	86,
	23,
	87,
	22,
	88,
	23,
	89,
	24,
	90,
	25,
	91,
	132,
	24,
	92,
	133,
	25,
	93,
	24,
	94,
	25,
	95,
	24,
	96,
	25,
	97,
	26,
	98,
	27,
	99,
	26,
	100,
	134,
	27,
	101,
	135,
	26,
	102,
	27,
	103,
	26,
	104,
	27,
	105,
	28,
	106,
	29,
	107,
	28,
	108,
	29,
	109,
	28,
	110,
	136,
	29,
	111,
	137,
	28,
	112,
	29,
	113,
	30,
	114,
	31,
	115,
	30,
	116,
	31,
	117,
	30,
	118,
	31,
	119,
	138,
	30,
	120,
	139,
	31,
	121,
	32,
	122,
	33,
	123,
	32,
	124,
	33,
	125,
	32,
	126,
	33,
	127,
	32,
	128,
	140,
	33,
	129,
	141,
	34,
	42,
	58,
	66,
	82,
	90,
	106,
	114,
	142,
	35,
	50,
	59,
	74,
	83,
	98,
	107,
	122,
	143,
	43,
	51,
	67,
	75,
	91,
	99,
	115,
	123,
	144,
	36,
	44,
	60,
	68,
	84,
	92,
	108,
	116,
	142,
	37,
	52,
	61,
	76,
	85,
	100,
	109,
	124,
	143,
	45,
	53,
	69,
	77,
	93,
	101,
	117,
	125,
	144,
	38,
	46,
	62,
	70,
	86,
	94,
	110,
	118,
	142,
	39,
	54,
	63,
	78,
	87,
	102,
	111,
	126,
	143,
	47,
	55,
	71,
	79,
	95,
	103,
	119,
	127,
	144,
	40,
	48,
	64,
	72,
	88,
	96,
	112,
	120,
	142,
	41,
	56,
	65,
	80,
	89,
	104,
	113,
	128,
	143,
	49,
	57,
	73,
	81,
	97,
	105,
	121,
	129,
	144 };

 real flay03h_boundc_[1+244+288] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		40.,
		1.,
		50.,
		1.,
		60.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		1.,
		40.,
		1.,
		50.,
		1.,
		60.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.};

 real flay03h_x0comn_[122] = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real flay03h_pd[3];
static real flay03h_old_x[122];
static int flay03h_xkind = -1;

 static int
flay03h_xcheck(real *x)
{
	real *x1 = flay03h_old_x, *xe = x + 122;
	errno = 0;
	if (flay03h_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	flay03h_xkind = 0;
	return 1;
	}
 real
flay03h_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (flay03h_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[12];
	rv += 2.*x[13];
	;}

	if (wantfg & 2) {
	g[12] = 2.;
	g[13] = 2.;
	}

	return rv;
}

 void
flay03h_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (flay03h_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 40. / x[0];
	flay03h_pd[0] = -v[0] / x[0];
	t1 = v[0] + -x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 50. / x[1];
	flay03h_pd[1] = -v[0] / x[1];
	t1 = v[0] + -x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 60. / x[2];
	flay03h_pd[2] = -v[0] / x[2];
	t1 = v[0] + -x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += -x[9];
	t1 += x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[4];
	t1 += -x[10];
	t1 += x[12];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[5];
	t1 += -x[11];
	t1 += x[12];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += -x[6];
	t1 += x[13];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[1];
	t1 += -x[7];
	t1 += x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[2];
	t1 += -x[8];
	t1 += x[13];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[3];
	t1 += -x[14];
	t1 += -x[16];
	t1 += -x[18];
	t1 += -x[20];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[3];
	t1 += -x[15];
	t1 += -x[17];
	t1 += -x[19];
	t1 += -x[21];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[4];
	t1 += -x[22];
	t1 += -x[24];
	t1 += -x[26];
	t1 += -x[28];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[4];
	t1 += -x[23];
	t1 += -x[25];
	t1 += -x[27];
	t1 += -x[29];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[5];
	t1 += -x[30];
	t1 += -x[32];
	t1 += -x[34];
	t1 += -x[36];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[5];
	t1 += -x[31];
	t1 += -x[33];
	t1 += -x[35];
	t1 += -x[37];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[6];
	t1 += -x[38];
	t1 += -x[40];
	t1 += -x[42];
	t1 += -x[44];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[6];
	t1 += -x[39];
	t1 += -x[41];
	t1 += -x[43];
	t1 += -x[45];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[7];
	t1 += -x[46];
	t1 += -x[48];
	t1 += -x[50];
	t1 += -x[52];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[7];
	t1 += -x[47];
	t1 += -x[49];
	t1 += -x[51];
	t1 += -x[53];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[8];
	t1 += -x[54];
	t1 += -x[56];
	t1 += -x[58];
	t1 += -x[60];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[8];
	t1 += -x[55];
	t1 += -x[57];
	t1 += -x[59];
	t1 += -x[61];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[9];
	t1 += -x[62];
	t1 += -x[64];
	t1 += -x[66];
	t1 += -x[68];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[9];
	t1 += -x[63];
	t1 += -x[65];
	t1 += -x[67];
	t1 += -x[69];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[10];
	t1 += -x[70];
	t1 += -x[72];
	t1 += -x[74];
	t1 += -x[76];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[10];
	t1 += -x[71];
	t1 += -x[73];
	t1 += -x[75];
	t1 += -x[77];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[11];
	t1 += -x[78];
	t1 += -x[80];
	t1 += -x[82];
	t1 += -x[84];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[11];
	t1 += -x[79];
	t1 += -x[81];
	t1 += -x[83];
	t1 += -x[85];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[0];
	t1 += -x[86];
	t1 += -x[88];
	t1 += -x[90];
	t1 += -x[92];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[0];
	t1 += -x[87];
	t1 += -x[89];
	t1 += -x[91];
	t1 += -x[93];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[1];
	t1 += -x[94];
	t1 += -x[96];
	t1 += -x[98];
	t1 += -x[100];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[1];
	t1 += -x[95];
	t1 += -x[97];
	t1 += -x[99];
	t1 += -x[101];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[2];
	t1 += -x[102];
	t1 += -x[104];
	t1 += -x[106];
	t1 += -x[108];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[2];
	t1 += -x[103];
	t1 += -x[105];
	t1 += -x[107];
	t1 += -x[109];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[14];
	t1 += -29.*x[110];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[15];
	t1 += -29.*x[111];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[16];
	t1 += -29.*x[113];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[17];
	t1 += -29.*x[114];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[18];
	t1 += -29.*x[116];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[19];
	t1 += -29.*x[117];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[20];
	t1 += -29.*x[119];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[21];
	t1 += -29.*x[120];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[22];
	t1 += -29.*x[110];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[23];
	t1 += -29.*x[112];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[24];
	t1 += -29.*x[113];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[25];
	t1 += -29.*x[115];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[26];
	t1 += -29.*x[116];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[27];
	t1 += -29.*x[118];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[28];
	t1 += -29.*x[119];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[29];
	t1 += -29.*x[121];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[30];
	t1 += -29.*x[111];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[31];
	t1 += -29.*x[112];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[32];
	t1 += -29.*x[114];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[33];
	t1 += -29.*x[115];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[34];
	t1 += -29.*x[117];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[35];
	t1 += -29.*x[118];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[36];
	t1 += -29.*x[120];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[37];
	t1 += -29.*x[121];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[38];
	t1 += -29.*x[110];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[39];
	t1 += -29.*x[111];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[40];
	t1 += -29.*x[113];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[41];
	t1 += -29.*x[114];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[42];
	t1 += -29.*x[116];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[43];
	t1 += -29.*x[117];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[44];
	t1 += -29.*x[119];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[45];
	t1 += -29.*x[120];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[46];
	t1 += -29.*x[110];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[47];
	t1 += -29.*x[112];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[48];
	t1 += -29.*x[113];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[49];
	t1 += -29.*x[115];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[50];
	t1 += -29.*x[116];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[51];
	t1 += -29.*x[118];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[52];
	t1 += -29.*x[119];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[53];
	t1 += -29.*x[121];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[54];
	t1 += -29.*x[111];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[55];
	t1 += -29.*x[112];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[56];
	t1 += -29.*x[114];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[57];
	t1 += -29.*x[115];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[58];
	t1 += -29.*x[117];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[59];
	t1 += -29.*x[118];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[60];
	t1 += -29.*x[120];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[61];
	t1 += -29.*x[121];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[62];
	t1 += -40.*x[110];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[63];
	t1 += -40.*x[111];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[64];
	t1 += -40.*x[113];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[65];
	t1 += -40.*x[114];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[66];
	t1 += -40.*x[116];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[67];
	t1 += -40.*x[117];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[68];
	t1 += -40.*x[119];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[69];
	t1 += -40.*x[120];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[70];
	t1 += -40.*x[110];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[71];
	t1 += -50.*x[112];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[72];
	t1 += -40.*x[113];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[73];
	t1 += -50.*x[115];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[74];
	t1 += -40.*x[116];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[75];
	t1 += -50.*x[118];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[76];
	t1 += -40.*x[119];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[77];
	t1 += -50.*x[121];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[78];
	t1 += -40.*x[111];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[79];
	t1 += -50.*x[112];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[80];
	t1 += -40.*x[114];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[81];
	t1 += -50.*x[115];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[82];
	t1 += -40.*x[117];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[83];
	t1 += -50.*x[118];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[84];
	t1 += -40.*x[120];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[85];
	t1 += -50.*x[121];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[86];
	t1 += -40.*x[110];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[87];
	t1 += -40.*x[111];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[88];
	t1 += -40.*x[113];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[89];
	t1 += -40.*x[114];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[90];
	t1 += -40.*x[116];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[91];
	t1 += -40.*x[117];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[92];
	t1 += -40.*x[119];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[93];
	t1 += -40.*x[120];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[94];
	t1 += -40.*x[110];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[95];
	t1 += -50.*x[112];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[96];
	t1 += -40.*x[113];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[97];
	t1 += -50.*x[115];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[98];
	t1 += -40.*x[116];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[99];
	t1 += -50.*x[118];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = x[100];
	t1 += -40.*x[119];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[101];
	t1 += -50.*x[121];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[102];
	t1 += -40.*x[111];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[103];
	t1 += -50.*x[112];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[104];
	t1 += -40.*x[114];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[105];
	t1 += -50.*x[115];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[106];
	t1 += -40.*x[117];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[107];
	t1 += -50.*x[118];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[108];
	t1 += -40.*x[120];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[109];
	t1 += -50.*x[121];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[14];
	t1 += -x[22];
	t1 += x[62];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[15];
	t1 += -x[30];
	t1 += x[63];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[23];
	t1 += -x[31];
	t1 += x[71];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = -x[16];
	t1 += x[24];
	t1 += x[72];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = -x[17];
	t1 += x[32];
	t1 += x[80];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = -x[25];
	t1 += x[33];
	t1 += x[81];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = x[42];
	t1 += -x[50];
	t1 += x[90];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = x[43];
	t1 += -x[58];
	t1 += x[91];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = x[51];
	t1 += -x[59];
	t1 += x[99];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = -x[44];
	t1 += x[52];
	t1 += x[100];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = -x[45];
	t1 += x[60];
	t1 += x[108];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = -x[53];
	t1 += x[61];
	t1 += x[109];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = x[110];
	t1 += x[113];
	t1 += x[116];
	t1 += x[119];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = x[111];
	t1 += x[114];
	t1 += x[117];
	t1 += x[120];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = x[112];
	t1 += x[115];
	t1 += x[118];
	t1 += x[121];
	c[143] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = flay03h_pd[0];
	J[30] = -1.;

   /*** derivatives for constraint 2 ***/

	J[4] = flay03h_pd[1];
	J[34] = -1.;

   /*** derivatives for constraint 3 ***/

	J[8] = flay03h_pd[2];
	J[38] = -1.;

   /*** derivatives for constraint 4 ***/

	J[12] = -1.;
	J[31] = -1.;
	J[42] = 1.;

   /*** derivatives for constraint 5 ***/

	J[15] = -1.;
	J[35] = -1.;
	J[43] = 1.;

   /*** derivatives for constraint 6 ***/

	J[18] = -1.;
	J[39] = -1.;
	J[44] = 1.;

   /*** derivatives for constraint 7 ***/

	J[1] = -1.;
	J[21] = -1.;
	J[45] = 1.;

   /*** derivatives for constraint 8 ***/

	J[5] = -1.;
	J[24] = -1.;
	J[46] = 1.;

   /*** derivatives for constraint 9 ***/

	J[9] = -1.;
	J[27] = -1.;
	J[47] = 1.;

   /*** derivatives for constraint 10 ***/

	J[13] = 1.;
	J[48] = -1.;
	J[54] = -1.;
	J[60] = -1.;
	J[64] = -1.;

   /*** derivatives for constraint 11 ***/

	J[14] = 1.;
	J[51] = -1.;
	J[57] = -1.;
	J[62] = -1.;
	J[66] = -1.;

   /*** derivatives for constraint 12 ***/

	J[16] = 1.;
	J[68] = -1.;
	J[74] = -1.;
	J[80] = -1.;
	J[84] = -1.;

   /*** derivatives for constraint 13 ***/

	J[17] = 1.;
	J[71] = -1.;
	J[77] = -1.;
	J[82] = -1.;
	J[86] = -1.;

   /*** derivatives for constraint 14 ***/

	J[19] = 1.;
	J[88] = -1.;
	J[94] = -1.;
	J[100] = -1.;
	J[104] = -1.;

   /*** derivatives for constraint 15 ***/

	J[20] = 1.;
	J[91] = -1.;
	J[97] = -1.;
	J[102] = -1.;
	J[106] = -1.;

   /*** derivatives for constraint 16 ***/

	J[22] = 1.;
	J[108] = -1.;
	J[112] = -1.;
	J[116] = -1.;
	J[122] = -1.;

   /*** derivatives for constraint 17 ***/

	J[23] = 1.;
	J[110] = -1.;
	J[114] = -1.;
	J[119] = -1.;
	J[125] = -1.;

   /*** derivatives for constraint 18 ***/

	J[25] = 1.;
	J[128] = -1.;
	J[132] = -1.;
	J[136] = -1.;
	J[142] = -1.;

   /*** derivatives for constraint 19 ***/

	J[26] = 1.;
	J[130] = -1.;
	J[134] = -1.;
	J[139] = -1.;
	J[145] = -1.;

   /*** derivatives for constraint 20 ***/

	J[28] = 1.;
	J[148] = -1.;
	J[152] = -1.;
	J[156] = -1.;
	J[162] = -1.;

   /*** derivatives for constraint 21 ***/

	J[29] = 1.;
	J[150] = -1.;
	J[154] = -1.;
	J[159] = -1.;
	J[165] = -1.;

   /*** derivatives for constraint 22 ***/

	J[32] = 1.;
	J[168] = -1.;
	J[174] = -1.;
	J[178] = -1.;
	J[182] = -1.;

   /*** derivatives for constraint 23 ***/

	J[33] = 1.;
	J[171] = -1.;
	J[176] = -1.;
	J[180] = -1.;
	J[184] = -1.;

   /*** derivatives for constraint 24 ***/

	J[36] = 1.;
	J[186] = -1.;
	J[191] = -1.;
	J[196] = -1.;
	J[200] = -1.;

   /*** derivatives for constraint 25 ***/

	J[37] = 1.;
	J[188] = -1.;
	J[194] = -1.;
	J[198] = -1.;
	J[202] = -1.;

   /*** derivatives for constraint 26 ***/

	J[40] = 1.;
	J[204] = -1.;
	J[208] = -1.;
	J[214] = -1.;
	J[218] = -1.;

   /*** derivatives for constraint 27 ***/

	J[41] = 1.;
	J[206] = -1.;
	J[211] = -1.;
	J[216] = -1.;
	J[220] = -1.;

   /*** derivatives for constraint 28 ***/

	J[2] = 1.;
	J[222] = -1.;
	J[226] = -1.;
	J[230] = -1.;
	J[236] = -1.;

   /*** derivatives for constraint 29 ***/

	J[3] = 1.;
	J[224] = -1.;
	J[228] = -1.;
	J[233] = -1.;
	J[238] = -1.;

   /*** derivatives for constraint 30 ***/

	J[6] = 1.;
	J[240] = -1.;
	J[244] = -1.;
	J[248] = -1.;
	J[253] = -1.;

   /*** derivatives for constraint 31 ***/

	J[7] = 1.;
	J[242] = -1.;
	J[246] = -1.;
	J[250] = -1.;
	J[256] = -1.;

   /*** derivatives for constraint 32 ***/

	J[10] = 1.;
	J[258] = -1.;
	J[262] = -1.;
	J[266] = -1.;
	J[270] = -1.;

   /*** derivatives for constraint 33 ***/

	J[11] = 1.;
	J[260] = -1.;
	J[264] = -1.;
	J[268] = -1.;
	J[273] = -1.;

   /*** derivatives for constraint 34 ***/

	J[49] = 1.;
	J[276] = -29.;

   /*** derivatives for constraint 35 ***/

	J[52] = 1.;
	J[285] = -29.;

   /*** derivatives for constraint 36 ***/

	J[55] = 1.;
	J[303] = -29.;

   /*** derivatives for constraint 37 ***/

	J[58] = 1.;
	J[312] = -29.;

   /*** derivatives for constraint 38 ***/

	J[61] = 1.;
	J[330] = -29.;

   /*** derivatives for constraint 39 ***/

	J[63] = 1.;
	J[339] = -29.;

   /*** derivatives for constraint 40 ***/

	J[65] = 1.;
	J[357] = -29.;

   /*** derivatives for constraint 41 ***/

	J[67] = 1.;
	J[366] = -29.;

   /*** derivatives for constraint 42 ***/

	J[69] = 1.;
	J[277] = -29.;

   /*** derivatives for constraint 43 ***/

	J[72] = 1.;
	J[294] = -29.;

   /*** derivatives for constraint 44 ***/

	J[75] = 1.;
	J[304] = -29.;

   /*** derivatives for constraint 45 ***/

	J[78] = 1.;
	J[321] = -29.;

   /*** derivatives for constraint 46 ***/

	J[81] = 1.;
	J[331] = -29.;

   /*** derivatives for constraint 47 ***/

	J[83] = 1.;
	J[348] = -29.;

   /*** derivatives for constraint 48 ***/

	J[85] = 1.;
	J[358] = -29.;

   /*** derivatives for constraint 49 ***/

	J[87] = 1.;
	J[375] = -29.;

   /*** derivatives for constraint 50 ***/

	J[89] = 1.;
	J[286] = -29.;

   /*** derivatives for constraint 51 ***/

	J[92] = 1.;
	J[295] = -29.;

   /*** derivatives for constraint 52 ***/

	J[95] = 1.;
	J[313] = -29.;

   /*** derivatives for constraint 53 ***/

	J[98] = 1.;
	J[322] = -29.;

   /*** derivatives for constraint 54 ***/

	J[101] = 1.;
	J[340] = -29.;

   /*** derivatives for constraint 55 ***/

	J[103] = 1.;
	J[349] = -29.;

   /*** derivatives for constraint 56 ***/

	J[105] = 1.;
	J[367] = -29.;

   /*** derivatives for constraint 57 ***/

	J[107] = 1.;
	J[376] = -29.;

   /*** derivatives for constraint 58 ***/

	J[109] = 1.;
	J[278] = -29.;

   /*** derivatives for constraint 59 ***/

	J[111] = 1.;
	J[287] = -29.;

   /*** derivatives for constraint 60 ***/

	J[113] = 1.;
	J[305] = -29.;

   /*** derivatives for constraint 61 ***/

	J[115] = 1.;
	J[314] = -29.;

   /*** derivatives for constraint 62 ***/

	J[117] = 1.;
	J[332] = -29.;

   /*** derivatives for constraint 63 ***/

	J[120] = 1.;
	J[341] = -29.;

   /*** derivatives for constraint 64 ***/

	J[123] = 1.;
	J[359] = -29.;

   /*** derivatives for constraint 65 ***/

	J[126] = 1.;
	J[368] = -29.;

   /*** derivatives for constraint 66 ***/

	J[129] = 1.;
	J[279] = -29.;

   /*** derivatives for constraint 67 ***/

	J[131] = 1.;
	J[296] = -29.;

   /*** derivatives for constraint 68 ***/

	J[133] = 1.;
	J[306] = -29.;

   /*** derivatives for constraint 69 ***/

	J[135] = 1.;
	J[323] = -29.;

   /*** derivatives for constraint 70 ***/

	J[137] = 1.;
	J[333] = -29.;

   /*** derivatives for constraint 71 ***/

	J[140] = 1.;
	J[350] = -29.;

   /*** derivatives for constraint 72 ***/

	J[143] = 1.;
	J[360] = -29.;

   /*** derivatives for constraint 73 ***/

	J[146] = 1.;
	J[377] = -29.;

   /*** derivatives for constraint 74 ***/

	J[149] = 1.;
	J[288] = -29.;

   /*** derivatives for constraint 75 ***/

	J[151] = 1.;
	J[297] = -29.;

   /*** derivatives for constraint 76 ***/

	J[153] = 1.;
	J[315] = -29.;

   /*** derivatives for constraint 77 ***/

	J[155] = 1.;
	J[324] = -29.;

   /*** derivatives for constraint 78 ***/

	J[157] = 1.;
	J[342] = -29.;

   /*** derivatives for constraint 79 ***/

	J[160] = 1.;
	J[351] = -29.;

   /*** derivatives for constraint 80 ***/

	J[163] = 1.;
	J[369] = -29.;

   /*** derivatives for constraint 81 ***/

	J[166] = 1.;
	J[378] = -29.;

   /*** derivatives for constraint 82 ***/

	J[169] = 1.;
	J[280] = -40.;

   /*** derivatives for constraint 83 ***/

	J[172] = 1.;
	J[289] = -40.;

   /*** derivatives for constraint 84 ***/

	J[175] = 1.;
	J[307] = -40.;

   /*** derivatives for constraint 85 ***/

	J[177] = 1.;
	J[316] = -40.;

   /*** derivatives for constraint 86 ***/

	J[179] = 1.;
	J[334] = -40.;

   /*** derivatives for constraint 87 ***/

	J[181] = 1.;
	J[343] = -40.;

   /*** derivatives for constraint 88 ***/

	J[183] = 1.;
	J[361] = -40.;

   /*** derivatives for constraint 89 ***/

	J[185] = 1.;
	J[370] = -40.;

   /*** derivatives for constraint 90 ***/

	J[187] = 1.;
	J[281] = -40.;

   /*** derivatives for constraint 91 ***/

	J[189] = 1.;
	J[298] = -50.;

   /*** derivatives for constraint 92 ***/

	J[192] = 1.;
	J[308] = -40.;

   /*** derivatives for constraint 93 ***/

	J[195] = 1.;
	J[325] = -50.;

   /*** derivatives for constraint 94 ***/

	J[197] = 1.;
	J[335] = -40.;

   /*** derivatives for constraint 95 ***/

	J[199] = 1.;
	J[352] = -50.;

   /*** derivatives for constraint 96 ***/

	J[201] = 1.;
	J[362] = -40.;

   /*** derivatives for constraint 97 ***/

	J[203] = 1.;
	J[379] = -50.;

   /*** derivatives for constraint 98 ***/

	J[205] = 1.;
	J[290] = -40.;

   /*** derivatives for constraint 99 ***/

	J[207] = 1.;
	J[299] = -50.;

   /*** derivatives for constraint 100 ***/

	J[209] = 1.;
	J[317] = -40.;

   /*** derivatives for constraint 101 ***/

	J[212] = 1.;
	J[326] = -50.;

   /*** derivatives for constraint 102 ***/

	J[215] = 1.;
	J[344] = -40.;

   /*** derivatives for constraint 103 ***/

	J[217] = 1.;
	J[353] = -50.;

   /*** derivatives for constraint 104 ***/

	J[219] = 1.;
	J[371] = -40.;

   /*** derivatives for constraint 105 ***/

	J[221] = 1.;
	J[380] = -50.;

   /*** derivatives for constraint 106 ***/

	J[223] = 1.;
	J[282] = -40.;

   /*** derivatives for constraint 107 ***/

	J[225] = 1.;
	J[291] = -40.;

   /*** derivatives for constraint 108 ***/

	J[227] = 1.;
	J[309] = -40.;

   /*** derivatives for constraint 109 ***/

	J[229] = 1.;
	J[318] = -40.;

   /*** derivatives for constraint 110 ***/

	J[231] = 1.;
	J[336] = -40.;

   /*** derivatives for constraint 111 ***/

	J[234] = 1.;
	J[345] = -40.;

   /*** derivatives for constraint 112 ***/

	J[237] = 1.;
	J[363] = -40.;

   /*** derivatives for constraint 113 ***/

	J[239] = 1.;
	J[372] = -40.;

   /*** derivatives for constraint 114 ***/

	J[241] = 1.;
	J[283] = -40.;

   /*** derivatives for constraint 115 ***/

	J[243] = 1.;
	J[300] = -50.;

   /*** derivatives for constraint 116 ***/

	J[245] = 1.;
	J[310] = -40.;

   /*** derivatives for constraint 117 ***/

	J[247] = 1.;
	J[327] = -50.;

   /*** derivatives for constraint 118 ***/

	J[249] = 1.;
	J[337] = -40.;

   /*** derivatives for constraint 119 ***/

	J[251] = 1.;
	J[354] = -50.;

   /*** derivatives for constraint 120 ***/

	J[254] = 1.;
	J[364] = -40.;

   /*** derivatives for constraint 121 ***/

	J[257] = 1.;
	J[381] = -50.;

   /*** derivatives for constraint 122 ***/

	J[259] = 1.;
	J[292] = -40.;

   /*** derivatives for constraint 123 ***/

	J[261] = 1.;
	J[301] = -50.;

   /*** derivatives for constraint 124 ***/

	J[263] = 1.;
	J[319] = -40.;

   /*** derivatives for constraint 125 ***/

	J[265] = 1.;
	J[328] = -50.;

   /*** derivatives for constraint 126 ***/

	J[267] = 1.;
	J[346] = -40.;

   /*** derivatives for constraint 127 ***/

	J[269] = 1.;
	J[355] = -50.;

   /*** derivatives for constraint 128 ***/

	J[271] = 1.;
	J[373] = -40.;

   /*** derivatives for constraint 129 ***/

	J[274] = 1.;
	J[382] = -50.;

   /*** derivatives for constraint 130 ***/

	J[50] = 1.;
	J[70] = -1.;
	J[170] = 1.;

   /*** derivatives for constraint 131 ***/

	J[53] = 1.;
	J[90] = -1.;
	J[173] = 1.;

   /*** derivatives for constraint 132 ***/

	J[73] = 1.;
	J[93] = -1.;
	J[190] = 1.;

   /*** derivatives for constraint 133 ***/

	J[56] = -1.;
	J[76] = 1.;
	J[193] = 1.;

   /*** derivatives for constraint 134 ***/

	J[59] = -1.;
	J[96] = 1.;
	J[210] = 1.;

   /*** derivatives for constraint 135 ***/

	J[79] = -1.;
	J[99] = 1.;
	J[213] = 1.;

   /*** derivatives for constraint 136 ***/

	J[118] = 1.;
	J[138] = -1.;
	J[232] = 1.;

   /*** derivatives for constraint 137 ***/

	J[121] = 1.;
	J[158] = -1.;
	J[235] = 1.;

   /*** derivatives for constraint 138 ***/

	J[141] = 1.;
	J[161] = -1.;
	J[252] = 1.;

   /*** derivatives for constraint 139 ***/

	J[124] = -1.;
	J[144] = 1.;
	J[255] = 1.;

   /*** derivatives for constraint 140 ***/

	J[127] = -1.;
	J[164] = 1.;
	J[272] = 1.;

   /*** derivatives for constraint 141 ***/

	J[147] = -1.;
	J[167] = 1.;
	J[275] = 1.;

   /*** derivatives for constraint 142 ***/

	J[284] = 1.;
	J[311] = 1.;
	J[338] = 1.;
	J[365] = 1.;

   /*** derivatives for constraint 143 ***/

	J[293] = 1.;
	J[320] = 1.;
	J[347] = 1.;
	J[374] = 1.;

   /*** derivatives for constraint 144 ***/

	J[302] = 1.;
	J[329] = 1.;
	J[356] = 1.;
	J[383] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
