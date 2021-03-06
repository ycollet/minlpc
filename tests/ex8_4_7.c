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
 fint ex8_4_7_auxcom_[1] = { 40 /* nlc */ };
 fint ex8_4_7_funcom_[209] = {
	62 /* nvar */,
	1 /* nobj */,
	40 /* ncon */,
	140 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	6,
	9,
	11,
	14,
	16,
	19,
	21,
	24,
	26,
	29,
	31,
	34,
	36,
	39,
	41,
	44,
	46,
	49,
	51,
	61,
	71,
	75,
	79,
	83,
	87,
	91,
	95,
	99,
	103,
	107,
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

	/* rownos */
	1,
	11,
	21,
	21,
	31,
	2,
	12,
	22,
	22,
	32,
	3,
	13,
	23,
	23,
	33,
	4,
	14,
	24,
	24,
	34,
	5,
	15,
	25,
	25,
	35,
	6,
	16,
	26,
	26,
	36,
	7,
	17,
	27,
	27,
	37,
	8,
	18,
	28,
	28,
	38,
	9,
	19,
	29,
	29,
	39,
	10,
	20,
	30,
	30,
	40,
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
	1,
	11,
	21,
	31,
	2,
	12,
	22,
	32,
	3,
	13,
	23,
	33,
	4,
	14,
	24,
	34,
	5,
	15,
	25,
	35,
	6,
	16,
	26,
	36,
	7,
	17,
	27,
	37,
	8,
	18,
	28,
	38,
	9,
	19,
	29,
	39,
	10,
	20,
	30,
	40,
	1,
	11,
	21,
	2,
	12,
	22,
	3,
	13,
	23,
	4,
	14,
	24,
	5,
	15,
	25,
	6,
	16,
	26,
	7,
	17,
	27,
	8,
	18,
	28,
	9,
	19,
	29,
	10,
	20,
	30 };

 real ex8_4_7_boundc_[1+124+80] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.8606,
		0.9206,
		660.48,
		666.48,
		0.805,
		0.865,
		673.04,
		679.04,
		0.7955,
		0.8555,
		681.81,
		687.81,
		0.772,
		0.832,
		692.47,
		698.47,
		0.722,
		0.782,
		700.69,
		706.69,
		0.6893,
		0.7493,
		711.9,
		717.9,
		0.6561,
		0.7161,
		723.09,
		729.09,
		0.6088,
		0.6688,
		732.44,
		738.44,
		0.567,
		0.627,
		742.7,
		748.7,
		0.528,
		0.588,
		750.94,
		756.94,
		0.0001,
		0.1,
		5.,
		15.,
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
		0.9571,
		1.0171,
		0.0857,
		0.1457,
		544.47,
		550.47,
		0.9703,
		1.0303,
		0.108,
		0.168,
		528.77,
		534.77,
		0.9739,
		1.0339,
		0.155,
		0.215,
		509.21,
		515.21,
		0.946,
		1.006,
		0.1705,
		0.2305,
		487.59,
		493.59,
		0.9829,
		1.0429,
		0.212,
		0.272,
		461.67,
		467.67,
		0.9783,
		1.0383,
		0.2439,
		0.3039,
		435.47,
		441.47,
		0.9775,
		1.0375,
		0.2915,
		0.3515,
		405.04,
		411.04,
		0.9694,
		1.0294,
		0.3441,
		0.4041,
		372.56,
		378.56,
		0.9707,
		1.0307,
		0.3626,
		0.4226,
		337.26,
		343.26,
		0.9673,
		1.0273,
		0.4403,
		0.5003,
		303.55,
		309.55,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real ex8_4_7_x0comn_[62] = {
		0.91119600248,
		662.233272702,
		0.82598983024,
		676.041264014,
		0.83022400268,
		682.594154898,
		0.78157107184,
		695.082138286,
		0.74308648208,
		704.2246819,
		0.70314894428,
		713.721950862,
		0.68624309196,
		724.68068727,
		0.64443735532,
		735.22278719,
		0.57406172142,
		744.731301632,
		0.56674362762,
		752.726835184,
		0.02,
		12.5,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.96740482792,
		0.11872252136,
		546.276827424,
		0.98374317202,
		0.15937622082,
		529.172682338,
		1.03378705762,
		0.21446798234,
		513.783502802,
		0.98438312554,
		0.18550483198,
		491.603571654,
		1.00448201596,
		0.2198894954,
		462.570610728,
		1.02815356872,
		0.2838440676,
		440.125145636,
		0.98412953746,
		0.30111036572,
		410.274773866,
		0.98654885932,
		0.38746314426,
		376.329492062,
		0.99549841964,
		0.38145273602,
		337.539309084,
		0.97822597558,
		0.47394473282,
		308.16977032 };

 static real ex8_4_7_pd[100];
static real ex8_4_7_old_x[62];
static int ex8_4_7_xkind = -1;

 static int
ex8_4_7_xcheck(real *x)
{
	real *x1 = ex8_4_7_old_x, *xe = x + 62;
	errno = 0;
	if (ex8_4_7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_4_7_xkind = 0;
	return 1;
	}
 real
ex8_4_7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (ex8_4_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 100. * x[32];
	v[1] = v[0] + -98.71;
	v[0] = v[1] * v[1];
	ex8_4_7_pd[50] = v[1] + v[1];
	v[1] = 100. * x[0];
	v[2] = v[1] + -89.06;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[51] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[33];
	v[2] = v[1] + -11.57;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[52] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[34] + -547.47;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[53] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[1] + -663.48;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[54] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[35];
	v[2] = v[1] + -100.03;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[55] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[2];
	v[2] = v[1] + -83.5;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[56] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[36];
	v[2] = v[1] + -13.8;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[57] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[37] + -531.77;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[58] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[3] + -676.04;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[59] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[38];
	v[2] = v[1] + -100.39;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[60] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[4];
	v[2] = v[1] + -82.55;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[61] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[39];
	v[2] = v[1] + -18.5;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[62] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[40] + -512.21;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[63] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[5] + -684.81;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[64] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[41];
	v[2] = v[1] + -97.6;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[65] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[6];
	v[2] = v[1] + -80.2;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[66] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[42];
	v[2] = v[1] + -20.05;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[67] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[43] + -490.59;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[68] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[7] + -695.47;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[69] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[44];
	v[2] = v[1] + -101.29;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[70] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[8];
	v[2] = v[1] + -75.2;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[71] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[45];
	v[2] = v[1] + -24.2;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[72] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[46] + -464.67;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[73] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[9] + -703.69;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[74] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[47];
	v[2] = v[1] + -100.83;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[75] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[10];
	v[2] = v[1] + -71.93;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[76] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[48];
	v[2] = v[1] + -27.39;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[77] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[49] + -438.47;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[78] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[11] + -714.9;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[79] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[50];
	v[2] = v[1] + -100.75;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[80] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[12];
	v[2] = v[1] + -68.61;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[81] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[51];
	v[2] = v[1] + -32.15;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[82] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[52] + -408.04;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[83] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[13] + -726.09;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[84] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[53];
	v[2] = v[1] + -99.94;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[85] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[14];
	v[2] = v[1] + -63.88;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[86] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[54];
	v[2] = v[1] + -37.41;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[87] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[55] + -375.56;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[88] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[15] + -735.44;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[89] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[56];
	v[2] = v[1] + -100.07;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[90] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[16];
	v[2] = v[1] + -59.7;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[91] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[57];
	v[2] = v[1] + -39.26;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[92] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[58] + -340.26;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[93] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[17] + -745.7;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[94] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[59];
	v[2] = v[1] + -99.73;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[95] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[18];
	v[2] = v[1] + -55.8;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[96] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 100. * x[60];
	v[2] = v[1] + -47.03;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[97] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[61] + -306.55;
	v[2] = v[1] * v[1];
	ex8_4_7_pd[98] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[19] + -753.94;
	v[1] = v[2] * v[2];
	ex8_4_7_pd[99] = v[2] + v[2];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[19] = ex8_4_7_pd[99];
	g[61] = ex8_4_7_pd[98];
	g[60] = ex8_4_7_pd[97]*100.;
	g[18] = ex8_4_7_pd[96]*100.;
	g[59] = ex8_4_7_pd[95]*100.;
	g[17] = ex8_4_7_pd[94];
	g[58] = ex8_4_7_pd[93];
	g[57] = ex8_4_7_pd[92]*100.;
	g[16] = ex8_4_7_pd[91]*100.;
	g[56] = ex8_4_7_pd[90]*100.;
	g[15] = ex8_4_7_pd[89];
	g[55] = ex8_4_7_pd[88];
	g[54] = ex8_4_7_pd[87]*100.;
	g[14] = ex8_4_7_pd[86]*100.;
	g[53] = ex8_4_7_pd[85]*100.;
	g[13] = ex8_4_7_pd[84];
	g[52] = ex8_4_7_pd[83];
	g[51] = ex8_4_7_pd[82]*100.;
	g[12] = ex8_4_7_pd[81]*100.;
	g[50] = ex8_4_7_pd[80]*100.;
	g[11] = ex8_4_7_pd[79];
	g[49] = ex8_4_7_pd[78];
	g[48] = ex8_4_7_pd[77]*100.;
	g[10] = ex8_4_7_pd[76]*100.;
	g[47] = ex8_4_7_pd[75]*100.;
	g[9] = ex8_4_7_pd[74];
	g[46] = ex8_4_7_pd[73];
	g[45] = ex8_4_7_pd[72]*100.;
	g[8] = ex8_4_7_pd[71]*100.;
	g[44] = ex8_4_7_pd[70]*100.;
	g[7] = ex8_4_7_pd[69];
	g[43] = ex8_4_7_pd[68];
	g[42] = ex8_4_7_pd[67]*100.;
	g[6] = ex8_4_7_pd[66]*100.;
	g[41] = ex8_4_7_pd[65]*100.;
	g[5] = ex8_4_7_pd[64];
	g[40] = ex8_4_7_pd[63];
	g[39] = ex8_4_7_pd[62]*100.;
	g[4] = ex8_4_7_pd[61]*100.;
	g[38] = ex8_4_7_pd[60]*100.;
	g[3] = ex8_4_7_pd[59];
	g[37] = ex8_4_7_pd[58];
	g[36] = ex8_4_7_pd[57]*100.;
	g[2] = ex8_4_7_pd[56]*100.;
	g[35] = ex8_4_7_pd[55]*100.;
	g[1] = ex8_4_7_pd[54];
	g[34] = ex8_4_7_pd[53];
	g[33] = ex8_4_7_pd[52]*100.;
	g[0] = ex8_4_7_pd[51]*100.;
	g[32] = ex8_4_7_pd[50]*100.;
	}

	return v[0];
}

 void
ex8_4_7_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ex8_4_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[22] * x[0];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[0];
	t1 += 0.01*x[32];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[23] * x[2];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[2];
	t1 += 0.01*x[35];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[24] * x[4];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[4];
	t1 += 0.01*x[38];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[25] * x[6];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[6];
	t1 += 0.01*x[41];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[26] * x[8];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[8];
	t1 += 0.01*x[44];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[27] * x[10];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[10];
	t1 += 0.01*x[47];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[28] * x[12];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[12];
	t1 += 0.01*x[50];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[29] * x[14];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[14];
	t1 += 0.01*x[53];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[30] * x[16];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[16];
	t1 += 0.01*x[56];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[31] * x[18];
	v[1] = -v[0];
	t1 = v[1] + -0.01*x[18];
	t1 += 0.01*x[59];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[22] * x[0];
	t1 = v[0] + -0.01*x[33];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[23] * x[2];
	t1 = v[0] + -0.01*x[36];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[24] * x[4];
	t1 = v[0] + -0.01*x[39];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[25] * x[6];
	t1 = v[0] + -0.01*x[42];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[26] * x[8];
	t1 = v[0] + -0.01*x[45];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[27] * x[10];
	t1 = v[0] + -0.01*x[48];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[28] * x[12];
	t1 = v[0] + -0.01*x[51];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[29] * x[14];
	t1 = v[0] + -0.01*x[54];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[30] * x[16];
	t1 = v[0] + -0.01*x[57];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[31] * x[18];
	t1 = v[0] + -0.01*x[60];
	c[19] = t1;

  /***  constraint 21  ***/

	ex8_4_7_pd[0] = 1000. * x[22];
	v[0] = ex8_4_7_pd[0] * x[0];
	t1 = v[0] + -0.01*x[1];
	t1 += 0.01*x[34];
	c[20] = t1;

  /***  constraint 22  ***/

	ex8_4_7_pd[1] = 1000. * x[23];
	v[0] = ex8_4_7_pd[1] * x[2];
	t1 = v[0] + -0.01*x[3];
	t1 += 0.01*x[37];
	c[21] = t1;

  /***  constraint 23  ***/

	ex8_4_7_pd[2] = 1000. * x[24];
	v[0] = ex8_4_7_pd[2] * x[4];
	t1 = v[0] + -0.01*x[5];
	t1 += 0.01*x[40];
	c[22] = t1;

  /***  constraint 24  ***/

	ex8_4_7_pd[3] = 1000. * x[25];
	v[0] = ex8_4_7_pd[3] * x[6];
	t1 = v[0] + -0.01*x[7];
	t1 += 0.01*x[43];
	c[23] = t1;

  /***  constraint 25  ***/

	ex8_4_7_pd[4] = 1000. * x[26];
	v[0] = ex8_4_7_pd[4] * x[8];
	t1 = v[0] + -0.01*x[9];
	t1 += 0.01*x[46];
	c[24] = t1;

  /***  constraint 26  ***/

	ex8_4_7_pd[5] = 1000. * x[27];
	v[0] = ex8_4_7_pd[5] * x[10];
	t1 = v[0] + -0.01*x[11];
	t1 += 0.01*x[49];
	c[25] = t1;

  /***  constraint 27  ***/

	ex8_4_7_pd[6] = 1000. * x[28];
	v[0] = ex8_4_7_pd[6] * x[12];
	t1 = v[0] + -0.01*x[13];
	t1 += 0.01*x[52];
	c[26] = t1;

  /***  constraint 28  ***/

	ex8_4_7_pd[7] = 1000. * x[29];
	v[0] = ex8_4_7_pd[7] * x[14];
	t1 = v[0] + -0.01*x[15];
	t1 += 0.01*x[55];
	c[27] = t1;

  /***  constraint 29  ***/

	ex8_4_7_pd[8] = 1000. * x[30];
	v[0] = ex8_4_7_pd[8] * x[16];
	t1 = v[0] + -0.01*x[17];
	t1 += 0.01*x[58];
	c[28] = t1;

  /***  constraint 30  ***/

	ex8_4_7_pd[9] = 1000. * x[31];
	v[0] = ex8_4_7_pd[9] * x[18];
	t1 = v[0] + -0.01*x[19];
	t1 += 0.01*x[61];
	c[29] = t1;

  /***  constraint 31  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 800. / x[1];
	ex8_4_7_pd[10] = -v[0] / x[1];
	ex8_4_7_pd[11] = v[0] + -1.;
	v[0] = ex8_4_7_pd[11] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[12] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[13] = ex8_4_7_pd[12];
	v[2] = ex8_4_7_pd[12] * x[20];
	t1 = v[2] + -x[22];
	c[30] = t1;

  /***  constraint 32  ***/

	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[0] = 800. / x[3];
	ex8_4_7_pd[14] = -v[0] / x[3];
	ex8_4_7_pd[15] = v[0] + -1.;
	v[0] = ex8_4_7_pd[15] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[16] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[17] = ex8_4_7_pd[16];
	v[2] = ex8_4_7_pd[16] * x[20];
	t1 = v[2] + -x[23];
	c[31] = t1;

  /***  constraint 33  ***/

	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[0] = 800. / x[5];
	ex8_4_7_pd[18] = -v[0] / x[5];
	ex8_4_7_pd[19] = v[0] + -1.;
	v[0] = ex8_4_7_pd[19] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[20] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[21] = ex8_4_7_pd[20];
	v[2] = ex8_4_7_pd[20] * x[20];
	t1 = v[2] + -x[24];
	c[32] = t1;

  /***  constraint 34  ***/

	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[0] = 800. / x[7];
	ex8_4_7_pd[22] = -v[0] / x[7];
	ex8_4_7_pd[23] = v[0] + -1.;
	v[0] = ex8_4_7_pd[23] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[24] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[25] = ex8_4_7_pd[24];
	v[2] = ex8_4_7_pd[24] * x[20];
	t1 = v[2] + -x[25];
	c[33] = t1;

  /***  constraint 35  ***/

	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[0] = 800. / x[9];
	ex8_4_7_pd[26] = -v[0] / x[9];
	ex8_4_7_pd[27] = v[0] + -1.;
	v[0] = ex8_4_7_pd[27] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[28] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[29] = ex8_4_7_pd[28];
	v[2] = ex8_4_7_pd[28] * x[20];
	t1 = v[2] + -x[26];
	c[34] = t1;

  /***  constraint 36  ***/

	if (x[11] == 0.) {
	zerdiv_(&x[11]);	}
	v[0] = 800. / x[11];
	ex8_4_7_pd[30] = -v[0] / x[11];
	ex8_4_7_pd[31] = v[0] + -1.;
	v[0] = ex8_4_7_pd[31] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[32] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[33] = ex8_4_7_pd[32];
	v[2] = ex8_4_7_pd[32] * x[20];
	t1 = v[2] + -x[27];
	c[35] = t1;

  /***  constraint 37  ***/

	if (x[13] == 0.) {
	zerdiv_(&x[13]);	}
	v[0] = 800. / x[13];
	ex8_4_7_pd[34] = -v[0] / x[13];
	ex8_4_7_pd[35] = v[0] + -1.;
	v[0] = ex8_4_7_pd[35] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[36] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[37] = ex8_4_7_pd[36];
	v[2] = ex8_4_7_pd[36] * x[20];
	t1 = v[2] + -x[28];
	c[36] = t1;

  /***  constraint 38  ***/

	if (x[15] == 0.) {
	zerdiv_(&x[15]);	}
	v[0] = 800. / x[15];
	ex8_4_7_pd[38] = -v[0] / x[15];
	ex8_4_7_pd[39] = v[0] + -1.;
	v[0] = ex8_4_7_pd[39] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[40] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[41] = ex8_4_7_pd[40];
	v[2] = ex8_4_7_pd[40] * x[20];
	t1 = v[2] + -x[29];
	c[37] = t1;

  /***  constraint 39  ***/

	if (x[17] == 0.) {
	zerdiv_(&x[17]);	}
	v[0] = 800. / x[17];
	ex8_4_7_pd[42] = -v[0] / x[17];
	ex8_4_7_pd[43] = v[0] + -1.;
	v[0] = ex8_4_7_pd[43] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[44] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[45] = ex8_4_7_pd[44];
	v[2] = ex8_4_7_pd[44] * x[20];
	t1 = v[2] + -x[30];
	c[38] = t1;

  /***  constraint 40  ***/

	if (x[19] == 0.) {
	zerdiv_(&x[19]);	}
	v[0] = 800. / x[19];
	ex8_4_7_pd[46] = -v[0] / x[19];
	ex8_4_7_pd[47] = v[0] + -1.;
	v[0] = ex8_4_7_pd[47] * x[21];
	v[2] = -v[0];
	ex8_4_7_pd[48] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	ex8_4_7_pd[49] = ex8_4_7_pd[48];
	v[2] = ex8_4_7_pd[48] * x[20];
	t1 = v[2] + -x[31];
	c[39] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[22] + -0.01;
	J[70] = -x[0];
	J[110] = 0.01;

   /*** derivatives for constraint 2 ***/

	J[5] = -x[23] + -0.01;
	J[74] = -x[2];
	J[113] = 0.01;

   /*** derivatives for constraint 3 ***/

	J[10] = -x[24] + -0.01;
	J[78] = -x[4];
	J[116] = 0.01;

   /*** derivatives for constraint 4 ***/

	J[15] = -x[25] + -0.01;
	J[82] = -x[6];
	J[119] = 0.01;

   /*** derivatives for constraint 5 ***/

	J[20] = -x[26] + -0.01;
	J[86] = -x[8];
	J[122] = 0.01;

   /*** derivatives for constraint 6 ***/

	J[25] = -x[27] + -0.01;
	J[90] = -x[10];
	J[125] = 0.01;

   /*** derivatives for constraint 7 ***/

	J[30] = -x[28] + -0.01;
	J[94] = -x[12];
	J[128] = 0.01;

   /*** derivatives for constraint 8 ***/

	J[35] = -x[29] + -0.01;
	J[98] = -x[14];
	J[131] = 0.01;

   /*** derivatives for constraint 9 ***/

	J[40] = -x[30] + -0.01;
	J[102] = -x[16];
	J[134] = 0.01;

   /*** derivatives for constraint 10 ***/

	J[45] = -x[31] + -0.01;
	J[106] = -x[18];
	J[137] = 0.01;

   /*** derivatives for constraint 11 ***/

	J[1] = x[22];
	J[71] = x[0];
	J[111] = -0.01;

   /*** derivatives for constraint 12 ***/

	J[6] = x[23];
	J[75] = x[2];
	J[114] = -0.01;

   /*** derivatives for constraint 13 ***/

	J[11] = x[24];
	J[79] = x[4];
	J[117] = -0.01;

   /*** derivatives for constraint 14 ***/

	J[16] = x[25];
	J[83] = x[6];
	J[120] = -0.01;

   /*** derivatives for constraint 15 ***/

	J[21] = x[26];
	J[87] = x[8];
	J[123] = -0.01;

   /*** derivatives for constraint 16 ***/

	J[26] = x[27];
	J[91] = x[10];
	J[126] = -0.01;

   /*** derivatives for constraint 17 ***/

	J[31] = x[28];
	J[95] = x[12];
	J[129] = -0.01;

   /*** derivatives for constraint 18 ***/

	J[36] = x[29];
	J[99] = x[14];
	J[132] = -0.01;

   /*** derivatives for constraint 19 ***/

	J[41] = x[30];
	J[103] = x[16];
	J[135] = -0.01;

   /*** derivatives for constraint 20 ***/

	J[46] = x[31];
	J[107] = x[18];
	J[138] = -0.01;

   /*** derivatives for constraint 21 ***/

	J[2] = ex8_4_7_pd[0];
	J[72] = x[0]*1000.;
	J[3] = -0.01;
	J[112] = 0.01;

   /*** derivatives for constraint 22 ***/

	J[7] = ex8_4_7_pd[1];
	J[76] = x[2]*1000.;
	J[8] = -0.01;
	J[115] = 0.01;

   /*** derivatives for constraint 23 ***/

	J[12] = ex8_4_7_pd[2];
	J[80] = x[4]*1000.;
	J[13] = -0.01;
	J[118] = 0.01;

   /*** derivatives for constraint 24 ***/

	J[17] = ex8_4_7_pd[3];
	J[84] = x[6]*1000.;
	J[18] = -0.01;
	J[121] = 0.01;

   /*** derivatives for constraint 25 ***/

	J[22] = ex8_4_7_pd[4];
	J[88] = x[8]*1000.;
	J[23] = -0.01;
	J[124] = 0.01;

   /*** derivatives for constraint 26 ***/

	J[27] = ex8_4_7_pd[5];
	J[92] = x[10]*1000.;
	J[28] = -0.01;
	J[127] = 0.01;

   /*** derivatives for constraint 27 ***/

	J[32] = ex8_4_7_pd[6];
	J[96] = x[12]*1000.;
	J[33] = -0.01;
	J[130] = 0.01;

   /*** derivatives for constraint 28 ***/

	J[37] = ex8_4_7_pd[7];
	J[100] = x[14]*1000.;
	J[38] = -0.01;
	J[133] = 0.01;

   /*** derivatives for constraint 29 ***/

	J[42] = ex8_4_7_pd[8];
	J[104] = x[16]*1000.;
	J[43] = -0.01;
	J[136] = 0.01;

   /*** derivatives for constraint 30 ***/

	J[47] = ex8_4_7_pd[9];
	J[108] = x[18]*1000.;
	J[48] = -0.01;
	J[139] = 0.01;

   /*** derivatives for constraint 31 ***/

	J[50] = ex8_4_7_pd[12];
	dv[0] = x[20]*ex8_4_7_pd[13];
	J[60] = -dv[0]*ex8_4_7_pd[11];
	dv[0] = -dv[0]*x[21];
	J[4] = dv[0]*ex8_4_7_pd[10];
	J[73] = -1.;

   /*** derivatives for constraint 32 ***/

	J[51] = ex8_4_7_pd[16];
	dv[0] = x[20]*ex8_4_7_pd[17];
	J[61] = -dv[0]*ex8_4_7_pd[15];
	dv[0] = -dv[0]*x[21];
	J[9] = dv[0]*ex8_4_7_pd[14];
	J[77] = -1.;

   /*** derivatives for constraint 33 ***/

	J[52] = ex8_4_7_pd[20];
	dv[0] = x[20]*ex8_4_7_pd[21];
	J[62] = -dv[0]*ex8_4_7_pd[19];
	dv[0] = -dv[0]*x[21];
	J[14] = dv[0]*ex8_4_7_pd[18];
	J[81] = -1.;

   /*** derivatives for constraint 34 ***/

	J[53] = ex8_4_7_pd[24];
	dv[0] = x[20]*ex8_4_7_pd[25];
	J[63] = -dv[0]*ex8_4_7_pd[23];
	dv[0] = -dv[0]*x[21];
	J[19] = dv[0]*ex8_4_7_pd[22];
	J[85] = -1.;

   /*** derivatives for constraint 35 ***/

	J[54] = ex8_4_7_pd[28];
	dv[0] = x[20]*ex8_4_7_pd[29];
	J[64] = -dv[0]*ex8_4_7_pd[27];
	dv[0] = -dv[0]*x[21];
	J[24] = dv[0]*ex8_4_7_pd[26];
	J[89] = -1.;

   /*** derivatives for constraint 36 ***/

	J[55] = ex8_4_7_pd[32];
	dv[0] = x[20]*ex8_4_7_pd[33];
	J[65] = -dv[0]*ex8_4_7_pd[31];
	dv[0] = -dv[0]*x[21];
	J[29] = dv[0]*ex8_4_7_pd[30];
	J[93] = -1.;

   /*** derivatives for constraint 37 ***/

	J[56] = ex8_4_7_pd[36];
	dv[0] = x[20]*ex8_4_7_pd[37];
	J[66] = -dv[0]*ex8_4_7_pd[35];
	dv[0] = -dv[0]*x[21];
	J[34] = dv[0]*ex8_4_7_pd[34];
	J[97] = -1.;

   /*** derivatives for constraint 38 ***/

	J[57] = ex8_4_7_pd[40];
	dv[0] = x[20]*ex8_4_7_pd[41];
	J[67] = -dv[0]*ex8_4_7_pd[39];
	dv[0] = -dv[0]*x[21];
	J[39] = dv[0]*ex8_4_7_pd[38];
	J[101] = -1.;

   /*** derivatives for constraint 39 ***/

	J[58] = ex8_4_7_pd[44];
	dv[0] = x[20]*ex8_4_7_pd[45];
	J[68] = -dv[0]*ex8_4_7_pd[43];
	dv[0] = -dv[0]*x[21];
	J[44] = dv[0]*ex8_4_7_pd[42];
	J[105] = -1.;

   /*** derivatives for constraint 40 ***/

	J[59] = ex8_4_7_pd[48];
	dv[0] = x[20]*ex8_4_7_pd[49];
	J[69] = -dv[0]*ex8_4_7_pd[47];
	dv[0] = -dv[0]*x[21];
	J[49] = dv[0]*ex8_4_7_pd[46];
	J[109] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
