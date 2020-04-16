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
 fint hmittelman_auxcom_[1] = { 7 /* nlc */ };
 fint hmittelman_funcom_[130] = {
	16 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	107 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	22,
	29,
	36,
	43,
	50,
	57,
	64,
	71,
	78,
	83,
	90,
	97,
	104,
	108,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	3,
	4,
	6 };

 real hmittelman_boundc_[1+32+14] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		-2.,
		-1.7e308,
		-1.,
		-1.7e308,
		-1.,
		-1.7e308,
		1.,
		-1.7e308,
		-3.,
		-1.7e308,
		-7.,
		-1.7e308,
		-1.};

 real hmittelman_x0comn_[16] = {
		0.171747132,
		0.843266708,
		0.550375356,
		0.301137904,
		0.292212117,
		0.224052867,
		0.349830504,
		0.998117627,
		0.578733378,
		0.991133039,
		0.130692483,
		0.639718759,
		0.250080533,
		0.668928609,
		0.435356381,
		0.159517864 };

 static real hmittelman_pd[187];
static real hmittelman_old_x[16];
static int hmittelman_xkind = -1;

 static int
hmittelman_xcheck(real *x)
{
	real *x1 = hmittelman_old_x, *xe = x + 16;
	errno = 0;
	if (hmittelman_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hmittelman_xkind = 0;
	return 1;
	}
 real
hmittelman_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[9];
	fint wantfg = *needfg;
	if (hmittelman_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	hmittelman_pd[154] = 10. * x[4];
	hmittelman_pd[155] = hmittelman_pd[154] * x[6];
	hmittelman_pd[156] = hmittelman_pd[155] * x[8];
	hmittelman_pd[157] = hmittelman_pd[156] * x[9];
	hmittelman_pd[158] = hmittelman_pd[157] * x[12];
	hmittelman_pd[159] = hmittelman_pd[158] * x[13];
	v[0] = hmittelman_pd[159] * x[14];
	hmittelman_pd[160] = 7. * x[0];
	hmittelman_pd[161] = hmittelman_pd[160] * x[1];
	hmittelman_pd[162] = hmittelman_pd[161] * x[2];
	hmittelman_pd[163] = hmittelman_pd[162] * x[3];
	hmittelman_pd[164] = hmittelman_pd[163] * x[7];
	v[1] = hmittelman_pd[164] * x[10];
	v[0] += v[1];
	hmittelman_pd[165] = x[2] * x[3];
	hmittelman_pd[166] = hmittelman_pd[165] * x[5];
	hmittelman_pd[167] = hmittelman_pd[166] * x[6];
	v[1] = hmittelman_pd[167] * x[7];
	v[0] += v[1];
	hmittelman_pd[168] = 12. * x[2];
	hmittelman_pd[169] = hmittelman_pd[168] * x[3];
	hmittelman_pd[170] = hmittelman_pd[169] * x[7];
	v[1] = hmittelman_pd[170] * x[10];
	v[0] += v[1];
	hmittelman_pd[171] = 8. * x[5];
	hmittelman_pd[172] = hmittelman_pd[171] * x[6];
	hmittelman_pd[173] = hmittelman_pd[172] * x[7];
	v[1] = hmittelman_pd[173] * x[11];
	v[0] += v[1];
	hmittelman_pd[174] = 3. * x[5];
	hmittelman_pd[175] = hmittelman_pd[174] * x[6];
	hmittelman_pd[176] = hmittelman_pd[175] * x[8];
	hmittelman_pd[177] = hmittelman_pd[176] * x[12];
	v[1] = hmittelman_pd[177] * x[14];
	v[0] += v[1];
	hmittelman_pd[178] = x[8] * x[9];
	hmittelman_pd[179] = hmittelman_pd[178] * x[12];
	v[1] = hmittelman_pd[179] * x[14];
	v[0] += v[1];
	hmittelman_pd[180] = 5. * x[4];
	hmittelman_pd[181] = hmittelman_pd[180] * x[9];
	hmittelman_pd[182] = hmittelman_pd[181] * x[12];
	hmittelman_pd[183] = hmittelman_pd[182] * x[13];
	v[1] = hmittelman_pd[183] * x[14];
	v[0] += v[1];
	hmittelman_pd[184] = 3. * x[0];
	hmittelman_pd[185] = hmittelman_pd[184] * x[1];
	hmittelman_pd[186] = hmittelman_pd[185] * x[10];
	v[1] = hmittelman_pd[186] * x[11];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[11] = hmittelman_pd[186];
	g[10] = x[11]*hmittelman_pd[185];
	dv[0] = x[11]*x[10];
	g[1] = dv[0]*hmittelman_pd[184];
	dv[0] *= x[1];
	g[0] = dv[0]*3.;
	g[14] = hmittelman_pd[183];
	g[13] = x[14]*hmittelman_pd[182];
	dv[1] = x[14]*x[13];
	g[12] = dv[1]*hmittelman_pd[181];
	dv[1] *= x[12];
	g[9] = dv[1]*hmittelman_pd[180];
	dv[1] *= x[9];
	g[4] = dv[1]*5.;
	g[14] += hmittelman_pd[179];
	g[12] += x[14]*hmittelman_pd[178];
	dv[2] = x[14]*x[12];
	g[9] += dv[2]*x[8];
	g[8] = dv[2]*x[9];
	g[14] += hmittelman_pd[177];
	g[12] += x[14]*hmittelman_pd[176];
	dv[3] = x[14]*x[12];
	g[8] += dv[3]*hmittelman_pd[175];
	dv[3] *= x[8];
	g[6] = dv[3]*hmittelman_pd[174];
	dv[3] *= x[6];
	g[5] = dv[3]*3.;
	g[11] += hmittelman_pd[173];
	g[7] = x[11]*hmittelman_pd[172];
	dv[4] = x[11]*x[7];
	g[6] += dv[4]*hmittelman_pd[171];
	dv[4] *= x[6];
	g[5] += dv[4]*8.;
	g[10] += hmittelman_pd[170];
	g[7] += x[10]*hmittelman_pd[169];
	dv[5] = x[10]*x[7];
	g[3] = dv[5]*hmittelman_pd[168];
	dv[5] *= x[3];
	g[2] = dv[5]*12.;
	g[7] += hmittelman_pd[167];
	g[6] += x[7]*hmittelman_pd[166];
	dv[6] = x[7]*x[6];
	g[5] += dv[6]*hmittelman_pd[165];
	dv[6] *= x[5];
	g[3] += dv[6]*x[2];
	g[2] += dv[6]*x[3];
	g[10] += hmittelman_pd[164];
	g[7] += x[10]*hmittelman_pd[163];
	dv[7] = x[10]*x[7];
	g[3] += dv[7]*hmittelman_pd[162];
	dv[7] *= x[3];
	g[2] += dv[7]*hmittelman_pd[161];
	dv[7] *= x[2];
	g[1] += dv[7]*hmittelman_pd[160];
	dv[7] *= x[1];
	g[0] += dv[7]*7.;
	g[14] += hmittelman_pd[159];
	g[13] += x[14]*hmittelman_pd[158];
	dv[8] = x[14]*x[13];
	g[12] += dv[8]*hmittelman_pd[157];
	dv[8] *= x[12];
	g[9] += dv[8]*hmittelman_pd[156];
	dv[8] *= x[9];
	g[8] += dv[8]*hmittelman_pd[155];
	dv[8] *= x[8];
	g[6] += dv[8]*hmittelman_pd[154];
	dv[8] *= x[6];
	g[4] += dv[8]*10.;
	}

	return v[0];
}

 void
hmittelman_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[7];
	fint wantfg = *needfg;
	if (hmittelman_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	hmittelman_pd[0] = 3. * x[4];
	hmittelman_pd[1] = hmittelman_pd[0] * x[6];
	hmittelman_pd[2] = hmittelman_pd[1] * x[8];
	hmittelman_pd[3] = hmittelman_pd[2] * x[9];
	hmittelman_pd[4] = hmittelman_pd[3] * x[12];
	hmittelman_pd[5] = hmittelman_pd[4] * x[13];
	v[0] = hmittelman_pd[5] * x[14];
	hmittelman_pd[6] = 12. * x[0];
	hmittelman_pd[7] = hmittelman_pd[6] * x[1];
	hmittelman_pd[8] = hmittelman_pd[7] * x[2];
	hmittelman_pd[9] = hmittelman_pd[8] * x[3];
	hmittelman_pd[10] = hmittelman_pd[9] * x[7];
	v[1] = hmittelman_pd[10] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	hmittelman_pd[11] = 8. * x[2];
	hmittelman_pd[12] = hmittelman_pd[11] * x[3];
	hmittelman_pd[13] = hmittelman_pd[12] * x[5];
	hmittelman_pd[14] = hmittelman_pd[13] * x[6];
	v[2] = hmittelman_pd[14] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	hmittelman_pd[15] = x[2] * x[3];
	hmittelman_pd[16] = hmittelman_pd[15] * x[7];
	v[1] = hmittelman_pd[16] * x[10];
	v[0] += v[1];
	hmittelman_pd[17] = 7. * x[0];
	hmittelman_pd[18] = hmittelman_pd[17] * x[1];
	hmittelman_pd[19] = hmittelman_pd[18] * x[10];
	v[1] = hmittelman_pd[19] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	hmittelman_pd[20] = 2. * x[15];
	hmittelman_pd[21] = hmittelman_pd[20] * x[12];
	hmittelman_pd[22] = hmittelman_pd[21] * x[13];
	v[2] = hmittelman_pd[22] * x[14];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	hmittelman_pd[23] = x[0] * x[1];
	hmittelman_pd[24] = hmittelman_pd[23] * x[2];
	hmittelman_pd[25] = hmittelman_pd[24] * x[3];
	hmittelman_pd[26] = hmittelman_pd[25] * x[7];
	v[0] = hmittelman_pd[26] * x[10];
	hmittelman_pd[27] = 10. * x[2];
	hmittelman_pd[28] = hmittelman_pd[27] * x[3];
	hmittelman_pd[29] = hmittelman_pd[28] * x[5];
	hmittelman_pd[30] = hmittelman_pd[29] * x[6];
	v[1] = hmittelman_pd[30] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	hmittelman_pd[31] = 5. * x[5];
	hmittelman_pd[32] = hmittelman_pd[31] * x[6];
	hmittelman_pd[33] = hmittelman_pd[32] * x[7];
	v[2] = hmittelman_pd[33] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	hmittelman_pd[34] = x[5] * x[6];
	hmittelman_pd[35] = hmittelman_pd[34] * x[8];
	hmittelman_pd[36] = hmittelman_pd[35] * x[12];
	v[1] = hmittelman_pd[36] * x[14];
	v[0] += v[1];
	hmittelman_pd[37] = 7. * x[8];
	hmittelman_pd[38] = hmittelman_pd[37] * x[9];
	hmittelman_pd[39] = hmittelman_pd[38] * x[12];
	v[1] = hmittelman_pd[39] * x[14];
	v[0] += v[1];
	hmittelman_pd[40] = x[4] * x[9];
	hmittelman_pd[41] = hmittelman_pd[40] * x[12];
	hmittelman_pd[42] = hmittelman_pd[41] * x[13];
	v[1] = hmittelman_pd[42] * x[14];
	v[0] += v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	hmittelman_pd[43] = 5. * x[4];
	hmittelman_pd[44] = hmittelman_pd[43] * x[6];
	hmittelman_pd[45] = hmittelman_pd[44] * x[8];
	hmittelman_pd[46] = hmittelman_pd[45] * x[9];
	hmittelman_pd[47] = hmittelman_pd[46] * x[12];
	hmittelman_pd[48] = hmittelman_pd[47] * x[13];
	v[0] = hmittelman_pd[48] * x[14];
	hmittelman_pd[49] = 3. * x[0];
	hmittelman_pd[50] = hmittelman_pd[49] * x[1];
	hmittelman_pd[51] = hmittelman_pd[50] * x[2];
	hmittelman_pd[52] = hmittelman_pd[51] * x[3];
	hmittelman_pd[53] = hmittelman_pd[52] * x[7];
	v[1] = hmittelman_pd[53] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	hmittelman_pd[54] = x[2] * x[3];
	hmittelman_pd[55] = hmittelman_pd[54] * x[5];
	hmittelman_pd[56] = hmittelman_pd[55] * x[6];
	v[2] = hmittelman_pd[56] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	hmittelman_pd[57] = 2. * x[4];
	hmittelman_pd[58] = hmittelman_pd[57] * x[9];
	hmittelman_pd[59] = hmittelman_pd[58] * x[12];
	hmittelman_pd[60] = hmittelman_pd[59] * x[13];
	v[1] = hmittelman_pd[60] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	hmittelman_pd[61] = x[15] * x[12];
	hmittelman_pd[62] = hmittelman_pd[61] * x[13];
	v[2] = hmittelman_pd[62] * x[14];
	v[0] += v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	hmittelman_pd[63] = 3. * x[0];
	hmittelman_pd[64] = hmittelman_pd[63] * x[1];
	hmittelman_pd[65] = hmittelman_pd[64] * x[2];
	hmittelman_pd[66] = hmittelman_pd[65] * x[3];
	hmittelman_pd[67] = hmittelman_pd[66] * x[7];
	v[0] = hmittelman_pd[67] * x[10];
	hmittelman_pd[68] = 5. * x[4];
	hmittelman_pd[69] = hmittelman_pd[68] * x[6];
	hmittelman_pd[70] = hmittelman_pd[69] * x[8];
	hmittelman_pd[71] = hmittelman_pd[70] * x[9];
	hmittelman_pd[72] = hmittelman_pd[71] * x[12];
	hmittelman_pd[73] = hmittelman_pd[72] * x[13];
	v[1] = hmittelman_pd[73] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	hmittelman_pd[74] = x[2] * x[3];
	hmittelman_pd[75] = hmittelman_pd[74] * x[5];
	hmittelman_pd[76] = hmittelman_pd[75] * x[6];
	v[2] = hmittelman_pd[76] * x[7];
	v[0] += v[2];
	hmittelman_pd[77] = 2. * x[4];
	hmittelman_pd[78] = hmittelman_pd[77] * x[9];
	hmittelman_pd[79] = hmittelman_pd[78] * x[12];
	hmittelman_pd[80] = hmittelman_pd[79] * x[13];
	v[2] = hmittelman_pd[80] * x[14];
	v[0] += v[2];
	hmittelman_pd[81] = x[15] * x[12];
	hmittelman_pd[82] = hmittelman_pd[81] * x[13];
	v[2] = hmittelman_pd[82] * x[14];
	v[1] = -v[2];
	v[0] += v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	hmittelman_pd[83] = -4. * x[2];
	hmittelman_pd[84] = hmittelman_pd[83] * x[3];
	hmittelman_pd[85] = hmittelman_pd[84] * x[5];
	hmittelman_pd[86] = hmittelman_pd[85] * x[6];
	v[0] = hmittelman_pd[86] * x[7];
	v[1] = -v[0];
	hmittelman_pd[87] = 2. * x[2];
	hmittelman_pd[88] = hmittelman_pd[87] * x[3];
	hmittelman_pd[89] = hmittelman_pd[88] * x[7];
	v[0] = hmittelman_pd[89] * x[10];
	v[1] += v[0];
	hmittelman_pd[90] = 5. * x[5];
	hmittelman_pd[91] = hmittelman_pd[90] * x[6];
	hmittelman_pd[92] = hmittelman_pd[91] * x[8];
	hmittelman_pd[93] = hmittelman_pd[92] * x[12];
	v[0] = hmittelman_pd[93] * x[14];
	v[1] += v[0];
	hmittelman_pd[94] = x[8] * x[9];
	hmittelman_pd[95] = hmittelman_pd[94] * x[12];
	v[0] = hmittelman_pd[95] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	hmittelman_pd[96] = 9. * x[4];
	hmittelman_pd[97] = hmittelman_pd[96] * x[9];
	hmittelman_pd[98] = hmittelman_pd[97] * x[12];
	hmittelman_pd[99] = hmittelman_pd[98] * x[13];
	v[2] = hmittelman_pd[99] * x[14];
	v[1] += v[2];
	hmittelman_pd[100] = 2. * x[0];
	hmittelman_pd[101] = hmittelman_pd[100] * x[1];
	hmittelman_pd[102] = hmittelman_pd[101] * x[10];
	v[2] = hmittelman_pd[102] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	c[4] = v[2];

  /***  constraint 6  ***/

	hmittelman_pd[103] = 9. * x[0];
	hmittelman_pd[104] = hmittelman_pd[103] * x[1];
	hmittelman_pd[105] = hmittelman_pd[104] * x[2];
	hmittelman_pd[106] = hmittelman_pd[105] * x[3];
	hmittelman_pd[107] = hmittelman_pd[106] * x[7];
	v[0] = hmittelman_pd[107] * x[10];
	hmittelman_pd[108] = 12. * x[2];
	hmittelman_pd[109] = hmittelman_pd[108] * x[3];
	hmittelman_pd[110] = hmittelman_pd[109] * x[7];
	v[1] = hmittelman_pd[110] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	hmittelman_pd[111] = 7. * x[5];
	hmittelman_pd[112] = hmittelman_pd[111] * x[6];
	hmittelman_pd[113] = hmittelman_pd[112] * x[7];
	v[2] = hmittelman_pd[113] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	hmittelman_pd[114] = 6. * x[5];
	hmittelman_pd[115] = hmittelman_pd[114] * x[6];
	hmittelman_pd[116] = hmittelman_pd[115] * x[8];
	hmittelman_pd[117] = hmittelman_pd[116] * x[12];
	v[1] = hmittelman_pd[117] * x[14];
	v[0] += v[1];
	hmittelman_pd[118] = 2. * x[4];
	hmittelman_pd[119] = hmittelman_pd[118] * x[9];
	hmittelman_pd[120] = hmittelman_pd[119] * x[12];
	hmittelman_pd[121] = hmittelman_pd[120] * x[13];
	v[1] = hmittelman_pd[121] * x[14];
	v[0] += v[1];
	hmittelman_pd[122] = 15. * x[0];
	hmittelman_pd[123] = hmittelman_pd[122] * x[1];
	hmittelman_pd[124] = hmittelman_pd[123] * x[10];
	v[1] = hmittelman_pd[124] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	hmittelman_pd[125] = 3. * x[15];
	hmittelman_pd[126] = hmittelman_pd[125] * x[12];
	hmittelman_pd[127] = hmittelman_pd[126] * x[13];
	v[2] = hmittelman_pd[127] * x[14];
	v[0] += v[2];
	c[5] = v[0];

  /***  constraint 7  ***/

	hmittelman_pd[128] = 5. * x[0];
	hmittelman_pd[129] = hmittelman_pd[128] * x[1];
	hmittelman_pd[130] = hmittelman_pd[129] * x[2];
	hmittelman_pd[131] = hmittelman_pd[130] * x[3];
	hmittelman_pd[132] = hmittelman_pd[131] * x[7];
	v[0] = hmittelman_pd[132] * x[10];
	v[1] = -v[0];
	hmittelman_pd[133] = 8. * x[4];
	hmittelman_pd[134] = hmittelman_pd[133] * x[6];
	hmittelman_pd[135] = hmittelman_pd[134] * x[8];
	hmittelman_pd[136] = hmittelman_pd[135] * x[9];
	hmittelman_pd[137] = hmittelman_pd[136] * x[12];
	hmittelman_pd[138] = hmittelman_pd[137] * x[13];
	v[0] = hmittelman_pd[138] * x[14];
	v[1] += v[0];
	hmittelman_pd[139] = 2. * x[2];
	hmittelman_pd[140] = hmittelman_pd[139] * x[3];
	hmittelman_pd[141] = hmittelman_pd[140] * x[5];
	hmittelman_pd[142] = hmittelman_pd[141] * x[6];
	v[0] = hmittelman_pd[142] * x[7];
	v[2] = -v[0];
	v[1] += v[2];
	hmittelman_pd[143] = 7. * x[2];
	hmittelman_pd[144] = hmittelman_pd[143] * x[3];
	hmittelman_pd[145] = hmittelman_pd[144] * x[7];
	v[2] = hmittelman_pd[145] * x[10];
	v[1] += v[2];
	hmittelman_pd[146] = x[5] * x[6];
	hmittelman_pd[147] = hmittelman_pd[146] * x[7];
	v[2] = hmittelman_pd[147] * x[11];
	v[1] += v[2];
	hmittelman_pd[148] = 5. * x[8];
	hmittelman_pd[149] = hmittelman_pd[148] * x[9];
	hmittelman_pd[150] = hmittelman_pd[149] * x[12];
	v[2] = hmittelman_pd[150] * x[14];
	v[1] += v[2];
	hmittelman_pd[151] = 10. * x[0];
	hmittelman_pd[152] = hmittelman_pd[151] * x[1];
	hmittelman_pd[153] = hmittelman_pd[152] * x[10];
	v[2] = hmittelman_pd[153] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	c[6] = v[2];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[96] = hmittelman_pd[22];
	J[89] = x[14]*hmittelman_pd[21];
	dv[0] = x[14]*x[13];
	J[82] = dv[0]*hmittelman_pd[20];
	dv[0] *= x[12];
	J[103] = dv[0]*2.;
	J[77] = -hmittelman_pd[19];
	J[70] = -x[11]*hmittelman_pd[18];
	dv[1] = -x[11]*x[10];
	J[7] = dv[1]*hmittelman_pd[17];
	dv[1] *= x[1];
	J[0] = dv[1]*7.;
	J[70] += hmittelman_pd[16];
	J[49] = x[10]*hmittelman_pd[15];
	dv[2] = x[10]*x[7];
	J[21] = dv[2]*x[2];
	J[14] = dv[2]*x[3];
	J[49] -= hmittelman_pd[14];
	J[42] = -x[7]*hmittelman_pd[13];
	dv[3] = -x[7]*x[6];
	J[35] = dv[3]*hmittelman_pd[12];
	dv[3] *= x[5];
	J[21] += dv[3]*hmittelman_pd[11];
	dv[3] *= x[3];
	J[14] += dv[3]*8.;
	J[70] -= hmittelman_pd[10];
	J[49] -= x[10]*hmittelman_pd[9];
	dv[4] = -x[10]*x[7];
	J[21] += dv[4]*hmittelman_pd[8];
	dv[4] *= x[3];
	J[14] += dv[4]*hmittelman_pd[7];
	dv[4] *= x[2];
	J[7] += dv[4]*hmittelman_pd[6];
	dv[4] *= x[1];
	J[0] += dv[4]*12.;
	J[96] += hmittelman_pd[5];
	J[89] += x[14]*hmittelman_pd[4];
	dv[5] = x[14]*x[13];
	J[82] += dv[5]*hmittelman_pd[3];
	dv[5] *= x[12];
	J[63] = dv[5]*hmittelman_pd[2];
	dv[5] *= x[9];
	J[56] = dv[5]*hmittelman_pd[1];
	dv[5] *= x[8];
	J[42] += dv[5]*hmittelman_pd[0];
	dv[5] *= x[6];
	J[28] = dv[5]*3.;

   /*** derivatives for constraint 2 ***/

	J[97] = hmittelman_pd[42];
	J[90] = x[14]*hmittelman_pd[41];
	dv[0] = x[14]*x[13];
	J[83] = dv[0]*hmittelman_pd[40];
	dv[0] *= x[12];
	J[64] = dv[0]*x[4];
	J[29] = dv[0]*x[9];
	J[97] += hmittelman_pd[39];
	J[83] += x[14]*hmittelman_pd[38];
	dv[1] = x[14]*x[12];
	J[64] += dv[1]*hmittelman_pd[37];
	dv[1] *= x[9];
	J[57] = dv[1]*7.;
	J[97] += hmittelman_pd[36];
	J[83] += x[14]*hmittelman_pd[35];
	dv[2] = x[14]*x[12];
	J[57] += dv[2]*hmittelman_pd[34];
	dv[2] *= x[8];
	J[43] = dv[2]*x[5];
	J[36] = dv[2]*x[6];
	J[78] = -hmittelman_pd[33];
	J[50] = -x[11]*hmittelman_pd[32];
	dv[3] = -x[11]*x[7];
	J[43] += dv[3]*hmittelman_pd[31];
	dv[3] *= x[6];
	J[36] += dv[3]*5.;
	J[50] -= hmittelman_pd[30];
	J[43] -= x[7]*hmittelman_pd[29];
	dv[4] = -x[7]*x[6];
	J[36] += dv[4]*hmittelman_pd[28];
	dv[4] *= x[5];
	J[22] = dv[4]*hmittelman_pd[27];
	dv[4] *= x[3];
	J[15] = dv[4]*10.;
	J[71] = hmittelman_pd[26];
	J[50] += x[10]*hmittelman_pd[25];
	dv[5] = x[10]*x[7];
	J[22] += dv[5]*hmittelman_pd[24];
	dv[5] *= x[3];
	J[15] += dv[5]*hmittelman_pd[23];
	dv[5] *= x[2];
	J[8] = dv[5]*x[0];
	J[1] = dv[5]*x[1];

   /*** derivatives for constraint 3 ***/

	J[98] = hmittelman_pd[62];
	J[91] = x[14]*hmittelman_pd[61];
	dv[0] = x[14]*x[13];
	J[84] = dv[0]*x[15];
	J[104] = dv[0]*x[12];
	J[98] -= hmittelman_pd[60];
	J[91] -= x[14]*hmittelman_pd[59];
	dv[1] = -x[14]*x[13];
	J[84] += dv[1]*hmittelman_pd[58];
	dv[1] *= x[12];
	J[65] = dv[1]*hmittelman_pd[57];
	dv[1] *= x[9];
	J[30] = dv[1]*2.;
	J[51] = -hmittelman_pd[56];
	J[44] = -x[7]*hmittelman_pd[55];
	dv[2] = -x[7]*x[6];
	J[37] = dv[2]*hmittelman_pd[54];
	dv[2] *= x[5];
	J[23] = dv[2]*x[2];
	J[16] = dv[2]*x[3];
	J[72] = -hmittelman_pd[53];
	J[51] -= x[10]*hmittelman_pd[52];
	dv[3] = -x[10]*x[7];
	J[23] += dv[3]*hmittelman_pd[51];
	dv[3] *= x[3];
	J[16] += dv[3]*hmittelman_pd[50];
	dv[3] *= x[2];
	J[9] = dv[3]*hmittelman_pd[49];
	dv[3] *= x[1];
	J[2] = dv[3]*3.;
	J[98] += hmittelman_pd[48];
	J[91] += x[14]*hmittelman_pd[47];
	dv[4] = x[14]*x[13];
	J[84] += dv[4]*hmittelman_pd[46];
	dv[4] *= x[12];
	J[65] += dv[4]*hmittelman_pd[45];
	dv[4] *= x[9];
	J[58] = dv[4]*hmittelman_pd[44];
	dv[4] *= x[8];
	J[44] += dv[4]*hmittelman_pd[43];
	dv[4] *= x[6];
	J[30] += dv[4]*5.;

   /*** derivatives for constraint 4 ***/

	J[99] = -hmittelman_pd[82];
	J[92] = -x[14]*hmittelman_pd[81];
	dv[0] = -x[14]*x[13];
	J[85] = dv[0]*x[15];
	J[105] = dv[0]*x[12];
	J[99] += hmittelman_pd[80];
	J[92] += x[14]*hmittelman_pd[79];
	dv[1] = x[14]*x[13];
	J[85] += dv[1]*hmittelman_pd[78];
	dv[1] *= x[12];
	J[66] = dv[1]*hmittelman_pd[77];
	dv[1] *= x[9];
	J[31] = dv[1]*2.;
	J[52] = hmittelman_pd[76];
	J[45] = x[7]*hmittelman_pd[75];
	dv[2] = x[7]*x[6];
	J[38] = dv[2]*hmittelman_pd[74];
	dv[2] *= x[5];
	J[24] = dv[2]*x[2];
	J[17] = dv[2]*x[3];
	J[99] -= hmittelman_pd[73];
	J[92] -= x[14]*hmittelman_pd[72];
	dv[3] = -x[14]*x[13];
	J[85] += dv[3]*hmittelman_pd[71];
	dv[3] *= x[12];
	J[66] += dv[3]*hmittelman_pd[70];
	dv[3] *= x[9];
	J[59] = dv[3]*hmittelman_pd[69];
	dv[3] *= x[8];
	J[45] += dv[3]*hmittelman_pd[68];
	dv[3] *= x[6];
	J[31] += dv[3]*5.;
	J[73] = hmittelman_pd[67];
	J[52] += x[10]*hmittelman_pd[66];
	dv[4] = x[10]*x[7];
	J[24] += dv[4]*hmittelman_pd[65];
	dv[4] *= x[3];
	J[17] += dv[4]*hmittelman_pd[64];
	dv[4] *= x[2];
	J[10] = dv[4]*hmittelman_pd[63];
	dv[4] *= x[1];
	J[3] = dv[4]*3.;

   /*** derivatives for constraint 5 ***/

	J[79] = -hmittelman_pd[102];
	J[74] = -x[11]*hmittelman_pd[101];
	dv[0] = -x[11]*x[10];
	J[11] = dv[0]*hmittelman_pd[100];
	dv[0] *= x[1];
	J[4] = dv[0]*2.;
	J[100] = -hmittelman_pd[99];
	J[93] = -x[14]*hmittelman_pd[98];
	dv[1] = -x[14]*x[13];
	J[86] = dv[1]*hmittelman_pd[97];
	dv[1] *= x[12];
	J[67] = dv[1]*hmittelman_pd[96];
	dv[1] *= x[9];
	J[32] = dv[1]*9.;
	J[100] += hmittelman_pd[95];
	J[86] += x[14]*hmittelman_pd[94];
	dv[2] = x[14]*x[12];
	J[67] += dv[2]*x[8];
	J[60] = dv[2]*x[9];
	J[100] -= hmittelman_pd[93];
	J[86] -= x[14]*hmittelman_pd[92];
	dv[3] = -x[14]*x[12];
	J[60] += dv[3]*hmittelman_pd[91];
	dv[3] *= x[8];
	J[46] = dv[3]*hmittelman_pd[90];
	dv[3] *= x[6];
	J[39] = dv[3]*5.;
	J[74] -= hmittelman_pd[89];
	J[53] = -x[10]*hmittelman_pd[88];
	dv[4] = -x[10]*x[7];
	J[25] = dv[4]*hmittelman_pd[87];
	dv[4] *= x[3];
	J[18] = dv[4]*2.;
	J[53] += hmittelman_pd[86];
	J[46] += x[7]*hmittelman_pd[85];
	dv[5] = x[7]*x[6];
	J[39] += dv[5]*hmittelman_pd[84];
	dv[5] *= x[5];
	J[25] += dv[5]*hmittelman_pd[83];
	dv[5] *= x[3];
	J[18] -= dv[5]*4.;

   /*** derivatives for constraint 6 ***/

	J[101] = hmittelman_pd[127];
	J[94] = x[14]*hmittelman_pd[126];
	dv[0] = x[14]*x[13];
	J[87] = dv[0]*hmittelman_pd[125];
	dv[0] *= x[12];
	J[106] = dv[0]*3.;
	J[80] = -hmittelman_pd[124];
	J[75] = -x[11]*hmittelman_pd[123];
	dv[1] = -x[11]*x[10];
	J[12] = dv[1]*hmittelman_pd[122];
	dv[1] *= x[1];
	J[5] = dv[1]*15.;
	J[101] += hmittelman_pd[121];
	J[94] += x[14]*hmittelman_pd[120];
	dv[2] = x[14]*x[13];
	J[87] += dv[2]*hmittelman_pd[119];
	dv[2] *= x[12];
	J[68] = dv[2]*hmittelman_pd[118];
	dv[2] *= x[9];
	J[33] = dv[2]*2.;
	J[101] += hmittelman_pd[117];
	J[87] += x[14]*hmittelman_pd[116];
	dv[3] = x[14]*x[12];
	J[61] = dv[3]*hmittelman_pd[115];
	dv[3] *= x[8];
	J[47] = dv[3]*hmittelman_pd[114];
	dv[3] *= x[6];
	J[40] = dv[3]*6.;
	J[80] -= hmittelman_pd[113];
	J[54] = -x[11]*hmittelman_pd[112];
	dv[4] = -x[11]*x[7];
	J[47] += dv[4]*hmittelman_pd[111];
	dv[4] *= x[6];
	J[40] += dv[4]*7.;
	J[75] -= hmittelman_pd[110];
	J[54] -= x[10]*hmittelman_pd[109];
	dv[5] = -x[10]*x[7];
	J[26] = dv[5]*hmittelman_pd[108];
	dv[5] *= x[3];
	J[19] = dv[5]*12.;
	J[75] += hmittelman_pd[107];
	J[54] += x[10]*hmittelman_pd[106];
	dv[6] = x[10]*x[7];
	J[26] += dv[6]*hmittelman_pd[105];
	dv[6] *= x[3];
	J[19] += dv[6]*hmittelman_pd[104];
	dv[6] *= x[2];
	J[12] += dv[6]*hmittelman_pd[103];
	dv[6] *= x[1];
	J[5] += dv[6]*9.;

   /*** derivatives for constraint 7 ***/

	J[81] = -hmittelman_pd[153];
	J[76] = -x[11]*hmittelman_pd[152];
	dv[0] = -x[11]*x[10];
	J[13] = dv[0]*hmittelman_pd[151];
	dv[0] *= x[1];
	J[6] = dv[0]*10.;
	J[102] = -hmittelman_pd[150];
	J[88] = -x[14]*hmittelman_pd[149];
	dv[1] = -x[14]*x[12];
	J[69] = dv[1]*hmittelman_pd[148];
	dv[1] *= x[9];
	J[62] = dv[1]*5.;
	J[81] -= hmittelman_pd[147];
	J[55] = -x[11]*hmittelman_pd[146];
	dv[2] = -x[11]*x[7];
	J[48] = dv[2]*x[5];
	J[41] = dv[2]*x[6];
	J[76] -= hmittelman_pd[145];
	J[55] -= x[10]*hmittelman_pd[144];
	dv[3] = -x[10]*x[7];
	J[27] = dv[3]*hmittelman_pd[143];
	dv[3] *= x[3];
	J[20] = dv[3]*7.;
	J[55] += hmittelman_pd[142];
	J[48] += x[7]*hmittelman_pd[141];
	dv[4] = x[7]*x[6];
	J[41] += dv[4]*hmittelman_pd[140];
	dv[4] *= x[5];
	J[27] += dv[4]*hmittelman_pd[139];
	dv[4] *= x[3];
	J[20] += dv[4]*2.;
	J[102] -= hmittelman_pd[138];
	J[95] = -x[14]*hmittelman_pd[137];
	dv[5] = -x[14]*x[13];
	J[88] += dv[5]*hmittelman_pd[136];
	dv[5] *= x[12];
	J[69] += dv[5]*hmittelman_pd[135];
	dv[5] *= x[9];
	J[62] += dv[5]*hmittelman_pd[134];
	dv[5] *= x[8];
	J[48] += dv[5]*hmittelman_pd[133];
	dv[5] *= x[6];
	J[34] = dv[5]*8.;
	J[76] += hmittelman_pd[132];
	J[55] += x[10]*hmittelman_pd[131];
	dv[6] = x[10]*x[7];
	J[27] += dv[6]*hmittelman_pd[130];
	dv[6] *= x[3];
	J[20] += dv[6]*hmittelman_pd[129];
	dv[6] *= x[2];
	J[13] += dv[6]*hmittelman_pd[128];
	dv[6] *= x[1];
	J[6] += dv[6]*5.;
	}
}
#ifdef __cplusplus
	}
#endif
