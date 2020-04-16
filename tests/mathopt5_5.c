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
 fint mathopt5_5_auxcom_[1] = { 0 /* nlc */ };
 fint mathopt5_5_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real mathopt5_5_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-10.,
		10.};

 real mathopt5_5_x0comn_[1] = {
		5. };

 static real mathopt5_5_pd[9];
static real mathopt5_5_old_x[1];
static int mathopt5_5_xkind = -1;

 static int
mathopt5_5_xcheck(real *x)
{
	real *x1 = mathopt5_5_old_x, *xe = x + 1;
	errno = 0;
	if (mathopt5_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt5_5_xkind = 0;
	return 1;
	}
 real
mathopt5_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[4];
	fint wantfg = *needfg;
	if (mathopt5_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 2. * x[0];
	v[1] = v[0] + 1.;
	v[0] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	mathopt5_5_pd[0] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = 3. * x[0];
	v[2] = v[1] + 2.;
	mathopt5_5_pd[1] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	mathopt5_5_pd[2] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[2] = 2. * mathopt5_5_pd[1];
	v[0] += v[2];
	v[2] = 4. * x[0];
	v[1] = v[2] + 3.;
	mathopt5_5_pd[3] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	mathopt5_5_pd[4] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = 3. * mathopt5_5_pd[3];
	v[0] += v[1];
	v[1] = 5. * x[0];
	v[2] = v[1] + 4.;
	mathopt5_5_pd[5] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	mathopt5_5_pd[6] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[2] = 4. * mathopt5_5_pd[5];
	v[0] += v[2];
	v[2] = 6. * x[0];
	v[1] = v[2] + 5.;
	mathopt5_5_pd[7] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	mathopt5_5_pd[8] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = 5. * mathopt5_5_pd[7];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	dv[0] = 5.*mathopt5_5_pd[8];
	g[0] = dv[0]*6.;
	dv[1] = 4.*mathopt5_5_pd[6];
	g[0] += dv[1]*5.;
	dv[2] = 3.*mathopt5_5_pd[4];
	g[0] += dv[2]*4.;
	dv[3] = 2.*mathopt5_5_pd[2];
	g[0] += dv[3]*3.;
	g[0] += mathopt5_5_pd[0]*2.;
	}

	return v[0];
}

 void
mathopt5_5_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
