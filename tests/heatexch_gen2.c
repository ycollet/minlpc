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
 fint heatexch_gen2_auxcom_[1] = { 64 /* nlc */ };
 fint heatexch_gen2_funcom_[639] = {
	148 /* nvar */,
	1 /* nobj */,
	166 /* ncon */,
	484 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	14,
	19,
	27,
	32,
	40,
	45,
	53,
	58,
	66,
	86,
	99,
	107,
	115,
	123,
	131,
	139,
	147,
	155,
	163,
	171,
	179,
	183,
	187,
	191,
	195,
	199,
	203,
	205,
	209,
	211,
	213,
	217,
	219,
	221,
	225,
	227,
	229,
	233,
	235,
	237,
	241,
	243,
	245,
	247,
	249,
	251,
	253,
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
	317,
	319,
	321,
	323,
	325,
	327,
	329,
	331,
	333,
	335,
	337,
	339,
	341,
	343,
	345,
	347,
	349,
	351,
	353,
	355,
	357,
	359,
	361,
	363,
	365,
	367,
	369,
	371,
	373,
	375,
	377,
	379,
	381,
	383,
	385,
	387,
	388,
	389,
	389,
	390,
	391,
	391,
	392,
	393,
	393,
	394,
	395,
	395,
	396,
	397,
	397,
	398,
	399,
	400,
	401,
	402,
	403,
	410,
	417,
	424,
	431,
	438,
	449,
	452,
	455,
	458,
	461,
	464,
	467,
	470,
	473,
	476,
	479,
	480,
	481,
	482,
	483,
	484,
	485,

	/* rownos */
	1,
	65,
	89,
	107,
	141,
	2,
	21,
	65,
	66,
	89,
	90,
	142,
	151,
	3,
	67,
	91,
	108,
	143,
	4,
	23,
	67,
	68,
	91,
	92,
	144,
	153,
	5,
	69,
	93,
	109,
	145,
	6,
	25,
	69,
	70,
	93,
	94,
	146,
	155,
	7,
	71,
	95,
	110,
	147,
	8,
	27,
	71,
	72,
	95,
	96,
	148,
	157,
	9,
	73,
	97,
	111,
	149,
	10,
	29,
	73,
	74,
	97,
	98,
	150,
	159,
	11,
	13,
	15,
	17,
	19,
	32,
	75,
	76,
	99,
	100,
	142,
	144,
	146,
	148,
	150,
	151,
	153,
	155,
	157,
	159,
	12,
	14,
	16,
	18,
	20,
	76,
	100,
	112,
	152,
	154,
	156,
	158,
	160,
	1,
	11,
	43,
	65,
	75,
	82,
	88,
	125,
	2,
	12,
	44,
	66,
	76,
	82,
	88,
	126,
	3,
	13,
	45,
	67,
	75,
	83,
	88,
	127,
	4,
	14,
	46,
	68,
	76,
	83,
	88,
	128,
	5,
	15,
	47,
	69,
	75,
	84,
	88,
	129,
	6,
	16,
	48,
	70,
	76,
	84,
	88,
	130,
	7,
	17,
	49,
	71,
	75,
	85,
	88,
	131,
	8,
	18,
	50,
	72,
	76,
	85,
	88,
	132,
	9,
	19,
	51,
	73,
	75,
	86,
	88,
	133,
	10,
	20,
	52,
	74,
	76,
	86,
	88,
	134,
	59,
	77,
	82,
	136,
	60,
	78,
	83,
	137,
	61,
	79,
	84,
	138,
	62,
	80,
	85,
	139,
	63,
	81,
	86,
	140,
	64,
	87,
	88,
	135,
	33,
	141,
	33,
	34,
	142,
	151,
	34,
	152,
	35,
	143,
	35,
	36,
	144,
	153,
	36,
	154,
	37,
	145,
	37,
	38,
	146,
	155,
	38,
	156,
	39,
	147,
	39,
	40,
	148,
	157,
	40,
	158,
	41,
	149,
	41,
	42,
	150,
	159,
	42,
	160,
	53,
	161,
	54,
	162,
	55,
	163,
	56,
	164,
	57,
	165,
	58,
	166,
	1,
	21,
	113,
	2,
	22,
	114,
	3,
	23,
	115,
	4,
	24,
	116,
	5,
	25,
	117,
	6,
	26,
	118,
	7,
	27,
	119,
	8,
	28,
	120,
	9,
	29,
	121,
	10,
	30,
	122,
	11,
	31,
	123,
	12,
	32,
	124,
	13,
	31,
	123,
	14,
	32,
	124,
	15,
	31,
	123,
	16,
	32,
	124,
	17,
	31,
	123,
	18,
	32,
	124,
	19,
	31,
	123,
	20,
	32,
	124,
	1,
	21,
	2,
	22,
	3,
	23,
	4,
	24,
	5,
	25,
	6,
	26,
	7,
	27,
	8,
	28,
	9,
	29,
	10,
	30,
	11,
	31,
	12,
	32,
	13,
	31,
	14,
	32,
	15,
	31,
	16,
	32,
	17,
	31,
	18,
	32,
	19,
	31,
	20,
	32,
	33,
	43,
	34,
	44,
	35,
	45,
	36,
	46,
	37,
	47,
	38,
	48,
	39,
	49,
	40,
	50,
	41,
	51,
	42,
	52,
	53,
	59,
	54,
	60,
	55,
	61,
	56,
	62,
	57,
	63,
	58,
	64,
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
	59,
	60,
	61,
	62,
	63,
	64,
	22,
	66,
	77,
	90,
	101,
	152,
	161,
	24,
	68,
	78,
	92,
	102,
	154,
	162,
	26,
	70,
	79,
	94,
	103,
	156,
	163,
	28,
	72,
	80,
	96,
	104,
	158,
	164,
	30,
	74,
	81,
	98,
	105,
	160,
	165,
	31,
	75,
	87,
	99,
	106,
	141,
	143,
	145,
	147,
	149,
	166,
	125,
	141,
	151,
	126,
	142,
	152,
	127,
	143,
	153,
	128,
	144,
	154,
	129,
	145,
	155,
	130,
	146,
	156,
	131,
	147,
	157,
	132,
	148,
	158,
	133,
	149,
	159,
	134,
	150,
	160,
	136,
	137,
	138,
	139,
	140,
	135 };

 real heatexch_gen2_boundc_[1+296+332] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		320.,
		500.,
		320.,
		500.,
		380.,
		480.,
		380.,
		480.,
		360.,
		460.,
		360.,
		460.,
		360.,
		380.,
		360.,
		380.,
		320.,
		380.,
		320.,
		380.,
		290.,
		660.,
		290.,
		660.,
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
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		0.,
		6.,
		0.,
		6.,
		0.,
		4.,
		0.,
		4.,
		0.,
		6.,
		0.,
		6.,
		0.,
		20.,
		0.,
		20.,
		0.,
		12.,
		0.,
		12.,
		0.,
		18.,
		0.,
		18.,
		0.,
		18.,
		0.,
		18.,
		0.,
		18.,
		0.,
		18.,
		0.,
		18.,
		0.,
		18.,
		0.,
		18.,
		0.,
		18.,
		320.,
		500.,
		320.,
		500.,
		380.,
		480.,
		380.,
		480.,
		360.,
		460.,
		360.,
		460.,
		360.,
		380.,
		360.,
		380.,
		320.,
		380.,
		320.,
		380.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
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
		320.,
		500.,
		380.,
		480.,
		360.,
		460.,
		360.,
		380.,
		320.,
		380.,
		290.,
		660.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1920.,
		1920.,
		1520.,
		1520.,
		2160.,
		2160.,
		7200.,
		7200.,
		3840.,
		3840.,
		-1080.,
		-1080.,
		-400.,
		-400.,
		-600.,
		-600.,
		-400.,
		-400.,
		-720.,
		-720.,
		-11880.,
		-11880.,
		-6660.,
		-6660.,
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
		320.,
		1.7e308,
		380.,
		1.7e308,
		360.,
		1.7e308,
		360.,
		1.7e308,
		320.,
		1.7e308,
		-660.,
		1.7e308,
		-500.,
		-500.,
		-480.,
		-480.,
		-460.,
		-460.,
		-380.,
		-380.,
		-380.,
		-380.,
		-290.,
		-290.,
		-6.,
		-6.,
		-6.,
		-6.,
		-4.,
		-4.,
		-4.,
		-4.,
		-6.,
		-6.,
		-6.,
		-6.,
		-20.,
		-20.,
		-20.,
		-20.,
		-12.,
		-12.,
		-12.,
		-12.,
		-18.,
		-18.,
		-18.,
		-18.,
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
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		700.};

 real heatexch_gen2_x0comn_[148] = {
		500.,
		500.,
		480.,
		480.,
		460.,
		460.,
		380.,
		380.,
		380.,
		380.,
		290.,
		290.,
		1080.,
		1080.,
		400.,
		400.,
		600.,
		600.,
		400.,
		400.,
		720.,
		720.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		210.,
		210.,
		210.,
		190.,
		190.,
		190.,
		170.,
		170.,
		170.,
		90.,
		90.,
		90.,
		90.,
		90.,
		90.,
		180.,
		160.,
		140.,
		60.,
		60.,
		410.,
		6.,
		6.,
		4.,
		4.,
		6.,
		6.,
		20.,
		20.,
		12.,
		12.,
		18.,
		18.,
		18.,
		18.,
		18.,
		18.,
		18.,
		18.,
		18.,
		18.,
		500.,
		500.,
		480.,
		480.,
		460.,
		460.,
		380.,
		380.,
		380.,
		380.,
		290.,
		290.,
		290.,
		290.,
		290.,
		290.,
		290.,
		290.,
		290.,
		290.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		500.,
		480.,
		460.,
		380.,
		380.,
		290.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real heatexch_gen2_pd[141];
static real heatexch_gen2_old_x[148];
static int heatexch_gen2_xkind = -1;

 static int
heatexch_gen2_xcheck(real *x)
{
	real *x1 = heatexch_gen2_old_x, *xe = x + 148;
	errno = 0;
	if (heatexch_gen2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	heatexch_gen2_xkind = 0;
	return 1;
	}
 real
heatexch_gen2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[21], rv;
	fint wantfg = *needfg;
	if (heatexch_gen2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[105] + 0.01;
	v[1] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[120] = 0.6*(v[1]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[120] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[1] *= 1200.;
	v[0] = x[106] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[121] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[121] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[107] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[122] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[122] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[108] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[123] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[123] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[109] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[124] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[124] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[110] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[125] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[125] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[111] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[126] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[126] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[112] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[127] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[127] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[113] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[128] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[128] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[114] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[129] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[129] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[115] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[130] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[130] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[116] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[131] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[131] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[117] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[132] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[132] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[118] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[133] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[133] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[119] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[134] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[134] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[120] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[135] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[135] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[121] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[136] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[136] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[122] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[137] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[137] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[123] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[138] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[138] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	v[0] = x[124] + 0.01;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	heatexch_gen2_pd[139] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[139] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 1200.;
	v[1] += v[2];
	v[2] = x[125] + 0.01;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_gen2_pd[140] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_gen2_pd[140] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 1200.;
	v[1] += v[0];
	rv = v[1] + 10.*x[22];
	rv += 10.*x[23];
	rv += 10.*x[24];
	rv += 10.*x[25];
	rv += 10.*x[26];
	rv += 140.*x[27];
	rv += 5500.*x[132];
	rv += 5500.*x[133];
	rv += 5500.*x[134];
	rv += 5500.*x[135];
	rv += 5500.*x[136];
	rv += 5500.*x[137];
	rv += 5500.*x[138];
	rv += 5500.*x[139];
	rv += 5500.*x[140];
	rv += 5500.*x[141];
	rv += 5500.*x[142];
	rv += 5500.*x[143];
	rv += 5500.*x[144];
	rv += 5500.*x[145];
	rv += 5500.*x[146];
	rv += 5500.*x[147];
	;}

	if (wantfg & 2) {
	dv[0] = 1200.*heatexch_gen2_pd[140];
	g[125] = dv[0];
	dv[1] = 1200.*heatexch_gen2_pd[139];
	g[124] = dv[1];
	dv[2] = 1200.*heatexch_gen2_pd[138];
	g[123] = dv[2];
	dv[3] = 1200.*heatexch_gen2_pd[137];
	g[122] = dv[3];
	dv[4] = 1200.*heatexch_gen2_pd[136];
	g[121] = dv[4];
	dv[5] = 1200.*heatexch_gen2_pd[135];
	g[120] = dv[5];
	dv[6] = 1200.*heatexch_gen2_pd[134];
	g[119] = dv[6];
	dv[7] = 1200.*heatexch_gen2_pd[133];
	g[118] = dv[7];
	dv[8] = 1200.*heatexch_gen2_pd[132];
	g[117] = dv[8];
	dv[9] = 1200.*heatexch_gen2_pd[131];
	g[116] = dv[9];
	dv[10] = 1200.*heatexch_gen2_pd[130];
	g[115] = dv[10];
	dv[11] = 1200.*heatexch_gen2_pd[129];
	g[114] = dv[11];
	dv[12] = 1200.*heatexch_gen2_pd[128];
	g[113] = dv[12];
	dv[13] = 1200.*heatexch_gen2_pd[127];
	g[112] = dv[13];
	dv[14] = 1200.*heatexch_gen2_pd[126];
	g[111] = dv[14];
	dv[15] = 1200.*heatexch_gen2_pd[125];
	g[110] = dv[15];
	dv[16] = 1200.*heatexch_gen2_pd[124];
	g[109] = dv[16];
	dv[17] = 1200.*heatexch_gen2_pd[123];
	g[108] = dv[17];
	dv[18] = 1200.*heatexch_gen2_pd[122];
	g[107] = dv[18];
	dv[19] = 1200.*heatexch_gen2_pd[121];
	g[106] = dv[19];
	dv[20] = 1200.*heatexch_gen2_pd[120];
	g[105] = dv[20];
	g[22] = 10.;
	g[23] = 10.;
	g[24] = 10.;
	g[25] = 10.;
	g[26] = 10.;
	g[27] = 140.;
	g[132] = 5500.;
	g[133] = 5500.;
	g[134] = 5500.;
	g[135] = 5500.;
	g[136] = 5500.;
	g[137] = 5500.;
	g[138] = 5500.;
	g[139] = 5500.;
	g[140] = 5500.;
	g[141] = 5500.;
	g[142] = 5500.;
	g[143] = 5500.;
	g[144] = 5500.;
	g[145] = 5500.;
	g[146] = 5500.;
	g[147] = 5500.;
	}

	return rv;
}

 void
heatexch_gen2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (heatexch_gen2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	heatexch_gen2_pd[0] = x[0] - x[69];
	v[1] = x[49] * heatexch_gen2_pd[0];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	heatexch_gen2_pd[1] = x[1] - x[70];
	v[1] = x[50] * heatexch_gen2_pd[1];
	v[2] = -v[1];
	t1 = v[2] + x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	heatexch_gen2_pd[2] = x[2] - x[71];
	v[1] = x[51] * heatexch_gen2_pd[2];
	v[2] = -v[1];
	t1 = v[2] + x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	heatexch_gen2_pd[3] = x[3] - x[72];
	v[1] = x[52] * heatexch_gen2_pd[3];
	v[2] = -v[1];
	t1 = v[2] + x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	heatexch_gen2_pd[4] = x[4] - x[73];
	v[1] = x[53] * heatexch_gen2_pd[4];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[4] = t1;

  /***  constraint 6  ***/

	heatexch_gen2_pd[5] = x[5] - x[74];
	v[1] = x[54] * heatexch_gen2_pd[5];
	v[2] = -v[1];
	t1 = v[2] + x[17];
	c[5] = t1;

  /***  constraint 7  ***/

	heatexch_gen2_pd[6] = x[6] - x[75];
	v[1] = x[55] * heatexch_gen2_pd[6];
	v[2] = -v[1];
	t1 = v[2] + x[18];
	c[6] = t1;

  /***  constraint 8  ***/

	heatexch_gen2_pd[7] = x[7] - x[76];
	v[1] = x[56] * heatexch_gen2_pd[7];
	v[2] = -v[1];
	t1 = v[2] + x[19];
	c[7] = t1;

  /***  constraint 9  ***/

	heatexch_gen2_pd[8] = x[8] - x[77];
	v[1] = x[57] * heatexch_gen2_pd[8];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	heatexch_gen2_pd[9] = x[9] - x[78];
	v[1] = x[58] * heatexch_gen2_pd[9];
	v[2] = -v[1];
	t1 = v[2] + x[21];
	c[9] = t1;

  /***  constraint 11  ***/

	heatexch_gen2_pd[10] = x[79] - x[10];
	v[1] = x[59] * heatexch_gen2_pd[10];
	v[2] = -v[1];
	t1 = v[2] + x[12];
	c[10] = t1;

  /***  constraint 12  ***/

	heatexch_gen2_pd[11] = x[80] - x[11];
	v[1] = x[60] * heatexch_gen2_pd[11];
	v[2] = -v[1];
	t1 = v[2] + x[13];
	c[11] = t1;

  /***  constraint 13  ***/

	heatexch_gen2_pd[12] = x[81] - x[10];
	v[1] = x[61] * heatexch_gen2_pd[12];
	v[2] = -v[1];
	t1 = v[2] + x[14];
	c[12] = t1;

  /***  constraint 14  ***/

	heatexch_gen2_pd[13] = x[82] - x[11];
	v[1] = x[62] * heatexch_gen2_pd[13];
	v[2] = -v[1];
	t1 = v[2] + x[15];
	c[13] = t1;

  /***  constraint 15  ***/

	heatexch_gen2_pd[14] = x[83] - x[10];
	v[1] = x[63] * heatexch_gen2_pd[14];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[14] = t1;

  /***  constraint 16  ***/

	heatexch_gen2_pd[15] = x[84] - x[11];
	v[1] = x[64] * heatexch_gen2_pd[15];
	v[2] = -v[1];
	t1 = v[2] + x[17];
	c[15] = t1;

  /***  constraint 17  ***/

	heatexch_gen2_pd[16] = x[85] - x[10];
	v[1] = x[65] * heatexch_gen2_pd[16];
	v[2] = -v[1];
	t1 = v[2] + x[18];
	c[16] = t1;

  /***  constraint 18  ***/

	heatexch_gen2_pd[17] = x[86] - x[11];
	v[1] = x[66] * heatexch_gen2_pd[17];
	v[2] = -v[1];
	t1 = v[2] + x[19];
	c[17] = t1;

  /***  constraint 19  ***/

	heatexch_gen2_pd[18] = x[87] - x[10];
	v[1] = x[67] * heatexch_gen2_pd[18];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[18] = t1;

  /***  constraint 20  ***/

	heatexch_gen2_pd[19] = x[88] - x[11];
	v[1] = x[68] * heatexch_gen2_pd[19];
	v[2] = -v[1];
	t1 = v[2] + x[21];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[49] * x[69];
	v[1] = -v[0];
	t1 = v[1] + 6.*x[1];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[50] * x[70];
	v[1] = -v[0];
	t1 = v[1] + 6.*x[126];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[51] * x[71];
	v[1] = -v[0];
	t1 = v[1] + 4.*x[3];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[52] * x[72];
	v[1] = -v[0];
	t1 = v[1] + 4.*x[127];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[53] * x[73];
	v[1] = -v[0];
	t1 = v[1] + 6.*x[5];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[54] * x[74];
	v[1] = -v[0];
	t1 = v[1] + 6.*x[128];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[55] * x[75];
	v[1] = -v[0];
	t1 = v[1] + 20.*x[7];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[56] * x[76];
	v[1] = -v[0];
	t1 = v[1] + 20.*x[129];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[57] * x[77];
	v[1] = -v[0];
	t1 = v[1] + 12.*x[9];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[58] * x[78];
	v[1] = -v[0];
	t1 = v[1] + 12.*x[130];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[59] * x[79];
	v[1] = x[61] * x[81];
	v[0] += v[1];
	v[1] = x[63] * x[83];
	v[0] += v[1];
	v[1] = x[65] * x[85];
	v[0] += v[1];
	v[1] = x[67] * x[87];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + 18.*x[131];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[60] * x[80];
	v[1] = x[62] * x[82];
	v[0] += v[1];
	v[1] = x[64] * x[84];
	v[0] += v[1];
	v[1] = x[66] * x[86];
	v[0] += v[1];
	v[1] = x[68] * x[88];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + 18.*x[10];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[28] - x[29];
	v[1] = x[29] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[28] / v[1];
	heatexch_gen2_pd[20] = 1. / v[1];
	heatexch_gen2_pd[21] = -v[2] * heatexch_gen2_pd[20];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[22] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[23] = 1. / v[1];
	heatexch_gen2_pd[24] = -v[2] * heatexch_gen2_pd[23];
	v[1] = -v[2];
	t1 = v[1] + x[89];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[29] - x[30];
	v[1] = x[30] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[29] / v[1];
	heatexch_gen2_pd[25] = 1. / v[1];
	heatexch_gen2_pd[26] = -v[2] * heatexch_gen2_pd[25];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[27] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[28] = 1. / v[1];
	heatexch_gen2_pd[29] = -v[2] * heatexch_gen2_pd[28];
	v[1] = -v[2];
	t1 = v[1] + x[90];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[31] - x[32];
	v[1] = x[32] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[31] / v[1];
	heatexch_gen2_pd[30] = 1. / v[1];
	heatexch_gen2_pd[31] = -v[2] * heatexch_gen2_pd[30];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[32] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[33] = 1. / v[1];
	heatexch_gen2_pd[34] = -v[2] * heatexch_gen2_pd[33];
	v[1] = -v[2];
	t1 = v[1] + x[91];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[32] - x[33];
	v[1] = x[33] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[32] / v[1];
	heatexch_gen2_pd[35] = 1. / v[1];
	heatexch_gen2_pd[36] = -v[2] * heatexch_gen2_pd[35];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[37] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[38] = 1. / v[1];
	heatexch_gen2_pd[39] = -v[2] * heatexch_gen2_pd[38];
	v[1] = -v[2];
	t1 = v[1] + x[92];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[34] - x[35];
	v[1] = x[35] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[34] / v[1];
	heatexch_gen2_pd[40] = 1. / v[1];
	heatexch_gen2_pd[41] = -v[2] * heatexch_gen2_pd[40];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[42] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[43] = 1. / v[1];
	heatexch_gen2_pd[44] = -v[2] * heatexch_gen2_pd[43];
	v[1] = -v[2];
	t1 = v[1] + x[93];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[35] - x[36];
	v[1] = x[36] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[35] / v[1];
	heatexch_gen2_pd[45] = 1. / v[1];
	heatexch_gen2_pd[46] = -v[2] * heatexch_gen2_pd[45];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[47] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[48] = 1. / v[1];
	heatexch_gen2_pd[49] = -v[2] * heatexch_gen2_pd[48];
	v[1] = -v[2];
	t1 = v[1] + x[94];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[37] - x[38];
	v[1] = x[38] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[37] / v[1];
	heatexch_gen2_pd[50] = 1. / v[1];
	heatexch_gen2_pd[51] = -v[2] * heatexch_gen2_pd[50];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[52] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[53] = 1. / v[1];
	heatexch_gen2_pd[54] = -v[2] * heatexch_gen2_pd[53];
	v[1] = -v[2];
	t1 = v[1] + x[95];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[38] - x[39];
	v[1] = x[39] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[38] / v[1];
	heatexch_gen2_pd[55] = 1. / v[1];
	heatexch_gen2_pd[56] = -v[2] * heatexch_gen2_pd[55];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[57] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[58] = 1. / v[1];
	heatexch_gen2_pd[59] = -v[2] * heatexch_gen2_pd[58];
	v[1] = -v[2];
	t1 = v[1] + x[96];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[40] - x[41];
	v[1] = x[41] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[40] / v[1];
	heatexch_gen2_pd[60] = 1. / v[1];
	heatexch_gen2_pd[61] = -v[2] * heatexch_gen2_pd[60];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[62] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[63] = 1. / v[1];
	heatexch_gen2_pd[64] = -v[2] * heatexch_gen2_pd[63];
	v[1] = -v[2];
	t1 = v[1] + x[97];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[41] - x[42];
	v[1] = x[42] + 1.e-06;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[41] / v[1];
	heatexch_gen2_pd[65] = 1. / v[1];
	heatexch_gen2_pd[66] = -v[2] * heatexch_gen2_pd[65];
	v[1] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	heatexch_gen2_pd[67] = 1. / v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	heatexch_gen2_pd[68] = 1. / v[1];
	heatexch_gen2_pd[69] = -v[2] * heatexch_gen2_pd[68];
	v[1] = -v[2];
	t1 = v[1] + x[98];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[89] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[12] / v[0];
	heatexch_gen2_pd[70] = 1. / v[0];
	heatexch_gen2_pd[71] = -v[1] * heatexch_gen2_pd[70];
	v[0] = -v[1];
	t1 = v[0] + x[105];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = x[90] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[13] / v[0];
	heatexch_gen2_pd[72] = 1. / v[0];
	heatexch_gen2_pd[73] = -v[1] * heatexch_gen2_pd[72];
	v[0] = -v[1];
	t1 = v[0] + x[106];
	c[43] = t1;

  /***  constraint 45  ***/

	v[0] = x[91] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[14] / v[0];
	heatexch_gen2_pd[74] = 1. / v[0];
	heatexch_gen2_pd[75] = -v[1] * heatexch_gen2_pd[74];
	v[0] = -v[1];
	t1 = v[0] + x[108];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = x[92] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[15] / v[0];
	heatexch_gen2_pd[76] = 1. / v[0];
	heatexch_gen2_pd[77] = -v[1] * heatexch_gen2_pd[76];
	v[0] = -v[1];
	t1 = v[0] + x[109];
	c[45] = t1;

  /***  constraint 47  ***/

	v[0] = x[93] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[16] / v[0];
	heatexch_gen2_pd[78] = 1. / v[0];
	heatexch_gen2_pd[79] = -v[1] * heatexch_gen2_pd[78];
	v[0] = -v[1];
	t1 = v[0] + x[111];
	c[46] = t1;

  /***  constraint 48  ***/

	v[0] = x[94] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[17] / v[0];
	heatexch_gen2_pd[80] = 1. / v[0];
	heatexch_gen2_pd[81] = -v[1] * heatexch_gen2_pd[80];
	v[0] = -v[1];
	t1 = v[0] + x[112];
	c[47] = t1;

  /***  constraint 49  ***/

	v[0] = x[95] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[18] / v[0];
	heatexch_gen2_pd[82] = 1. / v[0];
	heatexch_gen2_pd[83] = -v[1] * heatexch_gen2_pd[82];
	v[0] = -v[1];
	t1 = v[0] + x[114];
	c[48] = t1;

  /***  constraint 50  ***/

	v[0] = x[96] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[19] / v[0];
	heatexch_gen2_pd[84] = 1. / v[0];
	heatexch_gen2_pd[85] = -v[1] * heatexch_gen2_pd[84];
	v[0] = -v[1];
	t1 = v[0] + x[115];
	c[49] = t1;

  /***  constraint 51  ***/

	v[0] = x[97] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[20] / v[0];
	heatexch_gen2_pd[86] = 1. / v[0];
	heatexch_gen2_pd[87] = -v[1] * heatexch_gen2_pd[86];
	v[0] = -v[1];
	t1 = v[0] + x[117];
	c[50] = t1;

  /***  constraint 52  ***/

	v[0] = x[98] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[21] / v[0];
	heatexch_gen2_pd[88] = 1. / v[0];
	heatexch_gen2_pd[89] = -v[1] * heatexch_gen2_pd[88];
	v[0] = -v[1];
	t1 = v[0] + x[118];
	c[51] = t1;

  /***  constraint 53  ***/

	v[0] = x[43] + -20.;
	v[1] = 0.0499999975000001 * x[43];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen2_pd[90] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen2_pd[91] = 1. / v[2];
	heatexch_gen2_pd[92] = -v[1] * heatexch_gen2_pd[91];
	v[2] = -v[1];
	t1 = v[2] + x[99];
	c[52] = t1;

  /***  constraint 54  ***/

	v[0] = x[44] + -80.;
	v[1] = 0.01249999984375 * x[44];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen2_pd[93] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen2_pd[94] = 1. / v[2];
	heatexch_gen2_pd[95] = -v[1] * heatexch_gen2_pd[94];
	v[2] = -v[1];
	t1 = v[2] + x[100];
	c[53] = t1;

  /***  constraint 55  ***/

	v[0] = x[45] + -60.;
	v[1] = 0.0166666663888889 * x[45];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen2_pd[96] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen2_pd[97] = 1. / v[2];
	heatexch_gen2_pd[98] = -v[1] * heatexch_gen2_pd[97];
	v[2] = -v[1];
	t1 = v[2] + x[101];
	c[54] = t1;

  /***  constraint 56  ***/

	v[0] = x[46] + -60.;
	v[1] = 0.0166666663888889 * x[46];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen2_pd[99] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen2_pd[100] = 1. / v[2];
	heatexch_gen2_pd[101] = -v[1] * heatexch_gen2_pd[100];
	v[2] = -v[1];
	t1 = v[2] + x[102];
	c[55] = t1;

  /***  constraint 57  ***/

	v[0] = x[47] + -20.;
	v[1] = 0.0499999975000001 * x[47];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen2_pd[102] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen2_pd[103] = 1. / v[2];
	heatexch_gen2_pd[104] = -v[1] * heatexch_gen2_pd[103];
	v[2] = -v[1];
	t1 = v[2] + x[103];
	c[56] = t1;

  /***  constraint 58  ***/

	v[0] = x[48] + -40.;
	v[1] = 0.024999999375 * x[48];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	heatexch_gen2_pd[105] = 1. / v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = v[0] / v[2];
	heatexch_gen2_pd[106] = 1. / v[2];
	heatexch_gen2_pd[107] = -v[1] * heatexch_gen2_pd[106];
	v[2] = -v[1];
	t1 = v[2] + x[104];
	c[57] = t1;

  /***  constraint 59  ***/

	v[0] = x[99] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[22] / v[0];
	heatexch_gen2_pd[108] = 1. / v[0];
	heatexch_gen2_pd[109] = -v[1] * heatexch_gen2_pd[108];
	v[0] = -v[1];
	t1 = v[0] + x[120];
	c[58] = t1;

  /***  constraint 60  ***/

	v[0] = x[100] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[23] / v[0];
	heatexch_gen2_pd[110] = 1. / v[0];
	heatexch_gen2_pd[111] = -v[1] * heatexch_gen2_pd[110];
	v[0] = -v[1];
	t1 = v[0] + x[121];
	c[59] = t1;

  /***  constraint 61  ***/

	v[0] = x[101] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[24] / v[0];
	heatexch_gen2_pd[112] = 1. / v[0];
	heatexch_gen2_pd[113] = -v[1] * heatexch_gen2_pd[112];
	v[0] = -v[1];
	t1 = v[0] + x[122];
	c[60] = t1;

  /***  constraint 62  ***/

	v[0] = x[102] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[25] / v[0];
	heatexch_gen2_pd[114] = 1. / v[0];
	heatexch_gen2_pd[115] = -v[1] * heatexch_gen2_pd[114];
	v[0] = -v[1];
	t1 = v[0] + x[123];
	c[61] = t1;

  /***  constraint 63  ***/

	v[0] = x[103] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[26] / v[0];
	heatexch_gen2_pd[116] = 1. / v[0];
	heatexch_gen2_pd[117] = -v[1] * heatexch_gen2_pd[116];
	v[0] = -v[1];
	t1 = v[0] + x[124];
	c[62] = t1;

  /***  constraint 64  ***/

	v[0] = x[104] + 0.01;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[27] / v[0];
	heatexch_gen2_pd[118] = 1. / v[0];
	heatexch_gen2_pd[119] = -v[1] * heatexch_gen2_pd[118];
	v[0] = -v[1];
	t1 = v[0] + x[125];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = 6.*x[0];
	t1 += -6.*x[1];
	t1 += -x[12];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = 6.*x[1];
	t1 += -x[13];
	t1 += -6.*x[126];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = 4.*x[2];
	t1 += -4.*x[3];
	t1 += -x[14];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = 4.*x[3];
	t1 += -x[15];
	t1 += -4.*x[127];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = 6.*x[4];
	t1 += -6.*x[5];
	t1 += -x[16];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = 6.*x[5];
	t1 += -x[17];
	t1 += -6.*x[128];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = 20.*x[6];
	t1 += -20.*x[7];
	t1 += -x[18];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = 20.*x[7];
	t1 += -x[19];
	t1 += -20.*x[129];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = 12.*x[8];
	t1 += -12.*x[9];
	t1 += -x[20];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = 12.*x[9];
	t1 += -x[21];
	t1 += -12.*x[130];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -18.*x[10];
	t1 += -x[12];
	t1 += -x[14];
	t1 += -x[16];
	t1 += -x[18];
	t1 += -x[20];
	t1 += 18.*x[131];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = 18.*x[10];
	t1 += -18.*x[11];
	t1 += -x[13];
	t1 += -x[15];
	t1 += -x[17];
	t1 += -x[19];
	t1 += -x[21];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[22];
	t1 += 6.*x[126];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[23];
	t1 += 4.*x[127];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[24];
	t1 += 6.*x[128];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[25];
	t1 += 20.*x[129];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[26];
	t1 += 12.*x[130];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += -x[22];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[14];
	t1 += -x[15];
	t1 += -x[23];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[16];
	t1 += -x[17];
	t1 += -x[24];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = -x[18];
	t1 += -x[19];
	t1 += -x[25];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = -x[20];
	t1 += -x[21];
	t1 += -x[26];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = -x[27];
	t1 += -18.*x[131];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += -x[14];
	t1 += -x[15];
	t1 += -x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	t1 += -x[20];
	t1 += -x[21];
	t1 += -x[27];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[0];
	t1 += -x[1];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[1];
	t1 += -x[126];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[2];
	t1 += -x[3];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[3];
	t1 += -x[127];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[4];
	t1 += -x[5];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[5];
	t1 += -x[128];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[6];
	t1 += -x[7];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[7];
	t1 += -x[129];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[8];
	t1 += -x[9];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[9];
	t1 += -x[130];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -x[10];
	t1 += x[131];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[10];
	t1 += -x[11];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[126];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[127];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[128];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[129];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[130];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = -x[131];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = -x[0];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = -x[2];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = -x[4];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = -x[6];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -x[8];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = -x[11];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -x[49];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -x[50];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -x[51];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = -x[52];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = -x[53];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = -x[54];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = -x[55];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -x[56];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = -x[57];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = -x[58];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = -x[59];
	t1 += -x[61];
	t1 += -x[63];
	t1 += -x[65];
	t1 += -x[67];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = -x[60];
	t1 += -x[62];
	t1 += -x[64];
	t1 += -x[66];
	t1 += -x[68];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[12];
	t1 += -1080.*x[132];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[13];
	t1 += -1080.*x[133];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[14];
	t1 += -400.*x[134];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[15];
	t1 += -400.*x[135];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[16];
	t1 += -600.*x[136];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[17];
	t1 += -600.*x[137];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[18];
	t1 += -400.*x[138];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[19];
	t1 += -400.*x[139];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[20];
	t1 += -720.*x[140];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[21];
	t1 += -720.*x[141];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = x[27];
	t1 += -6660.*x[147];
	c[134] = t1;

  /***  constraint 136  ***/

	t1 = x[22];
	t1 += -1080.*x[142];
	c[135] = t1;

  /***  constraint 137  ***/

	t1 = x[23];
	t1 += -400.*x[143];
	c[136] = t1;

  /***  constraint 138  ***/

	t1 = x[24];
	t1 += -600.*x[144];
	c[137] = t1;

  /***  constraint 139  ***/

	t1 = x[25];
	t1 += -400.*x[145];
	c[138] = t1;

  /***  constraint 140  ***/

	t1 = x[26];
	t1 += -720.*x[146];
	c[139] = t1;

  /***  constraint 141  ***/

	t1 = -x[0];
	t1 += x[28];
	t1 += x[131];
	t1 += 340.*x[132];
	c[140] = t1;

  /***  constraint 142  ***/

	t1 = -x[1];
	t1 += x[10];
	t1 += x[29];
	t1 += 340.*x[133];
	c[141] = t1;

  /***  constraint 143  ***/

	t1 = -x[2];
	t1 += x[31];
	t1 += x[131];
	t1 += 280.*x[134];
	c[142] = t1;

  /***  constraint 144  ***/

	t1 = -x[3];
	t1 += x[10];
	t1 += x[32];
	t1 += 280.*x[135];
	c[143] = t1;

  /***  constraint 145  ***/

	t1 = -x[4];
	t1 += x[34];
	t1 += x[131];
	t1 += 300.*x[136];
	c[144] = t1;

  /***  constraint 146  ***/

	t1 = -x[5];
	t1 += x[10];
	t1 += x[35];
	t1 += 300.*x[137];
	c[145] = t1;

  /***  constraint 147  ***/

	t1 = -x[6];
	t1 += x[37];
	t1 += x[131];
	t1 += 300.*x[138];
	c[146] = t1;

  /***  constraint 148  ***/

	t1 = -x[7];
	t1 += x[10];
	t1 += x[38];
	t1 += 300.*x[139];
	c[147] = t1;

  /***  constraint 149  ***/

	t1 = -x[8];
	t1 += x[40];
	t1 += x[131];
	t1 += 340.*x[140];
	c[148] = t1;

  /***  constraint 150  ***/

	t1 = -x[9];
	t1 += x[10];
	t1 += x[41];
	t1 += 340.*x[141];
	c[149] = t1;

  /***  constraint 151  ***/

	t1 = -x[1];
	t1 += x[10];
	t1 += x[29];
	t1 += 340.*x[132];
	c[150] = t1;

  /***  constraint 152  ***/

	t1 = x[11];
	t1 += x[30];
	t1 += -x[126];
	t1 += 340.*x[133];
	c[151] = t1;

  /***  constraint 153  ***/

	t1 = -x[3];
	t1 += x[10];
	t1 += x[32];
	t1 += 280.*x[134];
	c[152] = t1;

  /***  constraint 154  ***/

	t1 = x[11];
	t1 += x[33];
	t1 += -x[127];
	t1 += 280.*x[135];
	c[153] = t1;

  /***  constraint 155  ***/

	t1 = -x[5];
	t1 += x[10];
	t1 += x[35];
	t1 += 300.*x[136];
	c[154] = t1;

  /***  constraint 156  ***/

	t1 = x[11];
	t1 += x[36];
	t1 += -x[128];
	t1 += 300.*x[137];
	c[155] = t1;

  /***  constraint 157  ***/

	t1 = -x[7];
	t1 += x[10];
	t1 += x[38];
	t1 += 300.*x[138];
	c[156] = t1;

  /***  constraint 158  ***/

	t1 = x[11];
	t1 += x[39];
	t1 += -x[129];
	t1 += 300.*x[139];
	c[157] = t1;

  /***  constraint 159  ***/

	t1 = -x[9];
	t1 += x[10];
	t1 += x[41];
	t1 += 340.*x[140];
	c[158] = t1;

  /***  constraint 160  ***/

	t1 = x[11];
	t1 += x[42];
	t1 += -x[130];
	t1 += 340.*x[141];
	c[159] = t1;

  /***  constraint 161  ***/

	t1 = x[43];
	t1 += -x[126];
	c[160] = t1;

  /***  constraint 162  ***/

	t1 = x[44];
	t1 += -x[127];
	c[161] = t1;

  /***  constraint 163  ***/

	t1 = x[45];
	t1 += -x[128];
	c[162] = t1;

  /***  constraint 164  ***/

	t1 = x[46];
	t1 += -x[129];
	c[163] = t1;

  /***  constraint 165  ***/

	t1 = x[47];
	t1 += -x[130];
	c[164] = t1;

  /***  constraint 166  ***/

	t1 = x[48];
	t1 += x[131];
	c[165] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[254] = -heatexch_gen2_pd[0];
	J[314] = x[49];
	J[0] = -x[49];
	J[98] = 1.;

   /*** derivatives for constraint 2 ***/

	J[257] = -heatexch_gen2_pd[1];
	J[316] = x[50];
	J[5] = -x[50];
	J[106] = 1.;

   /*** derivatives for constraint 3 ***/

	J[260] = -heatexch_gen2_pd[2];
	J[318] = x[51];
	J[13] = -x[51];
	J[114] = 1.;

   /*** derivatives for constraint 4 ***/

	J[263] = -heatexch_gen2_pd[3];
	J[320] = x[52];
	J[18] = -x[52];
	J[122] = 1.;

   /*** derivatives for constraint 5 ***/

	J[266] = -heatexch_gen2_pd[4];
	J[322] = x[53];
	J[26] = -x[53];
	J[130] = 1.;

   /*** derivatives for constraint 6 ***/

	J[269] = -heatexch_gen2_pd[5];
	J[324] = x[54];
	J[31] = -x[54];
	J[138] = 1.;

   /*** derivatives for constraint 7 ***/

	J[272] = -heatexch_gen2_pd[6];
	J[326] = x[55];
	J[39] = -x[55];
	J[146] = 1.;

   /*** derivatives for constraint 8 ***/

	J[275] = -heatexch_gen2_pd[7];
	J[328] = x[56];
	J[44] = -x[56];
	J[154] = 1.;

   /*** derivatives for constraint 9 ***/

	J[278] = -heatexch_gen2_pd[8];
	J[330] = x[57];
	J[52] = -x[57];
	J[162] = 1.;

   /*** derivatives for constraint 10 ***/

	J[281] = -heatexch_gen2_pd[9];
	J[332] = x[58];
	J[57] = -x[58];
	J[170] = 1.;

   /*** derivatives for constraint 11 ***/

	J[284] = -heatexch_gen2_pd[10];
	J[65] = x[59];
	J[334] = -x[59];
	J[99] = 1.;

   /*** derivatives for constraint 12 ***/

	J[287] = -heatexch_gen2_pd[11];
	J[85] = x[60];
	J[336] = -x[60];
	J[107] = 1.;

   /*** derivatives for constraint 13 ***/

	J[290] = -heatexch_gen2_pd[12];
	J[66] = x[61];
	J[338] = -x[61];
	J[115] = 1.;

   /*** derivatives for constraint 14 ***/

	J[293] = -heatexch_gen2_pd[13];
	J[86] = x[62];
	J[340] = -x[62];
	J[123] = 1.;

   /*** derivatives for constraint 15 ***/

	J[296] = -heatexch_gen2_pd[14];
	J[67] = x[63];
	J[342] = -x[63];
	J[131] = 1.;

   /*** derivatives for constraint 16 ***/

	J[299] = -heatexch_gen2_pd[15];
	J[87] = x[64];
	J[344] = -x[64];
	J[139] = 1.;

   /*** derivatives for constraint 17 ***/

	J[302] = -heatexch_gen2_pd[16];
	J[68] = x[65];
	J[346] = -x[65];
	J[147] = 1.;

   /*** derivatives for constraint 18 ***/

	J[305] = -heatexch_gen2_pd[17];
	J[88] = x[66];
	J[348] = -x[66];
	J[155] = 1.;

   /*** derivatives for constraint 19 ***/

	J[308] = -heatexch_gen2_pd[18];
	J[69] = x[67];
	J[350] = -x[67];
	J[163] = 1.;

   /*** derivatives for constraint 20 ***/

	J[311] = -heatexch_gen2_pd[19];
	J[89] = x[68];
	J[352] = -x[68];
	J[171] = 1.;

   /*** derivatives for constraint 21 ***/

	J[315] = -x[49];
	J[255] = -x[69];
	J[6] = 6.;

   /*** derivatives for constraint 22 ***/

	J[317] = -x[50];
	J[258] = -x[70];
	J[402] = 6.;

   /*** derivatives for constraint 23 ***/

	J[319] = -x[51];
	J[261] = -x[71];
	J[19] = 4.;

   /*** derivatives for constraint 24 ***/

	J[321] = -x[52];
	J[264] = -x[72];
	J[409] = 4.;

   /*** derivatives for constraint 25 ***/

	J[323] = -x[53];
	J[267] = -x[73];
	J[32] = 6.;

   /*** derivatives for constraint 26 ***/

	J[325] = -x[54];
	J[270] = -x[74];
	J[416] = 6.;

   /*** derivatives for constraint 27 ***/

	J[327] = -x[55];
	J[273] = -x[75];
	J[45] = 20.;

   /*** derivatives for constraint 28 ***/

	J[329] = -x[56];
	J[276] = -x[76];
	J[423] = 20.;

   /*** derivatives for constraint 29 ***/

	J[331] = -x[57];
	J[279] = -x[77];
	J[58] = 12.;

   /*** derivatives for constraint 30 ***/

	J[333] = -x[58];
	J[282] = -x[78];
	J[430] = 12.;

   /*** derivatives for constraint 31 ***/

	J[351] = -x[67];
	J[309] = -x[87];
	J[347] = -x[65];
	J[303] = -x[85];
	J[343] = -x[63];
	J[297] = -x[83];
	J[339] = -x[61];
	J[291] = -x[81];
	J[335] = -x[59];
	J[285] = -x[79];
	J[437] = 18.;

   /*** derivatives for constraint 32 ***/

	J[353] = -x[68];
	J[312] = -x[88];
	J[349] = -x[66];
	J[306] = -x[86];
	J[345] = -x[64];
	J[300] = -x[84];
	J[341] = -x[62];
	J[294] = -x[82];
	J[337] = -x[60];
	J[288] = -x[80];
	J[70] = 18.;

   /*** derivatives for constraint 33 ***/

	dv[0] = -heatexch_gen2_pd[24]*heatexch_gen2_pd[22];
	dv[1] = dv[0]*heatexch_gen2_pd[21];
	J[202] = dv[0]*heatexch_gen2_pd[20];
	J[204] = dv[1];
	J[204] += heatexch_gen2_pd[23];
	J[202] -= heatexch_gen2_pd[23];
	J[354] = 1.;

   /*** derivatives for constraint 34 ***/

	dv[0] = -heatexch_gen2_pd[29]*heatexch_gen2_pd[27];
	dv[1] = dv[0]*heatexch_gen2_pd[26];
	J[205] = dv[0]*heatexch_gen2_pd[25];
	J[208] = dv[1];
	J[208] += heatexch_gen2_pd[28];
	J[205] -= heatexch_gen2_pd[28];
	J[356] = 1.;

   /*** derivatives for constraint 35 ***/

	dv[0] = -heatexch_gen2_pd[34]*heatexch_gen2_pd[32];
	dv[1] = dv[0]*heatexch_gen2_pd[31];
	J[210] = dv[0]*heatexch_gen2_pd[30];
	J[212] = dv[1];
	J[212] += heatexch_gen2_pd[33];
	J[210] -= heatexch_gen2_pd[33];
	J[358] = 1.;

   /*** derivatives for constraint 36 ***/

	dv[0] = -heatexch_gen2_pd[39]*heatexch_gen2_pd[37];
	dv[1] = dv[0]*heatexch_gen2_pd[36];
	J[213] = dv[0]*heatexch_gen2_pd[35];
	J[216] = dv[1];
	J[216] += heatexch_gen2_pd[38];
	J[213] -= heatexch_gen2_pd[38];
	J[360] = 1.;

   /*** derivatives for constraint 37 ***/

	dv[0] = -heatexch_gen2_pd[44]*heatexch_gen2_pd[42];
	dv[1] = dv[0]*heatexch_gen2_pd[41];
	J[218] = dv[0]*heatexch_gen2_pd[40];
	J[220] = dv[1];
	J[220] += heatexch_gen2_pd[43];
	J[218] -= heatexch_gen2_pd[43];
	J[362] = 1.;

   /*** derivatives for constraint 38 ***/

	dv[0] = -heatexch_gen2_pd[49]*heatexch_gen2_pd[47];
	dv[1] = dv[0]*heatexch_gen2_pd[46];
	J[221] = dv[0]*heatexch_gen2_pd[45];
	J[224] = dv[1];
	J[224] += heatexch_gen2_pd[48];
	J[221] -= heatexch_gen2_pd[48];
	J[364] = 1.;

   /*** derivatives for constraint 39 ***/

	dv[0] = -heatexch_gen2_pd[54]*heatexch_gen2_pd[52];
	dv[1] = dv[0]*heatexch_gen2_pd[51];
	J[226] = dv[0]*heatexch_gen2_pd[50];
	J[228] = dv[1];
	J[228] += heatexch_gen2_pd[53];
	J[226] -= heatexch_gen2_pd[53];
	J[366] = 1.;

   /*** derivatives for constraint 40 ***/

	dv[0] = -heatexch_gen2_pd[59]*heatexch_gen2_pd[57];
	dv[1] = dv[0]*heatexch_gen2_pd[56];
	J[229] = dv[0]*heatexch_gen2_pd[55];
	J[232] = dv[1];
	J[232] += heatexch_gen2_pd[58];
	J[229] -= heatexch_gen2_pd[58];
	J[368] = 1.;

   /*** derivatives for constraint 41 ***/

	dv[0] = -heatexch_gen2_pd[64]*heatexch_gen2_pd[62];
	dv[1] = dv[0]*heatexch_gen2_pd[61];
	J[234] = dv[0]*heatexch_gen2_pd[60];
	J[236] = dv[1];
	J[236] += heatexch_gen2_pd[63];
	J[234] -= heatexch_gen2_pd[63];
	J[370] = 1.;

   /*** derivatives for constraint 42 ***/

	dv[0] = -heatexch_gen2_pd[69]*heatexch_gen2_pd[67];
	dv[1] = dv[0]*heatexch_gen2_pd[66];
	J[237] = dv[0]*heatexch_gen2_pd[65];
	J[240] = dv[1];
	J[240] += heatexch_gen2_pd[68];
	J[237] -= heatexch_gen2_pd[68];
	J[372] = 1.;

   /*** derivatives for constraint 43 ***/

	J[100] = -heatexch_gen2_pd[70];
	J[355] = -heatexch_gen2_pd[71];
	J[386] = 1.;

   /*** derivatives for constraint 44 ***/

	J[108] = -heatexch_gen2_pd[72];
	J[357] = -heatexch_gen2_pd[73];
	J[387] = 1.;

   /*** derivatives for constraint 45 ***/

	J[116] = -heatexch_gen2_pd[74];
	J[359] = -heatexch_gen2_pd[75];
	J[388] = 1.;

   /*** derivatives for constraint 46 ***/

	J[124] = -heatexch_gen2_pd[76];
	J[361] = -heatexch_gen2_pd[77];
	J[389] = 1.;

   /*** derivatives for constraint 47 ***/

	J[132] = -heatexch_gen2_pd[78];
	J[363] = -heatexch_gen2_pd[79];
	J[390] = 1.;

   /*** derivatives for constraint 48 ***/

	J[140] = -heatexch_gen2_pd[80];
	J[365] = -heatexch_gen2_pd[81];
	J[391] = 1.;

   /*** derivatives for constraint 49 ***/

	J[148] = -heatexch_gen2_pd[82];
	J[367] = -heatexch_gen2_pd[83];
	J[392] = 1.;

   /*** derivatives for constraint 50 ***/

	J[156] = -heatexch_gen2_pd[84];
	J[369] = -heatexch_gen2_pd[85];
	J[393] = 1.;

   /*** derivatives for constraint 51 ***/

	J[164] = -heatexch_gen2_pd[86];
	J[371] = -heatexch_gen2_pd[87];
	J[394] = 1.;

   /*** derivatives for constraint 52 ***/

	J[172] = -heatexch_gen2_pd[88];
	J[373] = -heatexch_gen2_pd[89];
	J[395] = 1.;

   /*** derivatives for constraint 53 ***/

	dv[0] = -heatexch_gen2_pd[92]*heatexch_gen2_pd[90];
	J[242] = dv[0]*0.0499999975000001;
	J[242] -= heatexch_gen2_pd[91];
	J[374] = 1.;

   /*** derivatives for constraint 54 ***/

	dv[0] = -heatexch_gen2_pd[95]*heatexch_gen2_pd[93];
	J[244] = dv[0]*0.01249999984375;
	J[244] -= heatexch_gen2_pd[94];
	J[376] = 1.;

   /*** derivatives for constraint 55 ***/

	dv[0] = -heatexch_gen2_pd[98]*heatexch_gen2_pd[96];
	J[246] = dv[0]*0.0166666663888889;
	J[246] -= heatexch_gen2_pd[97];
	J[378] = 1.;

   /*** derivatives for constraint 56 ***/

	dv[0] = -heatexch_gen2_pd[101]*heatexch_gen2_pd[99];
	J[248] = dv[0]*0.0166666663888889;
	J[248] -= heatexch_gen2_pd[100];
	J[380] = 1.;

   /*** derivatives for constraint 57 ***/

	dv[0] = -heatexch_gen2_pd[104]*heatexch_gen2_pd[102];
	J[250] = dv[0]*0.0499999975000001;
	J[250] -= heatexch_gen2_pd[103];
	J[382] = 1.;

   /*** derivatives for constraint 58 ***/

	dv[0] = -heatexch_gen2_pd[107]*heatexch_gen2_pd[105];
	J[252] = dv[0]*0.024999999375;
	J[252] -= heatexch_gen2_pd[106];
	J[384] = 1.;

   /*** derivatives for constraint 59 ***/

	J[178] = -heatexch_gen2_pd[108];
	J[375] = -heatexch_gen2_pd[109];
	J[396] = 1.;

   /*** derivatives for constraint 60 ***/

	J[182] = -heatexch_gen2_pd[110];
	J[377] = -heatexch_gen2_pd[111];
	J[397] = 1.;

   /*** derivatives for constraint 61 ***/

	J[186] = -heatexch_gen2_pd[112];
	J[379] = -heatexch_gen2_pd[113];
	J[398] = 1.;

   /*** derivatives for constraint 62 ***/

	J[190] = -heatexch_gen2_pd[114];
	J[381] = -heatexch_gen2_pd[115];
	J[399] = 1.;

   /*** derivatives for constraint 63 ***/

	J[194] = -heatexch_gen2_pd[116];
	J[383] = -heatexch_gen2_pd[117];
	J[400] = 1.;

   /*** derivatives for constraint 64 ***/

	J[198] = -heatexch_gen2_pd[118];
	J[385] = -heatexch_gen2_pd[119];
	J[401] = 1.;

   /*** derivatives for constraint 65 ***/

	J[1] = 6.;
	J[7] = -6.;
	J[101] = -1.;

   /*** derivatives for constraint 66 ***/

	J[8] = 6.;
	J[109] = -1.;
	J[403] = -6.;

   /*** derivatives for constraint 67 ***/

	J[14] = 4.;
	J[20] = -4.;
	J[117] = -1.;

   /*** derivatives for constraint 68 ***/

	J[21] = 4.;
	J[125] = -1.;
	J[410] = -4.;

   /*** derivatives for constraint 69 ***/

	J[27] = 6.;
	J[33] = -6.;
	J[133] = -1.;

   /*** derivatives for constraint 70 ***/

	J[34] = 6.;
	J[141] = -1.;
	J[417] = -6.;

   /*** derivatives for constraint 71 ***/

	J[40] = 20.;
	J[46] = -20.;
	J[149] = -1.;

   /*** derivatives for constraint 72 ***/

	J[47] = 20.;
	J[157] = -1.;
	J[424] = -20.;

   /*** derivatives for constraint 73 ***/

	J[53] = 12.;
	J[59] = -12.;
	J[165] = -1.;

   /*** derivatives for constraint 74 ***/

	J[60] = 12.;
	J[173] = -1.;
	J[431] = -12.;

   /*** derivatives for constraint 75 ***/

	J[71] = -18.;
	J[102] = -1.;
	J[118] = -1.;
	J[134] = -1.;
	J[150] = -1.;
	J[166] = -1.;
	J[438] = 18.;

   /*** derivatives for constraint 76 ***/

	J[72] = 18.;
	J[90] = -18.;
	J[110] = -1.;
	J[126] = -1.;
	J[142] = -1.;
	J[158] = -1.;
	J[174] = -1.;

   /*** derivatives for constraint 77 ***/

	J[179] = -1.;
	J[404] = 6.;

   /*** derivatives for constraint 78 ***/

	J[183] = -1.;
	J[411] = 4.;

   /*** derivatives for constraint 79 ***/

	J[187] = -1.;
	J[418] = 6.;

   /*** derivatives for constraint 80 ***/

	J[191] = -1.;
	J[425] = 20.;

   /*** derivatives for constraint 81 ***/

	J[195] = -1.;
	J[432] = 12.;

   /*** derivatives for constraint 82 ***/

	J[103] = -1.;
	J[111] = -1.;
	J[180] = -1.;

   /*** derivatives for constraint 83 ***/

	J[119] = -1.;
	J[127] = -1.;
	J[184] = -1.;

   /*** derivatives for constraint 84 ***/

	J[135] = -1.;
	J[143] = -1.;
	J[188] = -1.;

   /*** derivatives for constraint 85 ***/

	J[151] = -1.;
	J[159] = -1.;
	J[192] = -1.;

   /*** derivatives for constraint 86 ***/

	J[167] = -1.;
	J[175] = -1.;
	J[196] = -1.;

   /*** derivatives for constraint 87 ***/

	J[199] = -1.;
	J[439] = -18.;

   /*** derivatives for constraint 88 ***/

	J[104] = -1.;
	J[112] = -1.;
	J[120] = -1.;
	J[128] = -1.;
	J[136] = -1.;
	J[144] = -1.;
	J[152] = -1.;
	J[160] = -1.;
	J[168] = -1.;
	J[176] = -1.;
	J[200] = -1.;

   /*** derivatives for constraint 89 ***/

	J[2] = 1.;
	J[9] = -1.;

   /*** derivatives for constraint 90 ***/

	J[10] = 1.;
	J[405] = -1.;

   /*** derivatives for constraint 91 ***/

	J[15] = 1.;
	J[22] = -1.;

   /*** derivatives for constraint 92 ***/

	J[23] = 1.;
	J[412] = -1.;

   /*** derivatives for constraint 93 ***/

	J[28] = 1.;
	J[35] = -1.;

   /*** derivatives for constraint 94 ***/

	J[36] = 1.;
	J[419] = -1.;

   /*** derivatives for constraint 95 ***/

	J[41] = 1.;
	J[48] = -1.;

   /*** derivatives for constraint 96 ***/

	J[49] = 1.;
	J[426] = -1.;

   /*** derivatives for constraint 97 ***/

	J[54] = 1.;
	J[61] = -1.;

   /*** derivatives for constraint 98 ***/

	J[62] = 1.;
	J[433] = -1.;

   /*** derivatives for constraint 99 ***/

	J[73] = -1.;
	J[440] = 1.;

   /*** derivatives for constraint 100 ***/

	J[74] = 1.;
	J[91] = -1.;

   /*** derivatives for constraint 101 ***/

	J[406] = 1.;

   /*** derivatives for constraint 102 ***/

	J[413] = 1.;

   /*** derivatives for constraint 103 ***/

	J[420] = 1.;

   /*** derivatives for constraint 104 ***/

	J[427] = 1.;

   /*** derivatives for constraint 105 ***/

	J[434] = 1.;

   /*** derivatives for constraint 106 ***/

	J[441] = -1.;

   /*** derivatives for constraint 107 ***/

	J[3] = -1.;

   /*** derivatives for constraint 108 ***/

	J[16] = -1.;

   /*** derivatives for constraint 109 ***/

	J[29] = -1.;

   /*** derivatives for constraint 110 ***/

	J[42] = -1.;

   /*** derivatives for constraint 111 ***/

	J[55] = -1.;

   /*** derivatives for constraint 112 ***/

	J[92] = -1.;

   /*** derivatives for constraint 113 ***/

	J[256] = -1.;

   /*** derivatives for constraint 114 ***/

	J[259] = -1.;

   /*** derivatives for constraint 115 ***/

	J[262] = -1.;

   /*** derivatives for constraint 116 ***/

	J[265] = -1.;

   /*** derivatives for constraint 117 ***/

	J[268] = -1.;

   /*** derivatives for constraint 118 ***/

	J[271] = -1.;

   /*** derivatives for constraint 119 ***/

	J[274] = -1.;

   /*** derivatives for constraint 120 ***/

	J[277] = -1.;

   /*** derivatives for constraint 121 ***/

	J[280] = -1.;

   /*** derivatives for constraint 122 ***/

	J[283] = -1.;

   /*** derivatives for constraint 123 ***/

	J[286] = -1.;
	J[292] = -1.;
	J[298] = -1.;
	J[304] = -1.;
	J[310] = -1.;

   /*** derivatives for constraint 124 ***/

	J[289] = -1.;
	J[295] = -1.;
	J[301] = -1.;
	J[307] = -1.;
	J[313] = -1.;

   /*** derivatives for constraint 125 ***/

	J[105] = 1.;
	J[448] = -1080.;

   /*** derivatives for constraint 126 ***/

	J[113] = 1.;
	J[451] = -1080.;

   /*** derivatives for constraint 127 ***/

	J[121] = 1.;
	J[454] = -400.;

   /*** derivatives for constraint 128 ***/

	J[129] = 1.;
	J[457] = -400.;

   /*** derivatives for constraint 129 ***/

	J[137] = 1.;
	J[460] = -600.;

   /*** derivatives for constraint 130 ***/

	J[145] = 1.;
	J[463] = -600.;

   /*** derivatives for constraint 131 ***/

	J[153] = 1.;
	J[466] = -400.;

   /*** derivatives for constraint 132 ***/

	J[161] = 1.;
	J[469] = -400.;

   /*** derivatives for constraint 133 ***/

	J[169] = 1.;
	J[472] = -720.;

   /*** derivatives for constraint 134 ***/

	J[177] = 1.;
	J[475] = -720.;

   /*** derivatives for constraint 135 ***/

	J[201] = 1.;
	J[483] = -6660.;

   /*** derivatives for constraint 136 ***/

	J[181] = 1.;
	J[478] = -1080.;

   /*** derivatives for constraint 137 ***/

	J[185] = 1.;
	J[479] = -400.;

   /*** derivatives for constraint 138 ***/

	J[189] = 1.;
	J[480] = -600.;

   /*** derivatives for constraint 139 ***/

	J[193] = 1.;
	J[481] = -400.;

   /*** derivatives for constraint 140 ***/

	J[197] = 1.;
	J[482] = -720.;

   /*** derivatives for constraint 141 ***/

	J[4] = -1.;
	J[203] = 1.;
	J[442] = 1.;
	J[449] = 340.;

   /*** derivatives for constraint 142 ***/

	J[11] = -1.;
	J[75] = 1.;
	J[206] = 1.;
	J[452] = 340.;

   /*** derivatives for constraint 143 ***/

	J[17] = -1.;
	J[211] = 1.;
	J[443] = 1.;
	J[455] = 280.;

   /*** derivatives for constraint 144 ***/

	J[24] = -1.;
	J[76] = 1.;
	J[214] = 1.;
	J[458] = 280.;

   /*** derivatives for constraint 145 ***/

	J[30] = -1.;
	J[219] = 1.;
	J[444] = 1.;
	J[461] = 300.;

   /*** derivatives for constraint 146 ***/

	J[37] = -1.;
	J[77] = 1.;
	J[222] = 1.;
	J[464] = 300.;

   /*** derivatives for constraint 147 ***/

	J[43] = -1.;
	J[227] = 1.;
	J[445] = 1.;
	J[467] = 300.;

   /*** derivatives for constraint 148 ***/

	J[50] = -1.;
	J[78] = 1.;
	J[230] = 1.;
	J[470] = 300.;

   /*** derivatives for constraint 149 ***/

	J[56] = -1.;
	J[235] = 1.;
	J[446] = 1.;
	J[473] = 340.;

   /*** derivatives for constraint 150 ***/

	J[63] = -1.;
	J[79] = 1.;
	J[238] = 1.;
	J[476] = 340.;

   /*** derivatives for constraint 151 ***/

	J[12] = -1.;
	J[80] = 1.;
	J[207] = 1.;
	J[450] = 340.;

   /*** derivatives for constraint 152 ***/

	J[93] = 1.;
	J[209] = 1.;
	J[407] = -1.;
	J[453] = 340.;

   /*** derivatives for constraint 153 ***/

	J[25] = -1.;
	J[81] = 1.;
	J[215] = 1.;
	J[456] = 280.;

   /*** derivatives for constraint 154 ***/

	J[94] = 1.;
	J[217] = 1.;
	J[414] = -1.;
	J[459] = 280.;

   /*** derivatives for constraint 155 ***/

	J[38] = -1.;
	J[82] = 1.;
	J[223] = 1.;
	J[462] = 300.;

   /*** derivatives for constraint 156 ***/

	J[95] = 1.;
	J[225] = 1.;
	J[421] = -1.;
	J[465] = 300.;

   /*** derivatives for constraint 157 ***/

	J[51] = -1.;
	J[83] = 1.;
	J[231] = 1.;
	J[468] = 300.;

   /*** derivatives for constraint 158 ***/

	J[96] = 1.;
	J[233] = 1.;
	J[428] = -1.;
	J[471] = 300.;

   /*** derivatives for constraint 159 ***/

	J[64] = -1.;
	J[84] = 1.;
	J[239] = 1.;
	J[474] = 340.;

   /*** derivatives for constraint 160 ***/

	J[97] = 1.;
	J[241] = 1.;
	J[435] = -1.;
	J[477] = 340.;

   /*** derivatives for constraint 161 ***/

	J[243] = 1.;
	J[408] = -1.;

   /*** derivatives for constraint 162 ***/

	J[245] = 1.;
	J[415] = -1.;

   /*** derivatives for constraint 163 ***/

	J[247] = 1.;
	J[422] = -1.;

   /*** derivatives for constraint 164 ***/

	J[249] = 1.;
	J[429] = -1.;

   /*** derivatives for constraint 165 ***/

	J[251] = 1.;
	J[436] = -1.;

   /*** derivatives for constraint 166 ***/

	J[253] = 1.;
	J[447] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
