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
 fint prob02_auxcom_[1] = { 5 /* nlc */ };
 fint prob02_funcom_[38] = {
	6 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	25 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	10,
	14,
	18,
	22,
	26,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	1,
	6,
	7,
	8,
	2,
	6,
	7,
	8,
	3,
	6,
	7,
	8,
	4,
	6,
	7,
	8,
	5,
	6,
	7,
	8 };

 real prob02_boundc_[1+12+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		100.,
		1.,
		100.,
		1.,
		100.,
		1.,
		100.,
		1.,
		100.,
		1.,
		100.,
		-1.7e308,
		-60.,
		-1.7e308,
		-30.,
		-1.7e308,
		-75.,
		-1.7e308,
		-30.,
		-1.7e308,
		-100.,
		-1.7e308,
		8000.,
		7700.,
		1.7e308,
		-1.7e308,
		20.};

 real prob02_x0comn_[6] = {
		15.,
		4.,
		2.,
		5.,
		2.,
		7. };

static real prob02_old_x[6];
static int prob02_xkind = -1;

 static int
prob02_xcheck(real *x)
{
	real *x1 = prob02_old_x, *xe = x + 6;
	errno = 0;
	if (prob02_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	prob02_xkind = 0;
	return 1;
	}
 real
prob02_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (prob02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 8000.*x[0];
	rv += -330.*x[1];
	rv += -360.*x[2];
	rv += -370.*x[3];
	rv += -415.*x[4];
	rv += -435.*x[5];
	;}

	if (wantfg & 2) {
	g[0] = 8000.;
	g[1] = -330.;
	g[2] = -360.;
	g[3] = -370.;
	g[4] = -415.;
	g[5] = -435.;
	}

	return rv;
}

 void
prob02_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (prob02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	v[1] = -v[0];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = x[0] * x[2];
	v[1] = -v[0];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = x[0] * x[3];
	v[1] = -v[0];
	c[2] = v[1];

  /***  constraint 4  ***/

	v[0] = x[0] * x[4];
	v[1] = -v[0];
	c[3] = v[1];

  /***  constraint 5  ***/

	v[0] = x[0] * x[5];
	v[1] = -v[0];
	c[4] = v[1];

  /***  constraint 6  ***/

	t1 = 330.*x[1];
	t1 += 360.*x[2];
	t1 += 370.*x[3];
	t1 += 415.*x[4];
	t1 += 435.*x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 330.*x[1];
	t1 += 360.*x[2];
	t1 += 370.*x[3];
	t1 += 415.*x[4];
	t1 += 435.*x[5];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[5] = -x[0];
	J[0] = -x[1];

   /*** derivatives for constraint 2 ***/

	J[9] = -x[0];
	J[1] = -x[2];

   /*** derivatives for constraint 3 ***/

	J[13] = -x[0];
	J[2] = -x[3];

   /*** derivatives for constraint 4 ***/

	J[17] = -x[0];
	J[3] = -x[4];

   /*** derivatives for constraint 5 ***/

	J[21] = -x[0];
	J[4] = -x[5];

   /*** derivatives for constraint 6 ***/

	J[6] = 330.;
	J[10] = 360.;
	J[14] = 370.;
	J[18] = 415.;
	J[22] = 435.;

   /*** derivatives for constraint 7 ***/

	J[7] = 330.;
	J[11] = 360.;
	J[15] = 370.;
	J[19] = 415.;
	J[23] = 435.;

   /*** derivatives for constraint 8 ***/

	J[8] = 1.;
	J[12] = 1.;
	J[16] = 1.;
	J[20] = 1.;
	J[24] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
