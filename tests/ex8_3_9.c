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
 fint ex8_3_9_auxcom_[1] = { 27 /* nlc */ };
 fint ex8_3_9_funcom_[410] = {
	78 /* nvar */,
	1 /* nobj */,
	45 /* ncon */,
	325 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	25,
	31,
	33,
	35,
	37,
	39,
	41,
	43,
	45,
	47,
	49,
	51,
	55,
	59,
	63,
	67,
	71,
	79,
	87,
	95,
	103,
	111,
	119,
	127,
	135,
	143,
	151,
	155,
	159,
	163,
	167,
	171,
	175,
	179,
	183,
	187,
	191,
	195,
	199,
	203,
	207,
	211,
	215,
	219,
	223,
	227,
	231,
	235,
	239,
	243,
	247,
	251,
	255,
	259,
	263,
	267,
	271,
	274,
	275,
	276,
	279,
	282,
	285,
	288,
	291,
	294,
	297,
	300,
	303,
	306,
	310,
	314,
	318,
	322,
	326,

	/* rownos */
	1,
	2,
	11,
	12,
	29,
	34,
	3,
	4,
	13,
	14,
	30,
	35,
	5,
	6,
	15,
	16,
	31,
	36,
	7,
	8,
	17,
	18,
	32,
	37,
	9,
	10,
	19,
	20,
	33,
	38,
	1,
	11,
	2,
	12,
	3,
	13,
	4,
	14,
	5,
	15,
	6,
	16,
	7,
	17,
	8,
	18,
	9,
	19,
	10,
	20,
	11,
	12,
	34,
	39,
	13,
	14,
	35,
	40,
	15,
	16,
	36,
	41,
	17,
	18,
	37,
	42,
	19,
	20,
	38,
	43,
	1,
	3,
	5,
	7,
	9,
	11,
	21,
	26,
	2,
	4,
	6,
	8,
	10,
	12,
	21,
	27,
	1,
	3,
	5,
	7,
	9,
	13,
	22,
	26,
	2,
	4,
	6,
	8,
	10,
	14,
	22,
	27,
	1,
	3,
	5,
	7,
	9,
	15,
	23,
	26,
	2,
	4,
	6,
	8,
	10,
	16,
	23,
	27,
	1,
	3,
	5,
	7,
	9,
	17,
	24,
	26,
	2,
	4,
	6,
	8,
	10,
	18,
	24,
	27,
	1,
	3,
	5,
	7,
	9,
	19,
	25,
	26,
	2,
	4,
	6,
	8,
	10,
	20,
	25,
	27,
	1,
	2,
	29,
	39,
	3,
	4,
	30,
	39,
	5,
	6,
	31,
	39,
	7,
	8,
	32,
	39,
	9,
	10,
	33,
	39,
	1,
	2,
	29,
	40,
	3,
	4,
	30,
	40,
	5,
	6,
	31,
	40,
	7,
	8,
	32,
	40,
	9,
	10,
	33,
	40,
	1,
	2,
	29,
	41,
	3,
	4,
	30,
	41,
	5,
	6,
	31,
	41,
	7,
	8,
	32,
	41,
	9,
	10,
	33,
	41,
	1,
	2,
	29,
	42,
	3,
	4,
	30,
	42,
	5,
	6,
	31,
	42,
	7,
	8,
	32,
	42,
	9,
	10,
	33,
	42,
	1,
	2,
	29,
	43,
	3,
	4,
	30,
	43,
	5,
	6,
	31,
	43,
	7,
	8,
	32,
	43,
	9,
	10,
	33,
	43,
	26,
	27,
	39,
	44,
	26,
	27,
	40,
	44,
	26,
	27,
	41,
	44,
	26,
	27,
	42,
	44,
	26,
	27,
	43,
	44,
	26,
	27,
	44,
	26,
	27,
	11,
	12,
	45,
	13,
	14,
	45,
	15,
	16,
	45,
	17,
	18,
	45,
	19,
	20,
	45,
	11,
	12,
	21,
	13,
	14,
	22,
	15,
	16,
	23,
	17,
	18,
	24,
	19,
	20,
	25,
	1,
	2,
	28,
	29,
	3,
	4,
	28,
	30,
	5,
	6,
	28,
	31,
	7,
	8,
	28,
	32,
	9,
	10,
	28,
	33 };

 real ex8_3_9_boundc_[1+156+90] /* Infinity, variable bounds, constraint bounds */ = {
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
		100.,
		100.};

 real ex8_3_9_x0comn_[78] = {
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
		50.,
		50.,
		50.,
		50.,
		50. };

static real ex8_3_9_old_x[78];
static int ex8_3_9_xkind = -1;

 static int
ex8_3_9_xcheck(real *x)
{
	real *x1 = ex8_3_9_old_x, *xe = x + 78;
	errno = 0;
	if (ex8_3_9_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_3_9_xkind = 0;
	return 1;
	}
 real
ex8_3_9_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex8_3_9_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[62];
	;}

	if (wantfg & 2) {
	g[62] = -1.;
	}

	return rv;
}

 void
ex8_3_9_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex8_3_9_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[5] * x[0];
	v[1] = -v[0];
	v[0] = x[20] * x[30];
	v[1] += v[0];
	v[0] = x[22] * x[35];
	v[1] += v[0];
	v[0] = x[24] * x[40];
	v[1] += v[0];
	v[0] = x[26] * x[45];
	v[1] += v[0];
	v[0] = x[28] * x[50];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.45*x[73];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[6] * x[0];
	v[1] = -v[0];
	v[0] = x[21] * x[30];
	v[1] += v[0];
	v[0] = x[23] * x[35];
	v[1] += v[0];
	v[0] = x[25] * x[40];
	v[1] += v[0];
	v[0] = x[27] * x[45];
	v[1] += v[0];
	v[0] = x[29] * x[50];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.55*x[73];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[7] * x[1];
	v[1] = -v[0];
	v[0] = x[20] * x[31];
	v[1] += v[0];
	v[0] = x[22] * x[36];
	v[1] += v[0];
	v[0] = x[24] * x[41];
	v[1] += v[0];
	v[0] = x[26] * x[46];
	v[1] += v[0];
	v[0] = x[28] * x[51];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.45*x[74];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[8] * x[1];
	v[1] = -v[0];
	v[0] = x[21] * x[31];
	v[1] += v[0];
	v[0] = x[23] * x[36];
	v[1] += v[0];
	v[0] = x[25] * x[41];
	v[1] += v[0];
	v[0] = x[27] * x[46];
	v[1] += v[0];
	v[0] = x[29] * x[51];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.55*x[74];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[9] * x[2];
	v[1] = -v[0];
	v[0] = x[20] * x[32];
	v[1] += v[0];
	v[0] = x[22] * x[37];
	v[1] += v[0];
	v[0] = x[24] * x[42];
	v[1] += v[0];
	v[0] = x[26] * x[47];
	v[1] += v[0];
	v[0] = x[28] * x[52];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.45*x[75];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[10] * x[2];
	v[1] = -v[0];
	v[0] = x[21] * x[32];
	v[1] += v[0];
	v[0] = x[23] * x[37];
	v[1] += v[0];
	v[0] = x[25] * x[42];
	v[1] += v[0];
	v[0] = x[27] * x[47];
	v[1] += v[0];
	v[0] = x[29] * x[52];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.55*x[75];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[11] * x[3];
	v[1] = -v[0];
	v[0] = x[20] * x[33];
	v[1] += v[0];
	v[0] = x[22] * x[38];
	v[1] += v[0];
	v[0] = x[24] * x[43];
	v[1] += v[0];
	v[0] = x[26] * x[48];
	v[1] += v[0];
	v[0] = x[28] * x[53];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.45*x[76];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[12] * x[3];
	v[1] = -v[0];
	v[0] = x[21] * x[33];
	v[1] += v[0];
	v[0] = x[23] * x[38];
	v[1] += v[0];
	v[0] = x[25] * x[43];
	v[1] += v[0];
	v[0] = x[27] * x[48];
	v[1] += v[0];
	v[0] = x[29] * x[53];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.55*x[76];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[13] * x[4];
	v[1] = -v[0];
	v[0] = x[20] * x[34];
	v[1] += v[0];
	v[0] = x[22] * x[39];
	v[1] += v[0];
	v[0] = x[24] * x[44];
	v[1] += v[0];
	v[0] = x[26] * x[49];
	v[1] += v[0];
	v[0] = x[28] * x[54];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.45*x[77];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[14] * x[4];
	v[1] = -v[0];
	v[0] = x[21] * x[34];
	v[1] += v[0];
	v[0] = x[23] * x[39];
	v[1] += v[0];
	v[0] = x[25] * x[44];
	v[1] += v[0];
	v[0] = x[27] * x[49];
	v[1] += v[0];
	v[0] = x[29] * x[54];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -0.55*x[77];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[20] * x[15];
	v[1] = x[5] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[63] * x[68];
	v[0] += v[2];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[21] * x[15];
	v[1] = x[6] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[63] * x[68];
	v[1] = -v[2];
	v[0] += v[1];
	c[11] = v[0];

  /***  constraint 13  ***/

	v[0] = x[22] * x[16];
	v[1] = x[7] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[64] * x[69];
	v[0] += v[2];
	c[12] = v[0];

  /***  constraint 14  ***/

	v[0] = x[23] * x[16];
	v[1] = x[8] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[64] * x[69];
	v[1] = -v[2];
	v[0] += v[1];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[24] * x[17];
	v[1] = x[9] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[65] * x[70];
	v[0] += v[2];
	c[14] = v[0];

  /***  constraint 16  ***/

	v[0] = x[25] * x[17];
	v[1] = x[10] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[65] * x[70];
	v[1] = -v[2];
	v[0] += v[1];
	c[15] = v[0];

  /***  constraint 17  ***/

	v[0] = x[26] * x[18];
	v[1] = x[11] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[66] * x[71];
	v[0] += v[2];
	c[16] = v[0];

  /***  constraint 18  ***/

	v[0] = x[27] * x[18];
	v[1] = x[12] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[66] * x[71];
	v[1] = -v[2];
	v[0] += v[1];
	c[17] = v[0];

  /***  constraint 19  ***/

	v[0] = x[28] * x[19];
	v[1] = x[13] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[67] * x[72];
	v[0] += v[2];
	c[18] = v[0];

  /***  constraint 20  ***/

	v[0] = x[29] * x[19];
	v[1] = x[14] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[67] * x[72];
	v[1] = -v[2];
	v[0] += v[1];
	c[19] = v[0];

  /***  constraint 21  ***/

	v[0] = x[20] * x[21];
	v[1] = -v[0];
	t1 = v[1] + x[68];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[22] * x[23];
	v[1] = -v[0];
	t1 = v[1] + x[69];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[24] * x[25];
	v[1] = -v[0];
	t1 = v[1] + x[70];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[26] * x[27];
	v[1] = -v[0];
	t1 = v[1] + x[71];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[28] * x[29];
	v[1] = -v[0];
	t1 = v[1] + x[72];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[60] * x[61];
	v[1] = -v[0];
	v[0] = x[55] * x[20];
	v[1] += v[0];
	v[0] = x[56] * x[22];
	v[1] += v[0];
	v[0] = x[57] * x[24];
	v[1] += v[0];
	v[0] = x[58] * x[26];
	v[1] += v[0];
	v[0] = x[59] * x[28];
	v[1] += v[0];
	v[0] = -v[1];
	c[25] = v[0];

  /***  constraint 27  ***/

	v[0] = x[60] * x[62];
	v[1] = -v[0];
	v[0] = x[55] * x[21];
	v[1] += v[0];
	v[0] = x[56] * x[23];
	v[1] += v[0];
	v[0] = x[57] * x[25];
	v[1] += v[0];
	v[0] = x[58] * x[27];
	v[1] += v[0];
	v[0] = x[59] * x[29];
	v[1] += v[0];
	v[0] = -v[1];
	c[26] = v[0];

  /***  constraint 28  ***/

	t1 = -x[73];
	t1 += -x[74];
	t1 += -x[75];
	t1 += -x[76];
	t1 += -x[77];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[0];
	t1 += -x[30];
	t1 += -x[35];
	t1 += -x[40];
	t1 += -x[45];
	t1 += -x[50];
	t1 += -x[73];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[1];
	t1 += -x[31];
	t1 += -x[36];
	t1 += -x[41];
	t1 += -x[46];
	t1 += -x[51];
	t1 += -x[74];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[2];
	t1 += -x[32];
	t1 += -x[37];
	t1 += -x[42];
	t1 += -x[47];
	t1 += -x[52];
	t1 += -x[75];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[3];
	t1 += -x[33];
	t1 += -x[38];
	t1 += -x[43];
	t1 += -x[48];
	t1 += -x[53];
	t1 += -x[76];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[4];
	t1 += -x[34];
	t1 += -x[39];
	t1 += -x[44];
	t1 += -x[49];
	t1 += -x[54];
	t1 += -x[77];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[0];
	t1 += x[15];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[1];
	t1 += x[16];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[2];
	t1 += x[17];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[3];
	t1 += x[18];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[4];
	t1 += x[19];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[15];
	t1 += -x[30];
	t1 += -x[31];
	t1 += -x[32];
	t1 += -x[33];
	t1 += -x[34];
	t1 += -x[55];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[16];
	t1 += -x[35];
	t1 += -x[36];
	t1 += -x[37];
	t1 += -x[38];
	t1 += -x[39];
	t1 += -x[56];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[17];
	t1 += -x[40];
	t1 += -x[41];
	t1 += -x[42];
	t1 += -x[43];
	t1 += -x[44];
	t1 += -x[57];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[18];
	t1 += -x[45];
	t1 += -x[46];
	t1 += -x[47];
	t1 += -x[48];
	t1 += -x[49];
	t1 += -x[58];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[19];
	t1 += -x[50];
	t1 += -x[51];
	t1 += -x[52];
	t1 += -x[53];
	t1 += -x[54];
	t1 += -x[59];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[55];
	t1 += -x[56];
	t1 += -x[57];
	t1 += -x[58];
	t1 += -x[59];
	t1 += x[60];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[63];
	t1 += x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	c[44] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[230] = -x[28];
	J[134] = -x[50];
	J[210] = -x[26];
	J[118] = -x[45];
	J[190] = -x[24];
	J[102] = -x[40];
	J[170] = -x[22];
	J[86] = -x[35];
	J[150] = -x[20];
	J[70] = -x[30];
	J[0] = x[5];
	J[30] = x[0];
	J[305] = -0.45;

   /*** derivatives for constraint 2 ***/

	J[231] = -x[29];
	J[142] = -x[50];
	J[211] = -x[27];
	J[126] = -x[45];
	J[191] = -x[25];
	J[110] = -x[40];
	J[171] = -x[23];
	J[94] = -x[35];
	J[151] = -x[21];
	J[78] = -x[30];
	J[1] = x[6];
	J[32] = x[0];
	J[306] = -0.55;

   /*** derivatives for constraint 3 ***/

	J[234] = -x[28];
	J[135] = -x[51];
	J[214] = -x[26];
	J[119] = -x[46];
	J[194] = -x[24];
	J[103] = -x[41];
	J[174] = -x[22];
	J[87] = -x[36];
	J[154] = -x[20];
	J[71] = -x[31];
	J[6] = x[7];
	J[34] = x[1];
	J[309] = -0.45;

   /*** derivatives for constraint 4 ***/

	J[235] = -x[29];
	J[143] = -x[51];
	J[215] = -x[27];
	J[127] = -x[46];
	J[195] = -x[25];
	J[111] = -x[41];
	J[175] = -x[23];
	J[95] = -x[36];
	J[155] = -x[21];
	J[79] = -x[31];
	J[7] = x[8];
	J[36] = x[1];
	J[310] = -0.55;

   /*** derivatives for constraint 5 ***/

	J[238] = -x[28];
	J[136] = -x[52];
	J[218] = -x[26];
	J[120] = -x[47];
	J[198] = -x[24];
	J[104] = -x[42];
	J[178] = -x[22];
	J[88] = -x[37];
	J[158] = -x[20];
	J[72] = -x[32];
	J[12] = x[9];
	J[38] = x[2];
	J[313] = -0.45;

   /*** derivatives for constraint 6 ***/

	J[239] = -x[29];
	J[144] = -x[52];
	J[219] = -x[27];
	J[128] = -x[47];
	J[199] = -x[25];
	J[112] = -x[42];
	J[179] = -x[23];
	J[96] = -x[37];
	J[159] = -x[21];
	J[80] = -x[32];
	J[13] = x[10];
	J[40] = x[2];
	J[314] = -0.55;

   /*** derivatives for constraint 7 ***/

	J[242] = -x[28];
	J[137] = -x[53];
	J[222] = -x[26];
	J[121] = -x[48];
	J[202] = -x[24];
	J[105] = -x[43];
	J[182] = -x[22];
	J[89] = -x[38];
	J[162] = -x[20];
	J[73] = -x[33];
	J[18] = x[11];
	J[42] = x[3];
	J[317] = -0.45;

   /*** derivatives for constraint 8 ***/

	J[243] = -x[29];
	J[145] = -x[53];
	J[223] = -x[27];
	J[129] = -x[48];
	J[203] = -x[25];
	J[113] = -x[43];
	J[183] = -x[23];
	J[97] = -x[38];
	J[163] = -x[21];
	J[81] = -x[33];
	J[19] = x[12];
	J[44] = x[3];
	J[318] = -0.55;

   /*** derivatives for constraint 9 ***/

	J[246] = -x[28];
	J[138] = -x[54];
	J[226] = -x[26];
	J[122] = -x[49];
	J[206] = -x[24];
	J[106] = -x[44];
	J[186] = -x[22];
	J[90] = -x[39];
	J[166] = -x[20];
	J[74] = -x[34];
	J[24] = x[13];
	J[46] = x[4];
	J[321] = -0.45;

   /*** derivatives for constraint 10 ***/

	J[247] = -x[29];
	J[146] = -x[54];
	J[227] = -x[27];
	J[130] = -x[49];
	J[207] = -x[25];
	J[114] = -x[44];
	J[187] = -x[23];
	J[98] = -x[39];
	J[167] = -x[21];
	J[82] = -x[34];
	J[25] = x[14];
	J[48] = x[4];
	J[322] = -0.55;

   /*** derivatives for constraint 11 ***/

	J[290] = x[63];
	J[275] = x[68];
	J[2] = -x[5];
	J[31] = -x[0];
	J[50] = x[20];
	J[75] = x[15];

   /*** derivatives for constraint 12 ***/

	J[291] = -x[63];
	J[276] = -x[68];
	J[3] = -x[6];
	J[33] = -x[0];
	J[51] = x[21];
	J[83] = x[15];

   /*** derivatives for constraint 13 ***/

	J[293] = x[64];
	J[278] = x[69];
	J[8] = -x[7];
	J[35] = -x[1];
	J[54] = x[22];
	J[91] = x[16];

   /*** derivatives for constraint 14 ***/

	J[294] = -x[64];
	J[279] = -x[69];
	J[9] = -x[8];
	J[37] = -x[1];
	J[55] = x[23];
	J[99] = x[16];

   /*** derivatives for constraint 15 ***/

	J[296] = x[65];
	J[281] = x[70];
	J[14] = -x[9];
	J[39] = -x[2];
	J[58] = x[24];
	J[107] = x[17];

   /*** derivatives for constraint 16 ***/

	J[297] = -x[65];
	J[282] = -x[70];
	J[15] = -x[10];
	J[41] = -x[2];
	J[59] = x[25];
	J[115] = x[17];

   /*** derivatives for constraint 17 ***/

	J[299] = x[66];
	J[284] = x[71];
	J[20] = -x[11];
	J[43] = -x[3];
	J[62] = x[26];
	J[123] = x[18];

   /*** derivatives for constraint 18 ***/

	J[300] = -x[66];
	J[285] = -x[71];
	J[21] = -x[12];
	J[45] = -x[3];
	J[63] = x[27];
	J[131] = x[18];

   /*** derivatives for constraint 19 ***/

	J[302] = x[67];
	J[287] = x[72];
	J[26] = -x[13];
	J[47] = -x[4];
	J[66] = x[28];
	J[139] = x[19];

   /*** derivatives for constraint 20 ***/

	J[303] = -x[67];
	J[288] = -x[72];
	J[27] = -x[14];
	J[49] = -x[4];
	J[67] = x[29];
	J[147] = x[19];

   /*** derivatives for constraint 21 ***/

	J[84] = -x[20];
	J[76] = -x[21];
	J[292] = 1.;

   /*** derivatives for constraint 22 ***/

	J[100] = -x[22];
	J[92] = -x[23];
	J[295] = 1.;

   /*** derivatives for constraint 23 ***/

	J[116] = -x[24];
	J[108] = -x[25];
	J[298] = 1.;

   /*** derivatives for constraint 24 ***/

	J[132] = -x[26];
	J[124] = -x[27];
	J[301] = 1.;

   /*** derivatives for constraint 25 ***/

	J[148] = -x[28];
	J[140] = -x[29];
	J[304] = 1.;

   /*** derivatives for constraint 26 ***/

	J[141] = -x[59];
	J[266] = -x[28];
	J[125] = -x[58];
	J[262] = -x[26];
	J[109] = -x[57];
	J[258] = -x[24];
	J[93] = -x[56];
	J[254] = -x[22];
	J[77] = -x[55];
	J[250] = -x[20];
	J[273] = x[60];
	J[270] = x[61];

   /*** derivatives for constraint 27 ***/

	J[149] = -x[59];
	J[267] = -x[29];
	J[133] = -x[58];
	J[263] = -x[27];
	J[117] = -x[57];
	J[259] = -x[25];
	J[101] = -x[56];
	J[255] = -x[23];
	J[85] = -x[55];
	J[251] = -x[21];
	J[274] = x[60];
	J[271] = x[62];

   /*** derivatives for constraint 28 ***/

	J[307] = -1.;
	J[311] = -1.;
	J[315] = -1.;
	J[319] = -1.;
	J[323] = -1.;

   /*** derivatives for constraint 29 ***/

	J[4] = 1.;
	J[152] = -1.;
	J[172] = -1.;
	J[192] = -1.;
	J[212] = -1.;
	J[232] = -1.;
	J[308] = -1.;

   /*** derivatives for constraint 30 ***/

	J[10] = 1.;
	J[156] = -1.;
	J[176] = -1.;
	J[196] = -1.;
	J[216] = -1.;
	J[236] = -1.;
	J[312] = -1.;

   /*** derivatives for constraint 31 ***/

	J[16] = 1.;
	J[160] = -1.;
	J[180] = -1.;
	J[200] = -1.;
	J[220] = -1.;
	J[240] = -1.;
	J[316] = -1.;

   /*** derivatives for constraint 32 ***/

	J[22] = 1.;
	J[164] = -1.;
	J[184] = -1.;
	J[204] = -1.;
	J[224] = -1.;
	J[244] = -1.;
	J[320] = -1.;

   /*** derivatives for constraint 33 ***/

	J[28] = 1.;
	J[168] = -1.;
	J[188] = -1.;
	J[208] = -1.;
	J[228] = -1.;
	J[248] = -1.;
	J[324] = -1.;

   /*** derivatives for constraint 34 ***/

	J[5] = -1.;
	J[52] = 1.;

   /*** derivatives for constraint 35 ***/

	J[11] = -1.;
	J[56] = 1.;

   /*** derivatives for constraint 36 ***/

	J[17] = -1.;
	J[60] = 1.;

   /*** derivatives for constraint 37 ***/

	J[23] = -1.;
	J[64] = 1.;

   /*** derivatives for constraint 38 ***/

	J[29] = -1.;
	J[68] = 1.;

   /*** derivatives for constraint 39 ***/

	J[53] = 1.;
	J[153] = -1.;
	J[157] = -1.;
	J[161] = -1.;
	J[165] = -1.;
	J[169] = -1.;
	J[252] = -1.;

   /*** derivatives for constraint 40 ***/

	J[57] = 1.;
	J[173] = -1.;
	J[177] = -1.;
	J[181] = -1.;
	J[185] = -1.;
	J[189] = -1.;
	J[256] = -1.;

   /*** derivatives for constraint 41 ***/

	J[61] = 1.;
	J[193] = -1.;
	J[197] = -1.;
	J[201] = -1.;
	J[205] = -1.;
	J[209] = -1.;
	J[260] = -1.;

   /*** derivatives for constraint 42 ***/

	J[65] = 1.;
	J[213] = -1.;
	J[217] = -1.;
	J[221] = -1.;
	J[225] = -1.;
	J[229] = -1.;
	J[264] = -1.;

   /*** derivatives for constraint 43 ***/

	J[69] = 1.;
	J[233] = -1.;
	J[237] = -1.;
	J[241] = -1.;
	J[245] = -1.;
	J[249] = -1.;
	J[268] = -1.;

   /*** derivatives for constraint 44 ***/

	J[253] = -1.;
	J[257] = -1.;
	J[261] = -1.;
	J[265] = -1.;
	J[269] = -1.;
	J[272] = 1.;

   /*** derivatives for constraint 45 ***/

	J[277] = 1.;
	J[280] = 1.;
	J[283] = 1.;
	J[286] = 1.;
	J[289] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
