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
 fint st_e41_auxcom_[1] = { 2 /* nlc */ };
 fint st_e41_funcom_[19] = {
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

 real st_e41_boundc_[1+8+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		1.,
		0.5,
		1.,
		0.5,
		1.,
		0.5,
		1.,
		-1.7e308,
		0.1,
		-1.7e308,
		0.};

 real st_e41_x0comn_[4] = {
		0.5,
		0.5,
		0.5,
		0.5 };

 static real st_e41_pd[26];
static real st_e41_old_x[4];
static int st_e41_xkind = -1;

 static int
st_e41_xcheck(real *x)
{
	real *x1 = st_e41_old_x, *xe = x + 4;
	errno = 0;
	if (st_e41_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e41_xkind = 0;
	return 1;
	}
 real
st_e41_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (st_e41_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 0.6);
	if (errno) in_trouble2("pow",x[0],0.6);
	if (x[0] > 0.) {
	st_e41_pd[22] = 0.6*(v[0]/x[0]);
	} else if (0.6 > 1.) {
	st_e41_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.6);
	}
	v[0] *= 200.;
	v[1] = pow(x[1], 0.6);
	if (errno) in_trouble2("pow",x[1],0.6);
	if (x[1] > 0.) {
	st_e41_pd[23] = 0.6*(v[1]/x[1]);
	} else if (0.6 > 1.) {
	st_e41_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.6);
	}
	v[1] *= 200.;
	v[0] += v[1];
	v[1] = pow(x[2], 0.6);
	if (errno) in_trouble2("pow",x[2],0.6);
	if (x[2] > 0.) {
	st_e41_pd[24] = 0.6*(v[1]/x[2]);
	} else if (0.6 > 1.) {
	st_e41_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.6);
	}
	v[1] *= 200.;
	v[0] += v[1];
	v[1] = pow(x[3], 0.6);
	if (errno) in_trouble2("pow",x[3],0.6);
	if (x[3] > 0.) {
	st_e41_pd[25] = 0.6*(v[1]/x[3]);
	} else if (0.6 > 1.) {
	st_e41_pd[25] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.6);
	}
	v[1] *= 300.;
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[3] = 300.*st_e41_pd[25];
	g[2] = 200.*st_e41_pd[24];
	g[1] = 200.*st_e41_pd[23];
	g[0] = 200.*st_e41_pd[22];
	}

	return v[0];
}

 void
st_e41_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7], dv[4];
	fint wantfg = *needfg;
	if (st_e41_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 1. - x[0];
	st_e41_pd[0] = v[0] * v[0];
	st_e41_pd[1] = v[0] + v[0];
	st_e41_pd[2] = st_e41_pd[0] * x[2];
	v[0] = 1. - x[3];
	st_e41_pd[3] = v[0] * v[0];
	st_e41_pd[4] = v[0] + v[0];
	v[0] = st_e41_pd[2] * st_e41_pd[3];
	st_e41_pd[6] = 1. - x[0];
	st_e41_pd[5] = 1. - x[3];
	v[3] = st_e41_pd[6] * st_e41_pd[5];
	st_e41_pd[7] = 1. - v[3];
	v[3] = st_e41_pd[7] * x[1];
	v[5] = 1. - v[3];
	st_e41_pd[8] = v[5] * v[5];
	st_e41_pd[9] = v[5] + v[5];
	st_e41_pd[10] = 1. - x[2];
	v[3] = st_e41_pd[8] * st_e41_pd[10];
	v[6] = v[0] + v[3];
	c[0] = v[6];

  /***  constraint 2  ***/

	st_e41_pd[12] = 1. - x[0];
	st_e41_pd[11] = 1. - x[3];
	v[2] = st_e41_pd[12] * st_e41_pd[11];
	st_e41_pd[13] = 1. - v[2];
	v[2] = st_e41_pd[13] * x[1];
	v[4] = 1. - v[2];
	st_e41_pd[14] = v[4] * v[4];
	st_e41_pd[15] = v[4] + v[4];
	st_e41_pd[16] = 1. - x[2];
	v[2] = st_e41_pd[14] * st_e41_pd[16];
	v[5] = -v[2];
	v[2] = 1. - x[0];
	st_e41_pd[17] = v[2] * v[2];
	st_e41_pd[18] = v[2] + v[2];
	st_e41_pd[19] = st_e41_pd[17] * x[2];
	v[2] = 1. - x[3];
	st_e41_pd[20] = v[2] * v[2];
	st_e41_pd[21] = v[2] + v[2];
	v[2] = st_e41_pd[19] * st_e41_pd[20];
	v[6] = v[5] - v[2];
	c[1] = v[6];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = -st_e41_pd[8];
	dv[0] = st_e41_pd[10]*st_e41_pd[9];
	J[2] = -dv[0]*st_e41_pd[7];
	dv[0] = -dv[0]*x[1];
	dv[1] = -dv[0]*st_e41_pd[6];
	dv[0] = -dv[0]*st_e41_pd[5];
	J[6] = -dv[1];
	J[0] = -dv[0];
	dv[2] = st_e41_pd[2]*st_e41_pd[4];
	J[6] -= dv[2];
	J[4] += st_e41_pd[3]*st_e41_pd[0];
	dv[3] = st_e41_pd[3]*x[2];
	dv[3] *= st_e41_pd[1];
	J[0] -= dv[3];

   /*** derivatives for constraint 2 ***/

	dv[0] = -st_e41_pd[19]*st_e41_pd[21];
	J[7] = -dv[0];
	J[5] = -st_e41_pd[20]*st_e41_pd[17];
	dv[1] = -st_e41_pd[20]*x[2];
	dv[1] *= st_e41_pd[18];
	J[1] = -dv[1];
	J[5] += st_e41_pd[14];
	dv[2] = -st_e41_pd[16]*st_e41_pd[15];
	J[3] = -dv[2]*st_e41_pd[13];
	dv[2] = -dv[2]*x[1];
	dv[3] = -dv[2]*st_e41_pd[12];
	dv[2] = -dv[2]*st_e41_pd[11];
	J[7] -= dv[3];
	J[1] -= dv[2];
	}
}
#ifdef __cplusplus
	}
#endif
