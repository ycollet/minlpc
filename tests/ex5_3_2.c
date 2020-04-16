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
 fint ex5_3_2_auxcom_[1] = { 9 /* nlc */ };
 fint ex5_3_2_funcom_[88] = {
	22 /* nvar */,
	1 /* nobj */,
	16 /* ncon */,
	59 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	23,
	27,
	31,
	35,
	39,
	43,
	47,
	48,
	50,
	52,
	53,
	54,
	55,
	57,
	59,
	60,

	/* rownos */
	1,
	3,
	12,
	5,
	6,
	12,
	8,
	9,
	12,
	4,
	5,
	13,
	1,
	2,
	13,
	7,
	8,
	13,
	3,
	6,
	9,
	15,
	2,
	5,
	8,
	15,
	1,
	4,
	7,
	16,
	2,
	5,
	8,
	16,
	1,
	2,
	3,
	10,
	4,
	5,
	6,
	10,
	7,
	8,
	9,
	10,
	10,
	1,
	11,
	7,
	11,
	11,
	12,
	13,
	6,
	14,
	9,
	14,
	14 };

 real ex5_3_2_boundc_[1+44+32] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		30.,
		30.,
		50.,
		50.,
		30.,
		30.,
		300.,
		300.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.};

 real ex5_3_2_x0comn_[22] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real ex5_3_2_old_x[22];
static int ex5_3_2_xkind = -1;

 static int
ex5_3_2_xcheck(real *x)
{
	real *x1 = ex5_3_2_old_x, *xe = x + 22;
	errno = 0;
	if (ex5_3_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex5_3_2_xkind = 0;
	return 1;
	}
 real
ex5_3_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex5_3_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 0.9979 + 0.01517*x[1];
	rv += 0.00432*x[4];
	rv += 0.00432*x[10];
	rv += 0.01517*x[11];
	;}

	if (wantfg & 2) {
	g[1] = 0.01517;
	g[4] = 0.00432;
	g[10] = 0.00432;
	g[11] = 0.01517;
	}

	return rv;
}

 void
ex5_3_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex5_3_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[4] * x[8];
	t1 = v[0] + 0.333*x[10];
	t1 += -x[14];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[4] * x[9];
	v[1] = x[0] * x[7];
	v[2] = v[0] - v[1];
	t1 = v[2] + 0.333*x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[6];
	v[1] = -v[0];
	t1 = v[1] + 0.333*x[10];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] * x[8];
	v[1] = -v[0];
	t1 = v[1] + -0.333*x[11];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] * x[7];
	v[1] = x[3] * x[9];
	v[2] = v[0] - v[1];
	t1 = v[2] + 0.333*x[11];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] * x[6];
	t1 = v[0] + 0.333*x[11];
	t1 += -x[19];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[5] * x[8];
	t1 = v[0] + 0.333*x[12];
	t1 += x[15];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[2] * x[7];
	v[1] = x[5] * x[9];
	v[2] = v[0] + v[1];
	t1 = v[2] + 0.333*x[12];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] * x[6];
	t1 = v[0] + 0.333*x[12];
	t1 += x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[14];
	t1 += -x[15];
	t1 += -x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[18];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[19];
	t1 += -x[20];
	t1 += -x[21];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[6];
	t1 += x[7];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[8];
	t1 += x[9];
	c[15] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[26] = x[4];
	J[12] = x[8];
	J[34] = 0.333;
	J[47] = -1.;

   /*** derivatives for constraint 2 ***/

	J[22] = -x[0];
	J[0] = -x[7];
	J[30] = x[4];
	J[13] = x[9];
	J[35] = 0.333;

   /*** derivatives for constraint 3 ***/

	J[18] = -x[0];
	J[1] = -x[6];
	J[36] = 0.333;

   /*** derivatives for constraint 4 ***/

	J[27] = -x[3];
	J[9] = -x[8];
	J[38] = -0.333;

   /*** derivatives for constraint 5 ***/

	J[31] = -x[3];
	J[10] = -x[9];
	J[23] = x[1];
	J[3] = x[7];
	J[39] = 0.333;

   /*** derivatives for constraint 6 ***/

	J[19] = x[1];
	J[4] = x[6];
	J[40] = 0.333;
	J[54] = -1.;

   /*** derivatives for constraint 7 ***/

	J[28] = x[5];
	J[15] = x[8];
	J[42] = 0.333;
	J[49] = 1.;

   /*** derivatives for constraint 8 ***/

	J[32] = x[5];
	J[16] = x[9];
	J[24] = x[2];
	J[6] = x[7];
	J[43] = 0.333;

   /*** derivatives for constraint 9 ***/

	J[20] = x[2];
	J[7] = x[6];
	J[44] = 0.333;
	J[56] = 1.;

   /*** derivatives for constraint 10 ***/

	J[37] = 1.;
	J[41] = 1.;
	J[45] = 1.;
	J[46] = 1.;

   /*** derivatives for constraint 11 ***/

	J[48] = 1.;
	J[50] = -1.;
	J[51] = -1.;

   /*** derivatives for constraint 12 ***/

	J[2] = 1.;
	J[5] = -1.;
	J[8] = -1.;
	J[52] = -1.;

   /*** derivatives for constraint 13 ***/

	J[11] = 1.;
	J[14] = -1.;
	J[17] = -1.;
	J[53] = -1.;

   /*** derivatives for constraint 14 ***/

	J[55] = 1.;
	J[57] = -1.;
	J[58] = -1.;

   /*** derivatives for constraint 15 ***/

	J[21] = 1.;
	J[25] = 1.;

   /*** derivatives for constraint 16 ***/

	J[29] = 1.;
	J[33] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
