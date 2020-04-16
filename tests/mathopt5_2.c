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
 fint mathopt5_2_auxcom_[1] = { 0 /* nlc */ };
 fint mathopt5_2_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real mathopt5_2_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-5.,
		5.};

 real mathopt5_2_x0comn_[1] = {
		2. };

 static real mathopt5_2_pd[2];
static real mathopt5_2_old_x[1];
static int mathopt5_2_xkind = -1;

 static int
mathopt5_2_xcheck(real *x)
{
	real *x1 = mathopt5_2_old_x, *xe = x + 1;
	errno = 0;
	if (mathopt5_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt5_2_xkind = 0;
	return 1;
	}
 real
mathopt5_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (mathopt5_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	mathopt5_2_pd[0] = x[0] + x[0];
	v[1] = 18. * x[0];
	v[2] = cos(v[1]);
	if (errno) in_trouble("cos",v[1]);
	mathopt5_2_pd[1] = -sin(v[1]);
	v[1] = v[0] - v[2];
	;}

	if (wantfg & 2) {
	g[0] = -mathopt5_2_pd[1]*18.;
	g[0] += mathopt5_2_pd[0];
	}

	return v[1];
}

 void
mathopt5_2_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
