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
 fint sample_auxcom_[1] = { 2 /* nlc */ };
 fint sample_funcom_[19] = {
	4 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,

	/* rownos */
	1,
	2,
	1,
	2,
	1,
	2,
	1,
	2 };

 real sample_boundc_[1+8+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		100.,
		400000.,
		100.,
		300000.,
		100.,
		200000.,
		100.,
		100000.,
		-1.7e308,
		0.0401,
		-1.7e308,
		0.010085};

 real sample_x0comn_[4] = {
		200.,
		200.,
		200.,
		200. };

 static real sample_pd[8];
static real sample_old_x[4];
static int sample_xkind = -1;

 static int
sample_xcheck(real *x)
{
	real *x1 = sample_old_x, *xe = x + 4;
	errno = 0;
	if (sample_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sample_xkind = 0;
	return 1;
	}
 real
sample_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sample_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += x[2];
	rv += x[3];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[2] = 1.;
	g[3] = 1.;
	}

	return rv;
}

 void
sample_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	fint wantfg = *needfg;
	if (sample_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 4. / x[0];
	sample_pd[0] = -v[0] / x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = 2.25 / x[1];
	sample_pd[1] = -v[1] / x[1];
	v[0] += v[1];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[1] = 1. / x[2];
	sample_pd[2] = -v[1] / x[2];
	v[0] += v[1];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = 0.25 / x[3];
	sample_pd[3] = -v[1] / x[3];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 0.16 / x[0];
	sample_pd[4] = -v[0] / x[0];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = 0.36 / x[1];
	sample_pd[5] = -v[1] / x[1];
	v[0] += v[1];
	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[1] = 0.64 / x[2];
	sample_pd[6] = -v[1] / x[2];
	v[0] += v[1];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = 0.64 / x[3];
	sample_pd[7] = -v[1] / x[3];
	v[0] += v[1];
	c[1] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = sample_pd[3];
	J[4] = sample_pd[2];
	J[2] = sample_pd[1];
	J[0] = sample_pd[0];

   /*** derivatives for constraint 2 ***/

	J[7] = sample_pd[7];
	J[5] = sample_pd[6];
	J[3] = sample_pd[5];
	J[1] = sample_pd[4];
	}
}
#ifdef __cplusplus
	}
#endif
