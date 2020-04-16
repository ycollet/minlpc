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
 fint ex2_1_4_auxcom_[1] = { 0 /* nlc */ };
 fint ex2_1_4_funcom_[43] = {
	6 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	30 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,
	21,
	26,
	31,

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
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5 };

 real ex2_1_4_boundc_[1+12+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		2.,
		-1.7e308,
		16.,
		-1.7e308,
		-1.,
		-1.7e308,
		24.,
		-1.7e308,
		12.,
		-1.7e308,
		3.};

 real ex2_1_4_x0comn_[6] = {
		0.,
		6.,
		0.,
		1.,
		1.,
		0. };

 static real ex2_1_4_pd[1];
static real ex2_1_4_old_x[6];
static int ex2_1_4_xkind = -1;

 static int
ex2_1_4_xcheck(real *x)
{
	real *x1 = ex2_1_4_old_x, *xe = x + 6;
	errno = 0;
	if (ex2_1_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex2_1_4_xkind = 0;
	return 1;
	}
 real
ex2_1_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex2_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex2_1_4_pd[0] = 0.5 * x[0];
	v[0] = ex2_1_4_pd[0] * x[0];
	v[1] = -v[0];
	rv = v[1] + 6.5*x[0];
	rv += -x[1];
	rv += -2.*x[2];
	rv += -3.*x[3];
	rv += -2.*x[4];
	rv += -x[5];
	;}

	if (wantfg & 2) {
	g[0] = -ex2_1_4_pd[0] + 6.5;
	g[0] -= x[0]*0.5;
	g[1] = -1.;
	g[2] = -2.;
	g[3] = -3.;
	g[4] = -2.;
	g[5] = -1.;
	}

	return rv;
}

 void
ex2_1_4_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex2_1_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += 2.*x[1];
	t1 += 8.*x[2];
	t1 += x[3];
	t1 += 3.*x[4];
	t1 += 5.*x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -8.*x[0];
	t1 += -4.*x[1];
	t1 += -2.*x[2];
	t1 += 2.*x[3];
	t1 += 4.*x[4];
	t1 += -x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[0];
	t1 += 0.5*x[1];
	t1 += 0.2*x[2];
	t1 += -3.*x[3];
	t1 += -x[4];
	t1 += -4.*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 0.2*x[0];
	t1 += 2.*x[1];
	t1 += 0.1*x[2];
	t1 += -4.*x[3];
	t1 += 2.*x[4];
	t1 += 2.*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -0.1*x[0];
	t1 += -0.5*x[1];
	t1 += 2.*x[2];
	t1 += 5.*x[3];
	t1 += -5.*x[4];
	t1 += 3.*x[5];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[5] = 2.;
	J[10] = 8.;
	J[15] = 1.;
	J[20] = 3.;
	J[25] = 5.;

   /*** derivatives for constraint 2 ***/

	J[1] = -8.;
	J[6] = -4.;
	J[11] = -2.;
	J[16] = 2.;
	J[21] = 4.;
	J[26] = -1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 2.;
	J[7] = 0.5;
	J[12] = 0.2;
	J[17] = -3.;
	J[22] = -1.;
	J[27] = -4.;

   /*** derivatives for constraint 4 ***/

	J[3] = 0.2;
	J[8] = 2.;
	J[13] = 0.1;
	J[18] = -4.;
	J[23] = 2.;
	J[28] = 2.;

   /*** derivatives for constraint 5 ***/

	J[4] = -0.1;
	J[9] = -0.5;
	J[14] = 2.;
	J[19] = 5.;
	J[24] = -5.;
	J[29] = 3.;
	}
}
#ifdef __cplusplus
	}
#endif
