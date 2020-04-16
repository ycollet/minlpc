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
 fint ex8_5_5_auxcom_[1] = { 2 /* nlc */ };
 fint ex8_5_5_funcom_[23] = {
	5 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	11 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	8,
	10,
	12,

	/* rownos */
	1,
	3,
	4,
	2,
	3,
	4,
	1,
	1,
	2,
	1,
	3 };

 real ex8_5_5_boundc_[1+10+8] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.};

 real ex8_5_5_x0comn_[5] = {
		0.5,
		0.5,
		2.,
		1.,
		1. };

 static real ex8_5_5_pd[26];
static real ex8_5_5_old_x[5];
static int ex8_5_5_xkind = -1;

 static int
ex8_5_5_xcheck(real *x)
{
	real *x1 = ex8_5_5_old_x, *xe = x + 5;
	errno = 0;
	if (ex8_5_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_5_5_xkind = 0;
	return 1;
	}
 real
ex8_5_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[4], rv;
	fint wantfg = *needfg;
	if (ex8_5_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex8_5_5_pd[14] = log(x[0]);
	if (errno) in_trouble("log",x[0]);
	ex8_5_5_pd[15] = 1. / x[0];
	v[0] = ex8_5_5_pd[14] * x[0];
	ex8_5_5_pd[16] = log(x[1]);
	if (errno) in_trouble("log",x[1]);
	ex8_5_5_pd[17] = 1. / x[1];
	v[1] = ex8_5_5_pd[16] * x[1];
	v[0] += v[1];
	v[1] = x[2] - x[4];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex8_5_5_pd[18] = 1. / v[1];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = 2.41421356237309 * x[4];
	v[2] = x[2] + v[1];
	v[1] = -0.414213562373095 * x[4];
	v[3] = x[2] + v[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[1] = v[2] / v[3];
	ex8_5_5_pd[19] = 1. / v[3];
	ex8_5_5_pd[20] = -v[1] * ex8_5_5_pd[19];
	ex8_5_5_pd[21] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	ex8_5_5_pd[22] = 1. / v[1];
	ex8_5_5_pd[23] = 0.353553390593274 * ex8_5_5_pd[21];
	v[1] = ex8_5_5_pd[23] * x[3];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[3] = v[1] / x[4];
	ex8_5_5_pd[24] = 1. / x[4];
	ex8_5_5_pd[25] = -v[3] * ex8_5_5_pd[24];
	v[1] = -v[3];
	v[0] += v[1];
	v[0] += -1.;
	rv = v[0] + 2.5746329124341*x[0];
	rv += 0.54639755131421*x[1];
	rv += x[2];
	;}

	if (wantfg & 2) {
	g[4] = -ex8_5_5_pd[25];
	g[3] = -ex8_5_5_pd[24]*ex8_5_5_pd[23];
	dv[0] = -ex8_5_5_pd[24]*x[3];
	dv[0] *= 0.353553390593274;
	dv[0] *= ex8_5_5_pd[22];
	dv[1] = dv[0]*ex8_5_5_pd[20];
	dv[0] *= ex8_5_5_pd[19];
	dv[2] = dv[1];
	g[2] = dv[1] + 1.;
	g[4] -= dv[2]*0.414213562373095;
	dv[3] = dv[0];
	g[2] += dv[0];
	g[4] += dv[3]*2.41421356237309;
	g[4] += ex8_5_5_pd[18];
	g[2] -= ex8_5_5_pd[18];
	g[1] = ex8_5_5_pd[16] + 0.54639755131421;
	g[1] += x[1]*ex8_5_5_pd[17];
	g[0] = ex8_5_5_pd[14] + 2.5746329124341;
	g[0] += x[0]*ex8_5_5_pd[15];
	}

	return rv;
}

 void
ex8_5_5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex8_5_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	ex8_5_5_pd[0] = 3.*(x[2]*x[2]);
	} else {
	ex8_5_5_pd[0] = 0.;
	}
	ex8_5_5_pd[1] = x[2] * x[2];
	ex8_5_5_pd[2] = x[2] + x[2];
	ex8_5_5_pd[3] = 1. - x[4];
	v[2] = ex8_5_5_pd[1] * ex8_5_5_pd[3];
	v[3] = -v[2];
	v[0] += v[3];
	ex8_5_5_pd[4] = x[4] * x[4];
	ex8_5_5_pd[5] = x[4] + x[4];
	ex8_5_5_pd[6] = -3. * ex8_5_5_pd[4];
	v[3] = -2. * x[4];
	ex8_5_5_pd[7] = ex8_5_5_pd[6] + v[3];
	ex8_5_5_pd[7] += x[3];
	v[2] = ex8_5_5_pd[7] * x[2];
	v[0] += v[2];
	v[2] = x[3] * x[4];
	v[4] = -v[2];
	v[0] += v[4];
	v[4] = pow(x[4], 3.);
	if (errno) in_trouble2("pow",x[4],3.);
	if (x[4] != 0.) {
	ex8_5_5_pd[8] = 3.*(x[4]*x[4]);
	} else {
	ex8_5_5_pd[8] = 0.;
	}
	v[0] += v[4];
	v[4] = x[4] * x[4];
	ex8_5_5_pd[9] = x[4] + x[4];
	v[0] += v[4];
	c[0] = v[0];

  /***  constraint 2  ***/

	ex8_5_5_pd[10] = 0.884831 * x[0];
	v[0] = ex8_5_5_pd[10] * x[0];
	ex8_5_5_pd[11] = 0.555442 * x[0];
	v[1] = ex8_5_5_pd[11] * x[1];
	v[0] += v[1];
	ex8_5_5_pd[12] = 0.555442 * x[1];
	v[1] = ex8_5_5_pd[12] * x[0];
	v[0] += v[1];
	ex8_5_5_pd[13] = 0.427888 * x[1];
	v[1] = ex8_5_5_pd[13] * x[1];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.0885973*x[0];
	t1 += -0.0890893*x[1];
	t1 += x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += x[1];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[9] = ex8_5_5_pd[9];
	J[9] += ex8_5_5_pd[8];
	J[9] -= x[3];
	J[7] = -x[4];
	J[6] = ex8_5_5_pd[7];
	J[7] += x[2];
	dv[0] = x[2];
	J[9] -= dv[0]*2.;
	dv[1] = -x[2]*3.;
	J[9] += dv[1]*ex8_5_5_pd[5];
	J[9] += ex8_5_5_pd[1];
	J[6] -= ex8_5_5_pd[3]*ex8_5_5_pd[2];
	J[6] += ex8_5_5_pd[0];

   /*** derivatives for constraint 2 ***/

	J[3] = -ex8_5_5_pd[13];
	J[3] -= x[1]*0.427888;
	J[0] = -ex8_5_5_pd[12];
	J[3] -= x[0]*0.555442;
	J[3] -= ex8_5_5_pd[11];
	J[0] -= x[1]*0.555442;
	J[0] -= ex8_5_5_pd[10];
	J[0] -= x[0]*0.884831;
	J[8] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = -0.0885973;
	J[4] = -0.0890893;
	J[10] = 1.;

   /*** derivatives for constraint 4 ***/

	J[2] = 1.;
	J[5] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
