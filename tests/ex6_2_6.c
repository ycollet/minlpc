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
 fint ex6_2_6_auxcom_[1] = { 0 /* nlc */ };
 fint ex6_2_6_funcom_[13] = {
	3 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	3 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,

	/* rownos */
	1,
	1,
	1 };

 real ex6_2_6_boundc_[1+6+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-06,
		1.,
		1.e-06,
		1.,
		1.e-06,
		1.,
		1.,
		1.};

 real ex6_2_6_x0comn_[3] = {
		0.51802,
		0.0511,
		0.43088 };

 static real ex6_2_6_pd[71];
static real ex6_2_6_old_x[3];
static int ex6_2_6_xkind = -1;

 static int
ex6_2_6_xcheck(real *x)
{
	real *x1 = ex6_2_6_old_x, *xe = x + 3;
	errno = 0;
	if (ex6_2_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex6_2_6_xkind = 0;
	return 1;
	}
 real
ex6_2_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[5], dv[49], rv;
	fint wantfg = *needfg;
	if (ex6_2_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 3.9235 * x[0];
	v[1] = 6.0909 * x[1];
	v[0] += v[1];
	v[1] = 0.92 * x[2];
	v[0] += v[1];
	ex6_2_6_pd[0] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex6_2_6_pd[1] = 1. / v[0];
	ex6_2_6_pd[2] = 26.9071667605344 * x[0];
	v[0] = 41.7710875549227 * x[1];
	ex6_2_6_pd[3] = ex6_2_6_pd[2] + v[0];
	v[1] = 6.30931398488382 * x[2];
	ex6_2_6_pd[3] += v[1];
	v[1] = ex6_2_6_pd[0] * ex6_2_6_pd[3];
	ex6_2_6_pd[4] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_6_pd[5] = 1. / x[0];
	ex6_2_6_pd[6] = 9.58716676053442 * ex6_2_6_pd[4];
	v[2] = ex6_2_6_pd[6] * x[0];
	v[1] += v[2];
	ex6_2_6_pd[7] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_6_pd[8] = 1. / x[1];
	ex6_2_6_pd[9] = 16.9310875549227 * ex6_2_6_pd[7];
	v[2] = ex6_2_6_pd[9] * x[1];
	v[1] += v[2];
	ex6_2_6_pd[10] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_6_pd[11] = 1. / x[2];
	ex6_2_6_pd[12] = 0.309313984883821 * ex6_2_6_pd[10];
	v[2] = ex6_2_6_pd[12] * x[2];
	v[1] += v[2];
	v[2] = 3.9235 * x[0];
	v[3] = 6.0909 * x[1];
	v[2] += v[3];
	v[3] = 0.92 * x[2];
	v[2] += v[3];
	ex6_2_6_pd[13] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_6_pd[14] = 1. / v[2];
	ex6_2_6_pd[15] = 9.58716676053442 * ex6_2_6_pd[13];
	v[2] = ex6_2_6_pd[15] * x[0];
	v[3] = -v[2];
	v[1] += v[3];
	v[3] = 3.9235 * x[0];
	v[2] = 6.0909 * x[1];
	v[3] += v[2];
	v[2] = 0.92 * x[2];
	v[3] += v[2];
	ex6_2_6_pd[16] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_6_pd[17] = 1. / v[3];
	ex6_2_6_pd[18] = 16.9310875549227 * ex6_2_6_pd[16];
	v[3] = ex6_2_6_pd[18] * x[1];
	v[2] = -v[3];
	v[1] += v[2];
	v[2] = 3.9235 * x[0];
	v[3] = 6.0909 * x[1];
	v[2] += v[3];
	v[3] = 0.92 * x[2];
	v[2] += v[3];
	ex6_2_6_pd[19] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_6_pd[20] = 1. / v[2];
	ex6_2_6_pd[21] = 0.309313984883821 * ex6_2_6_pd[19];
	v[2] = ex6_2_6_pd[21] * x[2];
	v[3] = -v[2];
	v[1] += v[3];
	ex6_2_6_pd[22] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_6_pd[23] = 1. / x[0];
	ex6_2_6_pd[24] = 18.32 * ex6_2_6_pd[22];
	v[3] = ex6_2_6_pd[24] * x[0];
	v[1] += v[3];
	ex6_2_6_pd[25] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_6_pd[26] = 1. / x[1];
	ex6_2_6_pd[27] = 25.84 * ex6_2_6_pd[25];
	v[3] = ex6_2_6_pd[27] * x[1];
	v[1] += v[3];
	ex6_2_6_pd[28] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_6_pd[29] = 1. / x[2];
	ex6_2_6_pd[30] = 7. * ex6_2_6_pd[28];
	v[3] = ex6_2_6_pd[30] * x[2];
	v[1] += v[3];
	v[3] = 3.664 * x[0];
	v[2] = 5.168 * x[1];
	v[3] += v[2];
	v[2] = 1.4 * x[2];
	v[3] += v[2];
	ex6_2_6_pd[31] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_6_pd[32] = 1. / v[3];
	ex6_2_6_pd[33] = 18.32 * ex6_2_6_pd[31];
	v[3] = ex6_2_6_pd[33] * x[0];
	v[2] = -v[3];
	v[1] += v[2];
	v[2] = 3.664 * x[0];
	v[3] = 5.168 * x[1];
	v[2] += v[3];
	v[3] = 1.4 * x[2];
	v[2] += v[3];
	ex6_2_6_pd[34] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_6_pd[35] = 1. / v[2];
	ex6_2_6_pd[36] = 25.84 * ex6_2_6_pd[34];
	v[2] = ex6_2_6_pd[36] * x[1];
	v[3] = -v[2];
	v[1] += v[3];
	v[3] = 3.664 * x[0];
	v[2] = 5.168 * x[1];
	v[3] += v[2];
	v[2] = 1.4 * x[2];
	v[3] += v[2];
	ex6_2_6_pd[37] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_6_pd[38] = 1. / v[3];
	ex6_2_6_pd[39] = 7. * ex6_2_6_pd[37];
	v[3] = ex6_2_6_pd[39] * x[2];
	v[2] = -v[3];
	v[1] += v[2];
	v[2] = 4.0643 * x[0];
	v[3] = 5.7409 * x[1];
	v[2] += v[3];
	v[3] = 1.6741 * x[2];
	v[2] += v[3];
	ex6_2_6_pd[40] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_6_pd[41] = 1. / v[2];
	ex6_2_6_pd[42] = 4.0643 * x[0];
	v[2] = 5.7409 * x[1];
	ex6_2_6_pd[43] = ex6_2_6_pd[42] + v[2];
	v[3] = 1.6741 * x[2];
	ex6_2_6_pd[43] += v[3];
	v[3] = ex6_2_6_pd[40] * ex6_2_6_pd[43];
	v[1] += v[3];
	ex6_2_6_pd[44] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_6_pd[45] = 1. / x[0];
	ex6_2_6_pd[46] = 4.0643 * ex6_2_6_pd[44];
	v[3] = ex6_2_6_pd[46] * x[0];
	v[1] += v[3];
	ex6_2_6_pd[47] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_6_pd[48] = 1. / x[1];
	ex6_2_6_pd[49] = 5.7409 * ex6_2_6_pd[47];
	v[3] = ex6_2_6_pd[49] * x[1];
	v[1] += v[3];
	ex6_2_6_pd[50] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_6_pd[51] = 1. / x[2];
	ex6_2_6_pd[52] = 1.6741 * ex6_2_6_pd[50];
	v[3] = ex6_2_6_pd[52] * x[2];
	v[1] += v[3];
	v[3] = 4.0643 * x[0];
	v[4] = 3.22644664511275 * x[1];
	v[3] += v[4];
	v[4] = 1.44980651607875 * x[2];
	v[3] += v[4];
	ex6_2_6_pd[53] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_6_pd[54] = 1. / v[3];
	ex6_2_6_pd[55] = 4.0643 * ex6_2_6_pd[53];
	v[3] = ex6_2_6_pd[55] * x[0];
	v[4] = -v[3];
	v[1] += v[4];
	v[4] = 5.31147575751424 * x[0];
	v[3] = 5.7409 * x[1];
	v[4] += v[3];
	v[3] = 0.00729924451284409 * x[2];
	v[4] += v[3];
	ex6_2_6_pd[56] = log(v[4]);
	if (errno) in_trouble("log",v[4]);
	ex6_2_6_pd[57] = 1. / v[4];
	ex6_2_6_pd[58] = 5.7409 * ex6_2_6_pd[56];
	v[4] = ex6_2_6_pd[58] * x[1];
	v[3] = -v[4];
	v[1] += v[3];
	v[3] = 2.25846661774355 * x[0];
	v[4] = 3.70876916588753 * x[1];
	v[3] += v[4];
	v[4] = 1.6741 * x[2];
	v[3] += v[4];
	ex6_2_6_pd[59] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_6_pd[60] = 1. / v[3];
	ex6_2_6_pd[61] = 1.6741 * ex6_2_6_pd[59];
	v[3] = ex6_2_6_pd[61] * x[2];
	v[4] = -v[3];
	v[1] += v[4];
	ex6_2_6_pd[62] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_6_pd[63] = 1. / x[0];
	ex6_2_6_pd[64] = 30.9714667605344 * ex6_2_6_pd[62];
	v[4] = ex6_2_6_pd[64] * x[0];
	v[3] = -v[4];
	v[1] += v[3];
	ex6_2_6_pd[65] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_6_pd[66] = 1. / x[1];
	ex6_2_6_pd[67] = 47.5119875549227 * ex6_2_6_pd[65];
	v[3] = ex6_2_6_pd[67] * x[1];
	v[4] = -v[3];
	v[1] += v[4];
	ex6_2_6_pd[68] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_6_pd[69] = 1. / x[2];
	ex6_2_6_pd[70] = 7.98341398488382 * ex6_2_6_pd[68];
	v[4] = ex6_2_6_pd[70] * x[2];
	v[3] = -v[4];
	v[1] += v[3];
	rv = v[1] + 0.668686155614739*x[0];
	rv += -1.14374230885457*x[1];
	rv += 2.8906196099828*x[2];
	;}

	if (wantfg & 2) {
	g[2] = -ex6_2_6_pd[70] + 2.8906196099828;
	dv[0] = -x[2]*7.98341398488382;
	g[2] += dv[0]*ex6_2_6_pd[69];
	g[1] = -ex6_2_6_pd[67] + -1.14374230885457;
	dv[1] = -x[1]*47.5119875549227;
	g[1] += dv[1]*ex6_2_6_pd[66];
	g[0] = -ex6_2_6_pd[64] + 0.668686155614739;
	dv[2] = -x[0]*30.9714667605344;
	g[0] += dv[2]*ex6_2_6_pd[63];
	g[2] -= ex6_2_6_pd[61];
	dv[3] = -x[2]*1.6741;
	dv[3] *= ex6_2_6_pd[60];
	dv[4] = dv[3];
	g[2] += dv[4]*1.6741;
	dv[5] = dv[3];
	g[1] += dv[5]*3.70876916588753;
	g[0] += dv[3]*2.25846661774355;
	g[1] -= ex6_2_6_pd[58];
	dv[6] = -x[1]*5.7409;
	dv[6] *= ex6_2_6_pd[57];
	dv[7] = dv[6];
	g[2] += dv[7]*0.00729924451284409;
	dv[8] = dv[6];
	g[1] += dv[8]*5.7409;
	g[0] += dv[6]*5.31147575751424;
	g[0] -= ex6_2_6_pd[55];
	dv[9] = -x[0]*4.0643;
	dv[9] *= ex6_2_6_pd[54];
	dv[10] = dv[9];
	g[2] += dv[10]*1.44980651607875;
	dv[11] = dv[9];
	g[1] += dv[11]*3.22644664511275;
	g[0] += dv[9]*4.0643;
	g[2] += ex6_2_6_pd[52];
	dv[12] = x[2]*1.6741;
	g[2] += dv[12]*ex6_2_6_pd[51];
	g[1] += ex6_2_6_pd[49];
	dv[13] = x[1]*5.7409;
	g[1] += dv[13]*ex6_2_6_pd[48];
	g[0] += ex6_2_6_pd[46];
	dv[14] = x[0]*4.0643;
	g[0] += dv[14]*ex6_2_6_pd[45];
	dv[15] = ex6_2_6_pd[40];
	g[2] += dv[15]*1.6741;
	dv[16] = ex6_2_6_pd[40];
	g[1] += dv[16]*5.7409;
	g[0] += ex6_2_6_pd[40]*4.0643;
	dv[17] = ex6_2_6_pd[43]*ex6_2_6_pd[41];
	dv[18] = dv[17];
	g[2] += dv[18]*1.6741;
	dv[19] = dv[17];
	g[1] += dv[19]*5.7409;
	g[0] += dv[17]*4.0643;
	g[2] -= ex6_2_6_pd[39];
	dv[20] = -x[2]*7.;
	dv[20] *= ex6_2_6_pd[38];
	dv[21] = dv[20];
	g[2] += dv[21]*1.4;
	dv[22] = dv[20];
	g[1] += dv[22]*5.168;
	g[0] += dv[20]*3.664;
	g[1] -= ex6_2_6_pd[36];
	dv[23] = -x[1]*25.84;
	dv[23] *= ex6_2_6_pd[35];
	dv[24] = dv[23];
	g[2] += dv[24]*1.4;
	dv[25] = dv[23];
	g[1] += dv[25]*5.168;
	g[0] += dv[23]*3.664;
	g[0] -= ex6_2_6_pd[33];
	dv[26] = -x[0]*18.32;
	dv[26] *= ex6_2_6_pd[32];
	dv[27] = dv[26];
	g[2] += dv[27]*1.4;
	dv[28] = dv[26];
	g[1] += dv[28]*5.168;
	g[0] += dv[26]*3.664;
	g[2] += ex6_2_6_pd[30];
	dv[29] = x[2]*7.;
	g[2] += dv[29]*ex6_2_6_pd[29];
	g[1] += ex6_2_6_pd[27];
	dv[30] = x[1]*25.84;
	g[1] += dv[30]*ex6_2_6_pd[26];
	g[0] += ex6_2_6_pd[24];
	dv[31] = x[0]*18.32;
	g[0] += dv[31]*ex6_2_6_pd[23];
	g[2] -= ex6_2_6_pd[21];
	dv[32] = -x[2]*0.309313984883821;
	dv[32] *= ex6_2_6_pd[20];
	dv[33] = dv[32];
	g[2] += dv[33]*0.92;
	dv[34] = dv[32];
	g[1] += dv[34]*6.0909;
	g[0] += dv[32]*3.9235;
	g[1] -= ex6_2_6_pd[18];
	dv[35] = -x[1]*16.9310875549227;
	dv[35] *= ex6_2_6_pd[17];
	dv[36] = dv[35];
	g[2] += dv[36]*0.92;
	dv[37] = dv[35];
	g[1] += dv[37]*6.0909;
	g[0] += dv[35]*3.9235;
	g[0] -= ex6_2_6_pd[15];
	dv[38] = -x[0]*9.58716676053442;
	dv[38] *= ex6_2_6_pd[14];
	dv[39] = dv[38];
	g[2] += dv[39]*0.92;
	dv[40] = dv[38];
	g[1] += dv[40]*6.0909;
	g[0] += dv[38]*3.9235;
	g[2] += ex6_2_6_pd[12];
	dv[41] = x[2]*0.309313984883821;
	g[2] += dv[41]*ex6_2_6_pd[11];
	g[1] += ex6_2_6_pd[9];
	dv[42] = x[1]*16.9310875549227;
	g[1] += dv[42]*ex6_2_6_pd[8];
	g[0] += ex6_2_6_pd[6];
	dv[43] = x[0]*9.58716676053442;
	g[0] += dv[43]*ex6_2_6_pd[5];
	dv[44] = ex6_2_6_pd[0];
	g[2] += dv[44]*6.30931398488382;
	dv[45] = ex6_2_6_pd[0];
	g[1] += dv[45]*41.7710875549227;
	g[0] += ex6_2_6_pd[0]*26.9071667605344;
	dv[46] = ex6_2_6_pd[3]*ex6_2_6_pd[1];
	dv[47] = dv[46];
	g[2] += dv[47]*0.92;
	dv[48] = dv[46];
	g[1] += dv[48]*6.0909;
	g[0] += dv[46]*3.9235;
	}

	return rv;
}

 void
ex6_2_6_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex6_2_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[1] = 1.;
	J[2] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
