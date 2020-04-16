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
 fint minlphi_auxcom_[1] = { 4 /* nlc */ };
 fint minlphi_funcom_[245] = {
	64 /* nvar */,
	1 /* nobj */,
	79 /* ncon */,
	174 /* nzc */,
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
	102,
	105,
	108,
	111,
	115,
	119,
	123,
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

	/* rownos */
	1,
	13,
	24,
	40,
	48,
	52,
	2,
	14,
	25,
	41,
	49,
	53,
	3,
	15,
	26,
	42,
	50,
	54,
	4,
	16,
	27,
	43,
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
	13,
	44,
	48,
	54,
	56,
	14,
	45,
	49,
	55,
	57,
	15,
	46,
	50,
	52,
	58,
	16,
	47,
	51,
	53,
	59,
	1,
	13,
	2,
	14,
	3,
	15,
	4,
	16,
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
	5,
	2,
	6,
	3,
	7,
	4,
	8,
	1,
	9,
	2,
	10,
	3,
	11,
	4,
	12,
	5,
	48,
	6,
	49,
	7,
	50,
	8,
	51,
	5,
	48,
	6,
	49,
	7,
	50,
	8,
	51,
	9,
	24,
	10,
	25,
	11,
	26,
	12,
	27,
	9,
	24,
	10,
	25,
	11,
	26,
	12,
	27 };

 real minlphi_boundc_[1+128+158] /* Infinity, variable bounds, constraint bounds */ = {
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
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
		-1.7e308,
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
		-1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		396.,
		396.,
		-1.7e308,
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
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
		-341.92,
		-1.7e308,
		1156.99,
		-1.7e308,
		-353.54,
		-1.7e308,
		1158.08,
		-1.7e308,
		411.,
		-1.7e308,
		411.,
		-1.7e308,
		411.,
		-1.7e308,
		411.,
		-341.95276,
		-341.95276,
		-347.9205,
		-347.9205,
		-355.03666,
		-355.03666,
		-334.4486,
		-334.4486,
		-1.7e308,
		-10.,
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
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
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
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
		-1.7e308,
		0.,
		-1.7e308,
		1500.,
		-1.7e308,
		0.};

 real minlphi_x0comn_[64] = {
		390.,
		0.,
		360.,
		0.,
		396.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		410.,
		0.,
		380.,
		0.,
		76.,
		1.,
		26.,
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
		0. };

 static real minlphi_pd[56];
static real minlphi_old_x[64];
static int minlphi_xkind = -1;

 static int
minlphi_xcheck(real *x)
{
	real *x1 = minlphi_old_x, *xe = x + 64;
	errno = 0;
	if (minlphi_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	minlphi_xkind = 0;
	return 1;
	}
 real
minlphi_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[8], dv[34], rv;
	fint wantfg = *needfg;
	if (minlphi_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 0.003375 * x[0];
	minlphi_pd[16] = v[0] + -1.15398;
	minlphi_pd[17] = minlphi_pd[16] * x[4];
	v[0] = 0.4 * minlphi_pd[17];
	v[2] = 0.000893 * x[1];
	minlphi_pd[18] = v[2] + -0.30630793;
	minlphi_pd[19] = minlphi_pd[18] * x[5];
	v[2] = 0.4 * minlphi_pd[19];
	v[0] += v[2];
	v[2] = 0.004458 * x[2];
	minlphi_pd[20] = v[2] + -1.57608132;
	minlphi_pd[21] = minlphi_pd[20] * x[6];
	v[2] = 0.4 * minlphi_pd[21];
	v[0] += v[2];
	v[2] = 0.003176 * x[3];
	minlphi_pd[22] = v[2] + -1.08593792;
	minlphi_pd[23] = minlphi_pd[22] * x[7];
	v[2] = 0.4 * minlphi_pd[23];
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[8];
	v[6] = x[0] - x[26];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[7] = v[2] / v[6];
	minlphi_pd[24] = 1. / v[6];
	minlphi_pd[25] = -v[7] * minlphi_pd[24];
	v[7] *= 0.4;
	v[0] += v[7];
	v[7] = 31.8928571428571 * x[9];
	v[6] = x[1] + 1.;
	v[2] = v[6] - x[27];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[6] = v[7] / v[2];
	minlphi_pd[26] = 1. / v[2];
	minlphi_pd[27] = -v[6] * minlphi_pd[26];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[10];
	v[2] = x[2] - x[24];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[7] = v[6] / v[2];
	minlphi_pd[28] = 1. / v[2];
	minlphi_pd[29] = -v[7] * minlphi_pd[28];
	v[7] *= 0.4;
	v[0] += v[7];
	v[7] = 31.8928571428571 * x[11];
	v[2] = x[3] + 1.;
	v[6] = v[2] - x[25];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[2] = v[7] / v[6];
	minlphi_pd[30] = 1. / v[6];
	minlphi_pd[31] = -v[2] * minlphi_pd[30];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[20];
	if (x[28] == 0.) {
	zerdiv_(&x[28]);	}
	v[6] = v[2] / x[28];
	minlphi_pd[32] = 1. / x[28];
	minlphi_pd[33] = -v[6] * minlphi_pd[32];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[21];
	v[2] = x[29] + 1.;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[7] = v[6] / v[2];
	minlphi_pd[34] = 1. / v[2];
	minlphi_pd[35] = -v[7] * minlphi_pd[34];
	v[7] *= 0.4;
	v[0] += v[7];
	v[7] = 31.8928571428571 * x[22];
	if (x[30] == 0.) {
	zerdiv_(&x[30]);	}
	v[2] = v[7] / x[30];
	minlphi_pd[36] = 1. / x[30];
	minlphi_pd[37] = -v[2] * minlphi_pd[36];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[23];
	v[7] = x[31] + 1.;
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphi_pd[38] = 1. / v[7];
	minlphi_pd[39] = -v[6] * minlphi_pd[38];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[12];
	v[7] = 421. - x[24];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[2] = v[6] / v[7];
	minlphi_pd[40] = 1. / v[7];
	minlphi_pd[41] = -v[2] * minlphi_pd[40];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[13];
	v[7] = 421. - x[25];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphi_pd[42] = 1. / v[7];
	minlphi_pd[43] = -v[6] * minlphi_pd[42];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[14];
	v[7] = 421. - x[26];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[2] = v[6] / v[7];
	minlphi_pd[44] = 1. / v[7];
	minlphi_pd[45] = -v[2] * minlphi_pd[44];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[15];
	v[7] = 421. - x[27];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphi_pd[46] = 1. / v[7];
	minlphi_pd[47] = -v[6] * minlphi_pd[46];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[16];
	v[7] = 373. - x[24];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[2] = v[6] / v[7];
	minlphi_pd[48] = 1. / v[7];
	minlphi_pd[49] = -v[2] * minlphi_pd[48];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[17];
	v[7] = 373. - x[25];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphi_pd[50] = 1. / v[7];
	minlphi_pd[51] = -v[6] * minlphi_pd[50];
	v[6] *= 0.4;
	v[0] += v[6];
	v[6] = 31.8928571428571 * x[18];
	v[7] = 373. - x[26];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[2] = v[6] / v[7];
	minlphi_pd[52] = 1. / v[7];
	minlphi_pd[53] = -v[2] * minlphi_pd[52];
	v[2] *= 0.4;
	v[0] += v[2];
	v[2] = 31.8928571428571 * x[19];
	v[7] = 373. - x[27];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = v[2] / v[7];
	minlphi_pd[54] = 1. / v[7];
	minlphi_pd[55] = -v[6] * minlphi_pd[54];
	v[6] *= 0.4;
	v[0] += v[6];
	v[0] += 67.56864;
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
	;}

	if (wantfg & 2) {
	dv[0] = 0.4*minlphi_pd[55];
	dv[1] = 0.4*minlphi_pd[54];
	g[27] = -dv[0];
	g[19] = dv[1]*31.8928571428571 + 4.75228;
	dv[2] = 0.4*minlphi_pd[53];
	dv[3] = 0.4*minlphi_pd[52];
	g[26] = -dv[2];
	g[18] = dv[3]*31.8928571428571 + 4.75228;
	dv[4] = 0.4*minlphi_pd[51];
	dv[5] = 0.4*minlphi_pd[50];
	g[25] = -dv[4];
	g[17] = dv[5]*31.8928571428571 + 4.75228;
	dv[6] = 0.4*minlphi_pd[49];
	dv[7] = 0.4*minlphi_pd[48];
	g[24] = -dv[6];
	g[16] = dv[7]*31.8928571428571 + 4.75228;
	dv[8] = 0.4*minlphi_pd[47];
	dv[9] = 0.4*minlphi_pd[46];
	g[27] -= dv[8];
	g[15] = dv[9]*31.8928571428571 + 12.95216;
	dv[10] = 0.4*minlphi_pd[45];
	dv[11] = 0.4*minlphi_pd[44];
	g[26] -= dv[10];
	g[14] = dv[11]*31.8928571428571 + 12.95216;
	dv[12] = 0.4*minlphi_pd[43];
	dv[13] = 0.4*minlphi_pd[42];
	g[25] -= dv[12];
	g[13] = dv[13]*31.8928571428571 + 12.95216;
	dv[14] = 0.4*minlphi_pd[41];
	dv[15] = 0.4*minlphi_pd[40];
	g[24] -= dv[14];
	g[12] = dv[15]*31.8928571428571 + 12.95216;
	dv[16] = 0.4*minlphi_pd[39];
	dv[17] = 0.4*minlphi_pd[38];
	g[31] = dv[16];
	g[23] = dv[17]*31.8928571428571 + 2.418;
	g[30] = 0.4*minlphi_pd[37];
	dv[18] = 0.4*minlphi_pd[36];
	g[22] = dv[18]*31.8928571428571 + 2.418;
	dv[19] = 0.4*minlphi_pd[35];
	dv[20] = 0.4*minlphi_pd[34];
	g[29] = dv[19];
	g[21] = dv[20]*31.8928571428571 + 2.418;
	g[28] = 0.4*minlphi_pd[33];
	dv[21] = 0.4*minlphi_pd[32];
	g[20] = dv[21]*31.8928571428571 + 2.418;
	dv[22] = 0.4*minlphi_pd[31];
	dv[23] = 0.4*minlphi_pd[30];
	g[25] -= dv[22];
	g[3] = dv[22];
	g[11] = dv[23]*31.8928571428571;
	dv[24] = 0.4*minlphi_pd[29];
	dv[25] = 0.4*minlphi_pd[28];
	g[24] -= dv[24];
	g[2] = dv[24];
	g[10] = dv[25]*31.8928571428571;
	dv[26] = 0.4*minlphi_pd[27];
	dv[27] = 0.4*minlphi_pd[26];
	g[27] -= dv[26];
	g[1] = dv[26];
	g[9] = dv[27]*31.8928571428571;
	dv[28] = 0.4*minlphi_pd[25];
	dv[29] = 0.4*minlphi_pd[24];
	g[26] -= dv[28];
	g[0] = dv[28];
	g[8] = dv[29]*31.8928571428571;
	g[7] = 0.4*minlphi_pd[22];
	dv[30] = 0.4*x[7];
	g[3] += dv[30]*0.003176;
	g[6] = 0.4*minlphi_pd[20];
	dv[31] = 0.4*x[6];
	g[2] += dv[31]*0.004458;
	g[5] = 0.4*minlphi_pd[18];
	dv[32] = 0.4*x[5];
	g[1] += dv[32]*0.000893;
	g[4] = 0.4*minlphi_pd[16];
	dv[33] = 0.4*x[4];
	g[0] += dv[33]*0.003375;
	}

	return rv;
}

 void
minlphi_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (minlphi_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	minlphi_pd[1] = x[0] + -305.;
	minlphi_pd[0] = x[0] + -325.;
	v[2] = minlphi_pd[1] * minlphi_pd[0];
	minlphi_pd[2] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (minlphi_pd[2] <= 0.) {
	domain_("sqrt'", &minlphi_pd[2], 5L);
	}
	minlphi_pd[3] = 0.5 / minlphi_pd[2];
	v[2] = -0.666666666666667 * minlphi_pd[2];
	t1 = v[2] + -0.333333333333333*x[0];
	t1 += x[28];
	t1 += -x[40];
	t1 += x[44];
	c[0] = t1;

  /***  constraint 2  ***/

	minlphi_pd[5] = x[1] + -305.;
	minlphi_pd[4] = x[1] + -325.;
	v[2] = minlphi_pd[5] * minlphi_pd[4];
	minlphi_pd[6] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (minlphi_pd[6] <= 0.) {
	domain_("sqrt'", &minlphi_pd[6], 5L);
	}
	minlphi_pd[7] = 0.5 / minlphi_pd[6];
	v[2] = -0.666666666666667 * minlphi_pd[6];
	t1 = v[2] + -0.333333333333333*x[1];
	t1 += x[29];
	t1 += -x[41];
	t1 += x[45];
	c[1] = t1;

  /***  constraint 3  ***/

	minlphi_pd[9] = x[2] + -305.;
	minlphi_pd[8] = x[2] + -325.;
	v[2] = minlphi_pd[9] * minlphi_pd[8];
	minlphi_pd[10] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (minlphi_pd[10] <= 0.) {
	domain_("sqrt'", &minlphi_pd[10], 5L);
	}
	minlphi_pd[11] = 0.5 / minlphi_pd[10];
	v[2] = -0.666666666666667 * minlphi_pd[10];
	t1 = v[2] + -0.333333333333333*x[2];
	t1 += x[30];
	t1 += -x[42];
	t1 += x[46];
	c[2] = t1;

  /***  constraint 4  ***/

	minlphi_pd[13] = x[3] + -305.;
	minlphi_pd[12] = x[3] + -325.;
	v[2] = minlphi_pd[13] * minlphi_pd[12];
	minlphi_pd[14] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (minlphi_pd[14] <= 0.) {
	domain_("sqrt'", &minlphi_pd[14], 5L);
	}
	minlphi_pd[15] = 0.5 / minlphi_pd[14];
	v[2] = -0.666666666666667 * minlphi_pd[14];
	t1 = v[2] + -0.333333333333333*x[3];
	t1 += x[31];
	t1 += -x[43];
	t1 += x[47];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[40];
	t1 += x[48];
	t1 += x[52];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[41];
	t1 += x[49];
	t1 += x[53];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[42];
	t1 += x[50];
	t1 += x[54];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[43];
	t1 += x[51];
	t1 += x[55];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[44];
	t1 += x[56];
	t1 += x[60];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[45];
	t1 += x[57];
	t1 += x[61];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[46];
	t1 += x[58];
	t1 += x[62];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[47];
	t1 += x[59];
	t1 += x[63];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += x[24];
	t1 += x[28];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[1];
	t1 += x[25];
	t1 += x[29];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[2];
	t1 += x[26];
	t1 += x[30];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[3];
	t1 += x[27];
	t1 += x[31];
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
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[5];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[6];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[7];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -0.0225*x[0];
	t1 += x[36];
	t1 += -x[56];
	t1 += x[60];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.013*x[1];
	t1 += x[37];
	t1 += -x[57];
	t1 += x[61];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.0043*x[2];
	t1 += x[38];
	t1 += -x[58];
	t1 += x[62];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -0.0156*x[3];
	t1 += x[39];
	t1 += -x[59];
	t1 += x[63];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[32];
	t1 += -x[36];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[33];
	t1 += -x[37];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[34];
	t1 += -x[38];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[35];
	t1 += -x[39];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[8];
	t1 += -x[20];
	t1 += x[36];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[9];
	t1 += -x[21];
	t1 += x[37];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[10];
	t1 += -x[22];
	t1 += x[38];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[11];
	t1 += -x[23];
	t1 += x[39];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[10];
	t1 += -x[12];
	t1 += -x[16];
	t1 += x[32];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[11];
	t1 += -x[13];
	t1 += -x[17];
	t1 += x[33];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[8];
	t1 += -x[14];
	t1 += -x[18];
	t1 += x[34];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[9];
	t1 += -x[15];
	t1 += -x[19];
	t1 += x[35];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[0];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[1];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[2];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[3];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[24];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[25];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[26];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[27];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -1.028*x[0];
	t1 += x[24];
	t1 += -x[48];
	t1 += x[52];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -1.05*x[1];
	t1 += x[25];
	t1 += -x[49];
	t1 += x[53];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -1.029*x[2];
	t1 += x[26];
	t1 += -x[50];
	t1 += x[54];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -1.005*x[3];
	t1 += x[27];
	t1 += -x[51];
	t1 += x[55];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[0];
	t1 += x[26];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[1];
	t1 += x[27];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[2];
	t1 += x[24];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[3];
	t1 += x[25];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[24];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[25];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[26];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[27];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[8];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[9];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[10];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[11];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[12];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[13];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[14];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[15];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[16];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[17];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[18];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[19];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[20];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[21];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[22];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[23];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[32];
	t1 += x[36];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[33];
	t1 += x[37];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[34];
	t1 += x[38];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[35];
	t1 += x[39];
	c[78] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -0.666666666666667*minlphi_pd[3];
	dv[1] = dv[0]*minlphi_pd[1];
	dv[0] *= minlphi_pd[0];
	J[0] = dv[1] + -0.333333333333333;
	J[0] += dv[0];
	J[90] = 1.;
	J[126] = -1.;
	J[134] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -0.666666666666667*minlphi_pd[7];
	dv[1] = dv[0]*minlphi_pd[5];
	dv[0] *= minlphi_pd[4];
	J[6] = dv[1] + -0.333333333333333;
	J[6] += dv[0];
	J[92] = 1.;
	J[128] = -1.;
	J[136] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -0.666666666666667*minlphi_pd[11];
	dv[1] = dv[0]*minlphi_pd[9];
	dv[0] *= minlphi_pd[8];
	J[12] = dv[1] + -0.333333333333333;
	J[12] += dv[0];
	J[94] = 1.;
	J[130] = -1.;
	J[138] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -0.666666666666667*minlphi_pd[15];
	dv[1] = dv[0]*minlphi_pd[13];
	dv[0] *= minlphi_pd[12];
	J[18] = dv[1] + -0.333333333333333;
	J[18] += dv[0];
	J[96] = 1.;
	J[132] = -1.;
	J[140] = 1.;

   /*** derivatives for constraint 5 ***/

	J[127] = 1.;
	J[142] = 1.;
	J[150] = 1.;

   /*** derivatives for constraint 6 ***/

	J[129] = 1.;
	J[144] = 1.;
	J[152] = 1.;

   /*** derivatives for constraint 7 ***/

	J[131] = 1.;
	J[146] = 1.;
	J[154] = 1.;

   /*** derivatives for constraint 8 ***/

	J[133] = 1.;
	J[148] = 1.;
	J[156] = 1.;

   /*** derivatives for constraint 9 ***/

	J[135] = 1.;
	J[158] = 1.;
	J[166] = 1.;

   /*** derivatives for constraint 10 ***/

	J[137] = 1.;
	J[160] = 1.;
	J[168] = 1.;

   /*** derivatives for constraint 11 ***/

	J[139] = 1.;
	J[162] = 1.;
	J[170] = 1.;

   /*** derivatives for constraint 12 ***/

	J[141] = 1.;
	J[164] = 1.;
	J[172] = 1.;

   /*** derivatives for constraint 13 ***/

	J[1] = 1.;
	J[70] = 1.;
	J[91] = 1.;

   /*** derivatives for constraint 14 ***/

	J[7] = 1.;
	J[75] = 1.;
	J[93] = 1.;

   /*** derivatives for constraint 15 ***/

	J[13] = 1.;
	J[80] = 1.;
	J[95] = 1.;

   /*** derivatives for constraint 16 ***/

	J[19] = 1.;
	J[85] = 1.;
	J[97] = 1.;

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

   /*** derivatives for constraint 21 ***/

	J[29] = 1.;

   /*** derivatives for constraint 22 ***/

	J[31] = 1.;

   /*** derivatives for constraint 23 ***/

	J[33] = 1.;

   /*** derivatives for constraint 24 ***/

	J[2] = -0.0225;
	J[110] = 1.;
	J[159] = -1.;
	J[167] = 1.;

   /*** derivatives for constraint 25 ***/

	J[8] = -0.013;
	J[114] = 1.;
	J[161] = -1.;
	J[169] = 1.;

   /*** derivatives for constraint 26 ***/

	J[14] = -0.0043;
	J[118] = 1.;
	J[163] = -1.;
	J[171] = 1.;

   /*** derivatives for constraint 27 ***/

	J[20] = -0.0156;
	J[122] = 1.;
	J[165] = -1.;
	J[173] = 1.;

   /*** derivatives for constraint 28 ***/

	J[98] = 1.;
	J[111] = -1.;

   /*** derivatives for constraint 29 ***/

	J[101] = 1.;
	J[115] = -1.;

   /*** derivatives for constraint 30 ***/

	J[104] = 1.;
	J[119] = -1.;

   /*** derivatives for constraint 31 ***/

	J[107] = 1.;
	J[123] = -1.;

   /*** derivatives for constraint 32 ***/

	J[34] = -1.;
	J[62] = -1.;
	J[112] = 1.;

   /*** derivatives for constraint 33 ***/

	J[37] = -1.;
	J[64] = -1.;
	J[116] = 1.;

   /*** derivatives for constraint 34 ***/

	J[40] = -1.;
	J[66] = -1.;
	J[120] = 1.;

   /*** derivatives for constraint 35 ***/

	J[43] = -1.;
	J[68] = -1.;
	J[124] = 1.;

   /*** derivatives for constraint 36 ***/

	J[41] = -1.;
	J[46] = -1.;
	J[54] = -1.;
	J[99] = 1.;

   /*** derivatives for constraint 37 ***/

	J[44] = -1.;
	J[48] = -1.;
	J[56] = -1.;
	J[102] = 1.;

   /*** derivatives for constraint 38 ***/

	J[35] = -1.;
	J[50] = -1.;
	J[58] = -1.;
	J[105] = 1.;

   /*** derivatives for constraint 39 ***/

	J[38] = -1.;
	J[52] = -1.;
	J[60] = -1.;
	J[108] = 1.;

   /*** derivatives for constraint 40 ***/

	J[3] = -1.;

   /*** derivatives for constraint 41 ***/

	J[9] = -1.;

   /*** derivatives for constraint 42 ***/

	J[15] = -1.;

   /*** derivatives for constraint 43 ***/

	J[21] = -1.;

   /*** derivatives for constraint 44 ***/

	J[71] = 1.;

   /*** derivatives for constraint 45 ***/

	J[76] = 1.;

   /*** derivatives for constraint 46 ***/

	J[81] = 1.;

   /*** derivatives for constraint 47 ***/

	J[86] = 1.;

   /*** derivatives for constraint 48 ***/

	J[4] = -1.028;
	J[72] = 1.;
	J[143] = -1.;
	J[151] = 1.;

   /*** derivatives for constraint 49 ***/

	J[10] = -1.05;
	J[77] = 1.;
	J[145] = -1.;
	J[153] = 1.;

   /*** derivatives for constraint 50 ***/

	J[16] = -1.029;
	J[82] = 1.;
	J[147] = -1.;
	J[155] = 1.;

   /*** derivatives for constraint 51 ***/

	J[22] = -1.005;
	J[87] = 1.;
	J[149] = -1.;
	J[157] = 1.;

   /*** derivatives for constraint 52 ***/

	J[5] = -1.;
	J[83] = 1.;

   /*** derivatives for constraint 53 ***/

	J[11] = -1.;
	J[88] = 1.;

   /*** derivatives for constraint 54 ***/

	J[17] = -1.;
	J[73] = 1.;

   /*** derivatives for constraint 55 ***/

	J[23] = -1.;
	J[78] = 1.;

   /*** derivatives for constraint 56 ***/

	J[74] = 1.;

   /*** derivatives for constraint 57 ***/

	J[79] = 1.;

   /*** derivatives for constraint 58 ***/

	J[84] = 1.;

   /*** derivatives for constraint 59 ***/

	J[89] = 1.;

   /*** derivatives for constraint 60 ***/

	J[36] = 1.;

   /*** derivatives for constraint 61 ***/

	J[39] = 1.;

   /*** derivatives for constraint 62 ***/

	J[42] = 1.;

   /*** derivatives for constraint 63 ***/

	J[45] = 1.;

   /*** derivatives for constraint 64 ***/

	J[47] = 1.;

   /*** derivatives for constraint 65 ***/

	J[49] = 1.;

   /*** derivatives for constraint 66 ***/

	J[51] = 1.;

   /*** derivatives for constraint 67 ***/

	J[53] = 1.;

   /*** derivatives for constraint 68 ***/

	J[55] = 1.;

   /*** derivatives for constraint 69 ***/

	J[57] = 1.;

   /*** derivatives for constraint 70 ***/

	J[59] = 1.;

   /*** derivatives for constraint 71 ***/

	J[61] = 1.;

   /*** derivatives for constraint 72 ***/

	J[63] = 1.;

   /*** derivatives for constraint 73 ***/

	J[65] = 1.;

   /*** derivatives for constraint 74 ***/

	J[67] = 1.;

   /*** derivatives for constraint 75 ***/

	J[69] = 1.;

   /*** derivatives for constraint 76 ***/

	J[100] = 1.;
	J[113] = 1.;

   /*** derivatives for constraint 77 ***/

	J[103] = 1.;
	J[117] = 1.;

   /*** derivatives for constraint 78 ***/

	J[106] = 1.;
	J[121] = 1.;

   /*** derivatives for constraint 79 ***/

	J[109] = 1.;
	J[125] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
