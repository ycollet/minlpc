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
 fint st_rv8_auxcom_[1] = { 0 /* nlc */ };
 fint st_rv8_funcom_[367] = {
	40 /* nvar */,
	1 /* nobj */,
	20 /* ncon */,
	320 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	9,
	17,
	25,
	33,
	41,
	49,
	57,
	65,
	73,
	81,
	89,
	97,
	105,
	113,
	121,
	129,
	137,
	145,
	153,
	161,
	169,
	177,
	185,
	193,
	201,
	209,
	217,
	225,
	233,
	241,
	249,
	257,
	265,
	273,
	281,
	289,
	297,
	305,
	313,
	321,

	/* rownos */
	1,
	2,
	7,
	8,
	9,
	14,
	15,
	20,
	2,
	3,
	8,
	9,
	10,
	15,
	16,
	20,
	3,
	4,
	9,
	10,
	11,
	16,
	17,
	20,
	4,
	5,
	10,
	11,
	12,
	17,
	18,
	20,
	5,
	6,
	11,
	12,
	13,
	18,
	19,
	20,
	1,
	6,
	7,
	12,
	13,
	14,
	19,
	20,
	1,
	2,
	7,
	8,
	13,
	14,
	15,
	20,
	2,
	3,
	8,
	9,
	14,
	15,
	16,
	20,
	3,
	4,
	9,
	10,
	15,
	16,
	17,
	20,
	4,
	5,
	10,
	11,
	16,
	17,
	18,
	20,
	5,
	6,
	11,
	12,
	17,
	18,
	19,
	20,
	1,
	6,
	7,
	12,
	13,
	18,
	19,
	20,
	1,
	2,
	7,
	8,
	13,
	14,
	19,
	20,
	1,
	2,
	3,
	8,
	9,
	14,
	15,
	20,
	2,
	3,
	4,
	9,
	10,
	15,
	16,
	20,
	3,
	4,
	5,
	10,
	11,
	16,
	17,
	20,
	4,
	5,
	6,
	11,
	12,
	17,
	18,
	20,
	5,
	6,
	7,
	12,
	13,
	18,
	19,
	20,
	1,
	6,
	7,
	8,
	13,
	14,
	19,
	20,
	1,
	2,
	7,
	8,
	9,
	14,
	15,
	20,
	2,
	3,
	8,
	9,
	10,
	15,
	16,
	20,
	3,
	4,
	9,
	10,
	11,
	16,
	17,
	20,
	4,
	5,
	10,
	11,
	12,
	17,
	18,
	20,
	5,
	6,
	11,
	12,
	13,
	18,
	19,
	20,
	1,
	6,
	7,
	12,
	13,
	14,
	19,
	20,
	1,
	2,
	7,
	8,
	13,
	14,
	15,
	20,
	2,
	3,
	8,
	9,
	14,
	15,
	16,
	20,
	3,
	4,
	9,
	10,
	15,
	16,
	17,
	20,
	4,
	5,
	10,
	11,
	16,
	17,
	18,
	20,
	5,
	6,
	11,
	12,
	17,
	18,
	19,
	20,
	1,
	6,
	7,
	12,
	13,
	18,
	19,
	20,
	1,
	2,
	7,
	8,
	13,
	14,
	19,
	20,
	1,
	2,
	3,
	8,
	9,
	14,
	15,
	20,
	2,
	3,
	4,
	9,
	10,
	15,
	16,
	20,
	3,
	4,
	5,
	10,
	11,
	16,
	17,
	20,
	4,
	5,
	6,
	11,
	12,
	17,
	18,
	20,
	5,
	6,
	7,
	12,
	13,
	18,
	19,
	20,
	1,
	6,
	7,
	8,
	13,
	14,
	19,
	20,
	1,
	2,
	7,
	8,
	9,
	14,
	15,
	20,
	2,
	3,
	8,
	9,
	10,
	15,
	16,
	20 };

 real st_rv8_boundc_[1+80+40] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		330.,
		-1.7e308,
		425.,
		-1.7e308,
		430.,
		-1.7e308,
		405.,
		-1.7e308,
		355.,
		-1.7e308,
		275.,
		-1.7e308,
		345.,
		-1.7e308,
		345.,
		-1.7e308,
		350.,
		-1.7e308,
		350.,
		-1.7e308,
		345.,
		-1.7e308,
		335.,
		-1.7e308,
		375.,
		-1.7e308,
		380.,
		-1.7e308,
		425.,
		-1.7e308,
		455.,
		-1.7e308,
		365.,
		-1.7e308,
		365.,
		-1.7e308,
		385.,
		-1.7e308,
		400.};

 real st_rv8_x0comn_[40] = {
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

 static real st_rv8_pd[80];
static real st_rv8_old_x[40];
static int st_rv8_xkind = -1;

 static int
st_rv8_xcheck(real *x)
{
	real *x1 = st_rv8_old_x, *xe = x + 40;
	errno = 0;
	if (st_rv8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_rv8_xkind = 0;
	return 1;
	}
 real
st_rv8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_rv8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_rv8_pd[0] = x[0] * x[0];
	st_rv8_pd[1] = x[0] + x[0];
	v[0] = -0.0004 * st_rv8_pd[0];
	st_rv8_pd[2] = x[1] * x[1];
	st_rv8_pd[3] = x[1] + x[1];
	v[1] = -0.00285 * st_rv8_pd[2];
	v[0] += v[1];
	st_rv8_pd[4] = x[2] * x[2];
	st_rv8_pd[5] = x[2] + x[2];
	v[1] = -0.00155 * st_rv8_pd[4];
	v[0] += v[1];
	st_rv8_pd[6] = x[3] * x[3];
	st_rv8_pd[7] = x[3] + x[3];
	v[1] = -0.0038 * st_rv8_pd[6];
	v[0] += v[1];
	st_rv8_pd[8] = x[4] * x[4];
	st_rv8_pd[9] = x[4] + x[4];
	v[1] = -0.0044 * st_rv8_pd[8];
	v[0] += v[1];
	st_rv8_pd[10] = x[5] * x[5];
	st_rv8_pd[11] = x[5] + x[5];
	v[1] = -0.0046 * st_rv8_pd[10];
	v[0] += v[1];
	st_rv8_pd[12] = x[6] * x[6];
	st_rv8_pd[13] = x[6] + x[6];
	v[1] = -0.00085 * st_rv8_pd[12];
	v[0] += v[1];
	st_rv8_pd[14] = x[7] * x[7];
	st_rv8_pd[15] = x[7] + x[7];
	v[1] = -0.00165 * st_rv8_pd[14];
	v[0] += v[1];
	st_rv8_pd[16] = x[8] * x[8];
	st_rv8_pd[17] = x[8] + x[8];
	v[1] = -0.0025 * st_rv8_pd[16];
	v[0] += v[1];
	st_rv8_pd[18] = x[9] * x[9];
	st_rv8_pd[19] = x[9] + x[9];
	v[1] = -0.00385 * st_rv8_pd[18];
	v[0] += v[1];
	st_rv8_pd[20] = x[10] * x[10];
	st_rv8_pd[21] = x[10] + x[10];
	v[1] = -0.00355 * st_rv8_pd[20];
	v[0] += v[1];
	st_rv8_pd[22] = x[11] * x[11];
	st_rv8_pd[23] = x[11] + x[11];
	v[1] = -0.0015 * st_rv8_pd[22];
	v[0] += v[1];
	st_rv8_pd[24] = x[12] * x[12];
	st_rv8_pd[25] = x[12] + x[12];
	v[1] = -0.0037 * st_rv8_pd[24];
	v[0] += v[1];
	st_rv8_pd[26] = x[13] * x[13];
	st_rv8_pd[27] = x[13] + x[13];
	v[1] = -0.00125 * st_rv8_pd[26];
	v[0] += v[1];
	st_rv8_pd[28] = x[14] * x[14];
	st_rv8_pd[29] = x[14] + x[14];
	v[1] = -0.00095 * st_rv8_pd[28];
	v[0] += v[1];
	st_rv8_pd[30] = x[15] * x[15];
	st_rv8_pd[31] = x[15] + x[15];
	v[1] = -0.0048 * st_rv8_pd[30];
	v[0] += v[1];
	st_rv8_pd[32] = x[16] * x[16];
	st_rv8_pd[33] = x[16] + x[16];
	v[1] = -0.0015 * st_rv8_pd[32];
	v[0] += v[1];
	st_rv8_pd[34] = x[17] * x[17];
	st_rv8_pd[35] = x[17] + x[17];
	v[1] = -0.0037 * st_rv8_pd[34];
	v[0] += v[1];
	st_rv8_pd[36] = x[18] * x[18];
	st_rv8_pd[37] = x[18] + x[18];
	v[1] = -0.00125 * st_rv8_pd[36];
	v[0] += v[1];
	st_rv8_pd[38] = x[19] * x[19];
	st_rv8_pd[39] = x[19] + x[19];
	v[1] = -0.00095 * st_rv8_pd[38];
	v[0] += v[1];
	st_rv8_pd[40] = x[20] * x[20];
	st_rv8_pd[41] = x[20] + x[20];
	v[1] = -0.0045 * st_rv8_pd[40];
	v[0] += v[1];
	st_rv8_pd[42] = x[21] * x[21];
	st_rv8_pd[43] = x[21] + x[21];
	v[1] = -0.00245 * st_rv8_pd[42];
	v[0] += v[1];
	st_rv8_pd[44] = x[22] * x[22];
	st_rv8_pd[45] = x[22] + x[22];
	v[1] = -0.0004 * st_rv8_pd[44];
	v[0] += v[1];
	st_rv8_pd[46] = x[23] * x[23];
	st_rv8_pd[47] = x[23] + x[23];
	v[1] = -0.0048 * st_rv8_pd[46];
	v[0] += v[1];
	st_rv8_pd[48] = x[24] * x[24];
	st_rv8_pd[49] = x[24] + x[24];
	v[1] = -0.00485 * st_rv8_pd[48];
	v[0] += v[1];
	st_rv8_pd[50] = x[25] * x[25];
	st_rv8_pd[51] = x[25] + x[25];
	v[1] = -0.00025 * st_rv8_pd[50];
	v[0] += v[1];
	st_rv8_pd[52] = x[26] * x[26];
	st_rv8_pd[53] = x[26] + x[26];
	v[1] = -0.00435 * st_rv8_pd[52];
	v[0] += v[1];
	st_rv8_pd[54] = x[27] * x[27];
	st_rv8_pd[55] = x[27] + x[27];
	v[1] = -0.00365 * st_rv8_pd[54];
	v[0] += v[1];
	st_rv8_pd[56] = x[28] * x[28];
	st_rv8_pd[57] = x[28] + x[28];
	v[1] = -0.0002 * st_rv8_pd[56];
	v[0] += v[1];
	st_rv8_pd[58] = x[29] * x[29];
	st_rv8_pd[59] = x[29] + x[29];
	v[1] = -0.00205 * st_rv8_pd[58];
	v[0] += v[1];
	st_rv8_pd[60] = x[30] * x[30];
	st_rv8_pd[61] = x[30] + x[30];
	v[1] = -0.00165 * st_rv8_pd[60];
	v[0] += v[1];
	st_rv8_pd[62] = x[31] * x[31];
	st_rv8_pd[63] = x[31] + x[31];
	v[1] = -0.00175 * st_rv8_pd[62];
	v[0] += v[1];
	st_rv8_pd[64] = x[32] * x[32];
	st_rv8_pd[65] = x[32] + x[32];
	v[1] = -0.0048 * st_rv8_pd[64];
	v[0] += v[1];
	st_rv8_pd[66] = x[33] * x[33];
	st_rv8_pd[67] = x[33] + x[33];
	v[1] = -5.e-05 * st_rv8_pd[66];
	v[0] += v[1];
	st_rv8_pd[68] = x[34] * x[34];
	st_rv8_pd[69] = x[34] + x[34];
	v[1] = -0.00155 * st_rv8_pd[68];
	v[0] += v[1];
	st_rv8_pd[70] = x[35] * x[35];
	st_rv8_pd[71] = x[35] + x[35];
	v[1] = -0.00015 * st_rv8_pd[70];
	v[0] += v[1];
	st_rv8_pd[72] = x[36] * x[36];
	st_rv8_pd[73] = x[36] + x[36];
	v[1] = -0.00245 * st_rv8_pd[72];
	v[0] += v[1];
	st_rv8_pd[74] = x[37] * x[37];
	st_rv8_pd[75] = x[37] + x[37];
	v[1] = -0.00095 * st_rv8_pd[74];
	v[0] += v[1];
	st_rv8_pd[76] = x[38] * x[38];
	st_rv8_pd[77] = x[38] + x[38];
	v[1] = -0.0038 * st_rv8_pd[76];
	v[0] += v[1];
	st_rv8_pd[78] = x[39] * x[39];
	st_rv8_pd[79] = x[39] + x[39];
	v[1] = -0.0029 * st_rv8_pd[78];
	v[0] += v[1];
	rv = v[0] + -0.0384*x[0];
	rv += -0.3876*x[1];
	rv += -0.1116*x[2];
	rv += -0.4636*x[3];
	rv += -0.044*x[4];
	rv += -0.3588*x[5];
	rv += -0.0272*x[6];
	rv += -0.231*x[7];
	rv += -0.27*x[8];
	rv += -0.308*x[9];
	rv += -0.3692*x[10];
	rv += -0.288*x[11];
	rv += -0.407*x[12];
	rv += -0.1175*x[13];
	rv += -0.1045*x[14];
	rv += -0.1632*x[15];
	rv += -0.135*x[16];
	rv += -0.0666*x[17];
	rv += -0.21*x[18];
	rv += -0.1425*x[19];
	rv += -0.882*x[20];
	rv += -0.3283*x[21];
	rv += -0.0648*x[22];
	rv += -0.0864*x[23];
	rv += -0.4753*x[24];
	rv += -0.046*x[25];
	rv += -0.7917*x[26];
	rv += -0.7008*x[27];
	rv += -0.0384*x[28];
	rv += -0.0164*x[29];
	rv += -0.0891*x[30];
	rv += -0.0945*x[31];
	rv += -0.7296*x[32];
	rv += -0.0023*x[33];
	rv += -0.1488*x[34];
	rv += -0.0189*x[35];
	rv += -0.0343*x[36];
	rv += -0.1045*x[37];
	rv += -0.608*x[38];
	rv += -0.0174*x[39];
	;}

	if (wantfg & 2) {
	g[39] = -0.0029*st_rv8_pd[79] + -0.0174;
	g[38] = -0.0038*st_rv8_pd[77] + -0.608;
	g[37] = -0.00095*st_rv8_pd[75] + -0.1045;
	g[36] = -0.00245*st_rv8_pd[73] + -0.0343;
	g[35] = -0.00015*st_rv8_pd[71] + -0.0189;
	g[34] = -0.00155*st_rv8_pd[69] + -0.1488;
	g[33] = -5.e-05*st_rv8_pd[67] + -0.0023;
	g[32] = -0.0048*st_rv8_pd[65] + -0.7296;
	g[31] = -0.00175*st_rv8_pd[63] + -0.0945;
	g[30] = -0.00165*st_rv8_pd[61] + -0.0891;
	g[29] = -0.00205*st_rv8_pd[59] + -0.0164;
	g[28] = -0.0002*st_rv8_pd[57] + -0.0384;
	g[27] = -0.00365*st_rv8_pd[55] + -0.7008;
	g[26] = -0.00435*st_rv8_pd[53] + -0.7917;
	g[25] = -0.00025*st_rv8_pd[51] + -0.046;
	g[24] = -0.00485*st_rv8_pd[49] + -0.4753;
	g[23] = -0.0048*st_rv8_pd[47] + -0.0864;
	g[22] = -0.0004*st_rv8_pd[45] + -0.0648;
	g[21] = -0.00245*st_rv8_pd[43] + -0.3283;
	g[20] = -0.0045*st_rv8_pd[41] + -0.882;
	g[19] = -0.00095*st_rv8_pd[39] + -0.1425;
	g[18] = -0.00125*st_rv8_pd[37] + -0.21;
	g[17] = -0.0037*st_rv8_pd[35] + -0.0666;
	g[16] = -0.0015*st_rv8_pd[33] + -0.135;
	g[15] = -0.0048*st_rv8_pd[31] + -0.1632;
	g[14] = -0.00095*st_rv8_pd[29] + -0.1045;
	g[13] = -0.00125*st_rv8_pd[27] + -0.1175;
	g[12] = -0.0037*st_rv8_pd[25] + -0.407;
	g[11] = -0.0015*st_rv8_pd[23] + -0.288;
	g[10] = -0.00355*st_rv8_pd[21] + -0.3692;
	g[9] = -0.00385*st_rv8_pd[19] + -0.308;
	g[8] = -0.0025*st_rv8_pd[17] + -0.27;
	g[7] = -0.00165*st_rv8_pd[15] + -0.231;
	g[6] = -0.00085*st_rv8_pd[13] + -0.0272;
	g[5] = -0.0046*st_rv8_pd[11] + -0.3588;
	g[4] = -0.0044*st_rv8_pd[9] + -0.044;
	g[3] = -0.0038*st_rv8_pd[7] + -0.4636;
	g[2] = -0.00155*st_rv8_pd[5] + -0.1116;
	g[1] = -0.00285*st_rv8_pd[3] + -0.3876;
	g[0] = -0.0004*st_rv8_pd[1] + -0.0384;
	}

	return rv;
}

 void
st_rv8_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_rv8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 7.*x[0];
	t1 += 4.*x[5];
	t1 += 7.*x[6];
	t1 += 6.*x[11];
	t1 += 9.*x[12];
	t1 += 2.*x[13];
	t1 += x[18];
	t1 += 5.*x[19];
	t1 += x[24];
	t1 += 5.*x[25];
	t1 += 3.*x[30];
	t1 += 9.*x[31];
	t1 += 5.*x[32];
	t1 += x[37];
	t1 += x[38];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 4.*x[0];
	t1 += 7.*x[1];
	t1 += 7.*x[6];
	t1 += 8.*x[7];
	t1 += 9.*x[12];
	t1 += 3.*x[13];
	t1 += 6.*x[14];
	t1 += 2.*x[19];
	t1 += 6.*x[20];
	t1 += 5.*x[25];
	t1 += 3.*x[26];
	t1 += 4.*x[31];
	t1 += 6.*x[32];
	t1 += 6.*x[33];
	t1 += 6.*x[38];
	t1 += 3.*x[39];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[1];
	t1 += 6.*x[2];
	t1 += 8.*x[7];
	t1 += 7.*x[8];
	t1 += 9.*x[13];
	t1 += 8.*x[14];
	t1 += 8.*x[15];
	t1 += 6.*x[20];
	t1 += 5.*x[21];
	t1 += 4.*x[26];
	t1 += 2.*x[27];
	t1 += 4.*x[32];
	t1 += 7.*x[33];
	t1 += 9.*x[34];
	t1 += 2.*x[39];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[2];
	t1 += 5.*x[3];
	t1 += 9.*x[8];
	t1 += 6.*x[9];
	t1 += 4.*x[14];
	t1 += 9.*x[15];
	t1 += 6.*x[16];
	t1 += 7.*x[21];
	t1 += 9.*x[22];
	t1 += 8.*x[27];
	t1 += 3.*x[28];
	t1 += 7.*x[33];
	t1 += 4.*x[34];
	t1 += 3.*x[35];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 4.*x[3];
	t1 += 7.*x[4];
	t1 += 3.*x[9];
	t1 += 6.*x[10];
	t1 += 2.*x[15];
	t1 += 8.*x[16];
	t1 += 5.*x[17];
	t1 += 2.*x[22];
	t1 += 9.*x[23];
	t1 += 6.*x[28];
	t1 += 4.*x[29];
	t1 += 3.*x[34];
	t1 += 6.*x[35];
	t1 += 6.*x[36];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 5.*x[4];
	t1 += 5.*x[5];
	t1 += 7.*x[10];
	t1 += 4.*x[11];
	t1 += 4.*x[16];
	t1 += 6.*x[17];
	t1 += 2.*x[18];
	t1 += 4.*x[23];
	t1 += 2.*x[24];
	t1 += x[29];
	t1 += 4.*x[30];
	t1 += 4.*x[35];
	t1 += 3.*x[36];
	t1 += 4.*x[37];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 2.*x[0];
	t1 += 3.*x[5];
	t1 += 3.*x[6];
	t1 += 5.*x[11];
	t1 += 9.*x[12];
	t1 += 9.*x[17];
	t1 += x[18];
	t1 += 4.*x[19];
	t1 += 6.*x[24];
	t1 += 5.*x[25];
	t1 += 3.*x[30];
	t1 += 7.*x[31];
	t1 += 3.*x[36];
	t1 += 5.*x[37];
	t1 += 4.*x[38];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 9.*x[0];
	t1 += 7.*x[1];
	t1 += 3.*x[6];
	t1 += 6.*x[7];
	t1 += 7.*x[12];
	t1 += 2.*x[13];
	t1 += x[18];
	t1 += x[19];
	t1 += 4.*x[20];
	t1 += 5.*x[25];
	t1 += 2.*x[26];
	t1 += 6.*x[31];
	t1 += 5.*x[32];
	t1 += 4.*x[37];
	t1 += 4.*x[38];
	t1 += 3.*x[39];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 6.*x[0];
	t1 += 3.*x[1];
	t1 += 4.*x[2];
	t1 += 2.*x[7];
	t1 += 7.*x[8];
	t1 += 3.*x[13];
	t1 += 7.*x[14];
	t1 += 2.*x[19];
	t1 += 3.*x[20];
	t1 += 2.*x[21];
	t1 += 6.*x[26];
	t1 += x[27];
	t1 += 6.*x[32];
	t1 += 7.*x[33];
	t1 += 9.*x[38];
	t1 += 2.*x[39];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 2.*x[1];
	t1 += 8.*x[2];
	t1 += 9.*x[3];
	t1 += x[8];
	t1 += x[9];
	t1 += 6.*x[14];
	t1 += x[15];
	t1 += 6.*x[20];
	t1 += 7.*x[21];
	t1 += 6.*x[22];
	t1 += 3.*x[27];
	t1 += 2.*x[28];
	t1 += 7.*x[33];
	t1 += 6.*x[34];
	t1 += 5.*x[39];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 3.*x[2];
	t1 += 6.*x[3];
	t1 += 5.*x[4];
	t1 += 6.*x[9];
	t1 += 5.*x[10];
	t1 += 8.*x[15];
	t1 += 9.*x[16];
	t1 += 6.*x[21];
	t1 += 4.*x[22];
	t1 += x[23];
	t1 += 5.*x[28];
	t1 += 2.*x[29];
	t1 += 5.*x[34];
	t1 += 4.*x[35];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 3.*x[3];
	t1 += 3.*x[4];
	t1 += 9.*x[5];
	t1 += 3.*x[10];
	t1 += 8.*x[11];
	t1 += 9.*x[16];
	t1 += 4.*x[17];
	t1 += 4.*x[22];
	t1 += 3.*x[23];
	t1 += 6.*x[24];
	t1 += 6.*x[29];
	t1 += x[30];
	t1 += 6.*x[35];
	t1 += 2.*x[36];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 8.*x[4];
	t1 += 2.*x[5];
	t1 += 4.*x[6];
	t1 += 8.*x[11];
	t1 += 9.*x[12];
	t1 += 3.*x[17];
	t1 += 8.*x[18];
	t1 += x[23];
	t1 += 8.*x[24];
	t1 += 8.*x[25];
	t1 += 3.*x[30];
	t1 += x[31];
	t1 += 5.*x[36];
	t1 += 7.*x[37];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[0];
	t1 += 9.*x[5];
	t1 += x[6];
	t1 += 4.*x[7];
	t1 += 9.*x[12];
	t1 += 6.*x[13];
	t1 += 6.*x[18];
	t1 += 7.*x[19];
	t1 += x[24];
	t1 += 5.*x[25];
	t1 += 7.*x[26];
	t1 += x[31];
	t1 += 8.*x[32];
	t1 += 9.*x[37];
	t1 += 2.*x[38];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 3.*x[0];
	t1 += 9.*x[1];
	t1 += 4.*x[6];
	t1 += 2.*x[7];
	t1 += x[8];
	t1 += 3.*x[13];
	t1 += 9.*x[14];
	t1 += 7.*x[19];
	t1 += 7.*x[20];
	t1 += 8.*x[25];
	t1 += 7.*x[26];
	t1 += 5.*x[27];
	t1 += 4.*x[32];
	t1 += x[33];
	t1 += 6.*x[38];
	t1 += 9.*x[39];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 9.*x[1];
	t1 += 6.*x[2];
	t1 += 9.*x[7];
	t1 += 5.*x[8];
	t1 += 6.*x[9];
	t1 += 6.*x[14];
	t1 += 9.*x[15];
	t1 += 5.*x[20];
	t1 += 7.*x[21];
	t1 += 8.*x[26];
	t1 += 7.*x[27];
	t1 += x[28];
	t1 += x[33];
	t1 += 8.*x[34];
	t1 += 4.*x[39];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = 9.*x[2];
	t1 += 9.*x[3];
	t1 += 4.*x[8];
	t1 += 2.*x[9];
	t1 += 7.*x[10];
	t1 += 4.*x[15];
	t1 += 8.*x[16];
	t1 += 3.*x[21];
	t1 += 2.*x[22];
	t1 += 2.*x[27];
	t1 += 7.*x[28];
	t1 += 3.*x[29];
	t1 += 4.*x[34];
	t1 += 9.*x[35];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 5.*x[3];
	t1 += 6.*x[4];
	t1 += 8.*x[9];
	t1 += 9.*x[10];
	t1 += 6.*x[11];
	t1 += 6.*x[16];
	t1 += 4.*x[17];
	t1 += 3.*x[22];
	t1 += 3.*x[23];
	t1 += x[28];
	t1 += 9.*x[29];
	t1 += 2.*x[30];
	t1 += 4.*x[35];
	t1 += 7.*x[36];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = 5.*x[4];
	t1 += 7.*x[5];
	t1 += 2.*x[10];
	t1 += 8.*x[11];
	t1 += x[12];
	t1 += 9.*x[17];
	t1 += 8.*x[18];
	t1 += 6.*x[23];
	t1 += x[24];
	t1 += 4.*x[29];
	t1 += 9.*x[30];
	t1 += 7.*x[31];
	t1 += 4.*x[36];
	t1 += 6.*x[37];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
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
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[19] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 7.;
	J[40] = 4.;
	J[48] = 7.;
	J[88] = 6.;
	J[96] = 9.;
	J[104] = 2.;
	J[144] = 1.;
	J[152] = 5.;
	J[192] = 1.;
	J[200] = 5.;
	J[240] = 3.;
	J[248] = 9.;
	J[256] = 5.;
	J[296] = 1.;
	J[304] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 4.;
	J[8] = 7.;
	J[49] = 7.;
	J[56] = 8.;
	J[97] = 9.;
	J[105] = 3.;
	J[112] = 6.;
	J[153] = 2.;
	J[160] = 6.;
	J[201] = 5.;
	J[208] = 3.;
	J[249] = 4.;
	J[257] = 6.;
	J[264] = 6.;
	J[305] = 6.;
	J[312] = 3.;

   /*** derivatives for constraint 3 ***/

	J[9] = 1.;
	J[16] = 6.;
	J[57] = 8.;
	J[64] = 7.;
	J[106] = 9.;
	J[113] = 8.;
	J[120] = 8.;
	J[161] = 6.;
	J[168] = 5.;
	J[209] = 4.;
	J[216] = 2.;
	J[258] = 4.;
	J[265] = 7.;
	J[272] = 9.;
	J[313] = 2.;

   /*** derivatives for constraint 4 ***/

	J[17] = 1.;
	J[24] = 5.;
	J[65] = 9.;
	J[72] = 6.;
	J[114] = 4.;
	J[121] = 9.;
	J[128] = 6.;
	J[169] = 7.;
	J[176] = 9.;
	J[217] = 8.;
	J[224] = 3.;
	J[266] = 7.;
	J[273] = 4.;
	J[280] = 3.;

   /*** derivatives for constraint 5 ***/

	J[25] = 4.;
	J[32] = 7.;
	J[73] = 3.;
	J[80] = 6.;
	J[122] = 2.;
	J[129] = 8.;
	J[136] = 5.;
	J[177] = 2.;
	J[184] = 9.;
	J[225] = 6.;
	J[232] = 4.;
	J[274] = 3.;
	J[281] = 6.;
	J[288] = 6.;

   /*** derivatives for constraint 6 ***/

	J[33] = 5.;
	J[41] = 5.;
	J[81] = 7.;
	J[89] = 4.;
	J[130] = 4.;
	J[137] = 6.;
	J[145] = 2.;
	J[185] = 4.;
	J[193] = 2.;
	J[233] = 1.;
	J[241] = 4.;
	J[282] = 4.;
	J[289] = 3.;
	J[297] = 4.;

   /*** derivatives for constraint 7 ***/

	J[2] = 2.;
	J[42] = 3.;
	J[50] = 3.;
	J[90] = 5.;
	J[98] = 9.;
	J[138] = 9.;
	J[146] = 1.;
	J[154] = 4.;
	J[194] = 6.;
	J[202] = 5.;
	J[242] = 3.;
	J[250] = 7.;
	J[290] = 3.;
	J[298] = 5.;
	J[306] = 4.;

   /*** derivatives for constraint 8 ***/

	J[3] = 9.;
	J[10] = 7.;
	J[51] = 3.;
	J[58] = 6.;
	J[99] = 7.;
	J[107] = 2.;
	J[147] = 1.;
	J[155] = 1.;
	J[162] = 4.;
	J[203] = 5.;
	J[210] = 2.;
	J[251] = 6.;
	J[259] = 5.;
	J[299] = 4.;
	J[307] = 4.;
	J[314] = 3.;

   /*** derivatives for constraint 9 ***/

	J[4] = 6.;
	J[11] = 3.;
	J[18] = 4.;
	J[59] = 2.;
	J[66] = 7.;
	J[108] = 3.;
	J[115] = 7.;
	J[156] = 2.;
	J[163] = 3.;
	J[170] = 2.;
	J[211] = 6.;
	J[218] = 1.;
	J[260] = 6.;
	J[267] = 7.;
	J[308] = 9.;
	J[315] = 2.;

   /*** derivatives for constraint 10 ***/

	J[12] = 2.;
	J[19] = 8.;
	J[26] = 9.;
	J[67] = 1.;
	J[74] = 1.;
	J[116] = 6.;
	J[123] = 1.;
	J[164] = 6.;
	J[171] = 7.;
	J[178] = 6.;
	J[219] = 3.;
	J[226] = 2.;
	J[268] = 7.;
	J[275] = 6.;
	J[316] = 5.;

   /*** derivatives for constraint 11 ***/

	J[20] = 3.;
	J[27] = 6.;
	J[34] = 5.;
	J[75] = 6.;
	J[82] = 5.;
	J[124] = 8.;
	J[131] = 9.;
	J[172] = 6.;
	J[179] = 4.;
	J[186] = 1.;
	J[227] = 5.;
	J[234] = 2.;
	J[276] = 5.;
	J[283] = 4.;

   /*** derivatives for constraint 12 ***/

	J[28] = 3.;
	J[35] = 3.;
	J[43] = 9.;
	J[83] = 3.;
	J[91] = 8.;
	J[132] = 9.;
	J[139] = 4.;
	J[180] = 4.;
	J[187] = 3.;
	J[195] = 6.;
	J[235] = 6.;
	J[243] = 1.;
	J[284] = 6.;
	J[291] = 2.;

   /*** derivatives for constraint 13 ***/

	J[36] = 8.;
	J[44] = 2.;
	J[52] = 4.;
	J[92] = 8.;
	J[100] = 9.;
	J[140] = 3.;
	J[148] = 8.;
	J[188] = 1.;
	J[196] = 8.;
	J[204] = 8.;
	J[244] = 3.;
	J[252] = 1.;
	J[292] = 5.;
	J[300] = 7.;

   /*** derivatives for constraint 14 ***/

	J[5] = 1.;
	J[45] = 9.;
	J[53] = 1.;
	J[60] = 4.;
	J[101] = 9.;
	J[109] = 6.;
	J[149] = 6.;
	J[157] = 7.;
	J[197] = 1.;
	J[205] = 5.;
	J[212] = 7.;
	J[253] = 1.;
	J[261] = 8.;
	J[301] = 9.;
	J[309] = 2.;

   /*** derivatives for constraint 15 ***/

	J[6] = 3.;
	J[13] = 9.;
	J[54] = 4.;
	J[61] = 2.;
	J[68] = 1.;
	J[110] = 3.;
	J[117] = 9.;
	J[158] = 7.;
	J[165] = 7.;
	J[206] = 8.;
	J[213] = 7.;
	J[220] = 5.;
	J[262] = 4.;
	J[269] = 1.;
	J[310] = 6.;
	J[317] = 9.;

   /*** derivatives for constraint 16 ***/

	J[14] = 9.;
	J[21] = 6.;
	J[62] = 9.;
	J[69] = 5.;
	J[76] = 6.;
	J[118] = 6.;
	J[125] = 9.;
	J[166] = 5.;
	J[173] = 7.;
	J[214] = 8.;
	J[221] = 7.;
	J[228] = 1.;
	J[270] = 1.;
	J[277] = 8.;
	J[318] = 4.;

   /*** derivatives for constraint 17 ***/

	J[22] = 9.;
	J[29] = 9.;
	J[70] = 4.;
	J[77] = 2.;
	J[84] = 7.;
	J[126] = 4.;
	J[133] = 8.;
	J[174] = 3.;
	J[181] = 2.;
	J[222] = 2.;
	J[229] = 7.;
	J[236] = 3.;
	J[278] = 4.;
	J[285] = 9.;

   /*** derivatives for constraint 18 ***/

	J[30] = 5.;
	J[37] = 6.;
	J[78] = 8.;
	J[85] = 9.;
	J[93] = 6.;
	J[134] = 6.;
	J[141] = 4.;
	J[182] = 3.;
	J[189] = 3.;
	J[230] = 1.;
	J[237] = 9.;
	J[245] = 2.;
	J[286] = 4.;
	J[293] = 7.;

   /*** derivatives for constraint 19 ***/

	J[38] = 5.;
	J[46] = 7.;
	J[86] = 2.;
	J[94] = 8.;
	J[102] = 1.;
	J[142] = 9.;
	J[150] = 8.;
	J[190] = 6.;
	J[198] = 1.;
	J[238] = 4.;
	J[246] = 9.;
	J[254] = 7.;
	J[294] = 4.;
	J[302] = 6.;

   /*** derivatives for constraint 20 ***/

	J[7] = 1.;
	J[15] = 1.;
	J[23] = 1.;
	J[31] = 1.;
	J[39] = 1.;
	J[47] = 1.;
	J[55] = 1.;
	J[63] = 1.;
	J[71] = 1.;
	J[79] = 1.;
	J[87] = 1.;
	J[95] = 1.;
	J[103] = 1.;
	J[111] = 1.;
	J[119] = 1.;
	J[127] = 1.;
	J[135] = 1.;
	J[143] = 1.;
	J[151] = 1.;
	J[159] = 1.;
	J[167] = 1.;
	J[175] = 1.;
	J[183] = 1.;
	J[191] = 1.;
	J[199] = 1.;
	J[207] = 1.;
	J[215] = 1.;
	J[223] = 1.;
	J[231] = 1.;
	J[239] = 1.;
	J[247] = 1.;
	J[255] = 1.;
	J[263] = 1.;
	J[271] = 1.;
	J[279] = 1.;
	J[287] = 1.;
	J[295] = 1.;
	J[303] = 1.;
	J[311] = 1.;
	J[319] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
