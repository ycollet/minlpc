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
 fint kall_ellipsoids_tc02b_auxcom_[1] = { 48 /* nlc */ };
 fint kall_ellipsoids_tc02b_funcom_[513] = {
	124 /* nvar */,
	1 /* nobj */,
	128 /* ncon */,
	382 /* nzc */,
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
	17,
	19,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	39,
	41,
	43,
	46,
	49,
	52,
	54,
	57,
	60,
	62,
	64,
	67,
	70,
	73,
	76,
	78,
	81,
	84,
	86,
	88,
	91,
	96,
	101,
	106,
	111,
	116,
	121,
	126,
	131,
	136,
	141,
	146,
	151,
	156,
	161,
	166,
	171,
	176,
	181,
	183,
	185,
	187,
	190,
	193,
	196,
	199,
	202,
	205,
	212,
	220,
	228,
	231,
	234,
	237,
	240,
	243,
	246,
	249,
	252,
	255,
	258,
	261,
	264,
	267,
	270,
	273,
	276,
	279,
	282,
	285,
	288,
	291,
	294,
	297,
	300,
	303,
	306,
	309,
	312,
	315,
	318,
	321,
	324,
	327,
	330,
	333,
	336,
	338,
	343,
	348,
	353,
	357,
	361,
	365,
	366,
	367,
	368,
	369,
	370,
	371,
	373,
	375,
	377,
	379,
	381,
	383,

	/* rownos */
	1,
	111,
	48,
	112,
	48,
	113,
	48,
	114,
	48,
	115,
	48,
	116,
	48,
	117,
	48,
	118,
	48,
	119,
	48,
	120,
	48,
	121,
	48,
	122,
	48,
	123,
	48,
	124,
	48,
	125,
	48,
	126,
	48,
	127,
	48,
	128,
	48,
	108,
	48,
	109,
	48,
	110,
	6,
	8,
	61,
	8,
	62,
	73,
	6,
	63,
	74,
	8,
	73,
	4,
	8,
	64,
	4,
	65,
	75,
	6,
	74,
	4,
	75,
	4,
	6,
	66,
	7,
	9,
	67,
	9,
	68,
	76,
	7,
	69,
	77,
	9,
	76,
	5,
	9,
	70,
	5,
	71,
	78,
	7,
	77,
	5,
	78,
	5,
	7,
	72,
	2,
	11,
	14,
	17,
	111,
	2,
	12,
	15,
	18,
	112,
	2,
	13,
	16,
	19,
	113,
	2,
	14,
	20,
	23,
	114,
	2,
	15,
	21,
	24,
	115,
	2,
	16,
	22,
	25,
	116,
	2,
	17,
	23,
	26,
	117,
	2,
	18,
	24,
	27,
	118,
	2,
	19,
	25,
	28,
	119,
	3,
	29,
	32,
	35,
	120,
	3,
	30,
	33,
	36,
	121,
	3,
	31,
	34,
	37,
	122,
	3,
	32,
	38,
	41,
	123,
	3,
	33,
	39,
	42,
	124,
	3,
	34,
	40,
	43,
	125,
	3,
	35,
	41,
	44,
	126,
	3,
	36,
	42,
	45,
	127,
	3,
	37,
	43,
	46,
	128,
	10,
	48,
	10,
	48,
	10,
	48,
	4,
	85,
	91,
	6,
	86,
	92,
	8,
	87,
	93,
	5,
	88,
	94,
	7,
	89,
	95,
	9,
	90,
	96,
	1,
	79,
	82,
	97,
	100,
	103,
	105,
	1,
	80,
	83,
	98,
	101,
	103,
	104,
	106,
	1,
	47,
	81,
	84,
	99,
	102,
	104,
	107,
	11,
	49,
	61,
	12,
	49,
	61,
	13,
	49,
	61,
	14,
	50,
	62,
	15,
	50,
	62,
	16,
	50,
	62,
	17,
	51,
	63,
	18,
	51,
	63,
	19,
	51,
	63,
	20,
	52,
	64,
	21,
	52,
	64,
	22,
	52,
	64,
	23,
	53,
	65,
	24,
	53,
	65,
	25,
	53,
	65,
	26,
	54,
	66,
	27,
	54,
	66,
	28,
	54,
	66,
	29,
	55,
	67,
	30,
	55,
	67,
	31,
	55,
	67,
	32,
	56,
	68,
	33,
	56,
	68,
	34,
	56,
	68,
	35,
	57,
	69,
	36,
	57,
	69,
	37,
	57,
	69,
	38,
	58,
	70,
	39,
	58,
	70,
	40,
	58,
	70,
	41,
	59,
	71,
	42,
	59,
	71,
	43,
	59,
	71,
	44,
	60,
	72,
	45,
	60,
	72,
	46,
	60,
	72,
	1,
	47,
	79,
	85,
	91,
	105,
	108,
	80,
	86,
	92,
	106,
	109,
	81,
	87,
	93,
	107,
	110,
	82,
	88,
	94,
	108,
	83,
	89,
	95,
	109,
	84,
	90,
	96,
	110,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	97,
	92,
	98,
	93,
	99,
	94,
	100,
	95,
	101,
	96,
	102 };

 real kall_ellipsoids_tc02b_boundc_[1+248+256] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		1.7e308,
		-1.69454444444444,
		1.69454444444444,
		-1.69454444444444,
		1.69454444444444,
		-1.69454444444444,
		1.69454444444444,
		-1.69444444444444,
		1.69444444444444,
		-1.69454444444444,
		1.69454444444444,
		-1.69454444444444,
		1.69454444444444,
		-1.69444444444444,
		1.69444444444444,
		-1.69444444444444,
		1.69444444444444,
		-1.69454444444444,
		1.69454444444444,
		-3.48536077097506,
		3.48536077097506,
		-3.48536077097506,
		3.48536077097506,
		-3.48536077097506,
		3.48536077097506,
		-3.48526077097506,
		3.48526077097506,
		-3.48536077097506,
		3.48536077097506,
		-3.48536077097506,
		3.48536077097506,
		-3.48526077097506,
		3.48526077097506,
		-3.48526077097506,
		3.48526077097506,
		-3.48536077097506,
		3.48536077097506,
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
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		0.333333333333333,
		0.666666666666667,
		0.333333333333333,
		0.666666666666667,
		0.333333333333333,
		0.666666666666667,
		0.666666666666667,
		1.42857142857143,
		0.666666666666667,
		1.42857142857143,
		0.666666666666667,
		1.42857142857143,
		4.5,
		7.,
		2.5,
		4.,
		2.,
		4.,
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
		16.9646003293849,
		1.7e308,
		1.,
		6.,
		1.,
		3.,
		1.,
		3.,
		0.7,
		6.3,
		0.7,
		3.3,
		0.7,
		3.3,
		0.,
		10.,
		0.,
		4.,
		0.,
		4.,
		0.,
		10.,
		0.,
		4.,
		0.,
		4.,
		0.,
		10.,
		0.,
		4.,
		0.,
		4.,
		0.,
		10.,
		0.,
		4.,
		0.,
		4.,
		0.,
		0.,
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
		-1.7e308,
		0.,
		0.,
		1.7e308,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		-1.,
		-1.7e308,
		-1.,
		-1.7e308,
		-1.,
		-1.7e308,
		-0.7,
		-1.7e308,
		-0.7,
		-1.7e308,
		-0.7,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real kall_ellipsoids_tc02b_x0comn_[124] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		1.,
		1.,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.666666666666667,
		0.666666666666667,
		0.666666666666667,
		4.5,
		2.5,
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
		16.9646003293849,
		1.,
		1.,
		1.,
		0.7,
		0.7,
		0.7,
		0.,
		0.,
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

 static real kall_ellipsoids_tc02b_pd[43];
static real kall_ellipsoids_tc02b_old_x[124];
static int kall_ellipsoids_tc02b_xkind = -1;

 static int
kall_ellipsoids_tc02b_xcheck(real *x)
{
	real *x1 = kall_ellipsoids_tc02b_old_x, *xe = x + 124;
	errno = 0;
	if (kall_ellipsoids_tc02b_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_ellipsoids_tc02b_xkind = 0;
	return 1;
	}
 real
kall_ellipsoids_tc02b_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_ellipsoids_tc02b_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[105];
	;}

	if (wantfg & 2) {
	g[105] = 1.;
	}

	return rv;
}

 void
kall_ellipsoids_tc02b_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[18];
	real t1;
	fint wantfg = *needfg;
	if (kall_ellipsoids_tc02b_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	kall_ellipsoids_tc02b_pd[0] = x[66] * x[67];
	v[0] = kall_ellipsoids_tc02b_pd[0] * x[68];
	v[1] = -v[0];
	t1 = v[1] + x[105];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_ellipsoids_tc02b_pd[1] = x[39] * x[43];
	v[0] = kall_ellipsoids_tc02b_pd[1] * x[47];
	kall_ellipsoids_tc02b_pd[2] = x[39] * x[44];
	v[1] = kall_ellipsoids_tc02b_pd[2] * x[46];
	v[2] = -v[1];
	v[0] += v[2];
	kall_ellipsoids_tc02b_pd[3] = x[40] * x[42];
	v[2] = kall_ellipsoids_tc02b_pd[3] * x[47];
	v[1] = -v[2];
	v[0] += v[1];
	kall_ellipsoids_tc02b_pd[4] = x[40] * x[45];
	v[1] = kall_ellipsoids_tc02b_pd[4] * x[44];
	v[0] += v[1];
	kall_ellipsoids_tc02b_pd[5] = x[42] * x[41];
	v[1] = kall_ellipsoids_tc02b_pd[5] * x[46];
	v[0] += v[1];
	kall_ellipsoids_tc02b_pd[6] = x[41] * x[43];
	v[1] = kall_ellipsoids_tc02b_pd[6] * x[45];
	v[2] = -v[1];
	v[0] += v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	kall_ellipsoids_tc02b_pd[7] = x[48] * x[52];
	v[0] = kall_ellipsoids_tc02b_pd[7] * x[56];
	kall_ellipsoids_tc02b_pd[8] = x[48] * x[53];
	v[1] = kall_ellipsoids_tc02b_pd[8] * x[55];
	v[2] = -v[1];
	v[0] += v[2];
	kall_ellipsoids_tc02b_pd[9] = x[49] * x[51];
	v[2] = kall_ellipsoids_tc02b_pd[9] * x[56];
	v[1] = -v[2];
	v[0] += v[1];
	kall_ellipsoids_tc02b_pd[10] = x[49] * x[54];
	v[1] = kall_ellipsoids_tc02b_pd[10] * x[53];
	v[0] += v[1];
	kall_ellipsoids_tc02b_pd[11] = x[51] * x[50];
	v[1] = kall_ellipsoids_tc02b_pd[11] * x[55];
	v[0] += v[1];
	kall_ellipsoids_tc02b_pd[12] = x[50] * x[52];
	v[1] = kall_ellipsoids_tc02b_pd[12] * x[54];
	v[2] = -v[1];
	v[0] += v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[60] * x[60];
	kall_ellipsoids_tc02b_pd[13] = x[60] + x[60];
	v[1] = x[25] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[26] * x[28];
	v[0] += v[2];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[63] * x[63];
	kall_ellipsoids_tc02b_pd[14] = x[63] + x[63];
	v[1] = x[34] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[35] * x[37];
	v[0] += v[2];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[61] * x[61];
	kall_ellipsoids_tc02b_pd[15] = x[61] + x[61];
	v[1] = x[21] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[23] * x[27];
	v[0] += v[2];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[64] * x[64];
	kall_ellipsoids_tc02b_pd[16] = x[64] + x[64];
	v[1] = x[30] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[32] * x[36];
	v[0] += v[2];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[62] * x[62];
	kall_ellipsoids_tc02b_pd[17] = x[62] + x[62];
	v[1] = x[21] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[22] * x[24];
	v[0] += v[2];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[65] * x[65];
	kall_ellipsoids_tc02b_pd[18] = x[65] + x[65];
	v[1] = x[30] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[33];
	v[0] += v[2];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[57] * x[57];
	kall_ellipsoids_tc02b_pd[19] = x[57] + x[57];
	v[1] = x[58] * x[58];
	kall_ellipsoids_tc02b_pd[20] = x[58] + x[58];
	v[0] += v[1];
	v[1] = x[59] * x[59];
	kall_ellipsoids_tc02b_pd[21] = x[59] + x[59];
	v[0] += v[1];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[39] * x[39];
	v[1] = -v[0];
	t1 = v[1] + x[69];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[40] * x[40];
	v[1] = -v[0];
	t1 = v[1] + x[70];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[41] * x[41];
	v[1] = -v[0];
	t1 = v[1] + x[71];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[39] * x[42];
	v[1] = -v[0];
	t1 = v[1] + x[72];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[40] * x[43];
	v[1] = -v[0];
	t1 = v[1] + x[73];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[41] * x[44];
	v[1] = -v[0];
	t1 = v[1] + x[74];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[39] * x[45];
	v[1] = -v[0];
	t1 = v[1] + x[75];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[40] * x[46];
	v[1] = -v[0];
	t1 = v[1] + x[76];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[41] * x[47];
	v[1] = -v[0];
	t1 = v[1] + x[77];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[42] * x[42];
	v[1] = -v[0];
	t1 = v[1] + x[78];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[43] * x[43];
	v[1] = -v[0];
	t1 = v[1] + x[79];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[44] * x[44];
	v[1] = -v[0];
	t1 = v[1] + x[80];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[42] * x[45];
	v[1] = -v[0];
	t1 = v[1] + x[81];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[43] * x[46];
	v[1] = -v[0];
	t1 = v[1] + x[82];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[44] * x[47];
	v[1] = -v[0];
	t1 = v[1] + x[83];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[45] * x[45];
	v[1] = -v[0];
	t1 = v[1] + x[84];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[46] * x[46];
	v[1] = -v[0];
	t1 = v[1] + x[85];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[47] * x[47];
	v[1] = -v[0];
	t1 = v[1] + x[86];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[48] * x[48];
	v[1] = -v[0];
	t1 = v[1] + x[87];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[49] * x[49];
	v[1] = -v[0];
	t1 = v[1] + x[88];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[50] * x[50];
	v[1] = -v[0];
	t1 = v[1] + x[89];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[48] * x[51];
	v[1] = -v[0];
	t1 = v[1] + x[90];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[49] * x[52];
	v[1] = -v[0];
	t1 = v[1] + x[91];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[50] * x[53];
	v[1] = -v[0];
	t1 = v[1] + x[92];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[48] * x[54];
	v[1] = -v[0];
	t1 = v[1] + x[93];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[49] * x[55];
	v[1] = -v[0];
	t1 = v[1] + x[94];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[50] * x[56];
	v[1] = -v[0];
	t1 = v[1] + x[95];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[51] * x[51];
	v[1] = -v[0];
	t1 = v[1] + x[96];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[52] * x[52];
	v[1] = -v[0];
	t1 = v[1] + x[97];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[53] * x[53];
	v[1] = -v[0];
	t1 = v[1] + x[98];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[51] * x[54];
	v[1] = -v[0];
	t1 = v[1] + x[99];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[52] * x[55];
	v[1] = -v[0];
	t1 = v[1] + x[100];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[53] * x[56];
	v[1] = -v[0];
	t1 = v[1] + x[101];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = x[54] * x[54];
	v[1] = -v[0];
	t1 = v[1] + x[102];
	c[43] = t1;

  /***  constraint 45  ***/

	v[0] = x[55] * x[55];
	v[1] = -v[0];
	t1 = v[1] + x[103];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = x[56] * x[56];
	v[1] = -v[0];
	t1 = v[1] + x[104];
	c[45] = t1;

  /***  constraint 47  ***/

	v[0] = pow(x[68], 3.);
	if (errno) in_trouble2("pow",x[68],3.);
	if (x[68] != 0.) {
	kall_ellipsoids_tc02b_pd[22] = 3.*(x[68]*x[68]);
	} else {
	kall_ellipsoids_tc02b_pd[22] = 0.;
	}
	t1 = v[0] + -x[105];
	c[46] = t1;

  /***  constraint 48  ***/

	v[0] = x[57] * x[18];
	v[1] = x[58] * x[19];
	v[0] += v[1];
	v[1] = x[59] * x[20];
	v[0] += v[1];
	v[1] = x[0] * x[57];
	v[2] = v[1] * v[1];
	kall_ellipsoids_tc02b_pd[23] = v[1] + v[1];
	v[1] = x[3] * x[58];
	v[3] = v[1] * v[1];
	kall_ellipsoids_tc02b_pd[24] = v[1] + v[1];
	v[2] += v[3];
	v[3] = x[6] * x[59];
	v[1] = v[3] * v[3];
	kall_ellipsoids_tc02b_pd[25] = v[3] + v[3];
	v[2] += v[1];
	v[1] = x[1] * x[57];
	v[3] = v[1] * v[1];
	kall_ellipsoids_tc02b_pd[26] = v[1] + v[1];
	v[2] += v[3];
	v[3] = x[4] * x[58];
	v[1] = v[3] * v[3];
	kall_ellipsoids_tc02b_pd[27] = v[3] + v[3];
	v[2] += v[1];
	v[1] = x[7] * x[59];
	v[3] = v[1] * v[1];
	kall_ellipsoids_tc02b_pd[28] = v[1] + v[1];
	v[2] += v[3];
	v[3] = x[2] * x[57];
	v[1] = v[3] * v[3];
	kall_ellipsoids_tc02b_pd[29] = v[3] + v[3];
	v[2] += v[1];
	v[1] = x[5] * x[58];
	v[3] = v[1] * v[1];
	kall_ellipsoids_tc02b_pd[30] = v[1] + v[1];
	v[2] += v[3];
	v[3] = x[8] * x[59];
	v[1] = v[3] * v[3];
	kall_ellipsoids_tc02b_pd[31] = v[3] + v[3];
	v[2] += v[1];
	v[1] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	kall_ellipsoids_tc02b_pd[32] = 0.5 / v[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[9] * x[57];
	v[1] = v[2] * v[2];
	kall_ellipsoids_tc02b_pd[33] = v[2] + v[2];
	v[2] = x[12] * x[58];
	v[3] = v[2] * v[2];
	kall_ellipsoids_tc02b_pd[34] = v[2] + v[2];
	v[1] += v[3];
	v[3] = x[15] * x[59];
	v[2] = v[3] * v[3];
	kall_ellipsoids_tc02b_pd[35] = v[3] + v[3];
	v[1] += v[2];
	v[2] = x[10] * x[57];
	v[3] = v[2] * v[2];
	kall_ellipsoids_tc02b_pd[36] = v[2] + v[2];
	v[1] += v[3];
	v[3] = x[13] * x[58];
	v[2] = v[3] * v[3];
	kall_ellipsoids_tc02b_pd[37] = v[3] + v[3];
	v[1] += v[2];
	v[2] = x[16] * x[59];
	v[3] = v[2] * v[2];
	kall_ellipsoids_tc02b_pd[38] = v[2] + v[2];
	v[1] += v[3];
	v[3] = x[11] * x[57];
	v[2] = v[3] * v[3];
	kall_ellipsoids_tc02b_pd[39] = v[3] + v[3];
	v[1] += v[2];
	v[2] = x[14] * x[58];
	v[3] = v[2] * v[2];
	kall_ellipsoids_tc02b_pd[40] = v[2] + v[2];
	v[1] += v[3];
	v[3] = x[17] * x[59];
	v[2] = v[3] * v[3];
	kall_ellipsoids_tc02b_pd[41] = v[3] + v[3];
	v[1] += v[2];
	v[2] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	kall_ellipsoids_tc02b_pd[42] = 0.5 / v[2];
	v[1] = -v[2];
	v[0] += v[1];
	c[47] = v[0];

  /***  constraint 49  ***/

	t1 = x[69];
	t1 += x[70];
	t1 += x[71];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[72];
	t1 += x[73];
	t1 += x[74];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[75];
	t1 += x[76];
	t1 += x[77];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[78];
	t1 += x[79];
	t1 += x[80];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[81];
	t1 += x[82];
	t1 += x[83];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[84];
	t1 += x[85];
	t1 += x[86];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[87];
	t1 += x[88];
	t1 += x[89];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[90];
	t1 += x[91];
	t1 += x[92];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[93];
	t1 += x[94];
	t1 += x[95];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[96];
	t1 += x[97];
	t1 += x[98];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[99];
	t1 += x[100];
	t1 += x[101];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[102];
	t1 += x[103];
	t1 += x[104];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[21];
	t1 += -0.25*x[69];
	t1 += -0.444444444444444*x[70];
	t1 += -x[71];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[22];
	t1 += -0.25*x[72];
	t1 += -0.444444444444444*x[73];
	t1 += -x[74];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[23];
	t1 += -0.25*x[75];
	t1 += -0.444444444444444*x[76];
	t1 += -x[77];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[25];
	t1 += -0.25*x[78];
	t1 += -0.444444444444444*x[79];
	t1 += -x[80];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[26];
	t1 += -0.25*x[81];
	t1 += -0.444444444444444*x[82];
	t1 += -x[83];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[29];
	t1 += -0.25*x[84];
	t1 += -0.444444444444444*x[85];
	t1 += -x[86];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[30];
	t1 += -0.444444444444444*x[87];
	t1 += -x[88];
	t1 += -2.04081632653061*x[89];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[31];
	t1 += -0.444444444444444*x[90];
	t1 += -x[91];
	t1 += -2.04081632653061*x[92];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[32];
	t1 += -0.444444444444444*x[93];
	t1 += -x[94];
	t1 += -2.04081632653061*x[95];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[34];
	t1 += -0.444444444444444*x[96];
	t1 += -x[97];
	t1 += -2.04081632653061*x[98];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[35];
	t1 += -0.444444444444444*x[99];
	t1 += -x[100];
	t1 += -2.04081632653061*x[101];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[38];
	t1 += -0.444444444444444*x[102];
	t1 += -x[103];
	t1 += -2.04081632653061*x[104];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[22];
	t1 += x[24];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[23];
	t1 += x[27];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[26];
	t1 += x[28];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[31];
	t1 += x[33];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[32];
	t1 += x[36];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[35];
	t1 += x[37];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[66];
	t1 += x[106];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[67];
	t1 += x[107];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[68];
	t1 += x[108];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[66];
	t1 += x[109];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[67];
	t1 += x[110];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[68];
	t1 += x[111];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = 3.*x[60];
	t1 += -x[106];
	t1 += x[112];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = 3.*x[61];
	t1 += -x[107];
	t1 += x[113];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = 3.*x[62];
	t1 += -x[108];
	t1 += x[114];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = 1.05*x[63];
	t1 += -x[109];
	t1 += x[115];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = 1.05*x[64];
	t1 += -x[110];
	t1 += x[116];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = 1.05*x[65];
	t1 += -x[111];
	t1 += x[117];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = -3.*x[60];
	t1 += -x[106];
	t1 += x[118];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = -3.*x[61];
	t1 += -x[107];
	t1 += x[119];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -3.*x[62];
	t1 += -x[108];
	t1 += x[120];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = -1.05*x[63];
	t1 += -x[109];
	t1 += x[121];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = -1.05*x[64];
	t1 += -x[110];
	t1 += x[122];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = -1.05*x[65];
	t1 += -x[111];
	t1 += x[123];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = -x[66];
	t1 += x[118];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = -x[67];
	t1 += x[119];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -x[68];
	t1 += x[120];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = -x[66];
	t1 += x[121];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = -x[67];
	t1 += x[122];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = -x[68];
	t1 += x[123];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[66];
	t1 += -x[67];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[67];
	t1 += -x[68];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = -0.5*x[66];
	t1 += x[106];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -0.5*x[67];
	t1 += x[107];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = -0.5*x[68];
	t1 += x[108];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[18];
	t1 += -x[106];
	t1 += x[109];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[19];
	t1 += -x[107];
	t1 += x[110];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[20];
	t1 += -x[108];
	t1 += x[111];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[0];
	t1 += -2.*x[39];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[1];
	t1 += -1.5*x[40];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[2];
	t1 += -x[41];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[3];
	t1 += -2.*x[42];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[4];
	t1 += -1.5*x[43];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[5];
	t1 += -x[44];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[6];
	t1 += -2.*x[45];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[7];
	t1 += -1.5*x[46];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[8];
	t1 += -x[47];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = x[9];
	t1 += -1.5*x[48];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[10];
	t1 += -x[49];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[11];
	t1 += -0.7*x[50];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[12];
	t1 += -1.5*x[51];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[13];
	t1 += -x[52];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[14];
	t1 += -0.7*x[53];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[15];
	t1 += -1.5*x[54];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[16];
	t1 += -x[55];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[17];
	t1 += -0.7*x[56];
	c[127] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[219] = -kall_ellipsoids_tc02b_pd[0];
	J[211] = -x[68]*x[66];
	J[204] = -x[68]*x[67];
	J[335] = 1.;

   /*** derivatives for constraint 2 ***/

	J[120] = -kall_ellipsoids_tc02b_pd[6];
	J[110] = -x[45]*x[41];
	J[100] = -x[45]*x[43];
	J[125] = kall_ellipsoids_tc02b_pd[5];
	J[100] += x[46]*x[42];
	J[105] = x[46]*x[41];
	J[115] = kall_ellipsoids_tc02b_pd[4];
	J[120] += x[44]*x[40];
	J[95] = x[44]*x[45];
	J[130] = -kall_ellipsoids_tc02b_pd[3];
	J[105] -= x[47]*x[40];
	J[95] -= x[47]*x[42];
	J[125] -= kall_ellipsoids_tc02b_pd[2];
	J[115] -= x[46]*x[39];
	J[90] = -x[46]*x[44];
	J[130] += kall_ellipsoids_tc02b_pd[1];
	J[110] += x[47]*x[39];
	J[90] += x[47]*x[43];

   /*** derivatives for constraint 3 ***/

	J[165] = -kall_ellipsoids_tc02b_pd[12];
	J[155] = -x[54]*x[50];
	J[145] = -x[54]*x[52];
	J[170] = kall_ellipsoids_tc02b_pd[11];
	J[145] += x[55]*x[51];
	J[150] = x[55]*x[50];
	J[160] = kall_ellipsoids_tc02b_pd[10];
	J[165] += x[53]*x[49];
	J[140] = x[53]*x[54];
	J[175] = -kall_ellipsoids_tc02b_pd[9];
	J[150] -= x[56]*x[49];
	J[140] -= x[56]*x[51];
	J[170] -= kall_ellipsoids_tc02b_pd[8];
	J[160] -= x[55]*x[48];
	J[135] = -x[55]*x[53];
	J[175] += kall_ellipsoids_tc02b_pd[7];
	J[155] += x[56]*x[48];
	J[135] += x[56]*x[52];

   /*** derivatives for constraint 4 ***/

	J[61] = x[26];
	J[56] = x[28];
	J[63] = -x[25];
	J[53] = -x[29];
	J[186] = kall_ellipsoids_tc02b_pd[13];

   /*** derivatives for constraint 5 ***/

	J[85] = x[35];
	J[80] = x[37];
	J[87] = -x[34];
	J[77] = -x[38];
	J[195] = kall_ellipsoids_tc02b_pd[14];

   /*** derivatives for constraint 6 ***/

	J[59] = x[23];
	J[48] = x[27];
	J[64] = -x[21];
	J[42] = -x[29];
	J[189] = kall_ellipsoids_tc02b_pd[15];

   /*** derivatives for constraint 7 ***/

	J[83] = x[32];
	J[72] = x[36];
	J[88] = -x[30];
	J[66] = -x[38];
	J[198] = kall_ellipsoids_tc02b_pd[16];

   /*** derivatives for constraint 8 ***/

	J[51] = x[22];
	J[45] = x[24];
	J[54] = -x[21];
	J[43] = -x[25];
	J[192] = kall_ellipsoids_tc02b_pd[17];

   /*** derivatives for constraint 9 ***/

	J[75] = x[31];
	J[69] = x[33];
	J[78] = -x[30];
	J[67] = -x[34];
	J[201] = kall_ellipsoids_tc02b_pd[18];

   /*** derivatives for constraint 10 ***/

	J[184] = kall_ellipsoids_tc02b_pd[21];
	J[182] = kall_ellipsoids_tc02b_pd[20];
	J[180] = kall_ellipsoids_tc02b_pd[19];

   /*** derivatives for constraint 11 ***/

	J[91] = -x[39];
	J[91] -= x[39];
	J[227] = 1.;

   /*** derivatives for constraint 12 ***/

	J[96] = -x[40];
	J[96] -= x[40];
	J[230] = 1.;

   /*** derivatives for constraint 13 ***/

	J[101] = -x[41];
	J[101] -= x[41];
	J[233] = 1.;

   /*** derivatives for constraint 14 ***/

	J[106] = -x[39];
	J[92] = -x[42];
	J[236] = 1.;

   /*** derivatives for constraint 15 ***/

	J[111] = -x[40];
	J[97] = -x[43];
	J[239] = 1.;

   /*** derivatives for constraint 16 ***/

	J[116] = -x[41];
	J[102] = -x[44];
	J[242] = 1.;

   /*** derivatives for constraint 17 ***/

	J[121] = -x[39];
	J[93] = -x[45];
	J[245] = 1.;

   /*** derivatives for constraint 18 ***/

	J[126] = -x[40];
	J[98] = -x[46];
	J[248] = 1.;

   /*** derivatives for constraint 19 ***/

	J[131] = -x[41];
	J[103] = -x[47];
	J[251] = 1.;

   /*** derivatives for constraint 20 ***/

	J[107] = -x[42];
	J[107] -= x[42];
	J[254] = 1.;

   /*** derivatives for constraint 21 ***/

	J[112] = -x[43];
	J[112] -= x[43];
	J[257] = 1.;

   /*** derivatives for constraint 22 ***/

	J[117] = -x[44];
	J[117] -= x[44];
	J[260] = 1.;

   /*** derivatives for constraint 23 ***/

	J[122] = -x[42];
	J[108] = -x[45];
	J[263] = 1.;

   /*** derivatives for constraint 24 ***/

	J[127] = -x[43];
	J[113] = -x[46];
	J[266] = 1.;

   /*** derivatives for constraint 25 ***/

	J[132] = -x[44];
	J[118] = -x[47];
	J[269] = 1.;

   /*** derivatives for constraint 26 ***/

	J[123] = -x[45];
	J[123] -= x[45];
	J[272] = 1.;

   /*** derivatives for constraint 27 ***/

	J[128] = -x[46];
	J[128] -= x[46];
	J[275] = 1.;

   /*** derivatives for constraint 28 ***/

	J[133] = -x[47];
	J[133] -= x[47];
	J[278] = 1.;

   /*** derivatives for constraint 29 ***/

	J[136] = -x[48];
	J[136] -= x[48];
	J[281] = 1.;

   /*** derivatives for constraint 30 ***/

	J[141] = -x[49];
	J[141] -= x[49];
	J[284] = 1.;

   /*** derivatives for constraint 31 ***/

	J[146] = -x[50];
	J[146] -= x[50];
	J[287] = 1.;

   /*** derivatives for constraint 32 ***/

	J[151] = -x[48];
	J[137] = -x[51];
	J[290] = 1.;

   /*** derivatives for constraint 33 ***/

	J[156] = -x[49];
	J[142] = -x[52];
	J[293] = 1.;

   /*** derivatives for constraint 34 ***/

	J[161] = -x[50];
	J[147] = -x[53];
	J[296] = 1.;

   /*** derivatives for constraint 35 ***/

	J[166] = -x[48];
	J[138] = -x[54];
	J[299] = 1.;

   /*** derivatives for constraint 36 ***/

	J[171] = -x[49];
	J[143] = -x[55];
	J[302] = 1.;

   /*** derivatives for constraint 37 ***/

	J[176] = -x[50];
	J[148] = -x[56];
	J[305] = 1.;

   /*** derivatives for constraint 38 ***/

	J[152] = -x[51];
	J[152] -= x[51];
	J[308] = 1.;

   /*** derivatives for constraint 39 ***/

	J[157] = -x[52];
	J[157] -= x[52];
	J[311] = 1.;

   /*** derivatives for constraint 40 ***/

	J[162] = -x[53];
	J[162] -= x[53];
	J[314] = 1.;

   /*** derivatives for constraint 41 ***/

	J[167] = -x[51];
	J[153] = -x[54];
	J[317] = 1.;

   /*** derivatives for constraint 42 ***/

	J[172] = -x[52];
	J[158] = -x[55];
	J[320] = 1.;

   /*** derivatives for constraint 43 ***/

	J[177] = -x[53];
	J[163] = -x[56];
	J[323] = 1.;

   /*** derivatives for constraint 44 ***/

	J[168] = -x[54];
	J[168] -= x[54];
	J[326] = 1.;

   /*** derivatives for constraint 45 ***/

	J[173] = -x[55];
	J[173] -= x[55];
	J[329] = 1.;

   /*** derivatives for constraint 46 ***/

	J[178] = -x[56];
	J[178] -= x[56];
	J[332] = 1.;

   /*** derivatives for constraint 47 ***/

	J[220] = kall_ellipsoids_tc02b_pd[22];
	J[336] = -1.;

   /*** derivatives for constraint 48 ***/

	dv[0] = -kall_ellipsoids_tc02b_pd[42];
	dv[0] *= kall_ellipsoids_tc02b_pd[41];
	J[185] = dv[0]*x[17];
	J[34] = dv[0]*x[59];
	dv[1] = -kall_ellipsoids_tc02b_pd[42];
	dv[1] *= kall_ellipsoids_tc02b_pd[40];
	J[183] = dv[1]*x[14];
	J[28] = dv[1]*x[58];
	dv[2] = -kall_ellipsoids_tc02b_pd[42];
	dv[2] *= kall_ellipsoids_tc02b_pd[39];
	J[181] = dv[2]*x[11];
	J[22] = dv[2]*x[57];
	dv[3] = -kall_ellipsoids_tc02b_pd[42];
	dv[3] *= kall_ellipsoids_tc02b_pd[38];
	J[185] += dv[3]*x[16];
	J[32] = dv[3]*x[59];
	dv[4] = -kall_ellipsoids_tc02b_pd[42];
	dv[4] *= kall_ellipsoids_tc02b_pd[37];
	J[183] += dv[4]*x[13];
	J[26] = dv[4]*x[58];
	dv[5] = -kall_ellipsoids_tc02b_pd[42];
	dv[5] *= kall_ellipsoids_tc02b_pd[36];
	J[181] += dv[5]*x[10];
	J[20] = dv[5]*x[57];
	dv[6] = -kall_ellipsoids_tc02b_pd[42];
	dv[6] *= kall_ellipsoids_tc02b_pd[35];
	J[185] += dv[6]*x[15];
	J[30] = dv[6]*x[59];
	dv[7] = -kall_ellipsoids_tc02b_pd[42];
	dv[7] *= kall_ellipsoids_tc02b_pd[34];
	J[183] += dv[7]*x[12];
	J[24] = dv[7]*x[58];
	dv[8] = -kall_ellipsoids_tc02b_pd[42]*kall_ellipsoids_tc02b_pd[33];
	J[181] += dv[8]*x[9];
	J[18] = dv[8]*x[57];
	dv[9] = -kall_ellipsoids_tc02b_pd[32];
	dv[9] *= kall_ellipsoids_tc02b_pd[31];
	J[185] += dv[9]*x[8];
	J[16] = dv[9]*x[59];
	dv[10] = -kall_ellipsoids_tc02b_pd[32];
	dv[10] *= kall_ellipsoids_tc02b_pd[30];
	J[183] += dv[10]*x[5];
	J[10] = dv[10]*x[58];
	dv[11] = -kall_ellipsoids_tc02b_pd[32];
	dv[11] *= kall_ellipsoids_tc02b_pd[29];
	J[181] += dv[11]*x[2];
	J[4] = dv[11]*x[57];
	dv[12] = -kall_ellipsoids_tc02b_pd[32];
	dv[12] *= kall_ellipsoids_tc02b_pd[28];
	J[185] += dv[12]*x[7];
	J[14] = dv[12]*x[59];
	dv[13] = -kall_ellipsoids_tc02b_pd[32];
	dv[13] *= kall_ellipsoids_tc02b_pd[27];
	J[183] += dv[13]*x[4];
	J[8] = dv[13]*x[58];
	dv[14] = -kall_ellipsoids_tc02b_pd[32];
	dv[14] *= kall_ellipsoids_tc02b_pd[26];
	J[181] += dv[14]*x[1];
	J[2] = dv[14]*x[57];
	dv[15] = -kall_ellipsoids_tc02b_pd[32];
	dv[15] *= kall_ellipsoids_tc02b_pd[25];
	J[185] += dv[15]*x[6];
	J[12] = dv[15]*x[59];
	dv[16] = -kall_ellipsoids_tc02b_pd[32];
	dv[16] *= kall_ellipsoids_tc02b_pd[24];
	J[183] += dv[16]*x[3];
	J[6] = dv[16]*x[58];
	dv[17] = -kall_ellipsoids_tc02b_pd[32]*kall_ellipsoids_tc02b_pd[23];
	J[181] += dv[17]*x[0];
	J[0] = dv[17]*x[57];
	J[40] = x[59];
	J[185] += x[20];
	J[38] = x[58];
	J[183] += x[19];
	J[36] = x[57];
	J[181] += x[18];

   /*** derivatives for constraint 49 ***/

	J[228] = 1.;
	J[231] = 1.;
	J[234] = 1.;

   /*** derivatives for constraint 50 ***/

	J[237] = 1.;
	J[240] = 1.;
	J[243] = 1.;

   /*** derivatives for constraint 51 ***/

	J[246] = 1.;
	J[249] = 1.;
	J[252] = 1.;

   /*** derivatives for constraint 52 ***/

	J[255] = 1.;
	J[258] = 1.;
	J[261] = 1.;

   /*** derivatives for constraint 53 ***/

	J[264] = 1.;
	J[267] = 1.;
	J[270] = 1.;

   /*** derivatives for constraint 54 ***/

	J[273] = 1.;
	J[276] = 1.;
	J[279] = 1.;

   /*** derivatives for constraint 55 ***/

	J[282] = 1.;
	J[285] = 1.;
	J[288] = 1.;

   /*** derivatives for constraint 56 ***/

	J[291] = 1.;
	J[294] = 1.;
	J[297] = 1.;

   /*** derivatives for constraint 57 ***/

	J[300] = 1.;
	J[303] = 1.;
	J[306] = 1.;

   /*** derivatives for constraint 58 ***/

	J[309] = 1.;
	J[312] = 1.;
	J[315] = 1.;

   /*** derivatives for constraint 59 ***/

	J[318] = 1.;
	J[321] = 1.;
	J[324] = 1.;

   /*** derivatives for constraint 60 ***/

	J[327] = 1.;
	J[330] = 1.;
	J[333] = 1.;

   /*** derivatives for constraint 61 ***/

	J[44] = 1.;
	J[229] = -0.25;
	J[232] = -0.444444444444444;
	J[235] = -1.;

   /*** derivatives for constraint 62 ***/

	J[46] = 1.;
	J[238] = -0.25;
	J[241] = -0.444444444444444;
	J[244] = -1.;

   /*** derivatives for constraint 63 ***/

	J[49] = 1.;
	J[247] = -0.25;
	J[250] = -0.444444444444444;
	J[253] = -1.;

   /*** derivatives for constraint 64 ***/

	J[55] = 1.;
	J[256] = -0.25;
	J[259] = -0.444444444444444;
	J[262] = -1.;

   /*** derivatives for constraint 65 ***/

	J[57] = 1.;
	J[265] = -0.25;
	J[268] = -0.444444444444444;
	J[271] = -1.;

   /*** derivatives for constraint 66 ***/

	J[65] = 1.;
	J[274] = -0.25;
	J[277] = -0.444444444444444;
	J[280] = -1.;

   /*** derivatives for constraint 67 ***/

	J[68] = 1.;
	J[283] = -0.444444444444444;
	J[286] = -1.;
	J[289] = -2.04081632653061;

   /*** derivatives for constraint 68 ***/

	J[70] = 1.;
	J[292] = -0.444444444444444;
	J[295] = -1.;
	J[298] = -2.04081632653061;

   /*** derivatives for constraint 69 ***/

	J[73] = 1.;
	J[301] = -0.444444444444444;
	J[304] = -1.;
	J[307] = -2.04081632653061;

   /*** derivatives for constraint 70 ***/

	J[79] = 1.;
	J[310] = -0.444444444444444;
	J[313] = -1.;
	J[316] = -2.04081632653061;

   /*** derivatives for constraint 71 ***/

	J[81] = 1.;
	J[319] = -0.444444444444444;
	J[322] = -1.;
	J[325] = -2.04081632653061;

   /*** derivatives for constraint 72 ***/

	J[89] = 1.;
	J[328] = -0.444444444444444;
	J[331] = -1.;
	J[334] = -2.04081632653061;

   /*** derivatives for constraint 73 ***/

	J[47] = -1.;
	J[52] = 1.;

   /*** derivatives for constraint 74 ***/

	J[50] = -1.;
	J[60] = 1.;

   /*** derivatives for constraint 75 ***/

	J[58] = -1.;
	J[62] = 1.;

   /*** derivatives for constraint 76 ***/

	J[71] = -1.;
	J[76] = 1.;

   /*** derivatives for constraint 77 ***/

	J[74] = -1.;
	J[84] = 1.;

   /*** derivatives for constraint 78 ***/

	J[82] = -1.;
	J[86] = 1.;

   /*** derivatives for constraint 79 ***/

	J[205] = -1.;
	J[337] = 1.;

   /*** derivatives for constraint 80 ***/

	J[212] = -1.;
	J[342] = 1.;

   /*** derivatives for constraint 81 ***/

	J[221] = -1.;
	J[347] = 1.;

   /*** derivatives for constraint 82 ***/

	J[206] = -1.;
	J[352] = 1.;

   /*** derivatives for constraint 83 ***/

	J[213] = -1.;
	J[356] = 1.;

   /*** derivatives for constraint 84 ***/

	J[222] = -1.;
	J[360] = 1.;

   /*** derivatives for constraint 85 ***/

	J[187] = 3.;
	J[338] = -1.;
	J[364] = 1.;

   /*** derivatives for constraint 86 ***/

	J[190] = 3.;
	J[343] = -1.;
	J[365] = 1.;

   /*** derivatives for constraint 87 ***/

	J[193] = 3.;
	J[348] = -1.;
	J[366] = 1.;

   /*** derivatives for constraint 88 ***/

	J[196] = 1.05;
	J[353] = -1.;
	J[367] = 1.;

   /*** derivatives for constraint 89 ***/

	J[199] = 1.05;
	J[357] = -1.;
	J[368] = 1.;

   /*** derivatives for constraint 90 ***/

	J[202] = 1.05;
	J[361] = -1.;
	J[369] = 1.;

   /*** derivatives for constraint 91 ***/

	J[188] = -3.;
	J[339] = -1.;
	J[370] = 1.;

   /*** derivatives for constraint 92 ***/

	J[191] = -3.;
	J[344] = -1.;
	J[372] = 1.;

   /*** derivatives for constraint 93 ***/

	J[194] = -3.;
	J[349] = -1.;
	J[374] = 1.;

   /*** derivatives for constraint 94 ***/

	J[197] = -1.05;
	J[354] = -1.;
	J[376] = 1.;

   /*** derivatives for constraint 95 ***/

	J[200] = -1.05;
	J[358] = -1.;
	J[378] = 1.;

   /*** derivatives for constraint 96 ***/

	J[203] = -1.05;
	J[362] = -1.;
	J[380] = 1.;

   /*** derivatives for constraint 97 ***/

	J[207] = -1.;
	J[371] = 1.;

   /*** derivatives for constraint 98 ***/

	J[214] = -1.;
	J[373] = 1.;

   /*** derivatives for constraint 99 ***/

	J[223] = -1.;
	J[375] = 1.;

   /*** derivatives for constraint 100 ***/

	J[208] = -1.;
	J[377] = 1.;

   /*** derivatives for constraint 101 ***/

	J[215] = -1.;
	J[379] = 1.;

   /*** derivatives for constraint 102 ***/

	J[224] = -1.;
	J[381] = 1.;

   /*** derivatives for constraint 103 ***/

	J[209] = 1.;
	J[216] = -1.;

   /*** derivatives for constraint 104 ***/

	J[217] = 1.;
	J[225] = -1.;

   /*** derivatives for constraint 105 ***/

	J[210] = -0.5;
	J[340] = 1.;

   /*** derivatives for constraint 106 ***/

	J[218] = -0.5;
	J[345] = 1.;

   /*** derivatives for constraint 107 ***/

	J[226] = -0.5;
	J[350] = 1.;

   /*** derivatives for constraint 108 ***/

	J[37] = 1.;
	J[341] = -1.;
	J[355] = 1.;

   /*** derivatives for constraint 109 ***/

	J[39] = 1.;
	J[346] = -1.;
	J[359] = 1.;

   /*** derivatives for constraint 110 ***/

	J[41] = 1.;
	J[351] = -1.;
	J[363] = 1.;

   /*** derivatives for constraint 111 ***/

	J[1] = 1.;
	J[94] = -2.;

   /*** derivatives for constraint 112 ***/

	J[3] = 1.;
	J[99] = -1.5;

   /*** derivatives for constraint 113 ***/

	J[5] = 1.;
	J[104] = -1.;

   /*** derivatives for constraint 114 ***/

	J[7] = 1.;
	J[109] = -2.;

   /*** derivatives for constraint 115 ***/

	J[9] = 1.;
	J[114] = -1.5;

   /*** derivatives for constraint 116 ***/

	J[11] = 1.;
	J[119] = -1.;

   /*** derivatives for constraint 117 ***/

	J[13] = 1.;
	J[124] = -2.;

   /*** derivatives for constraint 118 ***/

	J[15] = 1.;
	J[129] = -1.5;

   /*** derivatives for constraint 119 ***/

	J[17] = 1.;
	J[134] = -1.;

   /*** derivatives for constraint 120 ***/

	J[19] = 1.;
	J[139] = -1.5;

   /*** derivatives for constraint 121 ***/

	J[21] = 1.;
	J[144] = -1.;

   /*** derivatives for constraint 122 ***/

	J[23] = 1.;
	J[149] = -0.7;

   /*** derivatives for constraint 123 ***/

	J[25] = 1.;
	J[154] = -1.5;

   /*** derivatives for constraint 124 ***/

	J[27] = 1.;
	J[159] = -1.;

   /*** derivatives for constraint 125 ***/

	J[29] = 1.;
	J[164] = -0.7;

   /*** derivatives for constraint 126 ***/

	J[31] = 1.;
	J[169] = -1.5;

   /*** derivatives for constraint 127 ***/

	J[33] = 1.;
	J[174] = -1.;

   /*** derivatives for constraint 128 ***/

	J[35] = 1.;
	J[179] = -0.7;
	}
}
#ifdef __cplusplus
	}
#endif
