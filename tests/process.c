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
 fint process_auxcom_[1] = { 4 /* nlc */ };
 fint process_funcom_[38] = {
	10 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	21 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	8,
	10,
	12,
	15,
	17,
	19,
	20,
	22,

	/* rownos */
	1,
	2,
	5,
	1,
	4,
	5,
	4,
	4,
	5,
	2,
	3,
	1,
	3,
	4,
	2,
	6,
	3,
	7,
	2,
	6,
	7 };

 real process_boundc_[1+20+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		5000.,
		10.,
		2000.,
		0.,
		16000.,
		0.,
		2000.,
		85.,
		93.,
		3.,
		12.,
		1.2,
		4.,
		90.,
		95.,
		0.,
		120.,
		145.,
		162.,
		0.,
		0.,
		0.,
		0.,
		57.425,
		57.425,
		0.,
		0.,
		0.,
		0.,
		35.82,
		35.82,
		-133.,
		-133.};

 real process_x0comn_[10] = {
		3048.,
		1745.,
		12000.,
		1974.,
		89.2,
		8.,
		3.6,
		92.8,
		110.,
		145. };

 static real process_pd[13];
static real process_old_x[10];
static int process_xkind = -1;

 static int
process_xcheck(real *x)
{
	real *x1 = process_old_x, *xe = x + 10;
	errno = 0;
	if (process_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	process_xkind = 0;
	return 1;
	}
 real
process_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], rv;
	fint wantfg = *needfg;
	if (process_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	process_pd[12] = -0.063 * x[0];
	v[0] = process_pd[12] * x[7];
	rv = v[0] + 5.04*x[1];
	rv += 0.035*x[2];
	rv += 3.36*x[3];
	rv += 10.*x[8];
	;}

	if (wantfg & 2) {
	g[7] = process_pd[12];
	g[0] = -x[7]*0.063;
	g[1] = 5.04;
	g[2] = 0.035;
	g[3] = 3.36;
	g[8] = 10.;
	}

	return rv;
}

 void
process_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (process_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	process_pd[0] = 0.13167 * x[5];
	process_pd[3] = process_pd[0] + 1.12;
	process_pd[1] = x[5] * x[5];
	process_pd[2] = x[5] + x[5];
	v[1] = -0.00667 * process_pd[1];
	process_pd[3] += v[1];
	v[1] = process_pd[3] * x[1];
	v[2] = -v[1];
	t1 = v[2] + x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	process_pd[4] = -0.001 * x[0];
	process_pd[5] = process_pd[4] * x[6];
	v[0] = process_pd[5] * x[4];
	v[1] = 98. - x[4];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	process_pd[6] = 1. / v[1];
	process_pd[7] = -v[2] * process_pd[6];
	t1 = v[2] + x[8];
	c[1] = t1;

  /***  constraint 3  ***/

	process_pd[8] = x[5] * x[5];
	process_pd[9] = x[5] + x[5];
	v[0] = 0.038 * process_pd[8];
	t1 = v[0] + -0.325*x[4];
	t1 += -1.098*x[5];
	t1 += x[7];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[2] + x[3];
	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[1] = v[0] / x[1];
	process_pd[10] = 1. / x[1];
	process_pd[11] = -v[1] * process_pd[10];
	v[0] = -v[1];
	t1 = v[0] + x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 1.22*x[0];
	t1 += -x[1];
	t1 += -x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[6];
	t1 += 0.222*x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -3.*x[7];
	t1 += x[9];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[3] = -process_pd[3];
	dv[0] = -x[1];
	dv[0] = -dv[0]*0.00667;
	J[11] = dv[0]*process_pd[2];
	J[11] -= x[1]*0.13167;
	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[9] = -process_pd[7];
	J[9] += process_pd[6]*process_pd[5];
	dv[0] = process_pd[6]*x[4];
	J[14] = dv[0]*process_pd[4];
	dv[0] *= x[6];
	J[1] = -dv[0]*0.001;
	J[18] = 1.;

   /*** derivatives for constraint 3 ***/

	J[12] = 0.038*process_pd[9] + -1.098;
	J[10] = -0.325;
	J[16] = 1.;

   /*** derivatives for constraint 4 ***/

	J[4] = -process_pd[11];
	J[7] = -process_pd[10];
	J[6] = -process_pd[10];
	J[13] = 1.;

   /*** derivatives for constraint 5 ***/

	J[2] = 1.22;
	J[5] = -1.;
	J[8] = -1.;

   /*** derivatives for constraint 6 ***/

	J[15] = 1.;
	J[19] = 0.222;

   /*** derivatives for constraint 7 ***/

	J[17] = -3.;
	J[20] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
