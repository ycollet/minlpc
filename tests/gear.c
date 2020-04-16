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
 fint gear_auxcom_[1] = { 0 /* nlc */ };
 fint gear_funcom_[6] = {
	4 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real gear_boundc_[1+8+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.};

 real gear_x0comn_[4] = {
		12.,
		12.,
		12.,
		12. };

 static real gear_pd[3];
static real gear_old_x[4];
static int gear_xkind = -1;

 static int
gear_xcheck(real *x)
{
	real *x1 = gear_old_x, *xe = x + 4;
	errno = 0;
	if (gear_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	gear_xkind = 0;
	return 1;
	}
 real
gear_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2];
	fint wantfg = *needfg;
	if (gear_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[1];
	v[1] = x[2] * x[3];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	gear_pd[0] = 1. / v[1];
	gear_pd[1] = -v[2] * gear_pd[0];
	v[1] = 0.14427932477276 - v[2];
	v[2] = v[1] * v[1];
	gear_pd[2] = v[1] + v[1];
	;}

	if (wantfg & 2) {
	gear_pd[2] += gear_pd[2];
	dv[0] = -gear_pd[2]*gear_pd[1];
	dv[1] = -gear_pd[2]*gear_pd[0];
	g[3] = dv[0]*x[2];
	g[2] = dv[0]*x[3];
	g[1] = dv[1]*x[0];
	g[0] = dv[1]*x[1];
	}

	return v[2];
}

 void
gear_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
