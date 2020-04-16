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
 fint nvs16_auxcom_[1] = { 0 /* nlc */ };
 fint nvs16_funcom_[6] = {
	2 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real nvs16_boundc_[1+4+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.};

 real nvs16_x0comn_[2] = {
		1.,
		1. };

 static real nvs16_pd[8];
static real nvs16_old_x[2];
static int nvs16_xkind = -1;

 static int
nvs16_xcheck(real *x)
{
	real *x1 = nvs16_old_x, *xe = x + 2;
	errno = 0;
	if (nvs16_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs16_xkind = 0;
	return 1;
	}
 real
nvs16_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[6], dv[3];
	fint wantfg = *needfg;
	if (nvs16_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs16_pd[0] = 1. - x[1];
	v[1] = x[0] * nvs16_pd[0];
	v[2] = 1.5 - v[1];
	v[1] = v[2] * v[2];
	nvs16_pd[1] = v[2] + v[2];
	v[2] = x[1] * x[1];
	nvs16_pd[2] = x[1] + x[1];
	nvs16_pd[3] = 1. - v[2];
	v[2] = nvs16_pd[3] * x[0];
	v[4] = 2.25 - v[2];
	v[2] = v[4] * v[4];
	nvs16_pd[4] = v[4] + v[4];
	v[1] += v[2];
	v[2] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	nvs16_pd[5] = 3.*(x[1]*x[1]);
	} else {
	nvs16_pd[5] = 0.;
	}
	nvs16_pd[6] = 1. - v[2];
	v[2] = nvs16_pd[6] * x[0];
	v[5] = 2.625 - v[2];
	v[2] = v[5] * v[5];
	nvs16_pd[7] = v[5] + v[5];
	v[1] += v[2];
	;}

	if (wantfg & 2) {
	nvs16_pd[7] += nvs16_pd[7];
	g[0] = -nvs16_pd[7]*nvs16_pd[6];
	dv[0] = -nvs16_pd[7]*x[0];
	g[1] = -dv[0]*nvs16_pd[5];
	nvs16_pd[4] += nvs16_pd[4];
	g[0] -= nvs16_pd[4]*nvs16_pd[3];
	dv[1] = -nvs16_pd[4]*x[0];
	g[1] -= dv[1]*nvs16_pd[2];
	nvs16_pd[1] += nvs16_pd[1];
	dv[2] = -nvs16_pd[1]*x[0];
	g[0] -= nvs16_pd[1]*nvs16_pd[0];
	g[1] -= dv[2];
	}

	return v[1];
}

 void
nvs16_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
