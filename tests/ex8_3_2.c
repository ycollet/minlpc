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
 fint ex8_3_2_auxcom_[1] = { 49 /* nlc */ };
 fint ex8_3_2_funcom_[661] = {
	110 /* nvar */,
	1 /* nobj */,
	76 /* ncon */,
	544 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	11,
	21,
	31,
	41,
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
	73,
	75,
	77,
	79,
	81,
	83,
	85,
	87,
	89,
	91,
	97,
	103,
	109,
	115,
	121,
	130,
	138,
	145,
	152,
	161,
	169,
	176,
	183,
	192,
	200,
	207,
	214,
	223,
	231,
	238,
	245,
	254,
	262,
	269,
	276,
	282,
	288,
	294,
	300,
	306,
	312,
	318,
	324,
	330,
	336,
	342,
	348,
	354,
	360,
	366,
	372,
	378,
	384,
	390,
	396,
	402,
	408,
	414,
	420,
	426,
	432,
	438,
	444,
	450,
	456,
	461,
	462,
	463,
	464,
	465,
	469,
	473,
	477,
	481,
	485,
	488,
	491,
	494,
	497,
	500,
	503,
	506,
	509,
	512,
	515,
	518,
	521,
	524,
	527,
	530,
	533,
	536,
	539,
	542,
	545,

	/* rownos */
	1,
	2,
	3,
	4,
	21,
	22,
	23,
	24,
	51,
	56,
	5,
	6,
	7,
	8,
	25,
	26,
	27,
	28,
	52,
	57,
	9,
	10,
	11,
	12,
	29,
	30,
	31,
	32,
	53,
	58,
	13,
	14,
	15,
	16,
	33,
	34,
	35,
	36,
	54,
	59,
	17,
	18,
	19,
	20,
	37,
	38,
	39,
	40,
	55,
	60,
	1,
	21,
	2,
	22,
	3,
	23,
	4,
	24,
	5,
	25,
	6,
	26,
	7,
	27,
	8,
	28,
	9,
	29,
	10,
	30,
	11,
	31,
	12,
	32,
	13,
	33,
	14,
	34,
	15,
	35,
	16,
	36,
	17,
	37,
	18,
	38,
	19,
	39,
	20,
	40,
	21,
	22,
	23,
	24,
	56,
	71,
	25,
	26,
	27,
	28,
	57,
	72,
	29,
	30,
	31,
	32,
	58,
	73,
	33,
	34,
	35,
	36,
	59,
	74,
	37,
	38,
	39,
	40,
	60,
	75,
	1,
	5,
	9,
	13,
	17,
	21,
	41,
	46,
	61,
	2,
	6,
	10,
	14,
	18,
	22,
	47,
	66,
	3,
	7,
	11,
	15,
	19,
	23,
	48,
	4,
	8,
	12,
	16,
	20,
	24,
	49,
	1,
	5,
	9,
	13,
	17,
	25,
	42,
	46,
	62,
	2,
	6,
	10,
	14,
	18,
	26,
	47,
	67,
	3,
	7,
	11,
	15,
	19,
	27,
	48,
	4,
	8,
	12,
	16,
	20,
	28,
	49,
	1,
	5,
	9,
	13,
	17,
	29,
	43,
	46,
	63,
	2,
	6,
	10,
	14,
	18,
	30,
	47,
	68,
	3,
	7,
	11,
	15,
	19,
	31,
	48,
	4,
	8,
	12,
	16,
	20,
	32,
	49,
	1,
	5,
	9,
	13,
	17,
	33,
	44,
	46,
	64,
	2,
	6,
	10,
	14,
	18,
	34,
	47,
	69,
	3,
	7,
	11,
	15,
	19,
	35,
	48,
	4,
	8,
	12,
	16,
	20,
	36,
	49,
	1,
	5,
	9,
	13,
	17,
	37,
	45,
	46,
	65,
	2,
	6,
	10,
	14,
	18,
	38,
	47,
	70,
	3,
	7,
	11,
	15,
	19,
	39,
	48,
	4,
	8,
	12,
	16,
	20,
	40,
	49,
	1,
	2,
	3,
	4,
	51,
	71,
	5,
	6,
	7,
	8,
	52,
	71,
	9,
	10,
	11,
	12,
	53,
	71,
	13,
	14,
	15,
	16,
	54,
	71,
	17,
	18,
	19,
	20,
	55,
	71,
	1,
	2,
	3,
	4,
	51,
	72,
	5,
	6,
	7,
	8,
	52,
	72,
	9,
	10,
	11,
	12,
	53,
	72,
	13,
	14,
	15,
	16,
	54,
	72,
	17,
	18,
	19,
	20,
	55,
	72,
	1,
	2,
	3,
	4,
	51,
	73,
	5,
	6,
	7,
	8,
	52,
	73,
	9,
	10,
	11,
	12,
	53,
	73,
	13,
	14,
	15,
	16,
	54,
	73,
	17,
	18,
	19,
	20,
	55,
	73,
	1,
	2,
	3,
	4,
	51,
	74,
	5,
	6,
	7,
	8,
	52,
	74,
	9,
	10,
	11,
	12,
	53,
	74,
	13,
	14,
	15,
	16,
	54,
	74,
	17,
	18,
	19,
	20,
	55,
	74,
	1,
	2,
	3,
	4,
	51,
	75,
	5,
	6,
	7,
	8,
	52,
	75,
	9,
	10,
	11,
	12,
	53,
	75,
	13,
	14,
	15,
	16,
	54,
	75,
	17,
	18,
	19,
	20,
	55,
	75,
	46,
	47,
	48,
	49,
	71,
	76,
	46,
	47,
	48,
	49,
	72,
	76,
	46,
	47,
	48,
	49,
	73,
	76,
	46,
	47,
	48,
	49,
	74,
	76,
	46,
	47,
	48,
	49,
	75,
	76,
	46,
	47,
	48,
	49,
	76,
	46,
	47,
	48,
	49,
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
	21,
	22,
	61,
	22,
	23,
	66,
	21,
	24,
	41,
	25,
	26,
	62,
	26,
	27,
	67,
	25,
	28,
	42,
	29,
	30,
	63,
	30,
	31,
	68,
	29,
	32,
	43,
	33,
	34,
	64,
	34,
	35,
	69,
	33,
	36,
	44,
	37,
	38,
	65,
	38,
	39,
	70,
	37,
	40,
	45,
	1,
	50,
	51,
	5,
	50,
	52,
	9,
	50,
	53,
	13,
	50,
	54,
	17,
	50,
	55 };

 real ex8_3_2_boundc_[1+220+152] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		10000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-100.,
		-100.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real ex8_3_2_x0comn_[110] = {
		50.,
		50.,
		50.,
		50.,
		50.,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		100.,
		100.,
		100.,
		100.,
		100.,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		50.,
		100.,
		0.2,
		0.2,
		0.2,
		0.2,
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
		50.,
		50.,
		50.,
		50.,
		50. };

 static real ex8_3_2_pd[15];
static real ex8_3_2_old_x[110];
static int ex8_3_2_xkind = -1;

 static int
ex8_3_2_xcheck(real *x)
{
	real *x1 = ex8_3_2_old_x, *xe = x + 110;
	errno = 0;
	if (ex8_3_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_3_2_xkind = 0;
	return 1;
	}
 real
ex8_3_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex8_3_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[82];
	;}

	if (wantfg & 2) {
	g[82] = -1.;
	}

	return rv;
}

 void
ex8_3_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ex8_3_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[5] * x[0];
	v[1] = -v[0];
	v[0] = x[30] * x[50];
	v[1] += v[0];
	v[0] = x[34] * x[55];
	v[1] += v[0];
	v[0] = x[38] * x[60];
	v[1] += v[0];
	v[0] = x[42] * x[65];
	v[1] += v[0];
	v[0] = x[46] * x[70];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.58*x[105];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[6] * x[0];
	v[1] = -v[0];
	v[0] = x[31] * x[50];
	v[1] += v[0];
	v[0] = x[35] * x[55];
	v[1] += v[0];
	v[0] = x[39] * x[60];
	v[1] += v[0];
	v[0] = x[43] * x[65];
	v[1] += v[0];
	v[0] = x[47] * x[70];
	v[1] += v[0];
	v[0] = -v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[7] * x[0];
	v[1] = -v[0];
	v[0] = x[32] * x[50];
	v[1] += v[0];
	v[0] = x[36] * x[55];
	v[1] += v[0];
	v[0] = x[40] * x[60];
	v[1] += v[0];
	v[0] = x[44] * x[65];
	v[1] += v[0];
	v[0] = x[48] * x[70];
	v[1] += v[0];
	v[0] = -v[1];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[8] * x[0];
	v[1] = -v[0];
	v[0] = x[33] * x[50];
	v[1] += v[0];
	v[0] = x[37] * x[55];
	v[1] += v[0];
	v[0] = x[41] * x[60];
	v[1] += v[0];
	v[0] = x[45] * x[65];
	v[1] += v[0];
	v[0] = x[49] * x[70];
	v[1] += v[0];
	v[0] = -v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[9] * x[1];
	v[1] = -v[0];
	v[0] = x[30] * x[51];
	v[1] += v[0];
	v[0] = x[34] * x[56];
	v[1] += v[0];
	v[0] = x[38] * x[61];
	v[1] += v[0];
	v[0] = x[42] * x[66];
	v[1] += v[0];
	v[0] = x[46] * x[71];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.58*x[106];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[10] * x[1];
	v[1] = -v[0];
	v[0] = x[31] * x[51];
	v[1] += v[0];
	v[0] = x[35] * x[56];
	v[1] += v[0];
	v[0] = x[39] * x[61];
	v[1] += v[0];
	v[0] = x[43] * x[66];
	v[1] += v[0];
	v[0] = x[47] * x[71];
	v[1] += v[0];
	v[0] = -v[1];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[11] * x[1];
	v[1] = -v[0];
	v[0] = x[32] * x[51];
	v[1] += v[0];
	v[0] = x[36] * x[56];
	v[1] += v[0];
	v[0] = x[40] * x[61];
	v[1] += v[0];
	v[0] = x[44] * x[66];
	v[1] += v[0];
	v[0] = x[48] * x[71];
	v[1] += v[0];
	v[0] = -v[1];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[12] * x[1];
	v[1] = -v[0];
	v[0] = x[33] * x[51];
	v[1] += v[0];
	v[0] = x[37] * x[56];
	v[1] += v[0];
	v[0] = x[41] * x[61];
	v[1] += v[0];
	v[0] = x[45] * x[66];
	v[1] += v[0];
	v[0] = x[49] * x[71];
	v[1] += v[0];
	v[0] = -v[1];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[13] * x[2];
	v[1] = -v[0];
	v[0] = x[30] * x[52];
	v[1] += v[0];
	v[0] = x[34] * x[57];
	v[1] += v[0];
	v[0] = x[38] * x[62];
	v[1] += v[0];
	v[0] = x[42] * x[67];
	v[1] += v[0];
	v[0] = x[46] * x[72];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.58*x[107];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[14] * x[2];
	v[1] = -v[0];
	v[0] = x[31] * x[52];
	v[1] += v[0];
	v[0] = x[35] * x[57];
	v[1] += v[0];
	v[0] = x[39] * x[62];
	v[1] += v[0];
	v[0] = x[43] * x[67];
	v[1] += v[0];
	v[0] = x[47] * x[72];
	v[1] += v[0];
	v[0] = -v[1];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[15] * x[2];
	v[1] = -v[0];
	v[0] = x[32] * x[52];
	v[1] += v[0];
	v[0] = x[36] * x[57];
	v[1] += v[0];
	v[0] = x[40] * x[62];
	v[1] += v[0];
	v[0] = x[44] * x[67];
	v[1] += v[0];
	v[0] = x[48] * x[72];
	v[1] += v[0];
	v[0] = -v[1];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[16] * x[2];
	v[1] = -v[0];
	v[0] = x[33] * x[52];
	v[1] += v[0];
	v[0] = x[37] * x[57];
	v[1] += v[0];
	v[0] = x[41] * x[62];
	v[1] += v[0];
	v[0] = x[45] * x[67];
	v[1] += v[0];
	v[0] = x[49] * x[72];
	v[1] += v[0];
	v[0] = -v[1];
	c[11] = v[0];

  /***  constraint 13  ***/

	v[0] = x[17] * x[3];
	v[1] = -v[0];
	v[0] = x[30] * x[53];
	v[1] += v[0];
	v[0] = x[34] * x[58];
	v[1] += v[0];
	v[0] = x[38] * x[63];
	v[1] += v[0];
	v[0] = x[42] * x[68];
	v[1] += v[0];
	v[0] = x[46] * x[73];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.58*x[108];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[18] * x[3];
	v[1] = -v[0];
	v[0] = x[31] * x[53];
	v[1] += v[0];
	v[0] = x[35] * x[58];
	v[1] += v[0];
	v[0] = x[39] * x[63];
	v[1] += v[0];
	v[0] = x[43] * x[68];
	v[1] += v[0];
	v[0] = x[47] * x[73];
	v[1] += v[0];
	v[0] = -v[1];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[19] * x[3];
	v[1] = -v[0];
	v[0] = x[32] * x[53];
	v[1] += v[0];
	v[0] = x[36] * x[58];
	v[1] += v[0];
	v[0] = x[40] * x[63];
	v[1] += v[0];
	v[0] = x[44] * x[68];
	v[1] += v[0];
	v[0] = x[48] * x[73];
	v[1] += v[0];
	v[0] = -v[1];
	c[14] = v[0];

  /***  constraint 16  ***/

	v[0] = x[20] * x[3];
	v[1] = -v[0];
	v[0] = x[33] * x[53];
	v[1] += v[0];
	v[0] = x[37] * x[58];
	v[1] += v[0];
	v[0] = x[41] * x[63];
	v[1] += v[0];
	v[0] = x[45] * x[68];
	v[1] += v[0];
	v[0] = x[49] * x[73];
	v[1] += v[0];
	v[0] = -v[1];
	c[15] = v[0];

  /***  constraint 17  ***/

	v[0] = x[21] * x[4];
	v[1] = -v[0];
	v[0] = x[30] * x[54];
	v[1] += v[0];
	v[0] = x[34] * x[59];
	v[1] += v[0];
	v[0] = x[38] * x[64];
	v[1] += v[0];
	v[0] = x[42] * x[69];
	v[1] += v[0];
	v[0] = x[46] * x[74];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.58*x[109];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[22] * x[4];
	v[1] = -v[0];
	v[0] = x[31] * x[54];
	v[1] += v[0];
	v[0] = x[35] * x[59];
	v[1] += v[0];
	v[0] = x[39] * x[64];
	v[1] += v[0];
	v[0] = x[43] * x[69];
	v[1] += v[0];
	v[0] = x[47] * x[74];
	v[1] += v[0];
	v[0] = -v[1];
	c[17] = v[0];

  /***  constraint 19  ***/

	v[0] = x[23] * x[4];
	v[1] = -v[0];
	v[0] = x[32] * x[54];
	v[1] += v[0];
	v[0] = x[36] * x[59];
	v[1] += v[0];
	v[0] = x[40] * x[64];
	v[1] += v[0];
	v[0] = x[44] * x[69];
	v[1] += v[0];
	v[0] = x[48] * x[74];
	v[1] += v[0];
	v[0] = -v[1];
	c[18] = v[0];

  /***  constraint 20  ***/

	v[0] = x[24] * x[4];
	v[1] = -v[0];
	v[0] = x[33] * x[54];
	v[1] += v[0];
	v[0] = x[37] * x[59];
	v[1] += v[0];
	v[0] = x[41] * x[64];
	v[1] += v[0];
	v[0] = x[45] * x[69];
	v[1] += v[0];
	v[0] = x[49] * x[74];
	v[1] += v[0];
	v[0] = -v[1];
	c[19] = v[0];

  /***  constraint 21  ***/

	v[0] = x[30] * x[25];
	v[1] = x[5] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = -x[90];
	v[1] = -2. * x[92];
	ex8_3_2_pd[0] = v[2] + v[1];
	v[1] = x[85] * ex8_3_2_pd[0];
	v[2] = -v[1];
	v[0] += v[2];
	c[20] = v[0];

  /***  constraint 22  ***/

	v[0] = x[31] * x[25];
	v[1] = x[6] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	ex8_3_2_pd[1] = x[90] - x[91];
	v[1] = x[85] * ex8_3_2_pd[1];
	v[3] = -v[1];
	v[0] += v[3];
	c[21] = v[0];

  /***  constraint 23  ***/

	v[0] = x[32] * x[25];
	v[1] = x[7] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[85] * x[91];
	v[1] = -v[2];
	v[0] += v[1];
	c[22] = v[0];

  /***  constraint 24  ***/

	v[0] = x[33] * x[25];
	v[1] = x[8] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[85] * x[92];
	v[1] = -v[2];
	v[0] += v[1];
	c[23] = v[0];

  /***  constraint 25  ***/

	v[0] = x[34] * x[26];
	v[1] = x[9] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = -x[93];
	v[1] = -2. * x[95];
	ex8_3_2_pd[2] = v[2] + v[1];
	v[1] = x[86] * ex8_3_2_pd[2];
	v[2] = -v[1];
	v[0] += v[2];
	c[24] = v[0];

  /***  constraint 26  ***/

	v[0] = x[35] * x[26];
	v[1] = x[10] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	ex8_3_2_pd[3] = x[93] - x[94];
	v[1] = x[86] * ex8_3_2_pd[3];
	v[3] = -v[1];
	v[0] += v[3];
	c[25] = v[0];

  /***  constraint 27  ***/

	v[0] = x[36] * x[26];
	v[1] = x[11] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[86] * x[94];
	v[1] = -v[2];
	v[0] += v[1];
	c[26] = v[0];

  /***  constraint 28  ***/

	v[0] = x[37] * x[26];
	v[1] = x[12] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[86] * x[95];
	v[1] = -v[2];
	v[0] += v[1];
	c[27] = v[0];

  /***  constraint 29  ***/

	v[0] = x[38] * x[27];
	v[1] = x[13] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = -x[96];
	v[1] = -2. * x[98];
	ex8_3_2_pd[4] = v[2] + v[1];
	v[1] = x[87] * ex8_3_2_pd[4];
	v[2] = -v[1];
	v[0] += v[2];
	c[28] = v[0];

  /***  constraint 30  ***/

	v[0] = x[39] * x[27];
	v[1] = x[14] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	ex8_3_2_pd[5] = x[96] - x[97];
	v[1] = x[87] * ex8_3_2_pd[5];
	v[3] = -v[1];
	v[0] += v[3];
	c[29] = v[0];

  /***  constraint 31  ***/

	v[0] = x[40] * x[27];
	v[1] = x[15] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[87] * x[97];
	v[1] = -v[2];
	v[0] += v[1];
	c[30] = v[0];

  /***  constraint 32  ***/

	v[0] = x[41] * x[27];
	v[1] = x[16] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[87] * x[98];
	v[1] = -v[2];
	v[0] += v[1];
	c[31] = v[0];

  /***  constraint 33  ***/

	v[0] = x[42] * x[28];
	v[1] = x[17] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = -x[99];
	v[1] = -2. * x[101];
	ex8_3_2_pd[6] = v[2] + v[1];
	v[1] = x[88] * ex8_3_2_pd[6];
	v[2] = -v[1];
	v[0] += v[2];
	c[32] = v[0];

  /***  constraint 34  ***/

	v[0] = x[43] * x[28];
	v[1] = x[18] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	ex8_3_2_pd[7] = x[99] - x[100];
	v[1] = x[88] * ex8_3_2_pd[7];
	v[3] = -v[1];
	v[0] += v[3];
	c[33] = v[0];

  /***  constraint 35  ***/

	v[0] = x[44] * x[28];
	v[1] = x[19] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[88] * x[100];
	v[1] = -v[2];
	v[0] += v[1];
	c[34] = v[0];

  /***  constraint 36  ***/

	v[0] = x[45] * x[28];
	v[1] = x[20] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[88] * x[101];
	v[1] = -v[2];
	v[0] += v[1];
	c[35] = v[0];

  /***  constraint 37  ***/

	v[0] = x[46] * x[29];
	v[1] = x[21] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = -x[102];
	v[1] = -2. * x[104];
	ex8_3_2_pd[8] = v[2] + v[1];
	v[1] = x[89] * ex8_3_2_pd[8];
	v[2] = -v[1];
	v[0] += v[2];
	c[36] = v[0];

  /***  constraint 38  ***/

	v[0] = x[47] * x[29];
	v[1] = x[22] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	ex8_3_2_pd[9] = x[102] - x[103];
	v[1] = x[89] * ex8_3_2_pd[9];
	v[3] = -v[1];
	v[0] += v[3];
	c[37] = v[0];

  /***  constraint 39  ***/

	v[0] = x[48] * x[29];
	v[1] = x[23] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[89] * x[103];
	v[1] = -v[2];
	v[0] += v[1];
	c[38] = v[0];

  /***  constraint 40  ***/

	v[0] = x[49] * x[29];
	v[1] = x[24] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[89] * x[104];
	v[1] = -v[2];
	v[0] += v[1];
	c[39] = v[0];

  /***  constraint 41  ***/

	ex8_3_2_pd[10] = -0.5 * x[30];
	v[0] = ex8_3_2_pd[10] * x[30];
	t1 = v[0] + x[92];
	c[40] = t1;

  /***  constraint 42  ***/

	ex8_3_2_pd[11] = -0.5 * x[34];
	v[0] = ex8_3_2_pd[11] * x[34];
	t1 = v[0] + x[95];
	c[41] = t1;

  /***  constraint 43  ***/

	ex8_3_2_pd[12] = -0.5 * x[38];
	v[0] = ex8_3_2_pd[12] * x[38];
	t1 = v[0] + x[98];
	c[42] = t1;

  /***  constraint 44  ***/

	ex8_3_2_pd[13] = -0.5 * x[42];
	v[0] = ex8_3_2_pd[13] * x[42];
	t1 = v[0] + x[101];
	c[43] = t1;

  /***  constraint 45  ***/

	ex8_3_2_pd[14] = -0.5 * x[46];
	v[0] = ex8_3_2_pd[14] * x[46];
	t1 = v[0] + x[104];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = x[80] * x[81];
	v[1] = -v[0];
	v[0] = x[75] * x[30];
	v[1] += v[0];
	v[0] = x[76] * x[34];
	v[1] += v[0];
	v[0] = x[77] * x[38];
	v[1] += v[0];
	v[0] = x[78] * x[42];
	v[1] += v[0];
	v[0] = x[79] * x[46];
	v[1] += v[0];
	v[0] = -v[1];
	c[45] = v[0];

  /***  constraint 47  ***/

	v[0] = x[80] * x[82];
	v[1] = -v[0];
	v[0] = x[75] * x[31];
	v[1] += v[0];
	v[0] = x[76] * x[35];
	v[1] += v[0];
	v[0] = x[77] * x[39];
	v[1] += v[0];
	v[0] = x[78] * x[43];
	v[1] += v[0];
	v[0] = x[79] * x[47];
	v[1] += v[0];
	v[0] = -v[1];
	c[46] = v[0];

  /***  constraint 48  ***/

	v[0] = x[80] * x[83];
	v[1] = -v[0];
	v[0] = x[75] * x[32];
	v[1] += v[0];
	v[0] = x[76] * x[36];
	v[1] += v[0];
	v[0] = x[77] * x[40];
	v[1] += v[0];
	v[0] = x[78] * x[44];
	v[1] += v[0];
	v[0] = x[79] * x[48];
	v[1] += v[0];
	v[0] = -v[1];
	c[47] = v[0];

  /***  constraint 49  ***/

	v[0] = x[80] * x[84];
	v[1] = -v[0];
	v[0] = x[75] * x[33];
	v[1] += v[0];
	v[0] = x[76] * x[37];
	v[1] += v[0];
	v[0] = x[77] * x[41];
	v[1] += v[0];
	v[0] = x[78] * x[45];
	v[1] += v[0];
	v[0] = x[79] * x[49];
	v[1] += v[0];
	v[0] = -v[1];
	c[48] = v[0];

  /***  constraint 50  ***/

	t1 = -x[105];
	t1 += -x[106];
	t1 += -x[107];
	t1 += -x[108];
	t1 += -x[109];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[0];
	t1 += -x[50];
	t1 += -x[55];
	t1 += -x[60];
	t1 += -x[65];
	t1 += -x[70];
	t1 += -x[105];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[1];
	t1 += -x[51];
	t1 += -x[56];
	t1 += -x[61];
	t1 += -x[66];
	t1 += -x[71];
	t1 += -x[106];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[2];
	t1 += -x[52];
	t1 += -x[57];
	t1 += -x[62];
	t1 += -x[67];
	t1 += -x[72];
	t1 += -x[107];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[3];
	t1 += -x[53];
	t1 += -x[58];
	t1 += -x[63];
	t1 += -x[68];
	t1 += -x[73];
	t1 += -x[108];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[4];
	t1 += -x[54];
	t1 += -x[59];
	t1 += -x[64];
	t1 += -x[69];
	t1 += -x[74];
	t1 += -x[109];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[0];
	t1 += x[25];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[1];
	t1 += x[26];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[2];
	t1 += x[27];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[3];
	t1 += x[28];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[4];
	t1 += x[29];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -10.*x[30];
	t1 += x[90];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -10.*x[34];
	t1 += x[93];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -10.*x[38];
	t1 += x[96];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -10.*x[42];
	t1 += x[99];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -10.*x[46];
	t1 += x[102];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[31];
	t1 += x[91];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[35];
	t1 += x[94];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[39];
	t1 += x[97];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[43];
	t1 += x[100];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[47];
	t1 += x[103];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[25];
	t1 += -x[50];
	t1 += -x[51];
	t1 += -x[52];
	t1 += -x[53];
	t1 += -x[54];
	t1 += -x[75];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[26];
	t1 += -x[55];
	t1 += -x[56];
	t1 += -x[57];
	t1 += -x[58];
	t1 += -x[59];
	t1 += -x[76];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[27];
	t1 += -x[60];
	t1 += -x[61];
	t1 += -x[62];
	t1 += -x[63];
	t1 += -x[64];
	t1 += -x[77];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[28];
	t1 += -x[65];
	t1 += -x[66];
	t1 += -x[67];
	t1 += -x[68];
	t1 += -x[69];
	t1 += -x[78];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[29];
	t1 += -x[70];
	t1 += -x[71];
	t1 += -x[72];
	t1 += -x[73];
	t1 += -x[74];
	t1 += -x[79];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[75];
	t1 += -x[76];
	t1 += -x[77];
	t1 += -x[78];
	t1 += -x[79];
	t1 += x[80];
	c[75] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[395] = -x[46];
	J[244] = -x[70];
	J[365] = -x[42];
	J[213] = -x[65];
	J[335] = -x[38];
	J[182] = -x[60];
	J[305] = -x[34];
	J[151] = -x[55];
	J[275] = -x[30];
	J[120] = -x[50];
	J[0] = x[5];
	J[50] = x[0];
	J[529] = -0.58;

   /*** derivatives for constraint 2 ***/

	J[396] = -x[47];
	J[253] = -x[70];
	J[366] = -x[43];
	J[222] = -x[65];
	J[336] = -x[39];
	J[191] = -x[60];
	J[306] = -x[35];
	J[160] = -x[55];
	J[276] = -x[31];
	J[129] = -x[50];
	J[1] = x[6];
	J[52] = x[0];

   /*** derivatives for constraint 3 ***/

	J[397] = -x[48];
	J[261] = -x[70];
	J[367] = -x[44];
	J[230] = -x[65];
	J[337] = -x[40];
	J[199] = -x[60];
	J[307] = -x[36];
	J[168] = -x[55];
	J[277] = -x[32];
	J[137] = -x[50];
	J[2] = x[7];
	J[54] = x[0];

   /*** derivatives for constraint 4 ***/

	J[398] = -x[49];
	J[268] = -x[70];
	J[368] = -x[45];
	J[237] = -x[65];
	J[338] = -x[41];
	J[206] = -x[60];
	J[308] = -x[37];
	J[175] = -x[55];
	J[278] = -x[33];
	J[144] = -x[50];
	J[3] = x[8];
	J[56] = x[0];

   /*** derivatives for constraint 5 ***/

	J[401] = -x[46];
	J[245] = -x[71];
	J[371] = -x[42];
	J[214] = -x[66];
	J[341] = -x[38];
	J[183] = -x[61];
	J[311] = -x[34];
	J[152] = -x[56];
	J[281] = -x[30];
	J[121] = -x[51];
	J[10] = x[9];
	J[58] = x[1];
	J[532] = -0.58;

   /*** derivatives for constraint 6 ***/

	J[402] = -x[47];
	J[254] = -x[71];
	J[372] = -x[43];
	J[223] = -x[66];
	J[342] = -x[39];
	J[192] = -x[61];
	J[312] = -x[35];
	J[161] = -x[56];
	J[282] = -x[31];
	J[130] = -x[51];
	J[11] = x[10];
	J[60] = x[1];

   /*** derivatives for constraint 7 ***/

	J[403] = -x[48];
	J[262] = -x[71];
	J[373] = -x[44];
	J[231] = -x[66];
	J[343] = -x[40];
	J[200] = -x[61];
	J[313] = -x[36];
	J[169] = -x[56];
	J[283] = -x[32];
	J[138] = -x[51];
	J[12] = x[11];
	J[62] = x[1];

   /*** derivatives for constraint 8 ***/

	J[404] = -x[49];
	J[269] = -x[71];
	J[374] = -x[45];
	J[238] = -x[66];
	J[344] = -x[41];
	J[207] = -x[61];
	J[314] = -x[37];
	J[176] = -x[56];
	J[284] = -x[33];
	J[145] = -x[51];
	J[13] = x[12];
	J[64] = x[1];

   /*** derivatives for constraint 9 ***/

	J[407] = -x[46];
	J[246] = -x[72];
	J[377] = -x[42];
	J[215] = -x[67];
	J[347] = -x[38];
	J[184] = -x[62];
	J[317] = -x[34];
	J[153] = -x[57];
	J[287] = -x[30];
	J[122] = -x[52];
	J[20] = x[13];
	J[66] = x[2];
	J[535] = -0.58;

   /*** derivatives for constraint 10 ***/

	J[408] = -x[47];
	J[255] = -x[72];
	J[378] = -x[43];
	J[224] = -x[67];
	J[348] = -x[39];
	J[193] = -x[62];
	J[318] = -x[35];
	J[162] = -x[57];
	J[288] = -x[31];
	J[131] = -x[52];
	J[21] = x[14];
	J[68] = x[2];

   /*** derivatives for constraint 11 ***/

	J[409] = -x[48];
	J[263] = -x[72];
	J[379] = -x[44];
	J[232] = -x[67];
	J[349] = -x[40];
	J[201] = -x[62];
	J[319] = -x[36];
	J[170] = -x[57];
	J[289] = -x[32];
	J[139] = -x[52];
	J[22] = x[15];
	J[70] = x[2];

   /*** derivatives for constraint 12 ***/

	J[410] = -x[49];
	J[270] = -x[72];
	J[380] = -x[45];
	J[239] = -x[67];
	J[350] = -x[41];
	J[208] = -x[62];
	J[320] = -x[37];
	J[177] = -x[57];
	J[290] = -x[33];
	J[146] = -x[52];
	J[23] = x[16];
	J[72] = x[2];

   /*** derivatives for constraint 13 ***/

	J[413] = -x[46];
	J[247] = -x[73];
	J[383] = -x[42];
	J[216] = -x[68];
	J[353] = -x[38];
	J[185] = -x[63];
	J[323] = -x[34];
	J[154] = -x[58];
	J[293] = -x[30];
	J[123] = -x[53];
	J[30] = x[17];
	J[74] = x[3];
	J[538] = -0.58;

   /*** derivatives for constraint 14 ***/

	J[414] = -x[47];
	J[256] = -x[73];
	J[384] = -x[43];
	J[225] = -x[68];
	J[354] = -x[39];
	J[194] = -x[63];
	J[324] = -x[35];
	J[163] = -x[58];
	J[294] = -x[31];
	J[132] = -x[53];
	J[31] = x[18];
	J[76] = x[3];

   /*** derivatives for constraint 15 ***/

	J[415] = -x[48];
	J[264] = -x[73];
	J[385] = -x[44];
	J[233] = -x[68];
	J[355] = -x[40];
	J[202] = -x[63];
	J[325] = -x[36];
	J[171] = -x[58];
	J[295] = -x[32];
	J[140] = -x[53];
	J[32] = x[19];
	J[78] = x[3];

   /*** derivatives for constraint 16 ***/

	J[416] = -x[49];
	J[271] = -x[73];
	J[386] = -x[45];
	J[240] = -x[68];
	J[356] = -x[41];
	J[209] = -x[63];
	J[326] = -x[37];
	J[178] = -x[58];
	J[296] = -x[33];
	J[147] = -x[53];
	J[33] = x[20];
	J[80] = x[3];

   /*** derivatives for constraint 17 ***/

	J[419] = -x[46];
	J[248] = -x[74];
	J[389] = -x[42];
	J[217] = -x[69];
	J[359] = -x[38];
	J[186] = -x[64];
	J[329] = -x[34];
	J[155] = -x[59];
	J[299] = -x[30];
	J[124] = -x[54];
	J[40] = x[21];
	J[82] = x[4];
	J[541] = -0.58;

   /*** derivatives for constraint 18 ***/

	J[420] = -x[47];
	J[257] = -x[74];
	J[390] = -x[43];
	J[226] = -x[69];
	J[360] = -x[39];
	J[195] = -x[64];
	J[330] = -x[35];
	J[164] = -x[59];
	J[300] = -x[31];
	J[133] = -x[54];
	J[41] = x[22];
	J[84] = x[4];

   /*** derivatives for constraint 19 ***/

	J[421] = -x[48];
	J[265] = -x[74];
	J[391] = -x[44];
	J[234] = -x[69];
	J[361] = -x[40];
	J[203] = -x[64];
	J[331] = -x[36];
	J[172] = -x[59];
	J[301] = -x[32];
	J[141] = -x[54];
	J[42] = x[23];
	J[86] = x[4];

   /*** derivatives for constraint 20 ***/

	J[422] = -x[49];
	J[272] = -x[74];
	J[392] = -x[45];
	J[241] = -x[69];
	J[362] = -x[41];
	J[210] = -x[64];
	J[332] = -x[37];
	J[179] = -x[59];
	J[302] = -x[33];
	J[148] = -x[54];
	J[43] = x[24];
	J[88] = x[4];

   /*** derivatives for constraint 21 ***/

	J[464] = -ex8_3_2_pd[0];
	dv[0] = -x[85];
	J[490] = -dv[0]*2.;
	J[484] = x[85];
	J[4] = -x[5];
	J[51] = -x[0];
	J[90] = x[30];
	J[125] = x[25];

   /*** derivatives for constraint 22 ***/

	J[465] = -ex8_3_2_pd[1];
	J[487] = x[85];
	J[485] = -x[85];
	J[5] = -x[6];
	J[53] = -x[0];
	J[91] = x[31];
	J[134] = x[25];

   /*** derivatives for constraint 23 ***/

	J[488] = -x[85];
	J[466] = -x[91];
	J[6] = -x[7];
	J[55] = -x[0];
	J[92] = x[32];
	J[142] = x[25];

   /*** derivatives for constraint 24 ***/

	J[491] = -x[85];
	J[467] = -x[92];
	J[7] = -x[8];
	J[57] = -x[0];
	J[93] = x[33];
	J[149] = x[25];

   /*** derivatives for constraint 25 ***/

	J[468] = -ex8_3_2_pd[2];
	dv[0] = -x[86];
	J[499] = -dv[0]*2.;
	J[493] = x[86];
	J[14] = -x[9];
	J[59] = -x[1];
	J[96] = x[34];
	J[156] = x[26];

   /*** derivatives for constraint 26 ***/

	J[469] = -ex8_3_2_pd[3];
	J[496] = x[86];
	J[494] = -x[86];
	J[15] = -x[10];
	J[61] = -x[1];
	J[97] = x[35];
	J[165] = x[26];

   /*** derivatives for constraint 27 ***/

	J[497] = -x[86];
	J[470] = -x[94];
	J[16] = -x[11];
	J[63] = -x[1];
	J[98] = x[36];
	J[173] = x[26];

   /*** derivatives for constraint 28 ***/

	J[500] = -x[86];
	J[471] = -x[95];
	J[17] = -x[12];
	J[65] = -x[1];
	J[99] = x[37];
	J[180] = x[26];

   /*** derivatives for constraint 29 ***/

	J[472] = -ex8_3_2_pd[4];
	dv[0] = -x[87];
	J[508] = -dv[0]*2.;
	J[502] = x[87];
	J[24] = -x[13];
	J[67] = -x[2];
	J[102] = x[38];
	J[187] = x[27];

   /*** derivatives for constraint 30 ***/

	J[473] = -ex8_3_2_pd[5];
	J[505] = x[87];
	J[503] = -x[87];
	J[25] = -x[14];
	J[69] = -x[2];
	J[103] = x[39];
	J[196] = x[27];

   /*** derivatives for constraint 31 ***/

	J[506] = -x[87];
	J[474] = -x[97];
	J[26] = -x[15];
	J[71] = -x[2];
	J[104] = x[40];
	J[204] = x[27];

   /*** derivatives for constraint 32 ***/

	J[509] = -x[87];
	J[475] = -x[98];
	J[27] = -x[16];
	J[73] = -x[2];
	J[105] = x[41];
	J[211] = x[27];

   /*** derivatives for constraint 33 ***/

	J[476] = -ex8_3_2_pd[6];
	dv[0] = -x[88];
	J[517] = -dv[0]*2.;
	J[511] = x[88];
	J[34] = -x[17];
	J[75] = -x[3];
	J[108] = x[42];
	J[218] = x[28];

   /*** derivatives for constraint 34 ***/

	J[477] = -ex8_3_2_pd[7];
	J[514] = x[88];
	J[512] = -x[88];
	J[35] = -x[18];
	J[77] = -x[3];
	J[109] = x[43];
	J[227] = x[28];

   /*** derivatives for constraint 35 ***/

	J[515] = -x[88];
	J[478] = -x[100];
	J[36] = -x[19];
	J[79] = -x[3];
	J[110] = x[44];
	J[235] = x[28];

   /*** derivatives for constraint 36 ***/

	J[518] = -x[88];
	J[479] = -x[101];
	J[37] = -x[20];
	J[81] = -x[3];
	J[111] = x[45];
	J[242] = x[28];

   /*** derivatives for constraint 37 ***/

	J[480] = -ex8_3_2_pd[8];
	dv[0] = -x[89];
	J[526] = -dv[0]*2.;
	J[520] = x[89];
	J[44] = -x[21];
	J[83] = -x[4];
	J[114] = x[46];
	J[249] = x[29];

   /*** derivatives for constraint 38 ***/

	J[481] = -ex8_3_2_pd[9];
	J[523] = x[89];
	J[521] = -x[89];
	J[45] = -x[22];
	J[85] = -x[4];
	J[115] = x[47];
	J[258] = x[29];

   /*** derivatives for constraint 39 ***/

	J[524] = -x[89];
	J[482] = -x[103];
	J[46] = -x[23];
	J[87] = -x[4];
	J[116] = x[48];
	J[266] = x[29];

   /*** derivatives for constraint 40 ***/

	J[527] = -x[89];
	J[483] = -x[104];
	J[47] = -x[24];
	J[89] = -x[4];
	J[117] = x[49];
	J[273] = x[29];

   /*** derivatives for constraint 41 ***/

	J[126] = ex8_3_2_pd[10];
	J[126] -= x[30]*0.5;
	J[492] = 1.;

   /*** derivatives for constraint 42 ***/

	J[157] = ex8_3_2_pd[11];
	J[157] -= x[34]*0.5;
	J[501] = 1.;

   /*** derivatives for constraint 43 ***/

	J[188] = ex8_3_2_pd[12];
	J[188] -= x[38]*0.5;
	J[510] = 1.;

   /*** derivatives for constraint 44 ***/

	J[219] = ex8_3_2_pd[13];
	J[219] -= x[42]*0.5;
	J[519] = 1.;

   /*** derivatives for constraint 45 ***/

	J[250] = ex8_3_2_pd[14];
	J[250] -= x[46]*0.5;
	J[528] = 1.;

   /*** derivatives for constraint 46 ***/

	J[251] = -x[79];
	J[449] = -x[46];
	J[220] = -x[78];
	J[443] = -x[42];
	J[189] = -x[77];
	J[437] = -x[38];
	J[158] = -x[76];
	J[431] = -x[34];
	J[127] = -x[75];
	J[425] = -x[30];
	J[460] = x[80];
	J[455] = x[81];

   /*** derivatives for constraint 47 ***/

	J[259] = -x[79];
	J[450] = -x[47];
	J[228] = -x[78];
	J[444] = -x[43];
	J[197] = -x[77];
	J[438] = -x[39];
	J[166] = -x[76];
	J[432] = -x[35];
	J[135] = -x[75];
	J[426] = -x[31];
	J[461] = x[80];
	J[456] = x[82];

   /*** derivatives for constraint 48 ***/

	J[267] = -x[79];
	J[451] = -x[48];
	J[236] = -x[78];
	J[445] = -x[44];
	J[205] = -x[77];
	J[439] = -x[40];
	J[174] = -x[76];
	J[433] = -x[36];
	J[143] = -x[75];
	J[427] = -x[32];
	J[462] = x[80];
	J[457] = x[83];

   /*** derivatives for constraint 49 ***/

	J[274] = -x[79];
	J[452] = -x[49];
	J[243] = -x[78];
	J[446] = -x[45];
	J[212] = -x[77];
	J[440] = -x[41];
	J[181] = -x[76];
	J[434] = -x[37];
	J[150] = -x[75];
	J[428] = -x[33];
	J[463] = x[80];
	J[458] = x[84];

   /*** derivatives for constraint 50 ***/

	J[530] = -1.;
	J[533] = -1.;
	J[536] = -1.;
	J[539] = -1.;
	J[542] = -1.;

   /*** derivatives for constraint 51 ***/

	J[8] = 1.;
	J[279] = -1.;
	J[309] = -1.;
	J[339] = -1.;
	J[369] = -1.;
	J[399] = -1.;
	J[531] = -1.;

   /*** derivatives for constraint 52 ***/

	J[18] = 1.;
	J[285] = -1.;
	J[315] = -1.;
	J[345] = -1.;
	J[375] = -1.;
	J[405] = -1.;
	J[534] = -1.;

   /*** derivatives for constraint 53 ***/

	J[28] = 1.;
	J[291] = -1.;
	J[321] = -1.;
	J[351] = -1.;
	J[381] = -1.;
	J[411] = -1.;
	J[537] = -1.;

   /*** derivatives for constraint 54 ***/

	J[38] = 1.;
	J[297] = -1.;
	J[327] = -1.;
	J[357] = -1.;
	J[387] = -1.;
	J[417] = -1.;
	J[540] = -1.;

   /*** derivatives for constraint 55 ***/

	J[48] = 1.;
	J[303] = -1.;
	J[333] = -1.;
	J[363] = -1.;
	J[393] = -1.;
	J[423] = -1.;
	J[543] = -1.;

   /*** derivatives for constraint 56 ***/

	J[9] = -1.;
	J[94] = 1.;

   /*** derivatives for constraint 57 ***/

	J[19] = -1.;
	J[100] = 1.;

   /*** derivatives for constraint 58 ***/

	J[29] = -1.;
	J[106] = 1.;

   /*** derivatives for constraint 59 ***/

	J[39] = -1.;
	J[112] = 1.;

   /*** derivatives for constraint 60 ***/

	J[49] = -1.;
	J[118] = 1.;

   /*** derivatives for constraint 61 ***/

	J[128] = -10.;
	J[486] = 1.;

   /*** derivatives for constraint 62 ***/

	J[159] = -10.;
	J[495] = 1.;

   /*** derivatives for constraint 63 ***/

	J[190] = -10.;
	J[504] = 1.;

   /*** derivatives for constraint 64 ***/

	J[221] = -10.;
	J[513] = 1.;

   /*** derivatives for constraint 65 ***/

	J[252] = -10.;
	J[522] = 1.;

   /*** derivatives for constraint 66 ***/

	J[136] = -1.;
	J[489] = 1.;

   /*** derivatives for constraint 67 ***/

	J[167] = -1.;
	J[498] = 1.;

   /*** derivatives for constraint 68 ***/

	J[198] = -1.;
	J[507] = 1.;

   /*** derivatives for constraint 69 ***/

	J[229] = -1.;
	J[516] = 1.;

   /*** derivatives for constraint 70 ***/

	J[260] = -1.;
	J[525] = 1.;

   /*** derivatives for constraint 71 ***/

	J[95] = 1.;
	J[280] = -1.;
	J[286] = -1.;
	J[292] = -1.;
	J[298] = -1.;
	J[304] = -1.;
	J[429] = -1.;

   /*** derivatives for constraint 72 ***/

	J[101] = 1.;
	J[310] = -1.;
	J[316] = -1.;
	J[322] = -1.;
	J[328] = -1.;
	J[334] = -1.;
	J[435] = -1.;

   /*** derivatives for constraint 73 ***/

	J[107] = 1.;
	J[340] = -1.;
	J[346] = -1.;
	J[352] = -1.;
	J[358] = -1.;
	J[364] = -1.;
	J[441] = -1.;

   /*** derivatives for constraint 74 ***/

	J[113] = 1.;
	J[370] = -1.;
	J[376] = -1.;
	J[382] = -1.;
	J[388] = -1.;
	J[394] = -1.;
	J[447] = -1.;

   /*** derivatives for constraint 75 ***/

	J[119] = 1.;
	J[400] = -1.;
	J[406] = -1.;
	J[412] = -1.;
	J[418] = -1.;
	J[424] = -1.;
	J[453] = -1.;

   /*** derivatives for constraint 76 ***/

	J[430] = -1.;
	J[436] = -1.;
	J[442] = -1.;
	J[448] = -1.;
	J[454] = -1.;
	J[459] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
