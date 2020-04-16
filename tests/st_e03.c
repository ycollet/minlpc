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
 fint st_e03_auxcom_[1] = { 4 /* nlc */ };
 fint st_e03_funcom_[38] = {
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
	13,
	15,
	17,
	18,
	20,
	22,

	/* rownos */
	1,
	4,
	5,
	3,
	4,
	5,
	2,
	1,
	2,
	1,
	3,
	4,
	2,
	6,
	1,
	7,
	3,
	3,
	5,
	6,
	7 };

 real st_e03_boundc_[1+20+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		5000.,
		1.,
		2000.,
		0.,
		120.,
		85.,
		93.,
		3.,
		12.,
		1.2,
		4.,
		90.,
		95.,
		1.,
		16000.,
		0.,
		2000.,
		145.,
		162.,
		57.425,
		57.425,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7e308,
		0.,
		0.,
		35.82,
		35.82,
		133.,
		133.};

 real st_e03_x0comn_[10] = {
		1.,
		1.,
		0.,
		85.,
		3.,
		1.2,
		90.,
		1.,
		0.,
		145. };

 static real st_e03_pd[9];
static real st_e03_old_x[10];
static int st_e03_xkind = -1;

 static int
st_e03_xcheck(real *x)
{
	real *x1 = st_e03_old_x, *xe = x + 10;
	errno = 0;
	if (st_e03_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e03_xkind = 0;
	return 1;
	}
 real
st_e03_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[1], rv;
	fint wantfg = *needfg;
	if (st_e03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e03_pd[8] = -0.063 * x[0];
	v[0] = st_e03_pd[8] * x[6];
	rv = v[0] + 5.04*x[1];
	rv += 10.*x[2];
	rv += 0.035*x[7];
	rv += 3.36*x[8];
	;}

	if (wantfg & 2) {
	g[6] = st_e03_pd[8];
	g[0] = -x[6]*0.063;
	g[1] = 5.04;
	g[2] = 10.;
	g[7] = 0.035;
	g[8] = 3.36;
	}

	return rv;
}

 void
st_e03_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (st_e03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e03_pd[0] = x[4] * x[4];
	st_e03_pd[1] = x[4] + x[4];
	v[0] = 0.038 * st_e03_pd[0];
	t1 = v[0] + -0.325*x[3];
	t1 += -1.098*x[4];
	t1 += x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	st_e03_pd[2] = x[0] * x[5];
	v[0] = st_e03_pd[2] * x[3];
	st_e03_pd[3] = 1000. * x[2];
	v[1] = st_e03_pd[3] * x[3];
	v[2] = v[0] + v[1];
	t1 = v[2] + -98000.*x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[1] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	t1 += x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	st_e03_pd[4] = 0.13167 * x[4];
	v[0] = st_e03_pd[4] * x[1];
	st_e03_pd[5] = x[4] * x[4];
	st_e03_pd[6] = x[4] + x[4];
	st_e03_pd[7] = 0.00667 * st_e03_pd[5];
	v[1] = st_e03_pd[7] * x[1];
	v[2] = v[0] - v[1];
	t1 = v[2] + -x[0];
	t1 += 1.12*x[1];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -1.22*x[0];
	t1 += x[1];
	t1 += x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[5];
	t1 += 0.222*x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 3.*x[6];
	t1 += -x[9];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[9] = 0.038*st_e03_pd[1] + -1.098;
	J[7] = -0.325;
	J[14] = 1.;

   /*** derivatives for constraint 2 ***/

	J[8] = st_e03_pd[3];
	J[6] = x[3]*1000. + -98000.;
	J[8] += st_e03_pd[2];
	J[12] = x[3]*x[0];
	J[0] = x[3]*x[5];

   /*** derivatives for constraint 3 ***/

	J[10] = -x[1];
	J[3] = -x[4];
	J[16] = 1.;
	J[17] = 1.;

   /*** derivatives for constraint 4 ***/

	J[4] = -st_e03_pd[7] + 1.12;
	dv[0] = -x[1]*0.00667;
	J[11] = dv[0]*st_e03_pd[6];
	J[4] += st_e03_pd[4];
	J[11] += x[1]*0.13167;
	J[1] = -1.;

   /*** derivatives for constraint 5 ***/

	J[2] = -1.22;
	J[5] = 1.;
	J[18] = 1.;

   /*** derivatives for constraint 6 ***/

	J[13] = 1.;
	J[19] = 0.222;

   /*** derivatives for constraint 7 ***/

	J[15] = 3.;
	J[20] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
