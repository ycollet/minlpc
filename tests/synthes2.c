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
 fint synthes2_auxcom_[1] = { 3 /* nlc */ };
 fint synthes2_funcom_[55] = {
	11 /* nvar */,
	1 /* nobj */,
	14 /* ncon */,
	37 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	14,
	18,
	24,
	29,
	31,
	33,
	34,
	36,
	38,

	/* rownos */
	1,
	7,
	8,
	3,
	7,
	8,
	1,
	5,
	7,
	8,
	10,
	11,
	12,
	1,
	5,
	11,
	12,
	4,
	6,
	7,
	8,
	9,
	10,
	6,
	7,
	8,
	9,
	10,
	2,
	13,
	3,
	13,
	4,
	5,
	14,
	6,
	14 };

 real synthes2_boundc_[1+22+28] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		2.,
		0.,
		2.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		2.,
		0.,
		3.,
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
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		1.,
		1.,
		-1.7e308,
		1.};

 real synthes2_x0comn_[11] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real synthes2_pd[7];
static real synthes2_old_x[11];
static int synthes2_xkind = -1;

 static int
synthes2_xcheck(real *x)
{
	real *x1 = synthes2_old_x, *xe = x + 11;
	errno = 0;
	if (synthes2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	synthes2_xkind = 0;
	return 1;
	}
 real
synthes2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[1], rv;
	fint wantfg = *needfg;
	if (synthes2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = exp(x[0]);
	if (errno) in_trouble("exp",x[0]);
	synthes2_pd[3] = v[0];
	v[1] = 0.833333 * x[1];
	v[2] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	synthes2_pd[4] = v[2];
	v[0] += v[2];
	v[2] = x[2] + 1.;
	v[2] += x[3];
	synthes2_pd[5] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	synthes2_pd[6] = 1. / v[2];
	v[2] = -60. * synthes2_pd[5];
	v[0] += v[2];
	v[0] += 140.;
	rv = v[0] + -10.*x[0];
	rv += -15.*x[1];
	rv += 15.*x[2];
	rv += 5.*x[3];
	rv += -15.*x[4];
	rv += -20.*x[5];
	rv += 5.*x[6];
	rv += 8.*x[7];
	rv += 6.*x[8];
	rv += 10.*x[9];
	rv += 6.*x[10];
	;}

	if (wantfg & 2) {
	dv[0] = -60.*synthes2_pd[6];
	g[3] = dv[0] + 5.;
	g[2] = dv[0] + 15.;
	g[1] = synthes2_pd[4]*0.833333 + -15.;
	g[0] = synthes2_pd[3] + -10.;
	g[4] = -15.;
	g[5] = -20.;
	g[6] = 5.;
	g[7] = 8.;
	g[8] = 6.;
	g[9] = 10.;
	g[10] = 6.;
	}

	return rv;
}

 void
synthes2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (synthes2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] + 1.;
	v[0] += x[3];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	synthes2_pd[0] = 1. / v[0];
	v[0] = -v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = exp(x[0]);
	if (errno) in_trouble("exp",x[0]);
	synthes2_pd[1] = v[0];
	t1 = v[0] + -10.*x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 0.833333 * x[1];
	v[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	synthes2_pd[2] = v[1];
	t1 = v[1] + -10.*x[7];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 1.25*x[4];
	t1 += -10.*x[8];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[2];
	t1 += x[3];
	t1 += -10.*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -2.*x[4];
	t1 += 2.*x[5];
	t1 += -10.*x[10];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[2];
	t1 += -2.*x[4];
	t1 += 2.*x[5];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[2];
	t1 += -0.75*x[4];
	t1 += 2.*x[5];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[4];
	t1 += -x[5];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[2];
	t1 += 2.*x[4];
	t1 += -2.*x[5];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -0.5*x[2];
	t1 += x[3];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -0.2*x[2];
	t1 += -x[3];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[6];
	t1 += x[7];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[9];
	t1 += x[10];
	c[13] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[13] = -synthes2_pd[0];
	J[6] = -synthes2_pd[0];

   /*** derivatives for constraint 2 ***/

	J[0] = synthes2_pd[1];
	J[28] = -10.;

   /*** derivatives for constraint 3 ***/

	J[3] = synthes2_pd[2]*0.833333;
	J[30] = -10.;

   /*** derivatives for constraint 4 ***/

	J[17] = 1.25;
	J[32] = -10.;

   /*** derivatives for constraint 5 ***/

	J[7] = 1.;
	J[14] = 1.;
	J[33] = -10.;

   /*** derivatives for constraint 6 ***/

	J[18] = -2.;
	J[23] = 2.;
	J[35] = -10.;

   /*** derivatives for constraint 7 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[8] = 1.;
	J[19] = -2.;
	J[24] = 2.;

   /*** derivatives for constraint 8 ***/

	J[2] = -1.;
	J[5] = -1.;
	J[9] = 1.;
	J[20] = -0.75;
	J[25] = 2.;

   /*** derivatives for constraint 9 ***/

	J[21] = 1.;
	J[26] = -1.;

   /*** derivatives for constraint 10 ***/

	J[10] = -1.;
	J[22] = 2.;
	J[27] = -2.;

   /*** derivatives for constraint 11 ***/

	J[11] = -0.5;
	J[15] = 1.;

   /*** derivatives for constraint 12 ***/

	J[12] = -0.2;
	J[16] = -1.;

   /*** derivatives for constraint 13 ***/

	J[29] = 1.;
	J[31] = 1.;

   /*** derivatives for constraint 14 ***/

	J[34] = 1.;
	J[36] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
