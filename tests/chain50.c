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
 fint chain50_auxcom_[1] = { 1 /* nlc */ };
 fint chain50_funcom_[360] = {
	102 /* nvar */,
	1 /* nobj */,
	51 /* ncon */,
	251 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	6,
	9,
	12,
	15,
	18,
	21,
	24,
	27,
	30,
	33,
	36,
	39,
	42,
	45,
	48,
	51,
	54,
	57,
	60,
	63,
	66,
	69,
	72,
	75,
	78,
	81,
	84,
	87,
	90,
	93,
	96,
	99,
	102,
	105,
	108,
	111,
	114,
	117,
	120,
	123,
	126,
	129,
	132,
	135,
	138,
	141,
	144,
	147,
	150,
	152,
	153,
	155,
	157,
	159,
	161,
	163,
	165,
	167,
	169,
	171,
	173,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	189,
	191,
	193,
	195,
	197,
	199,
	201,
	203,
	205,
	207,
	209,
	211,
	213,
	215,
	217,
	219,
	221,
	223,
	225,
	227,
	229,
	231,
	233,
	235,
	237,
	239,
	241,
	243,
	245,
	247,
	249,
	251,
	252,

	/* rownos */
	1,
	2,
	1,
	2,
	3,
	1,
	3,
	4,
	1,
	4,
	5,
	1,
	5,
	6,
	1,
	6,
	7,
	1,
	7,
	8,
	1,
	8,
	9,
	1,
	9,
	10,
	1,
	10,
	11,
	1,
	11,
	12,
	1,
	12,
	13,
	1,
	13,
	14,
	1,
	14,
	15,
	1,
	15,
	16,
	1,
	16,
	17,
	1,
	17,
	18,
	1,
	18,
	19,
	1,
	19,
	20,
	1,
	20,
	21,
	1,
	21,
	22,
	1,
	22,
	23,
	1,
	23,
	24,
	1,
	24,
	25,
	1,
	25,
	26,
	1,
	26,
	27,
	1,
	27,
	28,
	1,
	28,
	29,
	1,
	29,
	30,
	1,
	30,
	31,
	1,
	31,
	32,
	1,
	32,
	33,
	1,
	33,
	34,
	1,
	34,
	35,
	1,
	35,
	36,
	1,
	36,
	37,
	1,
	37,
	38,
	1,
	38,
	39,
	1,
	39,
	40,
	1,
	40,
	41,
	1,
	41,
	42,
	1,
	42,
	43,
	1,
	43,
	44,
	1,
	44,
	45,
	1,
	45,
	46,
	1,
	46,
	47,
	1,
	47,
	48,
	1,
	48,
	49,
	1,
	49,
	50,
	1,
	50,
	51,
	1,
	51,
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
	16,
	17,
	17,
	18,
	18,
	19,
	19,
	20,
	20,
	21,
	21,
	22,
	22,
	23,
	23,
	24,
	24,
	25,
	25,
	26,
	26,
	27,
	27,
	28,
	28,
	29,
	29,
	30,
	30,
	31,
	31,
	32,
	32,
	33,
	33,
	34,
	34,
	35,
	35,
	36,
	36,
	37,
	37,
	38,
	38,
	39,
	39,
	40,
	40,
	41,
	41,
	42,
	42,
	43,
	43,
	44,
	44,
	45,
	45,
	46,
	46,
	47,
	47,
	48,
	48,
	49,
	49,
	50,
	50,
	51,
	51 };

 real chain50_boundc_[1+204+102] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
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
		3.,
		3.,
		4.,
		4.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real chain50_x0comn_[102] = {
		-2.,
		-1.84,
		-1.68,
		-1.52,
		-1.36,
		-1.2,
		-1.04,
		-0.88,
		-0.72,
		-0.56,
		-0.4,
		-0.24,
		-0.0800000000000001,
		0.0800000000000001,
		0.24,
		0.4,
		0.56,
		0.72,
		0.88,
		1.04,
		1.2,
		1.36,
		1.52,
		1.68,
		1.84,
		2.,
		2.16,
		2.32,
		2.48,
		2.64,
		2.8,
		2.96,
		3.12,
		3.28,
		3.44,
		3.6,
		3.76,
		3.92,
		4.08,
		4.24,
		4.4,
		4.56,
		4.72,
		4.88,
		5.04,
		5.2,
		5.36,
		5.52,
		5.68,
		5.84,
		6.,
		1.,
		0.9616,
		0.9264,
		0.8944,
		0.8656,
		0.84,
		0.8176,
		0.7984,
		0.7824,
		0.7696,
		0.76,
		0.7536,
		0.7504,
		0.7504,
		0.7536,
		0.76,
		0.7696,
		0.7824,
		0.7984,
		0.8176,
		0.84,
		0.8656,
		0.8944,
		0.9264,
		0.9616,
		1.,
		1.0416,
		1.0864,
		1.1344,
		1.1856,
		1.24,
		1.2976,
		1.3584,
		1.4224,
		1.4896,
		1.56,
		1.6336,
		1.7104,
		1.7904,
		1.8736,
		1.96,
		2.0496,
		2.1424,
		2.2384,
		2.3376,
		2.44,
		2.5456,
		2.6544,
		2.7664,
		2.8816,
		3. };

 static real chain50_pd[700];
static real chain50_old_x[102];
static int chain50_xkind = -1;

 static int
chain50_xcheck(real *x)
{
	real *x1 = chain50_old_x, *xe = x + 102;
	errno = 0;
	if (chain50_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	chain50_xkind = 0;
	return 1;
	}
 real
chain50_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[100];
	fint wantfg = *needfg;
	if (chain50_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	chain50_pd[300] = x[0] + x[0];
	v[1] = v[0] + 1.;
	chain50_pd[301] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (chain50_pd[301] <= 0.) {
	domain_("sqrt'", &chain50_pd[301], 5L);
	}
	chain50_pd[302] = 0.5 / chain50_pd[301];
	chain50_pd[303] = chain50_pd[301] * x[51];
	v[1] = 0.01 * chain50_pd[303];
	v[0] = x[1] * x[1];
	chain50_pd[304] = x[1] + x[1];
	v[2] = v[0] + 1.;
	chain50_pd[305] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[305] <= 0.) {
	domain_("sqrt'", &chain50_pd[305], 5L);
	}
	chain50_pd[306] = 0.5 / chain50_pd[305];
	chain50_pd[307] = chain50_pd[305] * x[52];
	v[2] = 0.01 * chain50_pd[307];
	v[1] += v[2];
	v[2] = x[1] * x[1];
	chain50_pd[308] = x[1] + x[1];
	v[0] = v[2] + 1.;
	chain50_pd[309] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[309] <= 0.) {
	domain_("sqrt'", &chain50_pd[309], 5L);
	}
	chain50_pd[310] = 0.5 / chain50_pd[309];
	chain50_pd[311] = chain50_pd[309] * x[52];
	v[0] = 0.01 * chain50_pd[311];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	chain50_pd[312] = x[2] + x[2];
	v[2] = v[0] + 1.;
	chain50_pd[313] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[313] <= 0.) {
	domain_("sqrt'", &chain50_pd[313], 5L);
	}
	chain50_pd[314] = 0.5 / chain50_pd[313];
	chain50_pd[315] = chain50_pd[313] * x[53];
	v[2] = 0.01 * chain50_pd[315];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	chain50_pd[316] = x[2] + x[2];
	v[0] = v[2] + 1.;
	chain50_pd[317] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[317] <= 0.) {
	domain_("sqrt'", &chain50_pd[317], 5L);
	}
	chain50_pd[318] = 0.5 / chain50_pd[317];
	chain50_pd[319] = chain50_pd[317] * x[53];
	v[0] = 0.01 * chain50_pd[319];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	chain50_pd[320] = x[3] + x[3];
	v[2] = v[0] + 1.;
	chain50_pd[321] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[321] <= 0.) {
	domain_("sqrt'", &chain50_pd[321], 5L);
	}
	chain50_pd[322] = 0.5 / chain50_pd[321];
	chain50_pd[323] = chain50_pd[321] * x[54];
	v[2] = 0.01 * chain50_pd[323];
	v[1] += v[2];
	v[2] = x[3] * x[3];
	chain50_pd[324] = x[3] + x[3];
	v[0] = v[2] + 1.;
	chain50_pd[325] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[325] <= 0.) {
	domain_("sqrt'", &chain50_pd[325], 5L);
	}
	chain50_pd[326] = 0.5 / chain50_pd[325];
	chain50_pd[327] = chain50_pd[325] * x[54];
	v[0] = 0.01 * chain50_pd[327];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	chain50_pd[328] = x[4] + x[4];
	v[2] = v[0] + 1.;
	chain50_pd[329] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[329] <= 0.) {
	domain_("sqrt'", &chain50_pd[329], 5L);
	}
	chain50_pd[330] = 0.5 / chain50_pd[329];
	chain50_pd[331] = chain50_pd[329] * x[55];
	v[2] = 0.01 * chain50_pd[331];
	v[1] += v[2];
	v[2] = x[4] * x[4];
	chain50_pd[332] = x[4] + x[4];
	v[0] = v[2] + 1.;
	chain50_pd[333] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[333] <= 0.) {
	domain_("sqrt'", &chain50_pd[333], 5L);
	}
	chain50_pd[334] = 0.5 / chain50_pd[333];
	chain50_pd[335] = chain50_pd[333] * x[55];
	v[0] = 0.01 * chain50_pd[335];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	chain50_pd[336] = x[5] + x[5];
	v[2] = v[0] + 1.;
	chain50_pd[337] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[337] <= 0.) {
	domain_("sqrt'", &chain50_pd[337], 5L);
	}
	chain50_pd[338] = 0.5 / chain50_pd[337];
	chain50_pd[339] = chain50_pd[337] * x[56];
	v[2] = 0.01 * chain50_pd[339];
	v[1] += v[2];
	v[2] = x[5] * x[5];
	chain50_pd[340] = x[5] + x[5];
	v[0] = v[2] + 1.;
	chain50_pd[341] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[341] <= 0.) {
	domain_("sqrt'", &chain50_pd[341], 5L);
	}
	chain50_pd[342] = 0.5 / chain50_pd[341];
	chain50_pd[343] = chain50_pd[341] * x[56];
	v[0] = 0.01 * chain50_pd[343];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	chain50_pd[344] = x[6] + x[6];
	v[2] = v[0] + 1.;
	chain50_pd[345] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[345] <= 0.) {
	domain_("sqrt'", &chain50_pd[345], 5L);
	}
	chain50_pd[346] = 0.5 / chain50_pd[345];
	chain50_pd[347] = chain50_pd[345] * x[57];
	v[2] = 0.01 * chain50_pd[347];
	v[1] += v[2];
	v[2] = x[6] * x[6];
	chain50_pd[348] = x[6] + x[6];
	v[0] = v[2] + 1.;
	chain50_pd[349] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[349] <= 0.) {
	domain_("sqrt'", &chain50_pd[349], 5L);
	}
	chain50_pd[350] = 0.5 / chain50_pd[349];
	chain50_pd[351] = chain50_pd[349] * x[57];
	v[0] = 0.01 * chain50_pd[351];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	chain50_pd[352] = x[7] + x[7];
	v[2] = v[0] + 1.;
	chain50_pd[353] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[353] <= 0.) {
	domain_("sqrt'", &chain50_pd[353], 5L);
	}
	chain50_pd[354] = 0.5 / chain50_pd[353];
	chain50_pd[355] = chain50_pd[353] * x[58];
	v[2] = 0.01 * chain50_pd[355];
	v[1] += v[2];
	v[2] = x[7] * x[7];
	chain50_pd[356] = x[7] + x[7];
	v[0] = v[2] + 1.;
	chain50_pd[357] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[357] <= 0.) {
	domain_("sqrt'", &chain50_pd[357], 5L);
	}
	chain50_pd[358] = 0.5 / chain50_pd[357];
	chain50_pd[359] = chain50_pd[357] * x[58];
	v[0] = 0.01 * chain50_pd[359];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	chain50_pd[360] = x[8] + x[8];
	v[2] = v[0] + 1.;
	chain50_pd[361] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[361] <= 0.) {
	domain_("sqrt'", &chain50_pd[361], 5L);
	}
	chain50_pd[362] = 0.5 / chain50_pd[361];
	chain50_pd[363] = chain50_pd[361] * x[59];
	v[2] = 0.01 * chain50_pd[363];
	v[1] += v[2];
	v[2] = x[8] * x[8];
	chain50_pd[364] = x[8] + x[8];
	v[0] = v[2] + 1.;
	chain50_pd[365] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[365] <= 0.) {
	domain_("sqrt'", &chain50_pd[365], 5L);
	}
	chain50_pd[366] = 0.5 / chain50_pd[365];
	chain50_pd[367] = chain50_pd[365] * x[59];
	v[0] = 0.01 * chain50_pd[367];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	chain50_pd[368] = x[9] + x[9];
	v[2] = v[0] + 1.;
	chain50_pd[369] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[369] <= 0.) {
	domain_("sqrt'", &chain50_pd[369], 5L);
	}
	chain50_pd[370] = 0.5 / chain50_pd[369];
	chain50_pd[371] = chain50_pd[369] * x[60];
	v[2] = 0.01 * chain50_pd[371];
	v[1] += v[2];
	v[2] = x[9] * x[9];
	chain50_pd[372] = x[9] + x[9];
	v[0] = v[2] + 1.;
	chain50_pd[373] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[373] <= 0.) {
	domain_("sqrt'", &chain50_pd[373], 5L);
	}
	chain50_pd[374] = 0.5 / chain50_pd[373];
	chain50_pd[375] = chain50_pd[373] * x[60];
	v[0] = 0.01 * chain50_pd[375];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	chain50_pd[376] = x[10] + x[10];
	v[2] = v[0] + 1.;
	chain50_pd[377] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[377] <= 0.) {
	domain_("sqrt'", &chain50_pd[377], 5L);
	}
	chain50_pd[378] = 0.5 / chain50_pd[377];
	chain50_pd[379] = chain50_pd[377] * x[61];
	v[2] = 0.01 * chain50_pd[379];
	v[1] += v[2];
	v[2] = x[10] * x[10];
	chain50_pd[380] = x[10] + x[10];
	v[0] = v[2] + 1.;
	chain50_pd[381] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[381] <= 0.) {
	domain_("sqrt'", &chain50_pd[381], 5L);
	}
	chain50_pd[382] = 0.5 / chain50_pd[381];
	chain50_pd[383] = chain50_pd[381] * x[61];
	v[0] = 0.01 * chain50_pd[383];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	chain50_pd[384] = x[11] + x[11];
	v[2] = v[0] + 1.;
	chain50_pd[385] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[385] <= 0.) {
	domain_("sqrt'", &chain50_pd[385], 5L);
	}
	chain50_pd[386] = 0.5 / chain50_pd[385];
	chain50_pd[387] = chain50_pd[385] * x[62];
	v[2] = 0.01 * chain50_pd[387];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	chain50_pd[388] = x[11] + x[11];
	v[0] = v[2] + 1.;
	chain50_pd[389] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[389] <= 0.) {
	domain_("sqrt'", &chain50_pd[389], 5L);
	}
	chain50_pd[390] = 0.5 / chain50_pd[389];
	chain50_pd[391] = chain50_pd[389] * x[62];
	v[0] = 0.01 * chain50_pd[391];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	chain50_pd[392] = x[12] + x[12];
	v[2] = v[0] + 1.;
	chain50_pd[393] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[393] <= 0.) {
	domain_("sqrt'", &chain50_pd[393], 5L);
	}
	chain50_pd[394] = 0.5 / chain50_pd[393];
	chain50_pd[395] = chain50_pd[393] * x[63];
	v[2] = 0.01 * chain50_pd[395];
	v[1] += v[2];
	v[2] = x[12] * x[12];
	chain50_pd[396] = x[12] + x[12];
	v[0] = v[2] + 1.;
	chain50_pd[397] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[397] <= 0.) {
	domain_("sqrt'", &chain50_pd[397], 5L);
	}
	chain50_pd[398] = 0.5 / chain50_pd[397];
	chain50_pd[399] = chain50_pd[397] * x[63];
	v[0] = 0.01 * chain50_pd[399];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	chain50_pd[400] = x[13] + x[13];
	v[2] = v[0] + 1.;
	chain50_pd[401] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[401] <= 0.) {
	domain_("sqrt'", &chain50_pd[401], 5L);
	}
	chain50_pd[402] = 0.5 / chain50_pd[401];
	chain50_pd[403] = chain50_pd[401] * x[64];
	v[2] = 0.01 * chain50_pd[403];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	chain50_pd[404] = x[13] + x[13];
	v[0] = v[2] + 1.;
	chain50_pd[405] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[405] <= 0.) {
	domain_("sqrt'", &chain50_pd[405], 5L);
	}
	chain50_pd[406] = 0.5 / chain50_pd[405];
	chain50_pd[407] = chain50_pd[405] * x[64];
	v[0] = 0.01 * chain50_pd[407];
	v[1] += v[0];
	v[0] = x[14] * x[14];
	chain50_pd[408] = x[14] + x[14];
	v[2] = v[0] + 1.;
	chain50_pd[409] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[409] <= 0.) {
	domain_("sqrt'", &chain50_pd[409], 5L);
	}
	chain50_pd[410] = 0.5 / chain50_pd[409];
	chain50_pd[411] = chain50_pd[409] * x[65];
	v[2] = 0.01 * chain50_pd[411];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	chain50_pd[412] = x[14] + x[14];
	v[0] = v[2] + 1.;
	chain50_pd[413] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[413] <= 0.) {
	domain_("sqrt'", &chain50_pd[413], 5L);
	}
	chain50_pd[414] = 0.5 / chain50_pd[413];
	chain50_pd[415] = chain50_pd[413] * x[65];
	v[0] = 0.01 * chain50_pd[415];
	v[1] += v[0];
	v[0] = x[15] * x[15];
	chain50_pd[416] = x[15] + x[15];
	v[2] = v[0] + 1.;
	chain50_pd[417] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[417] <= 0.) {
	domain_("sqrt'", &chain50_pd[417], 5L);
	}
	chain50_pd[418] = 0.5 / chain50_pd[417];
	chain50_pd[419] = chain50_pd[417] * x[66];
	v[2] = 0.01 * chain50_pd[419];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	chain50_pd[420] = x[15] + x[15];
	v[0] = v[2] + 1.;
	chain50_pd[421] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[421] <= 0.) {
	domain_("sqrt'", &chain50_pd[421], 5L);
	}
	chain50_pd[422] = 0.5 / chain50_pd[421];
	chain50_pd[423] = chain50_pd[421] * x[66];
	v[0] = 0.01 * chain50_pd[423];
	v[1] += v[0];
	v[0] = x[16] * x[16];
	chain50_pd[424] = x[16] + x[16];
	v[2] = v[0] + 1.;
	chain50_pd[425] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[425] <= 0.) {
	domain_("sqrt'", &chain50_pd[425], 5L);
	}
	chain50_pd[426] = 0.5 / chain50_pd[425];
	chain50_pd[427] = chain50_pd[425] * x[67];
	v[2] = 0.01 * chain50_pd[427];
	v[1] += v[2];
	v[2] = x[16] * x[16];
	chain50_pd[428] = x[16] + x[16];
	v[0] = v[2] + 1.;
	chain50_pd[429] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[429] <= 0.) {
	domain_("sqrt'", &chain50_pd[429], 5L);
	}
	chain50_pd[430] = 0.5 / chain50_pd[429];
	chain50_pd[431] = chain50_pd[429] * x[67];
	v[0] = 0.01 * chain50_pd[431];
	v[1] += v[0];
	v[0] = x[17] * x[17];
	chain50_pd[432] = x[17] + x[17];
	v[2] = v[0] + 1.;
	chain50_pd[433] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[433] <= 0.) {
	domain_("sqrt'", &chain50_pd[433], 5L);
	}
	chain50_pd[434] = 0.5 / chain50_pd[433];
	chain50_pd[435] = chain50_pd[433] * x[68];
	v[2] = 0.01 * chain50_pd[435];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	chain50_pd[436] = x[17] + x[17];
	v[0] = v[2] + 1.;
	chain50_pd[437] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[437] <= 0.) {
	domain_("sqrt'", &chain50_pd[437], 5L);
	}
	chain50_pd[438] = 0.5 / chain50_pd[437];
	chain50_pd[439] = chain50_pd[437] * x[68];
	v[0] = 0.01 * chain50_pd[439];
	v[1] += v[0];
	v[0] = x[18] * x[18];
	chain50_pd[440] = x[18] + x[18];
	v[2] = v[0] + 1.;
	chain50_pd[441] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[441] <= 0.) {
	domain_("sqrt'", &chain50_pd[441], 5L);
	}
	chain50_pd[442] = 0.5 / chain50_pd[441];
	chain50_pd[443] = chain50_pd[441] * x[69];
	v[2] = 0.01 * chain50_pd[443];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	chain50_pd[444] = x[18] + x[18];
	v[0] = v[2] + 1.;
	chain50_pd[445] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[445] <= 0.) {
	domain_("sqrt'", &chain50_pd[445], 5L);
	}
	chain50_pd[446] = 0.5 / chain50_pd[445];
	chain50_pd[447] = chain50_pd[445] * x[69];
	v[0] = 0.01 * chain50_pd[447];
	v[1] += v[0];
	v[0] = x[19] * x[19];
	chain50_pd[448] = x[19] + x[19];
	v[2] = v[0] + 1.;
	chain50_pd[449] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[449] <= 0.) {
	domain_("sqrt'", &chain50_pd[449], 5L);
	}
	chain50_pd[450] = 0.5 / chain50_pd[449];
	chain50_pd[451] = chain50_pd[449] * x[70];
	v[2] = 0.01 * chain50_pd[451];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	chain50_pd[452] = x[19] + x[19];
	v[0] = v[2] + 1.;
	chain50_pd[453] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[453] <= 0.) {
	domain_("sqrt'", &chain50_pd[453], 5L);
	}
	chain50_pd[454] = 0.5 / chain50_pd[453];
	chain50_pd[455] = chain50_pd[453] * x[70];
	v[0] = 0.01 * chain50_pd[455];
	v[1] += v[0];
	v[0] = x[20] * x[20];
	chain50_pd[456] = x[20] + x[20];
	v[2] = v[0] + 1.;
	chain50_pd[457] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[457] <= 0.) {
	domain_("sqrt'", &chain50_pd[457], 5L);
	}
	chain50_pd[458] = 0.5 / chain50_pd[457];
	chain50_pd[459] = chain50_pd[457] * x[71];
	v[2] = 0.01 * chain50_pd[459];
	v[1] += v[2];
	v[2] = x[20] * x[20];
	chain50_pd[460] = x[20] + x[20];
	v[0] = v[2] + 1.;
	chain50_pd[461] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[461] <= 0.) {
	domain_("sqrt'", &chain50_pd[461], 5L);
	}
	chain50_pd[462] = 0.5 / chain50_pd[461];
	chain50_pd[463] = chain50_pd[461] * x[71];
	v[0] = 0.01 * chain50_pd[463];
	v[1] += v[0];
	v[0] = x[21] * x[21];
	chain50_pd[464] = x[21] + x[21];
	v[2] = v[0] + 1.;
	chain50_pd[465] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[465] <= 0.) {
	domain_("sqrt'", &chain50_pd[465], 5L);
	}
	chain50_pd[466] = 0.5 / chain50_pd[465];
	chain50_pd[467] = chain50_pd[465] * x[72];
	v[2] = 0.01 * chain50_pd[467];
	v[1] += v[2];
	v[2] = x[21] * x[21];
	chain50_pd[468] = x[21] + x[21];
	v[0] = v[2] + 1.;
	chain50_pd[469] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[469] <= 0.) {
	domain_("sqrt'", &chain50_pd[469], 5L);
	}
	chain50_pd[470] = 0.5 / chain50_pd[469];
	chain50_pd[471] = chain50_pd[469] * x[72];
	v[0] = 0.01 * chain50_pd[471];
	v[1] += v[0];
	v[0] = x[22] * x[22];
	chain50_pd[472] = x[22] + x[22];
	v[2] = v[0] + 1.;
	chain50_pd[473] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[473] <= 0.) {
	domain_("sqrt'", &chain50_pd[473], 5L);
	}
	chain50_pd[474] = 0.5 / chain50_pd[473];
	chain50_pd[475] = chain50_pd[473] * x[73];
	v[2] = 0.01 * chain50_pd[475];
	v[1] += v[2];
	v[2] = x[22] * x[22];
	chain50_pd[476] = x[22] + x[22];
	v[0] = v[2] + 1.;
	chain50_pd[477] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[477] <= 0.) {
	domain_("sqrt'", &chain50_pd[477], 5L);
	}
	chain50_pd[478] = 0.5 / chain50_pd[477];
	chain50_pd[479] = chain50_pd[477] * x[73];
	v[0] = 0.01 * chain50_pd[479];
	v[1] += v[0];
	v[0] = x[23] * x[23];
	chain50_pd[480] = x[23] + x[23];
	v[2] = v[0] + 1.;
	chain50_pd[481] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[481] <= 0.) {
	domain_("sqrt'", &chain50_pd[481], 5L);
	}
	chain50_pd[482] = 0.5 / chain50_pd[481];
	chain50_pd[483] = chain50_pd[481] * x[74];
	v[2] = 0.01 * chain50_pd[483];
	v[1] += v[2];
	v[2] = x[23] * x[23];
	chain50_pd[484] = x[23] + x[23];
	v[0] = v[2] + 1.;
	chain50_pd[485] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[485] <= 0.) {
	domain_("sqrt'", &chain50_pd[485], 5L);
	}
	chain50_pd[486] = 0.5 / chain50_pd[485];
	chain50_pd[487] = chain50_pd[485] * x[74];
	v[0] = 0.01 * chain50_pd[487];
	v[1] += v[0];
	v[0] = x[24] * x[24];
	chain50_pd[488] = x[24] + x[24];
	v[2] = v[0] + 1.;
	chain50_pd[489] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[489] <= 0.) {
	domain_("sqrt'", &chain50_pd[489], 5L);
	}
	chain50_pd[490] = 0.5 / chain50_pd[489];
	chain50_pd[491] = chain50_pd[489] * x[75];
	v[2] = 0.01 * chain50_pd[491];
	v[1] += v[2];
	v[2] = x[24] * x[24];
	chain50_pd[492] = x[24] + x[24];
	v[0] = v[2] + 1.;
	chain50_pd[493] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[493] <= 0.) {
	domain_("sqrt'", &chain50_pd[493], 5L);
	}
	chain50_pd[494] = 0.5 / chain50_pd[493];
	chain50_pd[495] = chain50_pd[493] * x[75];
	v[0] = 0.01 * chain50_pd[495];
	v[1] += v[0];
	v[0] = x[25] * x[25];
	chain50_pd[496] = x[25] + x[25];
	v[2] = v[0] + 1.;
	chain50_pd[497] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[497] <= 0.) {
	domain_("sqrt'", &chain50_pd[497], 5L);
	}
	chain50_pd[498] = 0.5 / chain50_pd[497];
	chain50_pd[499] = chain50_pd[497] * x[76];
	v[2] = 0.01 * chain50_pd[499];
	v[1] += v[2];
	v[2] = x[25] * x[25];
	chain50_pd[500] = x[25] + x[25];
	v[0] = v[2] + 1.;
	chain50_pd[501] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[501] <= 0.) {
	domain_("sqrt'", &chain50_pd[501], 5L);
	}
	chain50_pd[502] = 0.5 / chain50_pd[501];
	chain50_pd[503] = chain50_pd[501] * x[76];
	v[0] = 0.01 * chain50_pd[503];
	v[1] += v[0];
	v[0] = x[26] * x[26];
	chain50_pd[504] = x[26] + x[26];
	v[2] = v[0] + 1.;
	chain50_pd[505] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[505] <= 0.) {
	domain_("sqrt'", &chain50_pd[505], 5L);
	}
	chain50_pd[506] = 0.5 / chain50_pd[505];
	chain50_pd[507] = chain50_pd[505] * x[77];
	v[2] = 0.01 * chain50_pd[507];
	v[1] += v[2];
	v[2] = x[26] * x[26];
	chain50_pd[508] = x[26] + x[26];
	v[0] = v[2] + 1.;
	chain50_pd[509] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[509] <= 0.) {
	domain_("sqrt'", &chain50_pd[509], 5L);
	}
	chain50_pd[510] = 0.5 / chain50_pd[509];
	chain50_pd[511] = chain50_pd[509] * x[77];
	v[0] = 0.01 * chain50_pd[511];
	v[1] += v[0];
	v[0] = x[27] * x[27];
	chain50_pd[512] = x[27] + x[27];
	v[2] = v[0] + 1.;
	chain50_pd[513] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[513] <= 0.) {
	domain_("sqrt'", &chain50_pd[513], 5L);
	}
	chain50_pd[514] = 0.5 / chain50_pd[513];
	chain50_pd[515] = chain50_pd[513] * x[78];
	v[2] = 0.01 * chain50_pd[515];
	v[1] += v[2];
	v[2] = x[27] * x[27];
	chain50_pd[516] = x[27] + x[27];
	v[0] = v[2] + 1.;
	chain50_pd[517] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[517] <= 0.) {
	domain_("sqrt'", &chain50_pd[517], 5L);
	}
	chain50_pd[518] = 0.5 / chain50_pd[517];
	chain50_pd[519] = chain50_pd[517] * x[78];
	v[0] = 0.01 * chain50_pd[519];
	v[1] += v[0];
	v[0] = x[28] * x[28];
	chain50_pd[520] = x[28] + x[28];
	v[2] = v[0] + 1.;
	chain50_pd[521] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[521] <= 0.) {
	domain_("sqrt'", &chain50_pd[521], 5L);
	}
	chain50_pd[522] = 0.5 / chain50_pd[521];
	chain50_pd[523] = chain50_pd[521] * x[79];
	v[2] = 0.01 * chain50_pd[523];
	v[1] += v[2];
	v[2] = x[28] * x[28];
	chain50_pd[524] = x[28] + x[28];
	v[0] = v[2] + 1.;
	chain50_pd[525] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[525] <= 0.) {
	domain_("sqrt'", &chain50_pd[525], 5L);
	}
	chain50_pd[526] = 0.5 / chain50_pd[525];
	chain50_pd[527] = chain50_pd[525] * x[79];
	v[0] = 0.01 * chain50_pd[527];
	v[1] += v[0];
	v[0] = x[29] * x[29];
	chain50_pd[528] = x[29] + x[29];
	v[2] = v[0] + 1.;
	chain50_pd[529] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[529] <= 0.) {
	domain_("sqrt'", &chain50_pd[529], 5L);
	}
	chain50_pd[530] = 0.5 / chain50_pd[529];
	chain50_pd[531] = chain50_pd[529] * x[80];
	v[2] = 0.01 * chain50_pd[531];
	v[1] += v[2];
	v[2] = x[29] * x[29];
	chain50_pd[532] = x[29] + x[29];
	v[0] = v[2] + 1.;
	chain50_pd[533] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[533] <= 0.) {
	domain_("sqrt'", &chain50_pd[533], 5L);
	}
	chain50_pd[534] = 0.5 / chain50_pd[533];
	chain50_pd[535] = chain50_pd[533] * x[80];
	v[0] = 0.01 * chain50_pd[535];
	v[1] += v[0];
	v[0] = x[30] * x[30];
	chain50_pd[536] = x[30] + x[30];
	v[2] = v[0] + 1.;
	chain50_pd[537] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[537] <= 0.) {
	domain_("sqrt'", &chain50_pd[537], 5L);
	}
	chain50_pd[538] = 0.5 / chain50_pd[537];
	chain50_pd[539] = chain50_pd[537] * x[81];
	v[2] = 0.01 * chain50_pd[539];
	v[1] += v[2];
	v[2] = x[30] * x[30];
	chain50_pd[540] = x[30] + x[30];
	v[0] = v[2] + 1.;
	chain50_pd[541] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[541] <= 0.) {
	domain_("sqrt'", &chain50_pd[541], 5L);
	}
	chain50_pd[542] = 0.5 / chain50_pd[541];
	chain50_pd[543] = chain50_pd[541] * x[81];
	v[0] = 0.01 * chain50_pd[543];
	v[1] += v[0];
	v[0] = x[31] * x[31];
	chain50_pd[544] = x[31] + x[31];
	v[2] = v[0] + 1.;
	chain50_pd[545] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[545] <= 0.) {
	domain_("sqrt'", &chain50_pd[545], 5L);
	}
	chain50_pd[546] = 0.5 / chain50_pd[545];
	chain50_pd[547] = chain50_pd[545] * x[82];
	v[2] = 0.01 * chain50_pd[547];
	v[1] += v[2];
	v[2] = x[31] * x[31];
	chain50_pd[548] = x[31] + x[31];
	v[0] = v[2] + 1.;
	chain50_pd[549] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[549] <= 0.) {
	domain_("sqrt'", &chain50_pd[549], 5L);
	}
	chain50_pd[550] = 0.5 / chain50_pd[549];
	chain50_pd[551] = chain50_pd[549] * x[82];
	v[0] = 0.01 * chain50_pd[551];
	v[1] += v[0];
	v[0] = x[32] * x[32];
	chain50_pd[552] = x[32] + x[32];
	v[2] = v[0] + 1.;
	chain50_pd[553] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[553] <= 0.) {
	domain_("sqrt'", &chain50_pd[553], 5L);
	}
	chain50_pd[554] = 0.5 / chain50_pd[553];
	chain50_pd[555] = chain50_pd[553] * x[83];
	v[2] = 0.01 * chain50_pd[555];
	v[1] += v[2];
	v[2] = x[32] * x[32];
	chain50_pd[556] = x[32] + x[32];
	v[0] = v[2] + 1.;
	chain50_pd[557] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[557] <= 0.) {
	domain_("sqrt'", &chain50_pd[557], 5L);
	}
	chain50_pd[558] = 0.5 / chain50_pd[557];
	chain50_pd[559] = chain50_pd[557] * x[83];
	v[0] = 0.01 * chain50_pd[559];
	v[1] += v[0];
	v[0] = x[33] * x[33];
	chain50_pd[560] = x[33] + x[33];
	v[2] = v[0] + 1.;
	chain50_pd[561] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[561] <= 0.) {
	domain_("sqrt'", &chain50_pd[561], 5L);
	}
	chain50_pd[562] = 0.5 / chain50_pd[561];
	chain50_pd[563] = chain50_pd[561] * x[84];
	v[2] = 0.01 * chain50_pd[563];
	v[1] += v[2];
	v[2] = x[33] * x[33];
	chain50_pd[564] = x[33] + x[33];
	v[0] = v[2] + 1.;
	chain50_pd[565] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[565] <= 0.) {
	domain_("sqrt'", &chain50_pd[565], 5L);
	}
	chain50_pd[566] = 0.5 / chain50_pd[565];
	chain50_pd[567] = chain50_pd[565] * x[84];
	v[0] = 0.01 * chain50_pd[567];
	v[1] += v[0];
	v[0] = x[34] * x[34];
	chain50_pd[568] = x[34] + x[34];
	v[2] = v[0] + 1.;
	chain50_pd[569] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[569] <= 0.) {
	domain_("sqrt'", &chain50_pd[569], 5L);
	}
	chain50_pd[570] = 0.5 / chain50_pd[569];
	chain50_pd[571] = chain50_pd[569] * x[85];
	v[2] = 0.01 * chain50_pd[571];
	v[1] += v[2];
	v[2] = x[34] * x[34];
	chain50_pd[572] = x[34] + x[34];
	v[0] = v[2] + 1.;
	chain50_pd[573] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[573] <= 0.) {
	domain_("sqrt'", &chain50_pd[573], 5L);
	}
	chain50_pd[574] = 0.5 / chain50_pd[573];
	chain50_pd[575] = chain50_pd[573] * x[85];
	v[0] = 0.01 * chain50_pd[575];
	v[1] += v[0];
	v[0] = x[35] * x[35];
	chain50_pd[576] = x[35] + x[35];
	v[2] = v[0] + 1.;
	chain50_pd[577] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[577] <= 0.) {
	domain_("sqrt'", &chain50_pd[577], 5L);
	}
	chain50_pd[578] = 0.5 / chain50_pd[577];
	chain50_pd[579] = chain50_pd[577] * x[86];
	v[2] = 0.01 * chain50_pd[579];
	v[1] += v[2];
	v[2] = x[35] * x[35];
	chain50_pd[580] = x[35] + x[35];
	v[0] = v[2] + 1.;
	chain50_pd[581] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[581] <= 0.) {
	domain_("sqrt'", &chain50_pd[581], 5L);
	}
	chain50_pd[582] = 0.5 / chain50_pd[581];
	chain50_pd[583] = chain50_pd[581] * x[86];
	v[0] = 0.01 * chain50_pd[583];
	v[1] += v[0];
	v[0] = x[36] * x[36];
	chain50_pd[584] = x[36] + x[36];
	v[2] = v[0] + 1.;
	chain50_pd[585] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[585] <= 0.) {
	domain_("sqrt'", &chain50_pd[585], 5L);
	}
	chain50_pd[586] = 0.5 / chain50_pd[585];
	chain50_pd[587] = chain50_pd[585] * x[87];
	v[2] = 0.01 * chain50_pd[587];
	v[1] += v[2];
	v[2] = x[36] * x[36];
	chain50_pd[588] = x[36] + x[36];
	v[0] = v[2] + 1.;
	chain50_pd[589] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[589] <= 0.) {
	domain_("sqrt'", &chain50_pd[589], 5L);
	}
	chain50_pd[590] = 0.5 / chain50_pd[589];
	chain50_pd[591] = chain50_pd[589] * x[87];
	v[0] = 0.01 * chain50_pd[591];
	v[1] += v[0];
	v[0] = x[37] * x[37];
	chain50_pd[592] = x[37] + x[37];
	v[2] = v[0] + 1.;
	chain50_pd[593] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[593] <= 0.) {
	domain_("sqrt'", &chain50_pd[593], 5L);
	}
	chain50_pd[594] = 0.5 / chain50_pd[593];
	chain50_pd[595] = chain50_pd[593] * x[88];
	v[2] = 0.01 * chain50_pd[595];
	v[1] += v[2];
	v[2] = x[37] * x[37];
	chain50_pd[596] = x[37] + x[37];
	v[0] = v[2] + 1.;
	chain50_pd[597] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[597] <= 0.) {
	domain_("sqrt'", &chain50_pd[597], 5L);
	}
	chain50_pd[598] = 0.5 / chain50_pd[597];
	chain50_pd[599] = chain50_pd[597] * x[88];
	v[0] = 0.01 * chain50_pd[599];
	v[1] += v[0];
	v[0] = x[38] * x[38];
	chain50_pd[600] = x[38] + x[38];
	v[2] = v[0] + 1.;
	chain50_pd[601] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[601] <= 0.) {
	domain_("sqrt'", &chain50_pd[601], 5L);
	}
	chain50_pd[602] = 0.5 / chain50_pd[601];
	chain50_pd[603] = chain50_pd[601] * x[89];
	v[2] = 0.01 * chain50_pd[603];
	v[1] += v[2];
	v[2] = x[38] * x[38];
	chain50_pd[604] = x[38] + x[38];
	v[0] = v[2] + 1.;
	chain50_pd[605] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[605] <= 0.) {
	domain_("sqrt'", &chain50_pd[605], 5L);
	}
	chain50_pd[606] = 0.5 / chain50_pd[605];
	chain50_pd[607] = chain50_pd[605] * x[89];
	v[0] = 0.01 * chain50_pd[607];
	v[1] += v[0];
	v[0] = x[39] * x[39];
	chain50_pd[608] = x[39] + x[39];
	v[2] = v[0] + 1.;
	chain50_pd[609] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[609] <= 0.) {
	domain_("sqrt'", &chain50_pd[609], 5L);
	}
	chain50_pd[610] = 0.5 / chain50_pd[609];
	chain50_pd[611] = chain50_pd[609] * x[90];
	v[2] = 0.01 * chain50_pd[611];
	v[1] += v[2];
	v[2] = x[39] * x[39];
	chain50_pd[612] = x[39] + x[39];
	v[0] = v[2] + 1.;
	chain50_pd[613] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[613] <= 0.) {
	domain_("sqrt'", &chain50_pd[613], 5L);
	}
	chain50_pd[614] = 0.5 / chain50_pd[613];
	chain50_pd[615] = chain50_pd[613] * x[90];
	v[0] = 0.01 * chain50_pd[615];
	v[1] += v[0];
	v[0] = x[40] * x[40];
	chain50_pd[616] = x[40] + x[40];
	v[2] = v[0] + 1.;
	chain50_pd[617] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[617] <= 0.) {
	domain_("sqrt'", &chain50_pd[617], 5L);
	}
	chain50_pd[618] = 0.5 / chain50_pd[617];
	chain50_pd[619] = chain50_pd[617] * x[91];
	v[2] = 0.01 * chain50_pd[619];
	v[1] += v[2];
	v[2] = x[40] * x[40];
	chain50_pd[620] = x[40] + x[40];
	v[0] = v[2] + 1.;
	chain50_pd[621] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[621] <= 0.) {
	domain_("sqrt'", &chain50_pd[621], 5L);
	}
	chain50_pd[622] = 0.5 / chain50_pd[621];
	chain50_pd[623] = chain50_pd[621] * x[91];
	v[0] = 0.01 * chain50_pd[623];
	v[1] += v[0];
	v[0] = x[41] * x[41];
	chain50_pd[624] = x[41] + x[41];
	v[2] = v[0] + 1.;
	chain50_pd[625] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[625] <= 0.) {
	domain_("sqrt'", &chain50_pd[625], 5L);
	}
	chain50_pd[626] = 0.5 / chain50_pd[625];
	chain50_pd[627] = chain50_pd[625] * x[92];
	v[2] = 0.01 * chain50_pd[627];
	v[1] += v[2];
	v[2] = x[41] * x[41];
	chain50_pd[628] = x[41] + x[41];
	v[0] = v[2] + 1.;
	chain50_pd[629] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[629] <= 0.) {
	domain_("sqrt'", &chain50_pd[629], 5L);
	}
	chain50_pd[630] = 0.5 / chain50_pd[629];
	chain50_pd[631] = chain50_pd[629] * x[92];
	v[0] = 0.01 * chain50_pd[631];
	v[1] += v[0];
	v[0] = x[42] * x[42];
	chain50_pd[632] = x[42] + x[42];
	v[2] = v[0] + 1.;
	chain50_pd[633] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[633] <= 0.) {
	domain_("sqrt'", &chain50_pd[633], 5L);
	}
	chain50_pd[634] = 0.5 / chain50_pd[633];
	chain50_pd[635] = chain50_pd[633] * x[93];
	v[2] = 0.01 * chain50_pd[635];
	v[1] += v[2];
	v[2] = x[42] * x[42];
	chain50_pd[636] = x[42] + x[42];
	v[0] = v[2] + 1.;
	chain50_pd[637] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[637] <= 0.) {
	domain_("sqrt'", &chain50_pd[637], 5L);
	}
	chain50_pd[638] = 0.5 / chain50_pd[637];
	chain50_pd[639] = chain50_pd[637] * x[93];
	v[0] = 0.01 * chain50_pd[639];
	v[1] += v[0];
	v[0] = x[43] * x[43];
	chain50_pd[640] = x[43] + x[43];
	v[2] = v[0] + 1.;
	chain50_pd[641] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[641] <= 0.) {
	domain_("sqrt'", &chain50_pd[641], 5L);
	}
	chain50_pd[642] = 0.5 / chain50_pd[641];
	chain50_pd[643] = chain50_pd[641] * x[94];
	v[2] = 0.01 * chain50_pd[643];
	v[1] += v[2];
	v[2] = x[43] * x[43];
	chain50_pd[644] = x[43] + x[43];
	v[0] = v[2] + 1.;
	chain50_pd[645] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[645] <= 0.) {
	domain_("sqrt'", &chain50_pd[645], 5L);
	}
	chain50_pd[646] = 0.5 / chain50_pd[645];
	chain50_pd[647] = chain50_pd[645] * x[94];
	v[0] = 0.01 * chain50_pd[647];
	v[1] += v[0];
	v[0] = x[44] * x[44];
	chain50_pd[648] = x[44] + x[44];
	v[2] = v[0] + 1.;
	chain50_pd[649] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[649] <= 0.) {
	domain_("sqrt'", &chain50_pd[649], 5L);
	}
	chain50_pd[650] = 0.5 / chain50_pd[649];
	chain50_pd[651] = chain50_pd[649] * x[95];
	v[2] = 0.01 * chain50_pd[651];
	v[1] += v[2];
	v[2] = x[44] * x[44];
	chain50_pd[652] = x[44] + x[44];
	v[0] = v[2] + 1.;
	chain50_pd[653] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[653] <= 0.) {
	domain_("sqrt'", &chain50_pd[653], 5L);
	}
	chain50_pd[654] = 0.5 / chain50_pd[653];
	chain50_pd[655] = chain50_pd[653] * x[95];
	v[0] = 0.01 * chain50_pd[655];
	v[1] += v[0];
	v[0] = x[45] * x[45];
	chain50_pd[656] = x[45] + x[45];
	v[2] = v[0] + 1.;
	chain50_pd[657] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[657] <= 0.) {
	domain_("sqrt'", &chain50_pd[657], 5L);
	}
	chain50_pd[658] = 0.5 / chain50_pd[657];
	chain50_pd[659] = chain50_pd[657] * x[96];
	v[2] = 0.01 * chain50_pd[659];
	v[1] += v[2];
	v[2] = x[45] * x[45];
	chain50_pd[660] = x[45] + x[45];
	v[0] = v[2] + 1.;
	chain50_pd[661] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[661] <= 0.) {
	domain_("sqrt'", &chain50_pd[661], 5L);
	}
	chain50_pd[662] = 0.5 / chain50_pd[661];
	chain50_pd[663] = chain50_pd[661] * x[96];
	v[0] = 0.01 * chain50_pd[663];
	v[1] += v[0];
	v[0] = x[46] * x[46];
	chain50_pd[664] = x[46] + x[46];
	v[2] = v[0] + 1.;
	chain50_pd[665] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[665] <= 0.) {
	domain_("sqrt'", &chain50_pd[665], 5L);
	}
	chain50_pd[666] = 0.5 / chain50_pd[665];
	chain50_pd[667] = chain50_pd[665] * x[97];
	v[2] = 0.01 * chain50_pd[667];
	v[1] += v[2];
	v[2] = x[46] * x[46];
	chain50_pd[668] = x[46] + x[46];
	v[0] = v[2] + 1.;
	chain50_pd[669] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[669] <= 0.) {
	domain_("sqrt'", &chain50_pd[669], 5L);
	}
	chain50_pd[670] = 0.5 / chain50_pd[669];
	chain50_pd[671] = chain50_pd[669] * x[97];
	v[0] = 0.01 * chain50_pd[671];
	v[1] += v[0];
	v[0] = x[47] * x[47];
	chain50_pd[672] = x[47] + x[47];
	v[2] = v[0] + 1.;
	chain50_pd[673] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[673] <= 0.) {
	domain_("sqrt'", &chain50_pd[673], 5L);
	}
	chain50_pd[674] = 0.5 / chain50_pd[673];
	chain50_pd[675] = chain50_pd[673] * x[98];
	v[2] = 0.01 * chain50_pd[675];
	v[1] += v[2];
	v[2] = x[47] * x[47];
	chain50_pd[676] = x[47] + x[47];
	v[0] = v[2] + 1.;
	chain50_pd[677] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[677] <= 0.) {
	domain_("sqrt'", &chain50_pd[677], 5L);
	}
	chain50_pd[678] = 0.5 / chain50_pd[677];
	chain50_pd[679] = chain50_pd[677] * x[98];
	v[0] = 0.01 * chain50_pd[679];
	v[1] += v[0];
	v[0] = x[48] * x[48];
	chain50_pd[680] = x[48] + x[48];
	v[2] = v[0] + 1.;
	chain50_pd[681] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[681] <= 0.) {
	domain_("sqrt'", &chain50_pd[681], 5L);
	}
	chain50_pd[682] = 0.5 / chain50_pd[681];
	chain50_pd[683] = chain50_pd[681] * x[99];
	v[2] = 0.01 * chain50_pd[683];
	v[1] += v[2];
	v[2] = x[48] * x[48];
	chain50_pd[684] = x[48] + x[48];
	v[0] = v[2] + 1.;
	chain50_pd[685] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[685] <= 0.) {
	domain_("sqrt'", &chain50_pd[685], 5L);
	}
	chain50_pd[686] = 0.5 / chain50_pd[685];
	chain50_pd[687] = chain50_pd[685] * x[99];
	v[0] = 0.01 * chain50_pd[687];
	v[1] += v[0];
	v[0] = x[49] * x[49];
	chain50_pd[688] = x[49] + x[49];
	v[2] = v[0] + 1.;
	chain50_pd[689] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[689] <= 0.) {
	domain_("sqrt'", &chain50_pd[689], 5L);
	}
	chain50_pd[690] = 0.5 / chain50_pd[689];
	chain50_pd[691] = chain50_pd[689] * x[100];
	v[2] = 0.01 * chain50_pd[691];
	v[1] += v[2];
	v[2] = x[49] * x[49];
	chain50_pd[692] = x[49] + x[49];
	v[0] = v[2] + 1.;
	chain50_pd[693] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[693] <= 0.) {
	domain_("sqrt'", &chain50_pd[693], 5L);
	}
	chain50_pd[694] = 0.5 / chain50_pd[693];
	chain50_pd[695] = chain50_pd[693] * x[100];
	v[0] = 0.01 * chain50_pd[695];
	v[1] += v[0];
	v[0] = x[50] * x[50];
	chain50_pd[696] = x[50] + x[50];
	v[2] = v[0] + 1.;
	chain50_pd[697] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[697] <= 0.) {
	domain_("sqrt'", &chain50_pd[697], 5L);
	}
	chain50_pd[698] = 0.5 / chain50_pd[697];
	chain50_pd[699] = chain50_pd[697] * x[101];
	v[2] = 0.01 * chain50_pd[699];
	v[1] += v[2];
	;}

	if (wantfg & 2) {
	g[101] = 0.01*chain50_pd[697];
	dv[0] = 0.01*x[101];
	dv[0] *= chain50_pd[698];
	g[50] = dv[0]*chain50_pd[696];
	g[100] = 0.01*chain50_pd[693];
	dv[1] = 0.01*x[100];
	dv[1] *= chain50_pd[694];
	g[49] = dv[1]*chain50_pd[692];
	g[100] += 0.01*chain50_pd[689];
	dv[2] = 0.01*x[100];
	dv[2] *= chain50_pd[690];
	g[49] += dv[2]*chain50_pd[688];
	g[99] = 0.01*chain50_pd[685];
	dv[3] = 0.01*x[99];
	dv[3] *= chain50_pd[686];
	g[48] = dv[3]*chain50_pd[684];
	g[99] += 0.01*chain50_pd[681];
	dv[4] = 0.01*x[99];
	dv[4] *= chain50_pd[682];
	g[48] += dv[4]*chain50_pd[680];
	g[98] = 0.01*chain50_pd[677];
	dv[5] = 0.01*x[98];
	dv[5] *= chain50_pd[678];
	g[47] = dv[5]*chain50_pd[676];
	g[98] += 0.01*chain50_pd[673];
	dv[6] = 0.01*x[98];
	dv[6] *= chain50_pd[674];
	g[47] += dv[6]*chain50_pd[672];
	g[97] = 0.01*chain50_pd[669];
	dv[7] = 0.01*x[97];
	dv[7] *= chain50_pd[670];
	g[46] = dv[7]*chain50_pd[668];
	g[97] += 0.01*chain50_pd[665];
	dv[8] = 0.01*x[97];
	dv[8] *= chain50_pd[666];
	g[46] += dv[8]*chain50_pd[664];
	g[96] = 0.01*chain50_pd[661];
	dv[9] = 0.01*x[96];
	dv[9] *= chain50_pd[662];
	g[45] = dv[9]*chain50_pd[660];
	g[96] += 0.01*chain50_pd[657];
	dv[10] = 0.01*x[96];
	dv[10] *= chain50_pd[658];
	g[45] += dv[10]*chain50_pd[656];
	g[95] = 0.01*chain50_pd[653];
	dv[11] = 0.01*x[95];
	dv[11] *= chain50_pd[654];
	g[44] = dv[11]*chain50_pd[652];
	g[95] += 0.01*chain50_pd[649];
	dv[12] = 0.01*x[95];
	dv[12] *= chain50_pd[650];
	g[44] += dv[12]*chain50_pd[648];
	g[94] = 0.01*chain50_pd[645];
	dv[13] = 0.01*x[94];
	dv[13] *= chain50_pd[646];
	g[43] = dv[13]*chain50_pd[644];
	g[94] += 0.01*chain50_pd[641];
	dv[14] = 0.01*x[94];
	dv[14] *= chain50_pd[642];
	g[43] += dv[14]*chain50_pd[640];
	g[93] = 0.01*chain50_pd[637];
	dv[15] = 0.01*x[93];
	dv[15] *= chain50_pd[638];
	g[42] = dv[15]*chain50_pd[636];
	g[93] += 0.01*chain50_pd[633];
	dv[16] = 0.01*x[93];
	dv[16] *= chain50_pd[634];
	g[42] += dv[16]*chain50_pd[632];
	g[92] = 0.01*chain50_pd[629];
	dv[17] = 0.01*x[92];
	dv[17] *= chain50_pd[630];
	g[41] = dv[17]*chain50_pd[628];
	g[92] += 0.01*chain50_pd[625];
	dv[18] = 0.01*x[92];
	dv[18] *= chain50_pd[626];
	g[41] += dv[18]*chain50_pd[624];
	g[91] = 0.01*chain50_pd[621];
	dv[19] = 0.01*x[91];
	dv[19] *= chain50_pd[622];
	g[40] = dv[19]*chain50_pd[620];
	g[91] += 0.01*chain50_pd[617];
	dv[20] = 0.01*x[91];
	dv[20] *= chain50_pd[618];
	g[40] += dv[20]*chain50_pd[616];
	g[90] = 0.01*chain50_pd[613];
	dv[21] = 0.01*x[90];
	dv[21] *= chain50_pd[614];
	g[39] = dv[21]*chain50_pd[612];
	g[90] += 0.01*chain50_pd[609];
	dv[22] = 0.01*x[90];
	dv[22] *= chain50_pd[610];
	g[39] += dv[22]*chain50_pd[608];
	g[89] = 0.01*chain50_pd[605];
	dv[23] = 0.01*x[89];
	dv[23] *= chain50_pd[606];
	g[38] = dv[23]*chain50_pd[604];
	g[89] += 0.01*chain50_pd[601];
	dv[24] = 0.01*x[89];
	dv[24] *= chain50_pd[602];
	g[38] += dv[24]*chain50_pd[600];
	g[88] = 0.01*chain50_pd[597];
	dv[25] = 0.01*x[88];
	dv[25] *= chain50_pd[598];
	g[37] = dv[25]*chain50_pd[596];
	g[88] += 0.01*chain50_pd[593];
	dv[26] = 0.01*x[88];
	dv[26] *= chain50_pd[594];
	g[37] += dv[26]*chain50_pd[592];
	g[87] = 0.01*chain50_pd[589];
	dv[27] = 0.01*x[87];
	dv[27] *= chain50_pd[590];
	g[36] = dv[27]*chain50_pd[588];
	g[87] += 0.01*chain50_pd[585];
	dv[28] = 0.01*x[87];
	dv[28] *= chain50_pd[586];
	g[36] += dv[28]*chain50_pd[584];
	g[86] = 0.01*chain50_pd[581];
	dv[29] = 0.01*x[86];
	dv[29] *= chain50_pd[582];
	g[35] = dv[29]*chain50_pd[580];
	g[86] += 0.01*chain50_pd[577];
	dv[30] = 0.01*x[86];
	dv[30] *= chain50_pd[578];
	g[35] += dv[30]*chain50_pd[576];
	g[85] = 0.01*chain50_pd[573];
	dv[31] = 0.01*x[85];
	dv[31] *= chain50_pd[574];
	g[34] = dv[31]*chain50_pd[572];
	g[85] += 0.01*chain50_pd[569];
	dv[32] = 0.01*x[85];
	dv[32] *= chain50_pd[570];
	g[34] += dv[32]*chain50_pd[568];
	g[84] = 0.01*chain50_pd[565];
	dv[33] = 0.01*x[84];
	dv[33] *= chain50_pd[566];
	g[33] = dv[33]*chain50_pd[564];
	g[84] += 0.01*chain50_pd[561];
	dv[34] = 0.01*x[84];
	dv[34] *= chain50_pd[562];
	g[33] += dv[34]*chain50_pd[560];
	g[83] = 0.01*chain50_pd[557];
	dv[35] = 0.01*x[83];
	dv[35] *= chain50_pd[558];
	g[32] = dv[35]*chain50_pd[556];
	g[83] += 0.01*chain50_pd[553];
	dv[36] = 0.01*x[83];
	dv[36] *= chain50_pd[554];
	g[32] += dv[36]*chain50_pd[552];
	g[82] = 0.01*chain50_pd[549];
	dv[37] = 0.01*x[82];
	dv[37] *= chain50_pd[550];
	g[31] = dv[37]*chain50_pd[548];
	g[82] += 0.01*chain50_pd[545];
	dv[38] = 0.01*x[82];
	dv[38] *= chain50_pd[546];
	g[31] += dv[38]*chain50_pd[544];
	g[81] = 0.01*chain50_pd[541];
	dv[39] = 0.01*x[81];
	dv[39] *= chain50_pd[542];
	g[30] = dv[39]*chain50_pd[540];
	g[81] += 0.01*chain50_pd[537];
	dv[40] = 0.01*x[81];
	dv[40] *= chain50_pd[538];
	g[30] += dv[40]*chain50_pd[536];
	g[80] = 0.01*chain50_pd[533];
	dv[41] = 0.01*x[80];
	dv[41] *= chain50_pd[534];
	g[29] = dv[41]*chain50_pd[532];
	g[80] += 0.01*chain50_pd[529];
	dv[42] = 0.01*x[80];
	dv[42] *= chain50_pd[530];
	g[29] += dv[42]*chain50_pd[528];
	g[79] = 0.01*chain50_pd[525];
	dv[43] = 0.01*x[79];
	dv[43] *= chain50_pd[526];
	g[28] = dv[43]*chain50_pd[524];
	g[79] += 0.01*chain50_pd[521];
	dv[44] = 0.01*x[79];
	dv[44] *= chain50_pd[522];
	g[28] += dv[44]*chain50_pd[520];
	g[78] = 0.01*chain50_pd[517];
	dv[45] = 0.01*x[78];
	dv[45] *= chain50_pd[518];
	g[27] = dv[45]*chain50_pd[516];
	g[78] += 0.01*chain50_pd[513];
	dv[46] = 0.01*x[78];
	dv[46] *= chain50_pd[514];
	g[27] += dv[46]*chain50_pd[512];
	g[77] = 0.01*chain50_pd[509];
	dv[47] = 0.01*x[77];
	dv[47] *= chain50_pd[510];
	g[26] = dv[47]*chain50_pd[508];
	g[77] += 0.01*chain50_pd[505];
	dv[48] = 0.01*x[77];
	dv[48] *= chain50_pd[506];
	g[26] += dv[48]*chain50_pd[504];
	g[76] = 0.01*chain50_pd[501];
	dv[49] = 0.01*x[76];
	dv[49] *= chain50_pd[502];
	g[25] = dv[49]*chain50_pd[500];
	g[76] += 0.01*chain50_pd[497];
	dv[50] = 0.01*x[76];
	dv[50] *= chain50_pd[498];
	g[25] += dv[50]*chain50_pd[496];
	g[75] = 0.01*chain50_pd[493];
	dv[51] = 0.01*x[75];
	dv[51] *= chain50_pd[494];
	g[24] = dv[51]*chain50_pd[492];
	g[75] += 0.01*chain50_pd[489];
	dv[52] = 0.01*x[75];
	dv[52] *= chain50_pd[490];
	g[24] += dv[52]*chain50_pd[488];
	g[74] = 0.01*chain50_pd[485];
	dv[53] = 0.01*x[74];
	dv[53] *= chain50_pd[486];
	g[23] = dv[53]*chain50_pd[484];
	g[74] += 0.01*chain50_pd[481];
	dv[54] = 0.01*x[74];
	dv[54] *= chain50_pd[482];
	g[23] += dv[54]*chain50_pd[480];
	g[73] = 0.01*chain50_pd[477];
	dv[55] = 0.01*x[73];
	dv[55] *= chain50_pd[478];
	g[22] = dv[55]*chain50_pd[476];
	g[73] += 0.01*chain50_pd[473];
	dv[56] = 0.01*x[73];
	dv[56] *= chain50_pd[474];
	g[22] += dv[56]*chain50_pd[472];
	g[72] = 0.01*chain50_pd[469];
	dv[57] = 0.01*x[72];
	dv[57] *= chain50_pd[470];
	g[21] = dv[57]*chain50_pd[468];
	g[72] += 0.01*chain50_pd[465];
	dv[58] = 0.01*x[72];
	dv[58] *= chain50_pd[466];
	g[21] += dv[58]*chain50_pd[464];
	g[71] = 0.01*chain50_pd[461];
	dv[59] = 0.01*x[71];
	dv[59] *= chain50_pd[462];
	g[20] = dv[59]*chain50_pd[460];
	g[71] += 0.01*chain50_pd[457];
	dv[60] = 0.01*x[71];
	dv[60] *= chain50_pd[458];
	g[20] += dv[60]*chain50_pd[456];
	g[70] = 0.01*chain50_pd[453];
	dv[61] = 0.01*x[70];
	dv[61] *= chain50_pd[454];
	g[19] = dv[61]*chain50_pd[452];
	g[70] += 0.01*chain50_pd[449];
	dv[62] = 0.01*x[70];
	dv[62] *= chain50_pd[450];
	g[19] += dv[62]*chain50_pd[448];
	g[69] = 0.01*chain50_pd[445];
	dv[63] = 0.01*x[69];
	dv[63] *= chain50_pd[446];
	g[18] = dv[63]*chain50_pd[444];
	g[69] += 0.01*chain50_pd[441];
	dv[64] = 0.01*x[69];
	dv[64] *= chain50_pd[442];
	g[18] += dv[64]*chain50_pd[440];
	g[68] = 0.01*chain50_pd[437];
	dv[65] = 0.01*x[68];
	dv[65] *= chain50_pd[438];
	g[17] = dv[65]*chain50_pd[436];
	g[68] += 0.01*chain50_pd[433];
	dv[66] = 0.01*x[68];
	dv[66] *= chain50_pd[434];
	g[17] += dv[66]*chain50_pd[432];
	g[67] = 0.01*chain50_pd[429];
	dv[67] = 0.01*x[67];
	dv[67] *= chain50_pd[430];
	g[16] = dv[67]*chain50_pd[428];
	g[67] += 0.01*chain50_pd[425];
	dv[68] = 0.01*x[67];
	dv[68] *= chain50_pd[426];
	g[16] += dv[68]*chain50_pd[424];
	g[66] = 0.01*chain50_pd[421];
	dv[69] = 0.01*x[66];
	dv[69] *= chain50_pd[422];
	g[15] = dv[69]*chain50_pd[420];
	g[66] += 0.01*chain50_pd[417];
	dv[70] = 0.01*x[66];
	dv[70] *= chain50_pd[418];
	g[15] += dv[70]*chain50_pd[416];
	g[65] = 0.01*chain50_pd[413];
	dv[71] = 0.01*x[65];
	dv[71] *= chain50_pd[414];
	g[14] = dv[71]*chain50_pd[412];
	g[65] += 0.01*chain50_pd[409];
	dv[72] = 0.01*x[65];
	dv[72] *= chain50_pd[410];
	g[14] += dv[72]*chain50_pd[408];
	g[64] = 0.01*chain50_pd[405];
	dv[73] = 0.01*x[64];
	dv[73] *= chain50_pd[406];
	g[13] = dv[73]*chain50_pd[404];
	g[64] += 0.01*chain50_pd[401];
	dv[74] = 0.01*x[64];
	dv[74] *= chain50_pd[402];
	g[13] += dv[74]*chain50_pd[400];
	g[63] = 0.01*chain50_pd[397];
	dv[75] = 0.01*x[63];
	dv[75] *= chain50_pd[398];
	g[12] = dv[75]*chain50_pd[396];
	g[63] += 0.01*chain50_pd[393];
	dv[76] = 0.01*x[63];
	dv[76] *= chain50_pd[394];
	g[12] += dv[76]*chain50_pd[392];
	g[62] = 0.01*chain50_pd[389];
	dv[77] = 0.01*x[62];
	dv[77] *= chain50_pd[390];
	g[11] = dv[77]*chain50_pd[388];
	g[62] += 0.01*chain50_pd[385];
	dv[78] = 0.01*x[62];
	dv[78] *= chain50_pd[386];
	g[11] += dv[78]*chain50_pd[384];
	g[61] = 0.01*chain50_pd[381];
	dv[79] = 0.01*x[61];
	dv[79] *= chain50_pd[382];
	g[10] = dv[79]*chain50_pd[380];
	g[61] += 0.01*chain50_pd[377];
	dv[80] = 0.01*x[61];
	dv[80] *= chain50_pd[378];
	g[10] += dv[80]*chain50_pd[376];
	g[60] = 0.01*chain50_pd[373];
	dv[81] = 0.01*x[60];
	dv[81] *= chain50_pd[374];
	g[9] = dv[81]*chain50_pd[372];
	g[60] += 0.01*chain50_pd[369];
	dv[82] = 0.01*x[60];
	dv[82] *= chain50_pd[370];
	g[9] += dv[82]*chain50_pd[368];
	g[59] = 0.01*chain50_pd[365];
	dv[83] = 0.01*x[59];
	dv[83] *= chain50_pd[366];
	g[8] = dv[83]*chain50_pd[364];
	g[59] += 0.01*chain50_pd[361];
	dv[84] = 0.01*x[59];
	dv[84] *= chain50_pd[362];
	g[8] += dv[84]*chain50_pd[360];
	g[58] = 0.01*chain50_pd[357];
	dv[85] = 0.01*x[58];
	dv[85] *= chain50_pd[358];
	g[7] = dv[85]*chain50_pd[356];
	g[58] += 0.01*chain50_pd[353];
	dv[86] = 0.01*x[58];
	dv[86] *= chain50_pd[354];
	g[7] += dv[86]*chain50_pd[352];
	g[57] = 0.01*chain50_pd[349];
	dv[87] = 0.01*x[57];
	dv[87] *= chain50_pd[350];
	g[6] = dv[87]*chain50_pd[348];
	g[57] += 0.01*chain50_pd[345];
	dv[88] = 0.01*x[57];
	dv[88] *= chain50_pd[346];
	g[6] += dv[88]*chain50_pd[344];
	g[56] = 0.01*chain50_pd[341];
	dv[89] = 0.01*x[56];
	dv[89] *= chain50_pd[342];
	g[5] = dv[89]*chain50_pd[340];
	g[56] += 0.01*chain50_pd[337];
	dv[90] = 0.01*x[56];
	dv[90] *= chain50_pd[338];
	g[5] += dv[90]*chain50_pd[336];
	g[55] = 0.01*chain50_pd[333];
	dv[91] = 0.01*x[55];
	dv[91] *= chain50_pd[334];
	g[4] = dv[91]*chain50_pd[332];
	g[55] += 0.01*chain50_pd[329];
	dv[92] = 0.01*x[55];
	dv[92] *= chain50_pd[330];
	g[4] += dv[92]*chain50_pd[328];
	g[54] = 0.01*chain50_pd[325];
	dv[93] = 0.01*x[54];
	dv[93] *= chain50_pd[326];
	g[3] = dv[93]*chain50_pd[324];
	g[54] += 0.01*chain50_pd[321];
	dv[94] = 0.01*x[54];
	dv[94] *= chain50_pd[322];
	g[3] += dv[94]*chain50_pd[320];
	g[53] = 0.01*chain50_pd[317];
	dv[95] = 0.01*x[53];
	dv[95] *= chain50_pd[318];
	g[2] = dv[95]*chain50_pd[316];
	g[53] += 0.01*chain50_pd[313];
	dv[96] = 0.01*x[53];
	dv[96] *= chain50_pd[314];
	g[2] += dv[96]*chain50_pd[312];
	g[52] = 0.01*chain50_pd[309];
	dv[97] = 0.01*x[52];
	dv[97] *= chain50_pd[310];
	g[1] = dv[97]*chain50_pd[308];
	g[52] += 0.01*chain50_pd[305];
	dv[98] = 0.01*x[52];
	dv[98] *= chain50_pd[306];
	g[1] += dv[98]*chain50_pd[304];
	g[51] = 0.01*chain50_pd[301];
	dv[99] = 0.01*x[51];
	dv[99] *= chain50_pd[302];
	g[0] = dv[99]*chain50_pd[300];
	}

	return v[1];
}

 void
chain50_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[100];
	real t1;
	fint wantfg = *needfg;
	if (chain50_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	chain50_pd[0] = x[0] + x[0];
	v[1] = v[0] + 1.;
	chain50_pd[1] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (chain50_pd[1] <= 0.) {
	domain_("sqrt'", &chain50_pd[1], 5L);
	}
	chain50_pd[2] = 0.5 / chain50_pd[1];
	v[1] = 0.01 * chain50_pd[1];
	v[0] = x[1] * x[1];
	chain50_pd[3] = x[1] + x[1];
	v[2] = v[0] + 1.;
	chain50_pd[4] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[4] <= 0.) {
	domain_("sqrt'", &chain50_pd[4], 5L);
	}
	chain50_pd[5] = 0.5 / chain50_pd[4];
	v[2] = 0.01 * chain50_pd[4];
	v[1] += v[2];
	v[2] = x[1] * x[1];
	chain50_pd[6] = x[1] + x[1];
	v[0] = v[2] + 1.;
	chain50_pd[7] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[7] <= 0.) {
	domain_("sqrt'", &chain50_pd[7], 5L);
	}
	chain50_pd[8] = 0.5 / chain50_pd[7];
	v[0] = 0.01 * chain50_pd[7];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	chain50_pd[9] = x[2] + x[2];
	v[2] = v[0] + 1.;
	chain50_pd[10] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[10] <= 0.) {
	domain_("sqrt'", &chain50_pd[10], 5L);
	}
	chain50_pd[11] = 0.5 / chain50_pd[10];
	v[2] = 0.01 * chain50_pd[10];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	chain50_pd[12] = x[2] + x[2];
	v[0] = v[2] + 1.;
	chain50_pd[13] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[13] <= 0.) {
	domain_("sqrt'", &chain50_pd[13], 5L);
	}
	chain50_pd[14] = 0.5 / chain50_pd[13];
	v[0] = 0.01 * chain50_pd[13];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	chain50_pd[15] = x[3] + x[3];
	v[2] = v[0] + 1.;
	chain50_pd[16] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[16] <= 0.) {
	domain_("sqrt'", &chain50_pd[16], 5L);
	}
	chain50_pd[17] = 0.5 / chain50_pd[16];
	v[2] = 0.01 * chain50_pd[16];
	v[1] += v[2];
	v[2] = x[3] * x[3];
	chain50_pd[18] = x[3] + x[3];
	v[0] = v[2] + 1.;
	chain50_pd[19] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[19] <= 0.) {
	domain_("sqrt'", &chain50_pd[19], 5L);
	}
	chain50_pd[20] = 0.5 / chain50_pd[19];
	v[0] = 0.01 * chain50_pd[19];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	chain50_pd[21] = x[4] + x[4];
	v[2] = v[0] + 1.;
	chain50_pd[22] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[22] <= 0.) {
	domain_("sqrt'", &chain50_pd[22], 5L);
	}
	chain50_pd[23] = 0.5 / chain50_pd[22];
	v[2] = 0.01 * chain50_pd[22];
	v[1] += v[2];
	v[2] = x[4] * x[4];
	chain50_pd[24] = x[4] + x[4];
	v[0] = v[2] + 1.;
	chain50_pd[25] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[25] <= 0.) {
	domain_("sqrt'", &chain50_pd[25], 5L);
	}
	chain50_pd[26] = 0.5 / chain50_pd[25];
	v[0] = 0.01 * chain50_pd[25];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	chain50_pd[27] = x[5] + x[5];
	v[2] = v[0] + 1.;
	chain50_pd[28] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[28] <= 0.) {
	domain_("sqrt'", &chain50_pd[28], 5L);
	}
	chain50_pd[29] = 0.5 / chain50_pd[28];
	v[2] = 0.01 * chain50_pd[28];
	v[1] += v[2];
	v[2] = x[5] * x[5];
	chain50_pd[30] = x[5] + x[5];
	v[0] = v[2] + 1.;
	chain50_pd[31] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[31] <= 0.) {
	domain_("sqrt'", &chain50_pd[31], 5L);
	}
	chain50_pd[32] = 0.5 / chain50_pd[31];
	v[0] = 0.01 * chain50_pd[31];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	chain50_pd[33] = x[6] + x[6];
	v[2] = v[0] + 1.;
	chain50_pd[34] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[34] <= 0.) {
	domain_("sqrt'", &chain50_pd[34], 5L);
	}
	chain50_pd[35] = 0.5 / chain50_pd[34];
	v[2] = 0.01 * chain50_pd[34];
	v[1] += v[2];
	v[2] = x[6] * x[6];
	chain50_pd[36] = x[6] + x[6];
	v[0] = v[2] + 1.;
	chain50_pd[37] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[37] <= 0.) {
	domain_("sqrt'", &chain50_pd[37], 5L);
	}
	chain50_pd[38] = 0.5 / chain50_pd[37];
	v[0] = 0.01 * chain50_pd[37];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	chain50_pd[39] = x[7] + x[7];
	v[2] = v[0] + 1.;
	chain50_pd[40] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[40] <= 0.) {
	domain_("sqrt'", &chain50_pd[40], 5L);
	}
	chain50_pd[41] = 0.5 / chain50_pd[40];
	v[2] = 0.01 * chain50_pd[40];
	v[1] += v[2];
	v[2] = x[7] * x[7];
	chain50_pd[42] = x[7] + x[7];
	v[0] = v[2] + 1.;
	chain50_pd[43] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[43] <= 0.) {
	domain_("sqrt'", &chain50_pd[43], 5L);
	}
	chain50_pd[44] = 0.5 / chain50_pd[43];
	v[0] = 0.01 * chain50_pd[43];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	chain50_pd[45] = x[8] + x[8];
	v[2] = v[0] + 1.;
	chain50_pd[46] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[46] <= 0.) {
	domain_("sqrt'", &chain50_pd[46], 5L);
	}
	chain50_pd[47] = 0.5 / chain50_pd[46];
	v[2] = 0.01 * chain50_pd[46];
	v[1] += v[2];
	v[2] = x[8] * x[8];
	chain50_pd[48] = x[8] + x[8];
	v[0] = v[2] + 1.;
	chain50_pd[49] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[49] <= 0.) {
	domain_("sqrt'", &chain50_pd[49], 5L);
	}
	chain50_pd[50] = 0.5 / chain50_pd[49];
	v[0] = 0.01 * chain50_pd[49];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	chain50_pd[51] = x[9] + x[9];
	v[2] = v[0] + 1.;
	chain50_pd[52] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[52] <= 0.) {
	domain_("sqrt'", &chain50_pd[52], 5L);
	}
	chain50_pd[53] = 0.5 / chain50_pd[52];
	v[2] = 0.01 * chain50_pd[52];
	v[1] += v[2];
	v[2] = x[9] * x[9];
	chain50_pd[54] = x[9] + x[9];
	v[0] = v[2] + 1.;
	chain50_pd[55] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[55] <= 0.) {
	domain_("sqrt'", &chain50_pd[55], 5L);
	}
	chain50_pd[56] = 0.5 / chain50_pd[55];
	v[0] = 0.01 * chain50_pd[55];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	chain50_pd[57] = x[10] + x[10];
	v[2] = v[0] + 1.;
	chain50_pd[58] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[58] <= 0.) {
	domain_("sqrt'", &chain50_pd[58], 5L);
	}
	chain50_pd[59] = 0.5 / chain50_pd[58];
	v[2] = 0.01 * chain50_pd[58];
	v[1] += v[2];
	v[2] = x[10] * x[10];
	chain50_pd[60] = x[10] + x[10];
	v[0] = v[2] + 1.;
	chain50_pd[61] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[61] <= 0.) {
	domain_("sqrt'", &chain50_pd[61], 5L);
	}
	chain50_pd[62] = 0.5 / chain50_pd[61];
	v[0] = 0.01 * chain50_pd[61];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	chain50_pd[63] = x[11] + x[11];
	v[2] = v[0] + 1.;
	chain50_pd[64] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[64] <= 0.) {
	domain_("sqrt'", &chain50_pd[64], 5L);
	}
	chain50_pd[65] = 0.5 / chain50_pd[64];
	v[2] = 0.01 * chain50_pd[64];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	chain50_pd[66] = x[11] + x[11];
	v[0] = v[2] + 1.;
	chain50_pd[67] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[67] <= 0.) {
	domain_("sqrt'", &chain50_pd[67], 5L);
	}
	chain50_pd[68] = 0.5 / chain50_pd[67];
	v[0] = 0.01 * chain50_pd[67];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	chain50_pd[69] = x[12] + x[12];
	v[2] = v[0] + 1.;
	chain50_pd[70] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[70] <= 0.) {
	domain_("sqrt'", &chain50_pd[70], 5L);
	}
	chain50_pd[71] = 0.5 / chain50_pd[70];
	v[2] = 0.01 * chain50_pd[70];
	v[1] += v[2];
	v[2] = x[12] * x[12];
	chain50_pd[72] = x[12] + x[12];
	v[0] = v[2] + 1.;
	chain50_pd[73] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[73] <= 0.) {
	domain_("sqrt'", &chain50_pd[73], 5L);
	}
	chain50_pd[74] = 0.5 / chain50_pd[73];
	v[0] = 0.01 * chain50_pd[73];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	chain50_pd[75] = x[13] + x[13];
	v[2] = v[0] + 1.;
	chain50_pd[76] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[76] <= 0.) {
	domain_("sqrt'", &chain50_pd[76], 5L);
	}
	chain50_pd[77] = 0.5 / chain50_pd[76];
	v[2] = 0.01 * chain50_pd[76];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	chain50_pd[78] = x[13] + x[13];
	v[0] = v[2] + 1.;
	chain50_pd[79] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[79] <= 0.) {
	domain_("sqrt'", &chain50_pd[79], 5L);
	}
	chain50_pd[80] = 0.5 / chain50_pd[79];
	v[0] = 0.01 * chain50_pd[79];
	v[1] += v[0];
	v[0] = x[14] * x[14];
	chain50_pd[81] = x[14] + x[14];
	v[2] = v[0] + 1.;
	chain50_pd[82] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[82] <= 0.) {
	domain_("sqrt'", &chain50_pd[82], 5L);
	}
	chain50_pd[83] = 0.5 / chain50_pd[82];
	v[2] = 0.01 * chain50_pd[82];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	chain50_pd[84] = x[14] + x[14];
	v[0] = v[2] + 1.;
	chain50_pd[85] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[85] <= 0.) {
	domain_("sqrt'", &chain50_pd[85], 5L);
	}
	chain50_pd[86] = 0.5 / chain50_pd[85];
	v[0] = 0.01 * chain50_pd[85];
	v[1] += v[0];
	v[0] = x[15] * x[15];
	chain50_pd[87] = x[15] + x[15];
	v[2] = v[0] + 1.;
	chain50_pd[88] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[88] <= 0.) {
	domain_("sqrt'", &chain50_pd[88], 5L);
	}
	chain50_pd[89] = 0.5 / chain50_pd[88];
	v[2] = 0.01 * chain50_pd[88];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	chain50_pd[90] = x[15] + x[15];
	v[0] = v[2] + 1.;
	chain50_pd[91] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[91] <= 0.) {
	domain_("sqrt'", &chain50_pd[91], 5L);
	}
	chain50_pd[92] = 0.5 / chain50_pd[91];
	v[0] = 0.01 * chain50_pd[91];
	v[1] += v[0];
	v[0] = x[16] * x[16];
	chain50_pd[93] = x[16] + x[16];
	v[2] = v[0] + 1.;
	chain50_pd[94] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[94] <= 0.) {
	domain_("sqrt'", &chain50_pd[94], 5L);
	}
	chain50_pd[95] = 0.5 / chain50_pd[94];
	v[2] = 0.01 * chain50_pd[94];
	v[1] += v[2];
	v[2] = x[16] * x[16];
	chain50_pd[96] = x[16] + x[16];
	v[0] = v[2] + 1.;
	chain50_pd[97] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[97] <= 0.) {
	domain_("sqrt'", &chain50_pd[97], 5L);
	}
	chain50_pd[98] = 0.5 / chain50_pd[97];
	v[0] = 0.01 * chain50_pd[97];
	v[1] += v[0];
	v[0] = x[17] * x[17];
	chain50_pd[99] = x[17] + x[17];
	v[2] = v[0] + 1.;
	chain50_pd[100] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[100] <= 0.) {
	domain_("sqrt'", &chain50_pd[100], 5L);
	}
	chain50_pd[101] = 0.5 / chain50_pd[100];
	v[2] = 0.01 * chain50_pd[100];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	chain50_pd[102] = x[17] + x[17];
	v[0] = v[2] + 1.;
	chain50_pd[103] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[103] <= 0.) {
	domain_("sqrt'", &chain50_pd[103], 5L);
	}
	chain50_pd[104] = 0.5 / chain50_pd[103];
	v[0] = 0.01 * chain50_pd[103];
	v[1] += v[0];
	v[0] = x[18] * x[18];
	chain50_pd[105] = x[18] + x[18];
	v[2] = v[0] + 1.;
	chain50_pd[106] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[106] <= 0.) {
	domain_("sqrt'", &chain50_pd[106], 5L);
	}
	chain50_pd[107] = 0.5 / chain50_pd[106];
	v[2] = 0.01 * chain50_pd[106];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	chain50_pd[108] = x[18] + x[18];
	v[0] = v[2] + 1.;
	chain50_pd[109] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[109] <= 0.) {
	domain_("sqrt'", &chain50_pd[109], 5L);
	}
	chain50_pd[110] = 0.5 / chain50_pd[109];
	v[0] = 0.01 * chain50_pd[109];
	v[1] += v[0];
	v[0] = x[19] * x[19];
	chain50_pd[111] = x[19] + x[19];
	v[2] = v[0] + 1.;
	chain50_pd[112] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[112] <= 0.) {
	domain_("sqrt'", &chain50_pd[112], 5L);
	}
	chain50_pd[113] = 0.5 / chain50_pd[112];
	v[2] = 0.01 * chain50_pd[112];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	chain50_pd[114] = x[19] + x[19];
	v[0] = v[2] + 1.;
	chain50_pd[115] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[115] <= 0.) {
	domain_("sqrt'", &chain50_pd[115], 5L);
	}
	chain50_pd[116] = 0.5 / chain50_pd[115];
	v[0] = 0.01 * chain50_pd[115];
	v[1] += v[0];
	v[0] = x[20] * x[20];
	chain50_pd[117] = x[20] + x[20];
	v[2] = v[0] + 1.;
	chain50_pd[118] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[118] <= 0.) {
	domain_("sqrt'", &chain50_pd[118], 5L);
	}
	chain50_pd[119] = 0.5 / chain50_pd[118];
	v[2] = 0.01 * chain50_pd[118];
	v[1] += v[2];
	v[2] = x[20] * x[20];
	chain50_pd[120] = x[20] + x[20];
	v[0] = v[2] + 1.;
	chain50_pd[121] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[121] <= 0.) {
	domain_("sqrt'", &chain50_pd[121], 5L);
	}
	chain50_pd[122] = 0.5 / chain50_pd[121];
	v[0] = 0.01 * chain50_pd[121];
	v[1] += v[0];
	v[0] = x[21] * x[21];
	chain50_pd[123] = x[21] + x[21];
	v[2] = v[0] + 1.;
	chain50_pd[124] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[124] <= 0.) {
	domain_("sqrt'", &chain50_pd[124], 5L);
	}
	chain50_pd[125] = 0.5 / chain50_pd[124];
	v[2] = 0.01 * chain50_pd[124];
	v[1] += v[2];
	v[2] = x[21] * x[21];
	chain50_pd[126] = x[21] + x[21];
	v[0] = v[2] + 1.;
	chain50_pd[127] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[127] <= 0.) {
	domain_("sqrt'", &chain50_pd[127], 5L);
	}
	chain50_pd[128] = 0.5 / chain50_pd[127];
	v[0] = 0.01 * chain50_pd[127];
	v[1] += v[0];
	v[0] = x[22] * x[22];
	chain50_pd[129] = x[22] + x[22];
	v[2] = v[0] + 1.;
	chain50_pd[130] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[130] <= 0.) {
	domain_("sqrt'", &chain50_pd[130], 5L);
	}
	chain50_pd[131] = 0.5 / chain50_pd[130];
	v[2] = 0.01 * chain50_pd[130];
	v[1] += v[2];
	v[2] = x[22] * x[22];
	chain50_pd[132] = x[22] + x[22];
	v[0] = v[2] + 1.;
	chain50_pd[133] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[133] <= 0.) {
	domain_("sqrt'", &chain50_pd[133], 5L);
	}
	chain50_pd[134] = 0.5 / chain50_pd[133];
	v[0] = 0.01 * chain50_pd[133];
	v[1] += v[0];
	v[0] = x[23] * x[23];
	chain50_pd[135] = x[23] + x[23];
	v[2] = v[0] + 1.;
	chain50_pd[136] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[136] <= 0.) {
	domain_("sqrt'", &chain50_pd[136], 5L);
	}
	chain50_pd[137] = 0.5 / chain50_pd[136];
	v[2] = 0.01 * chain50_pd[136];
	v[1] += v[2];
	v[2] = x[23] * x[23];
	chain50_pd[138] = x[23] + x[23];
	v[0] = v[2] + 1.;
	chain50_pd[139] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[139] <= 0.) {
	domain_("sqrt'", &chain50_pd[139], 5L);
	}
	chain50_pd[140] = 0.5 / chain50_pd[139];
	v[0] = 0.01 * chain50_pd[139];
	v[1] += v[0];
	v[0] = x[24] * x[24];
	chain50_pd[141] = x[24] + x[24];
	v[2] = v[0] + 1.;
	chain50_pd[142] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[142] <= 0.) {
	domain_("sqrt'", &chain50_pd[142], 5L);
	}
	chain50_pd[143] = 0.5 / chain50_pd[142];
	v[2] = 0.01 * chain50_pd[142];
	v[1] += v[2];
	v[2] = x[24] * x[24];
	chain50_pd[144] = x[24] + x[24];
	v[0] = v[2] + 1.;
	chain50_pd[145] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[145] <= 0.) {
	domain_("sqrt'", &chain50_pd[145], 5L);
	}
	chain50_pd[146] = 0.5 / chain50_pd[145];
	v[0] = 0.01 * chain50_pd[145];
	v[1] += v[0];
	v[0] = x[25] * x[25];
	chain50_pd[147] = x[25] + x[25];
	v[2] = v[0] + 1.;
	chain50_pd[148] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[148] <= 0.) {
	domain_("sqrt'", &chain50_pd[148], 5L);
	}
	chain50_pd[149] = 0.5 / chain50_pd[148];
	v[2] = 0.01 * chain50_pd[148];
	v[1] += v[2];
	v[2] = x[25] * x[25];
	chain50_pd[150] = x[25] + x[25];
	v[0] = v[2] + 1.;
	chain50_pd[151] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[151] <= 0.) {
	domain_("sqrt'", &chain50_pd[151], 5L);
	}
	chain50_pd[152] = 0.5 / chain50_pd[151];
	v[0] = 0.01 * chain50_pd[151];
	v[1] += v[0];
	v[0] = x[26] * x[26];
	chain50_pd[153] = x[26] + x[26];
	v[2] = v[0] + 1.;
	chain50_pd[154] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[154] <= 0.) {
	domain_("sqrt'", &chain50_pd[154], 5L);
	}
	chain50_pd[155] = 0.5 / chain50_pd[154];
	v[2] = 0.01 * chain50_pd[154];
	v[1] += v[2];
	v[2] = x[26] * x[26];
	chain50_pd[156] = x[26] + x[26];
	v[0] = v[2] + 1.;
	chain50_pd[157] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[157] <= 0.) {
	domain_("sqrt'", &chain50_pd[157], 5L);
	}
	chain50_pd[158] = 0.5 / chain50_pd[157];
	v[0] = 0.01 * chain50_pd[157];
	v[1] += v[0];
	v[0] = x[27] * x[27];
	chain50_pd[159] = x[27] + x[27];
	v[2] = v[0] + 1.;
	chain50_pd[160] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[160] <= 0.) {
	domain_("sqrt'", &chain50_pd[160], 5L);
	}
	chain50_pd[161] = 0.5 / chain50_pd[160];
	v[2] = 0.01 * chain50_pd[160];
	v[1] += v[2];
	v[2] = x[27] * x[27];
	chain50_pd[162] = x[27] + x[27];
	v[0] = v[2] + 1.;
	chain50_pd[163] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[163] <= 0.) {
	domain_("sqrt'", &chain50_pd[163], 5L);
	}
	chain50_pd[164] = 0.5 / chain50_pd[163];
	v[0] = 0.01 * chain50_pd[163];
	v[1] += v[0];
	v[0] = x[28] * x[28];
	chain50_pd[165] = x[28] + x[28];
	v[2] = v[0] + 1.;
	chain50_pd[166] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[166] <= 0.) {
	domain_("sqrt'", &chain50_pd[166], 5L);
	}
	chain50_pd[167] = 0.5 / chain50_pd[166];
	v[2] = 0.01 * chain50_pd[166];
	v[1] += v[2];
	v[2] = x[28] * x[28];
	chain50_pd[168] = x[28] + x[28];
	v[0] = v[2] + 1.;
	chain50_pd[169] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[169] <= 0.) {
	domain_("sqrt'", &chain50_pd[169], 5L);
	}
	chain50_pd[170] = 0.5 / chain50_pd[169];
	v[0] = 0.01 * chain50_pd[169];
	v[1] += v[0];
	v[0] = x[29] * x[29];
	chain50_pd[171] = x[29] + x[29];
	v[2] = v[0] + 1.;
	chain50_pd[172] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[172] <= 0.) {
	domain_("sqrt'", &chain50_pd[172], 5L);
	}
	chain50_pd[173] = 0.5 / chain50_pd[172];
	v[2] = 0.01 * chain50_pd[172];
	v[1] += v[2];
	v[2] = x[29] * x[29];
	chain50_pd[174] = x[29] + x[29];
	v[0] = v[2] + 1.;
	chain50_pd[175] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[175] <= 0.) {
	domain_("sqrt'", &chain50_pd[175], 5L);
	}
	chain50_pd[176] = 0.5 / chain50_pd[175];
	v[0] = 0.01 * chain50_pd[175];
	v[1] += v[0];
	v[0] = x[30] * x[30];
	chain50_pd[177] = x[30] + x[30];
	v[2] = v[0] + 1.;
	chain50_pd[178] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[178] <= 0.) {
	domain_("sqrt'", &chain50_pd[178], 5L);
	}
	chain50_pd[179] = 0.5 / chain50_pd[178];
	v[2] = 0.01 * chain50_pd[178];
	v[1] += v[2];
	v[2] = x[30] * x[30];
	chain50_pd[180] = x[30] + x[30];
	v[0] = v[2] + 1.;
	chain50_pd[181] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[181] <= 0.) {
	domain_("sqrt'", &chain50_pd[181], 5L);
	}
	chain50_pd[182] = 0.5 / chain50_pd[181];
	v[0] = 0.01 * chain50_pd[181];
	v[1] += v[0];
	v[0] = x[31] * x[31];
	chain50_pd[183] = x[31] + x[31];
	v[2] = v[0] + 1.;
	chain50_pd[184] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[184] <= 0.) {
	domain_("sqrt'", &chain50_pd[184], 5L);
	}
	chain50_pd[185] = 0.5 / chain50_pd[184];
	v[2] = 0.01 * chain50_pd[184];
	v[1] += v[2];
	v[2] = x[31] * x[31];
	chain50_pd[186] = x[31] + x[31];
	v[0] = v[2] + 1.;
	chain50_pd[187] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[187] <= 0.) {
	domain_("sqrt'", &chain50_pd[187], 5L);
	}
	chain50_pd[188] = 0.5 / chain50_pd[187];
	v[0] = 0.01 * chain50_pd[187];
	v[1] += v[0];
	v[0] = x[32] * x[32];
	chain50_pd[189] = x[32] + x[32];
	v[2] = v[0] + 1.;
	chain50_pd[190] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[190] <= 0.) {
	domain_("sqrt'", &chain50_pd[190], 5L);
	}
	chain50_pd[191] = 0.5 / chain50_pd[190];
	v[2] = 0.01 * chain50_pd[190];
	v[1] += v[2];
	v[2] = x[32] * x[32];
	chain50_pd[192] = x[32] + x[32];
	v[0] = v[2] + 1.;
	chain50_pd[193] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[193] <= 0.) {
	domain_("sqrt'", &chain50_pd[193], 5L);
	}
	chain50_pd[194] = 0.5 / chain50_pd[193];
	v[0] = 0.01 * chain50_pd[193];
	v[1] += v[0];
	v[0] = x[33] * x[33];
	chain50_pd[195] = x[33] + x[33];
	v[2] = v[0] + 1.;
	chain50_pd[196] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[196] <= 0.) {
	domain_("sqrt'", &chain50_pd[196], 5L);
	}
	chain50_pd[197] = 0.5 / chain50_pd[196];
	v[2] = 0.01 * chain50_pd[196];
	v[1] += v[2];
	v[2] = x[33] * x[33];
	chain50_pd[198] = x[33] + x[33];
	v[0] = v[2] + 1.;
	chain50_pd[199] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[199] <= 0.) {
	domain_("sqrt'", &chain50_pd[199], 5L);
	}
	chain50_pd[200] = 0.5 / chain50_pd[199];
	v[0] = 0.01 * chain50_pd[199];
	v[1] += v[0];
	v[0] = x[34] * x[34];
	chain50_pd[201] = x[34] + x[34];
	v[2] = v[0] + 1.;
	chain50_pd[202] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[202] <= 0.) {
	domain_("sqrt'", &chain50_pd[202], 5L);
	}
	chain50_pd[203] = 0.5 / chain50_pd[202];
	v[2] = 0.01 * chain50_pd[202];
	v[1] += v[2];
	v[2] = x[34] * x[34];
	chain50_pd[204] = x[34] + x[34];
	v[0] = v[2] + 1.;
	chain50_pd[205] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[205] <= 0.) {
	domain_("sqrt'", &chain50_pd[205], 5L);
	}
	chain50_pd[206] = 0.5 / chain50_pd[205];
	v[0] = 0.01 * chain50_pd[205];
	v[1] += v[0];
	v[0] = x[35] * x[35];
	chain50_pd[207] = x[35] + x[35];
	v[2] = v[0] + 1.;
	chain50_pd[208] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[208] <= 0.) {
	domain_("sqrt'", &chain50_pd[208], 5L);
	}
	chain50_pd[209] = 0.5 / chain50_pd[208];
	v[2] = 0.01 * chain50_pd[208];
	v[1] += v[2];
	v[2] = x[35] * x[35];
	chain50_pd[210] = x[35] + x[35];
	v[0] = v[2] + 1.;
	chain50_pd[211] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[211] <= 0.) {
	domain_("sqrt'", &chain50_pd[211], 5L);
	}
	chain50_pd[212] = 0.5 / chain50_pd[211];
	v[0] = 0.01 * chain50_pd[211];
	v[1] += v[0];
	v[0] = x[36] * x[36];
	chain50_pd[213] = x[36] + x[36];
	v[2] = v[0] + 1.;
	chain50_pd[214] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[214] <= 0.) {
	domain_("sqrt'", &chain50_pd[214], 5L);
	}
	chain50_pd[215] = 0.5 / chain50_pd[214];
	v[2] = 0.01 * chain50_pd[214];
	v[1] += v[2];
	v[2] = x[36] * x[36];
	chain50_pd[216] = x[36] + x[36];
	v[0] = v[2] + 1.;
	chain50_pd[217] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[217] <= 0.) {
	domain_("sqrt'", &chain50_pd[217], 5L);
	}
	chain50_pd[218] = 0.5 / chain50_pd[217];
	v[0] = 0.01 * chain50_pd[217];
	v[1] += v[0];
	v[0] = x[37] * x[37];
	chain50_pd[219] = x[37] + x[37];
	v[2] = v[0] + 1.;
	chain50_pd[220] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[220] <= 0.) {
	domain_("sqrt'", &chain50_pd[220], 5L);
	}
	chain50_pd[221] = 0.5 / chain50_pd[220];
	v[2] = 0.01 * chain50_pd[220];
	v[1] += v[2];
	v[2] = x[37] * x[37];
	chain50_pd[222] = x[37] + x[37];
	v[0] = v[2] + 1.;
	chain50_pd[223] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[223] <= 0.) {
	domain_("sqrt'", &chain50_pd[223], 5L);
	}
	chain50_pd[224] = 0.5 / chain50_pd[223];
	v[0] = 0.01 * chain50_pd[223];
	v[1] += v[0];
	v[0] = x[38] * x[38];
	chain50_pd[225] = x[38] + x[38];
	v[2] = v[0] + 1.;
	chain50_pd[226] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[226] <= 0.) {
	domain_("sqrt'", &chain50_pd[226], 5L);
	}
	chain50_pd[227] = 0.5 / chain50_pd[226];
	v[2] = 0.01 * chain50_pd[226];
	v[1] += v[2];
	v[2] = x[38] * x[38];
	chain50_pd[228] = x[38] + x[38];
	v[0] = v[2] + 1.;
	chain50_pd[229] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[229] <= 0.) {
	domain_("sqrt'", &chain50_pd[229], 5L);
	}
	chain50_pd[230] = 0.5 / chain50_pd[229];
	v[0] = 0.01 * chain50_pd[229];
	v[1] += v[0];
	v[0] = x[39] * x[39];
	chain50_pd[231] = x[39] + x[39];
	v[2] = v[0] + 1.;
	chain50_pd[232] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[232] <= 0.) {
	domain_("sqrt'", &chain50_pd[232], 5L);
	}
	chain50_pd[233] = 0.5 / chain50_pd[232];
	v[2] = 0.01 * chain50_pd[232];
	v[1] += v[2];
	v[2] = x[39] * x[39];
	chain50_pd[234] = x[39] + x[39];
	v[0] = v[2] + 1.;
	chain50_pd[235] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[235] <= 0.) {
	domain_("sqrt'", &chain50_pd[235], 5L);
	}
	chain50_pd[236] = 0.5 / chain50_pd[235];
	v[0] = 0.01 * chain50_pd[235];
	v[1] += v[0];
	v[0] = x[40] * x[40];
	chain50_pd[237] = x[40] + x[40];
	v[2] = v[0] + 1.;
	chain50_pd[238] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[238] <= 0.) {
	domain_("sqrt'", &chain50_pd[238], 5L);
	}
	chain50_pd[239] = 0.5 / chain50_pd[238];
	v[2] = 0.01 * chain50_pd[238];
	v[1] += v[2];
	v[2] = x[40] * x[40];
	chain50_pd[240] = x[40] + x[40];
	v[0] = v[2] + 1.;
	chain50_pd[241] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[241] <= 0.) {
	domain_("sqrt'", &chain50_pd[241], 5L);
	}
	chain50_pd[242] = 0.5 / chain50_pd[241];
	v[0] = 0.01 * chain50_pd[241];
	v[1] += v[0];
	v[0] = x[41] * x[41];
	chain50_pd[243] = x[41] + x[41];
	v[2] = v[0] + 1.;
	chain50_pd[244] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[244] <= 0.) {
	domain_("sqrt'", &chain50_pd[244], 5L);
	}
	chain50_pd[245] = 0.5 / chain50_pd[244];
	v[2] = 0.01 * chain50_pd[244];
	v[1] += v[2];
	v[2] = x[41] * x[41];
	chain50_pd[246] = x[41] + x[41];
	v[0] = v[2] + 1.;
	chain50_pd[247] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[247] <= 0.) {
	domain_("sqrt'", &chain50_pd[247], 5L);
	}
	chain50_pd[248] = 0.5 / chain50_pd[247];
	v[0] = 0.01 * chain50_pd[247];
	v[1] += v[0];
	v[0] = x[42] * x[42];
	chain50_pd[249] = x[42] + x[42];
	v[2] = v[0] + 1.;
	chain50_pd[250] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[250] <= 0.) {
	domain_("sqrt'", &chain50_pd[250], 5L);
	}
	chain50_pd[251] = 0.5 / chain50_pd[250];
	v[2] = 0.01 * chain50_pd[250];
	v[1] += v[2];
	v[2] = x[42] * x[42];
	chain50_pd[252] = x[42] + x[42];
	v[0] = v[2] + 1.;
	chain50_pd[253] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[253] <= 0.) {
	domain_("sqrt'", &chain50_pd[253], 5L);
	}
	chain50_pd[254] = 0.5 / chain50_pd[253];
	v[0] = 0.01 * chain50_pd[253];
	v[1] += v[0];
	v[0] = x[43] * x[43];
	chain50_pd[255] = x[43] + x[43];
	v[2] = v[0] + 1.;
	chain50_pd[256] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[256] <= 0.) {
	domain_("sqrt'", &chain50_pd[256], 5L);
	}
	chain50_pd[257] = 0.5 / chain50_pd[256];
	v[2] = 0.01 * chain50_pd[256];
	v[1] += v[2];
	v[2] = x[43] * x[43];
	chain50_pd[258] = x[43] + x[43];
	v[0] = v[2] + 1.;
	chain50_pd[259] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[259] <= 0.) {
	domain_("sqrt'", &chain50_pd[259], 5L);
	}
	chain50_pd[260] = 0.5 / chain50_pd[259];
	v[0] = 0.01 * chain50_pd[259];
	v[1] += v[0];
	v[0] = x[44] * x[44];
	chain50_pd[261] = x[44] + x[44];
	v[2] = v[0] + 1.;
	chain50_pd[262] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[262] <= 0.) {
	domain_("sqrt'", &chain50_pd[262], 5L);
	}
	chain50_pd[263] = 0.5 / chain50_pd[262];
	v[2] = 0.01 * chain50_pd[262];
	v[1] += v[2];
	v[2] = x[44] * x[44];
	chain50_pd[264] = x[44] + x[44];
	v[0] = v[2] + 1.;
	chain50_pd[265] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[265] <= 0.) {
	domain_("sqrt'", &chain50_pd[265], 5L);
	}
	chain50_pd[266] = 0.5 / chain50_pd[265];
	v[0] = 0.01 * chain50_pd[265];
	v[1] += v[0];
	v[0] = x[45] * x[45];
	chain50_pd[267] = x[45] + x[45];
	v[2] = v[0] + 1.;
	chain50_pd[268] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[268] <= 0.) {
	domain_("sqrt'", &chain50_pd[268], 5L);
	}
	chain50_pd[269] = 0.5 / chain50_pd[268];
	v[2] = 0.01 * chain50_pd[268];
	v[1] += v[2];
	v[2] = x[45] * x[45];
	chain50_pd[270] = x[45] + x[45];
	v[0] = v[2] + 1.;
	chain50_pd[271] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[271] <= 0.) {
	domain_("sqrt'", &chain50_pd[271], 5L);
	}
	chain50_pd[272] = 0.5 / chain50_pd[271];
	v[0] = 0.01 * chain50_pd[271];
	v[1] += v[0];
	v[0] = x[46] * x[46];
	chain50_pd[273] = x[46] + x[46];
	v[2] = v[0] + 1.;
	chain50_pd[274] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[274] <= 0.) {
	domain_("sqrt'", &chain50_pd[274], 5L);
	}
	chain50_pd[275] = 0.5 / chain50_pd[274];
	v[2] = 0.01 * chain50_pd[274];
	v[1] += v[2];
	v[2] = x[46] * x[46];
	chain50_pd[276] = x[46] + x[46];
	v[0] = v[2] + 1.;
	chain50_pd[277] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[277] <= 0.) {
	domain_("sqrt'", &chain50_pd[277], 5L);
	}
	chain50_pd[278] = 0.5 / chain50_pd[277];
	v[0] = 0.01 * chain50_pd[277];
	v[1] += v[0];
	v[0] = x[47] * x[47];
	chain50_pd[279] = x[47] + x[47];
	v[2] = v[0] + 1.;
	chain50_pd[280] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[280] <= 0.) {
	domain_("sqrt'", &chain50_pd[280], 5L);
	}
	chain50_pd[281] = 0.5 / chain50_pd[280];
	v[2] = 0.01 * chain50_pd[280];
	v[1] += v[2];
	v[2] = x[47] * x[47];
	chain50_pd[282] = x[47] + x[47];
	v[0] = v[2] + 1.;
	chain50_pd[283] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[283] <= 0.) {
	domain_("sqrt'", &chain50_pd[283], 5L);
	}
	chain50_pd[284] = 0.5 / chain50_pd[283];
	v[0] = 0.01 * chain50_pd[283];
	v[1] += v[0];
	v[0] = x[48] * x[48];
	chain50_pd[285] = x[48] + x[48];
	v[2] = v[0] + 1.;
	chain50_pd[286] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[286] <= 0.) {
	domain_("sqrt'", &chain50_pd[286], 5L);
	}
	chain50_pd[287] = 0.5 / chain50_pd[286];
	v[2] = 0.01 * chain50_pd[286];
	v[1] += v[2];
	v[2] = x[48] * x[48];
	chain50_pd[288] = x[48] + x[48];
	v[0] = v[2] + 1.;
	chain50_pd[289] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[289] <= 0.) {
	domain_("sqrt'", &chain50_pd[289], 5L);
	}
	chain50_pd[290] = 0.5 / chain50_pd[289];
	v[0] = 0.01 * chain50_pd[289];
	v[1] += v[0];
	v[0] = x[49] * x[49];
	chain50_pd[291] = x[49] + x[49];
	v[2] = v[0] + 1.;
	chain50_pd[292] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[292] <= 0.) {
	domain_("sqrt'", &chain50_pd[292], 5L);
	}
	chain50_pd[293] = 0.5 / chain50_pd[292];
	v[2] = 0.01 * chain50_pd[292];
	v[1] += v[2];
	v[2] = x[49] * x[49];
	chain50_pd[294] = x[49] + x[49];
	v[0] = v[2] + 1.;
	chain50_pd[295] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (chain50_pd[295] <= 0.) {
	domain_("sqrt'", &chain50_pd[295], 5L);
	}
	chain50_pd[296] = 0.5 / chain50_pd[295];
	v[0] = 0.01 * chain50_pd[295];
	v[1] += v[0];
	v[0] = x[50] * x[50];
	chain50_pd[297] = x[50] + x[50];
	v[2] = v[0] + 1.;
	chain50_pd[298] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (chain50_pd[298] <= 0.) {
	domain_("sqrt'", &chain50_pd[298], 5L);
	}
	chain50_pd[299] = 0.5 / chain50_pd[298];
	v[2] = 0.01 * chain50_pd[298];
	v[1] += v[2];
	c[0] = v[1];

  /***  constraint 2  ***/

	t1 = -0.01*x[0];
	t1 += -0.01*x[1];
	t1 += -x[51];
	t1 += x[52];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.01*x[1];
	t1 += -0.01*x[2];
	t1 += -x[52];
	t1 += x[53];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -0.01*x[2];
	t1 += -0.01*x[3];
	t1 += -x[53];
	t1 += x[54];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -0.01*x[3];
	t1 += -0.01*x[4];
	t1 += -x[54];
	t1 += x[55];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -0.01*x[4];
	t1 += -0.01*x[5];
	t1 += -x[55];
	t1 += x[56];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -0.01*x[5];
	t1 += -0.01*x[6];
	t1 += -x[56];
	t1 += x[57];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -0.01*x[6];
	t1 += -0.01*x[7];
	t1 += -x[57];
	t1 += x[58];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -0.01*x[7];
	t1 += -0.01*x[8];
	t1 += -x[58];
	t1 += x[59];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -0.01*x[8];
	t1 += -0.01*x[9];
	t1 += -x[59];
	t1 += x[60];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -0.01*x[9];
	t1 += -0.01*x[10];
	t1 += -x[60];
	t1 += x[61];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -0.01*x[10];
	t1 += -0.01*x[11];
	t1 += -x[61];
	t1 += x[62];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -0.01*x[11];
	t1 += -0.01*x[12];
	t1 += -x[62];
	t1 += x[63];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -0.01*x[12];
	t1 += -0.01*x[13];
	t1 += -x[63];
	t1 += x[64];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -0.01*x[13];
	t1 += -0.01*x[14];
	t1 += -x[64];
	t1 += x[65];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -0.01*x[14];
	t1 += -0.01*x[15];
	t1 += -x[65];
	t1 += x[66];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -0.01*x[15];
	t1 += -0.01*x[16];
	t1 += -x[66];
	t1 += x[67];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -0.01*x[16];
	t1 += -0.01*x[17];
	t1 += -x[67];
	t1 += x[68];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -0.01*x[17];
	t1 += -0.01*x[18];
	t1 += -x[68];
	t1 += x[69];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -0.01*x[18];
	t1 += -0.01*x[19];
	t1 += -x[69];
	t1 += x[70];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -0.01*x[19];
	t1 += -0.01*x[20];
	t1 += -x[70];
	t1 += x[71];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -0.01*x[20];
	t1 += -0.01*x[21];
	t1 += -x[71];
	t1 += x[72];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -0.01*x[21];
	t1 += -0.01*x[22];
	t1 += -x[72];
	t1 += x[73];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -0.01*x[22];
	t1 += -0.01*x[23];
	t1 += -x[73];
	t1 += x[74];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.01*x[23];
	t1 += -0.01*x[24];
	t1 += -x[74];
	t1 += x[75];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.01*x[24];
	t1 += -0.01*x[25];
	t1 += -x[75];
	t1 += x[76];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -0.01*x[25];
	t1 += -0.01*x[26];
	t1 += -x[76];
	t1 += x[77];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -0.01*x[26];
	t1 += -0.01*x[27];
	t1 += -x[77];
	t1 += x[78];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -0.01*x[27];
	t1 += -0.01*x[28];
	t1 += -x[78];
	t1 += x[79];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -0.01*x[28];
	t1 += -0.01*x[29];
	t1 += -x[79];
	t1 += x[80];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -0.01*x[29];
	t1 += -0.01*x[30];
	t1 += -x[80];
	t1 += x[81];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -0.01*x[30];
	t1 += -0.01*x[31];
	t1 += -x[81];
	t1 += x[82];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -0.01*x[31];
	t1 += -0.01*x[32];
	t1 += -x[82];
	t1 += x[83];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -0.01*x[32];
	t1 += -0.01*x[33];
	t1 += -x[83];
	t1 += x[84];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -0.01*x[33];
	t1 += -0.01*x[34];
	t1 += -x[84];
	t1 += x[85];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -0.01*x[34];
	t1 += -0.01*x[35];
	t1 += -x[85];
	t1 += x[86];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -0.01*x[35];
	t1 += -0.01*x[36];
	t1 += -x[86];
	t1 += x[87];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -0.01*x[36];
	t1 += -0.01*x[37];
	t1 += -x[87];
	t1 += x[88];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -0.01*x[37];
	t1 += -0.01*x[38];
	t1 += -x[88];
	t1 += x[89];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -0.01*x[38];
	t1 += -0.01*x[39];
	t1 += -x[89];
	t1 += x[90];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -0.01*x[39];
	t1 += -0.01*x[40];
	t1 += -x[90];
	t1 += x[91];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -0.01*x[40];
	t1 += -0.01*x[41];
	t1 += -x[91];
	t1 += x[92];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -0.01*x[41];
	t1 += -0.01*x[42];
	t1 += -x[92];
	t1 += x[93];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -0.01*x[42];
	t1 += -0.01*x[43];
	t1 += -x[93];
	t1 += x[94];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -0.01*x[43];
	t1 += -0.01*x[44];
	t1 += -x[94];
	t1 += x[95];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -0.01*x[44];
	t1 += -0.01*x[45];
	t1 += -x[95];
	t1 += x[96];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -0.01*x[45];
	t1 += -0.01*x[46];
	t1 += -x[96];
	t1 += x[97];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -0.01*x[46];
	t1 += -0.01*x[47];
	t1 += -x[97];
	t1 += x[98];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -0.01*x[47];
	t1 += -0.01*x[48];
	t1 += -x[98];
	t1 += x[99];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -0.01*x[48];
	t1 += -0.01*x[49];
	t1 += -x[99];
	t1 += x[100];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -0.01*x[49];
	t1 += -0.01*x[50];
	t1 += -x[100];
	t1 += x[101];
	c[50] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = 0.01*chain50_pd[299];
	J[149] = dv[0]*chain50_pd[297];
	dv[1] = 0.01*chain50_pd[296];
	J[146] = dv[1]*chain50_pd[294];
	dv[2] = 0.01*chain50_pd[293];
	J[146] += dv[2]*chain50_pd[291];
	dv[3] = 0.01*chain50_pd[290];
	J[143] = dv[3]*chain50_pd[288];
	dv[4] = 0.01*chain50_pd[287];
	J[143] += dv[4]*chain50_pd[285];
	dv[5] = 0.01*chain50_pd[284];
	J[140] = dv[5]*chain50_pd[282];
	dv[6] = 0.01*chain50_pd[281];
	J[140] += dv[6]*chain50_pd[279];
	dv[7] = 0.01*chain50_pd[278];
	J[137] = dv[7]*chain50_pd[276];
	dv[8] = 0.01*chain50_pd[275];
	J[137] += dv[8]*chain50_pd[273];
	dv[9] = 0.01*chain50_pd[272];
	J[134] = dv[9]*chain50_pd[270];
	dv[10] = 0.01*chain50_pd[269];
	J[134] += dv[10]*chain50_pd[267];
	dv[11] = 0.01*chain50_pd[266];
	J[131] = dv[11]*chain50_pd[264];
	dv[12] = 0.01*chain50_pd[263];
	J[131] += dv[12]*chain50_pd[261];
	dv[13] = 0.01*chain50_pd[260];
	J[128] = dv[13]*chain50_pd[258];
	dv[14] = 0.01*chain50_pd[257];
	J[128] += dv[14]*chain50_pd[255];
	dv[15] = 0.01*chain50_pd[254];
	J[125] = dv[15]*chain50_pd[252];
	dv[16] = 0.01*chain50_pd[251];
	J[125] += dv[16]*chain50_pd[249];
	dv[17] = 0.01*chain50_pd[248];
	J[122] = dv[17]*chain50_pd[246];
	dv[18] = 0.01*chain50_pd[245];
	J[122] += dv[18]*chain50_pd[243];
	dv[19] = 0.01*chain50_pd[242];
	J[119] = dv[19]*chain50_pd[240];
	dv[20] = 0.01*chain50_pd[239];
	J[119] += dv[20]*chain50_pd[237];
	dv[21] = 0.01*chain50_pd[236];
	J[116] = dv[21]*chain50_pd[234];
	dv[22] = 0.01*chain50_pd[233];
	J[116] += dv[22]*chain50_pd[231];
	dv[23] = 0.01*chain50_pd[230];
	J[113] = dv[23]*chain50_pd[228];
	dv[24] = 0.01*chain50_pd[227];
	J[113] += dv[24]*chain50_pd[225];
	dv[25] = 0.01*chain50_pd[224];
	J[110] = dv[25]*chain50_pd[222];
	dv[26] = 0.01*chain50_pd[221];
	J[110] += dv[26]*chain50_pd[219];
	dv[27] = 0.01*chain50_pd[218];
	J[107] = dv[27]*chain50_pd[216];
	dv[28] = 0.01*chain50_pd[215];
	J[107] += dv[28]*chain50_pd[213];
	dv[29] = 0.01*chain50_pd[212];
	J[104] = dv[29]*chain50_pd[210];
	dv[30] = 0.01*chain50_pd[209];
	J[104] += dv[30]*chain50_pd[207];
	dv[31] = 0.01*chain50_pd[206];
	J[101] = dv[31]*chain50_pd[204];
	dv[32] = 0.01*chain50_pd[203];
	J[101] += dv[32]*chain50_pd[201];
	dv[33] = 0.01*chain50_pd[200];
	J[98] = dv[33]*chain50_pd[198];
	dv[34] = 0.01*chain50_pd[197];
	J[98] += dv[34]*chain50_pd[195];
	dv[35] = 0.01*chain50_pd[194];
	J[95] = dv[35]*chain50_pd[192];
	dv[36] = 0.01*chain50_pd[191];
	J[95] += dv[36]*chain50_pd[189];
	dv[37] = 0.01*chain50_pd[188];
	J[92] = dv[37]*chain50_pd[186];
	dv[38] = 0.01*chain50_pd[185];
	J[92] += dv[38]*chain50_pd[183];
	dv[39] = 0.01*chain50_pd[182];
	J[89] = dv[39]*chain50_pd[180];
	dv[40] = 0.01*chain50_pd[179];
	J[89] += dv[40]*chain50_pd[177];
	dv[41] = 0.01*chain50_pd[176];
	J[86] = dv[41]*chain50_pd[174];
	dv[42] = 0.01*chain50_pd[173];
	J[86] += dv[42]*chain50_pd[171];
	dv[43] = 0.01*chain50_pd[170];
	J[83] = dv[43]*chain50_pd[168];
	dv[44] = 0.01*chain50_pd[167];
	J[83] += dv[44]*chain50_pd[165];
	dv[45] = 0.01*chain50_pd[164];
	J[80] = dv[45]*chain50_pd[162];
	dv[46] = 0.01*chain50_pd[161];
	J[80] += dv[46]*chain50_pd[159];
	dv[47] = 0.01*chain50_pd[158];
	J[77] = dv[47]*chain50_pd[156];
	dv[48] = 0.01*chain50_pd[155];
	J[77] += dv[48]*chain50_pd[153];
	dv[49] = 0.01*chain50_pd[152];
	J[74] = dv[49]*chain50_pd[150];
	dv[50] = 0.01*chain50_pd[149];
	J[74] += dv[50]*chain50_pd[147];
	dv[51] = 0.01*chain50_pd[146];
	J[71] = dv[51]*chain50_pd[144];
	dv[52] = 0.01*chain50_pd[143];
	J[71] += dv[52]*chain50_pd[141];
	dv[53] = 0.01*chain50_pd[140];
	J[68] = dv[53]*chain50_pd[138];
	dv[54] = 0.01*chain50_pd[137];
	J[68] += dv[54]*chain50_pd[135];
	dv[55] = 0.01*chain50_pd[134];
	J[65] = dv[55]*chain50_pd[132];
	dv[56] = 0.01*chain50_pd[131];
	J[65] += dv[56]*chain50_pd[129];
	dv[57] = 0.01*chain50_pd[128];
	J[62] = dv[57]*chain50_pd[126];
	dv[58] = 0.01*chain50_pd[125];
	J[62] += dv[58]*chain50_pd[123];
	dv[59] = 0.01*chain50_pd[122];
	J[59] = dv[59]*chain50_pd[120];
	dv[60] = 0.01*chain50_pd[119];
	J[59] += dv[60]*chain50_pd[117];
	dv[61] = 0.01*chain50_pd[116];
	J[56] = dv[61]*chain50_pd[114];
	dv[62] = 0.01*chain50_pd[113];
	J[56] += dv[62]*chain50_pd[111];
	dv[63] = 0.01*chain50_pd[110];
	J[53] = dv[63]*chain50_pd[108];
	dv[64] = 0.01*chain50_pd[107];
	J[53] += dv[64]*chain50_pd[105];
	dv[65] = 0.01*chain50_pd[104];
	J[50] = dv[65]*chain50_pd[102];
	dv[66] = 0.01*chain50_pd[101];
	J[50] += dv[66]*chain50_pd[99];
	dv[67] = 0.01*chain50_pd[98];
	J[47] = dv[67]*chain50_pd[96];
	dv[68] = 0.01*chain50_pd[95];
	J[47] += dv[68]*chain50_pd[93];
	dv[69] = 0.01*chain50_pd[92];
	J[44] = dv[69]*chain50_pd[90];
	dv[70] = 0.01*chain50_pd[89];
	J[44] += dv[70]*chain50_pd[87];
	dv[71] = 0.01*chain50_pd[86];
	J[41] = dv[71]*chain50_pd[84];
	dv[72] = 0.01*chain50_pd[83];
	J[41] += dv[72]*chain50_pd[81];
	dv[73] = 0.01*chain50_pd[80];
	J[38] = dv[73]*chain50_pd[78];
	dv[74] = 0.01*chain50_pd[77];
	J[38] += dv[74]*chain50_pd[75];
	dv[75] = 0.01*chain50_pd[74];
	J[35] = dv[75]*chain50_pd[72];
	dv[76] = 0.01*chain50_pd[71];
	J[35] += dv[76]*chain50_pd[69];
	dv[77] = 0.01*chain50_pd[68];
	J[32] = dv[77]*chain50_pd[66];
	dv[78] = 0.01*chain50_pd[65];
	J[32] += dv[78]*chain50_pd[63];
	dv[79] = 0.01*chain50_pd[62];
	J[29] = dv[79]*chain50_pd[60];
	dv[80] = 0.01*chain50_pd[59];
	J[29] += dv[80]*chain50_pd[57];
	dv[81] = 0.01*chain50_pd[56];
	J[26] = dv[81]*chain50_pd[54];
	dv[82] = 0.01*chain50_pd[53];
	J[26] += dv[82]*chain50_pd[51];
	dv[83] = 0.01*chain50_pd[50];
	J[23] = dv[83]*chain50_pd[48];
	dv[84] = 0.01*chain50_pd[47];
	J[23] += dv[84]*chain50_pd[45];
	dv[85] = 0.01*chain50_pd[44];
	J[20] = dv[85]*chain50_pd[42];
	dv[86] = 0.01*chain50_pd[41];
	J[20] += dv[86]*chain50_pd[39];
	dv[87] = 0.01*chain50_pd[38];
	J[17] = dv[87]*chain50_pd[36];
	dv[88] = 0.01*chain50_pd[35];
	J[17] += dv[88]*chain50_pd[33];
	dv[89] = 0.01*chain50_pd[32];
	J[14] = dv[89]*chain50_pd[30];
	dv[90] = 0.01*chain50_pd[29];
	J[14] += dv[90]*chain50_pd[27];
	dv[91] = 0.01*chain50_pd[26];
	J[11] = dv[91]*chain50_pd[24];
	dv[92] = 0.01*chain50_pd[23];
	J[11] += dv[92]*chain50_pd[21];
	dv[93] = 0.01*chain50_pd[20];
	J[8] = dv[93]*chain50_pd[18];
	dv[94] = 0.01*chain50_pd[17];
	J[8] += dv[94]*chain50_pd[15];
	dv[95] = 0.01*chain50_pd[14];
	J[5] = dv[95]*chain50_pd[12];
	dv[96] = 0.01*chain50_pd[11];
	J[5] += dv[96]*chain50_pd[9];
	dv[97] = 0.01*chain50_pd[8];
	J[2] = dv[97]*chain50_pd[6];
	dv[98] = 0.01*chain50_pd[5];
	J[2] += dv[98]*chain50_pd[3];
	dv[99] = 0.01*chain50_pd[2];
	J[0] = dv[99]*chain50_pd[0];

   /*** derivatives for constraint 2 ***/

	J[1] = -0.01;
	J[3] = -0.01;
	J[151] = -1.;
	J[152] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = -0.01;
	J[6] = -0.01;
	J[153] = -1.;
	J[154] = 1.;

   /*** derivatives for constraint 4 ***/

	J[7] = -0.01;
	J[9] = -0.01;
	J[155] = -1.;
	J[156] = 1.;

   /*** derivatives for constraint 5 ***/

	J[10] = -0.01;
	J[12] = -0.01;
	J[157] = -1.;
	J[158] = 1.;

   /*** derivatives for constraint 6 ***/

	J[13] = -0.01;
	J[15] = -0.01;
	J[159] = -1.;
	J[160] = 1.;

   /*** derivatives for constraint 7 ***/

	J[16] = -0.01;
	J[18] = -0.01;
	J[161] = -1.;
	J[162] = 1.;

   /*** derivatives for constraint 8 ***/

	J[19] = -0.01;
	J[21] = -0.01;
	J[163] = -1.;
	J[164] = 1.;

   /*** derivatives for constraint 9 ***/

	J[22] = -0.01;
	J[24] = -0.01;
	J[165] = -1.;
	J[166] = 1.;

   /*** derivatives for constraint 10 ***/

	J[25] = -0.01;
	J[27] = -0.01;
	J[167] = -1.;
	J[168] = 1.;

   /*** derivatives for constraint 11 ***/

	J[28] = -0.01;
	J[30] = -0.01;
	J[169] = -1.;
	J[170] = 1.;

   /*** derivatives for constraint 12 ***/

	J[31] = -0.01;
	J[33] = -0.01;
	J[171] = -1.;
	J[172] = 1.;

   /*** derivatives for constraint 13 ***/

	J[34] = -0.01;
	J[36] = -0.01;
	J[173] = -1.;
	J[174] = 1.;

   /*** derivatives for constraint 14 ***/

	J[37] = -0.01;
	J[39] = -0.01;
	J[175] = -1.;
	J[176] = 1.;

   /*** derivatives for constraint 15 ***/

	J[40] = -0.01;
	J[42] = -0.01;
	J[177] = -1.;
	J[178] = 1.;

   /*** derivatives for constraint 16 ***/

	J[43] = -0.01;
	J[45] = -0.01;
	J[179] = -1.;
	J[180] = 1.;

   /*** derivatives for constraint 17 ***/

	J[46] = -0.01;
	J[48] = -0.01;
	J[181] = -1.;
	J[182] = 1.;

   /*** derivatives for constraint 18 ***/

	J[49] = -0.01;
	J[51] = -0.01;
	J[183] = -1.;
	J[184] = 1.;

   /*** derivatives for constraint 19 ***/

	J[52] = -0.01;
	J[54] = -0.01;
	J[185] = -1.;
	J[186] = 1.;

   /*** derivatives for constraint 20 ***/

	J[55] = -0.01;
	J[57] = -0.01;
	J[187] = -1.;
	J[188] = 1.;

   /*** derivatives for constraint 21 ***/

	J[58] = -0.01;
	J[60] = -0.01;
	J[189] = -1.;
	J[190] = 1.;

   /*** derivatives for constraint 22 ***/

	J[61] = -0.01;
	J[63] = -0.01;
	J[191] = -1.;
	J[192] = 1.;

   /*** derivatives for constraint 23 ***/

	J[64] = -0.01;
	J[66] = -0.01;
	J[193] = -1.;
	J[194] = 1.;

   /*** derivatives for constraint 24 ***/

	J[67] = -0.01;
	J[69] = -0.01;
	J[195] = -1.;
	J[196] = 1.;

   /*** derivatives for constraint 25 ***/

	J[70] = -0.01;
	J[72] = -0.01;
	J[197] = -1.;
	J[198] = 1.;

   /*** derivatives for constraint 26 ***/

	J[73] = -0.01;
	J[75] = -0.01;
	J[199] = -1.;
	J[200] = 1.;

   /*** derivatives for constraint 27 ***/

	J[76] = -0.01;
	J[78] = -0.01;
	J[201] = -1.;
	J[202] = 1.;

   /*** derivatives for constraint 28 ***/

	J[79] = -0.01;
	J[81] = -0.01;
	J[203] = -1.;
	J[204] = 1.;

   /*** derivatives for constraint 29 ***/

	J[82] = -0.01;
	J[84] = -0.01;
	J[205] = -1.;
	J[206] = 1.;

   /*** derivatives for constraint 30 ***/

	J[85] = -0.01;
	J[87] = -0.01;
	J[207] = -1.;
	J[208] = 1.;

   /*** derivatives for constraint 31 ***/

	J[88] = -0.01;
	J[90] = -0.01;
	J[209] = -1.;
	J[210] = 1.;

   /*** derivatives for constraint 32 ***/

	J[91] = -0.01;
	J[93] = -0.01;
	J[211] = -1.;
	J[212] = 1.;

   /*** derivatives for constraint 33 ***/

	J[94] = -0.01;
	J[96] = -0.01;
	J[213] = -1.;
	J[214] = 1.;

   /*** derivatives for constraint 34 ***/

	J[97] = -0.01;
	J[99] = -0.01;
	J[215] = -1.;
	J[216] = 1.;

   /*** derivatives for constraint 35 ***/

	J[100] = -0.01;
	J[102] = -0.01;
	J[217] = -1.;
	J[218] = 1.;

   /*** derivatives for constraint 36 ***/

	J[103] = -0.01;
	J[105] = -0.01;
	J[219] = -1.;
	J[220] = 1.;

   /*** derivatives for constraint 37 ***/

	J[106] = -0.01;
	J[108] = -0.01;
	J[221] = -1.;
	J[222] = 1.;

   /*** derivatives for constraint 38 ***/

	J[109] = -0.01;
	J[111] = -0.01;
	J[223] = -1.;
	J[224] = 1.;

   /*** derivatives for constraint 39 ***/

	J[112] = -0.01;
	J[114] = -0.01;
	J[225] = -1.;
	J[226] = 1.;

   /*** derivatives for constraint 40 ***/

	J[115] = -0.01;
	J[117] = -0.01;
	J[227] = -1.;
	J[228] = 1.;

   /*** derivatives for constraint 41 ***/

	J[118] = -0.01;
	J[120] = -0.01;
	J[229] = -1.;
	J[230] = 1.;

   /*** derivatives for constraint 42 ***/

	J[121] = -0.01;
	J[123] = -0.01;
	J[231] = -1.;
	J[232] = 1.;

   /*** derivatives for constraint 43 ***/

	J[124] = -0.01;
	J[126] = -0.01;
	J[233] = -1.;
	J[234] = 1.;

   /*** derivatives for constraint 44 ***/

	J[127] = -0.01;
	J[129] = -0.01;
	J[235] = -1.;
	J[236] = 1.;

   /*** derivatives for constraint 45 ***/

	J[130] = -0.01;
	J[132] = -0.01;
	J[237] = -1.;
	J[238] = 1.;

   /*** derivatives for constraint 46 ***/

	J[133] = -0.01;
	J[135] = -0.01;
	J[239] = -1.;
	J[240] = 1.;

   /*** derivatives for constraint 47 ***/

	J[136] = -0.01;
	J[138] = -0.01;
	J[241] = -1.;
	J[242] = 1.;

   /*** derivatives for constraint 48 ***/

	J[139] = -0.01;
	J[141] = -0.01;
	J[243] = -1.;
	J[244] = 1.;

   /*** derivatives for constraint 49 ***/

	J[142] = -0.01;
	J[144] = -0.01;
	J[245] = -1.;
	J[246] = 1.;

   /*** derivatives for constraint 50 ***/

	J[145] = -0.01;
	J[147] = -0.01;
	J[247] = -1.;
	J[248] = 1.;

   /*** derivatives for constraint 51 ***/

	J[148] = -0.01;
	J[150] = -0.01;
	J[249] = -1.;
	J[250] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
