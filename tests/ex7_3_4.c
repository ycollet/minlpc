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
 fint ex7_3_4_auxcom_[1] = { 7 /* nlc */ };
 fint ex7_3_4_funcom_[70] = {
	12 /* nvar */,
	1 /* nobj */,
	17 /* ncon */,
	51 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	13,
	20,
	25,
	30,
	32,
	34,
	36,
	38,
	40,
	42,
	52,

	/* rownos */
	1,
	6,
	7,
	8,
	9,
	3,
	4,
	5,
	6,
	7,
	10,
	11,
	3,
	4,
	5,
	6,
	7,
	12,
	13,
	4,
	5,
	6,
	14,
	15,
	4,
	5,
	6,
	16,
	17,
	1,
	5,
	2,
	6,
	1,
	7,
	1,
	2,
	1,
	3,
	2,
	4,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17 };

 real ex7_3_4_boundc_[1+24+34] /* Infinity, variable bounds, constraint bounds */ = {
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
		10.,
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
		-1.7e308,
		-10.,
		-1.7e308,
		10.,
		-1.7e308,
		1.,
		-1.7e308,
		-1.,
		-1.7e308,
		-1.,
		-1.7e308,
		1.,
		-1.7e308,
		-0.2,
		-1.7e308,
		0.2,
		-1.7e308,
		-0.05,
		-1.7e308,
		0.05};

 real ex7_3_4_x0comn_[12] = {
		0.,
		0.,
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

 static real ex7_3_4_pd[40];
static real ex7_3_4_old_x[12];
static int ex7_3_4_xkind = -1;

 static int
ex7_3_4_xcheck(real *x)
{
	real *x1 = ex7_3_4_old_x, *xe = x + 12;
	errno = 0;
	if (ex7_3_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_3_4_xkind = 0;
	return 1;
	}
 real
ex7_3_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex7_3_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[11];
	;}

	if (wantfg & 2) {
	g[11] = 1.;
	}

	return rv;
}

 void
ex7_3_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[4];
	real t1;
	fint wantfg = *needfg;
	if (ex7_3_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex7_3_4_pd[1] = pow(x[8], 4.);
	if (errno) in_trouble2("pow",x[8],4.);
	if (x[8] != 0.) {
	ex7_3_4_pd[0] = 4.*(ex7_3_4_pd[1]/x[8]);
	} else {
	ex7_3_4_pd[0] = 0.;
	}
	v[1] = ex7_3_4_pd[1] * x[7];
	ex7_3_4_pd[2] = x[8] * x[8];
	ex7_3_4_pd[3] = x[8] + x[8];
	v[2] = ex7_3_4_pd[2] * x[5];
	v[3] = v[1] - v[2];
	t1 = v[3] + x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	ex7_3_4_pd[4] = x[8] * x[8];
	ex7_3_4_pd[5] = x[8] + x[8];
	v[0] = ex7_3_4_pd[4] * x[6];
	t1 = v[0] + -x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	ex7_3_4_pd[6] = -54.387 * x[2];
	v[0] = ex7_3_4_pd[6] * x[1];
	t1 = v[0] + x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	ex7_3_4_pd[7] = 1364.67 * x[2];
	ex7_3_4_pd[8] = ex7_3_4_pd[7] * x[1];
	v[0] = -0.2 * ex7_3_4_pd[8];
	ex7_3_4_pd[9] = 147.15 * x[3];
	ex7_3_4_pd[10] = ex7_3_4_pd[9] * x[2];
	ex7_3_4_pd[11] = ex7_3_4_pd[10] * x[1];
	v[1] = 0.2 * ex7_3_4_pd[11];
	v[2] = v[0] + v[1];
	t1 = v[2] + 5.544*x[4];
	t1 += x[10];
	c[3] = t1;

  /***  constraint 5  ***/

	ex7_3_4_pd[12] = x[1] * x[1];
	ex7_3_4_pd[13] = x[1] + x[1];
	ex7_3_4_pd[14] = -9.81 * ex7_3_4_pd[12];
	ex7_3_4_pd[15] = ex7_3_4_pd[14] * x[2];
	v[0] = -3. * ex7_3_4_pd[15];
	ex7_3_4_pd[16] = 9.81 * x[2];
	ex7_3_4_pd[17] = ex7_3_4_pd[16] * x[0];
	ex7_3_4_pd[18] = ex7_3_4_pd[17] * x[1];
	v[1] = 3. * ex7_3_4_pd[18];
	v[0] += v[1];
	ex7_3_4_pd[19] = x[2] * x[2];
	ex7_3_4_pd[20] = x[2] + x[2];
	ex7_3_4_pd[21] = 4.312 * ex7_3_4_pd[19];
	ex7_3_4_pd[22] = ex7_3_4_pd[21] * x[1];
	v[1] = 3. * ex7_3_4_pd[22];
	v[0] += v[1];
	ex7_3_4_pd[23] = 264.896 * x[2];
	ex7_3_4_pd[24] = ex7_3_4_pd[23] * x[1];
	v[1] = -3. * ex7_3_4_pd[24];
	v[0] += v[1];
	ex7_3_4_pd[25] = x[3] * x[4];
	v[1] = -3. * ex7_3_4_pd[25];
	v[0] += v[1];
	t1 = v[0] + 27.821999999999996*x[4];
	t1 += x[5];
	c[4] = t1;

  /***  constraint 6  ***/

	ex7_3_4_pd[26] = x[2] * x[2];
	ex7_3_4_pd[27] = x[2] + x[2];
	ex7_3_4_pd[28] = 7. * ex7_3_4_pd[26];
	ex7_3_4_pd[29] = ex7_3_4_pd[28] * x[3];
	v[0] = ex7_3_4_pd[29] * x[1];
	ex7_3_4_pd[30] = x[2] * x[2];
	ex7_3_4_pd[31] = x[2] + x[2];
	ex7_3_4_pd[32] = 64.918 * ex7_3_4_pd[30];
	v[1] = ex7_3_4_pd[32] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	ex7_3_4_pd[33] = 380.067 * x[2];
	v[2] = ex7_3_4_pd[33] * x[1];
	v[0] += v[2];
	ex7_3_4_pd[34] = 3. * x[4];
	v[2] = ex7_3_4_pd[34] * x[1];
	v[0] += v[2];
	ex7_3_4_pd[35] = 3. * x[4];
	v[2] = ex7_3_4_pd[35] * x[0];
	v[0] += v[2];
	v[2] = -v[0];
	t1 = v[2] + x[6];
	c[5] = t1;

  /***  constraint 7  ***/

	ex7_3_4_pd[36] = x[2] * x[2];
	ex7_3_4_pd[37] = x[2] + x[2];
	ex7_3_4_pd[38] = ex7_3_4_pd[36] * x[1];
	v[0] = 7. * x[0];
	v[1] = 4. * x[1];
	ex7_3_4_pd[39] = v[0] + v[1];
	v[1] = ex7_3_4_pd[38] * ex7_3_4_pd[39];
	v[0] = -v[1];
	t1 = v[0] + x[7];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[0];
	t1 += -x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[0];
	t1 += -x[11];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[1];
	t1 += -0.1*x[11];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[1];
	t1 += -0.1*x[11];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[2];
	t1 += -0.1*x[11];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[2];
	t1 += -0.1*x[11];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[3];
	t1 += -0.01*x[11];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[3];
	t1 += -0.01*x[11];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[4];
	t1 += -0.005*x[11];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[4];
	t1 += -0.005*x[11];
	c[16] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[29] = -ex7_3_4_pd[2];
	J[35] = -x[5]*ex7_3_4_pd[3];
	J[33] = ex7_3_4_pd[1];
	J[35] += x[7]*ex7_3_4_pd[0];
	J[37] = 1.;

   /*** derivatives for constraint 2 ***/

	J[31] = ex7_3_4_pd[4];
	J[36] = x[6]*ex7_3_4_pd[5];
	J[39] = -1.;

   /*** derivatives for constraint 3 ***/

	J[5] = ex7_3_4_pd[6];
	J[12] = -x[1]*54.387;
	J[38] = 1.;

   /*** derivatives for constraint 4 ***/

	J[6] = 0.2*ex7_3_4_pd[10];
	dv[0] = 0.2*x[1];
	J[13] = dv[0]*ex7_3_4_pd[9];
	dv[0] *= x[2];
	J[19] = dv[0]*147.15;
	J[6] -= 0.2*ex7_3_4_pd[7];
	dv[1] = -0.2*x[1];
	J[13] += dv[1]*1364.67;
	J[24] = 5.544;
	J[40] = 1.;

   /*** derivatives for constraint 5 ***/

	J[25] = -3.*x[3] + 27.821999999999996;
	J[20] = -3.*x[4];
	J[7] = -3.*ex7_3_4_pd[23];
	dv[0] = -3.*x[1];
	J[14] = dv[0]*264.896;
	J[7] += 3.*ex7_3_4_pd[21];
	dv[1] = 3.*x[1];
	dv[1] *= 4.312;
	J[14] += dv[1]*ex7_3_4_pd[20];
	J[7] += 3.*ex7_3_4_pd[17];
	dv[2] = 3.*x[1];
	J[0] = dv[2]*ex7_3_4_pd[16];
	dv[2] *= x[0];
	J[14] += dv[2]*9.81;
	J[14] -= 3.*ex7_3_4_pd[14];
	dv[3] = -3.*x[2];
	dv[3] = -dv[3]*9.81;
	J[7] += dv[3]*ex7_3_4_pd[13];
	J[30] = 1.;

   /*** derivatives for constraint 6 ***/

	J[1] = -ex7_3_4_pd[35];
	J[26] = -x[0]*3.;
	J[8] = -ex7_3_4_pd[34];
	J[26] -= x[1]*3.;
	J[8] -= ex7_3_4_pd[33];
	J[15] = -x[1]*380.067;
	J[8] += ex7_3_4_pd[32];
	dv[0] = x[1]*64.918;
	J[15] += dv[0]*ex7_3_4_pd[31];
	J[8] -= ex7_3_4_pd[29];
	J[21] = -x[1]*ex7_3_4_pd[28];
	dv[1] = -x[1]*x[3];
	dv[1] *= 7.;
	J[15] += dv[1]*ex7_3_4_pd[27];
	J[32] = 1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -ex7_3_4_pd[38];
	J[9] = dv[0]*4.;
	J[2] = -ex7_3_4_pd[38]*7.;
	J[9] -= ex7_3_4_pd[39]*ex7_3_4_pd[36];
	dv[1] = -ex7_3_4_pd[39]*x[1];
	J[16] = dv[1]*ex7_3_4_pd[37];
	J[34] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = -1.;
	J[41] = -1.;

   /*** derivatives for constraint 9 ***/

	J[4] = 1.;
	J[42] = -1.;

   /*** derivatives for constraint 10 ***/

	J[10] = 1.;
	J[43] = -0.1;

   /*** derivatives for constraint 11 ***/

	J[11] = -1.;
	J[44] = -0.1;

   /*** derivatives for constraint 12 ***/

	J[17] = -1.;
	J[45] = -0.1;

   /*** derivatives for constraint 13 ***/

	J[18] = 1.;
	J[46] = -0.1;

   /*** derivatives for constraint 14 ***/

	J[22] = -1.;
	J[47] = -0.01;

   /*** derivatives for constraint 15 ***/

	J[23] = 1.;
	J[48] = -0.01;

   /*** derivatives for constraint 16 ***/

	J[27] = -1.;
	J[49] = -0.005;

   /*** derivatives for constraint 17 ***/

	J[28] = 1.;
	J[50] = -0.005;
	}
}
#ifdef __cplusplus
	}
#endif
