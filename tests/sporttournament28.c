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
 fint sporttournament28_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament28_funcom_[765] = {
	379 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	379 /* nzc */,
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
	328,
	329,
	330,
	331,
	332,
	333,
	334,
	335,
	336,
	337,
	338,
	339,
	340,
	341,
	342,
	343,
	344,
	345,
	346,
	347,
	348,
	349,
	350,
	351,
	352,
	353,
	354,
	355,
	356,
	357,
	358,
	359,
	360,
	361,
	362,
	363,
	364,
	365,
	366,
	367,
	368,
	369,
	370,
	371,
	372,
	373,
	374,
	375,
	376,
	377,
	378,
	379,
	380,

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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
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

 real sporttournament28_boundc_[1+758+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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

 real sporttournament28_x0comn_[379] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sporttournament28_pd[728];
static real sporttournament28_old_x[379];
static int sporttournament28_xkind = -1;

 static int
sporttournament28_xcheck(real *x)
{
	real *x1 = sporttournament28_old_x, *xe = x + 379;
	errno = 0;
	if (sporttournament28_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament28_xkind = 0;
	return 1;
	}
 real
sporttournament28_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament28_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[378];
	;}

	if (wantfg & 2) {
	g[378] = 1.;
	}

	return rv;
}

 void
sporttournament28_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament28_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament28_pd[0] = -2. * x[0];
	v[0] = sporttournament28_pd[0] * x[205];
	sporttournament28_pd[1] = 2. * x[0];
	v[1] = sporttournament28_pd[1] * x[208];
	v[0] += v[1];
	sporttournament28_pd[2] = 2. * x[0];
	v[1] = sporttournament28_pd[2] * x[249];
	v[0] += v[1];
	sporttournament28_pd[3] = 2. * x[0];
	v[1] = sporttournament28_pd[3] * x[261];
	v[0] += v[1];
	sporttournament28_pd[4] = 2. * x[1];
	v[1] = sporttournament28_pd[4] * x[129];
	v[0] += v[1];
	sporttournament28_pd[5] = 2. * x[1];
	v[1] = sporttournament28_pd[5] * x[218];
	v[0] += v[1];
	sporttournament28_pd[6] = 2. * x[1];
	v[1] = sporttournament28_pd[6] * x[257];
	v[0] += v[1];
	sporttournament28_pd[7] = 2. * x[1];
	v[1] = sporttournament28_pd[7] * x[272];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[8] = 2. * x[2];
	v[2] = sporttournament28_pd[8] * x[106];
	v[0] += v[2];
	sporttournament28_pd[9] = 2. * x[2];
	v[2] = sporttournament28_pd[9] * x[252];
	v[0] += v[2];
	sporttournament28_pd[10] = 2. * x[2];
	v[2] = sporttournament28_pd[10] * x[257];
	v[0] += v[2];
	sporttournament28_pd[11] = 2. * x[2];
	v[2] = sporttournament28_pd[11] * x[279];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[12] = 2. * x[3];
	v[1] = sporttournament28_pd[12] * x[5];
	v[0] += v[1];
	sporttournament28_pd[13] = 2. * x[3];
	v[1] = sporttournament28_pd[13] * x[7];
	v[0] += v[1];
	sporttournament28_pd[14] = 2. * x[3];
	v[1] = sporttournament28_pd[14] * x[263];
	v[0] += v[1];
	sporttournament28_pd[15] = 2. * x[3];
	v[1] = sporttournament28_pd[15] * x[294];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[16] = 2. * x[4];
	v[2] = sporttournament28_pd[16] * x[87];
	v[0] += v[2];
	sporttournament28_pd[17] = 2. * x[4];
	v[2] = sporttournament28_pd[17] * x[131];
	v[0] += v[2];
	sporttournament28_pd[18] = 2. * x[4];
	v[2] = sporttournament28_pd[18] * x[252];
	v[0] += v[2];
	sporttournament28_pd[19] = 2. * x[4];
	v[2] = sporttournament28_pd[19] * x[286];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[20] = 2. * x[5];
	v[1] = sporttournament28_pd[20] * x[69];
	v[0] += v[1];
	sporttournament28_pd[21] = 2. * x[5];
	v[1] = sporttournament28_pd[21] * x[107];
	v[0] += v[1];
	sporttournament28_pd[22] = 2. * x[5];
	v[1] = sporttournament28_pd[22] * x[131];
	v[0] += v[1];
	sporttournament28_pd[23] = 2. * x[6];
	v[1] = sporttournament28_pd[23] * x[58];
	v[0] += v[1];
	sporttournament28_pd[24] = 2. * x[6];
	v[1] = sporttournament28_pd[24] * x[196];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[25] = 2. * x[6];
	v[2] = sporttournament28_pd[25] * x[297];
	v[0] += v[2];
	sporttournament28_pd[26] = 2. * x[6];
	v[2] = sporttournament28_pd[26] * x[298];
	v[0] += v[2];
	sporttournament28_pd[27] = 2. * x[7];
	v[2] = sporttournament28_pd[27] * x[254];
	v[0] += v[2];
	sporttournament28_pd[28] = 2. * x[7];
	v[2] = sporttournament28_pd[28] * x[279];
	v[0] += v[2];
	sporttournament28_pd[29] = 2. * x[7];
	v[2] = sporttournament28_pd[29] * x[309];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[30] = 2. * x[8];
	v[1] = sporttournament28_pd[30] * x[53];
	v[0] += v[1];
	sporttournament28_pd[31] = 2. * x[8];
	v[1] = sporttournament28_pd[31] * x[107];
	v[0] += v[1];
	sporttournament28_pd[32] = 2. * x[8];
	v[1] = sporttournament28_pd[32] * x[266];
	v[0] += v[1];
	sporttournament28_pd[33] = 2. * x[8];
	v[1] = sporttournament28_pd[33] * x[286];
	v[0] += v[1];
	sporttournament28_pd[34] = 2. * x[9];
	v[1] = sporttournament28_pd[34] * x[58];
	v[0] += v[1];
	sporttournament28_pd[35] = 2. * x[9];
	v[1] = sporttournament28_pd[35] * x[76];
	v[0] += v[1];
	sporttournament28_pd[36] = 2. * x[9];
	v[1] = sporttournament28_pd[36] * x[228];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[37] = 2. * x[9];
	v[2] = sporttournament28_pd[37] * x[306];
	v[0] += v[2];
	sporttournament28_pd[38] = 2. * x[10];
	v[2] = sporttournament28_pd[38] * x[76];
	v[0] += v[2];
	sporttournament28_pd[39] = 2. * x[10];
	v[2] = sporttournament28_pd[39] * x[92];
	v[0] += v[2];
	sporttournament28_pd[40] = 2. * x[10];
	v[2] = sporttournament28_pd[40] * x[114];
	v[0] += v[2];
	sporttournament28_pd[41] = 2. * x[10];
	v[2] = sporttournament28_pd[41] * x[313];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[42] = 2. * x[11];
	v[1] = sporttournament28_pd[42] * x[14];
	v[0] += v[1];
	sporttournament28_pd[43] = 2. * x[11];
	v[1] = sporttournament28_pd[43] * x[243];
	v[0] += v[1];
	sporttournament28_pd[44] = 2. * x[12];
	v[1] = sporttournament28_pd[44] * x[55];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[45] = 2. * x[12];
	v[2] = sporttournament28_pd[45] * x[89];
	v[0] += v[2];
	sporttournament28_pd[46] = 2. * x[12];
	v[2] = sporttournament28_pd[46] * x[220];
	v[0] += v[2];
	sporttournament28_pd[47] = 2. * x[12];
	v[2] = sporttournament28_pd[47] * x[223];
	v[0] += v[2];
	sporttournament28_pd[48] = 2. * x[13];
	v[2] = sporttournament28_pd[48] * x[92];
	v[0] += v[2];
	sporttournament28_pd[49] = 2. * x[13];
	v[2] = sporttournament28_pd[49] * x[115];
	v[0] += v[2];
	sporttournament28_pd[50] = 2. * x[13];
	v[2] = sporttournament28_pd[50] * x[139];
	v[0] += v[2];
	sporttournament28_pd[51] = 2. * x[13];
	v[2] = sporttournament28_pd[51] * x[319];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[52] = 2. * x[14];
	v[1] = sporttournament28_pd[52] * x[15];
	v[0] += v[1];
	sporttournament28_pd[53] = 2. * x[14];
	v[1] = sporttournament28_pd[53] * x[62];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[54] = 2. * x[14];
	v[2] = sporttournament28_pd[54] * x[80];
	v[0] += v[2];
	sporttournament28_pd[55] = 2. * x[15];
	v[2] = sporttournament28_pd[55] * x[18];
	v[0] += v[2];
	sporttournament28_pd[56] = 2. * x[16];
	v[2] = sporttournament28_pd[56] * x[115];
	v[0] += v[2];
	sporttournament28_pd[57] = 2. * x[16];
	v[2] = sporttournament28_pd[57] * x[141];
	v[0] += v[2];
	sporttournament28_pd[58] = 2. * x[16];
	v[2] = sporttournament28_pd[58] * x[166];
	v[0] += v[2];
	sporttournament28_pd[59] = 2. * x[16];
	v[2] = sporttournament28_pd[59] * x[323];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[60] = 2. * x[17];
	v[1] = sporttournament28_pd[60] * x[26];
	v[0] += v[1];
	sporttournament28_pd[61] = 2. * x[17];
	v[1] = sporttournament28_pd[61] * x[33];
	v[0] += v[1];
	sporttournament28_pd[62] = 2. * x[17];
	v[1] = sporttournament28_pd[62] * x[92];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[63] = 2. * x[17];
	v[2] = sporttournament28_pd[63] * x[141];
	v[0] += v[2];
	sporttournament28_pd[64] = 2. * x[18];
	v[2] = sporttournament28_pd[64] * x[19];
	v[0] += v[2];
	sporttournament28_pd[65] = 2. * x[18];
	v[2] = sporttournament28_pd[65] * x[47];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[66] = 2. * x[18];
	v[1] = sporttournament28_pd[66] * x[101];
	v[0] += v[1];
	sporttournament28_pd[67] = 2. * x[19];
	v[1] = sporttournament28_pd[67] * x[22];
	v[0] += v[1];
	sporttournament28_pd[68] = 2. * x[20];
	v[1] = sporttournament28_pd[68] * x[141];
	v[0] += v[1];
	sporttournament28_pd[69] = 2. * x[20];
	v[1] = sporttournament28_pd[69] * x[168];
	v[0] += v[1];
	sporttournament28_pd[70] = 2. * x[20];
	v[1] = sporttournament28_pd[70] * x[197];
	v[0] += v[1];
	sporttournament28_pd[71] = 2. * x[20];
	v[1] = sporttournament28_pd[71] * x[323];
	v[0] += v[1];
	sporttournament28_pd[72] = 2. * x[21];
	v[1] = sporttournament28_pd[72] * x[33];
	v[0] += v[1];
	sporttournament28_pd[73] = 2. * x[21];
	v[1] = sporttournament28_pd[73] * x[43];
	v[0] += v[1];
	sporttournament28_pd[74] = 2. * x[21];
	v[1] = sporttournament28_pd[74] * x[76];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[75] = 2. * x[21];
	v[2] = sporttournament28_pd[75] * x[168];
	v[0] += v[2];
	sporttournament28_pd[76] = 2. * x[22];
	v[2] = sporttournament28_pd[76] * x[23];
	v[0] += v[2];
	sporttournament28_pd[77] = 2. * x[22];
	v[2] = sporttournament28_pd[77] * x[34];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[78] = 2. * x[22];
	v[1] = sporttournament28_pd[78] * x[124];
	v[0] += v[1];
	sporttournament28_pd[79] = 2. * x[23];
	v[1] = sporttournament28_pd[79] * x[27];
	v[0] += v[1];
	sporttournament28_pd[80] = 2. * x[24];
	v[1] = sporttournament28_pd[80] * x[168];
	v[0] += v[1];
	sporttournament28_pd[81] = 2. * x[24];
	v[1] = sporttournament28_pd[81] * x[199];
	v[0] += v[1];
	sporttournament28_pd[82] = 2. * x[24];
	v[1] = sporttournament28_pd[82] * x[229];
	v[0] += v[1];
	sporttournament28_pd[83] = 2. * x[24];
	v[1] = sporttournament28_pd[83] * x[319];
	v[0] += v[1];
	sporttournament28_pd[84] = 2. * x[25];
	v[1] = sporttournament28_pd[84] * x[43];
	v[0] += v[1];
	sporttournament28_pd[85] = 2. * x[25];
	v[1] = sporttournament28_pd[85] * x[58];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[86] = 2. * x[25];
	v[2] = sporttournament28_pd[86] * x[60];
	v[0] += v[2];
	sporttournament28_pd[87] = 2. * x[25];
	v[2] = sporttournament28_pd[87] * x[199];
	v[0] += v[2];
	sporttournament28_pd[88] = 2. * x[26];
	v[2] = sporttournament28_pd[88] * x[233];
	v[0] += v[2];
	sporttournament28_pd[89] = 2. * x[26];
	v[2] = sporttournament28_pd[89] * x[320];
	v[0] += v[2];
	sporttournament28_pd[90] = 2. * x[26];
	v[2] = sporttournament28_pd[90] * x[324];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[91] = 2. * x[27];
	v[1] = sporttournament28_pd[91] * x[28];
	v[0] += v[1];
	sporttournament28_pd[92] = 2. * x[27];
	v[1] = sporttournament28_pd[92] * x[149];
	v[0] += v[1];
	sporttournament28_pd[93] = 2. * x[27];
	v[1] = sporttournament28_pd[93] * x[336];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[94] = 2. * x[28];
	v[2] = sporttournament28_pd[94] * x[35];
	v[0] += v[2];
	sporttournament28_pd[95] = 2. * x[29];
	v[2] = sporttournament28_pd[95] * x[30];
	v[0] += v[2];
	sporttournament28_pd[96] = 2. * x[29];
	v[2] = sporttournament28_pd[96] * x[72];
	v[0] += v[2];
	sporttournament28_pd[97] = 2. * x[29];
	v[2] = sporttournament28_pd[97] * x[136];
	v[0] += v[2];
	sporttournament28_pd[98] = 2. * x[29];
	v[2] = sporttournament28_pd[98] * x[280];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[99] = 2. * x[30];
	v[1] = sporttournament28_pd[99] * x[56];
	v[0] += v[1];
	sporttournament28_pd[100] = 2. * x[30];
	v[1] = sporttournament28_pd[100] * x[304];
	v[0] += v[1];
	sporttournament28_pd[101] = 2. * x[30];
	v[1] = sporttournament28_pd[101] * x[346];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[102] = 2. * x[31];
	v[2] = sporttournament28_pd[102] * x[199];
	v[0] += v[2];
	sporttournament28_pd[103] = 2. * x[31];
	v[2] = sporttournament28_pd[103] * x[231];
	v[0] += v[2];
	sporttournament28_pd[104] = 2. * x[31];
	v[2] = sporttournament28_pd[104] * x[244];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[105] = 2. * x[31];
	v[1] = sporttournament28_pd[105] * x[313];
	v[0] += v[1];
	sporttournament28_pd[106] = 2. * x[32];
	v[1] = sporttournament28_pd[106] * x[60];
	v[0] += v[1];
	sporttournament28_pd[107] = 2. * x[32];
	v[1] = sporttournament28_pd[107] * x[78];
	v[0] += v[1];
	sporttournament28_pd[108] = 2. * x[32];
	v[1] = sporttournament28_pd[108] * x[231];
	v[0] += v[1];
	sporttournament28_pd[109] = 2. * x[32];
	v[1] = sporttournament28_pd[109] * x[298];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[110] = 2. * x[33];
	v[2] = sporttournament28_pd[110] * x[95];
	v[0] += v[2];
	sporttournament28_pd[111] = 2. * x[33];
	v[2] = sporttournament28_pd[111] * x[314];
	v[0] += v[2];
	sporttournament28_pd[112] = 2. * x[34];
	v[2] = sporttournament28_pd[112] * x[48];
	v[0] += v[2];
	sporttournament28_pd[113] = 2. * x[34];
	v[2] = sporttournament28_pd[113] * x[61];
	v[0] += v[2];
	sporttournament28_pd[114] = 2. * x[34];
	v[2] = sporttournament28_pd[114] * x[334];
	v[0] += v[2];
	sporttournament28_pd[115] = 2. * x[35];
	v[2] = sporttournament28_pd[115] * x[36];
	v[0] += v[2];
	sporttournament28_pd[116] = 2. * x[35];
	v[2] = sporttournament28_pd[116] * x[241];
	v[0] += v[2];
	sporttournament28_pd[117] = 2. * x[35];
	v[2] = sporttournament28_pd[117] * x[336];
	v[0] += v[2];
	sporttournament28_pd[118] = 2. * x[36];
	v[2] = sporttournament28_pd[118] * x[48];
	v[0] += v[2];
	sporttournament28_pd[119] = 2. * x[37];
	v[2] = sporttournament28_pd[119] * x[84];
	v[0] += v[2];
	sporttournament28_pd[120] = 2. * x[37];
	v[2] = sporttournament28_pd[120] * x[250];
	v[0] += v[2];
	sporttournament28_pd[121] = 2. * x[37];
	v[2] = sporttournament28_pd[121] * x[292];
	v[0] += v[2];
	sporttournament28_pd[122] = 2. * x[37];
	v[2] = sporttournament28_pd[122] * x[350];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[123] = 2. * x[38];
	v[1] = sporttournament28_pd[123] * x[53];
	v[0] += v[1];
	sporttournament28_pd[124] = 2. * x[38];
	v[1] = sporttournament28_pd[124] * x[129];
	v[0] += v[1];
	sporttournament28_pd[125] = 2. * x[38];
	v[1] = sporttournament28_pd[125] * x[254];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[126] = 2. * x[38];
	v[2] = sporttournament28_pd[126] * x[345];
	v[0] += v[2];
	sporttournament28_pd[127] = 2. * x[39];
	v[2] = sporttournament28_pd[127] * x[41];
	v[0] += v[2];
	sporttournament28_pd[128] = 2. * x[39];
	v[2] = sporttournament28_pd[128] * x[267];
	v[0] += v[2];
	sporttournament28_pd[129] = 2. * x[39];
	v[2] = sporttournament28_pd[129] * x[281];
	v[0] += v[2];
	sporttournament28_pd[130] = 2. * x[39];
	v[2] = sporttournament28_pd[130] * x[340];
	v[0] += v[2];
	sporttournament28_pd[131] = 2. * x[40];
	v[2] = sporttournament28_pd[131] * x[75];
	v[0] += v[2];
	sporttournament28_pd[132] = 2. * x[40];
	v[2] = sporttournament28_pd[132] * x[194];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[133] = 2. * x[40];
	v[1] = sporttournament28_pd[133] * x[196];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[134] = 2. * x[40];
	v[2] = sporttournament28_pd[134] * x[244];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[135] = 2. * x[41];
	v[1] = sporttournament28_pd[135] * x[196];
	v[0] += v[1];
	sporttournament28_pd[136] = 2. * x[41];
	v[1] = sporttournament28_pd[136] * x[244];
	v[0] += v[1];
	sporttournament28_pd[137] = 2. * x[41];
	v[1] = sporttournament28_pd[137] * x[304];
	v[0] += v[1];
	sporttournament28_pd[138] = 2. * x[42];
	v[1] = sporttournament28_pd[138] * x[78];
	v[0] += v[1];
	sporttournament28_pd[139] = 2. * x[42];
	v[1] = sporttournament28_pd[139] * x[94];
	v[0] += v[1];
	sporttournament28_pd[140] = 2. * x[42];
	v[1] = sporttournament28_pd[140] * x[232];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[141] = 2. * x[42];
	v[2] = sporttournament28_pd[141] * x[298];
	v[0] += v[2];
	sporttournament28_pd[142] = 2. * x[43];
	v[2] = sporttournament28_pd[142] * x[307];
	v[0] += v[2];
	sporttournament28_pd[143] = 2. * x[43];
	v[2] = sporttournament28_pd[143] * x[324];
	v[0] += v[2];
	sporttournament28_pd[144] = 2. * x[44];
	v[2] = sporttournament28_pd[144] * x[45];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[145] = 2. * x[44];
	v[1] = sporttournament28_pd[145] * x[245];
	v[0] += v[1];
	sporttournament28_pd[146] = 2. * x[44];
	v[1] = sporttournament28_pd[146] * x[249];
	v[0] += v[1];
	sporttournament28_pd[147] = 2. * x[44];
	v[1] = sporttournament28_pd[147] * x[324];
	v[0] += v[1];
	sporttournament28_pd[148] = 2. * x[45];
	v[1] = sporttournament28_pd[148] * x[79];
	v[0] += v[1];
	sporttournament28_pd[149] = 2. * x[45];
	v[1] = sporttournament28_pd[149] * x[334];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[150] = 2. * x[45];
	v[2] = sporttournament28_pd[150] * x[353];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[151] = 2. * x[46];
	v[1] = sporttournament28_pd[151] * x[47];
	v[0] += v[1];
	sporttournament28_pd[152] = 2. * x[46];
	v[1] = sporttournament28_pd[152] * x[336];
	v[0] += v[1];
	sporttournament28_pd[153] = 2. * x[46];
	v[1] = sporttournament28_pd[153] * x[342];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[154] = 2. * x[46];
	v[2] = sporttournament28_pd[154] * x[343];
	v[0] += v[2];
	sporttournament28_pd[155] = 2. * x[47];
	v[2] = sporttournament28_pd[155] * x[63];
	v[0] += v[2];
	sporttournament28_pd[156] = 2. * x[47];
	v[2] = sporttournament28_pd[156] * x[79];
	v[0] += v[2];
	sporttournament28_pd[157] = 2. * x[48];
	v[2] = sporttournament28_pd[157] * x[49];
	v[0] += v[2];
	sporttournament28_pd[158] = 2. * x[48];
	v[2] = sporttournament28_pd[158] * x[209];
	v[0] += v[2];
	sporttournament28_pd[159] = 2. * x[49];
	v[2] = sporttournament28_pd[159] * x[63];
	v[0] += v[2];
	sporttournament28_pd[160] = 2. * x[50];
	v[2] = sporttournament28_pd[160] * x[300];
	v[0] += v[2];
	sporttournament28_pd[161] = 2. * x[50];
	v[2] = sporttournament28_pd[161] * x[301];
	v[0] += v[2];
	sporttournament28_pd[162] = 2. * x[51];
	v[2] = sporttournament28_pd[162] * x[66];
	v[0] += v[2];
	sporttournament28_pd[163] = 2. * x[51];
	v[2] = sporttournament28_pd[163] * x[248];
	v[0] += v[2];
	sporttournament28_pd[164] = 2. * x[51];
	v[2] = sporttournament28_pd[164] * x[300];
	v[0] += v[2];
	sporttournament28_pd[165] = 2. * x[51];
	v[2] = sporttournament28_pd[165] * x[355];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[166] = 2. * x[52];
	v[1] = sporttournament28_pd[166] * x[183];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[167] = 2. * x[52];
	v[2] = sporttournament28_pd[167] * x[216];
	v[0] += v[2];
	sporttournament28_pd[168] = 2. * x[52];
	v[2] = sporttournament28_pd[168] * x[250];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[169] = 2. * x[52];
	v[1] = sporttournament28_pd[169] * x[322];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[170] = 2. * x[53];
	v[2] = sporttournament28_pd[170] * x[128];
	v[0] += v[2];
	sporttournament28_pd[171] = 2. * x[53];
	v[2] = sporttournament28_pd[171] * x[357];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[172] = 2. * x[54];
	v[1] = sporttournament28_pd[172] * x[55];
	v[0] += v[1];
	sporttournament28_pd[173] = 2. * x[54];
	v[1] = sporttournament28_pd[173] * x[133];
	v[0] += v[1];
	sporttournament28_pd[174] = 2. * x[54];
	v[1] = sporttournament28_pd[174] * x[263];
	v[0] += v[1];
	sporttournament28_pd[175] = 2. * x[54];
	v[1] = sporttournament28_pd[175] * x[357];
	v[0] += v[1];
	sporttournament28_pd[176] = 2. * x[55];
	v[1] = sporttournament28_pd[176] * x[109];
	v[0] += v[1];
	sporttournament28_pd[177] = 2. * x[55];
	v[1] = sporttournament28_pd[177] * x[187];
	v[0] += v[1];
	sporttournament28_pd[178] = 2. * x[56];
	v[1] = sporttournament28_pd[178] * x[258];
	v[0] += v[1];
	sporttournament28_pd[179] = 2. * x[56];
	v[1] = sporttournament28_pd[179] * x[274];
	v[0] += v[1];
	sporttournament28_pd[180] = 2. * x[56];
	v[1] = sporttournament28_pd[180] * x[347];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[181] = 2. * x[57];
	v[2] = sporttournament28_pd[181] * x[273];
	v[0] += v[2];
	sporttournament28_pd[182] = 2. * x[57];
	v[2] = sporttournament28_pd[182] * x[288];
	v[0] += v[2];
	sporttournament28_pd[183] = 2. * x[57];
	v[2] = sporttournament28_pd[183] * x[333];
	v[0] += v[2];
	sporttournament28_pd[184] = 2. * x[57];
	v[2] = sporttournament28_pd[184] * x[347];
	v[0] += v[2];
	sporttournament28_pd[185] = 2. * x[58];
	v[2] = sporttournament28_pd[185] * x[59];
	v[0] += v[2];
	sporttournament28_pd[186] = 2. * x[59];
	v[2] = sporttournament28_pd[186] * x[94];
	v[0] += v[2];
	sporttournament28_pd[187] = 2. * x[59];
	v[2] = sporttournament28_pd[187] * x[118];
	v[0] += v[2];
	sporttournament28_pd[188] = 2. * x[59];
	v[2] = sporttournament28_pd[188] * x[200];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[189] = 2. * x[60];
	v[1] = sporttournament28_pd[189] * x[299];
	v[0] += v[1];
	sporttournament28_pd[190] = 2. * x[60];
	v[1] = sporttournament28_pd[190] * x[320];
	v[0] += v[1];
	sporttournament28_pd[191] = 2. * x[61];
	v[1] = sporttournament28_pd[191] * x[62];
	v[0] += v[1];
	sporttournament28_pd[192] = 2. * x[61];
	v[1] = sporttournament28_pd[192] * x[99];
	v[0] += v[1];
	sporttournament28_pd[193] = 2. * x[61];
	v[1] = sporttournament28_pd[193] * x[342];
	v[0] += v[1];
	sporttournament28_pd[194] = 2. * x[62];
	v[1] = sporttournament28_pd[194] * x[81];
	v[0] += v[1];
	sporttournament28_pd[195] = 2. * x[62];
	v[1] = sporttournament28_pd[195] * x[100];
	v[0] += v[1];
	sporttournament28_pd[196] = 2. * x[63];
	v[1] = sporttournament28_pd[196] * x[64];
	v[0] += v[1];
	sporttournament28_pd[197] = 2. * x[63];
	v[1] = sporttournament28_pd[197] * x[242];
	v[0] += v[1];
	sporttournament28_pd[198] = 2. * x[64];
	v[1] = sporttournament28_pd[198] * x[81];
	v[0] += v[1];
	sporttournament28_pd[199] = 2. * x[65];
	v[1] = sporttournament28_pd[199] * x[66];
	v[0] += v[1];
	sporttournament28_pd[200] = 2. * x[65];
	v[1] = sporttournament28_pd[200] * x[292];
	v[0] += v[1];
	sporttournament28_pd[201] = 2. * x[66];
	v[1] = sporttournament28_pd[201] * x[152];
	v[0] += v[1];
	sporttournament28_pd[202] = 2. * x[66];
	v[1] = sporttournament28_pd[202] * x[356];
	v[0] += v[1];
	sporttournament28_pd[203] = 2. * x[67];
	v[1] = sporttournament28_pd[203] * x[182];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[204] = 2. * x[67];
	v[2] = sporttournament28_pd[204] * x[248];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[205] = 2. * x[67];
	v[1] = sporttournament28_pd[205] * x[300];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[206] = 2. * x[67];
	v[2] = sporttournament28_pd[206] * x[301];
	v[0] += v[2];
	sporttournament28_pd[207] = 2. * x[68];
	v[2] = sporttournament28_pd[207] * x[185];
	v[0] += v[2];
	sporttournament28_pd[208] = 2. * x[68];
	v[2] = sporttournament28_pd[208] * x[248];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[209] = 2. * x[68];
	v[1] = sporttournament28_pd[209] * x[271];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[210] = 2. * x[68];
	v[2] = sporttournament28_pd[210] * x[317];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[211] = 2. * x[69];
	v[1] = sporttournament28_pd[211] * x[155];
	v[0] += v[1];
	sporttournament28_pd[212] = 2. * x[69];
	v[1] = sporttournament28_pd[212] * x[322];
	v[0] += v[1];
	sporttournament28_pd[213] = 2. * x[69];
	v[1] = sporttournament28_pd[213] * x[360];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[214] = 2. * x[70];
	v[2] = sporttournament28_pd[214] * x[318];
	v[0] += v[2];
	sporttournament28_pd[215] = 2. * x[70];
	v[2] = sporttournament28_pd[215] * x[327];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[216] = 2. * x[70];
	v[1] = sporttournament28_pd[216] * x[357];
	v[0] += v[1];
	sporttournament28_pd[217] = 2. * x[70];
	v[1] = sporttournament28_pd[217] * x[360];
	v[0] += v[1];
	sporttournament28_pd[218] = 2. * x[71];
	v[1] = sporttournament28_pd[218] * x[72];
	v[0] += v[1];
	sporttournament28_pd[219] = 2. * x[71];
	v[1] = sporttournament28_pd[219] * x[73];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[220] = 2. * x[71];
	v[2] = sporttournament28_pd[220] * x[109];
	v[0] += v[2];
	sporttournament28_pd[221] = 2. * x[71];
	v[2] = sporttournament28_pd[221] * x[296];
	v[0] += v[2];
	sporttournament28_pd[222] = 2. * x[72];
	v[2] = sporttournament28_pd[222] * x[75];
	v[0] += v[2];
	sporttournament28_pd[223] = 2. * x[72];
	v[2] = sporttournament28_pd[223] * x[138];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[224] = 2. * x[73];
	v[1] = sporttournament28_pd[224] * x[75];
	v[0] += v[1];
	sporttournament28_pd[225] = 2. * x[73];
	v[1] = sporttournament28_pd[225] * x[112];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[226] = 2. * x[73];
	v[2] = sporttournament28_pd[226] * x[362];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[227] = 2. * x[74];
	v[1] = sporttournament28_pd[227] * x[258];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[228] = 2. * x[74];
	v[2] = sporttournament28_pd[228] * x[268];
	v[0] += v[2];
	sporttournament28_pd[229] = 2. * x[74];
	v[2] = sporttournament28_pd[229] * x[340];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[230] = 2. * x[74];
	v[1] = sporttournament28_pd[230] * x[341];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[231] = 2. * x[75];
	v[2] = sporttournament28_pd[231] * x[341];
	v[0] += v[2];
	sporttournament28_pd[232] = 2. * x[76];
	v[2] = sporttournament28_pd[232] * x[77];
	v[0] += v[2];
	sporttournament28_pd[233] = 2. * x[77];
	v[2] = sporttournament28_pd[233] * x[118];
	v[0] += v[2];
	sporttournament28_pd[234] = 2. * x[77];
	v[2] = sporttournament28_pd[234] * x[144];
	v[0] += v[2];
	sporttournament28_pd[235] = 2. * x[77];
	v[2] = sporttournament28_pd[235] * x[169];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[236] = 2. * x[78];
	v[1] = sporttournament28_pd[236] * x[291];
	v[0] += v[1];
	sporttournament28_pd[237] = 2. * x[78];
	v[1] = sporttournament28_pd[237] * x[314];
	v[0] += v[1];
	sporttournament28_pd[238] = 2. * x[79];
	v[1] = sporttournament28_pd[238] * x[80];
	v[0] += v[1];
	sporttournament28_pd[239] = 2. * x[79];
	v[1] = sporttournament28_pd[239] * x[121];
	v[0] += v[1];
	sporttournament28_pd[240] = 2. * x[80];
	v[1] = sporttournament28_pd[240] * x[102];
	v[0] += v[1];
	sporttournament28_pd[241] = 2. * x[80];
	v[1] = sporttournament28_pd[241] * x[122];
	v[0] += v[1];
	sporttournament28_pd[242] = 2. * x[81];
	v[1] = sporttournament28_pd[242] * x[82];
	v[0] += v[1];
	sporttournament28_pd[243] = 2. * x[81];
	v[1] = sporttournament28_pd[243] * x[261];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[244] = 2. * x[82];
	v[2] = sporttournament28_pd[244] * x[102];
	v[0] += v[2];
	sporttournament28_pd[245] = 2. * x[83];
	v[2] = sporttournament28_pd[245] * x[84];
	v[0] += v[2];
	sporttournament28_pd[246] = 2. * x[83];
	v[2] = sporttournament28_pd[246] * x[211];
	v[0] += v[2];
	sporttournament28_pd[247] = 2. * x[84];
	v[2] = sporttournament28_pd[247] * x[351];
	v[0] += v[2];
	sporttournament28_pd[248] = 2. * x[84];
	v[2] = sporttournament28_pd[248] * x[354];
	v[0] += v[2];
	sporttournament28_pd[249] = 2. * x[85];
	v[2] = sporttournament28_pd[249] * x[213];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[250] = 2. * x[85];
	v[1] = sporttournament28_pd[250] * x[250];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[251] = 2. * x[85];
	v[2] = sporttournament28_pd[251] * x[292];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[252] = 2. * x[85];
	v[1] = sporttournament28_pd[252] * x[293];
	v[0] += v[1];
	sporttournament28_pd[253] = 2. * x[86];
	v[1] = sporttournament28_pd[253] * x[155];
	v[0] += v[1];
	sporttournament28_pd[254] = 2. * x[86];
	v[1] = sporttournament28_pd[254] * x[213];
	v[0] += v[1];
	sporttournament28_pd[255] = 2. * x[86];
	v[1] = sporttournament28_pd[255] * x[303];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[256] = 2. * x[86];
	v[2] = sporttournament28_pd[256] * x[338];
	v[0] += v[2];
	sporttournament28_pd[257] = 2. * x[87];
	v[2] = sporttournament28_pd[257] * x[185];
	v[0] += v[2];
	sporttournament28_pd[258] = 2. * x[87];
	v[2] = sporttournament28_pd[258] * x[317];
	v[0] += v[2];
	sporttournament28_pd[259] = 2. * x[87];
	v[2] = sporttournament28_pd[259] * x[364];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[260] = 2. * x[88];
	v[1] = sporttournament28_pd[260] * x[188];
	v[0] += v[1];
	sporttournament28_pd[261] = 2. * x[88];
	v[1] = sporttournament28_pd[261] * x[332];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[262] = 2. * x[88];
	v[2] = sporttournament28_pd[262] * x[360];
	v[0] += v[2];
	sporttournament28_pd[263] = 2. * x[88];
	v[2] = sporttournament28_pd[263] * x[364];
	v[0] += v[2];
	sporttournament28_pd[264] = 2. * x[89];
	v[2] = sporttournament28_pd[264] * x[135];
	v[0] += v[2];
	sporttournament28_pd[265] = 2. * x[89];
	v[2] = sporttournament28_pd[265] * x[225];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[266] = 2. * x[89];
	v[1] = sporttournament28_pd[266] * x[273];
	v[0] += v[1];
	sporttournament28_pd[267] = 2. * x[90];
	v[1] = sporttournament28_pd[267] * x[91];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[268] = 2. * x[90];
	v[2] = sporttournament28_pd[268] * x[267];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[269] = 2. * x[90];
	v[1] = sporttournament28_pd[269] * x[268];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[270] = 2. * x[90];
	v[2] = sporttournament28_pd[270] * x[333];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[271] = 2. * x[91];
	v[1] = sporttournament28_pd[271] * x[306];
	v[0] += v[1];
	sporttournament28_pd[272] = 2. * x[91];
	v[1] = sporttournament28_pd[272] * x[319];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[273] = 2. * x[91];
	v[2] = sporttournament28_pd[273] * x[366];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[274] = 2. * x[92];
	v[1] = sporttournament28_pd[274] * x[93];
	v[0] += v[1];
	sporttournament28_pd[275] = 2. * x[93];
	v[1] = sporttournament28_pd[275] * x[142];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[276] = 2. * x[93];
	v[2] = sporttournament28_pd[276] * x[144];
	v[0] += v[2];
	sporttournament28_pd[277] = 2. * x[93];
	v[2] = sporttournament28_pd[277] * x[171];
	v[0] += v[2];
	sporttournament28_pd[278] = 2. * x[94];
	v[2] = sporttournament28_pd[278] * x[96];
	v[0] += v[2];
	sporttournament28_pd[279] = 2. * x[94];
	v[2] = sporttournament28_pd[279] * x[307];
	v[0] += v[2];
	sporttournament28_pd[280] = 2. * x[95];
	v[2] = sporttournament28_pd[280] * x[98];
	v[0] += v[2];
	sporttournament28_pd[281] = 2. * x[95];
	v[2] = sporttournament28_pd[281] * x[236];
	v[0] += v[2];
	sporttournament28_pd[282] = 2. * x[95];
	v[2] = sporttournament28_pd[282] * x[269];
	v[0] += v[2];
	sporttournament28_pd[283] = 2. * x[96];
	v[2] = sporttournament28_pd[283] * x[98];
	v[0] += v[2];
	sporttournament28_pd[284] = 2. * x[96];
	v[2] = sporttournament28_pd[284] * x[171];
	v[0] += v[2];
	sporttournament28_pd[285] = 2. * x[96];
	v[2] = sporttournament28_pd[285] * x[290];
	v[0] += v[2];
	sporttournament28_pd[286] = 2. * x[97];
	v[2] = sporttournament28_pd[286] * x[99];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[287] = 2. * x[97];
	v[1] = sporttournament28_pd[287] * x[204];
	v[0] += v[1];
	sporttournament28_pd[288] = 2. * x[97];
	v[1] = sporttournament28_pd[288] * x[247];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[289] = 2. * x[97];
	v[2] = sporttournament28_pd[289] * x[320];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[290] = 2. * x[98];
	v[1] = sporttournament28_pd[290] * x[99];
	v[0] += v[1];
	sporttournament28_pd[291] = 2. * x[98];
	v[1] = sporttournament28_pd[291] * x[247];
	v[0] += v[1];
	sporttournament28_pd[292] = 2. * x[99];
	v[1] = sporttournament28_pd[292] * x[148];
	v[0] += v[1];
	sporttournament28_pd[293] = 2. * x[100];
	v[1] = sporttournament28_pd[293] * x[101];
	v[0] += v[1];
	sporttournament28_pd[294] = 2. * x[100];
	v[1] = sporttournament28_pd[294] * x[147];
	v[0] += v[1];
	sporttournament28_pd[295] = 2. * x[100];
	v[1] = sporttournament28_pd[295] * x[335];
	v[0] += v[1];
	sporttournament28_pd[296] = 2. * x[101];
	v[1] = sporttournament28_pd[296] * x[125];
	v[0] += v[1];
	sporttournament28_pd[297] = 2. * x[101];
	v[1] = sporttournament28_pd[297] * x[148];
	v[0] += v[1];
	sporttournament28_pd[298] = 2. * x[102];
	v[1] = sporttournament28_pd[298] * x[103];
	v[0] += v[1];
	sporttournament28_pd[299] = 2. * x[102];
	v[1] = sporttournament28_pd[299] * x[123];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[300] = 2. * x[103];
	v[2] = sporttournament28_pd[300] * x[125];
	v[0] += v[2];
	sporttournament28_pd[301] = 2. * x[104];
	v[2] = sporttournament28_pd[301] * x[283];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[302] = 2. * x[104];
	v[1] = sporttournament28_pd[302] * x[285];
	v[0] += v[1];
	sporttournament28_pd[303] = 2. * x[104];
	v[1] = sporttournament28_pd[303] * x[344];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[304] = 2. * x[104];
	v[2] = sporttournament28_pd[304] * x[367];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[305] = 2. * x[105];
	v[1] = sporttournament28_pd[305] * x[128];
	v[0] += v[1];
	sporttournament28_pd[306] = 2. * x[105];
	v[1] = sporttournament28_pd[306] * x[285];
	v[0] += v[1];
	sporttournament28_pd[307] = 2. * x[105];
	v[1] = sporttournament28_pd[307] * x[294];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[308] = 2. * x[105];
	v[2] = sporttournament28_pd[308] * x[344];
	v[0] += v[2];
	sporttournament28_pd[309] = 2. * x[106];
	v[2] = sporttournament28_pd[309] * x[216];
	v[0] += v[2];
	sporttournament28_pd[310] = 2. * x[106];
	v[2] = sporttournament28_pd[310] * x[310];
	v[0] += v[2];
	sporttournament28_pd[311] = 2. * x[106];
	v[2] = sporttournament28_pd[311] * x[368];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[312] = 2. * x[107];
	v[1] = sporttournament28_pd[312] * x[159];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[313] = 2. * x[107];
	v[2] = sporttournament28_pd[313] * x[256];
	v[0] += v[2];
	sporttournament28_pd[314] = 2. * x[108];
	v[2] = sporttournament28_pd[314] * x[133];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[315] = 2. * x[108];
	v[1] = sporttournament28_pd[315] * x[159];
	v[0] += v[1];
	sporttournament28_pd[316] = 2. * x[108];
	v[1] = sporttournament28_pd[316] * x[364];
	v[0] += v[1];
	sporttournament28_pd[317] = 2. * x[108];
	v[1] = sporttournament28_pd[317] * x[368];
	v[0] += v[1];
	sporttournament28_pd[318] = 2. * x[109];
	v[1] = sporttournament28_pd[318] * x[111];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[319] = 2. * x[109];
	v[2] = sporttournament28_pd[319] * x[265];
	v[0] += v[2];
	sporttournament28_pd[320] = 2. * x[110];
	v[2] = sporttournament28_pd[320] * x[161];
	v[0] += v[2];
	sporttournament28_pd[321] = 2. * x[110];
	v[2] = sporttournament28_pd[321] * x[192];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[322] = 2. * x[110];
	v[1] = sporttournament28_pd[322] * x[267];
	v[0] += v[1];
	sporttournament28_pd[323] = 2. * x[110];
	v[1] = sporttournament28_pd[323] * x[280];
	v[0] += v[1];
	sporttournament28_pd[324] = 2. * x[111];
	v[1] = sporttournament28_pd[324] * x[192];
	v[0] += v[1];
	sporttournament28_pd[325] = 2. * x[111];
	v[1] = sporttournament28_pd[325] * x[333];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[326] = 2. * x[111];
	v[2] = sporttournament28_pd[326] * x[369];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[327] = 2. * x[112];
	v[1] = sporttournament28_pd[327] * x[113];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[328] = 2. * x[112];
	v[2] = sporttournament28_pd[328] * x[273];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[329] = 2. * x[112];
	v[1] = sporttournament28_pd[329] * x[274];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[330] = 2. * x[113];
	v[2] = sporttournament28_pd[330] * x[114];
	v[0] += v[2];
	sporttournament28_pd[331] = 2. * x[113];
	v[2] = sporttournament28_pd[331] * x[323];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[332] = 2. * x[113];
	v[1] = sporttournament28_pd[332] * x[370];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[333] = 2. * x[114];
	v[2] = sporttournament28_pd[333] * x[140];
	v[0] += v[2];
	sporttournament28_pd[334] = 2. * x[114];
	v[2] = sporttournament28_pd[334] * x[268];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[335] = 2. * x[115];
	v[1] = sporttournament28_pd[335] * x[117];
	v[0] += v[1];
	sporttournament28_pd[336] = 2. * x[115];
	v[1] = sporttournament28_pd[336] * x[233];
	v[0] += v[1];
	sporttournament28_pd[337] = 2. * x[116];
	v[1] = sporttournament28_pd[337] * x[117];
	v[0] += v[1];
	sporttournament28_pd[338] = 2. * x[116];
	v[1] = sporttournament28_pd[338] * x[140];
	v[0] += v[1];
	sporttournament28_pd[339] = 2. * x[116];
	v[1] = sporttournament28_pd[339] * x[233];
	v[0] += v[1];
	sporttournament28_pd[340] = 2. * x[116];
	v[1] = sporttournament28_pd[340] * x[289];
	v[0] += v[1];
	sporttournament28_pd[341] = 2. * x[117];
	v[1] = sporttournament28_pd[341] * x[171];
	v[0] += v[1];
	sporttournament28_pd[342] = 2. * x[117];
	v[1] = sporttournament28_pd[342] * x[202];
	v[0] += v[1];
	sporttournament28_pd[343] = 2. * x[118];
	v[1] = sporttournament28_pd[343] * x[119];
	v[0] += v[1];
	sporttournament28_pd[344] = 2. * x[118];
	v[1] = sporttournament28_pd[344] * x[299];
	v[0] += v[1];
	sporttournament28_pd[345] = 2. * x[119];
	v[1] = sporttournament28_pd[345] * x[174];
	v[0] += v[1];
	sporttournament28_pd[346] = 2. * x[119];
	v[1] = sporttournament28_pd[346] * x[202];
	v[0] += v[1];
	sporttournament28_pd[347] = 2. * x[119];
	v[1] = sporttournament28_pd[347] * x[363];
	v[0] += v[1];
	sporttournament28_pd[348] = 2. * x[120];
	v[1] = sporttournament28_pd[348] * x[121];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[349] = 2. * x[120];
	v[2] = sporttournament28_pd[349] * x[173];
	v[0] += v[2];
	sporttournament28_pd[350] = 2. * x[120];
	v[2] = sporttournament28_pd[350] * x[205];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[351] = 2. * x[120];
	v[1] = sporttournament28_pd[351] * x[314];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[352] = 2. * x[121];
	v[2] = sporttournament28_pd[352] * x[177];
	v[0] += v[2];
	sporttournament28_pd[353] = 2. * x[121];
	v[2] = sporttournament28_pd[353] * x[363];
	v[0] += v[2];
	sporttournament28_pd[354] = 2. * x[122];
	v[2] = sporttournament28_pd[354] * x[124];
	v[0] += v[2];
	sporttournament28_pd[355] = 2. * x[122];
	v[2] = sporttournament28_pd[355] * x[176];
	v[0] += v[2];
	sporttournament28_pd[356] = 2. * x[122];
	v[2] = sporttournament28_pd[356] * x[343];
	v[0] += v[2];
	sporttournament28_pd[357] = 2. * x[123];
	v[2] = sporttournament28_pd[357] * x[150];
	v[0] += v[2];
	sporttournament28_pd[358] = 2. * x[123];
	v[2] = sporttournament28_pd[358] * x[246];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[359] = 2. * x[123];
	v[1] = sporttournament28_pd[359] * x[253];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[360] = 2. * x[124];
	v[2] = sporttournament28_pd[360] * x[150];
	v[0] += v[2];
	sporttournament28_pd[361] = 2. * x[124];
	v[2] = sporttournament28_pd[361] * x[177];
	v[0] += v[2];
	sporttournament28_pd[362] = 2. * x[125];
	v[2] = sporttournament28_pd[362] * x[126];
	v[0] += v[2];
	sporttournament28_pd[363] = 2. * x[125];
	v[2] = sporttournament28_pd[363] * x[208];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[364] = 2. * x[126];
	v[1] = sporttournament28_pd[364] * x[150];
	v[0] += v[1];
	sporttournament28_pd[365] = 2. * x[127];
	v[1] = sporttournament28_pd[365] * x[276];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[366] = 2. * x[127];
	v[2] = sporttournament28_pd[366] * x[278];
	v[0] += v[2];
	sporttournament28_pd[367] = 2. * x[127];
	v[2] = sporttournament28_pd[367] * x[338];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[368] = 2. * x[127];
	v[1] = sporttournament28_pd[368] * x[371];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[369] = 2. * x[128];
	v[2] = sporttournament28_pd[369] * x[130];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[370] = 2. * x[128];
	v[1] = sporttournament28_pd[370] * x[284];
	v[0] += v[1];
	sporttournament28_pd[371] = 2. * x[129];
	v[1] = sporttournament28_pd[371] * x[157];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[372] = 2. * x[129];
	v[2] = sporttournament28_pd[372] * x[303];
	v[0] += v[2];
	sporttournament28_pd[373] = 2. * x[130];
	v[2] = sporttournament28_pd[373] * x[157];
	v[0] += v[2];
	sporttournament28_pd[374] = 2. * x[130];
	v[2] = sporttournament28_pd[374] * x[368];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[375] = 2. * x[130];
	v[1] = sporttournament28_pd[375] * x[372];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[376] = 2. * x[131];
	v[2] = sporttournament28_pd[376] * x[134];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[377] = 2. * x[131];
	v[1] = sporttournament28_pd[377] * x[251];
	v[0] += v[1];
	sporttournament28_pd[378] = 2. * x[132];
	v[1] = sporttournament28_pd[378] * x[134];
	v[0] += v[1];
	sporttournament28_pd[379] = 2. * x[132];
	v[1] = sporttournament28_pd[379] * x[157];
	v[0] += v[1];
	sporttournament28_pd[380] = 2. * x[132];
	v[1] = sporttournament28_pd[380] * x[332];
	v[0] += v[1];
	sporttournament28_pd[381] = 2. * x[132];
	v[1] = sporttournament28_pd[381] * x[368];
	v[0] += v[1];
	sporttournament28_pd[382] = 2. * x[133];
	v[1] = sporttournament28_pd[382] * x[136];
	v[0] += v[1];
	sporttournament28_pd[383] = 2. * x[133];
	v[1] = sporttournament28_pd[383] * x[312];
	v[0] += v[1];
	sporttournament28_pd[384] = 2. * x[134];
	v[1] = sporttournament28_pd[384] * x[136];
	v[0] += v[1];
	sporttournament28_pd[385] = 2. * x[134];
	v[1] = sporttournament28_pd[385] * x[295];
	v[0] += v[1];
	sporttournament28_pd[386] = 2. * x[135];
	v[1] = sporttournament28_pd[386] * x[256];
	v[0] += v[1];
	sporttournament28_pd[387] = 2. * x[135];
	v[1] = sporttournament28_pd[387] * x[327];
	v[0] += v[1];
	sporttournament28_pd[388] = 2. * x[135];
	v[1] = sporttournament28_pd[388] * x[352];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[389] = 2. * x[136];
	v[2] = sporttournament28_pd[389] * x[352];
	v[0] += v[2];
	sporttournament28_pd[390] = 2. * x[137];
	v[2] = sporttournament28_pd[390] * x[162];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[391] = 2. * x[137];
	v[1] = sporttournament28_pd[391] * x[258];
	v[0] += v[1];
	sporttournament28_pd[392] = 2. * x[137];
	v[1] = sporttournament28_pd[392] * x[287];
	v[0] += v[1];
	sporttournament28_pd[393] = 2. * x[137];
	v[1] = sporttournament28_pd[393] * x[312];
	v[0] += v[1];
	sporttournament28_pd[394] = 2. * x[138];
	v[1] = sporttournament28_pd[394] * x[225];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[395] = 2. * x[138];
	v[2] = sporttournament28_pd[395] * x[281];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[396] = 2. * x[138];
	v[1] = sporttournament28_pd[396] * x[328];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[397] = 2. * x[139];
	v[2] = sporttournament28_pd[397] * x[167];
	v[0] += v[2];
	sporttournament28_pd[398] = 2. * x[139];
	v[2] = sporttournament28_pd[398] * x[268];
	v[0] += v[2];
	sporttournament28_pd[399] = 2. * x[139];
	v[2] = sporttournament28_pd[399] * x[328];
	v[0] += v[2];
	sporttournament28_pd[400] = 2. * x[140];
	v[2] = sporttournament28_pd[400] * x[142];
	v[0] += v[2];
	sporttournament28_pd[401] = 2. * x[140];
	v[2] = sporttournament28_pd[401] * x[306];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[402] = 2. * x[141];
	v[1] = sporttournament28_pd[402] * x[143];
	v[0] += v[1];
	sporttournament28_pd[403] = 2. * x[142];
	v[1] = sporttournament28_pd[403] * x[143];
	v[0] += v[1];
	sporttournament28_pd[404] = 2. * x[142];
	v[1] = sporttournament28_pd[404] * x[167];
	v[0] += v[1];
	sporttournament28_pd[405] = 2. * x[143];
	v[1] = sporttournament28_pd[405] * x[202];
	v[0] += v[1];
	sporttournament28_pd[406] = 2. * x[143];
	v[1] = sporttournament28_pd[406] * x[235];
	v[0] += v[1];
	sporttournament28_pd[407] = 2. * x[144];
	v[1] = sporttournament28_pd[407] * x[145];
	v[0] += v[1];
	sporttournament28_pd[408] = 2. * x[144];
	v[1] = sporttournament28_pd[408] * x[291];
	v[0] += v[1];
	sporttournament28_pd[409] = 2. * x[145];
	v[1] = sporttournament28_pd[409] * x[146];
	v[0] += v[1];
	sporttournament28_pd[410] = 2. * x[145];
	v[1] = sporttournament28_pd[410] * x[235];
	v[0] += v[1];
	sporttournament28_pd[411] = 2. * x[145];
	v[1] = sporttournament28_pd[411] * x[359];
	v[0] += v[1];
	sporttournament28_pd[412] = 2. * x[146];
	v[1] = sporttournament28_pd[412] * x[147];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[413] = 2. * x[146];
	v[2] = sporttournament28_pd[413] * x[175];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[414] = 2. * x[146];
	v[1] = sporttournament28_pd[414] * x[307];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[415] = 2. * x[147];
	v[2] = sporttournament28_pd[415] * x[207];
	v[0] += v[2];
	sporttournament28_pd[416] = 2. * x[147];
	v[2] = sporttournament28_pd[416] * x[359];
	v[0] += v[2];
	sporttournament28_pd[417] = 2. * x[148];
	v[2] = sporttournament28_pd[417] * x[149];
	v[0] += v[2];
	sporttournament28_pd[418] = 2. * x[148];
	v[2] = sporttournament28_pd[418] * x[206];
	v[0] += v[2];
	sporttournament28_pd[419] = 2. * x[149];
	v[2] = sporttournament28_pd[419] * x[178];
	v[0] += v[2];
	sporttournament28_pd[420] = 2. * x[149];
	v[2] = sporttournament28_pd[420] * x[207];
	v[0] += v[2];
	sporttournament28_pd[421] = 2. * x[150];
	v[2] = sporttournament28_pd[421] * x[151];
	v[0] += v[2];
	sporttournament28_pd[422] = 2. * x[151];
	v[2] = sporttournament28_pd[422] * x[178];
	v[0] += v[2];
	sporttournament28_pd[423] = 2. * x[152];
	v[2] = sporttournament28_pd[423] * x[154];
	v[0] += v[2];
	sporttournament28_pd[424] = 2. * x[153];
	v[2] = sporttournament28_pd[424] * x[270];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[425] = 2. * x[153];
	v[1] = sporttournament28_pd[425] * x[325];
	v[0] += v[1];
	sporttournament28_pd[426] = 2. * x[153];
	v[1] = sporttournament28_pd[426] * x[329];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[427] = 2. * x[153];
	v[2] = sporttournament28_pd[427] * x[330];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[428] = 2. * x[154];
	v[1] = sporttournament28_pd[428] * x[270];
	v[0] += v[1];
	sporttournament28_pd[429] = 2. * x[154];
	v[1] = sporttournament28_pd[429] * x[330];
	v[0] += v[1];
	sporttournament28_pd[430] = 2. * x[154];
	v[1] = sporttournament28_pd[430] * x[337];
	v[0] += v[1];
	sporttournament28_pd[431] = 2. * x[155];
	v[1] = sporttournament28_pd[431] * x[156];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[432] = 2. * x[155];
	v[2] = sporttournament28_pd[432] * x[277];
	v[0] += v[2];
	sporttournament28_pd[433] = 2. * x[156];
	v[2] = sporttournament28_pd[433] * x[186];
	v[0] += v[2];
	sporttournament28_pd[434] = 2. * x[156];
	v[2] = sporttournament28_pd[434] * x[364];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[435] = 2. * x[156];
	v[1] = sporttournament28_pd[435] * x[374];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[436] = 2. * x[157];
	v[2] = sporttournament28_pd[436] * x[158];
	v[0] += v[2];
	sporttournament28_pd[437] = 2. * x[158];
	v[2] = sporttournament28_pd[437] * x[160];
	v[0] += v[2];
	sporttournament28_pd[438] = 2. * x[158];
	v[2] = sporttournament28_pd[438] * x[186];
	v[0] += v[2];
	sporttournament28_pd[439] = 2. * x[158];
	v[2] = sporttournament28_pd[439] * x[327];
	v[0] += v[2];
	sporttournament28_pd[440] = 2. * x[159];
	v[2] = sporttournament28_pd[440] * x[295];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[441] = 2. * x[159];
	v[1] = sporttournament28_pd[441] * x[369];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[442] = 2. * x[160];
	v[2] = sporttournament28_pd[442] * x[252];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[443] = 2. * x[160];
	v[1] = sporttournament28_pd[443] * x[287];
	v[0] += v[1];
	sporttournament28_pd[444] = 2. * x[160];
	v[1] = sporttournament28_pd[444] * x[369];
	v[0] += v[1];
	sporttournament28_pd[445] = 2. * x[161];
	v[1] = sporttournament28_pd[445] * x[251];
	v[0] += v[1];
	sporttournament28_pd[446] = 2. * x[161];
	v[1] = sporttournament28_pd[446] * x[332];
	v[0] += v[1];
	sporttournament28_pd[447] = 2. * x[161];
	v[1] = sporttournament28_pd[447] * x[346];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[448] = 2. * x[162];
	v[2] = sporttournament28_pd[448] * x[194];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[449] = 2. * x[162];
	v[1] = sporttournament28_pd[449] * x[352];
	v[0] += v[1];
	sporttournament28_pd[450] = 2. * x[162];
	v[1] = sporttournament28_pd[450] * x[373];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[451] = 2. * x[163];
	v[2] = sporttournament28_pd[451] * x[164];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[452] = 2. * x[163];
	v[1] = sporttournament28_pd[452] * x[192];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[453] = 2. * x[163];
	v[2] = sporttournament28_pd[453] * x[226];
	v[0] += v[2];
	sporttournament28_pd[454] = 2. * x[163];
	v[2] = sporttournament28_pd[454] * x[288];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[455] = 2. * x[164];
	v[1] = sporttournament28_pd[455] * x[166];
	v[0] += v[1];
	sporttournament28_pd[456] = 2. * x[164];
	v[1] = sporttournament28_pd[456] * x[319];
	v[0] += v[1];
	sporttournament28_pd[457] = 2. * x[164];
	v[1] = sporttournament28_pd[457] * x[373];
	v[0] += v[1];
	sporttournament28_pd[458] = 2. * x[165];
	v[1] = sporttournament28_pd[458] * x[198];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[459] = 2. * x[165];
	v[2] = sporttournament28_pd[459] * x[288];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[460] = 2. * x[165];
	v[1] = sporttournament28_pd[460] * x[289];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[461] = 2. * x[165];
	v[2] = sporttournament28_pd[461] * x[347];
	v[0] += v[2];
	sporttournament28_pd[462] = 2. * x[166];
	v[2] = sporttournament28_pd[462] * x[198];
	v[0] += v[2];
	sporttournament28_pd[463] = 2. * x[166];
	v[2] = sporttournament28_pd[463] * x[274];
	v[0] += v[2];
	sporttournament28_pd[464] = 2. * x[167];
	v[2] = sporttournament28_pd[464] * x[169];
	v[0] += v[2];
	sporttournament28_pd[465] = 2. * x[167];
	v[2] = sporttournament28_pd[465] * x[297];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[466] = 2. * x[168];
	v[1] = sporttournament28_pd[466] * x[170];
	v[0] += v[1];
	sporttournament28_pd[467] = 2. * x[169];
	v[1] = sporttournament28_pd[467] * x[170];
	v[0] += v[1];
	sporttournament28_pd[468] = 2. * x[169];
	v[1] = sporttournament28_pd[468] * x[198];
	v[0] += v[1];
	sporttournament28_pd[469] = 2. * x[170];
	v[1] = sporttournament28_pd[469] * x[172];
	v[0] += v[1];
	sporttournament28_pd[470] = 2. * x[170];
	v[1] = sporttournament28_pd[470] * x[235];
	v[0] += v[1];
	sporttournament28_pd[471] = 2. * x[171];
	v[1] = sporttournament28_pd[471] * x[173];
	v[0] += v[1];
	sporttournament28_pd[472] = 2. * x[172];
	v[1] = sporttournament28_pd[472] * x[173];
	v[0] += v[1];
	sporttournament28_pd[473] = 2. * x[172];
	v[1] = sporttournament28_pd[473] * x[201];
	v[0] += v[1];
	sporttournament28_pd[474] = 2. * x[172];
	v[1] = sporttournament28_pd[474] * x[245];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[475] = 2. * x[173];
	v[2] = sporttournament28_pd[475] * x[353];
	v[0] += v[2];
	sporttournament28_pd[476] = 2. * x[174];
	v[2] = sporttournament28_pd[476] * x[176];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[477] = 2. * x[174];
	v[1] = sporttournament28_pd[477] * x[249];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[478] = 2. * x[174];
	v[2] = sporttournament28_pd[478] * x[299];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[479] = 2. * x[175];
	v[1] = sporttournament28_pd[479] * x[240];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[480] = 2. * x[175];
	v[2] = sporttournament28_pd[480] * x[246];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[481] = 2. * x[175];
	v[1] = sporttournament28_pd[481] * x[269];
	v[0] += v[1];
	sporttournament28_pd[482] = 2. * x[176];
	v[1] = sporttournament28_pd[482] * x[240];
	v[0] += v[1];
	sporttournament28_pd[483] = 2. * x[176];
	v[1] = sporttournament28_pd[483] * x[353];
	v[0] += v[1];
	sporttournament28_pd[484] = 2. * x[177];
	v[1] = sporttournament28_pd[484] * x[239];
	v[0] += v[1];
	sporttournament28_pd[485] = 2. * x[177];
	v[1] = sporttournament28_pd[485] * x[241];
	v[0] += v[1];
	sporttournament28_pd[486] = 2. * x[178];
	v[1] = sporttournament28_pd[486] * x[261];
	v[0] += v[1];
	sporttournament28_pd[487] = 2. * x[178];
	v[1] = sporttournament28_pd[487] * x[375];
	v[0] += v[1];
	sporttournament28_pd[488] = 2. * x[179];
	v[1] = sporttournament28_pd[488] * x[283];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[489] = 2. * x[179];
	v[2] = sporttournament28_pd[489] * x[371];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[490] = 2. * x[180];
	v[1] = sporttournament28_pd[490] * x[181];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[491] = 2. * x[180];
	v[2] = sporttournament28_pd[491] * x[275];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[492] = 2. * x[180];
	v[1] = sporttournament28_pd[492] * x[325];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[493] = 2. * x[180];
	v[2] = sporttournament28_pd[493] * x[326];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[494] = 2. * x[181];
	v[1] = sporttournament28_pd[494] * x[183];
	v[0] += v[1];
	sporttournament28_pd[495] = 2. * x[181];
	v[1] = sporttournament28_pd[495] * x[338];
	v[0] += v[1];
	sporttournament28_pd[496] = 2. * x[181];
	v[1] = sporttournament28_pd[496] * x[371];
	v[0] += v[1];
	sporttournament28_pd[497] = 2. * x[182];
	v[1] = sporttournament28_pd[497] * x[184];
	v[0] += v[1];
	sporttournament28_pd[498] = 2. * x[182];
	v[1] = sporttournament28_pd[498] * x[331];
	v[0] += v[1];
	sporttournament28_pd[499] = 2. * x[182];
	v[1] = sporttournament28_pd[499] * x[356];
	v[0] += v[1];
	sporttournament28_pd[500] = 2. * x[183];
	v[1] = sporttournament28_pd[500] * x[184];
	v[0] += v[1];
	sporttournament28_pd[501] = 2. * x[183];
	v[1] = sporttournament28_pd[501] * x[275];
	v[0] += v[1];
	sporttournament28_pd[502] = 2. * x[184];
	v[1] = sporttournament28_pd[502] * x[302];
	v[0] += v[1];
	sporttournament28_pd[503] = 2. * x[184];
	v[1] = sporttournament28_pd[503] * x[374];
	v[0] += v[1];
	sporttournament28_pd[504] = 2. * x[185];
	v[1] = sporttournament28_pd[504] * x[331];
	v[0] += v[1];
	sporttournament28_pd[505] = 2. * x[185];
	v[1] = sporttournament28_pd[505] * x[361];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[506] = 2. * x[186];
	v[2] = sporttournament28_pd[506] * x[187];
	v[0] += v[2];
	sporttournament28_pd[507] = 2. * x[186];
	v[2] = sporttournament28_pd[507] * x[264];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[508] = 2. * x[187];
	v[1] = sporttournament28_pd[508] * x[189];
	v[0] += v[1];
	sporttournament28_pd[509] = 2. * x[187];
	v[1] = sporttournament28_pd[509] * x[217];
	v[0] += v[1];
	sporttournament28_pd[510] = 2. * x[188];
	v[1] = sporttournament28_pd[510] * x[266];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[511] = 2. * x[188];
	v[2] = sporttournament28_pd[511] * x[287];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[512] = 2. * x[188];
	v[1] = sporttournament28_pd[512] * x[365];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[513] = 2. * x[189];
	v[2] = sporttournament28_pd[513] * x[257];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[514] = 2. * x[189];
	v[1] = sporttournament28_pd[514] * x[280];
	v[0] += v[1];
	sporttournament28_pd[515] = 2. * x[189];
	v[1] = sporttournament28_pd[515] * x[365];
	v[0] += v[1];
	sporttournament28_pd[516] = 2. * x[190];
	v[1] = sporttournament28_pd[516] * x[193];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[517] = 2. * x[190];
	v[2] = sporttournament28_pd[517] * x[267];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[518] = 2. * x[190];
	v[1] = sporttournament28_pd[518] * x[295];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[519] = 2. * x[190];
	v[2] = sporttournament28_pd[519] * x[296];
	v[0] += v[2];
	sporttournament28_pd[520] = 2. * x[191];
	v[2] = sporttournament28_pd[520] * x[193];
	v[0] += v[2];
	sporttournament28_pd[521] = 2. * x[191];
	v[2] = sporttournament28_pd[521] * x[312];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[522] = 2. * x[191];
	v[1] = sporttournament28_pd[522] * x[340];
	v[0] += v[1];
	sporttournament28_pd[523] = 2. * x[191];
	v[1] = sporttournament28_pd[523] * x[365];
	v[0] += v[1];
	sporttournament28_pd[524] = 2. * x[192];
	v[1] = sporttournament28_pd[524] * x[370];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[525] = 2. * x[193];
	v[2] = sporttournament28_pd[525] * x[194];
	v[0] += v[2];
	sporttournament28_pd[526] = 2. * x[193];
	v[2] = sporttournament28_pd[526] * x[370];
	v[0] += v[2];
	sporttournament28_pd[527] = 2. * x[194];
	v[2] = sporttournament28_pd[527] * x[195];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[528] = 2. * x[195];
	v[1] = sporttournament28_pd[528] * x[197];
	v[0] += v[1];
	sporttournament28_pd[529] = 2. * x[195];
	v[1] = sporttournament28_pd[529] * x[313];
	v[0] += v[1];
	sporttournament28_pd[530] = 2. * x[195];
	v[1] = sporttournament28_pd[530] * x[370];
	v[0] += v[1];
	sporttournament28_pd[531] = 2. * x[196];
	v[1] = sporttournament28_pd[531] * x[230];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[532] = 2. * x[197];
	v[2] = sporttournament28_pd[532] * x[230];
	v[0] += v[2];
	sporttournament28_pd[533] = 2. * x[197];
	v[2] = sporttournament28_pd[533] * x[281];
	v[0] += v[2];
	sporttournament28_pd[534] = 2. * x[198];
	v[2] = sporttournament28_pd[534] * x[200];
	v[0] += v[2];
	sporttournament28_pd[535] = 2. * x[199];
	v[2] = sporttournament28_pd[535] * x[201];
	v[0] += v[2];
	sporttournament28_pd[536] = 2. * x[200];
	v[2] = sporttournament28_pd[536] * x[201];
	v[0] += v[2];
	sporttournament28_pd[537] = 2. * x[200];
	v[2] = sporttournament28_pd[537] * x[230];
	v[0] += v[2];
	sporttournament28_pd[538] = 2. * x[201];
	v[2] = sporttournament28_pd[538] * x[203];
	v[0] += v[2];
	sporttournament28_pd[539] = 2. * x[202];
	v[2] = sporttournament28_pd[539] * x[204];
	v[0] += v[2];
	sporttournament28_pd[540] = 2. * x[203];
	v[2] = sporttournament28_pd[540] * x[204];
	v[0] += v[2];
	sporttournament28_pd[541] = 2. * x[203];
	v[2] = sporttournament28_pd[541] * x[234];
	v[0] += v[2];
	sporttournament28_pd[542] = 2. * x[203];
	v[2] = sporttournament28_pd[542] * x[245];
	v[0] += v[2];
	sporttournament28_pd[543] = 2. * x[204];
	v[2] = sporttournament28_pd[543] * x[349];
	v[0] += v[2];
	sporttournament28_pd[544] = 2. * x[205];
	v[2] = sporttournament28_pd[544] * x[260];
	v[0] += v[2];
	sporttournament28_pd[545] = 2. * x[205];
	v[2] = sporttournament28_pd[545] * x[262];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[546] = 2. * x[206];
	v[1] = sporttournament28_pd[546] * x[262];
	v[0] += v[1];
	sporttournament28_pd[547] = 2. * x[206];
	v[1] = sporttournament28_pd[547] * x[290];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[548] = 2. * x[206];
	v[2] = sporttournament28_pd[548] * x[349];
	v[0] += v[2];
	sporttournament28_pd[549] = 2. * x[207];
	v[2] = sporttournament28_pd[549] * x[209];
	v[0] += v[2];
	sporttournament28_pd[550] = 2. * x[207];
	v[2] = sporttournament28_pd[550] * x[249];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[551] = 2. * x[208];
	v[1] = sporttournament28_pd[551] * x[243];
	v[0] += v[1];
	sporttournament28_pd[552] = 2. * x[208];
	v[1] = sporttournament28_pd[552] * x[246];
	v[0] += v[1];
	sporttournament28_pd[553] = 2. * x[209];
	v[1] = sporttournament28_pd[553] * x[243];
	v[0] += v[1];
	sporttournament28_pd[554] = 2. * x[209];
	v[1] = sporttournament28_pd[554] * x[262];
	v[0] += v[1];
	sporttournament28_pd[555] = 2. * x[210];
	v[1] = sporttournament28_pd[555] * x[293];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[556] = 2. * x[210];
	v[2] = sporttournament28_pd[556] * x[367];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[557] = 2. * x[211];
	v[1] = sporttournament28_pd[557] * x[212];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[558] = 2. * x[211];
	v[2] = sporttournament28_pd[558] * x[282];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[559] = 2. * x[211];
	v[1] = sporttournament28_pd[559] * x[321];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[560] = 2. * x[212];
	v[2] = sporttournament28_pd[560] * x[214];
	v[0] += v[2];
	sporttournament28_pd[561] = 2. * x[212];
	v[2] = sporttournament28_pd[561] * x[344];
	v[0] += v[2];
	sporttournament28_pd[562] = 2. * x[212];
	v[2] = sporttournament28_pd[562] * x[367];
	v[0] += v[2];
	sporttournament28_pd[563] = 2. * x[213];
	v[2] = sporttournament28_pd[563] * x[215];
	v[0] += v[2];
	sporttournament28_pd[564] = 2. * x[213];
	v[2] = sporttournament28_pd[564] * x[351];
	v[0] += v[2];
	sporttournament28_pd[565] = 2. * x[214];
	v[2] = sporttournament28_pd[565] * x[215];
	v[0] += v[2];
	sporttournament28_pd[566] = 2. * x[214];
	v[2] = sporttournament28_pd[566] * x[254];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[567] = 2. * x[214];
	v[1] = sporttournament28_pd[567] * x[282];
	v[0] += v[1];
	sporttournament28_pd[568] = 2. * x[215];
	v[1] = sporttournament28_pd[568] * x[294];
	v[0] += v[1];
	sporttournament28_pd[569] = 2. * x[215];
	v[1] = sporttournament28_pd[569] * x[372];
	v[0] += v[1];
	sporttournament28_pd[570] = 2. * x[216];
	v[1] = sporttournament28_pd[570] * x[339];
	v[0] += v[1];
	sporttournament28_pd[571] = 2. * x[216];
	v[1] = sporttournament28_pd[571] * x[358];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[572] = 2. * x[217];
	v[2] = sporttournament28_pd[572] * x[219];
	v[0] += v[2];
	sporttournament28_pd[573] = 2. * x[217];
	v[2] = sporttournament28_pd[573] * x[272];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[574] = 2. * x[217];
	v[1] = sporttournament28_pd[574] * x[361];
	v[0] += v[1];
	sporttournament28_pd[575] = 2. * x[218];
	v[1] = sporttournament28_pd[575] * x[220];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[576] = 2. * x[218];
	v[2] = sporttournament28_pd[576] * x[263];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[577] = 2. * x[218];
	v[1] = sporttournament28_pd[577] * x[265];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[578] = 2. * x[219];
	v[2] = sporttournament28_pd[578] * x[220];
	v[0] += v[2];
	sporttournament28_pd[579] = 2. * x[219];
	v[2] = sporttournament28_pd[579] * x[311];
	v[0] += v[2];
	sporttournament28_pd[580] = 2. * x[219];
	v[2] = sporttournament28_pd[580] * x[318];
	v[0] += v[2];
	sporttournament28_pd[581] = 2. * x[220];
	v[2] = sporttournament28_pd[581] * x[222];
	v[0] += v[2];
	sporttournament28_pd[582] = 2. * x[221];
	v[2] = sporttournament28_pd[582] * x[224];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[583] = 2. * x[221];
	v[1] = sporttournament28_pd[583] * x[256];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[584] = 2. * x[221];
	v[2] = sporttournament28_pd[584] * x[259];
	v[0] += v[2];
	sporttournament28_pd[585] = 2. * x[221];
	v[2] = sporttournament28_pd[585] * x[332];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[586] = 2. * x[222];
	v[1] = sporttournament28_pd[586] * x[224];
	v[0] += v[1];
	sporttournament28_pd[587] = 2. * x[222];
	v[1] = sporttournament28_pd[587] * x[318];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[588] = 2. * x[222];
	v[2] = sporttournament28_pd[588] * x[362];
	v[0] += v[2];
	sporttournament28_pd[589] = 2. * x[223];
	v[2] = sporttournament28_pd[589] * x[226];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[590] = 2. * x[223];
	v[1] = sporttournament28_pd[590] * x[273];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[591] = 2. * x[223];
	v[2] = sporttournament28_pd[591] * x[287];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[592] = 2. * x[224];
	v[1] = sporttournament28_pd[592] * x[226];
	v[0] += v[1];
	sporttournament28_pd[593] = 2. * x[224];
	v[1] = sporttournament28_pd[593] * x[333];
	v[0] += v[1];
	sporttournament28_pd[594] = 2. * x[225];
	v[1] = sporttournament28_pd[594] * x[362];
	v[0] += v[1];
	sporttournament28_pd[595] = 2. * x[225];
	v[1] = sporttournament28_pd[595] * x[366];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[596] = 2. * x[226];
	v[2] = sporttournament28_pd[596] * x[366];
	v[0] += v[2];
	sporttournament28_pd[597] = 2. * x[227];
	v[2] = sporttournament28_pd[597] * x[228];
	v[0] += v[2];
	sporttournament28_pd[598] = 2. * x[227];
	v[2] = sporttournament28_pd[598] * x[229];
	v[0] += v[2];
	sporttournament28_pd[599] = 2. * x[227];
	v[2] = sporttournament28_pd[599] * x[304];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[600] = 2. * x[227];
	v[1] = sporttournament28_pd[600] * x[366];
	v[0] += v[1];
	sporttournament28_pd[601] = 2. * x[228];
	v[1] = sporttournament28_pd[601] * x[347];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[602] = 2. * x[228];
	v[2] = sporttournament28_pd[602] * x[348];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[603] = 2. * x[229];
	v[1] = sporttournament28_pd[603] * x[288];
	v[0] += v[1];
	sporttournament28_pd[604] = 2. * x[229];
	v[1] = sporttournament28_pd[604] * x[348];
	v[0] += v[1];
	sporttournament28_pd[605] = 2. * x[230];
	v[1] = sporttournament28_pd[605] * x[232];
	v[0] += v[1];
	sporttournament28_pd[606] = 2. * x[231];
	v[1] = sporttournament28_pd[606] * x[234];
	v[0] += v[1];
	sporttournament28_pd[607] = 2. * x[231];
	v[1] = sporttournament28_pd[607] * x[348];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[608] = 2. * x[232];
	v[2] = sporttournament28_pd[608] * x[234];
	v[0] += v[2];
	sporttournament28_pd[609] = 2. * x[232];
	v[2] = sporttournament28_pd[609] * x[348];
	v[0] += v[2];
	sporttournament28_pd[610] = 2. * x[233];
	v[2] = sporttournament28_pd[610] * x[236];
	v[0] += v[2];
	sporttournament28_pd[611] = 2. * x[234];
	v[2] = sporttournament28_pd[611] * x[236];
	v[0] += v[2];
	sporttournament28_pd[612] = 2. * x[235];
	v[2] = sporttournament28_pd[612] * x[237];
	v[0] += v[2];
	sporttournament28_pd[613] = 2. * x[236];
	v[2] = sporttournament28_pd[613] * x[237];
	v[0] += v[2];
	sporttournament28_pd[614] = 2. * x[237];
	v[2] = sporttournament28_pd[614] * x[238];
	v[0] += v[2];
	sporttournament28_pd[615] = 2. * x[237];
	v[2] = sporttournament28_pd[615] * x[260];
	v[0] += v[2];
	sporttournament28_pd[616] = 2. * x[238];
	v[2] = sporttournament28_pd[616] * x[239];
	v[0] += v[2];
	sporttournament28_pd[617] = 2. * x[238];
	v[2] = sporttournament28_pd[617] * x[320];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[618] = 2. * x[238];
	v[1] = sporttournament28_pd[618] * x[342];
	v[0] += v[1];
	sporttournament28_pd[619] = 2. * x[239];
	v[1] = sporttournament28_pd[619] * x[253];
	v[0] += v[1];
	sporttournament28_pd[620] = 2. * x[239];
	v[1] = sporttournament28_pd[620] * x[290];
	v[0] += v[1];
	sporttournament28_pd[621] = 2. * x[240];
	v[1] = sporttournament28_pd[621] * x[241];
	v[0] += v[1];
	sporttournament28_pd[622] = 2. * x[240];
	v[1] = sporttournament28_pd[622] * x[242];
	v[0] += v[1];
	sporttournament28_pd[623] = 2. * x[241];
	v[1] = sporttournament28_pd[623] * x[376];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[624] = 2. * x[242];
	v[2] = sporttournament28_pd[624] * x[253];
	v[0] += v[2];
	sporttournament28_pd[625] = 2. * x[242];
	v[2] = sporttournament28_pd[625] * x[376];
	v[0] += v[2];
	sporttournament28_pd[626] = 2. * x[243];
	v[2] = sporttournament28_pd[626] * x[377];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[627] = 2. * x[244];
	v[1] = sporttournament28_pd[627] * x[289];
	v[0] += v[1];
	sporttournament28_pd[628] = 2. * x[245];
	v[1] = sporttournament28_pd[628] * x[269];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[629] = 2. * x[246];
	v[2] = sporttournament28_pd[629] * x[247];
	v[0] += v[2];
	sporttournament28_pd[630] = 2. * x[247];
	v[2] = sporttournament28_pd[630] * x[253];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[631] = 2. * x[248];
	v[1] = sporttournament28_pd[631] * x[277];
	v[0] += v[1];
	sporttournament28_pd[632] = 2. * x[250];
	v[1] = sporttournament28_pd[632] * x[284];
	v[0] += v[1];
	sporttournament28_pd[633] = 2. * x[251];
	v[1] = sporttournament28_pd[633] * x[252];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[634] = 2. * x[251];
	v[2] = sporttournament28_pd[634] * x[312];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[635] = 2. * x[254];
	v[1] = sporttournament28_pd[635] * x[255];
	v[0] += v[1];
	sporttournament28_pd[636] = 2. * x[255];
	v[1] = sporttournament28_pd[636] * x[270];
	v[0] += v[1];
	sporttournament28_pd[637] = 2. * x[255];
	v[1] = sporttournament28_pd[637] * x[330];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[638] = 2. * x[255];
	v[2] = sporttournament28_pd[638] * x[331];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[639] = 2. * x[256];
	v[1] = sporttournament28_pd[639] * x[257];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[640] = 2. * x[258];
	v[2] = sporttournament28_pd[640] * x[259];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[641] = 2. * x[259];
	v[1] = sporttournament28_pd[641] * x[295];
	v[0] += v[1];
	sporttournament28_pd[642] = 2. * x[259];
	v[1] = sporttournament28_pd[642] * x[305];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[643] = 2. * x[260];
	v[2] = sporttournament28_pd[643] * x[324];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[644] = 2. * x[260];
	v[1] = sporttournament28_pd[644] * x[343];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[645] = 2. * x[261];
	v[2] = sporttournament28_pd[645] * x[262];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[646] = 2. * x[263];
	v[1] = sporttournament28_pd[646] * x[264];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[647] = 2. * x[264];
	v[2] = sporttournament28_pd[647] * x[294];
	v[0] += v[2];
	sporttournament28_pd[648] = 2. * x[264];
	v[2] = sporttournament28_pd[648] * x[322];
	v[0] += v[2];
	sporttournament28_pd[649] = 2. * x[265];
	v[2] = sporttournament28_pd[649] * x[266];
	v[0] += v[2];
	sporttournament28_pd[650] = 2. * x[265];
	v[2] = sporttournament28_pd[650] * x[296];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[651] = 2. * x[266];
	v[1] = sporttournament28_pd[651] * x[311];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[652] = 2. * x[269];
	v[2] = sporttournament28_pd[652] * x[335];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[653] = 2. * x[270];
	v[1] = sporttournament28_pd[653] * x[271];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[654] = 2. * x[271];
	v[2] = sporttournament28_pd[654] * x[309];
	v[0] += v[2];
	sporttournament28_pd[655] = 2. * x[271];
	v[2] = sporttournament28_pd[655] * x[330];
	v[0] += v[2];
	sporttournament28_pd[656] = 2. * x[272];
	v[2] = sporttournament28_pd[656] * x[302];
	v[0] += v[2];
	sporttournament28_pd[657] = 2. * x[272];
	v[2] = sporttournament28_pd[657] * x[317];
	v[0] += v[2];
	sporttournament28_pd[658] = 2. * x[274];
	v[2] = sporttournament28_pd[658] * x[306];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[659] = 2. * x[275];
	v[1] = sporttournament28_pd[659] * x[276];
	v[0] += v[1];
	sporttournament28_pd[660] = 2. * x[275];
	v[1] = sporttournament28_pd[660] * x[278];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[661] = 2. * x[276];
	v[2] = sporttournament28_pd[661] * x[321];
	v[0] += v[2];
	sporttournament28_pd[662] = 2. * x[276];
	v[2] = sporttournament28_pd[662] * x[337];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[663] = 2. * x[277];
	v[1] = sporttournament28_pd[663] * x[278];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[664] = 2. * x[277];
	v[2] = sporttournament28_pd[664] * x[310];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[665] = 2. * x[278];
	v[1] = sporttournament28_pd[665] * x[316];
	v[0] += v[1];
	sporttournament28_pd[666] = 2. * x[279];
	v[1] = sporttournament28_pd[666] * x[310];
	v[0] += v[1];
	sporttournament28_pd[667] = 2. * x[279];
	v[1] = sporttournament28_pd[667] * x[311];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[668] = 2. * x[280];
	v[2] = sporttournament28_pd[668] * x[318];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[669] = 2. * x[281];
	v[1] = sporttournament28_pd[669] * x[297];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[670] = 2. * x[282];
	v[2] = sporttournament28_pd[670] * x[283];
	v[0] += v[2];
	sporttournament28_pd[671] = 2. * x[282];
	v[2] = sporttournament28_pd[671] * x[285];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[672] = 2. * x[283];
	v[1] = sporttournament28_pd[672] * x[315];
	v[0] += v[1];
	sporttournament28_pd[673] = 2. * x[284];
	v[1] = sporttournament28_pd[673] * x[285];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[674] = 2. * x[284];
	v[2] = sporttournament28_pd[674] * x[303];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[675] = 2. * x[286];
	v[1] = sporttournament28_pd[675] * x[302];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[676] = 2. * x[286];
	v[2] = sporttournament28_pd[676] * x[303];
	v[0] += v[2];
	sporttournament28_pd[677] = 2. * x[289];
	v[2] = sporttournament28_pd[677] * x[298];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[678] = 2. * x[290];
	v[1] = sporttournament28_pd[678] * x[291];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[679] = 2. * x[291];
	v[2] = sporttournament28_pd[679] * x[363];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[680] = 2. * x[292];
	v[1] = sporttournament28_pd[680] * x[315];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[681] = 2. * x[293];
	v[2] = sporttournament28_pd[681] * x[308];
	v[0] += v[2];
	sporttournament28_pd[682] = 2. * x[293];
	v[2] = sporttournament28_pd[682] * x[351];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[683] = 2. * x[296];
	v[1] = sporttournament28_pd[683] * x[327];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[684] = 2. * x[297];
	v[2] = sporttournament28_pd[684] * x[341];
	v[0] += v[2];
	sporttournament28_pd[685] = 2. * x[299];
	v[2] = sporttournament28_pd[685] * x[359];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[686] = 2. * x[300];
	v[1] = sporttournament28_pd[686] * x[308];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[687] = 2. * x[301];
	v[2] = sporttournament28_pd[687] * x[354];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[688] = 2. * x[301];
	v[1] = sporttournament28_pd[688] * x[356];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[689] = 2. * x[302];
	v[2] = sporttournament28_pd[689] * x[316];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[690] = 2. * x[304];
	v[1] = sporttournament28_pd[690] * x[305];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[691] = 2. * x[305];
	v[2] = sporttournament28_pd[691] * x[346];
	v[0] += v[2];
	sporttournament28_pd[692] = 2. * x[305];
	v[2] = sporttournament28_pd[692] * x[373];
	v[0] += v[2];
	sporttournament28_pd[693] = 2. * x[307];
	v[2] = sporttournament28_pd[693] * x[353];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[694] = 2. * x[309];
	v[1] = sporttournament28_pd[694] * x[355];
	v[0] += v[1];
	sporttournament28_pd[695] = 2. * x[309];
	v[1] = sporttournament28_pd[695] * x[374];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[696] = 2. * x[310];
	v[2] = sporttournament28_pd[696] * x[331];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[697] = 2. * x[311];
	v[1] = sporttournament28_pd[697] * x[358];
	v[0] += v[1];
	sporttournament28_pd[698] = 2. * x[313];
	v[1] = sporttournament28_pd[698] * x[341];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[699] = 2. * x[314];
	v[2] = sporttournament28_pd[699] * x[349];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[700] = 2. * x[316];
	v[1] = sporttournament28_pd[700] * x[350];
	v[0] += v[1];
	sporttournament28_pd[701] = 2. * x[316];
	v[1] = sporttournament28_pd[701] * x[372];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[702] = 2. * x[317];
	v[2] = sporttournament28_pd[702] * x[339];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[703] = 2. * x[322];
	v[1] = sporttournament28_pd[703] * x[345];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[704] = 2. * x[323];
	v[2] = sporttournament28_pd[704] * x[328];
	v[0] += v[2];
	sporttournament28_pd[705] = 2. * x[326];
	v[2] = sporttournament28_pd[705] * x[367];
	v[0] += v[2];
	sporttournament28_pd[706] = 2. * x[328];
	v[2] = sporttournament28_pd[706] * x[373];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[707] = 2. * x[329];
	v[1] = sporttournament28_pd[707] * x[371];
	v[0] += v[1];
	sporttournament28_pd[708] = 2. * x[334];
	v[1] = sporttournament28_pd[708] * x[335];
	v[0] += v[1];
	sporttournament28_pd[709] = 2. * x[334];
	v[1] = sporttournament28_pd[709] * x[336];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[710] = 2. * x[335];
	v[2] = sporttournament28_pd[710] * x[359];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[711] = 2. * x[338];
	v[1] = sporttournament28_pd[711] * x[339];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[712] = 2. * x[339];
	v[2] = sporttournament28_pd[712] * x[355];
	v[0] += v[2];
	sporttournament28_pd[713] = 2. * x[340];
	v[2] = sporttournament28_pd[713] * x[352];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[714] = 2. * x[342];
	v[1] = sporttournament28_pd[714] * x[349];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[715] = 2. * x[343];
	v[2] = sporttournament28_pd[715] * x[363];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[716] = 2. * x[344];
	v[1] = sporttournament28_pd[716] * x[345];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[717] = 2. * x[345];
	v[2] = sporttournament28_pd[717] * x[350];
	v[0] += v[2];
	sporttournament28_pd[718] = 2. * x[346];
	v[2] = sporttournament28_pd[718] * x[369];
	v[0] += v[2];
	sporttournament28_pd[719] = 2. * x[350];
	v[2] = sporttournament28_pd[719] * x[351];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[720] = 2. * x[355];
	v[1] = sporttournament28_pd[720] * x[356];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[721] = 2. * x[357];
	v[2] = sporttournament28_pd[721] * x[358];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[722] = 2. * x[358];
	v[1] = sporttournament28_pd[722] * x[372];
	v[0] += v[1];
	sporttournament28_pd[723] = 2. * x[360];
	v[1] = sporttournament28_pd[723] * x[361];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[724] = 2. * x[361];
	v[2] = sporttournament28_pd[724] * x[374];
	v[0] += v[2];
	sporttournament28_pd[725] = 2. * x[362];
	v[2] = sporttournament28_pd[725] * x[365];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament28_pd[726] = 2. * x[375];
	v[1] = sporttournament28_pd[726] * x[376];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament28_pd[727] = 2. * x[376];
	v[2] = sporttournament28_pd[727] * x[377];
	v[0] += v[2];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += -4.*x[5];
	t1 += -2.*x[6];
	t1 += -2.*x[7];
	t1 += -4.*x[8];
	t1 += -2.*x[9];
	t1 += -2.*x[10];
	t1 += -2.*x[11];
	t1 += -2.*x[12];
	t1 += -2.*x[13];
	t1 += -2.*x[14];
	t1 += -2.*x[15];
	t1 += -2.*x[16];
	t1 += -2.*x[17];
	t1 += -2.*x[18];
	t1 += -2.*x[19];
	t1 += -4.*x[20];
	t1 += -2.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += -4.*x[24];
	t1 += -2.*x[25];
	t1 += -2.*x[26];
	t1 += -2.*x[27];
	t1 += -2.*x[28];
	t1 += -2.*x[29];
	t1 += -2.*x[30];
	t1 += -2.*x[31];
	t1 += -2.*x[32];
	t1 += -4.*x[33];
	t1 += -2.*x[34];
	t1 += -4.*x[35];
	t1 += -2.*x[36];
	t1 += -2.*x[37];
	t1 += -2.*x[38];
	t1 += -4.*x[39];
	t1 += 2.*x[40];
	t1 += -4.*x[41];
	t1 += -2.*x[42];
	t1 += -4.*x[43];
	t1 += -2.*x[44];
	t1 += 2.*x[45];
	t1 += -2.*x[46];
	t1 += -2.*x[47];
	t1 += -4.*x[48];
	t1 += -2.*x[49];
	t1 += -2.*x[50];
	t1 += -2.*x[51];
	t1 += 2.*x[52];
	t1 += -2.*x[53];
	t1 += -4.*x[54];
	t1 += -2.*x[55];
	t1 += -2.*x[56];
	t1 += -4.*x[57];
	t1 += -2.*x[58];
	t1 += -2.*x[59];
	t1 += -4.*x[60];
	t1 += -4.*x[61];
	t1 += -2.*x[62];
	t1 += -4.*x[63];
	t1 += -2.*x[64];
	t1 += -2.*x[65];
	t1 += -4.*x[66];
	t1 += 2.*x[67];
	t1 += 2.*x[68];
	t1 += -2.*x[69];
	t1 += -2.*x[70];
	t1 += -2.*x[71];
	t1 += -2.*x[72];
	t1 += 2.*x[73];
	t1 += 2.*x[74];
	t1 += -4.*x[75];
	t1 += -2.*x[76];
	t1 += -2.*x[77];
	t1 += -4.*x[78];
	t1 += -4.*x[79];
	t1 += -4.*x[80];
	t1 += -2.*x[81];
	t1 += -2.*x[82];
	t1 += -2.*x[83];
	t1 += -4.*x[84];
	t1 += 2.*x[85];
	t1 += -2.*x[86];
	t1 += -2.*x[87];
	t1 += -2.*x[88];
	t1 += -2.*x[89];
	t1 += 4.*x[90];
	t1 += 2.*x[91];
	t1 += -2.*x[92];
	t1 += -2.*x[93];
	t1 += -4.*x[94];
	t1 += -4.*x[95];
	t1 += -4.*x[96];
	t1 += 2.*x[97];
	t1 += -4.*x[98];
	t1 += -2.*x[99];
	t1 += -4.*x[100];
	t1 += -4.*x[101];
	t1 += -2.*x[102];
	t1 += -2.*x[103];
	t1 += 2.*x[104];
	t1 += -2.*x[105];
	t1 += -2.*x[106];
	t1 += -2.*x[107];
	t1 += -2.*x[108];
	t1 += -2.*x[109];
	t1 += -2.*x[110];
	t1 += 2.*x[111];
	t1 += 4.*x[112];
	t1 += 2.*x[113];
	t1 += -2.*x[114];
	t1 += -4.*x[115];
	t1 += -4.*x[116];
	t1 += -4.*x[117];
	t1 += -4.*x[118];
	t1 += -4.*x[119];
	t1 += 2.*x[120];
	t1 += -2.*x[121];
	t1 += -4.*x[122];
	t1 += 2.*x[123];
	t1 += -4.*x[124];
	t1 += -2.*x[125];
	t1 += -2.*x[126];
	t1 += 2.*x[127];
	t1 += -2.*x[128];
	t1 += -2.*x[129];
	t1 += 2.*x[130];
	t1 += -2.*x[131];
	t1 += -4.*x[132];
	t1 += -2.*x[133];
	t1 += -2.*x[134];
	t1 += -2.*x[135];
	t1 += -4.*x[136];
	t1 += -2.*x[137];
	t1 += 4.*x[138];
	t1 += -4.*x[139];
	t1 += -2.*x[140];
	t1 += -4.*x[141];
	t1 += -2.*x[142];
	t1 += -4.*x[143];
	t1 += -4.*x[144];
	t1 += -4.*x[145];
	t1 += 2.*x[146];
	t1 += -2.*x[147];
	t1 += -4.*x[148];
	t1 += -4.*x[149];
	t1 += -4.*x[150];
	t1 += -2.*x[151];
	t1 += -2.*x[152];
	t1 += 2.*x[153];
	t1 += -4.*x[154];
	t1 += -2.*x[155];
	t1 += 2.*x[156];
	t1 += -2.*x[157];
	t1 += -4.*x[158];
	t1 += 2.*x[159];
	t1 += -2.*x[160];
	t1 += -2.*x[161];
	t1 += 2.*x[162];
	t1 += 2.*x[163];
	t1 += -2.*x[164];
	t1 += 2.*x[165];
	t1 += -4.*x[166];
	t1 += -2.*x[167];
	t1 += -4.*x[168];
	t1 += -2.*x[169];
	t1 += -4.*x[170];
	t1 += -4.*x[171];
	t1 += -2.*x[172];
	t1 += -4.*x[173];
	t1 += 2.*x[174];
	t1 += 2.*x[175];
	t1 += -2.*x[176];
	t1 += -4.*x[177];
	t1 += -4.*x[178];
	t1 += 2.*x[179];
	t1 += 4.*x[180];
	t1 += -2.*x[181];
	t1 += -2.*x[182];
	t1 += -2.*x[183];
	t1 += -4.*x[184];
	t1 += -2.*x[185];
	t1 += -2.*x[186];
	t1 += -4.*x[187];
	t1 += 2.*x[188];
	t1 += -2.*x[189];
	t1 += 2.*x[190];
	t1 += -2.*x[191];
	t1 += 2.*x[192];
	t1 += -2.*x[193];
	t1 += 2.*x[194];
	t1 += -2.*x[195];
	t1 += 2.*x[196];
	t1 += -4.*x[197];
	t1 += -2.*x[198];
	t1 += -4.*x[199];
	t1 += -2.*x[200];
	t1 += -4.*x[201];
	t1 += -4.*x[202];
	t1 += -4.*x[203];
	t1 += -4.*x[204];
	t1 += 2.*x[205];
	t1 += -2.*x[206];
	t1 += -2.*x[207];
	t1 += -2.*x[208];
	t1 += -4.*x[209];
	t1 += 2.*x[210];
	t1 += 2.*x[211];
	t1 += -2.*x[212];
	t1 += -2.*x[213];
	t1 += -2.*x[214];
	t1 += -4.*x[215];
	t1 += -2.*x[216];
	t1 += -2.*x[217];
	t1 += 2.*x[218];
	t1 += -4.*x[219];
	t1 += -2.*x[220];
	t1 += 2.*x[221];
	t1 += -2.*x[222];
	t1 += 2.*x[223];
	t1 += -2.*x[224];
	t1 += 2.*x[225];
	t1 += -2.*x[226];
	t1 += -2.*x[227];
	t1 += 2.*x[228];
	t1 += -4.*x[229];
	t1 += -2.*x[230];
	t1 += -2.*x[231];
	t1 += -2.*x[232];
	t1 += -4.*x[233];
	t1 += -4.*x[234];
	t1 += -4.*x[235];
	t1 += -4.*x[236];
	t1 += -4.*x[237];
	t1 += -2.*x[238];
	t1 += -4.*x[239];
	t1 += -2.*x[240];
	t1 += -2.*x[241];
	t1 += -4.*x[242];
	t1 += -2.*x[243];
	t1 += x[378];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[377] = sporttournament28_pd[727];
	J[376] = x[377]*2.;
	J[376] -= sporttournament28_pd[726];
	J[375] = -x[376]*2.;
	J[365] = -sporttournament28_pd[725];
	J[362] = -x[365]*2.;
	J[374] = sporttournament28_pd[724];
	J[361] = x[374]*2.;
	J[361] -= sporttournament28_pd[723];
	J[360] = -x[361]*2.;
	J[372] = sporttournament28_pd[722];
	J[358] = x[372]*2.;
	J[358] -= sporttournament28_pd[721];
	J[357] = -x[358]*2.;
	J[356] = -sporttournament28_pd[720];
	J[355] = -x[356]*2.;
	J[351] = -sporttournament28_pd[719];
	J[350] = -x[351]*2.;
	J[369] = sporttournament28_pd[718];
	J[346] = x[369]*2.;
	J[350] += sporttournament28_pd[717];
	J[345] = x[350]*2.;
	J[345] -= sporttournament28_pd[716];
	J[344] = -x[345]*2.;
	J[363] = -sporttournament28_pd[715];
	J[343] = -x[363]*2.;
	J[349] = -sporttournament28_pd[714];
	J[342] = -x[349]*2.;
	J[352] = -sporttournament28_pd[713];
	J[340] = -x[352]*2.;
	J[355] += sporttournament28_pd[712];
	J[339] = x[355]*2.;
	J[339] -= sporttournament28_pd[711];
	J[338] = -x[339]*2.;
	J[359] = -sporttournament28_pd[710];
	J[335] = -x[359]*2.;
	J[336] = -sporttournament28_pd[709];
	J[334] = -x[336]*2.;
	J[335] += sporttournament28_pd[708];
	J[334] += x[335]*2.;
	J[371] = sporttournament28_pd[707];
	J[329] = x[371]*2.;
	J[373] = -sporttournament28_pd[706];
	J[328] = -x[373]*2.;
	J[367] = sporttournament28_pd[705];
	J[326] = x[367]*2.;
	J[328] += sporttournament28_pd[704];
	J[323] = x[328]*2.;
	J[345] -= sporttournament28_pd[703];
	J[322] = -x[345]*2.;
	J[339] -= sporttournament28_pd[702];
	J[317] = -x[339]*2.;
	J[372] -= sporttournament28_pd[701];
	J[316] = -x[372]*2.;
	J[350] += sporttournament28_pd[700];
	J[316] += x[350]*2.;
	J[349] -= sporttournament28_pd[699];
	J[314] = -x[349]*2.;
	J[341] = -sporttournament28_pd[698];
	J[313] = -x[341]*2.;
	J[358] += sporttournament28_pd[697];
	J[311] = x[358]*2.;
	J[331] = -sporttournament28_pd[696];
	J[310] = -x[331]*2.;
	J[374] -= sporttournament28_pd[695];
	J[309] = -x[374]*2.;
	J[355] += sporttournament28_pd[694];
	J[309] += x[355]*2.;
	J[353] = -sporttournament28_pd[693];
	J[307] = -x[353]*2.;
	J[373] += sporttournament28_pd[692];
	J[305] = x[373]*2.;
	J[346] += sporttournament28_pd[691];
	J[305] += x[346]*2.;
	J[305] -= sporttournament28_pd[690];
	J[304] = -x[305]*2.;
	J[316] -= sporttournament28_pd[689];
	J[302] = -x[316]*2.;
	J[356] -= sporttournament28_pd[688];
	J[301] = -x[356]*2.;
	J[354] = -sporttournament28_pd[687];
	J[301] -= x[354]*2.;
	J[308] = -sporttournament28_pd[686];
	J[300] = -x[308]*2.;
	J[359] -= sporttournament28_pd[685];
	J[299] = -x[359]*2.;
	J[341] += sporttournament28_pd[684];
	J[297] = x[341]*2.;
	J[327] = -sporttournament28_pd[683];
	J[296] = -x[327]*2.;
	J[351] -= sporttournament28_pd[682];
	J[293] = -x[351]*2.;
	J[308] += sporttournament28_pd[681];
	J[293] += x[308]*2.;
	J[315] = -sporttournament28_pd[680];
	J[292] = -x[315]*2.;
	J[363] -= sporttournament28_pd[679];
	J[291] = -x[363]*2.;
	J[291] -= sporttournament28_pd[678];
	J[290] = -x[291]*2.;
	J[298] = -sporttournament28_pd[677];
	J[289] = -x[298]*2.;
	J[303] = sporttournament28_pd[676];
	J[286] = x[303]*2.;
	J[302] -= sporttournament28_pd[675];
	J[286] -= x[302]*2.;
	J[303] -= sporttournament28_pd[674];
	J[284] = -x[303]*2.;
	J[285] = -sporttournament28_pd[673];
	J[284] -= x[285]*2.;
	J[315] += sporttournament28_pd[672];
	J[283] = x[315]*2.;
	J[285] -= sporttournament28_pd[671];
	J[282] = -x[285]*2.;
	J[283] += sporttournament28_pd[670];
	J[282] += x[283]*2.;
	J[297] -= sporttournament28_pd[669];
	J[281] = -x[297]*2.;
	J[318] = -sporttournament28_pd[668];
	J[280] = -x[318]*2.;
	J[311] -= sporttournament28_pd[667];
	J[279] = -x[311]*2.;
	J[310] += sporttournament28_pd[666];
	J[279] += x[310]*2.;
	J[316] += sporttournament28_pd[665];
	J[278] = x[316]*2.;
	J[310] -= sporttournament28_pd[664];
	J[277] = -x[310]*2.;
	J[278] -= sporttournament28_pd[663];
	J[277] -= x[278]*2.;
	J[337] = -sporttournament28_pd[662];
	J[276] = -x[337]*2.;
	J[321] = sporttournament28_pd[661];
	J[276] += x[321]*2.;
	J[278] -= sporttournament28_pd[660];
	J[275] = -x[278]*2.;
	J[276] += sporttournament28_pd[659];
	J[275] += x[276]*2.;
	J[306] = -sporttournament28_pd[658];
	J[274] = -x[306]*2.;
	J[317] += sporttournament28_pd[657];
	J[272] = x[317]*2.;
	J[302] += sporttournament28_pd[656];
	J[272] += x[302]*2.;
	J[330] = sporttournament28_pd[655];
	J[271] = x[330]*2.;
	J[309] += sporttournament28_pd[654];
	J[271] += x[309]*2.;
	J[271] -= sporttournament28_pd[653];
	J[270] = -x[271]*2.;
	J[335] -= sporttournament28_pd[652];
	J[269] = -x[335]*2.;
	J[311] -= sporttournament28_pd[651];
	J[266] = -x[311]*2.;
	J[296] -= sporttournament28_pd[650];
	J[265] = -x[296]*2.;
	J[266] += sporttournament28_pd[649];
	J[265] += x[266]*2.;
	J[322] += sporttournament28_pd[648];
	J[264] = x[322]*2.;
	J[294] = sporttournament28_pd[647];
	J[264] += x[294]*2.;
	J[264] -= sporttournament28_pd[646];
	J[263] = -x[264]*2.;
	J[262] = -sporttournament28_pd[645];
	J[261] = -x[262]*2.;
	J[343] -= sporttournament28_pd[644];
	J[260] = -x[343]*2.;
	J[324] = -sporttournament28_pd[643];
	J[260] -= x[324]*2.;
	J[305] -= sporttournament28_pd[642];
	J[259] = -x[305]*2.;
	J[295] = sporttournament28_pd[641];
	J[259] += x[295]*2.;
	J[259] -= sporttournament28_pd[640];
	J[258] = -x[259]*2.;
	J[257] = -sporttournament28_pd[639];
	J[256] = -x[257]*2.;
	J[331] -= sporttournament28_pd[638];
	J[255] = -x[331]*2.;
	J[330] -= sporttournament28_pd[637];
	J[255] -= x[330]*2.;
	J[270] += sporttournament28_pd[636];
	J[255] += x[270]*2.;
	J[255] += sporttournament28_pd[635];
	J[254] = x[255]*2.;
	J[312] = -sporttournament28_pd[634];
	J[251] = -x[312]*2.;
	J[252] = -sporttournament28_pd[633];
	J[251] -= x[252]*2.;
	J[284] += sporttournament28_pd[632];
	J[250] = x[284]*2.;
	J[277] += sporttournament28_pd[631];
	J[248] = x[277]*2.;
	J[253] = -sporttournament28_pd[630];
	J[247] = -x[253]*2.;
	J[247] += sporttournament28_pd[629];
	J[246] = x[247]*2.;
	J[269] -= sporttournament28_pd[628];
	J[245] = -x[269]*2.;
	J[289] += sporttournament28_pd[627];
	J[244] = x[289]*2.;
	J[377] -= sporttournament28_pd[626];
	J[243] = -x[377]*2. + -2.;
	J[376] += sporttournament28_pd[625];
	J[242] = x[376]*2. + -4.;
	J[253] += sporttournament28_pd[624];
	J[242] += x[253]*2.;
	J[376] -= sporttournament28_pd[623];
	J[241] = -x[376]*2. + -2.;
	J[242] += sporttournament28_pd[622];
	J[240] = x[242]*2. + -2.;
	J[241] += sporttournament28_pd[621];
	J[240] += x[241]*2.;
	J[290] += sporttournament28_pd[620];
	J[239] = x[290]*2. + -4.;
	J[253] += sporttournament28_pd[619];
	J[239] += x[253]*2.;
	J[342] += sporttournament28_pd[618];
	J[238] = x[342]*2. + -2.;
	J[320] = -sporttournament28_pd[617];
	J[238] -= x[320]*2.;
	J[239] += sporttournament28_pd[616];
	J[238] += x[239]*2.;
	J[260] += sporttournament28_pd[615];
	J[237] = x[260]*2. + -4.;
	J[238] += sporttournament28_pd[614];
	J[237] += x[238]*2.;
	J[237] += sporttournament28_pd[613];
	J[236] = x[237]*2. + -4.;
	J[237] += sporttournament28_pd[612];
	J[235] = x[237]*2. + -4.;
	J[236] += sporttournament28_pd[611];
	J[234] = x[236]*2. + -4.;
	J[236] += sporttournament28_pd[610];
	J[233] = x[236]*2. + -4.;
	J[348] = sporttournament28_pd[609];
	J[232] = x[348]*2. + -2.;
	J[234] += sporttournament28_pd[608];
	J[232] += x[234]*2.;
	J[348] -= sporttournament28_pd[607];
	J[231] = -x[348]*2. + -2.;
	J[234] += sporttournament28_pd[606];
	J[231] += x[234]*2.;
	J[232] += sporttournament28_pd[605];
	J[230] = x[232]*2. + -2.;
	J[348] += sporttournament28_pd[604];
	J[229] = x[348]*2. + -4.;
	J[288] = sporttournament28_pd[603];
	J[229] += x[288]*2.;
	J[348] -= sporttournament28_pd[602];
	J[228] = -x[348]*2. + 2.;
	J[347] = -sporttournament28_pd[601];
	J[228] -= x[347]*2.;
	J[366] = sporttournament28_pd[600];
	J[227] = x[366]*2. + -2.;
	J[304] -= sporttournament28_pd[599];
	J[227] -= x[304]*2.;
	J[229] += sporttournament28_pd[598];
	J[227] += x[229]*2.;
	J[228] += sporttournament28_pd[597];
	J[227] += x[228]*2.;
	J[366] += sporttournament28_pd[596];
	J[226] = x[366]*2. + -2.;
	J[366] -= sporttournament28_pd[595];
	J[225] = -x[366]*2. + 2.;
	J[362] += sporttournament28_pd[594];
	J[225] += x[362]*2.;
	J[333] = sporttournament28_pd[593];
	J[224] = x[333]*2. + -2.;
	J[226] += sporttournament28_pd[592];
	J[224] += x[226]*2.;
	J[287] = -sporttournament28_pd[591];
	J[223] = -x[287]*2. + 2.;
	J[273] = -sporttournament28_pd[590];
	J[223] -= x[273]*2.;
	J[226] -= sporttournament28_pd[589];
	J[223] -= x[226]*2.;
	J[362] += sporttournament28_pd[588];
	J[222] = x[362]*2. + -2.;
	J[318] -= sporttournament28_pd[587];
	J[222] -= x[318]*2.;
	J[224] += sporttournament28_pd[586];
	J[222] += x[224]*2.;
	J[332] = -sporttournament28_pd[585];
	J[221] = -x[332]*2. + 2.;
	J[259] += sporttournament28_pd[584];
	J[221] += x[259]*2.;
	J[256] -= sporttournament28_pd[583];
	J[221] -= x[256]*2.;
	J[224] -= sporttournament28_pd[582];
	J[221] -= x[224]*2.;
	J[222] += sporttournament28_pd[581];
	J[220] = x[222]*2. + -2.;
	J[318] += sporttournament28_pd[580];
	J[219] = x[318]*2. + -4.;
	J[311] += sporttournament28_pd[579];
	J[219] += x[311]*2.;
	J[220] += sporttournament28_pd[578];
	J[219] += x[220]*2.;
	J[265] -= sporttournament28_pd[577];
	J[218] = -x[265]*2. + 2.;
	J[263] -= sporttournament28_pd[576];
	J[218] -= x[263]*2.;
	J[220] -= sporttournament28_pd[575];
	J[218] -= x[220]*2.;
	J[361] += sporttournament28_pd[574];
	J[217] = x[361]*2. + -2.;
	J[272] -= sporttournament28_pd[573];
	J[217] -= x[272]*2.;
	J[219] += sporttournament28_pd[572];
	J[217] += x[219]*2.;
	J[358] -= sporttournament28_pd[571];
	J[216] = -x[358]*2. + -2.;
	J[339] += sporttournament28_pd[570];
	J[216] += x[339]*2.;
	J[372] += sporttournament28_pd[569];
	J[215] = x[372]*2. + -4.;
	J[294] += sporttournament28_pd[568];
	J[215] += x[294]*2.;
	J[282] += sporttournament28_pd[567];
	J[214] = x[282]*2. + -2.;
	J[254] -= sporttournament28_pd[566];
	J[214] -= x[254]*2.;
	J[215] += sporttournament28_pd[565];
	J[214] += x[215]*2.;
	J[351] += sporttournament28_pd[564];
	J[213] = x[351]*2. + -2.;
	J[215] += sporttournament28_pd[563];
	J[213] += x[215]*2.;
	J[367] += sporttournament28_pd[562];
	J[212] = x[367]*2. + -2.;
	J[344] += sporttournament28_pd[561];
	J[212] += x[344]*2.;
	J[214] += sporttournament28_pd[560];
	J[212] += x[214]*2.;
	J[321] -= sporttournament28_pd[559];
	J[211] = -x[321]*2. + 2.;
	J[282] -= sporttournament28_pd[558];
	J[211] -= x[282]*2.;
	J[212] -= sporttournament28_pd[557];
	J[211] -= x[212]*2.;
	J[367] -= sporttournament28_pd[556];
	J[210] = -x[367]*2. + 2.;
	J[293] -= sporttournament28_pd[555];
	J[210] -= x[293]*2.;
	J[262] += sporttournament28_pd[554];
	J[209] = x[262]*2. + -4.;
	J[243] += sporttournament28_pd[553];
	J[209] += x[243]*2.;
	J[246] += sporttournament28_pd[552];
	J[208] = x[246]*2. + -2.;
	J[243] += sporttournament28_pd[551];
	J[208] += x[243]*2.;
	J[249] = -sporttournament28_pd[550];
	J[207] = -x[249]*2. + -2.;
	J[209] += sporttournament28_pd[549];
	J[207] += x[209]*2.;
	J[349] += sporttournament28_pd[548];
	J[206] = x[349]*2. + -2.;
	J[290] -= sporttournament28_pd[547];
	J[206] -= x[290]*2.;
	J[262] += sporttournament28_pd[546];
	J[206] += x[262]*2.;
	J[262] -= sporttournament28_pd[545];
	J[205] = -x[262]*2. + 2.;
	J[260] += sporttournament28_pd[544];
	J[205] += x[260]*2.;
	J[349] += sporttournament28_pd[543];
	J[204] = x[349]*2. + -4.;
	J[245] += sporttournament28_pd[542];
	J[203] = x[245]*2. + -4.;
	J[234] += sporttournament28_pd[541];
	J[203] += x[234]*2.;
	J[204] += sporttournament28_pd[540];
	J[203] += x[204]*2.;
	J[204] += sporttournament28_pd[539];
	J[202] = x[204]*2. + -4.;
	J[203] += sporttournament28_pd[538];
	J[201] = x[203]*2. + -4.;
	J[230] += sporttournament28_pd[537];
	J[200] = x[230]*2. + -2.;
	J[201] += sporttournament28_pd[536];
	J[200] += x[201]*2.;
	J[201] += sporttournament28_pd[535];
	J[199] = x[201]*2. + -4.;
	J[200] += sporttournament28_pd[534];
	J[198] = x[200]*2. + -2.;
	J[281] += sporttournament28_pd[533];
	J[197] = x[281]*2. + -4.;
	J[230] += sporttournament28_pd[532];
	J[197] += x[230]*2.;
	J[230] -= sporttournament28_pd[531];
	J[196] = -x[230]*2. + 2.;
	J[370] = sporttournament28_pd[530];
	J[195] = x[370]*2. + -2.;
	J[313] += sporttournament28_pd[529];
	J[195] += x[313]*2.;
	J[197] += sporttournament28_pd[528];
	J[195] += x[197]*2.;
	J[195] -= sporttournament28_pd[527];
	J[194] = -x[195]*2. + 2.;
	J[370] += sporttournament28_pd[526];
	J[193] = x[370]*2. + -2.;
	J[194] += sporttournament28_pd[525];
	J[193] += x[194]*2.;
	J[370] -= sporttournament28_pd[524];
	J[192] = -x[370]*2. + 2.;
	J[365] += sporttournament28_pd[523];
	J[191] = x[365]*2. + -2.;
	J[340] += sporttournament28_pd[522];
	J[191] += x[340]*2.;
	J[312] -= sporttournament28_pd[521];
	J[191] -= x[312]*2.;
	J[193] += sporttournament28_pd[520];
	J[191] += x[193]*2.;
	J[296] += sporttournament28_pd[519];
	J[190] = x[296]*2. + 2.;
	J[295] -= sporttournament28_pd[518];
	J[190] -= x[295]*2.;
	J[267] = -sporttournament28_pd[517];
	J[190] -= x[267]*2.;
	J[193] -= sporttournament28_pd[516];
	J[190] -= x[193]*2.;
	J[365] += sporttournament28_pd[515];
	J[189] = x[365]*2. + -2.;
	J[280] += sporttournament28_pd[514];
	J[189] += x[280]*2.;
	J[257] -= sporttournament28_pd[513];
	J[189] -= x[257]*2.;
	J[365] -= sporttournament28_pd[512];
	J[188] = -x[365]*2. + 2.;
	J[287] -= sporttournament28_pd[511];
	J[188] -= x[287]*2.;
	J[266] -= sporttournament28_pd[510];
	J[188] -= x[266]*2.;
	J[217] += sporttournament28_pd[509];
	J[187] = x[217]*2. + -4.;
	J[189] += sporttournament28_pd[508];
	J[187] += x[189]*2.;
	J[264] -= sporttournament28_pd[507];
	J[186] = -x[264]*2. + -2.;
	J[187] += sporttournament28_pd[506];
	J[186] += x[187]*2.;
	J[361] -= sporttournament28_pd[505];
	J[185] = -x[361]*2. + -2.;
	J[331] += sporttournament28_pd[504];
	J[185] += x[331]*2.;
	J[374] += sporttournament28_pd[503];
	J[184] = x[374]*2. + -4.;
	J[302] += sporttournament28_pd[502];
	J[184] += x[302]*2.;
	J[275] += sporttournament28_pd[501];
	J[183] = x[275]*2. + -2.;
	J[184] += sporttournament28_pd[500];
	J[183] += x[184]*2.;
	J[356] += sporttournament28_pd[499];
	J[182] = x[356]*2. + -2.;
	J[331] += sporttournament28_pd[498];
	J[182] += x[331]*2.;
	J[184] += sporttournament28_pd[497];
	J[182] += x[184]*2.;
	J[371] += sporttournament28_pd[496];
	J[181] = x[371]*2. + -2.;
	J[338] += sporttournament28_pd[495];
	J[181] += x[338]*2.;
	J[183] += sporttournament28_pd[494];
	J[181] += x[183]*2.;
	J[326] -= sporttournament28_pd[493];
	J[180] = -x[326]*2. + 4.;
	J[325] = -sporttournament28_pd[492];
	J[180] -= x[325]*2.;
	J[275] -= sporttournament28_pd[491];
	J[180] -= x[275]*2.;
	J[181] -= sporttournament28_pd[490];
	J[180] -= x[181]*2.;
	J[371] -= sporttournament28_pd[489];
	J[179] = -x[371]*2. + 2.;
	J[283] -= sporttournament28_pd[488];
	J[179] -= x[283]*2.;
	J[375] += sporttournament28_pd[487];
	J[178] = x[375]*2. + -4.;
	J[261] += sporttournament28_pd[486];
	J[178] += x[261]*2.;
	J[241] += sporttournament28_pd[485];
	J[177] = x[241]*2. + -4.;
	J[239] += sporttournament28_pd[484];
	J[177] += x[239]*2.;
	J[353] += sporttournament28_pd[483];
	J[176] = x[353]*2. + -2.;
	J[240] += sporttournament28_pd[482];
	J[176] += x[240]*2.;
	J[269] += sporttournament28_pd[481];
	J[175] = x[269]*2. + 2.;
	J[246] -= sporttournament28_pd[480];
	J[175] -= x[246]*2.;
	J[240] -= sporttournament28_pd[479];
	J[175] -= x[240]*2.;
	J[299] -= sporttournament28_pd[478];
	J[174] = -x[299]*2. + 2.;
	J[249] -= sporttournament28_pd[477];
	J[174] -= x[249]*2.;
	J[176] -= sporttournament28_pd[476];
	J[174] -= x[176]*2.;
	J[353] += sporttournament28_pd[475];
	J[173] = x[353]*2. + -4.;
	J[245] -= sporttournament28_pd[474];
	J[172] = -x[245]*2. + -2.;
	J[201] += sporttournament28_pd[473];
	J[172] += x[201]*2.;
	J[173] += sporttournament28_pd[472];
	J[172] += x[173]*2.;
	J[173] += sporttournament28_pd[471];
	J[171] = x[173]*2. + -4.;
	J[235] += sporttournament28_pd[470];
	J[170] = x[235]*2. + -4.;
	J[172] += sporttournament28_pd[469];
	J[170] += x[172]*2.;
	J[198] += sporttournament28_pd[468];
	J[169] = x[198]*2. + -2.;
	J[170] += sporttournament28_pd[467];
	J[169] += x[170]*2.;
	J[170] += sporttournament28_pd[466];
	J[168] = x[170]*2. + -4.;
	J[297] -= sporttournament28_pd[465];
	J[167] = -x[297]*2. + -2.;
	J[169] += sporttournament28_pd[464];
	J[167] += x[169]*2.;
	J[274] += sporttournament28_pd[463];
	J[166] = x[274]*2. + -4.;
	J[198] += sporttournament28_pd[462];
	J[166] += x[198]*2.;
	J[347] += sporttournament28_pd[461];
	J[165] = x[347]*2. + 2.;
	J[289] -= sporttournament28_pd[460];
	J[165] -= x[289]*2.;
	J[288] -= sporttournament28_pd[459];
	J[165] -= x[288]*2.;
	J[198] -= sporttournament28_pd[458];
	J[165] -= x[198]*2.;
	J[373] += sporttournament28_pd[457];
	J[164] = x[373]*2. + -2.;
	J[319] = sporttournament28_pd[456];
	J[164] += x[319]*2.;
	J[166] += sporttournament28_pd[455];
	J[164] += x[166]*2.;
	J[288] -= sporttournament28_pd[454];
	J[163] = -x[288]*2. + 2.;
	J[226] += sporttournament28_pd[453];
	J[163] += x[226]*2.;
	J[192] -= sporttournament28_pd[452];
	J[163] -= x[192]*2.;
	J[164] -= sporttournament28_pd[451];
	J[163] -= x[164]*2.;
	J[373] -= sporttournament28_pd[450];
	J[162] = -x[373]*2. + 2.;
	J[352] += sporttournament28_pd[449];
	J[162] += x[352]*2.;
	J[194] -= sporttournament28_pd[448];
	J[162] -= x[194]*2.;
	J[346] -= sporttournament28_pd[447];
	J[161] = -x[346]*2. + -2.;
	J[332] += sporttournament28_pd[446];
	J[161] += x[332]*2.;
	J[251] += sporttournament28_pd[445];
	J[161] += x[251]*2.;
	J[369] += sporttournament28_pd[444];
	J[160] = x[369]*2. + -2.;
	J[287] += sporttournament28_pd[443];
	J[160] += x[287]*2.;
	J[252] -= sporttournament28_pd[442];
	J[160] -= x[252]*2.;
	J[369] -= sporttournament28_pd[441];
	J[159] = -x[369]*2. + 2.;
	J[295] -= sporttournament28_pd[440];
	J[159] -= x[295]*2.;
	J[327] += sporttournament28_pd[439];
	J[158] = x[327]*2. + -4.;
	J[186] += sporttournament28_pd[438];
	J[158] += x[186]*2.;
	J[160] += sporttournament28_pd[437];
	J[158] += x[160]*2.;
	J[158] += sporttournament28_pd[436];
	J[157] = x[158]*2. + -2.;
	J[374] -= sporttournament28_pd[435];
	J[156] = -x[374]*2. + 2.;
	J[364] = -sporttournament28_pd[434];
	J[156] -= x[364]*2.;
	J[186] += sporttournament28_pd[433];
	J[156] += x[186]*2.;
	J[277] += sporttournament28_pd[432];
	J[155] = x[277]*2. + -2.;
	J[156] -= sporttournament28_pd[431];
	J[155] -= x[156]*2.;
	J[337] += sporttournament28_pd[430];
	J[154] = x[337]*2. + -4.;
	J[330] += sporttournament28_pd[429];
	J[154] += x[330]*2.;
	J[270] += sporttournament28_pd[428];
	J[154] += x[270]*2.;
	J[330] -= sporttournament28_pd[427];
	J[153] = -x[330]*2. + 2.;
	J[329] -= sporttournament28_pd[426];
	J[153] -= x[329]*2.;
	J[325] += sporttournament28_pd[425];
	J[153] += x[325]*2.;
	J[270] -= sporttournament28_pd[424];
	J[153] -= x[270]*2.;
	J[154] += sporttournament28_pd[423];
	J[152] = x[154]*2. + -2.;
	J[178] += sporttournament28_pd[422];
	J[151] = x[178]*2. + -2.;
	J[151] += sporttournament28_pd[421];
	J[150] = x[151]*2. + -4.;
	J[207] += sporttournament28_pd[420];
	J[149] = x[207]*2. + -4.;
	J[178] += sporttournament28_pd[419];
	J[149] += x[178]*2.;
	J[206] += sporttournament28_pd[418];
	J[148] = x[206]*2. + -4.;
	J[149] += sporttournament28_pd[417];
	J[148] += x[149]*2.;
	J[359] += sporttournament28_pd[416];
	J[147] = x[359]*2. + -2.;
	J[207] += sporttournament28_pd[415];
	J[147] += x[207]*2.;
	J[307] -= sporttournament28_pd[414];
	J[146] = -x[307]*2. + 2.;
	J[175] -= sporttournament28_pd[413];
	J[146] -= x[175]*2.;
	J[147] -= sporttournament28_pd[412];
	J[146] -= x[147]*2.;
	J[359] += sporttournament28_pd[411];
	J[145] = x[359]*2. + -4.;
	J[235] += sporttournament28_pd[410];
	J[145] += x[235]*2.;
	J[146] += sporttournament28_pd[409];
	J[145] += x[146]*2.;
	J[291] += sporttournament28_pd[408];
	J[144] = x[291]*2. + -4.;
	J[145] += sporttournament28_pd[407];
	J[144] += x[145]*2.;
	J[235] += sporttournament28_pd[406];
	J[143] = x[235]*2. + -4.;
	J[202] += sporttournament28_pd[405];
	J[143] += x[202]*2.;
	J[167] += sporttournament28_pd[404];
	J[142] = x[167]*2. + -2.;
	J[143] += sporttournament28_pd[403];
	J[142] += x[143]*2.;
	J[143] += sporttournament28_pd[402];
	J[141] = x[143]*2. + -4.;
	J[306] -= sporttournament28_pd[401];
	J[140] = -x[306]*2. + -2.;
	J[142] += sporttournament28_pd[400];
	J[140] += x[142]*2.;
	J[328] += sporttournament28_pd[399];
	J[139] = x[328]*2. + -4.;
	J[268] = sporttournament28_pd[398];
	J[139] += x[268]*2.;
	J[167] += sporttournament28_pd[397];
	J[139] += x[167]*2.;
	J[328] -= sporttournament28_pd[396];
	J[138] = -x[328]*2. + 4.;
	J[281] -= sporttournament28_pd[395];
	J[138] -= x[281]*2.;
	J[225] -= sporttournament28_pd[394];
	J[138] -= x[225]*2.;
	J[312] += sporttournament28_pd[393];
	J[137] = x[312]*2. + -2.;
	J[287] += sporttournament28_pd[392];
	J[137] += x[287]*2.;
	J[258] += sporttournament28_pd[391];
	J[137] += x[258]*2.;
	J[162] -= sporttournament28_pd[390];
	J[137] -= x[162]*2.;
	J[352] += sporttournament28_pd[389];
	J[136] = x[352]*2. + -4.;
	J[352] -= sporttournament28_pd[388];
	J[135] = -x[352]*2. + -2.;
	J[327] += sporttournament28_pd[387];
	J[135] += x[327]*2.;
	J[256] += sporttournament28_pd[386];
	J[135] += x[256]*2.;
	J[295] += sporttournament28_pd[385];
	J[134] = x[295]*2. + -2.;
	J[136] += sporttournament28_pd[384];
	J[134] += x[136]*2.;
	J[312] += sporttournament28_pd[383];
	J[133] = x[312]*2. + -2.;
	J[136] += sporttournament28_pd[382];
	J[133] += x[136]*2.;
	J[368] = sporttournament28_pd[381];
	J[132] = x[368]*2. + -4.;
	J[332] += sporttournament28_pd[380];
	J[132] += x[332]*2.;
	J[157] += sporttournament28_pd[379];
	J[132] += x[157]*2.;
	J[134] += sporttournament28_pd[378];
	J[132] += x[134]*2.;
	J[251] += sporttournament28_pd[377];
	J[131] = x[251]*2. + -2.;
	J[134] -= sporttournament28_pd[376];
	J[131] -= x[134]*2.;
	J[372] -= sporttournament28_pd[375];
	J[130] = -x[372]*2. + 2.;
	J[368] -= sporttournament28_pd[374];
	J[130] -= x[368]*2.;
	J[157] += sporttournament28_pd[373];
	J[130] += x[157]*2.;
	J[303] += sporttournament28_pd[372];
	J[129] = x[303]*2. + -2.;
	J[157] -= sporttournament28_pd[371];
	J[129] -= x[157]*2.;
	J[284] += sporttournament28_pd[370];
	J[128] = x[284]*2. + -2.;
	J[130] -= sporttournament28_pd[369];
	J[128] -= x[130]*2.;
	J[371] -= sporttournament28_pd[368];
	J[127] = -x[371]*2. + 2.;
	J[338] -= sporttournament28_pd[367];
	J[127] -= x[338]*2.;
	J[278] += sporttournament28_pd[366];
	J[127] += x[278]*2.;
	J[276] -= sporttournament28_pd[365];
	J[127] -= x[276]*2.;
	J[150] += sporttournament28_pd[364];
	J[126] = x[150]*2. + -2.;
	J[208] -= sporttournament28_pd[363];
	J[125] = -x[208]*2. + -2.;
	J[126] += sporttournament28_pd[362];
	J[125] += x[126]*2.;
	J[177] += sporttournament28_pd[361];
	J[124] = x[177]*2. + -4.;
	J[150] += sporttournament28_pd[360];
	J[124] += x[150]*2.;
	J[253] -= sporttournament28_pd[359];
	J[123] = -x[253]*2. + 2.;
	J[246] -= sporttournament28_pd[358];
	J[123] -= x[246]*2.;
	J[150] += sporttournament28_pd[357];
	J[123] += x[150]*2.;
	J[343] += sporttournament28_pd[356];
	J[122] = x[343]*2. + -4.;
	J[176] += sporttournament28_pd[355];
	J[122] += x[176]*2.;
	J[124] += sporttournament28_pd[354];
	J[122] += x[124]*2.;
	J[363] += sporttournament28_pd[353];
	J[121] = x[363]*2. + -2.;
	J[177] += sporttournament28_pd[352];
	J[121] += x[177]*2.;
	J[314] -= sporttournament28_pd[351];
	J[120] = -x[314]*2. + 2.;
	J[205] -= sporttournament28_pd[350];
	J[120] -= x[205]*2.;
	J[173] += sporttournament28_pd[349];
	J[120] += x[173]*2.;
	J[121] -= sporttournament28_pd[348];
	J[120] -= x[121]*2.;
	J[363] += sporttournament28_pd[347];
	J[119] = x[363]*2. + -4.;
	J[202] += sporttournament28_pd[346];
	J[119] += x[202]*2.;
	J[174] += sporttournament28_pd[345];
	J[119] += x[174]*2.;
	J[299] += sporttournament28_pd[344];
	J[118] = x[299]*2. + -4.;
	J[119] += sporttournament28_pd[343];
	J[118] += x[119]*2.;
	J[202] += sporttournament28_pd[342];
	J[117] = x[202]*2. + -4.;
	J[171] += sporttournament28_pd[341];
	J[117] += x[171]*2.;
	J[289] += sporttournament28_pd[340];
	J[116] = x[289]*2. + -4.;
	J[233] += sporttournament28_pd[339];
	J[116] += x[233]*2.;
	J[140] += sporttournament28_pd[338];
	J[116] += x[140]*2.;
	J[117] += sporttournament28_pd[337];
	J[116] += x[117]*2.;
	J[233] += sporttournament28_pd[336];
	J[115] = x[233]*2. + -4.;
	J[117] += sporttournament28_pd[335];
	J[115] += x[117]*2.;
	J[268] -= sporttournament28_pd[334];
	J[114] = -x[268]*2. + -2.;
	J[140] += sporttournament28_pd[333];
	J[114] += x[140]*2.;
	J[370] -= sporttournament28_pd[332];
	J[113] = -x[370]*2. + 2.;
	J[323] -= sporttournament28_pd[331];
	J[113] -= x[323]*2.;
	J[114] += sporttournament28_pd[330];
	J[113] += x[114]*2.;
	J[274] -= sporttournament28_pd[329];
	J[112] = -x[274]*2. + 4.;
	J[273] -= sporttournament28_pd[328];
	J[112] -= x[273]*2.;
	J[113] -= sporttournament28_pd[327];
	J[112] -= x[113]*2.;
	J[369] -= sporttournament28_pd[326];
	J[111] = -x[369]*2. + 2.;
	J[333] -= sporttournament28_pd[325];
	J[111] -= x[333]*2.;
	J[192] += sporttournament28_pd[324];
	J[111] += x[192]*2.;
	J[280] += sporttournament28_pd[323];
	J[110] = x[280]*2. + -2.;
	J[267] += sporttournament28_pd[322];
	J[110] += x[267]*2.;
	J[192] -= sporttournament28_pd[321];
	J[110] -= x[192]*2.;
	J[161] += sporttournament28_pd[320];
	J[110] += x[161]*2.;
	J[265] += sporttournament28_pd[319];
	J[109] = x[265]*2. + -2.;
	J[111] -= sporttournament28_pd[318];
	J[109] -= x[111]*2.;
	J[368] += sporttournament28_pd[317];
	J[108] = x[368]*2. + -2.;
	J[364] += sporttournament28_pd[316];
	J[108] += x[364]*2.;
	J[159] += sporttournament28_pd[315];
	J[108] += x[159]*2.;
	J[133] -= sporttournament28_pd[314];
	J[108] -= x[133]*2.;
	J[256] += sporttournament28_pd[313];
	J[107] = x[256]*2. + -2.;
	J[159] -= sporttournament28_pd[312];
	J[107] -= x[159]*2.;
	J[368] -= sporttournament28_pd[311];
	J[106] = -x[368]*2. + -2.;
	J[310] += sporttournament28_pd[310];
	J[106] += x[310]*2.;
	J[216] += sporttournament28_pd[309];
	J[106] += x[216]*2.;
	J[344] += sporttournament28_pd[308];
	J[105] = x[344]*2. + -2.;
	J[294] -= sporttournament28_pd[307];
	J[105] -= x[294]*2.;
	J[285] += sporttournament28_pd[306];
	J[105] += x[285]*2.;
	J[128] += sporttournament28_pd[305];
	J[105] += x[128]*2.;
	J[367] -= sporttournament28_pd[304];
	J[104] = -x[367]*2. + 2.;
	J[344] -= sporttournament28_pd[303];
	J[104] -= x[344]*2.;
	J[285] += sporttournament28_pd[302];
	J[104] += x[285]*2.;
	J[283] -= sporttournament28_pd[301];
	J[104] -= x[283]*2.;
	J[125] += sporttournament28_pd[300];
	J[103] = x[125]*2. + -2.;
	J[123] -= sporttournament28_pd[299];
	J[102] = -x[123]*2. + -2.;
	J[103] += sporttournament28_pd[298];
	J[102] += x[103]*2.;
	J[148] += sporttournament28_pd[297];
	J[101] = x[148]*2. + -4.;
	J[125] += sporttournament28_pd[296];
	J[101] += x[125]*2.;
	J[335] += sporttournament28_pd[295];
	J[100] = x[335]*2. + -4.;
	J[147] += sporttournament28_pd[294];
	J[100] += x[147]*2.;
	J[101] += sporttournament28_pd[293];
	J[100] += x[101]*2.;
	J[148] += sporttournament28_pd[292];
	J[99] = x[148]*2. + -2.;
	J[247] += sporttournament28_pd[291];
	J[98] = x[247]*2. + -4.;
	J[99] += sporttournament28_pd[290];
	J[98] += x[99]*2.;
	J[320] -= sporttournament28_pd[289];
	J[97] = -x[320]*2. + 2.;
	J[247] -= sporttournament28_pd[288];
	J[97] -= x[247]*2.;
	J[204] += sporttournament28_pd[287];
	J[97] += x[204]*2.;
	J[99] -= sporttournament28_pd[286];
	J[97] -= x[99]*2.;
	J[290] += sporttournament28_pd[285];
	J[96] = x[290]*2. + -4.;
	J[171] += sporttournament28_pd[284];
	J[96] += x[171]*2.;
	J[98] += sporttournament28_pd[283];
	J[96] += x[98]*2.;
	J[269] += sporttournament28_pd[282];
	J[95] = x[269]*2. + -4.;
	J[236] += sporttournament28_pd[281];
	J[95] += x[236]*2.;
	J[98] += sporttournament28_pd[280];
	J[95] += x[98]*2.;
	J[307] += sporttournament28_pd[279];
	J[94] = x[307]*2. + -4.;
	J[96] += sporttournament28_pd[278];
	J[94] += x[96]*2.;
	J[171] += sporttournament28_pd[277];
	J[93] = x[171]*2. + -2.;
	J[144] += sporttournament28_pd[276];
	J[93] += x[144]*2.;
	J[142] -= sporttournament28_pd[275];
	J[93] -= x[142]*2.;
	J[93] += sporttournament28_pd[274];
	J[92] = x[93]*2. + -2.;
	J[366] -= sporttournament28_pd[273];
	J[91] = -x[366]*2. + 2.;
	J[319] -= sporttournament28_pd[272];
	J[91] -= x[319]*2.;
	J[306] += sporttournament28_pd[271];
	J[91] += x[306]*2.;
	J[333] -= sporttournament28_pd[270];
	J[90] = -x[333]*2. + 4.;
	J[268] -= sporttournament28_pd[269];
	J[90] -= x[268]*2.;
	J[267] -= sporttournament28_pd[268];
	J[90] -= x[267]*2.;
	J[91] -= sporttournament28_pd[267];
	J[90] -= x[91]*2.;
	J[273] += sporttournament28_pd[266];
	J[89] = x[273]*2. + -2.;
	J[225] -= sporttournament28_pd[265];
	J[89] -= x[225]*2.;
	J[135] += sporttournament28_pd[264];
	J[89] += x[135]*2.;
	J[364] += sporttournament28_pd[263];
	J[88] = x[364]*2. + -2.;
	J[360] += sporttournament28_pd[262];
	J[88] += x[360]*2.;
	J[332] -= sporttournament28_pd[261];
	J[88] -= x[332]*2.;
	J[188] += sporttournament28_pd[260];
	J[88] += x[188]*2.;
	J[364] -= sporttournament28_pd[259];
	J[87] = -x[364]*2. + -2.;
	J[317] += sporttournament28_pd[258];
	J[87] += x[317]*2.;
	J[185] += sporttournament28_pd[257];
	J[87] += x[185]*2.;
	J[338] += sporttournament28_pd[256];
	J[86] = x[338]*2. + -2.;
	J[303] -= sporttournament28_pd[255];
	J[86] -= x[303]*2.;
	J[213] += sporttournament28_pd[254];
	J[86] += x[213]*2.;
	J[155] += sporttournament28_pd[253];
	J[86] += x[155]*2.;
	J[293] += sporttournament28_pd[252];
	J[85] = x[293]*2. + 2.;
	J[292] -= sporttournament28_pd[251];
	J[85] -= x[292]*2.;
	J[250] -= sporttournament28_pd[250];
	J[85] -= x[250]*2.;
	J[213] -= sporttournament28_pd[249];
	J[85] -= x[213]*2.;
	J[354] += sporttournament28_pd[248];
	J[84] = x[354]*2. + -4.;
	J[351] += sporttournament28_pd[247];
	J[84] += x[351]*2.;
	J[211] += sporttournament28_pd[246];
	J[83] = x[211]*2. + -2.;
	J[84] += sporttournament28_pd[245];
	J[83] += x[84]*2.;
	J[102] += sporttournament28_pd[244];
	J[82] = x[102]*2. + -2.;
	J[261] -= sporttournament28_pd[243];
	J[81] = -x[261]*2. + -2.;
	J[82] += sporttournament28_pd[242];
	J[81] += x[82]*2.;
	J[122] += sporttournament28_pd[241];
	J[80] = x[122]*2. + -4.;
	J[102] += sporttournament28_pd[240];
	J[80] += x[102]*2.;
	J[121] += sporttournament28_pd[239];
	J[79] = x[121]*2. + -4.;
	J[80] += sporttournament28_pd[238];
	J[79] += x[80]*2.;
	J[314] += sporttournament28_pd[237];
	J[78] = x[314]*2. + -4.;
	J[291] += sporttournament28_pd[236];
	J[78] += x[291]*2.;
	J[169] -= sporttournament28_pd[235];
	J[77] = -x[169]*2. + -2.;
	J[144] += sporttournament28_pd[234];
	J[77] += x[144]*2.;
	J[118] += sporttournament28_pd[233];
	J[77] += x[118]*2.;
	J[77] += sporttournament28_pd[232];
	J[76] = x[77]*2. + -2.;
	J[341] += sporttournament28_pd[231];
	J[75] = x[341]*2. + -4.;
	J[341] -= sporttournament28_pd[230];
	J[74] = -x[341]*2. + 2.;
	J[340] -= sporttournament28_pd[229];
	J[74] -= x[340]*2.;
	J[268] += sporttournament28_pd[228];
	J[74] += x[268]*2.;
	J[258] -= sporttournament28_pd[227];
	J[74] -= x[258]*2.;
	J[362] -= sporttournament28_pd[226];
	J[73] = -x[362]*2. + 2.;
	J[112] -= sporttournament28_pd[225];
	J[73] -= x[112]*2.;
	J[75] += sporttournament28_pd[224];
	J[73] += x[75]*2.;
	J[138] -= sporttournament28_pd[223];
	J[72] = -x[138]*2. + -2.;
	J[75] += sporttournament28_pd[222];
	J[72] += x[75]*2.;
	J[296] += sporttournament28_pd[221];
	J[71] = x[296]*2. + -2.;
	J[109] += sporttournament28_pd[220];
	J[71] += x[109]*2.;
	J[73] -= sporttournament28_pd[219];
	J[71] -= x[73]*2.;
	J[72] += sporttournament28_pd[218];
	J[71] += x[72]*2.;
	J[360] += sporttournament28_pd[217];
	J[70] = x[360]*2. + -2.;
	J[357] += sporttournament28_pd[216];
	J[70] += x[357]*2.;
	J[327] -= sporttournament28_pd[215];
	J[70] -= x[327]*2.;
	J[318] += sporttournament28_pd[214];
	J[70] += x[318]*2.;
	J[360] -= sporttournament28_pd[213];
	J[69] = -x[360]*2. + -2.;
	J[322] += sporttournament28_pd[212];
	J[69] += x[322]*2.;
	J[155] += sporttournament28_pd[211];
	J[69] += x[155]*2.;
	J[317] -= sporttournament28_pd[210];
	J[68] = -x[317]*2. + 2.;
	J[271] -= sporttournament28_pd[209];
	J[68] -= x[271]*2.;
	J[248] -= sporttournament28_pd[208];
	J[68] -= x[248]*2.;
	J[185] += sporttournament28_pd[207];
	J[68] += x[185]*2.;
	J[301] += sporttournament28_pd[206];
	J[67] = x[301]*2. + 2.;
	J[300] -= sporttournament28_pd[205];
	J[67] -= x[300]*2.;
	J[248] -= sporttournament28_pd[204];
	J[67] -= x[248]*2.;
	J[182] -= sporttournament28_pd[203];
	J[67] -= x[182]*2.;
	J[356] += sporttournament28_pd[202];
	J[66] = x[356]*2. + -4.;
	J[152] += sporttournament28_pd[201];
	J[66] += x[152]*2.;
	J[292] += sporttournament28_pd[200];
	J[65] = x[292]*2. + -2.;
	J[66] += sporttournament28_pd[199];
	J[65] += x[66]*2.;
	J[81] += sporttournament28_pd[198];
	J[64] = x[81]*2. + -2.;
	J[242] += sporttournament28_pd[197];
	J[63] = x[242]*2. + -4.;
	J[64] += sporttournament28_pd[196];
	J[63] += x[64]*2.;
	J[100] += sporttournament28_pd[195];
	J[62] = x[100]*2. + -2.;
	J[81] += sporttournament28_pd[194];
	J[62] += x[81]*2.;
	J[342] += sporttournament28_pd[193];
	J[61] = x[342]*2. + -4.;
	J[99] += sporttournament28_pd[192];
	J[61] += x[99]*2.;
	J[62] += sporttournament28_pd[191];
	J[61] += x[62]*2.;
	J[320] += sporttournament28_pd[190];
	J[60] = x[320]*2. + -4.;
	J[299] += sporttournament28_pd[189];
	J[60] += x[299]*2.;
	J[200] -= sporttournament28_pd[188];
	J[59] = -x[200]*2. + -2.;
	J[118] += sporttournament28_pd[187];
	J[59] += x[118]*2.;
	J[94] += sporttournament28_pd[186];
	J[59] += x[94]*2.;
	J[59] += sporttournament28_pd[185];
	J[58] = x[59]*2. + -2.;
	J[347] += sporttournament28_pd[184];
	J[57] = x[347]*2. + -4.;
	J[333] += sporttournament28_pd[183];
	J[57] += x[333]*2.;
	J[288] += sporttournament28_pd[182];
	J[57] += x[288]*2.;
	J[273] += sporttournament28_pd[181];
	J[57] += x[273]*2.;
	J[347] -= sporttournament28_pd[180];
	J[56] = -x[347]*2. + -2.;
	J[274] += sporttournament28_pd[179];
	J[56] += x[274]*2.;
	J[258] += sporttournament28_pd[178];
	J[56] += x[258]*2.;
	J[187] += sporttournament28_pd[177];
	J[55] = x[187]*2. + -2.;
	J[109] += sporttournament28_pd[176];
	J[55] += x[109]*2.;
	J[357] += sporttournament28_pd[175];
	J[54] = x[357]*2. + -4.;
	J[263] += sporttournament28_pd[174];
	J[54] += x[263]*2.;
	J[133] += sporttournament28_pd[173];
	J[54] += x[133]*2.;
	J[55] += sporttournament28_pd[172];
	J[54] += x[55]*2.;
	J[357] -= sporttournament28_pd[171];
	J[53] = -x[357]*2. + -2.;
	J[128] += sporttournament28_pd[170];
	J[53] += x[128]*2.;
	J[322] -= sporttournament28_pd[169];
	J[52] = -x[322]*2. + 2.;
	J[250] -= sporttournament28_pd[168];
	J[52] -= x[250]*2.;
	J[216] += sporttournament28_pd[167];
	J[52] += x[216]*2.;
	J[183] -= sporttournament28_pd[166];
	J[52] -= x[183]*2.;
	J[355] -= sporttournament28_pd[165];
	J[51] = -x[355]*2. + -2.;
	J[300] += sporttournament28_pd[164];
	J[51] += x[300]*2.;
	J[248] += sporttournament28_pd[163];
	J[51] += x[248]*2.;
	J[66] += sporttournament28_pd[162];
	J[51] += x[66]*2.;
	J[301] += sporttournament28_pd[161];
	J[50] = x[301]*2. + -2.;
	J[300] += sporttournament28_pd[160];
	J[50] += x[300]*2.;
	J[63] += sporttournament28_pd[159];
	J[49] = x[63]*2. + -2.;
	J[209] += sporttournament28_pd[158];
	J[48] = x[209]*2. + -4.;
	J[49] += sporttournament28_pd[157];
	J[48] += x[49]*2.;
	J[79] += sporttournament28_pd[156];
	J[47] = x[79]*2. + -2.;
	J[63] += sporttournament28_pd[155];
	J[47] += x[63]*2.;
	J[343] += sporttournament28_pd[154];
	J[46] = x[343]*2. + -2.;
	J[342] -= sporttournament28_pd[153];
	J[46] -= x[342]*2.;
	J[336] += sporttournament28_pd[152];
	J[46] += x[336]*2.;
	J[47] += sporttournament28_pd[151];
	J[46] += x[47]*2.;
	J[353] -= sporttournament28_pd[150];
	J[45] = -x[353]*2. + 2.;
	J[334] -= sporttournament28_pd[149];
	J[45] -= x[334]*2.;
	J[79] += sporttournament28_pd[148];
	J[45] += x[79]*2.;
	J[324] += sporttournament28_pd[147];
	J[44] = x[324]*2. + -2.;
	J[249] += sporttournament28_pd[146];
	J[44] += x[249]*2.;
	J[245] += sporttournament28_pd[145];
	J[44] += x[245]*2.;
	J[45] -= sporttournament28_pd[144];
	J[44] -= x[45]*2.;
	J[324] += sporttournament28_pd[143];
	J[43] = x[324]*2. + -4.;
	J[307] += sporttournament28_pd[142];
	J[43] += x[307]*2.;
	J[298] += sporttournament28_pd[141];
	J[42] = x[298]*2. + -2.;
	J[232] -= sporttournament28_pd[140];
	J[42] -= x[232]*2.;
	J[94] += sporttournament28_pd[139];
	J[42] += x[94]*2.;
	J[78] += sporttournament28_pd[138];
	J[42] += x[78]*2.;
	J[304] += sporttournament28_pd[137];
	J[41] = x[304]*2. + -4.;
	J[244] += sporttournament28_pd[136];
	J[41] += x[244]*2.;
	J[196] += sporttournament28_pd[135];
	J[41] += x[196]*2.;
	J[244] -= sporttournament28_pd[134];
	J[40] = -x[244]*2. + 2.;
	J[196] -= sporttournament28_pd[133];
	J[40] -= x[196]*2.;
	J[194] -= sporttournament28_pd[132];
	J[40] -= x[194]*2.;
	J[75] += sporttournament28_pd[131];
	J[40] += x[75]*2.;
	J[340] += sporttournament28_pd[130];
	J[39] = x[340]*2. + -4.;
	J[281] += sporttournament28_pd[129];
	J[39] += x[281]*2.;
	J[267] += sporttournament28_pd[128];
	J[39] += x[267]*2.;
	J[41] += sporttournament28_pd[127];
	J[39] += x[41]*2.;
	J[345] += sporttournament28_pd[126];
	J[38] = x[345]*2. + -2.;
	J[254] -= sporttournament28_pd[125];
	J[38] -= x[254]*2.;
	J[129] += sporttournament28_pd[124];
	J[38] += x[129]*2.;
	J[53] += sporttournament28_pd[123];
	J[38] += x[53]*2.;
	J[350] -= sporttournament28_pd[122];
	J[37] = -x[350]*2. + -2.;
	J[292] += sporttournament28_pd[121];
	J[37] += x[292]*2.;
	J[250] += sporttournament28_pd[120];
	J[37] += x[250]*2.;
	J[84] += sporttournament28_pd[119];
	J[37] += x[84]*2.;
	J[48] += sporttournament28_pd[118];
	J[36] = x[48]*2. + -2.;
	J[336] += sporttournament28_pd[117];
	J[35] = x[336]*2. + -4.;
	J[241] += sporttournament28_pd[116];
	J[35] += x[241]*2.;
	J[36] += sporttournament28_pd[115];
	J[35] += x[36]*2.;
	J[334] += sporttournament28_pd[114];
	J[34] = x[334]*2. + -2.;
	J[61] += sporttournament28_pd[113];
	J[34] += x[61]*2.;
	J[48] += sporttournament28_pd[112];
	J[34] += x[48]*2.;
	J[314] += sporttournament28_pd[111];
	J[33] = x[314]*2. + -4.;
	J[95] += sporttournament28_pd[110];
	J[33] += x[95]*2.;
	J[298] -= sporttournament28_pd[109];
	J[32] = -x[298]*2. + -2.;
	J[231] += sporttournament28_pd[108];
	J[32] += x[231]*2.;
	J[78] += sporttournament28_pd[107];
	J[32] += x[78]*2.;
	J[60] += sporttournament28_pd[106];
	J[32] += x[60]*2.;
	J[313] += sporttournament28_pd[105];
	J[31] = x[313]*2. + -2.;
	J[244] -= sporttournament28_pd[104];
	J[31] -= x[244]*2.;
	J[231] += sporttournament28_pd[103];
	J[31] += x[231]*2.;
	J[199] += sporttournament28_pd[102];
	J[31] += x[199]*2.;
	J[346] -= sporttournament28_pd[101];
	J[30] = -x[346]*2. + -2.;
	J[304] += sporttournament28_pd[100];
	J[30] += x[304]*2.;
	J[56] += sporttournament28_pd[99];
	J[30] += x[56]*2.;
	J[280] -= sporttournament28_pd[98];
	J[29] = -x[280]*2. + -2.;
	J[136] += sporttournament28_pd[97];
	J[29] += x[136]*2.;
	J[72] += sporttournament28_pd[96];
	J[29] += x[72]*2.;
	J[30] += sporttournament28_pd[95];
	J[29] += x[30]*2.;
	J[35] += sporttournament28_pd[94];
	J[28] = x[35]*2. + -2.;
	J[336] -= sporttournament28_pd[93];
	J[27] = -x[336]*2. + -2.;
	J[149] += sporttournament28_pd[92];
	J[27] += x[149]*2.;
	J[28] += sporttournament28_pd[91];
	J[27] += x[28]*2.;
	J[324] -= sporttournament28_pd[90];
	J[26] = -x[324]*2. + -2.;
	J[320] += sporttournament28_pd[89];
	J[26] += x[320]*2.;
	J[233] += sporttournament28_pd[88];
	J[26] += x[233]*2.;
	J[199] += sporttournament28_pd[87];
	J[25] = x[199]*2. + -2.;
	J[60] += sporttournament28_pd[86];
	J[25] += x[60]*2.;
	J[58] -= sporttournament28_pd[85];
	J[25] -= x[58]*2.;
	J[43] += sporttournament28_pd[84];
	J[25] += x[43]*2.;
	J[319] += sporttournament28_pd[83];
	J[24] = x[319]*2. + -4.;
	J[229] += sporttournament28_pd[82];
	J[24] += x[229]*2.;
	J[199] += sporttournament28_pd[81];
	J[24] += x[199]*2.;
	J[168] += sporttournament28_pd[80];
	J[24] += x[168]*2.;
	J[27] += sporttournament28_pd[79];
	J[23] = x[27]*2. + -2.;
	J[124] += sporttournament28_pd[78];
	J[22] = x[124]*2. + -2.;
	J[34] -= sporttournament28_pd[77];
	J[22] -= x[34]*2.;
	J[23] += sporttournament28_pd[76];
	J[22] += x[23]*2.;
	J[168] += sporttournament28_pd[75];
	J[21] = x[168]*2. + -2.;
	J[76] -= sporttournament28_pd[74];
	J[21] -= x[76]*2.;
	J[43] += sporttournament28_pd[73];
	J[21] += x[43]*2.;
	J[33] += sporttournament28_pd[72];
	J[21] += x[33]*2.;
	J[323] += sporttournament28_pd[71];
	J[20] = x[323]*2. + -4.;
	J[197] += sporttournament28_pd[70];
	J[20] += x[197]*2.;
	J[168] += sporttournament28_pd[69];
	J[20] += x[168]*2.;
	J[141] += sporttournament28_pd[68];
	J[20] += x[141]*2.;
	J[22] += sporttournament28_pd[67];
	J[19] = x[22]*2. + -2.;
	J[101] += sporttournament28_pd[66];
	J[18] = x[101]*2. + -2.;
	J[47] -= sporttournament28_pd[65];
	J[18] -= x[47]*2.;
	J[19] += sporttournament28_pd[64];
	J[18] += x[19]*2.;
	J[141] += sporttournament28_pd[63];
	J[17] = x[141]*2. + -2.;
	J[92] -= sporttournament28_pd[62];
	J[17] -= x[92]*2.;
	J[33] += sporttournament28_pd[61];
	J[17] += x[33]*2.;
	J[26] += sporttournament28_pd[60];
	J[17] += x[26]*2.;
	J[323] -= sporttournament28_pd[59];
	J[16] = -x[323]*2. + -2.;
	J[166] += sporttournament28_pd[58];
	J[16] += x[166]*2.;
	J[141] += sporttournament28_pd[57];
	J[16] += x[141]*2.;
	J[115] += sporttournament28_pd[56];
	J[16] += x[115]*2.;
	J[18] += sporttournament28_pd[55];
	J[15] = x[18]*2. + -2.;
	J[80] += sporttournament28_pd[54];
	J[14] = x[80]*2. + -2.;
	J[62] -= sporttournament28_pd[53];
	J[14] -= x[62]*2.;
	J[15] += sporttournament28_pd[52];
	J[14] += x[15]*2.;
	J[319] -= sporttournament28_pd[51];
	J[13] = -x[319]*2. + -2.;
	J[139] += sporttournament28_pd[50];
	J[13] += x[139]*2.;
	J[115] += sporttournament28_pd[49];
	J[13] += x[115]*2.;
	J[92] += sporttournament28_pd[48];
	J[13] += x[92]*2.;
	J[223] += sporttournament28_pd[47];
	J[12] = x[223]*2. + -2.;
	J[220] += sporttournament28_pd[46];
	J[12] += x[220]*2.;
	J[89] += sporttournament28_pd[45];
	J[12] += x[89]*2.;
	J[55] -= sporttournament28_pd[44];
	J[12] -= x[55]*2.;
	J[243] += sporttournament28_pd[43];
	J[11] = x[243]*2. + -2.;
	J[14] += sporttournament28_pd[42];
	J[11] += x[14]*2.;
	J[313] -= sporttournament28_pd[41];
	J[10] = -x[313]*2. + -2.;
	J[114] += sporttournament28_pd[40];
	J[10] += x[114]*2.;
	J[92] += sporttournament28_pd[39];
	J[10] += x[92]*2.;
	J[76] += sporttournament28_pd[38];
	J[10] += x[76]*2.;
	J[306] += sporttournament28_pd[37];
	J[9] = x[306]*2. + -2.;
	J[228] -= sporttournament28_pd[36];
	J[9] -= x[228]*2.;
	J[76] += sporttournament28_pd[35];
	J[9] += x[76]*2.;
	J[58] += sporttournament28_pd[34];
	J[9] += x[58]*2.;
	J[286] += sporttournament28_pd[33];
	J[8] = x[286]*2. + -4.;
	J[266] += sporttournament28_pd[32];
	J[8] += x[266]*2.;
	J[107] += sporttournament28_pd[31];
	J[8] += x[107]*2.;
	J[53] += sporttournament28_pd[30];
	J[8] += x[53]*2.;
	J[309] -= sporttournament28_pd[29];
	J[7] = -x[309]*2. + -2.;
	J[279] += sporttournament28_pd[28];
	J[7] += x[279]*2.;
	J[254] += sporttournament28_pd[27];
	J[7] += x[254]*2.;
	J[298] += sporttournament28_pd[26];
	J[6] = x[298]*2. + -2.;
	J[297] += sporttournament28_pd[25];
	J[6] += x[297]*2.;
	J[196] -= sporttournament28_pd[24];
	J[6] -= x[196]*2.;
	J[58] += sporttournament28_pd[23];
	J[6] += x[58]*2.;
	J[131] += sporttournament28_pd[22];
	J[5] = x[131]*2. + -4.;
	J[107] += sporttournament28_pd[21];
	J[5] += x[107]*2.;
	J[69] += sporttournament28_pd[20];
	J[5] += x[69]*2.;
	J[286] -= sporttournament28_pd[19];
	J[4] = -x[286]*2. + -2.;
	J[252] += sporttournament28_pd[18];
	J[4] += x[252]*2.;
	J[131] += sporttournament28_pd[17];
	J[4] += x[131]*2.;
	J[87] += sporttournament28_pd[16];
	J[4] += x[87]*2.;
	J[294] -= sporttournament28_pd[15];
	J[3] = -x[294]*2. + -2.;
	J[263] += sporttournament28_pd[14];
	J[3] += x[263]*2.;
	J[7] += sporttournament28_pd[13];
	J[3] += x[7]*2.;
	J[5] += sporttournament28_pd[12];
	J[3] += x[5]*2.;
	J[279] -= sporttournament28_pd[11];
	J[2] = -x[279]*2. + -2.;
	J[257] += sporttournament28_pd[10];
	J[2] += x[257]*2.;
	J[252] += sporttournament28_pd[9];
	J[2] += x[252]*2.;
	J[106] += sporttournament28_pd[8];
	J[2] += x[106]*2.;
	J[272] -= sporttournament28_pd[7];
	J[1] = -x[272]*2. + -2.;
	J[257] += sporttournament28_pd[6];
	J[1] += x[257]*2.;
	J[218] += sporttournament28_pd[5];
	J[1] += x[218]*2.;
	J[129] += sporttournament28_pd[4];
	J[1] += x[129]*2.;
	J[261] += sporttournament28_pd[3];
	J[0] = x[261]*2. + -2.;
	J[249] += sporttournament28_pd[2];
	J[0] += x[249]*2.;
	J[208] += sporttournament28_pd[1];
	J[0] += x[208]*2.;
	J[205] += sporttournament28_pd[0];
	J[0] -= x[205]*2.;
	J[378] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
