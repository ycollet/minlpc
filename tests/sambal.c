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
 fint sambal_auxcom_[1] = { 0 /* nlc */ };
 fint sambal_funcom_[58] = {
	17 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	34 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	11,
	13,
	15,
	17,
	19,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,

	/* rownos */
	1,
	7,
	1,
	8,
	1,
	9,
	1,
	10,
	4,
	7,
	4,
	8,
	4,
	10,
	5,
	7,
	5,
	8,
	5,
	9,
	1,
	6,
	4,
	9,
	5,
	10,
	2,
	6,
	3,
	6,
	2,
	7,
	3,
	8 };

 real sambal_boundc_[1+34+20] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real sambal_x0comn_[17] = {
		15.,
		3.,
		130.,
		80.,
		15.,
		130.,
		20.,
		25.,
		40.,
		55.,
		220.,
		190.,
		105.,
		0.,
		0.,
		0.,
		0. };

 static real sambal_pd[26];
static real sambal_old_x[17];
static int sambal_xkind = -1;

 static int
sambal_xcheck(real *x)
{
	real *x1 = sambal_old_x, *xe = x + 17;
	errno = 0;
	if (sambal_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sambal_xkind = 0;
	return 1;
	}
 real
sambal_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[13];
	fint wantfg = *needfg;
	if (sambal_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 15. - x[0];
	sambal_pd[0] = v[0] * v[0];
	sambal_pd[1] = v[0] + v[0];
	v[0] = 0.0666666666666667 * sambal_pd[0];
	v[1] = 3. - x[1];
	sambal_pd[2] = v[1] * v[1];
	sambal_pd[3] = v[1] + v[1];
	v[1] = 0.333333333333333 * sambal_pd[2];
	v[0] += v[1];
	v[1] = 130. - x[2];
	sambal_pd[4] = v[1] * v[1];
	sambal_pd[5] = v[1] + v[1];
	v[1] = 0.00769230769230769 * sambal_pd[4];
	v[0] += v[1];
	v[1] = 80. - x[3];
	sambal_pd[6] = v[1] * v[1];
	sambal_pd[7] = v[1] + v[1];
	v[1] = 0.0125 * sambal_pd[6];
	v[0] += v[1];
	v[1] = 15. - x[4];
	sambal_pd[8] = v[1] * v[1];
	sambal_pd[9] = v[1] + v[1];
	v[1] = 0.0666666666666667 * sambal_pd[8];
	v[0] += v[1];
	v[1] = 130. - x[5];
	sambal_pd[10] = v[1] * v[1];
	sambal_pd[11] = v[1] + v[1];
	v[1] = 0.00769230769230769 * sambal_pd[10];
	v[0] += v[1];
	v[1] = 20. - x[6];
	sambal_pd[12] = v[1] * v[1];
	sambal_pd[13] = v[1] + v[1];
	v[1] = 0.05 * sambal_pd[12];
	v[0] += v[1];
	v[1] = 25. - x[7];
	sambal_pd[14] = v[1] * v[1];
	sambal_pd[15] = v[1] + v[1];
	v[1] = 0.04 * sambal_pd[14];
	v[0] += v[1];
	v[1] = 40. - x[8];
	sambal_pd[16] = v[1] * v[1];
	sambal_pd[17] = v[1] + v[1];
	v[1] = 0.025 * sambal_pd[16];
	v[0] += v[1];
	v[1] = 55. - x[9];
	sambal_pd[18] = v[1] * v[1];
	sambal_pd[19] = v[1] + v[1];
	v[1] = 0.0181818181818182 * sambal_pd[18];
	v[0] += v[1];
	v[1] = 220. - x[10];
	sambal_pd[20] = v[1] * v[1];
	sambal_pd[21] = v[1] + v[1];
	v[1] = 0.00454545454545455 * sambal_pd[20];
	v[0] += v[1];
	v[1] = 190. - x[11];
	sambal_pd[22] = v[1] * v[1];
	sambal_pd[23] = v[1] + v[1];
	v[1] = 0.00526315789473684 * sambal_pd[22];
	v[0] += v[1];
	v[1] = 105. - x[12];
	sambal_pd[24] = v[1] * v[1];
	sambal_pd[25] = v[1] + v[1];
	v[1] = 0.00952380952380952 * sambal_pd[24];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	dv[0] = 0.00952380952380952*sambal_pd[25];
	g[12] = -dv[0];
	dv[1] = 0.00526315789473684*sambal_pd[23];
	g[11] = -dv[1];
	dv[2] = 0.00454545454545455*sambal_pd[21];
	g[10] = -dv[2];
	dv[3] = 0.0181818181818182*sambal_pd[19];
	g[9] = -dv[3];
	dv[4] = 0.025*sambal_pd[17];
	g[8] = -dv[4];
	dv[5] = 0.04*sambal_pd[15];
	g[7] = -dv[5];
	dv[6] = 0.05*sambal_pd[13];
	g[6] = -dv[6];
	dv[7] = 0.00769230769230769*sambal_pd[11];
	g[5] = -dv[7];
	dv[8] = 0.0666666666666667*sambal_pd[9];
	g[4] = -dv[8];
	dv[9] = 0.0125*sambal_pd[7];
	g[3] = -dv[9];
	dv[10] = 0.00769230769230769*sambal_pd[5];
	g[2] = -dv[10];
	dv[11] = 0.333333333333333*sambal_pd[3];
	g[1] = -dv[11];
	dv[12] = 0.0666666666666667*sambal_pd[1];
	g[0] = -dv[12];
	}

	return v[0];
}

 void
sambal_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (sambal_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[3];
	t1 += x[10];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[13];
	t1 += x[15];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[14];
	t1 += x[16];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += x[11];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += x[12];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[10];
	t1 += -x[13];
	t1 += -x[14];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += -x[4];
	t1 += -x[7];
	t1 += x[15];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[1];
	t1 += -x[5];
	t1 += -x[8];
	t1 += x[16];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[2];
	t1 += -x[9];
	t1 += x[11];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[3];
	t1 += -x[6];
	t1 += x[12];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[2] = -1.;
	J[4] = -1.;
	J[6] = -1.;
	J[20] = 1.;

   /*** derivatives for constraint 2 ***/

	J[26] = -1.;
	J[30] = 1.;

   /*** derivatives for constraint 3 ***/

	J[28] = -1.;
	J[32] = 1.;

   /*** derivatives for constraint 4 ***/

	J[8] = -1.;
	J[10] = -1.;
	J[12] = -1.;
	J[22] = 1.;

   /*** derivatives for constraint 5 ***/

	J[14] = -1.;
	J[16] = -1.;
	J[18] = -1.;
	J[24] = 1.;

   /*** derivatives for constraint 6 ***/

	J[21] = 1.;
	J[27] = -1.;
	J[29] = -1.;

   /*** derivatives for constraint 7 ***/

	J[1] = -1.;
	J[9] = -1.;
	J[15] = -1.;
	J[31] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = -1.;
	J[11] = -1.;
	J[17] = -1.;
	J[33] = 1.;

   /*** derivatives for constraint 9 ***/

	J[5] = -1.;
	J[19] = -1.;
	J[23] = 1.;

   /*** derivatives for constraint 10 ***/

	J[7] = -1.;
	J[13] = -1.;
	J[25] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
