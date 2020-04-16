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
 fint alan_auxcom_[1] = { 0 /* nlc */ };
 fint alan_funcom_[35] = {
	8 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	20 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	15,
	17,
	19,
	21,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	4,
	1,
	2,
	5,
	1,
	2,
	6,
	3,
	7,
	4,
	7,
	5,
	7,
	6,
	7 };

 real alan_boundc_[1+16+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		1.,
		1.,
		10.,
		10.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		3.};

 real alan_x0comn_[8] = {
		0.302884615384618,
		0.0865384615384593,
		0.504807692307693,
		0.10576923076923,
		0.,
		0.,
		0.,
		0. };

 static real alan_pd[4];
static real alan_old_x[8];
static int alan_xkind = -1;

 static int
alan_xcheck(real *x)
{
	real *x1 = alan_old_x, *xe = x + 8;
	errno = 0;
	if (alan_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	alan_xkind = 0;
	return 1;
	}
 real
alan_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[6], dv[3];
	fint wantfg = *needfg;
	if (alan_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 4. * x[0];
	v[1] = 3. * x[1];
	v[2] = v[0] + v[1];
	alan_pd[0] = v[2] - x[2];
	v[2] = x[0] * alan_pd[0];
	alan_pd[1] = 3. * x[0];
	v[0] = 6. * x[1];
	alan_pd[2] = alan_pd[1] + v[0];
	alan_pd[2] += x[2];
	v[3] = x[1] * alan_pd[2];
	v[2] += v[3];
	v[3] = x[1] - x[0];
	v[4] = 10. * x[2];
	alan_pd[3] = v[3] + v[4];
	v[4] = x[2] * alan_pd[3];
	v[2] += v[4];
	;}

	if (wantfg & 2) {
	g[2] = alan_pd[3];
	dv[0] = x[2];
	g[2] += dv[0]*10.;
	g[0] = -x[2];
	g[1] = x[2];
	g[1] += alan_pd[2];
	g[2] += x[1];
	dv[1] = x[1];
	g[1] += dv[1]*6.;
	g[0] += x[1]*3.;
	g[0] += alan_pd[0];
	g[2] -= x[0];
	dv[2] = x[0];
	g[1] += dv[2]*3.;
	g[0] += x[0]*4.;
	}

	return v[2];
}

 void
alan_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (alan_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 8.*x[0];
	t1 += 9.*x[1];
	t1 += 12.*x[2];
	t1 += 7.*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += -x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[1];
	t1 += -x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[2];
	t1 += -x[6];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[3];
	t1 += -x[7];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[3] = 1.;
	J[6] = 1.;
	J[9] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 8.;
	J[4] = 9.;
	J[7] = 12.;
	J[10] = 7.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[12] = -1.;

   /*** derivatives for constraint 4 ***/

	J[5] = 1.;
	J[14] = -1.;

   /*** derivatives for constraint 5 ***/

	J[8] = 1.;
	J[16] = -1.;

   /*** derivatives for constraint 6 ***/

	J[11] = 1.;
	J[18] = -1.;

   /*** derivatives for constraint 7 ***/

	J[13] = 1.;
	J[15] = 1.;
	J[17] = 1.;
	J[19] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
