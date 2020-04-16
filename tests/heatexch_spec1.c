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
 fint heatexch_spec1_auxcom_[1] = { 0 /* nlc */ };
 fint heatexch_spec1_funcom_[243] = {
	56 /* nvar */,
	1 /* nobj */,
	64 /* ncon */,
	180 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	11,
	16,
	21,
	21,
	26,
	31,
	31,
	36,
	41,
	41,
	44,
	47,
	50,
	53,
	54,
	56,
	57,
	58,
	60,
	61,
	62,
	64,
	65,
	66,
	68,
	69,
	70,
	71,
	72,
	73,
	78,
	86,
	93,
	98,
	106,
	113,
	120,
	128,
	133,
	140,
	148,
	153,
	156,
	159,
	162,
	165,
	168,
	171,
	174,
	177,
	178,
	179,
	180,
	181,

	/* rownos */
	1,
	5,
	11,
	15,
	33,
	2,
	6,
	11,
	15,
	34,
	1,
	7,
	11,
	16,
	35,
	2,
	8,
	11,
	16,
	36,
	3,
	5,
	12,
	15,
	37,
	4,
	6,
	12,
	15,
	38,
	3,
	7,
	12,
	16,
	39,
	4,
	8,
	12,
	16,
	40,
	9,
	11,
	43,
	10,
	12,
	44,
	13,
	15,
	41,
	14,
	16,
	42,
	45,
	46,
	53,
	54,
	47,
	48,
	55,
	56,
	49,
	50,
	57,
	58,
	51,
	52,
	59,
	60,
	61,
	62,
	63,
	64,
	1,
	17,
	29,
	45,
	47,
	1,
	2,
	17,
	18,
	46,
	48,
	53,
	55,
	2,
	9,
	18,
	25,
	54,
	56,
	61,
	3,
	19,
	30,
	49,
	51,
	3,
	4,
	19,
	20,
	50,
	52,
	57,
	59,
	4,
	10,
	20,
	26,
	58,
	60,
	62,
	5,
	13,
	21,
	27,
	45,
	49,
	63,
	5,
	6,
	21,
	22,
	46,
	50,
	53,
	57,
	6,
	22,
	31,
	54,
	58,
	7,
	14,
	23,
	28,
	47,
	51,
	64,
	7,
	8,
	23,
	24,
	48,
	52,
	55,
	59,
	8,
	24,
	32,
	56,
	60,
	33,
	45,
	53,
	34,
	46,
	54,
	35,
	47,
	55,
	36,
	48,
	56,
	37,
	49,
	57,
	38,
	50,
	58,
	39,
	51,
	59,
	40,
	52,
	60,
	43,
	44,
	41,
	42 };

 real heatexch_spec1_boundc_[1+112+128] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		370.,
		650.,
		370.,
		650.,
		370.,
		650.,
		370.,
		590.,
		370.,
		590.,
		370.,
		590.,
		410.,
		650.,
		410.,
		650.,
		410.,
		650.,
		350.,
		500.,
		350.,
		500.,
		350.,
		500.,
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
		3700.,
		3700.,
		7400.,
		7400.,
		-2800.,
		-2800.,
		-4400.,
		-4400.,
		-9750.,
		-9750.,
		-6500.,
		-6500.,
		-3600.,
		-3600.,
		-1950.,
		-1950.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		370.,
		1.7e308,
		370.,
		1.7e308,
		-650.,
		1.7e308,
		-500.,
		1.7e308,
		-650.,
		-650.,
		-590.,
		-590.,
		-410.,
		-410.,
		-350.,
		-350.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		680.,
		-1.7e308,
		680.};

 real heatexch_spec1_x0comn_[56] = {
		2800.,
		2800.,
		0.,
		1950.,
		1950.,
		0.,
		3600.,
		3600.,
		0.,
		1950.,
		1950.,
		0.,
		0.,
		0.,
		0.,
		0.,
		240.,
		240.,
		240.,
		300.,
		300.,
		300.,
		180.,
		180.,
		180.,
		240.,
		240.,
		240.,
		330.,
		270.,
		270.,
		330.,
		650.,
		650.,
		650.,
		590.,
		590.,
		590.,
		410.,
		410.,
		410.,
		350.,
		350.,
		350.,
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

 static real heatexch_spec1_pd[68];
static real heatexch_spec1_old_x[56];
static int heatexch_spec1_xkind = -1;

 static int
heatexch_spec1_xcheck(real *x)
{
	real *x1 = heatexch_spec1_old_x, *xe = x + 56;
	errno = 0;
	if (heatexch_spec1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	heatexch_spec1_xkind = 0;
	return 1;
	}
 real
heatexch_spec1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[16], dv[36], rv;
	fint wantfg = *needfg;
	if (heatexch_spec1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 2. * x[0];
	heatexch_spec1_pd[0] = 0.5 * x[16];
	heatexch_spec1_pd[1] = heatexch_spec1_pd[0] * x[17];
	heatexch_spec1_pd[2] = x[16] + x[17];
	v[2] = heatexch_spec1_pd[1] * heatexch_spec1_pd[2];
	v[3] = v[2] + 1.e-06;
	v[2] = pow(v[3], 0.33333);
	if (errno) in_trouble2("pow",v[3],0.33333);
	if (v[3] > 0.) {
	heatexch_spec1_pd[3] = 0.33333*(v[2]/v[3]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.33333);
	}
	v[3] = v[2] + 1.e-06;
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[0] / v[3];
	heatexch_spec1_pd[4] = 1. / v[3];
	heatexch_spec1_pd[5] = -v[2] * heatexch_spec1_pd[4];
	v[3] = v[2] + 1.e-06;
	v[3] *= 150.;
	v[2] = 2. * x[1];
	heatexch_spec1_pd[6] = 0.5 * x[17];
	heatexch_spec1_pd[7] = heatexch_spec1_pd[6] * x[18];
	heatexch_spec1_pd[8] = x[17] + x[18];
	v[4] = heatexch_spec1_pd[7] * heatexch_spec1_pd[8];
	v[5] = v[4] + 1.e-06;
	v[4] = pow(v[5], 0.33333);
	if (errno) in_trouble2("pow",v[5],0.33333);
	if (v[5] > 0.) {
	heatexch_spec1_pd[9] = 0.33333*(v[4]/v[5]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],0.33333);
	}
	v[5] = v[4] + 1.e-06;
	if (v[5] == 0.) {
	zerdiv_(&v[5]);	}
	v[4] = v[2] / v[5];
	heatexch_spec1_pd[10] = 1. / v[5];
	heatexch_spec1_pd[11] = -v[4] * heatexch_spec1_pd[10];
	v[5] = v[4] + 1.e-06;
	v[5] *= 150.;
	v[3] += v[5];
	v[5] = 199.970793713208 * x[2];
	v[4] = v[5] + 1.e-06;
	v[4] *= 150.;
	v[3] += v[4];
	v[4] = 2. * x[3];
	heatexch_spec1_pd[12] = 0.5 * x[19];
	heatexch_spec1_pd[13] = heatexch_spec1_pd[12] * x[20];
	heatexch_spec1_pd[14] = x[19] + x[20];
	v[2] = heatexch_spec1_pd[13] * heatexch_spec1_pd[14];
	v[6] = v[2] + 1.e-06;
	v[2] = pow(v[6], 0.33333);
	if (errno) in_trouble2("pow",v[6],0.33333);
	if (v[6] > 0.) {
	heatexch_spec1_pd[15] = 0.33333*(v[2]/v[6]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[6],0.33333);
	}
	v[6] = v[2] + 1.e-06;
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[2] = v[4] / v[6];
	heatexch_spec1_pd[16] = 1. / v[6];
	heatexch_spec1_pd[17] = -v[2] * heatexch_spec1_pd[16];
	v[6] = v[2] + 1.e-06;
	v[6] *= 150.;
	v[3] += v[6];
	v[6] = 2. * x[4];
	heatexch_spec1_pd[18] = 0.5 * x[20];
	heatexch_spec1_pd[19] = heatexch_spec1_pd[18] * x[21];
	heatexch_spec1_pd[20] = x[20] + x[21];
	v[4] = heatexch_spec1_pd[19] * heatexch_spec1_pd[20];
	v[7] = v[4] + 1.e-06;
	v[4] = pow(v[7], 0.33333);
	if (errno) in_trouble2("pow",v[7],0.33333);
	if (v[7] > 0.) {
	heatexch_spec1_pd[21] = 0.33333*(v[4]/v[7]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[7],0.33333);
	}
	v[7] = v[4] + 1.e-06;
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[4] = v[6] / v[7];
	heatexch_spec1_pd[22] = 1. / v[7];
	heatexch_spec1_pd[23] = -v[4] * heatexch_spec1_pd[22];
	v[7] = v[4] + 1.e-06;
	v[7] *= 150.;
	v[3] += v[7];
	v[7] = 199.970793713208 * x[5];
	v[4] = v[7] + 1.e-06;
	v[4] *= 150.;
	v[3] += v[4];
	v[4] = 2. * x[6];
	heatexch_spec1_pd[24] = 0.5 * x[22];
	heatexch_spec1_pd[25] = heatexch_spec1_pd[24] * x[23];
	heatexch_spec1_pd[26] = x[22] + x[23];
	v[6] = heatexch_spec1_pd[25] * heatexch_spec1_pd[26];
	v[8] = v[6] + 1.e-06;
	v[6] = pow(v[8], 0.33333);
	if (errno) in_trouble2("pow",v[8],0.33333);
	if (v[8] > 0.) {
	heatexch_spec1_pd[27] = 0.33333*(v[6]/v[8]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[27] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[8],0.33333);
	}
	v[8] = v[6] + 1.e-06;
	if (v[8] == 0.) {
	zerdiv_(&v[8]);	}
	v[6] = v[4] / v[8];
	heatexch_spec1_pd[28] = 1. / v[8];
	heatexch_spec1_pd[29] = -v[6] * heatexch_spec1_pd[28];
	v[8] = v[6] + 1.e-06;
	v[8] *= 150.;
	v[3] += v[8];
	v[8] = 2. * x[7];
	heatexch_spec1_pd[30] = 0.5 * x[23];
	heatexch_spec1_pd[31] = heatexch_spec1_pd[30] * x[24];
	heatexch_spec1_pd[32] = x[23] + x[24];
	v[4] = heatexch_spec1_pd[31] * heatexch_spec1_pd[32];
	v[9] = v[4] + 1.e-06;
	v[4] = pow(v[9], 0.33333);
	if (errno) in_trouble2("pow",v[9],0.33333);
	if (v[9] > 0.) {
	heatexch_spec1_pd[33] = 0.33333*(v[4]/v[9]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[33] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[9],0.33333);
	}
	v[9] = v[4] + 1.e-06;
	if (v[9] == 0.) {
	zerdiv_(&v[9]);	}
	v[4] = v[8] / v[9];
	heatexch_spec1_pd[34] = 1. / v[9];
	heatexch_spec1_pd[35] = -v[4] * heatexch_spec1_pd[34];
	v[9] = v[4] + 1.e-06;
	v[9] *= 150.;
	v[3] += v[9];
	v[9] = 199.970793713208 * x[8];
	v[4] = v[9] + 1.e-06;
	v[4] *= 150.;
	v[3] += v[4];
	v[4] = 2. * x[9];
	heatexch_spec1_pd[36] = 0.5 * x[25];
	heatexch_spec1_pd[37] = heatexch_spec1_pd[36] * x[26];
	heatexch_spec1_pd[38] = x[25] + x[26];
	v[8] = heatexch_spec1_pd[37] * heatexch_spec1_pd[38];
	v[10] = v[8] + 1.e-06;
	v[8] = pow(v[10], 0.33333);
	if (errno) in_trouble2("pow",v[10],0.33333);
	if (v[10] > 0.) {
	heatexch_spec1_pd[39] = 0.33333*(v[8]/v[10]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[39] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],0.33333);
	}
	v[10] = v[8] + 1.e-06;
	if (v[10] == 0.) {
	zerdiv_(&v[10]);	}
	v[8] = v[4] / v[10];
	heatexch_spec1_pd[40] = 1. / v[10];
	heatexch_spec1_pd[41] = -v[8] * heatexch_spec1_pd[40];
	v[10] = v[8] + 1.e-06;
	v[10] *= 150.;
	v[3] += v[10];
	v[10] = 2. * x[10];
	heatexch_spec1_pd[42] = 0.5 * x[26];
	heatexch_spec1_pd[43] = heatexch_spec1_pd[42] * x[27];
	heatexch_spec1_pd[44] = x[26] + x[27];
	v[4] = heatexch_spec1_pd[43] * heatexch_spec1_pd[44];
	v[11] = v[4] + 1.e-06;
	v[4] = pow(v[11], 0.33333);
	if (errno) in_trouble2("pow",v[11],0.33333);
	if (v[11] > 0.) {
	heatexch_spec1_pd[45] = 0.33333*(v[4]/v[11]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[45] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.33333);
	}
	v[11] = v[4] + 1.e-06;
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[4] = v[10] / v[11];
	heatexch_spec1_pd[46] = 1. / v[11];
	heatexch_spec1_pd[47] = -v[4] * heatexch_spec1_pd[46];
	v[11] = v[4] + 1.e-06;
	v[11] *= 150.;
	v[3] += v[11];
	v[11] = 199.970793713208 * x[11];
	v[4] = v[11] + 1.e-06;
	v[4] *= 150.;
	v[3] += v[4];
	v[4] = 1.2 * x[14];
	heatexch_spec1_pd[48] = 30. * x[30];
	v[11] = 0.5 * x[30];
	heatexch_spec1_pd[49] = v[11] + 15.;
	v[11] = heatexch_spec1_pd[48] * heatexch_spec1_pd[49];
	v[12] = v[11] + 1.e-06;
	v[11] = pow(v[12], 0.33333);
	if (errno) in_trouble2("pow",v[12],0.33333);
	if (v[12] > 0.) {
	heatexch_spec1_pd[50] = 0.33333*(v[11]/v[12]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[12],0.33333);
	}
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[12] = v[4] / v[11];
	heatexch_spec1_pd[51] = 1. / v[11];
	heatexch_spec1_pd[52] = -v[12] * heatexch_spec1_pd[51];
	v[12] += 2.e-06;
	v[11] = 1.2 * x[15];
	heatexch_spec1_pd[53] = 180. * x[31];
	v[4] = 0.5 * x[31];
	heatexch_spec1_pd[54] = v[4] + 90.;
	v[4] = heatexch_spec1_pd[53] * heatexch_spec1_pd[54];
	v[14] = v[4] + 1.e-06;
	v[4] = pow(v[14], 0.33333);
	if (errno) in_trouble2("pow",v[14],0.33333);
	if (v[14] > 0.) {
	heatexch_spec1_pd[55] = 0.33333*(v[4]/v[14]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[55] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[14],0.33333);
	}
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[14] = v[11] / v[4];
	heatexch_spec1_pd[56] = 1. / v[4];
	heatexch_spec1_pd[57] = -v[14] * heatexch_spec1_pd[56];
	v[12] += v[14];
	v[12] *= 150.;
	v[3] += v[12];
	v[12] = 2. * x[12];
	heatexch_spec1_pd[58] = 35. * x[28];
	heatexch_spec1_pd[59] = x[28] + 70.;
	v[4] = heatexch_spec1_pd[58] * heatexch_spec1_pd[59];
	v[11] = v[4] + 1.e-06;
	v[4] = pow(v[11], 0.33333);
	if (errno) in_trouble2("pow",v[11],0.33333);
	if (v[11] > 0.) {
	heatexch_spec1_pd[60] = 0.33333*(v[4]/v[11]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[60] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.33333);
	}
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[11] = v[12] / v[4];
	heatexch_spec1_pd[61] = 1. / v[4];
	heatexch_spec1_pd[62] = -v[11] * heatexch_spec1_pd[61];
	v[4] = v[11] + 1.e-06;
	v[4] *= 150.;
	v[3] += v[4];
	v[4] = 2. * x[13];
	heatexch_spec1_pd[63] = 35. * x[29];
	heatexch_spec1_pd[64] = x[29] + 70.;
	v[12] = heatexch_spec1_pd[63] * heatexch_spec1_pd[64];
	v[15] = v[12] + 1.e-06;
	v[12] = pow(v[15], 0.33333);
	if (errno) in_trouble2("pow",v[15],0.33333);
	if (v[15] > 0.) {
	heatexch_spec1_pd[65] = 0.33333*(v[12]/v[15]);
	} else if (0.33333 > 1.) {
	heatexch_spec1_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[15],0.33333);
	}
	if (v[12] == 0.) {
	zerdiv_(&v[12]);	}
	v[15] = v[4] / v[12];
	heatexch_spec1_pd[66] = 1. / v[12];
	heatexch_spec1_pd[67] = -v[15] * heatexch_spec1_pd[66];
	v[12] = v[15] + 1.e-06;
	v[12] *= 150.;
	v[3] += v[12];
	rv = v[3] + 15.*x[12];
	rv += 15.*x[13];
	rv += 80.*x[14];
	rv += 80.*x[15];
	rv += 5500.*x[44];
	rv += 5500.*x[45];
	rv += 5500.*x[46];
	rv += 5500.*x[47];
	rv += 5500.*x[48];
	rv += 5500.*x[49];
	rv += 5500.*x[50];
	rv += 5500.*x[51];
	rv += 5500.*x[52];
	rv += 5500.*x[53];
	rv += 5500.*x[54];
	rv += 5500.*x[55];
	;}

	if (wantfg & 2) {
	dv[0] = 150.*heatexch_spec1_pd[67];
	dv[1] = 150.*heatexch_spec1_pd[66];
	dv[0] *= heatexch_spec1_pd[65];
	dv[2] = dv[0]*heatexch_spec1_pd[63];
	dv[0] *= heatexch_spec1_pd[64];
	g[29] = dv[2];
	g[29] += dv[0]*35.;
	g[13] = dv[1]*2. + 15.;
	dv[3] = 150.*heatexch_spec1_pd[62];
	dv[4] = 150.*heatexch_spec1_pd[61];
	dv[3] *= heatexch_spec1_pd[60];
	dv[5] = dv[3]*heatexch_spec1_pd[58];
	dv[3] *= heatexch_spec1_pd[59];
	g[28] = dv[5];
	g[28] += dv[3]*35.;
	g[12] = dv[4]*2. + 15.;
	dv[7] = 150.*heatexch_spec1_pd[57];
	dv[6] = 150.*heatexch_spec1_pd[56];
	dv[7] *= heatexch_spec1_pd[55];
	dv[8] = dv[7]*heatexch_spec1_pd[53];
	dv[7] *= heatexch_spec1_pd[54];
	g[31] = dv[8]*0.5;
	g[31] += dv[7]*180.;
	g[15] = dv[6]*1.2 + 80.;
	dv[9] = 150.*heatexch_spec1_pd[52];
	dv[10] = 150.*heatexch_spec1_pd[51];
	dv[9] *= heatexch_spec1_pd[50];
	dv[11] = dv[9]*heatexch_spec1_pd[48];
	dv[9] *= heatexch_spec1_pd[49];
	g[30] = dv[11]*0.5;
	g[30] += dv[9]*30.;
	g[14] = dv[10]*1.2 + 80.;
	g[11] = 29995.6190569812;
	dv[12] = 150.*heatexch_spec1_pd[47];
	dv[13] = 150.*heatexch_spec1_pd[46];
	dv[12] *= heatexch_spec1_pd[45];
	dv[14] = dv[12]*heatexch_spec1_pd[43];
	dv[12] *= heatexch_spec1_pd[44];
	g[27] = dv[14];
	g[26] = dv[14];
	g[27] += dv[12]*heatexch_spec1_pd[42];
	dv[12] *= x[27];
	g[26] += dv[12]*0.5;
	g[10] = dv[13]*2.;
	dv[15] = 150.*heatexch_spec1_pd[41];
	dv[16] = 150.*heatexch_spec1_pd[40];
	dv[15] *= heatexch_spec1_pd[39];
	dv[17] = dv[15]*heatexch_spec1_pd[37];
	dv[15] *= heatexch_spec1_pd[38];
	g[26] += dv[17];
	g[25] = dv[17];
	g[26] += dv[15]*heatexch_spec1_pd[36];
	dv[15] *= x[26];
	g[25] += dv[15]*0.5;
	g[9] = dv[16]*2.;
	g[8] = 29995.6190569812;
	dv[18] = 150.*heatexch_spec1_pd[35];
	dv[19] = 150.*heatexch_spec1_pd[34];
	dv[18] *= heatexch_spec1_pd[33];
	dv[20] = dv[18]*heatexch_spec1_pd[31];
	dv[18] *= heatexch_spec1_pd[32];
	g[24] = dv[20];
	g[23] = dv[20];
	g[24] += dv[18]*heatexch_spec1_pd[30];
	dv[18] *= x[24];
	g[23] += dv[18]*0.5;
	g[7] = dv[19]*2.;
	dv[21] = 150.*heatexch_spec1_pd[29];
	dv[22] = 150.*heatexch_spec1_pd[28];
	dv[21] *= heatexch_spec1_pd[27];
	dv[23] = dv[21]*heatexch_spec1_pd[25];
	dv[21] *= heatexch_spec1_pd[26];
	g[23] += dv[23];
	g[22] = dv[23];
	g[23] += dv[21]*heatexch_spec1_pd[24];
	dv[21] *= x[23];
	g[22] += dv[21]*0.5;
	g[6] = dv[22]*2.;
	g[5] = 29995.6190569812;
	dv[24] = 150.*heatexch_spec1_pd[23];
	dv[25] = 150.*heatexch_spec1_pd[22];
	dv[24] *= heatexch_spec1_pd[21];
	dv[26] = dv[24]*heatexch_spec1_pd[19];
	dv[24] *= heatexch_spec1_pd[20];
	g[21] = dv[26];
	g[20] = dv[26];
	g[21] += dv[24]*heatexch_spec1_pd[18];
	dv[24] *= x[21];
	g[20] += dv[24]*0.5;
	g[4] = dv[25]*2.;
	dv[27] = 150.*heatexch_spec1_pd[17];
	dv[28] = 150.*heatexch_spec1_pd[16];
	dv[27] *= heatexch_spec1_pd[15];
	dv[29] = dv[27]*heatexch_spec1_pd[13];
	dv[27] *= heatexch_spec1_pd[14];
	g[20] += dv[29];
	g[19] = dv[29];
	g[20] += dv[27]*heatexch_spec1_pd[12];
	dv[27] *= x[20];
	g[19] += dv[27]*0.5;
	g[3] = dv[28]*2.;
	g[2] = 29995.6190569812;
	dv[30] = 150.*heatexch_spec1_pd[11];
	dv[31] = 150.*heatexch_spec1_pd[10];
	dv[30] *= heatexch_spec1_pd[9];
	dv[32] = dv[30]*heatexch_spec1_pd[7];
	dv[30] *= heatexch_spec1_pd[8];
	g[18] = dv[32];
	g[17] = dv[32];
	g[18] += dv[30]*heatexch_spec1_pd[6];
	dv[30] *= x[18];
	g[17] += dv[30]*0.5;
	g[1] = dv[31]*2.;
	dv[33] = 150.*heatexch_spec1_pd[5];
	dv[34] = 150.*heatexch_spec1_pd[4];
	dv[33] *= heatexch_spec1_pd[3];
	dv[35] = dv[33]*heatexch_spec1_pd[1];
	dv[33] *= heatexch_spec1_pd[2];
	g[17] += dv[35];
	g[16] = dv[35];
	g[17] += dv[33]*heatexch_spec1_pd[0];
	dv[33] *= x[17];
	g[16] += dv[33]*0.5;
	g[0] = dv[34]*2.;
	g[44] = 5500.;
	g[45] = 5500.;
	g[46] = 5500.;
	g[47] = 5500.;
	g[48] = 5500.;
	g[49] = 5500.;
	g[50] = 5500.;
	g[51] = 5500.;
	g[52] = 5500.;
	g[53] = 5500.;
	g[54] = 5500.;
	g[55] = 5500.;
	}

	return rv;
}

 void
heatexch_spec1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (heatexch_spec1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += -x[3];
	t1 += 10.*x[32];
	t1 += -10.*x[33];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[1];
	t1 += -x[4];
	t1 += 10.*x[33];
	t1 += -10.*x[34];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[6];
	t1 += -x[9];
	t1 += 20.*x[35];
	t1 += -20.*x[36];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[7];
	t1 += -x[10];
	t1 += 20.*x[36];
	t1 += -20.*x[37];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += -x[6];
	t1 += 15.*x[38];
	t1 += -15.*x[39];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[1];
	t1 += -x[7];
	t1 += 15.*x[39];
	t1 += -15.*x[40];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[3];
	t1 += -x[9];
	t1 += 13.*x[41];
	t1 += -13.*x[42];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[4];
	t1 += -x[10];
	t1 += 13.*x[42];
	t1 += -13.*x[43];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[12];
	t1 += 10.*x[34];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[13];
	t1 += 20.*x[37];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -x[12];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[6];
	t1 += -x[7];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[13];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[14];
	t1 += -15.*x[38];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[15];
	t1 += -13.*x[41];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[6];
	t1 += -x[7];
	t1 += -x[14];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[3];
	t1 += -x[4];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[32];
	t1 += -x[33];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[33];
	t1 += -x[34];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[35];
	t1 += -x[36];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[36];
	t1 += -x[37];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[38];
	t1 += -x[39];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[39];
	t1 += -x[40];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[41];
	t1 += -x[42];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[42];
	t1 += -x[43];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[34];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[37];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[38];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[41];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[32];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[35];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[40];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[43];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[0];
	t1 += -2800.*x[44];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[1];
	t1 += -2800.*x[45];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[3];
	t1 += -1950.*x[46];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[4];
	t1 += -1950.*x[47];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[6];
	t1 += -3600.*x[48];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[7];
	t1 += -3600.*x[49];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[9];
	t1 += -1950.*x[50];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[10];
	t1 += -1950.*x[51];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[14];
	t1 += -3600.*x[54];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[15];
	t1 += -1950.*x[55];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[12];
	t1 += -2800.*x[52];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[13];
	t1 += -4400.*x[53];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[16];
	t1 += -x[32];
	t1 += x[38];
	t1 += 280.*x[44];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[17];
	t1 += -x[33];
	t1 += x[39];
	t1 += 280.*x[45];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[19];
	t1 += -x[32];
	t1 += x[41];
	t1 += 130.*x[46];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[20];
	t1 += -x[33];
	t1 += x[42];
	t1 += 130.*x[47];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[22];
	t1 += -x[35];
	t1 += x[38];
	t1 += 280.*x[48];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[23];
	t1 += -x[36];
	t1 += x[39];
	t1 += 280.*x[49];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[25];
	t1 += -x[35];
	t1 += x[41];
	t1 += 130.*x[50];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[26];
	t1 += -x[36];
	t1 += x[42];
	t1 += 130.*x[51];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[17];
	t1 += -x[33];
	t1 += x[39];
	t1 += 280.*x[44];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[18];
	t1 += -x[34];
	t1 += x[40];
	t1 += 280.*x[45];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[20];
	t1 += -x[33];
	t1 += x[42];
	t1 += 130.*x[46];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[21];
	t1 += -x[34];
	t1 += x[43];
	t1 += 130.*x[47];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[23];
	t1 += -x[36];
	t1 += x[39];
	t1 += 280.*x[48];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[24];
	t1 += -x[37];
	t1 += x[40];
	t1 += 280.*x[49];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[26];
	t1 += -x[36];
	t1 += x[42];
	t1 += 130.*x[50];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[27];
	t1 += -x[37];
	t1 += x[43];
	t1 += 130.*x[51];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[28];
	t1 += -x[34];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[29];
	t1 += -x[37];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[30];
	t1 += x[38];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[31];
	t1 += x[41];
	c[63] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[10] = -1.;
	J[72] = 10.;
	J[77] = -10.;

   /*** derivatives for constraint 2 ***/

	J[5] = -1.;
	J[15] = -1.;
	J[78] = 10.;
	J[85] = -10.;

   /*** derivatives for constraint 3 ***/

	J[20] = -1.;
	J[30] = -1.;
	J[92] = 20.;
	J[97] = -20.;

   /*** derivatives for constraint 4 ***/

	J[25] = -1.;
	J[35] = -1.;
	J[98] = 20.;
	J[105] = -20.;

   /*** derivatives for constraint 5 ***/

	J[1] = -1.;
	J[21] = -1.;
	J[112] = 15.;
	J[119] = -15.;

   /*** derivatives for constraint 6 ***/

	J[6] = -1.;
	J[26] = -1.;
	J[120] = 15.;
	J[127] = -15.;

   /*** derivatives for constraint 7 ***/

	J[11] = -1.;
	J[31] = -1.;
	J[132] = 13.;
	J[139] = -13.;

   /*** derivatives for constraint 8 ***/

	J[16] = -1.;
	J[36] = -1.;
	J[140] = 13.;
	J[147] = -13.;

   /*** derivatives for constraint 9 ***/

	J[40] = -1.;
	J[86] = 10.;

   /*** derivatives for constraint 10 ***/

	J[43] = -1.;
	J[106] = 20.;

   /*** derivatives for constraint 11 ***/

	J[2] = -1.;
	J[7] = -1.;
	J[12] = -1.;
	J[17] = -1.;
	J[41] = -1.;

   /*** derivatives for constraint 12 ***/

	J[22] = -1.;
	J[27] = -1.;
	J[32] = -1.;
	J[37] = -1.;
	J[44] = -1.;

   /*** derivatives for constraint 13 ***/

	J[46] = -1.;
	J[113] = -15.;

   /*** derivatives for constraint 14 ***/

	J[49] = -1.;
	J[133] = -13.;

   /*** derivatives for constraint 15 ***/

	J[3] = -1.;
	J[8] = -1.;
	J[23] = -1.;
	J[28] = -1.;
	J[47] = -1.;

   /*** derivatives for constraint 16 ***/

	J[13] = -1.;
	J[18] = -1.;
	J[33] = -1.;
	J[38] = -1.;
	J[50] = -1.;

   /*** derivatives for constraint 17 ***/

	J[73] = 1.;
	J[79] = -1.;

   /*** derivatives for constraint 18 ***/

	J[80] = 1.;
	J[87] = -1.;

   /*** derivatives for constraint 19 ***/

	J[93] = 1.;
	J[99] = -1.;

   /*** derivatives for constraint 20 ***/

	J[100] = 1.;
	J[107] = -1.;

   /*** derivatives for constraint 21 ***/

	J[114] = 1.;
	J[121] = -1.;

   /*** derivatives for constraint 22 ***/

	J[122] = 1.;
	J[128] = -1.;

   /*** derivatives for constraint 23 ***/

	J[134] = 1.;
	J[141] = -1.;

   /*** derivatives for constraint 24 ***/

	J[142] = 1.;
	J[148] = -1.;

   /*** derivatives for constraint 25 ***/

	J[88] = 1.;

   /*** derivatives for constraint 26 ***/

	J[108] = 1.;

   /*** derivatives for constraint 27 ***/

	J[115] = -1.;

   /*** derivatives for constraint 28 ***/

	J[135] = -1.;

   /*** derivatives for constraint 29 ***/

	J[74] = -1.;

   /*** derivatives for constraint 30 ***/

	J[94] = -1.;

   /*** derivatives for constraint 31 ***/

	J[129] = -1.;

   /*** derivatives for constraint 32 ***/

	J[149] = -1.;

   /*** derivatives for constraint 33 ***/

	J[4] = 1.;
	J[152] = -2800.;

   /*** derivatives for constraint 34 ***/

	J[9] = 1.;
	J[155] = -2800.;

   /*** derivatives for constraint 35 ***/

	J[14] = 1.;
	J[158] = -1950.;

   /*** derivatives for constraint 36 ***/

	J[19] = 1.;
	J[161] = -1950.;

   /*** derivatives for constraint 37 ***/

	J[24] = 1.;
	J[164] = -3600.;

   /*** derivatives for constraint 38 ***/

	J[29] = 1.;
	J[167] = -3600.;

   /*** derivatives for constraint 39 ***/

	J[34] = 1.;
	J[170] = -1950.;

   /*** derivatives for constraint 40 ***/

	J[39] = 1.;
	J[173] = -1950.;

   /*** derivatives for constraint 41 ***/

	J[48] = 1.;
	J[178] = -3600.;

   /*** derivatives for constraint 42 ***/

	J[51] = 1.;
	J[179] = -1950.;

   /*** derivatives for constraint 43 ***/

	J[42] = 1.;
	J[176] = -2800.;

   /*** derivatives for constraint 44 ***/

	J[45] = 1.;
	J[177] = -4400.;

   /*** derivatives for constraint 45 ***/

	J[52] = 1.;
	J[75] = -1.;
	J[116] = 1.;
	J[153] = 280.;

   /*** derivatives for constraint 46 ***/

	J[53] = 1.;
	J[81] = -1.;
	J[123] = 1.;
	J[156] = 280.;

   /*** derivatives for constraint 47 ***/

	J[56] = 1.;
	J[76] = -1.;
	J[136] = 1.;
	J[159] = 130.;

   /*** derivatives for constraint 48 ***/

	J[57] = 1.;
	J[82] = -1.;
	J[143] = 1.;
	J[162] = 130.;

   /*** derivatives for constraint 49 ***/

	J[60] = 1.;
	J[95] = -1.;
	J[117] = 1.;
	J[165] = 280.;

   /*** derivatives for constraint 50 ***/

	J[61] = 1.;
	J[101] = -1.;
	J[124] = 1.;
	J[168] = 280.;

   /*** derivatives for constraint 51 ***/

	J[64] = 1.;
	J[96] = -1.;
	J[137] = 1.;
	J[171] = 130.;

   /*** derivatives for constraint 52 ***/

	J[65] = 1.;
	J[102] = -1.;
	J[144] = 1.;
	J[174] = 130.;

   /*** derivatives for constraint 53 ***/

	J[54] = 1.;
	J[83] = -1.;
	J[125] = 1.;
	J[154] = 280.;

   /*** derivatives for constraint 54 ***/

	J[55] = 1.;
	J[89] = -1.;
	J[130] = 1.;
	J[157] = 280.;

   /*** derivatives for constraint 55 ***/

	J[58] = 1.;
	J[84] = -1.;
	J[145] = 1.;
	J[160] = 130.;

   /*** derivatives for constraint 56 ***/

	J[59] = 1.;
	J[90] = -1.;
	J[150] = 1.;
	J[163] = 130.;

   /*** derivatives for constraint 57 ***/

	J[62] = 1.;
	J[103] = -1.;
	J[126] = 1.;
	J[166] = 280.;

   /*** derivatives for constraint 58 ***/

	J[63] = 1.;
	J[109] = -1.;
	J[131] = 1.;
	J[169] = 280.;

   /*** derivatives for constraint 59 ***/

	J[66] = 1.;
	J[104] = -1.;
	J[146] = 1.;
	J[172] = 130.;

   /*** derivatives for constraint 60 ***/

	J[67] = 1.;
	J[110] = -1.;
	J[151] = 1.;
	J[175] = 130.;

   /*** derivatives for constraint 61 ***/

	J[68] = 1.;
	J[91] = -1.;

   /*** derivatives for constraint 62 ***/

	J[69] = 1.;
	J[111] = -1.;

   /*** derivatives for constraint 63 ***/

	J[70] = 1.;
	J[118] = 1.;

   /*** derivatives for constraint 64 ***/

	J[71] = 1.;
	J[138] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
