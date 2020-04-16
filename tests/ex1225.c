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
 fint ex1225_auxcom_[1] = { 1 /* nlc */ };
 fint ex1225_funcom_[39] = {
	8 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	24 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	13,
	15,
	18,
	20,
	22,
	25,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	6,
	5,
	7,
	5,
	9,
	5,
	7,
	9,
	6,
	8,
	6,
	10,
	6,
	8,
	10 };

 real ex1225_boundc_[1+16+20] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		5.,
		1.,
		5.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		-24.,
		-1.7e308,
		-5.,
		-1.7e308,
		1.,
		-1.7e308,
		11.,
		1.,
		1.,
		1.,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real ex1225_x0comn_[8] = {
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex1225_pd[4];
static real ex1225_old_x[8];
static int ex1225_xkind = -1;

 static int
ex1225_xcheck(real *x)
{
	real *x1 = ex1225_old_x, *xe = x + 8;
	errno = 0;
	if (ex1225_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1225_xkind = 0;
	return 1;
	}
 real
ex1225_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex1225_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 7.*x[0];
	rv += 10.*x[1];
	;}

	if (wantfg & 2) {
	g[0] = 7.;
	g[1] = 10.;
	}

	return rv;
}

 void
ex1225_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex1225_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex1225_pd[3] = pow(x[0], 1.2);
	if (errno) in_trouble2("pow",x[0],1.2);
	if (x[0] > 0.) {
	ex1225_pd[0] = 1.2*(ex1225_pd[3]/x[0]);
	} else if (1.2 > 1.) {
	ex1225_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],1.2);
	}
	ex1225_pd[2] = pow(x[1], 1.7);
	if (errno) in_trouble2("pow",x[1],1.7);
	if (x[1] > 0.) {
	ex1225_pd[1] = 1.7*(ex1225_pd[2]/x[1]);
	} else if (1.7 > 1.) {
	ex1225_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],1.7);
	}
	v[2] = ex1225_pd[3] * ex1225_pd[2];
	t1 = v[2] + -7.*x[0];
	t1 += -9.*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += -2.*x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -3.*x[0];
	t1 += x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 4.*x[0];
	t1 += -3.*x[1];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += -2.*x[3];
	t1 += -4.*x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += -x[5];
	t1 += -2.*x[6];
	t1 += -4.*x[7];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += x[4];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[5];
	t1 += x[7];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[3];
	t1 += x[4];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[6];
	t1 += x[7];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[5] = ex1225_pd[3]*ex1225_pd[1] + -9.;
	J[0] = ex1225_pd[2]*ex1225_pd[0] + -7.;

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[6] = -2.;

   /*** derivatives for constraint 3 ***/

	J[2] = -3.;
	J[7] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = 4.;
	J[8] = -3.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	J[10] = -1.;
	J[12] = -2.;
	J[14] = -4.;

   /*** derivatives for constraint 6 ***/

	J[9] = 1.;
	J[17] = -1.;
	J[19] = -2.;
	J[21] = -4.;

   /*** derivatives for constraint 7 ***/

	J[11] = 1.;
	J[15] = 1.;

   /*** derivatives for constraint 8 ***/

	J[18] = 1.;
	J[22] = 1.;

   /*** derivatives for constraint 9 ***/

	J[13] = 1.;
	J[16] = 1.;

   /*** derivatives for constraint 10 ***/

	J[20] = 1.;
	J[23] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
