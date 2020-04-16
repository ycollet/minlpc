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
 fint sporttournament36_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament36_funcom_[1269] = {
	631 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	631 /* nzc */,
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
	499,
	500,
	501,
	502,
	503,
	504,
	505,
	506,
	507,
	508,
	509,
	510,
	511,
	512,
	513,
	514,
	515,
	516,
	517,
	518,
	519,
	520,
	521,
	522,
	523,
	524,
	525,
	526,
	527,
	528,
	529,
	530,
	531,
	532,
	533,
	534,
	535,
	536,
	537,
	538,
	539,
	540,
	541,
	542,
	543,
	544,
	545,
	546,
	547,
	548,
	549,
	550,
	551,
	552,
	553,
	554,
	555,
	556,
	557,
	558,
	559,
	560,
	561,
	562,
	563,
	564,
	565,
	566,
	567,
	568,
	569,
	570,
	571,
	572,
	573,
	574,
	575,
	576,
	577,
	578,
	579,
	580,
	581,
	582,
	583,
	584,
	585,
	586,
	587,
	588,
	589,
	590,
	591,
	592,
	593,
	594,
	595,
	596,
	597,
	598,
	599,
	600,
	601,
	602,
	603,
	604,
	605,
	606,
	607,
	608,
	609,
	610,
	611,
	612,
	613,
	614,
	615,
	616,
	617,
	618,
	619,
	620,
	621,
	622,
	623,
	624,
	625,
	626,
	627,
	628,
	629,
	630,
	631,
	632,

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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
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

 real sporttournament36_boundc_[1+1262+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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

 real sporttournament36_x0comn_[631] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sporttournament36_pd[1224];
static real sporttournament36_old_x[631];
static int sporttournament36_xkind = -1;

 static int
sporttournament36_xcheck(real *x)
{
	real *x1 = sporttournament36_old_x, *xe = x + 631;
	errno = 0;
	if (sporttournament36_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament36_xkind = 0;
	return 1;
	}
 real
sporttournament36_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament36_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[630];
	;}

	if (wantfg & 2) {
	g[630] = 1.;
	}

	return rv;
}

 void
sporttournament36_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament36_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament36_pd[0] = -2. * x[0];
	v[0] = sporttournament36_pd[0] * x[258];
	sporttournament36_pd[1] = 2. * x[0];
	v[1] = sporttournament36_pd[1] * x[292];
	v[0] += v[1];
	sporttournament36_pd[2] = 2. * x[0];
	v[1] = sporttournament36_pd[2] * x[391];
	v[0] += v[1];
	sporttournament36_pd[3] = 2. * x[0];
	v[1] = sporttournament36_pd[3] * x[402];
	v[0] += v[1];
	sporttournament36_pd[4] = 2. * x[1];
	v[1] = sporttournament36_pd[4] * x[60];
	v[0] += v[1];
	sporttournament36_pd[5] = 2. * x[1];
	v[1] = sporttournament36_pd[5] * x[355];
	v[0] += v[1];
	sporttournament36_pd[6] = 2. * x[1];
	v[1] = sporttournament36_pd[6] * x[401];
	v[0] += v[1];
	sporttournament36_pd[7] = 2. * x[1];
	v[1] = sporttournament36_pd[7] * x[438];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[8] = 2. * x[2];
	v[2] = sporttournament36_pd[8] * x[82];
	v[0] += v[2];
	sporttournament36_pd[9] = 2. * x[2];
	v[2] = sporttournament36_pd[9] * x[210];
	v[0] += v[2];
	sporttournament36_pd[10] = 2. * x[2];
	v[2] = sporttournament36_pd[10] * x[312];
	v[0] += v[2];
	sporttournament36_pd[11] = 2. * x[2];
	v[2] = sporttournament36_pd[11] * x[449];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[12] = 2. * x[3];
	v[1] = sporttournament36_pd[12] * x[105];
	v[0] += v[1];
	sporttournament36_pd[13] = 2. * x[3];
	v[1] = sporttournament36_pd[13] * x[180];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[14] = 2. * x[3];
	v[2] = sporttournament36_pd[14] * x[409];
	v[0] += v[2];
	sporttournament36_pd[15] = 2. * x[3];
	v[2] = sporttournament36_pd[15] * x[410];
	v[0] += v[2];
	sporttournament36_pd[16] = 2. * x[4];
	v[2] = sporttournament36_pd[16] * x[358];
	v[0] += v[2];
	sporttournament36_pd[17] = 2. * x[4];
	v[2] = sporttournament36_pd[17] * x[360];
	v[0] += v[2];
	sporttournament36_pd[18] = 2. * x[4];
	v[2] = sporttournament36_pd[18] * x[412];
	v[0] += v[2];
	sporttournament36_pd[19] = 2. * x[4];
	v[2] = sporttournament36_pd[19] * x[497];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[20] = 2. * x[5];
	v[1] = sporttournament36_pd[20] * x[65];
	v[0] += v[1];
	sporttournament36_pd[21] = 2. * x[5];
	v[1] = sporttournament36_pd[21] * x[367];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[22] = 2. * x[5];
	v[2] = sporttournament36_pd[22] * x[491];
	v[0] += v[2];
	sporttournament36_pd[23] = 2. * x[5];
	v[2] = sporttournament36_pd[23] * x[492];
	v[0] += v[2];
	sporttournament36_pd[24] = 2. * x[6];
	v[2] = sporttournament36_pd[24] * x[126];
	v[0] += v[2];
	sporttournament36_pd[25] = 2. * x[6];
	v[2] = sporttournament36_pd[25] * x[208];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[26] = 2. * x[6];
	v[1] = sporttournament36_pd[26] * x[401];
	v[0] += v[1];
	sporttournament36_pd[27] = 2. * x[6];
	v[1] = sporttournament36_pd[27] * x[419];
	v[0] += v[1];
	sporttournament36_pd[28] = 2. * x[7];
	v[1] = sporttournament36_pd[28] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[29] = 2. * x[7];
	v[2] = sporttournament36_pd[29] * x[65];
	v[0] += v[2];
	sporttournament36_pd[30] = 2. * x[7];
	v[2] = sporttournament36_pd[30] * x[86];
	v[0] += v[2];
	sporttournament36_pd[31] = 2. * x[7];
	v[2] = sporttournament36_pd[31] * x[500];
	v[0] += v[2];
	sporttournament36_pd[32] = 2. * x[8];
	v[2] = sporttournament36_pd[32] * x[153];
	v[0] += v[2];
	sporttournament36_pd[33] = 2. * x[8];
	v[2] = sporttournament36_pd[33] * x[210];
	v[0] += v[2];
	sporttournament36_pd[34] = 2. * x[8];
	v[2] = sporttournament36_pd[34] * x[241];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[35] = 2. * x[8];
	v[1] = sporttournament36_pd[35] * x[429];
	v[0] += v[1];
	sporttournament36_pd[36] = 2. * x[9];
	v[1] = sporttournament36_pd[36] * x[86];
	v[0] += v[1];
	sporttournament36_pd[37] = 2. * x[9];
	v[1] = sporttournament36_pd[37] * x[109];
	v[0] += v[1];
	sporttournament36_pd[38] = 2. * x[9];
	v[1] = sporttournament36_pd[38] * x[511];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[39] = 2. * x[9];
	v[2] = sporttournament36_pd[39] * x[512];
	v[0] += v[2];
	sporttournament36_pd[40] = 2. * x[10];
	v[2] = sporttournament36_pd[40] * x[109];
	v[0] += v[2];
	sporttournament36_pd[41] = 2. * x[10];
	v[2] = sporttournament36_pd[41] * x[130];
	v[0] += v[2];
	sporttournament36_pd[42] = 2. * x[10];
	v[2] = sporttournament36_pd[42] * x[521];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[43] = 2. * x[10];
	v[1] = sporttournament36_pd[43] * x[522];
	v[0] += v[1];
	sporttournament36_pd[44] = 2. * x[11];
	v[1] = sporttournament36_pd[44] * x[19];
	v[0] += v[1];
	sporttournament36_pd[45] = 2. * x[11];
	v[1] = sporttournament36_pd[45] * x[295];
	v[0] += v[1];
	sporttournament36_pd[46] = 2. * x[12];
	v[1] = sporttournament36_pd[46] * x[25];
	v[0] += v[1];
	sporttournament36_pd[47] = 2. * x[12];
	v[1] = sporttournament36_pd[47] * x[441];
	v[0] += v[1];
	sporttournament36_pd[48] = 2. * x[13];
	v[1] = sporttournament36_pd[48] * x[130];
	v[0] += v[1];
	sporttournament36_pd[49] = 2. * x[13];
	v[1] = sporttournament36_pd[49] * x[161];
	v[0] += v[1];
	sporttournament36_pd[50] = 2. * x[13];
	v[1] = sporttournament36_pd[50] * x[188];
	v[0] += v[1];
	sporttournament36_pd[51] = 2. * x[13];
	v[1] = sporttournament36_pd[51] * x[531];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[52] = 2. * x[14];
	v[2] = sporttournament36_pd[52] * x[106];
	v[0] += v[2];
	sporttournament36_pd[53] = 2. * x[14];
	v[2] = sporttournament36_pd[53] * x[184];
	v[0] += v[2];
	sporttournament36_pd[54] = 2. * x[14];
	v[2] = sporttournament36_pd[54] * x[275];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[55] = 2. * x[14];
	v[1] = sporttournament36_pd[55] * x[400];
	v[0] += v[1];
	sporttournament36_pd[56] = 2. * x[15];
	v[1] = sporttournament36_pd[56] * x[161];
	v[0] += v[1];
	sporttournament36_pd[57] = 2. * x[15];
	v[1] = sporttournament36_pd[57] * x[189];
	v[0] += v[1];
	sporttournament36_pd[58] = 2. * x[15];
	v[1] = sporttournament36_pd[58] * x[217];
	v[0] += v[1];
	sporttournament36_pd[59] = 2. * x[15];
	v[1] = sporttournament36_pd[59] * x[542];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[60] = 2. * x[16];
	v[2] = sporttournament36_pd[60] * x[30];
	v[0] += v[2];
	sporttournament36_pd[61] = 2. * x[16];
	v[2] = sporttournament36_pd[61] * x[524];
	v[0] += v[2];
	sporttournament36_pd[62] = 2. * x[17];
	v[2] = sporttournament36_pd[62] * x[189];
	v[0] += v[2];
	sporttournament36_pd[63] = 2. * x[17];
	v[2] = sporttournament36_pd[63] * x[219];
	v[0] += v[2];
	sporttournament36_pd[64] = 2. * x[17];
	v[2] = sporttournament36_pd[64] * x[249];
	v[0] += v[2];
	sporttournament36_pd[65] = 2. * x[17];
	v[2] = sporttournament36_pd[65] * x[542];
	v[0] += v[2];
	sporttournament36_pd[66] = 2. * x[18];
	v[2] = sporttournament36_pd[66] * x[67];
	v[0] += v[2];
	sporttournament36_pd[67] = 2. * x[18];
	v[2] = sporttournament36_pd[67] * x[109];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[68] = 2. * x[18];
	v[1] = sporttournament36_pd[68] * x[219];
	v[0] += v[1];
	sporttournament36_pd[69] = 2. * x[18];
	v[1] = sporttournament36_pd[69] * x[532];
	v[0] += v[1];
	sporttournament36_pd[70] = 2. * x[19];
	v[1] = sporttournament36_pd[70] * x[20];
	v[0] += v[1];
	sporttournament36_pd[71] = 2. * x[19];
	v[1] = sporttournament36_pd[71] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[72] = 2. * x[19];
	v[2] = sporttournament36_pd[72] * x[113];
	v[0] += v[2];
	sporttournament36_pd[73] = 2. * x[20];
	v[2] = sporttournament36_pd[73] * x[42];
	v[0] += v[2];
	sporttournament36_pd[74] = 2. * x[21];
	v[2] = sporttournament36_pd[74] * x[219];
	v[0] += v[2];
	sporttournament36_pd[75] = 2. * x[21];
	v[2] = sporttournament36_pd[75] * x[251];
	v[0] += v[2];
	sporttournament36_pd[76] = 2. * x[21];
	v[2] = sporttournament36_pd[76] * x[283];
	v[0] += v[2];
	sporttournament36_pd[77] = 2. * x[21];
	v[2] = sporttournament36_pd[77] * x[531];
	v[0] += v[2];
	sporttournament36_pd[78] = 2. * x[22];
	v[2] = sporttournament36_pd[78] * x[39];
	v[0] += v[2];
	sporttournament36_pd[79] = 2. * x[22];
	v[2] = sporttournament36_pd[79] * x[86];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[80] = 2. * x[22];
	v[1] = sporttournament36_pd[80] * x[88];
	v[0] += v[1];
	sporttournament36_pd[81] = 2. * x[22];
	v[1] = sporttournament36_pd[81] * x[251];
	v[0] += v[1];
	sporttournament36_pd[82] = 2. * x[23];
	v[1] = sporttournament36_pd[82] * x[24];
	v[0] += v[1];
	sporttournament36_pd[83] = 2. * x[23];
	v[1] = sporttournament36_pd[83] * x[41];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[84] = 2. * x[23];
	v[2] = sporttournament36_pd[84] * x[138];
	v[0] += v[2];
	sporttournament36_pd[85] = 2. * x[23];
	v[2] = sporttournament36_pd[85] * x[544];
	v[0] += v[2];
	sporttournament36_pd[86] = 2. * x[24];
	v[2] = sporttournament36_pd[86] * x[53];
	v[0] += v[2];
	sporttournament36_pd[87] = 2. * x[25];
	v[2] = sporttournament36_pd[87] * x[262];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[88] = 2. * x[25];
	v[1] = sporttournament36_pd[88] * x[392];
	v[0] += v[1];
	sporttournament36_pd[89] = 2. * x[25];
	v[1] = sporttournament36_pd[89] * x[534];
	v[0] += v[1];
	sporttournament36_pd[90] = 2. * x[26];
	v[1] = sporttournament36_pd[90] * x[351];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[91] = 2. * x[26];
	v[2] = sporttournament36_pd[91] * x[416];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[92] = 2. * x[26];
	v[1] = sporttournament36_pd[92] * x[460];
	v[0] += v[1];
	sporttournament36_pd[93] = 2. * x[26];
	v[1] = sporttournament36_pd[93] * x[565];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[94] = 2. * x[27];
	v[2] = sporttournament36_pd[94] * x[251];
	v[0] += v[2];
	sporttournament36_pd[95] = 2. * x[27];
	v[2] = sporttournament36_pd[95] * x[285];
	v[0] += v[2];
	sporttournament36_pd[96] = 2. * x[27];
	v[2] = sporttournament36_pd[96] * x[323];
	v[0] += v[2];
	sporttournament36_pd[97] = 2. * x[27];
	v[2] = sporttournament36_pd[97] * x[521];
	v[0] += v[2];
	sporttournament36_pd[98] = 2. * x[28];
	v[2] = sporttournament36_pd[98] * x[50];
	v[0] += v[2];
	sporttournament36_pd[99] = 2. * x[28];
	v[2] = sporttournament36_pd[99] * x[65];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[100] = 2. * x[28];
	v[1] = sporttournament36_pd[100] * x[111];
	v[0] += v[1];
	sporttournament36_pd[101] = 2. * x[28];
	v[1] = sporttournament36_pd[101] * x[285];
	v[0] += v[1];
	sporttournament36_pd[102] = 2. * x[29];
	v[1] = sporttournament36_pd[102] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[103] = 2. * x[29];
	v[2] = sporttournament36_pd[103] * x[51];
	v[0] += v[2];
	sporttournament36_pd[104] = 2. * x[29];
	v[2] = sporttournament36_pd[104] * x[72];
	v[0] += v[2];
	sporttournament36_pd[105] = 2. * x[29];
	v[2] = sporttournament36_pd[105] * x[556];
	v[0] += v[2];
	sporttournament36_pd[106] = 2. * x[30];
	v[2] = sporttournament36_pd[106] * x[31];
	v[0] += v[2];
	sporttournament36_pd[107] = 2. * x[30];
	v[2] = sporttournament36_pd[107] * x[169];
	v[0] += v[2];
	sporttournament36_pd[108] = 2. * x[31];
	v[2] = sporttournament36_pd[108] * x[72];
	v[0] += v[2];
	sporttournament36_pd[109] = 2. * x[32];
	v[2] = sporttournament36_pd[109] * x[297];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[110] = 2. * x[32];
	v[1] = sporttournament36_pd[110] * x[389];
	v[0] += v[1];
	sporttournament36_pd[111] = 2. * x[32];
	v[1] = sporttournament36_pd[111] * x[442];
	v[0] += v[1];
	sporttournament36_pd[112] = 2. * x[32];
	v[1] = sporttournament36_pd[112] * x[525];
	v[0] += v[1];
	sporttournament36_pd[113] = 2. * x[33];
	v[1] = sporttournament36_pd[113] * x[45];
	v[0] += v[1];
	sporttournament36_pd[114] = 2. * x[33];
	v[1] = sporttournament36_pd[114] * x[56];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[115] = 2. * x[33];
	v[2] = sporttournament36_pd[115] * x[344];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[116] = 2. * x[33];
	v[1] = sporttournament36_pd[116] * x[404];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[117] = 2. * x[34];
	v[2] = sporttournament36_pd[117] * x[35];
	v[0] += v[2];
	sporttournament36_pd[118] = 2. * x[34];
	v[2] = sporttournament36_pd[118] * x[61];
	v[0] += v[2];
	sporttournament36_pd[119] = 2. * x[34];
	v[2] = sporttournament36_pd[119] * x[157];
	v[0] += v[2];
	sporttournament36_pd[120] = 2. * x[34];
	v[2] = sporttournament36_pd[120] * x[450];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[121] = 2. * x[35];
	v[1] = sporttournament36_pd[121] * x[62];
	v[0] += v[1];
	sporttournament36_pd[122] = 2. * x[35];
	v[1] = sporttournament36_pd[122] * x[107];
	v[0] += v[1];
	sporttournament36_pd[123] = 2. * x[35];
	v[1] = sporttournament36_pd[123] * x[245];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[124] = 2. * x[36];
	v[2] = sporttournament36_pd[124] * x[48];
	v[0] += v[2];
	sporttournament36_pd[125] = 2. * x[36];
	v[2] = sporttournament36_pd[125] * x[108];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[126] = 2. * x[36];
	v[1] = sporttournament36_pd[126] * x[385];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[127] = 2. * x[37];
	v[2] = sporttournament36_pd[127] * x[285];
	v[0] += v[2];
	sporttournament36_pd[128] = 2. * x[37];
	v[2] = sporttournament36_pd[128] * x[325];
	v[0] += v[2];
	sporttournament36_pd[129] = 2. * x[37];
	v[2] = sporttournament36_pd[129] * x[368];
	v[0] += v[2];
	sporttournament36_pd[130] = 2. * x[37];
	v[2] = sporttournament36_pd[130] * x[511];
	v[0] += v[2];
	sporttournament36_pd[131] = 2. * x[38];
	v[2] = sporttournament36_pd[131] * x[67];
	v[0] += v[2];
	sporttournament36_pd[132] = 2. * x[38];
	v[2] = sporttournament36_pd[132] * x[132];
	v[0] += v[2];
	sporttournament36_pd[133] = 2. * x[38];
	v[2] = sporttournament36_pd[133] * x[325];
	v[0] += v[2];
	sporttournament36_pd[134] = 2. * x[38];
	v[2] = sporttournament36_pd[134] * x[492];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[135] = 2. * x[39];
	v[1] = sporttournament36_pd[135] * x[327];
	v[0] += v[1];
	sporttournament36_pd[136] = 2. * x[39];
	v[1] = sporttournament36_pd[136] * x[513];
	v[0] += v[1];
	sporttournament36_pd[137] = 2. * x[39];
	v[1] = sporttournament36_pd[137] * x[543];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[138] = 2. * x[40];
	v[2] = sporttournament36_pd[138] * x[41];
	v[0] += v[2];
	sporttournament36_pd[139] = 2. * x[40];
	v[2] = sporttournament36_pd[139] * x[558];
	v[0] += v[2];
	sporttournament36_pd[140] = 2. * x[40];
	v[2] = sporttournament36_pd[140] * x[567];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[141] = 2. * x[40];
	v[1] = sporttournament36_pd[141] * x[568];
	v[0] += v[1];
	sporttournament36_pd[142] = 2. * x[41];
	v[1] = sporttournament36_pd[142] * x[70];
	v[0] += v[1];
	sporttournament36_pd[143] = 2. * x[41];
	v[1] = sporttournament36_pd[143] * x[91];
	v[0] += v[1];
	sporttournament36_pd[144] = 2. * x[42];
	v[1] = sporttournament36_pd[144] * x[43];
	v[0] += v[1];
	sporttournament36_pd[145] = 2. * x[42];
	v[1] = sporttournament36_pd[145] * x[197];
	v[0] += v[1];
	sporttournament36_pd[146] = 2. * x[42];
	v[1] = sporttournament36_pd[146] * x[558];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[147] = 2. * x[43];
	v[2] = sporttournament36_pd[147] * x[91];
	v[0] += v[2];
	sporttournament36_pd[148] = 2. * x[44];
	v[2] = sporttournament36_pd[148] * x[46];
	v[0] += v[2];
	sporttournament36_pd[149] = 2. * x[44];
	v[2] = sporttournament36_pd[149] * x[77];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[150] = 2. * x[44];
	v[1] = sporttournament36_pd[150] * x[301];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[151] = 2. * x[44];
	v[2] = sporttournament36_pd[151] * x[397];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[152] = 2. * x[45];
	v[1] = sporttournament36_pd[152] * x[405];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[153] = 2. * x[45];
	v[2] = sporttournament36_pd[153] * x[582];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[154] = 2. * x[45];
	v[1] = sporttournament36_pd[154] * x[583];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[155] = 2. * x[46];
	v[2] = sporttournament36_pd[155] * x[232];
	v[0] += v[2];
	sporttournament36_pd[156] = 2. * x[46];
	v[2] = sporttournament36_pd[156] * x[415];
	v[0] += v[2];
	sporttournament36_pd[157] = 2. * x[46];
	v[2] = sporttournament36_pd[157] * x[583];
	v[0] += v[2];
	sporttournament36_pd[158] = 2. * x[47];
	v[2] = sporttournament36_pd[158] * x[149];
	v[0] += v[2];
	sporttournament36_pd[159] = 2. * x[47];
	v[2] = sporttournament36_pd[159] * x[206];
	v[0] += v[2];
	sporttournament36_pd[160] = 2. * x[47];
	v[2] = sporttournament36_pd[160] * x[236];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[161] = 2. * x[47];
	v[1] = sporttournament36_pd[161] * x[396];
	v[0] += v[1];
	sporttournament36_pd[162] = 2. * x[48];
	v[1] = sporttournament36_pd[162] * x[325];
	v[0] += v[1];
	sporttournament36_pd[163] = 2. * x[48];
	v[1] = sporttournament36_pd[163] * x[370];
	v[0] += v[1];
	sporttournament36_pd[164] = 2. * x[48];
	v[1] = sporttournament36_pd[164] * x[384];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[165] = 2. * x[49];
	v[2] = sporttournament36_pd[165] * x[88];
	v[0] += v[2];
	sporttournament36_pd[166] = 2. * x[49];
	v[2] = sporttournament36_pd[166] * x[163];
	v[0] += v[2];
	sporttournament36_pd[167] = 2. * x[49];
	v[2] = sporttournament36_pd[167] * x[370];
	v[0] += v[2];
	sporttournament36_pd[168] = 2. * x[49];
	v[2] = sporttournament36_pd[168] * x[492];
	v[0] += v[2];
	sporttournament36_pd[169] = 2. * x[50];
	v[2] = sporttournament36_pd[169] * x[133];
	v[0] += v[2];
	sporttournament36_pd[170] = 2. * x[50];
	v[2] = sporttournament36_pd[170] * x[501];
	v[0] += v[2];
	sporttournament36_pd[171] = 2. * x[50];
	v[2] = sporttournament36_pd[171] * x[533];
	v[0] += v[2];
	sporttournament36_pd[172] = 2. * x[51];
	v[2] = sporttournament36_pd[172] * x[52];
	v[0] += v[2];
	sporttournament36_pd[173] = 2. * x[51];
	v[2] = sporttournament36_pd[173] * x[136];
	v[0] += v[2];
	sporttournament36_pd[174] = 2. * x[51];
	v[2] = sporttournament36_pd[174] * x[577];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[175] = 2. * x[52];
	v[1] = sporttournament36_pd[175] * x[89];
	v[0] += v[1];
	sporttournament36_pd[176] = 2. * x[52];
	v[1] = sporttournament36_pd[176] * x[114];
	v[0] += v[1];
	sporttournament36_pd[177] = 2. * x[53];
	v[1] = sporttournament36_pd[177] * x[54];
	v[0] += v[1];
	sporttournament36_pd[178] = 2. * x[53];
	v[1] = sporttournament36_pd[178] * x[381];
	v[0] += v[1];
	sporttournament36_pd[179] = 2. * x[53];
	v[1] = sporttournament36_pd[179] * x[558];
	v[0] += v[1];
	sporttournament36_pd[180] = 2. * x[54];
	v[1] = sporttournament36_pd[180] * x[114];
	v[0] += v[1];
	sporttournament36_pd[181] = 2. * x[55];
	v[1] = sporttournament36_pd[181] * x[57];
	v[0] += v[1];
	sporttournament36_pd[182] = 2. * x[55];
	v[1] = sporttournament36_pd[182] * x[97];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[183] = 2. * x[55];
	v[2] = sporttournament36_pd[183] * x[394];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[184] = 2. * x[55];
	v[1] = sporttournament36_pd[184] * x[435];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[185] = 2. * x[56];
	v[2] = sporttournament36_pd[185] * x[415];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[186] = 2. * x[56];
	v[1] = sporttournament36_pd[186] * x[573];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[187] = 2. * x[56];
	v[2] = sporttournament36_pd[187] * x[574];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[188] = 2. * x[57];
	v[1] = sporttournament36_pd[188] * x[425];
	v[0] += v[1];
	sporttournament36_pd[189] = 2. * x[57];
	v[1] = sporttournament36_pd[189] * x[574];
	v[0] += v[1];
	sporttournament36_pd[190] = 2. * x[57];
	v[1] = sporttournament36_pd[190] * x[582];
	v[0] += v[1];
	sporttournament36_pd[191] = 2. * x[58];
	v[1] = sporttournament36_pd[191] * x[59];
	v[0] += v[1];
	sporttournament36_pd[192] = 2. * x[58];
	v[1] = sporttournament36_pd[192] * x[237];
	v[0] += v[1];
	sporttournament36_pd[193] = 2. * x[58];
	v[1] = sporttournament36_pd[193] * x[267];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[194] = 2. * x[58];
	v[2] = sporttournament36_pd[194] * x[505];
	v[0] += v[2];
	sporttournament36_pd[195] = 2. * x[59];
	v[2] = sporttournament36_pd[195] * x[239];
	v[0] += v[2];
	sporttournament36_pd[196] = 2. * x[59];
	v[2] = sporttournament36_pd[196] * x[350];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[197] = 2. * x[59];
	v[1] = sporttournament36_pd[197] * x[398];
	v[0] += v[1];
	sporttournament36_pd[198] = 2. * x[60];
	v[1] = sporttournament36_pd[198] * x[273];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[199] = 2. * x[60];
	v[2] = sporttournament36_pd[199] * x[528];
	v[0] += v[2];
	sporttournament36_pd[200] = 2. * x[60];
	v[2] = sporttournament36_pd[200] * x[592];
	v[0] += v[2];
	sporttournament36_pd[201] = 2. * x[61];
	v[2] = sporttournament36_pd[201] * x[63];
	v[0] += v[2];
	sporttournament36_pd[202] = 2. * x[61];
	v[2] = sporttournament36_pd[202] * x[106];
	v[0] += v[2];
	sporttournament36_pd[203] = 2. * x[61];
	v[2] = sporttournament36_pd[203] * x[320];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[204] = 2. * x[62];
	v[1] = sporttournament36_pd[204] * x[64];
	v[0] += v[1];
	sporttournament36_pd[205] = 2. * x[62];
	v[1] = sporttournament36_pd[205] * x[365];
	v[0] += v[1];
	sporttournament36_pd[206] = 2. * x[62];
	v[1] = sporttournament36_pd[206] * x[490];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[207] = 2. * x[63];
	v[2] = sporttournament36_pd[207] * x[64];
	v[0] += v[2];
	sporttournament36_pd[208] = 2. * x[63];
	v[2] = sporttournament36_pd[208] * x[385];
	v[0] += v[2];
	sporttournament36_pd[209] = 2. * x[63];
	v[2] = sporttournament36_pd[209] * x[566];
	v[0] += v[2];
	sporttournament36_pd[210] = 2. * x[64];
	v[2] = sporttournament36_pd[210] * x[322];
	v[0] += v[2];
	sporttournament36_pd[211] = 2. * x[64];
	v[2] = sporttournament36_pd[211] * x[384];
	v[0] += v[2];
	sporttournament36_pd[212] = 2. * x[65];
	v[2] = sporttournament36_pd[212] * x[66];
	v[0] += v[2];
	sporttournament36_pd[213] = 2. * x[66];
	v[2] = sporttournament36_pd[213] * x[111];
	v[0] += v[2];
	sporttournament36_pd[214] = 2. * x[66];
	v[2] = sporttournament36_pd[214] * x[192];
	v[0] += v[2];
	sporttournament36_pd[215] = 2. * x[66];
	v[2] = sporttournament36_pd[215] * x[371];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[216] = 2. * x[67];
	v[1] = sporttournament36_pd[216] * x[493];
	v[0] += v[1];
	sporttournament36_pd[217] = 2. * x[67];
	v[1] = sporttournament36_pd[217] * x[543];
	v[0] += v[1];
	sporttournament36_pd[218] = 2. * x[68];
	v[1] = sporttournament36_pd[218] * x[69];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[219] = 2. * x[68];
	v[2] = sporttournament36_pd[219] * x[386];
	v[0] += v[2];
	sporttournament36_pd[220] = 2. * x[68];
	v[2] = sporttournament36_pd[220] * x[391];
	v[0] += v[2];
	sporttournament36_pd[221] = 2. * x[68];
	v[2] = sporttournament36_pd[221] * x[543];
	v[0] += v[2];
	sporttournament36_pd[222] = 2. * x[69];
	v[2] = sporttournament36_pd[222] * x[112];
	v[0] += v[2];
	sporttournament36_pd[223] = 2. * x[69];
	v[2] = sporttournament36_pd[223] * x[556];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[224] = 2. * x[69];
	v[1] = sporttournament36_pd[224] * x[594];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[225] = 2. * x[70];
	v[2] = sporttournament36_pd[225] * x[71];
	v[0] += v[2];
	sporttournament36_pd[226] = 2. * x[70];
	v[2] = sporttournament36_pd[226] * x[166];
	v[0] += v[2];
	sporttournament36_pd[227] = 2. * x[70];
	v[2] = sporttournament36_pd[227] * x[577];
	v[0] += v[2];
	sporttournament36_pd[228] = 2. * x[71];
	v[2] = sporttournament36_pd[228] * x[112];
	v[0] += v[2];
	sporttournament36_pd[229] = 2. * x[71];
	v[2] = sporttournament36_pd[229] * x[139];
	v[0] += v[2];
	sporttournament36_pd[230] = 2. * x[71];
	v[2] = sporttournament36_pd[230] * x[524];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[231] = 2. * x[72];
	v[1] = sporttournament36_pd[231] * x[73];
	v[0] += v[1];
	sporttournament36_pd[232] = 2. * x[72];
	v[1] = sporttournament36_pd[232] * x[335];
	v[0] += v[1];
	sporttournament36_pd[233] = 2. * x[73];
	v[1] = sporttournament36_pd[233] * x[139];
	v[0] += v[1];
	sporttournament36_pd[234] = 2. * x[74];
	v[1] = sporttournament36_pd[234] * x[141];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[235] = 2. * x[74];
	v[2] = sporttournament36_pd[235] * x[393];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[236] = 2. * x[74];
	v[1] = sporttournament36_pd[236] * x[503];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[237] = 2. * x[74];
	v[2] = sporttournament36_pd[237] * x[591];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[238] = 2. * x[75];
	v[1] = sporttournament36_pd[238] * x[116];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[239] = 2. * x[75];
	v[2] = sporttournament36_pd[239] * x[337];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[240] = 2. * x[75];
	v[1] = sporttournament36_pd[240] * x[495];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[241] = 2. * x[75];
	v[2] = sporttournament36_pd[241] * x[591];
	v[0] += v[2];
	sporttournament36_pd[242] = 2. * x[76];
	v[2] = sporttournament36_pd[242] * x[231];
	v[0] += v[2];
	sporttournament36_pd[243] = 2. * x[76];
	v[2] = sporttournament36_pd[243] * x[404];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[244] = 2. * x[76];
	v[1] = sporttournament36_pd[244] * x[443];
	v[0] += v[1];
	sporttournament36_pd[245] = 2. * x[76];
	v[1] = sporttournament36_pd[245] * x[591];
	v[0] += v[1];
	sporttournament36_pd[246] = 2. * x[77];
	v[1] = sporttournament36_pd[246] * x[425];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[247] = 2. * x[77];
	v[2] = sporttournament36_pd[247] * x[563];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[248] = 2. * x[77];
	v[1] = sporttournament36_pd[248] * x[564];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[249] = 2. * x[78];
	v[2] = sporttournament36_pd[249] * x[436];
	v[0] += v[2];
	sporttournament36_pd[250] = 2. * x[78];
	v[2] = sporttournament36_pd[250] * x[445];
	v[0] += v[2];
	sporttournament36_pd[251] = 2. * x[78];
	v[2] = sporttournament36_pd[251] * x[564];
	v[0] += v[2];
	sporttournament36_pd[252] = 2. * x[78];
	v[2] = sporttournament36_pd[252] * x[573];
	v[0] += v[2];
	sporttournament36_pd[253] = 2. * x[79];
	v[2] = sporttournament36_pd[253] * x[80];
	v[0] += v[2];
	sporttournament36_pd[254] = 2. * x[79];
	v[2] = sporttournament36_pd[254] * x[268];
	v[0] += v[2];
	sporttournament36_pd[255] = 2. * x[79];
	v[2] = sporttournament36_pd[255] * x[304];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[256] = 2. * x[79];
	v[1] = sporttournament36_pd[256] * x[517];
	v[0] += v[1];
	sporttournament36_pd[257] = 2. * x[80];
	v[1] = sporttournament36_pd[257] * x[207];
	v[0] += v[1];
	sporttournament36_pd[258] = 2. * x[80];
	v[1] = sporttournament36_pd[258] * x[406];
	v[0] += v[1];
	sporttournament36_pd[259] = 2. * x[80];
	v[1] = sporttournament36_pd[259] * x[595];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[260] = 2. * x[81];
	v[2] = sporttournament36_pd[260] * x[154];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[261] = 2. * x[81];
	v[1] = sporttournament36_pd[261] * x[417];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[262] = 2. * x[81];
	v[2] = sporttournament36_pd[262] * x[506];
	v[0] += v[2];
	sporttournament36_pd[263] = 2. * x[81];
	v[2] = sporttournament36_pd[263] * x[584];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[264] = 2. * x[82];
	v[1] = sporttournament36_pd[264] * x[154];
	v[0] += v[1];
	sporttournament36_pd[265] = 2. * x[82];
	v[1] = sporttournament36_pd[265] * x[310];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[266] = 2. * x[82];
	v[2] = sporttournament36_pd[266] * x[539];
	v[0] += v[2];
	sporttournament36_pd[267] = 2. * x[83];
	v[2] = sporttournament36_pd[267] * x[154];
	v[0] += v[2];
	sporttournament36_pd[268] = 2. * x[83];
	v[2] = sporttournament36_pd[268] * x[156];
	v[0] += v[2];
	sporttournament36_pd[269] = 2. * x[83];
	v[2] = sporttournament36_pd[269] * x[417];
	v[0] += v[2];
	sporttournament36_pd[270] = 2. * x[83];
	v[2] = sporttournament36_pd[270] * x[540];
	v[0] += v[2];
	sporttournament36_pd[271] = 2. * x[84];
	v[2] = sporttournament36_pd[271] * x[85];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[272] = 2. * x[84];
	v[1] = sporttournament36_pd[272] * x[365];
	v[0] += v[1];
	sporttournament36_pd[273] = 2. * x[84];
	v[1] = sporttournament36_pd[273] * x[439];
	v[0] += v[1];
	sporttournament36_pd[274] = 2. * x[84];
	v[1] = sporttournament36_pd[274] * x[576];
	v[0] += v[1];
	sporttournament36_pd[275] = 2. * x[85];
	v[1] = sporttournament36_pd[275] * x[367];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[276] = 2. * x[85];
	v[2] = sporttournament36_pd[276] * x[491];
	v[0] += v[2];
	sporttournament36_pd[277] = 2. * x[85];
	v[2] = sporttournament36_pd[277] * x[596];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[278] = 2. * x[86];
	v[1] = sporttournament36_pd[278] * x[87];
	v[0] += v[1];
	sporttournament36_pd[279] = 2. * x[87];
	v[1] = sporttournament36_pd[279] * x[132];
	v[0] += v[1];
	sporttournament36_pd[280] = 2. * x[87];
	v[1] = sporttournament36_pd[280] * x[222];
	v[0] += v[1];
	sporttournament36_pd[281] = 2. * x[87];
	v[1] = sporttournament36_pd[281] * x[326];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[282] = 2. * x[88];
	v[2] = sporttournament36_pd[282] * x[375];
	v[0] += v[2];
	sporttournament36_pd[283] = 2. * x[88];
	v[2] = sporttournament36_pd[283] * x[480];
	v[0] += v[2];
	sporttournament36_pd[284] = 2. * x[89];
	v[2] = sporttournament36_pd[284] * x[90];
	v[0] += v[2];
	sporttournament36_pd[285] = 2. * x[89];
	v[2] = sporttournament36_pd[285] * x[195];
	v[0] += v[2];
	sporttournament36_pd[286] = 2. * x[89];
	v[2] = sporttournament36_pd[286] * x[567];
	v[0] += v[2];
	sporttournament36_pd[287] = 2. * x[90];
	v[2] = sporttournament36_pd[287] * x[137];
	v[0] += v[2];
	sporttournament36_pd[288] = 2. * x[90];
	v[2] = sporttournament36_pd[288] * x[170];
	v[0] += v[2];
	sporttournament36_pd[289] = 2. * x[90];
	v[2] = sporttournament36_pd[289] * x[524];
	v[0] += v[2];
	sporttournament36_pd[290] = 2. * x[91];
	v[2] = sporttournament36_pd[290] * x[92];
	v[0] += v[2];
	sporttournament36_pd[291] = 2. * x[91];
	v[2] = sporttournament36_pd[291] * x[293];
	v[0] += v[2];
	sporttournament36_pd[292] = 2. * x[92];
	v[2] = sporttournament36_pd[292] * x[170];
	v[0] += v[2];
	sporttournament36_pd[293] = 2. * x[93];
	v[2] = sporttournament36_pd[293] * x[200];
	v[0] += v[2];
	sporttournament36_pd[294] = 2. * x[93];
	v[2] = sporttournament36_pd[294] * x[424];
	v[0] += v[2];
	sporttournament36_pd[295] = 2. * x[93];
	v[2] = sporttournament36_pd[295] * x[484];
	v[0] += v[2];
	sporttournament36_pd[296] = 2. * x[93];
	v[2] = sporttournament36_pd[296] * x[598];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[297] = 2. * x[94];
	v[1] = sporttournament36_pd[297] * x[203];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[298] = 2. * x[94];
	v[2] = sporttournament36_pd[298] * x[264];
	v[0] += v[2];
	sporttournament36_pd[299] = 2. * x[94];
	v[2] = sporttournament36_pd[299] * x[299];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[300] = 2. * x[94];
	v[1] = sporttournament36_pd[300] * x[503];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[301] = 2. * x[95];
	v[2] = sporttournament36_pd[301] * x[264];
	v[0] += v[2];
	sporttournament36_pd[302] = 2. * x[95];
	v[2] = sporttournament36_pd[302] * x[397];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[303] = 2. * x[95];
	v[1] = sporttournament36_pd[303] * x[456];
	v[0] += v[1];
	sporttournament36_pd[304] = 2. * x[95];
	v[1] = sporttournament36_pd[304] * x[587];
	v[0] += v[1];
	sporttournament36_pd[305] = 2. * x[96];
	v[1] = sporttournament36_pd[305] * x[232];
	v[0] += v[1];
	sporttournament36_pd[306] = 2. * x[96];
	v[1] = sporttournament36_pd[306] * x[515];
	v[0] += v[1];
	sporttournament36_pd[307] = 2. * x[96];
	v[1] = sporttournament36_pd[307] * x[561];
	v[0] += v[1];
	sporttournament36_pd[308] = 2. * x[96];
	v[1] = sporttournament36_pd[308] * x[563];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[309] = 2. * x[97];
	v[2] = sporttournament36_pd[309] * x[120];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[310] = 2. * x[97];
	v[1] = sporttournament36_pd[310] * x[436];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[311] = 2. * x[97];
	v[2] = sporttournament36_pd[311] * x[553];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[312] = 2. * x[98];
	v[1] = sporttournament36_pd[312] * x[447];
	v[0] += v[1];
	sporttournament36_pd[313] = 2. * x[98];
	v[1] = sporttournament36_pd[313] * x[458];
	v[0] += v[1];
	sporttournament36_pd[314] = 2. * x[98];
	v[1] = sporttournament36_pd[314] * x[553];
	v[0] += v[1];
	sporttournament36_pd[315] = 2. * x[98];
	v[1] = sporttournament36_pd[315] * x[563];
	v[0] += v[1];
	sporttournament36_pd[316] = 2. * x[99];
	v[1] = sporttournament36_pd[316] * x[436];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[317] = 2. * x[99];
	v[2] = sporttournament36_pd[317] * x[437];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[318] = 2. * x[99];
	v[1] = sporttournament36_pd[318] * x[564];
	v[0] += v[1];
	sporttournament36_pd[319] = 2. * x[99];
	v[1] = sporttournament36_pd[319] * x[595];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[320] = 2. * x[100];
	v[2] = sporttournament36_pd[320] * x[425];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[321] = 2. * x[100];
	v[1] = sporttournament36_pd[321] * x[448];
	v[0] += v[1];
	sporttournament36_pd[322] = 2. * x[100];
	v[1] = sporttournament36_pd[322] * x[553];
	v[0] += v[1];
	sporttournament36_pd[323] = 2. * x[100];
	v[1] = sporttournament36_pd[323] * x[595];
	v[0] += v[1];
	sporttournament36_pd[324] = 2. * x[101];
	v[1] = sporttournament36_pd[324] * x[102];
	v[0] += v[1];
	sporttournament36_pd[325] = 2. * x[101];
	v[1] = sporttournament36_pd[325] * x[305];
	v[0] += v[1];
	sporttournament36_pd[326] = 2. * x[101];
	v[1] = sporttournament36_pd[326] * x[348];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[327] = 2. * x[101];
	v[2] = sporttournament36_pd[327] * x[527];
	v[0] += v[2];
	sporttournament36_pd[328] = 2. * x[102];
	v[2] = sporttournament36_pd[328] * x[179];
	v[0] += v[2];
	sporttournament36_pd[329] = 2. * x[102];
	v[2] = sporttournament36_pd[329] * x[416];
	v[0] += v[2];
	sporttournament36_pd[330] = 2. * x[102];
	v[2] = sporttournament36_pd[330] * x[595];
	v[0] += v[2];
	sporttournament36_pd[331] = 2. * x[103];
	v[2] = sporttournament36_pd[331] * x[105];
	v[0] += v[2];
	sporttournament36_pd[332] = 2. * x[103];
	v[2] = sporttournament36_pd[332] * x[180];
	v[0] += v[2];
	sporttournament36_pd[333] = 2. * x[103];
	v[2] = sporttournament36_pd[333] * x[271];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[334] = 2. * x[103];
	v[1] = sporttournament36_pd[334] * x[398];
	v[0] += v[1];
	sporttournament36_pd[335] = 2. * x[104];
	v[1] = sporttournament36_pd[335] * x[181];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[336] = 2. * x[104];
	v[2] = sporttournament36_pd[336] * x[426];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[337] = 2. * x[104];
	v[1] = sporttournament36_pd[337] * x[496];
	v[0] += v[1];
	sporttournament36_pd[338] = 2. * x[104];
	v[1] = sporttournament36_pd[338] * x[575];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[339] = 2. * x[105];
	v[2] = sporttournament36_pd[339] * x[181];
	v[0] += v[2];
	sporttournament36_pd[340] = 2. * x[105];
	v[2] = sporttournament36_pd[340] * x[353];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[341] = 2. * x[106];
	v[1] = sporttournament36_pd[341] * x[277];
	v[0] += v[1];
	sporttournament36_pd[342] = 2. * x[106];
	v[1] = sporttournament36_pd[342] * x[318];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[343] = 2. * x[107];
	v[2] = sporttournament36_pd[343] * x[108];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[344] = 2. * x[107];
	v[1] = sporttournament36_pd[344] * x[430];
	v[0] += v[1];
	sporttournament36_pd[345] = 2. * x[107];
	v[1] = sporttournament36_pd[345] * x[477];
	v[0] += v[1];
	sporttournament36_pd[346] = 2. * x[108];
	v[1] = sporttournament36_pd[346] * x[500];
	v[0] += v[1];
	sporttournament36_pd[347] = 2. * x[108];
	v[1] = sporttournament36_pd[347] * x[600];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[348] = 2. * x[109];
	v[2] = sporttournament36_pd[348] * x[110];
	v[0] += v[2];
	sporttournament36_pd[349] = 2. * x[110];
	v[2] = sporttournament36_pd[349] * x[163];
	v[0] += v[2];
	sporttournament36_pd[350] = 2. * x[110];
	v[2] = sporttournament36_pd[350] * x[254];
	v[0] += v[2];
	sporttournament36_pd[351] = 2. * x[110];
	v[2] = sporttournament36_pd[351] * x[286];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[352] = 2. * x[111];
	v[1] = sporttournament36_pd[352] * x[466];
	v[0] += v[1];
	sporttournament36_pd[353] = 2. * x[111];
	v[1] = sporttournament36_pd[353] * x[523];
	v[0] += v[1];
	sporttournament36_pd[354] = 2. * x[112];
	v[1] = sporttournament36_pd[354] * x[113];
	v[0] += v[1];
	sporttournament36_pd[355] = 2. * x[112];
	v[1] = sporttournament36_pd[355] * x[227];
	v[0] += v[1];
	sporttournament36_pd[356] = 2. * x[113];
	v[1] = sporttournament36_pd[356] * x[167];
	v[0] += v[1];
	sporttournament36_pd[357] = 2. * x[113];
	v[1] = sporttournament36_pd[357] * x[198];
	v[0] += v[1];
	sporttournament36_pd[358] = 2. * x[114];
	v[1] = sporttournament36_pd[358] * x[115];
	v[0] += v[1];
	sporttournament36_pd[359] = 2. * x[114];
	v[1] = sporttournament36_pd[359] * x[336];
	v[0] += v[1];
	sporttournament36_pd[360] = 2. * x[115];
	v[1] = sporttournament36_pd[360] * x[198];
	v[0] += v[1];
	sporttournament36_pd[361] = 2. * x[116];
	v[1] = sporttournament36_pd[361] * x[470];
	v[0] += v[1];
	sporttournament36_pd[362] = 2. * x[116];
	v[1] = sporttournament36_pd[362] * x[534];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[363] = 2. * x[116];
	v[2] = sporttournament36_pd[363] * x[602];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[364] = 2. * x[117];
	v[1] = sporttournament36_pd[364] * x[119];
	v[0] += v[1];
	sporttournament36_pd[365] = 2. * x[117];
	v[1] = sporttournament36_pd[365] * x[173];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[366] = 2. * x[117];
	v[2] = sporttournament36_pd[366] * x[392];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[367] = 2. * x[117];
	v[1] = sporttournament36_pd[367] * x[470];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[368] = 2. * x[118];
	v[2] = sporttournament36_pd[368] * x[175];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[369] = 2. * x[118];
	v[1] = sporttournament36_pd[369] * x[300];
	v[0] += v[1];
	sporttournament36_pd[370] = 2. * x[118];
	v[1] = sporttournament36_pd[370] * x[495];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[371] = 2. * x[118];
	v[2] = sporttournament36_pd[371] * x[535];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[372] = 2. * x[119];
	v[1] = sporttournament36_pd[372] * x[300];
	v[0] += v[1];
	sporttournament36_pd[373] = 2. * x[119];
	v[1] = sporttournament36_pd[373] * x[394];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[374] = 2. * x[119];
	v[2] = sporttournament36_pd[374] * x[580];
	v[0] += v[2];
	sporttournament36_pd[375] = 2. * x[120];
	v[2] = sporttournament36_pd[375] * x[122];
	v[0] += v[2];
	sporttournament36_pd[376] = 2. * x[120];
	v[2] = sporttournament36_pd[376] * x[300];
	v[0] += v[2];
	sporttournament36_pd[377] = 2. * x[120];
	v[2] = sporttournament36_pd[377] * x[572];
	v[0] += v[2];
	sporttournament36_pd[378] = 2. * x[121];
	v[2] = sporttournament36_pd[378] * x[445];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[379] = 2. * x[121];
	v[1] = sporttournament36_pd[379] * x[447];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[380] = 2. * x[121];
	v[2] = sporttournament36_pd[380] * x[546];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[381] = 2. * x[121];
	v[1] = sporttournament36_pd[381] * x[547];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[382] = 2. * x[122];
	v[2] = sporttournament36_pd[382] * x[459];
	v[0] += v[2];
	sporttournament36_pd[383] = 2. * x[122];
	v[2] = sporttournament36_pd[383] * x[471];
	v[0] += v[2];
	sporttournament36_pd[384] = 2. * x[122];
	v[2] = sporttournament36_pd[384] * x[547];
	v[0] += v[2];
	sporttournament36_pd[385] = 2. * x[123];
	v[2] = sporttournament36_pd[385] * x[350];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[386] = 2. * x[123];
	v[1] = sporttournament36_pd[386] * x[447];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[387] = 2. * x[123];
	v[2] = sporttournament36_pd[387] * x[448];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[388] = 2. * x[123];
	v[1] = sporttournament36_pd[388] * x[574];
	v[0] += v[1];
	sporttournament36_pd[389] = 2. * x[124];
	v[1] = sporttournament36_pd[389] * x[350];
	v[0] += v[1];
	sporttournament36_pd[390] = 2. * x[124];
	v[1] = sporttournament36_pd[390] * x[415];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[391] = 2. * x[124];
	v[2] = sporttournament36_pd[391] * x[460];
	v[0] += v[2];
	sporttournament36_pd[392] = 2. * x[124];
	v[2] = sporttournament36_pd[392] * x[547];
	v[0] += v[2];
	sporttournament36_pd[393] = 2. * x[125];
	v[2] = sporttournament36_pd[393] * x[126];
	v[0] += v[2];
	sporttournament36_pd[394] = 2. * x[125];
	v[2] = sporttournament36_pd[394] * x[308];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[395] = 2. * x[125];
	v[1] = sporttournament36_pd[395] * x[406];
	v[0] += v[1];
	sporttournament36_pd[396] = 2. * x[125];
	v[1] = sporttournament36_pd[396] * x[449];
	v[0] += v[1];
	sporttournament36_pd[397] = 2. * x[126];
	v[1] = sporttournament36_pd[397] * x[209];
	v[0] += v[1];
	sporttournament36_pd[398] = 2. * x[126];
	v[1] = sporttournament36_pd[398] * x[604];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[399] = 2. * x[127];
	v[2] = sporttournament36_pd[399] * x[183];
	v[0] += v[2];
	sporttournament36_pd[400] = 2. * x[127];
	v[2] = sporttournament36_pd[400] * x[209];
	v[0] += v[2];
	sporttournament36_pd[401] = 2. * x[127];
	v[2] = sporttournament36_pd[401] * x[314];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[402] = 2. * x[127];
	v[1] = sporttournament36_pd[402] * x[592];
	v[0] += v[1];
	sporttournament36_pd[403] = 2. * x[128];
	v[1] = sporttournament36_pd[403] * x[280];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[404] = 2. * x[128];
	v[2] = sporttournament36_pd[404] * x[439];
	v[0] += v[2];
	sporttournament36_pd[405] = 2. * x[128];
	v[2] = sporttournament36_pd[405] * x[509];
	v[0] += v[2];
	sporttournament36_pd[406] = 2. * x[128];
	v[2] = sporttournament36_pd[406] * x[541];
	v[0] += v[2];
	sporttournament36_pd[407] = 2. * x[129];
	v[2] = sporttournament36_pd[407] * x[464];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[408] = 2. * x[129];
	v[1] = sporttournament36_pd[408] * x[511];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[409] = 2. * x[129];
	v[2] = sporttournament36_pd[409] * x[512];
	v[0] += v[2];
	sporttournament36_pd[410] = 2. * x[129];
	v[2] = sporttournament36_pd[410] * x[606];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[411] = 2. * x[130];
	v[1] = sporttournament36_pd[411] * x[131];
	v[0] += v[1];
	sporttournament36_pd[412] = 2. * x[130];
	v[1] = sporttournament36_pd[412] * x[533];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[413] = 2. * x[131];
	v[2] = sporttournament36_pd[413] * x[192];
	v[0] += v[2];
	sporttournament36_pd[414] = 2. * x[131];
	v[2] = sporttournament36_pd[414] * x[252];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[415] = 2. * x[131];
	v[1] = sporttournament36_pd[415] * x[287];
	v[0] += v[1];
	sporttournament36_pd[416] = 2. * x[132];
	v[1] = sporttournament36_pd[416] * x[134];
	v[0] += v[1];
	sporttournament36_pd[417] = 2. * x[132];
	v[1] = sporttournament36_pd[417] * x[513];
	v[0] += v[1];
	sporttournament36_pd[418] = 2. * x[133];
	v[1] = sporttournament36_pd[418] * x[135];
	v[0] += v[1];
	sporttournament36_pd[419] = 2. * x[133];
	v[1] = sporttournament36_pd[419] * x[330];
	v[0] += v[1];
	sporttournament36_pd[420] = 2. * x[133];
	v[1] = sporttournament36_pd[420] * x[433];
	v[0] += v[1];
	sporttournament36_pd[421] = 2. * x[134];
	v[1] = sporttournament36_pd[421] * x[135];
	v[0] += v[1];
	sporttournament36_pd[422] = 2. * x[134];
	v[1] = sporttournament36_pd[422] * x[287];
	v[0] += v[1];
	sporttournament36_pd[423] = 2. * x[134];
	v[1] = sporttournament36_pd[423] * x[465];
	v[0] += v[1];
	sporttournament36_pd[424] = 2. * x[135];
	v[1] = sporttournament36_pd[424] * x[136];
	v[0] += v[1];
	sporttournament36_pd[425] = 2. * x[135];
	v[1] = sporttournament36_pd[425] * x[388];
	v[0] += v[1];
	sporttournament36_pd[426] = 2. * x[136];
	v[1] = sporttournament36_pd[426] * x[196];
	v[0] += v[1];
	sporttournament36_pd[427] = 2. * x[136];
	v[1] = sporttournament36_pd[427] * x[414];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[428] = 2. * x[137];
	v[2] = sporttournament36_pd[428] * x[138];
	v[0] += v[2];
	sporttournament36_pd[429] = 2. * x[137];
	v[2] = sporttournament36_pd[429] * x[259];
	v[0] += v[2];
	sporttournament36_pd[430] = 2. * x[137];
	v[2] = sporttournament36_pd[430] * x[557];
	v[0] += v[2];
	sporttournament36_pd[431] = 2. * x[138];
	v[2] = sporttournament36_pd[431] * x[196];
	v[0] += v[2];
	sporttournament36_pd[432] = 2. * x[138];
	v[2] = sporttournament36_pd[432] * x[229];
	v[0] += v[2];
	sporttournament36_pd[433] = 2. * x[139];
	v[2] = sporttournament36_pd[433] * x[140];
	v[0] += v[2];
	sporttournament36_pd[434] = 2. * x[139];
	v[2] = sporttournament36_pd[434] * x[382];
	v[0] += v[2];
	sporttournament36_pd[435] = 2. * x[140];
	v[2] = sporttournament36_pd[435] * x[229];
	v[0] += v[2];
	sporttournament36_pd[436] = 2. * x[141];
	v[2] = sporttournament36_pd[436] * x[457];
	v[0] += v[2];
	sporttournament36_pd[437] = 2. * x[141];
	v[2] = sporttournament36_pd[437] * x[525];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[438] = 2. * x[141];
	v[1] = sporttournament36_pd[438] * x[607];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[439] = 2. * x[142];
	v[2] = sporttournament36_pd[439] * x[143];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[440] = 2. * x[142];
	v[1] = sporttournament36_pd[440] * x[144];
	v[0] += v[1];
	sporttournament36_pd[441] = 2. * x[142];
	v[1] = sporttournament36_pd[441] * x[389];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[442] = 2. * x[142];
	v[2] = sporttournament36_pd[442] * x[484];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[443] = 2. * x[143];
	v[1] = sporttournament36_pd[443] * x[343];
	v[0] += v[1];
	sporttournament36_pd[444] = 2. * x[143];
	v[1] = sporttournament36_pd[444] * x[545];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[445] = 2. * x[143];
	v[2] = sporttournament36_pd[445] * x[581];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[446] = 2. * x[144];
	v[1] = sporttournament36_pd[446] * x[343];
	v[0] += v[1];
	sporttournament36_pd[447] = 2. * x[144];
	v[1] = sporttournament36_pd[447] * x[394];
	v[0] += v[1];
	sporttournament36_pd[448] = 2. * x[144];
	v[1] = sporttournament36_pd[448] * x[571];
	v[0] += v[1];
	sporttournament36_pd[449] = 2. * x[145];
	v[1] = sporttournament36_pd[449] * x[146];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[450] = 2. * x[145];
	v[2] = sporttournament36_pd[450] * x[458];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[451] = 2. * x[145];
	v[1] = sporttournament36_pd[451] * x[459];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[452] = 2. * x[145];
	v[2] = sporttournament36_pd[452] * x[536];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[453] = 2. * x[146];
	v[1] = sporttournament36_pd[453] * x[148];
	v[0] += v[1];
	sporttournament36_pd[454] = 2. * x[146];
	v[1] = sporttournament36_pd[454] * x[348];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[455] = 2. * x[146];
	v[2] = sporttournament36_pd[455] * x[608];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[456] = 2. * x[147];
	v[1] = sporttournament36_pd[456] * x[306];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[457] = 2. * x[147];
	v[2] = sporttournament36_pd[457] * x[459];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[458] = 2. * x[147];
	v[1] = sporttournament36_pd[458] * x[460];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[459] = 2. * x[147];
	v[2] = sporttournament36_pd[459] * x[583];
	v[0] += v[2];
	sporttournament36_pd[460] = 2. * x[148];
	v[2] = sporttournament36_pd[460] * x[306];
	v[0] += v[2];
	sporttournament36_pd[461] = 2. * x[148];
	v[2] = sporttournament36_pd[461] * x[405];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[462] = 2. * x[148];
	v[1] = sporttournament36_pd[462] * x[472];
	v[0] += v[1];
	sporttournament36_pd[463] = 2. * x[149];
	v[1] = sporttournament36_pd[463] * x[151];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[464] = 2. * x[149];
	v[2] = sporttournament36_pd[464] * x[395];
	v[0] += v[2];
	sporttournament36_pd[465] = 2. * x[149];
	v[2] = sporttournament36_pd[465] * x[437];
	v[0] += v[2];
	sporttournament36_pd[466] = 2. * x[150];
	v[2] = sporttournament36_pd[466] * x[505];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[467] = 2. * x[150];
	v[1] = sporttournament36_pd[467] * x[506];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[468] = 2. * x[150];
	v[2] = sporttournament36_pd[468] * x[603];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[469] = 2. * x[150];
	v[1] = sporttournament36_pd[469] * x[604];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[470] = 2. * x[151];
	v[2] = sporttournament36_pd[470] * x[496];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[471] = 2. * x[151];
	v[1] = sporttournament36_pd[471] * x[604];
	v[0] += v[1];
	sporttournament36_pd[472] = 2. * x[151];
	v[1] = sporttournament36_pd[472] * x[609];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[473] = 2. * x[152];
	v[2] = sporttournament36_pd[473] * x[153];
	v[0] += v[2];
	sporttournament36_pd[474] = 2. * x[152];
	v[2] = sporttournament36_pd[474] * x[351];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[475] = 2. * x[152];
	v[1] = sporttournament36_pd[475] * x[416];
	v[0] += v[1];
	sporttournament36_pd[476] = 2. * x[152];
	v[1] = sporttournament36_pd[476] * x[438];
	v[0] += v[1];
	sporttournament36_pd[477] = 2. * x[153];
	v[1] = sporttournament36_pd[477] * x[242];
	v[0] += v[1];
	sporttournament36_pd[478] = 2. * x[153];
	v[1] = sporttournament36_pd[478] * x[604];
	v[0] += v[1];
	sporttournament36_pd[479] = 2. * x[154];
	v[1] = sporttournament36_pd[479] * x[155];
	v[0] += v[1];
	sporttournament36_pd[480] = 2. * x[155];
	v[1] = sporttournament36_pd[480] * x[242];
	v[0] += v[1];
	sporttournament36_pd[481] = 2. * x[155];
	v[1] = sporttournament36_pd[481] * x[357];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[482] = 2. * x[155];
	v[2] = sporttournament36_pd[482] * x[508];
	v[0] += v[2];
	sporttournament36_pd[483] = 2. * x[156];
	v[2] = sporttournament36_pd[483] * x[157];
	v[0] += v[2];
	sporttournament36_pd[484] = 2. * x[156];
	v[2] = sporttournament36_pd[484] * x[182];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[485] = 2. * x[156];
	v[1] = sporttournament36_pd[485] * x[277];
	v[0] += v[1];
	sporttournament36_pd[486] = 2. * x[157];
	v[1] = sporttournament36_pd[486] * x[159];
	v[0] += v[1];
	sporttournament36_pd[487] = 2. * x[157];
	v[1] = sporttournament36_pd[487] * x[508];
	v[0] += v[1];
	sporttournament36_pd[488] = 2. * x[158];
	v[1] = sporttournament36_pd[488] * x[246];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[489] = 2. * x[158];
	v[2] = sporttournament36_pd[489] * x[430];
	v[0] += v[2];
	sporttournament36_pd[490] = 2. * x[158];
	v[2] = sporttournament36_pd[490] * x[498];
	v[0] += v[2];
	sporttournament36_pd[491] = 2. * x[158];
	v[2] = sporttournament36_pd[491] * x[530];
	v[0] += v[2];
	sporttournament36_pd[492] = 2. * x[159];
	v[2] = sporttournament36_pd[492] * x[244];
	v[0] += v[2];
	sporttournament36_pd[493] = 2. * x[159];
	v[2] = sporttournament36_pd[493] * x[246];
	v[0] += v[2];
	sporttournament36_pd[494] = 2. * x[159];
	v[2] = sporttournament36_pd[494] * x[362];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[495] = 2. * x[160];
	v[1] = sporttournament36_pd[495] * x[452];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[496] = 2. * x[160];
	v[2] = sporttournament36_pd[496] * x[521];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[497] = 2. * x[160];
	v[1] = sporttournament36_pd[497] * x[522];
	v[0] += v[1];
	sporttournament36_pd[498] = 2. * x[160];
	v[1] = sporttournament36_pd[498] * x[610];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[499] = 2. * x[161];
	v[2] = sporttournament36_pd[499] * x[162];
	v[0] += v[2];
	sporttournament36_pd[500] = 2. * x[161];
	v[2] = sporttournament36_pd[500] * x[327];
	v[0] += v[2];
	sporttournament36_pd[501] = 2. * x[162];
	v[2] = sporttournament36_pd[501] * x[220];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[502] = 2. * x[162];
	v[1] = sporttournament36_pd[502] * x[222];
	v[0] += v[1];
	sporttournament36_pd[503] = 2. * x[162];
	v[1] = sporttournament36_pd[503] * x[329];
	v[0] += v[1];
	sporttournament36_pd[504] = 2. * x[163];
	v[1] = sporttournament36_pd[504] * x[164];
	v[0] += v[1];
	sporttournament36_pd[505] = 2. * x[163];
	v[1] = sporttournament36_pd[505] * x[501];
	v[0] += v[1];
	sporttournament36_pd[506] = 2. * x[164];
	v[1] = sporttournament36_pd[506] * x[289];
	v[0] += v[1];
	sporttournament36_pd[507] = 2. * x[164];
	v[1] = sporttournament36_pd[507] * x[329];
	v[0] += v[1];
	sporttournament36_pd[508] = 2. * x[164];
	v[1] = sporttournament36_pd[508] * x[601];
	v[0] += v[1];
	sporttournament36_pd[509] = 2. * x[165];
	v[1] = sporttournament36_pd[509] * x[166];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[510] = 2. * x[165];
	v[2] = sporttournament36_pd[510] * x[288];
	v[0] += v[2];
	sporttournament36_pd[511] = 2. * x[165];
	v[2] = sporttournament36_pd[511] * x[388];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[512] = 2. * x[165];
	v[1] = sporttournament36_pd[512] * x[523];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[513] = 2. * x[166];
	v[2] = sporttournament36_pd[513] * x[228];
	v[0] += v[2];
	sporttournament36_pd[514] = 2. * x[166];
	v[2] = sporttournament36_pd[514] * x[601];
	v[0] += v[2];
	sporttournament36_pd[515] = 2. * x[167];
	v[2] = sporttournament36_pd[515] * x[169];
	v[0] += v[2];
	sporttournament36_pd[516] = 2. * x[167];
	v[2] = sporttournament36_pd[516] * x[290];
	v[0] += v[2];
	sporttournament36_pd[517] = 2. * x[167];
	v[2] = sporttournament36_pd[517] * x[568];
	v[0] += v[2];
	sporttournament36_pd[518] = 2. * x[168];
	v[2] = sporttournament36_pd[518] * x[198];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[519] = 2. * x[168];
	v[1] = sporttournament36_pd[519] * x[261];
	v[0] += v[1];
	sporttournament36_pd[520] = 2. * x[168];
	v[1] = sporttournament36_pd[520] * x[380];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[521] = 2. * x[168];
	v[2] = sporttournament36_pd[521] * x[387];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[522] = 2. * x[169];
	v[1] = sporttournament36_pd[522] * x[228];
	v[0] += v[1];
	sporttournament36_pd[523] = 2. * x[169];
	v[1] = sporttournament36_pd[523] * x[261];
	v[0] += v[1];
	sporttournament36_pd[524] = 2. * x[170];
	v[1] = sporttournament36_pd[524] * x[171];
	v[0] += v[1];
	sporttournament36_pd[525] = 2. * x[170];
	v[1] = sporttournament36_pd[525] * x[402];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[526] = 2. * x[171];
	v[2] = sporttournament36_pd[526] * x[261];
	v[0] += v[2];
	sporttournament36_pd[527] = 2. * x[172];
	v[2] = sporttournament36_pd[527] * x[339];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[528] = 2. * x[172];
	v[1] = sporttournament36_pd[528] * x[444];
	v[0] += v[1];
	sporttournament36_pd[529] = 2. * x[172];
	v[1] = sporttournament36_pd[529] * x[514];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[530] = 2. * x[172];
	v[2] = sporttournament36_pd[530] * x[611];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[531] = 2. * x[173];
	v[1] = sporttournament36_pd[531] * x[176];
	v[0] += v[1];
	sporttournament36_pd[532] = 2. * x[173];
	v[1] = sporttournament36_pd[532] * x[552];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[533] = 2. * x[173];
	v[2] = sporttournament36_pd[533] * x[572];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[534] = 2. * x[174];
	v[1] = sporttournament36_pd[534] * x[176];
	v[0] += v[1];
	sporttournament36_pd[535] = 2. * x[174];
	v[1] = sporttournament36_pd[535] * x[397];
	v[0] += v[1];
	sporttournament36_pd[536] = 2. * x[174];
	v[1] = sporttournament36_pd[536] * x[495];
	v[0] += v[1];
	sporttournament36_pd[537] = 2. * x[174];
	v[1] = sporttournament36_pd[537] * x[562];
	v[0] += v[1];
	sporttournament36_pd[538] = 2. * x[175];
	v[1] = sporttournament36_pd[538] * x[232];
	v[0] += v[1];
	sporttournament36_pd[539] = 2. * x[175];
	v[1] = sporttournament36_pd[539] * x[536];
	v[0] += v[1];
	sporttournament36_pd[540] = 2. * x[175];
	v[1] = sporttournament36_pd[540] * x[586];
	v[0] += v[1];
	sporttournament36_pd[541] = 2. * x[176];
	v[1] = sporttournament36_pd[541] * x[471];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[542] = 2. * x[176];
	v[2] = sporttournament36_pd[542] * x[536];
	v[0] += v[2];
	sporttournament36_pd[543] = 2. * x[177];
	v[2] = sporttournament36_pd[543] * x[269];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[544] = 2. * x[177];
	v[1] = sporttournament36_pd[544] * x[347];
	v[0] += v[1];
	sporttournament36_pd[545] = 2. * x[177];
	v[1] = sporttournament36_pd[545] * x[472];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[546] = 2. * x[177];
	v[2] = sporttournament36_pd[546] * x[583];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[547] = 2. * x[178];
	v[1] = sporttournament36_pd[547] * x[269];
	v[0] += v[1];
	sporttournament36_pd[548] = 2. * x[178];
	v[1] = sporttournament36_pd[548] * x[415];
	v[0] += v[1];
	sporttournament36_pd[549] = 2. * x[178];
	v[1] = sporttournament36_pd[549] * x[485];
	v[0] += v[1];
	sporttournament36_pd[550] = 2. * x[178];
	v[1] = sporttournament36_pd[550] * x[537];
	v[0] += v[1];
	sporttournament36_pd[551] = 2. * x[179];
	v[1] = sporttournament36_pd[551] * x[353];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[552] = 2. * x[179];
	v[2] = sporttournament36_pd[552] * x[517];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[553] = 2. * x[179];
	v[1] = sporttournament36_pd[553] * x[518];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[554] = 2. * x[180];
	v[2] = sporttournament36_pd[554] * x[461];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[555] = 2. * x[180];
	v[1] = sporttournament36_pd[555] * x[614];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[556] = 2. * x[181];
	v[2] = sporttournament36_pd[556] * x[182];
	v[0] += v[2];
	sporttournament36_pd[557] = 2. * x[181];
	v[2] = sporttournament36_pd[557] * x[593];
	v[0] += v[2];
	sporttournament36_pd[558] = 2. * x[182];
	v[2] = sporttournament36_pd[558] * x[497];
	v[0] += v[2];
	sporttournament36_pd[559] = 2. * x[182];
	v[2] = sporttournament36_pd[559] * x[614];
	v[0] += v[2];
	sporttournament36_pd[560] = 2. * x[183];
	v[2] = sporttournament36_pd[560] * x[429];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[561] = 2. * x[183];
	v[1] = sporttournament36_pd[561] * x[489];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[562] = 2. * x[183];
	v[2] = sporttournament36_pd[562] * x[605];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[563] = 2. * x[184];
	v[1] = sporttournament36_pd[563] * x[215];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[564] = 2. * x[184];
	v[2] = sporttournament36_pd[564] * x[420];
	v[0] += v[2];
	sporttournament36_pd[565] = 2. * x[184];
	v[2] = sporttournament36_pd[565] * x[489];
	v[0] += v[2];
	sporttournament36_pd[566] = 2. * x[185];
	v[2] = sporttournament36_pd[566] * x[215];
	v[0] += v[2];
	sporttournament36_pd[567] = 2. * x[185];
	v[2] = sporttournament36_pd[567] * x[278];
	v[0] += v[2];
	sporttournament36_pd[568] = 2. * x[185];
	v[2] = sporttournament36_pd[568] * x[566];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[569] = 2. * x[185];
	v[1] = sporttournament36_pd[569] * x[605];
	v[0] += v[1];
	sporttournament36_pd[570] = 2. * x[186];
	v[1] = sporttournament36_pd[570] * x[187];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[571] = 2. * x[186];
	v[2] = sporttournament36_pd[571] * x[362];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[572] = 2. * x[186];
	v[1] = sporttournament36_pd[572] * x[411];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[573] = 2. * x[186];
	v[2] = sporttournament36_pd[573] * x[440];
	v[0] += v[2];
	sporttournament36_pd[574] = 2. * x[187];
	v[2] = sporttournament36_pd[574] * x[188];
	v[0] += v[2];
	sporttournament36_pd[575] = 2. * x[187];
	v[2] = sporttournament36_pd[575] * x[531];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[576] = 2. * x[187];
	v[1] = sporttournament36_pd[576] * x[616];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[577] = 2. * x[188];
	v[2] = sporttournament36_pd[577] * x[218];
	v[0] += v[2];
	sporttournament36_pd[578] = 2. * x[188];
	v[2] = sporttournament36_pd[578] * x[432];
	v[0] += v[2];
	sporttournament36_pd[579] = 2. * x[189];
	v[2] = sporttournament36_pd[579] * x[191];
	v[0] += v[2];
	sporttournament36_pd[580] = 2. * x[189];
	v[2] = sporttournament36_pd[580] * x[533];
	v[0] += v[2];
	sporttournament36_pd[581] = 2. * x[190];
	v[2] = sporttournament36_pd[581] * x[191];
	v[0] += v[2];
	sporttournament36_pd[582] = 2. * x[190];
	v[2] = sporttournament36_pd[582] * x[218];
	v[0] += v[2];
	sporttournament36_pd[583] = 2. * x[190];
	v[2] = sporttournament36_pd[583] * x[327];
	v[0] += v[2];
	sporttournament36_pd[584] = 2. * x[190];
	v[2] = sporttournament36_pd[584] * x[479];
	v[0] += v[2];
	sporttournament36_pd[585] = 2. * x[191];
	v[2] = sporttournament36_pd[585] * x[254];
	v[0] += v[2];
	sporttournament36_pd[586] = 2. * x[191];
	v[2] = sporttournament36_pd[586] * x[374];
	v[0] += v[2];
	sporttournament36_pd[587] = 2. * x[192];
	v[2] = sporttournament36_pd[587] * x[193];
	v[0] += v[2];
	sporttournament36_pd[588] = 2. * x[192];
	v[2] = sporttournament36_pd[588] * x[493];
	v[0] += v[2];
	sporttournament36_pd[589] = 2. * x[193];
	v[2] = sporttournament36_pd[589] * x[257];
	v[0] += v[2];
	sporttournament36_pd[590] = 2. * x[193];
	v[2] = sporttournament36_pd[590] * x[374];
	v[0] += v[2];
	sporttournament36_pd[591] = 2. * x[193];
	v[2] = sporttournament36_pd[591] * x[597];
	v[0] += v[2];
	sporttournament36_pd[592] = 2. * x[194];
	v[2] = sporttournament36_pd[592] * x[195];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[593] = 2. * x[194];
	v[1] = sporttournament36_pd[593] * x[256];
	v[0] += v[1];
	sporttournament36_pd[594] = 2. * x[194];
	v[1] = sporttournament36_pd[594] * x[413];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[595] = 2. * x[194];
	v[2] = sporttournament36_pd[595] * x[513];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[596] = 2. * x[195];
	v[1] = sporttournament36_pd[596] * x[260];
	v[0] += v[1];
	sporttournament36_pd[597] = 2. * x[195];
	v[1] = sporttournament36_pd[597] * x[597];
	v[0] += v[1];
	sporttournament36_pd[598] = 2. * x[196];
	v[1] = sporttournament36_pd[598] * x[197];
	v[0] += v[1];
	sporttournament36_pd[599] = 2. * x[196];
	v[1] = sporttournament36_pd[599] * x[333];
	v[0] += v[1];
	sporttournament36_pd[600] = 2. * x[197];
	v[1] = sporttournament36_pd[600] * x[260];
	v[0] += v[1];
	sporttournament36_pd[601] = 2. * x[197];
	v[1] = sporttournament36_pd[601] * x[294];
	v[0] += v[1];
	sporttournament36_pd[602] = 2. * x[198];
	v[1] = sporttournament36_pd[602] * x[199];
	v[0] += v[1];
	sporttournament36_pd[603] = 2. * x[199];
	v[1] = sporttournament36_pd[603] * x[294];
	v[0] += v[1];
	sporttournament36_pd[604] = 2. * x[200];
	v[1] = sporttournament36_pd[604] * x[578];
	v[0] += v[1];
	sporttournament36_pd[605] = 2. * x[201];
	v[1] = sporttournament36_pd[605] * x[434];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[606] = 2. * x[201];
	v[2] = sporttournament36_pd[606] * x[441];
	v[0] += v[2];
	sporttournament36_pd[607] = 2. * x[201];
	v[2] = sporttournament36_pd[607] * x[552];
	v[0] += v[2];
	sporttournament36_pd[608] = 2. * x[201];
	v[2] = sporttournament36_pd[608] * x[578];
	v[0] += v[2];
	sporttournament36_pd[609] = 2. * x[202];
	v[2] = sporttournament36_pd[609] * x[204];
	v[0] += v[2];
	sporttournament36_pd[610] = 2. * x[202];
	v[2] = sporttournament36_pd[610] * x[404];
	v[0] += v[2];
	sporttournament36_pd[611] = 2. * x[202];
	v[2] = sporttournament36_pd[611] * x[503];
	v[0] += v[2];
	sporttournament36_pd[612] = 2. * x[202];
	v[2] = sporttournament36_pd[612] * x[552];
	v[0] += v[2];
	sporttournament36_pd[613] = 2. * x[203];
	v[2] = sporttournament36_pd[613] * x[342];
	v[0] += v[2];
	sporttournament36_pd[614] = 2. * x[203];
	v[2] = sporttournament36_pd[614] * x[526];
	v[0] += v[2];
	sporttournament36_pd[615] = 2. * x[203];
	v[2] = sporttournament36_pd[615] * x[582];
	v[0] += v[2];
	sporttournament36_pd[616] = 2. * x[204];
	v[2] = sporttournament36_pd[616] * x[458];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[617] = 2. * x[204];
	v[1] = sporttournament36_pd[617] * x[526];
	v[0] += v[1];
	sporttournament36_pd[618] = 2. * x[204];
	v[1] = sporttournament36_pd[618] * x[561];
	v[0] += v[1];
	sporttournament36_pd[619] = 2. * x[205];
	v[1] = sporttournament36_pd[619] * x[238];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[620] = 2. * x[205];
	v[2] = sporttournament36_pd[620] * x[303];
	v[0] += v[2];
	sporttournament36_pd[621] = 2. * x[205];
	v[2] = sporttournament36_pd[621] * x[485];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[622] = 2. * x[205];
	v[1] = sporttournament36_pd[622] * x[574];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[623] = 2. * x[206];
	v[2] = sporttournament36_pd[623] * x[238];
	v[0] += v[2];
	sporttournament36_pd[624] = 2. * x[206];
	v[2] = sporttournament36_pd[624] * x[425];
	v[0] += v[2];
	sporttournament36_pd[625] = 2. * x[206];
	v[2] = sporttournament36_pd[625] * x[548];
	v[0] += v[2];
	sporttournament36_pd[626] = 2. * x[207];
	v[2] = sporttournament36_pd[626] * x[310];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[627] = 2. * x[207];
	v[1] = sporttournament36_pd[627] * x[527];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[628] = 2. * x[207];
	v[2] = sporttournament36_pd[628] * x[528];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[629] = 2. * x[208];
	v[1] = sporttournament36_pd[629] * x[473];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[630] = 2. * x[208];
	v[2] = sporttournament36_pd[630] * x[539];
	v[0] += v[2];
	sporttournament36_pd[631] = 2. * x[208];
	v[2] = sporttournament36_pd[631] * x[619];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[632] = 2. * x[209];
	v[1] = sporttournament36_pd[632] * x[211];
	v[0] += v[1];
	sporttournament36_pd[633] = 2. * x[209];
	v[1] = sporttournament36_pd[633] * x[438];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[634] = 2. * x[210];
	v[2] = sporttournament36_pd[634] * x[400];
	v[0] += v[2];
	sporttournament36_pd[635] = 2. * x[210];
	v[2] = sporttournament36_pd[635] * x[488];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[636] = 2. * x[211];
	v[1] = sporttournament36_pd[636] * x[357];
	v[0] += v[1];
	sporttournament36_pd[637] = 2. * x[211];
	v[1] = sporttournament36_pd[637] * x[488];
	v[0] += v[1];
	sporttournament36_pd[638] = 2. * x[211];
	v[1] = sporttournament36_pd[638] * x[619];
	v[0] += v[1];
	sporttournament36_pd[639] = 2. * x[212];
	v[1] = sporttournament36_pd[639] * x[214];
	v[0] += v[1];
	sporttournament36_pd[640] = 2. * x[212];
	v[1] = sporttournament36_pd[640] * x[488];
	v[0] += v[1];
	sporttournament36_pd[641] = 2. * x[212];
	v[1] = sporttournament36_pd[641] * x[529];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[642] = 2. * x[212];
	v[2] = sporttournament36_pd[642] * x[599];
	v[0] += v[2];
	sporttournament36_pd[643] = 2. * x[213];
	v[2] = sporttournament36_pd[643] * x[411];
	v[0] += v[2];
	sporttournament36_pd[644] = 2. * x[213];
	v[2] = sporttournament36_pd[644] * x[476];
	v[0] += v[2];
	sporttournament36_pd[645] = 2. * x[213];
	v[2] = sporttournament36_pd[645] * x[509];
	v[0] += v[2];
	sporttournament36_pd[646] = 2. * x[213];
	v[2] = sporttournament36_pd[646] * x[510];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[647] = 2. * x[214];
	v[1] = sporttournament36_pd[647] * x[316];
	v[0] += v[1];
	sporttournament36_pd[648] = 2. * x[214];
	v[1] = sporttournament36_pd[648] * x[510];
	v[0] += v[1];
	sporttournament36_pd[649] = 2. * x[214];
	v[1] = sporttournament36_pd[649] * x[576];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[650] = 2. * x[215];
	v[2] = sporttournament36_pd[650] * x[320];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[651] = 2. * x[215];
	v[1] = sporttournament36_pd[651] * x[616];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[652] = 2. * x[216];
	v[2] = sporttournament36_pd[652] * x[318];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[653] = 2. * x[216];
	v[1] = sporttournament36_pd[653] * x[420];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[654] = 2. * x[216];
	v[2] = sporttournament36_pd[654] * x[432];
	v[0] += v[2];
	sporttournament36_pd[655] = 2. * x[216];
	v[2] = sporttournament36_pd[655] * x[550];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[656] = 2. * x[217];
	v[1] = sporttournament36_pd[656] * x[250];
	v[0] += v[1];
	sporttournament36_pd[657] = 2. * x[217];
	v[1] = sporttournament36_pd[657] * x[440];
	v[0] += v[1];
	sporttournament36_pd[658] = 2. * x[217];
	v[1] = sporttournament36_pd[658] * x[550];
	v[0] += v[1];
	sporttournament36_pd[659] = 2. * x[218];
	v[1] = sporttournament36_pd[659] * x[220];
	v[0] += v[1];
	sporttournament36_pd[660] = 2. * x[218];
	v[1] = sporttournament36_pd[660] * x[522];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[661] = 2. * x[219];
	v[2] = sporttournament36_pd[661] * x[221];
	v[0] += v[2];
	sporttournament36_pd[662] = 2. * x[220];
	v[2] = sporttournament36_pd[662] * x[221];
	v[0] += v[2];
	sporttournament36_pd[663] = 2. * x[220];
	v[2] = sporttournament36_pd[663] * x[250];
	v[0] += v[2];
	sporttournament36_pd[664] = 2. * x[221];
	v[2] = sporttournament36_pd[664] * x[223];
	v[0] += v[2];
	sporttournament36_pd[665] = 2. * x[221];
	v[2] = sporttournament36_pd[665] * x[287];
	v[0] += v[2];
	sporttournament36_pd[666] = 2. * x[222];
	v[2] = sporttournament36_pd[666] * x[224];
	v[0] += v[2];
	sporttournament36_pd[667] = 2. * x[222];
	v[2] = sporttournament36_pd[667] * x[480];
	v[0] += v[2];
	sporttournament36_pd[668] = 2. * x[223];
	v[2] = sporttournament36_pd[668] * x[224];
	v[0] += v[2];
	sporttournament36_pd[669] = 2. * x[223];
	v[2] = sporttournament36_pd[669] * x[328];
	v[0] += v[2];
	sporttournament36_pd[670] = 2. * x[223];
	v[2] = sporttournament36_pd[670] * x[386];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[671] = 2. * x[224];
	v[1] = sporttournament36_pd[671] * x[225];
	v[0] += v[1];
	sporttournament36_pd[672] = 2. * x[224];
	v[1] = sporttournament36_pd[672] * x[594];
	v[0] += v[1];
	sporttournament36_pd[673] = 2. * x[225];
	v[1] = sporttournament36_pd[673] * x[227];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[674] = 2. * x[225];
	v[2] = sporttournament36_pd[674] * x[258];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[675] = 2. * x[225];
	v[1] = sporttournament36_pd[675] * x[501];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[676] = 2. * x[226];
	v[2] = sporttournament36_pd[676] * x[257];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[677] = 2. * x[226];
	v[1] = sporttournament36_pd[677] * x[291];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[678] = 2. * x[226];
	v[2] = sporttournament36_pd[678] * x[387];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[679] = 2. * x[226];
	v[1] = sporttournament36_pd[679] * x[433];
	v[0] += v[1];
	sporttournament36_pd[680] = 2. * x[227];
	v[1] = sporttournament36_pd[680] * x[291];
	v[0] += v[1];
	sporttournament36_pd[681] = 2. * x[227];
	v[1] = sporttournament36_pd[681] * x[594];
	v[0] += v[1];
	sporttournament36_pd[682] = 2. * x[228];
	v[1] = sporttournament36_pd[682] * x[378];
	v[0] += v[1];
	sporttournament36_pd[683] = 2. * x[228];
	v[1] = sporttournament36_pd[683] * x[381];
	v[0] += v[1];
	sporttournament36_pd[684] = 2. * x[229];
	v[1] = sporttournament36_pd[684] * x[292];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[685] = 2. * x[229];
	v[2] = sporttournament36_pd[685] * x[621];
	v[0] += v[2];
	sporttournament36_pd[686] = 2. * x[230];
	v[2] = sporttournament36_pd[686] * x[423];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[687] = 2. * x[230];
	v[1] = sporttournament36_pd[687] * x[453];
	v[0] += v[1];
	sporttournament36_pd[688] = 2. * x[230];
	v[1] = sporttournament36_pd[688] * x[545];
	v[0] += v[1];
	sporttournament36_pd[689] = 2. * x[230];
	v[1] = sporttournament36_pd[689] * x[569];
	v[0] += v[1];
	sporttournament36_pd[690] = 2. * x[231];
	v[1] = sporttournament36_pd[690] * x[233];
	v[0] += v[1];
	sporttournament36_pd[691] = 2. * x[231];
	v[1] = sporttournament36_pd[691] * x[515];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[692] = 2. * x[231];
	v[2] = sporttournament36_pd[692] * x[573];
	v[0] += v[2];
	sporttournament36_pd[693] = 2. * x[232];
	v[2] = sporttournament36_pd[693] * x[234];
	v[0] += v[2];
	sporttournament36_pd[694] = 2. * x[233];
	v[2] = sporttournament36_pd[694] * x[234];
	v[0] += v[2];
	sporttournament36_pd[695] = 2. * x[233];
	v[2] = sporttournament36_pd[695] * x[446];
	v[0] += v[2];
	sporttournament36_pd[696] = 2. * x[233];
	v[2] = sporttournament36_pd[696] * x[516];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[697] = 2. * x[234];
	v[1] = sporttournament36_pd[697] * x[235];
	v[0] += v[1];
	sporttournament36_pd[698] = 2. * x[234];
	v[1] = sporttournament36_pd[698] * x[405];
	v[0] += v[1];
	sporttournament36_pd[699] = 2. * x[235];
	v[1] = sporttournament36_pd[699] * x[237];
	v[0] += v[1];
	sporttournament36_pd[700] = 2. * x[235];
	v[1] = sporttournament36_pd[700] * x[267];
	v[0] += v[1];
	sporttournament36_pd[701] = 2. * x[235];
	v[1] = sporttournament36_pd[701] * x[504];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[702] = 2. * x[236];
	v[2] = sporttournament36_pd[702] * x[266];
	v[0] += v[2];
	sporttournament36_pd[703] = 2. * x[236];
	v[2] = sporttournament36_pd[703] * x[564];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[704] = 2. * x[236];
	v[1] = sporttournament36_pd[704] * x[565];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[705] = 2. * x[237];
	v[2] = sporttournament36_pd[705] * x[436];
	v[0] += v[2];
	sporttournament36_pd[706] = 2. * x[237];
	v[2] = sporttournament36_pd[706] * x[565];
	v[0] += v[2];
	sporttournament36_pd[707] = 2. * x[238];
	v[2] = sporttournament36_pd[707] * x[407];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[708] = 2. * x[238];
	v[1] = sporttournament36_pd[708] * x[618];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[709] = 2. * x[239];
	v[2] = sporttournament36_pd[709] * x[270];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[710] = 2. * x[239];
	v[1] = sporttournament36_pd[710] * x[273];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[711] = 2. * x[239];
	v[2] = sporttournament36_pd[711] * x[539];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[712] = 2. * x[240];
	v[1] = sporttournament36_pd[712] * x[273];
	v[0] += v[1];
	sporttournament36_pd[713] = 2. * x[240];
	v[1] = sporttournament36_pd[713] * x[461];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[714] = 2. * x[240];
	v[2] = sporttournament36_pd[714] * x[527];
	v[0] += v[2];
	sporttournament36_pd[715] = 2. * x[240];
	v[2] = sporttournament36_pd[715] * x[618];
	v[0] += v[2];
	sporttournament36_pd[716] = 2. * x[241];
	v[2] = sporttournament36_pd[716] * x[486];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[717] = 2. * x[241];
	v[1] = sporttournament36_pd[717] * x[528];
	v[0] += v[1];
	sporttournament36_pd[718] = 2. * x[241];
	v[1] = sporttournament36_pd[718] * x[624];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[719] = 2. * x[242];
	v[2] = sporttournament36_pd[719] * x[243];
	v[0] += v[2];
	sporttournament36_pd[720] = 2. * x[242];
	v[2] = sporttournament36_pd[720] * x[449];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[721] = 2. * x[243];
	v[1] = sporttournament36_pd[721] * x[314];
	v[0] += v[1];
	sporttournament36_pd[722] = 2. * x[243];
	v[1] = sporttournament36_pd[722] * x[475];
	v[0] += v[1];
	sporttournament36_pd[723] = 2. * x[243];
	v[1] = sporttournament36_pd[723] * x[624];
	v[0] += v[1];
	sporttournament36_pd[724] = 2. * x[244];
	v[1] = sporttournament36_pd[724] * x[245];
	v[0] += v[1];
	sporttournament36_pd[725] = 2. * x[244];
	v[1] = sporttournament36_pd[725] * x[475];
	v[0] += v[1];
	sporttournament36_pd[726] = 2. * x[244];
	v[1] = sporttournament36_pd[726] * x[540];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[727] = 2. * x[245];
	v[2] = sporttournament36_pd[727] * x[359];
	v[0] += v[2];
	sporttournament36_pd[728] = 2. * x[245];
	v[2] = sporttournament36_pd[728] * x[499];
	v[0] += v[2];
	sporttournament36_pd[729] = 2. * x[246];
	v[2] = sporttournament36_pd[729] * x[281];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[730] = 2. * x[246];
	v[1] = sporttournament36_pd[730] * x[610];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[731] = 2. * x[247];
	v[2] = sporttournament36_pd[731] * x[248];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[732] = 2. * x[247];
	v[1] = sporttournament36_pd[732] * x[280];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[733] = 2. * x[247];
	v[2] = sporttournament36_pd[733] * x[430];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[734] = 2. * x[247];
	v[1] = sporttournament36_pd[734] * x[432];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[735] = 2. * x[248];
	v[2] = sporttournament36_pd[735] * x[249];
	v[0] += v[2];
	sporttournament36_pd[736] = 2. * x[248];
	v[2] = sporttournament36_pd[736] * x[542];
	v[0] += v[2];
	sporttournament36_pd[737] = 2. * x[248];
	v[2] = sporttournament36_pd[737] * x[610];
	v[0] += v[2];
	sporttournament36_pd[738] = 2. * x[249];
	v[2] = sporttournament36_pd[738] * x[284];
	v[0] += v[2];
	sporttournament36_pd[739] = 2. * x[249];
	v[2] = sporttournament36_pd[739] * x[451];
	v[0] += v[2];
	sporttournament36_pd[740] = 2. * x[250];
	v[2] = sporttournament36_pd[740] * x[252];
	v[0] += v[2];
	sporttournament36_pd[741] = 2. * x[250];
	v[2] = sporttournament36_pd[741] * x[512];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[742] = 2. * x[251];
	v[1] = sporttournament36_pd[742] * x[253];
	v[0] += v[1];
	sporttournament36_pd[743] = 2. * x[252];
	v[1] = sporttournament36_pd[743] * x[253];
	v[0] += v[1];
	sporttournament36_pd[744] = 2. * x[252];
	v[1] = sporttournament36_pd[744] * x[284];
	v[0] += v[1];
	sporttournament36_pd[745] = 2. * x[253];
	v[1] = sporttournament36_pd[745] * x[255];
	v[0] += v[1];
	sporttournament36_pd[746] = 2. * x[253];
	v[1] = sporttournament36_pd[746] * x[329];
	v[0] += v[1];
	sporttournament36_pd[747] = 2. * x[254];
	v[1] = sporttournament36_pd[747] * x[256];
	v[0] += v[1];
	sporttournament36_pd[748] = 2. * x[254];
	v[1] = sporttournament36_pd[748] * x[466];
	v[0] += v[1];
	sporttournament36_pd[749] = 2. * x[255];
	v[1] = sporttournament36_pd[749] * x[256];
	v[0] += v[1];
	sporttournament36_pd[750] = 2. * x[255];
	v[1] = sporttournament36_pd[750] * x[373];
	v[0] += v[1];
	sporttournament36_pd[751] = 2. * x[255];
	v[1] = sporttournament36_pd[751] * x[386];
	v[0] += v[1];
	sporttournament36_pd[752] = 2. * x[256];
	v[1] = sporttournament36_pd[752] * x[590];
	v[0] += v[1];
	sporttournament36_pd[753] = 2. * x[257];
	v[1] = sporttournament36_pd[753] * x[259];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[754] = 2. * x[257];
	v[2] = sporttournament36_pd[754] * x[493];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[755] = 2. * x[258];
	v[1] = sporttournament36_pd[755] * x[334];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[756] = 2. * x[258];
	v[2] = sporttournament36_pd[756] * x[422];
	v[0] += v[2];
	sporttournament36_pd[757] = 2. * x[259];
	v[2] = sporttournament36_pd[757] * x[334];
	v[0] += v[2];
	sporttournament36_pd[758] = 2. * x[259];
	v[2] = sporttournament36_pd[758] * x[590];
	v[0] += v[2];
	sporttournament36_pd[759] = 2. * x[260];
	v[2] = sporttournament36_pd[759] * x[335];
	v[0] += v[2];
	sporttournament36_pd[760] = 2. * x[260];
	v[2] = sporttournament36_pd[760] * x[391];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[761] = 2. * x[261];
	v[1] = sporttournament36_pd[761] * x[626];
	v[0] += v[1];
	sporttournament36_pd[762] = 2. * x[262];
	v[1] = sporttournament36_pd[762] * x[535];
	v[0] += v[1];
	sporttournament36_pd[763] = 2. * x[262];
	v[1] = sporttournament36_pd[763] * x[569];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[764] = 2. * x[262];
	v[2] = sporttournament36_pd[764] * x[571];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[765] = 2. * x[263];
	v[1] = sporttournament36_pd[765] * x[434];
	v[0] += v[1];
	sporttournament36_pd[766] = 2. * x[263];
	v[1] = sporttournament36_pd[766] * x[467];
	v[0] += v[1];
	sporttournament36_pd[767] = 2. * x[263];
	v[1] = sporttournament36_pd[767] * x[535];
	v[0] += v[1];
	sporttournament36_pd[768] = 2. * x[263];
	v[1] = sporttournament36_pd[768] * x[560];
	v[0] += v[1];
	sporttournament36_pd[769] = 2. * x[264];
	v[1] = sporttournament36_pd[769] * x[265];
	v[0] += v[1];
	sporttournament36_pd[770] = 2. * x[264];
	v[1] = sporttournament36_pd[770] * x[563];
	v[0] += v[1];
	sporttournament36_pd[771] = 2. * x[265];
	v[1] = sporttournament36_pd[771] * x[435];
	v[0] += v[1];
	sporttournament36_pd[772] = 2. * x[265];
	v[1] = sporttournament36_pd[772] * x[504];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[773] = 2. * x[265];
	v[2] = sporttournament36_pd[773] * x[617];
	v[0] += v[2];
	sporttournament36_pd[774] = 2. * x[266];
	v[2] = sporttournament36_pd[774] * x[268];
	v[0] += v[2];
	sporttournament36_pd[775] = 2. * x[266];
	v[2] = sporttournament36_pd[775] * x[504];
	v[0] += v[2];
	sporttournament36_pd[776] = 2. * x[266];
	v[2] = sporttournament36_pd[776] * x[617];
	v[0] += v[2];
	sporttournament36_pd[777] = 2. * x[267];
	v[2] = sporttournament36_pd[777] * x[553];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[778] = 2. * x[267];
	v[1] = sporttournament36_pd[778] * x[555];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[779] = 2. * x[268];
	v[2] = sporttournament36_pd[779] * x[447];
	v[0] += v[2];
	sporttournament36_pd[780] = 2. * x[268];
	v[2] = sporttournament36_pd[780] * x[555];
	v[0] += v[2];
	sporttournament36_pd[781] = 2. * x[269];
	v[2] = sporttournament36_pd[781] * x[399];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[782] = 2. * x[269];
	v[1] = sporttournament36_pd[782] * x[613];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[783] = 2. * x[270];
	v[2] = sporttournament36_pd[783] * x[272];
	v[0] += v[2];
	sporttournament36_pd[784] = 2. * x[270];
	v[2] = sporttournament36_pd[784] * x[448];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[785] = 2. * x[270];
	v[1] = sporttournament36_pd[785] * x[538];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[786] = 2. * x[271];
	v[2] = sporttournament36_pd[786] * x[307];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[787] = 2. * x[271];
	v[1] = sporttournament36_pd[787] * x[396];
	v[0] += v[1];
	sporttournament36_pd[788] = 2. * x[271];
	v[1] = sporttournament36_pd[788] * x[588];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[789] = 2. * x[272];
	v[2] = sporttournament36_pd[789] * x[473];
	v[0] += v[2];
	sporttournament36_pd[790] = 2. * x[272];
	v[2] = sporttournament36_pd[790] * x[588];
	v[0] += v[2];
	sporttournament36_pd[791] = 2. * x[272];
	v[2] = sporttournament36_pd[791] * x[613];
	v[0] += v[2];
	sporttournament36_pd[792] = 2. * x[273];
	v[2] = sporttournament36_pd[792] * x[625];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[793] = 2. * x[274];
	v[1] = sporttournament36_pd[793] * x[275];
	v[0] += v[1];
	sporttournament36_pd[794] = 2. * x[274];
	v[1] = sporttournament36_pd[794] * x[276];
	v[0] += v[1];
	sporttournament36_pd[795] = 2. * x[274];
	v[1] = sporttournament36_pd[795] * x[520];
	v[0] += v[1];
	sporttournament36_pd[796] = 2. * x[274];
	v[1] = sporttournament36_pd[796] * x[614];
	v[0] += v[1];
	sporttournament36_pd[797] = 2. * x[275];
	v[1] = sporttournament36_pd[797] * x[278];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[798] = 2. * x[275];
	v[2] = sporttournament36_pd[798] * x[593];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[799] = 2. * x[276];
	v[1] = sporttournament36_pd[799] * x[278];
	v[0] += v[1];
	sporttournament36_pd[800] = 2. * x[276];
	v[1] = sporttournament36_pd[800] * x[409];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[801] = 2. * x[276];
	v[2] = sporttournament36_pd[801] * x[462];
	v[0] += v[2];
	sporttournament36_pd[802] = 2. * x[277];
	v[2] = sporttournament36_pd[802] * x[279];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[803] = 2. * x[277];
	v[1] = sporttournament36_pd[803] * x[428];
	v[0] += v[1];
	sporttournament36_pd[804] = 2. * x[278];
	v[1] = sporttournament36_pd[804] * x[279];
	v[0] += v[1];
	sporttournament36_pd[805] = 2. * x[279];
	v[1] = sporttournament36_pd[805] * x[490];
	v[0] += v[1];
	sporttournament36_pd[806] = 2. * x[279];
	v[1] = sporttournament36_pd[806] * x[576];
	v[0] += v[1];
	sporttournament36_pd[807] = 2. * x[280];
	v[1] = sporttournament36_pd[807] * x[599];
	v[0] += v[1];
	sporttournament36_pd[808] = 2. * x[280];
	v[1] = sporttournament36_pd[808] * x[606];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[809] = 2. * x[281];
	v[2] = sporttournament36_pd[809] * x[282];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[810] = 2. * x[281];
	v[1] = sporttournament36_pd[810] * x[439];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[811] = 2. * x[281];
	v[2] = sporttournament36_pd[811] * x[440];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[812] = 2. * x[282];
	v[1] = sporttournament36_pd[812] * x[283];
	v[0] += v[1];
	sporttournament36_pd[813] = 2. * x[282];
	v[1] = sporttournament36_pd[813] * x[531];
	v[0] += v[1];
	sporttournament36_pd[814] = 2. * x[282];
	v[1] = sporttournament36_pd[814] * x[606];
	v[0] += v[1];
	sporttournament36_pd[815] = 2. * x[283];
	v[1] = sporttournament36_pd[815] * x[324];
	v[0] += v[1];
	sporttournament36_pd[816] = 2. * x[283];
	v[1] = sporttournament36_pd[816] * x[463];
	v[0] += v[1];
	sporttournament36_pd[817] = 2. * x[284];
	v[1] = sporttournament36_pd[817] * x[286];
	v[0] += v[1];
	sporttournament36_pd[818] = 2. * x[284];
	v[1] = sporttournament36_pd[818] * x[500];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[819] = 2. * x[285];
	v[2] = sporttournament36_pd[819] * x[372];
	v[0] += v[2];
	sporttournament36_pd[820] = 2. * x[286];
	v[2] = sporttournament36_pd[820] * x[324];
	v[0] += v[2];
	sporttournament36_pd[821] = 2. * x[286];
	v[2] = sporttournament36_pd[821] * x[372];
	v[0] += v[2];
	sporttournament36_pd[822] = 2. * x[287];
	v[2] = sporttournament36_pd[822] * x[288];
	v[0] += v[2];
	sporttournament36_pd[823] = 2. * x[288];
	v[2] = sporttournament36_pd[823] * x[585];
	v[0] += v[2];
	sporttournament36_pd[824] = 2. * x[288];
	v[2] = sporttournament36_pd[824] * x[628];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[825] = 2. * x[289];
	v[1] = sporttournament36_pd[825] * x[290];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[826] = 2. * x[289];
	v[2] = sporttournament36_pd[826] * x[391];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[827] = 2. * x[289];
	v[1] = sporttournament36_pd[827] * x[480];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[828] = 2. * x[290];
	v[2] = sporttournament36_pd[828] * x[379];
	v[0] += v[2];
	sporttournament36_pd[829] = 2. * x[290];
	v[2] = sporttournament36_pd[829] * x[585];
	v[0] += v[2];
	sporttournament36_pd[830] = 2. * x[291];
	v[2] = sporttournament36_pd[830] * x[293];
	v[0] += v[2];
	sporttournament36_pd[831] = 2. * x[291];
	v[2] = sporttournament36_pd[831] * x[381];
	v[0] += v[2];
	sporttournament36_pd[832] = 2. * x[292];
	v[2] = sporttournament36_pd[832] * x[295];
	v[0] += v[2];
	sporttournament36_pd[833] = 2. * x[292];
	v[2] = sporttournament36_pd[833] * x[387];
	v[0] += v[2];
	sporttournament36_pd[834] = 2. * x[293];
	v[2] = sporttournament36_pd[834] * x[295];
	v[0] += v[2];
	sporttournament36_pd[835] = 2. * x[293];
	v[2] = sporttournament36_pd[835] * x[379];
	v[0] += v[2];
	sporttournament36_pd[836] = 2. * x[294];
	v[2] = sporttournament36_pd[836] * x[296];
	v[0] += v[2];
	sporttournament36_pd[837] = 2. * x[294];
	v[2] = sporttournament36_pd[837] * x[402];
	v[0] += v[2];
	sporttournament36_pd[838] = 2. * x[295];
	v[2] = sporttournament36_pd[838] * x[296];
	v[0] += v[2];
	sporttournament36_pd[839] = 2. * x[297];
	v[2] = sporttournament36_pd[839] * x[299];
	v[0] += v[2];
	sporttournament36_pd[840] = 2. * x[297];
	v[2] = sporttournament36_pd[840] * x[578];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[841] = 2. * x[297];
	v[1] = sporttournament36_pd[841] * x[580];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[842] = 2. * x[298];
	v[2] = sporttournament36_pd[842] * x[299];
	v[0] += v[2];
	sporttournament36_pd[843] = 2. * x[298];
	v[2] = sporttournament36_pd[843] * x[443];
	v[0] += v[2];
	sporttournament36_pd[844] = 2. * x[298];
	v[2] = sporttournament36_pd[844] * x[481];
	v[0] += v[2];
	sporttournament36_pd[845] = 2. * x[298];
	v[2] = sporttournament36_pd[845] * x[551];
	v[0] += v[2];
	sporttournament36_pd[846] = 2. * x[299];
	v[2] = sporttournament36_pd[846] * x[627];
	v[0] += v[2];
	sporttournament36_pd[847] = 2. * x[300];
	v[2] = sporttournament36_pd[847] * x[302];
	v[0] += v[2];
	sporttournament36_pd[848] = 2. * x[301];
	v[2] = sporttournament36_pd[848] * x[302];
	v[0] += v[2];
	sporttournament36_pd[849] = 2. * x[301];
	v[2] = sporttournament36_pd[849] * x[586];
	v[0] += v[2];
	sporttournament36_pd[850] = 2. * x[301];
	v[2] = sporttournament36_pd[850] * x[627];
	v[0] += v[2];
	sporttournament36_pd[851] = 2. * x[302];
	v[2] = sporttournament36_pd[851] * x[504];
	v[0] += v[2];
	sporttournament36_pd[852] = 2. * x[302];
	v[2] = sporttournament36_pd[852] * x[612];
	v[0] += v[2];
	sporttournament36_pd[853] = 2. * x[303];
	v[2] = sporttournament36_pd[853] * x[305];
	v[0] += v[2];
	sporttournament36_pd[854] = 2. * x[303];
	v[2] = sporttournament36_pd[854] * x[516];
	v[0] += v[2];
	sporttournament36_pd[855] = 2. * x[303];
	v[2] = sporttournament36_pd[855] * x[612];
	v[0] += v[2];
	sporttournament36_pd[856] = 2. * x[304];
	v[2] = sporttournament36_pd[856] * x[547];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[857] = 2. * x[304];
	v[1] = sporttournament36_pd[857] * x[548];
	v[0] += v[1];
	sporttournament36_pd[858] = 2. * x[304];
	v[1] = sporttournament36_pd[858] * x[549];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[859] = 2. * x[305];
	v[2] = sporttournament36_pd[859] * x[459];
	v[0] += v[2];
	sporttournament36_pd[860] = 2. * x[305];
	v[2] = sporttournament36_pd[860] * x[549];
	v[0] += v[2];
	sporttournament36_pd[861] = 2. * x[306];
	v[2] = sporttournament36_pd[861] * x[396];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[862] = 2. * x[306];
	v[1] = sporttournament36_pd[862] * x[609];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[863] = 2. * x[307];
	v[2] = sporttournament36_pd[863] * x[309];
	v[0] += v[2];
	sporttournament36_pd[864] = 2. * x[307];
	v[2] = sporttournament36_pd[864] * x[437];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[865] = 2. * x[307];
	v[1] = sporttournament36_pd[865] * x[549];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[866] = 2. * x[308];
	v[2] = sporttournament36_pd[866] * x[399];
	v[0] += v[2];
	sporttournament36_pd[867] = 2. * x[308];
	v[2] = sporttournament36_pd[867] * x[554];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[868] = 2. * x[308];
	v[1] = sporttournament36_pd[868] * x[584];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[869] = 2. * x[309];
	v[2] = sporttournament36_pd[869] * x[486];
	v[0] += v[2];
	sporttournament36_pd[870] = 2. * x[309];
	v[2] = sporttournament36_pd[870] * x[584];
	v[0] += v[2];
	sporttournament36_pd[871] = 2. * x[309];
	v[2] = sporttournament36_pd[871] * x[609];
	v[0] += v[2];
	sporttournament36_pd[872] = 2. * x[310];
	v[2] = sporttournament36_pd[872] * x[474];
	v[0] += v[2];
	sporttournament36_pd[873] = 2. * x[310];
	v[2] = sporttournament36_pd[873] * x[620];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[874] = 2. * x[311];
	v[1] = sporttournament36_pd[874] * x[417];
	v[0] += v[1];
	sporttournament36_pd[875] = 2. * x[311];
	v[1] = sporttournament36_pd[875] * x[461];
	v[0] += v[1];
	sporttournament36_pd[876] = 2. * x[311];
	v[1] = sporttournament36_pd[876] * x[506];
	v[0] += v[1];
	sporttournament36_pd[877] = 2. * x[311];
	v[1] = sporttournament36_pd[877] * x[507];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[878] = 2. * x[312];
	v[2] = sporttournament36_pd[878] * x[315];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[879] = 2. * x[312];
	v[1] = sporttournament36_pd[879] * x[417];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[880] = 2. * x[312];
	v[2] = sporttournament36_pd[880] * x[418];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[881] = 2. * x[313];
	v[1] = sporttournament36_pd[881] * x[315];
	v[0] += v[1];
	sporttournament36_pd[882] = 2. * x[313];
	v[1] = sporttournament36_pd[882] * x[507];
	v[0] += v[1];
	sporttournament36_pd[883] = 2. * x[313];
	v[1] = sporttournament36_pd[883] * x[540];
	v[0] += v[1];
	sporttournament36_pd[884] = 2. * x[313];
	v[1] = sporttournament36_pd[884] * x[619];
	v[0] += v[1];
	sporttournament36_pd[885] = 2. * x[314];
	v[1] = sporttournament36_pd[885] * x[316];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[886] = 2. * x[314];
	v[2] = sporttournament36_pd[886] * x[530];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[887] = 2. * x[315];
	v[1] = sporttournament36_pd[887] * x[316];
	v[0] += v[1];
	sporttournament36_pd[888] = 2. * x[315];
	v[1] = sporttournament36_pd[888] * x[450];
	v[0] += v[1];
	sporttournament36_pd[889] = 2. * x[316];
	v[1] = sporttournament36_pd[889] * x[317];
	v[0] += v[1];
	sporttournament36_pd[890] = 2. * x[317];
	v[1] = sporttournament36_pd[890] * x[319];
	v[0] += v[1];
	sporttournament36_pd[891] = 2. * x[317];
	v[1] = sporttournament36_pd[891] * x[541];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[892] = 2. * x[317];
	v[2] = sporttournament36_pd[892] * x[566];
	v[0] += v[2];
	sporttournament36_pd[893] = 2. * x[318];
	v[2] = sporttournament36_pd[893] * x[599];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[894] = 2. * x[318];
	v[1] = sporttournament36_pd[894] * x[600];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[895] = 2. * x[319];
	v[2] = sporttournament36_pd[895] * x[431];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[896] = 2. * x[319];
	v[1] = sporttournament36_pd[896] * x[478];
	v[0] += v[1];
	sporttournament36_pd[897] = 2. * x[319];
	v[1] = sporttournament36_pd[897] * x[600];
	v[0] += v[1];
	sporttournament36_pd[898] = 2. * x[320];
	v[1] = sporttournament36_pd[898] * x[321];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[899] = 2. * x[320];
	v[2] = sporttournament36_pd[899] * x[451];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[900] = 2. * x[321];
	v[1] = sporttournament36_pd[900] * x[323];
	v[0] += v[1];
	sporttournament36_pd[901] = 2. * x[321];
	v[1] = sporttournament36_pd[901] * x[521];
	v[0] += v[1];
	sporttournament36_pd[902] = 2. * x[321];
	v[1] = sporttournament36_pd[902] * x[600];
	v[0] += v[1];
	sporttournament36_pd[903] = 2. * x[322];
	v[1] = sporttournament36_pd[903] * x[369];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[904] = 2. * x[322];
	v[2] = sporttournament36_pd[904] * x[477];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[905] = 2. * x[322];
	v[1] = sporttournament36_pd[905] * x[479];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[906] = 2. * x[323];
	v[2] = sporttournament36_pd[906] * x[369];
	v[0] += v[2];
	sporttournament36_pd[907] = 2. * x[323];
	v[2] = sporttournament36_pd[907] * x[477];
	v[0] += v[2];
	sporttournament36_pd[908] = 2. * x[324];
	v[2] = sporttournament36_pd[908] * x[326];
	v[0] += v[2];
	sporttournament36_pd[909] = 2. * x[324];
	v[2] = sporttournament36_pd[909] * x[491];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[910] = 2. * x[325];
	v[1] = sporttournament36_pd[910] * x[328];
	v[0] += v[1];
	sporttournament36_pd[911] = 2. * x[326];
	v[1] = sporttournament36_pd[911] * x[328];
	v[0] += v[1];
	sporttournament36_pd[912] = 2. * x[326];
	v[1] = sporttournament36_pd[912] * x[369];
	v[0] += v[1];
	sporttournament36_pd[913] = 2. * x[327];
	v[1] = sporttournament36_pd[913] * x[330];
	v[0] += v[1];
	sporttournament36_pd[914] = 2. * x[328];
	v[1] = sporttournament36_pd[914] * x[330];
	v[0] += v[1];
	sporttournament36_pd[915] = 2. * x[329];
	v[1] = sporttournament36_pd[915] * x[331];
	v[0] += v[1];
	sporttournament36_pd[916] = 2. * x[330];
	v[1] = sporttournament36_pd[916] * x[331];
	v[0] += v[1];
	sporttournament36_pd[917] = 2. * x[331];
	v[1] = sporttournament36_pd[917] * x[332];
	v[0] += v[1];
	sporttournament36_pd[918] = 2. * x[331];
	v[1] = sporttournament36_pd[918] * x[414];
	v[0] += v[1];
	sporttournament36_pd[919] = 2. * x[332];
	v[1] = sporttournament36_pd[919] * x[333];
	v[0] += v[1];
	sporttournament36_pd[920] = 2. * x[332];
	v[1] = sporttournament36_pd[920] * x[523];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[921] = 2. * x[332];
	v[2] = sporttournament36_pd[921] * x[577];
	v[0] += v[2];
	sporttournament36_pd[922] = 2. * x[333];
	v[2] = sporttournament36_pd[922] * x[403];
	v[0] += v[2];
	sporttournament36_pd[923] = 2. * x[333];
	v[2] = sporttournament36_pd[923] * x[465];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[924] = 2. * x[334];
	v[1] = sporttournament36_pd[924] * x[335];
	v[0] += v[1];
	sporttournament36_pd[925] = 2. * x[334];
	v[1] = sporttournament36_pd[925] * x[336];
	v[0] += v[1];
	sporttournament36_pd[926] = 2. * x[335];
	v[1] = sporttournament36_pd[926] * x[383];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[927] = 2. * x[336];
	v[2] = sporttournament36_pd[927] * x[383];
	v[0] += v[2];
	sporttournament36_pd[928] = 2. * x[336];
	v[2] = sporttournament36_pd[928] * x[403];
	v[0] += v[2];
	sporttournament36_pd[929] = 2. * x[337];
	v[2] = sporttournament36_pd[929] * x[340];
	v[0] += v[2];
	sporttournament36_pd[930] = 2. * x[337];
	v[2] = sporttournament36_pd[930] * x[482];
	v[0] += v[2];
	sporttournament36_pd[931] = 2. * x[337];
	v[2] = sporttournament36_pd[931] * x[494];
	v[0] += v[2];
	sporttournament36_pd[932] = 2. * x[338];
	v[2] = sporttournament36_pd[932] * x[340];
	v[0] += v[2];
	sporttournament36_pd[933] = 2. * x[338];
	v[2] = sporttournament36_pd[933] * x[455];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[934] = 2. * x[338];
	v[1] = sporttournament36_pd[934] * x[559];
	v[0] += v[1];
	sporttournament36_pd[935] = 2. * x[338];
	v[1] = sporttournament36_pd[935] * x[598];
	v[0] += v[1];
	sporttournament36_pd[936] = 2. * x[339];
	v[1] = sporttournament36_pd[936] * x[341];
	v[0] += v[1];
	sporttournament36_pd[937] = 2. * x[339];
	v[1] = sporttournament36_pd[937] * x[390];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[938] = 2. * x[339];
	v[2] = sporttournament36_pd[938] * x[587];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[939] = 2. * x[340];
	v[1] = sporttournament36_pd[939] * x[341];
	v[0] += v[1];
	sporttournament36_pd[940] = 2. * x[340];
	v[1] = sporttournament36_pd[940] * x[456];
	v[0] += v[1];
	sporttournament36_pd[941] = 2. * x[341];
	v[1] = sporttournament36_pd[941] * x[515];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[942] = 2. * x[341];
	v[2] = sporttournament36_pd[942] * x[623];
	v[0] += v[2];
	sporttournament36_pd[943] = 2. * x[342];
	v[2] = sporttournament36_pd[943] * x[344];
	v[0] += v[2];
	sporttournament36_pd[944] = 2. * x[342];
	v[2] = sporttournament36_pd[944] * x[434];
	v[0] += v[2];
	sporttournament36_pd[945] = 2. * x[342];
	v[2] = sporttournament36_pd[945] * x[591];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[946] = 2. * x[343];
	v[1] = sporttournament36_pd[946] * x[345];
	v[0] += v[1];
	sporttournament36_pd[947] = 2. * x[343];
	v[1] = sporttournament36_pd[947] * x[546];
	v[0] += v[1];
	sporttournament36_pd[948] = 2. * x[344];
	v[1] = sporttournament36_pd[948] * x[345];
	v[0] += v[1];
	sporttournament36_pd[949] = 2. * x[344];
	v[1] = sporttournament36_pd[949] * x[623];
	v[0] += v[1];
	sporttournament36_pd[950] = 2. * x[345];
	v[1] = sporttournament36_pd[950] * x[516];
	v[0] += v[1];
	sporttournament36_pd[951] = 2. * x[345];
	v[1] = sporttournament36_pd[951] * x[608];
	v[0] += v[1];
	sporttournament36_pd[952] = 2. * x[346];
	v[1] = sporttournament36_pd[952] * x[347];
	v[0] += v[1];
	sporttournament36_pd[953] = 2. * x[346];
	v[1] = sporttournament36_pd[953] * x[471];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[954] = 2. * x[346];
	v[2] = sporttournament36_pd[954] * x[526];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[955] = 2. * x[346];
	v[1] = sporttournament36_pd[955] * x[537];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[956] = 2. * x[347];
	v[2] = sporttournament36_pd[956] * x[349];
	v[0] += v[2];
	sporttournament36_pd[957] = 2. * x[347];
	v[2] = sporttournament36_pd[957] * x[608];
	v[0] += v[2];
	sporttournament36_pd[958] = 2. * x[348];
	v[2] = sporttournament36_pd[958] * x[537];
	v[0] += v[2];
	sporttournament36_pd[959] = 2. * x[348];
	v[2] = sporttournament36_pd[959] * x[538];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[960] = 2. * x[349];
	v[1] = sporttournament36_pd[960] * x[405];
	v[0] += v[1];
	sporttournament36_pd[961] = 2. * x[349];
	v[1] = sporttournament36_pd[961] * x[437];
	v[0] += v[1];
	sporttournament36_pd[962] = 2. * x[349];
	v[1] = sporttournament36_pd[962] * x[538];
	v[0] += v[1];
	sporttournament36_pd[963] = 2. * x[350];
	v[1] = sporttournament36_pd[963] * x[603];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[964] = 2. * x[351];
	v[2] = sporttournament36_pd[964] * x[407];
	v[0] += v[2];
	sporttournament36_pd[965] = 2. * x[351];
	v[2] = sporttournament36_pd[965] * x[575];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[966] = 2. * x[352];
	v[1] = sporttournament36_pd[966] * x[496];
	v[0] += v[1];
	sporttournament36_pd[967] = 2. * x[352];
	v[1] = sporttournament36_pd[967] * x[554];
	v[0] += v[1];
	sporttournament36_pd[968] = 2. * x[352];
	v[1] = sporttournament36_pd[968] * x[575];
	v[0] += v[1];
	sporttournament36_pd[969] = 2. * x[352];
	v[1] = sporttournament36_pd[969] * x[603];
	v[0] += v[1];
	sporttournament36_pd[970] = 2. * x[353];
	v[1] = sporttournament36_pd[970] * x[487];
	v[0] += v[1];
	sporttournament36_pd[971] = 2. * x[353];
	v[1] = sporttournament36_pd[971] * x[615];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[972] = 2. * x[354];
	v[2] = sporttournament36_pd[972] * x[356];
	v[0] += v[2];
	sporttournament36_pd[973] = 2. * x[354];
	v[2] = sporttournament36_pd[973] * x[410];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[974] = 2. * x[354];
	v[1] = sporttournament36_pd[974] * x[519];
	v[0] += v[1];
	sporttournament36_pd[975] = 2. * x[354];
	v[1] = sporttournament36_pd[975] * x[615];
	v[0] += v[1];
	sporttournament36_pd[976] = 2. * x[355];
	v[1] = sporttournament36_pd[976] * x[358];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[977] = 2. * x[355];
	v[2] = sporttournament36_pd[977] * x[426];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[978] = 2. * x[355];
	v[1] = sporttournament36_pd[978] * x[428];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[979] = 2. * x[356];
	v[2] = sporttournament36_pd[979] * x[358];
	v[0] += v[2];
	sporttournament36_pd[980] = 2. * x[356];
	v[2] = sporttournament36_pd[980] * x[529];
	v[0] += v[2];
	sporttournament36_pd[981] = 2. * x[356];
	v[2] = sporttournament36_pd[981] * x[624];
	v[0] += v[2];
	sporttournament36_pd[982] = 2. * x[357];
	v[2] = sporttournament36_pd[982] * x[359];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[983] = 2. * x[357];
	v[1] = sporttournament36_pd[983] * x[541];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[984] = 2. * x[358];
	v[2] = sporttournament36_pd[984] * x[359];
	v[0] += v[2];
	sporttournament36_pd[985] = 2. * x[359];
	v[2] = sporttournament36_pd[985] * x[361];
	v[0] += v[2];
	sporttournament36_pd[986] = 2. * x[360];
	v[2] = sporttournament36_pd[986] * x[363];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[987] = 2. * x[360];
	v[1] = sporttournament36_pd[987] * x[439];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[988] = 2. * x[360];
	v[2] = sporttournament36_pd[988] * x[462];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[989] = 2. * x[361];
	v[1] = sporttournament36_pd[989] * x[362];
	v[0] += v[1];
	sporttournament36_pd[990] = 2. * x[361];
	v[1] = sporttournament36_pd[990] * x[363];
	v[0] += v[1];
	sporttournament36_pd[991] = 2. * x[361];
	v[1] = sporttournament36_pd[991] * x[530];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[992] = 2. * x[362];
	v[2] = sporttournament36_pd[992] * x[596];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[993] = 2. * x[363];
	v[1] = sporttournament36_pd[993] * x[364];
	v[0] += v[1];
	sporttournament36_pd[994] = 2. * x[363];
	v[1] = sporttournament36_pd[994] * x[596];
	v[0] += v[1];
	sporttournament36_pd[995] = 2. * x[364];
	v[1] = sporttournament36_pd[995] * x[366];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[996] = 2. * x[364];
	v[2] = sporttournament36_pd[996] * x[463];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[997] = 2. * x[364];
	v[1] = sporttournament36_pd[997] * x[510];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[998] = 2. * x[365];
	v[2] = sporttournament36_pd[998] * x[367];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[999] = 2. * x[365];
	v[1] = sporttournament36_pd[999] * x[368];
	v[0] += v[1];
	sporttournament36_pd[1000] = 2. * x[366];
	v[1] = sporttournament36_pd[1000] * x[368];
	v[0] += v[1];
	sporttournament36_pd[1001] = 2. * x[366];
	v[1] = sporttournament36_pd[1001] * x[511];
	v[0] += v[1];
	sporttournament36_pd[1002] = 2. * x[366];
	v[1] = sporttournament36_pd[1002] * x[596];
	v[0] += v[1];
	sporttournament36_pd[1003] = 2. * x[367];
	v[1] = sporttournament36_pd[1003] * x[589];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1004] = 2. * x[368];
	v[2] = sporttournament36_pd[1004] * x[589];
	v[0] += v[2];
	sporttournament36_pd[1005] = 2. * x[369];
	v[2] = sporttournament36_pd[1005] * x[371];
	v[0] += v[2];
	sporttournament36_pd[1006] = 2. * x[370];
	v[2] = sporttournament36_pd[1006] * x[373];
	v[0] += v[2];
	sporttournament36_pd[1007] = 2. * x[370];
	v[2] = sporttournament36_pd[1007] * x[589];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1008] = 2. * x[371];
	v[1] = sporttournament36_pd[1008] * x[373];
	v[0] += v[1];
	sporttournament36_pd[1009] = 2. * x[371];
	v[1] = sporttournament36_pd[1009] * x[589];
	v[0] += v[1];
	sporttournament36_pd[1010] = 2. * x[372];
	v[1] = sporttournament36_pd[1010] * x[374];
	v[0] += v[1];
	sporttournament36_pd[1011] = 2. * x[372];
	v[1] = sporttournament36_pd[1011] * x[628];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1012] = 2. * x[373];
	v[2] = sporttournament36_pd[1012] * x[628];
	v[0] += v[2];
	sporttournament36_pd[1013] = 2. * x[374];
	v[2] = sporttournament36_pd[1013] * x[376];
	v[0] += v[2];
	sporttournament36_pd[1014] = 2. * x[375];
	v[2] = sporttournament36_pd[1014] * x[377];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1015] = 2. * x[375];
	v[1] = sporttournament36_pd[1015] * x[414];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1016] = 2. * x[375];
	v[2] = sporttournament36_pd[1016] * x[532];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1017] = 2. * x[376];
	v[1] = sporttournament36_pd[1017] * x[377];
	v[0] += v[1];
	sporttournament36_pd[1018] = 2. * x[376];
	v[1] = sporttournament36_pd[1018] * x[422];
	v[0] += v[1];
	sporttournament36_pd[1019] = 2. * x[376];
	v[1] = sporttournament36_pd[1019] * x[628];
	v[0] += v[1];
	sporttournament36_pd[1020] = 2. * x[377];
	v[1] = sporttournament36_pd[1020] * x[378];
	v[0] += v[1];
	sporttournament36_pd[1021] = 2. * x[377];
	v[1] = sporttournament36_pd[1021] * x[567];
	v[0] += v[1];
	sporttournament36_pd[1022] = 2. * x[378];
	v[1] = sporttournament36_pd[1022] * x[380];
	v[0] += v[1];
	sporttournament36_pd[1023] = 2. * x[378];
	v[1] = sporttournament36_pd[1023] * x[465];
	v[0] += v[1];
	sporttournament36_pd[1024] = 2. * x[379];
	v[1] = sporttournament36_pd[1024] * x[382];
	v[0] += v[1];
	sporttournament36_pd[1025] = 2. * x[379];
	v[1] = sporttournament36_pd[1025] * x[413];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1026] = 2. * x[380];
	v[2] = sporttournament36_pd[1026] * x[382];
	v[0] += v[2];
	sporttournament36_pd[1027] = 2. * x[380];
	v[2] = sporttournament36_pd[1027] * x[413];
	v[0] += v[2];
	sporttournament36_pd[1028] = 2. * x[381];
	v[2] = sporttournament36_pd[1028] * x[622];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1029] = 2. * x[382];
	v[1] = sporttournament36_pd[1029] * x[622];
	v[0] += v[1];
	sporttournament36_pd[1030] = 2. * x[383];
	v[1] = sporttournament36_pd[1030] * x[626];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1031] = 2. * x[383];
	v[2] = sporttournament36_pd[1031] * x[629];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1032] = 2. * x[384];
	v[1] = sporttournament36_pd[1032] * x[385];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1033] = 2. * x[384];
	v[2] = sporttournament36_pd[1033] * x[479];
	v[0] += v[2];
	sporttournament36_pd[1034] = 2. * x[385];
	v[2] = sporttournament36_pd[1034] * x[478];
	v[0] += v[2];
	sporttournament36_pd[1035] = 2. * x[386];
	v[2] = sporttournament36_pd[1035] * x[433];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1036] = 2. * x[387];
	v[1] = sporttournament36_pd[1036] * x[388];
	v[0] += v[1];
	sporttournament36_pd[1037] = 2. * x[388];
	v[1] = sporttournament36_pd[1037] * x[403];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1038] = 2. * x[389];
	v[2] = sporttournament36_pd[1038] * x[390];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1039] = 2. * x[389];
	v[1] = sporttournament36_pd[1039] * x[495];
	v[0] += v[1];
	sporttournament36_pd[1040] = 2. * x[390];
	v[1] = sporttournament36_pd[1040] * x[454];
	v[0] += v[1];
	sporttournament36_pd[1041] = 2. * x[390];
	v[1] = sporttournament36_pd[1041] * x[514];
	v[0] += v[1];
	sporttournament36_pd[1042] = 2. * x[392];
	v[1] = sporttournament36_pd[1042] * x[393];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1043] = 2. * x[392];
	v[2] = sporttournament36_pd[1043] * x[503];
	v[0] += v[2];
	sporttournament36_pd[1044] = 2. * x[393];
	v[2] = sporttournament36_pd[1044] * x[468];
	v[0] += v[2];
	sporttournament36_pd[1045] = 2. * x[393];
	v[2] = sporttournament36_pd[1045] * x[502];
	v[0] += v[2];
	sporttournament36_pd[1046] = 2. * x[394];
	v[2] = sporttournament36_pd[1046] * x[445];
	v[0] += v[2];
	sporttournament36_pd[1047] = 2. * x[395];
	v[2] = sporttournament36_pd[1047] * x[396];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1048] = 2. * x[395];
	v[1] = sporttournament36_pd[1048] * x[461];
	v[0] += v[1];
	sporttournament36_pd[1049] = 2. * x[395];
	v[1] = sporttournament36_pd[1049] * x[539];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1050] = 2. * x[397];
	v[2] = sporttournament36_pd[1050] * x[458];
	v[0] += v[2];
	sporttournament36_pd[1051] = 2. * x[398];
	v[2] = sporttournament36_pd[1051] * x[399];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1052] = 2. * x[398];
	v[1] = sporttournament36_pd[1052] * x[528];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1053] = 2. * x[399];
	v[2] = sporttournament36_pd[1053] * x[485];
	v[0] += v[2];
	sporttournament36_pd[1054] = 2. * x[400];
	v[2] = sporttournament36_pd[1054] * x[401];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1055] = 2. * x[400];
	v[1] = sporttournament36_pd[1055] * x[509];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1056] = 2. * x[401];
	v[2] = sporttournament36_pd[1056] * x[475];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1057] = 2. * x[402];
	v[1] = sporttournament36_pd[1057] * x[403];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1058] = 2. * x[404];
	v[2] = sporttournament36_pd[1058] * x[471];
	v[0] += v[2];
	sporttournament36_pd[1059] = 2. * x[406];
	v[2] = sporttournament36_pd[1059] * x[407];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1060] = 2. * x[406];
	v[1] = sporttournament36_pd[1060] * x[518];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1061] = 2. * x[407];
	v[2] = sporttournament36_pd[1061] * x[472];
	v[0] += v[2];
	sporttournament36_pd[1062] = 2. * x[408];
	v[2] = sporttournament36_pd[1062] * x[409];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1063] = 2. * x[408];
	v[1] = sporttournament36_pd[1063] * x[410];
	v[0] += v[1];
	sporttournament36_pd[1064] = 2. * x[408];
	v[1] = sporttournament36_pd[1064] * x[498];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1065] = 2. * x[408];
	v[2] = sporttournament36_pd[1065] * x[530];
	v[0] += v[2];
	sporttournament36_pd[1066] = 2. * x[409];
	v[2] = sporttournament36_pd[1066] * x[426];
	v[0] += v[2];
	sporttournament36_pd[1067] = 2. * x[410];
	v[2] = sporttournament36_pd[1067] * x[497];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1068] = 2. * x[411];
	v[1] = sporttournament36_pd[1068] * x[412];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1069] = 2. * x[411];
	v[2] = sporttournament36_pd[1069] * x[452];
	v[0] += v[2];
	sporttournament36_pd[1070] = 2. * x[412];
	v[2] = sporttournament36_pd[1070] * x[498];
	v[0] += v[2];
	sporttournament36_pd[1071] = 2. * x[412];
	v[2] = sporttournament36_pd[1071] * x[499];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1072] = 2. * x[413];
	v[1] = sporttournament36_pd[1072] * x[414];
	v[0] += v[1];
	sporttournament36_pd[1073] = 2. * x[416];
	v[1] = sporttournament36_pd[1073] * x[506];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1074] = 2. * x[418];
	v[2] = sporttournament36_pd[1074] * x[419];
	v[0] += v[2];
	sporttournament36_pd[1075] = 2. * x[418];
	v[2] = sporttournament36_pd[1075] * x[489];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1076] = 2. * x[418];
	v[1] = sporttournament36_pd[1076] * x[541];
	v[0] += v[1];
	sporttournament36_pd[1077] = 2. * x[419];
	v[1] = sporttournament36_pd[1077] * x[507];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1078] = 2. * x[419];
	v[2] = sporttournament36_pd[1078] * x[508];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1079] = 2. * x[420];
	v[1] = sporttournament36_pd[1079] * x[421];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1080] = 2. * x[420];
	v[2] = sporttournament36_pd[1080] * x[464];
	v[0] += v[2];
	sporttournament36_pd[1081] = 2. * x[421];
	v[2] = sporttournament36_pd[1081] * x[450];
	v[0] += v[2];
	sporttournament36_pd[1082] = 2. * x[421];
	v[2] = sporttournament36_pd[1082] * x[489];
	v[0] += v[2];
	sporttournament36_pd[1083] = 2. * x[421];
	v[2] = sporttournament36_pd[1083] * x[490];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1084] = 2. * x[422];
	v[1] = sporttournament36_pd[1084] * x[543];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1085] = 2. * x[422];
	v[2] = sporttournament36_pd[1085] * x[568];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1086] = 2. * x[423];
	v[1] = sporttournament36_pd[1086] * x[424];
	v[0] += v[1];
	sporttournament36_pd[1087] = 2. * x[423];
	v[1] = sporttournament36_pd[1087] * x[515];
	v[0] += v[1];
	sporttournament36_pd[1088] = 2. * x[423];
	v[1] = sporttournament36_pd[1088] * x[586];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1089] = 2. * x[424];
	v[2] = sporttournament36_pd[1089] * x[551];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1090] = 2. * x[424];
	v[1] = sporttournament36_pd[1090] * x[552];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1091] = 2. * x[426];
	v[2] = sporttournament36_pd[1091] * x[427];
	v[0] += v[2];
	sporttournament36_pd[1092] = 2. * x[427];
	v[2] = sporttournament36_pd[1092] * x[518];
	v[0] += v[2];
	sporttournament36_pd[1093] = 2. * x[427];
	v[2] = sporttournament36_pd[1093] * x[588];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1094] = 2. * x[427];
	v[1] = sporttournament36_pd[1094] * x[592];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1095] = 2. * x[428];
	v[2] = sporttournament36_pd[1095] * x[429];
	v[0] += v[2];
	sporttournament36_pd[1096] = 2. * x[428];
	v[2] = sporttournament36_pd[1096] * x[476];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1097] = 2. * x[429];
	v[1] = sporttournament36_pd[1097] * x[520];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1098] = 2. * x[430];
	v[2] = sporttournament36_pd[1098] * x[431];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1099] = 2. * x[431];
	v[1] = sporttournament36_pd[1099] * x[462];
	v[0] += v[1];
	sporttournament36_pd[1100] = 2. * x[431];
	v[1] = sporttournament36_pd[1100] * x[476];
	v[0] += v[1];
	sporttournament36_pd[1101] = 2. * x[432];
	v[1] = sporttournament36_pd[1101] * x[522];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1102] = 2. * x[433];
	v[2] = sporttournament36_pd[1102] * x[557];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1103] = 2. * x[434];
	v[1] = sporttournament36_pd[1103] * x[579];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1104] = 2. * x[435];
	v[2] = sporttournament36_pd[1104] * x[579];
	v[0] += v[2];
	sporttournament36_pd[1105] = 2. * x[435];
	v[2] = sporttournament36_pd[1105] * x[627];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1106] = 2. * x[438];
	v[1] = sporttournament36_pd[1106] * x[486];
	v[0] += v[1];
	sporttournament36_pd[1107] = 2. * x[440];
	v[1] = sporttournament36_pd[1107] * x[512];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1108] = 2. * x[441];
	v[2] = sporttournament36_pd[1108] * x[442];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1109] = 2. * x[441];
	v[1] = sporttournament36_pd[1109] * x[444];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1110] = 2. * x[443];
	v[2] = sporttournament36_pd[1110] * x[444];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1111] = 2. * x[443];
	v[1] = sporttournament36_pd[1111] * x[570];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1112] = 2. * x[444];
	v[2] = sporttournament36_pd[1112] * x[562];
	v[0] += v[2];
	sporttournament36_pd[1113] = 2. * x[445];
	v[2] = sporttournament36_pd[1113] * x[446];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1114] = 2. * x[446];
	v[1] = sporttournament36_pd[1114] * x[570];
	v[0] += v[1];
	sporttournament36_pd[1115] = 2. * x[446];
	v[1] = sporttournament36_pd[1115] * x[623];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1116] = 2. * x[448];
	v[2] = sporttournament36_pd[1116] * x[554];
	v[0] += v[2];
	sporttournament36_pd[1117] = 2. * x[449];
	v[2] = sporttournament36_pd[1117] * x[473];
	v[0] += v[2];
	sporttournament36_pd[1118] = 2. * x[450];
	v[2] = sporttournament36_pd[1118] * x[488];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1119] = 2. * x[451];
	v[1] = sporttournament36_pd[1119] * x[452];
	v[0] += v[1];
	sporttournament36_pd[1120] = 2. * x[451];
	v[1] = sporttournament36_pd[1120] * x[500];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1121] = 2. * x[452];
	v[2] = sporttournament36_pd[1121] * x[566];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1122] = 2. * x[453];
	v[1] = sporttournament36_pd[1122] * x[454];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1123] = 2. * x[453];
	v[2] = sporttournament36_pd[1123] * x[455];
	v[0] += v[2];
	sporttournament36_pd[1124] = 2. * x[453];
	v[2] = sporttournament36_pd[1124] * x[457];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1125] = 2. * x[456];
	v[1] = sporttournament36_pd[1125] * x[457];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1126] = 2. * x[456];
	v[2] = sporttournament36_pd[1126] * x[561];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1127] = 2. * x[457];
	v[1] = sporttournament36_pd[1127] * x[571];
	v[0] += v[1];
	sporttournament36_pd[1128] = 2. * x[460];
	v[1] = sporttournament36_pd[1128] * x[527];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1129] = 2. * x[462];
	v[2] = sporttournament36_pd[1129] * x[475];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1130] = 2. * x[463];
	v[1] = sporttournament36_pd[1130] * x[464];
	v[0] += v[1];
	sporttournament36_pd[1131] = 2. * x[463];
	v[1] = sporttournament36_pd[1131] * x[491];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1132] = 2. * x[464];
	v[2] = sporttournament36_pd[1132] * x[576];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1133] = 2. * x[465];
	v[1] = sporttournament36_pd[1133] * x[466];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1134] = 2. * x[466];
	v[2] = sporttournament36_pd[1134] * x[601];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1135] = 2. * x[467];
	v[1] = sporttournament36_pd[1135] * x[468];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1136] = 2. * x[467];
	v[2] = sporttournament36_pd[1136] * x[469];
	v[0] += v[2];
	sporttournament36_pd[1137] = 2. * x[467];
	v[2] = sporttournament36_pd[1137] * x[470];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1138] = 2. * x[469];
	v[1] = sporttournament36_pd[1138] * x[551];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1139] = 2. * x[470];
	v[2] = sporttournament36_pd[1139] * x[580];
	v[0] += v[2];
	sporttournament36_pd[1140] = 2. * x[472];
	v[2] = sporttournament36_pd[1140] * x[517];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1141] = 2. * x[473];
	v[1] = sporttournament36_pd[1141] * x[474];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1142] = 2. * x[474];
	v[2] = sporttournament36_pd[1142] * x[517];
	v[0] += v[2];
	sporttournament36_pd[1143] = 2. * x[474];
	v[2] = sporttournament36_pd[1143] * x[618];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1144] = 2. * x[476];
	v[1] = sporttournament36_pd[1144] * x[508];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1145] = 2. * x[477];
	v[2] = sporttournament36_pd[1145] * x[478];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1146] = 2. * x[478];
	v[1] = sporttournament36_pd[1146] * x[499];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1147] = 2. * x[479];
	v[2] = sporttournament36_pd[1147] * x[492];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1148] = 2. * x[480];
	v[1] = sporttournament36_pd[1148] * x[597];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1149] = 2. * x[481];
	v[2] = sporttournament36_pd[1149] * x[482];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1150] = 2. * x[481];
	v[1] = sporttournament36_pd[1150] * x[483];
	v[0] += v[1];
	sporttournament36_pd[1151] = 2. * x[481];
	v[1] = sporttournament36_pd[1151] * x[484];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1152] = 2. * x[483];
	v[2] = sporttournament36_pd[1152] * x[560];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1153] = 2. * x[484];
	v[1] = sporttournament36_pd[1153] * x[587];
	v[0] += v[1];
	sporttournament36_pd[1154] = 2. * x[485];
	v[1] = sporttournament36_pd[1154] * x[505];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1155] = 2. * x[486];
	v[2] = sporttournament36_pd[1155] * x[487];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1156] = 2. * x[487];
	v[1] = sporttournament36_pd[1156] * x[505];
	v[0] += v[1];
	sporttournament36_pd[1157] = 2. * x[487];
	v[1] = sporttournament36_pd[1157] * x[613];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1158] = 2. * x[490];
	v[2] = sporttournament36_pd[1158] * x[606];
	v[0] += v[2];
	sporttournament36_pd[1159] = 2. * x[493];
	v[2] = sporttournament36_pd[1159] * x[594];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1160] = 2. * x[494];
	v[1] = sporttournament36_pd[1160] * x[569];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1161] = 2. * x[496];
	v[2] = sporttournament36_pd[1161] * x[519];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1162] = 2. * x[497];
	v[1] = sporttournament36_pd[1162] * x[605];
	v[0] += v[1];
	sporttournament36_pd[1163] = 2. * x[498];
	v[1] = sporttournament36_pd[1163] * x[529];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1164] = 2. * x[499];
	v[2] = sporttournament36_pd[1164] * x[610];
	v[0] += v[2];
	sporttournament36_pd[1165] = 2. * x[501];
	v[2] = sporttournament36_pd[1165] * x[590];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1166] = 2. * x[502];
	v[1] = sporttournament36_pd[1166] * x[578];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1167] = 2. * x[507];
	v[2] = sporttournament36_pd[1167] * x[620];
	v[0] += v[2];
	sporttournament36_pd[1168] = 2. * x[509];
	v[2] = sporttournament36_pd[1168] * x[540];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1169] = 2. * x[510];
	v[1] = sporttournament36_pd[1169] * x[616];
	v[0] += v[1];
	sporttournament36_pd[1170] = 2. * x[513];
	v[1] = sporttournament36_pd[1170] * x[585];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1171] = 2. * x[516];
	v[2] = sporttournament36_pd[1171] * x[548];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1172] = 2. * x[518];
	v[1] = sporttournament36_pd[1172] * x[519];
	v[0] += v[1];
	sporttournament36_pd[1173] = 2. * x[519];
	v[1] = sporttournament36_pd[1173] * x[520];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1174] = 2. * x[520];
	v[2] = sporttournament36_pd[1174] * x[625];
	v[0] += v[2];
	sporttournament36_pd[1175] = 2. * x[523];
	v[2] = sporttournament36_pd[1175] * x[532];
	v[0] += v[2];
	sporttournament36_pd[1176] = 2. * x[524];
	v[2] = sporttournament36_pd[1176] * x[544];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1177] = 2. * x[526];
	v[1] = sporttournament36_pd[1177] * x[617];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1178] = 2. * x[529];
	v[2] = sporttournament36_pd[1178] * x[593];
	v[0] += v[2];
	sporttournament36_pd[1179] = 2. * x[532];
	v[2] = sporttournament36_pd[1179] * x[533];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1180] = 2. * x[535];
	v[1] = sporttournament36_pd[1180] * x[627];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1181] = 2. * x[536];
	v[2] = sporttournament36_pd[1181] * x[612];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1182] = 2. * x[537];
	v[1] = sporttournament36_pd[1182] * x[612];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1183] = 2. * x[538];
	v[2] = sporttournament36_pd[1183] * x[603];
	v[0] += v[2];
	sporttournament36_pd[1184] = 2. * x[542];
	v[2] = sporttournament36_pd[1184] * x[550];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1185] = 2. * x[545];
	v[1] = sporttournament36_pd[1185] * x[559];
	v[0] += v[1];
	sporttournament36_pd[1186] = 2. * x[545];
	v[1] = sporttournament36_pd[1186] * x[623];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1187] = 2. * x[546];
	v[2] = sporttournament36_pd[1187] * x[581];
	v[0] += v[2];
	sporttournament36_pd[1188] = 2. * x[546];
	v[2] = sporttournament36_pd[1188] * x[608];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1189] = 2. * x[548];
	v[1] = sporttournament36_pd[1189] * x[617];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1190] = 2. * x[549];
	v[2] = sporttournament36_pd[1190] * x[609];
	v[0] += v[2];
	sporttournament36_pd[1191] = 2. * x[550];
	v[2] = sporttournament36_pd[1191] * x[616];
	v[0] += v[2];
	sporttournament36_pd[1192] = 2. * x[551];
	v[2] = sporttournament36_pd[1192] * x[602];
	v[0] += v[2];
	sporttournament36_pd[1193] = 2. * x[554];
	v[2] = sporttournament36_pd[1193] * x[555];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1194] = 2. * x[555];
	v[1] = sporttournament36_pd[1194] * x[613];
	v[0] += v[1];
	sporttournament36_pd[1195] = 2. * x[556];
	v[1] = sporttournament36_pd[1195] * x[557];
	v[0] += v[1];
	sporttournament36_pd[1196] = 2. * x[556];
	v[1] = sporttournament36_pd[1196] * x[558];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1197] = 2. * x[557];
	v[2] = sporttournament36_pd[1197] * x[597];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1198] = 2. * x[559];
	v[1] = sporttournament36_pd[1198] * x[560];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1199] = 2. * x[559];
	v[2] = sporttournament36_pd[1199] * x[562];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1200] = 2. * x[560];
	v[1] = sporttournament36_pd[1200] * x[607];
	v[0] += v[1];
	sporttournament36_pd[1201] = 2. * x[561];
	v[1] = sporttournament36_pd[1201] * x[562];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1202] = 2. * x[565];
	v[2] = sporttournament36_pd[1202] * x[618];
	v[0] += v[2];
	sporttournament36_pd[1203] = 2. * x[567];
	v[2] = sporttournament36_pd[1203] * x[590];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1204] = 2. * x[568];
	v[1] = sporttournament36_pd[1204] * x[601];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1205] = 2. * x[569];
	v[2] = sporttournament36_pd[1205] * x[611];
	v[0] += v[2];
	sporttournament36_pd[1206] = 2. * x[570];
	v[2] = sporttournament36_pd[1206] * x[571];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1207] = 2. * x[570];
	v[1] = sporttournament36_pd[1207] * x[572];
	v[0] += v[1];
	sporttournament36_pd[1208] = 2. * x[572];
	v[1] = sporttournament36_pd[1208] * x[573];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1209] = 2. * x[575];
	v[2] = sporttournament36_pd[1209] * x[615];
	v[0] += v[2];
	sporttournament36_pd[1210] = 2. * x[577];
	v[2] = sporttournament36_pd[1210] * x[585];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1211] = 2. * x[579];
	v[1] = sporttournament36_pd[1211] * x[580];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1212] = 2. * x[579];
	v[2] = sporttournament36_pd[1212] * x[581];
	v[0] += v[2];
	sporttournament36_pd[1213] = 2. * x[581];
	v[2] = sporttournament36_pd[1213] * x[582];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1214] = 2. * x[584];
	v[1] = sporttournament36_pd[1214] * x[620];
	v[0] += v[1];
	sporttournament36_pd[1215] = 2. * x[586];
	v[1] = sporttournament36_pd[1215] * x[587];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1216] = 2. * x[588];
	v[2] = sporttournament36_pd[1216] * x[625];
	v[0] += v[2];
	sporttournament36_pd[1217] = 2. * x[592];
	v[2] = sporttournament36_pd[1217] * x[593];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1218] = 2. * x[599];
	v[1] = sporttournament36_pd[1218] * x[605];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1219] = 2. * x[614];
	v[2] = sporttournament36_pd[1219] * x[615];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1220] = 2. * x[619];
	v[1] = sporttournament36_pd[1220] * x[620];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament36_pd[1221] = 2. * x[621];
	v[2] = sporttournament36_pd[1221] * x[622];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament36_pd[1222] = 2. * x[622];
	v[1] = sporttournament36_pd[1222] * x[629];
	v[0] += v[1];
	sporttournament36_pd[1223] = 2. * x[624];
	v[1] = sporttournament36_pd[1223] * x[625];
	v[2] = -v[1];
	v[0] += v[2];
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
	t1 += -2.*x[16];
	t1 += -4.*x[17];
	t1 += -2.*x[18];
	t1 += -2.*x[19];
	t1 += -2.*x[20];
	t1 += -4.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += -2.*x[24];
	t1 += -2.*x[25];
	t1 += 2.*x[26];
	t1 += -4.*x[27];
	t1 += -2.*x[28];
	t1 += -2.*x[29];
	t1 += -2.*x[30];
	t1 += -2.*x[31];
	t1 += -2.*x[32];
	t1 += 2.*x[33];
	t1 += -2.*x[34];
	t1 += -2.*x[35];
	t1 += 2.*x[36];
	t1 += -4.*x[37];
	t1 += -2.*x[38];
	t1 += -2.*x[39];
	t1 += -2.*x[40];
	t1 += -2.*x[41];
	t1 += -2.*x[42];
	t1 += -2.*x[43];
	t1 += 2.*x[44];
	t1 += 2.*x[45];
	t1 += -4.*x[46];
	t1 += -2.*x[47];
	t1 += -2.*x[48];
	t1 += -4.*x[49];
	t1 += -4.*x[50];
	t1 += -2.*x[51];
	t1 += -2.*x[52];
	t1 += -4.*x[53];
	t1 += -2.*x[54];
	t1 += 2.*x[55];
	t1 += 4.*x[56];
	t1 += -4.*x[57];
	t1 += -2.*x[58];
	t1 += -2.*x[59];
	t1 += -2.*x[60];
	t1 += -2.*x[61];
	t1 += -2.*x[62];
	t1 += -4.*x[63];
	t1 += -4.*x[64];
	t1 += -2.*x[65];
	t1 += -2.*x[66];
	t1 += -4.*x[67];
	t1 += -2.*x[68];
	t1 += 2.*x[69];
	t1 += -4.*x[70];
	t1 += -2.*x[71];
	t1 += -4.*x[72];
	t1 += -2.*x[73];
	t1 += 4.*x[74];
	t1 += 2.*x[75];
	t1 += -2.*x[76];
	t1 += 4.*x[77];
	t1 += -4.*x[78];
	t1 += -2.*x[79];
	t1 += -2.*x[80];
	t1 += 2.*x[81];
	t1 += -2.*x[82];
	t1 += -4.*x[83];
	t1 += -2.*x[84];
	t1 += 2.*x[85];
	t1 += -2.*x[86];
	t1 += -2.*x[87];
	t1 += -4.*x[88];
	t1 += -4.*x[89];
	t1 += -4.*x[90];
	t1 += -4.*x[91];
	t1 += -2.*x[92];
	t1 += -2.*x[93];
	t1 += 2.*x[94];
	t1 += -2.*x[95];
	t1 += -2.*x[96];
	t1 += 4.*x[97];
	t1 += -4.*x[98];
	t1 += 2.*x[99];
	t1 += -2.*x[100];
	t1 += -2.*x[101];
	t1 += -4.*x[102];
	t1 += -2.*x[103];
	t1 += 2.*x[104];
	t1 += -2.*x[105];
	t1 += -2.*x[106];
	t1 += -2.*x[107];
	t1 += 2.*x[108];
	t1 += -2.*x[109];
	t1 += -2.*x[110];
	t1 += -4.*x[111];
	t1 += -4.*x[112];
	t1 += -4.*x[113];
	t1 += -4.*x[114];
	t1 += -2.*x[115];
	t1 += 2.*x[116];
	t1 += 2.*x[117];
	t1 += 2.*x[118];
	t1 += -2.*x[119];
	t1 += -2.*x[120];
	t1 += 4.*x[121];
	t1 += -4.*x[122];
	t1 += 2.*x[123];
	t1 += -2.*x[124];
	t1 += -2.*x[125];
	t1 += -2.*x[126];
	t1 += -2.*x[127];
	t1 += -2.*x[128];
	t1 += 2.*x[129];
	t1 += -2.*x[130];
	t1 += -2.*x[131];
	t1 += -4.*x[132];
	t1 += -4.*x[133];
	t1 += -4.*x[134];
	t1 += -4.*x[135];
	t1 += -2.*x[136];
	t1 += -4.*x[137];
	t1 += -4.*x[138];
	t1 += -4.*x[139];
	t1 += -2.*x[140];
	t1 += 2.*x[141];
	t1 += 2.*x[142];
	t1 += 2.*x[143];
	t1 += -4.*x[144];
	t1 += 4.*x[145];
	t1 += 2.*x[146];
	t1 += 2.*x[147];
	t1 += -2.*x[148];
	t1 += -2.*x[149];
	t1 += 4.*x[150];
	t1 += 2.*x[151];
	t1 += -2.*x[152];
	t1 += -4.*x[153];
	t1 += -2.*x[154];
	t1 += -2.*x[155];
	t1 += -2.*x[156];
	t1 += -4.*x[157];
	t1 += -2.*x[158];
	t1 += -2.*x[159];
	t1 += 2.*x[160];
	t1 += -4.*x[161];
	t1 += -2.*x[162];
	t1 += -4.*x[163];
	t1 += -4.*x[164];
	t1 += 2.*x[165];
	t1 += -2.*x[166];
	t1 += -4.*x[167];
	t1 += 2.*x[168];
	t1 += -4.*x[169];
	t1 += -2.*x[170];
	t1 += -2.*x[171];
	t1 += 2.*x[172];
	t1 += 2.*x[173];
	t1 += -4.*x[174];
	t1 += -2.*x[175];
	t1 += -2.*x[176];
	t1 += 2.*x[177];
	t1 += -4.*x[178];
	t1 += 2.*x[179];
	t1 += 2.*x[180];
	t1 += -2.*x[181];
	t1 += -2.*x[182];
	t1 += 2.*x[183];
	t1 += -2.*x[184];
	t1 += -2.*x[185];
	t1 += 2.*x[186];
	t1 += 2.*x[187];
	t1 += -4.*x[188];
	t1 += -4.*x[189];
	t1 += -4.*x[190];
	t1 += -4.*x[191];
	t1 += -4.*x[192];
	t1 += -4.*x[193];
	t1 += 2.*x[194];
	t1 += -2.*x[195];
	t1 += -4.*x[196];
	t1 += -4.*x[197];
	t1 += -2.*x[198];
	t1 += -2.*x[199];
	t1 += -2.*x[200];
	t1 += -2.*x[201];
	t1 += -4.*x[202];
	t1 += -2.*x[203];
	t1 += -2.*x[204];
	t1 += 2.*x[205];
	t1 += -4.*x[206];
	t1 += 2.*x[207];
	t1 += 2.*x[208];
	t1 += -2.*x[209];
	t1 += -2.*x[210];
	t1 += -4.*x[211];
	t1 += -2.*x[212];
	t1 += -2.*x[213];
	t1 += -2.*x[214];
	t1 += 2.*x[215];
	t1 += 2.*x[216];
	t1 += -4.*x[217];
	t1 += -2.*x[218];
	t1 += -4.*x[219];
	t1 += -2.*x[220];
	t1 += -4.*x[221];
	t1 += -4.*x[222];
	t1 += -2.*x[223];
	t1 += -4.*x[224];
	t1 += 2.*x[225];
	t1 += 2.*x[226];
	t1 += -2.*x[227];
	t1 += -4.*x[228];
	t1 += -2.*x[229];
	t1 += -2.*x[230];
	t1 += -2.*x[231];
	t1 += -4.*x[232];
	t1 += -2.*x[233];
	t1 += -4.*x[234];
	t1 += -2.*x[235];
	t1 += 2.*x[236];
	t1 += -4.*x[237];
	t1 += 2.*x[238];
	t1 += 2.*x[239];
	t1 += -2.*x[240];
	t1 += 2.*x[241];
	t1 += -2.*x[242];
	t1 += -4.*x[243];
	t1 += -2.*x[244];
	t1 += -2.*x[245];
	t1 += 2.*x[246];
	t1 += 4.*x[247];
	t1 += -2.*x[248];
	t1 += -4.*x[249];
	t1 += -2.*x[250];
	t1 += -4.*x[251];
	t1 += -2.*x[252];
	t1 += -4.*x[253];
	t1 += -4.*x[254];
	t1 += -4.*x[255];
	t1 += -4.*x[256];
	t1 += 2.*x[257];
	t1 += 2.*x[258];
	t1 += -2.*x[259];
	t1 += -2.*x[260];
	t1 += -4.*x[261];
	t1 += 2.*x[262];
	t1 += -4.*x[263];
	t1 += -4.*x[264];
	t1 += -2.*x[265];
	t1 += -4.*x[266];
	t1 += 2.*x[267];
	t1 += -4.*x[268];
	t1 += 2.*x[269];
	t1 += 2.*x[270];
	t1 += 2.*x[271];
	t1 += -4.*x[272];
	t1 += 2.*x[273];
	t1 += -4.*x[274];
	t1 += 2.*x[275];
	t1 += -2.*x[276];
	t1 += -2.*x[277];
	t1 += -2.*x[278];
	t1 += -2.*x[279];
	t1 += 2.*x[280];
	t1 += 4.*x[281];
	t1 += -2.*x[282];
	t1 += -4.*x[283];
	t1 += -2.*x[284];
	t1 += -4.*x[285];
	t1 += -2.*x[286];
	t1 += -4.*x[287];
	t1 += -2.*x[288];
	t1 += 2.*x[289];
	t1 += -2.*x[290];
	t1 += -2.*x[291];
	t1 += -2.*x[292];
	t1 += -4.*x[293];
	t1 += -4.*x[294];
	t1 += -4.*x[295];
	t1 += -2.*x[296];
	t1 += 2.*x[297];
	t1 += -4.*x[298];
	t1 += -2.*x[299];
	t1 += -4.*x[300];
	t1 += -2.*x[301];
	t1 += -4.*x[302];
	t1 += -4.*x[303];
	t1 += 2.*x[304];
	t1 += -4.*x[305];
	t1 += 2.*x[306];
	t1 += 2.*x[307];
	t1 += 2.*x[308];
	t1 += -4.*x[309];
	t1 += 2.*x[310];
	t1 += -2.*x[311];
	t1 += 2.*x[312];
	t1 += -4.*x[313];
	t1 += 2.*x[314];
	t1 += -2.*x[315];
	t1 += -2.*x[316];
	t1 += -2.*x[317];
	t1 += 4.*x[318];
	t1 += -2.*x[319];
	t1 += 4.*x[320];
	t1 += -2.*x[321];
	t1 += 2.*x[322];
	t1 += -4.*x[323];
	t1 += -2.*x[324];
	t1 += -4.*x[325];
	t1 += -2.*x[326];
	t1 += -4.*x[327];
	t1 += -4.*x[328];
	t1 += -4.*x[329];
	t1 += -4.*x[330];
	t1 += -4.*x[331];
	t1 += -2.*x[332];
	t1 += -2.*x[333];
	t1 += -2.*x[334];
	t1 += -2.*x[335];
	t1 += -4.*x[336];
	t1 += -2.*x[337];
	t1 += -2.*x[338];
	t1 += 2.*x[339];
	t1 += -4.*x[340];
	t1 += -2.*x[341];
	t1 += -2.*x[342];
	t1 += -4.*x[343];
	t1 += -2.*x[344];
	t1 += -4.*x[345];
	t1 += 2.*x[346];
	t1 += -4.*x[347];
	t1 += 2.*x[348];
	t1 += -4.*x[349];
	t1 += 2.*x[350];
	t1 += 2.*x[351];
	t1 += -4.*x[352];
	t1 += 2.*x[353];
	t1 += -2.*x[354];
	t1 += 2.*x[355];
	t1 += -4.*x[356];
	t1 += 2.*x[357];
	t1 += -2.*x[358];
	t1 += -2.*x[359];
	t1 += 2.*x[360];
	t1 += -2.*x[361];
	t1 += 2.*x[362];
	t1 += -2.*x[363];
	t1 += 2.*x[364];
	t1 += -2.*x[365];
	t1 += -2.*x[366];
	t1 += 4.*x[367];
	t1 += -4.*x[368];
	t1 += -2.*x[369];
	t1 += -2.*x[370];
	t1 += -2.*x[371];
	t1 += -2.*x[372];
	t1 += -4.*x[373];
	t1 += -4.*x[374];
	t1 += 2.*x[375];
	t1 += -4.*x[376];
	t1 += -2.*x[377];
	t1 += -4.*x[378];
	t1 += -2.*x[379];
	t1 += -2.*x[380];
	t1 += -2.*x[381];
	t1 += -4.*x[382];
	t1 += 2.*x[383];
	t1 += x[630];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[625] = -sporttournament36_pd[1223];
	J[624] = -x[625]*2.;
	J[629] = sporttournament36_pd[1222];
	J[622] = x[629]*2.;
	J[622] -= sporttournament36_pd[1221];
	J[621] = -x[622]*2.;
	J[620] = -sporttournament36_pd[1220];
	J[619] = -x[620]*2.;
	J[615] = -sporttournament36_pd[1219];
	J[614] = -x[615]*2.;
	J[605] = -sporttournament36_pd[1218];
	J[599] = -x[605]*2.;
	J[593] = -sporttournament36_pd[1217];
	J[592] = -x[593]*2.;
	J[625] += sporttournament36_pd[1216];
	J[588] = x[625]*2.;
	J[587] = -sporttournament36_pd[1215];
	J[586] = -x[587]*2.;
	J[620] += sporttournament36_pd[1214];
	J[584] = x[620]*2.;
	J[582] = -sporttournament36_pd[1213];
	J[581] = -x[582]*2.;
	J[581] += sporttournament36_pd[1212];
	J[579] = x[581]*2.;
	J[580] = -sporttournament36_pd[1211];
	J[579] -= x[580]*2.;
	J[585] = -sporttournament36_pd[1210];
	J[577] = -x[585]*2.;
	J[615] += sporttournament36_pd[1209];
	J[575] = x[615]*2.;
	J[573] = -sporttournament36_pd[1208];
	J[572] = -x[573]*2.;
	J[572] += sporttournament36_pd[1207];
	J[570] = x[572]*2.;
	J[571] = -sporttournament36_pd[1206];
	J[570] -= x[571]*2.;
	J[611] = sporttournament36_pd[1205];
	J[569] = x[611]*2.;
	J[601] = -sporttournament36_pd[1204];
	J[568] = -x[601]*2.;
	J[590] = -sporttournament36_pd[1203];
	J[567] = -x[590]*2.;
	J[618] = sporttournament36_pd[1202];
	J[565] = x[618]*2.;
	J[562] = -sporttournament36_pd[1201];
	J[561] = -x[562]*2.;
	J[607] = sporttournament36_pd[1200];
	J[560] = x[607]*2.;
	J[562] -= sporttournament36_pd[1199];
	J[559] = -x[562]*2.;
	J[560] -= sporttournament36_pd[1198];
	J[559] -= x[560]*2.;
	J[597] = -sporttournament36_pd[1197];
	J[557] = -x[597]*2.;
	J[558] = -sporttournament36_pd[1196];
	J[556] = -x[558]*2.;
	J[557] += sporttournament36_pd[1195];
	J[556] += x[557]*2.;
	J[613] = sporttournament36_pd[1194];
	J[555] = x[613]*2.;
	J[555] -= sporttournament36_pd[1193];
	J[554] = -x[555]*2.;
	J[602] = sporttournament36_pd[1192];
	J[551] = x[602]*2.;
	J[616] = sporttournament36_pd[1191];
	J[550] = x[616]*2.;
	J[609] = sporttournament36_pd[1190];
	J[549] = x[609]*2.;
	J[617] = -sporttournament36_pd[1189];
	J[548] = -x[617]*2.;
	J[608] = -sporttournament36_pd[1188];
	J[546] = -x[608]*2.;
	J[581] += sporttournament36_pd[1187];
	J[546] += x[581]*2.;
	J[623] = -sporttournament36_pd[1186];
	J[545] = -x[623]*2.;
	J[559] += sporttournament36_pd[1185];
	J[545] += x[559]*2.;
	J[550] -= sporttournament36_pd[1184];
	J[542] = -x[550]*2.;
	J[603] = sporttournament36_pd[1183];
	J[538] = x[603]*2.;
	J[612] = -sporttournament36_pd[1182];
	J[537] = -x[612]*2.;
	J[612] -= sporttournament36_pd[1181];
	J[536] = -x[612]*2.;
	J[627] = -sporttournament36_pd[1180];
	J[535] = -x[627]*2.;
	J[533] = -sporttournament36_pd[1179];
	J[532] = -x[533]*2.;
	J[593] += sporttournament36_pd[1178];
	J[529] = x[593]*2.;
	J[617] -= sporttournament36_pd[1177];
	J[526] = -x[617]*2.;
	J[544] = -sporttournament36_pd[1176];
	J[524] = -x[544]*2.;
	J[532] += sporttournament36_pd[1175];
	J[523] = x[532]*2.;
	J[625] += sporttournament36_pd[1174];
	J[520] = x[625]*2.;
	J[520] -= sporttournament36_pd[1173];
	J[519] = -x[520]*2.;
	J[519] += sporttournament36_pd[1172];
	J[518] = x[519]*2.;
	J[548] -= sporttournament36_pd[1171];
	J[516] = -x[548]*2.;
	J[585] -= sporttournament36_pd[1170];
	J[513] = -x[585]*2.;
	J[616] += sporttournament36_pd[1169];
	J[510] = x[616]*2.;
	J[540] = -sporttournament36_pd[1168];
	J[509] = -x[540]*2.;
	J[620] += sporttournament36_pd[1167];
	J[507] = x[620]*2.;
	J[578] = -sporttournament36_pd[1166];
	J[502] = -x[578]*2.;
	J[590] -= sporttournament36_pd[1165];
	J[501] = -x[590]*2.;
	J[610] = sporttournament36_pd[1164];
	J[499] = x[610]*2.;
	J[529] -= sporttournament36_pd[1163];
	J[498] = -x[529]*2.;
	J[605] += sporttournament36_pd[1162];
	J[497] = x[605]*2.;
	J[519] -= sporttournament36_pd[1161];
	J[496] = -x[519]*2.;
	J[569] -= sporttournament36_pd[1160];
	J[494] = -x[569]*2.;
	J[594] = -sporttournament36_pd[1159];
	J[493] = -x[594]*2.;
	J[606] = sporttournament36_pd[1158];
	J[490] = x[606]*2.;
	J[613] -= sporttournament36_pd[1157];
	J[487] = -x[613]*2.;
	J[505] = sporttournament36_pd[1156];
	J[487] += x[505]*2.;
	J[487] -= sporttournament36_pd[1155];
	J[486] = -x[487]*2.;
	J[505] -= sporttournament36_pd[1154];
	J[485] = -x[505]*2.;
	J[587] += sporttournament36_pd[1153];
	J[484] = x[587]*2.;
	J[560] -= sporttournament36_pd[1152];
	J[483] = -x[560]*2.;
	J[484] -= sporttournament36_pd[1151];
	J[481] = -x[484]*2.;
	J[483] += sporttournament36_pd[1150];
	J[481] += x[483]*2.;
	J[482] = -sporttournament36_pd[1149];
	J[481] -= x[482]*2.;
	J[597] -= sporttournament36_pd[1148];
	J[480] = -x[597]*2.;
	J[492] = -sporttournament36_pd[1147];
	J[479] = -x[492]*2.;
	J[499] -= sporttournament36_pd[1146];
	J[478] = -x[499]*2.;
	J[478] -= sporttournament36_pd[1145];
	J[477] = -x[478]*2.;
	J[508] = -sporttournament36_pd[1144];
	J[476] = -x[508]*2.;
	J[618] -= sporttournament36_pd[1143];
	J[474] = -x[618]*2.;
	J[517] = sporttournament36_pd[1142];
	J[474] += x[517]*2.;
	J[474] -= sporttournament36_pd[1141];
	J[473] = -x[474]*2.;
	J[517] -= sporttournament36_pd[1140];
	J[472] = -x[517]*2.;
	J[580] += sporttournament36_pd[1139];
	J[470] = x[580]*2.;
	J[551] -= sporttournament36_pd[1138];
	J[469] = -x[551]*2.;
	J[470] -= sporttournament36_pd[1137];
	J[467] = -x[470]*2.;
	J[469] += sporttournament36_pd[1136];
	J[467] += x[469]*2.;
	J[468] = -sporttournament36_pd[1135];
	J[467] -= x[468]*2.;
	J[601] -= sporttournament36_pd[1134];
	J[466] = -x[601]*2.;
	J[466] -= sporttournament36_pd[1133];
	J[465] = -x[466]*2.;
	J[576] = -sporttournament36_pd[1132];
	J[464] = -x[576]*2.;
	J[491] = -sporttournament36_pd[1131];
	J[463] = -x[491]*2.;
	J[464] += sporttournament36_pd[1130];
	J[463] += x[464]*2.;
	J[475] = -sporttournament36_pd[1129];
	J[462] = -x[475]*2.;
	J[527] = -sporttournament36_pd[1128];
	J[460] = -x[527]*2.;
	J[571] += sporttournament36_pd[1127];
	J[457] = x[571]*2.;
	J[561] -= sporttournament36_pd[1126];
	J[456] = -x[561]*2.;
	J[457] -= sporttournament36_pd[1125];
	J[456] -= x[457]*2.;
	J[457] -= sporttournament36_pd[1124];
	J[453] = -x[457]*2.;
	J[455] = sporttournament36_pd[1123];
	J[453] += x[455]*2.;
	J[454] = -sporttournament36_pd[1122];
	J[453] -= x[454]*2.;
	J[566] = -sporttournament36_pd[1121];
	J[452] = -x[566]*2.;
	J[500] = -sporttournament36_pd[1120];
	J[451] = -x[500]*2.;
	J[452] += sporttournament36_pd[1119];
	J[451] += x[452]*2.;
	J[488] = -sporttournament36_pd[1118];
	J[450] = -x[488]*2.;
	J[473] += sporttournament36_pd[1117];
	J[449] = x[473]*2.;
	J[554] += sporttournament36_pd[1116];
	J[448] = x[554]*2.;
	J[623] -= sporttournament36_pd[1115];
	J[446] = -x[623]*2.;
	J[570] += sporttournament36_pd[1114];
	J[446] += x[570]*2.;
	J[446] -= sporttournament36_pd[1113];
	J[445] = -x[446]*2.;
	J[562] += sporttournament36_pd[1112];
	J[444] = x[562]*2.;
	J[570] -= sporttournament36_pd[1111];
	J[443] = -x[570]*2.;
	J[444] -= sporttournament36_pd[1110];
	J[443] -= x[444]*2.;
	J[444] -= sporttournament36_pd[1109];
	J[441] = -x[444]*2.;
	J[442] = -sporttournament36_pd[1108];
	J[441] -= x[442]*2.;
	J[512] = -sporttournament36_pd[1107];
	J[440] = -x[512]*2.;
	J[486] += sporttournament36_pd[1106];
	J[438] = x[486]*2.;
	J[627] -= sporttournament36_pd[1105];
	J[435] = -x[627]*2.;
	J[579] += sporttournament36_pd[1104];
	J[435] += x[579]*2.;
	J[579] -= sporttournament36_pd[1103];
	J[434] = -x[579]*2.;
	J[557] -= sporttournament36_pd[1102];
	J[433] = -x[557]*2.;
	J[522] = -sporttournament36_pd[1101];
	J[432] = -x[522]*2.;
	J[476] += sporttournament36_pd[1100];
	J[431] = x[476]*2.;
	J[462] += sporttournament36_pd[1099];
	J[431] += x[462]*2.;
	J[431] -= sporttournament36_pd[1098];
	J[430] = -x[431]*2.;
	J[520] -= sporttournament36_pd[1097];
	J[429] = -x[520]*2.;
	J[476] -= sporttournament36_pd[1096];
	J[428] = -x[476]*2.;
	J[429] += sporttournament36_pd[1095];
	J[428] += x[429]*2.;
	J[592] -= sporttournament36_pd[1094];
	J[427] = -x[592]*2.;
	J[588] -= sporttournament36_pd[1093];
	J[427] -= x[588]*2.;
	J[518] += sporttournament36_pd[1092];
	J[427] += x[518]*2.;
	J[427] += sporttournament36_pd[1091];
	J[426] = x[427]*2.;
	J[552] = -sporttournament36_pd[1090];
	J[424] = -x[552]*2.;
	J[551] -= sporttournament36_pd[1089];
	J[424] -= x[551]*2.;
	J[586] -= sporttournament36_pd[1088];
	J[423] = -x[586]*2.;
	J[515] = sporttournament36_pd[1087];
	J[423] += x[515]*2.;
	J[424] += sporttournament36_pd[1086];
	J[423] += x[424]*2.;
	J[568] -= sporttournament36_pd[1085];
	J[422] = -x[568]*2.;
	J[543] = -sporttournament36_pd[1084];
	J[422] -= x[543]*2.;
	J[490] -= sporttournament36_pd[1083];
	J[421] = -x[490]*2.;
	J[489] = sporttournament36_pd[1082];
	J[421] += x[489]*2.;
	J[450] += sporttournament36_pd[1081];
	J[421] += x[450]*2.;
	J[464] += sporttournament36_pd[1080];
	J[420] = x[464]*2.;
	J[421] -= sporttournament36_pd[1079];
	J[420] -= x[421]*2.;
	J[508] -= sporttournament36_pd[1078];
	J[419] = -x[508]*2.;
	J[507] -= sporttournament36_pd[1077];
	J[419] -= x[507]*2.;
	J[541] = sporttournament36_pd[1076];
	J[418] = x[541]*2.;
	J[489] -= sporttournament36_pd[1075];
	J[418] -= x[489]*2.;
	J[419] += sporttournament36_pd[1074];
	J[418] += x[419]*2.;
	J[506] = -sporttournament36_pd[1073];
	J[416] = -x[506]*2.;
	J[414] = sporttournament36_pd[1072];
	J[413] = x[414]*2.;
	J[499] -= sporttournament36_pd[1071];
	J[412] = -x[499]*2.;
	J[498] += sporttournament36_pd[1070];
	J[412] += x[498]*2.;
	J[452] += sporttournament36_pd[1069];
	J[411] = x[452]*2.;
	J[412] -= sporttournament36_pd[1068];
	J[411] -= x[412]*2.;
	J[497] -= sporttournament36_pd[1067];
	J[410] = -x[497]*2.;
	J[426] += sporttournament36_pd[1066];
	J[409] = x[426]*2.;
	J[530] = sporttournament36_pd[1065];
	J[408] = x[530]*2.;
	J[498] -= sporttournament36_pd[1064];
	J[408] -= x[498]*2.;
	J[410] += sporttournament36_pd[1063];
	J[408] += x[410]*2.;
	J[409] -= sporttournament36_pd[1062];
	J[408] -= x[409]*2.;
	J[472] += sporttournament36_pd[1061];
	J[407] = x[472]*2.;
	J[518] -= sporttournament36_pd[1060];
	J[406] = -x[518]*2.;
	J[407] -= sporttournament36_pd[1059];
	J[406] -= x[407]*2.;
	J[471] = sporttournament36_pd[1058];
	J[404] = x[471]*2.;
	J[403] = -sporttournament36_pd[1057];
	J[402] = -x[403]*2.;
	J[475] -= sporttournament36_pd[1056];
	J[401] = -x[475]*2.;
	J[509] -= sporttournament36_pd[1055];
	J[400] = -x[509]*2.;
	J[401] -= sporttournament36_pd[1054];
	J[400] -= x[401]*2.;
	J[485] += sporttournament36_pd[1053];
	J[399] = x[485]*2.;
	J[528] = -sporttournament36_pd[1052];
	J[398] = -x[528]*2.;
	J[399] -= sporttournament36_pd[1051];
	J[398] -= x[399]*2.;
	J[458] = sporttournament36_pd[1050];
	J[397] = x[458]*2.;
	J[539] = -sporttournament36_pd[1049];
	J[395] = -x[539]*2.;
	J[461] = sporttournament36_pd[1048];
	J[395] += x[461]*2.;
	J[396] = -sporttournament36_pd[1047];
	J[395] -= x[396]*2.;
	J[445] += sporttournament36_pd[1046];
	J[394] = x[445]*2.;
	J[502] += sporttournament36_pd[1045];
	J[393] = x[502]*2.;
	J[468] += sporttournament36_pd[1044];
	J[393] += x[468]*2.;
	J[503] = sporttournament36_pd[1043];
	J[392] = x[503]*2.;
	J[393] -= sporttournament36_pd[1042];
	J[392] -= x[393]*2.;
	J[514] = sporttournament36_pd[1041];
	J[390] = x[514]*2.;
	J[454] += sporttournament36_pd[1040];
	J[390] += x[454]*2.;
	J[495] = sporttournament36_pd[1039];
	J[389] = x[495]*2.;
	J[390] -= sporttournament36_pd[1038];
	J[389] -= x[390]*2.;
	J[403] -= sporttournament36_pd[1037];
	J[388] = -x[403]*2.;
	J[388] += sporttournament36_pd[1036];
	J[387] = x[388]*2.;
	J[433] -= sporttournament36_pd[1035];
	J[386] = -x[433]*2.;
	J[478] += sporttournament36_pd[1034];
	J[385] = x[478]*2.;
	J[479] += sporttournament36_pd[1033];
	J[384] = x[479]*2.;
	J[385] -= sporttournament36_pd[1032];
	J[384] -= x[385]*2.;
	J[629] -= sporttournament36_pd[1031];
	J[383] = -x[629]*2. + 2.;
	J[626] = -sporttournament36_pd[1030];
	J[383] -= x[626]*2.;
	J[622] += sporttournament36_pd[1029];
	J[382] = x[622]*2. + -4.;
	J[622] -= sporttournament36_pd[1028];
	J[381] = -x[622]*2. + -2.;
	J[413] += sporttournament36_pd[1027];
	J[380] = x[413]*2. + -2.;
	J[382] += sporttournament36_pd[1026];
	J[380] += x[382]*2.;
	J[413] -= sporttournament36_pd[1025];
	J[379] = -x[413]*2. + -2.;
	J[382] += sporttournament36_pd[1024];
	J[379] += x[382]*2.;
	J[465] += sporttournament36_pd[1023];
	J[378] = x[465]*2. + -4.;
	J[380] += sporttournament36_pd[1022];
	J[378] += x[380]*2.;
	J[567] += sporttournament36_pd[1021];
	J[377] = x[567]*2. + -2.;
	J[378] += sporttournament36_pd[1020];
	J[377] += x[378]*2.;
	J[628] = sporttournament36_pd[1019];
	J[376] = x[628]*2. + -4.;
	J[422] += sporttournament36_pd[1018];
	J[376] += x[422]*2.;
	J[377] += sporttournament36_pd[1017];
	J[376] += x[377]*2.;
	J[532] -= sporttournament36_pd[1016];
	J[375] = -x[532]*2. + 2.;
	J[414] -= sporttournament36_pd[1015];
	J[375] -= x[414]*2.;
	J[377] -= sporttournament36_pd[1014];
	J[375] -= x[377]*2.;
	J[376] += sporttournament36_pd[1013];
	J[374] = x[376]*2. + -4.;
	J[628] += sporttournament36_pd[1012];
	J[373] = x[628]*2. + -4.;
	J[628] -= sporttournament36_pd[1011];
	J[372] = -x[628]*2. + -2.;
	J[374] += sporttournament36_pd[1010];
	J[372] += x[374]*2.;
	J[589] = sporttournament36_pd[1009];
	J[371] = x[589]*2. + -2.;
	J[373] += sporttournament36_pd[1008];
	J[371] += x[373]*2.;
	J[589] -= sporttournament36_pd[1007];
	J[370] = -x[589]*2. + -2.;
	J[373] += sporttournament36_pd[1006];
	J[370] += x[373]*2.;
	J[371] += sporttournament36_pd[1005];
	J[369] = x[371]*2. + -2.;
	J[589] += sporttournament36_pd[1004];
	J[368] = x[589]*2. + -4.;
	J[589] -= sporttournament36_pd[1003];
	J[367] = -x[589]*2. + 4.;
	J[596] = sporttournament36_pd[1002];
	J[366] = x[596]*2. + -2.;
	J[511] = sporttournament36_pd[1001];
	J[366] += x[511]*2.;
	J[368] += sporttournament36_pd[1000];
	J[366] += x[368]*2.;
	J[368] += sporttournament36_pd[999];
	J[365] = x[368]*2. + -2.;
	J[367] -= sporttournament36_pd[998];
	J[365] -= x[367]*2.;
	J[510] -= sporttournament36_pd[997];
	J[364] = -x[510]*2. + 2.;
	J[463] -= sporttournament36_pd[996];
	J[364] -= x[463]*2.;
	J[366] -= sporttournament36_pd[995];
	J[364] -= x[366]*2.;
	J[596] += sporttournament36_pd[994];
	J[363] = x[596]*2. + -2.;
	J[364] += sporttournament36_pd[993];
	J[363] += x[364]*2.;
	J[596] -= sporttournament36_pd[992];
	J[362] = -x[596]*2. + 2.;
	J[530] -= sporttournament36_pd[991];
	J[361] = -x[530]*2. + -2.;
	J[363] += sporttournament36_pd[990];
	J[361] += x[363]*2.;
	J[362] += sporttournament36_pd[989];
	J[361] += x[362]*2.;
	J[462] -= sporttournament36_pd[988];
	J[360] = -x[462]*2. + 2.;
	J[439] = -sporttournament36_pd[987];
	J[360] -= x[439]*2.;
	J[363] -= sporttournament36_pd[986];
	J[360] -= x[363]*2.;
	J[361] += sporttournament36_pd[985];
	J[359] = x[361]*2. + -2.;
	J[359] += sporttournament36_pd[984];
	J[358] = x[359]*2. + -2.;
	J[541] -= sporttournament36_pd[983];
	J[357] = -x[541]*2. + 2.;
	J[359] -= sporttournament36_pd[982];
	J[357] -= x[359]*2.;
	J[624] += sporttournament36_pd[981];
	J[356] = x[624]*2. + -4.;
	J[529] += sporttournament36_pd[980];
	J[356] += x[529]*2.;
	J[358] += sporttournament36_pd[979];
	J[356] += x[358]*2.;
	J[428] -= sporttournament36_pd[978];
	J[355] = -x[428]*2. + 2.;
	J[426] -= sporttournament36_pd[977];
	J[355] -= x[426]*2.;
	J[358] -= sporttournament36_pd[976];
	J[355] -= x[358]*2.;
	J[615] += sporttournament36_pd[975];
	J[354] = x[615]*2. + -2.;
	J[519] += sporttournament36_pd[974];
	J[354] += x[519]*2.;
	J[410] -= sporttournament36_pd[973];
	J[354] -= x[410]*2.;
	J[356] += sporttournament36_pd[972];
	J[354] += x[356]*2.;
	J[615] -= sporttournament36_pd[971];
	J[353] = -x[615]*2. + 2.;
	J[487] += sporttournament36_pd[970];
	J[353] += x[487]*2.;
	J[603] += sporttournament36_pd[969];
	J[352] = x[603]*2. + -4.;
	J[575] += sporttournament36_pd[968];
	J[352] += x[575]*2.;
	J[554] += sporttournament36_pd[967];
	J[352] += x[554]*2.;
	J[496] += sporttournament36_pd[966];
	J[352] += x[496]*2.;
	J[575] -= sporttournament36_pd[965];
	J[351] = -x[575]*2. + 2.;
	J[407] += sporttournament36_pd[964];
	J[351] += x[407]*2.;
	J[603] -= sporttournament36_pd[963];
	J[350] = -x[603]*2. + 2.;
	J[538] += sporttournament36_pd[962];
	J[349] = x[538]*2. + -4.;
	J[437] = sporttournament36_pd[961];
	J[349] += x[437]*2.;
	J[405] = sporttournament36_pd[960];
	J[349] += x[405]*2.;
	J[538] -= sporttournament36_pd[959];
	J[348] = -x[538]*2. + 2.;
	J[537] += sporttournament36_pd[958];
	J[348] += x[537]*2.;
	J[608] += sporttournament36_pd[957];
	J[347] = x[608]*2. + -4.;
	J[349] += sporttournament36_pd[956];
	J[347] += x[349]*2.;
	J[537] -= sporttournament36_pd[955];
	J[346] = -x[537]*2. + 2.;
	J[526] -= sporttournament36_pd[954];
	J[346] -= x[526]*2.;
	J[471] -= sporttournament36_pd[953];
	J[346] -= x[471]*2.;
	J[347] += sporttournament36_pd[952];
	J[346] += x[347]*2.;
	J[608] += sporttournament36_pd[951];
	J[345] = x[608]*2. + -4.;
	J[516] += sporttournament36_pd[950];
	J[345] += x[516]*2.;
	J[623] += sporttournament36_pd[949];
	J[344] = x[623]*2. + -2.;
	J[345] += sporttournament36_pd[948];
	J[344] += x[345]*2.;
	J[546] += sporttournament36_pd[947];
	J[343] = x[546]*2. + -4.;
	J[345] += sporttournament36_pd[946];
	J[343] += x[345]*2.;
	J[591] = -sporttournament36_pd[945];
	J[342] = -x[591]*2. + -2.;
	J[434] += sporttournament36_pd[944];
	J[342] += x[434]*2.;
	J[344] += sporttournament36_pd[943];
	J[342] += x[344]*2.;
	J[623] += sporttournament36_pd[942];
	J[341] = x[623]*2. + -2.;
	J[515] -= sporttournament36_pd[941];
	J[341] -= x[515]*2.;
	J[456] += sporttournament36_pd[940];
	J[340] = x[456]*2. + -4.;
	J[341] += sporttournament36_pd[939];
	J[340] += x[341]*2.;
	J[587] -= sporttournament36_pd[938];
	J[339] = -x[587]*2. + 2.;
	J[390] -= sporttournament36_pd[937];
	J[339] -= x[390]*2.;
	J[341] += sporttournament36_pd[936];
	J[339] += x[341]*2.;
	J[598] = sporttournament36_pd[935];
	J[338] = x[598]*2. + -2.;
	J[559] += sporttournament36_pd[934];
	J[338] += x[559]*2.;
	J[455] -= sporttournament36_pd[933];
	J[338] -= x[455]*2.;
	J[340] += sporttournament36_pd[932];
	J[338] += x[340]*2.;
	J[494] += sporttournament36_pd[931];
	J[337] = x[494]*2. + -2.;
	J[482] += sporttournament36_pd[930];
	J[337] += x[482]*2.;
	J[340] += sporttournament36_pd[929];
	J[337] += x[340]*2.;
	J[403] += sporttournament36_pd[928];
	J[336] = x[403]*2. + -4.;
	J[383] += sporttournament36_pd[927];
	J[336] += x[383]*2.;
	J[383] -= sporttournament36_pd[926];
	J[335] = -x[383]*2. + -2.;
	J[336] += sporttournament36_pd[925];
	J[334] = x[336]*2. + -2.;
	J[335] += sporttournament36_pd[924];
	J[334] += x[335]*2.;
	J[465] -= sporttournament36_pd[923];
	J[333] = -x[465]*2. + -2.;
	J[403] += sporttournament36_pd[922];
	J[333] += x[403]*2.;
	J[577] += sporttournament36_pd[921];
	J[332] = x[577]*2. + -2.;
	J[523] -= sporttournament36_pd[920];
	J[332] -= x[523]*2.;
	J[333] += sporttournament36_pd[919];
	J[332] += x[333]*2.;
	J[414] += sporttournament36_pd[918];
	J[331] = x[414]*2. + -4.;
	J[332] += sporttournament36_pd[917];
	J[331] += x[332]*2.;
	J[331] += sporttournament36_pd[916];
	J[330] = x[331]*2. + -4.;
	J[331] += sporttournament36_pd[915];
	J[329] = x[331]*2. + -4.;
	J[330] += sporttournament36_pd[914];
	J[328] = x[330]*2. + -4.;
	J[330] += sporttournament36_pd[913];
	J[327] = x[330]*2. + -4.;
	J[369] += sporttournament36_pd[912];
	J[326] = x[369]*2. + -2.;
	J[328] += sporttournament36_pd[911];
	J[326] += x[328]*2.;
	J[328] += sporttournament36_pd[910];
	J[325] = x[328]*2. + -4.;
	J[491] -= sporttournament36_pd[909];
	J[324] = -x[491]*2. + -2.;
	J[326] += sporttournament36_pd[908];
	J[324] += x[326]*2.;
	J[477] += sporttournament36_pd[907];
	J[323] = x[477]*2. + -4.;
	J[369] += sporttournament36_pd[906];
	J[323] += x[369]*2.;
	J[479] -= sporttournament36_pd[905];
	J[322] = -x[479]*2. + 2.;
	J[477] -= sporttournament36_pd[904];
	J[322] -= x[477]*2.;
	J[369] -= sporttournament36_pd[903];
	J[322] -= x[369]*2.;
	J[600] = sporttournament36_pd[902];
	J[321] = x[600]*2. + -2.;
	J[521] = sporttournament36_pd[901];
	J[321] += x[521]*2.;
	J[323] += sporttournament36_pd[900];
	J[321] += x[323]*2.;
	J[451] -= sporttournament36_pd[899];
	J[320] = -x[451]*2. + 4.;
	J[321] -= sporttournament36_pd[898];
	J[320] -= x[321]*2.;
	J[600] += sporttournament36_pd[897];
	J[319] = x[600]*2. + -2.;
	J[478] += sporttournament36_pd[896];
	J[319] += x[478]*2.;
	J[431] -= sporttournament36_pd[895];
	J[319] -= x[431]*2.;
	J[600] -= sporttournament36_pd[894];
	J[318] = -x[600]*2. + 4.;
	J[599] -= sporttournament36_pd[893];
	J[318] -= x[599]*2.;
	J[566] += sporttournament36_pd[892];
	J[317] = x[566]*2. + -2.;
	J[541] -= sporttournament36_pd[891];
	J[317] -= x[541]*2.;
	J[319] += sporttournament36_pd[890];
	J[317] += x[319]*2.;
	J[317] += sporttournament36_pd[889];
	J[316] = x[317]*2. + -2.;
	J[450] += sporttournament36_pd[888];
	J[315] = x[450]*2. + -2.;
	J[316] += sporttournament36_pd[887];
	J[315] += x[316]*2.;
	J[530] -= sporttournament36_pd[886];
	J[314] = -x[530]*2. + 2.;
	J[316] -= sporttournament36_pd[885];
	J[314] -= x[316]*2.;
	J[619] += sporttournament36_pd[884];
	J[313] = x[619]*2. + -4.;
	J[540] += sporttournament36_pd[883];
	J[313] += x[540]*2.;
	J[507] += sporttournament36_pd[882];
	J[313] += x[507]*2.;
	J[315] += sporttournament36_pd[881];
	J[313] += x[315]*2.;
	J[418] -= sporttournament36_pd[880];
	J[312] = -x[418]*2. + 2.;
	J[417] = -sporttournament36_pd[879];
	J[312] -= x[417]*2.;
	J[315] -= sporttournament36_pd[878];
	J[312] -= x[315]*2.;
	J[507] -= sporttournament36_pd[877];
	J[311] = -x[507]*2. + -2.;
	J[506] += sporttournament36_pd[876];
	J[311] += x[506]*2.;
	J[461] += sporttournament36_pd[875];
	J[311] += x[461]*2.;
	J[417] += sporttournament36_pd[874];
	J[311] += x[417]*2.;
	J[620] -= sporttournament36_pd[873];
	J[310] = -x[620]*2. + 2.;
	J[474] += sporttournament36_pd[872];
	J[310] += x[474]*2.;
	J[609] += sporttournament36_pd[871];
	J[309] = x[609]*2. + -4.;
	J[584] += sporttournament36_pd[870];
	J[309] += x[584]*2.;
	J[486] += sporttournament36_pd[869];
	J[309] += x[486]*2.;
	J[584] -= sporttournament36_pd[868];
	J[308] = -x[584]*2. + 2.;
	J[554] -= sporttournament36_pd[867];
	J[308] -= x[554]*2.;
	J[399] += sporttournament36_pd[866];
	J[308] += x[399]*2.;
	J[549] -= sporttournament36_pd[865];
	J[307] = -x[549]*2. + 2.;
	J[437] -= sporttournament36_pd[864];
	J[307] -= x[437]*2.;
	J[309] += sporttournament36_pd[863];
	J[307] += x[309]*2.;
	J[609] -= sporttournament36_pd[862];
	J[306] = -x[609]*2. + 2.;
	J[396] -= sporttournament36_pd[861];
	J[306] -= x[396]*2.;
	J[549] += sporttournament36_pd[860];
	J[305] = x[549]*2. + -4.;
	J[459] = sporttournament36_pd[859];
	J[305] += x[459]*2.;
	J[549] -= sporttournament36_pd[858];
	J[304] = -x[549]*2. + 2.;
	J[548] += sporttournament36_pd[857];
	J[304] += x[548]*2.;
	J[547] = -sporttournament36_pd[856];
	J[304] -= x[547]*2.;
	J[612] += sporttournament36_pd[855];
	J[303] = x[612]*2. + -4.;
	J[516] += sporttournament36_pd[854];
	J[303] += x[516]*2.;
	J[305] += sporttournament36_pd[853];
	J[303] += x[305]*2.;
	J[612] += sporttournament36_pd[852];
	J[302] = x[612]*2. + -4.;
	J[504] = sporttournament36_pd[851];
	J[302] += x[504]*2.;
	J[627] += sporttournament36_pd[850];
	J[301] = x[627]*2. + -2.;
	J[586] += sporttournament36_pd[849];
	J[301] += x[586]*2.;
	J[302] += sporttournament36_pd[848];
	J[301] += x[302]*2.;
	J[302] += sporttournament36_pd[847];
	J[300] = x[302]*2. + -4.;
	J[627] += sporttournament36_pd[846];
	J[299] = x[627]*2. + -2.;
	J[551] += sporttournament36_pd[845];
	J[298] = x[551]*2. + -4.;
	J[481] += sporttournament36_pd[844];
	J[298] += x[481]*2.;
	J[443] += sporttournament36_pd[843];
	J[298] += x[443]*2.;
	J[299] += sporttournament36_pd[842];
	J[298] += x[299]*2.;
	J[580] -= sporttournament36_pd[841];
	J[297] = -x[580]*2. + 2.;
	J[578] -= sporttournament36_pd[840];
	J[297] -= x[578]*2.;
	J[299] += sporttournament36_pd[839];
	J[297] += x[299]*2.;
	J[296] = sporttournament36_pd[838] + -2.;
	J[295] = x[296]*2. + -4.;
	J[402] += sporttournament36_pd[837];
	J[294] = x[402]*2. + -4.;
	J[296] += sporttournament36_pd[836];
	J[294] += x[296]*2.;
	J[379] += sporttournament36_pd[835];
	J[293] = x[379]*2. + -4.;
	J[295] += sporttournament36_pd[834];
	J[293] += x[295]*2.;
	J[387] += sporttournament36_pd[833];
	J[292] = x[387]*2. + -2.;
	J[295] += sporttournament36_pd[832];
	J[292] += x[295]*2.;
	J[381] += sporttournament36_pd[831];
	J[291] = x[381]*2. + -2.;
	J[293] += sporttournament36_pd[830];
	J[291] += x[293]*2.;
	J[585] += sporttournament36_pd[829];
	J[290] = x[585]*2. + -2.;
	J[379] += sporttournament36_pd[828];
	J[290] += x[379]*2.;
	J[480] -= sporttournament36_pd[827];
	J[289] = -x[480]*2. + 2.;
	J[391] = -sporttournament36_pd[826];
	J[289] -= x[391]*2.;
	J[290] -= sporttournament36_pd[825];
	J[289] -= x[290]*2.;
	J[628] -= sporttournament36_pd[824];
	J[288] = -x[628]*2. + -2.;
	J[585] += sporttournament36_pd[823];
	J[288] += x[585]*2.;
	J[288] += sporttournament36_pd[822];
	J[287] = x[288]*2. + -4.;
	J[372] += sporttournament36_pd[821];
	J[286] = x[372]*2. + -2.;
	J[324] += sporttournament36_pd[820];
	J[286] += x[324]*2.;
	J[372] += sporttournament36_pd[819];
	J[285] = x[372]*2. + -4.;
	J[500] -= sporttournament36_pd[818];
	J[284] = -x[500]*2. + -2.;
	J[286] += sporttournament36_pd[817];
	J[284] += x[286]*2.;
	J[463] += sporttournament36_pd[816];
	J[283] = x[463]*2. + -4.;
	J[324] += sporttournament36_pd[815];
	J[283] += x[324]*2.;
	J[606] += sporttournament36_pd[814];
	J[282] = x[606]*2. + -2.;
	J[531] = sporttournament36_pd[813];
	J[282] += x[531]*2.;
	J[283] += sporttournament36_pd[812];
	J[282] += x[283]*2.;
	J[440] -= sporttournament36_pd[811];
	J[281] = -x[440]*2. + 4.;
	J[439] -= sporttournament36_pd[810];
	J[281] -= x[439]*2.;
	J[282] -= sporttournament36_pd[809];
	J[281] -= x[282]*2.;
	J[606] -= sporttournament36_pd[808];
	J[280] = -x[606]*2. + 2.;
	J[599] += sporttournament36_pd[807];
	J[280] += x[599]*2.;
	J[576] += sporttournament36_pd[806];
	J[279] = x[576]*2. + -2.;
	J[490] += sporttournament36_pd[805];
	J[279] += x[490]*2.;
	J[279] += sporttournament36_pd[804];
	J[278] = x[279]*2. + -2.;
	J[428] += sporttournament36_pd[803];
	J[277] = x[428]*2. + -2.;
	J[279] -= sporttournament36_pd[802];
	J[277] -= x[279]*2.;
	J[462] += sporttournament36_pd[801];
	J[276] = x[462]*2. + -2.;
	J[409] -= sporttournament36_pd[800];
	J[276] -= x[409]*2.;
	J[278] += sporttournament36_pd[799];
	J[276] += x[278]*2.;
	J[593] -= sporttournament36_pd[798];
	J[275] = -x[593]*2. + 2.;
	J[278] -= sporttournament36_pd[797];
	J[275] -= x[278]*2.;
	J[614] += sporttournament36_pd[796];
	J[274] = x[614]*2. + -4.;
	J[520] += sporttournament36_pd[795];
	J[274] += x[520]*2.;
	J[276] += sporttournament36_pd[794];
	J[274] += x[276]*2.;
	J[275] += sporttournament36_pd[793];
	J[274] += x[275]*2.;
	J[625] -= sporttournament36_pd[792];
	J[273] = -x[625]*2. + 2.;
	J[613] += sporttournament36_pd[791];
	J[272] = x[613]*2. + -4.;
	J[588] += sporttournament36_pd[790];
	J[272] += x[588]*2.;
	J[473] += sporttournament36_pd[789];
	J[272] += x[473]*2.;
	J[588] -= sporttournament36_pd[788];
	J[271] = -x[588]*2. + 2.;
	J[396] += sporttournament36_pd[787];
	J[271] += x[396]*2.;
	J[307] -= sporttournament36_pd[786];
	J[271] -= x[307]*2.;
	J[538] -= sporttournament36_pd[785];
	J[270] = -x[538]*2. + 2.;
	J[448] -= sporttournament36_pd[784];
	J[270] -= x[448]*2.;
	J[272] += sporttournament36_pd[783];
	J[270] += x[272]*2.;
	J[613] -= sporttournament36_pd[782];
	J[269] = -x[613]*2. + 2.;
	J[399] -= sporttournament36_pd[781];
	J[269] -= x[399]*2.;
	J[555] += sporttournament36_pd[780];
	J[268] = x[555]*2. + -4.;
	J[447] = sporttournament36_pd[779];
	J[268] += x[447]*2.;
	J[555] -= sporttournament36_pd[778];
	J[267] = -x[555]*2. + 2.;
	J[553] = -sporttournament36_pd[777];
	J[267] -= x[553]*2.;
	J[617] += sporttournament36_pd[776];
	J[266] = x[617]*2. + -4.;
	J[504] += sporttournament36_pd[775];
	J[266] += x[504]*2.;
	J[268] += sporttournament36_pd[774];
	J[266] += x[268]*2.;
	J[617] += sporttournament36_pd[773];
	J[265] = x[617]*2. + -2.;
	J[504] -= sporttournament36_pd[772];
	J[265] -= x[504]*2.;
	J[435] += sporttournament36_pd[771];
	J[265] += x[435]*2.;
	J[563] = sporttournament36_pd[770];
	J[264] = x[563]*2. + -4.;
	J[265] += sporttournament36_pd[769];
	J[264] += x[265]*2.;
	J[560] += sporttournament36_pd[768];
	J[263] = x[560]*2. + -4.;
	J[535] += sporttournament36_pd[767];
	J[263] += x[535]*2.;
	J[467] += sporttournament36_pd[766];
	J[263] += x[467]*2.;
	J[434] += sporttournament36_pd[765];
	J[263] += x[434]*2.;
	J[571] -= sporttournament36_pd[764];
	J[262] = -x[571]*2. + 2.;
	J[569] -= sporttournament36_pd[763];
	J[262] -= x[569]*2.;
	J[535] += sporttournament36_pd[762];
	J[262] += x[535]*2.;
	J[626] += sporttournament36_pd[761];
	J[261] = x[626]*2. + -4.;
	J[391] -= sporttournament36_pd[760];
	J[260] = -x[391]*2. + -2.;
	J[335] += sporttournament36_pd[759];
	J[260] += x[335]*2.;
	J[590] += sporttournament36_pd[758];
	J[259] = x[590]*2. + -2.;
	J[334] += sporttournament36_pd[757];
	J[259] += x[334]*2.;
	J[422] += sporttournament36_pd[756];
	J[258] = x[422]*2. + 2.;
	J[334] -= sporttournament36_pd[755];
	J[258] -= x[334]*2.;
	J[493] -= sporttournament36_pd[754];
	J[257] = -x[493]*2. + 2.;
	J[259] -= sporttournament36_pd[753];
	J[257] -= x[259]*2.;
	J[590] += sporttournament36_pd[752];
	J[256] = x[590]*2. + -4.;
	J[386] += sporttournament36_pd[751];
	J[255] = x[386]*2. + -4.;
	J[373] += sporttournament36_pd[750];
	J[255] += x[373]*2.;
	J[256] += sporttournament36_pd[749];
	J[255] += x[256]*2.;
	J[466] += sporttournament36_pd[748];
	J[254] = x[466]*2. + -4.;
	J[256] += sporttournament36_pd[747];
	J[254] += x[256]*2.;
	J[329] += sporttournament36_pd[746];
	J[253] = x[329]*2. + -4.;
	J[255] += sporttournament36_pd[745];
	J[253] += x[255]*2.;
	J[284] += sporttournament36_pd[744];
	J[252] = x[284]*2. + -2.;
	J[253] += sporttournament36_pd[743];
	J[252] += x[253]*2.;
	J[253] += sporttournament36_pd[742];
	J[251] = x[253]*2. + -4.;
	J[512] -= sporttournament36_pd[741];
	J[250] = -x[512]*2. + -2.;
	J[252] += sporttournament36_pd[740];
	J[250] += x[252]*2.;
	J[451] += sporttournament36_pd[739];
	J[249] = x[451]*2. + -4.;
	J[284] += sporttournament36_pd[738];
	J[249] += x[284]*2.;
	J[610] += sporttournament36_pd[737];
	J[248] = x[610]*2. + -2.;
	J[542] += sporttournament36_pd[736];
	J[248] += x[542]*2.;
	J[249] += sporttournament36_pd[735];
	J[248] += x[249]*2.;
	J[432] -= sporttournament36_pd[734];
	J[247] = -x[432]*2. + 4.;
	J[430] -= sporttournament36_pd[733];
	J[247] -= x[430]*2.;
	J[280] -= sporttournament36_pd[732];
	J[247] -= x[280]*2.;
	J[248] -= sporttournament36_pd[731];
	J[247] -= x[248]*2.;
	J[610] -= sporttournament36_pd[730];
	J[246] = -x[610]*2. + 2.;
	J[281] -= sporttournament36_pd[729];
	J[246] -= x[281]*2.;
	J[499] += sporttournament36_pd[728];
	J[245] = x[499]*2. + -2.;
	J[359] += sporttournament36_pd[727];
	J[245] += x[359]*2.;
	J[540] -= sporttournament36_pd[726];
	J[244] = -x[540]*2. + -2.;
	J[475] += sporttournament36_pd[725];
	J[244] += x[475]*2.;
	J[245] += sporttournament36_pd[724];
	J[244] += x[245]*2.;
	J[624] += sporttournament36_pd[723];
	J[243] = x[624]*2. + -4.;
	J[475] += sporttournament36_pd[722];
	J[243] += x[475]*2.;
	J[314] += sporttournament36_pd[721];
	J[243] += x[314]*2.;
	J[449] -= sporttournament36_pd[720];
	J[242] = -x[449]*2. + -2.;
	J[243] += sporttournament36_pd[719];
	J[242] += x[243]*2.;
	J[624] -= sporttournament36_pd[718];
	J[241] = -x[624]*2. + 2.;
	J[528] += sporttournament36_pd[717];
	J[241] += x[528]*2.;
	J[486] -= sporttournament36_pd[716];
	J[241] -= x[486]*2.;
	J[618] += sporttournament36_pd[715];
	J[240] = x[618]*2. + -2.;
	J[527] += sporttournament36_pd[714];
	J[240] += x[527]*2.;
	J[461] -= sporttournament36_pd[713];
	J[240] -= x[461]*2.;
	J[273] += sporttournament36_pd[712];
	J[240] += x[273]*2.;
	J[539] -= sporttournament36_pd[711];
	J[239] = -x[539]*2. + 2.;
	J[273] -= sporttournament36_pd[710];
	J[239] -= x[273]*2.;
	J[270] -= sporttournament36_pd[709];
	J[239] -= x[270]*2.;
	J[618] -= sporttournament36_pd[708];
	J[238] = -x[618]*2. + 2.;
	J[407] -= sporttournament36_pd[707];
	J[238] -= x[407]*2.;
	J[565] += sporttournament36_pd[706];
	J[237] = x[565]*2. + -4.;
	J[436] = sporttournament36_pd[705];
	J[237] += x[436]*2.;
	J[565] -= sporttournament36_pd[704];
	J[236] = -x[565]*2. + 2.;
	J[564] = -sporttournament36_pd[703];
	J[236] -= x[564]*2.;
	J[266] += sporttournament36_pd[702];
	J[236] += x[266]*2.;
	J[504] -= sporttournament36_pd[701];
	J[235] = -x[504]*2. + -2.;
	J[267] += sporttournament36_pd[700];
	J[235] += x[267]*2.;
	J[237] += sporttournament36_pd[699];
	J[235] += x[237]*2.;
	J[405] += sporttournament36_pd[698];
	J[234] = x[405]*2. + -4.;
	J[235] += sporttournament36_pd[697];
	J[234] += x[235]*2.;
	J[516] -= sporttournament36_pd[696];
	J[233] = -x[516]*2. + -2.;
	J[446] += sporttournament36_pd[695];
	J[233] += x[446]*2.;
	J[234] += sporttournament36_pd[694];
	J[233] += x[234]*2.;
	J[234] += sporttournament36_pd[693];
	J[232] = x[234]*2. + -4.;
	J[573] += sporttournament36_pd[692];
	J[231] = x[573]*2. + -2.;
	J[515] -= sporttournament36_pd[691];
	J[231] -= x[515]*2.;
	J[233] += sporttournament36_pd[690];
	J[231] += x[233]*2.;
	J[569] += sporttournament36_pd[689];
	J[230] = x[569]*2. + -2.;
	J[545] += sporttournament36_pd[688];
	J[230] += x[545]*2.;
	J[453] += sporttournament36_pd[687];
	J[230] += x[453]*2.;
	J[423] -= sporttournament36_pd[686];
	J[230] -= x[423]*2.;
	J[621] += sporttournament36_pd[685];
	J[229] = x[621]*2. + -2.;
	J[292] -= sporttournament36_pd[684];
	J[229] -= x[292]*2.;
	J[381] += sporttournament36_pd[683];
	J[228] = x[381]*2. + -4.;
	J[378] += sporttournament36_pd[682];
	J[228] += x[378]*2.;
	J[594] += sporttournament36_pd[681];
	J[227] = x[594]*2. + -2.;
	J[291] += sporttournament36_pd[680];
	J[227] += x[291]*2.;
	J[433] += sporttournament36_pd[679];
	J[226] = x[433]*2. + 2.;
	J[387] -= sporttournament36_pd[678];
	J[226] -= x[387]*2.;
	J[291] -= sporttournament36_pd[677];
	J[226] -= x[291]*2.;
	J[257] -= sporttournament36_pd[676];
	J[226] -= x[257]*2.;
	J[501] -= sporttournament36_pd[675];
	J[225] = -x[501]*2. + 2.;
	J[258] -= sporttournament36_pd[674];
	J[225] -= x[258]*2.;
	J[227] -= sporttournament36_pd[673];
	J[225] -= x[227]*2.;
	J[594] += sporttournament36_pd[672];
	J[224] = x[594]*2. + -4.;
	J[225] += sporttournament36_pd[671];
	J[224] += x[225]*2.;
	J[386] -= sporttournament36_pd[670];
	J[223] = -x[386]*2. + -2.;
	J[328] += sporttournament36_pd[669];
	J[223] += x[328]*2.;
	J[224] += sporttournament36_pd[668];
	J[223] += x[224]*2.;
	J[480] += sporttournament36_pd[667];
	J[222] = x[480]*2. + -4.;
	J[224] += sporttournament36_pd[666];
	J[222] += x[224]*2.;
	J[287] += sporttournament36_pd[665];
	J[221] = x[287]*2. + -4.;
	J[223] += sporttournament36_pd[664];
	J[221] += x[223]*2.;
	J[250] += sporttournament36_pd[663];
	J[220] = x[250]*2. + -2.;
	J[221] += sporttournament36_pd[662];
	J[220] += x[221]*2.;
	J[221] += sporttournament36_pd[661];
	J[219] = x[221]*2. + -4.;
	J[522] -= sporttournament36_pd[660];
	J[218] = -x[522]*2. + -2.;
	J[220] += sporttournament36_pd[659];
	J[218] += x[220]*2.;
	J[550] += sporttournament36_pd[658];
	J[217] = x[550]*2. + -4.;
	J[440] += sporttournament36_pd[657];
	J[217] += x[440]*2.;
	J[250] += sporttournament36_pd[656];
	J[217] += x[250]*2.;
	J[550] -= sporttournament36_pd[655];
	J[216] = -x[550]*2. + 2.;
	J[432] += sporttournament36_pd[654];
	J[216] += x[432]*2.;
	J[420] -= sporttournament36_pd[653];
	J[216] -= x[420]*2.;
	J[318] -= sporttournament36_pd[652];
	J[216] -= x[318]*2.;
	J[616] -= sporttournament36_pd[651];
	J[215] = -x[616]*2. + 2.;
	J[320] -= sporttournament36_pd[650];
	J[215] -= x[320]*2.;
	J[576] -= sporttournament36_pd[649];
	J[214] = -x[576]*2. + -2.;
	J[510] += sporttournament36_pd[648];
	J[214] += x[510]*2.;
	J[316] += sporttournament36_pd[647];
	J[214] += x[316]*2.;
	J[510] -= sporttournament36_pd[646];
	J[213] = -x[510]*2. + -2.;
	J[509] += sporttournament36_pd[645];
	J[213] += x[509]*2.;
	J[476] += sporttournament36_pd[644];
	J[213] += x[476]*2.;
	J[411] += sporttournament36_pd[643];
	J[213] += x[411]*2.;
	J[599] += sporttournament36_pd[642];
	J[212] = x[599]*2. + -2.;
	J[529] -= sporttournament36_pd[641];
	J[212] -= x[529]*2.;
	J[488] += sporttournament36_pd[640];
	J[212] += x[488]*2.;
	J[214] += sporttournament36_pd[639];
	J[212] += x[214]*2.;
	J[619] += sporttournament36_pd[638];
	J[211] = x[619]*2. + -4.;
	J[488] += sporttournament36_pd[637];
	J[211] += x[488]*2.;
	J[357] += sporttournament36_pd[636];
	J[211] += x[357]*2.;
	J[488] -= sporttournament36_pd[635];
	J[210] = -x[488]*2. + -2.;
	J[400] += sporttournament36_pd[634];
	J[210] += x[400]*2.;
	J[438] -= sporttournament36_pd[633];
	J[209] = -x[438]*2. + -2.;
	J[211] += sporttournament36_pd[632];
	J[209] += x[211]*2.;
	J[619] -= sporttournament36_pd[631];
	J[208] = -x[619]*2. + 2.;
	J[539] += sporttournament36_pd[630];
	J[208] += x[539]*2.;
	J[473] -= sporttournament36_pd[629];
	J[208] -= x[473]*2.;
	J[528] -= sporttournament36_pd[628];
	J[207] = -x[528]*2. + 2.;
	J[527] -= sporttournament36_pd[627];
	J[207] -= x[527]*2.;
	J[310] -= sporttournament36_pd[626];
	J[207] -= x[310]*2.;
	J[548] += sporttournament36_pd[625];
	J[206] = x[548]*2. + -4.;
	J[425] = sporttournament36_pd[624];
	J[206] += x[425]*2.;
	J[238] += sporttournament36_pd[623];
	J[206] += x[238]*2.;
	J[574] = -sporttournament36_pd[622];
	J[205] = -x[574]*2. + 2.;
	J[485] -= sporttournament36_pd[621];
	J[205] -= x[485]*2.;
	J[303] += sporttournament36_pd[620];
	J[205] += x[303]*2.;
	J[238] -= sporttournament36_pd[619];
	J[205] -= x[238]*2.;
	J[561] += sporttournament36_pd[618];
	J[204] = x[561]*2. + -2.;
	J[526] += sporttournament36_pd[617];
	J[204] += x[526]*2.;
	J[458] -= sporttournament36_pd[616];
	J[204] -= x[458]*2.;
	J[582] += sporttournament36_pd[615];
	J[203] = x[582]*2. + -2.;
	J[526] += sporttournament36_pd[614];
	J[203] += x[526]*2.;
	J[342] += sporttournament36_pd[613];
	J[203] += x[342]*2.;
	J[552] += sporttournament36_pd[612];
	J[202] = x[552]*2. + -4.;
	J[503] += sporttournament36_pd[611];
	J[202] += x[503]*2.;
	J[404] += sporttournament36_pd[610];
	J[202] += x[404]*2.;
	J[204] += sporttournament36_pd[609];
	J[202] += x[204]*2.;
	J[578] += sporttournament36_pd[608];
	J[201] = x[578]*2. + -2.;
	J[552] += sporttournament36_pd[607];
	J[201] += x[552]*2.;
	J[441] += sporttournament36_pd[606];
	J[201] += x[441]*2.;
	J[434] -= sporttournament36_pd[605];
	J[201] -= x[434]*2.;
	J[578] += sporttournament36_pd[604];
	J[200] = x[578]*2. + -2.;
	J[294] += sporttournament36_pd[603];
	J[199] = x[294]*2. + -2.;
	J[199] += sporttournament36_pd[602];
	J[198] = x[199]*2. + -2.;
	J[294] += sporttournament36_pd[601];
	J[197] = x[294]*2. + -4.;
	J[260] += sporttournament36_pd[600];
	J[197] += x[260]*2.;
	J[333] += sporttournament36_pd[599];
	J[196] = x[333]*2. + -4.;
	J[197] += sporttournament36_pd[598];
	J[196] += x[197]*2.;
	J[597] += sporttournament36_pd[597];
	J[195] = x[597]*2. + -2.;
	J[260] += sporttournament36_pd[596];
	J[195] += x[260]*2.;
	J[513] -= sporttournament36_pd[595];
	J[194] = -x[513]*2. + 2.;
	J[413] -= sporttournament36_pd[594];
	J[194] -= x[413]*2.;
	J[256] += sporttournament36_pd[593];
	J[194] += x[256]*2.;
	J[195] -= sporttournament36_pd[592];
	J[194] -= x[195]*2.;
	J[597] += sporttournament36_pd[591];
	J[193] = x[597]*2. + -4.;
	J[374] += sporttournament36_pd[590];
	J[193] += x[374]*2.;
	J[257] += sporttournament36_pd[589];
	J[193] += x[257]*2.;
	J[493] += sporttournament36_pd[588];
	J[192] = x[493]*2. + -4.;
	J[193] += sporttournament36_pd[587];
	J[192] += x[193]*2.;
	J[374] += sporttournament36_pd[586];
	J[191] = x[374]*2. + -4.;
	J[254] += sporttournament36_pd[585];
	J[191] += x[254]*2.;
	J[479] += sporttournament36_pd[584];
	J[190] = x[479]*2. + -4.;
	J[327] += sporttournament36_pd[583];
	J[190] += x[327]*2.;
	J[218] += sporttournament36_pd[582];
	J[190] += x[218]*2.;
	J[191] += sporttournament36_pd[581];
	J[190] += x[191]*2.;
	J[533] += sporttournament36_pd[580];
	J[189] = x[533]*2. + -4.;
	J[191] += sporttournament36_pd[579];
	J[189] += x[191]*2.;
	J[432] += sporttournament36_pd[578];
	J[188] = x[432]*2. + -4.;
	J[218] += sporttournament36_pd[577];
	J[188] += x[218]*2.;
	J[616] -= sporttournament36_pd[576];
	J[187] = -x[616]*2. + 2.;
	J[531] -= sporttournament36_pd[575];
	J[187] -= x[531]*2.;
	J[188] += sporttournament36_pd[574];
	J[187] += x[188]*2.;
	J[440] += sporttournament36_pd[573];
	J[186] = x[440]*2. + 2.;
	J[411] -= sporttournament36_pd[572];
	J[186] -= x[411]*2.;
	J[362] -= sporttournament36_pd[571];
	J[186] -= x[362]*2.;
	J[187] -= sporttournament36_pd[570];
	J[186] -= x[187]*2.;
	J[605] += sporttournament36_pd[569];
	J[185] = x[605]*2. + -2.;
	J[566] -= sporttournament36_pd[568];
	J[185] -= x[566]*2.;
	J[278] += sporttournament36_pd[567];
	J[185] += x[278]*2.;
	J[215] += sporttournament36_pd[566];
	J[185] += x[215]*2.;
	J[489] += sporttournament36_pd[565];
	J[184] = x[489]*2. + -2.;
	J[420] += sporttournament36_pd[564];
	J[184] += x[420]*2.;
	J[215] -= sporttournament36_pd[563];
	J[184] -= x[215]*2.;
	J[605] -= sporttournament36_pd[562];
	J[183] = -x[605]*2. + 2.;
	J[489] -= sporttournament36_pd[561];
	J[183] -= x[489]*2.;
	J[429] -= sporttournament36_pd[560];
	J[183] -= x[429]*2.;
	J[614] += sporttournament36_pd[559];
	J[182] = x[614]*2. + -2.;
	J[497] += sporttournament36_pd[558];
	J[182] += x[497]*2.;
	J[593] += sporttournament36_pd[557];
	J[181] = x[593]*2. + -2.;
	J[182] += sporttournament36_pd[556];
	J[181] += x[182]*2.;
	J[614] -= sporttournament36_pd[555];
	J[180] = -x[614]*2. + 2.;
	J[461] -= sporttournament36_pd[554];
	J[180] -= x[461]*2.;
	J[518] -= sporttournament36_pd[553];
	J[179] = -x[518]*2. + 2.;
	J[517] -= sporttournament36_pd[552];
	J[179] -= x[517]*2.;
	J[353] -= sporttournament36_pd[551];
	J[179] -= x[353]*2.;
	J[537] += sporttournament36_pd[550];
	J[178] = x[537]*2. + -4.;
	J[485] += sporttournament36_pd[549];
	J[178] += x[485]*2.;
	J[415] = sporttournament36_pd[548];
	J[178] += x[415]*2.;
	J[269] += sporttournament36_pd[547];
	J[178] += x[269]*2.;
	J[583] = -sporttournament36_pd[546];
	J[177] = -x[583]*2. + 2.;
	J[472] -= sporttournament36_pd[545];
	J[177] -= x[472]*2.;
	J[347] += sporttournament36_pd[544];
	J[177] += x[347]*2.;
	J[269] -= sporttournament36_pd[543];
	J[177] -= x[269]*2.;
	J[536] += sporttournament36_pd[542];
	J[176] = x[536]*2. + -2.;
	J[471] -= sporttournament36_pd[541];
	J[176] -= x[471]*2.;
	J[586] += sporttournament36_pd[540];
	J[175] = x[586]*2. + -2.;
	J[536] += sporttournament36_pd[539];
	J[175] += x[536]*2.;
	J[232] += sporttournament36_pd[538];
	J[175] += x[232]*2.;
	J[562] += sporttournament36_pd[537];
	J[174] = x[562]*2. + -4.;
	J[495] += sporttournament36_pd[536];
	J[174] += x[495]*2.;
	J[397] += sporttournament36_pd[535];
	J[174] += x[397]*2.;
	J[176] += sporttournament36_pd[534];
	J[174] += x[176]*2.;
	J[572] -= sporttournament36_pd[533];
	J[173] = -x[572]*2. + 2.;
	J[552] -= sporttournament36_pd[532];
	J[173] -= x[552]*2.;
	J[176] += sporttournament36_pd[531];
	J[173] += x[176]*2.;
	J[611] -= sporttournament36_pd[530];
	J[172] = -x[611]*2. + 2.;
	J[514] -= sporttournament36_pd[529];
	J[172] -= x[514]*2.;
	J[444] += sporttournament36_pd[528];
	J[172] += x[444]*2.;
	J[339] -= sporttournament36_pd[527];
	J[172] -= x[339]*2.;
	J[261] += sporttournament36_pd[526];
	J[171] = x[261]*2. + -2.;
	J[402] -= sporttournament36_pd[525];
	J[170] = -x[402]*2. + -2.;
	J[171] += sporttournament36_pd[524];
	J[170] += x[171]*2.;
	J[261] += sporttournament36_pd[523];
	J[169] = x[261]*2. + -4.;
	J[228] += sporttournament36_pd[522];
	J[169] += x[228]*2.;
	J[387] -= sporttournament36_pd[521];
	J[168] = -x[387]*2. + 2.;
	J[380] -= sporttournament36_pd[520];
	J[168] -= x[380]*2.;
	J[261] += sporttournament36_pd[519];
	J[168] += x[261]*2.;
	J[198] -= sporttournament36_pd[518];
	J[168] -= x[198]*2.;
	J[568] += sporttournament36_pd[517];
	J[167] = x[568]*2. + -4.;
	J[290] += sporttournament36_pd[516];
	J[167] += x[290]*2.;
	J[169] += sporttournament36_pd[515];
	J[167] += x[169]*2.;
	J[601] += sporttournament36_pd[514];
	J[166] = x[601]*2. + -2.;
	J[228] += sporttournament36_pd[513];
	J[166] += x[228]*2.;
	J[523] -= sporttournament36_pd[512];
	J[165] = -x[523]*2. + 2.;
	J[388] -= sporttournament36_pd[511];
	J[165] -= x[388]*2.;
	J[288] += sporttournament36_pd[510];
	J[165] += x[288]*2.;
	J[166] -= sporttournament36_pd[509];
	J[165] -= x[166]*2.;
	J[601] += sporttournament36_pd[508];
	J[164] = x[601]*2. + -4.;
	J[329] += sporttournament36_pd[507];
	J[164] += x[329]*2.;
	J[289] += sporttournament36_pd[506];
	J[164] += x[289]*2.;
	J[501] += sporttournament36_pd[505];
	J[163] = x[501]*2. + -4.;
	J[164] += sporttournament36_pd[504];
	J[163] += x[164]*2.;
	J[329] += sporttournament36_pd[503];
	J[162] = x[329]*2. + -2.;
	J[222] += sporttournament36_pd[502];
	J[162] += x[222]*2.;
	J[220] -= sporttournament36_pd[501];
	J[162] -= x[220]*2.;
	J[327] += sporttournament36_pd[500];
	J[161] = x[327]*2. + -4.;
	J[162] += sporttournament36_pd[499];
	J[161] += x[162]*2.;
	J[610] -= sporttournament36_pd[498];
	J[160] = -x[610]*2. + 2.;
	J[522] += sporttournament36_pd[497];
	J[160] += x[522]*2.;
	J[521] -= sporttournament36_pd[496];
	J[160] -= x[521]*2.;
	J[452] -= sporttournament36_pd[495];
	J[160] -= x[452]*2.;
	J[362] -= sporttournament36_pd[494];
	J[159] = -x[362]*2. + -2.;
	J[246] += sporttournament36_pd[493];
	J[159] += x[246]*2.;
	J[244] += sporttournament36_pd[492];
	J[159] += x[244]*2.;
	J[530] += sporttournament36_pd[491];
	J[158] = x[530]*2. + -2.;
	J[498] += sporttournament36_pd[490];
	J[158] += x[498]*2.;
	J[430] += sporttournament36_pd[489];
	J[158] += x[430]*2.;
	J[246] -= sporttournament36_pd[488];
	J[158] -= x[246]*2.;
	J[508] += sporttournament36_pd[487];
	J[157] = x[508]*2. + -4.;
	J[159] += sporttournament36_pd[486];
	J[157] += x[159]*2.;
	J[277] += sporttournament36_pd[485];
	J[156] = x[277]*2. + -2.;
	J[182] -= sporttournament36_pd[484];
	J[156] -= x[182]*2.;
	J[157] += sporttournament36_pd[483];
	J[156] += x[157]*2.;
	J[508] += sporttournament36_pd[482];
	J[155] = x[508]*2. + -2.;
	J[357] -= sporttournament36_pd[481];
	J[155] -= x[357]*2.;
	J[242] += sporttournament36_pd[480];
	J[155] += x[242]*2.;
	J[155] += sporttournament36_pd[479];
	J[154] = x[155]*2. + -2.;
	J[604] = sporttournament36_pd[478];
	J[153] = x[604]*2. + -4.;
	J[242] += sporttournament36_pd[477];
	J[153] += x[242]*2.;
	J[438] += sporttournament36_pd[476];
	J[152] = x[438]*2. + -2.;
	J[416] += sporttournament36_pd[475];
	J[152] += x[416]*2.;
	J[351] -= sporttournament36_pd[474];
	J[152] -= x[351]*2.;
	J[153] += sporttournament36_pd[473];
	J[152] += x[153]*2.;
	J[609] -= sporttournament36_pd[472];
	J[151] = -x[609]*2. + 2.;
	J[604] += sporttournament36_pd[471];
	J[151] += x[604]*2.;
	J[496] -= sporttournament36_pd[470];
	J[151] -= x[496]*2.;
	J[604] -= sporttournament36_pd[469];
	J[150] = -x[604]*2. + 4.;
	J[603] -= sporttournament36_pd[468];
	J[150] -= x[603]*2.;
	J[506] -= sporttournament36_pd[467];
	J[150] -= x[506]*2.;
	J[505] -= sporttournament36_pd[466];
	J[150] -= x[505]*2.;
	J[437] += sporttournament36_pd[465];
	J[149] = x[437]*2. + -2.;
	J[395] += sporttournament36_pd[464];
	J[149] += x[395]*2.;
	J[151] -= sporttournament36_pd[463];
	J[149] -= x[151]*2.;
	J[472] += sporttournament36_pd[462];
	J[148] = x[472]*2. + -2.;
	J[405] -= sporttournament36_pd[461];
	J[148] -= x[405]*2.;
	J[306] += sporttournament36_pd[460];
	J[148] += x[306]*2.;
	J[583] += sporttournament36_pd[459];
	J[147] = x[583]*2. + 2.;
	J[460] -= sporttournament36_pd[458];
	J[147] -= x[460]*2.;
	J[459] -= sporttournament36_pd[457];
	J[147] -= x[459]*2.;
	J[306] -= sporttournament36_pd[456];
	J[147] -= x[306]*2.;
	J[608] -= sporttournament36_pd[455];
	J[146] = -x[608]*2. + 2.;
	J[348] -= sporttournament36_pd[454];
	J[146] -= x[348]*2.;
	J[148] += sporttournament36_pd[453];
	J[146] += x[148]*2.;
	J[536] -= sporttournament36_pd[452];
	J[145] = -x[536]*2. + 4.;
	J[459] -= sporttournament36_pd[451];
	J[145] -= x[459]*2.;
	J[458] -= sporttournament36_pd[450];
	J[145] -= x[458]*2.;
	J[146] -= sporttournament36_pd[449];
	J[145] -= x[146]*2.;
	J[571] += sporttournament36_pd[448];
	J[144] = x[571]*2. + -4.;
	J[394] += sporttournament36_pd[447];
	J[144] += x[394]*2.;
	J[343] += sporttournament36_pd[446];
	J[144] += x[343]*2.;
	J[581] -= sporttournament36_pd[445];
	J[143] = -x[581]*2. + 2.;
	J[545] -= sporttournament36_pd[444];
	J[143] -= x[545]*2.;
	J[343] += sporttournament36_pd[443];
	J[143] += x[343]*2.;
	J[484] -= sporttournament36_pd[442];
	J[142] = -x[484]*2. + 2.;
	J[389] -= sporttournament36_pd[441];
	J[142] -= x[389]*2.;
	J[144] += sporttournament36_pd[440];
	J[142] += x[144]*2.;
	J[143] -= sporttournament36_pd[439];
	J[142] -= x[143]*2.;
	J[607] -= sporttournament36_pd[438];
	J[141] = -x[607]*2. + 2.;
	J[525] = -sporttournament36_pd[437];
	J[141] -= x[525]*2.;
	J[457] += sporttournament36_pd[436];
	J[141] += x[457]*2.;
	J[229] += sporttournament36_pd[435];
	J[140] = x[229]*2. + -2.;
	J[382] += sporttournament36_pd[434];
	J[139] = x[382]*2. + -4.;
	J[140] += sporttournament36_pd[433];
	J[139] += x[140]*2.;
	J[229] += sporttournament36_pd[432];
	J[138] = x[229]*2. + -4.;
	J[196] += sporttournament36_pd[431];
	J[138] += x[196]*2.;
	J[557] += sporttournament36_pd[430];
	J[137] = x[557]*2. + -4.;
	J[259] += sporttournament36_pd[429];
	J[137] += x[259]*2.;
	J[138] += sporttournament36_pd[428];
	J[137] += x[138]*2.;
	J[414] -= sporttournament36_pd[427];
	J[136] = -x[414]*2. + -2.;
	J[196] += sporttournament36_pd[426];
	J[136] += x[196]*2.;
	J[388] += sporttournament36_pd[425];
	J[135] = x[388]*2. + -4.;
	J[136] += sporttournament36_pd[424];
	J[135] += x[136]*2.;
	J[465] += sporttournament36_pd[423];
	J[134] = x[465]*2. + -4.;
	J[287] += sporttournament36_pd[422];
	J[134] += x[287]*2.;
	J[135] += sporttournament36_pd[421];
	J[134] += x[135]*2.;
	J[433] += sporttournament36_pd[420];
	J[133] = x[433]*2. + -4.;
	J[330] += sporttournament36_pd[419];
	J[133] += x[330]*2.;
	J[135] += sporttournament36_pd[418];
	J[133] += x[135]*2.;
	J[513] += sporttournament36_pd[417];
	J[132] = x[513]*2. + -4.;
	J[134] += sporttournament36_pd[416];
	J[132] += x[134]*2.;
	J[287] += sporttournament36_pd[415];
	J[131] = x[287]*2. + -2.;
	J[252] -= sporttournament36_pd[414];
	J[131] -= x[252]*2.;
	J[192] += sporttournament36_pd[413];
	J[131] += x[192]*2.;
	J[533] -= sporttournament36_pd[412];
	J[130] = -x[533]*2. + -2.;
	J[131] += sporttournament36_pd[411];
	J[130] += x[131]*2.;
	J[606] -= sporttournament36_pd[410];
	J[129] = -x[606]*2. + 2.;
	J[512] += sporttournament36_pd[409];
	J[129] += x[512]*2.;
	J[511] -= sporttournament36_pd[408];
	J[129] -= x[511]*2.;
	J[464] -= sporttournament36_pd[407];
	J[129] -= x[464]*2.;
	J[541] += sporttournament36_pd[406];
	J[128] = x[541]*2. + -2.;
	J[509] += sporttournament36_pd[405];
	J[128] += x[509]*2.;
	J[439] += sporttournament36_pd[404];
	J[128] += x[439]*2.;
	J[280] -= sporttournament36_pd[403];
	J[128] -= x[280]*2.;
	J[592] += sporttournament36_pd[402];
	J[127] = x[592]*2. + -2.;
	J[314] -= sporttournament36_pd[401];
	J[127] -= x[314]*2.;
	J[209] += sporttournament36_pd[400];
	J[127] += x[209]*2.;
	J[183] += sporttournament36_pd[399];
	J[127] += x[183]*2.;
	J[604] -= sporttournament36_pd[398];
	J[126] = -x[604]*2. + -2.;
	J[209] += sporttournament36_pd[397];
	J[126] += x[209]*2.;
	J[449] += sporttournament36_pd[396];
	J[125] = x[449]*2. + -2.;
	J[406] += sporttournament36_pd[395];
	J[125] += x[406]*2.;
	J[308] -= sporttournament36_pd[394];
	J[125] -= x[308]*2.;
	J[126] += sporttournament36_pd[393];
	J[125] += x[126]*2.;
	J[547] += sporttournament36_pd[392];
	J[124] = x[547]*2. + -2.;
	J[460] += sporttournament36_pd[391];
	J[124] += x[460]*2.;
	J[415] -= sporttournament36_pd[390];
	J[124] -= x[415]*2.;
	J[350] += sporttournament36_pd[389];
	J[124] += x[350]*2.;
	J[574] += sporttournament36_pd[388];
	J[123] = x[574]*2. + 2.;
	J[448] -= sporttournament36_pd[387];
	J[123] -= x[448]*2.;
	J[447] -= sporttournament36_pd[386];
	J[123] -= x[447]*2.;
	J[350] -= sporttournament36_pd[385];
	J[123] -= x[350]*2.;
	J[547] += sporttournament36_pd[384];
	J[122] = x[547]*2. + -4.;
	J[471] += sporttournament36_pd[383];
	J[122] += x[471]*2.;
	J[459] += sporttournament36_pd[382];
	J[122] += x[459]*2.;
	J[547] -= sporttournament36_pd[381];
	J[121] = -x[547]*2. + 4.;
	J[546] -= sporttournament36_pd[380];
	J[121] -= x[546]*2.;
	J[447] -= sporttournament36_pd[379];
	J[121] -= x[447]*2.;
	J[445] -= sporttournament36_pd[378];
	J[121] -= x[445]*2.;
	J[572] += sporttournament36_pd[377];
	J[120] = x[572]*2. + -2.;
	J[300] += sporttournament36_pd[376];
	J[120] += x[300]*2.;
	J[122] += sporttournament36_pd[375];
	J[120] += x[122]*2.;
	J[580] += sporttournament36_pd[374];
	J[119] = x[580]*2. + -2.;
	J[394] -= sporttournament36_pd[373];
	J[119] -= x[394]*2.;
	J[300] += sporttournament36_pd[372];
	J[119] += x[300]*2.;
	J[535] -= sporttournament36_pd[371];
	J[118] = -x[535]*2. + 2.;
	J[495] -= sporttournament36_pd[370];
	J[118] -= x[495]*2.;
	J[300] += sporttournament36_pd[369];
	J[118] += x[300]*2.;
	J[175] -= sporttournament36_pd[368];
	J[118] -= x[175]*2.;
	J[470] -= sporttournament36_pd[367];
	J[117] = -x[470]*2. + 2.;
	J[392] -= sporttournament36_pd[366];
	J[117] -= x[392]*2.;
	J[173] -= sporttournament36_pd[365];
	J[117] -= x[173]*2.;
	J[119] += sporttournament36_pd[364];
	J[117] += x[119]*2.;
	J[602] -= sporttournament36_pd[363];
	J[116] = -x[602]*2. + 2.;
	J[534] = -sporttournament36_pd[362];
	J[116] -= x[534]*2.;
	J[470] += sporttournament36_pd[361];
	J[116] += x[470]*2.;
	J[198] += sporttournament36_pd[360];
	J[115] = x[198]*2. + -2.;
	J[336] += sporttournament36_pd[359];
	J[114] = x[336]*2. + -4.;
	J[115] += sporttournament36_pd[358];
	J[114] += x[115]*2.;
	J[198] += sporttournament36_pd[357];
	J[113] = x[198]*2. + -4.;
	J[167] += sporttournament36_pd[356];
	J[113] += x[167]*2.;
	J[227] += sporttournament36_pd[355];
	J[112] = x[227]*2. + -4.;
	J[113] += sporttournament36_pd[354];
	J[112] += x[113]*2.;
	J[523] += sporttournament36_pd[353];
	J[111] = x[523]*2. + -4.;
	J[466] += sporttournament36_pd[352];
	J[111] += x[466]*2.;
	J[286] -= sporttournament36_pd[351];
	J[110] = -x[286]*2. + -2.;
	J[254] += sporttournament36_pd[350];
	J[110] += x[254]*2.;
	J[163] += sporttournament36_pd[349];
	J[110] += x[163]*2.;
	J[110] += sporttournament36_pd[348];
	J[109] = x[110]*2. + -2.;
	J[600] -= sporttournament36_pd[347];
	J[108] = -x[600]*2. + 2.;
	J[500] += sporttournament36_pd[346];
	J[108] += x[500]*2.;
	J[477] += sporttournament36_pd[345];
	J[107] = x[477]*2. + -2.;
	J[430] += sporttournament36_pd[344];
	J[107] += x[430]*2.;
	J[108] -= sporttournament36_pd[343];
	J[107] -= x[108]*2.;
	J[318] -= sporttournament36_pd[342];
	J[106] = -x[318]*2. + -2.;
	J[277] += sporttournament36_pd[341];
	J[106] += x[277]*2.;
	J[353] -= sporttournament36_pd[340];
	J[105] = -x[353]*2. + -2.;
	J[181] += sporttournament36_pd[339];
	J[105] += x[181]*2.;
	J[575] -= sporttournament36_pd[338];
	J[104] = -x[575]*2. + 2.;
	J[496] += sporttournament36_pd[337];
	J[104] += x[496]*2.;
	J[426] -= sporttournament36_pd[336];
	J[104] -= x[426]*2.;
	J[181] -= sporttournament36_pd[335];
	J[104] -= x[181]*2.;
	J[398] += sporttournament36_pd[334];
	J[103] = x[398]*2. + -2.;
	J[271] -= sporttournament36_pd[333];
	J[103] -= x[271]*2.;
	J[180] += sporttournament36_pd[332];
	J[103] += x[180]*2.;
	J[105] += sporttournament36_pd[331];
	J[103] += x[105]*2.;
	J[595] = sporttournament36_pd[330];
	J[102] = x[595]*2. + -4.;
	J[416] += sporttournament36_pd[329];
	J[102] += x[416]*2.;
	J[179] += sporttournament36_pd[328];
	J[102] += x[179]*2.;
	J[527] += sporttournament36_pd[327];
	J[101] = x[527]*2. + -2.;
	J[348] -= sporttournament36_pd[326];
	J[101] -= x[348]*2.;
	J[305] += sporttournament36_pd[325];
	J[101] += x[305]*2.;
	J[102] += sporttournament36_pd[324];
	J[101] += x[102]*2.;
	J[595] += sporttournament36_pd[323];
	J[100] = x[595]*2. + -2.;
	J[553] += sporttournament36_pd[322];
	J[100] += x[553]*2.;
	J[448] += sporttournament36_pd[321];
	J[100] += x[448]*2.;
	J[425] -= sporttournament36_pd[320];
	J[100] -= x[425]*2.;
	J[595] -= sporttournament36_pd[319];
	J[99] = -x[595]*2. + 2.;
	J[564] += sporttournament36_pd[318];
	J[99] += x[564]*2.;
	J[437] -= sporttournament36_pd[317];
	J[99] -= x[437]*2.;
	J[436] -= sporttournament36_pd[316];
	J[99] -= x[436]*2.;
	J[563] += sporttournament36_pd[315];
	J[98] = x[563]*2. + -4.;
	J[553] += sporttournament36_pd[314];
	J[98] += x[553]*2.;
	J[458] += sporttournament36_pd[313];
	J[98] += x[458]*2.;
	J[447] += sporttournament36_pd[312];
	J[98] += x[447]*2.;
	J[553] -= sporttournament36_pd[311];
	J[97] = -x[553]*2. + 4.;
	J[436] -= sporttournament36_pd[310];
	J[97] -= x[436]*2.;
	J[120] -= sporttournament36_pd[309];
	J[97] -= x[120]*2.;
	J[563] -= sporttournament36_pd[308];
	J[96] = -x[563]*2. + -2.;
	J[561] += sporttournament36_pd[307];
	J[96] += x[561]*2.;
	J[515] += sporttournament36_pd[306];
	J[96] += x[515]*2.;
	J[232] += sporttournament36_pd[305];
	J[96] += x[232]*2.;
	J[587] += sporttournament36_pd[304];
	J[95] = x[587]*2. + -2.;
	J[456] += sporttournament36_pd[303];
	J[95] += x[456]*2.;
	J[397] -= sporttournament36_pd[302];
	J[95] -= x[397]*2.;
	J[264] += sporttournament36_pd[301];
	J[95] += x[264]*2.;
	J[503] -= sporttournament36_pd[300];
	J[94] = -x[503]*2. + 2.;
	J[299] -= sporttournament36_pd[299];
	J[94] -= x[299]*2.;
	J[264] += sporttournament36_pd[298];
	J[94] += x[264]*2.;
	J[203] -= sporttournament36_pd[297];
	J[94] -= x[203]*2.;
	J[598] -= sporttournament36_pd[296];
	J[93] = -x[598]*2. + -2.;
	J[484] += sporttournament36_pd[295];
	J[93] += x[484]*2.;
	J[424] += sporttournament36_pd[294];
	J[93] += x[424]*2.;
	J[200] += sporttournament36_pd[293];
	J[93] += x[200]*2.;
	J[170] += sporttournament36_pd[292];
	J[92] = x[170]*2. + -2.;
	J[293] += sporttournament36_pd[291];
	J[91] = x[293]*2. + -4.;
	J[92] += sporttournament36_pd[290];
	J[91] += x[92]*2.;
	J[524] += sporttournament36_pd[289];
	J[90] = x[524]*2. + -4.;
	J[170] += sporttournament36_pd[288];
	J[90] += x[170]*2.;
	J[137] += sporttournament36_pd[287];
	J[90] += x[137]*2.;
	J[567] += sporttournament36_pd[286];
	J[89] = x[567]*2. + -4.;
	J[195] += sporttournament36_pd[285];
	J[89] += x[195]*2.;
	J[90] += sporttournament36_pd[284];
	J[89] += x[90]*2.;
	J[480] += sporttournament36_pd[283];
	J[88] = x[480]*2. + -4.;
	J[375] += sporttournament36_pd[282];
	J[88] += x[375]*2.;
	J[326] -= sporttournament36_pd[281];
	J[87] = -x[326]*2. + -2.;
	J[222] += sporttournament36_pd[280];
	J[87] += x[222]*2.;
	J[132] += sporttournament36_pd[279];
	J[87] += x[132]*2.;
	J[87] += sporttournament36_pd[278];
	J[86] = x[87]*2. + -2.;
	J[596] -= sporttournament36_pd[277];
	J[85] = -x[596]*2. + 2.;
	J[491] += sporttournament36_pd[276];
	J[85] += x[491]*2.;
	J[367] -= sporttournament36_pd[275];
	J[85] -= x[367]*2.;
	J[576] += sporttournament36_pd[274];
	J[84] = x[576]*2. + -2.;
	J[439] += sporttournament36_pd[273];
	J[84] += x[439]*2.;
	J[365] += sporttournament36_pd[272];
	J[84] += x[365]*2.;
	J[85] -= sporttournament36_pd[271];
	J[84] -= x[85]*2.;
	J[540] += sporttournament36_pd[270];
	J[83] = x[540]*2. + -4.;
	J[417] += sporttournament36_pd[269];
	J[83] += x[417]*2.;
	J[156] += sporttournament36_pd[268];
	J[83] += x[156]*2.;
	J[154] += sporttournament36_pd[267];
	J[83] += x[154]*2.;
	J[539] += sporttournament36_pd[266];
	J[82] = x[539]*2. + -2.;
	J[310] -= sporttournament36_pd[265];
	J[82] -= x[310]*2.;
	J[154] += sporttournament36_pd[264];
	J[82] += x[154]*2.;
	J[584] -= sporttournament36_pd[263];
	J[81] = -x[584]*2. + 2.;
	J[506] += sporttournament36_pd[262];
	J[81] += x[506]*2.;
	J[417] -= sporttournament36_pd[261];
	J[81] -= x[417]*2.;
	J[154] -= sporttournament36_pd[260];
	J[81] -= x[154]*2.;
	J[595] -= sporttournament36_pd[259];
	J[80] = -x[595]*2. + -2.;
	J[406] += sporttournament36_pd[258];
	J[80] += x[406]*2.;
	J[207] += sporttournament36_pd[257];
	J[80] += x[207]*2.;
	J[517] += sporttournament36_pd[256];
	J[79] = x[517]*2. + -2.;
	J[304] -= sporttournament36_pd[255];
	J[79] -= x[304]*2.;
	J[268] += sporttournament36_pd[254];
	J[79] += x[268]*2.;
	J[80] += sporttournament36_pd[253];
	J[79] += x[80]*2.;
	J[573] += sporttournament36_pd[252];
	J[78] = x[573]*2. + -4.;
	J[564] += sporttournament36_pd[251];
	J[78] += x[564]*2.;
	J[445] += sporttournament36_pd[250];
	J[78] += x[445]*2.;
	J[436] += sporttournament36_pd[249];
	J[78] += x[436]*2.;
	J[564] -= sporttournament36_pd[248];
	J[77] = -x[564]*2. + 4.;
	J[563] -= sporttournament36_pd[247];
	J[77] -= x[563]*2.;
	J[425] -= sporttournament36_pd[246];
	J[77] -= x[425]*2.;
	J[591] += sporttournament36_pd[245];
	J[76] = x[591]*2. + -2.;
	J[443] += sporttournament36_pd[244];
	J[76] += x[443]*2.;
	J[404] -= sporttournament36_pd[243];
	J[76] -= x[404]*2.;
	J[231] += sporttournament36_pd[242];
	J[76] += x[231]*2.;
	J[591] += sporttournament36_pd[241];
	J[75] = x[591]*2. + 2.;
	J[495] -= sporttournament36_pd[240];
	J[75] -= x[495]*2.;
	J[337] -= sporttournament36_pd[239];
	J[75] -= x[337]*2.;
	J[116] -= sporttournament36_pd[238];
	J[75] -= x[116]*2.;
	J[591] -= sporttournament36_pd[237];
	J[74] = -x[591]*2. + 4.;
	J[503] -= sporttournament36_pd[236];
	J[74] -= x[503]*2.;
	J[393] -= sporttournament36_pd[235];
	J[74] -= x[393]*2.;
	J[141] -= sporttournament36_pd[234];
	J[74] -= x[141]*2.;
	J[139] += sporttournament36_pd[233];
	J[73] = x[139]*2. + -2.;
	J[335] += sporttournament36_pd[232];
	J[72] = x[335]*2. + -4.;
	J[73] += sporttournament36_pd[231];
	J[72] += x[73]*2.;
	J[524] -= sporttournament36_pd[230];
	J[71] = -x[524]*2. + -2.;
	J[139] += sporttournament36_pd[229];
	J[71] += x[139]*2.;
	J[112] += sporttournament36_pd[228];
	J[71] += x[112]*2.;
	J[577] += sporttournament36_pd[227];
	J[70] = x[577]*2. + -4.;
	J[166] += sporttournament36_pd[226];
	J[70] += x[166]*2.;
	J[71] += sporttournament36_pd[225];
	J[70] += x[71]*2.;
	J[594] -= sporttournament36_pd[224];
	J[69] = -x[594]*2. + 2.;
	J[556] -= sporttournament36_pd[223];
	J[69] -= x[556]*2.;
	J[112] += sporttournament36_pd[222];
	J[69] += x[112]*2.;
	J[543] += sporttournament36_pd[221];
	J[68] = x[543]*2. + -2.;
	J[391] += sporttournament36_pd[220];
	J[68] += x[391]*2.;
	J[386] += sporttournament36_pd[219];
	J[68] += x[386]*2.;
	J[69] -= sporttournament36_pd[218];
	J[68] -= x[69]*2.;
	J[543] += sporttournament36_pd[217];
	J[67] = x[543]*2. + -4.;
	J[493] += sporttournament36_pd[216];
	J[67] += x[493]*2.;
	J[371] -= sporttournament36_pd[215];
	J[66] = -x[371]*2. + -2.;
	J[192] += sporttournament36_pd[214];
	J[66] += x[192]*2.;
	J[111] += sporttournament36_pd[213];
	J[66] += x[111]*2.;
	J[66] += sporttournament36_pd[212];
	J[65] = x[66]*2. + -2.;
	J[384] += sporttournament36_pd[211];
	J[64] = x[384]*2. + -4.;
	J[322] += sporttournament36_pd[210];
	J[64] += x[322]*2.;
	J[566] += sporttournament36_pd[209];
	J[63] = x[566]*2. + -4.;
	J[385] += sporttournament36_pd[208];
	J[63] += x[385]*2.;
	J[64] += sporttournament36_pd[207];
	J[63] += x[64]*2.;
	J[490] -= sporttournament36_pd[206];
	J[62] = -x[490]*2. + -2.;
	J[365] += sporttournament36_pd[205];
	J[62] += x[365]*2.;
	J[64] += sporttournament36_pd[204];
	J[62] += x[64]*2.;
	J[320] -= sporttournament36_pd[203];
	J[61] = -x[320]*2. + -2.;
	J[106] += sporttournament36_pd[202];
	J[61] += x[106]*2.;
	J[63] += sporttournament36_pd[201];
	J[61] += x[63]*2.;
	J[592] += sporttournament36_pd[200];
	J[60] = x[592]*2. + -2.;
	J[528] += sporttournament36_pd[199];
	J[60] += x[528]*2.;
	J[273] -= sporttournament36_pd[198];
	J[60] -= x[273]*2.;
	J[398] += sporttournament36_pd[197];
	J[59] = x[398]*2. + -2.;
	J[350] -= sporttournament36_pd[196];
	J[59] -= x[350]*2.;
	J[239] += sporttournament36_pd[195];
	J[59] += x[239]*2.;
	J[505] += sporttournament36_pd[194];
	J[58] = x[505]*2. + -2.;
	J[267] -= sporttournament36_pd[193];
	J[58] -= x[267]*2.;
	J[237] += sporttournament36_pd[192];
	J[58] += x[237]*2.;
	J[59] += sporttournament36_pd[191];
	J[58] += x[59]*2.;
	J[582] += sporttournament36_pd[190];
	J[57] = x[582]*2. + -4.;
	J[574] += sporttournament36_pd[189];
	J[57] += x[574]*2.;
	J[425] += sporttournament36_pd[188];
	J[57] += x[425]*2.;
	J[574] -= sporttournament36_pd[187];
	J[56] = -x[574]*2. + 4.;
	J[573] -= sporttournament36_pd[186];
	J[56] -= x[573]*2.;
	J[415] -= sporttournament36_pd[185];
	J[56] -= x[415]*2.;
	J[435] -= sporttournament36_pd[184];
	J[55] = -x[435]*2. + 2.;
	J[394] -= sporttournament36_pd[183];
	J[55] -= x[394]*2.;
	J[97] -= sporttournament36_pd[182];
	J[55] -= x[97]*2.;
	J[57] += sporttournament36_pd[181];
	J[55] += x[57]*2.;
	J[114] += sporttournament36_pd[180];
	J[54] = x[114]*2. + -2.;
	J[558] += sporttournament36_pd[179];
	J[53] = x[558]*2. + -4.;
	J[381] += sporttournament36_pd[178];
	J[53] += x[381]*2.;
	J[54] += sporttournament36_pd[177];
	J[53] += x[54]*2.;
	J[114] += sporttournament36_pd[176];
	J[52] = x[114]*2. + -2.;
	J[89] += sporttournament36_pd[175];
	J[52] += x[89]*2.;
	J[577] -= sporttournament36_pd[174];
	J[51] = -x[577]*2. + -2.;
	J[136] += sporttournament36_pd[173];
	J[51] += x[136]*2.;
	J[52] += sporttournament36_pd[172];
	J[51] += x[52]*2.;
	J[533] += sporttournament36_pd[171];
	J[50] = x[533]*2. + -4.;
	J[501] += sporttournament36_pd[170];
	J[50] += x[501]*2.;
	J[133] += sporttournament36_pd[169];
	J[50] += x[133]*2.;
	J[492] += sporttournament36_pd[168];
	J[49] = x[492]*2. + -4.;
	J[370] += sporttournament36_pd[167];
	J[49] += x[370]*2.;
	J[163] += sporttournament36_pd[166];
	J[49] += x[163]*2.;
	J[88] += sporttournament36_pd[165];
	J[49] += x[88]*2.;
	J[384] -= sporttournament36_pd[164];
	J[48] = -x[384]*2. + -2.;
	J[370] += sporttournament36_pd[163];
	J[48] += x[370]*2.;
	J[325] += sporttournament36_pd[162];
	J[48] += x[325]*2.;
	J[396] += sporttournament36_pd[161];
	J[47] = x[396]*2. + -2.;
	J[236] -= sporttournament36_pd[160];
	J[47] -= x[236]*2.;
	J[206] += sporttournament36_pd[159];
	J[47] += x[206]*2.;
	J[149] += sporttournament36_pd[158];
	J[47] += x[149]*2.;
	J[583] += sporttournament36_pd[157];
	J[46] = x[583]*2. + -4.;
	J[415] += sporttournament36_pd[156];
	J[46] += x[415]*2.;
	J[232] += sporttournament36_pd[155];
	J[46] += x[232]*2.;
	J[583] -= sporttournament36_pd[154];
	J[45] = -x[583]*2. + 2.;
	J[582] -= sporttournament36_pd[153];
	J[45] -= x[582]*2.;
	J[405] -= sporttournament36_pd[152];
	J[45] -= x[405]*2.;
	J[397] -= sporttournament36_pd[151];
	J[44] = -x[397]*2. + 2.;
	J[301] -= sporttournament36_pd[150];
	J[44] -= x[301]*2.;
	J[77] -= sporttournament36_pd[149];
	J[44] -= x[77]*2.;
	J[46] += sporttournament36_pd[148];
	J[44] += x[46]*2.;
	J[91] += sporttournament36_pd[147];
	J[43] = x[91]*2. + -2.;
	J[558] -= sporttournament36_pd[146];
	J[42] = -x[558]*2. + -2.;
	J[197] += sporttournament36_pd[145];
	J[42] += x[197]*2.;
	J[43] += sporttournament36_pd[144];
	J[42] += x[43]*2.;
	J[91] += sporttournament36_pd[143];
	J[41] = x[91]*2. + -2.;
	J[70] += sporttournament36_pd[142];
	J[41] += x[70]*2.;
	J[568] += sporttournament36_pd[141];
	J[40] = x[568]*2. + -2.;
	J[567] -= sporttournament36_pd[140];
	J[40] -= x[567]*2.;
	J[558] += sporttournament36_pd[139];
	J[40] += x[558]*2.;
	J[41] += sporttournament36_pd[138];
	J[40] += x[41]*2.;
	J[543] -= sporttournament36_pd[137];
	J[39] = -x[543]*2. + -2.;
	J[513] += sporttournament36_pd[136];
	J[39] += x[513]*2.;
	J[327] += sporttournament36_pd[135];
	J[39] += x[327]*2.;
	J[492] -= sporttournament36_pd[134];
	J[38] = -x[492]*2. + -2.;
	J[325] += sporttournament36_pd[133];
	J[38] += x[325]*2.;
	J[132] += sporttournament36_pd[132];
	J[38] += x[132]*2.;
	J[67] += sporttournament36_pd[131];
	J[38] += x[67]*2.;
	J[511] += sporttournament36_pd[130];
	J[37] = x[511]*2. + -4.;
	J[368] += sporttournament36_pd[129];
	J[37] += x[368]*2.;
	J[325] += sporttournament36_pd[128];
	J[37] += x[325]*2.;
	J[285] += sporttournament36_pd[127];
	J[37] += x[285]*2.;
	J[385] -= sporttournament36_pd[126];
	J[36] = -x[385]*2. + 2.;
	J[108] -= sporttournament36_pd[125];
	J[36] -= x[108]*2.;
	J[48] += sporttournament36_pd[124];
	J[36] += x[48]*2.;
	J[245] -= sporttournament36_pd[123];
	J[35] = -x[245]*2. + -2.;
	J[107] += sporttournament36_pd[122];
	J[35] += x[107]*2.;
	J[62] += sporttournament36_pd[121];
	J[35] += x[62]*2.;
	J[450] -= sporttournament36_pd[120];
	J[34] = -x[450]*2. + -2.;
	J[157] += sporttournament36_pd[119];
	J[34] += x[157]*2.;
	J[61] += sporttournament36_pd[118];
	J[34] += x[61]*2.;
	J[35] += sporttournament36_pd[117];
	J[34] += x[35]*2.;
	J[404] -= sporttournament36_pd[116];
	J[33] = -x[404]*2. + 2.;
	J[344] -= sporttournament36_pd[115];
	J[33] -= x[344]*2.;
	J[56] -= sporttournament36_pd[114];
	J[33] -= x[56]*2.;
	J[45] += sporttournament36_pd[113];
	J[33] += x[45]*2.;
	J[525] += sporttournament36_pd[112];
	J[32] = x[525]*2. + -2.;
	J[442] += sporttournament36_pd[111];
	J[32] += x[442]*2.;
	J[389] += sporttournament36_pd[110];
	J[32] += x[389]*2.;
	J[297] -= sporttournament36_pd[109];
	J[32] -= x[297]*2.;
	J[72] += sporttournament36_pd[108];
	J[31] = x[72]*2. + -2.;
	J[169] += sporttournament36_pd[107];
	J[30] = x[169]*2. + -2.;
	J[31] += sporttournament36_pd[106];
	J[30] += x[31]*2.;
	J[556] += sporttournament36_pd[105];
	J[29] = x[556]*2. + -2.;
	J[72] += sporttournament36_pd[104];
	J[29] += x[72]*2.;
	J[51] += sporttournament36_pd[103];
	J[29] += x[51]*2.;
	J[30] -= sporttournament36_pd[102];
	J[29] -= x[30]*2.;
	J[285] += sporttournament36_pd[101];
	J[28] = x[285]*2. + -2.;
	J[111] += sporttournament36_pd[100];
	J[28] += x[111]*2.;
	J[65] -= sporttournament36_pd[99];
	J[28] -= x[65]*2.;
	J[50] += sporttournament36_pd[98];
	J[28] += x[50]*2.;
	J[521] += sporttournament36_pd[97];
	J[27] = x[521]*2. + -4.;
	J[323] += sporttournament36_pd[96];
	J[27] += x[323]*2.;
	J[285] += sporttournament36_pd[95];
	J[27] += x[285]*2.;
	J[251] += sporttournament36_pd[94];
	J[27] += x[251]*2.;
	J[565] -= sporttournament36_pd[93];
	J[26] = -x[565]*2. + 2.;
	J[460] += sporttournament36_pd[92];
	J[26] += x[460]*2.;
	J[416] -= sporttournament36_pd[91];
	J[26] -= x[416]*2.;
	J[351] -= sporttournament36_pd[90];
	J[26] -= x[351]*2.;
	J[534] += sporttournament36_pd[89];
	J[25] = x[534]*2. + -2.;
	J[392] += sporttournament36_pd[88];
	J[25] += x[392]*2.;
	J[262] -= sporttournament36_pd[87];
	J[25] -= x[262]*2.;
	J[53] += sporttournament36_pd[86];
	J[24] = x[53]*2. + -2.;
	J[544] += sporttournament36_pd[85];
	J[23] = x[544]*2. + -2.;
	J[138] += sporttournament36_pd[84];
	J[23] += x[138]*2.;
	J[41] -= sporttournament36_pd[83];
	J[23] -= x[41]*2.;
	J[24] += sporttournament36_pd[82];
	J[23] += x[24]*2.;
	J[251] += sporttournament36_pd[81];
	J[22] = x[251]*2. + -2.;
	J[88] += sporttournament36_pd[80];
	J[22] += x[88]*2.;
	J[86] -= sporttournament36_pd[79];
	J[22] -= x[86]*2.;
	J[39] += sporttournament36_pd[78];
	J[22] += x[39]*2.;
	J[531] += sporttournament36_pd[77];
	J[21] = x[531]*2. + -4.;
	J[283] += sporttournament36_pd[76];
	J[21] += x[283]*2.;
	J[251] += sporttournament36_pd[75];
	J[21] += x[251]*2.;
	J[219] += sporttournament36_pd[74];
	J[21] += x[219]*2.;
	J[42] += sporttournament36_pd[73];
	J[20] = x[42]*2. + -2.;
	J[113] += sporttournament36_pd[72];
	J[19] = x[113]*2. + -2.;
	J[52] -= sporttournament36_pd[71];
	J[19] -= x[52]*2.;
	J[20] += sporttournament36_pd[70];
	J[19] += x[20]*2.;
	J[532] += sporttournament36_pd[69];
	J[18] = x[532]*2. + -2.;
	J[219] += sporttournament36_pd[68];
	J[18] += x[219]*2.;
	J[109] -= sporttournament36_pd[67];
	J[18] -= x[109]*2.;
	J[67] += sporttournament36_pd[66];
	J[18] += x[67]*2.;
	J[542] += sporttournament36_pd[65];
	J[17] = x[542]*2. + -4.;
	J[249] += sporttournament36_pd[64];
	J[17] += x[249]*2.;
	J[219] += sporttournament36_pd[63];
	J[17] += x[219]*2.;
	J[189] += sporttournament36_pd[62];
	J[17] += x[189]*2.;
	J[524] += sporttournament36_pd[61];
	J[16] = x[524]*2. + -2.;
	J[30] += sporttournament36_pd[60];
	J[16] += x[30]*2.;
	J[542] -= sporttournament36_pd[59];
	J[15] = -x[542]*2. + -2.;
	J[217] += sporttournament36_pd[58];
	J[15] += x[217]*2.;
	J[189] += sporttournament36_pd[57];
	J[15] += x[189]*2.;
	J[161] += sporttournament36_pd[56];
	J[15] += x[161]*2.;
	J[400] += sporttournament36_pd[55];
	J[14] = x[400]*2. + -2.;
	J[275] -= sporttournament36_pd[54];
	J[14] -= x[275]*2.;
	J[184] += sporttournament36_pd[53];
	J[14] += x[184]*2.;
	J[106] += sporttournament36_pd[52];
	J[14] += x[106]*2.;
	J[531] -= sporttournament36_pd[51];
	J[13] = -x[531]*2. + -2.;
	J[188] += sporttournament36_pd[50];
	J[13] += x[188]*2.;
	J[161] += sporttournament36_pd[49];
	J[13] += x[161]*2.;
	J[130] += sporttournament36_pd[48];
	J[13] += x[130]*2.;
	J[441] += sporttournament36_pd[47];
	J[12] = x[441]*2. + -2.;
	J[25] += sporttournament36_pd[46];
	J[12] += x[25]*2.;
	J[295] += sporttournament36_pd[45];
	J[11] = x[295]*2. + -2.;
	J[19] += sporttournament36_pd[44];
	J[11] += x[19]*2.;
	J[522] += sporttournament36_pd[43];
	J[10] = x[522]*2. + -2.;
	J[521] -= sporttournament36_pd[42];
	J[10] -= x[521]*2.;
	J[130] += sporttournament36_pd[41];
	J[10] += x[130]*2.;
	J[109] += sporttournament36_pd[40];
	J[10] += x[109]*2.;
	J[512] += sporttournament36_pd[39];
	J[9] = x[512]*2. + -2.;
	J[511] -= sporttournament36_pd[38];
	J[9] -= x[511]*2.;
	J[109] += sporttournament36_pd[37];
	J[9] += x[109]*2.;
	J[86] += sporttournament36_pd[36];
	J[9] += x[86]*2.;
	J[429] += sporttournament36_pd[35];
	J[8] = x[429]*2. + -2.;
	J[241] -= sporttournament36_pd[34];
	J[8] -= x[241]*2.;
	J[210] += sporttournament36_pd[33];
	J[8] += x[210]*2.;
	J[153] += sporttournament36_pd[32];
	J[8] += x[153]*2.;
	J[500] += sporttournament36_pd[31];
	J[7] = x[500]*2. + -2.;
	J[86] += sporttournament36_pd[30];
	J[7] += x[86]*2.;
	J[65] += sporttournament36_pd[29];
	J[7] += x[65]*2.;
	J[36] -= sporttournament36_pd[28];
	J[7] -= x[36]*2.;
	J[419] += sporttournament36_pd[27];
	J[6] = x[419]*2. + -2.;
	J[401] += sporttournament36_pd[26];
	J[6] += x[401]*2.;
	J[208] -= sporttournament36_pd[25];
	J[6] -= x[208]*2.;
	J[126] += sporttournament36_pd[24];
	J[6] += x[126]*2.;
	J[492] += sporttournament36_pd[23];
	J[5] = x[492]*2. + -2.;
	J[491] += sporttournament36_pd[22];
	J[5] += x[491]*2.;
	J[367] -= sporttournament36_pd[21];
	J[5] -= x[367]*2.;
	J[65] += sporttournament36_pd[20];
	J[5] += x[65]*2.;
	J[497] -= sporttournament36_pd[19];
	J[4] = -x[497]*2. + -2.;
	J[412] += sporttournament36_pd[18];
	J[4] += x[412]*2.;
	J[360] += sporttournament36_pd[17];
	J[4] += x[360]*2.;
	J[358] += sporttournament36_pd[16];
	J[4] += x[358]*2.;
	J[410] += sporttournament36_pd[15];
	J[3] = x[410]*2. + -2.;
	J[409] += sporttournament36_pd[14];
	J[3] += x[409]*2.;
	J[180] -= sporttournament36_pd[13];
	J[3] -= x[180]*2.;
	J[105] += sporttournament36_pd[12];
	J[3] += x[105]*2.;
	J[449] -= sporttournament36_pd[11];
	J[2] = -x[449]*2. + -2.;
	J[312] += sporttournament36_pd[10];
	J[2] += x[312]*2.;
	J[210] += sporttournament36_pd[9];
	J[2] += x[210]*2.;
	J[82] += sporttournament36_pd[8];
	J[2] += x[82]*2.;
	J[438] -= sporttournament36_pd[7];
	J[1] = -x[438]*2. + -2.;
	J[401] += sporttournament36_pd[6];
	J[1] += x[401]*2.;
	J[355] += sporttournament36_pd[5];
	J[1] += x[355]*2.;
	J[60] += sporttournament36_pd[4];
	J[1] += x[60]*2.;
	J[402] += sporttournament36_pd[3];
	J[0] = x[402]*2. + -2.;
	J[391] += sporttournament36_pd[2];
	J[0] += x[391]*2.;
	J[292] += sporttournament36_pd[1];
	J[0] += x[292]*2.;
	J[258] += sporttournament36_pd[0];
	J[0] -= x[258]*2.;
	J[630] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
