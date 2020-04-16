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
 fint ex8_1_6_auxcom_[1] = { 0 /* nlc */ };
 fint ex8_1_6_funcom_[6] = {
	2 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real ex8_1_6_boundc_[1+4+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308};

 real ex8_1_6_x0comn_[2] = {
		0.,
		0. };

 static real ex8_1_6_pd[9];
static real ex8_1_6_old_x[2];
static int ex8_1_6_xkind = -1;

 static int
ex8_1_6_xcheck(real *x)
{
	real *x1 = ex8_1_6_old_x, *xe = x + 2;
	errno = 0;
	if (ex8_1_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_1_6_xkind = 0;
	return 1;
	}
 real
ex8_1_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[6];
	fint wantfg = *needfg;
	if (ex8_1_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -4.;
	v[1] = v[0] * v[0];
	ex8_1_6_pd[0] = v[0] + v[0];
	v[1] += 0.1;
	v[0] = x[1] + -4.;
	v[2] = v[0] * v[0];
	ex8_1_6_pd[1] = v[0] + v[0];
	v[1] += v[2];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = -1. / v[1];
	ex8_1_6_pd[2] = -v[2] / v[1];
	v[1] = x[0] + -1.;
	v[0] = v[1] * v[1];
	ex8_1_6_pd[3] = v[1] + v[1];
	v[0] += 0.2;
	v[1] = x[1] + -1.;
	v[3] = v[1] * v[1];
	ex8_1_6_pd[4] = v[1] + v[1];
	v[0] += v[3];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = 1. / v[0];
	ex8_1_6_pd[5] = -v[3] / v[0];
	v[0] = -v[3];
	v[2] += v[0];
	v[0] = x[0] + -8.;
	v[3] = v[0] * v[0];
	ex8_1_6_pd[6] = v[0] + v[0];
	v[3] += 0.2;
	v[0] = x[1] + -8.;
	v[1] = v[0] * v[0];
	ex8_1_6_pd[7] = v[0] + v[0];
	v[3] += v[1];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[1] = 1. / v[3];
	ex8_1_6_pd[8] = -v[1] / v[3];
	v[3] = -v[1];
	v[2] += v[3];
	;}

	if (wantfg & 2) {
	dv[0] = -ex8_1_6_pd[8];
	dv[0] *= ex8_1_6_pd[7];
	g[1] = dv[0];
	dv[1] = -ex8_1_6_pd[8]*ex8_1_6_pd[6];
	g[0] = dv[1];
	dv[2] = -ex8_1_6_pd[5];
	dv[2] *= ex8_1_6_pd[4];
	g[1] += dv[2];
	dv[3] = -ex8_1_6_pd[5]*ex8_1_6_pd[3];
	g[0] += dv[3];
	dv[4] = ex8_1_6_pd[2];
	dv[4] *= ex8_1_6_pd[1];
	g[1] += dv[4];
	dv[5] = ex8_1_6_pd[2]*ex8_1_6_pd[0];
	g[0] += dv[5];
	}

	return v[2];
}

 void
ex8_1_6_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
