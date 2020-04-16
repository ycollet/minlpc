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
 fint waterx_auxcom_[1] = { 16 /* nlc */ };
 fint waterx_funcom_[313] = {
	70 /* nvar */,
	1 /* nobj */,
	54 /* ncon */,
	236 /* nzc */,
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
	46,
	51,
	56,
	61,
	66,
	71,
	76,
	81,
	86,
	91,
	96,
	101,
	106,
	111,
	116,
	121,
	126,
	131,
	136,
	141,
	143,
	145,
	147,
	149,
	151,
	153,
	155,
	157,
	159,
	161,
	163,
	165,
	167,
	169,
	173,
	178,
	181,
	184,
	190,
	193,
	196,
	200,
	202,
	205,
	206,
	207,
	208,
	209,
	211,
	213,
	215,
	217,
	219,
	221,
	223,
	225,
	227,
	229,
	231,
	233,
	235,
	237,

	/* rownos */
	1,
	17,
	19,
	26,
	27,
	2,
	17,
	20,
	26,
	28,
	3,
	17,
	24,
	26,
	29,
	4,
	18,
	19,
	26,
	30,
	5,
	18,
	22,
	26,
	31,
	6,
	18,
	23,
	26,
	32,
	7,
	18,
	24,
	26,
	33,
	8,
	19,
	20,
	26,
	34,
	9,
	19,
	21,
	26,
	35,
	10,
	19,
	22,
	26,
	36,
	11,
	19,
	24,
	26,
	37,
	12,
	20,
	21,
	26,
	38,
	13,
	21,
	22,
	26,
	39,
	14,
	22,
	23,
	26,
	40,
	1,
	17,
	19,
	26,
	41,
	2,
	17,
	20,
	26,
	42,
	3,
	17,
	24,
	26,
	43,
	4,
	18,
	19,
	26,
	44,
	5,
	18,
	22,
	26,
	45,
	6,
	18,
	23,
	26,
	46,
	7,
	18,
	24,
	26,
	47,
	8,
	19,
	20,
	26,
	48,
	9,
	19,
	21,
	26,
	49,
	10,
	19,
	22,
	26,
	50,
	11,
	19,
	24,
	26,
	51,
	12,
	20,
	21,
	26,
	52,
	13,
	21,
	22,
	26,
	53,
	14,
	22,
	23,
	26,
	54,
	1,
	16,
	2,
	16,
	3,
	16,
	4,
	16,
	5,
	16,
	6,
	16,
	7,
	16,
	8,
	16,
	9,
	16,
	10,
	16,
	11,
	16,
	12,
	16,
	13,
	16,
	14,
	16,
	1,
	2,
	3,
	15,
	4,
	5,
	6,
	7,
	15,
	15,
	17,
	25,
	15,
	18,
	25,
	1,
	4,
	8,
	9,
	10,
	11,
	2,
	8,
	12,
	9,
	12,
	13,
	5,
	10,
	13,
	14,
	6,
	14,
	3,
	7,
	11,
	15,
	16,
	25,
	26,
	27,
	41,
	28,
	42,
	29,
	43,
	30,
	44,
	31,
	45,
	32,
	46,
	33,
	47,
	34,
	48,
	35,
	49,
	36,
	50,
	37,
	51,
	38,
	52,
	39,
	53,
	40,
	54 };

 real waterx_boundc_[1+140+108] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		0.15,
		2.,
		6.5,
		1.7e308,
		3.25,
		1.7e308,
		0.,
		2.5,
		0.,
		6.,
		16.58,
		1.7e308,
		14.92,
		1.7e308,
		12.925,
		1.7e308,
		12.26,
		1.7e308,
		8.76,
		1.7e308,
		16.08,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.212,
		1.212,
		0.452,
		0.452,
		0.245,
		0.245,
		0.652,
		0.652,
		0.252,
		0.252,
		0.456,
		0.456,
		0.,
		0.,
		0.,
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
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.,
		-1.7e308,
		2.};

 real waterx_x0comn_[70] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		0.547722557505166,
		11.5,
		8.25,
		0.961470588235294,
		2.30752941176471,
		21.58,
		19.92,
		17.925,
		17.26,
		13.76,
		21.08,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real waterx_pd[88];
static real waterx_old_x[70];
static int waterx_xkind = -1;

 static int
waterx_xcheck(real *x)
{
	real *x1 = waterx_old_x, *xe = x + 70;
	errno = 0;
	if (waterx_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	waterx_xkind = 0;
	return 1;
	}
 real
waterx_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (waterx_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 10.*x[52];
	rv += x[53];
	rv += 10.*x[54];
	rv += x[55];
	;}

	if (wantfg & 2) {
	g[52] = 10.;
	g[53] = 1.;
	g[54] = 10.;
	g[55] = 1.;
	}

	return rv;
}

 void
waterx_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (waterx_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 1.5722267648148 * x[0];
	v[1] = 1.5722267648148 * x[14];
	waterx_pd[1] = v[0] + v[1];
	waterx_pd[0] = x[0] - x[14];
	v[0] = waterx_pd[1] * waterx_pd[0];
	v[3] = pow(x[28], 5.33);
	if (errno) in_trouble2("pow",x[28],5.33);
	if (x[28] > 0.) {
	waterx_pd[2] = 5.33*(v[3]/x[28]);
	} else if (5.33 > 1.) {
	waterx_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[3] = 1. / v[3];
	waterx_pd[4] = -v[4] * waterx_pd[3];
	v[3] = -v[4];
	t1 = v[3] + x[42];
	t1 += -x[46];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 1.32004857865156 * x[1];
	v[1] = 1.32004857865156 * x[15];
	waterx_pd[6] = v[0] + v[1];
	waterx_pd[5] = x[1] - x[15];
	v[0] = waterx_pd[6] * waterx_pd[5];
	v[3] = pow(x[29], 5.33);
	if (errno) in_trouble2("pow",x[29],5.33);
	if (x[29] > 0.) {
	waterx_pd[7] = 5.33*(v[3]/x[29]);
	} else if (5.33 > 1.) {
	waterx_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[8] = 1. / v[3];
	waterx_pd[9] = -v[4] * waterx_pd[8];
	v[3] = -v[4];
	t1 = v[3] + x[42];
	t1 += -x[47];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 2.57705917665854 * x[2];
	v[1] = 2.57705917665854 * x[16];
	waterx_pd[11] = v[0] + v[1];
	waterx_pd[10] = x[2] - x[16];
	v[0] = waterx_pd[11] * waterx_pd[10];
	v[3] = pow(x[30], 5.33);
	if (errno) in_trouble2("pow",x[30],5.33);
	if (x[30] > 0.) {
	waterx_pd[12] = 5.33*(v[3]/x[30]);
	} else if (5.33 > 1.) {
	waterx_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[13] = 1. / v[3];
	waterx_pd[14] = -v[4] * waterx_pd[13];
	v[3] = -v[4];
	t1 = v[3] + x[42];
	t1 += -x[51];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 2.06257339263358 * x[3];
	v[1] = 2.06257339263358 * x[17];
	waterx_pd[16] = v[0] + v[1];
	waterx_pd[15] = x[3] - x[17];
	v[0] = waterx_pd[16] * waterx_pd[15];
	v[3] = pow(x[31], 5.33);
	if (errno) in_trouble2("pow",x[31],5.33);
	if (x[31] > 0.) {
	waterx_pd[17] = 5.33*(v[3]/x[31]);
	} else if (5.33 > 1.) {
	waterx_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[18] = 1. / v[3];
	waterx_pd[19] = -v[4] * waterx_pd[18];
	v[3] = -v[4];
	t1 = v[3] + x[43];
	t1 += -x[46];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 2.40235218067626 * x[4];
	v[1] = 2.40235218067626 * x[18];
	waterx_pd[21] = v[0] + v[1];
	waterx_pd[20] = x[4] - x[18];
	v[0] = waterx_pd[21] * waterx_pd[20];
	v[3] = pow(x[32], 5.33);
	if (errno) in_trouble2("pow",x[32],5.33);
	if (x[32] > 0.) {
	waterx_pd[22] = 5.33*(v[3]/x[32]);
	} else if (5.33 > 1.) {
	waterx_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[32],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[23] = 1. / v[3];
	waterx_pd[24] = -v[4] * waterx_pd[23];
	v[3] = -v[4];
	t1 = v[3] + x[43];
	t1 += -x[49];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = 1.339 * x[5];
	v[1] = 1.339 * x[19];
	waterx_pd[26] = v[0] + v[1];
	waterx_pd[25] = x[5] - x[19];
	v[0] = waterx_pd[26] * waterx_pd[25];
	v[3] = pow(x[33], 5.33);
	if (errno) in_trouble2("pow",x[33],5.33);
	if (x[33] > 0.) {
	waterx_pd[27] = 5.33*(v[3]/x[33]);
	} else if (5.33 > 1.) {
	waterx_pd[27] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[33],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[28] = 1. / v[3];
	waterx_pd[29] = -v[4] * waterx_pd[28];
	v[3] = -v[4];
	t1 = v[3] + x[43];
	t1 += -x[50];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = 1.37419139860501 * x[6];
	v[1] = 1.37419139860501 * x[20];
	waterx_pd[31] = v[0] + v[1];
	waterx_pd[30] = x[6] - x[20];
	v[0] = waterx_pd[31] * waterx_pd[30];
	v[3] = pow(x[34], 5.33);
	if (errno) in_trouble2("pow",x[34],5.33);
	if (x[34] > 0.) {
	waterx_pd[32] = 5.33*(v[3]/x[34]);
	} else if (5.33 > 1.) {
	waterx_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[33] = 1. / v[3];
	waterx_pd[34] = -v[4] * waterx_pd[33];
	v[3] = -v[4];
	t1 = v[3] + x[43];
	t1 += -x[51];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = 1.2916134290104 * x[7];
	v[1] = 1.2916134290104 * x[21];
	waterx_pd[36] = v[0] + v[1];
	waterx_pd[35] = x[7] - x[21];
	v[0] = waterx_pd[36] * waterx_pd[35];
	v[3] = pow(x[35], 5.33);
	if (errno) in_trouble2("pow",x[35],5.33);
	if (x[35] > 0.) {
	waterx_pd[37] = 5.33*(v[3]/x[35]);
	} else if (5.33 > 1.) {
	waterx_pd[37] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[35],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[38] = 1. / v[3];
	waterx_pd[39] = -v[4] * waterx_pd[38];
	v[3] = -v[4];
	t1 = v[3] + x[46];
	t1 += -x[47];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = 1.60230396616872 * x[8];
	v[1] = 1.60230396616872 * x[22];
	waterx_pd[41] = v[0] + v[1];
	waterx_pd[40] = x[8] - x[22];
	v[0] = waterx_pd[41] * waterx_pd[40];
	v[3] = pow(x[36], 5.33);
	if (errno) in_trouble2("pow",x[36],5.33);
	if (x[36] > 0.) {
	waterx_pd[42] = 5.33*(v[3]/x[36]);
	} else if (5.33 > 1.) {
	waterx_pd[42] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[43] = 1. / v[3];
	waterx_pd[44] = -v[4] * waterx_pd[43];
	v[3] = -v[4];
	t1 = v[3] + x[46];
	t1 += -x[48];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = 1.339 * x[9];
	v[1] = 1.339 * x[23];
	waterx_pd[46] = v[0] + v[1];
	waterx_pd[45] = x[9] - x[23];
	v[0] = waterx_pd[46] * waterx_pd[45];
	v[3] = pow(x[37], 5.33);
	if (errno) in_trouble2("pow",x[37],5.33);
	if (x[37] > 0.) {
	waterx_pd[47] = 5.33*(v[3]/x[37]);
	} else if (5.33 > 1.) {
	waterx_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[48] = 1. / v[3];
	waterx_pd[49] = -v[4] * waterx_pd[48];
	v[3] = -v[4];
	t1 = v[3] + x[46];
	t1 += -x[49];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = 2.14329116080854 * x[10];
	v[1] = 2.14329116080854 * x[24];
	waterx_pd[51] = v[0] + v[1];
	waterx_pd[50] = x[10] - x[24];
	v[0] = waterx_pd[51] * waterx_pd[50];
	v[3] = pow(x[38], 5.33);
	if (errno) in_trouble2("pow",x[38],5.33);
	if (x[38] > 0.) {
	waterx_pd[52] = 5.33*(v[3]/x[38]);
	} else if (5.33 > 1.) {
	waterx_pd[52] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[53] = 1. / v[3];
	waterx_pd[54] = -v[4] * waterx_pd[53];
	v[3] = -v[4];
	t1 = v[3] + x[46];
	t1 += -x[51];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = 1.24561882211213 * x[11];
	v[1] = 1.24561882211213 * x[25];
	waterx_pd[56] = v[0] + v[1];
	waterx_pd[55] = x[11] - x[25];
	v[0] = waterx_pd[56] * waterx_pd[55];
	v[3] = pow(x[39], 5.33);
	if (errno) in_trouble2("pow",x[39],5.33);
	if (x[39] > 0.) {
	waterx_pd[57] = 5.33*(v[3]/x[39]);
	} else if (5.33 > 1.) {
	waterx_pd[57] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[58] = 1. / v[3];
	waterx_pd[59] = -v[4] * waterx_pd[58];
	v[3] = -v[4];
	t1 = v[3] + -x[47];
	t1 += x[48];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = 1.15157500841239 * x[12];
	v[1] = 1.15157500841239 * x[26];
	waterx_pd[61] = v[0] + v[1];
	waterx_pd[60] = x[12] - x[26];
	v[0] = waterx_pd[61] * waterx_pd[60];
	v[3] = pow(x[40], 5.33);
	if (errno) in_trouble2("pow",x[40],5.33);
	if (x[40] > 0.) {
	waterx_pd[62] = 5.33*(v[3]/x[40]);
	} else if (5.33 > 1.) {
	waterx_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[40],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[63] = 1. / v[3];
	waterx_pd[64] = -v[4] * waterx_pd[63];
	v[3] = -v[4];
	t1 = v[3] + -x[48];
	t1 += x[49];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = 2.06257339263358 * x[13];
	v[1] = 2.06257339263358 * x[27];
	waterx_pd[66] = v[0] + v[1];
	waterx_pd[65] = x[13] - x[27];
	v[0] = waterx_pd[66] * waterx_pd[65];
	v[3] = pow(x[41], 5.33);
	if (errno) in_trouble2("pow",x[41],5.33);
	if (x[41] > 0.) {
	waterx_pd[67] = 5.33*(v[3]/x[41]);
	} else if (5.33 > 1.) {
	waterx_pd[67] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[41],5.33);
	}
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[4] = v[0] / v[3];
	waterx_pd[68] = 1. / v[3];
	waterx_pd[69] = -v[4] * waterx_pd[68];
	v[3] = -v[4];
	t1 = v[3] + x[49];
	t1 += -x[50];
	c[13] = t1;

  /***  constraint 15  ***/

	waterx_pd[70] = 1.02 * x[45];
	waterx_pd[71] = x[43] + -3.25;
	v[1] = waterx_pd[70] * waterx_pd[71];
	v[2] = -v[1];
	waterx_pd[72] = 1.02 * x[44];
	waterx_pd[73] = x[42] + -6.5;
	v[3] = waterx_pd[72] * waterx_pd[73];
	v[4] = v[2] - v[3];
	t1 = v[4] + x[52];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = pow(x[28], 1.29);
	if (errno) in_trouble2("pow",x[28],1.29);
	if (x[28] > 0.) {
	waterx_pd[74] = 1.29*(v[0]/x[28]);
	} else if (1.29 > 1.) {
	waterx_pd[74] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],1.29);
	}
	v[0] *= -105.32392890506854;
	v[1] = pow(x[29], 1.29);
	if (errno) in_trouble2("pow",x[29],1.29);
	if (x[29] > 0.) {
	waterx_pd[75] = 1.29*(v[1]/x[29]);
	} else if (1.29 > 1.) {
	waterx_pd[75] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],1.29);
	}
	v[1] *= -88.43043876403648;
	v[0] += v[1];
	v[1] = pow(x[30], 1.29);
	if (errno) in_trouble2("pow",x[30],1.29);
	if (x[30] > 0.) {
	waterx_pd[76] = 1.29*(v[1]/x[30]);
	} else if (1.29 > 1.) {
	waterx_pd[76] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],1.29);
	}
	v[1] *= -172.63794484411585;
	v[0] += v[1];
	v[1] = pow(x[31], 1.29);
	if (errno) in_trouble2("pow",x[31],1.29);
	if (x[31] > 0.) {
	waterx_pd[77] = 1.29*(v[1]/x[31]);
	} else if (1.29 > 1.) {
	waterx_pd[77] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],1.29);
	}
	v[1] *= -138.17239232205554;
	v[0] += v[1];
	v[1] = pow(x[32], 1.29);
	if (errno) in_trouble2("pow",x[32],1.29);
	if (x[32] > 0.) {
	waterx_pd[78] = 1.29*(v[1]/x[32]);
	} else if (1.29 > 1.) {
	waterx_pd[78] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[32],1.29);
	}
	v[1] *= -160.9342722977303;
	v[0] += v[1];
	v[1] = pow(x[33], 1.29);
	if (errno) in_trouble2("pow",x[33],1.29);
	if (x[33] > 0.) {
	waterx_pd[79] = 1.29*(v[1]/x[33]);
	} else if (1.29 > 1.) {
	waterx_pd[79] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[33],1.29);
	}
	v[1] *= -89.7;
	v[0] += v[1];
	v[1] = pow(x[34], 1.29);
	if (errno) in_trouble2("pow",x[34],1.29);
	if (x[34] > 0.) {
	waterx_pd[80] = 1.29*(v[1]/x[34]);
	} else if (1.29 > 1.) {
	waterx_pd[80] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],1.29);
	}
	v[1] *= -92.05748204247148;
	v[0] += v[1];
	v[1] = pow(x[35], 1.29);
	if (errno) in_trouble2("pow",x[35],1.29);
	if (x[35] > 0.) {
	waterx_pd[81] = 1.29*(v[1]/x[35]);
	} else if (1.29 > 1.) {
	waterx_pd[81] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[35],1.29);
	}
	v[1] *= -86.52555980749307;
	v[0] += v[1];
	v[1] = pow(x[36], 1.29);
	if (errno) in_trouble2("pow",x[36],1.29);
	if (x[36] > 0.) {
	waterx_pd[82] = 1.29*(v[1]/x[36]);
	} else if (1.29 > 1.) {
	waterx_pd[82] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],1.29);
	}
	v[1] *= -107.33880938411761;
	v[0] += v[1];
	v[1] = pow(x[37], 1.29);
	if (errno) in_trouble2("pow",x[37],1.29);
	if (x[37] > 0.) {
	waterx_pd[83] = 1.29*(v[1]/x[37]);
	} else if (1.29 > 1.) {
	waterx_pd[83] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],1.29);
	}
	v[1] *= -89.7;
	v[0] += v[1];
	v[1] = pow(x[38], 1.29);
	if (errno) in_trouble2("pow",x[38],1.29);
	if (x[38] > 0.) {
	waterx_pd[84] = 1.29*(v[1]/x[38]);
	} else if (1.29 > 1.) {
	waterx_pd[84] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],1.29);
	}
	v[1] *= -143.57969912212513;
	v[0] += v[1];
	v[1] = pow(x[39], 1.29);
	if (errno) in_trouble2("pow",x[39],1.29);
	if (x[39] > 0.) {
	waterx_pd[85] = 1.29*(v[1]/x[39]);
	} else if (1.29 > 1.) {
	waterx_pd[85] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],1.29);
	}
	v[1] *= -83.44436769488982;
	v[0] += v[1];
	v[1] = pow(x[40], 1.29);
	if (errno) in_trouble2("pow",x[40],1.29);
	if (x[40] > 0.) {
	waterx_pd[86] = 1.29*(v[1]/x[40]);
	} else if (1.29 > 1.) {
	waterx_pd[86] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[40],1.29);
	}
	v[1] *= -77.14434522374242;
	v[0] += v[1];
	v[1] = pow(x[41], 1.29);
	if (errno) in_trouble2("pow",x[41],1.29);
	if (x[41] > 0.) {
	waterx_pd[87] = 1.29*(v[1]/x[41]);
	} else if (1.29 > 1.) {
	waterx_pd[87] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[41],1.29);
	}
	v[1] *= -138.17239232205554;
	v[0] += v[1];
	t1 = v[0] + x[53];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[44];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[45];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[0];
	t1 += x[3];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[14];
	t1 += -x[17];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[1];
	t1 += x[7];
	t1 += x[11];
	t1 += -x[15];
	t1 += -x[21];
	t1 += -x[25];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[8];
	t1 += -x[11];
	t1 += x[12];
	t1 += -x[22];
	t1 += x[25];
	t1 += -x[26];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[4];
	t1 += x[9];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[18];
	t1 += -x[23];
	t1 += x[26];
	t1 += x[27];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[5];
	t1 += x[13];
	t1 += -x[19];
	t1 += -x[27];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[2];
	t1 += x[6];
	t1 += x[10];
	t1 += -x[16];
	t1 += -x[20];
	t1 += -x[24];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.2*x[44];
	t1 += -0.17*x[45];
	t1 += x[54];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[11];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[14];
	t1 += -x[15];
	t1 += -x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	t1 += -x[20];
	t1 += -x[21];
	t1 += -x[22];
	t1 += -x[23];
	t1 += -x[24];
	t1 += -x[25];
	t1 += -x[26];
	t1 += -x[27];
	t1 += x[55];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[0];
	t1 += -2.*x[56];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[1];
	t1 += -2.*x[57];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[2];
	t1 += -2.*x[58];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[3];
	t1 += -2.*x[59];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[4];
	t1 += -2.*x[60];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[5];
	t1 += -2.*x[61];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[6];
	t1 += -2.*x[62];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[7];
	t1 += -2.*x[63];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[8];
	t1 += -2.*x[64];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[9];
	t1 += -2.*x[65];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[10];
	t1 += -2.*x[66];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[11];
	t1 += -2.*x[67];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[12];
	t1 += -2.*x[68];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[13];
	t1 += -2.*x[69];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[14];
	t1 += 2.*x[56];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[15];
	t1 += 2.*x[57];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[16];
	t1 += 2.*x[58];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[17];
	t1 += 2.*x[59];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[18];
	t1 += 2.*x[60];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[19];
	t1 += 2.*x[61];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[20];
	t1 += 2.*x[62];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[21];
	t1 += 2.*x[63];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[22];
	t1 += 2.*x[64];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[23];
	t1 += 2.*x[65];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[24];
	t1 += 2.*x[66];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[25];
	t1 += 2.*x[67];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[26];
	t1 += 2.*x[68];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[27];
	t1 += 2.*x[69];
	c[53] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[140] = -waterx_pd[4]*waterx_pd[2];
	dv[0] = -waterx_pd[3]*waterx_pd[1];
	dv[1] = -waterx_pd[3]*waterx_pd[0];
	J[70] = -dv[0];
	J[0] = dv[0];
	dv[2] = dv[1];
	J[70] += dv[2]*1.5722267648148;
	J[0] += dv[1]*1.5722267648148;
	J[168] = 1.;
	J[183] = -1.;

   /*** derivatives for constraint 2 ***/

	J[142] = -waterx_pd[9]*waterx_pd[7];
	dv[0] = -waterx_pd[8]*waterx_pd[6];
	dv[1] = -waterx_pd[8]*waterx_pd[5];
	J[75] = -dv[0];
	J[5] = dv[0];
	dv[2] = dv[1];
	J[75] += dv[2]*1.32004857865156;
	J[5] += dv[1]*1.32004857865156;
	J[169] = 1.;
	J[189] = -1.;

   /*** derivatives for constraint 3 ***/

	J[144] = -waterx_pd[14]*waterx_pd[12];
	dv[0] = -waterx_pd[13]*waterx_pd[11];
	dv[1] = -waterx_pd[13]*waterx_pd[10];
	J[80] = -dv[0];
	J[10] = dv[0];
	dv[2] = dv[1];
	J[80] += dv[2]*2.57705917665854;
	J[10] += dv[1]*2.57705917665854;
	J[170] = 1.;
	J[201] = -1.;

   /*** derivatives for constraint 4 ***/

	J[146] = -waterx_pd[19]*waterx_pd[17];
	dv[0] = -waterx_pd[18]*waterx_pd[16];
	dv[1] = -waterx_pd[18]*waterx_pd[15];
	J[85] = -dv[0];
	J[15] = dv[0];
	dv[2] = dv[1];
	J[85] += dv[2]*2.06257339263358;
	J[15] += dv[1]*2.06257339263358;
	J[172] = 1.;
	J[184] = -1.;

   /*** derivatives for constraint 5 ***/

	J[148] = -waterx_pd[24]*waterx_pd[22];
	dv[0] = -waterx_pd[23]*waterx_pd[21];
	dv[1] = -waterx_pd[23]*waterx_pd[20];
	J[90] = -dv[0];
	J[20] = dv[0];
	dv[2] = dv[1];
	J[90] += dv[2]*2.40235218067626;
	J[20] += dv[1]*2.40235218067626;
	J[173] = 1.;
	J[195] = -1.;

   /*** derivatives for constraint 6 ***/

	J[150] = -waterx_pd[29]*waterx_pd[27];
	dv[0] = -waterx_pd[28]*waterx_pd[26];
	dv[1] = -waterx_pd[28]*waterx_pd[25];
	J[95] = -dv[0];
	J[25] = dv[0];
	dv[2] = dv[1];
	J[95] += dv[2]*1.339;
	J[25] += dv[1]*1.339;
	J[174] = 1.;
	J[199] = -1.;

   /*** derivatives for constraint 7 ***/

	J[152] = -waterx_pd[34]*waterx_pd[32];
	dv[0] = -waterx_pd[33]*waterx_pd[31];
	dv[1] = -waterx_pd[33]*waterx_pd[30];
	J[100] = -dv[0];
	J[30] = dv[0];
	dv[2] = dv[1];
	J[100] += dv[2]*1.37419139860501;
	J[30] += dv[1]*1.37419139860501;
	J[175] = 1.;
	J[202] = -1.;

   /*** derivatives for constraint 8 ***/

	J[154] = -waterx_pd[39]*waterx_pd[37];
	dv[0] = -waterx_pd[38]*waterx_pd[36];
	dv[1] = -waterx_pd[38]*waterx_pd[35];
	J[105] = -dv[0];
	J[35] = dv[0];
	dv[2] = dv[1];
	J[105] += dv[2]*1.2916134290104;
	J[35] += dv[1]*1.2916134290104;
	J[185] = 1.;
	J[190] = -1.;

   /*** derivatives for constraint 9 ***/

	J[156] = -waterx_pd[44]*waterx_pd[42];
	dv[0] = -waterx_pd[43]*waterx_pd[41];
	dv[1] = -waterx_pd[43]*waterx_pd[40];
	J[110] = -dv[0];
	J[40] = dv[0];
	dv[2] = dv[1];
	J[110] += dv[2]*1.60230396616872;
	J[40] += dv[1]*1.60230396616872;
	J[186] = 1.;
	J[192] = -1.;

   /*** derivatives for constraint 10 ***/

	J[158] = -waterx_pd[49]*waterx_pd[47];
	dv[0] = -waterx_pd[48]*waterx_pd[46];
	dv[1] = -waterx_pd[48]*waterx_pd[45];
	J[115] = -dv[0];
	J[45] = dv[0];
	dv[2] = dv[1];
	J[115] += dv[2]*1.339;
	J[45] += dv[1]*1.339;
	J[187] = 1.;
	J[196] = -1.;

   /*** derivatives for constraint 11 ***/

	J[160] = -waterx_pd[54]*waterx_pd[52];
	dv[0] = -waterx_pd[53]*waterx_pd[51];
	dv[1] = -waterx_pd[53]*waterx_pd[50];
	J[120] = -dv[0];
	J[50] = dv[0];
	dv[2] = dv[1];
	J[120] += dv[2]*2.14329116080854;
	J[50] += dv[1]*2.14329116080854;
	J[188] = 1.;
	J[203] = -1.;

   /*** derivatives for constraint 12 ***/

	J[162] = -waterx_pd[59]*waterx_pd[57];
	dv[0] = -waterx_pd[58]*waterx_pd[56];
	dv[1] = -waterx_pd[58]*waterx_pd[55];
	J[125] = -dv[0];
	J[55] = dv[0];
	dv[2] = dv[1];
	J[125] += dv[2]*1.24561882211213;
	J[55] += dv[1]*1.24561882211213;
	J[191] = -1.;
	J[193] = 1.;

   /*** derivatives for constraint 13 ***/

	J[164] = -waterx_pd[64]*waterx_pd[62];
	dv[0] = -waterx_pd[63]*waterx_pd[61];
	dv[1] = -waterx_pd[63]*waterx_pd[60];
	J[130] = -dv[0];
	J[60] = dv[0];
	dv[2] = dv[1];
	J[130] += dv[2]*1.15157500841239;
	J[60] += dv[1]*1.15157500841239;
	J[194] = -1.;
	J[197] = 1.;

   /*** derivatives for constraint 14 ***/

	J[166] = -waterx_pd[69]*waterx_pd[67];
	dv[0] = -waterx_pd[68]*waterx_pd[66];
	dv[1] = -waterx_pd[68]*waterx_pd[65];
	J[135] = -dv[0];
	J[65] = dv[0];
	dv[2] = dv[1];
	J[135] += dv[2]*2.06257339263358;
	J[65] += dv[1]*2.06257339263358;
	J[198] = 1.;
	J[200] = -1.;

   /*** derivatives for constraint 15 ***/

	J[171] = -waterx_pd[72];
	J[177] = -waterx_pd[73]*1.02;
	J[176] = -waterx_pd[70];
	J[180] = -waterx_pd[71]*1.02;
	J[204] = 1.;

   /*** derivatives for constraint 16 ***/

	J[167] = -138.17239232205554*waterx_pd[87];
	J[165] = -77.14434522374242*waterx_pd[86];
	J[163] = -83.44436769488982*waterx_pd[85];
	J[161] = -143.57969912212513*waterx_pd[84];
	J[159] = -89.7*waterx_pd[83];
	J[157] = -107.33880938411761*waterx_pd[82];
	J[155] = -86.52555980749307*waterx_pd[81];
	J[153] = -92.05748204247148*waterx_pd[80];
	J[151] = -89.7*waterx_pd[79];
	J[149] = -160.9342722977303*waterx_pd[78];
	J[147] = -138.17239232205554*waterx_pd[77];
	J[145] = -172.63794484411585*waterx_pd[76];
	J[143] = -88.43043876403648*waterx_pd[75];
	J[141] = -105.32392890506854*waterx_pd[74];
	J[205] = 1.;

   /*** derivatives for constraint 17 ***/

	J[1] = -1.;
	J[6] = -1.;
	J[11] = -1.;
	J[71] = 1.;
	J[76] = 1.;
	J[81] = 1.;
	J[178] = 1.;

   /*** derivatives for constraint 18 ***/

	J[16] = -1.;
	J[21] = -1.;
	J[26] = -1.;
	J[31] = -1.;
	J[86] = 1.;
	J[91] = 1.;
	J[96] = 1.;
	J[101] = 1.;
	J[181] = 1.;

   /*** derivatives for constraint 19 ***/

	J[2] = 1.;
	J[17] = 1.;
	J[36] = -1.;
	J[41] = -1.;
	J[46] = -1.;
	J[51] = -1.;
	J[72] = -1.;
	J[87] = -1.;
	J[106] = 1.;
	J[111] = 1.;
	J[116] = 1.;
	J[121] = 1.;

   /*** derivatives for constraint 20 ***/

	J[7] = 1.;
	J[37] = 1.;
	J[56] = 1.;
	J[77] = -1.;
	J[107] = -1.;
	J[126] = -1.;

   /*** derivatives for constraint 21 ***/

	J[42] = 1.;
	J[57] = -1.;
	J[61] = 1.;
	J[112] = -1.;
	J[127] = 1.;
	J[131] = -1.;

   /*** derivatives for constraint 22 ***/

	J[22] = 1.;
	J[47] = 1.;
	J[62] = -1.;
	J[66] = -1.;
	J[92] = -1.;
	J[117] = -1.;
	J[132] = 1.;
	J[136] = 1.;

   /*** derivatives for constraint 23 ***/

	J[27] = 1.;
	J[67] = 1.;
	J[97] = -1.;
	J[137] = -1.;

   /*** derivatives for constraint 24 ***/

	J[12] = 1.;
	J[32] = 1.;
	J[52] = 1.;
	J[82] = -1.;
	J[102] = -1.;
	J[122] = -1.;

   /*** derivatives for constraint 25 ***/

	J[179] = -0.2;
	J[182] = -0.17;
	J[206] = 1.;

   /*** derivatives for constraint 26 ***/

	J[3] = -1.;
	J[8] = -1.;
	J[13] = -1.;
	J[18] = -1.;
	J[23] = -1.;
	J[28] = -1.;
	J[33] = -1.;
	J[38] = -1.;
	J[43] = -1.;
	J[48] = -1.;
	J[53] = -1.;
	J[58] = -1.;
	J[63] = -1.;
	J[68] = -1.;
	J[73] = -1.;
	J[78] = -1.;
	J[83] = -1.;
	J[88] = -1.;
	J[93] = -1.;
	J[98] = -1.;
	J[103] = -1.;
	J[108] = -1.;
	J[113] = -1.;
	J[118] = -1.;
	J[123] = -1.;
	J[128] = -1.;
	J[133] = -1.;
	J[138] = -1.;
	J[207] = 1.;

   /*** derivatives for constraint 27 ***/

	J[4] = 1.;
	J[208] = -2.;

   /*** derivatives for constraint 28 ***/

	J[9] = 1.;
	J[210] = -2.;

   /*** derivatives for constraint 29 ***/

	J[14] = 1.;
	J[212] = -2.;

   /*** derivatives for constraint 30 ***/

	J[19] = 1.;
	J[214] = -2.;

   /*** derivatives for constraint 31 ***/

	J[24] = 1.;
	J[216] = -2.;

   /*** derivatives for constraint 32 ***/

	J[29] = 1.;
	J[218] = -2.;

   /*** derivatives for constraint 33 ***/

	J[34] = 1.;
	J[220] = -2.;

   /*** derivatives for constraint 34 ***/

	J[39] = 1.;
	J[222] = -2.;

   /*** derivatives for constraint 35 ***/

	J[44] = 1.;
	J[224] = -2.;

   /*** derivatives for constraint 36 ***/

	J[49] = 1.;
	J[226] = -2.;

   /*** derivatives for constraint 37 ***/

	J[54] = 1.;
	J[228] = -2.;

   /*** derivatives for constraint 38 ***/

	J[59] = 1.;
	J[230] = -2.;

   /*** derivatives for constraint 39 ***/

	J[64] = 1.;
	J[232] = -2.;

   /*** derivatives for constraint 40 ***/

	J[69] = 1.;
	J[234] = -2.;

   /*** derivatives for constraint 41 ***/

	J[74] = 1.;
	J[209] = 2.;

   /*** derivatives for constraint 42 ***/

	J[79] = 1.;
	J[211] = 2.;

   /*** derivatives for constraint 43 ***/

	J[84] = 1.;
	J[213] = 2.;

   /*** derivatives for constraint 44 ***/

	J[89] = 1.;
	J[215] = 2.;

   /*** derivatives for constraint 45 ***/

	J[94] = 1.;
	J[217] = 2.;

   /*** derivatives for constraint 46 ***/

	J[99] = 1.;
	J[219] = 2.;

   /*** derivatives for constraint 47 ***/

	J[104] = 1.;
	J[221] = 2.;

   /*** derivatives for constraint 48 ***/

	J[109] = 1.;
	J[223] = 2.;

   /*** derivatives for constraint 49 ***/

	J[114] = 1.;
	J[225] = 2.;

   /*** derivatives for constraint 50 ***/

	J[119] = 1.;
	J[227] = 2.;

   /*** derivatives for constraint 51 ***/

	J[124] = 1.;
	J[229] = 2.;

   /*** derivatives for constraint 52 ***/

	J[129] = 1.;
	J[231] = 2.;

   /*** derivatives for constraint 53 ***/

	J[134] = 1.;
	J[233] = 2.;

   /*** derivatives for constraint 54 ***/

	J[139] = 1.;
	J[235] = 2.;
	}
}
#ifdef __cplusplus
	}
#endif
