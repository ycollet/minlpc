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
 fint rbrock_auxcom_[1] = { 0 /* nlc */ };
 fint rbrock_funcom_[6] = {
	2 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real rbrock_boundc_[1+4+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-10.,
		5.,
		-10.,
		10.};

 real rbrock_x0comn_[2] = {
		-1.2,
		1. };

 static real rbrock_pd[4];
static real rbrock_old_x[2];
static int rbrock_xkind = -1;

 static int
rbrock_xcheck(real *x)
{
	real *x1 = rbrock_old_x, *xe = x + 2;
	errno = 0;
	if (rbrock_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	rbrock_xkind = 0;
	return 1;
	}
 real
rbrock_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2];
	fint wantfg = *needfg;
	if (rbrock_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	rbrock_pd[0] = x[0] + x[0];
	v[1] = x[1] - v[0];
	rbrock_pd[1] = v[1] * v[1];
	rbrock_pd[2] = v[1] + v[1];
	v[1] = 100. * rbrock_pd[1];
	v[0] = 1. - x[0];
	v[2] = v[0] * v[0];
	rbrock_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	;}

	if (wantfg & 2) {
	g[0] = -rbrock_pd[3];
	dv[0] = 100.*rbrock_pd[2];
	dv[1] = -dv[0];
	g[1] = dv[0];
	g[0] += dv[1]*rbrock_pd[0];
	}

	return v[0];
}

 void
rbrock_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
