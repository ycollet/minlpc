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
 fint nvs04_auxcom_[1] = { 0 /* nlc */ };
 fint nvs04_funcom_[6] = {
	2 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real nvs04_boundc_[1+4+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.};

 real nvs04_x0comn_[2] = {
		100.,
		100. };

 static real nvs04_pd[4];
static real nvs04_old_x[2];
static int nvs04_xkind = -1;

 static int
nvs04_xcheck(real *x)
{
	real *x1 = nvs04_old_x, *xe = x + 2;
	errno = 0;
	if (nvs04_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs04_xkind = 0;
	return 1;
	}
 real
nvs04_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[1];
	fint wantfg = *needfg;
	if (nvs04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + 0.6;
	v[1] = v[0] * v[0];
	nvs04_pd[0] = v[0] + v[0];
	v[0] = 0.5 - v[1];
	v[1] = v[0] + x[1];
	nvs04_pd[1] = v[1] * v[1];
	nvs04_pd[2] = v[1] + v[1];
	v[1] = 100. * nvs04_pd[1];
	v[0] = 0.4 - x[0];
	v[2] = v[0] * v[0];
	nvs04_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	;}

	if (wantfg & 2) {
	g[0] = -nvs04_pd[3];
	dv[0] = 100.*nvs04_pd[2];
	g[1] = dv[0];
	dv[0] = -dv[0]*nvs04_pd[0];
	g[0] += dv[0];
	}

	return v[0];
}

 void
nvs04_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
