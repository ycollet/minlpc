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
 fint tspn15_auxcom_[1] = { 15 /* nlc */ };
 fint tspn15_funcom_[509] = {
	135 /* nvar */,
	1 /* nobj */,
	34 /* ncon */,
	367 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

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
	34,
	36,
	40,
	44,
	49,
	53,
	59,
	63,
	69,
	71,
	75,
	77,
	80,
	86,
	88,
	91,
	94,
	97,
	100,
	103,
	106,
	109,
	111,
	114,
	116,
	119,
	122,
	124,
	126,
	128,
	130,
	132,
	134,
	136,
	138,
	140,
	142,
	144,
	146,
	150,
	154,
	158,
	162,
	166,
	170,
	172,
	176,
	178,
	181,
	185,
	189,
	193,
	197,
	201,
	205,
	207,
	211,
	213,
	216,
	220,
	224,
	229,
	233,
	238,
	240,
	244,
	246,
	249,
	254,
	258,
	262,
	266,
	268,
	272,
	274,
	277,
	281,
	285,
	291,
	293,
	297,
	299,
	302,
	308,
	312,
	314,
	318,
	320,
	323,
	327,
	329,
	333,
	335,
	338,
	344,
	346,
	348,
	350,
	352,
	354,
	357,
	361,
	363,
	365,
	368,

	/* rownos */
	1,
	1,
	2,
	2,
	3,
	3,
	4,
	4,
	5,
	5,
	6,
	6,
	7,
	7,
	8,
	8,
	9,
	9,
	10,
	10,
	11,
	11,
	12,
	12,
	13,
	13,
	14,
	14,
	15,
	15,
	16,
	17,
	33,
	16,
	18,
	16,
	19,
	33,
	34,
	16,
	20,
	33,
	34,
	16,
	21,
	31,
	33,
	34,
	16,
	22,
	33,
	34,
	16,
	23,
	31,
	32,
	33,
	34,
	16,
	24,
	33,
	34,
	16,
	25,
	31,
	32,
	33,
	34,
	16,
	26,
	16,
	27,
	33,
	34,
	16,
	28,
	16,
	29,
	33,
	16,
	30,
	31,
	32,
	33,
	34,
	17,
	18,
	17,
	19,
	33,
	17,
	20,
	33,
	17,
	21,
	33,
	17,
	22,
	33,
	17,
	23,
	33,
	17,
	24,
	33,
	17,
	25,
	33,
	17,
	26,
	17,
	27,
	33,
	17,
	28,
	17,
	29,
	33,
	17,
	30,
	33,
	18,
	19,
	18,
	20,
	18,
	21,
	18,
	22,
	18,
	23,
	18,
	24,
	18,
	25,
	18,
	26,
	18,
	27,
	18,
	28,
	18,
	29,
	18,
	30,
	19,
	20,
	33,
	34,
	19,
	21,
	33,
	34,
	19,
	22,
	33,
	34,
	19,
	23,
	33,
	34,
	19,
	24,
	33,
	34,
	19,
	25,
	33,
	34,
	19,
	26,
	19,
	27,
	33,
	34,
	19,
	28,
	19,
	29,
	33,
	19,
	30,
	33,
	34,
	20,
	21,
	33,
	34,
	20,
	22,
	33,
	34,
	20,
	23,
	33,
	34,
	20,
	24,
	33,
	34,
	20,
	25,
	33,
	34,
	20,
	26,
	20,
	27,
	33,
	34,
	20,
	28,
	20,
	29,
	33,
	20,
	30,
	33,
	34,
	21,
	22,
	33,
	34,
	21,
	23,
	31,
	33,
	34,
	21,
	24,
	33,
	34,
	21,
	25,
	31,
	33,
	34,
	21,
	26,
	21,
	27,
	33,
	34,
	21,
	28,
	21,
	29,
	33,
	21,
	30,
	31,
	33,
	34,
	22,
	23,
	33,
	34,
	22,
	24,
	33,
	34,
	22,
	25,
	33,
	34,
	22,
	26,
	22,
	27,
	33,
	34,
	22,
	28,
	22,
	29,
	33,
	22,
	30,
	33,
	34,
	23,
	24,
	33,
	34,
	23,
	25,
	31,
	32,
	33,
	34,
	23,
	26,
	23,
	27,
	33,
	34,
	23,
	28,
	23,
	29,
	33,
	23,
	30,
	31,
	32,
	33,
	34,
	24,
	25,
	33,
	34,
	24,
	26,
	24,
	27,
	33,
	34,
	24,
	28,
	24,
	29,
	33,
	24,
	30,
	33,
	34,
	25,
	26,
	25,
	27,
	33,
	34,
	25,
	28,
	25,
	29,
	33,
	25,
	30,
	31,
	32,
	33,
	34,
	26,
	27,
	26,
	28,
	26,
	29,
	26,
	30,
	27,
	28,
	27,
	29,
	33,
	27,
	30,
	33,
	34,
	28,
	29,
	28,
	30,
	29,
	30,
	33 };

 real tspn15_boundc_[1+270+68] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		67.,
		75.,
		0.,
		15.,
		19.,
		35.,
		86.,
		94.,
		7.,
		18.,
		37.,
		44.,
		81.,
		90.,
		62.,
		74.,
		70.,
		76.,
		101.,
		103.,
		53.,
		63.,
		44.,
		48.,
		42.,
		52.,
		71.,
		73.,
		98.,
		105.,
		16.,
		24.,
		45.,
		54.,
		68.,
		84.,
		76.,
		86.,
		38.,
		49.,
		10.,
		24.,
		45.,
		52.,
		87.,
		95.,
		85.,
		88.,
		6.,
		7.,
		30.,
		46.,
		0.,
		7.,
		94.,
		105.,
		77.,
		85.,
		29.,
		39.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		-315.0625,
		-1.7e308,
		-516.640625,
		-1.7e308,
		-138.063248439872,
		-1.7e308,
		-488.444444444444,
		-1.7e308,
		-10995.1111111111,
		-1.7e308,
		-662.56,
		-1.7e308,
		-5271.36,
		-1.7e308,
		-865.,
		-1.7e308,
		-210.25,
		-1.7e308,
		-323.993719008264,
		-1.7e308,
		-196.918367346939,
		-1.7e308,
		-3842.00694444444,
		-1.7e308,
		-190.5625,
		-1.7e308,
		-327.280991735537,
		-1.7e308,
		-455.3025,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		-1.7e308,
		4.,
		-1.7e308,
		3.,
		-1.7e308,
		11.,
		-1.7e308,
		9.};

 real tspn15_x0comn_[135] = {
		67.,
		0.,
		19.,
		86.,
		7.,
		37.,
		81.,
		62.,
		70.,
		101.,
		53.,
		44.,
		42.,
		71.,
		98.,
		16.,
		45.,
		68.,
		76.,
		38.,
		10.,
		45.,
		87.,
		85.,
		6.,
		30.,
		0.,
		94.,
		77.,
		29.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real tspn15_pd[478];
static real tspn15_old_x[135];
static int tspn15_xkind = -1;

 static int
tspn15_xcheck(real *x)
{
	real *x1 = tspn15_old_x, *xe = x + 135;
	errno = 0;
	if (tspn15_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tspn15_xkind = 0;
	return 1;
	}
 real
tspn15_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[210];
	fint wantfg = *needfg;
	if (tspn15_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] - x[2];
	v[1] = v[0] * v[0];
	tspn15_pd[58] = v[0] + v[0];
	v[0] = x[1] - x[3];
	v[2] = v[0] * v[0];
	tspn15_pd[59] = v[0] + v[0];
	v[0] = v[1] + v[2];
	tspn15_pd[60] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (tspn15_pd[60] <= 0.) {
	domain_("sqrt'", &tspn15_pd[60], 5L);
	}
	tspn15_pd[61] = 0.5 / tspn15_pd[60];
	v[0] = tspn15_pd[60] * x[30];
	v[2] = x[0] - x[4];
	v[1] = v[2] * v[2];
	tspn15_pd[62] = v[2] + v[2];
	v[2] = x[1] - x[5];
	v[3] = v[2] * v[2];
	tspn15_pd[63] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[64] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[64] <= 0.) {
	domain_("sqrt'", &tspn15_pd[64], 5L);
	}
	tspn15_pd[65] = 0.5 / tspn15_pd[64];
	v[2] = tspn15_pd[64] * x[31];
	v[0] += v[2];
	v[2] = x[0] - x[6];
	v[3] = v[2] * v[2];
	tspn15_pd[66] = v[2] + v[2];
	v[2] = x[1] - x[7];
	v[1] = v[2] * v[2];
	tspn15_pd[67] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[68] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[68] <= 0.) {
	domain_("sqrt'", &tspn15_pd[68], 5L);
	}
	tspn15_pd[69] = 0.5 / tspn15_pd[68];
	v[2] = tspn15_pd[68] * x[32];
	v[0] += v[2];
	v[2] = x[0] - x[8];
	v[1] = v[2] * v[2];
	tspn15_pd[70] = v[2] + v[2];
	v[2] = x[1] - x[9];
	v[3] = v[2] * v[2];
	tspn15_pd[71] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[72] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[72] <= 0.) {
	domain_("sqrt'", &tspn15_pd[72], 5L);
	}
	tspn15_pd[73] = 0.5 / tspn15_pd[72];
	v[2] = tspn15_pd[72] * x[33];
	v[0] += v[2];
	v[2] = x[0] - x[10];
	v[3] = v[2] * v[2];
	tspn15_pd[74] = v[2] + v[2];
	v[2] = x[1] - x[11];
	v[1] = v[2] * v[2];
	tspn15_pd[75] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[76] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[76] <= 0.) {
	domain_("sqrt'", &tspn15_pd[76], 5L);
	}
	tspn15_pd[77] = 0.5 / tspn15_pd[76];
	v[2] = tspn15_pd[76] * x[34];
	v[0] += v[2];
	v[2] = x[0] - x[12];
	v[1] = v[2] * v[2];
	tspn15_pd[78] = v[2] + v[2];
	v[2] = x[1] - x[13];
	v[3] = v[2] * v[2];
	tspn15_pd[79] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[80] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[80] <= 0.) {
	domain_("sqrt'", &tspn15_pd[80], 5L);
	}
	tspn15_pd[81] = 0.5 / tspn15_pd[80];
	v[2] = tspn15_pd[80] * x[35];
	v[0] += v[2];
	v[2] = x[0] - x[14];
	v[3] = v[2] * v[2];
	tspn15_pd[82] = v[2] + v[2];
	v[2] = x[1] - x[15];
	v[1] = v[2] * v[2];
	tspn15_pd[83] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[84] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[84] <= 0.) {
	domain_("sqrt'", &tspn15_pd[84], 5L);
	}
	tspn15_pd[85] = 0.5 / tspn15_pd[84];
	v[2] = tspn15_pd[84] * x[36];
	v[0] += v[2];
	v[2] = x[0] - x[16];
	v[1] = v[2] * v[2];
	tspn15_pd[86] = v[2] + v[2];
	v[2] = x[1] - x[17];
	v[3] = v[2] * v[2];
	tspn15_pd[87] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[88] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[88] <= 0.) {
	domain_("sqrt'", &tspn15_pd[88], 5L);
	}
	tspn15_pd[89] = 0.5 / tspn15_pd[88];
	v[2] = tspn15_pd[88] * x[37];
	v[0] += v[2];
	v[2] = x[0] - x[18];
	v[3] = v[2] * v[2];
	tspn15_pd[90] = v[2] + v[2];
	v[2] = x[1] - x[19];
	v[1] = v[2] * v[2];
	tspn15_pd[91] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[92] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[92] <= 0.) {
	domain_("sqrt'", &tspn15_pd[92], 5L);
	}
	tspn15_pd[93] = 0.5 / tspn15_pd[92];
	v[2] = tspn15_pd[92] * x[38];
	v[0] += v[2];
	v[2] = x[0] - x[20];
	v[1] = v[2] * v[2];
	tspn15_pd[94] = v[2] + v[2];
	v[2] = x[1] - x[21];
	v[3] = v[2] * v[2];
	tspn15_pd[95] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[96] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[96] <= 0.) {
	domain_("sqrt'", &tspn15_pd[96], 5L);
	}
	tspn15_pd[97] = 0.5 / tspn15_pd[96];
	v[2] = tspn15_pd[96] * x[39];
	v[0] += v[2];
	v[2] = x[0] - x[22];
	v[3] = v[2] * v[2];
	tspn15_pd[98] = v[2] + v[2];
	v[2] = x[1] - x[23];
	v[1] = v[2] * v[2];
	tspn15_pd[99] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[100] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[100] <= 0.) {
	domain_("sqrt'", &tspn15_pd[100], 5L);
	}
	tspn15_pd[101] = 0.5 / tspn15_pd[100];
	v[2] = tspn15_pd[100] * x[40];
	v[0] += v[2];
	v[2] = x[0] - x[24];
	v[1] = v[2] * v[2];
	tspn15_pd[102] = v[2] + v[2];
	v[2] = x[1] - x[25];
	v[3] = v[2] * v[2];
	tspn15_pd[103] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[104] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[104] <= 0.) {
	domain_("sqrt'", &tspn15_pd[104], 5L);
	}
	tspn15_pd[105] = 0.5 / tspn15_pd[104];
	v[2] = tspn15_pd[104] * x[41];
	v[0] += v[2];
	v[2] = x[0] - x[26];
	v[3] = v[2] * v[2];
	tspn15_pd[106] = v[2] + v[2];
	v[2] = x[1] - x[27];
	v[1] = v[2] * v[2];
	tspn15_pd[107] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[108] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[108] <= 0.) {
	domain_("sqrt'", &tspn15_pd[108], 5L);
	}
	tspn15_pd[109] = 0.5 / tspn15_pd[108];
	v[2] = tspn15_pd[108] * x[42];
	v[0] += v[2];
	v[2] = x[0] - x[28];
	v[1] = v[2] * v[2];
	tspn15_pd[110] = v[2] + v[2];
	v[2] = x[1] - x[29];
	v[3] = v[2] * v[2];
	tspn15_pd[111] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[112] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[112] <= 0.) {
	domain_("sqrt'", &tspn15_pd[112], 5L);
	}
	tspn15_pd[113] = 0.5 / tspn15_pd[112];
	v[2] = tspn15_pd[112] * x[43];
	v[0] += v[2];
	v[2] = x[2] - x[4];
	v[3] = v[2] * v[2];
	tspn15_pd[114] = v[2] + v[2];
	v[2] = x[3] - x[5];
	v[1] = v[2] * v[2];
	tspn15_pd[115] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[116] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[116] <= 0.) {
	domain_("sqrt'", &tspn15_pd[116], 5L);
	}
	tspn15_pd[117] = 0.5 / tspn15_pd[116];
	v[2] = tspn15_pd[116] * x[44];
	v[0] += v[2];
	v[2] = x[2] - x[6];
	v[1] = v[2] * v[2];
	tspn15_pd[118] = v[2] + v[2];
	v[2] = x[3] - x[7];
	v[3] = v[2] * v[2];
	tspn15_pd[119] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[120] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[120] <= 0.) {
	domain_("sqrt'", &tspn15_pd[120], 5L);
	}
	tspn15_pd[121] = 0.5 / tspn15_pd[120];
	v[2] = tspn15_pd[120] * x[45];
	v[0] += v[2];
	v[2] = x[2] - x[8];
	v[3] = v[2] * v[2];
	tspn15_pd[122] = v[2] + v[2];
	v[2] = x[3] - x[9];
	v[1] = v[2] * v[2];
	tspn15_pd[123] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[124] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[124] <= 0.) {
	domain_("sqrt'", &tspn15_pd[124], 5L);
	}
	tspn15_pd[125] = 0.5 / tspn15_pd[124];
	v[2] = tspn15_pd[124] * x[46];
	v[0] += v[2];
	v[2] = x[2] - x[10];
	v[1] = v[2] * v[2];
	tspn15_pd[126] = v[2] + v[2];
	v[2] = x[3] - x[11];
	v[3] = v[2] * v[2];
	tspn15_pd[127] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[128] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[128] <= 0.) {
	domain_("sqrt'", &tspn15_pd[128], 5L);
	}
	tspn15_pd[129] = 0.5 / tspn15_pd[128];
	v[2] = tspn15_pd[128] * x[47];
	v[0] += v[2];
	v[2] = x[2] - x[12];
	v[3] = v[2] * v[2];
	tspn15_pd[130] = v[2] + v[2];
	v[2] = x[3] - x[13];
	v[1] = v[2] * v[2];
	tspn15_pd[131] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[132] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[132] <= 0.) {
	domain_("sqrt'", &tspn15_pd[132], 5L);
	}
	tspn15_pd[133] = 0.5 / tspn15_pd[132];
	v[2] = tspn15_pd[132] * x[48];
	v[0] += v[2];
	v[2] = x[2] - x[14];
	v[1] = v[2] * v[2];
	tspn15_pd[134] = v[2] + v[2];
	v[2] = x[3] - x[15];
	v[3] = v[2] * v[2];
	tspn15_pd[135] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[136] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[136] <= 0.) {
	domain_("sqrt'", &tspn15_pd[136], 5L);
	}
	tspn15_pd[137] = 0.5 / tspn15_pd[136];
	v[2] = tspn15_pd[136] * x[49];
	v[0] += v[2];
	v[2] = x[2] - x[16];
	v[3] = v[2] * v[2];
	tspn15_pd[138] = v[2] + v[2];
	v[2] = x[3] - x[17];
	v[1] = v[2] * v[2];
	tspn15_pd[139] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[140] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[140] <= 0.) {
	domain_("sqrt'", &tspn15_pd[140], 5L);
	}
	tspn15_pd[141] = 0.5 / tspn15_pd[140];
	v[2] = tspn15_pd[140] * x[50];
	v[0] += v[2];
	v[2] = x[2] - x[18];
	v[1] = v[2] * v[2];
	tspn15_pd[142] = v[2] + v[2];
	v[2] = x[3] - x[19];
	v[3] = v[2] * v[2];
	tspn15_pd[143] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[144] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[144] <= 0.) {
	domain_("sqrt'", &tspn15_pd[144], 5L);
	}
	tspn15_pd[145] = 0.5 / tspn15_pd[144];
	v[2] = tspn15_pd[144] * x[51];
	v[0] += v[2];
	v[2] = x[2] - x[20];
	v[3] = v[2] * v[2];
	tspn15_pd[146] = v[2] + v[2];
	v[2] = x[3] - x[21];
	v[1] = v[2] * v[2];
	tspn15_pd[147] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[148] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[148] <= 0.) {
	domain_("sqrt'", &tspn15_pd[148], 5L);
	}
	tspn15_pd[149] = 0.5 / tspn15_pd[148];
	v[2] = tspn15_pd[148] * x[52];
	v[0] += v[2];
	v[2] = x[2] - x[22];
	v[1] = v[2] * v[2];
	tspn15_pd[150] = v[2] + v[2];
	v[2] = x[3] - x[23];
	v[3] = v[2] * v[2];
	tspn15_pd[151] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[152] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[152] <= 0.) {
	domain_("sqrt'", &tspn15_pd[152], 5L);
	}
	tspn15_pd[153] = 0.5 / tspn15_pd[152];
	v[2] = tspn15_pd[152] * x[53];
	v[0] += v[2];
	v[2] = x[2] - x[24];
	v[3] = v[2] * v[2];
	tspn15_pd[154] = v[2] + v[2];
	v[2] = x[3] - x[25];
	v[1] = v[2] * v[2];
	tspn15_pd[155] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[156] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[156] <= 0.) {
	domain_("sqrt'", &tspn15_pd[156], 5L);
	}
	tspn15_pd[157] = 0.5 / tspn15_pd[156];
	v[2] = tspn15_pd[156] * x[54];
	v[0] += v[2];
	v[2] = x[2] - x[26];
	v[1] = v[2] * v[2];
	tspn15_pd[158] = v[2] + v[2];
	v[2] = x[3] - x[27];
	v[3] = v[2] * v[2];
	tspn15_pd[159] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[160] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[160] <= 0.) {
	domain_("sqrt'", &tspn15_pd[160], 5L);
	}
	tspn15_pd[161] = 0.5 / tspn15_pd[160];
	v[2] = tspn15_pd[160] * x[55];
	v[0] += v[2];
	v[2] = x[2] - x[28];
	v[3] = v[2] * v[2];
	tspn15_pd[162] = v[2] + v[2];
	v[2] = x[3] - x[29];
	v[1] = v[2] * v[2];
	tspn15_pd[163] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[164] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[164] <= 0.) {
	domain_("sqrt'", &tspn15_pd[164], 5L);
	}
	tspn15_pd[165] = 0.5 / tspn15_pd[164];
	v[2] = tspn15_pd[164] * x[56];
	v[0] += v[2];
	v[2] = x[4] - x[6];
	v[1] = v[2] * v[2];
	tspn15_pd[166] = v[2] + v[2];
	v[2] = x[5] - x[7];
	v[3] = v[2] * v[2];
	tspn15_pd[167] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[168] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[168] <= 0.) {
	domain_("sqrt'", &tspn15_pd[168], 5L);
	}
	tspn15_pd[169] = 0.5 / tspn15_pd[168];
	v[2] = tspn15_pd[168] * x[57];
	v[0] += v[2];
	v[2] = x[4] - x[8];
	v[3] = v[2] * v[2];
	tspn15_pd[170] = v[2] + v[2];
	v[2] = x[5] - x[9];
	v[1] = v[2] * v[2];
	tspn15_pd[171] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[172] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[172] <= 0.) {
	domain_("sqrt'", &tspn15_pd[172], 5L);
	}
	tspn15_pd[173] = 0.5 / tspn15_pd[172];
	v[2] = tspn15_pd[172] * x[58];
	v[0] += v[2];
	v[2] = x[4] - x[10];
	v[1] = v[2] * v[2];
	tspn15_pd[174] = v[2] + v[2];
	v[2] = x[5] - x[11];
	v[3] = v[2] * v[2];
	tspn15_pd[175] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[176] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[176] <= 0.) {
	domain_("sqrt'", &tspn15_pd[176], 5L);
	}
	tspn15_pd[177] = 0.5 / tspn15_pd[176];
	v[2] = tspn15_pd[176] * x[59];
	v[0] += v[2];
	v[2] = x[4] - x[12];
	v[3] = v[2] * v[2];
	tspn15_pd[178] = v[2] + v[2];
	v[2] = x[5] - x[13];
	v[1] = v[2] * v[2];
	tspn15_pd[179] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[180] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[180] <= 0.) {
	domain_("sqrt'", &tspn15_pd[180], 5L);
	}
	tspn15_pd[181] = 0.5 / tspn15_pd[180];
	v[2] = tspn15_pd[180] * x[60];
	v[0] += v[2];
	v[2] = x[4] - x[14];
	v[1] = v[2] * v[2];
	tspn15_pd[182] = v[2] + v[2];
	v[2] = x[5] - x[15];
	v[3] = v[2] * v[2];
	tspn15_pd[183] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[184] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[184] <= 0.) {
	domain_("sqrt'", &tspn15_pd[184], 5L);
	}
	tspn15_pd[185] = 0.5 / tspn15_pd[184];
	v[2] = tspn15_pd[184] * x[61];
	v[0] += v[2];
	v[2] = x[4] - x[16];
	v[3] = v[2] * v[2];
	tspn15_pd[186] = v[2] + v[2];
	v[2] = x[5] - x[17];
	v[1] = v[2] * v[2];
	tspn15_pd[187] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[188] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[188] <= 0.) {
	domain_("sqrt'", &tspn15_pd[188], 5L);
	}
	tspn15_pd[189] = 0.5 / tspn15_pd[188];
	v[2] = tspn15_pd[188] * x[62];
	v[0] += v[2];
	v[2] = x[4] - x[18];
	v[1] = v[2] * v[2];
	tspn15_pd[190] = v[2] + v[2];
	v[2] = x[5] - x[19];
	v[3] = v[2] * v[2];
	tspn15_pd[191] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[192] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[192] <= 0.) {
	domain_("sqrt'", &tspn15_pd[192], 5L);
	}
	tspn15_pd[193] = 0.5 / tspn15_pd[192];
	v[2] = tspn15_pd[192] * x[63];
	v[0] += v[2];
	v[2] = x[4] - x[20];
	v[3] = v[2] * v[2];
	tspn15_pd[194] = v[2] + v[2];
	v[2] = x[5] - x[21];
	v[1] = v[2] * v[2];
	tspn15_pd[195] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[196] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[196] <= 0.) {
	domain_("sqrt'", &tspn15_pd[196], 5L);
	}
	tspn15_pd[197] = 0.5 / tspn15_pd[196];
	v[2] = tspn15_pd[196] * x[64];
	v[0] += v[2];
	v[2] = x[4] - x[22];
	v[1] = v[2] * v[2];
	tspn15_pd[198] = v[2] + v[2];
	v[2] = x[5] - x[23];
	v[3] = v[2] * v[2];
	tspn15_pd[199] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[200] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[200] <= 0.) {
	domain_("sqrt'", &tspn15_pd[200], 5L);
	}
	tspn15_pd[201] = 0.5 / tspn15_pd[200];
	v[2] = tspn15_pd[200] * x[65];
	v[0] += v[2];
	v[2] = x[4] - x[24];
	v[3] = v[2] * v[2];
	tspn15_pd[202] = v[2] + v[2];
	v[2] = x[5] - x[25];
	v[1] = v[2] * v[2];
	tspn15_pd[203] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[204] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[204] <= 0.) {
	domain_("sqrt'", &tspn15_pd[204], 5L);
	}
	tspn15_pd[205] = 0.5 / tspn15_pd[204];
	v[2] = tspn15_pd[204] * x[66];
	v[0] += v[2];
	v[2] = x[4] - x[26];
	v[1] = v[2] * v[2];
	tspn15_pd[206] = v[2] + v[2];
	v[2] = x[5] - x[27];
	v[3] = v[2] * v[2];
	tspn15_pd[207] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[208] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[208] <= 0.) {
	domain_("sqrt'", &tspn15_pd[208], 5L);
	}
	tspn15_pd[209] = 0.5 / tspn15_pd[208];
	v[2] = tspn15_pd[208] * x[67];
	v[0] += v[2];
	v[2] = x[4] - x[28];
	v[3] = v[2] * v[2];
	tspn15_pd[210] = v[2] + v[2];
	v[2] = x[5] - x[29];
	v[1] = v[2] * v[2];
	tspn15_pd[211] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[212] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[212] <= 0.) {
	domain_("sqrt'", &tspn15_pd[212], 5L);
	}
	tspn15_pd[213] = 0.5 / tspn15_pd[212];
	v[2] = tspn15_pd[212] * x[68];
	v[0] += v[2];
	v[2] = x[6] - x[8];
	v[1] = v[2] * v[2];
	tspn15_pd[214] = v[2] + v[2];
	v[2] = x[7] - x[9];
	v[3] = v[2] * v[2];
	tspn15_pd[215] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[216] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[216] <= 0.) {
	domain_("sqrt'", &tspn15_pd[216], 5L);
	}
	tspn15_pd[217] = 0.5 / tspn15_pd[216];
	v[2] = tspn15_pd[216] * x[69];
	v[0] += v[2];
	v[2] = x[6] - x[10];
	v[3] = v[2] * v[2];
	tspn15_pd[218] = v[2] + v[2];
	v[2] = x[7] - x[11];
	v[1] = v[2] * v[2];
	tspn15_pd[219] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[220] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[220] <= 0.) {
	domain_("sqrt'", &tspn15_pd[220], 5L);
	}
	tspn15_pd[221] = 0.5 / tspn15_pd[220];
	v[2] = tspn15_pd[220] * x[70];
	v[0] += v[2];
	v[2] = x[6] - x[12];
	v[1] = v[2] * v[2];
	tspn15_pd[222] = v[2] + v[2];
	v[2] = x[7] - x[13];
	v[3] = v[2] * v[2];
	tspn15_pd[223] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[224] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[224] <= 0.) {
	domain_("sqrt'", &tspn15_pd[224], 5L);
	}
	tspn15_pd[225] = 0.5 / tspn15_pd[224];
	v[2] = tspn15_pd[224] * x[71];
	v[0] += v[2];
	v[2] = x[6] - x[14];
	v[3] = v[2] * v[2];
	tspn15_pd[226] = v[2] + v[2];
	v[2] = x[7] - x[15];
	v[1] = v[2] * v[2];
	tspn15_pd[227] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[228] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[228] <= 0.) {
	domain_("sqrt'", &tspn15_pd[228], 5L);
	}
	tspn15_pd[229] = 0.5 / tspn15_pd[228];
	v[2] = tspn15_pd[228] * x[72];
	v[0] += v[2];
	v[2] = x[6] - x[16];
	v[1] = v[2] * v[2];
	tspn15_pd[230] = v[2] + v[2];
	v[2] = x[7] - x[17];
	v[3] = v[2] * v[2];
	tspn15_pd[231] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[232] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[232] <= 0.) {
	domain_("sqrt'", &tspn15_pd[232], 5L);
	}
	tspn15_pd[233] = 0.5 / tspn15_pd[232];
	v[2] = tspn15_pd[232] * x[73];
	v[0] += v[2];
	v[2] = x[6] - x[18];
	v[3] = v[2] * v[2];
	tspn15_pd[234] = v[2] + v[2];
	v[2] = x[7] - x[19];
	v[1] = v[2] * v[2];
	tspn15_pd[235] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[236] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[236] <= 0.) {
	domain_("sqrt'", &tspn15_pd[236], 5L);
	}
	tspn15_pd[237] = 0.5 / tspn15_pd[236];
	v[2] = tspn15_pd[236] * x[74];
	v[0] += v[2];
	v[2] = x[6] - x[20];
	v[1] = v[2] * v[2];
	tspn15_pd[238] = v[2] + v[2];
	v[2] = x[7] - x[21];
	v[3] = v[2] * v[2];
	tspn15_pd[239] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[240] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[240] <= 0.) {
	domain_("sqrt'", &tspn15_pd[240], 5L);
	}
	tspn15_pd[241] = 0.5 / tspn15_pd[240];
	v[2] = tspn15_pd[240] * x[75];
	v[0] += v[2];
	v[2] = x[6] - x[22];
	v[3] = v[2] * v[2];
	tspn15_pd[242] = v[2] + v[2];
	v[2] = x[7] - x[23];
	v[1] = v[2] * v[2];
	tspn15_pd[243] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[244] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[244] <= 0.) {
	domain_("sqrt'", &tspn15_pd[244], 5L);
	}
	tspn15_pd[245] = 0.5 / tspn15_pd[244];
	v[2] = tspn15_pd[244] * x[76];
	v[0] += v[2];
	v[2] = x[6] - x[24];
	v[1] = v[2] * v[2];
	tspn15_pd[246] = v[2] + v[2];
	v[2] = x[7] - x[25];
	v[3] = v[2] * v[2];
	tspn15_pd[247] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[248] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[248] <= 0.) {
	domain_("sqrt'", &tspn15_pd[248], 5L);
	}
	tspn15_pd[249] = 0.5 / tspn15_pd[248];
	v[2] = tspn15_pd[248] * x[77];
	v[0] += v[2];
	v[2] = x[6] - x[26];
	v[3] = v[2] * v[2];
	tspn15_pd[250] = v[2] + v[2];
	v[2] = x[7] - x[27];
	v[1] = v[2] * v[2];
	tspn15_pd[251] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[252] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[252] <= 0.) {
	domain_("sqrt'", &tspn15_pd[252], 5L);
	}
	tspn15_pd[253] = 0.5 / tspn15_pd[252];
	v[2] = tspn15_pd[252] * x[78];
	v[0] += v[2];
	v[2] = x[6] - x[28];
	v[1] = v[2] * v[2];
	tspn15_pd[254] = v[2] + v[2];
	v[2] = x[7] - x[29];
	v[3] = v[2] * v[2];
	tspn15_pd[255] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[256] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[256] <= 0.) {
	domain_("sqrt'", &tspn15_pd[256], 5L);
	}
	tspn15_pd[257] = 0.5 / tspn15_pd[256];
	v[2] = tspn15_pd[256] * x[79];
	v[0] += v[2];
	v[2] = x[8] - x[10];
	v[3] = v[2] * v[2];
	tspn15_pd[258] = v[2] + v[2];
	v[2] = x[9] - x[11];
	v[1] = v[2] * v[2];
	tspn15_pd[259] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[260] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[260] <= 0.) {
	domain_("sqrt'", &tspn15_pd[260], 5L);
	}
	tspn15_pd[261] = 0.5 / tspn15_pd[260];
	v[2] = tspn15_pd[260] * x[80];
	v[0] += v[2];
	v[2] = x[8] - x[12];
	v[1] = v[2] * v[2];
	tspn15_pd[262] = v[2] + v[2];
	v[2] = x[9] - x[13];
	v[3] = v[2] * v[2];
	tspn15_pd[263] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[264] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[264] <= 0.) {
	domain_("sqrt'", &tspn15_pd[264], 5L);
	}
	tspn15_pd[265] = 0.5 / tspn15_pd[264];
	v[2] = tspn15_pd[264] * x[81];
	v[0] += v[2];
	v[2] = x[8] - x[14];
	v[3] = v[2] * v[2];
	tspn15_pd[266] = v[2] + v[2];
	v[2] = x[9] - x[15];
	v[1] = v[2] * v[2];
	tspn15_pd[267] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[268] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[268] <= 0.) {
	domain_("sqrt'", &tspn15_pd[268], 5L);
	}
	tspn15_pd[269] = 0.5 / tspn15_pd[268];
	v[2] = tspn15_pd[268] * x[82];
	v[0] += v[2];
	v[2] = x[8] - x[16];
	v[1] = v[2] * v[2];
	tspn15_pd[270] = v[2] + v[2];
	v[2] = x[9] - x[17];
	v[3] = v[2] * v[2];
	tspn15_pd[271] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[272] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[272] <= 0.) {
	domain_("sqrt'", &tspn15_pd[272], 5L);
	}
	tspn15_pd[273] = 0.5 / tspn15_pd[272];
	v[2] = tspn15_pd[272] * x[83];
	v[0] += v[2];
	v[2] = x[8] - x[18];
	v[3] = v[2] * v[2];
	tspn15_pd[274] = v[2] + v[2];
	v[2] = x[9] - x[19];
	v[1] = v[2] * v[2];
	tspn15_pd[275] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[276] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[276] <= 0.) {
	domain_("sqrt'", &tspn15_pd[276], 5L);
	}
	tspn15_pd[277] = 0.5 / tspn15_pd[276];
	v[2] = tspn15_pd[276] * x[84];
	v[0] += v[2];
	v[2] = x[8] - x[20];
	v[1] = v[2] * v[2];
	tspn15_pd[278] = v[2] + v[2];
	v[2] = x[9] - x[21];
	v[3] = v[2] * v[2];
	tspn15_pd[279] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[280] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[280] <= 0.) {
	domain_("sqrt'", &tspn15_pd[280], 5L);
	}
	tspn15_pd[281] = 0.5 / tspn15_pd[280];
	v[2] = tspn15_pd[280] * x[85];
	v[0] += v[2];
	v[2] = x[8] - x[22];
	v[3] = v[2] * v[2];
	tspn15_pd[282] = v[2] + v[2];
	v[2] = x[9] - x[23];
	v[1] = v[2] * v[2];
	tspn15_pd[283] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[284] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[284] <= 0.) {
	domain_("sqrt'", &tspn15_pd[284], 5L);
	}
	tspn15_pd[285] = 0.5 / tspn15_pd[284];
	v[2] = tspn15_pd[284] * x[86];
	v[0] += v[2];
	v[2] = x[8] - x[24];
	v[1] = v[2] * v[2];
	tspn15_pd[286] = v[2] + v[2];
	v[2] = x[9] - x[25];
	v[3] = v[2] * v[2];
	tspn15_pd[287] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[288] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[288] <= 0.) {
	domain_("sqrt'", &tspn15_pd[288], 5L);
	}
	tspn15_pd[289] = 0.5 / tspn15_pd[288];
	v[2] = tspn15_pd[288] * x[87];
	v[0] += v[2];
	v[2] = x[8] - x[26];
	v[3] = v[2] * v[2];
	tspn15_pd[290] = v[2] + v[2];
	v[2] = x[9] - x[27];
	v[1] = v[2] * v[2];
	tspn15_pd[291] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[292] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[292] <= 0.) {
	domain_("sqrt'", &tspn15_pd[292], 5L);
	}
	tspn15_pd[293] = 0.5 / tspn15_pd[292];
	v[2] = tspn15_pd[292] * x[88];
	v[0] += v[2];
	v[2] = x[8] - x[28];
	v[1] = v[2] * v[2];
	tspn15_pd[294] = v[2] + v[2];
	v[2] = x[9] - x[29];
	v[3] = v[2] * v[2];
	tspn15_pd[295] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[296] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[296] <= 0.) {
	domain_("sqrt'", &tspn15_pd[296], 5L);
	}
	tspn15_pd[297] = 0.5 / tspn15_pd[296];
	v[2] = tspn15_pd[296] * x[89];
	v[0] += v[2];
	v[2] = x[10] - x[12];
	v[3] = v[2] * v[2];
	tspn15_pd[298] = v[2] + v[2];
	v[2] = x[11] - x[13];
	v[1] = v[2] * v[2];
	tspn15_pd[299] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[300] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[300] <= 0.) {
	domain_("sqrt'", &tspn15_pd[300], 5L);
	}
	tspn15_pd[301] = 0.5 / tspn15_pd[300];
	v[2] = tspn15_pd[300] * x[90];
	v[0] += v[2];
	v[2] = x[10] - x[14];
	v[1] = v[2] * v[2];
	tspn15_pd[302] = v[2] + v[2];
	v[2] = x[11] - x[15];
	v[3] = v[2] * v[2];
	tspn15_pd[303] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[304] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[304] <= 0.) {
	domain_("sqrt'", &tspn15_pd[304], 5L);
	}
	tspn15_pd[305] = 0.5 / tspn15_pd[304];
	v[2] = tspn15_pd[304] * x[91];
	v[0] += v[2];
	v[2] = x[10] - x[16];
	v[3] = v[2] * v[2];
	tspn15_pd[306] = v[2] + v[2];
	v[2] = x[11] - x[17];
	v[1] = v[2] * v[2];
	tspn15_pd[307] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[308] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[308] <= 0.) {
	domain_("sqrt'", &tspn15_pd[308], 5L);
	}
	tspn15_pd[309] = 0.5 / tspn15_pd[308];
	v[2] = tspn15_pd[308] * x[92];
	v[0] += v[2];
	v[2] = x[10] - x[18];
	v[1] = v[2] * v[2];
	tspn15_pd[310] = v[2] + v[2];
	v[2] = x[11] - x[19];
	v[3] = v[2] * v[2];
	tspn15_pd[311] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[312] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[312] <= 0.) {
	domain_("sqrt'", &tspn15_pd[312], 5L);
	}
	tspn15_pd[313] = 0.5 / tspn15_pd[312];
	v[2] = tspn15_pd[312] * x[93];
	v[0] += v[2];
	v[2] = x[10] - x[20];
	v[3] = v[2] * v[2];
	tspn15_pd[314] = v[2] + v[2];
	v[2] = x[11] - x[21];
	v[1] = v[2] * v[2];
	tspn15_pd[315] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[316] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[316] <= 0.) {
	domain_("sqrt'", &tspn15_pd[316], 5L);
	}
	tspn15_pd[317] = 0.5 / tspn15_pd[316];
	v[2] = tspn15_pd[316] * x[94];
	v[0] += v[2];
	v[2] = x[10] - x[22];
	v[1] = v[2] * v[2];
	tspn15_pd[318] = v[2] + v[2];
	v[2] = x[11] - x[23];
	v[3] = v[2] * v[2];
	tspn15_pd[319] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[320] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[320] <= 0.) {
	domain_("sqrt'", &tspn15_pd[320], 5L);
	}
	tspn15_pd[321] = 0.5 / tspn15_pd[320];
	v[2] = tspn15_pd[320] * x[95];
	v[0] += v[2];
	v[2] = x[10] - x[24];
	v[3] = v[2] * v[2];
	tspn15_pd[322] = v[2] + v[2];
	v[2] = x[11] - x[25];
	v[1] = v[2] * v[2];
	tspn15_pd[323] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[324] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[324] <= 0.) {
	domain_("sqrt'", &tspn15_pd[324], 5L);
	}
	tspn15_pd[325] = 0.5 / tspn15_pd[324];
	v[2] = tspn15_pd[324] * x[96];
	v[0] += v[2];
	v[2] = x[10] - x[26];
	v[1] = v[2] * v[2];
	tspn15_pd[326] = v[2] + v[2];
	v[2] = x[11] - x[27];
	v[3] = v[2] * v[2];
	tspn15_pd[327] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[328] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[328] <= 0.) {
	domain_("sqrt'", &tspn15_pd[328], 5L);
	}
	tspn15_pd[329] = 0.5 / tspn15_pd[328];
	v[2] = tspn15_pd[328] * x[97];
	v[0] += v[2];
	v[2] = x[10] - x[28];
	v[3] = v[2] * v[2];
	tspn15_pd[330] = v[2] + v[2];
	v[2] = x[11] - x[29];
	v[1] = v[2] * v[2];
	tspn15_pd[331] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[332] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[332] <= 0.) {
	domain_("sqrt'", &tspn15_pd[332], 5L);
	}
	tspn15_pd[333] = 0.5 / tspn15_pd[332];
	v[2] = tspn15_pd[332] * x[98];
	v[0] += v[2];
	v[2] = x[12] - x[14];
	v[1] = v[2] * v[2];
	tspn15_pd[334] = v[2] + v[2];
	v[2] = x[13] - x[15];
	v[3] = v[2] * v[2];
	tspn15_pd[335] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[336] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[336] <= 0.) {
	domain_("sqrt'", &tspn15_pd[336], 5L);
	}
	tspn15_pd[337] = 0.5 / tspn15_pd[336];
	v[2] = tspn15_pd[336] * x[99];
	v[0] += v[2];
	v[2] = x[12] - x[16];
	v[3] = v[2] * v[2];
	tspn15_pd[338] = v[2] + v[2];
	v[2] = x[13] - x[17];
	v[1] = v[2] * v[2];
	tspn15_pd[339] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[340] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[340] <= 0.) {
	domain_("sqrt'", &tspn15_pd[340], 5L);
	}
	tspn15_pd[341] = 0.5 / tspn15_pd[340];
	v[2] = tspn15_pd[340] * x[100];
	v[0] += v[2];
	v[2] = x[12] - x[18];
	v[1] = v[2] * v[2];
	tspn15_pd[342] = v[2] + v[2];
	v[2] = x[13] - x[19];
	v[3] = v[2] * v[2];
	tspn15_pd[343] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[344] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[344] <= 0.) {
	domain_("sqrt'", &tspn15_pd[344], 5L);
	}
	tspn15_pd[345] = 0.5 / tspn15_pd[344];
	v[2] = tspn15_pd[344] * x[101];
	v[0] += v[2];
	v[2] = x[12] - x[20];
	v[3] = v[2] * v[2];
	tspn15_pd[346] = v[2] + v[2];
	v[2] = x[13] - x[21];
	v[1] = v[2] * v[2];
	tspn15_pd[347] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[348] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[348] <= 0.) {
	domain_("sqrt'", &tspn15_pd[348], 5L);
	}
	tspn15_pd[349] = 0.5 / tspn15_pd[348];
	v[2] = tspn15_pd[348] * x[102];
	v[0] += v[2];
	v[2] = x[12] - x[22];
	v[1] = v[2] * v[2];
	tspn15_pd[350] = v[2] + v[2];
	v[2] = x[13] - x[23];
	v[3] = v[2] * v[2];
	tspn15_pd[351] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[352] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[352] <= 0.) {
	domain_("sqrt'", &tspn15_pd[352], 5L);
	}
	tspn15_pd[353] = 0.5 / tspn15_pd[352];
	v[2] = tspn15_pd[352] * x[103];
	v[0] += v[2];
	v[2] = x[12] - x[24];
	v[3] = v[2] * v[2];
	tspn15_pd[354] = v[2] + v[2];
	v[2] = x[13] - x[25];
	v[1] = v[2] * v[2];
	tspn15_pd[355] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[356] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[356] <= 0.) {
	domain_("sqrt'", &tspn15_pd[356], 5L);
	}
	tspn15_pd[357] = 0.5 / tspn15_pd[356];
	v[2] = tspn15_pd[356] * x[104];
	v[0] += v[2];
	v[2] = x[12] - x[26];
	v[1] = v[2] * v[2];
	tspn15_pd[358] = v[2] + v[2];
	v[2] = x[13] - x[27];
	v[3] = v[2] * v[2];
	tspn15_pd[359] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[360] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[360] <= 0.) {
	domain_("sqrt'", &tspn15_pd[360], 5L);
	}
	tspn15_pd[361] = 0.5 / tspn15_pd[360];
	v[2] = tspn15_pd[360] * x[105];
	v[0] += v[2];
	v[2] = x[12] - x[28];
	v[3] = v[2] * v[2];
	tspn15_pd[362] = v[2] + v[2];
	v[2] = x[13] - x[29];
	v[1] = v[2] * v[2];
	tspn15_pd[363] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[364] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[364] <= 0.) {
	domain_("sqrt'", &tspn15_pd[364], 5L);
	}
	tspn15_pd[365] = 0.5 / tspn15_pd[364];
	v[2] = tspn15_pd[364] * x[106];
	v[0] += v[2];
	v[2] = x[14] - x[16];
	v[1] = v[2] * v[2];
	tspn15_pd[366] = v[2] + v[2];
	v[2] = x[15] - x[17];
	v[3] = v[2] * v[2];
	tspn15_pd[367] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[368] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[368] <= 0.) {
	domain_("sqrt'", &tspn15_pd[368], 5L);
	}
	tspn15_pd[369] = 0.5 / tspn15_pd[368];
	v[2] = tspn15_pd[368] * x[107];
	v[0] += v[2];
	v[2] = x[14] - x[18];
	v[3] = v[2] * v[2];
	tspn15_pd[370] = v[2] + v[2];
	v[2] = x[15] - x[19];
	v[1] = v[2] * v[2];
	tspn15_pd[371] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[372] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[372] <= 0.) {
	domain_("sqrt'", &tspn15_pd[372], 5L);
	}
	tspn15_pd[373] = 0.5 / tspn15_pd[372];
	v[2] = tspn15_pd[372] * x[108];
	v[0] += v[2];
	v[2] = x[14] - x[20];
	v[1] = v[2] * v[2];
	tspn15_pd[374] = v[2] + v[2];
	v[2] = x[15] - x[21];
	v[3] = v[2] * v[2];
	tspn15_pd[375] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[376] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[376] <= 0.) {
	domain_("sqrt'", &tspn15_pd[376], 5L);
	}
	tspn15_pd[377] = 0.5 / tspn15_pd[376];
	v[2] = tspn15_pd[376] * x[109];
	v[0] += v[2];
	v[2] = x[14] - x[22];
	v[3] = v[2] * v[2];
	tspn15_pd[378] = v[2] + v[2];
	v[2] = x[15] - x[23];
	v[1] = v[2] * v[2];
	tspn15_pd[379] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[380] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[380] <= 0.) {
	domain_("sqrt'", &tspn15_pd[380], 5L);
	}
	tspn15_pd[381] = 0.5 / tspn15_pd[380];
	v[2] = tspn15_pd[380] * x[110];
	v[0] += v[2];
	v[2] = x[14] - x[24];
	v[1] = v[2] * v[2];
	tspn15_pd[382] = v[2] + v[2];
	v[2] = x[15] - x[25];
	v[3] = v[2] * v[2];
	tspn15_pd[383] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[384] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[384] <= 0.) {
	domain_("sqrt'", &tspn15_pd[384], 5L);
	}
	tspn15_pd[385] = 0.5 / tspn15_pd[384];
	v[2] = tspn15_pd[384] * x[111];
	v[0] += v[2];
	v[2] = x[14] - x[26];
	v[3] = v[2] * v[2];
	tspn15_pd[386] = v[2] + v[2];
	v[2] = x[15] - x[27];
	v[1] = v[2] * v[2];
	tspn15_pd[387] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[388] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[388] <= 0.) {
	domain_("sqrt'", &tspn15_pd[388], 5L);
	}
	tspn15_pd[389] = 0.5 / tspn15_pd[388];
	v[2] = tspn15_pd[388] * x[112];
	v[0] += v[2];
	v[2] = x[14] - x[28];
	v[1] = v[2] * v[2];
	tspn15_pd[390] = v[2] + v[2];
	v[2] = x[15] - x[29];
	v[3] = v[2] * v[2];
	tspn15_pd[391] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[392] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[392] <= 0.) {
	domain_("sqrt'", &tspn15_pd[392], 5L);
	}
	tspn15_pd[393] = 0.5 / tspn15_pd[392];
	v[2] = tspn15_pd[392] * x[113];
	v[0] += v[2];
	v[2] = x[16] - x[18];
	v[3] = v[2] * v[2];
	tspn15_pd[394] = v[2] + v[2];
	v[2] = x[17] - x[19];
	v[1] = v[2] * v[2];
	tspn15_pd[395] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[396] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[396] <= 0.) {
	domain_("sqrt'", &tspn15_pd[396], 5L);
	}
	tspn15_pd[397] = 0.5 / tspn15_pd[396];
	v[2] = tspn15_pd[396] * x[114];
	v[0] += v[2];
	v[2] = x[16] - x[20];
	v[1] = v[2] * v[2];
	tspn15_pd[398] = v[2] + v[2];
	v[2] = x[17] - x[21];
	v[3] = v[2] * v[2];
	tspn15_pd[399] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[400] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[400] <= 0.) {
	domain_("sqrt'", &tspn15_pd[400], 5L);
	}
	tspn15_pd[401] = 0.5 / tspn15_pd[400];
	v[2] = tspn15_pd[400] * x[115];
	v[0] += v[2];
	v[2] = x[16] - x[22];
	v[3] = v[2] * v[2];
	tspn15_pd[402] = v[2] + v[2];
	v[2] = x[17] - x[23];
	v[1] = v[2] * v[2];
	tspn15_pd[403] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[404] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[404] <= 0.) {
	domain_("sqrt'", &tspn15_pd[404], 5L);
	}
	tspn15_pd[405] = 0.5 / tspn15_pd[404];
	v[2] = tspn15_pd[404] * x[116];
	v[0] += v[2];
	v[2] = x[16] - x[24];
	v[1] = v[2] * v[2];
	tspn15_pd[406] = v[2] + v[2];
	v[2] = x[17] - x[25];
	v[3] = v[2] * v[2];
	tspn15_pd[407] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[408] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[408] <= 0.) {
	domain_("sqrt'", &tspn15_pd[408], 5L);
	}
	tspn15_pd[409] = 0.5 / tspn15_pd[408];
	v[2] = tspn15_pd[408] * x[117];
	v[0] += v[2];
	v[2] = x[16] - x[26];
	v[3] = v[2] * v[2];
	tspn15_pd[410] = v[2] + v[2];
	v[2] = x[17] - x[27];
	v[1] = v[2] * v[2];
	tspn15_pd[411] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[412] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[412] <= 0.) {
	domain_("sqrt'", &tspn15_pd[412], 5L);
	}
	tspn15_pd[413] = 0.5 / tspn15_pd[412];
	v[2] = tspn15_pd[412] * x[118];
	v[0] += v[2];
	v[2] = x[16] - x[28];
	v[1] = v[2] * v[2];
	tspn15_pd[414] = v[2] + v[2];
	v[2] = x[17] - x[29];
	v[3] = v[2] * v[2];
	tspn15_pd[415] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[416] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[416] <= 0.) {
	domain_("sqrt'", &tspn15_pd[416], 5L);
	}
	tspn15_pd[417] = 0.5 / tspn15_pd[416];
	v[2] = tspn15_pd[416] * x[119];
	v[0] += v[2];
	v[2] = x[18] - x[20];
	v[3] = v[2] * v[2];
	tspn15_pd[418] = v[2] + v[2];
	v[2] = x[19] - x[21];
	v[1] = v[2] * v[2];
	tspn15_pd[419] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[420] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[420] <= 0.) {
	domain_("sqrt'", &tspn15_pd[420], 5L);
	}
	tspn15_pd[421] = 0.5 / tspn15_pd[420];
	v[2] = tspn15_pd[420] * x[120];
	v[0] += v[2];
	v[2] = x[18] - x[22];
	v[1] = v[2] * v[2];
	tspn15_pd[422] = v[2] + v[2];
	v[2] = x[19] - x[23];
	v[3] = v[2] * v[2];
	tspn15_pd[423] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[424] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[424] <= 0.) {
	domain_("sqrt'", &tspn15_pd[424], 5L);
	}
	tspn15_pd[425] = 0.5 / tspn15_pd[424];
	v[2] = tspn15_pd[424] * x[121];
	v[0] += v[2];
	v[2] = x[18] - x[24];
	v[3] = v[2] * v[2];
	tspn15_pd[426] = v[2] + v[2];
	v[2] = x[19] - x[25];
	v[1] = v[2] * v[2];
	tspn15_pd[427] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[428] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[428] <= 0.) {
	domain_("sqrt'", &tspn15_pd[428], 5L);
	}
	tspn15_pd[429] = 0.5 / tspn15_pd[428];
	v[2] = tspn15_pd[428] * x[122];
	v[0] += v[2];
	v[2] = x[18] - x[26];
	v[1] = v[2] * v[2];
	tspn15_pd[430] = v[2] + v[2];
	v[2] = x[19] - x[27];
	v[3] = v[2] * v[2];
	tspn15_pd[431] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[432] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[432] <= 0.) {
	domain_("sqrt'", &tspn15_pd[432], 5L);
	}
	tspn15_pd[433] = 0.5 / tspn15_pd[432];
	v[2] = tspn15_pd[432] * x[123];
	v[0] += v[2];
	v[2] = x[18] - x[28];
	v[3] = v[2] * v[2];
	tspn15_pd[434] = v[2] + v[2];
	v[2] = x[19] - x[29];
	v[1] = v[2] * v[2];
	tspn15_pd[435] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[436] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[436] <= 0.) {
	domain_("sqrt'", &tspn15_pd[436], 5L);
	}
	tspn15_pd[437] = 0.5 / tspn15_pd[436];
	v[2] = tspn15_pd[436] * x[124];
	v[0] += v[2];
	v[2] = x[20] - x[22];
	v[1] = v[2] * v[2];
	tspn15_pd[438] = v[2] + v[2];
	v[2] = x[21] - x[23];
	v[3] = v[2] * v[2];
	tspn15_pd[439] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[440] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[440] <= 0.) {
	domain_("sqrt'", &tspn15_pd[440], 5L);
	}
	tspn15_pd[441] = 0.5 / tspn15_pd[440];
	v[2] = tspn15_pd[440] * x[125];
	v[0] += v[2];
	v[2] = x[20] - x[24];
	v[3] = v[2] * v[2];
	tspn15_pd[442] = v[2] + v[2];
	v[2] = x[21] - x[25];
	v[1] = v[2] * v[2];
	tspn15_pd[443] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[444] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[444] <= 0.) {
	domain_("sqrt'", &tspn15_pd[444], 5L);
	}
	tspn15_pd[445] = 0.5 / tspn15_pd[444];
	v[2] = tspn15_pd[444] * x[126];
	v[0] += v[2];
	v[2] = x[20] - x[26];
	v[1] = v[2] * v[2];
	tspn15_pd[446] = v[2] + v[2];
	v[2] = x[21] - x[27];
	v[3] = v[2] * v[2];
	tspn15_pd[447] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[448] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[448] <= 0.) {
	domain_("sqrt'", &tspn15_pd[448], 5L);
	}
	tspn15_pd[449] = 0.5 / tspn15_pd[448];
	v[2] = tspn15_pd[448] * x[127];
	v[0] += v[2];
	v[2] = x[20] - x[28];
	v[3] = v[2] * v[2];
	tspn15_pd[450] = v[2] + v[2];
	v[2] = x[21] - x[29];
	v[1] = v[2] * v[2];
	tspn15_pd[451] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[452] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[452] <= 0.) {
	domain_("sqrt'", &tspn15_pd[452], 5L);
	}
	tspn15_pd[453] = 0.5 / tspn15_pd[452];
	v[2] = tspn15_pd[452] * x[128];
	v[0] += v[2];
	v[2] = x[22] - x[24];
	v[1] = v[2] * v[2];
	tspn15_pd[454] = v[2] + v[2];
	v[2] = x[23] - x[25];
	v[3] = v[2] * v[2];
	tspn15_pd[455] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[456] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[456] <= 0.) {
	domain_("sqrt'", &tspn15_pd[456], 5L);
	}
	tspn15_pd[457] = 0.5 / tspn15_pd[456];
	v[2] = tspn15_pd[456] * x[129];
	v[0] += v[2];
	v[2] = x[22] - x[26];
	v[3] = v[2] * v[2];
	tspn15_pd[458] = v[2] + v[2];
	v[2] = x[23] - x[27];
	v[1] = v[2] * v[2];
	tspn15_pd[459] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[460] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[460] <= 0.) {
	domain_("sqrt'", &tspn15_pd[460], 5L);
	}
	tspn15_pd[461] = 0.5 / tspn15_pd[460];
	v[2] = tspn15_pd[460] * x[130];
	v[0] += v[2];
	v[2] = x[22] - x[28];
	v[1] = v[2] * v[2];
	tspn15_pd[462] = v[2] + v[2];
	v[2] = x[23] - x[29];
	v[3] = v[2] * v[2];
	tspn15_pd[463] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[464] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[464] <= 0.) {
	domain_("sqrt'", &tspn15_pd[464], 5L);
	}
	tspn15_pd[465] = 0.5 / tspn15_pd[464];
	v[2] = tspn15_pd[464] * x[131];
	v[0] += v[2];
	v[2] = x[24] - x[26];
	v[3] = v[2] * v[2];
	tspn15_pd[466] = v[2] + v[2];
	v[2] = x[25] - x[27];
	v[1] = v[2] * v[2];
	tspn15_pd[467] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[468] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[468] <= 0.) {
	domain_("sqrt'", &tspn15_pd[468], 5L);
	}
	tspn15_pd[469] = 0.5 / tspn15_pd[468];
	v[2] = tspn15_pd[468] * x[132];
	v[0] += v[2];
	v[2] = x[24] - x[28];
	v[1] = v[2] * v[2];
	tspn15_pd[470] = v[2] + v[2];
	v[2] = x[25] - x[29];
	v[3] = v[2] * v[2];
	tspn15_pd[471] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn15_pd[472] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[472] <= 0.) {
	domain_("sqrt'", &tspn15_pd[472], 5L);
	}
	tspn15_pd[473] = 0.5 / tspn15_pd[472];
	v[2] = tspn15_pd[472] * x[133];
	v[0] += v[2];
	v[2] = x[26] - x[28];
	v[3] = v[2] * v[2];
	tspn15_pd[474] = v[2] + v[2];
	v[2] = x[27] - x[29];
	v[1] = v[2] * v[2];
	tspn15_pd[475] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn15_pd[476] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn15_pd[476] <= 0.) {
	domain_("sqrt'", &tspn15_pd[476], 5L);
	}
	tspn15_pd[477] = 0.5 / tspn15_pd[476];
	v[2] = tspn15_pd[476] * x[134];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[134] = tspn15_pd[476];
	dv[0] = x[134]*tspn15_pd[477];
	dv[1] = dv[0];
	dv[1] *= tspn15_pd[475];
	g[29] = -dv[1];
	g[27] = dv[1];
	dv[0] *= tspn15_pd[474];
	g[28] = -dv[0];
	g[26] = dv[0];
	g[133] = tspn15_pd[472];
	dv[2] = x[133]*tspn15_pd[473];
	dv[3] = dv[2];
	dv[3] *= tspn15_pd[471];
	g[29] -= dv[3];
	g[25] = dv[3];
	dv[2] *= tspn15_pd[470];
	g[28] -= dv[2];
	g[24] = dv[2];
	g[132] = tspn15_pd[468];
	dv[4] = x[132]*tspn15_pd[469];
	dv[5] = dv[4];
	dv[5] *= tspn15_pd[467];
	g[27] -= dv[5];
	g[25] += dv[5];
	dv[4] *= tspn15_pd[466];
	g[26] -= dv[4];
	g[24] += dv[4];
	g[131] = tspn15_pd[464];
	dv[6] = x[131]*tspn15_pd[465];
	dv[7] = dv[6];
	dv[7] *= tspn15_pd[463];
	g[29] -= dv[7];
	g[23] = dv[7];
	dv[6] *= tspn15_pd[462];
	g[28] -= dv[6];
	g[22] = dv[6];
	g[130] = tspn15_pd[460];
	dv[8] = x[130]*tspn15_pd[461];
	dv[9] = dv[8];
	dv[9] *= tspn15_pd[459];
	g[27] -= dv[9];
	g[23] += dv[9];
	dv[8] *= tspn15_pd[458];
	g[26] -= dv[8];
	g[22] += dv[8];
	g[129] = tspn15_pd[456];
	dv[10] = x[129]*tspn15_pd[457];
	dv[11] = dv[10];
	dv[11] *= tspn15_pd[455];
	g[25] -= dv[11];
	g[23] += dv[11];
	dv[10] *= tspn15_pd[454];
	g[24] -= dv[10];
	g[22] += dv[10];
	g[128] = tspn15_pd[452];
	dv[12] = x[128]*tspn15_pd[453];
	dv[13] = dv[12];
	dv[13] *= tspn15_pd[451];
	g[29] -= dv[13];
	g[21] = dv[13];
	dv[12] *= tspn15_pd[450];
	g[28] -= dv[12];
	g[20] = dv[12];
	g[127] = tspn15_pd[448];
	dv[14] = x[127]*tspn15_pd[449];
	dv[15] = dv[14];
	dv[15] *= tspn15_pd[447];
	g[27] -= dv[15];
	g[21] += dv[15];
	dv[14] *= tspn15_pd[446];
	g[26] -= dv[14];
	g[20] += dv[14];
	g[126] = tspn15_pd[444];
	dv[16] = x[126]*tspn15_pd[445];
	dv[17] = dv[16];
	dv[17] *= tspn15_pd[443];
	g[25] -= dv[17];
	g[21] += dv[17];
	dv[16] *= tspn15_pd[442];
	g[24] -= dv[16];
	g[20] += dv[16];
	g[125] = tspn15_pd[440];
	dv[18] = x[125]*tspn15_pd[441];
	dv[19] = dv[18];
	dv[19] *= tspn15_pd[439];
	g[23] -= dv[19];
	g[21] += dv[19];
	dv[18] *= tspn15_pd[438];
	g[22] -= dv[18];
	g[20] += dv[18];
	g[124] = tspn15_pd[436];
	dv[20] = x[124]*tspn15_pd[437];
	dv[21] = dv[20];
	dv[21] *= tspn15_pd[435];
	g[29] -= dv[21];
	g[19] = dv[21];
	dv[20] *= tspn15_pd[434];
	g[28] -= dv[20];
	g[18] = dv[20];
	g[123] = tspn15_pd[432];
	dv[22] = x[123]*tspn15_pd[433];
	dv[23] = dv[22];
	dv[23] *= tspn15_pd[431];
	g[27] -= dv[23];
	g[19] += dv[23];
	dv[22] *= tspn15_pd[430];
	g[26] -= dv[22];
	g[18] += dv[22];
	g[122] = tspn15_pd[428];
	dv[24] = x[122]*tspn15_pd[429];
	dv[25] = dv[24];
	dv[25] *= tspn15_pd[427];
	g[25] -= dv[25];
	g[19] += dv[25];
	dv[24] *= tspn15_pd[426];
	g[24] -= dv[24];
	g[18] += dv[24];
	g[121] = tspn15_pd[424];
	dv[26] = x[121]*tspn15_pd[425];
	dv[27] = dv[26];
	dv[27] *= tspn15_pd[423];
	g[23] -= dv[27];
	g[19] += dv[27];
	dv[26] *= tspn15_pd[422];
	g[22] -= dv[26];
	g[18] += dv[26];
	g[120] = tspn15_pd[420];
	dv[28] = x[120]*tspn15_pd[421];
	dv[29] = dv[28];
	dv[29] *= tspn15_pd[419];
	g[21] -= dv[29];
	g[19] += dv[29];
	dv[28] *= tspn15_pd[418];
	g[20] -= dv[28];
	g[18] += dv[28];
	g[119] = tspn15_pd[416];
	dv[30] = x[119]*tspn15_pd[417];
	dv[31] = dv[30];
	dv[31] *= tspn15_pd[415];
	g[29] -= dv[31];
	g[17] = dv[31];
	dv[30] *= tspn15_pd[414];
	g[28] -= dv[30];
	g[16] = dv[30];
	g[118] = tspn15_pd[412];
	dv[32] = x[118]*tspn15_pd[413];
	dv[33] = dv[32];
	dv[33] *= tspn15_pd[411];
	g[27] -= dv[33];
	g[17] += dv[33];
	dv[32] *= tspn15_pd[410];
	g[26] -= dv[32];
	g[16] += dv[32];
	g[117] = tspn15_pd[408];
	dv[34] = x[117]*tspn15_pd[409];
	dv[35] = dv[34];
	dv[35] *= tspn15_pd[407];
	g[25] -= dv[35];
	g[17] += dv[35];
	dv[34] *= tspn15_pd[406];
	g[24] -= dv[34];
	g[16] += dv[34];
	g[116] = tspn15_pd[404];
	dv[36] = x[116]*tspn15_pd[405];
	dv[37] = dv[36];
	dv[37] *= tspn15_pd[403];
	g[23] -= dv[37];
	g[17] += dv[37];
	dv[36] *= tspn15_pd[402];
	g[22] -= dv[36];
	g[16] += dv[36];
	g[115] = tspn15_pd[400];
	dv[38] = x[115]*tspn15_pd[401];
	dv[39] = dv[38];
	dv[39] *= tspn15_pd[399];
	g[21] -= dv[39];
	g[17] += dv[39];
	dv[38] *= tspn15_pd[398];
	g[20] -= dv[38];
	g[16] += dv[38];
	g[114] = tspn15_pd[396];
	dv[40] = x[114]*tspn15_pd[397];
	dv[41] = dv[40];
	dv[41] *= tspn15_pd[395];
	g[19] -= dv[41];
	g[17] += dv[41];
	dv[40] *= tspn15_pd[394];
	g[18] -= dv[40];
	g[16] += dv[40];
	g[113] = tspn15_pd[392];
	dv[42] = x[113]*tspn15_pd[393];
	dv[43] = dv[42];
	dv[43] *= tspn15_pd[391];
	g[29] -= dv[43];
	g[15] = dv[43];
	dv[42] *= tspn15_pd[390];
	g[28] -= dv[42];
	g[14] = dv[42];
	g[112] = tspn15_pd[388];
	dv[44] = x[112]*tspn15_pd[389];
	dv[45] = dv[44];
	dv[45] *= tspn15_pd[387];
	g[27] -= dv[45];
	g[15] += dv[45];
	dv[44] *= tspn15_pd[386];
	g[26] -= dv[44];
	g[14] += dv[44];
	g[111] = tspn15_pd[384];
	dv[46] = x[111]*tspn15_pd[385];
	dv[47] = dv[46];
	dv[47] *= tspn15_pd[383];
	g[25] -= dv[47];
	g[15] += dv[47];
	dv[46] *= tspn15_pd[382];
	g[24] -= dv[46];
	g[14] += dv[46];
	g[110] = tspn15_pd[380];
	dv[48] = x[110]*tspn15_pd[381];
	dv[49] = dv[48];
	dv[49] *= tspn15_pd[379];
	g[23] -= dv[49];
	g[15] += dv[49];
	dv[48] *= tspn15_pd[378];
	g[22] -= dv[48];
	g[14] += dv[48];
	g[109] = tspn15_pd[376];
	dv[50] = x[109]*tspn15_pd[377];
	dv[51] = dv[50];
	dv[51] *= tspn15_pd[375];
	g[21] -= dv[51];
	g[15] += dv[51];
	dv[50] *= tspn15_pd[374];
	g[20] -= dv[50];
	g[14] += dv[50];
	g[108] = tspn15_pd[372];
	dv[52] = x[108]*tspn15_pd[373];
	dv[53] = dv[52];
	dv[53] *= tspn15_pd[371];
	g[19] -= dv[53];
	g[15] += dv[53];
	dv[52] *= tspn15_pd[370];
	g[18] -= dv[52];
	g[14] += dv[52];
	g[107] = tspn15_pd[368];
	dv[54] = x[107]*tspn15_pd[369];
	dv[55] = dv[54];
	dv[55] *= tspn15_pd[367];
	g[17] -= dv[55];
	g[15] += dv[55];
	dv[54] *= tspn15_pd[366];
	g[16] -= dv[54];
	g[14] += dv[54];
	g[106] = tspn15_pd[364];
	dv[56] = x[106]*tspn15_pd[365];
	dv[57] = dv[56];
	dv[57] *= tspn15_pd[363];
	g[29] -= dv[57];
	g[13] = dv[57];
	dv[56] *= tspn15_pd[362];
	g[28] -= dv[56];
	g[12] = dv[56];
	g[105] = tspn15_pd[360];
	dv[58] = x[105]*tspn15_pd[361];
	dv[59] = dv[58];
	dv[59] *= tspn15_pd[359];
	g[27] -= dv[59];
	g[13] += dv[59];
	dv[58] *= tspn15_pd[358];
	g[26] -= dv[58];
	g[12] += dv[58];
	g[104] = tspn15_pd[356];
	dv[60] = x[104]*tspn15_pd[357];
	dv[61] = dv[60];
	dv[61] *= tspn15_pd[355];
	g[25] -= dv[61];
	g[13] += dv[61];
	dv[60] *= tspn15_pd[354];
	g[24] -= dv[60];
	g[12] += dv[60];
	g[103] = tspn15_pd[352];
	dv[62] = x[103]*tspn15_pd[353];
	dv[63] = dv[62];
	dv[63] *= tspn15_pd[351];
	g[23] -= dv[63];
	g[13] += dv[63];
	dv[62] *= tspn15_pd[350];
	g[22] -= dv[62];
	g[12] += dv[62];
	g[102] = tspn15_pd[348];
	dv[64] = x[102]*tspn15_pd[349];
	dv[65] = dv[64];
	dv[65] *= tspn15_pd[347];
	g[21] -= dv[65];
	g[13] += dv[65];
	dv[64] *= tspn15_pd[346];
	g[20] -= dv[64];
	g[12] += dv[64];
	g[101] = tspn15_pd[344];
	dv[66] = x[101]*tspn15_pd[345];
	dv[67] = dv[66];
	dv[67] *= tspn15_pd[343];
	g[19] -= dv[67];
	g[13] += dv[67];
	dv[66] *= tspn15_pd[342];
	g[18] -= dv[66];
	g[12] += dv[66];
	g[100] = tspn15_pd[340];
	dv[68] = x[100]*tspn15_pd[341];
	dv[69] = dv[68];
	dv[69] *= tspn15_pd[339];
	g[17] -= dv[69];
	g[13] += dv[69];
	dv[68] *= tspn15_pd[338];
	g[16] -= dv[68];
	g[12] += dv[68];
	g[99] = tspn15_pd[336];
	dv[70] = x[99]*tspn15_pd[337];
	dv[71] = dv[70];
	dv[71] *= tspn15_pd[335];
	g[15] -= dv[71];
	g[13] += dv[71];
	dv[70] *= tspn15_pd[334];
	g[14] -= dv[70];
	g[12] += dv[70];
	g[98] = tspn15_pd[332];
	dv[72] = x[98]*tspn15_pd[333];
	dv[73] = dv[72];
	dv[73] *= tspn15_pd[331];
	g[29] -= dv[73];
	g[11] = dv[73];
	dv[72] *= tspn15_pd[330];
	g[28] -= dv[72];
	g[10] = dv[72];
	g[97] = tspn15_pd[328];
	dv[74] = x[97]*tspn15_pd[329];
	dv[75] = dv[74];
	dv[75] *= tspn15_pd[327];
	g[27] -= dv[75];
	g[11] += dv[75];
	dv[74] *= tspn15_pd[326];
	g[26] -= dv[74];
	g[10] += dv[74];
	g[96] = tspn15_pd[324];
	dv[76] = x[96]*tspn15_pd[325];
	dv[77] = dv[76];
	dv[77] *= tspn15_pd[323];
	g[25] -= dv[77];
	g[11] += dv[77];
	dv[76] *= tspn15_pd[322];
	g[24] -= dv[76];
	g[10] += dv[76];
	g[95] = tspn15_pd[320];
	dv[78] = x[95]*tspn15_pd[321];
	dv[79] = dv[78];
	dv[79] *= tspn15_pd[319];
	g[23] -= dv[79];
	g[11] += dv[79];
	dv[78] *= tspn15_pd[318];
	g[22] -= dv[78];
	g[10] += dv[78];
	g[94] = tspn15_pd[316];
	dv[80] = x[94]*tspn15_pd[317];
	dv[81] = dv[80];
	dv[81] *= tspn15_pd[315];
	g[21] -= dv[81];
	g[11] += dv[81];
	dv[80] *= tspn15_pd[314];
	g[20] -= dv[80];
	g[10] += dv[80];
	g[93] = tspn15_pd[312];
	dv[82] = x[93]*tspn15_pd[313];
	dv[83] = dv[82];
	dv[83] *= tspn15_pd[311];
	g[19] -= dv[83];
	g[11] += dv[83];
	dv[82] *= tspn15_pd[310];
	g[18] -= dv[82];
	g[10] += dv[82];
	g[92] = tspn15_pd[308];
	dv[84] = x[92]*tspn15_pd[309];
	dv[85] = dv[84];
	dv[85] *= tspn15_pd[307];
	g[17] -= dv[85];
	g[11] += dv[85];
	dv[84] *= tspn15_pd[306];
	g[16] -= dv[84];
	g[10] += dv[84];
	g[91] = tspn15_pd[304];
	dv[86] = x[91]*tspn15_pd[305];
	dv[87] = dv[86];
	dv[87] *= tspn15_pd[303];
	g[15] -= dv[87];
	g[11] += dv[87];
	dv[86] *= tspn15_pd[302];
	g[14] -= dv[86];
	g[10] += dv[86];
	g[90] = tspn15_pd[300];
	dv[88] = x[90]*tspn15_pd[301];
	dv[89] = dv[88];
	dv[89] *= tspn15_pd[299];
	g[13] -= dv[89];
	g[11] += dv[89];
	dv[88] *= tspn15_pd[298];
	g[12] -= dv[88];
	g[10] += dv[88];
	g[89] = tspn15_pd[296];
	dv[90] = x[89]*tspn15_pd[297];
	dv[91] = dv[90];
	dv[91] *= tspn15_pd[295];
	g[29] -= dv[91];
	g[9] = dv[91];
	dv[90] *= tspn15_pd[294];
	g[28] -= dv[90];
	g[8] = dv[90];
	g[88] = tspn15_pd[292];
	dv[92] = x[88]*tspn15_pd[293];
	dv[93] = dv[92];
	dv[93] *= tspn15_pd[291];
	g[27] -= dv[93];
	g[9] += dv[93];
	dv[92] *= tspn15_pd[290];
	g[26] -= dv[92];
	g[8] += dv[92];
	g[87] = tspn15_pd[288];
	dv[94] = x[87]*tspn15_pd[289];
	dv[95] = dv[94];
	dv[95] *= tspn15_pd[287];
	g[25] -= dv[95];
	g[9] += dv[95];
	dv[94] *= tspn15_pd[286];
	g[24] -= dv[94];
	g[8] += dv[94];
	g[86] = tspn15_pd[284];
	dv[96] = x[86]*tspn15_pd[285];
	dv[97] = dv[96];
	dv[97] *= tspn15_pd[283];
	g[23] -= dv[97];
	g[9] += dv[97];
	dv[96] *= tspn15_pd[282];
	g[22] -= dv[96];
	g[8] += dv[96];
	g[85] = tspn15_pd[280];
	dv[98] = x[85]*tspn15_pd[281];
	dv[99] = dv[98];
	dv[99] *= tspn15_pd[279];
	g[21] -= dv[99];
	g[9] += dv[99];
	dv[98] *= tspn15_pd[278];
	g[20] -= dv[98];
	g[8] += dv[98];
	g[84] = tspn15_pd[276];
	dv[100] = x[84]*tspn15_pd[277];
	dv[101] = dv[100];
	dv[101] *= tspn15_pd[275];
	g[19] -= dv[101];
	g[9] += dv[101];
	dv[100] *= tspn15_pd[274];
	g[18] -= dv[100];
	g[8] += dv[100];
	g[83] = tspn15_pd[272];
	dv[102] = x[83]*tspn15_pd[273];
	dv[103] = dv[102];
	dv[103] *= tspn15_pd[271];
	g[17] -= dv[103];
	g[9] += dv[103];
	dv[102] *= tspn15_pd[270];
	g[16] -= dv[102];
	g[8] += dv[102];
	g[82] = tspn15_pd[268];
	dv[104] = x[82]*tspn15_pd[269];
	dv[105] = dv[104];
	dv[105] *= tspn15_pd[267];
	g[15] -= dv[105];
	g[9] += dv[105];
	dv[104] *= tspn15_pd[266];
	g[14] -= dv[104];
	g[8] += dv[104];
	g[81] = tspn15_pd[264];
	dv[106] = x[81]*tspn15_pd[265];
	dv[107] = dv[106];
	dv[107] *= tspn15_pd[263];
	g[13] -= dv[107];
	g[9] += dv[107];
	dv[106] *= tspn15_pd[262];
	g[12] -= dv[106];
	g[8] += dv[106];
	g[80] = tspn15_pd[260];
	dv[108] = x[80]*tspn15_pd[261];
	dv[109] = dv[108];
	dv[109] *= tspn15_pd[259];
	g[11] -= dv[109];
	g[9] += dv[109];
	dv[108] *= tspn15_pd[258];
	g[10] -= dv[108];
	g[8] += dv[108];
	g[79] = tspn15_pd[256];
	dv[110] = x[79]*tspn15_pd[257];
	dv[111] = dv[110];
	dv[111] *= tspn15_pd[255];
	g[29] -= dv[111];
	g[7] = dv[111];
	dv[110] *= tspn15_pd[254];
	g[28] -= dv[110];
	g[6] = dv[110];
	g[78] = tspn15_pd[252];
	dv[112] = x[78]*tspn15_pd[253];
	dv[113] = dv[112];
	dv[113] *= tspn15_pd[251];
	g[27] -= dv[113];
	g[7] += dv[113];
	dv[112] *= tspn15_pd[250];
	g[26] -= dv[112];
	g[6] += dv[112];
	g[77] = tspn15_pd[248];
	dv[114] = x[77]*tspn15_pd[249];
	dv[115] = dv[114];
	dv[115] *= tspn15_pd[247];
	g[25] -= dv[115];
	g[7] += dv[115];
	dv[114] *= tspn15_pd[246];
	g[24] -= dv[114];
	g[6] += dv[114];
	g[76] = tspn15_pd[244];
	dv[116] = x[76]*tspn15_pd[245];
	dv[117] = dv[116];
	dv[117] *= tspn15_pd[243];
	g[23] -= dv[117];
	g[7] += dv[117];
	dv[116] *= tspn15_pd[242];
	g[22] -= dv[116];
	g[6] += dv[116];
	g[75] = tspn15_pd[240];
	dv[118] = x[75]*tspn15_pd[241];
	dv[119] = dv[118];
	dv[119] *= tspn15_pd[239];
	g[21] -= dv[119];
	g[7] += dv[119];
	dv[118] *= tspn15_pd[238];
	g[20] -= dv[118];
	g[6] += dv[118];
	g[74] = tspn15_pd[236];
	dv[120] = x[74]*tspn15_pd[237];
	dv[121] = dv[120];
	dv[121] *= tspn15_pd[235];
	g[19] -= dv[121];
	g[7] += dv[121];
	dv[120] *= tspn15_pd[234];
	g[18] -= dv[120];
	g[6] += dv[120];
	g[73] = tspn15_pd[232];
	dv[122] = x[73]*tspn15_pd[233];
	dv[123] = dv[122];
	dv[123] *= tspn15_pd[231];
	g[17] -= dv[123];
	g[7] += dv[123];
	dv[122] *= tspn15_pd[230];
	g[16] -= dv[122];
	g[6] += dv[122];
	g[72] = tspn15_pd[228];
	dv[124] = x[72]*tspn15_pd[229];
	dv[125] = dv[124];
	dv[125] *= tspn15_pd[227];
	g[15] -= dv[125];
	g[7] += dv[125];
	dv[124] *= tspn15_pd[226];
	g[14] -= dv[124];
	g[6] += dv[124];
	g[71] = tspn15_pd[224];
	dv[126] = x[71]*tspn15_pd[225];
	dv[127] = dv[126];
	dv[127] *= tspn15_pd[223];
	g[13] -= dv[127];
	g[7] += dv[127];
	dv[126] *= tspn15_pd[222];
	g[12] -= dv[126];
	g[6] += dv[126];
	g[70] = tspn15_pd[220];
	dv[128] = x[70]*tspn15_pd[221];
	dv[129] = dv[128];
	dv[129] *= tspn15_pd[219];
	g[11] -= dv[129];
	g[7] += dv[129];
	dv[128] *= tspn15_pd[218];
	g[10] -= dv[128];
	g[6] += dv[128];
	g[69] = tspn15_pd[216];
	dv[130] = x[69]*tspn15_pd[217];
	dv[131] = dv[130];
	dv[131] *= tspn15_pd[215];
	g[9] -= dv[131];
	g[7] += dv[131];
	dv[130] *= tspn15_pd[214];
	g[8] -= dv[130];
	g[6] += dv[130];
	g[68] = tspn15_pd[212];
	dv[132] = x[68]*tspn15_pd[213];
	dv[133] = dv[132];
	dv[133] *= tspn15_pd[211];
	g[29] -= dv[133];
	g[5] = dv[133];
	dv[132] *= tspn15_pd[210];
	g[28] -= dv[132];
	g[4] = dv[132];
	g[67] = tspn15_pd[208];
	dv[134] = x[67]*tspn15_pd[209];
	dv[135] = dv[134];
	dv[135] *= tspn15_pd[207];
	g[27] -= dv[135];
	g[5] += dv[135];
	dv[134] *= tspn15_pd[206];
	g[26] -= dv[134];
	g[4] += dv[134];
	g[66] = tspn15_pd[204];
	dv[136] = x[66]*tspn15_pd[205];
	dv[137] = dv[136];
	dv[137] *= tspn15_pd[203];
	g[25] -= dv[137];
	g[5] += dv[137];
	dv[136] *= tspn15_pd[202];
	g[24] -= dv[136];
	g[4] += dv[136];
	g[65] = tspn15_pd[200];
	dv[138] = x[65]*tspn15_pd[201];
	dv[139] = dv[138];
	dv[139] *= tspn15_pd[199];
	g[23] -= dv[139];
	g[5] += dv[139];
	dv[138] *= tspn15_pd[198];
	g[22] -= dv[138];
	g[4] += dv[138];
	g[64] = tspn15_pd[196];
	dv[140] = x[64]*tspn15_pd[197];
	dv[141] = dv[140];
	dv[141] *= tspn15_pd[195];
	g[21] -= dv[141];
	g[5] += dv[141];
	dv[140] *= tspn15_pd[194];
	g[20] -= dv[140];
	g[4] += dv[140];
	g[63] = tspn15_pd[192];
	dv[142] = x[63]*tspn15_pd[193];
	dv[143] = dv[142];
	dv[143] *= tspn15_pd[191];
	g[19] -= dv[143];
	g[5] += dv[143];
	dv[142] *= tspn15_pd[190];
	g[18] -= dv[142];
	g[4] += dv[142];
	g[62] = tspn15_pd[188];
	dv[144] = x[62]*tspn15_pd[189];
	dv[145] = dv[144];
	dv[145] *= tspn15_pd[187];
	g[17] -= dv[145];
	g[5] += dv[145];
	dv[144] *= tspn15_pd[186];
	g[16] -= dv[144];
	g[4] += dv[144];
	g[61] = tspn15_pd[184];
	dv[146] = x[61]*tspn15_pd[185];
	dv[147] = dv[146];
	dv[147] *= tspn15_pd[183];
	g[15] -= dv[147];
	g[5] += dv[147];
	dv[146] *= tspn15_pd[182];
	g[14] -= dv[146];
	g[4] += dv[146];
	g[60] = tspn15_pd[180];
	dv[148] = x[60]*tspn15_pd[181];
	dv[149] = dv[148];
	dv[149] *= tspn15_pd[179];
	g[13] -= dv[149];
	g[5] += dv[149];
	dv[148] *= tspn15_pd[178];
	g[12] -= dv[148];
	g[4] += dv[148];
	g[59] = tspn15_pd[176];
	dv[150] = x[59]*tspn15_pd[177];
	dv[151] = dv[150];
	dv[151] *= tspn15_pd[175];
	g[11] -= dv[151];
	g[5] += dv[151];
	dv[150] *= tspn15_pd[174];
	g[10] -= dv[150];
	g[4] += dv[150];
	g[58] = tspn15_pd[172];
	dv[152] = x[58]*tspn15_pd[173];
	dv[153] = dv[152];
	dv[153] *= tspn15_pd[171];
	g[9] -= dv[153];
	g[5] += dv[153];
	dv[152] *= tspn15_pd[170];
	g[8] -= dv[152];
	g[4] += dv[152];
	g[57] = tspn15_pd[168];
	dv[154] = x[57]*tspn15_pd[169];
	dv[155] = dv[154];
	dv[155] *= tspn15_pd[167];
	g[7] -= dv[155];
	g[5] += dv[155];
	dv[154] *= tspn15_pd[166];
	g[6] -= dv[154];
	g[4] += dv[154];
	g[56] = tspn15_pd[164];
	dv[156] = x[56]*tspn15_pd[165];
	dv[157] = dv[156];
	dv[157] *= tspn15_pd[163];
	g[29] -= dv[157];
	g[3] = dv[157];
	dv[156] *= tspn15_pd[162];
	g[28] -= dv[156];
	g[2] = dv[156];
	g[55] = tspn15_pd[160];
	dv[158] = x[55]*tspn15_pd[161];
	dv[159] = dv[158];
	dv[159] *= tspn15_pd[159];
	g[27] -= dv[159];
	g[3] += dv[159];
	dv[158] *= tspn15_pd[158];
	g[26] -= dv[158];
	g[2] += dv[158];
	g[54] = tspn15_pd[156];
	dv[160] = x[54]*tspn15_pd[157];
	dv[161] = dv[160];
	dv[161] *= tspn15_pd[155];
	g[25] -= dv[161];
	g[3] += dv[161];
	dv[160] *= tspn15_pd[154];
	g[24] -= dv[160];
	g[2] += dv[160];
	g[53] = tspn15_pd[152];
	dv[162] = x[53]*tspn15_pd[153];
	dv[163] = dv[162];
	dv[163] *= tspn15_pd[151];
	g[23] -= dv[163];
	g[3] += dv[163];
	dv[162] *= tspn15_pd[150];
	g[22] -= dv[162];
	g[2] += dv[162];
	g[52] = tspn15_pd[148];
	dv[164] = x[52]*tspn15_pd[149];
	dv[165] = dv[164];
	dv[165] *= tspn15_pd[147];
	g[21] -= dv[165];
	g[3] += dv[165];
	dv[164] *= tspn15_pd[146];
	g[20] -= dv[164];
	g[2] += dv[164];
	g[51] = tspn15_pd[144];
	dv[166] = x[51]*tspn15_pd[145];
	dv[167] = dv[166];
	dv[167] *= tspn15_pd[143];
	g[19] -= dv[167];
	g[3] += dv[167];
	dv[166] *= tspn15_pd[142];
	g[18] -= dv[166];
	g[2] += dv[166];
	g[50] = tspn15_pd[140];
	dv[168] = x[50]*tspn15_pd[141];
	dv[169] = dv[168];
	dv[169] *= tspn15_pd[139];
	g[17] -= dv[169];
	g[3] += dv[169];
	dv[168] *= tspn15_pd[138];
	g[16] -= dv[168];
	g[2] += dv[168];
	g[49] = tspn15_pd[136];
	dv[170] = x[49]*tspn15_pd[137];
	dv[171] = dv[170];
	dv[171] *= tspn15_pd[135];
	g[15] -= dv[171];
	g[3] += dv[171];
	dv[170] *= tspn15_pd[134];
	g[14] -= dv[170];
	g[2] += dv[170];
	g[48] = tspn15_pd[132];
	dv[172] = x[48]*tspn15_pd[133];
	dv[173] = dv[172];
	dv[173] *= tspn15_pd[131];
	g[13] -= dv[173];
	g[3] += dv[173];
	dv[172] *= tspn15_pd[130];
	g[12] -= dv[172];
	g[2] += dv[172];
	g[47] = tspn15_pd[128];
	dv[174] = x[47]*tspn15_pd[129];
	dv[175] = dv[174];
	dv[175] *= tspn15_pd[127];
	g[11] -= dv[175];
	g[3] += dv[175];
	dv[174] *= tspn15_pd[126];
	g[10] -= dv[174];
	g[2] += dv[174];
	g[46] = tspn15_pd[124];
	dv[176] = x[46]*tspn15_pd[125];
	dv[177] = dv[176];
	dv[177] *= tspn15_pd[123];
	g[9] -= dv[177];
	g[3] += dv[177];
	dv[176] *= tspn15_pd[122];
	g[8] -= dv[176];
	g[2] += dv[176];
	g[45] = tspn15_pd[120];
	dv[178] = x[45]*tspn15_pd[121];
	dv[179] = dv[178];
	dv[179] *= tspn15_pd[119];
	g[7] -= dv[179];
	g[3] += dv[179];
	dv[178] *= tspn15_pd[118];
	g[6] -= dv[178];
	g[2] += dv[178];
	g[44] = tspn15_pd[116];
	dv[180] = x[44]*tspn15_pd[117];
	dv[181] = dv[180];
	dv[181] *= tspn15_pd[115];
	g[5] -= dv[181];
	g[3] += dv[181];
	dv[180] *= tspn15_pd[114];
	g[4] -= dv[180];
	g[2] += dv[180];
	g[43] = tspn15_pd[112];
	dv[182] = x[43]*tspn15_pd[113];
	dv[183] = dv[182];
	dv[183] *= tspn15_pd[111];
	g[29] -= dv[183];
	g[1] = dv[183];
	dv[182] *= tspn15_pd[110];
	g[28] -= dv[182];
	g[0] = dv[182];
	g[42] = tspn15_pd[108];
	dv[184] = x[42]*tspn15_pd[109];
	dv[185] = dv[184];
	dv[185] *= tspn15_pd[107];
	g[27] -= dv[185];
	g[1] += dv[185];
	dv[184] *= tspn15_pd[106];
	g[26] -= dv[184];
	g[0] += dv[184];
	g[41] = tspn15_pd[104];
	dv[186] = x[41]*tspn15_pd[105];
	dv[187] = dv[186];
	dv[187] *= tspn15_pd[103];
	g[25] -= dv[187];
	g[1] += dv[187];
	dv[186] *= tspn15_pd[102];
	g[24] -= dv[186];
	g[0] += dv[186];
	g[40] = tspn15_pd[100];
	dv[188] = x[40]*tspn15_pd[101];
	dv[189] = dv[188];
	dv[189] *= tspn15_pd[99];
	g[23] -= dv[189];
	g[1] += dv[189];
	dv[188] *= tspn15_pd[98];
	g[22] -= dv[188];
	g[0] += dv[188];
	g[39] = tspn15_pd[96];
	dv[190] = x[39]*tspn15_pd[97];
	dv[191] = dv[190];
	dv[191] *= tspn15_pd[95];
	g[21] -= dv[191];
	g[1] += dv[191];
	dv[190] *= tspn15_pd[94];
	g[20] -= dv[190];
	g[0] += dv[190];
	g[38] = tspn15_pd[92];
	dv[192] = x[38]*tspn15_pd[93];
	dv[193] = dv[192];
	dv[193] *= tspn15_pd[91];
	g[19] -= dv[193];
	g[1] += dv[193];
	dv[192] *= tspn15_pd[90];
	g[18] -= dv[192];
	g[0] += dv[192];
	g[37] = tspn15_pd[88];
	dv[194] = x[37]*tspn15_pd[89];
	dv[195] = dv[194];
	dv[195] *= tspn15_pd[87];
	g[17] -= dv[195];
	g[1] += dv[195];
	dv[194] *= tspn15_pd[86];
	g[16] -= dv[194];
	g[0] += dv[194];
	g[36] = tspn15_pd[84];
	dv[196] = x[36]*tspn15_pd[85];
	dv[197] = dv[196];
	dv[197] *= tspn15_pd[83];
	g[15] -= dv[197];
	g[1] += dv[197];
	dv[196] *= tspn15_pd[82];
	g[14] -= dv[196];
	g[0] += dv[196];
	g[35] = tspn15_pd[80];
	dv[198] = x[35]*tspn15_pd[81];
	dv[199] = dv[198];
	dv[199] *= tspn15_pd[79];
	g[13] -= dv[199];
	g[1] += dv[199];
	dv[198] *= tspn15_pd[78];
	g[12] -= dv[198];
	g[0] += dv[198];
	g[34] = tspn15_pd[76];
	dv[200] = x[34]*tspn15_pd[77];
	dv[201] = dv[200];
	dv[201] *= tspn15_pd[75];
	g[11] -= dv[201];
	g[1] += dv[201];
	dv[200] *= tspn15_pd[74];
	g[10] -= dv[200];
	g[0] += dv[200];
	g[33] = tspn15_pd[72];
	dv[202] = x[33]*tspn15_pd[73];
	dv[203] = dv[202];
	dv[203] *= tspn15_pd[71];
	g[9] -= dv[203];
	g[1] += dv[203];
	dv[202] *= tspn15_pd[70];
	g[8] -= dv[202];
	g[0] += dv[202];
	g[32] = tspn15_pd[68];
	dv[204] = x[32]*tspn15_pd[69];
	dv[205] = dv[204];
	dv[205] *= tspn15_pd[67];
	g[7] -= dv[205];
	g[1] += dv[205];
	dv[204] *= tspn15_pd[66];
	g[6] -= dv[204];
	g[0] += dv[204];
	g[31] = tspn15_pd[64];
	dv[206] = x[31]*tspn15_pd[65];
	dv[207] = dv[206];
	dv[207] *= tspn15_pd[63];
	g[5] -= dv[207];
	g[1] += dv[207];
	dv[206] *= tspn15_pd[62];
	g[4] -= dv[206];
	g[0] += dv[206];
	g[30] = tspn15_pd[60];
	dv[208] = x[30]*tspn15_pd[61];
	dv[209] = dv[208];
	dv[209] *= tspn15_pd[59];
	g[3] -= dv[209];
	g[1] += dv[209];
	dv[208] *= tspn15_pd[58];
	g[2] -= dv[208];
	g[0] += dv[208];
	}

	return v[0];
}

 void
tspn15_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (tspn15_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	tspn15_pd[0] = x[0] * x[0];
	tspn15_pd[1] = x[0] + x[0];
	v[0] = 0.0625 * tspn15_pd[0];
	tspn15_pd[2] = x[1] * x[1];
	tspn15_pd[3] = x[1] + x[1];
	v[1] = 0.0177777777777778 * tspn15_pd[2];
	v[2] = v[0] + v[1];
	t1 = v[2] + -8.875*x[0];
	t1 += -0.266666666666667*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	tspn15_pd[4] = x[2] * x[2];
	tspn15_pd[5] = x[2] + x[2];
	v[0] = 0.015625 * tspn15_pd[4];
	tspn15_pd[6] = x[3] * x[3];
	tspn15_pd[7] = x[3] + x[3];
	v[1] = 0.0625 * tspn15_pd[6];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.84375*x[2];
	t1 += -11.25*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	tspn15_pd[8] = x[4] * x[4];
	tspn15_pd[9] = x[4] + x[4];
	v[0] = 0.0330578512396694 * tspn15_pd[8];
	tspn15_pd[10] = x[5] * x[5];
	tspn15_pd[11] = x[5] + x[5];
	v[1] = 0.0816326530612245 * tspn15_pd[10];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.826446280991736*x[4];
	t1 += -6.61224489795918*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	tspn15_pd[12] = x[6] * x[6];
	tspn15_pd[13] = x[6] + x[6];
	v[0] = 0.0493827160493827 * tspn15_pd[12];
	tspn15_pd[14] = x[7] * x[7];
	tspn15_pd[15] = x[7] + x[7];
	v[1] = 0.0277777777777778 * tspn15_pd[14];
	v[2] = v[0] + v[1];
	t1 = v[2] + -8.44444444444444*x[6];
	t1 += -3.77777777777778*x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	tspn15_pd[16] = x[8] * x[8];
	tspn15_pd[17] = x[8] + x[8];
	v[0] = 0.111111111111111 * tspn15_pd[16];
	v[1] = x[9] * x[9];
	tspn15_pd[18] = x[9] + x[9];
	v[2] = v[0] + v[1];
	t1 = v[2] + -16.2222222222222*x[8];
	t1 += -204.*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	tspn15_pd[19] = x[10] * x[10];
	tspn15_pd[20] = x[10] + x[10];
	v[0] = 0.04 * tspn15_pd[19];
	tspn15_pd[21] = x[11] * x[11];
	tspn15_pd[22] = x[11] + x[11];
	v[1] = 0.25 * tspn15_pd[21];
	v[2] = v[0] + v[1];
	t1 = v[2] + -4.64*x[10];
	t1 += -23.*x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	tspn15_pd[23] = x[12] * x[12];
	tspn15_pd[24] = x[12] + x[12];
	v[0] = 0.04 * tspn15_pd[23];
	v[1] = x[13] * x[13];
	tspn15_pd[25] = x[13] + x[13];
	v[2] = v[0] + v[1];
	t1 = v[2] + -3.76*x[12];
	t1 += -144.*x[13];
	c[6] = t1;

  /***  constraint 8  ***/

	tspn15_pd[26] = x[14] * x[14];
	tspn15_pd[27] = x[14] + x[14];
	v[0] = 0.0816326530612245 * tspn15_pd[26];
	tspn15_pd[28] = x[15] * x[15];
	tspn15_pd[29] = x[15] + x[15];
	v[1] = 0.0625 * tspn15_pd[28];
	v[2] = v[0] + v[1];
	t1 = v[2] + -16.5714285714286*x[14];
	t1 += -2.5*x[15];
	c[7] = t1;

  /***  constraint 9  ***/

	tspn15_pd[30] = x[16] * x[16];
	tspn15_pd[31] = x[16] + x[16];
	v[0] = 0.0493827160493827 * tspn15_pd[30];
	tspn15_pd[32] = x[17] * x[17];
	tspn15_pd[33] = x[17] + x[17];
	v[1] = 0.015625 * tspn15_pd[32];
	v[2] = v[0] + v[1];
	t1 = v[2] + -4.88888888888889*x[16];
	t1 += -2.375*x[17];
	c[8] = t1;

  /***  constraint 10  ***/

	tspn15_pd[34] = x[18] * x[18];
	tspn15_pd[35] = x[18] + x[18];
	v[0] = 0.04 * tspn15_pd[34];
	tspn15_pd[36] = x[19] * x[19];
	tspn15_pd[37] = x[19] + x[19];
	v[1] = 0.0330578512396694 * tspn15_pd[36];
	v[2] = v[0] + v[1];
	t1 = v[2] + -6.48*x[18];
	t1 += -2.87603305785124*x[19];
	c[9] = t1;

  /***  constraint 11  ***/

	tspn15_pd[38] = x[20] * x[20];
	tspn15_pd[39] = x[20] + x[20];
	v[0] = 0.0204081632653061 * tspn15_pd[38];
	tspn15_pd[40] = x[21] * x[21];
	tspn15_pd[41] = x[21] + x[21];
	v[1] = 0.0816326530612245 * tspn15_pd[40];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.693877551020408*x[20];
	t1 += -7.91836734693877*x[21];
	c[10] = t1;

  /***  constraint 12  ***/

	tspn15_pd[42] = x[22] * x[22];
	tspn15_pd[43] = x[22] + x[22];
	v[0] = 0.0625 * tspn15_pd[42];
	tspn15_pd[44] = x[23] * x[23];
	tspn15_pd[45] = x[23] + x[23];
	v[1] = 0.444444444444444 * tspn15_pd[44];
	v[2] = v[0] + v[1];
	t1 = v[2] + -11.375*x[22];
	t1 += -76.8888888888889*x[23];
	c[11] = t1;

  /***  constraint 13  ***/

	tspn15_pd[46] = x[24] * x[24];
	tspn15_pd[47] = x[24] + x[24];
	v[0] = 4. * tspn15_pd[46];
	tspn15_pd[48] = x[25] * x[25];
	tspn15_pd[49] = x[25] + x[25];
	v[1] = 0.015625 * tspn15_pd[48];
	v[2] = v[0] + v[1];
	t1 = v[2] + -52.*x[24];
	t1 += -1.1875*x[25];
	c[12] = t1;

  /***  constraint 14  ***/

	tspn15_pd[50] = x[26] * x[26];
	tspn15_pd[51] = x[26] + x[26];
	v[0] = 0.0816326530612245 * tspn15_pd[50];
	tspn15_pd[52] = x[27] * x[27];
	tspn15_pd[53] = x[27] + x[27];
	v[1] = 0.0330578512396694 * tspn15_pd[52];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.571428571428571*x[26];
	t1 += -6.57851239669422*x[27];
	c[13] = t1;

  /***  constraint 15  ***/

	tspn15_pd[54] = x[28] * x[28];
	tspn15_pd[55] = x[28] + x[28];
	v[0] = 0.0625 * tspn15_pd[54];
	tspn15_pd[56] = x[29] * x[29];
	tspn15_pd[57] = x[29] + x[29];
	v[1] = 0.04 * tspn15_pd[56];
	v[2] = v[0] + v[1];
	t1 = v[2] + -10.125*x[28];
	t1 += -2.72*x[29];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[30];
	t1 += x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	t1 += x[56];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[31];
	t1 += x[44];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[32];
	t1 += x[45];
	t1 += x[57];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	t1 += x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[33];
	t1 += x[46];
	t1 += x[58];
	t1 += x[69];
	t1 += x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	t1 += x[84];
	t1 += x[85];
	t1 += x[86];
	t1 += x[87];
	t1 += x[88];
	t1 += x[89];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[34];
	t1 += x[47];
	t1 += x[59];
	t1 += x[70];
	t1 += x[80];
	t1 += x[90];
	t1 += x[91];
	t1 += x[92];
	t1 += x[93];
	t1 += x[94];
	t1 += x[95];
	t1 += x[96];
	t1 += x[97];
	t1 += x[98];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[35];
	t1 += x[48];
	t1 += x[60];
	t1 += x[71];
	t1 += x[81];
	t1 += x[90];
	t1 += x[99];
	t1 += x[100];
	t1 += x[101];
	t1 += x[102];
	t1 += x[103];
	t1 += x[104];
	t1 += x[105];
	t1 += x[106];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[36];
	t1 += x[49];
	t1 += x[61];
	t1 += x[72];
	t1 += x[82];
	t1 += x[91];
	t1 += x[99];
	t1 += x[107];
	t1 += x[108];
	t1 += x[109];
	t1 += x[110];
	t1 += x[111];
	t1 += x[112];
	t1 += x[113];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[37];
	t1 += x[50];
	t1 += x[62];
	t1 += x[73];
	t1 += x[83];
	t1 += x[92];
	t1 += x[100];
	t1 += x[107];
	t1 += x[114];
	t1 += x[115];
	t1 += x[116];
	t1 += x[117];
	t1 += x[118];
	t1 += x[119];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[38];
	t1 += x[51];
	t1 += x[63];
	t1 += x[74];
	t1 += x[84];
	t1 += x[93];
	t1 += x[101];
	t1 += x[108];
	t1 += x[114];
	t1 += x[120];
	t1 += x[121];
	t1 += x[122];
	t1 += x[123];
	t1 += x[124];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[39];
	t1 += x[52];
	t1 += x[64];
	t1 += x[75];
	t1 += x[85];
	t1 += x[94];
	t1 += x[102];
	t1 += x[109];
	t1 += x[115];
	t1 += x[120];
	t1 += x[125];
	t1 += x[126];
	t1 += x[127];
	t1 += x[128];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[40];
	t1 += x[53];
	t1 += x[65];
	t1 += x[76];
	t1 += x[86];
	t1 += x[95];
	t1 += x[103];
	t1 += x[110];
	t1 += x[116];
	t1 += x[121];
	t1 += x[125];
	t1 += x[129];
	t1 += x[130];
	t1 += x[131];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[41];
	t1 += x[54];
	t1 += x[66];
	t1 += x[77];
	t1 += x[87];
	t1 += x[96];
	t1 += x[104];
	t1 += x[111];
	t1 += x[117];
	t1 += x[122];
	t1 += x[126];
	t1 += x[129];
	t1 += x[132];
	t1 += x[133];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[42];
	t1 += x[55];
	t1 += x[67];
	t1 += x[78];
	t1 += x[88];
	t1 += x[97];
	t1 += x[105];
	t1 += x[112];
	t1 += x[118];
	t1 += x[123];
	t1 += x[127];
	t1 += x[130];
	t1 += x[132];
	t1 += x[134];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[43];
	t1 += x[56];
	t1 += x[68];
	t1 += x[79];
	t1 += x[89];
	t1 += x[98];
	t1 += x[106];
	t1 += x[113];
	t1 += x[119];
	t1 += x[124];
	t1 += x[128];
	t1 += x[131];
	t1 += x[133];
	t1 += x[134];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[34];
	t1 += x[36];
	t1 += x[38];
	t1 += x[43];
	t1 += x[91];
	t1 += x[93];
	t1 += x[98];
	t1 += x[108];
	t1 += x[113];
	t1 += x[124];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[36];
	t1 += x[38];
	t1 += x[43];
	t1 += x[108];
	t1 += x[113];
	t1 += x[124];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[30];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[40];
	t1 += x[42];
	t1 += x[43];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	t1 += x[53];
	t1 += x[55];
	t1 += x[56];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[76];
	t1 += x[78];
	t1 += x[79];
	t1 += x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	t1 += x[84];
	t1 += x[86];
	t1 += x[88];
	t1 += x[89];
	t1 += x[90];
	t1 += x[91];
	t1 += x[92];
	t1 += x[93];
	t1 += x[95];
	t1 += x[97];
	t1 += x[98];
	t1 += x[99];
	t1 += x[100];
	t1 += x[101];
	t1 += x[103];
	t1 += x[105];
	t1 += x[106];
	t1 += x[107];
	t1 += x[108];
	t1 += x[110];
	t1 += x[112];
	t1 += x[113];
	t1 += x[114];
	t1 += x[116];
	t1 += x[118];
	t1 += x[119];
	t1 += x[121];
	t1 += x[123];
	t1 += x[124];
	t1 += x[130];
	t1 += x[131];
	t1 += x[134];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[40];
	t1 += x[43];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[76];
	t1 += x[79];
	t1 += x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	t1 += x[84];
	t1 += x[86];
	t1 += x[89];
	t1 += x[90];
	t1 += x[91];
	t1 += x[92];
	t1 += x[93];
	t1 += x[95];
	t1 += x[98];
	t1 += x[99];
	t1 += x[100];
	t1 += x[101];
	t1 += x[103];
	t1 += x[106];
	t1 += x[107];
	t1 += x[108];
	t1 += x[110];
	t1 += x[113];
	t1 += x[114];
	t1 += x[116];
	t1 += x[119];
	t1 += x[121];
	t1 += x[124];
	t1 += x[131];
	c[33] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = 0.0177777777777778*tspn15_pd[3] + -0.266666666666667;
	J[0] = 0.0625*tspn15_pd[1] + -8.875;

   /*** derivatives for constraint 2 ***/

	J[3] = 0.0625*tspn15_pd[7] + -11.25;
	J[2] = 0.015625*tspn15_pd[5] + -0.84375;

   /*** derivatives for constraint 3 ***/

	J[5] = 0.0816326530612245*tspn15_pd[11] + -6.61224489795918;
	J[4] = 0.0330578512396694*tspn15_pd[9] + -0.826446280991736;

   /*** derivatives for constraint 4 ***/

	J[7] = 0.0277777777777778*tspn15_pd[15] + -3.77777777777778;
	J[6] = 0.0493827160493827*tspn15_pd[13] + -8.44444444444444;

   /*** derivatives for constraint 5 ***/

	J[9] = tspn15_pd[18] + -204.;
	J[8] = 0.111111111111111*tspn15_pd[17] + -16.2222222222222;

   /*** derivatives for constraint 6 ***/

	J[11] = 0.25*tspn15_pd[22] + -23.;
	J[10] = 0.04*tspn15_pd[20] + -4.64;

   /*** derivatives for constraint 7 ***/

	J[13] = tspn15_pd[25] + -144.;
	J[12] = 0.04*tspn15_pd[24] + -3.76;

   /*** derivatives for constraint 8 ***/

	J[15] = 0.0625*tspn15_pd[29] + -2.5;
	J[14] = 0.0816326530612245*tspn15_pd[27] + -16.5714285714286;

   /*** derivatives for constraint 9 ***/

	J[17] = 0.015625*tspn15_pd[33] + -2.375;
	J[16] = 0.0493827160493827*tspn15_pd[31] + -4.88888888888889;

   /*** derivatives for constraint 10 ***/

	J[19] = 0.0330578512396694*tspn15_pd[37] + -2.87603305785124;
	J[18] = 0.04*tspn15_pd[35] + -6.48;

   /*** derivatives for constraint 11 ***/

	J[21] = 0.0816326530612245*tspn15_pd[41] + -7.91836734693877;
	J[20] = 0.0204081632653061*tspn15_pd[39] + -0.693877551020408;

   /*** derivatives for constraint 12 ***/

	J[23] = 0.444444444444444*tspn15_pd[45] + -76.8888888888889;
	J[22] = 0.0625*tspn15_pd[43] + -11.375;

   /*** derivatives for constraint 13 ***/

	J[25] = 0.015625*tspn15_pd[49] + -1.1875;
	J[24] = 4.*tspn15_pd[47] + -52.;

   /*** derivatives for constraint 14 ***/

	J[27] = 0.0330578512396694*tspn15_pd[53] + -6.57851239669422;
	J[26] = 0.0816326530612245*tspn15_pd[51] + -0.571428571428571;

   /*** derivatives for constraint 15 ***/

	J[29] = 0.04*tspn15_pd[57] + -2.72;
	J[28] = 0.0625*tspn15_pd[55] + -10.125;

   /*** derivatives for constraint 16 ***/

	J[30] = 1.;
	J[33] = 1.;
	J[35] = 1.;
	J[39] = 1.;
	J[43] = 1.;
	J[48] = 1.;
	J[52] = 1.;
	J[58] = 1.;
	J[62] = 1.;
	J[68] = 1.;
	J[70] = 1.;
	J[74] = 1.;
	J[76] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 17 ***/

	J[31] = 1.;
	J[85] = 1.;
	J[87] = 1.;
	J[90] = 1.;
	J[93] = 1.;
	J[96] = 1.;
	J[99] = 1.;
	J[102] = 1.;
	J[105] = 1.;
	J[108] = 1.;
	J[110] = 1.;
	J[113] = 1.;
	J[115] = 1.;
	J[118] = 1.;

   /*** derivatives for constraint 18 ***/

	J[34] = 1.;
	J[86] = 1.;
	J[121] = 1.;
	J[123] = 1.;
	J[125] = 1.;
	J[127] = 1.;
	J[129] = 1.;
	J[131] = 1.;
	J[133] = 1.;
	J[135] = 1.;
	J[137] = 1.;
	J[139] = 1.;
	J[141] = 1.;
	J[143] = 1.;

   /*** derivatives for constraint 19 ***/

	J[36] = 1.;
	J[88] = 1.;
	J[122] = 1.;
	J[145] = 1.;
	J[149] = 1.;
	J[153] = 1.;
	J[157] = 1.;
	J[161] = 1.;
	J[165] = 1.;
	J[169] = 1.;
	J[171] = 1.;
	J[175] = 1.;
	J[177] = 1.;
	J[180] = 1.;

   /*** derivatives for constraint 20 ***/

	J[40] = 1.;
	J[91] = 1.;
	J[124] = 1.;
	J[146] = 1.;
	J[184] = 1.;
	J[188] = 1.;
	J[192] = 1.;
	J[196] = 1.;
	J[200] = 1.;
	J[204] = 1.;
	J[206] = 1.;
	J[210] = 1.;
	J[212] = 1.;
	J[215] = 1.;

   /*** derivatives for constraint 21 ***/

	J[44] = 1.;
	J[94] = 1.;
	J[126] = 1.;
	J[150] = 1.;
	J[185] = 1.;
	J[219] = 1.;
	J[223] = 1.;
	J[228] = 1.;
	J[232] = 1.;
	J[237] = 1.;
	J[239] = 1.;
	J[243] = 1.;
	J[245] = 1.;
	J[248] = 1.;

   /*** derivatives for constraint 22 ***/

	J[49] = 1.;
	J[97] = 1.;
	J[128] = 1.;
	J[154] = 1.;
	J[189] = 1.;
	J[220] = 1.;
	J[253] = 1.;
	J[257] = 1.;
	J[261] = 1.;
	J[265] = 1.;
	J[267] = 1.;
	J[271] = 1.;
	J[273] = 1.;
	J[276] = 1.;

   /*** derivatives for constraint 23 ***/

	J[53] = 1.;
	J[100] = 1.;
	J[130] = 1.;
	J[158] = 1.;
	J[193] = 1.;
	J[224] = 1.;
	J[254] = 1.;
	J[280] = 1.;
	J[284] = 1.;
	J[290] = 1.;
	J[292] = 1.;
	J[296] = 1.;
	J[298] = 1.;
	J[301] = 1.;

   /*** derivatives for constraint 24 ***/

	J[59] = 1.;
	J[103] = 1.;
	J[132] = 1.;
	J[162] = 1.;
	J[197] = 1.;
	J[229] = 1.;
	J[258] = 1.;
	J[281] = 1.;
	J[307] = 1.;
	J[311] = 1.;
	J[313] = 1.;
	J[317] = 1.;
	J[319] = 1.;
	J[322] = 1.;

   /*** derivatives for constraint 25 ***/

	J[63] = 1.;
	J[106] = 1.;
	J[134] = 1.;
	J[166] = 1.;
	J[201] = 1.;
	J[233] = 1.;
	J[262] = 1.;
	J[285] = 1.;
	J[308] = 1.;
	J[326] = 1.;
	J[328] = 1.;
	J[332] = 1.;
	J[334] = 1.;
	J[337] = 1.;

   /*** derivatives for constraint 26 ***/

	J[69] = 1.;
	J[109] = 1.;
	J[136] = 1.;
	J[170] = 1.;
	J[205] = 1.;
	J[238] = 1.;
	J[266] = 1.;
	J[291] = 1.;
	J[312] = 1.;
	J[327] = 1.;
	J[343] = 1.;
	J[345] = 1.;
	J[347] = 1.;
	J[349] = 1.;

   /*** derivatives for constraint 27 ***/

	J[71] = 1.;
	J[111] = 1.;
	J[138] = 1.;
	J[172] = 1.;
	J[207] = 1.;
	J[240] = 1.;
	J[268] = 1.;
	J[293] = 1.;
	J[314] = 1.;
	J[329] = 1.;
	J[344] = 1.;
	J[351] = 1.;
	J[353] = 1.;
	J[356] = 1.;

   /*** derivatives for constraint 28 ***/

	J[75] = 1.;
	J[114] = 1.;
	J[140] = 1.;
	J[176] = 1.;
	J[211] = 1.;
	J[244] = 1.;
	J[272] = 1.;
	J[297] = 1.;
	J[318] = 1.;
	J[333] = 1.;
	J[346] = 1.;
	J[352] = 1.;
	J[360] = 1.;
	J[362] = 1.;

   /*** derivatives for constraint 29 ***/

	J[77] = 1.;
	J[116] = 1.;
	J[142] = 1.;
	J[178] = 1.;
	J[213] = 1.;
	J[246] = 1.;
	J[274] = 1.;
	J[299] = 1.;
	J[320] = 1.;
	J[335] = 1.;
	J[348] = 1.;
	J[354] = 1.;
	J[361] = 1.;
	J[364] = 1.;

   /*** derivatives for constraint 30 ***/

	J[80] = 1.;
	J[119] = 1.;
	J[144] = 1.;
	J[181] = 1.;
	J[216] = 1.;
	J[249] = 1.;
	J[277] = 1.;
	J[302] = 1.;
	J[323] = 1.;
	J[338] = 1.;
	J[350] = 1.;
	J[357] = 1.;
	J[363] = 1.;
	J[365] = 1.;

   /*** derivatives for constraint 31 ***/

	J[45] = 1.;
	J[54] = 1.;
	J[64] = 1.;
	J[81] = 1.;
	J[225] = 1.;
	J[234] = 1.;
	J[250] = 1.;
	J[286] = 1.;
	J[303] = 1.;
	J[339] = 1.;

   /*** derivatives for constraint 32 ***/

	J[55] = 1.;
	J[65] = 1.;
	J[82] = 1.;
	J[287] = 1.;
	J[304] = 1.;
	J[340] = 1.;

   /*** derivatives for constraint 33 ***/

	J[32] = 1.;
	J[37] = 1.;
	J[41] = 1.;
	J[46] = 1.;
	J[50] = 1.;
	J[56] = 1.;
	J[60] = 1.;
	J[66] = 1.;
	J[72] = 1.;
	J[78] = 1.;
	J[83] = 1.;
	J[89] = 1.;
	J[92] = 1.;
	J[95] = 1.;
	J[98] = 1.;
	J[101] = 1.;
	J[104] = 1.;
	J[107] = 1.;
	J[112] = 1.;
	J[117] = 1.;
	J[120] = 1.;
	J[147] = 1.;
	J[151] = 1.;
	J[155] = 1.;
	J[159] = 1.;
	J[163] = 1.;
	J[167] = 1.;
	J[173] = 1.;
	J[179] = 1.;
	J[182] = 1.;
	J[186] = 1.;
	J[190] = 1.;
	J[194] = 1.;
	J[198] = 1.;
	J[202] = 1.;
	J[208] = 1.;
	J[214] = 1.;
	J[217] = 1.;
	J[221] = 1.;
	J[226] = 1.;
	J[230] = 1.;
	J[235] = 1.;
	J[241] = 1.;
	J[247] = 1.;
	J[251] = 1.;
	J[255] = 1.;
	J[259] = 1.;
	J[263] = 1.;
	J[269] = 1.;
	J[275] = 1.;
	J[278] = 1.;
	J[282] = 1.;
	J[288] = 1.;
	J[294] = 1.;
	J[300] = 1.;
	J[305] = 1.;
	J[309] = 1.;
	J[315] = 1.;
	J[321] = 1.;
	J[324] = 1.;
	J[330] = 1.;
	J[336] = 1.;
	J[341] = 1.;
	J[355] = 1.;
	J[358] = 1.;
	J[366] = 1.;

   /*** derivatives for constraint 34 ***/

	J[38] = 1.;
	J[42] = 1.;
	J[47] = 1.;
	J[51] = 1.;
	J[57] = 1.;
	J[61] = 1.;
	J[67] = 1.;
	J[73] = 1.;
	J[84] = 1.;
	J[148] = 1.;
	J[152] = 1.;
	J[156] = 1.;
	J[160] = 1.;
	J[164] = 1.;
	J[168] = 1.;
	J[174] = 1.;
	J[183] = 1.;
	J[187] = 1.;
	J[191] = 1.;
	J[195] = 1.;
	J[199] = 1.;
	J[203] = 1.;
	J[209] = 1.;
	J[218] = 1.;
	J[222] = 1.;
	J[227] = 1.;
	J[231] = 1.;
	J[236] = 1.;
	J[242] = 1.;
	J[252] = 1.;
	J[256] = 1.;
	J[260] = 1.;
	J[264] = 1.;
	J[270] = 1.;
	J[279] = 1.;
	J[283] = 1.;
	J[289] = 1.;
	J[295] = 1.;
	J[306] = 1.;
	J[310] = 1.;
	J[316] = 1.;
	J[325] = 1.;
	J[331] = 1.;
	J[342] = 1.;
	J[359] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
