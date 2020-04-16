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
 fint ex1252a_auxcom_[1] = { 12 /* nlc */ };
 fint ex1252a_funcom_[112] = {
	24 /* nvar */,
	1 /* nobj */,
	34 /* ncon */,
	81 /* nzc */,
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
	16,
	19,
	22,
	25,
	28,
	31,
	35,
	39,
	43,
	45,
	47,
	49,
	57,
	65,
	73,
	76,
	79,
	82,

	/* rownos */
	1,
	29,
	8,
	30,
	9,
	31,
	10,
	32,
	11,
	33,
	12,
	34,
	1,
	4,
	14,
	2,
	5,
	15,
	3,
	6,
	16,
	4,
	10,
	20,
	5,
	11,
	21,
	6,
	12,
	22,
	1,
	4,
	7,
	23,
	2,
	5,
	8,
	24,
	3,
	6,
	9,
	25,
	1,
	17,
	2,
	18,
	3,
	19,
	10,
	14,
	17,
	20,
	23,
	26,
	29,
	32,
	11,
	15,
	18,
	21,
	24,
	27,
	30,
	33,
	12,
	16,
	19,
	22,
	25,
	28,
	31,
	34,
	7,
	13,
	26,
	8,
	13,
	27,
	9,
	13,
	28 };

 real ex1252a_boundc_[1+48+68] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		3.,
		0.,
		2950.,
		0.,
		2950.,
		0.,
		2950.,
		0.,
		400.,
		0.,
		400.,
		0.,
		400.,
		0.,
		350.,
		0.,
		350.,
		0.,
		350.,
		0.,
		80.,
		0.,
		25.,
		0.,
		45.,
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
		1.,
		1.,
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

 real ex1252a_x0comn_[24] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		983.333333333333,
		983.333333333333,
		983.333333333333,
		133.333333333333,
		133.333333333333,
		133.333333333333,
		116.666666666667,
		116.666666666667,
		116.666666666667,
		0.,
		0.,
		0.,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333 };

 static real ex1252a_pd[51];
static real ex1252a_old_x[24];
static int ex1252a_xkind = -1;

 static int
ex1252a_xcheck(real *x)
{
	real *x1 = ex1252a_old_x, *xe = x + 24;
	errno = 0;
	if (ex1252a_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1252a_xkind = 0;
	return 1;
	}
 real
ex1252a_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[5], dv[3];
	fint wantfg = *needfg;
	if (ex1252a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 1800. * x[15];
	ex1252a_pd[42] = v[0] + 6329.03;
	ex1252a_pd[43] = ex1252a_pd[42] * x[0];
	ex1252a_pd[44] = ex1252a_pd[43] * x[3];
	v[0] = ex1252a_pd[44] * x[18];
	v[2] = 1800. * x[16];
	ex1252a_pd[45] = v[2] + 2489.31;
	ex1252a_pd[46] = ex1252a_pd[45] * x[1];
	ex1252a_pd[47] = ex1252a_pd[46] * x[4];
	v[2] = ex1252a_pd[47] * x[19];
	v[0] += v[2];
	v[2] = 1800. * x[17];
	ex1252a_pd[48] = v[2] + 3270.27;
	ex1252a_pd[49] = ex1252a_pd[48] * x[2];
	ex1252a_pd[50] = ex1252a_pd[49] * x[5];
	v[2] = ex1252a_pd[50] * x[20];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[20] = ex1252a_pd[50];
	g[5] = x[20]*ex1252a_pd[49];
	dv[0] = x[20]*x[5];
	g[2] = dv[0]*ex1252a_pd[48];
	dv[0] *= x[2];
	g[17] = dv[0]*1800.;
	g[19] = ex1252a_pd[47];
	g[4] = x[19]*ex1252a_pd[46];
	dv[1] = x[19]*x[4];
	g[1] = dv[1]*ex1252a_pd[45];
	dv[1] *= x[1];
	g[16] = dv[1]*1800.;
	g[18] = ex1252a_pd[44];
	g[3] = x[18]*ex1252a_pd[43];
	dv[2] = x[18]*x[3];
	g[0] = dv[2]*ex1252a_pd[42];
	dv[2] *= x[0];
	g[15] = dv[2]*1800.;
	}

	return v[0];
}

 void
ex1252a_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (ex1252a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.000338983050847458 * x[6];
	v[1] = pow(v[0], 3.);
	if (errno) in_trouble2("pow",v[0],3.);
	if (v[0] != 0.) {
	ex1252a_pd[0] = 3.*(v[0]*v[0]);
	} else {
	ex1252a_pd[0] = 0.;
	}
	v[1] *= -19.9;
	v[0] = 0.000338983050847458 * x[6];
	ex1252a_pd[1] = v[0] * v[0];
	ex1252a_pd[2] = v[0] + v[0];
	ex1252a_pd[3] = 0.161 * ex1252a_pd[1];
	v[0] = ex1252a_pd[3] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	ex1252a_pd[4] = x[12] * x[12];
	ex1252a_pd[5] = x[12] + x[12];
	ex1252a_pd[6] = 1.90169491525424e-07 * ex1252a_pd[4];
	v[2] = ex1252a_pd[6] * x[6];
	v[1] += v[2];
	t1 = v[1] + x[15];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.000338983050847458 * x[7];
	v[1] = pow(v[0], 3.);
	if (errno) in_trouble2("pow",v[0],3.);
	if (v[0] != 0.) {
	ex1252a_pd[7] = 3.*(v[0]*v[0]);
	} else {
	ex1252a_pd[7] = 0.;
	}
	v[1] *= -1.21;
	v[0] = 0.000338983050847458 * x[7];
	ex1252a_pd[8] = v[0] * v[0];
	ex1252a_pd[9] = v[0] + v[0];
	ex1252a_pd[10] = 0.0644 * ex1252a_pd[8];
	v[0] = ex1252a_pd[10] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	ex1252a_pd[11] = x[13] * x[13];
	ex1252a_pd[12] = x[13] + x[13];
	ex1252a_pd[13] = 1.91186440677966e-07 * ex1252a_pd[11];
	v[2] = ex1252a_pd[13] * x[7];
	v[1] += v[2];
	t1 = v[1] + x[16];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 0.000338983050847458 * x[8];
	v[1] = pow(v[0], 3.);
	if (errno) in_trouble2("pow",v[0],3.);
	if (v[0] != 0.) {
	ex1252a_pd[14] = 3.*(v[0]*v[0]);
	} else {
	ex1252a_pd[14] = 0.;
	}
	v[1] *= -6.52;
	v[0] = 0.000338983050847458 * x[8];
	ex1252a_pd[15] = v[0] * v[0];
	ex1252a_pd[16] = v[0] + v[0];
	ex1252a_pd[17] = 0.102 * ex1252a_pd[15];
	v[0] = ex1252a_pd[17] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	ex1252a_pd[18] = x[14] * x[14];
	ex1252a_pd[19] = x[14] + x[14];
	ex1252a_pd[20] = 7.86440677966102e-08 * ex1252a_pd[18];
	v[2] = ex1252a_pd[20] * x[8];
	v[1] += v[2];
	t1 = v[1] + x[17];
	c[2] = t1;

  /***  constraint 4  ***/

	ex1252a_pd[21] = -0.00023593220338983 * x[6];
	v[0] = ex1252a_pd[21] * x[12];
	v[1] = 0.000338983050847458 * x[6];
	ex1252a_pd[22] = v[1] * v[1];
	ex1252a_pd[23] = v[1] + v[1];
	v[1] = -629. * ex1252a_pd[22];
	v[0] += v[1];
	ex1252a_pd[24] = x[12] * x[12];
	ex1252a_pd[25] = x[12] + x[12];
	v[1] = 0.0116 * ex1252a_pd[24];
	v[0] += v[1];
	t1 = v[0] + x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	ex1252a_pd[26] = -0.001 * x[7];
	v[0] = ex1252a_pd[26] * x[13];
	v[1] = 0.000338983050847458 * x[7];
	ex1252a_pd[27] = v[1] * v[1];
	ex1252a_pd[28] = v[1] + v[1];
	v[1] = -215. * ex1252a_pd[27];
	v[0] += v[1];
	ex1252a_pd[29] = x[13] * x[13];
	ex1252a_pd[30] = x[13] + x[13];
	v[1] = 0.115 * ex1252a_pd[29];
	v[0] += v[1];
	t1 = v[0] + x[10];
	c[4] = t1;

  /***  constraint 6  ***/

	ex1252a_pd[31] = -0.000179661016949153 * x[8];
	v[0] = ex1252a_pd[31] * x[14];
	v[1] = 0.000338983050847458 * x[8];
	ex1252a_pd[32] = v[1] * v[1];
	ex1252a_pd[33] = v[1] + v[1];
	v[1] = -361. * ex1252a_pd[32];
	v[0] += v[1];
	ex1252a_pd[34] = x[14] * x[14];
	ex1252a_pd[35] = x[14] + x[14];
	v[1] = 0.00946 * ex1252a_pd[34];
	v[0] += v[1];
	t1 = v[0] + x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	ex1252a_pd[36] = 0.00285714285714286 * x[12];
	v[0] = ex1252a_pd[36] * x[0];
	t1 = v[0] + -x[21];
	c[6] = t1;

  /***  constraint 8  ***/

	ex1252a_pd[37] = 0.00285714285714286 * x[13];
	v[0] = ex1252a_pd[37] * x[1];
	t1 = v[0] + -x[22];
	c[7] = t1;

  /***  constraint 9  ***/

	ex1252a_pd[38] = 0.00285714285714286 * x[14];
	v[0] = ex1252a_pd[38] * x[2];
	t1 = v[0] + -x[23];
	c[8] = t1;

  /***  constraint 10  ***/

	ex1252a_pd[39] = 0.0025 * x[9];
	v[0] = ex1252a_pd[39] * x[3];
	t1 = v[0] + -x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	ex1252a_pd[40] = 0.0025 * x[10];
	v[0] = ex1252a_pd[40] * x[4];
	t1 = v[0] + -x[19];
	c[10] = t1;

  /***  constraint 12  ***/

	ex1252a_pd[41] = 0.0025 * x[11];
	v[0] = ex1252a_pd[41] * x[5];
	t1 = v[0] + -x[20];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += x[23];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 0.000338983050847458*x[6];
	t1 += -x[18];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 0.000338983050847458*x[7];
	t1 += -x[19];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 0.000338983050847458*x[8];
	t1 += -x[20];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = 0.0125*x[15];
	t1 += -x[18];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 0.04*x[16];
	t1 += -x[19];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = 0.0222222222222222*x[17];
	t1 += -x[20];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = 0.0025*x[9];
	t1 += -x[18];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = 0.0025*x[10];
	t1 += -x[19];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = 0.0025*x[11];
	t1 += -x[20];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = 0.00285714285714286*x[12];
	t1 += -x[18];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = 0.00285714285714286*x[13];
	t1 += -x[19];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = 0.00285714285714286*x[14];
	t1 += -x[20];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[18];
	t1 += x[21];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[19];
	t1 += x[22];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[20];
	t1 += x[23];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[0];
	t1 += -3.*x[18];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[1];
	t1 += -3.*x[19];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[2];
	t1 += -3.*x[20];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[3];
	t1 += -3.*x[18];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[4];
	t1 += -3.*x[19];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[5];
	t1 += -3.*x[20];
	c[33] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[12] = ex1252a_pd[6];
	dv[0] = x[6]*1.90169491525424e-07;
	J[30] = dv[0]*ex1252a_pd[5];
	J[30] -= ex1252a_pd[3];
	dv[1] = -x[12]*0.161;
	dv[1] *= ex1252a_pd[2];
	J[12] += dv[1]*0.000338983050847458;
	dv[2] = -19.9*ex1252a_pd[0];
	J[12] += dv[2]*0.000338983050847458;
	J[42] = 1.;

   /*** derivatives for constraint 2 ***/

	J[15] = ex1252a_pd[13];
	dv[0] = x[7]*1.91186440677966e-07;
	J[34] = dv[0]*ex1252a_pd[12];
	J[34] -= ex1252a_pd[10];
	dv[1] = -x[13]*0.0644;
	dv[1] *= ex1252a_pd[9];
	J[15] += dv[1]*0.000338983050847458;
	dv[2] = -1.21*ex1252a_pd[7];
	J[15] += dv[2]*0.000338983050847458;
	J[44] = 1.;

   /*** derivatives for constraint 3 ***/

	J[18] = ex1252a_pd[20];
	dv[0] = x[8]*7.86440677966102e-08;
	J[38] = dv[0]*ex1252a_pd[19];
	J[38] -= ex1252a_pd[17];
	dv[1] = -x[14]*0.102;
	dv[1] *= ex1252a_pd[16];
	J[18] += dv[1]*0.000338983050847458;
	dv[2] = -6.52*ex1252a_pd[14];
	J[18] += dv[2]*0.000338983050847458;
	J[46] = 1.;

   /*** derivatives for constraint 4 ***/

	J[31] = 0.0116*ex1252a_pd[25];
	dv[0] = -629.*ex1252a_pd[23];
	J[13] = dv[0]*0.000338983050847458;
	J[31] += ex1252a_pd[21];
	J[13] -= x[12]*0.00023593220338983;
	J[21] = 1.;

   /*** derivatives for constraint 5 ***/

	J[35] = 0.115*ex1252a_pd[30];
	dv[0] = -215.*ex1252a_pd[28];
	J[16] = dv[0]*0.000338983050847458;
	J[35] += ex1252a_pd[26];
	J[16] -= x[13]*0.001;
	J[24] = 1.;

   /*** derivatives for constraint 6 ***/

	J[39] = 0.00946*ex1252a_pd[35];
	dv[0] = -361.*ex1252a_pd[33];
	J[19] = dv[0]*0.000338983050847458;
	J[39] += ex1252a_pd[31];
	J[19] -= x[14]*0.000179661016949153;
	J[27] = 1.;

   /*** derivatives for constraint 7 ***/

	J[0] = ex1252a_pd[36];
	J[32] = x[0]*0.00285714285714286;
	J[72] = -1.;

   /*** derivatives for constraint 8 ***/

	J[2] = ex1252a_pd[37];
	J[36] = x[1]*0.00285714285714286;
	J[75] = -1.;

   /*** derivatives for constraint 9 ***/

	J[4] = ex1252a_pd[38];
	J[40] = x[2]*0.00285714285714286;
	J[78] = -1.;

   /*** derivatives for constraint 10 ***/

	J[6] = ex1252a_pd[39];
	J[22] = x[3]*0.0025;
	J[48] = -1.;

   /*** derivatives for constraint 11 ***/

	J[8] = ex1252a_pd[40];
	J[25] = x[4]*0.0025;
	J[56] = -1.;

   /*** derivatives for constraint 12 ***/

	J[10] = ex1252a_pd[41];
	J[28] = x[5]*0.0025;
	J[64] = -1.;

   /*** derivatives for constraint 13 ***/

	J[73] = 1.;
	J[76] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 14 ***/

	J[14] = 0.000338983050847458;
	J[49] = -1.;

   /*** derivatives for constraint 15 ***/

	J[17] = 0.000338983050847458;
	J[57] = -1.;

   /*** derivatives for constraint 16 ***/

	J[20] = 0.000338983050847458;
	J[65] = -1.;

   /*** derivatives for constraint 17 ***/

	J[43] = 0.0125;
	J[50] = -1.;

   /*** derivatives for constraint 18 ***/

	J[45] = 0.04;
	J[58] = -1.;

   /*** derivatives for constraint 19 ***/

	J[47] = 0.0222222222222222;
	J[66] = -1.;

   /*** derivatives for constraint 20 ***/

	J[23] = 0.0025;
	J[51] = -1.;

   /*** derivatives for constraint 21 ***/

	J[26] = 0.0025;
	J[59] = -1.;

   /*** derivatives for constraint 22 ***/

	J[29] = 0.0025;
	J[67] = -1.;

   /*** derivatives for constraint 23 ***/

	J[33] = 0.00285714285714286;
	J[52] = -1.;

   /*** derivatives for constraint 24 ***/

	J[37] = 0.00285714285714286;
	J[60] = -1.;

   /*** derivatives for constraint 25 ***/

	J[41] = 0.00285714285714286;
	J[68] = -1.;

   /*** derivatives for constraint 26 ***/

	J[53] = -1.;
	J[74] = 1.;

   /*** derivatives for constraint 27 ***/

	J[61] = -1.;
	J[77] = 1.;

   /*** derivatives for constraint 28 ***/

	J[69] = -1.;
	J[80] = 1.;

   /*** derivatives for constraint 29 ***/

	J[1] = 1.;
	J[54] = -3.;

   /*** derivatives for constraint 30 ***/

	J[3] = 1.;
	J[62] = -3.;

   /*** derivatives for constraint 31 ***/

	J[5] = 1.;
	J[70] = -3.;

   /*** derivatives for constraint 32 ***/

	J[7] = 1.;
	J[55] = -3.;

   /*** derivatives for constraint 33 ***/

	J[9] = 1.;
	J[63] = -3.;

   /*** derivatives for constraint 34 ***/

	J[11] = 1.;
	J[71] = -3.;
	}
}
#ifdef __cplusplus
	}
#endif
