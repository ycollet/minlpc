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
 fint ex4_1_7_auxcom_[1] = { 0 /* nlc */ };
 fint ex4_1_7_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real ex4_1_7_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-5.,
		5.};

 real ex4_1_7_x0comn_[1] = {
		-1. };

 static real ex4_1_7_pd[4];
static real ex4_1_7_old_x[1];
static int ex4_1_7_xkind = -1;

 static int
ex4_1_7_xcheck(real *x)
{
	real *x1 = ex4_1_7_old_x, *xe = x + 1;
	errno = 0;
	if (ex4_1_7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex4_1_7_xkind = 0;
	return 1;
	}
 real
ex4_1_7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex4_1_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex4_1_7_pd[0] = 4.*(v[0]/x[0]);
	} else {
	ex4_1_7_pd[0] = 0.;
	}
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ex4_1_7_pd[1] = 3.*(x[0]*x[0]);
	} else {
	ex4_1_7_pd[1] = 0.;
	}
	v[1] *= -3.;
	v[0] += v[1];
	ex4_1_7_pd[2] = x[0] * x[0];
	ex4_1_7_pd[3] = x[0] + x[0];
	v[1] = -1.5 * ex4_1_7_pd[2];
	v[0] += v[1];
	rv = v[0] + 10.*x[0];
	;}

	if (wantfg & 2) {
	g[0] = -1.5*ex4_1_7_pd[3] + 10.;
	g[0] -= 3.*ex4_1_7_pd[1];
	g[0] += ex4_1_7_pd[0];
	}

	return rv;
}

 void
ex4_1_7_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
