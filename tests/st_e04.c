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
 fint st_e04_auxcom_[1] = { 2 /* nlc */ };
 fint st_e04_funcom_[16] = {
	4 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	5 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	5,
	6,

	/* rownos */
	1,
	1,
	1,
	2,
	2 };

 real st_e04_boundc_[1+8+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		15.1,
		0.,
		5371.,
		-459.67,
		80.,
		14.7,
		94.2,
		11520.,
		1.7e308,
		0.,
		0.};

 real st_e04_x0comn_[4] = {
		0.,
		0.,
		0.,
		14.7 };

 static real st_e04_pd[4];
static real st_e04_old_x[4];
static int st_e04_xkind = -1;

 static int
st_e04_xcheck(real *x)
{
	real *x1 = st_e04_old_x, *xe = x + 4;
	errno = 0;
	if (st_e04_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e04_xkind = 0;
	return 1;
	}
 real
st_e04_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[1], rv;
	fint wantfg = *needfg;
	if (st_e04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 0.9);
	if (errno) in_trouble2("pow",x[0],0.9);
	if (x[0] > 0.) {
	st_e04_pd[2] = 0.9*(v[0]/x[0]);
	} else if (0.9 > 1.) {
	st_e04_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.9);
	}
	v[0] *= 400.;
	v[1] = x[3] + -14.7;
	v[2] = pow(v[1], 1.2);
	if (errno) in_trouble2("pow",v[1],1.2);
	if (v[1] > 0.) {
	st_e04_pd[3] = 1.2*(v[2]/v[1]);
	} else if (1.2 > 1.) {
	st_e04_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],1.2);
	}
	v[2] *= 22.;
	v[0] += v[2];
	v[0] += 1000.;
	rv = v[0] + x[1];
	;}

	if (wantfg & 2) {
	dv[0] = 22.*st_e04_pd[3];
	g[3] = dv[0];
	g[0] = 400.*st_e04_pd[2];
	g[1] = 1.;
	}

	return rv;
}

 void
st_e04_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (st_e04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[1] * x[0];
	t1 = v[0] + 144.*x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] + 460.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = 3950. / v[0];
	st_e04_pd[0] = -v[1] / v[0];
	v[0] = 11.86 - v[1];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e04_pd[1] = v[1];
	v[0] = -v[1];
	t1 = v[0] + x[3];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = x[1];
	J[1] = x[0];
	J[2] = 144.;

   /*** derivatives for constraint 2 ***/

	st_e04_pd[1] += st_e04_pd[1];
	dv[0] = st_e04_pd[1]*st_e04_pd[0];
	J[3] = dv[0];
	J[4] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
