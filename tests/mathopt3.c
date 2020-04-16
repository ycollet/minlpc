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
 fint mathopt3_auxcom_[1] = { 4 /* nlc */ };
 fint mathopt3_funcom_[49] = {
	6 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	36 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	14,
	20,
	27,
	32,
	37,

	/* rownos */
	1,
	2,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7 };

 real mathopt3_boundc_[1+12+14] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		2.};

 real mathopt3_x0comn_[6] = {
		10.,
		-10.,
		10.,
		10.,
		10.,
		-10. };

 static real mathopt3_pd[19];
static real mathopt3_old_x[6];
static int mathopt3_xkind = -1;

 static int
mathopt3_xcheck(real *x)
{
	real *x1 = mathopt3_old_x, *xe = x + 6;
	errno = 0;
	if (mathopt3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	mathopt3_xkind = 0;
	return 1;
	}
 real
mathopt3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2];
	fint wantfg = *needfg;
	if (mathopt3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + x[1];
	v[1] = v[0] * v[0];
	mathopt3_pd[10] = v[0] + v[0];
	v[0] = x[2] - x[4];
	v[2] = v[0] * v[0];
	mathopt3_pd[11] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[5] - x[3];
	v[0] = v[2] * v[2];
	mathopt3_pd[12] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[0] + x[2];
	v[2] = v[0] - x[3];
	mathopt3_pd[13] = v[2] * v[2];
	mathopt3_pd[14] = v[2] + v[2];
	v[2] = 2. * mathopt3_pd[13];
	v[1] += v[2];
	v[2] = x[1] - x[0];
	v[0] = v[2] + x[2];
	v[2] = v[0] - x[3];
	v[0] = v[2] * v[2];
	mathopt3_pd[15] = v[2] + v[2];
	v[1] += v[0];
	v[0] = x[0] + x[4];
	v[2] = v[0] - x[5];
	v[0] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	mathopt3_pd[16] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	mathopt3_pd[17] = v[0] * v[0];
	mathopt3_pd[18] = v[0] + v[0];
	v[0] = 10. * mathopt3_pd[17];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	dv[0] = 10.*mathopt3_pd[18];
	dv[0] *= mathopt3_pd[16];
	g[5] = -dv[0];
	g[4] = dv[0];
	g[0] = dv[0];
	g[3] = -mathopt3_pd[15];
	g[2] = mathopt3_pd[15];
	g[0] -= mathopt3_pd[15];
	g[1] = mathopt3_pd[15];
	dv[1] = 2.*mathopt3_pd[14];
	g[3] -= dv[1];
	g[2] += dv[1];
	g[0] += dv[1];
	g[3] -= mathopt3_pd[12];
	g[5] += mathopt3_pd[12];
	g[4] -= mathopt3_pd[11];
	g[2] += mathopt3_pd[11];
	g[1] += mathopt3_pd[10];
	g[0] += mathopt3_pd[10];
	}

	return v[1];
}

 void
mathopt3_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (mathopt3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	mathopt3_pd[0] = x[0] + x[0];
	v[1] = sin(x[1]);
	if (errno) in_trouble("sin",x[1]);
	mathopt3_pd[1] = cos(x[1]);
	if (errno) in_trouble("sin'",x[1]);
	v[2] = v[0] - v[1];
	t1 = v[2] + -x[3];
	t1 += x[4];
	t1 += x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[2];
	mathopt3_pd[2] = x[1] * x[3];
	v[1] = mathopt3_pd[2] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = -x[0];
	v[1] = v[2] - x[2];
	v[2] = v[1] + x[5];
	v[1] = sin(v[2]);
	if (errno) in_trouble("sin",v[2]);
	mathopt3_pd[3] = cos(v[2]);
	if (errno) in_trouble("sin'",v[2]);
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + -x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	mathopt3_pd[4] = x[1] * x[5];
	mathopt3_pd[5] = cos(x[4]);
	if (errno) in_trouble("cos",x[4]);
	mathopt3_pd[6] = -sin(x[4]);
	v[0] = mathopt3_pd[4] * mathopt3_pd[5];
	v[1] = x[2] * x[3];
	v[2] = sin(v[1]);
	if (errno) in_trouble("sin",v[1]);
	mathopt3_pd[7] = cos(v[1]);
	if (errno) in_trouble("sin'",v[1]);
	v[1] = v[0] - v[2];
	t1 = v[1] + x[1];
	t1 += -x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] * x[1];
	v[1] = -v[0];
	v[0] = x[2] * x[2];
	mathopt3_pd[8] = x[2] + x[2];
	v[1] += v[0];
	v[0] = x[3] * x[4];
	v[1] += v[0];
	v[0] = x[5] * x[5];
	mathopt3_pd[9] = x[5] + x[5];
	v[1] += v[0];
	v[0] = -v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	t1 = 2.*x[0];
	t1 += 5.*x[1];
	t1 += x[2];
	t1 += x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 3.*x[0];
	t1 += -2.*x[1];
	t1 += x[2];
	t1 += -4.*x[3];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = -mathopt3_pd[1];
	J[0] = mathopt3_pd[0];
	J[19] = -1.;
	J[26] = 1.;
	J[31] = 1.;

   /*** derivatives for constraint 2 ***/

	J[32] = -mathopt3_pd[3];
	J[13] = mathopt3_pd[3];
	J[1] = mathopt3_pd[3];
	J[1] -= mathopt3_pd[2];
	J[20] = -x[0]*x[1];
	J[7] = -x[0]*x[3];
	J[13] += x[0];
	J[1] += x[2];
	J[27] = -1.;

   /*** derivatives for constraint 3 ***/

	J[21] = -mathopt3_pd[7]*x[2];
	J[14] = -mathopt3_pd[7]*x[3];
	J[28] = mathopt3_pd[4]*mathopt3_pd[6] + -1.;
	J[33] = mathopt3_pd[5]*x[1];
	J[8] = mathopt3_pd[5]*x[5] + 1.;

   /*** derivatives for constraint 4 ***/

	J[34] = -mathopt3_pd[9];
	J[29] = -x[3];
	J[22] = -x[4];
	J[15] = -mathopt3_pd[8];
	J[9] = x[0];
	J[2] = x[1];

   /*** derivatives for constraint 5 ***/

	J[3] = 2.;
	J[10] = 5.;
	J[16] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 6 ***/

	J[4] = 3.;
	J[11] = -2.;
	J[17] = 1.;
	J[24] = -4.;

   /*** derivatives for constraint 7 ***/

	J[5] = 1.;
	J[12] = 1.;
	J[18] = 1.;
	J[25] = 1.;
	J[30] = 1.;
	J[35] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
