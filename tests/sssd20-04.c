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
 fint sssd20_04_auxcom_[1] = { 12 /* nlc */ };
 fint sssd20_04_funcom_[347] = {
	108 /* nvar */,
	1 /* nobj */,
	52 /* ncon */,
	232 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

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
	40,
	43,
	46,
	49,
	51,
	53,
	55,
	57,
	59,
	61,
	63,
	65,
	67,
	69,
	71,
	73,
	75,
	77,
	79,
	81,
	83,
	85,
	87,
	89,
	91,
	93,
	95,
	97,
	99,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	119,
	121,
	123,
	125,
	127,
	129,
	131,
	133,
	135,
	137,
	139,
	141,
	143,
	145,
	147,
	149,
	151,
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

	/* rownos */
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
	1,
	13,
	41,
	2,
	13,
	42,
	3,
	13,
	43,
	4,
	14,
	44,
	5,
	14,
	45,
	6,
	14,
	46,
	7,
	15,
	47,
	8,
	15,
	48,
	9,
	15,
	49,
	10,
	16,
	50,
	11,
	16,
	51,
	12,
	16,
	52,
	13,
	17,
	14,
	17,
	15,
	17,
	16,
	17,
	13,
	18,
	14,
	18,
	15,
	18,
	16,
	18,
	13,
	19,
	14,
	19,
	15,
	19,
	16,
	19,
	13,
	20,
	14,
	20,
	15,
	20,
	16,
	20,
	13,
	21,
	14,
	21,
	15,
	21,
	16,
	21,
	13,
	22,
	14,
	22,
	15,
	22,
	16,
	22,
	13,
	23,
	14,
	23,
	15,
	23,
	16,
	23,
	13,
	24,
	14,
	24,
	15,
	24,
	16,
	24,
	13,
	25,
	14,
	25,
	15,
	25,
	16,
	25,
	13,
	26,
	14,
	26,
	15,
	26,
	16,
	26,
	13,
	27,
	14,
	27,
	15,
	27,
	16,
	27,
	13,
	28,
	14,
	28,
	15,
	28,
	16,
	28,
	13,
	29,
	14,
	29,
	15,
	29,
	16,
	29,
	13,
	30,
	14,
	30,
	15,
	30,
	16,
	30,
	13,
	31,
	14,
	31,
	15,
	31,
	16,
	31,
	13,
	32,
	14,
	32,
	15,
	32,
	16,
	32,
	13,
	33,
	14,
	33,
	15,
	33,
	16,
	33,
	13,
	34,
	14,
	34,
	15,
	34,
	16,
	34,
	13,
	35,
	14,
	35,
	15,
	35,
	16,
	35,
	13,
	36,
	14,
	36,
	15,
	36,
	16,
	36,
	37,
	41,
	37,
	42,
	37,
	43,
	38,
	44,
	38,
	45,
	38,
	46,
	39,
	47,
	39,
	48,
	39,
	49,
	40,
	50,
	40,
	51,
	40,
	52 };

 real sssd20_04_boundc_[1+216+104] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
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
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real sssd20_04_x0comn_[108] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sssd20_04_pd[24];
static real sssd20_04_old_x[108];
static int sssd20_04_xkind = -1;

 static int
sssd20_04_xcheck(real *x)
{
	real *x1 = sssd20_04_old_x, *xe = x + 108;
	errno = 0;
	if (sssd20_04_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sssd20_04_xkind = 0;
	return 1;
	}
 real
sssd20_04_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sssd20_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 113818.899052505*x[0];
	rv += 113818.899052505*x[1];
	rv += 113818.899052505*x[2];
	rv += 113818.899052505*x[3];
	rv += 605.279840123728*x[16];
	rv += 272.608555855308*x[17];
	rv += 211.960656393875*x[18];
	rv += 135.715048070326*x[19];
	rv += 522.241469316371*x[20];
	rv += 523.563443912583*x[21];
	rv += 619.396068733614*x[22];
	rv += 682.855110454901*x[23];
	rv += 114.621684843966*x[24];
	rv += 261.173379139252*x[25];
	rv += 513.947181134071*x[26];
	rv += 358.827151019868*x[27];
	rv += 52.6956363514181*x[28];
	rv += 220.516589731527*x[29];
	rv += 345.528110071738*x[30];
	rv += 282.457316020068*x[31];
	rv += 164.693392296952*x[32];
	rv += 399.53784188835*x[33];
	rv += 579.783225922065*x[34];
	rv += 516.220792703845*x[35];
	rv += 141.747533297772*x[36];
	rv += 335.99629563561*x[37];
	rv += 476.041671993639*x[38];
	rv += 412.41709048995*x[39];
	rv += 249.021288299155*x[40];
	rv += 32.6643717959122*x[41];
	rv += 199.880519193262*x[42];
	rv += 133.876249431799*x[43];
	rv += 728.457456178222*x[44];
	rv += 404.601461725878*x[45];
	rv += 192.078907281649*x[46];
	rv += 305.768394889279*x[47];
	rv += 221.337276729365*x[48];
	rv += 192.029949456353*x[49];
	rv += 290.444487065555*x[50];
	rv += 290.589607684046*x[51];
	rv += 51.4630955019675*x[52];
	rv += 378.97714206935*x[53];
	rv += 703.676326841317*x[54];
	rv += 539.35222186517*x[55];
	rv += 204.068863192141*x[56];
	rv += 463.922884836254*x[57];
	rv += 653.596824664278*x[58];
	rv += 561.360926563887*x[59];
	rv += 266.946572387463*x[60];
	rv += 560.351177303554*x[61];
	rv += 769.136225452049*x[62];
	rv += 680.608731917532*x[63];
	rv += 63.9346010099856*x[64];
	rv += 279.007631632013*x[65];
	rv += 482.164187877198*x[66];
	rv += 396.080242012788*x[67];
	rv += 220.027468271858*x[68];
	rv += 241.243800922173*x[69];
	rv += 278.137335265831*x[70];
	rv += 303.106288586679*x[71];
	rv += 422.202307395423*x[72];
	rv += 190.792583868763*x[73];
	rv += 305.391726831552*x[74];
	rv += 321.417518470348*x[75];
	rv += 658.941366540719*x[76];
	rv += 257.620909868047*x[77];
	rv += 150.646514025985*x[78];
	rv += 290.969639301944*x[79];
	rv += 505.285454816257*x[80];
	rv += 51.8926025973049*x[81];
	rv += 331.503998535252*x[82];
	rv += 203.933628440855*x[83];
	rv += 342.132118599327*x[84];
	rv += 368.956004133481*x[85];
	rv += 594.305258519636*x[86];
	rv += 387.086094157069*x[87];
	rv += 159.012285419563*x[88];
	rv += 466.830163547866*x[89];
	rv += 692.307419918051*x[90];
	rv += 595.529758838679*x[91];
	rv += 367.398716653205*x[92];
	rv += 816.295996604146*x[93];
	rv += 1138.18899052505*x[94];
	rv += 1010.10082815226*x[95];
	rv += 334.527248*x[96];
	rv += 153.380628575016*x[97];
	rv += 110.155626976693*x[98];
	rv += 304.26749275*x[99];
	rv += 134.618265608558*x[100];
	rv += 94.9717940075149*x[101];
	rv += 386.41984025*x[102];
	rv += 164.839722634043*x[103];
	rv += 114.190322638477*x[104];
	rv += 292.732952*x[105];
	rv += 143.429945907125*x[106];
	rv += 106.48563964612*x[107];
	;}

	if (wantfg & 2) {
	g[0] = 113818.899052505;
	g[1] = 113818.899052505;
	g[2] = 113818.899052505;
	g[3] = 113818.899052505;
	g[16] = 605.279840123728;
	g[17] = 272.608555855308;
	g[18] = 211.960656393875;
	g[19] = 135.715048070326;
	g[20] = 522.241469316371;
	g[21] = 523.563443912583;
	g[22] = 619.396068733614;
	g[23] = 682.855110454901;
	g[24] = 114.621684843966;
	g[25] = 261.173379139252;
	g[26] = 513.947181134071;
	g[27] = 358.827151019868;
	g[28] = 52.6956363514181;
	g[29] = 220.516589731527;
	g[30] = 345.528110071738;
	g[31] = 282.457316020068;
	g[32] = 164.693392296952;
	g[33] = 399.53784188835;
	g[34] = 579.783225922065;
	g[35] = 516.220792703845;
	g[36] = 141.747533297772;
	g[37] = 335.99629563561;
	g[38] = 476.041671993639;
	g[39] = 412.41709048995;
	g[40] = 249.021288299155;
	g[41] = 32.6643717959122;
	g[42] = 199.880519193262;
	g[43] = 133.876249431799;
	g[44] = 728.457456178222;
	g[45] = 404.601461725878;
	g[46] = 192.078907281649;
	g[47] = 305.768394889279;
	g[48] = 221.337276729365;
	g[49] = 192.029949456353;
	g[50] = 290.444487065555;
	g[51] = 290.589607684046;
	g[52] = 51.4630955019675;
	g[53] = 378.97714206935;
	g[54] = 703.676326841317;
	g[55] = 539.35222186517;
	g[56] = 204.068863192141;
	g[57] = 463.922884836254;
	g[58] = 653.596824664278;
	g[59] = 561.360926563887;
	g[60] = 266.946572387463;
	g[61] = 560.351177303554;
	g[62] = 769.136225452049;
	g[63] = 680.608731917532;
	g[64] = 63.9346010099856;
	g[65] = 279.007631632013;
	g[66] = 482.164187877198;
	g[67] = 396.080242012788;
	g[68] = 220.027468271858;
	g[69] = 241.243800922173;
	g[70] = 278.137335265831;
	g[71] = 303.106288586679;
	g[72] = 422.202307395423;
	g[73] = 190.792583868763;
	g[74] = 305.391726831552;
	g[75] = 321.417518470348;
	g[76] = 658.941366540719;
	g[77] = 257.620909868047;
	g[78] = 150.646514025985;
	g[79] = 290.969639301944;
	g[80] = 505.285454816257;
	g[81] = 51.8926025973049;
	g[82] = 331.503998535252;
	g[83] = 203.933628440855;
	g[84] = 342.132118599327;
	g[85] = 368.956004133481;
	g[86] = 594.305258519636;
	g[87] = 387.086094157069;
	g[88] = 159.012285419563;
	g[89] = 466.830163547866;
	g[90] = 692.307419918051;
	g[91] = 595.529758838679;
	g[92] = 367.398716653205;
	g[93] = 816.295996604146;
	g[94] = 1138.18899052505;
	g[95] = 1010.10082815226;
	g[96] = 334.527248;
	g[97] = 153.380628575016;
	g[98] = 110.155626976693;
	g[99] = 304.26749275;
	g[100] = 134.618265608558;
	g[101] = 94.9717940075149;
	g[102] = 386.41984025;
	g[103] = 164.839722634043;
	g[104] = 114.190322638477;
	g[105] = 292.732952;
	g[106] = 143.429945907125;
	g[107] = 106.48563964612;
	}

	return rv;
}

 void
sssd20_04_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (sssd20_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd20_04_pd[0] = 1. / v[0];
	sssd20_04_pd[1] = -v[1] * sssd20_04_pd[0];
	v[0] = -v[1];
	t1 = v[0] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd20_04_pd[2] = 1. / v[0];
	sssd20_04_pd[3] = -v[1] * sssd20_04_pd[2];
	v[0] = -v[1];
	t1 = v[0] + x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd20_04_pd[4] = 1. / v[0];
	sssd20_04_pd[5] = -v[1] * sssd20_04_pd[4];
	v[0] = -v[1];
	t1 = v[0] + x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd20_04_pd[6] = 1. / v[0];
	sssd20_04_pd[7] = -v[1] * sssd20_04_pd[6];
	v[0] = -v[1];
	t1 = v[0] + x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd20_04_pd[8] = 1. / v[0];
	sssd20_04_pd[9] = -v[1] * sssd20_04_pd[8];
	v[0] = -v[1];
	t1 = v[0] + x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd20_04_pd[10] = 1. / v[0];
	sssd20_04_pd[11] = -v[1] * sssd20_04_pd[10];
	v[0] = -v[1];
	t1 = v[0] + x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd20_04_pd[12] = 1. / v[0];
	sssd20_04_pd[13] = -v[1] * sssd20_04_pd[12];
	v[0] = -v[1];
	t1 = v[0] + x[10];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd20_04_pd[14] = 1. / v[0];
	sssd20_04_pd[15] = -v[1] * sssd20_04_pd[14];
	v[0] = -v[1];
	t1 = v[0] + x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd20_04_pd[16] = 1. / v[0];
	sssd20_04_pd[17] = -v[1] * sssd20_04_pd[16];
	v[0] = -v[1];
	t1 = v[0] + x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd20_04_pd[18] = 1. / v[0];
	sssd20_04_pd[19] = -v[1] * sssd20_04_pd[18];
	v[0] = -v[1];
	t1 = v[0] + x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd20_04_pd[20] = 1. / v[0];
	sssd20_04_pd[21] = -v[1] * sssd20_04_pd[20];
	v[0] = -v[1];
	t1 = v[0] + x[14];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd20_04_pd[22] = 1. / v[0];
	sssd20_04_pd[23] = -v[1] * sssd20_04_pd[22];
	v[0] = -v[1];
	t1 = v[0] + x[15];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -4.0303184825*x[4];
	t1 += -8.060636965*x[5];
	t1 += -12.0909554475*x[6];
	t1 += 1.051196132*x[16];
	t1 += 1.318044576*x[20];
	t1 += 0.980364732*x[24];
	t1 += 0.515442765*x[28];
	t1 += 0.868604743*x[32];
	t1 += 0.607373159*x[36];
	t1 += 0.785278546*x[40];
	t1 += 0.995650311*x[44];
	t1 += 0.767039688*x[48];
	t1 += 1.321644376*x[52];
	t1 += 0.80017289*x[56];
	t1 += 0.935237992*x[60];
	t1 += 0.892997692*x[64];
	t1 += 0.501935535*x[68];
	t1 += 1.211683537*x[72];
	t1 += 1.39435304*x[76];
	t1 += 1.454079593*x[80];
	t1 += 0.971951107*x[84];
	t1 += 0.997801135*x[88];
	t1 += 1.479427834*x[92];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -3.29375444375*x[7];
	t1 += -6.5875088875*x[8];
	t1 += -9.88126333125*x[9];
	t1 += 1.051196132*x[17];
	t1 += 1.318044576*x[21];
	t1 += 0.980364732*x[25];
	t1 += 0.515442765*x[29];
	t1 += 0.868604743*x[33];
	t1 += 0.607373159*x[37];
	t1 += 0.785278546*x[41];
	t1 += 0.995650311*x[45];
	t1 += 0.767039688*x[49];
	t1 += 1.321644376*x[53];
	t1 += 0.80017289*x[57];
	t1 += 0.935237992*x[61];
	t1 += 0.892997692*x[65];
	t1 += 0.501935535*x[69];
	t1 += 1.211683537*x[73];
	t1 += 1.39435304*x[77];
	t1 += 1.454079593*x[81];
	t1 += 0.971951107*x[85];
	t1 += 0.997801135*x[89];
	t1 += 1.479427834*x[93];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -3.74935596125*x[10];
	t1 += -7.4987119225*x[11];
	t1 += -11.24806788375*x[12];
	t1 += 1.051196132*x[18];
	t1 += 1.318044576*x[22];
	t1 += 0.980364732*x[26];
	t1 += 0.515442765*x[30];
	t1 += 0.868604743*x[34];
	t1 += 0.607373159*x[38];
	t1 += 0.785278546*x[42];
	t1 += 0.995650311*x[46];
	t1 += 0.767039688*x[50];
	t1 += 1.321644376*x[54];
	t1 += 0.80017289*x[58];
	t1 += 0.935237992*x[62];
	t1 += 0.892997692*x[66];
	t1 += 0.501935535*x[70];
	t1 += 1.211683537*x[74];
	t1 += 1.39435304*x[78];
	t1 += 1.454079593*x[82];
	t1 += 0.971951107*x[86];
	t1 += 0.997801135*x[90];
	t1 += 1.479427834*x[94];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -4.30395742125*x[13];
	t1 += -8.6079148425*x[14];
	t1 += -12.91187226375*x[15];
	t1 += 1.051196132*x[19];
	t1 += 1.318044576*x[23];
	t1 += 0.980364732*x[27];
	t1 += 0.515442765*x[31];
	t1 += 0.868604743*x[35];
	t1 += 0.607373159*x[39];
	t1 += 0.785278546*x[43];
	t1 += 0.995650311*x[47];
	t1 += 0.767039688*x[51];
	t1 += 1.321644376*x[55];
	t1 += 0.80017289*x[59];
	t1 += 0.935237992*x[63];
	t1 += 0.892997692*x[67];
	t1 += 0.501935535*x[71];
	t1 += 1.211683537*x[75];
	t1 += 1.39435304*x[79];
	t1 += 1.454079593*x[83];
	t1 += 0.971951107*x[87];
	t1 += 0.997801135*x[91];
	t1 += 1.479427834*x[95];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[68];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[84];
	t1 += x[85];
	t1 += x[86];
	t1 += x[87];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[88];
	t1 += x[89];
	t1 += x[90];
	t1 += x[91];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[92];
	t1 += x[93];
	t1 += x[94];
	t1 += x[95];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[96];
	t1 += x[97];
	t1 += x[98];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[99];
	t1 += x[100];
	t1 += x[101];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[102];
	t1 += x[103];
	t1 += x[104];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[105];
	t1 += x[106];
	t1 += x[107];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[4];
	t1 += -x[96];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[5];
	t1 += -x[97];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[6];
	t1 += -x[98];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[7];
	t1 += -x[99];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[8];
	t1 += -x[100];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[9];
	t1 += -x[101];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[10];
	t1 += -x[102];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[11];
	t1 += -x[103];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[12];
	t1 += -x[104];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[13];
	t1 += -x[105];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[14];
	t1 += -x[106];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[15];
	t1 += -x[107];
	c[51] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -sssd20_04_pd[0];
	J[0] -= sssd20_04_pd[1];
	J[12] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -sssd20_04_pd[2];
	J[1] -= sssd20_04_pd[3];
	J[15] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -sssd20_04_pd[4];
	J[2] -= sssd20_04_pd[5];
	J[18] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -sssd20_04_pd[6];
	J[3] -= sssd20_04_pd[7];
	J[21] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = -sssd20_04_pd[8];
	J[4] -= sssd20_04_pd[9];
	J[24] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = -sssd20_04_pd[10];
	J[5] -= sssd20_04_pd[11];
	J[27] = 1.;

   /*** derivatives for constraint 7 ***/

	J[6] = -sssd20_04_pd[12];
	J[6] -= sssd20_04_pd[13];
	J[30] = 1.;

   /*** derivatives for constraint 8 ***/

	J[7] = -sssd20_04_pd[14];
	J[7] -= sssd20_04_pd[15];
	J[33] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = -sssd20_04_pd[16];
	J[8] -= sssd20_04_pd[17];
	J[36] = 1.;

   /*** derivatives for constraint 10 ***/

	J[9] = -sssd20_04_pd[18];
	J[9] -= sssd20_04_pd[19];
	J[39] = 1.;

   /*** derivatives for constraint 11 ***/

	J[10] = -sssd20_04_pd[20];
	J[10] -= sssd20_04_pd[21];
	J[42] = 1.;

   /*** derivatives for constraint 12 ***/

	J[11] = -sssd20_04_pd[22];
	J[11] -= sssd20_04_pd[23];
	J[45] = 1.;

   /*** derivatives for constraint 13 ***/

	J[13] = -4.0303184825;
	J[16] = -8.060636965;
	J[19] = -12.0909554475;
	J[48] = 1.051196132;
	J[56] = 1.318044576;
	J[64] = 0.980364732;
	J[72] = 0.515442765;
	J[80] = 0.868604743;
	J[88] = 0.607373159;
	J[96] = 0.785278546;
	J[104] = 0.995650311;
	J[112] = 0.767039688;
	J[120] = 1.321644376;
	J[128] = 0.80017289;
	J[136] = 0.935237992;
	J[144] = 0.892997692;
	J[152] = 0.501935535;
	J[160] = 1.211683537;
	J[168] = 1.39435304;
	J[176] = 1.454079593;
	J[184] = 0.971951107;
	J[192] = 0.997801135;
	J[200] = 1.479427834;

   /*** derivatives for constraint 14 ***/

	J[22] = -3.29375444375;
	J[25] = -6.5875088875;
	J[28] = -9.88126333125;
	J[50] = 1.051196132;
	J[58] = 1.318044576;
	J[66] = 0.980364732;
	J[74] = 0.515442765;
	J[82] = 0.868604743;
	J[90] = 0.607373159;
	J[98] = 0.785278546;
	J[106] = 0.995650311;
	J[114] = 0.767039688;
	J[122] = 1.321644376;
	J[130] = 0.80017289;
	J[138] = 0.935237992;
	J[146] = 0.892997692;
	J[154] = 0.501935535;
	J[162] = 1.211683537;
	J[170] = 1.39435304;
	J[178] = 1.454079593;
	J[186] = 0.971951107;
	J[194] = 0.997801135;
	J[202] = 1.479427834;

   /*** derivatives for constraint 15 ***/

	J[31] = -3.74935596125;
	J[34] = -7.4987119225;
	J[37] = -11.24806788375;
	J[52] = 1.051196132;
	J[60] = 1.318044576;
	J[68] = 0.980364732;
	J[76] = 0.515442765;
	J[84] = 0.868604743;
	J[92] = 0.607373159;
	J[100] = 0.785278546;
	J[108] = 0.995650311;
	J[116] = 0.767039688;
	J[124] = 1.321644376;
	J[132] = 0.80017289;
	J[140] = 0.935237992;
	J[148] = 0.892997692;
	J[156] = 0.501935535;
	J[164] = 1.211683537;
	J[172] = 1.39435304;
	J[180] = 1.454079593;
	J[188] = 0.971951107;
	J[196] = 0.997801135;
	J[204] = 1.479427834;

   /*** derivatives for constraint 16 ***/

	J[40] = -4.30395742125;
	J[43] = -8.6079148425;
	J[46] = -12.91187226375;
	J[54] = 1.051196132;
	J[62] = 1.318044576;
	J[70] = 0.980364732;
	J[78] = 0.515442765;
	J[86] = 0.868604743;
	J[94] = 0.607373159;
	J[102] = 0.785278546;
	J[110] = 0.995650311;
	J[118] = 0.767039688;
	J[126] = 1.321644376;
	J[134] = 0.80017289;
	J[142] = 0.935237992;
	J[150] = 0.892997692;
	J[158] = 0.501935535;
	J[166] = 1.211683537;
	J[174] = 1.39435304;
	J[182] = 1.454079593;
	J[190] = 0.971951107;
	J[198] = 0.997801135;
	J[206] = 1.479427834;

   /*** derivatives for constraint 17 ***/

	J[49] = 1.;
	J[51] = 1.;
	J[53] = 1.;
	J[55] = 1.;

   /*** derivatives for constraint 18 ***/

	J[57] = 1.;
	J[59] = 1.;
	J[61] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 19 ***/

	J[65] = 1.;
	J[67] = 1.;
	J[69] = 1.;
	J[71] = 1.;

   /*** derivatives for constraint 20 ***/

	J[73] = 1.;
	J[75] = 1.;
	J[77] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 21 ***/

	J[81] = 1.;
	J[83] = 1.;
	J[85] = 1.;
	J[87] = 1.;

   /*** derivatives for constraint 22 ***/

	J[89] = 1.;
	J[91] = 1.;
	J[93] = 1.;
	J[95] = 1.;

   /*** derivatives for constraint 23 ***/

	J[97] = 1.;
	J[99] = 1.;
	J[101] = 1.;
	J[103] = 1.;

   /*** derivatives for constraint 24 ***/

	J[105] = 1.;
	J[107] = 1.;
	J[109] = 1.;
	J[111] = 1.;

   /*** derivatives for constraint 25 ***/

	J[113] = 1.;
	J[115] = 1.;
	J[117] = 1.;
	J[119] = 1.;

   /*** derivatives for constraint 26 ***/

	J[121] = 1.;
	J[123] = 1.;
	J[125] = 1.;
	J[127] = 1.;

   /*** derivatives for constraint 27 ***/

	J[129] = 1.;
	J[131] = 1.;
	J[133] = 1.;
	J[135] = 1.;

   /*** derivatives for constraint 28 ***/

	J[137] = 1.;
	J[139] = 1.;
	J[141] = 1.;
	J[143] = 1.;

   /*** derivatives for constraint 29 ***/

	J[145] = 1.;
	J[147] = 1.;
	J[149] = 1.;
	J[151] = 1.;

   /*** derivatives for constraint 30 ***/

	J[153] = 1.;
	J[155] = 1.;
	J[157] = 1.;
	J[159] = 1.;

   /*** derivatives for constraint 31 ***/

	J[161] = 1.;
	J[163] = 1.;
	J[165] = 1.;
	J[167] = 1.;

   /*** derivatives for constraint 32 ***/

	J[169] = 1.;
	J[171] = 1.;
	J[173] = 1.;
	J[175] = 1.;

   /*** derivatives for constraint 33 ***/

	J[177] = 1.;
	J[179] = 1.;
	J[181] = 1.;
	J[183] = 1.;

   /*** derivatives for constraint 34 ***/

	J[185] = 1.;
	J[187] = 1.;
	J[189] = 1.;
	J[191] = 1.;

   /*** derivatives for constraint 35 ***/

	J[193] = 1.;
	J[195] = 1.;
	J[197] = 1.;
	J[199] = 1.;

   /*** derivatives for constraint 36 ***/

	J[201] = 1.;
	J[203] = 1.;
	J[205] = 1.;
	J[207] = 1.;

   /*** derivatives for constraint 37 ***/

	J[208] = 1.;
	J[210] = 1.;
	J[212] = 1.;

   /*** derivatives for constraint 38 ***/

	J[214] = 1.;
	J[216] = 1.;
	J[218] = 1.;

   /*** derivatives for constraint 39 ***/

	J[220] = 1.;
	J[222] = 1.;
	J[224] = 1.;

   /*** derivatives for constraint 40 ***/

	J[226] = 1.;
	J[228] = 1.;
	J[230] = 1.;

   /*** derivatives for constraint 41 ***/

	J[14] = 1.;
	J[209] = -1.;

   /*** derivatives for constraint 42 ***/

	J[17] = 1.;
	J[211] = -1.;

   /*** derivatives for constraint 43 ***/

	J[20] = 1.;
	J[213] = -1.;

   /*** derivatives for constraint 44 ***/

	J[23] = 1.;
	J[215] = -1.;

   /*** derivatives for constraint 45 ***/

	J[26] = 1.;
	J[217] = -1.;

   /*** derivatives for constraint 46 ***/

	J[29] = 1.;
	J[219] = -1.;

   /*** derivatives for constraint 47 ***/

	J[32] = 1.;
	J[221] = -1.;

   /*** derivatives for constraint 48 ***/

	J[35] = 1.;
	J[223] = -1.;

   /*** derivatives for constraint 49 ***/

	J[38] = 1.;
	J[225] = -1.;

   /*** derivatives for constraint 50 ***/

	J[41] = 1.;
	J[227] = -1.;

   /*** derivatives for constraint 51 ***/

	J[44] = 1.;
	J[229] = -1.;

   /*** derivatives for constraint 52 ***/

	J[47] = 1.;
	J[231] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif