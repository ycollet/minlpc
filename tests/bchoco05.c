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
 fint bchoco05_auxcom_[1] = { 30 /* nlc */ };
 fint bchoco05_funcom_[431] = {
	90 /* nvar */,
	1 /* nobj */,
	103 /* ncon */,
	334 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	7,
	11,
	16,
	22,
	28,
	34,
	40,
	45,
	50,
	56,
	62,
	68,
	74,
	77,
	82,
	85,
	88,
	93,
	96,
	99,
	102,
	104,
	106,
	110,
	117,
	120,
	123,
	126,
	133,
	136,
	139,
	142,
	149,
	152,
	155,
	158,
	165,
	168,
	171,
	174,
	178,
	180,
	182,
	184,
	192,
	197,
	203,
	210,
	217,
	224,
	231,
	233,
	236,
	240,
	244,
	248,
	252,
	256,
	260,
	262,
	264,
	266,
	268,
	270,
	272,
	274,
	276,
	278,
	280,
	282,
	284,
	286,
	288,
	290,
	292,
	293,
	294,
	295,
	297,
	299,
	301,
	302,
	303,
	304,
	305,
	310,
	316,
	322,
	329,
	335,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	60,
	62,
	1,
	2,
	3,
	62,
	63,
	2,
	3,
	4,
	62,
	63,
	64,
	3,
	4,
	5,
	63,
	64,
	65,
	4,
	5,
	6,
	64,
	65,
	66,
	5,
	6,
	61,
	65,
	66,
	67,
	29,
	30,
	43,
	49,
	68,
	29,
	30,
	44,
	50,
	69,
	28,
	29,
	30,
	45,
	51,
	70,
	28,
	29,
	30,
	46,
	52,
	71,
	28,
	29,
	30,
	47,
	53,
	72,
	28,
	29,
	30,
	48,
	54,
	73,
	7,
	8,
	82,
	7,
	8,
	9,
	10,
	85,
	7,
	9,
	86,
	8,
	10,
	87,
	7,
	9,
	10,
	11,
	12,
	8,
	9,
	11,
	10,
	12,
	88,
	9,
	11,
	12,
	10,
	11,
	12,
	89,
	13,
	14,
	15,
	91,
	13,
	14,
	15,
	16,
	17,
	18,
	95,
	13,
	16,
	96,
	14,
	17,
	97,
	15,
	18,
	98,
	13,
	16,
	17,
	18,
	19,
	20,
	21,
	14,
	16,
	19,
	15,
	17,
	20,
	18,
	21,
	99,
	16,
	19,
	20,
	21,
	22,
	23,
	24,
	17,
	19,
	22,
	18,
	20,
	23,
	21,
	24,
	100,
	19,
	22,
	23,
	24,
	25,
	26,
	27,
	20,
	22,
	25,
	21,
	23,
	26,
	24,
	27,
	101,
	22,
	25,
	26,
	27,
	23,
	25,
	24,
	26,
	27,
	102,
	29,
	30,
	35,
	41,
	47,
	53,
	58,
	59,
	2,
	31,
	37,
	60,
	68,
	1,
	3,
	32,
	38,
	68,
	69,
	2,
	4,
	33,
	39,
	68,
	69,
	70,
	3,
	5,
	34,
	40,
	69,
	70,
	71,
	4,
	6,
	35,
	41,
	70,
	71,
	72,
	5,
	36,
	42,
	61,
	71,
	72,
	73,
	60,
	74,
	1,
	74,
	75,
	2,
	74,
	75,
	76,
	3,
	75,
	76,
	77,
	4,
	76,
	77,
	78,
	5,
	77,
	78,
	79,
	6,
	78,
	79,
	80,
	61,
	79,
	80,
	81,
	62,
	87,
	63,
	84,
	64,
	86,
	65,
	83,
	66,
	85,
	67,
	82,
	74,
	98,
	75,
	94,
	76,
	97,
	77,
	93,
	78,
	96,
	79,
	92,
	80,
	95,
	81,
	91,
	7,
	83,
	8,
	84,
	11,
	12,
	90,
	13,
	92,
	14,
	93,
	15,
	94,
	25,
	26,
	27,
	103,
	31,
	37,
	43,
	49,
	55,
	32,
	38,
	44,
	50,
	55,
	56,
	33,
	39,
	45,
	51,
	56,
	57,
	30,
	34,
	40,
	46,
	52,
	57,
	58,
	28,
	36,
	42,
	48,
	54,
	59 };

 real bchoco05_boundc_[1+180+206] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.95,
		1.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
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
		1.e-05,
		10.,
		1.e-05,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		0.,
		1.,
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
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		0.001,
		10.,
		1.e-05,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real bchoco05_x0comn_[90] = {
		0.95,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.e-05,
		1.e-05,
		0.001,
		0.001,
		1.e-05,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		1.e-05,
		1.e-05,
		0.001,
		0.001,
		0.001,
		1.e-05,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		1.e-05,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		1.e-05,
		0.,
		0.,
		0.001,
		0.001,
		0.001,
		1.e-05,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0. };

 static real bchoco05_pd[96];
static real bchoco05_old_x[90];
static int bchoco05_xkind = -1;

 static int
bchoco05_xcheck(real *x)
{
	real *x1 = bchoco05_old_x, *xe = x + 90;
	errno = 0;
	if (bchoco05_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	bchoco05_xkind = 0;
	return 1;
	}
 real
bchoco05_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (bchoco05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	}

	return rv;
}

 void
bchoco05_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[6];
	real t1;
	fint wantfg = *needfg;
	if (bchoco05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	bchoco05_pd[0] = 2.e+06 * x[0];
	v[0] = bchoco05_pd[0] * x[1];
	t1 = v[0] + -1.e+06*x[2];
	t1 += 1.e+06*x[46];
	t1 += x[52];
	c[0] = t1;

  /***  constraint 2  ***/

	bchoco05_pd[1] = 200000. * x[0];
	v[0] = bchoco05_pd[1] * x[2];
	t1 = v[0] + -100000.*x[1];
	t1 += -100000.*x[3];
	t1 += -100000.*x[45];
	t1 += 100000.*x[47];
	t1 += x[53];
	c[1] = t1;

  /***  constraint 3  ***/

	bchoco05_pd[2] = 20000. * x[0];
	v[0] = bchoco05_pd[2] * x[3];
	t1 = v[0] + -10000.*x[2];
	t1 += -10000.*x[4];
	t1 += -10000.*x[46];
	t1 += 10000.*x[48];
	t1 += x[54];
	c[2] = t1;

  /***  constraint 4  ***/

	bchoco05_pd[3] = 2000. * x[0];
	v[0] = bchoco05_pd[3] * x[4];
	t1 = v[0] + -1000.*x[3];
	t1 += -1000.*x[5];
	t1 += -1000.*x[47];
	t1 += 1000.*x[49];
	t1 += x[55];
	c[3] = t1;

  /***  constraint 5  ***/

	bchoco05_pd[4] = 200. * x[0];
	v[0] = bchoco05_pd[4] * x[5];
	t1 = v[0] + -100.*x[4];
	t1 += -100.*x[6];
	t1 += -100.*x[48];
	t1 += 100.*x[50];
	t1 += x[56];
	c[4] = t1;

  /***  constraint 6  ***/

	bchoco05_pd[5] = 20. * x[0];
	v[0] = bchoco05_pd[5] * x[6];
	t1 = v[0] + -10.*x[5];
	t1 += -10.*x[49];
	t1 += x[57];
	c[5] = t1;

  /***  constraint 7  ***/

	if (x[14] == 0.) {
	zerdiv_(&x[14]);	}
	bchoco05_pd[8] = x[13] / x[14];
	bchoco05_pd[6] = 1. / x[14];
	bchoco05_pd[7] = -bchoco05_pd[8] * bchoco05_pd[6];
	v[1] = bchoco05_pd[8] * x[15];
	t1 = v[1] + x[17];
	t1 += -x[73];
	c[6] = t1;

  /***  constraint 8  ***/

	if (x[14] == 0.) {
	zerdiv_(&x[14]);	}
	bchoco05_pd[11] = x[13] / x[14];
	bchoco05_pd[9] = 1. / x[14];
	bchoco05_pd[10] = -bchoco05_pd[11] * bchoco05_pd[9];
	v[1] = bchoco05_pd[11] * x[16];
	t1 = v[1] + x[18];
	t1 += -x[74];
	c[7] = t1;

  /***  constraint 9  ***/

	if (x[17] == 0.) {
	zerdiv_(&x[17]);	}
	bchoco05_pd[14] = x[14] / x[17];
	bchoco05_pd[12] = 1. / x[17];
	bchoco05_pd[13] = -bchoco05_pd[14] * bchoco05_pd[12];
	v[1] = bchoco05_pd[14] * x[18];
	t1 = v[1] + -x[15];
	t1 += x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	if (x[17] == 0.) {
	zerdiv_(&x[17]);	}
	bchoco05_pd[17] = x[14] / x[17];
	bchoco05_pd[15] = 1. / x[17];
	bchoco05_pd[16] = -bchoco05_pd[17] * bchoco05_pd[15];
	v[1] = bchoco05_pd[17] * x[19];
	t1 = v[1] + -x[16];
	t1 += x[21];
	c[9] = t1;

  /***  constraint 11  ***/

	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	bchoco05_pd[20] = x[17] / x[20];
	bchoco05_pd[18] = 1. / x[20];
	bchoco05_pd[19] = -bchoco05_pd[20] * bchoco05_pd[18];
	v[1] = bchoco05_pd[20] * x[21];
	t1 = v[1] + -x[18];
	t1 += x[75];
	c[10] = t1;

  /***  constraint 12  ***/

	if (x[20] == 0.) {
	zerdiv_(&x[20]);	}
	bchoco05_pd[23] = x[17] / x[20];
	bchoco05_pd[21] = 1. / x[20];
	bchoco05_pd[22] = -bchoco05_pd[23] * bchoco05_pd[21];
	v[1] = bchoco05_pd[23] * x[22];
	t1 = v[1] + -x[19];
	t1 += x[76];
	c[11] = t1;

  /***  constraint 13  ***/

	if (x[24] == 0.) {
	zerdiv_(&x[24]);	}
	bchoco05_pd[26] = x[23] / x[24];
	bchoco05_pd[24] = 1. / x[24];
	bchoco05_pd[25] = -bchoco05_pd[26] * bchoco05_pd[24];
	v[1] = bchoco05_pd[26] * x[25];
	t1 = v[1] + x[28];
	t1 += -x[78];
	c[12] = t1;

  /***  constraint 14  ***/

	if (x[24] == 0.) {
	zerdiv_(&x[24]);	}
	bchoco05_pd[29] = x[23] / x[24];
	bchoco05_pd[27] = 1. / x[24];
	bchoco05_pd[28] = -bchoco05_pd[29] * bchoco05_pd[27];
	v[1] = bchoco05_pd[29] * x[26];
	t1 = v[1] + x[29];
	t1 += -x[79];
	c[13] = t1;

  /***  constraint 15  ***/

	if (x[24] == 0.) {
	zerdiv_(&x[24]);	}
	bchoco05_pd[32] = x[23] / x[24];
	bchoco05_pd[30] = 1. / x[24];
	bchoco05_pd[31] = -bchoco05_pd[32] * bchoco05_pd[30];
	v[1] = bchoco05_pd[32] * x[27];
	t1 = v[1] + x[30];
	t1 += -x[80];
	c[14] = t1;

  /***  constraint 16  ***/

	if (x[28] == 0.) {
	zerdiv_(&x[28]);	}
	bchoco05_pd[35] = x[24] / x[28];
	bchoco05_pd[33] = 1. / x[28];
	bchoco05_pd[34] = -bchoco05_pd[35] * bchoco05_pd[33];
	v[1] = bchoco05_pd[35] * x[29];
	t1 = v[1] + -x[25];
	t1 += x[32];
	c[15] = t1;

  /***  constraint 17  ***/

	if (x[28] == 0.) {
	zerdiv_(&x[28]);	}
	bchoco05_pd[38] = x[24] / x[28];
	bchoco05_pd[36] = 1. / x[28];
	bchoco05_pd[37] = -bchoco05_pd[38] * bchoco05_pd[36];
	v[1] = bchoco05_pd[38] * x[30];
	t1 = v[1] + -x[26];
	t1 += x[33];
	c[16] = t1;

  /***  constraint 18  ***/

	if (x[28] == 0.) {
	zerdiv_(&x[28]);	}
	bchoco05_pd[41] = x[24] / x[28];
	bchoco05_pd[39] = 1. / x[28];
	bchoco05_pd[40] = -bchoco05_pd[41] * bchoco05_pd[39];
	v[1] = bchoco05_pd[41] * x[31];
	t1 = v[1] + -x[27];
	t1 += x[34];
	c[17] = t1;

  /***  constraint 19  ***/

	if (x[32] == 0.) {
	zerdiv_(&x[32]);	}
	bchoco05_pd[44] = x[28] / x[32];
	bchoco05_pd[42] = 1. / x[32];
	bchoco05_pd[43] = -bchoco05_pd[44] * bchoco05_pd[42];
	v[1] = bchoco05_pd[44] * x[33];
	t1 = v[1] + -x[29];
	t1 += x[36];
	c[18] = t1;

  /***  constraint 20  ***/

	if (x[32] == 0.) {
	zerdiv_(&x[32]);	}
	bchoco05_pd[47] = x[28] / x[32];
	bchoco05_pd[45] = 1. / x[32];
	bchoco05_pd[46] = -bchoco05_pd[47] * bchoco05_pd[45];
	v[1] = bchoco05_pd[47] * x[34];
	t1 = v[1] + -x[30];
	t1 += x[37];
	c[19] = t1;

  /***  constraint 21  ***/

	if (x[32] == 0.) {
	zerdiv_(&x[32]);	}
	bchoco05_pd[50] = x[28] / x[32];
	bchoco05_pd[48] = 1. / x[32];
	bchoco05_pd[49] = -bchoco05_pd[50] * bchoco05_pd[48];
	v[1] = bchoco05_pd[50] * x[35];
	t1 = v[1] + -x[31];
	t1 += x[38];
	c[20] = t1;

  /***  constraint 22  ***/

	if (x[36] == 0.) {
	zerdiv_(&x[36]);	}
	bchoco05_pd[53] = x[32] / x[36];
	bchoco05_pd[51] = 1. / x[36];
	bchoco05_pd[52] = -bchoco05_pd[53] * bchoco05_pd[51];
	v[1] = bchoco05_pd[53] * x[37];
	t1 = v[1] + -x[33];
	t1 += x[40];
	c[21] = t1;

  /***  constraint 23  ***/

	if (x[36] == 0.) {
	zerdiv_(&x[36]);	}
	bchoco05_pd[56] = x[32] / x[36];
	bchoco05_pd[54] = 1. / x[36];
	bchoco05_pd[55] = -bchoco05_pd[56] * bchoco05_pd[54];
	v[1] = bchoco05_pd[56] * x[38];
	t1 = v[1] + -x[34];
	t1 += x[41];
	c[22] = t1;

  /***  constraint 24  ***/

	if (x[36] == 0.) {
	zerdiv_(&x[36]);	}
	bchoco05_pd[59] = x[32] / x[36];
	bchoco05_pd[57] = 1. / x[36];
	bchoco05_pd[58] = -bchoco05_pd[59] * bchoco05_pd[57];
	v[1] = bchoco05_pd[59] * x[39];
	t1 = v[1] + -x[35];
	t1 += x[42];
	c[23] = t1;

  /***  constraint 25  ***/

	if (x[40] == 0.) {
	zerdiv_(&x[40]);	}
	bchoco05_pd[62] = x[36] / x[40];
	bchoco05_pd[60] = 1. / x[40];
	bchoco05_pd[61] = -bchoco05_pd[62] * bchoco05_pd[60];
	v[1] = bchoco05_pd[62] * x[41];
	t1 = v[1] + -x[37];
	t1 += x[81];
	c[24] = t1;

  /***  constraint 26  ***/

	if (x[40] == 0.) {
	zerdiv_(&x[40]);	}
	bchoco05_pd[65] = x[36] / x[40];
	bchoco05_pd[63] = 1. / x[40];
	bchoco05_pd[64] = -bchoco05_pd[65] * bchoco05_pd[63];
	v[1] = bchoco05_pd[65] * x[42];
	t1 = v[1] + -x[38];
	t1 += x[82];
	c[25] = t1;

  /***  constraint 27  ***/

	if (x[40] == 0.) {
	zerdiv_(&x[40]);	}
	bchoco05_pd[68] = x[36] / x[40];
	bchoco05_pd[66] = 1. / x[40];
	bchoco05_pd[67] = -bchoco05_pd[68] * bchoco05_pd[66];
	v[1] = bchoco05_pd[68] * x[43];
	t1 = v[1] + -x[39];
	t1 += x[83];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[10] * x[11];
	v[1] = x[9] * x[12];
	v[2] = v[0] - v[1];
	t1 = v[2] + -1.e-05*x[89];
	c[27] = t1;

  /***  constraint 29  ***/

	bchoco05_pd[69] = x[9] * x[10];
	v[0] = bchoco05_pd[69] * x[11];
	bchoco05_pd[70] = x[9] * x[9];
	v[1] = bchoco05_pd[70] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco05_pd[71] = x[7] * x[11];
	v[2] = bchoco05_pd[71] * x[12];
	v[0] += v[2];
	bchoco05_pd[72] = x[8] * x[11];
	v[2] = bchoco05_pd[72] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -1.e-05*x[44];
	c[28] = t1;

  /***  constraint 30  ***/

	bchoco05_pd[73] = x[8] * x[9];
	bchoco05_pd[74] = bchoco05_pd[73] * x[10];
	v[0] = bchoco05_pd[74] * x[11];
	bchoco05_pd[75] = x[9] * x[9];
	bchoco05_pd[76] = x[9] + x[9];
	bchoco05_pd[77] = bchoco05_pd[75] * x[8];
	v[1] = bchoco05_pd[77] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco05_pd[78] = x[8] * x[8];
	bchoco05_pd[79] = x[8] + x[8];
	bchoco05_pd[80] = x[11] * x[11];
	bchoco05_pd[81] = x[11] + x[11];
	v[2] = bchoco05_pd[78] * bchoco05_pd[80];
	v[1] = -v[2];
	v[0] += v[1];
	bchoco05_pd[82] = 2. * x[7];
	bchoco05_pd[83] = bchoco05_pd[82] * x[8];
	bchoco05_pd[84] = bchoco05_pd[83] * x[11];
	v[1] = bchoco05_pd[84] * x[12];
	v[0] += v[1];
	bchoco05_pd[85] = x[7] * x[9];
	bchoco05_pd[86] = bchoco05_pd[85] * x[10];
	v[1] = bchoco05_pd[86] * x[12];
	v[0] += v[1];
	bchoco05_pd[87] = x[7] * x[7];
	bchoco05_pd[88] = x[7] + x[7];
	bchoco05_pd[89] = x[12] * x[12];
	bchoco05_pd[90] = x[12] + x[12];
	v[1] = bchoco05_pd[87] * bchoco05_pd[89];
	v[2] = -v[1];
	v[0] += v[2];
	bchoco05_pd[91] = x[10] * x[10];
	bchoco05_pd[92] = x[10] + x[10];
	bchoco05_pd[93] = bchoco05_pd[91] * x[7];
	v[2] = bchoco05_pd[93] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[8] * x[9];
	v[2] = x[7] * x[10];
	bchoco05_pd[95] = v[1] - v[2];
	bchoco05_pd[94] = 1. - x[44];
	v[1] = bchoco05_pd[95] * bchoco05_pd[94];
	v[0] += v[1];
	t1 = v[0] + -1.e-05*x[88];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[45];
	t1 += 0.001*x[85];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[46];
	t1 += 0.001*x[86];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[47];
	t1 += 0.001*x[87];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[48];
	t1 += 0.001*x[88];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = 0.001*x[44];
	t1 += -x[49];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[50];
	t1 += 0.001*x[89];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[45];
	t1 += -10.*x[85];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[46];
	t1 += -10.*x[86];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[47];
	t1 += -10.*x[87];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[48];
	t1 += -10.*x[88];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -10.*x[44];
	t1 += x[49];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[50];
	t1 += -10.*x[89];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[7];
	t1 += 0.001*x[85];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[8];
	t1 += 0.001*x[86];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[9];
	t1 += 0.001*x[87];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[10];
	t1 += 0.001*x[88];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[11];
	t1 += 0.001*x[44];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[12];
	t1 += 0.001*x[89];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[7];
	t1 += -10.*x[85];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[8];
	t1 += -10.*x[86];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[9];
	t1 += -10.*x[87];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[10];
	t1 += -10.*x[88];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[11];
	t1 += -10.*x[44];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[12];
	t1 += -10.*x[89];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[85];
	t1 += -x[86];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[86];
	t1 += -x[87];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[87];
	t1 += -x[88];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[44];
	t1 += x[88];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[44];
	t1 += -x[89];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -1.e+07*x[1];
	t1 += 1.e+07*x[45];
	t1 += x[51];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[6];
	t1 += -x[50];
	t1 += x[58];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[1];
	t1 += 1.e-05*x[2];
	t1 += -1.e-10*x[3];
	t1 += x[59];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[2];
	t1 += 2.e-05*x[3];
	t1 += -3.e-10*x[4];
	t1 += x[60];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[3];
	t1 += 3.e-05*x[4];
	t1 += -6.e-10*x[5];
	t1 += x[61];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[4];
	t1 += 4.e-05*x[5];
	t1 += -1.e-09*x[6];
	t1 += x[62];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[5];
	t1 += 5.e-05*x[6];
	t1 += x[63];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[6];
	t1 += x[64];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[7];
	t1 += -x[45];
	t1 += 1.e-05*x[46];
	t1 += -1.e-10*x[47];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[8];
	t1 += -x[46];
	t1 += 2.e-05*x[47];
	t1 += -3.e-10*x[48];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[9];
	t1 += -x[47];
	t1 += 3.e-05*x[48];
	t1 += -6.e-10*x[49];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[10];
	t1 += -x[48];
	t1 += 4.e-05*x[49];
	t1 += -1.e-09*x[50];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[11];
	t1 += -x[49];
	t1 += 5.e-05*x[50];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[12];
	t1 += -x[50];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[51];
	t1 += 1.e-05*x[52];
	t1 += -1.e-10*x[53];
	t1 += x[65];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[52];
	t1 += 2.e-05*x[53];
	t1 += -3.e-10*x[54];
	t1 += x[66];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[53];
	t1 += 3.e-05*x[54];
	t1 += -6.e-10*x[55];
	t1 += x[67];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[54];
	t1 += 4.e-05*x[55];
	t1 += -1.e-09*x[56];
	t1 += x[68];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[55];
	t1 += 5.e-05*x[56];
	t1 += -1.5e-09*x[57];
	t1 += x[69];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[56];
	t1 += 6.e-05*x[57];
	t1 += -2.1e-09*x[58];
	t1 += x[70];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[57];
	t1 += 7.e-05*x[58];
	t1 += x[71];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[58];
	t1 += x[72];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[13];
	t1 += -x[64];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[62];
	t1 += x[73];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[60];
	t1 += x[74];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[14];
	t1 += -x[63];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[15];
	t1 += -x[61];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[16];
	t1 += -x[59];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[19];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[22];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[77];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[23];
	t1 += -x[72];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = -x[70];
	t1 += x[78];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -x[68];
	t1 += x[79];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = -x[66];
	t1 += x[80];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[24];
	t1 += -x[71];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[25];
	t1 += -x[69];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[26];
	t1 += -x[67];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[27];
	t1 += -x[65];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[31];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[35];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[39];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[43];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[84];
	c[102] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = bchoco05_pd[0];
	J[0] = x[1]*2.e+06;
	J[10] = -1.e+06;
	J[196] = 1.e+06;
	J[232] = 1.;

   /*** derivatives for constraint 2 ***/

	J[11] = bchoco05_pd[1];
	J[1] = x[2]*200000.;
	J[7] = -100000.;
	J[15] = -100000.;
	J[191] = -100000.;
	J[202] = 100000.;
	J[235] = 1.;

   /*** derivatives for constraint 3 ***/

	J[16] = bchoco05_pd[2];
	J[2] = x[3]*20000.;
	J[12] = -10000.;
	J[21] = -10000.;
	J[197] = -10000.;
	J[209] = 10000.;
	J[239] = 1.;

   /*** derivatives for constraint 4 ***/

	J[22] = bchoco05_pd[3];
	J[3] = x[4]*2000.;
	J[17] = -1000.;
	J[27] = -1000.;
	J[203] = -1000.;
	J[216] = 1000.;
	J[243] = 1.;

   /*** derivatives for constraint 5 ***/

	J[28] = bchoco05_pd[4];
	J[4] = x[5]*200.;
	J[23] = -100.;
	J[33] = -100.;
	J[210] = -100.;
	J[223] = 100.;
	J[247] = 1.;

   /*** derivatives for constraint 6 ***/

	J[34] = bchoco05_pd[5];
	J[5] = x[6]*20.;
	J[29] = -10.;
	J[217] = -10.;
	J[251] = 1.;

   /*** derivatives for constraint 7 ***/

	J[81] = bchoco05_pd[8];
	J[76] = x[15]*bchoco05_pd[7];
	J[73] = x[15]*bchoco05_pd[6];
	J[87] = 1.;
	J[287] = -1.;

   /*** derivatives for constraint 8 ***/

	J[84] = bchoco05_pd[11];
	J[77] = x[16]*bchoco05_pd[10];
	J[74] = x[16]*bchoco05_pd[9];
	J[92] = 1.;
	J[289] = -1.;

   /*** derivatives for constraint 9 ***/

	J[93] = bchoco05_pd[14];
	J[88] = x[18]*bchoco05_pd[13];
	J[78] = x[18]*bchoco05_pd[12];
	J[82] = -1.;
	J[98] = 1.;

   /*** derivatives for constraint 10 ***/

	J[95] = bchoco05_pd[17];
	J[89] = x[19]*bchoco05_pd[16];
	J[79] = x[19]*bchoco05_pd[15];
	J[85] = -1.;
	J[101] = 1.;

   /*** derivatives for constraint 11 ***/

	J[102] = bchoco05_pd[20];
	J[99] = x[21]*bchoco05_pd[19];
	J[90] = x[21]*bchoco05_pd[18];
	J[94] = -1.;
	J[291] = 1.;

   /*** derivatives for constraint 12 ***/

	J[103] = bchoco05_pd[23];
	J[100] = x[22]*bchoco05_pd[22];
	J[91] = x[22]*bchoco05_pd[21];
	J[96] = -1.;
	J[292] = 1.;

   /*** derivatives for constraint 13 ***/

	J[116] = bchoco05_pd[26];
	J[109] = x[25]*bchoco05_pd[25];
	J[105] = x[25]*bchoco05_pd[24];
	J[125] = 1.;
	J[294] = -1.;

   /*** derivatives for constraint 14 ***/

	J[119] = bchoco05_pd[29];
	J[110] = x[26]*bchoco05_pd[28];
	J[106] = x[26]*bchoco05_pd[27];
	J[132] = 1.;
	J[296] = -1.;

   /*** derivatives for constraint 15 ***/

	J[122] = bchoco05_pd[32];
	J[111] = x[27]*bchoco05_pd[31];
	J[107] = x[27]*bchoco05_pd[30];
	J[135] = 1.;
	J[298] = -1.;

   /*** derivatives for constraint 16 ***/

	J[133] = bchoco05_pd[35];
	J[126] = x[29]*bchoco05_pd[34];
	J[112] = x[29]*bchoco05_pd[33];
	J[117] = -1.;
	J[141] = 1.;

   /*** derivatives for constraint 17 ***/

	J[136] = bchoco05_pd[38];
	J[127] = x[30]*bchoco05_pd[37];
	J[113] = x[30]*bchoco05_pd[36];
	J[120] = -1.;
	J[148] = 1.;

   /*** derivatives for constraint 18 ***/

	J[138] = bchoco05_pd[41];
	J[128] = x[31]*bchoco05_pd[40];
	J[114] = x[31]*bchoco05_pd[39];
	J[123] = -1.;
	J[151] = 1.;

   /*** derivatives for constraint 19 ***/

	J[149] = bchoco05_pd[44];
	J[142] = x[33]*bchoco05_pd[43];
	J[129] = x[33]*bchoco05_pd[42];
	J[134] = -1.;
	J[157] = 1.;

   /*** derivatives for constraint 20 ***/

	J[152] = bchoco05_pd[47];
	J[143] = x[34]*bchoco05_pd[46];
	J[130] = x[34]*bchoco05_pd[45];
	J[137] = -1.;
	J[164] = 1.;

   /*** derivatives for constraint 21 ***/

	J[154] = bchoco05_pd[50];
	J[144] = x[35]*bchoco05_pd[49];
	J[131] = x[35]*bchoco05_pd[48];
	J[139] = -1.;
	J[167] = 1.;

   /*** derivatives for constraint 22 ***/

	J[165] = bchoco05_pd[53];
	J[158] = x[37]*bchoco05_pd[52];
	J[145] = x[37]*bchoco05_pd[51];
	J[150] = -1.;
	J[173] = 1.;

   /*** derivatives for constraint 23 ***/

	J[168] = bchoco05_pd[56];
	J[159] = x[38]*bchoco05_pd[55];
	J[146] = x[38]*bchoco05_pd[54];
	J[153] = -1.;
	J[177] = 1.;

   /*** derivatives for constraint 24 ***/

	J[170] = bchoco05_pd[59];
	J[160] = x[39]*bchoco05_pd[58];
	J[147] = x[39]*bchoco05_pd[57];
	J[155] = -1.;
	J[179] = 1.;

   /*** derivatives for constraint 25 ***/

	J[178] = bchoco05_pd[62];
	J[174] = x[41]*bchoco05_pd[61];
	J[161] = x[41]*bchoco05_pd[60];
	J[166] = -1.;
	J[300] = 1.;

   /*** derivatives for constraint 26 ***/

	J[180] = bchoco05_pd[65];
	J[175] = x[42]*bchoco05_pd[64];
	J[162] = x[42]*bchoco05_pd[63];
	J[169] = -1.;
	J[301] = 1.;

   /*** derivatives for constraint 27 ***/

	J[181] = bchoco05_pd[68];
	J[176] = x[43]*bchoco05_pd[67];
	J[163] = x[43]*bchoco05_pd[66];
	J[171] = -1.;
	J[302] = 1.;

   /*** derivatives for constraint 28 ***/

	J[67] = -x[9];
	J[49] = -x[12];
	J[61] = x[10];
	J[55] = x[11];
	J[328] = -1.e-05;

   /*** derivatives for constraint 29 ***/

	J[62] = -bchoco05_pd[72];
	J[62] -= x[11]*x[8];
	J[44] = -x[11]*x[11];
	J[68] = bchoco05_pd[71];
	J[62] += x[12]*x[7];
	J[39] = x[12]*x[11];
	J[68] -= bchoco05_pd[70];
	J[50] = -x[12]*x[9];
	J[50] -= x[12]*x[9];
	J[62] += bchoco05_pd[69];
	J[56] = x[11]*x[9];
	J[50] += x[11]*x[10];
	J[183] = -1.e-05;

   /*** derivatives for constraint 30 ***/

	J[184] = -bchoco05_pd[95];
	dv[0] = -bchoco05_pd[94];
	J[57] = dv[0]*x[7];
	J[40] = dv[0]*x[10];
	J[51] = bchoco05_pd[94]*x[8];
	J[45] = bchoco05_pd[94]*x[9];
	J[63] = -bchoco05_pd[93];
	J[40] -= x[11]*bchoco05_pd[91];
	dv[1] = -x[11]*x[7];
	J[57] += dv[1]*bchoco05_pd[92];
	J[69] = -bchoco05_pd[87]*bchoco05_pd[90];
	J[40] -= bchoco05_pd[89]*bchoco05_pd[88];
	J[69] += bchoco05_pd[86];
	J[57] += x[12]*bchoco05_pd[85];
	dv[2] = x[12]*x[10];
	J[51] += dv[2]*x[7];
	J[40] += dv[2]*x[9];
	J[69] += bchoco05_pd[84];
	J[63] += x[12]*bchoco05_pd[83];
	dv[3] = x[12]*x[11];
	J[45] += dv[3]*bchoco05_pd[82];
	dv[3] *= x[8];
	J[40] += dv[3]*2.;
	J[63] -= bchoco05_pd[78]*bchoco05_pd[81];
	J[45] -= bchoco05_pd[80]*bchoco05_pd[79];
	J[69] -= bchoco05_pd[77];
	J[45] -= x[12]*bchoco05_pd[75];
	dv[4] = -x[12]*x[8];
	J[51] += dv[4]*bchoco05_pd[76];
	J[63] += bchoco05_pd[74];
	J[57] += x[11]*bchoco05_pd[73];
	dv[5] = x[11]*x[10];
	J[51] += dv[5]*x[8];
	J[45] += dv[5]*x[9];
	J[321] = -1.e-05;

   /*** derivatives for constraint 31 ***/

	J[192] = -1.;
	J[304] = 0.001;

   /*** derivatives for constraint 32 ***/

	J[198] = -1.;
	J[309] = 0.001;

   /*** derivatives for constraint 33 ***/

	J[204] = -1.;
	J[315] = 0.001;

   /*** derivatives for constraint 34 ***/

	J[211] = -1.;
	J[322] = 0.001;

   /*** derivatives for constraint 35 ***/

	J[185] = 0.001;
	J[218] = -1.;

   /*** derivatives for constraint 36 ***/

	J[224] = -1.;
	J[329] = 0.001;

   /*** derivatives for constraint 37 ***/

	J[193] = 1.;
	J[305] = -10.;

   /*** derivatives for constraint 38 ***/

	J[199] = 1.;
	J[310] = -10.;

   /*** derivatives for constraint 39 ***/

	J[205] = 1.;
	J[316] = -10.;

   /*** derivatives for constraint 40 ***/

	J[212] = 1.;
	J[323] = -10.;

   /*** derivatives for constraint 41 ***/

	J[186] = -10.;
	J[219] = 1.;

   /*** derivatives for constraint 42 ***/

	J[225] = 1.;
	J[330] = -10.;

   /*** derivatives for constraint 43 ***/

	J[41] = -1.;
	J[306] = 0.001;

   /*** derivatives for constraint 44 ***/

	J[46] = -1.;
	J[311] = 0.001;

   /*** derivatives for constraint 45 ***/

	J[52] = -1.;
	J[317] = 0.001;

   /*** derivatives for constraint 46 ***/

	J[58] = -1.;
	J[324] = 0.001;

   /*** derivatives for constraint 47 ***/

	J[64] = -1.;
	J[187] = 0.001;

   /*** derivatives for constraint 48 ***/

	J[70] = -1.;
	J[331] = 0.001;

   /*** derivatives for constraint 49 ***/

	J[42] = 1.;
	J[307] = -10.;

   /*** derivatives for constraint 50 ***/

	J[47] = 1.;
	J[312] = -10.;

   /*** derivatives for constraint 51 ***/

	J[53] = 1.;
	J[318] = -10.;

   /*** derivatives for constraint 52 ***/

	J[59] = 1.;
	J[325] = -10.;

   /*** derivatives for constraint 53 ***/

	J[65] = 1.;
	J[188] = -10.;

   /*** derivatives for constraint 54 ***/

	J[71] = 1.;
	J[332] = -10.;

   /*** derivatives for constraint 55 ***/

	J[308] = 1.;
	J[313] = -1.;

   /*** derivatives for constraint 56 ***/

	J[314] = 1.;
	J[319] = -1.;

   /*** derivatives for constraint 57 ***/

	J[320] = 1.;
	J[326] = -1.;

   /*** derivatives for constraint 58 ***/

	J[189] = -1.;
	J[327] = 1.;

   /*** derivatives for constraint 59 ***/

	J[190] = 1.;
	J[333] = -1.;

   /*** derivatives for constraint 60 ***/

	J[8] = -1.e+07;
	J[194] = 1.e+07;
	J[230] = 1.;

   /*** derivatives for constraint 61 ***/

	J[35] = -1.;
	J[226] = -1.;
	J[255] = 1.;

   /*** derivatives for constraint 62 ***/

	J[9] = -1.;
	J[13] = 1.e-05;
	J[18] = -1.e-10;
	J[259] = 1.;

   /*** derivatives for constraint 63 ***/

	J[14] = -1.;
	J[19] = 2.e-05;
	J[24] = -3.e-10;
	J[261] = 1.;

   /*** derivatives for constraint 64 ***/

	J[20] = -1.;
	J[25] = 3.e-05;
	J[30] = -6.e-10;
	J[263] = 1.;

   /*** derivatives for constraint 65 ***/

	J[26] = -1.;
	J[31] = 4.e-05;
	J[36] = -1.e-09;
	J[265] = 1.;

   /*** derivatives for constraint 66 ***/

	J[32] = -1.;
	J[37] = 5.e-05;
	J[267] = 1.;

   /*** derivatives for constraint 67 ***/

	J[38] = -1.;
	J[269] = 1.;

   /*** derivatives for constraint 68 ***/

	J[43] = 1.;
	J[195] = -1.;
	J[200] = 1.e-05;
	J[206] = -1.e-10;

   /*** derivatives for constraint 69 ***/

	J[48] = 1.;
	J[201] = -1.;
	J[207] = 2.e-05;
	J[213] = -3.e-10;

   /*** derivatives for constraint 70 ***/

	J[54] = 1.;
	J[208] = -1.;
	J[214] = 3.e-05;
	J[220] = -6.e-10;

   /*** derivatives for constraint 71 ***/

	J[60] = 1.;
	J[215] = -1.;
	J[221] = 4.e-05;
	J[227] = -1.e-09;

   /*** derivatives for constraint 72 ***/

	J[66] = 1.;
	J[222] = -1.;
	J[228] = 5.e-05;

   /*** derivatives for constraint 73 ***/

	J[72] = 1.;
	J[229] = -1.;

   /*** derivatives for constraint 74 ***/

	J[231] = -1.;
	J[233] = 1.e-05;
	J[236] = -1.e-10;
	J[271] = 1.;

   /*** derivatives for constraint 75 ***/

	J[234] = -1.;
	J[237] = 2.e-05;
	J[240] = -3.e-10;
	J[273] = 1.;

   /*** derivatives for constraint 76 ***/

	J[238] = -1.;
	J[241] = 3.e-05;
	J[244] = -6.e-10;
	J[275] = 1.;

   /*** derivatives for constraint 77 ***/

	J[242] = -1.;
	J[245] = 4.e-05;
	J[248] = -1.e-09;
	J[277] = 1.;

   /*** derivatives for constraint 78 ***/

	J[246] = -1.;
	J[249] = 5.e-05;
	J[252] = -1.5e-09;
	J[279] = 1.;

   /*** derivatives for constraint 79 ***/

	J[250] = -1.;
	J[253] = 6.e-05;
	J[256] = -2.1e-09;
	J[281] = 1.;

   /*** derivatives for constraint 80 ***/

	J[254] = -1.;
	J[257] = 7.e-05;
	J[283] = 1.;

   /*** derivatives for constraint 81 ***/

	J[258] = -1.;
	J[285] = 1.;

   /*** derivatives for constraint 82 ***/

	J[75] = 1.;
	J[270] = -1.;

   /*** derivatives for constraint 83 ***/

	J[266] = -1.;
	J[288] = 1.;

   /*** derivatives for constraint 84 ***/

	J[262] = -1.;
	J[290] = 1.;

   /*** derivatives for constraint 85 ***/

	J[80] = 1.;
	J[268] = -1.;

   /*** derivatives for constraint 86 ***/

	J[83] = 1.;
	J[264] = -1.;

   /*** derivatives for constraint 87 ***/

	J[86] = 1.;
	J[260] = -1.;

   /*** derivatives for constraint 88 ***/

	J[97] = 1.;

   /*** derivatives for constraint 89 ***/

	J[104] = 1.;

   /*** derivatives for constraint 90 ***/

	J[293] = 1.;

   /*** derivatives for constraint 91 ***/

	J[108] = 1.;
	J[286] = -1.;

   /*** derivatives for constraint 92 ***/

	J[282] = -1.;
	J[295] = 1.;

   /*** derivatives for constraint 93 ***/

	J[278] = -1.;
	J[297] = 1.;

   /*** derivatives for constraint 94 ***/

	J[274] = -1.;
	J[299] = 1.;

   /*** derivatives for constraint 95 ***/

	J[115] = 1.;
	J[284] = -1.;

   /*** derivatives for constraint 96 ***/

	J[118] = 1.;
	J[280] = -1.;

   /*** derivatives for constraint 97 ***/

	J[121] = 1.;
	J[276] = -1.;

   /*** derivatives for constraint 98 ***/

	J[124] = 1.;
	J[272] = -1.;

   /*** derivatives for constraint 99 ***/

	J[140] = 1.;

   /*** derivatives for constraint 100 ***/

	J[156] = 1.;

   /*** derivatives for constraint 101 ***/

	J[172] = 1.;

   /*** derivatives for constraint 102 ***/

	J[182] = 1.;

   /*** derivatives for constraint 103 ***/

	J[303] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
