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
 fint hadamard_5_auxcom_[1] = { 1 /* nlc */ };
 fint hadamard_5_funcom_[59] = {
	26 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	26 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
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
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real hadamard_5_boundc_[1+52+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		1.7e308,
		0.,
		1.7e308};

 real hadamard_5_x0comn_[26] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real hadamard_5_pd[360];
static real hadamard_5_old_x[26];
static int hadamard_5_xkind = -1;

 static int
hadamard_5_xcheck(real *x)
{
	real *x1 = hadamard_5_old_x, *xe = x + 26;
	errno = 0;
	if (hadamard_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hadamard_5_xkind = 0;
	return 1;
	}
 real
hadamard_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (hadamard_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[25];
	;}

	if (wantfg & 2) {
	g[25] = 1.;
	}

	return rv;
}

 void
hadamard_5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[120];
	real t1;
	fint wantfg = *needfg;
	if (hadamard_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	hadamard_5_pd[0] = x[0] * x[6];
	hadamard_5_pd[1] = hadamard_5_pd[0] * x[12];
	hadamard_5_pd[2] = hadamard_5_pd[1] * x[18];
	v[0] = hadamard_5_pd[2] * x[24];
	hadamard_5_pd[3] = x[0] * x[6];
	hadamard_5_pd[4] = hadamard_5_pd[3] * x[12];
	hadamard_5_pd[5] = hadamard_5_pd[4] * x[19];
	v[1] = hadamard_5_pd[5] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[6] = x[0] * x[6];
	hadamard_5_pd[7] = hadamard_5_pd[6] * x[14];
	hadamard_5_pd[8] = hadamard_5_pd[7] * x[17];
	v[2] = hadamard_5_pd[8] * x[23];
	v[0] += v[2];
	hadamard_5_pd[9] = x[0] * x[9];
	hadamard_5_pd[10] = hadamard_5_pd[9] * x[11];
	hadamard_5_pd[11] = hadamard_5_pd[10] * x[17];
	v[2] = hadamard_5_pd[11] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[12] = x[4] * x[5];
	hadamard_5_pd[13] = hadamard_5_pd[12] * x[11];
	hadamard_5_pd[14] = hadamard_5_pd[13] * x[17];
	v[1] = hadamard_5_pd[14] * x[23];
	v[0] += v[1];
	hadamard_5_pd[15] = x[4] * x[5];
	hadamard_5_pd[16] = hadamard_5_pd[15] * x[11];
	hadamard_5_pd[17] = hadamard_5_pd[16] * x[18];
	v[1] = hadamard_5_pd[17] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[18] = x[0] * x[9];
	hadamard_5_pd[19] = hadamard_5_pd[18] * x[11];
	hadamard_5_pd[20] = hadamard_5_pd[19] * x[18];
	v[2] = hadamard_5_pd[20] * x[22];
	v[0] += v[2];
	hadamard_5_pd[21] = x[0] * x[6];
	hadamard_5_pd[22] = hadamard_5_pd[21] * x[14];
	hadamard_5_pd[23] = hadamard_5_pd[22] * x[18];
	v[2] = hadamard_5_pd[23] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[24] = x[0] * x[6];
	hadamard_5_pd[25] = hadamard_5_pd[24] * x[13];
	hadamard_5_pd[26] = hadamard_5_pd[25] * x[19];
	v[1] = hadamard_5_pd[26] * x[22];
	v[0] += v[1];
	hadamard_5_pd[27] = x[0] * x[6];
	hadamard_5_pd[28] = hadamard_5_pd[27] * x[13];
	hadamard_5_pd[29] = hadamard_5_pd[28] * x[17];
	v[1] = hadamard_5_pd[29] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[30] = x[0] * x[8];
	hadamard_5_pd[31] = hadamard_5_pd[30] * x[11];
	hadamard_5_pd[32] = hadamard_5_pd[31] * x[17];
	v[2] = hadamard_5_pd[32] * x[24];
	v[0] += v[2];
	hadamard_5_pd[33] = x[0] * x[8];
	hadamard_5_pd[34] = hadamard_5_pd[33] * x[11];
	hadamard_5_pd[35] = hadamard_5_pd[34] * x[19];
	v[2] = hadamard_5_pd[35] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[36] = x[0] * x[8];
	hadamard_5_pd[37] = hadamard_5_pd[36] * x[14];
	hadamard_5_pd[38] = hadamard_5_pd[37] * x[16];
	v[1] = hadamard_5_pd[38] * x[22];
	v[0] += v[1];
	hadamard_5_pd[39] = x[0] * x[9];
	hadamard_5_pd[40] = hadamard_5_pd[39] * x[13];
	hadamard_5_pd[41] = hadamard_5_pd[40] * x[16];
	v[1] = hadamard_5_pd[41] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[42] = x[4] * x[5];
	hadamard_5_pd[43] = hadamard_5_pd[42] * x[13];
	hadamard_5_pd[44] = hadamard_5_pd[43] * x[16];
	v[2] = hadamard_5_pd[44] * x[22];
	v[0] += v[2];
	hadamard_5_pd[45] = x[4] * x[8];
	hadamard_5_pd[46] = hadamard_5_pd[45] * x[10];
	hadamard_5_pd[47] = hadamard_5_pd[46] * x[16];
	v[2] = hadamard_5_pd[47] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[48] = x[3] * x[9];
	hadamard_5_pd[49] = hadamard_5_pd[48] * x[10];
	hadamard_5_pd[50] = hadamard_5_pd[49] * x[16];
	v[1] = hadamard_5_pd[50] * x[22];
	v[0] += v[1];
	hadamard_5_pd[51] = x[3] * x[5];
	hadamard_5_pd[52] = hadamard_5_pd[51] * x[14];
	hadamard_5_pd[53] = hadamard_5_pd[52] * x[16];
	v[1] = hadamard_5_pd[53] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[54] = x[3] * x[5];
	hadamard_5_pd[55] = hadamard_5_pd[54] * x[11];
	hadamard_5_pd[56] = hadamard_5_pd[55] * x[19];
	v[2] = hadamard_5_pd[56] * x[22];
	v[0] += v[2];
	hadamard_5_pd[57] = x[3] * x[5];
	hadamard_5_pd[58] = hadamard_5_pd[57] * x[11];
	hadamard_5_pd[59] = hadamard_5_pd[58] * x[17];
	v[2] = hadamard_5_pd[59] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[60] = x[3] * x[5];
	hadamard_5_pd[61] = hadamard_5_pd[60] * x[12];
	hadamard_5_pd[62] = hadamard_5_pd[61] * x[16];
	v[1] = hadamard_5_pd[62] * x[24];
	v[0] += v[1];
	hadamard_5_pd[63] = x[3] * x[5];
	hadamard_5_pd[64] = hadamard_5_pd[63] * x[12];
	hadamard_5_pd[65] = hadamard_5_pd[64] * x[19];
	v[1] = hadamard_5_pd[65] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[66] = x[3] * x[5];
	hadamard_5_pd[67] = hadamard_5_pd[66] * x[14];
	hadamard_5_pd[68] = hadamard_5_pd[67] * x[17];
	v[2] = hadamard_5_pd[68] * x[21];
	v[0] += v[2];
	hadamard_5_pd[69] = x[3] * x[9];
	hadamard_5_pd[70] = hadamard_5_pd[69] * x[10];
	hadamard_5_pd[71] = hadamard_5_pd[70] * x[17];
	v[2] = hadamard_5_pd[71] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[72] = x[4] * x[8];
	hadamard_5_pd[73] = hadamard_5_pd[72] * x[10];
	hadamard_5_pd[74] = hadamard_5_pd[73] * x[17];
	v[1] = hadamard_5_pd[74] * x[21];
	v[0] += v[1];
	hadamard_5_pd[75] = x[4] * x[5];
	hadamard_5_pd[76] = hadamard_5_pd[75] * x[13];
	hadamard_5_pd[77] = hadamard_5_pd[76] * x[17];
	v[1] = hadamard_5_pd[77] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[78] = x[0] * x[9];
	hadamard_5_pd[79] = hadamard_5_pd[78] * x[13];
	hadamard_5_pd[80] = hadamard_5_pd[79] * x[17];
	v[2] = hadamard_5_pd[80] * x[21];
	v[0] += v[2];
	hadamard_5_pd[81] = x[0] * x[8];
	hadamard_5_pd[82] = hadamard_5_pd[81] * x[14];
	hadamard_5_pd[83] = hadamard_5_pd[82] * x[17];
	v[2] = hadamard_5_pd[83] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[84] = x[0] * x[8];
	hadamard_5_pd[85] = hadamard_5_pd[84] * x[12];
	hadamard_5_pd[86] = hadamard_5_pd[85] * x[19];
	v[1] = hadamard_5_pd[86] * x[21];
	v[0] += v[1];
	hadamard_5_pd[87] = x[0] * x[8];
	hadamard_5_pd[88] = hadamard_5_pd[87] * x[12];
	hadamard_5_pd[89] = hadamard_5_pd[88] * x[16];
	v[1] = hadamard_5_pd[89] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[90] = x[0] * x[7];
	hadamard_5_pd[91] = hadamard_5_pd[90] * x[13];
	hadamard_5_pd[92] = hadamard_5_pd[91] * x[16];
	v[2] = hadamard_5_pd[92] * x[24];
	v[0] += v[2];
	hadamard_5_pd[93] = x[0] * x[7];
	hadamard_5_pd[94] = hadamard_5_pd[93] * x[13];
	hadamard_5_pd[95] = hadamard_5_pd[94] * x[19];
	v[2] = hadamard_5_pd[95] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[96] = x[0] * x[7];
	hadamard_5_pd[97] = hadamard_5_pd[96] * x[14];
	hadamard_5_pd[98] = hadamard_5_pd[97] * x[18];
	v[1] = hadamard_5_pd[98] * x[21];
	v[0] += v[1];
	hadamard_5_pd[99] = x[0] * x[9];
	hadamard_5_pd[100] = hadamard_5_pd[99] * x[12];
	hadamard_5_pd[101] = hadamard_5_pd[100] * x[18];
	v[1] = hadamard_5_pd[101] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[102] = x[4] * x[5];
	hadamard_5_pd[103] = hadamard_5_pd[102] * x[12];
	hadamard_5_pd[104] = hadamard_5_pd[103] * x[18];
	v[2] = hadamard_5_pd[104] * x[21];
	v[0] += v[2];
	hadamard_5_pd[105] = x[4] * x[5];
	hadamard_5_pd[106] = hadamard_5_pd[105] * x[12];
	hadamard_5_pd[107] = hadamard_5_pd[106] * x[16];
	v[2] = hadamard_5_pd[107] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[108] = x[0] * x[9];
	hadamard_5_pd[109] = hadamard_5_pd[108] * x[12];
	hadamard_5_pd[110] = hadamard_5_pd[109] * x[16];
	v[1] = hadamard_5_pd[110] * x[23];
	v[0] += v[1];
	hadamard_5_pd[111] = x[0] * x[7];
	hadamard_5_pd[112] = hadamard_5_pd[111] * x[14];
	hadamard_5_pd[113] = hadamard_5_pd[112] * x[16];
	v[1] = hadamard_5_pd[113] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[114] = x[0] * x[7];
	hadamard_5_pd[115] = hadamard_5_pd[114] * x[11];
	hadamard_5_pd[116] = hadamard_5_pd[115] * x[19];
	v[2] = hadamard_5_pd[116] * x[23];
	v[0] += v[2];
	hadamard_5_pd[117] = x[0] * x[7];
	hadamard_5_pd[118] = hadamard_5_pd[117] * x[11];
	hadamard_5_pd[119] = hadamard_5_pd[118] * x[18];
	v[2] = hadamard_5_pd[119] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[120] = x[2] * x[5];
	hadamard_5_pd[121] = hadamard_5_pd[120] * x[11];
	hadamard_5_pd[122] = hadamard_5_pd[121] * x[18];
	v[1] = hadamard_5_pd[122] * x[24];
	v[0] += v[1];
	hadamard_5_pd[123] = x[2] * x[5];
	hadamard_5_pd[124] = hadamard_5_pd[123] * x[11];
	hadamard_5_pd[125] = hadamard_5_pd[124] * x[19];
	v[1] = hadamard_5_pd[125] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[126] = x[2] * x[5];
	hadamard_5_pd[127] = hadamard_5_pd[126] * x[14];
	hadamard_5_pd[128] = hadamard_5_pd[127] * x[16];
	v[2] = hadamard_5_pd[128] * x[23];
	v[0] += v[2];
	hadamard_5_pd[129] = x[2] * x[9];
	hadamard_5_pd[130] = hadamard_5_pd[129] * x[10];
	hadamard_5_pd[131] = hadamard_5_pd[130] * x[16];
	v[2] = hadamard_5_pd[131] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[132] = x[4] * x[7];
	hadamard_5_pd[133] = hadamard_5_pd[132] * x[10];
	hadamard_5_pd[134] = hadamard_5_pd[133] * x[16];
	v[1] = hadamard_5_pd[134] * x[23];
	v[0] += v[1];
	hadamard_5_pd[135] = x[4] * x[7];
	hadamard_5_pd[136] = hadamard_5_pd[135] * x[10];
	hadamard_5_pd[137] = hadamard_5_pd[136] * x[18];
	v[1] = hadamard_5_pd[137] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[138] = x[2] * x[9];
	hadamard_5_pd[139] = hadamard_5_pd[138] * x[10];
	hadamard_5_pd[140] = hadamard_5_pd[139] * x[18];
	v[2] = hadamard_5_pd[140] * x[21];
	v[0] += v[2];
	hadamard_5_pd[141] = x[2] * x[5];
	hadamard_5_pd[142] = hadamard_5_pd[141] * x[14];
	hadamard_5_pd[143] = hadamard_5_pd[142] * x[18];
	v[2] = hadamard_5_pd[143] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[144] = x[2] * x[5];
	hadamard_5_pd[145] = hadamard_5_pd[144] * x[13];
	hadamard_5_pd[146] = hadamard_5_pd[145] * x[19];
	v[1] = hadamard_5_pd[146] * x[21];
	v[0] += v[1];
	hadamard_5_pd[147] = x[2] * x[5];
	hadamard_5_pd[148] = hadamard_5_pd[147] * x[13];
	hadamard_5_pd[149] = hadamard_5_pd[148] * x[16];
	v[1] = hadamard_5_pd[149] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[150] = x[2] * x[8];
	hadamard_5_pd[151] = hadamard_5_pd[150] * x[10];
	hadamard_5_pd[152] = hadamard_5_pd[151] * x[16];
	v[2] = hadamard_5_pd[152] * x[24];
	v[0] += v[2];
	hadamard_5_pd[153] = x[2] * x[8];
	hadamard_5_pd[154] = hadamard_5_pd[153] * x[10];
	hadamard_5_pd[155] = hadamard_5_pd[154] * x[19];
	v[2] = hadamard_5_pd[155] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[156] = x[2] * x[8];
	hadamard_5_pd[157] = hadamard_5_pd[156] * x[14];
	hadamard_5_pd[158] = hadamard_5_pd[157] * x[15];
	v[1] = hadamard_5_pd[158] * x[21];
	v[0] += v[1];
	hadamard_5_pd[159] = x[2] * x[9];
	hadamard_5_pd[160] = hadamard_5_pd[159] * x[13];
	hadamard_5_pd[161] = hadamard_5_pd[160] * x[15];
	v[1] = hadamard_5_pd[161] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[162] = x[4] * x[7];
	hadamard_5_pd[163] = hadamard_5_pd[162] * x[13];
	hadamard_5_pd[164] = hadamard_5_pd[163] * x[15];
	v[2] = hadamard_5_pd[164] * x[21];
	v[0] += v[2];
	hadamard_5_pd[165] = x[4] * x[8];
	hadamard_5_pd[166] = hadamard_5_pd[165] * x[12];
	hadamard_5_pd[167] = hadamard_5_pd[166] * x[15];
	v[2] = hadamard_5_pd[167] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[168] = x[3] * x[9];
	hadamard_5_pd[169] = hadamard_5_pd[168] * x[12];
	hadamard_5_pd[170] = hadamard_5_pd[169] * x[15];
	v[1] = hadamard_5_pd[170] * x[21];
	v[0] += v[1];
	hadamard_5_pd[171] = x[3] * x[7];
	hadamard_5_pd[172] = hadamard_5_pd[171] * x[14];
	hadamard_5_pd[173] = hadamard_5_pd[172] * x[15];
	v[1] = hadamard_5_pd[173] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[174] = x[3] * x[7];
	hadamard_5_pd[175] = hadamard_5_pd[174] * x[10];
	hadamard_5_pd[176] = hadamard_5_pd[175] * x[19];
	v[2] = hadamard_5_pd[176] * x[21];
	v[0] += v[2];
	hadamard_5_pd[177] = x[3] * x[7];
	hadamard_5_pd[178] = hadamard_5_pd[177] * x[10];
	hadamard_5_pd[179] = hadamard_5_pd[178] * x[16];
	v[2] = hadamard_5_pd[179] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[180] = x[3] * x[7];
	hadamard_5_pd[181] = hadamard_5_pd[180] * x[11];
	hadamard_5_pd[182] = hadamard_5_pd[181] * x[15];
	v[1] = hadamard_5_pd[182] * x[24];
	v[0] += v[1];
	hadamard_5_pd[183] = x[3] * x[7];
	hadamard_5_pd[184] = hadamard_5_pd[183] * x[11];
	hadamard_5_pd[185] = hadamard_5_pd[184] * x[19];
	v[1] = hadamard_5_pd[185] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[186] = x[3] * x[7];
	hadamard_5_pd[187] = hadamard_5_pd[186] * x[14];
	hadamard_5_pd[188] = hadamard_5_pd[187] * x[16];
	v[2] = hadamard_5_pd[188] * x[20];
	v[0] += v[2];
	hadamard_5_pd[189] = x[3] * x[9];
	hadamard_5_pd[190] = hadamard_5_pd[189] * x[12];
	hadamard_5_pd[191] = hadamard_5_pd[190] * x[16];
	v[2] = hadamard_5_pd[191] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[192] = x[4] * x[8];
	hadamard_5_pd[193] = hadamard_5_pd[192] * x[12];
	hadamard_5_pd[194] = hadamard_5_pd[193] * x[16];
	v[1] = hadamard_5_pd[194] * x[20];
	v[0] += v[1];
	hadamard_5_pd[195] = x[4] * x[7];
	hadamard_5_pd[196] = hadamard_5_pd[195] * x[13];
	hadamard_5_pd[197] = hadamard_5_pd[196] * x[16];
	v[1] = hadamard_5_pd[197] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[198] = x[2] * x[9];
	hadamard_5_pd[199] = hadamard_5_pd[198] * x[13];
	hadamard_5_pd[200] = hadamard_5_pd[199] * x[16];
	v[2] = hadamard_5_pd[200] * x[20];
	v[0] += v[2];
	hadamard_5_pd[201] = x[2] * x[8];
	hadamard_5_pd[202] = hadamard_5_pd[201] * x[14];
	hadamard_5_pd[203] = hadamard_5_pd[202] * x[16];
	v[2] = hadamard_5_pd[203] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[204] = x[2] * x[8];
	hadamard_5_pd[205] = hadamard_5_pd[204] * x[11];
	hadamard_5_pd[206] = hadamard_5_pd[205] * x[19];
	v[1] = hadamard_5_pd[206] * x[20];
	v[0] += v[1];
	hadamard_5_pd[207] = x[2] * x[8];
	hadamard_5_pd[208] = hadamard_5_pd[207] * x[11];
	hadamard_5_pd[209] = hadamard_5_pd[208] * x[15];
	v[1] = hadamard_5_pd[209] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[210] = x[2] * x[6];
	hadamard_5_pd[211] = hadamard_5_pd[210] * x[13];
	hadamard_5_pd[212] = hadamard_5_pd[211] * x[15];
	v[2] = hadamard_5_pd[212] * x[24];
	v[0] += v[2];
	hadamard_5_pd[213] = x[2] * x[6];
	hadamard_5_pd[214] = hadamard_5_pd[213] * x[13];
	hadamard_5_pd[215] = hadamard_5_pd[214] * x[19];
	v[2] = hadamard_5_pd[215] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[216] = x[2] * x[6];
	hadamard_5_pd[217] = hadamard_5_pd[216] * x[14];
	hadamard_5_pd[218] = hadamard_5_pd[217] * x[18];
	v[1] = hadamard_5_pd[218] * x[20];
	v[0] += v[1];
	hadamard_5_pd[219] = x[2] * x[9];
	hadamard_5_pd[220] = hadamard_5_pd[219] * x[11];
	hadamard_5_pd[221] = hadamard_5_pd[220] * x[18];
	v[1] = hadamard_5_pd[221] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[222] = x[4] * x[7];
	hadamard_5_pd[223] = hadamard_5_pd[222] * x[11];
	hadamard_5_pd[224] = hadamard_5_pd[223] * x[18];
	v[2] = hadamard_5_pd[224] * x[20];
	v[0] += v[2];
	hadamard_5_pd[225] = x[4] * x[7];
	hadamard_5_pd[226] = hadamard_5_pd[225] * x[11];
	hadamard_5_pd[227] = hadamard_5_pd[226] * x[15];
	v[2] = hadamard_5_pd[227] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[228] = x[2] * x[9];
	hadamard_5_pd[229] = hadamard_5_pd[228] * x[11];
	hadamard_5_pd[230] = hadamard_5_pd[229] * x[15];
	v[1] = hadamard_5_pd[230] * x[23];
	v[0] += v[1];
	hadamard_5_pd[231] = x[2] * x[6];
	hadamard_5_pd[232] = hadamard_5_pd[231] * x[14];
	hadamard_5_pd[233] = hadamard_5_pd[232] * x[15];
	v[1] = hadamard_5_pd[233] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[234] = x[2] * x[6];
	hadamard_5_pd[235] = hadamard_5_pd[234] * x[10];
	hadamard_5_pd[236] = hadamard_5_pd[235] * x[19];
	v[2] = hadamard_5_pd[236] * x[23];
	v[0] += v[2];
	hadamard_5_pd[237] = x[2] * x[6];
	hadamard_5_pd[238] = hadamard_5_pd[237] * x[10];
	hadamard_5_pd[239] = hadamard_5_pd[238] * x[18];
	v[2] = hadamard_5_pd[239] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[240] = x[1] * x[7];
	hadamard_5_pd[241] = hadamard_5_pd[240] * x[10];
	hadamard_5_pd[242] = hadamard_5_pd[241] * x[18];
	v[1] = hadamard_5_pd[242] * x[24];
	v[0] += v[1];
	hadamard_5_pd[243] = x[1] * x[7];
	hadamard_5_pd[244] = hadamard_5_pd[243] * x[10];
	hadamard_5_pd[245] = hadamard_5_pd[244] * x[19];
	v[1] = hadamard_5_pd[245] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[246] = x[1] * x[7];
	hadamard_5_pd[247] = hadamard_5_pd[246] * x[14];
	hadamard_5_pd[248] = hadamard_5_pd[247] * x[15];
	v[2] = hadamard_5_pd[248] * x[23];
	v[0] += v[2];
	hadamard_5_pd[249] = x[1] * x[9];
	hadamard_5_pd[250] = hadamard_5_pd[249] * x[12];
	hadamard_5_pd[251] = hadamard_5_pd[250] * x[15];
	v[2] = hadamard_5_pd[251] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[252] = x[4] * x[6];
	hadamard_5_pd[253] = hadamard_5_pd[252] * x[12];
	hadamard_5_pd[254] = hadamard_5_pd[253] * x[15];
	v[1] = hadamard_5_pd[254] * x[23];
	v[0] += v[1];
	hadamard_5_pd[255] = x[4] * x[6];
	hadamard_5_pd[256] = hadamard_5_pd[255] * x[12];
	hadamard_5_pd[257] = hadamard_5_pd[256] * x[18];
	v[1] = hadamard_5_pd[257] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[258] = x[1] * x[9];
	hadamard_5_pd[259] = hadamard_5_pd[258] * x[12];
	hadamard_5_pd[260] = hadamard_5_pd[259] * x[18];
	v[2] = hadamard_5_pd[260] * x[20];
	v[0] += v[2];
	hadamard_5_pd[261] = x[1] * x[7];
	hadamard_5_pd[262] = hadamard_5_pd[261] * x[14];
	hadamard_5_pd[263] = hadamard_5_pd[262] * x[18];
	v[2] = hadamard_5_pd[263] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[264] = x[1] * x[7];
	hadamard_5_pd[265] = hadamard_5_pd[264] * x[13];
	hadamard_5_pd[266] = hadamard_5_pd[265] * x[19];
	v[1] = hadamard_5_pd[266] * x[20];
	v[0] += v[1];
	hadamard_5_pd[267] = x[1] * x[7];
	hadamard_5_pd[268] = hadamard_5_pd[267] * x[13];
	hadamard_5_pd[269] = hadamard_5_pd[268] * x[15];
	v[1] = hadamard_5_pd[269] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[270] = x[1] * x[8];
	hadamard_5_pd[271] = hadamard_5_pd[270] * x[12];
	hadamard_5_pd[272] = hadamard_5_pd[271] * x[15];
	v[2] = hadamard_5_pd[272] * x[24];
	v[0] += v[2];
	hadamard_5_pd[273] = x[1] * x[8];
	hadamard_5_pd[274] = hadamard_5_pd[273] * x[12];
	hadamard_5_pd[275] = hadamard_5_pd[274] * x[19];
	v[2] = hadamard_5_pd[275] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[276] = x[1] * x[8];
	hadamard_5_pd[277] = hadamard_5_pd[276] * x[14];
	hadamard_5_pd[278] = hadamard_5_pd[277] * x[17];
	v[1] = hadamard_5_pd[278] * x[20];
	v[0] += v[1];
	hadamard_5_pd[279] = x[1] * x[9];
	hadamard_5_pd[280] = hadamard_5_pd[279] * x[13];
	hadamard_5_pd[281] = hadamard_5_pd[280] * x[17];
	v[1] = hadamard_5_pd[281] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[282] = x[4] * x[6];
	hadamard_5_pd[283] = hadamard_5_pd[282] * x[13];
	hadamard_5_pd[284] = hadamard_5_pd[283] * x[17];
	v[2] = hadamard_5_pd[284] * x[20];
	v[0] += v[2];
	hadamard_5_pd[285] = x[4] * x[8];
	hadamard_5_pd[286] = hadamard_5_pd[285] * x[11];
	hadamard_5_pd[287] = hadamard_5_pd[286] * x[17];
	v[2] = hadamard_5_pd[287] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[288] = x[3] * x[9];
	hadamard_5_pd[289] = hadamard_5_pd[288] * x[11];
	hadamard_5_pd[290] = hadamard_5_pd[289] * x[17];
	v[1] = hadamard_5_pd[290] * x[20];
	v[0] += v[1];
	hadamard_5_pd[291] = x[3] * x[6];
	hadamard_5_pd[292] = hadamard_5_pd[291] * x[14];
	hadamard_5_pd[293] = hadamard_5_pd[292] * x[17];
	v[1] = hadamard_5_pd[293] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[294] = x[3] * x[6];
	hadamard_5_pd[295] = hadamard_5_pd[294] * x[12];
	hadamard_5_pd[296] = hadamard_5_pd[295] * x[19];
	v[2] = hadamard_5_pd[296] * x[20];
	v[0] += v[2];
	hadamard_5_pd[297] = x[3] * x[6];
	hadamard_5_pd[298] = hadamard_5_pd[297] * x[12];
	hadamard_5_pd[299] = hadamard_5_pd[298] * x[15];
	v[2] = hadamard_5_pd[299] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[300] = x[3] * x[6];
	hadamard_5_pd[301] = hadamard_5_pd[300] * x[10];
	hadamard_5_pd[302] = hadamard_5_pd[301] * x[17];
	v[1] = hadamard_5_pd[302] * x[24];
	v[0] += v[1];
	hadamard_5_pd[303] = x[3] * x[6];
	hadamard_5_pd[304] = hadamard_5_pd[303] * x[10];
	hadamard_5_pd[305] = hadamard_5_pd[304] * x[19];
	v[1] = hadamard_5_pd[305] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[306] = x[3] * x[6];
	hadamard_5_pd[307] = hadamard_5_pd[306] * x[14];
	hadamard_5_pd[308] = hadamard_5_pd[307] * x[15];
	v[2] = hadamard_5_pd[308] * x[22];
	v[0] += v[2];
	hadamard_5_pd[309] = x[3] * x[9];
	hadamard_5_pd[310] = hadamard_5_pd[309] * x[11];
	hadamard_5_pd[311] = hadamard_5_pd[310] * x[15];
	v[2] = hadamard_5_pd[311] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[312] = x[4] * x[8];
	hadamard_5_pd[313] = hadamard_5_pd[312] * x[11];
	hadamard_5_pd[314] = hadamard_5_pd[313] * x[15];
	v[1] = hadamard_5_pd[314] * x[22];
	v[0] += v[1];
	hadamard_5_pd[315] = x[4] * x[6];
	hadamard_5_pd[316] = hadamard_5_pd[315] * x[13];
	hadamard_5_pd[317] = hadamard_5_pd[316] * x[15];
	v[1] = hadamard_5_pd[317] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[318] = x[1] * x[9];
	hadamard_5_pd[319] = hadamard_5_pd[318] * x[13];
	hadamard_5_pd[320] = hadamard_5_pd[319] * x[15];
	v[2] = hadamard_5_pd[320] * x[22];
	v[0] += v[2];
	hadamard_5_pd[321] = x[1] * x[8];
	hadamard_5_pd[322] = hadamard_5_pd[321] * x[14];
	hadamard_5_pd[323] = hadamard_5_pd[322] * x[15];
	v[2] = hadamard_5_pd[323] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[324] = x[1] * x[8];
	hadamard_5_pd[325] = hadamard_5_pd[324] * x[10];
	hadamard_5_pd[326] = hadamard_5_pd[325] * x[19];
	v[1] = hadamard_5_pd[326] * x[22];
	v[0] += v[1];
	hadamard_5_pd[327] = x[1] * x[8];
	hadamard_5_pd[328] = hadamard_5_pd[327] * x[10];
	hadamard_5_pd[329] = hadamard_5_pd[328] * x[17];
	v[1] = hadamard_5_pd[329] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[330] = x[1] * x[5];
	hadamard_5_pd[331] = hadamard_5_pd[330] * x[13];
	hadamard_5_pd[332] = hadamard_5_pd[331] * x[17];
	v[2] = hadamard_5_pd[332] * x[24];
	v[0] += v[2];
	hadamard_5_pd[333] = x[1] * x[5];
	hadamard_5_pd[334] = hadamard_5_pd[333] * x[13];
	hadamard_5_pd[335] = hadamard_5_pd[334] * x[19];
	v[2] = hadamard_5_pd[335] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[336] = x[1] * x[5];
	hadamard_5_pd[337] = hadamard_5_pd[336] * x[14];
	hadamard_5_pd[338] = hadamard_5_pd[337] * x[18];
	v[1] = hadamard_5_pd[338] * x[22];
	v[0] += v[1];
	hadamard_5_pd[339] = x[1] * x[9];
	hadamard_5_pd[340] = hadamard_5_pd[339] * x[10];
	hadamard_5_pd[341] = hadamard_5_pd[340] * x[18];
	v[1] = hadamard_5_pd[341] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[342] = x[4] * x[6];
	hadamard_5_pd[343] = hadamard_5_pd[342] * x[10];
	hadamard_5_pd[344] = hadamard_5_pd[343] * x[18];
	v[2] = hadamard_5_pd[344] * x[22];
	v[0] += v[2];
	hadamard_5_pd[345] = x[4] * x[6];
	hadamard_5_pd[346] = hadamard_5_pd[345] * x[10];
	hadamard_5_pd[347] = hadamard_5_pd[346] * x[17];
	v[2] = hadamard_5_pd[347] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_5_pd[348] = x[1] * x[9];
	hadamard_5_pd[349] = hadamard_5_pd[348] * x[10];
	hadamard_5_pd[350] = hadamard_5_pd[349] * x[17];
	v[1] = hadamard_5_pd[350] * x[23];
	v[0] += v[1];
	hadamard_5_pd[351] = x[1] * x[5];
	hadamard_5_pd[352] = hadamard_5_pd[351] * x[14];
	hadamard_5_pd[353] = hadamard_5_pd[352] * x[17];
	v[1] = hadamard_5_pd[353] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_5_pd[354] = x[1] * x[5];
	hadamard_5_pd[355] = hadamard_5_pd[354] * x[12];
	hadamard_5_pd[356] = hadamard_5_pd[355] * x[19];
	v[2] = hadamard_5_pd[356] * x[23];
	v[0] += v[2];
	hadamard_5_pd[357] = x[1] * x[5];
	hadamard_5_pd[358] = hadamard_5_pd[357] * x[12];
	hadamard_5_pd[359] = hadamard_5_pd[358] * x[18];
	v[2] = hadamard_5_pd[359] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -x[25];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[24] = -hadamard_5_pd[359];
	J[18] = -x[24]*hadamard_5_pd[358];
	dv[0] = -x[24]*x[18];
	J[12] = dv[0]*hadamard_5_pd[357];
	dv[0] *= x[12];
	J[5] = dv[0]*x[1];
	J[1] = dv[0]*x[5];
	J[23] = hadamard_5_pd[356];
	J[19] = x[23]*hadamard_5_pd[355];
	dv[1] = x[23]*x[19];
	J[12] += dv[1]*hadamard_5_pd[354];
	dv[1] *= x[12];
	J[5] += dv[1]*x[1];
	J[1] += dv[1]*x[5];
	J[23] -= hadamard_5_pd[353];
	J[17] = -x[23]*hadamard_5_pd[352];
	dv[2] = -x[23]*x[17];
	J[14] = dv[2]*hadamard_5_pd[351];
	dv[2] *= x[14];
	J[5] += dv[2]*x[1];
	J[1] += dv[2]*x[5];
	J[23] += hadamard_5_pd[350];
	J[17] += x[23]*hadamard_5_pd[349];
	dv[3] = x[23]*x[17];
	J[10] = dv[3]*hadamard_5_pd[348];
	dv[3] *= x[10];
	J[9] = dv[3]*x[1];
	J[1] += dv[3]*x[9];
	J[23] -= hadamard_5_pd[347];
	J[17] -= x[23]*hadamard_5_pd[346];
	dv[4] = -x[23]*x[17];
	J[10] += dv[4]*hadamard_5_pd[345];
	dv[4] *= x[10];
	J[6] = dv[4]*x[4];
	J[4] = dv[4]*x[6];
	J[22] = hadamard_5_pd[344];
	J[18] += x[22]*hadamard_5_pd[343];
	dv[5] = x[22]*x[18];
	J[10] += dv[5]*hadamard_5_pd[342];
	dv[5] *= x[10];
	J[6] += dv[5]*x[4];
	J[4] += dv[5]*x[6];
	J[22] -= hadamard_5_pd[341];
	J[18] -= x[22]*hadamard_5_pd[340];
	dv[6] = -x[22]*x[18];
	J[10] += dv[6]*hadamard_5_pd[339];
	dv[6] *= x[10];
	J[9] += dv[6]*x[1];
	J[1] += dv[6]*x[9];
	J[22] += hadamard_5_pd[338];
	J[18] += x[22]*hadamard_5_pd[337];
	dv[7] = x[22]*x[18];
	J[14] += dv[7]*hadamard_5_pd[336];
	dv[7] *= x[14];
	J[5] += dv[7]*x[1];
	J[1] += dv[7]*x[5];
	J[22] -= hadamard_5_pd[335];
	J[19] -= x[22]*hadamard_5_pd[334];
	dv[8] = -x[22]*x[19];
	J[13] = dv[8]*hadamard_5_pd[333];
	dv[8] *= x[13];
	J[5] += dv[8]*x[1];
	J[1] += dv[8]*x[5];
	J[24] += hadamard_5_pd[332];
	J[17] += x[24]*hadamard_5_pd[331];
	dv[9] = x[24]*x[17];
	J[13] += dv[9]*hadamard_5_pd[330];
	dv[9] *= x[13];
	J[5] += dv[9]*x[1];
	J[1] += dv[9]*x[5];
	J[24] -= hadamard_5_pd[329];
	J[17] -= x[24]*hadamard_5_pd[328];
	dv[10] = -x[24]*x[17];
	J[10] += dv[10]*hadamard_5_pd[327];
	dv[10] *= x[10];
	J[8] = dv[10]*x[1];
	J[1] += dv[10]*x[8];
	J[22] += hadamard_5_pd[326];
	J[19] += x[22]*hadamard_5_pd[325];
	dv[11] = x[22]*x[19];
	J[10] += dv[11]*hadamard_5_pd[324];
	dv[11] *= x[10];
	J[8] += dv[11]*x[1];
	J[1] += dv[11]*x[8];
	J[22] -= hadamard_5_pd[323];
	J[15] = -x[22]*hadamard_5_pd[322];
	dv[12] = -x[22]*x[15];
	J[14] += dv[12]*hadamard_5_pd[321];
	dv[12] *= x[14];
	J[8] += dv[12]*x[1];
	J[1] += dv[12]*x[8];
	J[22] += hadamard_5_pd[320];
	J[15] += x[22]*hadamard_5_pd[319];
	dv[13] = x[22]*x[15];
	J[13] += dv[13]*hadamard_5_pd[318];
	dv[13] *= x[13];
	J[9] += dv[13]*x[1];
	J[1] += dv[13]*x[9];
	J[22] -= hadamard_5_pd[317];
	J[15] -= x[22]*hadamard_5_pd[316];
	dv[14] = -x[22]*x[15];
	J[13] += dv[14]*hadamard_5_pd[315];
	dv[14] *= x[13];
	J[6] += dv[14]*x[4];
	J[4] += dv[14]*x[6];
	J[22] += hadamard_5_pd[314];
	J[15] += x[22]*hadamard_5_pd[313];
	dv[15] = x[22]*x[15];
	J[11] = dv[15]*hadamard_5_pd[312];
	dv[15] *= x[11];
	J[8] += dv[15]*x[4];
	J[4] += dv[15]*x[8];
	J[22] -= hadamard_5_pd[311];
	J[15] -= x[22]*hadamard_5_pd[310];
	dv[16] = -x[22]*x[15];
	J[11] += dv[16]*hadamard_5_pd[309];
	dv[16] *= x[11];
	J[9] += dv[16]*x[3];
	J[3] = dv[16]*x[9];
	J[22] += hadamard_5_pd[308];
	J[15] += x[22]*hadamard_5_pd[307];
	dv[17] = x[22]*x[15];
	J[14] += dv[17]*hadamard_5_pd[306];
	dv[17] *= x[14];
	J[6] += dv[17]*x[3];
	J[3] += dv[17]*x[6];
	J[22] -= hadamard_5_pd[305];
	J[19] -= x[22]*hadamard_5_pd[304];
	dv[18] = -x[22]*x[19];
	J[10] += dv[18]*hadamard_5_pd[303];
	dv[18] *= x[10];
	J[6] += dv[18]*x[3];
	J[3] += dv[18]*x[6];
	J[24] += hadamard_5_pd[302];
	J[17] += x[24]*hadamard_5_pd[301];
	dv[19] = x[24]*x[17];
	J[10] += dv[19]*hadamard_5_pd[300];
	dv[19] *= x[10];
	J[6] += dv[19]*x[3];
	J[3] += dv[19]*x[6];
	J[24] -= hadamard_5_pd[299];
	J[15] -= x[24]*hadamard_5_pd[298];
	dv[20] = -x[24]*x[15];
	J[12] += dv[20]*hadamard_5_pd[297];
	dv[20] *= x[12];
	J[6] += dv[20]*x[3];
	J[3] += dv[20]*x[6];
	J[20] = hadamard_5_pd[296];
	J[19] += x[20]*hadamard_5_pd[295];
	dv[21] = x[20]*x[19];
	J[12] += dv[21]*hadamard_5_pd[294];
	dv[21] *= x[12];
	J[6] += dv[21]*x[3];
	J[3] += dv[21]*x[6];
	J[20] -= hadamard_5_pd[293];
	J[17] -= x[20]*hadamard_5_pd[292];
	dv[22] = -x[20]*x[17];
	J[14] += dv[22]*hadamard_5_pd[291];
	dv[22] *= x[14];
	J[6] += dv[22]*x[3];
	J[3] += dv[22]*x[6];
	J[20] += hadamard_5_pd[290];
	J[17] += x[20]*hadamard_5_pd[289];
	dv[23] = x[20]*x[17];
	J[11] += dv[23]*hadamard_5_pd[288];
	dv[23] *= x[11];
	J[9] += dv[23]*x[3];
	J[3] += dv[23]*x[9];
	J[20] -= hadamard_5_pd[287];
	J[17] -= x[20]*hadamard_5_pd[286];
	dv[24] = -x[20]*x[17];
	J[11] += dv[24]*hadamard_5_pd[285];
	dv[24] *= x[11];
	J[8] += dv[24]*x[4];
	J[4] += dv[24]*x[8];
	J[20] += hadamard_5_pd[284];
	J[17] += x[20]*hadamard_5_pd[283];
	dv[25] = x[20]*x[17];
	J[13] += dv[25]*hadamard_5_pd[282];
	dv[25] *= x[13];
	J[6] += dv[25]*x[4];
	J[4] += dv[25]*x[6];
	J[20] -= hadamard_5_pd[281];
	J[17] -= x[20]*hadamard_5_pd[280];
	dv[26] = -x[20]*x[17];
	J[13] += dv[26]*hadamard_5_pd[279];
	dv[26] *= x[13];
	J[9] += dv[26]*x[1];
	J[1] += dv[26]*x[9];
	J[20] += hadamard_5_pd[278];
	J[17] += x[20]*hadamard_5_pd[277];
	dv[27] = x[20]*x[17];
	J[14] += dv[27]*hadamard_5_pd[276];
	dv[27] *= x[14];
	J[8] += dv[27]*x[1];
	J[1] += dv[27]*x[8];
	J[20] -= hadamard_5_pd[275];
	J[19] -= x[20]*hadamard_5_pd[274];
	dv[28] = -x[20]*x[19];
	J[12] += dv[28]*hadamard_5_pd[273];
	dv[28] *= x[12];
	J[8] += dv[28]*x[1];
	J[1] += dv[28]*x[8];
	J[24] += hadamard_5_pd[272];
	J[15] += x[24]*hadamard_5_pd[271];
	dv[29] = x[24]*x[15];
	J[12] += dv[29]*hadamard_5_pd[270];
	dv[29] *= x[12];
	J[8] += dv[29]*x[1];
	J[1] += dv[29]*x[8];
	J[24] -= hadamard_5_pd[269];
	J[15] -= x[24]*hadamard_5_pd[268];
	dv[30] = -x[24]*x[15];
	J[13] += dv[30]*hadamard_5_pd[267];
	dv[30] *= x[13];
	J[7] = dv[30]*x[1];
	J[1] += dv[30]*x[7];
	J[20] += hadamard_5_pd[266];
	J[19] += x[20]*hadamard_5_pd[265];
	dv[31] = x[20]*x[19];
	J[13] += dv[31]*hadamard_5_pd[264];
	dv[31] *= x[13];
	J[7] += dv[31]*x[1];
	J[1] += dv[31]*x[7];
	J[20] -= hadamard_5_pd[263];
	J[18] -= x[20]*hadamard_5_pd[262];
	dv[32] = -x[20]*x[18];
	J[14] += dv[32]*hadamard_5_pd[261];
	dv[32] *= x[14];
	J[7] += dv[32]*x[1];
	J[1] += dv[32]*x[7];
	J[20] += hadamard_5_pd[260];
	J[18] += x[20]*hadamard_5_pd[259];
	dv[33] = x[20]*x[18];
	J[12] += dv[33]*hadamard_5_pd[258];
	dv[33] *= x[12];
	J[9] += dv[33]*x[1];
	J[1] += dv[33]*x[9];
	J[20] -= hadamard_5_pd[257];
	J[18] -= x[20]*hadamard_5_pd[256];
	dv[34] = -x[20]*x[18];
	J[12] += dv[34]*hadamard_5_pd[255];
	dv[34] *= x[12];
	J[6] += dv[34]*x[4];
	J[4] += dv[34]*x[6];
	J[23] += hadamard_5_pd[254];
	J[15] += x[23]*hadamard_5_pd[253];
	dv[35] = x[23]*x[15];
	J[12] += dv[35]*hadamard_5_pd[252];
	dv[35] *= x[12];
	J[6] += dv[35]*x[4];
	J[4] += dv[35]*x[6];
	J[23] -= hadamard_5_pd[251];
	J[15] -= x[23]*hadamard_5_pd[250];
	dv[36] = -x[23]*x[15];
	J[12] += dv[36]*hadamard_5_pd[249];
	dv[36] *= x[12];
	J[9] += dv[36]*x[1];
	J[1] += dv[36]*x[9];
	J[23] += hadamard_5_pd[248];
	J[15] += x[23]*hadamard_5_pd[247];
	dv[37] = x[23]*x[15];
	J[14] += dv[37]*hadamard_5_pd[246];
	dv[37] *= x[14];
	J[7] += dv[37]*x[1];
	J[1] += dv[37]*x[7];
	J[23] -= hadamard_5_pd[245];
	J[19] -= x[23]*hadamard_5_pd[244];
	dv[38] = -x[23]*x[19];
	J[10] += dv[38]*hadamard_5_pd[243];
	dv[38] *= x[10];
	J[7] += dv[38]*x[1];
	J[1] += dv[38]*x[7];
	J[24] += hadamard_5_pd[242];
	J[18] += x[24]*hadamard_5_pd[241];
	dv[39] = x[24]*x[18];
	J[10] += dv[39]*hadamard_5_pd[240];
	dv[39] *= x[10];
	J[7] += dv[39]*x[1];
	J[1] += dv[39]*x[7];
	J[24] -= hadamard_5_pd[239];
	J[18] -= x[24]*hadamard_5_pd[238];
	dv[40] = -x[24]*x[18];
	J[10] += dv[40]*hadamard_5_pd[237];
	dv[40] *= x[10];
	J[6] += dv[40]*x[2];
	J[2] = dv[40]*x[6];
	J[23] += hadamard_5_pd[236];
	J[19] += x[23]*hadamard_5_pd[235];
	dv[41] = x[23]*x[19];
	J[10] += dv[41]*hadamard_5_pd[234];
	dv[41] *= x[10];
	J[6] += dv[41]*x[2];
	J[2] += dv[41]*x[6];
	J[23] -= hadamard_5_pd[233];
	J[15] -= x[23]*hadamard_5_pd[232];
	dv[42] = -x[23]*x[15];
	J[14] += dv[42]*hadamard_5_pd[231];
	dv[42] *= x[14];
	J[6] += dv[42]*x[2];
	J[2] += dv[42]*x[6];
	J[23] += hadamard_5_pd[230];
	J[15] += x[23]*hadamard_5_pd[229];
	dv[43] = x[23]*x[15];
	J[11] += dv[43]*hadamard_5_pd[228];
	dv[43] *= x[11];
	J[9] += dv[43]*x[2];
	J[2] += dv[43]*x[9];
	J[23] -= hadamard_5_pd[227];
	J[15] -= x[23]*hadamard_5_pd[226];
	dv[44] = -x[23]*x[15];
	J[11] += dv[44]*hadamard_5_pd[225];
	dv[44] *= x[11];
	J[7] += dv[44]*x[4];
	J[4] += dv[44]*x[7];
	J[20] += hadamard_5_pd[224];
	J[18] += x[20]*hadamard_5_pd[223];
	dv[45] = x[20]*x[18];
	J[11] += dv[45]*hadamard_5_pd[222];
	dv[45] *= x[11];
	J[7] += dv[45]*x[4];
	J[4] += dv[45]*x[7];
	J[20] -= hadamard_5_pd[221];
	J[18] -= x[20]*hadamard_5_pd[220];
	dv[46] = -x[20]*x[18];
	J[11] += dv[46]*hadamard_5_pd[219];
	dv[46] *= x[11];
	J[9] += dv[46]*x[2];
	J[2] += dv[46]*x[9];
	J[20] += hadamard_5_pd[218];
	J[18] += x[20]*hadamard_5_pd[217];
	dv[47] = x[20]*x[18];
	J[14] += dv[47]*hadamard_5_pd[216];
	dv[47] *= x[14];
	J[6] += dv[47]*x[2];
	J[2] += dv[47]*x[6];
	J[20] -= hadamard_5_pd[215];
	J[19] -= x[20]*hadamard_5_pd[214];
	dv[48] = -x[20]*x[19];
	J[13] += dv[48]*hadamard_5_pd[213];
	dv[48] *= x[13];
	J[6] += dv[48]*x[2];
	J[2] += dv[48]*x[6];
	J[24] += hadamard_5_pd[212];
	J[15] += x[24]*hadamard_5_pd[211];
	dv[49] = x[24]*x[15];
	J[13] += dv[49]*hadamard_5_pd[210];
	dv[49] *= x[13];
	J[6] += dv[49]*x[2];
	J[2] += dv[49]*x[6];
	J[24] -= hadamard_5_pd[209];
	J[15] -= x[24]*hadamard_5_pd[208];
	dv[50] = -x[24]*x[15];
	J[11] += dv[50]*hadamard_5_pd[207];
	dv[50] *= x[11];
	J[8] += dv[50]*x[2];
	J[2] += dv[50]*x[8];
	J[20] += hadamard_5_pd[206];
	J[19] += x[20]*hadamard_5_pd[205];
	dv[51] = x[20]*x[19];
	J[11] += dv[51]*hadamard_5_pd[204];
	dv[51] *= x[11];
	J[8] += dv[51]*x[2];
	J[2] += dv[51]*x[8];
	J[20] -= hadamard_5_pd[203];
	J[16] = -x[20]*hadamard_5_pd[202];
	dv[52] = -x[20]*x[16];
	J[14] += dv[52]*hadamard_5_pd[201];
	dv[52] *= x[14];
	J[8] += dv[52]*x[2];
	J[2] += dv[52]*x[8];
	J[20] += hadamard_5_pd[200];
	J[16] += x[20]*hadamard_5_pd[199];
	dv[53] = x[20]*x[16];
	J[13] += dv[53]*hadamard_5_pd[198];
	dv[53] *= x[13];
	J[9] += dv[53]*x[2];
	J[2] += dv[53]*x[9];
	J[20] -= hadamard_5_pd[197];
	J[16] -= x[20]*hadamard_5_pd[196];
	dv[54] = -x[20]*x[16];
	J[13] += dv[54]*hadamard_5_pd[195];
	dv[54] *= x[13];
	J[7] += dv[54]*x[4];
	J[4] += dv[54]*x[7];
	J[20] += hadamard_5_pd[194];
	J[16] += x[20]*hadamard_5_pd[193];
	dv[55] = x[20]*x[16];
	J[12] += dv[55]*hadamard_5_pd[192];
	dv[55] *= x[12];
	J[8] += dv[55]*x[4];
	J[4] += dv[55]*x[8];
	J[20] -= hadamard_5_pd[191];
	J[16] -= x[20]*hadamard_5_pd[190];
	dv[56] = -x[20]*x[16];
	J[12] += dv[56]*hadamard_5_pd[189];
	dv[56] *= x[12];
	J[9] += dv[56]*x[3];
	J[3] += dv[56]*x[9];
	J[20] += hadamard_5_pd[188];
	J[16] += x[20]*hadamard_5_pd[187];
	dv[57] = x[20]*x[16];
	J[14] += dv[57]*hadamard_5_pd[186];
	dv[57] *= x[14];
	J[7] += dv[57]*x[3];
	J[3] += dv[57]*x[7];
	J[20] -= hadamard_5_pd[185];
	J[19] -= x[20]*hadamard_5_pd[184];
	dv[58] = -x[20]*x[19];
	J[11] += dv[58]*hadamard_5_pd[183];
	dv[58] *= x[11];
	J[7] += dv[58]*x[3];
	J[3] += dv[58]*x[7];
	J[24] += hadamard_5_pd[182];
	J[15] += x[24]*hadamard_5_pd[181];
	dv[59] = x[24]*x[15];
	J[11] += dv[59]*hadamard_5_pd[180];
	dv[59] *= x[11];
	J[7] += dv[59]*x[3];
	J[3] += dv[59]*x[7];
	J[24] -= hadamard_5_pd[179];
	J[16] -= x[24]*hadamard_5_pd[178];
	dv[60] = -x[24]*x[16];
	J[10] += dv[60]*hadamard_5_pd[177];
	dv[60] *= x[10];
	J[7] += dv[60]*x[3];
	J[3] += dv[60]*x[7];
	J[21] = hadamard_5_pd[176];
	J[19] += x[21]*hadamard_5_pd[175];
	dv[61] = x[21]*x[19];
	J[10] += dv[61]*hadamard_5_pd[174];
	dv[61] *= x[10];
	J[7] += dv[61]*x[3];
	J[3] += dv[61]*x[7];
	J[21] -= hadamard_5_pd[173];
	J[15] -= x[21]*hadamard_5_pd[172];
	dv[62] = -x[21]*x[15];
	J[14] += dv[62]*hadamard_5_pd[171];
	dv[62] *= x[14];
	J[7] += dv[62]*x[3];
	J[3] += dv[62]*x[7];
	J[21] += hadamard_5_pd[170];
	J[15] += x[21]*hadamard_5_pd[169];
	dv[63] = x[21]*x[15];
	J[12] += dv[63]*hadamard_5_pd[168];
	dv[63] *= x[12];
	J[9] += dv[63]*x[3];
	J[3] += dv[63]*x[9];
	J[21] -= hadamard_5_pd[167];
	J[15] -= x[21]*hadamard_5_pd[166];
	dv[64] = -x[21]*x[15];
	J[12] += dv[64]*hadamard_5_pd[165];
	dv[64] *= x[12];
	J[8] += dv[64]*x[4];
	J[4] += dv[64]*x[8];
	J[21] += hadamard_5_pd[164];
	J[15] += x[21]*hadamard_5_pd[163];
	dv[65] = x[21]*x[15];
	J[13] += dv[65]*hadamard_5_pd[162];
	dv[65] *= x[13];
	J[7] += dv[65]*x[4];
	J[4] += dv[65]*x[7];
	J[21] -= hadamard_5_pd[161];
	J[15] -= x[21]*hadamard_5_pd[160];
	dv[66] = -x[21]*x[15];
	J[13] += dv[66]*hadamard_5_pd[159];
	dv[66] *= x[13];
	J[9] += dv[66]*x[2];
	J[2] += dv[66]*x[9];
	J[21] += hadamard_5_pd[158];
	J[15] += x[21]*hadamard_5_pd[157];
	dv[67] = x[21]*x[15];
	J[14] += dv[67]*hadamard_5_pd[156];
	dv[67] *= x[14];
	J[8] += dv[67]*x[2];
	J[2] += dv[67]*x[8];
	J[21] -= hadamard_5_pd[155];
	J[19] -= x[21]*hadamard_5_pd[154];
	dv[68] = -x[21]*x[19];
	J[10] += dv[68]*hadamard_5_pd[153];
	dv[68] *= x[10];
	J[8] += dv[68]*x[2];
	J[2] += dv[68]*x[8];
	J[24] += hadamard_5_pd[152];
	J[16] += x[24]*hadamard_5_pd[151];
	dv[69] = x[24]*x[16];
	J[10] += dv[69]*hadamard_5_pd[150];
	dv[69] *= x[10];
	J[8] += dv[69]*x[2];
	J[2] += dv[69]*x[8];
	J[24] -= hadamard_5_pd[149];
	J[16] -= x[24]*hadamard_5_pd[148];
	dv[70] = -x[24]*x[16];
	J[13] += dv[70]*hadamard_5_pd[147];
	dv[70] *= x[13];
	J[5] += dv[70]*x[2];
	J[2] += dv[70]*x[5];
	J[21] += hadamard_5_pd[146];
	J[19] += x[21]*hadamard_5_pd[145];
	dv[71] = x[21]*x[19];
	J[13] += dv[71]*hadamard_5_pd[144];
	dv[71] *= x[13];
	J[5] += dv[71]*x[2];
	J[2] += dv[71]*x[5];
	J[21] -= hadamard_5_pd[143];
	J[18] -= x[21]*hadamard_5_pd[142];
	dv[72] = -x[21]*x[18];
	J[14] += dv[72]*hadamard_5_pd[141];
	dv[72] *= x[14];
	J[5] += dv[72]*x[2];
	J[2] += dv[72]*x[5];
	J[21] += hadamard_5_pd[140];
	J[18] += x[21]*hadamard_5_pd[139];
	dv[73] = x[21]*x[18];
	J[10] += dv[73]*hadamard_5_pd[138];
	dv[73] *= x[10];
	J[9] += dv[73]*x[2];
	J[2] += dv[73]*x[9];
	J[21] -= hadamard_5_pd[137];
	J[18] -= x[21]*hadamard_5_pd[136];
	dv[74] = -x[21]*x[18];
	J[10] += dv[74]*hadamard_5_pd[135];
	dv[74] *= x[10];
	J[7] += dv[74]*x[4];
	J[4] += dv[74]*x[7];
	J[23] += hadamard_5_pd[134];
	J[16] += x[23]*hadamard_5_pd[133];
	dv[75] = x[23]*x[16];
	J[10] += dv[75]*hadamard_5_pd[132];
	dv[75] *= x[10];
	J[7] += dv[75]*x[4];
	J[4] += dv[75]*x[7];
	J[23] -= hadamard_5_pd[131];
	J[16] -= x[23]*hadamard_5_pd[130];
	dv[76] = -x[23]*x[16];
	J[10] += dv[76]*hadamard_5_pd[129];
	dv[76] *= x[10];
	J[9] += dv[76]*x[2];
	J[2] += dv[76]*x[9];
	J[23] += hadamard_5_pd[128];
	J[16] += x[23]*hadamard_5_pd[127];
	dv[77] = x[23]*x[16];
	J[14] += dv[77]*hadamard_5_pd[126];
	dv[77] *= x[14];
	J[5] += dv[77]*x[2];
	J[2] += dv[77]*x[5];
	J[23] -= hadamard_5_pd[125];
	J[19] -= x[23]*hadamard_5_pd[124];
	dv[78] = -x[23]*x[19];
	J[11] += dv[78]*hadamard_5_pd[123];
	dv[78] *= x[11];
	J[5] += dv[78]*x[2];
	J[2] += dv[78]*x[5];
	J[24] += hadamard_5_pd[122];
	J[18] += x[24]*hadamard_5_pd[121];
	dv[79] = x[24]*x[18];
	J[11] += dv[79]*hadamard_5_pd[120];
	dv[79] *= x[11];
	J[5] += dv[79]*x[2];
	J[2] += dv[79]*x[5];
	J[24] -= hadamard_5_pd[119];
	J[18] -= x[24]*hadamard_5_pd[118];
	dv[80] = -x[24]*x[18];
	J[11] += dv[80]*hadamard_5_pd[117];
	dv[80] *= x[11];
	J[7] += dv[80]*x[0];
	J[0] = dv[80]*x[7];
	J[23] += hadamard_5_pd[116];
	J[19] += x[23]*hadamard_5_pd[115];
	dv[81] = x[23]*x[19];
	J[11] += dv[81]*hadamard_5_pd[114];
	dv[81] *= x[11];
	J[7] += dv[81]*x[0];
	J[0] += dv[81]*x[7];
	J[23] -= hadamard_5_pd[113];
	J[16] -= x[23]*hadamard_5_pd[112];
	dv[82] = -x[23]*x[16];
	J[14] += dv[82]*hadamard_5_pd[111];
	dv[82] *= x[14];
	J[7] += dv[82]*x[0];
	J[0] += dv[82]*x[7];
	J[23] += hadamard_5_pd[110];
	J[16] += x[23]*hadamard_5_pd[109];
	dv[83] = x[23]*x[16];
	J[12] += dv[83]*hadamard_5_pd[108];
	dv[83] *= x[12];
	J[9] += dv[83]*x[0];
	J[0] += dv[83]*x[9];
	J[23] -= hadamard_5_pd[107];
	J[16] -= x[23]*hadamard_5_pd[106];
	dv[84] = -x[23]*x[16];
	J[12] += dv[84]*hadamard_5_pd[105];
	dv[84] *= x[12];
	J[5] += dv[84]*x[4];
	J[4] += dv[84]*x[5];
	J[21] += hadamard_5_pd[104];
	J[18] += x[21]*hadamard_5_pd[103];
	dv[85] = x[21]*x[18];
	J[12] += dv[85]*hadamard_5_pd[102];
	dv[85] *= x[12];
	J[5] += dv[85]*x[4];
	J[4] += dv[85]*x[5];
	J[21] -= hadamard_5_pd[101];
	J[18] -= x[21]*hadamard_5_pd[100];
	dv[86] = -x[21]*x[18];
	J[12] += dv[86]*hadamard_5_pd[99];
	dv[86] *= x[12];
	J[9] += dv[86]*x[0];
	J[0] += dv[86]*x[9];
	J[21] += hadamard_5_pd[98];
	J[18] += x[21]*hadamard_5_pd[97];
	dv[87] = x[21]*x[18];
	J[14] += dv[87]*hadamard_5_pd[96];
	dv[87] *= x[14];
	J[7] += dv[87]*x[0];
	J[0] += dv[87]*x[7];
	J[21] -= hadamard_5_pd[95];
	J[19] -= x[21]*hadamard_5_pd[94];
	dv[88] = -x[21]*x[19];
	J[13] += dv[88]*hadamard_5_pd[93];
	dv[88] *= x[13];
	J[7] += dv[88]*x[0];
	J[0] += dv[88]*x[7];
	J[24] += hadamard_5_pd[92];
	J[16] += x[24]*hadamard_5_pd[91];
	dv[89] = x[24]*x[16];
	J[13] += dv[89]*hadamard_5_pd[90];
	dv[89] *= x[13];
	J[7] += dv[89]*x[0];
	J[0] += dv[89]*x[7];
	J[24] -= hadamard_5_pd[89];
	J[16] -= x[24]*hadamard_5_pd[88];
	dv[90] = -x[24]*x[16];
	J[12] += dv[90]*hadamard_5_pd[87];
	dv[90] *= x[12];
	J[8] += dv[90]*x[0];
	J[0] += dv[90]*x[8];
	J[21] += hadamard_5_pd[86];
	J[19] += x[21]*hadamard_5_pd[85];
	dv[91] = x[21]*x[19];
	J[12] += dv[91]*hadamard_5_pd[84];
	dv[91] *= x[12];
	J[8] += dv[91]*x[0];
	J[0] += dv[91]*x[8];
	J[21] -= hadamard_5_pd[83];
	J[17] -= x[21]*hadamard_5_pd[82];
	dv[92] = -x[21]*x[17];
	J[14] += dv[92]*hadamard_5_pd[81];
	dv[92] *= x[14];
	J[8] += dv[92]*x[0];
	J[0] += dv[92]*x[8];
	J[21] += hadamard_5_pd[80];
	J[17] += x[21]*hadamard_5_pd[79];
	dv[93] = x[21]*x[17];
	J[13] += dv[93]*hadamard_5_pd[78];
	dv[93] *= x[13];
	J[9] += dv[93]*x[0];
	J[0] += dv[93]*x[9];
	J[21] -= hadamard_5_pd[77];
	J[17] -= x[21]*hadamard_5_pd[76];
	dv[94] = -x[21]*x[17];
	J[13] += dv[94]*hadamard_5_pd[75];
	dv[94] *= x[13];
	J[5] += dv[94]*x[4];
	J[4] += dv[94]*x[5];
	J[21] += hadamard_5_pd[74];
	J[17] += x[21]*hadamard_5_pd[73];
	dv[95] = x[21]*x[17];
	J[10] += dv[95]*hadamard_5_pd[72];
	dv[95] *= x[10];
	J[8] += dv[95]*x[4];
	J[4] += dv[95]*x[8];
	J[21] -= hadamard_5_pd[71];
	J[17] -= x[21]*hadamard_5_pd[70];
	dv[96] = -x[21]*x[17];
	J[10] += dv[96]*hadamard_5_pd[69];
	dv[96] *= x[10];
	J[9] += dv[96]*x[3];
	J[3] += dv[96]*x[9];
	J[21] += hadamard_5_pd[68];
	J[17] += x[21]*hadamard_5_pd[67];
	dv[97] = x[21]*x[17];
	J[14] += dv[97]*hadamard_5_pd[66];
	dv[97] *= x[14];
	J[5] += dv[97]*x[3];
	J[3] += dv[97]*x[5];
	J[21] -= hadamard_5_pd[65];
	J[19] -= x[21]*hadamard_5_pd[64];
	dv[98] = -x[21]*x[19];
	J[12] += dv[98]*hadamard_5_pd[63];
	dv[98] *= x[12];
	J[5] += dv[98]*x[3];
	J[3] += dv[98]*x[5];
	J[24] += hadamard_5_pd[62];
	J[16] += x[24]*hadamard_5_pd[61];
	dv[99] = x[24]*x[16];
	J[12] += dv[99]*hadamard_5_pd[60];
	dv[99] *= x[12];
	J[5] += dv[99]*x[3];
	J[3] += dv[99]*x[5];
	J[24] -= hadamard_5_pd[59];
	J[17] -= x[24]*hadamard_5_pd[58];
	dv[100] = -x[24]*x[17];
	J[11] += dv[100]*hadamard_5_pd[57];
	dv[100] *= x[11];
	J[5] += dv[100]*x[3];
	J[3] += dv[100]*x[5];
	J[22] += hadamard_5_pd[56];
	J[19] += x[22]*hadamard_5_pd[55];
	dv[101] = x[22]*x[19];
	J[11] += dv[101]*hadamard_5_pd[54];
	dv[101] *= x[11];
	J[5] += dv[101]*x[3];
	J[3] += dv[101]*x[5];
	J[22] -= hadamard_5_pd[53];
	J[16] -= x[22]*hadamard_5_pd[52];
	dv[102] = -x[22]*x[16];
	J[14] += dv[102]*hadamard_5_pd[51];
	dv[102] *= x[14];
	J[5] += dv[102]*x[3];
	J[3] += dv[102]*x[5];
	J[22] += hadamard_5_pd[50];
	J[16] += x[22]*hadamard_5_pd[49];
	dv[103] = x[22]*x[16];
	J[10] += dv[103]*hadamard_5_pd[48];
	dv[103] *= x[10];
	J[9] += dv[103]*x[3];
	J[3] += dv[103]*x[9];
	J[22] -= hadamard_5_pd[47];
	J[16] -= x[22]*hadamard_5_pd[46];
	dv[104] = -x[22]*x[16];
	J[10] += dv[104]*hadamard_5_pd[45];
	dv[104] *= x[10];
	J[8] += dv[104]*x[4];
	J[4] += dv[104]*x[8];
	J[22] += hadamard_5_pd[44];
	J[16] += x[22]*hadamard_5_pd[43];
	dv[105] = x[22]*x[16];
	J[13] += dv[105]*hadamard_5_pd[42];
	dv[105] *= x[13];
	J[5] += dv[105]*x[4];
	J[4] += dv[105]*x[5];
	J[22] -= hadamard_5_pd[41];
	J[16] -= x[22]*hadamard_5_pd[40];
	dv[106] = -x[22]*x[16];
	J[13] += dv[106]*hadamard_5_pd[39];
	dv[106] *= x[13];
	J[9] += dv[106]*x[0];
	J[0] += dv[106]*x[9];
	J[22] += hadamard_5_pd[38];
	J[16] += x[22]*hadamard_5_pd[37];
	dv[107] = x[22]*x[16];
	J[14] += dv[107]*hadamard_5_pd[36];
	dv[107] *= x[14];
	J[8] += dv[107]*x[0];
	J[0] += dv[107]*x[8];
	J[22] -= hadamard_5_pd[35];
	J[19] -= x[22]*hadamard_5_pd[34];
	dv[108] = -x[22]*x[19];
	J[11] += dv[108]*hadamard_5_pd[33];
	dv[108] *= x[11];
	J[8] += dv[108]*x[0];
	J[0] += dv[108]*x[8];
	J[24] += hadamard_5_pd[32];
	J[17] += x[24]*hadamard_5_pd[31];
	dv[109] = x[24]*x[17];
	J[11] += dv[109]*hadamard_5_pd[30];
	dv[109] *= x[11];
	J[8] += dv[109]*x[0];
	J[0] += dv[109]*x[8];
	J[24] -= hadamard_5_pd[29];
	J[17] -= x[24]*hadamard_5_pd[28];
	dv[110] = -x[24]*x[17];
	J[13] += dv[110]*hadamard_5_pd[27];
	dv[110] *= x[13];
	J[6] += dv[110]*x[0];
	J[0] += dv[110]*x[6];
	J[22] += hadamard_5_pd[26];
	J[19] += x[22]*hadamard_5_pd[25];
	dv[111] = x[22]*x[19];
	J[13] += dv[111]*hadamard_5_pd[24];
	dv[111] *= x[13];
	J[6] += dv[111]*x[0];
	J[0] += dv[111]*x[6];
	J[22] -= hadamard_5_pd[23];
	J[18] -= x[22]*hadamard_5_pd[22];
	dv[112] = -x[22]*x[18];
	J[14] += dv[112]*hadamard_5_pd[21];
	dv[112] *= x[14];
	J[6] += dv[112]*x[0];
	J[0] += dv[112]*x[6];
	J[22] += hadamard_5_pd[20];
	J[18] += x[22]*hadamard_5_pd[19];
	dv[113] = x[22]*x[18];
	J[11] += dv[113]*hadamard_5_pd[18];
	dv[113] *= x[11];
	J[9] += dv[113]*x[0];
	J[0] += dv[113]*x[9];
	J[22] -= hadamard_5_pd[17];
	J[18] -= x[22]*hadamard_5_pd[16];
	dv[114] = -x[22]*x[18];
	J[11] += dv[114]*hadamard_5_pd[15];
	dv[114] *= x[11];
	J[5] += dv[114]*x[4];
	J[4] += dv[114]*x[5];
	J[23] += hadamard_5_pd[14];
	J[17] += x[23]*hadamard_5_pd[13];
	dv[115] = x[23]*x[17];
	J[11] += dv[115]*hadamard_5_pd[12];
	dv[115] *= x[11];
	J[5] += dv[115]*x[4];
	J[4] += dv[115]*x[5];
	J[23] -= hadamard_5_pd[11];
	J[17] -= x[23]*hadamard_5_pd[10];
	dv[116] = -x[23]*x[17];
	J[11] += dv[116]*hadamard_5_pd[9];
	dv[116] *= x[11];
	J[9] += dv[116]*x[0];
	J[0] += dv[116]*x[9];
	J[23] += hadamard_5_pd[8];
	J[17] += x[23]*hadamard_5_pd[7];
	dv[117] = x[23]*x[17];
	J[14] += dv[117]*hadamard_5_pd[6];
	dv[117] *= x[14];
	J[6] += dv[117]*x[0];
	J[0] += dv[117]*x[6];
	J[23] -= hadamard_5_pd[5];
	J[19] -= x[23]*hadamard_5_pd[4];
	dv[118] = -x[23]*x[19];
	J[12] += dv[118]*hadamard_5_pd[3];
	dv[118] *= x[12];
	J[6] += dv[118]*x[0];
	J[0] += dv[118]*x[6];
	J[24] += hadamard_5_pd[2];
	J[18] += x[24]*hadamard_5_pd[1];
	dv[119] = x[24]*x[18];
	J[12] += dv[119]*hadamard_5_pd[0];
	dv[119] *= x[12];
	J[6] += dv[119]*x[0];
	J[0] += dv[119]*x[6];
	J[25] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
