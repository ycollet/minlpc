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
 fint lakes_auxcom_[1] = { 18 /* nlc */ };
 fint lakes_funcom_[337] = {
	90 /* nvar */,
	1 /* nobj */,
	78 /* ncon */,
	240 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	11,
	13,
	15,
	17,
	19,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	39,
	41,
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
	69,
	72,
	78,
	81,
	85,
	88,
	90,
	91,
	93,
	95,
	99,
	102,
	108,
	111,
	115,
	118,
	120,
	121,
	123,
	125,
	129,
	132,
	138,
	141,
	145,
	148,
	150,
	151,
	153,
	155,
	159,
	162,
	168,
	171,
	175,
	178,
	180,
	181,
	183,
	185,
	189,
	192,
	198,
	201,
	205,
	208,
	210,
	211,
	213,
	215,
	219,
	222,
	228,
	231,
	235,
	238,
	240,
	241,

	/* rownos */
	1,
	50,
	2,
	52,
	3,
	53,
	4,
	55,
	5,
	57,
	6,
	58,
	7,
	60,
	8,
	62,
	9,
	63,
	10,
	65,
	11,
	67,
	12,
	68,
	13,
	70,
	14,
	72,
	15,
	73,
	16,
	75,
	17,
	77,
	18,
	78,
	1,
	49,
	2,
	51,
	4,
	54,
	5,
	56,
	7,
	59,
	8,
	61,
	10,
	64,
	11,
	66,
	13,
	69,
	14,
	71,
	16,
	74,
	17,
	76,
	19,
	44,
	19,
	20,
	20,
	45,
	49,
	50,
	1,
	20,
	21,
	21,
	46,
	49,
	50,
	51,
	52,
	2,
	21,
	22,
	22,
	47,
	52,
	53,
	3,
	22,
	23,
	23,
	48,
	23,
	19,
	24,
	24,
	25,
	20,
	25,
	54,
	55,
	4,
	25,
	26,
	21,
	26,
	54,
	55,
	56,
	57,
	5,
	26,
	27,
	22,
	27,
	57,
	58,
	6,
	27,
	28,
	23,
	28,
	28,
	24,
	29,
	29,
	30,
	25,
	30,
	59,
	60,
	7,
	30,
	31,
	26,
	31,
	59,
	60,
	61,
	62,
	8,
	31,
	32,
	27,
	32,
	62,
	63,
	9,
	32,
	33,
	28,
	33,
	33,
	29,
	34,
	34,
	35,
	30,
	35,
	64,
	65,
	10,
	35,
	36,
	31,
	36,
	64,
	65,
	66,
	67,
	11,
	36,
	37,
	32,
	37,
	67,
	68,
	12,
	37,
	38,
	33,
	38,
	38,
	34,
	39,
	39,
	40,
	35,
	40,
	69,
	70,
	13,
	40,
	41,
	36,
	41,
	69,
	70,
	71,
	72,
	14,
	41,
	42,
	37,
	42,
	72,
	73,
	15,
	42,
	43,
	38,
	43,
	43,
	39,
	44,
	44,
	45,
	40,
	45,
	74,
	75,
	16,
	45,
	46,
	41,
	46,
	74,
	75,
	76,
	77,
	17,
	46,
	47,
	42,
	47,
	77,
	78,
	18,
	47,
	48,
	43,
	48,
	48 };

 real lakes_boundc_[1+180+156] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
		1.7e308,
		0.0001,
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
		-22.,
		-22.,
		-1.,
		-1.,
		3.,
		3.,
		-27.2,
		-27.2,
		51.5,
		51.5,
		44.,
		44.,
		162.,
		162.,
		8.,
		8.,
		12.5,
		12.5,
		53.5,
		53.5,
		-11.,
		-11.,
		60.,
		60.,
		10.,
		10.,
		18.,
		18.,
		39.,
		39.,
		124.,
		124.,
		246.,
		246.,
		6.,
		6.,
		9.7,
		9.7,
		17.2,
		17.2,
		127.,
		127.,
		175.,
		175.,
		3.,
		3.,
		10.,
		10.,
		30.2,
		30.2,
		78.,
		78.,
		156.,
		156.,
		3.,
		3.,
		14.,
		14.,
		23.2,
		23.2,
		543.4,
		543.4,
		0.,
		0.,
		543.4,
		543.4,
		0.,
		0.,
		550.11,
		550.11,
		543.4,
		543.4,
		0.,
		0.,
		543.4,
		543.4,
		0.,
		0.,
		550.11,
		550.11,
		543.4,
		543.4,
		0.,
		0.,
		543.4,
		543.4,
		0.,
		0.,
		550.11,
		550.11,
		543.4,
		543.4,
		0.,
		0.,
		543.4,
		543.4,
		0.,
		0.,
		550.11,
		550.11,
		543.4,
		543.4,
		0.,
		0.,
		543.4,
		543.4,
		0.,
		0.,
		550.11,
		550.11,
		543.4,
		543.4,
		0.,
		0.,
		543.4,
		543.4,
		0.,
		0.,
		550.11,
		550.11};

 real lakes_x0comn_[90] = {
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

 static real lakes_pd[186];
static real lakes_old_x[90];
static int lakes_xkind = -1;

 static int
lakes_xcheck(real *x)
{
	real *x1 = lakes_old_x, *xe = x + 90;
	errno = 0;
	if (lakes_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	lakes_xkind = 0;
	return 1;
	}
 real
lakes_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[62], dv[60];
	fint wantfg = *needfg;
	if (lakes_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	lakes_pd[66] = 464.504 - x[31];
	lakes_pd[67] = lakes_pd[66] * x[31];
	v[1] = -0.001 * lakes_pd[67];
	lakes_pd[68] = 405522.144 - x[30];
	lakes_pd[69] = lakes_pd[68] * x[30];
	v[3] = -0.001 * lakes_pd[69];
	v[1] += v[3];
	lakes_pd[70] = 405407.292 - x[40];
	lakes_pd[71] = lakes_pd[70] * x[40];
	v[4] = -0.001 * lakes_pd[71];
	v[1] += v[4];
	lakes_pd[72] = 349.33 - x[33];
	lakes_pd[73] = lakes_pd[72] * x[33];
	v[5] = -0.001 * lakes_pd[73];
	v[1] += v[5];
	lakes_pd[74] = 555583.632 - x[32];
	lakes_pd[75] = lakes_pd[74] * x[32];
	v[6] = -0.001 * lakes_pd[75];
	v[1] += v[6];
	lakes_pd[76] = 555699.024 - x[42];
	lakes_pd[77] = lakes_pd[76] * x[42];
	v[7] = -0.001 * lakes_pd[77];
	v[1] += v[7];
	lakes_pd[78] = 361.078 - x[35];
	lakes_pd[79] = lakes_pd[78] * x[35];
	v[8] = -0.001 * lakes_pd[79];
	v[1] += v[8];
	lakes_pd[80] = 5273.992 - x[34];
	lakes_pd[81] = lakes_pd[80] * x[34];
	v[9] = -0.001 * lakes_pd[81];
	v[1] += v[9];
	lakes_pd[82] = 5276.2 - x[44];
	lakes_pd[83] = lakes_pd[82] * x[44];
	v[10] = -0.001 * lakes_pd[83];
	v[1] += v[10];
	lakes_pd[84] = 423.116 - x[37];
	lakes_pd[85] = lakes_pd[84] * x[37];
	v[11] = -0.001 * lakes_pd[85];
	v[1] += v[11];
	lakes_pd[86] = 119974.047 - x[36];
	lakes_pd[87] = lakes_pd[86] * x[36];
	v[12] = -0.001 * lakes_pd[87];
	v[1] += v[12];
	lakes_pd[88] = 119997.18 - x[46];
	lakes_pd[89] = lakes_pd[88] * x[46];
	v[13] = -0.001 * lakes_pd[89];
	v[1] += v[13];
	lakes_pd[90] = 464.504 - x[39];
	lakes_pd[91] = lakes_pd[90] * x[39];
	v[14] = -0.001 * lakes_pd[91];
	v[1] += v[14];
	lakes_pd[92] = 38980.8 - x[38];
	lakes_pd[93] = lakes_pd[92] * x[38];
	v[15] = -0.001 * lakes_pd[93];
	v[1] += v[15];
	lakes_pd[94] = 39110.4 - x[48];
	lakes_pd[95] = lakes_pd[94] * x[48];
	v[16] = -0.001 * lakes_pd[95];
	v[1] += v[16];
	lakes_pd[96] = 167.578 - x[41];
	lakes_pd[97] = lakes_pd[96] * x[41];
	v[17] = -0.001 * lakes_pd[97];
	v[1] += v[17];
	lakes_pd[98] = 405441.072 - x[50];
	lakes_pd[99] = lakes_pd[98] * x[50];
	v[18] = -0.001 * lakes_pd[99];
	v[1] += v[18];
	lakes_pd[100] = 346.51 - x[43];
	lakes_pd[101] = lakes_pd[100] * x[43];
	v[19] = -0.001 * lakes_pd[101];
	v[1] += v[19];
	lakes_pd[102] = 555910.576 - x[52];
	lakes_pd[103] = lakes_pd[102] * x[52];
	v[20] = -0.001 * lakes_pd[103];
	v[1] += v[20];
	lakes_pd[104] = 359.834 - x[45];
	lakes_pd[105] = lakes_pd[104] * x[45];
	v[21] = -0.001 * lakes_pd[105];
	v[1] += v[21];
	lakes_pd[106] = 5279.788 - x[54];
	lakes_pd[107] = lakes_pd[106] * x[54];
	v[22] = -0.001 * lakes_pd[107];
	v[1] += v[22];
	lakes_pd[108] = 421.17 - x[47];
	lakes_pd[109] = lakes_pd[108] * x[47];
	v[23] = -0.001 * lakes_pd[109];
	v[1] += v[23];
	lakes_pd[110] = 120093.918 - x[56];
	lakes_pd[111] = lakes_pd[110] * x[56];
	v[24] = -0.001 * lakes_pd[111];
	v[1] += v[24];
	lakes_pd[112] = 430.508 - x[49];
	lakes_pd[113] = lakes_pd[112] * x[49];
	v[25] = -0.001 * lakes_pd[113];
	v[1] += v[25];
	lakes_pd[114] = 39195.2 - x[58];
	lakes_pd[115] = lakes_pd[114] * x[58];
	v[26] = -0.001 * lakes_pd[115];
	v[1] += v[26];
	lakes_pd[116] = 165.832 - x[51];
	lakes_pd[117] = lakes_pd[116] * x[51];
	v[27] = -0.001 * lakes_pd[117];
	v[1] += v[27];
	lakes_pd[118] = 405616.728 - x[60];
	lakes_pd[119] = lakes_pd[118] * x[60];
	v[28] = -0.001 * lakes_pd[119];
	v[1] += v[28];
	lakes_pd[120] = 347.442 - x[53];
	lakes_pd[121] = lakes_pd[120] * x[53];
	v[29] = -0.001 * lakes_pd[121];
	v[1] += v[29];
	lakes_pd[122] = 556208.672 - x[62];
	lakes_pd[123] = lakes_pd[122] * x[62];
	v[30] = -0.001 * lakes_pd[123];
	v[1] += v[30];
	lakes_pd[124] = 365.352 - x[55];
	lakes_pd[125] = lakes_pd[124] * x[55];
	v[31] = -0.001 * lakes_pd[125];
	v[1] += v[31];
	lakes_pd[126] = 5281.812 - x[64];
	lakes_pd[127] = lakes_pd[126] * x[64];
	v[32] = -0.001 * lakes_pd[127];
	v[1] += v[32];
	lakes_pd[128] = 415.676 - x[57];
	lakes_pd[129] = lakes_pd[128] * x[57];
	v[33] = -0.001 * lakes_pd[129];
	v[1] += v[33];
	lakes_pd[130] = 120148.596 - x[66];
	lakes_pd[131] = lakes_pd[130] * x[66];
	v[34] = -0.001 * lakes_pd[131];
	v[1] += v[34];
	lakes_pd[132] = 407.71 - x[59];
	lakes_pd[133] = lakes_pd[132] * x[59];
	v[35] = -0.001 * lakes_pd[133];
	v[1] += v[35];
	lakes_pd[134] = 39305.6 - x[68];
	lakes_pd[135] = lakes_pd[134] * x[68];
	v[36] = -0.001 * lakes_pd[135];
	v[1] += v[36];
	lakes_pd[136] = 160.268 - x[61];
	lakes_pd[137] = lakes_pd[136] * x[61];
	v[37] = -0.001 * lakes_pd[137];
	v[1] += v[37];
	lakes_pd[138] = 405832.92 - x[70];
	lakes_pd[139] = lakes_pd[138] * x[70];
	v[38] = -0.001 * lakes_pd[139];
	v[1] += v[38];
	lakes_pd[140] = 357.308 - x[63];
	lakes_pd[141] = lakes_pd[140] * x[63];
	v[39] = -0.001 * lakes_pd[141];
	v[1] += v[39];
	lakes_pd[142] = 556449.072 - x[72];
	lakes_pd[143] = lakes_pd[142] * x[72];
	v[40] = -0.001 * lakes_pd[143];
	v[1] += v[40];
	lakes_pd[144] = 371.834 - x[65];
	lakes_pd[145] = lakes_pd[144] * x[65];
	v[41] = -0.001 * lakes_pd[145];
	v[1] += v[41];
	lakes_pd[146] = 5282.916 - x[74];
	lakes_pd[147] = lakes_pd[146] * x[74];
	v[42] = -0.001 * lakes_pd[147];
	v[1] += v[42];
	lakes_pd[148] = 412.832 - x[67];
	lakes_pd[149] = lakes_pd[148] * x[67];
	v[43] = -0.001 * lakes_pd[149];
	v[1] += v[43];
	lakes_pd[150] = 120182.244 - x[76];
	lakes_pd[151] = lakes_pd[150] * x[76];
	v[44] = -0.001 * lakes_pd[151];
	v[1] += v[44];
	lakes_pd[152] = 372.616 - x[69];
	lakes_pd[153] = lakes_pd[152] * x[69];
	v[45] = -0.001 * lakes_pd[153];
	v[1] += v[45];
	lakes_pd[154] = 39417.6 - x[78];
	lakes_pd[155] = lakes_pd[154] * x[78];
	v[46] = -0.001 * lakes_pd[155];
	v[1] += v[46];
	lakes_pd[156] = 130.69 - x[71];
	lakes_pd[157] = lakes_pd[156] * x[71];
	v[47] = -0.001 * lakes_pd[157];
	v[1] += v[47];
	lakes_pd[158] = 405907.236 - x[80];
	lakes_pd[159] = lakes_pd[158] * x[80];
	v[48] = -0.001 * lakes_pd[159];
	v[1] += v[48];
	lakes_pd[160] = 376.02 - x[73];
	lakes_pd[161] = lakes_pd[160] * x[73];
	v[49] = -0.001 * lakes_pd[161];
	v[1] += v[49];
	lakes_pd[162] = 556554.848 - x[82];
	lakes_pd[163] = lakes_pd[162] * x[82];
	v[50] = -0.001 * lakes_pd[163];
	v[1] += v[50];
	lakes_pd[164] = 385.136 - x[75];
	lakes_pd[165] = lakes_pd[164] * x[75];
	v[51] = -0.001 * lakes_pd[165];
	v[1] += v[51];
	lakes_pd[166] = 5282.916 - x[84];
	lakes_pd[167] = lakes_pd[166] * x[84];
	v[52] = -0.001 * lakes_pd[167];
	v[1] += v[52];
	lakes_pd[168] = 408.6 - x[77];
	lakes_pd[169] = lakes_pd[168] * x[77];
	v[53] = -0.001 * lakes_pd[169];
	v[1] += v[53];
	lakes_pd[170] = 120165.42 - x[86];
	lakes_pd[171] = lakes_pd[170] * x[86];
	v[54] = -0.001 * lakes_pd[171];
	v[1] += v[54];
	lakes_pd[172] = 402.2 - x[79];
	lakes_pd[173] = lakes_pd[172] * x[79];
	v[55] = -0.001 * lakes_pd[173];
	v[1] += v[55];
	lakes_pd[174] = 39412.8 - x[88];
	lakes_pd[175] = lakes_pd[174] * x[88];
	v[56] = -0.001 * lakes_pd[175];
	v[1] += v[56];
	lakes_pd[176] = 144.01 - x[81];
	lakes_pd[177] = lakes_pd[176] * x[81];
	v[57] = -0.001 * lakes_pd[177];
	v[1] += v[57];
	lakes_pd[178] = 387.666 - x[83];
	lakes_pd[179] = lakes_pd[178] * x[83];
	v[58] = -0.001 * lakes_pd[179];
	v[1] += v[58];
	lakes_pd[180] = 393.302 - x[85];
	lakes_pd[181] = lakes_pd[180] * x[85];
	v[59] = -0.001 * lakes_pd[181];
	v[1] += v[59];
	lakes_pd[182] = 408.5 - x[87];
	lakes_pd[183] = lakes_pd[182] * x[87];
	v[60] = -0.001 * lakes_pd[183];
	v[1] += v[60];
	lakes_pd[184] = 482.158 - x[89];
	lakes_pd[185] = lakes_pd[184] * x[89];
	v[61] = -0.001 * lakes_pd[185];
	v[1] += v[61];
	v[1] += 734595853.838046;
	;}

	if (wantfg & 2) {
	g[89] = -0.001*lakes_pd[184];
	dv[0] = -0.001*x[89];
	g[89] -= dv[0];
	g[87] = -0.001*lakes_pd[182];
	dv[1] = -0.001*x[87];
	g[87] -= dv[1];
	g[85] = -0.001*lakes_pd[180];
	dv[2] = -0.001*x[85];
	g[85] -= dv[2];
	g[83] = -0.001*lakes_pd[178];
	dv[3] = -0.001*x[83];
	g[83] -= dv[3];
	g[81] = -0.001*lakes_pd[176];
	dv[4] = -0.001*x[81];
	g[81] -= dv[4];
	g[88] = -0.001*lakes_pd[174];
	dv[5] = -0.001*x[88];
	g[88] -= dv[5];
	g[79] = -0.001*lakes_pd[172];
	dv[6] = -0.001*x[79];
	g[79] -= dv[6];
	g[86] = -0.001*lakes_pd[170];
	dv[7] = -0.001*x[86];
	g[86] -= dv[7];
	g[77] = -0.001*lakes_pd[168];
	dv[8] = -0.001*x[77];
	g[77] -= dv[8];
	g[84] = -0.001*lakes_pd[166];
	dv[9] = -0.001*x[84];
	g[84] -= dv[9];
	g[75] = -0.001*lakes_pd[164];
	dv[10] = -0.001*x[75];
	g[75] -= dv[10];
	g[82] = -0.001*lakes_pd[162];
	dv[11] = -0.001*x[82];
	g[82] -= dv[11];
	g[73] = -0.001*lakes_pd[160];
	dv[12] = -0.001*x[73];
	g[73] -= dv[12];
	g[80] = -0.001*lakes_pd[158];
	dv[13] = -0.001*x[80];
	g[80] -= dv[13];
	g[71] = -0.001*lakes_pd[156];
	dv[14] = -0.001*x[71];
	g[71] -= dv[14];
	g[78] = -0.001*lakes_pd[154];
	dv[15] = -0.001*x[78];
	g[78] -= dv[15];
	g[69] = -0.001*lakes_pd[152];
	dv[16] = -0.001*x[69];
	g[69] -= dv[16];
	g[76] = -0.001*lakes_pd[150];
	dv[17] = -0.001*x[76];
	g[76] -= dv[17];
	g[67] = -0.001*lakes_pd[148];
	dv[18] = -0.001*x[67];
	g[67] -= dv[18];
	g[74] = -0.001*lakes_pd[146];
	dv[19] = -0.001*x[74];
	g[74] -= dv[19];
	g[65] = -0.001*lakes_pd[144];
	dv[20] = -0.001*x[65];
	g[65] -= dv[20];
	g[72] = -0.001*lakes_pd[142];
	dv[21] = -0.001*x[72];
	g[72] -= dv[21];
	g[63] = -0.001*lakes_pd[140];
	dv[22] = -0.001*x[63];
	g[63] -= dv[22];
	g[70] = -0.001*lakes_pd[138];
	dv[23] = -0.001*x[70];
	g[70] -= dv[23];
	g[61] = -0.001*lakes_pd[136];
	dv[24] = -0.001*x[61];
	g[61] -= dv[24];
	g[68] = -0.001*lakes_pd[134];
	dv[25] = -0.001*x[68];
	g[68] -= dv[25];
	g[59] = -0.001*lakes_pd[132];
	dv[26] = -0.001*x[59];
	g[59] -= dv[26];
	g[66] = -0.001*lakes_pd[130];
	dv[27] = -0.001*x[66];
	g[66] -= dv[27];
	g[57] = -0.001*lakes_pd[128];
	dv[28] = -0.001*x[57];
	g[57] -= dv[28];
	g[64] = -0.001*lakes_pd[126];
	dv[29] = -0.001*x[64];
	g[64] -= dv[29];
	g[55] = -0.001*lakes_pd[124];
	dv[30] = -0.001*x[55];
	g[55] -= dv[30];
	g[62] = -0.001*lakes_pd[122];
	dv[31] = -0.001*x[62];
	g[62] -= dv[31];
	g[53] = -0.001*lakes_pd[120];
	dv[32] = -0.001*x[53];
	g[53] -= dv[32];
	g[60] = -0.001*lakes_pd[118];
	dv[33] = -0.001*x[60];
	g[60] -= dv[33];
	g[51] = -0.001*lakes_pd[116];
	dv[34] = -0.001*x[51];
	g[51] -= dv[34];
	g[58] = -0.001*lakes_pd[114];
	dv[35] = -0.001*x[58];
	g[58] -= dv[35];
	g[49] = -0.001*lakes_pd[112];
	dv[36] = -0.001*x[49];
	g[49] -= dv[36];
	g[56] = -0.001*lakes_pd[110];
	dv[37] = -0.001*x[56];
	g[56] -= dv[37];
	g[47] = -0.001*lakes_pd[108];
	dv[38] = -0.001*x[47];
	g[47] -= dv[38];
	g[54] = -0.001*lakes_pd[106];
	dv[39] = -0.001*x[54];
	g[54] -= dv[39];
	g[45] = -0.001*lakes_pd[104];
	dv[40] = -0.001*x[45];
	g[45] -= dv[40];
	g[52] = -0.001*lakes_pd[102];
	dv[41] = -0.001*x[52];
	g[52] -= dv[41];
	g[43] = -0.001*lakes_pd[100];
	dv[42] = -0.001*x[43];
	g[43] -= dv[42];
	g[50] = -0.001*lakes_pd[98];
	dv[43] = -0.001*x[50];
	g[50] -= dv[43];
	g[41] = -0.001*lakes_pd[96];
	dv[44] = -0.001*x[41];
	g[41] -= dv[44];
	g[48] = -0.001*lakes_pd[94];
	dv[45] = -0.001*x[48];
	g[48] -= dv[45];
	g[38] = -0.001*lakes_pd[92];
	dv[46] = -0.001*x[38];
	g[38] -= dv[46];
	g[39] = -0.001*lakes_pd[90];
	dv[47] = -0.001*x[39];
	g[39] -= dv[47];
	g[46] = -0.001*lakes_pd[88];
	dv[48] = -0.001*x[46];
	g[46] -= dv[48];
	g[36] = -0.001*lakes_pd[86];
	dv[49] = -0.001*x[36];
	g[36] -= dv[49];
	g[37] = -0.001*lakes_pd[84];
	dv[50] = -0.001*x[37];
	g[37] -= dv[50];
	g[44] = -0.001*lakes_pd[82];
	dv[51] = -0.001*x[44];
	g[44] -= dv[51];
	g[34] = -0.001*lakes_pd[80];
	dv[52] = -0.001*x[34];
	g[34] -= dv[52];
	g[35] = -0.001*lakes_pd[78];
	dv[53] = -0.001*x[35];
	g[35] -= dv[53];
	g[42] = -0.001*lakes_pd[76];
	dv[54] = -0.001*x[42];
	g[42] -= dv[54];
	g[32] = -0.001*lakes_pd[74];
	dv[55] = -0.001*x[32];
	g[32] -= dv[55];
	g[33] = -0.001*lakes_pd[72];
	dv[56] = -0.001*x[33];
	g[33] -= dv[56];
	g[40] = -0.001*lakes_pd[70];
	dv[57] = -0.001*x[40];
	g[40] -= dv[57];
	g[30] = -0.001*lakes_pd[68];
	dv[58] = -0.001*x[30];
	g[30] -= dv[58];
	g[31] = -0.001*lakes_pd[66];
	dv[59] = -0.001*x[31];
	g[31] -= dv[59];
	}

	return v[1];
}

 void
lakes_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (lakes_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	lakes_pd[0] = x[18] * x[18];
	lakes_pd[1] = x[18] + x[18];
	lakes_pd[2] = 0.0841168 * lakes_pd[0];
	lakes_pd[3] = sqrt(x[0]);
	if (errno) in_trouble("sqrt",x[0]);
	if (lakes_pd[3] <= 0.) {
	domain_("sqrt'", &lakes_pd[3], 5L);
	}
	lakes_pd[4] = 0.5 / lakes_pd[3];
	v[0] = lakes_pd[2] * lakes_pd[3];
	t1 = v[0] + -x[33];
	c[0] = t1;

  /***  constraint 2  ***/

	lakes_pd[5] = x[19] * x[19];
	lakes_pd[6] = x[19] + x[19];
	lakes_pd[7] = 0.1280849 * lakes_pd[5];
	lakes_pd[8] = sqrt(x[1]);
	if (errno) in_trouble("sqrt",x[1]);
	if (lakes_pd[8] <= 0.) {
	domain_("sqrt'", &lakes_pd[8], 5L);
	}
	lakes_pd[9] = 0.5 / lakes_pd[8];
	v[0] = lakes_pd[7] * lakes_pd[8];
	t1 = v[0] + -x[35];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = pow(x[2], 2.2);
	if (errno) in_trouble2("pow",x[2],2.2);
	if (x[2] > 0.) {
	lakes_pd[10] = 2.2*(v[0]/x[2]);
	} else if (2.2 > 1.) {
	lakes_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],2.2);
	}
	v[0] *= 0.2605;
	t1 = v[0] + -x[37];
	c[2] = t1;

  /***  constraint 4  ***/

	lakes_pd[11] = x[20] * x[20];
	lakes_pd[12] = x[20] + x[20];
	lakes_pd[13] = 0.0841168 * lakes_pd[11];
	lakes_pd[14] = sqrt(x[3]);
	if (errno) in_trouble("sqrt",x[3]);
	if (lakes_pd[14] <= 0.) {
	domain_("sqrt'", &lakes_pd[14], 5L);
	}
	lakes_pd[15] = 0.5 / lakes_pd[14];
	v[0] = lakes_pd[13] * lakes_pd[14];
	t1 = v[0] + -x[43];
	c[3] = t1;

  /***  constraint 5  ***/

	lakes_pd[16] = x[21] * x[21];
	lakes_pd[17] = x[21] + x[21];
	lakes_pd[18] = 0.1280849 * lakes_pd[16];
	lakes_pd[19] = sqrt(x[4]);
	if (errno) in_trouble("sqrt",x[4]);
	if (lakes_pd[19] <= 0.) {
	domain_("sqrt'", &lakes_pd[19], 5L);
	}
	lakes_pd[20] = 0.5 / lakes_pd[19];
	v[0] = lakes_pd[18] * lakes_pd[19];
	t1 = v[0] + -x[45];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = pow(x[5], 2.2);
	if (errno) in_trouble2("pow",x[5],2.2);
	if (x[5] > 0.) {
	lakes_pd[21] = 2.2*(v[0]/x[5]);
	} else if (2.2 > 1.) {
	lakes_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],2.2);
	}
	v[0] *= 0.2605;
	t1 = v[0] + -x[47];
	c[5] = t1;

  /***  constraint 7  ***/

	lakes_pd[22] = x[22] * x[22];
	lakes_pd[23] = x[22] + x[22];
	lakes_pd[24] = 0.0841168 * lakes_pd[22];
	lakes_pd[25] = sqrt(x[6]);
	if (errno) in_trouble("sqrt",x[6]);
	if (lakes_pd[25] <= 0.) {
	domain_("sqrt'", &lakes_pd[25], 5L);
	}
	lakes_pd[26] = 0.5 / lakes_pd[25];
	v[0] = lakes_pd[24] * lakes_pd[25];
	t1 = v[0] + -x[53];
	c[6] = t1;

  /***  constraint 8  ***/

	lakes_pd[27] = x[23] * x[23];
	lakes_pd[28] = x[23] + x[23];
	lakes_pd[29] = 0.1280849 * lakes_pd[27];
	lakes_pd[30] = sqrt(x[7]);
	if (errno) in_trouble("sqrt",x[7]);
	if (lakes_pd[30] <= 0.) {
	domain_("sqrt'", &lakes_pd[30], 5L);
	}
	lakes_pd[31] = 0.5 / lakes_pd[30];
	v[0] = lakes_pd[29] * lakes_pd[30];
	t1 = v[0] + -x[55];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = pow(x[8], 2.2);
	if (errno) in_trouble2("pow",x[8],2.2);
	if (x[8] > 0.) {
	lakes_pd[32] = 2.2*(v[0]/x[8]);
	} else if (2.2 > 1.) {
	lakes_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],2.2);
	}
	v[0] *= 0.2605;
	t1 = v[0] + -x[57];
	c[8] = t1;

  /***  constraint 10  ***/

	lakes_pd[33] = x[24] * x[24];
	lakes_pd[34] = x[24] + x[24];
	lakes_pd[35] = 0.0841168 * lakes_pd[33];
	lakes_pd[36] = sqrt(x[9]);
	if (errno) in_trouble("sqrt",x[9]);
	if (lakes_pd[36] <= 0.) {
	domain_("sqrt'", &lakes_pd[36], 5L);
	}
	lakes_pd[37] = 0.5 / lakes_pd[36];
	v[0] = lakes_pd[35] * lakes_pd[36];
	t1 = v[0] + -x[63];
	c[9] = t1;

  /***  constraint 11  ***/

	lakes_pd[38] = x[25] * x[25];
	lakes_pd[39] = x[25] + x[25];
	lakes_pd[40] = 0.1280849 * lakes_pd[38];
	lakes_pd[41] = sqrt(x[10]);
	if (errno) in_trouble("sqrt",x[10]);
	if (lakes_pd[41] <= 0.) {
	domain_("sqrt'", &lakes_pd[41], 5L);
	}
	lakes_pd[42] = 0.5 / lakes_pd[41];
	v[0] = lakes_pd[40] * lakes_pd[41];
	t1 = v[0] + -x[65];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = pow(x[11], 2.2);
	if (errno) in_trouble2("pow",x[11],2.2);
	if (x[11] > 0.) {
	lakes_pd[43] = 2.2*(v[0]/x[11]);
	} else if (2.2 > 1.) {
	lakes_pd[43] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],2.2);
	}
	v[0] *= 0.2605;
	t1 = v[0] + -x[67];
	c[11] = t1;

  /***  constraint 13  ***/

	lakes_pd[44] = x[26] * x[26];
	lakes_pd[45] = x[26] + x[26];
	lakes_pd[46] = 0.0841168 * lakes_pd[44];
	lakes_pd[47] = sqrt(x[12]);
	if (errno) in_trouble("sqrt",x[12]);
	if (lakes_pd[47] <= 0.) {
	domain_("sqrt'", &lakes_pd[47], 5L);
	}
	lakes_pd[48] = 0.5 / lakes_pd[47];
	v[0] = lakes_pd[46] * lakes_pd[47];
	t1 = v[0] + -x[73];
	c[12] = t1;

  /***  constraint 14  ***/

	lakes_pd[49] = x[27] * x[27];
	lakes_pd[50] = x[27] + x[27];
	lakes_pd[51] = 0.1280849 * lakes_pd[49];
	lakes_pd[52] = sqrt(x[13]);
	if (errno) in_trouble("sqrt",x[13]);
	if (lakes_pd[52] <= 0.) {
	domain_("sqrt'", &lakes_pd[52], 5L);
	}
	lakes_pd[53] = 0.5 / lakes_pd[52];
	v[0] = lakes_pd[51] * lakes_pd[52];
	t1 = v[0] + -x[75];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = pow(x[14], 2.2);
	if (errno) in_trouble2("pow",x[14],2.2);
	if (x[14] > 0.) {
	lakes_pd[54] = 2.2*(v[0]/x[14]);
	} else if (2.2 > 1.) {
	lakes_pd[54] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],2.2);
	}
	v[0] *= 0.2605;
	t1 = v[0] + -x[77];
	c[14] = t1;

  /***  constraint 16  ***/

	lakes_pd[55] = x[28] * x[28];
	lakes_pd[56] = x[28] + x[28];
	lakes_pd[57] = 0.0841168 * lakes_pd[55];
	lakes_pd[58] = sqrt(x[15]);
	if (errno) in_trouble("sqrt",x[15]);
	if (lakes_pd[58] <= 0.) {
	domain_("sqrt'", &lakes_pd[58], 5L);
	}
	lakes_pd[59] = 0.5 / lakes_pd[58];
	v[0] = lakes_pd[57] * lakes_pd[58];
	t1 = v[0] + -x[83];
	c[15] = t1;

  /***  constraint 17  ***/

	lakes_pd[60] = x[29] * x[29];
	lakes_pd[61] = x[29] + x[29];
	lakes_pd[62] = 0.1280849 * lakes_pd[60];
	lakes_pd[63] = sqrt(x[16]);
	if (errno) in_trouble("sqrt",x[16]);
	if (lakes_pd[63] <= 0.) {
	domain_("sqrt'", &lakes_pd[63], 5L);
	}
	lakes_pd[64] = 0.5 / lakes_pd[63];
	v[0] = lakes_pd[62] * lakes_pd[63];
	t1 = v[0] + -x[85];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = pow(x[17], 2.2);
	if (errno) in_trouble2("pow",x[17],2.2);
	if (x[17] > 0.) {
	lakes_pd[65] = 2.2*(v[0]/x[17]);
	} else if (2.2 > 1.) {
	lakes_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],2.2);
	}
	v[0] *= 0.2605;
	t1 = v[0] + -x[87];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[30];
	t1 += x[31];
	t1 += x[40];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[31];
	t1 += -x[32];
	t1 += x[33];
	t1 += x[42];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[33];
	t1 += -x[34];
	t1 += x[35];
	t1 += x[44];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[35];
	t1 += -x[36];
	t1 += x[37];
	t1 += x[46];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[37];
	t1 += -x[38];
	t1 += x[39];
	t1 += x[48];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[40];
	t1 += x[41];
	t1 += x[50];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[41];
	t1 += -x[42];
	t1 += x[43];
	t1 += x[52];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[43];
	t1 += -x[44];
	t1 += x[45];
	t1 += x[54];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[45];
	t1 += -x[46];
	t1 += x[47];
	t1 += x[56];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[47];
	t1 += -x[48];
	t1 += x[49];
	t1 += x[58];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[50];
	t1 += x[51];
	t1 += x[60];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[51];
	t1 += -x[52];
	t1 += x[53];
	t1 += x[62];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[53];
	t1 += -x[54];
	t1 += x[55];
	t1 += x[64];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[55];
	t1 += -x[56];
	t1 += x[57];
	t1 += x[66];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[57];
	t1 += -x[58];
	t1 += x[59];
	t1 += x[68];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[60];
	t1 += x[61];
	t1 += x[70];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[61];
	t1 += -x[62];
	t1 += x[63];
	t1 += x[72];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[63];
	t1 += -x[64];
	t1 += x[65];
	t1 += x[74];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[65];
	t1 += -x[66];
	t1 += x[67];
	t1 += x[76];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[67];
	t1 += -x[68];
	t1 += x[69];
	t1 += x[78];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[70];
	t1 += x[71];
	t1 += x[80];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[71];
	t1 += -x[72];
	t1 += x[73];
	t1 += x[82];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[73];
	t1 += -x[74];
	t1 += x[75];
	t1 += x[84];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[75];
	t1 += -x[76];
	t1 += x[77];
	t1 += x[86];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[77];
	t1 += -x[78];
	t1 += x[79];
	t1 += x[88];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[30];
	t1 += -x[80];
	t1 += x[81];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[32];
	t1 += -x[81];
	t1 += -x[82];
	t1 += x[83];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[34];
	t1 += -x[83];
	t1 += -x[84];
	t1 += x[85];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[36];
	t1 += -x[85];
	t1 += -x[86];
	t1 += x[87];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[38];
	t1 += -x[87];
	t1 += -x[88];
	t1 += x[89];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[18];
	t1 += 0.00103993344426*x[32];
	t1 += 0.1086956521739*x[34];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[0];
	t1 += 0.002079866888519*x[32];
	t1 += -0.2173913043478*x[34];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[19];
	t1 += 0.2173913043478*x[34];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[1];
	t1 += 0.2173913043478*x[34];
	t1 += -0.009510223490252*x[36];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[2];
	t1 += 0.009510223490252*x[36];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[20];
	t1 += 0.00103993344426*x[42];
	t1 += 0.1086956521739*x[44];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[3];
	t1 += 0.002079866888519*x[42];
	t1 += -0.2173913043478*x[44];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[21];
	t1 += 0.2173913043478*x[44];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[4];
	t1 += 0.2173913043478*x[44];
	t1 += -0.009510223490252*x[46];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[5];
	t1 += 0.009510223490252*x[46];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[22];
	t1 += 0.00103993344426*x[52];
	t1 += 0.1086956521739*x[54];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[6];
	t1 += 0.002079866888519*x[52];
	t1 += -0.2173913043478*x[54];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[23];
	t1 += 0.2173913043478*x[54];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[7];
	t1 += 0.2173913043478*x[54];
	t1 += -0.009510223490252*x[56];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[8];
	t1 += 0.009510223490252*x[56];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[24];
	t1 += 0.00103993344426*x[62];
	t1 += 0.1086956521739*x[64];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[9];
	t1 += 0.002079866888519*x[62];
	t1 += -0.2173913043478*x[64];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[25];
	t1 += 0.2173913043478*x[64];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[10];
	t1 += 0.2173913043478*x[64];
	t1 += -0.009510223490252*x[66];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[11];
	t1 += 0.009510223490252*x[66];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[26];
	t1 += 0.00103993344426*x[72];
	t1 += 0.1086956521739*x[74];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[12];
	t1 += 0.002079866888519*x[72];
	t1 += -0.2173913043478*x[74];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[27];
	t1 += 0.2173913043478*x[74];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -x[13];
	t1 += 0.2173913043478*x[74];
	t1 += -0.009510223490252*x[76];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[14];
	t1 += 0.009510223490252*x[76];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[28];
	t1 += 0.00103993344426*x[82];
	t1 += 0.1086956521739*x[84];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[15];
	t1 += 0.002079866888519*x[82];
	t1 += -0.2173913043478*x[84];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[29];
	t1 += 0.2173913043478*x[84];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[16];
	t1 += 0.2173913043478*x[84];
	t1 += -0.009510223490252*x[86];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[17];
	t1 += 0.009510223490252*x[86];
	c[77] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = lakes_pd[2]*lakes_pd[4];
	dv[0] = lakes_pd[3]*0.0841168;
	J[36] = dv[0]*lakes_pd[1];
	J[68] = -1.;

   /*** derivatives for constraint 2 ***/

	J[2] = lakes_pd[7]*lakes_pd[9];
	dv[0] = lakes_pd[8]*0.1280849;
	J[38] = dv[0]*lakes_pd[6];
	J[77] = -1.;

   /*** derivatives for constraint 3 ***/

	J[4] = 0.2605*lakes_pd[10];
	J[84] = -1.;

   /*** derivatives for constraint 4 ***/

	J[6] = lakes_pd[13]*lakes_pd[15];
	dv[0] = lakes_pd[14]*0.0841168;
	J[40] = dv[0]*lakes_pd[12];
	J[98] = -1.;

   /*** derivatives for constraint 5 ***/

	J[8] = lakes_pd[18]*lakes_pd[20];
	dv[0] = lakes_pd[19]*0.1280849;
	J[42] = dv[0]*lakes_pd[17];
	J[107] = -1.;

   /*** derivatives for constraint 6 ***/

	J[10] = 0.2605*lakes_pd[21];
	J[114] = -1.;

   /*** derivatives for constraint 7 ***/

	J[12] = lakes_pd[24]*lakes_pd[26];
	dv[0] = lakes_pd[25]*0.0841168;
	J[44] = dv[0]*lakes_pd[23];
	J[128] = -1.;

   /*** derivatives for constraint 8 ***/

	J[14] = lakes_pd[29]*lakes_pd[31];
	dv[0] = lakes_pd[30]*0.1280849;
	J[46] = dv[0]*lakes_pd[28];
	J[137] = -1.;

   /*** derivatives for constraint 9 ***/

	J[16] = 0.2605*lakes_pd[32];
	J[144] = -1.;

   /*** derivatives for constraint 10 ***/

	J[18] = lakes_pd[35]*lakes_pd[37];
	dv[0] = lakes_pd[36]*0.0841168;
	J[48] = dv[0]*lakes_pd[34];
	J[158] = -1.;

   /*** derivatives for constraint 11 ***/

	J[20] = lakes_pd[40]*lakes_pd[42];
	dv[0] = lakes_pd[41]*0.1280849;
	J[50] = dv[0]*lakes_pd[39];
	J[167] = -1.;

   /*** derivatives for constraint 12 ***/

	J[22] = 0.2605*lakes_pd[43];
	J[174] = -1.;

   /*** derivatives for constraint 13 ***/

	J[24] = lakes_pd[46]*lakes_pd[48];
	dv[0] = lakes_pd[47]*0.0841168;
	J[52] = dv[0]*lakes_pd[45];
	J[188] = -1.;

   /*** derivatives for constraint 14 ***/

	J[26] = lakes_pd[51]*lakes_pd[53];
	dv[0] = lakes_pd[52]*0.1280849;
	J[54] = dv[0]*lakes_pd[50];
	J[197] = -1.;

   /*** derivatives for constraint 15 ***/

	J[28] = 0.2605*lakes_pd[54];
	J[204] = -1.;

   /*** derivatives for constraint 16 ***/

	J[30] = lakes_pd[57]*lakes_pd[59];
	dv[0] = lakes_pd[58]*0.0841168;
	J[56] = dv[0]*lakes_pd[56];
	J[218] = -1.;

   /*** derivatives for constraint 17 ***/

	J[32] = lakes_pd[62]*lakes_pd[64];
	dv[0] = lakes_pd[63]*0.1280849;
	J[58] = dv[0]*lakes_pd[61];
	J[227] = -1.;

   /*** derivatives for constraint 18 ***/

	J[34] = 0.2605*lakes_pd[65];
	J[234] = -1.;

   /*** derivatives for constraint 19 ***/

	J[60] = -1.;
	J[62] = 1.;
	J[90] = 1.;

   /*** derivatives for constraint 20 ***/

	J[63] = -1.;
	J[64] = -1.;
	J[69] = 1.;
	J[94] = 1.;

   /*** derivatives for constraint 21 ***/

	J[70] = -1.;
	J[71] = -1.;
	J[78] = 1.;
	J[101] = 1.;

   /*** derivatives for constraint 22 ***/

	J[79] = -1.;
	J[80] = -1.;
	J[85] = 1.;
	J[110] = 1.;

   /*** derivatives for constraint 23 ***/

	J[86] = -1.;
	J[87] = -1.;
	J[89] = 1.;
	J[117] = 1.;

   /*** derivatives for constraint 24 ***/

	J[91] = -1.;
	J[92] = 1.;
	J[120] = 1.;

   /*** derivatives for constraint 25 ***/

	J[93] = -1.;
	J[95] = -1.;
	J[99] = 1.;
	J[124] = 1.;

   /*** derivatives for constraint 26 ***/

	J[100] = -1.;
	J[102] = -1.;
	J[108] = 1.;
	J[131] = 1.;

   /*** derivatives for constraint 27 ***/

	J[109] = -1.;
	J[111] = -1.;
	J[115] = 1.;
	J[140] = 1.;

   /*** derivatives for constraint 28 ***/

	J[116] = -1.;
	J[118] = -1.;
	J[119] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 29 ***/

	J[121] = -1.;
	J[122] = 1.;
	J[150] = 1.;

   /*** derivatives for constraint 30 ***/

	J[123] = -1.;
	J[125] = -1.;
	J[129] = 1.;
	J[154] = 1.;

   /*** derivatives for constraint 31 ***/

	J[130] = -1.;
	J[132] = -1.;
	J[138] = 1.;
	J[161] = 1.;

   /*** derivatives for constraint 32 ***/

	J[139] = -1.;
	J[141] = -1.;
	J[145] = 1.;
	J[170] = 1.;

   /*** derivatives for constraint 33 ***/

	J[146] = -1.;
	J[148] = -1.;
	J[149] = 1.;
	J[177] = 1.;

   /*** derivatives for constraint 34 ***/

	J[151] = -1.;
	J[152] = 1.;
	J[180] = 1.;

   /*** derivatives for constraint 35 ***/

	J[153] = -1.;
	J[155] = -1.;
	J[159] = 1.;
	J[184] = 1.;

   /*** derivatives for constraint 36 ***/

	J[160] = -1.;
	J[162] = -1.;
	J[168] = 1.;
	J[191] = 1.;

   /*** derivatives for constraint 37 ***/

	J[169] = -1.;
	J[171] = -1.;
	J[175] = 1.;
	J[200] = 1.;

   /*** derivatives for constraint 38 ***/

	J[176] = -1.;
	J[178] = -1.;
	J[179] = 1.;
	J[207] = 1.;

   /*** derivatives for constraint 39 ***/

	J[181] = -1.;
	J[182] = 1.;
	J[210] = 1.;

   /*** derivatives for constraint 40 ***/

	J[183] = -1.;
	J[185] = -1.;
	J[189] = 1.;
	J[214] = 1.;

   /*** derivatives for constraint 41 ***/

	J[190] = -1.;
	J[192] = -1.;
	J[198] = 1.;
	J[221] = 1.;

   /*** derivatives for constraint 42 ***/

	J[199] = -1.;
	J[201] = -1.;
	J[205] = 1.;
	J[230] = 1.;

   /*** derivatives for constraint 43 ***/

	J[206] = -1.;
	J[208] = -1.;
	J[209] = 1.;
	J[237] = 1.;

   /*** derivatives for constraint 44 ***/

	J[61] = 1.;
	J[211] = -1.;
	J[212] = 1.;

   /*** derivatives for constraint 45 ***/

	J[65] = 1.;
	J[213] = -1.;
	J[215] = -1.;
	J[219] = 1.;

   /*** derivatives for constraint 46 ***/

	J[72] = 1.;
	J[220] = -1.;
	J[222] = -1.;
	J[228] = 1.;

   /*** derivatives for constraint 47 ***/

	J[81] = 1.;
	J[229] = -1.;
	J[231] = -1.;
	J[235] = 1.;

   /*** derivatives for constraint 48 ***/

	J[88] = 1.;
	J[236] = -1.;
	J[238] = -1.;
	J[239] = 1.;

   /*** derivatives for constraint 49 ***/

	J[37] = -1.;
	J[66] = 0.00103993344426;
	J[73] = 0.1086956521739;

   /*** derivatives for constraint 50 ***/

	J[1] = -1.;
	J[67] = 0.002079866888519;
	J[74] = -0.2173913043478;

   /*** derivatives for constraint 51 ***/

	J[39] = -1.;
	J[75] = 0.2173913043478;

   /*** derivatives for constraint 52 ***/

	J[3] = -1.;
	J[76] = 0.2173913043478;
	J[82] = -0.009510223490252;

   /*** derivatives for constraint 53 ***/

	J[5] = -1.;
	J[83] = 0.009510223490252;

   /*** derivatives for constraint 54 ***/

	J[41] = -1.;
	J[96] = 0.00103993344426;
	J[103] = 0.1086956521739;

   /*** derivatives for constraint 55 ***/

	J[7] = -1.;
	J[97] = 0.002079866888519;
	J[104] = -0.2173913043478;

   /*** derivatives for constraint 56 ***/

	J[43] = -1.;
	J[105] = 0.2173913043478;

   /*** derivatives for constraint 57 ***/

	J[9] = -1.;
	J[106] = 0.2173913043478;
	J[112] = -0.009510223490252;

   /*** derivatives for constraint 58 ***/

	J[11] = -1.;
	J[113] = 0.009510223490252;

   /*** derivatives for constraint 59 ***/

	J[45] = -1.;
	J[126] = 0.00103993344426;
	J[133] = 0.1086956521739;

   /*** derivatives for constraint 60 ***/

	J[13] = -1.;
	J[127] = 0.002079866888519;
	J[134] = -0.2173913043478;

   /*** derivatives for constraint 61 ***/

	J[47] = -1.;
	J[135] = 0.2173913043478;

   /*** derivatives for constraint 62 ***/

	J[15] = -1.;
	J[136] = 0.2173913043478;
	J[142] = -0.009510223490252;

   /*** derivatives for constraint 63 ***/

	J[17] = -1.;
	J[143] = 0.009510223490252;

   /*** derivatives for constraint 64 ***/

	J[49] = -1.;
	J[156] = 0.00103993344426;
	J[163] = 0.1086956521739;

   /*** derivatives for constraint 65 ***/

	J[19] = -1.;
	J[157] = 0.002079866888519;
	J[164] = -0.2173913043478;

   /*** derivatives for constraint 66 ***/

	J[51] = -1.;
	J[165] = 0.2173913043478;

   /*** derivatives for constraint 67 ***/

	J[21] = -1.;
	J[166] = 0.2173913043478;
	J[172] = -0.009510223490252;

   /*** derivatives for constraint 68 ***/

	J[23] = -1.;
	J[173] = 0.009510223490252;

   /*** derivatives for constraint 69 ***/

	J[53] = -1.;
	J[186] = 0.00103993344426;
	J[193] = 0.1086956521739;

   /*** derivatives for constraint 70 ***/

	J[25] = -1.;
	J[187] = 0.002079866888519;
	J[194] = -0.2173913043478;

   /*** derivatives for constraint 71 ***/

	J[55] = -1.;
	J[195] = 0.2173913043478;

   /*** derivatives for constraint 72 ***/

	J[27] = -1.;
	J[196] = 0.2173913043478;
	J[202] = -0.009510223490252;

   /*** derivatives for constraint 73 ***/

	J[29] = -1.;
	J[203] = 0.009510223490252;

   /*** derivatives for constraint 74 ***/

	J[57] = -1.;
	J[216] = 0.00103993344426;
	J[223] = 0.1086956521739;

   /*** derivatives for constraint 75 ***/

	J[31] = -1.;
	J[217] = 0.002079866888519;
	J[224] = -0.2173913043478;

   /*** derivatives for constraint 76 ***/

	J[59] = -1.;
	J[225] = 0.2173913043478;

   /*** derivatives for constraint 77 ***/

	J[33] = -1.;
	J[226] = 0.2173913043478;
	J[232] = -0.009510223490252;

   /*** derivatives for constraint 78 ***/

	J[35] = -1.;
	J[233] = 0.009510223490252;
	}
}
#ifdef __cplusplus
	}
#endif
