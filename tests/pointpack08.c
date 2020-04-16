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
 fint pointpack08_auxcom_[1] = { 28 /* nlc */ };
 fint pointpack08_funcom_[180] = {
	17 /* nvar */,
	1 /* nobj */,
	36 /* ncon */,
	156 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	9,
	18,
	27,
	36,
	45,
	54,
	63,
	71,
	79,
	87,
	94,
	101,
	108,
	115,
	122,
	129,
	157,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	30,
	1,
	8,
	9,
	10,
	11,
	12,
	13,
	30,
	31,
	2,
	8,
	14,
	15,
	16,
	17,
	18,
	31,
	32,
	3,
	9,
	14,
	19,
	20,
	21,
	22,
	32,
	33,
	4,
	10,
	15,
	19,
	23,
	24,
	25,
	33,
	34,
	5,
	11,
	16,
	20,
	23,
	26,
	27,
	34,
	35,
	6,
	12,
	17,
	21,
	24,
	26,
	28,
	35,
	36,
	7,
	13,
	18,
	22,
	25,
	27,
	28,
	36,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	29,
	1,
	8,
	9,
	10,
	11,
	12,
	13,
	29,
	2,
	8,
	14,
	15,
	16,
	17,
	18,
	3,
	9,
	14,
	19,
	20,
	21,
	22,
	4,
	10,
	15,
	19,
	23,
	24,
	25,
	5,
	11,
	16,
	20,
	23,
	26,
	27,
	6,
	12,
	17,
	21,
	24,
	26,
	28,
	7,
	13,
	18,
	22,
	25,
	27,
	28,
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
	28 };

 real pointpack08_boundc_[1+34+72] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		0.};

 real pointpack08_x0comn_[17] = {
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
		0. };

 static real pointpack08_pd[56];
static real pointpack08_old_x[17];
static int pointpack08_xkind = -1;

 static int
pointpack08_xcheck(real *x)
{
	real *x1 = pointpack08_old_x, *xe = x + 17;
	errno = 0;
	if (pointpack08_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pointpack08_xkind = 0;
	return 1;
	}
 real
pointpack08_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pointpack08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[16];
	;}

	if (wantfg & 2) {
	g[16] = 1.;
	}

	return rv;
}

 void
pointpack08_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (pointpack08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	pointpack08_pd[0] = 2. * x[0];
	v[0] = pointpack08_pd[0] * x[1];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack08_pd[1] = 2. * x[8];
	v[0] = pointpack08_pd[1] * x[9];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[9] * x[9];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[0] = t1;

  /***  constraint 2  ***/

	pointpack08_pd[2] = 2. * x[0];
	v[0] = pointpack08_pd[2] * x[2];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack08_pd[3] = 2. * x[8];
	v[0] = pointpack08_pd[3] * x[10];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[10] * x[10];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[1] = t1;

  /***  constraint 3  ***/

	pointpack08_pd[4] = 2. * x[0];
	v[0] = pointpack08_pd[4] * x[3];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack08_pd[5] = 2. * x[8];
	v[0] = pointpack08_pd[5] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[2] = t1;

  /***  constraint 4  ***/

	pointpack08_pd[6] = 2. * x[0];
	v[0] = pointpack08_pd[6] * x[4];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack08_pd[7] = 2. * x[8];
	v[0] = pointpack08_pd[7] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[12] * x[12];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[3] = t1;

  /***  constraint 5  ***/

	pointpack08_pd[8] = 2. * x[0];
	v[0] = pointpack08_pd[8] * x[5];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack08_pd[9] = 2. * x[8];
	v[0] = pointpack08_pd[9] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[4] = t1;

  /***  constraint 6  ***/

	pointpack08_pd[10] = 2. * x[0];
	v[0] = pointpack08_pd[10] * x[6];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack08_pd[11] = 2. * x[8];
	v[0] = pointpack08_pd[11] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[5] = t1;

  /***  constraint 7  ***/

	pointpack08_pd[12] = 2. * x[0];
	v[0] = pointpack08_pd[12] * x[7];
	v[1] = -v[0];
	v[0] = x[0] * x[0];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[8] * x[8];
	v[1] += v[0];
	pointpack08_pd[13] = 2. * x[8];
	v[0] = pointpack08_pd[13] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[6] = t1;

  /***  constraint 8  ***/

	pointpack08_pd[14] = 2. * x[1];
	v[0] = pointpack08_pd[14] * x[2];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	pointpack08_pd[15] = 2. * x[9];
	v[0] = pointpack08_pd[15] * x[10];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[10] * x[10];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[7] = t1;

  /***  constraint 9  ***/

	pointpack08_pd[16] = 2. * x[1];
	v[0] = pointpack08_pd[16] * x[3];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	pointpack08_pd[17] = 2. * x[9];
	v[0] = pointpack08_pd[17] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[8] = t1;

  /***  constraint 10  ***/

	pointpack08_pd[18] = 2. * x[1];
	v[0] = pointpack08_pd[18] * x[4];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	pointpack08_pd[19] = 2. * x[9];
	v[0] = pointpack08_pd[19] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[12] * x[12];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[9] = t1;

  /***  constraint 11  ***/

	pointpack08_pd[20] = 2. * x[1];
	v[0] = pointpack08_pd[20] * x[5];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	pointpack08_pd[21] = 2. * x[9];
	v[0] = pointpack08_pd[21] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	pointpack08_pd[22] = 2. * x[1];
	v[0] = pointpack08_pd[22] * x[6];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	pointpack08_pd[23] = 2. * x[9];
	v[0] = pointpack08_pd[23] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[11] = t1;

  /***  constraint 13  ***/

	pointpack08_pd[24] = 2. * x[1];
	v[0] = pointpack08_pd[24] * x[7];
	v[1] = -v[0];
	v[0] = x[1] * x[1];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[9] * x[9];
	v[1] += v[0];
	pointpack08_pd[25] = 2. * x[9];
	v[0] = pointpack08_pd[25] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[12] = t1;

  /***  constraint 14  ***/

	pointpack08_pd[26] = 2. * x[2];
	v[0] = pointpack08_pd[26] * x[3];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack08_pd[27] = 2. * x[10];
	v[0] = pointpack08_pd[27] * x[11];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[11];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[13] = t1;

  /***  constraint 15  ***/

	pointpack08_pd[28] = 2. * x[2];
	v[0] = pointpack08_pd[28] * x[4];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack08_pd[29] = 2. * x[10];
	v[0] = pointpack08_pd[29] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[12] * x[12];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[14] = t1;

  /***  constraint 16  ***/

	pointpack08_pd[30] = 2. * x[2];
	v[0] = pointpack08_pd[30] * x[5];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack08_pd[31] = 2. * x[10];
	v[0] = pointpack08_pd[31] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[15] = t1;

  /***  constraint 17  ***/

	pointpack08_pd[32] = 2. * x[2];
	v[0] = pointpack08_pd[32] * x[6];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack08_pd[33] = 2. * x[10];
	v[0] = pointpack08_pd[33] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	pointpack08_pd[34] = 2. * x[2];
	v[0] = pointpack08_pd[34] * x[7];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[10] * x[10];
	v[1] += v[0];
	pointpack08_pd[35] = 2. * x[10];
	v[0] = pointpack08_pd[35] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[17] = t1;

  /***  constraint 19  ***/

	pointpack08_pd[36] = 2. * x[3];
	v[0] = pointpack08_pd[36] * x[4];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack08_pd[37] = 2. * x[11];
	v[0] = pointpack08_pd[37] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[12] * x[12];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[18] = t1;

  /***  constraint 20  ***/

	pointpack08_pd[38] = 2. * x[3];
	v[0] = pointpack08_pd[38] * x[5];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack08_pd[39] = 2. * x[11];
	v[0] = pointpack08_pd[39] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[19] = t1;

  /***  constraint 21  ***/

	pointpack08_pd[40] = 2. * x[3];
	v[0] = pointpack08_pd[40] * x[6];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack08_pd[41] = 2. * x[11];
	v[0] = pointpack08_pd[41] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[20] = t1;

  /***  constraint 22  ***/

	pointpack08_pd[42] = 2. * x[3];
	v[0] = pointpack08_pd[42] * x[7];
	v[1] = -v[0];
	v[0] = x[3] * x[3];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[11] * x[11];
	v[1] += v[0];
	pointpack08_pd[43] = 2. * x[11];
	v[0] = pointpack08_pd[43] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[21] = t1;

  /***  constraint 23  ***/

	pointpack08_pd[44] = 2. * x[4];
	v[0] = pointpack08_pd[44] * x[5];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack08_pd[45] = 2. * x[12];
	v[0] = pointpack08_pd[45] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[13];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[22] = t1;

  /***  constraint 24  ***/

	pointpack08_pd[46] = 2. * x[4];
	v[0] = pointpack08_pd[46] * x[6];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack08_pd[47] = 2. * x[12];
	v[0] = pointpack08_pd[47] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[23] = t1;

  /***  constraint 25  ***/

	pointpack08_pd[48] = 2. * x[4];
	v[0] = pointpack08_pd[48] * x[7];
	v[1] = -v[0];
	v[0] = x[4] * x[4];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[12] * x[12];
	v[1] += v[0];
	pointpack08_pd[49] = 2. * x[12];
	v[0] = pointpack08_pd[49] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[24] = t1;

  /***  constraint 26  ***/

	pointpack08_pd[50] = 2. * x[5];
	v[0] = pointpack08_pd[50] * x[6];
	v[1] = -v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	v[1] += v[0];
	pointpack08_pd[51] = 2. * x[13];
	v[0] = pointpack08_pd[51] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[14];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[25] = t1;

  /***  constraint 27  ***/

	pointpack08_pd[52] = 2. * x[5];
	v[0] = pointpack08_pd[52] * x[7];
	v[1] = -v[0];
	v[0] = x[5] * x[5];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[13] * x[13];
	v[1] += v[0];
	pointpack08_pd[53] = 2. * x[13];
	v[0] = pointpack08_pd[53] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[26] = t1;

  /***  constraint 28  ***/

	pointpack08_pd[54] = 2. * x[6];
	v[0] = pointpack08_pd[54] * x[7];
	v[1] = -v[0];
	v[0] = x[6] * x[6];
	v[1] += v[0];
	v[0] = x[7] * x[7];
	v[1] += v[0];
	v[0] = x[14] * x[14];
	v[1] += v[0];
	pointpack08_pd[55] = 2. * x[14];
	v[0] = pointpack08_pd[55] * x[15];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[15] * x[15];
	v[1] += v[2];
	v[2] = -v[1];
	t1 = v[2] + x[16];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[8];
	t1 += x[9];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[0];
	t1 += x[1];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[1];
	t1 += x[2];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[2];
	t1 += x[3];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[3];
	t1 += x[4];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[4];
	t1 += x[5];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[5];
	t1 += x[6];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[6];
	t1 += x[7];
	c[35] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[78] = -x[9];
	J[78] -= x[9];
	J[78] += pointpack08_pd[1];
	J[70] = x[9]*2.;
	J[70] -= x[8];
	J[70] -= x[8];
	J[8] = -x[1];
	J[8] -= x[1];
	J[0] = -x[0];
	J[0] -= x[0];
	J[8] += pointpack08_pd[0];
	J[0] += x[1]*2.;
	J[128] = 1.;

   /*** derivatives for constraint 2 ***/

	J[86] = -x[10];
	J[86] -= x[10];
	J[86] += pointpack08_pd[3];
	J[71] = x[10]*2.;
	J[71] -= x[8];
	J[71] -= x[8];
	J[17] = -x[2];
	J[17] -= x[2];
	J[1] = -x[0];
	J[1] -= x[0];
	J[17] += pointpack08_pd[2];
	J[1] += x[2]*2.;
	J[129] = 1.;

   /*** derivatives for constraint 3 ***/

	J[93] = -x[11];
	J[93] -= x[11];
	J[93] += pointpack08_pd[5];
	J[72] = x[11]*2.;
	J[72] -= x[8];
	J[72] -= x[8];
	J[26] = -x[3];
	J[26] -= x[3];
	J[2] = -x[0];
	J[2] -= x[0];
	J[26] += pointpack08_pd[4];
	J[2] += x[3]*2.;
	J[130] = 1.;

   /*** derivatives for constraint 4 ***/

	J[100] = -x[12];
	J[100] -= x[12];
	J[100] += pointpack08_pd[7];
	J[73] = x[12]*2.;
	J[73] -= x[8];
	J[73] -= x[8];
	J[35] = -x[4];
	J[35] -= x[4];
	J[3] = -x[0];
	J[3] -= x[0];
	J[35] += pointpack08_pd[6];
	J[3] += x[4]*2.;
	J[131] = 1.;

   /*** derivatives for constraint 5 ***/

	J[107] = -x[13];
	J[107] -= x[13];
	J[107] += pointpack08_pd[9];
	J[74] = x[13]*2.;
	J[74] -= x[8];
	J[74] -= x[8];
	J[44] = -x[5];
	J[44] -= x[5];
	J[4] = -x[0];
	J[4] -= x[0];
	J[44] += pointpack08_pd[8];
	J[4] += x[5]*2.;
	J[132] = 1.;

   /*** derivatives for constraint 6 ***/

	J[114] = -x[14];
	J[114] -= x[14];
	J[114] += pointpack08_pd[11];
	J[75] = x[14]*2.;
	J[75] -= x[8];
	J[75] -= x[8];
	J[53] = -x[6];
	J[53] -= x[6];
	J[5] = -x[0];
	J[5] -= x[0];
	J[53] += pointpack08_pd[10];
	J[5] += x[6]*2.;
	J[133] = 1.;

   /*** derivatives for constraint 7 ***/

	J[121] = -x[15];
	J[121] -= x[15];
	J[121] += pointpack08_pd[13];
	J[76] = x[15]*2.;
	J[76] -= x[8];
	J[76] -= x[8];
	J[62] = -x[7];
	J[62] -= x[7];
	J[6] = -x[0];
	J[6] -= x[0];
	J[62] += pointpack08_pd[12];
	J[6] += x[7]*2.;
	J[134] = 1.;

   /*** derivatives for constraint 8 ***/

	J[87] = -x[10];
	J[87] -= x[10];
	J[87] += pointpack08_pd[15];
	J[79] = x[10]*2.;
	J[79] -= x[9];
	J[79] -= x[9];
	J[18] = -x[2];
	J[18] -= x[2];
	J[9] = -x[1];
	J[9] -= x[1];
	J[18] += pointpack08_pd[14];
	J[9] += x[2]*2.;
	J[135] = 1.;

   /*** derivatives for constraint 9 ***/

	J[94] = -x[11];
	J[94] -= x[11];
	J[94] += pointpack08_pd[17];
	J[80] = x[11]*2.;
	J[80] -= x[9];
	J[80] -= x[9];
	J[27] = -x[3];
	J[27] -= x[3];
	J[10] = -x[1];
	J[10] -= x[1];
	J[27] += pointpack08_pd[16];
	J[10] += x[3]*2.;
	J[136] = 1.;

   /*** derivatives for constraint 10 ***/

	J[101] = -x[12];
	J[101] -= x[12];
	J[101] += pointpack08_pd[19];
	J[81] = x[12]*2.;
	J[81] -= x[9];
	J[81] -= x[9];
	J[36] = -x[4];
	J[36] -= x[4];
	J[11] = -x[1];
	J[11] -= x[1];
	J[36] += pointpack08_pd[18];
	J[11] += x[4]*2.;
	J[137] = 1.;

   /*** derivatives for constraint 11 ***/

	J[108] = -x[13];
	J[108] -= x[13];
	J[108] += pointpack08_pd[21];
	J[82] = x[13]*2.;
	J[82] -= x[9];
	J[82] -= x[9];
	J[45] = -x[5];
	J[45] -= x[5];
	J[12] = -x[1];
	J[12] -= x[1];
	J[45] += pointpack08_pd[20];
	J[12] += x[5]*2.;
	J[138] = 1.;

   /*** derivatives for constraint 12 ***/

	J[115] = -x[14];
	J[115] -= x[14];
	J[115] += pointpack08_pd[23];
	J[83] = x[14]*2.;
	J[83] -= x[9];
	J[83] -= x[9];
	J[54] = -x[6];
	J[54] -= x[6];
	J[13] = -x[1];
	J[13] -= x[1];
	J[54] += pointpack08_pd[22];
	J[13] += x[6]*2.;
	J[139] = 1.;

   /*** derivatives for constraint 13 ***/

	J[122] = -x[15];
	J[122] -= x[15];
	J[122] += pointpack08_pd[25];
	J[84] = x[15]*2.;
	J[84] -= x[9];
	J[84] -= x[9];
	J[63] = -x[7];
	J[63] -= x[7];
	J[14] = -x[1];
	J[14] -= x[1];
	J[63] += pointpack08_pd[24];
	J[14] += x[7]*2.;
	J[140] = 1.;

   /*** derivatives for constraint 14 ***/

	J[95] = -x[11];
	J[95] -= x[11];
	J[95] += pointpack08_pd[27];
	J[88] = x[11]*2.;
	J[88] -= x[10];
	J[88] -= x[10];
	J[28] = -x[3];
	J[28] -= x[3];
	J[19] = -x[2];
	J[19] -= x[2];
	J[28] += pointpack08_pd[26];
	J[19] += x[3]*2.;
	J[141] = 1.;

   /*** derivatives for constraint 15 ***/

	J[102] = -x[12];
	J[102] -= x[12];
	J[102] += pointpack08_pd[29];
	J[89] = x[12]*2.;
	J[89] -= x[10];
	J[89] -= x[10];
	J[37] = -x[4];
	J[37] -= x[4];
	J[20] = -x[2];
	J[20] -= x[2];
	J[37] += pointpack08_pd[28];
	J[20] += x[4]*2.;
	J[142] = 1.;

   /*** derivatives for constraint 16 ***/

	J[109] = -x[13];
	J[109] -= x[13];
	J[109] += pointpack08_pd[31];
	J[90] = x[13]*2.;
	J[90] -= x[10];
	J[90] -= x[10];
	J[46] = -x[5];
	J[46] -= x[5];
	J[21] = -x[2];
	J[21] -= x[2];
	J[46] += pointpack08_pd[30];
	J[21] += x[5]*2.;
	J[143] = 1.;

   /*** derivatives for constraint 17 ***/

	J[116] = -x[14];
	J[116] -= x[14];
	J[116] += pointpack08_pd[33];
	J[91] = x[14]*2.;
	J[91] -= x[10];
	J[91] -= x[10];
	J[55] = -x[6];
	J[55] -= x[6];
	J[22] = -x[2];
	J[22] -= x[2];
	J[55] += pointpack08_pd[32];
	J[22] += x[6]*2.;
	J[144] = 1.;

   /*** derivatives for constraint 18 ***/

	J[123] = -x[15];
	J[123] -= x[15];
	J[123] += pointpack08_pd[35];
	J[92] = x[15]*2.;
	J[92] -= x[10];
	J[92] -= x[10];
	J[64] = -x[7];
	J[64] -= x[7];
	J[23] = -x[2];
	J[23] -= x[2];
	J[64] += pointpack08_pd[34];
	J[23] += x[7]*2.;
	J[145] = 1.;

   /*** derivatives for constraint 19 ***/

	J[103] = -x[12];
	J[103] -= x[12];
	J[103] += pointpack08_pd[37];
	J[96] = x[12]*2.;
	J[96] -= x[11];
	J[96] -= x[11];
	J[38] = -x[4];
	J[38] -= x[4];
	J[29] = -x[3];
	J[29] -= x[3];
	J[38] += pointpack08_pd[36];
	J[29] += x[4]*2.;
	J[146] = 1.;

   /*** derivatives for constraint 20 ***/

	J[110] = -x[13];
	J[110] -= x[13];
	J[110] += pointpack08_pd[39];
	J[97] = x[13]*2.;
	J[97] -= x[11];
	J[97] -= x[11];
	J[47] = -x[5];
	J[47] -= x[5];
	J[30] = -x[3];
	J[30] -= x[3];
	J[47] += pointpack08_pd[38];
	J[30] += x[5]*2.;
	J[147] = 1.;

   /*** derivatives for constraint 21 ***/

	J[117] = -x[14];
	J[117] -= x[14];
	J[117] += pointpack08_pd[41];
	J[98] = x[14]*2.;
	J[98] -= x[11];
	J[98] -= x[11];
	J[56] = -x[6];
	J[56] -= x[6];
	J[31] = -x[3];
	J[31] -= x[3];
	J[56] += pointpack08_pd[40];
	J[31] += x[6]*2.;
	J[148] = 1.;

   /*** derivatives for constraint 22 ***/

	J[124] = -x[15];
	J[124] -= x[15];
	J[124] += pointpack08_pd[43];
	J[99] = x[15]*2.;
	J[99] -= x[11];
	J[99] -= x[11];
	J[65] = -x[7];
	J[65] -= x[7];
	J[32] = -x[3];
	J[32] -= x[3];
	J[65] += pointpack08_pd[42];
	J[32] += x[7]*2.;
	J[149] = 1.;

   /*** derivatives for constraint 23 ***/

	J[111] = -x[13];
	J[111] -= x[13];
	J[111] += pointpack08_pd[45];
	J[104] = x[13]*2.;
	J[104] -= x[12];
	J[104] -= x[12];
	J[48] = -x[5];
	J[48] -= x[5];
	J[39] = -x[4];
	J[39] -= x[4];
	J[48] += pointpack08_pd[44];
	J[39] += x[5]*2.;
	J[150] = 1.;

   /*** derivatives for constraint 24 ***/

	J[118] = -x[14];
	J[118] -= x[14];
	J[118] += pointpack08_pd[47];
	J[105] = x[14]*2.;
	J[105] -= x[12];
	J[105] -= x[12];
	J[57] = -x[6];
	J[57] -= x[6];
	J[40] = -x[4];
	J[40] -= x[4];
	J[57] += pointpack08_pd[46];
	J[40] += x[6]*2.;
	J[151] = 1.;

   /*** derivatives for constraint 25 ***/

	J[125] = -x[15];
	J[125] -= x[15];
	J[125] += pointpack08_pd[49];
	J[106] = x[15]*2.;
	J[106] -= x[12];
	J[106] -= x[12];
	J[66] = -x[7];
	J[66] -= x[7];
	J[41] = -x[4];
	J[41] -= x[4];
	J[66] += pointpack08_pd[48];
	J[41] += x[7]*2.;
	J[152] = 1.;

   /*** derivatives for constraint 26 ***/

	J[119] = -x[14];
	J[119] -= x[14];
	J[119] += pointpack08_pd[51];
	J[112] = x[14]*2.;
	J[112] -= x[13];
	J[112] -= x[13];
	J[58] = -x[6];
	J[58] -= x[6];
	J[49] = -x[5];
	J[49] -= x[5];
	J[58] += pointpack08_pd[50];
	J[49] += x[6]*2.;
	J[153] = 1.;

   /*** derivatives for constraint 27 ***/

	J[126] = -x[15];
	J[126] -= x[15];
	J[126] += pointpack08_pd[53];
	J[113] = x[15]*2.;
	J[113] -= x[13];
	J[113] -= x[13];
	J[67] = -x[7];
	J[67] -= x[7];
	J[50] = -x[5];
	J[50] -= x[5];
	J[67] += pointpack08_pd[52];
	J[50] += x[7]*2.;
	J[154] = 1.;

   /*** derivatives for constraint 28 ***/

	J[127] = -x[15];
	J[127] -= x[15];
	J[127] += pointpack08_pd[55];
	J[120] = x[15]*2.;
	J[120] -= x[14];
	J[120] -= x[14];
	J[68] = -x[7];
	J[68] -= x[7];
	J[59] = -x[6];
	J[59] -= x[6];
	J[68] += pointpack08_pd[54];
	J[59] += x[7]*2.;
	J[155] = 1.;

   /*** derivatives for constraint 29 ***/

	J[77] = -1.;
	J[85] = 1.;

   /*** derivatives for constraint 30 ***/

	J[7] = -1.;
	J[15] = 1.;

   /*** derivatives for constraint 31 ***/

	J[16] = -1.;
	J[24] = 1.;

   /*** derivatives for constraint 32 ***/

	J[25] = -1.;
	J[33] = 1.;

   /*** derivatives for constraint 33 ***/

	J[34] = -1.;
	J[42] = 1.;

   /*** derivatives for constraint 34 ***/

	J[43] = -1.;
	J[51] = 1.;

   /*** derivatives for constraint 35 ***/

	J[52] = -1.;
	J[60] = 1.;

   /*** derivatives for constraint 36 ***/

	J[61] = -1.;
	J[69] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
