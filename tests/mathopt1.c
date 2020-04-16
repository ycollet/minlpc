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
 fint mathopt1_auxcom_[1] = { 1 /* nlc */ };
 fint mathopt1_funcom_[13] = {
	2 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	4 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,

	/* rownos */
	1,
	2,
	1,
	2 };

 real mathopt1_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-10.,
		20.,
		-15.,
		20.,
		0.,
		0.,
		-1.7e308,
		25.};

 real mathopt1_x0comn_[2] = {
		8.,
		-14. };

 static real mathopt1_pd[4];
static real mathopt1_old_x[2];
static int mathopt1_xkind = -1;

 static int
mathopt1_xcheck(real *x)
{
	real *x1 = mathopt1_old_x, *xe = x + 2;
	errno = 0;
	if (mathopt1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt1_xkind = 0;
	return 1;
	}
 real
mathopt1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[1];
	fint wantfg = *needfg;
	if (mathopt1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	mathopt1_pd[0] = x[0] + x[0];
	v[1] = v[0] - x[1];
	mathopt1_pd[1] = v[1] * v[1];
	mathopt1_pd[2] = v[1] + v[1];
	v[1] = 10. * mathopt1_pd[1];
	v[0] = x[0] + -1.;
	v[2] = v[0] * v[0];
	mathopt1_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	;}

	if (wantfg & 2) {
	g[0] = mathopt1_pd[3];
	dv[0] = 10.*mathopt1_pd[2];
	g[1] = -dv[0];
	g[0] += dv[0]*mathopt1_pd[0];
	}

	return v[0];
}

 void
mathopt1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (mathopt1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 3.*x[0];
	t1 += 4.*x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[2] = -x[0];
	J[0] = -x[1] + 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 3.;
	J[3] = 4.;
	}
}
#ifdef __cplusplus
	}
#endif
