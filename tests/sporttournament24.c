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
 fint sporttournament24_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament24_funcom_[561] = {
	277 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	277 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
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
	21,
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
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
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
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	126,
	127,
	128,
	129,
	130,
	131,
	132,
	133,
	134,
	135,
	136,
	137,
	138,
	139,
	140,
	141,
	142,
	143,
	144,
	145,
	146,
	147,
	148,
	149,
	150,
	151,
	152,
	153,
	154,
	155,
	156,
	157,
	158,
	159,
	160,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
	224,
	225,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
	233,
	234,
	235,
	236,
	237,
	238,
	239,
	240,
	241,
	242,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
	250,
	251,
	252,
	253,
	254,
	255,
	256,
	257,
	258,
	259,
	260,
	261,
	262,
	263,
	264,
	265,
	266,
	267,
	268,
	269,
	270,
	271,
	272,
	273,
	274,
	275,
	276,
	277,
	278,

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real sporttournament24_boundc_[1+554+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.};

 real sporttournament24_x0comn_[277] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sporttournament24_pd[528];
static real sporttournament24_old_x[277];
static int sporttournament24_xkind = -1;

 static int
sporttournament24_xcheck(real *x)
{
	real *x1 = sporttournament24_old_x, *xe = x + 277;
	errno = 0;
	if (sporttournament24_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament24_xkind = 0;
	return 1;
	}
 real
sporttournament24_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament24_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[276];
	;}

	if (wantfg & 2) {
	g[276] = 1.;
	}

	return rv;
}

 void
sporttournament24_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament24_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament24_pd[0] = 2. * x[0];
	v[0] = sporttournament24_pd[0] * x[1];
	sporttournament24_pd[1] = 2. * x[0];
	v[1] = sporttournament24_pd[1] * x[104];
	v[0] += v[1];
	sporttournament24_pd[2] = 2. * x[0];
	v[1] = sporttournament24_pd[2] * x[184];
	v[0] += v[1];
	sporttournament24_pd[3] = 2. * x[0];
	v[1] = sporttournament24_pd[3] * x[188];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[4] = 2. * x[1];
	v[2] = sporttournament24_pd[4] * x[82];
	v[0] += v[2];
	sporttournament24_pd[5] = 2. * x[1];
	v[2] = sporttournament24_pd[5] * x[101];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[6] = 2. * x[1];
	v[1] = sporttournament24_pd[6] * x[185];
	v[0] += v[1];
	sporttournament24_pd[7] = 2. * x[2];
	v[1] = sporttournament24_pd[7] * x[68];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[8] = 2. * x[2];
	v[2] = sporttournament24_pd[8] * x[190];
	v[0] += v[2];
	sporttournament24_pd[9] = 2. * x[2];
	v[2] = sporttournament24_pd[9] * x[202];
	v[0] += v[2];
	sporttournament24_pd[10] = 2. * x[2];
	v[2] = sporttournament24_pd[10] * x[203];
	v[0] += v[2];
	sporttournament24_pd[11] = 2. * x[3];
	v[2] = sporttournament24_pd[11] * x[36];
	v[0] += v[2];
	sporttournament24_pd[12] = 2. * x[3];
	v[2] = sporttournament24_pd[12] * x[88];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[13] = 2. * x[3];
	v[1] = sporttournament24_pd[13] * x[187];
	v[0] += v[1];
	sporttournament24_pd[14] = 2. * x[3];
	v[1] = sporttournament24_pd[14] * x[190];
	v[0] += v[1];
	sporttournament24_pd[15] = 2. * x[4];
	v[1] = sporttournament24_pd[15] * x[132];
	v[0] += v[1];
	sporttournament24_pd[16] = 2. * x[4];
	v[1] = sporttournament24_pd[16] * x[162];
	v[0] += v[1];
	sporttournament24_pd[17] = 2. * x[4];
	v[1] = sporttournament24_pd[17] * x[205];
	v[0] += v[1];
	sporttournament24_pd[18] = 2. * x[4];
	v[1] = sporttournament24_pd[18] * x[211];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[19] = 2. * x[5];
	v[2] = sporttournament24_pd[19] * x[53];
	v[0] += v[2];
	sporttournament24_pd[20] = 2. * x[5];
	v[2] = sporttournament24_pd[20] * x[71];
	v[0] += v[2];
	sporttournament24_pd[21] = 2. * x[5];
	v[2] = sporttournament24_pd[21] * x[109];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[22] = 2. * x[5];
	v[1] = sporttournament24_pd[22] * x[187];
	v[0] += v[1];
	sporttournament24_pd[23] = 2. * x[6];
	v[1] = sporttournament24_pd[23] * x[159];
	v[0] += v[1];
	sporttournament24_pd[24] = 2. * x[6];
	v[1] = sporttournament24_pd[24] * x[197];
	v[0] += v[1];
	sporttournament24_pd[25] = 2. * x[6];
	v[1] = sporttournament24_pd[25] * x[205];
	v[0] += v[1];
	sporttournament24_pd[26] = 2. * x[6];
	v[1] = sporttournament24_pd[26] * x[216];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[27] = 2. * x[7];
	v[2] = sporttournament24_pd[27] * x[69];
	v[0] += v[2];
	sporttournament24_pd[28] = 2. * x[7];
	v[2] = sporttournament24_pd[28] * x[71];
	v[0] += v[2];
	sporttournament24_pd[29] = 2. * x[7];
	v[2] = sporttournament24_pd[29] * x[130];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[30] = 2. * x[7];
	v[1] = sporttournament24_pd[30] * x[191];
	v[0] += v[1];
	sporttournament24_pd[31] = 2. * x[8];
	v[1] = sporttournament24_pd[31] * x[21];
	v[0] += v[1];
	sporttournament24_pd[32] = 2. * x[8];
	v[1] = sporttournament24_pd[32] * x[226];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[33] = 2. * x[8];
	v[2] = sporttournament24_pd[33] * x[227];
	v[0] += v[2];
	sporttournament24_pd[34] = 2. * x[8];
	v[2] = sporttournament24_pd[34] * x[228];
	v[0] += v[2];
	sporttournament24_pd[35] = 2. * x[9];
	v[2] = sporttournament24_pd[35] * x[21];
	v[0] += v[2];
	sporttournament24_pd[36] = 2. * x[9];
	v[2] = sporttournament24_pd[36] * x[29];
	v[0] += v[2];
	sporttournament24_pd[37] = 2. * x[9];
	v[2] = sporttournament24_pd[37] * x[234];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[38] = 2. * x[9];
	v[1] = sporttournament24_pd[38] * x[235];
	v[0] += v[1];
	sporttournament24_pd[39] = 2. * x[10];
	v[1] = sporttournament24_pd[39] * x[56];
	v[0] += v[1];
	sporttournament24_pd[40] = 2. * x[10];
	v[1] = sporttournament24_pd[40] * x[74];
	v[0] += v[1];
	sporttournament24_pd[41] = 2. * x[10];
	v[1] = sporttournament24_pd[41] * x[186];
	v[0] += v[1];
	sporttournament24_pd[42] = 2. * x[10];
	v[1] = sporttournament24_pd[42] * x[237];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[43] = 2. * x[11];
	v[2] = sporttournament24_pd[43] * x[29];
	v[0] += v[2];
	sporttournament24_pd[44] = 2. * x[11];
	v[2] = sporttournament24_pd[44] * x[42];
	v[0] += v[2];
	sporttournament24_pd[45] = 2. * x[11];
	v[2] = sporttournament24_pd[45] * x[95];
	v[0] += v[2];
	sporttournament24_pd[46] = 2. * x[11];
	v[2] = sporttournament24_pd[46] * x[238];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[47] = 2. * x[12];
	v[1] = sporttournament24_pd[47] * x[24];
	v[0] += v[1];
	sporttournament24_pd[48] = 2. * x[12];
	v[1] = sporttournament24_pd[48] * x[152];
	v[0] += v[1];
	sporttournament24_pd[49] = 2. * x[13];
	v[1] = sporttournament24_pd[49] * x[56];
	v[0] += v[1];
	sporttournament24_pd[50] = 2. * x[13];
	v[1] = sporttournament24_pd[50] * x[91];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[51] = 2. * x[13];
	v[2] = sporttournament24_pd[51] * x[189];
	v[0] += v[2];
	sporttournament24_pd[52] = 2. * x[13];
	v[2] = sporttournament24_pd[52] * x[206];
	v[0] += v[2];
	sporttournament24_pd[53] = 2. * x[14];
	v[2] = sporttournament24_pd[53] * x[42];
	v[0] += v[2];
	sporttournament24_pd[54] = 2. * x[14];
	v[2] = sporttournament24_pd[54] * x[59];
	v[0] += v[2];
	sporttournament24_pd[55] = 2. * x[14];
	v[2] = sporttournament24_pd[55] * x[116];
	v[0] += v[2];
	sporttournament24_pd[56] = 2. * x[14];
	v[2] = sporttournament24_pd[56] * x[242];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[57] = 2. * x[15];
	v[1] = sporttournament24_pd[57] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[58] = 2. * x[15];
	v[2] = sporttournament24_pd[58] * x[31];
	v[0] += v[2];
	sporttournament24_pd[59] = 2. * x[15];
	v[2] = sporttournament24_pd[59] * x[42];
	v[0] += v[2];
	sporttournament24_pd[60] = 2. * x[15];
	v[2] = sporttournament24_pd[60] * x[243];
	v[0] += v[2];
	sporttournament24_pd[61] = 2. * x[16];
	v[2] = sporttournament24_pd[61] * x[59];
	v[0] += v[2];
	sporttournament24_pd[62] = 2. * x[16];
	v[2] = sporttournament24_pd[62] * x[77];
	v[0] += v[2];
	sporttournament24_pd[63] = 2. * x[16];
	v[2] = sporttournament24_pd[63] * x[140];
	v[0] += v[2];
	sporttournament24_pd[64] = 2. * x[16];
	v[2] = sporttournament24_pd[64] * x[242];
	v[0] += v[2];
	sporttournament24_pd[65] = 2. * x[17];
	v[2] = sporttournament24_pd[65] * x[31];
	v[0] += v[2];
	sporttournament24_pd[66] = 2. * x[17];
	v[2] = sporttournament24_pd[66] * x[44];
	v[0] += v[2];
	sporttournament24_pd[67] = 2. * x[17];
	v[2] = sporttournament24_pd[67] * x[59];
	v[0] += v[2];
	sporttournament24_pd[68] = 2. * x[17];
	v[2] = sporttournament24_pd[68] * x[228];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[69] = 2. * x[18];
	v[1] = sporttournament24_pd[69] * x[48];
	v[0] += v[1];
	sporttournament24_pd[70] = 2. * x[18];
	v[1] = sporttournament24_pd[70] * x[240];
	v[0] += v[1];
	sporttournament24_pd[71] = 2. * x[19];
	v[1] = sporttournament24_pd[71] * x[39];
	v[0] += v[1];
	sporttournament24_pd[72] = 2. * x[19];
	v[1] = sporttournament24_pd[72] * x[134];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[73] = 2. * x[19];
	v[2] = sporttournament24_pd[73] * x[162];
	v[0] += v[2];
	sporttournament24_pd[74] = 2. * x[19];
	v[2] = sporttournament24_pd[74] * x[224];
	v[0] += v[2];
	sporttournament24_pd[75] = 2. * x[20];
	v[2] = sporttournament24_pd[75] * x[77];
	v[0] += v[2];
	sporttournament24_pd[76] = 2. * x[20];
	v[2] = sporttournament24_pd[76] * x[96];
	v[0] += v[2];
	sporttournament24_pd[77] = 2. * x[20];
	v[2] = sporttournament24_pd[77] * x[167];
	v[0] += v[2];
	sporttournament24_pd[78] = 2. * x[20];
	v[2] = sporttournament24_pd[78] * x[238];
	v[0] += v[2];
	sporttournament24_pd[79] = 2. * x[21];
	v[2] = sporttournament24_pd[79] * x[30];
	v[0] += v[2];
	sporttournament24_pd[80] = 2. * x[22];
	v[2] = sporttournament24_pd[80] * x[44];
	v[0] += v[2];
	sporttournament24_pd[81] = 2. * x[22];
	v[2] = sporttournament24_pd[81] * x[61];
	v[0] += v[2];
	sporttournament24_pd[82] = 2. * x[22];
	v[2] = sporttournament24_pd[82] * x[77];
	v[0] += v[2];
	sporttournament24_pd[83] = 2. * x[22];
	v[2] = sporttournament24_pd[83] * x[228];
	v[0] += v[2];
	sporttournament24_pd[84] = 2. * x[23];
	v[2] = sporttournament24_pd[84] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[85] = 2. * x[23];
	v[1] = sporttournament24_pd[85] * x[46];
	v[0] += v[1];
	sporttournament24_pd[86] = 2. * x[23];
	v[1] = sporttournament24_pd[86] * x[64];
	v[0] += v[1];
	sporttournament24_pd[87] = 2. * x[23];
	v[1] = sporttournament24_pd[87] * x[251];
	v[0] += v[1];
	sporttournament24_pd[88] = 2. * x[24];
	v[1] = sporttournament24_pd[88] * x[25];
	v[0] += v[1];
	sporttournament24_pd[89] = 2. * x[24];
	v[1] = sporttournament24_pd[89] * x[63];
	v[0] += v[1];
	sporttournament24_pd[90] = 2. * x[25];
	v[1] = sporttournament24_pd[90] * x[64];
	v[0] += v[1];
	sporttournament24_pd[91] = 2. * x[26];
	v[1] = sporttournament24_pd[91] * x[27];
	v[0] += v[1];
	sporttournament24_pd[92] = 2. * x[26];
	v[1] = sporttournament24_pd[92] * x[196];
	v[0] += v[1];
	sporttournament24_pd[93] = 2. * x[26];
	v[1] = sporttournament24_pd[93] * x[212];
	v[0] += v[1];
	sporttournament24_pd[94] = 2. * x[26];
	v[1] = sporttournament24_pd[94] * x[250];
	v[0] += v[1];
	sporttournament24_pd[95] = 2. * x[27];
	v[1] = sporttournament24_pd[95] * x[182];
	v[0] += v[1];
	sporttournament24_pd[96] = 2. * x[27];
	v[1] = sporttournament24_pd[96] * x[224];
	v[0] += v[1];
	sporttournament24_pd[97] = 2. * x[27];
	v[1] = sporttournament24_pd[97] * x[226];
	v[0] += v[1];
	sporttournament24_pd[98] = 2. * x[28];
	v[1] = sporttournament24_pd[98] * x[96];
	v[0] += v[1];
	sporttournament24_pd[99] = 2. * x[28];
	v[1] = sporttournament24_pd[99] * x[118];
	v[0] += v[1];
	sporttournament24_pd[100] = 2. * x[28];
	v[1] = sporttournament24_pd[100] * x[182];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[101] = 2. * x[28];
	v[2] = sporttournament24_pd[101] * x[234];
	v[0] += v[2];
	sporttournament24_pd[102] = 2. * x[29];
	v[2] = sporttournament24_pd[102] * x[43];
	v[0] += v[2];
	sporttournament24_pd[103] = 2. * x[29];
	v[2] = sporttournament24_pd[103] * x[170];
	v[0] += v[2];
	sporttournament24_pd[104] = 2. * x[30];
	v[2] = sporttournament24_pd[104] * x[61];
	v[0] += v[2];
	sporttournament24_pd[105] = 2. * x[30];
	v[2] = sporttournament24_pd[105] * x[79];
	v[0] += v[2];
	sporttournament24_pd[106] = 2. * x[30];
	v[2] = sporttournament24_pd[106] * x[96];
	v[0] += v[2];
	sporttournament24_pd[107] = 2. * x[31];
	v[2] = sporttournament24_pd[107] * x[80];
	v[0] += v[2];
	sporttournament24_pd[108] = 2. * x[31];
	v[2] = sporttournament24_pd[108] * x[236];
	v[0] += v[2];
	sporttournament24_pd[109] = 2. * x[32];
	v[2] = sporttournament24_pd[109] * x[33];
	v[0] += v[2];
	sporttournament24_pd[110] = 2. * x[32];
	v[2] = sporttournament24_pd[110] * x[247];
	v[0] += v[2];
	sporttournament24_pd[111] = 2. * x[32];
	v[2] = sporttournament24_pd[111] * x[254];
	v[0] += v[2];
	sporttournament24_pd[112] = 2. * x[32];
	v[2] = sporttournament24_pd[112] * x[258];
	v[0] += v[2];
	sporttournament24_pd[113] = 2. * x[33];
	v[2] = sporttournament24_pd[113] * x[62];
	v[0] += v[2];
	sporttournament24_pd[114] = 2. * x[33];
	v[2] = sporttournament24_pd[114] * x[86];
	v[0] += v[2];
	sporttournament24_pd[115] = 2. * x[33];
	v[2] = sporttournament24_pd[115] * x[240];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[116] = 2. * x[34];
	v[1] = sporttournament24_pd[116] * x[35];
	v[0] += v[1];
	sporttournament24_pd[117] = 2. * x[34];
	v[1] = sporttournament24_pd[117] * x[85];
	v[0] += v[1];
	sporttournament24_pd[118] = 2. * x[34];
	v[1] = sporttournament24_pd[118] * x[247];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[119] = 2. * x[34];
	v[2] = sporttournament24_pd[119] * x[248];
	v[0] += v[2];
	sporttournament24_pd[120] = 2. * x[35];
	v[2] = sporttournament24_pd[120] * x[86];
	v[0] += v[2];
	sporttournament24_pd[121] = 2. * x[36];
	v[2] = sporttournament24_pd[121] * x[54];
	v[0] += v[2];
	sporttournament24_pd[122] = 2. * x[36];
	v[2] = sporttournament24_pd[122] * x[219];
	v[0] += v[2];
	sporttournament24_pd[123] = 2. * x[36];
	v[2] = sporttournament24_pd[123] * x[259];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[124] = 2. * x[37];
	v[1] = sporttournament24_pd[124] * x[54];
	v[0] += v[1];
	sporttournament24_pd[125] = 2. * x[37];
	v[1] = sporttournament24_pd[125] * x[195];
	v[0] += v[1];
	sporttournament24_pd[126] = 2. * x[37];
	v[1] = sporttournament24_pd[126] * x[237];
	v[0] += v[1];
	sporttournament24_pd[127] = 2. * x[37];
	v[1] = sporttournament24_pd[127] * x[249];
	v[0] += v[1];
	sporttournament24_pd[128] = 2. * x[38];
	v[1] = sporttournament24_pd[128] * x[40];
	v[0] += v[1];
	sporttournament24_pd[129] = 2. * x[38];
	v[1] = sporttournament24_pd[129] * x[75];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[130] = 2. * x[38];
	v[2] = sporttournament24_pd[130] * x[93];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[131] = 2. * x[38];
	v[1] = sporttournament24_pd[131] * x[206];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[132] = 2. * x[39];
	v[2] = sporttournament24_pd[132] * x[192];
	v[0] += v[2];
	sporttournament24_pd[133] = 2. * x[39];
	v[2] = sporttournament24_pd[133] * x[207];
	v[0] += v[2];
	sporttournament24_pd[134] = 2. * x[39];
	v[2] = sporttournament24_pd[134] * x[253];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[135] = 2. * x[40];
	v[1] = sporttournament24_pd[135] * x[41];
	v[0] += v[1];
	sporttournament24_pd[136] = 2. * x[40];
	v[1] = sporttournament24_pd[136] * x[204];
	v[0] += v[1];
	sporttournament24_pd[137] = 2. * x[40];
	v[1] = sporttournament24_pd[137] * x[253];
	v[0] += v[1];
	sporttournament24_pd[138] = 2. * x[41];
	v[1] = sporttournament24_pd[138] * x[137];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[139] = 2. * x[41];
	v[2] = sporttournament24_pd[139] * x[139];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[140] = 2. * x[41];
	v[1] = sporttournament24_pd[140] * x[182];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[141] = 2. * x[42];
	v[2] = sporttournament24_pd[141] * x[60];
	v[0] += v[2];
	sporttournament24_pd[142] = 2. * x[43];
	v[2] = sporttournament24_pd[142] * x[79];
	v[0] += v[2];
	sporttournament24_pd[143] = 2. * x[43];
	v[2] = sporttournament24_pd[143] * x[99];
	v[0] += v[2];
	sporttournament24_pd[144] = 2. * x[43];
	v[2] = sporttournament24_pd[144] * x[118];
	v[0] += v[2];
	sporttournament24_pd[145] = 2. * x[44];
	v[2] = sporttournament24_pd[145] * x[229];
	v[0] += v[2];
	sporttournament24_pd[146] = 2. * x[44];
	v[2] = sporttournament24_pd[146] * x[244];
	v[0] += v[2];
	sporttournament24_pd[147] = 2. * x[45];
	v[2] = sporttournament24_pd[147] * x[183];
	v[0] += v[2];
	sporttournament24_pd[148] = 2. * x[45];
	v[2] = sporttournament24_pd[148] * x[200];
	v[0] += v[2];
	sporttournament24_pd[149] = 2. * x[45];
	v[2] = sporttournament24_pd[149] * x[244];
	v[0] += v[2];
	sporttournament24_pd[150] = 2. * x[45];
	v[2] = sporttournament24_pd[150] * x[255];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[151] = 2. * x[46];
	v[1] = sporttournament24_pd[151] * x[47];
	v[0] += v[1];
	sporttournament24_pd[152] = 2. * x[46];
	v[1] = sporttournament24_pd[152] * x[83];
	v[0] += v[1];
	sporttournament24_pd[153] = 2. * x[46];
	v[1] = sporttournament24_pd[153] * x[255];
	v[0] += v[1];
	sporttournament24_pd[154] = 2. * x[47];
	v[1] = sporttournament24_pd[154] * x[84];
	v[0] += v[1];
	sporttournament24_pd[155] = 2. * x[47];
	v[1] = sporttournament24_pd[155] * x[106];
	v[0] += v[1];
	sporttournament24_pd[156] = 2. * x[47];
	v[1] = sporttournament24_pd[156] * x[240];
	v[0] += v[1];
	sporttournament24_pd[157] = 2. * x[48];
	v[1] = sporttournament24_pd[157] * x[49];
	v[0] += v[1];
	sporttournament24_pd[158] = 2. * x[48];
	v[1] = sporttournament24_pd[158] * x[105];
	v[0] += v[1];
	sporttournament24_pd[159] = 2. * x[48];
	v[1] = sporttournament24_pd[159] * x[247];
	v[0] += v[1];
	sporttournament24_pd[160] = 2. * x[49];
	v[1] = sporttournament24_pd[160] * x[106];
	v[0] += v[1];
	sporttournament24_pd[161] = 2. * x[50];
	v[1] = sporttournament24_pd[161] * x[66];
	v[0] += v[1];
	sporttournament24_pd[162] = 2. * x[50];
	v[1] = sporttournament24_pd[162] * x[259];
	v[0] += v[1];
	sporttournament24_pd[163] = 2. * x[51];
	v[1] = sporttournament24_pd[163] * x[53];
	v[0] += v[1];
	sporttournament24_pd[164] = 2. * x[51];
	v[1] = sporttournament24_pd[164] * x[156];
	v[0] += v[1];
	sporttournament24_pd[165] = 2. * x[51];
	v[1] = sporttournament24_pd[165] * x[220];
	v[0] += v[1];
	sporttournament24_pd[166] = 2. * x[51];
	v[1] = sporttournament24_pd[166] * x[230];
	v[0] += v[1];
	sporttournament24_pd[167] = 2. * x[52];
	v[1] = sporttournament24_pd[167] * x[70];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[168] = 2. * x[52];
	v[2] = sporttournament24_pd[168] * x[155];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[169] = 2. * x[52];
	v[1] = sporttournament24_pd[169] * x[195];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[170] = 2. * x[52];
	v[2] = sporttournament24_pd[170] * x[209];
	v[0] += v[2];
	sporttournament24_pd[171] = 2. * x[53];
	v[2] = sporttournament24_pd[171] * x[70];
	v[0] += v[2];
	sporttournament24_pd[172] = 2. * x[53];
	v[2] = sporttournament24_pd[172] * x[259];
	v[0] += v[2];
	sporttournament24_pd[173] = 2. * x[54];
	v[2] = sporttournament24_pd[173] * x[55];
	v[0] += v[2];
	sporttournament24_pd[174] = 2. * x[54];
	v[2] = sporttournament24_pd[174] * x[202];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[175] = 2. * x[55];
	v[1] = sporttournament24_pd[175] * x[70];
	v[0] += v[1];
	sporttournament24_pd[176] = 2. * x[55];
	v[1] = sporttournament24_pd[176] * x[91];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[177] = 2. * x[55];
	v[2] = sporttournament24_pd[177] * x[233];
	v[0] += v[2];
	sporttournament24_pd[178] = 2. * x[56];
	v[2] = sporttournament24_pd[178] * x[164];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[179] = 2. * x[56];
	v[1] = sporttournament24_pd[179] * x[196];
	v[0] += v[1];
	sporttournament24_pd[180] = 2. * x[57];
	v[1] = sporttournament24_pd[180] * x[58];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[181] = 2. * x[57];
	v[2] = sporttournament24_pd[181] * x[192];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[182] = 2. * x[57];
	v[1] = sporttournament24_pd[182] * x[198];
	v[0] += v[1];
	sporttournament24_pd[183] = 2. * x[57];
	v[1] = sporttournament24_pd[183] * x[250];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[184] = 2. * x[58];
	v[2] = sporttournament24_pd[184] * x[227];
	v[0] += v[2];
	sporttournament24_pd[185] = 2. * x[58];
	v[2] = sporttournament24_pd[185] * x[238];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[186] = 2. * x[58];
	v[1] = sporttournament24_pd[186] * x[262];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[187] = 2. * x[59];
	v[2] = sporttournament24_pd[187] * x[78];
	v[0] += v[2];
	sporttournament24_pd[188] = 2. * x[60];
	v[2] = sporttournament24_pd[188] * x[99];
	v[0] += v[2];
	sporttournament24_pd[189] = 2. * x[60];
	v[2] = sporttournament24_pd[189] * x[121];
	v[0] += v[2];
	sporttournament24_pd[190] = 2. * x[60];
	v[2] = sporttournament24_pd[190] * x[169];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[191] = 2. * x[61];
	v[1] = sporttournament24_pd[191] * x[218];
	v[0] += v[1];
	sporttournament24_pd[192] = 2. * x[61];
	v[1] = sporttournament24_pd[192] * x[239];
	v[0] += v[1];
	sporttournament24_pd[193] = 2. * x[62];
	v[1] = sporttournament24_pd[193] * x[63];
	v[0] += v[1];
	sporttournament24_pd[194] = 2. * x[62];
	v[1] = sporttournament24_pd[194] * x[102];
	v[0] += v[1];
	sporttournament24_pd[195] = 2. * x[62];
	v[1] = sporttournament24_pd[195] * x[258];
	v[0] += v[1];
	sporttournament24_pd[196] = 2. * x[63];
	v[1] = sporttournament24_pd[196] * x[103];
	v[0] += v[1];
	sporttournament24_pd[197] = 2. * x[63];
	v[1] = sporttournament24_pd[197] * x[127];
	v[0] += v[1];
	sporttournament24_pd[198] = 2. * x[64];
	v[1] = sporttournament24_pd[198] * x[65];
	v[0] += v[1];
	sporttournament24_pd[199] = 2. * x[64];
	v[1] = sporttournament24_pd[199] * x[178];
	v[0] += v[1];
	sporttournament24_pd[200] = 2. * x[65];
	v[1] = sporttournament24_pd[200] * x[127];
	v[0] += v[1];
	sporttournament24_pd[201] = 2. * x[66];
	v[1] = sporttournament24_pd[201] * x[69];
	v[0] += v[1];
	sporttournament24_pd[202] = 2. * x[66];
	v[1] = sporttournament24_pd[202] * x[130];
	v[0] += v[1];
	sporttournament24_pd[203] = 2. * x[66];
	v[1] = sporttournament24_pd[203] * x[214];
	v[0] += v[1];
	sporttournament24_pd[204] = 2. * x[67];
	v[1] = sporttournament24_pd[204] * x[69];
	v[0] += v[1];
	sporttournament24_pd[205] = 2. * x[67];
	v[1] = sporttournament24_pd[205] * x[202];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[206] = 2. * x[67];
	v[2] = sporttournament24_pd[206] * x[221];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[207] = 2. * x[67];
	v[1] = sporttournament24_pd[207] * x[265];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[208] = 2. * x[68];
	v[2] = sporttournament24_pd[208] * x[89];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[209] = 2. * x[68];
	v[1] = sporttournament24_pd[209] * x[129];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[210] = 2. * x[68];
	v[2] = sporttournament24_pd[210] * x[201];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[211] = 2. * x[69];
	v[1] = sporttournament24_pd[211] * x[89];
	v[0] += v[1];
	sporttournament24_pd[212] = 2. * x[70];
	v[1] = sporttournament24_pd[212] * x[72];
	v[0] += v[1];
	sporttournament24_pd[213] = 2. * x[71];
	v[1] = sporttournament24_pd[213] * x[186];
	v[0] += v[1];
	sporttournament24_pd[214] = 2. * x[71];
	v[1] = sporttournament24_pd[214] * x[223];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[215] = 2. * x[72];
	v[2] = sporttournament24_pd[215] * x[89];
	v[0] += v[2];
	sporttournament24_pd[216] = 2. * x[72];
	v[2] = sporttournament24_pd[216] * x[223];
	v[0] += v[2];
	sporttournament24_pd[217] = 2. * x[72];
	v[2] = sporttournament24_pd[217] * x[252];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[218] = 2. * x[73];
	v[1] = sporttournament24_pd[218] * x[162];
	v[0] += v[1];
	sporttournament24_pd[219] = 2. * x[73];
	v[1] = sporttournament24_pd[219] * x[233];
	v[0] += v[1];
	sporttournament24_pd[220] = 2. * x[73];
	v[1] = sporttournament24_pd[220] * x[249];
	v[0] += v[1];
	sporttournament24_pd[221] = 2. * x[73];
	v[1] = sporttournament24_pd[221] * x[261];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[222] = 2. * x[74];
	v[2] = sporttournament24_pd[222] * x[135];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[223] = 2. * x[74];
	v[1] = sporttournament24_pd[223] * x[192];
	v[0] += v[1];
	sporttournament24_pd[224] = 2. * x[74];
	v[1] = sporttournament24_pd[224] * x[232];
	v[0] += v[1];
	sporttournament24_pd[225] = 2. * x[75];
	v[1] = sporttournament24_pd[225] * x[76];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[226] = 2. * x[75];
	v[2] = sporttournament24_pd[226] * x[196];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[227] = 2. * x[75];
	v[1] = sporttournament24_pd[227] * x[198];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[228] = 2. * x[76];
	v[2] = sporttournament24_pd[228] * x[235];
	v[0] += v[2];
	sporttournament24_pd[229] = 2. * x[76];
	v[2] = sporttournament24_pd[229] * x[242];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[230] = 2. * x[76];
	v[1] = sporttournament24_pd[230] * x[266];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[231] = 2. * x[77];
	v[2] = sporttournament24_pd[231] * x[98];
	v[0] += v[2];
	sporttournament24_pd[232] = 2. * x[78];
	v[2] = sporttournament24_pd[232] * x[121];
	v[0] += v[2];
	sporttournament24_pd[233] = 2. * x[78];
	v[2] = sporttournament24_pd[233] * x[143];
	v[0] += v[2];
	sporttournament24_pd[234] = 2. * x[78];
	v[2] = sporttournament24_pd[234] * x[263];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[235] = 2. * x[79];
	v[1] = sporttournament24_pd[235] * x[81];
	v[0] += v[1];
	sporttournament24_pd[236] = 2. * x[79];
	v[1] = sporttournament24_pd[236] * x[236];
	v[0] += v[1];
	sporttournament24_pd[237] = 2. * x[80];
	v[1] = sporttournament24_pd[237] * x[82];
	v[0] += v[1];
	sporttournament24_pd[238] = 2. * x[80];
	v[1] = sporttournament24_pd[238] * x[172];
	v[0] += v[1];
	sporttournament24_pd[239] = 2. * x[80];
	v[1] = sporttournament24_pd[239] * x[208];
	v[0] += v[1];
	sporttournament24_pd[240] = 2. * x[81];
	v[1] = sporttournament24_pd[240] * x[82];
	v[0] += v[1];
	sporttournament24_pd[241] = 2. * x[81];
	v[1] = sporttournament24_pd[241] * x[143];
	v[0] += v[1];
	sporttournament24_pd[242] = 2. * x[81];
	v[1] = sporttournament24_pd[242] * x[174];
	v[0] += v[1];
	sporttournament24_pd[243] = 2. * x[82];
	v[1] = sporttournament24_pd[243] * x[83];
	v[0] += v[1];
	sporttournament24_pd[244] = 2. * x[83];
	v[1] = sporttournament24_pd[244] * x[84];
	v[0] += v[1];
	sporttournament24_pd[245] = 2. * x[83];
	v[1] = sporttournament24_pd[245] * x[199];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[246] = 2. * x[84];
	v[2] = sporttournament24_pd[246] * x[85];
	v[0] += v[2];
	sporttournament24_pd[247] = 2. * x[84];
	v[2] = sporttournament24_pd[247] * x[125];
	v[0] += v[2];
	sporttournament24_pd[248] = 2. * x[85];
	v[2] = sporttournament24_pd[248] * x[126];
	v[0] += v[2];
	sporttournament24_pd[249] = 2. * x[85];
	v[2] = sporttournament24_pd[249] * x[151];
	v[0] += v[2];
	sporttournament24_pd[250] = 2. * x[86];
	v[2] = sporttournament24_pd[250] * x[87];
	v[0] += v[2];
	sporttournament24_pd[251] = 2. * x[86];
	v[2] = sporttournament24_pd[251] * x[150];
	v[0] += v[2];
	sporttournament24_pd[252] = 2. * x[87];
	v[2] = sporttournament24_pd[252] * x[151];
	v[0] += v[2];
	sporttournament24_pd[253] = 2. * x[88];
	v[2] = sporttournament24_pd[253] * x[209];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[254] = 2. * x[88];
	v[1] = sporttournament24_pd[254] * x[245];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[255] = 2. * x[88];
	v[2] = sporttournament24_pd[255] * x[268];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[256] = 2. * x[89];
	v[1] = sporttournament24_pd[256] * x[90];
	v[0] += v[1];
	sporttournament24_pd[257] = 2. * x[90];
	v[1] = sporttournament24_pd[257] * x[216];
	v[0] += v[1];
	sporttournament24_pd[258] = 2. * x[90];
	v[1] = sporttournament24_pd[258] * x[249];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[259] = 2. * x[90];
	v[2] = sporttournament24_pd[259] * x[268];
	v[0] += v[2];
	sporttournament24_pd[260] = 2. * x[91];
	v[2] = sporttournament24_pd[260] * x[111];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[261] = 2. * x[91];
	v[1] = sporttournament24_pd[261] * x[131];
	v[0] += v[1];
	sporttournament24_pd[262] = 2. * x[92];
	v[1] = sporttournament24_pd[262] * x[93];
	v[0] += v[1];
	sporttournament24_pd[263] = 2. * x[92];
	v[1] = sporttournament24_pd[263] * x[223];
	v[0] += v[1];
	sporttournament24_pd[264] = 2. * x[92];
	v[1] = sporttournament24_pd[264] * x[237];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[265] = 2. * x[92];
	v[2] = sporttournament24_pd[265] * x[261];
	v[0] += v[2];
	sporttournament24_pd[266] = 2. * x[93];
	v[2] = sporttournament24_pd[266] * x[111];
	v[0] += v[2];
	sporttournament24_pd[267] = 2. * x[93];
	v[2] = sporttournament24_pd[267] * x[113];
	v[0] += v[2];
	sporttournament24_pd[268] = 2. * x[94];
	v[2] = sporttournament24_pd[268] * x[164];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[269] = 2. * x[94];
	v[1] = sporttournament24_pd[269] * x[204];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[270] = 2. * x[94];
	v[2] = sporttournament24_pd[270] * x[207];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[271] = 2. * x[94];
	v[1] = sporttournament24_pd[271] * x[246];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[272] = 2. * x[95];
	v[2] = sporttournament24_pd[272] * x[117];
	v[0] += v[2];
	sporttournament24_pd[273] = 2. * x[95];
	v[2] = sporttournament24_pd[273] * x[198];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[274] = 2. * x[95];
	v[1] = sporttournament24_pd[274] * x[246];
	v[0] += v[1];
	sporttournament24_pd[275] = 2. * x[96];
	v[1] = sporttournament24_pd[275] * x[120];
	v[0] += v[1];
	sporttournament24_pd[276] = 2. * x[97];
	v[1] = sporttournament24_pd[276] * x[117];
	v[0] += v[1];
	sporttournament24_pd[277] = 2. * x[97];
	v[1] = sporttournament24_pd[277] * x[120];
	v[0] += v[1];
	sporttournament24_pd[278] = 2. * x[97];
	v[1] = sporttournament24_pd[278] * x[170];
	v[0] += v[1];
	sporttournament24_pd[279] = 2. * x[97];
	v[1] = sporttournament24_pd[279] * x[217];
	v[0] += v[1];
	sporttournament24_pd[280] = 2. * x[98];
	v[1] = sporttournament24_pd[280] * x[119];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[281] = 2. * x[98];
	v[2] = sporttournament24_pd[281] * x[143];
	v[0] += v[2];
	sporttournament24_pd[282] = 2. * x[98];
	v[2] = sporttournament24_pd[282] * x[171];
	v[0] += v[2];
	sporttournament24_pd[283] = 2. * x[99];
	v[2] = sporttournament24_pd[283] * x[100];
	v[0] += v[2];
	sporttournament24_pd[284] = 2. * x[99];
	v[2] = sporttournament24_pd[284] * x[229];
	v[0] += v[2];
	sporttournament24_pd[285] = 2. * x[100];
	v[2] = sporttournament24_pd[285] * x[146];
	v[0] += v[2];
	sporttournament24_pd[286] = 2. * x[100];
	v[2] = sporttournament24_pd[286] * x[171];
	v[0] += v[2];
	sporttournament24_pd[287] = 2. * x[100];
	v[2] = sporttournament24_pd[287] * x[264];
	v[0] += v[2];
	sporttournament24_pd[288] = 2. * x[101];
	v[2] = sporttournament24_pd[288] * x[102];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[289] = 2. * x[101];
	v[1] = sporttournament24_pd[289] * x[145];
	v[0] += v[1];
	sporttournament24_pd[290] = 2. * x[101];
	v[1] = sporttournament24_pd[290] * x[239];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[291] = 2. * x[102];
	v[2] = sporttournament24_pd[291] * x[103];
	v[0] += v[2];
	sporttournament24_pd[292] = 2. * x[102];
	v[2] = sporttournament24_pd[292] * x[264];
	v[0] += v[2];
	sporttournament24_pd[293] = 2. * x[103];
	v[2] = sporttournament24_pd[293] * x[105];
	v[0] += v[2];
	sporttournament24_pd[294] = 2. * x[103];
	v[2] = sporttournament24_pd[294] * x[147];
	v[0] += v[2];
	sporttournament24_pd[295] = 2. * x[104];
	v[2] = sporttournament24_pd[295] * x[127];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[296] = 2. * x[104];
	v[1] = sporttournament24_pd[296] * x[148];
	v[0] += v[1];
	sporttournament24_pd[297] = 2. * x[104];
	v[1] = sporttournament24_pd[297] * x[180];
	v[0] += v[1];
	sporttournament24_pd[298] = 2. * x[105];
	v[1] = sporttournament24_pd[298] * x[149];
	v[0] += v[1];
	sporttournament24_pd[299] = 2. * x[105];
	v[1] = sporttournament24_pd[299] * x[180];
	v[0] += v[1];
	sporttournament24_pd[300] = 2. * x[106];
	v[1] = sporttournament24_pd[300] * x[107];
	v[0] += v[1];
	sporttournament24_pd[301] = 2. * x[106];
	v[1] = sporttournament24_pd[301] * x[179];
	v[0] += v[1];
	sporttournament24_pd[302] = 2. * x[107];
	v[1] = sporttournament24_pd[302] * x[180];
	v[0] += v[1];
	sporttournament24_pd[303] = 2. * x[108];
	v[1] = sporttournament24_pd[303] * x[129];
	v[0] += v[1];
	sporttournament24_pd[304] = 2. * x[108];
	v[1] = sporttournament24_pd[304] * x[201];
	v[0] += v[1];
	sporttournament24_pd[305] = 2. * x[109];
	v[1] = sporttournament24_pd[305] * x[213];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[306] = 2. * x[109];
	v[2] = sporttournament24_pd[306] * x[241];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[307] = 2. * x[109];
	v[1] = sporttournament24_pd[307] * x[271];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[308] = 2. * x[110];
	v[2] = sporttournament24_pd[308] * x[211];
	v[0] += v[2];
	sporttournament24_pd[309] = 2. * x[110];
	v[2] = sporttournament24_pd[309] * x[252];
	v[0] += v[2];
	sporttournament24_pd[310] = 2. * x[110];
	v[2] = sporttournament24_pd[310] * x[268];
	v[0] += v[2];
	sporttournament24_pd[311] = 2. * x[110];
	v[2] = sporttournament24_pd[311] * x[271];
	v[0] += v[2];
	sporttournament24_pd[312] = 2. * x[111];
	v[2] = sporttournament24_pd[312] * x[112];
	v[0] += v[2];
	sporttournament24_pd[313] = 2. * x[111];
	v[2] = sporttournament24_pd[313] * x[216];
	v[0] += v[2];
	sporttournament24_pd[314] = 2. * x[112];
	v[2] = sporttournament24_pd[314] * x[133];
	v[0] += v[2];
	sporttournament24_pd[315] = 2. * x[112];
	v[2] = sporttournament24_pd[315] * x[225];
	v[0] += v[2];
	sporttournament24_pd[316] = 2. * x[112];
	v[2] = sporttournament24_pd[316] * x[250];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[317] = 2. * x[113];
	v[1] = sporttournament24_pd[317] * x[137];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[318] = 2. * x[113];
	v[2] = sporttournament24_pd[318] * x[193];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[319] = 2. * x[113];
	v[1] = sporttournament24_pd[319] * x[270];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[320] = 2. * x[114];
	v[2] = sporttournament24_pd[320] * x[115];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[321] = 2. * x[114];
	v[1] = sporttournament24_pd[321] * x[135];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[322] = 2. * x[114];
	v[2] = sporttournament24_pd[322] * x[165];
	v[0] += v[2];
	sporttournament24_pd[323] = 2. * x[114];
	v[2] = sporttournament24_pd[323] * x[212];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[324] = 2. * x[115];
	v[1] = sporttournament24_pd[324] * x[116];
	v[0] += v[1];
	sporttournament24_pd[325] = 2. * x[115];
	v[1] = sporttournament24_pd[325] * x[238];
	v[0] += v[1];
	sporttournament24_pd[326] = 2. * x[115];
	v[1] = sporttournament24_pd[326] * x[270];
	v[0] += v[1];
	sporttournament24_pd[327] = 2. * x[116];
	v[1] = sporttournament24_pd[327] * x[141];
	v[0] += v[1];
	sporttournament24_pd[328] = 2. * x[116];
	v[1] = sporttournament24_pd[328] * x[198];
	v[0] += v[1];
	sporttournament24_pd[329] = 2. * x[117];
	v[1] = sporttournament24_pd[329] * x[119];
	v[0] += v[1];
	sporttournament24_pd[330] = 2. * x[117];
	v[1] = sporttournament24_pd[330] * x[235];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[331] = 2. * x[118];
	v[2] = sporttournament24_pd[331] * x[142];
	v[0] += v[2];
	sporttournament24_pd[332] = 2. * x[118];
	v[2] = sporttournament24_pd[332] * x[256];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[333] = 2. * x[119];
	v[1] = sporttournament24_pd[333] * x[141];
	v[0] += v[1];
	sporttournament24_pd[334] = 2. * x[119];
	v[1] = sporttournament24_pd[334] * x[142];
	v[0] += v[1];
	sporttournament24_pd[335] = 2. * x[120];
	v[1] = sporttournament24_pd[335] * x[122];
	v[0] += v[1];
	sporttournament24_pd[336] = 2. * x[120];
	v[1] = sporttournament24_pd[336] * x[171];
	v[0] += v[1];
	sporttournament24_pd[337] = 2. * x[121];
	v[1] = sporttournament24_pd[337] * x[123];
	v[0] += v[1];
	sporttournament24_pd[338] = 2. * x[121];
	v[1] = sporttournament24_pd[338] * x[218];
	v[0] += v[1];
	sporttournament24_pd[339] = 2. * x[122];
	v[1] = sporttournament24_pd[339] * x[123];
	v[0] += v[1];
	sporttournament24_pd[340] = 2. * x[122];
	v[1] = sporttournament24_pd[340] * x[142];
	v[0] += v[1];
	sporttournament24_pd[341] = 2. * x[122];
	v[1] = sporttournament24_pd[341] * x[183];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[342] = 2. * x[123];
	v[2] = sporttournament24_pd[342] * x[124];
	v[0] += v[2];
	sporttournament24_pd[343] = 2. * x[123];
	v[2] = sporttournament24_pd[343] * x[260];
	v[0] += v[2];
	sporttournament24_pd[344] = 2. * x[124];
	v[2] = sporttournament24_pd[344] * x[125];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[345] = 2. * x[124];
	v[1] = sporttournament24_pd[345] * x[188];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[346] = 2. * x[124];
	v[2] = sporttournament24_pd[346] * x[236];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[347] = 2. * x[125];
	v[1] = sporttournament24_pd[347] * x[126];
	v[0] += v[1];
	sporttournament24_pd[348] = 2. * x[125];
	v[1] = sporttournament24_pd[348] * x[260];
	v[0] += v[1];
	sporttournament24_pd[349] = 2. * x[126];
	v[1] = sporttournament24_pd[349] * x[176];
	v[0] += v[1];
	sporttournament24_pd[350] = 2. * x[126];
	v[1] = sporttournament24_pd[350] * x[178];
	v[0] += v[1];
	sporttournament24_pd[351] = 2. * x[127];
	v[1] = sporttournament24_pd[351] * x[273];
	v[0] += v[1];
	sporttournament24_pd[352] = 2. * x[128];
	v[1] = sporttournament24_pd[352] * x[201];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[353] = 2. * x[128];
	v[2] = sporttournament24_pd[353] * x[245];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[354] = 2. * x[129];
	v[1] = sporttournament24_pd[354] * x[210];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[355] = 2. * x[129];
	v[2] = sporttournament24_pd[355] * x[272];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[356] = 2. * x[130];
	v[1] = sporttournament24_pd[356] * x[157];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[357] = 2. * x[130];
	v[2] = sporttournament24_pd[357] * x[219];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[358] = 2. * x[131];
	v[1] = sporttournament24_pd[358] * x[132];
	v[0] += v[1];
	sporttournament24_pd[359] = 2. * x[131];
	v[1] = sporttournament24_pd[359] * x[157];
	v[0] += v[1];
	sporttournament24_pd[360] = 2. * x[131];
	v[1] = sporttournament24_pd[360] * x[271];
	v[0] += v[1];
	sporttournament24_pd[361] = 2. * x[132];
	v[1] = sporttournament24_pd[361] * x[160];
	v[0] += v[1];
	sporttournament24_pd[362] = 2. * x[132];
	v[1] = sporttournament24_pd[362] * x[203];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[363] = 2. * x[133];
	v[2] = sporttournament24_pd[363] * x[134];
	v[0] += v[2];
	sporttournament24_pd[364] = 2. * x[133];
	v[2] = sporttournament24_pd[364] * x[211];
	v[0] += v[2];
	sporttournament24_pd[365] = 2. * x[133];
	v[2] = sporttournament24_pd[365] * x[252];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[366] = 2. * x[134];
	v[1] = sporttournament24_pd[366] * x[136];
	v[0] += v[1];
	sporttournament24_pd[367] = 2. * x[134];
	v[1] = sporttournament24_pd[367] * x[160];
	v[0] += v[1];
	sporttournament24_pd[368] = 2. * x[135];
	v[1] = sporttournament24_pd[368] * x[261];
	v[0] += v[1];
	sporttournament24_pd[369] = 2. * x[135];
	v[1] = sporttournament24_pd[369] * x[266];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[370] = 2. * x[136];
	v[2] = sporttournament24_pd[370] * x[137];
	v[0] += v[2];
	sporttournament24_pd[371] = 2. * x[136];
	v[2] = sporttournament24_pd[371] * x[205];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[372] = 2. * x[136];
	v[1] = sporttournament24_pd[372] * x[266];
	v[0] += v[1];
	sporttournament24_pd[373] = 2. * x[137];
	v[1] = sporttournament24_pd[373] * x[138];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[374] = 2. * x[138];
	v[2] = sporttournament24_pd[374] * x[140];
	v[0] += v[2];
	sporttournament24_pd[375] = 2. * x[138];
	v[2] = sporttournament24_pd[375] * x[234];
	v[0] += v[2];
	sporttournament24_pd[376] = 2. * x[138];
	v[2] = sporttournament24_pd[376] * x[266];
	v[0] += v[2];
	sporttournament24_pd[377] = 2. * x[139];
	v[2] = sporttournament24_pd[377] * x[168];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[378] = 2. * x[139];
	v[1] = sporttournament24_pd[378] * x[217];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[379] = 2. * x[139];
	v[2] = sporttournament24_pd[379] * x[253];
	v[0] += v[2];
	sporttournament24_pd[380] = 2. * x[140];
	v[2] = sporttournament24_pd[380] * x[168];
	v[0] += v[2];
	sporttournament24_pd[381] = 2. * x[140];
	v[2] = sporttournament24_pd[381] * x[207];
	v[0] += v[2];
	sporttournament24_pd[382] = 2. * x[141];
	v[2] = sporttournament24_pd[382] * x[227];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[383] = 2. * x[141];
	v[1] = sporttournament24_pd[383] * x[263];
	v[0] += v[1];
	sporttournament24_pd[384] = 2. * x[142];
	v[1] = sporttournament24_pd[384] * x[144];
	v[0] += v[1];
	sporttournament24_pd[385] = 2. * x[143];
	v[1] = sporttournament24_pd[385] * x[145];
	v[0] += v[1];
	sporttournament24_pd[386] = 2. * x[144];
	v[1] = sporttournament24_pd[386] * x[145];
	v[0] += v[1];
	sporttournament24_pd[387] = 2. * x[144];
	v[1] = sporttournament24_pd[387] * x[183];
	v[0] += v[1];
	sporttournament24_pd[388] = 2. * x[144];
	v[1] = sporttournament24_pd[388] * x[275];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[389] = 2. * x[145];
	v[2] = sporttournament24_pd[389] * x[257];
	v[0] += v[2];
	sporttournament24_pd[390] = 2. * x[146];
	v[2] = sporttournament24_pd[390] * x[147];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[391] = 2. * x[146];
	v[1] = sporttournament24_pd[391] * x[194];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[392] = 2. * x[146];
	v[2] = sporttournament24_pd[392] * x[229];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[393] = 2. * x[147];
	v[1] = sporttournament24_pd[393] * x[149];
	v[0] += v[1];
	sporttournament24_pd[394] = 2. * x[147];
	v[1] = sporttournament24_pd[394] * x[257];
	v[0] += v[1];
	sporttournament24_pd[395] = 2. * x[148];
	v[1] = sporttournament24_pd[395] * x[150];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[396] = 2. * x[148];
	v[2] = sporttournament24_pd[396] * x[188];
	v[0] += v[2];
	sporttournament24_pd[397] = 2. * x[148];
	v[2] = sporttournament24_pd[397] * x[200];
	v[0] += v[2];
	sporttournament24_pd[398] = 2. * x[149];
	v[2] = sporttournament24_pd[398] * x[150];
	v[0] += v[2];
	sporttournament24_pd[399] = 2. * x[149];
	v[2] = sporttournament24_pd[399] * x[200];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[400] = 2. * x[150];
	v[1] = sporttournament24_pd[400] * x[152];
	v[0] += v[1];
	sporttournament24_pd[401] = 2. * x[151];
	v[1] = sporttournament24_pd[401] * x[153];
	v[0] += v[1];
	sporttournament24_pd[402] = 2. * x[151];
	v[1] = sporttournament24_pd[402] * x[184];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[403] = 2. * x[152];
	v[2] = sporttournament24_pd[403] * x[153];
	v[0] += v[2];
	sporttournament24_pd[404] = 2. * x[152];
	v[2] = sporttournament24_pd[404] * x[184];
	v[0] += v[2];
	sporttournament24_pd[405] = 2. * x[154];
	v[2] = sporttournament24_pd[405] * x[209];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[406] = 2. * x[154];
	v[1] = sporttournament24_pd[406] * x[241];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[407] = 2. * x[155];
	v[2] = sporttournament24_pd[407] * x[215];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[408] = 2. * x[155];
	v[1] = sporttournament24_pd[408] * x[267];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[409] = 2. * x[155];
	v[2] = sporttournament24_pd[409] * x[269];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[410] = 2. * x[156];
	v[1] = sporttournament24_pd[410] * x[195];
	v[0] += v[1];
	sporttournament24_pd[411] = 2. * x[156];
	v[1] = sporttournament24_pd[411] * x[201];
	v[0] += v[1];
	sporttournament24_pd[412] = 2. * x[156];
	v[1] = sporttournament24_pd[412] * x[231];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[413] = 2. * x[157];
	v[2] = sporttournament24_pd[413] * x[158];
	v[0] += v[2];
	sporttournament24_pd[414] = 2. * x[157];
	v[2] = sporttournament24_pd[414] * x[272];
	v[0] += v[2];
	sporttournament24_pd[415] = 2. * x[158];
	v[2] = sporttournament24_pd[415] * x[159];
	v[0] += v[2];
	sporttournament24_pd[416] = 2. * x[158];
	v[2] = sporttournament24_pd[416] * x[231];
	v[0] += v[2];
	sporttournament24_pd[417] = 2. * x[158];
	v[2] = sporttournament24_pd[417] * x[237];
	v[0] += v[2];
	sporttournament24_pd[418] = 2. * x[159];
	v[2] = sporttournament24_pd[418] * x[161];
	v[0] += v[2];
	sporttournament24_pd[419] = 2. * x[159];
	v[2] = sporttournament24_pd[419] * x[203];
	v[0] += v[2];
	sporttournament24_pd[420] = 2. * x[160];
	v[2] = sporttournament24_pd[420] * x[163];
	v[0] += v[2];
	sporttournament24_pd[421] = 2. * x[160];
	v[2] = sporttournament24_pd[421] * x[249];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[422] = 2. * x[161];
	v[1] = sporttournament24_pd[422] * x[163];
	v[0] += v[1];
	sporttournament24_pd[423] = 2. * x[161];
	v[1] = sporttournament24_pd[423] * x[206];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[424] = 2. * x[161];
	v[2] = sporttournament24_pd[424] * x[252];
	v[0] += v[2];
	sporttournament24_pd[425] = 2. * x[162];
	v[2] = sporttournament24_pd[425] * x[165];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[426] = 2. * x[163];
	v[1] = sporttournament24_pd[426] * x[165];
	v[0] += v[1];
	sporttournament24_pd[427] = 2. * x[163];
	v[1] = sporttournament24_pd[427] * x[250];
	v[0] += v[1];
	sporttournament24_pd[428] = 2. * x[164];
	v[1] = sporttournament24_pd[428] * x[261];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[429] = 2. * x[164];
	v[2] = sporttournament24_pd[429] * x[262];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[430] = 2. * x[165];
	v[1] = sporttournament24_pd[430] * x[262];
	v[0] += v[1];
	sporttournament24_pd[431] = 2. * x[166];
	v[1] = sporttournament24_pd[431] * x[167];
	v[0] += v[1];
	sporttournament24_pd[432] = 2. * x[166];
	v[1] = sporttournament24_pd[432] * x[224];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[433] = 2. * x[166];
	v[2] = sporttournament24_pd[433] * x[226];
	v[0] += v[2];
	sporttournament24_pd[434] = 2. * x[166];
	v[2] = sporttournament24_pd[434] * x[262];
	v[0] += v[2];
	sporttournament24_pd[435] = 2. * x[167];
	v[2] = sporttournament24_pd[435] * x[212];
	v[0] += v[2];
	sporttournament24_pd[436] = 2. * x[167];
	v[2] = sporttournament24_pd[436] * x[256];
	v[0] += v[2];
	sporttournament24_pd[437] = 2. * x[168];
	v[2] = sporttournament24_pd[437] * x[169];
	v[0] += v[2];
	sporttournament24_pd[438] = 2. * x[168];
	v[2] = sporttournament24_pd[438] * x[263];
	v[0] += v[2];
	sporttournament24_pd[439] = 2. * x[169];
	v[2] = sporttournament24_pd[439] * x[256];
	v[0] += v[2];
	sporttournament24_pd[440] = 2. * x[169];
	v[2] = sporttournament24_pd[440] * x[275];
	v[0] += v[2];
	sporttournament24_pd[441] = 2. * x[170];
	v[2] = sporttournament24_pd[441] * x[172];
	v[0] += v[2];
	sporttournament24_pd[442] = 2. * x[170];
	v[2] = sporttournament24_pd[442] * x[243];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[443] = 2. * x[171];
	v[1] = sporttournament24_pd[443] * x[173];
	v[0] += v[1];
	sporttournament24_pd[444] = 2. * x[172];
	v[1] = sporttournament24_pd[444] * x[173];
	v[0] += v[1];
	sporttournament24_pd[445] = 2. * x[172];
	v[1] = sporttournament24_pd[445] * x[275];
	v[0] += v[1];
	sporttournament24_pd[446] = 2. * x[173];
	v[1] = sporttournament24_pd[446] * x[175];
	v[0] += v[1];
	sporttournament24_pd[447] = 2. * x[173];
	v[1] = sporttournament24_pd[447] * x[199];
	v[0] += v[1];
	sporttournament24_pd[448] = 2. * x[174];
	v[1] = sporttournament24_pd[448] * x[176];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[449] = 2. * x[174];
	v[2] = sporttournament24_pd[449] * x[200];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[450] = 2. * x[174];
	v[1] = sporttournament24_pd[450] * x[218];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[451] = 2. * x[175];
	v[2] = sporttournament24_pd[451] * x[176];
	v[0] += v[2];
	sporttournament24_pd[452] = 2. * x[175];
	v[2] = sporttournament24_pd[452] * x[239];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[453] = 2. * x[175];
	v[1] = sporttournament24_pd[453] * x[254];
	v[0] += v[1];
	sporttournament24_pd[454] = 2. * x[176];
	v[1] = sporttournament24_pd[454] * x[177];
	v[0] += v[1];
	sporttournament24_pd[455] = 2. * x[177];
	v[1] = sporttournament24_pd[455] * x[178];
	v[0] += v[1];
	sporttournament24_pd[456] = 2. * x[177];
	v[1] = sporttournament24_pd[456] * x[179];
	v[0] += v[1];
	sporttournament24_pd[457] = 2. * x[177];
	v[1] = sporttournament24_pd[457] * x[194];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[458] = 2. * x[178];
	v[2] = sporttournament24_pd[458] * x[274];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[459] = 2. * x[179];
	v[1] = sporttournament24_pd[459] * x[185];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[460] = 2. * x[179];
	v[2] = sporttournament24_pd[460] * x[274];
	v[0] += v[2];
	sporttournament24_pd[461] = 2. * x[180];
	v[2] = sporttournament24_pd[461] * x[181];
	v[0] += v[2];
	sporttournament24_pd[462] = 2. * x[181];
	v[2] = sporttournament24_pd[462] * x[274];
	v[0] += v[2];
	sporttournament24_pd[463] = 2. * x[182];
	v[2] = sporttournament24_pd[463] * x[217];
	v[0] += v[2];
	sporttournament24_pd[464] = 2. * x[183];
	v[2] = sporttournament24_pd[464] * x[208];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[465] = 2. * x[184];
	v[1] = sporttournament24_pd[465] * x[185];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[466] = 2. * x[185];
	v[2] = sporttournament24_pd[466] * x[194];
	v[0] += v[2];
	sporttournament24_pd[467] = 2. * x[186];
	v[2] = sporttournament24_pd[467] * x[187];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[468] = 2. * x[186];
	v[1] = sporttournament24_pd[468] * x[232];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[469] = 2. * x[187];
	v[2] = sporttournament24_pd[469] * x[216];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[470] = 2. * x[188];
	v[1] = sporttournament24_pd[470] * x[199];
	v[0] += v[1];
	sporttournament24_pd[471] = 2. * x[189];
	v[1] = sporttournament24_pd[471] * x[190];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[472] = 2. * x[189];
	v[2] = sporttournament24_pd[472] * x[191];
	v[0] += v[2];
	sporttournament24_pd[473] = 2. * x[189];
	v[2] = sporttournament24_pd[473] * x[222];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[474] = 2. * x[190];
	v[1] = sporttournament24_pd[474] * x[211];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[475] = 2. * x[191];
	v[2] = sporttournament24_pd[475] * x[231];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[476] = 2. * x[191];
	v[1] = sporttournament24_pd[476] * x[233];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[477] = 2. * x[192];
	v[2] = sporttournament24_pd[477] * x[193];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[478] = 2. * x[193];
	v[1] = sporttournament24_pd[478] * x[222];
	v[0] += v[1];
	sporttournament24_pd[479] = 2. * x[193];
	v[1] = sporttournament24_pd[479] * x[232];
	v[0] += v[1];
	sporttournament24_pd[480] = 2. * x[194];
	v[1] = sporttournament24_pd[480] * x[208];
	v[0] += v[1];
	sporttournament24_pd[481] = 2. * x[195];
	v[1] = sporttournament24_pd[481] * x[203];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[482] = 2. * x[196];
	v[2] = sporttournament24_pd[482] * x[197];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[483] = 2. * x[197];
	v[1] = sporttournament24_pd[483] * x[222];
	v[0] += v[1];
	sporttournament24_pd[484] = 2. * x[197];
	v[1] = sporttournament24_pd[484] * x[225];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[485] = 2. * x[199];
	v[2] = sporttournament24_pd[485] * x[244];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[486] = 2. * x[202];
	v[1] = sporttournament24_pd[486] * x[213];
	v[0] += v[1];
	sporttournament24_pd[487] = 2. * x[204];
	v[1] = sporttournament24_pd[487] * x[205];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[488] = 2. * x[204];
	v[2] = sporttournament24_pd[488] * x[206];
	v[0] += v[2];
	sporttournament24_pd[489] = 2. * x[207];
	v[2] = sporttournament24_pd[489] * x[235];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[490] = 2. * x[208];
	v[1] = sporttournament24_pd[490] * x[258];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[491] = 2. * x[209];
	v[2] = sporttournament24_pd[491] * x[210];
	v[0] += v[2];
	sporttournament24_pd[492] = 2. * x[212];
	v[2] = sporttournament24_pd[492] * x[227];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[493] = 2. * x[213];
	v[1] = sporttournament24_pd[493] * x[214];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[494] = 2. * x[213];
	v[2] = sporttournament24_pd[494] * x[215];
	v[0] += v[2];
	sporttournament24_pd[495] = 2. * x[217];
	v[2] = sporttournament24_pd[495] * x[228];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[496] = 2. * x[218];
	v[1] = sporttournament24_pd[496] * x[264];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[497] = 2. * x[219];
	v[2] = sporttournament24_pd[497] * x[220];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[498] = 2. * x[219];
	v[1] = sporttournament24_pd[498] * x[221];
	v[0] += v[1];
	sporttournament24_pd[499] = 2. * x[222];
	v[1] = sporttournament24_pd[499] * x[223];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[500] = 2. * x[224];
	v[2] = sporttournament24_pd[500] * x[225];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[501] = 2. * x[225];
	v[1] = sporttournament24_pd[501] * x[270];
	v[0] += v[1];
	sporttournament24_pd[502] = 2. * x[226];
	v[1] = sporttournament24_pd[502] * x[256];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[503] = 2. * x[229];
	v[2] = sporttournament24_pd[503] * x[260];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[504] = 2. * x[230];
	v[1] = sporttournament24_pd[504] * x[259];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[505] = 2. * x[231];
	v[2] = sporttournament24_pd[505] * x[269];
	v[0] += v[2];
	sporttournament24_pd[506] = 2. * x[232];
	v[2] = sporttournament24_pd[506] * x[233];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[507] = 2. * x[234];
	v[1] = sporttournament24_pd[507] * x[253];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[508] = 2. * x[236];
	v[2] = sporttournament24_pd[508] * x[257];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[509] = 2. * x[239];
	v[1] = sporttournament24_pd[509] * x[243];
	v[0] += v[1];
	sporttournament24_pd[510] = 2. * x[240];
	v[1] = sporttournament24_pd[510] * x[248];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[511] = 2. * x[241];
	v[2] = sporttournament24_pd[511] * x[265];
	v[0] += v[2];
	sporttournament24_pd[512] = 2. * x[241];
	v[2] = sporttournament24_pd[512] * x[269];
	v[0] += v[2];
	sporttournament24_pd[513] = 2. * x[242];
	v[2] = sporttournament24_pd[513] * x[246];
	v[0] += v[2];
	sporttournament24_pd[514] = 2. * x[243];
	v[2] = sporttournament24_pd[514] * x[244];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[515] = 2. * x[245];
	v[1] = sporttournament24_pd[515] * x[267];
	v[0] += v[1];
	sporttournament24_pd[516] = 2. * x[245];
	v[1] = sporttournament24_pd[516] * x[272];
	v[0] += v[1];
	sporttournament24_pd[517] = 2. * x[246];
	v[1] = sporttournament24_pd[517] * x[270];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[518] = 2. * x[247];
	v[2] = sporttournament24_pd[518] * x[251];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[519] = 2. * x[251];
	v[1] = sporttournament24_pd[519] * x[254];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[520] = 2. * x[251];
	v[2] = sporttournament24_pd[520] * x[255];
	v[0] += v[2];
	sporttournament24_pd[521] = 2. * x[254];
	v[2] = sporttournament24_pd[521] * x[257];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[522] = 2. * x[255];
	v[1] = sporttournament24_pd[522] * x[260];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[523] = 2. * x[258];
	v[2] = sporttournament24_pd[523] * x[264];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[524] = 2. * x[263];
	v[1] = sporttournament24_pd[524] * x[275];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[525] = 2. * x[268];
	v[2] = sporttournament24_pd[525] * x[269];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament24_pd[526] = 2. * x[271];
	v[1] = sporttournament24_pd[526] * x[272];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament24_pd[527] = 2. * x[273];
	v[2] = sporttournament24_pd[527] * x[274];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += -2.*x[5];
	t1 += -2.*x[6];
	t1 += -2.*x[7];
	t1 += -2.*x[8];
	t1 += -2.*x[9];
	t1 += -2.*x[10];
	t1 += -2.*x[11];
	t1 += -2.*x[12];
	t1 += -2.*x[13];
	t1 += -2.*x[14];
	t1 += -2.*x[15];
	t1 += -4.*x[16];
	t1 += -2.*x[17];
	t1 += -2.*x[18];
	t1 += -2.*x[19];
	t1 += -4.*x[20];
	t1 += -2.*x[21];
	t1 += -4.*x[22];
	t1 += -2.*x[23];
	t1 += -2.*x[24];
	t1 += -2.*x[25];
	t1 += -4.*x[26];
	t1 += -4.*x[27];
	t1 += -2.*x[28];
	t1 += -4.*x[29];
	t1 += -4.*x[30];
	t1 += -4.*x[31];
	t1 += -4.*x[32];
	t1 += -2.*x[33];
	t1 += -2.*x[34];
	t1 += -2.*x[35];
	t1 += -2.*x[36];
	t1 += -4.*x[37];
	t1 += 2.*x[38];
	t1 += -2.*x[39];
	t1 += -4.*x[40];
	t1 += 2.*x[41];
	t1 += -4.*x[42];
	t1 += -4.*x[43];
	t1 += -4.*x[44];
	t1 += -2.*x[45];
	t1 += -4.*x[46];
	t1 += -4.*x[47];
	t1 += -4.*x[48];
	t1 += -2.*x[49];
	t1 += -2.*x[50];
	t1 += -4.*x[51];
	t1 += 2.*x[52];
	t1 += -4.*x[53];
	t1 += -2.*x[54];
	t1 += -2.*x[55];
	t1 += -2.*x[56];
	t1 += 2.*x[57];
	t1 += 2.*x[58];
	t1 += -4.*x[59];
	t1 += -2.*x[60];
	t1 += -4.*x[61];
	t1 += -4.*x[62];
	t1 += -4.*x[63];
	t1 += -4.*x[64];
	t1 += -2.*x[65];
	t1 += -4.*x[66];
	t1 += 2.*x[67];
	t1 += 4.*x[68];
	t1 += -4.*x[69];
	t1 += -2.*x[70];
	t1 += -2.*x[71];
	t1 += -2.*x[72];
	t1 += -2.*x[73];
	t1 += -2.*x[74];
	t1 += 4.*x[75];
	t1 += 2.*x[76];
	t1 += -4.*x[77];
	t1 += -2.*x[78];
	t1 += -4.*x[79];
	t1 += -4.*x[80];
	t1 += -4.*x[81];
	t1 += -4.*x[82];
	t1 += -2.*x[83];
	t1 += -4.*x[84];
	t1 += -4.*x[85];
	t1 += -4.*x[86];
	t1 += -2.*x[87];
	t1 += 4.*x[88];
	t1 += -2.*x[89];
	t1 += -2.*x[90];
	t1 += 2.*x[91];
	t1 += -2.*x[92];
	t1 += -2.*x[93];
	t1 += 4.*x[94];
	t1 += -2.*x[95];
	t1 += -4.*x[96];
	t1 += -4.*x[97];
	t1 += -2.*x[98];
	t1 += -4.*x[99];
	t1 += -4.*x[100];
	t1 += 2.*x[101];
	t1 += -2.*x[102];
	t1 += -4.*x[103];
	t1 += -2.*x[104];
	t1 += -4.*x[105];
	t1 += -4.*x[106];
	t1 += -2.*x[107];
	t1 += -2.*x[108];
	t1 += 4.*x[109];
	t1 += -4.*x[110];
	t1 += -2.*x[111];
	t1 += -2.*x[112];
	t1 += 2.*x[113];
	t1 += 2.*x[114];
	t1 += -2.*x[115];
	t1 += -4.*x[116];
	t1 += -2.*x[117];
	t1 += -2.*x[118];
	t1 += -2.*x[119];
	t1 += -4.*x[120];
	t1 += -4.*x[121];
	t1 += -2.*x[122];
	t1 += -4.*x[123];
	t1 += 2.*x[124];
	t1 += -2.*x[125];
	t1 += -4.*x[126];
	t1 += -2.*x[127];
	t1 += 2.*x[128];
	t1 += 2.*x[129];
	t1 += 2.*x[130];
	t1 += -4.*x[131];
	t1 += -2.*x[132];
	t1 += -2.*x[133];
	t1 += -2.*x[134];
	t1 += 2.*x[135];
	t1 += -2.*x[136];
	t1 += 2.*x[137];
	t1 += -2.*x[138];
	t1 += 2.*x[139];
	t1 += -4.*x[140];
	t1 += -2.*x[141];
	t1 += -4.*x[142];
	t1 += -4.*x[143];
	t1 += -2.*x[144];
	t1 += -4.*x[145];
	t1 += 2.*x[146];
	t1 += -2.*x[147];
	t1 += -2.*x[148];
	t1 += -2.*x[149];
	t1 += -2.*x[150];
	t1 += -2.*x[151];
	t1 += -4.*x[152];
	t1 += -2.*x[153];
	t1 += 2.*x[154];
	t1 += 4.*x[155];
	t1 += -2.*x[156];
	t1 += -2.*x[157];
	t1 += -4.*x[158];
	t1 += -4.*x[159];
	t1 += -2.*x[160];
	t1 += -2.*x[161];
	t1 += -2.*x[162];
	t1 += -4.*x[163];
	t1 += 4.*x[164];
	t1 += -2.*x[165];
	t1 += -2.*x[166];
	t1 += -4.*x[167];
	t1 += -2.*x[168];
	t1 += -2.*x[169];
	t1 += -2.*x[170];
	t1 += -4.*x[171];
	t1 += -4.*x[172];
	t1 += -4.*x[173];
	t1 += 2.*x[174];
	t1 += -2.*x[175];
	t1 += -2.*x[176];
	t1 += -2.*x[177];
	t1 += -2.*x[178];
	t1 += -2.*x[179];
	t1 += -4.*x[180];
	t1 += -2.*x[181];
	t1 += x[276];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[274] = -sporttournament24_pd[527];
	J[273] = -x[274]*2.;
	J[272] = -sporttournament24_pd[526];
	J[271] = -x[272]*2.;
	J[269] = -sporttournament24_pd[525];
	J[268] = -x[269]*2.;
	J[275] = -sporttournament24_pd[524];
	J[263] = -x[275]*2.;
	J[264] = -sporttournament24_pd[523];
	J[258] = -x[264]*2.;
	J[260] = -sporttournament24_pd[522];
	J[255] = -x[260]*2.;
	J[257] = -sporttournament24_pd[521];
	J[254] = -x[257]*2.;
	J[255] += sporttournament24_pd[520];
	J[251] = x[255]*2.;
	J[254] -= sporttournament24_pd[519];
	J[251] -= x[254]*2.;
	J[251] -= sporttournament24_pd[518];
	J[247] = -x[251]*2.;
	J[270] = -sporttournament24_pd[517];
	J[246] = -x[270]*2.;
	J[272] += sporttournament24_pd[516];
	J[245] = x[272]*2.;
	J[267] = sporttournament24_pd[515];
	J[245] += x[267]*2.;
	J[244] = -sporttournament24_pd[514];
	J[243] = -x[244]*2.;
	J[246] += sporttournament24_pd[513];
	J[242] = x[246]*2.;
	J[269] += sporttournament24_pd[512];
	J[241] = x[269]*2.;
	J[265] = sporttournament24_pd[511];
	J[241] += x[265]*2.;
	J[248] = -sporttournament24_pd[510];
	J[240] = -x[248]*2.;
	J[243] += sporttournament24_pd[509];
	J[239] = x[243]*2.;
	J[257] -= sporttournament24_pd[508];
	J[236] = -x[257]*2.;
	J[253] = -sporttournament24_pd[507];
	J[234] = -x[253]*2.;
	J[233] = -sporttournament24_pd[506];
	J[232] = -x[233]*2.;
	J[269] += sporttournament24_pd[505];
	J[231] = x[269]*2.;
	J[259] = -sporttournament24_pd[504];
	J[230] = -x[259]*2.;
	J[260] -= sporttournament24_pd[503];
	J[229] = -x[260]*2.;
	J[256] = -sporttournament24_pd[502];
	J[226] = -x[256]*2.;
	J[270] += sporttournament24_pd[501];
	J[225] = x[270]*2.;
	J[225] -= sporttournament24_pd[500];
	J[224] = -x[225]*2.;
	J[223] = -sporttournament24_pd[499];
	J[222] = -x[223]*2.;
	J[221] = sporttournament24_pd[498];
	J[219] = x[221]*2.;
	J[220] = -sporttournament24_pd[497];
	J[219] -= x[220]*2.;
	J[264] -= sporttournament24_pd[496];
	J[218] = -x[264]*2.;
	J[228] = -sporttournament24_pd[495];
	J[217] = -x[228]*2.;
	J[215] = sporttournament24_pd[494];
	J[213] = x[215]*2.;
	J[214] = -sporttournament24_pd[493];
	J[213] -= x[214]*2.;
	J[227] = -sporttournament24_pd[492];
	J[212] = -x[227]*2.;
	J[210] = sporttournament24_pd[491];
	J[209] = x[210]*2.;
	J[258] -= sporttournament24_pd[490];
	J[208] = -x[258]*2.;
	J[235] = -sporttournament24_pd[489];
	J[207] = -x[235]*2.;
	J[206] = sporttournament24_pd[488];
	J[204] = x[206]*2.;
	J[205] = -sporttournament24_pd[487];
	J[204] -= x[205]*2.;
	J[213] += sporttournament24_pd[486];
	J[202] = x[213]*2.;
	J[244] -= sporttournament24_pd[485];
	J[199] = -x[244]*2.;
	J[225] -= sporttournament24_pd[484];
	J[197] = -x[225]*2.;
	J[222] += sporttournament24_pd[483];
	J[197] += x[222]*2.;
	J[197] -= sporttournament24_pd[482];
	J[196] = -x[197]*2.;
	J[203] = -sporttournament24_pd[481];
	J[195] = -x[203]*2.;
	J[208] += sporttournament24_pd[480];
	J[194] = x[208]*2.;
	J[232] += sporttournament24_pd[479];
	J[193] = x[232]*2.;
	J[222] += sporttournament24_pd[478];
	J[193] += x[222]*2.;
	J[193] -= sporttournament24_pd[477];
	J[192] = -x[193]*2.;
	J[233] -= sporttournament24_pd[476];
	J[191] = -x[233]*2.;
	J[231] -= sporttournament24_pd[475];
	J[191] -= x[231]*2.;
	J[211] = -sporttournament24_pd[474];
	J[190] = -x[211]*2.;
	J[222] -= sporttournament24_pd[473];
	J[189] = -x[222]*2.;
	J[191] += sporttournament24_pd[472];
	J[189] += x[191]*2.;
	J[190] -= sporttournament24_pd[471];
	J[189] -= x[190]*2.;
	J[199] += sporttournament24_pd[470];
	J[188] = x[199]*2.;
	J[216] = -sporttournament24_pd[469];
	J[187] = -x[216]*2.;
	J[232] -= sporttournament24_pd[468];
	J[186] = -x[232]*2.;
	J[187] -= sporttournament24_pd[467];
	J[186] -= x[187]*2.;
	J[194] += sporttournament24_pd[466];
	J[185] = x[194]*2.;
	J[185] -= sporttournament24_pd[465];
	J[184] = -x[185]*2.;
	J[208] -= sporttournament24_pd[464];
	J[183] = -x[208]*2.;
	J[217] += sporttournament24_pd[463];
	J[182] = x[217]*2.;
	J[274] += sporttournament24_pd[462];
	J[181] = x[274]*2. + -2.;
	J[181] += sporttournament24_pd[461];
	J[180] = x[181]*2. + -4.;
	J[274] += sporttournament24_pd[460];
	J[179] = x[274]*2. + -2.;
	J[185] -= sporttournament24_pd[459];
	J[179] -= x[185]*2.;
	J[274] -= sporttournament24_pd[458];
	J[178] = -x[274]*2. + -2.;
	J[194] -= sporttournament24_pd[457];
	J[177] = -x[194]*2. + -2.;
	J[179] += sporttournament24_pd[456];
	J[177] += x[179]*2.;
	J[178] += sporttournament24_pd[455];
	J[177] += x[178]*2.;
	J[177] += sporttournament24_pd[454];
	J[176] = x[177]*2. + -2.;
	J[254] += sporttournament24_pd[453];
	J[175] = x[254]*2. + -2.;
	J[239] -= sporttournament24_pd[452];
	J[175] -= x[239]*2.;
	J[176] += sporttournament24_pd[451];
	J[175] += x[176]*2.;
	J[218] -= sporttournament24_pd[450];
	J[174] = -x[218]*2. + 2.;
	J[200] = -sporttournament24_pd[449];
	J[174] -= x[200]*2.;
	J[176] -= sporttournament24_pd[448];
	J[174] -= x[176]*2.;
	J[199] += sporttournament24_pd[447];
	J[173] = x[199]*2. + -4.;
	J[175] += sporttournament24_pd[446];
	J[173] += x[175]*2.;
	J[275] += sporttournament24_pd[445];
	J[172] = x[275]*2. + -4.;
	J[173] += sporttournament24_pd[444];
	J[172] += x[173]*2.;
	J[173] += sporttournament24_pd[443];
	J[171] = x[173]*2. + -4.;
	J[243] -= sporttournament24_pd[442];
	J[170] = -x[243]*2. + -2.;
	J[172] += sporttournament24_pd[441];
	J[170] += x[172]*2.;
	J[275] += sporttournament24_pd[440];
	J[169] = x[275]*2. + -2.;
	J[256] += sporttournament24_pd[439];
	J[169] += x[256]*2.;
	J[263] += sporttournament24_pd[438];
	J[168] = x[263]*2. + -2.;
	J[169] += sporttournament24_pd[437];
	J[168] += x[169]*2.;
	J[256] += sporttournament24_pd[436];
	J[167] = x[256]*2. + -4.;
	J[212] += sporttournament24_pd[435];
	J[167] += x[212]*2.;
	J[262] = sporttournament24_pd[434];
	J[166] = x[262]*2. + -2.;
	J[226] += sporttournament24_pd[433];
	J[166] += x[226]*2.;
	J[224] -= sporttournament24_pd[432];
	J[166] -= x[224]*2.;
	J[167] += sporttournament24_pd[431];
	J[166] += x[167]*2.;
	J[262] += sporttournament24_pd[430];
	J[165] = x[262]*2. + -2.;
	J[262] -= sporttournament24_pd[429];
	J[164] = -x[262]*2. + 4.;
	J[261] = -sporttournament24_pd[428];
	J[164] -= x[261]*2.;
	J[250] = sporttournament24_pd[427];
	J[163] = x[250]*2. + -4.;
	J[165] += sporttournament24_pd[426];
	J[163] += x[165]*2.;
	J[165] -= sporttournament24_pd[425];
	J[162] = -x[165]*2. + -2.;
	J[252] = sporttournament24_pd[424];
	J[161] = x[252]*2. + -2.;
	J[206] -= sporttournament24_pd[423];
	J[161] -= x[206]*2.;
	J[163] += sporttournament24_pd[422];
	J[161] += x[163]*2.;
	J[249] = -sporttournament24_pd[421];
	J[160] = -x[249]*2. + -2.;
	J[163] += sporttournament24_pd[420];
	J[160] += x[163]*2.;
	J[203] += sporttournament24_pd[419];
	J[159] = x[203]*2. + -4.;
	J[161] += sporttournament24_pd[418];
	J[159] += x[161]*2.;
	J[237] = sporttournament24_pd[417];
	J[158] = x[237]*2. + -4.;
	J[231] += sporttournament24_pd[416];
	J[158] += x[231]*2.;
	J[159] += sporttournament24_pd[415];
	J[158] += x[159]*2.;
	J[272] += sporttournament24_pd[414];
	J[157] = x[272]*2. + -2.;
	J[158] += sporttournament24_pd[413];
	J[157] += x[158]*2.;
	J[231] -= sporttournament24_pd[412];
	J[156] = -x[231]*2. + -2.;
	J[201] = sporttournament24_pd[411];
	J[156] += x[201]*2.;
	J[195] += sporttournament24_pd[410];
	J[156] += x[195]*2.;
	J[269] -= sporttournament24_pd[409];
	J[155] = -x[269]*2. + 4.;
	J[267] -= sporttournament24_pd[408];
	J[155] -= x[267]*2.;
	J[215] -= sporttournament24_pd[407];
	J[155] -= x[215]*2.;
	J[241] -= sporttournament24_pd[406];
	J[154] = -x[241]*2. + 2.;
	J[209] -= sporttournament24_pd[405];
	J[154] -= x[209]*2.;
	J[184] += sporttournament24_pd[404];
	J[152] = x[184]*2. + -4.;
	J[153] = sporttournament24_pd[403] + -2.;
	J[152] += x[153]*2.;
	J[184] -= sporttournament24_pd[402];
	J[151] = -x[184]*2. + -2.;
	J[153] += sporttournament24_pd[401];
	J[151] += x[153]*2.;
	J[152] += sporttournament24_pd[400];
	J[150] = x[152]*2. + -2.;
	J[200] -= sporttournament24_pd[399];
	J[149] = -x[200]*2. + -2.;
	J[150] += sporttournament24_pd[398];
	J[149] += x[150]*2.;
	J[200] += sporttournament24_pd[397];
	J[148] = x[200]*2. + -2.;
	J[188] += sporttournament24_pd[396];
	J[148] += x[188]*2.;
	J[150] -= sporttournament24_pd[395];
	J[148] -= x[150]*2.;
	J[257] += sporttournament24_pd[394];
	J[147] = x[257]*2. + -2.;
	J[149] += sporttournament24_pd[393];
	J[147] += x[149]*2.;
	J[229] -= sporttournament24_pd[392];
	J[146] = -x[229]*2. + 2.;
	J[194] -= sporttournament24_pd[391];
	J[146] -= x[194]*2.;
	J[147] -= sporttournament24_pd[390];
	J[146] -= x[147]*2.;
	J[257] += sporttournament24_pd[389];
	J[145] = x[257]*2. + -4.;
	J[275] -= sporttournament24_pd[388];
	J[144] = -x[275]*2. + -2.;
	J[183] += sporttournament24_pd[387];
	J[144] += x[183]*2.;
	J[145] += sporttournament24_pd[386];
	J[144] += x[145]*2.;
	J[145] += sporttournament24_pd[385];
	J[143] = x[145]*2. + -4.;
	J[144] += sporttournament24_pd[384];
	J[142] = x[144]*2. + -4.;
	J[263] += sporttournament24_pd[383];
	J[141] = x[263]*2. + -2.;
	J[227] -= sporttournament24_pd[382];
	J[141] -= x[227]*2.;
	J[207] += sporttournament24_pd[381];
	J[140] = x[207]*2. + -4.;
	J[168] += sporttournament24_pd[380];
	J[140] += x[168]*2.;
	J[253] += sporttournament24_pd[379];
	J[139] = x[253]*2. + 2.;
	J[217] -= sporttournament24_pd[378];
	J[139] -= x[217]*2.;
	J[168] -= sporttournament24_pd[377];
	J[139] -= x[168]*2.;
	J[266] = sporttournament24_pd[376];
	J[138] = x[266]*2. + -2.;
	J[234] += sporttournament24_pd[375];
	J[138] += x[234]*2.;
	J[140] += sporttournament24_pd[374];
	J[138] += x[140]*2.;
	J[138] -= sporttournament24_pd[373];
	J[137] = -x[138]*2. + 2.;
	J[266] += sporttournament24_pd[372];
	J[136] = x[266]*2. + -2.;
	J[205] -= sporttournament24_pd[371];
	J[136] -= x[205]*2.;
	J[137] += sporttournament24_pd[370];
	J[136] += x[137]*2.;
	J[266] -= sporttournament24_pd[369];
	J[135] = -x[266]*2. + 2.;
	J[261] += sporttournament24_pd[368];
	J[135] += x[261]*2.;
	J[160] += sporttournament24_pd[367];
	J[134] = x[160]*2. + -2.;
	J[136] += sporttournament24_pd[366];
	J[134] += x[136]*2.;
	J[252] -= sporttournament24_pd[365];
	J[133] = -x[252]*2. + -2.;
	J[211] += sporttournament24_pd[364];
	J[133] += x[211]*2.;
	J[134] += sporttournament24_pd[363];
	J[133] += x[134]*2.;
	J[203] -= sporttournament24_pd[362];
	J[132] = -x[203]*2. + -2.;
	J[160] += sporttournament24_pd[361];
	J[132] += x[160]*2.;
	J[271] += sporttournament24_pd[360];
	J[131] = x[271]*2. + -4.;
	J[157] += sporttournament24_pd[359];
	J[131] += x[157]*2.;
	J[132] += sporttournament24_pd[358];
	J[131] += x[132]*2.;
	J[219] -= sporttournament24_pd[357];
	J[130] = -x[219]*2. + 2.;
	J[157] -= sporttournament24_pd[356];
	J[130] -= x[157]*2.;
	J[272] -= sporttournament24_pd[355];
	J[129] = -x[272]*2. + 2.;
	J[210] -= sporttournament24_pd[354];
	J[129] -= x[210]*2.;
	J[245] -= sporttournament24_pd[353];
	J[128] = -x[245]*2. + 2.;
	J[201] -= sporttournament24_pd[352];
	J[128] -= x[201]*2.;
	J[273] += sporttournament24_pd[351];
	J[127] = x[273]*2. + -2.;
	J[178] += sporttournament24_pd[350];
	J[126] = x[178]*2. + -4.;
	J[176] += sporttournament24_pd[349];
	J[126] += x[176]*2.;
	J[260] += sporttournament24_pd[348];
	J[125] = x[260]*2. + -2.;
	J[126] += sporttournament24_pd[347];
	J[125] += x[126]*2.;
	J[236] -= sporttournament24_pd[346];
	J[124] = -x[236]*2. + 2.;
	J[188] -= sporttournament24_pd[345];
	J[124] -= x[188]*2.;
	J[125] -= sporttournament24_pd[344];
	J[124] -= x[125]*2.;
	J[260] += sporttournament24_pd[343];
	J[123] = x[260]*2. + -4.;
	J[124] += sporttournament24_pd[342];
	J[123] += x[124]*2.;
	J[183] -= sporttournament24_pd[341];
	J[122] = -x[183]*2. + -2.;
	J[142] += sporttournament24_pd[340];
	J[122] += x[142]*2.;
	J[123] += sporttournament24_pd[339];
	J[122] += x[123]*2.;
	J[218] += sporttournament24_pd[338];
	J[121] = x[218]*2. + -4.;
	J[123] += sporttournament24_pd[337];
	J[121] += x[123]*2.;
	J[171] += sporttournament24_pd[336];
	J[120] = x[171]*2. + -4.;
	J[122] += sporttournament24_pd[335];
	J[120] += x[122]*2.;
	J[142] += sporttournament24_pd[334];
	J[119] = x[142]*2. + -2.;
	J[141] += sporttournament24_pd[333];
	J[119] += x[141]*2.;
	J[256] -= sporttournament24_pd[332];
	J[118] = -x[256]*2. + -2.;
	J[142] += sporttournament24_pd[331];
	J[118] += x[142]*2.;
	J[235] -= sporttournament24_pd[330];
	J[117] = -x[235]*2. + -2.;
	J[119] += sporttournament24_pd[329];
	J[117] += x[119]*2.;
	J[198] = sporttournament24_pd[328];
	J[116] = x[198]*2. + -4.;
	J[141] += sporttournament24_pd[327];
	J[116] += x[141]*2.;
	J[270] += sporttournament24_pd[326];
	J[115] = x[270]*2. + -2.;
	J[238] = sporttournament24_pd[325];
	J[115] += x[238]*2.;
	J[116] += sporttournament24_pd[324];
	J[115] += x[116]*2.;
	J[212] -= sporttournament24_pd[323];
	J[114] = -x[212]*2. + 2.;
	J[165] += sporttournament24_pd[322];
	J[114] += x[165]*2.;
	J[135] -= sporttournament24_pd[321];
	J[114] -= x[135]*2.;
	J[115] -= sporttournament24_pd[320];
	J[114] -= x[115]*2.;
	J[270] -= sporttournament24_pd[319];
	J[113] = -x[270]*2. + 2.;
	J[193] -= sporttournament24_pd[318];
	J[113] -= x[193]*2.;
	J[137] -= sporttournament24_pd[317];
	J[113] -= x[137]*2.;
	J[250] -= sporttournament24_pd[316];
	J[112] = -x[250]*2. + -2.;
	J[225] += sporttournament24_pd[315];
	J[112] += x[225]*2.;
	J[133] += sporttournament24_pd[314];
	J[112] += x[133]*2.;
	J[216] += sporttournament24_pd[313];
	J[111] = x[216]*2. + -2.;
	J[112] += sporttournament24_pd[312];
	J[111] += x[112]*2.;
	J[271] += sporttournament24_pd[311];
	J[110] = x[271]*2. + -4.;
	J[268] += sporttournament24_pd[310];
	J[110] += x[268]*2.;
	J[252] += sporttournament24_pd[309];
	J[110] += x[252]*2.;
	J[211] += sporttournament24_pd[308];
	J[110] += x[211]*2.;
	J[271] -= sporttournament24_pd[307];
	J[109] = -x[271]*2. + 4.;
	J[241] -= sporttournament24_pd[306];
	J[109] -= x[241]*2.;
	J[213] -= sporttournament24_pd[305];
	J[109] -= x[213]*2.;
	J[201] += sporttournament24_pd[304];
	J[108] = x[201]*2. + -2.;
	J[129] += sporttournament24_pd[303];
	J[108] += x[129]*2.;
	J[180] += sporttournament24_pd[302];
	J[107] = x[180]*2. + -2.;
	J[179] += sporttournament24_pd[301];
	J[106] = x[179]*2. + -4.;
	J[107] += sporttournament24_pd[300];
	J[106] += x[107]*2.;
	J[180] += sporttournament24_pd[299];
	J[105] = x[180]*2. + -4.;
	J[149] += sporttournament24_pd[298];
	J[105] += x[149]*2.;
	J[180] += sporttournament24_pd[297];
	J[104] = x[180]*2. + -2.;
	J[148] += sporttournament24_pd[296];
	J[104] += x[148]*2.;
	J[127] -= sporttournament24_pd[295];
	J[104] -= x[127]*2.;
	J[147] += sporttournament24_pd[294];
	J[103] = x[147]*2. + -4.;
	J[105] += sporttournament24_pd[293];
	J[103] += x[105]*2.;
	J[264] += sporttournament24_pd[292];
	J[102] = x[264]*2. + -2.;
	J[103] += sporttournament24_pd[291];
	J[102] += x[103]*2.;
	J[239] -= sporttournament24_pd[290];
	J[101] = -x[239]*2. + 2.;
	J[145] += sporttournament24_pd[289];
	J[101] += x[145]*2.;
	J[102] -= sporttournament24_pd[288];
	J[101] -= x[102]*2.;
	J[264] += sporttournament24_pd[287];
	J[100] = x[264]*2. + -4.;
	J[171] += sporttournament24_pd[286];
	J[100] += x[171]*2.;
	J[146] += sporttournament24_pd[285];
	J[100] += x[146]*2.;
	J[229] += sporttournament24_pd[284];
	J[99] = x[229]*2. + -4.;
	J[100] += sporttournament24_pd[283];
	J[99] += x[100]*2.;
	J[171] += sporttournament24_pd[282];
	J[98] = x[171]*2. + -2.;
	J[143] += sporttournament24_pd[281];
	J[98] += x[143]*2.;
	J[119] -= sporttournament24_pd[280];
	J[98] -= x[119]*2.;
	J[217] += sporttournament24_pd[279];
	J[97] = x[217]*2. + -4.;
	J[170] += sporttournament24_pd[278];
	J[97] += x[170]*2.;
	J[120] += sporttournament24_pd[277];
	J[97] += x[120]*2.;
	J[117] += sporttournament24_pd[276];
	J[97] += x[117]*2.;
	J[120] += sporttournament24_pd[275];
	J[96] = x[120]*2. + -4.;
	J[246] += sporttournament24_pd[274];
	J[95] = x[246]*2. + -2.;
	J[198] -= sporttournament24_pd[273];
	J[95] -= x[198]*2.;
	J[117] += sporttournament24_pd[272];
	J[95] += x[117]*2.;
	J[246] -= sporttournament24_pd[271];
	J[94] = -x[246]*2. + 4.;
	J[207] -= sporttournament24_pd[270];
	J[94] -= x[207]*2.;
	J[204] -= sporttournament24_pd[269];
	J[94] -= x[204]*2.;
	J[164] -= sporttournament24_pd[268];
	J[94] -= x[164]*2.;
	J[113] += sporttournament24_pd[267];
	J[93] = x[113]*2. + -2.;
	J[111] += sporttournament24_pd[266];
	J[93] += x[111]*2.;
	J[261] += sporttournament24_pd[265];
	J[92] = x[261]*2. + -2.;
	J[237] -= sporttournament24_pd[264];
	J[92] -= x[237]*2.;
	J[223] += sporttournament24_pd[263];
	J[92] += x[223]*2.;
	J[93] += sporttournament24_pd[262];
	J[92] += x[93]*2.;
	J[131] += sporttournament24_pd[261];
	J[91] = x[131]*2. + 2.;
	J[111] -= sporttournament24_pd[260];
	J[91] -= x[111]*2.;
	J[268] += sporttournament24_pd[259];
	J[90] = x[268]*2. + -2.;
	J[249] -= sporttournament24_pd[258];
	J[90] -= x[249]*2.;
	J[216] += sporttournament24_pd[257];
	J[90] += x[216]*2.;
	J[90] += sporttournament24_pd[256];
	J[89] = x[90]*2. + -2.;
	J[268] -= sporttournament24_pd[255];
	J[88] = -x[268]*2. + 4.;
	J[245] -= sporttournament24_pd[254];
	J[88] -= x[245]*2.;
	J[209] -= sporttournament24_pd[253];
	J[88] -= x[209]*2.;
	J[151] += sporttournament24_pd[252];
	J[87] = x[151]*2. + -2.;
	J[150] += sporttournament24_pd[251];
	J[86] = x[150]*2. + -4.;
	J[87] += sporttournament24_pd[250];
	J[86] += x[87]*2.;
	J[151] += sporttournament24_pd[249];
	J[85] = x[151]*2. + -4.;
	J[126] += sporttournament24_pd[248];
	J[85] += x[126]*2.;
	J[125] += sporttournament24_pd[247];
	J[84] = x[125]*2. + -4.;
	J[85] += sporttournament24_pd[246];
	J[84] += x[85]*2.;
	J[199] -= sporttournament24_pd[245];
	J[83] = -x[199]*2. + -2.;
	J[84] += sporttournament24_pd[244];
	J[83] += x[84]*2.;
	J[83] += sporttournament24_pd[243];
	J[82] = x[83]*2. + -4.;
	J[174] += sporttournament24_pd[242];
	J[81] = x[174]*2. + -4.;
	J[143] += sporttournament24_pd[241];
	J[81] += x[143]*2.;
	J[82] += sporttournament24_pd[240];
	J[81] += x[82]*2.;
	J[208] += sporttournament24_pd[239];
	J[80] = x[208]*2. + -4.;
	J[172] += sporttournament24_pd[238];
	J[80] += x[172]*2.;
	J[82] += sporttournament24_pd[237];
	J[80] += x[82]*2.;
	J[236] += sporttournament24_pd[236];
	J[79] = x[236]*2. + -4.;
	J[81] += sporttournament24_pd[235];
	J[79] += x[81]*2.;
	J[263] -= sporttournament24_pd[234];
	J[78] = -x[263]*2. + -2.;
	J[143] += sporttournament24_pd[233];
	J[78] += x[143]*2.;
	J[121] += sporttournament24_pd[232];
	J[78] += x[121]*2.;
	J[98] += sporttournament24_pd[231];
	J[77] = x[98]*2. + -4.;
	J[266] -= sporttournament24_pd[230];
	J[76] = -x[266]*2. + 2.;
	J[242] -= sporttournament24_pd[229];
	J[76] -= x[242]*2.;
	J[235] += sporttournament24_pd[228];
	J[76] += x[235]*2.;
	J[198] -= sporttournament24_pd[227];
	J[75] = -x[198]*2. + 4.;
	J[196] -= sporttournament24_pd[226];
	J[75] -= x[196]*2.;
	J[76] -= sporttournament24_pd[225];
	J[75] -= x[76]*2.;
	J[232] += sporttournament24_pd[224];
	J[74] = x[232]*2. + -2.;
	J[192] += sporttournament24_pd[223];
	J[74] += x[192]*2.;
	J[135] -= sporttournament24_pd[222];
	J[74] -= x[135]*2.;
	J[261] -= sporttournament24_pd[221];
	J[73] = -x[261]*2. + -2.;
	J[249] += sporttournament24_pd[220];
	J[73] += x[249]*2.;
	J[233] += sporttournament24_pd[219];
	J[73] += x[233]*2.;
	J[162] += sporttournament24_pd[218];
	J[73] += x[162]*2.;
	J[252] -= sporttournament24_pd[217];
	J[72] = -x[252]*2. + -2.;
	J[223] += sporttournament24_pd[216];
	J[72] += x[223]*2.;
	J[89] += sporttournament24_pd[215];
	J[72] += x[89]*2.;
	J[223] -= sporttournament24_pd[214];
	J[71] = -x[223]*2. + -2.;
	J[186] += sporttournament24_pd[213];
	J[71] += x[186]*2.;
	J[72] += sporttournament24_pd[212];
	J[70] = x[72]*2. + -2.;
	J[89] += sporttournament24_pd[211];
	J[69] = x[89]*2. + -4.;
	J[201] -= sporttournament24_pd[210];
	J[68] = -x[201]*2. + 4.;
	J[129] -= sporttournament24_pd[209];
	J[68] -= x[129]*2.;
	J[89] -= sporttournament24_pd[208];
	J[68] -= x[89]*2.;
	J[265] -= sporttournament24_pd[207];
	J[67] = -x[265]*2. + 2.;
	J[221] -= sporttournament24_pd[206];
	J[67] -= x[221]*2.;
	J[202] -= sporttournament24_pd[205];
	J[67] -= x[202]*2.;
	J[69] += sporttournament24_pd[204];
	J[67] += x[69]*2.;
	J[214] += sporttournament24_pd[203];
	J[66] = x[214]*2. + -4.;
	J[130] += sporttournament24_pd[202];
	J[66] += x[130]*2.;
	J[69] += sporttournament24_pd[201];
	J[66] += x[69]*2.;
	J[127] += sporttournament24_pd[200];
	J[65] = x[127]*2. + -2.;
	J[178] += sporttournament24_pd[199];
	J[64] = x[178]*2. + -4.;
	J[65] += sporttournament24_pd[198];
	J[64] += x[65]*2.;
	J[127] += sporttournament24_pd[197];
	J[63] = x[127]*2. + -4.;
	J[103] += sporttournament24_pd[196];
	J[63] += x[103]*2.;
	J[258] += sporttournament24_pd[195];
	J[62] = x[258]*2. + -4.;
	J[102] += sporttournament24_pd[194];
	J[62] += x[102]*2.;
	J[63] += sporttournament24_pd[193];
	J[62] += x[63]*2.;
	J[239] += sporttournament24_pd[192];
	J[61] = x[239]*2. + -4.;
	J[218] += sporttournament24_pd[191];
	J[61] += x[218]*2.;
	J[169] -= sporttournament24_pd[190];
	J[60] = -x[169]*2. + -2.;
	J[121] += sporttournament24_pd[189];
	J[60] += x[121]*2.;
	J[99] += sporttournament24_pd[188];
	J[60] += x[99]*2.;
	J[78] += sporttournament24_pd[187];
	J[59] = x[78]*2. + -4.;
	J[262] -= sporttournament24_pd[186];
	J[58] = -x[262]*2. + 2.;
	J[238] -= sporttournament24_pd[185];
	J[58] -= x[238]*2.;
	J[227] += sporttournament24_pd[184];
	J[58] += x[227]*2.;
	J[250] -= sporttournament24_pd[183];
	J[57] = -x[250]*2. + 2.;
	J[198] += sporttournament24_pd[182];
	J[57] += x[198]*2.;
	J[192] -= sporttournament24_pd[181];
	J[57] -= x[192]*2.;
	J[58] -= sporttournament24_pd[180];
	J[57] -= x[58]*2.;
	J[196] += sporttournament24_pd[179];
	J[56] = x[196]*2. + -2.;
	J[164] -= sporttournament24_pd[178];
	J[56] -= x[164]*2.;
	J[233] += sporttournament24_pd[177];
	J[55] = x[233]*2. + -2.;
	J[91] -= sporttournament24_pd[176];
	J[55] -= x[91]*2.;
	J[70] += sporttournament24_pd[175];
	J[55] += x[70]*2.;
	J[202] -= sporttournament24_pd[174];
	J[54] = -x[202]*2. + -2.;
	J[55] += sporttournament24_pd[173];
	J[54] += x[55]*2.;
	J[259] += sporttournament24_pd[172];
	J[53] = x[259]*2. + -4.;
	J[70] += sporttournament24_pd[171];
	J[53] += x[70]*2.;
	J[209] += sporttournament24_pd[170];
	J[52] = x[209]*2. + 2.;
	J[195] -= sporttournament24_pd[169];
	J[52] -= x[195]*2.;
	J[155] -= sporttournament24_pd[168];
	J[52] -= x[155]*2.;
	J[70] -= sporttournament24_pd[167];
	J[52] -= x[70]*2.;
	J[230] += sporttournament24_pd[166];
	J[51] = x[230]*2. + -4.;
	J[220] += sporttournament24_pd[165];
	J[51] += x[220]*2.;
	J[156] += sporttournament24_pd[164];
	J[51] += x[156]*2.;
	J[53] += sporttournament24_pd[163];
	J[51] += x[53]*2.;
	J[259] += sporttournament24_pd[162];
	J[50] = x[259]*2. + -2.;
	J[66] += sporttournament24_pd[161];
	J[50] += x[66]*2.;
	J[106] += sporttournament24_pd[160];
	J[49] = x[106]*2. + -2.;
	J[247] += sporttournament24_pd[159];
	J[48] = x[247]*2. + -4.;
	J[105] += sporttournament24_pd[158];
	J[48] += x[105]*2.;
	J[49] += sporttournament24_pd[157];
	J[48] += x[49]*2.;
	J[240] += sporttournament24_pd[156];
	J[47] = x[240]*2. + -4.;
	J[106] += sporttournament24_pd[155];
	J[47] += x[106]*2.;
	J[84] += sporttournament24_pd[154];
	J[47] += x[84]*2.;
	J[255] += sporttournament24_pd[153];
	J[46] = x[255]*2. + -4.;
	J[83] += sporttournament24_pd[152];
	J[46] += x[83]*2.;
	J[47] += sporttournament24_pd[151];
	J[46] += x[47]*2.;
	J[255] -= sporttournament24_pd[150];
	J[45] = -x[255]*2. + -2.;
	J[244] += sporttournament24_pd[149];
	J[45] += x[244]*2.;
	J[200] += sporttournament24_pd[148];
	J[45] += x[200]*2.;
	J[183] += sporttournament24_pd[147];
	J[45] += x[183]*2.;
	J[244] += sporttournament24_pd[146];
	J[44] = x[244]*2. + -4.;
	J[229] += sporttournament24_pd[145];
	J[44] += x[229]*2.;
	J[118] += sporttournament24_pd[144];
	J[43] = x[118]*2. + -4.;
	J[99] += sporttournament24_pd[143];
	J[43] += x[99]*2.;
	J[79] += sporttournament24_pd[142];
	J[43] += x[79]*2.;
	J[60] += sporttournament24_pd[141];
	J[42] = x[60]*2. + -4.;
	J[182] -= sporttournament24_pd[140];
	J[41] = -x[182]*2. + 2.;
	J[139] -= sporttournament24_pd[139];
	J[41] -= x[139]*2.;
	J[137] -= sporttournament24_pd[138];
	J[41] -= x[137]*2.;
	J[253] += sporttournament24_pd[137];
	J[40] = x[253]*2. + -4.;
	J[204] += sporttournament24_pd[136];
	J[40] += x[204]*2.;
	J[41] += sporttournament24_pd[135];
	J[40] += x[41]*2.;
	J[253] -= sporttournament24_pd[134];
	J[39] = -x[253]*2. + -2.;
	J[207] += sporttournament24_pd[133];
	J[39] += x[207]*2.;
	J[192] += sporttournament24_pd[132];
	J[39] += x[192]*2.;
	J[206] -= sporttournament24_pd[131];
	J[38] = -x[206]*2. + 2.;
	J[93] -= sporttournament24_pd[130];
	J[38] -= x[93]*2.;
	J[75] -= sporttournament24_pd[129];
	J[38] -= x[75]*2.;
	J[40] += sporttournament24_pd[128];
	J[38] += x[40]*2.;
	J[249] += sporttournament24_pd[127];
	J[37] = x[249]*2. + -4.;
	J[237] += sporttournament24_pd[126];
	J[37] += x[237]*2.;
	J[195] += sporttournament24_pd[125];
	J[37] += x[195]*2.;
	J[54] += sporttournament24_pd[124];
	J[37] += x[54]*2.;
	J[259] -= sporttournament24_pd[123];
	J[36] = -x[259]*2. + -2.;
	J[219] += sporttournament24_pd[122];
	J[36] += x[219]*2.;
	J[54] += sporttournament24_pd[121];
	J[36] += x[54]*2.;
	J[86] += sporttournament24_pd[120];
	J[35] = x[86]*2. + -2.;
	J[248] += sporttournament24_pd[119];
	J[34] = x[248]*2. + -2.;
	J[247] -= sporttournament24_pd[118];
	J[34] -= x[247]*2.;
	J[85] += sporttournament24_pd[117];
	J[34] += x[85]*2.;
	J[35] += sporttournament24_pd[116];
	J[34] += x[35]*2.;
	J[240] -= sporttournament24_pd[115];
	J[33] = -x[240]*2. + -2.;
	J[86] += sporttournament24_pd[114];
	J[33] += x[86]*2.;
	J[62] += sporttournament24_pd[113];
	J[33] += x[62]*2.;
	J[258] += sporttournament24_pd[112];
	J[32] = x[258]*2. + -4.;
	J[254] += sporttournament24_pd[111];
	J[32] += x[254]*2.;
	J[247] += sporttournament24_pd[110];
	J[32] += x[247]*2.;
	J[33] += sporttournament24_pd[109];
	J[32] += x[33]*2.;
	J[236] += sporttournament24_pd[108];
	J[31] = x[236]*2. + -4.;
	J[80] += sporttournament24_pd[107];
	J[31] += x[80]*2.;
	J[96] += sporttournament24_pd[106];
	J[30] = x[96]*2. + -4.;
	J[79] += sporttournament24_pd[105];
	J[30] += x[79]*2.;
	J[61] += sporttournament24_pd[104];
	J[30] += x[61]*2.;
	J[170] += sporttournament24_pd[103];
	J[29] = x[170]*2. + -4.;
	J[43] += sporttournament24_pd[102];
	J[29] += x[43]*2.;
	J[234] += sporttournament24_pd[101];
	J[28] = x[234]*2. + -2.;
	J[182] -= sporttournament24_pd[100];
	J[28] -= x[182]*2.;
	J[118] += sporttournament24_pd[99];
	J[28] += x[118]*2.;
	J[96] += sporttournament24_pd[98];
	J[28] += x[96]*2.;
	J[226] += sporttournament24_pd[97];
	J[27] = x[226]*2. + -4.;
	J[224] += sporttournament24_pd[96];
	J[27] += x[224]*2.;
	J[182] += sporttournament24_pd[95];
	J[27] += x[182]*2.;
	J[250] += sporttournament24_pd[94];
	J[26] = x[250]*2. + -4.;
	J[212] += sporttournament24_pd[93];
	J[26] += x[212]*2.;
	J[196] += sporttournament24_pd[92];
	J[26] += x[196]*2.;
	J[27] += sporttournament24_pd[91];
	J[26] += x[27]*2.;
	J[64] += sporttournament24_pd[90];
	J[25] = x[64]*2. + -2.;
	J[63] += sporttournament24_pd[89];
	J[24] = x[63]*2. + -2.;
	J[25] += sporttournament24_pd[88];
	J[24] += x[25]*2.;
	J[251] += sporttournament24_pd[87];
	J[23] = x[251]*2. + -2.;
	J[64] += sporttournament24_pd[86];
	J[23] += x[64]*2.;
	J[46] += sporttournament24_pd[85];
	J[23] += x[46]*2.;
	J[24] -= sporttournament24_pd[84];
	J[23] -= x[24]*2.;
	J[228] += sporttournament24_pd[83];
	J[22] = x[228]*2. + -4.;
	J[77] += sporttournament24_pd[82];
	J[22] += x[77]*2.;
	J[61] += sporttournament24_pd[81];
	J[22] += x[61]*2.;
	J[44] += sporttournament24_pd[80];
	J[22] += x[44]*2.;
	J[30] += sporttournament24_pd[79];
	J[21] = x[30]*2. + -2.;
	J[238] += sporttournament24_pd[78];
	J[20] = x[238]*2. + -4.;
	J[167] += sporttournament24_pd[77];
	J[20] += x[167]*2.;
	J[96] += sporttournament24_pd[76];
	J[20] += x[96]*2.;
	J[77] += sporttournament24_pd[75];
	J[20] += x[77]*2.;
	J[224] += sporttournament24_pd[74];
	J[19] = x[224]*2. + -2.;
	J[162] += sporttournament24_pd[73];
	J[19] += x[162]*2.;
	J[134] -= sporttournament24_pd[72];
	J[19] -= x[134]*2.;
	J[39] += sporttournament24_pd[71];
	J[19] += x[39]*2.;
	J[240] += sporttournament24_pd[70];
	J[18] = x[240]*2. + -2.;
	J[48] += sporttournament24_pd[69];
	J[18] += x[48]*2.;
	J[228] -= sporttournament24_pd[68];
	J[17] = -x[228]*2. + -2.;
	J[59] += sporttournament24_pd[67];
	J[17] += x[59]*2.;
	J[44] += sporttournament24_pd[66];
	J[17] += x[44]*2.;
	J[31] += sporttournament24_pd[65];
	J[17] += x[31]*2.;
	J[242] += sporttournament24_pd[64];
	J[16] = x[242]*2. + -4.;
	J[140] += sporttournament24_pd[63];
	J[16] += x[140]*2.;
	J[77] += sporttournament24_pd[62];
	J[16] += x[77]*2.;
	J[59] += sporttournament24_pd[61];
	J[16] += x[59]*2.;
	J[243] += sporttournament24_pd[60];
	J[15] = x[243]*2. + -2.;
	J[42] += sporttournament24_pd[59];
	J[15] += x[42]*2.;
	J[31] += sporttournament24_pd[58];
	J[15] += x[31]*2.;
	J[21] -= sporttournament24_pd[57];
	J[15] -= x[21]*2.;
	J[242] -= sporttournament24_pd[56];
	J[14] = -x[242]*2. + -2.;
	J[116] += sporttournament24_pd[55];
	J[14] += x[116]*2.;
	J[59] += sporttournament24_pd[54];
	J[14] += x[59]*2.;
	J[42] += sporttournament24_pd[53];
	J[14] += x[42]*2.;
	J[206] += sporttournament24_pd[52];
	J[13] = x[206]*2. + -2.;
	J[189] += sporttournament24_pd[51];
	J[13] += x[189]*2.;
	J[91] -= sporttournament24_pd[50];
	J[13] -= x[91]*2.;
	J[56] += sporttournament24_pd[49];
	J[13] += x[56]*2.;
	J[152] += sporttournament24_pd[48];
	J[12] = x[152]*2. + -2.;
	J[24] += sporttournament24_pd[47];
	J[12] += x[24]*2.;
	J[238] -= sporttournament24_pd[46];
	J[11] = -x[238]*2. + -2.;
	J[95] += sporttournament24_pd[45];
	J[11] += x[95]*2.;
	J[42] += sporttournament24_pd[44];
	J[11] += x[42]*2.;
	J[29] += sporttournament24_pd[43];
	J[11] += x[29]*2.;
	J[237] -= sporttournament24_pd[42];
	J[10] = -x[237]*2. + -2.;
	J[186] += sporttournament24_pd[41];
	J[10] += x[186]*2.;
	J[74] += sporttournament24_pd[40];
	J[10] += x[74]*2.;
	J[56] += sporttournament24_pd[39];
	J[10] += x[56]*2.;
	J[235] += sporttournament24_pd[38];
	J[9] = x[235]*2. + -2.;
	J[234] -= sporttournament24_pd[37];
	J[9] -= x[234]*2.;
	J[29] += sporttournament24_pd[36];
	J[9] += x[29]*2.;
	J[21] += sporttournament24_pd[35];
	J[9] += x[21]*2.;
	J[228] += sporttournament24_pd[34];
	J[8] = x[228]*2. + -2.;
	J[227] += sporttournament24_pd[33];
	J[8] += x[227]*2.;
	J[226] -= sporttournament24_pd[32];
	J[8] -= x[226]*2.;
	J[21] += sporttournament24_pd[31];
	J[8] += x[21]*2.;
	J[191] += sporttournament24_pd[30];
	J[7] = x[191]*2. + -2.;
	J[130] -= sporttournament24_pd[29];
	J[7] -= x[130]*2.;
	J[71] += sporttournament24_pd[28];
	J[7] += x[71]*2.;
	J[69] += sporttournament24_pd[27];
	J[7] += x[69]*2.;
	J[216] -= sporttournament24_pd[26];
	J[6] = -x[216]*2. + -2.;
	J[205] += sporttournament24_pd[25];
	J[6] += x[205]*2.;
	J[197] += sporttournament24_pd[24];
	J[6] += x[197]*2.;
	J[159] += sporttournament24_pd[23];
	J[6] += x[159]*2.;
	J[187] += sporttournament24_pd[22];
	J[5] = x[187]*2. + -2.;
	J[109] -= sporttournament24_pd[21];
	J[5] -= x[109]*2.;
	J[71] += sporttournament24_pd[20];
	J[5] += x[71]*2.;
	J[53] += sporttournament24_pd[19];
	J[5] += x[53]*2.;
	J[211] -= sporttournament24_pd[18];
	J[4] = -x[211]*2. + -2.;
	J[205] += sporttournament24_pd[17];
	J[4] += x[205]*2.;
	J[162] += sporttournament24_pd[16];
	J[4] += x[162]*2.;
	J[132] += sporttournament24_pd[15];
	J[4] += x[132]*2.;
	J[190] += sporttournament24_pd[14];
	J[3] = x[190]*2. + -2.;
	J[187] += sporttournament24_pd[13];
	J[3] += x[187]*2.;
	J[88] -= sporttournament24_pd[12];
	J[3] -= x[88]*2.;
	J[36] += sporttournament24_pd[11];
	J[3] += x[36]*2.;
	J[203] += sporttournament24_pd[10];
	J[2] = x[203]*2. + -2.;
	J[202] += sporttournament24_pd[9];
	J[2] += x[202]*2.;
	J[190] += sporttournament24_pd[8];
	J[2] += x[190]*2.;
	J[68] -= sporttournament24_pd[7];
	J[2] -= x[68]*2.;
	J[185] += sporttournament24_pd[6];
	J[1] = x[185]*2. + -2.;
	J[101] -= sporttournament24_pd[5];
	J[1] -= x[101]*2.;
	J[82] += sporttournament24_pd[4];
	J[1] += x[82]*2.;
	J[188] -= sporttournament24_pd[3];
	J[0] = -x[188]*2. + -2.;
	J[184] += sporttournament24_pd[2];
	J[0] += x[184]*2.;
	J[104] += sporttournament24_pd[1];
	J[0] += x[104]*2.;
	J[1] += sporttournament24_pd[0];
	J[0] += x[1]*2.;
	J[276] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
