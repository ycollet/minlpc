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
 fint ex1252_auxcom_[1] = { 12 /* nlc */ };
 fint ex1252_funcom_[151] = {
	39 /* nvar */,
	1 /* nobj */,
	43 /* ncon */,
	105 /* nzc */,
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
	22,
	25,
	28,
	31,
	34,
	37,
	41,
	45,
	49,
	51,
	53,
	55,
	64,
	73,
	82,
	85,
	88,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,

	/* rownos */
	1,
	29,
	35,
	8,
	30,
	36,
	9,
	31,
	37,
	10,
	32,
	38,
	11,
	33,
	39,
	12,
	34,
	40,
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
	41,
	11,
	15,
	18,
	21,
	24,
	27,
	30,
	33,
	42,
	12,
	16,
	19,
	22,
	25,
	28,
	31,
	34,
	43,
	7,
	13,
	26,
	8,
	13,
	27,
	9,
	13,
	28,
	35,
	35,
	36,
	36,
	37,
	37,
	38,
	38,
	39,
	39,
	40,
	40,
	41,
	42,
	43 };

 real ex1252_boundc_[1+78+86] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 real ex1252_x0comn_[39] = {
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
		0.333333333333333,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real ex1252_pd[51];
static real ex1252_old_x[39];
static int ex1252_xkind = -1;

 static int
ex1252_xcheck(real *x)
{
	real *x1 = ex1252_old_x, *xe = x + 39;
	errno = 0;
	if (ex1252_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1252_xkind = 0;
	return 1;
	}
 real
ex1252_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[5], dv[3];
	fint wantfg = *needfg;
	if (ex1252_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 1800. * x[15];
	ex1252_pd[42] = v[0] + 6329.03;
	ex1252_pd[43] = ex1252_pd[42] * x[0];
	ex1252_pd[44] = ex1252_pd[43] * x[3];
	v[0] = ex1252_pd[44] * x[18];
	v[2] = 1800. * x[16];
	ex1252_pd[45] = v[2] + 2489.31;
	ex1252_pd[46] = ex1252_pd[45] * x[1];
	ex1252_pd[47] = ex1252_pd[46] * x[4];
	v[2] = ex1252_pd[47] * x[19];
	v[0] += v[2];
	v[2] = 1800. * x[17];
	ex1252_pd[48] = v[2] + 3270.27;
	ex1252_pd[49] = ex1252_pd[48] * x[2];
	ex1252_pd[50] = ex1252_pd[49] * x[5];
	v[2] = ex1252_pd[50] * x[20];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[20] = ex1252_pd[50];
	g[5] = x[20]*ex1252_pd[49];
	dv[0] = x[20]*x[5];
	g[2] = dv[0]*ex1252_pd[48];
	dv[0] *= x[2];
	g[17] = dv[0]*1800.;
	g[19] = ex1252_pd[47];
	g[4] = x[19]*ex1252_pd[46];
	dv[1] = x[19]*x[4];
	g[1] = dv[1]*ex1252_pd[45];
	dv[1] *= x[1];
	g[16] = dv[1]*1800.;
	g[18] = ex1252_pd[44];
	g[3] = x[18]*ex1252_pd[43];
	dv[2] = x[18]*x[3];
	g[0] = dv[2]*ex1252_pd[42];
	dv[2] *= x[0];
	g[15] = dv[2]*1800.;
	}

	return v[0];
}

 void
ex1252_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (ex1252_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.000338983050847458 * x[6];
	v[1] = pow(v[0], 3.);
	if (errno) in_trouble2("pow",v[0],3.);
	if (v[0] != 0.) {
	ex1252_pd[0] = 3.*(v[0]*v[0]);
	} else {
	ex1252_pd[0] = 0.;
	}
	v[1] *= -19.9;
	v[0] = 0.000338983050847458 * x[6];
	ex1252_pd[1] = v[0] * v[0];
	ex1252_pd[2] = v[0] + v[0];
	ex1252_pd[3] = 0.161 * ex1252_pd[1];
	v[0] = ex1252_pd[3] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	ex1252_pd[4] = x[12] * x[12];
	ex1252_pd[5] = x[12] + x[12];
	ex1252_pd[6] = 1.90169491525424e-07 * ex1252_pd[4];
	v[2] = ex1252_pd[6] * x[6];
	v[1] += v[2];
	t1 = v[1] + x[15];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 0.000338983050847458 * x[7];
	v[1] = pow(v[0], 3.);
	if (errno) in_trouble2("pow",v[0],3.);
	if (v[0] != 0.) {
	ex1252_pd[7] = 3.*(v[0]*v[0]);
	} else {
	ex1252_pd[7] = 0.;
	}
	v[1] *= -1.21;
	v[0] = 0.000338983050847458 * x[7];
	ex1252_pd[8] = v[0] * v[0];
	ex1252_pd[9] = v[0] + v[0];
	ex1252_pd[10] = 0.0644 * ex1252_pd[8];
	v[0] = ex1252_pd[10] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	ex1252_pd[11] = x[13] * x[13];
	ex1252_pd[12] = x[13] + x[13];
	ex1252_pd[13] = 1.91186440677966e-07 * ex1252_pd[11];
	v[2] = ex1252_pd[13] * x[7];
	v[1] += v[2];
	t1 = v[1] + x[16];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 0.000338983050847458 * x[8];
	v[1] = pow(v[0], 3.);
	if (errno) in_trouble2("pow",v[0],3.);
	if (v[0] != 0.) {
	ex1252_pd[14] = 3.*(v[0]*v[0]);
	} else {
	ex1252_pd[14] = 0.;
	}
	v[1] *= -6.52;
	v[0] = 0.000338983050847458 * x[8];
	ex1252_pd[15] = v[0] * v[0];
	ex1252_pd[16] = v[0] + v[0];
	ex1252_pd[17] = 0.102 * ex1252_pd[15];
	v[0] = ex1252_pd[17] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	ex1252_pd[18] = x[14] * x[14];
	ex1252_pd[19] = x[14] + x[14];
	ex1252_pd[20] = 7.86440677966102e-08 * ex1252_pd[18];
	v[2] = ex1252_pd[20] * x[8];
	v[1] += v[2];
	t1 = v[1] + x[17];
	c[2] = t1;

  /***  constraint 4  ***/

	ex1252_pd[21] = -0.00023593220338983 * x[6];
	v[0] = ex1252_pd[21] * x[12];
	v[1] = 0.000338983050847458 * x[6];
	ex1252_pd[22] = v[1] * v[1];
	ex1252_pd[23] = v[1] + v[1];
	v[1] = -629. * ex1252_pd[22];
	v[0] += v[1];
	ex1252_pd[24] = x[12] * x[12];
	ex1252_pd[25] = x[12] + x[12];
	v[1] = 0.0116 * ex1252_pd[24];
	v[0] += v[1];
	t1 = v[0] + x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	ex1252_pd[26] = -0.001 * x[7];
	v[0] = ex1252_pd[26] * x[13];
	v[1] = 0.000338983050847458 * x[7];
	ex1252_pd[27] = v[1] * v[1];
	ex1252_pd[28] = v[1] + v[1];
	v[1] = -215. * ex1252_pd[27];
	v[0] += v[1];
	ex1252_pd[29] = x[13] * x[13];
	ex1252_pd[30] = x[13] + x[13];
	v[1] = 0.115 * ex1252_pd[29];
	v[0] += v[1];
	t1 = v[0] + x[10];
	c[4] = t1;

  /***  constraint 6  ***/

	ex1252_pd[31] = -0.000179661016949153 * x[8];
	v[0] = ex1252_pd[31] * x[14];
	v[1] = 0.000338983050847458 * x[8];
	ex1252_pd[32] = v[1] * v[1];
	ex1252_pd[33] = v[1] + v[1];
	v[1] = -361. * ex1252_pd[32];
	v[0] += v[1];
	ex1252_pd[34] = x[14] * x[14];
	ex1252_pd[35] = x[14] + x[14];
	v[1] = 0.00946 * ex1252_pd[34];
	v[0] += v[1];
	t1 = v[0] + x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	ex1252_pd[36] = 0.00285714285714286 * x[12];
	v[0] = ex1252_pd[36] * x[0];
	t1 = v[0] + -x[21];
	c[6] = t1;

  /***  constraint 8  ***/

	ex1252_pd[37] = 0.00285714285714286 * x[13];
	v[0] = ex1252_pd[37] * x[1];
	t1 = v[0] + -x[22];
	c[7] = t1;

  /***  constraint 9  ***/

	ex1252_pd[38] = 0.00285714285714286 * x[14];
	v[0] = ex1252_pd[38] * x[2];
	t1 = v[0] + -x[23];
	c[8] = t1;

  /***  constraint 10  ***/

	ex1252_pd[39] = 0.0025 * x[9];
	v[0] = ex1252_pd[39] * x[3];
	t1 = v[0] + -x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	ex1252_pd[40] = 0.0025 * x[10];
	v[0] = ex1252_pd[40] * x[4];
	t1 = v[0] + -x[19];
	c[10] = t1;

  /***  constraint 12  ***/

	ex1252_pd[41] = 0.0025 * x[11];
	v[0] = ex1252_pd[41] * x[5];
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

  /***  constraint 35  ***/

	t1 = x[0];
	t1 += -x[24];
	t1 += -2.*x[25];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[1];
	t1 += -x[26];
	t1 += -2.*x[27];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[2];
	t1 += -x[28];
	t1 += -2.*x[29];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[3];
	t1 += -x[30];
	t1 += -2.*x[31];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[4];
	t1 += -x[32];
	t1 += -2.*x[33];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[5];
	t1 += -x[34];
	t1 += -2.*x[35];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[18];
	t1 += -x[36];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[19];
	t1 += -x[37];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[20];
	t1 += -x[38];
	c[42] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[18] = ex1252_pd[6];
	dv[0] = x[6]*1.90169491525424e-07;
	J[36] = dv[0]*ex1252_pd[5];
	J[36] -= ex1252_pd[3];
	dv[1] = -x[12]*0.161;
	dv[1] *= ex1252_pd[2];
	J[18] += dv[1]*0.000338983050847458;
	dv[2] = -19.9*ex1252_pd[0];
	J[18] += dv[2]*0.000338983050847458;
	J[48] = 1.;

   /*** derivatives for constraint 2 ***/

	J[21] = ex1252_pd[13];
	dv[0] = x[7]*1.91186440677966e-07;
	J[40] = dv[0]*ex1252_pd[12];
	J[40] -= ex1252_pd[10];
	dv[1] = -x[13]*0.0644;
	dv[1] *= ex1252_pd[9];
	J[21] += dv[1]*0.000338983050847458;
	dv[2] = -1.21*ex1252_pd[7];
	J[21] += dv[2]*0.000338983050847458;
	J[50] = 1.;

   /*** derivatives for constraint 3 ***/

	J[24] = ex1252_pd[20];
	dv[0] = x[8]*7.86440677966102e-08;
	J[44] = dv[0]*ex1252_pd[19];
	J[44] -= ex1252_pd[17];
	dv[1] = -x[14]*0.102;
	dv[1] *= ex1252_pd[16];
	J[24] += dv[1]*0.000338983050847458;
	dv[2] = -6.52*ex1252_pd[14];
	J[24] += dv[2]*0.000338983050847458;
	J[52] = 1.;

   /*** derivatives for constraint 4 ***/

	J[37] = 0.0116*ex1252_pd[25];
	dv[0] = -629.*ex1252_pd[23];
	J[19] = dv[0]*0.000338983050847458;
	J[37] += ex1252_pd[21];
	J[19] -= x[12]*0.00023593220338983;
	J[27] = 1.;

   /*** derivatives for constraint 5 ***/

	J[41] = 0.115*ex1252_pd[30];
	dv[0] = -215.*ex1252_pd[28];
	J[22] = dv[0]*0.000338983050847458;
	J[41] += ex1252_pd[26];
	J[22] -= x[13]*0.001;
	J[30] = 1.;

   /*** derivatives for constraint 6 ***/

	J[45] = 0.00946*ex1252_pd[35];
	dv[0] = -361.*ex1252_pd[33];
	J[25] = dv[0]*0.000338983050847458;
	J[45] += ex1252_pd[31];
	J[25] -= x[14]*0.000179661016949153;
	J[33] = 1.;

   /*** derivatives for constraint 7 ***/

	J[0] = ex1252_pd[36];
	J[38] = x[0]*0.00285714285714286;
	J[81] = -1.;

   /*** derivatives for constraint 8 ***/

	J[3] = ex1252_pd[37];
	J[42] = x[1]*0.00285714285714286;
	J[84] = -1.;

   /*** derivatives for constraint 9 ***/

	J[6] = ex1252_pd[38];
	J[46] = x[2]*0.00285714285714286;
	J[87] = -1.;

   /*** derivatives for constraint 10 ***/

	J[9] = ex1252_pd[39];
	J[28] = x[3]*0.0025;
	J[54] = -1.;

   /*** derivatives for constraint 11 ***/

	J[12] = ex1252_pd[40];
	J[31] = x[4]*0.0025;
	J[63] = -1.;

   /*** derivatives for constraint 12 ***/

	J[15] = ex1252_pd[41];
	J[34] = x[5]*0.0025;
	J[72] = -1.;

   /*** derivatives for constraint 13 ***/

	J[82] = 1.;
	J[85] = 1.;
	J[88] = 1.;

   /*** derivatives for constraint 14 ***/

	J[20] = 0.000338983050847458;
	J[55] = -1.;

   /*** derivatives for constraint 15 ***/

	J[23] = 0.000338983050847458;
	J[64] = -1.;

   /*** derivatives for constraint 16 ***/

	J[26] = 0.000338983050847458;
	J[73] = -1.;

   /*** derivatives for constraint 17 ***/

	J[49] = 0.0125;
	J[56] = -1.;

   /*** derivatives for constraint 18 ***/

	J[51] = 0.04;
	J[65] = -1.;

   /*** derivatives for constraint 19 ***/

	J[53] = 0.0222222222222222;
	J[74] = -1.;

   /*** derivatives for constraint 20 ***/

	J[29] = 0.0025;
	J[57] = -1.;

   /*** derivatives for constraint 21 ***/

	J[32] = 0.0025;
	J[66] = -1.;

   /*** derivatives for constraint 22 ***/

	J[35] = 0.0025;
	J[75] = -1.;

   /*** derivatives for constraint 23 ***/

	J[39] = 0.00285714285714286;
	J[58] = -1.;

   /*** derivatives for constraint 24 ***/

	J[43] = 0.00285714285714286;
	J[67] = -1.;

   /*** derivatives for constraint 25 ***/

	J[47] = 0.00285714285714286;
	J[76] = -1.;

   /*** derivatives for constraint 26 ***/

	J[59] = -1.;
	J[83] = 1.;

   /*** derivatives for constraint 27 ***/

	J[68] = -1.;
	J[86] = 1.;

   /*** derivatives for constraint 28 ***/

	J[77] = -1.;
	J[89] = 1.;

   /*** derivatives for constraint 29 ***/

	J[1] = 1.;
	J[60] = -3.;

   /*** derivatives for constraint 30 ***/

	J[4] = 1.;
	J[69] = -3.;

   /*** derivatives for constraint 31 ***/

	J[7] = 1.;
	J[78] = -3.;

   /*** derivatives for constraint 32 ***/

	J[10] = 1.;
	J[61] = -3.;

   /*** derivatives for constraint 33 ***/

	J[13] = 1.;
	J[70] = -3.;

   /*** derivatives for constraint 34 ***/

	J[16] = 1.;
	J[79] = -3.;

   /*** derivatives for constraint 35 ***/

	J[2] = 1.;
	J[90] = -1.;
	J[91] = -2.;

   /*** derivatives for constraint 36 ***/

	J[5] = 1.;
	J[92] = -1.;
	J[93] = -2.;

   /*** derivatives for constraint 37 ***/

	J[8] = 1.;
	J[94] = -1.;
	J[95] = -2.;

   /*** derivatives for constraint 38 ***/

	J[11] = 1.;
	J[96] = -1.;
	J[97] = -2.;

   /*** derivatives for constraint 39 ***/

	J[14] = 1.;
	J[98] = -1.;
	J[99] = -2.;

   /*** derivatives for constraint 40 ***/

	J[17] = 1.;
	J[100] = -1.;
	J[101] = -2.;

   /*** derivatives for constraint 41 ***/

	J[62] = 1.;
	J[102] = -1.;

   /*** derivatives for constraint 42 ***/

	J[71] = 1.;
	J[103] = -1.;

   /*** derivatives for constraint 43 ***/

	J[80] = 1.;
	J[104] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
