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
 fint st_e42_auxcom_[1] = { 1 /* nlc */ };
 fint st_e42_funcom_[22] = {
	7 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	4,
	5,
	6,
	7,
	8,
	9,

	/* rownos */
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1 };

 real st_e42_boundc_[1+14+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		0.,
		3.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.,
		-72.82,
		-72.82,
		1.,
		1.};

 real st_e42_x0comn_[7] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_e42_pd[3];
static real st_e42_old_x[7];
static int st_e42_xkind = -1;

 static int
st_e42_xcheck(real *x)
{
	real *x1 = st_e42_old_x, *xe = x + 7;
	errno = 0;
	if (st_e42_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e42_xkind = 0;
	return 1;
	}
 real
st_e42_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e42_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[4];
	rv += x[5];
	;}

	if (wantfg & 2) {
	g[4] = 1.;
	g[5] = 1.;
	}

	return rv;
}

 void
st_e42_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_e42_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e42_pd[0] = 51.5712 * x[0];
	v[0] = st_e42_pd[0] * x[1];
	st_e42_pd[1] = 14.9251 * x[0];
	v[1] = st_e42_pd[1] * x[3];
	v[0] += v[1];
	st_e42_pd[2] = 10.1409 * x[2];
	v[1] = st_e42_pd[2] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 20.7324*x[0];
	t1 += -25.7856*x[1];
	t1 += 42.3401*x[2];
	t1 += -22.2988*x[3];
	t1 += -x[4];
	t1 += x[5];
	t1 += -6.6425*x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = -st_e42_pd[2] + -22.2988;
	J[3] = -x[3]*10.1409 + 42.3401;
	J[4] += st_e42_pd[1];
	J[0] = x[3]*14.9251 + 20.7324;
	J[2] = st_e42_pd[0] + -25.7856;
	J[0] += x[1]*51.5712;
	J[5] = -1.;
	J[6] = 1.;
	J[7] = -6.6425;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
