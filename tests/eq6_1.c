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
 fint eq6_1_auxcom_[1] = { 28 /* nlc */ };
 fint eq6_1_funcom_[167] = {
	16 /* nvar */,
	1 /* nobj */,
	60 /* ncon */,
	144 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	10,
	19,
	28,
	37,
	46,
	55,
	64,
	73,
	82,
	91,
	100,
	109,
	118,
	127,
	136,
	145,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	29,
	37,
	1,
	8,
	9,
	10,
	11,
	12,
	13,
	30,
	38,
	2,
	8,
	14,
	15,
	16,
	17,
	18,
	31,
	39,
	3,
	9,
	14,
	19,
	20,
	21,
	22,
	32,
	40,
	4,
	10,
	15,
	19,
	23,
	24,
	25,
	33,
	41,
	5,
	11,
	16,
	20,
	23,
	26,
	27,
	34,
	42,
	6,
	12,
	17,
	21,
	24,
	26,
	28,
	35,
	43,
	7,
	13,
	18,
	22,
	25,
	27,
	28,
	36,
	44,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	45,
	53,
	1,
	8,
	9,
	10,
	11,
	12,
	13,
	46,
	54,
	2,
	8,
	14,
	15,
	16,
	17,
	18,
	47,
	55,
	3,
	9,
	14,
	19,
	20,
	21,
	22,
	48,
	56,
	4,
	10,
	15,
	19,
	23,
	24,
	25,
	49,
	57,
	5,
	11,
	16,
	20,
	23,
	26,
	27,
	50,
	58,
	6,
	12,
	17,
	21,
	24,
	26,
	28,
	51,
	59,
	7,
	13,
	18,
	22,
	25,
	27,
	28,
	52,
	60 };

 real eq6_1_boundc_[1+32+120] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-18.999999,
		18.999999,
		-1.7e308,
		-2.995353,
		-1.7e308,
		-2.532248,
		-1.7e308,
		-2.638959,
		-1.7e308,
		-2.638959,
		-1.7e308,
		-2.121321,
		-1.7e308,
		-1.914214,
		-1.7e308,
		-2.828428,
		-1.7e308,
		-2.699173,
		-1.7e308,
		-2.805884,
		-1.7e308,
		-2.805884,
		-1.7e308,
		-2.288246,
		-1.7e308,
		-2.081139,
		-1.7e308,
		-2.995353,
		-1.7e308,
		-2.342779,
		-1.7e308,
		-2.342779,
		-1.7e308,
		-1.825141,
		-1.7e308,
		-1.618034,
		-1.7e308,
		-2.532248,
		-1.7e308,
		-2.44949,
		-1.7e308,
		-1.931852,
		-1.7e308,
		-1.724745,
		-1.7e308,
		-2.638959,
		-1.7e308,
		-1.931852,
		-1.7e308,
		-1.724745,
		-1.7e308,
		-2.638959,
		-1.7e308,
		-1.207107,
		-1.7e308,
		-2.121321,
		-1.7e308,
		-1.914214,
		-1.7e308,
		1.210786,
		-1.7e308,
		1.043861,
		-1.7e308,
		1.506966,
		-1.7e308,
		1.400255,
		-1.7e308,
		1.400255,
		-1.7e308,
		1.917893,
		-1.7e308,
		2.125,
		-1.7e308,
		1.210786,
		-1.7e308,
		1.210786,
		-1.7e308,
		1.043861,
		-1.7e308,
		1.506966,
		-1.7e308,
		1.400255,
		-1.7e308,
		1.400255,
		-1.7e308,
		1.917893,
		-1.7e308,
		2.125,
		-1.7e308,
		1.210786,
		-1.7e308,
		3.710786,
		-1.7e308,
		3.543861,
		-1.7e308,
		4.006966,
		-1.7e308,
		3.900255,
		-1.7e308,
		3.900255,
		-1.7e308,
		4.417893,
		-1.7e308,
		4.625,
		-1.7e308,
		3.710786,
		-1.7e308,
		3.710786,
		-1.7e308,
		3.543861,
		-1.7e308,
		4.006966,
		-1.7e308,
		3.900255,
		-1.7e308,
		3.900255,
		-1.7e308,
		4.417893,
		-1.7e308,
		4.625,
		-1.7e308,
		3.710786};

 real eq6_1_x0comn_[16] = {
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

 static real eq6_1_pd[152];
static real eq6_1_old_x[16];
static int eq6_1_xkind = -1;

 static int
eq6_1_xcheck(real *x)
{
	real *x1 = eq6_1_old_x, *xe = x + 16;
	errno = 0;
	if (eq6_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	eq6_1_xkind = 0;
	return 1;
	}
 real
eq6_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (eq6_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	eq6_1_pd[84] = 10. * x[1];
	v[0] = eq6_1_pd[84] * x[0];
	eq6_1_pd[85] = x[0] * x[0];
	eq6_1_pd[86] = x[0] + x[0];
	v[1] = 18. * eq6_1_pd[85];
	v[2] = -v[1];
	v[0] += v[2];
	eq6_1_pd[87] = x[1] * x[1];
	eq6_1_pd[88] = x[1] + x[1];
	v[2] = 14. * eq6_1_pd[87];
	v[1] = -v[2];
	v[0] += v[1];
	eq6_1_pd[89] = x[8] * x[8];
	eq6_1_pd[90] = x[8] + x[8];
	v[1] = 18. * eq6_1_pd[89];
	v[2] = -v[1];
	v[0] += v[2];
	eq6_1_pd[91] = 10. * x[9];
	v[2] = eq6_1_pd[91] * x[8];
	v[0] += v[2];
	eq6_1_pd[92] = x[9] * x[9];
	eq6_1_pd[93] = x[9] + x[9];
	v[2] = 14. * eq6_1_pd[92];
	v[1] = -v[2];
	v[0] += v[1];
	eq6_1_pd[94] = 4. * x[2];
	v[1] = eq6_1_pd[94] * x[0];
	v[0] += v[1];
	eq6_1_pd[95] = 6. * x[2];
	v[1] = eq6_1_pd[95] * x[1];
	v[0] += v[1];
	eq6_1_pd[96] = x[2] * x[2];
	eq6_1_pd[97] = x[2] + x[2];
	v[1] = 10. * eq6_1_pd[96];
	v[2] = -v[1];
	v[0] += v[2];
	eq6_1_pd[98] = 4. * x[10];
	v[2] = eq6_1_pd[98] * x[8];
	v[0] += v[2];
	eq6_1_pd[99] = 6. * x[10];
	v[2] = eq6_1_pd[99] * x[9];
	v[0] += v[2];
	eq6_1_pd[100] = x[10] * x[10];
	eq6_1_pd[101] = x[10] + x[10];
	v[2] = 10. * eq6_1_pd[100];
	v[1] = -v[2];
	v[0] += v[1];
	eq6_1_pd[102] = 8. * x[3];
	v[1] = eq6_1_pd[102] * x[0];
	v[0] += v[1];
	eq6_1_pd[103] = x[3] * x[3];
	eq6_1_pd[104] = x[3] + x[3];
	v[1] = 23. * eq6_1_pd[103];
	v[2] = -v[1];
	v[0] += v[2];
	eq6_1_pd[105] = 8. * x[11];
	v[2] = eq6_1_pd[105] * x[8];
	v[0] += v[2];
	eq6_1_pd[106] = x[11] * x[11];
	eq6_1_pd[107] = x[11] + x[11];
	v[2] = 23. * eq6_1_pd[106];
	v[1] = -v[2];
	v[0] += v[1];
	eq6_1_pd[108] = 2. * x[4];
	v[1] = eq6_1_pd[108] * x[0];
	v[0] += v[1];
	eq6_1_pd[109] = 4. * x[4];
	v[1] = eq6_1_pd[109] * x[1];
	v[0] += v[1];
	eq6_1_pd[110] = 10. * x[4];
	v[1] = eq6_1_pd[110] * x[3];
	v[0] += v[1];
	eq6_1_pd[111] = x[4] * x[4];
	eq6_1_pd[112] = x[4] + x[4];
	v[1] = 18. * eq6_1_pd[111];
	v[2] = -v[1];
	v[0] += v[2];
	eq6_1_pd[113] = 2. * x[12];
	v[2] = eq6_1_pd[113] * x[8];
	v[0] += v[2];
	eq6_1_pd[114] = 4. * x[12];
	v[2] = eq6_1_pd[114] * x[9];
	v[0] += v[2];
	eq6_1_pd[115] = 10. * x[12];
	v[2] = eq6_1_pd[115] * x[11];
	v[0] += v[2];
	eq6_1_pd[116] = x[12] * x[12];
	eq6_1_pd[117] = x[12] + x[12];
	v[2] = 18. * eq6_1_pd[116];
	v[1] = -v[2];
	v[0] += v[1];
	eq6_1_pd[118] = 4. * x[5];
	v[1] = eq6_1_pd[118] * x[1];
	v[0] += v[1];
	eq6_1_pd[119] = 4. * x[5];
	v[1] = eq6_1_pd[119] * x[3];
	v[0] += v[1];
	eq6_1_pd[120] = 20. * x[5];
	v[1] = eq6_1_pd[120] * x[4];
	v[0] += v[1];
	eq6_1_pd[121] = x[5] * x[5];
	eq6_1_pd[122] = x[5] + x[5];
	v[1] = 20. * eq6_1_pd[121];
	v[2] = -v[1];
	v[0] += v[2];
	eq6_1_pd[123] = 4. * x[13];
	v[2] = eq6_1_pd[123] * x[9];
	v[0] += v[2];
	eq6_1_pd[124] = 4. * x[13];
	v[2] = eq6_1_pd[124] * x[11];
	v[0] += v[2];
	eq6_1_pd[125] = 20. * x[13];
	v[2] = eq6_1_pd[125] * x[12];
	v[0] += v[2];
	eq6_1_pd[126] = x[13] * x[13];
	eq6_1_pd[127] = x[13] + x[13];
	v[2] = 20. * eq6_1_pd[126];
	v[1] = -v[2];
	v[0] += v[1];
	eq6_1_pd[128] = 12. * x[7];
	v[1] = eq6_1_pd[128] * x[0];
	v[0] += v[1];
	eq6_1_pd[129] = 10. * x[7];
	v[1] = eq6_1_pd[129] * x[2];
	v[0] += v[1];
	eq6_1_pd[130] = 20. * x[7];
	v[1] = eq6_1_pd[130] * x[3];
	v[0] += v[1];
	eq6_1_pd[131] = 2. * x[7];
	v[1] = eq6_1_pd[131] * x[5];
	v[0] += v[1];
	eq6_1_pd[132] = x[7] * x[7];
	eq6_1_pd[133] = x[7] + x[7];
	v[1] = 32. * eq6_1_pd[132];
	v[2] = -v[1];
	v[0] += v[2];
	eq6_1_pd[134] = 12. * x[15];
	v[2] = eq6_1_pd[134] * x[8];
	v[0] += v[2];
	eq6_1_pd[135] = 10. * x[15];
	v[2] = eq6_1_pd[135] * x[10];
	v[0] += v[2];
	eq6_1_pd[136] = 20. * x[15];
	v[2] = eq6_1_pd[136] * x[11];
	v[0] += v[2];
	eq6_1_pd[137] = 2. * x[15];
	v[2] = eq6_1_pd[137] * x[13];
	v[0] += v[2];
	eq6_1_pd[138] = x[15] * x[15];
	eq6_1_pd[139] = x[15] + x[15];
	v[2] = 32. * eq6_1_pd[138];
	v[1] = -v[2];
	v[0] += v[1];
	eq6_1_pd[140] = 4. * x[6];
	v[1] = eq6_1_pd[140] * x[1];
	v[0] += v[1];
	eq6_1_pd[141] = 4. * x[6];
	v[1] = eq6_1_pd[141] * x[3];
	v[0] += v[1];
	eq6_1_pd[142] = 10. * x[6];
	v[1] = eq6_1_pd[142] * x[5];
	v[0] += v[1];
	eq6_1_pd[143] = 20. * x[6];
	v[1] = eq6_1_pd[143] * x[7];
	v[0] += v[1];
	eq6_1_pd[144] = x[6] * x[6];
	eq6_1_pd[145] = x[6] + x[6];
	v[1] = 19. * eq6_1_pd[144];
	v[2] = -v[1];
	v[0] += v[2];
	eq6_1_pd[146] = 4. * x[14];
	v[2] = eq6_1_pd[146] * x[9];
	v[0] += v[2];
	eq6_1_pd[147] = 4. * x[14];
	v[2] = eq6_1_pd[147] * x[11];
	v[0] += v[2];
	eq6_1_pd[148] = 10. * x[14];
	v[2] = eq6_1_pd[148] * x[13];
	v[0] += v[2];
	eq6_1_pd[149] = 20. * x[14];
	v[2] = eq6_1_pd[149] * x[15];
	v[0] += v[2];
	eq6_1_pd[150] = x[14] * x[14];
	eq6_1_pd[151] = x[14] + x[14];
	v[2] = 19. * eq6_1_pd[150];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = -v[0];
	;}

	if (wantfg & 2) {
	g[14] = 19.*eq6_1_pd[151];
	g[15] = -eq6_1_pd[149];
	g[14] -= x[15]*20.;
	g[13] = -eq6_1_pd[148];
	g[14] -= x[13]*10.;
	g[11] = -eq6_1_pd[147];
	g[14] -= x[11]*4.;
	g[9] = -eq6_1_pd[146];
	g[14] -= x[9]*4.;
	g[6] = 19.*eq6_1_pd[145];
	g[7] = -eq6_1_pd[143];
	g[6] -= x[7]*20.;
	g[5] = -eq6_1_pd[142];
	g[6] -= x[5]*10.;
	g[3] = -eq6_1_pd[141];
	g[6] -= x[3]*4.;
	g[1] = -eq6_1_pd[140];
	g[6] -= x[1]*4.;
	g[15] += 32.*eq6_1_pd[139];
	g[13] -= eq6_1_pd[137];
	g[15] -= x[13]*2.;
	g[11] -= eq6_1_pd[136];
	g[15] -= x[11]*20.;
	g[10] = -eq6_1_pd[135];
	g[15] -= x[10]*10.;
	g[8] = -eq6_1_pd[134];
	g[15] -= x[8]*12.;
	g[7] += 32.*eq6_1_pd[133];
	g[5] -= eq6_1_pd[131];
	g[7] -= x[5]*2.;
	g[3] -= eq6_1_pd[130];
	g[7] -= x[3]*20.;
	g[2] = -eq6_1_pd[129];
	g[7] -= x[2]*10.;
	g[0] = -eq6_1_pd[128];
	g[7] -= x[0]*12.;
	g[13] += 20.*eq6_1_pd[127];
	g[12] = -eq6_1_pd[125];
	g[13] -= x[12]*20.;
	g[11] -= eq6_1_pd[124];
	g[13] -= x[11]*4.;
	g[9] -= eq6_1_pd[123];
	g[13] -= x[9]*4.;
	g[5] += 20.*eq6_1_pd[122];
	g[4] = -eq6_1_pd[120];
	g[5] -= x[4]*20.;
	g[3] -= eq6_1_pd[119];
	g[5] -= x[3]*4.;
	g[1] -= eq6_1_pd[118];
	g[5] -= x[1]*4.;
	g[12] += 18.*eq6_1_pd[117];
	g[11] -= eq6_1_pd[115];
	g[12] -= x[11]*10.;
	g[9] -= eq6_1_pd[114];
	g[12] -= x[9]*4.;
	g[8] -= eq6_1_pd[113];
	g[12] -= x[8]*2.;
	g[4] += 18.*eq6_1_pd[112];
	g[3] -= eq6_1_pd[110];
	g[4] -= x[3]*10.;
	g[1] -= eq6_1_pd[109];
	g[4] -= x[1]*4.;
	g[0] -= eq6_1_pd[108];
	g[4] -= x[0]*2.;
	g[11] += 23.*eq6_1_pd[107];
	g[8] -= eq6_1_pd[105];
	g[11] -= x[8]*8.;
	g[3] += 23.*eq6_1_pd[104];
	g[0] -= eq6_1_pd[102];
	g[3] -= x[0]*8.;
	g[10] += 10.*eq6_1_pd[101];
	g[9] -= eq6_1_pd[99];
	g[10] -= x[9]*6.;
	g[8] -= eq6_1_pd[98];
	g[10] -= x[8]*4.;
	g[2] += 10.*eq6_1_pd[97];
	g[1] -= eq6_1_pd[95];
	g[2] -= x[1]*6.;
	g[0] -= eq6_1_pd[94];
	g[2] -= x[0]*4.;
	g[9] += 14.*eq6_1_pd[93];
	g[8] -= eq6_1_pd[91];
	g[9] -= x[8]*10.;
	g[8] += 18.*eq6_1_pd[90];
	g[1] += 14.*eq6_1_pd[88];
	g[0] += 18.*eq6_1_pd[86];
	g[0] -= eq6_1_pd[84];
	g[1] -= x[0]*10.;
	}

	return v[1];
}

 void
eq6_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (eq6_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] - x[1];
	v[1] = v[0] * v[0];
	eq6_1_pd[0] = v[0] + v[0];
	v[0] = x[8] - x[9];
	v[2] = v[0] * v[0];
	eq6_1_pd[1] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[2] = 0.5 / v[2];
	v[0] = -v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[0] - x[2];
	v[1] = v[0] * v[0];
	eq6_1_pd[3] = v[0] + v[0];
	v[0] = x[8] - x[10];
	v[2] = v[0] * v[0];
	eq6_1_pd[4] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[5] = 0.5 / v[2];
	v[0] = -v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[0] - x[3];
	v[1] = v[0] * v[0];
	eq6_1_pd[6] = v[0] + v[0];
	v[0] = x[8] - x[11];
	v[2] = v[0] * v[0];
	eq6_1_pd[7] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[8] = 0.5 / v[2];
	v[0] = -v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[0] - x[4];
	v[1] = v[0] * v[0];
	eq6_1_pd[9] = v[0] + v[0];
	v[0] = x[8] - x[12];
	v[2] = v[0] * v[0];
	eq6_1_pd[10] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[11] = 0.5 / v[2];
	v[0] = -v[2];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[0] - x[5];
	v[1] = v[0] * v[0];
	eq6_1_pd[12] = v[0] + v[0];
	v[0] = x[8] - x[13];
	v[2] = v[0] * v[0];
	eq6_1_pd[13] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[14] = 0.5 / v[2];
	v[0] = -v[2];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[0] - x[6];
	v[1] = v[0] * v[0];
	eq6_1_pd[15] = v[0] + v[0];
	v[0] = x[8] - x[14];
	v[2] = v[0] * v[0];
	eq6_1_pd[16] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[17] = 0.5 / v[2];
	v[0] = -v[2];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[0] - x[7];
	v[1] = v[0] * v[0];
	eq6_1_pd[18] = v[0] + v[0];
	v[0] = x[8] - x[15];
	v[2] = v[0] * v[0];
	eq6_1_pd[19] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[20] = 0.5 / v[2];
	v[0] = -v[2];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[1] - x[2];
	v[1] = v[0] * v[0];
	eq6_1_pd[21] = v[0] + v[0];
	v[0] = x[9] - x[10];
	v[2] = v[0] * v[0];
	eq6_1_pd[22] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[23] = 0.5 / v[2];
	v[0] = -v[2];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[1] - x[3];
	v[1] = v[0] * v[0];
	eq6_1_pd[24] = v[0] + v[0];
	v[0] = x[9] - x[11];
	v[2] = v[0] * v[0];
	eq6_1_pd[25] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[26] = 0.5 / v[2];
	v[0] = -v[2];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[1] - x[4];
	v[1] = v[0] * v[0];
	eq6_1_pd[27] = v[0] + v[0];
	v[0] = x[9] - x[12];
	v[2] = v[0] * v[0];
	eq6_1_pd[28] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[29] = 0.5 / v[2];
	v[0] = -v[2];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[1] - x[5];
	v[1] = v[0] * v[0];
	eq6_1_pd[30] = v[0] + v[0];
	v[0] = x[9] - x[13];
	v[2] = v[0] * v[0];
	eq6_1_pd[31] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[32] = 0.5 / v[2];
	v[0] = -v[2];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[1] - x[6];
	v[1] = v[0] * v[0];
	eq6_1_pd[33] = v[0] + v[0];
	v[0] = x[9] - x[14];
	v[2] = v[0] * v[0];
	eq6_1_pd[34] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[35] = 0.5 / v[2];
	v[0] = -v[2];
	c[11] = v[0];

  /***  constraint 13  ***/

	v[0] = x[1] - x[7];
	v[1] = v[0] * v[0];
	eq6_1_pd[36] = v[0] + v[0];
	v[0] = x[9] - x[15];
	v[2] = v[0] * v[0];
	eq6_1_pd[37] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[38] = 0.5 / v[2];
	v[0] = -v[2];
	c[12] = v[0];

  /***  constraint 14  ***/

	v[0] = x[2] - x[3];
	v[1] = v[0] * v[0];
	eq6_1_pd[39] = v[0] + v[0];
	v[0] = x[10] - x[11];
	v[2] = v[0] * v[0];
	eq6_1_pd[40] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[41] = 0.5 / v[2];
	v[0] = -v[2];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[2] - x[4];
	v[1] = v[0] * v[0];
	eq6_1_pd[42] = v[0] + v[0];
	v[0] = x[10] - x[12];
	v[2] = v[0] * v[0];
	eq6_1_pd[43] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[44] = 0.5 / v[2];
	v[0] = -v[2];
	c[14] = v[0];

  /***  constraint 16  ***/

	v[0] = x[2] - x[5];
	v[1] = v[0] * v[0];
	eq6_1_pd[45] = v[0] + v[0];
	v[0] = x[10] - x[13];
	v[2] = v[0] * v[0];
	eq6_1_pd[46] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[47] = 0.5 / v[2];
	v[0] = -v[2];
	c[15] = v[0];

  /***  constraint 17  ***/

	v[0] = x[2] - x[6];
	v[1] = v[0] * v[0];
	eq6_1_pd[48] = v[0] + v[0];
	v[0] = x[10] - x[14];
	v[2] = v[0] * v[0];
	eq6_1_pd[49] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[50] = 0.5 / v[2];
	v[0] = -v[2];
	c[16] = v[0];

  /***  constraint 18  ***/

	v[0] = x[2] - x[7];
	v[1] = v[0] * v[0];
	eq6_1_pd[51] = v[0] + v[0];
	v[0] = x[10] - x[15];
	v[2] = v[0] * v[0];
	eq6_1_pd[52] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[53] = 0.5 / v[2];
	v[0] = -v[2];
	c[17] = v[0];

  /***  constraint 19  ***/

	v[0] = x[3] - x[4];
	v[1] = v[0] * v[0];
	eq6_1_pd[54] = v[0] + v[0];
	v[0] = x[11] - x[12];
	v[2] = v[0] * v[0];
	eq6_1_pd[55] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[56] = 0.5 / v[2];
	v[0] = -v[2];
	c[18] = v[0];

  /***  constraint 20  ***/

	v[0] = x[3] - x[5];
	v[1] = v[0] * v[0];
	eq6_1_pd[57] = v[0] + v[0];
	v[0] = x[11] - x[13];
	v[2] = v[0] * v[0];
	eq6_1_pd[58] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[59] = 0.5 / v[2];
	v[0] = -v[2];
	c[19] = v[0];

  /***  constraint 21  ***/

	v[0] = x[3] - x[6];
	v[1] = v[0] * v[0];
	eq6_1_pd[60] = v[0] + v[0];
	v[0] = x[11] - x[14];
	v[2] = v[0] * v[0];
	eq6_1_pd[61] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[62] = 0.5 / v[2];
	v[0] = -v[2];
	c[20] = v[0];

  /***  constraint 22  ***/

	v[0] = x[3] - x[7];
	v[1] = v[0] * v[0];
	eq6_1_pd[63] = v[0] + v[0];
	v[0] = x[11] - x[15];
	v[2] = v[0] * v[0];
	eq6_1_pd[64] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[65] = 0.5 / v[2];
	v[0] = -v[2];
	c[21] = v[0];

  /***  constraint 23  ***/

	v[0] = x[4] - x[5];
	v[1] = v[0] * v[0];
	eq6_1_pd[66] = v[0] + v[0];
	v[0] = x[12] - x[13];
	v[2] = v[0] * v[0];
	eq6_1_pd[67] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[68] = 0.5 / v[2];
	v[0] = -v[2];
	c[22] = v[0];

  /***  constraint 24  ***/

	v[0] = x[4] - x[6];
	v[1] = v[0] * v[0];
	eq6_1_pd[69] = v[0] + v[0];
	v[0] = x[12] - x[14];
	v[2] = v[0] * v[0];
	eq6_1_pd[70] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[71] = 0.5 / v[2];
	v[0] = -v[2];
	c[23] = v[0];

  /***  constraint 25  ***/

	v[0] = x[4] - x[7];
	v[1] = v[0] * v[0];
	eq6_1_pd[72] = v[0] + v[0];
	v[0] = x[12] - x[15];
	v[2] = v[0] * v[0];
	eq6_1_pd[73] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[74] = 0.5 / v[2];
	v[0] = -v[2];
	c[24] = v[0];

  /***  constraint 26  ***/

	v[0] = x[5] - x[6];
	v[1] = v[0] * v[0];
	eq6_1_pd[75] = v[0] + v[0];
	v[0] = x[13] - x[14];
	v[2] = v[0] * v[0];
	eq6_1_pd[76] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[77] = 0.5 / v[2];
	v[0] = -v[2];
	c[25] = v[0];

  /***  constraint 27  ***/

	v[0] = x[5] - x[7];
	v[1] = v[0] * v[0];
	eq6_1_pd[78] = v[0] + v[0];
	v[0] = x[13] - x[15];
	v[2] = v[0] * v[0];
	eq6_1_pd[79] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[80] = 0.5 / v[2];
	v[0] = -v[2];
	c[26] = v[0];

  /***  constraint 28  ***/

	v[0] = x[6] - x[7];
	v[1] = v[0] * v[0];
	eq6_1_pd[81] = v[0] + v[0];
	v[0] = x[14] - x[15];
	v[2] = v[0] * v[0];
	eq6_1_pd[82] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	eq6_1_pd[83] = 0.5 / v[2];
	v[0] = -v[2];
	c[27] = v[0];

  /***  constraint 29  ***/

	t1 = -x[0];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[1];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[2];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[3];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[4];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[5];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[6];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[7];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[0];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[1];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[2];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[3];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[4];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[5];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[6];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[7];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[8];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[9];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[10];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[11];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[12];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[13];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[14];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[15];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[8];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[9];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[10];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[11];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[12];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[13];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[14];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[15];
	c[59] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -eq6_1_pd[2];
	dv[0] *= eq6_1_pd[1];
	J[81] = -dv[0];
	J[72] = dv[0];
	dv[1] = -eq6_1_pd[2]*eq6_1_pd[0];
	J[9] = -dv[1];
	J[0] = dv[1];

   /*** derivatives for constraint 2 ***/

	dv[0] = -eq6_1_pd[5];
	dv[0] *= eq6_1_pd[4];
	J[90] = -dv[0];
	J[73] = dv[0];
	dv[1] = -eq6_1_pd[5]*eq6_1_pd[3];
	J[18] = -dv[1];
	J[1] = dv[1];

   /*** derivatives for constraint 3 ***/

	dv[0] = -eq6_1_pd[8];
	dv[0] *= eq6_1_pd[7];
	J[99] = -dv[0];
	J[74] = dv[0];
	dv[1] = -eq6_1_pd[8]*eq6_1_pd[6];
	J[27] = -dv[1];
	J[2] = dv[1];

   /*** derivatives for constraint 4 ***/

	dv[0] = -eq6_1_pd[11];
	dv[0] *= eq6_1_pd[10];
	J[108] = -dv[0];
	J[75] = dv[0];
	dv[1] = -eq6_1_pd[11]*eq6_1_pd[9];
	J[36] = -dv[1];
	J[3] = dv[1];

   /*** derivatives for constraint 5 ***/

	dv[0] = -eq6_1_pd[14];
	dv[0] *= eq6_1_pd[13];
	J[117] = -dv[0];
	J[76] = dv[0];
	dv[1] = -eq6_1_pd[14]*eq6_1_pd[12];
	J[45] = -dv[1];
	J[4] = dv[1];

   /*** derivatives for constraint 6 ***/

	dv[0] = -eq6_1_pd[17];
	dv[0] *= eq6_1_pd[16];
	J[126] = -dv[0];
	J[77] = dv[0];
	dv[1] = -eq6_1_pd[17]*eq6_1_pd[15];
	J[54] = -dv[1];
	J[5] = dv[1];

   /*** derivatives for constraint 7 ***/

	dv[0] = -eq6_1_pd[20];
	dv[0] *= eq6_1_pd[19];
	J[135] = -dv[0];
	J[78] = dv[0];
	dv[1] = -eq6_1_pd[20]*eq6_1_pd[18];
	J[63] = -dv[1];
	J[6] = dv[1];

   /*** derivatives for constraint 8 ***/

	dv[0] = -eq6_1_pd[23];
	dv[0] *= eq6_1_pd[22];
	J[91] = -dv[0];
	J[82] = dv[0];
	dv[1] = -eq6_1_pd[23]*eq6_1_pd[21];
	J[19] = -dv[1];
	J[10] = dv[1];

   /*** derivatives for constraint 9 ***/

	dv[0] = -eq6_1_pd[26];
	dv[0] *= eq6_1_pd[25];
	J[100] = -dv[0];
	J[83] = dv[0];
	dv[1] = -eq6_1_pd[26]*eq6_1_pd[24];
	J[28] = -dv[1];
	J[11] = dv[1];

   /*** derivatives for constraint 10 ***/

	dv[0] = -eq6_1_pd[29];
	dv[0] *= eq6_1_pd[28];
	J[109] = -dv[0];
	J[84] = dv[0];
	dv[1] = -eq6_1_pd[29]*eq6_1_pd[27];
	J[37] = -dv[1];
	J[12] = dv[1];

   /*** derivatives for constraint 11 ***/

	dv[0] = -eq6_1_pd[32];
	dv[0] *= eq6_1_pd[31];
	J[118] = -dv[0];
	J[85] = dv[0];
	dv[1] = -eq6_1_pd[32]*eq6_1_pd[30];
	J[46] = -dv[1];
	J[13] = dv[1];

   /*** derivatives for constraint 12 ***/

	dv[0] = -eq6_1_pd[35];
	dv[0] *= eq6_1_pd[34];
	J[127] = -dv[0];
	J[86] = dv[0];
	dv[1] = -eq6_1_pd[35]*eq6_1_pd[33];
	J[55] = -dv[1];
	J[14] = dv[1];

   /*** derivatives for constraint 13 ***/

	dv[0] = -eq6_1_pd[38];
	dv[0] *= eq6_1_pd[37];
	J[136] = -dv[0];
	J[87] = dv[0];
	dv[1] = -eq6_1_pd[38]*eq6_1_pd[36];
	J[64] = -dv[1];
	J[15] = dv[1];

   /*** derivatives for constraint 14 ***/

	dv[0] = -eq6_1_pd[41];
	dv[0] *= eq6_1_pd[40];
	J[101] = -dv[0];
	J[92] = dv[0];
	dv[1] = -eq6_1_pd[41]*eq6_1_pd[39];
	J[29] = -dv[1];
	J[20] = dv[1];

   /*** derivatives for constraint 15 ***/

	dv[0] = -eq6_1_pd[44];
	dv[0] *= eq6_1_pd[43];
	J[110] = -dv[0];
	J[93] = dv[0];
	dv[1] = -eq6_1_pd[44]*eq6_1_pd[42];
	J[38] = -dv[1];
	J[21] = dv[1];

   /*** derivatives for constraint 16 ***/

	dv[0] = -eq6_1_pd[47];
	dv[0] *= eq6_1_pd[46];
	J[119] = -dv[0];
	J[94] = dv[0];
	dv[1] = -eq6_1_pd[47]*eq6_1_pd[45];
	J[47] = -dv[1];
	J[22] = dv[1];

   /*** derivatives for constraint 17 ***/

	dv[0] = -eq6_1_pd[50];
	dv[0] *= eq6_1_pd[49];
	J[128] = -dv[0];
	J[95] = dv[0];
	dv[1] = -eq6_1_pd[50]*eq6_1_pd[48];
	J[56] = -dv[1];
	J[23] = dv[1];

   /*** derivatives for constraint 18 ***/

	dv[0] = -eq6_1_pd[53];
	dv[0] *= eq6_1_pd[52];
	J[137] = -dv[0];
	J[96] = dv[0];
	dv[1] = -eq6_1_pd[53]*eq6_1_pd[51];
	J[65] = -dv[1];
	J[24] = dv[1];

   /*** derivatives for constraint 19 ***/

	dv[0] = -eq6_1_pd[56];
	dv[0] *= eq6_1_pd[55];
	J[111] = -dv[0];
	J[102] = dv[0];
	dv[1] = -eq6_1_pd[56]*eq6_1_pd[54];
	J[39] = -dv[1];
	J[30] = dv[1];

   /*** derivatives for constraint 20 ***/

	dv[0] = -eq6_1_pd[59];
	dv[0] *= eq6_1_pd[58];
	J[120] = -dv[0];
	J[103] = dv[0];
	dv[1] = -eq6_1_pd[59]*eq6_1_pd[57];
	J[48] = -dv[1];
	J[31] = dv[1];

   /*** derivatives for constraint 21 ***/

	dv[0] = -eq6_1_pd[62];
	dv[0] *= eq6_1_pd[61];
	J[129] = -dv[0];
	J[104] = dv[0];
	dv[1] = -eq6_1_pd[62]*eq6_1_pd[60];
	J[57] = -dv[1];
	J[32] = dv[1];

   /*** derivatives for constraint 22 ***/

	dv[0] = -eq6_1_pd[65];
	dv[0] *= eq6_1_pd[64];
	J[138] = -dv[0];
	J[105] = dv[0];
	dv[1] = -eq6_1_pd[65]*eq6_1_pd[63];
	J[66] = -dv[1];
	J[33] = dv[1];

   /*** derivatives for constraint 23 ***/

	dv[0] = -eq6_1_pd[68];
	dv[0] *= eq6_1_pd[67];
	J[121] = -dv[0];
	J[112] = dv[0];
	dv[1] = -eq6_1_pd[68]*eq6_1_pd[66];
	J[49] = -dv[1];
	J[40] = dv[1];

   /*** derivatives for constraint 24 ***/

	dv[0] = -eq6_1_pd[71];
	dv[0] *= eq6_1_pd[70];
	J[130] = -dv[0];
	J[113] = dv[0];
	dv[1] = -eq6_1_pd[71]*eq6_1_pd[69];
	J[58] = -dv[1];
	J[41] = dv[1];

   /*** derivatives for constraint 25 ***/

	dv[0] = -eq6_1_pd[74];
	dv[0] *= eq6_1_pd[73];
	J[139] = -dv[0];
	J[114] = dv[0];
	dv[1] = -eq6_1_pd[74]*eq6_1_pd[72];
	J[67] = -dv[1];
	J[42] = dv[1];

   /*** derivatives for constraint 26 ***/

	dv[0] = -eq6_1_pd[77];
	dv[0] *= eq6_1_pd[76];
	J[131] = -dv[0];
	J[122] = dv[0];
	dv[1] = -eq6_1_pd[77]*eq6_1_pd[75];
	J[59] = -dv[1];
	J[50] = dv[1];

   /*** derivatives for constraint 27 ***/

	dv[0] = -eq6_1_pd[80];
	dv[0] *= eq6_1_pd[79];
	J[140] = -dv[0];
	J[123] = dv[0];
	dv[1] = -eq6_1_pd[80]*eq6_1_pd[78];
	J[68] = -dv[1];
	J[51] = dv[1];

   /*** derivatives for constraint 28 ***/

	dv[0] = -eq6_1_pd[83];
	dv[0] *= eq6_1_pd[82];
	J[141] = -dv[0];
	J[132] = dv[0];
	dv[1] = -eq6_1_pd[83]*eq6_1_pd[81];
	J[69] = -dv[1];
	J[60] = dv[1];

   /*** derivatives for constraint 29 ***/

	J[7] = -1.;

   /*** derivatives for constraint 30 ***/

	J[16] = -1.;

   /*** derivatives for constraint 31 ***/

	J[25] = -1.;

   /*** derivatives for constraint 32 ***/

	J[34] = -1.;

   /*** derivatives for constraint 33 ***/

	J[43] = -1.;

   /*** derivatives for constraint 34 ***/

	J[52] = -1.;

   /*** derivatives for constraint 35 ***/

	J[61] = -1.;

   /*** derivatives for constraint 36 ***/

	J[70] = -1.;

   /*** derivatives for constraint 37 ***/

	J[8] = 1.;

   /*** derivatives for constraint 38 ***/

	J[17] = 1.;

   /*** derivatives for constraint 39 ***/

	J[26] = 1.;

   /*** derivatives for constraint 40 ***/

	J[35] = 1.;

   /*** derivatives for constraint 41 ***/

	J[44] = 1.;

   /*** derivatives for constraint 42 ***/

	J[53] = 1.;

   /*** derivatives for constraint 43 ***/

	J[62] = 1.;

   /*** derivatives for constraint 44 ***/

	J[71] = 1.;

   /*** derivatives for constraint 45 ***/

	J[79] = -1.;

   /*** derivatives for constraint 46 ***/

	J[88] = -1.;

   /*** derivatives for constraint 47 ***/

	J[97] = -1.;

   /*** derivatives for constraint 48 ***/

	J[106] = -1.;

   /*** derivatives for constraint 49 ***/

	J[115] = -1.;

   /*** derivatives for constraint 50 ***/

	J[124] = -1.;

   /*** derivatives for constraint 51 ***/

	J[133] = -1.;

   /*** derivatives for constraint 52 ***/

	J[142] = -1.;

   /*** derivatives for constraint 53 ***/

	J[80] = 1.;

   /*** derivatives for constraint 54 ***/

	J[89] = 1.;

   /*** derivatives for constraint 55 ***/

	J[98] = 1.;

   /*** derivatives for constraint 56 ***/

	J[107] = 1.;

   /*** derivatives for constraint 57 ***/

	J[116] = 1.;

   /*** derivatives for constraint 58 ***/

	J[125] = 1.;

   /*** derivatives for constraint 59 ***/

	J[134] = 1.;

   /*** derivatives for constraint 60 ***/

	J[143] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
