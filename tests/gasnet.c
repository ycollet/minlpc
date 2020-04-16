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
 fint gasnet_auxcom_[1] = { 44 /* nlc */ };
 fint gasnet_funcom_[360] = {
	90 /* nvar */,
	1 /* nobj */,
	69 /* ncon */,
	263 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
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
	46,
	49,
	52,
	55,
	58,
	61,
	64,
	67,
	70,
	71,
	74,
	77,
	81,
	84,
	87,
	90,
	92,
	95,
	98,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	119,
	121,
	123,
	125,
	126,
	130,
	134,
	138,
	142,
	146,
	150,
	153,
	157,
	161,
	165,
	168,
	171,
	174,
	177,
	182,
	185,
	188,
	191,
	194,
	197,
	200,
	203,
	206,
	209,
	212,
	215,
	218,
	221,
	224,
	227,
	230,
	233,
	236,
	239,
	243,
	246,
	249,
	252,
	255,
	258,
	261,
	262,
	263,
	264,

	/* rownos */
	1,
	44,
	56,
	57,
	2,
	44,
	56,
	57,
	3,
	44,
	56,
	57,
	4,
	44,
	56,
	5,
	44,
	56,
	6,
	44,
	56,
	7,
	44,
	56,
	8,
	44,
	57,
	9,
	44,
	57,
	10,
	44,
	57,
	11,
	44,
	57,
	1,
	33,
	45,
	2,
	34,
	46,
	3,
	35,
	47,
	4,
	36,
	48,
	5,
	38,
	49,
	6,
	39,
	50,
	7,
	40,
	51,
	8,
	37,
	52,
	9,
	41,
	53,
	10,
	42,
	54,
	11,
	43,
	55,
	33,
	1,
	34,
	45,
	2,
	35,
	46,
	3,
	36,
	37,
	47,
	4,
	38,
	48,
	5,
	39,
	49,
	6,
	40,
	50,
	7,
	51,
	8,
	41,
	52,
	9,
	42,
	53,
	10,
	43,
	54,
	11,
	55,
	1,
	44,
	2,
	44,
	3,
	44,
	4,
	44,
	5,
	44,
	6,
	44,
	7,
	44,
	8,
	44,
	9,
	44,
	10,
	44,
	11,
	44,
	12,
	1,
	12,
	13,
	22,
	2,
	13,
	14,
	23,
	3,
	14,
	15,
	24,
	4,
	15,
	16,
	25,
	5,
	16,
	17,
	27,
	6,
	17,
	18,
	28,
	7,
	18,
	29,
	8,
	15,
	19,
	26,
	9,
	19,
	20,
	30,
	10,
	20,
	21,
	31,
	11,
	21,
	32,
	22,
	33,
	58,
	23,
	34,
	59,
	24,
	35,
	60,
	25,
	26,
	36,
	37,
	61,
	27,
	38,
	62,
	28,
	39,
	63,
	29,
	40,
	64,
	30,
	41,
	65,
	31,
	42,
	66,
	32,
	43,
	67,
	12,
	58,
	68,
	13,
	59,
	68,
	14,
	60,
	68,
	15,
	61,
	68,
	16,
	62,
	68,
	17,
	63,
	68,
	18,
	64,
	68,
	19,
	65,
	68,
	20,
	66,
	68,
	21,
	67,
	68,
	22,
	68,
	69,
	23,
	68,
	69,
	24,
	68,
	69,
	25,
	26,
	68,
	69,
	27,
	68,
	69,
	28,
	68,
	69,
	29,
	68,
	69,
	30,
	68,
	69,
	31,
	68,
	69,
	32,
	68,
	69,
	44,
	68,
	69 };

 real gasnet_boundc_[1+180+138] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		2.,
		200.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		500.,
		500.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		600.,
		600.,
		200.,
		1000.,
		200.,
		1000.,
		200.,
		1000.,
		300.,
		300.,
		4.,
		36.,
		4.,
		36.,
		4.,
		36.,
		4.,
		18.,
		4.,
		18.,
		4.,
		18.,
		4.,
		18.,
		4.,
		18.,
		4.,
		18.,
		4.,
		18.,
		4.,
		18.,
		600.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		200.,
		600.,
		1.,
		2.,
		1.,
		2.,
		1.,
		2.,
		1.,
		2.,
		1.,
		2.,
		1.,
		2.,
		1.,
		2.,
		1.,
		2.,
		1.,
		2.,
		1.,
		2.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		175.,
		175.,
		200.,
		200.,
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
		0.,
		0.,
		0.,
		0.};

 real gasnet_x0comn_[90] = {
		20.,
		20.,
		20.,
		20.,
		20.,
		20.,
		20.,
		20.,
		20.,
		20.,
		20.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		500.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		600.,
		200.,
		200.,
		200.,
		300.,
		18.,
		18.,
		18.,
		4.,
		4.,
		4.,
		4.,
		4.,
		4.,
		4.,
		4.,
		600.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
		200.,
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
		0. };

 static real gasnet_pd[131];
static real gasnet_old_x[90];
static int gasnet_xkind = -1;

 static int
gasnet_xcheck(real *x)
{
	real *x1 = gasnet_old_x, *xe = x + 90;
	errno = 0;
	if (gasnet_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	gasnet_xkind = 0;
	return 1;
	}
 real
gasnet_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (gasnet_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[87];
	rv += x[88];
	rv += x[89];
	;}

	if (wantfg & 2) {
	g[87] = 1.;
	g[88] = 1.;
	g[89] = 1.;
	}

	return rv;
}

 void
gasnet_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (gasnet_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[34], 5.33333333333333);
	if (errno) in_trouble2("pow",x[34],5.33333333333333);
	if (x[34] > 0.) {
	gasnet_pd[0] = 5.33333333333333*(v[0]/x[34]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],5.33333333333333);
	}
	gasnet_pd[1] = -7.58641e-07 * v[0];
	v[0] = x[11] * x[11];
	gasnet_pd[2] = x[11] + x[11];
	v[1] = x[23] * x[23];
	gasnet_pd[3] = x[23] + x[23];
	gasnet_pd[4] = v[0] - v[1];
	v[1] = gasnet_pd[1] * gasnet_pd[4];
	v[0] = x[46] * x[46];
	gasnet_pd[5] = x[46] + x[46];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[6] = 1. / v[0];
	gasnet_pd[7] = -v[3] * gasnet_pd[6];
	t1 = v[3] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = pow(x[35], 5.33333333333333);
	if (errno) in_trouble2("pow",x[35],5.33333333333333);
	if (x[35] > 0.) {
	gasnet_pd[8] = 5.33333333333333*(v[0]/x[35]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[35],5.33333333333333);
	}
	gasnet_pd[9] = -7.58641e-07 * v[0];
	v[0] = x[12] * x[12];
	gasnet_pd[10] = x[12] + x[12];
	v[1] = x[24] * x[24];
	gasnet_pd[11] = x[24] + x[24];
	gasnet_pd[12] = v[0] - v[1];
	v[1] = gasnet_pd[9] * gasnet_pd[12];
	v[0] = x[47] * x[47];
	gasnet_pd[13] = x[47] + x[47];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[14] = 1. / v[0];
	gasnet_pd[15] = -v[3] * gasnet_pd[14];
	t1 = v[3] + x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = pow(x[36], 5.33333333333333);
	if (errno) in_trouble2("pow",x[36],5.33333333333333);
	if (x[36] > 0.) {
	gasnet_pd[16] = 5.33333333333333*(v[0]/x[36]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],5.33333333333333);
	}
	gasnet_pd[17] = -7.58641e-07 * v[0];
	v[0] = x[13] * x[13];
	gasnet_pd[18] = x[13] + x[13];
	v[1] = x[25] * x[25];
	gasnet_pd[19] = x[25] + x[25];
	gasnet_pd[20] = v[0] - v[1];
	v[1] = gasnet_pd[17] * gasnet_pd[20];
	v[0] = x[48] * x[48];
	gasnet_pd[21] = x[48] + x[48];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[22] = 1. / v[0];
	gasnet_pd[23] = -v[3] * gasnet_pd[22];
	t1 = v[3] + x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = pow(x[37], 5.33333333333333);
	if (errno) in_trouble2("pow",x[37],5.33333333333333);
	if (x[37] > 0.) {
	gasnet_pd[24] = 5.33333333333333*(v[0]/x[37]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],5.33333333333333);
	}
	gasnet_pd[25] = -7.58641e-07 * v[0];
	v[0] = x[14] * x[14];
	gasnet_pd[26] = x[14] + x[14];
	v[1] = x[26] * x[26];
	gasnet_pd[27] = x[26] + x[26];
	gasnet_pd[28] = v[0] - v[1];
	v[1] = gasnet_pd[25] * gasnet_pd[28];
	v[0] = x[49] * x[49];
	gasnet_pd[29] = x[49] + x[49];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[30] = 1. / v[0];
	gasnet_pd[31] = -v[3] * gasnet_pd[30];
	t1 = v[3] + x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = pow(x[38], 5.33333333333333);
	if (errno) in_trouble2("pow",x[38],5.33333333333333);
	if (x[38] > 0.) {
	gasnet_pd[32] = 5.33333333333333*(v[0]/x[38]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],5.33333333333333);
	}
	gasnet_pd[33] = -7.58641e-07 * v[0];
	v[0] = x[15] * x[15];
	gasnet_pd[34] = x[15] + x[15];
	v[1] = x[27] * x[27];
	gasnet_pd[35] = x[27] + x[27];
	gasnet_pd[36] = v[0] - v[1];
	v[1] = gasnet_pd[33] * gasnet_pd[36];
	v[0] = x[50] * x[50];
	gasnet_pd[37] = x[50] + x[50];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[38] = 1. / v[0];
	gasnet_pd[39] = -v[3] * gasnet_pd[38];
	t1 = v[3] + x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = pow(x[39], 5.33333333333333);
	if (errno) in_trouble2("pow",x[39],5.33333333333333);
	if (x[39] > 0.) {
	gasnet_pd[40] = 5.33333333333333*(v[0]/x[39]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[40] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],5.33333333333333);
	}
	gasnet_pd[41] = -7.58641e-07 * v[0];
	v[0] = x[16] * x[16];
	gasnet_pd[42] = x[16] + x[16];
	v[1] = x[28] * x[28];
	gasnet_pd[43] = x[28] + x[28];
	gasnet_pd[44] = v[0] - v[1];
	v[1] = gasnet_pd[41] * gasnet_pd[44];
	v[0] = x[51] * x[51];
	gasnet_pd[45] = x[51] + x[51];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[46] = 1. / v[0];
	gasnet_pd[47] = -v[3] * gasnet_pd[46];
	t1 = v[3] + x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = pow(x[40], 5.33333333333333);
	if (errno) in_trouble2("pow",x[40],5.33333333333333);
	if (x[40] > 0.) {
	gasnet_pd[48] = 5.33333333333333*(v[0]/x[40]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[48] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[40],5.33333333333333);
	}
	gasnet_pd[49] = -7.58641e-07 * v[0];
	v[0] = x[17] * x[17];
	gasnet_pd[50] = x[17] + x[17];
	v[1] = x[29] * x[29];
	gasnet_pd[51] = x[29] + x[29];
	gasnet_pd[52] = v[0] - v[1];
	v[1] = gasnet_pd[49] * gasnet_pd[52];
	v[0] = x[52] * x[52];
	gasnet_pd[53] = x[52] + x[52];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[54] = 1. / v[0];
	gasnet_pd[55] = -v[3] * gasnet_pd[54];
	t1 = v[3] + x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = pow(x[41], 5.33333333333333);
	if (errno) in_trouble2("pow",x[41],5.33333333333333);
	if (x[41] > 0.) {
	gasnet_pd[56] = 5.33333333333333*(v[0]/x[41]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[41],5.33333333333333);
	}
	gasnet_pd[57] = -7.58641e-07 * v[0];
	v[0] = x[18] * x[18];
	gasnet_pd[58] = x[18] + x[18];
	v[1] = x[30] * x[30];
	gasnet_pd[59] = x[30] + x[30];
	gasnet_pd[60] = v[0] - v[1];
	v[1] = gasnet_pd[57] * gasnet_pd[60];
	v[0] = x[53] * x[53];
	gasnet_pd[61] = x[53] + x[53];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[62] = 1. / v[0];
	gasnet_pd[63] = -v[3] * gasnet_pd[62];
	t1 = v[3] + x[7];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = pow(x[42], 5.33333333333333);
	if (errno) in_trouble2("pow",x[42],5.33333333333333);
	if (x[42] > 0.) {
	gasnet_pd[64] = 5.33333333333333*(v[0]/x[42]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[64] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[42],5.33333333333333);
	}
	gasnet_pd[65] = -7.58641e-07 * v[0];
	v[0] = x[19] * x[19];
	gasnet_pd[66] = x[19] + x[19];
	v[1] = x[31] * x[31];
	gasnet_pd[67] = x[31] + x[31];
	gasnet_pd[68] = v[0] - v[1];
	v[1] = gasnet_pd[65] * gasnet_pd[68];
	v[0] = x[54] * x[54];
	gasnet_pd[69] = x[54] + x[54];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[70] = 1. / v[0];
	gasnet_pd[71] = -v[3] * gasnet_pd[70];
	t1 = v[3] + x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = pow(x[43], 5.33333333333333);
	if (errno) in_trouble2("pow",x[43],5.33333333333333);
	if (x[43] > 0.) {
	gasnet_pd[72] = 5.33333333333333*(v[0]/x[43]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[72] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[43],5.33333333333333);
	}
	gasnet_pd[73] = -7.58641e-07 * v[0];
	v[0] = x[20] * x[20];
	gasnet_pd[74] = x[20] + x[20];
	v[1] = x[32] * x[32];
	gasnet_pd[75] = x[32] + x[32];
	gasnet_pd[76] = v[0] - v[1];
	v[1] = gasnet_pd[73] * gasnet_pd[76];
	v[0] = x[55] * x[55];
	gasnet_pd[77] = x[55] + x[55];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[78] = 1. / v[0];
	gasnet_pd[79] = -v[3] * gasnet_pd[78];
	t1 = v[3] + x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = pow(x[44], 5.33333333333333);
	if (errno) in_trouble2("pow",x[44],5.33333333333333);
	if (x[44] > 0.) {
	gasnet_pd[80] = 5.33333333333333*(v[0]/x[44]);
	} else if (5.33333333333333 > 1.) {
	gasnet_pd[80] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[44],5.33333333333333);
	}
	gasnet_pd[81] = -7.58641e-07 * v[0];
	v[0] = x[21] * x[21];
	gasnet_pd[82] = x[21] + x[21];
	v[1] = x[33] * x[33];
	gasnet_pd[83] = x[33] + x[33];
	gasnet_pd[84] = v[0] - v[1];
	v[1] = gasnet_pd[81] * gasnet_pd[84];
	v[0] = x[56] * x[56];
	gasnet_pd[85] = x[56] + x[56];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	gasnet_pd[86] = 1. / v[0];
	gasnet_pd[87] = -v[3] * gasnet_pd[86];
	t1 = v[3] + x[10];
	c[10] = t1;

  /***  constraint 12  ***/

	gasnet_pd[88] = 0.005 * x[45];
	v[0] = gasnet_pd[88] * x[67];
	v[1] = -v[0];
	t1 = v[1] + x[45];
	t1 += -x[46];
	c[11] = t1;

  /***  constraint 13  ***/

	gasnet_pd[89] = 0.005 * x[46];
	v[0] = gasnet_pd[89] * x[68];
	v[1] = -v[0];
	t1 = v[1] + x[46];
	t1 += -x[47];
	c[12] = t1;

  /***  constraint 14  ***/

	gasnet_pd[90] = 0.005 * x[47];
	v[0] = gasnet_pd[90] * x[69];
	v[1] = -v[0];
	t1 = v[1] + x[47];
	t1 += -x[48];
	c[13] = t1;

  /***  constraint 15  ***/

	gasnet_pd[91] = 0.005 * x[48];
	v[0] = gasnet_pd[91] * x[70];
	v[1] = -v[0];
	t1 = v[1] + x[48];
	t1 += -x[49];
	t1 += -x[53];
	c[14] = t1;

  /***  constraint 16  ***/

	gasnet_pd[92] = 0.005 * x[49];
	v[0] = gasnet_pd[92] * x[71];
	v[1] = -v[0];
	t1 = v[1] + x[49];
	t1 += -x[50];
	c[15] = t1;

  /***  constraint 17  ***/

	gasnet_pd[93] = 0.005 * x[50];
	v[0] = gasnet_pd[93] * x[72];
	v[1] = -v[0];
	t1 = v[1] + x[50];
	t1 += -x[51];
	c[16] = t1;

  /***  constraint 18  ***/

	gasnet_pd[94] = 0.005 * x[51];
	v[0] = gasnet_pd[94] * x[73];
	v[1] = -v[0];
	t1 = v[1] + x[51];
	t1 += -x[52];
	c[17] = t1;

  /***  constraint 19  ***/

	gasnet_pd[95] = 0.005 * x[53];
	v[0] = gasnet_pd[95] * x[74];
	v[1] = -v[0];
	t1 = v[1] + x[53];
	t1 += -x[54];
	c[18] = t1;

  /***  constraint 20  ***/

	gasnet_pd[96] = 0.005 * x[54];
	v[0] = gasnet_pd[96] * x[75];
	v[1] = -v[0];
	t1 = v[1] + x[54];
	t1 += -x[55];
	c[19] = t1;

  /***  constraint 21  ***/

	gasnet_pd[97] = 0.005 * x[55];
	v[0] = gasnet_pd[97] * x[76];
	v[1] = -v[0];
	t1 = v[1] + x[55];
	t1 += -x[56];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = pow(x[57], 0.181587301587302);
	if (errno) in_trouble2("pow",x[57],0.181587301587302);
	if (x[57] > 0.) {
	gasnet_pd[98] = 0.181587301587302*(v[0]/x[57]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[98] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[57],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[99] = -214.9812 * v[1];
	v[1] = gasnet_pd[99] * x[46];
	t1 = v[1] + x[77];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = pow(x[58], 0.181587301587302);
	if (errno) in_trouble2("pow",x[58],0.181587301587302);
	if (x[58] > 0.) {
	gasnet_pd[100] = 0.181587301587302*(v[0]/x[58]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[100] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[58],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[101] = -214.9812 * v[1];
	v[1] = gasnet_pd[101] * x[47];
	t1 = v[1] + x[78];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = pow(x[59], 0.181587301587302);
	if (errno) in_trouble2("pow",x[59],0.181587301587302);
	if (x[59] > 0.) {
	gasnet_pd[102] = 0.181587301587302*(v[0]/x[59]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[102] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[59],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[103] = -214.9812 * v[1];
	v[1] = gasnet_pd[103] * x[48];
	t1 = v[1] + x[79];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = pow(x[60], 0.181587301587302);
	if (errno) in_trouble2("pow",x[60],0.181587301587302);
	if (x[60] > 0.) {
	gasnet_pd[104] = 0.181587301587302*(v[0]/x[60]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[104] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[60],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[105] = -214.9812 * v[1];
	v[1] = gasnet_pd[105] * x[49];
	t1 = v[1] + x[80];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = pow(x[60], 0.181587301587302);
	if (errno) in_trouble2("pow",x[60],0.181587301587302);
	if (x[60] > 0.) {
	gasnet_pd[106] = 0.181587301587302*(v[0]/x[60]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[106] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[60],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[107] = -214.9812 * v[1];
	v[1] = gasnet_pd[107] * x[53];
	t1 = v[1] + x[80];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = pow(x[61], 0.181587301587302);
	if (errno) in_trouble2("pow",x[61],0.181587301587302);
	if (x[61] > 0.) {
	gasnet_pd[108] = 0.181587301587302*(v[0]/x[61]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[108] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[61],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[109] = -214.9812 * v[1];
	v[1] = gasnet_pd[109] * x[50];
	t1 = v[1] + x[81];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = pow(x[62], 0.181587301587302);
	if (errno) in_trouble2("pow",x[62],0.181587301587302);
	if (x[62] > 0.) {
	gasnet_pd[110] = 0.181587301587302*(v[0]/x[62]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[110] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[62],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[111] = -214.9812 * v[1];
	v[1] = gasnet_pd[111] * x[51];
	t1 = v[1] + x[82];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = pow(x[63], 0.181587301587302);
	if (errno) in_trouble2("pow",x[63],0.181587301587302);
	if (x[63] > 0.) {
	gasnet_pd[112] = 0.181587301587302*(v[0]/x[63]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[112] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[63],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[113] = -214.9812 * v[1];
	v[1] = gasnet_pd[113] * x[52];
	t1 = v[1] + x[83];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = pow(x[64], 0.181587301587302);
	if (errno) in_trouble2("pow",x[64],0.181587301587302);
	if (x[64] > 0.) {
	gasnet_pd[114] = 0.181587301587302*(v[0]/x[64]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[114] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[64],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[115] = -214.9812 * v[1];
	v[1] = gasnet_pd[115] * x[54];
	t1 = v[1] + x[84];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = pow(x[65], 0.181587301587302);
	if (errno) in_trouble2("pow",x[65],0.181587301587302);
	if (x[65] > 0.) {
	gasnet_pd[116] = 0.181587301587302*(v[0]/x[65]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[116] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[65],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[117] = -214.9812 * v[1];
	v[1] = gasnet_pd[117] * x[55];
	t1 = v[1] + x[85];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = pow(x[66], 0.181587301587302);
	if (errno) in_trouble2("pow",x[66],0.181587301587302);
	if (x[66] > 0.) {
	gasnet_pd[118] = 0.181587301587302*(v[0]/x[66]);
	} else if (0.181587301587302 > 1.) {
	gasnet_pd[118] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[66],0.181587301587302);
	}
	v[1] = v[0] + -1.;
	gasnet_pd[119] = -214.9812 * v[1];
	v[1] = gasnet_pd[119] * x[56];
	t1 = v[1] + x[86];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[57] * x[22];
	t1 = v[0] + -x[11];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[58] * x[23];
	t1 = v[0] + -x[12];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[59] * x[24];
	t1 = v[0] + -x[13];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[60] * x[25];
	t1 = v[0] + -x[14];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[60] * x[25];
	t1 = v[0] + -x[18];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[61] * x[26];
	t1 = v[0] + -x[15];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[62] * x[27];
	t1 = v[0] + -x[16];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[63] * x[28];
	t1 = v[0] + -x[17];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[64] * x[30];
	t1 = v[0] + -x[19];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[65] * x[31];
	t1 = v[0] + -x[20];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[66] * x[32];
	t1 = v[0] + -x[21];
	c[42] = t1;

  /***  constraint 44  ***/

	gasnet_pd[120] = 870. * x[0];
	v[0] = gasnet_pd[120] * x[34];
	gasnet_pd[121] = 870. * x[1];
	v[1] = gasnet_pd[121] * x[35];
	v[0] += v[1];
	gasnet_pd[122] = 870. * x[2];
	v[1] = gasnet_pd[122] * x[36];
	v[0] += v[1];
	gasnet_pd[123] = 870. * x[3];
	v[1] = gasnet_pd[123] * x[37];
	v[0] += v[1];
	gasnet_pd[124] = 870. * x[4];
	v[1] = gasnet_pd[124] * x[38];
	v[0] += v[1];
	gasnet_pd[125] = 870. * x[5];
	v[1] = gasnet_pd[125] * x[39];
	v[0] += v[1];
	gasnet_pd[126] = 870. * x[6];
	v[1] = gasnet_pd[126] * x[40];
	v[0] += v[1];
	gasnet_pd[127] = 870. * x[7];
	v[1] = gasnet_pd[127] * x[41];
	v[0] += v[1];
	gasnet_pd[128] = 870. * x[8];
	v[1] = gasnet_pd[128] * x[42];
	v[0] += v[1];
	gasnet_pd[129] = 870. * x[9];
	v[1] = gasnet_pd[129] * x[43];
	v[0] += v[1];
	gasnet_pd[130] = 870. * x[10];
	v[1] = gasnet_pd[130] * x[44];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[87];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[11];
	t1 += -x[23];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[12];
	t1 += -x[24];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[13];
	t1 += -x[25];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[14];
	t1 += -x[26];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[15];
	t1 += -x[27];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[16];
	t1 += -x[28];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[17];
	t1 += -x[29];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[18];
	t1 += -x[30];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[19];
	t1 += -x[31];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[20];
	t1 += -x[32];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[21];
	t1 += -x[33];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[57];
	t1 += -x[67];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[58];
	t1 += -x[68];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[59];
	t1 += -x[69];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[60];
	t1 += -x[70];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[61];
	t1 += -x[71];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[62];
	t1 += -x[72];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[63];
	t1 += -x[73];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[64];
	t1 += -x[74];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[65];
	t1 += -x[75];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[66];
	t1 += -x[76];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -10000.*x[67];
	t1 += -10000.*x[68];
	t1 += -10000.*x[69];
	t1 += -10000.*x[70];
	t1 += -10000.*x[71];
	t1 += -10000.*x[72];
	t1 += -10000.*x[73];
	t1 += -10000.*x[74];
	t1 += -10000.*x[75];
	t1 += -10000.*x[76];
	t1 += -70.*x[77];
	t1 += -70.*x[78];
	t1 += -70.*x[79];
	t1 += -70.*x[80];
	t1 += -70.*x[81];
	t1 += -70.*x[82];
	t1 += -70.*x[83];
	t1 += -70.*x[84];
	t1 += -70.*x[85];
	t1 += -70.*x[86];
	t1 += x[88];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -8.*x[77];
	t1 += -8.*x[78];
	t1 += -8.*x[79];
	t1 += -8.*x[80];
	t1 += -8.*x[81];
	t1 += -8.*x[82];
	t1 += -8.*x[83];
	t1 += -8.*x[84];
	t1 += -8.*x[85];
	t1 += -8.*x[86];
	t1 += x[89];
	c[68] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[125] = gasnet_pd[7]*gasnet_pd[5];
	dv[0] = gasnet_pd[6]*gasnet_pd[1];
	dv[1] = gasnet_pd[6]*gasnet_pd[4];
	dv[2] = -dv[0];
	J[70] = dv[2]*gasnet_pd[3];
	J[36] = dv[0]*gasnet_pd[2];
	dv[1] = -dv[1]*7.58641e-07;
	J[102] = dv[1]*gasnet_pd[0];
	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[129] = gasnet_pd[15]*gasnet_pd[13];
	dv[0] = gasnet_pd[14]*gasnet_pd[9];
	dv[1] = gasnet_pd[14]*gasnet_pd[12];
	dv[2] = -dv[0];
	J[73] = dv[2]*gasnet_pd[11];
	J[39] = dv[0]*gasnet_pd[10];
	dv[1] = -dv[1]*7.58641e-07;
	J[104] = dv[1]*gasnet_pd[8];
	J[4] = 1.;

   /*** derivatives for constraint 3 ***/

	J[133] = gasnet_pd[23]*gasnet_pd[21];
	dv[0] = gasnet_pd[22]*gasnet_pd[17];
	dv[1] = gasnet_pd[22]*gasnet_pd[20];
	dv[2] = -dv[0];
	J[76] = dv[2]*gasnet_pd[19];
	J[42] = dv[0]*gasnet_pd[18];
	dv[1] = -dv[1]*7.58641e-07;
	J[106] = dv[1]*gasnet_pd[16];
	J[8] = 1.;

   /*** derivatives for constraint 4 ***/

	J[137] = gasnet_pd[31]*gasnet_pd[29];
	dv[0] = gasnet_pd[30]*gasnet_pd[25];
	dv[1] = gasnet_pd[30]*gasnet_pd[28];
	dv[2] = -dv[0];
	J[80] = dv[2]*gasnet_pd[27];
	J[45] = dv[0]*gasnet_pd[26];
	dv[1] = -dv[1]*7.58641e-07;
	J[108] = dv[1]*gasnet_pd[24];
	J[12] = 1.;

   /*** derivatives for constraint 5 ***/

	J[141] = gasnet_pd[39]*gasnet_pd[37];
	dv[0] = gasnet_pd[38]*gasnet_pd[33];
	dv[1] = gasnet_pd[38]*gasnet_pd[36];
	dv[2] = -dv[0];
	J[83] = dv[2]*gasnet_pd[35];
	J[48] = dv[0]*gasnet_pd[34];
	dv[1] = -dv[1]*7.58641e-07;
	J[110] = dv[1]*gasnet_pd[32];
	J[15] = 1.;

   /*** derivatives for constraint 6 ***/

	J[145] = gasnet_pd[47]*gasnet_pd[45];
	dv[0] = gasnet_pd[46]*gasnet_pd[41];
	dv[1] = gasnet_pd[46]*gasnet_pd[44];
	dv[2] = -dv[0];
	J[86] = dv[2]*gasnet_pd[43];
	J[51] = dv[0]*gasnet_pd[42];
	dv[1] = -dv[1]*7.58641e-07;
	J[112] = dv[1]*gasnet_pd[40];
	J[18] = 1.;

   /*** derivatives for constraint 7 ***/

	J[149] = gasnet_pd[55]*gasnet_pd[53];
	dv[0] = gasnet_pd[54]*gasnet_pd[49];
	dv[1] = gasnet_pd[54]*gasnet_pd[52];
	dv[2] = -dv[0];
	J[89] = dv[2]*gasnet_pd[51];
	J[54] = dv[0]*gasnet_pd[50];
	dv[1] = -dv[1]*7.58641e-07;
	J[114] = dv[1]*gasnet_pd[48];
	J[21] = 1.;

   /*** derivatives for constraint 8 ***/

	J[152] = gasnet_pd[63]*gasnet_pd[61];
	dv[0] = gasnet_pd[62]*gasnet_pd[57];
	dv[1] = gasnet_pd[62]*gasnet_pd[60];
	dv[2] = -dv[0];
	J[91] = dv[2]*gasnet_pd[59];
	J[57] = dv[0]*gasnet_pd[58];
	dv[1] = -dv[1]*7.58641e-07;
	J[116] = dv[1]*gasnet_pd[56];
	J[24] = 1.;

   /*** derivatives for constraint 9 ***/

	J[156] = gasnet_pd[71]*gasnet_pd[69];
	dv[0] = gasnet_pd[70]*gasnet_pd[65];
	dv[1] = gasnet_pd[70]*gasnet_pd[68];
	dv[2] = -dv[0];
	J[94] = dv[2]*gasnet_pd[67];
	J[60] = dv[0]*gasnet_pd[66];
	dv[1] = -dv[1]*7.58641e-07;
	J[118] = dv[1]*gasnet_pd[64];
	J[27] = 1.;

   /*** derivatives for constraint 10 ***/

	J[160] = gasnet_pd[79]*gasnet_pd[77];
	dv[0] = gasnet_pd[78]*gasnet_pd[73];
	dv[1] = gasnet_pd[78]*gasnet_pd[76];
	dv[2] = -dv[0];
	J[97] = dv[2]*gasnet_pd[75];
	J[63] = dv[0]*gasnet_pd[74];
	dv[1] = -dv[1]*7.58641e-07;
	J[120] = dv[1]*gasnet_pd[72];
	J[30] = 1.;

   /*** derivatives for constraint 11 ***/

	J[164] = gasnet_pd[87]*gasnet_pd[85];
	dv[0] = gasnet_pd[86]*gasnet_pd[81];
	dv[1] = gasnet_pd[86]*gasnet_pd[84];
	dv[2] = -dv[0];
	J[100] = dv[2]*gasnet_pd[83];
	J[66] = dv[0]*gasnet_pd[82];
	dv[1] = -dv[1]*7.58641e-07;
	J[122] = dv[1]*gasnet_pd[80];
	J[33] = 1.;

   /*** derivatives for constraint 12 ***/

	J[199] = -gasnet_pd[88];
	J[124] = -x[67]*0.005 + 1.;
	J[126] = -1.;

   /*** derivatives for constraint 13 ***/

	J[202] = -gasnet_pd[89];
	J[127] = -x[68]*0.005 + 1.;
	J[130] = -1.;

   /*** derivatives for constraint 14 ***/

	J[205] = -gasnet_pd[90];
	J[131] = -x[69]*0.005 + 1.;
	J[134] = -1.;

   /*** derivatives for constraint 15 ***/

	J[208] = -gasnet_pd[91];
	J[135] = -x[70]*0.005 + 1.;
	J[138] = -1.;
	J[153] = -1.;

   /*** derivatives for constraint 16 ***/

	J[211] = -gasnet_pd[92];
	J[139] = -x[71]*0.005 + 1.;
	J[142] = -1.;

   /*** derivatives for constraint 17 ***/

	J[214] = -gasnet_pd[93];
	J[143] = -x[72]*0.005 + 1.;
	J[146] = -1.;

   /*** derivatives for constraint 18 ***/

	J[217] = -gasnet_pd[94];
	J[147] = -x[73]*0.005 + 1.;
	J[150] = -1.;

   /*** derivatives for constraint 19 ***/

	J[220] = -gasnet_pd[95];
	J[154] = -x[74]*0.005 + 1.;
	J[157] = -1.;

   /*** derivatives for constraint 20 ***/

	J[223] = -gasnet_pd[96];
	J[158] = -x[75]*0.005 + 1.;
	J[161] = -1.;

   /*** derivatives for constraint 21 ***/

	J[226] = -gasnet_pd[97];
	J[162] = -x[76]*0.005 + 1.;
	J[165] = -1.;

   /*** derivatives for constraint 22 ***/

	J[128] = gasnet_pd[99];
	dv[0] = -x[46]*214.9812;
	J[167] = dv[0]*gasnet_pd[98];
	J[229] = 1.;

   /*** derivatives for constraint 23 ***/

	J[132] = gasnet_pd[101];
	dv[0] = -x[47]*214.9812;
	J[170] = dv[0]*gasnet_pd[100];
	J[232] = 1.;

   /*** derivatives for constraint 24 ***/

	J[136] = gasnet_pd[103];
	dv[0] = -x[48]*214.9812;
	J[173] = dv[0]*gasnet_pd[102];
	J[235] = 1.;

   /*** derivatives for constraint 25 ***/

	J[140] = gasnet_pd[105];
	dv[0] = -x[49]*214.9812;
	J[176] = dv[0]*gasnet_pd[104];
	J[238] = 1.;

   /*** derivatives for constraint 26 ***/

	J[155] = gasnet_pd[107];
	dv[0] = -x[53]*214.9812;
	J[177] = dv[0]*gasnet_pd[106];
	J[239] = 1.;

   /*** derivatives for constraint 27 ***/

	J[144] = gasnet_pd[109];
	dv[0] = -x[50]*214.9812;
	J[181] = dv[0]*gasnet_pd[108];
	J[242] = 1.;

   /*** derivatives for constraint 28 ***/

	J[148] = gasnet_pd[111];
	dv[0] = -x[51]*214.9812;
	J[184] = dv[0]*gasnet_pd[110];
	J[245] = 1.;

   /*** derivatives for constraint 29 ***/

	J[151] = gasnet_pd[113];
	dv[0] = -x[52]*214.9812;
	J[187] = dv[0]*gasnet_pd[112];
	J[248] = 1.;

   /*** derivatives for constraint 30 ***/

	J[159] = gasnet_pd[115];
	dv[0] = -x[54]*214.9812;
	J[190] = dv[0]*gasnet_pd[114];
	J[251] = 1.;

   /*** derivatives for constraint 31 ***/

	J[163] = gasnet_pd[117];
	dv[0] = -x[55]*214.9812;
	J[193] = dv[0]*gasnet_pd[116];
	J[254] = 1.;

   /*** derivatives for constraint 32 ***/

	J[166] = gasnet_pd[119];
	dv[0] = -x[56]*214.9812;
	J[196] = dv[0]*gasnet_pd[118];
	J[257] = 1.;

   /*** derivatives for constraint 33 ***/

	J[69] = x[57];
	J[168] = x[22];
	J[37] = -1.;

   /*** derivatives for constraint 34 ***/

	J[71] = x[58];
	J[171] = x[23];
	J[40] = -1.;

   /*** derivatives for constraint 35 ***/

	J[74] = x[59];
	J[174] = x[24];
	J[43] = -1.;

   /*** derivatives for constraint 36 ***/

	J[77] = x[60];
	J[178] = x[25];
	J[46] = -1.;

   /*** derivatives for constraint 37 ***/

	J[78] = x[60];
	J[179] = x[25];
	J[58] = -1.;

   /*** derivatives for constraint 38 ***/

	J[81] = x[61];
	J[182] = x[26];
	J[49] = -1.;

   /*** derivatives for constraint 39 ***/

	J[84] = x[62];
	J[185] = x[27];
	J[52] = -1.;

   /*** derivatives for constraint 40 ***/

	J[87] = x[63];
	J[188] = x[28];
	J[55] = -1.;

   /*** derivatives for constraint 41 ***/

	J[92] = x[64];
	J[191] = x[30];
	J[61] = -1.;

   /*** derivatives for constraint 42 ***/

	J[95] = x[65];
	J[194] = x[31];
	J[64] = -1.;

   /*** derivatives for constraint 43 ***/

	J[98] = x[66];
	J[197] = x[32];
	J[67] = -1.;

   /*** derivatives for constraint 44 ***/

	J[123] = -gasnet_pd[130];
	J[34] = -x[44]*870.;
	J[121] = -gasnet_pd[129];
	J[31] = -x[43]*870.;
	J[119] = -gasnet_pd[128];
	J[28] = -x[42]*870.;
	J[117] = -gasnet_pd[127];
	J[25] = -x[41]*870.;
	J[115] = -gasnet_pd[126];
	J[22] = -x[40]*870.;
	J[113] = -gasnet_pd[125];
	J[19] = -x[39]*870.;
	J[111] = -gasnet_pd[124];
	J[16] = -x[38]*870.;
	J[109] = -gasnet_pd[123];
	J[13] = -x[37]*870.;
	J[107] = -gasnet_pd[122];
	J[9] = -x[36]*870.;
	J[105] = -gasnet_pd[121];
	J[5] = -x[35]*870.;
	J[103] = -gasnet_pd[120];
	J[1] = -x[34]*870.;
	J[260] = 1.;

   /*** derivatives for constraint 45 ***/

	J[38] = 1.;
	J[72] = -1.;

   /*** derivatives for constraint 46 ***/

	J[41] = 1.;
	J[75] = -1.;

   /*** derivatives for constraint 47 ***/

	J[44] = 1.;
	J[79] = -1.;

   /*** derivatives for constraint 48 ***/

	J[47] = 1.;
	J[82] = -1.;

   /*** derivatives for constraint 49 ***/

	J[50] = 1.;
	J[85] = -1.;

   /*** derivatives for constraint 50 ***/

	J[53] = 1.;
	J[88] = -1.;

   /*** derivatives for constraint 51 ***/

	J[56] = 1.;
	J[90] = -1.;

   /*** derivatives for constraint 52 ***/

	J[59] = 1.;
	J[93] = -1.;

   /*** derivatives for constraint 53 ***/

	J[62] = 1.;
	J[96] = -1.;

   /*** derivatives for constraint 54 ***/

	J[65] = 1.;
	J[99] = -1.;

   /*** derivatives for constraint 55 ***/

	J[68] = 1.;
	J[101] = -1.;

   /*** derivatives for constraint 56 ***/

	J[2] = 1.;
	J[6] = 1.;
	J[10] = 1.;
	J[14] = 1.;
	J[17] = 1.;
	J[20] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 57 ***/

	J[3] = 1.;
	J[7] = 1.;
	J[11] = 1.;
	J[26] = 1.;
	J[29] = 1.;
	J[32] = 1.;
	J[35] = 1.;

   /*** derivatives for constraint 58 ***/

	J[169] = 1.;
	J[200] = -1.;

   /*** derivatives for constraint 59 ***/

	J[172] = 1.;
	J[203] = -1.;

   /*** derivatives for constraint 60 ***/

	J[175] = 1.;
	J[206] = -1.;

   /*** derivatives for constraint 61 ***/

	J[180] = 1.;
	J[209] = -1.;

   /*** derivatives for constraint 62 ***/

	J[183] = 1.;
	J[212] = -1.;

   /*** derivatives for constraint 63 ***/

	J[186] = 1.;
	J[215] = -1.;

   /*** derivatives for constraint 64 ***/

	J[189] = 1.;
	J[218] = -1.;

   /*** derivatives for constraint 65 ***/

	J[192] = 1.;
	J[221] = -1.;

   /*** derivatives for constraint 66 ***/

	J[195] = 1.;
	J[224] = -1.;

   /*** derivatives for constraint 67 ***/

	J[198] = 1.;
	J[227] = -1.;

   /*** derivatives for constraint 68 ***/

	J[201] = -10000.;
	J[204] = -10000.;
	J[207] = -10000.;
	J[210] = -10000.;
	J[213] = -10000.;
	J[216] = -10000.;
	J[219] = -10000.;
	J[222] = -10000.;
	J[225] = -10000.;
	J[228] = -10000.;
	J[230] = -70.;
	J[233] = -70.;
	J[236] = -70.;
	J[240] = -70.;
	J[243] = -70.;
	J[246] = -70.;
	J[249] = -70.;
	J[252] = -70.;
	J[255] = -70.;
	J[258] = -70.;
	J[261] = 1.;

   /*** derivatives for constraint 69 ***/

	J[231] = -8.;
	J[234] = -8.;
	J[237] = -8.;
	J[241] = -8.;
	J[244] = -8.;
	J[247] = -8.;
	J[250] = -8.;
	J[253] = -8.;
	J[256] = -8.;
	J[259] = -8.;
	J[262] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
