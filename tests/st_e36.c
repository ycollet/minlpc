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
 fint st_e36_auxcom_[1] = { 2 /* nlc */ };
 fint st_e36_funcom_[13] = {
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

 real st_e36_boundc_[1+4+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		3.,
		5.5,
		15.,
		25.,
		0.,
		0.,
		-1.7e308,
		1.};

 real st_e36_x0comn_[2] = {
		3.,
		15. };

 static real st_e36_pd[24];
static real st_e36_old_x[2];
static int st_e36_xkind = -1;

 static int
st_e36_xcheck(real *x)
{
	real *x1 = st_e36_old_x, *xe = x + 2;
	errno = 0;
	if (st_e36_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e36_xkind = 0;
	return 1;
	}
 real
st_e36_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_e36_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e36_pd[20] = x[0] * x[0];
	st_e36_pd[21] = x[0] + x[0];
	v[0] = 2. * st_e36_pd[20];
	v[1] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	st_e36_pd[22] = 3.*(x[1]*x[1]);
	} else {
	st_e36_pd[22] = 0.;
	}
	v[1] *= 0.008;
	v[0] += v[1];
	st_e36_pd[23] = 3.2 * x[0];
	v[1] = st_e36_pd[23] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	rv = v[0] + -2.*x[1];
	;}

	if (wantfg & 2) {
	g[1] = -st_e36_pd[23] + -2.;
	g[0] = -x[1]*3.2;
	g[1] += 0.008*st_e36_pd[22];
	g[0] += 2.*st_e36_pd[21];
	}

	return rv;
}

 void
st_e36_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7], dv[15];
	real t1;
	fint wantfg = *needfg;
	if (st_e36_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e36_pd[0] = x[0] * x[0];
	st_e36_pd[1] = x[0] + x[0];
	st_e36_pd[5] = st_e36_pd[0] + -11.;
	v[1] = -6. * x[0];
	st_e36_pd[5] += v[1];
	v[1] = 0.8 * x[1];
	st_e36_pd[5] += v[1];
	v[1] = 3.25 * x[0];
	v[2] = -0.62 * x[1];
	v[3] = v[1] + v[2];
	v[2] = v[3] * v[3];
	st_e36_pd[2] = v[3] + v[3];
	v[3] = 0.2 * x[1];
	v[3] += -6.35;
	v[3] += x[0];
	v[1] = v[3] * v[3];
	st_e36_pd[3] = v[3] + v[3];
	st_e36_pd[4] = v[2] + v[1];
	st_e36_pd[6] = st_e36_pd[5] * st_e36_pd[4];
	v[1] = 3.55 * x[0];
	v[2] = -0.66 * x[1];
	v[4] = v[1] + v[2];
	v[2] = v[4] * v[4];
	st_e36_pd[7] = v[4] + v[4];
	v[4] = 0.2 * x[1];
	v[4] += -6.85;
	v[4] += x[0];
	v[1] = v[4] * v[4];
	st_e36_pd[8] = v[4] + v[4];
	st_e36_pd[9] = v[2] + v[1];
	st_e36_pd[10] = st_e36_pd[6] * st_e36_pd[9];
	v[1] = 3.6 * x[0];
	v[2] = -0.7 * x[1];
	v[5] = v[1] + v[2];
	v[2] = v[5] * v[5];
	st_e36_pd[11] = v[5] + v[5];
	v[5] = 0.2 * x[1];
	v[5] += -7.1;
	v[5] += x[0];
	v[1] = v[5] * v[5];
	st_e36_pd[12] = v[5] + v[5];
	st_e36_pd[13] = v[2] + v[1];
	st_e36_pd[14] = st_e36_pd[10] * st_e36_pd[13];
	v[1] = 3.8 * x[0];
	v[2] = -0.82 * x[1];
	v[6] = v[1] + v[2];
	v[2] = v[6] * v[6];
	st_e36_pd[15] = v[6] + v[6];
	v[6] = 0.2 * x[1];
	v[6] += -7.9;
	v[6] += x[0];
	v[1] = v[6] * v[6];
	st_e36_pd[16] = v[6] + v[6];
	st_e36_pd[17] = v[2] + v[1];
	v[1] = st_e36_pd[14] * st_e36_pd[17];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = x[0] + -3.;
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e36_pd[18] = v[1];
	st_e36_pd[19] = 0.2 * x[0];
	v[0] = st_e36_pd[19] * x[1];
	v[2] = v[1] - v[0];
	t1 = v[2] + 0.6*x[1];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = st_e36_pd[14];
	dv[0] *= st_e36_pd[16];
	J[0] = dv[0];
	J[2] = dv[0]*0.2;
	dv[1] = st_e36_pd[14]*st_e36_pd[15];
	dv[2] = dv[1];
	J[2] -= dv[2]*0.82;
	J[0] += dv[1]*3.8;
	dv[3] = st_e36_pd[17]*st_e36_pd[10];
	dv[4] = st_e36_pd[17]*st_e36_pd[13];
	dv[5] = dv[3];
	dv[5] *= st_e36_pd[12];
	J[0] += dv[5];
	J[2] += dv[5]*0.2;
	dv[3] *= st_e36_pd[11];
	dv[6] = dv[3];
	J[2] -= dv[6]*0.7;
	J[0] += dv[3]*3.6;
	dv[7] = dv[4]*st_e36_pd[6];
	dv[4] *= st_e36_pd[9];
	dv[8] = dv[7];
	dv[8] *= st_e36_pd[8];
	J[0] += dv[8];
	J[2] += dv[8]*0.2;
	dv[7] *= st_e36_pd[7];
	dv[9] = dv[7];
	J[2] -= dv[9]*0.66;
	J[0] += dv[7]*3.55;
	dv[10] = dv[4]*st_e36_pd[5];
	dv[4] *= st_e36_pd[4];
	dv[11] = dv[10];
	dv[11] *= st_e36_pd[3];
	J[0] += dv[11];
	J[2] += dv[11]*0.2;
	dv[10] *= st_e36_pd[2];
	dv[12] = dv[10];
	J[2] -= dv[12]*0.62;
	J[0] += dv[10]*3.25;
	dv[13] = dv[4];
	J[2] += dv[13]*0.8;
	dv[14] = dv[4];
	J[0] -= dv[14]*6.;
	J[0] += dv[4]*st_e36_pd[1];

   /*** derivatives for constraint 2 ***/

	J[3] = -st_e36_pd[19] + 0.6;
	J[1] = -x[1]*0.2;
	J[1] += st_e36_pd[18];
	}
}
#ifdef __cplusplus
	}
#endif
