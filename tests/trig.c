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
 fint trig_auxcom_[1] = { 1 /* nlc */ };
 fint trig_funcom_[9] = {
	1 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	1 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,

	/* rownos */
	1 };

 real trig_boundc_[1+2+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-2.,
		5.,
		-1.7e308,
		0.};

 real trig_x0comn_[1] = {
		1. };

 static real trig_pd[6];
static real trig_old_x[1];
static int trig_xkind = -1;

 static int
trig_xcheck(real *x)
{
	real *x1 = trig_old_x, *xe = x + 1;
	errno = 0;
	if (trig_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	trig_xkind = 0;
	return 1;
	}
 real
trig_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (trig_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 11. * x[0];
	v[1] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	trig_pd[2] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = 13. * x[0];
	v[2] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	trig_pd[3] = -sin(v[0]);
	v[1] += v[2];
	v[2] = 17. * x[0];
	v[0] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	trig_pd[4] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = 19. * x[0];
	v[0] = cos(v[2]);
	if (errno) in_trouble("cos",v[2]);
	trig_pd[5] = -sin(v[2]);
	v[2] = -v[0];
	v[1] += v[2];
	;}

	if (wantfg & 2) {
	g[0] = -trig_pd[5]*19.;
	g[0] -= trig_pd[4]*17.;
	g[0] += trig_pd[3]*13.;
	g[0] += trig_pd[2]*11.;
	}

	return v[1];
}

 void
trig_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (trig_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	trig_pd[0] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	trig_pd[1] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	v[0] = 5. * trig_pd[0];
	t1 = v[0] + -x[0];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 5.*trig_pd[1] + -1.;
	}
}
#ifdef __cplusplus
	}
#endif
