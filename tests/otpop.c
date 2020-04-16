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
 fint otpop_auxcom_[1] = { 33 /* nlc */ };
 fint otpop_funcom_[360] = {
	103 /* nvar */,
	1 /* nobj */,
	76 /* ncon */,
	250 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,
	21,
	25,
	29,
	33,
	37,
	41,
	45,
	49,
	53,
	57,
	61,
	64,
	66,
	69,
	72,
	75,
	78,
	81,
	84,
	87,
	90,
	93,
	96,
	99,
	102,
	105,
	108,
	111,
	114,
	116,
	119,
	122,
	125,
	128,
	131,
	134,
	137,
	140,
	143,
	146,
	149,
	152,
	155,
	158,
	161,
	163,
	165,
	167,
	169,
	171,
	173,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	189,
	191,
	193,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	214,
	217,
	220,
	223,
	226,
	229,
	232,
	235,
	238,
	241,
	242,
	243,
	244,
	245,
	246,
	247,
	248,
	249,
	250,
	251,

	/* rownos */
	1,
	60,
	61,
	62,
	2,
	61,
	62,
	63,
	3,
	62,
	63,
	64,
	4,
	63,
	64,
	65,
	5,
	64,
	65,
	66,
	6,
	65,
	66,
	67,
	7,
	66,
	67,
	68,
	8,
	67,
	68,
	69,
	9,
	68,
	69,
	70,
	10,
	69,
	70,
	71,
	11,
	70,
	71,
	72,
	12,
	71,
	72,
	73,
	13,
	72,
	73,
	74,
	14,
	73,
	74,
	75,
	15,
	74,
	75,
	76,
	16,
	75,
	76,
	17,
	76,
	1,
	18,
	34,
	2,
	19,
	35,
	3,
	20,
	36,
	4,
	21,
	37,
	5,
	22,
	38,
	6,
	23,
	39,
	7,
	24,
	40,
	8,
	25,
	41,
	9,
	26,
	42,
	10,
	27,
	43,
	11,
	28,
	44,
	12,
	29,
	45,
	13,
	30,
	46,
	14,
	31,
	47,
	15,
	32,
	48,
	16,
	33,
	49,
	1,
	18,
	2,
	18,
	19,
	3,
	19,
	20,
	4,
	20,
	21,
	5,
	21,
	22,
	6,
	22,
	23,
	7,
	23,
	24,
	8,
	24,
	25,
	9,
	25,
	26,
	10,
	26,
	27,
	11,
	27,
	28,
	12,
	28,
	29,
	13,
	29,
	30,
	14,
	30,
	31,
	15,
	31,
	32,
	16,
	32,
	33,
	17,
	33,
	18,
	57,
	19,
	58,
	20,
	59,
	21,
	60,
	22,
	61,
	23,
	62,
	24,
	63,
	25,
	64,
	26,
	65,
	27,
	66,
	28,
	67,
	29,
	68,
	30,
	69,
	31,
	70,
	32,
	71,
	33,
	72,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	17,
	50,
	51,
	52,
	53,
	52,
	53,
	54,
	53,
	54,
	55,
	54,
	55,
	56,
	55,
	56,
	57,
	56,
	57,
	58,
	57,
	58,
	59,
	58,
	59,
	60,
	59,
	60,
	61,
	51,
	52,
	53,
	54,
	55,
	56,
	73,
	74,
	75,
	76 };

 real otpop_boundc_[1+206+152] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		10.,
		10.,
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
		-1.7e308,
		1.7e308,
		29.4,
		29.4,
		0.,
		35.25,
		0.,
		38.25,
		0.,
		41.25,
		0.,
		44.25,
		0.,
		47.25,
		0.,
		50.25,
		0.,
		51.15,
		0.,
		52.05,
		0.,
		52.95,
		0.,
		53.85,
		0.,
		54.75,
		0.,
		55.65,
		0.,
		56.55,
		0.,
		57.45,
		0.,
		58.35,
		0.,
		59.25,
		-1.7e308,
		1.7e308,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		4.,
		4.,
		7.,
		7.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		88.2,
		88.2,
		91.728,
		91.728,
		95.39712,
		95.39712,
		99.2130048,
		99.2130048,
		103.181524992,
		103.181524992,
		107.30878599168,
		107.30878599168,
		111.601137431347,
		111.601137431347,
		116.065182928601,
		116.065182928601,
		120.707790245745,
		120.707790245745,
		125.536101855575,
		125.536101855575,
		130.557545929798,
		130.557545929798,
		135.77984776699,
		135.77984776699,
		141.21104167767,
		141.21104167767,
		146.859483344776,
		146.859483344776,
		152.733862678567,
		152.733862678567,
		158.84321718571,
		158.84321718571,
		165.196945873138,
		165.196945873138,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real otpop_x0comn_[103] = {
		10.,
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
		29.4,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		3.5,
		4.,
		7.,
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

 static real otpop_pd[83];
static real otpop_old_x[103];
static int otpop_xkind = -1;

 static int
otpop_xcheck(real *x)
{
	real *x1 = otpop_old_x, *xe = x + 103;
	errno = 0;
	if (otpop_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	otpop_xkind = 0;
	return 1;
	}
 real
otpop_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (otpop_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 10. - x[0];
	v[1] = v[0] * v[0];
	otpop_pd[66] = v[0] + v[0];
	v[0] = 10.2 - x[1];
	v[2] = v[0] * v[0];
	otpop_pd[67] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 10.404 - x[2];
	v[0] = v[2] * v[2];
	otpop_pd[68] = v[2] + v[2];
	v[1] += v[0];
	v[0] = 10.61208 - x[3];
	v[2] = v[0] * v[0];
	otpop_pd[69] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 10.8243216 - x[4];
	v[0] = v[2] * v[2];
	otpop_pd[70] = v[2] + v[2];
	v[1] += v[0];
	v[0] = 11.040808032 - x[5];
	v[2] = v[0] * v[0];
	otpop_pd[71] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 11.26162419264 - x[6];
	v[0] = v[2] * v[2];
	otpop_pd[72] = v[2] + v[2];
	v[1] += v[0];
	v[0] = 11.4868566764928 - x[7];
	v[2] = v[0] * v[0];
	otpop_pd[73] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 11.7165938100227 - x[8];
	v[0] = v[2] * v[2];
	otpop_pd[74] = v[2] + v[2];
	v[1] += v[0];
	v[0] = 11.9509256862231 - x[9];
	v[2] = v[0] * v[0];
	otpop_pd[75] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 12.1899441999476 - x[10];
	v[0] = v[2] * v[2];
	otpop_pd[76] = v[2] + v[2];
	v[1] += v[0];
	v[0] = 12.4337430839465 - x[11];
	v[2] = v[0] * v[0];
	otpop_pd[77] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 12.6824179456255 - x[12];
	v[0] = v[2] * v[2];
	otpop_pd[78] = v[2] + v[2];
	v[1] += v[0];
	v[0] = 12.936066304538 - x[13];
	v[2] = v[0] * v[0];
	otpop_pd[79] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 13.1947876306287 - x[14];
	v[0] = v[2] * v[2];
	otpop_pd[80] = v[2] + v[2];
	v[1] += v[0];
	v[0] = 13.4586833832413 - x[15];
	v[2] = v[0] * v[0];
	otpop_pd[81] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 13.7278570509061 - x[16];
	v[0] = v[2] * v[2];
	otpop_pd[82] = v[2] + v[2];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[16] = -otpop_pd[82];
	g[15] = -otpop_pd[81];
	g[14] = -otpop_pd[80];
	g[13] = -otpop_pd[79];
	g[12] = -otpop_pd[78];
	g[11] = -otpop_pd[77];
	g[10] = -otpop_pd[76];
	g[9] = -otpop_pd[75];
	g[8] = -otpop_pd[74];
	g[7] = -otpop_pd[73];
	g[6] = -otpop_pd[72];
	g[5] = -otpop_pd[71];
	g[4] = -otpop_pd[70];
	g[3] = -otpop_pd[69];
	g[2] = -otpop_pd[68];
	g[1] = -otpop_pd[67];
	g[0] = -otpop_pd[66];
	}

	return v[1];
}

 void
otpop_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (otpop_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	otpop_pd[1] = pow(x[0], 0.2);
	if (errno) in_trouble2("pow",x[0],0.2);
	if (x[0] > 0.) {
	otpop_pd[0] = 0.2*(otpop_pd[1]/x[0]);
	} else if (0.2 > 1.) {
	otpop_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.2);
	}
	v[1] = otpop_pd[1] * x[33];
	t1 = v[1] + -x[17];
	t1 += x[66];
	c[0] = t1;

  /***  constraint 2  ***/

	otpop_pd[3] = pow(x[1], 0.2);
	if (errno) in_trouble2("pow",x[1],0.2);
	if (x[1] > 0.) {
	otpop_pd[2] = 0.2*(otpop_pd[3]/x[1]);
	} else if (0.2 > 1.) {
	otpop_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.2);
	}
	v[1] = otpop_pd[3] * x[34];
	t1 = v[1] + -x[18];
	t1 += x[67];
	c[1] = t1;

  /***  constraint 3  ***/

	otpop_pd[5] = pow(x[2], 0.2);
	if (errno) in_trouble2("pow",x[2],0.2);
	if (x[2] > 0.) {
	otpop_pd[4] = 0.2*(otpop_pd[5]/x[2]);
	} else if (0.2 > 1.) {
	otpop_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.2);
	}
	v[1] = otpop_pd[5] * x[35];
	t1 = v[1] + -x[19];
	t1 += x[68];
	c[2] = t1;

  /***  constraint 4  ***/

	otpop_pd[7] = pow(x[3], 0.2);
	if (errno) in_trouble2("pow",x[3],0.2);
	if (x[3] > 0.) {
	otpop_pd[6] = 0.2*(otpop_pd[7]/x[3]);
	} else if (0.2 > 1.) {
	otpop_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.2);
	}
	v[1] = otpop_pd[7] * x[36];
	t1 = v[1] + -x[20];
	t1 += x[69];
	c[3] = t1;

  /***  constraint 5  ***/

	otpop_pd[9] = pow(x[4], 0.2);
	if (errno) in_trouble2("pow",x[4],0.2);
	if (x[4] > 0.) {
	otpop_pd[8] = 0.2*(otpop_pd[9]/x[4]);
	} else if (0.2 > 1.) {
	otpop_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.2);
	}
	v[1] = otpop_pd[9] * x[37];
	t1 = v[1] + -x[21];
	t1 += x[70];
	c[4] = t1;

  /***  constraint 6  ***/

	otpop_pd[11] = pow(x[5], 0.2);
	if (errno) in_trouble2("pow",x[5],0.2);
	if (x[5] > 0.) {
	otpop_pd[10] = 0.2*(otpop_pd[11]/x[5]);
	} else if (0.2 > 1.) {
	otpop_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.2);
	}
	v[1] = otpop_pd[11] * x[38];
	t1 = v[1] + -x[22];
	t1 += x[71];
	c[5] = t1;

  /***  constraint 7  ***/

	otpop_pd[13] = pow(x[6], 0.2);
	if (errno) in_trouble2("pow",x[6],0.2);
	if (x[6] > 0.) {
	otpop_pd[12] = 0.2*(otpop_pd[13]/x[6]);
	} else if (0.2 > 1.) {
	otpop_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.2);
	}
	v[1] = otpop_pd[13] * x[39];
	t1 = v[1] + -x[23];
	t1 += x[72];
	c[6] = t1;

  /***  constraint 8  ***/

	otpop_pd[15] = pow(x[7], 0.2);
	if (errno) in_trouble2("pow",x[7],0.2);
	if (x[7] > 0.) {
	otpop_pd[14] = 0.2*(otpop_pd[15]/x[7]);
	} else if (0.2 > 1.) {
	otpop_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.2);
	}
	v[1] = otpop_pd[15] * x[40];
	t1 = v[1] + -x[24];
	t1 += x[73];
	c[7] = t1;

  /***  constraint 9  ***/

	otpop_pd[17] = pow(x[8], 0.2);
	if (errno) in_trouble2("pow",x[8],0.2);
	if (x[8] > 0.) {
	otpop_pd[16] = 0.2*(otpop_pd[17]/x[8]);
	} else if (0.2 > 1.) {
	otpop_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],0.2);
	}
	v[1] = otpop_pd[17] * x[41];
	t1 = v[1] + -x[25];
	t1 += x[74];
	c[8] = t1;

  /***  constraint 10  ***/

	otpop_pd[19] = pow(x[9], 0.2);
	if (errno) in_trouble2("pow",x[9],0.2);
	if (x[9] > 0.) {
	otpop_pd[18] = 0.2*(otpop_pd[19]/x[9]);
	} else if (0.2 > 1.) {
	otpop_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],0.2);
	}
	v[1] = otpop_pd[19] * x[42];
	t1 = v[1] + -x[26];
	t1 += x[75];
	c[9] = t1;

  /***  constraint 11  ***/

	otpop_pd[21] = pow(x[10], 0.2);
	if (errno) in_trouble2("pow",x[10],0.2);
	if (x[10] > 0.) {
	otpop_pd[20] = 0.2*(otpop_pd[21]/x[10]);
	} else if (0.2 > 1.) {
	otpop_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],0.2);
	}
	v[1] = otpop_pd[21] * x[43];
	t1 = v[1] + -x[27];
	t1 += x[76];
	c[10] = t1;

  /***  constraint 12  ***/

	otpop_pd[23] = pow(x[11], 0.2);
	if (errno) in_trouble2("pow",x[11],0.2);
	if (x[11] > 0.) {
	otpop_pd[22] = 0.2*(otpop_pd[23]/x[11]);
	} else if (0.2 > 1.) {
	otpop_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],0.2);
	}
	v[1] = otpop_pd[23] * x[44];
	t1 = v[1] + -x[28];
	t1 += x[77];
	c[11] = t1;

  /***  constraint 13  ***/

	otpop_pd[25] = pow(x[12], 0.2);
	if (errno) in_trouble2("pow",x[12],0.2);
	if (x[12] > 0.) {
	otpop_pd[24] = 0.2*(otpop_pd[25]/x[12]);
	} else if (0.2 > 1.) {
	otpop_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],0.2);
	}
	v[1] = otpop_pd[25] * x[45];
	t1 = v[1] + -x[29];
	t1 += x[78];
	c[12] = t1;

  /***  constraint 14  ***/

	otpop_pd[27] = pow(x[13], 0.2);
	if (errno) in_trouble2("pow",x[13],0.2);
	if (x[13] > 0.) {
	otpop_pd[26] = 0.2*(otpop_pd[27]/x[13]);
	} else if (0.2 > 1.) {
	otpop_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],0.2);
	}
	v[1] = otpop_pd[27] * x[46];
	t1 = v[1] + -x[30];
	t1 += x[79];
	c[13] = t1;

  /***  constraint 15  ***/

	otpop_pd[29] = pow(x[14], 0.2);
	if (errno) in_trouble2("pow",x[14],0.2);
	if (x[14] > 0.) {
	otpop_pd[28] = 0.2*(otpop_pd[29]/x[14]);
	} else if (0.2 > 1.) {
	otpop_pd[28] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],0.2);
	}
	v[1] = otpop_pd[29] * x[47];
	t1 = v[1] + -x[31];
	t1 += x[80];
	c[14] = t1;

  /***  constraint 16  ***/

	otpop_pd[31] = pow(x[15], 0.2);
	if (errno) in_trouble2("pow",x[15],0.2);
	if (x[15] > 0.) {
	otpop_pd[30] = 0.2*(otpop_pd[31]/x[15]);
	} else if (0.2 > 1.) {
	otpop_pd[30] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],0.2);
	}
	v[1] = otpop_pd[31] * x[48];
	t1 = v[1] + -x[32];
	t1 += x[81];
	c[15] = t1;

  /***  constraint 17  ***/

	otpop_pd[33] = pow(x[16], 0.2);
	if (errno) in_trouble2("pow",x[16],0.2);
	if (x[16] > 0.) {
	otpop_pd[32] = 0.2*(otpop_pd[33]/x[16]);
	} else if (0.2 > 1.) {
	otpop_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],0.2);
	}
	v[1] = otpop_pd[33] * x[49];
	t1 = v[1] + x[82];
	t1 += -x[83];
	c[16] = t1;

  /***  constraint 18  ***/

	otpop_pd[34] = -0.00429596009984836 * x[17];
	otpop_pd[35] = x[50] + -3.;
	v[1] = otpop_pd[34] * otpop_pd[35];
	t1 = v[1] + -x[33];
	t1 += x[34];
	c[17] = t1;

  /***  constraint 19  ***/

	otpop_pd[36] = -0.00429596009984836 * x[18];
	otpop_pd[37] = x[51] + -3.;
	v[1] = otpop_pd[36] * otpop_pd[37];
	t1 = v[1] + -x[34];
	t1 += x[35];
	c[18] = t1;

  /***  constraint 20  ***/

	otpop_pd[38] = -0.00429596009984836 * x[19];
	otpop_pd[39] = x[52] + -3.;
	v[1] = otpop_pd[38] * otpop_pd[39];
	t1 = v[1] + -x[35];
	t1 += x[36];
	c[19] = t1;

  /***  constraint 21  ***/

	otpop_pd[40] = -0.00429596009984836 * x[20];
	otpop_pd[41] = x[53] + -3.;
	v[1] = otpop_pd[40] * otpop_pd[41];
	t1 = v[1] + -x[36];
	t1 += x[37];
	c[20] = t1;

  /***  constraint 22  ***/

	otpop_pd[42] = -0.00429596009984836 * x[21];
	otpop_pd[43] = x[54] + -3.;
	v[1] = otpop_pd[42] * otpop_pd[43];
	t1 = v[1] + -x[37];
	t1 += x[38];
	c[21] = t1;

  /***  constraint 23  ***/

	otpop_pd[44] = -0.00429596009984836 * x[22];
	otpop_pd[45] = x[55] + -3.;
	v[1] = otpop_pd[44] * otpop_pd[45];
	t1 = v[1] + -x[38];
	t1 += x[39];
	c[22] = t1;

  /***  constraint 24  ***/

	otpop_pd[46] = -0.00429596009984836 * x[23];
	otpop_pd[47] = x[56] + -3.;
	v[1] = otpop_pd[46] * otpop_pd[47];
	t1 = v[1] + -x[39];
	t1 += x[40];
	c[23] = t1;

  /***  constraint 25  ***/

	otpop_pd[48] = -0.00429596009984836 * x[24];
	otpop_pd[49] = x[57] + -3.;
	v[1] = otpop_pd[48] * otpop_pd[49];
	t1 = v[1] + -x[40];
	t1 += x[41];
	c[24] = t1;

  /***  constraint 26  ***/

	otpop_pd[50] = -0.00429596009984836 * x[25];
	otpop_pd[51] = x[58] + -3.;
	v[1] = otpop_pd[50] * otpop_pd[51];
	t1 = v[1] + -x[41];
	t1 += x[42];
	c[25] = t1;

  /***  constraint 27  ***/

	otpop_pd[52] = -0.00429596009984836 * x[26];
	otpop_pd[53] = x[59] + -3.;
	v[1] = otpop_pd[52] * otpop_pd[53];
	t1 = v[1] + -x[42];
	t1 += x[43];
	c[26] = t1;

  /***  constraint 28  ***/

	otpop_pd[54] = -0.00429596009984836 * x[27];
	otpop_pd[55] = x[60] + -3.;
	v[1] = otpop_pd[54] * otpop_pd[55];
	t1 = v[1] + -x[43];
	t1 += x[44];
	c[27] = t1;

  /***  constraint 29  ***/

	otpop_pd[56] = -0.00429596009984836 * x[28];
	otpop_pd[57] = x[61] + -3.;
	v[1] = otpop_pd[56] * otpop_pd[57];
	t1 = v[1] + -x[44];
	t1 += x[45];
	c[28] = t1;

  /***  constraint 30  ***/

	otpop_pd[58] = -0.00429596009984836 * x[29];
	otpop_pd[59] = x[62] + -3.;
	v[1] = otpop_pd[58] * otpop_pd[59];
	t1 = v[1] + -x[45];
	t1 += x[46];
	c[29] = t1;

  /***  constraint 31  ***/

	otpop_pd[60] = -0.00429596009984836 * x[30];
	otpop_pd[61] = x[63] + -3.;
	v[1] = otpop_pd[60] * otpop_pd[61];
	t1 = v[1] + -x[46];
	t1 += x[47];
	c[30] = t1;

  /***  constraint 32  ***/

	otpop_pd[62] = -0.00429596009984836 * x[31];
	otpop_pd[63] = x[64] + -3.;
	v[1] = otpop_pd[62] * otpop_pd[63];
	t1 = v[1] + -x[47];
	t1 += x[48];
	c[31] = t1;

  /***  constraint 33  ***/

	otpop_pd[64] = -0.00429596009984836 * x[32];
	otpop_pd[65] = x[65] + -3.;
	v[1] = otpop_pd[64] * otpop_pd[65];
	t1 = v[1] + -x[48];
	t1 += x[49];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[17];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[18];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[19];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[20];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[21];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[22];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[23];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[24];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[25];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[26];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[27];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[28];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[29];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[30];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[31];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[32];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[83];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -0.5*x[84];
	t1 += x[93];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -0.3*x[84];
	t1 += -0.5*x[85];
	t1 += x[94];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -0.2*x[84];
	t1 += -0.3*x[85];
	t1 += -0.5*x[86];
	t1 += x[95];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -0.2*x[85];
	t1 += -0.3*x[86];
	t1 += -0.5*x[87];
	t1 += x[96];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -0.2*x[86];
	t1 += -0.3*x[87];
	t1 += -0.5*x[88];
	t1 += x[97];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -0.2*x[87];
	t1 += -0.3*x[88];
	t1 += -0.5*x[89];
	t1 += x[98];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[50];
	t1 += -0.2*x[88];
	t1 += -0.3*x[89];
	t1 += -0.5*x[90];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[51];
	t1 += -0.2*x[89];
	t1 += -0.3*x[90];
	t1 += -0.5*x[91];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[52];
	t1 += -0.2*x[90];
	t1 += -0.3*x[91];
	t1 += -0.5*x[92];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -0.5*x[0];
	t1 += x[53];
	t1 += -0.2*x[91];
	t1 += -0.3*x[92];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -0.3*x[0];
	t1 += -0.5*x[1];
	t1 += x[54];
	t1 += -0.2*x[92];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -0.2*x[0];
	t1 += -0.3*x[1];
	t1 += -0.5*x[2];
	t1 += x[55];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -0.2*x[1];
	t1 += -0.3*x[2];
	t1 += -0.5*x[3];
	t1 += x[56];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -0.2*x[2];
	t1 += -0.3*x[3];
	t1 += -0.5*x[4];
	t1 += x[57];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -0.2*x[3];
	t1 += -0.3*x[4];
	t1 += -0.5*x[5];
	t1 += x[58];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -0.2*x[4];
	t1 += -0.3*x[5];
	t1 += -0.5*x[6];
	t1 += x[59];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -0.2*x[5];
	t1 += -0.3*x[6];
	t1 += -0.5*x[7];
	t1 += x[60];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -0.2*x[6];
	t1 += -0.3*x[7];
	t1 += -0.5*x[8];
	t1 += x[61];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -0.2*x[7];
	t1 += -0.3*x[8];
	t1 += -0.5*x[9];
	t1 += x[62];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -0.2*x[8];
	t1 += -0.3*x[9];
	t1 += -0.5*x[10];
	t1 += x[63];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -0.2*x[9];
	t1 += -0.3*x[10];
	t1 += -0.5*x[11];
	t1 += x[64];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = -0.2*x[10];
	t1 += -0.3*x[11];
	t1 += -0.5*x[12];
	t1 += x[65];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -0.2*x[11];
	t1 += -0.3*x[12];
	t1 += -0.5*x[13];
	t1 += x[99];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -0.2*x[12];
	t1 += -0.3*x[13];
	t1 += -0.5*x[14];
	t1 += x[100];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -0.2*x[13];
	t1 += -0.3*x[14];
	t1 += -0.5*x[15];
	t1 += x[101];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -0.2*x[14];
	t1 += -0.3*x[15];
	t1 += -0.5*x[16];
	t1 += x[102];
	c[75] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[113] = otpop_pd[1];
	J[0] = x[33]*otpop_pd[0];
	J[65] = -1.;
	J[194] = 1.;

   /*** derivatives for constraint 2 ***/

	J[115] = otpop_pd[3];
	J[4] = x[34]*otpop_pd[2];
	J[68] = -1.;
	J[195] = 1.;

   /*** derivatives for constraint 3 ***/

	J[118] = otpop_pd[5];
	J[8] = x[35]*otpop_pd[4];
	J[71] = -1.;
	J[196] = 1.;

   /*** derivatives for constraint 4 ***/

	J[121] = otpop_pd[7];
	J[12] = x[36]*otpop_pd[6];
	J[74] = -1.;
	J[197] = 1.;

   /*** derivatives for constraint 5 ***/

	J[124] = otpop_pd[9];
	J[16] = x[37]*otpop_pd[8];
	J[77] = -1.;
	J[198] = 1.;

   /*** derivatives for constraint 6 ***/

	J[127] = otpop_pd[11];
	J[20] = x[38]*otpop_pd[10];
	J[80] = -1.;
	J[199] = 1.;

   /*** derivatives for constraint 7 ***/

	J[130] = otpop_pd[13];
	J[24] = x[39]*otpop_pd[12];
	J[83] = -1.;
	J[200] = 1.;

   /*** derivatives for constraint 8 ***/

	J[133] = otpop_pd[15];
	J[28] = x[40]*otpop_pd[14];
	J[86] = -1.;
	J[201] = 1.;

   /*** derivatives for constraint 9 ***/

	J[136] = otpop_pd[17];
	J[32] = x[41]*otpop_pd[16];
	J[89] = -1.;
	J[202] = 1.;

   /*** derivatives for constraint 10 ***/

	J[139] = otpop_pd[19];
	J[36] = x[42]*otpop_pd[18];
	J[92] = -1.;
	J[203] = 1.;

   /*** derivatives for constraint 11 ***/

	J[142] = otpop_pd[21];
	J[40] = x[43]*otpop_pd[20];
	J[95] = -1.;
	J[204] = 1.;

   /*** derivatives for constraint 12 ***/

	J[145] = otpop_pd[23];
	J[44] = x[44]*otpop_pd[22];
	J[98] = -1.;
	J[205] = 1.;

   /*** derivatives for constraint 13 ***/

	J[148] = otpop_pd[25];
	J[48] = x[45]*otpop_pd[24];
	J[101] = -1.;
	J[206] = 1.;

   /*** derivatives for constraint 14 ***/

	J[151] = otpop_pd[27];
	J[52] = x[46]*otpop_pd[26];
	J[104] = -1.;
	J[207] = 1.;

   /*** derivatives for constraint 15 ***/

	J[154] = otpop_pd[29];
	J[56] = x[47]*otpop_pd[28];
	J[107] = -1.;
	J[208] = 1.;

   /*** derivatives for constraint 16 ***/

	J[157] = otpop_pd[31];
	J[60] = x[48]*otpop_pd[30];
	J[110] = -1.;
	J[209] = 1.;

   /*** derivatives for constraint 17 ***/

	J[160] = otpop_pd[33];
	J[63] = x[49]*otpop_pd[32];
	J[210] = 1.;
	J[211] = -1.;

   /*** derivatives for constraint 18 ***/

	J[162] = otpop_pd[34];
	J[66] = -otpop_pd[35]*0.00429596009984836;
	J[114] = -1.;
	J[116] = 1.;

   /*** derivatives for constraint 19 ***/

	J[164] = otpop_pd[36];
	J[69] = -otpop_pd[37]*0.00429596009984836;
	J[117] = -1.;
	J[119] = 1.;

   /*** derivatives for constraint 20 ***/

	J[166] = otpop_pd[38];
	J[72] = -otpop_pd[39]*0.00429596009984836;
	J[120] = -1.;
	J[122] = 1.;

   /*** derivatives for constraint 21 ***/

	J[168] = otpop_pd[40];
	J[75] = -otpop_pd[41]*0.00429596009984836;
	J[123] = -1.;
	J[125] = 1.;

   /*** derivatives for constraint 22 ***/

	J[170] = otpop_pd[42];
	J[78] = -otpop_pd[43]*0.00429596009984836;
	J[126] = -1.;
	J[128] = 1.;

   /*** derivatives for constraint 23 ***/

	J[172] = otpop_pd[44];
	J[81] = -otpop_pd[45]*0.00429596009984836;
	J[129] = -1.;
	J[131] = 1.;

   /*** derivatives for constraint 24 ***/

	J[174] = otpop_pd[46];
	J[84] = -otpop_pd[47]*0.00429596009984836;
	J[132] = -1.;
	J[134] = 1.;

   /*** derivatives for constraint 25 ***/

	J[176] = otpop_pd[48];
	J[87] = -otpop_pd[49]*0.00429596009984836;
	J[135] = -1.;
	J[137] = 1.;

   /*** derivatives for constraint 26 ***/

	J[178] = otpop_pd[50];
	J[90] = -otpop_pd[51]*0.00429596009984836;
	J[138] = -1.;
	J[140] = 1.;

   /*** derivatives for constraint 27 ***/

	J[180] = otpop_pd[52];
	J[93] = -otpop_pd[53]*0.00429596009984836;
	J[141] = -1.;
	J[143] = 1.;

   /*** derivatives for constraint 28 ***/

	J[182] = otpop_pd[54];
	J[96] = -otpop_pd[55]*0.00429596009984836;
	J[144] = -1.;
	J[146] = 1.;

   /*** derivatives for constraint 29 ***/

	J[184] = otpop_pd[56];
	J[99] = -otpop_pd[57]*0.00429596009984836;
	J[147] = -1.;
	J[149] = 1.;

   /*** derivatives for constraint 30 ***/

	J[186] = otpop_pd[58];
	J[102] = -otpop_pd[59]*0.00429596009984836;
	J[150] = -1.;
	J[152] = 1.;

   /*** derivatives for constraint 31 ***/

	J[188] = otpop_pd[60];
	J[105] = -otpop_pd[61]*0.00429596009984836;
	J[153] = -1.;
	J[155] = 1.;

   /*** derivatives for constraint 32 ***/

	J[190] = otpop_pd[62];
	J[108] = -otpop_pd[63]*0.00429596009984836;
	J[156] = -1.;
	J[158] = 1.;

   /*** derivatives for constraint 33 ***/

	J[192] = otpop_pd[64];
	J[111] = -otpop_pd[65]*0.00429596009984836;
	J[159] = -1.;
	J[161] = 1.;

   /*** derivatives for constraint 34 ***/

	J[67] = 1.;

   /*** derivatives for constraint 35 ***/

	J[70] = 1.;

   /*** derivatives for constraint 36 ***/

	J[73] = 1.;

   /*** derivatives for constraint 37 ***/

	J[76] = 1.;

   /*** derivatives for constraint 38 ***/

	J[79] = 1.;

   /*** derivatives for constraint 39 ***/

	J[82] = 1.;

   /*** derivatives for constraint 40 ***/

	J[85] = 1.;

   /*** derivatives for constraint 41 ***/

	J[88] = 1.;

   /*** derivatives for constraint 42 ***/

	J[91] = 1.;

   /*** derivatives for constraint 43 ***/

	J[94] = 1.;

   /*** derivatives for constraint 44 ***/

	J[97] = 1.;

   /*** derivatives for constraint 45 ***/

	J[100] = 1.;

   /*** derivatives for constraint 46 ***/

	J[103] = 1.;

   /*** derivatives for constraint 47 ***/

	J[106] = 1.;

   /*** derivatives for constraint 48 ***/

	J[109] = 1.;

   /*** derivatives for constraint 49 ***/

	J[112] = 1.;

   /*** derivatives for constraint 50 ***/

	J[212] = 1.;

   /*** derivatives for constraint 51 ***/

	J[213] = -0.5;
	J[240] = 1.;

   /*** derivatives for constraint 52 ***/

	J[214] = -0.3;
	J[216] = -0.5;
	J[241] = 1.;

   /*** derivatives for constraint 53 ***/

	J[215] = -0.2;
	J[217] = -0.3;
	J[219] = -0.5;
	J[242] = 1.;

   /*** derivatives for constraint 54 ***/

	J[218] = -0.2;
	J[220] = -0.3;
	J[222] = -0.5;
	J[243] = 1.;

   /*** derivatives for constraint 55 ***/

	J[221] = -0.2;
	J[223] = -0.3;
	J[225] = -0.5;
	J[244] = 1.;

   /*** derivatives for constraint 56 ***/

	J[224] = -0.2;
	J[226] = -0.3;
	J[228] = -0.5;
	J[245] = 1.;

   /*** derivatives for constraint 57 ***/

	J[163] = 1.;
	J[227] = -0.2;
	J[229] = -0.3;
	J[231] = -0.5;

   /*** derivatives for constraint 58 ***/

	J[165] = 1.;
	J[230] = -0.2;
	J[232] = -0.3;
	J[234] = -0.5;

   /*** derivatives for constraint 59 ***/

	J[167] = 1.;
	J[233] = -0.2;
	J[235] = -0.3;
	J[237] = -0.5;

   /*** derivatives for constraint 60 ***/

	J[1] = -0.5;
	J[169] = 1.;
	J[236] = -0.2;
	J[238] = -0.3;

   /*** derivatives for constraint 61 ***/

	J[2] = -0.3;
	J[5] = -0.5;
	J[171] = 1.;
	J[239] = -0.2;

   /*** derivatives for constraint 62 ***/

	J[3] = -0.2;
	J[6] = -0.3;
	J[9] = -0.5;
	J[173] = 1.;

   /*** derivatives for constraint 63 ***/

	J[7] = -0.2;
	J[10] = -0.3;
	J[13] = -0.5;
	J[175] = 1.;

   /*** derivatives for constraint 64 ***/

	J[11] = -0.2;
	J[14] = -0.3;
	J[17] = -0.5;
	J[177] = 1.;

   /*** derivatives for constraint 65 ***/

	J[15] = -0.2;
	J[18] = -0.3;
	J[21] = -0.5;
	J[179] = 1.;

   /*** derivatives for constraint 66 ***/

	J[19] = -0.2;
	J[22] = -0.3;
	J[25] = -0.5;
	J[181] = 1.;

   /*** derivatives for constraint 67 ***/

	J[23] = -0.2;
	J[26] = -0.3;
	J[29] = -0.5;
	J[183] = 1.;

   /*** derivatives for constraint 68 ***/

	J[27] = -0.2;
	J[30] = -0.3;
	J[33] = -0.5;
	J[185] = 1.;

   /*** derivatives for constraint 69 ***/

	J[31] = -0.2;
	J[34] = -0.3;
	J[37] = -0.5;
	J[187] = 1.;

   /*** derivatives for constraint 70 ***/

	J[35] = -0.2;
	J[38] = -0.3;
	J[41] = -0.5;
	J[189] = 1.;

   /*** derivatives for constraint 71 ***/

	J[39] = -0.2;
	J[42] = -0.3;
	J[45] = -0.5;
	J[191] = 1.;

   /*** derivatives for constraint 72 ***/

	J[43] = -0.2;
	J[46] = -0.3;
	J[49] = -0.5;
	J[193] = 1.;

   /*** derivatives for constraint 73 ***/

	J[47] = -0.2;
	J[50] = -0.3;
	J[53] = -0.5;
	J[246] = 1.;

   /*** derivatives for constraint 74 ***/

	J[51] = -0.2;
	J[54] = -0.3;
	J[57] = -0.5;
	J[247] = 1.;

   /*** derivatives for constraint 75 ***/

	J[55] = -0.2;
	J[58] = -0.3;
	J[61] = -0.5;
	J[248] = 1.;

   /*** derivatives for constraint 76 ***/

	J[59] = -0.2;
	J[62] = -0.3;
	J[64] = -0.5;
	J[249] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
