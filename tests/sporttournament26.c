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
 fint sporttournament26_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament26_funcom_[659] = {
	326 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	326 /* nzc */,
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
	279,
	280,
	281,
	282,
	283,
	284,
	285,
	286,
	287,
	288,
	289,
	290,
	291,
	292,
	293,
	294,
	295,
	296,
	297,
	298,
	299,
	300,
	301,
	302,
	303,
	304,
	305,
	306,
	307,
	308,
	309,
	310,
	311,
	312,
	313,
	314,
	315,
	316,
	317,
	318,
	319,
	320,
	321,
	322,
	323,
	324,
	325,
	326,
	327,

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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
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

 real sporttournament26_boundc_[1+652+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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

 real sporttournament26_x0comn_[326] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sporttournament26_pd[624];
static real sporttournament26_old_x[326];
static int sporttournament26_xkind = -1;

 static int
sporttournament26_xcheck(real *x)
{
	real *x1 = sporttournament26_old_x, *xe = x + 326;
	errno = 0;
	if (sporttournament26_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament26_xkind = 0;
	return 1;
	}
 real
sporttournament26_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament26_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[325];
	;}

	if (wantfg & 2) {
	g[325] = 1.;
	}

	return rv;
}

 void
sporttournament26_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament26_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament26_pd[0] = 2. * x[0];
	v[0] = sporttournament26_pd[0] * x[1];
	sporttournament26_pd[1] = 2. * x[0];
	v[1] = sporttournament26_pd[1] * x[135];
	v[0] += v[1];
	sporttournament26_pd[2] = 2. * x[0];
	v[1] = sporttournament26_pd[2] * x[231];
	v[0] += v[1];
	sporttournament26_pd[3] = 2. * x[0];
	v[1] = sporttournament26_pd[3] * x[235];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[4] = 2. * x[1];
	v[2] = sporttournament26_pd[4] * x[88];
	v[0] += v[2];
	sporttournament26_pd[5] = 2. * x[1];
	v[2] = sporttournament26_pd[5] * x[132];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[6] = 2. * x[1];
	v[1] = sporttournament26_pd[6] * x[232];
	v[0] += v[1];
	sporttournament26_pd[7] = 2. * x[2];
	v[1] = sporttournament26_pd[7] * x[13];
	v[0] += v[1];
	sporttournament26_pd[8] = 2. * x[2];
	v[1] = sporttournament26_pd[8] * x[58];
	v[0] += v[1];
	sporttournament26_pd[9] = 2. * x[2];
	v[1] = sporttournament26_pd[9] * x[242];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[10] = 2. * x[2];
	v[2] = sporttournament26_pd[10] * x[259];
	v[0] += v[2];
	sporttournament26_pd[11] = 2. * x[3];
	v[2] = sporttournament26_pd[11] * x[77];
	v[0] += v[2];
	sporttournament26_pd[12] = 2. * x[3];
	v[2] = sporttournament26_pd[12] * x[200];
	v[0] += v[2];
	sporttournament26_pd[13] = 2. * x[3];
	v[2] = sporttournament26_pd[13] * x[254];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[14] = 2. * x[3];
	v[1] = sporttournament26_pd[14] * x[255];
	v[0] += v[1];
	sporttournament26_pd[15] = 2. * x[4];
	v[1] = sporttournament26_pd[15] * x[33];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[16] = 2. * x[4];
	v[2] = sporttournament26_pd[16] * x[34];
	v[0] += v[2];
	sporttournament26_pd[17] = 2. * x[4];
	v[2] = sporttournament26_pd[17] * x[75];
	v[0] += v[2];
	sporttournament26_pd[18] = 2. * x[4];
	v[2] = sporttournament26_pd[18] * x[247];
	v[0] += v[2];
	sporttournament26_pd[19] = 2. * x[5];
	v[2] = sporttournament26_pd[19] * x[200];
	v[0] += v[2];
	sporttournament26_pd[20] = 2. * x[5];
	v[2] = sporttournament26_pd[20] * x[239];
	v[0] += v[2];
	sporttournament26_pd[21] = 2. * x[5];
	v[2] = sporttournament26_pd[21] * x[260];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[22] = 2. * x[5];
	v[1] = sporttournament26_pd[22] * x[261];
	v[0] += v[1];
	sporttournament26_pd[23] = 2. * x[6];
	v[1] = sporttournament26_pd[23] * x[61];
	v[0] += v[1];
	sporttournament26_pd[24] = 2. * x[6];
	v[1] = sporttournament26_pd[24] * x[168];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[25] = 2. * x[6];
	v[2] = sporttournament26_pd[25] * x[234];
	v[0] += v[2];
	sporttournament26_pd[26] = 2. * x[6];
	v[2] = sporttournament26_pd[26] * x[239];
	v[0] += v[2];
	sporttournament26_pd[27] = 2. * x[7];
	v[2] = sporttournament26_pd[27] * x[10];
	v[0] += v[2];
	sporttournament26_pd[28] = 2. * x[7];
	v[2] = sporttournament26_pd[28] * x[14];
	v[0] += v[2];
	sporttournament26_pd[29] = 2. * x[7];
	v[2] = sporttournament26_pd[29] * x[248];
	v[0] += v[2];
	sporttournament26_pd[30] = 2. * x[7];
	v[2] = sporttournament26_pd[30] * x[274];
	v[0] += v[2];
	sporttournament26_pd[31] = 2. * x[8];
	v[2] = sporttournament26_pd[31] * x[62];
	v[0] += v[2];
	sporttournament26_pd[32] = 2. * x[8];
	v[2] = sporttournament26_pd[32] * x[78];
	v[0] += v[2];
	sporttournament26_pd[33] = 2. * x[8];
	v[2] = sporttournament26_pd[33] * x[198];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[34] = 2. * x[8];
	v[1] = sporttournament26_pd[34] * x[234];
	v[0] += v[1];
	sporttournament26_pd[35] = 2. * x[9];
	v[1] = sporttournament26_pd[35] * x[144];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[36] = 2. * x[9];
	v[2] = sporttournament26_pd[36] * x[148];
	v[0] += v[2];
	sporttournament26_pd[37] = 2. * x[9];
	v[2] = sporttournament26_pd[37] * x[171];
	v[0] += v[2];
	sporttournament26_pd[38] = 2. * x[9];
	v[2] = sporttournament26_pd[38] * x[251];
	v[0] += v[2];
	sporttournament26_pd[39] = 2. * x[10];
	v[2] = sporttournament26_pd[39] * x[62];
	v[0] += v[2];
	sporttournament26_pd[40] = 2. * x[10];
	v[2] = sporttournament26_pd[40] * x[96];
	v[0] += v[2];
	sporttournament26_pd[41] = 2. * x[10];
	v[2] = sporttournament26_pd[41] * x[240];
	v[0] += v[2];
	sporttournament26_pd[42] = 2. * x[11];
	v[2] = sporttournament26_pd[42] * x[121];
	v[0] += v[2];
	sporttournament26_pd[43] = 2. * x[11];
	v[2] = sporttournament26_pd[43] * x[170];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[44] = 2. * x[11];
	v[1] = sporttournament26_pd[44] * x[203];
	v[0] += v[1];
	sporttournament26_pd[45] = 2. * x[11];
	v[1] = sporttournament26_pd[45] * x[244];
	v[0] += v[1];
	sporttournament26_pd[46] = 2. * x[12];
	v[1] = sporttournament26_pd[46] * x[16];
	v[0] += v[1];
	sporttournament26_pd[47] = 2. * x[12];
	v[1] = sporttournament26_pd[47] * x[227];
	v[0] += v[1];
	sporttournament26_pd[48] = 2. * x[13];
	v[1] = sporttournament26_pd[48] * x[14];
	v[0] += v[1];
	sporttournament26_pd[49] = 2. * x[13];
	v[1] = sporttournament26_pd[49] * x[59];
	v[0] += v[1];
	sporttournament26_pd[50] = 2. * x[13];
	v[1] = sporttournament26_pd[50] * x[282];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[51] = 2. * x[14];
	v[2] = sporttournament26_pd[51] * x[34];
	v[0] += v[2];
	sporttournament26_pd[52] = 2. * x[14];
	v[2] = sporttournament26_pd[52] * x[168];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[53] = 2. * x[15];
	v[1] = sporttournament26_pd[53] * x[82];
	v[0] += v[1];
	sporttournament26_pd[54] = 2. * x[15];
	v[1] = sporttournament26_pd[54] * x[105];
	v[0] += v[1];
	sporttournament26_pd[55] = 2. * x[15];
	v[1] = sporttournament26_pd[55] * x[179];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[56] = 2. * x[15];
	v[2] = sporttournament26_pd[56] * x[272];
	v[0] += v[2];
	sporttournament26_pd[57] = 2. * x[16];
	v[2] = sporttournament26_pd[57] * x[17];
	v[0] += v[2];
	sporttournament26_pd[58] = 2. * x[16];
	v[2] = sporttournament26_pd[58] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[59] = 2. * x[16];
	v[1] = sporttournament26_pd[59] * x[55];
	v[0] += v[1];
	sporttournament26_pd[60] = 2. * x[17];
	v[1] = sporttournament26_pd[60] * x[21];
	v[0] += v[1];
	sporttournament26_pd[61] = 2. * x[18];
	v[1] = sporttournament26_pd[61] * x[196];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[62] = 2. * x[18];
	v[2] = sporttournament26_pd[62] * x[198];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[63] = 2. * x[18];
	v[1] = sporttournament26_pd[63] * x[259];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[64] = 2. * x[18];
	v[2] = sporttournament26_pd[64] * x[260];
	v[0] += v[2];
	sporttournament26_pd[65] = 2. * x[19];
	v[2] = sporttournament26_pd[65] * x[106];
	v[0] += v[2];
	sporttournament26_pd[66] = 2. * x[19];
	v[2] = sporttournament26_pd[66] * x[126];
	v[0] += v[2];
	sporttournament26_pd[67] = 2. * x[19];
	v[2] = sporttournament26_pd[67] * x[210];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[68] = 2. * x[19];
	v[1] = sporttournament26_pd[68] * x[276];
	v[0] += v[1];
	sporttournament26_pd[69] = 2. * x[20];
	v[1] = sporttournament26_pd[69] * x[29];
	v[0] += v[1];
	sporttournament26_pd[70] = 2. * x[20];
	v[1] = sporttournament26_pd[70] * x[39];
	v[0] += v[1];
	sporttournament26_pd[71] = 2. * x[20];
	v[1] = sporttournament26_pd[71] * x[67];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[72] = 2. * x[20];
	v[2] = sporttournament26_pd[72] * x[106];
	v[0] += v[2];
	sporttournament26_pd[73] = 2. * x[21];
	v[2] = sporttournament26_pd[73] * x[22];
	v[0] += v[2];
	sporttournament26_pd[74] = 2. * x[21];
	v[2] = sporttournament26_pd[74] * x[30];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[75] = 2. * x[21];
	v[1] = sporttournament26_pd[75] * x[72];
	v[0] += v[1];
	sporttournament26_pd[76] = 2. * x[22];
	v[1] = sporttournament26_pd[76] * x[25];
	v[0] += v[1];
	sporttournament26_pd[77] = 2. * x[23];
	v[1] = sporttournament26_pd[77] * x[67];
	v[0] += v[1];
	sporttournament26_pd[78] = 2. * x[23];
	v[1] = sporttournament26_pd[78] * x[127];
	v[0] += v[1];
	sporttournament26_pd[79] = 2. * x[23];
	v[1] = sporttournament26_pd[79] * x[154];
	v[0] += v[1];
	sporttournament26_pd[80] = 2. * x[23];
	v[1] = sporttournament26_pd[80] * x[280];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[81] = 2. * x[24];
	v[2] = sporttournament26_pd[81] * x[39];
	v[0] += v[2];
	sporttournament26_pd[82] = 2. * x[24];
	v[2] = sporttournament26_pd[82] * x[52];
	v[0] += v[2];
	sporttournament26_pd[83] = 2. * x[24];
	v[2] = sporttournament26_pd[83] * x[127];
	v[0] += v[2];
	sporttournament26_pd[84] = 2. * x[24];
	v[2] = sporttournament26_pd[84] * x[276];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[85] = 2. * x[25];
	v[1] = sporttournament26_pd[85] * x[26];
	v[0] += v[1];
	sporttournament26_pd[86] = 2. * x[25];
	v[1] = sporttournament26_pd[86] * x[91];
	v[0] += v[1];
	sporttournament26_pd[87] = 2. * x[25];
	v[1] = sporttournament26_pd[87] * x[287];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[88] = 2. * x[26];
	v[2] = sporttournament26_pd[88] * x[31];
	v[0] += v[2];
	sporttournament26_pd[89] = 2. * x[27];
	v[2] = sporttournament26_pd[89] * x[82];
	v[0] += v[2];
	sporttournament26_pd[90] = 2. * x[27];
	v[2] = sporttournament26_pd[90] * x[155];
	v[0] += v[2];
	sporttournament26_pd[91] = 2. * x[27];
	v[2] = sporttournament26_pd[91] * x[180];
	v[0] += v[2];
	sporttournament26_pd[92] = 2. * x[27];
	v[2] = sporttournament26_pd[92] * x[283];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[93] = 2. * x[28];
	v[1] = sporttournament26_pd[93] * x[52];
	v[0] += v[1];
	sporttournament26_pd[94] = 2. * x[28];
	v[1] = sporttournament26_pd[94] * x[69];
	v[0] += v[1];
	sporttournament26_pd[95] = 2. * x[28];
	v[1] = sporttournament26_pd[95] * x[155];
	v[0] += v[1];
	sporttournament26_pd[96] = 2. * x[28];
	v[1] = sporttournament26_pd[96] * x[272];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[97] = 2. * x[29];
	v[2] = sporttournament26_pd[97] * x[215];
	v[0] += v[2];
	sporttournament26_pd[98] = 2. * x[29];
	v[2] = sporttournament26_pd[98] * x[219];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[99] = 2. * x[29];
	v[1] = sporttournament26_pd[99] * x[281];
	v[0] += v[1];
	sporttournament26_pd[100] = 2. * x[30];
	v[1] = sporttournament26_pd[100] * x[42];
	v[0] += v[1];
	sporttournament26_pd[101] = 2. * x[30];
	v[1] = sporttournament26_pd[101] * x[54];
	v[0] += v[1];
	sporttournament26_pd[102] = 2. * x[30];
	v[1] = sporttournament26_pd[102] * x[290];
	v[0] += v[1];
	sporttournament26_pd[103] = 2. * x[31];
	v[1] = sporttournament26_pd[103] * x[32];
	v[0] += v[1];
	sporttournament26_pd[104] = 2. * x[31];
	v[1] = sporttournament26_pd[104] * x[112];
	v[0] += v[1];
	sporttournament26_pd[105] = 2. * x[31];
	v[1] = sporttournament26_pd[105] * x[287];
	v[0] += v[1];
	sporttournament26_pd[106] = 2. * x[32];
	v[1] = sporttournament26_pd[106] * x[42];
	v[0] += v[1];
	sporttournament26_pd[107] = 2. * x[33];
	v[1] = sporttournament26_pd[107] * x[294];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[108] = 2. * x[34];
	v[2] = sporttournament26_pd[108] * x[95];
	v[0] += v[2];
	sporttournament26_pd[109] = 2. * x[34];
	v[2] = sporttournament26_pd[109] * x[141];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[110] = 2. * x[35];
	v[1] = sporttournament26_pd[110] * x[36];
	v[0] += v[1];
	sporttournament26_pd[111] = 2. * x[35];
	v[1] = sporttournament26_pd[111] * x[46];
	v[0] += v[1];
	sporttournament26_pd[112] = 2. * x[35];
	v[1] = sporttournament26_pd[112] * x[100];
	v[0] += v[1];
	sporttournament26_pd[113] = 2. * x[35];
	v[1] = sporttournament26_pd[113] * x[256];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[114] = 2. * x[36];
	v[2] = sporttournament26_pd[114] * x[47];
	v[0] += v[2];
	sporttournament26_pd[115] = 2. * x[36];
	v[2] = sporttournament26_pd[115] * x[65];
	v[0] += v[2];
	sporttournament26_pd[116] = 2. * x[36];
	v[2] = sporttournament26_pd[116] * x[122];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[117] = 2. * x[37];
	v[1] = sporttournament26_pd[117] * x[106];
	v[0] += v[1];
	sporttournament26_pd[118] = 2. * x[37];
	v[1] = sporttournament26_pd[118] * x[181];
	v[0] += v[1];
	sporttournament26_pd[119] = 2. * x[37];
	v[1] = sporttournament26_pd[119] * x[211];
	v[0] += v[1];
	sporttournament26_pd[120] = 2. * x[37];
	v[1] = sporttournament26_pd[120] * x[283];
	v[0] += v[1];
	sporttournament26_pd[121] = 2. * x[38];
	v[1] = sporttournament26_pd[121] * x[69];
	v[0] += v[1];
	sporttournament26_pd[122] = 2. * x[38];
	v[1] = sporttournament26_pd[122] * x[84];
	v[0] += v[1];
	sporttournament26_pd[123] = 2. * x[38];
	v[1] = sporttournament26_pd[123] * x[181];
	v[0] += v[1];
	sporttournament26_pd[124] = 2. * x[38];
	v[1] = sporttournament26_pd[124] * x[272];
	v[0] += v[1];
	sporttournament26_pd[125] = 2. * x[39];
	v[1] = sporttournament26_pd[125] * x[85];
	v[0] += v[1];
	sporttournament26_pd[126] = 2. * x[39];
	v[1] = sporttournament26_pd[126] * x[277];
	v[0] += v[1];
	sporttournament26_pd[127] = 2. * x[40];
	v[1] = sporttournament26_pd[127] * x[41];
	v[0] += v[1];
	sporttournament26_pd[128] = 2. * x[40];
	v[1] = sporttournament26_pd[128] * x[287];
	v[0] += v[1];
	sporttournament26_pd[129] = 2. * x[40];
	v[1] = sporttournament26_pd[129] * x[293];
	v[0] += v[1];
	sporttournament26_pd[130] = 2. * x[40];
	v[1] = sporttournament26_pd[130] * x[298];
	v[0] += v[1];
	sporttournament26_pd[131] = 2. * x[41];
	v[1] = sporttournament26_pd[131] * x[56];
	v[0] += v[1];
	sporttournament26_pd[132] = 2. * x[41];
	v[1] = sporttournament26_pd[132] * x[71];
	v[0] += v[1];
	sporttournament26_pd[133] = 2. * x[42];
	v[1] = sporttournament26_pd[133] * x[43];
	v[0] += v[1];
	sporttournament26_pd[134] = 2. * x[42];
	v[1] = sporttournament26_pd[134] * x[136];
	v[0] += v[1];
	sporttournament26_pd[135] = 2. * x[43];
	v[1] = sporttournament26_pd[135] * x[56];
	v[0] += v[1];
	sporttournament26_pd[136] = 2. * x[44];
	v[1] = sporttournament26_pd[136] * x[94];
	v[0] += v[1];
	sporttournament26_pd[137] = 2. * x[44];
	v[1] = sporttournament26_pd[137] * x[236];
	v[0] += v[1];
	sporttournament26_pd[138] = 2. * x[45];
	v[1] = sporttournament26_pd[138] * x[247];
	v[0] += v[1];
	sporttournament26_pd[139] = 2. * x[45];
	v[1] = sporttournament26_pd[139] * x[260];
	v[0] += v[1];
	sporttournament26_pd[140] = 2. * x[45];
	v[1] = sporttournament26_pd[140] * x[261];
	v[0] += v[1];
	sporttournament26_pd[141] = 2. * x[45];
	v[1] = sporttournament26_pd[141] * x[284];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[142] = 2. * x[46];
	v[2] = sporttournament26_pd[142] * x[48];
	v[0] += v[2];
	sporttournament26_pd[143] = 2. * x[46];
	v[2] = sporttournament26_pd[143] * x[121];
	v[0] += v[2];
	sporttournament26_pd[144] = 2. * x[46];
	v[2] = sporttournament26_pd[144] * x[151];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[145] = 2. * x[47];
	v[1] = sporttournament26_pd[145] * x[49];
	v[0] += v[1];
	sporttournament26_pd[146] = 2. * x[47];
	v[1] = sporttournament26_pd[146] * x[229];
	v[0] += v[1];
	sporttournament26_pd[147] = 2. * x[47];
	v[1] = sporttournament26_pd[147] * x[271];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[148] = 2. * x[48];
	v[2] = sporttournament26_pd[148] * x[49];
	v[0] += v[2];
	sporttournament26_pd[149] = 2. * x[48];
	v[2] = sporttournament26_pd[149] * x[266];
	v[0] += v[2];
	sporttournament26_pd[150] = 2. * x[48];
	v[2] = sporttournament26_pd[150] * x[291];
	v[0] += v[2];
	sporttournament26_pd[151] = 2. * x[49];
	v[2] = sporttournament26_pd[151] * x[153];
	v[0] += v[2];
	sporttournament26_pd[152] = 2. * x[49];
	v[2] = sporttournament26_pd[152] * x[228];
	v[0] += v[2];
	sporttournament26_pd[153] = 2. * x[50];
	v[2] = sporttournament26_pd[153] * x[127];
	v[0] += v[2];
	sporttournament26_pd[154] = 2. * x[50];
	v[2] = sporttournament26_pd[154] * x[213];
	v[0] += v[2];
	sporttournament26_pd[155] = 2. * x[50];
	v[2] = sporttournament26_pd[155] * x[228];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[156] = 2. * x[50];
	v[1] = sporttournament26_pd[156] * x[280];
	v[0] += v[1];
	sporttournament26_pd[157] = 2. * x[51];
	v[1] = sporttournament26_pd[157] * x[84];
	v[0] += v[1];
	sporttournament26_pd[158] = 2. * x[51];
	v[1] = sporttournament26_pd[158] * x[108];
	v[0] += v[1];
	sporttournament26_pd[159] = 2. * x[51];
	v[1] = sporttournament26_pd[159] * x[213];
	v[0] += v[1];
	sporttournament26_pd[160] = 2. * x[51];
	v[1] = sporttournament26_pd[160] * x[276];
	v[0] += v[1];
	sporttournament26_pd[161] = 2. * x[52];
	v[1] = sporttournament26_pd[161] * x[219];
	v[0] += v[1];
	sporttournament26_pd[162] = 2. * x[52];
	v[1] = sporttournament26_pd[162] * x[273];
	v[0] += v[1];
	sporttournament26_pd[163] = 2. * x[53];
	v[1] = sporttournament26_pd[163] * x[54];
	v[0] += v[1];
	sporttournament26_pd[164] = 2. * x[53];
	v[1] = sporttournament26_pd[164] * x[222];
	v[0] += v[1];
	sporttournament26_pd[165] = 2. * x[53];
	v[1] = sporttournament26_pd[165] * x[290];
	v[0] += v[1];
	sporttournament26_pd[166] = 2. * x[53];
	v[1] = sporttournament26_pd[166] * x[302];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[167] = 2. * x[54];
	v[2] = sporttournament26_pd[167] * x[55];
	v[0] += v[2];
	sporttournament26_pd[168] = 2. * x[54];
	v[2] = sporttournament26_pd[168] * x[89];
	v[0] += v[2];
	sporttournament26_pd[169] = 2. * x[55];
	v[2] = sporttournament26_pd[169] * x[73];
	v[0] += v[2];
	sporttournament26_pd[170] = 2. * x[55];
	v[2] = sporttournament26_pd[170] * x[90];
	v[0] += v[2];
	sporttournament26_pd[171] = 2. * x[56];
	v[2] = sporttournament26_pd[171] * x[57];
	v[0] += v[2];
	sporttournament26_pd[172] = 2. * x[56];
	v[2] = sporttournament26_pd[172] * x[225];
	v[0] += v[2];
	sporttournament26_pd[173] = 2. * x[57];
	v[2] = sporttournament26_pd[173] * x[73];
	v[0] += v[2];
	sporttournament26_pd[174] = 2. * x[58];
	v[2] = sporttournament26_pd[174] * x[115];
	v[0] += v[2];
	sporttournament26_pd[175] = 2. * x[59];
	v[2] = sporttournament26_pd[175] * x[139];
	v[0] += v[2];
	sporttournament26_pd[176] = 2. * x[59];
	v[2] = sporttournament26_pd[176] * x[165];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[177] = 2. * x[59];
	v[1] = sporttournament26_pd[177] * x[242];
	v[0] += v[1];
	sporttournament26_pd[178] = 2. * x[60];
	v[1] = sporttournament26_pd[178] * x[61];
	v[0] += v[1];
	sporttournament26_pd[179] = 2. * x[60];
	v[1] = sporttournament26_pd[179] * x[253];
	v[0] += v[1];
	sporttournament26_pd[180] = 2. * x[60];
	v[1] = sporttournament26_pd[180] * x[254];
	v[0] += v[1];
	sporttournament26_pd[181] = 2. * x[60];
	v[1] = sporttournament26_pd[181] * x[288];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[182] = 2. * x[61];
	v[2] = sporttournament26_pd[182] * x[79];
	v[0] += v[2];
	sporttournament26_pd[183] = 2. * x[61];
	v[2] = sporttournament26_pd[183] * x[304];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[184] = 2. * x[62];
	v[1] = sporttournament26_pd[184] * x[144];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[185] = 2. * x[62];
	v[2] = sporttournament26_pd[185] * x[233];
	v[0] += v[2];
	sporttournament26_pd[186] = 2. * x[63];
	v[2] = sporttournament26_pd[186] * x[79];
	v[0] += v[2];
	sporttournament26_pd[187] = 2. * x[63];
	v[2] = sporttournament26_pd[187] * x[99];
	v[0] += v[2];
	sporttournament26_pd[188] = 2. * x[63];
	v[2] = sporttournament26_pd[188] * x[144];
	v[0] += v[2];
	sporttournament26_pd[189] = 2. * x[63];
	v[2] = sporttournament26_pd[189] * x[248];
	v[0] += v[2];
	sporttournament26_pd[190] = 2. * x[64];
	v[2] = sporttournament26_pd[190] * x[66];
	v[0] += v[2];
	sporttournament26_pd[191] = 2. * x[64];
	v[2] = sporttournament26_pd[191] * x[101];
	v[0] += v[2];
	sporttournament26_pd[192] = 2. * x[64];
	v[2] = sporttournament26_pd[192] * x[177];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[193] = 2. * x[64];
	v[1] = sporttournament26_pd[193] * x[251];
	v[0] += v[1];
	sporttournament26_pd[194] = 2. * x[65];
	v[1] = sporttournament26_pd[194] * x[250];
	v[0] += v[1];
	sporttournament26_pd[195] = 2. * x[65];
	v[1] = sporttournament26_pd[195] * x[263];
	v[0] += v[1];
	sporttournament26_pd[196] = 2. * x[65];
	v[1] = sporttournament26_pd[196] * x[295];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[197] = 2. * x[66];
	v[2] = sporttournament26_pd[197] * x[229];
	v[0] += v[2];
	sporttournament26_pd[198] = 2. * x[66];
	v[2] = sporttournament26_pd[198] * x[289];
	v[0] += v[2];
	sporttournament26_pd[199] = 2. * x[66];
	v[2] = sporttournament26_pd[199] * x[295];
	v[0] += v[2];
	sporttournament26_pd[200] = 2. * x[67];
	v[2] = sporttournament26_pd[200] * x[68];
	v[0] += v[2];
	sporttournament26_pd[201] = 2. * x[67];
	v[2] = sporttournament26_pd[201] * x[267];
	v[0] += v[2];
	sporttournament26_pd[202] = 2. * x[68];
	v[2] = sporttournament26_pd[202] * x[108];
	v[0] += v[2];
	sporttournament26_pd[203] = 2. * x[68];
	v[2] = sporttournament26_pd[203] * x[130];
	v[0] += v[2];
	sporttournament26_pd[204] = 2. * x[68];
	v[2] = sporttournament26_pd[204] * x[214];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[205] = 2. * x[69];
	v[1] = sporttournament26_pd[205] * x[269];
	v[0] += v[1];
	sporttournament26_pd[206] = 2. * x[69];
	v[1] = sporttournament26_pd[206] * x[281];
	v[0] += v[1];
	sporttournament26_pd[207] = 2. * x[70];
	v[1] = sporttournament26_pd[207] * x[85];
	v[0] += v[1];
	sporttournament26_pd[208] = 2. * x[70];
	v[1] = sporttournament26_pd[208] * x[230];
	v[0] += v[1];
	sporttournament26_pd[209] = 2. * x[70];
	v[1] = sporttournament26_pd[209] * x[246];
	v[0] += v[1];
	sporttournament26_pd[210] = 2. * x[70];
	v[1] = sporttournament26_pd[210] * x[298];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[211] = 2. * x[71];
	v[2] = sporttournament26_pd[211] * x[72];
	v[0] += v[2];
	sporttournament26_pd[212] = 2. * x[71];
	v[2] = sporttournament26_pd[212] * x[110];
	v[0] += v[2];
	sporttournament26_pd[213] = 2. * x[71];
	v[2] = sporttournament26_pd[213] * x[298];
	v[0] += v[2];
	sporttournament26_pd[214] = 2. * x[72];
	v[2] = sporttournament26_pd[214] * x[92];
	v[0] += v[2];
	sporttournament26_pd[215] = 2. * x[72];
	v[2] = sporttournament26_pd[215] * x[111];
	v[0] += v[2];
	sporttournament26_pd[216] = 2. * x[73];
	v[2] = sporttournament26_pd[216] * x[74];
	v[0] += v[2];
	sporttournament26_pd[217] = 2. * x[73];
	v[2] = sporttournament26_pd[217] * x[192];
	v[0] += v[2];
	sporttournament26_pd[218] = 2. * x[74];
	v[2] = sporttournament26_pd[218] * x[92];
	v[0] += v[2];
	sporttournament26_pd[219] = 2. * x[75];
	v[2] = sporttournament26_pd[219] * x[140];
	v[0] += v[2];
	sporttournament26_pd[220] = 2. * x[76];
	v[2] = sporttournament26_pd[220] * x[78];
	v[0] += v[2];
	sporttournament26_pd[221] = 2. * x[76];
	v[2] = sporttournament26_pd[221] * x[165];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[222] = 2. * x[76];
	v[1] = sporttournament26_pd[222] * x[249];
	v[0] += v[1];
	sporttournament26_pd[223] = 2. * x[76];
	v[1] = sporttournament26_pd[223] * x[259];
	v[0] += v[1];
	sporttournament26_pd[224] = 2. * x[77];
	v[1] = sporttournament26_pd[224] * x[95];
	v[0] += v[1];
	sporttournament26_pd[225] = 2. * x[77];
	v[1] = sporttournament26_pd[225] * x[97];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[226] = 2. * x[77];
	v[2] = sporttournament26_pd[226] * x[282];
	v[0] += v[2];
	sporttournament26_pd[227] = 2. * x[78];
	v[2] = sporttournament26_pd[227] * x[97];
	v[0] += v[2];
	sporttournament26_pd[228] = 2. * x[78];
	v[2] = sporttournament26_pd[228] * x[167];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[229] = 2. * x[79];
	v[1] = sporttournament26_pd[229] * x[80];
	v[0] += v[1];
	sporttournament26_pd[230] = 2. * x[79];
	v[1] = sporttournament26_pd[230] * x[261];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[231] = 2. * x[80];
	v[2] = sporttournament26_pd[231] * x[97];
	v[0] += v[2];
	sporttournament26_pd[232] = 2. * x[80];
	v[2] = sporttournament26_pd[232] * x[119];
	v[0] += v[2];
	sporttournament26_pd[233] = 2. * x[80];
	v[2] = sporttournament26_pd[233] * x[170];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[234] = 2. * x[81];
	v[1] = sporttournament26_pd[234] * x[210];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[235] = 2. * x[81];
	v[2] = sporttournament26_pd[235] * x[258];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[236] = 2. * x[81];
	v[1] = sporttournament26_pd[236] * x[268];
	v[0] += v[1];
	sporttournament26_pd[237] = 2. * x[81];
	v[1] = sporttournament26_pd[237] * x[309];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[238] = 2. * x[82];
	v[2] = sporttournament26_pd[238] * x[83];
	v[0] += v[2];
	sporttournament26_pd[239] = 2. * x[82];
	v[2] = sporttournament26_pd[239] * x[215];
	v[0] += v[2];
	sporttournament26_pd[240] = 2. * x[83];
	v[2] = sporttournament26_pd[240] * x[130];
	v[0] += v[2];
	sporttournament26_pd[241] = 2. * x[83];
	v[2] = sporttournament26_pd[241] * x[157];
	v[0] += v[2];
	sporttournament26_pd[242] = 2. * x[83];
	v[2] = sporttournament26_pd[242] * x[182];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[243] = 2. * x[84];
	v[1] = sporttournament26_pd[243] * x[86];
	v[0] += v[1];
	sporttournament26_pd[244] = 2. * x[84];
	v[1] = sporttournament26_pd[244] * x[277];
	v[0] += v[1];
	sporttournament26_pd[245] = 2. * x[85];
	v[1] = sporttournament26_pd[245] * x[88];
	v[0] += v[1];
	sporttournament26_pd[246] = 2. * x[85];
	v[1] = sporttournament26_pd[246] * x[218];
	v[0] += v[1];
	sporttournament26_pd[247] = 2. * x[86];
	v[1] = sporttournament26_pd[247] * x[88];
	v[0] += v[1];
	sporttournament26_pd[248] = 2. * x[86];
	v[1] = sporttournament26_pd[248] * x[157];
	v[0] += v[1];
	sporttournament26_pd[249] = 2. * x[86];
	v[1] = sporttournament26_pd[249] * x[221];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[250] = 2. * x[87];
	v[2] = sporttournament26_pd[250] * x[89];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[251] = 2. * x[87];
	v[1] = sporttournament26_pd[251] * x[219];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[252] = 2. * x[87];
	v[2] = sporttournament26_pd[252] * x[230];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[253] = 2. * x[87];
	v[1] = sporttournament26_pd[253] * x[241];
	v[0] += v[1];
	sporttournament26_pd[254] = 2. * x[88];
	v[1] = sporttournament26_pd[254] * x[89];
	v[0] += v[1];
	sporttournament26_pd[255] = 2. * x[89];
	v[1] = sporttournament26_pd[255] * x[90];
	v[0] += v[1];
	sporttournament26_pd[256] = 2. * x[90];
	v[1] = sporttournament26_pd[256] * x[91];
	v[0] += v[1];
	sporttournament26_pd[257] = 2. * x[90];
	v[1] = sporttournament26_pd[257] * x[133];
	v[0] += v[1];
	sporttournament26_pd[258] = 2. * x[91];
	v[1] = sporttournament26_pd[258] * x[113];
	v[0] += v[1];
	sporttournament26_pd[259] = 2. * x[91];
	v[1] = sporttournament26_pd[259] * x[134];
	v[0] += v[1];
	sporttournament26_pd[260] = 2. * x[92];
	v[1] = sporttournament26_pd[260] * x[93];
	v[0] += v[1];
	sporttournament26_pd[261] = 2. * x[92];
	v[1] = sporttournament26_pd[261] * x[226];
	v[0] += v[1];
	sporttournament26_pd[262] = 2. * x[93];
	v[1] = sporttournament26_pd[262] * x[113];
	v[0] += v[1];
	sporttournament26_pd[263] = 2. * x[94];
	v[1] = sporttournament26_pd[263] * x[195];
	v[0] += v[1];
	sporttournament26_pd[264] = 2. * x[94];
	v[1] = sporttournament26_pd[264] * x[284];
	v[0] += v[1];
	sporttournament26_pd[265] = 2. * x[94];
	v[1] = sporttournament26_pd[265] * x[299];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[266] = 2. * x[95];
	v[2] = sporttournament26_pd[266] * x[96];
	v[0] += v[2];
	sporttournament26_pd[267] = 2. * x[95];
	v[2] = sporttournament26_pd[267] * x[195];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[268] = 2. * x[96];
	v[1] = sporttournament26_pd[268] * x[117];
	v[0] += v[1];
	sporttournament26_pd[269] = 2. * x[96];
	v[1] = sporttournament26_pd[269] * x[197];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[270] = 2. * x[97];
	v[2] = sporttournament26_pd[270] * x[98];
	v[0] += v[2];
	sporttournament26_pd[271] = 2. * x[98];
	v[2] = sporttournament26_pd[271] * x[117];
	v[0] += v[2];
	sporttournament26_pd[272] = 2. * x[98];
	v[2] = sporttournament26_pd[272] * x[202];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[273] = 2. * x[98];
	v[1] = sporttournament26_pd[273] * x[265];
	v[0] += v[1];
	sporttournament26_pd[274] = 2. * x[99];
	v[1] = sporttournament26_pd[274] * x[100];
	v[0] += v[1];
	sporttournament26_pd[275] = 2. * x[99];
	v[1] = sporttournament26_pd[275] * x[143];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[276] = 2. * x[99];
	v[2] = sporttournament26_pd[276] * x[172];
	v[0] += v[2];
	sporttournament26_pd[277] = 2. * x[100];
	v[2] = sporttournament26_pd[277] * x[102];
	v[0] += v[2];
	sporttournament26_pd[278] = 2. * x[100];
	v[2] = sporttournament26_pd[278] * x[265];
	v[0] += v[2];
	sporttournament26_pd[279] = 2. * x[101];
	v[2] = sporttournament26_pd[279] * x[146];
	v[0] += v[2];
	sporttournament26_pd[280] = 2. * x[101];
	v[2] = sporttournament26_pd[280] * x[176];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[281] = 2. * x[101];
	v[1] = sporttournament26_pd[281] * x[270];
	v[0] += v[1];
	sporttournament26_pd[282] = 2. * x[102];
	v[1] = sporttournament26_pd[282] * x[173];
	v[0] += v[1];
	sporttournament26_pd[283] = 2. * x[102];
	v[1] = sporttournament26_pd[283] * x[176];
	v[0] += v[1];
	sporttournament26_pd[284] = 2. * x[102];
	v[1] = sporttournament26_pd[284] * x[291];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[285] = 2. * x[103];
	v[2] = sporttournament26_pd[285] * x[104];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[286] = 2. * x[103];
	v[1] = sporttournament26_pd[286] * x[243];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[287] = 2. * x[103];
	v[2] = sporttournament26_pd[287] * x[252];
	v[0] += v[2];
	sporttournament26_pd[288] = 2. * x[103];
	v[2] = sporttournament26_pd[288] * x[289];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[289] = 2. * x[104];
	v[1] = sporttournament26_pd[289] * x[105];
	v[0] += v[1];
	sporttournament26_pd[290] = 2. * x[104];
	v[1] = sporttournament26_pd[290] * x[280];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[291] = 2. * x[104];
	v[2] = sporttournament26_pd[291] * x[313];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[292] = 2. * x[105];
	v[1] = sporttournament26_pd[292] * x[252];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[293] = 2. * x[105];
	v[2] = sporttournament26_pd[293] * x[314];
	v[0] += v[2];
	sporttournament26_pd[294] = 2. * x[106];
	v[2] = sporttournament26_pd[294] * x[107];
	v[0] += v[2];
	sporttournament26_pd[295] = 2. * x[107];
	v[2] = sporttournament26_pd[295] * x[157];
	v[0] += v[2];
	sporttournament26_pd[296] = 2. * x[107];
	v[2] = sporttournament26_pd[296] * x[184];
	v[0] += v[2];
	sporttournament26_pd[297] = 2. * x[107];
	v[2] = sporttournament26_pd[297] * x[315];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[298] = 2. * x[108];
	v[1] = sporttournament26_pd[298] * x[109];
	v[0] += v[1];
	sporttournament26_pd[299] = 2. * x[108];
	v[1] = sporttournament26_pd[299] * x[273];
	v[0] += v[1];
	sporttournament26_pd[300] = 2. * x[109];
	v[1] = sporttournament26_pd[300] * x[184];
	v[0] += v[1];
	sporttournament26_pd[301] = 2. * x[109];
	v[1] = sporttournament26_pd[301] * x[221];
	v[0] += v[1];
	sporttournament26_pd[302] = 2. * x[109];
	v[1] = sporttournament26_pd[302] * x[306];
	v[0] += v[1];
	sporttournament26_pd[303] = 2. * x[110];
	v[1] = sporttournament26_pd[303] * x[111];
	v[0] += v[1];
	sporttournament26_pd[304] = 2. * x[110];
	v[1] = sporttournament26_pd[304] * x[245];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[305] = 2. * x[110];
	v[2] = sporttournament26_pd[305] * x[306];
	v[0] += v[2];
	sporttournament26_pd[306] = 2. * x[111];
	v[2] = sporttournament26_pd[306] * x[112];
	v[0] += v[2];
	sporttournament26_pd[307] = 2. * x[111];
	v[2] = sporttournament26_pd[307] * x[161];
	v[0] += v[2];
	sporttournament26_pd[308] = 2. * x[112];
	v[2] = sporttournament26_pd[308] * x[137];
	v[0] += v[2];
	sporttournament26_pd[309] = 2. * x[112];
	v[2] = sporttournament26_pd[309] * x[162];
	v[0] += v[2];
	sporttournament26_pd[310] = 2. * x[113];
	v[2] = sporttournament26_pd[310] * x[114];
	v[0] += v[2];
	sporttournament26_pd[311] = 2. * x[113];
	v[2] = sporttournament26_pd[311] * x[135];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[312] = 2. * x[114];
	v[1] = sporttournament26_pd[312] * x[137];
	v[0] += v[1];
	sporttournament26_pd[313] = 2. * x[115];
	v[1] = sporttournament26_pd[313] * x[116];
	v[0] += v[1];
	sporttournament26_pd[314] = 2. * x[115];
	v[1] = sporttournament26_pd[314] * x[165];
	v[0] += v[1];
	sporttournament26_pd[315] = 2. * x[115];
	v[1] = sporttournament26_pd[315] * x[303];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[316] = 2. * x[116];
	v[2] = sporttournament26_pd[316] * x[193];
	v[0] += v[2];
	sporttournament26_pd[317] = 2. * x[116];
	v[2] = sporttournament26_pd[317] * x[197];
	v[0] += v[2];
	sporttournament26_pd[318] = 2. * x[116];
	v[2] = sporttournament26_pd[318] * x[282];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[319] = 2. * x[117];
	v[1] = sporttournament26_pd[319] * x[118];
	v[0] += v[1];
	sporttournament26_pd[320] = 2. * x[117];
	v[1] = sporttournament26_pd[320] * x[249];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[321] = 2. * x[118];
	v[2] = sporttournament26_pd[321] * x[120];
	v[0] += v[2];
	sporttournament26_pd[322] = 2. * x[118];
	v[2] = sporttournament26_pd[322] * x[285];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[323] = 2. * x[118];
	v[1] = sporttournament26_pd[323] * x[317];
	v[0] += v[1];
	sporttournament26_pd[324] = 2. * x[119];
	v[1] = sporttournament26_pd[324] * x[234];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[325] = 2. * x[119];
	v[2] = sporttournament26_pd[325] * x[256];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[326] = 2. * x[119];
	v[1] = sporttournament26_pd[326] * x[308];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[327] = 2. * x[120];
	v[2] = sporttournament26_pd[327] * x[200];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[328] = 2. * x[120];
	v[1] = sporttournament26_pd[328] * x[262];
	v[0] += v[1];
	sporttournament26_pd[329] = 2. * x[120];
	v[1] = sporttournament26_pd[329] * x[308];
	v[0] += v[1];
	sporttournament26_pd[330] = 2. * x[121];
	v[1] = sporttournament26_pd[330] * x[150];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[331] = 2. * x[121];
	v[2] = sporttournament26_pd[331] * x[172];
	v[0] += v[2];
	sporttournament26_pd[332] = 2. * x[122];
	v[2] = sporttournament26_pd[332] * x[150];
	v[0] += v[2];
	sporttournament26_pd[333] = 2. * x[122];
	v[2] = sporttournament26_pd[333] * x[205];
	v[0] += v[2];
	sporttournament26_pd[334] = 2. * x[122];
	v[2] = sporttournament26_pd[334] * x[308];
	v[0] += v[2];
	sporttournament26_pd[335] = 2. * x[123];
	v[2] = sporttournament26_pd[335] * x[124];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[336] = 2. * x[123];
	v[1] = sporttournament26_pd[336] * x[250];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[337] = 2. * x[123];
	v[2] = sporttournament26_pd[337] * x[252];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[338] = 2. * x[123];
	v[1] = sporttournament26_pd[338] * x[286];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[339] = 2. * x[124];
	v[2] = sporttournament26_pd[339] * x[126];
	v[0] += v[2];
	sporttournament26_pd[340] = 2. * x[124];
	v[2] = sporttournament26_pd[340] * x[283];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[341] = 2. * x[124];
	v[1] = sporttournament26_pd[341] * x[319];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[342] = 2. * x[125];
	v[2] = sporttournament26_pd[342] * x[212];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[343] = 2. * x[125];
	v[1] = sporttournament26_pd[343] * x[263];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[344] = 2. * x[125];
	v[2] = sporttournament26_pd[344] * x[264];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[345] = 2. * x[125];
	v[1] = sporttournament26_pd[345] * x[295];
	v[0] += v[1];
	sporttournament26_pd[346] = 2. * x[126];
	v[1] = sporttournament26_pd[346] * x[212];
	v[0] += v[1];
	sporttournament26_pd[347] = 2. * x[126];
	v[1] = sporttournament26_pd[347] * x[252];
	v[0] += v[1];
	sporttournament26_pd[348] = 2. * x[127];
	v[1] = sporttournament26_pd[348] * x[129];
	v[0] += v[1];
	sporttournament26_pd[349] = 2. * x[128];
	v[1] = sporttournament26_pd[349] * x[129];
	v[0] += v[1];
	sporttournament26_pd[350] = 2. * x[128];
	v[1] = sporttournament26_pd[350] * x[212];
	v[0] += v[1];
	sporttournament26_pd[351] = 2. * x[128];
	v[1] = sporttournament26_pd[351] * x[215];
	v[0] += v[1];
	sporttournament26_pd[352] = 2. * x[128];
	v[1] = sporttournament26_pd[352] * x[264];
	v[0] += v[1];
	sporttournament26_pd[353] = 2. * x[129];
	v[1] = sporttournament26_pd[353] * x[184];
	v[0] += v[1];
	sporttournament26_pd[354] = 2. * x[129];
	v[1] = sporttournament26_pd[354] * x[217];
	v[0] += v[1];
	sporttournament26_pd[355] = 2. * x[130];
	v[1] = sporttournament26_pd[355] * x[131];
	v[0] += v[1];
	sporttournament26_pd[356] = 2. * x[130];
	v[1] = sporttournament26_pd[356] * x[269];
	v[0] += v[1];
	sporttournament26_pd[357] = 2. * x[131];
	v[1] = sporttournament26_pd[357] * x[187];
	v[0] += v[1];
	sporttournament26_pd[358] = 2. * x[131];
	v[1] = sporttournament26_pd[358] * x[217];
	v[0] += v[1];
	sporttournament26_pd[359] = 2. * x[131];
	v[1] = sporttournament26_pd[359] * x[302];
	v[0] += v[1];
	sporttournament26_pd[360] = 2. * x[132];
	v[1] = sporttournament26_pd[360] * x[133];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[361] = 2. * x[132];
	v[2] = sporttournament26_pd[361] * x[186];
	v[0] += v[2];
	sporttournament26_pd[362] = 2. * x[132];
	v[2] = sporttournament26_pd[362] * x[277];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[363] = 2. * x[133];
	v[1] = sporttournament26_pd[363] * x[134];
	v[0] += v[1];
	sporttournament26_pd[364] = 2. * x[133];
	v[1] = sporttournament26_pd[364] * x[302];
	v[0] += v[1];
	sporttournament26_pd[365] = 2. * x[134];
	v[1] = sporttournament26_pd[365] * x[136];
	v[0] += v[1];
	sporttournament26_pd[366] = 2. * x[134];
	v[1] = sporttournament26_pd[366] * x[189];
	v[0] += v[1];
	sporttournament26_pd[367] = 2. * x[135];
	v[1] = sporttournament26_pd[367] * x[163];
	v[0] += v[1];
	sporttournament26_pd[368] = 2. * x[135];
	v[1] = sporttournament26_pd[368] * x[190];
	v[0] += v[1];
	sporttournament26_pd[369] = 2. * x[136];
	v[1] = sporttournament26_pd[369] * x[163];
	v[0] += v[1];
	sporttournament26_pd[370] = 2. * x[136];
	v[1] = sporttournament26_pd[370] * x[191];
	v[0] += v[1];
	sporttournament26_pd[371] = 2. * x[137];
	v[1] = sporttournament26_pd[371] * x[138];
	v[0] += v[1];
	sporttournament26_pd[372] = 2. * x[137];
	v[1] = sporttournament26_pd[372] * x[231];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[373] = 2. * x[138];
	v[2] = sporttournament26_pd[373] * x[163];
	v[0] += v[2];
	sporttournament26_pd[374] = 2. * x[139];
	v[2] = sporttournament26_pd[374] * x[141];
	v[0] += v[2];
	sporttournament26_pd[375] = 2. * x[140];
	v[2] = sporttournament26_pd[375] * x[142];
	v[0] += v[2];
	sporttournament26_pd[376] = 2. * x[140];
	v[2] = sporttournament26_pd[376] * x[288];
	v[0] += v[2];
	sporttournament26_pd[377] = 2. * x[140];
	v[2] = sporttournament26_pd[377] * x[307];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[378] = 2. * x[141];
	v[1] = sporttournament26_pd[378] * x[142];
	v[0] += v[1];
	sporttournament26_pd[379] = 2. * x[141];
	v[1] = sporttournament26_pd[379] * x[307];
	v[0] += v[1];
	sporttournament26_pd[380] = 2. * x[142];
	v[1] = sporttournament26_pd[380] * x[167];
	v[0] += v[1];
	sporttournament26_pd[381] = 2. * x[142];
	v[1] = sporttournament26_pd[381] * x[278];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[382] = 2. * x[143];
	v[2] = sporttournament26_pd[382] * x[145];
	v[0] += v[2];
	sporttournament26_pd[383] = 2. * x[143];
	v[2] = sporttournament26_pd[383] * x[317];
	v[0] += v[2];
	sporttournament26_pd[384] = 2. * x[143];
	v[2] = sporttournament26_pd[384] * x[320];
	v[0] += v[2];
	sporttournament26_pd[385] = 2. * x[144];
	v[2] = sporttournament26_pd[385] * x[147];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[386] = 2. * x[145];
	v[1] = sporttournament26_pd[386] * x[147];
	v[0] += v[1];
	sporttournament26_pd[387] = 2. * x[145];
	v[1] = sporttournament26_pd[387] * x[255];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[388] = 2. * x[145];
	v[2] = sporttournament26_pd[388] * x[256];
	v[0] += v[2];
	sporttournament26_pd[389] = 2. * x[146];
	v[2] = sporttournament26_pd[389] * x[149];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[390] = 2. * x[146];
	v[1] = sporttournament26_pd[390] * x[238];
	v[0] += v[1];
	sporttournament26_pd[391] = 2. * x[146];
	v[1] = sporttournament26_pd[391] * x[285];
	v[0] += v[1];
	sporttournament26_pd[392] = 2. * x[147];
	v[1] = sporttournament26_pd[392] * x[149];
	v[0] += v[1];
	sporttournament26_pd[393] = 2. * x[147];
	v[1] = sporttournament26_pd[393] * x[305];
	v[0] += v[1];
	sporttournament26_pd[394] = 2. * x[148];
	v[1] = sporttournament26_pd[394] * x[204];
	v[0] += v[1];
	sporttournament26_pd[395] = 2. * x[148];
	v[1] = sporttournament26_pd[395] * x[250];
	v[0] += v[1];
	sporttournament26_pd[396] = 2. * x[148];
	v[1] = sporttournament26_pd[396] * x[275];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[397] = 2. * x[149];
	v[2] = sporttournament26_pd[397] * x[275];
	v[0] += v[2];
	sporttournament26_pd[398] = 2. * x[149];
	v[2] = sporttournament26_pd[398] * x[291];
	v[0] += v[2];
	sporttournament26_pd[399] = 2. * x[150];
	v[2] = sporttournament26_pd[399] * x[177];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[400] = 2. * x[150];
	v[1] = sporttournament26_pd[400] * x[319];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[401] = 2. * x[151];
	v[2] = sporttournament26_pd[401] * x[152];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[402] = 2. * x[151];
	v[1] = sporttournament26_pd[402] * x[176];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[403] = 2. * x[151];
	v[2] = sporttournament26_pd[403] * x[257];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[404] = 2. * x[152];
	v[1] = sporttournament26_pd[404] * x[154];
	v[0] += v[1];
	sporttournament26_pd[405] = 2. * x[152];
	v[1] = sporttournament26_pd[405] * x[283];
	v[0] += v[1];
	sporttournament26_pd[406] = 2. * x[152];
	v[1] = sporttournament26_pd[406] * x[319];
	v[0] += v[1];
	sporttournament26_pd[407] = 2. * x[153];
	v[1] = sporttournament26_pd[407] * x[266];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[408] = 2. * x[153];
	v[2] = sporttournament26_pd[408] * x[267];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[409] = 2. * x[153];
	v[1] = sporttournament26_pd[409] * x[301];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[410] = 2. * x[154];
	v[2] = sporttournament26_pd[410] * x[257];
	v[0] += v[2];
	sporttournament26_pd[411] = 2. * x[154];
	v[2] = sporttournament26_pd[411] * x[301];
	v[0] += v[2];
	sporttournament26_pd[412] = 2. * x[155];
	v[2] = sporttournament26_pd[412] * x[156];
	v[0] += v[2];
	sporttournament26_pd[413] = 2. * x[155];
	v[2] = sporttournament26_pd[413] * x[292];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[414] = 2. * x[156];
	v[1] = sporttournament26_pd[414] * x[158];
	v[0] += v[1];
	sporttournament26_pd[415] = 2. * x[156];
	v[1] = sporttournament26_pd[415] * x[217];
	v[0] += v[1];
	sporttournament26_pd[416] = 2. * x[156];
	v[1] = sporttournament26_pd[416] * x[315];
	v[0] += v[1];
	sporttournament26_pd[417] = 2. * x[157];
	v[1] = sporttournament26_pd[417] * x[159];
	v[0] += v[1];
	sporttournament26_pd[418] = 2. * x[158];
	v[1] = sporttournament26_pd[418] * x[159];
	v[0] += v[1];
	sporttournament26_pd[419] = 2. * x[158];
	v[1] = sporttournament26_pd[419] * x[183];
	v[0] += v[1];
	sporttournament26_pd[420] = 2. * x[158];
	v[1] = sporttournament26_pd[420] * x[230];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[421] = 2. * x[159];
	v[2] = sporttournament26_pd[421] * x[160];
	v[0] += v[2];
	sporttournament26_pd[422] = 2. * x[159];
	v[2] = sporttournament26_pd[422] * x[297];
	v[0] += v[2];
	sporttournament26_pd[423] = 2. * x[160];
	v[2] = sporttournament26_pd[423] * x[161];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[424] = 2. * x[160];
	v[1] = sporttournament26_pd[424] * x[235];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[425] = 2. * x[160];
	v[2] = sporttournament26_pd[425] * x[273];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[426] = 2. * x[161];
	v[1] = sporttournament26_pd[426] * x[162];
	v[0] += v[1];
	sporttournament26_pd[427] = 2. * x[161];
	v[1] = sporttournament26_pd[427] * x[297];
	v[0] += v[1];
	sporttournament26_pd[428] = 2. * x[162];
	v[1] = sporttournament26_pd[428] * x[223];
	v[0] += v[1];
	sporttournament26_pd[429] = 2. * x[162];
	v[1] = sporttournament26_pd[429] * x[225];
	v[0] += v[1];
	sporttournament26_pd[430] = 2. * x[163];
	v[1] = sporttournament26_pd[430] * x[322];
	v[0] += v[1];
	sporttournament26_pd[431] = 2. * x[164];
	v[1] = sporttournament26_pd[431] * x[166];
	v[0] += v[1];
	sporttournament26_pd[432] = 2. * x[164];
	v[1] = sporttournament26_pd[432] * x[259];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[433] = 2. * x[164];
	v[2] = sporttournament26_pd[433] * x[303];
	v[0] += v[2];
	sporttournament26_pd[434] = 2. * x[164];
	v[2] = sporttournament26_pd[434] * x[316];
	v[0] += v[2];
	sporttournament26_pd[435] = 2. * x[165];
	v[2] = sporttournament26_pd[435] * x[304];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[436] = 2. * x[166];
	v[1] = sporttournament26_pd[436] * x[274];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[437] = 2. * x[166];
	v[2] = sporttournament26_pd[437] * x[304];
	v[0] += v[2];
	sporttournament26_pd[438] = 2. * x[166];
	v[2] = sporttournament26_pd[438] * x[310];
	v[0] += v[2];
	sporttournament26_pd[439] = 2. * x[167];
	v[2] = sporttournament26_pd[439] * x[288];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[440] = 2. * x[167];
	v[1] = sporttournament26_pd[440] * x[321];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[441] = 2. * x[168];
	v[2] = sporttournament26_pd[441] * x[199];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[442] = 2. * x[168];
	v[1] = sporttournament26_pd[442] * x[282];
	v[0] += v[1];
	sporttournament26_pd[443] = 2. * x[169];
	v[1] = sporttournament26_pd[443] * x[171];
	v[0] += v[1];
	sporttournament26_pd[444] = 2. * x[169];
	v[1] = sporttournament26_pd[444] * x[199];
	v[0] += v[1];
	sporttournament26_pd[445] = 2. * x[169];
	v[1] = sporttournament26_pd[445] * x[285];
	v[0] += v[1];
	sporttournament26_pd[446] = 2. * x[169];
	v[1] = sporttournament26_pd[446] * x[320];
	v[0] += v[1];
	sporttournament26_pd[447] = 2. * x[170];
	v[1] = sporttournament26_pd[447] * x[173];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[448] = 2. * x[170];
	v[2] = sporttournament26_pd[448] * x[240];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[449] = 2. * x[171];
	v[1] = sporttournament26_pd[449] * x[173];
	v[0] += v[1];
	sporttournament26_pd[450] = 2. * x[171];
	v[1] = sporttournament26_pd[450] * x[255];
	v[0] += v[1];
	sporttournament26_pd[451] = 2. * x[172];
	v[1] = sporttournament26_pd[451] * x[175];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[452] = 2. * x[172];
	v[2] = sporttournament26_pd[452] * x[233];
	v[0] += v[2];
	sporttournament26_pd[453] = 2. * x[173];
	v[2] = sporttournament26_pd[453] * x[175];
	v[0] += v[2];
	sporttournament26_pd[454] = 2. * x[174];
	v[2] = sporttournament26_pd[454] * x[243];
	v[0] += v[2];
	sporttournament26_pd[455] = 2. * x[174];
	v[2] = sporttournament26_pd[455] * x[256];
	v[0] += v[2];
	sporttournament26_pd[456] = 2. * x[174];
	v[2] = sporttournament26_pd[456] * x[270];
	v[0] += v[2];
	sporttournament26_pd[457] = 2. * x[174];
	v[2] = sporttournament26_pd[457] * x[271];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[458] = 2. * x[175];
	v[1] = sporttournament26_pd[458] * x[271];
	v[0] += v[1];
	sporttournament26_pd[459] = 2. * x[175];
	v[1] = sporttournament26_pd[459] * x[289];
	v[0] += v[1];
	sporttournament26_pd[460] = 2. * x[176];
	v[1] = sporttournament26_pd[460] * x[313];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[461] = 2. * x[177];
	v[2] = sporttournament26_pd[461] * x[178];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[462] = 2. * x[177];
	v[1] = sporttournament26_pd[462] * x[263];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[463] = 2. * x[178];
	v[2] = sporttournament26_pd[463] * x[180];
	v[0] += v[2];
	sporttournament26_pd[464] = 2. * x[178];
	v[2] = sporttournament26_pd[464] * x[280];
	v[0] += v[2];
	sporttournament26_pd[465] = 2. * x[178];
	v[2] = sporttournament26_pd[465] * x[313];
	v[0] += v[2];
	sporttournament26_pd[466] = 2. * x[179];
	v[2] = sporttournament26_pd[466] * x[229];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[467] = 2. * x[179];
	v[1] = sporttournament26_pd[467] * x[295];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[468] = 2. * x[179];
	v[2] = sporttournament26_pd[468] * x[296];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[469] = 2. * x[180];
	v[1] = sporttournament26_pd[469] * x[263];
	v[0] += v[1];
	sporttournament26_pd[470] = 2. * x[180];
	v[1] = sporttournament26_pd[470] * x[296];
	v[0] += v[1];
	sporttournament26_pd[471] = 2. * x[181];
	v[1] = sporttournament26_pd[471] * x[183];
	v[0] += v[1];
	sporttournament26_pd[472] = 2. * x[181];
	v[1] = sporttournament26_pd[472] * x[296];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[473] = 2. * x[182];
	v[2] = sporttournament26_pd[473] * x[183];
	v[0] += v[2];
	sporttournament26_pd[474] = 2. * x[182];
	v[2] = sporttournament26_pd[474] * x[296];
	v[0] += v[2];
	sporttournament26_pd[475] = 2. * x[182];
	v[2] = sporttournament26_pd[475] * x[314];
	v[0] += v[2];
	sporttournament26_pd[476] = 2. * x[183];
	v[2] = sporttournament26_pd[476] * x[185];
	v[0] += v[2];
	sporttournament26_pd[477] = 2. * x[184];
	v[2] = sporttournament26_pd[477] * x[186];
	v[0] += v[2];
	sporttournament26_pd[478] = 2. * x[185];
	v[2] = sporttournament26_pd[478] * x[186];
	v[0] += v[2];
	sporttournament26_pd[479] = 2. * x[185];
	v[2] = sporttournament26_pd[479] * x[216];
	v[0] += v[2];
	sporttournament26_pd[480] = 2. * x[185];
	v[2] = sporttournament26_pd[480] * x[230];
	v[0] += v[2];
	sporttournament26_pd[481] = 2. * x[186];
	v[2] = sporttournament26_pd[481] * x[188];
	v[0] += v[2];
	sporttournament26_pd[482] = 2. * x[187];
	v[2] = sporttournament26_pd[482] * x[189];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[483] = 2. * x[187];
	v[1] = sporttournament26_pd[483] * x[241];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[484] = 2. * x[187];
	v[2] = sporttournament26_pd[484] * x[269];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[485] = 2. * x[188];
	v[1] = sporttournament26_pd[485] * x[189];
	v[0] += v[1];
	sporttournament26_pd[486] = 2. * x[188];
	v[1] = sporttournament26_pd[486] * x[281];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[487] = 2. * x[188];
	v[2] = sporttournament26_pd[487] * x[293];
	v[0] += v[2];
	sporttournament26_pd[488] = 2. * x[189];
	v[2] = sporttournament26_pd[488] * x[191];
	v[0] += v[2];
	sporttournament26_pd[489] = 2. * x[190];
	v[2] = sporttournament26_pd[489] * x[192];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[490] = 2. * x[190];
	v[1] = sporttournament26_pd[490] * x[235];
	v[0] += v[1];
	sporttournament26_pd[491] = 2. * x[190];
	v[1] = sporttournament26_pd[491] * x[246];
	v[0] += v[1];
	sporttournament26_pd[492] = 2. * x[191];
	v[1] = sporttournament26_pd[492] * x[192];
	v[0] += v[1];
	sporttournament26_pd[493] = 2. * x[191];
	v[1] = sporttournament26_pd[493] * x[246];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[494] = 2. * x[192];
	v[2] = sporttournament26_pd[494] * x[227];
	v[0] += v[2];
	sporttournament26_pd[495] = 2. * x[193];
	v[2] = sporttournament26_pd[495] * x[196];
	v[0] += v[2];
	sporttournament26_pd[496] = 2. * x[193];
	v[2] = sporttournament26_pd[496] * x[311];
	v[0] += v[2];
	sporttournament26_pd[497] = 2. * x[193];
	v[2] = sporttournament26_pd[497] * x[316];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[498] = 2. * x[194];
	v[1] = sporttournament26_pd[498] * x[196];
	v[0] += v[1];
	sporttournament26_pd[499] = 2. * x[194];
	v[1] = sporttournament26_pd[499] * x[253];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[500] = 2. * x[194];
	v[2] = sporttournament26_pd[500] * x[299];
	v[0] += v[2];
	sporttournament26_pd[501] = 2. * x[194];
	v[2] = sporttournament26_pd[501] * x[312];
	v[0] += v[2];
	sporttournament26_pd[502] = 2. * x[195];
	v[2] = sporttournament26_pd[502] * x[294];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[503] = 2. * x[195];
	v[1] = sporttournament26_pd[503] * x[300];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[504] = 2. * x[196];
	v[2] = sporttournament26_pd[504] * x[300];
	v[0] += v[2];
	sporttournament26_pd[505] = 2. * x[197];
	v[2] = sporttournament26_pd[505] * x[284];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[506] = 2. * x[197];
	v[1] = sporttournament26_pd[506] * x[318];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[507] = 2. * x[198];
	v[2] = sporttournament26_pd[507] * x[278];
	v[0] += v[2];
	sporttournament26_pd[508] = 2. * x[198];
	v[2] = sporttournament26_pd[508] * x[279];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[509] = 2. * x[199];
	v[1] = sporttournament26_pd[509] * x[201];
	v[0] += v[1];
	sporttournament26_pd[510] = 2. * x[199];
	v[1] = sporttournament26_pd[510] * x[321];
	v[0] += v[1];
	sporttournament26_pd[511] = 2. * x[200];
	v[1] = sporttournament26_pd[511] * x[203];
	v[0] += v[1];
	sporttournament26_pd[512] = 2. * x[201];
	v[1] = sporttournament26_pd[512] * x[202];
	v[0] += v[1];
	sporttournament26_pd[513] = 2. * x[201];
	v[1] = sporttournament26_pd[513] * x[203];
	v[0] += v[1];
	sporttournament26_pd[514] = 2. * x[201];
	v[1] = sporttournament26_pd[514] * x[279];
	v[0] += v[1];
	sporttournament26_pd[515] = 2. * x[202];
	v[1] = sporttournament26_pd[515] * x[205];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[516] = 2. * x[202];
	v[2] = sporttournament26_pd[516] * x[270];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[517] = 2. * x[203];
	v[1] = sporttournament26_pd[517] * x[205];
	v[0] += v[1];
	sporttournament26_pd[518] = 2. * x[204];
	v[1] = sporttournament26_pd[518] * x[206];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[519] = 2. * x[204];
	v[2] = sporttournament26_pd[519] * x[233];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[520] = 2. * x[204];
	v[1] = sporttournament26_pd[520] * x[285];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[521] = 2. * x[205];
	v[2] = sporttournament26_pd[521] * x[206];
	v[0] += v[2];
	sporttournament26_pd[522] = 2. * x[206];
	v[2] = sporttournament26_pd[522] * x[207];
	v[0] += v[2];
	sporttournament26_pd[523] = 2. * x[206];
	v[2] = sporttournament26_pd[523] * x[286];
	v[0] += v[2];
	sporttournament26_pd[524] = 2. * x[207];
	v[2] = sporttournament26_pd[524] * x[208];
	v[0] += v[2];
	sporttournament26_pd[525] = 2. * x[207];
	v[2] = sporttournament26_pd[525] * x[244];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[526] = 2. * x[207];
	v[1] = sporttournament26_pd[526] * x[309];
	v[0] += v[1];
	sporttournament26_pd[527] = 2. * x[208];
	v[1] = sporttournament26_pd[527] * x[209];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[528] = 2. * x[208];
	v[2] = sporttournament26_pd[528] * x[266];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[529] = 2. * x[208];
	v[1] = sporttournament26_pd[529] * x[275];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[530] = 2. * x[209];
	v[2] = sporttournament26_pd[530] * x[210];
	v[0] += v[2];
	sporttournament26_pd[531] = 2. * x[209];
	v[2] = sporttournament26_pd[531] * x[211];
	v[0] += v[2];
	sporttournament26_pd[532] = 2. * x[209];
	v[2] = sporttournament26_pd[532] * x[309];
	v[0] += v[2];
	sporttournament26_pd[533] = 2. * x[210];
	v[2] = sporttournament26_pd[533] * x[292];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[534] = 2. * x[211];
	v[1] = sporttournament26_pd[534] * x[266];
	v[0] += v[1];
	sporttournament26_pd[535] = 2. * x[211];
	v[1] = sporttournament26_pd[535] * x[292];
	v[0] += v[1];
	sporttournament26_pd[536] = 2. * x[212];
	v[1] = sporttournament26_pd[536] * x[214];
	v[0] += v[1];
	sporttournament26_pd[537] = 2. * x[213];
	v[1] = sporttournament26_pd[537] * x[216];
	v[0] += v[1];
	sporttournament26_pd[538] = 2. * x[213];
	v[1] = sporttournament26_pd[538] * x[301];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[539] = 2. * x[214];
	v[2] = sporttournament26_pd[539] * x[216];
	v[0] += v[2];
	sporttournament26_pd[540] = 2. * x[214];
	v[2] = sporttournament26_pd[540] * x[292];
	v[0] += v[2];
	sporttournament26_pd[541] = 2. * x[215];
	v[2] = sporttournament26_pd[541] * x[218];
	v[0] += v[2];
	sporttournament26_pd[542] = 2. * x[216];
	v[2] = sporttournament26_pd[542] * x[218];
	v[0] += v[2];
	sporttournament26_pd[543] = 2. * x[217];
	v[2] = sporttournament26_pd[543] * x[220];
	v[0] += v[2];
	sporttournament26_pd[544] = 2. * x[218];
	v[2] = sporttournament26_pd[544] * x[220];
	v[0] += v[2];
	sporttournament26_pd[545] = 2. * x[219];
	v[2] = sporttournament26_pd[545] * x[222];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[546] = 2. * x[220];
	v[1] = sporttournament26_pd[546] * x[222];
	v[0] += v[1];
	sporttournament26_pd[547] = 2. * x[220];
	v[1] = sporttournament26_pd[547] * x[245];
	v[0] += v[1];
	sporttournament26_pd[548] = 2. * x[221];
	v[1] = sporttournament26_pd[548] * x[223];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[549] = 2. * x[221];
	v[2] = sporttournament26_pd[549] * x[246];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[550] = 2. * x[222];
	v[1] = sporttournament26_pd[550] * x[223];
	v[0] += v[1];
	sporttournament26_pd[551] = 2. * x[223];
	v[1] = sporttournament26_pd[551] * x[224];
	v[0] += v[1];
	sporttournament26_pd[552] = 2. * x[224];
	v[1] = sporttournament26_pd[552] * x[225];
	v[0] += v[1];
	sporttournament26_pd[553] = 2. * x[224];
	v[1] = sporttournament26_pd[553] * x[226];
	v[0] += v[1];
	sporttournament26_pd[554] = 2. * x[224];
	v[1] = sporttournament26_pd[554] * x[241];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[555] = 2. * x[225];
	v[2] = sporttournament26_pd[555] * x[323];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[556] = 2. * x[226];
	v[1] = sporttournament26_pd[556] * x[232];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[557] = 2. * x[226];
	v[2] = sporttournament26_pd[557] * x[323];
	v[0] += v[2];
	sporttournament26_pd[558] = 2. * x[227];
	v[2] = sporttournament26_pd[558] * x[231];
	v[0] += v[2];
	sporttournament26_pd[559] = 2. * x[227];
	v[2] = sporttournament26_pd[559] * x[324];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[560] = 2. * x[228];
	v[1] = sporttournament26_pd[560] * x[229];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[561] = 2. * x[228];
	v[2] = sporttournament26_pd[561] * x[264];
	v[0] += v[2];
	sporttournament26_pd[562] = 2. * x[231];
	v[2] = sporttournament26_pd[562] * x[232];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[563] = 2. * x[232];
	v[1] = sporttournament26_pd[563] * x[241];
	v[0] += v[1];
	sporttournament26_pd[564] = 2. * x[233];
	v[1] = sporttournament26_pd[564] * x[234];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[565] = 2. * x[235];
	v[2] = sporttournament26_pd[565] * x[245];
	v[0] += v[2];
	sporttournament26_pd[566] = 2. * x[236];
	v[2] = sporttournament26_pd[566] * x[237];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[567] = 2. * x[236];
	v[1] = sporttournament26_pd[567] * x[247];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[568] = 2. * x[236];
	v[2] = sporttournament26_pd[568] * x[253];
	v[0] += v[2];
	sporttournament26_pd[569] = 2. * x[237];
	v[2] = sporttournament26_pd[569] * x[294];
	v[0] += v[2];
	sporttournament26_pd[570] = 2. * x[238];
	v[2] = sporttournament26_pd[570] * x[239];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[571] = 2. * x[238];
	v[1] = sporttournament26_pd[571] * x[240];
	v[0] += v[1];
	sporttournament26_pd[572] = 2. * x[238];
	v[1] = sporttournament26_pd[572] * x[270];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[573] = 2. * x[239];
	v[2] = sporttournament26_pd[573] * x[265];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[574] = 2. * x[240];
	v[1] = sporttournament26_pd[574] * x[279];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[575] = 2. * x[243];
	v[2] = sporttournament26_pd[575] * x[244];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[576] = 2. * x[243];
	v[1] = sporttournament26_pd[576] * x[258];
	v[0] += v[1];
	sporttournament26_pd[577] = 2. * x[244];
	v[1] = sporttournament26_pd[577] * x[262];
	v[0] += v[1];
	sporttournament26_pd[578] = 2. * x[245];
	v[1] = sporttournament26_pd[578] * x[281];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[579] = 2. * x[247];
	v[2] = sporttournament26_pd[579] * x[278];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[580] = 2. * x[248];
	v[1] = sporttournament26_pd[580] * x[249];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[581] = 2. * x[248];
	v[2] = sporttournament26_pd[581] * x[255];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[582] = 2. * x[249];
	v[1] = sporttournament26_pd[582] * x[278];
	v[0] += v[1];
	sporttournament26_pd[583] = 2. * x[250];
	v[1] = sporttournament26_pd[583] * x[251];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[584] = 2. * x[251];
	v[2] = sporttournament26_pd[584] * x[262];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[585] = 2. * x[253];
	v[1] = sporttournament26_pd[585] * x[274];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[586] = 2. * x[254];
	v[2] = sporttournament26_pd[586] * x[274];
	v[0] += v[2];
	sporttournament26_pd[587] = 2. * x[254];
	v[2] = sporttournament26_pd[587] * x[317];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[588] = 2. * x[257];
	v[1] = sporttournament26_pd[588] * x[258];
	v[0] += v[1];
	sporttournament26_pd[589] = 2. * x[257];
	v[1] = sporttournament26_pd[589] * x[268];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[590] = 2. * x[258];
	v[2] = sporttournament26_pd[590] * x[291];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[591] = 2. * x[260];
	v[1] = sporttournament26_pd[591] * x[320];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[592] = 2. * x[261];
	v[2] = sporttournament26_pd[592] * x[300];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[593] = 2. * x[262];
	v[1] = sporttournament26_pd[593] * x[265];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[594] = 2. * x[264];
	v[2] = sporttournament26_pd[594] * x[276];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[595] = 2. * x[267];
	v[1] = sporttournament26_pd[595] * x[268];
	v[0] += v[1];
	sporttournament26_pd[596] = 2. * x[267];
	v[1] = sporttournament26_pd[596] * x[272];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[597] = 2. * x[268];
	v[2] = sporttournament26_pd[597] * x[314];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[598] = 2. * x[269];
	v[1] = sporttournament26_pd[598] * x[306];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[599] = 2. * x[271];
	v[2] = sporttournament26_pd[599] * x[313];
	v[0] += v[2];
	sporttournament26_pd[600] = 2. * x[273];
	v[2] = sporttournament26_pd[600] * x[302];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[601] = 2. * x[275];
	v[1] = sporttournament26_pd[601] * x[319];
	v[0] += v[1];
	sporttournament26_pd[602] = 2. * x[277];
	v[1] = sporttournament26_pd[602] * x[297];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[603] = 2. * x[279];
	v[2] = sporttournament26_pd[603] * x[318];
	v[0] += v[2];
	sporttournament26_pd[604] = 2. * x[284];
	v[2] = sporttournament26_pd[604] * x[310];
	v[0] += v[2];
	sporttournament26_pd[605] = 2. * x[286];
	v[2] = sporttournament26_pd[605] * x[305];
	v[0] += v[2];
	sporttournament26_pd[606] = 2. * x[286];
	v[2] = sporttournament26_pd[606] * x[309];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[607] = 2. * x[287];
	v[1] = sporttournament26_pd[607] * x[290];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[608] = 2. * x[288];
	v[2] = sporttournament26_pd[608] * x[294];
	v[0] += v[2];
	sporttournament26_pd[609] = 2. * x[289];
	v[2] = sporttournament26_pd[609] * x[305];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[610] = 2. * x[290];
	v[1] = sporttournament26_pd[610] * x[293];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[611] = 2. * x[293];
	v[2] = sporttournament26_pd[611] * x[297];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[612] = 2. * x[298];
	v[1] = sporttournament26_pd[612] * x[306];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[613] = 2. * x[300];
	v[2] = sporttournament26_pd[613] * x[318];
	v[0] += v[2];
	sporttournament26_pd[614] = 2. * x[301];
	v[2] = sporttournament26_pd[614] * x[315];
	v[0] += v[2];
	sporttournament26_pd[615] = 2. * x[304];
	v[2] = sporttournament26_pd[615] * x[321];
	v[0] += v[2];
	sporttournament26_pd[616] = 2. * x[305];
	v[2] = sporttournament26_pd[616] * x[308];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[617] = 2. * x[310];
	v[1] = sporttournament26_pd[617] * x[311];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[618] = 2. * x[310];
	v[2] = sporttournament26_pd[618] * x[312];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[619] = 2. * x[314];
	v[1] = sporttournament26_pd[619] * x[315];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[620] = 2. * x[317];
	v[2] = sporttournament26_pd[620] * x[318];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[621] = 2. * x[320];
	v[1] = sporttournament26_pd[621] * x[321];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament26_pd[622] = 2. * x[322];
	v[2] = sporttournament26_pd[622] * x[323];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament26_pd[623] = 2. * x[323];
	v[1] = sporttournament26_pd[623] * x[324];
	v[0] += v[1];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += -2.*x[5];
	t1 += -2.*x[6];
	t1 += -4.*x[7];
	t1 += -2.*x[8];
	t1 += -2.*x[9];
	t1 += -4.*x[10];
	t1 += -2.*x[11];
	t1 += -2.*x[12];
	t1 += -2.*x[13];
	t1 += -2.*x[14];
	t1 += -2.*x[15];
	t1 += -2.*x[16];
	t1 += -2.*x[17];
	t1 += 2.*x[18];
	t1 += -2.*x[19];
	t1 += -2.*x[20];
	t1 += -2.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += -2.*x[24];
	t1 += -2.*x[25];
	t1 += -2.*x[26];
	t1 += -2.*x[27];
	t1 += -2.*x[28];
	t1 += -2.*x[29];
	t1 += -2.*x[30];
	t1 += -4.*x[31];
	t1 += -2.*x[32];
	t1 += 2.*x[33];
	t1 += -2.*x[34];
	t1 += -2.*x[35];
	t1 += -2.*x[36];
	t1 += -4.*x[37];
	t1 += -4.*x[38];
	t1 += -4.*x[39];
	t1 += -4.*x[40];
	t1 += -2.*x[41];
	t1 += -4.*x[42];
	t1 += -2.*x[43];
	t1 += -2.*x[44];
	t1 += -2.*x[45];
	t1 += -2.*x[46];
	t1 += -2.*x[47];
	t1 += -4.*x[48];
	t1 += -4.*x[49];
	t1 += -2.*x[50];
	t1 += -4.*x[51];
	t1 += -4.*x[52];
	t1 += -2.*x[53];
	t1 += -4.*x[54];
	t1 += -4.*x[55];
	t1 += -4.*x[56];
	t1 += -2.*x[57];
	t1 += -2.*x[58];
	t1 += -2.*x[59];
	t1 += -2.*x[60];
	t1 += -2.*x[61];
	t1 += -2.*x[62];
	t1 += -4.*x[63];
	t1 += -2.*x[64];
	t1 += -2.*x[65];
	t1 += -4.*x[66];
	t1 += -2.*x[67];
	t1 += -2.*x[68];
	t1 += -4.*x[69];
	t1 += -2.*x[70];
	t1 += -4.*x[71];
	t1 += -4.*x[72];
	t1 += -4.*x[73];
	t1 += -2.*x[74];
	t1 += -2.*x[75];
	t1 += -2.*x[76];
	t1 += -2.*x[77];
	t1 += -2.*x[78];
	t1 += -2.*x[79];
	t1 += -2.*x[80];
	t1 += 2.*x[81];
	t1 += -4.*x[82];
	t1 += -2.*x[83];
	t1 += -4.*x[84];
	t1 += -4.*x[85];
	t1 += -2.*x[86];
	t1 += 2.*x[87];
	t1 += -4.*x[88];
	t1 += -2.*x[89];
	t1 += -4.*x[90];
	t1 += -4.*x[91];
	t1 += -4.*x[92];
	t1 += -2.*x[93];
	t1 += -2.*x[94];
	t1 += -2.*x[95];
	t1 += -2.*x[96];
	t1 += -2.*x[97];
	t1 += -2.*x[98];
	t1 += -2.*x[99];
	t1 += -4.*x[100];
	t1 += -2.*x[101];
	t1 += -2.*x[102];
	t1 += 2.*x[103];
	t1 += 2.*x[104];
	t1 += -2.*x[105];
	t1 += -4.*x[106];
	t1 += -2.*x[107];
	t1 += -4.*x[108];
	t1 += -4.*x[109];
	t1 += -2.*x[110];
	t1 += -4.*x[111];
	t1 += -4.*x[112];
	t1 += -2.*x[113];
	t1 += -2.*x[114];
	t1 += -2.*x[115];
	t1 += -2.*x[116];
	t1 += -2.*x[117];
	t1 += -2.*x[118];
	t1 += 2.*x[119];
	t1 += -2.*x[120];
	t1 += -2.*x[121];
	t1 += -2.*x[122];
	t1 += 4.*x[123];
	t1 += 2.*x[124];
	t1 += 2.*x[125];
	t1 += -4.*x[126];
	t1 += -4.*x[127];
	t1 += -4.*x[128];
	t1 += -4.*x[129];
	t1 += -4.*x[130];
	t1 += -4.*x[131];
	t1 += 2.*x[132];
	t1 += -2.*x[133];
	t1 += -4.*x[134];
	t1 += -2.*x[135];
	t1 += -4.*x[136];
	t1 += -2.*x[137];
	t1 += -2.*x[138];
	t1 += -2.*x[139];
	t1 += -2.*x[140];
	t1 += -2.*x[141];
	t1 += -2.*x[142];
	t1 += -2.*x[143];
	t1 += 2.*x[144];
	t1 += -2.*x[145];
	t1 += -2.*x[146];
	t1 += -2.*x[147];
	t1 += -2.*x[148];
	t1 += -2.*x[149];
	t1 += 2.*x[150];
	t1 += 4.*x[151];
	t1 += -2.*x[152];
	t1 += 2.*x[153];
	t1 += -4.*x[154];
	t1 += -2.*x[155];
	t1 += -4.*x[156];
	t1 += -4.*x[157];
	t1 += -2.*x[158];
	t1 += -4.*x[159];
	t1 += 2.*x[160];
	t1 += -2.*x[161];
	t1 += -4.*x[162];
	t1 += -4.*x[163];
	t1 += -2.*x[164];
	t1 += 2.*x[165];
	t1 += -2.*x[166];
	t1 += 2.*x[167];
	t1 += 2.*x[168];
	t1 += -4.*x[169];
	t1 += 4.*x[170];
	t1 += -4.*x[171];
	t1 += -2.*x[172];
	t1 += -2.*x[173];
	t1 += -2.*x[174];
	t1 += -2.*x[175];
	t1 += 2.*x[176];
	t1 += 4.*x[177];
	t1 += -2.*x[178];
	t1 += 4.*x[179];
	t1 += -4.*x[180];
	t1 += -2.*x[181];
	t1 += -2.*x[182];
	t1 += -4.*x[183];
	t1 += -4.*x[184];
	t1 += -4.*x[185];
	t1 += -4.*x[186];
	t1 += 2.*x[187];
	t1 += -2.*x[188];
	t1 += -2.*x[189];
	t1 += -2.*x[190];
	t1 += -2.*x[191];
	t1 += -2.*x[192];
	t1 += -2.*x[193];
	t1 += -2.*x[194];
	t1 += 2.*x[195];
	t1 += -2.*x[196];
	t1 += 2.*x[197];
	t1 += 2.*x[198];
	t1 += -2.*x[199];
	t1 += -2.*x[200];
	t1 += -4.*x[201];
	t1 += 2.*x[202];
	t1 += -4.*x[203];
	t1 += 2.*x[204];
	t1 += -2.*x[205];
	t1 += -2.*x[206];
	t1 += -2.*x[207];
	t1 += 2.*x[208];
	t1 += -2.*x[209];
	t1 += 2.*x[210];
	t1 += -4.*x[211];
	t1 += -2.*x[212];
	t1 += -2.*x[213];
	t1 += -2.*x[214];
	t1 += -4.*x[215];
	t1 += -4.*x[216];
	t1 += -4.*x[217];
	t1 += -4.*x[218];
	t1 += 2.*x[219];
	t1 += -4.*x[220];
	t1 += 2.*x[221];
	t1 += -2.*x[222];
	t1 += -2.*x[223];
	t1 += -2.*x[224];
	t1 += -2.*x[225];
	t1 += -2.*x[226];
	t1 += -2.*x[227];
	t1 += x[325];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[324] = sporttournament26_pd[623];
	J[323] = x[324]*2.;
	J[323] -= sporttournament26_pd[622];
	J[322] = -x[323]*2.;
	J[321] = -sporttournament26_pd[621];
	J[320] = -x[321]*2.;
	J[318] = -sporttournament26_pd[620];
	J[317] = -x[318]*2.;
	J[315] = -sporttournament26_pd[619];
	J[314] = -x[315]*2.;
	J[312] = -sporttournament26_pd[618];
	J[310] = -x[312]*2.;
	J[311] = -sporttournament26_pd[617];
	J[310] -= x[311]*2.;
	J[308] = -sporttournament26_pd[616];
	J[305] = -x[308]*2.;
	J[321] += sporttournament26_pd[615];
	J[304] = x[321]*2.;
	J[315] += sporttournament26_pd[614];
	J[301] = x[315]*2.;
	J[318] += sporttournament26_pd[613];
	J[300] = x[318]*2.;
	J[306] = -sporttournament26_pd[612];
	J[298] = -x[306]*2.;
	J[297] = -sporttournament26_pd[611];
	J[293] = -x[297]*2.;
	J[293] -= sporttournament26_pd[610];
	J[290] = -x[293]*2.;
	J[305] -= sporttournament26_pd[609];
	J[289] = -x[305]*2.;
	J[294] = sporttournament26_pd[608];
	J[288] = x[294]*2.;
	J[290] -= sporttournament26_pd[607];
	J[287] = -x[290]*2.;
	J[309] = -sporttournament26_pd[606];
	J[286] = -x[309]*2.;
	J[305] += sporttournament26_pd[605];
	J[286] += x[305]*2.;
	J[310] += sporttournament26_pd[604];
	J[284] = x[310]*2.;
	J[318] += sporttournament26_pd[603];
	J[279] = x[318]*2.;
	J[297] -= sporttournament26_pd[602];
	J[277] = -x[297]*2.;
	J[319] = sporttournament26_pd[601];
	J[275] = x[319]*2.;
	J[302] = -sporttournament26_pd[600];
	J[273] = -x[302]*2.;
	J[313] = sporttournament26_pd[599];
	J[271] = x[313]*2.;
	J[306] -= sporttournament26_pd[598];
	J[269] = -x[306]*2.;
	J[314] -= sporttournament26_pd[597];
	J[268] = -x[314]*2.;
	J[272] = -sporttournament26_pd[596];
	J[267] = -x[272]*2.;
	J[268] += sporttournament26_pd[595];
	J[267] += x[268]*2.;
	J[276] = -sporttournament26_pd[594];
	J[264] = -x[276]*2.;
	J[265] = -sporttournament26_pd[593];
	J[262] = -x[265]*2.;
	J[300] -= sporttournament26_pd[592];
	J[261] = -x[300]*2.;
	J[320] -= sporttournament26_pd[591];
	J[260] = -x[320]*2.;
	J[291] = -sporttournament26_pd[590];
	J[258] = -x[291]*2.;
	J[268] -= sporttournament26_pd[589];
	J[257] = -x[268]*2.;
	J[258] += sporttournament26_pd[588];
	J[257] += x[258]*2.;
	J[317] -= sporttournament26_pd[587];
	J[254] = -x[317]*2.;
	J[274] = sporttournament26_pd[586];
	J[254] += x[274]*2.;
	J[274] -= sporttournament26_pd[585];
	J[253] = -x[274]*2.;
	J[262] -= sporttournament26_pd[584];
	J[251] = -x[262]*2.;
	J[251] -= sporttournament26_pd[583];
	J[250] = -x[251]*2.;
	J[278] = sporttournament26_pd[582];
	J[249] = x[278]*2.;
	J[255] = -sporttournament26_pd[581];
	J[248] = -x[255]*2.;
	J[249] -= sporttournament26_pd[580];
	J[248] -= x[249]*2.;
	J[278] -= sporttournament26_pd[579];
	J[247] = -x[278]*2.;
	J[281] = -sporttournament26_pd[578];
	J[245] = -x[281]*2.;
	J[262] += sporttournament26_pd[577];
	J[244] = x[262]*2.;
	J[258] += sporttournament26_pd[576];
	J[243] = x[258]*2.;
	J[244] -= sporttournament26_pd[575];
	J[243] -= x[244]*2.;
	J[279] -= sporttournament26_pd[574];
	J[240] = -x[279]*2.;
	J[265] -= sporttournament26_pd[573];
	J[239] = -x[265]*2.;
	J[270] = -sporttournament26_pd[572];
	J[238] = -x[270]*2.;
	J[240] += sporttournament26_pd[571];
	J[238] += x[240]*2.;
	J[239] -= sporttournament26_pd[570];
	J[238] -= x[239]*2.;
	J[294] += sporttournament26_pd[569];
	J[237] = x[294]*2.;
	J[253] += sporttournament26_pd[568];
	J[236] = x[253]*2.;
	J[247] -= sporttournament26_pd[567];
	J[236] -= x[247]*2.;
	J[237] -= sporttournament26_pd[566];
	J[236] -= x[237]*2.;
	J[245] += sporttournament26_pd[565];
	J[235] = x[245]*2.;
	J[234] = -sporttournament26_pd[564];
	J[233] = -x[234]*2.;
	J[241] = sporttournament26_pd[563];
	J[232] = x[241]*2.;
	J[232] -= sporttournament26_pd[562];
	J[231] = -x[232]*2.;
	J[264] += sporttournament26_pd[561];
	J[228] = x[264]*2.;
	J[229] = -sporttournament26_pd[560];
	J[228] -= x[229]*2.;
	J[324] -= sporttournament26_pd[559];
	J[227] = -x[324]*2. + -2.;
	J[231] += sporttournament26_pd[558];
	J[227] += x[231]*2.;
	J[323] += sporttournament26_pd[557];
	J[226] = x[323]*2. + -2.;
	J[232] -= sporttournament26_pd[556];
	J[226] -= x[232]*2.;
	J[323] -= sporttournament26_pd[555];
	J[225] = -x[323]*2. + -2.;
	J[241] -= sporttournament26_pd[554];
	J[224] = -x[241]*2. + -2.;
	J[226] += sporttournament26_pd[553];
	J[224] += x[226]*2.;
	J[225] += sporttournament26_pd[552];
	J[224] += x[225]*2.;
	J[224] += sporttournament26_pd[551];
	J[223] = x[224]*2. + -2.;
	J[223] += sporttournament26_pd[550];
	J[222] = x[223]*2. + -2.;
	J[246] = -sporttournament26_pd[549];
	J[221] = -x[246]*2. + 2.;
	J[223] -= sporttournament26_pd[548];
	J[221] -= x[223]*2.;
	J[245] += sporttournament26_pd[547];
	J[220] = x[245]*2. + -4.;
	J[222] += sporttournament26_pd[546];
	J[220] += x[222]*2.;
	J[222] -= sporttournament26_pd[545];
	J[219] = -x[222]*2. + 2.;
	J[220] += sporttournament26_pd[544];
	J[218] = x[220]*2. + -4.;
	J[220] += sporttournament26_pd[543];
	J[217] = x[220]*2. + -4.;
	J[218] += sporttournament26_pd[542];
	J[216] = x[218]*2. + -4.;
	J[218] += sporttournament26_pd[541];
	J[215] = x[218]*2. + -4.;
	J[292] = sporttournament26_pd[540];
	J[214] = x[292]*2. + -2.;
	J[216] += sporttournament26_pd[539];
	J[214] += x[216]*2.;
	J[301] -= sporttournament26_pd[538];
	J[213] = -x[301]*2. + -2.;
	J[216] += sporttournament26_pd[537];
	J[213] += x[216]*2.;
	J[214] += sporttournament26_pd[536];
	J[212] = x[214]*2. + -2.;
	J[292] += sporttournament26_pd[535];
	J[211] = x[292]*2. + -4.;
	J[266] = sporttournament26_pd[534];
	J[211] += x[266]*2.;
	J[292] -= sporttournament26_pd[533];
	J[210] = -x[292]*2. + 2.;
	J[309] += sporttournament26_pd[532];
	J[209] = x[309]*2. + -2.;
	J[211] += sporttournament26_pd[531];
	J[209] += x[211]*2.;
	J[210] += sporttournament26_pd[530];
	J[209] += x[210]*2.;
	J[275] -= sporttournament26_pd[529];
	J[208] = -x[275]*2. + 2.;
	J[266] -= sporttournament26_pd[528];
	J[208] -= x[266]*2.;
	J[209] -= sporttournament26_pd[527];
	J[208] -= x[209]*2.;
	J[309] += sporttournament26_pd[526];
	J[207] = x[309]*2. + -2.;
	J[244] -= sporttournament26_pd[525];
	J[207] -= x[244]*2.;
	J[208] += sporttournament26_pd[524];
	J[207] += x[208]*2.;
	J[286] += sporttournament26_pd[523];
	J[206] = x[286]*2. + -2.;
	J[207] += sporttournament26_pd[522];
	J[206] += x[207]*2.;
	J[206] += sporttournament26_pd[521];
	J[205] = x[206]*2. + -2.;
	J[285] = -sporttournament26_pd[520];
	J[204] = -x[285]*2. + 2.;
	J[233] -= sporttournament26_pd[519];
	J[204] -= x[233]*2.;
	J[206] -= sporttournament26_pd[518];
	J[204] -= x[206]*2.;
	J[205] += sporttournament26_pd[517];
	J[203] = x[205]*2. + -4.;
	J[270] -= sporttournament26_pd[516];
	J[202] = -x[270]*2. + 2.;
	J[205] -= sporttournament26_pd[515];
	J[202] -= x[205]*2.;
	J[279] += sporttournament26_pd[514];
	J[201] = x[279]*2. + -4.;
	J[203] += sporttournament26_pd[513];
	J[201] += x[203]*2.;
	J[202] += sporttournament26_pd[512];
	J[201] += x[202]*2.;
	J[203] += sporttournament26_pd[511];
	J[200] = x[203]*2. + -2.;
	J[321] += sporttournament26_pd[510];
	J[199] = x[321]*2. + -2.;
	J[201] += sporttournament26_pd[509];
	J[199] += x[201]*2.;
	J[279] -= sporttournament26_pd[508];
	J[198] = -x[279]*2. + 2.;
	J[278] += sporttournament26_pd[507];
	J[198] += x[278]*2.;
	J[318] -= sporttournament26_pd[506];
	J[197] = -x[318]*2. + 2.;
	J[284] -= sporttournament26_pd[505];
	J[197] -= x[284]*2.;
	J[300] += sporttournament26_pd[504];
	J[196] = x[300]*2. + -2.;
	J[300] -= sporttournament26_pd[503];
	J[195] = -x[300]*2. + 2.;
	J[294] -= sporttournament26_pd[502];
	J[195] -= x[294]*2.;
	J[312] += sporttournament26_pd[501];
	J[194] = x[312]*2. + -2.;
	J[299] = sporttournament26_pd[500];
	J[194] += x[299]*2.;
	J[253] -= sporttournament26_pd[499];
	J[194] -= x[253]*2.;
	J[196] += sporttournament26_pd[498];
	J[194] += x[196]*2.;
	J[316] = -sporttournament26_pd[497];
	J[193] = -x[316]*2. + -2.;
	J[311] += sporttournament26_pd[496];
	J[193] += x[311]*2.;
	J[196] += sporttournament26_pd[495];
	J[193] += x[196]*2.;
	J[227] += sporttournament26_pd[494];
	J[192] = x[227]*2. + -2.;
	J[246] -= sporttournament26_pd[493];
	J[191] = -x[246]*2. + -2.;
	J[192] += sporttournament26_pd[492];
	J[191] += x[192]*2.;
	J[246] += sporttournament26_pd[491];
	J[190] = x[246]*2. + -2.;
	J[235] += sporttournament26_pd[490];
	J[190] += x[235]*2.;
	J[192] -= sporttournament26_pd[489];
	J[190] -= x[192]*2.;
	J[191] += sporttournament26_pd[488];
	J[189] = x[191]*2. + -2.;
	J[293] += sporttournament26_pd[487];
	J[188] = x[293]*2. + -2.;
	J[281] -= sporttournament26_pd[486];
	J[188] -= x[281]*2.;
	J[189] += sporttournament26_pd[485];
	J[188] += x[189]*2.;
	J[269] -= sporttournament26_pd[484];
	J[187] = -x[269]*2. + 2.;
	J[241] -= sporttournament26_pd[483];
	J[187] -= x[241]*2.;
	J[189] -= sporttournament26_pd[482];
	J[187] -= x[189]*2.;
	J[188] += sporttournament26_pd[481];
	J[186] = x[188]*2. + -4.;
	J[230] = sporttournament26_pd[480];
	J[185] = x[230]*2. + -4.;
	J[216] += sporttournament26_pd[479];
	J[185] += x[216]*2.;
	J[186] += sporttournament26_pd[478];
	J[185] += x[186]*2.;
	J[186] += sporttournament26_pd[477];
	J[184] = x[186]*2. + -4.;
	J[185] += sporttournament26_pd[476];
	J[183] = x[185]*2. + -4.;
	J[314] += sporttournament26_pd[475];
	J[182] = x[314]*2. + -2.;
	J[296] = sporttournament26_pd[474];
	J[182] += x[296]*2.;
	J[183] += sporttournament26_pd[473];
	J[182] += x[183]*2.;
	J[296] -= sporttournament26_pd[472];
	J[181] = -x[296]*2. + -2.;
	J[183] += sporttournament26_pd[471];
	J[181] += x[183]*2.;
	J[296] += sporttournament26_pd[470];
	J[180] = x[296]*2. + -4.;
	J[263] = sporttournament26_pd[469];
	J[180] += x[263]*2.;
	J[296] -= sporttournament26_pd[468];
	J[179] = -x[296]*2. + 4.;
	J[295] = -sporttournament26_pd[467];
	J[179] -= x[295]*2.;
	J[229] -= sporttournament26_pd[466];
	J[179] -= x[229]*2.;
	J[313] += sporttournament26_pd[465];
	J[178] = x[313]*2. + -2.;
	J[280] = sporttournament26_pd[464];
	J[178] += x[280]*2.;
	J[180] += sporttournament26_pd[463];
	J[178] += x[180]*2.;
	J[263] -= sporttournament26_pd[462];
	J[177] = -x[263]*2. + 4.;
	J[178] -= sporttournament26_pd[461];
	J[177] -= x[178]*2.;
	J[313] -= sporttournament26_pd[460];
	J[176] = -x[313]*2. + 2.;
	J[289] += sporttournament26_pd[459];
	J[175] = x[289]*2. + -2.;
	J[271] += sporttournament26_pd[458];
	J[175] += x[271]*2.;
	J[271] -= sporttournament26_pd[457];
	J[174] = -x[271]*2. + -2.;
	J[270] += sporttournament26_pd[456];
	J[174] += x[270]*2.;
	J[256] = sporttournament26_pd[455];
	J[174] += x[256]*2.;
	J[243] += sporttournament26_pd[454];
	J[174] += x[243]*2.;
	J[175] += sporttournament26_pd[453];
	J[173] = x[175]*2. + -2.;
	J[233] += sporttournament26_pd[452];
	J[172] = x[233]*2. + -2.;
	J[175] -= sporttournament26_pd[451];
	J[172] -= x[175]*2.;
	J[255] += sporttournament26_pd[450];
	J[171] = x[255]*2. + -4.;
	J[173] += sporttournament26_pd[449];
	J[171] += x[173]*2.;
	J[240] -= sporttournament26_pd[448];
	J[170] = -x[240]*2. + 4.;
	J[173] -= sporttournament26_pd[447];
	J[170] -= x[173]*2.;
	J[320] += sporttournament26_pd[446];
	J[169] = x[320]*2. + -4.;
	J[285] += sporttournament26_pd[445];
	J[169] += x[285]*2.;
	J[199] += sporttournament26_pd[444];
	J[169] += x[199]*2.;
	J[171] += sporttournament26_pd[443];
	J[169] += x[171]*2.;
	J[282] = sporttournament26_pd[442];
	J[168] = x[282]*2. + 2.;
	J[199] -= sporttournament26_pd[441];
	J[168] -= x[199]*2.;
	J[321] -= sporttournament26_pd[440];
	J[167] = -x[321]*2. + 2.;
	J[288] -= sporttournament26_pd[439];
	J[167] -= x[288]*2.;
	J[310] += sporttournament26_pd[438];
	J[166] = x[310]*2. + -2.;
	J[304] += sporttournament26_pd[437];
	J[166] += x[304]*2.;
	J[274] -= sporttournament26_pd[436];
	J[166] -= x[274]*2.;
	J[304] -= sporttournament26_pd[435];
	J[165] = -x[304]*2. + 2.;
	J[316] += sporttournament26_pd[434];
	J[164] = x[316]*2. + -2.;
	J[303] = sporttournament26_pd[433];
	J[164] += x[303]*2.;
	J[259] = -sporttournament26_pd[432];
	J[164] -= x[259]*2.;
	J[166] += sporttournament26_pd[431];
	J[164] += x[166]*2.;
	J[322] += sporttournament26_pd[430];
	J[163] = x[322]*2. + -4.;
	J[225] += sporttournament26_pd[429];
	J[162] = x[225]*2. + -4.;
	J[223] += sporttournament26_pd[428];
	J[162] += x[223]*2.;
	J[297] += sporttournament26_pd[427];
	J[161] = x[297]*2. + -2.;
	J[162] += sporttournament26_pd[426];
	J[161] += x[162]*2.;
	J[273] -= sporttournament26_pd[425];
	J[160] = -x[273]*2. + 2.;
	J[235] -= sporttournament26_pd[424];
	J[160] -= x[235]*2.;
	J[161] -= sporttournament26_pd[423];
	J[160] -= x[161]*2.;
	J[297] += sporttournament26_pd[422];
	J[159] = x[297]*2. + -4.;
	J[160] += sporttournament26_pd[421];
	J[159] += x[160]*2.;
	J[230] -= sporttournament26_pd[420];
	J[158] = -x[230]*2. + -2.;
	J[183] += sporttournament26_pd[419];
	J[158] += x[183]*2.;
	J[159] += sporttournament26_pd[418];
	J[158] += x[159]*2.;
	J[159] += sporttournament26_pd[417];
	J[157] = x[159]*2. + -4.;
	J[315] += sporttournament26_pd[416];
	J[156] = x[315]*2. + -4.;
	J[217] += sporttournament26_pd[415];
	J[156] += x[217]*2.;
	J[158] += sporttournament26_pd[414];
	J[156] += x[158]*2.;
	J[292] -= sporttournament26_pd[413];
	J[155] = -x[292]*2. + -2.;
	J[156] += sporttournament26_pd[412];
	J[155] += x[156]*2.;
	J[301] += sporttournament26_pd[411];
	J[154] = x[301]*2. + -4.;
	J[257] += sporttournament26_pd[410];
	J[154] += x[257]*2.;
	J[301] -= sporttournament26_pd[409];
	J[153] = -x[301]*2. + 2.;
	J[267] -= sporttournament26_pd[408];
	J[153] -= x[267]*2.;
	J[266] -= sporttournament26_pd[407];
	J[153] -= x[266]*2.;
	J[319] += sporttournament26_pd[406];
	J[152] = x[319]*2. + -2.;
	J[283] = sporttournament26_pd[405];
	J[152] += x[283]*2.;
	J[154] += sporttournament26_pd[404];
	J[152] += x[154]*2.;
	J[257] -= sporttournament26_pd[403];
	J[151] = -x[257]*2. + 4.;
	J[176] -= sporttournament26_pd[402];
	J[151] -= x[176]*2.;
	J[152] -= sporttournament26_pd[401];
	J[151] -= x[152]*2.;
	J[319] -= sporttournament26_pd[400];
	J[150] = -x[319]*2. + 2.;
	J[177] -= sporttournament26_pd[399];
	J[150] -= x[177]*2.;
	J[291] += sporttournament26_pd[398];
	J[149] = x[291]*2. + -2.;
	J[275] += sporttournament26_pd[397];
	J[149] += x[275]*2.;
	J[275] -= sporttournament26_pd[396];
	J[148] = -x[275]*2. + -2.;
	J[250] += sporttournament26_pd[395];
	J[148] += x[250]*2.;
	J[204] += sporttournament26_pd[394];
	J[148] += x[204]*2.;
	J[305] += sporttournament26_pd[393];
	J[147] = x[305]*2. + -2.;
	J[149] += sporttournament26_pd[392];
	J[147] += x[149]*2.;
	J[285] += sporttournament26_pd[391];
	J[146] = x[285]*2. + -2.;
	J[238] += sporttournament26_pd[390];
	J[146] += x[238]*2.;
	J[149] -= sporttournament26_pd[389];
	J[146] -= x[149]*2.;
	J[256] += sporttournament26_pd[388];
	J[145] = x[256]*2. + -2.;
	J[255] -= sporttournament26_pd[387];
	J[145] -= x[255]*2.;
	J[147] += sporttournament26_pd[386];
	J[145] += x[147]*2.;
	J[147] -= sporttournament26_pd[385];
	J[144] = -x[147]*2. + 2.;
	J[320] += sporttournament26_pd[384];
	J[143] = x[320]*2. + -2.;
	J[317] += sporttournament26_pd[383];
	J[143] += x[317]*2.;
	J[145] += sporttournament26_pd[382];
	J[143] += x[145]*2.;
	J[278] -= sporttournament26_pd[381];
	J[142] = -x[278]*2. + -2.;
	J[167] += sporttournament26_pd[380];
	J[142] += x[167]*2.;
	J[307] = sporttournament26_pd[379];
	J[141] = x[307]*2. + -2.;
	J[142] += sporttournament26_pd[378];
	J[141] += x[142]*2.;
	J[307] -= sporttournament26_pd[377];
	J[140] = -x[307]*2. + -2.;
	J[288] += sporttournament26_pd[376];
	J[140] += x[288]*2.;
	J[142] += sporttournament26_pd[375];
	J[140] += x[142]*2.;
	J[141] += sporttournament26_pd[374];
	J[139] = x[141]*2. + -2.;
	J[163] += sporttournament26_pd[373];
	J[138] = x[163]*2. + -2.;
	J[231] -= sporttournament26_pd[372];
	J[137] = -x[231]*2. + -2.;
	J[138] += sporttournament26_pd[371];
	J[137] += x[138]*2.;
	J[191] += sporttournament26_pd[370];
	J[136] = x[191]*2. + -4.;
	J[163] += sporttournament26_pd[369];
	J[136] += x[163]*2.;
	J[190] += sporttournament26_pd[368];
	J[135] = x[190]*2. + -2.;
	J[163] += sporttournament26_pd[367];
	J[135] += x[163]*2.;
	J[189] += sporttournament26_pd[366];
	J[134] = x[189]*2. + -4.;
	J[136] += sporttournament26_pd[365];
	J[134] += x[136]*2.;
	J[302] += sporttournament26_pd[364];
	J[133] = x[302]*2. + -2.;
	J[134] += sporttournament26_pd[363];
	J[133] += x[134]*2.;
	J[277] -= sporttournament26_pd[362];
	J[132] = -x[277]*2. + 2.;
	J[186] += sporttournament26_pd[361];
	J[132] += x[186]*2.;
	J[133] -= sporttournament26_pd[360];
	J[132] -= x[133]*2.;
	J[302] += sporttournament26_pd[359];
	J[131] = x[302]*2. + -4.;
	J[217] += sporttournament26_pd[358];
	J[131] += x[217]*2.;
	J[187] += sporttournament26_pd[357];
	J[131] += x[187]*2.;
	J[269] += sporttournament26_pd[356];
	J[130] = x[269]*2. + -4.;
	J[131] += sporttournament26_pd[355];
	J[130] += x[131]*2.;
	J[217] += sporttournament26_pd[354];
	J[129] = x[217]*2. + -4.;
	J[184] += sporttournament26_pd[353];
	J[129] += x[184]*2.;
	J[264] += sporttournament26_pd[352];
	J[128] = x[264]*2. + -4.;
	J[215] += sporttournament26_pd[351];
	J[128] += x[215]*2.;
	J[212] += sporttournament26_pd[350];
	J[128] += x[212]*2.;
	J[129] += sporttournament26_pd[349];
	J[128] += x[129]*2.;
	J[129] += sporttournament26_pd[348];
	J[127] = x[129]*2. + -4.;
	J[252] = sporttournament26_pd[347];
	J[126] = x[252]*2. + -4.;
	J[212] += sporttournament26_pd[346];
	J[126] += x[212]*2.;
	J[295] += sporttournament26_pd[345];
	J[125] = x[295]*2. + 2.;
	J[264] -= sporttournament26_pd[344];
	J[125] -= x[264]*2.;
	J[263] -= sporttournament26_pd[343];
	J[125] -= x[263]*2.;
	J[212] -= sporttournament26_pd[342];
	J[125] -= x[212]*2.;
	J[319] -= sporttournament26_pd[341];
	J[124] = -x[319]*2. + 2.;
	J[283] -= sporttournament26_pd[340];
	J[124] -= x[283]*2.;
	J[126] += sporttournament26_pd[339];
	J[124] += x[126]*2.;
	J[286] -= sporttournament26_pd[338];
	J[123] = -x[286]*2. + 4.;
	J[252] -= sporttournament26_pd[337];
	J[123] -= x[252]*2.;
	J[250] -= sporttournament26_pd[336];
	J[123] -= x[250]*2.;
	J[124] -= sporttournament26_pd[335];
	J[123] -= x[124]*2.;
	J[308] += sporttournament26_pd[334];
	J[122] = x[308]*2. + -2.;
	J[205] += sporttournament26_pd[333];
	J[122] += x[205]*2.;
	J[150] += sporttournament26_pd[332];
	J[122] += x[150]*2.;
	J[172] += sporttournament26_pd[331];
	J[121] = x[172]*2. + -2.;
	J[150] -= sporttournament26_pd[330];
	J[121] -= x[150]*2.;
	J[308] += sporttournament26_pd[329];
	J[120] = x[308]*2. + -2.;
	J[262] += sporttournament26_pd[328];
	J[120] += x[262]*2.;
	J[200] -= sporttournament26_pd[327];
	J[120] -= x[200]*2.;
	J[308] -= sporttournament26_pd[326];
	J[119] = -x[308]*2. + 2.;
	J[256] -= sporttournament26_pd[325];
	J[119] -= x[256]*2.;
	J[234] -= sporttournament26_pd[324];
	J[119] -= x[234]*2.;
	J[317] += sporttournament26_pd[323];
	J[118] = x[317]*2. + -2.;
	J[285] -= sporttournament26_pd[322];
	J[118] -= x[285]*2.;
	J[120] += sporttournament26_pd[321];
	J[118] += x[120]*2.;
	J[249] -= sporttournament26_pd[320];
	J[117] = -x[249]*2. + -2.;
	J[118] += sporttournament26_pd[319];
	J[117] += x[118]*2.;
	J[282] -= sporttournament26_pd[318];
	J[116] = -x[282]*2. + -2.;
	J[197] += sporttournament26_pd[317];
	J[116] += x[197]*2.;
	J[193] += sporttournament26_pd[316];
	J[116] += x[193]*2.;
	J[303] -= sporttournament26_pd[315];
	J[115] = -x[303]*2. + -2.;
	J[165] += sporttournament26_pd[314];
	J[115] += x[165]*2.;
	J[116] += sporttournament26_pd[313];
	J[115] += x[116]*2.;
	J[137] += sporttournament26_pd[312];
	J[114] = x[137]*2. + -2.;
	J[135] -= sporttournament26_pd[311];
	J[113] = -x[135]*2. + -2.;
	J[114] += sporttournament26_pd[310];
	J[113] += x[114]*2.;
	J[162] += sporttournament26_pd[309];
	J[112] = x[162]*2. + -4.;
	J[137] += sporttournament26_pd[308];
	J[112] += x[137]*2.;
	J[161] += sporttournament26_pd[307];
	J[111] = x[161]*2. + -4.;
	J[112] += sporttournament26_pd[306];
	J[111] += x[112]*2.;
	J[306] += sporttournament26_pd[305];
	J[110] = x[306]*2. + -2.;
	J[245] -= sporttournament26_pd[304];
	J[110] -= x[245]*2.;
	J[111] += sporttournament26_pd[303];
	J[110] += x[111]*2.;
	J[306] += sporttournament26_pd[302];
	J[109] = x[306]*2. + -4.;
	J[221] += sporttournament26_pd[301];
	J[109] += x[221]*2.;
	J[184] += sporttournament26_pd[300];
	J[109] += x[184]*2.;
	J[273] += sporttournament26_pd[299];
	J[108] = x[273]*2. + -4.;
	J[109] += sporttournament26_pd[298];
	J[108] += x[109]*2.;
	J[315] -= sporttournament26_pd[297];
	J[107] = -x[315]*2. + -2.;
	J[184] += sporttournament26_pd[296];
	J[107] += x[184]*2.;
	J[157] += sporttournament26_pd[295];
	J[107] += x[157]*2.;
	J[107] += sporttournament26_pd[294];
	J[106] = x[107]*2. + -4.;
	J[314] += sporttournament26_pd[293];
	J[105] = x[314]*2. + -2.;
	J[252] -= sporttournament26_pd[292];
	J[105] -= x[252]*2.;
	J[313] -= sporttournament26_pd[291];
	J[104] = -x[313]*2. + 2.;
	J[280] -= sporttournament26_pd[290];
	J[104] -= x[280]*2.;
	J[105] += sporttournament26_pd[289];
	J[104] += x[105]*2.;
	J[289] -= sporttournament26_pd[288];
	J[103] = -x[289]*2. + 2.;
	J[252] += sporttournament26_pd[287];
	J[103] += x[252]*2.;
	J[243] -= sporttournament26_pd[286];
	J[103] -= x[243]*2.;
	J[104] -= sporttournament26_pd[285];
	J[103] -= x[104]*2.;
	J[291] -= sporttournament26_pd[284];
	J[102] = -x[291]*2. + -2.;
	J[176] += sporttournament26_pd[283];
	J[102] += x[176]*2.;
	J[173] += sporttournament26_pd[282];
	J[102] += x[173]*2.;
	J[270] += sporttournament26_pd[281];
	J[101] = x[270]*2. + -2.;
	J[176] -= sporttournament26_pd[280];
	J[101] -= x[176]*2.;
	J[146] += sporttournament26_pd[279];
	J[101] += x[146]*2.;
	J[265] += sporttournament26_pd[278];
	J[100] = x[265]*2. + -4.;
	J[102] += sporttournament26_pd[277];
	J[100] += x[102]*2.;
	J[172] += sporttournament26_pd[276];
	J[99] = x[172]*2. + -2.;
	J[143] -= sporttournament26_pd[275];
	J[99] -= x[143]*2.;
	J[100] += sporttournament26_pd[274];
	J[99] += x[100]*2.;
	J[265] += sporttournament26_pd[273];
	J[98] = x[265]*2. + -2.;
	J[202] -= sporttournament26_pd[272];
	J[98] -= x[202]*2.;
	J[117] += sporttournament26_pd[271];
	J[98] += x[117]*2.;
	J[98] += sporttournament26_pd[270];
	J[97] = x[98]*2. + -2.;
	J[197] -= sporttournament26_pd[269];
	J[96] = -x[197]*2. + -2.;
	J[117] += sporttournament26_pd[268];
	J[96] += x[117]*2.;
	J[195] -= sporttournament26_pd[267];
	J[95] = -x[195]*2. + -2.;
	J[96] += sporttournament26_pd[266];
	J[95] += x[96]*2.;
	J[299] -= sporttournament26_pd[265];
	J[94] = -x[299]*2. + -2.;
	J[284] += sporttournament26_pd[264];
	J[94] += x[284]*2.;
	J[195] += sporttournament26_pd[263];
	J[94] += x[195]*2.;
	J[113] += sporttournament26_pd[262];
	J[93] = x[113]*2. + -2.;
	J[226] += sporttournament26_pd[261];
	J[92] = x[226]*2. + -4.;
	J[93] += sporttournament26_pd[260];
	J[92] += x[93]*2.;
	J[134] += sporttournament26_pd[259];
	J[91] = x[134]*2. + -4.;
	J[113] += sporttournament26_pd[258];
	J[91] += x[113]*2.;
	J[133] += sporttournament26_pd[257];
	J[90] = x[133]*2. + -4.;
	J[91] += sporttournament26_pd[256];
	J[90] += x[91]*2.;
	J[90] += sporttournament26_pd[255];
	J[89] = x[90]*2. + -2.;
	J[89] += sporttournament26_pd[254];
	J[88] = x[89]*2. + -4.;
	J[241] += sporttournament26_pd[253];
	J[87] = x[241]*2. + 2.;
	J[230] -= sporttournament26_pd[252];
	J[87] -= x[230]*2.;
	J[219] -= sporttournament26_pd[251];
	J[87] -= x[219]*2.;
	J[89] -= sporttournament26_pd[250];
	J[87] -= x[89]*2.;
	J[221] -= sporttournament26_pd[249];
	J[86] = -x[221]*2. + -2.;
	J[157] += sporttournament26_pd[248];
	J[86] += x[157]*2.;
	J[88] += sporttournament26_pd[247];
	J[86] += x[88]*2.;
	J[218] += sporttournament26_pd[246];
	J[85] = x[218]*2. + -4.;
	J[88] += sporttournament26_pd[245];
	J[85] += x[88]*2.;
	J[277] += sporttournament26_pd[244];
	J[84] = x[277]*2. + -4.;
	J[86] += sporttournament26_pd[243];
	J[84] += x[86]*2.;
	J[182] -= sporttournament26_pd[242];
	J[83] = -x[182]*2. + -2.;
	J[157] += sporttournament26_pd[241];
	J[83] += x[157]*2.;
	J[130] += sporttournament26_pd[240];
	J[83] += x[130]*2.;
	J[215] += sporttournament26_pd[239];
	J[82] = x[215]*2. + -4.;
	J[83] += sporttournament26_pd[238];
	J[82] += x[83]*2.;
	J[309] -= sporttournament26_pd[237];
	J[81] = -x[309]*2. + 2.;
	J[268] += sporttournament26_pd[236];
	J[81] += x[268]*2.;
	J[258] -= sporttournament26_pd[235];
	J[81] -= x[258]*2.;
	J[210] -= sporttournament26_pd[234];
	J[81] -= x[210]*2.;
	J[170] -= sporttournament26_pd[233];
	J[80] = -x[170]*2. + -2.;
	J[119] += sporttournament26_pd[232];
	J[80] += x[119]*2.;
	J[97] += sporttournament26_pd[231];
	J[80] += x[97]*2.;
	J[261] -= sporttournament26_pd[230];
	J[79] = -x[261]*2. + -2.;
	J[80] += sporttournament26_pd[229];
	J[79] += x[80]*2.;
	J[167] -= sporttournament26_pd[228];
	J[78] = -x[167]*2. + -2.;
	J[97] += sporttournament26_pd[227];
	J[78] += x[97]*2.;
	J[282] += sporttournament26_pd[226];
	J[77] = x[282]*2. + -2.;
	J[97] -= sporttournament26_pd[225];
	J[77] -= x[97]*2.;
	J[95] += sporttournament26_pd[224];
	J[77] += x[95]*2.;
	J[259] += sporttournament26_pd[223];
	J[76] = x[259]*2. + -2.;
	J[249] += sporttournament26_pd[222];
	J[76] += x[249]*2.;
	J[165] -= sporttournament26_pd[221];
	J[76] -= x[165]*2.;
	J[78] += sporttournament26_pd[220];
	J[76] += x[78]*2.;
	J[140] += sporttournament26_pd[219];
	J[75] = x[140]*2. + -2.;
	J[92] += sporttournament26_pd[218];
	J[74] = x[92]*2. + -2.;
	J[192] += sporttournament26_pd[217];
	J[73] = x[192]*2. + -4.;
	J[74] += sporttournament26_pd[216];
	J[73] += x[74]*2.;
	J[111] += sporttournament26_pd[215];
	J[72] = x[111]*2. + -4.;
	J[92] += sporttournament26_pd[214];
	J[72] += x[92]*2.;
	J[298] += sporttournament26_pd[213];
	J[71] = x[298]*2. + -4.;
	J[110] += sporttournament26_pd[212];
	J[71] += x[110]*2.;
	J[72] += sporttournament26_pd[211];
	J[71] += x[72]*2.;
	J[298] -= sporttournament26_pd[210];
	J[70] = -x[298]*2. + -2.;
	J[246] += sporttournament26_pd[209];
	J[70] += x[246]*2.;
	J[230] += sporttournament26_pd[208];
	J[70] += x[230]*2.;
	J[85] += sporttournament26_pd[207];
	J[70] += x[85]*2.;
	J[281] += sporttournament26_pd[206];
	J[69] = x[281]*2. + -4.;
	J[269] += sporttournament26_pd[205];
	J[69] += x[269]*2.;
	J[214] -= sporttournament26_pd[204];
	J[68] = -x[214]*2. + -2.;
	J[130] += sporttournament26_pd[203];
	J[68] += x[130]*2.;
	J[108] += sporttournament26_pd[202];
	J[68] += x[108]*2.;
	J[267] += sporttournament26_pd[201];
	J[67] = x[267]*2. + -2.;
	J[68] += sporttournament26_pd[200];
	J[67] += x[68]*2.;
	J[295] += sporttournament26_pd[199];
	J[66] = x[295]*2. + -4.;
	J[289] += sporttournament26_pd[198];
	J[66] += x[289]*2.;
	J[229] += sporttournament26_pd[197];
	J[66] += x[229]*2.;
	J[295] -= sporttournament26_pd[196];
	J[65] = -x[295]*2. + -2.;
	J[263] += sporttournament26_pd[195];
	J[65] += x[263]*2.;
	J[250] += sporttournament26_pd[194];
	J[65] += x[250]*2.;
	J[251] += sporttournament26_pd[193];
	J[64] = x[251]*2. + -2.;
	J[177] -= sporttournament26_pd[192];
	J[64] -= x[177]*2.;
	J[101] += sporttournament26_pd[191];
	J[64] += x[101]*2.;
	J[66] += sporttournament26_pd[190];
	J[64] += x[66]*2.;
	J[248] += sporttournament26_pd[189];
	J[63] = x[248]*2. + -4.;
	J[144] += sporttournament26_pd[188];
	J[63] += x[144]*2.;
	J[99] += sporttournament26_pd[187];
	J[63] += x[99]*2.;
	J[79] += sporttournament26_pd[186];
	J[63] += x[79]*2.;
	J[233] += sporttournament26_pd[185];
	J[62] = x[233]*2. + -2.;
	J[144] -= sporttournament26_pd[184];
	J[62] -= x[144]*2.;
	J[304] -= sporttournament26_pd[183];
	J[61] = -x[304]*2. + -2.;
	J[79] += sporttournament26_pd[182];
	J[61] += x[79]*2.;
	J[288] -= sporttournament26_pd[181];
	J[60] = -x[288]*2. + -2.;
	J[254] += sporttournament26_pd[180];
	J[60] += x[254]*2.;
	J[253] += sporttournament26_pd[179];
	J[60] += x[253]*2.;
	J[61] += sporttournament26_pd[178];
	J[60] += x[61]*2.;
	J[242] = sporttournament26_pd[177];
	J[59] = x[242]*2. + -2.;
	J[165] -= sporttournament26_pd[176];
	J[59] -= x[165]*2.;
	J[139] += sporttournament26_pd[175];
	J[59] += x[139]*2.;
	J[115] += sporttournament26_pd[174];
	J[58] = x[115]*2. + -2.;
	J[73] += sporttournament26_pd[173];
	J[57] = x[73]*2. + -2.;
	J[225] += sporttournament26_pd[172];
	J[56] = x[225]*2. + -4.;
	J[57] += sporttournament26_pd[171];
	J[56] += x[57]*2.;
	J[90] += sporttournament26_pd[170];
	J[55] = x[90]*2. + -4.;
	J[73] += sporttournament26_pd[169];
	J[55] += x[73]*2.;
	J[89] += sporttournament26_pd[168];
	J[54] = x[89]*2. + -4.;
	J[55] += sporttournament26_pd[167];
	J[54] += x[55]*2.;
	J[302] -= sporttournament26_pd[166];
	J[53] = -x[302]*2. + -2.;
	J[290] += sporttournament26_pd[165];
	J[53] += x[290]*2.;
	J[222] += sporttournament26_pd[164];
	J[53] += x[222]*2.;
	J[54] += sporttournament26_pd[163];
	J[53] += x[54]*2.;
	J[273] += sporttournament26_pd[162];
	J[52] = x[273]*2. + -4.;
	J[219] += sporttournament26_pd[161];
	J[52] += x[219]*2.;
	J[276] += sporttournament26_pd[160];
	J[51] = x[276]*2. + -4.;
	J[213] += sporttournament26_pd[159];
	J[51] += x[213]*2.;
	J[108] += sporttournament26_pd[158];
	J[51] += x[108]*2.;
	J[84] += sporttournament26_pd[157];
	J[51] += x[84]*2.;
	J[280] += sporttournament26_pd[156];
	J[50] = x[280]*2. + -2.;
	J[228] -= sporttournament26_pd[155];
	J[50] -= x[228]*2.;
	J[213] += sporttournament26_pd[154];
	J[50] += x[213]*2.;
	J[127] += sporttournament26_pd[153];
	J[50] += x[127]*2.;
	J[228] += sporttournament26_pd[152];
	J[49] = x[228]*2. + -4.;
	J[153] += sporttournament26_pd[151];
	J[49] += x[153]*2.;
	J[291] += sporttournament26_pd[150];
	J[48] = x[291]*2. + -4.;
	J[266] += sporttournament26_pd[149];
	J[48] += x[266]*2.;
	J[49] += sporttournament26_pd[148];
	J[48] += x[49]*2.;
	J[271] -= sporttournament26_pd[147];
	J[47] = -x[271]*2. + -2.;
	J[229] += sporttournament26_pd[146];
	J[47] += x[229]*2.;
	J[49] += sporttournament26_pd[145];
	J[47] += x[49]*2.;
	J[151] -= sporttournament26_pd[144];
	J[46] = -x[151]*2. + -2.;
	J[121] += sporttournament26_pd[143];
	J[46] += x[121]*2.;
	J[48] += sporttournament26_pd[142];
	J[46] += x[48]*2.;
	J[284] -= sporttournament26_pd[141];
	J[45] = -x[284]*2. + -2.;
	J[261] += sporttournament26_pd[140];
	J[45] += x[261]*2.;
	J[260] += sporttournament26_pd[139];
	J[45] += x[260]*2.;
	J[247] += sporttournament26_pd[138];
	J[45] += x[247]*2.;
	J[236] += sporttournament26_pd[137];
	J[44] = x[236]*2. + -2.;
	J[94] += sporttournament26_pd[136];
	J[44] += x[94]*2.;
	J[56] += sporttournament26_pd[135];
	J[43] = x[56]*2. + -2.;
	J[136] += sporttournament26_pd[134];
	J[42] = x[136]*2. + -4.;
	J[43] += sporttournament26_pd[133];
	J[42] += x[43]*2.;
	J[71] += sporttournament26_pd[132];
	J[41] = x[71]*2. + -2.;
	J[56] += sporttournament26_pd[131];
	J[41] += x[56]*2.;
	J[298] += sporttournament26_pd[130];
	J[40] = x[298]*2. + -4.;
	J[293] += sporttournament26_pd[129];
	J[40] += x[293]*2.;
	J[287] += sporttournament26_pd[128];
	J[40] += x[287]*2.;
	J[41] += sporttournament26_pd[127];
	J[40] += x[41]*2.;
	J[277] += sporttournament26_pd[126];
	J[39] = x[277]*2. + -4.;
	J[85] += sporttournament26_pd[125];
	J[39] += x[85]*2.;
	J[272] += sporttournament26_pd[124];
	J[38] = x[272]*2. + -4.;
	J[181] += sporttournament26_pd[123];
	J[38] += x[181]*2.;
	J[84] += sporttournament26_pd[122];
	J[38] += x[84]*2.;
	J[69] += sporttournament26_pd[121];
	J[38] += x[69]*2.;
	J[283] += sporttournament26_pd[120];
	J[37] = x[283]*2. + -4.;
	J[211] += sporttournament26_pd[119];
	J[37] += x[211]*2.;
	J[181] += sporttournament26_pd[118];
	J[37] += x[181]*2.;
	J[106] += sporttournament26_pd[117];
	J[37] += x[106]*2.;
	J[122] -= sporttournament26_pd[116];
	J[36] = -x[122]*2. + -2.;
	J[65] += sporttournament26_pd[115];
	J[36] += x[65]*2.;
	J[47] += sporttournament26_pd[114];
	J[36] += x[47]*2.;
	J[256] -= sporttournament26_pd[113];
	J[35] = -x[256]*2. + -2.;
	J[100] += sporttournament26_pd[112];
	J[35] += x[100]*2.;
	J[46] += sporttournament26_pd[111];
	J[35] += x[46]*2.;
	J[36] += sporttournament26_pd[110];
	J[35] += x[36]*2.;
	J[141] -= sporttournament26_pd[109];
	J[34] = -x[141]*2. + -2.;
	J[95] += sporttournament26_pd[108];
	J[34] += x[95]*2.;
	J[294] -= sporttournament26_pd[107];
	J[33] = -x[294]*2. + 2.;
	J[42] += sporttournament26_pd[106];
	J[32] = x[42]*2. + -2.;
	J[287] += sporttournament26_pd[105];
	J[31] = x[287]*2. + -4.;
	J[112] += sporttournament26_pd[104];
	J[31] += x[112]*2.;
	J[32] += sporttournament26_pd[103];
	J[31] += x[32]*2.;
	J[290] += sporttournament26_pd[102];
	J[30] = x[290]*2. + -2.;
	J[54] += sporttournament26_pd[101];
	J[30] += x[54]*2.;
	J[42] += sporttournament26_pd[100];
	J[30] += x[42]*2.;
	J[281] += sporttournament26_pd[99];
	J[29] = x[281]*2. + -2.;
	J[219] -= sporttournament26_pd[98];
	J[29] -= x[219]*2.;
	J[215] += sporttournament26_pd[97];
	J[29] += x[215]*2.;
	J[272] -= sporttournament26_pd[96];
	J[28] = -x[272]*2. + -2.;
	J[155] += sporttournament26_pd[95];
	J[28] += x[155]*2.;
	J[69] += sporttournament26_pd[94];
	J[28] += x[69]*2.;
	J[52] += sporttournament26_pd[93];
	J[28] += x[52]*2.;
	J[283] -= sporttournament26_pd[92];
	J[27] = -x[283]*2. + -2.;
	J[180] += sporttournament26_pd[91];
	J[27] += x[180]*2.;
	J[155] += sporttournament26_pd[90];
	J[27] += x[155]*2.;
	J[82] += sporttournament26_pd[89];
	J[27] += x[82]*2.;
	J[31] += sporttournament26_pd[88];
	J[26] = x[31]*2. + -2.;
	J[287] -= sporttournament26_pd[87];
	J[25] = -x[287]*2. + -2.;
	J[91] += sporttournament26_pd[86];
	J[25] += x[91]*2.;
	J[26] += sporttournament26_pd[85];
	J[25] += x[26]*2.;
	J[276] -= sporttournament26_pd[84];
	J[24] = -x[276]*2. + -2.;
	J[127] += sporttournament26_pd[83];
	J[24] += x[127]*2.;
	J[52] += sporttournament26_pd[82];
	J[24] += x[52]*2.;
	J[39] += sporttournament26_pd[81];
	J[24] += x[39]*2.;
	J[280] -= sporttournament26_pd[80];
	J[23] = -x[280]*2. + -2.;
	J[154] += sporttournament26_pd[79];
	J[23] += x[154]*2.;
	J[127] += sporttournament26_pd[78];
	J[23] += x[127]*2.;
	J[67] += sporttournament26_pd[77];
	J[23] += x[67]*2.;
	J[25] += sporttournament26_pd[76];
	J[22] = x[25]*2. + -2.;
	J[72] += sporttournament26_pd[75];
	J[21] = x[72]*2. + -2.;
	J[30] -= sporttournament26_pd[74];
	J[21] -= x[30]*2.;
	J[22] += sporttournament26_pd[73];
	J[21] += x[22]*2.;
	J[106] += sporttournament26_pd[72];
	J[20] = x[106]*2. + -2.;
	J[67] -= sporttournament26_pd[71];
	J[20] -= x[67]*2.;
	J[39] += sporttournament26_pd[70];
	J[20] += x[39]*2.;
	J[29] += sporttournament26_pd[69];
	J[20] += x[29]*2.;
	J[276] += sporttournament26_pd[68];
	J[19] = x[276]*2. + -2.;
	J[210] -= sporttournament26_pd[67];
	J[19] -= x[210]*2.;
	J[126] += sporttournament26_pd[66];
	J[19] += x[126]*2.;
	J[106] += sporttournament26_pd[65];
	J[19] += x[106]*2.;
	J[260] += sporttournament26_pd[64];
	J[18] = x[260]*2. + 2.;
	J[259] -= sporttournament26_pd[63];
	J[18] -= x[259]*2.;
	J[198] -= sporttournament26_pd[62];
	J[18] -= x[198]*2.;
	J[196] -= sporttournament26_pd[61];
	J[18] -= x[196]*2.;
	J[21] += sporttournament26_pd[60];
	J[17] = x[21]*2. + -2.;
	J[55] += sporttournament26_pd[59];
	J[16] = x[55]*2. + -2.;
	J[41] -= sporttournament26_pd[58];
	J[16] -= x[41]*2.;
	J[17] += sporttournament26_pd[57];
	J[16] += x[17]*2.;
	J[272] += sporttournament26_pd[56];
	J[15] = x[272]*2. + -2.;
	J[179] -= sporttournament26_pd[55];
	J[15] -= x[179]*2.;
	J[105] += sporttournament26_pd[54];
	J[15] += x[105]*2.;
	J[82] += sporttournament26_pd[53];
	J[15] += x[82]*2.;
	J[168] -= sporttournament26_pd[52];
	J[14] = -x[168]*2. + -2.;
	J[34] += sporttournament26_pd[51];
	J[14] += x[34]*2.;
	J[282] -= sporttournament26_pd[50];
	J[13] = -x[282]*2. + -2.;
	J[59] += sporttournament26_pd[49];
	J[13] += x[59]*2.;
	J[14] += sporttournament26_pd[48];
	J[13] += x[14]*2.;
	J[227] += sporttournament26_pd[47];
	J[12] = x[227]*2. + -2.;
	J[16] += sporttournament26_pd[46];
	J[12] += x[16]*2.;
	J[244] += sporttournament26_pd[45];
	J[11] = x[244]*2. + -2.;
	J[203] += sporttournament26_pd[44];
	J[11] += x[203]*2.;
	J[170] -= sporttournament26_pd[43];
	J[11] -= x[170]*2.;
	J[121] += sporttournament26_pd[42];
	J[11] += x[121]*2.;
	J[240] += sporttournament26_pd[41];
	J[10] = x[240]*2. + -4.;
	J[96] += sporttournament26_pd[40];
	J[10] += x[96]*2.;
	J[62] += sporttournament26_pd[39];
	J[10] += x[62]*2.;
	J[251] += sporttournament26_pd[38];
	J[9] = x[251]*2. + -2.;
	J[171] += sporttournament26_pd[37];
	J[9] += x[171]*2.;
	J[148] += sporttournament26_pd[36];
	J[9] += x[148]*2.;
	J[144] -= sporttournament26_pd[35];
	J[9] -= x[144]*2.;
	J[234] += sporttournament26_pd[34];
	J[8] = x[234]*2. + -2.;
	J[198] -= sporttournament26_pd[33];
	J[8] -= x[198]*2.;
	J[78] += sporttournament26_pd[32];
	J[8] += x[78]*2.;
	J[62] += sporttournament26_pd[31];
	J[8] += x[62]*2.;
	J[274] += sporttournament26_pd[30];
	J[7] = x[274]*2. + -4.;
	J[248] += sporttournament26_pd[29];
	J[7] += x[248]*2.;
	J[14] += sporttournament26_pd[28];
	J[7] += x[14]*2.;
	J[10] += sporttournament26_pd[27];
	J[7] += x[10]*2.;
	J[239] += sporttournament26_pd[26];
	J[6] = x[239]*2. + -2.;
	J[234] += sporttournament26_pd[25];
	J[6] += x[234]*2.;
	J[168] -= sporttournament26_pd[24];
	J[6] -= x[168]*2.;
	J[61] += sporttournament26_pd[23];
	J[6] += x[61]*2.;
	J[261] += sporttournament26_pd[22];
	J[5] = x[261]*2. + -2.;
	J[260] -= sporttournament26_pd[21];
	J[5] -= x[260]*2.;
	J[239] += sporttournament26_pd[20];
	J[5] += x[239]*2.;
	J[200] += sporttournament26_pd[19];
	J[5] += x[200]*2.;
	J[247] += sporttournament26_pd[18];
	J[4] = x[247]*2. + -2.;
	J[75] += sporttournament26_pd[17];
	J[4] += x[75]*2.;
	J[34] += sporttournament26_pd[16];
	J[4] += x[34]*2.;
	J[33] -= sporttournament26_pd[15];
	J[4] -= x[33]*2.;
	J[255] += sporttournament26_pd[14];
	J[3] = x[255]*2. + -2.;
	J[254] -= sporttournament26_pd[13];
	J[3] -= x[254]*2.;
	J[200] += sporttournament26_pd[12];
	J[3] += x[200]*2.;
	J[77] += sporttournament26_pd[11];
	J[3] += x[77]*2.;
	J[259] += sporttournament26_pd[10];
	J[2] = x[259]*2. + -2.;
	J[242] -= sporttournament26_pd[9];
	J[2] -= x[242]*2.;
	J[58] += sporttournament26_pd[8];
	J[2] += x[58]*2.;
	J[13] += sporttournament26_pd[7];
	J[2] += x[13]*2.;
	J[232] += sporttournament26_pd[6];
	J[1] = x[232]*2. + -2.;
	J[132] -= sporttournament26_pd[5];
	J[1] -= x[132]*2.;
	J[88] += sporttournament26_pd[4];
	J[1] += x[88]*2.;
	J[235] -= sporttournament26_pd[3];
	J[0] = -x[235]*2. + -2.;
	J[231] += sporttournament26_pd[2];
	J[0] += x[231]*2.;
	J[135] += sporttournament26_pd[1];
	J[0] += x[135]*2.;
	J[1] += sporttournament26_pd[0];
	J[0] += x[1]*2.;
	J[325] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
