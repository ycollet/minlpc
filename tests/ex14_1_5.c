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
 fint ex14_1_5_auxcom_[1] = { 2 /* nlc */ };
 fint ex14_1_5_funcom_[45] = {
	6 /* nvar */,
	1 /* nobj */,
	6 /* ncon */,
	32 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	25,
	31,
	33,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2 };

 real ex14_1_5_boundc_[1+12+12] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-2.,
		2.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		-1.,
		6.,
		6.,
		6.,
		6.,
		6.,
		6.,
		6.,
		6.};

 real ex14_1_5_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real ex14_1_5_pd[6];
static real ex14_1_5_old_x[6];
static int ex14_1_5_xkind = -1;

 static int
ex14_1_5_xcheck(real *x)
{
	real *x1 = ex14_1_5_old_x, *xe = x + 6;
	errno = 0;
	if (ex14_1_5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_1_5_xkind = 0;
	return 1;
	}
 real
ex14_1_5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_1_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[5];
	;}

	if (wantfg & 2) {
	g[5] = 1.;
	}

	return rv;
}

 void
ex14_1_5_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (ex14_1_5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ex14_1_5_pd[0] = x[0] * x[1];
	ex14_1_5_pd[1] = ex14_1_5_pd[0] * x[2];
	ex14_1_5_pd[2] = ex14_1_5_pd[1] * x[3];
	v[0] = ex14_1_5_pd[2] * x[4];
	t1 = v[0] + -x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	ex14_1_5_pd[3] = x[0] * x[1];
	ex14_1_5_pd[4] = ex14_1_5_pd[3] * x[2];
	ex14_1_5_pd[5] = ex14_1_5_pd[4] * x[3];
	v[0] = ex14_1_5_pd[5] * x[4];
	v[1] = -v[0];
	t1 = v[1] + -x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[0];
	t1 += 2.*x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += 2.*x[2];
	t1 += x[3];
	t1 += x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += 2.*x[3];
	t1 += x[4];
	c[5] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[24] = ex14_1_5_pd[2];
	J[18] = x[4]*ex14_1_5_pd[1];
	dv[0] = x[4]*x[3];
	J[12] = dv[0]*ex14_1_5_pd[0];
	dv[0] *= x[2];
	J[6] = dv[0]*x[0];
	J[0] = dv[0]*x[1];
	J[30] = -1.;

   /*** derivatives for constraint 2 ***/

	J[25] = -ex14_1_5_pd[5];
	J[19] = -x[4]*ex14_1_5_pd[4];
	dv[0] = -x[4]*x[3];
	J[13] = dv[0]*ex14_1_5_pd[3];
	dv[0] *= x[2];
	J[7] = dv[0]*x[0];
	J[1] = dv[0]*x[1];
	J[31] = -1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 2.;
	J[8] = 1.;
	J[14] = 1.;
	J[20] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;
	J[9] = 2.;
	J[15] = 1.;
	J[21] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	J[10] = 1.;
	J[16] = 2.;
	J[22] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = 1.;
	J[11] = 1.;
	J[17] = 1.;
	J[23] = 2.;
	J[29] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
