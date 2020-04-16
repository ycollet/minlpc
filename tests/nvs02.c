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
 fint nvs02_auxcom_[1] = { 3 /* nlc */ };
 fint nvs02_funcom_[31] = {
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

 real nvs02_boundc_[1+16+6] /* Infinity, variable bounds, constraint bounds */ = {
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

 real nvs02_x0comn_[8] = {
		100.,
		100.,
		100.,
		100.,
		100.,
		0.,
		90.,
		20. };

 static real nvs02_pd[14];
static real nvs02_old_x[8];
static int nvs02_xkind = -1;

 static int
nvs02_xcheck(real *x)
{
	real *x1 = nvs02_old_x, *xe = x + 8;
	errno = 0;
	if (nvs02_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs02_xkind = 0;
	return 1;
	}
 real
nvs02_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[1], rv;
	fint wantfg = *needfg;
	if (nvs02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs02_pd[10] = x[1] * x[1];
	nvs02_pd[11] = x[1] + x[1];
	v[0] = 0.0005357854699999994 * nvs02_pd[10];
	nvs02_pd[12] = 0.8356891 * x[0];
	nvs02_pd[13] = nvs02_pd[12] * x[2];
	v[1] = 9.99999999999999e-05 * nvs02_pd[13];
	v[0] += v[1];
	v[0] += 5.9207859;
	rv = v[0] + 0.003729323899999996*x[0];
	;}

	if (wantfg & 2) {
	g[2] = 9.99999999999999e-05*nvs02_pd[12];
	dv[0] = 9.99999999999999e-05*x[2];
	g[0] = dv[0]*0.8356891 + 0.003729323899999996;
	g[1] = 0.0005357854699999994*nvs02_pd[11];
	}

	return rv;
}

 void
nvs02_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (nvs02_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs02_pd[0] = 0.0056858 * x[3];
	v[0] = nvs02_pd[0] * x[2];
	v[1] = -v[0];
	nvs02_pd[1] = 0.0006262 * x[0];
	v[0] = nvs02_pd[1] * x[4];
	v[2] = -v[0];
	v[1] += v[2];
	nvs02_pd[2] = 0.0022053 * x[1];
	v[2] = nvs02_pd[2] * x[2];
	v[1] += v[2];
	t1 = v[1] + x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	nvs02_pd[3] = 0.0071317 * x[3];
	v[0] = nvs02_pd[3] * x[2];
	v[1] = -v[0];
	nvs02_pd[4] = 0.0029955 * x[0];
	v[0] = nvs02_pd[4] * x[3];
	v[2] = -v[0];
	v[1] += v[2];
	nvs02_pd[5] = x[1] * x[1];
	nvs02_pd[6] = x[1] + x[1];
	v[2] = -0.0021813 * nvs02_pd[5];
	v[1] += v[2];
	t1 = v[1] + x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	nvs02_pd[7] = 0.0047026 * x[1];
	v[0] = nvs02_pd[7] * x[2];
	nvs02_pd[8] = 0.0012547 * x[0];
	v[1] = nvs02_pd[8] * x[1];
	v[0] += v[1];
	nvs02_pd[9] = 0.0019085 * x[1];
	v[1] = nvs02_pd[9] * x[4];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[7];
	c[2] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[6] = nvs02_pd[2];
	J[3] = x[2]*0.0022053;
	J[11] = -nvs02_pd[1];
	J[0] = -x[4]*0.0006262;
	J[6] -= nvs02_pd[0];
	J[9] = -x[2]*0.0056858;
	J[13] = 1.;

   /*** derivatives for constraint 2 ***/

	J[4] = -0.0021813*nvs02_pd[6];
	J[10] = -nvs02_pd[4];
	J[1] = -x[3]*0.0029955;
	J[7] = -nvs02_pd[3];
	J[10] -= x[2]*0.0071317;
	J[14] = 1.;

   /*** derivatives for constraint 3 ***/

	J[12] = -nvs02_pd[9];
	J[5] = -x[4]*0.0019085;
	J[5] -= nvs02_pd[8];
	J[2] = -x[1]*0.0012547;
	J[8] = -nvs02_pd[7];
	J[5] -= x[2]*0.0047026;
	J[15] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
