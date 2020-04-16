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
 fint ex7_3_2_auxcom_[1] = { 1 /* nlc */ };
 fint ex7_3_2_funcom_[26] = {
	4 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	15 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	16,

	/* rownos */
	1,
	2,
	3,
	1,
	4,
	5,
	1,
	6,
	7,
	2,
	3,
	4,
	5,
	6,
	7 };

 real ex7_3_2_boundc_[1+8+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		-1.4,
		-1.7e308,
		1.4,
		-1.7e308,
		-1.5,
		-1.7e308,
		1.5,
		-1.7e308,
		-0.8,
		-1.7e308,
		0.8};

 real ex7_3_2_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

 static real ex7_3_2_pd[7];
static real ex7_3_2_old_x[4];
static int ex7_3_2_xkind = -1;

 static int
ex7_3_2_xcheck(real *x)
{
	real *x1 = ex7_3_2_old_x, *xe = x + 4;
	errno = 0;
	if (ex7_3_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_3_2_xkind = 0;
	return 1;
	}
 real
ex7_3_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex7_3_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[3];
	;}

	if (wantfg & 2) {
	g[3] = 1.;
	}

	return rv;
}

 void
ex7_3_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[6];
	real t1;
	fint wantfg = *needfg;
	if (ex7_3_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex7_3_2_pd[3] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex7_3_2_pd[0] = 4.*(ex7_3_2_pd[3]/x[0]);
	} else {
	ex7_3_2_pd[0] = 0.;
	}
	ex7_3_2_pd[2] = pow(x[1], 4.);
	if (errno) in_trouble2("pow",x[1],4.);
	if (x[1] != 0.) {
	ex7_3_2_pd[1] = 4.*(ex7_3_2_pd[2]/x[1]);
	} else {
	ex7_3_2_pd[1] = 0.;
	}
	v[2] = ex7_3_2_pd[3] * ex7_3_2_pd[2];
	v[3] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex7_3_2_pd[4] = 4.*(v[3]/x[0]);
	} else {
	ex7_3_2_pd[4] = 0.;
	}
	v[4] = -v[3];
	v[2] += v[4];
	ex7_3_2_pd[6] = pow(x[1], 4.);
	if (errno) in_trouble2("pow",x[1],4.);
	if (x[1] != 0.) {
	ex7_3_2_pd[5] = 4.*(ex7_3_2_pd[6]/x[1]);
	} else {
	ex7_3_2_pd[5] = 0.;
	}
	v[3] = ex7_3_2_pd[6] * x[2];
	v[5] = -v[3];
	v[2] += v[5];
	c[0] = v[2];

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += -0.25*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += -0.25*x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[1];
	t1 += -0.2*x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[1];
	t1 += -0.2*x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[2];
	t1 += -0.2*x[3];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += -0.2*x[3];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = -ex7_3_2_pd[6];
	J[3] = -x[2]*ex7_3_2_pd[5];
	J[0] = -ex7_3_2_pd[4];
	J[3] += ex7_3_2_pd[3]*ex7_3_2_pd[1];
	J[0] += ex7_3_2_pd[2]*ex7_3_2_pd[0];

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[9] = -0.25;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[10] = -0.25;

   /*** derivatives for constraint 4 ***/

	J[4] = -1.;
	J[11] = -0.2;

   /*** derivatives for constraint 5 ***/

	J[5] = 1.;
	J[12] = -0.2;

   /*** derivatives for constraint 6 ***/

	J[7] = -1.;
	J[13] = -0.2;

   /*** derivatives for constraint 7 ***/

	J[8] = 1.;
	J[14] = -0.2;
	}
}
#ifdef __cplusplus
	}
#endif
