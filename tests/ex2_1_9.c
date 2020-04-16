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
 fint ex2_1_9_auxcom_[1] = { 0 /* nlc */ };
 fint ex2_1_9_funcom_[27] = {
	10 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	10 /* nzc */,
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

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real ex2_1_9_boundc_[1+20+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.7e308,
		1.,
		1.};

 real ex2_1_9_x0comn_[10] = {
		0.,
		0.,
		0.,
		0.25,
		0.25,
		0.25,
		0.25,
		0.,
		0.,
		0. };

static real ex2_1_9_old_x[10];
static int ex2_1_9_xkind = -1;

 static int
ex2_1_9_xcheck(real *x)
{
	real *x1 = ex2_1_9_old_x, *xe = x + 10;
	errno = 0;
	if (ex2_1_9_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex2_1_9_xkind = 0;
	return 1;
	}
 real
ex2_1_9_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (ex2_1_9_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[1];
	v[1] = x[1] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[4];
	v[0] += v[1];
	v[1] = x[4] * x[5];
	v[0] += v[1];
	v[1] = x[5] * x[6];
	v[0] += v[1];
	v[1] = x[6] * x[7];
	v[0] += v[1];
	v[1] = x[7] * x[8];
	v[0] += v[1];
	v[1] = x[8] * x[9];
	v[0] += v[1];
	v[1] = x[0] * x[2];
	v[0] += v[1];
	v[1] = x[1] * x[3];
	v[0] += v[1];
	v[1] = x[2] * x[4];
	v[0] += v[1];
	v[1] = x[3] * x[5];
	v[0] += v[1];
	v[1] = x[4] * x[6];
	v[0] += v[1];
	v[1] = x[5] * x[7];
	v[0] += v[1];
	v[1] = x[6] * x[8];
	v[0] += v[1];
	v[1] = x[7] * x[9];
	v[0] += v[1];
	v[1] = x[0] * x[8];
	v[0] += v[1];
	v[1] = x[0] * x[9];
	v[0] += v[1];
	v[1] = x[1] * x[9];
	v[0] += v[1];
	v[1] = x[0] * x[4];
	v[0] += v[1];
	v[1] = x[3] * x[6];
	v[0] += v[1];
	v[1] = -v[0];
	;}

	if (wantfg & 2) {
	g[6] = -x[3];
	g[3] = -x[6];
	g[4] = -x[0];
	g[0] = -x[4];
	g[9] = -x[1];
	g[1] = -x[9];
	g[9] -= x[0];
	g[0] -= x[9];
	g[8] = -x[0];
	g[0] -= x[8];
	g[9] -= x[7];
	g[7] = -x[9];
	g[8] -= x[6];
	g[6] -= x[8];
	g[7] -= x[5];
	g[5] = -x[7];
	g[6] -= x[4];
	g[4] -= x[6];
	g[5] -= x[3];
	g[3] -= x[5];
	g[4] -= x[2];
	g[2] = -x[4];
	g[3] -= x[1];
	g[1] -= x[3];
	g[2] -= x[0];
	g[0] -= x[2];
	g[9] -= x[8];
	g[8] -= x[9];
	g[8] -= x[7];
	g[7] -= x[8];
	g[7] -= x[6];
	g[6] -= x[7];
	g[6] -= x[5];
	g[5] -= x[6];
	g[5] -= x[4];
	g[4] -= x[5];
	g[4] -= x[3];
	g[3] -= x[4];
	g[3] -= x[2];
	g[2] -= x[3];
	g[2] -= x[1];
	g[1] -= x[2];
	g[1] -= x[0];
	g[0] -= x[1];
	}

	return v[1];
}

 void
ex2_1_9_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex2_1_9_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[1] = 1.;
	J[2] = 1.;
	J[3] = 1.;
	J[4] = 1.;
	J[5] = 1.;
	J[6] = 1.;
	J[7] = 1.;
	J[8] = 1.;
	J[9] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
