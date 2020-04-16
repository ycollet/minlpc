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
 fint gear2_auxcom_[1] = { 0 /* nlc */ };
 fint gear2_funcom_[63] = {
	28 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	28 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	3,
	3,
	3,
	3,
	3,
	3,
	4,
	4,
	4,
	4,
	4,
	4 };

 real gear2_boundc_[1+56+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
		12.,
		60.,
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real gear2_x0comn_[28] = {
		12.,
		12.,
		12.,
		12.,
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
		0.,
		0.,
		0.,
		0. };

 static real gear2_pd[3];
static real gear2_old_x[28];
static int gear2_xkind = -1;

 static int
gear2_xcheck(real *x)
{
	real *x1 = gear2_old_x, *xe = x + 28;
	errno = 0;
	if (gear2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	gear2_xkind = 0;
	return 1;
	}
 real
gear2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2];
	fint wantfg = *needfg;
	if (gear2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[1];
	v[1] = x[2] * x[3];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	gear2_pd[0] = 1. / v[1];
	gear2_pd[1] = -v[2] * gear2_pd[0];
	v[1] = 0.14427932477276 - v[2];
	v[2] = v[1] * v[1];
	gear2_pd[2] = v[1] + v[1];
	;}

	if (wantfg & 2) {
	gear2_pd[2] += gear2_pd[2];
	dv[0] = -gear2_pd[2]*gear2_pd[1];
	dv[1] = -gear2_pd[2]*gear2_pd[0];
	g[3] = dv[0]*x[2];
	g[2] = dv[0]*x[3];
	g[1] = dv[1]*x[0];
	g[0] = dv[1]*x[1];
	}

	return v[2];
}

 void
gear2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (gear2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += -x[4];
	t1 += -2.*x[5];
	t1 += -4.*x[6];
	t1 += -8.*x[7];
	t1 += -16.*x[8];
	t1 += -32.*x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	t1 += -x[10];
	t1 += -2.*x[11];
	t1 += -4.*x[12];
	t1 += -8.*x[13];
	t1 += -16.*x[14];
	t1 += -32.*x[15];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	t1 += -x[16];
	t1 += -2.*x[17];
	t1 += -4.*x[18];
	t1 += -8.*x[19];
	t1 += -16.*x[20];
	t1 += -32.*x[21];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[3];
	t1 += -x[22];
	t1 += -2.*x[23];
	t1 += -4.*x[24];
	t1 += -8.*x[25];
	t1 += -16.*x[26];
	t1 += -32.*x[27];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[4] = -1.;
	J[5] = -2.;
	J[6] = -4.;
	J[7] = -8.;
	J[8] = -16.;
	J[9] = -32.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[10] = -1.;
	J[11] = -2.;
	J[12] = -4.;
	J[13] = -8.;
	J[14] = -16.;
	J[15] = -32.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[16] = -1.;
	J[17] = -2.;
	J[18] = -4.;
	J[19] = -8.;
	J[20] = -16.;
	J[21] = -32.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;
	J[22] = -1.;
	J[23] = -2.;
	J[24] = -4.;
	J[25] = -8.;
	J[26] = -16.;
	J[27] = -32.;
	}
}
#ifdef __cplusplus
	}
#endif
