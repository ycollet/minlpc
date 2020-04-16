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
 fint st_cqpf_auxcom_[1] = { 0 /* nlc */ };
 fint st_cqpf_funcom_[25] = {
	4 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	14 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	7,
	11,
	15,

	/* rownos */
	1,
	3,
	1,
	4,
	5,
	6,
	2,
	3,
	5,
	6,
	2,
	4,
	5,
	6 };

 real st_cqpf_boundc_[1+8+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10000.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		1.,
		1.7e308,
		4.,
		1.7e308,
		3.,
		1.7e308,
		4.,
		1.7e308,
		-8.,
		1.7e308,
		-10.,
		1.7e308};

 real st_cqpf_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

 static real st_cqpf_pd[4];
static real st_cqpf_old_x[4];
static int st_cqpf_xkind = -1;

 static int
st_cqpf_xcheck(real *x)
{
	real *x1 = st_cqpf_old_x, *xe = x + 4;
	errno = 0;
	if (st_cqpf_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_cqpf_xkind = 0;
	return 1;
	}
 real
st_cqpf_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_cqpf_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_cqpf_pd[0] = 0.25 * x[0];
	v[0] = st_cqpf_pd[0] * x[0];
	st_cqpf_pd[1] = 0.25 * x[1];
	v[1] = st_cqpf_pd[1] * x[1];
	v[0] += v[1];
	st_cqpf_pd[2] = 0.25 * x[2];
	v[1] = st_cqpf_pd[2] * x[2];
	v[0] += v[1];
	st_cqpf_pd[3] = 0.25 * x[3];
	v[1] = st_cqpf_pd[3] * x[3];
	v[0] += v[1];
	rv = v[0] + -x[0];
	rv += -x[1];
	rv += -x[2];
	rv += -x[3];
	;}

	if (wantfg & 2) {
	g[3] = st_cqpf_pd[3] + -1.;
	g[3] += x[3]*0.25;
	g[2] = st_cqpf_pd[2] + -1.;
	g[2] += x[2]*0.25;
	g[1] = st_cqpf_pd[1] + -1.;
	g[1] += x[1]*0.25;
	g[0] = st_cqpf_pd[0] + -1.;
	g[0] += x[0]*0.25;
	}

	return rv;
}

 void
st_cqpf_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_cqpf_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 2.*x[2];
	t1 += 2.*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[1];
	t1 += x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[1];
	t1 += -2.*x[2];
	t1 += -3.*x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -3.*x[1];
	t1 += -x[2];
	t1 += -2.*x[3];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[2] = 1.;

   /*** derivatives for constraint 2 ***/

	J[6] = 2.;
	J[10] = 2.;

   /*** derivatives for constraint 3 ***/

	J[1] = 1.;
	J[7] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;
	J[11] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = -1.;
	J[8] = -2.;
	J[12] = -3.;

   /*** derivatives for constraint 6 ***/

	J[5] = -3.;
	J[9] = -1.;
	J[13] = -2.;
	}
}
#ifdef __cplusplus
	}
#endif
