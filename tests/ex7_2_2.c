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
 fint ex7_2_2_auxcom_[1] = { 5 /* nlc */ };
 fint ex7_2_2_funcom_[28] = {
	6 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	15 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	7,
	9,
	10,
	13,
	16,

	/* rownos */
	1,
	2,
	3,
	4,
	2,
	4,
	3,
	4,
	4,
	1,
	3,
	5,
	2,
	4,
	5 };

 real ex7_2_2_boundc_[1+12+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		1.e-05,
		16.,
		1.e-05,
		16.,
		1.,
		1.,
		0.,
		0.,
		1.,
		1.,
		0.,
		0.,
		-1.7e308,
		4.};

 real ex7_2_2_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		1.e-05,
		1.e-05 };

 static real ex7_2_2_pd[6];
static real ex7_2_2_old_x[6];
static int ex7_2_2_xkind = -1;

 static int
ex7_2_2_xcheck(real *x)
{
	real *x1 = ex7_2_2_old_x, *xe = x + 6;
	errno = 0;
	if (ex7_2_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex7_2_2_xkind = 0;
	return 1;
	}
 real
ex7_2_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex7_2_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[3];
	;}

	if (wantfg & 2) {
	g[3] = -1.;
	}

	return rv;
}

 void
ex7_2_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex7_2_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex7_2_2_pd[0] = 0.09755988 * x[0];
	v[0] = ex7_2_2_pd[0] * x[4];
	t1 = v[0] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	ex7_2_2_pd[1] = 0.0965842812 * x[1];
	v[0] = ex7_2_2_pd[1] * x[5];
	t1 = v[0] + -x[0];
	t1 += x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	ex7_2_2_pd[2] = 0.0391908 * x[2];
	v[0] = ex7_2_2_pd[2] * x[4];
	t1 = v[0] + x[0];
	t1 += x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	ex7_2_2_pd[3] = 0.03527172 * x[3];
	v[0] = ex7_2_2_pd[3] * x[5];
	t1 = v[0] + -x[0];
	t1 += x[1];
	t1 += -x[2];
	t1 += x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = sqrt(x[4]);
	if (errno) in_trouble("sqrt",x[4]);
	if (v[0] <= 0.) {
	domain_("sqrt'", &v[0], 5L);
	}
	ex7_2_2_pd[4] = 0.5 / v[0];
	v[1] = sqrt(x[5]);
	if (errno) in_trouble("sqrt",x[5]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	ex7_2_2_pd[5] = 0.5 / v[1];
	v[2] = v[0] + v[1];
	c[4] = v[2];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[9] = ex7_2_2_pd[0];
	J[0] = x[4]*0.09755988 + 1.;

   /*** derivatives for constraint 2 ***/

	J[12] = ex7_2_2_pd[1];
	J[4] = x[5]*0.0965842812 + 1.;
	J[1] = -1.;

   /*** derivatives for constraint 3 ***/

	J[10] = ex7_2_2_pd[2];
	J[6] = x[4]*0.0391908 + 1.;
	J[2] = 1.;

   /*** derivatives for constraint 4 ***/

	J[13] = ex7_2_2_pd[3];
	J[8] = x[5]*0.03527172 + 1.;
	J[3] = -1.;
	J[5] = 1.;
	J[7] = -1.;

   /*** derivatives for constraint 5 ***/

	J[14] = ex7_2_2_pd[5];
	J[11] = ex7_2_2_pd[4];
	}
}
#ifdef __cplusplus
	}
#endif
