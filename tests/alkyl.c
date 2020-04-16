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
 fint alkyl_auxcom_[1] = { 6 /* nlc */ };
 fint alkyl_funcom_[46] = {
	14 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	25 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	6,
	9,
	10,
	12,
	15,
	17,
	19,
	20,
	21,
	22,
	23,
	24,
	26,

	/* rownos */
	1,
	3,
	7,
	4,
	6,
	2,
	3,
	7,
	1,
	1,
	4,
	2,
	3,
	4,
	1,
	5,
	5,
	6,
	3,
	4,
	5,
	6,
	2,
	2,
	7 };

 real alkyl_boundc_[1+28+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		5.,
		0.9,
		0.95,
		0.,
		2.,
		0.,
		1.2,
		0.85,
		0.93,
		3.,
		12.,
		1.2,
		4.,
		1.45,
		1.62,
		0.99,
		1.01010101010101,
		0.99,
		1.01010101010101,
		0.9,
		1.11111111111111,
		0.99,
		1.01010101010101,
		0.,
		1.6,
		0.,
		2.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.57425,
		0.57425,
		35.82,
		35.82,
		-1.33,
		-1.33,
		0.,
		0.};

 real alkyl_x0comn_[14] = {
		3.048,
		0.928,
		1.745,
		1.1,
		0.893,
		8.,
		3.6,
		1.45,
		1.,
		1.,
		1.,
		1.,
		1.2,
		1.974 };

 static real alkyl_pd[7];
static real alkyl_old_x[14];
static int alkyl_xkind = -1;

 static int
alkyl_xcheck(real *x)
{
	real *x1 = alkyl_old_x, *xe = x + 14;
	errno = 0;
	if (alkyl_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	alkyl_xkind = 0;
	return 1;
	}
 real
alkyl_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], rv;
	fint wantfg = *needfg;
	if (alkyl_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	alkyl_pd[6] = -6.3 * x[0];
	v[0] = alkyl_pd[6] * x[1];
	rv = v[0] + 5.04*x[2];
	rv += x[3];
	rv += 0.35*x[12];
	rv += 3.36*x[13];
	;}

	if (wantfg & 2) {
	g[1] = alkyl_pd[6];
	g[0] = -x[1]*6.3;
	g[2] = 5.04;
	g[3] = 1.;
	g[12] = 0.35;
	g[13] = 3.36;
	}

	return rv;
}

 void
alkyl_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (alkyl_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	alkyl_pd[0] = 0.01 * x[0];
	v[0] = alkyl_pd[0] * x[6];
	alkyl_pd[1] = v[0] + x[3];
	v[0] = alkyl_pd[1] * x[4];
	v[2] = -v[0];
	t1 = v[2] + 0.98*x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] * x[5];
	v[1] = -v[0];
	t1 = v[1] + 10.*x[12];
	t1 += x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[8];
	v[1] = 0.13167 * x[5];
	v[2] = v[1] + 1.12;
	alkyl_pd[2] = 0.0067 * x[5];
	v[1] = alkyl_pd[2] * x[5];
	alkyl_pd[3] = v[2] - v[1];
	v[1] = alkyl_pd[3] * x[2];
	v[2] = v[0] - v[1];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = x[1] * x[9];
	alkyl_pd[4] = 0.038 * x[5];
	alkyl_pd[5] = alkyl_pd[4] * x[5];
	v[1] = 0.01 * alkyl_pd[5];
	v[2] = v[0] + v[1];
	t1 = v[2] + -0.325*x[4];
	t1 += -0.010980000000000002*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[6] * x[10];
	t1 = v[0] + 22.2*x[7];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[7] * x[11];
	t1 = v[0] + -3.*x[1];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += -0.819672131147541*x[2];
	t1 += -0.819672131147541*x[13];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[9] = -alkyl_pd[1];
	J[8] = -x[4] + 0.98;
	J[14] = -x[4]*alkyl_pd[0];
	dv[0] = -x[4]*x[6];
	J[0] = dv[0]*0.01;

   /*** derivatives for constraint 2 ***/

	J[11] = -x[2];
	J[5] = -x[5];
	J[22] = 10.;
	J[23] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -alkyl_pd[3];
	dv[0] = x[2];
	J[12] = dv[0]*alkyl_pd[2];
	dv[0] *= x[5];
	J[12] += dv[0]*0.0067;
	J[12] -= x[2]*0.13167;
	J[18] = x[0];
	J[1] = x[8];

   /*** derivatives for constraint 4 ***/

	J[13] = 0.01*alkyl_pd[4] + -0.010980000000000002;
	dv[0] = 0.01*x[5];
	J[13] += dv[0]*0.038;
	J[19] = x[1];
	J[3] = x[9];
	J[10] = -0.325;

   /*** derivatives for constraint 5 ***/

	J[20] = x[6];
	J[15] = x[10];
	J[16] = 22.2;

   /*** derivatives for constraint 6 ***/

	J[21] = x[7];
	J[17] = x[11];
	J[4] = -3.;

   /*** derivatives for constraint 7 ***/

	J[2] = 1.;
	J[7] = -0.819672131147541;
	J[24] = -0.819672131147541;
	}
}
#ifdef __cplusplus
	}
#endif
