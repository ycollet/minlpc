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
 fint ex8_1_4_auxcom_[1] = { 0 /* nlc */ };
 fint ex8_1_4_funcom_[6] = {
	2 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real ex8_1_4_boundc_[1+4+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308};

 real ex8_1_4_x0comn_[2] = {
		0.,
		0. };

 static real ex8_1_4_pd[7];
static real ex8_1_4_old_x[2];
static int ex8_1_4_xkind = -1;

 static int
ex8_1_4_xcheck(real *x)
{
	real *x1 = ex8_1_4_old_x, *xe = x + 2;
	errno = 0;
	if (ex8_1_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_1_4_xkind = 0;
	return 1;
	}
 real
ex8_1_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (ex8_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex8_1_4_pd[0] = x[0] * x[0];
	ex8_1_4_pd[1] = x[0] + x[0];
	v[0] = 12. * ex8_1_4_pd[0];
	v[1] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex8_1_4_pd[2] = 4.*(v[1]/x[0]);
	} else {
	ex8_1_4_pd[2] = 0.;
	}
	v[1] *= -6.3;
	v[0] += v[1];
	v[1] = pow(x[0], 6.);
	if (errno) in_trouble2("pow",x[0],6.);
	if (x[0] != 0.) {
	ex8_1_4_pd[3] = 6.*(v[1]/x[0]);
	} else {
	ex8_1_4_pd[3] = 0.;
	}
	v[0] += v[1];
	ex8_1_4_pd[4] = 6. * x[0];
	v[1] = ex8_1_4_pd[4] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	ex8_1_4_pd[5] = x[1] * x[1];
	ex8_1_4_pd[6] = x[1] + x[1];
	v[2] = 6. * ex8_1_4_pd[5];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[1] = 6.*ex8_1_4_pd[6];
	g[1] -= ex8_1_4_pd[4];
	g[0] = -x[1]*6.;
	g[0] += ex8_1_4_pd[3];
	g[0] -= 6.3*ex8_1_4_pd[2];
	g[0] += 12.*ex8_1_4_pd[1];
	}

	return v[0];
}

 void
ex8_1_4_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
