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
 fint tls4_auxcom_[1] = { 4 /* nlc */ };
 fint tls4_funcom_[700] = {
	105 /* nvar */,
	1 /* nobj */,
	64 /* ncon */,
	588 /* nzc */,
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
	38,
	43,
	48,
	53,
	55,
	57,
	59,
	61,
	69,
	77,
	85,
	93,
	101,
	109,
	117,
	125,
	133,
	141,
	149,
	157,
	165,
	173,
	181,
	189,
	197,
	205,
	213,
	221,
	229,
	235,
	241,
	247,
	253,
	259,
	265,
	271,
	277,
	283,
	289,
	295,
	301,
	307,
	313,
	319,
	325,
	331,
	337,
	343,
	349,
	355,
	361,
	367,
	373,
	379,
	385,
	391,
	397,
	403,
	409,
	415,
	421,
	427,
	433,
	439,
	445,
	451,
	457,
	463,
	469,
	475,
	481,
	487,
	493,
	499,
	505,
	511,
	517,
	523,
	529,
	535,
	541,
	547,
	553,
	559,
	565,
	571,
	577,
	583,
	589,

	/* rownos */
	1,
	33,
	1,
	34,
	1,
	35,
	1,
	36,
	2,
	37,
	2,
	38,
	2,
	39,
	2,
	40,
	3,
	41,
	3,
	42,
	3,
	43,
	3,
	44,
	4,
	45,
	4,
	46,
	4,
	47,
	4,
	48,
	1,
	2,
	3,
	4,
	25,
	1,
	2,
	3,
	4,
	26,
	1,
	2,
	3,
	4,
	27,
	1,
	2,
	3,
	4,
	28,
	17,
	21,
	18,
	22,
	19,
	23,
	20,
	24,
	1,
	2,
	3,
	4,
	17,
	21,
	25,
	29,
	1,
	2,
	3,
	4,
	17,
	21,
	25,
	29,
	1,
	2,
	3,
	4,
	17,
	21,
	25,
	29,
	1,
	2,
	3,
	4,
	17,
	21,
	25,
	29,
	1,
	2,
	3,
	4,
	17,
	21,
	25,
	29,
	1,
	2,
	3,
	4,
	17,
	21,
	25,
	29,
	1,
	2,
	3,
	4,
	17,
	21,
	25,
	29,
	1,
	2,
	3,
	4,
	17,
	21,
	25,
	29,
	1,
	2,
	3,
	4,
	18,
	22,
	26,
	30,
	1,
	2,
	3,
	4,
	18,
	22,
	26,
	30,
	1,
	2,
	3,
	4,
	18,
	22,
	26,
	30,
	1,
	2,
	3,
	4,
	18,
	22,
	26,
	30,
	1,
	2,
	3,
	4,
	18,
	22,
	26,
	30,
	1,
	2,
	3,
	4,
	18,
	22,
	26,
	30,
	1,
	2,
	3,
	4,
	18,
	22,
	26,
	30,
	1,
	2,
	3,
	4,
	19,
	23,
	27,
	31,
	1,
	2,
	3,
	4,
	19,
	23,
	27,
	31,
	1,
	2,
	3,
	4,
	19,
	23,
	27,
	31,
	1,
	2,
	3,
	4,
	19,
	23,
	27,
	31,
	1,
	2,
	3,
	4,
	20,
	24,
	28,
	32,
	1,
	2,
	3,
	4,
	20,
	24,
	28,
	32,
	1,
	5,
	9,
	13,
	33,
	49,
	1,
	5,
	9,
	13,
	33,
	49,
	1,
	5,
	9,
	13,
	33,
	49,
	1,
	5,
	9,
	13,
	33,
	49,
	1,
	6,
	10,
	14,
	34,
	50,
	1,
	6,
	10,
	14,
	34,
	50,
	1,
	6,
	10,
	14,
	34,
	50,
	1,
	6,
	10,
	14,
	34,
	50,
	1,
	7,
	11,
	15,
	35,
	51,
	1,
	7,
	11,
	15,
	35,
	51,
	1,
	7,
	11,
	15,
	35,
	51,
	1,
	7,
	11,
	15,
	35,
	51,
	1,
	8,
	12,
	16,
	36,
	52,
	1,
	8,
	12,
	16,
	36,
	52,
	1,
	8,
	12,
	16,
	36,
	52,
	1,
	8,
	12,
	16,
	36,
	52,
	2,
	5,
	9,
	13,
	37,
	53,
	2,
	5,
	9,
	13,
	37,
	53,
	2,
	5,
	9,
	13,
	37,
	53,
	2,
	5,
	9,
	13,
	37,
	53,
	2,
	5,
	9,
	13,
	37,
	53,
	2,
	6,
	10,
	14,
	38,
	54,
	2,
	6,
	10,
	14,
	38,
	54,
	2,
	6,
	10,
	14,
	38,
	54,
	2,
	6,
	10,
	14,
	38,
	54,
	2,
	6,
	10,
	14,
	38,
	54,
	2,
	7,
	11,
	15,
	39,
	55,
	2,
	7,
	11,
	15,
	39,
	55,
	2,
	7,
	11,
	15,
	39,
	55,
	2,
	7,
	11,
	15,
	39,
	55,
	2,
	7,
	11,
	15,
	39,
	55,
	2,
	8,
	12,
	16,
	40,
	56,
	2,
	8,
	12,
	16,
	40,
	56,
	2,
	8,
	12,
	16,
	40,
	56,
	2,
	8,
	12,
	16,
	40,
	56,
	2,
	8,
	12,
	16,
	40,
	56,
	3,
	5,
	9,
	13,
	41,
	57,
	3,
	5,
	9,
	13,
	41,
	57,
	3,
	5,
	9,
	13,
	41,
	57,
	3,
	5,
	9,
	13,
	41,
	57,
	3,
	6,
	10,
	14,
	42,
	58,
	3,
	6,
	10,
	14,
	42,
	58,
	3,
	6,
	10,
	14,
	42,
	58,
	3,
	6,
	10,
	14,
	42,
	58,
	3,
	7,
	11,
	15,
	43,
	59,
	3,
	7,
	11,
	15,
	43,
	59,
	3,
	7,
	11,
	15,
	43,
	59,
	3,
	7,
	11,
	15,
	43,
	59,
	3,
	8,
	12,
	16,
	44,
	60,
	3,
	8,
	12,
	16,
	44,
	60,
	3,
	8,
	12,
	16,
	44,
	60,
	3,
	8,
	12,
	16,
	44,
	60,
	4,
	5,
	9,
	13,
	45,
	61,
	4,
	5,
	9,
	13,
	45,
	61,
	4,
	6,
	10,
	14,
	46,
	62,
	4,
	6,
	10,
	14,
	46,
	62,
	4,
	7,
	11,
	15,
	47,
	63,
	4,
	7,
	11,
	15,
	47,
	63,
	4,
	8,
	12,
	16,
	48,
	64,
	4,
	8,
	12,
	16,
	48,
	64 };

 real tls4_boundc_[1+210+128] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		100.,
		1.,
		100.,
		1.,
		100.,
		1.,
		100.,
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
		-12.,
		-1.7e308,
		-11.,
		-1.7e308,
		-16.,
		-1.7e308,
		-15.,
		-1.7e308,
		1900.,
		-1.7e308,
		1900.,
		-1.7e308,
		1900.,
		-1.7e308,
		1900.,
		-1.7e308,
		-1700.,
		-1.7e308,
		-1700.,
		-1.7e308,
		-1700.,
		-1.7e308,
		-1700.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
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
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real tls4_x0comn_[105] = {
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

 static real tls4_pd[16];
static real tls4_old_x[105];
static int tls4_xkind = -1;

 static int
tls4_xcheck(real *x)
{
	real *x1 = tls4_old_x, *xe = x + 105;
	errno = 0;
	if (tls4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tls4_xkind = 0;
	return 1;
	}
 real
tls4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (tls4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 0.1*x[20];
	rv += 0.2*x[21];
	rv += 0.3*x[22];
	rv += 0.4*x[23];
	rv += x[24];
	rv += 2.*x[25];
	rv += 3.*x[26];
	rv += 4.*x[27];
	rv += 5.*x[28];
	rv += 6.*x[29];
	rv += 7.*x[30];
	rv += 8.*x[31];
	rv += x[32];
	rv += 2.*x[33];
	rv += 3.*x[34];
	rv += 4.*x[35];
	rv += 5.*x[36];
	rv += 6.*x[37];
	rv += 7.*x[38];
	rv += x[39];
	rv += 2.*x[40];
	rv += 3.*x[41];
	rv += 4.*x[42];
	rv += x[43];
	rv += 2.*x[44];
	;}

	if (wantfg & 2) {
	g[20] = 0.1;
	g[21] = 0.2;
	g[22] = 0.3;
	g[23] = 0.4;
	g[24] = 1.;
	g[25] = 2.;
	g[26] = 3.;
	g[27] = 4.;
	g[28] = 5.;
	g[29] = 6.;
	g[30] = 7.;
	g[31] = 8.;
	g[32] = 1.;
	g[33] = 2.;
	g[34] = 3.;
	g[35] = 4.;
	g[36] = 5.;
	g[37] = 6.;
	g[38] = 7.;
	g[39] = 1.;
	g[40] = 2.;
	g[41] = 3.;
	g[42] = 4.;
	g[43] = 1.;
	g[44] = 2.;
	}

	return rv;
}

 void
tls4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (tls4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[16] * x[0];
	v[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	tls4_pd[0] = 0.5 / v[1];
	v[0] = x[17] * x[1];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	tls4_pd[1] = 0.5 / v[2];
	v[1] += v[2];
	v[2] = x[18] * x[2];
	v[0] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (v[0] <= 0.) {
	domain_("sqrt'", &v[0], 5L);
	}
	tls4_pd[2] = 0.5 / v[0];
	v[1] += v[0];
	v[0] = x[19] * x[3];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	tls4_pd[3] = 0.5 / v[2];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[24];
	t1 += 2.*x[25];
	t1 += 3.*x[26];
	t1 += 4.*x[27];
	t1 += 5.*x[28];
	t1 += 6.*x[29];
	t1 += 7.*x[30];
	t1 += 8.*x[31];
	t1 += x[32];
	t1 += 2.*x[33];
	t1 += 3.*x[34];
	t1 += 4.*x[35];
	t1 += 5.*x[36];
	t1 += 6.*x[37];
	t1 += 7.*x[38];
	t1 += x[39];
	t1 += 2.*x[40];
	t1 += 3.*x[41];
	t1 += 4.*x[42];
	t1 += x[43];
	t1 += 2.*x[44];
	t1 += x[45];
	t1 += 2.*x[46];
	t1 += 3.*x[47];
	t1 += 4.*x[48];
	t1 += x[49];
	t1 += 2.*x[50];
	t1 += 3.*x[51];
	t1 += 4.*x[52];
	t1 += x[53];
	t1 += 2.*x[54];
	t1 += 3.*x[55];
	t1 += 4.*x[56];
	t1 += x[57];
	t1 += 2.*x[58];
	t1 += 3.*x[59];
	t1 += 4.*x[60];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[16] * x[4];
	v[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	tls4_pd[4] = 0.5 / v[1];
	v[0] = x[17] * x[5];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	tls4_pd[5] = 0.5 / v[2];
	v[1] += v[2];
	v[2] = x[18] * x[6];
	v[0] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (v[0] <= 0.) {
	domain_("sqrt'", &v[0], 5L);
	}
	tls4_pd[6] = 0.5 / v[0];
	v[1] += v[0];
	v[0] = x[19] * x[7];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	tls4_pd[7] = 0.5 / v[2];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[24];
	t1 += 2.*x[25];
	t1 += 3.*x[26];
	t1 += 4.*x[27];
	t1 += 5.*x[28];
	t1 += 6.*x[29];
	t1 += 7.*x[30];
	t1 += 8.*x[31];
	t1 += x[32];
	t1 += 2.*x[33];
	t1 += 3.*x[34];
	t1 += 4.*x[35];
	t1 += 5.*x[36];
	t1 += 6.*x[37];
	t1 += 7.*x[38];
	t1 += x[39];
	t1 += 2.*x[40];
	t1 += 3.*x[41];
	t1 += 4.*x[42];
	t1 += x[43];
	t1 += 2.*x[44];
	t1 += x[61];
	t1 += 2.*x[62];
	t1 += 3.*x[63];
	t1 += 4.*x[64];
	t1 += 5.*x[65];
	t1 += x[66];
	t1 += 2.*x[67];
	t1 += 3.*x[68];
	t1 += 4.*x[69];
	t1 += 5.*x[70];
	t1 += x[71];
	t1 += 2.*x[72];
	t1 += 3.*x[73];
	t1 += 4.*x[74];
	t1 += 5.*x[75];
	t1 += x[76];
	t1 += 2.*x[77];
	t1 += 3.*x[78];
	t1 += 4.*x[79];
	t1 += 5.*x[80];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[16] * x[8];
	v[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	tls4_pd[8] = 0.5 / v[1];
	v[0] = x[17] * x[9];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	tls4_pd[9] = 0.5 / v[2];
	v[1] += v[2];
	v[2] = x[18] * x[10];
	v[0] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (v[0] <= 0.) {
	domain_("sqrt'", &v[0], 5L);
	}
	tls4_pd[10] = 0.5 / v[0];
	v[1] += v[0];
	v[0] = x[19] * x[11];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	tls4_pd[11] = 0.5 / v[2];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[24];
	t1 += 2.*x[25];
	t1 += 3.*x[26];
	t1 += 4.*x[27];
	t1 += 5.*x[28];
	t1 += 6.*x[29];
	t1 += 7.*x[30];
	t1 += 8.*x[31];
	t1 += x[32];
	t1 += 2.*x[33];
	t1 += 3.*x[34];
	t1 += 4.*x[35];
	t1 += 5.*x[36];
	t1 += 6.*x[37];
	t1 += 7.*x[38];
	t1 += x[39];
	t1 += 2.*x[40];
	t1 += 3.*x[41];
	t1 += 4.*x[42];
	t1 += x[43];
	t1 += 2.*x[44];
	t1 += x[81];
	t1 += 2.*x[82];
	t1 += 3.*x[83];
	t1 += 4.*x[84];
	t1 += x[85];
	t1 += 2.*x[86];
	t1 += 3.*x[87];
	t1 += 4.*x[88];
	t1 += x[89];
	t1 += 2.*x[90];
	t1 += 3.*x[91];
	t1 += 4.*x[92];
	t1 += x[93];
	t1 += 2.*x[94];
	t1 += 3.*x[95];
	t1 += 4.*x[96];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[16] * x[12];
	v[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	tls4_pd[12] = 0.5 / v[1];
	v[0] = x[17] * x[13];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	tls4_pd[13] = 0.5 / v[2];
	v[1] += v[2];
	v[2] = x[18] * x[14];
	v[0] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (v[0] <= 0.) {
	domain_("sqrt'", &v[0], 5L);
	}
	tls4_pd[14] = 0.5 / v[0];
	v[1] += v[0];
	v[0] = x[19] * x[15];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	tls4_pd[15] = 0.5 / v[2];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[24];
	t1 += 2.*x[25];
	t1 += 3.*x[26];
	t1 += 4.*x[27];
	t1 += 5.*x[28];
	t1 += 6.*x[29];
	t1 += 7.*x[30];
	t1 += 8.*x[31];
	t1 += x[32];
	t1 += 2.*x[33];
	t1 += 3.*x[34];
	t1 += 4.*x[35];
	t1 += 5.*x[36];
	t1 += 6.*x[37];
	t1 += 7.*x[38];
	t1 += x[39];
	t1 += 2.*x[40];
	t1 += 3.*x[41];
	t1 += 4.*x[42];
	t1 += x[43];
	t1 += 2.*x[44];
	t1 += x[97];
	t1 += 2.*x[98];
	t1 += x[99];
	t1 += 2.*x[100];
	t1 += x[101];
	t1 += 2.*x[102];
	t1 += x[103];
	t1 += 2.*x[104];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 330.*x[45];
	t1 += 660.*x[46];
	t1 += 990.*x[47];
	t1 += 1320.*x[48];
	t1 += 360.*x[61];
	t1 += 720.*x[62];
	t1 += 1080.*x[63];
	t1 += 1440.*x[64];
	t1 += 1800.*x[65];
	t1 += 385.*x[81];
	t1 += 770.*x[82];
	t1 += 1155.*x[83];
	t1 += 1540.*x[84];
	t1 += 415.*x[97];
	t1 += 830.*x[98];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 330.*x[49];
	t1 += 660.*x[50];
	t1 += 990.*x[51];
	t1 += 1320.*x[52];
	t1 += 360.*x[66];
	t1 += 720.*x[67];
	t1 += 1080.*x[68];
	t1 += 1440.*x[69];
	t1 += 1800.*x[70];
	t1 += 385.*x[85];
	t1 += 770.*x[86];
	t1 += 1155.*x[87];
	t1 += 1540.*x[88];
	t1 += 415.*x[99];
	t1 += 830.*x[100];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 330.*x[53];
	t1 += 660.*x[54];
	t1 += 990.*x[55];
	t1 += 1320.*x[56];
	t1 += 360.*x[71];
	t1 += 720.*x[72];
	t1 += 1080.*x[73];
	t1 += 1440.*x[74];
	t1 += 1800.*x[75];
	t1 += 385.*x[89];
	t1 += 770.*x[90];
	t1 += 1155.*x[91];
	t1 += 1540.*x[92];
	t1 += 415.*x[101];
	t1 += 830.*x[102];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 330.*x[57];
	t1 += 660.*x[58];
	t1 += 990.*x[59];
	t1 += 1320.*x[60];
	t1 += 360.*x[76];
	t1 += 720.*x[77];
	t1 += 1080.*x[78];
	t1 += 1440.*x[79];
	t1 += 1800.*x[80];
	t1 += 385.*x[93];
	t1 += 770.*x[94];
	t1 += 1155.*x[95];
	t1 += 1540.*x[96];
	t1 += 415.*x[103];
	t1 += 830.*x[104];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -330.*x[45];
	t1 += -660.*x[46];
	t1 += -990.*x[47];
	t1 += -1320.*x[48];
	t1 += -360.*x[61];
	t1 += -720.*x[62];
	t1 += -1080.*x[63];
	t1 += -1440.*x[64];
	t1 += -1800.*x[65];
	t1 += -385.*x[81];
	t1 += -770.*x[82];
	t1 += -1155.*x[83];
	t1 += -1540.*x[84];
	t1 += -415.*x[97];
	t1 += -830.*x[98];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -330.*x[49];
	t1 += -660.*x[50];
	t1 += -990.*x[51];
	t1 += -1320.*x[52];
	t1 += -360.*x[66];
	t1 += -720.*x[67];
	t1 += -1080.*x[68];
	t1 += -1440.*x[69];
	t1 += -1800.*x[70];
	t1 += -385.*x[85];
	t1 += -770.*x[86];
	t1 += -1155.*x[87];
	t1 += -1540.*x[88];
	t1 += -415.*x[99];
	t1 += -830.*x[100];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -330.*x[53];
	t1 += -660.*x[54];
	t1 += -990.*x[55];
	t1 += -1320.*x[56];
	t1 += -360.*x[71];
	t1 += -720.*x[72];
	t1 += -1080.*x[73];
	t1 += -1440.*x[74];
	t1 += -1800.*x[75];
	t1 += -385.*x[89];
	t1 += -770.*x[90];
	t1 += -1155.*x[91];
	t1 += -1540.*x[92];
	t1 += -415.*x[101];
	t1 += -830.*x[102];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -330.*x[57];
	t1 += -660.*x[58];
	t1 += -990.*x[59];
	t1 += -1320.*x[60];
	t1 += -360.*x[76];
	t1 += -720.*x[77];
	t1 += -1080.*x[78];
	t1 += -1440.*x[79];
	t1 += -1800.*x[80];
	t1 += -385.*x[93];
	t1 += -770.*x[94];
	t1 += -1155.*x[95];
	t1 += -1540.*x[96];
	t1 += -415.*x[103];
	t1 += -830.*x[104];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[45];
	t1 += 2.*x[46];
	t1 += 3.*x[47];
	t1 += 4.*x[48];
	t1 += x[61];
	t1 += 2.*x[62];
	t1 += 3.*x[63];
	t1 += 4.*x[64];
	t1 += 5.*x[65];
	t1 += x[81];
	t1 += 2.*x[82];
	t1 += 3.*x[83];
	t1 += 4.*x[84];
	t1 += x[97];
	t1 += 2.*x[98];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[49];
	t1 += 2.*x[50];
	t1 += 3.*x[51];
	t1 += 4.*x[52];
	t1 += x[66];
	t1 += 2.*x[67];
	t1 += 3.*x[68];
	t1 += 4.*x[69];
	t1 += 5.*x[70];
	t1 += x[85];
	t1 += 2.*x[86];
	t1 += 3.*x[87];
	t1 += 4.*x[88];
	t1 += x[99];
	t1 += 2.*x[100];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[53];
	t1 += 2.*x[54];
	t1 += 3.*x[55];
	t1 += 4.*x[56];
	t1 += x[71];
	t1 += 2.*x[72];
	t1 += 3.*x[73];
	t1 += 4.*x[74];
	t1 += 5.*x[75];
	t1 += x[89];
	t1 += 2.*x[90];
	t1 += 3.*x[91];
	t1 += 4.*x[92];
	t1 += x[101];
	t1 += 2.*x[102];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[57];
	t1 += 2.*x[58];
	t1 += 3.*x[59];
	t1 += 4.*x[60];
	t1 += x[76];
	t1 += 2.*x[77];
	t1 += 3.*x[78];
	t1 += 4.*x[79];
	t1 += 5.*x[80];
	t1 += x[93];
	t1 += 2.*x[94];
	t1 += 3.*x[95];
	t1 += 4.*x[96];
	t1 += x[103];
	t1 += 2.*x[104];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[20];
	t1 += -x[24];
	t1 += -2.*x[25];
	t1 += -3.*x[26];
	t1 += -4.*x[27];
	t1 += -5.*x[28];
	t1 += -6.*x[29];
	t1 += -7.*x[30];
	t1 += -8.*x[31];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[21];
	t1 += -x[32];
	t1 += -2.*x[33];
	t1 += -3.*x[34];
	t1 += -4.*x[35];
	t1 += -5.*x[36];
	t1 += -6.*x[37];
	t1 += -7.*x[38];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[22];
	t1 += -x[39];
	t1 += -2.*x[40];
	t1 += -3.*x[41];
	t1 += -4.*x[42];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[23];
	t1 += -x[43];
	t1 += -2.*x[44];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -8.*x[20];
	t1 += x[24];
	t1 += 2.*x[25];
	t1 += 3.*x[26];
	t1 += 4.*x[27];
	t1 += 5.*x[28];
	t1 += 6.*x[29];
	t1 += 7.*x[30];
	t1 += 8.*x[31];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -7.*x[21];
	t1 += x[32];
	t1 += 2.*x[33];
	t1 += 3.*x[34];
	t1 += 4.*x[35];
	t1 += 5.*x[36];
	t1 += 6.*x[37];
	t1 += 7.*x[38];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -4.*x[22];
	t1 += x[39];
	t1 += 2.*x[40];
	t1 += 3.*x[41];
	t1 += 4.*x[42];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -2.*x[23];
	t1 += x[43];
	t1 += 2.*x[44];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[16];
	t1 += -3.*x[24];
	t1 += -8.*x[25];
	t1 += -15.*x[26];
	t1 += -24.*x[27];
	t1 += -35.*x[28];
	t1 += -48.*x[29];
	t1 += -63.*x[30];
	t1 += -80.*x[31];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[17];
	t1 += -3.*x[32];
	t1 += -8.*x[33];
	t1 += -15.*x[34];
	t1 += -24.*x[35];
	t1 += -35.*x[36];
	t1 += -48.*x[37];
	t1 += -63.*x[38];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[18];
	t1 += -3.*x[39];
	t1 += -8.*x[40];
	t1 += -15.*x[41];
	t1 += -24.*x[42];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[19];
	t1 += -3.*x[43];
	t1 += -8.*x[44];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[43];
	t1 += x[44];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[0];
	t1 += -3.*x[45];
	t1 += -8.*x[46];
	t1 += -15.*x[47];
	t1 += -24.*x[48];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[1];
	t1 += -3.*x[49];
	t1 += -8.*x[50];
	t1 += -15.*x[51];
	t1 += -24.*x[52];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[2];
	t1 += -3.*x[53];
	t1 += -8.*x[54];
	t1 += -15.*x[55];
	t1 += -24.*x[56];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[3];
	t1 += -3.*x[57];
	t1 += -8.*x[58];
	t1 += -15.*x[59];
	t1 += -24.*x[60];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[4];
	t1 += -3.*x[61];
	t1 += -8.*x[62];
	t1 += -15.*x[63];
	t1 += -24.*x[64];
	t1 += -35.*x[65];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[5];
	t1 += -3.*x[66];
	t1 += -8.*x[67];
	t1 += -15.*x[68];
	t1 += -24.*x[69];
	t1 += -35.*x[70];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[6];
	t1 += -3.*x[71];
	t1 += -8.*x[72];
	t1 += -15.*x[73];
	t1 += -24.*x[74];
	t1 += -35.*x[75];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[7];
	t1 += -3.*x[76];
	t1 += -8.*x[77];
	t1 += -15.*x[78];
	t1 += -24.*x[79];
	t1 += -35.*x[80];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[8];
	t1 += -3.*x[81];
	t1 += -8.*x[82];
	t1 += -15.*x[83];
	t1 += -24.*x[84];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[9];
	t1 += -3.*x[85];
	t1 += -8.*x[86];
	t1 += -15.*x[87];
	t1 += -24.*x[88];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[10];
	t1 += -3.*x[89];
	t1 += -8.*x[90];
	t1 += -15.*x[91];
	t1 += -24.*x[92];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[11];
	t1 += -3.*x[93];
	t1 += -8.*x[94];
	t1 += -15.*x[95];
	t1 += -24.*x[96];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[12];
	t1 += -3.*x[97];
	t1 += -8.*x[98];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[13];
	t1 += -3.*x[99];
	t1 += -8.*x[100];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[14];
	t1 += -3.*x[101];
	t1 += -8.*x[102];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[15];
	t1 += -3.*x[103];
	t1 += -8.*x[104];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[49];
	t1 += x[50];
	t1 += x[51];
	t1 += x[52];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[53];
	t1 += x[54];
	t1 += x[55];
	t1 += x[56];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[60];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[65];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[66];
	t1 += x[67];
	t1 += x[68];
	t1 += x[69];
	t1 += x[70];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	t1 += x[80];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[81];
	t1 += x[82];
	t1 += x[83];
	t1 += x[84];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[85];
	t1 += x[86];
	t1 += x[87];
	t1 += x[88];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[89];
	t1 += x[90];
	t1 += x[91];
	t1 += x[92];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[93];
	t1 += x[94];
	t1 += x[95];
	t1 += x[96];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[97];
	t1 += x[98];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[99];
	t1 += x[100];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[101];
	t1 += x[102];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[103];
	t1 += x[104];
	c[63] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = -tls4_pd[3]*x[19];
	J[47] = -tls4_pd[3]*x[3];
	J[4] = -tls4_pd[2]*x[18];
	J[42] = -tls4_pd[2]*x[2];
	J[2] = -tls4_pd[1]*x[17];
	J[37] = -tls4_pd[1]*x[1];
	J[0] = -tls4_pd[0]*x[16];
	J[32] = -tls4_pd[0]*x[0];
	J[60] = 1.;
	J[68] = 2.;
	J[76] = 3.;
	J[84] = 4.;
	J[92] = 5.;
	J[100] = 6.;
	J[108] = 7.;
	J[116] = 8.;
	J[124] = 1.;
	J[132] = 2.;
	J[140] = 3.;
	J[148] = 4.;
	J[156] = 5.;
	J[164] = 6.;
	J[172] = 7.;
	J[180] = 1.;
	J[188] = 2.;
	J[196] = 3.;
	J[204] = 4.;
	J[212] = 1.;
	J[220] = 2.;
	J[228] = 1.;
	J[234] = 2.;
	J[240] = 3.;
	J[246] = 4.;
	J[252] = 1.;
	J[258] = 2.;
	J[264] = 3.;
	J[270] = 4.;
	J[276] = 1.;
	J[282] = 2.;
	J[288] = 3.;
	J[294] = 4.;
	J[300] = 1.;
	J[306] = 2.;
	J[312] = 3.;
	J[318] = 4.;

   /*** derivatives for constraint 2 ***/

	J[14] = -tls4_pd[7]*x[19];
	J[48] = -tls4_pd[7]*x[7];
	J[12] = -tls4_pd[6]*x[18];
	J[43] = -tls4_pd[6]*x[6];
	J[10] = -tls4_pd[5]*x[17];
	J[38] = -tls4_pd[5]*x[5];
	J[8] = -tls4_pd[4]*x[16];
	J[33] = -tls4_pd[4]*x[4];
	J[61] = 1.;
	J[69] = 2.;
	J[77] = 3.;
	J[85] = 4.;
	J[93] = 5.;
	J[101] = 6.;
	J[109] = 7.;
	J[117] = 8.;
	J[125] = 1.;
	J[133] = 2.;
	J[141] = 3.;
	J[149] = 4.;
	J[157] = 5.;
	J[165] = 6.;
	J[173] = 7.;
	J[181] = 1.;
	J[189] = 2.;
	J[197] = 3.;
	J[205] = 4.;
	J[213] = 1.;
	J[221] = 2.;
	J[324] = 1.;
	J[330] = 2.;
	J[336] = 3.;
	J[342] = 4.;
	J[348] = 5.;
	J[354] = 1.;
	J[360] = 2.;
	J[366] = 3.;
	J[372] = 4.;
	J[378] = 5.;
	J[384] = 1.;
	J[390] = 2.;
	J[396] = 3.;
	J[402] = 4.;
	J[408] = 5.;
	J[414] = 1.;
	J[420] = 2.;
	J[426] = 3.;
	J[432] = 4.;
	J[438] = 5.;

   /*** derivatives for constraint 3 ***/

	J[22] = -tls4_pd[11]*x[19];
	J[49] = -tls4_pd[11]*x[11];
	J[20] = -tls4_pd[10]*x[18];
	J[44] = -tls4_pd[10]*x[10];
	J[18] = -tls4_pd[9]*x[17];
	J[39] = -tls4_pd[9]*x[9];
	J[16] = -tls4_pd[8]*x[16];
	J[34] = -tls4_pd[8]*x[8];
	J[62] = 1.;
	J[70] = 2.;
	J[78] = 3.;
	J[86] = 4.;
	J[94] = 5.;
	J[102] = 6.;
	J[110] = 7.;
	J[118] = 8.;
	J[126] = 1.;
	J[134] = 2.;
	J[142] = 3.;
	J[150] = 4.;
	J[158] = 5.;
	J[166] = 6.;
	J[174] = 7.;
	J[182] = 1.;
	J[190] = 2.;
	J[198] = 3.;
	J[206] = 4.;
	J[214] = 1.;
	J[222] = 2.;
	J[444] = 1.;
	J[450] = 2.;
	J[456] = 3.;
	J[462] = 4.;
	J[468] = 1.;
	J[474] = 2.;
	J[480] = 3.;
	J[486] = 4.;
	J[492] = 1.;
	J[498] = 2.;
	J[504] = 3.;
	J[510] = 4.;
	J[516] = 1.;
	J[522] = 2.;
	J[528] = 3.;
	J[534] = 4.;

   /*** derivatives for constraint 4 ***/

	J[30] = -tls4_pd[15]*x[19];
	J[50] = -tls4_pd[15]*x[15];
	J[28] = -tls4_pd[14]*x[18];
	J[45] = -tls4_pd[14]*x[14];
	J[26] = -tls4_pd[13]*x[17];
	J[40] = -tls4_pd[13]*x[13];
	J[24] = -tls4_pd[12]*x[16];
	J[35] = -tls4_pd[12]*x[12];
	J[63] = 1.;
	J[71] = 2.;
	J[79] = 3.;
	J[87] = 4.;
	J[95] = 5.;
	J[103] = 6.;
	J[111] = 7.;
	J[119] = 8.;
	J[127] = 1.;
	J[135] = 2.;
	J[143] = 3.;
	J[151] = 4.;
	J[159] = 5.;
	J[167] = 6.;
	J[175] = 7.;
	J[183] = 1.;
	J[191] = 2.;
	J[199] = 3.;
	J[207] = 4.;
	J[215] = 1.;
	J[223] = 2.;
	J[540] = 1.;
	J[546] = 2.;
	J[552] = 1.;
	J[558] = 2.;
	J[564] = 1.;
	J[570] = 2.;
	J[576] = 1.;
	J[582] = 2.;

   /*** derivatives for constraint 5 ***/

	J[229] = 330.;
	J[235] = 660.;
	J[241] = 990.;
	J[247] = 1320.;
	J[325] = 360.;
	J[331] = 720.;
	J[337] = 1080.;
	J[343] = 1440.;
	J[349] = 1800.;
	J[445] = 385.;
	J[451] = 770.;
	J[457] = 1155.;
	J[463] = 1540.;
	J[541] = 415.;
	J[547] = 830.;

   /*** derivatives for constraint 6 ***/

	J[253] = 330.;
	J[259] = 660.;
	J[265] = 990.;
	J[271] = 1320.;
	J[355] = 360.;
	J[361] = 720.;
	J[367] = 1080.;
	J[373] = 1440.;
	J[379] = 1800.;
	J[469] = 385.;
	J[475] = 770.;
	J[481] = 1155.;
	J[487] = 1540.;
	J[553] = 415.;
	J[559] = 830.;

   /*** derivatives for constraint 7 ***/

	J[277] = 330.;
	J[283] = 660.;
	J[289] = 990.;
	J[295] = 1320.;
	J[385] = 360.;
	J[391] = 720.;
	J[397] = 1080.;
	J[403] = 1440.;
	J[409] = 1800.;
	J[493] = 385.;
	J[499] = 770.;
	J[505] = 1155.;
	J[511] = 1540.;
	J[565] = 415.;
	J[571] = 830.;

   /*** derivatives for constraint 8 ***/

	J[301] = 330.;
	J[307] = 660.;
	J[313] = 990.;
	J[319] = 1320.;
	J[415] = 360.;
	J[421] = 720.;
	J[427] = 1080.;
	J[433] = 1440.;
	J[439] = 1800.;
	J[517] = 385.;
	J[523] = 770.;
	J[529] = 1155.;
	J[535] = 1540.;
	J[577] = 415.;
	J[583] = 830.;

   /*** derivatives for constraint 9 ***/

	J[230] = -330.;
	J[236] = -660.;
	J[242] = -990.;
	J[248] = -1320.;
	J[326] = -360.;
	J[332] = -720.;
	J[338] = -1080.;
	J[344] = -1440.;
	J[350] = -1800.;
	J[446] = -385.;
	J[452] = -770.;
	J[458] = -1155.;
	J[464] = -1540.;
	J[542] = -415.;
	J[548] = -830.;

   /*** derivatives for constraint 10 ***/

	J[254] = -330.;
	J[260] = -660.;
	J[266] = -990.;
	J[272] = -1320.;
	J[356] = -360.;
	J[362] = -720.;
	J[368] = -1080.;
	J[374] = -1440.;
	J[380] = -1800.;
	J[470] = -385.;
	J[476] = -770.;
	J[482] = -1155.;
	J[488] = -1540.;
	J[554] = -415.;
	J[560] = -830.;

   /*** derivatives for constraint 11 ***/

	J[278] = -330.;
	J[284] = -660.;
	J[290] = -990.;
	J[296] = -1320.;
	J[386] = -360.;
	J[392] = -720.;
	J[398] = -1080.;
	J[404] = -1440.;
	J[410] = -1800.;
	J[494] = -385.;
	J[500] = -770.;
	J[506] = -1155.;
	J[512] = -1540.;
	J[566] = -415.;
	J[572] = -830.;

   /*** derivatives for constraint 12 ***/

	J[302] = -330.;
	J[308] = -660.;
	J[314] = -990.;
	J[320] = -1320.;
	J[416] = -360.;
	J[422] = -720.;
	J[428] = -1080.;
	J[434] = -1440.;
	J[440] = -1800.;
	J[518] = -385.;
	J[524] = -770.;
	J[530] = -1155.;
	J[536] = -1540.;
	J[578] = -415.;
	J[584] = -830.;

   /*** derivatives for constraint 13 ***/

	J[231] = 1.;
	J[237] = 2.;
	J[243] = 3.;
	J[249] = 4.;
	J[327] = 1.;
	J[333] = 2.;
	J[339] = 3.;
	J[345] = 4.;
	J[351] = 5.;
	J[447] = 1.;
	J[453] = 2.;
	J[459] = 3.;
	J[465] = 4.;
	J[543] = 1.;
	J[549] = 2.;

   /*** derivatives for constraint 14 ***/

	J[255] = 1.;
	J[261] = 2.;
	J[267] = 3.;
	J[273] = 4.;
	J[357] = 1.;
	J[363] = 2.;
	J[369] = 3.;
	J[375] = 4.;
	J[381] = 5.;
	J[471] = 1.;
	J[477] = 2.;
	J[483] = 3.;
	J[489] = 4.;
	J[555] = 1.;
	J[561] = 2.;

   /*** derivatives for constraint 15 ***/

	J[279] = 1.;
	J[285] = 2.;
	J[291] = 3.;
	J[297] = 4.;
	J[387] = 1.;
	J[393] = 2.;
	J[399] = 3.;
	J[405] = 4.;
	J[411] = 5.;
	J[495] = 1.;
	J[501] = 2.;
	J[507] = 3.;
	J[513] = 4.;
	J[567] = 1.;
	J[573] = 2.;

   /*** derivatives for constraint 16 ***/

	J[303] = 1.;
	J[309] = 2.;
	J[315] = 3.;
	J[321] = 4.;
	J[417] = 1.;
	J[423] = 2.;
	J[429] = 3.;
	J[435] = 4.;
	J[441] = 5.;
	J[519] = 1.;
	J[525] = 2.;
	J[531] = 3.;
	J[537] = 4.;
	J[579] = 1.;
	J[585] = 2.;

   /*** derivatives for constraint 17 ***/

	J[52] = 1.;
	J[64] = -1.;
	J[72] = -2.;
	J[80] = -3.;
	J[88] = -4.;
	J[96] = -5.;
	J[104] = -6.;
	J[112] = -7.;
	J[120] = -8.;

   /*** derivatives for constraint 18 ***/

	J[54] = 1.;
	J[128] = -1.;
	J[136] = -2.;
	J[144] = -3.;
	J[152] = -4.;
	J[160] = -5.;
	J[168] = -6.;
	J[176] = -7.;

   /*** derivatives for constraint 19 ***/

	J[56] = 1.;
	J[184] = -1.;
	J[192] = -2.;
	J[200] = -3.;
	J[208] = -4.;

   /*** derivatives for constraint 20 ***/

	J[58] = 1.;
	J[216] = -1.;
	J[224] = -2.;

   /*** derivatives for constraint 21 ***/

	J[53] = -8.;
	J[65] = 1.;
	J[73] = 2.;
	J[81] = 3.;
	J[89] = 4.;
	J[97] = 5.;
	J[105] = 6.;
	J[113] = 7.;
	J[121] = 8.;

   /*** derivatives for constraint 22 ***/

	J[55] = -7.;
	J[129] = 1.;
	J[137] = 2.;
	J[145] = 3.;
	J[153] = 4.;
	J[161] = 5.;
	J[169] = 6.;
	J[177] = 7.;

   /*** derivatives for constraint 23 ***/

	J[57] = -4.;
	J[185] = 1.;
	J[193] = 2.;
	J[201] = 3.;
	J[209] = 4.;

   /*** derivatives for constraint 24 ***/

	J[59] = -2.;
	J[217] = 1.;
	J[225] = 2.;

   /*** derivatives for constraint 25 ***/

	J[36] = 1.;
	J[66] = -3.;
	J[74] = -8.;
	J[82] = -15.;
	J[90] = -24.;
	J[98] = -35.;
	J[106] = -48.;
	J[114] = -63.;
	J[122] = -80.;

   /*** derivatives for constraint 26 ***/

	J[41] = 1.;
	J[130] = -3.;
	J[138] = -8.;
	J[146] = -15.;
	J[154] = -24.;
	J[162] = -35.;
	J[170] = -48.;
	J[178] = -63.;

   /*** derivatives for constraint 27 ***/

	J[46] = 1.;
	J[186] = -3.;
	J[194] = -8.;
	J[202] = -15.;
	J[210] = -24.;

   /*** derivatives for constraint 28 ***/

	J[51] = 1.;
	J[218] = -3.;
	J[226] = -8.;

   /*** derivatives for constraint 29 ***/

	J[67] = 1.;
	J[75] = 1.;
	J[83] = 1.;
	J[91] = 1.;
	J[99] = 1.;
	J[107] = 1.;
	J[115] = 1.;
	J[123] = 1.;

   /*** derivatives for constraint 30 ***/

	J[131] = 1.;
	J[139] = 1.;
	J[147] = 1.;
	J[155] = 1.;
	J[163] = 1.;
	J[171] = 1.;
	J[179] = 1.;

   /*** derivatives for constraint 31 ***/

	J[187] = 1.;
	J[195] = 1.;
	J[203] = 1.;
	J[211] = 1.;

   /*** derivatives for constraint 32 ***/

	J[219] = 1.;
	J[227] = 1.;

   /*** derivatives for constraint 33 ***/

	J[1] = 1.;
	J[232] = -3.;
	J[238] = -8.;
	J[244] = -15.;
	J[250] = -24.;

   /*** derivatives for constraint 34 ***/

	J[3] = 1.;
	J[256] = -3.;
	J[262] = -8.;
	J[268] = -15.;
	J[274] = -24.;

   /*** derivatives for constraint 35 ***/

	J[5] = 1.;
	J[280] = -3.;
	J[286] = -8.;
	J[292] = -15.;
	J[298] = -24.;

   /*** derivatives for constraint 36 ***/

	J[7] = 1.;
	J[304] = -3.;
	J[310] = -8.;
	J[316] = -15.;
	J[322] = -24.;

   /*** derivatives for constraint 37 ***/

	J[9] = 1.;
	J[328] = -3.;
	J[334] = -8.;
	J[340] = -15.;
	J[346] = -24.;
	J[352] = -35.;

   /*** derivatives for constraint 38 ***/

	J[11] = 1.;
	J[358] = -3.;
	J[364] = -8.;
	J[370] = -15.;
	J[376] = -24.;
	J[382] = -35.;

   /*** derivatives for constraint 39 ***/

	J[13] = 1.;
	J[388] = -3.;
	J[394] = -8.;
	J[400] = -15.;
	J[406] = -24.;
	J[412] = -35.;

   /*** derivatives for constraint 40 ***/

	J[15] = 1.;
	J[418] = -3.;
	J[424] = -8.;
	J[430] = -15.;
	J[436] = -24.;
	J[442] = -35.;

   /*** derivatives for constraint 41 ***/

	J[17] = 1.;
	J[448] = -3.;
	J[454] = -8.;
	J[460] = -15.;
	J[466] = -24.;

   /*** derivatives for constraint 42 ***/

	J[19] = 1.;
	J[472] = -3.;
	J[478] = -8.;
	J[484] = -15.;
	J[490] = -24.;

   /*** derivatives for constraint 43 ***/

	J[21] = 1.;
	J[496] = -3.;
	J[502] = -8.;
	J[508] = -15.;
	J[514] = -24.;

   /*** derivatives for constraint 44 ***/

	J[23] = 1.;
	J[520] = -3.;
	J[526] = -8.;
	J[532] = -15.;
	J[538] = -24.;

   /*** derivatives for constraint 45 ***/

	J[25] = 1.;
	J[544] = -3.;
	J[550] = -8.;

   /*** derivatives for constraint 46 ***/

	J[27] = 1.;
	J[556] = -3.;
	J[562] = -8.;

   /*** derivatives for constraint 47 ***/

	J[29] = 1.;
	J[568] = -3.;
	J[574] = -8.;

   /*** derivatives for constraint 48 ***/

	J[31] = 1.;
	J[580] = -3.;
	J[586] = -8.;

   /*** derivatives for constraint 49 ***/

	J[233] = 1.;
	J[239] = 1.;
	J[245] = 1.;
	J[251] = 1.;

   /*** derivatives for constraint 50 ***/

	J[257] = 1.;
	J[263] = 1.;
	J[269] = 1.;
	J[275] = 1.;

   /*** derivatives for constraint 51 ***/

	J[281] = 1.;
	J[287] = 1.;
	J[293] = 1.;
	J[299] = 1.;

   /*** derivatives for constraint 52 ***/

	J[305] = 1.;
	J[311] = 1.;
	J[317] = 1.;
	J[323] = 1.;

   /*** derivatives for constraint 53 ***/

	J[329] = 1.;
	J[335] = 1.;
	J[341] = 1.;
	J[347] = 1.;
	J[353] = 1.;

   /*** derivatives for constraint 54 ***/

	J[359] = 1.;
	J[365] = 1.;
	J[371] = 1.;
	J[377] = 1.;
	J[383] = 1.;

   /*** derivatives for constraint 55 ***/

	J[389] = 1.;
	J[395] = 1.;
	J[401] = 1.;
	J[407] = 1.;
	J[413] = 1.;

   /*** derivatives for constraint 56 ***/

	J[419] = 1.;
	J[425] = 1.;
	J[431] = 1.;
	J[437] = 1.;
	J[443] = 1.;

   /*** derivatives for constraint 57 ***/

	J[449] = 1.;
	J[455] = 1.;
	J[461] = 1.;
	J[467] = 1.;

   /*** derivatives for constraint 58 ***/

	J[473] = 1.;
	J[479] = 1.;
	J[485] = 1.;
	J[491] = 1.;

   /*** derivatives for constraint 59 ***/

	J[497] = 1.;
	J[503] = 1.;
	J[509] = 1.;
	J[515] = 1.;

   /*** derivatives for constraint 60 ***/

	J[521] = 1.;
	J[527] = 1.;
	J[533] = 1.;
	J[539] = 1.;

   /*** derivatives for constraint 61 ***/

	J[545] = 1.;
	J[551] = 1.;

   /*** derivatives for constraint 62 ***/

	J[557] = 1.;
	J[563] = 1.;

   /*** derivatives for constraint 63 ***/

	J[569] = 1.;
	J[575] = 1.;

   /*** derivatives for constraint 64 ***/

	J[581] = 1.;
	J[587] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif