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
 fint nvs20_auxcom_[1] = { 0 /* nlc */ };
 fint nvs20_funcom_[76] = {
	16 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	53 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	13,
	18,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	32,
	37,
	42,
	48,
	54,

	/* rownos */
	1,
	3,
	4,
	5,
	6,
	1,
	2,
	4,
	5,
	6,
	7,
	8,
	1,
	3,
	5,
	6,
	8,
	1,
	7,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	7,
	1,
	3,
	4,
	6,
	8,
	1,
	2,
	4,
	6,
	8,
	1,
	2,
	4,
	5,
	7,
	8,
	1,
	2,
	3,
	5,
	6,
	8 };

 real nvs20_boundc_[1+32+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		2.5,
		1.7e308,
		1.1,
		1.7e308,
		-3.1,
		1.7e308,
		-3.5,
		1.7e308,
		1.3,
		1.7e308,
		2.1,
		1.7e308,
		2.3,
		1.7e308,
		-1.5,
		1.7e308};

 real nvs20_x0comn_[16] = {
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
		1. };

 static real nvs20_pd[212];
static real nvs20_old_x[16];
static int nvs20_xkind = -1;

 static int
nvs20_xcheck(real *x)
{
	real *x1 = nvs20_old_x, *xe = x + 16;
	errno = 0;
	if (nvs20_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs20_xkind = 0;
	return 1;
	}
 real
nvs20_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[63];
	fint wantfg = *needfg;
	if (nvs20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[11] * x[11];
	nvs20_pd[0] = x[11] + x[11];
	v[0] += 1.;
	v[0] += x[11];
	v[1] = v[0] * v[0];
	nvs20_pd[1] = v[0] + v[0];
	nvs20_pd[2] = x[11] * x[11];
	nvs20_pd[3] = x[11] + x[11];
	nvs20_pd[7] = nvs20_pd[2] + 1.;
	nvs20_pd[7] += x[11];
	nvs20_pd[4] = x[14] * x[14];
	nvs20_pd[5] = x[14] + x[14];
	nvs20_pd[6] = nvs20_pd[4] + 1.;
	nvs20_pd[6] += x[14];
	v[3] = nvs20_pd[7] * nvs20_pd[6];
	v[1] += v[3];
	nvs20_pd[8] = x[11] * x[11];
	nvs20_pd[9] = x[11] + x[11];
	nvs20_pd[13] = nvs20_pd[8] + 1.;
	nvs20_pd[13] += x[11];
	nvs20_pd[10] = x[1] * x[1];
	nvs20_pd[11] = x[1] + x[1];
	nvs20_pd[12] = nvs20_pd[10] + 1.;
	nvs20_pd[12] += x[1];
	v[5] = nvs20_pd[13] * nvs20_pd[12];
	v[1] += v[5];
	nvs20_pd[14] = x[11] * x[11];
	nvs20_pd[15] = x[11] + x[11];
	nvs20_pd[19] = nvs20_pd[14] + 1.;
	nvs20_pd[19] += x[11];
	nvs20_pd[16] = x[2] * x[2];
	nvs20_pd[17] = x[2] + x[2];
	nvs20_pd[18] = nvs20_pd[16] + 1.;
	nvs20_pd[18] += x[2];
	v[7] = nvs20_pd[19] * nvs20_pd[18];
	v[1] += v[7];
	nvs20_pd[20] = x[11] * x[11];
	nvs20_pd[21] = x[11] + x[11];
	nvs20_pd[25] = nvs20_pd[20] + 1.;
	nvs20_pd[25] += x[11];
	nvs20_pd[22] = x[10] * x[10];
	nvs20_pd[23] = x[10] + x[10];
	nvs20_pd[24] = nvs20_pd[22] + 1.;
	nvs20_pd[24] += x[10];
	v[9] = nvs20_pd[25] * nvs20_pd[24];
	v[1] += v[9];
	v[9] = x[12] * x[12];
	nvs20_pd[26] = x[12] + x[12];
	v[9] += 1.;
	v[9] += x[12];
	v[10] = v[9] * v[9];
	nvs20_pd[27] = v[9] + v[9];
	v[1] += v[10];
	nvs20_pd[28] = x[12] * x[12];
	nvs20_pd[29] = x[12] + x[12];
	nvs20_pd[33] = nvs20_pd[28] + 1.;
	nvs20_pd[33] += x[12];
	nvs20_pd[30] = x[13] * x[13];
	nvs20_pd[31] = x[13] + x[13];
	nvs20_pd[32] = nvs20_pd[30] + 1.;
	nvs20_pd[32] += x[13];
	v[11] = nvs20_pd[33] * nvs20_pd[32];
	v[1] += v[11];
	nvs20_pd[34] = x[12] * x[12];
	nvs20_pd[35] = x[12] + x[12];
	nvs20_pd[39] = nvs20_pd[34] + 1.;
	nvs20_pd[39] += x[12];
	nvs20_pd[36] = x[1] * x[1];
	nvs20_pd[37] = x[1] + x[1];
	nvs20_pd[38] = nvs20_pd[36] + 1.;
	nvs20_pd[38] += x[1];
	v[13] = nvs20_pd[39] * nvs20_pd[38];
	v[1] += v[13];
	nvs20_pd[40] = x[12] * x[12];
	nvs20_pd[41] = x[12] + x[12];
	nvs20_pd[45] = nvs20_pd[40] + 1.;
	nvs20_pd[45] += x[12];
	nvs20_pd[42] = x[4] * x[4];
	nvs20_pd[43] = x[4] + x[4];
	nvs20_pd[44] = nvs20_pd[42] + 1.;
	nvs20_pd[44] += x[4];
	v[15] = nvs20_pd[45] * nvs20_pd[44];
	v[1] += v[15];
	v[15] = x[13] * x[13];
	nvs20_pd[46] = x[13] + x[13];
	v[15] += 1.;
	v[15] += x[13];
	v[16] = v[15] * v[15];
	nvs20_pd[47] = v[15] + v[15];
	v[1] += v[16];
	nvs20_pd[48] = x[13] * x[13];
	nvs20_pd[49] = x[13] + x[13];
	nvs20_pd[53] = nvs20_pd[48] + 1.;
	nvs20_pd[53] += x[13];
	nvs20_pd[50] = x[1] * x[1];
	nvs20_pd[51] = x[1] + x[1];
	nvs20_pd[52] = nvs20_pd[50] + 1.;
	nvs20_pd[52] += x[1];
	v[17] = nvs20_pd[53] * nvs20_pd[52];
	v[1] += v[17];
	nvs20_pd[54] = x[13] * x[13];
	nvs20_pd[55] = x[13] + x[13];
	nvs20_pd[59] = nvs20_pd[54] + 1.;
	nvs20_pd[59] += x[13];
	nvs20_pd[56] = x[3] * x[3];
	nvs20_pd[57] = x[3] + x[3];
	nvs20_pd[58] = nvs20_pd[56] + 1.;
	nvs20_pd[58] += x[3];
	v[19] = nvs20_pd[59] * nvs20_pd[58];
	v[1] += v[19];
	nvs20_pd[60] = x[13] * x[13];
	nvs20_pd[61] = x[13] + x[13];
	nvs20_pd[65] = nvs20_pd[60] + 1.;
	nvs20_pd[65] += x[13];
	nvs20_pd[62] = x[4] * x[4];
	nvs20_pd[63] = x[4] + x[4];
	nvs20_pd[64] = nvs20_pd[62] + 1.;
	nvs20_pd[64] += x[4];
	v[21] = nvs20_pd[65] * nvs20_pd[64];
	v[1] += v[21];
	nvs20_pd[66] = x[13] * x[13];
	nvs20_pd[67] = x[13] + x[13];
	nvs20_pd[71] = nvs20_pd[66] + 1.;
	nvs20_pd[71] += x[13];
	nvs20_pd[68] = x[8] * x[8];
	nvs20_pd[69] = x[8] + x[8];
	nvs20_pd[70] = nvs20_pd[68] + 1.;
	nvs20_pd[70] += x[8];
	v[23] = nvs20_pd[71] * nvs20_pd[70];
	v[1] += v[23];
	v[23] = x[14] * x[14];
	nvs20_pd[72] = x[14] + x[14];
	v[23] += 1.;
	v[23] += x[14];
	v[24] = v[23] * v[23];
	nvs20_pd[73] = v[23] + v[23];
	v[1] += v[24];
	nvs20_pd[74] = x[14] * x[14];
	nvs20_pd[75] = x[14] + x[14];
	nvs20_pd[79] = nvs20_pd[74] + 1.;
	nvs20_pd[79] += x[14];
	nvs20_pd[76] = x[1] * x[1];
	nvs20_pd[77] = x[1] + x[1];
	nvs20_pd[78] = nvs20_pd[76] + 1.;
	nvs20_pd[78] += x[1];
	v[25] = nvs20_pd[79] * nvs20_pd[78];
	v[1] += v[25];
	nvs20_pd[80] = x[14] * x[14];
	nvs20_pd[81] = x[14] + x[14];
	nvs20_pd[85] = nvs20_pd[80] + 1.;
	nvs20_pd[85] += x[14];
	nvs20_pd[82] = x[5] * x[5];
	nvs20_pd[83] = x[5] + x[5];
	nvs20_pd[84] = nvs20_pd[82] + 1.;
	nvs20_pd[84] += x[5];
	v[27] = nvs20_pd[85] * nvs20_pd[84];
	v[1] += v[27];
	nvs20_pd[86] = x[14] * x[14];
	nvs20_pd[87] = x[14] + x[14];
	nvs20_pd[91] = nvs20_pd[86] + 1.;
	nvs20_pd[91] += x[14];
	nvs20_pd[88] = x[9] * x[9];
	nvs20_pd[89] = x[9] + x[9];
	nvs20_pd[90] = nvs20_pd[88] + 1.;
	nvs20_pd[90] += x[9];
	v[29] = nvs20_pd[91] * nvs20_pd[90];
	v[1] += v[29];
	v[29] = x[15] * x[15];
	nvs20_pd[92] = x[15] + x[15];
	v[29] += 1.;
	v[29] += x[15];
	v[30] = v[29] * v[29];
	nvs20_pd[93] = v[29] + v[29];
	v[1] += v[30];
	nvs20_pd[94] = x[15] * x[15];
	nvs20_pd[95] = x[15] + x[15];
	nvs20_pd[99] = nvs20_pd[94] + 1.;
	nvs20_pd[99] += x[15];
	nvs20_pd[96] = x[0] * x[0];
	nvs20_pd[97] = x[0] + x[0];
	nvs20_pd[98] = nvs20_pd[96] + 1.;
	nvs20_pd[98] += x[0];
	v[31] = nvs20_pd[99] * nvs20_pd[98];
	v[1] += v[31];
	nvs20_pd[100] = x[15] * x[15];
	nvs20_pd[101] = x[15] + x[15];
	nvs20_pd[105] = nvs20_pd[100] + 1.;
	nvs20_pd[105] += x[15];
	nvs20_pd[102] = x[4] * x[4];
	nvs20_pd[103] = x[4] + x[4];
	nvs20_pd[104] = nvs20_pd[102] + 1.;
	nvs20_pd[104] += x[4];
	v[33] = nvs20_pd[105] * nvs20_pd[104];
	v[1] += v[33];
	nvs20_pd[106] = x[15] * x[15];
	nvs20_pd[107] = x[15] + x[15];
	nvs20_pd[111] = nvs20_pd[106] + 1.;
	nvs20_pd[111] += x[15];
	nvs20_pd[108] = x[6] * x[6];
	nvs20_pd[109] = x[6] + x[6];
	nvs20_pd[110] = nvs20_pd[108] + 1.;
	nvs20_pd[110] += x[6];
	v[35] = nvs20_pd[111] * nvs20_pd[110];
	v[1] += v[35];
	nvs20_pd[112] = x[15] * x[15];
	nvs20_pd[113] = x[15] + x[15];
	nvs20_pd[117] = nvs20_pd[112] + 1.;
	nvs20_pd[117] += x[15];
	nvs20_pd[114] = x[10] * x[10];
	nvs20_pd[115] = x[10] + x[10];
	nvs20_pd[116] = nvs20_pd[114] + 1.;
	nvs20_pd[116] += x[10];
	v[37] = nvs20_pd[117] * nvs20_pd[116];
	v[1] += v[37];
	v[37] = x[0] * x[0];
	nvs20_pd[118] = x[0] + x[0];
	v[37] += 1.;
	v[37] += x[0];
	v[38] = v[37] * v[37];
	nvs20_pd[119] = v[37] + v[37];
	v[1] += v[38];
	nvs20_pd[120] = x[0] * x[0];
	nvs20_pd[121] = x[0] + x[0];
	nvs20_pd[125] = nvs20_pd[120] + 1.;
	nvs20_pd[125] += x[0];
	nvs20_pd[122] = x[2] * x[2];
	nvs20_pd[123] = x[2] + x[2];
	nvs20_pd[124] = nvs20_pd[122] + 1.;
	nvs20_pd[124] += x[2];
	v[39] = nvs20_pd[125] * nvs20_pd[124];
	v[1] += v[39];
	nvs20_pd[126] = x[0] * x[0];
	nvs20_pd[127] = x[0] + x[0];
	nvs20_pd[131] = nvs20_pd[126] + 1.;
	nvs20_pd[131] += x[0];
	nvs20_pd[128] = x[9] * x[9];
	nvs20_pd[129] = x[9] + x[9];
	nvs20_pd[130] = nvs20_pd[128] + 1.;
	nvs20_pd[130] += x[9];
	v[41] = nvs20_pd[131] * nvs20_pd[130];
	v[1] += v[41];
	v[41] = x[1] * x[1];
	nvs20_pd[132] = x[1] + x[1];
	v[41] += 1.;
	v[41] += x[1];
	v[42] = v[41] * v[41];
	nvs20_pd[133] = v[41] + v[41];
	v[1] += v[42];
	nvs20_pd[134] = x[1] * x[1];
	nvs20_pd[135] = x[1] + x[1];
	nvs20_pd[139] = nvs20_pd[134] + 1.;
	nvs20_pd[139] += x[1];
	nvs20_pd[136] = x[5] * x[5];
	nvs20_pd[137] = x[5] + x[5];
	nvs20_pd[138] = nvs20_pd[136] + 1.;
	nvs20_pd[138] += x[5];
	v[43] = nvs20_pd[139] * nvs20_pd[138];
	v[1] += v[43];
	nvs20_pd[140] = x[1] * x[1];
	nvs20_pd[141] = x[1] + x[1];
	nvs20_pd[145] = nvs20_pd[140] + 1.;
	nvs20_pd[145] += x[1];
	nvs20_pd[142] = x[7] * x[7];
	nvs20_pd[143] = x[7] + x[7];
	nvs20_pd[144] = nvs20_pd[142] + 1.;
	nvs20_pd[144] += x[7];
	v[45] = nvs20_pd[145] * nvs20_pd[144];
	v[1] += v[45];
	v[45] = x[2] * x[2];
	nvs20_pd[146] = x[2] + x[2];
	v[45] += 1.;
	v[45] += x[2];
	v[46] = v[45] * v[45];
	nvs20_pd[147] = v[45] + v[45];
	v[1] += v[46];
	nvs20_pd[148] = x[2] * x[2];
	nvs20_pd[149] = x[2] + x[2];
	nvs20_pd[153] = nvs20_pd[148] + 1.;
	nvs20_pd[153] += x[2];
	nvs20_pd[150] = x[4] * x[4];
	nvs20_pd[151] = x[4] + x[4];
	nvs20_pd[152] = nvs20_pd[150] + 1.;
	nvs20_pd[152] += x[4];
	v[47] = nvs20_pd[153] * nvs20_pd[152];
	v[1] += v[47];
	nvs20_pd[154] = x[2] * x[2];
	nvs20_pd[155] = x[2] + x[2];
	nvs20_pd[159] = nvs20_pd[154] + 1.;
	nvs20_pd[159] += x[2];
	nvs20_pd[156] = x[9] * x[9];
	nvs20_pd[157] = x[9] + x[9];
	nvs20_pd[158] = nvs20_pd[156] + 1.;
	nvs20_pd[158] += x[9];
	v[49] = nvs20_pd[159] * nvs20_pd[158];
	v[1] += v[49];
	v[49] = x[3] * x[3];
	nvs20_pd[160] = x[3] + x[3];
	v[49] += 1.;
	v[49] += x[3];
	v[50] = v[49] * v[49];
	nvs20_pd[161] = v[49] + v[49];
	v[1] += v[50];
	nvs20_pd[162] = x[3] * x[3];
	nvs20_pd[163] = x[3] + x[3];
	nvs20_pd[167] = nvs20_pd[162] + 1.;
	nvs20_pd[167] += x[3];
	nvs20_pd[164] = x[6] * x[6];
	nvs20_pd[165] = x[6] + x[6];
	nvs20_pd[166] = nvs20_pd[164] + 1.;
	nvs20_pd[166] += x[6];
	v[51] = nvs20_pd[167] * nvs20_pd[166];
	v[1] += v[51];
	nvs20_pd[168] = x[3] * x[3];
	nvs20_pd[169] = x[3] + x[3];
	nvs20_pd[173] = nvs20_pd[168] + 1.;
	nvs20_pd[173] += x[3];
	nvs20_pd[170] = x[10] * x[10];
	nvs20_pd[171] = x[10] + x[10];
	nvs20_pd[172] = nvs20_pd[170] + 1.;
	nvs20_pd[172] += x[10];
	v[53] = nvs20_pd[173] * nvs20_pd[172];
	v[1] += v[53];
	v[53] = x[4] * x[4];
	nvs20_pd[174] = x[4] + x[4];
	v[53] += 1.;
	v[53] += x[4];
	v[54] = v[53] * v[53];
	nvs20_pd[175] = v[53] + v[53];
	v[1] += v[54];
	nvs20_pd[176] = x[4] * x[4];
	nvs20_pd[177] = x[4] + x[4];
	nvs20_pd[181] = nvs20_pd[176] + 1.;
	nvs20_pd[181] += x[4];
	nvs20_pd[178] = x[8] * x[8];
	nvs20_pd[179] = x[8] + x[8];
	nvs20_pd[180] = nvs20_pd[178] + 1.;
	nvs20_pd[180] += x[8];
	v[55] = nvs20_pd[181] * nvs20_pd[180];
	v[1] += v[55];
	v[55] = x[5] * x[5];
	nvs20_pd[182] = x[5] + x[5];
	v[55] += 1.;
	v[55] += x[5];
	v[56] = v[55] * v[55];
	nvs20_pd[183] = v[55] + v[55];
	v[1] += v[56];
	nvs20_pd[184] = x[5] * x[5];
	nvs20_pd[185] = x[5] + x[5];
	nvs20_pd[189] = nvs20_pd[184] + 1.;
	nvs20_pd[189] += x[5];
	nvs20_pd[186] = x[7] * x[7];
	nvs20_pd[187] = x[7] + x[7];
	nvs20_pd[188] = nvs20_pd[186] + 1.;
	nvs20_pd[188] += x[7];
	v[57] = nvs20_pd[189] * nvs20_pd[188];
	v[1] += v[57];
	v[57] = x[6] * x[6];
	nvs20_pd[190] = x[6] + x[6];
	v[57] += 1.;
	v[57] += x[6];
	v[58] = v[57] * v[57];
	nvs20_pd[191] = v[57] + v[57];
	v[1] += v[58];
	nvs20_pd[192] = x[6] * x[6];
	nvs20_pd[193] = x[6] + x[6];
	nvs20_pd[197] = nvs20_pd[192] + 1.;
	nvs20_pd[197] += x[6];
	nvs20_pd[194] = x[8] * x[8];
	nvs20_pd[195] = x[8] + x[8];
	nvs20_pd[196] = nvs20_pd[194] + 1.;
	nvs20_pd[196] += x[8];
	v[59] = nvs20_pd[197] * nvs20_pd[196];
	v[1] += v[59];
	v[59] = x[7] * x[7];
	nvs20_pd[198] = x[7] + x[7];
	v[59] += 1.;
	v[59] += x[7];
	v[60] = v[59] * v[59];
	nvs20_pd[199] = v[59] + v[59];
	v[1] += v[60];
	nvs20_pd[200] = x[7] * x[7];
	nvs20_pd[201] = x[7] + x[7];
	nvs20_pd[205] = nvs20_pd[200] + 1.;
	nvs20_pd[205] += x[7];
	nvs20_pd[202] = x[8] * x[8];
	nvs20_pd[203] = x[8] + x[8];
	nvs20_pd[204] = nvs20_pd[202] + 1.;
	nvs20_pd[204] += x[8];
	v[61] = nvs20_pd[205] * nvs20_pd[204];
	v[1] += v[61];
	v[61] = x[8] * x[8];
	nvs20_pd[206] = x[8] + x[8];
	v[61] += 1.;
	v[61] += x[8];
	v[62] = v[61] * v[61];
	nvs20_pd[207] = v[61] + v[61];
	v[1] += v[62];
	v[62] = x[9] * x[9];
	nvs20_pd[208] = x[9] + x[9];
	v[62] += 1.;
	v[62] += x[9];
	v[61] = v[62] * v[62];
	nvs20_pd[209] = v[62] + v[62];
	v[1] += v[61];
	v[61] = x[10] * x[10];
	nvs20_pd[210] = x[10] + x[10];
	v[61] += 1.;
	v[61] += x[10];
	v[62] = v[61] * v[61];
	nvs20_pd[211] = v[61] + v[61];
	v[1] += v[62];
	;}

	if (wantfg & 2) {
	g[10] = nvs20_pd[211];
	g[10] += nvs20_pd[211]*nvs20_pd[210];
	g[9] = nvs20_pd[209];
	g[9] += nvs20_pd[209]*nvs20_pd[208];
	g[8] = nvs20_pd[207];
	g[8] += nvs20_pd[207]*nvs20_pd[206];
	g[8] += nvs20_pd[205];
	g[8] += nvs20_pd[205]*nvs20_pd[203];
	g[7] = nvs20_pd[204];
	g[7] += nvs20_pd[204]*nvs20_pd[201];
	g[7] += nvs20_pd[199];
	g[7] += nvs20_pd[199]*nvs20_pd[198];
	g[8] += nvs20_pd[197];
	g[8] += nvs20_pd[197]*nvs20_pd[195];
	g[6] = nvs20_pd[196];
	g[6] += nvs20_pd[196]*nvs20_pd[193];
	g[6] += nvs20_pd[191];
	g[6] += nvs20_pd[191]*nvs20_pd[190];
	g[7] += nvs20_pd[189];
	g[7] += nvs20_pd[189]*nvs20_pd[187];
	g[5] = nvs20_pd[188];
	g[5] += nvs20_pd[188]*nvs20_pd[185];
	g[5] += nvs20_pd[183];
	g[5] += nvs20_pd[183]*nvs20_pd[182];
	g[8] += nvs20_pd[181];
	g[8] += nvs20_pd[181]*nvs20_pd[179];
	g[4] = nvs20_pd[180];
	g[4] += nvs20_pd[180]*nvs20_pd[177];
	g[4] += nvs20_pd[175];
	g[4] += nvs20_pd[175]*nvs20_pd[174];
	g[10] += nvs20_pd[173];
	g[10] += nvs20_pd[173]*nvs20_pd[171];
	g[3] = nvs20_pd[172];
	g[3] += nvs20_pd[172]*nvs20_pd[169];
	g[6] += nvs20_pd[167];
	g[6] += nvs20_pd[167]*nvs20_pd[165];
	g[3] += nvs20_pd[166];
	g[3] += nvs20_pd[166]*nvs20_pd[163];
	g[3] += nvs20_pd[161];
	g[3] += nvs20_pd[161]*nvs20_pd[160];
	g[9] += nvs20_pd[159];
	g[9] += nvs20_pd[159]*nvs20_pd[157];
	g[2] = nvs20_pd[158];
	g[2] += nvs20_pd[158]*nvs20_pd[155];
	g[4] += nvs20_pd[153];
	g[4] += nvs20_pd[153]*nvs20_pd[151];
	g[2] += nvs20_pd[152];
	g[2] += nvs20_pd[152]*nvs20_pd[149];
	g[2] += nvs20_pd[147];
	g[2] += nvs20_pd[147]*nvs20_pd[146];
	g[7] += nvs20_pd[145];
	g[7] += nvs20_pd[145]*nvs20_pd[143];
	g[1] = nvs20_pd[144];
	g[1] += nvs20_pd[144]*nvs20_pd[141];
	g[5] += nvs20_pd[139];
	g[5] += nvs20_pd[139]*nvs20_pd[137];
	g[1] += nvs20_pd[138];
	g[1] += nvs20_pd[138]*nvs20_pd[135];
	g[1] += nvs20_pd[133];
	g[1] += nvs20_pd[133]*nvs20_pd[132];
	g[9] += nvs20_pd[131];
	g[9] += nvs20_pd[131]*nvs20_pd[129];
	g[0] = nvs20_pd[130];
	g[0] += nvs20_pd[130]*nvs20_pd[127];
	g[2] += nvs20_pd[125];
	g[2] += nvs20_pd[125]*nvs20_pd[123];
	g[0] += nvs20_pd[124];
	g[0] += nvs20_pd[124]*nvs20_pd[121];
	g[0] += nvs20_pd[119];
	g[0] += nvs20_pd[119]*nvs20_pd[118];
	g[10] += nvs20_pd[117];
	g[10] += nvs20_pd[117]*nvs20_pd[115];
	g[15] = nvs20_pd[116];
	g[15] += nvs20_pd[116]*nvs20_pd[113];
	g[6] += nvs20_pd[111];
	g[6] += nvs20_pd[111]*nvs20_pd[109];
	g[15] += nvs20_pd[110];
	g[15] += nvs20_pd[110]*nvs20_pd[107];
	g[4] += nvs20_pd[105];
	g[4] += nvs20_pd[105]*nvs20_pd[103];
	g[15] += nvs20_pd[104];
	g[15] += nvs20_pd[104]*nvs20_pd[101];
	g[0] += nvs20_pd[99];
	g[0] += nvs20_pd[99]*nvs20_pd[97];
	g[15] += nvs20_pd[98];
	g[15] += nvs20_pd[98]*nvs20_pd[95];
	g[15] += nvs20_pd[93];
	g[15] += nvs20_pd[93]*nvs20_pd[92];
	g[9] += nvs20_pd[91];
	g[9] += nvs20_pd[91]*nvs20_pd[89];
	g[14] = nvs20_pd[90];
	g[14] += nvs20_pd[90]*nvs20_pd[87];
	g[5] += nvs20_pd[85];
	g[5] += nvs20_pd[85]*nvs20_pd[83];
	g[14] += nvs20_pd[84];
	g[14] += nvs20_pd[84]*nvs20_pd[81];
	g[1] += nvs20_pd[79];
	g[1] += nvs20_pd[79]*nvs20_pd[77];
	g[14] += nvs20_pd[78];
	g[14] += nvs20_pd[78]*nvs20_pd[75];
	g[14] += nvs20_pd[73];
	g[14] += nvs20_pd[73]*nvs20_pd[72];
	g[8] += nvs20_pd[71];
	g[8] += nvs20_pd[71]*nvs20_pd[69];
	g[13] = nvs20_pd[70];
	g[13] += nvs20_pd[70]*nvs20_pd[67];
	g[4] += nvs20_pd[65];
	g[4] += nvs20_pd[65]*nvs20_pd[63];
	g[13] += nvs20_pd[64];
	g[13] += nvs20_pd[64]*nvs20_pd[61];
	g[3] += nvs20_pd[59];
	g[3] += nvs20_pd[59]*nvs20_pd[57];
	g[13] += nvs20_pd[58];
	g[13] += nvs20_pd[58]*nvs20_pd[55];
	g[1] += nvs20_pd[53];
	g[1] += nvs20_pd[53]*nvs20_pd[51];
	g[13] += nvs20_pd[52];
	g[13] += nvs20_pd[52]*nvs20_pd[49];
	g[13] += nvs20_pd[47];
	g[13] += nvs20_pd[47]*nvs20_pd[46];
	g[4] += nvs20_pd[45];
	g[4] += nvs20_pd[45]*nvs20_pd[43];
	g[12] = nvs20_pd[44];
	g[12] += nvs20_pd[44]*nvs20_pd[41];
	g[1] += nvs20_pd[39];
	g[1] += nvs20_pd[39]*nvs20_pd[37];
	g[12] += nvs20_pd[38];
	g[12] += nvs20_pd[38]*nvs20_pd[35];
	g[13] += nvs20_pd[33];
	g[13] += nvs20_pd[33]*nvs20_pd[31];
	g[12] += nvs20_pd[32];
	g[12] += nvs20_pd[32]*nvs20_pd[29];
	g[12] += nvs20_pd[27];
	g[12] += nvs20_pd[27]*nvs20_pd[26];
	g[10] += nvs20_pd[25];
	g[10] += nvs20_pd[25]*nvs20_pd[23];
	g[11] = nvs20_pd[24];
	g[11] += nvs20_pd[24]*nvs20_pd[21];
	g[2] += nvs20_pd[19];
	g[2] += nvs20_pd[19]*nvs20_pd[17];
	g[11] += nvs20_pd[18];
	g[11] += nvs20_pd[18]*nvs20_pd[15];
	g[1] += nvs20_pd[13];
	g[1] += nvs20_pd[13]*nvs20_pd[11];
	g[11] += nvs20_pd[12];
	g[11] += nvs20_pd[12]*nvs20_pd[9];
	g[14] += nvs20_pd[7];
	g[14] += nvs20_pd[7]*nvs20_pd[5];
	g[11] += nvs20_pd[6];
	g[11] += nvs20_pd[6]*nvs20_pd[3];
	g[11] += nvs20_pd[1];
	g[11] += nvs20_pd[1]*nvs20_pd[0];
	}

	return v[1];
}

 void
nvs20_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (nvs20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 0.11*x[0];
	t1 += 0.12*x[1];
	t1 += 0.13*x[2];
	t1 += x[3];
	t1 += 0.22*x[11];
	t1 += 0.2*x[12];
	t1 += 0.19*x[13];
	t1 += 0.25*x[14];
	t1 += 0.15*x[15];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 0.8*x[1];
	t1 += x[4];
	t1 += -1.46*x[11];
	t1 += -1.3*x[13];
	t1 += 1.82*x[14];
	t1 += -1.15*x[15];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.96*x[0];
	t1 += -0.49*x[2];
	t1 += x[5];
	t1 += 1.29*x[11];
	t1 += -0.89*x[12];
	t1 += -1.16*x[15];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -1.78*x[0];
	t1 += -0.41*x[1];
	t1 += x[6];
	t1 += -1.1*x[11];
	t1 += -1.06*x[12];
	t1 += 0.95*x[13];
	t1 += -0.54*x[14];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 0.59*x[0];
	t1 += -0.33*x[1];
	t1 += -0.43*x[2];
	t1 += x[7];
	t1 += -1.43*x[14];
	t1 += 1.51*x[15];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 1.24*x[0];
	t1 += 0.21*x[1];
	t1 += -0.26*x[2];
	t1 += x[8];
	t1 += -1.72*x[12];
	t1 += -0.33*x[13];
	t1 += 1.62*x[15];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 1.12*x[1];
	t1 += -0.36*x[3];
	t1 += x[9];
	t1 += 1.12*x[11];
	t1 += 0.31*x[14];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -1.03*x[1];
	t1 += 0.1*x[2];
	t1 += x[10];
	t1 += 0.45*x[12];
	t1 += 0.26*x[13];
	t1 += -1.1*x[14];
	t1 += 0.58*x[15];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 0.11;
	J[5] = 0.12;
	J[12] = 0.13;
	J[17] = 1.;
	J[26] = 0.22;
	J[31] = 0.2;
	J[36] = 0.19;
	J[41] = 0.25;
	J[47] = 0.15;

   /*** derivatives for constraint 2 ***/

	J[6] = 0.8;
	J[19] = 1.;
	J[27] = -1.46;
	J[37] = -1.3;
	J[42] = 1.82;
	J[48] = -1.15;

   /*** derivatives for constraint 3 ***/

	J[1] = -0.96;
	J[13] = -0.49;
	J[20] = 1.;
	J[28] = 1.29;
	J[32] = -0.89;
	J[49] = -1.16;

   /*** derivatives for constraint 4 ***/

	J[2] = -1.78;
	J[7] = -0.41;
	J[21] = 1.;
	J[29] = -1.1;
	J[33] = -1.06;
	J[38] = 0.95;
	J[43] = -0.54;

   /*** derivatives for constraint 5 ***/

	J[3] = 0.59;
	J[8] = -0.33;
	J[14] = -0.43;
	J[22] = 1.;
	J[44] = -1.43;
	J[50] = 1.51;

   /*** derivatives for constraint 6 ***/

	J[4] = 1.24;
	J[9] = 0.21;
	J[15] = -0.26;
	J[23] = 1.;
	J[34] = -1.72;
	J[39] = -0.33;
	J[51] = 1.62;

   /*** derivatives for constraint 7 ***/

	J[10] = 1.12;
	J[18] = -0.36;
	J[24] = 1.;
	J[30] = 1.12;
	J[45] = 0.31;

   /*** derivatives for constraint 8 ***/

	J[11] = -1.03;
	J[16] = 0.1;
	J[25] = 1.;
	J[35] = 0.45;
	J[40] = 0.26;
	J[46] = -1.1;
	J[52] = 0.58;
	}
}
#ifdef __cplusplus
	}
#endif
