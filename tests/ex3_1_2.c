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
 fint ex3_1_2_auxcom_[1] = { 6 /* nlc */ };
 fint ex3_1_2_funcom_[38] = {
	5 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	26 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	23,
	27,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	3,
	4,
	1,
	2,
	5,
	6 };

 real ex3_1_2_boundc_[1+10+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		78.,
		102.,
		27.,
		45.,
		27.,
		45.,
		33.,
		45.,
		27.,
		45.,
		-1.7e308,
		6.665593,
		-1.7e308,
		85.334407,
		-1.7e308,
		29.48751,
		-1.7e308,
		-9.48751,
		-1.7e308,
		15.599039,
		-1.7e308,
		-10.699039};

 real ex3_1_2_x0comn_[5] = {
		78.,
		29.9953,
		36.7758,
		33.,
		45. };

 static real ex3_1_2_pd[20];
static real ex3_1_2_old_x[5];
static int ex3_1_2_xkind = -1;

 static int
ex3_1_2_xcheck(real *x)
{
	real *x1 = ex3_1_2_old_x, *xe = x + 5;
	errno = 0;
	if (ex3_1_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex3_1_2_xkind = 0;
	return 1;
	}
 real
ex3_1_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex3_1_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex3_1_2_pd[18] = 0.8356891 * x[0];
	v[0] = ex3_1_2_pd[18] * x[2];
	ex3_1_2_pd[19] = 5.3578547 * x[1];
	v[1] = ex3_1_2_pd[19] * x[1];
	v[0] += v[1];
	v[0] += -40792.141;
	rv = v[0] + 37.293239*x[0];
	;}

	if (wantfg & 2) {
	g[1] = ex3_1_2_pd[19];
	g[1] += x[1]*5.3578547;
	g[2] = ex3_1_2_pd[18];
	g[0] = x[2]*0.8356891 + 37.293239;
	}

	return rv;
}

 void
ex3_1_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	fint wantfg = *needfg;
	if (ex3_1_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex3_1_2_pd[0] = 0.0056858 * x[3];
	v[0] = ex3_1_2_pd[0] * x[2];
	ex3_1_2_pd[1] = 0.0022053 * x[1];
	v[1] = ex3_1_2_pd[1] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	ex3_1_2_pd[2] = 0.0006262 * x[0];
	v[2] = ex3_1_2_pd[2] * x[4];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	ex3_1_2_pd[3] = 0.0022053 * x[1];
	v[0] = ex3_1_2_pd[3] * x[2];
	ex3_1_2_pd[4] = 0.0056858 * x[3];
	v[1] = ex3_1_2_pd[4] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	ex3_1_2_pd[5] = 0.0006262 * x[0];
	v[2] = ex3_1_2_pd[5] * x[4];
	v[1] = -v[2];
	v[0] += v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	ex3_1_2_pd[6] = 0.0071317 * x[3];
	v[0] = ex3_1_2_pd[6] * x[2];
	ex3_1_2_pd[7] = 0.0021813 * x[1];
	v[1] = ex3_1_2_pd[7] * x[1];
	v[0] += v[1];
	ex3_1_2_pd[8] = 0.0029955 * x[0];
	v[1] = ex3_1_2_pd[8] * x[3];
	v[0] += v[1];
	c[2] = v[0];

  /***  constraint 4  ***/

	ex3_1_2_pd[9] = -0.0071317 * x[3];
	v[0] = ex3_1_2_pd[9] * x[2];
	ex3_1_2_pd[10] = 0.0021813 * x[1];
	v[1] = ex3_1_2_pd[10] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	ex3_1_2_pd[11] = 0.0029955 * x[0];
	v[2] = ex3_1_2_pd[11] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	ex3_1_2_pd[12] = 0.0047026 * x[1];
	v[0] = ex3_1_2_pd[12] * x[2];
	ex3_1_2_pd[13] = 0.0019085 * x[1];
	v[1] = ex3_1_2_pd[13] * x[4];
	v[0] += v[1];
	ex3_1_2_pd[14] = 0.0012547 * x[0];
	v[1] = ex3_1_2_pd[14] * x[1];
	v[0] += v[1];
	c[4] = v[0];

  /***  constraint 6  ***/

	ex3_1_2_pd[15] = -0.0047026 * x[1];
	v[0] = ex3_1_2_pd[15] * x[2];
	ex3_1_2_pd[16] = 0.0019085 * x[1];
	v[1] = ex3_1_2_pd[16] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	ex3_1_2_pd[17] = 0.0012547 * x[0];
	v[2] = ex3_1_2_pd[17] * x[1];
	v[1] = -v[2];
	v[0] += v[1];
	c[5] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[22] = ex3_1_2_pd[2];
	J[0] = x[4]*0.0006262;
	J[12] = -ex3_1_2_pd[1];
	J[6] = -x[2]*0.0022053;
	J[12] += ex3_1_2_pd[0];
	J[18] = x[2]*0.0056858;

   /*** derivatives for constraint 2 ***/

	J[23] = -ex3_1_2_pd[5];
	J[1] = -x[4]*0.0006262;
	J[13] = -ex3_1_2_pd[4];
	J[19] = -x[2]*0.0056858;
	J[13] += ex3_1_2_pd[3];
	J[7] = x[2]*0.0022053;

   /*** derivatives for constraint 3 ***/

	J[20] = ex3_1_2_pd[8];
	J[2] = x[3]*0.0029955;
	J[8] = ex3_1_2_pd[7];
	J[8] += x[1]*0.0021813;
	J[14] = ex3_1_2_pd[6];
	J[20] += x[2]*0.0071317;

   /*** derivatives for constraint 4 ***/

	J[21] = -ex3_1_2_pd[11];
	J[3] = -x[3]*0.0029955;
	J[9] = -ex3_1_2_pd[10];
	J[9] -= x[1]*0.0021813;
	J[15] = ex3_1_2_pd[9];
	J[21] -= x[2]*0.0071317;

   /*** derivatives for constraint 5 ***/

	J[10] = ex3_1_2_pd[14];
	J[4] = x[1]*0.0012547;
	J[24] = ex3_1_2_pd[13];
	J[10] += x[4]*0.0019085;
	J[16] = ex3_1_2_pd[12];
	J[10] += x[2]*0.0047026;

   /*** derivatives for constraint 6 ***/

	J[11] = -ex3_1_2_pd[17];
	J[5] = -x[1]*0.0012547;
	J[25] = -ex3_1_2_pd[16];
	J[11] -= x[4]*0.0019085;
	J[17] = ex3_1_2_pd[15];
	J[11] -= x[2]*0.0047026;
	}
}
#ifdef __cplusplus
	}
#endif
