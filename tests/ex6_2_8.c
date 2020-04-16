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
 fint ex6_2_8_auxcom_[1] = { 0 /* nlc */ };
 fint ex6_2_8_funcom_[13] = {
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

 real ex6_2_8_boundc_[1+6+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-06,
		1.,
		1.e-06,
		1.,
		1.e-06,
		1.,
		1.,
		1.};

 real ex6_2_8_x0comn_[3] = {
		0.7154,
		0.00336,
		0.28124 };

 static real ex6_2_8_pd[71];
static real ex6_2_8_old_x[3];
static int ex6_2_8_xkind = -1;

 static int
ex6_2_8_xcheck(real *x)
{
	real *x1 = ex6_2_8_old_x, *xe = x + 3;
	errno = 0;
	if (ex6_2_8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex6_2_8_xkind = 0;
	return 1;
	}
 real
ex6_2_8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[5], dv[49], rv;
	fint wantfg = *needfg;
	if (ex6_2_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 2.4088 * x[0];
	v[1] = 8.8495 * x[1];
	v[0] += v[1];
	v[1] = 2.0086 * x[2];
	v[0] += v[1];
	ex6_2_8_pd[0] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex6_2_8_pd[1] = 1. / v[0];
	ex6_2_8_pd[2] = 10.4807341082197 * x[0];
	v[0] = 38.5043409542885 * x[1];
	ex6_2_8_pd[3] = ex6_2_8_pd[2] + v[0];
	v[1] = 8.73945638067505 * x[2];
	ex6_2_8_pd[3] += v[1];
	v[1] = ex6_2_8_pd[0] * ex6_2_8_pd[3];
	ex6_2_8_pd[4] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_8_pd[5] = 1. / x[0];
	ex6_2_8_pd[6] = 0.240734108219679 * ex6_2_8_pd[4];
	v[2] = ex6_2_8_pd[6] * x[0];
	v[1] += v[2];
	ex6_2_8_pd[7] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_8_pd[8] = 1. / x[1];
	ex6_2_8_pd[9] = 2.64434095428848 * ex6_2_8_pd[7];
	v[2] = ex6_2_8_pd[9] * x[1];
	v[1] += v[2];
	ex6_2_8_pd[10] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_8_pd[11] = 1. / x[2];
	ex6_2_8_pd[12] = 0.399456380675047 * ex6_2_8_pd[10];
	v[2] = ex6_2_8_pd[12] * x[2];
	v[1] += v[2];
	v[2] = 2.4088 * x[0];
	v[3] = 8.8495 * x[1];
	v[2] += v[3];
	v[3] = 2.0086 * x[2];
	v[2] += v[3];
	ex6_2_8_pd[13] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_8_pd[14] = 1. / v[2];
	ex6_2_8_pd[15] = 0.240734108219679 * ex6_2_8_pd[13];
	v[2] = ex6_2_8_pd[15] * x[0];
	v[3] = -v[2];
	v[1] += v[3];
	v[3] = 2.4088 * x[0];
	v[2] = 8.8495 * x[1];
	v[3] += v[2];
	v[2] = 2.0086 * x[2];
	v[3] += v[2];
	ex6_2_8_pd[16] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_8_pd[17] = 1. / v[3];
	ex6_2_8_pd[18] = 2.64434095428848 * ex6_2_8_pd[16];
	v[3] = ex6_2_8_pd[18] * x[1];
	v[2] = -v[3];
	v[1] += v[2];
	v[2] = 2.4088 * x[0];
	v[3] = 8.8495 * x[1];
	v[2] += v[3];
	v[3] = 2.0086 * x[2];
	v[2] += v[3];
	ex6_2_8_pd[19] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_8_pd[20] = 1. / v[2];
	ex6_2_8_pd[21] = 0.399456380675047 * ex6_2_8_pd[19];
	v[2] = ex6_2_8_pd[21] * x[2];
	v[3] = -v[2];
	v[1] += v[3];
	ex6_2_8_pd[22] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_8_pd[23] = 1. / x[0];
	ex6_2_8_pd[24] = 11.24 * ex6_2_8_pd[22];
	v[3] = ex6_2_8_pd[24] * x[0];
	v[1] += v[3];
	ex6_2_8_pd[25] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_8_pd[26] = 1. / x[1];
	ex6_2_8_pd[27] = 36.86 * ex6_2_8_pd[25];
	v[3] = ex6_2_8_pd[27] * x[1];
	v[1] += v[3];
	ex6_2_8_pd[28] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_8_pd[29] = 1. / x[2];
	ex6_2_8_pd[30] = 9.34 * ex6_2_8_pd[28];
	v[3] = ex6_2_8_pd[30] * x[2];
	v[1] += v[3];
	v[3] = 2.248 * x[0];
	v[2] = 7.372 * x[1];
	v[3] += v[2];
	v[2] = 1.868 * x[2];
	v[3] += v[2];
	ex6_2_8_pd[31] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_8_pd[32] = 1. / v[3];
	ex6_2_8_pd[33] = 11.24 * ex6_2_8_pd[31];
	v[3] = ex6_2_8_pd[33] * x[0];
	v[2] = -v[3];
	v[1] += v[2];
	v[2] = 2.248 * x[0];
	v[3] = 7.372 * x[1];
	v[2] += v[3];
	v[3] = 1.868 * x[2];
	v[2] += v[3];
	ex6_2_8_pd[34] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_8_pd[35] = 1. / v[2];
	ex6_2_8_pd[36] = 36.86 * ex6_2_8_pd[34];
	v[2] = ex6_2_8_pd[36] * x[1];
	v[3] = -v[2];
	v[1] += v[3];
	v[3] = 2.248 * x[0];
	v[2] = 7.372 * x[1];
	v[3] += v[2];
	v[2] = 1.868 * x[2];
	v[3] += v[2];
	ex6_2_8_pd[37] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_8_pd[38] = 1. / v[3];
	ex6_2_8_pd[39] = 9.34 * ex6_2_8_pd[37];
	v[3] = ex6_2_8_pd[39] * x[2];
	v[2] = -v[3];
	v[1] += v[2];
	v[2] = 2.248 * x[0];
	v[3] = 7.372 * x[1];
	v[2] += v[3];
	v[3] = 1.868 * x[2];
	v[2] += v[3];
	ex6_2_8_pd[40] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	ex6_2_8_pd[41] = 1. / v[2];
	ex6_2_8_pd[42] = 2.248 * x[0];
	v[2] = 7.372 * x[1];
	ex6_2_8_pd[43] = ex6_2_8_pd[42] + v[2];
	v[3] = 1.868 * x[2];
	ex6_2_8_pd[43] += v[3];
	v[3] = ex6_2_8_pd[40] * ex6_2_8_pd[43];
	v[1] += v[3];
	ex6_2_8_pd[44] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_8_pd[45] = 1. / x[0];
	ex6_2_8_pd[46] = 2.248 * ex6_2_8_pd[44];
	v[3] = ex6_2_8_pd[46] * x[0];
	v[1] += v[3];
	ex6_2_8_pd[47] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_8_pd[48] = 1. / x[1];
	ex6_2_8_pd[49] = 7.372 * ex6_2_8_pd[47];
	v[3] = ex6_2_8_pd[49] * x[1];
	v[1] += v[3];
	ex6_2_8_pd[50] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_8_pd[51] = 1. / x[2];
	ex6_2_8_pd[52] = 1.868 * ex6_2_8_pd[50];
	v[3] = ex6_2_8_pd[52] * x[2];
	v[1] += v[3];
	v[3] = 2.248 * x[0];
	v[4] = 5.82088173817021 * x[1];
	v[3] += v[4];
	v[4] = 0.382446861901943 * x[2];
	v[3] += v[4];
	ex6_2_8_pd[53] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_8_pd[54] = 1. / v[3];
	ex6_2_8_pd[55] = 2.248 * ex6_2_8_pd[53];
	v[3] = ex6_2_8_pd[55] * x[0];
	v[4] = -v[3];
	v[1] += v[4];
	v[4] = 0.972461133672523 * x[0];
	v[3] = 7.372 * x[1];
	v[4] += v[3];
	v[3] = 1.1893141713454 * x[2];
	v[4] += v[3];
	ex6_2_8_pd[56] = log(v[4]);
	if (errno) in_trouble("log",v[4]);
	ex6_2_8_pd[57] = 1. / v[4];
	ex6_2_8_pd[58] = 7.372 * ex6_2_8_pd[56];
	v[4] = ex6_2_8_pd[58] * x[1];
	v[3] = -v[4];
	v[1] += v[3];
	v[3] = 1.86752460515164 * x[0];
	v[4] = 2.61699842799583 * x[1];
	v[3] += v[4];
	v[4] = 1.868 * x[2];
	v[3] += v[4];
	ex6_2_8_pd[59] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_2_8_pd[60] = 1. / v[3];
	ex6_2_8_pd[61] = 1.868 * ex6_2_8_pd[59];
	v[3] = ex6_2_8_pd[61] * x[2];
	v[4] = -v[3];
	v[1] += v[4];
	ex6_2_8_pd[62] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_2_8_pd[63] = 1. / x[0];
	ex6_2_8_pd[64] = 12.7287341082197 * ex6_2_8_pd[62];
	v[4] = ex6_2_8_pd[64] * x[0];
	v[3] = -v[4];
	v[1] += v[3];
	ex6_2_8_pd[65] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_2_8_pd[66] = 1. / x[1];
	ex6_2_8_pd[67] = 45.8763409542885 * ex6_2_8_pd[65];
	v[3] = ex6_2_8_pd[67] * x[1];
	v[4] = -v[3];
	v[1] += v[4];
	ex6_2_8_pd[68] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_2_8_pd[69] = 1. / x[2];
	ex6_2_8_pd[70] = 10.607456380675 * ex6_2_8_pd[68];
	v[4] = ex6_2_8_pd[70] * x[2];
	v[3] = -v[4];
	v[1] += v[3];
	rv = v[1] + 0.303602206615077*x[0];
	rv += -3.98949602721008*x[1];
	rv += 0.0423576909050935*x[2];
	;}

	if (wantfg & 2) {
	g[2] = -ex6_2_8_pd[70] + 0.0423576909050935;
	dv[0] = -x[2]*10.607456380675;
	g[2] += dv[0]*ex6_2_8_pd[69];
	g[1] = -ex6_2_8_pd[67] + -3.98949602721008;
	dv[1] = -x[1]*45.8763409542885;
	g[1] += dv[1]*ex6_2_8_pd[66];
	g[0] = -ex6_2_8_pd[64] + 0.303602206615077;
	dv[2] = -x[0]*12.7287341082197;
	g[0] += dv[2]*ex6_2_8_pd[63];
	g[2] -= ex6_2_8_pd[61];
	dv[3] = -x[2]*1.868;
	dv[3] *= ex6_2_8_pd[60];
	dv[4] = dv[3];
	g[2] += dv[4]*1.868;
	dv[5] = dv[3];
	g[1] += dv[5]*2.61699842799583;
	g[0] += dv[3]*1.86752460515164;
	g[1] -= ex6_2_8_pd[58];
	dv[6] = -x[1]*7.372;
	dv[6] *= ex6_2_8_pd[57];
	dv[7] = dv[6];
	g[2] += dv[7]*1.1893141713454;
	dv[8] = dv[6];
	g[1] += dv[8]*7.372;
	g[0] += dv[6]*0.972461133672523;
	g[0] -= ex6_2_8_pd[55];
	dv[9] = -x[0]*2.248;
	dv[9] *= ex6_2_8_pd[54];
	dv[10] = dv[9];
	g[2] += dv[10]*0.382446861901943;
	dv[11] = dv[9];
	g[1] += dv[11]*5.82088173817021;
	g[0] += dv[9]*2.248;
	g[2] += ex6_2_8_pd[52];
	dv[12] = x[2]*1.868;
	g[2] += dv[12]*ex6_2_8_pd[51];
	g[1] += ex6_2_8_pd[49];
	dv[13] = x[1]*7.372;
	g[1] += dv[13]*ex6_2_8_pd[48];
	g[0] += ex6_2_8_pd[46];
	dv[14] = x[0]*2.248;
	g[0] += dv[14]*ex6_2_8_pd[45];
	dv[15] = ex6_2_8_pd[40];
	g[2] += dv[15]*1.868;
	dv[16] = ex6_2_8_pd[40];
	g[1] += dv[16]*7.372;
	g[0] += ex6_2_8_pd[40]*2.248;
	dv[17] = ex6_2_8_pd[43]*ex6_2_8_pd[41];
	dv[18] = dv[17];
	g[2] += dv[18]*1.868;
	dv[19] = dv[17];
	g[1] += dv[19]*7.372;
	g[0] += dv[17]*2.248;
	g[2] -= ex6_2_8_pd[39];
	dv[20] = -x[2]*9.34;
	dv[20] *= ex6_2_8_pd[38];
	dv[21] = dv[20];
	g[2] += dv[21]*1.868;
	dv[22] = dv[20];
	g[1] += dv[22]*7.372;
	g[0] += dv[20]*2.248;
	g[1] -= ex6_2_8_pd[36];
	dv[23] = -x[1]*36.86;
	dv[23] *= ex6_2_8_pd[35];
	dv[24] = dv[23];
	g[2] += dv[24]*1.868;
	dv[25] = dv[23];
	g[1] += dv[25]*7.372;
	g[0] += dv[23]*2.248;
	g[0] -= ex6_2_8_pd[33];
	dv[26] = -x[0]*11.24;
	dv[26] *= ex6_2_8_pd[32];
	dv[27] = dv[26];
	g[2] += dv[27]*1.868;
	dv[28] = dv[26];
	g[1] += dv[28]*7.372;
	g[0] += dv[26]*2.248;
	g[2] += ex6_2_8_pd[30];
	dv[29] = x[2]*9.34;
	g[2] += dv[29]*ex6_2_8_pd[29];
	g[1] += ex6_2_8_pd[27];
	dv[30] = x[1]*36.86;
	g[1] += dv[30]*ex6_2_8_pd[26];
	g[0] += ex6_2_8_pd[24];
	dv[31] = x[0]*11.24;
	g[0] += dv[31]*ex6_2_8_pd[23];
	g[2] -= ex6_2_8_pd[21];
	dv[32] = -x[2]*0.399456380675047;
	dv[32] *= ex6_2_8_pd[20];
	dv[33] = dv[32];
	g[2] += dv[33]*2.0086;
	dv[34] = dv[32];
	g[1] += dv[34]*8.8495;
	g[0] += dv[32]*2.4088;
	g[1] -= ex6_2_8_pd[18];
	dv[35] = -x[1]*2.64434095428848;
	dv[35] *= ex6_2_8_pd[17];
	dv[36] = dv[35];
	g[2] += dv[36]*2.0086;
	dv[37] = dv[35];
	g[1] += dv[37]*8.8495;
	g[0] += dv[35]*2.4088;
	g[0] -= ex6_2_8_pd[15];
	dv[38] = -x[0]*0.240734108219679;
	dv[38] *= ex6_2_8_pd[14];
	dv[39] = dv[38];
	g[2] += dv[39]*2.0086;
	dv[40] = dv[38];
	g[1] += dv[40]*8.8495;
	g[0] += dv[38]*2.4088;
	g[2] += ex6_2_8_pd[12];
	dv[41] = x[2]*0.399456380675047;
	g[2] += dv[41]*ex6_2_8_pd[11];
	g[1] += ex6_2_8_pd[9];
	dv[42] = x[1]*2.64434095428848;
	g[1] += dv[42]*ex6_2_8_pd[8];
	g[0] += ex6_2_8_pd[6];
	dv[43] = x[0]*0.240734108219679;
	g[0] += dv[43]*ex6_2_8_pd[5];
	dv[44] = ex6_2_8_pd[0];
	g[2] += dv[44]*8.73945638067505;
	dv[45] = ex6_2_8_pd[0];
	g[1] += dv[45]*38.5043409542885;
	g[0] += ex6_2_8_pd[0]*10.4807341082197;
	dv[46] = ex6_2_8_pd[3]*ex6_2_8_pd[1];
	dv[47] = dv[46];
	g[2] += dv[47]*2.0086;
	dv[48] = dv[46];
	g[1] += dv[48]*8.8495;
	g[0] += dv[46]*2.4088;
	}

	return rv;
}

 void
ex6_2_8_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex6_2_8_xcheck(x) && wantfg == 2)
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
