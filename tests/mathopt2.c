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
 fint mathopt2_auxcom_[1] = { 1 /* nlc */ };
 fint mathopt2_funcom_[17] = {
	2 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real mathopt2_boundc_[1+4+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		2.};

 real mathopt2_x0comn_[2] = {
		10.,
		-10. };

 static real mathopt2_pd[6];
static real mathopt2_old_x[2];
static int mathopt2_xkind = -1;

 static int
mathopt2_xcheck(real *x)
{
	real *x1 = mathopt2_old_x, *xe = x + 2;
	errno = 0;
	if (mathopt2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt2_xkind = 0;
	return 1;
	}
 real
mathopt2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2];
	fint wantfg = *needfg;
	if (mathopt2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	mathopt2_pd[0] = x[0] * x[0];
	mathopt2_pd[1] = x[0] + x[0];
	v[0] = 2. * mathopt2_pd[0];
	v[1] = v[0] - x[1];
	v[0] = v[1] * v[1];
	mathopt2_pd[2] = v[1] + v[1];
	mathopt2_pd[3] = x[0] * x[0];
	mathopt2_pd[4] = x[0] + x[0];
	v[1] = -6. * mathopt2_pd[3];
	v[2] = x[1] + v[1];
	v[1] = v[2] * v[2];
	mathopt2_pd[5] = v[2] + v[2];
	v[2] = v[0] + v[1];
	;}

	if (wantfg & 2) {
	dv[0] = mathopt2_pd[5];
	g[1] = mathopt2_pd[5];
	dv[0] = -dv[0]*6.;
	g[0] = dv[0]*mathopt2_pd[4];
	g[1] -= mathopt2_pd[2];
	dv[1] = mathopt2_pd[2]*2.;
	g[0] += dv[1]*mathopt2_pd[1];
	}

	return v[2];
}

 void
mathopt2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (mathopt2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[0];
	t1 += -10.*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += -3.*x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += x[1];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = -x[0] + -10.;
	J[0] = -x[1] + 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[5] = -3.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[6] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[7] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
