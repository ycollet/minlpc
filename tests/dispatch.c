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
 fint dispatch_auxcom_[1] = { 1 /* nlc */ };
 fint dispatch_funcom_[19] = {
	4 /* nvar */,
	1 /* nobj */,
	2 /* ncon */,
	8 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,

	/* rownos */
	1,
	2,
	1,
	2,
	1,
	2,
	1,
	2 };

 real dispatch_boundc_[1+8+4] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		50.,
		200.,
		37.5,
		150.,
		45.,
		180.,
		-1.7e308,
		1.7e308,
		0.040357,
		0.040357,
		210.,
		1.7e308};

 real dispatch_x0comn_[4] = {
		50.,
		37.5,
		45.,
		0. };

 static real dispatch_pd[24];
static real dispatch_old_x[4];
static int dispatch_xkind = -1;

 static int
dispatch_xcheck(real *x)
{
	real *x1 = dispatch_old_x, *xe = x + 4;
	errno = 0;
	if (dispatch_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	dispatch_xkind = 0;
	return 1;
	}
 real
dispatch_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (dispatch_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	dispatch_pd[18] = x[0] * x[0];
	dispatch_pd[19] = x[0] + x[0];
	v[0] = 0.00533 * dispatch_pd[18];
	dispatch_pd[20] = x[1] * x[1];
	dispatch_pd[21] = x[1] + x[1];
	v[1] = 0.00889 * dispatch_pd[20];
	v[0] += v[1];
	dispatch_pd[22] = x[2] * x[2];
	dispatch_pd[23] = x[2] + x[2];
	v[1] = 0.00741 * dispatch_pd[22];
	v[0] += v[1];
	v[0] += 653.1;
	rv = v[0] + 11.669*x[0];
	rv += 10.333*x[1];
	rv += 10.833*x[2];
	;}

	if (wantfg & 2) {
	g[2] = 0.00741*dispatch_pd[23] + 10.833;
	g[1] = 0.00889*dispatch_pd[21] + 10.333;
	g[0] = 0.00533*dispatch_pd[19] + 11.669;
	}

	return rv;
}

 void
dispatch_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[9];
	real t1;
	fint wantfg = *needfg;
	if (dispatch_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	dispatch_pd[0] = 0.0676 * x[0];
	dispatch_pd[1] = dispatch_pd[0] * x[0];
	v[0] = -0.01 * dispatch_pd[1];
	dispatch_pd[2] = 0.00953 * x[0];
	dispatch_pd[3] = dispatch_pd[2] * x[1];
	v[1] = -0.01 * dispatch_pd[3];
	v[0] += v[1];
	dispatch_pd[4] = 0.00507 * x[0];
	dispatch_pd[5] = dispatch_pd[4] * x[2];
	v[1] = 0.01 * dispatch_pd[5];
	v[0] += v[1];
	dispatch_pd[6] = 0.00953 * x[1];
	dispatch_pd[7] = dispatch_pd[6] * x[0];
	v[1] = -0.01 * dispatch_pd[7];
	v[0] += v[1];
	dispatch_pd[8] = 0.0521 * x[1];
	dispatch_pd[9] = dispatch_pd[8] * x[1];
	v[1] = -0.01 * dispatch_pd[9];
	v[0] += v[1];
	dispatch_pd[10] = 0.00901 * x[1];
	dispatch_pd[11] = dispatch_pd[10] * x[2];
	v[1] = -0.01 * dispatch_pd[11];
	v[0] += v[1];
	dispatch_pd[12] = 0.00507 * x[2];
	dispatch_pd[13] = dispatch_pd[12] * x[0];
	v[1] = 0.01 * dispatch_pd[13];
	v[0] += v[1];
	dispatch_pd[14] = 0.00901 * x[2];
	dispatch_pd[15] = dispatch_pd[14] * x[1];
	v[1] = -0.01 * dispatch_pd[15];
	v[0] += v[1];
	dispatch_pd[16] = 0.0294 * x[2];
	dispatch_pd[17] = dispatch_pd[16] * x[2];
	v[1] = -0.01 * dispatch_pd[17];
	v[0] += v[1];
	t1 = v[0] + 0.000766*x[0];
	t1 += 3.42e-05*x[1];
	t1 += -0.000189*x[2];
	t1 += x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += -x[3];
	c[1] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[4] = -0.01*dispatch_pd[16] + -0.000189;
	dv[0] = -0.01*x[2];
	J[4] += dv[0]*0.0294;
	J[2] = -0.01*dispatch_pd[14] + 3.42e-05;
	dv[1] = -0.01*x[1];
	J[4] += dv[1]*0.00901;
	J[0] = 0.01*dispatch_pd[12] + 0.000766;
	dv[2] = 0.01*x[0];
	J[4] += dv[2]*0.00507;
	J[4] -= 0.01*dispatch_pd[10];
	dv[3] = -0.01*x[2];
	J[2] += dv[3]*0.00901;
	J[2] -= 0.01*dispatch_pd[8];
	dv[4] = -0.01*x[1];
	J[2] += dv[4]*0.0521;
	J[0] -= 0.01*dispatch_pd[6];
	dv[5] = -0.01*x[0];
	J[2] += dv[5]*0.00953;
	J[4] += 0.01*dispatch_pd[4];
	dv[6] = 0.01*x[2];
	J[0] += dv[6]*0.00507;
	J[2] -= 0.01*dispatch_pd[2];
	dv[7] = -0.01*x[1];
	J[0] += dv[7]*0.00953;
	J[0] -= 0.01*dispatch_pd[0];
	dv[8] = -0.01*x[0];
	J[0] += dv[8]*0.0676;
	J[6] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[3] = 1.;
	J[5] = 1.;
	J[7] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
