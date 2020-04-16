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
 fint maxmin_auxcom_[1] = { 78 /* nlc */ };
 fint maxmin_funcom_[424] = {
	27 /* nvar */,
	1 /* nobj */,
	78 /* ncon */,
	390 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	13,
	25,
	37,
	49,
	61,
	73,
	85,
	97,
	109,
	121,
	133,
	145,
	157,
	169,
	181,
	193,
	205,
	217,
	229,
	241,
	253,
	265,
	277,
	289,
	301,
	313,
	391,

	/* rownos */
	1,
	2,
	4,
	7,
	11,
	16,
	22,
	29,
	37,
	46,
	56,
	67,
	1,
	2,
	4,
	7,
	11,
	16,
	22,
	29,
	37,
	46,
	56,
	67,
	1,
	3,
	5,
	8,
	12,
	17,
	23,
	30,
	38,
	47,
	57,
	68,
	1,
	3,
	5,
	8,
	12,
	17,
	23,
	30,
	38,
	47,
	57,
	68,
	2,
	3,
	6,
	9,
	13,
	18,
	24,
	31,
	39,
	48,
	58,
	69,
	2,
	3,
	6,
	9,
	13,
	18,
	24,
	31,
	39,
	48,
	58,
	69,
	4,
	5,
	6,
	10,
	14,
	19,
	25,
	32,
	40,
	49,
	59,
	70,
	4,
	5,
	6,
	10,
	14,
	19,
	25,
	32,
	40,
	49,
	59,
	70,
	7,
	8,
	9,
	10,
	15,
	20,
	26,
	33,
	41,
	50,
	60,
	71,
	7,
	8,
	9,
	10,
	15,
	20,
	26,
	33,
	41,
	50,
	60,
	71,
	11,
	12,
	13,
	14,
	15,
	21,
	27,
	34,
	42,
	51,
	61,
	72,
	11,
	12,
	13,
	14,
	15,
	21,
	27,
	34,
	42,
	51,
	61,
	72,
	16,
	17,
	18,
	19,
	20,
	21,
	28,
	35,
	43,
	52,
	62,
	73,
	16,
	17,
	18,
	19,
	20,
	21,
	28,
	35,
	43,
	52,
	62,
	73,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	36,
	44,
	53,
	63,
	74,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	36,
	44,
	53,
	63,
	74,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	45,
	54,
	64,
	75,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	45,
	54,
	64,
	75,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	55,
	65,
	76,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	55,
	65,
	76,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	66,
	77,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	66,
	77,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	78,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	78,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
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
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78 };

 real maxmin_boundc_[1+54+156] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		0.,
		0.,
		0.,
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

 real maxmin_x0comn_[27] = {
		0.,
		0.,
		0.550375356,
		0.301137904,
		0.292212117,
		0.224052867,
		0.349830504,
		0.856270347,
		0.067113723,
		0.500210669,
		0.998117627,
		0.578733378,
		0.991133039,
		0.762250467,
		0.130692483,
		0.639718759,
		0.159517864,
		0.250080533,
		0.668928609,
		0.435356381,
		0.359700266,
		0.351441368,
		0.13149159,
		0.150101788,
		0.58911365,
		0.830892812,
		0. };

 static real maxmin_pd[234];
static real maxmin_old_x[27];
static int maxmin_xkind = -1;

 static int
maxmin_xcheck(real *x)
{
	real *x1 = maxmin_old_x, *xe = x + 27;
	errno = 0;
	if (maxmin_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	maxmin_xkind = 0;
	return 1;
	}
 real
maxmin_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (maxmin_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[26];
	;}

	if (wantfg & 2) {
	g[26] = 1.;
	}

	return rv;
}

 void
maxmin_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (maxmin_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[0] = v[0] + v[0];
	v[0] = x[3] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[1] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[2] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[4] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[3] = v[0] + v[0];
	v[0] = x[5] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[4] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[5] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[4] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[6] = v[0] + v[0];
	v[0] = x[5] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[7] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[8] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[6] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[9] = v[0] + v[0];
	v[0] = x[7] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[10] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[11] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[6] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[12] = v[0] + v[0];
	v[0] = x[7] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[13] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[14] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[6] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[15] = v[0] + v[0];
	v[0] = x[7] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[16] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[17] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[8] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[18] = v[0] + v[0];
	v[0] = x[9] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[19] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[20] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[8] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[21] = v[0] + v[0];
	v[0] = x[9] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[22] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[23] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[8] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[24] = v[0] + v[0];
	v[0] = x[9] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[25] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[26] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[8] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[27] = v[0] + v[0];
	v[0] = x[9] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[28] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[29] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[10] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[30] = v[0] + v[0];
	v[0] = x[11] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[31] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[32] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[10] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[33] = v[0] + v[0];
	v[0] = x[11] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[34] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[35] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[10] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[36] = v[0] + v[0];
	v[0] = x[11] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[37] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[38] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[10] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[39] = v[0] + v[0];
	v[0] = x[11] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[40] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[41] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[10] - x[8];
	v[1] = v[0] * v[0];
	maxmin_pd[42] = v[0] + v[0];
	v[0] = x[11] - x[9];
	v[2] = v[0] * v[0];
	maxmin_pd[43] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[44] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[12] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[45] = v[0] + v[0];
	v[0] = x[13] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[46] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[47] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[12] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[48] = v[0] + v[0];
	v[0] = x[13] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[49] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[50] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[12] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[51] = v[0] + v[0];
	v[0] = x[13] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[52] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[53] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[12] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[54] = v[0] + v[0];
	v[0] = x[13] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[55] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[56] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[12] - x[8];
	v[1] = v[0] * v[0];
	maxmin_pd[57] = v[0] + v[0];
	v[0] = x[13] - x[9];
	v[2] = v[0] * v[0];
	maxmin_pd[58] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[59] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[12] - x[10];
	v[1] = v[0] * v[0];
	maxmin_pd[60] = v[0] + v[0];
	v[0] = x[13] - x[11];
	v[2] = v[0] * v[0];
	maxmin_pd[61] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[62] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[14] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[63] = v[0] + v[0];
	v[0] = x[15] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[64] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[65] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[14] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[66] = v[0] + v[0];
	v[0] = x[15] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[67] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[68] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[14] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[69] = v[0] + v[0];
	v[0] = x[15] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[70] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[71] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[14] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[72] = v[0] + v[0];
	v[0] = x[15] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[73] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[74] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[14] - x[8];
	v[1] = v[0] * v[0];
	maxmin_pd[75] = v[0] + v[0];
	v[0] = x[15] - x[9];
	v[2] = v[0] * v[0];
	maxmin_pd[76] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[77] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[14] - x[10];
	v[1] = v[0] * v[0];
	maxmin_pd[78] = v[0] + v[0];
	v[0] = x[15] - x[11];
	v[2] = v[0] * v[0];
	maxmin_pd[79] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[80] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[14] - x[12];
	v[1] = v[0] * v[0];
	maxmin_pd[81] = v[0] + v[0];
	v[0] = x[15] - x[13];
	v[2] = v[0] * v[0];
	maxmin_pd[82] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[83] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[16] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[84] = v[0] + v[0];
	v[0] = x[17] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[85] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[86] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[16] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[87] = v[0] + v[0];
	v[0] = x[17] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[88] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[89] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[16] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[90] = v[0] + v[0];
	v[0] = x[17] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[91] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[92] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[16] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[93] = v[0] + v[0];
	v[0] = x[17] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[94] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[95] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[16] - x[8];
	v[1] = v[0] * v[0];
	maxmin_pd[96] = v[0] + v[0];
	v[0] = x[17] - x[9];
	v[2] = v[0] * v[0];
	maxmin_pd[97] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[98] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[16] - x[10];
	v[1] = v[0] * v[0];
	maxmin_pd[99] = v[0] + v[0];
	v[0] = x[17] - x[11];
	v[2] = v[0] * v[0];
	maxmin_pd[100] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[101] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[16] - x[12];
	v[1] = v[0] * v[0];
	maxmin_pd[102] = v[0] + v[0];
	v[0] = x[17] - x[13];
	v[2] = v[0] * v[0];
	maxmin_pd[103] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[104] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[16] - x[14];
	v[1] = v[0] * v[0];
	maxmin_pd[105] = v[0] + v[0];
	v[0] = x[17] - x[15];
	v[2] = v[0] * v[0];
	maxmin_pd[106] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[107] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[18] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[108] = v[0] + v[0];
	v[0] = x[19] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[109] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[110] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[18] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[111] = v[0] + v[0];
	v[0] = x[19] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[112] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[113] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[18] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[114] = v[0] + v[0];
	v[0] = x[19] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[115] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[116] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[18] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[117] = v[0] + v[0];
	v[0] = x[19] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[118] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[119] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[18] - x[8];
	v[1] = v[0] * v[0];
	maxmin_pd[120] = v[0] + v[0];
	v[0] = x[19] - x[9];
	v[2] = v[0] * v[0];
	maxmin_pd[121] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[122] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[18] - x[10];
	v[1] = v[0] * v[0];
	maxmin_pd[123] = v[0] + v[0];
	v[0] = x[19] - x[11];
	v[2] = v[0] * v[0];
	maxmin_pd[124] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[125] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[18] - x[12];
	v[1] = v[0] * v[0];
	maxmin_pd[126] = v[0] + v[0];
	v[0] = x[19] - x[13];
	v[2] = v[0] * v[0];
	maxmin_pd[127] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[128] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = x[18] - x[14];
	v[1] = v[0] * v[0];
	maxmin_pd[129] = v[0] + v[0];
	v[0] = x[19] - x[15];
	v[2] = v[0] * v[0];
	maxmin_pd[130] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[131] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[43] = t1;

  /***  constraint 45  ***/

	v[0] = x[18] - x[16];
	v[1] = v[0] * v[0];
	maxmin_pd[132] = v[0] + v[0];
	v[0] = x[19] - x[17];
	v[2] = v[0] * v[0];
	maxmin_pd[133] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[134] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = x[20] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[135] = v[0] + v[0];
	v[0] = x[21] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[136] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[137] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[45] = t1;

  /***  constraint 47  ***/

	v[0] = x[20] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[138] = v[0] + v[0];
	v[0] = x[21] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[139] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[140] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[46] = t1;

  /***  constraint 48  ***/

	v[0] = x[20] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[141] = v[0] + v[0];
	v[0] = x[21] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[142] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[143] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[47] = t1;

  /***  constraint 49  ***/

	v[0] = x[20] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[144] = v[0] + v[0];
	v[0] = x[21] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[145] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[146] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[48] = t1;

  /***  constraint 50  ***/

	v[0] = x[20] - x[8];
	v[1] = v[0] * v[0];
	maxmin_pd[147] = v[0] + v[0];
	v[0] = x[21] - x[9];
	v[2] = v[0] * v[0];
	maxmin_pd[148] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[149] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[49] = t1;

  /***  constraint 51  ***/

	v[0] = x[20] - x[10];
	v[1] = v[0] * v[0];
	maxmin_pd[150] = v[0] + v[0];
	v[0] = x[21] - x[11];
	v[2] = v[0] * v[0];
	maxmin_pd[151] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[152] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[50] = t1;

  /***  constraint 52  ***/

	v[0] = x[20] - x[12];
	v[1] = v[0] * v[0];
	maxmin_pd[153] = v[0] + v[0];
	v[0] = x[21] - x[13];
	v[2] = v[0] * v[0];
	maxmin_pd[154] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[155] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[51] = t1;

  /***  constraint 53  ***/

	v[0] = x[20] - x[14];
	v[1] = v[0] * v[0];
	maxmin_pd[156] = v[0] + v[0];
	v[0] = x[21] - x[15];
	v[2] = v[0] * v[0];
	maxmin_pd[157] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[158] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[52] = t1;

  /***  constraint 54  ***/

	v[0] = x[20] - x[16];
	v[1] = v[0] * v[0];
	maxmin_pd[159] = v[0] + v[0];
	v[0] = x[21] - x[17];
	v[2] = v[0] * v[0];
	maxmin_pd[160] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[161] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[53] = t1;

  /***  constraint 55  ***/

	v[0] = x[20] - x[18];
	v[1] = v[0] * v[0];
	maxmin_pd[162] = v[0] + v[0];
	v[0] = x[21] - x[19];
	v[2] = v[0] * v[0];
	maxmin_pd[163] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[164] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[54] = t1;

  /***  constraint 56  ***/

	v[0] = x[22] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[165] = v[0] + v[0];
	v[0] = x[23] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[166] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[167] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[55] = t1;

  /***  constraint 57  ***/

	v[0] = x[22] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[168] = v[0] + v[0];
	v[0] = x[23] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[169] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[170] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[56] = t1;

  /***  constraint 58  ***/

	v[0] = x[22] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[171] = v[0] + v[0];
	v[0] = x[23] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[172] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[173] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[57] = t1;

  /***  constraint 59  ***/

	v[0] = x[22] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[174] = v[0] + v[0];
	v[0] = x[23] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[175] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[176] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[58] = t1;

  /***  constraint 60  ***/

	v[0] = x[22] - x[8];
	v[1] = v[0] * v[0];
	maxmin_pd[177] = v[0] + v[0];
	v[0] = x[23] - x[9];
	v[2] = v[0] * v[0];
	maxmin_pd[178] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[179] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[59] = t1;

  /***  constraint 61  ***/

	v[0] = x[22] - x[10];
	v[1] = v[0] * v[0];
	maxmin_pd[180] = v[0] + v[0];
	v[0] = x[23] - x[11];
	v[2] = v[0] * v[0];
	maxmin_pd[181] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[182] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[60] = t1;

  /***  constraint 62  ***/

	v[0] = x[22] - x[12];
	v[1] = v[0] * v[0];
	maxmin_pd[183] = v[0] + v[0];
	v[0] = x[23] - x[13];
	v[2] = v[0] * v[0];
	maxmin_pd[184] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[185] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[61] = t1;

  /***  constraint 63  ***/

	v[0] = x[22] - x[14];
	v[1] = v[0] * v[0];
	maxmin_pd[186] = v[0] + v[0];
	v[0] = x[23] - x[15];
	v[2] = v[0] * v[0];
	maxmin_pd[187] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[188] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[62] = t1;

  /***  constraint 64  ***/

	v[0] = x[22] - x[16];
	v[1] = v[0] * v[0];
	maxmin_pd[189] = v[0] + v[0];
	v[0] = x[23] - x[17];
	v[2] = v[0] * v[0];
	maxmin_pd[190] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[191] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[63] = t1;

  /***  constraint 65  ***/

	v[0] = x[22] - x[18];
	v[1] = v[0] * v[0];
	maxmin_pd[192] = v[0] + v[0];
	v[0] = x[23] - x[19];
	v[2] = v[0] * v[0];
	maxmin_pd[193] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[194] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[64] = t1;

  /***  constraint 66  ***/

	v[0] = x[22] - x[20];
	v[1] = v[0] * v[0];
	maxmin_pd[195] = v[0] + v[0];
	v[0] = x[23] - x[21];
	v[2] = v[0] * v[0];
	maxmin_pd[196] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[197] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[65] = t1;

  /***  constraint 67  ***/

	v[0] = x[24] - x[0];
	v[1] = v[0] * v[0];
	maxmin_pd[198] = v[0] + v[0];
	v[0] = x[25] - x[1];
	v[2] = v[0] * v[0];
	maxmin_pd[199] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[200] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[66] = t1;

  /***  constraint 68  ***/

	v[0] = x[24] - x[2];
	v[1] = v[0] * v[0];
	maxmin_pd[201] = v[0] + v[0];
	v[0] = x[25] - x[3];
	v[2] = v[0] * v[0];
	maxmin_pd[202] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[203] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[67] = t1;

  /***  constraint 69  ***/

	v[0] = x[24] - x[4];
	v[1] = v[0] * v[0];
	maxmin_pd[204] = v[0] + v[0];
	v[0] = x[25] - x[5];
	v[2] = v[0] * v[0];
	maxmin_pd[205] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[206] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[68] = t1;

  /***  constraint 70  ***/

	v[0] = x[24] - x[6];
	v[1] = v[0] * v[0];
	maxmin_pd[207] = v[0] + v[0];
	v[0] = x[25] - x[7];
	v[2] = v[0] * v[0];
	maxmin_pd[208] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[209] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[69] = t1;

  /***  constraint 71  ***/

	v[0] = x[24] - x[8];
	v[1] = v[0] * v[0];
	maxmin_pd[210] = v[0] + v[0];
	v[0] = x[25] - x[9];
	v[2] = v[0] * v[0];
	maxmin_pd[211] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[212] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[70] = t1;

  /***  constraint 72  ***/

	v[0] = x[24] - x[10];
	v[1] = v[0] * v[0];
	maxmin_pd[213] = v[0] + v[0];
	v[0] = x[25] - x[11];
	v[2] = v[0] * v[0];
	maxmin_pd[214] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[215] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[71] = t1;

  /***  constraint 73  ***/

	v[0] = x[24] - x[12];
	v[1] = v[0] * v[0];
	maxmin_pd[216] = v[0] + v[0];
	v[0] = x[25] - x[13];
	v[2] = v[0] * v[0];
	maxmin_pd[217] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[218] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[72] = t1;

  /***  constraint 74  ***/

	v[0] = x[24] - x[14];
	v[1] = v[0] * v[0];
	maxmin_pd[219] = v[0] + v[0];
	v[0] = x[25] - x[15];
	v[2] = v[0] * v[0];
	maxmin_pd[220] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[221] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[73] = t1;

  /***  constraint 75  ***/

	v[0] = x[24] - x[16];
	v[1] = v[0] * v[0];
	maxmin_pd[222] = v[0] + v[0];
	v[0] = x[25] - x[17];
	v[2] = v[0] * v[0];
	maxmin_pd[223] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[224] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[74] = t1;

  /***  constraint 76  ***/

	v[0] = x[24] - x[18];
	v[1] = v[0] * v[0];
	maxmin_pd[225] = v[0] + v[0];
	v[0] = x[25] - x[19];
	v[2] = v[0] * v[0];
	maxmin_pd[226] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[227] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[75] = t1;

  /***  constraint 77  ***/

	v[0] = x[24] - x[20];
	v[1] = v[0] * v[0];
	maxmin_pd[228] = v[0] + v[0];
	v[0] = x[25] - x[21];
	v[2] = v[0] * v[0];
	maxmin_pd[229] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[230] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[76] = t1;

  /***  constraint 78  ***/

	v[0] = x[24] - x[22];
	v[1] = v[0] * v[0];
	maxmin_pd[231] = v[0] + v[0];
	v[0] = x[25] - x[23];
	v[2] = v[0] * v[0];
	maxmin_pd[232] = v[0] + v[0];
	v[0] = v[1] + v[2];
	v[2] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[2] <= 0.) {
	domain_("sqrt'", &v[2], 5L);
	}
	maxmin_pd[233] = 0.5 / v[2];
	v[0] = -v[2];
	t1 = v[0] + -x[26];
	c[77] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -maxmin_pd[2];
	dv[0] *= maxmin_pd[1];
	J[12] = -dv[0];
	J[36] = dv[0];
	dv[1] = -maxmin_pd[2]*maxmin_pd[0];
	J[0] = -dv[1];
	J[24] = dv[1];
	J[312] = -1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -maxmin_pd[5];
	dv[0] *= maxmin_pd[4];
	J[13] = -dv[0];
	J[60] = dv[0];
	dv[1] = -maxmin_pd[5]*maxmin_pd[3];
	J[1] = -dv[1];
	J[48] = dv[1];
	J[313] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -maxmin_pd[8];
	dv[0] *= maxmin_pd[7];
	J[37] = -dv[0];
	J[61] = dv[0];
	dv[1] = -maxmin_pd[8]*maxmin_pd[6];
	J[25] = -dv[1];
	J[49] = dv[1];
	J[314] = -1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -maxmin_pd[11];
	dv[0] *= maxmin_pd[10];
	J[14] = -dv[0];
	J[84] = dv[0];
	dv[1] = -maxmin_pd[11]*maxmin_pd[9];
	J[2] = -dv[1];
	J[72] = dv[1];
	J[315] = -1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -maxmin_pd[14];
	dv[0] *= maxmin_pd[13];
	J[38] = -dv[0];
	J[85] = dv[0];
	dv[1] = -maxmin_pd[14]*maxmin_pd[12];
	J[26] = -dv[1];
	J[73] = dv[1];
	J[316] = -1.;

   /*** derivatives for constraint 6 ***/

	dv[0] = -maxmin_pd[17];
	dv[0] *= maxmin_pd[16];
	J[62] = -dv[0];
	J[86] = dv[0];
	dv[1] = -maxmin_pd[17]*maxmin_pd[15];
	J[50] = -dv[1];
	J[74] = dv[1];
	J[317] = -1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -maxmin_pd[20];
	dv[0] *= maxmin_pd[19];
	J[15] = -dv[0];
	J[108] = dv[0];
	dv[1] = -maxmin_pd[20]*maxmin_pd[18];
	J[3] = -dv[1];
	J[96] = dv[1];
	J[318] = -1.;

   /*** derivatives for constraint 8 ***/

	dv[0] = -maxmin_pd[23];
	dv[0] *= maxmin_pd[22];
	J[39] = -dv[0];
	J[109] = dv[0];
	dv[1] = -maxmin_pd[23]*maxmin_pd[21];
	J[27] = -dv[1];
	J[97] = dv[1];
	J[319] = -1.;

   /*** derivatives for constraint 9 ***/

	dv[0] = -maxmin_pd[26];
	dv[0] *= maxmin_pd[25];
	J[63] = -dv[0];
	J[110] = dv[0];
	dv[1] = -maxmin_pd[26]*maxmin_pd[24];
	J[51] = -dv[1];
	J[98] = dv[1];
	J[320] = -1.;

   /*** derivatives for constraint 10 ***/

	dv[0] = -maxmin_pd[29];
	dv[0] *= maxmin_pd[28];
	J[87] = -dv[0];
	J[111] = dv[0];
	dv[1] = -maxmin_pd[29]*maxmin_pd[27];
	J[75] = -dv[1];
	J[99] = dv[1];
	J[321] = -1.;

   /*** derivatives for constraint 11 ***/

	dv[0] = -maxmin_pd[32];
	dv[0] *= maxmin_pd[31];
	J[16] = -dv[0];
	J[132] = dv[0];
	dv[1] = -maxmin_pd[32]*maxmin_pd[30];
	J[4] = -dv[1];
	J[120] = dv[1];
	J[322] = -1.;

   /*** derivatives for constraint 12 ***/

	dv[0] = -maxmin_pd[35];
	dv[0] *= maxmin_pd[34];
	J[40] = -dv[0];
	J[133] = dv[0];
	dv[1] = -maxmin_pd[35]*maxmin_pd[33];
	J[28] = -dv[1];
	J[121] = dv[1];
	J[323] = -1.;

   /*** derivatives for constraint 13 ***/

	dv[0] = -maxmin_pd[38];
	dv[0] *= maxmin_pd[37];
	J[64] = -dv[0];
	J[134] = dv[0];
	dv[1] = -maxmin_pd[38]*maxmin_pd[36];
	J[52] = -dv[1];
	J[122] = dv[1];
	J[324] = -1.;

   /*** derivatives for constraint 14 ***/

	dv[0] = -maxmin_pd[41];
	dv[0] *= maxmin_pd[40];
	J[88] = -dv[0];
	J[135] = dv[0];
	dv[1] = -maxmin_pd[41]*maxmin_pd[39];
	J[76] = -dv[1];
	J[123] = dv[1];
	J[325] = -1.;

   /*** derivatives for constraint 15 ***/

	dv[0] = -maxmin_pd[44];
	dv[0] *= maxmin_pd[43];
	J[112] = -dv[0];
	J[136] = dv[0];
	dv[1] = -maxmin_pd[44]*maxmin_pd[42];
	J[100] = -dv[1];
	J[124] = dv[1];
	J[326] = -1.;

   /*** derivatives for constraint 16 ***/

	dv[0] = -maxmin_pd[47];
	dv[0] *= maxmin_pd[46];
	J[17] = -dv[0];
	J[156] = dv[0];
	dv[1] = -maxmin_pd[47]*maxmin_pd[45];
	J[5] = -dv[1];
	J[144] = dv[1];
	J[327] = -1.;

   /*** derivatives for constraint 17 ***/

	dv[0] = -maxmin_pd[50];
	dv[0] *= maxmin_pd[49];
	J[41] = -dv[0];
	J[157] = dv[0];
	dv[1] = -maxmin_pd[50]*maxmin_pd[48];
	J[29] = -dv[1];
	J[145] = dv[1];
	J[328] = -1.;

   /*** derivatives for constraint 18 ***/

	dv[0] = -maxmin_pd[53];
	dv[0] *= maxmin_pd[52];
	J[65] = -dv[0];
	J[158] = dv[0];
	dv[1] = -maxmin_pd[53]*maxmin_pd[51];
	J[53] = -dv[1];
	J[146] = dv[1];
	J[329] = -1.;

   /*** derivatives for constraint 19 ***/

	dv[0] = -maxmin_pd[56];
	dv[0] *= maxmin_pd[55];
	J[89] = -dv[0];
	J[159] = dv[0];
	dv[1] = -maxmin_pd[56]*maxmin_pd[54];
	J[77] = -dv[1];
	J[147] = dv[1];
	J[330] = -1.;

   /*** derivatives for constraint 20 ***/

	dv[0] = -maxmin_pd[59];
	dv[0] *= maxmin_pd[58];
	J[113] = -dv[0];
	J[160] = dv[0];
	dv[1] = -maxmin_pd[59]*maxmin_pd[57];
	J[101] = -dv[1];
	J[148] = dv[1];
	J[331] = -1.;

   /*** derivatives for constraint 21 ***/

	dv[0] = -maxmin_pd[62];
	dv[0] *= maxmin_pd[61];
	J[137] = -dv[0];
	J[161] = dv[0];
	dv[1] = -maxmin_pd[62]*maxmin_pd[60];
	J[125] = -dv[1];
	J[149] = dv[1];
	J[332] = -1.;

   /*** derivatives for constraint 22 ***/

	dv[0] = -maxmin_pd[65];
	dv[0] *= maxmin_pd[64];
	J[18] = -dv[0];
	J[180] = dv[0];
	dv[1] = -maxmin_pd[65]*maxmin_pd[63];
	J[6] = -dv[1];
	J[168] = dv[1];
	J[333] = -1.;

   /*** derivatives for constraint 23 ***/

	dv[0] = -maxmin_pd[68];
	dv[0] *= maxmin_pd[67];
	J[42] = -dv[0];
	J[181] = dv[0];
	dv[1] = -maxmin_pd[68]*maxmin_pd[66];
	J[30] = -dv[1];
	J[169] = dv[1];
	J[334] = -1.;

   /*** derivatives for constraint 24 ***/

	dv[0] = -maxmin_pd[71];
	dv[0] *= maxmin_pd[70];
	J[66] = -dv[0];
	J[182] = dv[0];
	dv[1] = -maxmin_pd[71]*maxmin_pd[69];
	J[54] = -dv[1];
	J[170] = dv[1];
	J[335] = -1.;

   /*** derivatives for constraint 25 ***/

	dv[0] = -maxmin_pd[74];
	dv[0] *= maxmin_pd[73];
	J[90] = -dv[0];
	J[183] = dv[0];
	dv[1] = -maxmin_pd[74]*maxmin_pd[72];
	J[78] = -dv[1];
	J[171] = dv[1];
	J[336] = -1.;

   /*** derivatives for constraint 26 ***/

	dv[0] = -maxmin_pd[77];
	dv[0] *= maxmin_pd[76];
	J[114] = -dv[0];
	J[184] = dv[0];
	dv[1] = -maxmin_pd[77]*maxmin_pd[75];
	J[102] = -dv[1];
	J[172] = dv[1];
	J[337] = -1.;

   /*** derivatives for constraint 27 ***/

	dv[0] = -maxmin_pd[80];
	dv[0] *= maxmin_pd[79];
	J[138] = -dv[0];
	J[185] = dv[0];
	dv[1] = -maxmin_pd[80]*maxmin_pd[78];
	J[126] = -dv[1];
	J[173] = dv[1];
	J[338] = -1.;

   /*** derivatives for constraint 28 ***/

	dv[0] = -maxmin_pd[83];
	dv[0] *= maxmin_pd[82];
	J[162] = -dv[0];
	J[186] = dv[0];
	dv[1] = -maxmin_pd[83]*maxmin_pd[81];
	J[150] = -dv[1];
	J[174] = dv[1];
	J[339] = -1.;

   /*** derivatives for constraint 29 ***/

	dv[0] = -maxmin_pd[86];
	dv[0] *= maxmin_pd[85];
	J[19] = -dv[0];
	J[204] = dv[0];
	dv[1] = -maxmin_pd[86]*maxmin_pd[84];
	J[7] = -dv[1];
	J[192] = dv[1];
	J[340] = -1.;

   /*** derivatives for constraint 30 ***/

	dv[0] = -maxmin_pd[89];
	dv[0] *= maxmin_pd[88];
	J[43] = -dv[0];
	J[205] = dv[0];
	dv[1] = -maxmin_pd[89]*maxmin_pd[87];
	J[31] = -dv[1];
	J[193] = dv[1];
	J[341] = -1.;

   /*** derivatives for constraint 31 ***/

	dv[0] = -maxmin_pd[92];
	dv[0] *= maxmin_pd[91];
	J[67] = -dv[0];
	J[206] = dv[0];
	dv[1] = -maxmin_pd[92]*maxmin_pd[90];
	J[55] = -dv[1];
	J[194] = dv[1];
	J[342] = -1.;

   /*** derivatives for constraint 32 ***/

	dv[0] = -maxmin_pd[95];
	dv[0] *= maxmin_pd[94];
	J[91] = -dv[0];
	J[207] = dv[0];
	dv[1] = -maxmin_pd[95]*maxmin_pd[93];
	J[79] = -dv[1];
	J[195] = dv[1];
	J[343] = -1.;

   /*** derivatives for constraint 33 ***/

	dv[0] = -maxmin_pd[98];
	dv[0] *= maxmin_pd[97];
	J[115] = -dv[0];
	J[208] = dv[0];
	dv[1] = -maxmin_pd[98]*maxmin_pd[96];
	J[103] = -dv[1];
	J[196] = dv[1];
	J[344] = -1.;

   /*** derivatives for constraint 34 ***/

	dv[0] = -maxmin_pd[101];
	dv[0] *= maxmin_pd[100];
	J[139] = -dv[0];
	J[209] = dv[0];
	dv[1] = -maxmin_pd[101]*maxmin_pd[99];
	J[127] = -dv[1];
	J[197] = dv[1];
	J[345] = -1.;

   /*** derivatives for constraint 35 ***/

	dv[0] = -maxmin_pd[104];
	dv[0] *= maxmin_pd[103];
	J[163] = -dv[0];
	J[210] = dv[0];
	dv[1] = -maxmin_pd[104]*maxmin_pd[102];
	J[151] = -dv[1];
	J[198] = dv[1];
	J[346] = -1.;

   /*** derivatives for constraint 36 ***/

	dv[0] = -maxmin_pd[107];
	dv[0] *= maxmin_pd[106];
	J[187] = -dv[0];
	J[211] = dv[0];
	dv[1] = -maxmin_pd[107]*maxmin_pd[105];
	J[175] = -dv[1];
	J[199] = dv[1];
	J[347] = -1.;

   /*** derivatives for constraint 37 ***/

	dv[0] = -maxmin_pd[110];
	dv[0] *= maxmin_pd[109];
	J[20] = -dv[0];
	J[228] = dv[0];
	dv[1] = -maxmin_pd[110]*maxmin_pd[108];
	J[8] = -dv[1];
	J[216] = dv[1];
	J[348] = -1.;

   /*** derivatives for constraint 38 ***/

	dv[0] = -maxmin_pd[113];
	dv[0] *= maxmin_pd[112];
	J[44] = -dv[0];
	J[229] = dv[0];
	dv[1] = -maxmin_pd[113]*maxmin_pd[111];
	J[32] = -dv[1];
	J[217] = dv[1];
	J[349] = -1.;

   /*** derivatives for constraint 39 ***/

	dv[0] = -maxmin_pd[116];
	dv[0] *= maxmin_pd[115];
	J[68] = -dv[0];
	J[230] = dv[0];
	dv[1] = -maxmin_pd[116]*maxmin_pd[114];
	J[56] = -dv[1];
	J[218] = dv[1];
	J[350] = -1.;

   /*** derivatives for constraint 40 ***/

	dv[0] = -maxmin_pd[119];
	dv[0] *= maxmin_pd[118];
	J[92] = -dv[0];
	J[231] = dv[0];
	dv[1] = -maxmin_pd[119]*maxmin_pd[117];
	J[80] = -dv[1];
	J[219] = dv[1];
	J[351] = -1.;

   /*** derivatives for constraint 41 ***/

	dv[0] = -maxmin_pd[122];
	dv[0] *= maxmin_pd[121];
	J[116] = -dv[0];
	J[232] = dv[0];
	dv[1] = -maxmin_pd[122]*maxmin_pd[120];
	J[104] = -dv[1];
	J[220] = dv[1];
	J[352] = -1.;

   /*** derivatives for constraint 42 ***/

	dv[0] = -maxmin_pd[125];
	dv[0] *= maxmin_pd[124];
	J[140] = -dv[0];
	J[233] = dv[0];
	dv[1] = -maxmin_pd[125]*maxmin_pd[123];
	J[128] = -dv[1];
	J[221] = dv[1];
	J[353] = -1.;

   /*** derivatives for constraint 43 ***/

	dv[0] = -maxmin_pd[128];
	dv[0] *= maxmin_pd[127];
	J[164] = -dv[0];
	J[234] = dv[0];
	dv[1] = -maxmin_pd[128]*maxmin_pd[126];
	J[152] = -dv[1];
	J[222] = dv[1];
	J[354] = -1.;

   /*** derivatives for constraint 44 ***/

	dv[0] = -maxmin_pd[131];
	dv[0] *= maxmin_pd[130];
	J[188] = -dv[0];
	J[235] = dv[0];
	dv[1] = -maxmin_pd[131]*maxmin_pd[129];
	J[176] = -dv[1];
	J[223] = dv[1];
	J[355] = -1.;

   /*** derivatives for constraint 45 ***/

	dv[0] = -maxmin_pd[134];
	dv[0] *= maxmin_pd[133];
	J[212] = -dv[0];
	J[236] = dv[0];
	dv[1] = -maxmin_pd[134]*maxmin_pd[132];
	J[200] = -dv[1];
	J[224] = dv[1];
	J[356] = -1.;

   /*** derivatives for constraint 46 ***/

	dv[0] = -maxmin_pd[137];
	dv[0] *= maxmin_pd[136];
	J[21] = -dv[0];
	J[252] = dv[0];
	dv[1] = -maxmin_pd[137]*maxmin_pd[135];
	J[9] = -dv[1];
	J[240] = dv[1];
	J[357] = -1.;

   /*** derivatives for constraint 47 ***/

	dv[0] = -maxmin_pd[140];
	dv[0] *= maxmin_pd[139];
	J[45] = -dv[0];
	J[253] = dv[0];
	dv[1] = -maxmin_pd[140]*maxmin_pd[138];
	J[33] = -dv[1];
	J[241] = dv[1];
	J[358] = -1.;

   /*** derivatives for constraint 48 ***/

	dv[0] = -maxmin_pd[143];
	dv[0] *= maxmin_pd[142];
	J[69] = -dv[0];
	J[254] = dv[0];
	dv[1] = -maxmin_pd[143]*maxmin_pd[141];
	J[57] = -dv[1];
	J[242] = dv[1];
	J[359] = -1.;

   /*** derivatives for constraint 49 ***/

	dv[0] = -maxmin_pd[146];
	dv[0] *= maxmin_pd[145];
	J[93] = -dv[0];
	J[255] = dv[0];
	dv[1] = -maxmin_pd[146]*maxmin_pd[144];
	J[81] = -dv[1];
	J[243] = dv[1];
	J[360] = -1.;

   /*** derivatives for constraint 50 ***/

	dv[0] = -maxmin_pd[149];
	dv[0] *= maxmin_pd[148];
	J[117] = -dv[0];
	J[256] = dv[0];
	dv[1] = -maxmin_pd[149]*maxmin_pd[147];
	J[105] = -dv[1];
	J[244] = dv[1];
	J[361] = -1.;

   /*** derivatives for constraint 51 ***/

	dv[0] = -maxmin_pd[152];
	dv[0] *= maxmin_pd[151];
	J[141] = -dv[0];
	J[257] = dv[0];
	dv[1] = -maxmin_pd[152]*maxmin_pd[150];
	J[129] = -dv[1];
	J[245] = dv[1];
	J[362] = -1.;

   /*** derivatives for constraint 52 ***/

	dv[0] = -maxmin_pd[155];
	dv[0] *= maxmin_pd[154];
	J[165] = -dv[0];
	J[258] = dv[0];
	dv[1] = -maxmin_pd[155]*maxmin_pd[153];
	J[153] = -dv[1];
	J[246] = dv[1];
	J[363] = -1.;

   /*** derivatives for constraint 53 ***/

	dv[0] = -maxmin_pd[158];
	dv[0] *= maxmin_pd[157];
	J[189] = -dv[0];
	J[259] = dv[0];
	dv[1] = -maxmin_pd[158]*maxmin_pd[156];
	J[177] = -dv[1];
	J[247] = dv[1];
	J[364] = -1.;

   /*** derivatives for constraint 54 ***/

	dv[0] = -maxmin_pd[161];
	dv[0] *= maxmin_pd[160];
	J[213] = -dv[0];
	J[260] = dv[0];
	dv[1] = -maxmin_pd[161]*maxmin_pd[159];
	J[201] = -dv[1];
	J[248] = dv[1];
	J[365] = -1.;

   /*** derivatives for constraint 55 ***/

	dv[0] = -maxmin_pd[164];
	dv[0] *= maxmin_pd[163];
	J[237] = -dv[0];
	J[261] = dv[0];
	dv[1] = -maxmin_pd[164]*maxmin_pd[162];
	J[225] = -dv[1];
	J[249] = dv[1];
	J[366] = -1.;

   /*** derivatives for constraint 56 ***/

	dv[0] = -maxmin_pd[167];
	dv[0] *= maxmin_pd[166];
	J[22] = -dv[0];
	J[276] = dv[0];
	dv[1] = -maxmin_pd[167]*maxmin_pd[165];
	J[10] = -dv[1];
	J[264] = dv[1];
	J[367] = -1.;

   /*** derivatives for constraint 57 ***/

	dv[0] = -maxmin_pd[170];
	dv[0] *= maxmin_pd[169];
	J[46] = -dv[0];
	J[277] = dv[0];
	dv[1] = -maxmin_pd[170]*maxmin_pd[168];
	J[34] = -dv[1];
	J[265] = dv[1];
	J[368] = -1.;

   /*** derivatives for constraint 58 ***/

	dv[0] = -maxmin_pd[173];
	dv[0] *= maxmin_pd[172];
	J[70] = -dv[0];
	J[278] = dv[0];
	dv[1] = -maxmin_pd[173]*maxmin_pd[171];
	J[58] = -dv[1];
	J[266] = dv[1];
	J[369] = -1.;

   /*** derivatives for constraint 59 ***/

	dv[0] = -maxmin_pd[176];
	dv[0] *= maxmin_pd[175];
	J[94] = -dv[0];
	J[279] = dv[0];
	dv[1] = -maxmin_pd[176]*maxmin_pd[174];
	J[82] = -dv[1];
	J[267] = dv[1];
	J[370] = -1.;

   /*** derivatives for constraint 60 ***/

	dv[0] = -maxmin_pd[179];
	dv[0] *= maxmin_pd[178];
	J[118] = -dv[0];
	J[280] = dv[0];
	dv[1] = -maxmin_pd[179]*maxmin_pd[177];
	J[106] = -dv[1];
	J[268] = dv[1];
	J[371] = -1.;

   /*** derivatives for constraint 61 ***/

	dv[0] = -maxmin_pd[182];
	dv[0] *= maxmin_pd[181];
	J[142] = -dv[0];
	J[281] = dv[0];
	dv[1] = -maxmin_pd[182]*maxmin_pd[180];
	J[130] = -dv[1];
	J[269] = dv[1];
	J[372] = -1.;

   /*** derivatives for constraint 62 ***/

	dv[0] = -maxmin_pd[185];
	dv[0] *= maxmin_pd[184];
	J[166] = -dv[0];
	J[282] = dv[0];
	dv[1] = -maxmin_pd[185]*maxmin_pd[183];
	J[154] = -dv[1];
	J[270] = dv[1];
	J[373] = -1.;

   /*** derivatives for constraint 63 ***/

	dv[0] = -maxmin_pd[188];
	dv[0] *= maxmin_pd[187];
	J[190] = -dv[0];
	J[283] = dv[0];
	dv[1] = -maxmin_pd[188]*maxmin_pd[186];
	J[178] = -dv[1];
	J[271] = dv[1];
	J[374] = -1.;

   /*** derivatives for constraint 64 ***/

	dv[0] = -maxmin_pd[191];
	dv[0] *= maxmin_pd[190];
	J[214] = -dv[0];
	J[284] = dv[0];
	dv[1] = -maxmin_pd[191]*maxmin_pd[189];
	J[202] = -dv[1];
	J[272] = dv[1];
	J[375] = -1.;

   /*** derivatives for constraint 65 ***/

	dv[0] = -maxmin_pd[194];
	dv[0] *= maxmin_pd[193];
	J[238] = -dv[0];
	J[285] = dv[0];
	dv[1] = -maxmin_pd[194]*maxmin_pd[192];
	J[226] = -dv[1];
	J[273] = dv[1];
	J[376] = -1.;

   /*** derivatives for constraint 66 ***/

	dv[0] = -maxmin_pd[197];
	dv[0] *= maxmin_pd[196];
	J[262] = -dv[0];
	J[286] = dv[0];
	dv[1] = -maxmin_pd[197]*maxmin_pd[195];
	J[250] = -dv[1];
	J[274] = dv[1];
	J[377] = -1.;

   /*** derivatives for constraint 67 ***/

	dv[0] = -maxmin_pd[200];
	dv[0] *= maxmin_pd[199];
	J[23] = -dv[0];
	J[300] = dv[0];
	dv[1] = -maxmin_pd[200]*maxmin_pd[198];
	J[11] = -dv[1];
	J[288] = dv[1];
	J[378] = -1.;

   /*** derivatives for constraint 68 ***/

	dv[0] = -maxmin_pd[203];
	dv[0] *= maxmin_pd[202];
	J[47] = -dv[0];
	J[301] = dv[0];
	dv[1] = -maxmin_pd[203]*maxmin_pd[201];
	J[35] = -dv[1];
	J[289] = dv[1];
	J[379] = -1.;

   /*** derivatives for constraint 69 ***/

	dv[0] = -maxmin_pd[206];
	dv[0] *= maxmin_pd[205];
	J[71] = -dv[0];
	J[302] = dv[0];
	dv[1] = -maxmin_pd[206]*maxmin_pd[204];
	J[59] = -dv[1];
	J[290] = dv[1];
	J[380] = -1.;

   /*** derivatives for constraint 70 ***/

	dv[0] = -maxmin_pd[209];
	dv[0] *= maxmin_pd[208];
	J[95] = -dv[0];
	J[303] = dv[0];
	dv[1] = -maxmin_pd[209]*maxmin_pd[207];
	J[83] = -dv[1];
	J[291] = dv[1];
	J[381] = -1.;

   /*** derivatives for constraint 71 ***/

	dv[0] = -maxmin_pd[212];
	dv[0] *= maxmin_pd[211];
	J[119] = -dv[0];
	J[304] = dv[0];
	dv[1] = -maxmin_pd[212]*maxmin_pd[210];
	J[107] = -dv[1];
	J[292] = dv[1];
	J[382] = -1.;

   /*** derivatives for constraint 72 ***/

	dv[0] = -maxmin_pd[215];
	dv[0] *= maxmin_pd[214];
	J[143] = -dv[0];
	J[305] = dv[0];
	dv[1] = -maxmin_pd[215]*maxmin_pd[213];
	J[131] = -dv[1];
	J[293] = dv[1];
	J[383] = -1.;

   /*** derivatives for constraint 73 ***/

	dv[0] = -maxmin_pd[218];
	dv[0] *= maxmin_pd[217];
	J[167] = -dv[0];
	J[306] = dv[0];
	dv[1] = -maxmin_pd[218]*maxmin_pd[216];
	J[155] = -dv[1];
	J[294] = dv[1];
	J[384] = -1.;

   /*** derivatives for constraint 74 ***/

	dv[0] = -maxmin_pd[221];
	dv[0] *= maxmin_pd[220];
	J[191] = -dv[0];
	J[307] = dv[0];
	dv[1] = -maxmin_pd[221]*maxmin_pd[219];
	J[179] = -dv[1];
	J[295] = dv[1];
	J[385] = -1.;

   /*** derivatives for constraint 75 ***/

	dv[0] = -maxmin_pd[224];
	dv[0] *= maxmin_pd[223];
	J[215] = -dv[0];
	J[308] = dv[0];
	dv[1] = -maxmin_pd[224]*maxmin_pd[222];
	J[203] = -dv[1];
	J[296] = dv[1];
	J[386] = -1.;

   /*** derivatives for constraint 76 ***/

	dv[0] = -maxmin_pd[227];
	dv[0] *= maxmin_pd[226];
	J[239] = -dv[0];
	J[309] = dv[0];
	dv[1] = -maxmin_pd[227]*maxmin_pd[225];
	J[227] = -dv[1];
	J[297] = dv[1];
	J[387] = -1.;

   /*** derivatives for constraint 77 ***/

	dv[0] = -maxmin_pd[230];
	dv[0] *= maxmin_pd[229];
	J[263] = -dv[0];
	J[310] = dv[0];
	dv[1] = -maxmin_pd[230]*maxmin_pd[228];
	J[251] = -dv[1];
	J[298] = dv[1];
	J[388] = -1.;

   /*** derivatives for constraint 78 ***/

	dv[0] = -maxmin_pd[233];
	dv[0] *= maxmin_pd[232];
	J[287] = -dv[0];
	J[311] = dv[0];
	dv[1] = -maxmin_pd[233]*maxmin_pd[231];
	J[275] = -dv[1];
	J[299] = dv[1];
	J[389] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
