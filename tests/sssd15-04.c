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
 fint sssd15_04_auxcom_[1] = { 12 /* nlc */ };
 fint sssd15_04_funcom_[287] = {
	88 /* nvar */,
	1 /* nobj */,
	47 /* ncon */,
	192 /* nzc */,
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
	32,
	36,
	32,
	37,
	32,
	38,
	33,
	39,
	33,
	40,
	33,
	41,
	34,
	42,
	34,
	43,
	34,
	44,
	35,
	45,
	35,
	46,
	35,
	47 };

 real sssd15_04_boundc_[1+176+94] /* Infinity, variable bounds, constraint bounds */ = {
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

 real sssd15_04_x0comn_[88] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sssd15_04_pd[24];
static real sssd15_04_old_x[88];
static int sssd15_04_xkind = -1;

 static int
sssd15_04_xcheck(real *x)
{
	real *x1 = sssd15_04_old_x, *xe = x + 88;
	errno = 0;
	if (sssd15_04_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sssd15_04_xkind = 0;
	return 1;
	}
 real
sssd15_04_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sssd15_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 74750.0077392939*x[0];
	rv += 74750.0077392939*x[1];
	rv += 74750.0077392939*x[2];
	rv += 74750.0077392939*x[3];
	rv += 53.1533839248115*x[16];
	rv += 177.583181382496*x[17];
	rv += 80.6428266602653*x[18];
	rv += 231.95916447606*x[19];
	rv += 394.432428138298*x[20];
	rv += 444.974070084717*x[21];
	rv += 459.794817811195*x[22];
	rv += 695.629649483288*x[23];
	rv += 323.203981426319*x[24];
	rv += 107.360282998709*x[25];
	rv += 361.859887112392*x[26];
	rv += 367.306912008994*x[27];
	rv += 282.872191198352*x[28];
	rv += 44.0762253696262*x[29];
	rv += 317.877544418109*x[30];
	rv += 316.134390405973*x[31];
	rv += 100.330419683223*x[32];
	rv += 127.926900226391*x[33];
	rv += 139.263247551061*x[34];
	rv += 254.000222645919*x[35];
	rv += 194.145316904472*x[36];
	rv += 116.037290266393*x[37];
	rv += 222.112787515659*x[38];
	rv += 263.356262140469*x[39];
	rv += 571.289311491824*x[40];
	rv += 347.171110484916*x[41];
	rv += 646.58041890394*x[42];
	rv += 747.500077392939*x[43];
	rv += 267.180266374013*x[44];
	rv += 432.187536801291*x[45];
	rv += 223.193932764969*x[46];
	rv += 305.606281730255*x[47];
	rv += 484.148164648118*x[48];
	rv += 255.18826726263*x[49];
	rv += 500.409280467716*x[50];
	rv += 357.348895559311*x[51];
	rv += 154.81861346409*x[52];
	rv += 47.9482185242841*x[53];
	rv += 178.01500365671*x[54];
	rv += 197.299183634545*x[55];
	rv += 110.221327583974*x[56];
	rv += 276.335219124972*x[57];
	rv += 66.6367550739739*x[58];
	rv += 215.126920582161*x[59];
	rv += 251.865680365869*x[60];
	rv += 259.485555817488*x[61];
	rv += 325.903992788768*x[62];
	rv += 533.263861665761*x[63];
	rv += 365.289467328013*x[64];
	rv += 698.425848556873*x[65];
	rv += 342.854784735801*x[66];
	rv += 672.157315207286*x[67];
	rv += 278.522996301316*x[68];
	rv += 127.656852798454*x[69];
	rv += 302.312726976851*x[70];
	rv += 281.218053524739*x[71];
	rv += 629.708028128623*x[72];
	rv += 303.067014885745*x[73];
	rv += 662.424721658793*x[74];
	rv += 521.27200594153*x[75];
	rv += 313.6973235*x[76];
	rv += 136.4460104172*x[77];
	rv += 95.4447793733688*x[78];
	rv += 401.4402965*x[79];
	rv += 160.307673981768*x[80];
	rv += 107.445134115433*x[81];
	rv += 456.70672375*x[82];
	rv += 163.727629808624*x[83];
	rv += 103.975094190251*x[84];
	rv += 349.50038725*x[85];
	rv += 137.744259121245*x[86];
	rv += 91.7174793486262*x[87];
	;}

	if (wantfg & 2) {
	g[0] = 74750.0077392939;
	g[1] = 74750.0077392939;
	g[2] = 74750.0077392939;
	g[3] = 74750.0077392939;
	g[16] = 53.1533839248115;
	g[17] = 177.583181382496;
	g[18] = 80.6428266602653;
	g[19] = 231.95916447606;
	g[20] = 394.432428138298;
	g[21] = 444.974070084717;
	g[22] = 459.794817811195;
	g[23] = 695.629649483288;
	g[24] = 323.203981426319;
	g[25] = 107.360282998709;
	g[26] = 361.859887112392;
	g[27] = 367.306912008994;
	g[28] = 282.872191198352;
	g[29] = 44.0762253696262;
	g[30] = 317.877544418109;
	g[31] = 316.134390405973;
	g[32] = 100.330419683223;
	g[33] = 127.926900226391;
	g[34] = 139.263247551061;
	g[35] = 254.000222645919;
	g[36] = 194.145316904472;
	g[37] = 116.037290266393;
	g[38] = 222.112787515659;
	g[39] = 263.356262140469;
	g[40] = 571.289311491824;
	g[41] = 347.171110484916;
	g[42] = 646.58041890394;
	g[43] = 747.500077392939;
	g[44] = 267.180266374013;
	g[45] = 432.187536801291;
	g[46] = 223.193932764969;
	g[47] = 305.606281730255;
	g[48] = 484.148164648118;
	g[49] = 255.18826726263;
	g[50] = 500.409280467716;
	g[51] = 357.348895559311;
	g[52] = 154.81861346409;
	g[53] = 47.9482185242841;
	g[54] = 178.01500365671;
	g[55] = 197.299183634545;
	g[56] = 110.221327583974;
	g[57] = 276.335219124972;
	g[58] = 66.6367550739739;
	g[59] = 215.126920582161;
	g[60] = 251.865680365869;
	g[61] = 259.485555817488;
	g[62] = 325.903992788768;
	g[63] = 533.263861665761;
	g[64] = 365.289467328013;
	g[65] = 698.425848556873;
	g[66] = 342.854784735801;
	g[67] = 672.157315207286;
	g[68] = 278.522996301316;
	g[69] = 127.656852798454;
	g[70] = 302.312726976851;
	g[71] = 281.218053524739;
	g[72] = 629.708028128623;
	g[73] = 303.067014885745;
	g[74] = 662.424721658793;
	g[75] = 521.27200594153;
	g[76] = 313.6973235;
	g[77] = 136.4460104172;
	g[78] = 95.4447793733688;
	g[79] = 401.4402965;
	g[80] = 160.307673981768;
	g[81] = 107.445134115433;
	g[82] = 456.70672375;
	g[83] = 163.727629808624;
	g[84] = 103.975094190251;
	g[85] = 349.50038725;
	g[86] = 137.744259121245;
	g[87] = 91.7174793486262;
	}

	return rv;
}

 void
sssd15_04_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (sssd15_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd15_04_pd[0] = 1. / v[0];
	sssd15_04_pd[1] = -v[1] * sssd15_04_pd[0];
	v[0] = -v[1];
	t1 = v[0] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd15_04_pd[2] = 1. / v[0];
	sssd15_04_pd[3] = -v[1] * sssd15_04_pd[2];
	v[0] = -v[1];
	t1 = v[0] + x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd15_04_pd[4] = 1. / v[0];
	sssd15_04_pd[5] = -v[1] * sssd15_04_pd[4];
	v[0] = -v[1];
	t1 = v[0] + x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd15_04_pd[6] = 1. / v[0];
	sssd15_04_pd[7] = -v[1] * sssd15_04_pd[6];
	v[0] = -v[1];
	t1 = v[0] + x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd15_04_pd[8] = 1. / v[0];
	sssd15_04_pd[9] = -v[1] * sssd15_04_pd[8];
	v[0] = -v[1];
	t1 = v[0] + x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd15_04_pd[10] = 1. / v[0];
	sssd15_04_pd[11] = -v[1] * sssd15_04_pd[10];
	v[0] = -v[1];
	t1 = v[0] + x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd15_04_pd[12] = 1. / v[0];
	sssd15_04_pd[13] = -v[1] * sssd15_04_pd[12];
	v[0] = -v[1];
	t1 = v[0] + x[10];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd15_04_pd[14] = 1. / v[0];
	sssd15_04_pd[15] = -v[1] * sssd15_04_pd[14];
	v[0] = -v[1];
	t1 = v[0] + x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd15_04_pd[16] = 1. / v[0];
	sssd15_04_pd[17] = -v[1] * sssd15_04_pd[16];
	v[0] = -v[1];
	t1 = v[0] + x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd15_04_pd[18] = 1. / v[0];
	sssd15_04_pd[19] = -v[1] * sssd15_04_pd[18];
	v[0] = -v[1];
	t1 = v[0] + x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd15_04_pd[20] = 1. / v[0];
	sssd15_04_pd[21] = -v[1] * sssd15_04_pd[20];
	v[0] = -v[1];
	t1 = v[0] + x[14];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd15_04_pd[22] = 1. / v[0];
	sssd15_04_pd[23] = -v[1] * sssd15_04_pd[22];
	v[0] = -v[1];
	t1 = v[0] + x[15];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -3.22664386875*x[4];
	t1 += -6.4532877375*x[5];
	t1 += -9.67993160625*x[6];
	t1 += 0.609376132*x[16];
	t1 += 1.180016336*x[20];
	t1 += 0.967493052*x[24];
	t1 += 1.004918785*x[28];
	t1 += 0.698898063*x[32];
	t1 += 0.540292599*x[36];
	t1 += 1.460452986*x[40];
	t1 += 0.811980791*x[44];
	t1 += 0.973180988*x[48];
	t1 += 0.544914116*x[52];
	t1 += 0.78515855*x[56];
	t1 += 1.312281472*x[60];
	t1 += 1.346783152*x[64];
	t1 += 0.635811295*x[68];
	t1 += 1.327207817*x[72];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -3.1952881621875*x[7];
	t1 += -6.390576324375*x[8];
	t1 += -9.5858644865625*x[9];
	t1 += 0.609376132*x[17];
	t1 += 1.180016336*x[21];
	t1 += 0.967493052*x[25];
	t1 += 1.004918785*x[29];
	t1 += 0.698898063*x[33];
	t1 += 0.540292599*x[37];
	t1 += 1.460452986*x[41];
	t1 += 0.811980791*x[45];
	t1 += 0.973180988*x[49];
	t1 += 0.544914116*x[53];
	t1 += 0.78515855*x[57];
	t1 += 1.312281472*x[61];
	t1 += 1.346783152*x[65];
	t1 += 0.635811295*x[69];
	t1 += 1.327207817*x[73];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -2.6301391753125*x[10];
	t1 += -5.260278350625*x[11];
	t1 += -7.8904175259375*x[12];
	t1 += 0.609376132*x[18];
	t1 += 1.180016336*x[22];
	t1 += 0.967493052*x[26];
	t1 += 1.004918785*x[30];
	t1 += 0.698898063*x[34];
	t1 += 0.540292599*x[38];
	t1 += 1.460452986*x[42];
	t1 += 0.811980791*x[46];
	t1 += 0.973180988*x[50];
	t1 += 0.544914116*x[54];
	t1 += 0.78515855*x[58];
	t1 += 1.312281472*x[62];
	t1 += 1.346783152*x[66];
	t1 += 0.635811295*x[70];
	t1 += 1.327207817*x[74];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -2.6743241765625*x[13];
	t1 += -5.348648353125*x[14];
	t1 += -8.0229725296875*x[15];
	t1 += 0.609376132*x[19];
	t1 += 1.180016336*x[23];
	t1 += 0.967493052*x[27];
	t1 += 1.004918785*x[31];
	t1 += 0.698898063*x[35];
	t1 += 0.540292599*x[39];
	t1 += 1.460452986*x[43];
	t1 += 0.811980791*x[47];
	t1 += 0.973180988*x[51];
	t1 += 0.544914116*x[55];
	t1 += 0.78515855*x[59];
	t1 += 1.312281472*x[63];
	t1 += 1.346783152*x[67];
	t1 += 0.635811295*x[71];
	t1 += 1.327207817*x[75];
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
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[79];
	t1 += x[80];
	t1 += x[81];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[82];
	t1 += x[83];
	t1 += x[84];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[85];
	t1 += x[86];
	t1 += x[87];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[4];
	t1 += -x[76];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[5];
	t1 += -x[77];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[6];
	t1 += -x[78];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[7];
	t1 += -x[79];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[8];
	t1 += -x[80];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[9];
	t1 += -x[81];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[10];
	t1 += -x[82];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[11];
	t1 += -x[83];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[12];
	t1 += -x[84];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[13];
	t1 += -x[85];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[14];
	t1 += -x[86];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[15];
	t1 += -x[87];
	c[46] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -sssd15_04_pd[0];
	J[0] -= sssd15_04_pd[1];
	J[12] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -sssd15_04_pd[2];
	J[1] -= sssd15_04_pd[3];
	J[15] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -sssd15_04_pd[4];
	J[2] -= sssd15_04_pd[5];
	J[18] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -sssd15_04_pd[6];
	J[3] -= sssd15_04_pd[7];
	J[21] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = -sssd15_04_pd[8];
	J[4] -= sssd15_04_pd[9];
	J[24] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = -sssd15_04_pd[10];
	J[5] -= sssd15_04_pd[11];
	J[27] = 1.;

   /*** derivatives for constraint 7 ***/

	J[6] = -sssd15_04_pd[12];
	J[6] -= sssd15_04_pd[13];
	J[30] = 1.;

   /*** derivatives for constraint 8 ***/

	J[7] = -sssd15_04_pd[14];
	J[7] -= sssd15_04_pd[15];
	J[33] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = -sssd15_04_pd[16];
	J[8] -= sssd15_04_pd[17];
	J[36] = 1.;

   /*** derivatives for constraint 10 ***/

	J[9] = -sssd15_04_pd[18];
	J[9] -= sssd15_04_pd[19];
	J[39] = 1.;

   /*** derivatives for constraint 11 ***/

	J[10] = -sssd15_04_pd[20];
	J[10] -= sssd15_04_pd[21];
	J[42] = 1.;

   /*** derivatives for constraint 12 ***/

	J[11] = -sssd15_04_pd[22];
	J[11] -= sssd15_04_pd[23];
	J[45] = 1.;

   /*** derivatives for constraint 13 ***/

	J[13] = -3.22664386875;
	J[16] = -6.4532877375;
	J[19] = -9.67993160625;
	J[48] = 0.609376132;
	J[56] = 1.180016336;
	J[64] = 0.967493052;
	J[72] = 1.004918785;
	J[80] = 0.698898063;
	J[88] = 0.540292599;
	J[96] = 1.460452986;
	J[104] = 0.811980791;
	J[112] = 0.973180988;
	J[120] = 0.544914116;
	J[128] = 0.78515855;
	J[136] = 1.312281472;
	J[144] = 1.346783152;
	J[152] = 0.635811295;
	J[160] = 1.327207817;

   /*** derivatives for constraint 14 ***/

	J[22] = -3.1952881621875;
	J[25] = -6.390576324375;
	J[28] = -9.5858644865625;
	J[50] = 0.609376132;
	J[58] = 1.180016336;
	J[66] = 0.967493052;
	J[74] = 1.004918785;
	J[82] = 0.698898063;
	J[90] = 0.540292599;
	J[98] = 1.460452986;
	J[106] = 0.811980791;
	J[114] = 0.973180988;
	J[122] = 0.544914116;
	J[130] = 0.78515855;
	J[138] = 1.312281472;
	J[146] = 1.346783152;
	J[154] = 0.635811295;
	J[162] = 1.327207817;

   /*** derivatives for constraint 15 ***/

	J[31] = -2.6301391753125;
	J[34] = -5.260278350625;
	J[37] = -7.8904175259375;
	J[52] = 0.609376132;
	J[60] = 1.180016336;
	J[68] = 0.967493052;
	J[76] = 1.004918785;
	J[84] = 0.698898063;
	J[92] = 0.540292599;
	J[100] = 1.460452986;
	J[108] = 0.811980791;
	J[116] = 0.973180988;
	J[124] = 0.544914116;
	J[132] = 0.78515855;
	J[140] = 1.312281472;
	J[148] = 1.346783152;
	J[156] = 0.635811295;
	J[164] = 1.327207817;

   /*** derivatives for constraint 16 ***/

	J[40] = -2.6743241765625;
	J[43] = -5.348648353125;
	J[46] = -8.0229725296875;
	J[54] = 0.609376132;
	J[62] = 1.180016336;
	J[70] = 0.967493052;
	J[78] = 1.004918785;
	J[86] = 0.698898063;
	J[94] = 0.540292599;
	J[102] = 1.460452986;
	J[110] = 0.811980791;
	J[118] = 0.973180988;
	J[126] = 0.544914116;
	J[134] = 0.78515855;
	J[142] = 1.312281472;
	J[150] = 1.346783152;
	J[158] = 0.635811295;
	J[166] = 1.327207817;

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

	J[168] = 1.;
	J[170] = 1.;
	J[172] = 1.;

   /*** derivatives for constraint 33 ***/

	J[174] = 1.;
	J[176] = 1.;
	J[178] = 1.;

   /*** derivatives for constraint 34 ***/

	J[180] = 1.;
	J[182] = 1.;
	J[184] = 1.;

   /*** derivatives for constraint 35 ***/

	J[186] = 1.;
	J[188] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 36 ***/

	J[14] = 1.;
	J[169] = -1.;

   /*** derivatives for constraint 37 ***/

	J[17] = 1.;
	J[171] = -1.;

   /*** derivatives for constraint 38 ***/

	J[20] = 1.;
	J[173] = -1.;

   /*** derivatives for constraint 39 ***/

	J[23] = 1.;
	J[175] = -1.;

   /*** derivatives for constraint 40 ***/

	J[26] = 1.;
	J[177] = -1.;

   /*** derivatives for constraint 41 ***/

	J[29] = 1.;
	J[179] = -1.;

   /*** derivatives for constraint 42 ***/

	J[32] = 1.;
	J[181] = -1.;

   /*** derivatives for constraint 43 ***/

	J[35] = 1.;
	J[183] = -1.;

   /*** derivatives for constraint 44 ***/

	J[38] = 1.;
	J[185] = -1.;

   /*** derivatives for constraint 45 ***/

	J[41] = 1.;
	J[187] = -1.;

   /*** derivatives for constraint 46 ***/

	J[44] = 1.;
	J[189] = -1.;

   /*** derivatives for constraint 47 ***/

	J[47] = 1.;
	J[191] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
