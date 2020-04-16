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
 fint tspn10_auxcom_[1] = { 10 /* nlc */ };
 fint tspn10_funcom_[185] = {
	65 /* nvar */,
	1 /* nobj */,
	21 /* ncon */,
	113 /* nzc */,
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
	23,
	25,
	27,
	30,
	32,
	34,
	36,
	38,
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
	67,
	69,
	71,
	73,
	75,
	77,
	79,
	81,
	83,
	85,
	87,
	89,
	91,
	94,
	96,
	98,
	100,
	102,
	104,
	106,
	108,
	110,
	112,
	114,

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
	12,
	11,
	13,
	11,
	14,
	11,
	15,
	21,
	11,
	16,
	11,
	17,
	11,
	18,
	11,
	19,
	11,
	20,
	21,
	12,
	13,
	12,
	14,
	12,
	15,
	12,
	16,
	12,
	17,
	12,
	18,
	12,
	19,
	12,
	20,
	13,
	14,
	13,
	15,
	13,
	16,
	13,
	17,
	13,
	18,
	13,
	19,
	13,
	20,
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
	15,
	16,
	15,
	17,
	15,
	18,
	15,
	19,
	15,
	20,
	21,
	16,
	17,
	16,
	18,
	16,
	19,
	16,
	20,
	17,
	18,
	17,
	19,
	17,
	20,
	18,
	19,
	18,
	20,
	19,
	20 };

 real tspn10_boundc_[1+130+42] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		69.,
		72.,
		7.,
		20.,
		109.,
		123.,
		76.,
		87.,
		42.,
		61.,
		63.,
		72.,
		93.,
		103.,
		60.,
		68.,
		80.,
		95.,
		0.,
		17.,
		69.,
		90.,
		91.,
		101.,
		44.,
		55.,
		53.,
		61.,
		65.,
		80.,
		89.,
		110.,
		118.,
		123.,
		20.,
		42.,
		78.,
		89.,
		32.,
		45.,
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
		-2212.31360946746,
		-1.7e308,
		-493.190757294653,
		-1.7e308,
		-253.387811634349,
		-1.7e308,
		-639.16,
		-1.7e308,
		-136.111111111111,
		-1.7e308,
		-424.966530612245,
		-1.7e308,
		-283.0625,
		-1.7e308,
		-182.242630385488,
		-1.7e308,
		-2330.18214876033,
		-1.7e308,
		-264.570443542472,
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
		2.};

 real tspn10_x0comn_[65] = {
		69.,
		7.,
		109.,
		76.,
		42.,
		63.,
		93.,
		60.,
		80.,
		0.,
		69.,
		91.,
		44.,
		53.,
		65.,
		89.,
		118.,
		20.,
		78.,
		32.,
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

 static real tspn10_pd[220];
static real tspn10_old_x[65];
static int tspn10_xkind = -1;

 static int
tspn10_xcheck(real *x)
{
	real *x1 = tspn10_old_x, *xe = x + 65;
	errno = 0;
	if (tspn10_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tspn10_xkind = 0;
	return 1;
	}
 real
tspn10_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[90];
	fint wantfg = *needfg;
	if (tspn10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] - x[2];
	v[1] = v[0] * v[0];
	tspn10_pd[40] = v[0] + v[0];
	v[0] = x[1] - x[3];
	v[2] = v[0] * v[0];
	tspn10_pd[41] = v[0] + v[0];
	v[0] = v[1] + v[2];
	tspn10_pd[42] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (tspn10_pd[42] <= 0.) {
	domain_("sqrt'", &tspn10_pd[42], 5L);
	}
	tspn10_pd[43] = 0.5 / tspn10_pd[42];
	v[0] = tspn10_pd[42] * x[20];
	v[2] = x[0] - x[4];
	v[1] = v[2] * v[2];
	tspn10_pd[44] = v[2] + v[2];
	v[2] = x[1] - x[5];
	v[3] = v[2] * v[2];
	tspn10_pd[45] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[46] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[46] <= 0.) {
	domain_("sqrt'", &tspn10_pd[46], 5L);
	}
	tspn10_pd[47] = 0.5 / tspn10_pd[46];
	v[2] = tspn10_pd[46] * x[21];
	v[0] += v[2];
	v[2] = x[0] - x[6];
	v[3] = v[2] * v[2];
	tspn10_pd[48] = v[2] + v[2];
	v[2] = x[1] - x[7];
	v[1] = v[2] * v[2];
	tspn10_pd[49] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[50] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[50] <= 0.) {
	domain_("sqrt'", &tspn10_pd[50], 5L);
	}
	tspn10_pd[51] = 0.5 / tspn10_pd[50];
	v[2] = tspn10_pd[50] * x[22];
	v[0] += v[2];
	v[2] = x[0] - x[8];
	v[1] = v[2] * v[2];
	tspn10_pd[52] = v[2] + v[2];
	v[2] = x[1] - x[9];
	v[3] = v[2] * v[2];
	tspn10_pd[53] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[54] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[54] <= 0.) {
	domain_("sqrt'", &tspn10_pd[54], 5L);
	}
	tspn10_pd[55] = 0.5 / tspn10_pd[54];
	v[2] = tspn10_pd[54] * x[23];
	v[0] += v[2];
	v[2] = x[0] - x[10];
	v[3] = v[2] * v[2];
	tspn10_pd[56] = v[2] + v[2];
	v[2] = x[1] - x[11];
	v[1] = v[2] * v[2];
	tspn10_pd[57] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[58] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[58] <= 0.) {
	domain_("sqrt'", &tspn10_pd[58], 5L);
	}
	tspn10_pd[59] = 0.5 / tspn10_pd[58];
	v[2] = tspn10_pd[58] * x[24];
	v[0] += v[2];
	v[2] = x[0] - x[12];
	v[1] = v[2] * v[2];
	tspn10_pd[60] = v[2] + v[2];
	v[2] = x[1] - x[13];
	v[3] = v[2] * v[2];
	tspn10_pd[61] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[62] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[62] <= 0.) {
	domain_("sqrt'", &tspn10_pd[62], 5L);
	}
	tspn10_pd[63] = 0.5 / tspn10_pd[62];
	v[2] = tspn10_pd[62] * x[25];
	v[0] += v[2];
	v[2] = x[0] - x[14];
	v[3] = v[2] * v[2];
	tspn10_pd[64] = v[2] + v[2];
	v[2] = x[1] - x[15];
	v[1] = v[2] * v[2];
	tspn10_pd[65] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[66] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[66] <= 0.) {
	domain_("sqrt'", &tspn10_pd[66], 5L);
	}
	tspn10_pd[67] = 0.5 / tspn10_pd[66];
	v[2] = tspn10_pd[66] * x[26];
	v[0] += v[2];
	v[2] = x[0] - x[16];
	v[1] = v[2] * v[2];
	tspn10_pd[68] = v[2] + v[2];
	v[2] = x[1] - x[17];
	v[3] = v[2] * v[2];
	tspn10_pd[69] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[70] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[70] <= 0.) {
	domain_("sqrt'", &tspn10_pd[70], 5L);
	}
	tspn10_pd[71] = 0.5 / tspn10_pd[70];
	v[2] = tspn10_pd[70] * x[27];
	v[0] += v[2];
	v[2] = x[0] - x[18];
	v[3] = v[2] * v[2];
	tspn10_pd[72] = v[2] + v[2];
	v[2] = x[1] - x[19];
	v[1] = v[2] * v[2];
	tspn10_pd[73] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[74] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[74] <= 0.) {
	domain_("sqrt'", &tspn10_pd[74], 5L);
	}
	tspn10_pd[75] = 0.5 / tspn10_pd[74];
	v[2] = tspn10_pd[74] * x[28];
	v[0] += v[2];
	v[2] = x[2] - x[4];
	v[1] = v[2] * v[2];
	tspn10_pd[76] = v[2] + v[2];
	v[2] = x[3] - x[5];
	v[3] = v[2] * v[2];
	tspn10_pd[77] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[78] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[78] <= 0.) {
	domain_("sqrt'", &tspn10_pd[78], 5L);
	}
	tspn10_pd[79] = 0.5 / tspn10_pd[78];
	v[2] = tspn10_pd[78] * x[29];
	v[0] += v[2];
	v[2] = x[2] - x[6];
	v[3] = v[2] * v[2];
	tspn10_pd[80] = v[2] + v[2];
	v[2] = x[3] - x[7];
	v[1] = v[2] * v[2];
	tspn10_pd[81] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[82] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[82] <= 0.) {
	domain_("sqrt'", &tspn10_pd[82], 5L);
	}
	tspn10_pd[83] = 0.5 / tspn10_pd[82];
	v[2] = tspn10_pd[82] * x[30];
	v[0] += v[2];
	v[2] = x[2] - x[8];
	v[1] = v[2] * v[2];
	tspn10_pd[84] = v[2] + v[2];
	v[2] = x[3] - x[9];
	v[3] = v[2] * v[2];
	tspn10_pd[85] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[86] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[86] <= 0.) {
	domain_("sqrt'", &tspn10_pd[86], 5L);
	}
	tspn10_pd[87] = 0.5 / tspn10_pd[86];
	v[2] = tspn10_pd[86] * x[31];
	v[0] += v[2];
	v[2] = x[2] - x[10];
	v[3] = v[2] * v[2];
	tspn10_pd[88] = v[2] + v[2];
	v[2] = x[3] - x[11];
	v[1] = v[2] * v[2];
	tspn10_pd[89] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[90] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[90] <= 0.) {
	domain_("sqrt'", &tspn10_pd[90], 5L);
	}
	tspn10_pd[91] = 0.5 / tspn10_pd[90];
	v[2] = tspn10_pd[90] * x[32];
	v[0] += v[2];
	v[2] = x[2] - x[12];
	v[1] = v[2] * v[2];
	tspn10_pd[92] = v[2] + v[2];
	v[2] = x[3] - x[13];
	v[3] = v[2] * v[2];
	tspn10_pd[93] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[94] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[94] <= 0.) {
	domain_("sqrt'", &tspn10_pd[94], 5L);
	}
	tspn10_pd[95] = 0.5 / tspn10_pd[94];
	v[2] = tspn10_pd[94] * x[33];
	v[0] += v[2];
	v[2] = x[2] - x[14];
	v[3] = v[2] * v[2];
	tspn10_pd[96] = v[2] + v[2];
	v[2] = x[3] - x[15];
	v[1] = v[2] * v[2];
	tspn10_pd[97] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[98] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[98] <= 0.) {
	domain_("sqrt'", &tspn10_pd[98], 5L);
	}
	tspn10_pd[99] = 0.5 / tspn10_pd[98];
	v[2] = tspn10_pd[98] * x[34];
	v[0] += v[2];
	v[2] = x[2] - x[16];
	v[1] = v[2] * v[2];
	tspn10_pd[100] = v[2] + v[2];
	v[2] = x[3] - x[17];
	v[3] = v[2] * v[2];
	tspn10_pd[101] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[102] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[102] <= 0.) {
	domain_("sqrt'", &tspn10_pd[102], 5L);
	}
	tspn10_pd[103] = 0.5 / tspn10_pd[102];
	v[2] = tspn10_pd[102] * x[35];
	v[0] += v[2];
	v[2] = x[2] - x[18];
	v[3] = v[2] * v[2];
	tspn10_pd[104] = v[2] + v[2];
	v[2] = x[3] - x[19];
	v[1] = v[2] * v[2];
	tspn10_pd[105] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[106] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[106] <= 0.) {
	domain_("sqrt'", &tspn10_pd[106], 5L);
	}
	tspn10_pd[107] = 0.5 / tspn10_pd[106];
	v[2] = tspn10_pd[106] * x[36];
	v[0] += v[2];
	v[2] = x[4] - x[6];
	v[1] = v[2] * v[2];
	tspn10_pd[108] = v[2] + v[2];
	v[2] = x[5] - x[7];
	v[3] = v[2] * v[2];
	tspn10_pd[109] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[110] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[110] <= 0.) {
	domain_("sqrt'", &tspn10_pd[110], 5L);
	}
	tspn10_pd[111] = 0.5 / tspn10_pd[110];
	v[2] = tspn10_pd[110] * x[37];
	v[0] += v[2];
	v[2] = x[4] - x[8];
	v[3] = v[2] * v[2];
	tspn10_pd[112] = v[2] + v[2];
	v[2] = x[5] - x[9];
	v[1] = v[2] * v[2];
	tspn10_pd[113] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[114] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[114] <= 0.) {
	domain_("sqrt'", &tspn10_pd[114], 5L);
	}
	tspn10_pd[115] = 0.5 / tspn10_pd[114];
	v[2] = tspn10_pd[114] * x[38];
	v[0] += v[2];
	v[2] = x[4] - x[10];
	v[1] = v[2] * v[2];
	tspn10_pd[116] = v[2] + v[2];
	v[2] = x[5] - x[11];
	v[3] = v[2] * v[2];
	tspn10_pd[117] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[118] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[118] <= 0.) {
	domain_("sqrt'", &tspn10_pd[118], 5L);
	}
	tspn10_pd[119] = 0.5 / tspn10_pd[118];
	v[2] = tspn10_pd[118] * x[39];
	v[0] += v[2];
	v[2] = x[4] - x[12];
	v[3] = v[2] * v[2];
	tspn10_pd[120] = v[2] + v[2];
	v[2] = x[5] - x[13];
	v[1] = v[2] * v[2];
	tspn10_pd[121] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[122] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[122] <= 0.) {
	domain_("sqrt'", &tspn10_pd[122], 5L);
	}
	tspn10_pd[123] = 0.5 / tspn10_pd[122];
	v[2] = tspn10_pd[122] * x[40];
	v[0] += v[2];
	v[2] = x[4] - x[14];
	v[1] = v[2] * v[2];
	tspn10_pd[124] = v[2] + v[2];
	v[2] = x[5] - x[15];
	v[3] = v[2] * v[2];
	tspn10_pd[125] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[126] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[126] <= 0.) {
	domain_("sqrt'", &tspn10_pd[126], 5L);
	}
	tspn10_pd[127] = 0.5 / tspn10_pd[126];
	v[2] = tspn10_pd[126] * x[41];
	v[0] += v[2];
	v[2] = x[4] - x[16];
	v[3] = v[2] * v[2];
	tspn10_pd[128] = v[2] + v[2];
	v[2] = x[5] - x[17];
	v[1] = v[2] * v[2];
	tspn10_pd[129] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[130] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[130] <= 0.) {
	domain_("sqrt'", &tspn10_pd[130], 5L);
	}
	tspn10_pd[131] = 0.5 / tspn10_pd[130];
	v[2] = tspn10_pd[130] * x[42];
	v[0] += v[2];
	v[2] = x[4] - x[18];
	v[1] = v[2] * v[2];
	tspn10_pd[132] = v[2] + v[2];
	v[2] = x[5] - x[19];
	v[3] = v[2] * v[2];
	tspn10_pd[133] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[134] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[134] <= 0.) {
	domain_("sqrt'", &tspn10_pd[134], 5L);
	}
	tspn10_pd[135] = 0.5 / tspn10_pd[134];
	v[2] = tspn10_pd[134] * x[43];
	v[0] += v[2];
	v[2] = x[6] - x[8];
	v[3] = v[2] * v[2];
	tspn10_pd[136] = v[2] + v[2];
	v[2] = x[7] - x[9];
	v[1] = v[2] * v[2];
	tspn10_pd[137] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[138] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[138] <= 0.) {
	domain_("sqrt'", &tspn10_pd[138], 5L);
	}
	tspn10_pd[139] = 0.5 / tspn10_pd[138];
	v[2] = tspn10_pd[138] * x[44];
	v[0] += v[2];
	v[2] = x[6] - x[10];
	v[1] = v[2] * v[2];
	tspn10_pd[140] = v[2] + v[2];
	v[2] = x[7] - x[11];
	v[3] = v[2] * v[2];
	tspn10_pd[141] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[142] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[142] <= 0.) {
	domain_("sqrt'", &tspn10_pd[142], 5L);
	}
	tspn10_pd[143] = 0.5 / tspn10_pd[142];
	v[2] = tspn10_pd[142] * x[45];
	v[0] += v[2];
	v[2] = x[6] - x[12];
	v[3] = v[2] * v[2];
	tspn10_pd[144] = v[2] + v[2];
	v[2] = x[7] - x[13];
	v[1] = v[2] * v[2];
	tspn10_pd[145] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[146] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[146] <= 0.) {
	domain_("sqrt'", &tspn10_pd[146], 5L);
	}
	tspn10_pd[147] = 0.5 / tspn10_pd[146];
	v[2] = tspn10_pd[146] * x[46];
	v[0] += v[2];
	v[2] = x[6] - x[14];
	v[1] = v[2] * v[2];
	tspn10_pd[148] = v[2] + v[2];
	v[2] = x[7] - x[15];
	v[3] = v[2] * v[2];
	tspn10_pd[149] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[150] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[150] <= 0.) {
	domain_("sqrt'", &tspn10_pd[150], 5L);
	}
	tspn10_pd[151] = 0.5 / tspn10_pd[150];
	v[2] = tspn10_pd[150] * x[47];
	v[0] += v[2];
	v[2] = x[6] - x[16];
	v[3] = v[2] * v[2];
	tspn10_pd[152] = v[2] + v[2];
	v[2] = x[7] - x[17];
	v[1] = v[2] * v[2];
	tspn10_pd[153] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[154] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[154] <= 0.) {
	domain_("sqrt'", &tspn10_pd[154], 5L);
	}
	tspn10_pd[155] = 0.5 / tspn10_pd[154];
	v[2] = tspn10_pd[154] * x[48];
	v[0] += v[2];
	v[2] = x[6] - x[18];
	v[1] = v[2] * v[2];
	tspn10_pd[156] = v[2] + v[2];
	v[2] = x[7] - x[19];
	v[3] = v[2] * v[2];
	tspn10_pd[157] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[158] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[158] <= 0.) {
	domain_("sqrt'", &tspn10_pd[158], 5L);
	}
	tspn10_pd[159] = 0.5 / tspn10_pd[158];
	v[2] = tspn10_pd[158] * x[49];
	v[0] += v[2];
	v[2] = x[8] - x[10];
	v[3] = v[2] * v[2];
	tspn10_pd[160] = v[2] + v[2];
	v[2] = x[9] - x[11];
	v[1] = v[2] * v[2];
	tspn10_pd[161] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[162] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[162] <= 0.) {
	domain_("sqrt'", &tspn10_pd[162], 5L);
	}
	tspn10_pd[163] = 0.5 / tspn10_pd[162];
	v[2] = tspn10_pd[162] * x[50];
	v[0] += v[2];
	v[2] = x[8] - x[12];
	v[1] = v[2] * v[2];
	tspn10_pd[164] = v[2] + v[2];
	v[2] = x[9] - x[13];
	v[3] = v[2] * v[2];
	tspn10_pd[165] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[166] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[166] <= 0.) {
	domain_("sqrt'", &tspn10_pd[166], 5L);
	}
	tspn10_pd[167] = 0.5 / tspn10_pd[166];
	v[2] = tspn10_pd[166] * x[51];
	v[0] += v[2];
	v[2] = x[8] - x[14];
	v[3] = v[2] * v[2];
	tspn10_pd[168] = v[2] + v[2];
	v[2] = x[9] - x[15];
	v[1] = v[2] * v[2];
	tspn10_pd[169] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[170] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[170] <= 0.) {
	domain_("sqrt'", &tspn10_pd[170], 5L);
	}
	tspn10_pd[171] = 0.5 / tspn10_pd[170];
	v[2] = tspn10_pd[170] * x[52];
	v[0] += v[2];
	v[2] = x[8] - x[16];
	v[1] = v[2] * v[2];
	tspn10_pd[172] = v[2] + v[2];
	v[2] = x[9] - x[17];
	v[3] = v[2] * v[2];
	tspn10_pd[173] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[174] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[174] <= 0.) {
	domain_("sqrt'", &tspn10_pd[174], 5L);
	}
	tspn10_pd[175] = 0.5 / tspn10_pd[174];
	v[2] = tspn10_pd[174] * x[53];
	v[0] += v[2];
	v[2] = x[8] - x[18];
	v[3] = v[2] * v[2];
	tspn10_pd[176] = v[2] + v[2];
	v[2] = x[9] - x[19];
	v[1] = v[2] * v[2];
	tspn10_pd[177] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[178] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[178] <= 0.) {
	domain_("sqrt'", &tspn10_pd[178], 5L);
	}
	tspn10_pd[179] = 0.5 / tspn10_pd[178];
	v[2] = tspn10_pd[178] * x[54];
	v[0] += v[2];
	v[2] = x[10] - x[12];
	v[1] = v[2] * v[2];
	tspn10_pd[180] = v[2] + v[2];
	v[2] = x[11] - x[13];
	v[3] = v[2] * v[2];
	tspn10_pd[181] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[182] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[182] <= 0.) {
	domain_("sqrt'", &tspn10_pd[182], 5L);
	}
	tspn10_pd[183] = 0.5 / tspn10_pd[182];
	v[2] = tspn10_pd[182] * x[55];
	v[0] += v[2];
	v[2] = x[10] - x[14];
	v[3] = v[2] * v[2];
	tspn10_pd[184] = v[2] + v[2];
	v[2] = x[11] - x[15];
	v[1] = v[2] * v[2];
	tspn10_pd[185] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[186] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[186] <= 0.) {
	domain_("sqrt'", &tspn10_pd[186], 5L);
	}
	tspn10_pd[187] = 0.5 / tspn10_pd[186];
	v[2] = tspn10_pd[186] * x[56];
	v[0] += v[2];
	v[2] = x[10] - x[16];
	v[1] = v[2] * v[2];
	tspn10_pd[188] = v[2] + v[2];
	v[2] = x[11] - x[17];
	v[3] = v[2] * v[2];
	tspn10_pd[189] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[190] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[190] <= 0.) {
	domain_("sqrt'", &tspn10_pd[190], 5L);
	}
	tspn10_pd[191] = 0.5 / tspn10_pd[190];
	v[2] = tspn10_pd[190] * x[57];
	v[0] += v[2];
	v[2] = x[10] - x[18];
	v[3] = v[2] * v[2];
	tspn10_pd[192] = v[2] + v[2];
	v[2] = x[11] - x[19];
	v[1] = v[2] * v[2];
	tspn10_pd[193] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[194] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[194] <= 0.) {
	domain_("sqrt'", &tspn10_pd[194], 5L);
	}
	tspn10_pd[195] = 0.5 / tspn10_pd[194];
	v[2] = tspn10_pd[194] * x[58];
	v[0] += v[2];
	v[2] = x[12] - x[14];
	v[1] = v[2] * v[2];
	tspn10_pd[196] = v[2] + v[2];
	v[2] = x[13] - x[15];
	v[3] = v[2] * v[2];
	tspn10_pd[197] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[198] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[198] <= 0.) {
	domain_("sqrt'", &tspn10_pd[198], 5L);
	}
	tspn10_pd[199] = 0.5 / tspn10_pd[198];
	v[2] = tspn10_pd[198] * x[59];
	v[0] += v[2];
	v[2] = x[12] - x[16];
	v[3] = v[2] * v[2];
	tspn10_pd[200] = v[2] + v[2];
	v[2] = x[13] - x[17];
	v[1] = v[2] * v[2];
	tspn10_pd[201] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[202] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[202] <= 0.) {
	domain_("sqrt'", &tspn10_pd[202], 5L);
	}
	tspn10_pd[203] = 0.5 / tspn10_pd[202];
	v[2] = tspn10_pd[202] * x[60];
	v[0] += v[2];
	v[2] = x[12] - x[18];
	v[1] = v[2] * v[2];
	tspn10_pd[204] = v[2] + v[2];
	v[2] = x[13] - x[19];
	v[3] = v[2] * v[2];
	tspn10_pd[205] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[206] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[206] <= 0.) {
	domain_("sqrt'", &tspn10_pd[206], 5L);
	}
	tspn10_pd[207] = 0.5 / tspn10_pd[206];
	v[2] = tspn10_pd[206] * x[61];
	v[0] += v[2];
	v[2] = x[14] - x[16];
	v[3] = v[2] * v[2];
	tspn10_pd[208] = v[2] + v[2];
	v[2] = x[15] - x[17];
	v[1] = v[2] * v[2];
	tspn10_pd[209] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[210] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[210] <= 0.) {
	domain_("sqrt'", &tspn10_pd[210], 5L);
	}
	tspn10_pd[211] = 0.5 / tspn10_pd[210];
	v[2] = tspn10_pd[210] * x[62];
	v[0] += v[2];
	v[2] = x[14] - x[18];
	v[1] = v[2] * v[2];
	tspn10_pd[212] = v[2] + v[2];
	v[2] = x[15] - x[19];
	v[3] = v[2] * v[2];
	tspn10_pd[213] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn10_pd[214] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[214] <= 0.) {
	domain_("sqrt'", &tspn10_pd[214], 5L);
	}
	tspn10_pd[215] = 0.5 / tspn10_pd[214];
	v[2] = tspn10_pd[214] * x[63];
	v[0] += v[2];
	v[2] = x[16] - x[18];
	v[3] = v[2] * v[2];
	tspn10_pd[216] = v[2] + v[2];
	v[2] = x[17] - x[19];
	v[1] = v[2] * v[2];
	tspn10_pd[217] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn10_pd[218] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn10_pd[218] <= 0.) {
	domain_("sqrt'", &tspn10_pd[218], 5L);
	}
	tspn10_pd[219] = 0.5 / tspn10_pd[218];
	v[2] = tspn10_pd[218] * x[64];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[64] = tspn10_pd[218];
	dv[0] = x[64]*tspn10_pd[219];
	dv[1] = dv[0];
	dv[1] *= tspn10_pd[217];
	g[19] = -dv[1];
	g[17] = dv[1];
	dv[0] *= tspn10_pd[216];
	g[18] = -dv[0];
	g[16] = dv[0];
	g[63] = tspn10_pd[214];
	dv[2] = x[63]*tspn10_pd[215];
	dv[3] = dv[2];
	dv[3] *= tspn10_pd[213];
	g[19] -= dv[3];
	g[15] = dv[3];
	dv[2] *= tspn10_pd[212];
	g[18] -= dv[2];
	g[14] = dv[2];
	g[62] = tspn10_pd[210];
	dv[4] = x[62]*tspn10_pd[211];
	dv[5] = dv[4];
	dv[5] *= tspn10_pd[209];
	g[17] -= dv[5];
	g[15] += dv[5];
	dv[4] *= tspn10_pd[208];
	g[16] -= dv[4];
	g[14] += dv[4];
	g[61] = tspn10_pd[206];
	dv[6] = x[61]*tspn10_pd[207];
	dv[7] = dv[6];
	dv[7] *= tspn10_pd[205];
	g[19] -= dv[7];
	g[13] = dv[7];
	dv[6] *= tspn10_pd[204];
	g[18] -= dv[6];
	g[12] = dv[6];
	g[60] = tspn10_pd[202];
	dv[8] = x[60]*tspn10_pd[203];
	dv[9] = dv[8];
	dv[9] *= tspn10_pd[201];
	g[17] -= dv[9];
	g[13] += dv[9];
	dv[8] *= tspn10_pd[200];
	g[16] -= dv[8];
	g[12] += dv[8];
	g[59] = tspn10_pd[198];
	dv[10] = x[59]*tspn10_pd[199];
	dv[11] = dv[10];
	dv[11] *= tspn10_pd[197];
	g[15] -= dv[11];
	g[13] += dv[11];
	dv[10] *= tspn10_pd[196];
	g[14] -= dv[10];
	g[12] += dv[10];
	g[58] = tspn10_pd[194];
	dv[12] = x[58]*tspn10_pd[195];
	dv[13] = dv[12];
	dv[13] *= tspn10_pd[193];
	g[19] -= dv[13];
	g[11] = dv[13];
	dv[12] *= tspn10_pd[192];
	g[18] -= dv[12];
	g[10] = dv[12];
	g[57] = tspn10_pd[190];
	dv[14] = x[57]*tspn10_pd[191];
	dv[15] = dv[14];
	dv[15] *= tspn10_pd[189];
	g[17] -= dv[15];
	g[11] += dv[15];
	dv[14] *= tspn10_pd[188];
	g[16] -= dv[14];
	g[10] += dv[14];
	g[56] = tspn10_pd[186];
	dv[16] = x[56]*tspn10_pd[187];
	dv[17] = dv[16];
	dv[17] *= tspn10_pd[185];
	g[15] -= dv[17];
	g[11] += dv[17];
	dv[16] *= tspn10_pd[184];
	g[14] -= dv[16];
	g[10] += dv[16];
	g[55] = tspn10_pd[182];
	dv[18] = x[55]*tspn10_pd[183];
	dv[19] = dv[18];
	dv[19] *= tspn10_pd[181];
	g[13] -= dv[19];
	g[11] += dv[19];
	dv[18] *= tspn10_pd[180];
	g[12] -= dv[18];
	g[10] += dv[18];
	g[54] = tspn10_pd[178];
	dv[20] = x[54]*tspn10_pd[179];
	dv[21] = dv[20];
	dv[21] *= tspn10_pd[177];
	g[19] -= dv[21];
	g[9] = dv[21];
	dv[20] *= tspn10_pd[176];
	g[18] -= dv[20];
	g[8] = dv[20];
	g[53] = tspn10_pd[174];
	dv[22] = x[53]*tspn10_pd[175];
	dv[23] = dv[22];
	dv[23] *= tspn10_pd[173];
	g[17] -= dv[23];
	g[9] += dv[23];
	dv[22] *= tspn10_pd[172];
	g[16] -= dv[22];
	g[8] += dv[22];
	g[52] = tspn10_pd[170];
	dv[24] = x[52]*tspn10_pd[171];
	dv[25] = dv[24];
	dv[25] *= tspn10_pd[169];
	g[15] -= dv[25];
	g[9] += dv[25];
	dv[24] *= tspn10_pd[168];
	g[14] -= dv[24];
	g[8] += dv[24];
	g[51] = tspn10_pd[166];
	dv[26] = x[51]*tspn10_pd[167];
	dv[27] = dv[26];
	dv[27] *= tspn10_pd[165];
	g[13] -= dv[27];
	g[9] += dv[27];
	dv[26] *= tspn10_pd[164];
	g[12] -= dv[26];
	g[8] += dv[26];
	g[50] = tspn10_pd[162];
	dv[28] = x[50]*tspn10_pd[163];
	dv[29] = dv[28];
	dv[29] *= tspn10_pd[161];
	g[11] -= dv[29];
	g[9] += dv[29];
	dv[28] *= tspn10_pd[160];
	g[10] -= dv[28];
	g[8] += dv[28];
	g[49] = tspn10_pd[158];
	dv[30] = x[49]*tspn10_pd[159];
	dv[31] = dv[30];
	dv[31] *= tspn10_pd[157];
	g[19] -= dv[31];
	g[7] = dv[31];
	dv[30] *= tspn10_pd[156];
	g[18] -= dv[30];
	g[6] = dv[30];
	g[48] = tspn10_pd[154];
	dv[32] = x[48]*tspn10_pd[155];
	dv[33] = dv[32];
	dv[33] *= tspn10_pd[153];
	g[17] -= dv[33];
	g[7] += dv[33];
	dv[32] *= tspn10_pd[152];
	g[16] -= dv[32];
	g[6] += dv[32];
	g[47] = tspn10_pd[150];
	dv[34] = x[47]*tspn10_pd[151];
	dv[35] = dv[34];
	dv[35] *= tspn10_pd[149];
	g[15] -= dv[35];
	g[7] += dv[35];
	dv[34] *= tspn10_pd[148];
	g[14] -= dv[34];
	g[6] += dv[34];
	g[46] = tspn10_pd[146];
	dv[36] = x[46]*tspn10_pd[147];
	dv[37] = dv[36];
	dv[37] *= tspn10_pd[145];
	g[13] -= dv[37];
	g[7] += dv[37];
	dv[36] *= tspn10_pd[144];
	g[12] -= dv[36];
	g[6] += dv[36];
	g[45] = tspn10_pd[142];
	dv[38] = x[45]*tspn10_pd[143];
	dv[39] = dv[38];
	dv[39] *= tspn10_pd[141];
	g[11] -= dv[39];
	g[7] += dv[39];
	dv[38] *= tspn10_pd[140];
	g[10] -= dv[38];
	g[6] += dv[38];
	g[44] = tspn10_pd[138];
	dv[40] = x[44]*tspn10_pd[139];
	dv[41] = dv[40];
	dv[41] *= tspn10_pd[137];
	g[9] -= dv[41];
	g[7] += dv[41];
	dv[40] *= tspn10_pd[136];
	g[8] -= dv[40];
	g[6] += dv[40];
	g[43] = tspn10_pd[134];
	dv[42] = x[43]*tspn10_pd[135];
	dv[43] = dv[42];
	dv[43] *= tspn10_pd[133];
	g[19] -= dv[43];
	g[5] = dv[43];
	dv[42] *= tspn10_pd[132];
	g[18] -= dv[42];
	g[4] = dv[42];
	g[42] = tspn10_pd[130];
	dv[44] = x[42]*tspn10_pd[131];
	dv[45] = dv[44];
	dv[45] *= tspn10_pd[129];
	g[17] -= dv[45];
	g[5] += dv[45];
	dv[44] *= tspn10_pd[128];
	g[16] -= dv[44];
	g[4] += dv[44];
	g[41] = tspn10_pd[126];
	dv[46] = x[41]*tspn10_pd[127];
	dv[47] = dv[46];
	dv[47] *= tspn10_pd[125];
	g[15] -= dv[47];
	g[5] += dv[47];
	dv[46] *= tspn10_pd[124];
	g[14] -= dv[46];
	g[4] += dv[46];
	g[40] = tspn10_pd[122];
	dv[48] = x[40]*tspn10_pd[123];
	dv[49] = dv[48];
	dv[49] *= tspn10_pd[121];
	g[13] -= dv[49];
	g[5] += dv[49];
	dv[48] *= tspn10_pd[120];
	g[12] -= dv[48];
	g[4] += dv[48];
	g[39] = tspn10_pd[118];
	dv[50] = x[39]*tspn10_pd[119];
	dv[51] = dv[50];
	dv[51] *= tspn10_pd[117];
	g[11] -= dv[51];
	g[5] += dv[51];
	dv[50] *= tspn10_pd[116];
	g[10] -= dv[50];
	g[4] += dv[50];
	g[38] = tspn10_pd[114];
	dv[52] = x[38]*tspn10_pd[115];
	dv[53] = dv[52];
	dv[53] *= tspn10_pd[113];
	g[9] -= dv[53];
	g[5] += dv[53];
	dv[52] *= tspn10_pd[112];
	g[8] -= dv[52];
	g[4] += dv[52];
	g[37] = tspn10_pd[110];
	dv[54] = x[37]*tspn10_pd[111];
	dv[55] = dv[54];
	dv[55] *= tspn10_pd[109];
	g[7] -= dv[55];
	g[5] += dv[55];
	dv[54] *= tspn10_pd[108];
	g[6] -= dv[54];
	g[4] += dv[54];
	g[36] = tspn10_pd[106];
	dv[56] = x[36]*tspn10_pd[107];
	dv[57] = dv[56];
	dv[57] *= tspn10_pd[105];
	g[19] -= dv[57];
	g[3] = dv[57];
	dv[56] *= tspn10_pd[104];
	g[18] -= dv[56];
	g[2] = dv[56];
	g[35] = tspn10_pd[102];
	dv[58] = x[35]*tspn10_pd[103];
	dv[59] = dv[58];
	dv[59] *= tspn10_pd[101];
	g[17] -= dv[59];
	g[3] += dv[59];
	dv[58] *= tspn10_pd[100];
	g[16] -= dv[58];
	g[2] += dv[58];
	g[34] = tspn10_pd[98];
	dv[60] = x[34]*tspn10_pd[99];
	dv[61] = dv[60];
	dv[61] *= tspn10_pd[97];
	g[15] -= dv[61];
	g[3] += dv[61];
	dv[60] *= tspn10_pd[96];
	g[14] -= dv[60];
	g[2] += dv[60];
	g[33] = tspn10_pd[94];
	dv[62] = x[33]*tspn10_pd[95];
	dv[63] = dv[62];
	dv[63] *= tspn10_pd[93];
	g[13] -= dv[63];
	g[3] += dv[63];
	dv[62] *= tspn10_pd[92];
	g[12] -= dv[62];
	g[2] += dv[62];
	g[32] = tspn10_pd[90];
	dv[64] = x[32]*tspn10_pd[91];
	dv[65] = dv[64];
	dv[65] *= tspn10_pd[89];
	g[11] -= dv[65];
	g[3] += dv[65];
	dv[64] *= tspn10_pd[88];
	g[10] -= dv[64];
	g[2] += dv[64];
	g[31] = tspn10_pd[86];
	dv[66] = x[31]*tspn10_pd[87];
	dv[67] = dv[66];
	dv[67] *= tspn10_pd[85];
	g[9] -= dv[67];
	g[3] += dv[67];
	dv[66] *= tspn10_pd[84];
	g[8] -= dv[66];
	g[2] += dv[66];
	g[30] = tspn10_pd[82];
	dv[68] = x[30]*tspn10_pd[83];
	dv[69] = dv[68];
	dv[69] *= tspn10_pd[81];
	g[7] -= dv[69];
	g[3] += dv[69];
	dv[68] *= tspn10_pd[80];
	g[6] -= dv[68];
	g[2] += dv[68];
	g[29] = tspn10_pd[78];
	dv[70] = x[29]*tspn10_pd[79];
	dv[71] = dv[70];
	dv[71] *= tspn10_pd[77];
	g[5] -= dv[71];
	g[3] += dv[71];
	dv[70] *= tspn10_pd[76];
	g[4] -= dv[70];
	g[2] += dv[70];
	g[28] = tspn10_pd[74];
	dv[72] = x[28]*tspn10_pd[75];
	dv[73] = dv[72];
	dv[73] *= tspn10_pd[73];
	g[19] -= dv[73];
	g[1] = dv[73];
	dv[72] *= tspn10_pd[72];
	g[18] -= dv[72];
	g[0] = dv[72];
	g[27] = tspn10_pd[70];
	dv[74] = x[27]*tspn10_pd[71];
	dv[75] = dv[74];
	dv[75] *= tspn10_pd[69];
	g[17] -= dv[75];
	g[1] += dv[75];
	dv[74] *= tspn10_pd[68];
	g[16] -= dv[74];
	g[0] += dv[74];
	g[26] = tspn10_pd[66];
	dv[76] = x[26]*tspn10_pd[67];
	dv[77] = dv[76];
	dv[77] *= tspn10_pd[65];
	g[15] -= dv[77];
	g[1] += dv[77];
	dv[76] *= tspn10_pd[64];
	g[14] -= dv[76];
	g[0] += dv[76];
	g[25] = tspn10_pd[62];
	dv[78] = x[25]*tspn10_pd[63];
	dv[79] = dv[78];
	dv[79] *= tspn10_pd[61];
	g[13] -= dv[79];
	g[1] += dv[79];
	dv[78] *= tspn10_pd[60];
	g[12] -= dv[78];
	g[0] += dv[78];
	g[24] = tspn10_pd[58];
	dv[80] = x[24]*tspn10_pd[59];
	dv[81] = dv[80];
	dv[81] *= tspn10_pd[57];
	g[11] -= dv[81];
	g[1] += dv[81];
	dv[80] *= tspn10_pd[56];
	g[10] -= dv[80];
	g[0] += dv[80];
	g[23] = tspn10_pd[54];
	dv[82] = x[23]*tspn10_pd[55];
	dv[83] = dv[82];
	dv[83] *= tspn10_pd[53];
	g[9] -= dv[83];
	g[1] += dv[83];
	dv[82] *= tspn10_pd[52];
	g[8] -= dv[82];
	g[0] += dv[82];
	g[22] = tspn10_pd[50];
	dv[84] = x[22]*tspn10_pd[51];
	dv[85] = dv[84];
	dv[85] *= tspn10_pd[49];
	g[7] -= dv[85];
	g[1] += dv[85];
	dv[84] *= tspn10_pd[48];
	g[6] -= dv[84];
	g[0] += dv[84];
	g[21] = tspn10_pd[46];
	dv[86] = x[21]*tspn10_pd[47];
	dv[87] = dv[86];
	dv[87] *= tspn10_pd[45];
	g[5] -= dv[87];
	g[1] += dv[87];
	dv[86] *= tspn10_pd[44];
	g[4] -= dv[86];
	g[0] += dv[86];
	g[20] = tspn10_pd[42];
	dv[88] = x[20]*tspn10_pd[43];
	dv[89] = dv[88];
	dv[89] *= tspn10_pd[41];
	g[3] -= dv[89];
	g[1] += dv[89];
	dv[88] *= tspn10_pd[40];
	g[2] -= dv[88];
	g[0] += dv[88];
	}

	return v[0];
}

 void
tspn10_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (tspn10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	tspn10_pd[0] = x[0] * x[0];
	tspn10_pd[1] = x[0] + x[0];
	v[0] = 0.444444444444444 * tspn10_pd[0];
	tspn10_pd[2] = x[1] * x[1];
	tspn10_pd[3] = x[1] + x[1];
	v[1] = 0.0236686390532544 * tspn10_pd[2];
	v[2] = v[0] + v[1];
	t1 = v[2] + -62.6666666666667*x[0];
	t1 += -0.63905325443787*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	tspn10_pd[4] = x[2] * x[2];
	tspn10_pd[5] = x[2] + x[2];
	v[0] = 0.0204081632653061 * tspn10_pd[4];
	tspn10_pd[6] = x[3] * x[3];
	tspn10_pd[7] = x[3] + x[3];
	v[1] = 0.0330578512396694 * tspn10_pd[6];
	v[2] = v[0] + v[1];
	t1 = v[2] + -4.73469387755102*x[2];
	t1 += -5.38842975206612*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	tspn10_pd[8] = x[4] * x[4];
	tspn10_pd[9] = x[4] + x[4];
	v[0] = 0.0110803324099723 * tspn10_pd[8];
	tspn10_pd[10] = x[5] * x[5];
	tspn10_pd[11] = x[5] + x[5];
	v[1] = 0.0493827160493827 * tspn10_pd[10];
	v[2] = v[0] + v[1];
	t1 = v[2] + -1.14127423822715*x[4];
	t1 += -6.66666666666667*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	tspn10_pd[12] = x[6] * x[6];
	tspn10_pd[13] = x[6] + x[6];
	v[0] = 0.04 * tspn10_pd[12];
	tspn10_pd[14] = x[7] * x[7];
	tspn10_pd[15] = x[7] + x[7];
	v[1] = 0.0625 * tspn10_pd[14];
	v[2] = v[0] + v[1];
	t1 = v[2] + -7.84*x[6];
	t1 += -8.*x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	tspn10_pd[16] = x[8] * x[8];
	tspn10_pd[17] = x[8] + x[8];
	v[0] = 0.0177777777777778 * tspn10_pd[16];
	tspn10_pd[18] = x[9] * x[9];
	tspn10_pd[19] = x[9] + x[9];
	v[1] = 0.013840830449827 * tspn10_pd[18];
	v[2] = v[0] + v[1];
	t1 = v[2] + -3.11111111111111*x[8];
	t1 += -0.235294117647059*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	tspn10_pd[20] = x[10] * x[10];
	tspn10_pd[21] = x[10] + x[10];
	v[0] = 0.0090702947845805 * tspn10_pd[20];
	tspn10_pd[22] = x[11] * x[11];
	tspn10_pd[23] = x[11] + x[11];
	v[1] = 0.04 * tspn10_pd[22];
	v[2] = v[0] + v[1];
	t1 = v[2] + -1.4421768707483*x[10];
	t1 += -7.68*x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	tspn10_pd[24] = x[12] * x[12];
	tspn10_pd[25] = x[12] + x[12];
	v[0] = 0.0330578512396694 * tspn10_pd[24];
	tspn10_pd[26] = x[13] * x[13];
	tspn10_pd[27] = x[13] + x[13];
	v[1] = 0.0625 * tspn10_pd[26];
	v[2] = v[0] + v[1];
	t1 = v[2] + -3.27272727272727*x[12];
	t1 += -7.125*x[13];
	c[6] = t1;

  /***  constraint 8  ***/

	tspn10_pd[28] = x[14] * x[14];
	tspn10_pd[29] = x[14] + x[14];
	v[0] = 0.0177777777777778 * tspn10_pd[28];
	tspn10_pd[30] = x[15] * x[15];
	tspn10_pd[31] = x[15] + x[15];
	v[1] = 0.0090702947845805 * tspn10_pd[30];
	v[2] = v[0] + v[1];
	t1 = v[2] + -2.57777777777778*x[14];
	t1 += -1.80498866213152*x[15];
	c[7] = t1;

  /***  constraint 9  ***/

	tspn10_pd[32] = x[16] * x[16];
	tspn10_pd[33] = x[16] + x[16];
	v[0] = 0.16 * tspn10_pd[32];
	tspn10_pd[34] = x[17] * x[17];
	tspn10_pd[35] = x[17] + x[17];
	v[1] = 0.00826446280991736 * tspn10_pd[34];
	v[2] = v[0] + v[1];
	t1 = v[2] + -38.56*x[16];
	t1 += -0.512396694214876*x[17];
	c[8] = t1;

  /***  constraint 10  ***/

	tspn10_pd[36] = x[18] * x[18];
	tspn10_pd[37] = x[18] + x[18];
	v[0] = 0.0330578512396694 * tspn10_pd[36];
	tspn10_pd[38] = x[19] * x[19];
	tspn10_pd[39] = x[19] + x[19];
	v[1] = 0.0236686390532544 * tspn10_pd[38];
	v[2] = v[0] + v[1];
	t1 = v[2] + -5.52066115702479*x[18];
	t1 += -1.82248520710059*x[19];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[20];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[21];
	t1 += x[29];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[22];
	t1 += x[30];
	t1 += x[37];
	t1 += x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[23];
	t1 += x[31];
	t1 += x[38];
	t1 += x[44];
	t1 += x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[24];
	t1 += x[32];
	t1 += x[39];
	t1 += x[45];
	t1 += x[50];
	t1 += x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[25];
	t1 += x[33];
	t1 += x[40];
	t1 += x[46];
	t1 += x[51];
	t1 += x[55];
	t1 += x[59];
	t1 += x[60];
	t1 += x[61];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[26];
	t1 += x[34];
	t1 += x[41];
	t1 += x[47];
	t1 += x[52];
	t1 += x[56];
	t1 += x[59];
	t1 += x[62];
	t1 += x[63];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[27];
	t1 += x[35];
	t1 += x[42];
	t1 += x[48];
	t1 += x[53];
	t1 += x[57];
	t1 += x[60];
	t1 += x[62];
	t1 += x[64];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[28];
	t1 += x[36];
	t1 += x[43];
	t1 += x[49];
	t1 += x[54];
	t1 += x[58];
	t1 += x[61];
	t1 += x[63];
	t1 += x[64];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[23];
	t1 += x[28];
	t1 += x[54];
	c[20] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = 0.0236686390532544*tspn10_pd[3] + -0.63905325443787;
	J[0] = 0.444444444444444*tspn10_pd[1] + -62.6666666666667;

   /*** derivatives for constraint 2 ***/

	J[3] = 0.0330578512396694*tspn10_pd[7] + -5.38842975206612;
	J[2] = 0.0204081632653061*tspn10_pd[5] + -4.73469387755102;

   /*** derivatives for constraint 3 ***/

	J[5] = 0.0493827160493827*tspn10_pd[11] + -6.66666666666667;
	J[4] = 0.0110803324099723*tspn10_pd[9] + -1.14127423822715;

   /*** derivatives for constraint 4 ***/

	J[7] = 0.0625*tspn10_pd[15] + -8.;
	J[6] = 0.04*tspn10_pd[13] + -7.84;

   /*** derivatives for constraint 5 ***/

	J[9] = 0.013840830449827*tspn10_pd[19] + -0.235294117647059;
	J[8] = 0.0177777777777778*tspn10_pd[17] + -3.11111111111111;

   /*** derivatives for constraint 6 ***/

	J[11] = 0.04*tspn10_pd[23] + -7.68;
	J[10] = 0.0090702947845805*tspn10_pd[21] + -1.4421768707483;

   /*** derivatives for constraint 7 ***/

	J[13] = 0.0625*tspn10_pd[27] + -7.125;
	J[12] = 0.0330578512396694*tspn10_pd[25] + -3.27272727272727;

   /*** derivatives for constraint 8 ***/

	J[15] = 0.0090702947845805*tspn10_pd[31] + -1.80498866213152;
	J[14] = 0.0177777777777778*tspn10_pd[29] + -2.57777777777778;

   /*** derivatives for constraint 9 ***/

	J[17] = 0.00826446280991736*tspn10_pd[35] + -0.512396694214876;
	J[16] = 0.16*tspn10_pd[33] + -38.56;

   /*** derivatives for constraint 10 ***/

	J[19] = 0.0236686390532544*tspn10_pd[39] + -1.82248520710059;
	J[18] = 0.0330578512396694*tspn10_pd[37] + -5.52066115702479;

   /*** derivatives for constraint 11 ***/

	J[20] = 1.;
	J[22] = 1.;
	J[24] = 1.;
	J[26] = 1.;
	J[29] = 1.;
	J[31] = 1.;
	J[33] = 1.;
	J[35] = 1.;
	J[37] = 1.;

   /*** derivatives for constraint 12 ***/

	J[21] = 1.;
	J[40] = 1.;
	J[42] = 1.;
	J[44] = 1.;
	J[46] = 1.;
	J[48] = 1.;
	J[50] = 1.;
	J[52] = 1.;
	J[54] = 1.;

   /*** derivatives for constraint 13 ***/

	J[23] = 1.;
	J[41] = 1.;
	J[56] = 1.;
	J[58] = 1.;
	J[60] = 1.;
	J[62] = 1.;
	J[64] = 1.;
	J[66] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 14 ***/

	J[25] = 1.;
	J[43] = 1.;
	J[57] = 1.;
	J[70] = 1.;
	J[72] = 1.;
	J[74] = 1.;
	J[76] = 1.;
	J[78] = 1.;
	J[80] = 1.;

   /*** derivatives for constraint 15 ***/

	J[27] = 1.;
	J[45] = 1.;
	J[59] = 1.;
	J[71] = 1.;
	J[82] = 1.;
	J[84] = 1.;
	J[86] = 1.;
	J[88] = 1.;
	J[90] = 1.;

   /*** derivatives for constraint 16 ***/

	J[30] = 1.;
	J[47] = 1.;
	J[61] = 1.;
	J[73] = 1.;
	J[83] = 1.;
	J[93] = 1.;
	J[95] = 1.;
	J[97] = 1.;
	J[99] = 1.;

   /*** derivatives for constraint 17 ***/

	J[32] = 1.;
	J[49] = 1.;
	J[63] = 1.;
	J[75] = 1.;
	J[85] = 1.;
	J[94] = 1.;
	J[101] = 1.;
	J[103] = 1.;
	J[105] = 1.;

   /*** derivatives for constraint 18 ***/

	J[34] = 1.;
	J[51] = 1.;
	J[65] = 1.;
	J[77] = 1.;
	J[87] = 1.;
	J[96] = 1.;
	J[102] = 1.;
	J[107] = 1.;
	J[109] = 1.;

   /*** derivatives for constraint 19 ***/

	J[36] = 1.;
	J[53] = 1.;
	J[67] = 1.;
	J[79] = 1.;
	J[89] = 1.;
	J[98] = 1.;
	J[104] = 1.;
	J[108] = 1.;
	J[111] = 1.;

   /*** derivatives for constraint 20 ***/

	J[38] = 1.;
	J[55] = 1.;
	J[69] = 1.;
	J[81] = 1.;
	J[91] = 1.;
	J[100] = 1.;
	J[106] = 1.;
	J[110] = 1.;
	J[112] = 1.;

   /*** derivatives for constraint 21 ***/

	J[28] = 1.;
	J[39] = 1.;
	J[92] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
