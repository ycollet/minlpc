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
 fint st_e38_auxcom_[1] = { 1 /* nlc */ };
 fint st_e38_funcom_[17] = {
	4 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	6 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	5,
	6,
	7,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3 };

 real st_e38_boundc_[1+8+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		40.,
		80.,
		20.,
		60.,
		18.,
		100.,
		10.,
		100.,
		1296000.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real st_e38_x0comn_[4] = {
		40.,
		20.,
		18.,
		10. };

 static real st_e38_pd[15];
static real st_e38_old_x[4];
static int st_e38_xkind = -1;

 static int
st_e38_xcheck(real *x)
{
	real *x1 = st_e38_old_x, *xe = x + 4;
	errno = 0;
	if (st_e38_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e38_xkind = 0;
	return 1;
	}
 real
st_e38_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[4];
	fint wantfg = *needfg;
	if (st_e38_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e38_pd[4] = 0.0389 * x[2];
	st_e38_pd[5] = st_e38_pd[4] * x[0];
	v[0] = st_e38_pd[5] * x[1];
	st_e38_pd[6] = x[0] * x[0];
	st_e38_pd[7] = x[0] + x[0];
	st_e38_pd[8] = 0.1111312 * st_e38_pd[6];
	v[1] = st_e38_pd[8] * x[3];
	v[0] += v[1];
	st_e38_pd[9] = x[2] * x[2];
	st_e38_pd[10] = x[2] + x[2];
	st_e38_pd[11] = 0.012348046875 * st_e38_pd[9];
	v[1] = st_e38_pd[11] * x[1];
	v[0] += v[1];
	st_e38_pd[12] = x[2] * x[2];
	st_e38_pd[13] = x[2] + x[2];
	st_e38_pd[14] = 0.0775 * st_e38_pd[12];
	v[1] = st_e38_pd[14] * x[0];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[0] = st_e38_pd[14];
	dv[0] = x[0]*0.0775;
	g[2] = dv[0]*st_e38_pd[13];
	g[1] = st_e38_pd[11];
	dv[1] = x[1]*0.012348046875;
	g[2] += dv[1]*st_e38_pd[10];
	g[3] = st_e38_pd[8];
	dv[2] = x[3]*0.1111312;
	g[0] += dv[2]*st_e38_pd[7];
	g[1] += st_e38_pd[5];
	g[0] += x[1]*st_e38_pd[4];
	dv[3] = x[1]*x[0];
	g[2] += dv[3]*0.0389;
	}

	return v[0];
}

 void
st_e38_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (st_e38_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e38_pd[0] = x[0] * x[0];
	st_e38_pd[1] = x[0] + x[0];
	st_e38_pd[2] = st_e38_pd[0] * x[1];
	v[0] = 3.1415927 * st_e38_pd[2];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	st_e38_pd[3] = 3.*(x[0]*x[0]);
	} else {
	st_e38_pd[3] = 0.;
	}
	v[1] *= 4.188790266666656;
	v[2] = v[0] + v[1];
	c[0] = v[2];

  /***  constraint 2  ***/

	t1 = 0.0193*x[0];
	t1 += -0.0625*x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 0.00954*x[0];
	t1 += -0.0625*x[3];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 4.188790266666656*st_e38_pd[3];
	J[3] = 3.1415927*st_e38_pd[0];
	dv[0] = 3.1415927*x[1];
	J[0] += dv[0]*st_e38_pd[1];

   /*** derivatives for constraint 2 ***/

	J[1] = 0.0193;
	J[4] = -0.0625;

   /*** derivatives for constraint 3 ***/

	J[2] = 0.00954;
	J[5] = -0.0625;
	}
}
#ifdef __cplusplus
	}
#endif
