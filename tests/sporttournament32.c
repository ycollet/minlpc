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
 fint sporttournament32_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament32_funcom_[1001] = {
	497 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	497 /* nzc */,
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
	381,
	382,
	383,
	384,
	385,
	386,
	387,
	388,
	389,
	390,
	391,
	392,
	393,
	394,
	395,
	396,
	397,
	398,
	399,
	400,
	401,
	402,
	403,
	404,
	405,
	406,
	407,
	408,
	409,
	410,
	411,
	412,
	413,
	414,
	415,
	416,
	417,
	418,
	419,
	420,
	421,
	422,
	423,
	424,
	425,
	426,
	427,
	428,
	429,
	430,
	431,
	432,
	433,
	434,
	435,
	436,
	437,
	438,
	439,
	440,
	441,
	442,
	443,
	444,
	445,
	446,
	447,
	448,
	449,
	450,
	451,
	452,
	453,
	454,
	455,
	456,
	457,
	458,
	459,
	460,
	461,
	462,
	463,
	464,
	465,
	466,
	467,
	468,
	469,
	470,
	471,
	472,
	473,
	474,
	475,
	476,
	477,
	478,
	479,
	480,
	481,
	482,
	483,
	484,
	485,
	486,
	487,
	488,
	489,
	490,
	491,
	492,
	493,
	494,
	495,
	496,
	497,
	498,

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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
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

 real sporttournament32_boundc_[1+994+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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

 real sporttournament32_x0comn_[497] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sporttournament32_pd[960];
static real sporttournament32_old_x[497];
static int sporttournament32_xkind = -1;

 static int
sporttournament32_xcheck(real *x)
{
	real *x1 = sporttournament32_old_x, *xe = x + 497;
	errno = 0;
	if (sporttournament32_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament32_xkind = 0;
	return 1;
	}
 real
sporttournament32_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament32_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[496];
	;}

	if (wantfg & 2) {
	g[496] = 1.;
	}

	return rv;
}

 void
sporttournament32_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament32_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament32_pd[0] = -2. * x[0];
	v[0] = sporttournament32_pd[0] * x[208];
	sporttournament32_pd[1] = 2. * x[0];
	v[1] = sporttournament32_pd[1] * x[242];
	v[0] += v[1];
	sporttournament32_pd[2] = 2. * x[0];
	v[1] = sporttournament32_pd[2] * x[331];
	v[0] += v[1];
	sporttournament32_pd[3] = 2. * x[0];
	v[1] = sporttournament32_pd[3] * x[341];
	v[0] += v[1];
	sporttournament32_pd[4] = 2. * x[1];
	v[1] = sporttournament32_pd[4] * x[106];
	v[0] += v[1];
	sporttournament32_pd[5] = 2. * x[1];
	v[1] = sporttournament32_pd[5] * x[349];
	v[0] += v[1];
	sporttournament32_pd[6] = 2. * x[1];
	v[1] = sporttournament32_pd[6] * x[372];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[7] = 2. * x[1];
	v[2] = sporttournament32_pd[7] * x[373];
	v[0] += v[2];
	sporttournament32_pd[8] = 2. * x[2];
	v[2] = sporttournament32_pd[8] * x[85];
	v[0] += v[2];
	sporttournament32_pd[9] = 2. * x[2];
	v[2] = sporttournament32_pd[9] * x[340];
	v[0] += v[2];
	sporttournament32_pd[10] = 2. * x[2];
	v[2] = sporttournament32_pd[10] * x[349];
	v[0] += v[2];
	sporttournament32_pd[11] = 2. * x[2];
	v[2] = sporttournament32_pd[11] * x[381];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[12] = 2. * x[3];
	v[1] = sporttournament32_pd[12] * x[334];
	v[0] += v[1];
	sporttournament32_pd[13] = 2. * x[3];
	v[1] = sporttournament32_pd[13] * x[340];
	v[0] += v[1];
	sporttournament32_pd[14] = 2. * x[3];
	v[1] = sporttournament32_pd[14] * x[387];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[15] = 2. * x[3];
	v[2] = sporttournament32_pd[15] * x[388];
	v[0] += v[2];
	sporttournament32_pd[16] = 2. * x[4];
	v[2] = sporttournament32_pd[16] * x[62];
	v[0] += v[2];
	sporttournament32_pd[17] = 2. * x[4];
	v[2] = sporttournament32_pd[17] * x[134];
	v[0] += v[2];
	sporttournament32_pd[18] = 2. * x[4];
	v[2] = sporttournament32_pd[18] * x[258];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[19] = 2. * x[4];
	v[1] = sporttournament32_pd[19] * x[334];
	v[0] += v[1];
	sporttournament32_pd[20] = 2. * x[5];
	v[1] = sporttournament32_pd[20] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[21] = 2. * x[5];
	v[2] = sporttournament32_pd[21] * x[36];
	v[0] += v[2];
	sporttournament32_pd[22] = 2. * x[5];
	v[2] = sporttournament32_pd[22] * x[335];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[23] = 2. * x[5];
	v[1] = sporttournament32_pd[23] * x[336];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[24] = 2. * x[6];
	v[2] = sporttournament32_pd[24] * x[10];
	v[0] += v[2];
	sporttournament32_pd[25] = 2. * x[6];
	v[2] = sporttournament32_pd[25] * x[16];
	v[0] += v[2];
	sporttournament32_pd[26] = 2. * x[6];
	v[2] = sporttournament32_pd[26] * x[361];
	v[0] += v[2];
	sporttournament32_pd[27] = 2. * x[6];
	v[2] = sporttournament32_pd[27] * x[395];
	v[0] += v[2];
	sporttournament32_pd[28] = 2. * x[7];
	v[2] = sporttournament32_pd[28] * x[86];
	v[0] += v[2];
	sporttournament32_pd[29] = 2. * x[7];
	v[2] = sporttournament32_pd[29] * x[109];
	v[0] += v[2];
	sporttournament32_pd[30] = 2. * x[7];
	v[2] = sporttournament32_pd[30] * x[134];
	v[0] += v[2];
	sporttournament32_pd[31] = 2. * x[7];
	v[2] = sporttournament32_pd[31] * x[296];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[32] = 2. * x[8];
	v[1] = sporttournament32_pd[32] * x[163];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[33] = 2. * x[8];
	v[2] = sporttournament32_pd[33] * x[228];
	v[0] += v[2];
	sporttournament32_pd[34] = 2. * x[8];
	v[2] = sporttournament32_pd[34] * x[262];
	v[0] += v[2];
	sporttournament32_pd[35] = 2. * x[8];
	v[2] = sporttournament32_pd[35] * x[375];
	v[0] += v[2];
	sporttournament32_pd[36] = 2. * x[9];
	v[2] = sporttournament32_pd[36] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[37] = 2. * x[9];
	v[1] = sporttournament32_pd[37] * x[46];
	v[0] += v[1];
	sporttournament32_pd[38] = 2. * x[9];
	v[1] = sporttournament32_pd[38] * x[343];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[39] = 2. * x[9];
	v[2] = sporttournament32_pd[39] * x[344];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[40] = 2. * x[10];
	v[1] = sporttournament32_pd[40] * x[107];
	v[0] += v[1];
	sporttournament32_pd[41] = 2. * x[10];
	v[1] = sporttournament32_pd[41] * x[109];
	v[0] += v[1];
	sporttournament32_pd[42] = 2. * x[10];
	v[1] = sporttournament32_pd[42] * x[350];
	v[0] += v[1];
	sporttournament32_pd[43] = 2. * x[11];
	v[1] = sporttournament32_pd[43] * x[192];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[44] = 2. * x[11];
	v[2] = sporttournament32_pd[44] * x[195];
	v[0] += v[2];
	sporttournament32_pd[45] = 2. * x[11];
	v[2] = sporttournament32_pd[45] * x[301];
	v[0] += v[2];
	sporttournament32_pd[46] = 2. * x[11];
	v[2] = sporttournament32_pd[46] * x[364];
	v[0] += v[2];
	sporttournament32_pd[47] = 2. * x[12];
	v[2] = sporttournament32_pd[47] * x[90];
	v[0] += v[2];
	sporttournament32_pd[48] = 2. * x[12];
	v[2] = sporttournament32_pd[48] * x[269];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[49] = 2. * x[12];
	v[1] = sporttournament32_pd[49] * x[407];
	v[0] += v[1];
	sporttournament32_pd[50] = 2. * x[12];
	v[1] = sporttournament32_pd[50] * x[408];
	v[0] += v[1];
	sporttournament32_pd[51] = 2. * x[13];
	v[1] = sporttournament32_pd[51] * x[23];
	v[0] += v[1];
	sporttournament32_pd[52] = 2. * x[13];
	v[1] = sporttournament32_pd[52] * x[245];
	v[0] += v[1];
	sporttournament32_pd[53] = 2. * x[14];
	v[1] = sporttournament32_pd[53] * x[113];
	v[0] += v[1];
	sporttournament32_pd[54] = 2. * x[14];
	v[1] = sporttournament32_pd[54] * x[142];
	v[0] += v[1];
	sporttournament32_pd[55] = 2. * x[14];
	v[1] = sporttournament32_pd[55] * x[308];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[56] = 2. * x[14];
	v[2] = sporttournament32_pd[56] * x[415];
	v[0] += v[2];
	sporttournament32_pd[57] = 2. * x[15];
	v[2] = sporttournament32_pd[57] * x[127];
	v[0] += v[2];
	sporttournament32_pd[58] = 2. * x[15];
	v[2] = sporttournament32_pd[58] * x[154];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[59] = 2. * x[15];
	v[1] = sporttournament32_pd[59] * x[287];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[60] = 2. * x[15];
	v[2] = sporttournament32_pd[60] * x[367];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[61] = 2. * x[16];
	v[1] = sporttournament32_pd[61] * x[257];
	v[0] += v[1];
	sporttournament32_pd[62] = 2. * x[16];
	v[1] = sporttournament32_pd[62] * x[381];
	v[0] += v[1];
	sporttournament32_pd[63] = 2. * x[16];
	v[1] = sporttournament32_pd[63] * x[412];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[64] = 2. * x[17];
	v[2] = sporttournament32_pd[64] * x[67];
	v[0] += v[2];
	sporttournament32_pd[65] = 2. * x[17];
	v[2] = sporttournament32_pd[65] * x[143];
	v[0] += v[2];
	sporttournament32_pd[66] = 2. * x[17];
	v[2] = sporttournament32_pd[66] * x[168];
	v[0] += v[2];
	sporttournament32_pd[67] = 2. * x[17];
	v[2] = sporttournament32_pd[67] * x[420];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[68] = 2. * x[18];
	v[1] = sporttournament32_pd[68] * x[34];
	v[0] += v[1];
	sporttournament32_pd[69] = 2. * x[18];
	v[1] = sporttournament32_pd[69] * x[422];
	v[0] += v[1];
	sporttournament32_pd[70] = 2. * x[19];
	v[1] = sporttournament32_pd[70] * x[99];
	v[0] += v[1];
	sporttournament32_pd[71] = 2. * x[19];
	v[1] = sporttournament32_pd[71] * x[184];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[72] = 2. * x[19];
	v[2] = sporttournament32_pd[72] * x[248];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[73] = 2. * x[19];
	v[1] = sporttournament32_pd[73] * x[355];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[74] = 2. * x[20];
	v[2] = sporttournament32_pd[74] * x[190];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[75] = 2. * x[20];
	v[1] = sporttournament32_pd[75] * x[295];
	v[0] += v[1];
	sporttournament32_pd[76] = 2. * x[20];
	v[1] = sporttournament32_pd[76] * x[296];
	v[0] += v[1];
	sporttournament32_pd[77] = 2. * x[20];
	v[1] = sporttournament32_pd[77] * x[372];
	v[0] += v[1];
	sporttournament32_pd[78] = 2. * x[21];
	v[1] = sporttournament32_pd[78] * x[90];
	v[0] += v[1];
	sporttournament32_pd[79] = 2. * x[21];
	v[1] = sporttournament32_pd[79] * x[169];
	v[0] += v[1];
	sporttournament32_pd[80] = 2. * x[21];
	v[1] = sporttournament32_pd[80] * x[201];
	v[0] += v[1];
	sporttournament32_pd[81] = 2. * x[21];
	v[1] = sporttournament32_pd[81] * x[427];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[82] = 2. * x[22];
	v[2] = sporttournament32_pd[82] * x[67];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[83] = 2. * x[22];
	v[1] = sporttournament32_pd[83] * x[69];
	v[0] += v[1];
	sporttournament32_pd[84] = 2. * x[22];
	v[1] = sporttournament32_pd[84] * x[169];
	v[0] += v[1];
	sporttournament32_pd[85] = 2. * x[22];
	v[1] = sporttournament32_pd[85] * x[428];
	v[0] += v[1];
	sporttournament32_pd[86] = 2. * x[23];
	v[1] = sporttournament32_pd[86] * x[24];
	v[0] += v[1];
	sporttournament32_pd[87] = 2. * x[23];
	v[1] = sporttournament32_pd[87] * x[56];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[88] = 2. * x[23];
	v[2] = sporttournament32_pd[88] * x[122];
	v[0] += v[2];
	sporttournament32_pd[89] = 2. * x[24];
	v[2] = sporttournament32_pd[89] * x[44];
	v[0] += v[2];
	sporttournament32_pd[90] = 2. * x[25];
	v[2] = sporttournament32_pd[90] * x[79];
	v[0] += v[2];
	sporttournament32_pd[91] = 2. * x[25];
	v[2] = sporttournament32_pd[91] * x[213];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[92] = 2. * x[25];
	v[1] = sporttournament32_pd[92] * x[216];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[93] = 2. * x[26];
	v[2] = sporttournament32_pd[93] * x[113];
	v[0] += v[2];
	sporttournament32_pd[94] = 2. * x[26];
	v[2] = sporttournament32_pd[94] * x[202];
	v[0] += v[2];
	sporttournament32_pd[95] = 2. * x[26];
	v[2] = sporttournament32_pd[95] * x[234];
	v[0] += v[2];
	sporttournament32_pd[96] = 2. * x[26];
	v[2] = sporttournament32_pd[96] * x[432];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[97] = 2. * x[27];
	v[1] = sporttournament32_pd[97] * x[41];
	v[0] += v[1];
	sporttournament32_pd[98] = 2. * x[27];
	v[1] = sporttournament32_pd[98] * x[92];
	v[0] += v[1];
	sporttournament32_pd[99] = 2. * x[27];
	v[1] = sporttournament32_pd[99] * x[202];
	v[0] += v[1];
	sporttournament32_pd[100] = 2. * x[27];
	v[1] = sporttournament32_pd[100] * x[415];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[101] = 2. * x[28];
	v[2] = sporttournament32_pd[101] * x[29];
	v[0] += v[2];
	sporttournament32_pd[102] = 2. * x[28];
	v[2] = sporttournament32_pd[102] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[103] = 2. * x[28];
	v[1] = sporttournament32_pd[103] * x[149];
	v[0] += v[1];
	sporttournament32_pd[104] = 2. * x[28];
	v[1] = sporttournament32_pd[104] * x[434];
	v[0] += v[1];
	sporttournament32_pd[105] = 2. * x[29];
	v[1] = sporttournament32_pd[105] * x[57];
	v[0] += v[1];
	sporttournament32_pd[106] = 2. * x[30];
	v[1] = sporttournament32_pd[106] * x[182];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[107] = 2. * x[30];
	v[2] = sporttournament32_pd[107] * x[358];
	v[0] += v[2];
	sporttournament32_pd[108] = 2. * x[30];
	v[2] = sporttournament32_pd[108] * x[410];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[109] = 2. * x[31];
	v[1] = sporttournament32_pd[109] * x[143];
	v[0] += v[1];
	sporttournament32_pd[110] = 2. * x[31];
	v[1] = sporttournament32_pd[110] * x[235];
	v[0] += v[1];
	sporttournament32_pd[111] = 2. * x[31];
	v[1] = sporttournament32_pd[111] * x[270];
	v[0] += v[1];
	sporttournament32_pd[112] = 2. * x[31];
	v[1] = sporttournament32_pd[112] * x[432];
	v[0] += v[1];
	sporttournament32_pd[113] = 2. * x[32];
	v[1] = sporttournament32_pd[113] * x[54];
	v[0] += v[1];
	sporttournament32_pd[114] = 2. * x[32];
	v[1] = sporttournament32_pd[114] * x[115];
	v[0] += v[1];
	sporttournament32_pd[115] = 2. * x[32];
	v[1] = sporttournament32_pd[115] * x[235];
	v[0] += v[1];
	sporttournament32_pd[116] = 2. * x[32];
	v[1] = sporttournament32_pd[116] * x[408];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[117] = 2. * x[33];
	v[2] = sporttournament32_pd[117] * x[34];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[118] = 2. * x[33];
	v[1] = sporttournament32_pd[118] * x[55];
	v[0] += v[1];
	sporttournament32_pd[119] = 2. * x[33];
	v[1] = sporttournament32_pd[119] * x[74];
	v[0] += v[1];
	sporttournament32_pd[120] = 2. * x[33];
	v[1] = sporttournament32_pd[120] * x[440];
	v[0] += v[1];
	sporttournament32_pd[121] = 2. * x[34];
	v[1] = sporttournament32_pd[121] * x[35];
	v[0] += v[1];
	sporttournament32_pd[122] = 2. * x[34];
	v[1] = sporttournament32_pd[122] * x[323];
	v[0] += v[1];
	sporttournament32_pd[123] = 2. * x[35];
	v[1] = sporttournament32_pd[123] * x[74];
	v[0] += v[1];
	sporttournament32_pd[124] = 2. * x[36];
	v[1] = sporttournament32_pd[124] * x[153];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[125] = 2. * x[36];
	v[2] = sporttournament32_pd[125] * x[370];
	v[0] += v[2];
	sporttournament32_pd[126] = 2. * x[36];
	v[2] = sporttournament32_pd[126] * x[410];
	v[0] += v[2];
	sporttournament32_pd[127] = 2. * x[37];
	v[2] = sporttournament32_pd[127] * x[38];
	v[0] += v[2];
	sporttournament32_pd[128] = 2. * x[37];
	v[2] = sporttournament32_pd[128] * x[48];
	v[0] += v[2];
	sporttournament32_pd[129] = 2. * x[37];
	v[2] = sporttournament32_pd[129] * x[137];
	v[0] += v[2];
	sporttournament32_pd[130] = 2. * x[37];
	v[2] = sporttournament32_pd[130] * x[382];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[131] = 2. * x[38];
	v[1] = sporttournament32_pd[131] * x[49];
	v[0] += v[1];
	sporttournament32_pd[132] = 2. * x[38];
	v[1] = sporttournament32_pd[132] * x[65];
	v[0] += v[1];
	sporttournament32_pd[133] = 2. * x[38];
	v[1] = sporttournament32_pd[133] * x[196];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[134] = 2. * x[39];
	v[2] = sporttournament32_pd[134] * x[169];
	v[0] += v[2];
	sporttournament32_pd[135] = 2. * x[39];
	v[2] = sporttournament32_pd[135] * x[272];
	v[0] += v[2];
	sporttournament32_pd[136] = 2. * x[39];
	v[2] = sporttournament32_pd[136] * x[309];
	v[0] += v[2];
	sporttournament32_pd[137] = 2. * x[39];
	v[2] = sporttournament32_pd[137] * x[427];
	v[0] += v[2];
	sporttournament32_pd[138] = 2. * x[40];
	v[2] = sporttournament32_pd[138] * x[69];
	v[0] += v[2];
	sporttournament32_pd[139] = 2. * x[40];
	v[2] = sporttournament32_pd[139] * x[145];
	v[0] += v[2];
	sporttournament32_pd[140] = 2. * x[40];
	v[2] = sporttournament32_pd[140] * x[272];
	v[0] += v[2];
	sporttournament32_pd[141] = 2. * x[40];
	v[2] = sporttournament32_pd[141] * x[408];
	v[0] += v[2];
	sporttournament32_pd[142] = 2. * x[41];
	v[2] = sporttournament32_pd[142] * x[274];
	v[0] += v[2];
	sporttournament32_pd[143] = 2. * x[41];
	v[2] = sporttournament32_pd[143] * x[416];
	v[0] += v[2];
	sporttournament32_pd[144] = 2. * x[41];
	v[2] = sporttournament32_pd[144] * x[433];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[145] = 2. * x[42];
	v[1] = sporttournament32_pd[145] * x[43];
	v[0] += v[1];
	sporttournament32_pd[146] = 2. * x[42];
	v[1] = sporttournament32_pd[146] * x[119];
	v[0] += v[1];
	sporttournament32_pd[147] = 2. * x[42];
	v[1] = sporttournament32_pd[147] * x[442];
	v[0] += v[1];
	sporttournament32_pd[148] = 2. * x[42];
	v[1] = sporttournament32_pd[148] * x[446];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[149] = 2. * x[43];
	v[2] = sporttournament32_pd[149] * x[72];
	v[0] += v[2];
	sporttournament32_pd[150] = 2. * x[43];
	v[2] = sporttournament32_pd[150] * x[95];
	v[0] += v[2];
	sporttournament32_pd[151] = 2. * x[44];
	v[2] = sporttournament32_pd[151] * x[45];
	v[0] += v[2];
	sporttournament32_pd[152] = 2. * x[44];
	v[2] = sporttournament32_pd[152] * x[283];
	v[0] += v[2];
	sporttournament32_pd[153] = 2. * x[44];
	v[2] = sporttournament32_pd[153] * x[442];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[154] = 2. * x[45];
	v[1] = sporttournament32_pd[154] * x[95];
	v[0] += v[1];
	sporttournament32_pd[155] = 2. * x[46];
	v[1] = sporttournament32_pd[155] * x[47];
	v[0] += v[1];
	sporttournament32_pd[156] = 2. * x[46];
	v[1] = sporttournament32_pd[156] * x[126];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[157] = 2. * x[46];
	v[2] = sporttournament32_pd[157] * x[216];
	v[0] += v[2];
	sporttournament32_pd[158] = 2. * x[47];
	v[2] = sporttournament32_pd[158] * x[249];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[159] = 2. * x[47];
	v[1] = sporttournament32_pd[159] * x[379];
	v[0] += v[1];
	sporttournament32_pd[160] = 2. * x[47];
	v[1] = sporttournament32_pd[160] * x[457];
	v[0] += v[1];
	sporttournament32_pd[161] = 2. * x[48];
	v[1] = sporttournament32_pd[161] * x[50];
	v[0] += v[1];
	sporttournament32_pd[162] = 2. * x[48];
	v[1] = sporttournament32_pd[162] * x[138];
	v[0] += v[1];
	sporttournament32_pd[163] = 2. * x[48];
	v[1] = sporttournament32_pd[163] * x[231];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[164] = 2. * x[49];
	v[2] = sporttournament32_pd[164] * x[51];
	v[0] += v[2];
	sporttournament32_pd[165] = 2. * x[49];
	v[2] = sporttournament32_pd[165] * x[327];
	v[0] += v[2];
	sporttournament32_pd[166] = 2. * x[49];
	v[2] = sporttournament32_pd[166] * x[406];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[167] = 2. * x[50];
	v[1] = sporttournament32_pd[167] * x[51];
	v[0] += v[1];
	sporttournament32_pd[168] = 2. * x[50];
	v[1] = sporttournament32_pd[168] * x[398];
	v[0] += v[1];
	sporttournament32_pd[169] = 2. * x[50];
	v[1] = sporttournament32_pd[169] * x[452];
	v[0] += v[1];
	sporttournament32_pd[170] = 2. * x[51];
	v[1] = sporttournament32_pd[170] * x[233];
	v[0] += v[1];
	sporttournament32_pd[171] = 2. * x[51];
	v[1] = sporttournament32_pd[171] * x[326];
	v[0] += v[1];
	sporttournament32_pd[172] = 2. * x[52];
	v[1] = sporttournament32_pd[172] * x[202];
	v[0] += v[1];
	sporttournament32_pd[173] = 2. * x[52];
	v[1] = sporttournament32_pd[173] * x[311];
	v[0] += v[1];
	sporttournament32_pd[174] = 2. * x[52];
	v[1] = sporttournament32_pd[174] * x[326];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[175] = 2. * x[52];
	v[2] = sporttournament32_pd[175] * x[420];
	v[0] += v[2];
	sporttournament32_pd[176] = 2. * x[53];
	v[2] = sporttournament32_pd[176] * x[92];
	v[0] += v[2];
	sporttournament32_pd[177] = 2. * x[53];
	v[2] = sporttournament32_pd[177] * x[172];
	v[0] += v[2];
	sporttournament32_pd[178] = 2. * x[53];
	v[2] = sporttournament32_pd[178] * x[311];
	v[0] += v[2];
	sporttournament32_pd[179] = 2. * x[53];
	v[2] = sporttournament32_pd[179] * x[415];
	v[0] += v[2];
	sporttournament32_pd[180] = 2. * x[54];
	v[2] = sporttournament32_pd[180] * x[116];
	v[0] += v[2];
	sporttournament32_pd[181] = 2. * x[54];
	v[2] = sporttournament32_pd[181] * x[409];
	v[0] += v[2];
	sporttournament32_pd[182] = 2. * x[54];
	v[2] = sporttournament32_pd[182] * x[429];
	v[0] += v[2];
	sporttournament32_pd[183] = 2. * x[55];
	v[2] = sporttournament32_pd[183] * x[56];
	v[0] += v[2];
	sporttournament32_pd[184] = 2. * x[55];
	v[2] = sporttournament32_pd[184] * x[147];
	v[0] += v[2];
	sporttournament32_pd[185] = 2. * x[55];
	v[2] = sporttournament32_pd[185] * x[454];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[186] = 2. * x[56];
	v[1] = sporttournament32_pd[186] * x[93];
	v[0] += v[1];
	sporttournament32_pd[187] = 2. * x[56];
	v[1] = sporttournament32_pd[187] * x[123];
	v[0] += v[1];
	sporttournament32_pd[188] = 2. * x[57];
	v[1] = sporttournament32_pd[188] * x[58];
	v[0] += v[1];
	sporttournament32_pd[189] = 2. * x[57];
	v[1] = sporttournament32_pd[189] * x[243];
	v[0] += v[1];
	sporttournament32_pd[190] = 2. * x[57];
	v[1] = sporttournament32_pd[190] * x[442];
	v[0] += v[1];
	sporttournament32_pd[191] = 2. * x[58];
	v[1] = sporttournament32_pd[191] * x[123];
	v[0] += v[1];
	sporttournament32_pd[192] = 2. * x[59];
	v[1] = sporttournament32_pd[192] * x[60];
	v[0] += v[1];
	sporttournament32_pd[193] = 2. * x[59];
	v[1] = sporttournament32_pd[193] * x[98];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[194] = 2. * x[59];
	v[2] = sporttournament32_pd[194] * x[184];
	v[0] += v[2];
	sporttournament32_pd[195] = 2. * x[59];
	v[2] = sporttournament32_pd[195] * x[355];
	v[0] += v[2];
	sporttournament32_pd[196] = 2. * x[60];
	v[2] = sporttournament32_pd[196] * x[288];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[197] = 2. * x[60];
	v[1] = sporttournament32_pd[197] * x[385];
	v[0] += v[1];
	sporttournament32_pd[198] = 2. * x[60];
	v[1] = sporttournament32_pd[198] * x[449];
	v[0] += v[1];
	sporttournament32_pd[199] = 2. * x[61];
	v[1] = sporttournament32_pd[199] * x[62];
	v[0] += v[1];
	sporttournament32_pd[200] = 2. * x[61];
	v[1] = sporttournament32_pd[200] * x[337];
	v[0] += v[1];
	sporttournament32_pd[201] = 2. * x[61];
	v[1] = sporttournament32_pd[201] * x[362];
	v[0] += v[1];
	sporttournament32_pd[202] = 2. * x[61];
	v[1] = sporttournament32_pd[202] * x[444];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[203] = 2. * x[62];
	v[2] = sporttournament32_pd[203] * x[87];
	v[0] += v[2];
	sporttournament32_pd[204] = 2. * x[62];
	v[2] = sporttournament32_pd[204] * x[468];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[205] = 2. * x[63];
	v[1] = sporttournament32_pd[205] * x[87];
	v[0] += v[1];
	sporttournament32_pd[206] = 2. * x[63];
	v[1] = sporttournament32_pd[206] * x[136];
	v[0] += v[1];
	sporttournament32_pd[207] = 2. * x[63];
	v[1] = sporttournament32_pd[207] * x[361];
	v[0] += v[1];
	sporttournament32_pd[208] = 2. * x[63];
	v[1] = sporttournament32_pd[208] * x[425];
	v[0] += v[1];
	sporttournament32_pd[209] = 2. * x[64];
	v[1] = sporttournament32_pd[209] * x[66];
	v[0] += v[1];
	sporttournament32_pd[210] = 2. * x[64];
	v[1] = sporttournament32_pd[210] * x[111];
	v[0] += v[1];
	sporttournament32_pd[211] = 2. * x[64];
	v[1] = sporttournament32_pd[211] * x[267];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[212] = 2. * x[64];
	v[2] = sporttournament32_pd[212] * x[375];
	v[0] += v[2];
	sporttournament32_pd[213] = 2. * x[65];
	v[2] = sporttournament32_pd[213] * x[374];
	v[0] += v[2];
	sporttournament32_pd[214] = 2. * x[65];
	v[2] = sporttournament32_pd[214] * x[390];
	v[0] += v[2];
	sporttournament32_pd[215] = 2. * x[65];
	v[2] = sporttournament32_pd[215] * x[459];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[216] = 2. * x[66];
	v[1] = sporttournament32_pd[216] * x[327];
	v[0] += v[1];
	sporttournament32_pd[217] = 2. * x[66];
	v[1] = sporttournament32_pd[217] * x[445];
	v[0] += v[1];
	sporttournament32_pd[218] = 2. * x[66];
	v[1] = sporttournament32_pd[218] * x[459];
	v[0] += v[1];
	sporttournament32_pd[219] = 2. * x[67];
	v[1] = sporttournament32_pd[219] * x[68];
	v[0] += v[1];
	sporttournament32_pd[220] = 2. * x[67];
	v[1] = sporttournament32_pd[220] * x[399];
	v[0] += v[1];
	sporttournament32_pd[221] = 2. * x[68];
	v[1] = sporttournament32_pd[221] * x[115];
	v[0] += v[1];
	sporttournament32_pd[222] = 2. * x[68];
	v[1] = sporttournament32_pd[222] * x[204];
	v[0] += v[1];
	sporttournament32_pd[223] = 2. * x[68];
	v[1] = sporttournament32_pd[223] * x[312];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[224] = 2. * x[69];
	v[2] = sporttournament32_pd[224] * x[401];
	v[0] += v[2];
	sporttournament32_pd[225] = 2. * x[69];
	v[2] = sporttournament32_pd[225] * x[433];
	v[0] += v[2];
	sporttournament32_pd[226] = 2. * x[70];
	v[2] = sporttournament32_pd[226] * x[71];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[227] = 2. * x[70];
	v[1] = sporttournament32_pd[227] * x[328];
	v[0] += v[1];
	sporttournament32_pd[228] = 2. * x[70];
	v[1] = sporttournament32_pd[228] * x[331];
	v[0] += v[1];
	sporttournament32_pd[229] = 2. * x[70];
	v[1] = sporttournament32_pd[229] * x[433];
	v[0] += v[1];
	sporttournament32_pd[230] = 2. * x[71];
	v[1] = sporttournament32_pd[230] * x[120];
	v[0] += v[1];
	sporttournament32_pd[231] = 2. * x[71];
	v[1] = sporttournament32_pd[231] * x[440];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[232] = 2. * x[71];
	v[2] = sporttournament32_pd[232] * x[469];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[233] = 2. * x[72];
	v[1] = sporttournament32_pd[233] * x[73];
	v[0] += v[1];
	sporttournament32_pd[234] = 2. * x[72];
	v[1] = sporttournament32_pd[234] * x[177];
	v[0] += v[1];
	sporttournament32_pd[235] = 2. * x[72];
	v[1] = sporttournament32_pd[235] * x[454];
	v[0] += v[1];
	sporttournament32_pd[236] = 2. * x[73];
	v[1] = sporttournament32_pd[236] * x[120];
	v[0] += v[1];
	sporttournament32_pd[237] = 2. * x[73];
	v[1] = sporttournament32_pd[237] * x[150];
	v[0] += v[1];
	sporttournament32_pd[238] = 2. * x[73];
	v[1] = sporttournament32_pd[238] * x[422];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[239] = 2. * x[74];
	v[2] = sporttournament32_pd[239] * x[75];
	v[0] += v[2];
	sporttournament32_pd[240] = 2. * x[74];
	v[2] = sporttournament32_pd[240] * x[284];
	v[0] += v[2];
	sporttournament32_pd[241] = 2. * x[75];
	v[2] = sporttournament32_pd[241] * x[150];
	v[0] += v[2];
	sporttournament32_pd[242] = 2. * x[76];
	v[2] = sporttournament32_pd[242] * x[77];
	v[0] += v[2];
	sporttournament32_pd[243] = 2. * x[76];
	v[2] = sporttournament32_pd[243] * x[181];
	v[0] += v[2];
	sporttournament32_pd[244] = 2. * x[77];
	v[2] = sporttournament32_pd[244] * x[78];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[245] = 2. * x[77];
	v[1] = sporttournament32_pd[245] * x[180];
	v[0] += v[1];
	sporttournament32_pd[246] = 2. * x[77];
	v[1] = sporttournament32_pd[246] * x[183];
	v[0] += v[1];
	sporttournament32_pd[247] = 2. * x[78];
	v[1] = sporttournament32_pd[247] * x[80];
	v[0] += v[1];
	sporttournament32_pd[248] = 2. * x[78];
	v[1] = sporttournament32_pd[248] * x[154];
	v[0] += v[1];
	sporttournament32_pd[249] = 2. * x[78];
	v[1] = sporttournament32_pd[249] * x[367];
	v[0] += v[1];
	sporttournament32_pd[250] = 2. * x[79];
	v[1] = sporttournament32_pd[250] * x[215];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[251] = 2. * x[79];
	v[2] = sporttournament32_pd[251] * x[345];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[252] = 2. * x[79];
	v[1] = sporttournament32_pd[252] * x[443];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[253] = 2. * x[80];
	v[2] = sporttournament32_pd[253] * x[183];
	v[0] += v[2];
	sporttournament32_pd[254] = 2. * x[80];
	v[2] = sporttournament32_pd[254] * x[393];
	v[0] += v[2];
	sporttournament32_pd[255] = 2. * x[80];
	v[2] = sporttournament32_pd[255] * x[443];
	v[0] += v[2];
	sporttournament32_pd[256] = 2. * x[81];
	v[2] = sporttournament32_pd[256] * x[369];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[257] = 2. * x[81];
	v[1] = sporttournament32_pd[257] * x[371];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[258] = 2. * x[81];
	v[2] = sporttournament32_pd[258] * x[449];
	v[0] += v[2];
	sporttournament32_pd[259] = 2. * x[81];
	v[2] = sporttournament32_pd[259] * x[467];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[260] = 2. * x[82];
	v[1] = sporttournament32_pd[260] * x[357];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[261] = 2. * x[82];
	v[2] = sporttournament32_pd[261] * x[380];
	v[0] += v[2];
	sporttournament32_pd[262] = 2. * x[82];
	v[2] = sporttournament32_pd[262] * x[443];
	v[0] += v[2];
	sporttournament32_pd[263] = 2. * x[82];
	v[2] = sporttournament32_pd[263] * x[467];
	v[0] += v[2];
	sporttournament32_pd[264] = 2. * x[83];
	v[2] = sporttournament32_pd[264] * x[221];
	v[0] += v[2];
	sporttournament32_pd[265] = 2. * x[83];
	v[2] = sporttournament32_pd[265] * x[332];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[266] = 2. * x[83];
	v[1] = sporttournament32_pd[266] * x[402];
	v[0] += v[1];
	sporttournament32_pd[267] = 2. * x[83];
	v[1] = sporttournament32_pd[267] * x[467];
	v[0] += v[1];
	sporttournament32_pd[268] = 2. * x[84];
	v[1] = sporttournament32_pd[268] * x[86];
	v[0] += v[1];
	sporttournament32_pd[269] = 2. * x[84];
	v[1] = sporttournament32_pd[269] * x[106];
	v[0] += v[1];
	sporttournament32_pd[270] = 2. * x[84];
	v[1] = sporttournament32_pd[270] * x[346];
	v[0] += v[1];
	sporttournament32_pd[271] = 2. * x[84];
	v[1] = sporttournament32_pd[271] * x[444];
	v[0] += v[1];
	sporttournament32_pd[272] = 2. * x[85];
	v[1] = sporttournament32_pd[272] * x[105];
	v[0] += v[1];
	sporttournament32_pd[273] = 2. * x[85];
	v[1] = sporttournament32_pd[273] * x[108];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[274] = 2. * x[85];
	v[2] = sporttournament32_pd[274] * x[436];
	v[0] += v[2];
	sporttournament32_pd[275] = 2. * x[86];
	v[2] = sporttournament32_pd[275] * x[108];
	v[0] += v[2];
	sporttournament32_pd[276] = 2. * x[86];
	v[2] = sporttournament32_pd[276] * x[470];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[277] = 2. * x[87];
	v[1] = sporttournament32_pd[277] * x[88];
	v[0] += v[1];
	sporttournament32_pd[278] = 2. * x[87];
	v[1] = sporttournament32_pd[278] * x[388];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[279] = 2. * x[88];
	v[2] = sporttournament32_pd[279] * x[108];
	v[0] += v[2];
	sporttournament32_pd[280] = 2. * x[88];
	v[2] = sporttournament32_pd[280] * x[192];
	v[0] += v[2];
	sporttournament32_pd[281] = 2. * x[88];
	v[2] = sporttournament32_pd[281] * x[261];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[282] = 2. * x[89];
	v[1] = sporttournament32_pd[282] * x[308];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[283] = 2. * x[89];
	v[2] = sporttournament32_pd[283] * x[384];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[284] = 2. * x[89];
	v[1] = sporttournament32_pd[284] * x[400];
	v[0] += v[1];
	sporttournament32_pd[285] = 2. * x[89];
	v[1] = sporttournament32_pd[285] * x[472];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[286] = 2. * x[90];
	v[2] = sporttournament32_pd[286] * x[91];
	v[0] += v[2];
	sporttournament32_pd[287] = 2. * x[90];
	v[2] = sporttournament32_pd[287] * x[429];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[288] = 2. * x[91];
	v[1] = sporttournament32_pd[288] * x[145];
	v[0] += v[1];
	sporttournament32_pd[289] = 2. * x[91];
	v[1] = sporttournament32_pd[289] * x[237];
	v[0] += v[1];
	sporttournament32_pd[290] = 2. * x[91];
	v[1] = sporttournament32_pd[290] * x[273];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[291] = 2. * x[92];
	v[2] = sporttournament32_pd[291] * x[316];
	v[0] += v[2];
	sporttournament32_pd[292] = 2. * x[92];
	v[2] = sporttournament32_pd[292] * x[392];
	v[0] += v[2];
	sporttournament32_pd[293] = 2. * x[93];
	v[2] = sporttournament32_pd[293] * x[94];
	v[0] += v[2];
	sporttournament32_pd[294] = 2. * x[93];
	v[2] = sporttournament32_pd[294] * x[209];
	v[0] += v[2];
	sporttournament32_pd[295] = 2. * x[93];
	v[2] = sporttournament32_pd[295] * x[446];
	v[0] += v[2];
	sporttournament32_pd[296] = 2. * x[94];
	v[2] = sporttournament32_pd[296] * x[148];
	v[0] += v[2];
	sporttournament32_pd[297] = 2. * x[94];
	v[2] = sporttournament32_pd[297] * x[179];
	v[0] += v[2];
	sporttournament32_pd[298] = 2. * x[94];
	v[2] = sporttournament32_pd[298] * x[422];
	v[0] += v[2];
	sporttournament32_pd[299] = 2. * x[95];
	v[2] = sporttournament32_pd[299] * x[96];
	v[0] += v[2];
	sporttournament32_pd[300] = 2. * x[95];
	v[2] = sporttournament32_pd[300] * x[324];
	v[0] += v[2];
	sporttournament32_pd[301] = 2. * x[96];
	v[2] = sporttournament32_pd[301] * x[179];
	v[0] += v[2];
	sporttournament32_pd[302] = 2. * x[97];
	v[2] = sporttournament32_pd[302] * x[98];
	v[0] += v[2];
	sporttournament32_pd[303] = 2. * x[97];
	v[2] = sporttournament32_pd[303] * x[455];
	v[0] += v[2];
	sporttournament32_pd[304] = 2. * x[98];
	v[2] = sporttournament32_pd[304] * x[212];
	v[0] += v[2];
	sporttournament32_pd[305] = 2. * x[98];
	v[2] = sporttournament32_pd[305] * x[288];
	v[0] += v[2];
	sporttournament32_pd[306] = 2. * x[99];
	v[2] = sporttournament32_pd[306] * x[100];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[307] = 2. * x[99];
	v[1] = sporttournament32_pd[307] * x[250];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[308] = 2. * x[99];
	v[2] = sporttournament32_pd[308] * x[357];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[309] = 2. * x[100];
	v[1] = sporttournament32_pd[309] * x[102];
	v[0] += v[1];
	sporttournament32_pd[310] = 2. * x[100];
	v[1] = sporttournament32_pd[310] * x[218];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[311] = 2. * x[100];
	v[2] = sporttournament32_pd[311] * x[474];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[312] = 2. * x[101];
	v[1] = sporttournament32_pd[312] * x[379];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[313] = 2. * x[101];
	v[2] = sporttournament32_pd[313] * x[380];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[314] = 2. * x[101];
	v[1] = sporttournament32_pd[314] * x[457];
	v[0] += v[1];
	sporttournament32_pd[315] = 2. * x[101];
	v[1] = sporttournament32_pd[315] * x[463];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[316] = 2. * x[102];
	v[2] = sporttournament32_pd[316] * x[345];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[317] = 2. * x[102];
	v[1] = sporttournament32_pd[317] * x[386];
	v[0] += v[1];
	sporttournament32_pd[318] = 2. * x[102];
	v[1] = sporttournament32_pd[318] * x[463];
	v[0] += v[1];
	sporttournament32_pd[319] = 2. * x[103];
	v[1] = sporttournament32_pd[319] * x[131];
	v[0] += v[1];
	sporttournament32_pd[320] = 2. * x[103];
	v[1] = sporttournament32_pd[320] * x[190];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[321] = 2. * x[103];
	v[2] = sporttournament32_pd[321] * x[332];
	v[0] += v[2];
	sporttournament32_pd[322] = 2. * x[103];
	v[2] = sporttournament32_pd[322] * x[371];
	v[0] += v[2];
	sporttournament32_pd[323] = 2. * x[104];
	v[2] = sporttournament32_pd[323] * x[190];
	v[0] += v[2];
	sporttournament32_pd[324] = 2. * x[104];
	v[2] = sporttournament32_pd[324] * x[337];
	v[0] += v[2];
	sporttournament32_pd[325] = 2. * x[104];
	v[2] = sporttournament32_pd[325] * x[411];
	v[0] += v[2];
	sporttournament32_pd[326] = 2. * x[104];
	v[2] = sporttournament32_pd[326] * x[463];
	v[0] += v[2];
	sporttournament32_pd[327] = 2. * x[105];
	v[2] = sporttournament32_pd[327] * x[107];
	v[0] += v[2];
	sporttournament32_pd[328] = 2. * x[105];
	v[2] = sporttournament32_pd[328] * x[359];
	v[0] += v[2];
	sporttournament32_pd[329] = 2. * x[105];
	v[2] = sporttournament32_pd[329] * x[438];
	v[0] += v[2];
	sporttournament32_pd[330] = 2. * x[106];
	v[2] = sporttournament32_pd[330] * x[133];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[331] = 2. * x[106];
	v[1] = sporttournament32_pd[331] * x[431];
	v[0] += v[1];
	sporttournament32_pd[332] = 2. * x[107];
	v[1] = sporttournament32_pd[332] * x[133];
	v[0] += v[1];
	sporttournament32_pd[333] = 2. * x[107];
	v[1] = sporttournament32_pd[333] * x[223];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[334] = 2. * x[108];
	v[2] = sporttournament32_pd[334] * x[110];
	v[0] += v[2];
	sporttournament32_pd[335] = 2. * x[109];
	v[2] = sporttournament32_pd[335] * x[163];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[336] = 2. * x[109];
	v[1] = sporttournament32_pd[336] * x[339];
	v[0] += v[1];
	sporttournament32_pd[337] = 2. * x[110];
	v[1] = sporttournament32_pd[337] * x[133];
	v[0] += v[1];
	sporttournament32_pd[338] = 2. * x[110];
	v[1] = sporttournament32_pd[338] * x[163];
	v[0] += v[1];
	sporttournament32_pd[339] = 2. * x[110];
	v[1] = sporttournament32_pd[339] * x[300];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[340] = 2. * x[111];
	v[2] = sporttournament32_pd[340] * x[226];
	v[0] += v[2];
	sporttournament32_pd[341] = 2. * x[111];
	v[2] = sporttournament32_pd[341] * x[266];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[342] = 2. * x[111];
	v[1] = sporttournament32_pd[342] * x[418];
	v[0] += v[1];
	sporttournament32_pd[343] = 2. * x[112];
	v[1] = sporttournament32_pd[343] * x[377];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[344] = 2. * x[112];
	v[2] = sporttournament32_pd[344] * x[407];
	v[0] += v[2];
	sporttournament32_pd[345] = 2. * x[112];
	v[2] = sporttournament32_pd[345] * x[420];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[346] = 2. * x[112];
	v[1] = sporttournament32_pd[346] * x[476];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[347] = 2. * x[113];
	v[2] = sporttournament32_pd[347] * x[114];
	v[0] += v[2];
	sporttournament32_pd[348] = 2. * x[113];
	v[2] = sporttournament32_pd[348] * x[274];
	v[0] += v[2];
	sporttournament32_pd[349] = 2. * x[114];
	v[2] = sporttournament32_pd[349] * x[172];
	v[0] += v[2];
	sporttournament32_pd[350] = 2. * x[114];
	v[2] = sporttournament32_pd[350] * x[236];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[351] = 2. * x[114];
	v[1] = sporttournament32_pd[351] * x[276];
	v[0] += v[1];
	sporttournament32_pd[352] = 2. * x[115];
	v[1] = sporttournament32_pd[352] * x[117];
	v[0] += v[1];
	sporttournament32_pd[353] = 2. * x[115];
	v[1] = sporttournament32_pd[353] * x[421];
	v[0] += v[1];
	sporttournament32_pd[354] = 2. * x[116];
	v[1] = sporttournament32_pd[354] * x[118];
	v[0] += v[1];
	sporttournament32_pd[355] = 2. * x[116];
	v[1] = sporttournament32_pd[355] * x[277];
	v[0] += v[1];
	sporttournament32_pd[356] = 2. * x[116];
	v[1] = sporttournament32_pd[356] * x[378];
	v[0] += v[1];
	sporttournament32_pd[357] = 2. * x[117];
	v[1] = sporttournament32_pd[357] * x[118];
	v[0] += v[1];
	sporttournament32_pd[358] = 2. * x[117];
	v[1] = sporttournament32_pd[358] * x[276];
	v[0] += v[1];
	sporttournament32_pd[359] = 2. * x[117];
	v[1] = sporttournament32_pd[359] * x[318];
	v[0] += v[1];
	sporttournament32_pd[360] = 2. * x[118];
	v[1] = sporttournament32_pd[360] * x[119];
	v[0] += v[1];
	sporttournament32_pd[361] = 2. * x[118];
	v[1] = sporttournament32_pd[361] * x[330];
	v[0] += v[1];
	sporttournament32_pd[362] = 2. * x[119];
	v[1] = sporttournament32_pd[362] * x[178];
	v[0] += v[1];
	sporttournament32_pd[363] = 2. * x[119];
	v[1] = sporttournament32_pd[363] * x[366];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[364] = 2. * x[120];
	v[2] = sporttournament32_pd[364] * x[122];
	v[0] += v[2];
	sporttournament32_pd[365] = 2. * x[120];
	v[2] = sporttournament32_pd[365] * x[240];
	v[0] += v[2];
	sporttournament32_pd[366] = 2. * x[121];
	v[2] = sporttournament32_pd[366] * x[150];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[367] = 2. * x[121];
	v[1] = sporttournament32_pd[367] * x[211];
	v[0] += v[1];
	sporttournament32_pd[368] = 2. * x[121];
	v[1] = sporttournament32_pd[368] * x[322];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[369] = 2. * x[121];
	v[2] = sporttournament32_pd[369] * x[329];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[370] = 2. * x[122];
	v[1] = sporttournament32_pd[370] * x[178];
	v[0] += v[1];
	sporttournament32_pd[371] = 2. * x[122];
	v[1] = sporttournament32_pd[371] * x[211];
	v[0] += v[1];
	sporttournament32_pd[372] = 2. * x[123];
	v[1] = sporttournament32_pd[372] * x[124];
	v[0] += v[1];
	sporttournament32_pd[373] = 2. * x[123];
	v[1] = sporttournament32_pd[373] * x[341];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[374] = 2. * x[124];
	v[2] = sporttournament32_pd[374] * x[211];
	v[0] += v[2];
	sporttournament32_pd[375] = 2. * x[125];
	v[2] = sporttournament32_pd[375] * x[126];
	v[0] += v[2];
	sporttournament32_pd[376] = 2. * x[125];
	v[2] = sporttournament32_pd[376] * x[462];
	v[0] += v[2];
	sporttournament32_pd[377] = 2. * x[126];
	v[2] = sporttournament32_pd[377] * x[247];
	v[0] += v[2];
	sporttournament32_pd[378] = 2. * x[126];
	v[2] = sporttournament32_pd[378] * x[249];
	v[0] += v[2];
	sporttournament32_pd[379] = 2. * x[127];
	v[2] = sporttournament32_pd[379] * x[128];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[380] = 2. * x[127];
	v[1] = sporttournament32_pd[380] * x[289];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[381] = 2. * x[127];
	v[2] = sporttournament32_pd[381] * x[369];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[382] = 2. * x[128];
	v[1] = sporttournament32_pd[382] * x[130];
	v[0] += v[1];
	sporttournament32_pd[383] = 2. * x[128];
	v[1] = sporttournament32_pd[383] * x[252];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[384] = 2. * x[128];
	v[2] = sporttournament32_pd[384] * x[477];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[385] = 2. * x[129];
	v[1] = sporttournament32_pd[385] * x[385];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[386] = 2. * x[129];
	v[2] = sporttournament32_pd[386] * x[386];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[387] = 2. * x[129];
	v[1] = sporttournament32_pd[387] * x[457];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[388] = 2. * x[129];
	v[2] = sporttournament32_pd[388] * x[458];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[389] = 2. * x[130];
	v[1] = sporttournament32_pd[389] * x[357];
	v[0] += v[1];
	sporttournament32_pd[390] = 2. * x[130];
	v[1] = sporttournament32_pd[390] * x[394];
	v[0] += v[1];
	sporttournament32_pd[391] = 2. * x[130];
	v[1] = sporttournament32_pd[391] * x[458];
	v[0] += v[1];
	sporttournament32_pd[392] = 2. * x[131];
	v[1] = sporttournament32_pd[392] * x[132];
	v[0] += v[1];
	sporttournament32_pd[393] = 2. * x[131];
	v[1] = sporttournament32_pd[393] * x[219];
	v[0] += v[1];
	sporttournament32_pd[394] = 2. * x[131];
	v[1] = sporttournament32_pd[394] * x[252];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[395] = 2. * x[132];
	v[2] = sporttournament32_pd[395] * x[346];
	v[0] += v[2];
	sporttournament32_pd[396] = 2. * x[132];
	v[2] = sporttournament32_pd[396] * x[412];
	v[0] += v[2];
	sporttournament32_pd[397] = 2. * x[132];
	v[2] = sporttournament32_pd[397] * x[458];
	v[0] += v[2];
	sporttournament32_pd[398] = 2. * x[133];
	v[2] = sporttournament32_pd[398] * x[135];
	v[0] += v[2];
	sporttournament32_pd[399] = 2. * x[134];
	v[2] = sporttournament32_pd[399] * x[333];
	v[0] += v[2];
	sporttournament32_pd[400] = 2. * x[134];
	v[2] = sporttournament32_pd[400] * x[404];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[401] = 2. * x[135];
	v[1] = sporttournament32_pd[401] * x[404];
	v[0] += v[1];
	sporttournament32_pd[402] = 2. * x[135];
	v[1] = sporttournament32_pd[402] * x[439];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[403] = 2. * x[135];
	v[2] = sporttournament32_pd[403] * x[478];
	v[0] += v[2];
	sporttournament32_pd[404] = 2. * x[136];
	v[2] = sporttournament32_pd[404] * x[137];
	v[0] += v[2];
	sporttournament32_pd[405] = 2. * x[136];
	v[2] = sporttournament32_pd[405] * x[162];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[406] = 2. * x[136];
	v[1] = sporttournament32_pd[406] * x[263];
	v[0] += v[1];
	sporttournament32_pd[407] = 2. * x[137];
	v[1] = sporttournament32_pd[407] * x[139];
	v[0] += v[1];
	sporttournament32_pd[408] = 2. * x[137];
	v[1] = sporttournament32_pd[408] * x[404];
	v[0] += v[1];
	sporttournament32_pd[409] = 2. * x[138];
	v[1] = sporttournament32_pd[409] * x[230];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[410] = 2. * x[138];
	v[2] = sporttournament32_pd[410] * x[263];
	v[0] += v[2];
	sporttournament32_pd[411] = 2. * x[138];
	v[2] = sporttournament32_pd[411] * x[413];
	v[0] += v[2];
	sporttournament32_pd[412] = 2. * x[139];
	v[2] = sporttournament32_pd[412] * x[227];
	v[0] += v[2];
	sporttournament32_pd[413] = 2. * x[139];
	v[2] = sporttournament32_pd[413] * x[230];
	v[0] += v[2];
	sporttournament32_pd[414] = 2. * x[139];
	v[2] = sporttournament32_pd[414] * x[445];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[415] = 2. * x[140];
	v[1] = sporttournament32_pd[415] * x[141];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[416] = 2. * x[140];
	v[2] = sporttournament32_pd[416] * x[304];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[417] = 2. * x[140];
	v[1] = sporttournament32_pd[417] * x[351];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[418] = 2. * x[140];
	v[2] = sporttournament32_pd[418] * x[365];
	v[0] += v[2];
	sporttournament32_pd[419] = 2. * x[141];
	v[2] = sporttournament32_pd[419] * x[142];
	v[0] += v[2];
	sporttournament32_pd[420] = 2. * x[141];
	v[2] = sporttournament32_pd[420] * x[427];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[421] = 2. * x[141];
	v[1] = sporttournament32_pd[421] * x[479];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[422] = 2. * x[142];
	v[2] = sporttournament32_pd[422] * x[365];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[423] = 2. * x[142];
	v[1] = sporttournament32_pd[423] * x[480];
	v[0] += v[1];
	sporttournament32_pd[424] = 2. * x[143];
	v[1] = sporttournament32_pd[424] * x[144];
	v[0] += v[1];
	sporttournament32_pd[425] = 2. * x[143];
	v[1] = sporttournament32_pd[425] * x[429];
	v[0] += v[1];
	sporttournament32_pd[426] = 2. * x[144];
	v[1] = sporttournament32_pd[426] * x[204];
	v[0] += v[1];
	sporttournament32_pd[427] = 2. * x[144];
	v[1] = sporttournament32_pd[427] * x[315];
	v[0] += v[1];
	sporttournament32_pd[428] = 2. * x[144];
	v[1] = sporttournament32_pd[428] * x[481];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[429] = 2. * x[145];
	v[2] = sporttournament32_pd[429] * x[146];
	v[0] += v[2];
	sporttournament32_pd[430] = 2. * x[145];
	v[2] = sporttournament32_pd[430] * x[416];
	v[0] += v[2];
	sporttournament32_pd[431] = 2. * x[146];
	v[2] = sporttournament32_pd[431] * x[279];
	v[0] += v[2];
	sporttournament32_pd[432] = 2. * x[146];
	v[2] = sporttournament32_pd[432] * x[315];
	v[0] += v[2];
	sporttournament32_pd[433] = 2. * x[146];
	v[2] = sporttournament32_pd[433] * x[473];
	v[0] += v[2];
	sporttournament32_pd[434] = 2. * x[147];
	v[2] = sporttournament32_pd[434] * x[210];
	v[0] += v[2];
	sporttournament32_pd[435] = 2. * x[147];
	v[2] = sporttournament32_pd[435] * x[354];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[436] = 2. * x[147];
	v[1] = sporttournament32_pd[436] * x[473];
	v[0] += v[1];
	sporttournament32_pd[437] = 2. * x[148];
	v[1] = sporttournament32_pd[437] * x[149];
	v[0] += v[1];
	sporttournament32_pd[438] = 2. * x[148];
	v[1] = sporttournament32_pd[438] * x[281];
	v[0] += v[1];
	sporttournament32_pd[439] = 2. * x[148];
	v[1] = sporttournament32_pd[439] * x[441];
	v[0] += v[1];
	sporttournament32_pd[440] = 2. * x[149];
	v[1] = sporttournament32_pd[440] * x[210];
	v[0] += v[1];
	sporttournament32_pd[441] = 2. * x[149];
	v[1] = sporttournament32_pd[441] * x[244];
	v[0] += v[1];
	sporttournament32_pd[442] = 2. * x[150];
	v[1] = sporttournament32_pd[442] * x[151];
	v[0] += v[1];
	sporttournament32_pd[443] = 2. * x[151];
	v[1] = sporttournament32_pd[443] * x[244];
	v[0] += v[1];
	sporttournament32_pd[444] = 2. * x[152];
	v[1] = sporttournament32_pd[444] * x[153];
	v[0] += v[1];
	sporttournament32_pd[445] = 2. * x[152];
	v[1] = sporttournament32_pd[445] * x[286];
	v[0] += v[1];
	sporttournament32_pd[446] = 2. * x[153];
	v[1] = sporttournament32_pd[446] * x[214];
	v[0] += v[1];
	sporttournament32_pd[447] = 2. * x[153];
	v[1] = sporttournament32_pd[447] * x[285];
	v[0] += v[1];
	sporttournament32_pd[448] = 2. * x[154];
	v[1] = sporttournament32_pd[448] * x[155];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[449] = 2. * x[154];
	v[2] = sporttournament32_pd[449] * x[379];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[450] = 2. * x[155];
	v[1] = sporttournament32_pd[450] * x[157];
	v[0] += v[1];
	sporttournament32_pd[451] = 2. * x[155];
	v[1] = sporttournament32_pd[451] * x[291];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[452] = 2. * x[155];
	v[2] = sporttournament32_pd[452] * x[482];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[453] = 2. * x[156];
	v[1] = sporttournament32_pd[453] * x[393];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[454] = 2. * x[156];
	v[2] = sporttournament32_pd[454] * x[394];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[455] = 2. * x[156];
	v[1] = sporttournament32_pd[455] * x[449];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[456] = 2. * x[156];
	v[2] = sporttournament32_pd[456] * x[451];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[457] = 2. * x[157];
	v[1] = sporttournament32_pd[457] * x[369];
	v[0] += v[1];
	sporttournament32_pd[458] = 2. * x[157];
	v[1] = sporttournament32_pd[458] * x[402];
	v[0] += v[1];
	sporttournament32_pd[459] = 2. * x[157];
	v[1] = sporttournament32_pd[459] * x[451];
	v[0] += v[1];
	sporttournament32_pd[460] = 2. * x[158];
	v[1] = sporttournament32_pd[460] * x[160];
	v[0] += v[1];
	sporttournament32_pd[461] = 2. * x[158];
	v[1] = sporttournament32_pd[461] * x[253];
	v[0] += v[1];
	sporttournament32_pd[462] = 2. * x[158];
	v[1] = sporttournament32_pd[462] * x[291];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[463] = 2. * x[158];
	v[2] = sporttournament32_pd[463] * x[423];
	v[0] += v[2];
	sporttournament32_pd[464] = 2. * x[159];
	v[2] = sporttournament32_pd[464] * x[161];
	v[0] += v[2];
	sporttournament32_pd[465] = 2. * x[159];
	v[2] = sporttournament32_pd[465] * x[256];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[466] = 2. * x[159];
	v[1] = sporttournament32_pd[466] * x[402];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[467] = 2. * x[159];
	v[2] = sporttournament32_pd[467] * x[430];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[468] = 2. * x[160];
	v[1] = sporttournament32_pd[468] * x[161];
	v[0] += v[1];
	sporttournament32_pd[469] = 2. * x[160];
	v[1] = sporttournament32_pd[469] * x[359];
	v[0] += v[1];
	sporttournament32_pd[470] = 2. * x[160];
	v[1] = sporttournament32_pd[470] * x[451];
	v[0] += v[1];
	sporttournament32_pd[471] = 2. * x[161];
	v[1] = sporttournament32_pd[471] * x[403];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[472] = 2. * x[161];
	v[2] = sporttournament32_pd[472] * x[483];
	v[0] += v[2];
	sporttournament32_pd[473] = 2. * x[162];
	v[2] = sporttournament32_pd[473] * x[397];
	v[0] += v[2];
	sporttournament32_pd[474] = 2. * x[162];
	v[2] = sporttournament32_pd[474] * x[478];
	v[0] += v[2];
	sporttournament32_pd[475] = 2. * x[162];
	v[2] = sporttournament32_pd[475] * x[484];
	v[0] += v[2];
	sporttournament32_pd[476] = 2. * x[163];
	v[2] = sporttournament32_pd[476] * x[475];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[477] = 2. * x[164];
	v[1] = sporttournament32_pd[477] * x[197];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[478] = 2. * x[164];
	v[2] = sporttournament32_pd[478] * x[374];
	v[0] += v[2];
	sporttournament32_pd[479] = 2. * x[164];
	v[2] = sporttournament32_pd[479] * x[405];
	v[0] += v[2];
	sporttournament32_pd[480] = 2. * x[164];
	v[2] = sporttournament32_pd[480] * x[426];
	v[0] += v[2];
	sporttournament32_pd[481] = 2. * x[165];
	v[2] = sporttournament32_pd[481] * x[197];
	v[0] += v[2];
	sporttournament32_pd[482] = 2. * x[165];
	v[2] = sporttournament32_pd[482] * x[264];
	v[0] += v[2];
	sporttournament32_pd[483] = 2. * x[165];
	v[2] = sporttournament32_pd[483] * x[452];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[484] = 2. * x[165];
	v[1] = sporttournament32_pd[484] * x[475];
	v[0] += v[1];
	sporttournament32_pd[485] = 2. * x[166];
	v[1] = sporttournament32_pd[485] * x[167];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[486] = 2. * x[166];
	v[2] = sporttournament32_pd[486] * x[266];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[487] = 2. * x[166];
	v[1] = sporttournament32_pd[487] * x[363];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[488] = 2. * x[166];
	v[2] = sporttournament32_pd[488] * x[365];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[489] = 2. * x[167];
	v[1] = sporttournament32_pd[489] * x[168];
	v[0] += v[1];
	sporttournament32_pd[490] = 2. * x[167];
	v[1] = sporttournament32_pd[490] * x[432];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[491] = 2. * x[167];
	v[2] = sporttournament32_pd[491] * x[486];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[492] = 2. * x[168];
	v[1] = sporttournament32_pd[492] * x[271];
	v[0] += v[1];
	sporttournament32_pd[493] = 2. * x[168];
	v[1] = sporttournament32_pd[493] * x[365];
	v[0] += v[1];
	sporttournament32_pd[494] = 2. * x[169];
	v[1] = sporttournament32_pd[494] * x[171];
	v[0] += v[1];
	sporttournament32_pd[495] = 2. * x[170];
	v[1] = sporttournament32_pd[495] * x[171];
	v[0] += v[1];
	sporttournament32_pd[496] = 2. * x[170];
	v[1] = sporttournament32_pd[496] * x[271];
	v[0] += v[1];
	sporttournament32_pd[497] = 2. * x[170];
	v[1] = sporttournament32_pd[497] * x[274];
	v[0] += v[1];
	sporttournament32_pd[498] = 2. * x[170];
	v[1] = sporttournament32_pd[498] * x[391];
	v[0] += v[1];
	sporttournament32_pd[499] = 2. * x[171];
	v[1] = sporttournament32_pd[499] * x[173];
	v[0] += v[1];
	sporttournament32_pd[500] = 2. * x[171];
	v[1] = sporttournament32_pd[500] * x[237];
	v[0] += v[1];
	sporttournament32_pd[501] = 2. * x[172];
	v[1] = sporttournament32_pd[501] * x[174];
	v[0] += v[1];
	sporttournament32_pd[502] = 2. * x[172];
	v[1] = sporttournament32_pd[502] * x[409];
	v[0] += v[1];
	sporttournament32_pd[503] = 2. * x[173];
	v[1] = sporttournament32_pd[503] * x[174];
	v[0] += v[1];
	sporttournament32_pd[504] = 2. * x[173];
	v[1] = sporttournament32_pd[504] * x[275];
	v[0] += v[1];
	sporttournament32_pd[505] = 2. * x[173];
	v[1] = sporttournament32_pd[505] * x[328];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[506] = 2. * x[174];
	v[2] = sporttournament32_pd[506] * x[239];
	v[0] += v[2];
	sporttournament32_pd[507] = 2. * x[174];
	v[2] = sporttournament32_pd[507] * x[469];
	v[0] += v[2];
	sporttournament32_pd[508] = 2. * x[175];
	v[2] = sporttournament32_pd[508] * x[177];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[509] = 2. * x[175];
	v[1] = sporttournament32_pd[509] * x[238];
	v[0] += v[1];
	sporttournament32_pd[510] = 2. * x[175];
	v[1] = sporttournament32_pd[510] * x[330];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[511] = 2. * x[175];
	v[2] = sporttournament32_pd[511] * x[421];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[512] = 2. * x[176];
	v[1] = sporttournament32_pd[512] * x[241];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[513] = 2. * x[176];
	v[2] = sporttournament32_pd[513] * x[279];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[514] = 2. * x[176];
	v[1] = sporttournament32_pd[514] * x[329];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[515] = 2. * x[176];
	v[2] = sporttournament32_pd[515] * x[378];
	v[0] += v[2];
	sporttournament32_pd[516] = 2. * x[177];
	v[2] = sporttournament32_pd[516] * x[241];
	v[0] += v[2];
	sporttournament32_pd[517] = 2. * x[177];
	v[2] = sporttournament32_pd[517] * x[469];
	v[0] += v[2];
	sporttournament32_pd[518] = 2. * x[178];
	v[2] = sporttournament32_pd[518] * x[320];
	v[0] += v[2];
	sporttournament32_pd[519] = 2. * x[178];
	v[2] = sporttournament32_pd[519] * x[323];
	v[0] += v[2];
	sporttournament32_pd[520] = 2. * x[179];
	v[2] = sporttournament32_pd[520] * x[242];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[521] = 2. * x[179];
	v[1] = sporttournament32_pd[521] * x[487];
	v[0] += v[1];
	sporttournament32_pd[522] = 2. * x[180];
	v[1] = sporttournament32_pd[522] * x[182];
	v[0] += v[1];
	sporttournament32_pd[523] = 2. * x[181];
	v[1] = sporttournament32_pd[523] * x[183];
	v[0] += v[1];
	sporttournament32_pd[524] = 2. * x[181];
	v[1] = sporttournament32_pd[524] * x[447];
	v[0] += v[1];
	sporttournament32_pd[525] = 2. * x[181];
	v[1] = sporttournament32_pd[525] * x[448];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[526] = 2. * x[182];
	v[2] = sporttournament32_pd[526] * x[368];
	v[0] += v[2];
	sporttournament32_pd[527] = 2. * x[182];
	v[2] = sporttournament32_pd[527] * x[448];
	v[0] += v[2];
	sporttournament32_pd[528] = 2. * x[183];
	v[2] = sporttournament32_pd[528] * x[185];
	v[0] += v[2];
	sporttournament32_pd[529] = 2. * x[184];
	v[2] = sporttournament32_pd[529] * x[186];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[530] = 2. * x[184];
	v[1] = sporttournament32_pd[530] * x[385];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[531] = 2. * x[185];
	v[2] = sporttournament32_pd[531] * x[186];
	v[0] += v[2];
	sporttournament32_pd[532] = 2. * x[185];
	v[2] = sporttournament32_pd[532] * x[345];
	v[0] += v[2];
	sporttournament32_pd[533] = 2. * x[185];
	v[2] = sporttournament32_pd[533] * x[448];
	v[0] += v[2];
	sporttournament32_pd[534] = 2. * x[186];
	v[2] = sporttournament32_pd[534] * x[188];
	v[0] += v[2];
	sporttournament32_pd[535] = 2. * x[186];
	v[2] = sporttournament32_pd[535] * x[291];
	v[0] += v[2];
	sporttournament32_pd[536] = 2. * x[187];
	v[2] = sporttournament32_pd[536] * x[290];
	v[0] += v[2];
	sporttournament32_pd[537] = 2. * x[187];
	v[2] = sporttournament32_pd[537] * x[293];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[538] = 2. * x[187];
	v[1] = sporttournament32_pd[538] * x[402];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[539] = 2. * x[187];
	v[2] = sporttournament32_pd[539] * x[443];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[540] = 2. * x[188];
	v[1] = sporttournament32_pd[540] * x[293];
	v[0] += v[1];
	sporttournament32_pd[541] = 2. * x[188];
	v[1] = sporttournament32_pd[541] * x[379];
	v[0] += v[1];
	sporttournament32_pd[542] = 2. * x[188];
	v[1] = sporttournament32_pd[542] * x[411];
	v[0] += v[1];
	sporttournament32_pd[543] = 2. * x[189];
	v[1] = sporttournament32_pd[543] * x[294];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[544] = 2. * x[189];
	v[2] = sporttournament32_pd[544] * x[394];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[545] = 2. * x[189];
	v[1] = sporttournament32_pd[545] * x[396];
	v[0] += v[1];
	sporttournament32_pd[546] = 2. * x[189];
	v[1] = sporttournament32_pd[546] * x[435];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[547] = 2. * x[190];
	v[2] = sporttournament32_pd[547] * x[223];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[548] = 2. * x[191];
	v[1] = sporttournament32_pd[548] * x[193];
	v[0] += v[1];
	sporttournament32_pd[549] = 2. * x[191];
	v[1] = sporttournament32_pd[549] * x[439];
	v[0] += v[1];
	sporttournament32_pd[550] = 2. * x[191];
	v[1] = sporttournament32_pd[550] * x[484];
	v[0] += v[1];
	sporttournament32_pd[551] = 2. * x[191];
	v[1] = sporttournament32_pd[551] * x[490];
	v[0] += v[1];
	sporttournament32_pd[552] = 2. * x[192];
	v[1] = sporttournament32_pd[552] * x[194];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[553] = 2. * x[192];
	v[2] = sporttournament32_pd[553] * x[350];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[554] = 2. * x[193];
	v[1] = sporttournament32_pd[554] * x[194];
	v[0] += v[1];
	sporttournament32_pd[555] = 2. * x[193];
	v[1] = sporttournament32_pd[555] * x[340];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[556] = 2. * x[193];
	v[2] = sporttournament32_pd[556] * x[389];
	v[0] += v[2];
	sporttournament32_pd[557] = 2. * x[194];
	v[2] = sporttournament32_pd[557] * x[196];
	v[0] += v[2];
	sporttournament32_pd[558] = 2. * x[194];
	v[2] = sporttournament32_pd[558] * x[471];
	v[0] += v[2];
	sporttournament32_pd[559] = 2. * x[195];
	v[2] = sporttournament32_pd[559] * x[363];
	v[0] += v[2];
	sporttournament32_pd[560] = 2. * x[195];
	v[2] = sporttournament32_pd[560] * x[418];
	v[0] += v[2];
	sporttournament32_pd[561] = 2. * x[195];
	v[2] = sporttournament32_pd[561] * x[419];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[562] = 2. * x[196];
	v[1] = sporttournament32_pd[562] * x[302];
	v[0] += v[1];
	sporttournament32_pd[563] = 2. * x[196];
	v[1] = sporttournament32_pd[563] * x[419];
	v[0] += v[1];
	sporttournament32_pd[564] = 2. * x[197];
	v[1] = sporttournament32_pd[564] * x[231];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[565] = 2. * x[197];
	v[2] = sporttournament32_pd[565] * x[486];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[566] = 2. * x[198];
	v[1] = sporttournament32_pd[566] * x[199];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[567] = 2. * x[198];
	v[2] = sporttournament32_pd[567] * x[230];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[568] = 2. * x[198];
	v[1] = sporttournament32_pd[568] * x[374];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[569] = 2. * x[198];
	v[2] = sporttournament32_pd[569] * x[376];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[570] = 2. * x[199];
	v[1] = sporttournament32_pd[570] * x[201];
	v[0] += v[1];
	sporttournament32_pd[571] = 2. * x[199];
	v[1] = sporttournament32_pd[571] * x[432];
	v[0] += v[1];
	sporttournament32_pd[572] = 2. * x[199];
	v[1] = sporttournament32_pd[572] * x[486];
	v[0] += v[1];
	sporttournament32_pd[573] = 2. * x[200];
	v[1] = sporttournament32_pd[573] * x[310];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[574] = 2. * x[200];
	v[2] = sporttournament32_pd[574] * x[390];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[575] = 2. * x[200];
	v[1] = sporttournament32_pd[575] * x[391];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[576] = 2. * x[200];
	v[2] = sporttournament32_pd[576] * x[459];
	v[0] += v[2];
	sporttournament32_pd[577] = 2. * x[201];
	v[2] = sporttournament32_pd[577] * x[310];
	v[0] += v[2];
	sporttournament32_pd[578] = 2. * x[201];
	v[2] = sporttournament32_pd[578] * x[376];
	v[0] += v[2];
	sporttournament32_pd[579] = 2. * x[202];
	v[2] = sporttournament32_pd[579] * x[203];
	v[0] += v[2];
	sporttournament32_pd[580] = 2. * x[203];
	v[2] = sporttournament32_pd[580] * x[205];
	v[0] += v[2];
	sporttournament32_pd[581] = 2. * x[203];
	v[2] = sporttournament32_pd[581] * x[276];
	v[0] += v[2];
	sporttournament32_pd[582] = 2. * x[203];
	v[2] = sporttournament32_pd[582] * x[481];
	v[0] += v[2];
	sporttournament32_pd[583] = 2. * x[204];
	v[2] = sporttournament32_pd[583] * x[206];
	v[0] += v[2];
	sporttournament32_pd[584] = 2. * x[204];
	v[2] = sporttournament32_pd[584] * x[401];
	v[0] += v[2];
	sporttournament32_pd[585] = 2. * x[205];
	v[2] = sporttournament32_pd[585] * x[206];
	v[0] += v[2];
	sporttournament32_pd[586] = 2. * x[205];
	v[2] = sporttournament32_pd[586] * x[314];
	v[0] += v[2];
	sporttournament32_pd[587] = 2. * x[205];
	v[2] = sporttournament32_pd[587] * x[328];
	v[0] += v[2];
	sporttournament32_pd[588] = 2. * x[206];
	v[2] = sporttournament32_pd[588] * x[207];
	v[0] += v[2];
	sporttournament32_pd[589] = 2. * x[206];
	v[2] = sporttournament32_pd[589] * x[466];
	v[0] += v[2];
	sporttournament32_pd[590] = 2. * x[207];
	v[2] = sporttournament32_pd[590] * x[209];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[591] = 2. * x[207];
	v[1] = sporttournament32_pd[591] * x[353];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[592] = 2. * x[207];
	v[2] = sporttournament32_pd[592] * x[416];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[593] = 2. * x[208];
	v[1] = sporttournament32_pd[593] * x[239];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[594] = 2. * x[208];
	v[2] = sporttournament32_pd[594] * x[282];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[595] = 2. * x[208];
	v[1] = sporttournament32_pd[595] * x[366];
	v[0] += v[1];
	sporttournament32_pd[596] = 2. * x[209];
	v[1] = sporttournament32_pd[596] * x[282];
	v[0] += v[1];
	sporttournament32_pd[597] = 2. * x[209];
	v[1] = sporttournament32_pd[597] * x[466];
	v[0] += v[1];
	sporttournament32_pd[598] = 2. * x[210];
	v[1] = sporttournament32_pd[598] * x[283];
	v[0] += v[1];
	sporttournament32_pd[599] = 2. * x[210];
	v[1] = sporttournament32_pd[599] * x[331];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[600] = 2. * x[211];
	v[2] = sporttournament32_pd[600] * x[492];
	v[0] += v[2];
	sporttournament32_pd[601] = 2. * x[212];
	v[2] = sporttournament32_pd[601] * x[213];
	v[0] += v[2];
	sporttournament32_pd[602] = 2. * x[213];
	v[2] = sporttournament32_pd[602] * x[215];
	v[0] += v[2];
	sporttournament32_pd[603] = 2. * x[213];
	v[2] = sporttournament32_pd[603] * x[356];
	v[0] += v[2];
	sporttournament32_pd[604] = 2. * x[214];
	v[2] = sporttournament32_pd[604] * x[370];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[605] = 2. * x[214];
	v[1] = sporttournament32_pd[605] * x[455];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[606] = 2. * x[214];
	v[2] = sporttournament32_pd[606] * x[482];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[607] = 2. * x[215];
	v[1] = sporttournament32_pd[607] * x[455];
	v[0] += v[1];
	sporttournament32_pd[608] = 2. * x[215];
	v[1] = sporttournament32_pd[608] * x[482];
	v[0] += v[1];
	sporttournament32_pd[609] = 2. * x[216];
	v[1] = sporttournament32_pd[609] * x[217];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[610] = 2. * x[216];
	v[2] = sporttournament32_pd[610] * x[393];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[611] = 2. * x[217];
	v[1] = sporttournament32_pd[611] * x[219];
	v[0] += v[1];
	sporttournament32_pd[612] = 2. * x[217];
	v[1] = sporttournament32_pd[612] * x[252];
	v[0] += v[1];
	sporttournament32_pd[613] = 2. * x[217];
	v[1] = sporttournament32_pd[613] * x[482];
	v[0] += v[1];
	sporttournament32_pd[614] = 2. * x[218];
	v[1] = sporttournament32_pd[614] * x[251];
	v[0] += v[1];
	sporttournament32_pd[615] = 2. * x[218];
	v[1] = sporttournament32_pd[615] * x[254];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[616] = 2. * x[218];
	v[2] = sporttournament32_pd[616] * x[411];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[617] = 2. * x[219];
	v[1] = sporttournament32_pd[617] * x[254];
	v[0] += v[1];
	sporttournament32_pd[618] = 2. * x[219];
	v[1] = sporttournament32_pd[618] * x[385];
	v[0] += v[1];
	sporttournament32_pd[619] = 2. * x[220];
	v[1] = sporttournament32_pd[619] * x[222];
	v[0] += v[1];
	sporttournament32_pd[620] = 2. * x[220];
	v[1] = sporttournament32_pd[620] * x[254];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[621] = 2. * x[220];
	v[2] = sporttournament32_pd[621] * x[386];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[622] = 2. * x[220];
	v[1] = sporttournament32_pd[622] * x[438];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[623] = 2. * x[221];
	v[2] = sporttournament32_pd[623] * x[423];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[624] = 2. * x[221];
	v[1] = sporttournament32_pd[624] * x[424];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[625] = 2. * x[221];
	v[2] = sporttournament32_pd[625] * x[470];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[626] = 2. * x[222];
	v[1] = sporttournament32_pd[626] * x[403];
	v[0] += v[1];
	sporttournament32_pd[627] = 2. * x[222];
	v[1] = sporttournament32_pd[627] * x[470];
	v[0] += v[1];
	sporttournament32_pd[628] = 2. * x[222];
	v[1] = sporttournament32_pd[628] * x[493];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[629] = 2. * x[223];
	v[2] = sporttournament32_pd[629] * x[396];
	v[0] += v[2];
	sporttournament32_pd[630] = 2. * x[223];
	v[2] = sporttournament32_pd[630] * x[491];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[631] = 2. * x[224];
	v[1] = sporttournament32_pd[631] * x[225];
	v[0] += v[1];
	sporttournament32_pd[632] = 2. * x[224];
	v[1] = sporttournament32_pd[632] * x[259];
	v[0] += v[1];
	sporttournament32_pd[633] = 2. * x[224];
	v[1] = sporttournament32_pd[633] * x[300];
	v[0] += v[1];
	sporttournament32_pd[634] = 2. * x[224];
	v[1] = sporttournament32_pd[634] * x[490];
	v[0] += v[1];
	sporttournament32_pd[635] = 2. * x[225];
	v[1] = sporttournament32_pd[635] * x[227];
	v[0] += v[1];
	sporttournament32_pd[636] = 2. * x[225];
	v[1] = sporttournament32_pd[636] * x[349];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[637] = 2. * x[225];
	v[2] = sporttournament32_pd[637] * x[382];
	v[0] += v[2];
	sporttournament32_pd[638] = 2. * x[226];
	v[2] = sporttournament32_pd[638] * x[229];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[639] = 2. * x[226];
	v[1] = sporttournament32_pd[639] * x[348];
	v[0] += v[1];
	sporttournament32_pd[640] = 2. * x[226];
	v[1] = sporttournament32_pd[640] * x[439];
	v[0] += v[1];
	sporttournament32_pd[641] = 2. * x[227];
	v[1] = sporttournament32_pd[641] * x[229];
	v[0] += v[1];
	sporttournament32_pd[642] = 2. * x[227];
	v[1] = sporttournament32_pd[642] * x[425];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[643] = 2. * x[228];
	v[2] = sporttournament32_pd[643] * x[351];
	v[0] += v[2];
	sporttournament32_pd[644] = 2. * x[228];
	v[2] = sporttournament32_pd[644] * x[413];
	v[0] += v[2];
	sporttournament32_pd[645] = 2. * x[228];
	v[2] = sporttournament32_pd[645] * x[414];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[646] = 2. * x[229];
	v[1] = sporttournament32_pd[646] * x[414];
	v[0] += v[1];
	sporttournament32_pd[647] = 2. * x[229];
	v[1] = sporttournament32_pd[647] * x[452];
	v[0] += v[1];
	sporttournament32_pd[648] = 2. * x[230];
	v[1] = sporttournament32_pd[648] * x[479];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[649] = 2. * x[231];
	v[2] = sporttournament32_pd[649] * x[232];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[650] = 2. * x[231];
	v[1] = sporttournament32_pd[650] * x[383];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[651] = 2. * x[232];
	v[2] = sporttournament32_pd[651] * x[234];
	v[0] += v[2];
	sporttournament32_pd[652] = 2. * x[232];
	v[2] = sporttournament32_pd[652] * x[427];
	v[0] += v[2];
	sporttournament32_pd[653] = 2. * x[232];
	v[2] = sporttournament32_pd[653] * x[479];
	v[0] += v[2];
	sporttournament32_pd[654] = 2. * x[233];
	v[2] = sporttournament32_pd[654] * x[398];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[655] = 2. * x[233];
	v[1] = sporttournament32_pd[655] * x[399];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[656] = 2. * x[233];
	v[2] = sporttournament32_pd[656] * x[465];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[657] = 2. * x[234];
	v[1] = sporttournament32_pd[657] * x[383];
	v[0] += v[1];
	sporttournament32_pd[658] = 2. * x[234];
	v[1] = sporttournament32_pd[658] * x[465];
	v[0] += v[1];
	sporttournament32_pd[659] = 2. * x[235];
	v[1] = sporttournament32_pd[659] * x[313];
	v[0] += v[1];
	sporttournament32_pd[660] = 2. * x[235];
	v[1] = sporttournament32_pd[660] * x[453];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[661] = 2. * x[236];
	v[2] = sporttournament32_pd[661] * x[313];
	v[0] += v[2];
	sporttournament32_pd[662] = 2. * x[236];
	v[2] = sporttournament32_pd[662] * x[465];
	v[0] += v[2];
	sporttournament32_pd[663] = 2. * x[236];
	v[2] = sporttournament32_pd[663] * x[480];
	v[0] += v[2];
	sporttournament32_pd[664] = 2. * x[237];
	v[2] = sporttournament32_pd[664] * x[238];
	v[0] += v[2];
	sporttournament32_pd[665] = 2. * x[237];
	v[2] = sporttournament32_pd[665] * x[392];
	v[0] += v[2];
	sporttournament32_pd[666] = 2. * x[238];
	v[2] = sporttournament32_pd[666] * x[461];
	v[0] += v[2];
	sporttournament32_pd[667] = 2. * x[238];
	v[2] = sporttournament32_pd[667] * x[494];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[668] = 2. * x[239];
	v[1] = sporttournament32_pd[668] * x[240];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[669] = 2. * x[239];
	v[2] = sporttournament32_pd[669] * x[409];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[670] = 2. * x[240];
	v[1] = sporttournament32_pd[670] * x[321];
	v[0] += v[1];
	sporttournament32_pd[671] = 2. * x[240];
	v[1] = sporttournament32_pd[671] * x[461];
	v[0] += v[1];
	sporttournament32_pd[672] = 2. * x[241];
	v[1] = sporttournament32_pd[672] * x[243];
	v[0] += v[1];
	sporttournament32_pd[673] = 2. * x[241];
	v[1] = sporttournament32_pd[673] * x[323];
	v[0] += v[1];
	sporttournament32_pd[674] = 2. * x[242];
	v[1] = sporttournament32_pd[674] * x[245];
	v[0] += v[1];
	sporttournament32_pd[675] = 2. * x[242];
	v[1] = sporttournament32_pd[675] * x[329];
	v[0] += v[1];
	sporttournament32_pd[676] = 2. * x[243];
	v[1] = sporttournament32_pd[676] * x[245];
	v[0] += v[1];
	sporttournament32_pd[677] = 2. * x[243];
	v[1] = sporttournament32_pd[677] * x[321];
	v[0] += v[1];
	sporttournament32_pd[678] = 2. * x[244];
	v[1] = sporttournament32_pd[678] * x[246];
	v[0] += v[1];
	sporttournament32_pd[679] = 2. * x[244];
	v[1] = sporttournament32_pd[679] * x[341];
	v[0] += v[1];
	sporttournament32_pd[680] = 2. * x[245];
	v[1] = sporttournament32_pd[680] * x[246];
	v[0] += v[1];
	sporttournament32_pd[681] = 2. * x[247];
	v[1] = sporttournament32_pd[681] * x[248];
	v[0] += v[1];
	sporttournament32_pd[682] = 2. * x[248];
	v[1] = sporttournament32_pd[682] * x[250];
	v[0] += v[1];
	sporttournament32_pd[683] = 2. * x[248];
	v[1] = sporttournament32_pd[683] * x[344];
	v[0] += v[1];
	sporttournament32_pd[684] = 2. * x[249];
	v[1] = sporttournament32_pd[684] * x[462];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[685] = 2. * x[249];
	v[2] = sporttournament32_pd[685] * x[477];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[686] = 2. * x[250];
	v[1] = sporttournament32_pd[686] * x[462];
	v[0] += v[1];
	sporttournament32_pd[687] = 2. * x[250];
	v[1] = sporttournament32_pd[687] * x[477];
	v[0] += v[1];
	sporttournament32_pd[688] = 2. * x[251];
	v[1] = sporttournament32_pd[688] * x[253];
	v[0] += v[1];
	sporttournament32_pd[689] = 2. * x[251];
	v[1] = sporttournament32_pd[689] * x[410];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[690] = 2. * x[251];
	v[2] = sporttournament32_pd[690] * x[477];
	v[0] += v[2];
	sporttournament32_pd[691] = 2. * x[252];
	v[2] = sporttournament32_pd[691] * x[435];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[692] = 2. * x[253];
	v[1] = sporttournament32_pd[692] * x[393];
	v[0] += v[1];
	sporttournament32_pd[693] = 2. * x[253];
	v[1] = sporttournament32_pd[693] * x[435];
	v[0] += v[1];
	sporttournament32_pd[694] = 2. * x[254];
	v[1] = sporttournament32_pd[694] * x[493];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[695] = 2. * x[255];
	v[2] = sporttournament32_pd[695] * x[257];
	v[0] += v[2];
	sporttournament32_pd[696] = 2. * x[255];
	v[2] = sporttournament32_pd[696] * x[293];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[697] = 2. * x[255];
	v[1] = sporttournament32_pd[697] * x[380];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[698] = 2. * x[255];
	v[2] = sporttournament32_pd[698] * x[444];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[699] = 2. * x[256];
	v[1] = sporttournament32_pd[699] * x[338];
	v[0] += v[1];
	sporttournament32_pd[700] = 2. * x[256];
	v[1] = sporttournament32_pd[700] * x[431];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[701] = 2. * x[256];
	v[2] = sporttournament32_pd[701] * x[468];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[702] = 2. * x[257];
	v[1] = sporttournament32_pd[702] * x[468];
	v[0] += v[1];
	sporttournament32_pd[703] = 2. * x[257];
	v[1] = sporttournament32_pd[703] * x[493];
	v[0] += v[1];
	sporttournament32_pd[704] = 2. * x[258];
	v[1] = sporttournament32_pd[704] * x[298];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[705] = 2. * x[258];
	v[2] = sporttournament32_pd[705] * x[395];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[706] = 2. * x[258];
	v[1] = sporttournament32_pd[706] * x[424];
	v[0] += v[1];
	sporttournament32_pd[707] = 2. * x[259];
	v[1] = sporttournament32_pd[707] * x[260];
	v[0] += v[1];
	sporttournament32_pd[708] = 2. * x[259];
	v[1] = sporttournament32_pd[708] * x[387];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[709] = 2. * x[259];
	v[2] = sporttournament32_pd[709] * x[491];
	v[0] += v[2];
	sporttournament32_pd[710] = 2. * x[260];
	v[2] = sporttournament32_pd[710] * x[261];
	v[0] += v[2];
	sporttournament32_pd[711] = 2. * x[260];
	v[2] = sporttournament32_pd[711] * x[262];
	v[0] += v[2];
	sporttournament32_pd[712] = 2. * x[260];
	v[2] = sporttournament32_pd[712] * x[298];
	v[0] += v[2];
	sporttournament32_pd[713] = 2. * x[261];
	v[2] = sporttournament32_pd[713] * x[264];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[714] = 2. * x[261];
	v[1] = sporttournament32_pd[714] * x[413];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[715] = 2. * x[262];
	v[2] = sporttournament32_pd[715] * x[264];
	v[0] += v[2];
	sporttournament32_pd[716] = 2. * x[262];
	v[2] = sporttournament32_pd[716] * x[373];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[717] = 2. * x[263];
	v[1] = sporttournament32_pd[717] * x[265];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[718] = 2. * x[263];
	v[2] = sporttournament32_pd[718] * x[339];
	v[0] += v[2];
	sporttournament32_pd[719] = 2. * x[264];
	v[2] = sporttournament32_pd[719] * x[265];
	v[0] += v[2];
	sporttournament32_pd[720] = 2. * x[265];
	v[2] = sporttournament32_pd[720] * x[406];
	v[0] += v[2];
	sporttournament32_pd[721] = 2. * x[265];
	v[2] = sporttournament32_pd[721] * x[445];
	v[0] += v[2];
	sporttournament32_pd[722] = 2. * x[266];
	v[2] = sporttournament32_pd[722] * x[471];
	v[0] += v[2];
	sporttournament32_pd[723] = 2. * x[266];
	v[2] = sporttournament32_pd[723] * x[476];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[724] = 2. * x[267];
	v[1] = sporttournament32_pd[724] * x[268];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[725] = 2. * x[267];
	v[2] = sporttournament32_pd[725] * x[390];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[726] = 2. * x[267];
	v[1] = sporttournament32_pd[726] * x[419];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[727] = 2. * x[268];
	v[2] = sporttournament32_pd[727] * x[270];
	v[0] += v[2];
	sporttournament32_pd[728] = 2. * x[268];
	v[2] = sporttournament32_pd[728] * x[420];
	v[0] += v[2];
	sporttournament32_pd[729] = 2. * x[268];
	v[2] = sporttournament32_pd[729] * x[476];
	v[0] += v[2];
	sporttournament32_pd[730] = 2. * x[269];
	v[2] = sporttournament32_pd[730] * x[327];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[731] = 2. * x[269];
	v[1] = sporttournament32_pd[731] * x[459];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[732] = 2. * x[269];
	v[2] = sporttournament32_pd[732] * x[460];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[733] = 2. * x[270];
	v[1] = sporttournament32_pd[733] * x[390];
	v[0] += v[1];
	sporttournament32_pd[734] = 2. * x[270];
	v[1] = sporttournament32_pd[734] * x[460];
	v[0] += v[1];
	sporttournament32_pd[735] = 2. * x[271];
	v[1] = sporttournament32_pd[735] * x[273];
	v[0] += v[1];
	sporttournament32_pd[736] = 2. * x[271];
	v[1] = sporttournament32_pd[736] * x[400];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[737] = 2. * x[272];
	v[2] = sporttournament32_pd[737] * x[275];
	v[0] += v[2];
	sporttournament32_pd[738] = 2. * x[272];
	v[2] = sporttournament32_pd[738] * x[460];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[739] = 2. * x[273];
	v[1] = sporttournament32_pd[739] * x[275];
	v[0] += v[1];
	sporttournament32_pd[740] = 2. * x[273];
	v[1] = sporttournament32_pd[740] * x[460];
	v[0] += v[1];
	sporttournament32_pd[741] = 2. * x[274];
	v[1] = sporttournament32_pd[741] * x[277];
	v[0] += v[1];
	sporttournament32_pd[742] = 2. * x[275];
	v[1] = sporttournament32_pd[742] * x[277];
	v[0] += v[1];
	sporttournament32_pd[743] = 2. * x[276];
	v[1] = sporttournament32_pd[743] * x[278];
	v[0] += v[1];
	sporttournament32_pd[744] = 2. * x[277];
	v[1] = sporttournament32_pd[744] * x[278];
	v[0] += v[1];
	sporttournament32_pd[745] = 2. * x[278];
	v[1] = sporttournament32_pd[745] * x[280];
	v[0] += v[1];
	sporttournament32_pd[746] = 2. * x[278];
	v[1] = sporttournament32_pd[746] * x[354];
	v[0] += v[1];
	sporttournament32_pd[747] = 2. * x[279];
	v[1] = sporttournament32_pd[747] * x[281];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[748] = 2. * x[279];
	v[2] = sporttournament32_pd[748] * x[401];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[749] = 2. * x[280];
	v[1] = sporttournament32_pd[749] * x[281];
	v[0] += v[1];
	sporttournament32_pd[750] = 2. * x[280];
	v[1] = sporttournament32_pd[750] * x[421];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[751] = 2. * x[280];
	v[2] = sporttournament32_pd[751] * x[454];
	v[0] += v[2];
	sporttournament32_pd[752] = 2. * x[281];
	v[2] = sporttournament32_pd[752] * x[342];
	v[0] += v[2];
	sporttournament32_pd[753] = 2. * x[282];
	v[2] = sporttournament32_pd[753] * x[283];
	v[0] += v[2];
	sporttournament32_pd[754] = 2. * x[282];
	v[2] = sporttournament32_pd[754] * x[284];
	v[0] += v[2];
	sporttournament32_pd[755] = 2. * x[283];
	v[2] = sporttournament32_pd[755] * x[325];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[756] = 2. * x[284];
	v[1] = sporttournament32_pd[756] * x[325];
	v[0] += v[1];
	sporttournament32_pd[757] = 2. * x[284];
	v[1] = sporttournament32_pd[757] * x[342];
	v[0] += v[1];
	sporttournament32_pd[758] = 2. * x[285];
	v[1] = sporttournament32_pd[758] * x[287];
	v[0] += v[1];
	sporttournament32_pd[759] = 2. * x[286];
	v[1] = sporttournament32_pd[759] * x[288];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[760] = 2. * x[286];
	v[2] = sporttournament32_pd[760] * x[289];
	v[0] += v[2];
	sporttournament32_pd[761] = 2. * x[286];
	v[2] = sporttournament32_pd[761] * x[456];
	v[0] += v[2];
	sporttournament32_pd[762] = 2. * x[287];
	v[2] = sporttournament32_pd[762] * x[289];
	v[0] += v[2];
	sporttournament32_pd[763] = 2. * x[287];
	v[2] = sporttournament32_pd[763] * x[336];
	v[0] += v[2];
	sporttournament32_pd[764] = 2. * x[288];
	v[2] = sporttournament32_pd[764] * x[474];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[765] = 2. * x[289];
	v[1] = sporttournament32_pd[765] * x[474];
	v[0] += v[1];
	sporttournament32_pd[766] = 2. * x[290];
	v[1] = sporttournament32_pd[766] * x[292];
	v[0] += v[1];
	sporttournament32_pd[767] = 2. * x[290];
	v[1] = sporttournament32_pd[767] * x[410];
	v[0] += v[1];
	sporttournament32_pd[768] = 2. * x[290];
	v[1] = sporttournament32_pd[768] * x[474];
	v[0] += v[1];
	sporttournament32_pd[769] = 2. * x[291];
	v[1] = sporttournament32_pd[769] * x[430];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[770] = 2. * x[292];
	v[2] = sporttournament32_pd[770] * x[345];
	v[0] += v[2];
	sporttournament32_pd[771] = 2. * x[292];
	v[2] = sporttournament32_pd[771] * x[371];
	v[0] += v[2];
	sporttournament32_pd[772] = 2. * x[292];
	v[2] = sporttournament32_pd[772] * x[430];
	v[0] += v[2];
	sporttournament32_pd[773] = 2. * x[293];
	v[2] = sporttournament32_pd[773] * x[489];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[774] = 2. * x[294];
	v[1] = sporttournament32_pd[774] * x[347];
	v[0] += v[1];
	sporttournament32_pd[775] = 2. * x[294];
	v[1] = sporttournament32_pd[775] * x[436];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[776] = 2. * x[294];
	v[2] = sporttournament32_pd[776] * x[464];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[777] = 2. * x[295];
	v[1] = sporttournament32_pd[777] * x[450];
	v[0] += v[1];
	sporttournament32_pd[778] = 2. * x[295];
	v[1] = sporttournament32_pd[778] * x[464];
	v[0] += v[1];
	sporttournament32_pd[779] = 2. * x[295];
	v[1] = sporttournament32_pd[779] * x[489];
	v[0] += v[1];
	sporttournament32_pd[780] = 2. * x[296];
	v[1] = sporttournament32_pd[780] * x[403];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[781] = 2. * x[296];
	v[2] = sporttournament32_pd[781] * x[417];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[782] = 2. * x[297];
	v[1] = sporttournament32_pd[782] * x[417];
	v[0] += v[1];
	sporttournament32_pd[783] = 2. * x[297];
	v[1] = sporttournament32_pd[783] * x[464];
	v[0] += v[1];
	sporttournament32_pd[784] = 2. * x[297];
	v[1] = sporttournament32_pd[784] * x[478];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[785] = 2. * x[297];
	v[2] = sporttournament32_pd[785] * x[483];
	v[0] += v[2];
	sporttournament32_pd[786] = 2. * x[298];
	v[2] = sporttournament32_pd[786] * x[299];
	v[0] += v[2];
	sporttournament32_pd[787] = 2. * x[298];
	v[2] = sporttournament32_pd[787] * x[485];
	v[0] += v[2];
	sporttournament32_pd[788] = 2. * x[299];
	v[2] = sporttournament32_pd[788] * x[301];
	v[0] += v[2];
	sporttournament32_pd[789] = 2. * x[299];
	v[2] = sporttournament32_pd[789] * x[417];
	v[0] += v[2];
	sporttournament32_pd[790] = 2. * x[299];
	v[2] = sporttournament32_pd[790] * x[425];
	v[0] += v[2];
	sporttournament32_pd[791] = 2. * x[300];
	v[2] = sporttournament32_pd[791] * x[302];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[792] = 2. * x[300];
	v[1] = sporttournament32_pd[792] * x[418];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[793] = 2. * x[301];
	v[2] = sporttournament32_pd[793] * x[302];
	v[0] += v[2];
	sporttournament32_pd[794] = 2. * x[301];
	v[2] = sporttournament32_pd[794] * x[373];
	v[0] += v[2];
	sporttournament32_pd[795] = 2. * x[302];
	v[2] = sporttournament32_pd[795] * x[303];
	v[0] += v[2];
	sporttournament32_pd[796] = 2. * x[303];
	v[2] = sporttournament32_pd[796] * x[304];
	v[0] += v[2];
	sporttournament32_pd[797] = 2. * x[303];
	v[2] = sporttournament32_pd[797] * x[305];
	v[0] += v[2];
	sporttournament32_pd[798] = 2. * x[303];
	v[2] = sporttournament32_pd[798] * x[426];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[799] = 2. * x[304];
	v[1] = sporttournament32_pd[799] * x[471];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[800] = 2. * x[304];
	v[2] = sporttournament32_pd[800] * x[472];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[801] = 2. * x[305];
	v[1] = sporttournament32_pd[801] * x[306];
	v[0] += v[1];
	sporttournament32_pd[802] = 2. * x[305];
	v[1] = sporttournament32_pd[802] * x[364];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[803] = 2. * x[305];
	v[2] = sporttournament32_pd[803] * x[472];
	v[0] += v[2];
	sporttournament32_pd[804] = 2. * x[306];
	v[2] = sporttournament32_pd[804] * x[307];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[805] = 2. * x[306];
	v[1] = sporttournament32_pd[805] * x[398];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[806] = 2. * x[306];
	v[2] = sporttournament32_pd[806] * x[414];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[807] = 2. * x[307];
	v[1] = sporttournament32_pd[807] * x[308];
	v[0] += v[1];
	sporttournament32_pd[808] = 2. * x[307];
	v[1] = sporttournament32_pd[808] * x[309];
	v[0] += v[1];
	sporttournament32_pd[809] = 2. * x[307];
	v[1] = sporttournament32_pd[809] * x[472];
	v[0] += v[1];
	sporttournament32_pd[810] = 2. * x[308];
	v[1] = sporttournament32_pd[810] * x[453];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[811] = 2. * x[309];
	v[2] = sporttournament32_pd[811] * x[398];
	v[0] += v[2];
	sporttournament32_pd[812] = 2. * x[309];
	v[2] = sporttournament32_pd[812] * x[453];
	v[0] += v[2];
	sporttournament32_pd[813] = 2. * x[310];
	v[2] = sporttournament32_pd[813] * x[312];
	v[0] += v[2];
	sporttournament32_pd[814] = 2. * x[310];
	v[2] = sporttournament32_pd[814] * x[481];
	v[0] += v[2];
	sporttournament32_pd[815] = 2. * x[311];
	v[2] = sporttournament32_pd[815] * x[314];
	v[0] += v[2];
	sporttournament32_pd[816] = 2. * x[311];
	v[2] = sporttournament32_pd[816] * x[465];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[817] = 2. * x[312];
	v[1] = sporttournament32_pd[817] * x[314];
	v[0] += v[1];
	sporttournament32_pd[818] = 2. * x[312];
	v[1] = sporttournament32_pd[818] * x[453];
	v[0] += v[1];
	sporttournament32_pd[819] = 2. * x[313];
	v[1] = sporttournament32_pd[819] * x[315];
	v[0] += v[1];
	sporttournament32_pd[820] = 2. * x[313];
	v[1] = sporttournament32_pd[820] * x[494];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[821] = 2. * x[314];
	v[2] = sporttournament32_pd[821] * x[494];
	v[0] += v[2];
	sporttournament32_pd[822] = 2. * x[315];
	v[2] = sporttournament32_pd[822] * x[317];
	v[0] += v[2];
	sporttournament32_pd[823] = 2. * x[316];
	v[2] = sporttournament32_pd[823] * x[319];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[824] = 2. * x[316];
	v[1] = sporttournament32_pd[824] * x[354];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[825] = 2. * x[316];
	v[2] = sporttournament32_pd[825] * x[428];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[826] = 2. * x[317];
	v[1] = sporttournament32_pd[826] * x[319];
	v[0] += v[1];
	sporttournament32_pd[827] = 2. * x[317];
	v[1] = sporttournament32_pd[827] * x[366];
	v[0] += v[1];
	sporttournament32_pd[828] = 2. * x[317];
	v[1] = sporttournament32_pd[828] * x[494];
	v[0] += v[1];
	sporttournament32_pd[829] = 2. * x[318];
	v[1] = sporttournament32_pd[829] * x[320];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[830] = 2. * x[318];
	v[2] = sporttournament32_pd[830] * x[331];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[831] = 2. * x[318];
	v[1] = sporttournament32_pd[831] * x[392];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[832] = 2. * x[319];
	v[2] = sporttournament32_pd[832] * x[320];
	v[0] += v[2];
	sporttournament32_pd[833] = 2. * x[319];
	v[2] = sporttournament32_pd[833] * x[446];
	v[0] += v[2];
	sporttournament32_pd[834] = 2. * x[320];
	v[2] = sporttournament32_pd[834] * x[322];
	v[0] += v[2];
	sporttournament32_pd[835] = 2. * x[321];
	v[2] = sporttournament32_pd[835] * x[324];
	v[0] += v[2];
	sporttournament32_pd[836] = 2. * x[321];
	v[2] = sporttournament32_pd[836] * x[353];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[837] = 2. * x[322];
	v[1] = sporttournament32_pd[837] * x[324];
	v[0] += v[1];
	sporttournament32_pd[838] = 2. * x[322];
	v[1] = sporttournament32_pd[838] * x[353];
	v[0] += v[1];
	sporttournament32_pd[839] = 2. * x[323];
	v[1] = sporttournament32_pd[839] * x[488];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[840] = 2. * x[324];
	v[2] = sporttournament32_pd[840] * x[488];
	v[0] += v[2];
	sporttournament32_pd[841] = 2. * x[325];
	v[2] = sporttournament32_pd[841] * x[492];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[842] = 2. * x[325];
	v[1] = sporttournament32_pd[842] * x[495];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[843] = 2. * x[326];
	v[2] = sporttournament32_pd[843] * x[327];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[844] = 2. * x[326];
	v[1] = sporttournament32_pd[844] * x[391];
	v[0] += v[1];
	sporttournament32_pd[845] = 2. * x[328];
	v[1] = sporttournament32_pd[845] * x[378];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[846] = 2. * x[329];
	v[2] = sporttournament32_pd[846] * x[330];
	v[0] += v[2];
	sporttournament32_pd[847] = 2. * x[330];
	v[2] = sporttournament32_pd[847] * x[342];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[848] = 2. * x[332];
	v[1] = sporttournament32_pd[848] * x[395];
	v[0] += v[1];
	sporttournament32_pd[849] = 2. * x[332];
	v[1] = sporttournament32_pd[849] * x[437];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[850] = 2. * x[333];
	v[2] = sporttournament32_pd[850] * x[334];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[851] = 2. * x[333];
	v[1] = sporttournament32_pd[851] * x[418];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[852] = 2. * x[333];
	v[2] = sporttournament32_pd[852] * x[426];
	v[0] += v[2];
	sporttournament32_pd[853] = 2. * x[334];
	v[2] = sporttournament32_pd[853] * x[397];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[854] = 2. * x[335];
	v[1] = sporttournament32_pd[854] * x[367];
	v[0] += v[1];
	sporttournament32_pd[855] = 2. * x[337];
	v[1] = sporttournament32_pd[855] * x[338];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[856] = 2. * x[337];
	v[2] = sporttournament32_pd[856] * x[436];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[857] = 2. * x[338];
	v[1] = sporttournament32_pd[857] * x[394];
	v[0] += v[1];
	sporttournament32_pd[858] = 2. * x[338];
	v[1] = sporttournament32_pd[858] * x[467];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[859] = 2. * x[339];
	v[2] = sporttournament32_pd[859] * x[340];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[860] = 2. * x[339];
	v[1] = sporttournament32_pd[860] * x[413];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[861] = 2. * x[341];
	v[2] = sporttournament32_pd[861] * x[342];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[862] = 2. * x[343];
	v[1] = sporttournament32_pd[862] * x[355];
	v[0] += v[1];
	sporttournament32_pd[863] = 2. * x[346];
	v[1] = sporttournament32_pd[863] * x[347];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[864] = 2. * x[346];
	v[2] = sporttournament32_pd[864] * x[431];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[865] = 2. * x[347];
	v[1] = sporttournament32_pd[865] * x[386];
	v[0] += v[1];
	sporttournament32_pd[866] = 2. * x[347];
	v[1] = sporttournament32_pd[866] * x[463];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[867] = 2. * x[348];
	v[2] = sporttournament32_pd[867] * x[349];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[868] = 2. * x[348];
	v[1] = sporttournament32_pd[868] * x[350];
	v[0] += v[1];
	sporttournament32_pd[869] = 2. * x[348];
	v[1] = sporttournament32_pd[869] * x[405];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[870] = 2. * x[350];
	v[2] = sporttournament32_pd[870] * x[417];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[871] = 2. * x[351];
	v[1] = sporttournament32_pd[871] * x[352];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[872] = 2. * x[351];
	v[2] = sporttournament32_pd[872] * x[377];
	v[0] += v[2];
	sporttournament32_pd[873] = 2. * x[352];
	v[2] = sporttournament32_pd[873] * x[382];
	v[0] += v[2];
	sporttournament32_pd[874] = 2. * x[352];
	v[2] = sporttournament32_pd[874] * x[405];
	v[0] += v[2];
	sporttournament32_pd[875] = 2. * x[352];
	v[2] = sporttournament32_pd[875] * x[406];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[876] = 2. * x[353];
	v[1] = sporttournament32_pd[876] * x[354];
	v[0] += v[1];
	sporttournament32_pd[877] = 2. * x[355];
	v[1] = sporttournament32_pd[877] * x[356];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[878] = 2. * x[357];
	v[2] = sporttournament32_pd[878] * x[358];
	v[0] += v[2];
	sporttournament32_pd[879] = 2. * x[358];
	v[2] = sporttournament32_pd[879] * x[448];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[880] = 2. * x[358];
	v[1] = sporttournament32_pd[880] * x[449];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[881] = 2. * x[359];
	v[2] = sporttournament32_pd[881] * x[360];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[882] = 2. * x[359];
	v[1] = sporttournament32_pd[882] * x[424];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[883] = 2. * x[360];
	v[2] = sporttournament32_pd[883] * x[380];
	v[0] += v[2];
	sporttournament32_pd[884] = 2. * x[360];
	v[2] = sporttournament32_pd[884] * x[438];
	v[0] += v[2];
	sporttournament32_pd[885] = 2. * x[360];
	v[2] = sporttournament32_pd[885] * x[458];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[886] = 2. * x[361];
	v[1] = sporttournament32_pd[886] * x[362];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[887] = 2. * x[361];
	v[2] = sporttournament32_pd[887] * x[373];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[888] = 2. * x[362];
	v[1] = sporttournament32_pd[888] * x[424];
	v[0] += v[1];
	sporttournament32_pd[889] = 2. * x[362];
	v[1] = sporttournament32_pd[889] * x[478];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[890] = 2. * x[363];
	v[2] = sporttournament32_pd[890] * x[364];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[891] = 2. * x[363];
	v[1] = sporttournament32_pd[891] * x[384];
	v[0] += v[1];
	sporttournament32_pd[892] = 2. * x[364];
	v[1] = sporttournament32_pd[892] * x[389];
	v[0] += v[1];
	sporttournament32_pd[893] = 2. * x[366];
	v[1] = sporttournament32_pd[893] * x[433];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[894] = 2. * x[367];
	v[2] = sporttournament32_pd[894] * x[368];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[895] = 2. * x[369];
	v[1] = sporttournament32_pd[895] * x[370];
	v[0] += v[1];
	sporttournament32_pd[896] = 2. * x[370];
	v[1] = sporttournament32_pd[896] * x[457];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[897] = 2. * x[371];
	v[2] = sporttournament32_pd[897] * x[450];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[898] = 2. * x[372];
	v[1] = sporttournament32_pd[898] * x[437];
	v[0] += v[1];
	sporttournament32_pd[899] = 2. * x[372];
	v[1] = sporttournament32_pd[899] * x[484];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[900] = 2. * x[374];
	v[2] = sporttournament32_pd[900] * x[375];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[901] = 2. * x[375];
	v[1] = sporttournament32_pd[901] * x[389];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[902] = 2. * x[376];
	v[2] = sporttournament32_pd[902] * x[377];
	v[0] += v[2];
	sporttournament32_pd[903] = 2. * x[376];
	v[2] = sporttournament32_pd[903] * x[407];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[904] = 2. * x[377];
	v[1] = sporttournament32_pd[904] * x[445];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[905] = 2. * x[378];
	v[2] = sporttournament32_pd[905] * x[441];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[906] = 2. * x[381];
	v[1] = sporttournament32_pd[906] * x[436];
	v[0] += v[1];
	sporttournament32_pd[907] = 2. * x[381];
	v[1] = sporttournament32_pd[907] * x[490];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[908] = 2. * x[382];
	v[2] = sporttournament32_pd[908] * x[404];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[909] = 2. * x[383];
	v[1] = sporttournament32_pd[909] * x[384];
	v[0] += v[1];
	sporttournament32_pd[910] = 2. * x[383];
	v[1] = sporttournament32_pd[910] * x[400];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[911] = 2. * x[384];
	v[2] = sporttournament32_pd[911] * x[452];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[912] = 2. * x[387];
	v[1] = sporttournament32_pd[912] * x[403];
	v[0] += v[1];
	sporttournament32_pd[913] = 2. * x[387];
	v[1] = sporttournament32_pd[913] * x[431];
	v[0] += v[1];
	sporttournament32_pd[914] = 2. * x[388];
	v[1] = sporttournament32_pd[914] * x[437];
	v[0] += v[1];
	sporttournament32_pd[915] = 2. * x[388];
	v[1] = sporttournament32_pd[915] * x[464];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[916] = 2. * x[389];
	v[2] = sporttournament32_pd[916] * x[397];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[917] = 2. * x[391];
	v[1] = sporttournament32_pd[917] * x[415];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[918] = 2. * x[392];
	v[2] = sporttournament32_pd[918] * x[473];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[919] = 2. * x[395];
	v[1] = sporttournament32_pd[919] * x[396];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[920] = 2. * x[396];
	v[2] = sporttournament32_pd[920] * x[489];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[921] = 2. * x[397];
	v[1] = sporttournament32_pd[921] * x[475];
	v[0] += v[1];
	sporttournament32_pd[922] = 2. * x[399];
	v[1] = sporttournament32_pd[922] * x[400];
	v[0] += v[1];
	sporttournament32_pd[923] = 2. * x[399];
	v[1] = sporttournament32_pd[923] * x[408];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[924] = 2. * x[401];
	v[2] = sporttournament32_pd[924] * x[469];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[925] = 2. * x[405];
	v[1] = sporttournament32_pd[925] * x[425];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[926] = 2. * x[406];
	v[2] = sporttournament32_pd[926] * x[476];
	v[0] += v[2];
	sporttournament32_pd[927] = 2. * x[407];
	v[2] = sporttournament32_pd[927] * x[480];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[928] = 2. * x[409];
	v[1] = sporttournament32_pd[928] * x[466];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[929] = 2. * x[411];
	v[2] = sporttournament32_pd[929] * x[423];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[930] = 2. * x[412];
	v[1] = sporttournament32_pd[930] * x[423];
	v[0] += v[1];
	sporttournament32_pd[931] = 2. * x[412];
	v[1] = sporttournament32_pd[931] * x[483];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[932] = 2. * x[414];
	v[2] = sporttournament32_pd[932] * x[479];
	v[0] += v[2];
	sporttournament32_pd[933] = 2. * x[416];
	v[2] = sporttournament32_pd[933] * x[461];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[934] = 2. * x[419];
	v[1] = sporttournament32_pd[934] * x[486];
	v[0] += v[1];
	sporttournament32_pd[935] = 2. * x[421];
	v[1] = sporttournament32_pd[935] * x[428];
	v[0] += v[1];
	sporttournament32_pd[936] = 2. * x[422];
	v[1] = sporttournament32_pd[936] * x[434];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[937] = 2. * x[426];
	v[2] = sporttournament32_pd[937] * x[439];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[938] = 2. * x[428];
	v[1] = sporttournament32_pd[938] * x[429];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[939] = 2. * x[430];
	v[2] = sporttournament32_pd[939] * x[489];
	v[0] += v[2];
	sporttournament32_pd[940] = 2. * x[435];
	v[2] = sporttournament32_pd[940] * x[493];
	v[0] += v[2];
	sporttournament32_pd[941] = 2. * x[437];
	v[2] = sporttournament32_pd[941] * x[438];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[942] = 2. * x[440];
	v[1] = sporttournament32_pd[942] * x[441];
	v[0] += v[1];
	sporttournament32_pd[943] = 2. * x[440];
	v[1] = sporttournament32_pd[943] * x[442];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[944] = 2. * x[441];
	v[2] = sporttournament32_pd[944] * x[473];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[945] = 2. * x[444];
	v[1] = sporttournament32_pd[945] * x[450];
	v[0] += v[1];
	sporttournament32_pd[946] = 2. * x[446];
	v[1] = sporttournament32_pd[946] * x[466];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[947] = 2. * x[447];
	v[2] = sporttournament32_pd[947] * x[462];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[948] = 2. * x[450];
	v[1] = sporttournament32_pd[948] * x[451];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[949] = 2. * x[454];
	v[2] = sporttournament32_pd[949] * x[461];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[950] = 2. * x[455];
	v[1] = sporttournament32_pd[950] * x[456];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[951] = 2. * x[468];
	v[2] = sporttournament32_pd[951] * x[485];
	v[0] += v[2];
	sporttournament32_pd[952] = 2. * x[470];
	v[2] = sporttournament32_pd[952] * x[491];
	v[0] += v[2];
	sporttournament32_pd[953] = 2. * x[471];
	v[2] = sporttournament32_pd[953] * x[475];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[954] = 2. * x[480];
	v[1] = sporttournament32_pd[954] * x[481];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[955] = 2. * x[483];
	v[2] = sporttournament32_pd[955] * x[485];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[956] = 2. * x[484];
	v[1] = sporttournament32_pd[956] * x[485];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament32_pd[957] = 2. * x[487];
	v[2] = sporttournament32_pd[957] * x[488];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament32_pd[958] = 2. * x[488];
	v[1] = sporttournament32_pd[958] * x[495];
	v[0] += v[1];
	sporttournament32_pd[959] = 2. * x[490];
	v[1] = sporttournament32_pd[959] * x[491];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += 2.*x[5];
	t1 += -4.*x[6];
	t1 += -2.*x[7];
	t1 += -2.*x[8];
	t1 += 2.*x[9];
	t1 += -4.*x[10];
	t1 += -2.*x[11];
	t1 += -2.*x[12];
	t1 += -2.*x[13];
	t1 += -2.*x[14];
	t1 += 2.*x[15];
	t1 += -2.*x[16];
	t1 += -2.*x[17];
	t1 += -2.*x[18];
	t1 += 2.*x[19];
	t1 += -2.*x[20];
	t1 += -2.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += -2.*x[24];
	t1 += 2.*x[25];
	t1 += -2.*x[26];
	t1 += -2.*x[27];
	t1 += -2.*x[28];
	t1 += -2.*x[29];
	t1 += 2.*x[30];
	t1 += -4.*x[31];
	t1 += -2.*x[32];
	t1 += -2.*x[33];
	t1 += -2.*x[34];
	t1 += -2.*x[35];
	t1 += -2.*x[36];
	t1 += -2.*x[37];
	t1 += -2.*x[38];
	t1 += -4.*x[39];
	t1 += -4.*x[40];
	t1 += -2.*x[41];
	t1 += -2.*x[42];
	t1 += -2.*x[43];
	t1 += -2.*x[44];
	t1 += -2.*x[45];
	t1 += -2.*x[46];
	t1 += -2.*x[47];
	t1 += -2.*x[48];
	t1 += -2.*x[49];
	t1 += -4.*x[50];
	t1 += -4.*x[51];
	t1 += -2.*x[52];
	t1 += -4.*x[53];
	t1 += -4.*x[54];
	t1 += -2.*x[55];
	t1 += -2.*x[56];
	t1 += -4.*x[57];
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
	t1 += 2.*x[71];
	t1 += -4.*x[72];
	t1 += -2.*x[73];
	t1 += -4.*x[74];
	t1 += -2.*x[75];
	t1 += -2.*x[76];
	t1 += -2.*x[77];
	t1 += -2.*x[78];
	t1 += 2.*x[79];
	t1 += -4.*x[80];
	t1 += 2.*x[81];
	t1 += -2.*x[82];
	t1 += -2.*x[83];
	t1 += -4.*x[84];
	t1 += -2.*x[85];
	t1 += -2.*x[86];
	t1 += -2.*x[87];
	t1 += -2.*x[88];
	t1 += 2.*x[89];
	t1 += -2.*x[90];
	t1 += -2.*x[91];
	t1 += -4.*x[92];
	t1 += -4.*x[93];
	t1 += -4.*x[94];
	t1 += -4.*x[95];
	t1 += -2.*x[96];
	t1 += -2.*x[97];
	t1 += -2.*x[98];
	t1 += 2.*x[99];
	t1 += 2.*x[100];
	t1 += 2.*x[101];
	t1 += -2.*x[102];
	t1 += -2.*x[103];
	t1 += -4.*x[104];
	t1 += -4.*x[105];
	t1 += -2.*x[106];
	t1 += -2.*x[107];
	t1 += -2.*x[108];
	t1 += -2.*x[109];
	t1 += -2.*x[110];
	t1 += -2.*x[111];
	t1 += 2.*x[112];
	t1 += -4.*x[113];
	t1 += -2.*x[114];
	t1 += -4.*x[115];
	t1 += -4.*x[116];
	t1 += -4.*x[117];
	t1 += -4.*x[118];
	t1 += -2.*x[119];
	t1 += -4.*x[120];
	t1 += 2.*x[121];
	t1 += -4.*x[122];
	t1 += -2.*x[123];
	t1 += -2.*x[124];
	t1 += -2.*x[125];
	t1 += -2.*x[126];
	t1 += 2.*x[127];
	t1 += 2.*x[128];
	t1 += 4.*x[129];
	t1 += -4.*x[130];
	t1 += -2.*x[131];
	t1 += -4.*x[132];
	t1 += -2.*x[133];
	t1 += -2.*x[134];
	t1 += -2.*x[135];
	t1 += -2.*x[136];
	t1 += -4.*x[137];
	t1 += -2.*x[138];
	t1 += -2.*x[139];
	t1 += 2.*x[140];
	t1 += 2.*x[141];
	t1 += -2.*x[142];
	t1 += -4.*x[143];
	t1 += -2.*x[144];
	t1 += -4.*x[145];
	t1 += -4.*x[146];
	t1 += -2.*x[147];
	t1 += -4.*x[148];
	t1 += -4.*x[149];
	t1 += -2.*x[150];
	t1 += -2.*x[151];
	t1 += -2.*x[152];
	t1 += -2.*x[153];
	t1 += 2.*x[154];
	t1 += 2.*x[155];
	t1 += 4.*x[156];
	t1 += -4.*x[157];
	t1 += -2.*x[158];
	t1 += 2.*x[159];
	t1 += -4.*x[160];
	t1 += -2.*x[161];
	t1 += -2.*x[162];
	t1 += 2.*x[163];
	t1 += -2.*x[164];
	t1 += -2.*x[165];
	t1 += 4.*x[166];
	t1 += 2.*x[167];
	t1 += -4.*x[168];
	t1 += -4.*x[169];
	t1 += -4.*x[170];
	t1 += -4.*x[171];
	t1 += -4.*x[172];
	t1 += -2.*x[173];
	t1 += -4.*x[174];
	t1 += 2.*x[175];
	t1 += 2.*x[176];
	t1 += -2.*x[177];
	t1 += -4.*x[178];
	t1 += -2.*x[179];
	t1 += -2.*x[180];
	t1 += -2.*x[181];
	t1 += -2.*x[182];
	t1 += -4.*x[183];
	t1 += 2.*x[184];
	t1 += -4.*x[185];
	t1 += -2.*x[186];
	t1 += 2.*x[187];
	t1 += -4.*x[188];
	t1 += 2.*x[189];
	t1 += 2.*x[190];
	t1 += -4.*x[191];
	t1 += 2.*x[192];
	t1 += -2.*x[193];
	t1 += -2.*x[194];
	t1 += -2.*x[195];
	t1 += -2.*x[196];
	t1 += 2.*x[197];
	t1 += 4.*x[198];
	t1 += -2.*x[199];
	t1 += 2.*x[200];
	t1 += -4.*x[201];
	t1 += -4.*x[202];
	t1 += -4.*x[203];
	t1 += -4.*x[204];
	t1 += -4.*x[205];
	t1 += -4.*x[206];
	t1 += 2.*x[207];
	t1 += 2.*x[208];
	t1 += -2.*x[209];
	t1 += -2.*x[210];
	t1 += -4.*x[211];
	t1 += -2.*x[212];
	t1 += -2.*x[213];
	t1 += 2.*x[214];
	t1 += -2.*x[215];
	t1 += 2.*x[216];
	t1 += -2.*x[217];
	t1 += 2.*x[218];
	t1 += -4.*x[219];
	t1 += 2.*x[220];
	t1 += 2.*x[221];
	t1 += -2.*x[222];
	t1 += 2.*x[223];
	t1 += -4.*x[224];
	t1 += -2.*x[225];
	t1 += -2.*x[226];
	t1 += -2.*x[227];
	t1 += -2.*x[228];
	t1 += -2.*x[229];
	t1 += 2.*x[230];
	t1 += 4.*x[231];
	t1 += -2.*x[232];
	t1 += 2.*x[233];
	t1 += -4.*x[234];
	t1 += -2.*x[235];
	t1 += -2.*x[236];
	t1 += -4.*x[237];
	t1 += -2.*x[238];
	t1 += 2.*x[239];
	t1 += -2.*x[240];
	t1 += -2.*x[241];
	t1 += -2.*x[242];
	t1 += -4.*x[243];
	t1 += -4.*x[244];
	t1 += -4.*x[245];
	t1 += -2.*x[246];
	t1 += -2.*x[247];
	t1 += -2.*x[248];
	t1 += 2.*x[249];
	t1 += -2.*x[250];
	t1 += -2.*x[251];
	t1 += 2.*x[252];
	t1 += -4.*x[253];
	t1 += 2.*x[254];
	t1 += 2.*x[255];
	t1 += 2.*x[256];
	t1 += -4.*x[257];
	t1 += 2.*x[258];
	t1 += -2.*x[259];
	t1 += -4.*x[260];
	t1 += 2.*x[261];
	t1 += -2.*x[262];
	t1 += -2.*x[263];
	t1 += -2.*x[264];
	t1 += -2.*x[265];
	t1 += 2.*x[266];
	t1 += 4.*x[267];
	t1 += -2.*x[268];
	t1 += 4.*x[269];
	t1 += -4.*x[270];
	t1 += -2.*x[271];
	t1 += -2.*x[272];
	t1 += -2.*x[273];
	t1 += -4.*x[274];
	t1 += -4.*x[275];
	t1 += -4.*x[276];
	t1 += -4.*x[277];
	t1 += -4.*x[278];
	t1 += 2.*x[279];
	t1 += -2.*x[280];
	t1 += -2.*x[281];
	t1 += -2.*x[282];
	t1 += -2.*x[283];
	t1 += -4.*x[284];
	t1 += -2.*x[285];
	t1 += -2.*x[286];
	t1 += -2.*x[287];
	t1 += 2.*x[288];
	t1 += -2.*x[289];
	t1 += -4.*x[290];
	t1 += 2.*x[291];
	t1 += -4.*x[292];
	t1 += 2.*x[293];
	t1 += 2.*x[294];
	t1 += -4.*x[295];
	t1 += 2.*x[296];
	t1 += -2.*x[297];
	t1 += -2.*x[298];
	t1 += -4.*x[299];
	t1 += 2.*x[300];
	t1 += -4.*x[301];
	t1 += -2.*x[302];
	t1 += -2.*x[303];
	t1 += 2.*x[304];
	t1 += -2.*x[305];
	t1 += 2.*x[306];
	t1 += -2.*x[307];
	t1 += 2.*x[308];
	t1 += -4.*x[309];
	t1 += -2.*x[310];
	t1 += -2.*x[311];
	t1 += -2.*x[312];
	t1 += -2.*x[313];
	t1 += -4.*x[314];
	t1 += -4.*x[315];
	t1 += 2.*x[316];
	t1 += -4.*x[317];
	t1 += 2.*x[318];
	t1 += -2.*x[319];
	t1 += -2.*x[320];
	t1 += -2.*x[321];
	t1 += -2.*x[322];
	t1 += -2.*x[323];
	t1 += -4.*x[324];
	t1 += 2.*x[325];
	t1 += x[496];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[491] = -sporttournament32_pd[959];
	J[490] = -x[491]*2.;
	J[495] = sporttournament32_pd[958];
	J[488] = x[495]*2.;
	J[488] -= sporttournament32_pd[957];
	J[487] = -x[488]*2.;
	J[485] = -sporttournament32_pd[956];
	J[484] = -x[485]*2.;
	J[485] -= sporttournament32_pd[955];
	J[483] = -x[485]*2.;
	J[481] = -sporttournament32_pd[954];
	J[480] = -x[481]*2.;
	J[475] = -sporttournament32_pd[953];
	J[471] = -x[475]*2.;
	J[491] += sporttournament32_pd[952];
	J[470] = x[491]*2.;
	J[485] += sporttournament32_pd[951];
	J[468] = x[485]*2.;
	J[456] = -sporttournament32_pd[950];
	J[455] = -x[456]*2.;
	J[461] = -sporttournament32_pd[949];
	J[454] = -x[461]*2.;
	J[451] = -sporttournament32_pd[948];
	J[450] = -x[451]*2.;
	J[462] = -sporttournament32_pd[947];
	J[447] = -x[462]*2.;
	J[466] = -sporttournament32_pd[946];
	J[446] = -x[466]*2.;
	J[450] += sporttournament32_pd[945];
	J[444] = x[450]*2.;
	J[473] = -sporttournament32_pd[944];
	J[441] = -x[473]*2.;
	J[442] = -sporttournament32_pd[943];
	J[440] = -x[442]*2.;
	J[441] += sporttournament32_pd[942];
	J[440] += x[441]*2.;
	J[438] = -sporttournament32_pd[941];
	J[437] = -x[438]*2.;
	J[493] = sporttournament32_pd[940];
	J[435] = x[493]*2.;
	J[489] = sporttournament32_pd[939];
	J[430] = x[489]*2.;
	J[429] = -sporttournament32_pd[938];
	J[428] = -x[429]*2.;
	J[439] = -sporttournament32_pd[937];
	J[426] = -x[439]*2.;
	J[434] = -sporttournament32_pd[936];
	J[422] = -x[434]*2.;
	J[428] += sporttournament32_pd[935];
	J[421] = x[428]*2.;
	J[486] = sporttournament32_pd[934];
	J[419] = x[486]*2.;
	J[461] -= sporttournament32_pd[933];
	J[416] = -x[461]*2.;
	J[479] = sporttournament32_pd[932];
	J[414] = x[479]*2.;
	J[483] -= sporttournament32_pd[931];
	J[412] = -x[483]*2.;
	J[423] = sporttournament32_pd[930];
	J[412] += x[423]*2.;
	J[423] -= sporttournament32_pd[929];
	J[411] = -x[423]*2.;
	J[466] -= sporttournament32_pd[928];
	J[409] = -x[466]*2.;
	J[480] -= sporttournament32_pd[927];
	J[407] = -x[480]*2.;
	J[476] = sporttournament32_pd[926];
	J[406] = x[476]*2.;
	J[425] = -sporttournament32_pd[925];
	J[405] = -x[425]*2.;
	J[469] = -sporttournament32_pd[924];
	J[401] = -x[469]*2.;
	J[408] = -sporttournament32_pd[923];
	J[399] = -x[408]*2.;
	J[400] = sporttournament32_pd[922];
	J[399] += x[400]*2.;
	J[475] += sporttournament32_pd[921];
	J[397] = x[475]*2.;
	J[489] -= sporttournament32_pd[920];
	J[396] = -x[489]*2.;
	J[396] -= sporttournament32_pd[919];
	J[395] = -x[396]*2.;
	J[473] -= sporttournament32_pd[918];
	J[392] = -x[473]*2.;
	J[415] = -sporttournament32_pd[917];
	J[391] = -x[415]*2.;
	J[397] -= sporttournament32_pd[916];
	J[389] = -x[397]*2.;
	J[464] = -sporttournament32_pd[915];
	J[388] = -x[464]*2.;
	J[437] += sporttournament32_pd[914];
	J[388] += x[437]*2.;
	J[431] = sporttournament32_pd[913];
	J[387] = x[431]*2.;
	J[403] = sporttournament32_pd[912];
	J[387] += x[403]*2.;
	J[452] = -sporttournament32_pd[911];
	J[384] = -x[452]*2.;
	J[400] -= sporttournament32_pd[910];
	J[383] = -x[400]*2.;
	J[384] += sporttournament32_pd[909];
	J[383] += x[384]*2.;
	J[404] = -sporttournament32_pd[908];
	J[382] = -x[404]*2.;
	J[490] -= sporttournament32_pd[907];
	J[381] = -x[490]*2.;
	J[436] = sporttournament32_pd[906];
	J[381] += x[436]*2.;
	J[441] -= sporttournament32_pd[905];
	J[378] = -x[441]*2.;
	J[445] = -sporttournament32_pd[904];
	J[377] = -x[445]*2.;
	J[407] -= sporttournament32_pd[903];
	J[376] = -x[407]*2.;
	J[377] += sporttournament32_pd[902];
	J[376] += x[377]*2.;
	J[389] -= sporttournament32_pd[901];
	J[375] = -x[389]*2.;
	J[375] -= sporttournament32_pd[900];
	J[374] = -x[375]*2.;
	J[484] -= sporttournament32_pd[899];
	J[372] = -x[484]*2.;
	J[437] += sporttournament32_pd[898];
	J[372] += x[437]*2.;
	J[450] -= sporttournament32_pd[897];
	J[371] = -x[450]*2.;
	J[457] = -sporttournament32_pd[896];
	J[370] = -x[457]*2.;
	J[370] += sporttournament32_pd[895];
	J[369] = x[370]*2.;
	J[368] = -sporttournament32_pd[894];
	J[367] = -x[368]*2.;
	J[433] = -sporttournament32_pd[893];
	J[366] = -x[433]*2.;
	J[389] += sporttournament32_pd[892];
	J[364] = x[389]*2.;
	J[384] += sporttournament32_pd[891];
	J[363] = x[384]*2.;
	J[364] -= sporttournament32_pd[890];
	J[363] -= x[364]*2.;
	J[478] = -sporttournament32_pd[889];
	J[362] = -x[478]*2.;
	J[424] = sporttournament32_pd[888];
	J[362] += x[424]*2.;
	J[373] = -sporttournament32_pd[887];
	J[361] = -x[373]*2.;
	J[362] -= sporttournament32_pd[886];
	J[361] -= x[362]*2.;
	J[458] = -sporttournament32_pd[885];
	J[360] = -x[458]*2.;
	J[438] += sporttournament32_pd[884];
	J[360] += x[438]*2.;
	J[380] = sporttournament32_pd[883];
	J[360] += x[380]*2.;
	J[424] -= sporttournament32_pd[882];
	J[359] = -x[424]*2.;
	J[360] -= sporttournament32_pd[881];
	J[359] -= x[360]*2.;
	J[449] = -sporttournament32_pd[880];
	J[358] = -x[449]*2.;
	J[448] = -sporttournament32_pd[879];
	J[358] -= x[448]*2.;
	J[358] += sporttournament32_pd[878];
	J[357] = x[358]*2.;
	J[356] = -sporttournament32_pd[877];
	J[355] = -x[356]*2.;
	J[354] = sporttournament32_pd[876];
	J[353] = x[354]*2.;
	J[406] -= sporttournament32_pd[875];
	J[352] = -x[406]*2.;
	J[405] += sporttournament32_pd[874];
	J[352] += x[405]*2.;
	J[382] += sporttournament32_pd[873];
	J[352] += x[382]*2.;
	J[377] += sporttournament32_pd[872];
	J[351] = x[377]*2.;
	J[352] -= sporttournament32_pd[871];
	J[351] -= x[352]*2.;
	J[417] = -sporttournament32_pd[870];
	J[350] = -x[417]*2.;
	J[405] -= sporttournament32_pd[869];
	J[348] = -x[405]*2.;
	J[350] += sporttournament32_pd[868];
	J[348] += x[350]*2.;
	J[349] = -sporttournament32_pd[867];
	J[348] -= x[349]*2.;
	J[463] = -sporttournament32_pd[866];
	J[347] = -x[463]*2.;
	J[386] = sporttournament32_pd[865];
	J[347] += x[386]*2.;
	J[431] -= sporttournament32_pd[864];
	J[346] = -x[431]*2.;
	J[347] -= sporttournament32_pd[863];
	J[346] -= x[347]*2.;
	J[355] += sporttournament32_pd[862];
	J[343] = x[355]*2.;
	J[342] = -sporttournament32_pd[861];
	J[341] = -x[342]*2.;
	J[413] = -sporttournament32_pd[860];
	J[339] = -x[413]*2.;
	J[340] = -sporttournament32_pd[859];
	J[339] -= x[340]*2.;
	J[467] = -sporttournament32_pd[858];
	J[338] = -x[467]*2.;
	J[394] = sporttournament32_pd[857];
	J[338] += x[394]*2.;
	J[436] -= sporttournament32_pd[856];
	J[337] = -x[436]*2.;
	J[338] -= sporttournament32_pd[855];
	J[337] -= x[338]*2.;
	J[367] += sporttournament32_pd[854];
	J[335] = x[367]*2.;
	J[397] -= sporttournament32_pd[853];
	J[334] = -x[397]*2.;
	J[426] += sporttournament32_pd[852];
	J[333] = x[426]*2.;
	J[418] = -sporttournament32_pd[851];
	J[333] -= x[418]*2.;
	J[334] -= sporttournament32_pd[850];
	J[333] -= x[334]*2.;
	J[437] -= sporttournament32_pd[849];
	J[332] = -x[437]*2.;
	J[395] += sporttournament32_pd[848];
	J[332] += x[395]*2.;
	J[342] -= sporttournament32_pd[847];
	J[330] = -x[342]*2.;
	J[330] += sporttournament32_pd[846];
	J[329] = x[330]*2.;
	J[378] -= sporttournament32_pd[845];
	J[328] = -x[378]*2.;
	J[391] += sporttournament32_pd[844];
	J[326] = x[391]*2.;
	J[327] = -sporttournament32_pd[843];
	J[326] -= x[327]*2.;
	J[495] -= sporttournament32_pd[842];
	J[325] = -x[495]*2. + 2.;
	J[492] = -sporttournament32_pd[841];
	J[325] -= x[492]*2.;
	J[488] += sporttournament32_pd[840];
	J[324] = x[488]*2. + -4.;
	J[488] -= sporttournament32_pd[839];
	J[323] = -x[488]*2. + -2.;
	J[353] += sporttournament32_pd[838];
	J[322] = x[353]*2. + -2.;
	J[324] += sporttournament32_pd[837];
	J[322] += x[324]*2.;
	J[353] -= sporttournament32_pd[836];
	J[321] = -x[353]*2. + -2.;
	J[324] += sporttournament32_pd[835];
	J[321] += x[324]*2.;
	J[322] += sporttournament32_pd[834];
	J[320] = x[322]*2. + -2.;
	J[446] += sporttournament32_pd[833];
	J[319] = x[446]*2. + -2.;
	J[320] += sporttournament32_pd[832];
	J[319] += x[320]*2.;
	J[392] -= sporttournament32_pd[831];
	J[318] = -x[392]*2. + 2.;
	J[331] = -sporttournament32_pd[830];
	J[318] -= x[331]*2.;
	J[320] -= sporttournament32_pd[829];
	J[318] -= x[320]*2.;
	J[494] = sporttournament32_pd[828];
	J[317] = x[494]*2. + -4.;
	J[366] += sporttournament32_pd[827];
	J[317] += x[366]*2.;
	J[319] += sporttournament32_pd[826];
	J[317] += x[319]*2.;
	J[428] -= sporttournament32_pd[825];
	J[316] = -x[428]*2. + 2.;
	J[354] -= sporttournament32_pd[824];
	J[316] -= x[354]*2.;
	J[319] -= sporttournament32_pd[823];
	J[316] -= x[319]*2.;
	J[317] += sporttournament32_pd[822];
	J[315] = x[317]*2. + -4.;
	J[494] += sporttournament32_pd[821];
	J[314] = x[494]*2. + -4.;
	J[494] -= sporttournament32_pd[820];
	J[313] = -x[494]*2. + -2.;
	J[315] += sporttournament32_pd[819];
	J[313] += x[315]*2.;
	J[453] = sporttournament32_pd[818];
	J[312] = x[453]*2. + -2.;
	J[314] += sporttournament32_pd[817];
	J[312] += x[314]*2.;
	J[465] = -sporttournament32_pd[816];
	J[311] = -x[465]*2. + -2.;
	J[314] += sporttournament32_pd[815];
	J[311] += x[314]*2.;
	J[481] += sporttournament32_pd[814];
	J[310] = x[481]*2. + -2.;
	J[312] += sporttournament32_pd[813];
	J[310] += x[312]*2.;
	J[453] += sporttournament32_pd[812];
	J[309] = x[453]*2. + -4.;
	J[398] = sporttournament32_pd[811];
	J[309] += x[398]*2.;
	J[453] -= sporttournament32_pd[810];
	J[308] = -x[453]*2. + 2.;
	J[472] = sporttournament32_pd[809];
	J[307] = x[472]*2. + -2.;
	J[309] += sporttournament32_pd[808];
	J[307] += x[309]*2.;
	J[308] += sporttournament32_pd[807];
	J[307] += x[308]*2.;
	J[414] -= sporttournament32_pd[806];
	J[306] = -x[414]*2. + 2.;
	J[398] -= sporttournament32_pd[805];
	J[306] -= x[398]*2.;
	J[307] -= sporttournament32_pd[804];
	J[306] -= x[307]*2.;
	J[472] += sporttournament32_pd[803];
	J[305] = x[472]*2. + -2.;
	J[364] -= sporttournament32_pd[802];
	J[305] -= x[364]*2.;
	J[306] += sporttournament32_pd[801];
	J[305] += x[306]*2.;
	J[472] -= sporttournament32_pd[800];
	J[304] = -x[472]*2. + 2.;
	J[471] -= sporttournament32_pd[799];
	J[304] -= x[471]*2.;
	J[426] -= sporttournament32_pd[798];
	J[303] = -x[426]*2. + -2.;
	J[305] += sporttournament32_pd[797];
	J[303] += x[305]*2.;
	J[304] += sporttournament32_pd[796];
	J[303] += x[304]*2.;
	J[303] += sporttournament32_pd[795];
	J[302] = x[303]*2. + -2.;
	J[373] += sporttournament32_pd[794];
	J[301] = x[373]*2. + -4.;
	J[302] += sporttournament32_pd[793];
	J[301] += x[302]*2.;
	J[418] -= sporttournament32_pd[792];
	J[300] = -x[418]*2. + 2.;
	J[302] -= sporttournament32_pd[791];
	J[300] -= x[302]*2.;
	J[425] += sporttournament32_pd[790];
	J[299] = x[425]*2. + -4.;
	J[417] += sporttournament32_pd[789];
	J[299] += x[417]*2.;
	J[301] += sporttournament32_pd[788];
	J[299] += x[301]*2.;
	J[485] += sporttournament32_pd[787];
	J[298] = x[485]*2. + -2.;
	J[299] += sporttournament32_pd[786];
	J[298] += x[299]*2.;
	J[483] += sporttournament32_pd[785];
	J[297] = x[483]*2. + -2.;
	J[478] -= sporttournament32_pd[784];
	J[297] -= x[478]*2.;
	J[464] += sporttournament32_pd[783];
	J[297] += x[464]*2.;
	J[417] += sporttournament32_pd[782];
	J[297] += x[417]*2.;
	J[417] -= sporttournament32_pd[781];
	J[296] = -x[417]*2. + 2.;
	J[403] -= sporttournament32_pd[780];
	J[296] -= x[403]*2.;
	J[489] += sporttournament32_pd[779];
	J[295] = x[489]*2. + -4.;
	J[464] += sporttournament32_pd[778];
	J[295] += x[464]*2.;
	J[450] += sporttournament32_pd[777];
	J[295] += x[450]*2.;
	J[464] -= sporttournament32_pd[776];
	J[294] = -x[464]*2. + 2.;
	J[436] -= sporttournament32_pd[775];
	J[294] -= x[436]*2.;
	J[347] += sporttournament32_pd[774];
	J[294] += x[347]*2.;
	J[489] -= sporttournament32_pd[773];
	J[293] = -x[489]*2. + 2.;
	J[430] += sporttournament32_pd[772];
	J[292] = x[430]*2. + -4.;
	J[371] += sporttournament32_pd[771];
	J[292] += x[371]*2.;
	J[345] = sporttournament32_pd[770];
	J[292] += x[345]*2.;
	J[430] -= sporttournament32_pd[769];
	J[291] = -x[430]*2. + 2.;
	J[474] = sporttournament32_pd[768];
	J[290] = x[474]*2. + -4.;
	J[410] = sporttournament32_pd[767];
	J[290] += x[410]*2.;
	J[292] += sporttournament32_pd[766];
	J[290] += x[292]*2.;
	J[474] += sporttournament32_pd[765];
	J[289] = x[474]*2. + -2.;
	J[474] -= sporttournament32_pd[764];
	J[288] = -x[474]*2. + 2.;
	J[336] = sporttournament32_pd[763];
	J[287] = x[336]*2. + -2.;
	J[289] += sporttournament32_pd[762];
	J[287] += x[289]*2.;
	J[456] += sporttournament32_pd[761];
	J[286] = x[456]*2. + -2.;
	J[289] += sporttournament32_pd[760];
	J[286] += x[289]*2.;
	J[288] -= sporttournament32_pd[759];
	J[286] -= x[288]*2.;
	J[287] += sporttournament32_pd[758];
	J[285] = x[287]*2. + -2.;
	J[342] += sporttournament32_pd[757];
	J[284] = x[342]*2. + -4.;
	J[325] += sporttournament32_pd[756];
	J[284] += x[325]*2.;
	J[325] -= sporttournament32_pd[755];
	J[283] = -x[325]*2. + -2.;
	J[284] += sporttournament32_pd[754];
	J[282] = x[284]*2. + -2.;
	J[283] += sporttournament32_pd[753];
	J[282] += x[283]*2.;
	J[342] += sporttournament32_pd[752];
	J[281] = x[342]*2. + -2.;
	J[454] += sporttournament32_pd[751];
	J[280] = x[454]*2. + -2.;
	J[421] -= sporttournament32_pd[750];
	J[280] -= x[421]*2.;
	J[281] += sporttournament32_pd[749];
	J[280] += x[281]*2.;
	J[401] -= sporttournament32_pd[748];
	J[279] = -x[401]*2. + 2.;
	J[281] -= sporttournament32_pd[747];
	J[279] -= x[281]*2.;
	J[354] += sporttournament32_pd[746];
	J[278] = x[354]*2. + -4.;
	J[280] += sporttournament32_pd[745];
	J[278] += x[280]*2.;
	J[278] += sporttournament32_pd[744];
	J[277] = x[278]*2. + -4.;
	J[278] += sporttournament32_pd[743];
	J[276] = x[278]*2. + -4.;
	J[277] += sporttournament32_pd[742];
	J[275] = x[277]*2. + -4.;
	J[277] += sporttournament32_pd[741];
	J[274] = x[277]*2. + -4.;
	J[460] = sporttournament32_pd[740];
	J[273] = x[460]*2. + -2.;
	J[275] += sporttournament32_pd[739];
	J[273] += x[275]*2.;
	J[460] -= sporttournament32_pd[738];
	J[272] = -x[460]*2. + -2.;
	J[275] += sporttournament32_pd[737];
	J[272] += x[275]*2.;
	J[400] -= sporttournament32_pd[736];
	J[271] = -x[400]*2. + -2.;
	J[273] += sporttournament32_pd[735];
	J[271] += x[273]*2.;
	J[460] += sporttournament32_pd[734];
	J[270] = x[460]*2. + -4.;
	J[390] = sporttournament32_pd[733];
	J[270] += x[390]*2.;
	J[460] -= sporttournament32_pd[732];
	J[269] = -x[460]*2. + 4.;
	J[459] = -sporttournament32_pd[731];
	J[269] -= x[459]*2.;
	J[327] -= sporttournament32_pd[730];
	J[269] -= x[327]*2.;
	J[476] += sporttournament32_pd[729];
	J[268] = x[476]*2. + -2.;
	J[420] = sporttournament32_pd[728];
	J[268] += x[420]*2.;
	J[270] += sporttournament32_pd[727];
	J[268] += x[270]*2.;
	J[419] -= sporttournament32_pd[726];
	J[267] = -x[419]*2. + 4.;
	J[390] -= sporttournament32_pd[725];
	J[267] -= x[390]*2.;
	J[268] -= sporttournament32_pd[724];
	J[267] -= x[268]*2.;
	J[476] -= sporttournament32_pd[723];
	J[266] = -x[476]*2. + 2.;
	J[471] += sporttournament32_pd[722];
	J[266] += x[471]*2.;
	J[445] += sporttournament32_pd[721];
	J[265] = x[445]*2. + -2.;
	J[406] += sporttournament32_pd[720];
	J[265] += x[406]*2.;
	J[265] += sporttournament32_pd[719];
	J[264] = x[265]*2. + -2.;
	J[339] += sporttournament32_pd[718];
	J[263] = x[339]*2. + -2.;
	J[265] -= sporttournament32_pd[717];
	J[263] -= x[265]*2.;
	J[373] -= sporttournament32_pd[716];
	J[262] = -x[373]*2. + -2.;
	J[264] += sporttournament32_pd[715];
	J[262] += x[264]*2.;
	J[413] -= sporttournament32_pd[714];
	J[261] = -x[413]*2. + 2.;
	J[264] -= sporttournament32_pd[713];
	J[261] -= x[264]*2.;
	J[298] += sporttournament32_pd[712];
	J[260] = x[298]*2. + -4.;
	J[262] += sporttournament32_pd[711];
	J[260] += x[262]*2.;
	J[261] += sporttournament32_pd[710];
	J[260] += x[261]*2.;
	J[491] += sporttournament32_pd[709];
	J[259] = x[491]*2. + -2.;
	J[387] -= sporttournament32_pd[708];
	J[259] -= x[387]*2.;
	J[260] += sporttournament32_pd[707];
	J[259] += x[260]*2.;
	J[424] += sporttournament32_pd[706];
	J[258] = x[424]*2. + 2.;
	J[395] -= sporttournament32_pd[705];
	J[258] -= x[395]*2.;
	J[298] -= sporttournament32_pd[704];
	J[258] -= x[298]*2.;
	J[493] += sporttournament32_pd[703];
	J[257] = x[493]*2. + -4.;
	J[468] += sporttournament32_pd[702];
	J[257] += x[468]*2.;
	J[468] -= sporttournament32_pd[701];
	J[256] = -x[468]*2. + 2.;
	J[431] -= sporttournament32_pd[700];
	J[256] -= x[431]*2.;
	J[338] += sporttournament32_pd[699];
	J[256] += x[338]*2.;
	J[444] -= sporttournament32_pd[698];
	J[255] = -x[444]*2. + 2.;
	J[380] -= sporttournament32_pd[697];
	J[255] -= x[380]*2.;
	J[293] -= sporttournament32_pd[696];
	J[255] -= x[293]*2.;
	J[257] += sporttournament32_pd[695];
	J[255] += x[257]*2.;
	J[493] -= sporttournament32_pd[694];
	J[254] = -x[493]*2. + 2.;
	J[435] += sporttournament32_pd[693];
	J[253] = x[435]*2. + -4.;
	J[393] = sporttournament32_pd[692];
	J[253] += x[393]*2.;
	J[435] -= sporttournament32_pd[691];
	J[252] = -x[435]*2. + 2.;
	J[477] = sporttournament32_pd[690];
	J[251] = x[477]*2. + -2.;
	J[410] -= sporttournament32_pd[689];
	J[251] -= x[410]*2.;
	J[253] += sporttournament32_pd[688];
	J[251] += x[253]*2.;
	J[477] += sporttournament32_pd[687];
	J[250] = x[477]*2. + -2.;
	J[462] += sporttournament32_pd[686];
	J[250] += x[462]*2.;
	J[477] -= sporttournament32_pd[685];
	J[249] = -x[477]*2. + 2.;
	J[462] -= sporttournament32_pd[684];
	J[249] -= x[462]*2.;
	J[344] = sporttournament32_pd[683];
	J[248] = x[344]*2. + -2.;
	J[250] += sporttournament32_pd[682];
	J[248] += x[250]*2.;
	J[248] += sporttournament32_pd[681];
	J[247] = x[248]*2. + -2.;
	J[246] = sporttournament32_pd[680] + -2.;
	J[245] = x[246]*2. + -4.;
	J[341] += sporttournament32_pd[679];
	J[244] = x[341]*2. + -4.;
	J[246] += sporttournament32_pd[678];
	J[244] += x[246]*2.;
	J[321] += sporttournament32_pd[677];
	J[243] = x[321]*2. + -4.;
	J[245] += sporttournament32_pd[676];
	J[243] += x[245]*2.;
	J[329] += sporttournament32_pd[675];
	J[242] = x[329]*2. + -2.;
	J[245] += sporttournament32_pd[674];
	J[242] += x[245]*2.;
	J[323] += sporttournament32_pd[673];
	J[241] = x[323]*2. + -2.;
	J[243] += sporttournament32_pd[672];
	J[241] += x[243]*2.;
	J[461] += sporttournament32_pd[671];
	J[240] = x[461]*2. + -2.;
	J[321] += sporttournament32_pd[670];
	J[240] += x[321]*2.;
	J[409] -= sporttournament32_pd[669];
	J[239] = -x[409]*2. + 2.;
	J[240] -= sporttournament32_pd[668];
	J[239] -= x[240]*2.;
	J[494] -= sporttournament32_pd[667];
	J[238] = -x[494]*2. + -2.;
	J[461] += sporttournament32_pd[666];
	J[238] += x[461]*2.;
	J[392] += sporttournament32_pd[665];
	J[237] = x[392]*2. + -4.;
	J[238] += sporttournament32_pd[664];
	J[237] += x[238]*2.;
	J[480] += sporttournament32_pd[663];
	J[236] = x[480]*2. + -2.;
	J[465] += sporttournament32_pd[662];
	J[236] += x[465]*2.;
	J[313] += sporttournament32_pd[661];
	J[236] += x[313]*2.;
	J[453] -= sporttournament32_pd[660];
	J[235] = -x[453]*2. + -2.;
	J[313] += sporttournament32_pd[659];
	J[235] += x[313]*2.;
	J[465] += sporttournament32_pd[658];
	J[234] = x[465]*2. + -4.;
	J[383] += sporttournament32_pd[657];
	J[234] += x[383]*2.;
	J[465] -= sporttournament32_pd[656];
	J[233] = -x[465]*2. + 2.;
	J[399] -= sporttournament32_pd[655];
	J[233] -= x[399]*2.;
	J[398] -= sporttournament32_pd[654];
	J[233] -= x[398]*2.;
	J[479] += sporttournament32_pd[653];
	J[232] = x[479]*2. + -2.;
	J[427] = sporttournament32_pd[652];
	J[232] += x[427]*2.;
	J[234] += sporttournament32_pd[651];
	J[232] += x[234]*2.;
	J[383] -= sporttournament32_pd[650];
	J[231] = -x[383]*2. + 4.;
	J[232] -= sporttournament32_pd[649];
	J[231] -= x[232]*2.;
	J[479] -= sporttournament32_pd[648];
	J[230] = -x[479]*2. + 2.;
	J[452] += sporttournament32_pd[647];
	J[229] = x[452]*2. + -2.;
	J[414] += sporttournament32_pd[646];
	J[229] += x[414]*2.;
	J[414] -= sporttournament32_pd[645];
	J[228] = -x[414]*2. + -2.;
	J[413] += sporttournament32_pd[644];
	J[228] += x[413]*2.;
	J[351] += sporttournament32_pd[643];
	J[228] += x[351]*2.;
	J[425] -= sporttournament32_pd[642];
	J[227] = -x[425]*2. + -2.;
	J[229] += sporttournament32_pd[641];
	J[227] += x[229]*2.;
	J[439] += sporttournament32_pd[640];
	J[226] = x[439]*2. + -2.;
	J[348] += sporttournament32_pd[639];
	J[226] += x[348]*2.;
	J[229] -= sporttournament32_pd[638];
	J[226] -= x[229]*2.;
	J[382] += sporttournament32_pd[637];
	J[225] = x[382]*2. + -2.;
	J[349] -= sporttournament32_pd[636];
	J[225] -= x[349]*2.;
	J[227] += sporttournament32_pd[635];
	J[225] += x[227]*2.;
	J[490] += sporttournament32_pd[634];
	J[224] = x[490]*2. + -4.;
	J[300] += sporttournament32_pd[633];
	J[224] += x[300]*2.;
	J[259] += sporttournament32_pd[632];
	J[224] += x[259]*2.;
	J[225] += sporttournament32_pd[631];
	J[224] += x[225]*2.;
	J[491] -= sporttournament32_pd[630];
	J[223] = -x[491]*2. + 2.;
	J[396] += sporttournament32_pd[629];
	J[223] += x[396]*2.;
	J[493] -= sporttournament32_pd[628];
	J[222] = -x[493]*2. + -2.;
	J[470] += sporttournament32_pd[627];
	J[222] += x[470]*2.;
	J[403] += sporttournament32_pd[626];
	J[222] += x[403]*2.;
	J[470] -= sporttournament32_pd[625];
	J[221] = -x[470]*2. + 2.;
	J[424] -= sporttournament32_pd[624];
	J[221] -= x[424]*2.;
	J[423] -= sporttournament32_pd[623];
	J[221] -= x[423]*2.;
	J[438] -= sporttournament32_pd[622];
	J[220] = -x[438]*2. + 2.;
	J[386] -= sporttournament32_pd[621];
	J[220] -= x[386]*2.;
	J[254] -= sporttournament32_pd[620];
	J[220] -= x[254]*2.;
	J[222] += sporttournament32_pd[619];
	J[220] += x[222]*2.;
	J[385] = sporttournament32_pd[618];
	J[219] = x[385]*2. + -4.;
	J[254] += sporttournament32_pd[617];
	J[219] += x[254]*2.;
	J[411] -= sporttournament32_pd[616];
	J[218] = -x[411]*2. + 2.;
	J[254] -= sporttournament32_pd[615];
	J[218] -= x[254]*2.;
	J[251] += sporttournament32_pd[614];
	J[218] += x[251]*2.;
	J[482] = sporttournament32_pd[613];
	J[217] = x[482]*2. + -2.;
	J[252] += sporttournament32_pd[612];
	J[217] += x[252]*2.;
	J[219] += sporttournament32_pd[611];
	J[217] += x[219]*2.;
	J[393] -= sporttournament32_pd[610];
	J[216] = -x[393]*2. + 2.;
	J[217] -= sporttournament32_pd[609];
	J[216] -= x[217]*2.;
	J[482] += sporttournament32_pd[608];
	J[215] = x[482]*2. + -2.;
	J[455] += sporttournament32_pd[607];
	J[215] += x[455]*2.;
	J[482] -= sporttournament32_pd[606];
	J[214] = -x[482]*2. + 2.;
	J[455] -= sporttournament32_pd[605];
	J[214] -= x[455]*2.;
	J[370] -= sporttournament32_pd[604];
	J[214] -= x[370]*2.;
	J[356] += sporttournament32_pd[603];
	J[213] = x[356]*2. + -2.;
	J[215] += sporttournament32_pd[602];
	J[213] += x[215]*2.;
	J[213] += sporttournament32_pd[601];
	J[212] = x[213]*2. + -2.;
	J[492] += sporttournament32_pd[600];
	J[211] = x[492]*2. + -4.;
	J[331] -= sporttournament32_pd[599];
	J[210] = -x[331]*2. + -2.;
	J[283] += sporttournament32_pd[598];
	J[210] += x[283]*2.;
	J[466] += sporttournament32_pd[597];
	J[209] = x[466]*2. + -2.;
	J[282] += sporttournament32_pd[596];
	J[209] += x[282]*2.;
	J[366] += sporttournament32_pd[595];
	J[208] = x[366]*2. + 2.;
	J[282] -= sporttournament32_pd[594];
	J[208] -= x[282]*2.;
	J[239] -= sporttournament32_pd[593];
	J[208] -= x[239]*2.;
	J[416] -= sporttournament32_pd[592];
	J[207] = -x[416]*2. + 2.;
	J[353] -= sporttournament32_pd[591];
	J[207] -= x[353]*2.;
	J[209] -= sporttournament32_pd[590];
	J[207] -= x[209]*2.;
	J[466] += sporttournament32_pd[589];
	J[206] = x[466]*2. + -4.;
	J[207] += sporttournament32_pd[588];
	J[206] += x[207]*2.;
	J[328] += sporttournament32_pd[587];
	J[205] = x[328]*2. + -4.;
	J[314] += sporttournament32_pd[586];
	J[205] += x[314]*2.;
	J[206] += sporttournament32_pd[585];
	J[205] += x[206]*2.;
	J[401] += sporttournament32_pd[584];
	J[204] = x[401]*2. + -4.;
	J[206] += sporttournament32_pd[583];
	J[204] += x[206]*2.;
	J[481] += sporttournament32_pd[582];
	J[203] = x[481]*2. + -4.;
	J[276] += sporttournament32_pd[581];
	J[203] += x[276]*2.;
	J[205] += sporttournament32_pd[580];
	J[203] += x[205]*2.;
	J[203] += sporttournament32_pd[579];
	J[202] = x[203]*2. + -4.;
	J[376] += sporttournament32_pd[578];
	J[201] = x[376]*2. + -4.;
	J[310] += sporttournament32_pd[577];
	J[201] += x[310]*2.;
	J[459] += sporttournament32_pd[576];
	J[200] = x[459]*2. + 2.;
	J[391] -= sporttournament32_pd[575];
	J[200] -= x[391]*2.;
	J[390] -= sporttournament32_pd[574];
	J[200] -= x[390]*2.;
	J[310] -= sporttournament32_pd[573];
	J[200] -= x[310]*2.;
	J[486] += sporttournament32_pd[572];
	J[199] = x[486]*2. + -2.;
	J[432] = sporttournament32_pd[571];
	J[199] += x[432]*2.;
	J[201] += sporttournament32_pd[570];
	J[199] += x[201]*2.;
	J[376] -= sporttournament32_pd[569];
	J[198] = -x[376]*2. + 4.;
	J[374] -= sporttournament32_pd[568];
	J[198] -= x[374]*2.;
	J[230] -= sporttournament32_pd[567];
	J[198] -= x[230]*2.;
	J[199] -= sporttournament32_pd[566];
	J[198] -= x[199]*2.;
	J[486] -= sporttournament32_pd[565];
	J[197] = -x[486]*2. + 2.;
	J[231] -= sporttournament32_pd[564];
	J[197] -= x[231]*2.;
	J[419] += sporttournament32_pd[563];
	J[196] = x[419]*2. + -2.;
	J[302] += sporttournament32_pd[562];
	J[196] += x[302]*2.;
	J[419] -= sporttournament32_pd[561];
	J[195] = -x[419]*2. + -2.;
	J[418] += sporttournament32_pd[560];
	J[195] += x[418]*2.;
	J[363] += sporttournament32_pd[559];
	J[195] += x[363]*2.;
	J[471] += sporttournament32_pd[558];
	J[194] = x[471]*2. + -2.;
	J[196] += sporttournament32_pd[557];
	J[194] += x[196]*2.;
	J[389] += sporttournament32_pd[556];
	J[193] = x[389]*2. + -2.;
	J[340] -= sporttournament32_pd[555];
	J[193] -= x[340]*2.;
	J[194] += sporttournament32_pd[554];
	J[193] += x[194]*2.;
	J[350] -= sporttournament32_pd[553];
	J[192] = -x[350]*2. + 2.;
	J[194] -= sporttournament32_pd[552];
	J[192] -= x[194]*2.;
	J[490] += sporttournament32_pd[551];
	J[191] = x[490]*2. + -4.;
	J[484] += sporttournament32_pd[550];
	J[191] += x[484]*2.;
	J[439] += sporttournament32_pd[549];
	J[191] += x[439]*2.;
	J[193] += sporttournament32_pd[548];
	J[191] += x[193]*2.;
	J[223] -= sporttournament32_pd[547];
	J[190] = -x[223]*2. + 2.;
	J[435] -= sporttournament32_pd[546];
	J[189] = -x[435]*2. + 2.;
	J[396] += sporttournament32_pd[545];
	J[189] += x[396]*2.;
	J[394] -= sporttournament32_pd[544];
	J[189] -= x[394]*2.;
	J[294] -= sporttournament32_pd[543];
	J[189] -= x[294]*2.;
	J[411] += sporttournament32_pd[542];
	J[188] = x[411]*2. + -4.;
	J[379] = sporttournament32_pd[541];
	J[188] += x[379]*2.;
	J[293] += sporttournament32_pd[540];
	J[188] += x[293]*2.;
	J[443] = -sporttournament32_pd[539];
	J[187] = -x[443]*2. + 2.;
	J[402] = -sporttournament32_pd[538];
	J[187] -= x[402]*2.;
	J[293] -= sporttournament32_pd[537];
	J[187] -= x[293]*2.;
	J[290] += sporttournament32_pd[536];
	J[187] += x[290]*2.;
	J[291] += sporttournament32_pd[535];
	J[186] = x[291]*2. + -2.;
	J[188] += sporttournament32_pd[534];
	J[186] += x[188]*2.;
	J[448] += sporttournament32_pd[533];
	J[185] = x[448]*2. + -4.;
	J[345] += sporttournament32_pd[532];
	J[185] += x[345]*2.;
	J[186] += sporttournament32_pd[531];
	J[185] += x[186]*2.;
	J[385] -= sporttournament32_pd[530];
	J[184] = -x[385]*2. + 2.;
	J[186] -= sporttournament32_pd[529];
	J[184] -= x[186]*2.;
	J[185] += sporttournament32_pd[528];
	J[183] = x[185]*2. + -4.;
	J[448] += sporttournament32_pd[527];
	J[182] = x[448]*2. + -2.;
	J[368] += sporttournament32_pd[526];
	J[182] += x[368]*2.;
	J[448] -= sporttournament32_pd[525];
	J[181] = -x[448]*2. + -2.;
	J[447] += sporttournament32_pd[524];
	J[181] += x[447]*2.;
	J[183] += sporttournament32_pd[523];
	J[181] += x[183]*2.;
	J[182] += sporttournament32_pd[522];
	J[180] = x[182]*2. + -2.;
	J[487] += sporttournament32_pd[521];
	J[179] = x[487]*2. + -2.;
	J[242] -= sporttournament32_pd[520];
	J[179] -= x[242]*2.;
	J[323] += sporttournament32_pd[519];
	J[178] = x[323]*2. + -4.;
	J[320] += sporttournament32_pd[518];
	J[178] += x[320]*2.;
	J[469] += sporttournament32_pd[517];
	J[177] = x[469]*2. + -2.;
	J[241] += sporttournament32_pd[516];
	J[177] += x[241]*2.;
	J[378] += sporttournament32_pd[515];
	J[176] = x[378]*2. + 2.;
	J[329] -= sporttournament32_pd[514];
	J[176] -= x[329]*2.;
	J[279] -= sporttournament32_pd[513];
	J[176] -= x[279]*2.;
	J[241] -= sporttournament32_pd[512];
	J[176] -= x[241]*2.;
	J[421] -= sporttournament32_pd[511];
	J[175] = -x[421]*2. + 2.;
	J[330] -= sporttournament32_pd[510];
	J[175] -= x[330]*2.;
	J[238] += sporttournament32_pd[509];
	J[175] += x[238]*2.;
	J[177] -= sporttournament32_pd[508];
	J[175] -= x[177]*2.;
	J[469] += sporttournament32_pd[507];
	J[174] = x[469]*2. + -4.;
	J[239] += sporttournament32_pd[506];
	J[174] += x[239]*2.;
	J[328] -= sporttournament32_pd[505];
	J[173] = -x[328]*2. + -2.;
	J[275] += sporttournament32_pd[504];
	J[173] += x[275]*2.;
	J[174] += sporttournament32_pd[503];
	J[173] += x[174]*2.;
	J[409] += sporttournament32_pd[502];
	J[172] = x[409]*2. + -4.;
	J[174] += sporttournament32_pd[501];
	J[172] += x[174]*2.;
	J[237] += sporttournament32_pd[500];
	J[171] = x[237]*2. + -4.;
	J[173] += sporttournament32_pd[499];
	J[171] += x[173]*2.;
	J[391] += sporttournament32_pd[498];
	J[170] = x[391]*2. + -4.;
	J[274] += sporttournament32_pd[497];
	J[170] += x[274]*2.;
	J[271] += sporttournament32_pd[496];
	J[170] += x[271]*2.;
	J[171] += sporttournament32_pd[495];
	J[170] += x[171]*2.;
	J[171] += sporttournament32_pd[494];
	J[169] = x[171]*2. + -4.;
	J[365] = sporttournament32_pd[493];
	J[168] = x[365]*2. + -4.;
	J[271] += sporttournament32_pd[492];
	J[168] += x[271]*2.;
	J[486] -= sporttournament32_pd[491];
	J[167] = -x[486]*2. + 2.;
	J[432] -= sporttournament32_pd[490];
	J[167] -= x[432]*2.;
	J[168] += sporttournament32_pd[489];
	J[167] += x[168]*2.;
	J[365] -= sporttournament32_pd[488];
	J[166] = -x[365]*2. + 4.;
	J[363] -= sporttournament32_pd[487];
	J[166] -= x[363]*2.;
	J[266] -= sporttournament32_pd[486];
	J[166] -= x[266]*2.;
	J[167] -= sporttournament32_pd[485];
	J[166] -= x[167]*2.;
	J[475] += sporttournament32_pd[484];
	J[165] = x[475]*2. + -2.;
	J[452] -= sporttournament32_pd[483];
	J[165] -= x[452]*2.;
	J[264] += sporttournament32_pd[482];
	J[165] += x[264]*2.;
	J[197] += sporttournament32_pd[481];
	J[165] += x[197]*2.;
	J[426] += sporttournament32_pd[480];
	J[164] = x[426]*2. + -2.;
	J[405] += sporttournament32_pd[479];
	J[164] += x[405]*2.;
	J[374] += sporttournament32_pd[478];
	J[164] += x[374]*2.;
	J[197] -= sporttournament32_pd[477];
	J[164] -= x[197]*2.;
	J[475] -= sporttournament32_pd[476];
	J[163] = -x[475]*2. + 2.;
	J[484] += sporttournament32_pd[475];
	J[162] = x[484]*2. + -2.;
	J[478] += sporttournament32_pd[474];
	J[162] += x[478]*2.;
	J[397] += sporttournament32_pd[473];
	J[162] += x[397]*2.;
	J[483] += sporttournament32_pd[472];
	J[161] = x[483]*2. + -2.;
	J[403] -= sporttournament32_pd[471];
	J[161] -= x[403]*2.;
	J[451] += sporttournament32_pd[470];
	J[160] = x[451]*2. + -4.;
	J[359] += sporttournament32_pd[469];
	J[160] += x[359]*2.;
	J[161] += sporttournament32_pd[468];
	J[160] += x[161]*2.;
	J[430] -= sporttournament32_pd[467];
	J[159] = -x[430]*2. + 2.;
	J[402] -= sporttournament32_pd[466];
	J[159] -= x[402]*2.;
	J[256] -= sporttournament32_pd[465];
	J[159] -= x[256]*2.;
	J[161] += sporttournament32_pd[464];
	J[159] += x[161]*2.;
	J[423] += sporttournament32_pd[463];
	J[158] = x[423]*2. + -2.;
	J[291] -= sporttournament32_pd[462];
	J[158] -= x[291]*2.;
	J[253] += sporttournament32_pd[461];
	J[158] += x[253]*2.;
	J[160] += sporttournament32_pd[460];
	J[158] += x[160]*2.;
	J[451] += sporttournament32_pd[459];
	J[157] = x[451]*2. + -4.;
	J[402] += sporttournament32_pd[458];
	J[157] += x[402]*2.;
	J[369] += sporttournament32_pd[457];
	J[157] += x[369]*2.;
	J[451] -= sporttournament32_pd[456];
	J[156] = -x[451]*2. + 4.;
	J[449] -= sporttournament32_pd[455];
	J[156] -= x[449]*2.;
	J[394] -= sporttournament32_pd[454];
	J[156] -= x[394]*2.;
	J[393] -= sporttournament32_pd[453];
	J[156] -= x[393]*2.;
	J[482] -= sporttournament32_pd[452];
	J[155] = -x[482]*2. + 2.;
	J[291] -= sporttournament32_pd[451];
	J[155] -= x[291]*2.;
	J[157] += sporttournament32_pd[450];
	J[155] += x[157]*2.;
	J[379] -= sporttournament32_pd[449];
	J[154] = -x[379]*2. + 2.;
	J[155] -= sporttournament32_pd[448];
	J[154] -= x[155]*2.;
	J[285] += sporttournament32_pd[447];
	J[153] = x[285]*2. + -2.;
	J[214] += sporttournament32_pd[446];
	J[153] += x[214]*2.;
	J[286] += sporttournament32_pd[445];
	J[152] = x[286]*2. + -2.;
	J[153] += sporttournament32_pd[444];
	J[152] += x[153]*2.;
	J[244] += sporttournament32_pd[443];
	J[151] = x[244]*2. + -2.;
	J[151] += sporttournament32_pd[442];
	J[150] = x[151]*2. + -2.;
	J[244] += sporttournament32_pd[441];
	J[149] = x[244]*2. + -4.;
	J[210] += sporttournament32_pd[440];
	J[149] += x[210]*2.;
	J[441] += sporttournament32_pd[439];
	J[148] = x[441]*2. + -4.;
	J[281] += sporttournament32_pd[438];
	J[148] += x[281]*2.;
	J[149] += sporttournament32_pd[437];
	J[148] += x[149]*2.;
	J[473] += sporttournament32_pd[436];
	J[147] = x[473]*2. + -2.;
	J[354] -= sporttournament32_pd[435];
	J[147] -= x[354]*2.;
	J[210] += sporttournament32_pd[434];
	J[147] += x[210]*2.;
	J[473] += sporttournament32_pd[433];
	J[146] = x[473]*2. + -4.;
	J[315] += sporttournament32_pd[432];
	J[146] += x[315]*2.;
	J[279] += sporttournament32_pd[431];
	J[146] += x[279]*2.;
	J[416] += sporttournament32_pd[430];
	J[145] = x[416]*2. + -4.;
	J[146] += sporttournament32_pd[429];
	J[145] += x[146]*2.;
	J[481] -= sporttournament32_pd[428];
	J[144] = -x[481]*2. + -2.;
	J[315] += sporttournament32_pd[427];
	J[144] += x[315]*2.;
	J[204] += sporttournament32_pd[426];
	J[144] += x[204]*2.;
	J[429] += sporttournament32_pd[425];
	J[143] = x[429]*2. + -4.;
	J[144] += sporttournament32_pd[424];
	J[143] += x[144]*2.;
	J[480] += sporttournament32_pd[423];
	J[142] = x[480]*2. + -2.;
	J[365] -= sporttournament32_pd[422];
	J[142] -= x[365]*2.;
	J[479] -= sporttournament32_pd[421];
	J[141] = -x[479]*2. + 2.;
	J[427] -= sporttournament32_pd[420];
	J[141] -= x[427]*2.;
	J[142] += sporttournament32_pd[419];
	J[141] += x[142]*2.;
	J[365] += sporttournament32_pd[418];
	J[140] = x[365]*2. + 2.;
	J[351] -= sporttournament32_pd[417];
	J[140] -= x[351]*2.;
	J[304] -= sporttournament32_pd[416];
	J[140] -= x[304]*2.;
	J[141] -= sporttournament32_pd[415];
	J[140] -= x[141]*2.;
	J[445] -= sporttournament32_pd[414];
	J[139] = -x[445]*2. + -2.;
	J[230] += sporttournament32_pd[413];
	J[139] += x[230]*2.;
	J[227] += sporttournament32_pd[412];
	J[139] += x[227]*2.;
	J[413] += sporttournament32_pd[411];
	J[138] = x[413]*2. + -2.;
	J[263] += sporttournament32_pd[410];
	J[138] += x[263]*2.;
	J[230] -= sporttournament32_pd[409];
	J[138] -= x[230]*2.;
	J[404] += sporttournament32_pd[408];
	J[137] = x[404]*2. + -4.;
	J[139] += sporttournament32_pd[407];
	J[137] += x[139]*2.;
	J[263] += sporttournament32_pd[406];
	J[136] = x[263]*2. + -2.;
	J[162] -= sporttournament32_pd[405];
	J[136] -= x[162]*2.;
	J[137] += sporttournament32_pd[404];
	J[136] += x[137]*2.;
	J[478] += sporttournament32_pd[403];
	J[135] = x[478]*2. + -2.;
	J[439] -= sporttournament32_pd[402];
	J[135] -= x[439]*2.;
	J[404] += sporttournament32_pd[401];
	J[135] += x[404]*2.;
	J[404] -= sporttournament32_pd[400];
	J[134] = -x[404]*2. + -2.;
	J[333] += sporttournament32_pd[399];
	J[134] += x[333]*2.;
	J[135] += sporttournament32_pd[398];
	J[133] = x[135]*2. + -2.;
	J[458] += sporttournament32_pd[397];
	J[132] = x[458]*2. + -4.;
	J[412] += sporttournament32_pd[396];
	J[132] += x[412]*2.;
	J[346] += sporttournament32_pd[395];
	J[132] += x[346]*2.;
	J[252] -= sporttournament32_pd[394];
	J[131] = -x[252]*2. + -2.;
	J[219] += sporttournament32_pd[393];
	J[131] += x[219]*2.;
	J[132] += sporttournament32_pd[392];
	J[131] += x[132]*2.;
	J[458] += sporttournament32_pd[391];
	J[130] = x[458]*2. + -4.;
	J[394] += sporttournament32_pd[390];
	J[130] += x[394]*2.;
	J[357] += sporttournament32_pd[389];
	J[130] += x[357]*2.;
	J[458] -= sporttournament32_pd[388];
	J[129] = -x[458]*2. + 4.;
	J[457] -= sporttournament32_pd[387];
	J[129] -= x[457]*2.;
	J[386] -= sporttournament32_pd[386];
	J[129] -= x[386]*2.;
	J[385] -= sporttournament32_pd[385];
	J[129] -= x[385]*2.;
	J[477] -= sporttournament32_pd[384];
	J[128] = -x[477]*2. + 2.;
	J[252] -= sporttournament32_pd[383];
	J[128] -= x[252]*2.;
	J[130] += sporttournament32_pd[382];
	J[128] += x[130]*2.;
	J[369] -= sporttournament32_pd[381];
	J[127] = -x[369]*2. + 2.;
	J[289] -= sporttournament32_pd[380];
	J[127] -= x[289]*2.;
	J[128] -= sporttournament32_pd[379];
	J[127] -= x[128]*2.;
	J[249] += sporttournament32_pd[378];
	J[126] = x[249]*2. + -2.;
	J[247] += sporttournament32_pd[377];
	J[126] += x[247]*2.;
	J[462] += sporttournament32_pd[376];
	J[125] = x[462]*2. + -2.;
	J[126] += sporttournament32_pd[375];
	J[125] += x[126]*2.;
	J[211] += sporttournament32_pd[374];
	J[124] = x[211]*2. + -2.;
	J[341] -= sporttournament32_pd[373];
	J[123] = -x[341]*2. + -2.;
	J[124] += sporttournament32_pd[372];
	J[123] += x[124]*2.;
	J[211] += sporttournament32_pd[371];
	J[122] = x[211]*2. + -4.;
	J[178] += sporttournament32_pd[370];
	J[122] += x[178]*2.;
	J[329] -= sporttournament32_pd[369];
	J[121] = -x[329]*2. + 2.;
	J[322] -= sporttournament32_pd[368];
	J[121] -= x[322]*2.;
	J[211] += sporttournament32_pd[367];
	J[121] += x[211]*2.;
	J[150] -= sporttournament32_pd[366];
	J[121] -= x[150]*2.;
	J[240] += sporttournament32_pd[365];
	J[120] = x[240]*2. + -4.;
	J[122] += sporttournament32_pd[364];
	J[120] += x[122]*2.;
	J[366] -= sporttournament32_pd[363];
	J[119] = -x[366]*2. + -2.;
	J[178] += sporttournament32_pd[362];
	J[119] += x[178]*2.;
	J[330] += sporttournament32_pd[361];
	J[118] = x[330]*2. + -4.;
	J[119] += sporttournament32_pd[360];
	J[118] += x[119]*2.;
	J[318] += sporttournament32_pd[359];
	J[117] = x[318]*2. + -4.;
	J[276] += sporttournament32_pd[358];
	J[117] += x[276]*2.;
	J[118] += sporttournament32_pd[357];
	J[117] += x[118]*2.;
	J[378] += sporttournament32_pd[356];
	J[116] = x[378]*2. + -4.;
	J[277] += sporttournament32_pd[355];
	J[116] += x[277]*2.;
	J[118] += sporttournament32_pd[354];
	J[116] += x[118]*2.;
	J[421] += sporttournament32_pd[353];
	J[115] = x[421]*2. + -4.;
	J[117] += sporttournament32_pd[352];
	J[115] += x[117]*2.;
	J[276] += sporttournament32_pd[351];
	J[114] = x[276]*2. + -2.;
	J[236] -= sporttournament32_pd[350];
	J[114] -= x[236]*2.;
	J[172] += sporttournament32_pd[349];
	J[114] += x[172]*2.;
	J[274] += sporttournament32_pd[348];
	J[113] = x[274]*2. + -4.;
	J[114] += sporttournament32_pd[347];
	J[113] += x[114]*2.;
	J[476] -= sporttournament32_pd[346];
	J[112] = -x[476]*2. + 2.;
	J[420] -= sporttournament32_pd[345];
	J[112] -= x[420]*2.;
	J[407] += sporttournament32_pd[344];
	J[112] += x[407]*2.;
	J[377] -= sporttournament32_pd[343];
	J[112] -= x[377]*2.;
	J[418] += sporttournament32_pd[342];
	J[111] = x[418]*2. + -2.;
	J[266] -= sporttournament32_pd[341];
	J[111] -= x[266]*2.;
	J[226] += sporttournament32_pd[340];
	J[111] += x[226]*2.;
	J[300] -= sporttournament32_pd[339];
	J[110] = -x[300]*2. + -2.;
	J[163] += sporttournament32_pd[338];
	J[110] += x[163]*2.;
	J[133] += sporttournament32_pd[337];
	J[110] += x[133]*2.;
	J[339] += sporttournament32_pd[336];
	J[109] = x[339]*2. + -2.;
	J[163] -= sporttournament32_pd[335];
	J[109] -= x[163]*2.;
	J[110] += sporttournament32_pd[334];
	J[108] = x[110]*2. + -2.;
	J[223] -= sporttournament32_pd[333];
	J[107] = -x[223]*2. + -2.;
	J[133] += sporttournament32_pd[332];
	J[107] += x[133]*2.;
	J[431] += sporttournament32_pd[331];
	J[106] = x[431]*2. + -2.;
	J[133] -= sporttournament32_pd[330];
	J[106] -= x[133]*2.;
	J[438] += sporttournament32_pd[329];
	J[105] = x[438]*2. + -4.;
	J[359] += sporttournament32_pd[328];
	J[105] += x[359]*2.;
	J[107] += sporttournament32_pd[327];
	J[105] += x[107]*2.;
	J[463] += sporttournament32_pd[326];
	J[104] = x[463]*2. + -4.;
	J[411] += sporttournament32_pd[325];
	J[104] += x[411]*2.;
	J[337] += sporttournament32_pd[324];
	J[104] += x[337]*2.;
	J[190] += sporttournament32_pd[323];
	J[104] += x[190]*2.;
	J[371] += sporttournament32_pd[322];
	J[103] = x[371]*2. + -2.;
	J[332] += sporttournament32_pd[321];
	J[103] += x[332]*2.;
	J[190] -= sporttournament32_pd[320];
	J[103] -= x[190]*2.;
	J[131] += sporttournament32_pd[319];
	J[103] += x[131]*2.;
	J[463] += sporttournament32_pd[318];
	J[102] = x[463]*2. + -2.;
	J[386] += sporttournament32_pd[317];
	J[102] += x[386]*2.;
	J[345] -= sporttournament32_pd[316];
	J[102] -= x[345]*2.;
	J[463] -= sporttournament32_pd[315];
	J[101] = -x[463]*2. + 2.;
	J[457] += sporttournament32_pd[314];
	J[101] += x[457]*2.;
	J[380] -= sporttournament32_pd[313];
	J[101] -= x[380]*2.;
	J[379] -= sporttournament32_pd[312];
	J[101] -= x[379]*2.;
	J[474] -= sporttournament32_pd[311];
	J[100] = -x[474]*2. + 2.;
	J[218] -= sporttournament32_pd[310];
	J[100] -= x[218]*2.;
	J[102] += sporttournament32_pd[309];
	J[100] += x[102]*2.;
	J[357] -= sporttournament32_pd[308];
	J[99] = -x[357]*2. + 2.;
	J[250] -= sporttournament32_pd[307];
	J[99] -= x[250]*2.;
	J[100] -= sporttournament32_pd[306];
	J[99] -= x[100]*2.;
	J[288] += sporttournament32_pd[305];
	J[98] = x[288]*2. + -2.;
	J[212] += sporttournament32_pd[304];
	J[98] += x[212]*2.;
	J[455] += sporttournament32_pd[303];
	J[97] = x[455]*2. + -2.;
	J[98] += sporttournament32_pd[302];
	J[97] += x[98]*2.;
	J[179] += sporttournament32_pd[301];
	J[96] = x[179]*2. + -2.;
	J[324] += sporttournament32_pd[300];
	J[95] = x[324]*2. + -4.;
	J[96] += sporttournament32_pd[299];
	J[95] += x[96]*2.;
	J[422] += sporttournament32_pd[298];
	J[94] = x[422]*2. + -4.;
	J[179] += sporttournament32_pd[297];
	J[94] += x[179]*2.;
	J[148] += sporttournament32_pd[296];
	J[94] += x[148]*2.;
	J[446] += sporttournament32_pd[295];
	J[93] = x[446]*2. + -4.;
	J[209] += sporttournament32_pd[294];
	J[93] += x[209]*2.;
	J[94] += sporttournament32_pd[293];
	J[93] += x[94]*2.;
	J[392] += sporttournament32_pd[292];
	J[92] = x[392]*2. + -4.;
	J[316] += sporttournament32_pd[291];
	J[92] += x[316]*2.;
	J[273] -= sporttournament32_pd[290];
	J[91] = -x[273]*2. + -2.;
	J[237] += sporttournament32_pd[289];
	J[91] += x[237]*2.;
	J[145] += sporttournament32_pd[288];
	J[91] += x[145]*2.;
	J[429] -= sporttournament32_pd[287];
	J[90] = -x[429]*2. + -2.;
	J[91] += sporttournament32_pd[286];
	J[90] += x[91]*2.;
	J[472] -= sporttournament32_pd[285];
	J[89] = -x[472]*2. + 2.;
	J[400] += sporttournament32_pd[284];
	J[89] += x[400]*2.;
	J[384] -= sporttournament32_pd[283];
	J[89] -= x[384]*2.;
	J[308] -= sporttournament32_pd[282];
	J[89] -= x[308]*2.;
	J[261] -= sporttournament32_pd[281];
	J[88] = -x[261]*2. + -2.;
	J[192] += sporttournament32_pd[280];
	J[88] += x[192]*2.;
	J[108] += sporttournament32_pd[279];
	J[88] += x[108]*2.;
	J[388] -= sporttournament32_pd[278];
	J[87] = -x[388]*2. + -2.;
	J[88] += sporttournament32_pd[277];
	J[87] += x[88]*2.;
	J[470] -= sporttournament32_pd[276];
	J[86] = -x[470]*2. + -2.;
	J[108] += sporttournament32_pd[275];
	J[86] += x[108]*2.;
	J[436] += sporttournament32_pd[274];
	J[85] = x[436]*2. + -2.;
	J[108] -= sporttournament32_pd[273];
	J[85] -= x[108]*2.;
	J[105] += sporttournament32_pd[272];
	J[85] += x[105]*2.;
	J[444] += sporttournament32_pd[271];
	J[84] = x[444]*2. + -4.;
	J[346] += sporttournament32_pd[270];
	J[84] += x[346]*2.;
	J[106] += sporttournament32_pd[269];
	J[84] += x[106]*2.;
	J[86] += sporttournament32_pd[268];
	J[84] += x[86]*2.;
	J[467] += sporttournament32_pd[267];
	J[83] = x[467]*2. + -2.;
	J[402] += sporttournament32_pd[266];
	J[83] += x[402]*2.;
	J[332] -= sporttournament32_pd[265];
	J[83] -= x[332]*2.;
	J[221] += sporttournament32_pd[264];
	J[83] += x[221]*2.;
	J[467] += sporttournament32_pd[263];
	J[82] = x[467]*2. + -2.;
	J[443] += sporttournament32_pd[262];
	J[82] += x[443]*2.;
	J[380] += sporttournament32_pd[261];
	J[82] += x[380]*2.;
	J[357] -= sporttournament32_pd[260];
	J[82] -= x[357]*2.;
	J[467] -= sporttournament32_pd[259];
	J[81] = -x[467]*2. + 2.;
	J[449] += sporttournament32_pd[258];
	J[81] += x[449]*2.;
	J[371] -= sporttournament32_pd[257];
	J[81] -= x[371]*2.;
	J[369] -= sporttournament32_pd[256];
	J[81] -= x[369]*2.;
	J[443] += sporttournament32_pd[255];
	J[80] = x[443]*2. + -4.;
	J[393] += sporttournament32_pd[254];
	J[80] += x[393]*2.;
	J[183] += sporttournament32_pd[253];
	J[80] += x[183]*2.;
	J[443] -= sporttournament32_pd[252];
	J[79] = -x[443]*2. + 2.;
	J[345] -= sporttournament32_pd[251];
	J[79] -= x[345]*2.;
	J[215] -= sporttournament32_pd[250];
	J[79] -= x[215]*2.;
	J[367] += sporttournament32_pd[249];
	J[78] = x[367]*2. + -2.;
	J[154] += sporttournament32_pd[248];
	J[78] += x[154]*2.;
	J[80] += sporttournament32_pd[247];
	J[78] += x[80]*2.;
	J[183] += sporttournament32_pd[246];
	J[77] = x[183]*2. + -2.;
	J[180] += sporttournament32_pd[245];
	J[77] += x[180]*2.;
	J[78] -= sporttournament32_pd[244];
	J[77] -= x[78]*2.;
	J[181] += sporttournament32_pd[243];
	J[76] = x[181]*2. + -2.;
	J[77] += sporttournament32_pd[242];
	J[76] += x[77]*2.;
	J[150] += sporttournament32_pd[241];
	J[75] = x[150]*2. + -2.;
	J[284] += sporttournament32_pd[240];
	J[74] = x[284]*2. + -4.;
	J[75] += sporttournament32_pd[239];
	J[74] += x[75]*2.;
	J[422] -= sporttournament32_pd[238];
	J[73] = -x[422]*2. + -2.;
	J[150] += sporttournament32_pd[237];
	J[73] += x[150]*2.;
	J[120] += sporttournament32_pd[236];
	J[73] += x[120]*2.;
	J[454] += sporttournament32_pd[235];
	J[72] = x[454]*2. + -4.;
	J[177] += sporttournament32_pd[234];
	J[72] += x[177]*2.;
	J[73] += sporttournament32_pd[233];
	J[72] += x[73]*2.;
	J[469] -= sporttournament32_pd[232];
	J[71] = -x[469]*2. + 2.;
	J[440] -= sporttournament32_pd[231];
	J[71] -= x[440]*2.;
	J[120] += sporttournament32_pd[230];
	J[71] += x[120]*2.;
	J[433] += sporttournament32_pd[229];
	J[70] = x[433]*2. + -2.;
	J[331] += sporttournament32_pd[228];
	J[70] += x[331]*2.;
	J[328] += sporttournament32_pd[227];
	J[70] += x[328]*2.;
	J[71] -= sporttournament32_pd[226];
	J[70] -= x[71]*2.;
	J[433] += sporttournament32_pd[225];
	J[69] = x[433]*2. + -4.;
	J[401] += sporttournament32_pd[224];
	J[69] += x[401]*2.;
	J[312] -= sporttournament32_pd[223];
	J[68] = -x[312]*2. + -2.;
	J[204] += sporttournament32_pd[222];
	J[68] += x[204]*2.;
	J[115] += sporttournament32_pd[221];
	J[68] += x[115]*2.;
	J[399] += sporttournament32_pd[220];
	J[67] = x[399]*2. + -2.;
	J[68] += sporttournament32_pd[219];
	J[67] += x[68]*2.;
	J[459] += sporttournament32_pd[218];
	J[66] = x[459]*2. + -4.;
	J[445] += sporttournament32_pd[217];
	J[66] += x[445]*2.;
	J[327] += sporttournament32_pd[216];
	J[66] += x[327]*2.;
	J[459] -= sporttournament32_pd[215];
	J[65] = -x[459]*2. + -2.;
	J[390] += sporttournament32_pd[214];
	J[65] += x[390]*2.;
	J[374] += sporttournament32_pd[213];
	J[65] += x[374]*2.;
	J[375] += sporttournament32_pd[212];
	J[64] = x[375]*2. + -2.;
	J[267] -= sporttournament32_pd[211];
	J[64] -= x[267]*2.;
	J[111] += sporttournament32_pd[210];
	J[64] += x[111]*2.;
	J[66] += sporttournament32_pd[209];
	J[64] += x[66]*2.;
	J[425] += sporttournament32_pd[208];
	J[63] = x[425]*2. + -4.;
	J[361] += sporttournament32_pd[207];
	J[63] += x[361]*2.;
	J[136] += sporttournament32_pd[206];
	J[63] += x[136]*2.;
	J[87] += sporttournament32_pd[205];
	J[63] += x[87]*2.;
	J[468] -= sporttournament32_pd[204];
	J[62] = -x[468]*2. + -2.;
	J[87] += sporttournament32_pd[203];
	J[62] += x[87]*2.;
	J[444] -= sporttournament32_pd[202];
	J[61] = -x[444]*2. + -2.;
	J[362] += sporttournament32_pd[201];
	J[61] += x[362]*2.;
	J[337] += sporttournament32_pd[200];
	J[61] += x[337]*2.;
	J[62] += sporttournament32_pd[199];
	J[61] += x[62]*2.;
	J[449] += sporttournament32_pd[198];
	J[60] = x[449]*2. + -2.;
	J[385] += sporttournament32_pd[197];
	J[60] += x[385]*2.;
	J[288] -= sporttournament32_pd[196];
	J[60] -= x[288]*2.;
	J[355] += sporttournament32_pd[195];
	J[59] = x[355]*2. + -2.;
	J[184] += sporttournament32_pd[194];
	J[59] += x[184]*2.;
	J[98] -= sporttournament32_pd[193];
	J[59] -= x[98]*2.;
	J[60] += sporttournament32_pd[192];
	J[59] += x[60]*2.;
	J[123] += sporttournament32_pd[191];
	J[58] = x[123]*2. + -2.;
	J[442] += sporttournament32_pd[190];
	J[57] = x[442]*2. + -4.;
	J[243] += sporttournament32_pd[189];
	J[57] += x[243]*2.;
	J[58] += sporttournament32_pd[188];
	J[57] += x[58]*2.;
	J[123] += sporttournament32_pd[187];
	J[56] = x[123]*2. + -2.;
	J[93] += sporttournament32_pd[186];
	J[56] += x[93]*2.;
	J[454] -= sporttournament32_pd[185];
	J[55] = -x[454]*2. + -2.;
	J[147] += sporttournament32_pd[184];
	J[55] += x[147]*2.;
	J[56] += sporttournament32_pd[183];
	J[55] += x[56]*2.;
	J[429] += sporttournament32_pd[182];
	J[54] = x[429]*2. + -4.;
	J[409] += sporttournament32_pd[181];
	J[54] += x[409]*2.;
	J[116] += sporttournament32_pd[180];
	J[54] += x[116]*2.;
	J[415] += sporttournament32_pd[179];
	J[53] = x[415]*2. + -4.;
	J[311] += sporttournament32_pd[178];
	J[53] += x[311]*2.;
	J[172] += sporttournament32_pd[177];
	J[53] += x[172]*2.;
	J[92] += sporttournament32_pd[176];
	J[53] += x[92]*2.;
	J[420] += sporttournament32_pd[175];
	J[52] = x[420]*2. + -2.;
	J[326] -= sporttournament32_pd[174];
	J[52] -= x[326]*2.;
	J[311] += sporttournament32_pd[173];
	J[52] += x[311]*2.;
	J[202] += sporttournament32_pd[172];
	J[52] += x[202]*2.;
	J[326] += sporttournament32_pd[171];
	J[51] = x[326]*2. + -4.;
	J[233] += sporttournament32_pd[170];
	J[51] += x[233]*2.;
	J[452] += sporttournament32_pd[169];
	J[50] = x[452]*2. + -4.;
	J[398] += sporttournament32_pd[168];
	J[50] += x[398]*2.;
	J[51] += sporttournament32_pd[167];
	J[50] += x[51]*2.;
	J[406] -= sporttournament32_pd[166];
	J[49] = -x[406]*2. + -2.;
	J[327] += sporttournament32_pd[165];
	J[49] += x[327]*2.;
	J[51] += sporttournament32_pd[164];
	J[49] += x[51]*2.;
	J[231] -= sporttournament32_pd[163];
	J[48] = -x[231]*2. + -2.;
	J[138] += sporttournament32_pd[162];
	J[48] += x[138]*2.;
	J[50] += sporttournament32_pd[161];
	J[48] += x[50]*2.;
	J[457] += sporttournament32_pd[160];
	J[47] = x[457]*2. + -2.;
	J[379] += sporttournament32_pd[159];
	J[47] += x[379]*2.;
	J[249] -= sporttournament32_pd[158];
	J[47] -= x[249]*2.;
	J[216] += sporttournament32_pd[157];
	J[46] = x[216]*2. + -2.;
	J[126] -= sporttournament32_pd[156];
	J[46] -= x[126]*2.;
	J[47] += sporttournament32_pd[155];
	J[46] += x[47]*2.;
	J[95] += sporttournament32_pd[154];
	J[45] = x[95]*2. + -2.;
	J[442] -= sporttournament32_pd[153];
	J[44] = -x[442]*2. + -2.;
	J[283] += sporttournament32_pd[152];
	J[44] += x[283]*2.;
	J[45] += sporttournament32_pd[151];
	J[44] += x[45]*2.;
	J[95] += sporttournament32_pd[150];
	J[43] = x[95]*2. + -2.;
	J[72] += sporttournament32_pd[149];
	J[43] += x[72]*2.;
	J[446] -= sporttournament32_pd[148];
	J[42] = -x[446]*2. + -2.;
	J[442] += sporttournament32_pd[147];
	J[42] += x[442]*2.;
	J[119] += sporttournament32_pd[146];
	J[42] += x[119]*2.;
	J[43] += sporttournament32_pd[145];
	J[42] += x[43]*2.;
	J[433] -= sporttournament32_pd[144];
	J[41] = -x[433]*2. + -2.;
	J[416] += sporttournament32_pd[143];
	J[41] += x[416]*2.;
	J[274] += sporttournament32_pd[142];
	J[41] += x[274]*2.;
	J[408] += sporttournament32_pd[141];
	J[40] = x[408]*2. + -4.;
	J[272] += sporttournament32_pd[140];
	J[40] += x[272]*2.;
	J[145] += sporttournament32_pd[139];
	J[40] += x[145]*2.;
	J[69] += sporttournament32_pd[138];
	J[40] += x[69]*2.;
	J[427] += sporttournament32_pd[137];
	J[39] = x[427]*2. + -4.;
	J[309] += sporttournament32_pd[136];
	J[39] += x[309]*2.;
	J[272] += sporttournament32_pd[135];
	J[39] += x[272]*2.;
	J[169] += sporttournament32_pd[134];
	J[39] += x[169]*2.;
	J[196] -= sporttournament32_pd[133];
	J[38] = -x[196]*2. + -2.;
	J[65] += sporttournament32_pd[132];
	J[38] += x[65]*2.;
	J[49] += sporttournament32_pd[131];
	J[38] += x[49]*2.;
	J[382] -= sporttournament32_pd[130];
	J[37] = -x[382]*2. + -2.;
	J[137] += sporttournament32_pd[129];
	J[37] += x[137]*2.;
	J[48] += sporttournament32_pd[128];
	J[37] += x[48]*2.;
	J[38] += sporttournament32_pd[127];
	J[37] += x[38]*2.;
	J[410] += sporttournament32_pd[126];
	J[36] = x[410]*2. + -2.;
	J[370] += sporttournament32_pd[125];
	J[36] += x[370]*2.;
	J[153] -= sporttournament32_pd[124];
	J[36] -= x[153]*2.;
	J[74] += sporttournament32_pd[123];
	J[35] = x[74]*2. + -2.;
	J[323] += sporttournament32_pd[122];
	J[34] = x[323]*2. + -2.;
	J[35] += sporttournament32_pd[121];
	J[34] += x[35]*2.;
	J[440] += sporttournament32_pd[120];
	J[33] = x[440]*2. + -2.;
	J[74] += sporttournament32_pd[119];
	J[33] += x[74]*2.;
	J[55] += sporttournament32_pd[118];
	J[33] += x[55]*2.;
	J[34] -= sporttournament32_pd[117];
	J[33] -= x[34]*2.;
	J[408] -= sporttournament32_pd[116];
	J[32] = -x[408]*2. + -2.;
	J[235] += sporttournament32_pd[115];
	J[32] += x[235]*2.;
	J[115] += sporttournament32_pd[114];
	J[32] += x[115]*2.;
	J[54] += sporttournament32_pd[113];
	J[32] += x[54]*2.;
	J[432] += sporttournament32_pd[112];
	J[31] = x[432]*2. + -4.;
	J[270] += sporttournament32_pd[111];
	J[31] += x[270]*2.;
	J[235] += sporttournament32_pd[110];
	J[31] += x[235]*2.;
	J[143] += sporttournament32_pd[109];
	J[31] += x[143]*2.;
	J[410] -= sporttournament32_pd[108];
	J[30] = -x[410]*2. + 2.;
	J[358] += sporttournament32_pd[107];
	J[30] += x[358]*2.;
	J[182] -= sporttournament32_pd[106];
	J[30] -= x[182]*2.;
	J[57] += sporttournament32_pd[105];
	J[29] = x[57]*2. + -2.;
	J[434] += sporttournament32_pd[104];
	J[28] = x[434]*2. + -2.;
	J[149] += sporttournament32_pd[103];
	J[28] += x[149]*2.;
	J[43] -= sporttournament32_pd[102];
	J[28] -= x[43]*2.;
	J[29] += sporttournament32_pd[101];
	J[28] += x[29]*2.;
	J[415] -= sporttournament32_pd[100];
	J[27] = -x[415]*2. + -2.;
	J[202] += sporttournament32_pd[99];
	J[27] += x[202]*2.;
	J[92] += sporttournament32_pd[98];
	J[27] += x[92]*2.;
	J[41] += sporttournament32_pd[97];
	J[27] += x[41]*2.;
	J[432] -= sporttournament32_pd[96];
	J[26] = -x[432]*2. + -2.;
	J[234] += sporttournament32_pd[95];
	J[26] += x[234]*2.;
	J[202] += sporttournament32_pd[94];
	J[26] += x[202]*2.;
	J[113] += sporttournament32_pd[93];
	J[26] += x[113]*2.;
	J[216] -= sporttournament32_pd[92];
	J[25] = -x[216]*2. + 2.;
	J[213] -= sporttournament32_pd[91];
	J[25] -= x[213]*2.;
	J[79] += sporttournament32_pd[90];
	J[25] += x[79]*2.;
	J[44] += sporttournament32_pd[89];
	J[24] = x[44]*2. + -2.;
	J[122] += sporttournament32_pd[88];
	J[23] = x[122]*2. + -2.;
	J[56] -= sporttournament32_pd[87];
	J[23] -= x[56]*2.;
	J[24] += sporttournament32_pd[86];
	J[23] += x[24]*2.;
	J[428] += sporttournament32_pd[85];
	J[22] = x[428]*2. + -2.;
	J[169] += sporttournament32_pd[84];
	J[22] += x[169]*2.;
	J[69] += sporttournament32_pd[83];
	J[22] += x[69]*2.;
	J[67] -= sporttournament32_pd[82];
	J[22] -= x[67]*2.;
	J[427] -= sporttournament32_pd[81];
	J[21] = -x[427]*2. + -2.;
	J[201] += sporttournament32_pd[80];
	J[21] += x[201]*2.;
	J[169] += sporttournament32_pd[79];
	J[21] += x[169]*2.;
	J[90] += sporttournament32_pd[78];
	J[21] += x[90]*2.;
	J[372] += sporttournament32_pd[77];
	J[20] = x[372]*2. + -2.;
	J[296] += sporttournament32_pd[76];
	J[20] += x[296]*2.;
	J[295] += sporttournament32_pd[75];
	J[20] += x[295]*2.;
	J[190] -= sporttournament32_pd[74];
	J[20] -= x[190]*2.;
	J[355] -= sporttournament32_pd[73];
	J[19] = -x[355]*2. + 2.;
	J[248] -= sporttournament32_pd[72];
	J[19] -= x[248]*2.;
	J[184] -= sporttournament32_pd[71];
	J[19] -= x[184]*2.;
	J[99] += sporttournament32_pd[70];
	J[19] += x[99]*2.;
	J[422] += sporttournament32_pd[69];
	J[18] = x[422]*2. + -2.;
	J[34] += sporttournament32_pd[68];
	J[18] += x[34]*2.;
	J[420] -= sporttournament32_pd[67];
	J[17] = -x[420]*2. + -2.;
	J[168] += sporttournament32_pd[66];
	J[17] += x[168]*2.;
	J[143] += sporttournament32_pd[65];
	J[17] += x[143]*2.;
	J[67] += sporttournament32_pd[64];
	J[17] += x[67]*2.;
	J[412] -= sporttournament32_pd[63];
	J[16] = -x[412]*2. + -2.;
	J[381] += sporttournament32_pd[62];
	J[16] += x[381]*2.;
	J[257] += sporttournament32_pd[61];
	J[16] += x[257]*2.;
	J[367] -= sporttournament32_pd[60];
	J[15] = -x[367]*2. + 2.;
	J[287] -= sporttournament32_pd[59];
	J[15] -= x[287]*2.;
	J[154] -= sporttournament32_pd[58];
	J[15] -= x[154]*2.;
	J[127] += sporttournament32_pd[57];
	J[15] += x[127]*2.;
	J[415] += sporttournament32_pd[56];
	J[14] = x[415]*2. + -2.;
	J[308] -= sporttournament32_pd[55];
	J[14] -= x[308]*2.;
	J[142] += sporttournament32_pd[54];
	J[14] += x[142]*2.;
	J[113] += sporttournament32_pd[53];
	J[14] += x[113]*2.;
	J[245] += sporttournament32_pd[52];
	J[13] = x[245]*2. + -2.;
	J[23] += sporttournament32_pd[51];
	J[13] += x[23]*2.;
	J[408] += sporttournament32_pd[50];
	J[12] = x[408]*2. + -2.;
	J[407] += sporttournament32_pd[49];
	J[12] += x[407]*2.;
	J[269] -= sporttournament32_pd[48];
	J[12] -= x[269]*2.;
	J[90] += sporttournament32_pd[47];
	J[12] += x[90]*2.;
	J[364] += sporttournament32_pd[46];
	J[11] = x[364]*2. + -2.;
	J[301] += sporttournament32_pd[45];
	J[11] += x[301]*2.;
	J[195] += sporttournament32_pd[44];
	J[11] += x[195]*2.;
	J[192] -= sporttournament32_pd[43];
	J[11] -= x[192]*2.;
	J[350] += sporttournament32_pd[42];
	J[10] = x[350]*2. + -4.;
	J[109] += sporttournament32_pd[41];
	J[10] += x[109]*2.;
	J[107] += sporttournament32_pd[40];
	J[10] += x[107]*2.;
	J[344] -= sporttournament32_pd[39];
	J[9] = -x[344]*2. + 2.;
	J[343] -= sporttournament32_pd[38];
	J[9] -= x[343]*2.;
	J[46] += sporttournament32_pd[37];
	J[9] += x[46]*2.;
	J[25] -= sporttournament32_pd[36];
	J[9] -= x[25]*2.;
	J[375] += sporttournament32_pd[35];
	J[8] = x[375]*2. + -2.;
	J[262] += sporttournament32_pd[34];
	J[8] += x[262]*2.;
	J[228] += sporttournament32_pd[33];
	J[8] += x[228]*2.;
	J[163] -= sporttournament32_pd[32];
	J[8] -= x[163]*2.;
	J[296] -= sporttournament32_pd[31];
	J[7] = -x[296]*2. + -2.;
	J[134] += sporttournament32_pd[30];
	J[7] += x[134]*2.;
	J[109] += sporttournament32_pd[29];
	J[7] += x[109]*2.;
	J[86] += sporttournament32_pd[28];
	J[7] += x[86]*2.;
	J[395] += sporttournament32_pd[27];
	J[6] = x[395]*2. + -4.;
	J[361] += sporttournament32_pd[26];
	J[6] += x[361]*2.;
	J[16] += sporttournament32_pd[25];
	J[6] += x[16]*2.;
	J[10] += sporttournament32_pd[24];
	J[6] += x[10]*2.;
	J[336] -= sporttournament32_pd[23];
	J[5] = -x[336]*2. + 2.;
	J[335] -= sporttournament32_pd[22];
	J[5] -= x[335]*2.;
	J[36] += sporttournament32_pd[21];
	J[5] += x[36]*2.;
	J[30] -= sporttournament32_pd[20];
	J[5] -= x[30]*2.;
	J[334] += sporttournament32_pd[19];
	J[4] = x[334]*2. + -2.;
	J[258] -= sporttournament32_pd[18];
	J[4] -= x[258]*2.;
	J[134] += sporttournament32_pd[17];
	J[4] += x[134]*2.;
	J[62] += sporttournament32_pd[16];
	J[4] += x[62]*2.;
	J[388] += sporttournament32_pd[15];
	J[3] = x[388]*2. + -2.;
	J[387] -= sporttournament32_pd[14];
	J[3] -= x[387]*2.;
	J[340] += sporttournament32_pd[13];
	J[3] += x[340]*2.;
	J[334] += sporttournament32_pd[12];
	J[3] += x[334]*2.;
	J[381] -= sporttournament32_pd[11];
	J[2] = -x[381]*2. + -2.;
	J[349] += sporttournament32_pd[10];
	J[2] += x[349]*2.;
	J[340] += sporttournament32_pd[9];
	J[2] += x[340]*2.;
	J[85] += sporttournament32_pd[8];
	J[2] += x[85]*2.;
	J[373] += sporttournament32_pd[7];
	J[1] = x[373]*2. + -2.;
	J[372] -= sporttournament32_pd[6];
	J[1] -= x[372]*2.;
	J[349] += sporttournament32_pd[5];
	J[1] += x[349]*2.;
	J[106] += sporttournament32_pd[4];
	J[1] += x[106]*2.;
	J[341] += sporttournament32_pd[3];
	J[0] = x[341]*2. + -2.;
	J[331] += sporttournament32_pd[2];
	J[0] += x[331]*2.;
	J[242] += sporttournament32_pd[1];
	J[0] += x[242]*2.;
	J[208] += sporttournament32_pd[0];
	J[0] -= x[208]*2.;
	J[496] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
