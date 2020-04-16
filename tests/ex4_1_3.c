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
 fint ex4_1_3_auxcom_[1] = { 0 /* nlc */ };
 fint ex4_1_3_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real ex4_1_3_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.};

 real ex4_1_3_x0comn_[1] = {
		6.325 };

 static real ex4_1_3_pd[5];
static real ex4_1_3_old_x[1];
static int ex4_1_3_xkind = -1;

 static int
ex4_1_3_xcheck(real *x)
{
	real *x1 = ex4_1_3_old_x, *xe = x + 1;
	errno = 0;
	if (ex4_1_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex4_1_3_xkind = 0;
	return 1;
	}
 real
ex4_1_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex4_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex4_1_3_pd[0] = x[0] * x[0];
	ex4_1_3_pd[1] = x[0] + x[0];
	v[0] = -0.0218343 * ex4_1_3_pd[0];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ex4_1_3_pd[2] = 3.*(x[0]*x[0]);
	} else {
	ex4_1_3_pd[2] = 0.;
	}
	v[1] *= 0.998266;
	v[0] += v[1];
	v[1] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex4_1_3_pd[3] = 4.*(v[1]/x[0]);
	} else {
	ex4_1_3_pd[3] = 0.;
	}
	v[1] *= -1.6995;
	v[0] += v[1];
	v[1] = pow(x[0], 5.);
	if (errno) in_trouble2("pow",x[0],5.);
	if (x[0] != 0.) {
	ex4_1_3_pd[4] = 5.*(v[1]/x[0]);
	} else {
	ex4_1_3_pd[4] = 0.;
	}
	v[1] *= 0.2;
	v[0] += v[1];
	rv = v[0] + 8.9248e-05*x[0];
	;}

	if (wantfg & 2) {
	g[0] = 0.2*ex4_1_3_pd[4] + 8.9248e-05;
	g[0] -= 1.6995*ex4_1_3_pd[3];
	g[0] += 0.998266*ex4_1_3_pd[2];
	g[0] -= 0.0218343*ex4_1_3_pd[1];
	}

	return rv;
}

 void
ex4_1_3_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
