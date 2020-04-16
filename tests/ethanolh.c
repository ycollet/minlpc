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
 fint ethanolh_auxcom_[1] = { 5 /* nlc */ };
 fint ethanolh_funcom_[280] = {
	61 /* nvar */,
	1 /* nobj */,
	80 /* ncon */,
	212 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	18,
	21,
	26,
	32,
	34,
	38,
	42,
	45,
	49,
	51,
	53,
	56,
	59,
	62,
	65,
	68,
	71,
	74,
	77,
	80,
	83,
	86,
	89,
	92,
	95,
	98,
	101,
	104,
	107,
	110,
	113,
	116,
	119,
	122,
	125,
	129,
	133,
	137,
	141,
	145,
	149,
	153,
	157,
	160,
	163,
	166,
	169,
	172,
	175,
	178,
	181,
	185,
	189,
	193,
	197,
	201,
	205,
	209,
	213,

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
	1,
	2,
	5,
	17,
	2,
	3,
	5,
	18,
	2,
	5,
	19,
	3,
	4,
	5,
	20,
	3,
	21,
	5,
	23,
	16,
	24,
	32,
	17,
	25,
	33,
	18,
	26,
	34,
	19,
	27,
	35,
	20,
	28,
	36,
	21,
	29,
	37,
	22,
	30,
	38,
	23,
	31,
	39,
	16,
	40,
	48,
	17,
	41,
	49,
	18,
	42,
	50,
	19,
	43,
	51,
	20,
	44,
	52,
	21,
	45,
	53,
	22,
	46,
	54,
	23,
	47,
	55,
	16,
	56,
	64,
	17,
	57,
	65,
	18,
	58,
	66,
	19,
	59,
	67,
	20,
	60,
	68,
	21,
	61,
	69,
	22,
	62,
	70,
	23,
	63,
	71,
	24,
	32,
	72,
	80,
	25,
	33,
	73,
	80,
	26,
	34,
	74,
	80,
	27,
	35,
	75,
	80,
	28,
	36,
	76,
	80,
	29,
	37,
	77,
	80,
	30,
	38,
	78,
	80,
	31,
	39,
	79,
	80,
	40,
	48,
	72,
	41,
	49,
	73,
	42,
	50,
	74,
	43,
	51,
	75,
	44,
	52,
	76,
	45,
	53,
	77,
	46,
	54,
	78,
	47,
	55,
	79,
	56,
	64,
	72,
	80,
	57,
	65,
	73,
	80,
	58,
	66,
	74,
	80,
	59,
	67,
	75,
	80,
	60,
	68,
	76,
	80,
	61,
	69,
	77,
	80,
	62,
	70,
	78,
	80,
	63,
	71,
	79,
	80 };

 real ethanolh_boundc_[1+122+160] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real ethanolh_x0comn_[61] = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real ethanolh_pd[84];
static real ethanolh_old_x[61];
static int ethanolh_xkind = -1;

 static int
ethanolh_xcheck(real *x)
{
	real *x1 = ethanolh_old_x, *xe = x + 61;
	errno = 0;
	if (ethanolh_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ethanolh_xkind = 0;
	return 1;
	}
 real
ethanolh_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[3];
	fint wantfg = *needfg;
	if (ethanolh_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 0.05);
	if (errno) in_trouble2("pow",x[0],0.05);
	if (x[0] > 0.) {
	ethanolh_pd[76] = 0.05*(v[0]/x[0]);
	} else if (0.05 > 1.) {
	ethanolh_pd[76] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.05);
	}
	ethanolh_pd[77] = -325.08 * v[0];
	ethanolh_pd[79] = pow(x[1], 0.533);
	if (errno) in_trouble2("pow",x[1],0.533);
	if (x[1] > 0.) {
	ethanolh_pd[78] = 0.533*(ethanolh_pd[79]/x[1]);
	} else if (0.533 > 1.) {
	ethanolh_pd[78] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.533);
	}
	ethanolh_pd[80] = ethanolh_pd[77] * ethanolh_pd[79];
	ethanolh_pd[82] = pow(x[2], -0.0822);
	if (errno) in_trouble2("pow",x[2],-0.0822);
	if (x[2] > 0.) {
	ethanolh_pd[81] = -0.0822*(ethanolh_pd[82]/x[2]);
	} else if (-0.0822 > 1.) {
	ethanolh_pd[81] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.0822);
	}
	ethanolh_pd[83] = ethanolh_pd[80] * ethanolh_pd[82];
	v[2] = ethanolh_pd[83] * x[3];
	;}

	if (wantfg & 2) {
	g[3] = ethanolh_pd[83];
	dv[0] = x[3]*ethanolh_pd[80];
	dv[1] = x[3]*ethanolh_pd[82];
	g[2] = dv[0]*ethanolh_pd[81];
	dv[2] = dv[1]*ethanolh_pd[77];
	dv[1] *= ethanolh_pd[79];
	g[1] = dv[2]*ethanolh_pd[78];
	dv[1] = -dv[1]*325.08;
	g[0] = dv[1]*ethanolh_pd[76];
	}

	return v[2];
}

 void
ethanolh_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[8], dv[10];
	real t1;
	fint wantfg = *needfg;
	if (ethanolh_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[4], 0.7464);
	if (errno) in_trouble2("pow",x[4],0.7464);
	if (x[4] > 0.) {
	ethanolh_pd[0] = 0.7464*(v[0]/x[4]);
	} else if (0.7464 > 1.) {
	ethanolh_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.7464);
	}
	ethanolh_pd[1] = 196.1292 * v[0];
	ethanolh_pd[3] = pow(x[2], 0.0243);
	if (errno) in_trouble2("pow",x[2],0.0243);
	if (x[2] > 0.) {
	ethanolh_pd[2] = 0.0243*(ethanolh_pd[3]/x[2]);
	} else if (0.0243 > 1.) {
	ethanolh_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.0243);
	}
	ethanolh_pd[4] = ethanolh_pd[1] * ethanolh_pd[3];
	v[1] = ethanolh_pd[4] * x[7];
	v[2] = pow(x[5], -0.2344);
	if (errno) in_trouble2("pow",x[5],-0.2344);
	if (x[5] > 0.) {
	ethanolh_pd[5] = -0.2344*(v[2]/x[5]);
	} else if (-0.2344 > 1.) {
	ethanolh_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],-0.2344);
	}
	ethanolh_pd[6] = 16.00034 * v[2];
	v[2] = ethanolh_pd[6] * x[6];
	v[3] = v[1] - v[2];
	c[0] = v[3];

  /***  constraint 2  ***/

	v[0] = pow(x[4], 0.7464);
	if (errno) in_trouble2("pow",x[4],0.7464);
	if (x[4] > 0.) {
	ethanolh_pd[7] = 0.7464*(v[0]/x[4]);
	} else if (0.7464 > 1.) {
	ethanolh_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.7464);
	}
	ethanolh_pd[8] = 196.1292 * v[0];
	ethanolh_pd[10] = pow(x[2], 0.0243);
	if (errno) in_trouble2("pow",x[2],0.0243);
	if (x[2] > 0.) {
	ethanolh_pd[9] = 0.0243*(ethanolh_pd[10]/x[2]);
	} else if (0.0243 > 1.) {
	ethanolh_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.0243);
	}
	ethanolh_pd[11] = ethanolh_pd[8] * ethanolh_pd[10];
	v[1] = ethanolh_pd[11] * x[7];
	v[2] = -v[1];
	v[1] = pow(x[5], 0.7318);
	if (errno) in_trouble2("pow",x[5],0.7318);
	if (x[5] > 0.) {
	ethanolh_pd[12] = 0.7318*(v[1]/x[5]);
	} else if (0.7318 > 1.) {
	ethanolh_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.7318);
	}
	ethanolh_pd[13] = 16.58544 * v[1];
	ethanolh_pd[15] = pow(x[2], -0.3941);
	if (errno) in_trouble2("pow",x[2],-0.3941);
	if (x[2] > 0.) {
	ethanolh_pd[14] = -0.3941*(ethanolh_pd[15]/x[2]);
	} else if (-0.3941 > 1.) {
	ethanolh_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.3941);
	}
	ethanolh_pd[16] = ethanolh_pd[13] * ethanolh_pd[15];
	v[3] = ethanolh_pd[16] * x[8];
	v[2] += v[3];
	v[3] = pow(x[5], 8.6107);
	if (errno) in_trouble2("pow",x[5],8.6107);
	if (x[5] > 0.) {
	ethanolh_pd[17] = 8.6107*(v[3]/x[5]);
	} else if (8.6107 > 1.) {
	ethanolh_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],8.6107);
	}
	ethanolh_pd[18] = 0.012879 * v[3];
	v[3] = ethanolh_pd[18] * x[9];
	v[2] += v[3];
	c[1] = v[2];

  /***  constraint 3  ***/

	v[0] = pow(x[5], 0.7318);
	if (errno) in_trouble2("pow",x[5],0.7318);
	if (x[5] > 0.) {
	ethanolh_pd[19] = 0.7318*(v[0]/x[5]);
	} else if (0.7318 > 1.) {
	ethanolh_pd[19] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.7318);
	}
	ethanolh_pd[20] = 16.58544 * v[0];
	ethanolh_pd[22] = pow(x[2], -0.3941);
	if (errno) in_trouble2("pow",x[2],-0.3941);
	if (x[2] > 0.) {
	ethanolh_pd[21] = -0.3941*(ethanolh_pd[22]/x[2]);
	} else if (-0.3941 > 1.) {
	ethanolh_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.3941);
	}
	ethanolh_pd[23] = ethanolh_pd[20] * ethanolh_pd[22];
	v[1] = ethanolh_pd[23] * x[8];
	v[2] = -v[1];
	v[1] = pow(x[0], 0.6159);
	if (errno) in_trouble2("pow",x[0],0.6159);
	if (x[0] > 0.) {
	ethanolh_pd[24] = 0.6159*(v[1]/x[0]);
	} else if (0.6159 > 1.) {
	ethanolh_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6159);
	}
	ethanolh_pd[25] = 3.78145609890476 * v[1];
	ethanolh_pd[27] = pow(x[2], 0.1308);
	if (errno) in_trouble2("pow",x[2],0.1308);
	if (x[2] > 0.) {
	ethanolh_pd[26] = 0.1308*(ethanolh_pd[27]/x[2]);
	} else if (0.1308 > 1.) {
	ethanolh_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.1308);
	}
	ethanolh_pd[28] = ethanolh_pd[25] * ethanolh_pd[27];
	v[3] = ethanolh_pd[28] * x[10];
	v[2] += v[3];
	v[3] = pow(x[0], 0.05);
	if (errno) in_trouble2("pow",x[0],0.05);
	if (x[0] > 0.) {
	ethanolh_pd[29] = 0.05*(v[3]/x[0]);
	} else if (0.05 > 1.) {
	ethanolh_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.05);
	}
	ethanolh_pd[30] = 9.59175 * v[3];
	ethanolh_pd[32] = pow(x[1], 0.533);
	if (errno) in_trouble2("pow",x[1],0.533);
	if (x[1] > 0.) {
	ethanolh_pd[31] = 0.533*(ethanolh_pd[32]/x[1]);
	} else if (0.533 > 1.) {
	ethanolh_pd[31] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.533);
	}
	ethanolh_pd[33] = ethanolh_pd[30] * ethanolh_pd[32];
	ethanolh_pd[35] = pow(x[2], -0.0822);
	if (errno) in_trouble2("pow",x[2],-0.0822);
	if (x[2] > 0.) {
	ethanolh_pd[34] = -0.0822*(ethanolh_pd[35]/x[2]);
	} else if (-0.0822 > 1.) {
	ethanolh_pd[34] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.0822);
	}
	ethanolh_pd[36] = ethanolh_pd[33] * ethanolh_pd[35];
	v[5] = ethanolh_pd[36] * x[11];
	v[2] += v[5];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = pow(x[0], 0.05);
	if (errno) in_trouble2("pow",x[0],0.05);
	if (x[0] > 0.) {
	ethanolh_pd[37] = 0.05*(v[0]/x[0]);
	} else if (0.05 > 1.) {
	ethanolh_pd[37] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.05);
	}
	ethanolh_pd[38] = 325.08 * v[0];
	ethanolh_pd[40] = pow(x[1], 0.533);
	if (errno) in_trouble2("pow",x[1],0.533);
	if (x[1] > 0.) {
	ethanolh_pd[39] = 0.533*(ethanolh_pd[40]/x[1]);
	} else if (0.533 > 1.) {
	ethanolh_pd[39] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.533);
	}
	ethanolh_pd[41] = ethanolh_pd[38] * ethanolh_pd[40];
	ethanolh_pd[43] = pow(x[2], -0.0822);
	if (errno) in_trouble2("pow",x[2],-0.0822);
	if (x[2] > 0.) {
	ethanolh_pd[42] = -0.0822*(ethanolh_pd[43]/x[2]);
	} else if (-0.0822 > 1.) {
	ethanolh_pd[42] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.0822);
	}
	ethanolh_pd[44] = ethanolh_pd[41] * ethanolh_pd[43];
	v[2] = ethanolh_pd[44] * x[3];
	v[3] = pow(x[0], 0.6159);
	if (errno) in_trouble2("pow",x[0],0.6159);
	if (x[0] > 0.) {
	ethanolh_pd[45] = 0.6159*(v[3]/x[0]);
	} else if (0.6159 > 1.) {
	ethanolh_pd[45] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6159);
	}
	ethanolh_pd[46] = 7.56291219780952 * v[3];
	ethanolh_pd[48] = pow(x[2], 0.1308);
	if (errno) in_trouble2("pow",x[2],0.1308);
	if (x[2] > 0.) {
	ethanolh_pd[47] = 0.1308*(ethanolh_pd[48]/x[2]);
	} else if (0.1308 > 1.) {
	ethanolh_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.1308);
	}
	ethanolh_pd[49] = ethanolh_pd[46] * ethanolh_pd[48];
	v[4] = ethanolh_pd[49] * x[10];
	v[5] = v[2] - v[4];
	c[3] = v[5];

  /***  constraint 5  ***/

	v[0] = pow(x[4], 0.7464);
	if (errno) in_trouble2("pow",x[4],0.7464);
	if (x[4] > 0.) {
	ethanolh_pd[50] = 0.7464*(v[0]/x[4]);
	} else if (0.7464 > 1.) {
	ethanolh_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.7464);
	}
	ethanolh_pd[51] = -196.1292 * v[0];
	ethanolh_pd[53] = pow(x[2], 0.0243);
	if (errno) in_trouble2("pow",x[2],0.0243);
	if (x[2] > 0.) {
	ethanolh_pd[52] = 0.0243*(ethanolh_pd[53]/x[2]);
	} else if (0.0243 > 1.) {
	ethanolh_pd[52] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.0243);
	}
	ethanolh_pd[54] = ethanolh_pd[51] * ethanolh_pd[53];
	v[1] = ethanolh_pd[54] * x[7];
	v[2] = -v[1];
	v[1] = pow(x[5], 0.7318);
	if (errno) in_trouble2("pow",x[5],0.7318);
	if (x[5] > 0.) {
	ethanolh_pd[55] = 0.7318*(v[1]/x[5]);
	} else if (0.7318 > 1.) {
	ethanolh_pd[55] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.7318);
	}
	ethanolh_pd[56] = 16.58544 * v[1];
	ethanolh_pd[58] = pow(x[2], -0.3941);
	if (errno) in_trouble2("pow",x[2],-0.3941);
	if (x[2] > 0.) {
	ethanolh_pd[57] = -0.3941*(ethanolh_pd[58]/x[2]);
	} else if (-0.3941 > 1.) {
	ethanolh_pd[57] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.3941);
	}
	ethanolh_pd[59] = ethanolh_pd[56] * ethanolh_pd[58];
	v[3] = ethanolh_pd[59] * x[8];
	v[2] += v[3];
	v[3] = pow(x[5], 8.6107);
	if (errno) in_trouble2("pow",x[5],8.6107);
	if (x[5] > 0.) {
	ethanolh_pd[60] = 8.6107*(v[3]/x[5]);
	} else if (8.6107 > 1.) {
	ethanolh_pd[60] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],8.6107);
	}
	ethanolh_pd[61] = 0.012879 * v[3];
	v[3] = ethanolh_pd[61] * x[9];
	v[2] += v[3];
	v[3] = pow(x[0], 0.6159);
	if (errno) in_trouble2("pow",x[0],0.6159);
	if (x[0] > 0.) {
	ethanolh_pd[62] = 0.6159*(v[3]/x[0]);
	} else if (0.6159 > 1.) {
	ethanolh_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6159);
	}
	ethanolh_pd[63] = 7.56291219780952 * v[3];
	ethanolh_pd[65] = pow(x[2], 0.1308);
	if (errno) in_trouble2("pow",x[2],0.1308);
	if (x[2] > 0.) {
	ethanolh_pd[64] = 0.1308*(ethanolh_pd[65]/x[2]);
	} else if (0.1308 > 1.) {
	ethanolh_pd[64] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.1308);
	}
	ethanolh_pd[66] = ethanolh_pd[63] * ethanolh_pd[65];
	v[4] = ethanolh_pd[66] * x[10];
	v[5] = -v[4];
	v[2] += v[5];
	v[5] = pow(x[0], 0.05);
	if (errno) in_trouble2("pow",x[0],0.05);
	if (x[0] > 0.) {
	ethanolh_pd[67] = 0.05*(v[5]/x[0]);
	} else if (0.05 > 1.) {
	ethanolh_pd[67] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.05);
	}
	ethanolh_pd[68] = 325.08 * v[5];
	ethanolh_pd[70] = pow(x[1], 0.533);
	if (errno) in_trouble2("pow",x[1],0.533);
	if (x[1] > 0.) {
	ethanolh_pd[69] = 0.533*(ethanolh_pd[70]/x[1]);
	} else if (0.533 > 1.) {
	ethanolh_pd[69] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.533);
	}
	ethanolh_pd[71] = ethanolh_pd[68] * ethanolh_pd[70];
	ethanolh_pd[73] = pow(x[2], -0.0822);
	if (errno) in_trouble2("pow",x[2],-0.0822);
	if (x[2] > 0.) {
	ethanolh_pd[72] = -0.0822*(ethanolh_pd[73]/x[2]);
	} else if (-0.0822 > 1.) {
	ethanolh_pd[72] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.0822);
	}
	ethanolh_pd[74] = ethanolh_pd[71] * ethanolh_pd[73];
	v[6] = ethanolh_pd[74] * x[3];
	v[7] = -v[6];
	v[2] += v[7];
	ethanolh_pd[75] = 25.1 * x[2];
	v[7] = ethanolh_pd[75] * x[12];
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
	t1 += -x[13];
	t1 += -x[21];
	t1 += -x[29];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[7];
	t1 += -x[14];
	t1 += -x[22];
	t1 += -x[30];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[8];
	t1 += -x[15];
	t1 += -x[23];
	t1 += -x[31];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[9];
	t1 += -x[16];
	t1 += -x[24];
	t1 += -x[32];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[10];
	t1 += -x[17];
	t1 += -x[25];
	t1 += -x[33];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[11];
	t1 += -x[18];
	t1 += -x[26];
	t1 += -x[34];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[3];
	t1 += -x[19];
	t1 += -x[27];
	t1 += -x[35];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[12];
	t1 += -x[20];
	t1 += -x[28];
	t1 += -x[36];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[13];
	t1 += -0.2*x[37];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[14];
	t1 += -0.2*x[38];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[15];
	t1 += -0.2*x[39];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[16];
	t1 += -0.2*x[40];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[17];
	t1 += -0.2*x[41];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[18];
	t1 += -0.2*x[42];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[19];
	t1 += -0.2*x[43];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[20];
	t1 += -0.2*x[44];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[13];
	t1 += -0.999999995*x[37];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[14];
	t1 += -0.999999995*x[38];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[15];
	t1 += -0.999999995*x[39];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[16];
	t1 += -0.999999995*x[40];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[17];
	t1 += -0.999999995*x[41];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[18];
	t1 += -0.999999995*x[42];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[19];
	t1 += -0.999999995*x[43];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[20];
	t1 += -0.999999995*x[44];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[21];
	t1 += -0.999999995*x[45];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[22];
	t1 += -0.999999995*x[46];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[23];
	t1 += -0.999999995*x[47];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[24];
	t1 += -0.999999995*x[48];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[25];
	t1 += -0.999999995*x[49];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[26];
	t1 += -0.999999995*x[50];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[27];
	t1 += -0.999999995*x[51];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[28];
	t1 += -0.999999995*x[52];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[21];
	t1 += -1.000000005*x[45];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[22];
	t1 += -1.000000005*x[46];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[23];
	t1 += -1.000000005*x[47];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[24];
	t1 += -1.000000005*x[48];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[25];
	t1 += -1.000000005*x[49];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[26];
	t1 += -1.000000005*x[50];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[27];
	t1 += -1.000000005*x[51];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[28];
	t1 += -1.000000005*x[52];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[29];
	t1 += -1.000000005*x[53];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[30];
	t1 += -1.000000005*x[54];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[31];
	t1 += -1.000000005*x[55];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[32];
	t1 += -1.000000005*x[56];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[33];
	t1 += -1.000000005*x[57];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[34];
	t1 += -1.000000005*x[58];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[35];
	t1 += -1.000000005*x[59];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[36];
	t1 += -1.000000005*x[60];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[29];
	t1 += -5.*x[53];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[30];
	t1 += -5.*x[54];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[31];
	t1 += -5.*x[55];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[32];
	t1 += -5.*x[56];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[33];
	t1 += -5.*x[57];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[34];
	t1 += -5.*x[58];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[35];
	t1 += -5.*x[59];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[36];
	t1 += -5.*x[60];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[37];
	t1 += x[45];
	t1 += x[53];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[38];
	t1 += x[46];
	t1 += x[54];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[39];
	t1 += x[47];
	t1 += x[55];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[40];
	t1 += x[48];
	t1 += x[56];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[41];
	t1 += x[49];
	t1 += x[57];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[42];
	t1 += x[50];
	t1 += x[58];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[43];
	t1 += x[51];
	t1 += x[59];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[44];
	t1 += x[52];
	t1 += x[60];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[60];
	c[79] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[31] = -ethanolh_pd[6];
	dv[0] = -x[6]*16.00034;
	J[25] = dv[0]*ethanolh_pd[5];
	J[33] = ethanolh_pd[4];
	dv[1] = x[7]*ethanolh_pd[1];
	dv[2] = x[7]*ethanolh_pd[3];
	J[10] = dv[1]*ethanolh_pd[2];
	dv[2] *= 196.1292;
	J[20] = dv[2]*ethanolh_pd[0];

   /*** derivatives for constraint 2 ***/

	J[41] = ethanolh_pd[18];
	dv[0] = x[9]*0.012879;
	J[26] = dv[0]*ethanolh_pd[17];
	J[37] = ethanolh_pd[16];
	dv[1] = x[8]*ethanolh_pd[13];
	dv[2] = x[8]*ethanolh_pd[15];
	J[11] = dv[1]*ethanolh_pd[14];
	dv[2] *= 16.58544;
	J[26] += dv[2]*ethanolh_pd[12];
	J[34] = -ethanolh_pd[11];
	dv[3] = -x[7]*ethanolh_pd[8];
	dv[4] = -x[7]*ethanolh_pd[10];
	J[11] += dv[3]*ethanolh_pd[9];
	dv[4] *= 196.1292;
	J[21] = dv[4]*ethanolh_pd[7];

   /*** derivatives for constraint 3 ***/

	J[48] = ethanolh_pd[36];
	dv[0] = x[11]*ethanolh_pd[33];
	dv[1] = x[11]*ethanolh_pd[35];
	J[12] = dv[0]*ethanolh_pd[34];
	dv[2] = dv[1]*ethanolh_pd[30];
	dv[1] *= ethanolh_pd[32];
	J[5] = dv[2]*ethanolh_pd[31];
	dv[1] *= 9.59175;
	J[0] = dv[1]*ethanolh_pd[29];
	J[44] = ethanolh_pd[28];
	dv[3] = x[10]*ethanolh_pd[25];
	dv[4] = x[10]*ethanolh_pd[27];
	J[12] += dv[3]*ethanolh_pd[26];
	dv[4] *= 3.78145609890476;
	J[0] += dv[4]*ethanolh_pd[24];
	J[38] = -ethanolh_pd[23];
	dv[5] = -x[8]*ethanolh_pd[20];
	dv[6] = -x[8]*ethanolh_pd[22];
	J[12] += dv[5]*ethanolh_pd[21];
	dv[6] *= 16.58544;
	J[27] = dv[6]*ethanolh_pd[19];

   /*** derivatives for constraint 4 ***/

	J[45] = -ethanolh_pd[49];
	dv[0] = -x[10]*ethanolh_pd[46];
	dv[1] = -x[10]*ethanolh_pd[48];
	J[13] = dv[0]*ethanolh_pd[47];
	dv[1] *= 7.56291219780952;
	J[1] = dv[1]*ethanolh_pd[45];
	J[17] = ethanolh_pd[44];
	dv[2] = x[3]*ethanolh_pd[41];
	dv[3] = x[3]*ethanolh_pd[43];
	J[13] += dv[2]*ethanolh_pd[42];
	dv[4] = dv[3]*ethanolh_pd[38];
	dv[3] *= ethanolh_pd[40];
	J[6] = dv[4]*ethanolh_pd[39];
	dv[3] *= 325.08;
	J[1] += dv[3]*ethanolh_pd[37];

   /*** derivatives for constraint 5 ***/

	J[50] = ethanolh_pd[75];
	J[14] = x[12]*25.1;
	J[18] = -ethanolh_pd[74];
	dv[0] = -x[3]*ethanolh_pd[71];
	dv[1] = -x[3]*ethanolh_pd[73];
	J[14] += dv[0]*ethanolh_pd[72];
	dv[2] = dv[1]*ethanolh_pd[68];
	dv[1] *= ethanolh_pd[70];
	J[7] = dv[2]*ethanolh_pd[69];
	dv[1] *= 325.08;
	J[2] = dv[1]*ethanolh_pd[67];
	J[46] = -ethanolh_pd[66];
	dv[3] = -x[10]*ethanolh_pd[63];
	dv[4] = -x[10]*ethanolh_pd[65];
	J[14] += dv[3]*ethanolh_pd[64];
	dv[4] *= 7.56291219780952;
	J[2] += dv[4]*ethanolh_pd[62];
	J[42] = ethanolh_pd[61];
	dv[5] = x[9]*0.012879;
	J[28] = dv[5]*ethanolh_pd[60];
	J[39] = ethanolh_pd[59];
	dv[6] = x[8]*ethanolh_pd[56];
	dv[7] = x[8]*ethanolh_pd[58];
	J[14] += dv[6]*ethanolh_pd[57];
	dv[7] *= 16.58544;
	J[28] += dv[7]*ethanolh_pd[55];
	J[35] = -ethanolh_pd[54];
	dv[8] = -x[7]*ethanolh_pd[51];
	dv[9] = -x[7]*ethanolh_pd[53];
	J[14] += dv[8]*ethanolh_pd[52];
	dv[9] = -dv[9]*196.1292;
	J[22] = dv[9]*ethanolh_pd[50];

   /*** derivatives for constraint 6 ***/

	J[23] = 1.;

   /*** derivatives for constraint 7 ***/

	J[29] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = 1.;

   /*** derivatives for constraint 10 ***/

	J[15] = 1.;

   /*** derivatives for constraint 11 ***/

	J[24] = 1.;

   /*** derivatives for constraint 12 ***/

	J[30] = 1.;

   /*** derivatives for constraint 13 ***/

	J[4] = 1.;

   /*** derivatives for constraint 14 ***/

	J[9] = 1.;

   /*** derivatives for constraint 15 ***/

	J[16] = 1.;

   /*** derivatives for constraint 16 ***/

	J[32] = 1.;
	J[52] = -1.;
	J[76] = -1.;
	J[100] = -1.;

   /*** derivatives for constraint 17 ***/

	J[36] = 1.;
	J[55] = -1.;
	J[79] = -1.;
	J[103] = -1.;

   /*** derivatives for constraint 18 ***/

	J[40] = 1.;
	J[58] = -1.;
	J[82] = -1.;
	J[106] = -1.;

   /*** derivatives for constraint 19 ***/

	J[43] = 1.;
	J[61] = -1.;
	J[85] = -1.;
	J[109] = -1.;

   /*** derivatives for constraint 20 ***/

	J[47] = 1.;
	J[64] = -1.;
	J[88] = -1.;
	J[112] = -1.;

   /*** derivatives for constraint 21 ***/

	J[49] = 1.;
	J[67] = -1.;
	J[91] = -1.;
	J[115] = -1.;

   /*** derivatives for constraint 22 ***/

	J[19] = 1.;
	J[70] = -1.;
	J[94] = -1.;
	J[118] = -1.;

   /*** derivatives for constraint 23 ***/

	J[51] = 1.;
	J[73] = -1.;
	J[97] = -1.;
	J[121] = -1.;

   /*** derivatives for constraint 24 ***/

	J[53] = 1.;
	J[124] = -0.2;

   /*** derivatives for constraint 25 ***/

	J[56] = 1.;
	J[128] = -0.2;

   /*** derivatives for constraint 26 ***/

	J[59] = 1.;
	J[132] = -0.2;

   /*** derivatives for constraint 27 ***/

	J[62] = 1.;
	J[136] = -0.2;

   /*** derivatives for constraint 28 ***/

	J[65] = 1.;
	J[140] = -0.2;

   /*** derivatives for constraint 29 ***/

	J[68] = 1.;
	J[144] = -0.2;

   /*** derivatives for constraint 30 ***/

	J[71] = 1.;
	J[148] = -0.2;

   /*** derivatives for constraint 31 ***/

	J[74] = 1.;
	J[152] = -0.2;

   /*** derivatives for constraint 32 ***/

	J[54] = 1.;
	J[125] = -0.999999995;

   /*** derivatives for constraint 33 ***/

	J[57] = 1.;
	J[129] = -0.999999995;

   /*** derivatives for constraint 34 ***/

	J[60] = 1.;
	J[133] = -0.999999995;

   /*** derivatives for constraint 35 ***/

	J[63] = 1.;
	J[137] = -0.999999995;

   /*** derivatives for constraint 36 ***/

	J[66] = 1.;
	J[141] = -0.999999995;

   /*** derivatives for constraint 37 ***/

	J[69] = 1.;
	J[145] = -0.999999995;

   /*** derivatives for constraint 38 ***/

	J[72] = 1.;
	J[149] = -0.999999995;

   /*** derivatives for constraint 39 ***/

	J[75] = 1.;
	J[153] = -0.999999995;

   /*** derivatives for constraint 40 ***/

	J[77] = 1.;
	J[156] = -0.999999995;

   /*** derivatives for constraint 41 ***/

	J[80] = 1.;
	J[159] = -0.999999995;

   /*** derivatives for constraint 42 ***/

	J[83] = 1.;
	J[162] = -0.999999995;

   /*** derivatives for constraint 43 ***/

	J[86] = 1.;
	J[165] = -0.999999995;

   /*** derivatives for constraint 44 ***/

	J[89] = 1.;
	J[168] = -0.999999995;

   /*** derivatives for constraint 45 ***/

	J[92] = 1.;
	J[171] = -0.999999995;

   /*** derivatives for constraint 46 ***/

	J[95] = 1.;
	J[174] = -0.999999995;

   /*** derivatives for constraint 47 ***/

	J[98] = 1.;
	J[177] = -0.999999995;

   /*** derivatives for constraint 48 ***/

	J[78] = 1.;
	J[157] = -1.000000005;

   /*** derivatives for constraint 49 ***/

	J[81] = 1.;
	J[160] = -1.000000005;

   /*** derivatives for constraint 50 ***/

	J[84] = 1.;
	J[163] = -1.000000005;

   /*** derivatives for constraint 51 ***/

	J[87] = 1.;
	J[166] = -1.000000005;

   /*** derivatives for constraint 52 ***/

	J[90] = 1.;
	J[169] = -1.000000005;

   /*** derivatives for constraint 53 ***/

	J[93] = 1.;
	J[172] = -1.000000005;

   /*** derivatives for constraint 54 ***/

	J[96] = 1.;
	J[175] = -1.000000005;

   /*** derivatives for constraint 55 ***/

	J[99] = 1.;
	J[178] = -1.000000005;

   /*** derivatives for constraint 56 ***/

	J[101] = 1.;
	J[180] = -1.000000005;

   /*** derivatives for constraint 57 ***/

	J[104] = 1.;
	J[184] = -1.000000005;

   /*** derivatives for constraint 58 ***/

	J[107] = 1.;
	J[188] = -1.000000005;

   /*** derivatives for constraint 59 ***/

	J[110] = 1.;
	J[192] = -1.000000005;

   /*** derivatives for constraint 60 ***/

	J[113] = 1.;
	J[196] = -1.000000005;

   /*** derivatives for constraint 61 ***/

	J[116] = 1.;
	J[200] = -1.000000005;

   /*** derivatives for constraint 62 ***/

	J[119] = 1.;
	J[204] = -1.000000005;

   /*** derivatives for constraint 63 ***/

	J[122] = 1.;
	J[208] = -1.000000005;

   /*** derivatives for constraint 64 ***/

	J[102] = 1.;
	J[181] = -5.;

   /*** derivatives for constraint 65 ***/

	J[105] = 1.;
	J[185] = -5.;

   /*** derivatives for constraint 66 ***/

	J[108] = 1.;
	J[189] = -5.;

   /*** derivatives for constraint 67 ***/

	J[111] = 1.;
	J[193] = -5.;

   /*** derivatives for constraint 68 ***/

	J[114] = 1.;
	J[197] = -5.;

   /*** derivatives for constraint 69 ***/

	J[117] = 1.;
	J[201] = -5.;

   /*** derivatives for constraint 70 ***/

	J[120] = 1.;
	J[205] = -5.;

   /*** derivatives for constraint 71 ***/

	J[123] = 1.;
	J[209] = -5.;

   /*** derivatives for constraint 72 ***/

	J[126] = 1.;
	J[158] = 1.;
	J[182] = 1.;

   /*** derivatives for constraint 73 ***/

	J[130] = 1.;
	J[161] = 1.;
	J[186] = 1.;

   /*** derivatives for constraint 74 ***/

	J[134] = 1.;
	J[164] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 75 ***/

	J[138] = 1.;
	J[167] = 1.;
	J[194] = 1.;

   /*** derivatives for constraint 76 ***/

	J[142] = 1.;
	J[170] = 1.;
	J[198] = 1.;

   /*** derivatives for constraint 77 ***/

	J[146] = 1.;
	J[173] = 1.;
	J[202] = 1.;

   /*** derivatives for constraint 78 ***/

	J[150] = 1.;
	J[176] = 1.;
	J[206] = 1.;

   /*** derivatives for constraint 79 ***/

	J[154] = 1.;
	J[179] = 1.;
	J[210] = 1.;

   /*** derivatives for constraint 80 ***/

	J[127] = 1.;
	J[131] = 1.;
	J[135] = 1.;
	J[139] = 1.;
	J[143] = 1.;
	J[147] = 1.;
	J[151] = 1.;
	J[155] = 1.;
	J[183] = 1.;
	J[187] = 1.;
	J[191] = 1.;
	J[195] = 1.;
	J[199] = 1.;
	J[203] = 1.;
	J[207] = 1.;
	J[211] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
