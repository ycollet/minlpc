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
 fint mathopt6_auxcom_[1] = { 0 /* nlc */ };
 fint mathopt6_funcom_[6] = {
	2 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real mathopt6_boundc_[1+4+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-3.,
		3.,
		-3.,
		3.};

 real mathopt6_x0comn_[2] = {
		-0.655668942,
		0.346914252 };

 static real mathopt6_pd[15];
static real mathopt6_old_x[2];
static int mathopt6_xkind = -1;

 static int
mathopt6_xcheck(real *x)
{
	real *x1 = mathopt6_old_x, *xe = x + 2;
	errno = 0;
	if (mathopt6_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt6_xkind = 0;
	return 1;
	}
 real
mathopt6_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[5];
	fint wantfg = *needfg;
	if (mathopt6_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 50. * x[0];
	v[1] = sin(v[0]);
	if (errno) in_trouble("sin",v[0]);
	mathopt6_pd[0] = cos(v[0]);
	if (errno) in_trouble("sin'",v[0]);
	v[0] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	mathopt6_pd[1] = v[0];
	mathopt6_pd[2] = exp(x[1]);
	if (errno) in_trouble("exp",x[1]);
	mathopt6_pd[3] = mathopt6_pd[2];
	v[1] = 60. * mathopt6_pd[2];
	v[2] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	mathopt6_pd[4] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[0] += v[2];
	mathopt6_pd[5] = sin(x[0]);
	if (errno) in_trouble("sin",x[0]);
	mathopt6_pd[6] = cos(x[0]);
	if (errno) in_trouble("sin'",x[0]);
	v[2] = 70. * mathopt6_pd[5];
	v[1] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	mathopt6_pd[7] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[0] += v[1];
	v[1] = 80. * x[1];
	v[2] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	mathopt6_pd[8] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	mathopt6_pd[9] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[0] += v[1];
	v[1] = 10. * x[0];
	v[2] = 10. * x[1];
	v[3] = v[1] + v[2];
	v[2] = sin(v[3]);
	if (errno) in_trouble("sin",v[3]);
	mathopt6_pd[10] = cos(v[3]);
	if (errno) in_trouble("sin'",v[3]);
	v[3] = -v[2];
	v[0] += v[3];
	mathopt6_pd[11] = x[0] * x[0];
	mathopt6_pd[12] = x[0] + x[0];
	v[3] = 0.25 * mathopt6_pd[11];
	v[0] += v[3];
	mathopt6_pd[13] = x[1] * x[1];
	mathopt6_pd[14] = x[1] + x[1];
	v[3] = 0.25 * mathopt6_pd[13];
	v[0] += v[3];
	;}

	if (wantfg & 2) {
	g[1] = 0.25*mathopt6_pd[14];
	g[0] = 0.25*mathopt6_pd[12];
	dv[0] = -mathopt6_pd[10];
	g[1] += dv[0]*10.;
	g[0] -= mathopt6_pd[10]*10.;
	dv[1] = mathopt6_pd[9]*mathopt6_pd[8];
	g[1] += dv[1]*80.;
	dv[2] = mathopt6_pd[7]*70.;
	g[0] += dv[2]*mathopt6_pd[6];
	dv[3] = mathopt6_pd[4]*60.;
	g[1] += dv[3]*mathopt6_pd[3];
	dv[4] = mathopt6_pd[1]*mathopt6_pd[0];
	g[0] += dv[4]*50.;
	}

	return v[0];
}

 void
mathopt6_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
