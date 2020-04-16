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
 fint abel_auxcom_[1] = { 0 /* nlc */ };
 fint abel_funcom_[107] = {
	30 /* nvar */,
	1 /* nobj */,
	14 /* ncon */,
	70 /* nzc */,
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
	22,
	24,
	27,
	30,
	33,
	36,
	39,
	42,
	43,
	45,
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

	/* rownos */
	1,
	8,
	1,
	2,
	9,
	2,
	3,
	10,
	3,
	4,
	11,
	4,
	5,
	12,
	5,
	6,
	13,
	6,
	7,
	14,
	7,
	1,
	8,
	2,
	8,
	9,
	3,
	9,
	10,
	4,
	10,
	11,
	5,
	11,
	12,
	6,
	12,
	13,
	7,
	13,
	14,
	14,
	1,
	8,
	2,
	9,
	3,
	10,
	4,
	11,
	5,
	12,
	6,
	13,
	7,
	14,
	1,
	8,
	2,
	9,
	3,
	10,
	4,
	11,
	5,
	12,
	6,
	13,
	7,
	14 };

 real abel_boundc_[1+60+28] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		387.9,
		387.9,
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
		85.3,
		85.3,
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
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-59.4,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7,
		-184.7};

 real abel_x0comn_[30] = {
		387.9,
		387.9,
		387.9,
		387.9,
		387.9,
		387.9,
		387.9,
		387.9,
		85.3,
		85.3,
		85.3,
		85.3,
		85.3,
		85.3,
		85.3,
		85.3,
		110.5,
		110.5,
		110.5,
		110.5,
		110.5,
		110.5,
		110.5,
		147.1,
		147.1,
		147.1,
		147.1,
		147.1,
		147.1,
		147.1 };

 static real abel_pd[90];
static real abel_old_x[30];
static int abel_xkind = -1;

 static int
abel_xcheck(real *x)
{
	real *x1 = abel_old_x, *xe = x + 30;
	errno = 0;
	if (abel_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	abel_xkind = 0;
	return 1;
	}
 real
abel_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[62], dv[60];
	fint wantfg = *needfg;
	if (abel_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 0.0625 * x[0];
	abel_pd[1] = v[0] + -24.24375;
	abel_pd[0] = x[0] + -387.9;
	abel_pd[2] = abel_pd[1] * abel_pd[0];
	v[2] = 0.5 * abel_pd[2];
	abel_pd[4] = x[8] + -85.3;
	abel_pd[3] = x[8] + -85.3;
	abel_pd[5] = abel_pd[4] * abel_pd[3];
	v[5] = 0.5 * abel_pd[5];
	v[2] += v[5];
	v[5] = 0.0625 * x[1];
	abel_pd[7] = v[5] + -24.425578125;
	abel_pd[6] = x[1] + -390.80925;
	abel_pd[8] = abel_pd[7] * abel_pd[6];
	v[7] = 0.5 * abel_pd[8];
	v[2] += v[7];
	abel_pd[10] = x[9] + -85.93975;
	abel_pd[9] = x[9] + -85.93975;
	abel_pd[11] = abel_pd[10] * abel_pd[9];
	v[9] = 0.5 * abel_pd[11];
	v[2] += v[9];
	v[9] = 0.0625 * x[2];
	abel_pd[13] = v[9] + -24.6087699609375;
	abel_pd[12] = x[2] + -393.740319375;
	abel_pd[14] = abel_pd[13] * abel_pd[12];
	v[11] = 0.5 * abel_pd[14];
	v[2] += v[11];
	abel_pd[16] = x[10] + -86.584298125;
	abel_pd[15] = x[10] + -86.584298125;
	abel_pd[17] = abel_pd[16] * abel_pd[15];
	v[13] = 0.5 * abel_pd[17];
	v[2] += v[13];
	v[13] = 0.0625 * x[3];
	abel_pd[19] = v[13] + -24.7933357356445;
	abel_pd[18] = x[3] + -396.693371770313;
	abel_pd[20] = abel_pd[19] * abel_pd[18];
	v[15] = 0.5 * abel_pd[20];
	v[2] += v[15];
	abel_pd[22] = x[11] + -87.2336803609375;
	abel_pd[21] = x[11] + -87.2336803609375;
	abel_pd[23] = abel_pd[22] * abel_pd[21];
	v[17] = 0.5 * abel_pd[23];
	v[2] += v[17];
	v[17] = 0.0625 * x[4];
	abel_pd[25] = v[17] + -24.9792857536619;
	abel_pd[24] = x[4] + -399.66857205859;
	abel_pd[26] = abel_pd[25] * abel_pd[24];
	v[19] = 0.5 * abel_pd[26];
	v[2] += v[19];
	abel_pd[28] = x[12] + -87.8879329636445;
	abel_pd[27] = x[12] + -87.8879329636445;
	abel_pd[29] = abel_pd[28] * abel_pd[27];
	v[21] = 0.5 * abel_pd[29];
	v[2] += v[21];
	v[21] = 0.0625 * x[5];
	abel_pd[31] = v[21] + -25.1666303968143;
	abel_pd[30] = x[5] + -402.666086349029;
	abel_pd[32] = abel_pd[31] * abel_pd[30];
	v[23] = 0.5 * abel_pd[32];
	v[2] += v[23];
	abel_pd[34] = x[13] + -88.5470924608719;
	abel_pd[33] = x[13] + -88.5470924608719;
	abel_pd[35] = abel_pd[34] * abel_pd[33];
	v[25] = 0.5 * abel_pd[35];
	v[2] += v[25];
	v[25] = 0.0625 * x[6];
	abel_pd[37] = v[25] + -25.3553801247904;
	abel_pd[36] = x[6] + -405.686081996647;
	abel_pd[38] = abel_pd[37] * abel_pd[36];
	v[27] = 0.5 * abel_pd[38];
	v[2] += v[27];
	abel_pd[40] = x[14] + -89.2111956543284;
	abel_pd[39] = x[14] + -89.2111956543284;
	abel_pd[41] = abel_pd[40] * abel_pd[39];
	v[29] = 0.5 * abel_pd[41];
	v[2] += v[29];
	v[29] = 6.25 * x[7];
	abel_pd[43] = v[29] + -2554.55454757264;
	abel_pd[42] = x[7] + -408.728727611622;
	abel_pd[44] = abel_pd[43] * abel_pd[42];
	v[31] = 0.5 * abel_pd[44];
	v[2] += v[31];
	v[31] = 100. * x[15];
	abel_pd[46] = v[31] + -8988.02796217359;
	abel_pd[45] = x[15] + -89.8802796217359;
	abel_pd[47] = abel_pd[46] * abel_pd[45];
	v[33] = 0.5 * abel_pd[47];
	v[2] += v[33];
	abel_pd[49] = x[16] + -110.5;
	abel_pd[48] = x[16] + -110.5;
	abel_pd[50] = abel_pd[49] * abel_pd[48];
	v[35] = 0.5 * abel_pd[50];
	v[2] += v[35];
	v[35] = 0.444 * x[23];
	abel_pd[52] = v[35] + -65.3124;
	abel_pd[51] = x[23] + -147.1;
	abel_pd[53] = abel_pd[52] * abel_pd[51];
	v[37] = 0.5 * abel_pd[53];
	v[2] += v[37];
	abel_pd[55] = x[17] + -111.32875;
	abel_pd[54] = x[17] + -111.32875;
	abel_pd[56] = abel_pd[55] * abel_pd[54];
	v[39] = 0.5 * abel_pd[56];
	v[2] += v[39];
	v[39] = 0.444 * x[24];
	abel_pd[58] = v[39] + -65.802243;
	abel_pd[57] = x[24] + -148.20325;
	abel_pd[59] = abel_pd[58] * abel_pd[57];
	v[41] = 0.5 * abel_pd[59];
	v[2] += v[41];
	abel_pd[61] = x[18] + -112.163715625;
	abel_pd[60] = x[18] + -112.163715625;
	abel_pd[62] = abel_pd[61] * abel_pd[60];
	v[43] = 0.5 * abel_pd[62];
	v[2] += v[43];
	v[43] = 0.444 * x[25];
	abel_pd[64] = v[43] + -66.2957598225;
	abel_pd[63] = x[25] + -149.314774375;
	abel_pd[65] = abel_pd[64] * abel_pd[63];
	v[45] = 0.5 * abel_pd[65];
	v[2] += v[45];
	abel_pd[67] = x[19] + -113.004943492188;
	abel_pd[66] = x[19] + -113.004943492188;
	abel_pd[68] = abel_pd[67] * abel_pd[66];
	v[47] = 0.5 * abel_pd[68];
	v[2] += v[47];
	v[47] = 0.444 * x[26];
	abel_pd[70] = v[47] + -66.7929780211688;
	abel_pd[69] = x[26] + -150.434635182813;
	abel_pd[71] = abel_pd[70] * abel_pd[69];
	v[49] = 0.5 * abel_pd[71];
	v[2] += v[49];
	abel_pd[73] = x[20] + -113.852480568379;
	abel_pd[72] = x[20] + -113.852480568379;
	abel_pd[74] = abel_pd[73] * abel_pd[72];
	v[51] = 0.5 * abel_pd[74];
	v[2] += v[51];
	v[51] = 0.444 * x[27];
	abel_pd[76] = v[51] + -67.2939253563275;
	abel_pd[75] = x[27] + -151.562894946684;
	abel_pd[77] = abel_pd[76] * abel_pd[75];
	v[53] = 0.5 * abel_pd[77];
	v[2] += v[53];
	abel_pd[79] = x[21] + -114.706374172642;
	abel_pd[78] = x[21] + -114.706374172642;
	abel_pd[80] = abel_pd[79] * abel_pd[78];
	v[55] = 0.5 * abel_pd[80];
	v[2] += v[55];
	v[55] = 0.444 * x[28];
	abel_pd[82] = v[55] + -67.7986297965;
	abel_pd[81] = x[28] + -152.699616658784;
	abel_pd[83] = abel_pd[82] * abel_pd[81];
	v[57] = 0.5 * abel_pd[83];
	v[2] += v[57];
	abel_pd[85] = x[22] + -115.566671978937;
	abel_pd[84] = x[22] + -115.566671978937;
	abel_pd[86] = abel_pd[85] * abel_pd[84];
	v[59] = 0.5 * abel_pd[86];
	v[2] += v[59];
	v[59] = 0.444 * x[29];
	abel_pd[88] = v[59] + -68.3071195199738;
	abel_pd[87] = x[29] + -153.844863783725;
	abel_pd[89] = abel_pd[88] * abel_pd[87];
	v[61] = 0.5 * abel_pd[89];
	v[2] += v[61];
	;}

	if (wantfg & 2) {
	dv[0] = 0.5*abel_pd[88];
	dv[1] = 0.5*abel_pd[87];
	g[29] = dv[0];
	g[29] += dv[1]*0.444;
	dv[2] = 0.5*abel_pd[85];
	dv[3] = 0.5*abel_pd[84];
	g[22] = dv[2];
	g[22] += dv[3];
	dv[4] = 0.5*abel_pd[82];
	dv[5] = 0.5*abel_pd[81];
	g[28] = dv[4];
	g[28] += dv[5]*0.444;
	dv[6] = 0.5*abel_pd[79];
	dv[7] = 0.5*abel_pd[78];
	g[21] = dv[6];
	g[21] += dv[7];
	dv[8] = 0.5*abel_pd[76];
	dv[9] = 0.5*abel_pd[75];
	g[27] = dv[8];
	g[27] += dv[9]*0.444;
	dv[10] = 0.5*abel_pd[73];
	dv[11] = 0.5*abel_pd[72];
	g[20] = dv[10];
	g[20] += dv[11];
	dv[12] = 0.5*abel_pd[70];
	dv[13] = 0.5*abel_pd[69];
	g[26] = dv[12];
	g[26] += dv[13]*0.444;
	dv[14] = 0.5*abel_pd[67];
	dv[15] = 0.5*abel_pd[66];
	g[19] = dv[14];
	g[19] += dv[15];
	dv[16] = 0.5*abel_pd[64];
	dv[17] = 0.5*abel_pd[63];
	g[25] = dv[16];
	g[25] += dv[17]*0.444;
	dv[18] = 0.5*abel_pd[61];
	dv[19] = 0.5*abel_pd[60];
	g[18] = dv[18];
	g[18] += dv[19];
	dv[20] = 0.5*abel_pd[58];
	dv[21] = 0.5*abel_pd[57];
	g[24] = dv[20];
	g[24] += dv[21]*0.444;
	dv[22] = 0.5*abel_pd[55];
	dv[23] = 0.5*abel_pd[54];
	g[17] = dv[22];
	g[17] += dv[23];
	dv[24] = 0.5*abel_pd[52];
	dv[25] = 0.5*abel_pd[51];
	g[23] = dv[24];
	g[23] += dv[25]*0.444;
	dv[26] = 0.5*abel_pd[49];
	dv[27] = 0.5*abel_pd[48];
	g[16] = dv[26];
	g[16] += dv[27];
	dv[28] = 0.5*abel_pd[46];
	dv[29] = 0.5*abel_pd[45];
	g[15] = dv[28];
	g[15] += dv[29]*100.;
	dv[30] = 0.5*abel_pd[43];
	dv[31] = 0.5*abel_pd[42];
	g[7] = dv[30];
	g[7] += dv[31]*6.25;
	dv[32] = 0.5*abel_pd[40];
	dv[33] = 0.5*abel_pd[39];
	g[14] = dv[32];
	g[14] += dv[33];
	dv[34] = 0.5*abel_pd[37];
	dv[35] = 0.5*abel_pd[36];
	g[6] = dv[34];
	g[6] += dv[35]*0.0625;
	dv[36] = 0.5*abel_pd[34];
	dv[37] = 0.5*abel_pd[33];
	g[13] = dv[36];
	g[13] += dv[37];
	dv[38] = 0.5*abel_pd[31];
	dv[39] = 0.5*abel_pd[30];
	g[5] = dv[38];
	g[5] += dv[39]*0.0625;
	dv[40] = 0.5*abel_pd[28];
	dv[41] = 0.5*abel_pd[27];
	g[12] = dv[40];
	g[12] += dv[41];
	dv[42] = 0.5*abel_pd[25];
	dv[43] = 0.5*abel_pd[24];
	g[4] = dv[42];
	g[4] += dv[43]*0.0625;
	dv[44] = 0.5*abel_pd[22];
	dv[45] = 0.5*abel_pd[21];
	g[11] = dv[44];
	g[11] += dv[45];
	dv[46] = 0.5*abel_pd[19];
	dv[47] = 0.5*abel_pd[18];
	g[3] = dv[46];
	g[3] += dv[47]*0.0625;
	dv[48] = 0.5*abel_pd[16];
	dv[49] = 0.5*abel_pd[15];
	g[10] = dv[48];
	g[10] += dv[49];
	dv[50] = 0.5*abel_pd[13];
	dv[51] = 0.5*abel_pd[12];
	g[2] = dv[50];
	g[2] += dv[51]*0.0625;
	dv[52] = 0.5*abel_pd[10];
	dv[53] = 0.5*abel_pd[9];
	g[9] = dv[52];
	g[9] += dv[53];
	dv[54] = 0.5*abel_pd[7];
	dv[55] = 0.5*abel_pd[6];
	g[1] = dv[54];
	g[1] += dv[55]*0.0625;
	dv[56] = 0.5*abel_pd[4];
	dv[57] = 0.5*abel_pd[3];
	g[8] = dv[56];
	g[8] += dv[57];
	dv[58] = 0.5*abel_pd[1];
	dv[59] = 0.5*abel_pd[0];
	g[0] = dv[58];
	g[0] += dv[59]*0.0625;
	}

	return v[2];
}

 void
abel_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (abel_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -0.914*x[0];
	t1 += x[1];
	t1 += 0.016*x[8];
	t1 += -0.305*x[16];
	t1 += -0.424*x[23];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -0.914*x[1];
	t1 += x[2];
	t1 += 0.016*x[9];
	t1 += -0.305*x[17];
	t1 += -0.424*x[24];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.914*x[2];
	t1 += x[3];
	t1 += 0.016*x[10];
	t1 += -0.305*x[18];
	t1 += -0.424*x[25];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -0.914*x[3];
	t1 += x[4];
	t1 += 0.016*x[11];
	t1 += -0.305*x[19];
	t1 += -0.424*x[26];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -0.914*x[4];
	t1 += x[5];
	t1 += 0.016*x[12];
	t1 += -0.305*x[20];
	t1 += -0.424*x[27];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -0.914*x[5];
	t1 += x[6];
	t1 += 0.016*x[13];
	t1 += -0.305*x[21];
	t1 += -0.424*x[28];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -0.914*x[6];
	t1 += x[7];
	t1 += 0.016*x[14];
	t1 += -0.305*x[22];
	t1 += -0.424*x[29];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -0.097*x[0];
	t1 += -0.424*x[8];
	t1 += x[9];
	t1 += 0.101*x[16];
	t1 += -1.459*x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -0.097*x[1];
	t1 += -0.424*x[9];
	t1 += x[10];
	t1 += 0.101*x[17];
	t1 += -1.459*x[24];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -0.097*x[2];
	t1 += -0.424*x[10];
	t1 += x[11];
	t1 += 0.101*x[18];
	t1 += -1.459*x[25];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -0.097*x[3];
	t1 += -0.424*x[11];
	t1 += x[12];
	t1 += 0.101*x[19];
	t1 += -1.459*x[26];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -0.097*x[4];
	t1 += -0.424*x[12];
	t1 += x[13];
	t1 += 0.101*x[20];
	t1 += -1.459*x[27];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -0.097*x[5];
	t1 += -0.424*x[13];
	t1 += x[14];
	t1 += 0.101*x[21];
	t1 += -1.459*x[28];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -0.097*x[6];
	t1 += -0.424*x[14];
	t1 += x[15];
	t1 += 0.101*x[22];
	t1 += -1.459*x[29];
	c[13] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -0.914;
	J[2] = 1.;
	J[21] = 0.016;
	J[42] = -0.305;
	J[56] = -0.424;

   /*** derivatives for constraint 2 ***/

	J[3] = -0.914;
	J[5] = 1.;
	J[23] = 0.016;
	J[44] = -0.305;
	J[58] = -0.424;

   /*** derivatives for constraint 3 ***/

	J[6] = -0.914;
	J[8] = 1.;
	J[26] = 0.016;
	J[46] = -0.305;
	J[60] = -0.424;

   /*** derivatives for constraint 4 ***/

	J[9] = -0.914;
	J[11] = 1.;
	J[29] = 0.016;
	J[48] = -0.305;
	J[62] = -0.424;

   /*** derivatives for constraint 5 ***/

	J[12] = -0.914;
	J[14] = 1.;
	J[32] = 0.016;
	J[50] = -0.305;
	J[64] = -0.424;

   /*** derivatives for constraint 6 ***/

	J[15] = -0.914;
	J[17] = 1.;
	J[35] = 0.016;
	J[52] = -0.305;
	J[66] = -0.424;

   /*** derivatives for constraint 7 ***/

	J[18] = -0.914;
	J[20] = 1.;
	J[38] = 0.016;
	J[54] = -0.305;
	J[68] = -0.424;

   /*** derivatives for constraint 8 ***/

	J[1] = -0.097;
	J[22] = -0.424;
	J[24] = 1.;
	J[43] = 0.101;
	J[57] = -1.459;

   /*** derivatives for constraint 9 ***/

	J[4] = -0.097;
	J[25] = -0.424;
	J[27] = 1.;
	J[45] = 0.101;
	J[59] = -1.459;

   /*** derivatives for constraint 10 ***/

	J[7] = -0.097;
	J[28] = -0.424;
	J[30] = 1.;
	J[47] = 0.101;
	J[61] = -1.459;

   /*** derivatives for constraint 11 ***/

	J[10] = -0.097;
	J[31] = -0.424;
	J[33] = 1.;
	J[49] = 0.101;
	J[63] = -1.459;

   /*** derivatives for constraint 12 ***/

	J[13] = -0.097;
	J[34] = -0.424;
	J[36] = 1.;
	J[51] = 0.101;
	J[65] = -1.459;

   /*** derivatives for constraint 13 ***/

	J[16] = -0.097;
	J[37] = -0.424;
	J[39] = 1.;
	J[53] = 0.101;
	J[67] = -1.459;

   /*** derivatives for constraint 14 ***/

	J[19] = -0.097;
	J[40] = -0.424;
	J[41] = 1.;
	J[55] = 0.101;
	J[69] = -1.459;
	}
}
#ifdef __cplusplus
	}
#endif
