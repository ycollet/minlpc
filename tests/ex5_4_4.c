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
 fint ex5_4_4_auxcom_[1] = { 6 /* nlc */ };
 fint ex5_4_4_funcom_[103] = {
	27 /* nvar */,
	1 /* nobj */,
	19 /* ncon */,
	69 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	8,
	11,
	15,
	18,
	21,
	25,
	28,
	31,
	34,
	38,
	41,
	45,
	48,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	61,
	62,
	65,
	66,
	69,
	70,

	/* rownos */
	1,
	4,
	8,
	11,
	2,
	9,
	11,
	3,
	10,
	11,
	2,
	5,
	9,
	12,
	1,
	8,
	12,
	3,
	10,
	12,
	3,
	6,
	10,
	13,
	2,
	9,
	13,
	1,
	8,
	13,
	1,
	4,
	15,
	2,
	3,
	4,
	14,
	2,
	5,
	17,
	1,
	3,
	5,
	16,
	3,
	6,
	19,
	1,
	2,
	6,
	18,
	14,
	15,
	16,
	17,
	18,
	19,
	1,
	7,
	8,
	11,
	2,
	7,
	9,
	12,
	3,
	7,
	10,
	13 };

 real ex5_4_4_boundc_[1+54+38] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		100.,
		200.,
		100.,
		200.,
		100.,
		200.,
		100.,
		200.,
		100.,
		200.,
		100.,
		200.,
		10.,
		110.,
		10.,
		110.,
		10.,
		110.,
		10.,
		110.,
		10.,
		110.,
		10.,
		110.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		45.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		2000.,
		2000.,
		1000.,
		1000.,
		1500.,
		1500.,
		45.,
		45.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		210.,
		210.,
		130.,
		130.,
		210.,
		210.,
		160.,
		160.,
		210.,
		210.,
		180.,
		180.};

 real ex5_4_4_x0comn_[27] = {
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
		100.,
		100.,
		100.,
		100.,
		100.,
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex5_4_4_pd[9];
static real ex5_4_4_old_x[27];
static int ex5_4_4_xkind = -1;

 static int
ex5_4_4_xcheck(real *x)
{
	real *x1 = ex5_4_4_old_x, *xe = x + 27;
	errno = 0;
	if (ex5_4_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex5_4_4_xkind = 0;
	return 1;
	}
 real
ex5_4_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[9];
	fint wantfg = *needfg;
	if (ex5_4_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex5_4_4_pd[0] = 0.333333333333333 * x[15];
	v[0] = ex5_4_4_pd[0] * x[16];
	v[1] = 0.166666666666667 * x[15];
	v[0] += v[1];
	v[1] = 0.166666666666667 * x[16];
	v[0] += v[1];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = 2000. / v[0];
	ex5_4_4_pd[1] = -v[1] / v[0];
	v[0] = pow(v[1], 0.6);
	if (errno) in_trouble2("pow",v[1],0.6);
	if (v[1] > 0.) {
	ex5_4_4_pd[2] = 0.6*(v[0]/v[1]);
	} else if (0.6 > 1.) {
	ex5_4_4_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.6);
	}
	v[0] *= 1300.;
	ex5_4_4_pd[3] = 0.666666666666667 * x[17];
	v[1] = ex5_4_4_pd[3] * x[18];
	v[2] = 0.166666666666667 * x[17];
	v[1] += v[2];
	v[2] = 0.166666666666667 * x[18];
	v[1] += v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = 1000. / v[1];
	ex5_4_4_pd[4] = -v[2] / v[1];
	v[1] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	ex5_4_4_pd[5] = 0.6*(v[1]/v[2]);
	} else if (0.6 > 1.) {
	ex5_4_4_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[1] *= 1300.;
	v[0] += v[1];
	ex5_4_4_pd[6] = 0.666666666666667 * x[19];
	v[1] = ex5_4_4_pd[6] * x[20];
	v[2] = 0.166666666666667 * x[19];
	v[1] += v[2];
	v[2] = 0.166666666666667 * x[20];
	v[1] += v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = 1500. / v[1];
	ex5_4_4_pd[7] = -v[2] / v[1];
	v[1] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	ex5_4_4_pd[8] = 0.6*(v[1]/v[2]);
	} else if (0.6 > 1.) {
	ex5_4_4_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[1] *= 1300.;
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	dv[0] = 1300.*ex5_4_4_pd[8];
	dv[0] *= ex5_4_4_pd[7];
	dv[1] = dv[0];
	g[20] = dv[1]*0.166666666666667;
	dv[2] = dv[0];
	g[19] = dv[2]*0.166666666666667;
	g[20] += dv[0]*ex5_4_4_pd[6];
	dv[0] *= x[20];
	g[19] += dv[0]*0.666666666666667;
	dv[3] = 1300.*ex5_4_4_pd[5];
	dv[3] *= ex5_4_4_pd[4];
	dv[4] = dv[3];
	g[18] = dv[4]*0.166666666666667;
	dv[5] = dv[3];
	g[17] = dv[5]*0.166666666666667;
	g[18] += dv[3]*ex5_4_4_pd[3];
	dv[3] *= x[18];
	g[17] += dv[3]*0.666666666666667;
	dv[6] = 1300.*ex5_4_4_pd[2];
	dv[6] *= ex5_4_4_pd[1];
	dv[7] = dv[6];
	g[16] = dv[7]*0.166666666666667;
	dv[8] = dv[6];
	g[15] = dv[8]*0.166666666666667;
	g[16] += dv[6]*ex5_4_4_pd[0];
	dv[6] *= x[16];
	g[15] += dv[6]*0.333333333333333;
	}

	return v[0];
}

 void
ex5_4_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex5_4_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[12] * x[4];
	v[1] = x[14] * x[8];
	v[0] += v[1];
	v[1] = x[9] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 100.*x[21];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[10] * x[1];
	v[1] = x[14] * x[7];
	v[0] += v[1];
	v[1] = x[11] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 100.*x[23];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[10] * x[2];
	v[1] = x[12] * x[5];
	v[0] += v[1];
	v[1] = x[13] * x[6];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 100.*x[25];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] * x[10];
	v[1] = x[0] * x[9];
	v[2] = v[0] - v[1];
	c[3] = v[2];

  /***  constraint 5  ***/

	v[0] = x[3] * x[12];
	v[1] = x[3] * x[11];
	v[2] = v[0] - v[1];
	c[4] = v[2];

  /***  constraint 6  ***/

	v[0] = x[6] * x[14];
	v[1] = x[6] * x[13];
	v[2] = v[0] - v[1];
	c[5] = v[2];

  /***  constraint 7  ***/

	t1 = x[21];
	t1 += x[23];
	t1 += x[25];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[0];
	t1 += x[4];
	t1 += x[8];
	t1 += x[21];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += x[7];
	t1 += x[23];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[2];
	t1 += x[5];
	t1 += -x[6];
	t1 += x[25];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[22];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[24];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[26];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[10];
	t1 += x[15];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[9];
	t1 += x[16];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[12];
	t1 += x[17];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[11];
	t1 += x[18];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[14];
	t1 += x[19];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[13];
	t1 += x[20];
	c[18] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[9];
	J[30] = -x[0];
	J[27] = x[14];
	J[47] = x[8];
	J[14] = x[12];
	J[40] = x[4];
	J[57] = 100.;

   /*** derivatives for constraint 2 ***/

	J[10] = -x[11];
	J[37] = -x[3];
	J[24] = x[14];
	J[48] = x[7];
	J[4] = x[10];
	J[33] = x[1];
	J[61] = 100.;

   /*** derivatives for constraint 3 ***/

	J[20] = -x[13];
	J[44] = -x[6];
	J[17] = x[12];
	J[41] = x[5];
	J[7] = x[10];
	J[34] = x[2];
	J[65] = 100.;

   /*** derivatives for constraint 4 ***/

	J[31] = -x[0];
	J[1] = -x[9];
	J[35] = x[0];
	J[1] += x[10];

   /*** derivatives for constraint 5 ***/

	J[38] = -x[3];
	J[11] = -x[11];
	J[42] = x[3];
	J[11] += x[12];

   /*** derivatives for constraint 6 ***/

	J[45] = -x[6];
	J[21] = -x[13];
	J[49] = x[6];
	J[21] += x[14];

   /*** derivatives for constraint 7 ***/

	J[58] = 1.;
	J[62] = 1.;
	J[66] = 1.;

   /*** derivatives for constraint 8 ***/

	J[2] = -1.;
	J[15] = 1.;
	J[28] = 1.;
	J[59] = 1.;

   /*** derivatives for constraint 9 ***/

	J[5] = 1.;
	J[12] = -1.;
	J[25] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 10 ***/

	J[8] = 1.;
	J[18] = 1.;
	J[22] = -1.;
	J[67] = 1.;

   /*** derivatives for constraint 11 ***/

	J[3] = -1.;
	J[6] = 1.;
	J[9] = 1.;
	J[60] = 1.;

   /*** derivatives for constraint 12 ***/

	J[13] = -1.;
	J[16] = 1.;
	J[19] = 1.;
	J[64] = 1.;

   /*** derivatives for constraint 13 ***/

	J[23] = -1.;
	J[26] = 1.;
	J[29] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 14 ***/

	J[36] = 1.;
	J[51] = 1.;

   /*** derivatives for constraint 15 ***/

	J[32] = 1.;
	J[52] = 1.;

   /*** derivatives for constraint 16 ***/

	J[43] = 1.;
	J[53] = 1.;

   /*** derivatives for constraint 17 ***/

	J[39] = 1.;
	J[54] = 1.;

   /*** derivatives for constraint 18 ***/

	J[50] = 1.;
	J[55] = 1.;

   /*** derivatives for constraint 19 ***/

	J[46] = 1.;
	J[56] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
