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
 fint syn05m02hfsg_auxcom_[1] = { 6 /* nlc */ };
 fint syn05m02hfsg_funcom_[440] = {
	104 /* nvar */,
	1 /* nobj */,
	151 /* ncon */,
	329 /* nzc */,
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
	22,
	25,
	28,
	31,
	34,
	37,
	49,
	60,
	72,
	83,
	92,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	114,
	116,
	118,
	120,
	122,
	124,
	126,
	128,
	130,
	132,
	133,
	134,
	136,
	138,
	140,
	142,
	144,
	146,
	148,
	150,
	151,
	152,
	153,
	154,
	155,
	156,
	157,
	158,
	161,
	164,
	167,
	170,
	173,
	176,
	179,
	182,
	185,
	188,
	191,
	194,
	197,
	200,
	203,
	206,
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
	246,
	250,
	253,
	256,
	264,
	271,
	281,
	290,
	294,
	298,
	302,
	306,
	310,
	314,
	318,
	322,
	326,
	330,

	/* rownos */
	1,
	19,
	23,
	2,
	20,
	24,
	3,
	35,
	39,
	4,
	36,
	40,
	1,
	21,
	27,
	2,
	22,
	28,
	3,
	37,
	43,
	4,
	38,
	44,
	5,
	69,
	73,
	6,
	70,
	74,
	5,
	71,
	77,
	6,
	72,
	78,
	1,
	23,
	25,
	27,
	29,
	119,
	134,
	135,
	144,
	146,
	148,
	150,
	2,
	24,
	26,
	28,
	30,
	119,
	135,
	145,
	147,
	149,
	151,
	3,
	39,
	41,
	43,
	45,
	120,
	136,
	137,
	144,
	146,
	148,
	150,
	4,
	40,
	42,
	44,
	46,
	120,
	137,
	145,
	147,
	149,
	151,
	5,
	73,
	75,
	77,
	79,
	122,
	140,
	141,
	148,
	6,
	74,
	76,
	78,
	80,
	122,
	141,
	149,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	7,
	8,
	7,
	19,
	8,
	20,
	7,
	35,
	8,
	36,
	9,
	21,
	10,
	22,
	9,
	37,
	10,
	38,
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
	53,
	14,
	54,
	13,
	69,
	14,
	70,
	13,
	91,
	14,
	92,
	93,
	94,
	55,
	56,
	71,
	72,
	95,
	96,
	15,
	19,
	25,
	16,
	20,
	26,
	31,
	35,
	41,
	32,
	36,
	42,
	17,
	21,
	29,
	18,
	22,
	30,
	33,
	37,
	45,
	34,
	38,
	46,
	47,
	53,
	57,
	48,
	54,
	58,
	49,
	53,
	59,
	50,
	54,
	60,
	65,
	69,
	75,
	66,
	70,
	76,
	81,
	91,
	97,
	82,
	92,
	98,
	85,
	91,
	99,
	86,
	92,
	100,
	83,
	93,
	101,
	84,
	94,
	102,
	87,
	93,
	103,
	88,
	94,
	104,
	47,
	55,
	61,
	48,
	56,
	62,
	51,
	55,
	63,
	52,
	56,
	64,
	67,
	71,
	79,
	68,
	72,
	80,
	81,
	83,
	95,
	105,
	82,
	84,
	96,
	106,
	89,
	95,
	107,
	90,
	96,
	108,
	57,
	59,
	61,
	63,
	121,
	138,
	139,
	146,
	58,
	60,
	62,
	64,
	121,
	139,
	147,
	97,
	99,
	101,
	103,
	105,
	107,
	123,
	142,
	143,
	150,
	98,
	100,
	102,
	104,
	106,
	108,
	123,
	143,
	151,
	109,
	124,
	125,
	134,
	110,
	124,
	125,
	135,
	111,
	126,
	127,
	136,
	112,
	126,
	127,
	137,
	113,
	128,
	129,
	138,
	114,
	128,
	129,
	139,
	115,
	130,
	131,
	140,
	116,
	130,
	131,
	141,
	117,
	132,
	133,
	142,
	118,
	132,
	133,
	143 };

 real syn05m02hfsg_boundc_[1+208+302] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		40.,
		-1.7e308,
		40.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		3.71357206670431,
		-1.7e308,
		3.71357206670431,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		40.,
		-1.7e308,
		40.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		4.45628648004517,
		-1.7e308,
		4.45628648004517,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		4.45628648004517,
		-1.7e308,
		4.45628648004517,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		3.34221486003388,
		-1.7e308,
		3.34221486003388,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		4.45628648004517,
		-1.7e308,
		4.45628648004517,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		2.54515263975353,
		-1.7e308,
		2.54515263975353,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		4.45628648004517,
		-1.7e308,
		4.45628648004517,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		30.,
		-1.7e308,
		30.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		15.,
		-1.7e308,
		15.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real syn05m02hfsg_x0comn_[104] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real syn05m02hfsg_pd[46];
static real syn05m02hfsg_old_x[104];
static int syn05m02hfsg_xkind = -1;

 static int
syn05m02hfsg_xcheck(real *x)
{
	real *x1 = syn05m02hfsg_old_x, *xe = x + 104;
	errno = 0;
	if (syn05m02hfsg_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn05m02hfsg_xkind = 0;
	return 1;
	}
 real
syn05m02hfsg_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn05m02hfsg_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[28];
	rv += -x[29];
	rv += 5.*x[40];
	rv += 10.*x[41];
	rv += -2.*x[50];
	rv += -x[51];
	rv += 80.*x[52];
	rv += 90.*x[53];
	rv += 285.*x[54];
	rv += 390.*x[55];
	rv += 290.*x[56];
	rv += 405.*x[57];
	rv += -5.*x[94];
	rv += -4.*x[95];
	rv += -8.*x[96];
	rv += -7.*x[97];
	rv += -6.*x[98];
	rv += -9.*x[99];
	rv += -10.*x[100];
	rv += -9.*x[101];
	rv += -6.*x[102];
	rv += -10.*x[103];
	;}

	if (wantfg & 2) {
	g[28] = -1.;
	g[29] = -1.;
	g[40] = 5.;
	g[41] = 10.;
	g[50] = -2.;
	g[51] = -1.;
	g[52] = 80.;
	g[53] = 90.;
	g[54] = 285.;
	g[55] = 390.;
	g[56] = 290.;
	g[57] = 405.;
	g[94] = -5.;
	g[95] = -4.;
	g[96] = -8.;
	g[97] = -7.;
	g[98] = -6.;
	g[99] = -9.;
	g[100] = -10.;
	g[101] = -9.;
	g[102] = -6.;
	g[103] = -10.;
	}

	return rv;
}

 void
syn05m02hfsg_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (syn05m02hfsg_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.999 * x[12];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[4] / v[1];
	syn05m02hfsg_pd[0] = 1. / v[1];
	syn05m02hfsg_pd[1] = -v[0] * syn05m02hfsg_pd[0];
	v[1] = 0.999 * x[12];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[0] / v[2];
	syn05m02hfsg_pd[2] = 1. / v[2];
	syn05m02hfsg_pd[3] = -v[1] * syn05m02hfsg_pd[2];
	v[2] = v[1] + 1.;
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn05m02hfsg_pd[4] = 1. / v[2];
	syn05m02hfsg_pd[6] = v[0] - v[1];
	v[1] = 0.999 * x[12];
	syn05m02hfsg_pd[5] = v[1] + 0.001;
	v[1] = syn05m02hfsg_pd[6] * syn05m02hfsg_pd[5];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = 0.999 * x[13];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[5] / v[1];
	syn05m02hfsg_pd[7] = 1. / v[1];
	syn05m02hfsg_pd[8] = -v[0] * syn05m02hfsg_pd[7];
	v[1] = 0.999 * x[13];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[1] / v[2];
	syn05m02hfsg_pd[9] = 1. / v[2];
	syn05m02hfsg_pd[10] = -v[1] * syn05m02hfsg_pd[9];
	v[2] = v[1] + 1.;
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn05m02hfsg_pd[11] = 1. / v[2];
	syn05m02hfsg_pd[13] = v[0] - v[1];
	v[1] = 0.999 * x[13];
	syn05m02hfsg_pd[12] = v[1] + 0.001;
	v[1] = syn05m02hfsg_pd[13] * syn05m02hfsg_pd[12];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = 0.999 * x[14];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[6] / v[1];
	syn05m02hfsg_pd[14] = 1. / v[1];
	syn05m02hfsg_pd[15] = -v[0] * syn05m02hfsg_pd[14];
	v[1] = 0.999 * x[14];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[2] / v[2];
	syn05m02hfsg_pd[16] = 1. / v[2];
	syn05m02hfsg_pd[17] = -v[1] * syn05m02hfsg_pd[16];
	v[2] = v[1] + 1.;
	syn05m02hfsg_pd[18] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn05m02hfsg_pd[19] = 1. / v[2];
	v[2] = -1.2 * syn05m02hfsg_pd[18];
	syn05m02hfsg_pd[21] = v[0] + v[2];
	v[2] = 0.999 * x[14];
	syn05m02hfsg_pd[20] = v[2] + 0.001;
	v[2] = syn05m02hfsg_pd[21] * syn05m02hfsg_pd[20];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = 0.999 * x[15];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[7] / v[1];
	syn05m02hfsg_pd[22] = 1. / v[1];
	syn05m02hfsg_pd[23] = -v[0] * syn05m02hfsg_pd[22];
	v[1] = 0.999 * x[15];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[3] / v[2];
	syn05m02hfsg_pd[24] = 1. / v[2];
	syn05m02hfsg_pd[25] = -v[1] * syn05m02hfsg_pd[24];
	v[2] = v[1] + 1.;
	syn05m02hfsg_pd[26] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn05m02hfsg_pd[27] = 1. / v[2];
	v[2] = -1.2 * syn05m02hfsg_pd[26];
	syn05m02hfsg_pd[29] = v[0] + v[2];
	v[2] = 0.999 * x[15];
	syn05m02hfsg_pd[28] = v[2] + 0.001;
	v[2] = syn05m02hfsg_pd[29] * syn05m02hfsg_pd[28];
	c[3] = v[2];

  /***  constraint 5  ***/

	v[0] = 0.999 * x[16];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[10] / v[1];
	syn05m02hfsg_pd[30] = 1. / v[1];
	syn05m02hfsg_pd[31] = -v[0] * syn05m02hfsg_pd[30];
	v[1] = 0.999 * x[16];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[8] / v[2];
	syn05m02hfsg_pd[32] = 1. / v[2];
	syn05m02hfsg_pd[33] = -v[1] * syn05m02hfsg_pd[32];
	v[2] = v[1] + 1.;
	syn05m02hfsg_pd[34] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn05m02hfsg_pd[35] = 1. / v[2];
	v[2] = -1.5 * syn05m02hfsg_pd[34];
	syn05m02hfsg_pd[37] = v[0] + v[2];
	v[2] = 0.999 * x[16];
	syn05m02hfsg_pd[36] = v[2] + 0.001;
	v[2] = syn05m02hfsg_pd[37] * syn05m02hfsg_pd[36];
	c[4] = v[2];

  /***  constraint 6  ***/

	v[0] = 0.999 * x[17];
	v[1] = v[0] + 0.001;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[11] / v[1];
	syn05m02hfsg_pd[38] = 1. / v[1];
	syn05m02hfsg_pd[39] = -v[0] * syn05m02hfsg_pd[38];
	v[1] = 0.999 * x[17];
	v[2] = v[1] + 0.001;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[9] / v[2];
	syn05m02hfsg_pd[40] = 1. / v[2];
	syn05m02hfsg_pd[41] = -v[1] * syn05m02hfsg_pd[40];
	v[2] = v[1] + 1.;
	syn05m02hfsg_pd[42] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	syn05m02hfsg_pd[43] = 1. / v[2];
	v[2] = -1.5 * syn05m02hfsg_pd[42];
	syn05m02hfsg_pd[45] = v[0] + v[2];
	v[2] = 0.999 * x[17];
	syn05m02hfsg_pd[44] = v[2] + 0.001;
	v[2] = syn05m02hfsg_pd[45] * syn05m02hfsg_pd[44];
	c[5] = v[2];

  /***  constraint 7  ***/

	t1 = x[28];
	t1 += -x[30];
	t1 += -x[32];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[29];
	t1 += -x[31];
	t1 += -x[33];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[34];
	t1 += -x[36];
	t1 += x[38];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[35];
	t1 += -x[37];
	t1 += x[39];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[38];
	t1 += -x[40];
	t1 += -x[42];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[39];
	t1 += -x[41];
	t1 += -x[43];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[42];
	t1 += -x[44];
	t1 += -x[46];
	t1 += -x[48];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[43];
	t1 += -x[45];
	t1 += -x[47];
	t1 += -x[49];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[58];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[59];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[62];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[63];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[0];
	t1 += x[30];
	t1 += -x[58];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[1];
	t1 += x[31];
	t1 += -x[59];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[4];
	t1 += x[34];
	t1 += -x[62];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[5];
	t1 += x[35];
	t1 += -x[63];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[0];
	t1 += -40.*x[12];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[1];
	t1 += -40.*x[13];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = 40.*x[12];
	t1 += x[58];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = 40.*x[13];
	t1 += x[59];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[4];
	t1 += -3.71357206670431*x[12];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[5];
	t1 += -3.71357206670431*x[13];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = 3.71357206670431*x[12];
	t1 += x[62];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = 3.71357206670431*x[13];
	t1 += x[63];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[60];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[61];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[64];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[65];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[2];
	t1 += x[32];
	t1 += -x[60];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[3];
	t1 += x[33];
	t1 += -x[61];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[6];
	t1 += x[36];
	t1 += -x[64];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[7];
	t1 += x[37];
	t1 += -x[65];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[2];
	t1 += -40.*x[14];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[3];
	t1 += -40.*x[15];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = 40.*x[14];
	t1 += x[60];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = 40.*x[15];
	t1 += x[61];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[6];
	t1 += -4.45628648004517*x[14];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[7];
	t1 += -4.45628648004517*x[15];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = 4.45628648004517*x[14];
	t1 += x[64];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = 4.45628648004517*x[15];
	t1 += x[65];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -0.75*x[66];
	t1 += x[80];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -0.75*x[67];
	t1 += x[81];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[68];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[69];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[82];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[83];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[44];
	t1 += -x[66];
	t1 += -x[68];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[45];
	t1 += -x[67];
	t1 += -x[69];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[52];
	t1 += -x[80];
	t1 += -x[82];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[53];
	t1 += -x[81];
	t1 += -x[83];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[66];
	t1 += -4.45628648004517*x[90];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[67];
	t1 += -4.45628648004517*x[91];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[68];
	t1 += 4.45628648004517*x[90];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[69];
	t1 += 4.45628648004517*x[91];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[80];
	t1 += -3.34221486003388*x[90];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[81];
	t1 += -3.34221486003388*x[91];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[82];
	t1 += 3.34221486003388*x[90];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[83];
	t1 += 3.34221486003388*x[91];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[70];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[71];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[84];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[85];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[8];
	t1 += x[46];
	t1 += -x[70];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[9];
	t1 += x[47];
	t1 += -x[71];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[10];
	t1 += x[54];
	t1 += -x[84];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[11];
	t1 += x[55];
	t1 += -x[85];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[8];
	t1 += -4.45628648004517*x[16];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[9];
	t1 += -4.45628648004517*x[17];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = 4.45628648004517*x[16];
	t1 += x[70];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = 4.45628648004517*x[17];
	t1 += x[71];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[10];
	t1 += -2.54515263975353*x[16];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[11];
	t1 += -2.54515263975353*x[17];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = 2.54515263975353*x[16];
	t1 += x[84];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = 2.54515263975353*x[17];
	t1 += x[85];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[72];
	t1 += x[86];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[73];
	t1 += x[87];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -0.5*x[76];
	t1 += x[86];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -0.5*x[77];
	t1 += x[87];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[74];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[75];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[78];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[79];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[88];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[89];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[48];
	t1 += -x[72];
	t1 += -x[74];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[49];
	t1 += -x[73];
	t1 += -x[75];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[50];
	t1 += -x[76];
	t1 += -x[78];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[51];
	t1 += -x[77];
	t1 += -x[79];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[56];
	t1 += -x[86];
	t1 += -x[88];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[57];
	t1 += -x[87];
	t1 += -x[89];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[72];
	t1 += -4.45628648004517*x[92];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[73];
	t1 += -4.45628648004517*x[93];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[74];
	t1 += 4.45628648004517*x[92];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[75];
	t1 += 4.45628648004517*x[93];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[76];
	t1 += -30.*x[92];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[77];
	t1 += -30.*x[93];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[78];
	t1 += 30.*x[92];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[79];
	t1 += 30.*x[93];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[86];
	t1 += -15.*x[92];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[87];
	t1 += -15.*x[93];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[88];
	t1 += 15.*x[92];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[89];
	t1 += 15.*x[93];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[18];
	t1 += 5.*x[94];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[19];
	t1 += 4.*x[95];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = x[20];
	t1 += 8.*x[96];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = x[21];
	t1 += 7.*x[97];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = x[22];
	t1 += 6.*x[98];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = x[23];
	t1 += 9.*x[99];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = x[24];
	t1 += 10.*x[100];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = x[25];
	t1 += 9.*x[101];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = x[26];
	t1 += 6.*x[102];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = x[27];
	t1 += 10.*x[103];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = x[12];
	t1 += -x[13];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = x[14];
	t1 += -x[15];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[90];
	t1 += -x[91];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[16];
	t1 += -x[17];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[92];
	t1 += -x[93];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[94];
	t1 += x[95];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[94];
	t1 += x[95];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[96];
	t1 += x[97];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[96];
	t1 += x[97];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[98];
	t1 += x[99];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[98];
	t1 += x[99];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[100];
	t1 += x[101];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[100];
	t1 += x[101];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[102];
	t1 += x[103];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[102];
	t1 += x[103];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[12];
	t1 += -x[94];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = -x[12];
	t1 += x[13];
	t1 += -x[95];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = x[14];
	t1 += -x[96];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = -x[14];
	t1 += x[15];
	t1 += -x[97];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = x[90];
	t1 += -x[98];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = -x[90];
	t1 += x[91];
	t1 += -x[99];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = x[16];
	t1 += -x[100];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = -x[16];
	t1 += x[17];
	t1 += -x[101];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = x[92];
	t1 += -x[102];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = -x[92];
	t1 += x[93];
	t1 += -x[103];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = x[12];
	t1 += x[14];
	c[143] = t1;

  /***  constraint 145  ***/

	t1 = x[13];
	t1 += x[15];
	c[144] = t1;

  /***  constraint 146  ***/

	t1 = x[12];
	t1 += x[14];
	t1 += -x[90];
	c[145] = t1;

  /***  constraint 147  ***/

	t1 = x[13];
	t1 += x[15];
	t1 += -x[91];
	c[146] = t1;

  /***  constraint 148  ***/

	t1 = x[12];
	t1 += x[14];
	t1 += -x[16];
	c[147] = t1;

  /***  constraint 149  ***/

	t1 = x[13];
	t1 += x[15];
	t1 += -x[17];
	c[148] = t1;

  /***  constraint 150  ***/

	t1 = x[12];
	t1 += x[14];
	t1 += -x[92];
	c[149] = t1;

  /***  constraint 151  ***/

	t1 = x[13];
	t1 += x[15];
	t1 += -x[93];
	c[150] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[36] = syn05m02hfsg_pd[6]*0.999;
	dv[0] = -syn05m02hfsg_pd[5];
	dv[0] *= syn05m02hfsg_pd[4];
	dv[1] = dv[0]*syn05m02hfsg_pd[3];
	J[0] = dv[0]*syn05m02hfsg_pd[2];
	J[36] += dv[1]*0.999;
	dv[2] = syn05m02hfsg_pd[5]*syn05m02hfsg_pd[1];
	J[12] = syn05m02hfsg_pd[5]*syn05m02hfsg_pd[0];
	J[36] += dv[2]*0.999;

   /*** derivatives for constraint 2 ***/

	J[48] = syn05m02hfsg_pd[13]*0.999;
	dv[0] = -syn05m02hfsg_pd[12];
	dv[0] *= syn05m02hfsg_pd[11];
	dv[1] = dv[0]*syn05m02hfsg_pd[10];
	J[3] = dv[0]*syn05m02hfsg_pd[9];
	J[48] += dv[1]*0.999;
	dv[2] = syn05m02hfsg_pd[12]*syn05m02hfsg_pd[8];
	J[15] = syn05m02hfsg_pd[12]*syn05m02hfsg_pd[7];
	J[48] += dv[2]*0.999;

   /*** derivatives for constraint 3 ***/

	J[59] = syn05m02hfsg_pd[21]*0.999;
	dv[0] = syn05m02hfsg_pd[20];
	dv[0] = -dv[0]*1.2;
	dv[0] *= syn05m02hfsg_pd[19];
	dv[1] = dv[0]*syn05m02hfsg_pd[17];
	J[6] = dv[0]*syn05m02hfsg_pd[16];
	J[59] += dv[1]*0.999;
	dv[2] = syn05m02hfsg_pd[20]*syn05m02hfsg_pd[15];
	J[18] = syn05m02hfsg_pd[20]*syn05m02hfsg_pd[14];
	J[59] += dv[2]*0.999;

   /*** derivatives for constraint 4 ***/

	J[71] = syn05m02hfsg_pd[29]*0.999;
	dv[0] = syn05m02hfsg_pd[28];
	dv[0] = -dv[0]*1.2;
	dv[0] *= syn05m02hfsg_pd[27];
	dv[1] = dv[0]*syn05m02hfsg_pd[25];
	J[9] = dv[0]*syn05m02hfsg_pd[24];
	J[71] += dv[1]*0.999;
	dv[2] = syn05m02hfsg_pd[28]*syn05m02hfsg_pd[23];
	J[21] = syn05m02hfsg_pd[28]*syn05m02hfsg_pd[22];
	J[71] += dv[2]*0.999;

   /*** derivatives for constraint 5 ***/

	J[82] = syn05m02hfsg_pd[37]*0.999;
	dv[0] = syn05m02hfsg_pd[36];
	dv[0] = -dv[0]*1.5;
	dv[0] *= syn05m02hfsg_pd[35];
	dv[1] = dv[0]*syn05m02hfsg_pd[33];
	J[24] = dv[0]*syn05m02hfsg_pd[32];
	J[82] += dv[1]*0.999;
	dv[2] = syn05m02hfsg_pd[36]*syn05m02hfsg_pd[31];
	J[30] = syn05m02hfsg_pd[36]*syn05m02hfsg_pd[30];
	J[82] += dv[2]*0.999;

   /*** derivatives for constraint 6 ***/

	J[91] = syn05m02hfsg_pd[45]*0.999;
	dv[0] = syn05m02hfsg_pd[44];
	dv[0] = -dv[0]*1.5;
	dv[0] *= syn05m02hfsg_pd[43];
	dv[1] = dv[0]*syn05m02hfsg_pd[41];
	J[27] = dv[0]*syn05m02hfsg_pd[40];
	J[91] += dv[1]*0.999;
	dv[2] = syn05m02hfsg_pd[44]*syn05m02hfsg_pd[39];
	J[33] = syn05m02hfsg_pd[44]*syn05m02hfsg_pd[38];
	J[91] += dv[2]*0.999;

   /*** derivatives for constraint 7 ***/

	J[109] = 1.;
	J[111] = -1.;
	J[115] = -1.;

   /*** derivatives for constraint 8 ***/

	J[110] = 1.;
	J[113] = -1.;
	J[117] = -1.;

   /*** derivatives for constraint 9 ***/

	J[119] = -1.;
	J[123] = -1.;
	J[127] = 1.;

   /*** derivatives for constraint 10 ***/

	J[121] = -1.;
	J[125] = -1.;
	J[129] = 1.;

   /*** derivatives for constraint 11 ***/

	J[128] = 1.;
	J[131] = -1.;
	J[133] = -1.;

   /*** derivatives for constraint 12 ***/

	J[130] = 1.;
	J[132] = -1.;
	J[135] = -1.;

   /*** derivatives for constraint 13 ***/

	J[134] = 1.;
	J[137] = -1.;
	J[141] = -1.;
	J[145] = -1.;

   /*** derivatives for constraint 14 ***/

	J[136] = 1.;
	J[139] = -1.;
	J[143] = -1.;
	J[147] = -1.;

   /*** derivatives for constraint 15 ***/

	J[157] = 1.;

   /*** derivatives for constraint 16 ***/

	J[160] = 1.;

   /*** derivatives for constraint 17 ***/

	J[169] = 1.;

   /*** derivatives for constraint 18 ***/

	J[172] = 1.;

   /*** derivatives for constraint 19 ***/

	J[1] = -1.;
	J[112] = 1.;
	J[158] = -1.;

   /*** derivatives for constraint 20 ***/

	J[4] = -1.;
	J[114] = 1.;
	J[161] = -1.;

   /*** derivatives for constraint 21 ***/

	J[13] = -1.;
	J[120] = 1.;
	J[170] = -1.;

   /*** derivatives for constraint 22 ***/

	J[16] = -1.;
	J[122] = 1.;
	J[173] = -1.;

   /*** derivatives for constraint 23 ***/

	J[2] = 1.;
	J[37] = -40.;

   /*** derivatives for constraint 24 ***/

	J[5] = 1.;
	J[49] = -40.;

   /*** derivatives for constraint 25 ***/

	J[38] = 40.;
	J[159] = 1.;

   /*** derivatives for constraint 26 ***/

	J[50] = 40.;
	J[162] = 1.;

   /*** derivatives for constraint 27 ***/

	J[14] = 1.;
	J[39] = -3.71357206670431;

   /*** derivatives for constraint 28 ***/

	J[17] = 1.;
	J[51] = -3.71357206670431;

   /*** derivatives for constraint 29 ***/

	J[40] = 3.71357206670431;
	J[171] = 1.;

   /*** derivatives for constraint 30 ***/

	J[52] = 3.71357206670431;
	J[174] = 1.;

   /*** derivatives for constraint 31 ***/

	J[163] = 1.;

   /*** derivatives for constraint 32 ***/

	J[166] = 1.;

   /*** derivatives for constraint 33 ***/

	J[175] = 1.;

   /*** derivatives for constraint 34 ***/

	J[178] = 1.;

   /*** derivatives for constraint 35 ***/

	J[7] = -1.;
	J[116] = 1.;
	J[164] = -1.;

   /*** derivatives for constraint 36 ***/

	J[10] = -1.;
	J[118] = 1.;
	J[167] = -1.;

   /*** derivatives for constraint 37 ***/

	J[19] = -1.;
	J[124] = 1.;
	J[176] = -1.;

   /*** derivatives for constraint 38 ***/

	J[22] = -1.;
	J[126] = 1.;
	J[179] = -1.;

   /*** derivatives for constraint 39 ***/

	J[8] = 1.;
	J[60] = -40.;

   /*** derivatives for constraint 40 ***/

	J[11] = 1.;
	J[72] = -40.;

   /*** derivatives for constraint 41 ***/

	J[61] = 40.;
	J[165] = 1.;

   /*** derivatives for constraint 42 ***/

	J[73] = 40.;
	J[168] = 1.;

   /*** derivatives for constraint 43 ***/

	J[20] = 1.;
	J[62] = -4.45628648004517;

   /*** derivatives for constraint 44 ***/

	J[23] = 1.;
	J[74] = -4.45628648004517;

   /*** derivatives for constraint 45 ***/

	J[63] = 4.45628648004517;
	J[177] = 1.;

   /*** derivatives for constraint 46 ***/

	J[75] = 4.45628648004517;
	J[180] = 1.;

   /*** derivatives for constraint 47 ***/

	J[181] = -0.75;
	J[223] = 1.;

   /*** derivatives for constraint 48 ***/

	J[184] = -0.75;
	J[226] = 1.;

   /*** derivatives for constraint 49 ***/

	J[187] = 1.;

   /*** derivatives for constraint 50 ***/

	J[190] = 1.;

   /*** derivatives for constraint 51 ***/

	J[229] = 1.;

   /*** derivatives for constraint 52 ***/

	J[232] = 1.;

   /*** derivatives for constraint 53 ***/

	J[138] = 1.;
	J[182] = -1.;
	J[188] = -1.;

   /*** derivatives for constraint 54 ***/

	J[140] = 1.;
	J[185] = -1.;
	J[191] = -1.;

   /*** derivatives for constraint 55 ***/

	J[151] = 1.;
	J[224] = -1.;
	J[230] = -1.;

   /*** derivatives for constraint 56 ***/

	J[152] = 1.;
	J[227] = -1.;
	J[233] = -1.;

   /*** derivatives for constraint 57 ***/

	J[183] = 1.;
	J[255] = -4.45628648004517;

   /*** derivatives for constraint 58 ***/

	J[186] = 1.;
	J[263] = -4.45628648004517;

   /*** derivatives for constraint 59 ***/

	J[189] = 1.;
	J[256] = 4.45628648004517;

   /*** derivatives for constraint 60 ***/

	J[192] = 1.;
	J[264] = 4.45628648004517;

   /*** derivatives for constraint 61 ***/

	J[225] = 1.;
	J[257] = -3.34221486003388;

   /*** derivatives for constraint 62 ***/

	J[228] = 1.;
	J[265] = -3.34221486003388;

   /*** derivatives for constraint 63 ***/

	J[231] = 1.;
	J[258] = 3.34221486003388;

   /*** derivatives for constraint 64 ***/

	J[234] = 1.;
	J[266] = 3.34221486003388;

   /*** derivatives for constraint 65 ***/

	J[193] = 1.;

   /*** derivatives for constraint 66 ***/

	J[196] = 1.;

   /*** derivatives for constraint 67 ***/

	J[235] = 1.;

   /*** derivatives for constraint 68 ***/

	J[238] = 1.;

   /*** derivatives for constraint 69 ***/

	J[25] = -1.;
	J[142] = 1.;
	J[194] = -1.;

   /*** derivatives for constraint 70 ***/

	J[28] = -1.;
	J[144] = 1.;
	J[197] = -1.;

   /*** derivatives for constraint 71 ***/

	J[31] = -1.;
	J[153] = 1.;
	J[236] = -1.;

   /*** derivatives for constraint 72 ***/

	J[34] = -1.;
	J[154] = 1.;
	J[239] = -1.;

   /*** derivatives for constraint 73 ***/

	J[26] = 1.;
	J[83] = -4.45628648004517;

   /*** derivatives for constraint 74 ***/

	J[29] = 1.;
	J[92] = -4.45628648004517;

   /*** derivatives for constraint 75 ***/

	J[84] = 4.45628648004517;
	J[195] = 1.;

   /*** derivatives for constraint 76 ***/

	J[93] = 4.45628648004517;
	J[198] = 1.;

   /*** derivatives for constraint 77 ***/

	J[32] = 1.;
	J[85] = -2.54515263975353;

   /*** derivatives for constraint 78 ***/

	J[35] = 1.;
	J[94] = -2.54515263975353;

   /*** derivatives for constraint 79 ***/

	J[86] = 2.54515263975353;
	J[237] = 1.;

   /*** derivatives for constraint 80 ***/

	J[95] = 2.54515263975353;
	J[240] = 1.;

   /*** derivatives for constraint 81 ***/

	J[199] = -1.;
	J[241] = 1.;

   /*** derivatives for constraint 82 ***/

	J[202] = -1.;
	J[245] = 1.;

   /*** derivatives for constraint 83 ***/

	J[211] = -0.5;
	J[242] = 1.;

   /*** derivatives for constraint 84 ***/

	J[214] = -0.5;
	J[246] = 1.;

   /*** derivatives for constraint 85 ***/

	J[205] = 1.;

   /*** derivatives for constraint 86 ***/

	J[208] = 1.;

   /*** derivatives for constraint 87 ***/

	J[217] = 1.;

   /*** derivatives for constraint 88 ***/

	J[220] = 1.;

   /*** derivatives for constraint 89 ***/

	J[249] = 1.;

   /*** derivatives for constraint 90 ***/

	J[252] = 1.;

   /*** derivatives for constraint 91 ***/

	J[146] = 1.;
	J[200] = -1.;
	J[206] = -1.;

   /*** derivatives for constraint 92 ***/

	J[148] = 1.;
	J[203] = -1.;
	J[209] = -1.;

   /*** derivatives for constraint 93 ***/

	J[149] = 1.;
	J[212] = -1.;
	J[218] = -1.;

   /*** derivatives for constraint 94 ***/

	J[150] = 1.;
	J[215] = -1.;
	J[221] = -1.;

   /*** derivatives for constraint 95 ***/

	J[155] = 1.;
	J[243] = -1.;
	J[250] = -1.;

   /*** derivatives for constraint 96 ***/

	J[156] = 1.;
	J[247] = -1.;
	J[253] = -1.;

   /*** derivatives for constraint 97 ***/

	J[201] = 1.;
	J[270] = -4.45628648004517;

   /*** derivatives for constraint 98 ***/

	J[204] = 1.;
	J[280] = -4.45628648004517;

   /*** derivatives for constraint 99 ***/

	J[207] = 1.;
	J[271] = 4.45628648004517;

   /*** derivatives for constraint 100 ***/

	J[210] = 1.;
	J[281] = 4.45628648004517;

   /*** derivatives for constraint 101 ***/

	J[213] = 1.;
	J[272] = -30.;

   /*** derivatives for constraint 102 ***/

	J[216] = 1.;
	J[282] = -30.;

   /*** derivatives for constraint 103 ***/

	J[219] = 1.;
	J[273] = 30.;

   /*** derivatives for constraint 104 ***/

	J[222] = 1.;
	J[283] = 30.;

   /*** derivatives for constraint 105 ***/

	J[244] = 1.;
	J[274] = -15.;

   /*** derivatives for constraint 106 ***/

	J[248] = 1.;
	J[284] = -15.;

   /*** derivatives for constraint 107 ***/

	J[251] = 1.;
	J[275] = 15.;

   /*** derivatives for constraint 108 ***/

	J[254] = 1.;
	J[285] = 15.;

   /*** derivatives for constraint 109 ***/

	J[99] = 1.;
	J[289] = 5.;

   /*** derivatives for constraint 110 ***/

	J[100] = 1.;
	J[293] = 4.;

   /*** derivatives for constraint 111 ***/

	J[101] = 1.;
	J[297] = 8.;

   /*** derivatives for constraint 112 ***/

	J[102] = 1.;
	J[301] = 7.;

   /*** derivatives for constraint 113 ***/

	J[103] = 1.;
	J[305] = 6.;

   /*** derivatives for constraint 114 ***/

	J[104] = 1.;
	J[309] = 9.;

   /*** derivatives for constraint 115 ***/

	J[105] = 1.;
	J[313] = 10.;

   /*** derivatives for constraint 116 ***/

	J[106] = 1.;
	J[317] = 9.;

   /*** derivatives for constraint 117 ***/

	J[107] = 1.;
	J[321] = 6.;

   /*** derivatives for constraint 118 ***/

	J[108] = 1.;
	J[325] = 10.;

   /*** derivatives for constraint 119 ***/

	J[41] = 1.;
	J[53] = -1.;

   /*** derivatives for constraint 120 ***/

	J[64] = 1.;
	J[76] = -1.;

   /*** derivatives for constraint 121 ***/

	J[259] = 1.;
	J[267] = -1.;

   /*** derivatives for constraint 122 ***/

	J[87] = 1.;
	J[96] = -1.;

   /*** derivatives for constraint 123 ***/

	J[276] = 1.;
	J[286] = -1.;

   /*** derivatives for constraint 124 ***/

	J[290] = 1.;
	J[294] = 1.;

   /*** derivatives for constraint 125 ***/

	J[291] = 1.;
	J[295] = 1.;

   /*** derivatives for constraint 126 ***/

	J[298] = 1.;
	J[302] = 1.;

   /*** derivatives for constraint 127 ***/

	J[299] = 1.;
	J[303] = 1.;

   /*** derivatives for constraint 128 ***/

	J[306] = 1.;
	J[310] = 1.;

   /*** derivatives for constraint 129 ***/

	J[307] = 1.;
	J[311] = 1.;

   /*** derivatives for constraint 130 ***/

	J[314] = 1.;
	J[318] = 1.;

   /*** derivatives for constraint 131 ***/

	J[315] = 1.;
	J[319] = 1.;

   /*** derivatives for constraint 132 ***/

	J[322] = 1.;
	J[326] = 1.;

   /*** derivatives for constraint 133 ***/

	J[323] = 1.;
	J[327] = 1.;

   /*** derivatives for constraint 134 ***/

	J[42] = 1.;
	J[292] = -1.;

   /*** derivatives for constraint 135 ***/

	J[43] = -1.;
	J[54] = 1.;
	J[296] = -1.;

   /*** derivatives for constraint 136 ***/

	J[65] = 1.;
	J[300] = -1.;

   /*** derivatives for constraint 137 ***/

	J[66] = -1.;
	J[77] = 1.;
	J[304] = -1.;

   /*** derivatives for constraint 138 ***/

	J[260] = 1.;
	J[308] = -1.;

   /*** derivatives for constraint 139 ***/

	J[261] = -1.;
	J[268] = 1.;
	J[312] = -1.;

   /*** derivatives for constraint 140 ***/

	J[88] = 1.;
	J[316] = -1.;

   /*** derivatives for constraint 141 ***/

	J[89] = -1.;
	J[97] = 1.;
	J[320] = -1.;

   /*** derivatives for constraint 142 ***/

	J[277] = 1.;
	J[324] = -1.;

   /*** derivatives for constraint 143 ***/

	J[278] = -1.;
	J[287] = 1.;
	J[328] = -1.;

   /*** derivatives for constraint 144 ***/

	J[44] = 1.;
	J[67] = 1.;

   /*** derivatives for constraint 145 ***/

	J[55] = 1.;
	J[78] = 1.;

   /*** derivatives for constraint 146 ***/

	J[45] = 1.;
	J[68] = 1.;
	J[262] = -1.;

   /*** derivatives for constraint 147 ***/

	J[56] = 1.;
	J[79] = 1.;
	J[269] = -1.;

   /*** derivatives for constraint 148 ***/

	J[46] = 1.;
	J[69] = 1.;
	J[90] = -1.;

   /*** derivatives for constraint 149 ***/

	J[57] = 1.;
	J[80] = 1.;
	J[98] = -1.;

   /*** derivatives for constraint 150 ***/

	J[47] = 1.;
	J[70] = 1.;
	J[279] = -1.;

   /*** derivatives for constraint 151 ***/

	J[58] = 1.;
	J[81] = 1.;
	J[288] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
