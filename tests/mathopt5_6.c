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
 fint mathopt5_6_auxcom_[1] = { 0 /* nlc */ };
 fint mathopt5_6_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real mathopt5_6_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-10.,
		5.};

 real mathopt5_6_x0comn_[1] = {
		5. };

 static real mathopt5_6_pd[6];
static real mathopt5_6_old_x[1];
static int mathopt5_6_xkind = -1;

 static int
mathopt5_6_xcheck(real *x)
{
	real *x1 = mathopt5_6_old_x, *xe = x + 1;
	errno = 0;
	if (mathopt5_6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt5_6_xkind = 0;
	return 1;
	}
 real
mathopt5_6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], dv[2], rv;
	fint wantfg = *needfg;
	if (mathopt5_6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	if (x[0] < 0.) {
	v[0] = -x[0];
	mathopt5_6_pd[0] = -1.;
	} else {
	v[0] = x[0];
	mathopt5_6_pd[0] = 1.;
	}
	mathopt5_6_pd[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (mathopt5_6_pd[1] <= 0.) {
	domain_("sqrt'", &mathopt5_6_pd[1], 5L);
	}
	mathopt5_6_pd[2] = 0.5 / mathopt5_6_pd[1];
	v[0] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	mathopt5_6_pd[3] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	mathopt5_6_pd[4] = v[0] * v[0];
	mathopt5_6_pd[5] = v[0] + v[0];
	v[0] = mathopt5_6_pd[1] * mathopt5_6_pd[4];
	rv = v[0] + 0.1*x[0];
	;}

	if (wantfg & 2) {
	dv[0] = mathopt5_6_pd[1]*mathopt5_6_pd[5];
	g[0] = dv[0]*mathopt5_6_pd[3] + 0.1;
	dv[1] = mathopt5_6_pd[4]*mathopt5_6_pd[2];
	g[0] += dv[1]*mathopt5_6_pd[0];
	}

	return rv;
}

 void
mathopt5_6_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
