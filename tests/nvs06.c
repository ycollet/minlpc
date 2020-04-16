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
 fint nvs06_auxcom_[1] = { 0 /* nlc */ };
 fint nvs06_funcom_[6] = {
	2 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real nvs06_boundc_[1+4+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		200.,
		1.,
		200.};

 real nvs06_x0comn_[2] = {
		1.,
		1. };

 static real nvs06_pd[13];
static real nvs06_old_x[2];
static int nvs06_xkind = -1;

 static int
nvs06_xcheck(real *x)
{
	real *x1 = nvs06_old_x, *xe = x + 2;
	errno = 0;
	if (nvs06_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs06_xkind = 0;
	return 1;
	}
 real
nvs06_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[5];
	fint wantfg = *needfg;
	if (nvs06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs06_pd[0] = x[0] * x[0];
	nvs06_pd[1] = x[0] + x[0];
	v[0] = 0.1 * nvs06_pd[0];
	v[1] = x[1] * x[1];
	nvs06_pd[2] = x[1] + x[1];
	v[2] = v[1] + 1.;
	v[1] = x[0] * x[0];
	nvs06_pd[3] = x[0] + x[0];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[3] = v[2] / v[1];
	nvs06_pd[4] = 1. / v[1];
	nvs06_pd[5] = -v[3] * nvs06_pd[4];
	v[3] *= 0.1;
	v[0] += v[3];
	nvs06_pd[6] = x[0] * x[0];
	nvs06_pd[7] = x[0] + x[0];
	nvs06_pd[8] = x[1] * x[1];
	nvs06_pd[9] = x[1] + x[1];
	v[3] = nvs06_pd[6] * nvs06_pd[8];
	v[1] = v[3] + 100.;
	v[3] = x[0] * x[1];
	v[2] = pow(v[3], 4.);
	if (errno) in_trouble2("pow",v[3],4.);
	if (v[3] != 0.) {
	nvs06_pd[10] = 4.*(v[2]/v[3]);
	} else {
	nvs06_pd[10] = 0.;
	}
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[1] / v[2];
	nvs06_pd[11] = 1. / v[2];
	nvs06_pd[12] = -v[3] * nvs06_pd[11];
	v[3] *= 0.1;
	v[0] += v[3];
	v[0] += 1.2;
	;}

	if (wantfg & 2) {
	dv[0] = 0.1*nvs06_pd[12];
	dv[1] = 0.1*nvs06_pd[11];
	dv[0] *= nvs06_pd[10];
	g[1] = dv[0]*x[0];
	g[0] = dv[0]*x[1];
	dv[2] = dv[1]*nvs06_pd[6];
	dv[1] *= nvs06_pd[8];
	g[1] += dv[2]*nvs06_pd[9];
	g[0] += dv[1]*nvs06_pd[7];
	dv[3] = 0.1*nvs06_pd[5];
	dv[4] = 0.1*nvs06_pd[4];
	g[0] += dv[3]*nvs06_pd[3];
	g[1] += dv[4]*nvs06_pd[2];
	g[0] += 0.1*nvs06_pd[1];
	}

	return v[0];
}

 void
nvs06_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
