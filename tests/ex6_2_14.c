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
 fint ex6_2_14_auxcom_[1] = { 0 /* nlc */ };
 fint ex6_2_14_funcom_[15] = {
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

 real ex6_2_14_boundc_[1+8+4] /* Infinity, variable bounds, constraint bounds */ = {
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

 real ex6_2_14_x0comn_[4] = {
		0.0583,
		0.4417,
		0.408,
		0.092 };

 static real ex6_2_14_pd[72];
static real ex6_2_14_old_x[4];
static int ex6_2_14_xkind = -1;

 static int
ex6_2_14_xcheck(real *x)
{
	real *x1 = ex6_2_14_old_x, *xe = x + 4;
	errno = 0;
	if (ex6_2_14_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex6_2_14_xkind = 0;
	return 1;
	}
 real
ex6_2_14_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[11], dv[40];
	fint wantfg = *needfg;
	if (ex6_2_14_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + x[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	ex6_2_14_pd[0] = 1. / v[0];
	ex6_2_14_pd[1] = -v[1] * ex6_2_14_pd[0];
	v[0] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex6_2_14_pd[2] = 1. / v[1];
	v[1] = 0.095173 * x[2];
	v[2] = x[0] + v[1];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[0] / v[2];
	ex6_2_14_pd[3] = 1. / v[2];
	ex6_2_14_pd[4] = -v[1] * ex6_2_14_pd[3];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex6_2_14_pd[5] = 1. / v[1];
	ex6_2_14_pd[6] = v[0] + v[2];
	v[2] = ex6_2_14_pd[6] * x[0];
	v[0] = x[0] + x[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = x[2] / v[0];
	ex6_2_14_pd[7] = 1. / v[0];
	ex6_2_14_pd[8] = -v[3] * ex6_2_14_pd[7];
	v[0] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_14_pd[9] = 1. / v[3];
	v[3] = 0.30384 * x[0];
	v[4] = v[3] + x[2];
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = x[2] / v[4];
	ex6_2_14_pd[10] = 1. / v[4];
	ex6_2_14_pd[11] = -v[3] * ex6_2_14_pd[10];
	v[4] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_14_pd[12] = 1. / v[3];
	ex6_2_14_pd[13] = v[0] + v[4];
	v[4] = ex6_2_14_pd[13] * x[2];
	v[2] += v[4];
	v[4] = 2.6738 * x[2];
	v[0] = x[0] + v[4];
	ex6_2_14_pd[14] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex6_2_14_pd[15] = 1. / v[0];
	v[0] = 2.6738 * x[2];
	ex6_2_14_pd[16] = x[0] + v[0];
	v[0] = ex6_2_14_pd[14] * ex6_2_14_pd[16];
	v[2] += v[0];
	v[0] = 0.374 * x[0];
	v[5] = v[0] + x[2];
	ex6_2_14_pd[17] = log(v[5]);
	if (errno) in_trouble("log",v[5]);
	ex6_2_14_pd[18] = 1. / v[5];
	v[5] = 0.374 * x[0];
	ex6_2_14_pd[19] = v[5] + x[2];
	v[5] = ex6_2_14_pd[17] * ex6_2_14_pd[19];
	v[2] += v[5];
	v[5] = 2.6738 * x[2];
	v[6] = x[0] + v[5];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[5] = x[2] / v[6];
	ex6_2_14_pd[20] = 1. / v[6];
	ex6_2_14_pd[21] = -v[5] * ex6_2_14_pd[20];
	ex6_2_14_pd[22] = log(v[5]);
	if (errno) in_trouble("log",v[5]);
	ex6_2_14_pd[23] = 1. / v[5];
	ex6_2_14_pd[24] = 2.6738 * ex6_2_14_pd[22];
	v[5] = ex6_2_14_pd[24] * x[2];
	v[2] += v[5];
	v[5] = 0.374 * x[0];
	v[6] = v[5] + x[2];
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[5] = x[0] / v[6];
	ex6_2_14_pd[25] = 1. / v[6];
	ex6_2_14_pd[26] = -v[5] * ex6_2_14_pd[25];
	ex6_2_14_pd[27] = log(v[5]);
	if (errno) in_trouble("log",v[5]);
	ex6_2_14_pd[28] = 1. / v[5];
	ex6_2_14_pd[29] = 0.374 * ex6_2_14_pd[27];
	v[5] = ex6_2_14_pd[29] * x[0];
	v[2] += v[5];
	v[5] = x[1] + x[3];
	if (v[5] == 0.) {
	zerdiv_(&v[5]);	}
	v[6] = x[1] / v[5];
	ex6_2_14_pd[30] = 1. / v[5];
	ex6_2_14_pd[31] = -v[6] * ex6_2_14_pd[30];
	v[5] = log(v[6]);
	if (errno) in_trouble("log",v[6]);
	ex6_2_14_pd[32] = 1. / v[6];
	v[6] = 0.095173 * x[3];
	v[7] = x[1] + v[6];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = x[1] / v[7];
	ex6_2_14_pd[33] = 1. / v[7];
	ex6_2_14_pd[34] = -v[6] * ex6_2_14_pd[33];
	v[7] = log(v[6]);
	if (errno) in_trouble("log",v[6]);
	ex6_2_14_pd[35] = 1. / v[6];
	ex6_2_14_pd[36] = v[5] + v[7];
	v[7] = ex6_2_14_pd[36] * x[1];
	v[2] += v[7];
	v[7] = x[1] + x[3];
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[5] = x[3] / v[7];
	ex6_2_14_pd[37] = 1. / v[7];
	ex6_2_14_pd[38] = -v[5] * ex6_2_14_pd[37];
	v[7] = log(v[5]);
	if (errno) in_trouble("log",v[5]);
	ex6_2_14_pd[39] = 1. / v[5];
	v[5] = 0.30384 * x[1];
	v[8] = v[5] + x[3];
	if (v[8] == 0.) {
	zerdiv_(&v[8]);	}
	v[5] = x[3] / v[8];
	ex6_2_14_pd[40] = 1. / v[8];
	ex6_2_14_pd[41] = -v[5] * ex6_2_14_pd[40];
	v[8] = log(v[5]);
	if (errno) in_trouble("log",v[5]);
	ex6_2_14_pd[42] = 1. / v[5];
	ex6_2_14_pd[43] = v[7] + v[8];
	v[8] = ex6_2_14_pd[43] * x[3];
	v[2] += v[8];
	v[8] = 2.6738 * x[3];
	v[7] = x[1] + v[8];
	ex6_2_14_pd[44] = log(v[7]);
	if (errno) in_trouble("log",v[7]);
	ex6_2_14_pd[45] = 1. / v[7];
	v[7] = 2.6738 * x[3];
	ex6_2_14_pd[46] = x[1] + v[7];
	v[7] = ex6_2_14_pd[44] * ex6_2_14_pd[46];
	v[2] += v[7];
	v[7] = 0.374 * x[1];
	v[9] = v[7] + x[3];
	ex6_2_14_pd[47] = log(v[9]);
	if (errno) in_trouble("log",v[9]);
	ex6_2_14_pd[48] = 1. / v[9];
	v[9] = 0.374 * x[1];
	ex6_2_14_pd[49] = v[9] + x[3];
	v[9] = ex6_2_14_pd[47] * ex6_2_14_pd[49];
	v[2] += v[9];
	v[9] = 2.6738 * x[3];
	v[10] = x[1] + v[9];
	if (v[10] == 0.) {
	zerdiv_(&v[10]);	}
	v[9] = x[3] / v[10];
	ex6_2_14_pd[50] = 1. / v[10];
	ex6_2_14_pd[51] = -v[9] * ex6_2_14_pd[50];
	ex6_2_14_pd[52] = log(v[9]);
	if (errno) in_trouble("log",v[9]);
	ex6_2_14_pd[53] = 1. / v[9];
	ex6_2_14_pd[54] = 2.6738 * ex6_2_14_pd[52];
	v[9] = ex6_2_14_pd[54] * x[3];
	v[2] += v[9];
	v[9] = 0.374 * x[1];
	v[10] = v[9] + x[3];
	if (v[10] == 0.) {
	zerdiv_(&v[10]);	}
	v[9] = x[1] / v[10];
	ex6_2_14_pd[55] = 1. / v[10];
	ex6_2_14_pd[56] = -v[9] * ex6_2_14_pd[55];
	ex6_2_14_pd[57] = log(v[9]);
	if (errno) in_trouble("log",v[9]);
	ex6_2_14_pd[58] = 1. / v[9];
	ex6_2_14_pd[59] = 0.374 * ex6_2_14_pd[57];
	v[9] = ex6_2_14_pd[59] * x[1];
	v[2] += v[9];
	ex6_2_14_pd[60] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_14_pd[61] = 1. / x[0];
	ex6_2_14_pd[62] = 3.6838 * ex6_2_14_pd[60];
	v[9] = ex6_2_14_pd[62] * x[0];
	v[10] = -v[9];
	v[2] += v[10];
	ex6_2_14_pd[63] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_14_pd[64] = 1. / x[2];
	ex6_2_14_pd[65] = 1.59549 * ex6_2_14_pd[63];
	v[10] = ex6_2_14_pd[65] * x[2];
	v[9] = -v[10];
	v[2] += v[9];
	ex6_2_14_pd[66] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_14_pd[67] = 1. / x[1];
	ex6_2_14_pd[68] = 3.6838 * ex6_2_14_pd[66];
	v[9] = ex6_2_14_pd[68] * x[1];
	v[10] = -v[9];
	v[2] += v[10];
	ex6_2_14_pd[69] = log(x[3]);
	if (errno) in_trouble("log",x[3]);
	ex6_2_14_pd[70] = 1. / x[3];
	ex6_2_14_pd[71] = 1.59549 * ex6_2_14_pd[69];
	v[10] = ex6_2_14_pd[71] * x[3];
	v[9] = -v[10];
	v[2] += v[9];
	;}

	if (wantfg & 2) {
	g[3] = -ex6_2_14_pd[71];
	dv[0] = -x[3]*1.59549;
	g[3] += dv[0]*ex6_2_14_pd[70];
	g[1] = -ex6_2_14_pd[68];
	dv[1] = -x[1]*3.6838;
	g[1] += dv[1]*ex6_2_14_pd[67];
	g[2] = -ex6_2_14_pd[65];
	dv[2] = -x[2]*1.59549;
	g[2] += dv[2]*ex6_2_14_pd[64];
	g[0] = -ex6_2_14_pd[62];
	dv[3] = -x[0]*3.6838;
	g[0] += dv[3]*ex6_2_14_pd[61];
	g[1] += ex6_2_14_pd[59];
	dv[4] = x[1]*0.374;
	dv[4] *= ex6_2_14_pd[58];
	dv[5] = dv[4]*ex6_2_14_pd[56];
	g[1] += dv[4]*ex6_2_14_pd[55];
	g[3] += dv[5];
	g[1] += dv[5]*0.374;
	g[3] += ex6_2_14_pd[54];
	dv[6] = x[3]*2.6738;
	dv[6] *= ex6_2_14_pd[53];
	dv[7] = dv[6]*ex6_2_14_pd[51];
	g[3] += dv[6]*ex6_2_14_pd[50];
	dv[8] = dv[7];
	g[1] += dv[7];
	g[3] += dv[8]*2.6738;
	g[3] += ex6_2_14_pd[47];
	g[1] += ex6_2_14_pd[47]*0.374;
	dv[9] = ex6_2_14_pd[49]*ex6_2_14_pd[48];
	g[3] += dv[9];
	g[1] += dv[9]*0.374;
	dv[10] = ex6_2_14_pd[44];
	g[1] += ex6_2_14_pd[44];
	g[3] += dv[10]*2.6738;
	dv[11] = ex6_2_14_pd[46]*ex6_2_14_pd[45];
	dv[12] = dv[11];
	g[1] += dv[11];
	g[3] += dv[12]*2.6738;
	g[3] += ex6_2_14_pd[43];
	dv[13] = x[3];
	dv[13] *= ex6_2_14_pd[42];
	dv[14] = dv[13]*ex6_2_14_pd[41];
	g[3] += dv[13]*ex6_2_14_pd[40];
	g[3] += dv[14];
	g[1] += dv[14]*0.30384;
	dv[15] = x[3]*ex6_2_14_pd[39];
	dv[16] = dv[15]*ex6_2_14_pd[38];
	g[3] += dv[15]*ex6_2_14_pd[37];
	g[3] += dv[16];
	g[1] += dv[16];
	g[1] += ex6_2_14_pd[36];
	dv[17] = x[1];
	dv[17] *= ex6_2_14_pd[35];
	dv[18] = dv[17]*ex6_2_14_pd[34];
	g[1] += dv[17]*ex6_2_14_pd[33];
	dv[19] = dv[18];
	g[1] += dv[18];
	g[3] += dv[19]*0.095173;
	dv[20] = x[1]*ex6_2_14_pd[32];
	dv[21] = dv[20]*ex6_2_14_pd[31];
	g[1] += dv[20]*ex6_2_14_pd[30];
	g[3] += dv[21];
	g[1] += dv[21];
	g[0] += ex6_2_14_pd[29];
	dv[22] = x[0]*0.374;
	dv[22] *= ex6_2_14_pd[28];
	dv[23] = dv[22]*ex6_2_14_pd[26];
	g[0] += dv[22]*ex6_2_14_pd[25];
	g[2] += dv[23];
	g[0] += dv[23]*0.374;
	g[2] += ex6_2_14_pd[24];
	dv[24] = x[2]*2.6738;
	dv[24] *= ex6_2_14_pd[23];
	dv[25] = dv[24]*ex6_2_14_pd[21];
	g[2] += dv[24]*ex6_2_14_pd[20];
	dv[26] = dv[25];
	g[0] += dv[25];
	g[2] += dv[26]*2.6738;
	g[2] += ex6_2_14_pd[17];
	g[0] += ex6_2_14_pd[17]*0.374;
	dv[27] = ex6_2_14_pd[19]*ex6_2_14_pd[18];
	g[2] += dv[27];
	g[0] += dv[27]*0.374;
	dv[28] = ex6_2_14_pd[14];
	g[0] += ex6_2_14_pd[14];
	g[2] += dv[28]*2.6738;
	dv[29] = ex6_2_14_pd[16]*ex6_2_14_pd[15];
	dv[30] = dv[29];
	g[0] += dv[29];
	g[2] += dv[30]*2.6738;
	g[2] += ex6_2_14_pd[13];
	dv[31] = x[2];
	dv[31] *= ex6_2_14_pd[12];
	dv[32] = dv[31]*ex6_2_14_pd[11];
	g[2] += dv[31]*ex6_2_14_pd[10];
	g[2] += dv[32];
	g[0] += dv[32]*0.30384;
	dv[33] = x[2]*ex6_2_14_pd[9];
	dv[34] = dv[33]*ex6_2_14_pd[8];
	g[2] += dv[33]*ex6_2_14_pd[7];
	g[2] += dv[34];
	g[0] += dv[34];
	g[0] += ex6_2_14_pd[6];
	dv[35] = x[0];
	dv[35] *= ex6_2_14_pd[5];
	dv[36] = dv[35]*ex6_2_14_pd[4];
	g[0] += dv[35]*ex6_2_14_pd[3];
	dv[37] = dv[36];
	g[0] += dv[36];
	g[2] += dv[37]*0.095173;
	dv[38] = x[0]*ex6_2_14_pd[2];
	dv[39] = dv[38]*ex6_2_14_pd[1];
	g[0] += dv[38]*ex6_2_14_pd[0];
	g[2] += dv[39];
	g[0] += dv[39];
	}

	return v[2];
}

 void
ex6_2_14_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex6_2_14_xcheck(x) && wantfg == 2)
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
