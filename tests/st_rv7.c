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
 fint st_rv7_auxcom_[1] = { 0 /* nlc */ };
 fint st_rv7_funcom_[277] = {
	30 /* nvar */,
	1 /* nobj */,
	20 /* ncon */,
	240 /* nzc */,
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
	20 };

 real st_rv7_boundc_[1+60+40] /* Infinity, variable bounds, constraint bounds */ = {
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
		425.,
		-1.7e308,
		450.,
		-1.7e308,
		380.,
		-1.7e308,
		415.,
		-1.7e308,
		360.,
		-1.7e308,
		365.,
		-1.7e308,
		300.,
		-1.7e308,
		370.,
		-1.7e308,
		370.,
		-1.7e308,
		320.,
		-1.7e308,
		330.,
		-1.7e308,
		325.,
		-1.7e308,
		285.,
		-1.7e308,
		425.,
		-1.7e308,
		335.,
		-1.7e308,
		415.,
		-1.7e308,
		390.,
		-1.7e308,
		410.,
		-1.7e308,
		370.,
		-1.7e308,
		400.};

 real st_rv7_x0comn_[30] = {
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

 static real st_rv7_pd[60];
static real st_rv7_old_x[30];
static int st_rv7_xkind = -1;

 static int
st_rv7_xcheck(real *x)
{
	real *x1 = st_rv7_old_x, *xe = x + 30;
	errno = 0;
	if (st_rv7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_rv7_xkind = 0;
	return 1;
	}
 real
st_rv7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_rv7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_rv7_pd[0] = x[0] * x[0];
	st_rv7_pd[1] = x[0] + x[0];
	v[0] = -0.00165 * st_rv7_pd[0];
	st_rv7_pd[2] = x[1] * x[1];
	st_rv7_pd[3] = x[1] + x[1];
	v[1] = -0.0004 * st_rv7_pd[2];
	v[0] += v[1];
	st_rv7_pd[4] = x[2] * x[2];
	st_rv7_pd[5] = x[2] + x[2];
	v[1] = -0.00285 * st_rv7_pd[4];
	v[0] += v[1];
	st_rv7_pd[6] = x[3] * x[3];
	st_rv7_pd[7] = x[3] + x[3];
	v[1] = -0.00155 * st_rv7_pd[6];
	v[0] += v[1];
	st_rv7_pd[8] = x[4] * x[4];
	st_rv7_pd[9] = x[4] + x[4];
	v[1] = -0.0038 * st_rv7_pd[8];
	v[0] += v[1];
	st_rv7_pd[10] = x[5] * x[5];
	st_rv7_pd[11] = x[5] + x[5];
	v[1] = -0.0044 * st_rv7_pd[10];
	v[0] += v[1];
	st_rv7_pd[12] = x[6] * x[6];
	st_rv7_pd[13] = x[6] + x[6];
	v[1] = -0.0046 * st_rv7_pd[12];
	v[0] += v[1];
	st_rv7_pd[14] = x[7] * x[7];
	st_rv7_pd[15] = x[7] + x[7];
	v[1] = -0.00085 * st_rv7_pd[14];
	v[0] += v[1];
	st_rv7_pd[16] = x[8] * x[8];
	st_rv7_pd[17] = x[8] + x[8];
	v[1] = -0.00165 * st_rv7_pd[16];
	v[0] += v[1];
	st_rv7_pd[18] = x[9] * x[9];
	st_rv7_pd[19] = x[9] + x[9];
	v[1] = -0.0025 * st_rv7_pd[18];
	v[0] += v[1];
	st_rv7_pd[20] = x[10] * x[10];
	st_rv7_pd[21] = x[10] + x[10];
	v[1] = -0.00385 * st_rv7_pd[20];
	v[0] += v[1];
	st_rv7_pd[22] = x[11] * x[11];
	st_rv7_pd[23] = x[11] + x[11];
	v[1] = -0.00355 * st_rv7_pd[22];
	v[0] += v[1];
	st_rv7_pd[24] = x[12] * x[12];
	st_rv7_pd[25] = x[12] + x[12];
	v[1] = -0.0015 * st_rv7_pd[24];
	v[0] += v[1];
	st_rv7_pd[26] = x[13] * x[13];
	st_rv7_pd[27] = x[13] + x[13];
	v[1] = -0.0037 * st_rv7_pd[26];
	v[0] += v[1];
	st_rv7_pd[28] = x[14] * x[14];
	st_rv7_pd[29] = x[14] + x[14];
	v[1] = -0.00125 * st_rv7_pd[28];
	v[0] += v[1];
	st_rv7_pd[30] = x[15] * x[15];
	st_rv7_pd[31] = x[15] + x[15];
	v[1] = -0.00095 * st_rv7_pd[30];
	v[0] += v[1];
	st_rv7_pd[32] = x[16] * x[16];
	st_rv7_pd[33] = x[16] + x[16];
	v[1] = -0.0048 * st_rv7_pd[32];
	v[0] += v[1];
	st_rv7_pd[34] = x[17] * x[17];
	st_rv7_pd[35] = x[17] + x[17];
	v[1] = -0.0015 * st_rv7_pd[34];
	v[0] += v[1];
	st_rv7_pd[36] = x[18] * x[18];
	st_rv7_pd[37] = x[18] + x[18];
	v[1] = -0.0048 * st_rv7_pd[36];
	v[0] += v[1];
	st_rv7_pd[38] = x[19] * x[19];
	st_rv7_pd[39] = x[19] + x[19];
	v[1] = -0.0007 * st_rv7_pd[38];
	v[0] += v[1];
	st_rv7_pd[40] = x[20] * x[20];
	st_rv7_pd[41] = x[20] + x[20];
	v[1] = -0.0043 * st_rv7_pd[40];
	v[0] += v[1];
	st_rv7_pd[42] = x[21] * x[21];
	st_rv7_pd[43] = x[21] + x[21];
	v[1] = -0.0045 * st_rv7_pd[42];
	v[0] += v[1];
	st_rv7_pd[44] = x[22] * x[22];
	st_rv7_pd[45] = x[22] + x[22];
	v[1] = -0.00245 * st_rv7_pd[44];
	v[0] += v[1];
	st_rv7_pd[46] = x[23] * x[23];
	st_rv7_pd[47] = x[23] + x[23];
	v[1] = -0.0004 * st_rv7_pd[46];
	v[0] += v[1];
	st_rv7_pd[48] = x[24] * x[24];
	st_rv7_pd[49] = x[24] + x[24];
	v[1] = -0.0048 * st_rv7_pd[48];
	v[0] += v[1];
	st_rv7_pd[50] = x[25] * x[25];
	st_rv7_pd[51] = x[25] + x[25];
	v[1] = -0.00485 * st_rv7_pd[50];
	v[0] += v[1];
	st_rv7_pd[52] = x[26] * x[26];
	st_rv7_pd[53] = x[26] + x[26];
	v[1] = -0.00025 * st_rv7_pd[52];
	v[0] += v[1];
	st_rv7_pd[54] = x[27] * x[27];
	st_rv7_pd[55] = x[27] + x[27];
	v[1] = -0.00435 * st_rv7_pd[54];
	v[0] += v[1];
	st_rv7_pd[56] = x[28] * x[28];
	st_rv7_pd[57] = x[28] + x[28];
	v[1] = -0.00365 * st_rv7_pd[56];
	v[0] += v[1];
	st_rv7_pd[58] = x[29] * x[29];
	st_rv7_pd[59] = x[29] + x[29];
	v[1] = -0.0002 * st_rv7_pd[58];
	v[0] += v[1];
	rv = v[0] + -0.1914*x[0];
	rv += -0.0384*x[1];
	rv += -0.3876*x[2];
	rv += -0.1116*x[3];
	rv += -0.4636*x[4];
	rv += -0.044*x[5];
	rv += -0.3588*x[6];
	rv += -0.0272*x[7];
	rv += -0.231*x[8];
	rv += -0.27*x[9];
	rv += -0.308*x[10];
	rv += -0.3692*x[11];
	rv += -0.288*x[12];
	rv += -0.407*x[13];
	rv += -0.1175*x[14];
	rv += -0.1045*x[15];
	rv += -0.1632*x[16];
	rv += -0.135*x[17];
	rv += -0.0864*x[18];
	rv += -0.1176*x[19];
	rv += -0.645*x[20];
	rv += -0.882*x[21];
	rv += -0.3283*x[22];
	rv += -0.0648*x[23];
	rv += -0.0864*x[24];
	rv += -0.4753*x[25];
	rv += -0.046*x[26];
	rv += -0.7917*x[27];
	rv += -0.7008*x[28];
	rv += -0.0384*x[29];
	;}

	if (wantfg & 2) {
	g[29] = -0.0002*st_rv7_pd[59] + -0.0384;
	g[28] = -0.00365*st_rv7_pd[57] + -0.7008;
	g[27] = -0.00435*st_rv7_pd[55] + -0.7917;
	g[26] = -0.00025*st_rv7_pd[53] + -0.046;
	g[25] = -0.00485*st_rv7_pd[51] + -0.4753;
	g[24] = -0.0048*st_rv7_pd[49] + -0.0864;
	g[23] = -0.0004*st_rv7_pd[47] + -0.0648;
	g[22] = -0.00245*st_rv7_pd[45] + -0.3283;
	g[21] = -0.0045*st_rv7_pd[43] + -0.882;
	g[20] = -0.0043*st_rv7_pd[41] + -0.645;
	g[19] = -0.0007*st_rv7_pd[39] + -0.1176;
	g[18] = -0.0048*st_rv7_pd[37] + -0.0864;
	g[17] = -0.0015*st_rv7_pd[35] + -0.135;
	g[16] = -0.0048*st_rv7_pd[33] + -0.1632;
	g[15] = -0.00095*st_rv7_pd[31] + -0.1045;
	g[14] = -0.00125*st_rv7_pd[29] + -0.1175;
	g[13] = -0.0037*st_rv7_pd[27] + -0.407;
	g[12] = -0.0015*st_rv7_pd[25] + -0.288;
	g[11] = -0.00355*st_rv7_pd[23] + -0.3692;
	g[10] = -0.00385*st_rv7_pd[21] + -0.308;
	g[9] = -0.0025*st_rv7_pd[19] + -0.27;
	g[8] = -0.00165*st_rv7_pd[17] + -0.231;
	g[7] = -0.00085*st_rv7_pd[15] + -0.0272;
	g[6] = -0.0046*st_rv7_pd[13] + -0.3588;
	g[5] = -0.0044*st_rv7_pd[11] + -0.044;
	g[4] = -0.0038*st_rv7_pd[9] + -0.4636;
	g[3] = -0.00155*st_rv7_pd[7] + -0.1116;
	g[2] = -0.00285*st_rv7_pd[5] + -0.3876;
	g[1] = -0.0004*st_rv7_pd[3] + -0.0384;
	g[0] = -0.00165*st_rv7_pd[1] + -0.1914;
	}

	return rv;
}

 void
st_rv7_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_rv7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 4.*x[0];
	t1 += 7.*x[5];
	t1 += 4.*x[6];
	t1 += 8.*x[11];
	t1 += x[12];
	t1 += 3.*x[13];
	t1 += 8.*x[18];
	t1 += 6.*x[19];
	t1 += x[24];
	t1 += 8.*x[25];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 7.*x[0];
	t1 += 3.*x[1];
	t1 += 7.*x[6];
	t1 += 9.*x[7];
	t1 += 9.*x[12];
	t1 += 2.*x[13];
	t1 += 6.*x[14];
	t1 += 5.*x[19];
	t1 += 7.*x[20];
	t1 += 5.*x[25];
	t1 += 8.*x[26];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 7.*x[1];
	t1 += 9.*x[2];
	t1 += 8.*x[7];
	t1 += 4.*x[8];
	t1 += 3.*x[13];
	t1 += 6.*x[14];
	t1 += 4.*x[15];
	t1 += 6.*x[20];
	t1 += 5.*x[21];
	t1 += 3.*x[26];
	t1 += 2.*x[27];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 6.*x[2];
	t1 += 9.*x[3];
	t1 += 7.*x[8];
	t1 += 8.*x[9];
	t1 += 8.*x[14];
	t1 += 8.*x[15];
	t1 += 6.*x[16];
	t1 += 5.*x[21];
	t1 += 3.*x[22];
	t1 += 2.*x[27];
	t1 += x[28];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 5.*x[3];
	t1 += 5.*x[4];
	t1 += 6.*x[9];
	t1 += 2.*x[10];
	t1 += 9.*x[15];
	t1 += 6.*x[16];
	t1 += 9.*x[17];
	t1 += 9.*x[22];
	t1 += 3.*x[23];
	t1 += 3.*x[28];
	t1 += 4.*x[29];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 7.*x[4];
	t1 += 5.*x[5];
	t1 += 6.*x[10];
	t1 += 6.*x[11];
	t1 += 8.*x[16];
	t1 += 5.*x[17];
	t1 += x[18];
	t1 += 9.*x[23];
	t1 += 6.*x[24];
	t1 += 4.*x[29];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 4.*x[0];
	t1 += 5.*x[5];
	t1 += 4.*x[6];
	t1 += 4.*x[11];
	t1 += 9.*x[12];
	t1 += 6.*x[17];
	t1 += 2.*x[18];
	t1 += 2.*x[19];
	t1 += 2.*x[24];
	t1 += x[25];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 2.*x[0];
	t1 += x[1];
	t1 += 3.*x[6];
	t1 += 7.*x[7];
	t1 += 9.*x[12];
	t1 += 9.*x[13];
	t1 += x[18];
	t1 += 4.*x[19];
	t1 += 6.*x[20];
	t1 += 5.*x[25];
	t1 += 5.*x[26];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 9.*x[0];
	t1 += 7.*x[1];
	t1 += x[2];
	t1 += 6.*x[7];
	t1 += 8.*x[8];
	t1 += 2.*x[13];
	t1 += 4.*x[14];
	t1 += x[19];
	t1 += 4.*x[20];
	t1 += 7.*x[21];
	t1 += 2.*x[26];
	t1 += 4.*x[27];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 3.*x[1];
	t1 += 4.*x[2];
	t1 += 4.*x[3];
	t1 += 7.*x[8];
	t1 += 9.*x[9];
	t1 += 7.*x[14];
	t1 += 2.*x[15];
	t1 += 3.*x[20];
	t1 += 2.*x[21];
	t1 += 2.*x[22];
	t1 += x[27];
	t1 += 8.*x[28];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 8.*x[2];
	t1 += 9.*x[3];
	t1 += 5.*x[4];
	t1 += x[9];
	t1 += 3.*x[10];
	t1 += x[15];
	t1 += 4.*x[16];
	t1 += 7.*x[21];
	t1 += 6.*x[22];
	t1 += 4.*x[23];
	t1 += 2.*x[28];
	t1 += 6.*x[29];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 6.*x[3];
	t1 += 5.*x[4];
	t1 += 3.*x[5];
	t1 += 5.*x[10];
	t1 += 7.*x[11];
	t1 += 9.*x[16];
	t1 += 9.*x[17];
	t1 += 4.*x[22];
	t1 += x[23];
	t1 += 6.*x[24];
	t1 += 2.*x[29];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 3.*x[4];
	t1 += 9.*x[5];
	t1 += 3.*x[6];
	t1 += 8.*x[11];
	t1 += 5.*x[12];
	t1 += 4.*x[17];
	t1 += x[18];
	t1 += 3.*x[23];
	t1 += 6.*x[24];
	t1 += 5.*x[25];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 6.*x[0];
	t1 += 2.*x[5];
	t1 += 4.*x[6];
	t1 += 2.*x[7];
	t1 += 9.*x[12];
	t1 += 7.*x[13];
	t1 += 8.*x[18];
	t1 += 2.*x[19];
	t1 += 8.*x[24];
	t1 += 8.*x[25];
	t1 += 6.*x[26];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[0];
	t1 += 2.*x[1];
	t1 += x[6];
	t1 += 4.*x[7];
	t1 += x[8];
	t1 += 6.*x[13];
	t1 += 3.*x[14];
	t1 += 7.*x[19];
	t1 += 6.*x[20];
	t1 += 5.*x[25];
	t1 += 7.*x[26];
	t1 += 3.*x[27];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 9.*x[1];
	t1 += 3.*x[2];
	t1 += 2.*x[7];
	t1 += x[8];
	t1 += 6.*x[9];
	t1 += 9.*x[14];
	t1 += 6.*x[15];
	t1 += 7.*x[20];
	t1 += 6.*x[21];
	t1 += 7.*x[26];
	t1 += 5.*x[27];
	t1 += 5.*x[28];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = 6.*x[2];
	t1 += 3.*x[3];
	t1 += 5.*x[8];
	t1 += 6.*x[9];
	t1 += 3.*x[10];
	t1 += 9.*x[15];
	t1 += 8.*x[16];
	t1 += 7.*x[21];
	t1 += 4.*x[22];
	t1 += 7.*x[27];
	t1 += x[28];
	t1 += 6.*x[29];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 9.*x[3];
	t1 += 8.*x[4];
	t1 += 2.*x[9];
	t1 += 7.*x[10];
	t1 += 8.*x[11];
	t1 += 8.*x[16];
	t1 += 9.*x[17];
	t1 += 2.*x[22];
	t1 += x[23];
	t1 += 7.*x[28];
	t1 += 3.*x[29];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = 6.*x[4];
	t1 += 9.*x[5];
	t1 += 9.*x[10];
	t1 += 6.*x[11];
	t1 += 9.*x[12];
	t1 += 4.*x[17];
	t1 += 3.*x[18];
	t1 += 3.*x[23];
	t1 += x[24];
	t1 += 9.*x[29];
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
	c[19] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 4.;
	J[40] = 7.;
	J[48] = 4.;
	J[88] = 8.;
	J[96] = 1.;
	J[104] = 3.;
	J[144] = 8.;
	J[152] = 6.;
	J[192] = 1.;
	J[200] = 8.;

   /*** derivatives for constraint 2 ***/

	J[1] = 7.;
	J[8] = 3.;
	J[49] = 7.;
	J[56] = 9.;
	J[97] = 9.;
	J[105] = 2.;
	J[112] = 6.;
	J[153] = 5.;
	J[160] = 7.;
	J[201] = 5.;
	J[208] = 8.;

   /*** derivatives for constraint 3 ***/

	J[9] = 7.;
	J[16] = 9.;
	J[57] = 8.;
	J[64] = 4.;
	J[106] = 3.;
	J[113] = 6.;
	J[120] = 4.;
	J[161] = 6.;
	J[168] = 5.;
	J[209] = 3.;
	J[216] = 2.;

   /*** derivatives for constraint 4 ***/

	J[17] = 6.;
	J[24] = 9.;
	J[65] = 7.;
	J[72] = 8.;
	J[114] = 8.;
	J[121] = 8.;
	J[128] = 6.;
	J[169] = 5.;
	J[176] = 3.;
	J[217] = 2.;
	J[224] = 1.;

   /*** derivatives for constraint 5 ***/

	J[25] = 5.;
	J[32] = 5.;
	J[73] = 6.;
	J[80] = 2.;
	J[122] = 9.;
	J[129] = 6.;
	J[136] = 9.;
	J[177] = 9.;
	J[184] = 3.;
	J[225] = 3.;
	J[232] = 4.;

   /*** derivatives for constraint 6 ***/

	J[33] = 7.;
	J[41] = 5.;
	J[81] = 6.;
	J[89] = 6.;
	J[130] = 8.;
	J[137] = 5.;
	J[145] = 1.;
	J[185] = 9.;
	J[193] = 6.;
	J[233] = 4.;

   /*** derivatives for constraint 7 ***/

	J[2] = 4.;
	J[42] = 5.;
	J[50] = 4.;
	J[90] = 4.;
	J[98] = 9.;
	J[138] = 6.;
	J[146] = 2.;
	J[154] = 2.;
	J[194] = 2.;
	J[202] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = 2.;
	J[10] = 1.;
	J[51] = 3.;
	J[58] = 7.;
	J[99] = 9.;
	J[107] = 9.;
	J[147] = 1.;
	J[155] = 4.;
	J[162] = 6.;
	J[203] = 5.;
	J[210] = 5.;

   /*** derivatives for constraint 9 ***/

	J[4] = 9.;
	J[11] = 7.;
	J[18] = 1.;
	J[59] = 6.;
	J[66] = 8.;
	J[108] = 2.;
	J[115] = 4.;
	J[156] = 1.;
	J[163] = 4.;
	J[170] = 7.;
	J[211] = 2.;
	J[218] = 4.;

   /*** derivatives for constraint 10 ***/

	J[12] = 3.;
	J[19] = 4.;
	J[26] = 4.;
	J[67] = 7.;
	J[74] = 9.;
	J[116] = 7.;
	J[123] = 2.;
	J[164] = 3.;
	J[171] = 2.;
	J[178] = 2.;
	J[219] = 1.;
	J[226] = 8.;

   /*** derivatives for constraint 11 ***/

	J[20] = 8.;
	J[27] = 9.;
	J[34] = 5.;
	J[75] = 1.;
	J[82] = 3.;
	J[124] = 1.;
	J[131] = 4.;
	J[172] = 7.;
	J[179] = 6.;
	J[186] = 4.;
	J[227] = 2.;
	J[234] = 6.;

   /*** derivatives for constraint 12 ***/

	J[28] = 6.;
	J[35] = 5.;
	J[43] = 3.;
	J[83] = 5.;
	J[91] = 7.;
	J[132] = 9.;
	J[139] = 9.;
	J[180] = 4.;
	J[187] = 1.;
	J[195] = 6.;
	J[235] = 2.;

   /*** derivatives for constraint 13 ***/

	J[36] = 3.;
	J[44] = 9.;
	J[52] = 3.;
	J[92] = 8.;
	J[100] = 5.;
	J[140] = 4.;
	J[148] = 1.;
	J[188] = 3.;
	J[196] = 6.;
	J[204] = 5.;

   /*** derivatives for constraint 14 ***/

	J[5] = 6.;
	J[45] = 2.;
	J[53] = 4.;
	J[60] = 2.;
	J[101] = 9.;
	J[109] = 7.;
	J[149] = 8.;
	J[157] = 2.;
	J[197] = 8.;
	J[205] = 8.;
	J[212] = 6.;

   /*** derivatives for constraint 15 ***/

	J[6] = 1.;
	J[13] = 2.;
	J[54] = 1.;
	J[61] = 4.;
	J[68] = 1.;
	J[110] = 6.;
	J[117] = 3.;
	J[158] = 7.;
	J[165] = 6.;
	J[206] = 5.;
	J[213] = 7.;
	J[220] = 3.;

   /*** derivatives for constraint 16 ***/

	J[14] = 9.;
	J[21] = 3.;
	J[62] = 2.;
	J[69] = 1.;
	J[76] = 6.;
	J[118] = 9.;
	J[125] = 6.;
	J[166] = 7.;
	J[173] = 6.;
	J[214] = 7.;
	J[221] = 5.;
	J[228] = 5.;

   /*** derivatives for constraint 17 ***/

	J[22] = 6.;
	J[29] = 3.;
	J[70] = 5.;
	J[77] = 6.;
	J[84] = 3.;
	J[126] = 9.;
	J[133] = 8.;
	J[174] = 7.;
	J[181] = 4.;
	J[222] = 7.;
	J[229] = 1.;
	J[236] = 6.;

   /*** derivatives for constraint 18 ***/

	J[30] = 9.;
	J[37] = 8.;
	J[78] = 2.;
	J[85] = 7.;
	J[93] = 8.;
	J[134] = 8.;
	J[141] = 9.;
	J[182] = 2.;
	J[189] = 1.;
	J[230] = 7.;
	J[237] = 3.;

   /*** derivatives for constraint 19 ***/

	J[38] = 6.;
	J[46] = 9.;
	J[86] = 9.;
	J[94] = 6.;
	J[102] = 9.;
	J[142] = 4.;
	J[150] = 3.;
	J[190] = 3.;
	J[198] = 1.;
	J[238] = 9.;

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
	}
}
#ifdef __cplusplus
	}
#endif
