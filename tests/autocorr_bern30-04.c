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
 fint autocorr_bern30_04_auxcom_[1] = { 1 /* nlc */ };
 fint autocorr_bern30_04_funcom_[69] = {
	31 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	31 /* nzc */,
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
	1 };

 real autocorr_bern30_04_boundc_[1+62+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.};

 real autocorr_bern30_04_x0comn_[31] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real autocorr_bern30_04_pd[329];
static real autocorr_bern30_04_old_x[31];
static int autocorr_bern30_04_xkind = -1;

 static int
autocorr_bern30_04_xcheck(real *x)
{
	real *x1 = autocorr_bern30_04_old_x, *xe = x + 31;
	errno = 0;
	if (autocorr_bern30_04_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	autocorr_bern30_04_xkind = 0;
	return 1;
	}
 real
autocorr_bern30_04_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (autocorr_bern30_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[30];
	;}

	if (wantfg & 2) {
	g[30] = 1.;
	}

	return rv;
}

 void
autocorr_bern30_04_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[109];
	real t1;
	fint wantfg = *needfg;
	if (autocorr_bern30_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	autocorr_bern30_04_pd[0] = 64. * x[0];
	autocorr_bern30_04_pd[1] = autocorr_bern30_04_pd[0] * x[1];
	autocorr_bern30_04_pd[2] = autocorr_bern30_04_pd[1] * x[2];
	v[0] = autocorr_bern30_04_pd[2] * x[3];
	autocorr_bern30_04_pd[3] = 64. * x[1];
	autocorr_bern30_04_pd[4] = autocorr_bern30_04_pd[3] * x[2];
	autocorr_bern30_04_pd[5] = autocorr_bern30_04_pd[4] * x[3];
	v[1] = autocorr_bern30_04_pd[5] * x[4];
	v[0] += v[1];
	autocorr_bern30_04_pd[6] = 64. * x[2];
	autocorr_bern30_04_pd[7] = autocorr_bern30_04_pd[6] * x[3];
	autocorr_bern30_04_pd[8] = autocorr_bern30_04_pd[7] * x[4];
	v[1] = autocorr_bern30_04_pd[8] * x[5];
	v[0] += v[1];
	autocorr_bern30_04_pd[9] = 64. * x[3];
	autocorr_bern30_04_pd[10] = autocorr_bern30_04_pd[9] * x[4];
	autocorr_bern30_04_pd[11] = autocorr_bern30_04_pd[10] * x[5];
	v[1] = autocorr_bern30_04_pd[11] * x[6];
	v[0] += v[1];
	autocorr_bern30_04_pd[12] = 64. * x[4];
	autocorr_bern30_04_pd[13] = autocorr_bern30_04_pd[12] * x[5];
	autocorr_bern30_04_pd[14] = autocorr_bern30_04_pd[13] * x[6];
	v[1] = autocorr_bern30_04_pd[14] * x[7];
	v[0] += v[1];
	autocorr_bern30_04_pd[15] = 64. * x[5];
	autocorr_bern30_04_pd[16] = autocorr_bern30_04_pd[15] * x[6];
	autocorr_bern30_04_pd[17] = autocorr_bern30_04_pd[16] * x[7];
	v[1] = autocorr_bern30_04_pd[17] * x[8];
	v[0] += v[1];
	autocorr_bern30_04_pd[18] = 64. * x[6];
	autocorr_bern30_04_pd[19] = autocorr_bern30_04_pd[18] * x[7];
	autocorr_bern30_04_pd[20] = autocorr_bern30_04_pd[19] * x[8];
	v[1] = autocorr_bern30_04_pd[20] * x[9];
	v[0] += v[1];
	autocorr_bern30_04_pd[21] = 64. * x[7];
	autocorr_bern30_04_pd[22] = autocorr_bern30_04_pd[21] * x[8];
	autocorr_bern30_04_pd[23] = autocorr_bern30_04_pd[22] * x[9];
	v[1] = autocorr_bern30_04_pd[23] * x[10];
	v[0] += v[1];
	autocorr_bern30_04_pd[24] = 64. * x[8];
	autocorr_bern30_04_pd[25] = autocorr_bern30_04_pd[24] * x[9];
	autocorr_bern30_04_pd[26] = autocorr_bern30_04_pd[25] * x[10];
	v[1] = autocorr_bern30_04_pd[26] * x[11];
	v[0] += v[1];
	autocorr_bern30_04_pd[27] = 64. * x[9];
	autocorr_bern30_04_pd[28] = autocorr_bern30_04_pd[27] * x[10];
	autocorr_bern30_04_pd[29] = autocorr_bern30_04_pd[28] * x[11];
	v[1] = autocorr_bern30_04_pd[29] * x[12];
	v[0] += v[1];
	autocorr_bern30_04_pd[30] = 64. * x[10];
	autocorr_bern30_04_pd[31] = autocorr_bern30_04_pd[30] * x[11];
	autocorr_bern30_04_pd[32] = autocorr_bern30_04_pd[31] * x[12];
	v[1] = autocorr_bern30_04_pd[32] * x[13];
	v[0] += v[1];
	autocorr_bern30_04_pd[33] = 64. * x[11];
	autocorr_bern30_04_pd[34] = autocorr_bern30_04_pd[33] * x[12];
	autocorr_bern30_04_pd[35] = autocorr_bern30_04_pd[34] * x[13];
	v[1] = autocorr_bern30_04_pd[35] * x[14];
	v[0] += v[1];
	autocorr_bern30_04_pd[36] = 64. * x[12];
	autocorr_bern30_04_pd[37] = autocorr_bern30_04_pd[36] * x[13];
	autocorr_bern30_04_pd[38] = autocorr_bern30_04_pd[37] * x[14];
	v[1] = autocorr_bern30_04_pd[38] * x[15];
	v[0] += v[1];
	autocorr_bern30_04_pd[39] = 64. * x[13];
	autocorr_bern30_04_pd[40] = autocorr_bern30_04_pd[39] * x[14];
	autocorr_bern30_04_pd[41] = autocorr_bern30_04_pd[40] * x[15];
	v[1] = autocorr_bern30_04_pd[41] * x[16];
	v[0] += v[1];
	autocorr_bern30_04_pd[42] = 64. * x[14];
	autocorr_bern30_04_pd[43] = autocorr_bern30_04_pd[42] * x[15];
	autocorr_bern30_04_pd[44] = autocorr_bern30_04_pd[43] * x[16];
	v[1] = autocorr_bern30_04_pd[44] * x[17];
	v[0] += v[1];
	autocorr_bern30_04_pd[45] = 64. * x[15];
	autocorr_bern30_04_pd[46] = autocorr_bern30_04_pd[45] * x[16];
	autocorr_bern30_04_pd[47] = autocorr_bern30_04_pd[46] * x[17];
	v[1] = autocorr_bern30_04_pd[47] * x[18];
	v[0] += v[1];
	autocorr_bern30_04_pd[48] = 64. * x[16];
	autocorr_bern30_04_pd[49] = autocorr_bern30_04_pd[48] * x[17];
	autocorr_bern30_04_pd[50] = autocorr_bern30_04_pd[49] * x[18];
	v[1] = autocorr_bern30_04_pd[50] * x[19];
	v[0] += v[1];
	autocorr_bern30_04_pd[51] = 64. * x[17];
	autocorr_bern30_04_pd[52] = autocorr_bern30_04_pd[51] * x[18];
	autocorr_bern30_04_pd[53] = autocorr_bern30_04_pd[52] * x[19];
	v[1] = autocorr_bern30_04_pd[53] * x[20];
	v[0] += v[1];
	autocorr_bern30_04_pd[54] = 64. * x[18];
	autocorr_bern30_04_pd[55] = autocorr_bern30_04_pd[54] * x[19];
	autocorr_bern30_04_pd[56] = autocorr_bern30_04_pd[55] * x[20];
	v[1] = autocorr_bern30_04_pd[56] * x[21];
	v[0] += v[1];
	autocorr_bern30_04_pd[57] = 64. * x[19];
	autocorr_bern30_04_pd[58] = autocorr_bern30_04_pd[57] * x[20];
	autocorr_bern30_04_pd[59] = autocorr_bern30_04_pd[58] * x[21];
	v[1] = autocorr_bern30_04_pd[59] * x[22];
	v[0] += v[1];
	autocorr_bern30_04_pd[60] = 64. * x[20];
	autocorr_bern30_04_pd[61] = autocorr_bern30_04_pd[60] * x[21];
	autocorr_bern30_04_pd[62] = autocorr_bern30_04_pd[61] * x[22];
	v[1] = autocorr_bern30_04_pd[62] * x[23];
	v[0] += v[1];
	autocorr_bern30_04_pd[63] = 64. * x[21];
	autocorr_bern30_04_pd[64] = autocorr_bern30_04_pd[63] * x[22];
	autocorr_bern30_04_pd[65] = autocorr_bern30_04_pd[64] * x[23];
	v[1] = autocorr_bern30_04_pd[65] * x[24];
	v[0] += v[1];
	autocorr_bern30_04_pd[66] = 64. * x[22];
	autocorr_bern30_04_pd[67] = autocorr_bern30_04_pd[66] * x[23];
	autocorr_bern30_04_pd[68] = autocorr_bern30_04_pd[67] * x[24];
	v[1] = autocorr_bern30_04_pd[68] * x[25];
	v[0] += v[1];
	autocorr_bern30_04_pd[69] = 64. * x[23];
	autocorr_bern30_04_pd[70] = autocorr_bern30_04_pd[69] * x[24];
	autocorr_bern30_04_pd[71] = autocorr_bern30_04_pd[70] * x[25];
	v[1] = autocorr_bern30_04_pd[71] * x[26];
	v[0] += v[1];
	autocorr_bern30_04_pd[72] = 64. * x[24];
	autocorr_bern30_04_pd[73] = autocorr_bern30_04_pd[72] * x[25];
	autocorr_bern30_04_pd[74] = autocorr_bern30_04_pd[73] * x[26];
	v[1] = autocorr_bern30_04_pd[74] * x[27];
	v[0] += v[1];
	autocorr_bern30_04_pd[75] = 64. * x[25];
	autocorr_bern30_04_pd[76] = autocorr_bern30_04_pd[75] * x[26];
	autocorr_bern30_04_pd[77] = autocorr_bern30_04_pd[76] * x[27];
	v[1] = autocorr_bern30_04_pd[77] * x[28];
	v[0] += v[1];
	autocorr_bern30_04_pd[78] = 64. * x[26];
	autocorr_bern30_04_pd[79] = autocorr_bern30_04_pd[78] * x[27];
	autocorr_bern30_04_pd[80] = autocorr_bern30_04_pd[79] * x[28];
	v[1] = autocorr_bern30_04_pd[80] * x[29];
	v[0] += v[1];
	autocorr_bern30_04_pd[81] = 32. * x[0];
	autocorr_bern30_04_pd[82] = autocorr_bern30_04_pd[81] * x[1];
	v[1] = autocorr_bern30_04_pd[82] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[83] = 32. * x[0];
	autocorr_bern30_04_pd[84] = autocorr_bern30_04_pd[83] * x[1];
	v[2] = autocorr_bern30_04_pd[84] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[85] = 32. * x[0];
	autocorr_bern30_04_pd[86] = autocorr_bern30_04_pd[85] * x[2];
	v[1] = autocorr_bern30_04_pd[86] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[87] = 64. * x[1];
	autocorr_bern30_04_pd[88] = autocorr_bern30_04_pd[87] * x[2];
	v[2] = autocorr_bern30_04_pd[88] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[89] = 32. * x[1];
	autocorr_bern30_04_pd[90] = autocorr_bern30_04_pd[89] * x[2];
	v[1] = autocorr_bern30_04_pd[90] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[91] = 32. * x[1];
	autocorr_bern30_04_pd[92] = autocorr_bern30_04_pd[91] * x[3];
	v[2] = autocorr_bern30_04_pd[92] * x[4];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[93] = 64. * x[2];
	autocorr_bern30_04_pd[94] = autocorr_bern30_04_pd[93] * x[3];
	v[1] = autocorr_bern30_04_pd[94] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[95] = 32. * x[2];
	autocorr_bern30_04_pd[96] = autocorr_bern30_04_pd[95] * x[3];
	v[2] = autocorr_bern30_04_pd[96] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[97] = 32. * x[2];
	autocorr_bern30_04_pd[98] = autocorr_bern30_04_pd[97] * x[4];
	v[1] = autocorr_bern30_04_pd[98] * x[5];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[99] = 64. * x[3];
	autocorr_bern30_04_pd[100] = autocorr_bern30_04_pd[99] * x[4];
	v[2] = autocorr_bern30_04_pd[100] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[101] = 32. * x[3];
	autocorr_bern30_04_pd[102] = autocorr_bern30_04_pd[101] * x[4];
	v[1] = autocorr_bern30_04_pd[102] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[103] = 32. * x[3];
	autocorr_bern30_04_pd[104] = autocorr_bern30_04_pd[103] * x[5];
	v[2] = autocorr_bern30_04_pd[104] * x[6];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[105] = 64. * x[4];
	autocorr_bern30_04_pd[106] = autocorr_bern30_04_pd[105] * x[5];
	v[1] = autocorr_bern30_04_pd[106] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[107] = 32. * x[4];
	autocorr_bern30_04_pd[108] = autocorr_bern30_04_pd[107] * x[5];
	v[2] = autocorr_bern30_04_pd[108] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[109] = 32. * x[4];
	autocorr_bern30_04_pd[110] = autocorr_bern30_04_pd[109] * x[6];
	v[1] = autocorr_bern30_04_pd[110] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[111] = 64. * x[5];
	autocorr_bern30_04_pd[112] = autocorr_bern30_04_pd[111] * x[6];
	v[2] = autocorr_bern30_04_pd[112] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[113] = 32. * x[5];
	autocorr_bern30_04_pd[114] = autocorr_bern30_04_pd[113] * x[6];
	v[1] = autocorr_bern30_04_pd[114] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[115] = 32. * x[5];
	autocorr_bern30_04_pd[116] = autocorr_bern30_04_pd[115] * x[7];
	v[2] = autocorr_bern30_04_pd[116] * x[8];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[117] = 64. * x[6];
	autocorr_bern30_04_pd[118] = autocorr_bern30_04_pd[117] * x[7];
	v[1] = autocorr_bern30_04_pd[118] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[119] = 32. * x[6];
	autocorr_bern30_04_pd[120] = autocorr_bern30_04_pd[119] * x[7];
	v[2] = autocorr_bern30_04_pd[120] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[121] = 32. * x[6];
	autocorr_bern30_04_pd[122] = autocorr_bern30_04_pd[121] * x[8];
	v[1] = autocorr_bern30_04_pd[122] * x[9];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[123] = 64. * x[7];
	autocorr_bern30_04_pd[124] = autocorr_bern30_04_pd[123] * x[8];
	v[2] = autocorr_bern30_04_pd[124] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[125] = 32. * x[7];
	autocorr_bern30_04_pd[126] = autocorr_bern30_04_pd[125] * x[8];
	v[1] = autocorr_bern30_04_pd[126] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[127] = 32. * x[7];
	autocorr_bern30_04_pd[128] = autocorr_bern30_04_pd[127] * x[9];
	v[2] = autocorr_bern30_04_pd[128] * x[10];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[129] = 64. * x[8];
	autocorr_bern30_04_pd[130] = autocorr_bern30_04_pd[129] * x[9];
	v[1] = autocorr_bern30_04_pd[130] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[131] = 32. * x[8];
	autocorr_bern30_04_pd[132] = autocorr_bern30_04_pd[131] * x[9];
	v[2] = autocorr_bern30_04_pd[132] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[133] = 32. * x[8];
	autocorr_bern30_04_pd[134] = autocorr_bern30_04_pd[133] * x[10];
	v[1] = autocorr_bern30_04_pd[134] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[135] = 64. * x[9];
	autocorr_bern30_04_pd[136] = autocorr_bern30_04_pd[135] * x[10];
	v[2] = autocorr_bern30_04_pd[136] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[137] = 32. * x[9];
	autocorr_bern30_04_pd[138] = autocorr_bern30_04_pd[137] * x[10];
	v[1] = autocorr_bern30_04_pd[138] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[139] = 32. * x[9];
	autocorr_bern30_04_pd[140] = autocorr_bern30_04_pd[139] * x[11];
	v[2] = autocorr_bern30_04_pd[140] * x[12];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[141] = 64. * x[10];
	autocorr_bern30_04_pd[142] = autocorr_bern30_04_pd[141] * x[11];
	v[1] = autocorr_bern30_04_pd[142] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[143] = 32. * x[10];
	autocorr_bern30_04_pd[144] = autocorr_bern30_04_pd[143] * x[11];
	v[2] = autocorr_bern30_04_pd[144] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[145] = 32. * x[10];
	autocorr_bern30_04_pd[146] = autocorr_bern30_04_pd[145] * x[12];
	v[1] = autocorr_bern30_04_pd[146] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[147] = 64. * x[11];
	autocorr_bern30_04_pd[148] = autocorr_bern30_04_pd[147] * x[12];
	v[2] = autocorr_bern30_04_pd[148] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[149] = 32. * x[11];
	autocorr_bern30_04_pd[150] = autocorr_bern30_04_pd[149] * x[12];
	v[1] = autocorr_bern30_04_pd[150] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[151] = 32. * x[11];
	autocorr_bern30_04_pd[152] = autocorr_bern30_04_pd[151] * x[13];
	v[2] = autocorr_bern30_04_pd[152] * x[14];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[153] = 64. * x[12];
	autocorr_bern30_04_pd[154] = autocorr_bern30_04_pd[153] * x[13];
	v[1] = autocorr_bern30_04_pd[154] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[155] = 32. * x[12];
	autocorr_bern30_04_pd[156] = autocorr_bern30_04_pd[155] * x[13];
	v[2] = autocorr_bern30_04_pd[156] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[157] = 32. * x[12];
	autocorr_bern30_04_pd[158] = autocorr_bern30_04_pd[157] * x[14];
	v[1] = autocorr_bern30_04_pd[158] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[159] = 64. * x[13];
	autocorr_bern30_04_pd[160] = autocorr_bern30_04_pd[159] * x[14];
	v[2] = autocorr_bern30_04_pd[160] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[161] = 32. * x[13];
	autocorr_bern30_04_pd[162] = autocorr_bern30_04_pd[161] * x[14];
	v[1] = autocorr_bern30_04_pd[162] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[163] = 32. * x[13];
	autocorr_bern30_04_pd[164] = autocorr_bern30_04_pd[163] * x[15];
	v[2] = autocorr_bern30_04_pd[164] * x[16];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[165] = 64. * x[14];
	autocorr_bern30_04_pd[166] = autocorr_bern30_04_pd[165] * x[15];
	v[1] = autocorr_bern30_04_pd[166] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[167] = 32. * x[14];
	autocorr_bern30_04_pd[168] = autocorr_bern30_04_pd[167] * x[15];
	v[2] = autocorr_bern30_04_pd[168] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[169] = 32. * x[14];
	autocorr_bern30_04_pd[170] = autocorr_bern30_04_pd[169] * x[16];
	v[1] = autocorr_bern30_04_pd[170] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[171] = 64. * x[15];
	autocorr_bern30_04_pd[172] = autocorr_bern30_04_pd[171] * x[16];
	v[2] = autocorr_bern30_04_pd[172] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[173] = 32. * x[15];
	autocorr_bern30_04_pd[174] = autocorr_bern30_04_pd[173] * x[16];
	v[1] = autocorr_bern30_04_pd[174] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[175] = 32. * x[15];
	autocorr_bern30_04_pd[176] = autocorr_bern30_04_pd[175] * x[17];
	v[2] = autocorr_bern30_04_pd[176] * x[18];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[177] = 64. * x[16];
	autocorr_bern30_04_pd[178] = autocorr_bern30_04_pd[177] * x[17];
	v[1] = autocorr_bern30_04_pd[178] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[179] = 32. * x[16];
	autocorr_bern30_04_pd[180] = autocorr_bern30_04_pd[179] * x[17];
	v[2] = autocorr_bern30_04_pd[180] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[181] = 32. * x[16];
	autocorr_bern30_04_pd[182] = autocorr_bern30_04_pd[181] * x[18];
	v[1] = autocorr_bern30_04_pd[182] * x[19];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[183] = 64. * x[17];
	autocorr_bern30_04_pd[184] = autocorr_bern30_04_pd[183] * x[18];
	v[2] = autocorr_bern30_04_pd[184] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[185] = 32. * x[17];
	autocorr_bern30_04_pd[186] = autocorr_bern30_04_pd[185] * x[18];
	v[1] = autocorr_bern30_04_pd[186] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[187] = 32. * x[17];
	autocorr_bern30_04_pd[188] = autocorr_bern30_04_pd[187] * x[19];
	v[2] = autocorr_bern30_04_pd[188] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[189] = 64. * x[18];
	autocorr_bern30_04_pd[190] = autocorr_bern30_04_pd[189] * x[19];
	v[1] = autocorr_bern30_04_pd[190] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[191] = 32. * x[18];
	autocorr_bern30_04_pd[192] = autocorr_bern30_04_pd[191] * x[19];
	v[2] = autocorr_bern30_04_pd[192] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[193] = 32. * x[18];
	autocorr_bern30_04_pd[194] = autocorr_bern30_04_pd[193] * x[20];
	v[1] = autocorr_bern30_04_pd[194] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[195] = 64. * x[19];
	autocorr_bern30_04_pd[196] = autocorr_bern30_04_pd[195] * x[20];
	v[2] = autocorr_bern30_04_pd[196] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[197] = 32. * x[19];
	autocorr_bern30_04_pd[198] = autocorr_bern30_04_pd[197] * x[20];
	v[1] = autocorr_bern30_04_pd[198] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[199] = 32. * x[19];
	autocorr_bern30_04_pd[200] = autocorr_bern30_04_pd[199] * x[21];
	v[2] = autocorr_bern30_04_pd[200] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[201] = 64. * x[20];
	autocorr_bern30_04_pd[202] = autocorr_bern30_04_pd[201] * x[21];
	v[1] = autocorr_bern30_04_pd[202] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[203] = 32. * x[20];
	autocorr_bern30_04_pd[204] = autocorr_bern30_04_pd[203] * x[21];
	v[2] = autocorr_bern30_04_pd[204] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[205] = 32. * x[20];
	autocorr_bern30_04_pd[206] = autocorr_bern30_04_pd[205] * x[22];
	v[1] = autocorr_bern30_04_pd[206] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[207] = 64. * x[21];
	autocorr_bern30_04_pd[208] = autocorr_bern30_04_pd[207] * x[22];
	v[2] = autocorr_bern30_04_pd[208] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[209] = 32. * x[21];
	autocorr_bern30_04_pd[210] = autocorr_bern30_04_pd[209] * x[22];
	v[1] = autocorr_bern30_04_pd[210] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[211] = 32. * x[21];
	autocorr_bern30_04_pd[212] = autocorr_bern30_04_pd[211] * x[23];
	v[2] = autocorr_bern30_04_pd[212] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[213] = 64. * x[22];
	autocorr_bern30_04_pd[214] = autocorr_bern30_04_pd[213] * x[23];
	v[1] = autocorr_bern30_04_pd[214] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[215] = 32. * x[22];
	autocorr_bern30_04_pd[216] = autocorr_bern30_04_pd[215] * x[23];
	v[2] = autocorr_bern30_04_pd[216] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[217] = 32. * x[22];
	autocorr_bern30_04_pd[218] = autocorr_bern30_04_pd[217] * x[24];
	v[1] = autocorr_bern30_04_pd[218] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[219] = 64. * x[23];
	autocorr_bern30_04_pd[220] = autocorr_bern30_04_pd[219] * x[24];
	v[2] = autocorr_bern30_04_pd[220] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[221] = 32. * x[23];
	autocorr_bern30_04_pd[222] = autocorr_bern30_04_pd[221] * x[24];
	v[1] = autocorr_bern30_04_pd[222] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[223] = 32. * x[23];
	autocorr_bern30_04_pd[224] = autocorr_bern30_04_pd[223] * x[25];
	v[2] = autocorr_bern30_04_pd[224] * x[26];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[225] = 64. * x[24];
	autocorr_bern30_04_pd[226] = autocorr_bern30_04_pd[225] * x[25];
	v[1] = autocorr_bern30_04_pd[226] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[227] = 32. * x[24];
	autocorr_bern30_04_pd[228] = autocorr_bern30_04_pd[227] * x[25];
	v[2] = autocorr_bern30_04_pd[228] * x[27];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[229] = 32. * x[24];
	autocorr_bern30_04_pd[230] = autocorr_bern30_04_pd[229] * x[26];
	v[1] = autocorr_bern30_04_pd[230] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[231] = 64. * x[25];
	autocorr_bern30_04_pd[232] = autocorr_bern30_04_pd[231] * x[26];
	v[2] = autocorr_bern30_04_pd[232] * x[27];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[233] = 32. * x[25];
	autocorr_bern30_04_pd[234] = autocorr_bern30_04_pd[233] * x[26];
	v[1] = autocorr_bern30_04_pd[234] * x[28];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[235] = 32. * x[25];
	autocorr_bern30_04_pd[236] = autocorr_bern30_04_pd[235] * x[27];
	v[2] = autocorr_bern30_04_pd[236] * x[28];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[237] = 64. * x[26];
	autocorr_bern30_04_pd[238] = autocorr_bern30_04_pd[237] * x[27];
	v[1] = autocorr_bern30_04_pd[238] * x[28];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[239] = 32. * x[26];
	autocorr_bern30_04_pd[240] = autocorr_bern30_04_pd[239] * x[27];
	v[2] = autocorr_bern30_04_pd[240] * x[29];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[241] = 32. * x[26];
	autocorr_bern30_04_pd[242] = autocorr_bern30_04_pd[241] * x[28];
	v[1] = autocorr_bern30_04_pd[242] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern30_04_pd[243] = 32. * x[27];
	autocorr_bern30_04_pd[244] = autocorr_bern30_04_pd[243] * x[28];
	v[2] = autocorr_bern30_04_pd[244] * x[29];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[245] = 16. * x[0];
	v[1] = autocorr_bern30_04_pd[245] * x[1];
	v[0] += v[1];
	autocorr_bern30_04_pd[246] = 24. * x[0];
	v[1] = autocorr_bern30_04_pd[246] * x[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[247] = 16. * x[0];
	v[1] = autocorr_bern30_04_pd[247] * x[3];
	v[0] += v[1];
	autocorr_bern30_04_pd[248] = 32. * x[1];
	v[1] = autocorr_bern30_04_pd[248] * x[2];
	v[0] += v[1];
	autocorr_bern30_04_pd[249] = 48. * x[1];
	v[1] = autocorr_bern30_04_pd[249] * x[3];
	v[0] += v[1];
	autocorr_bern30_04_pd[250] = 16. * x[1];
	v[1] = autocorr_bern30_04_pd[250] * x[4];
	v[0] += v[1];
	autocorr_bern30_04_pd[251] = 48. * x[2];
	v[1] = autocorr_bern30_04_pd[251] * x[3];
	v[0] += v[1];
	autocorr_bern30_04_pd[252] = 48. * x[2];
	v[1] = autocorr_bern30_04_pd[252] * x[4];
	v[0] += v[1];
	autocorr_bern30_04_pd[253] = 16. * x[2];
	v[1] = autocorr_bern30_04_pd[253] * x[5];
	v[0] += v[1];
	autocorr_bern30_04_pd[254] = 48. * x[3];
	v[1] = autocorr_bern30_04_pd[254] * x[4];
	v[0] += v[1];
	autocorr_bern30_04_pd[255] = 48. * x[3];
	v[1] = autocorr_bern30_04_pd[255] * x[5];
	v[0] += v[1];
	autocorr_bern30_04_pd[256] = 16. * x[3];
	v[1] = autocorr_bern30_04_pd[256] * x[6];
	v[0] += v[1];
	autocorr_bern30_04_pd[257] = 48. * x[4];
	v[1] = autocorr_bern30_04_pd[257] * x[5];
	v[0] += v[1];
	autocorr_bern30_04_pd[258] = 48. * x[4];
	v[1] = autocorr_bern30_04_pd[258] * x[6];
	v[0] += v[1];
	autocorr_bern30_04_pd[259] = 16. * x[4];
	v[1] = autocorr_bern30_04_pd[259] * x[7];
	v[0] += v[1];
	autocorr_bern30_04_pd[260] = 48. * x[5];
	v[1] = autocorr_bern30_04_pd[260] * x[6];
	v[0] += v[1];
	autocorr_bern30_04_pd[261] = 48. * x[5];
	v[1] = autocorr_bern30_04_pd[261] * x[7];
	v[0] += v[1];
	autocorr_bern30_04_pd[262] = 16. * x[5];
	v[1] = autocorr_bern30_04_pd[262] * x[8];
	v[0] += v[1];
	autocorr_bern30_04_pd[263] = 48. * x[6];
	v[1] = autocorr_bern30_04_pd[263] * x[7];
	v[0] += v[1];
	autocorr_bern30_04_pd[264] = 48. * x[6];
	v[1] = autocorr_bern30_04_pd[264] * x[8];
	v[0] += v[1];
	autocorr_bern30_04_pd[265] = 16. * x[6];
	v[1] = autocorr_bern30_04_pd[265] * x[9];
	v[0] += v[1];
	autocorr_bern30_04_pd[266] = 48. * x[7];
	v[1] = autocorr_bern30_04_pd[266] * x[8];
	v[0] += v[1];
	autocorr_bern30_04_pd[267] = 48. * x[7];
	v[1] = autocorr_bern30_04_pd[267] * x[9];
	v[0] += v[1];
	autocorr_bern30_04_pd[268] = 16. * x[7];
	v[1] = autocorr_bern30_04_pd[268] * x[10];
	v[0] += v[1];
	autocorr_bern30_04_pd[269] = 48. * x[8];
	v[1] = autocorr_bern30_04_pd[269] * x[9];
	v[0] += v[1];
	autocorr_bern30_04_pd[270] = 48. * x[8];
	v[1] = autocorr_bern30_04_pd[270] * x[10];
	v[0] += v[1];
	autocorr_bern30_04_pd[271] = 16. * x[8];
	v[1] = autocorr_bern30_04_pd[271] * x[11];
	v[0] += v[1];
	autocorr_bern30_04_pd[272] = 48. * x[9];
	v[1] = autocorr_bern30_04_pd[272] * x[10];
	v[0] += v[1];
	autocorr_bern30_04_pd[273] = 48. * x[9];
	v[1] = autocorr_bern30_04_pd[273] * x[11];
	v[0] += v[1];
	autocorr_bern30_04_pd[274] = 16. * x[9];
	v[1] = autocorr_bern30_04_pd[274] * x[12];
	v[0] += v[1];
	autocorr_bern30_04_pd[275] = 48. * x[10];
	v[1] = autocorr_bern30_04_pd[275] * x[11];
	v[0] += v[1];
	autocorr_bern30_04_pd[276] = 48. * x[10];
	v[1] = autocorr_bern30_04_pd[276] * x[12];
	v[0] += v[1];
	autocorr_bern30_04_pd[277] = 16. * x[10];
	v[1] = autocorr_bern30_04_pd[277] * x[13];
	v[0] += v[1];
	autocorr_bern30_04_pd[278] = 48. * x[11];
	v[1] = autocorr_bern30_04_pd[278] * x[12];
	v[0] += v[1];
	autocorr_bern30_04_pd[279] = 48. * x[11];
	v[1] = autocorr_bern30_04_pd[279] * x[13];
	v[0] += v[1];
	autocorr_bern30_04_pd[280] = 16. * x[11];
	v[1] = autocorr_bern30_04_pd[280] * x[14];
	v[0] += v[1];
	autocorr_bern30_04_pd[281] = 48. * x[12];
	v[1] = autocorr_bern30_04_pd[281] * x[13];
	v[0] += v[1];
	autocorr_bern30_04_pd[282] = 48. * x[12];
	v[1] = autocorr_bern30_04_pd[282] * x[14];
	v[0] += v[1];
	autocorr_bern30_04_pd[283] = 16. * x[12];
	v[1] = autocorr_bern30_04_pd[283] * x[15];
	v[0] += v[1];
	autocorr_bern30_04_pd[284] = 48. * x[13];
	v[1] = autocorr_bern30_04_pd[284] * x[14];
	v[0] += v[1];
	autocorr_bern30_04_pd[285] = 48. * x[13];
	v[1] = autocorr_bern30_04_pd[285] * x[15];
	v[0] += v[1];
	autocorr_bern30_04_pd[286] = 16. * x[13];
	v[1] = autocorr_bern30_04_pd[286] * x[16];
	v[0] += v[1];
	autocorr_bern30_04_pd[287] = 48. * x[14];
	v[1] = autocorr_bern30_04_pd[287] * x[15];
	v[0] += v[1];
	autocorr_bern30_04_pd[288] = 48. * x[14];
	v[1] = autocorr_bern30_04_pd[288] * x[16];
	v[0] += v[1];
	autocorr_bern30_04_pd[289] = 16. * x[14];
	v[1] = autocorr_bern30_04_pd[289] * x[17];
	v[0] += v[1];
	autocorr_bern30_04_pd[290] = 48. * x[15];
	v[1] = autocorr_bern30_04_pd[290] * x[16];
	v[0] += v[1];
	autocorr_bern30_04_pd[291] = 48. * x[15];
	v[1] = autocorr_bern30_04_pd[291] * x[17];
	v[0] += v[1];
	autocorr_bern30_04_pd[292] = 16. * x[15];
	v[1] = autocorr_bern30_04_pd[292] * x[18];
	v[0] += v[1];
	autocorr_bern30_04_pd[293] = 48. * x[16];
	v[1] = autocorr_bern30_04_pd[293] * x[17];
	v[0] += v[1];
	autocorr_bern30_04_pd[294] = 48. * x[16];
	v[1] = autocorr_bern30_04_pd[294] * x[18];
	v[0] += v[1];
	autocorr_bern30_04_pd[295] = 16. * x[16];
	v[1] = autocorr_bern30_04_pd[295] * x[19];
	v[0] += v[1];
	autocorr_bern30_04_pd[296] = 48. * x[17];
	v[1] = autocorr_bern30_04_pd[296] * x[18];
	v[0] += v[1];
	autocorr_bern30_04_pd[297] = 48. * x[17];
	v[1] = autocorr_bern30_04_pd[297] * x[19];
	v[0] += v[1];
	autocorr_bern30_04_pd[298] = 16. * x[17];
	v[1] = autocorr_bern30_04_pd[298] * x[20];
	v[0] += v[1];
	autocorr_bern30_04_pd[299] = 48. * x[18];
	v[1] = autocorr_bern30_04_pd[299] * x[19];
	v[0] += v[1];
	autocorr_bern30_04_pd[300] = 48. * x[18];
	v[1] = autocorr_bern30_04_pd[300] * x[20];
	v[0] += v[1];
	autocorr_bern30_04_pd[301] = 16. * x[18];
	v[1] = autocorr_bern30_04_pd[301] * x[21];
	v[0] += v[1];
	autocorr_bern30_04_pd[302] = 48. * x[19];
	v[1] = autocorr_bern30_04_pd[302] * x[20];
	v[0] += v[1];
	autocorr_bern30_04_pd[303] = 48. * x[19];
	v[1] = autocorr_bern30_04_pd[303] * x[21];
	v[0] += v[1];
	autocorr_bern30_04_pd[304] = 16. * x[19];
	v[1] = autocorr_bern30_04_pd[304] * x[22];
	v[0] += v[1];
	autocorr_bern30_04_pd[305] = 48. * x[20];
	v[1] = autocorr_bern30_04_pd[305] * x[21];
	v[0] += v[1];
	autocorr_bern30_04_pd[306] = 48. * x[20];
	v[1] = autocorr_bern30_04_pd[306] * x[22];
	v[0] += v[1];
	autocorr_bern30_04_pd[307] = 16. * x[20];
	v[1] = autocorr_bern30_04_pd[307] * x[23];
	v[0] += v[1];
	autocorr_bern30_04_pd[308] = 48. * x[21];
	v[1] = autocorr_bern30_04_pd[308] * x[22];
	v[0] += v[1];
	autocorr_bern30_04_pd[309] = 48. * x[21];
	v[1] = autocorr_bern30_04_pd[309] * x[23];
	v[0] += v[1];
	autocorr_bern30_04_pd[310] = 16. * x[21];
	v[1] = autocorr_bern30_04_pd[310] * x[24];
	v[0] += v[1];
	autocorr_bern30_04_pd[311] = 48. * x[22];
	v[1] = autocorr_bern30_04_pd[311] * x[23];
	v[0] += v[1];
	autocorr_bern30_04_pd[312] = 48. * x[22];
	v[1] = autocorr_bern30_04_pd[312] * x[24];
	v[0] += v[1];
	autocorr_bern30_04_pd[313] = 16. * x[22];
	v[1] = autocorr_bern30_04_pd[313] * x[25];
	v[0] += v[1];
	autocorr_bern30_04_pd[314] = 48. * x[23];
	v[1] = autocorr_bern30_04_pd[314] * x[24];
	v[0] += v[1];
	autocorr_bern30_04_pd[315] = 48. * x[23];
	v[1] = autocorr_bern30_04_pd[315] * x[25];
	v[0] += v[1];
	autocorr_bern30_04_pd[316] = 16. * x[23];
	v[1] = autocorr_bern30_04_pd[316] * x[26];
	v[0] += v[1];
	autocorr_bern30_04_pd[317] = 48. * x[24];
	v[1] = autocorr_bern30_04_pd[317] * x[25];
	v[0] += v[1];
	autocorr_bern30_04_pd[318] = 48. * x[24];
	v[1] = autocorr_bern30_04_pd[318] * x[26];
	v[0] += v[1];
	autocorr_bern30_04_pd[319] = 16. * x[24];
	v[1] = autocorr_bern30_04_pd[319] * x[27];
	v[0] += v[1];
	autocorr_bern30_04_pd[320] = 48. * x[25];
	v[1] = autocorr_bern30_04_pd[320] * x[26];
	v[0] += v[1];
	autocorr_bern30_04_pd[321] = 48. * x[25];
	v[1] = autocorr_bern30_04_pd[321] * x[27];
	v[0] += v[1];
	autocorr_bern30_04_pd[322] = 16. * x[25];
	v[1] = autocorr_bern30_04_pd[322] * x[28];
	v[0] += v[1];
	autocorr_bern30_04_pd[323] = 48. * x[26];
	v[1] = autocorr_bern30_04_pd[323] * x[27];
	v[0] += v[1];
	autocorr_bern30_04_pd[324] = 48. * x[26];
	v[1] = autocorr_bern30_04_pd[324] * x[28];
	v[0] += v[1];
	autocorr_bern30_04_pd[325] = 16. * x[26];
	v[1] = autocorr_bern30_04_pd[325] * x[29];
	v[0] += v[1];
	autocorr_bern30_04_pd[326] = 32. * x[27];
	v[1] = autocorr_bern30_04_pd[326] * x[28];
	v[0] += v[1];
	autocorr_bern30_04_pd[327] = 24. * x[27];
	v[1] = autocorr_bern30_04_pd[327] * x[29];
	v[0] += v[1];
	autocorr_bern30_04_pd[328] = 16. * x[28];
	v[1] = autocorr_bern30_04_pd[328] * x[29];
	v[0] += v[1];
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
	t1 += -36.*x[27];
	t1 += -24.*x[28];
	t1 += -12.*x[29];
	t1 += -x[30];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[29] = autocorr_bern30_04_pd[328] + -12.;
	J[28] = x[29]*16. + -24.;
	J[29] += autocorr_bern30_04_pd[327];
	J[27] = x[29]*24. + -36.;
	J[28] += autocorr_bern30_04_pd[326];
	J[27] += x[28]*32.;
	J[29] += autocorr_bern30_04_pd[325];
	J[26] = x[29]*16. + -48.;
	J[28] += autocorr_bern30_04_pd[324];
	J[26] += x[28]*48.;
	J[27] += autocorr_bern30_04_pd[323];
	J[26] += x[27]*48.;
	J[28] += autocorr_bern30_04_pd[322];
	J[25] = x[28]*16. + -48.;
	J[27] += autocorr_bern30_04_pd[321];
	J[25] += x[27]*48.;
	J[26] += autocorr_bern30_04_pd[320];
	J[25] += x[26]*48.;
	J[27] += autocorr_bern30_04_pd[319];
	J[24] = x[27]*16. + -48.;
	J[26] += autocorr_bern30_04_pd[318];
	J[24] += x[26]*48.;
	J[25] += autocorr_bern30_04_pd[317];
	J[24] += x[25]*48.;
	J[26] += autocorr_bern30_04_pd[316];
	J[23] = x[26]*16. + -48.;
	J[25] += autocorr_bern30_04_pd[315];
	J[23] += x[25]*48.;
	J[24] += autocorr_bern30_04_pd[314];
	J[23] += x[24]*48.;
	J[25] += autocorr_bern30_04_pd[313];
	J[22] = x[25]*16. + -48.;
	J[24] += autocorr_bern30_04_pd[312];
	J[22] += x[24]*48.;
	J[23] += autocorr_bern30_04_pd[311];
	J[22] += x[23]*48.;
	J[24] += autocorr_bern30_04_pd[310];
	J[21] = x[24]*16. + -48.;
	J[23] += autocorr_bern30_04_pd[309];
	J[21] += x[23]*48.;
	J[22] += autocorr_bern30_04_pd[308];
	J[21] += x[22]*48.;
	J[23] += autocorr_bern30_04_pd[307];
	J[20] = x[23]*16. + -48.;
	J[22] += autocorr_bern30_04_pd[306];
	J[20] += x[22]*48.;
	J[21] += autocorr_bern30_04_pd[305];
	J[20] += x[21]*48.;
	J[22] += autocorr_bern30_04_pd[304];
	J[19] = x[22]*16. + -48.;
	J[21] += autocorr_bern30_04_pd[303];
	J[19] += x[21]*48.;
	J[20] += autocorr_bern30_04_pd[302];
	J[19] += x[20]*48.;
	J[21] += autocorr_bern30_04_pd[301];
	J[18] = x[21]*16. + -48.;
	J[20] += autocorr_bern30_04_pd[300];
	J[18] += x[20]*48.;
	J[19] += autocorr_bern30_04_pd[299];
	J[18] += x[19]*48.;
	J[20] += autocorr_bern30_04_pd[298];
	J[17] = x[20]*16. + -48.;
	J[19] += autocorr_bern30_04_pd[297];
	J[17] += x[19]*48.;
	J[18] += autocorr_bern30_04_pd[296];
	J[17] += x[18]*48.;
	J[19] += autocorr_bern30_04_pd[295];
	J[16] = x[19]*16. + -48.;
	J[18] += autocorr_bern30_04_pd[294];
	J[16] += x[18]*48.;
	J[17] += autocorr_bern30_04_pd[293];
	J[16] += x[17]*48.;
	J[18] += autocorr_bern30_04_pd[292];
	J[15] = x[18]*16. + -48.;
	J[17] += autocorr_bern30_04_pd[291];
	J[15] += x[17]*48.;
	J[16] += autocorr_bern30_04_pd[290];
	J[15] += x[16]*48.;
	J[17] += autocorr_bern30_04_pd[289];
	J[14] = x[17]*16. + -48.;
	J[16] += autocorr_bern30_04_pd[288];
	J[14] += x[16]*48.;
	J[15] += autocorr_bern30_04_pd[287];
	J[14] += x[15]*48.;
	J[16] += autocorr_bern30_04_pd[286];
	J[13] = x[16]*16. + -48.;
	J[15] += autocorr_bern30_04_pd[285];
	J[13] += x[15]*48.;
	J[14] += autocorr_bern30_04_pd[284];
	J[13] += x[14]*48.;
	J[15] += autocorr_bern30_04_pd[283];
	J[12] = x[15]*16. + -48.;
	J[14] += autocorr_bern30_04_pd[282];
	J[12] += x[14]*48.;
	J[13] += autocorr_bern30_04_pd[281];
	J[12] += x[13]*48.;
	J[14] += autocorr_bern30_04_pd[280];
	J[11] = x[14]*16. + -48.;
	J[13] += autocorr_bern30_04_pd[279];
	J[11] += x[13]*48.;
	J[12] += autocorr_bern30_04_pd[278];
	J[11] += x[12]*48.;
	J[13] += autocorr_bern30_04_pd[277];
	J[10] = x[13]*16. + -48.;
	J[12] += autocorr_bern30_04_pd[276];
	J[10] += x[12]*48.;
	J[11] += autocorr_bern30_04_pd[275];
	J[10] += x[11]*48.;
	J[12] += autocorr_bern30_04_pd[274];
	J[9] = x[12]*16. + -48.;
	J[11] += autocorr_bern30_04_pd[273];
	J[9] += x[11]*48.;
	J[10] += autocorr_bern30_04_pd[272];
	J[9] += x[10]*48.;
	J[11] += autocorr_bern30_04_pd[271];
	J[8] = x[11]*16. + -48.;
	J[10] += autocorr_bern30_04_pd[270];
	J[8] += x[10]*48.;
	J[9] += autocorr_bern30_04_pd[269];
	J[8] += x[9]*48.;
	J[10] += autocorr_bern30_04_pd[268];
	J[7] = x[10]*16. + -48.;
	J[9] += autocorr_bern30_04_pd[267];
	J[7] += x[9]*48.;
	J[8] += autocorr_bern30_04_pd[266];
	J[7] += x[8]*48.;
	J[9] += autocorr_bern30_04_pd[265];
	J[6] = x[9]*16. + -48.;
	J[8] += autocorr_bern30_04_pd[264];
	J[6] += x[8]*48.;
	J[7] += autocorr_bern30_04_pd[263];
	J[6] += x[7]*48.;
	J[8] += autocorr_bern30_04_pd[262];
	J[5] = x[8]*16. + -48.;
	J[7] += autocorr_bern30_04_pd[261];
	J[5] += x[7]*48.;
	J[6] += autocorr_bern30_04_pd[260];
	J[5] += x[6]*48.;
	J[7] += autocorr_bern30_04_pd[259];
	J[4] = x[7]*16. + -48.;
	J[6] += autocorr_bern30_04_pd[258];
	J[4] += x[6]*48.;
	J[5] += autocorr_bern30_04_pd[257];
	J[4] += x[5]*48.;
	J[6] += autocorr_bern30_04_pd[256];
	J[3] = x[6]*16. + -48.;
	J[5] += autocorr_bern30_04_pd[255];
	J[3] += x[5]*48.;
	J[4] += autocorr_bern30_04_pd[254];
	J[3] += x[4]*48.;
	J[5] += autocorr_bern30_04_pd[253];
	J[2] = x[5]*16. + -36.;
	J[4] += autocorr_bern30_04_pd[252];
	J[2] += x[4]*48.;
	J[3] += autocorr_bern30_04_pd[251];
	J[2] += x[3]*48.;
	J[4] += autocorr_bern30_04_pd[250];
	J[1] = x[4]*16. + -24.;
	J[3] += autocorr_bern30_04_pd[249];
	J[1] += x[3]*48.;
	J[2] += autocorr_bern30_04_pd[248];
	J[1] += x[2]*32.;
	J[3] += autocorr_bern30_04_pd[247];
	J[0] = x[3]*16. + -12.;
	J[2] += autocorr_bern30_04_pd[246];
	J[0] += x[2]*24.;
	J[1] += autocorr_bern30_04_pd[245];
	J[0] += x[1]*16.;
	J[29] -= autocorr_bern30_04_pd[244];
	J[28] -= x[29]*autocorr_bern30_04_pd[243];
	dv[0] = -x[29]*x[28];
	J[27] += dv[0]*32.;
	J[29] -= autocorr_bern30_04_pd[242];
	J[28] -= x[29]*autocorr_bern30_04_pd[241];
	dv[1] = -x[29]*x[28];
	J[26] += dv[1]*32.;
	J[29] -= autocorr_bern30_04_pd[240];
	J[27] -= x[29]*autocorr_bern30_04_pd[239];
	dv[2] = -x[29]*x[27];
	J[26] += dv[2]*32.;
	J[28] -= autocorr_bern30_04_pd[238];
	J[27] -= x[28]*autocorr_bern30_04_pd[237];
	dv[3] = -x[28]*x[27];
	J[26] += dv[3]*64.;
	J[28] -= autocorr_bern30_04_pd[236];
	J[27] -= x[28]*autocorr_bern30_04_pd[235];
	dv[4] = -x[28]*x[27];
	J[25] += dv[4]*32.;
	J[28] -= autocorr_bern30_04_pd[234];
	J[26] -= x[28]*autocorr_bern30_04_pd[233];
	dv[5] = -x[28]*x[26];
	J[25] += dv[5]*32.;
	J[27] -= autocorr_bern30_04_pd[232];
	J[26] -= x[27]*autocorr_bern30_04_pd[231];
	dv[6] = -x[27]*x[26];
	J[25] += dv[6]*64.;
	J[27] -= autocorr_bern30_04_pd[230];
	J[26] -= x[27]*autocorr_bern30_04_pd[229];
	dv[7] = -x[27]*x[26];
	J[24] += dv[7]*32.;
	J[27] -= autocorr_bern30_04_pd[228];
	J[25] -= x[27]*autocorr_bern30_04_pd[227];
	dv[8] = -x[27]*x[25];
	J[24] += dv[8]*32.;
	J[26] -= autocorr_bern30_04_pd[226];
	J[25] -= x[26]*autocorr_bern30_04_pd[225];
	dv[9] = -x[26]*x[25];
	J[24] += dv[9]*64.;
	J[26] -= autocorr_bern30_04_pd[224];
	J[25] -= x[26]*autocorr_bern30_04_pd[223];
	dv[10] = -x[26]*x[25];
	J[23] += dv[10]*32.;
	J[26] -= autocorr_bern30_04_pd[222];
	J[24] -= x[26]*autocorr_bern30_04_pd[221];
	dv[11] = -x[26]*x[24];
	J[23] += dv[11]*32.;
	J[25] -= autocorr_bern30_04_pd[220];
	J[24] -= x[25]*autocorr_bern30_04_pd[219];
	dv[12] = -x[25]*x[24];
	J[23] += dv[12]*64.;
	J[25] -= autocorr_bern30_04_pd[218];
	J[24] -= x[25]*autocorr_bern30_04_pd[217];
	dv[13] = -x[25]*x[24];
	J[22] += dv[13]*32.;
	J[25] -= autocorr_bern30_04_pd[216];
	J[23] -= x[25]*autocorr_bern30_04_pd[215];
	dv[14] = -x[25]*x[23];
	J[22] += dv[14]*32.;
	J[24] -= autocorr_bern30_04_pd[214];
	J[23] -= x[24]*autocorr_bern30_04_pd[213];
	dv[15] = -x[24]*x[23];
	J[22] += dv[15]*64.;
	J[24] -= autocorr_bern30_04_pd[212];
	J[23] -= x[24]*autocorr_bern30_04_pd[211];
	dv[16] = -x[24]*x[23];
	J[21] += dv[16]*32.;
	J[24] -= autocorr_bern30_04_pd[210];
	J[22] -= x[24]*autocorr_bern30_04_pd[209];
	dv[17] = -x[24]*x[22];
	J[21] += dv[17]*32.;
	J[23] -= autocorr_bern30_04_pd[208];
	J[22] -= x[23]*autocorr_bern30_04_pd[207];
	dv[18] = -x[23]*x[22];
	J[21] += dv[18]*64.;
	J[23] -= autocorr_bern30_04_pd[206];
	J[22] -= x[23]*autocorr_bern30_04_pd[205];
	dv[19] = -x[23]*x[22];
	J[20] += dv[19]*32.;
	J[23] -= autocorr_bern30_04_pd[204];
	J[21] -= x[23]*autocorr_bern30_04_pd[203];
	dv[20] = -x[23]*x[21];
	J[20] += dv[20]*32.;
	J[22] -= autocorr_bern30_04_pd[202];
	J[21] -= x[22]*autocorr_bern30_04_pd[201];
	dv[21] = -x[22]*x[21];
	J[20] += dv[21]*64.;
	J[22] -= autocorr_bern30_04_pd[200];
	J[21] -= x[22]*autocorr_bern30_04_pd[199];
	dv[22] = -x[22]*x[21];
	J[19] += dv[22]*32.;
	J[22] -= autocorr_bern30_04_pd[198];
	J[20] -= x[22]*autocorr_bern30_04_pd[197];
	dv[23] = -x[22]*x[20];
	J[19] += dv[23]*32.;
	J[21] -= autocorr_bern30_04_pd[196];
	J[20] -= x[21]*autocorr_bern30_04_pd[195];
	dv[24] = -x[21]*x[20];
	J[19] += dv[24]*64.;
	J[21] -= autocorr_bern30_04_pd[194];
	J[20] -= x[21]*autocorr_bern30_04_pd[193];
	dv[25] = -x[21]*x[20];
	J[18] += dv[25]*32.;
	J[21] -= autocorr_bern30_04_pd[192];
	J[19] -= x[21]*autocorr_bern30_04_pd[191];
	dv[26] = -x[21]*x[19];
	J[18] += dv[26]*32.;
	J[20] -= autocorr_bern30_04_pd[190];
	J[19] -= x[20]*autocorr_bern30_04_pd[189];
	dv[27] = -x[20]*x[19];
	J[18] += dv[27]*64.;
	J[20] -= autocorr_bern30_04_pd[188];
	J[19] -= x[20]*autocorr_bern30_04_pd[187];
	dv[28] = -x[20]*x[19];
	J[17] += dv[28]*32.;
	J[20] -= autocorr_bern30_04_pd[186];
	J[18] -= x[20]*autocorr_bern30_04_pd[185];
	dv[29] = -x[20]*x[18];
	J[17] += dv[29]*32.;
	J[19] -= autocorr_bern30_04_pd[184];
	J[18] -= x[19]*autocorr_bern30_04_pd[183];
	dv[30] = -x[19]*x[18];
	J[17] += dv[30]*64.;
	J[19] -= autocorr_bern30_04_pd[182];
	J[18] -= x[19]*autocorr_bern30_04_pd[181];
	dv[31] = -x[19]*x[18];
	J[16] += dv[31]*32.;
	J[19] -= autocorr_bern30_04_pd[180];
	J[17] -= x[19]*autocorr_bern30_04_pd[179];
	dv[32] = -x[19]*x[17];
	J[16] += dv[32]*32.;
	J[18] -= autocorr_bern30_04_pd[178];
	J[17] -= x[18]*autocorr_bern30_04_pd[177];
	dv[33] = -x[18]*x[17];
	J[16] += dv[33]*64.;
	J[18] -= autocorr_bern30_04_pd[176];
	J[17] -= x[18]*autocorr_bern30_04_pd[175];
	dv[34] = -x[18]*x[17];
	J[15] += dv[34]*32.;
	J[18] -= autocorr_bern30_04_pd[174];
	J[16] -= x[18]*autocorr_bern30_04_pd[173];
	dv[35] = -x[18]*x[16];
	J[15] += dv[35]*32.;
	J[17] -= autocorr_bern30_04_pd[172];
	J[16] -= x[17]*autocorr_bern30_04_pd[171];
	dv[36] = -x[17]*x[16];
	J[15] += dv[36]*64.;
	J[17] -= autocorr_bern30_04_pd[170];
	J[16] -= x[17]*autocorr_bern30_04_pd[169];
	dv[37] = -x[17]*x[16];
	J[14] += dv[37]*32.;
	J[17] -= autocorr_bern30_04_pd[168];
	J[15] -= x[17]*autocorr_bern30_04_pd[167];
	dv[38] = -x[17]*x[15];
	J[14] += dv[38]*32.;
	J[16] -= autocorr_bern30_04_pd[166];
	J[15] -= x[16]*autocorr_bern30_04_pd[165];
	dv[39] = -x[16]*x[15];
	J[14] += dv[39]*64.;
	J[16] -= autocorr_bern30_04_pd[164];
	J[15] -= x[16]*autocorr_bern30_04_pd[163];
	dv[40] = -x[16]*x[15];
	J[13] += dv[40]*32.;
	J[16] -= autocorr_bern30_04_pd[162];
	J[14] -= x[16]*autocorr_bern30_04_pd[161];
	dv[41] = -x[16]*x[14];
	J[13] += dv[41]*32.;
	J[15] -= autocorr_bern30_04_pd[160];
	J[14] -= x[15]*autocorr_bern30_04_pd[159];
	dv[42] = -x[15]*x[14];
	J[13] += dv[42]*64.;
	J[15] -= autocorr_bern30_04_pd[158];
	J[14] -= x[15]*autocorr_bern30_04_pd[157];
	dv[43] = -x[15]*x[14];
	J[12] += dv[43]*32.;
	J[15] -= autocorr_bern30_04_pd[156];
	J[13] -= x[15]*autocorr_bern30_04_pd[155];
	dv[44] = -x[15]*x[13];
	J[12] += dv[44]*32.;
	J[14] -= autocorr_bern30_04_pd[154];
	J[13] -= x[14]*autocorr_bern30_04_pd[153];
	dv[45] = -x[14]*x[13];
	J[12] += dv[45]*64.;
	J[14] -= autocorr_bern30_04_pd[152];
	J[13] -= x[14]*autocorr_bern30_04_pd[151];
	dv[46] = -x[14]*x[13];
	J[11] += dv[46]*32.;
	J[14] -= autocorr_bern30_04_pd[150];
	J[12] -= x[14]*autocorr_bern30_04_pd[149];
	dv[47] = -x[14]*x[12];
	J[11] += dv[47]*32.;
	J[13] -= autocorr_bern30_04_pd[148];
	J[12] -= x[13]*autocorr_bern30_04_pd[147];
	dv[48] = -x[13]*x[12];
	J[11] += dv[48]*64.;
	J[13] -= autocorr_bern30_04_pd[146];
	J[12] -= x[13]*autocorr_bern30_04_pd[145];
	dv[49] = -x[13]*x[12];
	J[10] += dv[49]*32.;
	J[13] -= autocorr_bern30_04_pd[144];
	J[11] -= x[13]*autocorr_bern30_04_pd[143];
	dv[50] = -x[13]*x[11];
	J[10] += dv[50]*32.;
	J[12] -= autocorr_bern30_04_pd[142];
	J[11] -= x[12]*autocorr_bern30_04_pd[141];
	dv[51] = -x[12]*x[11];
	J[10] += dv[51]*64.;
	J[12] -= autocorr_bern30_04_pd[140];
	J[11] -= x[12]*autocorr_bern30_04_pd[139];
	dv[52] = -x[12]*x[11];
	J[9] += dv[52]*32.;
	J[12] -= autocorr_bern30_04_pd[138];
	J[10] -= x[12]*autocorr_bern30_04_pd[137];
	dv[53] = -x[12]*x[10];
	J[9] += dv[53]*32.;
	J[11] -= autocorr_bern30_04_pd[136];
	J[10] -= x[11]*autocorr_bern30_04_pd[135];
	dv[54] = -x[11]*x[10];
	J[9] += dv[54]*64.;
	J[11] -= autocorr_bern30_04_pd[134];
	J[10] -= x[11]*autocorr_bern30_04_pd[133];
	dv[55] = -x[11]*x[10];
	J[8] += dv[55]*32.;
	J[11] -= autocorr_bern30_04_pd[132];
	J[9] -= x[11]*autocorr_bern30_04_pd[131];
	dv[56] = -x[11]*x[9];
	J[8] += dv[56]*32.;
	J[10] -= autocorr_bern30_04_pd[130];
	J[9] -= x[10]*autocorr_bern30_04_pd[129];
	dv[57] = -x[10]*x[9];
	J[8] += dv[57]*64.;
	J[10] -= autocorr_bern30_04_pd[128];
	J[9] -= x[10]*autocorr_bern30_04_pd[127];
	dv[58] = -x[10]*x[9];
	J[7] += dv[58]*32.;
	J[10] -= autocorr_bern30_04_pd[126];
	J[8] -= x[10]*autocorr_bern30_04_pd[125];
	dv[59] = -x[10]*x[8];
	J[7] += dv[59]*32.;
	J[9] -= autocorr_bern30_04_pd[124];
	J[8] -= x[9]*autocorr_bern30_04_pd[123];
	dv[60] = -x[9]*x[8];
	J[7] += dv[60]*64.;
	J[9] -= autocorr_bern30_04_pd[122];
	J[8] -= x[9]*autocorr_bern30_04_pd[121];
	dv[61] = -x[9]*x[8];
	J[6] += dv[61]*32.;
	J[9] -= autocorr_bern30_04_pd[120];
	J[7] -= x[9]*autocorr_bern30_04_pd[119];
	dv[62] = -x[9]*x[7];
	J[6] += dv[62]*32.;
	J[8] -= autocorr_bern30_04_pd[118];
	J[7] -= x[8]*autocorr_bern30_04_pd[117];
	dv[63] = -x[8]*x[7];
	J[6] += dv[63]*64.;
	J[8] -= autocorr_bern30_04_pd[116];
	J[7] -= x[8]*autocorr_bern30_04_pd[115];
	dv[64] = -x[8]*x[7];
	J[5] += dv[64]*32.;
	J[8] -= autocorr_bern30_04_pd[114];
	J[6] -= x[8]*autocorr_bern30_04_pd[113];
	dv[65] = -x[8]*x[6];
	J[5] += dv[65]*32.;
	J[7] -= autocorr_bern30_04_pd[112];
	J[6] -= x[7]*autocorr_bern30_04_pd[111];
	dv[66] = -x[7]*x[6];
	J[5] += dv[66]*64.;
	J[7] -= autocorr_bern30_04_pd[110];
	J[6] -= x[7]*autocorr_bern30_04_pd[109];
	dv[67] = -x[7]*x[6];
	J[4] += dv[67]*32.;
	J[7] -= autocorr_bern30_04_pd[108];
	J[5] -= x[7]*autocorr_bern30_04_pd[107];
	dv[68] = -x[7]*x[5];
	J[4] += dv[68]*32.;
	J[6] -= autocorr_bern30_04_pd[106];
	J[5] -= x[6]*autocorr_bern30_04_pd[105];
	dv[69] = -x[6]*x[5];
	J[4] += dv[69]*64.;
	J[6] -= autocorr_bern30_04_pd[104];
	J[5] -= x[6]*autocorr_bern30_04_pd[103];
	dv[70] = -x[6]*x[5];
	J[3] += dv[70]*32.;
	J[6] -= autocorr_bern30_04_pd[102];
	J[4] -= x[6]*autocorr_bern30_04_pd[101];
	dv[71] = -x[6]*x[4];
	J[3] += dv[71]*32.;
	J[5] -= autocorr_bern30_04_pd[100];
	J[4] -= x[5]*autocorr_bern30_04_pd[99];
	dv[72] = -x[5]*x[4];
	J[3] += dv[72]*64.;
	J[5] -= autocorr_bern30_04_pd[98];
	J[4] -= x[5]*autocorr_bern30_04_pd[97];
	dv[73] = -x[5]*x[4];
	J[2] += dv[73]*32.;
	J[5] -= autocorr_bern30_04_pd[96];
	J[3] -= x[5]*autocorr_bern30_04_pd[95];
	dv[74] = -x[5]*x[3];
	J[2] += dv[74]*32.;
	J[4] -= autocorr_bern30_04_pd[94];
	J[3] -= x[4]*autocorr_bern30_04_pd[93];
	dv[75] = -x[4]*x[3];
	J[2] += dv[75]*64.;
	J[4] -= autocorr_bern30_04_pd[92];
	J[3] -= x[4]*autocorr_bern30_04_pd[91];
	dv[76] = -x[4]*x[3];
	J[1] += dv[76]*32.;
	J[4] -= autocorr_bern30_04_pd[90];
	J[2] -= x[4]*autocorr_bern30_04_pd[89];
	dv[77] = -x[4]*x[2];
	J[1] += dv[77]*32.;
	J[3] -= autocorr_bern30_04_pd[88];
	J[2] -= x[3]*autocorr_bern30_04_pd[87];
	dv[78] = -x[3]*x[2];
	J[1] += dv[78]*64.;
	J[3] -= autocorr_bern30_04_pd[86];
	J[2] -= x[3]*autocorr_bern30_04_pd[85];
	dv[79] = -x[3]*x[2];
	J[0] += dv[79]*32.;
	J[3] -= autocorr_bern30_04_pd[84];
	J[1] -= x[3]*autocorr_bern30_04_pd[83];
	dv[80] = -x[3]*x[1];
	J[0] += dv[80]*32.;
	J[2] -= autocorr_bern30_04_pd[82];
	J[1] -= x[2]*autocorr_bern30_04_pd[81];
	dv[81] = -x[2]*x[1];
	J[0] += dv[81]*32.;
	J[29] += autocorr_bern30_04_pd[80];
	J[28] += x[29]*autocorr_bern30_04_pd[79];
	dv[82] = x[29]*x[28];
	J[27] += dv[82]*autocorr_bern30_04_pd[78];
	dv[82] *= x[27];
	J[26] += dv[82]*64.;
	J[28] += autocorr_bern30_04_pd[77];
	J[27] += x[28]*autocorr_bern30_04_pd[76];
	dv[83] = x[28]*x[27];
	J[26] += dv[83]*autocorr_bern30_04_pd[75];
	dv[83] *= x[26];
	J[25] += dv[83]*64.;
	J[27] += autocorr_bern30_04_pd[74];
	J[26] += x[27]*autocorr_bern30_04_pd[73];
	dv[84] = x[27]*x[26];
	J[25] += dv[84]*autocorr_bern30_04_pd[72];
	dv[84] *= x[25];
	J[24] += dv[84]*64.;
	J[26] += autocorr_bern30_04_pd[71];
	J[25] += x[26]*autocorr_bern30_04_pd[70];
	dv[85] = x[26]*x[25];
	J[24] += dv[85]*autocorr_bern30_04_pd[69];
	dv[85] *= x[24];
	J[23] += dv[85]*64.;
	J[25] += autocorr_bern30_04_pd[68];
	J[24] += x[25]*autocorr_bern30_04_pd[67];
	dv[86] = x[25]*x[24];
	J[23] += dv[86]*autocorr_bern30_04_pd[66];
	dv[86] *= x[23];
	J[22] += dv[86]*64.;
	J[24] += autocorr_bern30_04_pd[65];
	J[23] += x[24]*autocorr_bern30_04_pd[64];
	dv[87] = x[24]*x[23];
	J[22] += dv[87]*autocorr_bern30_04_pd[63];
	dv[87] *= x[22];
	J[21] += dv[87]*64.;
	J[23] += autocorr_bern30_04_pd[62];
	J[22] += x[23]*autocorr_bern30_04_pd[61];
	dv[88] = x[23]*x[22];
	J[21] += dv[88]*autocorr_bern30_04_pd[60];
	dv[88] *= x[21];
	J[20] += dv[88]*64.;
	J[22] += autocorr_bern30_04_pd[59];
	J[21] += x[22]*autocorr_bern30_04_pd[58];
	dv[89] = x[22]*x[21];
	J[20] += dv[89]*autocorr_bern30_04_pd[57];
	dv[89] *= x[20];
	J[19] += dv[89]*64.;
	J[21] += autocorr_bern30_04_pd[56];
	J[20] += x[21]*autocorr_bern30_04_pd[55];
	dv[90] = x[21]*x[20];
	J[19] += dv[90]*autocorr_bern30_04_pd[54];
	dv[90] *= x[19];
	J[18] += dv[90]*64.;
	J[20] += autocorr_bern30_04_pd[53];
	J[19] += x[20]*autocorr_bern30_04_pd[52];
	dv[91] = x[20]*x[19];
	J[18] += dv[91]*autocorr_bern30_04_pd[51];
	dv[91] *= x[18];
	J[17] += dv[91]*64.;
	J[19] += autocorr_bern30_04_pd[50];
	J[18] += x[19]*autocorr_bern30_04_pd[49];
	dv[92] = x[19]*x[18];
	J[17] += dv[92]*autocorr_bern30_04_pd[48];
	dv[92] *= x[17];
	J[16] += dv[92]*64.;
	J[18] += autocorr_bern30_04_pd[47];
	J[17] += x[18]*autocorr_bern30_04_pd[46];
	dv[93] = x[18]*x[17];
	J[16] += dv[93]*autocorr_bern30_04_pd[45];
	dv[93] *= x[16];
	J[15] += dv[93]*64.;
	J[17] += autocorr_bern30_04_pd[44];
	J[16] += x[17]*autocorr_bern30_04_pd[43];
	dv[94] = x[17]*x[16];
	J[15] += dv[94]*autocorr_bern30_04_pd[42];
	dv[94] *= x[15];
	J[14] += dv[94]*64.;
	J[16] += autocorr_bern30_04_pd[41];
	J[15] += x[16]*autocorr_bern30_04_pd[40];
	dv[95] = x[16]*x[15];
	J[14] += dv[95]*autocorr_bern30_04_pd[39];
	dv[95] *= x[14];
	J[13] += dv[95]*64.;
	J[15] += autocorr_bern30_04_pd[38];
	J[14] += x[15]*autocorr_bern30_04_pd[37];
	dv[96] = x[15]*x[14];
	J[13] += dv[96]*autocorr_bern30_04_pd[36];
	dv[96] *= x[13];
	J[12] += dv[96]*64.;
	J[14] += autocorr_bern30_04_pd[35];
	J[13] += x[14]*autocorr_bern30_04_pd[34];
	dv[97] = x[14]*x[13];
	J[12] += dv[97]*autocorr_bern30_04_pd[33];
	dv[97] *= x[12];
	J[11] += dv[97]*64.;
	J[13] += autocorr_bern30_04_pd[32];
	J[12] += x[13]*autocorr_bern30_04_pd[31];
	dv[98] = x[13]*x[12];
	J[11] += dv[98]*autocorr_bern30_04_pd[30];
	dv[98] *= x[11];
	J[10] += dv[98]*64.;
	J[12] += autocorr_bern30_04_pd[29];
	J[11] += x[12]*autocorr_bern30_04_pd[28];
	dv[99] = x[12]*x[11];
	J[10] += dv[99]*autocorr_bern30_04_pd[27];
	dv[99] *= x[10];
	J[9] += dv[99]*64.;
	J[11] += autocorr_bern30_04_pd[26];
	J[10] += x[11]*autocorr_bern30_04_pd[25];
	dv[100] = x[11]*x[10];
	J[9] += dv[100]*autocorr_bern30_04_pd[24];
	dv[100] *= x[9];
	J[8] += dv[100]*64.;
	J[10] += autocorr_bern30_04_pd[23];
	J[9] += x[10]*autocorr_bern30_04_pd[22];
	dv[101] = x[10]*x[9];
	J[8] += dv[101]*autocorr_bern30_04_pd[21];
	dv[101] *= x[8];
	J[7] += dv[101]*64.;
	J[9] += autocorr_bern30_04_pd[20];
	J[8] += x[9]*autocorr_bern30_04_pd[19];
	dv[102] = x[9]*x[8];
	J[7] += dv[102]*autocorr_bern30_04_pd[18];
	dv[102] *= x[7];
	J[6] += dv[102]*64.;
	J[8] += autocorr_bern30_04_pd[17];
	J[7] += x[8]*autocorr_bern30_04_pd[16];
	dv[103] = x[8]*x[7];
	J[6] += dv[103]*autocorr_bern30_04_pd[15];
	dv[103] *= x[6];
	J[5] += dv[103]*64.;
	J[7] += autocorr_bern30_04_pd[14];
	J[6] += x[7]*autocorr_bern30_04_pd[13];
	dv[104] = x[7]*x[6];
	J[5] += dv[104]*autocorr_bern30_04_pd[12];
	dv[104] *= x[5];
	J[4] += dv[104]*64.;
	J[6] += autocorr_bern30_04_pd[11];
	J[5] += x[6]*autocorr_bern30_04_pd[10];
	dv[105] = x[6]*x[5];
	J[4] += dv[105]*autocorr_bern30_04_pd[9];
	dv[105] *= x[4];
	J[3] += dv[105]*64.;
	J[5] += autocorr_bern30_04_pd[8];
	J[4] += x[5]*autocorr_bern30_04_pd[7];
	dv[106] = x[5]*x[4];
	J[3] += dv[106]*autocorr_bern30_04_pd[6];
	dv[106] *= x[3];
	J[2] += dv[106]*64.;
	J[4] += autocorr_bern30_04_pd[5];
	J[3] += x[4]*autocorr_bern30_04_pd[4];
	dv[107] = x[4]*x[3];
	J[2] += dv[107]*autocorr_bern30_04_pd[3];
	dv[107] *= x[2];
	J[1] += dv[107]*64.;
	J[3] += autocorr_bern30_04_pd[2];
	J[2] += x[3]*autocorr_bern30_04_pd[1];
	dv[108] = x[3]*x[2];
	J[1] += dv[108]*autocorr_bern30_04_pd[0];
	dv[108] *= x[1];
	J[0] += dv[108]*64.;
	J[30] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
