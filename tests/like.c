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
 fint like_auxcom_[1] = { 0 /* nlc */ };
 fint like_funcom_[23] = {
	9 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	7 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	7,
	8,
	8,
	8,
	8,

	/* rownos */
	1,
	1,
	1,
	2,
	2,
	3,
	3 };

 real like_boundc_[1+18+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.1,
		1.7e308,
		0.1,
		1.7e308,
		0.1,
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
		1.,
		1.,
		0.,
		1.7e308,
		0.,
		1.7e308};

 real like_x0comn_[9] = {
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		130.,
		160.,
		190.,
		15.,
		15.,
		15. };

 static real like_pd[895];
static real like_old_x[9];
static int like_xkind = -1;

 static int
like_xcheck(real *x)
{
	real *x1 = like_old_x, *xe = x + 9;
	errno = 0;
	if (like_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	like_xkind = 0;
	return 1;
	}
 real
like_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[94], dv[180];
	fint wantfg = *needfg;
	if (like_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[8] = x[0] / x[6];
	like_pd[0] = 1. / x[6];
	like_pd[1] = -like_pd[8] * like_pd[0];
	v[1] = 95. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[2] = v[1] / x[6];
	like_pd[2] = 1. / x[6];
	like_pd[3] = -v[2] * like_pd[2];
	like_pd[4] = v[2] * v[2];
	like_pd[5] = v[2] + v[2];
	v[2] = -0.5 * like_pd[4];
	like_pd[6] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	like_pd[7] = like_pd[6];
	like_pd[9] = like_pd[8] * like_pd[6];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[18] = x[1] / x[7];
	like_pd[10] = 1. / x[7];
	like_pd[11] = -like_pd[18] * like_pd[10];
	v[1] = 95. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[3] = v[1] / x[7];
	like_pd[12] = 1. / x[7];
	like_pd[13] = -v[3] * like_pd[12];
	like_pd[14] = v[3] * v[3];
	like_pd[15] = v[3] + v[3];
	v[3] = -0.5 * like_pd[14];
	like_pd[16] = exp(v[3]);
	if (errno) in_trouble("exp",v[3]);
	like_pd[17] = like_pd[16];
	v[3] = like_pd[18] * like_pd[16];
	v[3] += like_pd[9];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[27] = x[2] / x[8];
	like_pd[19] = 1. / x[8];
	like_pd[20] = -like_pd[27] * like_pd[19];
	v[4] = 95. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[5] = v[4] / x[8];
	like_pd[21] = 1. / x[8];
	like_pd[22] = -v[5] * like_pd[21];
	like_pd[23] = v[5] * v[5];
	like_pd[24] = v[5] + v[5];
	v[5] = -0.5 * like_pd[23];
	like_pd[25] = exp(v[5]);
	if (errno) in_trouble("exp",v[5]);
	like_pd[26] = like_pd[25];
	v[5] = like_pd[27] * like_pd[25];
	v[3] += v[5];
	v[3] *= 0.398942448887604;
	v[5] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	like_pd[28] = 1. / v[3];
	v[3] = -v[5];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[37] = x[0] / x[6];
	like_pd[29] = 1. / x[6];
	like_pd[30] = -like_pd[37] * like_pd[29];
	v[4] = 105. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[6] = v[4] / x[6];
	like_pd[31] = 1. / x[6];
	like_pd[32] = -v[6] * like_pd[31];
	like_pd[33] = v[6] * v[6];
	like_pd[34] = v[6] + v[6];
	v[6] = -0.5 * like_pd[33];
	like_pd[35] = exp(v[6]);
	if (errno) in_trouble("exp",v[6]);
	like_pd[36] = like_pd[35];
	like_pd[38] = like_pd[37] * like_pd[35];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[47] = x[1] / x[7];
	like_pd[39] = 1. / x[7];
	like_pd[40] = -like_pd[47] * like_pd[39];
	v[4] = 105. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[7] = v[4] / x[7];
	like_pd[41] = 1. / x[7];
	like_pd[42] = -v[7] * like_pd[41];
	like_pd[43] = v[7] * v[7];
	like_pd[44] = v[7] + v[7];
	v[7] = -0.5 * like_pd[43];
	like_pd[45] = exp(v[7]);
	if (errno) in_trouble("exp",v[7]);
	like_pd[46] = like_pd[45];
	v[7] = like_pd[47] * like_pd[45];
	v[7] += like_pd[38];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[56] = x[2] / x[8];
	like_pd[48] = 1. / x[8];
	like_pd[49] = -like_pd[56] * like_pd[48];
	v[8] = 105. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[9] = v[8] / x[8];
	like_pd[50] = 1. / x[8];
	like_pd[51] = -v[9] * like_pd[50];
	like_pd[52] = v[9] * v[9];
	like_pd[53] = v[9] + v[9];
	v[9] = -0.5 * like_pd[52];
	like_pd[54] = exp(v[9]);
	if (errno) in_trouble("exp",v[9]);
	like_pd[55] = like_pd[54];
	v[9] = like_pd[56] * like_pd[54];
	v[7] += v[9];
	v[7] *= 0.398942448887604;
	v[9] = log(v[7]);
	if (errno) in_trouble("log",v[7]);
	like_pd[57] = 1. / v[7];
	v[7] = -v[9];
	v[3] += v[7];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[66] = x[0] / x[6];
	like_pd[58] = 1. / x[6];
	like_pd[59] = -like_pd[66] * like_pd[58];
	v[9] = 110. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[8] = v[9] / x[6];
	like_pd[60] = 1. / x[6];
	like_pd[61] = -v[8] * like_pd[60];
	like_pd[62] = v[8] * v[8];
	like_pd[63] = v[8] + v[8];
	v[8] = -0.5 * like_pd[62];
	like_pd[64] = exp(v[8]);
	if (errno) in_trouble("exp",v[8]);
	like_pd[65] = like_pd[64];
	like_pd[67] = like_pd[66] * like_pd[64];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[76] = x[1] / x[7];
	like_pd[68] = 1. / x[7];
	like_pd[69] = -like_pd[76] * like_pd[68];
	v[9] = 110. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[10] = v[9] / x[7];
	like_pd[70] = 1. / x[7];
	like_pd[71] = -v[10] * like_pd[70];
	like_pd[72] = v[10] * v[10];
	like_pd[73] = v[10] + v[10];
	v[10] = -0.5 * like_pd[72];
	like_pd[74] = exp(v[10]);
	if (errno) in_trouble("exp",v[10]);
	like_pd[75] = like_pd[74];
	v[10] = like_pd[76] * like_pd[74];
	v[10] += like_pd[67];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[85] = x[2] / x[8];
	like_pd[77] = 1. / x[8];
	like_pd[78] = -like_pd[85] * like_pd[77];
	v[11] = 110. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[12] = v[11] / x[8];
	like_pd[79] = 1. / x[8];
	like_pd[80] = -v[12] * like_pd[79];
	like_pd[81] = v[12] * v[12];
	like_pd[82] = v[12] + v[12];
	v[12] = -0.5 * like_pd[81];
	like_pd[83] = exp(v[12]);
	if (errno) in_trouble("exp",v[12]);
	like_pd[84] = like_pd[83];
	v[12] = like_pd[85] * like_pd[83];
	v[10] += v[12];
	v[10] *= 0.398942448887604;
	like_pd[86] = log(v[10]);
	if (errno) in_trouble("log",v[10]);
	like_pd[87] = 1. / v[10];
	v[10] = -4. * like_pd[86];
	v[3] += v[10];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[96] = x[0] / x[6];
	like_pd[88] = 1. / x[6];
	like_pd[89] = -like_pd[96] * like_pd[88];
	v[12] = 115. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[11] = v[12] / x[6];
	like_pd[90] = 1. / x[6];
	like_pd[91] = -v[11] * like_pd[90];
	like_pd[92] = v[11] * v[11];
	like_pd[93] = v[11] + v[11];
	v[11] = -0.5 * like_pd[92];
	like_pd[94] = exp(v[11]);
	if (errno) in_trouble("exp",v[11]);
	like_pd[95] = like_pd[94];
	like_pd[97] = like_pd[96] * like_pd[94];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[106] = x[1] / x[7];
	like_pd[98] = 1. / x[7];
	like_pd[99] = -like_pd[106] * like_pd[98];
	v[12] = 115. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[13] = v[12] / x[7];
	like_pd[100] = 1. / x[7];
	like_pd[101] = -v[13] * like_pd[100];
	like_pd[102] = v[13] * v[13];
	like_pd[103] = v[13] + v[13];
	v[13] = -0.5 * like_pd[102];
	like_pd[104] = exp(v[13]);
	if (errno) in_trouble("exp",v[13]);
	like_pd[105] = like_pd[104];
	v[13] = like_pd[106] * like_pd[104];
	v[13] += like_pd[97];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[115] = x[2] / x[8];
	like_pd[107] = 1. / x[8];
	like_pd[108] = -like_pd[115] * like_pd[107];
	v[14] = 115. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[15] = v[14] / x[8];
	like_pd[109] = 1. / x[8];
	like_pd[110] = -v[15] * like_pd[109];
	like_pd[111] = v[15] * v[15];
	like_pd[112] = v[15] + v[15];
	v[15] = -0.5 * like_pd[111];
	like_pd[113] = exp(v[15]);
	if (errno) in_trouble("exp",v[15]);
	like_pd[114] = like_pd[113];
	v[15] = like_pd[115] * like_pd[113];
	v[13] += v[15];
	v[13] *= 0.398942448887604;
	like_pd[116] = log(v[13]);
	if (errno) in_trouble("log",v[13]);
	like_pd[117] = 1. / v[13];
	v[13] = -4. * like_pd[116];
	v[3] += v[13];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[126] = x[0] / x[6];
	like_pd[118] = 1. / x[6];
	like_pd[119] = -like_pd[126] * like_pd[118];
	v[15] = 120. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[14] = v[15] / x[6];
	like_pd[120] = 1. / x[6];
	like_pd[121] = -v[14] * like_pd[120];
	like_pd[122] = v[14] * v[14];
	like_pd[123] = v[14] + v[14];
	v[14] = -0.5 * like_pd[122];
	like_pd[124] = exp(v[14]);
	if (errno) in_trouble("exp",v[14]);
	like_pd[125] = like_pd[124];
	like_pd[127] = like_pd[126] * like_pd[124];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[136] = x[1] / x[7];
	like_pd[128] = 1. / x[7];
	like_pd[129] = -like_pd[136] * like_pd[128];
	v[15] = 120. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[16] = v[15] / x[7];
	like_pd[130] = 1. / x[7];
	like_pd[131] = -v[16] * like_pd[130];
	like_pd[132] = v[16] * v[16];
	like_pd[133] = v[16] + v[16];
	v[16] = -0.5 * like_pd[132];
	like_pd[134] = exp(v[16]);
	if (errno) in_trouble("exp",v[16]);
	like_pd[135] = like_pd[134];
	v[16] = like_pd[136] * like_pd[134];
	v[16] += like_pd[127];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[145] = x[2] / x[8];
	like_pd[137] = 1. / x[8];
	like_pd[138] = -like_pd[145] * like_pd[137];
	v[17] = 120. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[18] = v[17] / x[8];
	like_pd[139] = 1. / x[8];
	like_pd[140] = -v[18] * like_pd[139];
	like_pd[141] = v[18] * v[18];
	like_pd[142] = v[18] + v[18];
	v[18] = -0.5 * like_pd[141];
	like_pd[143] = exp(v[18]);
	if (errno) in_trouble("exp",v[18]);
	like_pd[144] = like_pd[143];
	v[18] = like_pd[145] * like_pd[143];
	v[16] += v[18];
	v[16] *= 0.398942448887604;
	like_pd[146] = log(v[16]);
	if (errno) in_trouble("log",v[16]);
	like_pd[147] = 1. / v[16];
	v[16] = -15. * like_pd[146];
	v[3] += v[16];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[156] = x[0] / x[6];
	like_pd[148] = 1. / x[6];
	like_pd[149] = -like_pd[156] * like_pd[148];
	v[18] = 125. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[17] = v[18] / x[6];
	like_pd[150] = 1. / x[6];
	like_pd[151] = -v[17] * like_pd[150];
	like_pd[152] = v[17] * v[17];
	like_pd[153] = v[17] + v[17];
	v[17] = -0.5 * like_pd[152];
	like_pd[154] = exp(v[17]);
	if (errno) in_trouble("exp",v[17]);
	like_pd[155] = like_pd[154];
	like_pd[157] = like_pd[156] * like_pd[154];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[166] = x[1] / x[7];
	like_pd[158] = 1. / x[7];
	like_pd[159] = -like_pd[166] * like_pd[158];
	v[18] = 125. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[19] = v[18] / x[7];
	like_pd[160] = 1. / x[7];
	like_pd[161] = -v[19] * like_pd[160];
	like_pd[162] = v[19] * v[19];
	like_pd[163] = v[19] + v[19];
	v[19] = -0.5 * like_pd[162];
	like_pd[164] = exp(v[19]);
	if (errno) in_trouble("exp",v[19]);
	like_pd[165] = like_pd[164];
	v[19] = like_pd[166] * like_pd[164];
	v[19] += like_pd[157];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[175] = x[2] / x[8];
	like_pd[167] = 1. / x[8];
	like_pd[168] = -like_pd[175] * like_pd[167];
	v[20] = 125. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[21] = v[20] / x[8];
	like_pd[169] = 1. / x[8];
	like_pd[170] = -v[21] * like_pd[169];
	like_pd[171] = v[21] * v[21];
	like_pd[172] = v[21] + v[21];
	v[21] = -0.5 * like_pd[171];
	like_pd[173] = exp(v[21]);
	if (errno) in_trouble("exp",v[21]);
	like_pd[174] = like_pd[173];
	v[21] = like_pd[175] * like_pd[173];
	v[19] += v[21];
	v[19] *= 0.398942448887604;
	like_pd[176] = log(v[19]);
	if (errno) in_trouble("log",v[19]);
	like_pd[177] = 1. / v[19];
	v[19] = -15. * like_pd[176];
	v[3] += v[19];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[186] = x[0] / x[6];
	like_pd[178] = 1. / x[6];
	like_pd[179] = -like_pd[186] * like_pd[178];
	v[21] = 130. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[20] = v[21] / x[6];
	like_pd[180] = 1. / x[6];
	like_pd[181] = -v[20] * like_pd[180];
	like_pd[182] = v[20] * v[20];
	like_pd[183] = v[20] + v[20];
	v[20] = -0.5 * like_pd[182];
	like_pd[184] = exp(v[20]);
	if (errno) in_trouble("exp",v[20]);
	like_pd[185] = like_pd[184];
	like_pd[187] = like_pd[186] * like_pd[184];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[196] = x[1] / x[7];
	like_pd[188] = 1. / x[7];
	like_pd[189] = -like_pd[196] * like_pd[188];
	v[21] = 130. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[22] = v[21] / x[7];
	like_pd[190] = 1. / x[7];
	like_pd[191] = -v[22] * like_pd[190];
	like_pd[192] = v[22] * v[22];
	like_pd[193] = v[22] + v[22];
	v[22] = -0.5 * like_pd[192];
	like_pd[194] = exp(v[22]);
	if (errno) in_trouble("exp",v[22]);
	like_pd[195] = like_pd[194];
	v[22] = like_pd[196] * like_pd[194];
	v[22] += like_pd[187];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[205] = x[2] / x[8];
	like_pd[197] = 1. / x[8];
	like_pd[198] = -like_pd[205] * like_pd[197];
	v[23] = 130. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[24] = v[23] / x[8];
	like_pd[199] = 1. / x[8];
	like_pd[200] = -v[24] * like_pd[199];
	like_pd[201] = v[24] * v[24];
	like_pd[202] = v[24] + v[24];
	v[24] = -0.5 * like_pd[201];
	like_pd[203] = exp(v[24]);
	if (errno) in_trouble("exp",v[24]);
	like_pd[204] = like_pd[203];
	v[24] = like_pd[205] * like_pd[203];
	v[22] += v[24];
	v[22] *= 0.398942448887604;
	like_pd[206] = log(v[22]);
	if (errno) in_trouble("log",v[22]);
	like_pd[207] = 1. / v[22];
	v[22] = -15. * like_pd[206];
	v[3] += v[22];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[216] = x[0] / x[6];
	like_pd[208] = 1. / x[6];
	like_pd[209] = -like_pd[216] * like_pd[208];
	v[24] = 135. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[23] = v[24] / x[6];
	like_pd[210] = 1. / x[6];
	like_pd[211] = -v[23] * like_pd[210];
	like_pd[212] = v[23] * v[23];
	like_pd[213] = v[23] + v[23];
	v[23] = -0.5 * like_pd[212];
	like_pd[214] = exp(v[23]);
	if (errno) in_trouble("exp",v[23]);
	like_pd[215] = like_pd[214];
	like_pd[217] = like_pd[216] * like_pd[214];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[226] = x[1] / x[7];
	like_pd[218] = 1. / x[7];
	like_pd[219] = -like_pd[226] * like_pd[218];
	v[24] = 135. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[25] = v[24] / x[7];
	like_pd[220] = 1. / x[7];
	like_pd[221] = -v[25] * like_pd[220];
	like_pd[222] = v[25] * v[25];
	like_pd[223] = v[25] + v[25];
	v[25] = -0.5 * like_pd[222];
	like_pd[224] = exp(v[25]);
	if (errno) in_trouble("exp",v[25]);
	like_pd[225] = like_pd[224];
	v[25] = like_pd[226] * like_pd[224];
	v[25] += like_pd[217];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[235] = x[2] / x[8];
	like_pd[227] = 1. / x[8];
	like_pd[228] = -like_pd[235] * like_pd[227];
	v[26] = 135. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[27] = v[26] / x[8];
	like_pd[229] = 1. / x[8];
	like_pd[230] = -v[27] * like_pd[229];
	like_pd[231] = v[27] * v[27];
	like_pd[232] = v[27] + v[27];
	v[27] = -0.5 * like_pd[231];
	like_pd[233] = exp(v[27]);
	if (errno) in_trouble("exp",v[27]);
	like_pd[234] = like_pd[233];
	v[27] = like_pd[235] * like_pd[233];
	v[25] += v[27];
	v[25] *= 0.398942448887604;
	like_pd[236] = log(v[25]);
	if (errno) in_trouble("log",v[25]);
	like_pd[237] = 1. / v[25];
	v[25] = -13. * like_pd[236];
	v[3] += v[25];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[246] = x[0] / x[6];
	like_pd[238] = 1. / x[6];
	like_pd[239] = -like_pd[246] * like_pd[238];
	v[27] = 140. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[26] = v[27] / x[6];
	like_pd[240] = 1. / x[6];
	like_pd[241] = -v[26] * like_pd[240];
	like_pd[242] = v[26] * v[26];
	like_pd[243] = v[26] + v[26];
	v[26] = -0.5 * like_pd[242];
	like_pd[244] = exp(v[26]);
	if (errno) in_trouble("exp",v[26]);
	like_pd[245] = like_pd[244];
	like_pd[247] = like_pd[246] * like_pd[244];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[256] = x[1] / x[7];
	like_pd[248] = 1. / x[7];
	like_pd[249] = -like_pd[256] * like_pd[248];
	v[27] = 140. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[28] = v[27] / x[7];
	like_pd[250] = 1. / x[7];
	like_pd[251] = -v[28] * like_pd[250];
	like_pd[252] = v[28] * v[28];
	like_pd[253] = v[28] + v[28];
	v[28] = -0.5 * like_pd[252];
	like_pd[254] = exp(v[28]);
	if (errno) in_trouble("exp",v[28]);
	like_pd[255] = like_pd[254];
	v[28] = like_pd[256] * like_pd[254];
	v[28] += like_pd[247];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[265] = x[2] / x[8];
	like_pd[257] = 1. / x[8];
	like_pd[258] = -like_pd[265] * like_pd[257];
	v[29] = 140. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[30] = v[29] / x[8];
	like_pd[259] = 1. / x[8];
	like_pd[260] = -v[30] * like_pd[259];
	like_pd[261] = v[30] * v[30];
	like_pd[262] = v[30] + v[30];
	v[30] = -0.5 * like_pd[261];
	like_pd[263] = exp(v[30]);
	if (errno) in_trouble("exp",v[30]);
	like_pd[264] = like_pd[263];
	v[30] = like_pd[265] * like_pd[263];
	v[28] += v[30];
	v[28] *= 0.398942448887604;
	like_pd[266] = log(v[28]);
	if (errno) in_trouble("log",v[28]);
	like_pd[267] = 1. / v[28];
	v[28] = -21. * like_pd[266];
	v[3] += v[28];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[276] = x[0] / x[6];
	like_pd[268] = 1. / x[6];
	like_pd[269] = -like_pd[276] * like_pd[268];
	v[30] = 145. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[29] = v[30] / x[6];
	like_pd[270] = 1. / x[6];
	like_pd[271] = -v[29] * like_pd[270];
	like_pd[272] = v[29] * v[29];
	like_pd[273] = v[29] + v[29];
	v[29] = -0.5 * like_pd[272];
	like_pd[274] = exp(v[29]);
	if (errno) in_trouble("exp",v[29]);
	like_pd[275] = like_pd[274];
	like_pd[277] = like_pd[276] * like_pd[274];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[286] = x[1] / x[7];
	like_pd[278] = 1. / x[7];
	like_pd[279] = -like_pd[286] * like_pd[278];
	v[30] = 145. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[31] = v[30] / x[7];
	like_pd[280] = 1. / x[7];
	like_pd[281] = -v[31] * like_pd[280];
	like_pd[282] = v[31] * v[31];
	like_pd[283] = v[31] + v[31];
	v[31] = -0.5 * like_pd[282];
	like_pd[284] = exp(v[31]);
	if (errno) in_trouble("exp",v[31]);
	like_pd[285] = like_pd[284];
	v[31] = like_pd[286] * like_pd[284];
	v[31] += like_pd[277];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[295] = x[2] / x[8];
	like_pd[287] = 1. / x[8];
	like_pd[288] = -like_pd[295] * like_pd[287];
	v[32] = 145. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[33] = v[32] / x[8];
	like_pd[289] = 1. / x[8];
	like_pd[290] = -v[33] * like_pd[289];
	like_pd[291] = v[33] * v[33];
	like_pd[292] = v[33] + v[33];
	v[33] = -0.5 * like_pd[291];
	like_pd[293] = exp(v[33]);
	if (errno) in_trouble("exp",v[33]);
	like_pd[294] = like_pd[293];
	v[33] = like_pd[295] * like_pd[293];
	v[31] += v[33];
	v[31] *= 0.398942448887604;
	like_pd[296] = log(v[31]);
	if (errno) in_trouble("log",v[31]);
	like_pd[297] = 1. / v[31];
	v[31] = -12. * like_pd[296];
	v[3] += v[31];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[306] = x[0] / x[6];
	like_pd[298] = 1. / x[6];
	like_pd[299] = -like_pd[306] * like_pd[298];
	v[33] = 150. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[32] = v[33] / x[6];
	like_pd[300] = 1. / x[6];
	like_pd[301] = -v[32] * like_pd[300];
	like_pd[302] = v[32] * v[32];
	like_pd[303] = v[32] + v[32];
	v[32] = -0.5 * like_pd[302];
	like_pd[304] = exp(v[32]);
	if (errno) in_trouble("exp",v[32]);
	like_pd[305] = like_pd[304];
	like_pd[307] = like_pd[306] * like_pd[304];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[316] = x[1] / x[7];
	like_pd[308] = 1. / x[7];
	like_pd[309] = -like_pd[316] * like_pd[308];
	v[33] = 150. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[34] = v[33] / x[7];
	like_pd[310] = 1. / x[7];
	like_pd[311] = -v[34] * like_pd[310];
	like_pd[312] = v[34] * v[34];
	like_pd[313] = v[34] + v[34];
	v[34] = -0.5 * like_pd[312];
	like_pd[314] = exp(v[34]);
	if (errno) in_trouble("exp",v[34]);
	like_pd[315] = like_pd[314];
	v[34] = like_pd[316] * like_pd[314];
	v[34] += like_pd[307];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[325] = x[2] / x[8];
	like_pd[317] = 1. / x[8];
	like_pd[318] = -like_pd[325] * like_pd[317];
	v[35] = 150. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[36] = v[35] / x[8];
	like_pd[319] = 1. / x[8];
	like_pd[320] = -v[36] * like_pd[319];
	like_pd[321] = v[36] * v[36];
	like_pd[322] = v[36] + v[36];
	v[36] = -0.5 * like_pd[321];
	like_pd[323] = exp(v[36]);
	if (errno) in_trouble("exp",v[36]);
	like_pd[324] = like_pd[323];
	v[36] = like_pd[325] * like_pd[323];
	v[34] += v[36];
	v[34] *= 0.398942448887604;
	like_pd[326] = log(v[34]);
	if (errno) in_trouble("log",v[34]);
	like_pd[327] = 1. / v[34];
	v[34] = -17. * like_pd[326];
	v[3] += v[34];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[336] = x[0] / x[6];
	like_pd[328] = 1. / x[6];
	like_pd[329] = -like_pd[336] * like_pd[328];
	v[36] = 155. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[35] = v[36] / x[6];
	like_pd[330] = 1. / x[6];
	like_pd[331] = -v[35] * like_pd[330];
	like_pd[332] = v[35] * v[35];
	like_pd[333] = v[35] + v[35];
	v[35] = -0.5 * like_pd[332];
	like_pd[334] = exp(v[35]);
	if (errno) in_trouble("exp",v[35]);
	like_pd[335] = like_pd[334];
	like_pd[337] = like_pd[336] * like_pd[334];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[346] = x[1] / x[7];
	like_pd[338] = 1. / x[7];
	like_pd[339] = -like_pd[346] * like_pd[338];
	v[36] = 155. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[37] = v[36] / x[7];
	like_pd[340] = 1. / x[7];
	like_pd[341] = -v[37] * like_pd[340];
	like_pd[342] = v[37] * v[37];
	like_pd[343] = v[37] + v[37];
	v[37] = -0.5 * like_pd[342];
	like_pd[344] = exp(v[37]);
	if (errno) in_trouble("exp",v[37]);
	like_pd[345] = like_pd[344];
	v[37] = like_pd[346] * like_pd[344];
	v[37] += like_pd[337];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[355] = x[2] / x[8];
	like_pd[347] = 1. / x[8];
	like_pd[348] = -like_pd[355] * like_pd[347];
	v[38] = 155. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[39] = v[38] / x[8];
	like_pd[349] = 1. / x[8];
	like_pd[350] = -v[39] * like_pd[349];
	like_pd[351] = v[39] * v[39];
	like_pd[352] = v[39] + v[39];
	v[39] = -0.5 * like_pd[351];
	like_pd[353] = exp(v[39]);
	if (errno) in_trouble("exp",v[39]);
	like_pd[354] = like_pd[353];
	v[39] = like_pd[355] * like_pd[353];
	v[37] += v[39];
	v[37] *= 0.398942448887604;
	like_pd[356] = log(v[37]);
	if (errno) in_trouble("log",v[37]);
	like_pd[357] = 1. / v[37];
	v[37] = -4. * like_pd[356];
	v[3] += v[37];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[366] = x[0] / x[6];
	like_pd[358] = 1. / x[6];
	like_pd[359] = -like_pd[366] * like_pd[358];
	v[39] = 160. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[38] = v[39] / x[6];
	like_pd[360] = 1. / x[6];
	like_pd[361] = -v[38] * like_pd[360];
	like_pd[362] = v[38] * v[38];
	like_pd[363] = v[38] + v[38];
	v[38] = -0.5 * like_pd[362];
	like_pd[364] = exp(v[38]);
	if (errno) in_trouble("exp",v[38]);
	like_pd[365] = like_pd[364];
	like_pd[367] = like_pd[366] * like_pd[364];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[376] = x[1] / x[7];
	like_pd[368] = 1. / x[7];
	like_pd[369] = -like_pd[376] * like_pd[368];
	v[39] = 160. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[40] = v[39] / x[7];
	like_pd[370] = 1. / x[7];
	like_pd[371] = -v[40] * like_pd[370];
	like_pd[372] = v[40] * v[40];
	like_pd[373] = v[40] + v[40];
	v[40] = -0.5 * like_pd[372];
	like_pd[374] = exp(v[40]);
	if (errno) in_trouble("exp",v[40]);
	like_pd[375] = like_pd[374];
	v[40] = like_pd[376] * like_pd[374];
	v[40] += like_pd[367];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[385] = x[2] / x[8];
	like_pd[377] = 1. / x[8];
	like_pd[378] = -like_pd[385] * like_pd[377];
	v[41] = 160. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[42] = v[41] / x[8];
	like_pd[379] = 1. / x[8];
	like_pd[380] = -v[42] * like_pd[379];
	like_pd[381] = v[42] * v[42];
	like_pd[382] = v[42] + v[42];
	v[42] = -0.5 * like_pd[381];
	like_pd[383] = exp(v[42]);
	if (errno) in_trouble("exp",v[42]);
	like_pd[384] = like_pd[383];
	v[42] = like_pd[385] * like_pd[383];
	v[40] += v[42];
	v[40] *= 0.398942448887604;
	like_pd[386] = log(v[40]);
	if (errno) in_trouble("log",v[40]);
	like_pd[387] = 1. / v[40];
	v[40] = -20. * like_pd[386];
	v[3] += v[40];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[396] = x[0] / x[6];
	like_pd[388] = 1. / x[6];
	like_pd[389] = -like_pd[396] * like_pd[388];
	v[42] = 165. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[41] = v[42] / x[6];
	like_pd[390] = 1. / x[6];
	like_pd[391] = -v[41] * like_pd[390];
	like_pd[392] = v[41] * v[41];
	like_pd[393] = v[41] + v[41];
	v[41] = -0.5 * like_pd[392];
	like_pd[394] = exp(v[41]);
	if (errno) in_trouble("exp",v[41]);
	like_pd[395] = like_pd[394];
	like_pd[397] = like_pd[396] * like_pd[394];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[406] = x[1] / x[7];
	like_pd[398] = 1. / x[7];
	like_pd[399] = -like_pd[406] * like_pd[398];
	v[42] = 165. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[43] = v[42] / x[7];
	like_pd[400] = 1. / x[7];
	like_pd[401] = -v[43] * like_pd[400];
	like_pd[402] = v[43] * v[43];
	like_pd[403] = v[43] + v[43];
	v[43] = -0.5 * like_pd[402];
	like_pd[404] = exp(v[43]);
	if (errno) in_trouble("exp",v[43]);
	like_pd[405] = like_pd[404];
	v[43] = like_pd[406] * like_pd[404];
	v[43] += like_pd[397];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[415] = x[2] / x[8];
	like_pd[407] = 1. / x[8];
	like_pd[408] = -like_pd[415] * like_pd[407];
	v[44] = 165. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[45] = v[44] / x[8];
	like_pd[409] = 1. / x[8];
	like_pd[410] = -v[45] * like_pd[409];
	like_pd[411] = v[45] * v[45];
	like_pd[412] = v[45] + v[45];
	v[45] = -0.5 * like_pd[411];
	like_pd[413] = exp(v[45]);
	if (errno) in_trouble("exp",v[45]);
	like_pd[414] = like_pd[413];
	v[45] = like_pd[415] * like_pd[413];
	v[43] += v[45];
	v[43] *= 0.398942448887604;
	like_pd[416] = log(v[43]);
	if (errno) in_trouble("log",v[43]);
	like_pd[417] = 1. / v[43];
	v[43] = -8. * like_pd[416];
	v[3] += v[43];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[426] = x[0] / x[6];
	like_pd[418] = 1. / x[6];
	like_pd[419] = -like_pd[426] * like_pd[418];
	v[45] = 170. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[44] = v[45] / x[6];
	like_pd[420] = 1. / x[6];
	like_pd[421] = -v[44] * like_pd[420];
	like_pd[422] = v[44] * v[44];
	like_pd[423] = v[44] + v[44];
	v[44] = -0.5 * like_pd[422];
	like_pd[424] = exp(v[44]);
	if (errno) in_trouble("exp",v[44]);
	like_pd[425] = like_pd[424];
	like_pd[427] = like_pd[426] * like_pd[424];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[436] = x[1] / x[7];
	like_pd[428] = 1. / x[7];
	like_pd[429] = -like_pd[436] * like_pd[428];
	v[45] = 170. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[46] = v[45] / x[7];
	like_pd[430] = 1. / x[7];
	like_pd[431] = -v[46] * like_pd[430];
	like_pd[432] = v[46] * v[46];
	like_pd[433] = v[46] + v[46];
	v[46] = -0.5 * like_pd[432];
	like_pd[434] = exp(v[46]);
	if (errno) in_trouble("exp",v[46]);
	like_pd[435] = like_pd[434];
	v[46] = like_pd[436] * like_pd[434];
	v[46] += like_pd[427];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[445] = x[2] / x[8];
	like_pd[437] = 1. / x[8];
	like_pd[438] = -like_pd[445] * like_pd[437];
	v[47] = 170. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[48] = v[47] / x[8];
	like_pd[439] = 1. / x[8];
	like_pd[440] = -v[48] * like_pd[439];
	like_pd[441] = v[48] * v[48];
	like_pd[442] = v[48] + v[48];
	v[48] = -0.5 * like_pd[441];
	like_pd[443] = exp(v[48]);
	if (errno) in_trouble("exp",v[48]);
	like_pd[444] = like_pd[443];
	v[48] = like_pd[445] * like_pd[443];
	v[46] += v[48];
	v[46] *= 0.398942448887604;
	like_pd[446] = log(v[46]);
	if (errno) in_trouble("log",v[46]);
	like_pd[447] = 1. / v[46];
	v[46] = -17. * like_pd[446];
	v[3] += v[46];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[456] = x[0] / x[6];
	like_pd[448] = 1. / x[6];
	like_pd[449] = -like_pd[456] * like_pd[448];
	v[48] = 175. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[47] = v[48] / x[6];
	like_pd[450] = 1. / x[6];
	like_pd[451] = -v[47] * like_pd[450];
	like_pd[452] = v[47] * v[47];
	like_pd[453] = v[47] + v[47];
	v[47] = -0.5 * like_pd[452];
	like_pd[454] = exp(v[47]);
	if (errno) in_trouble("exp",v[47]);
	like_pd[455] = like_pd[454];
	like_pd[457] = like_pd[456] * like_pd[454];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[466] = x[1] / x[7];
	like_pd[458] = 1. / x[7];
	like_pd[459] = -like_pd[466] * like_pd[458];
	v[48] = 175. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[49] = v[48] / x[7];
	like_pd[460] = 1. / x[7];
	like_pd[461] = -v[49] * like_pd[460];
	like_pd[462] = v[49] * v[49];
	like_pd[463] = v[49] + v[49];
	v[49] = -0.5 * like_pd[462];
	like_pd[464] = exp(v[49]);
	if (errno) in_trouble("exp",v[49]);
	like_pd[465] = like_pd[464];
	v[49] = like_pd[466] * like_pd[464];
	v[49] += like_pd[457];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[475] = x[2] / x[8];
	like_pd[467] = 1. / x[8];
	like_pd[468] = -like_pd[475] * like_pd[467];
	v[50] = 175. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[51] = v[50] / x[8];
	like_pd[469] = 1. / x[8];
	like_pd[470] = -v[51] * like_pd[469];
	like_pd[471] = v[51] * v[51];
	like_pd[472] = v[51] + v[51];
	v[51] = -0.5 * like_pd[471];
	like_pd[473] = exp(v[51]);
	if (errno) in_trouble("exp",v[51]);
	like_pd[474] = like_pd[473];
	v[51] = like_pd[475] * like_pd[473];
	v[49] += v[51];
	v[49] *= 0.398942448887604;
	like_pd[476] = log(v[49]);
	if (errno) in_trouble("log",v[49]);
	like_pd[477] = 1. / v[49];
	v[49] = -8. * like_pd[476];
	v[3] += v[49];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[486] = x[0] / x[6];
	like_pd[478] = 1. / x[6];
	like_pd[479] = -like_pd[486] * like_pd[478];
	v[51] = 180. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[50] = v[51] / x[6];
	like_pd[480] = 1. / x[6];
	like_pd[481] = -v[50] * like_pd[480];
	like_pd[482] = v[50] * v[50];
	like_pd[483] = v[50] + v[50];
	v[50] = -0.5 * like_pd[482];
	like_pd[484] = exp(v[50]);
	if (errno) in_trouble("exp",v[50]);
	like_pd[485] = like_pd[484];
	like_pd[487] = like_pd[486] * like_pd[484];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[496] = x[1] / x[7];
	like_pd[488] = 1. / x[7];
	like_pd[489] = -like_pd[496] * like_pd[488];
	v[51] = 180. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[52] = v[51] / x[7];
	like_pd[490] = 1. / x[7];
	like_pd[491] = -v[52] * like_pd[490];
	like_pd[492] = v[52] * v[52];
	like_pd[493] = v[52] + v[52];
	v[52] = -0.5 * like_pd[492];
	like_pd[494] = exp(v[52]);
	if (errno) in_trouble("exp",v[52]);
	like_pd[495] = like_pd[494];
	v[52] = like_pd[496] * like_pd[494];
	v[52] += like_pd[487];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[505] = x[2] / x[8];
	like_pd[497] = 1. / x[8];
	like_pd[498] = -like_pd[505] * like_pd[497];
	v[53] = 180. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[54] = v[53] / x[8];
	like_pd[499] = 1. / x[8];
	like_pd[500] = -v[54] * like_pd[499];
	like_pd[501] = v[54] * v[54];
	like_pd[502] = v[54] + v[54];
	v[54] = -0.5 * like_pd[501];
	like_pd[503] = exp(v[54]);
	if (errno) in_trouble("exp",v[54]);
	like_pd[504] = like_pd[503];
	v[54] = like_pd[505] * like_pd[503];
	v[52] += v[54];
	v[52] *= 0.398942448887604;
	like_pd[506] = log(v[52]);
	if (errno) in_trouble("log",v[52]);
	like_pd[507] = 1. / v[52];
	v[52] = -6. * like_pd[506];
	v[3] += v[52];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[516] = x[0] / x[6];
	like_pd[508] = 1. / x[6];
	like_pd[509] = -like_pd[516] * like_pd[508];
	v[54] = 185. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[53] = v[54] / x[6];
	like_pd[510] = 1. / x[6];
	like_pd[511] = -v[53] * like_pd[510];
	like_pd[512] = v[53] * v[53];
	like_pd[513] = v[53] + v[53];
	v[53] = -0.5 * like_pd[512];
	like_pd[514] = exp(v[53]);
	if (errno) in_trouble("exp",v[53]);
	like_pd[515] = like_pd[514];
	like_pd[517] = like_pd[516] * like_pd[514];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[526] = x[1] / x[7];
	like_pd[518] = 1. / x[7];
	like_pd[519] = -like_pd[526] * like_pd[518];
	v[54] = 185. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[55] = v[54] / x[7];
	like_pd[520] = 1. / x[7];
	like_pd[521] = -v[55] * like_pd[520];
	like_pd[522] = v[55] * v[55];
	like_pd[523] = v[55] + v[55];
	v[55] = -0.5 * like_pd[522];
	like_pd[524] = exp(v[55]);
	if (errno) in_trouble("exp",v[55]);
	like_pd[525] = like_pd[524];
	v[55] = like_pd[526] * like_pd[524];
	v[55] += like_pd[517];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[535] = x[2] / x[8];
	like_pd[527] = 1. / x[8];
	like_pd[528] = -like_pd[535] * like_pd[527];
	v[56] = 185. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[57] = v[56] / x[8];
	like_pd[529] = 1. / x[8];
	like_pd[530] = -v[57] * like_pd[529];
	like_pd[531] = v[57] * v[57];
	like_pd[532] = v[57] + v[57];
	v[57] = -0.5 * like_pd[531];
	like_pd[533] = exp(v[57]);
	if (errno) in_trouble("exp",v[57]);
	like_pd[534] = like_pd[533];
	v[57] = like_pd[535] * like_pd[533];
	v[55] += v[57];
	v[55] *= 0.398942448887604;
	like_pd[536] = log(v[55]);
	if (errno) in_trouble("log",v[55]);
	like_pd[537] = 1. / v[55];
	v[55] = -6. * like_pd[536];
	v[3] += v[55];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[546] = x[0] / x[6];
	like_pd[538] = 1. / x[6];
	like_pd[539] = -like_pd[546] * like_pd[538];
	v[57] = 190. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[56] = v[57] / x[6];
	like_pd[540] = 1. / x[6];
	like_pd[541] = -v[56] * like_pd[540];
	like_pd[542] = v[56] * v[56];
	like_pd[543] = v[56] + v[56];
	v[56] = -0.5 * like_pd[542];
	like_pd[544] = exp(v[56]);
	if (errno) in_trouble("exp",v[56]);
	like_pd[545] = like_pd[544];
	like_pd[547] = like_pd[546] * like_pd[544];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[556] = x[1] / x[7];
	like_pd[548] = 1. / x[7];
	like_pd[549] = -like_pd[556] * like_pd[548];
	v[57] = 190. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[58] = v[57] / x[7];
	like_pd[550] = 1. / x[7];
	like_pd[551] = -v[58] * like_pd[550];
	like_pd[552] = v[58] * v[58];
	like_pd[553] = v[58] + v[58];
	v[58] = -0.5 * like_pd[552];
	like_pd[554] = exp(v[58]);
	if (errno) in_trouble("exp",v[58]);
	like_pd[555] = like_pd[554];
	v[58] = like_pd[556] * like_pd[554];
	v[58] += like_pd[547];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[565] = x[2] / x[8];
	like_pd[557] = 1. / x[8];
	like_pd[558] = -like_pd[565] * like_pd[557];
	v[59] = 190. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[60] = v[59] / x[8];
	like_pd[559] = 1. / x[8];
	like_pd[560] = -v[60] * like_pd[559];
	like_pd[561] = v[60] * v[60];
	like_pd[562] = v[60] + v[60];
	v[60] = -0.5 * like_pd[561];
	like_pd[563] = exp(v[60]);
	if (errno) in_trouble("exp",v[60]);
	like_pd[564] = like_pd[563];
	v[60] = like_pd[565] * like_pd[563];
	v[58] += v[60];
	v[58] *= 0.398942448887604;
	like_pd[566] = log(v[58]);
	if (errno) in_trouble("log",v[58]);
	like_pd[567] = 1. / v[58];
	v[58] = -7. * like_pd[566];
	v[3] += v[58];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[576] = x[0] / x[6];
	like_pd[568] = 1. / x[6];
	like_pd[569] = -like_pd[576] * like_pd[568];
	v[60] = 195. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[59] = v[60] / x[6];
	like_pd[570] = 1. / x[6];
	like_pd[571] = -v[59] * like_pd[570];
	like_pd[572] = v[59] * v[59];
	like_pd[573] = v[59] + v[59];
	v[59] = -0.5 * like_pd[572];
	like_pd[574] = exp(v[59]);
	if (errno) in_trouble("exp",v[59]);
	like_pd[575] = like_pd[574];
	like_pd[577] = like_pd[576] * like_pd[574];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[586] = x[1] / x[7];
	like_pd[578] = 1. / x[7];
	like_pd[579] = -like_pd[586] * like_pd[578];
	v[60] = 195. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[61] = v[60] / x[7];
	like_pd[580] = 1. / x[7];
	like_pd[581] = -v[61] * like_pd[580];
	like_pd[582] = v[61] * v[61];
	like_pd[583] = v[61] + v[61];
	v[61] = -0.5 * like_pd[582];
	like_pd[584] = exp(v[61]);
	if (errno) in_trouble("exp",v[61]);
	like_pd[585] = like_pd[584];
	v[61] = like_pd[586] * like_pd[584];
	v[61] += like_pd[577];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[595] = x[2] / x[8];
	like_pd[587] = 1. / x[8];
	like_pd[588] = -like_pd[595] * like_pd[587];
	v[62] = 195. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[63] = v[62] / x[8];
	like_pd[589] = 1. / x[8];
	like_pd[590] = -v[63] * like_pd[589];
	like_pd[591] = v[63] * v[63];
	like_pd[592] = v[63] + v[63];
	v[63] = -0.5 * like_pd[591];
	like_pd[593] = exp(v[63]);
	if (errno) in_trouble("exp",v[63]);
	like_pd[594] = like_pd[593];
	v[63] = like_pd[595] * like_pd[593];
	v[61] += v[63];
	v[61] *= 0.398942448887604;
	like_pd[596] = log(v[61]);
	if (errno) in_trouble("log",v[61]);
	like_pd[597] = 1. / v[61];
	v[61] = -4. * like_pd[596];
	v[3] += v[61];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[606] = x[0] / x[6];
	like_pd[598] = 1. / x[6];
	like_pd[599] = -like_pd[606] * like_pd[598];
	v[63] = 200. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[62] = v[63] / x[6];
	like_pd[600] = 1. / x[6];
	like_pd[601] = -v[62] * like_pd[600];
	like_pd[602] = v[62] * v[62];
	like_pd[603] = v[62] + v[62];
	v[62] = -0.5 * like_pd[602];
	like_pd[604] = exp(v[62]);
	if (errno) in_trouble("exp",v[62]);
	like_pd[605] = like_pd[604];
	like_pd[607] = like_pd[606] * like_pd[604];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[616] = x[1] / x[7];
	like_pd[608] = 1. / x[7];
	like_pd[609] = -like_pd[616] * like_pd[608];
	v[63] = 200. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[64] = v[63] / x[7];
	like_pd[610] = 1. / x[7];
	like_pd[611] = -v[64] * like_pd[610];
	like_pd[612] = v[64] * v[64];
	like_pd[613] = v[64] + v[64];
	v[64] = -0.5 * like_pd[612];
	like_pd[614] = exp(v[64]);
	if (errno) in_trouble("exp",v[64]);
	like_pd[615] = like_pd[614];
	v[64] = like_pd[616] * like_pd[614];
	v[64] += like_pd[607];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[625] = x[2] / x[8];
	like_pd[617] = 1. / x[8];
	like_pd[618] = -like_pd[625] * like_pd[617];
	v[65] = 200. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[66] = v[65] / x[8];
	like_pd[619] = 1. / x[8];
	like_pd[620] = -v[66] * like_pd[619];
	like_pd[621] = v[66] * v[66];
	like_pd[622] = v[66] + v[66];
	v[66] = -0.5 * like_pd[621];
	like_pd[623] = exp(v[66]);
	if (errno) in_trouble("exp",v[66]);
	like_pd[624] = like_pd[623];
	v[66] = like_pd[625] * like_pd[623];
	v[64] += v[66];
	v[64] *= 0.398942448887604;
	like_pd[626] = log(v[64]);
	if (errno) in_trouble("log",v[64]);
	like_pd[627] = 1. / v[64];
	v[64] = -3. * like_pd[626];
	v[3] += v[64];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[636] = x[0] / x[6];
	like_pd[628] = 1. / x[6];
	like_pd[629] = -like_pd[636] * like_pd[628];
	v[66] = 205. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[65] = v[66] / x[6];
	like_pd[630] = 1. / x[6];
	like_pd[631] = -v[65] * like_pd[630];
	like_pd[632] = v[65] * v[65];
	like_pd[633] = v[65] + v[65];
	v[65] = -0.5 * like_pd[632];
	like_pd[634] = exp(v[65]);
	if (errno) in_trouble("exp",v[65]);
	like_pd[635] = like_pd[634];
	like_pd[637] = like_pd[636] * like_pd[634];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[646] = x[1] / x[7];
	like_pd[638] = 1. / x[7];
	like_pd[639] = -like_pd[646] * like_pd[638];
	v[66] = 205. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[67] = v[66] / x[7];
	like_pd[640] = 1. / x[7];
	like_pd[641] = -v[67] * like_pd[640];
	like_pd[642] = v[67] * v[67];
	like_pd[643] = v[67] + v[67];
	v[67] = -0.5 * like_pd[642];
	like_pd[644] = exp(v[67]);
	if (errno) in_trouble("exp",v[67]);
	like_pd[645] = like_pd[644];
	v[67] = like_pd[646] * like_pd[644];
	v[67] += like_pd[637];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[655] = x[2] / x[8];
	like_pd[647] = 1. / x[8];
	like_pd[648] = -like_pd[655] * like_pd[647];
	v[68] = 205. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[69] = v[68] / x[8];
	like_pd[649] = 1. / x[8];
	like_pd[650] = -v[69] * like_pd[649];
	like_pd[651] = v[69] * v[69];
	like_pd[652] = v[69] + v[69];
	v[69] = -0.5 * like_pd[651];
	like_pd[653] = exp(v[69]);
	if (errno) in_trouble("exp",v[69]);
	like_pd[654] = like_pd[653];
	v[69] = like_pd[655] * like_pd[653];
	v[67] += v[69];
	v[67] *= 0.398942448887604;
	like_pd[656] = log(v[67]);
	if (errno) in_trouble("log",v[67]);
	like_pd[657] = 1. / v[67];
	v[67] = -3. * like_pd[656];
	v[3] += v[67];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[666] = x[0] / x[6];
	like_pd[658] = 1. / x[6];
	like_pd[659] = -like_pd[666] * like_pd[658];
	v[69] = 210. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[68] = v[69] / x[6];
	like_pd[660] = 1. / x[6];
	like_pd[661] = -v[68] * like_pd[660];
	like_pd[662] = v[68] * v[68];
	like_pd[663] = v[68] + v[68];
	v[68] = -0.5 * like_pd[662];
	like_pd[664] = exp(v[68]);
	if (errno) in_trouble("exp",v[68]);
	like_pd[665] = like_pd[664];
	like_pd[667] = like_pd[666] * like_pd[664];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[676] = x[1] / x[7];
	like_pd[668] = 1. / x[7];
	like_pd[669] = -like_pd[676] * like_pd[668];
	v[69] = 210. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[70] = v[69] / x[7];
	like_pd[670] = 1. / x[7];
	like_pd[671] = -v[70] * like_pd[670];
	like_pd[672] = v[70] * v[70];
	like_pd[673] = v[70] + v[70];
	v[70] = -0.5 * like_pd[672];
	like_pd[674] = exp(v[70]);
	if (errno) in_trouble("exp",v[70]);
	like_pd[675] = like_pd[674];
	v[70] = like_pd[676] * like_pd[674];
	v[70] += like_pd[667];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[685] = x[2] / x[8];
	like_pd[677] = 1. / x[8];
	like_pd[678] = -like_pd[685] * like_pd[677];
	v[71] = 210. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[72] = v[71] / x[8];
	like_pd[679] = 1. / x[8];
	like_pd[680] = -v[72] * like_pd[679];
	like_pd[681] = v[72] * v[72];
	like_pd[682] = v[72] + v[72];
	v[72] = -0.5 * like_pd[681];
	like_pd[683] = exp(v[72]);
	if (errno) in_trouble("exp",v[72]);
	like_pd[684] = like_pd[683];
	v[72] = like_pd[685] * like_pd[683];
	v[70] += v[72];
	v[70] *= 0.398942448887604;
	like_pd[686] = log(v[70]);
	if (errno) in_trouble("log",v[70]);
	like_pd[687] = 1. / v[70];
	v[70] = -8. * like_pd[686];
	v[3] += v[70];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[696] = x[0] / x[6];
	like_pd[688] = 1. / x[6];
	like_pd[689] = -like_pd[696] * like_pd[688];
	v[72] = 215. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[71] = v[72] / x[6];
	like_pd[690] = 1. / x[6];
	like_pd[691] = -v[71] * like_pd[690];
	like_pd[692] = v[71] * v[71];
	like_pd[693] = v[71] + v[71];
	v[71] = -0.5 * like_pd[692];
	like_pd[694] = exp(v[71]);
	if (errno) in_trouble("exp",v[71]);
	like_pd[695] = like_pd[694];
	like_pd[697] = like_pd[696] * like_pd[694];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[706] = x[1] / x[7];
	like_pd[698] = 1. / x[7];
	like_pd[699] = -like_pd[706] * like_pd[698];
	v[72] = 215. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[73] = v[72] / x[7];
	like_pd[700] = 1. / x[7];
	like_pd[701] = -v[73] * like_pd[700];
	like_pd[702] = v[73] * v[73];
	like_pd[703] = v[73] + v[73];
	v[73] = -0.5 * like_pd[702];
	like_pd[704] = exp(v[73]);
	if (errno) in_trouble("exp",v[73]);
	like_pd[705] = like_pd[704];
	v[73] = like_pd[706] * like_pd[704];
	v[73] += like_pd[697];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[715] = x[2] / x[8];
	like_pd[707] = 1. / x[8];
	like_pd[708] = -like_pd[715] * like_pd[707];
	v[74] = 215. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[75] = v[74] / x[8];
	like_pd[709] = 1. / x[8];
	like_pd[710] = -v[75] * like_pd[709];
	like_pd[711] = v[75] * v[75];
	like_pd[712] = v[75] + v[75];
	v[75] = -0.5 * like_pd[711];
	like_pd[713] = exp(v[75]);
	if (errno) in_trouble("exp",v[75]);
	like_pd[714] = like_pd[713];
	v[75] = like_pd[715] * like_pd[713];
	v[73] += v[75];
	v[73] *= 0.398942448887604;
	v[75] = log(v[73]);
	if (errno) in_trouble("log",v[73]);
	like_pd[716] = 1. / v[73];
	v[73] = -v[75];
	v[3] += v[73];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[725] = x[0] / x[6];
	like_pd[717] = 1. / x[6];
	like_pd[718] = -like_pd[725] * like_pd[717];
	v[75] = 220. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[74] = v[75] / x[6];
	like_pd[719] = 1. / x[6];
	like_pd[720] = -v[74] * like_pd[719];
	like_pd[721] = v[74] * v[74];
	like_pd[722] = v[74] + v[74];
	v[74] = -0.5 * like_pd[721];
	like_pd[723] = exp(v[74]);
	if (errno) in_trouble("exp",v[74]);
	like_pd[724] = like_pd[723];
	like_pd[726] = like_pd[725] * like_pd[723];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[735] = x[1] / x[7];
	like_pd[727] = 1. / x[7];
	like_pd[728] = -like_pd[735] * like_pd[727];
	v[75] = 220. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[76] = v[75] / x[7];
	like_pd[729] = 1. / x[7];
	like_pd[730] = -v[76] * like_pd[729];
	like_pd[731] = v[76] * v[76];
	like_pd[732] = v[76] + v[76];
	v[76] = -0.5 * like_pd[731];
	like_pd[733] = exp(v[76]);
	if (errno) in_trouble("exp",v[76]);
	like_pd[734] = like_pd[733];
	v[76] = like_pd[735] * like_pd[733];
	v[76] += like_pd[726];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[744] = x[2] / x[8];
	like_pd[736] = 1. / x[8];
	like_pd[737] = -like_pd[744] * like_pd[736];
	v[77] = 220. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[78] = v[77] / x[8];
	like_pd[738] = 1. / x[8];
	like_pd[739] = -v[78] * like_pd[738];
	like_pd[740] = v[78] * v[78];
	like_pd[741] = v[78] + v[78];
	v[78] = -0.5 * like_pd[740];
	like_pd[742] = exp(v[78]);
	if (errno) in_trouble("exp",v[78]);
	like_pd[743] = like_pd[742];
	v[78] = like_pd[744] * like_pd[742];
	v[76] += v[78];
	v[76] *= 0.398942448887604;
	like_pd[745] = log(v[76]);
	if (errno) in_trouble("log",v[76]);
	like_pd[746] = 1. / v[76];
	v[76] = -6. * like_pd[745];
	v[3] += v[76];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[755] = x[0] / x[6];
	like_pd[747] = 1. / x[6];
	like_pd[748] = -like_pd[755] * like_pd[747];
	v[78] = 230. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[77] = v[78] / x[6];
	like_pd[749] = 1. / x[6];
	like_pd[750] = -v[77] * like_pd[749];
	like_pd[751] = v[77] * v[77];
	like_pd[752] = v[77] + v[77];
	v[77] = -0.5 * like_pd[751];
	like_pd[753] = exp(v[77]);
	if (errno) in_trouble("exp",v[77]);
	like_pd[754] = like_pd[753];
	like_pd[756] = like_pd[755] * like_pd[753];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[765] = x[1] / x[7];
	like_pd[757] = 1. / x[7];
	like_pd[758] = -like_pd[765] * like_pd[757];
	v[78] = 230. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[79] = v[78] / x[7];
	like_pd[759] = 1. / x[7];
	like_pd[760] = -v[79] * like_pd[759];
	like_pd[761] = v[79] * v[79];
	like_pd[762] = v[79] + v[79];
	v[79] = -0.5 * like_pd[761];
	like_pd[763] = exp(v[79]);
	if (errno) in_trouble("exp",v[79]);
	like_pd[764] = like_pd[763];
	v[79] = like_pd[765] * like_pd[763];
	v[79] += like_pd[756];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[774] = x[2] / x[8];
	like_pd[766] = 1. / x[8];
	like_pd[767] = -like_pd[774] * like_pd[766];
	v[80] = 230. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[81] = v[80] / x[8];
	like_pd[768] = 1. / x[8];
	like_pd[769] = -v[81] * like_pd[768];
	like_pd[770] = v[81] * v[81];
	like_pd[771] = v[81] + v[81];
	v[81] = -0.5 * like_pd[770];
	like_pd[772] = exp(v[81]);
	if (errno) in_trouble("exp",v[81]);
	like_pd[773] = like_pd[772];
	v[81] = like_pd[774] * like_pd[772];
	v[79] += v[81];
	v[79] *= 0.398942448887604;
	like_pd[775] = log(v[79]);
	if (errno) in_trouble("log",v[79]);
	like_pd[776] = 1. / v[79];
	v[79] = -5. * like_pd[775];
	v[3] += v[79];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[785] = x[0] / x[6];
	like_pd[777] = 1. / x[6];
	like_pd[778] = -like_pd[785] * like_pd[777];
	v[81] = 235. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[80] = v[81] / x[6];
	like_pd[779] = 1. / x[6];
	like_pd[780] = -v[80] * like_pd[779];
	like_pd[781] = v[80] * v[80];
	like_pd[782] = v[80] + v[80];
	v[80] = -0.5 * like_pd[781];
	like_pd[783] = exp(v[80]);
	if (errno) in_trouble("exp",v[80]);
	like_pd[784] = like_pd[783];
	like_pd[786] = like_pd[785] * like_pd[783];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[795] = x[1] / x[7];
	like_pd[787] = 1. / x[7];
	like_pd[788] = -like_pd[795] * like_pd[787];
	v[81] = 235. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[82] = v[81] / x[7];
	like_pd[789] = 1. / x[7];
	like_pd[790] = -v[82] * like_pd[789];
	like_pd[791] = v[82] * v[82];
	like_pd[792] = v[82] + v[82];
	v[82] = -0.5 * like_pd[791];
	like_pd[793] = exp(v[82]);
	if (errno) in_trouble("exp",v[82]);
	like_pd[794] = like_pd[793];
	v[82] = like_pd[795] * like_pd[793];
	v[82] += like_pd[786];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[804] = x[2] / x[8];
	like_pd[796] = 1. / x[8];
	like_pd[797] = -like_pd[804] * like_pd[796];
	v[83] = 235. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[84] = v[83] / x[8];
	like_pd[798] = 1. / x[8];
	like_pd[799] = -v[84] * like_pd[798];
	like_pd[800] = v[84] * v[84];
	like_pd[801] = v[84] + v[84];
	v[84] = -0.5 * like_pd[800];
	like_pd[802] = exp(v[84]);
	if (errno) in_trouble("exp",v[84]);
	like_pd[803] = like_pd[802];
	v[84] = like_pd[804] * like_pd[802];
	v[82] += v[84];
	v[82] *= 0.398942448887604;
	v[84] = log(v[82]);
	if (errno) in_trouble("log",v[82]);
	like_pd[805] = 1. / v[82];
	v[82] = -v[84];
	v[3] += v[82];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[814] = x[0] / x[6];
	like_pd[806] = 1. / x[6];
	like_pd[807] = -like_pd[814] * like_pd[806];
	v[84] = 240. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[83] = v[84] / x[6];
	like_pd[808] = 1. / x[6];
	like_pd[809] = -v[83] * like_pd[808];
	like_pd[810] = v[83] * v[83];
	like_pd[811] = v[83] + v[83];
	v[83] = -0.5 * like_pd[810];
	like_pd[812] = exp(v[83]);
	if (errno) in_trouble("exp",v[83]);
	like_pd[813] = like_pd[812];
	like_pd[815] = like_pd[814] * like_pd[812];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[824] = x[1] / x[7];
	like_pd[816] = 1. / x[7];
	like_pd[817] = -like_pd[824] * like_pd[816];
	v[84] = 240. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[85] = v[84] / x[7];
	like_pd[818] = 1. / x[7];
	like_pd[819] = -v[85] * like_pd[818];
	like_pd[820] = v[85] * v[85];
	like_pd[821] = v[85] + v[85];
	v[85] = -0.5 * like_pd[820];
	like_pd[822] = exp(v[85]);
	if (errno) in_trouble("exp",v[85]);
	like_pd[823] = like_pd[822];
	v[85] = like_pd[824] * like_pd[822];
	v[85] += like_pd[815];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[833] = x[2] / x[8];
	like_pd[825] = 1. / x[8];
	like_pd[826] = -like_pd[833] * like_pd[825];
	v[86] = 240. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[87] = v[86] / x[8];
	like_pd[827] = 1. / x[8];
	like_pd[828] = -v[87] * like_pd[827];
	like_pd[829] = v[87] * v[87];
	like_pd[830] = v[87] + v[87];
	v[87] = -0.5 * like_pd[829];
	like_pd[831] = exp(v[87]);
	if (errno) in_trouble("exp",v[87]);
	like_pd[832] = like_pd[831];
	v[87] = like_pd[833] * like_pd[831];
	v[85] += v[87];
	v[85] *= 0.398942448887604;
	like_pd[834] = log(v[85]);
	if (errno) in_trouble("log",v[85]);
	like_pd[835] = 1. / v[85];
	v[85] = -7. * like_pd[834];
	v[3] += v[85];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[844] = x[0] / x[6];
	like_pd[836] = 1. / x[6];
	like_pd[837] = -like_pd[844] * like_pd[836];
	v[87] = 245. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[86] = v[87] / x[6];
	like_pd[838] = 1. / x[6];
	like_pd[839] = -v[86] * like_pd[838];
	like_pd[840] = v[86] * v[86];
	like_pd[841] = v[86] + v[86];
	v[86] = -0.5 * like_pd[840];
	like_pd[842] = exp(v[86]);
	if (errno) in_trouble("exp",v[86]);
	like_pd[843] = like_pd[842];
	like_pd[845] = like_pd[844] * like_pd[842];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[854] = x[1] / x[7];
	like_pd[846] = 1. / x[7];
	like_pd[847] = -like_pd[854] * like_pd[846];
	v[87] = 245. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[88] = v[87] / x[7];
	like_pd[848] = 1. / x[7];
	like_pd[849] = -v[88] * like_pd[848];
	like_pd[850] = v[88] * v[88];
	like_pd[851] = v[88] + v[88];
	v[88] = -0.5 * like_pd[850];
	like_pd[852] = exp(v[88]);
	if (errno) in_trouble("exp",v[88]);
	like_pd[853] = like_pd[852];
	v[88] = like_pd[854] * like_pd[852];
	v[88] += like_pd[845];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[863] = x[2] / x[8];
	like_pd[855] = 1. / x[8];
	like_pd[856] = -like_pd[863] * like_pd[855];
	v[89] = 245. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[90] = v[89] / x[8];
	like_pd[857] = 1. / x[8];
	like_pd[858] = -v[90] * like_pd[857];
	like_pd[859] = v[90] * v[90];
	like_pd[860] = v[90] + v[90];
	v[90] = -0.5 * like_pd[859];
	like_pd[861] = exp(v[90]);
	if (errno) in_trouble("exp",v[90]);
	like_pd[862] = like_pd[861];
	v[90] = like_pd[863] * like_pd[861];
	v[88] += v[90];
	v[88] *= 0.398942448887604;
	v[90] = log(v[88]);
	if (errno) in_trouble("log",v[88]);
	like_pd[864] = 1. / v[88];
	v[88] = -v[90];
	v[3] += v[88];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	like_pd[873] = x[0] / x[6];
	like_pd[865] = 1. / x[6];
	like_pd[866] = -like_pd[873] * like_pd[865];
	v[90] = 260. - x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[89] = v[90] / x[6];
	like_pd[867] = 1. / x[6];
	like_pd[868] = -v[89] * like_pd[867];
	like_pd[869] = v[89] * v[89];
	like_pd[870] = v[89] + v[89];
	v[89] = -0.5 * like_pd[869];
	like_pd[871] = exp(v[89]);
	if (errno) in_trouble("exp",v[89]);
	like_pd[872] = like_pd[871];
	like_pd[874] = like_pd[873] * like_pd[871];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	like_pd[883] = x[1] / x[7];
	like_pd[875] = 1. / x[7];
	like_pd[876] = -like_pd[883] * like_pd[875];
	v[90] = 260. - x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[91] = v[90] / x[7];
	like_pd[877] = 1. / x[7];
	like_pd[878] = -v[91] * like_pd[877];
	like_pd[879] = v[91] * v[91];
	like_pd[880] = v[91] + v[91];
	v[91] = -0.5 * like_pd[879];
	like_pd[881] = exp(v[91]);
	if (errno) in_trouble("exp",v[91]);
	like_pd[882] = like_pd[881];
	v[91] = like_pd[883] * like_pd[881];
	v[91] += like_pd[874];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	like_pd[892] = x[2] / x[8];
	like_pd[884] = 1. / x[8];
	like_pd[885] = -like_pd[892] * like_pd[884];
	v[92] = 260. - x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[93] = v[92] / x[8];
	like_pd[886] = 1. / x[8];
	like_pd[887] = -v[93] * like_pd[886];
	like_pd[888] = v[93] * v[93];
	like_pd[889] = v[93] + v[93];
	v[93] = -0.5 * like_pd[888];
	like_pd[890] = exp(v[93]);
	if (errno) in_trouble("exp",v[93]);
	like_pd[891] = like_pd[890];
	v[93] = like_pd[892] * like_pd[890];
	v[91] += v[93];
	v[91] *= 0.398942448887604;
	like_pd[893] = log(v[91]);
	if (errno) in_trouble("log",v[91]);
	like_pd[894] = 1. / v[91];
	v[91] = -2. * like_pd[893];
	v[3] += v[91];
	;}

	if (wantfg & 2) {
	dv[0] = -2.*like_pd[894];
	dv[0] *= 0.398942448887604;
	dv[1] = dv[0];
	dv[2] = dv[1]*like_pd[892];
	dv[1] *= like_pd[890];
	dv[2] *= like_pd[891];
	dv[2] = -dv[2]*0.5;
	dv[2] *= like_pd[889];
	g[8] = dv[2]*like_pd[887];
	dv[2] *= like_pd[886];
	g[5] = -dv[2];
	g[8] += dv[1]*like_pd[885];
	g[2] = dv[1]*like_pd[884];
	dv[3] = dv[0];
	dv[4] = dv[3]*like_pd[883];
	dv[3] *= like_pd[881];
	dv[4] *= like_pd[882];
	dv[4] = -dv[4]*0.5;
	dv[4] *= like_pd[880];
	g[7] = dv[4]*like_pd[878];
	dv[4] *= like_pd[877];
	g[4] = -dv[4];
	g[7] += dv[3]*like_pd[876];
	g[1] = dv[3]*like_pd[875];
	dv[5] = dv[0]*like_pd[873];
	dv[0] *= like_pd[871];
	dv[5] *= like_pd[872];
	dv[5] = -dv[5]*0.5;
	dv[5] *= like_pd[870];
	g[6] = dv[5]*like_pd[868];
	dv[5] *= like_pd[867];
	g[3] = -dv[5];
	g[6] += dv[0]*like_pd[866];
	g[0] = dv[0]*like_pd[865];
	dv[6] = -like_pd[864]*0.398942448887604;
	dv[7] = dv[6];
	dv[8] = dv[7]*like_pd[863];
	dv[7] *= like_pd[861];
	dv[8] *= like_pd[862];
	dv[8] = -dv[8]*0.5;
	dv[8] *= like_pd[860];
	g[8] += dv[8]*like_pd[858];
	dv[8] *= like_pd[857];
	g[5] -= dv[8];
	g[8] += dv[7]*like_pd[856];
	g[2] += dv[7]*like_pd[855];
	dv[9] = dv[6];
	dv[10] = dv[9]*like_pd[854];
	dv[9] *= like_pd[852];
	dv[10] *= like_pd[853];
	dv[10] = -dv[10]*0.5;
	dv[10] *= like_pd[851];
	g[7] += dv[10]*like_pd[849];
	dv[10] *= like_pd[848];
	g[4] -= dv[10];
	g[7] += dv[9]*like_pd[847];
	g[1] += dv[9]*like_pd[846];
	dv[11] = dv[6]*like_pd[844];
	dv[6] *= like_pd[842];
	dv[11] *= like_pd[843];
	dv[11] = -dv[11]*0.5;
	dv[11] *= like_pd[841];
	g[6] += dv[11]*like_pd[839];
	dv[11] *= like_pd[838];
	g[3] -= dv[11];
	g[6] += dv[6]*like_pd[837];
	g[0] += dv[6]*like_pd[836];
	dv[12] = -7.*like_pd[835];
	dv[12] *= 0.398942448887604;
	dv[13] = dv[12];
	dv[14] = dv[13]*like_pd[833];
	dv[13] *= like_pd[831];
	dv[14] *= like_pd[832];
	dv[14] = -dv[14]*0.5;
	dv[14] *= like_pd[830];
	g[8] += dv[14]*like_pd[828];
	dv[14] *= like_pd[827];
	g[5] -= dv[14];
	g[8] += dv[13]*like_pd[826];
	g[2] += dv[13]*like_pd[825];
	dv[15] = dv[12];
	dv[16] = dv[15]*like_pd[824];
	dv[15] *= like_pd[822];
	dv[16] *= like_pd[823];
	dv[16] = -dv[16]*0.5;
	dv[16] *= like_pd[821];
	g[7] += dv[16]*like_pd[819];
	dv[16] *= like_pd[818];
	g[4] -= dv[16];
	g[7] += dv[15]*like_pd[817];
	g[1] += dv[15]*like_pd[816];
	dv[17] = dv[12]*like_pd[814];
	dv[12] *= like_pd[812];
	dv[17] *= like_pd[813];
	dv[17] = -dv[17]*0.5;
	dv[17] *= like_pd[811];
	g[6] += dv[17]*like_pd[809];
	dv[17] *= like_pd[808];
	g[3] -= dv[17];
	g[6] += dv[12]*like_pd[807];
	g[0] += dv[12]*like_pd[806];
	dv[18] = -like_pd[805]*0.398942448887604;
	dv[19] = dv[18];
	dv[20] = dv[19]*like_pd[804];
	dv[19] *= like_pd[802];
	dv[20] *= like_pd[803];
	dv[20] = -dv[20]*0.5;
	dv[20] *= like_pd[801];
	g[8] += dv[20]*like_pd[799];
	dv[20] *= like_pd[798];
	g[5] -= dv[20];
	g[8] += dv[19]*like_pd[797];
	g[2] += dv[19]*like_pd[796];
	dv[21] = dv[18];
	dv[22] = dv[21]*like_pd[795];
	dv[21] *= like_pd[793];
	dv[22] *= like_pd[794];
	dv[22] = -dv[22]*0.5;
	dv[22] *= like_pd[792];
	g[7] += dv[22]*like_pd[790];
	dv[22] *= like_pd[789];
	g[4] -= dv[22];
	g[7] += dv[21]*like_pd[788];
	g[1] += dv[21]*like_pd[787];
	dv[23] = dv[18]*like_pd[785];
	dv[18] *= like_pd[783];
	dv[23] *= like_pd[784];
	dv[23] = -dv[23]*0.5;
	dv[23] *= like_pd[782];
	g[6] += dv[23]*like_pd[780];
	dv[23] *= like_pd[779];
	g[3] -= dv[23];
	g[6] += dv[18]*like_pd[778];
	g[0] += dv[18]*like_pd[777];
	dv[24] = -5.*like_pd[776];
	dv[24] *= 0.398942448887604;
	dv[25] = dv[24];
	dv[26] = dv[25]*like_pd[774];
	dv[25] *= like_pd[772];
	dv[26] *= like_pd[773];
	dv[26] = -dv[26]*0.5;
	dv[26] *= like_pd[771];
	g[8] += dv[26]*like_pd[769];
	dv[26] *= like_pd[768];
	g[5] -= dv[26];
	g[8] += dv[25]*like_pd[767];
	g[2] += dv[25]*like_pd[766];
	dv[27] = dv[24];
	dv[28] = dv[27]*like_pd[765];
	dv[27] *= like_pd[763];
	dv[28] *= like_pd[764];
	dv[28] = -dv[28]*0.5;
	dv[28] *= like_pd[762];
	g[7] += dv[28]*like_pd[760];
	dv[28] *= like_pd[759];
	g[4] -= dv[28];
	g[7] += dv[27]*like_pd[758];
	g[1] += dv[27]*like_pd[757];
	dv[29] = dv[24]*like_pd[755];
	dv[24] *= like_pd[753];
	dv[29] *= like_pd[754];
	dv[29] = -dv[29]*0.5;
	dv[29] *= like_pd[752];
	g[6] += dv[29]*like_pd[750];
	dv[29] *= like_pd[749];
	g[3] -= dv[29];
	g[6] += dv[24]*like_pd[748];
	g[0] += dv[24]*like_pd[747];
	dv[30] = -6.*like_pd[746];
	dv[30] *= 0.398942448887604;
	dv[31] = dv[30];
	dv[32] = dv[31]*like_pd[744];
	dv[31] *= like_pd[742];
	dv[32] *= like_pd[743];
	dv[32] = -dv[32]*0.5;
	dv[32] *= like_pd[741];
	g[8] += dv[32]*like_pd[739];
	dv[32] *= like_pd[738];
	g[5] -= dv[32];
	g[8] += dv[31]*like_pd[737];
	g[2] += dv[31]*like_pd[736];
	dv[33] = dv[30];
	dv[34] = dv[33]*like_pd[735];
	dv[33] *= like_pd[733];
	dv[34] *= like_pd[734];
	dv[34] = -dv[34]*0.5;
	dv[34] *= like_pd[732];
	g[7] += dv[34]*like_pd[730];
	dv[34] *= like_pd[729];
	g[4] -= dv[34];
	g[7] += dv[33]*like_pd[728];
	g[1] += dv[33]*like_pd[727];
	dv[35] = dv[30]*like_pd[725];
	dv[30] *= like_pd[723];
	dv[35] *= like_pd[724];
	dv[35] = -dv[35]*0.5;
	dv[35] *= like_pd[722];
	g[6] += dv[35]*like_pd[720];
	dv[35] *= like_pd[719];
	g[3] -= dv[35];
	g[6] += dv[30]*like_pd[718];
	g[0] += dv[30]*like_pd[717];
	dv[36] = -like_pd[716]*0.398942448887604;
	dv[37] = dv[36];
	dv[38] = dv[37]*like_pd[715];
	dv[37] *= like_pd[713];
	dv[38] *= like_pd[714];
	dv[38] = -dv[38]*0.5;
	dv[38] *= like_pd[712];
	g[8] += dv[38]*like_pd[710];
	dv[38] *= like_pd[709];
	g[5] -= dv[38];
	g[8] += dv[37]*like_pd[708];
	g[2] += dv[37]*like_pd[707];
	dv[39] = dv[36];
	dv[40] = dv[39]*like_pd[706];
	dv[39] *= like_pd[704];
	dv[40] *= like_pd[705];
	dv[40] = -dv[40]*0.5;
	dv[40] *= like_pd[703];
	g[7] += dv[40]*like_pd[701];
	dv[40] *= like_pd[700];
	g[4] -= dv[40];
	g[7] += dv[39]*like_pd[699];
	g[1] += dv[39]*like_pd[698];
	dv[41] = dv[36]*like_pd[696];
	dv[36] *= like_pd[694];
	dv[41] *= like_pd[695];
	dv[41] = -dv[41]*0.5;
	dv[41] *= like_pd[693];
	g[6] += dv[41]*like_pd[691];
	dv[41] *= like_pd[690];
	g[3] -= dv[41];
	g[6] += dv[36]*like_pd[689];
	g[0] += dv[36]*like_pd[688];
	dv[42] = -8.*like_pd[687];
	dv[42] *= 0.398942448887604;
	dv[43] = dv[42];
	dv[44] = dv[43]*like_pd[685];
	dv[43] *= like_pd[683];
	dv[44] *= like_pd[684];
	dv[44] = -dv[44]*0.5;
	dv[44] *= like_pd[682];
	g[8] += dv[44]*like_pd[680];
	dv[44] *= like_pd[679];
	g[5] -= dv[44];
	g[8] += dv[43]*like_pd[678];
	g[2] += dv[43]*like_pd[677];
	dv[45] = dv[42];
	dv[46] = dv[45]*like_pd[676];
	dv[45] *= like_pd[674];
	dv[46] *= like_pd[675];
	dv[46] = -dv[46]*0.5;
	dv[46] *= like_pd[673];
	g[7] += dv[46]*like_pd[671];
	dv[46] *= like_pd[670];
	g[4] -= dv[46];
	g[7] += dv[45]*like_pd[669];
	g[1] += dv[45]*like_pd[668];
	dv[47] = dv[42]*like_pd[666];
	dv[42] *= like_pd[664];
	dv[47] *= like_pd[665];
	dv[47] = -dv[47]*0.5;
	dv[47] *= like_pd[663];
	g[6] += dv[47]*like_pd[661];
	dv[47] *= like_pd[660];
	g[3] -= dv[47];
	g[6] += dv[42]*like_pd[659];
	g[0] += dv[42]*like_pd[658];
	dv[48] = -3.*like_pd[657];
	dv[48] *= 0.398942448887604;
	dv[49] = dv[48];
	dv[50] = dv[49]*like_pd[655];
	dv[49] *= like_pd[653];
	dv[50] *= like_pd[654];
	dv[50] = -dv[50]*0.5;
	dv[50] *= like_pd[652];
	g[8] += dv[50]*like_pd[650];
	dv[50] *= like_pd[649];
	g[5] -= dv[50];
	g[8] += dv[49]*like_pd[648];
	g[2] += dv[49]*like_pd[647];
	dv[51] = dv[48];
	dv[52] = dv[51]*like_pd[646];
	dv[51] *= like_pd[644];
	dv[52] *= like_pd[645];
	dv[52] = -dv[52]*0.5;
	dv[52] *= like_pd[643];
	g[7] += dv[52]*like_pd[641];
	dv[52] *= like_pd[640];
	g[4] -= dv[52];
	g[7] += dv[51]*like_pd[639];
	g[1] += dv[51]*like_pd[638];
	dv[53] = dv[48]*like_pd[636];
	dv[48] *= like_pd[634];
	dv[53] *= like_pd[635];
	dv[53] = -dv[53]*0.5;
	dv[53] *= like_pd[633];
	g[6] += dv[53]*like_pd[631];
	dv[53] *= like_pd[630];
	g[3] -= dv[53];
	g[6] += dv[48]*like_pd[629];
	g[0] += dv[48]*like_pd[628];
	dv[54] = -3.*like_pd[627];
	dv[54] *= 0.398942448887604;
	dv[55] = dv[54];
	dv[56] = dv[55]*like_pd[625];
	dv[55] *= like_pd[623];
	dv[56] *= like_pd[624];
	dv[56] = -dv[56]*0.5;
	dv[56] *= like_pd[622];
	g[8] += dv[56]*like_pd[620];
	dv[56] *= like_pd[619];
	g[5] -= dv[56];
	g[8] += dv[55]*like_pd[618];
	g[2] += dv[55]*like_pd[617];
	dv[57] = dv[54];
	dv[58] = dv[57]*like_pd[616];
	dv[57] *= like_pd[614];
	dv[58] *= like_pd[615];
	dv[58] = -dv[58]*0.5;
	dv[58] *= like_pd[613];
	g[7] += dv[58]*like_pd[611];
	dv[58] *= like_pd[610];
	g[4] -= dv[58];
	g[7] += dv[57]*like_pd[609];
	g[1] += dv[57]*like_pd[608];
	dv[59] = dv[54]*like_pd[606];
	dv[54] *= like_pd[604];
	dv[59] *= like_pd[605];
	dv[59] = -dv[59]*0.5;
	dv[59] *= like_pd[603];
	g[6] += dv[59]*like_pd[601];
	dv[59] *= like_pd[600];
	g[3] -= dv[59];
	g[6] += dv[54]*like_pd[599];
	g[0] += dv[54]*like_pd[598];
	dv[60] = -4.*like_pd[597];
	dv[60] *= 0.398942448887604;
	dv[61] = dv[60];
	dv[62] = dv[61]*like_pd[595];
	dv[61] *= like_pd[593];
	dv[62] *= like_pd[594];
	dv[62] = -dv[62]*0.5;
	dv[62] *= like_pd[592];
	g[8] += dv[62]*like_pd[590];
	dv[62] *= like_pd[589];
	g[5] -= dv[62];
	g[8] += dv[61]*like_pd[588];
	g[2] += dv[61]*like_pd[587];
	dv[63] = dv[60];
	dv[64] = dv[63]*like_pd[586];
	dv[63] *= like_pd[584];
	dv[64] *= like_pd[585];
	dv[64] = -dv[64]*0.5;
	dv[64] *= like_pd[583];
	g[7] += dv[64]*like_pd[581];
	dv[64] *= like_pd[580];
	g[4] -= dv[64];
	g[7] += dv[63]*like_pd[579];
	g[1] += dv[63]*like_pd[578];
	dv[65] = dv[60]*like_pd[576];
	dv[60] *= like_pd[574];
	dv[65] *= like_pd[575];
	dv[65] = -dv[65]*0.5;
	dv[65] *= like_pd[573];
	g[6] += dv[65]*like_pd[571];
	dv[65] *= like_pd[570];
	g[3] -= dv[65];
	g[6] += dv[60]*like_pd[569];
	g[0] += dv[60]*like_pd[568];
	dv[66] = -7.*like_pd[567];
	dv[66] *= 0.398942448887604;
	dv[67] = dv[66];
	dv[68] = dv[67]*like_pd[565];
	dv[67] *= like_pd[563];
	dv[68] *= like_pd[564];
	dv[68] = -dv[68]*0.5;
	dv[68] *= like_pd[562];
	g[8] += dv[68]*like_pd[560];
	dv[68] *= like_pd[559];
	g[5] -= dv[68];
	g[8] += dv[67]*like_pd[558];
	g[2] += dv[67]*like_pd[557];
	dv[69] = dv[66];
	dv[70] = dv[69]*like_pd[556];
	dv[69] *= like_pd[554];
	dv[70] *= like_pd[555];
	dv[70] = -dv[70]*0.5;
	dv[70] *= like_pd[553];
	g[7] += dv[70]*like_pd[551];
	dv[70] *= like_pd[550];
	g[4] -= dv[70];
	g[7] += dv[69]*like_pd[549];
	g[1] += dv[69]*like_pd[548];
	dv[71] = dv[66]*like_pd[546];
	dv[66] *= like_pd[544];
	dv[71] *= like_pd[545];
	dv[71] = -dv[71]*0.5;
	dv[71] *= like_pd[543];
	g[6] += dv[71]*like_pd[541];
	dv[71] *= like_pd[540];
	g[3] -= dv[71];
	g[6] += dv[66]*like_pd[539];
	g[0] += dv[66]*like_pd[538];
	dv[72] = -6.*like_pd[537];
	dv[72] *= 0.398942448887604;
	dv[73] = dv[72];
	dv[74] = dv[73]*like_pd[535];
	dv[73] *= like_pd[533];
	dv[74] *= like_pd[534];
	dv[74] = -dv[74]*0.5;
	dv[74] *= like_pd[532];
	g[8] += dv[74]*like_pd[530];
	dv[74] *= like_pd[529];
	g[5] -= dv[74];
	g[8] += dv[73]*like_pd[528];
	g[2] += dv[73]*like_pd[527];
	dv[75] = dv[72];
	dv[76] = dv[75]*like_pd[526];
	dv[75] *= like_pd[524];
	dv[76] *= like_pd[525];
	dv[76] = -dv[76]*0.5;
	dv[76] *= like_pd[523];
	g[7] += dv[76]*like_pd[521];
	dv[76] *= like_pd[520];
	g[4] -= dv[76];
	g[7] += dv[75]*like_pd[519];
	g[1] += dv[75]*like_pd[518];
	dv[77] = dv[72]*like_pd[516];
	dv[72] *= like_pd[514];
	dv[77] *= like_pd[515];
	dv[77] = -dv[77]*0.5;
	dv[77] *= like_pd[513];
	g[6] += dv[77]*like_pd[511];
	dv[77] *= like_pd[510];
	g[3] -= dv[77];
	g[6] += dv[72]*like_pd[509];
	g[0] += dv[72]*like_pd[508];
	dv[78] = -6.*like_pd[507];
	dv[78] *= 0.398942448887604;
	dv[79] = dv[78];
	dv[80] = dv[79]*like_pd[505];
	dv[79] *= like_pd[503];
	dv[80] *= like_pd[504];
	dv[80] = -dv[80]*0.5;
	dv[80] *= like_pd[502];
	g[8] += dv[80]*like_pd[500];
	dv[80] *= like_pd[499];
	g[5] -= dv[80];
	g[8] += dv[79]*like_pd[498];
	g[2] += dv[79]*like_pd[497];
	dv[81] = dv[78];
	dv[82] = dv[81]*like_pd[496];
	dv[81] *= like_pd[494];
	dv[82] *= like_pd[495];
	dv[82] = -dv[82]*0.5;
	dv[82] *= like_pd[493];
	g[7] += dv[82]*like_pd[491];
	dv[82] *= like_pd[490];
	g[4] -= dv[82];
	g[7] += dv[81]*like_pd[489];
	g[1] += dv[81]*like_pd[488];
	dv[83] = dv[78]*like_pd[486];
	dv[78] *= like_pd[484];
	dv[83] *= like_pd[485];
	dv[83] = -dv[83]*0.5;
	dv[83] *= like_pd[483];
	g[6] += dv[83]*like_pd[481];
	dv[83] *= like_pd[480];
	g[3] -= dv[83];
	g[6] += dv[78]*like_pd[479];
	g[0] += dv[78]*like_pd[478];
	dv[84] = -8.*like_pd[477];
	dv[84] *= 0.398942448887604;
	dv[85] = dv[84];
	dv[86] = dv[85]*like_pd[475];
	dv[85] *= like_pd[473];
	dv[86] *= like_pd[474];
	dv[86] = -dv[86]*0.5;
	dv[86] *= like_pd[472];
	g[8] += dv[86]*like_pd[470];
	dv[86] *= like_pd[469];
	g[5] -= dv[86];
	g[8] += dv[85]*like_pd[468];
	g[2] += dv[85]*like_pd[467];
	dv[87] = dv[84];
	dv[88] = dv[87]*like_pd[466];
	dv[87] *= like_pd[464];
	dv[88] *= like_pd[465];
	dv[88] = -dv[88]*0.5;
	dv[88] *= like_pd[463];
	g[7] += dv[88]*like_pd[461];
	dv[88] *= like_pd[460];
	g[4] -= dv[88];
	g[7] += dv[87]*like_pd[459];
	g[1] += dv[87]*like_pd[458];
	dv[89] = dv[84]*like_pd[456];
	dv[84] *= like_pd[454];
	dv[89] *= like_pd[455];
	dv[89] = -dv[89]*0.5;
	dv[89] *= like_pd[453];
	g[6] += dv[89]*like_pd[451];
	dv[89] *= like_pd[450];
	g[3] -= dv[89];
	g[6] += dv[84]*like_pd[449];
	g[0] += dv[84]*like_pd[448];
	dv[90] = -17.*like_pd[447];
	dv[90] *= 0.398942448887604;
	dv[91] = dv[90];
	dv[92] = dv[91]*like_pd[445];
	dv[91] *= like_pd[443];
	dv[92] *= like_pd[444];
	dv[92] = -dv[92]*0.5;
	dv[92] *= like_pd[442];
	g[8] += dv[92]*like_pd[440];
	dv[92] *= like_pd[439];
	g[5] -= dv[92];
	g[8] += dv[91]*like_pd[438];
	g[2] += dv[91]*like_pd[437];
	dv[93] = dv[90];
	dv[94] = dv[93]*like_pd[436];
	dv[93] *= like_pd[434];
	dv[94] *= like_pd[435];
	dv[94] = -dv[94]*0.5;
	dv[94] *= like_pd[433];
	g[7] += dv[94]*like_pd[431];
	dv[94] *= like_pd[430];
	g[4] -= dv[94];
	g[7] += dv[93]*like_pd[429];
	g[1] += dv[93]*like_pd[428];
	dv[95] = dv[90]*like_pd[426];
	dv[90] *= like_pd[424];
	dv[95] *= like_pd[425];
	dv[95] = -dv[95]*0.5;
	dv[95] *= like_pd[423];
	g[6] += dv[95]*like_pd[421];
	dv[95] *= like_pd[420];
	g[3] -= dv[95];
	g[6] += dv[90]*like_pd[419];
	g[0] += dv[90]*like_pd[418];
	dv[96] = -8.*like_pd[417];
	dv[96] *= 0.398942448887604;
	dv[97] = dv[96];
	dv[98] = dv[97]*like_pd[415];
	dv[97] *= like_pd[413];
	dv[98] *= like_pd[414];
	dv[98] = -dv[98]*0.5;
	dv[98] *= like_pd[412];
	g[8] += dv[98]*like_pd[410];
	dv[98] *= like_pd[409];
	g[5] -= dv[98];
	g[8] += dv[97]*like_pd[408];
	g[2] += dv[97]*like_pd[407];
	dv[99] = dv[96];
	dv[100] = dv[99]*like_pd[406];
	dv[99] *= like_pd[404];
	dv[100] *= like_pd[405];
	dv[100] = -dv[100]*0.5;
	dv[100] *= like_pd[403];
	g[7] += dv[100]*like_pd[401];
	dv[100] *= like_pd[400];
	g[4] -= dv[100];
	g[7] += dv[99]*like_pd[399];
	g[1] += dv[99]*like_pd[398];
	dv[101] = dv[96]*like_pd[396];
	dv[96] *= like_pd[394];
	dv[101] *= like_pd[395];
	dv[101] = -dv[101]*0.5;
	dv[101] *= like_pd[393];
	g[6] += dv[101]*like_pd[391];
	dv[101] *= like_pd[390];
	g[3] -= dv[101];
	g[6] += dv[96]*like_pd[389];
	g[0] += dv[96]*like_pd[388];
	dv[102] = -20.*like_pd[387];
	dv[102] *= 0.398942448887604;
	dv[103] = dv[102];
	dv[104] = dv[103]*like_pd[385];
	dv[103] *= like_pd[383];
	dv[104] *= like_pd[384];
	dv[104] = -dv[104]*0.5;
	dv[104] *= like_pd[382];
	g[8] += dv[104]*like_pd[380];
	dv[104] *= like_pd[379];
	g[5] -= dv[104];
	g[8] += dv[103]*like_pd[378];
	g[2] += dv[103]*like_pd[377];
	dv[105] = dv[102];
	dv[106] = dv[105]*like_pd[376];
	dv[105] *= like_pd[374];
	dv[106] *= like_pd[375];
	dv[106] = -dv[106]*0.5;
	dv[106] *= like_pd[373];
	g[7] += dv[106]*like_pd[371];
	dv[106] *= like_pd[370];
	g[4] -= dv[106];
	g[7] += dv[105]*like_pd[369];
	g[1] += dv[105]*like_pd[368];
	dv[107] = dv[102]*like_pd[366];
	dv[102] *= like_pd[364];
	dv[107] *= like_pd[365];
	dv[107] = -dv[107]*0.5;
	dv[107] *= like_pd[363];
	g[6] += dv[107]*like_pd[361];
	dv[107] *= like_pd[360];
	g[3] -= dv[107];
	g[6] += dv[102]*like_pd[359];
	g[0] += dv[102]*like_pd[358];
	dv[108] = -4.*like_pd[357];
	dv[108] *= 0.398942448887604;
	dv[109] = dv[108];
	dv[110] = dv[109]*like_pd[355];
	dv[109] *= like_pd[353];
	dv[110] *= like_pd[354];
	dv[110] = -dv[110]*0.5;
	dv[110] *= like_pd[352];
	g[8] += dv[110]*like_pd[350];
	dv[110] *= like_pd[349];
	g[5] -= dv[110];
	g[8] += dv[109]*like_pd[348];
	g[2] += dv[109]*like_pd[347];
	dv[111] = dv[108];
	dv[112] = dv[111]*like_pd[346];
	dv[111] *= like_pd[344];
	dv[112] *= like_pd[345];
	dv[112] = -dv[112]*0.5;
	dv[112] *= like_pd[343];
	g[7] += dv[112]*like_pd[341];
	dv[112] *= like_pd[340];
	g[4] -= dv[112];
	g[7] += dv[111]*like_pd[339];
	g[1] += dv[111]*like_pd[338];
	dv[113] = dv[108]*like_pd[336];
	dv[108] *= like_pd[334];
	dv[113] *= like_pd[335];
	dv[113] = -dv[113]*0.5;
	dv[113] *= like_pd[333];
	g[6] += dv[113]*like_pd[331];
	dv[113] *= like_pd[330];
	g[3] -= dv[113];
	g[6] += dv[108]*like_pd[329];
	g[0] += dv[108]*like_pd[328];
	dv[114] = -17.*like_pd[327];
	dv[114] *= 0.398942448887604;
	dv[115] = dv[114];
	dv[116] = dv[115]*like_pd[325];
	dv[115] *= like_pd[323];
	dv[116] *= like_pd[324];
	dv[116] = -dv[116]*0.5;
	dv[116] *= like_pd[322];
	g[8] += dv[116]*like_pd[320];
	dv[116] *= like_pd[319];
	g[5] -= dv[116];
	g[8] += dv[115]*like_pd[318];
	g[2] += dv[115]*like_pd[317];
	dv[117] = dv[114];
	dv[118] = dv[117]*like_pd[316];
	dv[117] *= like_pd[314];
	dv[118] *= like_pd[315];
	dv[118] = -dv[118]*0.5;
	dv[118] *= like_pd[313];
	g[7] += dv[118]*like_pd[311];
	dv[118] *= like_pd[310];
	g[4] -= dv[118];
	g[7] += dv[117]*like_pd[309];
	g[1] += dv[117]*like_pd[308];
	dv[119] = dv[114]*like_pd[306];
	dv[114] *= like_pd[304];
	dv[119] *= like_pd[305];
	dv[119] = -dv[119]*0.5;
	dv[119] *= like_pd[303];
	g[6] += dv[119]*like_pd[301];
	dv[119] *= like_pd[300];
	g[3] -= dv[119];
	g[6] += dv[114]*like_pd[299];
	g[0] += dv[114]*like_pd[298];
	dv[120] = -12.*like_pd[297];
	dv[120] *= 0.398942448887604;
	dv[121] = dv[120];
	dv[122] = dv[121]*like_pd[295];
	dv[121] *= like_pd[293];
	dv[122] *= like_pd[294];
	dv[122] = -dv[122]*0.5;
	dv[122] *= like_pd[292];
	g[8] += dv[122]*like_pd[290];
	dv[122] *= like_pd[289];
	g[5] -= dv[122];
	g[8] += dv[121]*like_pd[288];
	g[2] += dv[121]*like_pd[287];
	dv[123] = dv[120];
	dv[124] = dv[123]*like_pd[286];
	dv[123] *= like_pd[284];
	dv[124] *= like_pd[285];
	dv[124] = -dv[124]*0.5;
	dv[124] *= like_pd[283];
	g[7] += dv[124]*like_pd[281];
	dv[124] *= like_pd[280];
	g[4] -= dv[124];
	g[7] += dv[123]*like_pd[279];
	g[1] += dv[123]*like_pd[278];
	dv[125] = dv[120]*like_pd[276];
	dv[120] *= like_pd[274];
	dv[125] *= like_pd[275];
	dv[125] = -dv[125]*0.5;
	dv[125] *= like_pd[273];
	g[6] += dv[125]*like_pd[271];
	dv[125] *= like_pd[270];
	g[3] -= dv[125];
	g[6] += dv[120]*like_pd[269];
	g[0] += dv[120]*like_pd[268];
	dv[126] = -21.*like_pd[267];
	dv[126] *= 0.398942448887604;
	dv[127] = dv[126];
	dv[128] = dv[127]*like_pd[265];
	dv[127] *= like_pd[263];
	dv[128] *= like_pd[264];
	dv[128] = -dv[128]*0.5;
	dv[128] *= like_pd[262];
	g[8] += dv[128]*like_pd[260];
	dv[128] *= like_pd[259];
	g[5] -= dv[128];
	g[8] += dv[127]*like_pd[258];
	g[2] += dv[127]*like_pd[257];
	dv[129] = dv[126];
	dv[130] = dv[129]*like_pd[256];
	dv[129] *= like_pd[254];
	dv[130] *= like_pd[255];
	dv[130] = -dv[130]*0.5;
	dv[130] *= like_pd[253];
	g[7] += dv[130]*like_pd[251];
	dv[130] *= like_pd[250];
	g[4] -= dv[130];
	g[7] += dv[129]*like_pd[249];
	g[1] += dv[129]*like_pd[248];
	dv[131] = dv[126]*like_pd[246];
	dv[126] *= like_pd[244];
	dv[131] *= like_pd[245];
	dv[131] = -dv[131]*0.5;
	dv[131] *= like_pd[243];
	g[6] += dv[131]*like_pd[241];
	dv[131] *= like_pd[240];
	g[3] -= dv[131];
	g[6] += dv[126]*like_pd[239];
	g[0] += dv[126]*like_pd[238];
	dv[132] = -13.*like_pd[237];
	dv[132] *= 0.398942448887604;
	dv[133] = dv[132];
	dv[134] = dv[133]*like_pd[235];
	dv[133] *= like_pd[233];
	dv[134] *= like_pd[234];
	dv[134] = -dv[134]*0.5;
	dv[134] *= like_pd[232];
	g[8] += dv[134]*like_pd[230];
	dv[134] *= like_pd[229];
	g[5] -= dv[134];
	g[8] += dv[133]*like_pd[228];
	g[2] += dv[133]*like_pd[227];
	dv[135] = dv[132];
	dv[136] = dv[135]*like_pd[226];
	dv[135] *= like_pd[224];
	dv[136] *= like_pd[225];
	dv[136] = -dv[136]*0.5;
	dv[136] *= like_pd[223];
	g[7] += dv[136]*like_pd[221];
	dv[136] *= like_pd[220];
	g[4] -= dv[136];
	g[7] += dv[135]*like_pd[219];
	g[1] += dv[135]*like_pd[218];
	dv[137] = dv[132]*like_pd[216];
	dv[132] *= like_pd[214];
	dv[137] *= like_pd[215];
	dv[137] = -dv[137]*0.5;
	dv[137] *= like_pd[213];
	g[6] += dv[137]*like_pd[211];
	dv[137] *= like_pd[210];
	g[3] -= dv[137];
	g[6] += dv[132]*like_pd[209];
	g[0] += dv[132]*like_pd[208];
	dv[138] = -15.*like_pd[207];
	dv[138] *= 0.398942448887604;
	dv[139] = dv[138];
	dv[140] = dv[139]*like_pd[205];
	dv[139] *= like_pd[203];
	dv[140] *= like_pd[204];
	dv[140] = -dv[140]*0.5;
	dv[140] *= like_pd[202];
	g[8] += dv[140]*like_pd[200];
	dv[140] *= like_pd[199];
	g[5] -= dv[140];
	g[8] += dv[139]*like_pd[198];
	g[2] += dv[139]*like_pd[197];
	dv[141] = dv[138];
	dv[142] = dv[141]*like_pd[196];
	dv[141] *= like_pd[194];
	dv[142] *= like_pd[195];
	dv[142] = -dv[142]*0.5;
	dv[142] *= like_pd[193];
	g[7] += dv[142]*like_pd[191];
	dv[142] *= like_pd[190];
	g[4] -= dv[142];
	g[7] += dv[141]*like_pd[189];
	g[1] += dv[141]*like_pd[188];
	dv[143] = dv[138]*like_pd[186];
	dv[138] *= like_pd[184];
	dv[143] *= like_pd[185];
	dv[143] = -dv[143]*0.5;
	dv[143] *= like_pd[183];
	g[6] += dv[143]*like_pd[181];
	dv[143] *= like_pd[180];
	g[3] -= dv[143];
	g[6] += dv[138]*like_pd[179];
	g[0] += dv[138]*like_pd[178];
	dv[144] = -15.*like_pd[177];
	dv[144] *= 0.398942448887604;
	dv[145] = dv[144];
	dv[146] = dv[145]*like_pd[175];
	dv[145] *= like_pd[173];
	dv[146] *= like_pd[174];
	dv[146] = -dv[146]*0.5;
	dv[146] *= like_pd[172];
	g[8] += dv[146]*like_pd[170];
	dv[146] *= like_pd[169];
	g[5] -= dv[146];
	g[8] += dv[145]*like_pd[168];
	g[2] += dv[145]*like_pd[167];
	dv[147] = dv[144];
	dv[148] = dv[147]*like_pd[166];
	dv[147] *= like_pd[164];
	dv[148] *= like_pd[165];
	dv[148] = -dv[148]*0.5;
	dv[148] *= like_pd[163];
	g[7] += dv[148]*like_pd[161];
	dv[148] *= like_pd[160];
	g[4] -= dv[148];
	g[7] += dv[147]*like_pd[159];
	g[1] += dv[147]*like_pd[158];
	dv[149] = dv[144]*like_pd[156];
	dv[144] *= like_pd[154];
	dv[149] *= like_pd[155];
	dv[149] = -dv[149]*0.5;
	dv[149] *= like_pd[153];
	g[6] += dv[149]*like_pd[151];
	dv[149] *= like_pd[150];
	g[3] -= dv[149];
	g[6] += dv[144]*like_pd[149];
	g[0] += dv[144]*like_pd[148];
	dv[150] = -15.*like_pd[147];
	dv[150] *= 0.398942448887604;
	dv[151] = dv[150];
	dv[152] = dv[151]*like_pd[145];
	dv[151] *= like_pd[143];
	dv[152] *= like_pd[144];
	dv[152] = -dv[152]*0.5;
	dv[152] *= like_pd[142];
	g[8] += dv[152]*like_pd[140];
	dv[152] *= like_pd[139];
	g[5] -= dv[152];
	g[8] += dv[151]*like_pd[138];
	g[2] += dv[151]*like_pd[137];
	dv[153] = dv[150];
	dv[154] = dv[153]*like_pd[136];
	dv[153] *= like_pd[134];
	dv[154] *= like_pd[135];
	dv[154] = -dv[154]*0.5;
	dv[154] *= like_pd[133];
	g[7] += dv[154]*like_pd[131];
	dv[154] *= like_pd[130];
	g[4] -= dv[154];
	g[7] += dv[153]*like_pd[129];
	g[1] += dv[153]*like_pd[128];
	dv[155] = dv[150]*like_pd[126];
	dv[150] *= like_pd[124];
	dv[155] *= like_pd[125];
	dv[155] = -dv[155]*0.5;
	dv[155] *= like_pd[123];
	g[6] += dv[155]*like_pd[121];
	dv[155] *= like_pd[120];
	g[3] -= dv[155];
	g[6] += dv[150]*like_pd[119];
	g[0] += dv[150]*like_pd[118];
	dv[156] = -4.*like_pd[117];
	dv[156] *= 0.398942448887604;
	dv[157] = dv[156];
	dv[158] = dv[157]*like_pd[115];
	dv[157] *= like_pd[113];
	dv[158] *= like_pd[114];
	dv[158] = -dv[158]*0.5;
	dv[158] *= like_pd[112];
	g[8] += dv[158]*like_pd[110];
	dv[158] *= like_pd[109];
	g[5] -= dv[158];
	g[8] += dv[157]*like_pd[108];
	g[2] += dv[157]*like_pd[107];
	dv[159] = dv[156];
	dv[160] = dv[159]*like_pd[106];
	dv[159] *= like_pd[104];
	dv[160] *= like_pd[105];
	dv[160] = -dv[160]*0.5;
	dv[160] *= like_pd[103];
	g[7] += dv[160]*like_pd[101];
	dv[160] *= like_pd[100];
	g[4] -= dv[160];
	g[7] += dv[159]*like_pd[99];
	g[1] += dv[159]*like_pd[98];
	dv[161] = dv[156]*like_pd[96];
	dv[156] *= like_pd[94];
	dv[161] *= like_pd[95];
	dv[161] = -dv[161]*0.5;
	dv[161] *= like_pd[93];
	g[6] += dv[161]*like_pd[91];
	dv[161] *= like_pd[90];
	g[3] -= dv[161];
	g[6] += dv[156]*like_pd[89];
	g[0] += dv[156]*like_pd[88];
	dv[162] = -4.*like_pd[87];
	dv[162] *= 0.398942448887604;
	dv[163] = dv[162];
	dv[164] = dv[163]*like_pd[85];
	dv[163] *= like_pd[83];
	dv[164] *= like_pd[84];
	dv[164] = -dv[164]*0.5;
	dv[164] *= like_pd[82];
	g[8] += dv[164]*like_pd[80];
	dv[164] *= like_pd[79];
	g[5] -= dv[164];
	g[8] += dv[163]*like_pd[78];
	g[2] += dv[163]*like_pd[77];
	dv[165] = dv[162];
	dv[166] = dv[165]*like_pd[76];
	dv[165] *= like_pd[74];
	dv[166] *= like_pd[75];
	dv[166] = -dv[166]*0.5;
	dv[166] *= like_pd[73];
	g[7] += dv[166]*like_pd[71];
	dv[166] *= like_pd[70];
	g[4] -= dv[166];
	g[7] += dv[165]*like_pd[69];
	g[1] += dv[165]*like_pd[68];
	dv[167] = dv[162]*like_pd[66];
	dv[162] *= like_pd[64];
	dv[167] *= like_pd[65];
	dv[167] = -dv[167]*0.5;
	dv[167] *= like_pd[63];
	g[6] += dv[167]*like_pd[61];
	dv[167] *= like_pd[60];
	g[3] -= dv[167];
	g[6] += dv[162]*like_pd[59];
	g[0] += dv[162]*like_pd[58];
	dv[168] = -like_pd[57]*0.398942448887604;
	dv[169] = dv[168];
	dv[170] = dv[169]*like_pd[56];
	dv[169] *= like_pd[54];
	dv[170] *= like_pd[55];
	dv[170] = -dv[170]*0.5;
	dv[170] *= like_pd[53];
	g[8] += dv[170]*like_pd[51];
	dv[170] *= like_pd[50];
	g[5] -= dv[170];
	g[8] += dv[169]*like_pd[49];
	g[2] += dv[169]*like_pd[48];
	dv[171] = dv[168];
	dv[172] = dv[171]*like_pd[47];
	dv[171] *= like_pd[45];
	dv[172] *= like_pd[46];
	dv[172] = -dv[172]*0.5;
	dv[172] *= like_pd[44];
	g[7] += dv[172]*like_pd[42];
	dv[172] *= like_pd[41];
	g[4] -= dv[172];
	g[7] += dv[171]*like_pd[40];
	g[1] += dv[171]*like_pd[39];
	dv[173] = dv[168]*like_pd[37];
	dv[168] *= like_pd[35];
	dv[173] *= like_pd[36];
	dv[173] = -dv[173]*0.5;
	dv[173] *= like_pd[34];
	g[6] += dv[173]*like_pd[32];
	dv[173] *= like_pd[31];
	g[3] -= dv[173];
	g[6] += dv[168]*like_pd[30];
	g[0] += dv[168]*like_pd[29];
	dv[174] = -like_pd[28]*0.398942448887604;
	dv[175] = dv[174];
	dv[176] = dv[175]*like_pd[27];
	dv[175] *= like_pd[25];
	dv[176] *= like_pd[26];
	dv[176] = -dv[176]*0.5;
	dv[176] *= like_pd[24];
	g[8] += dv[176]*like_pd[22];
	dv[176] *= like_pd[21];
	g[5] -= dv[176];
	g[8] += dv[175]*like_pd[20];
	g[2] += dv[175]*like_pd[19];
	dv[177] = dv[174];
	dv[178] = dv[177]*like_pd[18];
	dv[177] *= like_pd[16];
	dv[178] *= like_pd[17];
	dv[178] = -dv[178]*0.5;
	dv[178] *= like_pd[15];
	g[7] += dv[178]*like_pd[13];
	dv[178] *= like_pd[12];
	g[4] -= dv[178];
	g[7] += dv[177]*like_pd[11];
	g[1] += dv[177]*like_pd[10];
	dv[179] = dv[174]*like_pd[8];
	dv[174] *= like_pd[6];
	dv[179] *= like_pd[7];
	dv[179] = -dv[179]*0.5;
	dv[179] *= like_pd[5];
	g[6] += dv[179]*like_pd[3];
	dv[179] *= like_pd[2];
	g[3] -= dv[179];
	g[6] += dv[174]*like_pd[1];
	g[0] += dv[174]*like_pd[0];
	}

	return v[3];
}

 void
like_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (like_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[3];
	t1 += x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[4];
	t1 += x[5];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[1] = 1.;
	J[2] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = -1.;
	J[4] = 1.;

   /*** derivatives for constraint 3 ***/

	J[5] = -1.;
	J[6] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
