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
 fint mathopt5_7_auxcom_[1] = { 0 /* nlc */ };
 fint mathopt5_7_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real mathopt5_7_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		8.};

 real mathopt5_7_x0comn_[1] = {
		2. };

 static real mathopt5_7_pd[5];
static real mathopt5_7_old_x[1];
static int mathopt5_7_xkind = -1;

 static int
mathopt5_7_xcheck(real *x)
{
	real *x1 = mathopt5_7_old_x, *xe = x + 1;
	errno = 0;
	if (mathopt5_7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt5_7_xkind = 0;
	return 1;
	}
 real
mathopt5_7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (mathopt5_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	mathopt5_7_pd[0] = x[0] * x[0];
	mathopt5_7_pd[1] = x[0] + x[0];
	v[0] = -0.00021834300000000002 * mathopt5_7_pd[0];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	mathopt5_7_pd[2] = 3.*(x[0]*x[0]);
	} else {
	mathopt5_7_pd[2] = 0.;
	}
	v[1] *= 0.00998266;
	v[0] += v[1];
	v[1] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	mathopt5_7_pd[3] = 4.*(v[1]/x[0]);
	} else {
	mathopt5_7_pd[3] = 0.;
	}
	v[1] *= -0.016995;
	v[0] += v[1];
	v[1] = pow(x[0], 5.);
	if (errno) in_trouble2("pow",x[0],5.);
	if (x[0] != 0.) {
	mathopt5_7_pd[4] = 5.*(v[1]/x[0]);
	} else {
	mathopt5_7_pd[4] = 0.;
	}
	v[1] *= 0.002;
	v[0] += v[1];
	rv = v[0] + -8.9248e-07*x[0];
	;}

	if (wantfg & 2) {
	g[0] = 0.002*mathopt5_7_pd[4] + -8.9248e-07;
	g[0] -= 0.016995*mathopt5_7_pd[3];
	g[0] += 0.00998266*mathopt5_7_pd[2];
	g[0] -= 0.00021834300000000002*mathopt5_7_pd[1];
	}

	return rv;
}

 void
mathopt5_7_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
