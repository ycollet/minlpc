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
 fint sssd15_04persp_auxcom_[1] = { 12 /* nlc */ };
 fint sssd15_04persp_funcom_[299] = {
	88 /* nvar */,
	1 /* nobj */,
	47 /* ncon */,
	204 /* nzc */,
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
	52,
	55,
	58,
	61,
	64,
	67,
	70,
	73,
	76,
	79,
	82,
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
	36,
	2,
	13,
	37,
	3,
	13,
	38,
	4,
	14,
	39,
	5,
	14,
	40,
	6,
	14,
	41,
	7,
	15,
	42,
	8,
	15,
	43,
	9,
	15,
	44,
	10,
	16,
	45,
	11,
	16,
	46,
	12,
	16,
	47,
	1,
	32,
	36,
	2,
	32,
	37,
	3,
	32,
	38,
	4,
	33,
	39,
	5,
	33,
	40,
	6,
	33,
	41,
	7,
	34,
	42,
	8,
	34,
	43,
	9,
	34,
	44,
	10,
	35,
	45,
	11,
	35,
	46,
	12,
	35,
	47,
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
	31 };

 real sssd15_04persp_boundc_[1+176+94] /* Infinity, variable bounds, constraint bounds */ = {
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

 real sssd15_04persp_x0comn_[88] = {
		1.22251555798631,
		1.24950210754822,
		2.07513088371977,
		1.97319440621145,
		0.183353130884111,
		0.183353130884111,
		0.183353130884111,
		0.185152394887074,
		0.185152394887074,
		0.185152394887074,
		0.224936863089399,
		0.224936863089399,
		0.224936863089399,
		0.2212204716123,
		0.2212204716123,
		0.2212204716123,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25 };

static real sssd15_04persp_old_x[88];
static int sssd15_04persp_xkind = -1;

 static int
sssd15_04persp_xcheck(real *x)
{
	real *x1 = sssd15_04persp_old_x, *xe = x + 88;
	errno = 0;
	if (sssd15_04persp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sssd15_04persp_xkind = 0;
	return 1;
	}
 real
sssd15_04persp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sssd15_04persp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 74750.0077392939*x[0];
	rv += 74750.0077392939*x[1];
	rv += 74750.0077392939*x[2];
	rv += 74750.0077392939*x[3];
	rv += 313.6973235*x[16];
	rv += 136.4460104172*x[17];
	rv += 95.4447793733688*x[18];
	rv += 401.4402965*x[19];
	rv += 160.307673981768*x[20];
	rv += 107.445134115433*x[21];
	rv += 456.70672375*x[22];
	rv += 163.727629808624*x[23];
	rv += 103.975094190251*x[24];
	rv += 349.50038725*x[25];
	rv += 137.744259121245*x[26];
	rv += 91.7174793486262*x[27];
	rv += 53.1533839248115*x[28];
	rv += 177.583181382496*x[29];
	rv += 80.6428266602653*x[30];
	rv += 231.95916447606*x[31];
	rv += 394.432428138298*x[32];
	rv += 444.974070084717*x[33];
	rv += 459.794817811195*x[34];
	rv += 695.629649483288*x[35];
	rv += 323.203981426319*x[36];
	rv += 107.360282998709*x[37];
	rv += 361.859887112392*x[38];
	rv += 367.306912008994*x[39];
	rv += 282.872191198352*x[40];
	rv += 44.0762253696262*x[41];
	rv += 317.877544418109*x[42];
	rv += 316.134390405973*x[43];
	rv += 100.330419683223*x[44];
	rv += 127.926900226391*x[45];
	rv += 139.263247551061*x[46];
	rv += 254.000222645919*x[47];
	rv += 194.145316904472*x[48];
	rv += 116.037290266393*x[49];
	rv += 222.112787515659*x[50];
	rv += 263.356262140469*x[51];
	rv += 571.289311491824*x[52];
	rv += 347.171110484916*x[53];
	rv += 646.58041890394*x[54];
	rv += 747.500077392939*x[55];
	rv += 267.180266374013*x[56];
	rv += 432.187536801291*x[57];
	rv += 223.193932764969*x[58];
	rv += 305.606281730255*x[59];
	rv += 484.148164648118*x[60];
	rv += 255.18826726263*x[61];
	rv += 500.409280467716*x[62];
	rv += 357.348895559311*x[63];
	rv += 154.81861346409*x[64];
	rv += 47.9482185242841*x[65];
	rv += 178.01500365671*x[66];
	rv += 197.299183634545*x[67];
	rv += 110.221327583974*x[68];
	rv += 276.335219124972*x[69];
	rv += 66.6367550739739*x[70];
	rv += 215.126920582161*x[71];
	rv += 251.865680365869*x[72];
	rv += 259.485555817488*x[73];
	rv += 325.903992788768*x[74];
	rv += 533.263861665761*x[75];
	rv += 365.289467328013*x[76];
	rv += 698.425848556873*x[77];
	rv += 342.854784735801*x[78];
	rv += 672.157315207286*x[79];
	rv += 278.522996301316*x[80];
	rv += 127.656852798454*x[81];
	rv += 302.312726976851*x[82];
	rv += 281.218053524739*x[83];
	rv += 629.708028128623*x[84];
	rv += 303.067014885745*x[85];
	rv += 662.424721658793*x[86];
	rv += 521.27200594153*x[87];
	;}

	if (wantfg & 2) {
	g[0] = 74750.0077392939;
	g[1] = 74750.0077392939;
	g[2] = 74750.0077392939;
	g[3] = 74750.0077392939;
	g[16] = 313.6973235;
	g[17] = 136.4460104172;
	g[18] = 95.4447793733688;
	g[19] = 401.4402965;
	g[20] = 160.307673981768;
	g[21] = 107.445134115433;
	g[22] = 456.70672375;
	g[23] = 163.727629808624;
	g[24] = 103.975094190251;
	g[25] = 349.50038725;
	g[26] = 137.744259121245;
	g[27] = 91.7174793486262;
	g[28] = 53.1533839248115;
	g[29] = 177.583181382496;
	g[30] = 80.6428266602653;
	g[31] = 231.95916447606;
	g[32] = 394.432428138298;
	g[33] = 444.974070084717;
	g[34] = 459.794817811195;
	g[35] = 695.629649483288;
	g[36] = 323.203981426319;
	g[37] = 107.360282998709;
	g[38] = 361.859887112392;
	g[39] = 367.306912008994;
	g[40] = 282.872191198352;
	g[41] = 44.0762253696262;
	g[42] = 317.877544418109;
	g[43] = 316.134390405973;
	g[44] = 100.330419683223;
	g[45] = 127.926900226391;
	g[46] = 139.263247551061;
	g[47] = 254.000222645919;
	g[48] = 194.145316904472;
	g[49] = 116.037290266393;
	g[50] = 222.112787515659;
	g[51] = 263.356262140469;
	g[52] = 571.289311491824;
	g[53] = 347.171110484916;
	g[54] = 646.58041890394;
	g[55] = 747.500077392939;
	g[56] = 267.180266374013;
	g[57] = 432.187536801291;
	g[58] = 223.193932764969;
	g[59] = 305.606281730255;
	g[60] = 484.148164648118;
	g[61] = 255.18826726263;
	g[62] = 500.409280467716;
	g[63] = 357.348895559311;
	g[64] = 154.81861346409;
	g[65] = 47.9482185242841;
	g[66] = 178.01500365671;
	g[67] = 197.299183634545;
	g[68] = 110.221327583974;
	g[69] = 276.335219124972;
	g[70] = 66.6367550739739;
	g[71] = 215.126920582161;
	g[72] = 251.865680365869;
	g[73] = 259.485555817488;
	g[74] = 325.903992788768;
	g[75] = 533.263861665761;
	g[76] = 365.289467328013;
	g[77] = 698.425848556873;
	g[78] = 342.854784735801;
	g[79] = 672.157315207286;
	g[80] = 278.522996301316;
	g[81] = 127.656852798454;
	g[82] = 302.312726976851;
	g[83] = 281.218053524739;
	g[84] = 629.708028128623;
	g[85] = 303.067014885745;
	g[86] = 662.424721658793;
	g[87] = 521.27200594153;
	}

	return rv;
}

 void
sssd15_04persp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sssd15_04persp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[4] * x[16];
	v[1] = x[4] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[5] * x[17];
	v[1] = x[5] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[6] * x[18];
	v[1] = x[6] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[7] * x[19];
	v[1] = x[7] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[19];
	v[2] = -v[1];
	v[0] += v[2];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[8] * x[20];
	v[1] = x[8] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[9] * x[21];
	v[1] = x[9] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[10] * x[22];
	v[1] = x[10] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[11] * x[23];
	v[1] = x[11] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[12] * x[24];
	v[1] = x[12] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[13] * x[25];
	v[1] = x[13] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[14] * x[26];
	v[1] = x[14] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[15] * x[27];
	v[1] = x[15] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	c[11] = v[0];

  /***  constraint 13  ***/

	t1 = -3.22664386875*x[4];
	t1 += -6.4532877375*x[5];
	t1 += -9.67993160625*x[6];
	t1 += 0.609376132*x[28];
	t1 += 1.180016336*x[32];
	t1 += 0.967493052*x[36];
	t1 += 1.004918785*x[40];
	t1 += 0.698898063*x[44];
	t1 += 0.540292599*x[48];
	t1 += 1.460452986*x[52];
	t1 += 0.811980791*x[56];
	t1 += 0.973180988*x[60];
	t1 += 0.544914116*x[64];
	t1 += 0.78515855*x[68];
	t1 += 1.312281472*x[72];
	t1 += 1.346783152*x[76];
	t1 += 0.635811295*x[80];
	t1 += 1.327207817*x[84];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -3.1952881621875*x[7];
	t1 += -6.390576324375*x[8];
	t1 += -9.5858644865625*x[9];
	t1 += 0.609376132*x[29];
	t1 += 1.180016336*x[33];
	t1 += 0.967493052*x[37];
	t1 += 1.004918785*x[41];
	t1 += 0.698898063*x[45];
	t1 += 0.540292599*x[49];
	t1 += 1.460452986*x[53];
	t1 += 0.811980791*x[57];
	t1 += 0.973180988*x[61];
	t1 += 0.544914116*x[65];
	t1 += 0.78515855*x[69];
	t1 += 1.312281472*x[73];
	t1 += 1.346783152*x[77];
	t1 += 0.635811295*x[81];
	t1 += 1.327207817*x[85];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -2.6301391753125*x[10];
	t1 += -5.260278350625*x[11];
	t1 += -7.8904175259375*x[12];
	t1 += 0.609376132*x[30];
	t1 += 1.180016336*x[34];
	t1 += 0.967493052*x[38];
	t1 += 1.004918785*x[42];
	t1 += 0.698898063*x[46];
	t1 += 0.540292599*x[50];
	t1 += 1.460452986*x[54];
	t1 += 0.811980791*x[58];
	t1 += 0.973180988*x[62];
	t1 += 0.544914116*x[66];
	t1 += 0.78515855*x[70];
	t1 += 1.312281472*x[74];
	t1 += 1.346783152*x[78];
	t1 += 0.635811295*x[82];
	t1 += 1.327207817*x[86];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -2.6743241765625*x[13];
	t1 += -5.348648353125*x[14];
	t1 += -8.0229725296875*x[15];
	t1 += 0.609376132*x[31];
	t1 += 1.180016336*x[35];
	t1 += 0.967493052*x[39];
	t1 += 1.004918785*x[43];
	t1 += 0.698898063*x[47];
	t1 += 0.540292599*x[51];
	t1 += 1.460452986*x[55];
	t1 += 0.811980791*x[59];
	t1 += 0.973180988*x[63];
	t1 += 0.544914116*x[67];
	t1 += 0.78515855*x[71];
	t1 += 1.312281472*x[75];
	t1 += 1.346783152*x[79];
	t1 += 0.635811295*x[83];
	t1 += 1.327207817*x[87];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[68];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[84];
	t1 += x[85];
	t1 += x[86];
	t1 += x[87];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[19];
	t1 += x[20];
	t1 += x[21];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[22];
	t1 += x[23];
	t1 += x[24];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += x[27];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[4];
	t1 += -x[16];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[5];
	t1 += -x[17];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[6];
	t1 += -x[18];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[7];
	t1 += -x[19];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[8];
	t1 += -x[20];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[9];
	t1 += -x[21];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[10];
	t1 += -x[22];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[11];
	t1 += -x[23];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[12];
	t1 += -x[24];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[13];
	t1 += -x[25];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[14];
	t1 += -x[26];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[15];
	t1 += -x[27];
	c[46] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[48] = -x[0];
	J[0] = -x[16];
	J[0] += x[4];
	J[12] = x[0];
	J[48] += x[4];
	J[12] += x[16];

   /*** derivatives for constraint 2 ***/

	J[51] = -x[0];
	J[1] = -x[17];
	J[1] += x[5];
	J[15] = x[0];
	J[51] += x[5];
	J[15] += x[17];

   /*** derivatives for constraint 3 ***/

	J[54] = -x[0];
	J[2] = -x[18];
	J[2] += x[6];
	J[18] = x[0];
	J[54] += x[6];
	J[18] += x[18];

   /*** derivatives for constraint 4 ***/

	J[57] = -x[1];
	J[3] = -x[19];
	J[3] += x[7];
	J[21] = x[1];
	J[57] += x[7];
	J[21] += x[19];

   /*** derivatives for constraint 5 ***/

	J[60] = -x[1];
	J[4] = -x[20];
	J[4] += x[8];
	J[24] = x[1];
	J[60] += x[8];
	J[24] += x[20];

   /*** derivatives for constraint 6 ***/

	J[63] = -x[1];
	J[5] = -x[21];
	J[5] += x[9];
	J[27] = x[1];
	J[63] += x[9];
	J[27] += x[21];

   /*** derivatives for constraint 7 ***/

	J[66] = -x[2];
	J[6] = -x[22];
	J[6] += x[10];
	J[30] = x[2];
	J[66] += x[10];
	J[30] += x[22];

   /*** derivatives for constraint 8 ***/

	J[69] = -x[2];
	J[7] = -x[23];
	J[7] += x[11];
	J[33] = x[2];
	J[69] += x[11];
	J[33] += x[23];

   /*** derivatives for constraint 9 ***/

	J[72] = -x[2];
	J[8] = -x[24];
	J[8] += x[12];
	J[36] = x[2];
	J[72] += x[12];
	J[36] += x[24];

   /*** derivatives for constraint 10 ***/

	J[75] = -x[3];
	J[9] = -x[25];
	J[9] += x[13];
	J[39] = x[3];
	J[75] += x[13];
	J[39] += x[25];

   /*** derivatives for constraint 11 ***/

	J[78] = -x[3];
	J[10] = -x[26];
	J[10] += x[14];
	J[42] = x[3];
	J[78] += x[14];
	J[42] += x[26];

   /*** derivatives for constraint 12 ***/

	J[81] = -x[3];
	J[11] = -x[27];
	J[11] += x[15];
	J[45] = x[3];
	J[81] += x[15];
	J[45] += x[27];

   /*** derivatives for constraint 13 ***/

	J[13] = -3.22664386875;
	J[16] = -6.4532877375;
	J[19] = -9.67993160625;
	J[84] = 0.609376132;
	J[92] = 1.180016336;
	J[100] = 0.967493052;
	J[108] = 1.004918785;
	J[116] = 0.698898063;
	J[124] = 0.540292599;
	J[132] = 1.460452986;
	J[140] = 0.811980791;
	J[148] = 0.973180988;
	J[156] = 0.544914116;
	J[164] = 0.78515855;
	J[172] = 1.312281472;
	J[180] = 1.346783152;
	J[188] = 0.635811295;
	J[196] = 1.327207817;

   /*** derivatives for constraint 14 ***/

	J[22] = -3.1952881621875;
	J[25] = -6.390576324375;
	J[28] = -9.5858644865625;
	J[86] = 0.609376132;
	J[94] = 1.180016336;
	J[102] = 0.967493052;
	J[110] = 1.004918785;
	J[118] = 0.698898063;
	J[126] = 0.540292599;
	J[134] = 1.460452986;
	J[142] = 0.811980791;
	J[150] = 0.973180988;
	J[158] = 0.544914116;
	J[166] = 0.78515855;
	J[174] = 1.312281472;
	J[182] = 1.346783152;
	J[190] = 0.635811295;
	J[198] = 1.327207817;

   /*** derivatives for constraint 15 ***/

	J[31] = -2.6301391753125;
	J[34] = -5.260278350625;
	J[37] = -7.8904175259375;
	J[88] = 0.609376132;
	J[96] = 1.180016336;
	J[104] = 0.967493052;
	J[112] = 1.004918785;
	J[120] = 0.698898063;
	J[128] = 0.540292599;
	J[136] = 1.460452986;
	J[144] = 0.811980791;
	J[152] = 0.973180988;
	J[160] = 0.544914116;
	J[168] = 0.78515855;
	J[176] = 1.312281472;
	J[184] = 1.346783152;
	J[192] = 0.635811295;
	J[200] = 1.327207817;

   /*** derivatives for constraint 16 ***/

	J[40] = -2.6743241765625;
	J[43] = -5.348648353125;
	J[46] = -8.0229725296875;
	J[90] = 0.609376132;
	J[98] = 1.180016336;
	J[106] = 0.967493052;
	J[114] = 1.004918785;
	J[122] = 0.698898063;
	J[130] = 0.540292599;
	J[138] = 1.460452986;
	J[146] = 0.811980791;
	J[154] = 0.973180988;
	J[162] = 0.544914116;
	J[170] = 0.78515855;
	J[178] = 1.312281472;
	J[186] = 1.346783152;
	J[194] = 0.635811295;
	J[202] = 1.327207817;

   /*** derivatives for constraint 17 ***/

	J[85] = 1.;
	J[87] = 1.;
	J[89] = 1.;
	J[91] = 1.;

   /*** derivatives for constraint 18 ***/

	J[93] = 1.;
	J[95] = 1.;
	J[97] = 1.;
	J[99] = 1.;

   /*** derivatives for constraint 19 ***/

	J[101] = 1.;
	J[103] = 1.;
	J[105] = 1.;
	J[107] = 1.;

   /*** derivatives for constraint 20 ***/

	J[109] = 1.;
	J[111] = 1.;
	J[113] = 1.;
	J[115] = 1.;

   /*** derivatives for constraint 21 ***/

	J[117] = 1.;
	J[119] = 1.;
	J[121] = 1.;
	J[123] = 1.;

   /*** derivatives for constraint 22 ***/

	J[125] = 1.;
	J[127] = 1.;
	J[129] = 1.;
	J[131] = 1.;

   /*** derivatives for constraint 23 ***/

	J[133] = 1.;
	J[135] = 1.;
	J[137] = 1.;
	J[139] = 1.;

   /*** derivatives for constraint 24 ***/

	J[141] = 1.;
	J[143] = 1.;
	J[145] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 25 ***/

	J[149] = 1.;
	J[151] = 1.;
	J[153] = 1.;
	J[155] = 1.;

   /*** derivatives for constraint 26 ***/

	J[157] = 1.;
	J[159] = 1.;
	J[161] = 1.;
	J[163] = 1.;

   /*** derivatives for constraint 27 ***/

	J[165] = 1.;
	J[167] = 1.;
	J[169] = 1.;
	J[171] = 1.;

   /*** derivatives for constraint 28 ***/

	J[173] = 1.;
	J[175] = 1.;
	J[177] = 1.;
	J[179] = 1.;

   /*** derivatives for constraint 29 ***/

	J[181] = 1.;
	J[183] = 1.;
	J[185] = 1.;
	J[187] = 1.;

   /*** derivatives for constraint 30 ***/

	J[189] = 1.;
	J[191] = 1.;
	J[193] = 1.;
	J[195] = 1.;

   /*** derivatives for constraint 31 ***/

	J[197] = 1.;
	J[199] = 1.;
	J[201] = 1.;
	J[203] = 1.;

   /*** derivatives for constraint 32 ***/

	J[49] = 1.;
	J[52] = 1.;
	J[55] = 1.;

   /*** derivatives for constraint 33 ***/

	J[58] = 1.;
	J[61] = 1.;
	J[64] = 1.;

   /*** derivatives for constraint 34 ***/

	J[67] = 1.;
	J[70] = 1.;
	J[73] = 1.;

   /*** derivatives for constraint 35 ***/

	J[76] = 1.;
	J[79] = 1.;
	J[82] = 1.;

   /*** derivatives for constraint 36 ***/

	J[14] = 1.;
	J[50] = -1.;

   /*** derivatives for constraint 37 ***/

	J[17] = 1.;
	J[53] = -1.;

   /*** derivatives for constraint 38 ***/

	J[20] = 1.;
	J[56] = -1.;

   /*** derivatives for constraint 39 ***/

	J[23] = 1.;
	J[59] = -1.;

   /*** derivatives for constraint 40 ***/

	J[26] = 1.;
	J[62] = -1.;

   /*** derivatives for constraint 41 ***/

	J[29] = 1.;
	J[65] = -1.;

   /*** derivatives for constraint 42 ***/

	J[32] = 1.;
	J[68] = -1.;

   /*** derivatives for constraint 43 ***/

	J[35] = 1.;
	J[71] = -1.;

   /*** derivatives for constraint 44 ***/

	J[38] = 1.;
	J[74] = -1.;

   /*** derivatives for constraint 45 ***/

	J[41] = 1.;
	J[77] = -1.;

   /*** derivatives for constraint 46 ***/

	J[44] = 1.;
	J[80] = -1.;

   /*** derivatives for constraint 47 ***/

	J[47] = 1.;
	J[83] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif