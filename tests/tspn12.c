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
 fint tspn12_auxcom_[1] = { 12 /* nlc */ };
 fint tspn12_funcom_[262] = {
	90 /* nvar */,
	1 /* nobj */,
	26 /* ncon */,
	165 /* nzc */,
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
	27,
	31,
	35,
	37,
	39,
	41,
	43,
	45,
	47,
	50,
	52,
	54,
	56,
	58,
	60,
	62,
	64,
	66,
	68,
	70,
	72,
	76,
	78,
	80,
	82,
	84,
	86,
	88,
	91,
	93,
	95,
	97,
	99,
	101,
	103,
	105,
	108,
	110,
	112,
	114,
	116,
	118,
	120,
	122,
	124,
	126,
	128,
	130,
	132,
	134,
	136,
	138,
	140,
	142,
	144,
	146,
	148,
	150,
	152,
	154,
	156,
	158,
	160,
	162,
	164,
	166,

	/* rownos */
	1,
	1,
	2,
	2,
	3,
	3,
	4,
	4,
	5,
	5,
	6,
	6,
	7,
	7,
	8,
	8,
	9,
	9,
	10,
	10,
	11,
	11,
	12,
	12,
	13,
	14,
	13,
	15,
	25,
	26,
	13,
	16,
	25,
	26,
	13,
	17,
	13,
	18,
	13,
	19,
	13,
	20,
	13,
	21,
	13,
	22,
	13,
	23,
	25,
	13,
	24,
	14,
	15,
	14,
	16,
	14,
	17,
	14,
	18,
	14,
	19,
	14,
	20,
	14,
	21,
	14,
	22,
	14,
	23,
	14,
	24,
	15,
	16,
	25,
	26,
	15,
	17,
	15,
	18,
	15,
	19,
	15,
	20,
	15,
	21,
	15,
	22,
	15,
	23,
	25,
	15,
	24,
	16,
	17,
	16,
	18,
	16,
	19,
	16,
	20,
	16,
	21,
	16,
	22,
	16,
	23,
	25,
	16,
	24,
	17,
	18,
	17,
	19,
	17,
	20,
	17,
	21,
	17,
	22,
	17,
	23,
	17,
	24,
	18,
	19,
	18,
	20,
	18,
	21,
	18,
	22,
	18,
	23,
	18,
	24,
	19,
	20,
	19,
	21,
	19,
	22,
	19,
	23,
	19,
	24,
	20,
	21,
	20,
	22,
	20,
	23,
	20,
	24,
	21,
	22,
	21,
	23,
	21,
	24,
	22,
	23,
	22,
	24,
	23,
	24 };

 real tspn12_boundc_[1+180+52] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		17.,
		49.,
		64.,
		102.,
		119.,
		42.,
		50.,
		26.,
		40.,
		65.,
		84.,
		6.,
		27.,
		74.,
		86.,
		33.,
		45.,
		37.,
		53.,
		94.,
		113.,
		0.,
		14.,
		93.,
		112.,
		56.,
		70.,
		66.,
		77.,
		87.,
		96.,
		51.,
		60.,
		12.,
		26.,
		49.,
		75.,
		41.,
		54.,
		17.,
		28.,
		25.,
		43.,
		92.,
		104.,
		79.,
		88.,
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
		-56.7511111111111,
		-1.7e308,
		-300.25,
		-1.7e308,
		-82.7231047543671,
		-1.7e308,
		-179.24716553288,
		-1.7e308,
		-72.890625,
		-1.7e308,
		-118.695290858726,
		-1.7e308,
		-196.412742382271,
		-1.7e308,
		-581.444444444444,
		-1.7e308,
		-158.478458049887,
		-1.7e308,
		-75.1479289940828,
		-1.7e308,
		-30.0071421283542,
		-1.7e308,
		-610.086419753086,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		-1.7e308,
		3.,
		-1.7e308,
		2.};

 real tspn12_x0comn_[90] = {
		0.,
		49.,
		102.,
		42.,
		26.,
		65.,
		6.,
		74.,
		33.,
		37.,
		94.,
		0.,
		93.,
		56.,
		66.,
		87.,
		51.,
		12.,
		49.,
		41.,
		17.,
		25.,
		92.,
		79.,
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

 static real tspn12_pd[312];
static real tspn12_old_x[90];
static int tspn12_xkind = -1;

 static int
tspn12_xcheck(real *x)
{
	real *x1 = tspn12_old_x, *xe = x + 90;
	errno = 0;
	if (tspn12_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tspn12_xkind = 0;
	return 1;
	}
 real
tspn12_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[132];
	fint wantfg = *needfg;
	if (tspn12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] - x[2];
	v[1] = v[0] * v[0];
	tspn12_pd[48] = v[0] + v[0];
	v[0] = x[1] - x[3];
	v[2] = v[0] * v[0];
	tspn12_pd[49] = v[0] + v[0];
	v[0] = v[1] + v[2];
	tspn12_pd[50] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (tspn12_pd[50] <= 0.) {
	domain_("sqrt'", &tspn12_pd[50], 5L);
	}
	tspn12_pd[51] = 0.5 / tspn12_pd[50];
	v[0] = tspn12_pd[50] * x[24];
	v[2] = x[0] - x[4];
	v[1] = v[2] * v[2];
	tspn12_pd[52] = v[2] + v[2];
	v[2] = x[1] - x[5];
	v[3] = v[2] * v[2];
	tspn12_pd[53] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[54] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[54] <= 0.) {
	domain_("sqrt'", &tspn12_pd[54], 5L);
	}
	tspn12_pd[55] = 0.5 / tspn12_pd[54];
	v[2] = tspn12_pd[54] * x[25];
	v[0] += v[2];
	v[2] = x[0] - x[6];
	v[3] = v[2] * v[2];
	tspn12_pd[56] = v[2] + v[2];
	v[2] = x[1] - x[7];
	v[1] = v[2] * v[2];
	tspn12_pd[57] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[58] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[58] <= 0.) {
	domain_("sqrt'", &tspn12_pd[58], 5L);
	}
	tspn12_pd[59] = 0.5 / tspn12_pd[58];
	v[2] = tspn12_pd[58] * x[26];
	v[0] += v[2];
	v[2] = x[0] - x[8];
	v[1] = v[2] * v[2];
	tspn12_pd[60] = v[2] + v[2];
	v[2] = x[1] - x[9];
	v[3] = v[2] * v[2];
	tspn12_pd[61] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[62] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[62] <= 0.) {
	domain_("sqrt'", &tspn12_pd[62], 5L);
	}
	tspn12_pd[63] = 0.5 / tspn12_pd[62];
	v[2] = tspn12_pd[62] * x[27];
	v[0] += v[2];
	v[2] = x[0] - x[10];
	v[3] = v[2] * v[2];
	tspn12_pd[64] = v[2] + v[2];
	v[2] = x[1] - x[11];
	v[1] = v[2] * v[2];
	tspn12_pd[65] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[66] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[66] <= 0.) {
	domain_("sqrt'", &tspn12_pd[66], 5L);
	}
	tspn12_pd[67] = 0.5 / tspn12_pd[66];
	v[2] = tspn12_pd[66] * x[28];
	v[0] += v[2];
	v[2] = x[0] - x[12];
	v[1] = v[2] * v[2];
	tspn12_pd[68] = v[2] + v[2];
	v[2] = x[1] - x[13];
	v[3] = v[2] * v[2];
	tspn12_pd[69] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[70] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[70] <= 0.) {
	domain_("sqrt'", &tspn12_pd[70], 5L);
	}
	tspn12_pd[71] = 0.5 / tspn12_pd[70];
	v[2] = tspn12_pd[70] * x[29];
	v[0] += v[2];
	v[2] = x[0] - x[14];
	v[3] = v[2] * v[2];
	tspn12_pd[72] = v[2] + v[2];
	v[2] = x[1] - x[15];
	v[1] = v[2] * v[2];
	tspn12_pd[73] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[74] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[74] <= 0.) {
	domain_("sqrt'", &tspn12_pd[74], 5L);
	}
	tspn12_pd[75] = 0.5 / tspn12_pd[74];
	v[2] = tspn12_pd[74] * x[30];
	v[0] += v[2];
	v[2] = x[0] - x[16];
	v[1] = v[2] * v[2];
	tspn12_pd[76] = v[2] + v[2];
	v[2] = x[1] - x[17];
	v[3] = v[2] * v[2];
	tspn12_pd[77] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[78] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[78] <= 0.) {
	domain_("sqrt'", &tspn12_pd[78], 5L);
	}
	tspn12_pd[79] = 0.5 / tspn12_pd[78];
	v[2] = tspn12_pd[78] * x[31];
	v[0] += v[2];
	v[2] = x[0] - x[18];
	v[3] = v[2] * v[2];
	tspn12_pd[80] = v[2] + v[2];
	v[2] = x[1] - x[19];
	v[1] = v[2] * v[2];
	tspn12_pd[81] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[82] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[82] <= 0.) {
	domain_("sqrt'", &tspn12_pd[82], 5L);
	}
	tspn12_pd[83] = 0.5 / tspn12_pd[82];
	v[2] = tspn12_pd[82] * x[32];
	v[0] += v[2];
	v[2] = x[0] - x[20];
	v[1] = v[2] * v[2];
	tspn12_pd[84] = v[2] + v[2];
	v[2] = x[1] - x[21];
	v[3] = v[2] * v[2];
	tspn12_pd[85] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[86] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[86] <= 0.) {
	domain_("sqrt'", &tspn12_pd[86], 5L);
	}
	tspn12_pd[87] = 0.5 / tspn12_pd[86];
	v[2] = tspn12_pd[86] * x[33];
	v[0] += v[2];
	v[2] = x[0] - x[22];
	v[3] = v[2] * v[2];
	tspn12_pd[88] = v[2] + v[2];
	v[2] = x[1] - x[23];
	v[1] = v[2] * v[2];
	tspn12_pd[89] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[90] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[90] <= 0.) {
	domain_("sqrt'", &tspn12_pd[90], 5L);
	}
	tspn12_pd[91] = 0.5 / tspn12_pd[90];
	v[2] = tspn12_pd[90] * x[34];
	v[0] += v[2];
	v[2] = x[2] - x[4];
	v[1] = v[2] * v[2];
	tspn12_pd[92] = v[2] + v[2];
	v[2] = x[3] - x[5];
	v[3] = v[2] * v[2];
	tspn12_pd[93] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[94] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[94] <= 0.) {
	domain_("sqrt'", &tspn12_pd[94], 5L);
	}
	tspn12_pd[95] = 0.5 / tspn12_pd[94];
	v[2] = tspn12_pd[94] * x[35];
	v[0] += v[2];
	v[2] = x[2] - x[6];
	v[3] = v[2] * v[2];
	tspn12_pd[96] = v[2] + v[2];
	v[2] = x[3] - x[7];
	v[1] = v[2] * v[2];
	tspn12_pd[97] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[98] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[98] <= 0.) {
	domain_("sqrt'", &tspn12_pd[98], 5L);
	}
	tspn12_pd[99] = 0.5 / tspn12_pd[98];
	v[2] = tspn12_pd[98] * x[36];
	v[0] += v[2];
	v[2] = x[2] - x[8];
	v[1] = v[2] * v[2];
	tspn12_pd[100] = v[2] + v[2];
	v[2] = x[3] - x[9];
	v[3] = v[2] * v[2];
	tspn12_pd[101] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[102] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[102] <= 0.) {
	domain_("sqrt'", &tspn12_pd[102], 5L);
	}
	tspn12_pd[103] = 0.5 / tspn12_pd[102];
	v[2] = tspn12_pd[102] * x[37];
	v[0] += v[2];
	v[2] = x[2] - x[10];
	v[3] = v[2] * v[2];
	tspn12_pd[104] = v[2] + v[2];
	v[2] = x[3] - x[11];
	v[1] = v[2] * v[2];
	tspn12_pd[105] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[106] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[106] <= 0.) {
	domain_("sqrt'", &tspn12_pd[106], 5L);
	}
	tspn12_pd[107] = 0.5 / tspn12_pd[106];
	v[2] = tspn12_pd[106] * x[38];
	v[0] += v[2];
	v[2] = x[2] - x[12];
	v[1] = v[2] * v[2];
	tspn12_pd[108] = v[2] + v[2];
	v[2] = x[3] - x[13];
	v[3] = v[2] * v[2];
	tspn12_pd[109] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[110] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[110] <= 0.) {
	domain_("sqrt'", &tspn12_pd[110], 5L);
	}
	tspn12_pd[111] = 0.5 / tspn12_pd[110];
	v[2] = tspn12_pd[110] * x[39];
	v[0] += v[2];
	v[2] = x[2] - x[14];
	v[3] = v[2] * v[2];
	tspn12_pd[112] = v[2] + v[2];
	v[2] = x[3] - x[15];
	v[1] = v[2] * v[2];
	tspn12_pd[113] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[114] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[114] <= 0.) {
	domain_("sqrt'", &tspn12_pd[114], 5L);
	}
	tspn12_pd[115] = 0.5 / tspn12_pd[114];
	v[2] = tspn12_pd[114] * x[40];
	v[0] += v[2];
	v[2] = x[2] - x[16];
	v[1] = v[2] * v[2];
	tspn12_pd[116] = v[2] + v[2];
	v[2] = x[3] - x[17];
	v[3] = v[2] * v[2];
	tspn12_pd[117] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[118] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[118] <= 0.) {
	domain_("sqrt'", &tspn12_pd[118], 5L);
	}
	tspn12_pd[119] = 0.5 / tspn12_pd[118];
	v[2] = tspn12_pd[118] * x[41];
	v[0] += v[2];
	v[2] = x[2] - x[18];
	v[3] = v[2] * v[2];
	tspn12_pd[120] = v[2] + v[2];
	v[2] = x[3] - x[19];
	v[1] = v[2] * v[2];
	tspn12_pd[121] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[122] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[122] <= 0.) {
	domain_("sqrt'", &tspn12_pd[122], 5L);
	}
	tspn12_pd[123] = 0.5 / tspn12_pd[122];
	v[2] = tspn12_pd[122] * x[42];
	v[0] += v[2];
	v[2] = x[2] - x[20];
	v[1] = v[2] * v[2];
	tspn12_pd[124] = v[2] + v[2];
	v[2] = x[3] - x[21];
	v[3] = v[2] * v[2];
	tspn12_pd[125] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[126] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[126] <= 0.) {
	domain_("sqrt'", &tspn12_pd[126], 5L);
	}
	tspn12_pd[127] = 0.5 / tspn12_pd[126];
	v[2] = tspn12_pd[126] * x[43];
	v[0] += v[2];
	v[2] = x[2] - x[22];
	v[3] = v[2] * v[2];
	tspn12_pd[128] = v[2] + v[2];
	v[2] = x[3] - x[23];
	v[1] = v[2] * v[2];
	tspn12_pd[129] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[130] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[130] <= 0.) {
	domain_("sqrt'", &tspn12_pd[130], 5L);
	}
	tspn12_pd[131] = 0.5 / tspn12_pd[130];
	v[2] = tspn12_pd[130] * x[44];
	v[0] += v[2];
	v[2] = x[4] - x[6];
	v[1] = v[2] * v[2];
	tspn12_pd[132] = v[2] + v[2];
	v[2] = x[5] - x[7];
	v[3] = v[2] * v[2];
	tspn12_pd[133] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[134] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[134] <= 0.) {
	domain_("sqrt'", &tspn12_pd[134], 5L);
	}
	tspn12_pd[135] = 0.5 / tspn12_pd[134];
	v[2] = tspn12_pd[134] * x[45];
	v[0] += v[2];
	v[2] = x[4] - x[8];
	v[3] = v[2] * v[2];
	tspn12_pd[136] = v[2] + v[2];
	v[2] = x[5] - x[9];
	v[1] = v[2] * v[2];
	tspn12_pd[137] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[138] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[138] <= 0.) {
	domain_("sqrt'", &tspn12_pd[138], 5L);
	}
	tspn12_pd[139] = 0.5 / tspn12_pd[138];
	v[2] = tspn12_pd[138] * x[46];
	v[0] += v[2];
	v[2] = x[4] - x[10];
	v[1] = v[2] * v[2];
	tspn12_pd[140] = v[2] + v[2];
	v[2] = x[5] - x[11];
	v[3] = v[2] * v[2];
	tspn12_pd[141] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[142] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[142] <= 0.) {
	domain_("sqrt'", &tspn12_pd[142], 5L);
	}
	tspn12_pd[143] = 0.5 / tspn12_pd[142];
	v[2] = tspn12_pd[142] * x[47];
	v[0] += v[2];
	v[2] = x[4] - x[12];
	v[3] = v[2] * v[2];
	tspn12_pd[144] = v[2] + v[2];
	v[2] = x[5] - x[13];
	v[1] = v[2] * v[2];
	tspn12_pd[145] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[146] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[146] <= 0.) {
	domain_("sqrt'", &tspn12_pd[146], 5L);
	}
	tspn12_pd[147] = 0.5 / tspn12_pd[146];
	v[2] = tspn12_pd[146] * x[48];
	v[0] += v[2];
	v[2] = x[4] - x[14];
	v[1] = v[2] * v[2];
	tspn12_pd[148] = v[2] + v[2];
	v[2] = x[5] - x[15];
	v[3] = v[2] * v[2];
	tspn12_pd[149] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[150] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[150] <= 0.) {
	domain_("sqrt'", &tspn12_pd[150], 5L);
	}
	tspn12_pd[151] = 0.5 / tspn12_pd[150];
	v[2] = tspn12_pd[150] * x[49];
	v[0] += v[2];
	v[2] = x[4] - x[16];
	v[3] = v[2] * v[2];
	tspn12_pd[152] = v[2] + v[2];
	v[2] = x[5] - x[17];
	v[1] = v[2] * v[2];
	tspn12_pd[153] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[154] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[154] <= 0.) {
	domain_("sqrt'", &tspn12_pd[154], 5L);
	}
	tspn12_pd[155] = 0.5 / tspn12_pd[154];
	v[2] = tspn12_pd[154] * x[50];
	v[0] += v[2];
	v[2] = x[4] - x[18];
	v[1] = v[2] * v[2];
	tspn12_pd[156] = v[2] + v[2];
	v[2] = x[5] - x[19];
	v[3] = v[2] * v[2];
	tspn12_pd[157] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[158] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[158] <= 0.) {
	domain_("sqrt'", &tspn12_pd[158], 5L);
	}
	tspn12_pd[159] = 0.5 / tspn12_pd[158];
	v[2] = tspn12_pd[158] * x[51];
	v[0] += v[2];
	v[2] = x[4] - x[20];
	v[3] = v[2] * v[2];
	tspn12_pd[160] = v[2] + v[2];
	v[2] = x[5] - x[21];
	v[1] = v[2] * v[2];
	tspn12_pd[161] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[162] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[162] <= 0.) {
	domain_("sqrt'", &tspn12_pd[162], 5L);
	}
	tspn12_pd[163] = 0.5 / tspn12_pd[162];
	v[2] = tspn12_pd[162] * x[52];
	v[0] += v[2];
	v[2] = x[4] - x[22];
	v[1] = v[2] * v[2];
	tspn12_pd[164] = v[2] + v[2];
	v[2] = x[5] - x[23];
	v[3] = v[2] * v[2];
	tspn12_pd[165] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[166] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[166] <= 0.) {
	domain_("sqrt'", &tspn12_pd[166], 5L);
	}
	tspn12_pd[167] = 0.5 / tspn12_pd[166];
	v[2] = tspn12_pd[166] * x[53];
	v[0] += v[2];
	v[2] = x[6] - x[8];
	v[3] = v[2] * v[2];
	tspn12_pd[168] = v[2] + v[2];
	v[2] = x[7] - x[9];
	v[1] = v[2] * v[2];
	tspn12_pd[169] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[170] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[170] <= 0.) {
	domain_("sqrt'", &tspn12_pd[170], 5L);
	}
	tspn12_pd[171] = 0.5 / tspn12_pd[170];
	v[2] = tspn12_pd[170] * x[54];
	v[0] += v[2];
	v[2] = x[6] - x[10];
	v[1] = v[2] * v[2];
	tspn12_pd[172] = v[2] + v[2];
	v[2] = x[7] - x[11];
	v[3] = v[2] * v[2];
	tspn12_pd[173] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[174] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[174] <= 0.) {
	domain_("sqrt'", &tspn12_pd[174], 5L);
	}
	tspn12_pd[175] = 0.5 / tspn12_pd[174];
	v[2] = tspn12_pd[174] * x[55];
	v[0] += v[2];
	v[2] = x[6] - x[12];
	v[3] = v[2] * v[2];
	tspn12_pd[176] = v[2] + v[2];
	v[2] = x[7] - x[13];
	v[1] = v[2] * v[2];
	tspn12_pd[177] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[178] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[178] <= 0.) {
	domain_("sqrt'", &tspn12_pd[178], 5L);
	}
	tspn12_pd[179] = 0.5 / tspn12_pd[178];
	v[2] = tspn12_pd[178] * x[56];
	v[0] += v[2];
	v[2] = x[6] - x[14];
	v[1] = v[2] * v[2];
	tspn12_pd[180] = v[2] + v[2];
	v[2] = x[7] - x[15];
	v[3] = v[2] * v[2];
	tspn12_pd[181] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[182] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[182] <= 0.) {
	domain_("sqrt'", &tspn12_pd[182], 5L);
	}
	tspn12_pd[183] = 0.5 / tspn12_pd[182];
	v[2] = tspn12_pd[182] * x[57];
	v[0] += v[2];
	v[2] = x[6] - x[16];
	v[3] = v[2] * v[2];
	tspn12_pd[184] = v[2] + v[2];
	v[2] = x[7] - x[17];
	v[1] = v[2] * v[2];
	tspn12_pd[185] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[186] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[186] <= 0.) {
	domain_("sqrt'", &tspn12_pd[186], 5L);
	}
	tspn12_pd[187] = 0.5 / tspn12_pd[186];
	v[2] = tspn12_pd[186] * x[58];
	v[0] += v[2];
	v[2] = x[6] - x[18];
	v[1] = v[2] * v[2];
	tspn12_pd[188] = v[2] + v[2];
	v[2] = x[7] - x[19];
	v[3] = v[2] * v[2];
	tspn12_pd[189] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[190] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[190] <= 0.) {
	domain_("sqrt'", &tspn12_pd[190], 5L);
	}
	tspn12_pd[191] = 0.5 / tspn12_pd[190];
	v[2] = tspn12_pd[190] * x[59];
	v[0] += v[2];
	v[2] = x[6] - x[20];
	v[3] = v[2] * v[2];
	tspn12_pd[192] = v[2] + v[2];
	v[2] = x[7] - x[21];
	v[1] = v[2] * v[2];
	tspn12_pd[193] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[194] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[194] <= 0.) {
	domain_("sqrt'", &tspn12_pd[194], 5L);
	}
	tspn12_pd[195] = 0.5 / tspn12_pd[194];
	v[2] = tspn12_pd[194] * x[60];
	v[0] += v[2];
	v[2] = x[6] - x[22];
	v[1] = v[2] * v[2];
	tspn12_pd[196] = v[2] + v[2];
	v[2] = x[7] - x[23];
	v[3] = v[2] * v[2];
	tspn12_pd[197] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[198] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[198] <= 0.) {
	domain_("sqrt'", &tspn12_pd[198], 5L);
	}
	tspn12_pd[199] = 0.5 / tspn12_pd[198];
	v[2] = tspn12_pd[198] * x[61];
	v[0] += v[2];
	v[2] = x[8] - x[10];
	v[3] = v[2] * v[2];
	tspn12_pd[200] = v[2] + v[2];
	v[2] = x[9] - x[11];
	v[1] = v[2] * v[2];
	tspn12_pd[201] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[202] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[202] <= 0.) {
	domain_("sqrt'", &tspn12_pd[202], 5L);
	}
	tspn12_pd[203] = 0.5 / tspn12_pd[202];
	v[2] = tspn12_pd[202] * x[62];
	v[0] += v[2];
	v[2] = x[8] - x[12];
	v[1] = v[2] * v[2];
	tspn12_pd[204] = v[2] + v[2];
	v[2] = x[9] - x[13];
	v[3] = v[2] * v[2];
	tspn12_pd[205] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[206] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[206] <= 0.) {
	domain_("sqrt'", &tspn12_pd[206], 5L);
	}
	tspn12_pd[207] = 0.5 / tspn12_pd[206];
	v[2] = tspn12_pd[206] * x[63];
	v[0] += v[2];
	v[2] = x[8] - x[14];
	v[3] = v[2] * v[2];
	tspn12_pd[208] = v[2] + v[2];
	v[2] = x[9] - x[15];
	v[1] = v[2] * v[2];
	tspn12_pd[209] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[210] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[210] <= 0.) {
	domain_("sqrt'", &tspn12_pd[210], 5L);
	}
	tspn12_pd[211] = 0.5 / tspn12_pd[210];
	v[2] = tspn12_pd[210] * x[64];
	v[0] += v[2];
	v[2] = x[8] - x[16];
	v[1] = v[2] * v[2];
	tspn12_pd[212] = v[2] + v[2];
	v[2] = x[9] - x[17];
	v[3] = v[2] * v[2];
	tspn12_pd[213] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[214] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[214] <= 0.) {
	domain_("sqrt'", &tspn12_pd[214], 5L);
	}
	tspn12_pd[215] = 0.5 / tspn12_pd[214];
	v[2] = tspn12_pd[214] * x[65];
	v[0] += v[2];
	v[2] = x[8] - x[18];
	v[3] = v[2] * v[2];
	tspn12_pd[216] = v[2] + v[2];
	v[2] = x[9] - x[19];
	v[1] = v[2] * v[2];
	tspn12_pd[217] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[218] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[218] <= 0.) {
	domain_("sqrt'", &tspn12_pd[218], 5L);
	}
	tspn12_pd[219] = 0.5 / tspn12_pd[218];
	v[2] = tspn12_pd[218] * x[66];
	v[0] += v[2];
	v[2] = x[8] - x[20];
	v[1] = v[2] * v[2];
	tspn12_pd[220] = v[2] + v[2];
	v[2] = x[9] - x[21];
	v[3] = v[2] * v[2];
	tspn12_pd[221] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[222] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[222] <= 0.) {
	domain_("sqrt'", &tspn12_pd[222], 5L);
	}
	tspn12_pd[223] = 0.5 / tspn12_pd[222];
	v[2] = tspn12_pd[222] * x[67];
	v[0] += v[2];
	v[2] = x[8] - x[22];
	v[3] = v[2] * v[2];
	tspn12_pd[224] = v[2] + v[2];
	v[2] = x[9] - x[23];
	v[1] = v[2] * v[2];
	tspn12_pd[225] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[226] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[226] <= 0.) {
	domain_("sqrt'", &tspn12_pd[226], 5L);
	}
	tspn12_pd[227] = 0.5 / tspn12_pd[226];
	v[2] = tspn12_pd[226] * x[68];
	v[0] += v[2];
	v[2] = x[10] - x[12];
	v[1] = v[2] * v[2];
	tspn12_pd[228] = v[2] + v[2];
	v[2] = x[11] - x[13];
	v[3] = v[2] * v[2];
	tspn12_pd[229] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[230] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[230] <= 0.) {
	domain_("sqrt'", &tspn12_pd[230], 5L);
	}
	tspn12_pd[231] = 0.5 / tspn12_pd[230];
	v[2] = tspn12_pd[230] * x[69];
	v[0] += v[2];
	v[2] = x[10] - x[14];
	v[3] = v[2] * v[2];
	tspn12_pd[232] = v[2] + v[2];
	v[2] = x[11] - x[15];
	v[1] = v[2] * v[2];
	tspn12_pd[233] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[234] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[234] <= 0.) {
	domain_("sqrt'", &tspn12_pd[234], 5L);
	}
	tspn12_pd[235] = 0.5 / tspn12_pd[234];
	v[2] = tspn12_pd[234] * x[70];
	v[0] += v[2];
	v[2] = x[10] - x[16];
	v[1] = v[2] * v[2];
	tspn12_pd[236] = v[2] + v[2];
	v[2] = x[11] - x[17];
	v[3] = v[2] * v[2];
	tspn12_pd[237] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[238] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[238] <= 0.) {
	domain_("sqrt'", &tspn12_pd[238], 5L);
	}
	tspn12_pd[239] = 0.5 / tspn12_pd[238];
	v[2] = tspn12_pd[238] * x[71];
	v[0] += v[2];
	v[2] = x[10] - x[18];
	v[3] = v[2] * v[2];
	tspn12_pd[240] = v[2] + v[2];
	v[2] = x[11] - x[19];
	v[1] = v[2] * v[2];
	tspn12_pd[241] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[242] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[242] <= 0.) {
	domain_("sqrt'", &tspn12_pd[242], 5L);
	}
	tspn12_pd[243] = 0.5 / tspn12_pd[242];
	v[2] = tspn12_pd[242] * x[72];
	v[0] += v[2];
	v[2] = x[10] - x[20];
	v[1] = v[2] * v[2];
	tspn12_pd[244] = v[2] + v[2];
	v[2] = x[11] - x[21];
	v[3] = v[2] * v[2];
	tspn12_pd[245] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[246] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[246] <= 0.) {
	domain_("sqrt'", &tspn12_pd[246], 5L);
	}
	tspn12_pd[247] = 0.5 / tspn12_pd[246];
	v[2] = tspn12_pd[246] * x[73];
	v[0] += v[2];
	v[2] = x[10] - x[22];
	v[3] = v[2] * v[2];
	tspn12_pd[248] = v[2] + v[2];
	v[2] = x[11] - x[23];
	v[1] = v[2] * v[2];
	tspn12_pd[249] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[250] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[250] <= 0.) {
	domain_("sqrt'", &tspn12_pd[250], 5L);
	}
	tspn12_pd[251] = 0.5 / tspn12_pd[250];
	v[2] = tspn12_pd[250] * x[74];
	v[0] += v[2];
	v[2] = x[12] - x[14];
	v[1] = v[2] * v[2];
	tspn12_pd[252] = v[2] + v[2];
	v[2] = x[13] - x[15];
	v[3] = v[2] * v[2];
	tspn12_pd[253] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[254] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[254] <= 0.) {
	domain_("sqrt'", &tspn12_pd[254], 5L);
	}
	tspn12_pd[255] = 0.5 / tspn12_pd[254];
	v[2] = tspn12_pd[254] * x[75];
	v[0] += v[2];
	v[2] = x[12] - x[16];
	v[3] = v[2] * v[2];
	tspn12_pd[256] = v[2] + v[2];
	v[2] = x[13] - x[17];
	v[1] = v[2] * v[2];
	tspn12_pd[257] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[258] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[258] <= 0.) {
	domain_("sqrt'", &tspn12_pd[258], 5L);
	}
	tspn12_pd[259] = 0.5 / tspn12_pd[258];
	v[2] = tspn12_pd[258] * x[76];
	v[0] += v[2];
	v[2] = x[12] - x[18];
	v[1] = v[2] * v[2];
	tspn12_pd[260] = v[2] + v[2];
	v[2] = x[13] - x[19];
	v[3] = v[2] * v[2];
	tspn12_pd[261] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[262] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[262] <= 0.) {
	domain_("sqrt'", &tspn12_pd[262], 5L);
	}
	tspn12_pd[263] = 0.5 / tspn12_pd[262];
	v[2] = tspn12_pd[262] * x[77];
	v[0] += v[2];
	v[2] = x[12] - x[20];
	v[3] = v[2] * v[2];
	tspn12_pd[264] = v[2] + v[2];
	v[2] = x[13] - x[21];
	v[1] = v[2] * v[2];
	tspn12_pd[265] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[266] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[266] <= 0.) {
	domain_("sqrt'", &tspn12_pd[266], 5L);
	}
	tspn12_pd[267] = 0.5 / tspn12_pd[266];
	v[2] = tspn12_pd[266] * x[78];
	v[0] += v[2];
	v[2] = x[12] - x[22];
	v[1] = v[2] * v[2];
	tspn12_pd[268] = v[2] + v[2];
	v[2] = x[13] - x[23];
	v[3] = v[2] * v[2];
	tspn12_pd[269] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[270] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[270] <= 0.) {
	domain_("sqrt'", &tspn12_pd[270], 5L);
	}
	tspn12_pd[271] = 0.5 / tspn12_pd[270];
	v[2] = tspn12_pd[270] * x[79];
	v[0] += v[2];
	v[2] = x[14] - x[16];
	v[3] = v[2] * v[2];
	tspn12_pd[272] = v[2] + v[2];
	v[2] = x[15] - x[17];
	v[1] = v[2] * v[2];
	tspn12_pd[273] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[274] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[274] <= 0.) {
	domain_("sqrt'", &tspn12_pd[274], 5L);
	}
	tspn12_pd[275] = 0.5 / tspn12_pd[274];
	v[2] = tspn12_pd[274] * x[80];
	v[0] += v[2];
	v[2] = x[14] - x[18];
	v[1] = v[2] * v[2];
	tspn12_pd[276] = v[2] + v[2];
	v[2] = x[15] - x[19];
	v[3] = v[2] * v[2];
	tspn12_pd[277] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[278] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[278] <= 0.) {
	domain_("sqrt'", &tspn12_pd[278], 5L);
	}
	tspn12_pd[279] = 0.5 / tspn12_pd[278];
	v[2] = tspn12_pd[278] * x[81];
	v[0] += v[2];
	v[2] = x[14] - x[20];
	v[3] = v[2] * v[2];
	tspn12_pd[280] = v[2] + v[2];
	v[2] = x[15] - x[21];
	v[1] = v[2] * v[2];
	tspn12_pd[281] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[282] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[282] <= 0.) {
	domain_("sqrt'", &tspn12_pd[282], 5L);
	}
	tspn12_pd[283] = 0.5 / tspn12_pd[282];
	v[2] = tspn12_pd[282] * x[82];
	v[0] += v[2];
	v[2] = x[14] - x[22];
	v[1] = v[2] * v[2];
	tspn12_pd[284] = v[2] + v[2];
	v[2] = x[15] - x[23];
	v[3] = v[2] * v[2];
	tspn12_pd[285] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[286] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[286] <= 0.) {
	domain_("sqrt'", &tspn12_pd[286], 5L);
	}
	tspn12_pd[287] = 0.5 / tspn12_pd[286];
	v[2] = tspn12_pd[286] * x[83];
	v[0] += v[2];
	v[2] = x[16] - x[18];
	v[3] = v[2] * v[2];
	tspn12_pd[288] = v[2] + v[2];
	v[2] = x[17] - x[19];
	v[1] = v[2] * v[2];
	tspn12_pd[289] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[290] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[290] <= 0.) {
	domain_("sqrt'", &tspn12_pd[290], 5L);
	}
	tspn12_pd[291] = 0.5 / tspn12_pd[290];
	v[2] = tspn12_pd[290] * x[84];
	v[0] += v[2];
	v[2] = x[16] - x[20];
	v[1] = v[2] * v[2];
	tspn12_pd[292] = v[2] + v[2];
	v[2] = x[17] - x[21];
	v[3] = v[2] * v[2];
	tspn12_pd[293] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[294] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[294] <= 0.) {
	domain_("sqrt'", &tspn12_pd[294], 5L);
	}
	tspn12_pd[295] = 0.5 / tspn12_pd[294];
	v[2] = tspn12_pd[294] * x[85];
	v[0] += v[2];
	v[2] = x[16] - x[22];
	v[3] = v[2] * v[2];
	tspn12_pd[296] = v[2] + v[2];
	v[2] = x[17] - x[23];
	v[1] = v[2] * v[2];
	tspn12_pd[297] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[298] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[298] <= 0.) {
	domain_("sqrt'", &tspn12_pd[298], 5L);
	}
	tspn12_pd[299] = 0.5 / tspn12_pd[298];
	v[2] = tspn12_pd[298] * x[86];
	v[0] += v[2];
	v[2] = x[18] - x[20];
	v[1] = v[2] * v[2];
	tspn12_pd[300] = v[2] + v[2];
	v[2] = x[19] - x[21];
	v[3] = v[2] * v[2];
	tspn12_pd[301] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[302] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[302] <= 0.) {
	domain_("sqrt'", &tspn12_pd[302], 5L);
	}
	tspn12_pd[303] = 0.5 / tspn12_pd[302];
	v[2] = tspn12_pd[302] * x[87];
	v[0] += v[2];
	v[2] = x[18] - x[22];
	v[3] = v[2] * v[2];
	tspn12_pd[304] = v[2] + v[2];
	v[2] = x[19] - x[23];
	v[1] = v[2] * v[2];
	tspn12_pd[305] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn12_pd[306] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[306] <= 0.) {
	domain_("sqrt'", &tspn12_pd[306], 5L);
	}
	tspn12_pd[307] = 0.5 / tspn12_pd[306];
	v[2] = tspn12_pd[306] * x[88];
	v[0] += v[2];
	v[2] = x[20] - x[22];
	v[1] = v[2] * v[2];
	tspn12_pd[308] = v[2] + v[2];
	v[2] = x[21] - x[23];
	v[3] = v[2] * v[2];
	tspn12_pd[309] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn12_pd[310] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn12_pd[310] <= 0.) {
	domain_("sqrt'", &tspn12_pd[310], 5L);
	}
	tspn12_pd[311] = 0.5 / tspn12_pd[310];
	v[2] = tspn12_pd[310] * x[89];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[89] = tspn12_pd[310];
	dv[0] = x[89]*tspn12_pd[311];
	dv[1] = dv[0];
	dv[1] *= tspn12_pd[309];
	g[23] = -dv[1];
	g[21] = dv[1];
	dv[0] *= tspn12_pd[308];
	g[22] = -dv[0];
	g[20] = dv[0];
	g[88] = tspn12_pd[306];
	dv[2] = x[88]*tspn12_pd[307];
	dv[3] = dv[2];
	dv[3] *= tspn12_pd[305];
	g[23] -= dv[3];
	g[19] = dv[3];
	dv[2] *= tspn12_pd[304];
	g[22] -= dv[2];
	g[18] = dv[2];
	g[87] = tspn12_pd[302];
	dv[4] = x[87]*tspn12_pd[303];
	dv[5] = dv[4];
	dv[5] *= tspn12_pd[301];
	g[21] -= dv[5];
	g[19] += dv[5];
	dv[4] *= tspn12_pd[300];
	g[20] -= dv[4];
	g[18] += dv[4];
	g[86] = tspn12_pd[298];
	dv[6] = x[86]*tspn12_pd[299];
	dv[7] = dv[6];
	dv[7] *= tspn12_pd[297];
	g[23] -= dv[7];
	g[17] = dv[7];
	dv[6] *= tspn12_pd[296];
	g[22] -= dv[6];
	g[16] = dv[6];
	g[85] = tspn12_pd[294];
	dv[8] = x[85]*tspn12_pd[295];
	dv[9] = dv[8];
	dv[9] *= tspn12_pd[293];
	g[21] -= dv[9];
	g[17] += dv[9];
	dv[8] *= tspn12_pd[292];
	g[20] -= dv[8];
	g[16] += dv[8];
	g[84] = tspn12_pd[290];
	dv[10] = x[84]*tspn12_pd[291];
	dv[11] = dv[10];
	dv[11] *= tspn12_pd[289];
	g[19] -= dv[11];
	g[17] += dv[11];
	dv[10] *= tspn12_pd[288];
	g[18] -= dv[10];
	g[16] += dv[10];
	g[83] = tspn12_pd[286];
	dv[12] = x[83]*tspn12_pd[287];
	dv[13] = dv[12];
	dv[13] *= tspn12_pd[285];
	g[23] -= dv[13];
	g[15] = dv[13];
	dv[12] *= tspn12_pd[284];
	g[22] -= dv[12];
	g[14] = dv[12];
	g[82] = tspn12_pd[282];
	dv[14] = x[82]*tspn12_pd[283];
	dv[15] = dv[14];
	dv[15] *= tspn12_pd[281];
	g[21] -= dv[15];
	g[15] += dv[15];
	dv[14] *= tspn12_pd[280];
	g[20] -= dv[14];
	g[14] += dv[14];
	g[81] = tspn12_pd[278];
	dv[16] = x[81]*tspn12_pd[279];
	dv[17] = dv[16];
	dv[17] *= tspn12_pd[277];
	g[19] -= dv[17];
	g[15] += dv[17];
	dv[16] *= tspn12_pd[276];
	g[18] -= dv[16];
	g[14] += dv[16];
	g[80] = tspn12_pd[274];
	dv[18] = x[80]*tspn12_pd[275];
	dv[19] = dv[18];
	dv[19] *= tspn12_pd[273];
	g[17] -= dv[19];
	g[15] += dv[19];
	dv[18] *= tspn12_pd[272];
	g[16] -= dv[18];
	g[14] += dv[18];
	g[79] = tspn12_pd[270];
	dv[20] = x[79]*tspn12_pd[271];
	dv[21] = dv[20];
	dv[21] *= tspn12_pd[269];
	g[23] -= dv[21];
	g[13] = dv[21];
	dv[20] *= tspn12_pd[268];
	g[22] -= dv[20];
	g[12] = dv[20];
	g[78] = tspn12_pd[266];
	dv[22] = x[78]*tspn12_pd[267];
	dv[23] = dv[22];
	dv[23] *= tspn12_pd[265];
	g[21] -= dv[23];
	g[13] += dv[23];
	dv[22] *= tspn12_pd[264];
	g[20] -= dv[22];
	g[12] += dv[22];
	g[77] = tspn12_pd[262];
	dv[24] = x[77]*tspn12_pd[263];
	dv[25] = dv[24];
	dv[25] *= tspn12_pd[261];
	g[19] -= dv[25];
	g[13] += dv[25];
	dv[24] *= tspn12_pd[260];
	g[18] -= dv[24];
	g[12] += dv[24];
	g[76] = tspn12_pd[258];
	dv[26] = x[76]*tspn12_pd[259];
	dv[27] = dv[26];
	dv[27] *= tspn12_pd[257];
	g[17] -= dv[27];
	g[13] += dv[27];
	dv[26] *= tspn12_pd[256];
	g[16] -= dv[26];
	g[12] += dv[26];
	g[75] = tspn12_pd[254];
	dv[28] = x[75]*tspn12_pd[255];
	dv[29] = dv[28];
	dv[29] *= tspn12_pd[253];
	g[15] -= dv[29];
	g[13] += dv[29];
	dv[28] *= tspn12_pd[252];
	g[14] -= dv[28];
	g[12] += dv[28];
	g[74] = tspn12_pd[250];
	dv[30] = x[74]*tspn12_pd[251];
	dv[31] = dv[30];
	dv[31] *= tspn12_pd[249];
	g[23] -= dv[31];
	g[11] = dv[31];
	dv[30] *= tspn12_pd[248];
	g[22] -= dv[30];
	g[10] = dv[30];
	g[73] = tspn12_pd[246];
	dv[32] = x[73]*tspn12_pd[247];
	dv[33] = dv[32];
	dv[33] *= tspn12_pd[245];
	g[21] -= dv[33];
	g[11] += dv[33];
	dv[32] *= tspn12_pd[244];
	g[20] -= dv[32];
	g[10] += dv[32];
	g[72] = tspn12_pd[242];
	dv[34] = x[72]*tspn12_pd[243];
	dv[35] = dv[34];
	dv[35] *= tspn12_pd[241];
	g[19] -= dv[35];
	g[11] += dv[35];
	dv[34] *= tspn12_pd[240];
	g[18] -= dv[34];
	g[10] += dv[34];
	g[71] = tspn12_pd[238];
	dv[36] = x[71]*tspn12_pd[239];
	dv[37] = dv[36];
	dv[37] *= tspn12_pd[237];
	g[17] -= dv[37];
	g[11] += dv[37];
	dv[36] *= tspn12_pd[236];
	g[16] -= dv[36];
	g[10] += dv[36];
	g[70] = tspn12_pd[234];
	dv[38] = x[70]*tspn12_pd[235];
	dv[39] = dv[38];
	dv[39] *= tspn12_pd[233];
	g[15] -= dv[39];
	g[11] += dv[39];
	dv[38] *= tspn12_pd[232];
	g[14] -= dv[38];
	g[10] += dv[38];
	g[69] = tspn12_pd[230];
	dv[40] = x[69]*tspn12_pd[231];
	dv[41] = dv[40];
	dv[41] *= tspn12_pd[229];
	g[13] -= dv[41];
	g[11] += dv[41];
	dv[40] *= tspn12_pd[228];
	g[12] -= dv[40];
	g[10] += dv[40];
	g[68] = tspn12_pd[226];
	dv[42] = x[68]*tspn12_pd[227];
	dv[43] = dv[42];
	dv[43] *= tspn12_pd[225];
	g[23] -= dv[43];
	g[9] = dv[43];
	dv[42] *= tspn12_pd[224];
	g[22] -= dv[42];
	g[8] = dv[42];
	g[67] = tspn12_pd[222];
	dv[44] = x[67]*tspn12_pd[223];
	dv[45] = dv[44];
	dv[45] *= tspn12_pd[221];
	g[21] -= dv[45];
	g[9] += dv[45];
	dv[44] *= tspn12_pd[220];
	g[20] -= dv[44];
	g[8] += dv[44];
	g[66] = tspn12_pd[218];
	dv[46] = x[66]*tspn12_pd[219];
	dv[47] = dv[46];
	dv[47] *= tspn12_pd[217];
	g[19] -= dv[47];
	g[9] += dv[47];
	dv[46] *= tspn12_pd[216];
	g[18] -= dv[46];
	g[8] += dv[46];
	g[65] = tspn12_pd[214];
	dv[48] = x[65]*tspn12_pd[215];
	dv[49] = dv[48];
	dv[49] *= tspn12_pd[213];
	g[17] -= dv[49];
	g[9] += dv[49];
	dv[48] *= tspn12_pd[212];
	g[16] -= dv[48];
	g[8] += dv[48];
	g[64] = tspn12_pd[210];
	dv[50] = x[64]*tspn12_pd[211];
	dv[51] = dv[50];
	dv[51] *= tspn12_pd[209];
	g[15] -= dv[51];
	g[9] += dv[51];
	dv[50] *= tspn12_pd[208];
	g[14] -= dv[50];
	g[8] += dv[50];
	g[63] = tspn12_pd[206];
	dv[52] = x[63]*tspn12_pd[207];
	dv[53] = dv[52];
	dv[53] *= tspn12_pd[205];
	g[13] -= dv[53];
	g[9] += dv[53];
	dv[52] *= tspn12_pd[204];
	g[12] -= dv[52];
	g[8] += dv[52];
	g[62] = tspn12_pd[202];
	dv[54] = x[62]*tspn12_pd[203];
	dv[55] = dv[54];
	dv[55] *= tspn12_pd[201];
	g[11] -= dv[55];
	g[9] += dv[55];
	dv[54] *= tspn12_pd[200];
	g[10] -= dv[54];
	g[8] += dv[54];
	g[61] = tspn12_pd[198];
	dv[56] = x[61]*tspn12_pd[199];
	dv[57] = dv[56];
	dv[57] *= tspn12_pd[197];
	g[23] -= dv[57];
	g[7] = dv[57];
	dv[56] *= tspn12_pd[196];
	g[22] -= dv[56];
	g[6] = dv[56];
	g[60] = tspn12_pd[194];
	dv[58] = x[60]*tspn12_pd[195];
	dv[59] = dv[58];
	dv[59] *= tspn12_pd[193];
	g[21] -= dv[59];
	g[7] += dv[59];
	dv[58] *= tspn12_pd[192];
	g[20] -= dv[58];
	g[6] += dv[58];
	g[59] = tspn12_pd[190];
	dv[60] = x[59]*tspn12_pd[191];
	dv[61] = dv[60];
	dv[61] *= tspn12_pd[189];
	g[19] -= dv[61];
	g[7] += dv[61];
	dv[60] *= tspn12_pd[188];
	g[18] -= dv[60];
	g[6] += dv[60];
	g[58] = tspn12_pd[186];
	dv[62] = x[58]*tspn12_pd[187];
	dv[63] = dv[62];
	dv[63] *= tspn12_pd[185];
	g[17] -= dv[63];
	g[7] += dv[63];
	dv[62] *= tspn12_pd[184];
	g[16] -= dv[62];
	g[6] += dv[62];
	g[57] = tspn12_pd[182];
	dv[64] = x[57]*tspn12_pd[183];
	dv[65] = dv[64];
	dv[65] *= tspn12_pd[181];
	g[15] -= dv[65];
	g[7] += dv[65];
	dv[64] *= tspn12_pd[180];
	g[14] -= dv[64];
	g[6] += dv[64];
	g[56] = tspn12_pd[178];
	dv[66] = x[56]*tspn12_pd[179];
	dv[67] = dv[66];
	dv[67] *= tspn12_pd[177];
	g[13] -= dv[67];
	g[7] += dv[67];
	dv[66] *= tspn12_pd[176];
	g[12] -= dv[66];
	g[6] += dv[66];
	g[55] = tspn12_pd[174];
	dv[68] = x[55]*tspn12_pd[175];
	dv[69] = dv[68];
	dv[69] *= tspn12_pd[173];
	g[11] -= dv[69];
	g[7] += dv[69];
	dv[68] *= tspn12_pd[172];
	g[10] -= dv[68];
	g[6] += dv[68];
	g[54] = tspn12_pd[170];
	dv[70] = x[54]*tspn12_pd[171];
	dv[71] = dv[70];
	dv[71] *= tspn12_pd[169];
	g[9] -= dv[71];
	g[7] += dv[71];
	dv[70] *= tspn12_pd[168];
	g[8] -= dv[70];
	g[6] += dv[70];
	g[53] = tspn12_pd[166];
	dv[72] = x[53]*tspn12_pd[167];
	dv[73] = dv[72];
	dv[73] *= tspn12_pd[165];
	g[23] -= dv[73];
	g[5] = dv[73];
	dv[72] *= tspn12_pd[164];
	g[22] -= dv[72];
	g[4] = dv[72];
	g[52] = tspn12_pd[162];
	dv[74] = x[52]*tspn12_pd[163];
	dv[75] = dv[74];
	dv[75] *= tspn12_pd[161];
	g[21] -= dv[75];
	g[5] += dv[75];
	dv[74] *= tspn12_pd[160];
	g[20] -= dv[74];
	g[4] += dv[74];
	g[51] = tspn12_pd[158];
	dv[76] = x[51]*tspn12_pd[159];
	dv[77] = dv[76];
	dv[77] *= tspn12_pd[157];
	g[19] -= dv[77];
	g[5] += dv[77];
	dv[76] *= tspn12_pd[156];
	g[18] -= dv[76];
	g[4] += dv[76];
	g[50] = tspn12_pd[154];
	dv[78] = x[50]*tspn12_pd[155];
	dv[79] = dv[78];
	dv[79] *= tspn12_pd[153];
	g[17] -= dv[79];
	g[5] += dv[79];
	dv[78] *= tspn12_pd[152];
	g[16] -= dv[78];
	g[4] += dv[78];
	g[49] = tspn12_pd[150];
	dv[80] = x[49]*tspn12_pd[151];
	dv[81] = dv[80];
	dv[81] *= tspn12_pd[149];
	g[15] -= dv[81];
	g[5] += dv[81];
	dv[80] *= tspn12_pd[148];
	g[14] -= dv[80];
	g[4] += dv[80];
	g[48] = tspn12_pd[146];
	dv[82] = x[48]*tspn12_pd[147];
	dv[83] = dv[82];
	dv[83] *= tspn12_pd[145];
	g[13] -= dv[83];
	g[5] += dv[83];
	dv[82] *= tspn12_pd[144];
	g[12] -= dv[82];
	g[4] += dv[82];
	g[47] = tspn12_pd[142];
	dv[84] = x[47]*tspn12_pd[143];
	dv[85] = dv[84];
	dv[85] *= tspn12_pd[141];
	g[11] -= dv[85];
	g[5] += dv[85];
	dv[84] *= tspn12_pd[140];
	g[10] -= dv[84];
	g[4] += dv[84];
	g[46] = tspn12_pd[138];
	dv[86] = x[46]*tspn12_pd[139];
	dv[87] = dv[86];
	dv[87] *= tspn12_pd[137];
	g[9] -= dv[87];
	g[5] += dv[87];
	dv[86] *= tspn12_pd[136];
	g[8] -= dv[86];
	g[4] += dv[86];
	g[45] = tspn12_pd[134];
	dv[88] = x[45]*tspn12_pd[135];
	dv[89] = dv[88];
	dv[89] *= tspn12_pd[133];
	g[7] -= dv[89];
	g[5] += dv[89];
	dv[88] *= tspn12_pd[132];
	g[6] -= dv[88];
	g[4] += dv[88];
	g[44] = tspn12_pd[130];
	dv[90] = x[44]*tspn12_pd[131];
	dv[91] = dv[90];
	dv[91] *= tspn12_pd[129];
	g[23] -= dv[91];
	g[3] = dv[91];
	dv[90] *= tspn12_pd[128];
	g[22] -= dv[90];
	g[2] = dv[90];
	g[43] = tspn12_pd[126];
	dv[92] = x[43]*tspn12_pd[127];
	dv[93] = dv[92];
	dv[93] *= tspn12_pd[125];
	g[21] -= dv[93];
	g[3] += dv[93];
	dv[92] *= tspn12_pd[124];
	g[20] -= dv[92];
	g[2] += dv[92];
	g[42] = tspn12_pd[122];
	dv[94] = x[42]*tspn12_pd[123];
	dv[95] = dv[94];
	dv[95] *= tspn12_pd[121];
	g[19] -= dv[95];
	g[3] += dv[95];
	dv[94] *= tspn12_pd[120];
	g[18] -= dv[94];
	g[2] += dv[94];
	g[41] = tspn12_pd[118];
	dv[96] = x[41]*tspn12_pd[119];
	dv[97] = dv[96];
	dv[97] *= tspn12_pd[117];
	g[17] -= dv[97];
	g[3] += dv[97];
	dv[96] *= tspn12_pd[116];
	g[16] -= dv[96];
	g[2] += dv[96];
	g[40] = tspn12_pd[114];
	dv[98] = x[40]*tspn12_pd[115];
	dv[99] = dv[98];
	dv[99] *= tspn12_pd[113];
	g[15] -= dv[99];
	g[3] += dv[99];
	dv[98] *= tspn12_pd[112];
	g[14] -= dv[98];
	g[2] += dv[98];
	g[39] = tspn12_pd[110];
	dv[100] = x[39]*tspn12_pd[111];
	dv[101] = dv[100];
	dv[101] *= tspn12_pd[109];
	g[13] -= dv[101];
	g[3] += dv[101];
	dv[100] *= tspn12_pd[108];
	g[12] -= dv[100];
	g[2] += dv[100];
	g[38] = tspn12_pd[106];
	dv[102] = x[38]*tspn12_pd[107];
	dv[103] = dv[102];
	dv[103] *= tspn12_pd[105];
	g[11] -= dv[103];
	g[3] += dv[103];
	dv[102] *= tspn12_pd[104];
	g[10] -= dv[102];
	g[2] += dv[102];
	g[37] = tspn12_pd[102];
	dv[104] = x[37]*tspn12_pd[103];
	dv[105] = dv[104];
	dv[105] *= tspn12_pd[101];
	g[9] -= dv[105];
	g[3] += dv[105];
	dv[104] *= tspn12_pd[100];
	g[8] -= dv[104];
	g[2] += dv[104];
	g[36] = tspn12_pd[98];
	dv[106] = x[36]*tspn12_pd[99];
	dv[107] = dv[106];
	dv[107] *= tspn12_pd[97];
	g[7] -= dv[107];
	g[3] += dv[107];
	dv[106] *= tspn12_pd[96];
	g[6] -= dv[106];
	g[2] += dv[106];
	g[35] = tspn12_pd[94];
	dv[108] = x[35]*tspn12_pd[95];
	dv[109] = dv[108];
	dv[109] *= tspn12_pd[93];
	g[5] -= dv[109];
	g[3] += dv[109];
	dv[108] *= tspn12_pd[92];
	g[4] -= dv[108];
	g[2] += dv[108];
	g[34] = tspn12_pd[90];
	dv[110] = x[34]*tspn12_pd[91];
	dv[111] = dv[110];
	dv[111] *= tspn12_pd[89];
	g[23] -= dv[111];
	g[1] = dv[111];
	dv[110] *= tspn12_pd[88];
	g[22] -= dv[110];
	g[0] = dv[110];
	g[33] = tspn12_pd[86];
	dv[112] = x[33]*tspn12_pd[87];
	dv[113] = dv[112];
	dv[113] *= tspn12_pd[85];
	g[21] -= dv[113];
	g[1] += dv[113];
	dv[112] *= tspn12_pd[84];
	g[20] -= dv[112];
	g[0] += dv[112];
	g[32] = tspn12_pd[82];
	dv[114] = x[32]*tspn12_pd[83];
	dv[115] = dv[114];
	dv[115] *= tspn12_pd[81];
	g[19] -= dv[115];
	g[1] += dv[115];
	dv[114] *= tspn12_pd[80];
	g[18] -= dv[114];
	g[0] += dv[114];
	g[31] = tspn12_pd[78];
	dv[116] = x[31]*tspn12_pd[79];
	dv[117] = dv[116];
	dv[117] *= tspn12_pd[77];
	g[17] -= dv[117];
	g[1] += dv[117];
	dv[116] *= tspn12_pd[76];
	g[16] -= dv[116];
	g[0] += dv[116];
	g[30] = tspn12_pd[74];
	dv[118] = x[30]*tspn12_pd[75];
	dv[119] = dv[118];
	dv[119] *= tspn12_pd[73];
	g[15] -= dv[119];
	g[1] += dv[119];
	dv[118] *= tspn12_pd[72];
	g[14] -= dv[118];
	g[0] += dv[118];
	g[29] = tspn12_pd[70];
	dv[120] = x[29]*tspn12_pd[71];
	dv[121] = dv[120];
	dv[121] *= tspn12_pd[69];
	g[13] -= dv[121];
	g[1] += dv[121];
	dv[120] *= tspn12_pd[68];
	g[12] -= dv[120];
	g[0] += dv[120];
	g[28] = tspn12_pd[66];
	dv[122] = x[28]*tspn12_pd[67];
	dv[123] = dv[122];
	dv[123] *= tspn12_pd[65];
	g[11] -= dv[123];
	g[1] += dv[123];
	dv[122] *= tspn12_pd[64];
	g[10] -= dv[122];
	g[0] += dv[122];
	g[27] = tspn12_pd[62];
	dv[124] = x[27]*tspn12_pd[63];
	dv[125] = dv[124];
	dv[125] *= tspn12_pd[61];
	g[9] -= dv[125];
	g[1] += dv[125];
	dv[124] *= tspn12_pd[60];
	g[8] -= dv[124];
	g[0] += dv[124];
	g[26] = tspn12_pd[58];
	dv[126] = x[26]*tspn12_pd[59];
	dv[127] = dv[126];
	dv[127] *= tspn12_pd[57];
	g[7] -= dv[127];
	g[1] += dv[127];
	dv[126] *= tspn12_pd[56];
	g[6] -= dv[126];
	g[0] += dv[126];
	g[25] = tspn12_pd[54];
	dv[128] = x[25]*tspn12_pd[55];
	dv[129] = dv[128];
	dv[129] *= tspn12_pd[53];
	g[5] -= dv[129];
	g[1] += dv[129];
	dv[128] *= tspn12_pd[52];
	g[4] -= dv[128];
	g[0] += dv[128];
	g[24] = tspn12_pd[50];
	dv[130] = x[24]*tspn12_pd[51];
	dv[131] = dv[130];
	dv[131] *= tspn12_pd[49];
	g[3] -= dv[131];
	g[1] += dv[131];
	dv[130] *= tspn12_pd[48];
	g[2] -= dv[130];
	g[0] += dv[130];
	}

	return v[0];
}

 void
tspn12_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (tspn12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	tspn12_pd[0] = x[0] * x[0];
	tspn12_pd[1] = x[0] + x[0];
	v[0] = 0.013840830449827 * tspn12_pd[0];
	tspn12_pd[2] = x[1] * x[1];
	tspn12_pd[3] = x[1] + x[1];
	v[1] = 0.0177777777777778 * tspn12_pd[2];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.235294117647059*x[0];
	t1 += -2.00888888888889*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	tspn12_pd[4] = x[2] * x[2];
	tspn12_pd[5] = x[2] + x[2];
	v[0] = 0.013840830449827 * tspn12_pd[4];
	tspn12_pd[6] = x[3] * x[3];
	tspn12_pd[7] = x[3] + x[3];
	v[1] = 0.0625 * tspn12_pd[6];
	v[2] = v[0] + v[1];
	t1 = v[2] + -3.05882352941176*x[2];
	t1 += -5.75*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	tspn12_pd[8] = x[4] * x[4];
	tspn12_pd[9] = x[4] + x[4];
	v[0] = 0.0204081632653061 * tspn12_pd[8];
	tspn12_pd[10] = x[5] * x[5];
	tspn12_pd[11] = x[5] + x[5];
	v[1] = 0.0110803324099723 * tspn12_pd[10];
	v[2] = v[0] + v[1];
	t1 = v[2] + -1.3469387755102*x[4];
	t1 += -1.65096952908587*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	tspn12_pd[12] = x[6] * x[6];
	tspn12_pd[13] = x[6] + x[6];
	v[0] = 0.0090702947845805 * tspn12_pd[12];
	tspn12_pd[14] = x[7] * x[7];
	tspn12_pd[15] = x[7] + x[7];
	v[1] = 0.0277777777777778 * tspn12_pd[14];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.299319727891156*x[6];
	t1 += -4.44444444444444*x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	tspn12_pd[16] = x[8] * x[8];
	tspn12_pd[17] = x[8] + x[8];
	v[0] = 0.0277777777777778 * tspn12_pd[16];
	tspn12_pd[18] = x[9] * x[9];
	tspn12_pd[19] = x[9] + x[9];
	v[1] = 0.015625 * tspn12_pd[18];
	v[2] = v[0] + v[1];
	t1 = v[2] + -2.16666666666667*x[8];
	t1 += -1.40625*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	tspn12_pd[20] = x[10] * x[10];
	tspn12_pd[21] = x[10] + x[10];
	v[0] = 0.0110803324099723 * tspn12_pd[20];
	tspn12_pd[22] = x[11] * x[11];
	tspn12_pd[23] = x[11] + x[11];
	v[1] = 0.0204081632653061 * tspn12_pd[22];
	v[2] = v[0] + v[1];
	t1 = v[2] + -2.29362880886427*x[10];
	t1 += -0.285714285714286*x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	tspn12_pd[24] = x[12] * x[12];
	tspn12_pd[25] = x[12] + x[12];
	v[0] = 0.0110803324099723 * tspn12_pd[24];
	tspn12_pd[26] = x[13] * x[13];
	tspn12_pd[27] = x[13] + x[13];
	v[1] = 0.0204081632653061 * tspn12_pd[26];
	v[2] = v[0] + v[1];
	t1 = v[2] + -2.27146814404432*x[12];
	t1 += -2.57142857142857*x[13];
	c[6] = t1;

  /***  constraint 8  ***/

	tspn12_pd[28] = x[14] * x[14];
	tspn12_pd[29] = x[14] + x[14];
	v[0] = 0.0330578512396694 * tspn12_pd[28];
	tspn12_pd[30] = x[15] * x[15];
	tspn12_pd[31] = x[15] + x[15];
	v[1] = 0.0493827160493827 * tspn12_pd[30];
	v[2] = v[0] + v[1];
	t1 = v[2] + -4.72727272727273*x[14];
	t1 += -9.03703703703704*x[15];
	c[7] = t1;

  /***  constraint 9  ***/

	tspn12_pd[32] = x[16] * x[16];
	tspn12_pd[33] = x[16] + x[16];
	v[0] = 0.0493827160493827 * tspn12_pd[32];
	tspn12_pd[34] = x[17] * x[17];
	tspn12_pd[35] = x[17] + x[17];
	v[1] = 0.0204081632653061 * tspn12_pd[34];
	v[2] = v[0] + v[1];
	t1 = v[2] + -5.48148148148148*x[16];
	t1 += -0.775510204081633*x[17];
	c[8] = t1;

  /***  constraint 10  ***/

	tspn12_pd[36] = x[18] * x[18];
	tspn12_pd[37] = x[18] + x[18];
	v[0] = 0.00591715976331361 * tspn12_pd[36];
	tspn12_pd[38] = x[19] * x[19];
	tspn12_pd[39] = x[19] + x[19];
	v[1] = 0.0236686390532544 * tspn12_pd[38];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.733727810650888*x[18];
	t1 += -2.24852071005917*x[19];
	c[9] = t1;

  /***  constraint 11  ***/

	tspn12_pd[40] = x[20] * x[20];
	tspn12_pd[41] = x[20] + x[20];
	v[0] = 0.0330578512396694 * tspn12_pd[40];
	tspn12_pd[42] = x[21] * x[21];
	tspn12_pd[43] = x[21] + x[21];
	v[1] = 0.0123456790123457 * tspn12_pd[42];
	v[2] = v[0] + v[1];
	t1 = v[2] + -1.48760330578512*x[20];
	t1 += -0.839506172839506*x[21];
	c[10] = t1;

  /***  constraint 12  ***/

	tspn12_pd[44] = x[22] * x[22];
	tspn12_pd[45] = x[22] + x[22];
	v[0] = 0.0277777777777778 * tspn12_pd[44];
	tspn12_pd[46] = x[23] * x[23];
	tspn12_pd[47] = x[23] + x[23];
	v[1] = 0.0493827160493827 * tspn12_pd[46];
	v[2] = v[0] + v[1];
	t1 = v[2] + -5.44444444444444*x[22];
	t1 += -8.24691358024691*x[23];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[24];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[25];
	t1 += x[35];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[26];
	t1 += x[36];
	t1 += x[45];
	t1 += x[54];
	t1 += x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[60];
	t1 += x[61];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[27];
	t1 += x[37];
	t1 += x[46];
	t1 += x[54];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[28];
	t1 += x[38];
	t1 += x[47];
	t1 += x[55];
	t1 += x[62];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[29];
	t1 += x[39];
	t1 += x[48];
	t1 += x[56];
	t1 += x[63];
	t1 += x[69];
	t1 += x[75];
	t1 += x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[30];
	t1 += x[40];
	t1 += x[49];
	t1 += x[57];
	t1 += x[64];
	t1 += x[70];
	t1 += x[75];
	t1 += x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[31];
	t1 += x[41];
	t1 += x[50];
	t1 += x[58];
	t1 += x[65];
	t1 += x[71];
	t1 += x[76];
	t1 += x[80];
	t1 += x[84];
	t1 += x[85];
	t1 += x[86];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[32];
	t1 += x[42];
	t1 += x[51];
	t1 += x[59];
	t1 += x[66];
	t1 += x[72];
	t1 += x[77];
	t1 += x[81];
	t1 += x[84];
	t1 += x[87];
	t1 += x[88];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[33];
	t1 += x[43];
	t1 += x[52];
	t1 += x[60];
	t1 += x[67];
	t1 += x[73];
	t1 += x[78];
	t1 += x[82];
	t1 += x[85];
	t1 += x[87];
	t1 += x[89];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[34];
	t1 += x[44];
	t1 += x[53];
	t1 += x[61];
	t1 += x[68];
	t1 += x[74];
	t1 += x[79];
	t1 += x[83];
	t1 += x[86];
	t1 += x[88];
	t1 += x[89];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += x[33];
	t1 += x[45];
	t1 += x[52];
	t1 += x[60];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += x[45];
	c[25] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = 0.0177777777777778*tspn12_pd[3] + -2.00888888888889;
	J[0] = 0.013840830449827*tspn12_pd[1] + -0.235294117647059;

   /*** derivatives for constraint 2 ***/

	J[3] = 0.0625*tspn12_pd[7] + -5.75;
	J[2] = 0.013840830449827*tspn12_pd[5] + -3.05882352941176;

   /*** derivatives for constraint 3 ***/

	J[5] = 0.0110803324099723*tspn12_pd[11] + -1.65096952908587;
	J[4] = 0.0204081632653061*tspn12_pd[9] + -1.3469387755102;

   /*** derivatives for constraint 4 ***/

	J[7] = 0.0277777777777778*tspn12_pd[15] + -4.44444444444444;
	J[6] = 0.0090702947845805*tspn12_pd[13] + -0.299319727891156;

   /*** derivatives for constraint 5 ***/

	J[9] = 0.015625*tspn12_pd[19] + -1.40625;
	J[8] = 0.0277777777777778*tspn12_pd[17] + -2.16666666666667;

   /*** derivatives for constraint 6 ***/

	J[11] = 0.0204081632653061*tspn12_pd[23] + -0.285714285714286;
	J[10] = 0.0110803324099723*tspn12_pd[21] + -2.29362880886427;

   /*** derivatives for constraint 7 ***/

	J[13] = 0.0204081632653061*tspn12_pd[27] + -2.57142857142857;
	J[12] = 0.0110803324099723*tspn12_pd[25] + -2.27146814404432;

   /*** derivatives for constraint 8 ***/

	J[15] = 0.0493827160493827*tspn12_pd[31] + -9.03703703703704;
	J[14] = 0.0330578512396694*tspn12_pd[29] + -4.72727272727273;

   /*** derivatives for constraint 9 ***/

	J[17] = 0.0204081632653061*tspn12_pd[35] + -0.775510204081633;
	J[16] = 0.0493827160493827*tspn12_pd[33] + -5.48148148148148;

   /*** derivatives for constraint 10 ***/

	J[19] = 0.0236686390532544*tspn12_pd[39] + -2.24852071005917;
	J[18] = 0.00591715976331361*tspn12_pd[37] + -0.733727810650888;

   /*** derivatives for constraint 11 ***/

	J[21] = 0.0123456790123457*tspn12_pd[43] + -0.839506172839506;
	J[20] = 0.0330578512396694*tspn12_pd[41] + -1.48760330578512;

   /*** derivatives for constraint 12 ***/

	J[23] = 0.0493827160493827*tspn12_pd[47] + -8.24691358024691;
	J[22] = 0.0277777777777778*tspn12_pd[45] + -5.44444444444444;

   /*** derivatives for constraint 13 ***/

	J[24] = 1.;
	J[26] = 1.;
	J[30] = 1.;
	J[34] = 1.;
	J[36] = 1.;
	J[38] = 1.;
	J[40] = 1.;
	J[42] = 1.;
	J[44] = 1.;
	J[46] = 1.;
	J[49] = 1.;

   /*** derivatives for constraint 14 ***/

	J[25] = 1.;
	J[51] = 1.;
	J[53] = 1.;
	J[55] = 1.;
	J[57] = 1.;
	J[59] = 1.;
	J[61] = 1.;
	J[63] = 1.;
	J[65] = 1.;
	J[67] = 1.;
	J[69] = 1.;

   /*** derivatives for constraint 15 ***/

	J[27] = 1.;
	J[52] = 1.;
	J[71] = 1.;
	J[75] = 1.;
	J[77] = 1.;
	J[79] = 1.;
	J[81] = 1.;
	J[83] = 1.;
	J[85] = 1.;
	J[87] = 1.;
	J[90] = 1.;

   /*** derivatives for constraint 16 ***/

	J[31] = 1.;
	J[54] = 1.;
	J[72] = 1.;
	J[92] = 1.;
	J[94] = 1.;
	J[96] = 1.;
	J[98] = 1.;
	J[100] = 1.;
	J[102] = 1.;
	J[104] = 1.;
	J[107] = 1.;

   /*** derivatives for constraint 17 ***/

	J[35] = 1.;
	J[56] = 1.;
	J[76] = 1.;
	J[93] = 1.;
	J[109] = 1.;
	J[111] = 1.;
	J[113] = 1.;
	J[115] = 1.;
	J[117] = 1.;
	J[119] = 1.;
	J[121] = 1.;

   /*** derivatives for constraint 18 ***/

	J[37] = 1.;
	J[58] = 1.;
	J[78] = 1.;
	J[95] = 1.;
	J[110] = 1.;
	J[123] = 1.;
	J[125] = 1.;
	J[127] = 1.;
	J[129] = 1.;
	J[131] = 1.;
	J[133] = 1.;

   /*** derivatives for constraint 19 ***/

	J[39] = 1.;
	J[60] = 1.;
	J[80] = 1.;
	J[97] = 1.;
	J[112] = 1.;
	J[124] = 1.;
	J[135] = 1.;
	J[137] = 1.;
	J[139] = 1.;
	J[141] = 1.;
	J[143] = 1.;

   /*** derivatives for constraint 20 ***/

	J[41] = 1.;
	J[62] = 1.;
	J[82] = 1.;
	J[99] = 1.;
	J[114] = 1.;
	J[126] = 1.;
	J[136] = 1.;
	J[145] = 1.;
	J[147] = 1.;
	J[149] = 1.;
	J[151] = 1.;

   /*** derivatives for constraint 21 ***/

	J[43] = 1.;
	J[64] = 1.;
	J[84] = 1.;
	J[101] = 1.;
	J[116] = 1.;
	J[128] = 1.;
	J[138] = 1.;
	J[146] = 1.;
	J[153] = 1.;
	J[155] = 1.;
	J[157] = 1.;

   /*** derivatives for constraint 22 ***/

	J[45] = 1.;
	J[66] = 1.;
	J[86] = 1.;
	J[103] = 1.;
	J[118] = 1.;
	J[130] = 1.;
	J[140] = 1.;
	J[148] = 1.;
	J[154] = 1.;
	J[159] = 1.;
	J[161] = 1.;

   /*** derivatives for constraint 23 ***/

	J[47] = 1.;
	J[68] = 1.;
	J[88] = 1.;
	J[105] = 1.;
	J[120] = 1.;
	J[132] = 1.;
	J[142] = 1.;
	J[150] = 1.;
	J[156] = 1.;
	J[160] = 1.;
	J[163] = 1.;

   /*** derivatives for constraint 24 ***/

	J[50] = 1.;
	J[70] = 1.;
	J[91] = 1.;
	J[108] = 1.;
	J[122] = 1.;
	J[134] = 1.;
	J[144] = 1.;
	J[152] = 1.;
	J[158] = 1.;
	J[162] = 1.;
	J[164] = 1.;

   /*** derivatives for constraint 25 ***/

	J[28] = 1.;
	J[32] = 1.;
	J[48] = 1.;
	J[73] = 1.;
	J[89] = 1.;
	J[106] = 1.;

   /*** derivatives for constraint 26 ***/

	J[29] = 1.;
	J[33] = 1.;
	J[74] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
