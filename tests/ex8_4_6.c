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
 fint ex8_4_6_auxcom_[1] = { 8 /* nlc */ };
 fint ex8_4_6_funcom_[77] = {
	14 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	56 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	9,
	17,
	25,
	33,
	41,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8 };

 real ex8_4_6_boundc_[1+28+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-10.,
		10.,
		-10.,
		10.,
		-10.,
		10.,
		0.,
		0.5,
		0.,
		0.5,
		0.,
		0.5,
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
		0.};

 real ex8_4_6_x0comn_[14] = {
		0.355,
		2.007,
		-4.575,
		0.015,
		0.11,
		0.285,
		0.171747132,
		0.843266708,
		0.550375356,
		0.301137904,
		0.292212117,
		0.224052867,
		0.349830504,
		0.856270347 };

 static real ex8_4_6_pd[72];
static real ex8_4_6_old_x[14];
static int ex8_4_6_xkind = -1;

 static int
ex8_4_6_xcheck(real *x)
{
	real *x1 = ex8_4_6_old_x, *xe = x + 14;
	errno = 0;
	if (ex8_4_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_4_6_xkind = 0;
	return 1;
	}
 real
ex8_4_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[8];
	fint wantfg = *needfg;
	if (ex8_4_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[6] + -0.1622;
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	ex8_4_6_pd[48] = 1. / x[6];
	ex8_4_6_pd[49] = -v[1] * ex8_4_6_pd[48];
	v[0] = v[1] * v[1];
	ex8_4_6_pd[50] = v[1] + v[1];
	v[1] = x[7] + -0.6791;
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[2] = v[1] / x[7];
	ex8_4_6_pd[51] = 1. / x[7];
	ex8_4_6_pd[52] = -v[2] * ex8_4_6_pd[51];
	v[1] = v[2] * v[2];
	ex8_4_6_pd[53] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[8] + -0.679;
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[2] = v[1] / x[8];
	ex8_4_6_pd[54] = 1. / x[8];
	ex8_4_6_pd[55] = -v[2] * ex8_4_6_pd[54];
	v[1] = v[2] * v[2];
	ex8_4_6_pd[56] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[9] + -0.3875;
	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[2] = v[1] / x[9];
	ex8_4_6_pd[57] = 1. / x[9];
	ex8_4_6_pd[58] = -v[2] * ex8_4_6_pd[57];
	v[1] = v[2] * v[2];
	ex8_4_6_pd[59] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[10] + -0.1822;
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[2] = v[1] / x[10];
	ex8_4_6_pd[60] = 1. / x[10];
	ex8_4_6_pd[61] = -v[2] * ex8_4_6_pd[60];
	v[1] = v[2] * v[2];
	ex8_4_6_pd[62] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[11] + -0.1249;
	if (x[11] == 0.) {
	zerdiv_(&x[11]);	}
	v[2] = v[1] / x[11];
	ex8_4_6_pd[63] = 1. / x[11];
	ex8_4_6_pd[64] = -v[2] * ex8_4_6_pd[63];
	v[1] = v[2] * v[2];
	ex8_4_6_pd[65] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[12] + -0.0857;
	if (x[12] == 0.) {
	zerdiv_(&x[12]);	}
	v[2] = v[1] / x[12];
	ex8_4_6_pd[66] = 1. / x[12];
	ex8_4_6_pd[67] = -v[2] * ex8_4_6_pd[66];
	v[1] = v[2] * v[2];
	ex8_4_6_pd[68] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[13] + -0.0616;
	if (x[13] == 0.) {
	zerdiv_(&x[13]);	}
	v[2] = v[1] / x[13];
	ex8_4_6_pd[69] = 1. / x[13];
	ex8_4_6_pd[70] = -v[2] * ex8_4_6_pd[69];
	v[1] = v[2] * v[2];
	ex8_4_6_pd[71] = v[2] + v[2];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[13] = ex8_4_6_pd[71]*ex8_4_6_pd[70];
	dv[0] = ex8_4_6_pd[71]*ex8_4_6_pd[69];
	g[13] += dv[0];
	g[12] = ex8_4_6_pd[68]*ex8_4_6_pd[67];
	dv[1] = ex8_4_6_pd[68]*ex8_4_6_pd[66];
	g[12] += dv[1];
	g[11] = ex8_4_6_pd[65]*ex8_4_6_pd[64];
	dv[2] = ex8_4_6_pd[65]*ex8_4_6_pd[63];
	g[11] += dv[2];
	g[10] = ex8_4_6_pd[62]*ex8_4_6_pd[61];
	dv[3] = ex8_4_6_pd[62]*ex8_4_6_pd[60];
	g[10] += dv[3];
	g[9] = ex8_4_6_pd[59]*ex8_4_6_pd[58];
	dv[4] = ex8_4_6_pd[59]*ex8_4_6_pd[57];
	g[9] += dv[4];
	g[8] = ex8_4_6_pd[56]*ex8_4_6_pd[55];
	dv[5] = ex8_4_6_pd[56]*ex8_4_6_pd[54];
	g[8] += dv[5];
	g[7] = ex8_4_6_pd[53]*ex8_4_6_pd[52];
	dv[6] = ex8_4_6_pd[53]*ex8_4_6_pd[51];
	g[7] += dv[6];
	g[6] = ex8_4_6_pd[50]*ex8_4_6_pd[49];
	dv[7] = ex8_4_6_pd[50]*ex8_4_6_pd[48];
	g[6] += dv[7];
	}

	return v[0];
}

 void
ex8_4_6_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[3];
	real t1;
	fint wantfg = *needfg;
	if (ex8_4_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = -4. * x[3];
	ex8_4_6_pd[0] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex8_4_6_pd[1] = ex8_4_6_pd[0];
	v[0] = ex8_4_6_pd[0] * x[0];
	v[1] = -4. * x[4];
	ex8_4_6_pd[2] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[3] = ex8_4_6_pd[2];
	v[1] = ex8_4_6_pd[2] * x[1];
	v[0] += v[1];
	v[1] = -4. * x[5];
	ex8_4_6_pd[4] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[5] = ex8_4_6_pd[4];
	v[1] = ex8_4_6_pd[4] * x[2];
	v[0] += v[1];
	t1 = v[0] + -x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = -8. * x[3];
	ex8_4_6_pd[6] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex8_4_6_pd[7] = ex8_4_6_pd[6];
	v[0] = ex8_4_6_pd[6] * x[0];
	v[1] = -8. * x[4];
	ex8_4_6_pd[8] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[9] = ex8_4_6_pd[8];
	v[1] = ex8_4_6_pd[8] * x[1];
	v[0] += v[1];
	v[1] = -8. * x[5];
	ex8_4_6_pd[10] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[11] = ex8_4_6_pd[10];
	v[1] = ex8_4_6_pd[10] * x[2];
	v[0] += v[1];
	t1 = v[0] + -x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = -12. * x[3];
	ex8_4_6_pd[12] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex8_4_6_pd[13] = ex8_4_6_pd[12];
	v[0] = ex8_4_6_pd[12] * x[0];
	v[1] = -12. * x[4];
	ex8_4_6_pd[14] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[15] = ex8_4_6_pd[14];
	v[1] = ex8_4_6_pd[14] * x[1];
	v[0] += v[1];
	v[1] = -12. * x[5];
	ex8_4_6_pd[16] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[17] = ex8_4_6_pd[16];
	v[1] = ex8_4_6_pd[16] * x[2];
	v[0] += v[1];
	t1 = v[0] + -x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = -24. * x[3];
	ex8_4_6_pd[18] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex8_4_6_pd[19] = ex8_4_6_pd[18];
	v[0] = ex8_4_6_pd[18] * x[0];
	v[1] = -24. * x[4];
	ex8_4_6_pd[20] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[21] = ex8_4_6_pd[20];
	v[1] = ex8_4_6_pd[20] * x[1];
	v[0] += v[1];
	v[1] = -24. * x[5];
	ex8_4_6_pd[22] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[23] = ex8_4_6_pd[22];
	v[1] = ex8_4_6_pd[22] * x[2];
	v[0] += v[1];
	t1 = v[0] + -x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = -48. * x[3];
	ex8_4_6_pd[24] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex8_4_6_pd[25] = ex8_4_6_pd[24];
	v[0] = ex8_4_6_pd[24] * x[0];
	v[1] = -48. * x[4];
	ex8_4_6_pd[26] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[27] = ex8_4_6_pd[26];
	v[1] = ex8_4_6_pd[26] * x[1];
	v[0] += v[1];
	v[1] = -48. * x[5];
	ex8_4_6_pd[28] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[29] = ex8_4_6_pd[28];
	v[1] = ex8_4_6_pd[28] * x[2];
	v[0] += v[1];
	t1 = v[0] + -x[10];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = -72. * x[3];
	ex8_4_6_pd[30] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex8_4_6_pd[31] = ex8_4_6_pd[30];
	v[0] = ex8_4_6_pd[30] * x[0];
	v[1] = -72. * x[4];
	ex8_4_6_pd[32] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[33] = ex8_4_6_pd[32];
	v[1] = ex8_4_6_pd[32] * x[1];
	v[0] += v[1];
	v[1] = -72. * x[5];
	ex8_4_6_pd[34] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[35] = ex8_4_6_pd[34];
	v[1] = ex8_4_6_pd[34] * x[2];
	v[0] += v[1];
	t1 = v[0] + -x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = -94. * x[3];
	ex8_4_6_pd[36] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex8_4_6_pd[37] = ex8_4_6_pd[36];
	v[0] = ex8_4_6_pd[36] * x[0];
	v[1] = -94. * x[4];
	ex8_4_6_pd[38] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[39] = ex8_4_6_pd[38];
	v[1] = ex8_4_6_pd[38] * x[1];
	v[0] += v[1];
	v[1] = -94. * x[5];
	ex8_4_6_pd[40] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[41] = ex8_4_6_pd[40];
	v[1] = ex8_4_6_pd[40] * x[2];
	v[0] += v[1];
	t1 = v[0] + -x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = -118. * x[3];
	ex8_4_6_pd[42] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex8_4_6_pd[43] = ex8_4_6_pd[42];
	v[0] = ex8_4_6_pd[42] * x[0];
	v[1] = -118. * x[4];
	ex8_4_6_pd[44] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[45] = ex8_4_6_pd[44];
	v[1] = ex8_4_6_pd[44] * x[1];
	v[0] += v[1];
	v[1] = -118. * x[5];
	ex8_4_6_pd[46] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex8_4_6_pd[47] = ex8_4_6_pd[46];
	v[1] = ex8_4_6_pd[46] * x[2];
	v[0] += v[1];
	t1 = v[0] + -x[13];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[16] = ex8_4_6_pd[4];
	dv[0] = x[2]*ex8_4_6_pd[5];
	J[40] = -dv[0]*4.;
	J[8] = ex8_4_6_pd[2];
	dv[1] = x[1]*ex8_4_6_pd[3];
	J[32] = -dv[1]*4.;
	J[0] = ex8_4_6_pd[0];
	dv[2] = x[0]*ex8_4_6_pd[1];
	J[24] = -dv[2]*4.;
	J[48] = -1.;

   /*** derivatives for constraint 2 ***/

	J[17] = ex8_4_6_pd[10];
	dv[0] = x[2]*ex8_4_6_pd[11];
	J[41] = -dv[0]*8.;
	J[9] = ex8_4_6_pd[8];
	dv[1] = x[1]*ex8_4_6_pd[9];
	J[33] = -dv[1]*8.;
	J[1] = ex8_4_6_pd[6];
	dv[2] = x[0]*ex8_4_6_pd[7];
	J[25] = -dv[2]*8.;
	J[49] = -1.;

   /*** derivatives for constraint 3 ***/

	J[18] = ex8_4_6_pd[16];
	dv[0] = x[2]*ex8_4_6_pd[17];
	J[42] = -dv[0]*12.;
	J[10] = ex8_4_6_pd[14];
	dv[1] = x[1]*ex8_4_6_pd[15];
	J[34] = -dv[1]*12.;
	J[2] = ex8_4_6_pd[12];
	dv[2] = x[0]*ex8_4_6_pd[13];
	J[26] = -dv[2]*12.;
	J[50] = -1.;

   /*** derivatives for constraint 4 ***/

	J[19] = ex8_4_6_pd[22];
	dv[0] = x[2]*ex8_4_6_pd[23];
	J[43] = -dv[0]*24.;
	J[11] = ex8_4_6_pd[20];
	dv[1] = x[1]*ex8_4_6_pd[21];
	J[35] = -dv[1]*24.;
	J[3] = ex8_4_6_pd[18];
	dv[2] = x[0]*ex8_4_6_pd[19];
	J[27] = -dv[2]*24.;
	J[51] = -1.;

   /*** derivatives for constraint 5 ***/

	J[20] = ex8_4_6_pd[28];
	dv[0] = x[2]*ex8_4_6_pd[29];
	J[44] = -dv[0]*48.;
	J[12] = ex8_4_6_pd[26];
	dv[1] = x[1]*ex8_4_6_pd[27];
	J[36] = -dv[1]*48.;
	J[4] = ex8_4_6_pd[24];
	dv[2] = x[0]*ex8_4_6_pd[25];
	J[28] = -dv[2]*48.;
	J[52] = -1.;

   /*** derivatives for constraint 6 ***/

	J[21] = ex8_4_6_pd[34];
	dv[0] = x[2]*ex8_4_6_pd[35];
	J[45] = -dv[0]*72.;
	J[13] = ex8_4_6_pd[32];
	dv[1] = x[1]*ex8_4_6_pd[33];
	J[37] = -dv[1]*72.;
	J[5] = ex8_4_6_pd[30];
	dv[2] = x[0]*ex8_4_6_pd[31];
	J[29] = -dv[2]*72.;
	J[53] = -1.;

   /*** derivatives for constraint 7 ***/

	J[22] = ex8_4_6_pd[40];
	dv[0] = x[2]*ex8_4_6_pd[41];
	J[46] = -dv[0]*94.;
	J[14] = ex8_4_6_pd[38];
	dv[1] = x[1]*ex8_4_6_pd[39];
	J[38] = -dv[1]*94.;
	J[6] = ex8_4_6_pd[36];
	dv[2] = x[0]*ex8_4_6_pd[37];
	J[30] = -dv[2]*94.;
	J[54] = -1.;

   /*** derivatives for constraint 8 ***/

	J[23] = ex8_4_6_pd[46];
	dv[0] = x[2]*ex8_4_6_pd[47];
	J[47] = -dv[0]*118.;
	J[15] = ex8_4_6_pd[44];
	dv[1] = x[1]*ex8_4_6_pd[45];
	J[39] = -dv[1]*118.;
	J[7] = ex8_4_6_pd[42];
	dv[2] = x[0]*ex8_4_6_pd[43];
	J[31] = -dv[2]*118.;
	J[55] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
