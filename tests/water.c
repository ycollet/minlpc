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
 fint water_auxcom_[1] = { 16 /* nlc */ };
 fint water_funcom_[157] = {
	41 /* nvar */,
	1 /* nobj */,
	25 /* ncon */,
	109 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	25,
	28,
	31,
	34,
	37,
	40,
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
	75,
	80,
	83,
	86,
	92,
	95,
	98,
	102,
	104,
	107,
	108,
	109,
	110,

	/* rownos */
	1,
	17,
	19,
	2,
	17,
	20,
	3,
	17,
	24,
	4,
	18,
	19,
	5,
	18,
	22,
	6,
	18,
	23,
	7,
	18,
	24,
	8,
	19,
	20,
	9,
	19,
	21,
	10,
	19,
	22,
	11,
	19,
	24,
	12,
	20,
	21,
	13,
	21,
	22,
	14,
	22,
	23,
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
	25 };

 real water_boundc_[1+82+50] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.};

 real water_x0comn_[41] = {
		0.,
		0.,
		0.,
		0.,
		0.,
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
		7.5,
		4.25,
		0.961470588235294,
		2.30752941176471,
		17.58,
		15.92,
		13.925,
		13.26,
		9.76,
		17.08,
		0.,
		0.,
		0. };

 static real water_pd[102];
static real water_old_x[41];
static int water_xkind = -1;

 static int
water_xcheck(real *x)
{
	real *x1 = water_old_x, *xe = x + 41;
	errno = 0;
	if (water_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	water_xkind = 0;
	return 1;
	}
 real
water_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (water_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 10.*x[38];
	rv += x[39];
	rv += 10.*x[40];
	;}

	if (wantfg & 2) {
	g[38] = 10.;
	g[39] = 1.;
	g[40] = 10.;
	}

	return rv;
}

 void
water_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (water_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] < 0.) {
	water_pd[0] = -x[0];
	water_pd[1] = -1.;
	} else {
	water_pd[0] = x[0];
	water_pd[1] = 1.;
	}
	water_pd[2] = -1.5722267648148 * water_pd[0];
	v[0] = water_pd[2] * x[0];
	v[1] = pow(x[14], 5.33);
	if (errno) in_trouble2("pow",x[14],5.33);
	if (x[14] > 0.) {
	water_pd[3] = 5.33*(v[1]/x[14]);
	} else if (5.33 > 1.) {
	water_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[4] = 1. / v[1];
	water_pd[5] = -v[2] * water_pd[4];
	t1 = v[2] + x[28];
	t1 += -x[32];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[1] < 0.) {
	water_pd[6] = -x[1];
	water_pd[7] = -1.;
	} else {
	water_pd[6] = x[1];
	water_pd[7] = 1.;
	}
	water_pd[8] = -1.32004857865156 * water_pd[6];
	v[0] = water_pd[8] * x[1];
	v[1] = pow(x[15], 5.33);
	if (errno) in_trouble2("pow",x[15],5.33);
	if (x[15] > 0.) {
	water_pd[9] = 5.33*(v[1]/x[15]);
	} else if (5.33 > 1.) {
	water_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[10] = 1. / v[1];
	water_pd[11] = -v[2] * water_pd[10];
	t1 = v[2] + x[28];
	t1 += -x[33];
	c[1] = t1;

  /***  constraint 3  ***/

	if (x[2] < 0.) {
	water_pd[12] = -x[2];
	water_pd[13] = -1.;
	} else {
	water_pd[12] = x[2];
	water_pd[13] = 1.;
	}
	water_pd[14] = -2.57705917665854 * water_pd[12];
	v[0] = water_pd[14] * x[2];
	v[1] = pow(x[16], 5.33);
	if (errno) in_trouble2("pow",x[16],5.33);
	if (x[16] > 0.) {
	water_pd[15] = 5.33*(v[1]/x[16]);
	} else if (5.33 > 1.) {
	water_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[16] = 1. / v[1];
	water_pd[17] = -v[2] * water_pd[16];
	t1 = v[2] + x[28];
	t1 += -x[37];
	c[2] = t1;

  /***  constraint 4  ***/

	if (x[3] < 0.) {
	water_pd[18] = -x[3];
	water_pd[19] = -1.;
	} else {
	water_pd[18] = x[3];
	water_pd[19] = 1.;
	}
	water_pd[20] = -2.06257339263358 * water_pd[18];
	v[0] = water_pd[20] * x[3];
	v[1] = pow(x[17], 5.33);
	if (errno) in_trouble2("pow",x[17],5.33);
	if (x[17] > 0.) {
	water_pd[21] = 5.33*(v[1]/x[17]);
	} else if (5.33 > 1.) {
	water_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[22] = 1. / v[1];
	water_pd[23] = -v[2] * water_pd[22];
	t1 = v[2] + x[29];
	t1 += -x[32];
	c[3] = t1;

  /***  constraint 5  ***/

	if (x[4] < 0.) {
	water_pd[24] = -x[4];
	water_pd[25] = -1.;
	} else {
	water_pd[24] = x[4];
	water_pd[25] = 1.;
	}
	water_pd[26] = -2.40235218067626 * water_pd[24];
	v[0] = water_pd[26] * x[4];
	v[1] = pow(x[18], 5.33);
	if (errno) in_trouble2("pow",x[18],5.33);
	if (x[18] > 0.) {
	water_pd[27] = 5.33*(v[1]/x[18]);
	} else if (5.33 > 1.) {
	water_pd[27] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[28] = 1. / v[1];
	water_pd[29] = -v[2] * water_pd[28];
	t1 = v[2] + x[29];
	t1 += -x[35];
	c[4] = t1;

  /***  constraint 6  ***/

	if (x[5] < 0.) {
	water_pd[30] = -x[5];
	water_pd[31] = -1.;
	} else {
	water_pd[30] = x[5];
	water_pd[31] = 1.;
	}
	water_pd[32] = -1.339 * water_pd[30];
	v[0] = water_pd[32] * x[5];
	v[1] = pow(x[19], 5.33);
	if (errno) in_trouble2("pow",x[19],5.33);
	if (x[19] > 0.) {
	water_pd[33] = 5.33*(v[1]/x[19]);
	} else if (5.33 > 1.) {
	water_pd[33] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[34] = 1. / v[1];
	water_pd[35] = -v[2] * water_pd[34];
	t1 = v[2] + x[29];
	t1 += -x[36];
	c[5] = t1;

  /***  constraint 7  ***/

	if (x[6] < 0.) {
	water_pd[36] = -x[6];
	water_pd[37] = -1.;
	} else {
	water_pd[36] = x[6];
	water_pd[37] = 1.;
	}
	water_pd[38] = -1.37419139860501 * water_pd[36];
	v[0] = water_pd[38] * x[6];
	v[1] = pow(x[20], 5.33);
	if (errno) in_trouble2("pow",x[20],5.33);
	if (x[20] > 0.) {
	water_pd[39] = 5.33*(v[1]/x[20]);
	} else if (5.33 > 1.) {
	water_pd[39] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[40] = 1. / v[1];
	water_pd[41] = -v[2] * water_pd[40];
	t1 = v[2] + x[29];
	t1 += -x[37];
	c[6] = t1;

  /***  constraint 8  ***/

	if (x[7] < 0.) {
	water_pd[42] = -x[7];
	water_pd[43] = -1.;
	} else {
	water_pd[42] = x[7];
	water_pd[43] = 1.;
	}
	water_pd[44] = -1.2916134290104 * water_pd[42];
	v[0] = water_pd[44] * x[7];
	v[1] = pow(x[21], 5.33);
	if (errno) in_trouble2("pow",x[21],5.33);
	if (x[21] > 0.) {
	water_pd[45] = 5.33*(v[1]/x[21]);
	} else if (5.33 > 1.) {
	water_pd[45] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[46] = 1. / v[1];
	water_pd[47] = -v[2] * water_pd[46];
	t1 = v[2] + x[32];
	t1 += -x[33];
	c[7] = t1;

  /***  constraint 9  ***/

	if (x[8] < 0.) {
	water_pd[48] = -x[8];
	water_pd[49] = -1.;
	} else {
	water_pd[48] = x[8];
	water_pd[49] = 1.;
	}
	water_pd[50] = -1.60230396616872 * water_pd[48];
	v[0] = water_pd[50] * x[8];
	v[1] = pow(x[22], 5.33);
	if (errno) in_trouble2("pow",x[22],5.33);
	if (x[22] > 0.) {
	water_pd[51] = 5.33*(v[1]/x[22]);
	} else if (5.33 > 1.) {
	water_pd[51] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[52] = 1. / v[1];
	water_pd[53] = -v[2] * water_pd[52];
	t1 = v[2] + x[32];
	t1 += -x[34];
	c[8] = t1;

  /***  constraint 10  ***/

	if (x[9] < 0.) {
	water_pd[54] = -x[9];
	water_pd[55] = -1.;
	} else {
	water_pd[54] = x[9];
	water_pd[55] = 1.;
	}
	water_pd[56] = -1.339 * water_pd[54];
	v[0] = water_pd[56] * x[9];
	v[1] = pow(x[23], 5.33);
	if (errno) in_trouble2("pow",x[23],5.33);
	if (x[23] > 0.) {
	water_pd[57] = 5.33*(v[1]/x[23]);
	} else if (5.33 > 1.) {
	water_pd[57] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[58] = 1. / v[1];
	water_pd[59] = -v[2] * water_pd[58];
	t1 = v[2] + x[32];
	t1 += -x[35];
	c[9] = t1;

  /***  constraint 11  ***/

	if (x[10] < 0.) {
	water_pd[60] = -x[10];
	water_pd[61] = -1.;
	} else {
	water_pd[60] = x[10];
	water_pd[61] = 1.;
	}
	water_pd[62] = -2.14329116080854 * water_pd[60];
	v[0] = water_pd[62] * x[10];
	v[1] = pow(x[24], 5.33);
	if (errno) in_trouble2("pow",x[24],5.33);
	if (x[24] > 0.) {
	water_pd[63] = 5.33*(v[1]/x[24]);
	} else if (5.33 > 1.) {
	water_pd[63] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[64] = 1. / v[1];
	water_pd[65] = -v[2] * water_pd[64];
	t1 = v[2] + x[32];
	t1 += -x[37];
	c[10] = t1;

  /***  constraint 12  ***/

	if (x[11] < 0.) {
	water_pd[66] = -x[11];
	water_pd[67] = -1.;
	} else {
	water_pd[66] = x[11];
	water_pd[67] = 1.;
	}
	water_pd[68] = -1.24561882211213 * water_pd[66];
	v[0] = water_pd[68] * x[11];
	v[1] = pow(x[25], 5.33);
	if (errno) in_trouble2("pow",x[25],5.33);
	if (x[25] > 0.) {
	water_pd[69] = 5.33*(v[1]/x[25]);
	} else if (5.33 > 1.) {
	water_pd[69] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[70] = 1. / v[1];
	water_pd[71] = -v[2] * water_pd[70];
	t1 = v[2] + -x[33];
	t1 += x[34];
	c[11] = t1;

  /***  constraint 13  ***/

	if (x[12] < 0.) {
	water_pd[72] = -x[12];
	water_pd[73] = -1.;
	} else {
	water_pd[72] = x[12];
	water_pd[73] = 1.;
	}
	water_pd[74] = -1.15157500841239 * water_pd[72];
	v[0] = water_pd[74] * x[12];
	v[1] = pow(x[26], 5.33);
	if (errno) in_trouble2("pow",x[26],5.33);
	if (x[26] > 0.) {
	water_pd[75] = 5.33*(v[1]/x[26]);
	} else if (5.33 > 1.) {
	water_pd[75] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[76] = 1. / v[1];
	water_pd[77] = -v[2] * water_pd[76];
	t1 = v[2] + -x[34];
	t1 += x[35];
	c[12] = t1;

  /***  constraint 14  ***/

	if (x[13] < 0.) {
	water_pd[78] = -x[13];
	water_pd[79] = -1.;
	} else {
	water_pd[78] = x[13];
	water_pd[79] = 1.;
	}
	water_pd[80] = -2.06257339263358 * water_pd[78];
	v[0] = water_pd[80] * x[13];
	v[1] = pow(x[27], 5.33);
	if (errno) in_trouble2("pow",x[27],5.33);
	if (x[27] > 0.) {
	water_pd[81] = 5.33*(v[1]/x[27]);
	} else if (5.33 > 1.) {
	water_pd[81] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[27],5.33);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	water_pd[82] = 1. / v[1];
	water_pd[83] = -v[2] * water_pd[82];
	t1 = v[2] + x[35];
	t1 += -x[36];
	c[13] = t1;

  /***  constraint 15  ***/

	water_pd[84] = 1.02 * x[31];
	water_pd[85] = x[29] + -3.25;
	v[1] = water_pd[84] * water_pd[85];
	v[2] = -v[1];
	water_pd[86] = 1.02 * x[30];
	water_pd[87] = x[28] + -6.5;
	v[3] = water_pd[86] * water_pd[87];
	v[4] = v[2] - v[3];
	t1 = v[4] + x[38];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = pow(x[14], 1.29);
	if (errno) in_trouble2("pow",x[14],1.29);
	if (x[14] > 0.) {
	water_pd[88] = 1.29*(v[0]/x[14]);
	} else if (1.29 > 1.) {
	water_pd[88] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],1.29);
	}
	v[0] *= -105.32392890506854;
	v[1] = pow(x[15], 1.29);
	if (errno) in_trouble2("pow",x[15],1.29);
	if (x[15] > 0.) {
	water_pd[89] = 1.29*(v[1]/x[15]);
	} else if (1.29 > 1.) {
	water_pd[89] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],1.29);
	}
	v[1] *= -88.43043876403648;
	v[0] += v[1];
	v[1] = pow(x[16], 1.29);
	if (errno) in_trouble2("pow",x[16],1.29);
	if (x[16] > 0.) {
	water_pd[90] = 1.29*(v[1]/x[16]);
	} else if (1.29 > 1.) {
	water_pd[90] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],1.29);
	}
	v[1] *= -172.63794484411585;
	v[0] += v[1];
	v[1] = pow(x[17], 1.29);
	if (errno) in_trouble2("pow",x[17],1.29);
	if (x[17] > 0.) {
	water_pd[91] = 1.29*(v[1]/x[17]);
	} else if (1.29 > 1.) {
	water_pd[91] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],1.29);
	}
	v[1] *= -138.17239232205554;
	v[0] += v[1];
	v[1] = pow(x[18], 1.29);
	if (errno) in_trouble2("pow",x[18],1.29);
	if (x[18] > 0.) {
	water_pd[92] = 1.29*(v[1]/x[18]);
	} else if (1.29 > 1.) {
	water_pd[92] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],1.29);
	}
	v[1] *= -160.9342722977303;
	v[0] += v[1];
	v[1] = pow(x[19], 1.29);
	if (errno) in_trouble2("pow",x[19],1.29);
	if (x[19] > 0.) {
	water_pd[93] = 1.29*(v[1]/x[19]);
	} else if (1.29 > 1.) {
	water_pd[93] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],1.29);
	}
	v[1] *= -89.7;
	v[0] += v[1];
	v[1] = pow(x[20], 1.29);
	if (errno) in_trouble2("pow",x[20],1.29);
	if (x[20] > 0.) {
	water_pd[94] = 1.29*(v[1]/x[20]);
	} else if (1.29 > 1.) {
	water_pd[94] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],1.29);
	}
	v[1] *= -92.05748204247148;
	v[0] += v[1];
	v[1] = pow(x[21], 1.29);
	if (errno) in_trouble2("pow",x[21],1.29);
	if (x[21] > 0.) {
	water_pd[95] = 1.29*(v[1]/x[21]);
	} else if (1.29 > 1.) {
	water_pd[95] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],1.29);
	}
	v[1] *= -86.52555980749307;
	v[0] += v[1];
	v[1] = pow(x[22], 1.29);
	if (errno) in_trouble2("pow",x[22],1.29);
	if (x[22] > 0.) {
	water_pd[96] = 1.29*(v[1]/x[22]);
	} else if (1.29 > 1.) {
	water_pd[96] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],1.29);
	}
	v[1] *= -107.33880938411761;
	v[0] += v[1];
	v[1] = pow(x[23], 1.29);
	if (errno) in_trouble2("pow",x[23],1.29);
	if (x[23] > 0.) {
	water_pd[97] = 1.29*(v[1]/x[23]);
	} else if (1.29 > 1.) {
	water_pd[97] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],1.29);
	}
	v[1] *= -89.7;
	v[0] += v[1];
	v[1] = pow(x[24], 1.29);
	if (errno) in_trouble2("pow",x[24],1.29);
	if (x[24] > 0.) {
	water_pd[98] = 1.29*(v[1]/x[24]);
	} else if (1.29 > 1.) {
	water_pd[98] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],1.29);
	}
	v[1] *= -143.57969912212513;
	v[0] += v[1];
	v[1] = pow(x[25], 1.29);
	if (errno) in_trouble2("pow",x[25],1.29);
	if (x[25] > 0.) {
	water_pd[99] = 1.29*(v[1]/x[25]);
	} else if (1.29 > 1.) {
	water_pd[99] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],1.29);
	}
	v[1] *= -83.44436769488982;
	v[0] += v[1];
	v[1] = pow(x[26], 1.29);
	if (errno) in_trouble2("pow",x[26],1.29);
	if (x[26] > 0.) {
	water_pd[100] = 1.29*(v[1]/x[26]);
	} else if (1.29 > 1.) {
	water_pd[100] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],1.29);
	}
	v[1] *= -77.14434522374242;
	v[0] += v[1];
	v[1] = pow(x[27], 1.29);
	if (errno) in_trouble2("pow",x[27],1.29);
	if (x[27] > 0.) {
	water_pd[101] = 1.29*(v[1]/x[27]);
	} else if (1.29 > 1.) {
	water_pd[101] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[27],1.29);
	}
	v[1] *= -138.17239232205554;
	v[0] += v[1];
	t1 = v[0] + x[39];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += x[30];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += x[31];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[0];
	t1 += x[3];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += -x[10];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[1];
	t1 += x[7];
	t1 += x[11];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[8];
	t1 += -x[11];
	t1 += x[12];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[4];
	t1 += x[9];
	t1 += -x[12];
	t1 += -x[13];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[5];
	t1 += x[13];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[2];
	t1 += x[6];
	t1 += x[10];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.2*x[30];
	t1 += -0.17*x[31];
	t1 += x[40];
	c[24] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[42] = water_pd[5]*water_pd[3];
	J[0] = water_pd[4]*water_pd[2];
	dv[0] = water_pd[4]*x[0];
	dv[0] = -dv[0]*1.5722267648148;
	J[0] += dv[0]*water_pd[1];
	J[70] = 1.;
	J[85] = -1.;

   /*** derivatives for constraint 2 ***/

	J[44] = water_pd[11]*water_pd[9];
	J[3] = water_pd[10]*water_pd[8];
	dv[0] = water_pd[10]*x[1];
	dv[0] = -dv[0]*1.32004857865156;
	J[3] += dv[0]*water_pd[7];
	J[71] = 1.;
	J[91] = -1.;

   /*** derivatives for constraint 3 ***/

	J[46] = water_pd[17]*water_pd[15];
	J[6] = water_pd[16]*water_pd[14];
	dv[0] = water_pd[16]*x[2];
	dv[0] = -dv[0]*2.57705917665854;
	J[6] += dv[0]*water_pd[13];
	J[72] = 1.;
	J[103] = -1.;

   /*** derivatives for constraint 4 ***/

	J[48] = water_pd[23]*water_pd[21];
	J[9] = water_pd[22]*water_pd[20];
	dv[0] = water_pd[22]*x[3];
	dv[0] = -dv[0]*2.06257339263358;
	J[9] += dv[0]*water_pd[19];
	J[74] = 1.;
	J[86] = -1.;

   /*** derivatives for constraint 5 ***/

	J[50] = water_pd[29]*water_pd[27];
	J[12] = water_pd[28]*water_pd[26];
	dv[0] = water_pd[28]*x[4];
	dv[0] = -dv[0]*2.40235218067626;
	J[12] += dv[0]*water_pd[25];
	J[75] = 1.;
	J[97] = -1.;

   /*** derivatives for constraint 6 ***/

	J[52] = water_pd[35]*water_pd[33];
	J[15] = water_pd[34]*water_pd[32];
	dv[0] = water_pd[34]*x[5];
	dv[0] = -dv[0]*1.339;
	J[15] += dv[0]*water_pd[31];
	J[76] = 1.;
	J[101] = -1.;

   /*** derivatives for constraint 7 ***/

	J[54] = water_pd[41]*water_pd[39];
	J[18] = water_pd[40]*water_pd[38];
	dv[0] = water_pd[40]*x[6];
	dv[0] = -dv[0]*1.37419139860501;
	J[18] += dv[0]*water_pd[37];
	J[77] = 1.;
	J[104] = -1.;

   /*** derivatives for constraint 8 ***/

	J[56] = water_pd[47]*water_pd[45];
	J[21] = water_pd[46]*water_pd[44];
	dv[0] = water_pd[46]*x[7];
	dv[0] = -dv[0]*1.2916134290104;
	J[21] += dv[0]*water_pd[43];
	J[87] = 1.;
	J[92] = -1.;

   /*** derivatives for constraint 9 ***/

	J[58] = water_pd[53]*water_pd[51];
	J[24] = water_pd[52]*water_pd[50];
	dv[0] = water_pd[52]*x[8];
	dv[0] = -dv[0]*1.60230396616872;
	J[24] += dv[0]*water_pd[49];
	J[88] = 1.;
	J[94] = -1.;

   /*** derivatives for constraint 10 ***/

	J[60] = water_pd[59]*water_pd[57];
	J[27] = water_pd[58]*water_pd[56];
	dv[0] = water_pd[58]*x[9];
	dv[0] = -dv[0]*1.339;
	J[27] += dv[0]*water_pd[55];
	J[89] = 1.;
	J[98] = -1.;

   /*** derivatives for constraint 11 ***/

	J[62] = water_pd[65]*water_pd[63];
	J[30] = water_pd[64]*water_pd[62];
	dv[0] = water_pd[64]*x[10];
	dv[0] = -dv[0]*2.14329116080854;
	J[30] += dv[0]*water_pd[61];
	J[90] = 1.;
	J[105] = -1.;

   /*** derivatives for constraint 12 ***/

	J[64] = water_pd[71]*water_pd[69];
	J[33] = water_pd[70]*water_pd[68];
	dv[0] = water_pd[70]*x[11];
	dv[0] = -dv[0]*1.24561882211213;
	J[33] += dv[0]*water_pd[67];
	J[93] = -1.;
	J[95] = 1.;

   /*** derivatives for constraint 13 ***/

	J[66] = water_pd[77]*water_pd[75];
	J[36] = water_pd[76]*water_pd[74];
	dv[0] = water_pd[76]*x[12];
	dv[0] = -dv[0]*1.15157500841239;
	J[36] += dv[0]*water_pd[73];
	J[96] = -1.;
	J[99] = 1.;

   /*** derivatives for constraint 14 ***/

	J[68] = water_pd[83]*water_pd[81];
	J[39] = water_pd[82]*water_pd[80];
	dv[0] = water_pd[82]*x[13];
	dv[0] = -dv[0]*2.06257339263358;
	J[39] += dv[0]*water_pd[79];
	J[100] = 1.;
	J[102] = -1.;

   /*** derivatives for constraint 15 ***/

	J[73] = -water_pd[86];
	J[79] = -water_pd[87]*1.02;
	J[78] = -water_pd[84];
	J[82] = -water_pd[85]*1.02;
	J[106] = 1.;

   /*** derivatives for constraint 16 ***/

	J[69] = -138.17239232205554*water_pd[101];
	J[67] = -77.14434522374242*water_pd[100];
	J[65] = -83.44436769488982*water_pd[99];
	J[63] = -143.57969912212513*water_pd[98];
	J[61] = -89.7*water_pd[97];
	J[59] = -107.33880938411761*water_pd[96];
	J[57] = -86.52555980749307*water_pd[95];
	J[55] = -92.05748204247148*water_pd[94];
	J[53] = -89.7*water_pd[93];
	J[51] = -160.9342722977303*water_pd[92];
	J[49] = -138.17239232205554*water_pd[91];
	J[47] = -172.63794484411585*water_pd[90];
	J[45] = -88.43043876403648*water_pd[89];
	J[43] = -105.32392890506854*water_pd[88];
	J[107] = 1.;

   /*** derivatives for constraint 17 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[7] = -1.;
	J[80] = 1.;

   /*** derivatives for constraint 18 ***/

	J[10] = -1.;
	J[13] = -1.;
	J[16] = -1.;
	J[19] = -1.;
	J[83] = 1.;

   /*** derivatives for constraint 19 ***/

	J[2] = 1.;
	J[11] = 1.;
	J[22] = -1.;
	J[25] = -1.;
	J[28] = -1.;
	J[31] = -1.;

   /*** derivatives for constraint 20 ***/

	J[5] = 1.;
	J[23] = 1.;
	J[34] = 1.;

   /*** derivatives for constraint 21 ***/

	J[26] = 1.;
	J[35] = -1.;
	J[37] = 1.;

   /*** derivatives for constraint 22 ***/

	J[14] = 1.;
	J[29] = 1.;
	J[38] = -1.;
	J[40] = -1.;

   /*** derivatives for constraint 23 ***/

	J[17] = 1.;
	J[41] = 1.;

   /*** derivatives for constraint 24 ***/

	J[8] = 1.;
	J[20] = 1.;
	J[32] = 1.;

   /*** derivatives for constraint 25 ***/

	J[81] = -0.2;
	J[84] = -0.17;
	J[108] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
