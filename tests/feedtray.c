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
 fint feedtray_auxcom_[1] = { 62 /* nlc */ };
 fint feedtray_funcom_[552] = {
	97 /* nvar */,
	1 /* nobj */,
	91 /* ncon */,
	448 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	14,
	19,
	24,
	29,
	34,
	39,
	44,
	49,
	54,
	59,
	64,
	69,
	74,
	79,
	85,
	90,
	95,
	100,
	105,
	110,
	115,
	120,
	125,
	130,
	135,
	140,
	145,
	150,
	155,
	160,
	165,
	170,
	173,
	176,
	180,
	187,
	195,
	203,
	211,
	219,
	227,
	235,
	243,
	250,
	258,
	266,
	274,
	282,
	290,
	298,
	305,
	309,
	313,
	317,
	321,
	325,
	329,
	333,
	337,
	341,
	342,
	346,
	348,
	351,
	354,
	357,
	360,
	363,
	366,
	368,
	370,
	373,
	376,
	379,
	382,
	385,
	388,
	390,
	396,
	402,
	408,
	414,
	420,
	426,
	432,
	433,
	434,
	435,
	437,
	439,
	441,
	443,
	445,
	447,
	449,

	/* rownos */
	1,
	33,
	38,
	63,
	2,
	34,
	38,
	63,
	3,
	19,
	33,
	39,
	64,
	4,
	20,
	34,
	39,
	64,
	5,
	19,
	21,
	40,
	65,
	6,
	20,
	22,
	40,
	65,
	7,
	21,
	23,
	41,
	66,
	8,
	22,
	24,
	41,
	66,
	9,
	23,
	25,
	42,
	67,
	10,
	24,
	26,
	42,
	67,
	11,
	25,
	27,
	43,
	68,
	12,
	26,
	28,
	43,
	68,
	13,
	27,
	29,
	44,
	69,
	14,
	28,
	30,
	44,
	69,
	15,
	29,
	31,
	45,
	70,
	16,
	30,
	32,
	45,
	70,
	17,
	31,
	35,
	46,
	71,
	82,
	18,
	32,
	36,
	46,
	71,
	1,
	19,
	33,
	47,
	63,
	2,
	20,
	34,
	47,
	63,
	3,
	19,
	21,
	48,
	64,
	4,
	20,
	22,
	48,
	64,
	5,
	21,
	23,
	49,
	65,
	6,
	22,
	24,
	49,
	65,
	7,
	23,
	25,
	50,
	66,
	8,
	24,
	26,
	50,
	66,
	9,
	25,
	27,
	51,
	67,
	10,
	26,
	28,
	51,
	67,
	11,
	27,
	29,
	52,
	68,
	12,
	28,
	30,
	52,
	68,
	13,
	29,
	31,
	53,
	69,
	14,
	30,
	32,
	53,
	69,
	15,
	31,
	35,
	54,
	70,
	16,
	32,
	36,
	54,
	70,
	17,
	55,
	71,
	18,
	55,
	71,
	33,
	34,
	79,
	81,
	19,
	20,
	33,
	34,
	56,
	72,
	79,
	19,
	20,
	21,
	22,
	56,
	57,
	72,
	73,
	21,
	22,
	23,
	24,
	57,
	58,
	73,
	74,
	23,
	24,
	25,
	26,
	58,
	59,
	74,
	75,
	25,
	26,
	27,
	28,
	59,
	60,
	75,
	76,
	27,
	28,
	29,
	30,
	60,
	61,
	76,
	77,
	29,
	30,
	31,
	32,
	61,
	62,
	77,
	78,
	31,
	32,
	35,
	36,
	37,
	62,
	78,
	80,
	19,
	20,
	33,
	34,
	56,
	72,
	79,
	19,
	20,
	21,
	22,
	56,
	57,
	72,
	73,
	21,
	22,
	23,
	24,
	57,
	58,
	73,
	74,
	23,
	24,
	25,
	26,
	58,
	59,
	74,
	75,
	25,
	26,
	27,
	28,
	59,
	60,
	75,
	76,
	27,
	28,
	29,
	30,
	60,
	61,
	76,
	77,
	29,
	30,
	31,
	32,
	61,
	62,
	77,
	78,
	31,
	32,
	35,
	36,
	62,
	78,
	80,
	1,
	2,
	38,
	47,
	3,
	4,
	39,
	48,
	5,
	6,
	40,
	49,
	7,
	8,
	41,
	50,
	9,
	10,
	42,
	51,
	11,
	12,
	43,
	52,
	13,
	14,
	44,
	53,
	15,
	16,
	45,
	54,
	17,
	18,
	46,
	55,
	37,
	35,
	36,
	37,
	80,
	39,
	56,
	40,
	56,
	57,
	41,
	57,
	58,
	42,
	58,
	59,
	43,
	59,
	60,
	44,
	60,
	61,
	45,
	61,
	62,
	46,
	62,
	47,
	56,
	48,
	56,
	57,
	49,
	57,
	58,
	50,
	58,
	59,
	51,
	59,
	60,
	52,
	60,
	61,
	53,
	61,
	62,
	54,
	62,
	19,
	20,
	56,
	72,
	83,
	85,
	21,
	22,
	57,
	73,
	83,
	86,
	23,
	24,
	58,
	74,
	83,
	87,
	25,
	26,
	59,
	75,
	83,
	88,
	27,
	28,
	60,
	76,
	83,
	89,
	29,
	30,
	61,
	77,
	83,
	90,
	31,
	32,
	62,
	78,
	83,
	91,
	81,
	38,
	55,
	84,
	85,
	84,
	86,
	84,
	87,
	84,
	88,
	84,
	89,
	84,
	90,
	84,
	91 };

 real feedtray_boundc_[1+194+182] /* Infinity, variable bounds, constraint bounds */ = {
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
		345.,
		390.,
		345.,
		390.,
		345.,
		390.,
		345.,
		390.,
		345.,
		390.,
		345.,
		390.,
		345.,
		390.,
		345.,
		390.,
		345.,
		390.,
		0.1,
		0.95,
		50.,
		80.,
		-1.5,
		-0.496714536653818,
		-1.5,
		-0.496714536653818,
		-1.5,
		-0.496714536653818,
		-1.5,
		-0.496714536653818,
		-1.5,
		-0.496714536653818,
		-1.5,
		-0.496714536653818,
		-1.5,
		-0.496714536653818,
		-1.5,
		-0.496714536653818,
		0.,
		0.151822697193183,
		0.,
		0.151822697193183,
		0.,
		0.151822697193183,
		0.,
		0.151822697193183,
		0.,
		0.151822697193183,
		0.,
		0.151822697193183,
		0.,
		0.151822697193183,
		0.,
		0.151822697193183,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		20.,
		50.,
		-1.5,
		-0.496714536653818,
		0.,
		0.151822697193183,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.95,
		1.7e308,
		100.,
		100.,
		1.,
		1.,
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
		0.};

 real feedtray_x0comn_[97] = {
		0.4,
		0.6,
		0.4625,
		0.5375,
		0.525,
		0.475,
		0.5875,
		0.4125,
		0.65,
		0.35,
		0.7125,
		0.2875,
		0.775,
		0.225,
		0.8375,
		0.1625,
		0.9,
		0.1,
		0.2,
		0.8,
		0.3,
		0.7,
		0.4,
		0.6,
		0.5,
		0.5,
		0.6,
		0.4,
		0.7,
		0.3,
		0.8,
		0.2,
		0.9,
		0.1,
		1.,
		0.,
		40.,
		127.,
		127.,
		127.,
		127.,
		127.,
		27.,
		27.,
		27.,
		87.,
		87.,
		87.,
		87.,
		87.,
		87.,
		87.,
		87.,
		380.,
		375.,
		372.5,
		370.,
		367.5,
		365.,
		362.5,
		360.,
		355.,
		0.45,
		60.,
		-0.972170917937763,
		-0.977321724319633,
		-0.982151492959225,
		-0.986662793667597,
		-0.990858232660528,
		-0.994740453837617,
		-0.998312139997537,
		-1.01209290612999,
		0.0971285302367615,
		0.0755763285867959,
		0.0644929360644884,
		0.0538822972811403,
		0.0437417989462674,
		0.0340688284351046,
		0.0248607738701702,
		0.0161150242028288,
		14.2857142857143,
		14.2857142857143,
		14.2857142857143,
		14.2857142857143,
		14.2857142857143,
		14.2857142857143,
		14.2857142857143,
		40.,
		-0.954871459437791,
		0.,
		0.142857142857143,
		0.142857142857143,
		0.142857142857143,
		0.142857142857143,
		0.142857142857143,
		0.142857142857143,
		0.142857142857143 };

 static real feedtray_pd[560];
static real feedtray_old_x[97];
static int feedtray_xkind = -1;

 static int
feedtray_xcheck(real *x)
{
	real *x1 = feedtray_old_x, *xe = x + 97;
	errno = 0;
	if (feedtray_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	feedtray_xkind = 0;
	return 1;
	}
 real
feedtray_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (feedtray_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 50.*x[62];
	rv += -x[63];
	;}

	if (wantfg & 2) {
	g[62] = 50.;
	g[63] = -1.;
	}

	return rv;
}

 void
feedtray_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[12], dv[18];
	real t1;
	fint wantfg = *needfg;
	if (feedtray_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = -0.00177872643187478 * x[53];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[0] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[1] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[53];
	v[0] += feedtray_pd[1];
	v[1] = -0.00177872643187478 * x[53];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[2] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[2] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[53];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[3] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[3] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[53] == 0.) {
	zerdiv_(&x[53]);	}
	v[0] = v[1] / x[53];
	feedtray_pd[4] = 1. / x[53];
	feedtray_pd[5] = -v[0] * feedtray_pd[4];
	feedtray_pd[6] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[7] = feedtray_pd[6];
	feedtray_pd[8] = -48.9 * feedtray_pd[6];
	v[0] = feedtray_pd[8] * x[0];
	t1 = v[0] + 1.2*x[18];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = -0.00168976005407232 * x[53];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[9] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[10] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[53];
	v[0] += feedtray_pd[10];
	v[1] = -0.00168976005407232 * x[53];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[11] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[11] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[53];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[12] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[12] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[53] == 0.) {
	zerdiv_(&x[53]);	}
	v[0] = v[1] / x[53];
	feedtray_pd[13] = 1. / x[53];
	feedtray_pd[14] = -v[0] * feedtray_pd[13];
	feedtray_pd[15] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[16] = feedtray_pd[15];
	feedtray_pd[17] = -41. * feedtray_pd[15];
	v[0] = feedtray_pd[17] * x[1];
	t1 = v[0] + 1.2*x[19];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = -0.00177872643187478 * x[54];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[18] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[19] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[54];
	v[0] += feedtray_pd[19];
	v[1] = -0.00177872643187478 * x[54];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[20] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[20] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[54];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[21] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[21] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[54] == 0.) {
	zerdiv_(&x[54]);	}
	v[0] = v[1] / x[54];
	feedtray_pd[22] = 1. / x[54];
	feedtray_pd[23] = -v[0] * feedtray_pd[22];
	feedtray_pd[24] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[25] = feedtray_pd[24];
	feedtray_pd[26] = -48.9 * feedtray_pd[24];
	v[0] = feedtray_pd[26] * x[2];
	t1 = v[0] + 1.12*x[20];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = -0.00168976005407232 * x[54];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[27] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[27] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[28] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[54];
	v[0] += feedtray_pd[28];
	v[1] = -0.00168976005407232 * x[54];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[29] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[29] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[54];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[30] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[30] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[54] == 0.) {
	zerdiv_(&x[54]);	}
	v[0] = v[1] / x[54];
	feedtray_pd[31] = 1. / x[54];
	feedtray_pd[32] = -v[0] * feedtray_pd[31];
	feedtray_pd[33] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[34] = feedtray_pd[33];
	feedtray_pd[35] = -41. * feedtray_pd[33];
	v[0] = feedtray_pd[35] * x[3];
	t1 = v[0] + 1.12*x[21];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = -0.00177872643187478 * x[55];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[36] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[36] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[37] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[55];
	v[0] += feedtray_pd[37];
	v[1] = -0.00177872643187478 * x[55];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[38] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[38] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[55];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[39] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[39] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[55] == 0.) {
	zerdiv_(&x[55]);	}
	v[0] = v[1] / x[55];
	feedtray_pd[40] = 1. / x[55];
	feedtray_pd[41] = -v[0] * feedtray_pd[40];
	feedtray_pd[42] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[43] = feedtray_pd[42];
	feedtray_pd[44] = -48.9 * feedtray_pd[42];
	v[0] = feedtray_pd[44] * x[4];
	t1 = v[0] + 1.11333333333333*x[22];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = -0.00168976005407232 * x[55];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[45] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[45] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[46] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[55];
	v[0] += feedtray_pd[46];
	v[1] = -0.00168976005407232 * x[55];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[47] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[47] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[55];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[48] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[48] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[55] == 0.) {
	zerdiv_(&x[55]);	}
	v[0] = v[1] / x[55];
	feedtray_pd[49] = 1. / x[55];
	feedtray_pd[50] = -v[0] * feedtray_pd[49];
	feedtray_pd[51] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[52] = feedtray_pd[51];
	feedtray_pd[53] = -41. * feedtray_pd[51];
	v[0] = feedtray_pd[53] * x[5];
	t1 = v[0] + 1.11333333333333*x[23];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = -0.00177872643187478 * x[56];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[54] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[54] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[55] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[56];
	v[0] += feedtray_pd[55];
	v[1] = -0.00177872643187478 * x[56];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[56] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[56] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[56];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[57] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[57] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[56] == 0.) {
	zerdiv_(&x[56]);	}
	v[0] = v[1] / x[56];
	feedtray_pd[58] = 1. / x[56];
	feedtray_pd[59] = -v[0] * feedtray_pd[58];
	feedtray_pd[60] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[61] = feedtray_pd[60];
	feedtray_pd[62] = -48.9 * feedtray_pd[60];
	v[0] = feedtray_pd[62] * x[6];
	t1 = v[0] + 1.10666666666667*x[24];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = -0.00168976005407232 * x[56];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[63] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[63] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[64] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[56];
	v[0] += feedtray_pd[64];
	v[1] = -0.00168976005407232 * x[56];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[65] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[65] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[56];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[66] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[66] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[56] == 0.) {
	zerdiv_(&x[56]);	}
	v[0] = v[1] / x[56];
	feedtray_pd[67] = 1. / x[56];
	feedtray_pd[68] = -v[0] * feedtray_pd[67];
	feedtray_pd[69] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[70] = feedtray_pd[69];
	feedtray_pd[71] = -41. * feedtray_pd[69];
	v[0] = feedtray_pd[71] * x[7];
	t1 = v[0] + 1.10666666666667*x[25];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = -0.00177872643187478 * x[57];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[72] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[72] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[73] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[57];
	v[0] += feedtray_pd[73];
	v[1] = -0.00177872643187478 * x[57];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[74] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[74] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[57];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[75] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[75] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[57] == 0.) {
	zerdiv_(&x[57]);	}
	v[0] = v[1] / x[57];
	feedtray_pd[76] = 1. / x[57];
	feedtray_pd[77] = -v[0] * feedtray_pd[76];
	feedtray_pd[78] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[79] = feedtray_pd[78];
	feedtray_pd[80] = -48.9 * feedtray_pd[78];
	v[0] = feedtray_pd[80] * x[8];
	t1 = v[0] + 1.1*x[26];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = -0.00168976005407232 * x[57];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[81] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[81] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[82] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[57];
	v[0] += feedtray_pd[82];
	v[1] = -0.00168976005407232 * x[57];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[83] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[83] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[57];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[84] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[84] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[57] == 0.) {
	zerdiv_(&x[57]);	}
	v[0] = v[1] / x[57];
	feedtray_pd[85] = 1. / x[57];
	feedtray_pd[86] = -v[0] * feedtray_pd[85];
	feedtray_pd[87] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[88] = feedtray_pd[87];
	feedtray_pd[89] = -41. * feedtray_pd[87];
	v[0] = feedtray_pd[89] * x[9];
	t1 = v[0] + 1.1*x[27];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = -0.00177872643187478 * x[58];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[90] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[90] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[91] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[58];
	v[0] += feedtray_pd[91];
	v[1] = -0.00177872643187478 * x[58];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[92] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[92] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[58];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[93] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[93] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[58] == 0.) {
	zerdiv_(&x[58]);	}
	v[0] = v[1] / x[58];
	feedtray_pd[94] = 1. / x[58];
	feedtray_pd[95] = -v[0] * feedtray_pd[94];
	feedtray_pd[96] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[97] = feedtray_pd[96];
	feedtray_pd[98] = -48.9 * feedtray_pd[96];
	v[0] = feedtray_pd[98] * x[10];
	t1 = v[0] + 1.09333333333333*x[28];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = -0.00168976005407232 * x[58];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[99] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[99] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[100] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[58];
	v[0] += feedtray_pd[100];
	v[1] = -0.00168976005407232 * x[58];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[101] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[101] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[58];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[102] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[102] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[58] == 0.) {
	zerdiv_(&x[58]);	}
	v[0] = v[1] / x[58];
	feedtray_pd[103] = 1. / x[58];
	feedtray_pd[104] = -v[0] * feedtray_pd[103];
	feedtray_pd[105] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[106] = feedtray_pd[105];
	feedtray_pd[107] = -41. * feedtray_pd[105];
	v[0] = feedtray_pd[107] * x[11];
	t1 = v[0] + 1.09333333333333*x[29];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = -0.00177872643187478 * x[59];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[108] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[108] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[109] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[59];
	v[0] += feedtray_pd[109];
	v[1] = -0.00177872643187478 * x[59];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[110] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[110] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[59];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[111] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[111] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[59] == 0.) {
	zerdiv_(&x[59]);	}
	v[0] = v[1] / x[59];
	feedtray_pd[112] = 1. / x[59];
	feedtray_pd[113] = -v[0] * feedtray_pd[112];
	feedtray_pd[114] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[115] = feedtray_pd[114];
	feedtray_pd[116] = -48.9 * feedtray_pd[114];
	v[0] = feedtray_pd[116] * x[12];
	t1 = v[0] + 1.08666666666667*x[30];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = -0.00168976005407232 * x[59];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[117] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[117] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[118] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[59];
	v[0] += feedtray_pd[118];
	v[1] = -0.00168976005407232 * x[59];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[119] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[119] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[59];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[120] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[120] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[59] == 0.) {
	zerdiv_(&x[59]);	}
	v[0] = v[1] / x[59];
	feedtray_pd[121] = 1. / x[59];
	feedtray_pd[122] = -v[0] * feedtray_pd[121];
	feedtray_pd[123] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[124] = feedtray_pd[123];
	feedtray_pd[125] = -41. * feedtray_pd[123];
	v[0] = feedtray_pd[125] * x[13];
	t1 = v[0] + 1.08666666666667*x[31];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = -0.00177872643187478 * x[60];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[126] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[126] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[127] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[60];
	v[0] += feedtray_pd[127];
	v[1] = -0.00177872643187478 * x[60];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[128] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[128] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[60];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[129] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[129] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[60] == 0.) {
	zerdiv_(&x[60]);	}
	v[0] = v[1] / x[60];
	feedtray_pd[130] = 1. / x[60];
	feedtray_pd[131] = -v[0] * feedtray_pd[130];
	feedtray_pd[132] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[133] = feedtray_pd[132];
	feedtray_pd[134] = -48.9 * feedtray_pd[132];
	v[0] = feedtray_pd[134] * x[14];
	t1 = v[0] + 1.08*x[32];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = -0.00168976005407232 * x[60];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[135] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[135] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[136] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[60];
	v[0] += feedtray_pd[136];
	v[1] = -0.00168976005407232 * x[60];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[137] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[137] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[60];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[138] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[138] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[60] == 0.) {
	zerdiv_(&x[60]);	}
	v[0] = v[1] / x[60];
	feedtray_pd[139] = 1. / x[60];
	feedtray_pd[140] = -v[0] * feedtray_pd[139];
	feedtray_pd[141] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[142] = feedtray_pd[141];
	feedtray_pd[143] = -41. * feedtray_pd[141];
	v[0] = feedtray_pd[143] * x[15];
	t1 = v[0] + 1.08*x[33];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = -0.00177872643187478 * x[61];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[144] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[144] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[145] = 1.33213 * v[0];
	v[0] = 0.012420366417645 * x[61];
	v[0] += feedtray_pd[145];
	v[1] = -0.00177872643187478 * x[61];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[146] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[146] = 0.;
	}
	v[1] *= -2.62863;
	v[0] += v[1];
	v[1] = -0.00177872643187478 * x[61];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[147] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[147] = 0.;
	}
	v[1] *= -3.33399;
	v[0] += v[1];
	v[0] *= 562.2;
	v[1] = v[0] + -3925.690806;
	if (x[61] == 0.) {
	zerdiv_(&x[61]);	}
	v[0] = v[1] / x[61];
	feedtray_pd[148] = 1. / x[61];
	feedtray_pd[149] = -v[0] * feedtray_pd[148];
	feedtray_pd[150] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[151] = feedtray_pd[150];
	feedtray_pd[152] = -48.9 * feedtray_pd[150];
	v[0] = feedtray_pd[152] * x[16];
	t1 = v[0] + 1.05*x[34];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = -0.00168976005407232 * x[61];
	v[1] = 1. + v[0];
	v[0] = pow(v[1], 1.5);
	if (errno) in_trouble2("pow",v[1],1.5);
	if (v[1] > 0.) {
	feedtray_pd[153] = 1.5*(v[0]/v[1]);
	} else if (1.5 > 1.) {
	feedtray_pd[153] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.5);
	}
	feedtray_pd[154] = 1.38091 * v[0];
	v[0] = 0.0123117100371747 * x[61];
	v[0] += feedtray_pd[154];
	v[1] = -0.00168976005407232 * x[61];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	feedtray_pd[155] = 3.*(v[2]*v[2]);
	} else {
	feedtray_pd[155] = 0.;
	}
	v[1] *= -2.83433;
	v[0] += v[1];
	v[1] = -0.00168976005407232 * x[61];
	v[2] = 1. + v[1];
	v[1] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	feedtray_pd[156] = 6.*(v[1]/v[2]);
	} else {
	feedtray_pd[156] = 0.;
	}
	v[1] *= -2.79168;
	v[0] += v[1];
	v[0] *= 591.8;
	v[1] = v[0] + -4311.896226;
	if (x[61] == 0.) {
	zerdiv_(&x[61]);	}
	v[0] = v[1] / x[61];
	feedtray_pd[157] = 1. / x[61];
	feedtray_pd[158] = -v[0] * feedtray_pd[157];
	feedtray_pd[159] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	feedtray_pd[160] = feedtray_pd[159];
	feedtray_pd[161] = -41. * feedtray_pd[159];
	v[0] = feedtray_pd[161] * x[17];
	t1 = v[0] + 1.05*x[35];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[37] * x[2];
	v[1] = x[46] * x[20];
	v[0] += v[1];
	v[1] = x[38] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[45] * x[18];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.7*x[80];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[37] * x[3];
	v[1] = x[46] * x[21];
	v[0] += v[1];
	v[1] = x[38] * x[5];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[45] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.3*x[80];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[38] * x[4];
	v[1] = x[47] * x[22];
	v[0] += v[1];
	v[1] = x[39] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[46] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.7*x[81];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[38] * x[5];
	v[1] = x[47] * x[23];
	v[0] += v[1];
	v[1] = x[39] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[46] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.3*x[81];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[39] * x[6];
	v[1] = x[48] * x[24];
	v[0] += v[1];
	v[1] = x[40] * x[8];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[47] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.7*x[82];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[39] * x[7];
	v[1] = x[48] * x[25];
	v[0] += v[1];
	v[1] = x[40] * x[9];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[47] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.3*x[82];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[40] * x[8];
	v[1] = x[49] * x[26];
	v[0] += v[1];
	v[1] = x[41] * x[10];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[48] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.7*x[83];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[40] * x[9];
	v[1] = x[49] * x[27];
	v[0] += v[1];
	v[1] = x[41] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[48] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.3*x[83];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[41] * x[10];
	v[1] = x[50] * x[28];
	v[0] += v[1];
	v[1] = x[42] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[49] * x[26];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.7*x[84];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[41] * x[11];
	v[1] = x[50] * x[29];
	v[0] += v[1];
	v[1] = x[42] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[49] * x[27];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.3*x[84];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[42] * x[12];
	v[1] = x[51] * x[30];
	v[0] += v[1];
	v[1] = x[43] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[50] * x[28];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.7*x[85];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[42] * x[13];
	v[1] = x[51] * x[31];
	v[0] += v[1];
	v[1] = x[43] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[50] * x[29];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.3*x[85];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[43] * x[14];
	v[1] = x[52] * x[32];
	v[0] += v[1];
	v[1] = x[44] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[51] * x[30];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.7*x[86];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[43] * x[15];
	v[1] = x[52] * x[33];
	v[0] += v[1];
	v[1] = x[44] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[51] * x[31];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -0.3*x[86];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[36] * x[0];
	v[1] = x[45] * x[18];
	v[0] += v[1];
	v[1] = x[37] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	c[32] = v[0];

  /***  constraint 34  ***/

	v[0] = x[36] * x[1];
	v[1] = x[45] * x[19];
	v[0] += v[1];
	v[1] = x[37] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	c[33] = v[0];

  /***  constraint 35  ***/

	feedtray_pd[162] = x[44] + x[63];
	v[1] = feedtray_pd[162] * x[16];
	v[2] = x[52] * x[32];
	v[3] = v[1] - v[2];
	c[34] = v[3];

  /***  constraint 36  ***/

	feedtray_pd[163] = x[44] + x[63];
	v[1] = feedtray_pd[163] * x[17];
	v[2] = x[52] * x[33];
	v[3] = v[1] - v[2];
	c[35] = v[3];

  /***  constraint 37  ***/

	v[0] = x[62] * x[63];
	v[1] = -v[0];
	t1 = v[1] + x[44];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = 1.7825e-08 * x[53];
	feedtray_pd[164] = v[0] + -0.000100566666666667;
	v[0] = x[53] * feedtray_pd[164];
	feedtray_pd[165] = v[0] + 0.23695;
	v[0] = feedtray_pd[165] * x[53];
	feedtray_pd[166] = v[0] + -33.92;
	feedtray_pd[167] = feedtray_pd[166] * x[53];
	feedtray_pd[179] = feedtray_pd[167] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[53];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[168] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[168] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[169] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[53];
	v[4] += feedtray_pd[169];
	v[5] = -0.00177872643187478 * x[53];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[170] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[170] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[53];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[171] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[171] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[179] += v[4];
	v[4] = -0.00177872643187478 * x[53];
	v[5] = 1. + v[4];
	feedtray_pd[172] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[172] <= 0.) {
	domain_("sqrt'", &feedtray_pd[172], 5L);
	}
	feedtray_pd[173] = 0.5 / feedtray_pd[172];
	feedtray_pd[174] = 1.998195 * feedtray_pd[172];
	v[5] = feedtray_pd[174] + -6.98273;
	v[4] = -0.00177872643187478 * x[53];
	v[6] = 1. + v[4];
	feedtray_pd[175] = v[6] * v[6];
	feedtray_pd[176] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[175];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[53];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[177] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[177] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[178] = 8.314 * v[5];
	v[5] = feedtray_pd[178] * x[53];
	feedtray_pd[179] += v[5];
	feedtray_pd[180] = feedtray_pd[179] * x[0];
	v[5] = -3.13659116407937e-05 * feedtray_pd[180];
	v[6] = 1.22775e-08 * x[53];
	feedtray_pd[181] = v[6] + -9.21666666666667e-05;
	v[6] = x[53] * feedtray_pd[181];
	feedtray_pd[182] = v[6] + 0.25625;
	v[6] = feedtray_pd[182] * x[53];
	feedtray_pd[183] = v[6] + -24.35;
	feedtray_pd[184] = feedtray_pd[183] * x[53];
	feedtray_pd[196] = feedtray_pd[184] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[53];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[185] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[185] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[186] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[53];
	v[9] += feedtray_pd[186];
	v[10] = -0.00168976005407232 * x[53];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[187] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[187] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[53];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[188] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[188] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[196] += v[9];
	v[9] = -0.00168976005407232 * x[53];
	v[10] = 1. + v[9];
	feedtray_pd[189] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[189] <= 0.) {
	domain_("sqrt'", &feedtray_pd[189], 5L);
	}
	feedtray_pd[190] = 0.5 / feedtray_pd[189];
	feedtray_pd[191] = 2.071365 * feedtray_pd[189];
	v[10] = feedtray_pd[191] + -7.28607;
	v[9] = -0.00168976005407232 * x[53];
	v[11] = 1. + v[9];
	feedtray_pd[192] = v[11] * v[11];
	feedtray_pd[193] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[192];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[53];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[194] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[194] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[195] = 8.314 * v[10];
	v[10] = feedtray_pd[195] * x[53];
	feedtray_pd[196] += v[10];
	feedtray_pd[197] = feedtray_pd[196] * x[1];
	v[10] = -3.13659116407937e-05 * feedtray_pd[197];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[88];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = 1.7825e-08 * x[54];
	feedtray_pd[198] = v[0] + -0.000100566666666667;
	v[0] = x[54] * feedtray_pd[198];
	feedtray_pd[199] = v[0] + 0.23695;
	v[0] = feedtray_pd[199] * x[54];
	feedtray_pd[200] = v[0] + -33.92;
	feedtray_pd[201] = feedtray_pd[200] * x[54];
	feedtray_pd[213] = feedtray_pd[201] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[54];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[202] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[202] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[203] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[54];
	v[4] += feedtray_pd[203];
	v[5] = -0.00177872643187478 * x[54];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[204] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[204] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[54];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[205] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[205] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[213] += v[4];
	v[4] = -0.00177872643187478 * x[54];
	v[5] = 1. + v[4];
	feedtray_pd[206] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[206] <= 0.) {
	domain_("sqrt'", &feedtray_pd[206], 5L);
	}
	feedtray_pd[207] = 0.5 / feedtray_pd[206];
	feedtray_pd[208] = 1.998195 * feedtray_pd[206];
	v[5] = feedtray_pd[208] + -6.98273;
	v[4] = -0.00177872643187478 * x[54];
	v[6] = 1. + v[4];
	feedtray_pd[209] = v[6] * v[6];
	feedtray_pd[210] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[209];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[54];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[211] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[211] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[212] = 8.314 * v[5];
	v[5] = feedtray_pd[212] * x[54];
	feedtray_pd[213] += v[5];
	feedtray_pd[214] = feedtray_pd[213] * x[2];
	v[5] = -3.13659116407937e-05 * feedtray_pd[214];
	v[6] = 1.22775e-08 * x[54];
	feedtray_pd[215] = v[6] + -9.21666666666667e-05;
	v[6] = x[54] * feedtray_pd[215];
	feedtray_pd[216] = v[6] + 0.25625;
	v[6] = feedtray_pd[216] * x[54];
	feedtray_pd[217] = v[6] + -24.35;
	feedtray_pd[218] = feedtray_pd[217] * x[54];
	feedtray_pd[230] = feedtray_pd[218] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[54];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[219] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[219] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[220] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[54];
	v[9] += feedtray_pd[220];
	v[10] = -0.00168976005407232 * x[54];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[221] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[221] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[54];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[222] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[222] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[230] += v[9];
	v[9] = -0.00168976005407232 * x[54];
	v[10] = 1. + v[9];
	feedtray_pd[223] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[223] <= 0.) {
	domain_("sqrt'", &feedtray_pd[223], 5L);
	}
	feedtray_pd[224] = 0.5 / feedtray_pd[223];
	feedtray_pd[225] = 2.071365 * feedtray_pd[223];
	v[10] = feedtray_pd[225] + -7.28607;
	v[9] = -0.00168976005407232 * x[54];
	v[11] = 1. + v[9];
	feedtray_pd[226] = v[11] * v[11];
	feedtray_pd[227] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[226];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[54];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[228] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[228] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[229] = 8.314 * v[10];
	v[10] = feedtray_pd[229] * x[54];
	feedtray_pd[230] += v[10];
	feedtray_pd[231] = feedtray_pd[230] * x[3];
	v[10] = -3.13659116407937e-05 * feedtray_pd[231];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[64];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = 1.7825e-08 * x[55];
	feedtray_pd[232] = v[0] + -0.000100566666666667;
	v[0] = x[55] * feedtray_pd[232];
	feedtray_pd[233] = v[0] + 0.23695;
	v[0] = feedtray_pd[233] * x[55];
	feedtray_pd[234] = v[0] + -33.92;
	feedtray_pd[235] = feedtray_pd[234] * x[55];
	feedtray_pd[247] = feedtray_pd[235] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[55];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[236] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[236] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[237] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[55];
	v[4] += feedtray_pd[237];
	v[5] = -0.00177872643187478 * x[55];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[238] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[238] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[55];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[239] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[239] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[247] += v[4];
	v[4] = -0.00177872643187478 * x[55];
	v[5] = 1. + v[4];
	feedtray_pd[240] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[240] <= 0.) {
	domain_("sqrt'", &feedtray_pd[240], 5L);
	}
	feedtray_pd[241] = 0.5 / feedtray_pd[240];
	feedtray_pd[242] = 1.998195 * feedtray_pd[240];
	v[5] = feedtray_pd[242] + -6.98273;
	v[4] = -0.00177872643187478 * x[55];
	v[6] = 1. + v[4];
	feedtray_pd[243] = v[6] * v[6];
	feedtray_pd[244] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[243];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[55];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[245] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[245] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[246] = 8.314 * v[5];
	v[5] = feedtray_pd[246] * x[55];
	feedtray_pd[247] += v[5];
	feedtray_pd[248] = feedtray_pd[247] * x[4];
	v[5] = -3.13659116407937e-05 * feedtray_pd[248];
	v[6] = 1.22775e-08 * x[55];
	feedtray_pd[249] = v[6] + -9.21666666666667e-05;
	v[6] = x[55] * feedtray_pd[249];
	feedtray_pd[250] = v[6] + 0.25625;
	v[6] = feedtray_pd[250] * x[55];
	feedtray_pd[251] = v[6] + -24.35;
	feedtray_pd[252] = feedtray_pd[251] * x[55];
	feedtray_pd[264] = feedtray_pd[252] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[55];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[253] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[253] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[254] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[55];
	v[9] += feedtray_pd[254];
	v[10] = -0.00168976005407232 * x[55];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[255] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[255] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[55];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[256] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[256] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[264] += v[9];
	v[9] = -0.00168976005407232 * x[55];
	v[10] = 1. + v[9];
	feedtray_pd[257] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[257] <= 0.) {
	domain_("sqrt'", &feedtray_pd[257], 5L);
	}
	feedtray_pd[258] = 0.5 / feedtray_pd[257];
	feedtray_pd[259] = 2.071365 * feedtray_pd[257];
	v[10] = feedtray_pd[259] + -7.28607;
	v[9] = -0.00168976005407232 * x[55];
	v[11] = 1. + v[9];
	feedtray_pd[260] = v[11] * v[11];
	feedtray_pd[261] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[260];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[55];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[262] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[262] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[263] = 8.314 * v[10];
	v[10] = feedtray_pd[263] * x[55];
	feedtray_pd[264] += v[10];
	feedtray_pd[265] = feedtray_pd[264] * x[5];
	v[10] = -3.13659116407937e-05 * feedtray_pd[265];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[65];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = 1.7825e-08 * x[56];
	feedtray_pd[266] = v[0] + -0.000100566666666667;
	v[0] = x[56] * feedtray_pd[266];
	feedtray_pd[267] = v[0] + 0.23695;
	v[0] = feedtray_pd[267] * x[56];
	feedtray_pd[268] = v[0] + -33.92;
	feedtray_pd[269] = feedtray_pd[268] * x[56];
	feedtray_pd[281] = feedtray_pd[269] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[56];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[270] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[270] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[271] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[56];
	v[4] += feedtray_pd[271];
	v[5] = -0.00177872643187478 * x[56];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[272] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[272] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[56];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[273] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[273] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[281] += v[4];
	v[4] = -0.00177872643187478 * x[56];
	v[5] = 1. + v[4];
	feedtray_pd[274] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[274] <= 0.) {
	domain_("sqrt'", &feedtray_pd[274], 5L);
	}
	feedtray_pd[275] = 0.5 / feedtray_pd[274];
	feedtray_pd[276] = 1.998195 * feedtray_pd[274];
	v[5] = feedtray_pd[276] + -6.98273;
	v[4] = -0.00177872643187478 * x[56];
	v[6] = 1. + v[4];
	feedtray_pd[277] = v[6] * v[6];
	feedtray_pd[278] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[277];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[56];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[279] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[279] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[280] = 8.314 * v[5];
	v[5] = feedtray_pd[280] * x[56];
	feedtray_pd[281] += v[5];
	feedtray_pd[282] = feedtray_pd[281] * x[6];
	v[5] = -3.13659116407937e-05 * feedtray_pd[282];
	v[6] = 1.22775e-08 * x[56];
	feedtray_pd[283] = v[6] + -9.21666666666667e-05;
	v[6] = x[56] * feedtray_pd[283];
	feedtray_pd[284] = v[6] + 0.25625;
	v[6] = feedtray_pd[284] * x[56];
	feedtray_pd[285] = v[6] + -24.35;
	feedtray_pd[286] = feedtray_pd[285] * x[56];
	feedtray_pd[298] = feedtray_pd[286] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[56];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[287] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[287] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[288] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[56];
	v[9] += feedtray_pd[288];
	v[10] = -0.00168976005407232 * x[56];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[289] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[289] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[56];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[290] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[290] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[298] += v[9];
	v[9] = -0.00168976005407232 * x[56];
	v[10] = 1. + v[9];
	feedtray_pd[291] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[291] <= 0.) {
	domain_("sqrt'", &feedtray_pd[291], 5L);
	}
	feedtray_pd[292] = 0.5 / feedtray_pd[291];
	feedtray_pd[293] = 2.071365 * feedtray_pd[291];
	v[10] = feedtray_pd[293] + -7.28607;
	v[9] = -0.00168976005407232 * x[56];
	v[11] = 1. + v[9];
	feedtray_pd[294] = v[11] * v[11];
	feedtray_pd[295] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[294];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[56];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[296] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[296] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[297] = 8.314 * v[10];
	v[10] = feedtray_pd[297] * x[56];
	feedtray_pd[298] += v[10];
	feedtray_pd[299] = feedtray_pd[298] * x[7];
	v[10] = -3.13659116407937e-05 * feedtray_pd[299];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[66];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = 1.7825e-08 * x[57];
	feedtray_pd[300] = v[0] + -0.000100566666666667;
	v[0] = x[57] * feedtray_pd[300];
	feedtray_pd[301] = v[0] + 0.23695;
	v[0] = feedtray_pd[301] * x[57];
	feedtray_pd[302] = v[0] + -33.92;
	feedtray_pd[303] = feedtray_pd[302] * x[57];
	feedtray_pd[315] = feedtray_pd[303] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[57];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[304] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[304] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[305] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[57];
	v[4] += feedtray_pd[305];
	v[5] = -0.00177872643187478 * x[57];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[306] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[306] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[57];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[307] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[307] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[315] += v[4];
	v[4] = -0.00177872643187478 * x[57];
	v[5] = 1. + v[4];
	feedtray_pd[308] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[308] <= 0.) {
	domain_("sqrt'", &feedtray_pd[308], 5L);
	}
	feedtray_pd[309] = 0.5 / feedtray_pd[308];
	feedtray_pd[310] = 1.998195 * feedtray_pd[308];
	v[5] = feedtray_pd[310] + -6.98273;
	v[4] = -0.00177872643187478 * x[57];
	v[6] = 1. + v[4];
	feedtray_pd[311] = v[6] * v[6];
	feedtray_pd[312] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[311];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[57];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[313] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[313] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[314] = 8.314 * v[5];
	v[5] = feedtray_pd[314] * x[57];
	feedtray_pd[315] += v[5];
	feedtray_pd[316] = feedtray_pd[315] * x[8];
	v[5] = -3.13659116407937e-05 * feedtray_pd[316];
	v[6] = 1.22775e-08 * x[57];
	feedtray_pd[317] = v[6] + -9.21666666666667e-05;
	v[6] = x[57] * feedtray_pd[317];
	feedtray_pd[318] = v[6] + 0.25625;
	v[6] = feedtray_pd[318] * x[57];
	feedtray_pd[319] = v[6] + -24.35;
	feedtray_pd[320] = feedtray_pd[319] * x[57];
	feedtray_pd[332] = feedtray_pd[320] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[57];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[321] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[321] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[322] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[57];
	v[9] += feedtray_pd[322];
	v[10] = -0.00168976005407232 * x[57];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[323] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[323] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[57];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[324] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[324] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[332] += v[9];
	v[9] = -0.00168976005407232 * x[57];
	v[10] = 1. + v[9];
	feedtray_pd[325] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[325] <= 0.) {
	domain_("sqrt'", &feedtray_pd[325], 5L);
	}
	feedtray_pd[326] = 0.5 / feedtray_pd[325];
	feedtray_pd[327] = 2.071365 * feedtray_pd[325];
	v[10] = feedtray_pd[327] + -7.28607;
	v[9] = -0.00168976005407232 * x[57];
	v[11] = 1. + v[9];
	feedtray_pd[328] = v[11] * v[11];
	feedtray_pd[329] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[328];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[57];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[330] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[330] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[331] = 8.314 * v[10];
	v[10] = feedtray_pd[331] * x[57];
	feedtray_pd[332] += v[10];
	feedtray_pd[333] = feedtray_pd[332] * x[9];
	v[10] = -3.13659116407937e-05 * feedtray_pd[333];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[67];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = 1.7825e-08 * x[58];
	feedtray_pd[334] = v[0] + -0.000100566666666667;
	v[0] = x[58] * feedtray_pd[334];
	feedtray_pd[335] = v[0] + 0.23695;
	v[0] = feedtray_pd[335] * x[58];
	feedtray_pd[336] = v[0] + -33.92;
	feedtray_pd[337] = feedtray_pd[336] * x[58];
	feedtray_pd[349] = feedtray_pd[337] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[58];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[338] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[338] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[339] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[58];
	v[4] += feedtray_pd[339];
	v[5] = -0.00177872643187478 * x[58];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[340] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[340] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[58];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[341] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[341] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[349] += v[4];
	v[4] = -0.00177872643187478 * x[58];
	v[5] = 1. + v[4];
	feedtray_pd[342] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[342] <= 0.) {
	domain_("sqrt'", &feedtray_pd[342], 5L);
	}
	feedtray_pd[343] = 0.5 / feedtray_pd[342];
	feedtray_pd[344] = 1.998195 * feedtray_pd[342];
	v[5] = feedtray_pd[344] + -6.98273;
	v[4] = -0.00177872643187478 * x[58];
	v[6] = 1. + v[4];
	feedtray_pd[345] = v[6] * v[6];
	feedtray_pd[346] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[345];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[58];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[347] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[347] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[348] = 8.314 * v[5];
	v[5] = feedtray_pd[348] * x[58];
	feedtray_pd[349] += v[5];
	feedtray_pd[350] = feedtray_pd[349] * x[10];
	v[5] = -3.13659116407937e-05 * feedtray_pd[350];
	v[6] = 1.22775e-08 * x[58];
	feedtray_pd[351] = v[6] + -9.21666666666667e-05;
	v[6] = x[58] * feedtray_pd[351];
	feedtray_pd[352] = v[6] + 0.25625;
	v[6] = feedtray_pd[352] * x[58];
	feedtray_pd[353] = v[6] + -24.35;
	feedtray_pd[354] = feedtray_pd[353] * x[58];
	feedtray_pd[366] = feedtray_pd[354] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[58];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[355] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[355] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[356] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[58];
	v[9] += feedtray_pd[356];
	v[10] = -0.00168976005407232 * x[58];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[357] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[357] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[58];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[358] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[358] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[366] += v[9];
	v[9] = -0.00168976005407232 * x[58];
	v[10] = 1. + v[9];
	feedtray_pd[359] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[359] <= 0.) {
	domain_("sqrt'", &feedtray_pd[359], 5L);
	}
	feedtray_pd[360] = 0.5 / feedtray_pd[359];
	feedtray_pd[361] = 2.071365 * feedtray_pd[359];
	v[10] = feedtray_pd[361] + -7.28607;
	v[9] = -0.00168976005407232 * x[58];
	v[11] = 1. + v[9];
	feedtray_pd[362] = v[11] * v[11];
	feedtray_pd[363] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[362];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[58];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[364] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[364] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[365] = 8.314 * v[10];
	v[10] = feedtray_pd[365] * x[58];
	feedtray_pd[366] += v[10];
	feedtray_pd[367] = feedtray_pd[366] * x[11];
	v[10] = -3.13659116407937e-05 * feedtray_pd[367];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[68];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = 1.7825e-08 * x[59];
	feedtray_pd[368] = v[0] + -0.000100566666666667;
	v[0] = x[59] * feedtray_pd[368];
	feedtray_pd[369] = v[0] + 0.23695;
	v[0] = feedtray_pd[369] * x[59];
	feedtray_pd[370] = v[0] + -33.92;
	feedtray_pd[371] = feedtray_pd[370] * x[59];
	feedtray_pd[383] = feedtray_pd[371] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[59];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[372] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[372] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[373] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[59];
	v[4] += feedtray_pd[373];
	v[5] = -0.00177872643187478 * x[59];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[374] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[374] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[59];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[375] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[375] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[383] += v[4];
	v[4] = -0.00177872643187478 * x[59];
	v[5] = 1. + v[4];
	feedtray_pd[376] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[376] <= 0.) {
	domain_("sqrt'", &feedtray_pd[376], 5L);
	}
	feedtray_pd[377] = 0.5 / feedtray_pd[376];
	feedtray_pd[378] = 1.998195 * feedtray_pd[376];
	v[5] = feedtray_pd[378] + -6.98273;
	v[4] = -0.00177872643187478 * x[59];
	v[6] = 1. + v[4];
	feedtray_pd[379] = v[6] * v[6];
	feedtray_pd[380] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[379];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[59];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[381] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[381] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[382] = 8.314 * v[5];
	v[5] = feedtray_pd[382] * x[59];
	feedtray_pd[383] += v[5];
	feedtray_pd[384] = feedtray_pd[383] * x[12];
	v[5] = -3.13659116407937e-05 * feedtray_pd[384];
	v[6] = 1.22775e-08 * x[59];
	feedtray_pd[385] = v[6] + -9.21666666666667e-05;
	v[6] = x[59] * feedtray_pd[385];
	feedtray_pd[386] = v[6] + 0.25625;
	v[6] = feedtray_pd[386] * x[59];
	feedtray_pd[387] = v[6] + -24.35;
	feedtray_pd[388] = feedtray_pd[387] * x[59];
	feedtray_pd[400] = feedtray_pd[388] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[59];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[389] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[389] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[390] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[59];
	v[9] += feedtray_pd[390];
	v[10] = -0.00168976005407232 * x[59];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[391] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[391] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[59];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[392] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[392] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[400] += v[9];
	v[9] = -0.00168976005407232 * x[59];
	v[10] = 1. + v[9];
	feedtray_pd[393] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[393] <= 0.) {
	domain_("sqrt'", &feedtray_pd[393], 5L);
	}
	feedtray_pd[394] = 0.5 / feedtray_pd[393];
	feedtray_pd[395] = 2.071365 * feedtray_pd[393];
	v[10] = feedtray_pd[395] + -7.28607;
	v[9] = -0.00168976005407232 * x[59];
	v[11] = 1. + v[9];
	feedtray_pd[396] = v[11] * v[11];
	feedtray_pd[397] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[396];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[59];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[398] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[398] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[399] = 8.314 * v[10];
	v[10] = feedtray_pd[399] * x[59];
	feedtray_pd[400] += v[10];
	feedtray_pd[401] = feedtray_pd[400] * x[13];
	v[10] = -3.13659116407937e-05 * feedtray_pd[401];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[69];
	c[43] = t1;

  /***  constraint 45  ***/

	v[0] = 1.7825e-08 * x[60];
	feedtray_pd[402] = v[0] + -0.000100566666666667;
	v[0] = x[60] * feedtray_pd[402];
	feedtray_pd[403] = v[0] + 0.23695;
	v[0] = feedtray_pd[403] * x[60];
	feedtray_pd[404] = v[0] + -33.92;
	feedtray_pd[405] = feedtray_pd[404] * x[60];
	feedtray_pd[417] = feedtray_pd[405] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[60];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[406] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[406] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[407] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[60];
	v[4] += feedtray_pd[407];
	v[5] = -0.00177872643187478 * x[60];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[408] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[408] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[60];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[409] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[409] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[417] += v[4];
	v[4] = -0.00177872643187478 * x[60];
	v[5] = 1. + v[4];
	feedtray_pd[410] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[410] <= 0.) {
	domain_("sqrt'", &feedtray_pd[410], 5L);
	}
	feedtray_pd[411] = 0.5 / feedtray_pd[410];
	feedtray_pd[412] = 1.998195 * feedtray_pd[410];
	v[5] = feedtray_pd[412] + -6.98273;
	v[4] = -0.00177872643187478 * x[60];
	v[6] = 1. + v[4];
	feedtray_pd[413] = v[6] * v[6];
	feedtray_pd[414] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[413];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[60];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[415] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[415] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[416] = 8.314 * v[5];
	v[5] = feedtray_pd[416] * x[60];
	feedtray_pd[417] += v[5];
	feedtray_pd[418] = feedtray_pd[417] * x[14];
	v[5] = -3.13659116407937e-05 * feedtray_pd[418];
	v[6] = 1.22775e-08 * x[60];
	feedtray_pd[419] = v[6] + -9.21666666666667e-05;
	v[6] = x[60] * feedtray_pd[419];
	feedtray_pd[420] = v[6] + 0.25625;
	v[6] = feedtray_pd[420] * x[60];
	feedtray_pd[421] = v[6] + -24.35;
	feedtray_pd[422] = feedtray_pd[421] * x[60];
	feedtray_pd[434] = feedtray_pd[422] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[60];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[423] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[423] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[424] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[60];
	v[9] += feedtray_pd[424];
	v[10] = -0.00168976005407232 * x[60];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[425] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[425] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[60];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[426] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[426] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[434] += v[9];
	v[9] = -0.00168976005407232 * x[60];
	v[10] = 1. + v[9];
	feedtray_pd[427] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[427] <= 0.) {
	domain_("sqrt'", &feedtray_pd[427], 5L);
	}
	feedtray_pd[428] = 0.5 / feedtray_pd[427];
	feedtray_pd[429] = 2.071365 * feedtray_pd[427];
	v[10] = feedtray_pd[429] + -7.28607;
	v[9] = -0.00168976005407232 * x[60];
	v[11] = 1. + v[9];
	feedtray_pd[430] = v[11] * v[11];
	feedtray_pd[431] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[430];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[60];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[432] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[432] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[433] = 8.314 * v[10];
	v[10] = feedtray_pd[433] * x[60];
	feedtray_pd[434] += v[10];
	feedtray_pd[435] = feedtray_pd[434] * x[15];
	v[10] = -3.13659116407937e-05 * feedtray_pd[435];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[70];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = 1.7825e-08 * x[61];
	feedtray_pd[436] = v[0] + -0.000100566666666667;
	v[0] = x[61] * feedtray_pd[436];
	feedtray_pd[437] = v[0] + 0.23695;
	v[0] = feedtray_pd[437] * x[61];
	feedtray_pd[438] = v[0] + -33.92;
	feedtray_pd[439] = feedtray_pd[438] * x[61];
	feedtray_pd[451] = feedtray_pd[439] + -46242.079590558;
	v[4] = -0.00177872643187478 * x[61];
	v[5] = 1. + v[4];
	v[4] = pow(v[5], 1.5);
	if (errno) in_trouble2("pow",v[5],1.5);
	if (v[5] > 0.) {
	feedtray_pd[440] = 1.5*(v[4]/v[5]);
	} else if (1.5 > 1.) {
	feedtray_pd[440] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],1.5);
	}
	feedtray_pd[441] = 1.33213 * v[4];
	v[4] = 0.012420366417645 * x[61];
	v[4] += feedtray_pd[441];
	v[5] = -0.00177872643187478 * x[61];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 3.);
	if (errno) in_trouble2("pow",v[6],3.);
	if (v[6] != 0.) {
	feedtray_pd[442] = 3.*(v[6]*v[6]);
	} else {
	feedtray_pd[442] = 0.;
	}
	v[5] *= -2.62863;
	v[4] += v[5];
	v[5] = -0.00177872643187478 * x[61];
	v[6] = 1. + v[5];
	v[5] = pow(v[6], 6.);
	if (errno) in_trouble2("pow",v[6],6.);
	if (v[6] != 0.) {
	feedtray_pd[443] = 6.*(v[5]/v[6]);
	} else {
	feedtray_pd[443] = 0.;
	}
	v[5] *= -3.33399;
	v[4] += v[5];
	v[4] *= 4674.1308;
	feedtray_pd[451] += v[4];
	v[4] = -0.00177872643187478 * x[61];
	v[5] = 1. + v[4];
	feedtray_pd[444] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (feedtray_pd[444] <= 0.) {
	domain_("sqrt'", &feedtray_pd[444], 5L);
	}
	feedtray_pd[445] = 0.5 / feedtray_pd[444];
	feedtray_pd[446] = 1.998195 * feedtray_pd[444];
	v[5] = feedtray_pd[446] + -6.98273;
	v[4] = -0.00177872643187478 * x[61];
	v[6] = 1. + v[4];
	feedtray_pd[447] = v[6] * v[6];
	feedtray_pd[448] = v[6] + v[6];
	v[6] = -7.88589 * feedtray_pd[447];
	v[5] += v[6];
	v[6] = -0.00177872643187478 * x[61];
	v[4] = 1. + v[6];
	v[6] = pow(v[4], 5.);
	if (errno) in_trouble2("pow",v[4],5.);
	if (v[4] != 0.) {
	feedtray_pd[449] = 5.*(v[6]/v[4]);
	} else {
	feedtray_pd[449] = 0.;
	}
	v[6] *= -20.00394;
	v[5] += v[6];
	feedtray_pd[450] = 8.314 * v[5];
	v[5] = feedtray_pd[450] * x[61];
	feedtray_pd[451] += v[5];
	feedtray_pd[452] = feedtray_pd[451] * x[16];
	v[5] = -3.13659116407937e-05 * feedtray_pd[452];
	v[6] = 1.22775e-08 * x[61];
	feedtray_pd[453] = v[6] + -9.21666666666667e-05;
	v[6] = x[61] * feedtray_pd[453];
	feedtray_pd[454] = v[6] + 0.25625;
	v[6] = feedtray_pd[454] * x[61];
	feedtray_pd[455] = v[6] + -24.35;
	feedtray_pd[456] = feedtray_pd[455] * x[61];
	feedtray_pd[468] = feedtray_pd[456] + -55570.3234397208;
	v[9] = -0.00168976005407232 * x[61];
	v[10] = 1. + v[9];
	v[9] = pow(v[10], 1.5);
	if (errno) in_trouble2("pow",v[10],1.5);
	if (v[10] > 0.) {
	feedtray_pd[457] = 1.5*(v[9]/v[10]);
	} else if (1.5 > 1.) {
	feedtray_pd[457] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],1.5);
	}
	feedtray_pd[458] = 1.38091 * v[9];
	v[9] = 0.0123117100371747 * x[61];
	v[9] += feedtray_pd[458];
	v[10] = -0.00168976005407232 * x[61];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 3.);
	if (errno) in_trouble2("pow",v[11],3.);
	if (v[11] != 0.) {
	feedtray_pd[459] = 3.*(v[11]*v[11]);
	} else {
	feedtray_pd[459] = 0.;
	}
	v[10] *= -2.83433;
	v[9] += v[10];
	v[10] = -0.00168976005407232 * x[61];
	v[11] = 1. + v[10];
	v[10] = pow(v[11], 6.);
	if (errno) in_trouble2("pow",v[11],6.);
	if (v[11] != 0.) {
	feedtray_pd[460] = 6.*(v[10]/v[11]);
	} else {
	feedtray_pd[460] = 0.;
	}
	v[10] *= -2.79168;
	v[9] += v[10];
	v[9] *= 4920.2252;
	feedtray_pd[468] += v[9];
	v[9] = -0.00168976005407232 * x[61];
	v[10] = 1. + v[9];
	feedtray_pd[461] = sqrt(v[10]);
	if (errno) in_trouble("sqrt",v[10]);
	if (feedtray_pd[461] <= 0.) {
	domain_("sqrt'", &feedtray_pd[461], 5L);
	}
	feedtray_pd[462] = 0.5 / feedtray_pd[461];
	feedtray_pd[463] = 2.071365 * feedtray_pd[461];
	v[10] = feedtray_pd[463] + -7.28607;
	v[9] = -0.00168976005407232 * x[61];
	v[11] = 1. + v[9];
	feedtray_pd[464] = v[11] * v[11];
	feedtray_pd[465] = v[11] + v[11];
	v[11] = -8.50299 * feedtray_pd[464];
	v[10] += v[11];
	v[11] = -0.00168976005407232 * x[61];
	v[9] = 1. + v[11];
	v[11] = pow(v[9], 5.);
	if (errno) in_trouble2("pow",v[9],5.);
	if (v[9] != 0.) {
	feedtray_pd[466] = 5.*(v[11]/v[9]);
	} else {
	feedtray_pd[466] = 0.;
	}
	v[11] *= -16.75008;
	v[10] += v[11];
	feedtray_pd[467] = 8.314 * v[10];
	v[10] = feedtray_pd[467] * x[61];
	feedtray_pd[468] += v[10];
	feedtray_pd[469] = feedtray_pd[468] * x[17];
	v[10] = -3.13659116407937e-05 * feedtray_pd[469];
	v[11] = v[5] + v[10];
	t1 = v[11] + x[71];
	c[45] = t1;

  /***  constraint 47  ***/

	v[0] = 1.7825e-08 * x[53];
	feedtray_pd[470] = v[0] + -0.000100566666666667;
	v[0] = x[53] * feedtray_pd[470];
	feedtray_pd[471] = v[0] + 0.23695;
	v[0] = feedtray_pd[471] * x[53];
	feedtray_pd[472] = v[0] + -33.92;
	v[0] = feedtray_pd[472] * x[53];
	feedtray_pd[473] = v[0] + -13603.886229474;
	feedtray_pd[474] = feedtray_pd[473] * x[18];
	v[0] = -3.13659116407937e-05 * feedtray_pd[474];
	v[5] = 1.22775e-08 * x[53];
	feedtray_pd[475] = v[5] + -9.21666666666667e-05;
	v[5] = x[53] * feedtray_pd[475];
	feedtray_pd[476] = v[5] + 0.25625;
	v[5] = feedtray_pd[476] * x[53];
	feedtray_pd[477] = v[5] + -24.35;
	v[5] = feedtray_pd[477] * x[53];
	feedtray_pd[478] = v[5] + -19721.2182167568;
	feedtray_pd[479] = feedtray_pd[478] * x[19];
	v[5] = -3.13659116407937e-05 * feedtray_pd[479];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[72];
	c[46] = t1;

  /***  constraint 48  ***/

	v[0] = 1.7825e-08 * x[54];
	feedtray_pd[480] = v[0] + -0.000100566666666667;
	v[0] = x[54] * feedtray_pd[480];
	feedtray_pd[481] = v[0] + 0.23695;
	v[0] = feedtray_pd[481] * x[54];
	feedtray_pd[482] = v[0] + -33.92;
	v[0] = feedtray_pd[482] * x[54];
	feedtray_pd[483] = v[0] + -13603.886229474;
	feedtray_pd[484] = feedtray_pd[483] * x[20];
	v[0] = -3.13659116407937e-05 * feedtray_pd[484];
	v[5] = 1.22775e-08 * x[54];
	feedtray_pd[485] = v[5] + -9.21666666666667e-05;
	v[5] = x[54] * feedtray_pd[485];
	feedtray_pd[486] = v[5] + 0.25625;
	v[5] = feedtray_pd[486] * x[54];
	feedtray_pd[487] = v[5] + -24.35;
	v[5] = feedtray_pd[487] * x[54];
	feedtray_pd[488] = v[5] + -19721.2182167568;
	feedtray_pd[489] = feedtray_pd[488] * x[21];
	v[5] = -3.13659116407937e-05 * feedtray_pd[489];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[73];
	c[47] = t1;

  /***  constraint 49  ***/

	v[0] = 1.7825e-08 * x[55];
	feedtray_pd[490] = v[0] + -0.000100566666666667;
	v[0] = x[55] * feedtray_pd[490];
	feedtray_pd[491] = v[0] + 0.23695;
	v[0] = feedtray_pd[491] * x[55];
	feedtray_pd[492] = v[0] + -33.92;
	v[0] = feedtray_pd[492] * x[55];
	feedtray_pd[493] = v[0] + -13603.886229474;
	feedtray_pd[494] = feedtray_pd[493] * x[22];
	v[0] = -3.13659116407937e-05 * feedtray_pd[494];
	v[5] = 1.22775e-08 * x[55];
	feedtray_pd[495] = v[5] + -9.21666666666667e-05;
	v[5] = x[55] * feedtray_pd[495];
	feedtray_pd[496] = v[5] + 0.25625;
	v[5] = feedtray_pd[496] * x[55];
	feedtray_pd[497] = v[5] + -24.35;
	v[5] = feedtray_pd[497] * x[55];
	feedtray_pd[498] = v[5] + -19721.2182167568;
	feedtray_pd[499] = feedtray_pd[498] * x[23];
	v[5] = -3.13659116407937e-05 * feedtray_pd[499];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[74];
	c[48] = t1;

  /***  constraint 50  ***/

	v[0] = 1.7825e-08 * x[56];
	feedtray_pd[500] = v[0] + -0.000100566666666667;
	v[0] = x[56] * feedtray_pd[500];
	feedtray_pd[501] = v[0] + 0.23695;
	v[0] = feedtray_pd[501] * x[56];
	feedtray_pd[502] = v[0] + -33.92;
	v[0] = feedtray_pd[502] * x[56];
	feedtray_pd[503] = v[0] + -13603.886229474;
	feedtray_pd[504] = feedtray_pd[503] * x[24];
	v[0] = -3.13659116407937e-05 * feedtray_pd[504];
	v[5] = 1.22775e-08 * x[56];
	feedtray_pd[505] = v[5] + -9.21666666666667e-05;
	v[5] = x[56] * feedtray_pd[505];
	feedtray_pd[506] = v[5] + 0.25625;
	v[5] = feedtray_pd[506] * x[56];
	feedtray_pd[507] = v[5] + -24.35;
	v[5] = feedtray_pd[507] * x[56];
	feedtray_pd[508] = v[5] + -19721.2182167568;
	feedtray_pd[509] = feedtray_pd[508] * x[25];
	v[5] = -3.13659116407937e-05 * feedtray_pd[509];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[75];
	c[49] = t1;

  /***  constraint 51  ***/

	v[0] = 1.7825e-08 * x[57];
	feedtray_pd[510] = v[0] + -0.000100566666666667;
	v[0] = x[57] * feedtray_pd[510];
	feedtray_pd[511] = v[0] + 0.23695;
	v[0] = feedtray_pd[511] * x[57];
	feedtray_pd[512] = v[0] + -33.92;
	v[0] = feedtray_pd[512] * x[57];
	feedtray_pd[513] = v[0] + -13603.886229474;
	feedtray_pd[514] = feedtray_pd[513] * x[26];
	v[0] = -3.13659116407937e-05 * feedtray_pd[514];
	v[5] = 1.22775e-08 * x[57];
	feedtray_pd[515] = v[5] + -9.21666666666667e-05;
	v[5] = x[57] * feedtray_pd[515];
	feedtray_pd[516] = v[5] + 0.25625;
	v[5] = feedtray_pd[516] * x[57];
	feedtray_pd[517] = v[5] + -24.35;
	v[5] = feedtray_pd[517] * x[57];
	feedtray_pd[518] = v[5] + -19721.2182167568;
	feedtray_pd[519] = feedtray_pd[518] * x[27];
	v[5] = -3.13659116407937e-05 * feedtray_pd[519];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[76];
	c[50] = t1;

  /***  constraint 52  ***/

	v[0] = 1.7825e-08 * x[58];
	feedtray_pd[520] = v[0] + -0.000100566666666667;
	v[0] = x[58] * feedtray_pd[520];
	feedtray_pd[521] = v[0] + 0.23695;
	v[0] = feedtray_pd[521] * x[58];
	feedtray_pd[522] = v[0] + -33.92;
	v[0] = feedtray_pd[522] * x[58];
	feedtray_pd[523] = v[0] + -13603.886229474;
	feedtray_pd[524] = feedtray_pd[523] * x[28];
	v[0] = -3.13659116407937e-05 * feedtray_pd[524];
	v[5] = 1.22775e-08 * x[58];
	feedtray_pd[525] = v[5] + -9.21666666666667e-05;
	v[5] = x[58] * feedtray_pd[525];
	feedtray_pd[526] = v[5] + 0.25625;
	v[5] = feedtray_pd[526] * x[58];
	feedtray_pd[527] = v[5] + -24.35;
	v[5] = feedtray_pd[527] * x[58];
	feedtray_pd[528] = v[5] + -19721.2182167568;
	feedtray_pd[529] = feedtray_pd[528] * x[29];
	v[5] = -3.13659116407937e-05 * feedtray_pd[529];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[77];
	c[51] = t1;

  /***  constraint 53  ***/

	v[0] = 1.7825e-08 * x[59];
	feedtray_pd[530] = v[0] + -0.000100566666666667;
	v[0] = x[59] * feedtray_pd[530];
	feedtray_pd[531] = v[0] + 0.23695;
	v[0] = feedtray_pd[531] * x[59];
	feedtray_pd[532] = v[0] + -33.92;
	v[0] = feedtray_pd[532] * x[59];
	feedtray_pd[533] = v[0] + -13603.886229474;
	feedtray_pd[534] = feedtray_pd[533] * x[30];
	v[0] = -3.13659116407937e-05 * feedtray_pd[534];
	v[5] = 1.22775e-08 * x[59];
	feedtray_pd[535] = v[5] + -9.21666666666667e-05;
	v[5] = x[59] * feedtray_pd[535];
	feedtray_pd[536] = v[5] + 0.25625;
	v[5] = feedtray_pd[536] * x[59];
	feedtray_pd[537] = v[5] + -24.35;
	v[5] = feedtray_pd[537] * x[59];
	feedtray_pd[538] = v[5] + -19721.2182167568;
	feedtray_pd[539] = feedtray_pd[538] * x[31];
	v[5] = -3.13659116407937e-05 * feedtray_pd[539];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[78];
	c[52] = t1;

  /***  constraint 54  ***/

	v[0] = 1.7825e-08 * x[60];
	feedtray_pd[540] = v[0] + -0.000100566666666667;
	v[0] = x[60] * feedtray_pd[540];
	feedtray_pd[541] = v[0] + 0.23695;
	v[0] = feedtray_pd[541] * x[60];
	feedtray_pd[542] = v[0] + -33.92;
	v[0] = feedtray_pd[542] * x[60];
	feedtray_pd[543] = v[0] + -13603.886229474;
	feedtray_pd[544] = feedtray_pd[543] * x[32];
	v[0] = -3.13659116407937e-05 * feedtray_pd[544];
	v[5] = 1.22775e-08 * x[60];
	feedtray_pd[545] = v[5] + -9.21666666666667e-05;
	v[5] = x[60] * feedtray_pd[545];
	feedtray_pd[546] = v[5] + 0.25625;
	v[5] = feedtray_pd[546] * x[60];
	feedtray_pd[547] = v[5] + -24.35;
	v[5] = feedtray_pd[547] * x[60];
	feedtray_pd[548] = v[5] + -19721.2182167568;
	feedtray_pd[549] = feedtray_pd[548] * x[33];
	v[5] = -3.13659116407937e-05 * feedtray_pd[549];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[79];
	c[53] = t1;

  /***  constraint 55  ***/

	v[0] = 1.7825e-08 * x[61];
	feedtray_pd[550] = v[0] + -0.000100566666666667;
	v[0] = x[61] * feedtray_pd[550];
	feedtray_pd[551] = v[0] + 0.23695;
	v[0] = feedtray_pd[551] * x[61];
	feedtray_pd[552] = v[0] + -33.92;
	v[0] = feedtray_pd[552] * x[61];
	feedtray_pd[553] = v[0] + -13603.886229474;
	feedtray_pd[554] = feedtray_pd[553] * x[34];
	v[0] = -3.13659116407937e-05 * feedtray_pd[554];
	v[5] = 1.22775e-08 * x[61];
	feedtray_pd[555] = v[5] + -9.21666666666667e-05;
	v[5] = x[61] * feedtray_pd[555];
	feedtray_pd[556] = v[5] + 0.25625;
	v[5] = feedtray_pd[556] * x[61];
	feedtray_pd[557] = v[5] + -24.35;
	v[5] = feedtray_pd[557] * x[61];
	feedtray_pd[558] = v[5] + -19721.2182167568;
	feedtray_pd[559] = feedtray_pd[558] * x[35];
	v[5] = -3.13659116407937e-05 * feedtray_pd[559];
	v[10] = v[0] + v[5];
	t1 = v[10] + x[89];
	c[54] = t1;

  /***  constraint 56  ***/

	v[0] = x[37] * x[64];
	v[1] = x[46] * x[73];
	v[0] += v[1];
	v[1] = x[38] * x[65];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[45] * x[72];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + 0.999444137682208*x[80];
	c[55] = t1;

  /***  constraint 57  ***/

	v[0] = x[38] * x[65];
	v[1] = x[47] * x[74];
	v[0] += v[1];
	v[1] = x[39] * x[66];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[46] * x[73];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + 0.999444137682208*x[81];
	c[56] = t1;

  /***  constraint 58  ***/

	v[0] = x[39] * x[66];
	v[1] = x[48] * x[75];
	v[0] += v[1];
	v[1] = x[40] * x[67];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[47] * x[74];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + 0.999444137682208*x[82];
	c[57] = t1;

  /***  constraint 59  ***/

	v[0] = x[40] * x[67];
	v[1] = x[49] * x[76];
	v[0] += v[1];
	v[1] = x[41] * x[68];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[48] * x[75];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + 0.999444137682208*x[83];
	c[58] = t1;

  /***  constraint 60  ***/

	v[0] = x[41] * x[68];
	v[1] = x[50] * x[77];
	v[0] += v[1];
	v[1] = x[42] * x[69];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[49] * x[76];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + 0.999444137682208*x[84];
	c[59] = t1;

  /***  constraint 61  ***/

	v[0] = x[42] * x[69];
	v[1] = x[51] * x[78];
	v[0] += v[1];
	v[1] = x[43] * x[70];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[50] * x[77];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + 0.999444137682208*x[85];
	c[60] = t1;

  /***  constraint 62  ***/

	v[0] = x[43] * x[70];
	v[1] = x[52] * x[79];
	v[0] += v[1];
	v[1] = x[44] * x[71];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[51] * x[78];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + 0.999444137682208*x[86];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[18];
	t1 += x[19];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[2];
	t1 += -x[3];
	t1 += x[20];
	t1 += x[21];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += x[22];
	t1 += x[23];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[6];
	t1 += -x[7];
	t1 += x[24];
	t1 += x[25];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += x[26];
	t1 += x[27];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[10];
	t1 += -x[11];
	t1 += x[28];
	t1 += x[29];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += x[30];
	t1 += x[31];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[14];
	t1 += -x[15];
	t1 += x[32];
	t1 += x[33];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[16];
	t1 += -x[17];
	t1 += x[34];
	t1 += x[35];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[37];
	t1 += -x[38];
	t1 += -x[45];
	t1 += x[46];
	t1 += -x[80];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[38];
	t1 += -x[39];
	t1 += -x[46];
	t1 += x[47];
	t1 += -x[81];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[39];
	t1 += -x[40];
	t1 += -x[47];
	t1 += x[48];
	t1 += -x[82];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[40];
	t1 += -x[41];
	t1 += -x[48];
	t1 += x[49];
	t1 += -x[83];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[41];
	t1 += -x[42];
	t1 += -x[49];
	t1 += x[50];
	t1 += -x[84];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[42];
	t1 += -x[43];
	t1 += -x[50];
	t1 += x[51];
	t1 += -x[85];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[43];
	t1 += -x[44];
	t1 += -x[51];
	t1 += x[52];
	t1 += -x[86];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[36];
	t1 += -x[37];
	t1 += x[45];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[44];
	t1 += -x[52];
	t1 += x[63];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[36];
	t1 += -x[87];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[16];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	t1 += x[84];
	t1 += x[85];
	t1 += x[86];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[90];
	t1 += x[91];
	t1 += x[92];
	t1 += x[93];
	t1 += x[94];
	t1 += x[95];
	t1 += x[96];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[80];
	t1 += -100.*x[90];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[81];
	t1 += -100.*x[91];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[82];
	t1 += -100.*x[92];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[83];
	t1 += -100.*x[93];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[84];
	t1 += -100.*x[94];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[85];
	t1 += -100.*x[95];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[86];
	t1 += -100.*x[96];
	c[90] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = feedtray_pd[8];
	dv[0] = -x[0]*48.9;
	dv[0] *= feedtray_pd[7];
	J[304] = dv[0]*feedtray_pd[5];
	dv[0] *= feedtray_pd[4];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[3];
	J[304] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[2];
	J[304] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[304] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[0];
	J[304] -= dv[0]*0.00177872643187478;
	J[89] = 1.2;

   /*** derivatives for constraint 2 ***/

	J[4] = feedtray_pd[17];
	dv[0] = -x[1]*41.;
	dv[0] *= feedtray_pd[16];
	J[305] = dv[0]*feedtray_pd[14];
	dv[0] *= feedtray_pd[13];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[12];
	J[305] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[11];
	J[305] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[305] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[9];
	J[305] -= dv[0]*0.00168976005407232;
	J[94] = 1.2;

   /*** derivatives for constraint 3 ***/

	J[8] = feedtray_pd[26];
	dv[0] = -x[2]*48.9;
	dv[0] *= feedtray_pd[25];
	J[308] = dv[0]*feedtray_pd[23];
	dv[0] *= feedtray_pd[22];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[21];
	J[308] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[20];
	J[308] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[308] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[18];
	J[308] -= dv[0]*0.00177872643187478;
	J[99] = 1.12;

   /*** derivatives for constraint 4 ***/

	J[13] = feedtray_pd[35];
	dv[0] = -x[3]*41.;
	dv[0] *= feedtray_pd[34];
	J[309] = dv[0]*feedtray_pd[32];
	dv[0] *= feedtray_pd[31];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[30];
	J[309] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[29];
	J[309] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[309] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[27];
	J[309] -= dv[0]*0.00168976005407232;
	J[104] = 1.12;

   /*** derivatives for constraint 5 ***/

	J[18] = feedtray_pd[44];
	dv[0] = -x[4]*48.9;
	dv[0] *= feedtray_pd[43];
	J[312] = dv[0]*feedtray_pd[41];
	dv[0] *= feedtray_pd[40];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[39];
	J[312] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[38];
	J[312] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[312] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[36];
	J[312] -= dv[0]*0.00177872643187478;
	J[109] = 1.11333333333333;

   /*** derivatives for constraint 6 ***/

	J[23] = feedtray_pd[53];
	dv[0] = -x[5]*41.;
	dv[0] *= feedtray_pd[52];
	J[313] = dv[0]*feedtray_pd[50];
	dv[0] *= feedtray_pd[49];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[48];
	J[313] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[47];
	J[313] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[313] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[45];
	J[313] -= dv[0]*0.00168976005407232;
	J[114] = 1.11333333333333;

   /*** derivatives for constraint 7 ***/

	J[28] = feedtray_pd[62];
	dv[0] = -x[6]*48.9;
	dv[0] *= feedtray_pd[61];
	J[316] = dv[0]*feedtray_pd[59];
	dv[0] *= feedtray_pd[58];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[57];
	J[316] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[56];
	J[316] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[316] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[54];
	J[316] -= dv[0]*0.00177872643187478;
	J[119] = 1.10666666666667;

   /*** derivatives for constraint 8 ***/

	J[33] = feedtray_pd[71];
	dv[0] = -x[7]*41.;
	dv[0] *= feedtray_pd[70];
	J[317] = dv[0]*feedtray_pd[68];
	dv[0] *= feedtray_pd[67];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[66];
	J[317] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[65];
	J[317] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[317] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[63];
	J[317] -= dv[0]*0.00168976005407232;
	J[124] = 1.10666666666667;

   /*** derivatives for constraint 9 ***/

	J[38] = feedtray_pd[80];
	dv[0] = -x[8]*48.9;
	dv[0] *= feedtray_pd[79];
	J[320] = dv[0]*feedtray_pd[77];
	dv[0] *= feedtray_pd[76];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[75];
	J[320] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[74];
	J[320] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[320] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[72];
	J[320] -= dv[0]*0.00177872643187478;
	J[129] = 1.1;

   /*** derivatives for constraint 10 ***/

	J[43] = feedtray_pd[89];
	dv[0] = -x[9]*41.;
	dv[0] *= feedtray_pd[88];
	J[321] = dv[0]*feedtray_pd[86];
	dv[0] *= feedtray_pd[85];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[84];
	J[321] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[83];
	J[321] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[321] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[81];
	J[321] -= dv[0]*0.00168976005407232;
	J[134] = 1.1;

   /*** derivatives for constraint 11 ***/

	J[48] = feedtray_pd[98];
	dv[0] = -x[10]*48.9;
	dv[0] *= feedtray_pd[97];
	J[324] = dv[0]*feedtray_pd[95];
	dv[0] *= feedtray_pd[94];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[93];
	J[324] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[92];
	J[324] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[324] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[90];
	J[324] -= dv[0]*0.00177872643187478;
	J[139] = 1.09333333333333;

   /*** derivatives for constraint 12 ***/

	J[53] = feedtray_pd[107];
	dv[0] = -x[11]*41.;
	dv[0] *= feedtray_pd[106];
	J[325] = dv[0]*feedtray_pd[104];
	dv[0] *= feedtray_pd[103];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[102];
	J[325] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[101];
	J[325] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[325] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[99];
	J[325] -= dv[0]*0.00168976005407232;
	J[144] = 1.09333333333333;

   /*** derivatives for constraint 13 ***/

	J[58] = feedtray_pd[116];
	dv[0] = -x[12]*48.9;
	dv[0] *= feedtray_pd[115];
	J[328] = dv[0]*feedtray_pd[113];
	dv[0] *= feedtray_pd[112];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[111];
	J[328] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[110];
	J[328] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[328] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[108];
	J[328] -= dv[0]*0.00177872643187478;
	J[149] = 1.08666666666667;

   /*** derivatives for constraint 14 ***/

	J[63] = feedtray_pd[125];
	dv[0] = -x[13]*41.;
	dv[0] *= feedtray_pd[124];
	J[329] = dv[0]*feedtray_pd[122];
	dv[0] *= feedtray_pd[121];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[120];
	J[329] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[119];
	J[329] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[329] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[117];
	J[329] -= dv[0]*0.00168976005407232;
	J[154] = 1.08666666666667;

   /*** derivatives for constraint 15 ***/

	J[68] = feedtray_pd[134];
	dv[0] = -x[14]*48.9;
	dv[0] *= feedtray_pd[133];
	J[332] = dv[0]*feedtray_pd[131];
	dv[0] *= feedtray_pd[130];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[129];
	J[332] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[128];
	J[332] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[332] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[126];
	J[332] -= dv[0]*0.00177872643187478;
	J[159] = 1.08;

   /*** derivatives for constraint 16 ***/

	J[73] = feedtray_pd[143];
	dv[0] = -x[15]*41.;
	dv[0] *= feedtray_pd[142];
	J[333] = dv[0]*feedtray_pd[140];
	dv[0] *= feedtray_pd[139];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[138];
	J[333] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[137];
	J[333] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[333] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[135];
	J[333] -= dv[0]*0.00168976005407232;
	J[164] = 1.08;

   /*** derivatives for constraint 17 ***/

	J[78] = feedtray_pd[152];
	dv[0] = -x[16]*48.9;
	dv[0] *= feedtray_pd[151];
	J[336] = dv[0]*feedtray_pd[149];
	dv[0] *= feedtray_pd[148];
	dv[0] *= 562.2;
	dv[1] = dv[0];
	dv[1] = -dv[1]*3.33399;
	dv[1] *= feedtray_pd[147];
	J[336] -= dv[1]*0.00177872643187478;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.62863;
	dv[2] *= feedtray_pd[146];
	J[336] -= dv[2]*0.00177872643187478;
	dv[3] = dv[0];
	J[336] += dv[3]*0.012420366417645;
	dv[0] *= 1.33213;
	dv[0] *= feedtray_pd[144];
	J[336] -= dv[0]*0.00177872643187478;
	J[169] = 1.05;

   /*** derivatives for constraint 18 ***/

	J[84] = feedtray_pd[161];
	dv[0] = -x[17]*41.;
	dv[0] *= feedtray_pd[160];
	J[337] = dv[0]*feedtray_pd[158];
	dv[0] *= feedtray_pd[157];
	dv[0] *= 591.8;
	dv[1] = dv[0];
	dv[1] = -dv[1]*2.79168;
	dv[1] *= feedtray_pd[156];
	J[337] -= dv[1]*0.00168976005407232;
	dv[2] = dv[0];
	dv[2] = -dv[2]*2.83433;
	dv[2] *= feedtray_pd[155];
	J[337] -= dv[2]*0.00168976005407232;
	dv[3] = dv[0];
	J[337] += dv[3]*0.0123117100371747;
	dv[0] *= 1.38091;
	dv[0] *= feedtray_pd[153];
	J[337] -= dv[0]*0.00168976005407232;
	J[172] = 1.05;

   /*** derivatives for constraint 19 ***/

	J[90] = -x[45];
	J[242] = -x[18];
	J[19] = -x[38];
	J[186] = -x[4];
	J[100] = x[46];
	J[249] = x[20];
	J[9] = x[37];
	J[179] = x[2];
	J[389] = -0.7;

   /*** derivatives for constraint 20 ***/

	J[95] = -x[45];
	J[243] = -x[19];
	J[24] = -x[38];
	J[187] = -x[5];
	J[105] = x[46];
	J[250] = x[21];
	J[14] = x[37];
	J[180] = x[3];
	J[390] = -0.3;

   /*** derivatives for constraint 21 ***/

	J[101] = -x[46];
	J[251] = -x[20];
	J[29] = -x[39];
	J[194] = -x[6];
	J[110] = x[47];
	J[257] = x[22];
	J[20] = x[38];
	J[188] = x[4];
	J[395] = -0.7;

   /*** derivatives for constraint 22 ***/

	J[106] = -x[46];
	J[252] = -x[21];
	J[34] = -x[39];
	J[195] = -x[7];
	J[115] = x[47];
	J[258] = x[23];
	J[25] = x[38];
	J[189] = x[5];
	J[396] = -0.3;

   /*** derivatives for constraint 23 ***/

	J[111] = -x[47];
	J[259] = -x[22];
	J[39] = -x[40];
	J[202] = -x[8];
	J[120] = x[48];
	J[265] = x[24];
	J[30] = x[39];
	J[196] = x[6];
	J[401] = -0.7;

   /*** derivatives for constraint 24 ***/

	J[116] = -x[47];
	J[260] = -x[23];
	J[44] = -x[40];
	J[203] = -x[9];
	J[125] = x[48];
	J[266] = x[25];
	J[35] = x[39];
	J[197] = x[7];
	J[402] = -0.3;

   /*** derivatives for constraint 25 ***/

	J[121] = -x[48];
	J[267] = -x[24];
	J[49] = -x[41];
	J[210] = -x[10];
	J[130] = x[49];
	J[273] = x[26];
	J[40] = x[40];
	J[204] = x[8];
	J[407] = -0.7;

   /*** derivatives for constraint 26 ***/

	J[126] = -x[48];
	J[268] = -x[25];
	J[54] = -x[41];
	J[211] = -x[11];
	J[135] = x[49];
	J[274] = x[27];
	J[45] = x[40];
	J[205] = x[9];
	J[408] = -0.3;

   /*** derivatives for constraint 27 ***/

	J[131] = -x[49];
	J[275] = -x[26];
	J[59] = -x[42];
	J[218] = -x[12];
	J[140] = x[50];
	J[281] = x[28];
	J[50] = x[41];
	J[212] = x[10];
	J[413] = -0.7;

   /*** derivatives for constraint 28 ***/

	J[136] = -x[49];
	J[276] = -x[27];
	J[64] = -x[42];
	J[219] = -x[13];
	J[145] = x[50];
	J[282] = x[29];
	J[55] = x[41];
	J[213] = x[11];
	J[414] = -0.3;

   /*** derivatives for constraint 29 ***/

	J[141] = -x[50];
	J[283] = -x[28];
	J[69] = -x[43];
	J[226] = -x[14];
	J[150] = x[51];
	J[289] = x[30];
	J[60] = x[42];
	J[220] = x[12];
	J[419] = -0.7;

   /*** derivatives for constraint 30 ***/

	J[146] = -x[50];
	J[284] = -x[29];
	J[74] = -x[43];
	J[227] = -x[15];
	J[155] = x[51];
	J[290] = x[31];
	J[65] = x[42];
	J[221] = x[13];
	J[420] = -0.3;

   /*** derivatives for constraint 31 ***/

	J[151] = -x[51];
	J[291] = -x[30];
	J[79] = -x[44];
	J[234] = -x[16];
	J[160] = x[52];
	J[297] = x[32];
	J[70] = x[43];
	J[228] = x[14];
	J[425] = -0.7;

   /*** derivatives for constraint 32 ***/

	J[156] = -x[51];
	J[292] = -x[31];
	J[85] = -x[44];
	J[235] = -x[17];
	J[165] = x[52];
	J[298] = x[33];
	J[75] = x[43];
	J[229] = x[15];
	J[426] = -0.3;

   /*** derivatives for constraint 33 ***/

	J[10] = -x[37];
	J[181] = -x[2];
	J[91] = x[45];
	J[244] = x[18];
	J[1] = x[36];
	J[175] = x[0];

   /*** derivatives for constraint 34 ***/

	J[15] = -x[37];
	J[182] = -x[3];
	J[96] = x[45];
	J[245] = x[19];
	J[5] = x[36];
	J[176] = x[1];

   /*** derivatives for constraint 35 ***/

	J[161] = -x[52];
	J[299] = -x[32];
	J[80] = feedtray_pd[162];
	J[341] = x[16];
	J[236] = x[16];

   /*** derivatives for constraint 36 ***/

	J[166] = -x[52];
	J[300] = -x[33];
	J[86] = feedtray_pd[163];
	J[342] = x[17];
	J[237] = x[17];

   /*** derivatives for constraint 37 ***/

	J[343] = -x[62];
	J[340] = -x[63];
	J[238] = 1.;

   /*** derivatives for constraint 38 ***/

	J[6] = -3.13659116407937e-05*feedtray_pd[196];
	dv[0] = -3.13659116407937e-05*x[1];
	dv[1] = dv[0];
	J[306] = dv[1]*feedtray_pd[195];
	dv[1] *= x[53];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[194];
	J[306] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[193];
	J[306] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[190];
	J[306] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[188];
	J[306] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[187];
	J[306] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[306] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[185];
	J[306] -= dv[4]*0.00168976005407232;
	J[306] += dv[0]*feedtray_pd[183];
	dv[0] *= x[53];
	J[306] += dv[0]*feedtray_pd[182];
	dv[0] *= x[53];
	dv[8] = dv[0]*x[53];
	J[306] += dv[0]*feedtray_pd[181];
	J[306] += dv[8]*1.22775e-08;
	J[2] = -3.13659116407937e-05*feedtray_pd[179];
	dv[9] = -3.13659116407937e-05*x[0];
	dv[10] = dv[9];
	J[306] += dv[10]*feedtray_pd[178];
	dv[10] *= x[53];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[177];
	J[306] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[176];
	J[306] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[173];
	J[306] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[171];
	J[306] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[170];
	J[306] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[306] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[168];
	J[306] -= dv[13]*0.00177872643187478;
	J[306] += dv[9]*feedtray_pd[166];
	dv[9] *= x[53];
	J[306] += dv[9]*feedtray_pd[165];
	dv[9] *= x[53];
	dv[17] = dv[9]*x[53];
	J[306] += dv[9]*feedtray_pd[164];
	J[306] += dv[17]*1.7825e-08;
	J[432] = 1.;

   /*** derivatives for constraint 39 ***/

	J[16] = -3.13659116407937e-05*feedtray_pd[230];
	dv[0] = -3.13659116407937e-05*x[3];
	dv[1] = dv[0];
	J[310] = dv[1]*feedtray_pd[229];
	dv[1] *= x[54];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[228];
	J[310] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[227];
	J[310] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[224];
	J[310] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[222];
	J[310] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[221];
	J[310] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[310] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[219];
	J[310] -= dv[4]*0.00168976005407232;
	J[310] += dv[0]*feedtray_pd[217];
	dv[0] *= x[54];
	J[310] += dv[0]*feedtray_pd[216];
	dv[0] *= x[54];
	dv[8] = dv[0]*x[54];
	J[310] += dv[0]*feedtray_pd[215];
	J[310] += dv[8]*1.22775e-08;
	J[11] = -3.13659116407937e-05*feedtray_pd[213];
	dv[9] = -3.13659116407937e-05*x[2];
	dv[10] = dv[9];
	J[310] += dv[10]*feedtray_pd[212];
	dv[10] *= x[54];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[211];
	J[310] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[210];
	J[310] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[207];
	J[310] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[205];
	J[310] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[204];
	J[310] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[310] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[202];
	J[310] -= dv[13]*0.00177872643187478;
	J[310] += dv[9]*feedtray_pd[200];
	dv[9] *= x[54];
	J[310] += dv[9]*feedtray_pd[199];
	dv[9] *= x[54];
	dv[17] = dv[9]*x[54];
	J[310] += dv[9]*feedtray_pd[198];
	J[310] += dv[17]*1.7825e-08;
	J[345] = 1.;

   /*** derivatives for constraint 40 ***/

	J[26] = -3.13659116407937e-05*feedtray_pd[264];
	dv[0] = -3.13659116407937e-05*x[5];
	dv[1] = dv[0];
	J[314] = dv[1]*feedtray_pd[263];
	dv[1] *= x[55];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[262];
	J[314] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[261];
	J[314] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[258];
	J[314] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[256];
	J[314] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[255];
	J[314] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[314] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[253];
	J[314] -= dv[4]*0.00168976005407232;
	J[314] += dv[0]*feedtray_pd[251];
	dv[0] *= x[55];
	J[314] += dv[0]*feedtray_pd[250];
	dv[0] *= x[55];
	dv[8] = dv[0]*x[55];
	J[314] += dv[0]*feedtray_pd[249];
	J[314] += dv[8]*1.22775e-08;
	J[21] = -3.13659116407937e-05*feedtray_pd[247];
	dv[9] = -3.13659116407937e-05*x[4];
	dv[10] = dv[9];
	J[314] += dv[10]*feedtray_pd[246];
	dv[10] *= x[55];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[245];
	J[314] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[244];
	J[314] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[241];
	J[314] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[239];
	J[314] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[238];
	J[314] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[314] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[236];
	J[314] -= dv[13]*0.00177872643187478;
	J[314] += dv[9]*feedtray_pd[234];
	dv[9] *= x[55];
	J[314] += dv[9]*feedtray_pd[233];
	dv[9] *= x[55];
	dv[17] = dv[9]*x[55];
	J[314] += dv[9]*feedtray_pd[232];
	J[314] += dv[17]*1.7825e-08;
	J[347] = 1.;

   /*** derivatives for constraint 41 ***/

	J[36] = -3.13659116407937e-05*feedtray_pd[298];
	dv[0] = -3.13659116407937e-05*x[7];
	dv[1] = dv[0];
	J[318] = dv[1]*feedtray_pd[297];
	dv[1] *= x[56];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[296];
	J[318] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[295];
	J[318] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[292];
	J[318] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[290];
	J[318] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[289];
	J[318] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[318] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[287];
	J[318] -= dv[4]*0.00168976005407232;
	J[318] += dv[0]*feedtray_pd[285];
	dv[0] *= x[56];
	J[318] += dv[0]*feedtray_pd[284];
	dv[0] *= x[56];
	dv[8] = dv[0]*x[56];
	J[318] += dv[0]*feedtray_pd[283];
	J[318] += dv[8]*1.22775e-08;
	J[31] = -3.13659116407937e-05*feedtray_pd[281];
	dv[9] = -3.13659116407937e-05*x[6];
	dv[10] = dv[9];
	J[318] += dv[10]*feedtray_pd[280];
	dv[10] *= x[56];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[279];
	J[318] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[278];
	J[318] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[275];
	J[318] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[273];
	J[318] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[272];
	J[318] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[318] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[270];
	J[318] -= dv[13]*0.00177872643187478;
	J[318] += dv[9]*feedtray_pd[268];
	dv[9] *= x[56];
	J[318] += dv[9]*feedtray_pd[267];
	dv[9] *= x[56];
	dv[17] = dv[9]*x[56];
	J[318] += dv[9]*feedtray_pd[266];
	J[318] += dv[17]*1.7825e-08;
	J[350] = 1.;

   /*** derivatives for constraint 42 ***/

	J[46] = -3.13659116407937e-05*feedtray_pd[332];
	dv[0] = -3.13659116407937e-05*x[9];
	dv[1] = dv[0];
	J[322] = dv[1]*feedtray_pd[331];
	dv[1] *= x[57];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[330];
	J[322] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[329];
	J[322] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[326];
	J[322] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[324];
	J[322] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[323];
	J[322] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[322] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[321];
	J[322] -= dv[4]*0.00168976005407232;
	J[322] += dv[0]*feedtray_pd[319];
	dv[0] *= x[57];
	J[322] += dv[0]*feedtray_pd[318];
	dv[0] *= x[57];
	dv[8] = dv[0]*x[57];
	J[322] += dv[0]*feedtray_pd[317];
	J[322] += dv[8]*1.22775e-08;
	J[41] = -3.13659116407937e-05*feedtray_pd[315];
	dv[9] = -3.13659116407937e-05*x[8];
	dv[10] = dv[9];
	J[322] += dv[10]*feedtray_pd[314];
	dv[10] *= x[57];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[313];
	J[322] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[312];
	J[322] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[309];
	J[322] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[307];
	J[322] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[306];
	J[322] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[322] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[304];
	J[322] -= dv[13]*0.00177872643187478;
	J[322] += dv[9]*feedtray_pd[302];
	dv[9] *= x[57];
	J[322] += dv[9]*feedtray_pd[301];
	dv[9] *= x[57];
	dv[17] = dv[9]*x[57];
	J[322] += dv[9]*feedtray_pd[300];
	J[322] += dv[17]*1.7825e-08;
	J[353] = 1.;

   /*** derivatives for constraint 43 ***/

	J[56] = -3.13659116407937e-05*feedtray_pd[366];
	dv[0] = -3.13659116407937e-05*x[11];
	dv[1] = dv[0];
	J[326] = dv[1]*feedtray_pd[365];
	dv[1] *= x[58];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[364];
	J[326] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[363];
	J[326] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[360];
	J[326] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[358];
	J[326] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[357];
	J[326] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[326] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[355];
	J[326] -= dv[4]*0.00168976005407232;
	J[326] += dv[0]*feedtray_pd[353];
	dv[0] *= x[58];
	J[326] += dv[0]*feedtray_pd[352];
	dv[0] *= x[58];
	dv[8] = dv[0]*x[58];
	J[326] += dv[0]*feedtray_pd[351];
	J[326] += dv[8]*1.22775e-08;
	J[51] = -3.13659116407937e-05*feedtray_pd[349];
	dv[9] = -3.13659116407937e-05*x[10];
	dv[10] = dv[9];
	J[326] += dv[10]*feedtray_pd[348];
	dv[10] *= x[58];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[347];
	J[326] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[346];
	J[326] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[343];
	J[326] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[341];
	J[326] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[340];
	J[326] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[326] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[338];
	J[326] -= dv[13]*0.00177872643187478;
	J[326] += dv[9]*feedtray_pd[336];
	dv[9] *= x[58];
	J[326] += dv[9]*feedtray_pd[335];
	dv[9] *= x[58];
	dv[17] = dv[9]*x[58];
	J[326] += dv[9]*feedtray_pd[334];
	J[326] += dv[17]*1.7825e-08;
	J[356] = 1.;

   /*** derivatives for constraint 44 ***/

	J[66] = -3.13659116407937e-05*feedtray_pd[400];
	dv[0] = -3.13659116407937e-05*x[13];
	dv[1] = dv[0];
	J[330] = dv[1]*feedtray_pd[399];
	dv[1] *= x[59];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[398];
	J[330] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[397];
	J[330] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[394];
	J[330] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[392];
	J[330] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[391];
	J[330] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[330] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[389];
	J[330] -= dv[4]*0.00168976005407232;
	J[330] += dv[0]*feedtray_pd[387];
	dv[0] *= x[59];
	J[330] += dv[0]*feedtray_pd[386];
	dv[0] *= x[59];
	dv[8] = dv[0]*x[59];
	J[330] += dv[0]*feedtray_pd[385];
	J[330] += dv[8]*1.22775e-08;
	J[61] = -3.13659116407937e-05*feedtray_pd[383];
	dv[9] = -3.13659116407937e-05*x[12];
	dv[10] = dv[9];
	J[330] += dv[10]*feedtray_pd[382];
	dv[10] *= x[59];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[381];
	J[330] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[380];
	J[330] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[377];
	J[330] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[375];
	J[330] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[374];
	J[330] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[330] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[372];
	J[330] -= dv[13]*0.00177872643187478;
	J[330] += dv[9]*feedtray_pd[370];
	dv[9] *= x[59];
	J[330] += dv[9]*feedtray_pd[369];
	dv[9] *= x[59];
	dv[17] = dv[9]*x[59];
	J[330] += dv[9]*feedtray_pd[368];
	J[330] += dv[17]*1.7825e-08;
	J[359] = 1.;

   /*** derivatives for constraint 45 ***/

	J[76] = -3.13659116407937e-05*feedtray_pd[434];
	dv[0] = -3.13659116407937e-05*x[15];
	dv[1] = dv[0];
	J[334] = dv[1]*feedtray_pd[433];
	dv[1] *= x[60];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[432];
	J[334] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[431];
	J[334] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[428];
	J[334] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[426];
	J[334] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[425];
	J[334] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[334] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[423];
	J[334] -= dv[4]*0.00168976005407232;
	J[334] += dv[0]*feedtray_pd[421];
	dv[0] *= x[60];
	J[334] += dv[0]*feedtray_pd[420];
	dv[0] *= x[60];
	dv[8] = dv[0]*x[60];
	J[334] += dv[0]*feedtray_pd[419];
	J[334] += dv[8]*1.22775e-08;
	J[71] = -3.13659116407937e-05*feedtray_pd[417];
	dv[9] = -3.13659116407937e-05*x[14];
	dv[10] = dv[9];
	J[334] += dv[10]*feedtray_pd[416];
	dv[10] *= x[60];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[415];
	J[334] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[414];
	J[334] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[411];
	J[334] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[409];
	J[334] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[408];
	J[334] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[334] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[406];
	J[334] -= dv[13]*0.00177872643187478;
	J[334] += dv[9]*feedtray_pd[404];
	dv[9] *= x[60];
	J[334] += dv[9]*feedtray_pd[403];
	dv[9] *= x[60];
	dv[17] = dv[9]*x[60];
	J[334] += dv[9]*feedtray_pd[402];
	J[334] += dv[17]*1.7825e-08;
	J[362] = 1.;

   /*** derivatives for constraint 46 ***/

	J[87] = -3.13659116407937e-05*feedtray_pd[468];
	dv[0] = -3.13659116407937e-05*x[17];
	dv[1] = dv[0];
	J[338] = dv[1]*feedtray_pd[467];
	dv[1] *= x[61];
	dv[1] *= 8.314;
	dv[2] = dv[1];
	dv[2] = -dv[2]*16.75008;
	dv[2] *= feedtray_pd[466];
	J[338] -= dv[2]*0.00168976005407232;
	dv[3] = dv[1];
	dv[3] = -dv[3]*8.50299;
	dv[3] *= feedtray_pd[465];
	J[338] -= dv[3]*0.00168976005407232;
	dv[1] *= 2.071365;
	dv[1] *= feedtray_pd[462];
	J[338] -= dv[1]*0.00168976005407232;
	dv[4] = dv[0];
	dv[4] *= 4920.2252;
	dv[5] = dv[4];
	dv[5] = -dv[5]*2.79168;
	dv[5] *= feedtray_pd[460];
	J[338] -= dv[5]*0.00168976005407232;
	dv[6] = dv[4];
	dv[6] = -dv[6]*2.83433;
	dv[6] *= feedtray_pd[459];
	J[338] -= dv[6]*0.00168976005407232;
	dv[7] = dv[4];
	J[338] += dv[7]*0.0123117100371747;
	dv[4] *= 1.38091;
	dv[4] *= feedtray_pd[457];
	J[338] -= dv[4]*0.00168976005407232;
	J[338] += dv[0]*feedtray_pd[455];
	dv[0] *= x[61];
	J[338] += dv[0]*feedtray_pd[454];
	dv[0] *= x[61];
	dv[8] = dv[0]*x[61];
	J[338] += dv[0]*feedtray_pd[453];
	J[338] += dv[8]*1.22775e-08;
	J[81] = -3.13659116407937e-05*feedtray_pd[451];
	dv[9] = -3.13659116407937e-05*x[16];
	dv[10] = dv[9];
	J[338] += dv[10]*feedtray_pd[450];
	dv[10] *= x[61];
	dv[10] *= 8.314;
	dv[11] = dv[10];
	dv[11] = -dv[11]*20.00394;
	dv[11] *= feedtray_pd[449];
	J[338] -= dv[11]*0.00177872643187478;
	dv[12] = dv[10];
	dv[12] = -dv[12]*7.88589;
	dv[12] *= feedtray_pd[448];
	J[338] -= dv[12]*0.00177872643187478;
	dv[10] *= 1.998195;
	dv[10] *= feedtray_pd[445];
	J[338] -= dv[10]*0.00177872643187478;
	dv[13] = dv[9];
	dv[13] *= 4674.1308;
	dv[14] = dv[13];
	dv[14] = -dv[14]*3.33399;
	dv[14] *= feedtray_pd[443];
	J[338] -= dv[14]*0.00177872643187478;
	dv[15] = dv[13];
	dv[15] = -dv[15]*2.62863;
	dv[15] *= feedtray_pd[442];
	J[338] -= dv[15]*0.00177872643187478;
	dv[16] = dv[13];
	J[338] += dv[16]*0.012420366417645;
	dv[13] *= 1.33213;
	dv[13] *= feedtray_pd[440];
	J[338] -= dv[13]*0.00177872643187478;
	J[338] += dv[9]*feedtray_pd[438];
	dv[9] *= x[61];
	J[338] += dv[9]*feedtray_pd[437];
	dv[9] *= x[61];
	dv[17] = dv[9]*x[61];
	J[338] += dv[9]*feedtray_pd[436];
	J[338] += dv[17]*1.7825e-08;
	J[365] = 1.;

   /*** derivatives for constraint 47 ***/

	J[97] = -3.13659116407937e-05*feedtray_pd[478];
	dv[0] = -3.13659116407937e-05*x[19];
	J[307] = dv[0]*feedtray_pd[477];
	dv[0] *= x[53];
	J[307] += dv[0]*feedtray_pd[476];
	dv[0] *= x[53];
	dv[1] = dv[0]*x[53];
	J[307] += dv[0]*feedtray_pd[475];
	J[307] += dv[1]*1.22775e-08;
	J[92] = -3.13659116407937e-05*feedtray_pd[473];
	dv[2] = -3.13659116407937e-05*x[18];
	J[307] += dv[2]*feedtray_pd[472];
	dv[2] *= x[53];
	J[307] += dv[2]*feedtray_pd[471];
	dv[2] *= x[53];
	dv[3] = dv[2]*x[53];
	J[307] += dv[2]*feedtray_pd[470];
	J[307] += dv[3]*1.7825e-08;
	J[367] = 1.;

   /*** derivatives for constraint 48 ***/

	J[107] = -3.13659116407937e-05*feedtray_pd[488];
	dv[0] = -3.13659116407937e-05*x[21];
	J[311] = dv[0]*feedtray_pd[487];
	dv[0] *= x[54];
	J[311] += dv[0]*feedtray_pd[486];
	dv[0] *= x[54];
	dv[1] = dv[0]*x[54];
	J[311] += dv[0]*feedtray_pd[485];
	J[311] += dv[1]*1.22775e-08;
	J[102] = -3.13659116407937e-05*feedtray_pd[483];
	dv[2] = -3.13659116407937e-05*x[20];
	J[311] += dv[2]*feedtray_pd[482];
	dv[2] *= x[54];
	J[311] += dv[2]*feedtray_pd[481];
	dv[2] *= x[54];
	dv[3] = dv[2]*x[54];
	J[311] += dv[2]*feedtray_pd[480];
	J[311] += dv[3]*1.7825e-08;
	J[369] = 1.;

   /*** derivatives for constraint 49 ***/

	J[117] = -3.13659116407937e-05*feedtray_pd[498];
	dv[0] = -3.13659116407937e-05*x[23];
	J[315] = dv[0]*feedtray_pd[497];
	dv[0] *= x[55];
	J[315] += dv[0]*feedtray_pd[496];
	dv[0] *= x[55];
	dv[1] = dv[0]*x[55];
	J[315] += dv[0]*feedtray_pd[495];
	J[315] += dv[1]*1.22775e-08;
	J[112] = -3.13659116407937e-05*feedtray_pd[493];
	dv[2] = -3.13659116407937e-05*x[22];
	J[315] += dv[2]*feedtray_pd[492];
	dv[2] *= x[55];
	J[315] += dv[2]*feedtray_pd[491];
	dv[2] *= x[55];
	dv[3] = dv[2]*x[55];
	J[315] += dv[2]*feedtray_pd[490];
	J[315] += dv[3]*1.7825e-08;
	J[372] = 1.;

   /*** derivatives for constraint 50 ***/

	J[127] = -3.13659116407937e-05*feedtray_pd[508];
	dv[0] = -3.13659116407937e-05*x[25];
	J[319] = dv[0]*feedtray_pd[507];
	dv[0] *= x[56];
	J[319] += dv[0]*feedtray_pd[506];
	dv[0] *= x[56];
	dv[1] = dv[0]*x[56];
	J[319] += dv[0]*feedtray_pd[505];
	J[319] += dv[1]*1.22775e-08;
	J[122] = -3.13659116407937e-05*feedtray_pd[503];
	dv[2] = -3.13659116407937e-05*x[24];
	J[319] += dv[2]*feedtray_pd[502];
	dv[2] *= x[56];
	J[319] += dv[2]*feedtray_pd[501];
	dv[2] *= x[56];
	dv[3] = dv[2]*x[56];
	J[319] += dv[2]*feedtray_pd[500];
	J[319] += dv[3]*1.7825e-08;
	J[375] = 1.;

   /*** derivatives for constraint 51 ***/

	J[137] = -3.13659116407937e-05*feedtray_pd[518];
	dv[0] = -3.13659116407937e-05*x[27];
	J[323] = dv[0]*feedtray_pd[517];
	dv[0] *= x[57];
	J[323] += dv[0]*feedtray_pd[516];
	dv[0] *= x[57];
	dv[1] = dv[0]*x[57];
	J[323] += dv[0]*feedtray_pd[515];
	J[323] += dv[1]*1.22775e-08;
	J[132] = -3.13659116407937e-05*feedtray_pd[513];
	dv[2] = -3.13659116407937e-05*x[26];
	J[323] += dv[2]*feedtray_pd[512];
	dv[2] *= x[57];
	J[323] += dv[2]*feedtray_pd[511];
	dv[2] *= x[57];
	dv[3] = dv[2]*x[57];
	J[323] += dv[2]*feedtray_pd[510];
	J[323] += dv[3]*1.7825e-08;
	J[378] = 1.;

   /*** derivatives for constraint 52 ***/

	J[147] = -3.13659116407937e-05*feedtray_pd[528];
	dv[0] = -3.13659116407937e-05*x[29];
	J[327] = dv[0]*feedtray_pd[527];
	dv[0] *= x[58];
	J[327] += dv[0]*feedtray_pd[526];
	dv[0] *= x[58];
	dv[1] = dv[0]*x[58];
	J[327] += dv[0]*feedtray_pd[525];
	J[327] += dv[1]*1.22775e-08;
	J[142] = -3.13659116407937e-05*feedtray_pd[523];
	dv[2] = -3.13659116407937e-05*x[28];
	J[327] += dv[2]*feedtray_pd[522];
	dv[2] *= x[58];
	J[327] += dv[2]*feedtray_pd[521];
	dv[2] *= x[58];
	dv[3] = dv[2]*x[58];
	J[327] += dv[2]*feedtray_pd[520];
	J[327] += dv[3]*1.7825e-08;
	J[381] = 1.;

   /*** derivatives for constraint 53 ***/

	J[157] = -3.13659116407937e-05*feedtray_pd[538];
	dv[0] = -3.13659116407937e-05*x[31];
	J[331] = dv[0]*feedtray_pd[537];
	dv[0] *= x[59];
	J[331] += dv[0]*feedtray_pd[536];
	dv[0] *= x[59];
	dv[1] = dv[0]*x[59];
	J[331] += dv[0]*feedtray_pd[535];
	J[331] += dv[1]*1.22775e-08;
	J[152] = -3.13659116407937e-05*feedtray_pd[533];
	dv[2] = -3.13659116407937e-05*x[30];
	J[331] += dv[2]*feedtray_pd[532];
	dv[2] *= x[59];
	J[331] += dv[2]*feedtray_pd[531];
	dv[2] *= x[59];
	dv[3] = dv[2]*x[59];
	J[331] += dv[2]*feedtray_pd[530];
	J[331] += dv[3]*1.7825e-08;
	J[384] = 1.;

   /*** derivatives for constraint 54 ***/

	J[167] = -3.13659116407937e-05*feedtray_pd[548];
	dv[0] = -3.13659116407937e-05*x[33];
	J[335] = dv[0]*feedtray_pd[547];
	dv[0] *= x[60];
	J[335] += dv[0]*feedtray_pd[546];
	dv[0] *= x[60];
	dv[1] = dv[0]*x[60];
	J[335] += dv[0]*feedtray_pd[545];
	J[335] += dv[1]*1.22775e-08;
	J[162] = -3.13659116407937e-05*feedtray_pd[543];
	dv[2] = -3.13659116407937e-05*x[32];
	J[335] += dv[2]*feedtray_pd[542];
	dv[2] *= x[60];
	J[335] += dv[2]*feedtray_pd[541];
	dv[2] *= x[60];
	dv[3] = dv[2]*x[60];
	J[335] += dv[2]*feedtray_pd[540];
	J[335] += dv[3]*1.7825e-08;
	J[387] = 1.;

   /*** derivatives for constraint 55 ***/

	J[173] = -3.13659116407937e-05*feedtray_pd[558];
	dv[0] = -3.13659116407937e-05*x[35];
	J[339] = dv[0]*feedtray_pd[557];
	dv[0] *= x[61];
	J[339] += dv[0]*feedtray_pd[556];
	dv[0] *= x[61];
	dv[1] = dv[0]*x[61];
	J[339] += dv[0]*feedtray_pd[555];
	J[339] += dv[1]*1.22775e-08;
	J[170] = -3.13659116407937e-05*feedtray_pd[553];
	dv[2] = -3.13659116407937e-05*x[34];
	J[339] += dv[2]*feedtray_pd[552];
	dv[2] *= x[61];
	J[339] += dv[2]*feedtray_pd[551];
	dv[2] *= x[61];
	dv[3] = dv[2]*x[61];
	J[339] += dv[2]*feedtray_pd[550];
	J[339] += dv[3]*1.7825e-08;
	J[433] = 1.;

   /*** derivatives for constraint 56 ***/

	J[368] = -x[45];
	J[246] = -x[72];
	J[348] = -x[38];
	J[190] = -x[65];
	J[370] = x[46];
	J[253] = x[73];
	J[346] = x[37];
	J[183] = x[64];
	J[391] = 0.999444137682208;

   /*** derivatives for constraint 57 ***/

	J[371] = -x[46];
	J[254] = -x[73];
	J[351] = -x[39];
	J[198] = -x[66];
	J[373] = x[47];
	J[261] = x[74];
	J[349] = x[38];
	J[191] = x[65];
	J[397] = 0.999444137682208;

   /*** derivatives for constraint 58 ***/

	J[374] = -x[47];
	J[262] = -x[74];
	J[354] = -x[40];
	J[206] = -x[67];
	J[376] = x[48];
	J[269] = x[75];
	J[352] = x[39];
	J[199] = x[66];
	J[403] = 0.999444137682208;

   /*** derivatives for constraint 59 ***/

	J[377] = -x[48];
	J[270] = -x[75];
	J[357] = -x[41];
	J[214] = -x[68];
	J[379] = x[49];
	J[277] = x[76];
	J[355] = x[40];
	J[207] = x[67];
	J[409] = 0.999444137682208;

   /*** derivatives for constraint 60 ***/

	J[380] = -x[49];
	J[278] = -x[76];
	J[360] = -x[42];
	J[222] = -x[69];
	J[382] = x[50];
	J[285] = x[77];
	J[358] = x[41];
	J[215] = x[68];
	J[415] = 0.999444137682208;

   /*** derivatives for constraint 61 ***/

	J[383] = -x[50];
	J[286] = -x[77];
	J[363] = -x[43];
	J[230] = -x[70];
	J[385] = x[51];
	J[293] = x[78];
	J[361] = x[42];
	J[223] = x[69];
	J[421] = 0.999444137682208;

   /*** derivatives for constraint 62 ***/

	J[386] = -x[51];
	J[294] = -x[78];
	J[366] = -x[44];
	J[239] = -x[71];
	J[388] = x[52];
	J[301] = x[79];
	J[364] = x[43];
	J[231] = x[70];
	J[427] = 0.999444137682208;

   /*** derivatives for constraint 63 ***/

	J[3] = -1.;
	J[7] = -1.;
	J[93] = 1.;
	J[98] = 1.;

   /*** derivatives for constraint 64 ***/

	J[12] = -1.;
	J[17] = -1.;
	J[103] = 1.;
	J[108] = 1.;

   /*** derivatives for constraint 65 ***/

	J[22] = -1.;
	J[27] = -1.;
	J[113] = 1.;
	J[118] = 1.;

   /*** derivatives for constraint 66 ***/

	J[32] = -1.;
	J[37] = -1.;
	J[123] = 1.;
	J[128] = 1.;

   /*** derivatives for constraint 67 ***/

	J[42] = -1.;
	J[47] = -1.;
	J[133] = 1.;
	J[138] = 1.;

   /*** derivatives for constraint 68 ***/

	J[52] = -1.;
	J[57] = -1.;
	J[143] = 1.;
	J[148] = 1.;

   /*** derivatives for constraint 69 ***/

	J[62] = -1.;
	J[67] = -1.;
	J[153] = 1.;
	J[158] = 1.;

   /*** derivatives for constraint 70 ***/

	J[72] = -1.;
	J[77] = -1.;
	J[163] = 1.;
	J[168] = 1.;

   /*** derivatives for constraint 71 ***/

	J[82] = -1.;
	J[88] = -1.;
	J[171] = 1.;
	J[174] = 1.;

   /*** derivatives for constraint 72 ***/

	J[184] = 1.;
	J[192] = -1.;
	J[247] = -1.;
	J[255] = 1.;
	J[392] = -1.;

   /*** derivatives for constraint 73 ***/

	J[193] = 1.;
	J[200] = -1.;
	J[256] = -1.;
	J[263] = 1.;
	J[398] = -1.;

   /*** derivatives for constraint 74 ***/

	J[201] = 1.;
	J[208] = -1.;
	J[264] = -1.;
	J[271] = 1.;
	J[404] = -1.;

   /*** derivatives for constraint 75 ***/

	J[209] = 1.;
	J[216] = -1.;
	J[272] = -1.;
	J[279] = 1.;
	J[410] = -1.;

   /*** derivatives for constraint 76 ***/

	J[217] = 1.;
	J[224] = -1.;
	J[280] = -1.;
	J[287] = 1.;
	J[416] = -1.;

   /*** derivatives for constraint 77 ***/

	J[225] = 1.;
	J[232] = -1.;
	J[288] = -1.;
	J[295] = 1.;
	J[422] = -1.;

   /*** derivatives for constraint 78 ***/

	J[233] = 1.;
	J[240] = -1.;
	J[296] = -1.;
	J[302] = 1.;
	J[428] = -1.;

   /*** derivatives for constraint 79 ***/

	J[177] = 1.;
	J[185] = -1.;
	J[248] = 1.;

   /*** derivatives for constraint 80 ***/

	J[241] = 1.;
	J[303] = -1.;
	J[344] = 1.;

   /*** derivatives for constraint 81 ***/

	J[178] = 1.;
	J[431] = -1.;

   /*** derivatives for constraint 82 ***/

	J[83] = 1.;

   /*** derivatives for constraint 83 ***/

	J[393] = 1.;
	J[399] = 1.;
	J[405] = 1.;
	J[411] = 1.;
	J[417] = 1.;
	J[423] = 1.;
	J[429] = 1.;

   /*** derivatives for constraint 84 ***/

	J[434] = 1.;
	J[436] = 1.;
	J[438] = 1.;
	J[440] = 1.;
	J[442] = 1.;
	J[444] = 1.;
	J[446] = 1.;

   /*** derivatives for constraint 85 ***/

	J[394] = 1.;
	J[435] = -100.;

   /*** derivatives for constraint 86 ***/

	J[400] = 1.;
	J[437] = -100.;

   /*** derivatives for constraint 87 ***/

	J[406] = 1.;
	J[439] = -100.;

   /*** derivatives for constraint 88 ***/

	J[412] = 1.;
	J[441] = -100.;

   /*** derivatives for constraint 89 ***/

	J[418] = 1.;
	J[443] = -100.;

   /*** derivatives for constraint 90 ***/

	J[424] = 1.;
	J[445] = -100.;

   /*** derivatives for constraint 91 ***/

	J[430] = 1.;
	J[447] = -100.;
	}
}
#ifdef __cplusplus
	}
#endif
