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
 fint ex14_1_3_auxcom_[1] = { 4 /* nlc */ };
 fint ex14_1_3_funcom_[22] = {
	3 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	12 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real ex14_1_3_boundc_[1+6+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		5.49e-06,
		4.553,
		0.0021961,
		18.21,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		-1.,
		-1.7e308,
		1.001,
		-1.7e308,
		-1.001};

 real ex14_1_3_x0comn_[3] = {
		5.49e-06,
		0.0021961,
		0. };

 static real ex14_1_3_pd[6];
static real ex14_1_3_old_x[3];
static int ex14_1_3_xkind = -1;

 static int
ex14_1_3_xcheck(real *x)
{
	real *x1 = ex14_1_3_old_x, *xe = x + 3;
	errno = 0;
	if (ex14_1_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_1_3_xkind = 0;
	return 1;
	}
 real
ex14_1_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[2];
	;}

	if (wantfg & 2) {
	g[2] = 1.;
	}

	return rv;
}

 void
ex14_1_3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex14_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex14_1_3_pd[0] = 10000. * x[0];
	v[0] = ex14_1_3_pd[0] * x[1];
	t1 = v[0] + -x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	ex14_1_3_pd[1] = -10000. * x[0];
	v[0] = ex14_1_3_pd[1] * x[1];
	t1 = v[0] + -x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = -x[0];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_3_pd[2] = v[1];
	v[0] = -x[1];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_3_pd[3] = v[2];
	v[0] = v[1] + v[2];
	t1 = v[0] + -x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = -x[1];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_3_pd[4] = v[1];
	v[0] = -v[1];
	v[1] = -x[0];
	v[2] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	ex14_1_3_pd[5] = v[2];
	v[1] = v[0] - v[2];
	t1 = v[1] + -x[2];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = ex14_1_3_pd[0];
	J[0] = x[1]*10000.;
	J[8] = -1.;

   /*** derivatives for constraint 2 ***/

	J[5] = ex14_1_3_pd[1];
	J[1] = -x[1]*10000.;
	J[9] = -1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -ex14_1_3_pd[3];
	J[2] = -ex14_1_3_pd[2];
	J[10] = -1.;

   /*** derivatives for constraint 4 ***/

	J[3] = ex14_1_3_pd[5];
	J[7] = ex14_1_3_pd[4];
	J[11] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
