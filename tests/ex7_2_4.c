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
 fint ex7_2_4_auxcom_[1] = { 4 /* nlc */ };
 fint ex7_2_4_funcom_[28] = {
	8 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	13 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	6,
	7,
	9,
	11,
	13,
	14,

	/* rownos */
	1,
	3,
	2,
	4,
	3,
	4,
	1,
	3,
	2,
	4,
	1,
	2,
	2 };

 real ex7_2_4_boundc_[1+16+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.1,
		10.,
		0.1,
		10.,
		0.1,
		10.,
		0.1,
		10.,
		0.1,
		10.,
		0.1,
		10.,
		0.1,
		10.,
		0.1,
		10.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real ex7_2_4_x0comn_[8] = {
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1,
		0.1 };

 static real ex7_2_4_pd[25];
static real ex7_2_4_old_x[8];
static int ex7_2_4_xkind = -1;

 static int
ex7_2_4_xcheck(real *x)
{
	real *x1 = ex7_2_4_old_x, *xe = x + 8;
	errno = 0;
	if (ex7_2_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_2_4_xkind = 0;
	return 1;
	}
 real
ex7_2_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[2], rv;
	fint wantfg = *needfg;
	if (ex7_2_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[6], 0.67);
	if (errno) in_trouble2("pow",x[6],0.67);
	if (x[6] > 0.) {
	ex7_2_4_pd[17] = 0.67*(v[0]/x[6]);
	} else if (0.67 > 1.) {
	ex7_2_4_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.67);
	}
	v[0] *= 0.4;
	v[1] = pow(x[0], 0.67);
	if (errno) in_trouble2("pow",x[0],0.67);
	if (x[0] > 0.) {
	ex7_2_4_pd[18] = 0.67*(v[1]/x[0]);
	} else if (0.67 > 1.) {
	ex7_2_4_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.67);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	ex7_2_4_pd[19] = 1. / v[1];
	ex7_2_4_pd[20] = -v[2] * ex7_2_4_pd[19];
	v[1] = pow(x[7], 0.67);
	if (errno) in_trouble2("pow",x[7],0.67);
	if (x[7] > 0.) {
	ex7_2_4_pd[21] = 0.67*(v[1]/x[7]);
	} else if (0.67 > 1.) {
	ex7_2_4_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.67);
	}
	v[1] *= 0.4;
	v[0] = pow(x[1], 0.67);
	if (errno) in_trouble2("pow",x[1],0.67);
	if (x[1] > 0.) {
	ex7_2_4_pd[22] = 0.67*(v[0]/x[1]);
	} else if (0.67 > 1.) {
	ex7_2_4_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.67);
	}
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex7_2_4_pd[23] = 1. / v[0];
	ex7_2_4_pd[24] = -v[3] * ex7_2_4_pd[23];
	v[2] += v[3];
	v[2] += 10.;
	rv = v[2] + -x[6];
	rv += -x[7];
	;}

	if (wantfg & 2) {
	g[1] = ex7_2_4_pd[24]*ex7_2_4_pd[22];
	dv[0] = ex7_2_4_pd[23]*0.4;
	g[7] = dv[0]*ex7_2_4_pd[21] + -1.;
	g[0] = ex7_2_4_pd[20]*ex7_2_4_pd[18];
	dv[1] = ex7_2_4_pd[19]*0.4;
	g[6] = dv[1]*ex7_2_4_pd[17] + -1.;
	}

	return rv;
}

 void
ex7_2_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[5], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (ex7_2_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex7_2_4_pd[0] = 0.0588 * x[4];
	v[0] = ex7_2_4_pd[0] * x[0];
	t1 = v[0] + 0.1*x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	ex7_2_4_pd[1] = 0.0588 * x[5];
	v[0] = ex7_2_4_pd[1] * x[1];
	t1 = v[0] + 0.1*x[6];
	t1 += 0.1*x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 4. * x[2];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[1] = v[0] / x[4];
	ex7_2_4_pd[2] = 1. / x[4];
	ex7_2_4_pd[3] = -v[1] * ex7_2_4_pd[2];
	ex7_2_4_pd[5] = pow(x[2], 0.71);
	if (errno) in_trouble2("pow",x[2],0.71);
	if (x[2] > 0.) {
	ex7_2_4_pd[4] = 0.71*(ex7_2_4_pd[5]/x[2]);
	} else if (0.71 > 1.) {
	ex7_2_4_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.71);
	}
	v[2] = ex7_2_4_pd[5] * x[4];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = 2. / v[2];
	ex7_2_4_pd[6] = -v[3] / v[2];
	v[1] += v[3];
	v[3] = 0.0588 * x[0];
	v[2] = pow(x[2], 1.3);
	if (errno) in_trouble2("pow",x[2],1.3);
	if (x[2] > 0.) {
	ex7_2_4_pd[7] = 1.3*(v[2]/x[2]);
	} else if (1.3 > 1.) {
	ex7_2_4_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],1.3);
	}
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[4] = v[3] / v[2];
	ex7_2_4_pd[8] = 1. / v[2];
	ex7_2_4_pd[9] = -v[4] * ex7_2_4_pd[8];
	v[1] += v[4];
	c[2] = v[1];

  /***  constraint 4  ***/

	v[0] = 4. * x[3];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[1] = v[0] / x[5];
	ex7_2_4_pd[10] = 1. / x[5];
	ex7_2_4_pd[11] = -v[1] * ex7_2_4_pd[10];
	ex7_2_4_pd[13] = pow(x[3], 0.71);
	if (errno) in_trouble2("pow",x[3],0.71);
	if (x[3] > 0.) {
	ex7_2_4_pd[12] = 0.71*(ex7_2_4_pd[13]/x[3]);
	} else if (0.71 > 1.) {
	ex7_2_4_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.71);
	}
	v[2] = ex7_2_4_pd[13] * x[5];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = 2. / v[2];
	ex7_2_4_pd[14] = -v[3] / v[2];
	v[1] += v[3];
	v[3] = pow(x[3], 1.3);
	if (errno) in_trouble2("pow",x[3],1.3);
	if (x[3] > 0.) {
	ex7_2_4_pd[15] = 1.3*(v[3]/x[3]);
	} else if (1.3 > 1.) {
	ex7_2_4_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],1.3);
	}
	ex7_2_4_pd[16] = 0.0588 * v[3];
	v[3] = ex7_2_4_pd[16] * x[1];
	v[1] += v[3];
	c[3] = v[1];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = ex7_2_4_pd[0];
	J[6] = x[0]*0.0588;
	J[10] = 0.1;

   /*** derivatives for constraint 2 ***/

	J[2] = ex7_2_4_pd[1];
	J[8] = x[1]*0.0588;
	J[11] = 0.1;
	J[12] = 0.1;

   /*** derivatives for constraint 3 ***/

	J[4] = ex7_2_4_pd[9]*ex7_2_4_pd[7];
	J[1] = ex7_2_4_pd[8]*0.0588;
	J[7] = ex7_2_4_pd[6]*ex7_2_4_pd[5];
	dv[0] = ex7_2_4_pd[6]*x[4];
	J[4] += dv[0]*ex7_2_4_pd[4];
	J[7] += ex7_2_4_pd[3];
	J[4] += ex7_2_4_pd[2]*4.;

   /*** derivatives for constraint 4 ***/

	J[3] = ex7_2_4_pd[16];
	dv[0] = x[1]*0.0588;
	J[5] = dv[0]*ex7_2_4_pd[15];
	J[9] = ex7_2_4_pd[14]*ex7_2_4_pd[13];
	dv[1] = ex7_2_4_pd[14]*x[5];
	J[5] += dv[1]*ex7_2_4_pd[12];
	J[9] += ex7_2_4_pd[11];
	J[5] += ex7_2_4_pd[10]*4.;
	}
}
#ifdef __cplusplus
	}
#endif
