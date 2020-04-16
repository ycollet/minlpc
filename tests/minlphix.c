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
 fint minlphix_auxcom_[1] = { 4 /* nlc */ };
 fint minlphix_funcom_[355] = {
	84 /* nvar */,
	1 /* nobj */,
	92 /* ncon */,
	264 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	25,
	28,
	31,
	33,
	35,
	38,
	41,
	44,
	47,
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
	76,
	81,
	86,
	91,
	93,
	95,
	97,
	99,
	108,
	117,
	125,
	133,
	136,
	139,
	142,
	145,
	149,
	153,
	157,
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
	214,
	219,
	224,
	229,
	232,
	235,
	238,
	241,
	245,
	249,
	253,
	257,
	259,
	261,
	263,
	265,

	/* rownos */
	1,
	5,
	24,
	44,
	48,
	52,
	2,
	6,
	25,
	45,
	49,
	53,
	3,
	7,
	26,
	46,
	50,
	54,
	4,
	8,
	27,
	47,
	51,
	55,
	18,
	19,
	20,
	17,
	19,
	21,
	18,
	22,
	17,
	23,
	32,
	38,
	60,
	33,
	39,
	61,
	34,
	36,
	62,
	35,
	37,
	63,
	36,
	64,
	37,
	65,
	38,
	66,
	39,
	67,
	36,
	68,
	37,
	69,
	38,
	70,
	39,
	71,
	32,
	72,
	33,
	73,
	34,
	74,
	35,
	75,
	5,
	40,
	48,
	54,
	56,
	6,
	41,
	49,
	55,
	57,
	7,
	42,
	50,
	52,
	58,
	8,
	43,
	51,
	53,
	59,
	1,
	5,
	2,
	6,
	3,
	7,
	4,
	8,
	5,
	9,
	13,
	20,
	44,
	76,
	81,
	82,
	89,
	6,
	10,
	14,
	21,
	45,
	77,
	80,
	82,
	90,
	7,
	11,
	15,
	22,
	46,
	78,
	81,
	91,
	8,
	12,
	16,
	23,
	47,
	79,
	80,
	92,
	28,
	36,
	76,
	29,
	37,
	77,
	30,
	38,
	78,
	31,
	39,
	79,
	24,
	28,
	32,
	76,
	25,
	29,
	33,
	77,
	26,
	30,
	34,
	78,
	27,
	31,
	35,
	79,
	1,
	9,
	2,
	10,
	3,
	11,
	4,
	12,
	1,
	13,
	2,
	14,
	3,
	15,
	4,
	16,
	9,
	48,
	10,
	49,
	11,
	50,
	12,
	51,
	9,
	48,
	10,
	49,
	11,
	50,
	12,
	51,
	13,
	24,
	14,
	25,
	15,
	26,
	16,
	27,
	13,
	24,
	14,
	25,
	15,
	26,
	16,
	27,
	52,
	60,
	87,
	89,
	91,
	53,
	61,
	88,
	90,
	92,
	54,
	62,
	87,
	89,
	91,
	55,
	63,
	88,
	90,
	92,
	64,
	83,
	89,
	65,
	84,
	90,
	66,
	85,
	91,
	67,
	86,
	92,
	56,
	68,
	83,
	89,
	57,
	69,
	84,
	90,
	58,
	70,
	85,
	91,
	59,
	71,
	86,
	92,
	72,
	89,
	73,
	90,
	74,
	91,
	75,
	92 };

 real minlphix_boundc_[1+168+184] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		326.,
		1.7e308,
		0.,
		304.,
		326.,
		1.7e308,
		0.,
		304.,
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
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-105.,
		-105.,
		-105.,
		-105.,
		-105.,
		-105.,
		-105.,
		-105.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
		-1.7e308,
		1500.,
		-1.7e308,
		1500.,
		-1.7e308,
		1500.,
		-1.7e308,
		1500.,
		-1.7e308,
		1500.,
		-1.7e308,
		1500.,
		-1.7e308,
		1500.,
		0.,
		0.,
		0.,
		0.,
		396.,
		396.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		24.7068,
		24.7068,
		20.54087,
		20.54087,
		2.239778,
		2.239778,
		29.766048,
		29.766048,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		411.,
		-1.7e308,
		411.,
		-1.7e308,
		411.,
		-1.7e308,
		411.,
		-1.7e308,
		1158.08,
		-1.7e308,
		1156.99,
		-1.7e308,
		1146.46,
		-1.7e308,
		1158.08,
		-341.95276,
		-341.95276,
		-347.9205,
		-347.9205,
		-355.03666,
		-355.03666,
		-334.4486,
		-334.4486,
		-1.7e308,
		1490.,
		-1.7e308,
		1490.,
		-1.7e308,
		1490.,
		-1.7e308,
		1490.,
		-1.7e308,
		1863.,
		-1.7e308,
		1863.,
		-1.7e308,
		1863.,
		-1.7e308,
		1863.,
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
		0.};

 real minlphix_x0comn_[84] = {
		326.,
		0.,
		326.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real minlphix_pd[56];
static real minlphix_old_x[84];
static int minlphix_xkind = -1;

 static int
minlphix_xcheck(real *x)
{
	real *x1 = minlphix_old_x, *xe = x + 84;
	errno = 0;
	if (minlphix_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	minlphix_xkind = 0;
	return 1;
	}
 real
minlphix_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[8], dv[36], rv;
	fint wantfg = *needfg;
	if (minlphix_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 0.003375 * x[0];
	minlphix_pd[16] = v[0] + -1.15398;
	minlphix_pd[17] = minlphix_pd[16] * x[4];
	v[0] = 0.4 * minlphix_pd[17];
	v[2] = 0.000893 * x[1];
	minlphix_pd[18] = v[2] + -0.30630793;
	minlphix_pd[19] = minlphix_pd[18] * x[5];
	v[2] = 0.4 * minlphix_pd[19];
	v[0] += v[2];
	v[2] = 0.004458 * x[2];
	minlphix_pd[20] = v[2] + -1.57608132;
	minlphix_pd[21] = minlphix_pd[20] * x[6];
	v[2] = 0.4 * minlphix_pd[21];
	v[0] += v[2];
	v[2] = 0.003176 * x[3];
	minlphix_pd[22] = v[2] + -1.08593792;
	minlphix_pd[23] = minlphix_pd[22] * x[7];
	v[2] = 0.4 * minlphix_pd[23];
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[8];
	v[6] = x[0] + 1.;
	v[7] = v[6] - x[26];
	v[6] = v[7] - x[32];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[7] = v[2] / v[6];
	minlphix_pd[24] = 1. / v[6];
	minlphix_pd[25] = -v[7] * minlphix_pd[24];
	v[7] *= 0.4;
	v[0] += v[7];
	v[7] = 31.8928571428571 * x[9];
	v[6] = x[1] + 1.;
	v[2] = v[6] - x[27];
	v[6] = v[2] - x[33];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[2] = v[7] / v[6];
	minlphix_pd[26] = 1. / v[6];
	minlphix_pd[27] = -v[2] * minlphix_pd[26];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[10];
	v[6] = x[2] + 1.;
	v[7] = v[6] - x[24];
	v[6] = v[7] - x[34];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[7] = v[2] / v[6];
	minlphix_pd[28] = 1. / v[6];
	minlphix_pd[29] = -v[7] * minlphix_pd[28];
	v[7] *= 0.4;
	v[0] += v[7];
	v[7] = 31.8928571428571 * x[11];
	v[6] = x[3] + 1.;
	v[2] = v[6] - x[25];
	v[6] = v[2] - x[35];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[2] = v[7] / v[6];
	minlphix_pd[30] = 1. / v[6];
	minlphix_pd[31] = -v[2] * minlphix_pd[30];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[20];
	v[6] = x[28] + 1.;
	v[7] = v[6] - x[32];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphix_pd[32] = 1. / v[7];
	minlphix_pd[33] = -v[6] * minlphix_pd[32];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[21];
	v[7] = x[29] + 1.;
	v[2] = v[7] - x[33];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[7] = v[6] / v[2];
	minlphix_pd[34] = 1. / v[2];
	minlphix_pd[35] = -v[7] * minlphix_pd[34];
	v[7] *= 0.4;
	v[0] += v[7];
	v[7] = 31.8928571428571 * x[22];
	v[2] = x[30] + 1.;
	v[6] = v[2] - x[34];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[2] = v[7] / v[6];
	minlphix_pd[36] = 1. / v[6];
	minlphix_pd[37] = -v[2] * minlphix_pd[36];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[23];
	v[6] = x[31] + 1.;
	v[7] = v[6] - x[35];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphix_pd[38] = 1. / v[7];
	minlphix_pd[39] = -v[6] * minlphix_pd[38];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[12];
	v[7] = 421. - x[24];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[2] = v[6] / v[7];
	minlphix_pd[40] = 1. / v[7];
	minlphix_pd[41] = -v[2] * minlphix_pd[40];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[13];
	v[7] = 421. - x[25];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphix_pd[42] = 1. / v[7];
	minlphix_pd[43] = -v[6] * minlphix_pd[42];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[14];
	v[7] = 421. - x[26];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[2] = v[6] / v[7];
	minlphix_pd[44] = 1. / v[7];
	minlphix_pd[45] = -v[2] * minlphix_pd[44];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[15];
	v[7] = 421. - x[27];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphix_pd[46] = 1. / v[7];
	minlphix_pd[47] = -v[6] * minlphix_pd[46];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[16];
	v[7] = 373. - x[24];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[2] = v[6] / v[7];
	minlphix_pd[48] = 1. / v[7];
	minlphix_pd[49] = -v[2] * minlphix_pd[48];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[17];
	v[7] = 373. - x[25];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphix_pd[50] = 1. / v[7];
	minlphix_pd[51] = -v[6] * minlphix_pd[50];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[18];
	v[7] = 373. - x[26];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[2] = v[6] / v[7];
	minlphix_pd[52] = 1. / v[7];
	minlphix_pd[53] = -v[2] * minlphix_pd[52];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[19];
	v[7] = 373. - x[27];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphix_pd[54] = 1. / v[7];
	minlphix_pd[55] = -v[6] * minlphix_pd[54];
	v[6] *= 0.4;
	v[0] += v[6];
	rv = v[0] + 12.95216*x[12];
	rv += 12.95216*x[13];
	rv += 12.95216*x[14];
	rv += 12.95216*x[15];
	rv += 4.75228*x[16];
	rv += 4.75228*x[17];
	rv += 4.75228*x[18];
	rv += 4.75228*x[19];
	rv += 2.418*x[20];
	rv += 2.418*x[21];
	rv += 2.418*x[22];
	rv += 2.418*x[23];
	rv += 60.45*x[32];
	rv += 72.0012*x[33];
	rv += 1.69144*x[34];
	rv += 85.368*x[35];
	rv += 1.3568*x[68];
	rv += 1.3568*x[69];
	rv += 1.3568*x[70];
	rv += 1.3568*x[71];
	rv += 1.3568*x[72];
	rv += 1.3568*x[73];
	rv += 1.3568*x[74];
	rv += 1.3568*x[75];
	rv += 1.3568*x[76];
	rv += 1.3568*x[77];
	rv += 1.3568*x[78];
	rv += 1.3568*x[79];
	rv += 1.3568*x[80];
	rv += 1.3568*x[81];
	rv += 1.3568*x[82];
	rv += 1.3568*x[83];
	;}

	if (wantfg & 2) {
	dv[0] = 0.4*minlphix_pd[55];
	dv[1] = 0.4*minlphix_pd[54];
	g[27] = -dv[0];
	g[19] = dv[1]*31.8928571428571 + 4.75228;
	dv[2] = 0.4*minlphix_pd[53];
	dv[3] = 0.4*minlphix_pd[52];
	g[26] = -dv[2];
	g[18] = dv[3]*31.8928571428571 + 4.75228;
	dv[4] = 0.4*minlphix_pd[51];
	dv[5] = 0.4*minlphix_pd[50];
	g[25] = -dv[4];
	g[17] = dv[5]*31.8928571428571 + 4.75228;
	dv[6] = 0.4*minlphix_pd[49];
	dv[7] = 0.4*minlphix_pd[48];
	g[24] = -dv[6];
	g[16] = dv[7]*31.8928571428571 + 4.75228;
	dv[8] = 0.4*minlphix_pd[47];
	dv[9] = 0.4*minlphix_pd[46];
	g[27] -= dv[8];
	g[15] = dv[9]*31.8928571428571 + 12.95216;
	dv[10] = 0.4*minlphix_pd[45];
	dv[11] = 0.4*minlphix_pd[44];
	g[26] -= dv[10];
	g[14] = dv[11]*31.8928571428571 + 12.95216;
	dv[12] = 0.4*minlphix_pd[43];
	dv[13] = 0.4*minlphix_pd[42];
	g[25] -= dv[12];
	g[13] = dv[13]*31.8928571428571 + 12.95216;
	dv[14] = 0.4*minlphix_pd[41];
	dv[15] = 0.4*minlphix_pd[40];
	g[24] -= dv[14];
	g[12] = dv[15]*31.8928571428571 + 12.95216;
	dv[16] = 0.4*minlphix_pd[39];
	dv[17] = 0.4*minlphix_pd[38];
	g[35] = -dv[16] + 85.368;
	g[31] = dv[16];
	g[23] = dv[17]*31.8928571428571 + 2.418;
	dv[18] = 0.4*minlphix_pd[37];
	dv[19] = 0.4*minlphix_pd[36];
	g[34] = -dv[18] + 1.69144;
	g[30] = dv[18];
	g[22] = dv[19]*31.8928571428571 + 2.418;
	dv[20] = 0.4*minlphix_pd[35];
	dv[21] = 0.4*minlphix_pd[34];
	g[33] = -dv[20] + 72.0012;
	g[29] = dv[20];
	g[21] = dv[21]*31.8928571428571 + 2.418;
	dv[22] = 0.4*minlphix_pd[33];
	dv[23] = 0.4*minlphix_pd[32];
	g[32] = -dv[22] + 60.45;
	g[28] = dv[22];
	g[20] = dv[23]*31.8928571428571 + 2.418;
	dv[24] = 0.4*minlphix_pd[31];
	dv[25] = 0.4*minlphix_pd[30];
	g[35] -= dv[24];
	g[25] -= dv[24];
	g[3] = dv[24];
	g[11] = dv[25]*31.8928571428571;
	dv[26] = 0.4*minlphix_pd[29];
	dv[27] = 0.4*minlphix_pd[28];
	g[34] -= dv[26];
	g[24] -= dv[26];
	g[2] = dv[26];
	g[10] = dv[27]*31.8928571428571;
	dv[28] = 0.4*minlphix_pd[27];
	dv[29] = 0.4*minlphix_pd[26];
	g[33] -= dv[28];
	g[27] -= dv[28];
	g[1] = dv[28];
	g[9] = dv[29]*31.8928571428571;
	dv[30] = 0.4*minlphix_pd[25];
	dv[31] = 0.4*minlphix_pd[24];
	g[32] -= dv[30];
	g[26] -= dv[30];
	g[0] = dv[30];
	g[8] = dv[31]*31.8928571428571;
	g[7] = 0.4*minlphix_pd[22];
	dv[32] = 0.4*x[7];
	g[3] += dv[32]*0.003176;
	g[6] = 0.4*minlphix_pd[20];
	dv[33] = 0.4*x[6];
	g[2] += dv[33]*0.004458;
	g[5] = 0.4*minlphix_pd[18];
	dv[34] = 0.4*x[5];
	g[1] += dv[34]*0.000893;
	g[4] = 0.4*minlphix_pd[16];
	dv[35] = 0.4*x[4];
	g[0] += dv[35]*0.003375;
	g[68] = 1.3568;
	g[69] = 1.3568;
	g[70] = 1.3568;
	g[71] = 1.3568;
	g[72] = 1.3568;
	g[73] = 1.3568;
	g[74] = 1.3568;
	g[75] = 1.3568;
	g[76] = 1.3568;
	g[77] = 1.3568;
	g[78] = 1.3568;
	g[79] = 1.3568;
	g[80] = 1.3568;
	g[81] = 1.3568;
	g[82] = 1.3568;
	g[83] = 1.3568;
	}

	return rv;
}

 void
minlphix_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (minlphix_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	minlphix_pd[1] = x[0] + -305.;
	minlphix_pd[0] = x[0] + -325.;
	v[2] = minlphix_pd[1] * minlphix_pd[0];
	minlphix_pd[2] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (minlphix_pd[2] <= 0.) {
	domain_("sqrt'", &minlphix_pd[2], 5L);
	}
	minlphix_pd[3] = 0.5 / minlphix_pd[2];
	v[2] = -0.666666666666667 * minlphix_pd[2];
	t1 = v[2] + -0.333333333333333*x[0];
	t1 += x[28];
	t1 += -x[44];
	t1 += x[48];
	c[0] = t1;

  /***  constraint 2  ***/

	minlphix_pd[5] = x[1] + -305.;
	minlphix_pd[4] = x[1] + -325.;
	v[2] = minlphix_pd[5] * minlphix_pd[4];
	minlphix_pd[6] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (minlphix_pd[6] <= 0.) {
	domain_("sqrt'", &minlphix_pd[6], 5L);
	}
	minlphix_pd[7] = 0.5 / minlphix_pd[6];
	v[2] = -0.666666666666667 * minlphix_pd[6];
	t1 = v[2] + -0.333333333333333*x[1];
	t1 += x[29];
	t1 += -x[45];
	t1 += x[49];
	c[1] = t1;

  /***  constraint 3  ***/

	minlphix_pd[9] = x[2] + -305.;
	minlphix_pd[8] = x[2] + -325.;
	v[2] = minlphix_pd[9] * minlphix_pd[8];
	minlphix_pd[10] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (minlphix_pd[10] <= 0.) {
	domain_("sqrt'", &minlphix_pd[10], 5L);
	}
	minlphix_pd[11] = 0.5 / minlphix_pd[10];
	v[2] = -0.666666666666667 * minlphix_pd[10];
	t1 = v[2] + -0.333333333333333*x[2];
	t1 += x[30];
	t1 += -x[46];
	t1 += x[50];
	c[2] = t1;

  /***  constraint 4  ***/

	minlphix_pd[13] = x[3] + -305.;
	minlphix_pd[12] = x[3] + -325.;
	v[2] = minlphix_pd[13] * minlphix_pd[12];
	minlphix_pd[14] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (minlphix_pd[14] <= 0.) {
	domain_("sqrt'", &minlphix_pd[14], 5L);
	}
	minlphix_pd[15] = 0.5 / minlphix_pd[14];
	v[2] = -0.666666666666667 * minlphix_pd[14];
	t1 = v[2] + -0.333333333333333*x[3];
	t1 += x[31];
	t1 += -x[47];
	t1 += x[51];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[24];
	t1 += x[28];
	t1 += -1500.*x[32];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += x[25];
	t1 += x[29];
	t1 += -1500.*x[33];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += x[26];
	t1 += x[30];
	t1 += -1500.*x[34];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[3];
	t1 += x[27];
	t1 += x[31];
	t1 += -1500.*x[35];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 1500.*x[32];
	t1 += x[44];
	t1 += x[52];
	t1 += x[56];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 1500.*x[33];
	t1 += x[45];
	t1 += x[53];
	t1 += x[57];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 1500.*x[34];
	t1 += x[46];
	t1 += x[54];
	t1 += x[58];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 1500.*x[35];
	t1 += x[47];
	t1 += x[55];
	t1 += x[59];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 1500.*x[32];
	t1 += x[48];
	t1 += x[60];
	t1 += x[64];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 1500.*x[33];
	t1 += x[49];
	t1 += x[61];
	t1 += x[65];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 1500.*x[34];
	t1 += x[50];
	t1 += x[62];
	t1 += x[66];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 1500.*x[35];
	t1 += x[51];
	t1 += x[63];
	t1 += x[67];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = 0.9*x[5];
	t1 += -x[7];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 0.2*x[4];
	t1 += -x[6];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[4];
	t1 += x[5];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[4];
	t1 += -1500.*x[32];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[5];
	t1 += -1500.*x[33];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[6];
	t1 += -1500.*x[34];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[7];
	t1 += -1500.*x[35];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -0.0225*x[0];
	t1 += x[40];
	t1 += -x[60];
	t1 += x[64];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.013*x[1];
	t1 += x[41];
	t1 += -x[61];
	t1 += x[65];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.0043*x[2];
	t1 += x[42];
	t1 += -x[62];
	t1 += x[66];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -0.0156*x[3];
	t1 += x[43];
	t1 += -x[63];
	t1 += x[67];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[36];
	t1 += -x[40];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[37];
	t1 += -x[41];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[38];
	t1 += -x[42];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[39];
	t1 += -x[43];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[8];
	t1 += -x[20];
	t1 += x[40];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[9];
	t1 += -x[21];
	t1 += x[41];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[10];
	t1 += -x[22];
	t1 += x[42];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[11];
	t1 += -x[23];
	t1 += x[43];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[10];
	t1 += -x[12];
	t1 += -x[16];
	t1 += x[36];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[11];
	t1 += -x[13];
	t1 += -x[17];
	t1 += x[37];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[8];
	t1 += -x[14];
	t1 += -x[18];
	t1 += x[38];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[9];
	t1 += -x[15];
	t1 += -x[19];
	t1 += x[39];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[24];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[25];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[26];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[27];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[0];
	t1 += 1500.*x[32];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[1];
	t1 += 1500.*x[33];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[2];
	t1 += 1500.*x[34];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[3];
	t1 += 1500.*x[35];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -1.028*x[0];
	t1 += x[24];
	t1 += -x[52];
	t1 += x[56];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -1.05*x[1];
	t1 += x[25];
	t1 += -x[53];
	t1 += x[57];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -1.029*x[2];
	t1 += x[26];
	t1 += -x[54];
	t1 += x[58];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -1.005*x[3];
	t1 += x[27];
	t1 += -x[55];
	t1 += x[59];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[0];
	t1 += x[26];
	t1 += 1500.*x[68];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[1];
	t1 += x[27];
	t1 += 1500.*x[69];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[2];
	t1 += x[24];
	t1 += 1500.*x[70];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[3];
	t1 += x[25];
	t1 += 1500.*x[71];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[24];
	t1 += 1500.*x[76];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[25];
	t1 += 1500.*x[77];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[26];
	t1 += 1500.*x[78];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[27];
	t1 += 1500.*x[79];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[8];
	t1 += -1500.*x[68];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[9];
	t1 += -1500.*x[69];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[10];
	t1 += -1500.*x[70];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[11];
	t1 += -1500.*x[71];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[12];
	t1 += -1500.*x[72];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[13];
	t1 += -1500.*x[73];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[14];
	t1 += -1500.*x[74];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[15];
	t1 += -1500.*x[75];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[16];
	t1 += -1500.*x[76];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[17];
	t1 += -1500.*x[77];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[18];
	t1 += -1500.*x[78];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[19];
	t1 += -1500.*x[79];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[20];
	t1 += -1500.*x[80];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[21];
	t1 += -1500.*x[81];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[22];
	t1 += -1500.*x[82];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[23];
	t1 += -1500.*x[83];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -1500.*x[32];
	t1 += x[36];
	t1 += x[40];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -1500.*x[33];
	t1 += x[37];
	t1 += x[41];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -1500.*x[34];
	t1 += x[38];
	t1 += x[42];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -1500.*x[35];
	t1 += x[39];
	t1 += x[43];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[33];
	t1 += -x[35];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[32];
	t1 += -x[34];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[32];
	t1 += x[33];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[72];
	t1 += x[76];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[73];
	t1 += x[77];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[74];
	t1 += x[78];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[75];
	t1 += x[79];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[68];
	t1 += x[70];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[69];
	t1 += x[71];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = -20.*x[32];
	t1 += x[68];
	t1 += x[70];
	t1 += x[72];
	t1 += x[76];
	t1 += x[80];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = -20.*x[33];
	t1 += x[69];
	t1 += x[71];
	t1 += x[73];
	t1 += x[77];
	t1 += x[81];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = -20.*x[34];
	t1 += x[68];
	t1 += x[70];
	t1 += x[74];
	t1 += x[78];
	t1 += x[82];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = -20.*x[35];
	t1 += x[69];
	t1 += x[71];
	t1 += x[75];
	t1 += x[79];
	t1 += x[83];
	c[91] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -0.666666666666667*minlphix_pd[3];
	dv[1] = dv[0]*minlphix_pd[1];
	dv[0] *= minlphix_pd[0];
	J[0] = dv[1] + -0.333333333333333;
	J[0] += dv[0];
	J[90] = 1.;
	J[160] = -1.;
	J[168] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -0.666666666666667*minlphix_pd[7];
	dv[1] = dv[0]*minlphix_pd[5];
	dv[0] *= minlphix_pd[4];
	J[6] = dv[1] + -0.333333333333333;
	J[6] += dv[0];
	J[92] = 1.;
	J[162] = -1.;
	J[170] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -0.666666666666667*minlphix_pd[11];
	dv[1] = dv[0]*minlphix_pd[9];
	dv[0] *= minlphix_pd[8];
	J[12] = dv[1] + -0.333333333333333;
	J[12] += dv[0];
	J[94] = 1.;
	J[164] = -1.;
	J[172] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -0.666666666666667*minlphix_pd[15];
	dv[1] = dv[0]*minlphix_pd[13];
	dv[0] *= minlphix_pd[12];
	J[18] = dv[1] + -0.333333333333333;
	J[18] += dv[0];
	J[96] = 1.;
	J[166] = -1.;
	J[174] = 1.;

   /*** derivatives for constraint 5 ***/

	J[1] = 1.;
	J[70] = 1.;
	J[91] = 1.;
	J[98] = -1500.;

   /*** derivatives for constraint 6 ***/

	J[7] = 1.;
	J[75] = 1.;
	J[93] = 1.;
	J[107] = -1500.;

   /*** derivatives for constraint 7 ***/

	J[13] = 1.;
	J[80] = 1.;
	J[95] = 1.;
	J[116] = -1500.;

   /*** derivatives for constraint 8 ***/

	J[19] = 1.;
	J[85] = 1.;
	J[97] = 1.;
	J[124] = -1500.;

   /*** derivatives for constraint 9 ***/

	J[99] = 1500.;
	J[161] = 1.;
	J[176] = 1.;
	J[184] = 1.;

   /*** derivatives for constraint 10 ***/

	J[108] = 1500.;
	J[163] = 1.;
	J[178] = 1.;
	J[186] = 1.;

   /*** derivatives for constraint 11 ***/

	J[117] = 1500.;
	J[165] = 1.;
	J[180] = 1.;
	J[188] = 1.;

   /*** derivatives for constraint 12 ***/

	J[125] = 1500.;
	J[167] = 1.;
	J[182] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 13 ***/

	J[100] = 1500.;
	J[169] = 1.;
	J[192] = 1.;
	J[200] = 1.;

   /*** derivatives for constraint 14 ***/

	J[109] = 1500.;
	J[171] = 1.;
	J[194] = 1.;
	J[202] = 1.;

   /*** derivatives for constraint 15 ***/

	J[118] = 1500.;
	J[173] = 1.;
	J[196] = 1.;
	J[204] = 1.;

   /*** derivatives for constraint 16 ***/

	J[126] = 1500.;
	J[175] = 1.;
	J[198] = 1.;
	J[206] = 1.;

   /*** derivatives for constraint 17 ***/

	J[27] = 0.9;
	J[32] = -1.;

   /*** derivatives for constraint 18 ***/

	J[24] = 0.2;
	J[30] = -1.;

   /*** derivatives for constraint 19 ***/

	J[25] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 20 ***/

	J[26] = 1.;
	J[101] = -1500.;

   /*** derivatives for constraint 21 ***/

	J[29] = 1.;
	J[110] = -1500.;

   /*** derivatives for constraint 22 ***/

	J[31] = 1.;
	J[119] = -1500.;

   /*** derivatives for constraint 23 ***/

	J[33] = 1.;
	J[127] = -1500.;

   /*** derivatives for constraint 24 ***/

	J[2] = -0.0225;
	J[144] = 1.;
	J[193] = -1.;
	J[201] = 1.;

   /*** derivatives for constraint 25 ***/

	J[8] = -0.013;
	J[148] = 1.;
	J[195] = -1.;
	J[203] = 1.;

   /*** derivatives for constraint 26 ***/

	J[14] = -0.0043;
	J[152] = 1.;
	J[197] = -1.;
	J[205] = 1.;

   /*** derivatives for constraint 27 ***/

	J[20] = -0.0156;
	J[156] = 1.;
	J[199] = -1.;
	J[207] = 1.;

   /*** derivatives for constraint 28 ***/

	J[132] = 1.;
	J[145] = -1.;

   /*** derivatives for constraint 29 ***/

	J[135] = 1.;
	J[149] = -1.;

   /*** derivatives for constraint 30 ***/

	J[138] = 1.;
	J[153] = -1.;

   /*** derivatives for constraint 31 ***/

	J[141] = 1.;
	J[157] = -1.;

   /*** derivatives for constraint 32 ***/

	J[34] = -1.;
	J[62] = -1.;
	J[146] = 1.;

   /*** derivatives for constraint 33 ***/

	J[37] = -1.;
	J[64] = -1.;
	J[150] = 1.;

   /*** derivatives for constraint 34 ***/

	J[40] = -1.;
	J[66] = -1.;
	J[154] = 1.;

   /*** derivatives for constraint 35 ***/

	J[43] = -1.;
	J[68] = -1.;
	J[158] = 1.;

   /*** derivatives for constraint 36 ***/

	J[41] = -1.;
	J[46] = -1.;
	J[54] = -1.;
	J[133] = 1.;

   /*** derivatives for constraint 37 ***/

	J[44] = -1.;
	J[48] = -1.;
	J[56] = -1.;
	J[136] = 1.;

   /*** derivatives for constraint 38 ***/

	J[35] = -1.;
	J[50] = -1.;
	J[58] = -1.;
	J[139] = 1.;

   /*** derivatives for constraint 39 ***/

	J[38] = -1.;
	J[52] = -1.;
	J[60] = -1.;
	J[142] = 1.;

   /*** derivatives for constraint 40 ***/

	J[71] = 1.;

   /*** derivatives for constraint 41 ***/

	J[76] = 1.;

   /*** derivatives for constraint 42 ***/

	J[81] = 1.;

   /*** derivatives for constraint 43 ***/

	J[86] = 1.;

   /*** derivatives for constraint 44 ***/

	J[3] = -1.;
	J[102] = 1500.;

   /*** derivatives for constraint 45 ***/

	J[9] = -1.;
	J[111] = 1500.;

   /*** derivatives for constraint 46 ***/

	J[15] = -1.;
	J[120] = 1500.;

   /*** derivatives for constraint 47 ***/

	J[21] = -1.;
	J[128] = 1500.;

   /*** derivatives for constraint 48 ***/

	J[4] = -1.028;
	J[72] = 1.;
	J[177] = -1.;
	J[185] = 1.;

   /*** derivatives for constraint 49 ***/

	J[10] = -1.05;
	J[77] = 1.;
	J[179] = -1.;
	J[187] = 1.;

   /*** derivatives for constraint 50 ***/

	J[16] = -1.029;
	J[82] = 1.;
	J[181] = -1.;
	J[189] = 1.;

   /*** derivatives for constraint 51 ***/

	J[22] = -1.005;
	J[87] = 1.;
	J[183] = -1.;
	J[191] = 1.;

   /*** derivatives for constraint 52 ***/

	J[5] = -1.;
	J[83] = 1.;
	J[208] = 1500.;

   /*** derivatives for constraint 53 ***/

	J[11] = -1.;
	J[88] = 1.;
	J[213] = 1500.;

   /*** derivatives for constraint 54 ***/

	J[17] = -1.;
	J[73] = 1.;
	J[218] = 1500.;

   /*** derivatives for constraint 55 ***/

	J[23] = -1.;
	J[78] = 1.;
	J[223] = 1500.;

   /*** derivatives for constraint 56 ***/

	J[74] = 1.;
	J[240] = 1500.;

   /*** derivatives for constraint 57 ***/

	J[79] = 1.;
	J[244] = 1500.;

   /*** derivatives for constraint 58 ***/

	J[84] = 1.;
	J[248] = 1500.;

   /*** derivatives for constraint 59 ***/

	J[89] = 1.;
	J[252] = 1500.;

   /*** derivatives for constraint 60 ***/

	J[36] = 1.;
	J[209] = -1500.;

   /*** derivatives for constraint 61 ***/

	J[39] = 1.;
	J[214] = -1500.;

   /*** derivatives for constraint 62 ***/

	J[42] = 1.;
	J[219] = -1500.;

   /*** derivatives for constraint 63 ***/

	J[45] = 1.;
	J[224] = -1500.;

   /*** derivatives for constraint 64 ***/

	J[47] = 1.;
	J[228] = -1500.;

   /*** derivatives for constraint 65 ***/

	J[49] = 1.;
	J[231] = -1500.;

   /*** derivatives for constraint 66 ***/

	J[51] = 1.;
	J[234] = -1500.;

   /*** derivatives for constraint 67 ***/

	J[53] = 1.;
	J[237] = -1500.;

   /*** derivatives for constraint 68 ***/

	J[55] = 1.;
	J[241] = -1500.;

   /*** derivatives for constraint 69 ***/

	J[57] = 1.;
	J[245] = -1500.;

   /*** derivatives for constraint 70 ***/

	J[59] = 1.;
	J[249] = -1500.;

   /*** derivatives for constraint 71 ***/

	J[61] = 1.;
	J[253] = -1500.;

   /*** derivatives for constraint 72 ***/

	J[63] = 1.;
	J[256] = -1500.;

   /*** derivatives for constraint 73 ***/

	J[65] = 1.;
	J[258] = -1500.;

   /*** derivatives for constraint 74 ***/

	J[67] = 1.;
	J[260] = -1500.;

   /*** derivatives for constraint 75 ***/

	J[69] = 1.;
	J[262] = -1500.;

   /*** derivatives for constraint 76 ***/

	J[103] = -1500.;
	J[134] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 77 ***/

	J[112] = -1500.;
	J[137] = 1.;
	J[151] = 1.;

   /*** derivatives for constraint 78 ***/

	J[121] = -1500.;
	J[140] = 1.;
	J[155] = 1.;

   /*** derivatives for constraint 79 ***/

	J[129] = -1500.;
	J[143] = 1.;
	J[159] = 1.;

   /*** derivatives for constraint 80 ***/

	J[113] = 1.;
	J[130] = -1.;

   /*** derivatives for constraint 81 ***/

	J[104] = 1.;
	J[122] = -1.;

   /*** derivatives for constraint 82 ***/

	J[105] = 1.;
	J[114] = 1.;

   /*** derivatives for constraint 83 ***/

	J[229] = 1.;
	J[242] = 1.;

   /*** derivatives for constraint 84 ***/

	J[232] = 1.;
	J[246] = 1.;

   /*** derivatives for constraint 85 ***/

	J[235] = 1.;
	J[250] = 1.;

   /*** derivatives for constraint 86 ***/

	J[238] = 1.;
	J[254] = 1.;

   /*** derivatives for constraint 87 ***/

	J[210] = 1.;
	J[220] = 1.;

   /*** derivatives for constraint 88 ***/

	J[215] = 1.;
	J[225] = 1.;

   /*** derivatives for constraint 89 ***/

	J[106] = -20.;
	J[211] = 1.;
	J[221] = 1.;
	J[230] = 1.;
	J[243] = 1.;
	J[257] = 1.;

   /*** derivatives for constraint 90 ***/

	J[115] = -20.;
	J[216] = 1.;
	J[226] = 1.;
	J[233] = 1.;
	J[247] = 1.;
	J[259] = 1.;

   /*** derivatives for constraint 91 ***/

	J[123] = -20.;
	J[212] = 1.;
	J[222] = 1.;
	J[236] = 1.;
	J[251] = 1.;
	J[261] = 1.;

   /*** derivatives for constraint 92 ***/

	J[131] = -20.;
	J[217] = 1.;
	J[227] = 1.;
	J[239] = 1.;
	J[255] = 1.;
	J[263] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
