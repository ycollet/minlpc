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
 fint ex6_2_12_auxcom_[1] = { 0 /* nlc */ };
 fint ex6_2_12_funcom_[15] = {
	4 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	4 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,

	/* rownos */
	1,
	1,
	2,
	2 };

 real ex6_2_12_boundc_[1+8+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-07,
		0.5,
		1.e-07,
		0.5,
		1.e-07,
		0.5,
		1.e-07,
		0.5,
		0.5,
		0.5,
		0.5,
		0.5};

 real ex6_2_12_x0comn_[4] = {
		0.4994,
		0.0006,
		0.1179,
		0.3821 };

 static real ex6_2_12_pd[64];
static real ex6_2_12_old_x[4];
static int ex6_2_12_xkind = -1;

 static int
ex6_2_12_xcheck(real *x)
{
	real *x1 = ex6_2_12_old_x, *xe = x + 4;
	errno = 0;
	if (ex6_2_12_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex6_2_12_xkind = 0;
	return 1;
	}
 real
ex6_2_12_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[6], dv[36], rv;
	fint wantfg = *needfg;
	if (ex6_2_12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 8. * x[0];
	v[1] = v[0] + x[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = x[0] / v[1];
	ex6_2_12_pd[0] = 1. / v[1];
	ex6_2_12_pd[1] = -v[0] * ex6_2_12_pd[0];
	ex6_2_12_pd[2] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex6_2_12_pd[3] = 1. / v[0];
	v[0] = ex6_2_12_pd[2] * x[0];
	v[1] = 8. * x[0];
	v[2] = v[1] + x[2];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[2] / v[2];
	ex6_2_12_pd[4] = 1. / v[2];
	ex6_2_12_pd[5] = -v[1] * ex6_2_12_pd[4];
	ex6_2_12_pd[6] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex6_2_12_pd[7] = 1. / v[1];
	v[1] = ex6_2_12_pd[6] * x[2];
	v[0] += v[1];
	v[1] = 8. * x[0];
	v[2] = 1.6 * x[2];
	v[3] = v[1] + v[2];
	ex6_2_12_pd[8] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_12_pd[9] = 1. / v[3];
	v[3] = 8. * x[0];
	v[2] = 1.6 * x[2];
	ex6_2_12_pd[10] = v[3] + v[2];
	v[2] = ex6_2_12_pd[8] * ex6_2_12_pd[10];
	v[0] += v[2];
	v[2] = 5.00000397494442 * x[0];
	v[3] = 0.480353357956269 * x[2];
	v[4] = v[2] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = x[0] / v[4];
	ex6_2_12_pd[11] = 1. / v[4];
	ex6_2_12_pd[12] = -v[3] * ex6_2_12_pd[11];
	ex6_2_12_pd[13] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_12_pd[14] = 1. / v[3];
	ex6_2_12_pd[15] = 5. * ex6_2_12_pd[13];
	v[3] = ex6_2_12_pd[15] * x[0];
	v[0] += v[3];
	v[3] = 8.96062592375197 * x[0];
	v[4] = 1.13841069150863 * x[2];
	v[2] = v[3] + v[4];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[4] = x[0] / v[2];
	ex6_2_12_pd[16] = 1. / v[2];
	ex6_2_12_pd[17] = -v[4] * ex6_2_12_pd[16];
	ex6_2_12_pd[18] = log(v[4]);
	if (errno) in_trouble("log",v[4]);
	ex6_2_12_pd[19] = 1. / v[4];
	ex6_2_12_pd[20] = 3. * ex6_2_12_pd[18];
	v[4] = ex6_2_12_pd[20] * x[0];
	v[0] += v[4];
	v[4] = 1.69889877049372 * x[0];
	v[2] = 1.6 * x[2];
	v[3] = v[4] + v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = x[2] / v[3];
	ex6_2_12_pd[21] = 1. / v[3];
	ex6_2_12_pd[22] = -v[2] * ex6_2_12_pd[21];
	ex6_2_12_pd[23] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_12_pd[24] = 1. / v[2];
	ex6_2_12_pd[25] = 1.6 * ex6_2_12_pd[23];
	v[2] = ex6_2_12_pd[25] * x[2];
	v[0] += v[2];
	v[2] = 8. * x[1];
	v[3] = v[2] + x[3];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = x[1] / v[3];
	ex6_2_12_pd[26] = 1. / v[3];
	ex6_2_12_pd[27] = -v[2] * ex6_2_12_pd[26];
	ex6_2_12_pd[28] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_12_pd[29] = 1. / v[2];
	v[2] = ex6_2_12_pd[28] * x[1];
	v[0] += v[2];
	v[2] = 8. * x[1];
	v[3] = v[2] + x[3];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = x[3] / v[3];
	ex6_2_12_pd[30] = 1. / v[3];
	ex6_2_12_pd[31] = -v[2] * ex6_2_12_pd[30];
	ex6_2_12_pd[32] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_12_pd[33] = 1. / v[2];
	v[2] = ex6_2_12_pd[32] * x[3];
	v[0] += v[2];
	v[2] = 8. * x[1];
	v[3] = 1.6 * x[3];
	v[4] = v[2] + v[3];
	ex6_2_12_pd[34] = log(v[4]);
	if (errno) in_trouble("log",v[4]);
	ex6_2_12_pd[35] = 1. / v[4];
	v[4] = 8. * x[1];
	v[3] = 1.6 * x[3];
	ex6_2_12_pd[36] = v[4] + v[3];
	v[3] = ex6_2_12_pd[34] * ex6_2_12_pd[36];
	v[0] += v[3];
	v[3] = 5.00000397494442 * x[1];
	v[4] = 0.480353357956269 * x[3];
	v[5] = v[3] + v[4];
	if (v[5] == 0.) {
	zerdiv_(&v[5]);	}
	v[4] = x[1] / v[5];
	ex6_2_12_pd[37] = 1. / v[5];
	ex6_2_12_pd[38] = -v[4] * ex6_2_12_pd[37];
	ex6_2_12_pd[39] = log(v[4]);
	if (errno) in_trouble("log",v[4]);
	ex6_2_12_pd[40] = 1. / v[4];
	ex6_2_12_pd[41] = 5. * ex6_2_12_pd[39];
	v[4] = ex6_2_12_pd[41] * x[1];
	v[0] += v[4];
	v[4] = 8.96062592375197 * x[1];
	v[5] = 1.13841069150863 * x[3];
	v[3] = v[4] + v[5];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[5] = x[1] / v[3];
	ex6_2_12_pd[42] = 1. / v[3];
	ex6_2_12_pd[43] = -v[5] * ex6_2_12_pd[42];
	ex6_2_12_pd[44] = log(v[5]);
	if (errno) in_trouble("log",v[5]);
	ex6_2_12_pd[45] = 1. / v[5];
	ex6_2_12_pd[46] = 3. * ex6_2_12_pd[44];
	v[5] = ex6_2_12_pd[46] * x[1];
	v[0] += v[5];
	v[5] = 1.69889877049372 * x[1];
	v[3] = 1.6 * x[3];
	v[4] = v[5] + v[3];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = x[3] / v[4];
	ex6_2_12_pd[47] = 1. / v[4];
	ex6_2_12_pd[48] = -v[3] * ex6_2_12_pd[47];
	ex6_2_12_pd[49] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_12_pd[50] = 1. / v[3];
	ex6_2_12_pd[51] = 1.6 * ex6_2_12_pd[49];
	v[3] = ex6_2_12_pd[51] * x[3];
	v[0] += v[3];
	ex6_2_12_pd[52] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_12_pd[53] = 1. / x[0];
	ex6_2_12_pd[54] = 8. * ex6_2_12_pd[52];
	v[3] = ex6_2_12_pd[54] * x[0];
	v[4] = -v[3];
	v[0] += v[4];
	ex6_2_12_pd[55] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_12_pd[56] = 1. / x[2];
	ex6_2_12_pd[57] = 1.6 * ex6_2_12_pd[55];
	v[4] = ex6_2_12_pd[57] * x[2];
	v[3] = -v[4];
	v[0] += v[3];
	ex6_2_12_pd[58] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_12_pd[59] = 1. / x[1];
	ex6_2_12_pd[60] = 8. * ex6_2_12_pd[58];
	v[3] = ex6_2_12_pd[60] * x[1];
	v[4] = -v[3];
	v[0] += v[4];
	ex6_2_12_pd[61] = log(x[3]);
	if (errno) in_trouble("log",x[3]);
	ex6_2_12_pd[62] = 1. / x[3];
	ex6_2_12_pd[63] = 1.6 * ex6_2_12_pd[61];
	v[4] = ex6_2_12_pd[63] * x[3];
	v[3] = -v[4];
	v[0] += v[3];
	rv = v[0] + 0.0696225416798359*x[0];
	rv += 0.0696225416798359*x[1];
	rv += 0.752006*x[2];
	rv += 0.752006*x[3];
	;}

	if (wantfg & 2) {
	g[3] = -ex6_2_12_pd[63] + 0.752006;
	dv[0] = -x[3]*1.6;
	g[3] += dv[0]*ex6_2_12_pd[62];
	g[1] = -ex6_2_12_pd[60] + 0.0696225416798359;
	dv[1] = -x[1]*8.;
	g[1] += dv[1]*ex6_2_12_pd[59];
	g[2] = -ex6_2_12_pd[57] + 0.752006;
	dv[2] = -x[2]*1.6;
	g[2] += dv[2]*ex6_2_12_pd[56];
	g[0] = -ex6_2_12_pd[54] + 0.0696225416798359;
	dv[3] = -x[0]*8.;
	g[0] += dv[3]*ex6_2_12_pd[53];
	g[3] += ex6_2_12_pd[51];
	dv[4] = x[3]*1.6;
	dv[4] *= ex6_2_12_pd[50];
	dv[5] = dv[4]*ex6_2_12_pd[48];
	g[3] += dv[4]*ex6_2_12_pd[47];
	dv[6] = dv[5];
	g[3] += dv[6]*1.6;
	g[1] += dv[5]*1.69889877049372;
	g[1] += ex6_2_12_pd[46];
	dv[7] = x[1]*3.;
	dv[7] *= ex6_2_12_pd[45];
	dv[8] = dv[7]*ex6_2_12_pd[43];
	g[1] += dv[7]*ex6_2_12_pd[42];
	dv[9] = dv[8];
	g[3] += dv[9]*1.13841069150863;
	g[1] += dv[8]*8.96062592375197;
	g[1] += ex6_2_12_pd[41];
	dv[10] = x[1]*5.;
	dv[10] *= ex6_2_12_pd[40];
	dv[11] = dv[10]*ex6_2_12_pd[38];
	g[1] += dv[10]*ex6_2_12_pd[37];
	dv[12] = dv[11];
	g[3] += dv[12]*0.480353357956269;
	g[1] += dv[11]*5.00000397494442;
	dv[13] = ex6_2_12_pd[34];
	g[3] += dv[13]*1.6;
	g[1] += ex6_2_12_pd[34]*8.;
	dv[14] = ex6_2_12_pd[36]*ex6_2_12_pd[35];
	dv[15] = dv[14];
	g[3] += dv[15]*1.6;
	g[1] += dv[14]*8.;
	g[3] += ex6_2_12_pd[32];
	dv[16] = x[3]*ex6_2_12_pd[33];
	dv[17] = dv[16]*ex6_2_12_pd[31];
	g[3] += dv[16]*ex6_2_12_pd[30];
	g[3] += dv[17];
	g[1] += dv[17]*8.;
	g[1] += ex6_2_12_pd[28];
	dv[18] = x[1]*ex6_2_12_pd[29];
	dv[19] = dv[18]*ex6_2_12_pd[27];
	g[1] += dv[18]*ex6_2_12_pd[26];
	g[3] += dv[19];
	g[1] += dv[19]*8.;
	g[2] += ex6_2_12_pd[25];
	dv[20] = x[2]*1.6;
	dv[20] *= ex6_2_12_pd[24];
	dv[21] = dv[20]*ex6_2_12_pd[22];
	g[2] += dv[20]*ex6_2_12_pd[21];
	dv[22] = dv[21];
	g[2] += dv[22]*1.6;
	g[0] += dv[21]*1.69889877049372;
	g[0] += ex6_2_12_pd[20];
	dv[23] = x[0]*3.;
	dv[23] *= ex6_2_12_pd[19];
	dv[24] = dv[23]*ex6_2_12_pd[17];
	g[0] += dv[23]*ex6_2_12_pd[16];
	dv[25] = dv[24];
	g[2] += dv[25]*1.13841069150863;
	g[0] += dv[24]*8.96062592375197;
	g[0] += ex6_2_12_pd[15];
	dv[26] = x[0]*5.;
	dv[26] *= ex6_2_12_pd[14];
	dv[27] = dv[26]*ex6_2_12_pd[12];
	g[0] += dv[26]*ex6_2_12_pd[11];
	dv[28] = dv[27];
	g[2] += dv[28]*0.480353357956269;
	g[0] += dv[27]*5.00000397494442;
	dv[29] = ex6_2_12_pd[8];
	g[2] += dv[29]*1.6;
	g[0] += ex6_2_12_pd[8]*8.;
	dv[30] = ex6_2_12_pd[10]*ex6_2_12_pd[9];
	dv[31] = dv[30];
	g[2] += dv[31]*1.6;
	g[0] += dv[30]*8.;
	g[2] += ex6_2_12_pd[6];
	dv[32] = x[2]*ex6_2_12_pd[7];
	dv[33] = dv[32]*ex6_2_12_pd[5];
	g[2] += dv[32]*ex6_2_12_pd[4];
	g[2] += dv[33];
	g[0] += dv[33]*8.;
	g[0] += ex6_2_12_pd[2];
	dv[34] = x[0]*ex6_2_12_pd[3];
	dv[35] = dv[34]*ex6_2_12_pd[1];
	g[0] += dv[34]*ex6_2_12_pd[0];
	g[2] += dv[35];
	g[0] += dv[35]*8.;
	}

	return rv;
}

 void
ex6_2_12_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex6_2_12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[2];
	t1 += x[3];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[1] = 1.;

   /*** derivatives for constraint 2 ***/

	J[2] = 1.;
	J[3] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
