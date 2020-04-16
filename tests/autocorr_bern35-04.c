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
 fint autocorr_bern35_04_auxcom_[1] = { 1 /* nlc */ };
 fint autocorr_bern35_04_funcom_[79] = {
	36 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	36 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

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
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	37,

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

 real autocorr_bern35_04_boundc_[1+72+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.};

 real autocorr_bern35_04_x0comn_[36] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real autocorr_bern35_04_pd[389];
static real autocorr_bern35_04_old_x[36];
static int autocorr_bern35_04_xkind = -1;

 static int
autocorr_bern35_04_xcheck(real *x)
{
	real *x1 = autocorr_bern35_04_old_x, *xe = x + 36;
	errno = 0;
	if (autocorr_bern35_04_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	autocorr_bern35_04_xkind = 0;
	return 1;
	}
 real
autocorr_bern35_04_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (autocorr_bern35_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[35];
	;}

	if (wantfg & 2) {
	g[35] = 1.;
	}

	return rv;
}

 void
autocorr_bern35_04_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[129];
	real t1;
	fint wantfg = *needfg;
	if (autocorr_bern35_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	autocorr_bern35_04_pd[0] = 64. * x[0];
	autocorr_bern35_04_pd[1] = autocorr_bern35_04_pd[0] * x[1];
	autocorr_bern35_04_pd[2] = autocorr_bern35_04_pd[1] * x[2];
	v[0] = autocorr_bern35_04_pd[2] * x[3];
	autocorr_bern35_04_pd[3] = 64. * x[1];
	autocorr_bern35_04_pd[4] = autocorr_bern35_04_pd[3] * x[2];
	autocorr_bern35_04_pd[5] = autocorr_bern35_04_pd[4] * x[3];
	v[1] = autocorr_bern35_04_pd[5] * x[4];
	v[0] += v[1];
	autocorr_bern35_04_pd[6] = 64. * x[2];
	autocorr_bern35_04_pd[7] = autocorr_bern35_04_pd[6] * x[3];
	autocorr_bern35_04_pd[8] = autocorr_bern35_04_pd[7] * x[4];
	v[1] = autocorr_bern35_04_pd[8] * x[5];
	v[0] += v[1];
	autocorr_bern35_04_pd[9] = 64. * x[3];
	autocorr_bern35_04_pd[10] = autocorr_bern35_04_pd[9] * x[4];
	autocorr_bern35_04_pd[11] = autocorr_bern35_04_pd[10] * x[5];
	v[1] = autocorr_bern35_04_pd[11] * x[6];
	v[0] += v[1];
	autocorr_bern35_04_pd[12] = 64. * x[4];
	autocorr_bern35_04_pd[13] = autocorr_bern35_04_pd[12] * x[5];
	autocorr_bern35_04_pd[14] = autocorr_bern35_04_pd[13] * x[6];
	v[1] = autocorr_bern35_04_pd[14] * x[7];
	v[0] += v[1];
	autocorr_bern35_04_pd[15] = 64. * x[5];
	autocorr_bern35_04_pd[16] = autocorr_bern35_04_pd[15] * x[6];
	autocorr_bern35_04_pd[17] = autocorr_bern35_04_pd[16] * x[7];
	v[1] = autocorr_bern35_04_pd[17] * x[8];
	v[0] += v[1];
	autocorr_bern35_04_pd[18] = 64. * x[6];
	autocorr_bern35_04_pd[19] = autocorr_bern35_04_pd[18] * x[7];
	autocorr_bern35_04_pd[20] = autocorr_bern35_04_pd[19] * x[8];
	v[1] = autocorr_bern35_04_pd[20] * x[9];
	v[0] += v[1];
	autocorr_bern35_04_pd[21] = 64. * x[7];
	autocorr_bern35_04_pd[22] = autocorr_bern35_04_pd[21] * x[8];
	autocorr_bern35_04_pd[23] = autocorr_bern35_04_pd[22] * x[9];
	v[1] = autocorr_bern35_04_pd[23] * x[10];
	v[0] += v[1];
	autocorr_bern35_04_pd[24] = 64. * x[8];
	autocorr_bern35_04_pd[25] = autocorr_bern35_04_pd[24] * x[9];
	autocorr_bern35_04_pd[26] = autocorr_bern35_04_pd[25] * x[10];
	v[1] = autocorr_bern35_04_pd[26] * x[11];
	v[0] += v[1];
	autocorr_bern35_04_pd[27] = 64. * x[9];
	autocorr_bern35_04_pd[28] = autocorr_bern35_04_pd[27] * x[10];
	autocorr_bern35_04_pd[29] = autocorr_bern35_04_pd[28] * x[11];
	v[1] = autocorr_bern35_04_pd[29] * x[12];
	v[0] += v[1];
	autocorr_bern35_04_pd[30] = 64. * x[10];
	autocorr_bern35_04_pd[31] = autocorr_bern35_04_pd[30] * x[11];
	autocorr_bern35_04_pd[32] = autocorr_bern35_04_pd[31] * x[12];
	v[1] = autocorr_bern35_04_pd[32] * x[13];
	v[0] += v[1];
	autocorr_bern35_04_pd[33] = 64. * x[11];
	autocorr_bern35_04_pd[34] = autocorr_bern35_04_pd[33] * x[12];
	autocorr_bern35_04_pd[35] = autocorr_bern35_04_pd[34] * x[13];
	v[1] = autocorr_bern35_04_pd[35] * x[14];
	v[0] += v[1];
	autocorr_bern35_04_pd[36] = 64. * x[12];
	autocorr_bern35_04_pd[37] = autocorr_bern35_04_pd[36] * x[13];
	autocorr_bern35_04_pd[38] = autocorr_bern35_04_pd[37] * x[14];
	v[1] = autocorr_bern35_04_pd[38] * x[15];
	v[0] += v[1];
	autocorr_bern35_04_pd[39] = 64. * x[13];
	autocorr_bern35_04_pd[40] = autocorr_bern35_04_pd[39] * x[14];
	autocorr_bern35_04_pd[41] = autocorr_bern35_04_pd[40] * x[15];
	v[1] = autocorr_bern35_04_pd[41] * x[16];
	v[0] += v[1];
	autocorr_bern35_04_pd[42] = 64. * x[14];
	autocorr_bern35_04_pd[43] = autocorr_bern35_04_pd[42] * x[15];
	autocorr_bern35_04_pd[44] = autocorr_bern35_04_pd[43] * x[16];
	v[1] = autocorr_bern35_04_pd[44] * x[17];
	v[0] += v[1];
	autocorr_bern35_04_pd[45] = 64. * x[15];
	autocorr_bern35_04_pd[46] = autocorr_bern35_04_pd[45] * x[16];
	autocorr_bern35_04_pd[47] = autocorr_bern35_04_pd[46] * x[17];
	v[1] = autocorr_bern35_04_pd[47] * x[18];
	v[0] += v[1];
	autocorr_bern35_04_pd[48] = 64. * x[16];
	autocorr_bern35_04_pd[49] = autocorr_bern35_04_pd[48] * x[17];
	autocorr_bern35_04_pd[50] = autocorr_bern35_04_pd[49] * x[18];
	v[1] = autocorr_bern35_04_pd[50] * x[19];
	v[0] += v[1];
	autocorr_bern35_04_pd[51] = 64. * x[17];
	autocorr_bern35_04_pd[52] = autocorr_bern35_04_pd[51] * x[18];
	autocorr_bern35_04_pd[53] = autocorr_bern35_04_pd[52] * x[19];
	v[1] = autocorr_bern35_04_pd[53] * x[20];
	v[0] += v[1];
	autocorr_bern35_04_pd[54] = 64. * x[18];
	autocorr_bern35_04_pd[55] = autocorr_bern35_04_pd[54] * x[19];
	autocorr_bern35_04_pd[56] = autocorr_bern35_04_pd[55] * x[20];
	v[1] = autocorr_bern35_04_pd[56] * x[21];
	v[0] += v[1];
	autocorr_bern35_04_pd[57] = 64. * x[19];
	autocorr_bern35_04_pd[58] = autocorr_bern35_04_pd[57] * x[20];
	autocorr_bern35_04_pd[59] = autocorr_bern35_04_pd[58] * x[21];
	v[1] = autocorr_bern35_04_pd[59] * x[22];
	v[0] += v[1];
	autocorr_bern35_04_pd[60] = 64. * x[20];
	autocorr_bern35_04_pd[61] = autocorr_bern35_04_pd[60] * x[21];
	autocorr_bern35_04_pd[62] = autocorr_bern35_04_pd[61] * x[22];
	v[1] = autocorr_bern35_04_pd[62] * x[23];
	v[0] += v[1];
	autocorr_bern35_04_pd[63] = 64. * x[21];
	autocorr_bern35_04_pd[64] = autocorr_bern35_04_pd[63] * x[22];
	autocorr_bern35_04_pd[65] = autocorr_bern35_04_pd[64] * x[23];
	v[1] = autocorr_bern35_04_pd[65] * x[24];
	v[0] += v[1];
	autocorr_bern35_04_pd[66] = 64. * x[22];
	autocorr_bern35_04_pd[67] = autocorr_bern35_04_pd[66] * x[23];
	autocorr_bern35_04_pd[68] = autocorr_bern35_04_pd[67] * x[24];
	v[1] = autocorr_bern35_04_pd[68] * x[25];
	v[0] += v[1];
	autocorr_bern35_04_pd[69] = 64. * x[23];
	autocorr_bern35_04_pd[70] = autocorr_bern35_04_pd[69] * x[24];
	autocorr_bern35_04_pd[71] = autocorr_bern35_04_pd[70] * x[25];
	v[1] = autocorr_bern35_04_pd[71] * x[26];
	v[0] += v[1];
	autocorr_bern35_04_pd[72] = 64. * x[24];
	autocorr_bern35_04_pd[73] = autocorr_bern35_04_pd[72] * x[25];
	autocorr_bern35_04_pd[74] = autocorr_bern35_04_pd[73] * x[26];
	v[1] = autocorr_bern35_04_pd[74] * x[27];
	v[0] += v[1];
	autocorr_bern35_04_pd[75] = 64. * x[25];
	autocorr_bern35_04_pd[76] = autocorr_bern35_04_pd[75] * x[26];
	autocorr_bern35_04_pd[77] = autocorr_bern35_04_pd[76] * x[27];
	v[1] = autocorr_bern35_04_pd[77] * x[28];
	v[0] += v[1];
	autocorr_bern35_04_pd[78] = 64. * x[26];
	autocorr_bern35_04_pd[79] = autocorr_bern35_04_pd[78] * x[27];
	autocorr_bern35_04_pd[80] = autocorr_bern35_04_pd[79] * x[28];
	v[1] = autocorr_bern35_04_pd[80] * x[29];
	v[0] += v[1];
	autocorr_bern35_04_pd[81] = 64. * x[27];
	autocorr_bern35_04_pd[82] = autocorr_bern35_04_pd[81] * x[28];
	autocorr_bern35_04_pd[83] = autocorr_bern35_04_pd[82] * x[29];
	v[1] = autocorr_bern35_04_pd[83] * x[30];
	v[0] += v[1];
	autocorr_bern35_04_pd[84] = 64. * x[28];
	autocorr_bern35_04_pd[85] = autocorr_bern35_04_pd[84] * x[29];
	autocorr_bern35_04_pd[86] = autocorr_bern35_04_pd[85] * x[30];
	v[1] = autocorr_bern35_04_pd[86] * x[31];
	v[0] += v[1];
	autocorr_bern35_04_pd[87] = 64. * x[29];
	autocorr_bern35_04_pd[88] = autocorr_bern35_04_pd[87] * x[30];
	autocorr_bern35_04_pd[89] = autocorr_bern35_04_pd[88] * x[31];
	v[1] = autocorr_bern35_04_pd[89] * x[32];
	v[0] += v[1];
	autocorr_bern35_04_pd[90] = 64. * x[30];
	autocorr_bern35_04_pd[91] = autocorr_bern35_04_pd[90] * x[31];
	autocorr_bern35_04_pd[92] = autocorr_bern35_04_pd[91] * x[32];
	v[1] = autocorr_bern35_04_pd[92] * x[33];
	v[0] += v[1];
	autocorr_bern35_04_pd[93] = 64. * x[31];
	autocorr_bern35_04_pd[94] = autocorr_bern35_04_pd[93] * x[32];
	autocorr_bern35_04_pd[95] = autocorr_bern35_04_pd[94] * x[33];
	v[1] = autocorr_bern35_04_pd[95] * x[34];
	v[0] += v[1];
	autocorr_bern35_04_pd[96] = 32. * x[0];
	autocorr_bern35_04_pd[97] = autocorr_bern35_04_pd[96] * x[1];
	v[1] = autocorr_bern35_04_pd[97] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[98] = 32. * x[0];
	autocorr_bern35_04_pd[99] = autocorr_bern35_04_pd[98] * x[1];
	v[2] = autocorr_bern35_04_pd[99] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[100] = 32. * x[0];
	autocorr_bern35_04_pd[101] = autocorr_bern35_04_pd[100] * x[2];
	v[1] = autocorr_bern35_04_pd[101] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[102] = 64. * x[1];
	autocorr_bern35_04_pd[103] = autocorr_bern35_04_pd[102] * x[2];
	v[2] = autocorr_bern35_04_pd[103] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[104] = 32. * x[1];
	autocorr_bern35_04_pd[105] = autocorr_bern35_04_pd[104] * x[2];
	v[1] = autocorr_bern35_04_pd[105] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[106] = 32. * x[1];
	autocorr_bern35_04_pd[107] = autocorr_bern35_04_pd[106] * x[3];
	v[2] = autocorr_bern35_04_pd[107] * x[4];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[108] = 64. * x[2];
	autocorr_bern35_04_pd[109] = autocorr_bern35_04_pd[108] * x[3];
	v[1] = autocorr_bern35_04_pd[109] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[110] = 32. * x[2];
	autocorr_bern35_04_pd[111] = autocorr_bern35_04_pd[110] * x[3];
	v[2] = autocorr_bern35_04_pd[111] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[112] = 32. * x[2];
	autocorr_bern35_04_pd[113] = autocorr_bern35_04_pd[112] * x[4];
	v[1] = autocorr_bern35_04_pd[113] * x[5];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[114] = 64. * x[3];
	autocorr_bern35_04_pd[115] = autocorr_bern35_04_pd[114] * x[4];
	v[2] = autocorr_bern35_04_pd[115] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[116] = 32. * x[3];
	autocorr_bern35_04_pd[117] = autocorr_bern35_04_pd[116] * x[4];
	v[1] = autocorr_bern35_04_pd[117] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[118] = 32. * x[3];
	autocorr_bern35_04_pd[119] = autocorr_bern35_04_pd[118] * x[5];
	v[2] = autocorr_bern35_04_pd[119] * x[6];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[120] = 64. * x[4];
	autocorr_bern35_04_pd[121] = autocorr_bern35_04_pd[120] * x[5];
	v[1] = autocorr_bern35_04_pd[121] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[122] = 32. * x[4];
	autocorr_bern35_04_pd[123] = autocorr_bern35_04_pd[122] * x[5];
	v[2] = autocorr_bern35_04_pd[123] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[124] = 32. * x[4];
	autocorr_bern35_04_pd[125] = autocorr_bern35_04_pd[124] * x[6];
	v[1] = autocorr_bern35_04_pd[125] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[126] = 64. * x[5];
	autocorr_bern35_04_pd[127] = autocorr_bern35_04_pd[126] * x[6];
	v[2] = autocorr_bern35_04_pd[127] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[128] = 32. * x[5];
	autocorr_bern35_04_pd[129] = autocorr_bern35_04_pd[128] * x[6];
	v[1] = autocorr_bern35_04_pd[129] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[130] = 32. * x[5];
	autocorr_bern35_04_pd[131] = autocorr_bern35_04_pd[130] * x[7];
	v[2] = autocorr_bern35_04_pd[131] * x[8];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[132] = 64. * x[6];
	autocorr_bern35_04_pd[133] = autocorr_bern35_04_pd[132] * x[7];
	v[1] = autocorr_bern35_04_pd[133] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[134] = 32. * x[6];
	autocorr_bern35_04_pd[135] = autocorr_bern35_04_pd[134] * x[7];
	v[2] = autocorr_bern35_04_pd[135] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[136] = 32. * x[6];
	autocorr_bern35_04_pd[137] = autocorr_bern35_04_pd[136] * x[8];
	v[1] = autocorr_bern35_04_pd[137] * x[9];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[138] = 64. * x[7];
	autocorr_bern35_04_pd[139] = autocorr_bern35_04_pd[138] * x[8];
	v[2] = autocorr_bern35_04_pd[139] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[140] = 32. * x[7];
	autocorr_bern35_04_pd[141] = autocorr_bern35_04_pd[140] * x[8];
	v[1] = autocorr_bern35_04_pd[141] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[142] = 32. * x[7];
	autocorr_bern35_04_pd[143] = autocorr_bern35_04_pd[142] * x[9];
	v[2] = autocorr_bern35_04_pd[143] * x[10];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[144] = 64. * x[8];
	autocorr_bern35_04_pd[145] = autocorr_bern35_04_pd[144] * x[9];
	v[1] = autocorr_bern35_04_pd[145] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[146] = 32. * x[8];
	autocorr_bern35_04_pd[147] = autocorr_bern35_04_pd[146] * x[9];
	v[2] = autocorr_bern35_04_pd[147] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[148] = 32. * x[8];
	autocorr_bern35_04_pd[149] = autocorr_bern35_04_pd[148] * x[10];
	v[1] = autocorr_bern35_04_pd[149] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[150] = 64. * x[9];
	autocorr_bern35_04_pd[151] = autocorr_bern35_04_pd[150] * x[10];
	v[2] = autocorr_bern35_04_pd[151] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[152] = 32. * x[9];
	autocorr_bern35_04_pd[153] = autocorr_bern35_04_pd[152] * x[10];
	v[1] = autocorr_bern35_04_pd[153] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[154] = 32. * x[9];
	autocorr_bern35_04_pd[155] = autocorr_bern35_04_pd[154] * x[11];
	v[2] = autocorr_bern35_04_pd[155] * x[12];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[156] = 64. * x[10];
	autocorr_bern35_04_pd[157] = autocorr_bern35_04_pd[156] * x[11];
	v[1] = autocorr_bern35_04_pd[157] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[158] = 32. * x[10];
	autocorr_bern35_04_pd[159] = autocorr_bern35_04_pd[158] * x[11];
	v[2] = autocorr_bern35_04_pd[159] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[160] = 32. * x[10];
	autocorr_bern35_04_pd[161] = autocorr_bern35_04_pd[160] * x[12];
	v[1] = autocorr_bern35_04_pd[161] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[162] = 64. * x[11];
	autocorr_bern35_04_pd[163] = autocorr_bern35_04_pd[162] * x[12];
	v[2] = autocorr_bern35_04_pd[163] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[164] = 32. * x[11];
	autocorr_bern35_04_pd[165] = autocorr_bern35_04_pd[164] * x[12];
	v[1] = autocorr_bern35_04_pd[165] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[166] = 32. * x[11];
	autocorr_bern35_04_pd[167] = autocorr_bern35_04_pd[166] * x[13];
	v[2] = autocorr_bern35_04_pd[167] * x[14];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[168] = 64. * x[12];
	autocorr_bern35_04_pd[169] = autocorr_bern35_04_pd[168] * x[13];
	v[1] = autocorr_bern35_04_pd[169] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[170] = 32. * x[12];
	autocorr_bern35_04_pd[171] = autocorr_bern35_04_pd[170] * x[13];
	v[2] = autocorr_bern35_04_pd[171] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[172] = 32. * x[12];
	autocorr_bern35_04_pd[173] = autocorr_bern35_04_pd[172] * x[14];
	v[1] = autocorr_bern35_04_pd[173] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[174] = 64. * x[13];
	autocorr_bern35_04_pd[175] = autocorr_bern35_04_pd[174] * x[14];
	v[2] = autocorr_bern35_04_pd[175] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[176] = 32. * x[13];
	autocorr_bern35_04_pd[177] = autocorr_bern35_04_pd[176] * x[14];
	v[1] = autocorr_bern35_04_pd[177] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[178] = 32. * x[13];
	autocorr_bern35_04_pd[179] = autocorr_bern35_04_pd[178] * x[15];
	v[2] = autocorr_bern35_04_pd[179] * x[16];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[180] = 64. * x[14];
	autocorr_bern35_04_pd[181] = autocorr_bern35_04_pd[180] * x[15];
	v[1] = autocorr_bern35_04_pd[181] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[182] = 32. * x[14];
	autocorr_bern35_04_pd[183] = autocorr_bern35_04_pd[182] * x[15];
	v[2] = autocorr_bern35_04_pd[183] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[184] = 32. * x[14];
	autocorr_bern35_04_pd[185] = autocorr_bern35_04_pd[184] * x[16];
	v[1] = autocorr_bern35_04_pd[185] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[186] = 64. * x[15];
	autocorr_bern35_04_pd[187] = autocorr_bern35_04_pd[186] * x[16];
	v[2] = autocorr_bern35_04_pd[187] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[188] = 32. * x[15];
	autocorr_bern35_04_pd[189] = autocorr_bern35_04_pd[188] * x[16];
	v[1] = autocorr_bern35_04_pd[189] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[190] = 32. * x[15];
	autocorr_bern35_04_pd[191] = autocorr_bern35_04_pd[190] * x[17];
	v[2] = autocorr_bern35_04_pd[191] * x[18];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[192] = 64. * x[16];
	autocorr_bern35_04_pd[193] = autocorr_bern35_04_pd[192] * x[17];
	v[1] = autocorr_bern35_04_pd[193] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[194] = 32. * x[16];
	autocorr_bern35_04_pd[195] = autocorr_bern35_04_pd[194] * x[17];
	v[2] = autocorr_bern35_04_pd[195] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[196] = 32. * x[16];
	autocorr_bern35_04_pd[197] = autocorr_bern35_04_pd[196] * x[18];
	v[1] = autocorr_bern35_04_pd[197] * x[19];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[198] = 64. * x[17];
	autocorr_bern35_04_pd[199] = autocorr_bern35_04_pd[198] * x[18];
	v[2] = autocorr_bern35_04_pd[199] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[200] = 32. * x[17];
	autocorr_bern35_04_pd[201] = autocorr_bern35_04_pd[200] * x[18];
	v[1] = autocorr_bern35_04_pd[201] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[202] = 32. * x[17];
	autocorr_bern35_04_pd[203] = autocorr_bern35_04_pd[202] * x[19];
	v[2] = autocorr_bern35_04_pd[203] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[204] = 64. * x[18];
	autocorr_bern35_04_pd[205] = autocorr_bern35_04_pd[204] * x[19];
	v[1] = autocorr_bern35_04_pd[205] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[206] = 32. * x[18];
	autocorr_bern35_04_pd[207] = autocorr_bern35_04_pd[206] * x[19];
	v[2] = autocorr_bern35_04_pd[207] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[208] = 32. * x[18];
	autocorr_bern35_04_pd[209] = autocorr_bern35_04_pd[208] * x[20];
	v[1] = autocorr_bern35_04_pd[209] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[210] = 64. * x[19];
	autocorr_bern35_04_pd[211] = autocorr_bern35_04_pd[210] * x[20];
	v[2] = autocorr_bern35_04_pd[211] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[212] = 32. * x[19];
	autocorr_bern35_04_pd[213] = autocorr_bern35_04_pd[212] * x[20];
	v[1] = autocorr_bern35_04_pd[213] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[214] = 32. * x[19];
	autocorr_bern35_04_pd[215] = autocorr_bern35_04_pd[214] * x[21];
	v[2] = autocorr_bern35_04_pd[215] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[216] = 64. * x[20];
	autocorr_bern35_04_pd[217] = autocorr_bern35_04_pd[216] * x[21];
	v[1] = autocorr_bern35_04_pd[217] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[218] = 32. * x[20];
	autocorr_bern35_04_pd[219] = autocorr_bern35_04_pd[218] * x[21];
	v[2] = autocorr_bern35_04_pd[219] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[220] = 32. * x[20];
	autocorr_bern35_04_pd[221] = autocorr_bern35_04_pd[220] * x[22];
	v[1] = autocorr_bern35_04_pd[221] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[222] = 64. * x[21];
	autocorr_bern35_04_pd[223] = autocorr_bern35_04_pd[222] * x[22];
	v[2] = autocorr_bern35_04_pd[223] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[224] = 32. * x[21];
	autocorr_bern35_04_pd[225] = autocorr_bern35_04_pd[224] * x[22];
	v[1] = autocorr_bern35_04_pd[225] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[226] = 32. * x[21];
	autocorr_bern35_04_pd[227] = autocorr_bern35_04_pd[226] * x[23];
	v[2] = autocorr_bern35_04_pd[227] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[228] = 64. * x[22];
	autocorr_bern35_04_pd[229] = autocorr_bern35_04_pd[228] * x[23];
	v[1] = autocorr_bern35_04_pd[229] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[230] = 32. * x[22];
	autocorr_bern35_04_pd[231] = autocorr_bern35_04_pd[230] * x[23];
	v[2] = autocorr_bern35_04_pd[231] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[232] = 32. * x[22];
	autocorr_bern35_04_pd[233] = autocorr_bern35_04_pd[232] * x[24];
	v[1] = autocorr_bern35_04_pd[233] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[234] = 64. * x[23];
	autocorr_bern35_04_pd[235] = autocorr_bern35_04_pd[234] * x[24];
	v[2] = autocorr_bern35_04_pd[235] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[236] = 32. * x[23];
	autocorr_bern35_04_pd[237] = autocorr_bern35_04_pd[236] * x[24];
	v[1] = autocorr_bern35_04_pd[237] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[238] = 32. * x[23];
	autocorr_bern35_04_pd[239] = autocorr_bern35_04_pd[238] * x[25];
	v[2] = autocorr_bern35_04_pd[239] * x[26];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[240] = 64. * x[24];
	autocorr_bern35_04_pd[241] = autocorr_bern35_04_pd[240] * x[25];
	v[1] = autocorr_bern35_04_pd[241] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[242] = 32. * x[24];
	autocorr_bern35_04_pd[243] = autocorr_bern35_04_pd[242] * x[25];
	v[2] = autocorr_bern35_04_pd[243] * x[27];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[244] = 32. * x[24];
	autocorr_bern35_04_pd[245] = autocorr_bern35_04_pd[244] * x[26];
	v[1] = autocorr_bern35_04_pd[245] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[246] = 64. * x[25];
	autocorr_bern35_04_pd[247] = autocorr_bern35_04_pd[246] * x[26];
	v[2] = autocorr_bern35_04_pd[247] * x[27];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[248] = 32. * x[25];
	autocorr_bern35_04_pd[249] = autocorr_bern35_04_pd[248] * x[26];
	v[1] = autocorr_bern35_04_pd[249] * x[28];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[250] = 32. * x[25];
	autocorr_bern35_04_pd[251] = autocorr_bern35_04_pd[250] * x[27];
	v[2] = autocorr_bern35_04_pd[251] * x[28];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[252] = 64. * x[26];
	autocorr_bern35_04_pd[253] = autocorr_bern35_04_pd[252] * x[27];
	v[1] = autocorr_bern35_04_pd[253] * x[28];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[254] = 32. * x[26];
	autocorr_bern35_04_pd[255] = autocorr_bern35_04_pd[254] * x[27];
	v[2] = autocorr_bern35_04_pd[255] * x[29];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[256] = 32. * x[26];
	autocorr_bern35_04_pd[257] = autocorr_bern35_04_pd[256] * x[28];
	v[1] = autocorr_bern35_04_pd[257] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[258] = 64. * x[27];
	autocorr_bern35_04_pd[259] = autocorr_bern35_04_pd[258] * x[28];
	v[2] = autocorr_bern35_04_pd[259] * x[29];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[260] = 32. * x[27];
	autocorr_bern35_04_pd[261] = autocorr_bern35_04_pd[260] * x[28];
	v[1] = autocorr_bern35_04_pd[261] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[262] = 32. * x[27];
	autocorr_bern35_04_pd[263] = autocorr_bern35_04_pd[262] * x[29];
	v[2] = autocorr_bern35_04_pd[263] * x[30];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[264] = 64. * x[28];
	autocorr_bern35_04_pd[265] = autocorr_bern35_04_pd[264] * x[29];
	v[1] = autocorr_bern35_04_pd[265] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[266] = 32. * x[28];
	autocorr_bern35_04_pd[267] = autocorr_bern35_04_pd[266] * x[29];
	v[2] = autocorr_bern35_04_pd[267] * x[31];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[268] = 32. * x[28];
	autocorr_bern35_04_pd[269] = autocorr_bern35_04_pd[268] * x[30];
	v[1] = autocorr_bern35_04_pd[269] * x[31];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[270] = 64. * x[29];
	autocorr_bern35_04_pd[271] = autocorr_bern35_04_pd[270] * x[30];
	v[2] = autocorr_bern35_04_pd[271] * x[31];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[272] = 32. * x[29];
	autocorr_bern35_04_pd[273] = autocorr_bern35_04_pd[272] * x[30];
	v[1] = autocorr_bern35_04_pd[273] * x[32];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[274] = 32. * x[29];
	autocorr_bern35_04_pd[275] = autocorr_bern35_04_pd[274] * x[31];
	v[2] = autocorr_bern35_04_pd[275] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[276] = 64. * x[30];
	autocorr_bern35_04_pd[277] = autocorr_bern35_04_pd[276] * x[31];
	v[1] = autocorr_bern35_04_pd[277] * x[32];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[278] = 32. * x[30];
	autocorr_bern35_04_pd[279] = autocorr_bern35_04_pd[278] * x[31];
	v[2] = autocorr_bern35_04_pd[279] * x[33];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[280] = 32. * x[30];
	autocorr_bern35_04_pd[281] = autocorr_bern35_04_pd[280] * x[32];
	v[1] = autocorr_bern35_04_pd[281] * x[33];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[282] = 64. * x[31];
	autocorr_bern35_04_pd[283] = autocorr_bern35_04_pd[282] * x[32];
	v[2] = autocorr_bern35_04_pd[283] * x[33];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[284] = 32. * x[31];
	autocorr_bern35_04_pd[285] = autocorr_bern35_04_pd[284] * x[32];
	v[1] = autocorr_bern35_04_pd[285] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[286] = 32. * x[31];
	autocorr_bern35_04_pd[287] = autocorr_bern35_04_pd[286] * x[33];
	v[2] = autocorr_bern35_04_pd[287] * x[34];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern35_04_pd[288] = 32. * x[32];
	autocorr_bern35_04_pd[289] = autocorr_bern35_04_pd[288] * x[33];
	v[1] = autocorr_bern35_04_pd[289] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[290] = 16. * x[0];
	v[2] = autocorr_bern35_04_pd[290] * x[1];
	v[0] += v[2];
	autocorr_bern35_04_pd[291] = 24. * x[0];
	v[2] = autocorr_bern35_04_pd[291] * x[2];
	v[0] += v[2];
	autocorr_bern35_04_pd[292] = 16. * x[0];
	v[2] = autocorr_bern35_04_pd[292] * x[3];
	v[0] += v[2];
	autocorr_bern35_04_pd[293] = 32. * x[1];
	v[2] = autocorr_bern35_04_pd[293] * x[2];
	v[0] += v[2];
	autocorr_bern35_04_pd[294] = 48. * x[1];
	v[2] = autocorr_bern35_04_pd[294] * x[3];
	v[0] += v[2];
	autocorr_bern35_04_pd[295] = 16. * x[1];
	v[2] = autocorr_bern35_04_pd[295] * x[4];
	v[0] += v[2];
	autocorr_bern35_04_pd[296] = 48. * x[2];
	v[2] = autocorr_bern35_04_pd[296] * x[3];
	v[0] += v[2];
	autocorr_bern35_04_pd[297] = 48. * x[2];
	v[2] = autocorr_bern35_04_pd[297] * x[4];
	v[0] += v[2];
	autocorr_bern35_04_pd[298] = 16. * x[2];
	v[2] = autocorr_bern35_04_pd[298] * x[5];
	v[0] += v[2];
	autocorr_bern35_04_pd[299] = 48. * x[3];
	v[2] = autocorr_bern35_04_pd[299] * x[4];
	v[0] += v[2];
	autocorr_bern35_04_pd[300] = 48. * x[3];
	v[2] = autocorr_bern35_04_pd[300] * x[5];
	v[0] += v[2];
	autocorr_bern35_04_pd[301] = 16. * x[3];
	v[2] = autocorr_bern35_04_pd[301] * x[6];
	v[0] += v[2];
	autocorr_bern35_04_pd[302] = 48. * x[4];
	v[2] = autocorr_bern35_04_pd[302] * x[5];
	v[0] += v[2];
	autocorr_bern35_04_pd[303] = 48. * x[4];
	v[2] = autocorr_bern35_04_pd[303] * x[6];
	v[0] += v[2];
	autocorr_bern35_04_pd[304] = 16. * x[4];
	v[2] = autocorr_bern35_04_pd[304] * x[7];
	v[0] += v[2];
	autocorr_bern35_04_pd[305] = 48. * x[5];
	v[2] = autocorr_bern35_04_pd[305] * x[6];
	v[0] += v[2];
	autocorr_bern35_04_pd[306] = 48. * x[5];
	v[2] = autocorr_bern35_04_pd[306] * x[7];
	v[0] += v[2];
	autocorr_bern35_04_pd[307] = 16. * x[5];
	v[2] = autocorr_bern35_04_pd[307] * x[8];
	v[0] += v[2];
	autocorr_bern35_04_pd[308] = 48. * x[6];
	v[2] = autocorr_bern35_04_pd[308] * x[7];
	v[0] += v[2];
	autocorr_bern35_04_pd[309] = 48. * x[6];
	v[2] = autocorr_bern35_04_pd[309] * x[8];
	v[0] += v[2];
	autocorr_bern35_04_pd[310] = 16. * x[6];
	v[2] = autocorr_bern35_04_pd[310] * x[9];
	v[0] += v[2];
	autocorr_bern35_04_pd[311] = 48. * x[7];
	v[2] = autocorr_bern35_04_pd[311] * x[8];
	v[0] += v[2];
	autocorr_bern35_04_pd[312] = 48. * x[7];
	v[2] = autocorr_bern35_04_pd[312] * x[9];
	v[0] += v[2];
	autocorr_bern35_04_pd[313] = 16. * x[7];
	v[2] = autocorr_bern35_04_pd[313] * x[10];
	v[0] += v[2];
	autocorr_bern35_04_pd[314] = 48. * x[8];
	v[2] = autocorr_bern35_04_pd[314] * x[9];
	v[0] += v[2];
	autocorr_bern35_04_pd[315] = 48. * x[8];
	v[2] = autocorr_bern35_04_pd[315] * x[10];
	v[0] += v[2];
	autocorr_bern35_04_pd[316] = 16. * x[8];
	v[2] = autocorr_bern35_04_pd[316] * x[11];
	v[0] += v[2];
	autocorr_bern35_04_pd[317] = 48. * x[9];
	v[2] = autocorr_bern35_04_pd[317] * x[10];
	v[0] += v[2];
	autocorr_bern35_04_pd[318] = 48. * x[9];
	v[2] = autocorr_bern35_04_pd[318] * x[11];
	v[0] += v[2];
	autocorr_bern35_04_pd[319] = 16. * x[9];
	v[2] = autocorr_bern35_04_pd[319] * x[12];
	v[0] += v[2];
	autocorr_bern35_04_pd[320] = 48. * x[10];
	v[2] = autocorr_bern35_04_pd[320] * x[11];
	v[0] += v[2];
	autocorr_bern35_04_pd[321] = 48. * x[10];
	v[2] = autocorr_bern35_04_pd[321] * x[12];
	v[0] += v[2];
	autocorr_bern35_04_pd[322] = 16. * x[10];
	v[2] = autocorr_bern35_04_pd[322] * x[13];
	v[0] += v[2];
	autocorr_bern35_04_pd[323] = 48. * x[11];
	v[2] = autocorr_bern35_04_pd[323] * x[12];
	v[0] += v[2];
	autocorr_bern35_04_pd[324] = 48. * x[11];
	v[2] = autocorr_bern35_04_pd[324] * x[13];
	v[0] += v[2];
	autocorr_bern35_04_pd[325] = 16. * x[11];
	v[2] = autocorr_bern35_04_pd[325] * x[14];
	v[0] += v[2];
	autocorr_bern35_04_pd[326] = 48. * x[12];
	v[2] = autocorr_bern35_04_pd[326] * x[13];
	v[0] += v[2];
	autocorr_bern35_04_pd[327] = 48. * x[12];
	v[2] = autocorr_bern35_04_pd[327] * x[14];
	v[0] += v[2];
	autocorr_bern35_04_pd[328] = 16. * x[12];
	v[2] = autocorr_bern35_04_pd[328] * x[15];
	v[0] += v[2];
	autocorr_bern35_04_pd[329] = 48. * x[13];
	v[2] = autocorr_bern35_04_pd[329] * x[14];
	v[0] += v[2];
	autocorr_bern35_04_pd[330] = 48. * x[13];
	v[2] = autocorr_bern35_04_pd[330] * x[15];
	v[0] += v[2];
	autocorr_bern35_04_pd[331] = 16. * x[13];
	v[2] = autocorr_bern35_04_pd[331] * x[16];
	v[0] += v[2];
	autocorr_bern35_04_pd[332] = 48. * x[14];
	v[2] = autocorr_bern35_04_pd[332] * x[15];
	v[0] += v[2];
	autocorr_bern35_04_pd[333] = 48. * x[14];
	v[2] = autocorr_bern35_04_pd[333] * x[16];
	v[0] += v[2];
	autocorr_bern35_04_pd[334] = 16. * x[14];
	v[2] = autocorr_bern35_04_pd[334] * x[17];
	v[0] += v[2];
	autocorr_bern35_04_pd[335] = 48. * x[15];
	v[2] = autocorr_bern35_04_pd[335] * x[16];
	v[0] += v[2];
	autocorr_bern35_04_pd[336] = 48. * x[15];
	v[2] = autocorr_bern35_04_pd[336] * x[17];
	v[0] += v[2];
	autocorr_bern35_04_pd[337] = 16. * x[15];
	v[2] = autocorr_bern35_04_pd[337] * x[18];
	v[0] += v[2];
	autocorr_bern35_04_pd[338] = 48. * x[16];
	v[2] = autocorr_bern35_04_pd[338] * x[17];
	v[0] += v[2];
	autocorr_bern35_04_pd[339] = 48. * x[16];
	v[2] = autocorr_bern35_04_pd[339] * x[18];
	v[0] += v[2];
	autocorr_bern35_04_pd[340] = 16. * x[16];
	v[2] = autocorr_bern35_04_pd[340] * x[19];
	v[0] += v[2];
	autocorr_bern35_04_pd[341] = 48. * x[17];
	v[2] = autocorr_bern35_04_pd[341] * x[18];
	v[0] += v[2];
	autocorr_bern35_04_pd[342] = 48. * x[17];
	v[2] = autocorr_bern35_04_pd[342] * x[19];
	v[0] += v[2];
	autocorr_bern35_04_pd[343] = 16. * x[17];
	v[2] = autocorr_bern35_04_pd[343] * x[20];
	v[0] += v[2];
	autocorr_bern35_04_pd[344] = 48. * x[18];
	v[2] = autocorr_bern35_04_pd[344] * x[19];
	v[0] += v[2];
	autocorr_bern35_04_pd[345] = 48. * x[18];
	v[2] = autocorr_bern35_04_pd[345] * x[20];
	v[0] += v[2];
	autocorr_bern35_04_pd[346] = 16. * x[18];
	v[2] = autocorr_bern35_04_pd[346] * x[21];
	v[0] += v[2];
	autocorr_bern35_04_pd[347] = 48. * x[19];
	v[2] = autocorr_bern35_04_pd[347] * x[20];
	v[0] += v[2];
	autocorr_bern35_04_pd[348] = 48. * x[19];
	v[2] = autocorr_bern35_04_pd[348] * x[21];
	v[0] += v[2];
	autocorr_bern35_04_pd[349] = 16. * x[19];
	v[2] = autocorr_bern35_04_pd[349] * x[22];
	v[0] += v[2];
	autocorr_bern35_04_pd[350] = 48. * x[20];
	v[2] = autocorr_bern35_04_pd[350] * x[21];
	v[0] += v[2];
	autocorr_bern35_04_pd[351] = 48. * x[20];
	v[2] = autocorr_bern35_04_pd[351] * x[22];
	v[0] += v[2];
	autocorr_bern35_04_pd[352] = 16. * x[20];
	v[2] = autocorr_bern35_04_pd[352] * x[23];
	v[0] += v[2];
	autocorr_bern35_04_pd[353] = 48. * x[21];
	v[2] = autocorr_bern35_04_pd[353] * x[22];
	v[0] += v[2];
	autocorr_bern35_04_pd[354] = 48. * x[21];
	v[2] = autocorr_bern35_04_pd[354] * x[23];
	v[0] += v[2];
	autocorr_bern35_04_pd[355] = 16. * x[21];
	v[2] = autocorr_bern35_04_pd[355] * x[24];
	v[0] += v[2];
	autocorr_bern35_04_pd[356] = 48. * x[22];
	v[2] = autocorr_bern35_04_pd[356] * x[23];
	v[0] += v[2];
	autocorr_bern35_04_pd[357] = 48. * x[22];
	v[2] = autocorr_bern35_04_pd[357] * x[24];
	v[0] += v[2];
	autocorr_bern35_04_pd[358] = 16. * x[22];
	v[2] = autocorr_bern35_04_pd[358] * x[25];
	v[0] += v[2];
	autocorr_bern35_04_pd[359] = 48. * x[23];
	v[2] = autocorr_bern35_04_pd[359] * x[24];
	v[0] += v[2];
	autocorr_bern35_04_pd[360] = 48. * x[23];
	v[2] = autocorr_bern35_04_pd[360] * x[25];
	v[0] += v[2];
	autocorr_bern35_04_pd[361] = 16. * x[23];
	v[2] = autocorr_bern35_04_pd[361] * x[26];
	v[0] += v[2];
	autocorr_bern35_04_pd[362] = 48. * x[24];
	v[2] = autocorr_bern35_04_pd[362] * x[25];
	v[0] += v[2];
	autocorr_bern35_04_pd[363] = 48. * x[24];
	v[2] = autocorr_bern35_04_pd[363] * x[26];
	v[0] += v[2];
	autocorr_bern35_04_pd[364] = 16. * x[24];
	v[2] = autocorr_bern35_04_pd[364] * x[27];
	v[0] += v[2];
	autocorr_bern35_04_pd[365] = 48. * x[25];
	v[2] = autocorr_bern35_04_pd[365] * x[26];
	v[0] += v[2];
	autocorr_bern35_04_pd[366] = 48. * x[25];
	v[2] = autocorr_bern35_04_pd[366] * x[27];
	v[0] += v[2];
	autocorr_bern35_04_pd[367] = 16. * x[25];
	v[2] = autocorr_bern35_04_pd[367] * x[28];
	v[0] += v[2];
	autocorr_bern35_04_pd[368] = 48. * x[26];
	v[2] = autocorr_bern35_04_pd[368] * x[27];
	v[0] += v[2];
	autocorr_bern35_04_pd[369] = 48. * x[26];
	v[2] = autocorr_bern35_04_pd[369] * x[28];
	v[0] += v[2];
	autocorr_bern35_04_pd[370] = 16. * x[26];
	v[2] = autocorr_bern35_04_pd[370] * x[29];
	v[0] += v[2];
	autocorr_bern35_04_pd[371] = 48. * x[27];
	v[2] = autocorr_bern35_04_pd[371] * x[28];
	v[0] += v[2];
	autocorr_bern35_04_pd[372] = 48. * x[27];
	v[2] = autocorr_bern35_04_pd[372] * x[29];
	v[0] += v[2];
	autocorr_bern35_04_pd[373] = 16. * x[27];
	v[2] = autocorr_bern35_04_pd[373] * x[30];
	v[0] += v[2];
	autocorr_bern35_04_pd[374] = 48. * x[28];
	v[2] = autocorr_bern35_04_pd[374] * x[29];
	v[0] += v[2];
	autocorr_bern35_04_pd[375] = 48. * x[28];
	v[2] = autocorr_bern35_04_pd[375] * x[30];
	v[0] += v[2];
	autocorr_bern35_04_pd[376] = 16. * x[28];
	v[2] = autocorr_bern35_04_pd[376] * x[31];
	v[0] += v[2];
	autocorr_bern35_04_pd[377] = 48. * x[29];
	v[2] = autocorr_bern35_04_pd[377] * x[30];
	v[0] += v[2];
	autocorr_bern35_04_pd[378] = 48. * x[29];
	v[2] = autocorr_bern35_04_pd[378] * x[31];
	v[0] += v[2];
	autocorr_bern35_04_pd[379] = 16. * x[29];
	v[2] = autocorr_bern35_04_pd[379] * x[32];
	v[0] += v[2];
	autocorr_bern35_04_pd[380] = 48. * x[30];
	v[2] = autocorr_bern35_04_pd[380] * x[31];
	v[0] += v[2];
	autocorr_bern35_04_pd[381] = 48. * x[30];
	v[2] = autocorr_bern35_04_pd[381] * x[32];
	v[0] += v[2];
	autocorr_bern35_04_pd[382] = 16. * x[30];
	v[2] = autocorr_bern35_04_pd[382] * x[33];
	v[0] += v[2];
	autocorr_bern35_04_pd[383] = 48. * x[31];
	v[2] = autocorr_bern35_04_pd[383] * x[32];
	v[0] += v[2];
	autocorr_bern35_04_pd[384] = 48. * x[31];
	v[2] = autocorr_bern35_04_pd[384] * x[33];
	v[0] += v[2];
	autocorr_bern35_04_pd[385] = 16. * x[31];
	v[2] = autocorr_bern35_04_pd[385] * x[34];
	v[0] += v[2];
	autocorr_bern35_04_pd[386] = 32. * x[32];
	v[2] = autocorr_bern35_04_pd[386] * x[33];
	v[0] += v[2];
	autocorr_bern35_04_pd[387] = 24. * x[32];
	v[2] = autocorr_bern35_04_pd[387] * x[34];
	v[0] += v[2];
	autocorr_bern35_04_pd[388] = 16. * x[33];
	v[2] = autocorr_bern35_04_pd[388] * x[34];
	v[0] += v[2];
	t1 = v[0] + -12.*x[0];
	t1 += -24.*x[1];
	t1 += -36.*x[2];
	t1 += -48.*x[3];
	t1 += -48.*x[4];
	t1 += -48.*x[5];
	t1 += -48.*x[6];
	t1 += -48.*x[7];
	t1 += -48.*x[8];
	t1 += -48.*x[9];
	t1 += -48.*x[10];
	t1 += -48.*x[11];
	t1 += -48.*x[12];
	t1 += -48.*x[13];
	t1 += -48.*x[14];
	t1 += -48.*x[15];
	t1 += -48.*x[16];
	t1 += -48.*x[17];
	t1 += -48.*x[18];
	t1 += -48.*x[19];
	t1 += -48.*x[20];
	t1 += -48.*x[21];
	t1 += -48.*x[22];
	t1 += -48.*x[23];
	t1 += -48.*x[24];
	t1 += -48.*x[25];
	t1 += -48.*x[26];
	t1 += -48.*x[27];
	t1 += -48.*x[28];
	t1 += -48.*x[29];
	t1 += -48.*x[30];
	t1 += -48.*x[31];
	t1 += -36.*x[32];
	t1 += -24.*x[33];
	t1 += -12.*x[34];
	t1 += -x[35];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[34] = autocorr_bern35_04_pd[388] + -12.;
	J[33] = x[34]*16. + -24.;
	J[34] += autocorr_bern35_04_pd[387];
	J[32] = x[34]*24. + -36.;
	J[33] += autocorr_bern35_04_pd[386];
	J[32] += x[33]*32.;
	J[34] += autocorr_bern35_04_pd[385];
	J[31] = x[34]*16. + -48.;
	J[33] += autocorr_bern35_04_pd[384];
	J[31] += x[33]*48.;
	J[32] += autocorr_bern35_04_pd[383];
	J[31] += x[32]*48.;
	J[33] += autocorr_bern35_04_pd[382];
	J[30] = x[33]*16. + -48.;
	J[32] += autocorr_bern35_04_pd[381];
	J[30] += x[32]*48.;
	J[31] += autocorr_bern35_04_pd[380];
	J[30] += x[31]*48.;
	J[32] += autocorr_bern35_04_pd[379];
	J[29] = x[32]*16. + -48.;
	J[31] += autocorr_bern35_04_pd[378];
	J[29] += x[31]*48.;
	J[30] += autocorr_bern35_04_pd[377];
	J[29] += x[30]*48.;
	J[31] += autocorr_bern35_04_pd[376];
	J[28] = x[31]*16. + -48.;
	J[30] += autocorr_bern35_04_pd[375];
	J[28] += x[30]*48.;
	J[29] += autocorr_bern35_04_pd[374];
	J[28] += x[29]*48.;
	J[30] += autocorr_bern35_04_pd[373];
	J[27] = x[30]*16. + -48.;
	J[29] += autocorr_bern35_04_pd[372];
	J[27] += x[29]*48.;
	J[28] += autocorr_bern35_04_pd[371];
	J[27] += x[28]*48.;
	J[29] += autocorr_bern35_04_pd[370];
	J[26] = x[29]*16. + -48.;
	J[28] += autocorr_bern35_04_pd[369];
	J[26] += x[28]*48.;
	J[27] += autocorr_bern35_04_pd[368];
	J[26] += x[27]*48.;
	J[28] += autocorr_bern35_04_pd[367];
	J[25] = x[28]*16. + -48.;
	J[27] += autocorr_bern35_04_pd[366];
	J[25] += x[27]*48.;
	J[26] += autocorr_bern35_04_pd[365];
	J[25] += x[26]*48.;
	J[27] += autocorr_bern35_04_pd[364];
	J[24] = x[27]*16. + -48.;
	J[26] += autocorr_bern35_04_pd[363];
	J[24] += x[26]*48.;
	J[25] += autocorr_bern35_04_pd[362];
	J[24] += x[25]*48.;
	J[26] += autocorr_bern35_04_pd[361];
	J[23] = x[26]*16. + -48.;
	J[25] += autocorr_bern35_04_pd[360];
	J[23] += x[25]*48.;
	J[24] += autocorr_bern35_04_pd[359];
	J[23] += x[24]*48.;
	J[25] += autocorr_bern35_04_pd[358];
	J[22] = x[25]*16. + -48.;
	J[24] += autocorr_bern35_04_pd[357];
	J[22] += x[24]*48.;
	J[23] += autocorr_bern35_04_pd[356];
	J[22] += x[23]*48.;
	J[24] += autocorr_bern35_04_pd[355];
	J[21] = x[24]*16. + -48.;
	J[23] += autocorr_bern35_04_pd[354];
	J[21] += x[23]*48.;
	J[22] += autocorr_bern35_04_pd[353];
	J[21] += x[22]*48.;
	J[23] += autocorr_bern35_04_pd[352];
	J[20] = x[23]*16. + -48.;
	J[22] += autocorr_bern35_04_pd[351];
	J[20] += x[22]*48.;
	J[21] += autocorr_bern35_04_pd[350];
	J[20] += x[21]*48.;
	J[22] += autocorr_bern35_04_pd[349];
	J[19] = x[22]*16. + -48.;
	J[21] += autocorr_bern35_04_pd[348];
	J[19] += x[21]*48.;
	J[20] += autocorr_bern35_04_pd[347];
	J[19] += x[20]*48.;
	J[21] += autocorr_bern35_04_pd[346];
	J[18] = x[21]*16. + -48.;
	J[20] += autocorr_bern35_04_pd[345];
	J[18] += x[20]*48.;
	J[19] += autocorr_bern35_04_pd[344];
	J[18] += x[19]*48.;
	J[20] += autocorr_bern35_04_pd[343];
	J[17] = x[20]*16. + -48.;
	J[19] += autocorr_bern35_04_pd[342];
	J[17] += x[19]*48.;
	J[18] += autocorr_bern35_04_pd[341];
	J[17] += x[18]*48.;
	J[19] += autocorr_bern35_04_pd[340];
	J[16] = x[19]*16. + -48.;
	J[18] += autocorr_bern35_04_pd[339];
	J[16] += x[18]*48.;
	J[17] += autocorr_bern35_04_pd[338];
	J[16] += x[17]*48.;
	J[18] += autocorr_bern35_04_pd[337];
	J[15] = x[18]*16. + -48.;
	J[17] += autocorr_bern35_04_pd[336];
	J[15] += x[17]*48.;
	J[16] += autocorr_bern35_04_pd[335];
	J[15] += x[16]*48.;
	J[17] += autocorr_bern35_04_pd[334];
	J[14] = x[17]*16. + -48.;
	J[16] += autocorr_bern35_04_pd[333];
	J[14] += x[16]*48.;
	J[15] += autocorr_bern35_04_pd[332];
	J[14] += x[15]*48.;
	J[16] += autocorr_bern35_04_pd[331];
	J[13] = x[16]*16. + -48.;
	J[15] += autocorr_bern35_04_pd[330];
	J[13] += x[15]*48.;
	J[14] += autocorr_bern35_04_pd[329];
	J[13] += x[14]*48.;
	J[15] += autocorr_bern35_04_pd[328];
	J[12] = x[15]*16. + -48.;
	J[14] += autocorr_bern35_04_pd[327];
	J[12] += x[14]*48.;
	J[13] += autocorr_bern35_04_pd[326];
	J[12] += x[13]*48.;
	J[14] += autocorr_bern35_04_pd[325];
	J[11] = x[14]*16. + -48.;
	J[13] += autocorr_bern35_04_pd[324];
	J[11] += x[13]*48.;
	J[12] += autocorr_bern35_04_pd[323];
	J[11] += x[12]*48.;
	J[13] += autocorr_bern35_04_pd[322];
	J[10] = x[13]*16. + -48.;
	J[12] += autocorr_bern35_04_pd[321];
	J[10] += x[12]*48.;
	J[11] += autocorr_bern35_04_pd[320];
	J[10] += x[11]*48.;
	J[12] += autocorr_bern35_04_pd[319];
	J[9] = x[12]*16. + -48.;
	J[11] += autocorr_bern35_04_pd[318];
	J[9] += x[11]*48.;
	J[10] += autocorr_bern35_04_pd[317];
	J[9] += x[10]*48.;
	J[11] += autocorr_bern35_04_pd[316];
	J[8] = x[11]*16. + -48.;
	J[10] += autocorr_bern35_04_pd[315];
	J[8] += x[10]*48.;
	J[9] += autocorr_bern35_04_pd[314];
	J[8] += x[9]*48.;
	J[10] += autocorr_bern35_04_pd[313];
	J[7] = x[10]*16. + -48.;
	J[9] += autocorr_bern35_04_pd[312];
	J[7] += x[9]*48.;
	J[8] += autocorr_bern35_04_pd[311];
	J[7] += x[8]*48.;
	J[9] += autocorr_bern35_04_pd[310];
	J[6] = x[9]*16. + -48.;
	J[8] += autocorr_bern35_04_pd[309];
	J[6] += x[8]*48.;
	J[7] += autocorr_bern35_04_pd[308];
	J[6] += x[7]*48.;
	J[8] += autocorr_bern35_04_pd[307];
	J[5] = x[8]*16. + -48.;
	J[7] += autocorr_bern35_04_pd[306];
	J[5] += x[7]*48.;
	J[6] += autocorr_bern35_04_pd[305];
	J[5] += x[6]*48.;
	J[7] += autocorr_bern35_04_pd[304];
	J[4] = x[7]*16. + -48.;
	J[6] += autocorr_bern35_04_pd[303];
	J[4] += x[6]*48.;
	J[5] += autocorr_bern35_04_pd[302];
	J[4] += x[5]*48.;
	J[6] += autocorr_bern35_04_pd[301];
	J[3] = x[6]*16. + -48.;
	J[5] += autocorr_bern35_04_pd[300];
	J[3] += x[5]*48.;
	J[4] += autocorr_bern35_04_pd[299];
	J[3] += x[4]*48.;
	J[5] += autocorr_bern35_04_pd[298];
	J[2] = x[5]*16. + -36.;
	J[4] += autocorr_bern35_04_pd[297];
	J[2] += x[4]*48.;
	J[3] += autocorr_bern35_04_pd[296];
	J[2] += x[3]*48.;
	J[4] += autocorr_bern35_04_pd[295];
	J[1] = x[4]*16. + -24.;
	J[3] += autocorr_bern35_04_pd[294];
	J[1] += x[3]*48.;
	J[2] += autocorr_bern35_04_pd[293];
	J[1] += x[2]*32.;
	J[3] += autocorr_bern35_04_pd[292];
	J[0] = x[3]*16. + -12.;
	J[2] += autocorr_bern35_04_pd[291];
	J[0] += x[2]*24.;
	J[1] += autocorr_bern35_04_pd[290];
	J[0] += x[1]*16.;
	J[34] -= autocorr_bern35_04_pd[289];
	J[33] -= x[34]*autocorr_bern35_04_pd[288];
	dv[0] = -x[34]*x[33];
	J[32] += dv[0]*32.;
	J[34] -= autocorr_bern35_04_pd[287];
	J[33] -= x[34]*autocorr_bern35_04_pd[286];
	dv[1] = -x[34]*x[33];
	J[31] += dv[1]*32.;
	J[34] -= autocorr_bern35_04_pd[285];
	J[32] -= x[34]*autocorr_bern35_04_pd[284];
	dv[2] = -x[34]*x[32];
	J[31] += dv[2]*32.;
	J[33] -= autocorr_bern35_04_pd[283];
	J[32] -= x[33]*autocorr_bern35_04_pd[282];
	dv[3] = -x[33]*x[32];
	J[31] += dv[3]*64.;
	J[33] -= autocorr_bern35_04_pd[281];
	J[32] -= x[33]*autocorr_bern35_04_pd[280];
	dv[4] = -x[33]*x[32];
	J[30] += dv[4]*32.;
	J[33] -= autocorr_bern35_04_pd[279];
	J[31] -= x[33]*autocorr_bern35_04_pd[278];
	dv[5] = -x[33]*x[31];
	J[30] += dv[5]*32.;
	J[32] -= autocorr_bern35_04_pd[277];
	J[31] -= x[32]*autocorr_bern35_04_pd[276];
	dv[6] = -x[32]*x[31];
	J[30] += dv[6]*64.;
	J[32] -= autocorr_bern35_04_pd[275];
	J[31] -= x[32]*autocorr_bern35_04_pd[274];
	dv[7] = -x[32]*x[31];
	J[29] += dv[7]*32.;
	J[32] -= autocorr_bern35_04_pd[273];
	J[30] -= x[32]*autocorr_bern35_04_pd[272];
	dv[8] = -x[32]*x[30];
	J[29] += dv[8]*32.;
	J[31] -= autocorr_bern35_04_pd[271];
	J[30] -= x[31]*autocorr_bern35_04_pd[270];
	dv[9] = -x[31]*x[30];
	J[29] += dv[9]*64.;
	J[31] -= autocorr_bern35_04_pd[269];
	J[30] -= x[31]*autocorr_bern35_04_pd[268];
	dv[10] = -x[31]*x[30];
	J[28] += dv[10]*32.;
	J[31] -= autocorr_bern35_04_pd[267];
	J[29] -= x[31]*autocorr_bern35_04_pd[266];
	dv[11] = -x[31]*x[29];
	J[28] += dv[11]*32.;
	J[30] -= autocorr_bern35_04_pd[265];
	J[29] -= x[30]*autocorr_bern35_04_pd[264];
	dv[12] = -x[30]*x[29];
	J[28] += dv[12]*64.;
	J[30] -= autocorr_bern35_04_pd[263];
	J[29] -= x[30]*autocorr_bern35_04_pd[262];
	dv[13] = -x[30]*x[29];
	J[27] += dv[13]*32.;
	J[30] -= autocorr_bern35_04_pd[261];
	J[28] -= x[30]*autocorr_bern35_04_pd[260];
	dv[14] = -x[30]*x[28];
	J[27] += dv[14]*32.;
	J[29] -= autocorr_bern35_04_pd[259];
	J[28] -= x[29]*autocorr_bern35_04_pd[258];
	dv[15] = -x[29]*x[28];
	J[27] += dv[15]*64.;
	J[29] -= autocorr_bern35_04_pd[257];
	J[28] -= x[29]*autocorr_bern35_04_pd[256];
	dv[16] = -x[29]*x[28];
	J[26] += dv[16]*32.;
	J[29] -= autocorr_bern35_04_pd[255];
	J[27] -= x[29]*autocorr_bern35_04_pd[254];
	dv[17] = -x[29]*x[27];
	J[26] += dv[17]*32.;
	J[28] -= autocorr_bern35_04_pd[253];
	J[27] -= x[28]*autocorr_bern35_04_pd[252];
	dv[18] = -x[28]*x[27];
	J[26] += dv[18]*64.;
	J[28] -= autocorr_bern35_04_pd[251];
	J[27] -= x[28]*autocorr_bern35_04_pd[250];
	dv[19] = -x[28]*x[27];
	J[25] += dv[19]*32.;
	J[28] -= autocorr_bern35_04_pd[249];
	J[26] -= x[28]*autocorr_bern35_04_pd[248];
	dv[20] = -x[28]*x[26];
	J[25] += dv[20]*32.;
	J[27] -= autocorr_bern35_04_pd[247];
	J[26] -= x[27]*autocorr_bern35_04_pd[246];
	dv[21] = -x[27]*x[26];
	J[25] += dv[21]*64.;
	J[27] -= autocorr_bern35_04_pd[245];
	J[26] -= x[27]*autocorr_bern35_04_pd[244];
	dv[22] = -x[27]*x[26];
	J[24] += dv[22]*32.;
	J[27] -= autocorr_bern35_04_pd[243];
	J[25] -= x[27]*autocorr_bern35_04_pd[242];
	dv[23] = -x[27]*x[25];
	J[24] += dv[23]*32.;
	J[26] -= autocorr_bern35_04_pd[241];
	J[25] -= x[26]*autocorr_bern35_04_pd[240];
	dv[24] = -x[26]*x[25];
	J[24] += dv[24]*64.;
	J[26] -= autocorr_bern35_04_pd[239];
	J[25] -= x[26]*autocorr_bern35_04_pd[238];
	dv[25] = -x[26]*x[25];
	J[23] += dv[25]*32.;
	J[26] -= autocorr_bern35_04_pd[237];
	J[24] -= x[26]*autocorr_bern35_04_pd[236];
	dv[26] = -x[26]*x[24];
	J[23] += dv[26]*32.;
	J[25] -= autocorr_bern35_04_pd[235];
	J[24] -= x[25]*autocorr_bern35_04_pd[234];
	dv[27] = -x[25]*x[24];
	J[23] += dv[27]*64.;
	J[25] -= autocorr_bern35_04_pd[233];
	J[24] -= x[25]*autocorr_bern35_04_pd[232];
	dv[28] = -x[25]*x[24];
	J[22] += dv[28]*32.;
	J[25] -= autocorr_bern35_04_pd[231];
	J[23] -= x[25]*autocorr_bern35_04_pd[230];
	dv[29] = -x[25]*x[23];
	J[22] += dv[29]*32.;
	J[24] -= autocorr_bern35_04_pd[229];
	J[23] -= x[24]*autocorr_bern35_04_pd[228];
	dv[30] = -x[24]*x[23];
	J[22] += dv[30]*64.;
	J[24] -= autocorr_bern35_04_pd[227];
	J[23] -= x[24]*autocorr_bern35_04_pd[226];
	dv[31] = -x[24]*x[23];
	J[21] += dv[31]*32.;
	J[24] -= autocorr_bern35_04_pd[225];
	J[22] -= x[24]*autocorr_bern35_04_pd[224];
	dv[32] = -x[24]*x[22];
	J[21] += dv[32]*32.;
	J[23] -= autocorr_bern35_04_pd[223];
	J[22] -= x[23]*autocorr_bern35_04_pd[222];
	dv[33] = -x[23]*x[22];
	J[21] += dv[33]*64.;
	J[23] -= autocorr_bern35_04_pd[221];
	J[22] -= x[23]*autocorr_bern35_04_pd[220];
	dv[34] = -x[23]*x[22];
	J[20] += dv[34]*32.;
	J[23] -= autocorr_bern35_04_pd[219];
	J[21] -= x[23]*autocorr_bern35_04_pd[218];
	dv[35] = -x[23]*x[21];
	J[20] += dv[35]*32.;
	J[22] -= autocorr_bern35_04_pd[217];
	J[21] -= x[22]*autocorr_bern35_04_pd[216];
	dv[36] = -x[22]*x[21];
	J[20] += dv[36]*64.;
	J[22] -= autocorr_bern35_04_pd[215];
	J[21] -= x[22]*autocorr_bern35_04_pd[214];
	dv[37] = -x[22]*x[21];
	J[19] += dv[37]*32.;
	J[22] -= autocorr_bern35_04_pd[213];
	J[20] -= x[22]*autocorr_bern35_04_pd[212];
	dv[38] = -x[22]*x[20];
	J[19] += dv[38]*32.;
	J[21] -= autocorr_bern35_04_pd[211];
	J[20] -= x[21]*autocorr_bern35_04_pd[210];
	dv[39] = -x[21]*x[20];
	J[19] += dv[39]*64.;
	J[21] -= autocorr_bern35_04_pd[209];
	J[20] -= x[21]*autocorr_bern35_04_pd[208];
	dv[40] = -x[21]*x[20];
	J[18] += dv[40]*32.;
	J[21] -= autocorr_bern35_04_pd[207];
	J[19] -= x[21]*autocorr_bern35_04_pd[206];
	dv[41] = -x[21]*x[19];
	J[18] += dv[41]*32.;
	J[20] -= autocorr_bern35_04_pd[205];
	J[19] -= x[20]*autocorr_bern35_04_pd[204];
	dv[42] = -x[20]*x[19];
	J[18] += dv[42]*64.;
	J[20] -= autocorr_bern35_04_pd[203];
	J[19] -= x[20]*autocorr_bern35_04_pd[202];
	dv[43] = -x[20]*x[19];
	J[17] += dv[43]*32.;
	J[20] -= autocorr_bern35_04_pd[201];
	J[18] -= x[20]*autocorr_bern35_04_pd[200];
	dv[44] = -x[20]*x[18];
	J[17] += dv[44]*32.;
	J[19] -= autocorr_bern35_04_pd[199];
	J[18] -= x[19]*autocorr_bern35_04_pd[198];
	dv[45] = -x[19]*x[18];
	J[17] += dv[45]*64.;
	J[19] -= autocorr_bern35_04_pd[197];
	J[18] -= x[19]*autocorr_bern35_04_pd[196];
	dv[46] = -x[19]*x[18];
	J[16] += dv[46]*32.;
	J[19] -= autocorr_bern35_04_pd[195];
	J[17] -= x[19]*autocorr_bern35_04_pd[194];
	dv[47] = -x[19]*x[17];
	J[16] += dv[47]*32.;
	J[18] -= autocorr_bern35_04_pd[193];
	J[17] -= x[18]*autocorr_bern35_04_pd[192];
	dv[48] = -x[18]*x[17];
	J[16] += dv[48]*64.;
	J[18] -= autocorr_bern35_04_pd[191];
	J[17] -= x[18]*autocorr_bern35_04_pd[190];
	dv[49] = -x[18]*x[17];
	J[15] += dv[49]*32.;
	J[18] -= autocorr_bern35_04_pd[189];
	J[16] -= x[18]*autocorr_bern35_04_pd[188];
	dv[50] = -x[18]*x[16];
	J[15] += dv[50]*32.;
	J[17] -= autocorr_bern35_04_pd[187];
	J[16] -= x[17]*autocorr_bern35_04_pd[186];
	dv[51] = -x[17]*x[16];
	J[15] += dv[51]*64.;
	J[17] -= autocorr_bern35_04_pd[185];
	J[16] -= x[17]*autocorr_bern35_04_pd[184];
	dv[52] = -x[17]*x[16];
	J[14] += dv[52]*32.;
	J[17] -= autocorr_bern35_04_pd[183];
	J[15] -= x[17]*autocorr_bern35_04_pd[182];
	dv[53] = -x[17]*x[15];
	J[14] += dv[53]*32.;
	J[16] -= autocorr_bern35_04_pd[181];
	J[15] -= x[16]*autocorr_bern35_04_pd[180];
	dv[54] = -x[16]*x[15];
	J[14] += dv[54]*64.;
	J[16] -= autocorr_bern35_04_pd[179];
	J[15] -= x[16]*autocorr_bern35_04_pd[178];
	dv[55] = -x[16]*x[15];
	J[13] += dv[55]*32.;
	J[16] -= autocorr_bern35_04_pd[177];
	J[14] -= x[16]*autocorr_bern35_04_pd[176];
	dv[56] = -x[16]*x[14];
	J[13] += dv[56]*32.;
	J[15] -= autocorr_bern35_04_pd[175];
	J[14] -= x[15]*autocorr_bern35_04_pd[174];
	dv[57] = -x[15]*x[14];
	J[13] += dv[57]*64.;
	J[15] -= autocorr_bern35_04_pd[173];
	J[14] -= x[15]*autocorr_bern35_04_pd[172];
	dv[58] = -x[15]*x[14];
	J[12] += dv[58]*32.;
	J[15] -= autocorr_bern35_04_pd[171];
	J[13] -= x[15]*autocorr_bern35_04_pd[170];
	dv[59] = -x[15]*x[13];
	J[12] += dv[59]*32.;
	J[14] -= autocorr_bern35_04_pd[169];
	J[13] -= x[14]*autocorr_bern35_04_pd[168];
	dv[60] = -x[14]*x[13];
	J[12] += dv[60]*64.;
	J[14] -= autocorr_bern35_04_pd[167];
	J[13] -= x[14]*autocorr_bern35_04_pd[166];
	dv[61] = -x[14]*x[13];
	J[11] += dv[61]*32.;
	J[14] -= autocorr_bern35_04_pd[165];
	J[12] -= x[14]*autocorr_bern35_04_pd[164];
	dv[62] = -x[14]*x[12];
	J[11] += dv[62]*32.;
	J[13] -= autocorr_bern35_04_pd[163];
	J[12] -= x[13]*autocorr_bern35_04_pd[162];
	dv[63] = -x[13]*x[12];
	J[11] += dv[63]*64.;
	J[13] -= autocorr_bern35_04_pd[161];
	J[12] -= x[13]*autocorr_bern35_04_pd[160];
	dv[64] = -x[13]*x[12];
	J[10] += dv[64]*32.;
	J[13] -= autocorr_bern35_04_pd[159];
	J[11] -= x[13]*autocorr_bern35_04_pd[158];
	dv[65] = -x[13]*x[11];
	J[10] += dv[65]*32.;
	J[12] -= autocorr_bern35_04_pd[157];
	J[11] -= x[12]*autocorr_bern35_04_pd[156];
	dv[66] = -x[12]*x[11];
	J[10] += dv[66]*64.;
	J[12] -= autocorr_bern35_04_pd[155];
	J[11] -= x[12]*autocorr_bern35_04_pd[154];
	dv[67] = -x[12]*x[11];
	J[9] += dv[67]*32.;
	J[12] -= autocorr_bern35_04_pd[153];
	J[10] -= x[12]*autocorr_bern35_04_pd[152];
	dv[68] = -x[12]*x[10];
	J[9] += dv[68]*32.;
	J[11] -= autocorr_bern35_04_pd[151];
	J[10] -= x[11]*autocorr_bern35_04_pd[150];
	dv[69] = -x[11]*x[10];
	J[9] += dv[69]*64.;
	J[11] -= autocorr_bern35_04_pd[149];
	J[10] -= x[11]*autocorr_bern35_04_pd[148];
	dv[70] = -x[11]*x[10];
	J[8] += dv[70]*32.;
	J[11] -= autocorr_bern35_04_pd[147];
	J[9] -= x[11]*autocorr_bern35_04_pd[146];
	dv[71] = -x[11]*x[9];
	J[8] += dv[71]*32.;
	J[10] -= autocorr_bern35_04_pd[145];
	J[9] -= x[10]*autocorr_bern35_04_pd[144];
	dv[72] = -x[10]*x[9];
	J[8] += dv[72]*64.;
	J[10] -= autocorr_bern35_04_pd[143];
	J[9] -= x[10]*autocorr_bern35_04_pd[142];
	dv[73] = -x[10]*x[9];
	J[7] += dv[73]*32.;
	J[10] -= autocorr_bern35_04_pd[141];
	J[8] -= x[10]*autocorr_bern35_04_pd[140];
	dv[74] = -x[10]*x[8];
	J[7] += dv[74]*32.;
	J[9] -= autocorr_bern35_04_pd[139];
	J[8] -= x[9]*autocorr_bern35_04_pd[138];
	dv[75] = -x[9]*x[8];
	J[7] += dv[75]*64.;
	J[9] -= autocorr_bern35_04_pd[137];
	J[8] -= x[9]*autocorr_bern35_04_pd[136];
	dv[76] = -x[9]*x[8];
	J[6] += dv[76]*32.;
	J[9] -= autocorr_bern35_04_pd[135];
	J[7] -= x[9]*autocorr_bern35_04_pd[134];
	dv[77] = -x[9]*x[7];
	J[6] += dv[77]*32.;
	J[8] -= autocorr_bern35_04_pd[133];
	J[7] -= x[8]*autocorr_bern35_04_pd[132];
	dv[78] = -x[8]*x[7];
	J[6] += dv[78]*64.;
	J[8] -= autocorr_bern35_04_pd[131];
	J[7] -= x[8]*autocorr_bern35_04_pd[130];
	dv[79] = -x[8]*x[7];
	J[5] += dv[79]*32.;
	J[8] -= autocorr_bern35_04_pd[129];
	J[6] -= x[8]*autocorr_bern35_04_pd[128];
	dv[80] = -x[8]*x[6];
	J[5] += dv[80]*32.;
	J[7] -= autocorr_bern35_04_pd[127];
	J[6] -= x[7]*autocorr_bern35_04_pd[126];
	dv[81] = -x[7]*x[6];
	J[5] += dv[81]*64.;
	J[7] -= autocorr_bern35_04_pd[125];
	J[6] -= x[7]*autocorr_bern35_04_pd[124];
	dv[82] = -x[7]*x[6];
	J[4] += dv[82]*32.;
	J[7] -= autocorr_bern35_04_pd[123];
	J[5] -= x[7]*autocorr_bern35_04_pd[122];
	dv[83] = -x[7]*x[5];
	J[4] += dv[83]*32.;
	J[6] -= autocorr_bern35_04_pd[121];
	J[5] -= x[6]*autocorr_bern35_04_pd[120];
	dv[84] = -x[6]*x[5];
	J[4] += dv[84]*64.;
	J[6] -= autocorr_bern35_04_pd[119];
	J[5] -= x[6]*autocorr_bern35_04_pd[118];
	dv[85] = -x[6]*x[5];
	J[3] += dv[85]*32.;
	J[6] -= autocorr_bern35_04_pd[117];
	J[4] -= x[6]*autocorr_bern35_04_pd[116];
	dv[86] = -x[6]*x[4];
	J[3] += dv[86]*32.;
	J[5] -= autocorr_bern35_04_pd[115];
	J[4] -= x[5]*autocorr_bern35_04_pd[114];
	dv[87] = -x[5]*x[4];
	J[3] += dv[87]*64.;
	J[5] -= autocorr_bern35_04_pd[113];
	J[4] -= x[5]*autocorr_bern35_04_pd[112];
	dv[88] = -x[5]*x[4];
	J[2] += dv[88]*32.;
	J[5] -= autocorr_bern35_04_pd[111];
	J[3] -= x[5]*autocorr_bern35_04_pd[110];
	dv[89] = -x[5]*x[3];
	J[2] += dv[89]*32.;
	J[4] -= autocorr_bern35_04_pd[109];
	J[3] -= x[4]*autocorr_bern35_04_pd[108];
	dv[90] = -x[4]*x[3];
	J[2] += dv[90]*64.;
	J[4] -= autocorr_bern35_04_pd[107];
	J[3] -= x[4]*autocorr_bern35_04_pd[106];
	dv[91] = -x[4]*x[3];
	J[1] += dv[91]*32.;
	J[4] -= autocorr_bern35_04_pd[105];
	J[2] -= x[4]*autocorr_bern35_04_pd[104];
	dv[92] = -x[4]*x[2];
	J[1] += dv[92]*32.;
	J[3] -= autocorr_bern35_04_pd[103];
	J[2] -= x[3]*autocorr_bern35_04_pd[102];
	dv[93] = -x[3]*x[2];
	J[1] += dv[93]*64.;
	J[3] -= autocorr_bern35_04_pd[101];
	J[2] -= x[3]*autocorr_bern35_04_pd[100];
	dv[94] = -x[3]*x[2];
	J[0] += dv[94]*32.;
	J[3] -= autocorr_bern35_04_pd[99];
	J[1] -= x[3]*autocorr_bern35_04_pd[98];
	dv[95] = -x[3]*x[1];
	J[0] += dv[95]*32.;
	J[2] -= autocorr_bern35_04_pd[97];
	J[1] -= x[2]*autocorr_bern35_04_pd[96];
	dv[96] = -x[2]*x[1];
	J[0] += dv[96]*32.;
	J[34] += autocorr_bern35_04_pd[95];
	J[33] += x[34]*autocorr_bern35_04_pd[94];
	dv[97] = x[34]*x[33];
	J[32] += dv[97]*autocorr_bern35_04_pd[93];
	dv[97] *= x[32];
	J[31] += dv[97]*64.;
	J[33] += autocorr_bern35_04_pd[92];
	J[32] += x[33]*autocorr_bern35_04_pd[91];
	dv[98] = x[33]*x[32];
	J[31] += dv[98]*autocorr_bern35_04_pd[90];
	dv[98] *= x[31];
	J[30] += dv[98]*64.;
	J[32] += autocorr_bern35_04_pd[89];
	J[31] += x[32]*autocorr_bern35_04_pd[88];
	dv[99] = x[32]*x[31];
	J[30] += dv[99]*autocorr_bern35_04_pd[87];
	dv[99] *= x[30];
	J[29] += dv[99]*64.;
	J[31] += autocorr_bern35_04_pd[86];
	J[30] += x[31]*autocorr_bern35_04_pd[85];
	dv[100] = x[31]*x[30];
	J[29] += dv[100]*autocorr_bern35_04_pd[84];
	dv[100] *= x[29];
	J[28] += dv[100]*64.;
	J[30] += autocorr_bern35_04_pd[83];
	J[29] += x[30]*autocorr_bern35_04_pd[82];
	dv[101] = x[30]*x[29];
	J[28] += dv[101]*autocorr_bern35_04_pd[81];
	dv[101] *= x[28];
	J[27] += dv[101]*64.;
	J[29] += autocorr_bern35_04_pd[80];
	J[28] += x[29]*autocorr_bern35_04_pd[79];
	dv[102] = x[29]*x[28];
	J[27] += dv[102]*autocorr_bern35_04_pd[78];
	dv[102] *= x[27];
	J[26] += dv[102]*64.;
	J[28] += autocorr_bern35_04_pd[77];
	J[27] += x[28]*autocorr_bern35_04_pd[76];
	dv[103] = x[28]*x[27];
	J[26] += dv[103]*autocorr_bern35_04_pd[75];
	dv[103] *= x[26];
	J[25] += dv[103]*64.;
	J[27] += autocorr_bern35_04_pd[74];
	J[26] += x[27]*autocorr_bern35_04_pd[73];
	dv[104] = x[27]*x[26];
	J[25] += dv[104]*autocorr_bern35_04_pd[72];
	dv[104] *= x[25];
	J[24] += dv[104]*64.;
	J[26] += autocorr_bern35_04_pd[71];
	J[25] += x[26]*autocorr_bern35_04_pd[70];
	dv[105] = x[26]*x[25];
	J[24] += dv[105]*autocorr_bern35_04_pd[69];
	dv[105] *= x[24];
	J[23] += dv[105]*64.;
	J[25] += autocorr_bern35_04_pd[68];
	J[24] += x[25]*autocorr_bern35_04_pd[67];
	dv[106] = x[25]*x[24];
	J[23] += dv[106]*autocorr_bern35_04_pd[66];
	dv[106] *= x[23];
	J[22] += dv[106]*64.;
	J[24] += autocorr_bern35_04_pd[65];
	J[23] += x[24]*autocorr_bern35_04_pd[64];
	dv[107] = x[24]*x[23];
	J[22] += dv[107]*autocorr_bern35_04_pd[63];
	dv[107] *= x[22];
	J[21] += dv[107]*64.;
	J[23] += autocorr_bern35_04_pd[62];
	J[22] += x[23]*autocorr_bern35_04_pd[61];
	dv[108] = x[23]*x[22];
	J[21] += dv[108]*autocorr_bern35_04_pd[60];
	dv[108] *= x[21];
	J[20] += dv[108]*64.;
	J[22] += autocorr_bern35_04_pd[59];
	J[21] += x[22]*autocorr_bern35_04_pd[58];
	dv[109] = x[22]*x[21];
	J[20] += dv[109]*autocorr_bern35_04_pd[57];
	dv[109] *= x[20];
	J[19] += dv[109]*64.;
	J[21] += autocorr_bern35_04_pd[56];
	J[20] += x[21]*autocorr_bern35_04_pd[55];
	dv[110] = x[21]*x[20];
	J[19] += dv[110]*autocorr_bern35_04_pd[54];
	dv[110] *= x[19];
	J[18] += dv[110]*64.;
	J[20] += autocorr_bern35_04_pd[53];
	J[19] += x[20]*autocorr_bern35_04_pd[52];
	dv[111] = x[20]*x[19];
	J[18] += dv[111]*autocorr_bern35_04_pd[51];
	dv[111] *= x[18];
	J[17] += dv[111]*64.;
	J[19] += autocorr_bern35_04_pd[50];
	J[18] += x[19]*autocorr_bern35_04_pd[49];
	dv[112] = x[19]*x[18];
	J[17] += dv[112]*autocorr_bern35_04_pd[48];
	dv[112] *= x[17];
	J[16] += dv[112]*64.;
	J[18] += autocorr_bern35_04_pd[47];
	J[17] += x[18]*autocorr_bern35_04_pd[46];
	dv[113] = x[18]*x[17];
	J[16] += dv[113]*autocorr_bern35_04_pd[45];
	dv[113] *= x[16];
	J[15] += dv[113]*64.;
	J[17] += autocorr_bern35_04_pd[44];
	J[16] += x[17]*autocorr_bern35_04_pd[43];
	dv[114] = x[17]*x[16];
	J[15] += dv[114]*autocorr_bern35_04_pd[42];
	dv[114] *= x[15];
	J[14] += dv[114]*64.;
	J[16] += autocorr_bern35_04_pd[41];
	J[15] += x[16]*autocorr_bern35_04_pd[40];
	dv[115] = x[16]*x[15];
	J[14] += dv[115]*autocorr_bern35_04_pd[39];
	dv[115] *= x[14];
	J[13] += dv[115]*64.;
	J[15] += autocorr_bern35_04_pd[38];
	J[14] += x[15]*autocorr_bern35_04_pd[37];
	dv[116] = x[15]*x[14];
	J[13] += dv[116]*autocorr_bern35_04_pd[36];
	dv[116] *= x[13];
	J[12] += dv[116]*64.;
	J[14] += autocorr_bern35_04_pd[35];
	J[13] += x[14]*autocorr_bern35_04_pd[34];
	dv[117] = x[14]*x[13];
	J[12] += dv[117]*autocorr_bern35_04_pd[33];
	dv[117] *= x[12];
	J[11] += dv[117]*64.;
	J[13] += autocorr_bern35_04_pd[32];
	J[12] += x[13]*autocorr_bern35_04_pd[31];
	dv[118] = x[13]*x[12];
	J[11] += dv[118]*autocorr_bern35_04_pd[30];
	dv[118] *= x[11];
	J[10] += dv[118]*64.;
	J[12] += autocorr_bern35_04_pd[29];
	J[11] += x[12]*autocorr_bern35_04_pd[28];
	dv[119] = x[12]*x[11];
	J[10] += dv[119]*autocorr_bern35_04_pd[27];
	dv[119] *= x[10];
	J[9] += dv[119]*64.;
	J[11] += autocorr_bern35_04_pd[26];
	J[10] += x[11]*autocorr_bern35_04_pd[25];
	dv[120] = x[11]*x[10];
	J[9] += dv[120]*autocorr_bern35_04_pd[24];
	dv[120] *= x[9];
	J[8] += dv[120]*64.;
	J[10] += autocorr_bern35_04_pd[23];
	J[9] += x[10]*autocorr_bern35_04_pd[22];
	dv[121] = x[10]*x[9];
	J[8] += dv[121]*autocorr_bern35_04_pd[21];
	dv[121] *= x[8];
	J[7] += dv[121]*64.;
	J[9] += autocorr_bern35_04_pd[20];
	J[8] += x[9]*autocorr_bern35_04_pd[19];
	dv[122] = x[9]*x[8];
	J[7] += dv[122]*autocorr_bern35_04_pd[18];
	dv[122] *= x[7];
	J[6] += dv[122]*64.;
	J[8] += autocorr_bern35_04_pd[17];
	J[7] += x[8]*autocorr_bern35_04_pd[16];
	dv[123] = x[8]*x[7];
	J[6] += dv[123]*autocorr_bern35_04_pd[15];
	dv[123] *= x[6];
	J[5] += dv[123]*64.;
	J[7] += autocorr_bern35_04_pd[14];
	J[6] += x[7]*autocorr_bern35_04_pd[13];
	dv[124] = x[7]*x[6];
	J[5] += dv[124]*autocorr_bern35_04_pd[12];
	dv[124] *= x[5];
	J[4] += dv[124]*64.;
	J[6] += autocorr_bern35_04_pd[11];
	J[5] += x[6]*autocorr_bern35_04_pd[10];
	dv[125] = x[6]*x[5];
	J[4] += dv[125]*autocorr_bern35_04_pd[9];
	dv[125] *= x[4];
	J[3] += dv[125]*64.;
	J[5] += autocorr_bern35_04_pd[8];
	J[4] += x[5]*autocorr_bern35_04_pd[7];
	dv[126] = x[5]*x[4];
	J[3] += dv[126]*autocorr_bern35_04_pd[6];
	dv[126] *= x[3];
	J[2] += dv[126]*64.;
	J[4] += autocorr_bern35_04_pd[5];
	J[3] += x[4]*autocorr_bern35_04_pd[4];
	dv[127] = x[4]*x[3];
	J[2] += dv[127]*autocorr_bern35_04_pd[3];
	dv[127] *= x[2];
	J[1] += dv[127]*64.;
	J[3] += autocorr_bern35_04_pd[2];
	J[2] += x[3]*autocorr_bern35_04_pd[1];
	dv[128] = x[3]*x[2];
	J[1] += dv[128]*autocorr_bern35_04_pd[0];
	dv[128] *= x[1];
	J[0] += dv[128]*64.;
	J[35] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
