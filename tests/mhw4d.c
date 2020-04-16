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
 fint mhw4d_auxcom_[1] = { 3 /* nlc */ };
 fint mhw4d_funcom_[20] = {
	5 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	8,
	9,

	/* rownos */
	1,
	3,
	1,
	2,
	1,
	2,
	3,
	2 };

 real mhw4d_boundc_[1+10+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		6.24264068711929,
		6.24264068711929,
		0.82842712474619,
		0.82842712474619,
		2.,
		2.};

 real mhw4d_x0comn_[5] = {
		-1.,
		2.,
		1.,
		-2.,
		-2. };

 static real mhw4d_pd[8];
static real mhw4d_old_x[5];
static int mhw4d_xkind = -1;

 static int
mhw4d_xcheck(real *x)
{
	real *x1 = mhw4d_old_x, *xe = x + 5;
	errno = 0;
	if (mhw4d_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mhw4d_xkind = 0;
	return 1;
	}
 real
mhw4d_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (mhw4d_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -1.;
	v[1] = v[0] * v[0];
	mhw4d_pd[3] = v[0] + v[0];
	v[0] = x[0] - x[1];
	v[2] = v[0] * v[0];
	mhw4d_pd[4] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[1] - x[2];
	v[0] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	mhw4d_pd[5] = 3.*(v[2]*v[2]);
	} else {
	mhw4d_pd[5] = 0.;
	}
	v[1] += v[0];
	v[0] = x[2] - x[4];
	v[2] = pow(v[0], 4.);
	if (errno) in_trouble2("pow",v[0],4.);
	if (v[0] != 0.) {
	mhw4d_pd[6] = 4.*(v[2]/v[0]);
	} else {
	mhw4d_pd[6] = 0.;
	}
	v[1] += v[2];
	v[2] = x[4] - x[3];
	v[0] = pow(v[2], 4.);
	if (errno) in_trouble2("pow",v[2],4.);
	if (v[2] != 0.) {
	mhw4d_pd[7] = 4.*(v[0]/v[2]);
	} else {
	mhw4d_pd[7] = 0.;
	}
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	g[3] = -mhw4d_pd[7];
	g[4] = mhw4d_pd[7];
	g[4] -= mhw4d_pd[6];
	g[2] = mhw4d_pd[6];
	g[2] -= mhw4d_pd[5];
	g[1] = mhw4d_pd[5];
	g[1] -= mhw4d_pd[4];
	g[0] = mhw4d_pd[4];
	g[0] += mhw4d_pd[3];
	}

	return v[1];
}

 void
mhw4d_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (mhw4d_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[1] * x[1];
	mhw4d_pd[0] = x[1] + x[1];
	v[1] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	mhw4d_pd[1] = 3.*(x[2]*x[2]);
	} else {
	mhw4d_pd[1] = 0.;
	}
	v[2] = v[0] + v[1];
	t1 = v[2] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] * x[2];
	mhw4d_pd[2] = x[2] + x[2];
	v[1] = -v[0];
	t1 = v[1] + x[1];
	t1 += x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[3];
	c[2] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = mhw4d_pd[1];
	J[2] = mhw4d_pd[0];
	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[5] = -mhw4d_pd[2];
	J[3] = 1.;
	J[7] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = x[0];
	J[1] = x[3];
	}
}
#ifdef __cplusplus
	}
#endif
