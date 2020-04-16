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
 fint ex1233_auxcom_[1] = { 0 /* nlc */ };
 fint ex1233_funcom_[239] = {
	52 /* nvar */,
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
	16,
	21,
	26,
	31,
	36,
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
	3,
	5,
	9,
	33,
	1,
	3,
	6,
	10,
	34,
	1,
	4,
	5,
	11,
	35,
	1,
	4,
	6,
	12,
	36,
	2,
	3,
	7,
	9,
	37,
	2,
	3,
	8,
	10,
	38,
	2,
	4,
	7,
	11,
	39,
	2,
	4,
	8,
	12,
	40,
	1,
	29,
	41,
	2,
	30,
	42,
	3,
	31,
	43,
	4,
	32,
	44,
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
	5,
	13,
	17,
	45,
	47,
	5,
	6,
	17,
	18,
	46,
	48,
	53,
	55,
	6,
	18,
	25,
	29,
	54,
	56,
	61,
	7,
	14,
	19,
	49,
	51,
	7,
	8,
	19,
	20,
	50,
	52,
	57,
	59,
	8,
	20,
	26,
	30,
	58,
	60,
	62,
	9,
	21,
	27,
	31,
	45,
	49,
	63,
	9,
	10,
	21,
	22,
	46,
	50,
	53,
	57,
	10,
	15,
	22,
	54,
	58,
	11,
	23,
	28,
	32,
	47,
	51,
	64,
	11,
	12,
	23,
	24,
	48,
	52,
	55,
	59,
	12,
	16,
	24,
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
	41,
	42,
	43,
	44 };

 real ex1233_boundc_[1+104+128] /* Infinity, variable bounds, constraint bounds */ = {
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
		2800.,
		2800.,
		4400.,
		4400.,
		3600.,
		3600.,
		1950.,
		1950.,
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
		650.,
		650.,
		590.,
		590.,
		410.,
		410.,
		350.,
		350.,
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
		-370.,
		-1.7e308,
		-370.,
		-1.7e308,
		650.,
		-1.7e308,
		500.,
		3700.,
		3700.,
		7400.,
		7400.,
		9750.,
		9750.,
		6500.,
		6500.,
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
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		150.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		150.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		150.,
		-1.7e308,
		280.,
		-1.7e308,
		130.,
		-1.7e308,
		280.,
		-1.7e308,
		150.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		680.,
		-1.7e308,
		680.};

 real ex1233_x0comn_[52] = {
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
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		370.,
		370.,
		370.,
		370.,
		370.,
		370.,
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

 static real ex1233_pd[68];
static real ex1233_old_x[52];
static int ex1233_xkind = -1;

 static int
ex1233_xcheck(real *x)
{
	real *x1 = ex1233_old_x, *xe = x + 52;
	errno = 0;
	if (ex1233_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1233_xkind = 0;
	return 1;
	}
 real
ex1233_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[16], dv[24], rv;
	fint wantfg = *needfg;
	if (ex1233_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 300. * x[0];
	ex1233_pd[0] = 0.5 * x[12];
	ex1233_pd[1] = ex1233_pd[0] * x[13];
	ex1233_pd[2] = x[12] + x[13];
	v[2] = ex1233_pd[1] * ex1233_pd[2];
	v[3] = pow(v[2], 0.3333);
	if (errno) in_trouble2("pow",v[2],0.3333);
	if (v[2] > 0.) {
	ex1233_pd[3] = 0.3333*(v[3]/v[2]);
	} else if (0.3333 > 1.) {
	ex1233_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.3333);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[0] / v[3];
	ex1233_pd[4] = 1. / v[3];
	ex1233_pd[5] = -v[2] * ex1233_pd[4];
	v[3] = 300. * x[1];
	ex1233_pd[6] = 0.5 * x[13];
	ex1233_pd[7] = ex1233_pd[6] * x[14];
	ex1233_pd[8] = x[13] + x[14];
	v[4] = ex1233_pd[7] * ex1233_pd[8];
	v[5] = pow(v[4], 0.3333);
	if (errno) in_trouble2("pow",v[4],0.3333);
	if (v[4] > 0.) {
	ex1233_pd[9] = 0.3333*(v[5]/v[4]);
	} else if (0.3333 > 1.) {
	ex1233_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.3333);
	}
	if (v[5] == 0.) {
	zerdiv_(&v[5]);	}
	v[4] = v[3] / v[5];
	ex1233_pd[10] = 1. / v[5];
	ex1233_pd[11] = -v[4] * ex1233_pd[10];
	v[2] += v[4];
	v[4] = 300. * x[2];
	ex1233_pd[12] = 0.5 * x[15];
	ex1233_pd[13] = ex1233_pd[12] * x[16];
	ex1233_pd[14] = x[15] + x[16];
	v[3] = ex1233_pd[13] * ex1233_pd[14];
	v[6] = pow(v[3], 0.3333);
	if (errno) in_trouble2("pow",v[3],0.3333);
	if (v[3] > 0.) {
	ex1233_pd[15] = 0.3333*(v[6]/v[3]);
	} else if (0.3333 > 1.) {
	ex1233_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.3333);
	}
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[3] = v[4] / v[6];
	ex1233_pd[16] = 1. / v[6];
	ex1233_pd[17] = -v[3] * ex1233_pd[16];
	v[2] += v[3];
	v[3] = 300. * x[3];
	ex1233_pd[18] = 0.5 * x[16];
	ex1233_pd[19] = ex1233_pd[18] * x[17];
	ex1233_pd[20] = x[16] + x[17];
	v[4] = ex1233_pd[19] * ex1233_pd[20];
	v[7] = pow(v[4], 0.3333);
	if (errno) in_trouble2("pow",v[4],0.3333);
	if (v[4] > 0.) {
	ex1233_pd[21] = 0.3333*(v[7]/v[4]);
	} else if (0.3333 > 1.) {
	ex1233_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.3333);
	}
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[4] = v[3] / v[7];
	ex1233_pd[22] = 1. / v[7];
	ex1233_pd[23] = -v[4] * ex1233_pd[22];
	v[2] += v[4];
	v[4] = 300. * x[4];
	ex1233_pd[24] = 0.5 * x[18];
	ex1233_pd[25] = ex1233_pd[24] * x[19];
	ex1233_pd[26] = x[18] + x[19];
	v[3] = ex1233_pd[25] * ex1233_pd[26];
	v[8] = pow(v[3], 0.3333);
	if (errno) in_trouble2("pow",v[3],0.3333);
	if (v[3] > 0.) {
	ex1233_pd[27] = 0.3333*(v[8]/v[3]);
	} else if (0.3333 > 1.) {
	ex1233_pd[27] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.3333);
	}
	if (v[8] == 0.) {
	zerdiv_(&v[8]);	}
	v[3] = v[4] / v[8];
	ex1233_pd[28] = 1. / v[8];
	ex1233_pd[29] = -v[3] * ex1233_pd[28];
	v[2] += v[3];
	v[3] = 300. * x[5];
	ex1233_pd[30] = 0.5 * x[19];
	ex1233_pd[31] = ex1233_pd[30] * x[20];
	ex1233_pd[32] = x[19] + x[20];
	v[4] = ex1233_pd[31] * ex1233_pd[32];
	v[9] = pow(v[4], 0.3333);
	if (errno) in_trouble2("pow",v[4],0.3333);
	if (v[4] > 0.) {
	ex1233_pd[33] = 0.3333*(v[9]/v[4]);
	} else if (0.3333 > 1.) {
	ex1233_pd[33] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.3333);
	}
	if (v[9] == 0.) {
	zerdiv_(&v[9]);	}
	v[4] = v[3] / v[9];
	ex1233_pd[34] = 1. / v[9];
	ex1233_pd[35] = -v[4] * ex1233_pd[34];
	v[2] += v[4];
	v[4] = 300. * x[6];
	ex1233_pd[36] = 0.5 * x[21];
	ex1233_pd[37] = ex1233_pd[36] * x[22];
	ex1233_pd[38] = x[21] + x[22];
	v[3] = ex1233_pd[37] * ex1233_pd[38];
	v[10] = pow(v[3], 0.3333);
	if (errno) in_trouble2("pow",v[3],0.3333);
	if (v[3] > 0.) {
	ex1233_pd[39] = 0.3333*(v[10]/v[3]);
	} else if (0.3333 > 1.) {
	ex1233_pd[39] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.3333);
	}
	if (v[10] == 0.) {
	zerdiv_(&v[10]);	}
	v[3] = v[4] / v[10];
	ex1233_pd[40] = 1. / v[10];
	ex1233_pd[41] = -v[3] * ex1233_pd[40];
	v[2] += v[3];
	v[3] = 300. * x[7];
	ex1233_pd[42] = 0.5 * x[22];
	ex1233_pd[43] = ex1233_pd[42] * x[23];
	ex1233_pd[44] = x[22] + x[23];
	v[4] = ex1233_pd[43] * ex1233_pd[44];
	v[11] = pow(v[4], 0.3333);
	if (errno) in_trouble2("pow",v[4],0.3333);
	if (v[4] > 0.) {
	ex1233_pd[45] = 0.3333*(v[11]/v[4]);
	} else if (0.3333 > 1.) {
	ex1233_pd[45] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.3333);
	}
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[4] = v[3] / v[11];
	ex1233_pd[46] = 1. / v[11];
	ex1233_pd[47] = -v[4] * ex1233_pd[46];
	v[2] += v[4];
	v[4] = 300. * x[8];
	ex1233_pd[48] = 35. * x[24];
	ex1233_pd[49] = x[24] + 70.;
	v[3] = ex1233_pd[48] * ex1233_pd[49];
	v[12] = pow(v[3], 0.33333);
	if (errno) in_trouble2("pow",v[3],0.33333);
	if (v[3] > 0.) {
	ex1233_pd[50] = 0.33333*(v[12]/v[3]);
	} else if (0.33333 > 1.) {
	ex1233_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.33333);
	}
	if (v[12] == 0.) {
	zerdiv_(&v[12]);	}
	v[3] = v[4] / v[12];
	ex1233_pd[51] = 1. / v[12];
	ex1233_pd[52] = -v[3] * ex1233_pd[51];
	v[2] += v[3];
	v[3] = 300. * x[9];
	ex1233_pd[53] = 35. * x[25];
	ex1233_pd[54] = x[25] + 70.;
	v[4] = ex1233_pd[53] * ex1233_pd[54];
	v[13] = pow(v[4], 0.33333);
	if (errno) in_trouble2("pow",v[4],0.33333);
	if (v[4] > 0.) {
	ex1233_pd[55] = 0.33333*(v[13]/v[4]);
	} else if (0.33333 > 1.) {
	ex1233_pd[55] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.33333);
	}
	if (v[13] == 0.) {
	zerdiv_(&v[13]);	}
	v[4] = v[3] / v[13];
	ex1233_pd[56] = 1. / v[13];
	ex1233_pd[57] = -v[4] * ex1233_pd[56];
	v[2] += v[4];
	v[4] = 180. * x[10];
	ex1233_pd[58] = 15. * x[26];
	ex1233_pd[59] = x[26] + 30.;
	v[3] = ex1233_pd[58] * ex1233_pd[59];
	v[14] = pow(v[3], 0.33333);
	if (errno) in_trouble2("pow",v[3],0.33333);
	if (v[3] > 0.) {
	ex1233_pd[60] = 0.33333*(v[14]/v[3]);
	} else if (0.33333 > 1.) {
	ex1233_pd[60] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.33333);
	}
	if (v[14] == 0.) {
	zerdiv_(&v[14]);	}
	v[3] = v[4] / v[14];
	ex1233_pd[61] = 1. / v[14];
	ex1233_pd[62] = -v[3] * ex1233_pd[61];
	v[2] += v[3];
	v[3] = 180. * x[11];
	ex1233_pd[63] = 90. * x[27];
	ex1233_pd[64] = x[27] + 180.;
	v[4] = ex1233_pd[63] * ex1233_pd[64];
	v[15] = pow(v[4], 0.33333);
	if (errno) in_trouble2("pow",v[4],0.33333);
	if (v[4] > 0.) {
	ex1233_pd[65] = 0.33333*(v[15]/v[4]);
	} else if (0.33333 > 1.) {
	ex1233_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.33333);
	}
	if (v[15] == 0.) {
	zerdiv_(&v[15]);	}
	v[4] = v[3] / v[15];
	ex1233_pd[66] = 1. / v[15];
	ex1233_pd[67] = -v[4] * ex1233_pd[66];
	v[2] += v[4];
	rv = v[2] + 15.*x[8];
	rv += 15.*x[9];
	rv += 80.*x[10];
	rv += 80.*x[11];
	rv += 5500.*x[40];
	rv += 5500.*x[41];
	rv += 5500.*x[42];
	rv += 5500.*x[43];
	rv += 5500.*x[44];
	rv += 5500.*x[45];
	rv += 5500.*x[46];
	rv += 5500.*x[47];
	rv += 5500.*x[48];
	rv += 5500.*x[49];
	rv += 5500.*x[50];
	rv += 5500.*x[51];
	;}

	if (wantfg & 2) {
	dv[0] = ex1233_pd[67]*ex1233_pd[65];
	dv[1] = dv[0]*ex1233_pd[63];
	dv[0] *= ex1233_pd[64];
	g[27] = dv[1];
	g[27] += dv[0]*90.;
	g[11] = ex1233_pd[66]*180. + 80.;
	dv[2] = ex1233_pd[62]*ex1233_pd[60];
	dv[3] = dv[2]*ex1233_pd[58];
	dv[2] *= ex1233_pd[59];
	g[26] = dv[3];
	g[26] += dv[2]*15.;
	g[10] = ex1233_pd[61]*180. + 80.;
	dv[4] = ex1233_pd[57]*ex1233_pd[55];
	dv[5] = dv[4]*ex1233_pd[53];
	dv[4] *= ex1233_pd[54];
	g[25] = dv[5];
	g[25] += dv[4]*35.;
	g[9] = ex1233_pd[56]*300. + 15.;
	dv[6] = ex1233_pd[52]*ex1233_pd[50];
	dv[7] = dv[6]*ex1233_pd[48];
	dv[6] *= ex1233_pd[49];
	g[24] = dv[7];
	g[24] += dv[6]*35.;
	g[8] = ex1233_pd[51]*300. + 15.;
	dv[8] = ex1233_pd[47]*ex1233_pd[45];
	dv[9] = dv[8]*ex1233_pd[43];
	dv[8] *= ex1233_pd[44];
	g[23] = dv[9];
	g[22] = dv[9];
	g[23] += dv[8]*ex1233_pd[42];
	dv[8] *= x[23];
	g[22] += dv[8]*0.5;
	g[7] = ex1233_pd[46]*300.;
	dv[10] = ex1233_pd[41]*ex1233_pd[39];
	dv[11] = dv[10]*ex1233_pd[37];
	dv[10] *= ex1233_pd[38];
	g[22] += dv[11];
	g[21] = dv[11];
	g[22] += dv[10]*ex1233_pd[36];
	dv[10] *= x[22];
	g[21] += dv[10]*0.5;
	g[6] = ex1233_pd[40]*300.;
	dv[12] = ex1233_pd[35]*ex1233_pd[33];
	dv[13] = dv[12]*ex1233_pd[31];
	dv[12] *= ex1233_pd[32];
	g[20] = dv[13];
	g[19] = dv[13];
	g[20] += dv[12]*ex1233_pd[30];
	dv[12] *= x[20];
	g[19] += dv[12]*0.5;
	g[5] = ex1233_pd[34]*300.;
	dv[14] = ex1233_pd[29]*ex1233_pd[27];
	dv[15] = dv[14]*ex1233_pd[25];
	dv[14] *= ex1233_pd[26];
	g[19] += dv[15];
	g[18] = dv[15];
	g[19] += dv[14]*ex1233_pd[24];
	dv[14] *= x[19];
	g[18] += dv[14]*0.5;
	g[4] = ex1233_pd[28]*300.;
	dv[16] = ex1233_pd[23]*ex1233_pd[21];
	dv[17] = dv[16]*ex1233_pd[19];
	dv[16] *= ex1233_pd[20];
	g[17] = dv[17];
	g[16] = dv[17];
	g[17] += dv[16]*ex1233_pd[18];
	dv[16] *= x[17];
	g[16] += dv[16]*0.5;
	g[3] = ex1233_pd[22]*300.;
	dv[18] = ex1233_pd[17]*ex1233_pd[15];
	dv[19] = dv[18]*ex1233_pd[13];
	dv[18] *= ex1233_pd[14];
	g[16] += dv[19];
	g[15] = dv[19];
	g[16] += dv[18]*ex1233_pd[12];
	dv[18] *= x[16];
	g[15] += dv[18]*0.5;
	g[2] = ex1233_pd[16]*300.;
	dv[20] = ex1233_pd[11]*ex1233_pd[9];
	dv[21] = dv[20]*ex1233_pd[7];
	dv[20] *= ex1233_pd[8];
	g[14] = dv[21];
	g[13] = dv[21];
	g[14] += dv[20]*ex1233_pd[6];
	dv[20] *= x[14];
	g[13] += dv[20]*0.5;
	g[1] = ex1233_pd[10]*300.;
	dv[22] = ex1233_pd[5]*ex1233_pd[3];
	dv[23] = dv[22]*ex1233_pd[1];
	dv[22] *= ex1233_pd[2];
	g[13] += dv[23];
	g[12] = dv[23];
	g[13] += dv[22]*ex1233_pd[0];
	dv[22] *= x[13];
	g[12] += dv[22]*0.5;
	g[0] = ex1233_pd[4]*300.;
	g[40] = 5500.;
	g[41] = 5500.;
	g[42] = 5500.;
	g[43] = 5500.;
	g[44] = 5500.;
	g[45] = 5500.;
	g[46] = 5500.;
	g[47] = 5500.;
	g[48] = 5500.;
	g[49] = 5500.;
	g[50] = 5500.;
	g[51] = 5500.;
	}

	return rv;
}

 void
ex1233_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex1233_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[4];
	t1 += x[5];
	t1 += x[10];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[2];
	t1 += x[3];
	t1 += x[6];
	t1 += x[7];
	t1 += x[11];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += -x[2];
	t1 += 10.*x[28];
	t1 += -10.*x[29];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[1];
	t1 += -x[3];
	t1 += 10.*x[29];
	t1 += -10.*x[30];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[4];
	t1 += -x[6];
	t1 += 20.*x[31];
	t1 += -20.*x[32];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[5];
	t1 += -x[7];
	t1 += 20.*x[32];
	t1 += -20.*x[33];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[0];
	t1 += -x[4];
	t1 += 15.*x[34];
	t1 += -15.*x[35];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[1];
	t1 += -x[5];
	t1 += 15.*x[35];
	t1 += -15.*x[36];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[2];
	t1 += -x[6];
	t1 += 13.*x[37];
	t1 += -13.*x[38];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[3];
	t1 += -x[7];
	t1 += 13.*x[38];
	t1 += -13.*x[39];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[28];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[31];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[36];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[39];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[28];
	t1 += x[29];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[29];
	t1 += x[30];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[31];
	t1 += x[32];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[32];
	t1 += x[33];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[34];
	t1 += x[35];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[35];
	t1 += x[36];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[37];
	t1 += x[38];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[38];
	t1 += x[39];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[30];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[33];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[34];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[37];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[8];
	t1 += 10.*x[30];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[9];
	t1 += 20.*x[33];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[10];
	t1 += 15.*x[34];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[11];
	t1 += 13.*x[37];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[0];
	t1 += -2800.*x[40];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[1];
	t1 += -2800.*x[41];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[2];
	t1 += -1950.*x[42];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[3];
	t1 += -1950.*x[43];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[4];
	t1 += -3600.*x[44];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[5];
	t1 += -3600.*x[45];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[6];
	t1 += -1950.*x[46];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[7];
	t1 += -1950.*x[47];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[8];
	t1 += -2800.*x[48];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[9];
	t1 += -4400.*x[49];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[10];
	t1 += -3600.*x[50];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[11];
	t1 += -1950.*x[51];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[12];
	t1 += -x[28];
	t1 += x[34];
	t1 += 280.*x[40];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[13];
	t1 += -x[29];
	t1 += x[35];
	t1 += 130.*x[41];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[15];
	t1 += -x[28];
	t1 += x[37];
	t1 += 280.*x[42];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[16];
	t1 += -x[29];
	t1 += x[38];
	t1 += 150.*x[43];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[18];
	t1 += -x[31];
	t1 += x[34];
	t1 += 280.*x[44];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[19];
	t1 += -x[32];
	t1 += x[35];
	t1 += 130.*x[45];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[21];
	t1 += -x[31];
	t1 += x[37];
	t1 += 280.*x[46];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[22];
	t1 += -x[32];
	t1 += x[38];
	t1 += 150.*x[47];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[13];
	t1 += -x[29];
	t1 += x[35];
	t1 += 280.*x[40];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[14];
	t1 += -x[30];
	t1 += x[36];
	t1 += 130.*x[41];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[16];
	t1 += -x[29];
	t1 += x[38];
	t1 += 280.*x[42];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[17];
	t1 += -x[30];
	t1 += x[39];
	t1 += 150.*x[43];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[19];
	t1 += -x[32];
	t1 += x[35];
	t1 += 280.*x[44];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[20];
	t1 += -x[33];
	t1 += x[36];
	t1 += 130.*x[45];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[22];
	t1 += -x[32];
	t1 += x[38];
	t1 += 280.*x[46];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[23];
	t1 += -x[33];
	t1 += x[39];
	t1 += 150.*x[47];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[24];
	t1 += -x[30];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[25];
	t1 += -x[33];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[26];
	t1 += x[34];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[27];
	t1 += x[37];
	c[63] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[5] = 1.;
	J[10] = 1.;
	J[15] = 1.;
	J[40] = 1.;

   /*** derivatives for constraint 2 ***/

	J[20] = 1.;
	J[25] = 1.;
	J[30] = 1.;
	J[35] = 1.;
	J[43] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = 1.;
	J[6] = 1.;
	J[21] = 1.;
	J[26] = 1.;
	J[46] = 1.;

   /*** derivatives for constraint 4 ***/

	J[11] = 1.;
	J[16] = 1.;
	J[31] = 1.;
	J[36] = 1.;
	J[49] = 1.;

   /*** derivatives for constraint 5 ***/

	J[2] = -1.;
	J[12] = -1.;
	J[72] = 10.;
	J[77] = -10.;

   /*** derivatives for constraint 6 ***/

	J[7] = -1.;
	J[17] = -1.;
	J[78] = 10.;
	J[85] = -10.;

   /*** derivatives for constraint 7 ***/

	J[22] = -1.;
	J[32] = -1.;
	J[92] = 20.;
	J[97] = -20.;

   /*** derivatives for constraint 8 ***/

	J[27] = -1.;
	J[37] = -1.;
	J[98] = 20.;
	J[105] = -20.;

   /*** derivatives for constraint 9 ***/

	J[3] = -1.;
	J[23] = -1.;
	J[112] = 15.;
	J[119] = -15.;

   /*** derivatives for constraint 10 ***/

	J[8] = -1.;
	J[28] = -1.;
	J[120] = 15.;
	J[127] = -15.;

   /*** derivatives for constraint 11 ***/

	J[13] = -1.;
	J[33] = -1.;
	J[132] = 13.;
	J[139] = -13.;

   /*** derivatives for constraint 12 ***/

	J[18] = -1.;
	J[38] = -1.;
	J[140] = 13.;
	J[147] = -13.;

   /*** derivatives for constraint 13 ***/

	J[73] = 1.;

   /*** derivatives for constraint 14 ***/

	J[93] = 1.;

   /*** derivatives for constraint 15 ***/

	J[128] = 1.;

   /*** derivatives for constraint 16 ***/

	J[148] = 1.;

   /*** derivatives for constraint 17 ***/

	J[74] = -1.;
	J[79] = 1.;

   /*** derivatives for constraint 18 ***/

	J[80] = -1.;
	J[86] = 1.;

   /*** derivatives for constraint 19 ***/

	J[94] = -1.;
	J[99] = 1.;

   /*** derivatives for constraint 20 ***/

	J[100] = -1.;
	J[106] = 1.;

   /*** derivatives for constraint 21 ***/

	J[113] = -1.;
	J[121] = 1.;

   /*** derivatives for constraint 22 ***/

	J[122] = -1.;
	J[129] = 1.;

   /*** derivatives for constraint 23 ***/

	J[133] = -1.;
	J[141] = 1.;

   /*** derivatives for constraint 24 ***/

	J[142] = -1.;
	J[149] = 1.;

   /*** derivatives for constraint 25 ***/

	J[87] = -1.;

   /*** derivatives for constraint 26 ***/

	J[107] = -1.;

   /*** derivatives for constraint 27 ***/

	J[114] = 1.;

   /*** derivatives for constraint 28 ***/

	J[134] = 1.;

   /*** derivatives for constraint 29 ***/

	J[41] = -1.;
	J[88] = 10.;

   /*** derivatives for constraint 30 ***/

	J[44] = -1.;
	J[108] = 20.;

   /*** derivatives for constraint 31 ***/

	J[47] = 1.;
	J[115] = 15.;

   /*** derivatives for constraint 32 ***/

	J[50] = 1.;
	J[135] = 13.;

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

	J[42] = 1.;
	J[176] = -2800.;

   /*** derivatives for constraint 42 ***/

	J[45] = 1.;
	J[177] = -4400.;

   /*** derivatives for constraint 43 ***/

	J[48] = 1.;
	J[178] = -3600.;

   /*** derivatives for constraint 44 ***/

	J[51] = 1.;
	J[179] = -1950.;

   /*** derivatives for constraint 45 ***/

	J[52] = 1.;
	J[75] = -1.;
	J[116] = 1.;
	J[153] = 280.;

   /*** derivatives for constraint 46 ***/

	J[53] = 1.;
	J[81] = -1.;
	J[123] = 1.;
	J[156] = 130.;

   /*** derivatives for constraint 47 ***/

	J[56] = 1.;
	J[76] = -1.;
	J[136] = 1.;
	J[159] = 280.;

   /*** derivatives for constraint 48 ***/

	J[57] = 1.;
	J[82] = -1.;
	J[143] = 1.;
	J[162] = 150.;

   /*** derivatives for constraint 49 ***/

	J[60] = 1.;
	J[95] = -1.;
	J[117] = 1.;
	J[165] = 280.;

   /*** derivatives for constraint 50 ***/

	J[61] = 1.;
	J[101] = -1.;
	J[124] = 1.;
	J[168] = 130.;

   /*** derivatives for constraint 51 ***/

	J[64] = 1.;
	J[96] = -1.;
	J[137] = 1.;
	J[171] = 280.;

   /*** derivatives for constraint 52 ***/

	J[65] = 1.;
	J[102] = -1.;
	J[144] = 1.;
	J[174] = 150.;

   /*** derivatives for constraint 53 ***/

	J[54] = 1.;
	J[83] = -1.;
	J[125] = 1.;
	J[154] = 280.;

   /*** derivatives for constraint 54 ***/

	J[55] = 1.;
	J[89] = -1.;
	J[130] = 1.;
	J[157] = 130.;

   /*** derivatives for constraint 55 ***/

	J[58] = 1.;
	J[84] = -1.;
	J[145] = 1.;
	J[160] = 280.;

   /*** derivatives for constraint 56 ***/

	J[59] = 1.;
	J[90] = -1.;
	J[150] = 1.;
	J[163] = 150.;

   /*** derivatives for constraint 57 ***/

	J[62] = 1.;
	J[103] = -1.;
	J[126] = 1.;
	J[166] = 280.;

   /*** derivatives for constraint 58 ***/

	J[63] = 1.;
	J[109] = -1.;
	J[131] = 1.;
	J[169] = 130.;

   /*** derivatives for constraint 59 ***/

	J[66] = 1.;
	J[104] = -1.;
	J[146] = 1.;
	J[172] = 280.;

   /*** derivatives for constraint 60 ***/

	J[67] = 1.;
	J[110] = -1.;
	J[151] = 1.;
	J[175] = 150.;

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
