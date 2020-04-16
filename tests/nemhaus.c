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
 fint nemhaus_auxcom_[1] = { 0 /* nlc */ };
 fint nemhaus_funcom_[17] = {
	5 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	5 /* nzc */,
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

	/* rownos */
	1,
	2,
	3,
	4,
	5 };

 real nemhaus_boundc_[1+10+10] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.};

 real nemhaus_x0comn_[5] = {
		0.,
		0.,
		0.,
		0.,
		0. };

 static real nemhaus_pd[9];
static real nemhaus_old_x[5];
static int nemhaus_xkind = -1;

 static int
nemhaus_xcheck(real *x)
{
	real *x1 = nemhaus_old_x, *xe = x + 5;
	errno = 0;
	if (nemhaus_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nemhaus_xkind = 0;
	return 1;
	}
 real
nemhaus_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (nemhaus_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nemhaus_pd[0] = 2. * x[0];
	v[0] = nemhaus_pd[0] * x[2];
	nemhaus_pd[1] = 4. * x[0];
	v[1] = nemhaus_pd[1] * x[3];
	v[0] += v[1];
	nemhaus_pd[2] = 3. * x[0];
	v[1] = nemhaus_pd[2] * x[4];
	v[0] += v[1];
	nemhaus_pd[3] = 6. * x[1];
	v[1] = nemhaus_pd[3] * x[2];
	v[0] += v[1];
	nemhaus_pd[4] = 2. * x[1];
	v[1] = nemhaus_pd[4] * x[3];
	v[0] += v[1];
	nemhaus_pd[5] = 3. * x[1];
	v[1] = nemhaus_pd[5] * x[4];
	v[0] += v[1];
	nemhaus_pd[6] = 5. * x[2];
	v[1] = nemhaus_pd[6] * x[3];
	v[0] += v[1];
	nemhaus_pd[7] = 3. * x[2];
	v[1] = nemhaus_pd[7] * x[4];
	v[0] += v[1];
	nemhaus_pd[8] = 3. * x[3];
	v[1] = nemhaus_pd[8] * x[4];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[4] = nemhaus_pd[8];
	g[3] = x[4]*3.;
	g[4] += nemhaus_pd[7];
	g[2] = x[4]*3.;
	g[3] += nemhaus_pd[6];
	g[2] += x[3]*5.;
	g[4] += nemhaus_pd[5];
	g[1] = x[4]*3.;
	g[3] += nemhaus_pd[4];
	g[1] += x[3]*2.;
	g[2] += nemhaus_pd[3];
	g[1] += x[2]*6.;
	g[4] += nemhaus_pd[2];
	g[0] = x[4]*3.;
	g[3] += nemhaus_pd[1];
	g[0] += x[3]*4.;
	g[2] += nemhaus_pd[0];
	g[0] += x[2]*2.;
	}

	return v[0];
}

 void
nemhaus_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (nemhaus_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[4];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
