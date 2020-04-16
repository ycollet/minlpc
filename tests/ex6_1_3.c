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
 fint ex6_1_3_auxcom_[1] = { 6 /* nlc */ };
 fint ex6_1_3_funcom_[49] = {
	12 /* nvar */,
	1 /* nobj */,
	9 /* ncon */,
	30 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,
	21,
	25,
	26,
	27,
	28,
	29,
	30,
	31,

	/* rownos */
	1,
	3,
	5,
	7,
	2,
	4,
	6,
	7,
	1,
	3,
	5,
	8,
	2,
	4,
	6,
	8,
	1,
	3,
	5,
	9,
	2,
	4,
	6,
	9,
	1,
	2,
	3,
	4,
	5,
	6 };

 real ex6_1_3_boundc_[1+24+18] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-07,
		0.2995,
		1.e-07,
		0.2995,
		1.e-07,
		0.1998,
		1.e-07,
		0.1998,
		1.e-07,
		0.4994,
		1.e-07,
		0.4994,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
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
		0.2995,
		0.2995,
		0.1998,
		0.1998,
		0.4994,
		0.4994};

 real ex6_1_3_x0comn_[12] = {
		0.29949,
		1.e-05,
		0.06551,
		0.13429,
		0.49873,
		0.00067,
		0.373197867737302,
		0.000496390669236887,
		0.137685122950498,
		0.996764152762375,
		0.71260468488485,
		0.0203746428730577 };

 static real ex6_1_3_pd[34];
static real ex6_1_3_old_x[12];
static int ex6_1_3_xkind = -1;

 static int
ex6_1_3_xcheck(real *x)
{
	real *x1 = ex6_1_3_old_x, *xe = x + 12;
	errno = 0;
	if (ex6_1_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex6_1_3_xkind = 0;
	return 1;
	}
 real
ex6_1_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[15], dv[12];
	fint wantfg = *needfg;
	if (ex6_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex6_1_3_pd[10] = 1. / x[0];
	v[1] = x[0] + x[2];
	v[1] += x[4];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex6_1_3_pd[11] = 1. / v[1];
	ex6_1_3_pd[12] = v[0] - v[2];
	v[2] = ex6_1_3_pd[12] * x[0];
	v[0] = log(x[2]);
	if (errno) in_trouble("log",x[2]);
	ex6_1_3_pd[13] = 1. / x[2];
	v[3] = x[0] + x[2];
	v[3] += x[4];
	v[4] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	ex6_1_3_pd[14] = 1. / v[3];
	ex6_1_3_pd[15] = v[0] - v[4];
	v[4] = ex6_1_3_pd[15] * x[2];
	v[2] += v[4];
	v[4] = log(x[4]);
	if (errno) in_trouble("log",x[4]);
	ex6_1_3_pd[16] = 1. / x[4];
	v[0] = x[0] + x[2];
	v[0] += x[4];
	v[5] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex6_1_3_pd[17] = 1. / v[0];
	ex6_1_3_pd[18] = v[4] - v[5];
	v[5] = ex6_1_3_pd[18] * x[4];
	v[2] += v[5];
	v[5] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex6_1_3_pd[19] = 1. / x[1];
	v[4] = x[1] + x[3];
	v[4] += x[5];
	v[6] = log(v[4]);
	if (errno) in_trouble("log",v[4]);
	ex6_1_3_pd[20] = 1. / v[4];
	ex6_1_3_pd[21] = v[5] - v[6];
	v[6] = ex6_1_3_pd[21] * x[1];
	v[2] += v[6];
	v[6] = log(x[3]);
	if (errno) in_trouble("log",x[3]);
	ex6_1_3_pd[22] = 1. / x[3];
	v[5] = x[1] + x[3];
	v[5] += x[5];
	v[7] = log(v[5]);
	if (errno) in_trouble("log",v[5]);
	ex6_1_3_pd[23] = 1. / v[5];
	ex6_1_3_pd[24] = v[6] - v[7];
	v[7] = ex6_1_3_pd[24] * x[3];
	v[2] += v[7];
	v[7] = log(x[5]);
	if (errno) in_trouble("log",x[5]);
	ex6_1_3_pd[25] = 1. / x[5];
	v[6] = x[1] + x[3];
	v[6] += x[5];
	v[8] = log(v[6]);
	if (errno) in_trouble("log",v[6]);
	ex6_1_3_pd[26] = 1. / v[6];
	ex6_1_3_pd[27] = v[7] - v[8];
	v[8] = ex6_1_3_pd[27] * x[5];
	v[2] += v[8];
	v[8] = 1.44805026165593 * x[8];
	v[7] = 0.989428667054834 * x[10];
	ex6_1_3_pd[28] = v[8] + v[7];
	v[7] = x[0] * ex6_1_3_pd[28];
	v[2] += v[7];
	v[7] = 1.12676386427658 * x[6];
	v[8] = 1.00363012835441 * x[10];
	ex6_1_3_pd[29] = v[7] + v[8];
	v[8] = x[2] * ex6_1_3_pd[29];
	v[2] += v[8];
	v[8] = 0.0347225450624344 * x[6];
	v[7] = 0.82681418300153 * x[8];
	ex6_1_3_pd[30] = v[8] + v[7];
	v[7] = x[4] * ex6_1_3_pd[30];
	v[2] += v[7];
	v[7] = 1.44805026165593 * x[9];
	v[8] = 0.989428667054834 * x[11];
	ex6_1_3_pd[31] = v[7] + v[8];
	v[8] = x[1] * ex6_1_3_pd[31];
	v[2] += v[8];
	v[8] = 1.12676386427658 * x[7];
	v[7] = 1.00363012835441 * x[11];
	ex6_1_3_pd[32] = v[8] + v[7];
	v[7] = x[3] * ex6_1_3_pd[32];
	v[2] += v[7];
	v[7] = 0.0347225450624344 * x[7];
	v[8] = 0.82681418300153 * x[9];
	ex6_1_3_pd[33] = v[7] + v[8];
	v[8] = x[5] * ex6_1_3_pd[33];
	v[2] += v[8];
	;}

	if (wantfg & 2) {
	g[5] = ex6_1_3_pd[33];
	dv[0] = x[5];
	g[9] = dv[0]*0.82681418300153;
	g[7] = x[5]*0.0347225450624344;
	g[3] = ex6_1_3_pd[32];
	dv[1] = x[3];
	g[11] = dv[1]*1.00363012835441;
	g[7] += x[3]*1.12676386427658;
	g[1] = ex6_1_3_pd[31];
	dv[2] = x[1];
	g[11] += dv[2]*0.989428667054834;
	g[9] += x[1]*1.44805026165593;
	g[4] = ex6_1_3_pd[30];
	dv[3] = x[4];
	g[8] = dv[3]*0.82681418300153;
	g[6] = x[4]*0.0347225450624344;
	g[2] = ex6_1_3_pd[29];
	dv[4] = x[2];
	g[10] = dv[4]*1.00363012835441;
	g[6] += x[2]*1.12676386427658;
	g[0] = ex6_1_3_pd[28];
	dv[5] = x[0];
	g[10] += dv[5]*0.989428667054834;
	g[8] += x[0]*1.44805026165593;
	g[5] += ex6_1_3_pd[27];
	dv[6] = -x[5];
	dv[6] *= ex6_1_3_pd[26];
	g[5] += dv[6];
	g[3] += dv[6];
	g[1] += dv[6];
	g[5] += x[5]*ex6_1_3_pd[25];
	g[3] += ex6_1_3_pd[24];
	dv[7] = -x[3];
	dv[7] *= ex6_1_3_pd[23];
	g[5] += dv[7];
	g[3] += dv[7];
	g[1] += dv[7];
	g[3] += x[3]*ex6_1_3_pd[22];
	g[1] += ex6_1_3_pd[21];
	dv[8] = -x[1];
	dv[8] *= ex6_1_3_pd[20];
	g[5] += dv[8];
	g[3] += dv[8];
	g[1] += dv[8];
	g[1] += x[1]*ex6_1_3_pd[19];
	g[4] += ex6_1_3_pd[18];
	dv[9] = -x[4];
	dv[9] *= ex6_1_3_pd[17];
	g[4] += dv[9];
	g[2] += dv[9];
	g[0] += dv[9];
	g[4] += x[4]*ex6_1_3_pd[16];
	g[2] += ex6_1_3_pd[15];
	dv[10] = -x[2];
	dv[10] *= ex6_1_3_pd[14];
	g[4] += dv[10];
	g[2] += dv[10];
	g[0] += dv[10];
	g[2] += x[2]*ex6_1_3_pd[13];
	g[0] += ex6_1_3_pd[12];
	dv[11] = -x[0];
	dv[11] *= ex6_1_3_pd[11];
	g[4] += dv[11];
	g[2] += dv[11];
	g[0] += dv[11];
	g[0] += x[0]*ex6_1_3_pd[10];
	}

	return v[2];
}

 void
ex6_1_3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex6_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex6_1_3_pd[0] = 0.145002897355373 * x[2];
	ex6_1_3_pd[0] += x[0];
	v[0] = 0.989528214945409 * x[4];
	ex6_1_3_pd[0] += v[0];
	v[0] = x[6] * ex6_1_3_pd[0];
	t1 = v[0] + -x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	ex6_1_3_pd[1] = 0.145002897355373 * x[3];
	ex6_1_3_pd[1] += x[1];
	v[0] = 0.989528214945409 * x[5];
	ex6_1_3_pd[1] += v[0];
	v[0] = x[7] * ex6_1_3_pd[1];
	t1 = v[0] + -x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	ex6_1_3_pd[2] = 0.293701311601799 * x[0];
	ex6_1_3_pd[3] = ex6_1_3_pd[2] + x[2];
	v[1] = 0.646291923054068 * x[4];
	ex6_1_3_pd[3] += v[1];
	v[1] = x[8] * ex6_1_3_pd[3];
	t1 = v[1] + -x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	ex6_1_3_pd[4] = 0.293701311601799 * x[1];
	ex6_1_3_pd[5] = ex6_1_3_pd[4] + x[3];
	v[1] = 0.646291923054068 * x[5];
	ex6_1_3_pd[5] += v[1];
	v[1] = x[9] * ex6_1_3_pd[5];
	t1 = v[1] + -x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	ex6_1_3_pd[6] = 0.619143628558899 * x[0];
	v[0] = 0.239837817616513 * x[2];
	ex6_1_3_pd[7] = ex6_1_3_pd[6] + v[0];
	ex6_1_3_pd[7] += x[4];
	v[1] = x[10] * ex6_1_3_pd[7];
	t1 = v[1] + -x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	ex6_1_3_pd[8] = 0.619143628558899 * x[1];
	v[0] = 0.239837817616513 * x[3];
	ex6_1_3_pd[9] = ex6_1_3_pd[8] + v[0];
	ex6_1_3_pd[9] += x[5];
	v[1] = x[11] * ex6_1_3_pd[9];
	t1 = v[1] + -x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += x[1];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[2];
	t1 += x[3];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[4];
	t1 += x[5];
	c[8] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[24] = ex6_1_3_pd[0];
	dv[0] = x[6];
	J[16] = dv[0]*0.989528214945409;
	dv[1] = x[6];
	J[8] = dv[1]*0.145002897355373;
	J[0] = x[6] + -1.;

   /*** derivatives for constraint 2 ***/

	J[25] = ex6_1_3_pd[1];
	dv[0] = x[7];
	J[20] = dv[0]*0.989528214945409;
	dv[1] = x[7];
	J[12] = dv[1]*0.145002897355373;
	J[4] = x[7] + -1.;

   /*** derivatives for constraint 3 ***/

	J[26] = ex6_1_3_pd[3];
	dv[0] = x[8];
	J[17] = dv[0]*0.646291923054068;
	J[9] = x[8] + -1.;
	J[1] = x[8]*0.293701311601799;

   /*** derivatives for constraint 4 ***/

	J[27] = ex6_1_3_pd[5];
	dv[0] = x[9];
	J[21] = dv[0]*0.646291923054068;
	J[13] = x[9] + -1.;
	J[5] = x[9]*0.293701311601799;

   /*** derivatives for constraint 5 ***/

	J[28] = ex6_1_3_pd[7];
	J[18] = x[10] + -1.;
	dv[0] = x[10];
	J[10] = dv[0]*0.239837817616513;
	J[2] = x[10]*0.619143628558899;

   /*** derivatives for constraint 6 ***/

	J[29] = ex6_1_3_pd[9];
	J[22] = x[11] + -1.;
	dv[0] = x[11];
	J[14] = dv[0]*0.239837817616513;
	J[6] = x[11]*0.619143628558899;

   /*** derivatives for constraint 7 ***/

	J[3] = 1.;
	J[7] = 1.;

   /*** derivatives for constraint 8 ***/

	J[11] = 1.;
	J[15] = 1.;

   /*** derivatives for constraint 9 ***/

	J[19] = 1.;
	J[23] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
