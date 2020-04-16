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
 fint tspn08_auxcom_[1] = { 8 /* nlc */ };
 fint tspn08_funcom_[143] = {
	44 /* nvar */,
	1 /* nobj */,
	18 /* ncon */,
	92 /* nzc */,
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
	20,
	24,
	27,
	30,
	33,
	36,
	39,
	42,
	45,
	47,
	49,
	52,
	54,
	57,
	60,
	63,
	66,
	69,
	71,
	73,
	76,
	78,
	81,
	83,
	86,
	88,
	91,
	93,

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
	10,
	18,
	9,
	11,
	17,
	18,
	9,
	12,
	18,
	9,
	13,
	17,
	9,
	14,
	17,
	9,
	15,
	18,
	9,
	16,
	17,
	10,
	11,
	18,
	10,
	12,
	18,
	10,
	13,
	10,
	14,
	10,
	15,
	18,
	10,
	16,
	11,
	12,
	18,
	11,
	13,
	17,
	11,
	14,
	17,
	11,
	15,
	18,
	11,
	16,
	17,
	12,
	13,
	12,
	14,
	12,
	15,
	18,
	12,
	16,
	13,
	14,
	17,
	13,
	15,
	13,
	16,
	17,
	14,
	15,
	14,
	16,
	17,
	15,
	16 };

 real tspn08_boundc_[1+88+36] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		3.,
		20.,
		55.,
		68.,
		29.,
		38.,
		12.,
		22.,
		5.,
		16.,
		82.,
		91.,
		94.,
		105.,
		0.,
		17.,
		16.,
		38.,
		97.,
		114.,
		57.,
		68.,
		108.,
		125.,
		0.,
		23.,
		7.,
		25.,
		48.,
		74.,
		88.,
		112.,
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
		-90.3511598861612,
		-1.7e308,
		-65.9797530864197,
		-1.7e308,
		-372.138455259667,
		-1.7e308,
		-327.280991735537,
		-1.7e308,
		-159.076696502617,
		-1.7e308,
		-315.983442477623,
		-1.7e308,
		-3.16049382716049,
		-1.7e308,
		-90.4621959237344,
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
		4.,
		-1.7e308,
		4.};

 real tspn08_x0comn_[44] = {
		3.,
		55.,
		29.,
		12.,
		5.,
		82.,
		94.,
		0.,
		16.,
		97.,
		57.,
		108.,
		0.,
		7.,
		48.,
		88.,
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

 static real tspn08_pd[144];
static real tspn08_old_x[44];
static int tspn08_xkind = -1;

 static int
tspn08_xcheck(real *x)
{
	real *x1 = tspn08_old_x, *xe = x + 44;
	errno = 0;
	if (tspn08_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tspn08_xkind = 0;
	return 1;
	}
 real
tspn08_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[56];
	fint wantfg = *needfg;
	if (tspn08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] - x[2];
	v[1] = v[0] * v[0];
	tspn08_pd[32] = v[0] + v[0];
	v[0] = x[1] - x[3];
	v[2] = v[0] * v[0];
	tspn08_pd[33] = v[0] + v[0];
	v[0] = v[1] + v[2];
	tspn08_pd[34] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (tspn08_pd[34] <= 0.) {
	domain_("sqrt'", &tspn08_pd[34], 5L);
	}
	tspn08_pd[35] = 0.5 / tspn08_pd[34];
	v[0] = tspn08_pd[34] * x[16];
	v[2] = x[0] - x[4];
	v[1] = v[2] * v[2];
	tspn08_pd[36] = v[2] + v[2];
	v[2] = x[1] - x[5];
	v[3] = v[2] * v[2];
	tspn08_pd[37] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[38] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[38] <= 0.) {
	domain_("sqrt'", &tspn08_pd[38], 5L);
	}
	tspn08_pd[39] = 0.5 / tspn08_pd[38];
	v[2] = tspn08_pd[38] * x[17];
	v[0] += v[2];
	v[2] = x[0] - x[6];
	v[3] = v[2] * v[2];
	tspn08_pd[40] = v[2] + v[2];
	v[2] = x[1] - x[7];
	v[1] = v[2] * v[2];
	tspn08_pd[41] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[42] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[42] <= 0.) {
	domain_("sqrt'", &tspn08_pd[42], 5L);
	}
	tspn08_pd[43] = 0.5 / tspn08_pd[42];
	v[2] = tspn08_pd[42] * x[18];
	v[0] += v[2];
	v[2] = x[0] - x[8];
	v[1] = v[2] * v[2];
	tspn08_pd[44] = v[2] + v[2];
	v[2] = x[1] - x[9];
	v[3] = v[2] * v[2];
	tspn08_pd[45] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[46] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[46] <= 0.) {
	domain_("sqrt'", &tspn08_pd[46], 5L);
	}
	tspn08_pd[47] = 0.5 / tspn08_pd[46];
	v[2] = tspn08_pd[46] * x[19];
	v[0] += v[2];
	v[2] = x[0] - x[10];
	v[3] = v[2] * v[2];
	tspn08_pd[48] = v[2] + v[2];
	v[2] = x[1] - x[11];
	v[1] = v[2] * v[2];
	tspn08_pd[49] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[50] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[50] <= 0.) {
	domain_("sqrt'", &tspn08_pd[50], 5L);
	}
	tspn08_pd[51] = 0.5 / tspn08_pd[50];
	v[2] = tspn08_pd[50] * x[20];
	v[0] += v[2];
	v[2] = x[0] - x[12];
	v[1] = v[2] * v[2];
	tspn08_pd[52] = v[2] + v[2];
	v[2] = x[1] - x[13];
	v[3] = v[2] * v[2];
	tspn08_pd[53] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[54] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[54] <= 0.) {
	domain_("sqrt'", &tspn08_pd[54], 5L);
	}
	tspn08_pd[55] = 0.5 / tspn08_pd[54];
	v[2] = tspn08_pd[54] * x[21];
	v[0] += v[2];
	v[2] = x[0] - x[14];
	v[3] = v[2] * v[2];
	tspn08_pd[56] = v[2] + v[2];
	v[2] = x[1] - x[15];
	v[1] = v[2] * v[2];
	tspn08_pd[57] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[58] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[58] <= 0.) {
	domain_("sqrt'", &tspn08_pd[58], 5L);
	}
	tspn08_pd[59] = 0.5 / tspn08_pd[58];
	v[2] = tspn08_pd[58] * x[22];
	v[0] += v[2];
	v[2] = x[2] - x[4];
	v[1] = v[2] * v[2];
	tspn08_pd[60] = v[2] + v[2];
	v[2] = x[3] - x[5];
	v[3] = v[2] * v[2];
	tspn08_pd[61] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[62] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[62] <= 0.) {
	domain_("sqrt'", &tspn08_pd[62], 5L);
	}
	tspn08_pd[63] = 0.5 / tspn08_pd[62];
	v[2] = tspn08_pd[62] * x[23];
	v[0] += v[2];
	v[2] = x[2] - x[6];
	v[3] = v[2] * v[2];
	tspn08_pd[64] = v[2] + v[2];
	v[2] = x[3] - x[7];
	v[1] = v[2] * v[2];
	tspn08_pd[65] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[66] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[66] <= 0.) {
	domain_("sqrt'", &tspn08_pd[66], 5L);
	}
	tspn08_pd[67] = 0.5 / tspn08_pd[66];
	v[2] = tspn08_pd[66] * x[24];
	v[0] += v[2];
	v[2] = x[2] - x[8];
	v[1] = v[2] * v[2];
	tspn08_pd[68] = v[2] + v[2];
	v[2] = x[3] - x[9];
	v[3] = v[2] * v[2];
	tspn08_pd[69] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[70] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[70] <= 0.) {
	domain_("sqrt'", &tspn08_pd[70], 5L);
	}
	tspn08_pd[71] = 0.5 / tspn08_pd[70];
	v[2] = tspn08_pd[70] * x[25];
	v[0] += v[2];
	v[2] = x[2] - x[10];
	v[3] = v[2] * v[2];
	tspn08_pd[72] = v[2] + v[2];
	v[2] = x[3] - x[11];
	v[1] = v[2] * v[2];
	tspn08_pd[73] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[74] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[74] <= 0.) {
	domain_("sqrt'", &tspn08_pd[74], 5L);
	}
	tspn08_pd[75] = 0.5 / tspn08_pd[74];
	v[2] = tspn08_pd[74] * x[26];
	v[0] += v[2];
	v[2] = x[2] - x[12];
	v[1] = v[2] * v[2];
	tspn08_pd[76] = v[2] + v[2];
	v[2] = x[3] - x[13];
	v[3] = v[2] * v[2];
	tspn08_pd[77] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[78] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[78] <= 0.) {
	domain_("sqrt'", &tspn08_pd[78], 5L);
	}
	tspn08_pd[79] = 0.5 / tspn08_pd[78];
	v[2] = tspn08_pd[78] * x[27];
	v[0] += v[2];
	v[2] = x[2] - x[14];
	v[3] = v[2] * v[2];
	tspn08_pd[80] = v[2] + v[2];
	v[2] = x[3] - x[15];
	v[1] = v[2] * v[2];
	tspn08_pd[81] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[82] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[82] <= 0.) {
	domain_("sqrt'", &tspn08_pd[82], 5L);
	}
	tspn08_pd[83] = 0.5 / tspn08_pd[82];
	v[2] = tspn08_pd[82] * x[28];
	v[0] += v[2];
	v[2] = x[4] - x[6];
	v[1] = v[2] * v[2];
	tspn08_pd[84] = v[2] + v[2];
	v[2] = x[5] - x[7];
	v[3] = v[2] * v[2];
	tspn08_pd[85] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[86] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[86] <= 0.) {
	domain_("sqrt'", &tspn08_pd[86], 5L);
	}
	tspn08_pd[87] = 0.5 / tspn08_pd[86];
	v[2] = tspn08_pd[86] * x[29];
	v[0] += v[2];
	v[2] = x[4] - x[8];
	v[3] = v[2] * v[2];
	tspn08_pd[88] = v[2] + v[2];
	v[2] = x[5] - x[9];
	v[1] = v[2] * v[2];
	tspn08_pd[89] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[90] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[90] <= 0.) {
	domain_("sqrt'", &tspn08_pd[90], 5L);
	}
	tspn08_pd[91] = 0.5 / tspn08_pd[90];
	v[2] = tspn08_pd[90] * x[30];
	v[0] += v[2];
	v[2] = x[4] - x[10];
	v[1] = v[2] * v[2];
	tspn08_pd[92] = v[2] + v[2];
	v[2] = x[5] - x[11];
	v[3] = v[2] * v[2];
	tspn08_pd[93] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[94] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[94] <= 0.) {
	domain_("sqrt'", &tspn08_pd[94], 5L);
	}
	tspn08_pd[95] = 0.5 / tspn08_pd[94];
	v[2] = tspn08_pd[94] * x[31];
	v[0] += v[2];
	v[2] = x[4] - x[12];
	v[3] = v[2] * v[2];
	tspn08_pd[96] = v[2] + v[2];
	v[2] = x[5] - x[13];
	v[1] = v[2] * v[2];
	tspn08_pd[97] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[98] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[98] <= 0.) {
	domain_("sqrt'", &tspn08_pd[98], 5L);
	}
	tspn08_pd[99] = 0.5 / tspn08_pd[98];
	v[2] = tspn08_pd[98] * x[32];
	v[0] += v[2];
	v[2] = x[4] - x[14];
	v[1] = v[2] * v[2];
	tspn08_pd[100] = v[2] + v[2];
	v[2] = x[5] - x[15];
	v[3] = v[2] * v[2];
	tspn08_pd[101] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[102] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[102] <= 0.) {
	domain_("sqrt'", &tspn08_pd[102], 5L);
	}
	tspn08_pd[103] = 0.5 / tspn08_pd[102];
	v[2] = tspn08_pd[102] * x[33];
	v[0] += v[2];
	v[2] = x[6] - x[8];
	v[3] = v[2] * v[2];
	tspn08_pd[104] = v[2] + v[2];
	v[2] = x[7] - x[9];
	v[1] = v[2] * v[2];
	tspn08_pd[105] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[106] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[106] <= 0.) {
	domain_("sqrt'", &tspn08_pd[106], 5L);
	}
	tspn08_pd[107] = 0.5 / tspn08_pd[106];
	v[2] = tspn08_pd[106] * x[34];
	v[0] += v[2];
	v[2] = x[6] - x[10];
	v[1] = v[2] * v[2];
	tspn08_pd[108] = v[2] + v[2];
	v[2] = x[7] - x[11];
	v[3] = v[2] * v[2];
	tspn08_pd[109] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[110] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[110] <= 0.) {
	domain_("sqrt'", &tspn08_pd[110], 5L);
	}
	tspn08_pd[111] = 0.5 / tspn08_pd[110];
	v[2] = tspn08_pd[110] * x[35];
	v[0] += v[2];
	v[2] = x[6] - x[12];
	v[3] = v[2] * v[2];
	tspn08_pd[112] = v[2] + v[2];
	v[2] = x[7] - x[13];
	v[1] = v[2] * v[2];
	tspn08_pd[113] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[114] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[114] <= 0.) {
	domain_("sqrt'", &tspn08_pd[114], 5L);
	}
	tspn08_pd[115] = 0.5 / tspn08_pd[114];
	v[2] = tspn08_pd[114] * x[36];
	v[0] += v[2];
	v[2] = x[6] - x[14];
	v[1] = v[2] * v[2];
	tspn08_pd[116] = v[2] + v[2];
	v[2] = x[7] - x[15];
	v[3] = v[2] * v[2];
	tspn08_pd[117] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[118] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[118] <= 0.) {
	domain_("sqrt'", &tspn08_pd[118], 5L);
	}
	tspn08_pd[119] = 0.5 / tspn08_pd[118];
	v[2] = tspn08_pd[118] * x[37];
	v[0] += v[2];
	v[2] = x[8] - x[10];
	v[3] = v[2] * v[2];
	tspn08_pd[120] = v[2] + v[2];
	v[2] = x[9] - x[11];
	v[1] = v[2] * v[2];
	tspn08_pd[121] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[122] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[122] <= 0.) {
	domain_("sqrt'", &tspn08_pd[122], 5L);
	}
	tspn08_pd[123] = 0.5 / tspn08_pd[122];
	v[2] = tspn08_pd[122] * x[38];
	v[0] += v[2];
	v[2] = x[8] - x[12];
	v[1] = v[2] * v[2];
	tspn08_pd[124] = v[2] + v[2];
	v[2] = x[9] - x[13];
	v[3] = v[2] * v[2];
	tspn08_pd[125] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[126] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[126] <= 0.) {
	domain_("sqrt'", &tspn08_pd[126], 5L);
	}
	tspn08_pd[127] = 0.5 / tspn08_pd[126];
	v[2] = tspn08_pd[126] * x[39];
	v[0] += v[2];
	v[2] = x[8] - x[14];
	v[3] = v[2] * v[2];
	tspn08_pd[128] = v[2] + v[2];
	v[2] = x[9] - x[15];
	v[1] = v[2] * v[2];
	tspn08_pd[129] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[130] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[130] <= 0.) {
	domain_("sqrt'", &tspn08_pd[130], 5L);
	}
	tspn08_pd[131] = 0.5 / tspn08_pd[130];
	v[2] = tspn08_pd[130] * x[40];
	v[0] += v[2];
	v[2] = x[10] - x[12];
	v[1] = v[2] * v[2];
	tspn08_pd[132] = v[2] + v[2];
	v[2] = x[11] - x[13];
	v[3] = v[2] * v[2];
	tspn08_pd[133] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[134] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[134] <= 0.) {
	domain_("sqrt'", &tspn08_pd[134], 5L);
	}
	tspn08_pd[135] = 0.5 / tspn08_pd[134];
	v[2] = tspn08_pd[134] * x[41];
	v[0] += v[2];
	v[2] = x[10] - x[14];
	v[3] = v[2] * v[2];
	tspn08_pd[136] = v[2] + v[2];
	v[2] = x[11] - x[15];
	v[1] = v[2] * v[2];
	tspn08_pd[137] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn08_pd[138] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[138] <= 0.) {
	domain_("sqrt'", &tspn08_pd[138], 5L);
	}
	tspn08_pd[139] = 0.5 / tspn08_pd[138];
	v[2] = tspn08_pd[138] * x[42];
	v[0] += v[2];
	v[2] = x[12] - x[14];
	v[1] = v[2] * v[2];
	tspn08_pd[140] = v[2] + v[2];
	v[2] = x[13] - x[15];
	v[3] = v[2] * v[2];
	tspn08_pd[141] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn08_pd[142] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn08_pd[142] <= 0.) {
	domain_("sqrt'", &tspn08_pd[142], 5L);
	}
	tspn08_pd[143] = 0.5 / tspn08_pd[142];
	v[2] = tspn08_pd[142] * x[43];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[43] = tspn08_pd[142];
	dv[0] = x[43]*tspn08_pd[143];
	dv[1] = dv[0];
	dv[1] *= tspn08_pd[141];
	g[15] = -dv[1];
	g[13] = dv[1];
	dv[0] *= tspn08_pd[140];
	g[14] = -dv[0];
	g[12] = dv[0];
	g[42] = tspn08_pd[138];
	dv[2] = x[42]*tspn08_pd[139];
	dv[3] = dv[2];
	dv[3] *= tspn08_pd[137];
	g[15] -= dv[3];
	g[11] = dv[3];
	dv[2] *= tspn08_pd[136];
	g[14] -= dv[2];
	g[10] = dv[2];
	g[41] = tspn08_pd[134];
	dv[4] = x[41]*tspn08_pd[135];
	dv[5] = dv[4];
	dv[5] *= tspn08_pd[133];
	g[13] -= dv[5];
	g[11] += dv[5];
	dv[4] *= tspn08_pd[132];
	g[12] -= dv[4];
	g[10] += dv[4];
	g[40] = tspn08_pd[130];
	dv[6] = x[40]*tspn08_pd[131];
	dv[7] = dv[6];
	dv[7] *= tspn08_pd[129];
	g[15] -= dv[7];
	g[9] = dv[7];
	dv[6] *= tspn08_pd[128];
	g[14] -= dv[6];
	g[8] = dv[6];
	g[39] = tspn08_pd[126];
	dv[8] = x[39]*tspn08_pd[127];
	dv[9] = dv[8];
	dv[9] *= tspn08_pd[125];
	g[13] -= dv[9];
	g[9] += dv[9];
	dv[8] *= tspn08_pd[124];
	g[12] -= dv[8];
	g[8] += dv[8];
	g[38] = tspn08_pd[122];
	dv[10] = x[38]*tspn08_pd[123];
	dv[11] = dv[10];
	dv[11] *= tspn08_pd[121];
	g[11] -= dv[11];
	g[9] += dv[11];
	dv[10] *= tspn08_pd[120];
	g[10] -= dv[10];
	g[8] += dv[10];
	g[37] = tspn08_pd[118];
	dv[12] = x[37]*tspn08_pd[119];
	dv[13] = dv[12];
	dv[13] *= tspn08_pd[117];
	g[15] -= dv[13];
	g[7] = dv[13];
	dv[12] *= tspn08_pd[116];
	g[14] -= dv[12];
	g[6] = dv[12];
	g[36] = tspn08_pd[114];
	dv[14] = x[36]*tspn08_pd[115];
	dv[15] = dv[14];
	dv[15] *= tspn08_pd[113];
	g[13] -= dv[15];
	g[7] += dv[15];
	dv[14] *= tspn08_pd[112];
	g[12] -= dv[14];
	g[6] += dv[14];
	g[35] = tspn08_pd[110];
	dv[16] = x[35]*tspn08_pd[111];
	dv[17] = dv[16];
	dv[17] *= tspn08_pd[109];
	g[11] -= dv[17];
	g[7] += dv[17];
	dv[16] *= tspn08_pd[108];
	g[10] -= dv[16];
	g[6] += dv[16];
	g[34] = tspn08_pd[106];
	dv[18] = x[34]*tspn08_pd[107];
	dv[19] = dv[18];
	dv[19] *= tspn08_pd[105];
	g[9] -= dv[19];
	g[7] += dv[19];
	dv[18] *= tspn08_pd[104];
	g[8] -= dv[18];
	g[6] += dv[18];
	g[33] = tspn08_pd[102];
	dv[20] = x[33]*tspn08_pd[103];
	dv[21] = dv[20];
	dv[21] *= tspn08_pd[101];
	g[15] -= dv[21];
	g[5] = dv[21];
	dv[20] *= tspn08_pd[100];
	g[14] -= dv[20];
	g[4] = dv[20];
	g[32] = tspn08_pd[98];
	dv[22] = x[32]*tspn08_pd[99];
	dv[23] = dv[22];
	dv[23] *= tspn08_pd[97];
	g[13] -= dv[23];
	g[5] += dv[23];
	dv[22] *= tspn08_pd[96];
	g[12] -= dv[22];
	g[4] += dv[22];
	g[31] = tspn08_pd[94];
	dv[24] = x[31]*tspn08_pd[95];
	dv[25] = dv[24];
	dv[25] *= tspn08_pd[93];
	g[11] -= dv[25];
	g[5] += dv[25];
	dv[24] *= tspn08_pd[92];
	g[10] -= dv[24];
	g[4] += dv[24];
	g[30] = tspn08_pd[90];
	dv[26] = x[30]*tspn08_pd[91];
	dv[27] = dv[26];
	dv[27] *= tspn08_pd[89];
	g[9] -= dv[27];
	g[5] += dv[27];
	dv[26] *= tspn08_pd[88];
	g[8] -= dv[26];
	g[4] += dv[26];
	g[29] = tspn08_pd[86];
	dv[28] = x[29]*tspn08_pd[87];
	dv[29] = dv[28];
	dv[29] *= tspn08_pd[85];
	g[7] -= dv[29];
	g[5] += dv[29];
	dv[28] *= tspn08_pd[84];
	g[6] -= dv[28];
	g[4] += dv[28];
	g[28] = tspn08_pd[82];
	dv[30] = x[28]*tspn08_pd[83];
	dv[31] = dv[30];
	dv[31] *= tspn08_pd[81];
	g[15] -= dv[31];
	g[3] = dv[31];
	dv[30] *= tspn08_pd[80];
	g[14] -= dv[30];
	g[2] = dv[30];
	g[27] = tspn08_pd[78];
	dv[32] = x[27]*tspn08_pd[79];
	dv[33] = dv[32];
	dv[33] *= tspn08_pd[77];
	g[13] -= dv[33];
	g[3] += dv[33];
	dv[32] *= tspn08_pd[76];
	g[12] -= dv[32];
	g[2] += dv[32];
	g[26] = tspn08_pd[74];
	dv[34] = x[26]*tspn08_pd[75];
	dv[35] = dv[34];
	dv[35] *= tspn08_pd[73];
	g[11] -= dv[35];
	g[3] += dv[35];
	dv[34] *= tspn08_pd[72];
	g[10] -= dv[34];
	g[2] += dv[34];
	g[25] = tspn08_pd[70];
	dv[36] = x[25]*tspn08_pd[71];
	dv[37] = dv[36];
	dv[37] *= tspn08_pd[69];
	g[9] -= dv[37];
	g[3] += dv[37];
	dv[36] *= tspn08_pd[68];
	g[8] -= dv[36];
	g[2] += dv[36];
	g[24] = tspn08_pd[66];
	dv[38] = x[24]*tspn08_pd[67];
	dv[39] = dv[38];
	dv[39] *= tspn08_pd[65];
	g[7] -= dv[39];
	g[3] += dv[39];
	dv[38] *= tspn08_pd[64];
	g[6] -= dv[38];
	g[2] += dv[38];
	g[23] = tspn08_pd[62];
	dv[40] = x[23]*tspn08_pd[63];
	dv[41] = dv[40];
	dv[41] *= tspn08_pd[61];
	g[5] -= dv[41];
	g[3] += dv[41];
	dv[40] *= tspn08_pd[60];
	g[4] -= dv[40];
	g[2] += dv[40];
	g[22] = tspn08_pd[58];
	dv[42] = x[22]*tspn08_pd[59];
	dv[43] = dv[42];
	dv[43] *= tspn08_pd[57];
	g[15] -= dv[43];
	g[1] = dv[43];
	dv[42] *= tspn08_pd[56];
	g[14] -= dv[42];
	g[0] = dv[42];
	g[21] = tspn08_pd[54];
	dv[44] = x[21]*tspn08_pd[55];
	dv[45] = dv[44];
	dv[45] *= tspn08_pd[53];
	g[13] -= dv[45];
	g[1] += dv[45];
	dv[44] *= tspn08_pd[52];
	g[12] -= dv[44];
	g[0] += dv[44];
	g[20] = tspn08_pd[50];
	dv[46] = x[20]*tspn08_pd[51];
	dv[47] = dv[46];
	dv[47] *= tspn08_pd[49];
	g[11] -= dv[47];
	g[1] += dv[47];
	dv[46] *= tspn08_pd[48];
	g[10] -= dv[46];
	g[0] += dv[46];
	g[19] = tspn08_pd[46];
	dv[48] = x[19]*tspn08_pd[47];
	dv[49] = dv[48];
	dv[49] *= tspn08_pd[45];
	g[9] -= dv[49];
	g[1] += dv[49];
	dv[48] *= tspn08_pd[44];
	g[8] -= dv[48];
	g[0] += dv[48];
	g[18] = tspn08_pd[42];
	dv[50] = x[18]*tspn08_pd[43];
	dv[51] = dv[50];
	dv[51] *= tspn08_pd[41];
	g[7] -= dv[51];
	g[1] += dv[51];
	dv[50] *= tspn08_pd[40];
	g[6] -= dv[50];
	g[0] += dv[50];
	g[17] = tspn08_pd[38];
	dv[52] = x[17]*tspn08_pd[39];
	dv[53] = dv[52];
	dv[53] *= tspn08_pd[37];
	g[5] -= dv[53];
	g[1] += dv[53];
	dv[52] *= tspn08_pd[36];
	g[4] -= dv[52];
	g[0] += dv[52];
	g[16] = tspn08_pd[34];
	dv[54] = x[16]*tspn08_pd[35];
	dv[55] = dv[54];
	dv[55] *= tspn08_pd[33];
	g[3] -= dv[55];
	g[1] += dv[55];
	dv[54] *= tspn08_pd[32];
	g[2] -= dv[54];
	g[0] += dv[54];
	}

	return v[0];
}

 void
tspn08_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (tspn08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	tspn08_pd[0] = x[0] * x[0];
	tspn08_pd[1] = x[0] + x[0];
	v[0] = 0.013840830449827 * tspn08_pd[0];
	tspn08_pd[2] = x[1] * x[1];
	tspn08_pd[3] = x[1] + x[1];
	v[1] = 0.0236686390532544 * tspn08_pd[2];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.318339100346021*x[0];
	t1 += -2.9112426035503*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	tspn08_pd[4] = x[2] * x[2];
	tspn08_pd[5] = x[2] + x[2];
	v[0] = 0.0493827160493827 * tspn08_pd[4];
	tspn08_pd[6] = x[3] * x[3];
	tspn08_pd[7] = x[3] + x[3];
	v[1] = 0.04 * tspn08_pd[6];
	v[2] = v[0] + v[1];
	t1 = v[2] + -3.30864197530864*x[2];
	t1 += -1.36*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	tspn08_pd[8] = x[4] * x[4];
	tspn08_pd[9] = x[4] + x[4];
	v[0] = 0.0330578512396694 * tspn08_pd[8];
	tspn08_pd[10] = x[5] * x[5];
	tspn08_pd[11] = x[5] + x[5];
	v[1] = 0.0493827160493827 * tspn08_pd[10];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.694214876033058*x[4];
	t1 += -8.54320987654321*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	tspn08_pd[12] = x[6] * x[6];
	tspn08_pd[13] = x[6] + x[6];
	v[0] = 0.0330578512396694 * tspn08_pd[12];
	tspn08_pd[14] = x[7] * x[7];
	tspn08_pd[15] = x[7] + x[7];
	v[1] = 0.013840830449827 * tspn08_pd[14];
	v[2] = v[0] + v[1];
	t1 = v[2] + -6.57851239669422*x[6];
	t1 += -0.235294117647059*x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	tspn08_pd[16] = x[8] * x[8];
	tspn08_pd[17] = x[8] + x[8];
	v[0] = 0.00826446280991736 * tspn08_pd[16];
	tspn08_pd[18] = x[9] * x[9];
	tspn08_pd[19] = x[9] + x[9];
	v[1] = 0.013840830449827 * tspn08_pd[18];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.446280991735537*x[8];
	t1 += -2.92041522491349*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	tspn08_pd[20] = x[10] * x[10];
	tspn08_pd[21] = x[10] + x[10];
	v[0] = 0.0330578512396694 * tspn08_pd[20];
	tspn08_pd[22] = x[11] * x[11];
	tspn08_pd[23] = x[11] + x[11];
	v[1] = 0.013840830449827 * tspn08_pd[22];
	v[2] = v[0] + v[1];
	t1 = v[2] + -4.13223140495868*x[10];
	t1 += -3.22491349480969*x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	tspn08_pd[24] = x[12] * x[12];
	tspn08_pd[25] = x[12] + x[12];
	v[0] = 0.00756143667296786 * tspn08_pd[24];
	tspn08_pd[26] = x[13] * x[13];
	tspn08_pd[27] = x[13] + x[13];
	v[1] = 0.0123456790123457 * tspn08_pd[26];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.173913043478261*x[12];
	t1 += -0.395061728395062*x[13];
	c[6] = t1;

  /***  constraint 8  ***/

	tspn08_pd[28] = x[14] * x[14];
	tspn08_pd[29] = x[14] + x[14];
	v[0] = 0.00591715976331361 * tspn08_pd[28];
	tspn08_pd[30] = x[15] * x[15];
	tspn08_pd[31] = x[15] + x[15];
	v[1] = 0.00694444444444444 * tspn08_pd[30];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.72189349112426*x[14];
	t1 += -1.38888888888889*x[15];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	t1 += x[22];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[16];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[17];
	t1 += x[23];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[18];
	t1 += x[24];
	t1 += x[29];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[19];
	t1 += x[25];
	t1 += x[30];
	t1 += x[34];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[20];
	t1 += x[26];
	t1 += x[31];
	t1 += x[35];
	t1 += x[38];
	t1 += x[41];
	t1 += x[42];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[21];
	t1 += x[27];
	t1 += x[32];
	t1 += x[36];
	t1 += x[39];
	t1 += x[41];
	t1 += x[43];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[22];
	t1 += x[28];
	t1 += x[33];
	t1 += x[37];
	t1 += x[40];
	t1 += x[42];
	t1 += x[43];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[17];
	t1 += x[19];
	t1 += x[20];
	t1 += x[22];
	t1 += x[30];
	t1 += x[31];
	t1 += x[33];
	t1 += x[38];
	t1 += x[40];
	t1 += x[42];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[21];
	t1 += x[23];
	t1 += x[24];
	t1 += x[27];
	t1 += x[29];
	t1 += x[32];
	t1 += x[36];
	c[17] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = 0.0236686390532544*tspn08_pd[3] + -2.9112426035503;
	J[0] = 0.013840830449827*tspn08_pd[1] + -0.318339100346021;

   /*** derivatives for constraint 2 ***/

	J[3] = 0.04*tspn08_pd[7] + -1.36;
	J[2] = 0.0493827160493827*tspn08_pd[5] + -3.30864197530864;

   /*** derivatives for constraint 3 ***/

	J[5] = 0.0493827160493827*tspn08_pd[11] + -8.54320987654321;
	J[4] = 0.0330578512396694*tspn08_pd[9] + -0.694214876033058;

   /*** derivatives for constraint 4 ***/

	J[7] = 0.013840830449827*tspn08_pd[15] + -0.235294117647059;
	J[6] = 0.0330578512396694*tspn08_pd[13] + -6.57851239669422;

   /*** derivatives for constraint 5 ***/

	J[9] = 0.013840830449827*tspn08_pd[19] + -2.92041522491349;
	J[8] = 0.00826446280991736*tspn08_pd[17] + -0.446280991735537;

   /*** derivatives for constraint 6 ***/

	J[11] = 0.013840830449827*tspn08_pd[23] + -3.22491349480969;
	J[10] = 0.0330578512396694*tspn08_pd[21] + -4.13223140495868;

   /*** derivatives for constraint 7 ***/

	J[13] = 0.0123456790123457*tspn08_pd[27] + -0.395061728395062;
	J[12] = 0.00756143667296786*tspn08_pd[25] + -0.173913043478261;

   /*** derivatives for constraint 8 ***/

	J[15] = 0.00694444444444444*tspn08_pd[31] + -1.38888888888889;
	J[14] = 0.00591715976331361*tspn08_pd[29] + -0.72189349112426;

   /*** derivatives for constraint 9 ***/

	J[16] = 1.;
	J[19] = 1.;
	J[23] = 1.;
	J[26] = 1.;
	J[29] = 1.;
	J[32] = 1.;
	J[35] = 1.;

   /*** derivatives for constraint 10 ***/

	J[17] = 1.;
	J[38] = 1.;
	J[41] = 1.;
	J[44] = 1.;
	J[46] = 1.;
	J[48] = 1.;
	J[51] = 1.;

   /*** derivatives for constraint 11 ***/

	J[20] = 1.;
	J[39] = 1.;
	J[53] = 1.;
	J[56] = 1.;
	J[59] = 1.;
	J[62] = 1.;
	J[65] = 1.;

   /*** derivatives for constraint 12 ***/

	J[24] = 1.;
	J[42] = 1.;
	J[54] = 1.;
	J[68] = 1.;
	J[70] = 1.;
	J[72] = 1.;
	J[75] = 1.;

   /*** derivatives for constraint 13 ***/

	J[27] = 1.;
	J[45] = 1.;
	J[57] = 1.;
	J[69] = 1.;
	J[77] = 1.;
	J[80] = 1.;
	J[82] = 1.;

   /*** derivatives for constraint 14 ***/

	J[30] = 1.;
	J[47] = 1.;
	J[60] = 1.;
	J[71] = 1.;
	J[78] = 1.;
	J[85] = 1.;
	J[87] = 1.;

   /*** derivatives for constraint 15 ***/

	J[33] = 1.;
	J[49] = 1.;
	J[63] = 1.;
	J[73] = 1.;
	J[81] = 1.;
	J[86] = 1.;
	J[90] = 1.;

   /*** derivatives for constraint 16 ***/

	J[36] = 1.;
	J[52] = 1.;
	J[66] = 1.;
	J[76] = 1.;
	J[83] = 1.;
	J[88] = 1.;
	J[91] = 1.;

   /*** derivatives for constraint 17 ***/

	J[21] = 1.;
	J[28] = 1.;
	J[31] = 1.;
	J[37] = 1.;
	J[58] = 1.;
	J[61] = 1.;
	J[67] = 1.;
	J[79] = 1.;
	J[84] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 18 ***/

	J[18] = 1.;
	J[22] = 1.;
	J[25] = 1.;
	J[34] = 1.;
	J[40] = 1.;
	J[43] = 1.;
	J[50] = 1.;
	J[55] = 1.;
	J[64] = 1.;
	J[74] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
