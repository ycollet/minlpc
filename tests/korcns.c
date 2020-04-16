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
 fint korcns_auxcom_[1] = { 44 /* nlc */ };
 fint korcns_funcom_[448] = {
	96 /* nvar */,
	0 /* nobj */,
	78 /* ncon */,
	346 /* nzc */,
	0 /* densejac */,

	/* colstarts */
	1,
	12,
	16,
	20,
	24,
	27,
	30,
	33,
	36,
	39,
	42,
	44,
	46,
	48,
	51,
	54,
	57,
	67,
	80,
	93,
	97,
	100,
	104,
	108,
	111,
	114,
	117,
	127,
	136,
	146,
	152,
	158,
	164,
	168,
	172,
	176,
	182,
	188,
	194,
	195,
	196,
	197,
	200,
	205,
	208,
	211,
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
	244,
	247,
	250,
	255,
	260,
	265,
	269,
	273,
	275,
	278,
	281,
	284,
	286,
	288,
	295,
	302,
	303,
	304,
	305,
	306,
	307,
	309,
	311,
	313,
	315,
	317,
	319,
	320,
	322,
	324,
	326,
	328,
	331,
	333,
	335,
	338,
	341,
	342,
	344,
	346,
	347,

	/* rownos */
	1,
	2,
	3,
	33,
	34,
	35,
	36,
	40,
	45,
	46,
	47,
	4,
	7,
	21,
	27,
	5,
	8,
	22,
	28,
	6,
	9,
	23,
	29,
	1,
	4,
	27,
	2,
	5,
	28,
	3,
	6,
	29,
	7,
	21,
	45,
	8,
	22,
	46,
	9,
	23,
	47,
	41,
	51,
	42,
	52,
	43,
	53,
	7,
	37,
	48,
	8,
	37,
	49,
	9,
	37,
	50,
	4,
	30,
	39,
	41,
	42,
	43,
	48,
	49,
	50,
	54,
	5,
	31,
	39,
	41,
	42,
	43,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	6,
	32,
	39,
	41,
	42,
	43,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	13,
	14,
	34,
	48,
	15,
	34,
	49,
	16,
	17,
	34,
	50,
	1,
	2,
	3,
	36,
	4,
	24,
	76,
	5,
	25,
	77,
	6,
	26,
	78,
	7,
	10,
	13,
	14,
	18,
	34,
	37,
	58,
	59,
	60,
	8,
	11,
	15,
	19,
	34,
	37,
	58,
	59,
	60,
	9,
	12,
	16,
	17,
	20,
	34,
	37,
	58,
	59,
	60,
	4,
	7,
	18,
	21,
	24,
	27,
	5,
	8,
	19,
	22,
	25,
	28,
	6,
	9,
	20,
	23,
	26,
	29,
	7,
	18,
	21,
	75,
	8,
	19,
	22,
	75,
	9,
	20,
	23,
	75,
	4,
	24,
	27,
	35,
	36,
	75,
	5,
	25,
	28,
	35,
	36,
	75,
	6,
	26,
	29,
	35,
	36,
	75,
	10,
	11,
	12,
	13,
	33,
	34,
	14,
	15,
	16,
	33,
	34,
	17,
	33,
	34,
	33,
	34,
	55,
	33,
	34,
	56,
	33,
	34,
	57,
	10,
	13,
	55,
	10,
	14,
	56,
	11,
	15,
	56,
	12,
	16,
	56,
	12,
	17,
	57,
	30,
	44,
	76,
	31,
	44,
	77,
	32,
	44,
	78,
	39,
	66,
	76,
	39,
	67,
	77,
	39,
	68,
	78,
	41,
	42,
	43,
	61,
	76,
	41,
	42,
	43,
	62,
	77,
	41,
	42,
	43,
	63,
	78,
	30,
	31,
	32,
	38,
	30,
	31,
	32,
	38,
	40,
	75,
	41,
	73,
	74,
	42,
	73,
	74,
	43,
	73,
	74,
	33,
	75,
	34,
	75,
	30,
	31,
	32,
	33,
	38,
	64,
	65,
	30,
	31,
	32,
	34,
	38,
	64,
	65,
	54,
	57,
	55,
	57,
	55,
	58,
	76,
	59,
	77,
	60,
	78,
	72,
	76,
	73,
	77,
	74,
	78,
	64,
	39,
	69,
	35,
	69,
	37,
	69,
	69,
	70,
	66,
	67,
	68,
	38,
	40,
	39,
	40,
	34,
	40,
	71,
	41,
	42,
	43,
	40,
	34,
	36,
	65,
	69,
	44 };

 real korcns_boundc_[1+192+156] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		1.,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		657.5754,
		657.5754,
		338.7076,
		338.7076,
		1548.5192,
		1548.5192,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		2515.9,
		2515.9,
		1565.987,
		1565.987,
		948.1,
		948.1,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
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
		0.06,
		0.06,
		0.06,
		0.06,
		39.1744,
		39.1744,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		58.759,
		58.759,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
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
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		0.01,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.01,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		141.1519,
		141.1519,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real korcns_x0comn_[96] = {
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
		0.737,
		0.2911,
		0.6625,
		0.,
		711.6443,
		930.3509,
		497.4428,
		657.3677,
		840.05,
		515.4296,
		641.7037,
		812.2222,
		492.0307,
		15.6639,
		27.8278,
		23.3988,
		69.9406,
		118.1287,
		5.412,
		657.5754,
		338.7076,
		1548.5192,
		0.074,
		0.14,
		0.152,
		2515.9,
		1565.987,
		948.1,
		2515.9,
		442.643,
		767.776,
		355.568,
		948.1,
		452.1765,
		307.8561,
		202.0416,
		2.823,
		9.8806,
		128.4482,
		0.,
		0.,
		0.,
		0.06,
		0.06,
		39.1744,
		20.6884,
		46.1511,
		92.3023,
		0.,
		58.759,
		548.7478,
		574.8463,
		1.,
		0.,
		0.,
		0.,
		0.,
		256.645,
		464.1656,
		156.2598,
		0.,
		148.4488,
		10.6931,
		1123.5941,
		194.0449,
		28.6572,
		65.2754,
		0.,
		141.1519,
		61.4089,
		52.893,
		0.,
		159.1419,
		159.1419,
		0.,
		100.1122,
		0. };

 static real korcns_pd[115];
static real korcns_old_x[96];
static int korcns_xkind = -1;

 static int
korcns_xcheck(real *x)
{
	real *x1 = korcns_old_x, *xe = x + 96;
	errno = 0;
	if (korcns_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	korcns_xkind = 0;
	return 1;
	}
 real
korcns_feval_(fint *nobj, fint *needfg, real *x, real *g)
{ return 0.; }

 void
korcns_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (korcns_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	korcns_pd[0] = -0.90909 * x[0];
	korcns_pd[1] = x[22] + 1.1;
	v[1] = korcns_pd[0] * korcns_pd[1];
	t1 = v[1] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	korcns_pd[2] = -0.81466 * x[0];
	korcns_pd[3] = x[22] + 1.22751;
	v[1] = korcns_pd[2] * korcns_pd[3];
	t1 = v[1] + x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	korcns_pd[4] = -0.92521 * x[0];
	korcns_pd[5] = x[22] + 1.08084;
	v[1] = korcns_pd[4] * korcns_pd[5];
	t1 = v[1] + x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[16] * x[23];
	v[1] = x[1] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[4] * x[35];
	v[1] = -v[2];
	v[0] += v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[17] * x[24];
	v[1] = x[2] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[5] * x[36];
	v[1] = -v[2];
	v[0] += v[1];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[18] * x[25];
	v[1] = x[3] * x[31];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[6] * x[37];
	v[1] = -v[2];
	v[0] += v[1];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[13] * x[26];
	v[1] = x[1] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[7] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[14] * x[27];
	v[1] = x[2] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[8] * x[33];
	v[1] = -v[2];
	v[0] += v[1];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[15] * x[28];
	v[1] = x[3] * x[31];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[9] * x[34];
	v[1] = -v[2];
	v[0] += v[1];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = pow(x[47], 0.38258);
	if (errno) in_trouble2("pow",x[47],0.38258);
	if (x[47] > 0.) {
	korcns_pd[6] = 0.38258*(v[0]/x[47]);
	} else if (0.38258 > 1.) {
	korcns_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[47],0.38258);
	}
	korcns_pd[7] = -0.61447 * v[0];
	korcns_pd[9] = pow(x[48], 0.0674);
	if (errno) in_trouble2("pow",x[48],0.0674);
	if (x[48] > 0.) {
	korcns_pd[8] = 0.0674*(korcns_pd[9]/x[48]);
	} else if (0.0674 > 1.) {
	korcns_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[48],0.0674);
	}
	korcns_pd[10] = korcns_pd[7] * korcns_pd[9];
	korcns_pd[12] = pow(x[38], 0.55002);
	if (errno) in_trouble2("pow",x[38],0.55002);
	if (x[38] > 0.) {
	korcns_pd[11] = 0.55002*(korcns_pd[12]/x[38]);
	} else if (0.55002 > 1.) {
	korcns_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],0.55002);
	}
	v[2] = korcns_pd[10] * korcns_pd[12];
	t1 = v[2] + x[26];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = pow(x[49], 0.53476);
	if (errno) in_trouble2("pow",x[49],0.53476);
	if (x[49] > 0.) {
	korcns_pd[13] = 0.53476*(v[0]/x[49]);
	} else if (0.53476 > 1.) {
	korcns_pd[13] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[49],0.53476);
	}
	korcns_pd[14] = -1.60111 * v[0];
	korcns_pd[16] = pow(x[39], 0.46524);
	if (errno) in_trouble2("pow",x[39],0.46524);
	if (x[39] > 0.) {
	korcns_pd[15] = 0.46524*(korcns_pd[16]/x[39]);
	} else if (0.46524 > 1.) {
	korcns_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],0.46524);
	}
	v[1] = korcns_pd[14] * korcns_pd[16];
	t1 = v[1] + x[27];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = pow(x[50], 0.16234);
	if (errno) in_trouble2("pow",x[50],0.16234);
	if (x[50] > 0.) {
	korcns_pd[17] = 0.16234*(v[0]/x[50]);
	} else if (0.16234 > 1.) {
	korcns_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[50],0.16234);
	}
	korcns_pd[18] = -0.52019 * v[0];
	korcns_pd[20] = pow(x[51], 0.42326);
	if (errno) in_trouble2("pow",x[51],0.42326);
	if (x[51] > 0.) {
	korcns_pd[19] = 0.42326*(korcns_pd[20]/x[51]);
	} else if (0.42326 > 1.) {
	korcns_pd[19] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[51],0.42326);
	}
	korcns_pd[21] = korcns_pd[18] * korcns_pd[20];
	korcns_pd[23] = pow(x[40], 0.4144);
	if (errno) in_trouble2("pow",x[40],0.4144);
	if (x[40] > 0.) {
	korcns_pd[22] = 0.4144*(korcns_pd[23]/x[40]);
	} else if (0.4144 > 1.) {
	korcns_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[40],0.4144);
	}
	v[2] = korcns_pd[21] * korcns_pd[23];
	t1 = v[2] + x[28];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[41] * x[47];
	korcns_pd[24] = 0.38258 * x[26];
	v[1] = korcns_pd[24] * x[19];
	v[2] = v[0] - v[1];
	c[12] = v[2];

  /***  constraint 14  ***/

	korcns_pd[25] = 0.5278 * x[42];
	v[0] = korcns_pd[25] * x[48];
	korcns_pd[26] = 0.0674 * x[26];
	v[1] = korcns_pd[26] * x[19];
	v[2] = v[0] - v[1];
	c[13] = v[2];

  /***  constraint 15  ***/

	korcns_pd[27] = 1.21879 * x[42];
	v[0] = korcns_pd[27] * x[49];
	korcns_pd[28] = 0.53476 * x[27];
	v[1] = korcns_pd[28] * x[20];
	v[2] = v[0] - v[1];
	c[14] = v[2];

  /***  constraint 16  ***/

	korcns_pd[29] = 1.11541 * x[42];
	v[0] = korcns_pd[29] * x[50];
	korcns_pd[30] = 0.16234 * x[28];
	v[1] = korcns_pd[30] * x[21];
	v[2] = v[0] - v[1];
	c[15] = v[2];

  /***  constraint 17  ***/

	v[0] = x[43] * x[51];
	korcns_pd[31] = 0.42326 * x[28];
	v[1] = korcns_pd[31] * x[21];
	v[2] = v[0] - v[1];
	c[16] = v[2];

  /***  constraint 18  ***/

	v[0] = pow(x[32], 1.5);
	if (errno) in_trouble2("pow",x[32],1.5);
	if (x[32] > 0.) {
	korcns_pd[32] = 1.5*(v[0]/x[32]);
	} else if (1.5 > 1.) {
	korcns_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[32],1.5);
	}
	v[0] *= 0.86628;
	v[1] = pow(x[29], 1.5);
	if (errno) in_trouble2("pow",x[29],1.5);
	if (x[29] > 0.) {
	korcns_pd[33] = 1.5*(v[1]/x[29]);
	} else if (1.5 > 1.) {
	korcns_pd[33] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],1.5);
	}
	v[1] *= 0.13372;
	v[2] = v[0] + v[1];
	v[1] = pow(v[2], 0.666666666666667);
	if (errno) in_trouble2("pow",v[2],0.666666666666667);
	if (v[2] > 0.) {
	korcns_pd[34] = 0.666666666666667*(v[1]/v[2]);
	} else if (0.666666666666667 > 1.) {
	korcns_pd[34] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.666666666666667);
	}
	v[1] *= -3.85424;
	t1 = v[1] + x[26];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = pow(x[33], 1.5);
	if (errno) in_trouble2("pow",x[33],1.5);
	if (x[33] > 0.) {
	korcns_pd[35] = 1.5*(v[0]/x[33]);
	} else if (1.5 > 1.) {
	korcns_pd[35] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[33],1.5);
	}
	v[0] *= 0.84602;
	v[1] = pow(x[30], 1.5);
	if (errno) in_trouble2("pow",x[30],1.5);
	if (x[30] > 0.) {
	korcns_pd[36] = 1.5*(v[1]/x[30]);
	} else if (1.5 > 1.) {
	korcns_pd[36] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],1.5);
	}
	v[1] *= 0.15398;
	v[2] = v[0] + v[1];
	v[1] = pow(v[2], 0.666666666666667);
	if (errno) in_trouble2("pow",v[2],0.666666666666667);
	if (v[2] > 0.) {
	korcns_pd[37] = 0.666666666666667*(v[1]/v[2]);
	} else if (0.666666666666667 > 1.) {
	korcns_pd[37] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.666666666666667);
	}
	v[1] *= -3.51886;
	t1 = v[1] + x[27];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = pow(x[34], 1.5);
	if (errno) in_trouble2("pow",x[34],1.5);
	if (x[34] > 0.) {
	korcns_pd[38] = 1.5*(v[0]/x[34]);
	} else if (1.5 > 1.) {
	korcns_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],1.5);
	}
	v[0] *= 0.82436;
	v[1] = pow(x[31], 1.5);
	if (errno) in_trouble2("pow",x[31],1.5);
	if (x[31] > 0.) {
	korcns_pd[39] = 1.5*(v[1]/x[31]);
	} else if (1.5 > 1.) {
	korcns_pd[39] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],1.5);
	}
	v[1] *= 0.17564;
	v[2] = v[0] + v[1];
	v[1] = pow(v[2], 0.666666666666667);
	if (errno) in_trouble2("pow",v[2],0.666666666666667);
	if (v[2] > 0.) {
	korcns_pd[40] = 0.666666666666667*(v[1]/v[2]);
	} else if (0.666666666666667 > 1.) {
	korcns_pd[40] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.666666666666667);
	}
	v[1] *= -3.23592;
	t1 = v[1] + x[28];
	c[19] = t1;

  /***  constraint 21  ***/

	if (x[29] == 0.) {
	zerdiv_(&x[29]);	}
	v[0] = x[32] / x[29];
	korcns_pd[41] = 1. / x[29];
	korcns_pd[42] = -v[0] * korcns_pd[41];
	v[1] = 0.154361176524911 * x[7];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[2] = v[1] / x[1];
	korcns_pd[43] = 1. / x[1];
	korcns_pd[44] = -v[2] * korcns_pd[43];
	v[1] = v[2] * v[2];
	korcns_pd[45] = v[2] + v[2];
	v[2] = v[0] - v[1];
	c[20] = v[2];

  /***  constraint 22  ***/

	if (x[30] == 0.) {
	zerdiv_(&x[30]);	}
	v[0] = x[33] / x[30];
	korcns_pd[46] = 1. / x[30];
	korcns_pd[47] = -v[0] * korcns_pd[46];
	v[1] = 0.182005153542469 * x[8];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[2] = v[1] / x[2];
	korcns_pd[48] = 1. / x[2];
	korcns_pd[49] = -v[2] * korcns_pd[48];
	v[1] = v[2] * v[2];
	korcns_pd[50] = v[2] + v[2];
	v[2] = v[0] - v[1];
	c[21] = v[2];

  /***  constraint 23  ***/

	if (x[31] == 0.) {
	zerdiv_(&x[31]);	}
	v[0] = x[34] / x[31];
	korcns_pd[51] = 1. / x[31];
	korcns_pd[52] = -v[0] * korcns_pd[51];
	v[1] = 0.213062254354893 * x[9];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[2] = v[1] / x[3];
	korcns_pd[53] = 1. / x[3];
	korcns_pd[54] = -v[2] * korcns_pd[53];
	v[1] = v[2] * v[2];
	korcns_pd[55] = v[2] + v[2];
	v[2] = v[0] - v[1];
	c[22] = v[2];

  /***  constraint 24  ***/

	korcns_pd[56] = sqrt(x[35]);
	if (errno) in_trouble("sqrt",x[35]);
	if (korcns_pd[56] <= 0.) {
	domain_("sqrt'", &korcns_pd[56], 5L);
	}
	korcns_pd[57] = 0.5 / korcns_pd[56];
	v[0] = 0.2482 * korcns_pd[56];
	korcns_pd[58] = sqrt(x[29]);
	if (errno) in_trouble("sqrt",x[29]);
	if (korcns_pd[58] <= 0.) {
	domain_("sqrt'", &korcns_pd[58], 5L);
	}
	korcns_pd[59] = 0.5 / korcns_pd[58];
	v[1] = 0.7518 * korcns_pd[58];
	v[2] = v[0] + v[1];
	korcns_pd[60] = v[2] * v[2];
	korcns_pd[61] = v[2] + v[2];
	v[2] = -1.59539 * korcns_pd[60];
	t1 = v[2] + x[23];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = pow(x[36], -0.515151515151515);
	if (errno) in_trouble2("pow",x[36],-0.515151515151515);
	if (x[36] > 0.) {
	korcns_pd[62] = -0.515151515151515*(v[0]/x[36]);
	} else if (-0.515151515151515 > 1.) {
	korcns_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],-0.515151515151515);
	}
	v[0] *= 0.05111;
	v[1] = pow(x[30], -0.515151515151515);
	if (errno) in_trouble2("pow",x[30],-0.515151515151515);
	if (x[30] > 0.) {
	korcns_pd[63] = -0.515151515151515*(v[1]/x[30]);
	} else if (-0.515151515151515 > 1.) {
	korcns_pd[63] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],-0.515151515151515);
	}
	v[1] *= 0.94889;
	v[2] = v[0] + v[1];
	v[1] = pow(v[2], -1.94117647058824);
	if (errno) in_trouble2("pow",v[2],-1.94117647058824);
	if (v[2] > 0.) {
	korcns_pd[64] = -1.94117647058824*(v[1]/v[2]);
	} else if (-1.94117647058824 > 1.) {
	korcns_pd[64] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],-1.94117647058824);
	}
	v[1] *= -1.34652;
	t1 = v[1] + x[24];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = pow(x[37], -1.5);
	if (errno) in_trouble2("pow",x[37],-1.5);
	if (x[37] > 0.) {
	korcns_pd[65] = -1.5*(v[0]/x[37]);
	} else if (-1.5 > 1.) {
	korcns_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],-1.5);
	}
	v[0] *= 1.e-05;
	v[1] = pow(x[31], -1.5);
	if (errno) in_trouble2("pow",x[31],-1.5);
	if (x[31] > 0.) {
	korcns_pd[66] = -1.5*(v[1]/x[31]);
	} else if (-1.5 > 1.) {
	korcns_pd[66] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],-1.5);
	}
	v[1] *= 0.99999;
	v[2] = v[0] + v[1];
	v[1] = pow(v[2], -0.666666666666667);
	if (errno) in_trouble2("pow",v[2],-0.666666666666667);
	if (v[2] > 0.) {
	korcns_pd[67] = -0.666666666666667*(v[1]/v[2]);
	} else if (-0.666666666666667 > 1.) {
	korcns_pd[67] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],-0.666666666666667);
	}
	v[1] *= -1.01839;
	t1 = v[1] + x[25];
	c[25] = t1;

  /***  constraint 27  ***/

	if (x[29] == 0.) {
	zerdiv_(&x[29]);	}
	v[0] = x[35] / x[29];
	korcns_pd[68] = 1. / x[29];
	korcns_pd[69] = -v[0] * korcns_pd[68];
	v[1] = 0.330140994945464 * x[1];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[2] = v[1] / x[4];
	korcns_pd[70] = 1. / x[4];
	korcns_pd[71] = -v[2] * korcns_pd[70];
	v[1] = v[2] * v[2];
	korcns_pd[72] = v[2] + v[2];
	v[2] = v[0] - v[1];
	c[26] = v[2];

  /***  constraint 28  ***/

	if (x[30] == 0.) {
	zerdiv_(&x[30]);	}
	v[0] = x[36] / x[30];
	korcns_pd[73] = 1. / x[30];
	korcns_pd[74] = -v[0] * korcns_pd[73];
	v[1] = 0.0538629345867277 * x[2];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[2] = v[1] / x[5];
	korcns_pd[75] = 1. / x[5];
	korcns_pd[76] = -v[2] * korcns_pd[75];
	v[1] = pow(v[2], 0.66);
	if (errno) in_trouble2("pow",v[2],0.66);
	if (v[2] > 0.) {
	korcns_pd[77] = 0.66*(v[1]/v[2]);
	} else if (0.66 > 1.) {
	korcns_pd[77] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.66);
	}
	v[2] = v[0] - v[1];
	c[27] = v[2];

  /***  constraint 29  ***/

	if (x[31] == 0.) {
	zerdiv_(&x[31]);	}
	v[0] = x[37] / x[31];
	korcns_pd[78] = 1. / x[31];
	korcns_pd[79] = -v[0] * korcns_pd[78];
	v[1] = 1.0000100001e-05 * x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[2] = v[1] / x[6];
	korcns_pd[80] = 1. / x[6];
	korcns_pd[81] = -v[2] * korcns_pd[80];
	v[1] = pow(v[2], 0.4);
	if (errno) in_trouble2("pow",v[2],0.4);
	if (v[2] > 0.) {
	korcns_pd[82] = 0.4*(v[1]/v[2]);
	} else if (0.4 > 1.) {
	korcns_pd[82] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.4);
	}
	v[2] = v[0] - v[1];
	c[28] = v[2];

  /***  constraint 30  ***/

	v[0] = x[16] * x[52];
	v[1] = -0.428123 * x[61];
	korcns_pd[83] = 0.428123 + v[1];
	v[1] = korcns_pd[83] * x[69];
	v[3] = -v[1];
	v[0] += v[3];
	v[3] = -0.428123 * x[62];
	korcns_pd[84] = 0.428123 + v[3];
	v[3] = korcns_pd[84] * x[70];
	v[4] = -v[3];
	v[0] += v[4];
	c[29] = v[0];

  /***  constraint 31  ***/

	v[0] = x[17] * x[53];
	v[1] = -0.291478891 * x[61];
	korcns_pd[85] = 0.291478891 + v[1];
	v[1] = korcns_pd[85] * x[69];
	v[3] = -v[1];
	v[0] += v[3];
	v[3] = -0.291478891 * x[62];
	korcns_pd[86] = 0.291478891 + v[3];
	v[3] = korcns_pd[86] * x[70];
	v[4] = -v[3];
	v[0] += v[4];
	c[30] = v[0];

  /***  constraint 32  ***/

	v[0] = x[18] * x[54];
	v[1] = -0.191298109 * x[61];
	korcns_pd[87] = 0.191298109 + v[1];
	v[1] = korcns_pd[87] * x[69];
	v[3] = -v[1];
	v[0] += v[3];
	v[3] = -0.191298109 * x[62];
	korcns_pd[88] = 0.191298109 + v[3];
	v[3] = korcns_pd[88] * x[70];
	v[4] = -v[3];
	v[0] += v[4];
	c[31] = v[0];

  /***  constraint 33  ***/

	v[0] = x[41] * x[44];
	v[1] = x[42] * x[45];
	v[0] += v[1];
	v[1] = x[43] * x[46];
	v[0] += v[1];
	v[1] = x[67] * x[0];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[69];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[19] * x[26];
	v[1] = -v[0];
	v[0] = x[20] * x[27];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[21] * x[28];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[41] * x[44];
	v[1] += v[0];
	v[0] = x[42] * x[45];
	v[1] += v[0];
	v[0] = x[43] * x[46];
	v[1] += v[0];
	v[0] = x[68] * x[0];
	v[2] = -v[0];
	v[1] += v[2];
	t1 = v[1] + x[70];
	t1 += x[90];
	t1 += -x[93];
	c[33] = t1;

  /***  constraint 35  ***/

	korcns_pd[89] = 0.090909 * x[35];
	v[0] = 0.1853432966 * x[36];
	korcns_pd[90] = korcns_pd[89] + v[0];
	v[1] = 0.0747939764 * x[37];
	korcns_pd[90] += v[1];
	v[1] = korcns_pd[90] * x[0];
	v[2] = -v[1];
	t1 = v[2] + x[84];
	c[34] = t1;

  /***  constraint 36  ***/

	korcns_pd[91] = 0.90909 * x[35];
	v[0] = 0.81466 * x[36];
	korcns_pd[92] = korcns_pd[91] + v[0];
	v[1] = 0.92521 * x[37];
	korcns_pd[92] += v[1];
	korcns_pd[93] = korcns_pd[92] * x[0];
	v[1] = korcns_pd[93] * x[22];
	v[2] = -v[1];
	t1 = v[2] + x[93];
	c[35] = t1;

  /***  constraint 37  ***/

	korcns_pd[94] = 0.01 * x[13];
	v[0] = korcns_pd[94] * x[26];
	korcns_pd[95] = 0.0392 * x[14];
	v[1] = korcns_pd[95] * x[27];
	v[0] += v[1];
	korcns_pd[96] = 0.05 * x[15];
	v[1] = korcns_pd[96] * x[28];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[85];
	c[36] = t1;

  /***  constraint 38  ***/

	korcns_pd[97] = 0.9109 * x[62];
	v[0] = korcns_pd[97] * x[70];
	v[1] = -v[0];
	korcns_pd[98] = 0.9109 * x[61];
	v[0] = korcns_pd[98] * x[69];
	v[2] = v[1] - v[0];
	t1 = v[2] + x[88];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[16] * x[55];
	v[1] = x[17] * x[56];
	v[0] += v[1];
	v[1] = x[18] * x[57];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[83];
	t1 += -x[89];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[63] * x[0];
	v[1] = -v[0];
	t1 = v[1] + -x[88];
	t1 += -x[89];
	t1 += -x[90];
	t1 += x[92];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[10] * x[64];
	korcns_pd[99] = x[58] * x[16];
	v[1] = 0.13 * korcns_pd[99];
	v[0] += v[1];
	korcns_pd[100] = x[59] * x[17];
	v[1] = 0.13 * korcns_pd[100];
	v[0] += v[1];
	korcns_pd[101] = x[60] * x[18];
	v[1] = 0.13 * korcns_pd[101];
	v[0] += v[1];
	t1 = v[0] + -0.13*x[91];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[11] * x[65];
	korcns_pd[102] = x[58] * x[16];
	v[1] = 0.29 * korcns_pd[102];
	v[0] += v[1];
	korcns_pd[103] = x[59] * x[17];
	v[1] = 0.29 * korcns_pd[103];
	v[0] += v[1];
	korcns_pd[104] = x[60] * x[18];
	v[1] = 0.29 * korcns_pd[104];
	v[0] += v[1];
	t1 = v[0] + -0.29*x[91];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[12] * x[66];
	korcns_pd[105] = x[58] * x[16];
	v[1] = 0.58 * korcns_pd[105];
	v[0] += v[1];
	korcns_pd[106] = x[59] * x[17];
	v[1] = 0.58 * korcns_pd[106];
	v[0] += v[1];
	korcns_pd[107] = x[60] * x[18];
	v[1] = 0.58 * korcns_pd[107];
	v[0] += v[1];
	t1 = v[0] + -0.58*x[91];
	c[42] = t1;

  /***  constraint 44  ***/

	korcns_pd[111] = pow(x[52], 0.47);
	if (errno) in_trouble2("pow",x[52],0.47);
	if (x[52] > 0.) {
	korcns_pd[108] = 0.47*(korcns_pd[111]/x[52]);
	} else if (0.47 > 1.) {
	korcns_pd[108] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[52],0.47);
	}
	korcns_pd[110] = pow(x[53], 0.31999);
	if (errno) in_trouble2("pow",x[53],0.31999);
	if (x[53] > 0.) {
	korcns_pd[109] = 0.31999*(korcns_pd[110]/x[53]);
	} else if (0.31999 > 1.) {
	korcns_pd[109] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[53],0.31999);
	}
	korcns_pd[112] = korcns_pd[111] * korcns_pd[110];
	korcns_pd[114] = pow(x[54], 0.21001);
	if (errno) in_trouble2("pow",x[54],0.21001);
	if (x[54] > 0.) {
	korcns_pd[113] = 0.21001*(korcns_pd[114]/x[54]);
	} else if (0.21001 > 1.) {
	korcns_pd[113] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[54],0.21001);
	}
	v[3] = korcns_pd[112] * korcns_pd[114];
	v[4] = -v[3];
	t1 = v[4] + x[95];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[0];
	t1 += x[7];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[0];
	t1 += x[8];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[0];
	t1 += x[9];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = 0.99*x[13];
	t1 += -0.12591*x[16];
	t1 += -0.10353*x[17];
	t1 += -0.02358*x[18];
	t1 += -x[19];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = 0.9608*x[14];
	t1 += -0.19834*x[16];
	t1 += -0.35524*x[17];
	t1 += -0.11608*x[18];
	t1 += -x[20];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = 0.95*x[15];
	t1 += -0.01407*x[16];
	t1 += -0.18954*x[17];
	t1 += -0.0839*x[18];
	t1 += -x[21];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[10];
	t1 += -0.93076*x[17];
	t1 += -0.06924*x[18];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[11];
	t1 += -0.93774*x[17];
	t1 += -0.06226*x[18];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[12];
	t1 += -0.9308*x[17];
	t1 += -0.0692*x[18];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -0.33263*x[16];
	t1 += -0.43486*x[17];
	t1 += -0.23251*x[18];
	t1 += x[71];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[44];
	t1 += x[47];
	t1 += x[73];
	t1 += x[75];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[45];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[46];
	t1 += x[51];
	t1 += x[72];
	t1 += x[74];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -0.12591*x[26];
	t1 += -0.19834*x[27];
	t1 += -0.01407*x[28];
	t1 += x[76];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -0.10353*x[26];
	t1 += -0.35524*x[27];
	t1 += -0.18954*x[28];
	t1 += x[77];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -0.02358*x[26];
	t1 += -0.11608*x[27];
	t1 += -0.0839*x[28];
	t1 += x[78];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[58];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[59];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[60];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[69];
	t1 += -x[70];
	t1 += x[82];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -0.0891*x[69];
	t1 += -0.0891*x[70];
	t1 += x[94];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[55];
	t1 += -0.02*x[87];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[56];
	t1 += -0.07*x[87];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[57];
	t1 += -0.91*x[87];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[83];
	t1 += -x[84];
	t1 += -x[85];
	t1 += x[86];
	t1 += -x[94];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[86];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[90];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[79];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -0.93076*x[64];
	t1 += -0.93774*x[65];
	t1 += -0.9308*x[66];
	t1 += x[80];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -0.06924*x[64];
	t1 += -0.06226*x[65];
	t1 += -0.0692*x[66];
	t1 += x[81];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[32];
	t1 += -x[33];
	t1 += -x[34];
	t1 += 0.90909*x[35];
	t1 += 0.81466*x[36];
	t1 += 0.92521*x[37];
	t1 += -x[63];
	t1 += -x[67];
	t1 += -x[68];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[23];
	t1 += -x[52];
	t1 += -x[55];
	t1 += -x[58];
	t1 += -x[76];
	t1 += -x[79];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[24];
	t1 += -x[53];
	t1 += -x[56];
	t1 += -x[59];
	t1 += -x[77];
	t1 += -x[80];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[25];
	t1 += -x[54];
	t1 += -x[57];
	t1 += -x[60];
	t1 += -x[78];
	t1 += -x[81];
	c[77] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[103] = korcns_pd[0];
	J[0] = -korcns_pd[1]*0.90909;
	J[23] = 1.;

   /*** derivatives for constraint 2 ***/

	J[104] = korcns_pd[2];
	J[1] = -korcns_pd[3]*0.81466;
	J[26] = 1.;

   /*** derivatives for constraint 3 ***/

	J[105] = korcns_pd[4];
	J[2] = -korcns_pd[5]*0.92521;
	J[29] = 1.;

   /*** derivatives for constraint 4 ***/

	J[175] = -x[4];
	J[24] = -x[35];
	J[145] = -x[1];
	J[11] = -x[29];
	J[107] = x[16];
	J[56] = x[23];

   /*** derivatives for constraint 5 ***/

	J[181] = -x[5];
	J[27] = -x[36];
	J[151] = -x[2];
	J[15] = -x[30];
	J[110] = x[17];
	J[66] = x[24];

   /*** derivatives for constraint 6 ***/

	J[187] = -x[6];
	J[30] = -x[37];
	J[157] = -x[3];
	J[19] = -x[31];
	J[113] = x[18];
	J[79] = x[25];

   /*** derivatives for constraint 7 ***/

	J[163] = -x[7];
	J[32] = -x[32];
	J[146] = -x[1];
	J[12] = -x[29];
	J[116] = x[13];
	J[47] = x[26];

   /*** derivatives for constraint 8 ***/

	J[167] = -x[8];
	J[35] = -x[33];
	J[152] = -x[2];
	J[16] = -x[30];
	J[126] = x[14];
	J[50] = x[27];

   /*** derivatives for constraint 9 ***/

	J[171] = -x[9];
	J[38] = -x[34];
	J[158] = -x[3];
	J[20] = -x[31];
	J[135] = x[15];
	J[53] = x[28];

   /*** derivatives for constraint 10 ***/

	J[193] = korcns_pd[10]*korcns_pd[11];
	dv[0] = korcns_pd[12]*korcns_pd[7];
	dv[1] = korcns_pd[12]*korcns_pd[9];
	J[219] = dv[0]*korcns_pd[8];
	dv[1] = -dv[1]*0.61447;
	J[216] = dv[1]*korcns_pd[6];
	J[117] = 1.;

   /*** derivatives for constraint 11 ***/

	J[194] = korcns_pd[14]*korcns_pd[15];
	dv[0] = -korcns_pd[16]*1.60111;
	J[222] = dv[0]*korcns_pd[13];
	J[127] = 1.;

   /*** derivatives for constraint 12 ***/

	J[195] = korcns_pd[21]*korcns_pd[22];
	dv[0] = korcns_pd[23]*korcns_pd[18];
	dv[1] = korcns_pd[23]*korcns_pd[20];
	J[228] = dv[0]*korcns_pd[19];
	dv[1] = -dv[1]*0.52019;
	J[225] = dv[1]*korcns_pd[17];
	J[136] = 1.;

   /*** derivatives for constraint 13 ***/

	J[92] = -korcns_pd[24];
	J[118] = -x[19]*0.38258;
	J[217] = x[41];
	J[196] = x[47];

   /*** derivatives for constraint 14 ***/

	J[93] = -korcns_pd[26];
	J[119] = -x[19]*0.0674;
	J[220] = korcns_pd[25];
	J[199] = x[48]*0.5278;

   /*** derivatives for constraint 15 ***/

	J[96] = -korcns_pd[28];
	J[128] = -x[20]*0.53476;
	J[223] = korcns_pd[27];
	J[200] = x[49]*1.21879;

   /*** derivatives for constraint 16 ***/

	J[99] = -korcns_pd[30];
	J[137] = -x[21]*0.16234;
	J[226] = korcns_pd[29];
	J[201] = x[50]*1.11541;

   /*** derivatives for constraint 17 ***/

	J[100] = -korcns_pd[31];
	J[138] = -x[21]*0.42326;
	J[229] = x[43];
	J[204] = x[51];

   /*** derivatives for constraint 18 ***/

	dv[0] = -3.85424*korcns_pd[34];
	dv[1] = dv[0];
	dv[1] *= 0.13372;
	J[147] = dv[1]*korcns_pd[33];
	dv[0] *= 0.86628;
	J[164] = dv[0]*korcns_pd[32];
	J[120] = 1.;

   /*** derivatives for constraint 19 ***/

	dv[0] = -3.51886*korcns_pd[37];
	dv[1] = dv[0];
	dv[1] *= 0.15398;
	J[153] = dv[1]*korcns_pd[36];
	dv[0] *= 0.84602;
	J[168] = dv[0]*korcns_pd[35];
	J[129] = 1.;

   /*** derivatives for constraint 20 ***/

	dv[0] = -3.23592*korcns_pd[40];
	dv[1] = dv[0];
	dv[1] *= 0.17564;
	J[159] = dv[1]*korcns_pd[39];
	dv[0] *= 0.82436;
	J[172] = dv[0]*korcns_pd[38];
	J[139] = 1.;

   /*** derivatives for constraint 21 ***/

	J[13] = -korcns_pd[45]*korcns_pd[44];
	dv[0] = -korcns_pd[45]*korcns_pd[43];
	J[33] = dv[0]*0.154361176524911;
	J[148] = korcns_pd[42];
	J[165] = korcns_pd[41];

   /*** derivatives for constraint 22 ***/

	J[17] = -korcns_pd[50]*korcns_pd[49];
	dv[0] = -korcns_pd[50]*korcns_pd[48];
	J[36] = dv[0]*0.182005153542469;
	J[154] = korcns_pd[47];
	J[169] = korcns_pd[46];

   /*** derivatives for constraint 23 ***/

	J[21] = -korcns_pd[55]*korcns_pd[54];
	dv[0] = -korcns_pd[55]*korcns_pd[53];
	J[39] = dv[0]*0.213062254354893;
	J[160] = korcns_pd[52];
	J[173] = korcns_pd[51];

   /*** derivatives for constraint 24 ***/

	dv[0] = -1.59539*korcns_pd[61];
	dv[1] = dv[0];
	dv[1] *= 0.7518;
	J[149] = dv[1]*korcns_pd[59];
	dv[0] *= 0.2482;
	J[176] = dv[0]*korcns_pd[57];
	J[108] = 1.;

   /*** derivatives for constraint 25 ***/

	dv[0] = -1.34652*korcns_pd[64];
	dv[1] = dv[0];
	dv[1] *= 0.94889;
	J[155] = dv[1]*korcns_pd[63];
	dv[0] *= 0.05111;
	J[182] = dv[0]*korcns_pd[62];
	J[111] = 1.;

   /*** derivatives for constraint 26 ***/

	dv[0] = -1.01839*korcns_pd[67];
	dv[1] = dv[0];
	dv[1] *= 0.99999;
	J[161] = dv[1]*korcns_pd[66];
	dv[0] *= 1.e-05;
	J[188] = dv[0]*korcns_pd[65];
	J[114] = 1.;

   /*** derivatives for constraint 27 ***/

	J[25] = -korcns_pd[72]*korcns_pd[71];
	dv[0] = -korcns_pd[72]*korcns_pd[70];
	J[14] = dv[0]*0.330140994945464;
	J[150] = korcns_pd[69];
	J[177] = korcns_pd[68];

   /*** derivatives for constraint 28 ***/

	J[28] = -korcns_pd[77]*korcns_pd[76];
	dv[0] = -korcns_pd[77]*korcns_pd[75];
	J[18] = dv[0]*0.0538629345867277;
	J[156] = korcns_pd[74];
	J[183] = korcns_pd[73];

   /*** derivatives for constraint 29 ***/

	J[31] = -korcns_pd[82]*korcns_pd[81];
	dv[0] = -korcns_pd[82]*korcns_pd[80];
	J[22] = dv[0]*1.0000100001e-05;
	J[162] = korcns_pd[79];
	J[189] = korcns_pd[78];

   /*** derivatives for constraint 30 ***/

	J[294] = -korcns_pd[84];
	J[268] = x[70]*0.428123;
	J[287] = -korcns_pd[83];
	J[264] = x[69]*0.428123;
	J[231] = x[16];
	J[57] = x[52];

   /*** derivatives for constraint 31 ***/

	J[295] = -korcns_pd[86];
	J[269] = x[70]*0.291478891;
	J[288] = -korcns_pd[85];
	J[265] = x[69]*0.291478891;
	J[234] = x[17];
	J[67] = x[53];

   /*** derivatives for constraint 32 ***/

	J[296] = -korcns_pd[88];
	J[270] = x[70]*0.191298109;
	J[289] = -korcns_pd[87];
	J[266] = x[69]*0.191298109;
	J[237] = x[18];
	J[80] = x[54];

   /*** derivatives for constraint 33 ***/

	J[3] = -x[67];
	J[283] = -x[0];
	J[213] = -x[43];
	J[205] = -x[46];
	J[210] = -x[42];
	J[202] = -x[45];
	J[207] = -x[41];
	J[197] = -x[44];
	J[290] = 1.;

   /*** derivatives for constraint 34 ***/

	J[4] = -x[68];
	J[285] = -x[0];
	J[214] = x[43];
	J[206] = x[46];
	J[211] = x[42];
	J[203] = x[45];
	J[208] = x[41];
	J[198] = x[44];
	J[140] = -x[21];
	J[101] = -x[28];
	J[130] = -x[20];
	J[97] = -x[27];
	J[121] = -x[19];
	J[94] = -x[26];
	J[297] = 1.;
	J[334] = 1.;
	J[341] = -1.;

   /*** derivatives for constraint 35 ***/

	J[5] = -korcns_pd[90];
	dv[0] = -x[0];
	J[190] = dv[0]*0.0747939764;
	dv[1] = -x[0];
	J[184] = dv[1]*0.1853432966;
	J[178] = -x[0]*0.090909;
	J[321] = 1.;

   /*** derivatives for constraint 36 ***/

	J[106] = -korcns_pd[93];
	J[6] = -x[22]*korcns_pd[92];
	dv[0] = -x[22]*x[0];
	dv[1] = dv[0];
	J[191] = dv[1]*0.92521;
	dv[2] = dv[0];
	J[185] = dv[2]*0.81466;
	J[179] = dv[0]*0.90909;
	J[342] = 1.;

   /*** derivatives for constraint 37 ***/

	J[141] = -korcns_pd[96];
	J[54] = -x[28]*0.05;
	J[131] = -korcns_pd[95];
	J[51] = -x[27]*0.0392;
	J[122] = -korcns_pd[94];
	J[48] = -x[26]*0.01;
	J[323] = 1.;

   /*** derivatives for constraint 38 ***/

	J[291] = -korcns_pd[98];
	J[267] = -x[69]*0.9109;
	J[298] = -korcns_pd[97];
	J[271] = -x[70]*0.9109;
	J[330] = 1.;

   /*** derivatives for constraint 39 ***/

	J[246] = -x[18];
	J[81] = -x[57];
	J[243] = -x[17];
	J[68] = -x[56];
	J[240] = -x[16];
	J[58] = -x[55];
	J[319] = 1.;
	J[332] = -1.;

   /*** derivatives for constraint 40 ***/

	J[7] = -x[63];
	J[272] = -x[0];
	J[331] = -1.;
	J[333] = -1.;
	J[335] = -1.;
	J[340] = 1.;

   /*** derivatives for constraint 41 ***/

	J[82] = 0.13*x[60];
	J[259] = 0.13*x[18];
	J[69] = 0.13*x[59];
	J[254] = 0.13*x[17];
	J[59] = 0.13*x[58];
	J[249] = 0.13*x[16];
	J[274] = x[10];
	J[41] = x[64];
	J[337] = -0.13;

   /*** derivatives for constraint 42 ***/

	J[83] = 0.29*x[60];
	J[260] = 0.29*x[18];
	J[70] = 0.29*x[59];
	J[255] = 0.29*x[17];
	J[60] = 0.29*x[58];
	J[250] = 0.29*x[16];
	J[277] = x[11];
	J[43] = x[65];
	J[338] = -0.29;

   /*** derivatives for constraint 43 ***/

	J[84] = 0.58*x[60];
	J[261] = 0.58*x[18];
	J[71] = 0.58*x[59];
	J[256] = 0.58*x[17];
	J[61] = 0.58*x[58];
	J[251] = 0.58*x[16];
	J[280] = x[12];
	J[45] = x[66];
	J[339] = -0.58;

   /*** derivatives for constraint 44 ***/

	J[238] = -korcns_pd[112]*korcns_pd[113];
	dv[0] = -korcns_pd[114]*korcns_pd[111];
	dv[1] = -korcns_pd[114]*korcns_pd[110];
	J[235] = dv[0]*korcns_pd[109];
	J[232] = dv[1]*korcns_pd[108];
	J[345] = 1.;

   /*** derivatives for constraint 45 ***/

	J[8] = -1.;
	J[34] = 1.;

   /*** derivatives for constraint 46 ***/

	J[9] = -1.;
	J[37] = 1.;

   /*** derivatives for constraint 47 ***/

	J[10] = -1.;
	J[40] = 1.;

   /*** derivatives for constraint 48 ***/

	J[49] = 0.99;
	J[62] = -0.12591;
	J[72] = -0.10353;
	J[85] = -0.02358;
	J[95] = -1.;

   /*** derivatives for constraint 49 ***/

	J[52] = 0.9608;
	J[63] = -0.19834;
	J[73] = -0.35524;
	J[86] = -0.11608;
	J[98] = -1.;

   /*** derivatives for constraint 50 ***/

	J[55] = 0.95;
	J[64] = -0.01407;
	J[74] = -0.18954;
	J[87] = -0.0839;
	J[102] = -1.;

   /*** derivatives for constraint 51 ***/

	J[42] = 1.;
	J[75] = -0.93076;
	J[88] = -0.06924;

   /*** derivatives for constraint 52 ***/

	J[44] = 1.;
	J[76] = -0.93774;
	J[89] = -0.06226;

   /*** derivatives for constraint 53 ***/

	J[46] = 1.;
	J[77] = -0.9308;
	J[90] = -0.0692;

   /*** derivatives for constraint 54 ***/

	J[65] = -0.33263;
	J[78] = -0.43486;
	J[91] = -0.23251;
	J[301] = 1.;

   /*** derivatives for constraint 55 ***/

	J[209] = -1.;
	J[218] = 1.;
	J[303] = 1.;
	J[305] = 1.;

   /*** derivatives for constraint 56 ***/

	J[212] = -1.;
	J[221] = 1.;
	J[224] = 1.;
	J[227] = 1.;

   /*** derivatives for constraint 57 ***/

	J[215] = -1.;
	J[230] = 1.;
	J[302] = 1.;
	J[304] = 1.;

   /*** derivatives for constraint 58 ***/

	J[123] = -0.12591;
	J[132] = -0.19834;
	J[142] = -0.01407;
	J[306] = 1.;

   /*** derivatives for constraint 59 ***/

	J[124] = -0.10353;
	J[133] = -0.35524;
	J[143] = -0.18954;
	J[308] = 1.;

   /*** derivatives for constraint 60 ***/

	J[125] = -0.02358;
	J[134] = -0.11608;
	J[144] = -0.0839;
	J[310] = 1.;

   /*** derivatives for constraint 61 ***/

	J[252] = 1.;

   /*** derivatives for constraint 62 ***/

	J[257] = 1.;

   /*** derivatives for constraint 63 ***/

	J[262] = 1.;

   /*** derivatives for constraint 64 ***/

	J[292] = -1.;
	J[299] = -1.;
	J[318] = 1.;

   /*** derivatives for constraint 65 ***/

	J[293] = -0.0891;
	J[300] = -0.0891;
	J[343] = 1.;

   /*** derivatives for constraint 66 ***/

	J[241] = 1.;
	J[327] = -0.02;

   /*** derivatives for constraint 67 ***/

	J[244] = 1.;
	J[328] = -0.07;

   /*** derivatives for constraint 68 ***/

	J[247] = 1.;
	J[329] = -0.91;

   /*** derivatives for constraint 69 ***/

	J[320] = 1.;
	J[322] = -1.;
	J[324] = -1.;
	J[325] = 1.;
	J[344] = -1.;

   /*** derivatives for constraint 70 ***/

	J[326] = 1.;

   /*** derivatives for constraint 71 ***/

	J[336] = 1.;

   /*** derivatives for constraint 72 ***/

	J[312] = 1.;

   /*** derivatives for constraint 73 ***/

	J[275] = -0.93076;
	J[278] = -0.93774;
	J[281] = -0.9308;
	J[314] = 1.;

   /*** derivatives for constraint 74 ***/

	J[276] = -0.06924;
	J[279] = -0.06226;
	J[282] = -0.0692;
	J[316] = 1.;

   /*** derivatives for constraint 75 ***/

	J[166] = -1.;
	J[170] = -1.;
	J[174] = -1.;
	J[180] = 0.90909;
	J[186] = 0.81466;
	J[192] = 0.92521;
	J[273] = -1.;
	J[284] = -1.;
	J[286] = -1.;

   /*** derivatives for constraint 76 ***/

	J[109] = 1.;
	J[233] = -1.;
	J[242] = -1.;
	J[253] = -1.;
	J[307] = -1.;
	J[313] = -1.;

   /*** derivatives for constraint 77 ***/

	J[112] = 1.;
	J[236] = -1.;
	J[245] = -1.;
	J[258] = -1.;
	J[309] = -1.;
	J[315] = -1.;

   /*** derivatives for constraint 78 ***/

	J[115] = 1.;
	J[239] = -1.;
	J[248] = -1.;
	J[263] = -1.;
	J[311] = -1.;
	J[317] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
