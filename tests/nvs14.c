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
 fint nvs14_auxcom_[1] = { 3 /* nlc */ };
 fint nvs14_funcom_[31] = {
	8 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	12,
	14,
	15,
	16,
	17,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3,
	1,
	2,
	3,
	1,
	2,
	1,
	3,
	1,
	2,
	3 };

 real nvs14_boundc_[1+16+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		92.,
		90.,
		110.,
		20.,
		25.,
		85.334407,
		85.334407,
		80.51249,
		80.51249,
		9.300961,
		9.300961};

 real nvs14_x0comn_[8] = {
		100.,
		100.,
		100.,
		100.,
		100.,
		0.,
		90.,
		20. };

 static real nvs14_pd[13];
static real nvs14_old_x[8];
static int nvs14_xkind = -1;

 static int
nvs14_xcheck(real *x)
{
	real *x1 = nvs14_old_x, *xe = x + 8;
	errno = 0;
	if (nvs14_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs14_xkind = 0;
	return 1;
	}
 real
nvs14_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (nvs14_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs14_pd[10] = x[1] * x[1];
	nvs14_pd[11] = x[1] + x[1];
	v[0] = 5.3578547 * nvs14_pd[10];
	nvs14_pd[12] = 0.8356891 * x[0];
	v[1] = nvs14_pd[12] * x[2];
	v[0] += v[1];
	v[0] += -40792.141;
	rv = v[0] + 37.293239*x[0];
	;}

	if (wantfg & 2) {
	g[2] = nvs14_pd[12];
	g[0] = x[2]*0.8356891 + 37.293239;
	g[1] = 5.3578547*nvs14_pd[11];
	}

	return rv;
}

 void
nvs14_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (nvs14_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs14_pd[0] = 0.0056858 * x[3];
	v[0] = nvs14_pd[0] * x[2];
	v[1] = -v[0];
	nvs14_pd[1] = 0.0006262 * x[0];
	v[0] = nvs14_pd[1] * x[4];
	v[2] = -v[0];
	v[1] += v[2];
	nvs14_pd[2] = 0.0022053 * x[1];
	v[2] = nvs14_pd[2] * x[2];
	v[1] += v[2];
	t1 = v[1] + x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	nvs14_pd[3] = 0.0071317 * x[3];
	v[0] = nvs14_pd[3] * x[2];
	v[1] = -v[0];
	nvs14_pd[4] = 0.0029955 * x[0];
	v[0] = nvs14_pd[4] * x[3];
	v[2] = -v[0];
	v[1] += v[2];
	nvs14_pd[5] = x[1] * x[1];
	nvs14_pd[6] = x[1] + x[1];
	v[2] = -0.0021813 * nvs14_pd[5];
	v[1] += v[2];
	t1 = v[1] + x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	nvs14_pd[7] = 0.0047026 * x[1];
	v[0] = nvs14_pd[7] * x[2];
	nvs14_pd[8] = 0.0012547 * x[0];
	v[1] = nvs14_pd[8] * x[1];
	v[0] += v[1];
	nvs14_pd[9] = 0.0019085 * x[1];
	v[1] = nvs14_pd[9] * x[4];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = nvs14_pd[2];
	J[3] = x[2]*0.0022053;
	J[11] = -nvs14_pd[1];
	J[0] = -x[4]*0.0006262;
	J[6] -= nvs14_pd[0];
	J[9] = -x[2]*0.0056858;
	J[13] = 1.;

   /*** derivatives for constraint 2 ***/

	J[4] = -0.0021813*nvs14_pd[6];
	J[10] = -nvs14_pd[4];
	J[1] = -x[3]*0.0029955;
	J[7] = -nvs14_pd[3];
	J[10] -= x[2]*0.0071317;
	J[14] = 1.;

   /*** derivatives for constraint 3 ***/

	J[12] = -nvs14_pd[9];
	J[5] = -x[4]*0.0019085;
	J[5] -= nvs14_pd[8];
	J[2] = -x[1]*0.0012547;
	J[8] = -nvs14_pd[7];
	J[5] -= x[2]*0.0047026;
	J[15] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
