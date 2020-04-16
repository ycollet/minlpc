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
 fint ethanolm_auxcom_[1] = { 5 /* nlc */ };
 fint ethanolm_funcom_[208] = {
	37 /* nvar */,
	1 /* nobj */,
	72 /* ncon */,
	164 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	18,
	26,
	31,
	37,
	44,
	53,
	62,
	70,
	79,
	86,
	93,
	96,
	99,
	102,
	105,
	108,
	111,
	114,
	117,
	120,
	123,
	126,
	129,
	132,
	135,
	138,
	141,
	144,
	147,
	150,
	153,
	156,
	159,
	162,
	165,

	/* rownos */
	1,
	4,
	5,
	8,
	13,
	3,
	4,
	5,
	9,
	14,
	1,
	2,
	3,
	4,
	5,
	10,
	15,
	4,
	5,
	22,
	30,
	38,
	46,
	54,
	62,
	1,
	2,
	5,
	6,
	11,
	1,
	2,
	3,
	5,
	7,
	12,
	1,
	16,
	24,
	32,
	40,
	48,
	56,
	1,
	2,
	5,
	17,
	25,
	33,
	41,
	49,
	57,
	2,
	3,
	5,
	18,
	26,
	34,
	42,
	50,
	58,
	2,
	5,
	19,
	27,
	35,
	43,
	51,
	59,
	3,
	4,
	5,
	20,
	28,
	36,
	44,
	52,
	60,
	3,
	21,
	29,
	37,
	45,
	53,
	61,
	5,
	23,
	31,
	39,
	47,
	55,
	63,
	16,
	64,
	72,
	17,
	65,
	72,
	18,
	66,
	72,
	19,
	67,
	72,
	20,
	68,
	72,
	21,
	69,
	72,
	22,
	70,
	72,
	23,
	71,
	72,
	24,
	32,
	64,
	25,
	33,
	65,
	26,
	34,
	66,
	27,
	35,
	67,
	28,
	36,
	68,
	29,
	37,
	69,
	30,
	38,
	70,
	31,
	39,
	71,
	40,
	64,
	72,
	41,
	65,
	72,
	42,
	66,
	72,
	43,
	67,
	72,
	44,
	68,
	72,
	45,
	69,
	72,
	46,
	70,
	72,
	47,
	71,
	72 };

 real ethanolm_boundc_[1+74+144] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.00345,
		1.7e308,
		0.1011,
		1.7e308,
		0.9144,
		1.7e308,
		0.00095,
		1.7e308,
		0.11278,
		1.7e308,
		-1.7e308,
		0.345,
		-1.7e308,
		10.11,
		-1.7e308,
		91.44,
		-1.7e308,
		0.095,
		-1.7e308,
		11.278,
		-1.7e308,
		100000.999999995,
		-1.7e308,
		100000.999999995,
		-1.7e308,
		100000.999999995,
		-1.7e308,
		100000.999999995,
		-1.7e308,
		100000.999999995,
		-1.7e308,
		100000.999999995,
		-1.7e308,
		100000.999999995,
		-1.7e308,
		100000.999999995,
		-1.7e308,
		99999.000000005,
		-1.7e308,
		99999.000000005,
		-1.7e308,
		99999.000000005,
		-1.7e308,
		99999.000000005,
		-1.7e308,
		99999.000000005,
		-1.7e308,
		99999.000000005,
		-1.7e308,
		99999.000000005,
		-1.7e308,
		99999.000000005,
		-1.7e308,
		100001.000000005,
		-1.7e308,
		100001.000000005,
		-1.7e308,
		100001.000000005,
		-1.7e308,
		100001.000000005,
		-1.7e308,
		100001.000000005,
		-1.7e308,
		100001.000000005,
		-1.7e308,
		100001.000000005,
		-1.7e308,
		100001.000000005,
		-1.7e308,
		99998.999999995,
		-1.7e308,
		99998.999999995,
		-1.7e308,
		99998.999999995,
		-1.7e308,
		99998.999999995,
		-1.7e308,
		99998.999999995,
		-1.7e308,
		99998.999999995,
		-1.7e308,
		99998.999999995,
		-1.7e308,
		99998.999999995,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
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
		8.};

 real ethanolm_x0comn_[37] = {
		9.144,
		0.0095,
		1.1278,
		0.,
		0.0345,
		1.011,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real ethanolm_pd[84];
static real ethanolm_old_x[37];
static int ethanolm_xkind = -1;

 static int
ethanolm_xcheck(real *x)
{
	real *x1 = ethanolm_old_x, *xe = x + 37;
	errno = 0;
	if (ethanolm_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ethanolm_xkind = 0;
	return 1;
	}
 real
ethanolm_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[3];
	fint wantfg = *needfg;
	if (ethanolm_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 0.05);
	if (errno) in_trouble2("pow",x[0],0.05);
	if (x[0] > 0.) {
	ethanolm_pd[76] = 0.05*(v[0]/x[0]);
	} else if (0.05 > 1.) {
	ethanolm_pd[76] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.05);
	}
	ethanolm_pd[77] = -325.08 * v[0];
	ethanolm_pd[79] = pow(x[1], 0.533);
	if (errno) in_trouble2("pow",x[1],0.533);
	if (x[1] > 0.) {
	ethanolm_pd[78] = 0.533*(ethanolm_pd[79]/x[1]);
	} else if (0.533 > 1.) {
	ethanolm_pd[78] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.533);
	}
	ethanolm_pd[80] = ethanolm_pd[77] * ethanolm_pd[79];
	ethanolm_pd[82] = pow(x[2], -0.0822);
	if (errno) in_trouble2("pow",x[2],-0.0822);
	if (x[2] > 0.) {
	ethanolm_pd[81] = -0.0822*(ethanolm_pd[82]/x[2]);
	} else if (-0.0822 > 1.) {
	ethanolm_pd[81] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.0822);
	}
	ethanolm_pd[83] = ethanolm_pd[80] * ethanolm_pd[82];
	v[2] = ethanolm_pd[83] * x[3];
	;}

	if (wantfg & 2) {
	g[3] = ethanolm_pd[83];
	dv[0] = x[3]*ethanolm_pd[80];
	dv[1] = x[3]*ethanolm_pd[82];
	g[2] = dv[0]*ethanolm_pd[81];
	dv[2] = dv[1]*ethanolm_pd[77];
	dv[1] *= ethanolm_pd[79];
	g[1] = dv[2]*ethanolm_pd[78];
	dv[1] = -dv[1]*325.08;
	g[0] = dv[1]*ethanolm_pd[76];
	}

	return v[2];
}

 void
ethanolm_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[8], dv[10];
	real t1;
	fint wantfg = *needfg;
	if (ethanolm_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[4], 0.7464);
	if (errno) in_trouble2("pow",x[4],0.7464);
	if (x[4] > 0.) {
	ethanolm_pd[0] = 0.7464*(v[0]/x[4]);
	} else if (0.7464 > 1.) {
	ethanolm_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.7464);
	}
	ethanolm_pd[1] = 196.1292 * v[0];
	ethanolm_pd[3] = pow(x[2], 0.0243);
	if (errno) in_trouble2("pow",x[2],0.0243);
	if (x[2] > 0.) {
	ethanolm_pd[2] = 0.0243*(ethanolm_pd[3]/x[2]);
	} else if (0.0243 > 1.) {
	ethanolm_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.0243);
	}
	ethanolm_pd[4] = ethanolm_pd[1] * ethanolm_pd[3];
	v[1] = ethanolm_pd[4] * x[7];
	v[2] = pow(x[5], -0.2344);
	if (errno) in_trouble2("pow",x[5],-0.2344);
	if (x[5] > 0.) {
	ethanolm_pd[5] = -0.2344*(v[2]/x[5]);
	} else if (-0.2344 > 1.) {
	ethanolm_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],-0.2344);
	}
	ethanolm_pd[6] = 16.00034 * v[2];
	v[2] = ethanolm_pd[6] * x[6];
	v[3] = v[1] - v[2];
	c[0] = v[3];

  /***  constraint 2  ***/

	v[0] = pow(x[4], 0.7464);
	if (errno) in_trouble2("pow",x[4],0.7464);
	if (x[4] > 0.) {
	ethanolm_pd[7] = 0.7464*(v[0]/x[4]);
	} else if (0.7464 > 1.) {
	ethanolm_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.7464);
	}
	ethanolm_pd[8] = 196.1292 * v[0];
	ethanolm_pd[10] = pow(x[2], 0.0243);
	if (errno) in_trouble2("pow",x[2],0.0243);
	if (x[2] > 0.) {
	ethanolm_pd[9] = 0.0243*(ethanolm_pd[10]/x[2]);
	} else if (0.0243 > 1.) {
	ethanolm_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.0243);
	}
	ethanolm_pd[11] = ethanolm_pd[8] * ethanolm_pd[10];
	v[1] = ethanolm_pd[11] * x[7];
	v[2] = -v[1];
	v[1] = pow(x[5], 0.7318);
	if (errno) in_trouble2("pow",x[5],0.7318);
	if (x[5] > 0.) {
	ethanolm_pd[12] = 0.7318*(v[1]/x[5]);
	} else if (0.7318 > 1.) {
	ethanolm_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.7318);
	}
	ethanolm_pd[13] = 16.58544 * v[1];
	ethanolm_pd[15] = pow(x[2], -0.3941);
	if (errno) in_trouble2("pow",x[2],-0.3941);
	if (x[2] > 0.) {
	ethanolm_pd[14] = -0.3941*(ethanolm_pd[15]/x[2]);
	} else if (-0.3941 > 1.) {
	ethanolm_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.3941);
	}
	ethanolm_pd[16] = ethanolm_pd[13] * ethanolm_pd[15];
	v[3] = ethanolm_pd[16] * x[8];
	v[2] += v[3];
	v[3] = pow(x[5], 8.6107);
	if (errno) in_trouble2("pow",x[5],8.6107);
	if (x[5] > 0.) {
	ethanolm_pd[17] = 8.6107*(v[3]/x[5]);
	} else if (8.6107 > 1.) {
	ethanolm_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],8.6107);
	}
	ethanolm_pd[18] = 0.012879 * v[3];
	v[3] = ethanolm_pd[18] * x[9];
	v[2] += v[3];
	c[1] = v[2];

  /***  constraint 3  ***/

	v[0] = pow(x[5], 0.7318);
	if (errno) in_trouble2("pow",x[5],0.7318);
	if (x[5] > 0.) {
	ethanolm_pd[19] = 0.7318*(v[0]/x[5]);
	} else if (0.7318 > 1.) {
	ethanolm_pd[19] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.7318);
	}
	ethanolm_pd[20] = 16.58544 * v[0];
	ethanolm_pd[22] = pow(x[2], -0.3941);
	if (errno) in_trouble2("pow",x[2],-0.3941);
	if (x[2] > 0.) {
	ethanolm_pd[21] = -0.3941*(ethanolm_pd[22]/x[2]);
	} else if (-0.3941 > 1.) {
	ethanolm_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.3941);
	}
	ethanolm_pd[23] = ethanolm_pd[20] * ethanolm_pd[22];
	v[1] = ethanolm_pd[23] * x[8];
	v[2] = -v[1];
	v[1] = pow(x[0], 0.6159);
	if (errno) in_trouble2("pow",x[0],0.6159);
	if (x[0] > 0.) {
	ethanolm_pd[24] = 0.6159*(v[1]/x[0]);
	} else if (0.6159 > 1.) {
	ethanolm_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6159);
	}
	ethanolm_pd[25] = 3.78145609890476 * v[1];
	ethanolm_pd[27] = pow(x[2], 0.1308);
	if (errno) in_trouble2("pow",x[2],0.1308);
	if (x[2] > 0.) {
	ethanolm_pd[26] = 0.1308*(ethanolm_pd[27]/x[2]);
	} else if (0.1308 > 1.) {
	ethanolm_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.1308);
	}
	ethanolm_pd[28] = ethanolm_pd[25] * ethanolm_pd[27];
	v[3] = ethanolm_pd[28] * x[10];
	v[2] += v[3];
	v[3] = pow(x[0], 0.05);
	if (errno) in_trouble2("pow",x[0],0.05);
	if (x[0] > 0.) {
	ethanolm_pd[29] = 0.05*(v[3]/x[0]);
	} else if (0.05 > 1.) {
	ethanolm_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.05);
	}
	ethanolm_pd[30] = 9.59175 * v[3];
	ethanolm_pd[32] = pow(x[1], 0.533);
	if (errno) in_trouble2("pow",x[1],0.533);
	if (x[1] > 0.) {
	ethanolm_pd[31] = 0.533*(ethanolm_pd[32]/x[1]);
	} else if (0.533 > 1.) {
	ethanolm_pd[31] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.533);
	}
	ethanolm_pd[33] = ethanolm_pd[30] * ethanolm_pd[32];
	ethanolm_pd[35] = pow(x[2], -0.0822);
	if (errno) in_trouble2("pow",x[2],-0.0822);
	if (x[2] > 0.) {
	ethanolm_pd[34] = -0.0822*(ethanolm_pd[35]/x[2]);
	} else if (-0.0822 > 1.) {
	ethanolm_pd[34] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.0822);
	}
	ethanolm_pd[36] = ethanolm_pd[33] * ethanolm_pd[35];
	v[5] = ethanolm_pd[36] * x[11];
	v[2] += v[5];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = pow(x[0], 0.05);
	if (errno) in_trouble2("pow",x[0],0.05);
	if (x[0] > 0.) {
	ethanolm_pd[37] = 0.05*(v[0]/x[0]);
	} else if (0.05 > 1.) {
	ethanolm_pd[37] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.05);
	}
	ethanolm_pd[38] = 325.08 * v[0];
	ethanolm_pd[40] = pow(x[1], 0.533);
	if (errno) in_trouble2("pow",x[1],0.533);
	if (x[1] > 0.) {
	ethanolm_pd[39] = 0.533*(ethanolm_pd[40]/x[1]);
	} else if (0.533 > 1.) {
	ethanolm_pd[39] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.533);
	}
	ethanolm_pd[41] = ethanolm_pd[38] * ethanolm_pd[40];
	ethanolm_pd[43] = pow(x[2], -0.0822);
	if (errno) in_trouble2("pow",x[2],-0.0822);
	if (x[2] > 0.) {
	ethanolm_pd[42] = -0.0822*(ethanolm_pd[43]/x[2]);
	} else if (-0.0822 > 1.) {
	ethanolm_pd[42] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.0822);
	}
	ethanolm_pd[44] = ethanolm_pd[41] * ethanolm_pd[43];
	v[2] = ethanolm_pd[44] * x[3];
	v[3] = pow(x[0], 0.6159);
	if (errno) in_trouble2("pow",x[0],0.6159);
	if (x[0] > 0.) {
	ethanolm_pd[45] = 0.6159*(v[3]/x[0]);
	} else if (0.6159 > 1.) {
	ethanolm_pd[45] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6159);
	}
	ethanolm_pd[46] = 7.56291219780952 * v[3];
	ethanolm_pd[48] = pow(x[2], 0.1308);
	if (errno) in_trouble2("pow",x[2],0.1308);
	if (x[2] > 0.) {
	ethanolm_pd[47] = 0.1308*(ethanolm_pd[48]/x[2]);
	} else if (0.1308 > 1.) {
	ethanolm_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.1308);
	}
	ethanolm_pd[49] = ethanolm_pd[46] * ethanolm_pd[48];
	v[4] = ethanolm_pd[49] * x[10];
	v[5] = v[2] - v[4];
	c[3] = v[5];

  /***  constraint 5  ***/

	v[0] = pow(x[4], 0.7464);
	if (errno) in_trouble2("pow",x[4],0.7464);
	if (x[4] > 0.) {
	ethanolm_pd[50] = 0.7464*(v[0]/x[4]);
	} else if (0.7464 > 1.) {
	ethanolm_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.7464);
	}
	ethanolm_pd[51] = -196.1292 * v[0];
	ethanolm_pd[53] = pow(x[2], 0.0243);
	if (errno) in_trouble2("pow",x[2],0.0243);
	if (x[2] > 0.) {
	ethanolm_pd[52] = 0.0243*(ethanolm_pd[53]/x[2]);
	} else if (0.0243 > 1.) {
	ethanolm_pd[52] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.0243);
	}
	ethanolm_pd[54] = ethanolm_pd[51] * ethanolm_pd[53];
	v[1] = ethanolm_pd[54] * x[7];
	v[2] = -v[1];
	v[1] = pow(x[5], 0.7318);
	if (errno) in_trouble2("pow",x[5],0.7318);
	if (x[5] > 0.) {
	ethanolm_pd[55] = 0.7318*(v[1]/x[5]);
	} else if (0.7318 > 1.) {
	ethanolm_pd[55] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.7318);
	}
	ethanolm_pd[56] = 16.58544 * v[1];
	ethanolm_pd[58] = pow(x[2], -0.3941);
	if (errno) in_trouble2("pow",x[2],-0.3941);
	if (x[2] > 0.) {
	ethanolm_pd[57] = -0.3941*(ethanolm_pd[58]/x[2]);
	} else if (-0.3941 > 1.) {
	ethanolm_pd[57] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.3941);
	}
	ethanolm_pd[59] = ethanolm_pd[56] * ethanolm_pd[58];
	v[3] = ethanolm_pd[59] * x[8];
	v[2] += v[3];
	v[3] = pow(x[5], 8.6107);
	if (errno) in_trouble2("pow",x[5],8.6107);
	if (x[5] > 0.) {
	ethanolm_pd[60] = 8.6107*(v[3]/x[5]);
	} else if (8.6107 > 1.) {
	ethanolm_pd[60] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],8.6107);
	}
	ethanolm_pd[61] = 0.012879 * v[3];
	v[3] = ethanolm_pd[61] * x[9];
	v[2] += v[3];
	v[3] = pow(x[0], 0.6159);
	if (errno) in_trouble2("pow",x[0],0.6159);
	if (x[0] > 0.) {
	ethanolm_pd[62] = 0.6159*(v[3]/x[0]);
	} else if (0.6159 > 1.) {
	ethanolm_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6159);
	}
	ethanolm_pd[63] = 7.56291219780952 * v[3];
	ethanolm_pd[65] = pow(x[2], 0.1308);
	if (errno) in_trouble2("pow",x[2],0.1308);
	if (x[2] > 0.) {
	ethanolm_pd[64] = 0.1308*(ethanolm_pd[65]/x[2]);
	} else if (0.1308 > 1.) {
	ethanolm_pd[64] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.1308);
	}
	ethanolm_pd[66] = ethanolm_pd[63] * ethanolm_pd[65];
	v[4] = ethanolm_pd[66] * x[10];
	v[5] = -v[4];
	v[2] += v[5];
	v[5] = pow(x[0], 0.05);
	if (errno) in_trouble2("pow",x[0],0.05);
	if (x[0] > 0.) {
	ethanolm_pd[67] = 0.05*(v[5]/x[0]);
	} else if (0.05 > 1.) {
	ethanolm_pd[67] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.05);
	}
	ethanolm_pd[68] = 325.08 * v[5];
	ethanolm_pd[70] = pow(x[1], 0.533);
	if (errno) in_trouble2("pow",x[1],0.533);
	if (x[1] > 0.) {
	ethanolm_pd[69] = 0.533*(ethanolm_pd[70]/x[1]);
	} else if (0.533 > 1.) {
	ethanolm_pd[69] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.533);
	}
	ethanolm_pd[71] = ethanolm_pd[68] * ethanolm_pd[70];
	ethanolm_pd[73] = pow(x[2], -0.0822);
	if (errno) in_trouble2("pow",x[2],-0.0822);
	if (x[2] > 0.) {
	ethanolm_pd[72] = -0.0822*(ethanolm_pd[73]/x[2]);
	} else if (-0.0822 > 1.) {
	ethanolm_pd[72] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.0822);
	}
	ethanolm_pd[74] = ethanolm_pd[71] * ethanolm_pd[73];
	v[6] = ethanolm_pd[74] * x[3];
	v[7] = -v[6];
	v[2] += v[7];
	ethanolm_pd[75] = 25.1 * x[2];
	v[7] = ethanolm_pd[75] * x[12];
	v[2] += v[7];
	c[4] = v[2];

  /***  constraint 6  ***/

	t1 = x[4];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[5];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[0];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[1];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[2];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[4];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[5];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[1];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[2];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[6];
	t1 += 100000.*x[13];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[7];
	t1 += 100000.*x[14];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[8];
	t1 += 100000.*x[15];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[9];
	t1 += 100000.*x[16];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[10];
	t1 += 100000.*x[17];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[11];
	t1 += 100000.*x[18];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[3];
	t1 += 100000.*x[19];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[12];
	t1 += 100000.*x[20];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[6];
	t1 += 100000.*x[21];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[7];
	t1 += 100000.*x[22];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[8];
	t1 += 100000.*x[23];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[9];
	t1 += 100000.*x[24];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[10];
	t1 += 100000.*x[25];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[11];
	t1 += 100000.*x[26];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[3];
	t1 += 100000.*x[27];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[12];
	t1 += 100000.*x[28];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[6];
	t1 += 100000.*x[21];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[7];
	t1 += 100000.*x[22];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[8];
	t1 += 100000.*x[23];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[9];
	t1 += 100000.*x[24];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[10];
	t1 += 100000.*x[25];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[11];
	t1 += 100000.*x[26];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[3];
	t1 += 100000.*x[27];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[12];
	t1 += 100000.*x[28];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[6];
	t1 += 100000.*x[29];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[7];
	t1 += 100000.*x[30];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[8];
	t1 += 100000.*x[31];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[9];
	t1 += 100000.*x[32];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[10];
	t1 += 100000.*x[33];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[11];
	t1 += 100000.*x[34];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[3];
	t1 += 100000.*x[35];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[12];
	t1 += 100000.*x[36];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[6];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[7];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[8];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[9];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[10];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[11];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[3];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[12];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[6];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[7];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[8];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[9];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[10];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[11];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[3];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[12];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[13];
	t1 += x[21];
	t1 += x[29];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[14];
	t1 += x[22];
	t1 += x[30];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[15];
	t1 += x[23];
	t1 += x[31];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[16];
	t1 += x[24];
	t1 += x[32];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[17];
	t1 += x[25];
	t1 += x[33];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[18];
	t1 += x[26];
	t1 += x[34];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[19];
	t1 += x[27];
	t1 += x[35];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[20];
	t1 += x[28];
	t1 += x[36];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	c[71] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[36] = -ethanolm_pd[6];
	dv[0] = -x[6]*16.00034;
	J[30] = dv[0]*ethanolm_pd[5];
	J[43] = ethanolm_pd[4];
	dv[1] = x[7]*ethanolm_pd[1];
	dv[2] = x[7]*ethanolm_pd[3];
	J[10] = dv[1]*ethanolm_pd[2];
	dv[2] *= 196.1292;
	J[25] = dv[2]*ethanolm_pd[0];

   /*** derivatives for constraint 2 ***/

	J[61] = ethanolm_pd[18];
	dv[0] = x[9]*0.012879;
	J[31] = dv[0]*ethanolm_pd[17];
	J[52] = ethanolm_pd[16];
	dv[1] = x[8]*ethanolm_pd[13];
	dv[2] = x[8]*ethanolm_pd[15];
	J[11] = dv[1]*ethanolm_pd[14];
	dv[2] *= 16.58544;
	J[31] += dv[2]*ethanolm_pd[12];
	J[44] = -ethanolm_pd[11];
	dv[3] = -x[7]*ethanolm_pd[8];
	dv[4] = -x[7]*ethanolm_pd[10];
	J[11] += dv[3]*ethanolm_pd[9];
	dv[4] *= 196.1292;
	J[26] = dv[4]*ethanolm_pd[7];

   /*** derivatives for constraint 3 ***/

	J[78] = ethanolm_pd[36];
	dv[0] = x[11]*ethanolm_pd[33];
	dv[1] = x[11]*ethanolm_pd[35];
	J[12] = dv[0]*ethanolm_pd[34];
	dv[2] = dv[1]*ethanolm_pd[30];
	dv[1] *= ethanolm_pd[32];
	J[5] = dv[2]*ethanolm_pd[31];
	dv[1] *= 9.59175;
	J[0] = dv[1]*ethanolm_pd[29];
	J[69] = ethanolm_pd[28];
	dv[3] = x[10]*ethanolm_pd[25];
	dv[4] = x[10]*ethanolm_pd[27];
	J[12] += dv[3]*ethanolm_pd[26];
	dv[4] *= 3.78145609890476;
	J[0] += dv[4]*ethanolm_pd[24];
	J[53] = -ethanolm_pd[23];
	dv[5] = -x[8]*ethanolm_pd[20];
	dv[6] = -x[8]*ethanolm_pd[22];
	J[12] += dv[5]*ethanolm_pd[21];
	dv[6] *= 16.58544;
	J[32] = dv[6]*ethanolm_pd[19];

   /*** derivatives for constraint 4 ***/

	J[70] = -ethanolm_pd[49];
	dv[0] = -x[10]*ethanolm_pd[46];
	dv[1] = -x[10]*ethanolm_pd[48];
	J[13] = dv[0]*ethanolm_pd[47];
	dv[1] *= 7.56291219780952;
	J[1] = dv[1]*ethanolm_pd[45];
	J[17] = ethanolm_pd[44];
	dv[2] = x[3]*ethanolm_pd[41];
	dv[3] = x[3]*ethanolm_pd[43];
	J[13] += dv[2]*ethanolm_pd[42];
	dv[4] = dv[3]*ethanolm_pd[38];
	dv[3] *= ethanolm_pd[40];
	J[6] = dv[4]*ethanolm_pd[39];
	dv[3] *= 325.08;
	J[1] += dv[3]*ethanolm_pd[37];

   /*** derivatives for constraint 5 ***/

	J[85] = ethanolm_pd[75];
	J[14] = x[12]*25.1;
	J[18] = -ethanolm_pd[74];
	dv[0] = -x[3]*ethanolm_pd[71];
	dv[1] = -x[3]*ethanolm_pd[73];
	J[14] += dv[0]*ethanolm_pd[72];
	dv[2] = dv[1]*ethanolm_pd[68];
	dv[1] *= ethanolm_pd[70];
	J[7] = dv[2]*ethanolm_pd[69];
	dv[1] *= 325.08;
	J[2] = dv[1]*ethanolm_pd[67];
	J[71] = -ethanolm_pd[66];
	dv[3] = -x[10]*ethanolm_pd[63];
	dv[4] = -x[10]*ethanolm_pd[65];
	J[14] += dv[3]*ethanolm_pd[64];
	dv[4] *= 7.56291219780952;
	J[2] += dv[4]*ethanolm_pd[62];
	J[62] = ethanolm_pd[61];
	dv[5] = x[9]*0.012879;
	J[33] = dv[5]*ethanolm_pd[60];
	J[54] = ethanolm_pd[59];
	dv[6] = x[8]*ethanolm_pd[56];
	dv[7] = x[8]*ethanolm_pd[58];
	J[14] += dv[6]*ethanolm_pd[57];
	dv[7] *= 16.58544;
	J[33] += dv[7]*ethanolm_pd[55];
	J[45] = -ethanolm_pd[54];
	dv[8] = -x[7]*ethanolm_pd[51];
	dv[9] = -x[7]*ethanolm_pd[53];
	J[14] += dv[8]*ethanolm_pd[52];
	dv[9] = -dv[9]*196.1292;
	J[27] = dv[9]*ethanolm_pd[50];

   /*** derivatives for constraint 6 ***/

	J[28] = 1.;

   /*** derivatives for constraint 7 ***/

	J[34] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = 1.;

   /*** derivatives for constraint 10 ***/

	J[15] = 1.;

   /*** derivatives for constraint 11 ***/

	J[29] = 1.;

   /*** derivatives for constraint 12 ***/

	J[35] = 1.;

   /*** derivatives for constraint 13 ***/

	J[4] = 1.;

   /*** derivatives for constraint 14 ***/

	J[9] = 1.;

   /*** derivatives for constraint 15 ***/

	J[16] = 1.;

   /*** derivatives for constraint 16 ***/

	J[37] = 1.;
	J[92] = 100000.;

   /*** derivatives for constraint 17 ***/

	J[46] = 1.;
	J[95] = 100000.;

   /*** derivatives for constraint 18 ***/

	J[55] = 1.;
	J[98] = 100000.;

   /*** derivatives for constraint 19 ***/

	J[63] = 1.;
	J[101] = 100000.;

   /*** derivatives for constraint 20 ***/

	J[72] = 1.;
	J[104] = 100000.;

   /*** derivatives for constraint 21 ***/

	J[79] = 1.;
	J[107] = 100000.;

   /*** derivatives for constraint 22 ***/

	J[19] = 1.;
	J[110] = 100000.;

   /*** derivatives for constraint 23 ***/

	J[86] = 1.;
	J[113] = 100000.;

   /*** derivatives for constraint 24 ***/

	J[38] = -1.;
	J[116] = 100000.;

   /*** derivatives for constraint 25 ***/

	J[47] = -1.;
	J[119] = 100000.;

   /*** derivatives for constraint 26 ***/

	J[56] = -1.;
	J[122] = 100000.;

   /*** derivatives for constraint 27 ***/

	J[64] = -1.;
	J[125] = 100000.;

   /*** derivatives for constraint 28 ***/

	J[73] = -1.;
	J[128] = 100000.;

   /*** derivatives for constraint 29 ***/

	J[80] = -1.;
	J[131] = 100000.;

   /*** derivatives for constraint 30 ***/

	J[20] = -1.;
	J[134] = 100000.;

   /*** derivatives for constraint 31 ***/

	J[87] = -1.;
	J[137] = 100000.;

   /*** derivatives for constraint 32 ***/

	J[39] = 1.;
	J[117] = 100000.;

   /*** derivatives for constraint 33 ***/

	J[48] = 1.;
	J[120] = 100000.;

   /*** derivatives for constraint 34 ***/

	J[57] = 1.;
	J[123] = 100000.;

   /*** derivatives for constraint 35 ***/

	J[65] = 1.;
	J[126] = 100000.;

   /*** derivatives for constraint 36 ***/

	J[74] = 1.;
	J[129] = 100000.;

   /*** derivatives for constraint 37 ***/

	J[81] = 1.;
	J[132] = 100000.;

   /*** derivatives for constraint 38 ***/

	J[21] = 1.;
	J[135] = 100000.;

   /*** derivatives for constraint 39 ***/

	J[88] = 1.;
	J[138] = 100000.;

   /*** derivatives for constraint 40 ***/

	J[40] = -1.;
	J[140] = 100000.;

   /*** derivatives for constraint 41 ***/

	J[49] = -1.;
	J[143] = 100000.;

   /*** derivatives for constraint 42 ***/

	J[58] = -1.;
	J[146] = 100000.;

   /*** derivatives for constraint 43 ***/

	J[66] = -1.;
	J[149] = 100000.;

   /*** derivatives for constraint 44 ***/

	J[75] = -1.;
	J[152] = 100000.;

   /*** derivatives for constraint 45 ***/

	J[82] = -1.;
	J[155] = 100000.;

   /*** derivatives for constraint 46 ***/

	J[22] = -1.;
	J[158] = 100000.;

   /*** derivatives for constraint 47 ***/

	J[89] = -1.;
	J[161] = 100000.;

   /*** derivatives for constraint 48 ***/

	J[41] = 1.;

   /*** derivatives for constraint 49 ***/

	J[50] = 1.;

   /*** derivatives for constraint 50 ***/

	J[59] = 1.;

   /*** derivatives for constraint 51 ***/

	J[67] = 1.;

   /*** derivatives for constraint 52 ***/

	J[76] = 1.;

   /*** derivatives for constraint 53 ***/

	J[83] = 1.;

   /*** derivatives for constraint 54 ***/

	J[23] = 1.;

   /*** derivatives for constraint 55 ***/

	J[90] = 1.;

   /*** derivatives for constraint 56 ***/

	J[42] = 1.;

   /*** derivatives for constraint 57 ***/

	J[51] = 1.;

   /*** derivatives for constraint 58 ***/

	J[60] = 1.;

   /*** derivatives for constraint 59 ***/

	J[68] = 1.;

   /*** derivatives for constraint 60 ***/

	J[77] = 1.;

   /*** derivatives for constraint 61 ***/

	J[84] = 1.;

   /*** derivatives for constraint 62 ***/

	J[24] = 1.;

   /*** derivatives for constraint 63 ***/

	J[91] = 1.;

   /*** derivatives for constraint 64 ***/

	J[93] = 1.;
	J[118] = 1.;
	J[141] = 1.;

   /*** derivatives for constraint 65 ***/

	J[96] = 1.;
	J[121] = 1.;
	J[144] = 1.;

   /*** derivatives for constraint 66 ***/

	J[99] = 1.;
	J[124] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 67 ***/

	J[102] = 1.;
	J[127] = 1.;
	J[150] = 1.;

   /*** derivatives for constraint 68 ***/

	J[105] = 1.;
	J[130] = 1.;
	J[153] = 1.;

   /*** derivatives for constraint 69 ***/

	J[108] = 1.;
	J[133] = 1.;
	J[156] = 1.;

   /*** derivatives for constraint 70 ***/

	J[111] = 1.;
	J[136] = 1.;
	J[159] = 1.;

   /*** derivatives for constraint 71 ***/

	J[114] = 1.;
	J[139] = 1.;
	J[162] = 1.;

   /*** derivatives for constraint 72 ***/

	J[94] = 1.;
	J[97] = 1.;
	J[100] = 1.;
	J[103] = 1.;
	J[106] = 1.;
	J[109] = 1.;
	J[112] = 1.;
	J[115] = 1.;
	J[142] = 1.;
	J[145] = 1.;
	J[148] = 1.;
	J[151] = 1.;
	J[154] = 1.;
	J[157] = 1.;
	J[160] = 1.;
	J[163] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
