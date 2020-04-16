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
 fint st_e11_auxcom_[1] = { 1 /* nlc */ };
 fint st_e11_funcom_[14] = {
	3 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	4 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	4,
	5,

	/* rownos */
	1,
	1,
	2,
	2 };

 real st_e11_boundc_[1+6+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		34.,
		0.,
		300.,
		0.,
		17.,
		-5000.,
		-5000.,
		15000.,
		15000.};

 real st_e11_x0comn_[3] = {
		0.,
		0.,
		0. };

 static real st_e11_pd[2];
static real st_e11_old_x[3];
static int st_e11_xkind = -1;

 static int
st_e11_xcheck(real *x)
{
	real *x1 = st_e11_old_x, *xe = x + 3;
	errno = 0;
	if (st_e11_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e11_xkind = 0;
	return 1;
	}
 real
st_e11_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (st_e11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 0.6);
	if (errno) in_trouble2("pow",x[0],0.6);
	if (x[0] > 0.) {
	st_e11_pd[0] = 0.6*(v[0]/x[0]);
	} else if (0.6 > 1.) {
	st_e11_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6);
	}
	v[0] *= 35.;
	v[1] = pow(x[2], 0.6);
	if (errno) in_trouble2("pow",x[2],0.6);
	if (x[2] > 0.) {
	st_e11_pd[1] = 0.6*(v[1]/x[2]);
	} else if (0.6 > 1.) {
	st_e11_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.6);
	}
	v[1] *= 35.;
	v[2] = v[0] + v[1];
	;}

	if (wantfg & 2) {
	g[2] = 35.*st_e11_pd[1];
	g[0] = 35.*st_e11_pd[0];
	}

	return v[2];
}

 void
st_e11_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (st_e11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	v[1] = -v[0];
	t1 = v[1] + 600.*x[0];
	t1 += -50.*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 50.*x[1];
	t1 += 600.*x[2];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = -x[0] + -50.;
	J[0] = -x[1] + 600.;

   /*** derivatives for constraint 2 ***/

	J[2] = 50.;
	J[3] = 600.;
	}
}
#ifdef __cplusplus
	}
#endif
