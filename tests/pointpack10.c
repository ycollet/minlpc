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
 fint pointpack10_auxcom_[1] = { 45 /* nlc */ };
 fint pointpack10_funcom_[273] = {
	21 /* nvar */,
	1 /* nobj */,
	55 /* ncon */,
	245 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	11,
	22,
	33,
	44,
	55,
	66,
	77,
	88,
	99,
	109,
	119,
	129,
	138,
	147,
	156,
	165,
	174,
	183,
	192,
	201,
	246,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	47,
	1,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	47,
	48,
	2,
	10,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	48,
	49,
	3,
	11,
	18,
	25,
	26,
	27,
	28,
	29,
	30,
	49,
	50,
	4,
	12,
	19,
	25,
	31,
	32,
	33,
	34,
	35,
	50,
	51,
	5,
	13,
	20,
	26,
	31,
	36,
	37,
	38,
	39,
	51,
	52,
	6,
	14,
	21,
	27,
	32,
	36,
	40,
	41,
	42,
	52,
	53,
	7,
	15,
	22,
	28,
	33,
	37,
	40,
	43,
	44,
	53,
	54,
	8,
	16,
	23,
	29,
	34,
	38,
	41,
	43,
	45,
	54,
	55,
	9,
	17,
	24,
	30,
	35,
	39,
	42,
	44,
	45,
	55,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	46,
	1,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	46,
	2,
	10,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	3,
	11,
	18,
	25,
	26,
	27,
	28,
	29,
	30,
	4,
	12,
	19,
	25,
	31,
	32,
	33,
	34,
	35,
	5,
	13,
	20,
	26,
	31,
	36,
	37,
	38,
	39,
	6,
	14,
	21,
	27,
	32,
	36,
	40,
	41,
	42,
	7,
	15,
	22,
	28,
	33,
	37,
	40,
	43,
	44,
	8,
	16,
	23,
	29,
	34,
	38,
	41,
	43,
	45,
	9,
	17,
	24,
	30,
	35,
	39,
	42,
	44,
	45,
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
	45 };

 real pointpack10_boundc_[1+42+110] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		1.,
		0.5,
		1.,
		0.5,
		1.,
		0.5,
		1.,
		0.5,
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
		0.};

 real pointpack10_x0comn_[21] = {
		0.5,
		0.5,
		0.5,
		0.5,
		0.5,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real pointpack10_pd[90];
static real pointpack10_old_x[21];
static int pointpack10_xkind = -1;

 static int
pointpack10_xcheck(real *x)
{
	real *x1 = pointpack10_old_x, *xe = x + 21;
	errno = 0;
	if (pointpack10_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pointpack10_xkind = 0;
	return 1;
	}
 real
pointpack10_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pointpack10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[20];
	;}

	if (wantfg & 2) {
	g[20] = 1.;
	}

	return rv;
}

 void
pointpack10_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (pointpack10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	pointpack10_pd[0] = 2. * x[0];
	v[0] = pointpack10_pd[0] * x[1];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[1] = 2. * x[10];
	v[0] = pointpack10_pd[1] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[0] = t1;

  /***  constraint 2  ***/

	pointpack10_pd[2] = 2. * x[0];
	v[0] = pointpack10_pd[2] * x[2];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[3] = 2. * x[10];
	v[0] = pointpack10_pd[3] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[12] * x[12];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[1] = t1;

  /***  constraint 3  ***/

	pointpack10_pd[4] = 2. * x[0];
	v[0] = pointpack10_pd[4] * x[3];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[5] = 2. * x[10];
	v[0] = pointpack10_pd[5] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[2] = t1;

  /***  constraint 4  ***/

	pointpack10_pd[6] = 2. * x[0];
	v[0] = pointpack10_pd[6] * x[4];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[7] = 2. * x[10];
	v[0] = pointpack10_pd[7] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[3] = t1;

  /***  constraint 5  ***/

	pointpack10_pd[8] = 2. * x[0];
	v[0] = pointpack10_pd[8] * x[5];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[9] = 2. * x[10];
	v[0] = pointpack10_pd[9] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[4] = t1;

  /***  constraint 6  ***/

	pointpack10_pd[10] = 2. * x[0];
	v[0] = pointpack10_pd[10] * x[6];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[11] = 2. * x[10];
	v[0] = pointpack10_pd[11] * x[16];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[16] * x[16];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[5] = t1;

  /***  constraint 7  ***/

	pointpack10_pd[12] = 2. * x[0];
	v[0] = pointpack10_pd[12] * x[7];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[13] = 2. * x[10];
	v[0] = pointpack10_pd[13] * x[17];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[6] = t1;

  /***  constraint 8  ***/

	pointpack10_pd[14] = 2. * x[0];
	v[0] = pointpack10_pd[14] * x[8];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[15] = 2. * x[10];
	v[0] = pointpack10_pd[15] * x[18];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[7] = t1;

  /***  constraint 9  ***/

	pointpack10_pd[16] = 2. * x[0];
	v[0] = pointpack10_pd[16] * x[9];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack10_pd[17] = 2. * x[10];
	v[0] = pointpack10_pd[17] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	pointpack10_pd[18] = 2. * x[1];
	v[0] = pointpack10_pd[18] * x[2];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack10_pd[19] = 2. * x[11];
	v[0] = pointpack10_pd[19] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[12] * x[12];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[9] = t1;

  /***  constraint 11  ***/

	pointpack10_pd[20] = 2. * x[1];
	v[0] = pointpack10_pd[20] * x[3];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack10_pd[21] = 2. * x[11];
	v[0] = pointpack10_pd[21] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[10] = t1;

  /***  constraint 12  ***/

	pointpack10_pd[22] = 2. * x[1];
	v[0] = pointpack10_pd[22] * x[4];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack10_pd[23] = 2. * x[11];
	v[0] = pointpack10_pd[23] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[11] = t1;

  /***  constraint 13  ***/

	pointpack10_pd[24] = 2. * x[1];
	v[0] = pointpack10_pd[24] * x[5];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack10_pd[25] = 2. * x[11];
	v[0] = pointpack10_pd[25] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[12] = t1;

  /***  constraint 14  ***/

	pointpack10_pd[26] = 2. * x[1];
	v[0] = pointpack10_pd[26] * x[6];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack10_pd[27] = 2. * x[11];
	v[0] = pointpack10_pd[27] * x[16];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[16] * x[16];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[13] = t1;

  /***  constraint 15  ***/

	pointpack10_pd[28] = 2. * x[1];
	v[0] = pointpack10_pd[28] * x[7];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack10_pd[29] = 2. * x[11];
	v[0] = pointpack10_pd[29] * x[17];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[14] = t1;

  /***  constraint 16  ***/

	pointpack10_pd[30] = 2. * x[1];
	v[0] = pointpack10_pd[30] * x[8];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack10_pd[31] = 2. * x[11];
	v[0] = pointpack10_pd[31] * x[18];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[15] = t1;

  /***  constraint 17  ***/

	pointpack10_pd[32] = 2. * x[1];
	v[0] = pointpack10_pd[32] * x[9];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack10_pd[33] = 2. * x[11];
	v[0] = pointpack10_pd[33] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[16] = t1;

  /***  constraint 18  ***/

	pointpack10_pd[34] = 2. * x[2];
	v[0] = pointpack10_pd[34] * x[3];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack10_pd[35] = 2. * x[12];
	v[0] = pointpack10_pd[35] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[17] = t1;

  /***  constraint 19  ***/

	pointpack10_pd[36] = 2. * x[2];
	v[0] = pointpack10_pd[36] * x[4];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack10_pd[37] = 2. * x[12];
	v[0] = pointpack10_pd[37] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[18] = t1;

  /***  constraint 20  ***/

	pointpack10_pd[38] = 2. * x[2];
	v[0] = pointpack10_pd[38] * x[5];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack10_pd[39] = 2. * x[12];
	v[0] = pointpack10_pd[39] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[19] = t1;

  /***  constraint 21  ***/

	pointpack10_pd[40] = 2. * x[2];
	v[0] = pointpack10_pd[40] * x[6];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack10_pd[41] = 2. * x[12];
	v[0] = pointpack10_pd[41] * x[16];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[16] * x[16];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[20] = t1;

  /***  constraint 22  ***/

	pointpack10_pd[42] = 2. * x[2];
	v[0] = pointpack10_pd[42] * x[7];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack10_pd[43] = 2. * x[12];
	v[0] = pointpack10_pd[43] * x[17];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[21] = t1;

  /***  constraint 23  ***/

	pointpack10_pd[44] = 2. * x[2];
	v[0] = pointpack10_pd[44] * x[8];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack10_pd[45] = 2. * x[12];
	v[0] = pointpack10_pd[45] * x[18];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[22] = t1;

  /***  constraint 24  ***/

	pointpack10_pd[46] = 2. * x[2];
	v[0] = pointpack10_pd[46] * x[9];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack10_pd[47] = 2. * x[12];
	v[0] = pointpack10_pd[47] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[23] = t1;

  /***  constraint 25  ***/

	pointpack10_pd[48] = 2. * x[3];
	v[0] = pointpack10_pd[48] * x[4];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	v[1] += v[0];
	pointpack10_pd[49] = 2. * x[13];
	v[0] = pointpack10_pd[49] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[24] = t1;

  /***  constraint 26  ***/

	pointpack10_pd[50] = 2. * x[3];
	v[0] = pointpack10_pd[50] * x[5];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	v[1] += v[0];
	pointpack10_pd[51] = 2. * x[13];
	v[0] = pointpack10_pd[51] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[25] = t1;

  /***  constraint 27  ***/

	pointpack10_pd[52] = 2. * x[3];
	v[0] = pointpack10_pd[52] * x[6];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	v[1] += v[0];
	pointpack10_pd[53] = 2. * x[13];
	v[0] = pointpack10_pd[53] * x[16];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[16] * x[16];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[26] = t1;

  /***  constraint 28  ***/

	pointpack10_pd[54] = 2. * x[3];
	v[0] = pointpack10_pd[54] * x[7];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	v[1] += v[0];
	pointpack10_pd[55] = 2. * x[13];
	v[0] = pointpack10_pd[55] * x[17];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[27] = t1;

  /***  constraint 29  ***/

	pointpack10_pd[56] = 2. * x[3];
	v[0] = pointpack10_pd[56] * x[8];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	v[1] += v[0];
	pointpack10_pd[57] = 2. * x[13];
	v[0] = pointpack10_pd[57] * x[18];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[28] = t1;

  /***  constraint 30  ***/

	pointpack10_pd[58] = 2. * x[3];
	v[0] = pointpack10_pd[58] * x[9];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	v[1] += v[0];
	pointpack10_pd[59] = 2. * x[13];
	v[0] = pointpack10_pd[59] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[29] = t1;

  /***  constraint 31  ***/

	pointpack10_pd[60] = 2. * x[4];
	v[0] = pointpack10_pd[60] * x[5];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[14] * x[14];
	v[1] += v[0];
	pointpack10_pd[61] = 2. * x[14];
	v[0] = pointpack10_pd[61] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[30] = t1;

  /***  constraint 32  ***/

	pointpack10_pd[62] = 2. * x[4];
	v[0] = pointpack10_pd[62] * x[6];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[14] * x[14];
	v[1] += v[0];
	pointpack10_pd[63] = 2. * x[14];
	v[0] = pointpack10_pd[63] * x[16];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[16] * x[16];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[31] = t1;

  /***  constraint 33  ***/

	pointpack10_pd[64] = 2. * x[4];
	v[0] = pointpack10_pd[64] * x[7];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[14] * x[14];
	v[1] += v[0];
	pointpack10_pd[65] = 2. * x[14];
	v[0] = pointpack10_pd[65] * x[17];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[32] = t1;

  /***  constraint 34  ***/

	pointpack10_pd[66] = 2. * x[4];
	v[0] = pointpack10_pd[66] * x[8];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[14] * x[14];
	v[1] += v[0];
	pointpack10_pd[67] = 2. * x[14];
	v[0] = pointpack10_pd[67] * x[18];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[33] = t1;

  /***  constraint 35  ***/

	pointpack10_pd[68] = 2. * x[4];
	v[0] = pointpack10_pd[68] * x[9];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[14] * x[14];
	v[1] += v[0];
	pointpack10_pd[69] = 2. * x[14];
	v[0] = pointpack10_pd[69] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[34] = t1;

  /***  constraint 36  ***/

	pointpack10_pd[70] = 2. * x[5];
	v[0] = pointpack10_pd[70] * x[6];
	v[1] = -v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[15] * x[15];
	v[1] += v[0];
	pointpack10_pd[71] = 2. * x[15];
	v[0] = pointpack10_pd[71] * x[16];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[16] * x[16];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[35] = t1;

  /***  constraint 37  ***/

	pointpack10_pd[72] = 2. * x[5];
	v[0] = pointpack10_pd[72] * x[7];
	v[1] = -v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[15] * x[15];
	v[1] += v[0];
	pointpack10_pd[73] = 2. * x[15];
	v[0] = pointpack10_pd[73] * x[17];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[36] = t1;

  /***  constraint 38  ***/

	pointpack10_pd[74] = 2. * x[5];
	v[0] = pointpack10_pd[74] * x[8];
	v[1] = -v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[15] * x[15];
	v[1] += v[0];
	pointpack10_pd[75] = 2. * x[15];
	v[0] = pointpack10_pd[75] * x[18];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[37] = t1;

  /***  constraint 39  ***/

	pointpack10_pd[76] = 2. * x[5];
	v[0] = pointpack10_pd[76] * x[9];
	v[1] = -v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[15] * x[15];
	v[1] += v[0];
	pointpack10_pd[77] = 2. * x[15];
	v[0] = pointpack10_pd[77] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[38] = t1;

  /***  constraint 40  ***/

	pointpack10_pd[78] = 2. * x[6];
	v[0] = pointpack10_pd[78] * x[7];
	v[1] = -v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[16] * x[16];
	v[1] += v[0];
	pointpack10_pd[79] = 2. * x[16];
	v[0] = pointpack10_pd[79] * x[17];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[17] * x[17];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[39] = t1;

  /***  constraint 41  ***/

	pointpack10_pd[80] = 2. * x[6];
	v[0] = pointpack10_pd[80] * x[8];
	v[1] = -v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[16] * x[16];
	v[1] += v[0];
	pointpack10_pd[81] = 2. * x[16];
	v[0] = pointpack10_pd[81] * x[18];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[40] = t1;

  /***  constraint 42  ***/

	pointpack10_pd[82] = 2. * x[6];
	v[0] = pointpack10_pd[82] * x[9];
	v[1] = -v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[16] * x[16];
	v[1] += v[0];
	pointpack10_pd[83] = 2. * x[16];
	v[0] = pointpack10_pd[83] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[41] = t1;

  /***  constraint 43  ***/

	pointpack10_pd[84] = 2. * x[7];
	v[0] = pointpack10_pd[84] * x[8];
	v[1] = -v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[17] * x[17];
	v[1] += v[0];
	pointpack10_pd[85] = 2. * x[17];
	v[0] = pointpack10_pd[85] * x[18];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[18];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[42] = t1;

  /***  constraint 44  ***/

	pointpack10_pd[86] = 2. * x[7];
	v[0] = pointpack10_pd[86] * x[9];
	v[1] = -v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[17] * x[17];
	v[1] += v[0];
	pointpack10_pd[87] = 2. * x[17];
	v[0] = pointpack10_pd[87] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[43] = t1;

  /***  constraint 45  ***/

	pointpack10_pd[88] = 2. * x[8];
	v[0] = pointpack10_pd[88] * x[9];
	v[1] = -v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	v[0] = x[18] * x[18];
	v[1] += v[0];
	pointpack10_pd[89] = 2. * x[18];
	v[0] = pointpack10_pd[89] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[19];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[20];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[10];
	t1 += x[11];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[0];
	t1 += x[1];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[1];
	t1 += x[2];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[2];
	t1 += x[3];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[3];
	t1 += x[4];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[4];
	t1 += x[5];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[5];
	t1 += x[6];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[6];
	t1 += x[7];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[7];
	t1 += x[8];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[8];
	t1 += x[9];
	c[54] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[118] = -x[11];
	J[118] -= x[11];
	J[118] += pointpack10_pd[1];
	J[108] = x[11]*2.;
	J[108] -= x[10];
	J[108] -= x[10];
	J[10] = -x[1];
	J[10] -= x[1];
	J[0] = -x[0];
	J[0] -= x[0];
	J[10] += pointpack10_pd[0];
	J[0] += x[1]*2.;
	J[200] = 1.;

   /*** derivatives for constraint 2 ***/

	J[128] = -x[12];
	J[128] -= x[12];
	J[128] += pointpack10_pd[3];
	J[109] = x[12]*2.;
	J[109] -= x[10];
	J[109] -= x[10];
	J[21] = -x[2];
	J[21] -= x[2];
	J[1] = -x[0];
	J[1] -= x[0];
	J[21] += pointpack10_pd[2];
	J[1] += x[2]*2.;
	J[201] = 1.;

   /*** derivatives for constraint 3 ***/

	J[137] = -x[13];
	J[137] -= x[13];
	J[137] += pointpack10_pd[5];
	J[110] = x[13]*2.;
	J[110] -= x[10];
	J[110] -= x[10];
	J[32] = -x[3];
	J[32] -= x[3];
	J[2] = -x[0];
	J[2] -= x[0];
	J[32] += pointpack10_pd[4];
	J[2] += x[3]*2.;
	J[202] = 1.;

   /*** derivatives for constraint 4 ***/

	J[146] = -x[14];
	J[146] -= x[14];
	J[146] += pointpack10_pd[7];
	J[111] = x[14]*2.;
	J[111] -= x[10];
	J[111] -= x[10];
	J[43] = -x[4];
	J[43] -= x[4];
	J[3] = -x[0];
	J[3] -= x[0];
	J[43] += pointpack10_pd[6];
	J[3] += x[4]*2.;
	J[203] = 1.;

   /*** derivatives for constraint 5 ***/

	J[155] = -x[15];
	J[155] -= x[15];
	J[155] += pointpack10_pd[9];
	J[112] = x[15]*2.;
	J[112] -= x[10];
	J[112] -= x[10];
	J[54] = -x[5];
	J[54] -= x[5];
	J[4] = -x[0];
	J[4] -= x[0];
	J[54] += pointpack10_pd[8];
	J[4] += x[5]*2.;
	J[204] = 1.;

   /*** derivatives for constraint 6 ***/

	J[164] = -x[16];
	J[164] -= x[16];
	J[164] += pointpack10_pd[11];
	J[113] = x[16]*2.;
	J[113] -= x[10];
	J[113] -= x[10];
	J[65] = -x[6];
	J[65] -= x[6];
	J[5] = -x[0];
	J[5] -= x[0];
	J[65] += pointpack10_pd[10];
	J[5] += x[6]*2.;
	J[205] = 1.;

   /*** derivatives for constraint 7 ***/

	J[173] = -x[17];
	J[173] -= x[17];
	J[173] += pointpack10_pd[13];
	J[114] = x[17]*2.;
	J[114] -= x[10];
	J[114] -= x[10];
	J[76] = -x[7];
	J[76] -= x[7];
	J[6] = -x[0];
	J[6] -= x[0];
	J[76] += pointpack10_pd[12];
	J[6] += x[7]*2.;
	J[206] = 1.;

   /*** derivatives for constraint 8 ***/

	J[182] = -x[18];
	J[182] -= x[18];
	J[182] += pointpack10_pd[15];
	J[115] = x[18]*2.;
	J[115] -= x[10];
	J[115] -= x[10];
	J[87] = -x[8];
	J[87] -= x[8];
	J[7] = -x[0];
	J[7] -= x[0];
	J[87] += pointpack10_pd[14];
	J[7] += x[8]*2.;
	J[207] = 1.;

   /*** derivatives for constraint 9 ***/

	J[191] = -x[19];
	J[191] -= x[19];
	J[191] += pointpack10_pd[17];
	J[116] = x[19]*2.;
	J[116] -= x[10];
	J[116] -= x[10];
	J[98] = -x[9];
	J[98] -= x[9];
	J[8] = -x[0];
	J[8] -= x[0];
	J[98] += pointpack10_pd[16];
	J[8] += x[9]*2.;
	J[208] = 1.;

   /*** derivatives for constraint 10 ***/

	J[129] = -x[12];
	J[129] -= x[12];
	J[129] += pointpack10_pd[19];
	J[119] = x[12]*2.;
	J[119] -= x[11];
	J[119] -= x[11];
	J[22] = -x[2];
	J[22] -= x[2];
	J[11] = -x[1];
	J[11] -= x[1];
	J[22] += pointpack10_pd[18];
	J[11] += x[2]*2.;
	J[209] = 1.;

   /*** derivatives for constraint 11 ***/

	J[138] = -x[13];
	J[138] -= x[13];
	J[138] += pointpack10_pd[21];
	J[120] = x[13]*2.;
	J[120] -= x[11];
	J[120] -= x[11];
	J[33] = -x[3];
	J[33] -= x[3];
	J[12] = -x[1];
	J[12] -= x[1];
	J[33] += pointpack10_pd[20];
	J[12] += x[3]*2.;
	J[210] = 1.;

   /*** derivatives for constraint 12 ***/

	J[147] = -x[14];
	J[147] -= x[14];
	J[147] += pointpack10_pd[23];
	J[121] = x[14]*2.;
	J[121] -= x[11];
	J[121] -= x[11];
	J[44] = -x[4];
	J[44] -= x[4];
	J[13] = -x[1];
	J[13] -= x[1];
	J[44] += pointpack10_pd[22];
	J[13] += x[4]*2.;
	J[211] = 1.;

   /*** derivatives for constraint 13 ***/

	J[156] = -x[15];
	J[156] -= x[15];
	J[156] += pointpack10_pd[25];
	J[122] = x[15]*2.;
	J[122] -= x[11];
	J[122] -= x[11];
	J[55] = -x[5];
	J[55] -= x[5];
	J[14] = -x[1];
	J[14] -= x[1];
	J[55] += pointpack10_pd[24];
	J[14] += x[5]*2.;
	J[212] = 1.;

   /*** derivatives for constraint 14 ***/

	J[165] = -x[16];
	J[165] -= x[16];
	J[165] += pointpack10_pd[27];
	J[123] = x[16]*2.;
	J[123] -= x[11];
	J[123] -= x[11];
	J[66] = -x[6];
	J[66] -= x[6];
	J[15] = -x[1];
	J[15] -= x[1];
	J[66] += pointpack10_pd[26];
	J[15] += x[6]*2.;
	J[213] = 1.;

   /*** derivatives for constraint 15 ***/

	J[174] = -x[17];
	J[174] -= x[17];
	J[174] += pointpack10_pd[29];
	J[124] = x[17]*2.;
	J[124] -= x[11];
	J[124] -= x[11];
	J[77] = -x[7];
	J[77] -= x[7];
	J[16] = -x[1];
	J[16] -= x[1];
	J[77] += pointpack10_pd[28];
	J[16] += x[7]*2.;
	J[214] = 1.;

   /*** derivatives for constraint 16 ***/

	J[183] = -x[18];
	J[183] -= x[18];
	J[183] += pointpack10_pd[31];
	J[125] = x[18]*2.;
	J[125] -= x[11];
	J[125] -= x[11];
	J[88] = -x[8];
	J[88] -= x[8];
	J[17] = -x[1];
	J[17] -= x[1];
	J[88] += pointpack10_pd[30];
	J[17] += x[8]*2.;
	J[215] = 1.;

   /*** derivatives for constraint 17 ***/

	J[192] = -x[19];
	J[192] -= x[19];
	J[192] += pointpack10_pd[33];
	J[126] = x[19]*2.;
	J[126] -= x[11];
	J[126] -= x[11];
	J[99] = -x[9];
	J[99] -= x[9];
	J[18] = -x[1];
	J[18] -= x[1];
	J[99] += pointpack10_pd[32];
	J[18] += x[9]*2.;
	J[216] = 1.;

   /*** derivatives for constraint 18 ***/

	J[139] = -x[13];
	J[139] -= x[13];
	J[139] += pointpack10_pd[35];
	J[130] = x[13]*2.;
	J[130] -= x[12];
	J[130] -= x[12];
	J[34] = -x[3];
	J[34] -= x[3];
	J[23] = -x[2];
	J[23] -= x[2];
	J[34] += pointpack10_pd[34];
	J[23] += x[3]*2.;
	J[217] = 1.;

   /*** derivatives for constraint 19 ***/

	J[148] = -x[14];
	J[148] -= x[14];
	J[148] += pointpack10_pd[37];
	J[131] = x[14]*2.;
	J[131] -= x[12];
	J[131] -= x[12];
	J[45] = -x[4];
	J[45] -= x[4];
	J[24] = -x[2];
	J[24] -= x[2];
	J[45] += pointpack10_pd[36];
	J[24] += x[4]*2.;
	J[218] = 1.;

   /*** derivatives for constraint 20 ***/

	J[157] = -x[15];
	J[157] -= x[15];
	J[157] += pointpack10_pd[39];
	J[132] = x[15]*2.;
	J[132] -= x[12];
	J[132] -= x[12];
	J[56] = -x[5];
	J[56] -= x[5];
	J[25] = -x[2];
	J[25] -= x[2];
	J[56] += pointpack10_pd[38];
	J[25] += x[5]*2.;
	J[219] = 1.;

   /*** derivatives for constraint 21 ***/

	J[166] = -x[16];
	J[166] -= x[16];
	J[166] += pointpack10_pd[41];
	J[133] = x[16]*2.;
	J[133] -= x[12];
	J[133] -= x[12];
	J[67] = -x[6];
	J[67] -= x[6];
	J[26] = -x[2];
	J[26] -= x[2];
	J[67] += pointpack10_pd[40];
	J[26] += x[6]*2.;
	J[220] = 1.;

   /*** derivatives for constraint 22 ***/

	J[175] = -x[17];
	J[175] -= x[17];
	J[175] += pointpack10_pd[43];
	J[134] = x[17]*2.;
	J[134] -= x[12];
	J[134] -= x[12];
	J[78] = -x[7];
	J[78] -= x[7];
	J[27] = -x[2];
	J[27] -= x[2];
	J[78] += pointpack10_pd[42];
	J[27] += x[7]*2.;
	J[221] = 1.;

   /*** derivatives for constraint 23 ***/

	J[184] = -x[18];
	J[184] -= x[18];
	J[184] += pointpack10_pd[45];
	J[135] = x[18]*2.;
	J[135] -= x[12];
	J[135] -= x[12];
	J[89] = -x[8];
	J[89] -= x[8];
	J[28] = -x[2];
	J[28] -= x[2];
	J[89] += pointpack10_pd[44];
	J[28] += x[8]*2.;
	J[222] = 1.;

   /*** derivatives for constraint 24 ***/

	J[193] = -x[19];
	J[193] -= x[19];
	J[193] += pointpack10_pd[47];
	J[136] = x[19]*2.;
	J[136] -= x[12];
	J[136] -= x[12];
	J[100] = -x[9];
	J[100] -= x[9];
	J[29] = -x[2];
	J[29] -= x[2];
	J[100] += pointpack10_pd[46];
	J[29] += x[9]*2.;
	J[223] = 1.;

   /*** derivatives for constraint 25 ***/

	J[149] = -x[14];
	J[149] -= x[14];
	J[149] += pointpack10_pd[49];
	J[140] = x[14]*2.;
	J[140] -= x[13];
	J[140] -= x[13];
	J[46] = -x[4];
	J[46] -= x[4];
	J[35] = -x[3];
	J[35] -= x[3];
	J[46] += pointpack10_pd[48];
	J[35] += x[4]*2.;
	J[224] = 1.;

   /*** derivatives for constraint 26 ***/

	J[158] = -x[15];
	J[158] -= x[15];
	J[158] += pointpack10_pd[51];
	J[141] = x[15]*2.;
	J[141] -= x[13];
	J[141] -= x[13];
	J[57] = -x[5];
	J[57] -= x[5];
	J[36] = -x[3];
	J[36] -= x[3];
	J[57] += pointpack10_pd[50];
	J[36] += x[5]*2.;
	J[225] = 1.;

   /*** derivatives for constraint 27 ***/

	J[167] = -x[16];
	J[167] -= x[16];
	J[167] += pointpack10_pd[53];
	J[142] = x[16]*2.;
	J[142] -= x[13];
	J[142] -= x[13];
	J[68] = -x[6];
	J[68] -= x[6];
	J[37] = -x[3];
	J[37] -= x[3];
	J[68] += pointpack10_pd[52];
	J[37] += x[6]*2.;
	J[226] = 1.;

   /*** derivatives for constraint 28 ***/

	J[176] = -x[17];
	J[176] -= x[17];
	J[176] += pointpack10_pd[55];
	J[143] = x[17]*2.;
	J[143] -= x[13];
	J[143] -= x[13];
	J[79] = -x[7];
	J[79] -= x[7];
	J[38] = -x[3];
	J[38] -= x[3];
	J[79] += pointpack10_pd[54];
	J[38] += x[7]*2.;
	J[227] = 1.;

   /*** derivatives for constraint 29 ***/

	J[185] = -x[18];
	J[185] -= x[18];
	J[185] += pointpack10_pd[57];
	J[144] = x[18]*2.;
	J[144] -= x[13];
	J[144] -= x[13];
	J[90] = -x[8];
	J[90] -= x[8];
	J[39] = -x[3];
	J[39] -= x[3];
	J[90] += pointpack10_pd[56];
	J[39] += x[8]*2.;
	J[228] = 1.;

   /*** derivatives for constraint 30 ***/

	J[194] = -x[19];
	J[194] -= x[19];
	J[194] += pointpack10_pd[59];
	J[145] = x[19]*2.;
	J[145] -= x[13];
	J[145] -= x[13];
	J[101] = -x[9];
	J[101] -= x[9];
	J[40] = -x[3];
	J[40] -= x[3];
	J[101] += pointpack10_pd[58];
	J[40] += x[9]*2.;
	J[229] = 1.;

   /*** derivatives for constraint 31 ***/

	J[159] = -x[15];
	J[159] -= x[15];
	J[159] += pointpack10_pd[61];
	J[150] = x[15]*2.;
	J[150] -= x[14];
	J[150] -= x[14];
	J[58] = -x[5];
	J[58] -= x[5];
	J[47] = -x[4];
	J[47] -= x[4];
	J[58] += pointpack10_pd[60];
	J[47] += x[5]*2.;
	J[230] = 1.;

   /*** derivatives for constraint 32 ***/

	J[168] = -x[16];
	J[168] -= x[16];
	J[168] += pointpack10_pd[63];
	J[151] = x[16]*2.;
	J[151] -= x[14];
	J[151] -= x[14];
	J[69] = -x[6];
	J[69] -= x[6];
	J[48] = -x[4];
	J[48] -= x[4];
	J[69] += pointpack10_pd[62];
	J[48] += x[6]*2.;
	J[231] = 1.;

   /*** derivatives for constraint 33 ***/

	J[177] = -x[17];
	J[177] -= x[17];
	J[177] += pointpack10_pd[65];
	J[152] = x[17]*2.;
	J[152] -= x[14];
	J[152] -= x[14];
	J[80] = -x[7];
	J[80] -= x[7];
	J[49] = -x[4];
	J[49] -= x[4];
	J[80] += pointpack10_pd[64];
	J[49] += x[7]*2.;
	J[232] = 1.;

   /*** derivatives for constraint 34 ***/

	J[186] = -x[18];
	J[186] -= x[18];
	J[186] += pointpack10_pd[67];
	J[153] = x[18]*2.;
	J[153] -= x[14];
	J[153] -= x[14];
	J[91] = -x[8];
	J[91] -= x[8];
	J[50] = -x[4];
	J[50] -= x[4];
	J[91] += pointpack10_pd[66];
	J[50] += x[8]*2.;
	J[233] = 1.;

   /*** derivatives for constraint 35 ***/

	J[195] = -x[19];
	J[195] -= x[19];
	J[195] += pointpack10_pd[69];
	J[154] = x[19]*2.;
	J[154] -= x[14];
	J[154] -= x[14];
	J[102] = -x[9];
	J[102] -= x[9];
	J[51] = -x[4];
	J[51] -= x[4];
	J[102] += pointpack10_pd[68];
	J[51] += x[9]*2.;
	J[234] = 1.;

   /*** derivatives for constraint 36 ***/

	J[169] = -x[16];
	J[169] -= x[16];
	J[169] += pointpack10_pd[71];
	J[160] = x[16]*2.;
	J[160] -= x[15];
	J[160] -= x[15];
	J[70] = -x[6];
	J[70] -= x[6];
	J[59] = -x[5];
	J[59] -= x[5];
	J[70] += pointpack10_pd[70];
	J[59] += x[6]*2.;
	J[235] = 1.;

   /*** derivatives for constraint 37 ***/

	J[178] = -x[17];
	J[178] -= x[17];
	J[178] += pointpack10_pd[73];
	J[161] = x[17]*2.;
	J[161] -= x[15];
	J[161] -= x[15];
	J[81] = -x[7];
	J[81] -= x[7];
	J[60] = -x[5];
	J[60] -= x[5];
	J[81] += pointpack10_pd[72];
	J[60] += x[7]*2.;
	J[236] = 1.;

   /*** derivatives for constraint 38 ***/

	J[187] = -x[18];
	J[187] -= x[18];
	J[187] += pointpack10_pd[75];
	J[162] = x[18]*2.;
	J[162] -= x[15];
	J[162] -= x[15];
	J[92] = -x[8];
	J[92] -= x[8];
	J[61] = -x[5];
	J[61] -= x[5];
	J[92] += pointpack10_pd[74];
	J[61] += x[8]*2.;
	J[237] = 1.;

   /*** derivatives for constraint 39 ***/

	J[196] = -x[19];
	J[196] -= x[19];
	J[196] += pointpack10_pd[77];
	J[163] = x[19]*2.;
	J[163] -= x[15];
	J[163] -= x[15];
	J[103] = -x[9];
	J[103] -= x[9];
	J[62] = -x[5];
	J[62] -= x[5];
	J[103] += pointpack10_pd[76];
	J[62] += x[9]*2.;
	J[238] = 1.;

   /*** derivatives for constraint 40 ***/

	J[179] = -x[17];
	J[179] -= x[17];
	J[179] += pointpack10_pd[79];
	J[170] = x[17]*2.;
	J[170] -= x[16];
	J[170] -= x[16];
	J[82] = -x[7];
	J[82] -= x[7];
	J[71] = -x[6];
	J[71] -= x[6];
	J[82] += pointpack10_pd[78];
	J[71] += x[7]*2.;
	J[239] = 1.;

   /*** derivatives for constraint 41 ***/

	J[188] = -x[18];
	J[188] -= x[18];
	J[188] += pointpack10_pd[81];
	J[171] = x[18]*2.;
	J[171] -= x[16];
	J[171] -= x[16];
	J[93] = -x[8];
	J[93] -= x[8];
	J[72] = -x[6];
	J[72] -= x[6];
	J[93] += pointpack10_pd[80];
	J[72] += x[8]*2.;
	J[240] = 1.;

   /*** derivatives for constraint 42 ***/

	J[197] = -x[19];
	J[197] -= x[19];
	J[197] += pointpack10_pd[83];
	J[172] = x[19]*2.;
	J[172] -= x[16];
	J[172] -= x[16];
	J[104] = -x[9];
	J[104] -= x[9];
	J[73] = -x[6];
	J[73] -= x[6];
	J[104] += pointpack10_pd[82];
	J[73] += x[9]*2.;
	J[241] = 1.;

   /*** derivatives for constraint 43 ***/

	J[189] = -x[18];
	J[189] -= x[18];
	J[189] += pointpack10_pd[85];
	J[180] = x[18]*2.;
	J[180] -= x[17];
	J[180] -= x[17];
	J[94] = -x[8];
	J[94] -= x[8];
	J[83] = -x[7];
	J[83] -= x[7];
	J[94] += pointpack10_pd[84];
	J[83] += x[8]*2.;
	J[242] = 1.;

   /*** derivatives for constraint 44 ***/

	J[198] = -x[19];
	J[198] -= x[19];
	J[198] += pointpack10_pd[87];
	J[181] = x[19]*2.;
	J[181] -= x[17];
	J[181] -= x[17];
	J[105] = -x[9];
	J[105] -= x[9];
	J[84] = -x[7];
	J[84] -= x[7];
	J[105] += pointpack10_pd[86];
	J[84] += x[9]*2.;
	J[243] = 1.;

   /*** derivatives for constraint 45 ***/

	J[199] = -x[19];
	J[199] -= x[19];
	J[199] += pointpack10_pd[89];
	J[190] = x[19]*2.;
	J[190] -= x[18];
	J[190] -= x[18];
	J[106] = -x[9];
	J[106] -= x[9];
	J[95] = -x[8];
	J[95] -= x[8];
	J[106] += pointpack10_pd[88];
	J[95] += x[9]*2.;
	J[244] = 1.;

   /*** derivatives for constraint 46 ***/

	J[117] = -1.;
	J[127] = 1.;

   /*** derivatives for constraint 47 ***/

	J[9] = -1.;
	J[19] = 1.;

   /*** derivatives for constraint 48 ***/

	J[20] = -1.;
	J[30] = 1.;

   /*** derivatives for constraint 49 ***/

	J[31] = -1.;
	J[41] = 1.;

   /*** derivatives for constraint 50 ***/

	J[42] = -1.;
	J[52] = 1.;

   /*** derivatives for constraint 51 ***/

	J[53] = -1.;
	J[63] = 1.;

   /*** derivatives for constraint 52 ***/

	J[64] = -1.;
	J[74] = 1.;

   /*** derivatives for constraint 53 ***/

	J[75] = -1.;
	J[85] = 1.;

   /*** derivatives for constraint 54 ***/

	J[86] = -1.;
	J[96] = 1.;

   /*** derivatives for constraint 55 ***/

	J[97] = -1.;
	J[107] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
