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
 fint hs62_auxcom_[1] = { 1 /* nlc */ };
 fint hs62_funcom_[13] = {
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

 real hs62_boundc_[1+6+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		0.};

 real hs62_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real hs62_pd[14];
static real hs62_old_x[3];
static int hs62_xkind = -1;

 static int
hs62_xcheck(real *x)
{
	real *x1 = hs62_old_x, *xe = x + 3;
	errno = 0;
	if (hs62_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hs62_xkind = 0;
	return 1;
	}
 real
hs62_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[6];
	fint wantfg = *needfg;
	if (hs62_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + 0.03;
	v[0] += x[1];
	v[0] += x[2];
	v[1] = 0.09 * x[0];
	v[1] += 0.03;
	v[1] += x[1];
	v[1] += x[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	hs62_pd[2] = 1. / v[1];
	hs62_pd[3] = -v[2] * hs62_pd[2];
	hs62_pd[4] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	hs62_pd[5] = 1. / v[2];
	v[2] = -8204.369999999999 * hs62_pd[4];
	v[1] = x[1] + 0.03;
	v[1] += x[2];
	v[0] = 0.07 * x[1];
	v[0] += 0.03;
	v[0] += x[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	hs62_pd[6] = 1. / v[0];
	hs62_pd[7] = -v[3] * hs62_pd[6];
	hs62_pd[8] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	hs62_pd[9] = 1. / v[3];
	v[3] = -9008.72 * hs62_pd[8];
	v[2] += v[3];
	v[3] = x[2] + 0.03;
	v[0] = 0.13 * x[2];
	v[1] = v[0] + 0.03;
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[0] = v[3] / v[1];
	hs62_pd[10] = 1. / v[1];
	hs62_pd[11] = -v[0] * hs62_pd[10];
	hs62_pd[12] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	hs62_pd[13] = 1. / v[0];
	v[0] = -9330.46 * hs62_pd[12];
	v[2] += v[0];
	;}

	if (wantfg & 2) {
	dv[0] = -9330.46*hs62_pd[13];
	dv[1] = dv[0]*hs62_pd[11];
	dv[0] *= hs62_pd[10];
	g[2] = dv[1]*0.13;
	g[2] += dv[0];
	dv[2] = -9008.72*hs62_pd[9];
	dv[3] = dv[2]*hs62_pd[7];
	dv[2] *= hs62_pd[6];
	g[2] += dv[3];
	g[1] = dv[3]*0.07;
	g[2] += dv[2];
	g[1] += dv[2];
	dv[4] = -8204.369999999999*hs62_pd[5];
	dv[5] = dv[4]*hs62_pd[3];
	dv[4] *= hs62_pd[2];
	g[2] += dv[5];
	g[1] += dv[5];
	g[0] = dv[5]*0.09;
	g[2] += dv[4];
	g[1] += dv[4];
	g[0] += dv[4];
	}

	return v[2];
}

 void
hs62_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1], dv[1];
	fint wantfg = *needfg;
	if (hs62_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -1.;
	v[0] += x[1];
	v[0] += x[2];
	hs62_pd[0] = v[0] * v[0];
	hs62_pd[1] = v[0] + v[0];
	v[0] = 20. * hs62_pd[0];
	c[0] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = 20.*hs62_pd[1];
	J[2] = dv[0];
	J[1] = dv[0];
	J[0] = dv[0];
	}
}
#ifdef __cplusplus
	}
#endif
