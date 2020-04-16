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
 fint ghg_1veh_auxcom_[1] = { 27 /* nlc */ };
 fint ghg_1veh_funcom_[144] = {
	29 /* nvar */,
	1 /* nobj */,
	37 /* ncon */,
	108 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	14,
	19,
	23,
	27,
	35,
	37,
	41,
	45,
	51,
	55,
	57,
	60,
	70,
	73,
	80,
	87,
	88,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	103,
	105,
	107,
	108,
	109,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	9,
	10,
	11,
	22,
	23,
	24,
	25,
	1,
	2,
	11,
	24,
	25,
	9,
	11,
	24,
	25,
	10,
	11,
	22,
	23,
	1,
	7,
	8,
	11,
	14,
	15,
	16,
	17,
	14,
	31,
	15,
	16,
	31,
	34,
	17,
	31,
	35,
	36,
	18,
	26,
	27,
	32,
	34,
	35,
	19,
	20,
	32,
	36,
	21,
	32,
	22,
	26,
	33,
	18,
	19,
	20,
	21,
	23,
	24,
	33,
	34,
	35,
	36,
	25,
	27,
	33,
	2,
	3,
	4,
	5,
	6,
	9,
	10,
	2,
	3,
	4,
	5,
	6,
	9,
	10,
	1,
	11,
	12,
	13,
	18,
	19,
	20,
	21,
	3,
	7,
	8,
	12,
	13,
	37,
	4,
	28,
	5,
	29,
	6,
	30,
	37,
	37 };

 real ghg_1veh_boundc_[1+58+74] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.2,
		1.,
		4.9,
		5.5,
		0.296392099803303,
		0.404171045186323,
		0.134723681728774,
		0.229030258938916,
		0.,
		90.,
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
		0.526315789473684,
		1.05263157894737,
		0.961538461538462,
		2.11538461538462,
		0.8,
		0.8,
		0.,
		200.,
		55.,
		63.,
		0.,
		26.,
		0.,
		1.,
		0.,
		34.1,
		0.,
		1.,
		0.,
		1.,
		6.,
		13.,
		6.,
		13.,
		0.26,
		0.35,
		0.,
		1.,
		0.,
		1.,
		0.,
		0.,
		4.960068215723,
		4.960068215723,
		57.679680208231,
		57.679680208231,
		44.230616625681,
		44.230616625681,
		32.102172356117,
		32.102172356117,
		0.140278656706,
		0.140278656706,
		33.7894914681534,
		33.7894914681534,
		1.,
		1.,
		0.29587368369345,
		0.29587368369345,
		0.194162178290626,
		0.194162178290626,
		0.,
		0.,
		33.7894914681534,
		33.7894914681534,
		1.,
		1.,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		11.,
		-1.7e308,
		11.,
		0.32,
		1.7e308,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		1.,
		1.};

 real ghg_1veh_x0comn_[29] = {
		0.5,
		5.218428550001,
		0.344077403769737,
		0.16888643257787,
		45.0872226720086,
		0.,
		1.,
		0.,
		0.,
		1.,
		0.,
		0.,
		1.,
		0.,
		1.,
		1.,
		0.8,
		49.2705196815703,
		58.1078648496005,
		13.01907481523,
		0.736672389572227,
		14.4644383631733,
		0.767336256792154,
		1.,
		13.,
		10.9460692020431,
		0.3215334333865,
		0.,
		0. };

 static real ghg_1veh_pd[269];
static real ghg_1veh_old_x[29];
static int ghg_1veh_xkind = -1;

 static int
ghg_1veh_xcheck(real *x)
{
	real *x1 = ghg_1veh_old_x, *xe = x + 29;
	errno = 0;
	if (ghg_1veh_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ghg_1veh_xkind = 0;
	return 1;
	}
 real
ghg_1veh_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[25], dv[49], rv;
	fint wantfg = *needfg;
	if (ghg_1veh_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[0] = 376.046780997472 / x[18];
	ghg_1veh_pd[200] = -v[0] / x[18];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = 0.854659090909091 / x[1];
	ghg_1veh_pd[201] = -v[1] / x[1];
	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[2] = 11.34 / x[18];
	ghg_1veh_pd[202] = -v[2] / x[18];
	v[3] = v[1] - v[2];
	ghg_1veh_pd[203] = 0.997312113279821 * v[3];
	v[3] = ghg_1veh_pd[203] * x[4];
	ghg_1veh_pd[204] = v[0] + v[3];
	ghg_1veh_pd[205] = ghg_1veh_pd[204] * x[5];
	ghg_1veh_pd[268] = ghg_1veh_pd[205] + 1.87912853526074;
	v[0] = 0.854659090909091 * x[19];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	ghg_1veh_pd[206] = 1. / x[1];
	ghg_1veh_pd[207] = -v[1] * ghg_1veh_pd[206];
	v[0] = -11.34 * x[19];
	v[4] = 376.046780997472 + v[0];
	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[0] = v[4] / x[18];
	ghg_1veh_pd[208] = 1. / x[18];
	ghg_1veh_pd[209] = -v[0] * ghg_1veh_pd[208];
	ghg_1veh_pd[215] = v[1] + v[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 0.854659090909091 / x[1];
	ghg_1veh_pd[210] = -v[0] / x[1];
	if (x[18] == 0.) {
	zerdiv_(&x[18]);	}
	v[4] = 11.34 / x[18];
	ghg_1veh_pd[211] = -v[4] / x[18];
	ghg_1veh_pd[212] = v[0] - v[4];
	ghg_1veh_pd[213] = ghg_1veh_pd[212] * x[4];
	ghg_1veh_pd[214] = 0.997312113279821 - x[20];
	v[0] = ghg_1veh_pd[213] * ghg_1veh_pd[214];
	ghg_1veh_pd[215] += v[0];
	v[0] = ghg_1veh_pd[215] * x[6];
	ghg_1veh_pd[268] += v[0];
	v[0] = 28.341428570246 * x[7];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[6] = v[0] / x[1];
	ghg_1veh_pd[216] = 1. / x[1];
	ghg_1veh_pd[217] = -v[6] * ghg_1veh_pd[216];
	ghg_1veh_pd[268] += v[6];
	ghg_1veh_pd[218] = 0.573023666281862 * x[8];
	v[6] = ghg_1veh_pd[218] * x[12];
	v[0] = 0.573023666281862 * x[13];
	ghg_1veh_pd[219] = v[6] + v[0];
	v[0] = ghg_1veh_pd[219] * x[0];
	ghg_1veh_pd[268] += v[0];
	ghg_1veh_pd[220] = x[5] * x[9];
	ghg_1veh_pd[221] = ghg_1veh_pd[220] * x[12];
	ghg_1veh_pd[222] = 0.03458 * x[3];
	v[0] = ghg_1veh_pd[222] * x[21];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[6] = 0.0181052631578947 / x[1];
	ghg_1veh_pd[223] = -v[6] / x[1];
	ghg_1veh_pd[224] = 0.03458 * x[2];
	ghg_1veh_pd[225] = v[6] + ghg_1veh_pd[224];
	v[8] = -0.03458 * x[3];
	ghg_1veh_pd[225] += v[8];
	ghg_1veh_pd[226] = ghg_1veh_pd[225] * x[4];
	v[8] = ghg_1veh_pd[226] * x[22];
	v[9] = v[0] + v[8];
	v[9] *= 0.6;
	ghg_1veh_pd[227] = 0.01728 * x[0];
	ghg_1veh_pd[228] = 33.1610917987189 - x[21];
	v[0] = ghg_1veh_pd[227] * ghg_1veh_pd[228];
	ghg_1veh_pd[229] = v[9] + v[0];
	v[0] = ghg_1veh_pd[221] * ghg_1veh_pd[229];
	ghg_1veh_pd[268] += v[0];
	ghg_1veh_pd[230] = x[6] * x[9];
	ghg_1veh_pd[231] = ghg_1veh_pd[230] * x[12];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 0.0181052631578947 / x[1];
	ghg_1veh_pd[232] = -v[0] / x[1];
	v[9] = 0.03458 * x[2];
	ghg_1veh_pd[233] = v[0] + v[9];
	ghg_1veh_pd[234] = ghg_1veh_pd[233] * x[19];
	ghg_1veh_pd[235] = 0.03458 * x[3];
	ghg_1veh_pd[236] = x[21] - x[19];
	v[0] = ghg_1veh_pd[235] * ghg_1veh_pd[236];
	v[0] += ghg_1veh_pd[234];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[12] = 0.0181052631578947 / x[1];
	ghg_1veh_pd[237] = -v[12] / x[1];
	ghg_1veh_pd[238] = 0.03458 * x[2];
	ghg_1veh_pd[239] = v[12] + ghg_1veh_pd[238];
	v[13] = -0.03458 * x[3];
	ghg_1veh_pd[239] += v[13];
	ghg_1veh_pd[240] = ghg_1veh_pd[239] * x[4];
	ghg_1veh_pd[241] = x[22] - x[20];
	v[14] = ghg_1veh_pd[240] * ghg_1veh_pd[241];
	v[0] += v[14];
	v[0] *= 0.6;
	ghg_1veh_pd[242] = 0.01728 * x[0];
	ghg_1veh_pd[243] = 33.1610917987189 - x[21];
	v[15] = ghg_1veh_pd[242] * ghg_1veh_pd[243];
	ghg_1veh_pd[244] = v[0] + v[15];
	v[15] = ghg_1veh_pd[231] * ghg_1veh_pd[244];
	ghg_1veh_pd[268] += v[15];
	ghg_1veh_pd[245] = x[5] * x[10];
	v[15] = ghg_1veh_pd[245] * x[12];
	v[0] = x[5] * x[11];
	v[17] = v[15] + v[0];
	ghg_1veh_pd[246] = 0.6 * v[17];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[17] = 0.0180565982614873 / x[1];
	ghg_1veh_pd[247] = -v[17] / x[1];
	ghg_1veh_pd[248] = 0.0344870528772162 * x[2];
	ghg_1veh_pd[249] = v[17] + ghg_1veh_pd[248];
	v[0] = -0.0344870528772162 * x[3];
	ghg_1veh_pd[249] += v[0];
	v[0] = ghg_1veh_pd[249] * x[4];
	v[15] = 1.1467105543997 * x[3];
	ghg_1veh_pd[250] = v[0] + v[15];
	v[15] = ghg_1veh_pd[246] * ghg_1veh_pd[250];
	ghg_1veh_pd[268] += v[15];
	ghg_1veh_pd[251] = x[6] * x[10];
	v[15] = ghg_1veh_pd[251] * x[12];
	v[0] = x[6] * x[11];
	v[19] = v[15] + v[0];
	ghg_1veh_pd[252] = 0.6 * v[19];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[19] = 0.0181052631578947 / x[1];
	ghg_1veh_pd[253] = -v[19] / x[1];
	v[0] = 0.03458 * x[2];
	ghg_1veh_pd[254] = v[19] + v[0];
	ghg_1veh_pd[255] = ghg_1veh_pd[254] * x[19];
	ghg_1veh_pd[256] = 0.03458 * x[3];
	ghg_1veh_pd[257] = 33.1610917987189 - x[19];
	v[19] = ghg_1veh_pd[256] * ghg_1veh_pd[257];
	ghg_1veh_pd[263] = ghg_1veh_pd[255] + v[19];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[20] = 0.0181052631578947 / x[1];
	ghg_1veh_pd[258] = -v[20] / x[1];
	ghg_1veh_pd[259] = 0.03458 * x[2];
	ghg_1veh_pd[260] = v[20] + ghg_1veh_pd[259];
	v[21] = -0.03458 * x[3];
	ghg_1veh_pd[260] += v[21];
	ghg_1veh_pd[261] = ghg_1veh_pd[260] * x[4];
	ghg_1veh_pd[262] = 0.997312113279821 - x[20];
	v[22] = ghg_1veh_pd[261] * ghg_1veh_pd[262];
	ghg_1veh_pd[263] += v[22];
	v[22] = ghg_1veh_pd[252] * ghg_1veh_pd[263];
	ghg_1veh_pd[268] += v[22];
	ghg_1veh_pd[264] = x[7] * x[10];
	v[22] = ghg_1veh_pd[264] * x[12];
	v[23] = x[7] * x[11];
	v[24] = v[22] + v[23];
	ghg_1veh_pd[265] = 19.8966550792313 * v[24];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[24] = 0.0181052631578947 / x[1];
	ghg_1veh_pd[266] = -v[24] / x[1];
	v[23] = 0.03458 * x[2];
	ghg_1veh_pd[267] = v[24] + v[23];
	v[23] = ghg_1veh_pd[265] * ghg_1veh_pd[267];
	ghg_1veh_pd[268] += v[23];
	v[23] = ghg_1veh_pd[268] * x[23];
	rv = v[23] + 8.20275610163388*x[27];
	rv += 14.6264770436496*x[28];
	;}

	if (wantfg & 2) {
	g[23] = ghg_1veh_pd[268];
	dv[0] = x[23];
	dv[1] = dv[0]*ghg_1veh_pd[265];
	dv[0] *= ghg_1veh_pd[267];
	dv[2] = dv[1];
	g[2] = dv[2]*0.03458;
	g[1] = dv[1]*ghg_1veh_pd[266];
	dv[0] *= 19.8966550792313;
	dv[3] = dv[0];
	g[11] = dv[3]*x[7];
	g[7] = dv[3]*x[11];
	g[12] = dv[0]*ghg_1veh_pd[264];
	dv[0] *= x[12];
	g[10] = dv[0]*x[7];
	g[7] += dv[0]*x[10];
	dv[4] = x[23];
	dv[5] = dv[4]*ghg_1veh_pd[252];
	dv[4] *= ghg_1veh_pd[263];
	dv[6] = dv[5];
	dv[7] = dv[6]*ghg_1veh_pd[261];
	dv[6] *= ghg_1veh_pd[262];
	g[20] = -dv[7];
	g[4] = dv[6]*ghg_1veh_pd[260];
	dv[6] *= x[4];
	dv[8] = dv[6];
	g[3] = -dv[8]*0.03458;
	dv[9] = dv[6];
	g[2] += dv[9]*0.03458;
	g[1] += dv[6]*ghg_1veh_pd[258];
	dv[10] = dv[5];
	dv[11] = dv[10]*ghg_1veh_pd[256];
	dv[10] *= ghg_1veh_pd[257];
	g[19] = -dv[11];
	g[3] += dv[10]*0.03458;
	g[19] += dv[5]*ghg_1veh_pd[254];
	dv[5] *= x[19];
	dv[12] = dv[5];
	g[2] += dv[12]*0.03458;
	g[1] += dv[5]*ghg_1veh_pd[253];
	dv[4] *= 0.6;
	dv[13] = dv[4];
	g[11] += dv[13]*x[6];
	g[6] = dv[13]*x[11];
	g[12] += dv[4]*ghg_1veh_pd[251];
	dv[4] *= x[12];
	g[10] += dv[4]*x[6];
	g[6] += dv[4]*x[10];
	dv[14] = x[23];
	dv[15] = dv[14]*ghg_1veh_pd[246];
	dv[14] *= ghg_1veh_pd[250];
	dv[16] = dv[15];
	g[3] += dv[16]*1.1467105543997;
	g[4] += dv[15]*ghg_1veh_pd[249];
	dv[15] *= x[4];
	dv[17] = dv[15];
	g[3] -= dv[17]*0.0344870528772162;
	dv[18] = dv[15];
	g[2] += dv[18]*0.0344870528772162;
	g[1] += dv[15]*ghg_1veh_pd[247];
	dv[14] *= 0.6;
	dv[19] = dv[14];
	g[11] += dv[19]*x[5];
	g[5] = dv[19]*x[11];
	g[12] += dv[14]*ghg_1veh_pd[245];
	dv[14] *= x[12];
	g[10] += dv[14]*x[5];
	g[5] += dv[14]*x[10];
	dv[20] = x[23];
	dv[21] = dv[20]*ghg_1veh_pd[231];
	dv[20] *= ghg_1veh_pd[244];
	dv[22] = dv[21];
	dv[23] = dv[22]*ghg_1veh_pd[242];
	dv[22] *= ghg_1veh_pd[243];
	g[21] = -dv[23];
	g[0] = dv[22]*0.01728;
	dv[21] *= 0.6;
	dv[24] = dv[21];
	dv[25] = dv[24]*ghg_1veh_pd[240];
	dv[24] *= ghg_1veh_pd[241];
	g[20] -= dv[25];
	g[22] = dv[25];
	g[4] += dv[24]*ghg_1veh_pd[239];
	dv[24] *= x[4];
	dv[26] = dv[24];
	g[3] -= dv[26]*0.03458;
	dv[27] = dv[24];
	g[2] += dv[27]*0.03458;
	g[1] += dv[24]*ghg_1veh_pd[237];
	dv[28] = dv[21];
	dv[29] = dv[28]*ghg_1veh_pd[235];
	dv[28] *= ghg_1veh_pd[236];
	g[19] -= dv[29];
	g[21] += dv[29];
	g[3] += dv[28]*0.03458;
	g[19] += dv[21]*ghg_1veh_pd[233];
	dv[21] *= x[19];
	dv[30] = dv[21];
	g[2] += dv[30]*0.03458;
	g[1] += dv[21]*ghg_1veh_pd[232];
	g[12] += dv[20]*ghg_1veh_pd[230];
	dv[20] *= x[12];
	g[9] = dv[20]*x[6];
	g[6] += dv[20]*x[9];
	dv[31] = x[23];
	dv[32] = dv[31]*ghg_1veh_pd[221];
	dv[31] *= ghg_1veh_pd[229];
	dv[33] = dv[32];
	dv[34] = dv[33]*ghg_1veh_pd[227];
	dv[33] *= ghg_1veh_pd[228];
	g[21] -= dv[34];
	g[0] += dv[33]*0.01728;
	dv[32] *= 0.6;
	dv[35] = dv[32];
	g[22] += dv[35]*ghg_1veh_pd[226];
	dv[35] *= x[22];
	g[4] += dv[35]*ghg_1veh_pd[225];
	dv[35] *= x[4];
	dv[36] = dv[35];
	g[3] -= dv[36]*0.03458;
	dv[37] = dv[35];
	g[2] += dv[37]*0.03458;
	g[1] += dv[35]*ghg_1veh_pd[223];
	g[21] += dv[32]*ghg_1veh_pd[222];
	dv[32] *= x[21];
	g[3] += dv[32]*0.03458;
	g[12] += dv[31]*ghg_1veh_pd[220];
	dv[31] *= x[12];
	g[9] += dv[31]*x[5];
	g[5] += dv[31]*x[9];
	dv[38] = x[23];
	g[0] += dv[38]*ghg_1veh_pd[219];
	dv[38] *= x[0];
	dv[39] = dv[38];
	g[13] = dv[39]*0.573023666281862;
	g[12] += dv[38]*ghg_1veh_pd[218];
	dv[38] *= x[12];
	g[8] = dv[38]*0.573023666281862;
	dv[40] = x[23];
	g[1] += dv[40]*ghg_1veh_pd[217];
	dv[40] *= ghg_1veh_pd[216];
	g[7] += dv[40]*28.341428570246;
	dv[41] = x[23];
	g[6] += dv[41]*ghg_1veh_pd[215];
	dv[41] *= x[6];
	dv[42] = dv[41];
	dv[43] = dv[42]*ghg_1veh_pd[213];
	dv[42] *= ghg_1veh_pd[214];
	g[20] -= dv[43];
	g[4] += dv[42]*ghg_1veh_pd[212];
	dv[42] *= x[4];
	dv[44] = -dv[42];
	g[18] = dv[44]*ghg_1veh_pd[211];
	g[1] += dv[42]*ghg_1veh_pd[210];
	dv[45] = dv[41];
	g[18] += dv[45]*ghg_1veh_pd[209];
	dv[45] *= ghg_1veh_pd[208];
	g[19] -= dv[45]*11.34;
	g[1] += dv[41]*ghg_1veh_pd[207];
	dv[41] *= ghg_1veh_pd[206];
	g[19] += dv[41]*0.854659090909091;
	g[5] += x[23]*ghg_1veh_pd[204];
	dv[46] = x[23]*x[5];
	dv[47] = dv[46];
	g[4] += dv[47]*ghg_1veh_pd[203];
	dv[47] *= x[4];
	dv[47] *= 0.997312113279821;
	dv[48] = -dv[47];
	g[18] += dv[48]*ghg_1veh_pd[202];
	g[1] += dv[47]*ghg_1veh_pd[201];
	g[18] += dv[46]*ghg_1veh_pd[200];
	g[27] = 8.20275610163388;
	g[28] = 14.6264770436496;
	}

	return rv;
}

 void
ghg_1veh_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[7];
	real t1;
	fint wantfg = *needfg;
	if (ghg_1veh_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ghg_1veh_pd[0] = -21.6 * x[0];
	ghg_1veh_pd[1] = ghg_1veh_pd[0] * x[16];
	v[0] = ghg_1veh_pd[1] * x[1];
	t1 = v[0] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = pow(x[14], 3.);
	if (errno) in_trouble2("pow",x[14],3.);
	if (x[14] != 0.) {
	ghg_1veh_pd[2] = 3.*(x[14]*x[14]);
	} else {
	ghg_1veh_pd[2] = 0.;
	}
	v[0] *= -0.007852585706;
	v[1] = pow(x[15], 3.);
	if (errno) in_trouble2("pow",x[15],3.);
	if (x[15] != 0.) {
	ghg_1veh_pd[3] = 3.*(x[15]*x[15]);
	} else {
	ghg_1veh_pd[3] = 0.;
	}
	v[1] *= -0.154288922601;
	v[0] += v[1];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ghg_1veh_pd[4] = 3.*(x[0]*x[0]);
	} else {
	ghg_1veh_pd[4] = 0.;
	}
	v[1] *= -0.352933730854;
	v[0] += v[1];
	ghg_1veh_pd[5] = x[14] * x[14];
	ghg_1veh_pd[6] = x[14] + x[14];
	ghg_1veh_pd[7] = 0.004816150342 * ghg_1veh_pd[5];
	v[1] = ghg_1veh_pd[7] * x[15];
	v[0] += v[1];
	ghg_1veh_pd[8] = x[15] * x[15];
	ghg_1veh_pd[9] = x[15] + x[15];
	ghg_1veh_pd[10] = 0.00547943134 * ghg_1veh_pd[8];
	v[1] = ghg_1veh_pd[10] * x[14];
	v[0] += v[1];
	ghg_1veh_pd[11] = x[14] * x[14];
	ghg_1veh_pd[12] = x[14] + x[14];
	ghg_1veh_pd[13] = 0.02533808214 * ghg_1veh_pd[11];
	v[1] = ghg_1veh_pd[13] * x[0];
	v[0] += v[1];
	ghg_1veh_pd[14] = x[0] * x[0];
	ghg_1veh_pd[15] = x[0] + x[0];
	ghg_1veh_pd[16] = 0.00021201136 * ghg_1veh_pd[14];
	v[1] = ghg_1veh_pd[16] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[17] = x[15] * x[15];
	ghg_1veh_pd[18] = x[15] + x[15];
	ghg_1veh_pd[19] = 0.057118497613 * ghg_1veh_pd[17];
	v[2] = ghg_1veh_pd[19] * x[0];
	v[0] += v[2];
	ghg_1veh_pd[20] = x[0] * x[0];
	ghg_1veh_pd[21] = x[0] + x[0];
	ghg_1veh_pd[22] = 0.042739509965 * ghg_1veh_pd[20];
	v[2] = ghg_1veh_pd[22] * x[15];
	v[0] += v[2];
	ghg_1veh_pd[23] = 0.01583097252 * x[14];
	ghg_1veh_pd[24] = ghg_1veh_pd[23] * x[15];
	v[2] = ghg_1veh_pd[24] * x[0];
	v[0] += v[2];
	ghg_1veh_pd[25] = x[14] * x[14];
	ghg_1veh_pd[26] = x[14] + x[14];
	v[2] = 0.001028174658 * ghg_1veh_pd[25];
	v[0] += v[2];
	ghg_1veh_pd[27] = x[15] * x[15];
	ghg_1veh_pd[28] = x[15] + x[15];
	v[2] = 0.805369774847 * ghg_1veh_pd[27];
	v[0] += v[2];
	ghg_1veh_pd[29] = x[0] * x[0];
	ghg_1veh_pd[30] = x[0] + x[0];
	v[2] = 0.655580550098 * ghg_1veh_pd[29];
	v[0] += v[2];
	ghg_1veh_pd[31] = 0.057270405947 * x[14];
	v[2] = ghg_1veh_pd[31] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[32] = 0.07973036236 * x[14];
	v[1] = ghg_1veh_pd[32] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[33] = 0.342091579946 * x[15];
	v[2] = ghg_1veh_pd[33] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + 0.346682012779*x[0];
	t1 += x[1];
	t1 += 0.191345333621*x[14];
	t1 += -1.188971392024*x[15];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = pow(x[14], 3.);
	if (errno) in_trouble2("pow",x[14],3.);
	if (x[14] != 0.) {
	ghg_1veh_pd[34] = 3.*(x[14]*x[14]);
	} else {
	ghg_1veh_pd[34] = 0.;
	}
	v[0] *= -2.21406746341;
	v[1] = pow(x[15], 3.);
	if (errno) in_trouble2("pow",x[15],3.);
	if (x[15] != 0.) {
	ghg_1veh_pd[35] = 3.*(x[15]*x[15]);
	} else {
	ghg_1veh_pd[35] = 0.;
	}
	v[1] *= -1.086659693552;
	v[0] += v[1];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ghg_1veh_pd[36] = 3.*(x[0]*x[0]);
	} else {
	ghg_1veh_pd[36] = 0.;
	}
	v[1] *= -5.577874978662;
	v[0] += v[1];
	ghg_1veh_pd[37] = x[14] * x[14];
	ghg_1veh_pd[38] = x[14] + x[14];
	ghg_1veh_pd[39] = 0.815241697738 * ghg_1veh_pd[37];
	v[1] = ghg_1veh_pd[39] * x[15];
	v[0] += v[1];
	ghg_1veh_pd[40] = x[15] * x[15];
	ghg_1veh_pd[41] = x[15] + x[15];
	ghg_1veh_pd[42] = 0.509578110533 * ghg_1veh_pd[40];
	v[1] = ghg_1veh_pd[42] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[43] = x[14] * x[14];
	ghg_1veh_pd[44] = x[14] + x[14];
	ghg_1veh_pd[45] = 1.561758113326 * ghg_1veh_pd[43];
	v[2] = ghg_1veh_pd[45] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[46] = x[0] * x[0];
	ghg_1veh_pd[47] = x[0] + x[0];
	ghg_1veh_pd[48] = 2.212321055022 * ghg_1veh_pd[46];
	v[1] = ghg_1veh_pd[48] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[49] = x[15] * x[15];
	ghg_1veh_pd[50] = x[15] + x[15];
	ghg_1veh_pd[51] = 0.612567680918 * ghg_1veh_pd[49];
	v[2] = ghg_1veh_pd[51] * x[0];
	v[0] += v[2];
	ghg_1veh_pd[52] = x[0] * x[0];
	ghg_1veh_pd[53] = x[0] + x[0];
	ghg_1veh_pd[54] = 0.254008083604 * ghg_1veh_pd[52];
	v[2] = ghg_1veh_pd[54] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[55] = 0.159429747244 * x[14];
	ghg_1veh_pd[56] = ghg_1veh_pd[55] * x[15];
	v[1] = ghg_1veh_pd[56] * x[0];
	v[0] += v[1];
	ghg_1veh_pd[57] = x[14] * x[14];
	ghg_1veh_pd[58] = x[14] + x[14];
	v[1] = 8.905599398536 * ghg_1veh_pd[57];
	v[0] += v[1];
	ghg_1veh_pd[59] = x[15] * x[15];
	ghg_1veh_pd[60] = x[15] + x[15];
	v[1] = 6.095001164559 * ghg_1veh_pd[59];
	v[0] += v[1];
	ghg_1veh_pd[61] = x[0] * x[0];
	ghg_1veh_pd[62] = x[0] + x[0];
	v[1] = 15.207539664993 * ghg_1veh_pd[61];
	v[0] += v[1];
	ghg_1veh_pd[63] = 0.089172114876 * x[14];
	v[1] = ghg_1veh_pd[63] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[64] = 3.273526677614 * x[14];
	v[2] = ghg_1veh_pd[64] * x[0];
	v[0] += v[2];
	ghg_1veh_pd[65] = 2.498376358946 * x[15];
	v[2] = ghg_1veh_pd[65] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -5.837143728557*x[0];
	t1 += -2.621894664006*x[14];
	t1 += -9.284846067558*x[15];
	t1 += x[18];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = pow(x[14], 3.);
	if (errno) in_trouble2("pow",x[14],3.);
	if (x[14] != 0.) {
	ghg_1veh_pd[66] = 3.*(x[14]*x[14]);
	} else {
	ghg_1veh_pd[66] = 0.;
	}
	v[0] *= -1.456640469666;
	v[1] = pow(x[15], 3.);
	if (errno) in_trouble2("pow",x[15],3.);
	if (x[15] != 0.) {
	ghg_1veh_pd[67] = 3.*(x[15]*x[15]);
	} else {
	ghg_1veh_pd[67] = 0.;
	}
	v[1] *= 5.495718264905;
	v[0] += v[1];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ghg_1veh_pd[68] = 3.*(x[0]*x[0]);
	} else {
	ghg_1veh_pd[68] = 0.;
	}
	v[1] *= 28.456261951645;
	v[0] += v[1];
	ghg_1veh_pd[69] = x[14] * x[14];
	ghg_1veh_pd[70] = x[14] + x[14];
	ghg_1veh_pd[71] = 0.912917970314 * ghg_1veh_pd[69];
	v[1] = ghg_1veh_pd[71] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[72] = x[15] * x[15];
	ghg_1veh_pd[73] = x[15] + x[15];
	ghg_1veh_pd[74] = 0.88119920631 * ghg_1veh_pd[72];
	v[2] = ghg_1veh_pd[74] * x[14];
	v[0] += v[2];
	ghg_1veh_pd[75] = x[14] * x[14];
	ghg_1veh_pd[76] = x[14] + x[14];
	ghg_1veh_pd[77] = 1.049763024383 * ghg_1veh_pd[75];
	v[2] = ghg_1veh_pd[77] * x[0];
	v[0] += v[2];
	ghg_1veh_pd[78] = x[0] * x[0];
	ghg_1veh_pd[79] = x[0] + x[0];
	ghg_1veh_pd[80] = 0.308107344863 * ghg_1veh_pd[78];
	v[2] = ghg_1veh_pd[80] * x[14];
	v[0] += v[2];
	ghg_1veh_pd[81] = x[15] * x[15];
	ghg_1veh_pd[82] = x[15] + x[15];
	ghg_1veh_pd[83] = 2.043536297441 * ghg_1veh_pd[81];
	v[2] = ghg_1veh_pd[83] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[84] = x[0] * x[0];
	ghg_1veh_pd[85] = x[0] + x[0];
	ghg_1veh_pd[86] = 15.609611231641 * ghg_1veh_pd[84];
	v[1] = ghg_1veh_pd[86] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[87] = 0.336486837518 * x[14];
	ghg_1veh_pd[88] = ghg_1veh_pd[87] * x[15];
	v[2] = ghg_1veh_pd[88] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[89] = x[14] * x[14];
	ghg_1veh_pd[90] = x[14] + x[14];
	v[1] = 4.634160849469 * ghg_1veh_pd[89];
	v[0] += v[1];
	ghg_1veh_pd[91] = x[15] * x[15];
	ghg_1veh_pd[92] = x[15] + x[15];
	v[1] = -31.478262635483 * ghg_1veh_pd[91];
	v[0] += v[1];
	ghg_1veh_pd[93] = x[0] * x[0];
	ghg_1veh_pd[94] = x[0] + x[0];
	v[1] = -34.016843490037 * ghg_1veh_pd[93];
	v[0] += v[1];
	ghg_1veh_pd[95] = 1.153148892739 * x[14];
	v[1] = ghg_1veh_pd[95] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[96] = 1.168601192983 * x[14];
	v[2] = ghg_1veh_pd[96] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[97] = 32.056936006397 * x[15];
	v[1] = ghg_1veh_pd[97] * x[0];
	v[0] += v[1];
	t1 = v[0] + -9.56987912824*x[0];
	t1 += -3.405095041238*x[14];
	t1 += 54.472915571467*x[15];
	t1 += x[24];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = pow(x[14], 3.);
	if (errno) in_trouble2("pow",x[14],3.);
	if (x[14] != 0.) {
	ghg_1veh_pd[98] = 3.*(x[14]*x[14]);
	} else {
	ghg_1veh_pd[98] = 0.;
	}
	v[0] *= -3.334445194766;
	v[1] = pow(x[15], 3.);
	if (errno) in_trouble2("pow",x[15],3.);
	if (x[15] != 0.) {
	ghg_1veh_pd[99] = 3.*(x[15]*x[15]);
	} else {
	ghg_1veh_pd[99] = 0.;
	}
	v[1] *= 2.265666208775;
	v[0] += v[1];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ghg_1veh_pd[100] = 3.*(x[0]*x[0]);
	} else {
	ghg_1veh_pd[100] = 0.;
	}
	v[1] *= 20.256566414583;
	v[0] += v[1];
	ghg_1veh_pd[101] = x[14] * x[14];
	ghg_1veh_pd[102] = x[14] + x[14];
	ghg_1veh_pd[103] = 0.413782262402 * ghg_1veh_pd[101];
	v[1] = ghg_1veh_pd[103] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[104] = x[15] * x[15];
	ghg_1veh_pd[105] = x[15] + x[15];
	ghg_1veh_pd[106] = 3.523622273943 * ghg_1veh_pd[104];
	v[2] = ghg_1veh_pd[106] * x[14];
	v[0] += v[2];
	ghg_1veh_pd[107] = x[14] * x[14];
	ghg_1veh_pd[108] = x[14] + x[14];
	ghg_1veh_pd[109] = 0.285910055687 * ghg_1veh_pd[107];
	v[2] = ghg_1veh_pd[109] * x[0];
	v[0] += v[2];
	ghg_1veh_pd[110] = x[0] * x[0];
	ghg_1veh_pd[111] = x[0] + x[0];
	ghg_1veh_pd[112] = 10.110726634622 * ghg_1veh_pd[110];
	v[2] = ghg_1veh_pd[112] * x[14];
	v[0] += v[2];
	ghg_1veh_pd[113] = x[15] * x[15];
	ghg_1veh_pd[114] = x[15] + x[15];
	ghg_1veh_pd[115] = 1.95072196814 * ghg_1veh_pd[113];
	v[2] = ghg_1veh_pd[115] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[116] = x[0] * x[0];
	ghg_1veh_pd[117] = x[0] + x[0];
	ghg_1veh_pd[118] = 10.308512463418 * ghg_1veh_pd[116];
	v[1] = ghg_1veh_pd[118] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[119] = 5.808426325827 * x[14];
	ghg_1veh_pd[120] = ghg_1veh_pd[119] * x[15];
	v[2] = ghg_1veh_pd[120] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[121] = x[14] * x[14];
	ghg_1veh_pd[122] = x[14] + x[14];
	v[1] = 6.932398033967 * ghg_1veh_pd[121];
	v[0] += v[1];
	ghg_1veh_pd[123] = x[15] * x[15];
	ghg_1veh_pd[124] = x[15] + x[15];
	v[1] = -15.80019426934 * ghg_1veh_pd[123];
	v[0] += v[1];
	ghg_1veh_pd[125] = x[0] * x[0];
	ghg_1veh_pd[126] = x[0] + x[0];
	v[1] = -39.197963873266 * ghg_1veh_pd[125];
	v[0] += v[1];
	ghg_1veh_pd[127] = 7.900706395772 * x[14];
	v[1] = ghg_1veh_pd[127] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[128] = 6.58186092156 * x[14];
	v[2] = ghg_1veh_pd[128] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[129] = 30.119438887106 * x[15];
	v[1] = ghg_1veh_pd[129] * x[0];
	v[0] += v[1];
	t1 = v[0] + 4.098268423019*x[0];
	t1 += 6.733798415788*x[14];
	t1 += 26.385308892431*x[15];
	t1 += x[25];
	c[4] = t1;

  /***  constraint 6  ***/

	ghg_1veh_pd[130] = x[14] * x[14];
	ghg_1veh_pd[131] = x[14] + x[14];
	v[0] = 0.194075741585 * ghg_1veh_pd[130];
	ghg_1veh_pd[132] = x[15] * x[15];
	ghg_1veh_pd[133] = x[15] + x[15];
	v[1] = 0.004843420334 * ghg_1veh_pd[132];
	v[0] += v[1];
	ghg_1veh_pd[134] = x[0] * x[0];
	ghg_1veh_pd[135] = x[0] + x[0];
	v[1] = -0.04736686635 * ghg_1veh_pd[134];
	v[0] += v[1];
	ghg_1veh_pd[136] = 9.4029979e-05 * x[14];
	v[1] = ghg_1veh_pd[136] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	ghg_1veh_pd[137] = 0.011329651793 * x[14];
	v[2] = ghg_1veh_pd[137] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	ghg_1veh_pd[138] = 0.001017352942 * x[15];
	v[1] = ghg_1veh_pd[138] * x[0];
	v[0] += v[1];
	t1 = v[0] + 0.077357069039*x[0];
	t1 += -0.382275988592*x[14];
	t1 += -0.019484588535*x[15];
	t1 += x[26];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = -0.029595 * x[4];
	ghg_1veh_pd[139] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ghg_1veh_pd[140] = ghg_1veh_pd[139];
	ghg_1veh_pd[141] = x[4] + 33.7894914681534;
	v[1] = ghg_1veh_pd[139] * ghg_1veh_pd[141];
	t1 = v[1] + x[19];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = -0.029595 * x[4];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ghg_1veh_pd[142] = v[1];
	t1 = v[1] + x[20];
	c[7] = t1;

  /***  constraint 9  ***/

	ghg_1veh_pd[143] = x[14] * x[14];
	ghg_1veh_pd[144] = x[14] + x[14];
	v[0] = -0.0013570905974995256 * ghg_1veh_pd[143];
	ghg_1veh_pd[145] = x[15] * x[15];
	ghg_1veh_pd[146] = x[15] + x[15];
	v[1] = -0.0015350673379947695 * ghg_1veh_pd[145];
	v[0] += v[1];
	ghg_1veh_pd[147] = x[0] * x[0];
	ghg_1veh_pd[148] = x[0] + x[0];
	v[1] = -0.007128258788429915 * ghg_1veh_pd[147];
	v[0] += v[1];
	ghg_1veh_pd[149] = 0.000159410872 * x[14];
	ghg_1veh_pd[150] = ghg_1veh_pd[149] * x[15];
	v[1] = -0.134723681728774 * ghg_1veh_pd[150];
	v[0] += v[1];
	ghg_1veh_pd[151] = 0.008036404292 * x[14];
	ghg_1veh_pd[152] = ghg_1veh_pd[151] * x[0];
	v[1] = -0.134723681728774 * ghg_1veh_pd[152];
	v[0] += v[1];
	ghg_1veh_pd[153] = 0.003423392047 * x[15];
	ghg_1veh_pd[154] = ghg_1veh_pd[153] * x[0];
	v[1] = 0.134723681728774 * ghg_1veh_pd[154];
	v[0] += v[1];
	t1 = v[0] + -0.04990711560450505*x[0];
	t1 += x[2];
	t1 += -0.013084909485624956*x[14];
	t1 += -0.005158812739471334*x[15];
	c[8] = t1;

  /***  constraint 10  ***/

	ghg_1veh_pd[155] = x[14] * x[14];
	ghg_1veh_pd[156] = x[14] + x[14];
	v[0] = -0.06277855284132232 * ghg_1veh_pd[155];
	ghg_1veh_pd[157] = x[15] * x[15];
	ghg_1veh_pd[158] = x[15] + x[15];
	v[1] = 0.0010737539608762405 * ghg_1veh_pd[157];
	v[0] += v[1];
	ghg_1veh_pd[159] = x[0] * x[0];
	ghg_1veh_pd[160] = x[0] + x[0];
	v[1] = 0.0023971231280144373 * ghg_1veh_pd[159];
	v[0] += v[1];
	ghg_1veh_pd[161] = 0.01429434551 * x[14];
	ghg_1veh_pd[162] = ghg_1veh_pd[161] * x[15];
	v[1] = 0.134723681728774 * ghg_1veh_pd[162];
	v[0] += v[1];
	ghg_1veh_pd[163] = 0.03832188467 * x[14];
	ghg_1veh_pd[164] = ghg_1veh_pd[163] * x[0];
	v[1] = 0.134723681728774 * ghg_1veh_pd[164];
	v[0] += v[1];
	ghg_1veh_pd[165] = 0.00970510229 * x[15];
	ghg_1veh_pd[166] = ghg_1veh_pd[165] * x[0];
	v[1] = -0.134723681728774 * ghg_1veh_pd[166];
	v[0] += v[1];
	t1 = v[0] + -0.05387334993533252*x[0];
	t1 += x[3];
	t1 += 0.11987942521892572*x[14];
	t1 += -0.010414952435804143*x[15];
	c[9] = t1;

  /***  constraint 11  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 2715.7894736842 / x[1];
	ghg_1veh_pd[167] = -v[0] / x[1];
	ghg_1veh_pd[168] = 5187. * x[2];
	ghg_1veh_pd[169] = v[0] + ghg_1veh_pd[168];
	v[1] = -5187. * x[3];
	ghg_1veh_pd[169] += v[1];
	v[1] = ghg_1veh_pd[169] * x[4];
	v[2] = 4320. * x[0];
	v[3] = -5187. * x[3];
	v[4] = v[2] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = v[1] / v[4];
	ghg_1veh_pd[170] = 1. / v[4];
	ghg_1veh_pd[171] = -v[3] * ghg_1veh_pd[170];
	v[4] = -v[3];
	t1 = v[4] + x[17];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = -0.029595 * x[17];
	ghg_1veh_pd[172] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ghg_1veh_pd[173] = ghg_1veh_pd[172];
	ghg_1veh_pd[174] = x[17] + 33.7894914681534;
	v[1] = ghg_1veh_pd[172] * ghg_1veh_pd[174];
	t1 = v[1] + x[21];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = -0.029595 * x[17];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ghg_1veh_pd[175] = v[1];
	t1 = v[1] + x[22];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[5] * x[4];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[6] * x[4];
	c[14] = v[0];

  /***  constraint 16  ***/

	ghg_1veh_pd[176] = x[4] + -200.;
	v[1] = x[6] * ghg_1veh_pd[176];
	c[15] = v[1];

  /***  constraint 17  ***/

	ghg_1veh_pd[177] = x[4] + -200.;
	v[1] = x[7] * ghg_1veh_pd[177];
	c[16] = v[1];

  /***  constraint 18  ***/

	ghg_1veh_pd[178] = x[12] * x[8];
	v[0] = ghg_1veh_pd[178] * x[17];
	c[17] = v[0];

  /***  constraint 19  ***/

	ghg_1veh_pd[179] = x[12] * x[9];
	v[0] = ghg_1veh_pd[179] * x[17];
	c[18] = v[0];

  /***  constraint 20  ***/

	ghg_1veh_pd[180] = x[12] * x[9];
	ghg_1veh_pd[181] = x[17] + -200.;
	v[1] = ghg_1veh_pd[180] * ghg_1veh_pd[181];
	c[19] = v[1];

  /***  constraint 21  ***/

	ghg_1veh_pd[182] = x[12] * x[10];
	ghg_1veh_pd[183] = x[17] + -200.;
	v[1] = ghg_1veh_pd[182] * ghg_1veh_pd[183];
	c[20] = v[1];

  /***  constraint 22  ***/

	v[0] = 124927.703875072 * x[0];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = v[0] / x[3];
	ghg_1veh_pd[184] = 1. / x[3];
	ghg_1veh_pd[185] = -v[1] * ghg_1veh_pd[184];
	ghg_1veh_pd[186] = v[1] + -150000.;
	v[1] = ghg_1veh_pd[186] * x[11];
	c[21] = v[1];

  /***  constraint 23  ***/

	v[0] = 124927.703875072 * x[0];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = v[0] / x[3];
	ghg_1veh_pd[187] = 1. / x[3];
	ghg_1veh_pd[188] = -v[1] * ghg_1veh_pd[187];
	ghg_1veh_pd[189] = v[1] + -150000.;
	v[1] = ghg_1veh_pd[189] * x[12];
	c[22] = v[1];

  /***  constraint 24  ***/

	v[0] = 4320. * x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = 0.0172 / x[1];
	ghg_1veh_pd[190] = -v[1] / x[1];
	v[2] = 0.03458 * x[2];
	v[3] = v[1] + v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[0] / v[3];
	ghg_1veh_pd[191] = 1. / v[3];
	ghg_1veh_pd[192] = -v[2] * ghg_1veh_pd[191];
	ghg_1veh_pd[193] = 150000. - v[2];
	v[2] = ghg_1veh_pd[193] * x[12];
	c[23] = v[2];

  /***  constraint 25  ***/

	v[0] = 4320. * x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = 0.0172 / x[1];
	ghg_1veh_pd[194] = -v[1] / x[1];
	v[2] = 0.03458 * x[2];
	v[3] = v[1] + v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = v[0] / v[3];
	ghg_1veh_pd[195] = 1. / v[3];
	ghg_1veh_pd[196] = -v[2] * ghg_1veh_pd[195];
	ghg_1veh_pd[197] = 150000. - v[2];
	v[2] = ghg_1veh_pd[197] * x[13];
	c[24] = v[2];

  /***  constraint 26  ***/

	ghg_1veh_pd[198] = x[8] + -1.;
	v[1] = x[11] * ghg_1veh_pd[198];
	c[25] = v[1];

  /***  constraint 27  ***/

	ghg_1veh_pd[199] = x[8] + -1.;
	v[1] = x[13] * ghg_1veh_pd[199];
	c[26] = v[1];

  /***  constraint 28  ***/

	t1 = x[24];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[25];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[26];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[5];
	t1 += x[6];
	t1 += x[7];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[8];
	t1 += x[9];
	t1 += x[10];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[11];
	t1 += x[12];
	t1 += x[13];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[6];
	t1 += x[8];
	t1 += x[12];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[7];
	t1 += x[8];
	t1 += x[12];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[7];
	t1 += x[9];
	t1 += x[12];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[23];
	t1 += x[27];
	t1 += x[28];
	c[36] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[13] = ghg_1veh_pd[1];
	J[86] = x[1]*ghg_1veh_pd[0];
	dv[0] = x[1]*x[16];
	J[0] = -dv[0]*21.6;
	J[26] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -ghg_1veh_pd[33] + 0.346682012779;
	J[79] = -x[0]*0.342091579946 + -1.188971392024;
	J[1] -= ghg_1veh_pd[32];
	J[72] = -x[0]*0.07973036236 + 0.191345333621;
	J[79] -= ghg_1veh_pd[31];
	J[72] -= x[15]*0.057270405947;
	J[1] += 0.655580550098*ghg_1veh_pd[30];
	J[79] += 0.805369774847*ghg_1veh_pd[28];
	J[72] += 0.001028174658*ghg_1veh_pd[26];
	J[1] += ghg_1veh_pd[24];
	J[79] += x[0]*ghg_1veh_pd[23];
	dv[0] = x[0]*x[15];
	J[72] += dv[0]*0.01583097252;
	J[79] += ghg_1veh_pd[22];
	dv[1] = x[15]*0.042739509965;
	J[1] += dv[1]*ghg_1veh_pd[21];
	J[1] += ghg_1veh_pd[19];
	dv[2] = x[0]*0.057118497613;
	J[79] += dv[2]*ghg_1veh_pd[18];
	J[72] -= ghg_1veh_pd[16];
	dv[3] = -x[14]*0.00021201136;
	J[1] += dv[3]*ghg_1veh_pd[15];
	J[1] += ghg_1veh_pd[13];
	dv[4] = x[0]*0.02533808214;
	J[72] += dv[4]*ghg_1veh_pd[12];
	J[72] += ghg_1veh_pd[10];
	dv[5] = x[14]*0.00547943134;
	J[79] += dv[5]*ghg_1veh_pd[9];
	J[79] += ghg_1veh_pd[7];
	dv[6] = x[15]*0.004816150342;
	J[72] += dv[6]*ghg_1veh_pd[6];
	J[1] -= 0.352933730854*ghg_1veh_pd[4];
	J[79] -= 0.154288922601*ghg_1veh_pd[3];
	J[72] -= 0.007852585706*ghg_1veh_pd[2];
	J[14] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -ghg_1veh_pd[65] + -5.837143728557;
	J[80] = -x[0]*2.498376358946 + -9.284846067558;
	J[2] += ghg_1veh_pd[64];
	J[73] = x[0]*3.273526677614 + -2.621894664006;
	J[80] -= ghg_1veh_pd[63];
	J[73] -= x[15]*0.089172114876;
	J[2] += 15.207539664993*ghg_1veh_pd[62];
	J[80] += 6.095001164559*ghg_1veh_pd[60];
	J[73] += 8.905599398536*ghg_1veh_pd[58];
	J[2] += ghg_1veh_pd[56];
	J[80] += x[0]*ghg_1veh_pd[55];
	dv[0] = x[0]*x[15];
	J[73] += dv[0]*0.159429747244;
	J[80] -= ghg_1veh_pd[54];
	dv[1] = -x[15]*0.254008083604;
	J[2] += dv[1]*ghg_1veh_pd[53];
	J[2] += ghg_1veh_pd[51];
	dv[2] = x[0]*0.612567680918;
	J[80] += dv[2]*ghg_1veh_pd[50];
	J[73] -= ghg_1veh_pd[48];
	dv[3] = -x[14]*2.212321055022;
	J[2] += dv[3]*ghg_1veh_pd[47];
	J[2] -= ghg_1veh_pd[45];
	dv[4] = -x[0]*1.561758113326;
	J[73] += dv[4]*ghg_1veh_pd[44];
	J[73] -= ghg_1veh_pd[42];
	dv[5] = -x[14]*0.509578110533;
	J[80] += dv[5]*ghg_1veh_pd[41];
	J[80] += ghg_1veh_pd[39];
	dv[6] = x[15]*0.815241697738;
	J[73] += dv[6]*ghg_1veh_pd[38];
	J[2] -= 5.577874978662*ghg_1veh_pd[36];
	J[80] -= 1.086659693552*ghg_1veh_pd[35];
	J[73] -= 2.21406746341*ghg_1veh_pd[34];
	J[94] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = ghg_1veh_pd[97] + -9.56987912824;
	J[81] = x[0]*32.056936006397 + 54.472915571467;
	J[3] -= ghg_1veh_pd[96];
	J[74] = -x[0]*1.168601192983 + -3.405095041238;
	J[81] -= ghg_1veh_pd[95];
	J[74] -= x[15]*1.153148892739;
	J[3] -= 34.016843490037*ghg_1veh_pd[94];
	J[81] -= 31.478262635483*ghg_1veh_pd[92];
	J[74] += 4.634160849469*ghg_1veh_pd[90];
	J[3] -= ghg_1veh_pd[88];
	J[81] -= x[0]*ghg_1veh_pd[87];
	dv[0] = -x[0]*x[15];
	J[74] += dv[0]*0.336486837518;
	J[81] -= ghg_1veh_pd[86];
	dv[1] = -x[15]*15.609611231641;
	J[3] += dv[1]*ghg_1veh_pd[85];
	J[3] -= ghg_1veh_pd[83];
	dv[2] = -x[0]*2.043536297441;
	J[81] += dv[2]*ghg_1veh_pd[82];
	J[74] += ghg_1veh_pd[80];
	dv[3] = x[14]*0.308107344863;
	J[3] += dv[3]*ghg_1veh_pd[79];
	J[3] += ghg_1veh_pd[77];
	dv[4] = x[0]*1.049763024383;
	J[74] += dv[4]*ghg_1veh_pd[76];
	J[74] += ghg_1veh_pd[74];
	dv[5] = x[14]*0.88119920631;
	J[81] += dv[5]*ghg_1veh_pd[73];
	J[81] -= ghg_1veh_pd[71];
	dv[6] = -x[15]*0.912917970314;
	J[74] += dv[6]*ghg_1veh_pd[70];
	J[3] += 28.456261951645*ghg_1veh_pd[68];
	J[81] += 5.495718264905*ghg_1veh_pd[67];
	J[74] -= 1.456640469666*ghg_1veh_pd[66];
	J[100] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = ghg_1veh_pd[129] + 4.098268423019;
	J[82] = x[0]*30.119438887106 + 26.385308892431;
	J[4] -= ghg_1veh_pd[128];
	J[75] = -x[0]*6.58186092156 + 6.733798415788;
	J[82] -= ghg_1veh_pd[127];
	J[75] -= x[15]*7.900706395772;
	J[4] -= 39.197963873266*ghg_1veh_pd[126];
	J[82] -= 15.80019426934*ghg_1veh_pd[124];
	J[75] += 6.932398033967*ghg_1veh_pd[122];
	J[4] -= ghg_1veh_pd[120];
	J[82] -= x[0]*ghg_1veh_pd[119];
	dv[0] = -x[0]*x[15];
	J[75] += dv[0]*5.808426325827;
	J[82] -= ghg_1veh_pd[118];
	dv[1] = -x[15]*10.308512463418;
	J[4] += dv[1]*ghg_1veh_pd[117];
	J[4] -= ghg_1veh_pd[115];
	dv[2] = -x[0]*1.95072196814;
	J[82] += dv[2]*ghg_1veh_pd[114];
	J[75] += ghg_1veh_pd[112];
	dv[3] = x[14]*10.110726634622;
	J[4] += dv[3]*ghg_1veh_pd[111];
	J[4] += ghg_1veh_pd[109];
	dv[4] = x[0]*0.285910055687;
	J[75] += dv[4]*ghg_1veh_pd[108];
	J[75] += ghg_1veh_pd[106];
	dv[5] = x[14]*3.523622273943;
	J[82] += dv[5]*ghg_1veh_pd[105];
	J[82] -= ghg_1veh_pd[103];
	dv[6] = -x[15]*0.413782262402;
	J[75] += dv[6]*ghg_1veh_pd[102];
	J[4] += 20.256566414583*ghg_1veh_pd[100];
	J[82] += 2.265666208775*ghg_1veh_pd[99];
	J[75] -= 3.334445194766*ghg_1veh_pd[98];
	J[102] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = ghg_1veh_pd[138] + 0.077357069039;
	J[83] = x[0]*0.001017352942 + -0.019484588535;
	J[5] -= ghg_1veh_pd[137];
	J[76] = -x[0]*0.011329651793 + -0.382275988592;
	J[83] -= ghg_1veh_pd[136];
	J[76] -= x[15]*9.4029979e-05;
	J[5] -= 0.04736686635*ghg_1veh_pd[135];
	J[83] += 0.004843420334*ghg_1veh_pd[133];
	J[76] += 0.194075741585*ghg_1veh_pd[131];
	J[104] = 1.;

   /*** derivatives for constraint 7 ***/

	J[27] = ghg_1veh_pd[139];
	dv[0] = ghg_1veh_pd[141]*ghg_1veh_pd[140];
	J[27] -= dv[0]*0.029595;
	J[95] = 1.;

   /*** derivatives for constraint 8 ***/

	J[28] = -ghg_1veh_pd[142]*0.029595;
	J[96] = 1.;

   /*** derivatives for constraint 9 ***/

	J[6] = 0.134723681728774*ghg_1veh_pd[153] + -0.04990711560450505;
	dv[0] = 0.134723681728774*x[0];
	J[84] = dv[0]*0.003423392047 + -0.005158812739471334;
	J[6] -= 0.134723681728774*ghg_1veh_pd[151];
	dv[1] = -0.134723681728774*x[0];
	J[77] = dv[1]*0.008036404292 + -0.013084909485624956;
	J[84] -= 0.134723681728774*ghg_1veh_pd[149];
	dv[2] = -0.134723681728774*x[15];
	J[77] += dv[2]*0.000159410872;
	J[6] -= 0.007128258788429915*ghg_1veh_pd[148];
	J[84] -= 0.0015350673379947695*ghg_1veh_pd[146];
	J[77] -= 0.0013570905974995256*ghg_1veh_pd[144];
	J[18] = 1.;

   /*** derivatives for constraint 10 ***/

	J[7] = -0.134723681728774*ghg_1veh_pd[165] + -0.05387334993533252;
	dv[0] = -0.134723681728774*x[0];
	J[85] = dv[0]*0.00970510229 + -0.010414952435804143;
	J[7] += 0.134723681728774*ghg_1veh_pd[163];
	dv[1] = 0.134723681728774*x[0];
	J[78] = dv[1]*0.03832188467 + 0.11987942521892572;
	J[85] += 0.134723681728774*ghg_1veh_pd[161];
	dv[2] = 0.134723681728774*x[15];
	J[78] += dv[2]*0.01429434551;
	J[7] += 0.0023971231280144373*ghg_1veh_pd[160];
	J[85] += 0.0010737539608762405*ghg_1veh_pd[158];
	J[78] -= 0.06277855284132232*ghg_1veh_pd[156];
	J[22] = 1.;

   /*** derivatives for constraint 11 ***/

	dv[0] = -ghg_1veh_pd[171];
	J[23] = -dv[0]*5187.;
	J[8] = -ghg_1veh_pd[171]*4320.;
	J[29] = -ghg_1veh_pd[170]*ghg_1veh_pd[169];
	dv[1] = -ghg_1veh_pd[170]*x[4];
	dv[2] = dv[1];
	J[23] -= dv[2]*5187.;
	dv[3] = dv[1];
	J[19] = dv[3]*5187.;
	J[15] = dv[1]*ghg_1veh_pd[167];
	J[87] = 1.;

   /*** derivatives for constraint 12 ***/

	J[88] = ghg_1veh_pd[172];
	dv[0] = ghg_1veh_pd[174]*ghg_1veh_pd[173];
	J[88] -= dv[0]*0.029595;
	J[97] = 1.;

   /*** derivatives for constraint 13 ***/

	J[89] = -ghg_1veh_pd[175]*0.029595;
	J[98] = 1.;

   /*** derivatives for constraint 14 ***/

	J[30] = x[5];
	J[34] = x[4];

   /*** derivatives for constraint 15 ***/

	J[31] = x[6];
	J[36] = x[4];

   /*** derivatives for constraint 16 ***/

	J[37] = ghg_1veh_pd[176];
	J[32] = x[6];

   /*** derivatives for constraint 17 ***/

	J[40] = ghg_1veh_pd[177];
	J[33] = x[7];

   /*** derivatives for constraint 18 ***/

	J[90] = ghg_1veh_pd[178];
	J[44] = x[17]*x[12];
	J[59] = x[17]*x[8];

   /*** derivatives for constraint 19 ***/

	J[91] = ghg_1veh_pd[179];
	J[50] = x[17]*x[12];
	J[60] = x[17]*x[9];

   /*** derivatives for constraint 20 ***/

	J[92] = ghg_1veh_pd[180];
	J[51] = ghg_1veh_pd[181]*x[12];
	J[61] = ghg_1veh_pd[181]*x[9];

   /*** derivatives for constraint 21 ***/

	J[93] = ghg_1veh_pd[182];
	J[54] = ghg_1veh_pd[183]*x[12];
	J[62] = ghg_1veh_pd[183]*x[10];

   /*** derivatives for constraint 22 ***/

	J[56] = ghg_1veh_pd[186];
	J[24] = x[11]*ghg_1veh_pd[185];
	dv[0] = x[11]*ghg_1veh_pd[184];
	J[9] = dv[0]*124927.703875072;

   /*** derivatives for constraint 23 ***/

	J[63] = ghg_1veh_pd[189];
	J[25] = x[12]*ghg_1veh_pd[188];
	dv[0] = x[12]*ghg_1veh_pd[187];
	J[10] = dv[0]*124927.703875072;

   /*** derivatives for constraint 24 ***/

	J[64] = ghg_1veh_pd[193];
	dv[0] = -x[12]*ghg_1veh_pd[192];
	dv[1] = -x[12]*ghg_1veh_pd[191];
	dv[2] = dv[0];
	J[20] = dv[2]*0.03458;
	J[16] = dv[0]*ghg_1veh_pd[190];
	J[11] = dv[1]*4320.;

   /*** derivatives for constraint 25 ***/

	J[69] = ghg_1veh_pd[197];
	dv[0] = -x[13]*ghg_1veh_pd[196];
	dv[1] = -x[13]*ghg_1veh_pd[195];
	dv[2] = dv[0];
	J[21] = dv[2]*0.03458;
	J[17] = dv[0]*ghg_1veh_pd[194];
	J[12] = dv[1]*4320.;

   /*** derivatives for constraint 26 ***/

	J[57] = ghg_1veh_pd[198];
	J[45] = x[11];

   /*** derivatives for constraint 27 ***/

	J[70] = ghg_1veh_pd[199];
	J[46] = x[13];

   /*** derivatives for constraint 28 ***/

	J[101] = 1.;

   /*** derivatives for constraint 29 ***/

	J[103] = 1.;

   /*** derivatives for constraint 30 ***/

	J[105] = 1.;

   /*** derivatives for constraint 31 ***/

	J[35] = 1.;
	J[38] = 1.;
	J[41] = 1.;

   /*** derivatives for constraint 32 ***/

	J[47] = 1.;
	J[52] = 1.;
	J[55] = 1.;

   /*** derivatives for constraint 33 ***/

	J[58] = 1.;
	J[65] = 1.;
	J[71] = 1.;

   /*** derivatives for constraint 34 ***/

	J[39] = 1.;
	J[48] = 1.;
	J[66] = 1.;

   /*** derivatives for constraint 35 ***/

	J[42] = 1.;
	J[49] = 1.;
	J[67] = 1.;

   /*** derivatives for constraint 36 ***/

	J[43] = 1.;
	J[53] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 37 ***/

	J[99] = 1.;
	J[106] = 1.;
	J[107] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
