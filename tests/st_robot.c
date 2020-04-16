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
 fint st_robot_auxcom_[1] = { 7 /* nlc */ };
 fint st_robot_funcom_[39] = {
	8 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	24 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	14,
	17,
	18,
	20,
	23,
	25,

	/* rownos */
	1,
	2,
	3,
	4,
	8,
	1,
	2,
	3,
	4,
	8,
	1,
	2,
	5,
	1,
	2,
	5,
	6,
	3,
	6,
	1,
	2,
	7,
	3,
	7 };

 real st_robot_boundc_[1+16+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		0.3571,
		0.3571,
		0.6022,
		0.6022,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		-0.3461,
		-0.3461};

 real st_robot_x0comn_[8] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_robot_pd[12];
static real st_robot_old_x[8];
static int st_robot_xkind = -1;

 static int
st_robot_xcheck(real *x)
{
	real *x1 = st_robot_old_x, *xe = x + 8;
	errno = 0;
	if (st_robot_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_robot_xkind = 0;
	return 1;
	}
 real
st_robot_feval_(fint *nobj, fint *needfg, real *x, real *g)
{	fint wantfg = *needfg;
	if (st_robot_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	;}

	if (wantfg & 2) {
	}

	return 0.;
}

 void
st_robot_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_robot_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_robot_pd[0] = 0.004731 * x[0];
	v[0] = st_robot_pd[0] * x[2];
	st_robot_pd[1] = 0.3578 * x[1];
	v[1] = st_robot_pd[1] * x[2];
	v[2] = v[0] - v[1];
	t1 = v[2] + -0.1238*x[0];
	t1 += -0.001637*x[1];
	t1 += -0.9338*x[3];
	t1 += x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	st_robot_pd[2] = 0.2238 * x[0];
	v[0] = st_robot_pd[2] * x[2];
	st_robot_pd[3] = 0.7623 * x[1];
	v[1] = st_robot_pd[3] * x[2];
	v[2] = v[0] + v[1];
	t1 = v[2] + 0.2638*x[0];
	t1 += -0.07745*x[1];
	t1 += -0.6734*x[3];
	t1 += -x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[5] * x[7];
	t1 = v[0] + 0.3578*x[0];
	t1 += 0.004731*x[1];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] * x[0];
	st_robot_pd[4] = x[0] + x[0];
	v[1] = x[1] * x[1];
	st_robot_pd[5] = x[1] + x[1];
	v[2] = v[0] + v[1];
	c[3] = v[2];

  /***  constraint 5  ***/

	v[0] = x[2] * x[2];
	st_robot_pd[6] = x[2] + x[2];
	v[1] = x[3] * x[3];
	st_robot_pd[7] = x[3] + x[3];
	v[2] = v[0] + v[1];
	c[4] = v[2];

  /***  constraint 6  ***/

	v[0] = x[4] * x[4];
	st_robot_pd[8] = x[4] + x[4];
	v[1] = x[5] * x[5];
	st_robot_pd[9] = x[5] + x[5];
	v[2] = v[0] + v[1];
	c[5] = v[2];

  /***  constraint 7  ***/

	v[0] = x[6] * x[6];
	st_robot_pd[10] = x[6] + x[6];
	v[1] = x[7] * x[7];
	st_robot_pd[11] = x[7] + x[7];
	v[2] = v[0] + v[1];
	c[6] = v[2];

  /***  constraint 8  ***/

	t1 = -0.7623*x[0];
	t1 += 0.2238*x[1];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[10] = -st_robot_pd[1];
	J[5] = -x[2]*0.3578 + -0.001637;
	J[10] += st_robot_pd[0];
	J[0] = x[2]*0.004731 + -0.1238;
	J[13] = -0.9338;
	J[19] = 1.;

   /*** derivatives for constraint 2 ***/

	J[11] = st_robot_pd[3];
	J[6] = x[2]*0.7623 + -0.07745;
	J[11] += st_robot_pd[2];
	J[1] = x[2]*0.2238 + 0.2638;
	J[14] = -0.6734;
	J[20] = -1.;

   /*** derivatives for constraint 3 ***/

	J[22] = x[5];
	J[17] = x[7];
	J[2] = 0.3578;
	J[7] = 0.004731;

   /*** derivatives for constraint 4 ***/

	J[8] = st_robot_pd[5];
	J[3] = st_robot_pd[4];

   /*** derivatives for constraint 5 ***/

	J[15] = st_robot_pd[7];
	J[12] = st_robot_pd[6];

   /*** derivatives for constraint 6 ***/

	J[18] = st_robot_pd[9];
	J[16] = st_robot_pd[8];

   /*** derivatives for constraint 7 ***/

	J[23] = st_robot_pd[11];
	J[21] = st_robot_pd[10];

   /*** derivatives for constraint 8 ***/

	J[4] = -0.7623;
	J[9] = 0.2238;
	}
}
#ifdef __cplusplus
	}
#endif
