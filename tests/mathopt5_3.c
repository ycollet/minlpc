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
 fint mathopt5_3_auxcom_[1] = { 0 /* nlc */ };
 fint mathopt5_3_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real mathopt5_3_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.};

 real mathopt5_3_x0comn_[1] = {
		3. };

 static real mathopt5_3_pd[6];
static real mathopt5_3_old_x[1];
static int mathopt5_3_xkind = -1;

 static int
mathopt5_3_xcheck(real *x)
{
	real *x1 = mathopt5_3_old_x, *xe = x + 1;
	errno = 0;
	if (mathopt5_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt5_3_xkind = 0;
	return 1;
	}
 real
mathopt5_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2];
	fint wantfg = *needfg;
	if (mathopt5_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	mathopt5_3_pd[0] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	mathopt5_3_pd[1] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	v[0] = cos(x[0]);
	if (errno) in_trouble("cos",x[0]);
	mathopt5_3_pd[2] = -sin(x[0]);
	v[1] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	mathopt5_3_pd[3] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	v[2] = v[0] - v[1];
	mathopt5_3_pd[4] = v[2] * v[2];
	mathopt5_3_pd[5] = v[2] + v[2];
	v[2] = mathopt5_3_pd[0] * mathopt5_3_pd[4];
	;}

	if (wantfg & 2) {
	dv[0] = mathopt5_3_pd[0]*mathopt5_3_pd[5];
	dv[1] = -dv[0];
	g[0] = dv[1]*mathopt5_3_pd[3];
	g[0] += dv[0]*mathopt5_3_pd[2];
	g[0] += mathopt5_3_pd[4]*mathopt5_3_pd[1];
	}

	return v[2];
}

 void
mathopt5_3_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
