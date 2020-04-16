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
 fint autocorr_bern20_05_auxcom_[1] = { 1 /* nlc */ };
 fint autocorr_bern20_05_funcom_[49] = {
	21 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	21 /* nzc */,
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
	1 };

 real autocorr_bern20_05_boundc_[1+42+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.};

 real autocorr_bern20_05_x0comn_[21] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real autocorr_bern20_05_pd[337];
static real autocorr_bern20_05_old_x[21];
static int autocorr_bern20_05_xkind = -1;

 static int
autocorr_bern20_05_xcheck(real *x)
{
	real *x1 = autocorr_bern20_05_old_x, *xe = x + 21;
	errno = 0;
	if (autocorr_bern20_05_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	autocorr_bern20_05_xkind = 0;
	return 1;
	}
 real
autocorr_bern20_05_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (autocorr_bern20_05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[20];
	;}

	if (wantfg & 2) {
	g[20] = 1.;
	}

	return rv;
}

 void
autocorr_bern20_05_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[117];
	real t1;
	fint wantfg = *needfg;
	if (autocorr_bern20_05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	autocorr_bern20_05_pd[0] = 64. * x[0];
	autocorr_bern20_05_pd[1] = autocorr_bern20_05_pd[0] * x[1];
	autocorr_bern20_05_pd[2] = autocorr_bern20_05_pd[1] * x[2];
	v[0] = autocorr_bern20_05_pd[2] * x[3];
	autocorr_bern20_05_pd[3] = 64. * x[0];
	autocorr_bern20_05_pd[4] = autocorr_bern20_05_pd[3] * x[1];
	autocorr_bern20_05_pd[5] = autocorr_bern20_05_pd[4] * x[3];
	v[1] = autocorr_bern20_05_pd[5] * x[4];
	v[0] += v[1];
	autocorr_bern20_05_pd[6] = 128. * x[1];
	autocorr_bern20_05_pd[7] = autocorr_bern20_05_pd[6] * x[2];
	autocorr_bern20_05_pd[8] = autocorr_bern20_05_pd[7] * x[3];
	v[1] = autocorr_bern20_05_pd[8] * x[4];
	v[0] += v[1];
	autocorr_bern20_05_pd[9] = 64. * x[1];
	autocorr_bern20_05_pd[10] = autocorr_bern20_05_pd[9] * x[2];
	autocorr_bern20_05_pd[11] = autocorr_bern20_05_pd[10] * x[4];
	v[1] = autocorr_bern20_05_pd[11] * x[5];
	v[0] += v[1];
	autocorr_bern20_05_pd[12] = 128. * x[2];
	autocorr_bern20_05_pd[13] = autocorr_bern20_05_pd[12] * x[3];
	autocorr_bern20_05_pd[14] = autocorr_bern20_05_pd[13] * x[4];
	v[1] = autocorr_bern20_05_pd[14] * x[5];
	v[0] += v[1];
	autocorr_bern20_05_pd[15] = 64. * x[2];
	autocorr_bern20_05_pd[16] = autocorr_bern20_05_pd[15] * x[3];
	autocorr_bern20_05_pd[17] = autocorr_bern20_05_pd[16] * x[5];
	v[1] = autocorr_bern20_05_pd[17] * x[6];
	v[0] += v[1];
	autocorr_bern20_05_pd[18] = 128. * x[3];
	autocorr_bern20_05_pd[19] = autocorr_bern20_05_pd[18] * x[4];
	autocorr_bern20_05_pd[20] = autocorr_bern20_05_pd[19] * x[5];
	v[1] = autocorr_bern20_05_pd[20] * x[6];
	v[0] += v[1];
	autocorr_bern20_05_pd[21] = 64. * x[3];
	autocorr_bern20_05_pd[22] = autocorr_bern20_05_pd[21] * x[4];
	autocorr_bern20_05_pd[23] = autocorr_bern20_05_pd[22] * x[6];
	v[1] = autocorr_bern20_05_pd[23] * x[7];
	v[0] += v[1];
	autocorr_bern20_05_pd[24] = 128. * x[4];
	autocorr_bern20_05_pd[25] = autocorr_bern20_05_pd[24] * x[5];
	autocorr_bern20_05_pd[26] = autocorr_bern20_05_pd[25] * x[6];
	v[1] = autocorr_bern20_05_pd[26] * x[7];
	v[0] += v[1];
	autocorr_bern20_05_pd[27] = 64. * x[4];
	autocorr_bern20_05_pd[28] = autocorr_bern20_05_pd[27] * x[5];
	autocorr_bern20_05_pd[29] = autocorr_bern20_05_pd[28] * x[7];
	v[1] = autocorr_bern20_05_pd[29] * x[8];
	v[0] += v[1];
	autocorr_bern20_05_pd[30] = 128. * x[5];
	autocorr_bern20_05_pd[31] = autocorr_bern20_05_pd[30] * x[6];
	autocorr_bern20_05_pd[32] = autocorr_bern20_05_pd[31] * x[7];
	v[1] = autocorr_bern20_05_pd[32] * x[8];
	v[0] += v[1];
	autocorr_bern20_05_pd[33] = 64. * x[5];
	autocorr_bern20_05_pd[34] = autocorr_bern20_05_pd[33] * x[6];
	autocorr_bern20_05_pd[35] = autocorr_bern20_05_pd[34] * x[8];
	v[1] = autocorr_bern20_05_pd[35] * x[9];
	v[0] += v[1];
	autocorr_bern20_05_pd[36] = 128. * x[6];
	autocorr_bern20_05_pd[37] = autocorr_bern20_05_pd[36] * x[7];
	autocorr_bern20_05_pd[38] = autocorr_bern20_05_pd[37] * x[8];
	v[1] = autocorr_bern20_05_pd[38] * x[9];
	v[0] += v[1];
	autocorr_bern20_05_pd[39] = 64. * x[6];
	autocorr_bern20_05_pd[40] = autocorr_bern20_05_pd[39] * x[7];
	autocorr_bern20_05_pd[41] = autocorr_bern20_05_pd[40] * x[9];
	v[1] = autocorr_bern20_05_pd[41] * x[10];
	v[0] += v[1];
	autocorr_bern20_05_pd[42] = 128. * x[7];
	autocorr_bern20_05_pd[43] = autocorr_bern20_05_pd[42] * x[8];
	autocorr_bern20_05_pd[44] = autocorr_bern20_05_pd[43] * x[9];
	v[1] = autocorr_bern20_05_pd[44] * x[10];
	v[0] += v[1];
	autocorr_bern20_05_pd[45] = 64. * x[7];
	autocorr_bern20_05_pd[46] = autocorr_bern20_05_pd[45] * x[8];
	autocorr_bern20_05_pd[47] = autocorr_bern20_05_pd[46] * x[10];
	v[1] = autocorr_bern20_05_pd[47] * x[11];
	v[0] += v[1];
	autocorr_bern20_05_pd[48] = 128. * x[8];
	autocorr_bern20_05_pd[49] = autocorr_bern20_05_pd[48] * x[9];
	autocorr_bern20_05_pd[50] = autocorr_bern20_05_pd[49] * x[10];
	v[1] = autocorr_bern20_05_pd[50] * x[11];
	v[0] += v[1];
	autocorr_bern20_05_pd[51] = 64. * x[8];
	autocorr_bern20_05_pd[52] = autocorr_bern20_05_pd[51] * x[9];
	autocorr_bern20_05_pd[53] = autocorr_bern20_05_pd[52] * x[11];
	v[1] = autocorr_bern20_05_pd[53] * x[12];
	v[0] += v[1];
	autocorr_bern20_05_pd[54] = 128. * x[9];
	autocorr_bern20_05_pd[55] = autocorr_bern20_05_pd[54] * x[10];
	autocorr_bern20_05_pd[56] = autocorr_bern20_05_pd[55] * x[11];
	v[1] = autocorr_bern20_05_pd[56] * x[12];
	v[0] += v[1];
	autocorr_bern20_05_pd[57] = 64. * x[9];
	autocorr_bern20_05_pd[58] = autocorr_bern20_05_pd[57] * x[10];
	autocorr_bern20_05_pd[59] = autocorr_bern20_05_pd[58] * x[12];
	v[1] = autocorr_bern20_05_pd[59] * x[13];
	v[0] += v[1];
	autocorr_bern20_05_pd[60] = 128. * x[10];
	autocorr_bern20_05_pd[61] = autocorr_bern20_05_pd[60] * x[11];
	autocorr_bern20_05_pd[62] = autocorr_bern20_05_pd[61] * x[12];
	v[1] = autocorr_bern20_05_pd[62] * x[13];
	v[0] += v[1];
	autocorr_bern20_05_pd[63] = 64. * x[10];
	autocorr_bern20_05_pd[64] = autocorr_bern20_05_pd[63] * x[11];
	autocorr_bern20_05_pd[65] = autocorr_bern20_05_pd[64] * x[13];
	v[1] = autocorr_bern20_05_pd[65] * x[14];
	v[0] += v[1];
	autocorr_bern20_05_pd[66] = 128. * x[11];
	autocorr_bern20_05_pd[67] = autocorr_bern20_05_pd[66] * x[12];
	autocorr_bern20_05_pd[68] = autocorr_bern20_05_pd[67] * x[13];
	v[1] = autocorr_bern20_05_pd[68] * x[14];
	v[0] += v[1];
	autocorr_bern20_05_pd[69] = 64. * x[11];
	autocorr_bern20_05_pd[70] = autocorr_bern20_05_pd[69] * x[12];
	autocorr_bern20_05_pd[71] = autocorr_bern20_05_pd[70] * x[14];
	v[1] = autocorr_bern20_05_pd[71] * x[15];
	v[0] += v[1];
	autocorr_bern20_05_pd[72] = 128. * x[12];
	autocorr_bern20_05_pd[73] = autocorr_bern20_05_pd[72] * x[13];
	autocorr_bern20_05_pd[74] = autocorr_bern20_05_pd[73] * x[14];
	v[1] = autocorr_bern20_05_pd[74] * x[15];
	v[0] += v[1];
	autocorr_bern20_05_pd[75] = 64. * x[12];
	autocorr_bern20_05_pd[76] = autocorr_bern20_05_pd[75] * x[13];
	autocorr_bern20_05_pd[77] = autocorr_bern20_05_pd[76] * x[15];
	v[1] = autocorr_bern20_05_pd[77] * x[16];
	v[0] += v[1];
	autocorr_bern20_05_pd[78] = 128. * x[13];
	autocorr_bern20_05_pd[79] = autocorr_bern20_05_pd[78] * x[14];
	autocorr_bern20_05_pd[80] = autocorr_bern20_05_pd[79] * x[15];
	v[1] = autocorr_bern20_05_pd[80] * x[16];
	v[0] += v[1];
	autocorr_bern20_05_pd[81] = 64. * x[13];
	autocorr_bern20_05_pd[82] = autocorr_bern20_05_pd[81] * x[14];
	autocorr_bern20_05_pd[83] = autocorr_bern20_05_pd[82] * x[16];
	v[1] = autocorr_bern20_05_pd[83] * x[17];
	v[0] += v[1];
	autocorr_bern20_05_pd[84] = 128. * x[14];
	autocorr_bern20_05_pd[85] = autocorr_bern20_05_pd[84] * x[15];
	autocorr_bern20_05_pd[86] = autocorr_bern20_05_pd[85] * x[16];
	v[1] = autocorr_bern20_05_pd[86] * x[17];
	v[0] += v[1];
	autocorr_bern20_05_pd[87] = 64. * x[14];
	autocorr_bern20_05_pd[88] = autocorr_bern20_05_pd[87] * x[15];
	autocorr_bern20_05_pd[89] = autocorr_bern20_05_pd[88] * x[17];
	v[1] = autocorr_bern20_05_pd[89] * x[18];
	v[0] += v[1];
	autocorr_bern20_05_pd[90] = 128. * x[15];
	autocorr_bern20_05_pd[91] = autocorr_bern20_05_pd[90] * x[16];
	autocorr_bern20_05_pd[92] = autocorr_bern20_05_pd[91] * x[17];
	v[1] = autocorr_bern20_05_pd[92] * x[18];
	v[0] += v[1];
	autocorr_bern20_05_pd[93] = 64. * x[15];
	autocorr_bern20_05_pd[94] = autocorr_bern20_05_pd[93] * x[16];
	autocorr_bern20_05_pd[95] = autocorr_bern20_05_pd[94] * x[18];
	v[1] = autocorr_bern20_05_pd[95] * x[19];
	v[0] += v[1];
	autocorr_bern20_05_pd[96] = 64. * x[16];
	autocorr_bern20_05_pd[97] = autocorr_bern20_05_pd[96] * x[17];
	autocorr_bern20_05_pd[98] = autocorr_bern20_05_pd[97] * x[18];
	v[1] = autocorr_bern20_05_pd[98] * x[19];
	v[0] += v[1];
	autocorr_bern20_05_pd[99] = 32. * x[0];
	autocorr_bern20_05_pd[100] = autocorr_bern20_05_pd[99] * x[1];
	v[1] = autocorr_bern20_05_pd[100] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[101] = 64. * x[0];
	autocorr_bern20_05_pd[102] = autocorr_bern20_05_pd[101] * x[1];
	v[2] = autocorr_bern20_05_pd[102] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[103] = 32. * x[0];
	autocorr_bern20_05_pd[104] = autocorr_bern20_05_pd[103] * x[1];
	v[1] = autocorr_bern20_05_pd[104] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[105] = 32. * x[0];
	autocorr_bern20_05_pd[106] = autocorr_bern20_05_pd[105] * x[2];
	v[2] = autocorr_bern20_05_pd[106] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[107] = 32. * x[0];
	autocorr_bern20_05_pd[108] = autocorr_bern20_05_pd[107] * x[3];
	v[1] = autocorr_bern20_05_pd[108] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[109] = 96. * x[1];
	autocorr_bern20_05_pd[110] = autocorr_bern20_05_pd[109] * x[2];
	v[2] = autocorr_bern20_05_pd[110] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[111] = 96. * x[1];
	autocorr_bern20_05_pd[112] = autocorr_bern20_05_pd[111] * x[2];
	v[1] = autocorr_bern20_05_pd[112] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[113] = 32. * x[1];
	autocorr_bern20_05_pd[114] = autocorr_bern20_05_pd[113] * x[2];
	v[2] = autocorr_bern20_05_pd[114] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[115] = 96. * x[1];
	autocorr_bern20_05_pd[116] = autocorr_bern20_05_pd[115] * x[3];
	v[1] = autocorr_bern20_05_pd[116] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[117] = 32. * x[1];
	autocorr_bern20_05_pd[118] = autocorr_bern20_05_pd[117] * x[4];
	v[2] = autocorr_bern20_05_pd[118] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[119] = 128. * x[2];
	autocorr_bern20_05_pd[120] = autocorr_bern20_05_pd[119] * x[3];
	v[1] = autocorr_bern20_05_pd[120] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[121] = 96. * x[2];
	autocorr_bern20_05_pd[122] = autocorr_bern20_05_pd[121] * x[3];
	v[2] = autocorr_bern20_05_pd[122] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[123] = 32. * x[2];
	autocorr_bern20_05_pd[124] = autocorr_bern20_05_pd[123] * x[3];
	v[1] = autocorr_bern20_05_pd[124] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[125] = 96. * x[2];
	autocorr_bern20_05_pd[126] = autocorr_bern20_05_pd[125] * x[4];
	v[2] = autocorr_bern20_05_pd[126] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[127] = 32. * x[2];
	autocorr_bern20_05_pd[128] = autocorr_bern20_05_pd[127] * x[5];
	v[1] = autocorr_bern20_05_pd[128] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[129] = 128. * x[3];
	autocorr_bern20_05_pd[130] = autocorr_bern20_05_pd[129] * x[4];
	v[2] = autocorr_bern20_05_pd[130] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[131] = 96. * x[3];
	autocorr_bern20_05_pd[132] = autocorr_bern20_05_pd[131] * x[4];
	v[1] = autocorr_bern20_05_pd[132] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[133] = 32. * x[3];
	autocorr_bern20_05_pd[134] = autocorr_bern20_05_pd[133] * x[4];
	v[2] = autocorr_bern20_05_pd[134] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[135] = 96. * x[3];
	autocorr_bern20_05_pd[136] = autocorr_bern20_05_pd[135] * x[5];
	v[1] = autocorr_bern20_05_pd[136] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[137] = 32. * x[3];
	autocorr_bern20_05_pd[138] = autocorr_bern20_05_pd[137] * x[6];
	v[2] = autocorr_bern20_05_pd[138] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[139] = 128. * x[4];
	autocorr_bern20_05_pd[140] = autocorr_bern20_05_pd[139] * x[5];
	v[1] = autocorr_bern20_05_pd[140] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[141] = 96. * x[4];
	autocorr_bern20_05_pd[142] = autocorr_bern20_05_pd[141] * x[5];
	v[2] = autocorr_bern20_05_pd[142] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[143] = 32. * x[4];
	autocorr_bern20_05_pd[144] = autocorr_bern20_05_pd[143] * x[5];
	v[1] = autocorr_bern20_05_pd[144] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[145] = 96. * x[4];
	autocorr_bern20_05_pd[146] = autocorr_bern20_05_pd[145] * x[6];
	v[2] = autocorr_bern20_05_pd[146] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[147] = 32. * x[4];
	autocorr_bern20_05_pd[148] = autocorr_bern20_05_pd[147] * x[7];
	v[1] = autocorr_bern20_05_pd[148] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[149] = 128. * x[5];
	autocorr_bern20_05_pd[150] = autocorr_bern20_05_pd[149] * x[6];
	v[2] = autocorr_bern20_05_pd[150] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[151] = 96. * x[5];
	autocorr_bern20_05_pd[152] = autocorr_bern20_05_pd[151] * x[6];
	v[1] = autocorr_bern20_05_pd[152] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[153] = 32. * x[5];
	autocorr_bern20_05_pd[154] = autocorr_bern20_05_pd[153] * x[6];
	v[2] = autocorr_bern20_05_pd[154] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[155] = 96. * x[5];
	autocorr_bern20_05_pd[156] = autocorr_bern20_05_pd[155] * x[7];
	v[1] = autocorr_bern20_05_pd[156] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[157] = 32. * x[5];
	autocorr_bern20_05_pd[158] = autocorr_bern20_05_pd[157] * x[8];
	v[2] = autocorr_bern20_05_pd[158] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[159] = 128. * x[6];
	autocorr_bern20_05_pd[160] = autocorr_bern20_05_pd[159] * x[7];
	v[1] = autocorr_bern20_05_pd[160] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[161] = 96. * x[6];
	autocorr_bern20_05_pd[162] = autocorr_bern20_05_pd[161] * x[7];
	v[2] = autocorr_bern20_05_pd[162] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[163] = 32. * x[6];
	autocorr_bern20_05_pd[164] = autocorr_bern20_05_pd[163] * x[7];
	v[1] = autocorr_bern20_05_pd[164] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[165] = 96. * x[6];
	autocorr_bern20_05_pd[166] = autocorr_bern20_05_pd[165] * x[8];
	v[2] = autocorr_bern20_05_pd[166] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[167] = 32. * x[6];
	autocorr_bern20_05_pd[168] = autocorr_bern20_05_pd[167] * x[9];
	v[1] = autocorr_bern20_05_pd[168] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[169] = 128. * x[7];
	autocorr_bern20_05_pd[170] = autocorr_bern20_05_pd[169] * x[8];
	v[2] = autocorr_bern20_05_pd[170] * x[9];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[171] = 96. * x[7];
	autocorr_bern20_05_pd[172] = autocorr_bern20_05_pd[171] * x[8];
	v[1] = autocorr_bern20_05_pd[172] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[173] = 32. * x[7];
	autocorr_bern20_05_pd[174] = autocorr_bern20_05_pd[173] * x[8];
	v[2] = autocorr_bern20_05_pd[174] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[175] = 96. * x[7];
	autocorr_bern20_05_pd[176] = autocorr_bern20_05_pd[175] * x[9];
	v[1] = autocorr_bern20_05_pd[176] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[177] = 32. * x[7];
	autocorr_bern20_05_pd[178] = autocorr_bern20_05_pd[177] * x[10];
	v[2] = autocorr_bern20_05_pd[178] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[179] = 128. * x[8];
	autocorr_bern20_05_pd[180] = autocorr_bern20_05_pd[179] * x[9];
	v[1] = autocorr_bern20_05_pd[180] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[181] = 96. * x[8];
	autocorr_bern20_05_pd[182] = autocorr_bern20_05_pd[181] * x[9];
	v[2] = autocorr_bern20_05_pd[182] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[183] = 32. * x[8];
	autocorr_bern20_05_pd[184] = autocorr_bern20_05_pd[183] * x[9];
	v[1] = autocorr_bern20_05_pd[184] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[185] = 96. * x[8];
	autocorr_bern20_05_pd[186] = autocorr_bern20_05_pd[185] * x[10];
	v[2] = autocorr_bern20_05_pd[186] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[187] = 32. * x[8];
	autocorr_bern20_05_pd[188] = autocorr_bern20_05_pd[187] * x[11];
	v[1] = autocorr_bern20_05_pd[188] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[189] = 128. * x[9];
	autocorr_bern20_05_pd[190] = autocorr_bern20_05_pd[189] * x[10];
	v[2] = autocorr_bern20_05_pd[190] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[191] = 96. * x[9];
	autocorr_bern20_05_pd[192] = autocorr_bern20_05_pd[191] * x[10];
	v[1] = autocorr_bern20_05_pd[192] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[193] = 32. * x[9];
	autocorr_bern20_05_pd[194] = autocorr_bern20_05_pd[193] * x[10];
	v[2] = autocorr_bern20_05_pd[194] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[195] = 96. * x[9];
	autocorr_bern20_05_pd[196] = autocorr_bern20_05_pd[195] * x[11];
	v[1] = autocorr_bern20_05_pd[196] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[197] = 32. * x[9];
	autocorr_bern20_05_pd[198] = autocorr_bern20_05_pd[197] * x[12];
	v[2] = autocorr_bern20_05_pd[198] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[199] = 128. * x[10];
	autocorr_bern20_05_pd[200] = autocorr_bern20_05_pd[199] * x[11];
	v[1] = autocorr_bern20_05_pd[200] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[201] = 96. * x[10];
	autocorr_bern20_05_pd[202] = autocorr_bern20_05_pd[201] * x[11];
	v[2] = autocorr_bern20_05_pd[202] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[203] = 32. * x[10];
	autocorr_bern20_05_pd[204] = autocorr_bern20_05_pd[203] * x[11];
	v[1] = autocorr_bern20_05_pd[204] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[205] = 96. * x[10];
	autocorr_bern20_05_pd[206] = autocorr_bern20_05_pd[205] * x[12];
	v[2] = autocorr_bern20_05_pd[206] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[207] = 32. * x[10];
	autocorr_bern20_05_pd[208] = autocorr_bern20_05_pd[207] * x[13];
	v[1] = autocorr_bern20_05_pd[208] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[209] = 128. * x[11];
	autocorr_bern20_05_pd[210] = autocorr_bern20_05_pd[209] * x[12];
	v[2] = autocorr_bern20_05_pd[210] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[211] = 96. * x[11];
	autocorr_bern20_05_pd[212] = autocorr_bern20_05_pd[211] * x[12];
	v[1] = autocorr_bern20_05_pd[212] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[213] = 32. * x[11];
	autocorr_bern20_05_pd[214] = autocorr_bern20_05_pd[213] * x[12];
	v[2] = autocorr_bern20_05_pd[214] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[215] = 96. * x[11];
	autocorr_bern20_05_pd[216] = autocorr_bern20_05_pd[215] * x[13];
	v[1] = autocorr_bern20_05_pd[216] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[217] = 32. * x[11];
	autocorr_bern20_05_pd[218] = autocorr_bern20_05_pd[217] * x[14];
	v[2] = autocorr_bern20_05_pd[218] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[219] = 128. * x[12];
	autocorr_bern20_05_pd[220] = autocorr_bern20_05_pd[219] * x[13];
	v[1] = autocorr_bern20_05_pd[220] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[221] = 96. * x[12];
	autocorr_bern20_05_pd[222] = autocorr_bern20_05_pd[221] * x[13];
	v[2] = autocorr_bern20_05_pd[222] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[223] = 32. * x[12];
	autocorr_bern20_05_pd[224] = autocorr_bern20_05_pd[223] * x[13];
	v[1] = autocorr_bern20_05_pd[224] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[225] = 96. * x[12];
	autocorr_bern20_05_pd[226] = autocorr_bern20_05_pd[225] * x[14];
	v[2] = autocorr_bern20_05_pd[226] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[227] = 32. * x[12];
	autocorr_bern20_05_pd[228] = autocorr_bern20_05_pd[227] * x[15];
	v[1] = autocorr_bern20_05_pd[228] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[229] = 128. * x[13];
	autocorr_bern20_05_pd[230] = autocorr_bern20_05_pd[229] * x[14];
	v[2] = autocorr_bern20_05_pd[230] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[231] = 96. * x[13];
	autocorr_bern20_05_pd[232] = autocorr_bern20_05_pd[231] * x[14];
	v[1] = autocorr_bern20_05_pd[232] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[233] = 32. * x[13];
	autocorr_bern20_05_pd[234] = autocorr_bern20_05_pd[233] * x[14];
	v[2] = autocorr_bern20_05_pd[234] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[235] = 96. * x[13];
	autocorr_bern20_05_pd[236] = autocorr_bern20_05_pd[235] * x[15];
	v[1] = autocorr_bern20_05_pd[236] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[237] = 32. * x[13];
	autocorr_bern20_05_pd[238] = autocorr_bern20_05_pd[237] * x[16];
	v[2] = autocorr_bern20_05_pd[238] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[239] = 128. * x[14];
	autocorr_bern20_05_pd[240] = autocorr_bern20_05_pd[239] * x[15];
	v[1] = autocorr_bern20_05_pd[240] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[241] = 96. * x[14];
	autocorr_bern20_05_pd[242] = autocorr_bern20_05_pd[241] * x[15];
	v[2] = autocorr_bern20_05_pd[242] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[243] = 32. * x[14];
	autocorr_bern20_05_pd[244] = autocorr_bern20_05_pd[243] * x[15];
	v[1] = autocorr_bern20_05_pd[244] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[245] = 96. * x[14];
	autocorr_bern20_05_pd[246] = autocorr_bern20_05_pd[245] * x[16];
	v[2] = autocorr_bern20_05_pd[246] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[247] = 32. * x[14];
	autocorr_bern20_05_pd[248] = autocorr_bern20_05_pd[247] * x[17];
	v[1] = autocorr_bern20_05_pd[248] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[249] = 128. * x[15];
	autocorr_bern20_05_pd[250] = autocorr_bern20_05_pd[249] * x[16];
	v[2] = autocorr_bern20_05_pd[250] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[251] = 96. * x[15];
	autocorr_bern20_05_pd[252] = autocorr_bern20_05_pd[251] * x[16];
	v[1] = autocorr_bern20_05_pd[252] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[253] = 32. * x[15];
	autocorr_bern20_05_pd[254] = autocorr_bern20_05_pd[253] * x[16];
	v[2] = autocorr_bern20_05_pd[254] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[255] = 96. * x[15];
	autocorr_bern20_05_pd[256] = autocorr_bern20_05_pd[255] * x[17];
	v[1] = autocorr_bern20_05_pd[256] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[257] = 32. * x[15];
	autocorr_bern20_05_pd[258] = autocorr_bern20_05_pd[257] * x[18];
	v[2] = autocorr_bern20_05_pd[258] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[259] = 96. * x[16];
	autocorr_bern20_05_pd[260] = autocorr_bern20_05_pd[259] * x[17];
	v[1] = autocorr_bern20_05_pd[260] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[261] = 32. * x[16];
	autocorr_bern20_05_pd[262] = autocorr_bern20_05_pd[261] * x[17];
	v[2] = autocorr_bern20_05_pd[262] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[263] = 64. * x[16];
	autocorr_bern20_05_pd[264] = autocorr_bern20_05_pd[263] * x[18];
	v[1] = autocorr_bern20_05_pd[264] * x[19];
	v[2] = -v[1];
	v[0] += v[2];
	autocorr_bern20_05_pd[265] = 32. * x[17];
	autocorr_bern20_05_pd[266] = autocorr_bern20_05_pd[265] * x[18];
	v[2] = autocorr_bern20_05_pd[266] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[267] = 32. * x[0];
	v[1] = autocorr_bern20_05_pd[267] * x[1];
	v[0] += v[1];
	autocorr_bern20_05_pd[268] = 24. * x[0];
	v[1] = autocorr_bern20_05_pd[268] * x[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[269] = 32. * x[0];
	v[1] = autocorr_bern20_05_pd[269] * x[3];
	v[0] += v[1];
	autocorr_bern20_05_pd[270] = 24. * x[0];
	v[1] = autocorr_bern20_05_pd[270] * x[4];
	v[0] += v[1];
	autocorr_bern20_05_pd[271] = 64. * x[1];
	v[1] = autocorr_bern20_05_pd[271] * x[2];
	v[0] += v[1];
	autocorr_bern20_05_pd[272] = 80. * x[1];
	v[1] = autocorr_bern20_05_pd[272] * x[3];
	v[0] += v[1];
	autocorr_bern20_05_pd[273] = 64. * x[1];
	v[1] = autocorr_bern20_05_pd[273] * x[4];
	v[0] += v[1];
	autocorr_bern20_05_pd[274] = 24. * x[1];
	v[1] = autocorr_bern20_05_pd[274] * x[5];
	v[0] += v[1];
	autocorr_bern20_05_pd[275] = 96. * x[2];
	v[1] = autocorr_bern20_05_pd[275] * x[3];
	v[0] += v[1];
	autocorr_bern20_05_pd[276] = 104. * x[2];
	v[1] = autocorr_bern20_05_pd[276] * x[4];
	v[0] += v[1];
	autocorr_bern20_05_pd[277] = 64. * x[2];
	v[1] = autocorr_bern20_05_pd[277] * x[5];
	v[0] += v[1];
	autocorr_bern20_05_pd[278] = 24. * x[2];
	v[1] = autocorr_bern20_05_pd[278] * x[6];
	v[0] += v[1];
	autocorr_bern20_05_pd[279] = 128. * x[3];
	v[1] = autocorr_bern20_05_pd[279] * x[4];
	v[0] += v[1];
	autocorr_bern20_05_pd[280] = 104. * x[3];
	v[1] = autocorr_bern20_05_pd[280] * x[5];
	v[0] += v[1];
	autocorr_bern20_05_pd[281] = 64. * x[3];
	v[1] = autocorr_bern20_05_pd[281] * x[6];
	v[0] += v[1];
	autocorr_bern20_05_pd[282] = 24. * x[3];
	v[1] = autocorr_bern20_05_pd[282] * x[7];
	v[0] += v[1];
	autocorr_bern20_05_pd[283] = 128. * x[4];
	v[1] = autocorr_bern20_05_pd[283] * x[5];
	v[0] += v[1];
	autocorr_bern20_05_pd[284] = 104. * x[4];
	v[1] = autocorr_bern20_05_pd[284] * x[6];
	v[0] += v[1];
	autocorr_bern20_05_pd[285] = 64. * x[4];
	v[1] = autocorr_bern20_05_pd[285] * x[7];
	v[0] += v[1];
	autocorr_bern20_05_pd[286] = 24. * x[4];
	v[1] = autocorr_bern20_05_pd[286] * x[8];
	v[0] += v[1];
	autocorr_bern20_05_pd[287] = 128. * x[5];
	v[1] = autocorr_bern20_05_pd[287] * x[6];
	v[0] += v[1];
	autocorr_bern20_05_pd[288] = 104. * x[5];
	v[1] = autocorr_bern20_05_pd[288] * x[7];
	v[0] += v[1];
	autocorr_bern20_05_pd[289] = 64. * x[5];
	v[1] = autocorr_bern20_05_pd[289] * x[8];
	v[0] += v[1];
	autocorr_bern20_05_pd[290] = 24. * x[5];
	v[1] = autocorr_bern20_05_pd[290] * x[9];
	v[0] += v[1];
	autocorr_bern20_05_pd[291] = 128. * x[6];
	v[1] = autocorr_bern20_05_pd[291] * x[7];
	v[0] += v[1];
	autocorr_bern20_05_pd[292] = 104. * x[6];
	v[1] = autocorr_bern20_05_pd[292] * x[8];
	v[0] += v[1];
	autocorr_bern20_05_pd[293] = 64. * x[6];
	v[1] = autocorr_bern20_05_pd[293] * x[9];
	v[0] += v[1];
	autocorr_bern20_05_pd[294] = 24. * x[6];
	v[1] = autocorr_bern20_05_pd[294] * x[10];
	v[0] += v[1];
	autocorr_bern20_05_pd[295] = 128. * x[7];
	v[1] = autocorr_bern20_05_pd[295] * x[8];
	v[0] += v[1];
	autocorr_bern20_05_pd[296] = 104. * x[7];
	v[1] = autocorr_bern20_05_pd[296] * x[9];
	v[0] += v[1];
	autocorr_bern20_05_pd[297] = 64. * x[7];
	v[1] = autocorr_bern20_05_pd[297] * x[10];
	v[0] += v[1];
	autocorr_bern20_05_pd[298] = 24. * x[7];
	v[1] = autocorr_bern20_05_pd[298] * x[11];
	v[0] += v[1];
	autocorr_bern20_05_pd[299] = 128. * x[8];
	v[1] = autocorr_bern20_05_pd[299] * x[9];
	v[0] += v[1];
	autocorr_bern20_05_pd[300] = 104. * x[8];
	v[1] = autocorr_bern20_05_pd[300] * x[10];
	v[0] += v[1];
	autocorr_bern20_05_pd[301] = 64. * x[8];
	v[1] = autocorr_bern20_05_pd[301] * x[11];
	v[0] += v[1];
	autocorr_bern20_05_pd[302] = 24. * x[8];
	v[1] = autocorr_bern20_05_pd[302] * x[12];
	v[0] += v[1];
	autocorr_bern20_05_pd[303] = 128. * x[9];
	v[1] = autocorr_bern20_05_pd[303] * x[10];
	v[0] += v[1];
	autocorr_bern20_05_pd[304] = 104. * x[9];
	v[1] = autocorr_bern20_05_pd[304] * x[11];
	v[0] += v[1];
	autocorr_bern20_05_pd[305] = 64. * x[9];
	v[1] = autocorr_bern20_05_pd[305] * x[12];
	v[0] += v[1];
	autocorr_bern20_05_pd[306] = 24. * x[9];
	v[1] = autocorr_bern20_05_pd[306] * x[13];
	v[0] += v[1];
	autocorr_bern20_05_pd[307] = 128. * x[10];
	v[1] = autocorr_bern20_05_pd[307] * x[11];
	v[0] += v[1];
	autocorr_bern20_05_pd[308] = 104. * x[10];
	v[1] = autocorr_bern20_05_pd[308] * x[12];
	v[0] += v[1];
	autocorr_bern20_05_pd[309] = 64. * x[10];
	v[1] = autocorr_bern20_05_pd[309] * x[13];
	v[0] += v[1];
	autocorr_bern20_05_pd[310] = 24. * x[10];
	v[1] = autocorr_bern20_05_pd[310] * x[14];
	v[0] += v[1];
	autocorr_bern20_05_pd[311] = 128. * x[11];
	v[1] = autocorr_bern20_05_pd[311] * x[12];
	v[0] += v[1];
	autocorr_bern20_05_pd[312] = 104. * x[11];
	v[1] = autocorr_bern20_05_pd[312] * x[13];
	v[0] += v[1];
	autocorr_bern20_05_pd[313] = 64. * x[11];
	v[1] = autocorr_bern20_05_pd[313] * x[14];
	v[0] += v[1];
	autocorr_bern20_05_pd[314] = 24. * x[11];
	v[1] = autocorr_bern20_05_pd[314] * x[15];
	v[0] += v[1];
	autocorr_bern20_05_pd[315] = 128. * x[12];
	v[1] = autocorr_bern20_05_pd[315] * x[13];
	v[0] += v[1];
	autocorr_bern20_05_pd[316] = 104. * x[12];
	v[1] = autocorr_bern20_05_pd[316] * x[14];
	v[0] += v[1];
	autocorr_bern20_05_pd[317] = 64. * x[12];
	v[1] = autocorr_bern20_05_pd[317] * x[15];
	v[0] += v[1];
	autocorr_bern20_05_pd[318] = 24. * x[12];
	v[1] = autocorr_bern20_05_pd[318] * x[16];
	v[0] += v[1];
	autocorr_bern20_05_pd[319] = 128. * x[13];
	v[1] = autocorr_bern20_05_pd[319] * x[14];
	v[0] += v[1];
	autocorr_bern20_05_pd[320] = 104. * x[13];
	v[1] = autocorr_bern20_05_pd[320] * x[15];
	v[0] += v[1];
	autocorr_bern20_05_pd[321] = 64. * x[13];
	v[1] = autocorr_bern20_05_pd[321] * x[16];
	v[0] += v[1];
	autocorr_bern20_05_pd[322] = 24. * x[13];
	v[1] = autocorr_bern20_05_pd[322] * x[17];
	v[0] += v[1];
	autocorr_bern20_05_pd[323] = 128. * x[14];
	v[1] = autocorr_bern20_05_pd[323] * x[15];
	v[0] += v[1];
	autocorr_bern20_05_pd[324] = 104. * x[14];
	v[1] = autocorr_bern20_05_pd[324] * x[16];
	v[0] += v[1];
	autocorr_bern20_05_pd[325] = 64. * x[14];
	v[1] = autocorr_bern20_05_pd[325] * x[17];
	v[0] += v[1];
	autocorr_bern20_05_pd[326] = 24. * x[14];
	v[1] = autocorr_bern20_05_pd[326] * x[18];
	v[0] += v[1];
	autocorr_bern20_05_pd[327] = 128. * x[15];
	v[1] = autocorr_bern20_05_pd[327] * x[16];
	v[0] += v[1];
	autocorr_bern20_05_pd[328] = 104. * x[15];
	v[1] = autocorr_bern20_05_pd[328] * x[17];
	v[0] += v[1];
	autocorr_bern20_05_pd[329] = 64. * x[15];
	v[1] = autocorr_bern20_05_pd[329] * x[18];
	v[0] += v[1];
	autocorr_bern20_05_pd[330] = 24. * x[15];
	v[1] = autocorr_bern20_05_pd[330] * x[19];
	v[0] += v[1];
	autocorr_bern20_05_pd[331] = 96. * x[16];
	v[1] = autocorr_bern20_05_pd[331] * x[17];
	v[0] += v[1];
	autocorr_bern20_05_pd[332] = 80. * x[16];
	v[1] = autocorr_bern20_05_pd[332] * x[18];
	v[0] += v[1];
	autocorr_bern20_05_pd[333] = 32. * x[16];
	v[1] = autocorr_bern20_05_pd[333] * x[19];
	v[0] += v[1];
	autocorr_bern20_05_pd[334] = 64. * x[17];
	v[1] = autocorr_bern20_05_pd[334] * x[18];
	v[0] += v[1];
	autocorr_bern20_05_pd[335] = 24. * x[17];
	v[1] = autocorr_bern20_05_pd[335] * x[19];
	v[0] += v[1];
	autocorr_bern20_05_pd[336] = 32. * x[18];
	v[1] = autocorr_bern20_05_pd[336] * x[19];
	v[0] += v[1];
	t1 = v[0] + -24.*x[0];
	t1 += -52.*x[1];
	t1 += -76.*x[2];
	t1 += -104.*x[3];
	t1 += -128.*x[4];
	t1 += -128.*x[5];
	t1 += -128.*x[6];
	t1 += -128.*x[7];
	t1 += -128.*x[8];
	t1 += -128.*x[9];
	t1 += -128.*x[10];
	t1 += -128.*x[11];
	t1 += -128.*x[12];
	t1 += -128.*x[13];
	t1 += -128.*x[14];
	t1 += -128.*x[15];
	t1 += -104.*x[16];
	t1 += -76.*x[17];
	t1 += -52.*x[18];
	t1 += -24.*x[19];
	t1 += -x[20];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[19] = autocorr_bern20_05_pd[336] + -24.;
	J[18] = x[19]*32. + -52.;
	J[19] += autocorr_bern20_05_pd[335];
	J[17] = x[19]*24. + -76.;
	J[18] += autocorr_bern20_05_pd[334];
	J[17] += x[18]*64.;
	J[19] += autocorr_bern20_05_pd[333];
	J[16] = x[19]*32. + -104.;
	J[18] += autocorr_bern20_05_pd[332];
	J[16] += x[18]*80.;
	J[17] += autocorr_bern20_05_pd[331];
	J[16] += x[17]*96.;
	J[19] += autocorr_bern20_05_pd[330];
	J[15] = x[19]*24. + -128.;
	J[18] += autocorr_bern20_05_pd[329];
	J[15] += x[18]*64.;
	J[17] += autocorr_bern20_05_pd[328];
	J[15] += x[17]*104.;
	J[16] += autocorr_bern20_05_pd[327];
	J[15] += x[16]*128.;
	J[18] += autocorr_bern20_05_pd[326];
	J[14] = x[18]*24. + -128.;
	J[17] += autocorr_bern20_05_pd[325];
	J[14] += x[17]*64.;
	J[16] += autocorr_bern20_05_pd[324];
	J[14] += x[16]*104.;
	J[15] += autocorr_bern20_05_pd[323];
	J[14] += x[15]*128.;
	J[17] += autocorr_bern20_05_pd[322];
	J[13] = x[17]*24. + -128.;
	J[16] += autocorr_bern20_05_pd[321];
	J[13] += x[16]*64.;
	J[15] += autocorr_bern20_05_pd[320];
	J[13] += x[15]*104.;
	J[14] += autocorr_bern20_05_pd[319];
	J[13] += x[14]*128.;
	J[16] += autocorr_bern20_05_pd[318];
	J[12] = x[16]*24. + -128.;
	J[15] += autocorr_bern20_05_pd[317];
	J[12] += x[15]*64.;
	J[14] += autocorr_bern20_05_pd[316];
	J[12] += x[14]*104.;
	J[13] += autocorr_bern20_05_pd[315];
	J[12] += x[13]*128.;
	J[15] += autocorr_bern20_05_pd[314];
	J[11] = x[15]*24. + -128.;
	J[14] += autocorr_bern20_05_pd[313];
	J[11] += x[14]*64.;
	J[13] += autocorr_bern20_05_pd[312];
	J[11] += x[13]*104.;
	J[12] += autocorr_bern20_05_pd[311];
	J[11] += x[12]*128.;
	J[14] += autocorr_bern20_05_pd[310];
	J[10] = x[14]*24. + -128.;
	J[13] += autocorr_bern20_05_pd[309];
	J[10] += x[13]*64.;
	J[12] += autocorr_bern20_05_pd[308];
	J[10] += x[12]*104.;
	J[11] += autocorr_bern20_05_pd[307];
	J[10] += x[11]*128.;
	J[13] += autocorr_bern20_05_pd[306];
	J[9] = x[13]*24. + -128.;
	J[12] += autocorr_bern20_05_pd[305];
	J[9] += x[12]*64.;
	J[11] += autocorr_bern20_05_pd[304];
	J[9] += x[11]*104.;
	J[10] += autocorr_bern20_05_pd[303];
	J[9] += x[10]*128.;
	J[12] += autocorr_bern20_05_pd[302];
	J[8] = x[12]*24. + -128.;
	J[11] += autocorr_bern20_05_pd[301];
	J[8] += x[11]*64.;
	J[10] += autocorr_bern20_05_pd[300];
	J[8] += x[10]*104.;
	J[9] += autocorr_bern20_05_pd[299];
	J[8] += x[9]*128.;
	J[11] += autocorr_bern20_05_pd[298];
	J[7] = x[11]*24. + -128.;
	J[10] += autocorr_bern20_05_pd[297];
	J[7] += x[10]*64.;
	J[9] += autocorr_bern20_05_pd[296];
	J[7] += x[9]*104.;
	J[8] += autocorr_bern20_05_pd[295];
	J[7] += x[8]*128.;
	J[10] += autocorr_bern20_05_pd[294];
	J[6] = x[10]*24. + -128.;
	J[9] += autocorr_bern20_05_pd[293];
	J[6] += x[9]*64.;
	J[8] += autocorr_bern20_05_pd[292];
	J[6] += x[8]*104.;
	J[7] += autocorr_bern20_05_pd[291];
	J[6] += x[7]*128.;
	J[9] += autocorr_bern20_05_pd[290];
	J[5] = x[9]*24. + -128.;
	J[8] += autocorr_bern20_05_pd[289];
	J[5] += x[8]*64.;
	J[7] += autocorr_bern20_05_pd[288];
	J[5] += x[7]*104.;
	J[6] += autocorr_bern20_05_pd[287];
	J[5] += x[6]*128.;
	J[8] += autocorr_bern20_05_pd[286];
	J[4] = x[8]*24. + -128.;
	J[7] += autocorr_bern20_05_pd[285];
	J[4] += x[7]*64.;
	J[6] += autocorr_bern20_05_pd[284];
	J[4] += x[6]*104.;
	J[5] += autocorr_bern20_05_pd[283];
	J[4] += x[5]*128.;
	J[7] += autocorr_bern20_05_pd[282];
	J[3] = x[7]*24. + -104.;
	J[6] += autocorr_bern20_05_pd[281];
	J[3] += x[6]*64.;
	J[5] += autocorr_bern20_05_pd[280];
	J[3] += x[5]*104.;
	J[4] += autocorr_bern20_05_pd[279];
	J[3] += x[4]*128.;
	J[6] += autocorr_bern20_05_pd[278];
	J[2] = x[6]*24. + -76.;
	J[5] += autocorr_bern20_05_pd[277];
	J[2] += x[5]*64.;
	J[4] += autocorr_bern20_05_pd[276];
	J[2] += x[4]*104.;
	J[3] += autocorr_bern20_05_pd[275];
	J[2] += x[3]*96.;
	J[5] += autocorr_bern20_05_pd[274];
	J[1] = x[5]*24. + -52.;
	J[4] += autocorr_bern20_05_pd[273];
	J[1] += x[4]*64.;
	J[3] += autocorr_bern20_05_pd[272];
	J[1] += x[3]*80.;
	J[2] += autocorr_bern20_05_pd[271];
	J[1] += x[2]*64.;
	J[4] += autocorr_bern20_05_pd[270];
	J[0] = x[4]*24. + -24.;
	J[3] += autocorr_bern20_05_pd[269];
	J[0] += x[3]*32.;
	J[2] += autocorr_bern20_05_pd[268];
	J[0] += x[2]*24.;
	J[1] += autocorr_bern20_05_pd[267];
	J[0] += x[1]*32.;
	J[19] -= autocorr_bern20_05_pd[266];
	J[18] -= x[19]*autocorr_bern20_05_pd[265];
	dv[0] = -x[19]*x[18];
	J[17] += dv[0]*32.;
	J[19] -= autocorr_bern20_05_pd[264];
	J[18] -= x[19]*autocorr_bern20_05_pd[263];
	dv[1] = -x[19]*x[18];
	J[16] += dv[1]*64.;
	J[19] -= autocorr_bern20_05_pd[262];
	J[17] -= x[19]*autocorr_bern20_05_pd[261];
	dv[2] = -x[19]*x[17];
	J[16] += dv[2]*32.;
	J[18] -= autocorr_bern20_05_pd[260];
	J[17] -= x[18]*autocorr_bern20_05_pd[259];
	dv[3] = -x[18]*x[17];
	J[16] += dv[3]*96.;
	J[19] -= autocorr_bern20_05_pd[258];
	J[18] -= x[19]*autocorr_bern20_05_pd[257];
	dv[4] = -x[19]*x[18];
	J[15] += dv[4]*32.;
	J[18] -= autocorr_bern20_05_pd[256];
	J[17] -= x[18]*autocorr_bern20_05_pd[255];
	dv[5] = -x[18]*x[17];
	J[15] += dv[5]*96.;
	J[19] -= autocorr_bern20_05_pd[254];
	J[16] -= x[19]*autocorr_bern20_05_pd[253];
	dv[6] = -x[19]*x[16];
	J[15] += dv[6]*32.;
	J[18] -= autocorr_bern20_05_pd[252];
	J[16] -= x[18]*autocorr_bern20_05_pd[251];
	dv[7] = -x[18]*x[16];
	J[15] += dv[7]*96.;
	J[17] -= autocorr_bern20_05_pd[250];
	J[16] -= x[17]*autocorr_bern20_05_pd[249];
	dv[8] = -x[17]*x[16];
	J[15] += dv[8]*128.;
	J[18] -= autocorr_bern20_05_pd[248];
	J[17] -= x[18]*autocorr_bern20_05_pd[247];
	dv[9] = -x[18]*x[17];
	J[14] += dv[9]*32.;
	J[17] -= autocorr_bern20_05_pd[246];
	J[16] -= x[17]*autocorr_bern20_05_pd[245];
	dv[10] = -x[17]*x[16];
	J[14] += dv[10]*96.;
	J[18] -= autocorr_bern20_05_pd[244];
	J[15] -= x[18]*autocorr_bern20_05_pd[243];
	dv[11] = -x[18]*x[15];
	J[14] += dv[11]*32.;
	J[17] -= autocorr_bern20_05_pd[242];
	J[15] -= x[17]*autocorr_bern20_05_pd[241];
	dv[12] = -x[17]*x[15];
	J[14] += dv[12]*96.;
	J[16] -= autocorr_bern20_05_pd[240];
	J[15] -= x[16]*autocorr_bern20_05_pd[239];
	dv[13] = -x[16]*x[15];
	J[14] += dv[13]*128.;
	J[17] -= autocorr_bern20_05_pd[238];
	J[16] -= x[17]*autocorr_bern20_05_pd[237];
	dv[14] = -x[17]*x[16];
	J[13] += dv[14]*32.;
	J[16] -= autocorr_bern20_05_pd[236];
	J[15] -= x[16]*autocorr_bern20_05_pd[235];
	dv[15] = -x[16]*x[15];
	J[13] += dv[15]*96.;
	J[17] -= autocorr_bern20_05_pd[234];
	J[14] -= x[17]*autocorr_bern20_05_pd[233];
	dv[16] = -x[17]*x[14];
	J[13] += dv[16]*32.;
	J[16] -= autocorr_bern20_05_pd[232];
	J[14] -= x[16]*autocorr_bern20_05_pd[231];
	dv[17] = -x[16]*x[14];
	J[13] += dv[17]*96.;
	J[15] -= autocorr_bern20_05_pd[230];
	J[14] -= x[15]*autocorr_bern20_05_pd[229];
	dv[18] = -x[15]*x[14];
	J[13] += dv[18]*128.;
	J[16] -= autocorr_bern20_05_pd[228];
	J[15] -= x[16]*autocorr_bern20_05_pd[227];
	dv[19] = -x[16]*x[15];
	J[12] += dv[19]*32.;
	J[15] -= autocorr_bern20_05_pd[226];
	J[14] -= x[15]*autocorr_bern20_05_pd[225];
	dv[20] = -x[15]*x[14];
	J[12] += dv[20]*96.;
	J[16] -= autocorr_bern20_05_pd[224];
	J[13] -= x[16]*autocorr_bern20_05_pd[223];
	dv[21] = -x[16]*x[13];
	J[12] += dv[21]*32.;
	J[15] -= autocorr_bern20_05_pd[222];
	J[13] -= x[15]*autocorr_bern20_05_pd[221];
	dv[22] = -x[15]*x[13];
	J[12] += dv[22]*96.;
	J[14] -= autocorr_bern20_05_pd[220];
	J[13] -= x[14]*autocorr_bern20_05_pd[219];
	dv[23] = -x[14]*x[13];
	J[12] += dv[23]*128.;
	J[15] -= autocorr_bern20_05_pd[218];
	J[14] -= x[15]*autocorr_bern20_05_pd[217];
	dv[24] = -x[15]*x[14];
	J[11] += dv[24]*32.;
	J[14] -= autocorr_bern20_05_pd[216];
	J[13] -= x[14]*autocorr_bern20_05_pd[215];
	dv[25] = -x[14]*x[13];
	J[11] += dv[25]*96.;
	J[15] -= autocorr_bern20_05_pd[214];
	J[12] -= x[15]*autocorr_bern20_05_pd[213];
	dv[26] = -x[15]*x[12];
	J[11] += dv[26]*32.;
	J[14] -= autocorr_bern20_05_pd[212];
	J[12] -= x[14]*autocorr_bern20_05_pd[211];
	dv[27] = -x[14]*x[12];
	J[11] += dv[27]*96.;
	J[13] -= autocorr_bern20_05_pd[210];
	J[12] -= x[13]*autocorr_bern20_05_pd[209];
	dv[28] = -x[13]*x[12];
	J[11] += dv[28]*128.;
	J[14] -= autocorr_bern20_05_pd[208];
	J[13] -= x[14]*autocorr_bern20_05_pd[207];
	dv[29] = -x[14]*x[13];
	J[10] += dv[29]*32.;
	J[13] -= autocorr_bern20_05_pd[206];
	J[12] -= x[13]*autocorr_bern20_05_pd[205];
	dv[30] = -x[13]*x[12];
	J[10] += dv[30]*96.;
	J[14] -= autocorr_bern20_05_pd[204];
	J[11] -= x[14]*autocorr_bern20_05_pd[203];
	dv[31] = -x[14]*x[11];
	J[10] += dv[31]*32.;
	J[13] -= autocorr_bern20_05_pd[202];
	J[11] -= x[13]*autocorr_bern20_05_pd[201];
	dv[32] = -x[13]*x[11];
	J[10] += dv[32]*96.;
	J[12] -= autocorr_bern20_05_pd[200];
	J[11] -= x[12]*autocorr_bern20_05_pd[199];
	dv[33] = -x[12]*x[11];
	J[10] += dv[33]*128.;
	J[13] -= autocorr_bern20_05_pd[198];
	J[12] -= x[13]*autocorr_bern20_05_pd[197];
	dv[34] = -x[13]*x[12];
	J[9] += dv[34]*32.;
	J[12] -= autocorr_bern20_05_pd[196];
	J[11] -= x[12]*autocorr_bern20_05_pd[195];
	dv[35] = -x[12]*x[11];
	J[9] += dv[35]*96.;
	J[13] -= autocorr_bern20_05_pd[194];
	J[10] -= x[13]*autocorr_bern20_05_pd[193];
	dv[36] = -x[13]*x[10];
	J[9] += dv[36]*32.;
	J[12] -= autocorr_bern20_05_pd[192];
	J[10] -= x[12]*autocorr_bern20_05_pd[191];
	dv[37] = -x[12]*x[10];
	J[9] += dv[37]*96.;
	J[11] -= autocorr_bern20_05_pd[190];
	J[10] -= x[11]*autocorr_bern20_05_pd[189];
	dv[38] = -x[11]*x[10];
	J[9] += dv[38]*128.;
	J[12] -= autocorr_bern20_05_pd[188];
	J[11] -= x[12]*autocorr_bern20_05_pd[187];
	dv[39] = -x[12]*x[11];
	J[8] += dv[39]*32.;
	J[11] -= autocorr_bern20_05_pd[186];
	J[10] -= x[11]*autocorr_bern20_05_pd[185];
	dv[40] = -x[11]*x[10];
	J[8] += dv[40]*96.;
	J[12] -= autocorr_bern20_05_pd[184];
	J[9] -= x[12]*autocorr_bern20_05_pd[183];
	dv[41] = -x[12]*x[9];
	J[8] += dv[41]*32.;
	J[11] -= autocorr_bern20_05_pd[182];
	J[9] -= x[11]*autocorr_bern20_05_pd[181];
	dv[42] = -x[11]*x[9];
	J[8] += dv[42]*96.;
	J[10] -= autocorr_bern20_05_pd[180];
	J[9] -= x[10]*autocorr_bern20_05_pd[179];
	dv[43] = -x[10]*x[9];
	J[8] += dv[43]*128.;
	J[11] -= autocorr_bern20_05_pd[178];
	J[10] -= x[11]*autocorr_bern20_05_pd[177];
	dv[44] = -x[11]*x[10];
	J[7] += dv[44]*32.;
	J[10] -= autocorr_bern20_05_pd[176];
	J[9] -= x[10]*autocorr_bern20_05_pd[175];
	dv[45] = -x[10]*x[9];
	J[7] += dv[45]*96.;
	J[11] -= autocorr_bern20_05_pd[174];
	J[8] -= x[11]*autocorr_bern20_05_pd[173];
	dv[46] = -x[11]*x[8];
	J[7] += dv[46]*32.;
	J[10] -= autocorr_bern20_05_pd[172];
	J[8] -= x[10]*autocorr_bern20_05_pd[171];
	dv[47] = -x[10]*x[8];
	J[7] += dv[47]*96.;
	J[9] -= autocorr_bern20_05_pd[170];
	J[8] -= x[9]*autocorr_bern20_05_pd[169];
	dv[48] = -x[9]*x[8];
	J[7] += dv[48]*128.;
	J[10] -= autocorr_bern20_05_pd[168];
	J[9] -= x[10]*autocorr_bern20_05_pd[167];
	dv[49] = -x[10]*x[9];
	J[6] += dv[49]*32.;
	J[9] -= autocorr_bern20_05_pd[166];
	J[8] -= x[9]*autocorr_bern20_05_pd[165];
	dv[50] = -x[9]*x[8];
	J[6] += dv[50]*96.;
	J[10] -= autocorr_bern20_05_pd[164];
	J[7] -= x[10]*autocorr_bern20_05_pd[163];
	dv[51] = -x[10]*x[7];
	J[6] += dv[51]*32.;
	J[9] -= autocorr_bern20_05_pd[162];
	J[7] -= x[9]*autocorr_bern20_05_pd[161];
	dv[52] = -x[9]*x[7];
	J[6] += dv[52]*96.;
	J[8] -= autocorr_bern20_05_pd[160];
	J[7] -= x[8]*autocorr_bern20_05_pd[159];
	dv[53] = -x[8]*x[7];
	J[6] += dv[53]*128.;
	J[9] -= autocorr_bern20_05_pd[158];
	J[8] -= x[9]*autocorr_bern20_05_pd[157];
	dv[54] = -x[9]*x[8];
	J[5] += dv[54]*32.;
	J[8] -= autocorr_bern20_05_pd[156];
	J[7] -= x[8]*autocorr_bern20_05_pd[155];
	dv[55] = -x[8]*x[7];
	J[5] += dv[55]*96.;
	J[9] -= autocorr_bern20_05_pd[154];
	J[6] -= x[9]*autocorr_bern20_05_pd[153];
	dv[56] = -x[9]*x[6];
	J[5] += dv[56]*32.;
	J[8] -= autocorr_bern20_05_pd[152];
	J[6] -= x[8]*autocorr_bern20_05_pd[151];
	dv[57] = -x[8]*x[6];
	J[5] += dv[57]*96.;
	J[7] -= autocorr_bern20_05_pd[150];
	J[6] -= x[7]*autocorr_bern20_05_pd[149];
	dv[58] = -x[7]*x[6];
	J[5] += dv[58]*128.;
	J[8] -= autocorr_bern20_05_pd[148];
	J[7] -= x[8]*autocorr_bern20_05_pd[147];
	dv[59] = -x[8]*x[7];
	J[4] += dv[59]*32.;
	J[7] -= autocorr_bern20_05_pd[146];
	J[6] -= x[7]*autocorr_bern20_05_pd[145];
	dv[60] = -x[7]*x[6];
	J[4] += dv[60]*96.;
	J[8] -= autocorr_bern20_05_pd[144];
	J[5] -= x[8]*autocorr_bern20_05_pd[143];
	dv[61] = -x[8]*x[5];
	J[4] += dv[61]*32.;
	J[7] -= autocorr_bern20_05_pd[142];
	J[5] -= x[7]*autocorr_bern20_05_pd[141];
	dv[62] = -x[7]*x[5];
	J[4] += dv[62]*96.;
	J[6] -= autocorr_bern20_05_pd[140];
	J[5] -= x[6]*autocorr_bern20_05_pd[139];
	dv[63] = -x[6]*x[5];
	J[4] += dv[63]*128.;
	J[7] -= autocorr_bern20_05_pd[138];
	J[6] -= x[7]*autocorr_bern20_05_pd[137];
	dv[64] = -x[7]*x[6];
	J[3] += dv[64]*32.;
	J[6] -= autocorr_bern20_05_pd[136];
	J[5] -= x[6]*autocorr_bern20_05_pd[135];
	dv[65] = -x[6]*x[5];
	J[3] += dv[65]*96.;
	J[7] -= autocorr_bern20_05_pd[134];
	J[4] -= x[7]*autocorr_bern20_05_pd[133];
	dv[66] = -x[7]*x[4];
	J[3] += dv[66]*32.;
	J[6] -= autocorr_bern20_05_pd[132];
	J[4] -= x[6]*autocorr_bern20_05_pd[131];
	dv[67] = -x[6]*x[4];
	J[3] += dv[67]*96.;
	J[5] -= autocorr_bern20_05_pd[130];
	J[4] -= x[5]*autocorr_bern20_05_pd[129];
	dv[68] = -x[5]*x[4];
	J[3] += dv[68]*128.;
	J[6] -= autocorr_bern20_05_pd[128];
	J[5] -= x[6]*autocorr_bern20_05_pd[127];
	dv[69] = -x[6]*x[5];
	J[2] += dv[69]*32.;
	J[5] -= autocorr_bern20_05_pd[126];
	J[4] -= x[5]*autocorr_bern20_05_pd[125];
	dv[70] = -x[5]*x[4];
	J[2] += dv[70]*96.;
	J[6] -= autocorr_bern20_05_pd[124];
	J[3] -= x[6]*autocorr_bern20_05_pd[123];
	dv[71] = -x[6]*x[3];
	J[2] += dv[71]*32.;
	J[5] -= autocorr_bern20_05_pd[122];
	J[3] -= x[5]*autocorr_bern20_05_pd[121];
	dv[72] = -x[5]*x[3];
	J[2] += dv[72]*96.;
	J[4] -= autocorr_bern20_05_pd[120];
	J[3] -= x[4]*autocorr_bern20_05_pd[119];
	dv[73] = -x[4]*x[3];
	J[2] += dv[73]*128.;
	J[5] -= autocorr_bern20_05_pd[118];
	J[4] -= x[5]*autocorr_bern20_05_pd[117];
	dv[74] = -x[5]*x[4];
	J[1] += dv[74]*32.;
	J[4] -= autocorr_bern20_05_pd[116];
	J[3] -= x[4]*autocorr_bern20_05_pd[115];
	dv[75] = -x[4]*x[3];
	J[1] += dv[75]*96.;
	J[5] -= autocorr_bern20_05_pd[114];
	J[2] -= x[5]*autocorr_bern20_05_pd[113];
	dv[76] = -x[5]*x[2];
	J[1] += dv[76]*32.;
	J[4] -= autocorr_bern20_05_pd[112];
	J[2] -= x[4]*autocorr_bern20_05_pd[111];
	dv[77] = -x[4]*x[2];
	J[1] += dv[77]*96.;
	J[3] -= autocorr_bern20_05_pd[110];
	J[2] -= x[3]*autocorr_bern20_05_pd[109];
	dv[78] = -x[3]*x[2];
	J[1] += dv[78]*96.;
	J[4] -= autocorr_bern20_05_pd[108];
	J[3] -= x[4]*autocorr_bern20_05_pd[107];
	dv[79] = -x[4]*x[3];
	J[0] += dv[79]*32.;
	J[3] -= autocorr_bern20_05_pd[106];
	J[2] -= x[3]*autocorr_bern20_05_pd[105];
	dv[80] = -x[3]*x[2];
	J[0] += dv[80]*32.;
	J[4] -= autocorr_bern20_05_pd[104];
	J[1] -= x[4]*autocorr_bern20_05_pd[103];
	dv[81] = -x[4]*x[1];
	J[0] += dv[81]*32.;
	J[3] -= autocorr_bern20_05_pd[102];
	J[1] -= x[3]*autocorr_bern20_05_pd[101];
	dv[82] = -x[3]*x[1];
	J[0] += dv[82]*64.;
	J[2] -= autocorr_bern20_05_pd[100];
	J[1] -= x[2]*autocorr_bern20_05_pd[99];
	dv[83] = -x[2]*x[1];
	J[0] += dv[83]*32.;
	J[19] += autocorr_bern20_05_pd[98];
	J[18] += x[19]*autocorr_bern20_05_pd[97];
	dv[84] = x[19]*x[18];
	J[17] += dv[84]*autocorr_bern20_05_pd[96];
	dv[84] *= x[17];
	J[16] += dv[84]*64.;
	J[19] += autocorr_bern20_05_pd[95];
	J[18] += x[19]*autocorr_bern20_05_pd[94];
	dv[85] = x[19]*x[18];
	J[16] += dv[85]*autocorr_bern20_05_pd[93];
	dv[85] *= x[16];
	J[15] += dv[85]*64.;
	J[18] += autocorr_bern20_05_pd[92];
	J[17] += x[18]*autocorr_bern20_05_pd[91];
	dv[86] = x[18]*x[17];
	J[16] += dv[86]*autocorr_bern20_05_pd[90];
	dv[86] *= x[16];
	J[15] += dv[86]*128.;
	J[18] += autocorr_bern20_05_pd[89];
	J[17] += x[18]*autocorr_bern20_05_pd[88];
	dv[87] = x[18]*x[17];
	J[15] += dv[87]*autocorr_bern20_05_pd[87];
	dv[87] *= x[15];
	J[14] += dv[87]*64.;
	J[17] += autocorr_bern20_05_pd[86];
	J[16] += x[17]*autocorr_bern20_05_pd[85];
	dv[88] = x[17]*x[16];
	J[15] += dv[88]*autocorr_bern20_05_pd[84];
	dv[88] *= x[15];
	J[14] += dv[88]*128.;
	J[17] += autocorr_bern20_05_pd[83];
	J[16] += x[17]*autocorr_bern20_05_pd[82];
	dv[89] = x[17]*x[16];
	J[14] += dv[89]*autocorr_bern20_05_pd[81];
	dv[89] *= x[14];
	J[13] += dv[89]*64.;
	J[16] += autocorr_bern20_05_pd[80];
	J[15] += x[16]*autocorr_bern20_05_pd[79];
	dv[90] = x[16]*x[15];
	J[14] += dv[90]*autocorr_bern20_05_pd[78];
	dv[90] *= x[14];
	J[13] += dv[90]*128.;
	J[16] += autocorr_bern20_05_pd[77];
	J[15] += x[16]*autocorr_bern20_05_pd[76];
	dv[91] = x[16]*x[15];
	J[13] += dv[91]*autocorr_bern20_05_pd[75];
	dv[91] *= x[13];
	J[12] += dv[91]*64.;
	J[15] += autocorr_bern20_05_pd[74];
	J[14] += x[15]*autocorr_bern20_05_pd[73];
	dv[92] = x[15]*x[14];
	J[13] += dv[92]*autocorr_bern20_05_pd[72];
	dv[92] *= x[13];
	J[12] += dv[92]*128.;
	J[15] += autocorr_bern20_05_pd[71];
	J[14] += x[15]*autocorr_bern20_05_pd[70];
	dv[93] = x[15]*x[14];
	J[12] += dv[93]*autocorr_bern20_05_pd[69];
	dv[93] *= x[12];
	J[11] += dv[93]*64.;
	J[14] += autocorr_bern20_05_pd[68];
	J[13] += x[14]*autocorr_bern20_05_pd[67];
	dv[94] = x[14]*x[13];
	J[12] += dv[94]*autocorr_bern20_05_pd[66];
	dv[94] *= x[12];
	J[11] += dv[94]*128.;
	J[14] += autocorr_bern20_05_pd[65];
	J[13] += x[14]*autocorr_bern20_05_pd[64];
	dv[95] = x[14]*x[13];
	J[11] += dv[95]*autocorr_bern20_05_pd[63];
	dv[95] *= x[11];
	J[10] += dv[95]*64.;
	J[13] += autocorr_bern20_05_pd[62];
	J[12] += x[13]*autocorr_bern20_05_pd[61];
	dv[96] = x[13]*x[12];
	J[11] += dv[96]*autocorr_bern20_05_pd[60];
	dv[96] *= x[11];
	J[10] += dv[96]*128.;
	J[13] += autocorr_bern20_05_pd[59];
	J[12] += x[13]*autocorr_bern20_05_pd[58];
	dv[97] = x[13]*x[12];
	J[10] += dv[97]*autocorr_bern20_05_pd[57];
	dv[97] *= x[10];
	J[9] += dv[97]*64.;
	J[12] += autocorr_bern20_05_pd[56];
	J[11] += x[12]*autocorr_bern20_05_pd[55];
	dv[98] = x[12]*x[11];
	J[10] += dv[98]*autocorr_bern20_05_pd[54];
	dv[98] *= x[10];
	J[9] += dv[98]*128.;
	J[12] += autocorr_bern20_05_pd[53];
	J[11] += x[12]*autocorr_bern20_05_pd[52];
	dv[99] = x[12]*x[11];
	J[9] += dv[99]*autocorr_bern20_05_pd[51];
	dv[99] *= x[9];
	J[8] += dv[99]*64.;
	J[11] += autocorr_bern20_05_pd[50];
	J[10] += x[11]*autocorr_bern20_05_pd[49];
	dv[100] = x[11]*x[10];
	J[9] += dv[100]*autocorr_bern20_05_pd[48];
	dv[100] *= x[9];
	J[8] += dv[100]*128.;
	J[11] += autocorr_bern20_05_pd[47];
	J[10] += x[11]*autocorr_bern20_05_pd[46];
	dv[101] = x[11]*x[10];
	J[8] += dv[101]*autocorr_bern20_05_pd[45];
	dv[101] *= x[8];
	J[7] += dv[101]*64.;
	J[10] += autocorr_bern20_05_pd[44];
	J[9] += x[10]*autocorr_bern20_05_pd[43];
	dv[102] = x[10]*x[9];
	J[8] += dv[102]*autocorr_bern20_05_pd[42];
	dv[102] *= x[8];
	J[7] += dv[102]*128.;
	J[10] += autocorr_bern20_05_pd[41];
	J[9] += x[10]*autocorr_bern20_05_pd[40];
	dv[103] = x[10]*x[9];
	J[7] += dv[103]*autocorr_bern20_05_pd[39];
	dv[103] *= x[7];
	J[6] += dv[103]*64.;
	J[9] += autocorr_bern20_05_pd[38];
	J[8] += x[9]*autocorr_bern20_05_pd[37];
	dv[104] = x[9]*x[8];
	J[7] += dv[104]*autocorr_bern20_05_pd[36];
	dv[104] *= x[7];
	J[6] += dv[104]*128.;
	J[9] += autocorr_bern20_05_pd[35];
	J[8] += x[9]*autocorr_bern20_05_pd[34];
	dv[105] = x[9]*x[8];
	J[6] += dv[105]*autocorr_bern20_05_pd[33];
	dv[105] *= x[6];
	J[5] += dv[105]*64.;
	J[8] += autocorr_bern20_05_pd[32];
	J[7] += x[8]*autocorr_bern20_05_pd[31];
	dv[106] = x[8]*x[7];
	J[6] += dv[106]*autocorr_bern20_05_pd[30];
	dv[106] *= x[6];
	J[5] += dv[106]*128.;
	J[8] += autocorr_bern20_05_pd[29];
	J[7] += x[8]*autocorr_bern20_05_pd[28];
	dv[107] = x[8]*x[7];
	J[5] += dv[107]*autocorr_bern20_05_pd[27];
	dv[107] *= x[5];
	J[4] += dv[107]*64.;
	J[7] += autocorr_bern20_05_pd[26];
	J[6] += x[7]*autocorr_bern20_05_pd[25];
	dv[108] = x[7]*x[6];
	J[5] += dv[108]*autocorr_bern20_05_pd[24];
	dv[108] *= x[5];
	J[4] += dv[108]*128.;
	J[7] += autocorr_bern20_05_pd[23];
	J[6] += x[7]*autocorr_bern20_05_pd[22];
	dv[109] = x[7]*x[6];
	J[4] += dv[109]*autocorr_bern20_05_pd[21];
	dv[109] *= x[4];
	J[3] += dv[109]*64.;
	J[6] += autocorr_bern20_05_pd[20];
	J[5] += x[6]*autocorr_bern20_05_pd[19];
	dv[110] = x[6]*x[5];
	J[4] += dv[110]*autocorr_bern20_05_pd[18];
	dv[110] *= x[4];
	J[3] += dv[110]*128.;
	J[6] += autocorr_bern20_05_pd[17];
	J[5] += x[6]*autocorr_bern20_05_pd[16];
	dv[111] = x[6]*x[5];
	J[3] += dv[111]*autocorr_bern20_05_pd[15];
	dv[111] *= x[3];
	J[2] += dv[111]*64.;
	J[5] += autocorr_bern20_05_pd[14];
	J[4] += x[5]*autocorr_bern20_05_pd[13];
	dv[112] = x[5]*x[4];
	J[3] += dv[112]*autocorr_bern20_05_pd[12];
	dv[112] *= x[3];
	J[2] += dv[112]*128.;
	J[5] += autocorr_bern20_05_pd[11];
	J[4] += x[5]*autocorr_bern20_05_pd[10];
	dv[113] = x[5]*x[4];
	J[2] += dv[113]*autocorr_bern20_05_pd[9];
	dv[113] *= x[2];
	J[1] += dv[113]*64.;
	J[4] += autocorr_bern20_05_pd[8];
	J[3] += x[4]*autocorr_bern20_05_pd[7];
	dv[114] = x[4]*x[3];
	J[2] += dv[114]*autocorr_bern20_05_pd[6];
	dv[114] *= x[2];
	J[1] += dv[114]*128.;
	J[4] += autocorr_bern20_05_pd[5];
	J[3] += x[4]*autocorr_bern20_05_pd[4];
	dv[115] = x[4]*x[3];
	J[1] += dv[115]*autocorr_bern20_05_pd[3];
	dv[115] *= x[1];
	J[0] += dv[115]*64.;
	J[3] += autocorr_bern20_05_pd[2];
	J[2] += x[3]*autocorr_bern20_05_pd[1];
	dv[116] = x[3]*x[2];
	J[1] += dv[116]*autocorr_bern20_05_pd[0];
	dv[116] *= x[1];
	J[0] += dv[116]*64.;
	J[20] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
