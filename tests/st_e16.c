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
 fint st_e16_auxcom_[1] = { 4 /* nlc */ };
 fint st_e16_funcom_[49] = {
	12 /* nvar */,
	1 /* nobj */,
	9 /* ncon */,
	30 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	13,
	17,
	20,
	23,
	26,
	29,
	30,
	31,

	/* rownos */
	1,
	3,
	2,
	3,
	2,
	4,
	1,
	4,
	1,
	3,
	6,
	8,
	2,
	4,
	7,
	9,
	2,
	7,
	8,
	1,
	6,
	9,
	1,
	5,
	6,
	2,
	5,
	7,
	8,
	9 };

 real st_e16_boundc_[1+24+18] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		100.,
		290.,
		100.,
		310.,
		100.,
		290.,
		100.,
		330.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		0.,
		0.,
		0.,
		800.,
		800.,
		1000.,
		1000.,
		10.,
		10.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real st_e16_x0comn_[12] = {
		100.,
		100.,
		100.,
		100.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_e16_pd[15];
static real st_e16_old_x[12];
static int st_e16_xkind = -1;

 static int
st_e16_xcheck(real *x)
{
	real *x1 = st_e16_old_x, *xe = x + 12;
	errno = 0;
	if (st_e16_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e16_xkind = 0;
	return 1;
	}
 real
st_e16_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[7], dv[8];
	fint wantfg = *needfg;
	if (st_e16_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e16_pd[3] = 320. - x[1];
	st_e16_pd[2] = 300. - x[0];
	v[2] = st_e16_pd[3] * st_e16_pd[2];
	st_e16_pd[4] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (st_e16_pd[4] <= 0.) {
	domain_("sqrt'", &st_e16_pd[4], 5L);
	}
	st_e16_pd[5] = 0.5 / st_e16_pd[4];
	st_e16_pd[6] = 0.666666666666667 * st_e16_pd[4];
	v[2] = -0.166666666666667 * x[0];
	v[2] += st_e16_pd[6];
	v[3] = -0.166666666666667 * x[1];
	v[2] += v[3];
	v[2] *= 2.5;
	v[3] = v[2] + 258.333333333333;
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = 800. / v[3];
	st_e16_pd[7] = -v[2] / v[3];
	v[3] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	st_e16_pd[8] = 0.6*(v[3]/v[2]);
	} else if (0.6 > 1.) {
	st_e16_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[3] *= 1200.;
	st_e16_pd[10] = 340. - x[3];
	st_e16_pd[9] = 300. - x[2];
	v[5] = st_e16_pd[10] * st_e16_pd[9];
	st_e16_pd[11] = sqrt(v[5]);
	if (errno) in_trouble("sqrt",v[5]);
	if (st_e16_pd[11] <= 0.) {
	domain_("sqrt'", &st_e16_pd[11], 5L);
	}
	st_e16_pd[12] = 0.5 / st_e16_pd[11];
	v[5] = 0.666666666666667 * st_e16_pd[11];
	v[5] += 106.666666666667;
	v[6] = -0.166666666666667 * x[2];
	v[5] += v[6];
	v[6] = -0.166666666666667 * x[3];
	v[5] += v[6];
	if (v[5] == 0.) {
	zerdiv_(&v[5]);	}
	v[6] = 5000. / v[5];
	st_e16_pd[13] = -v[6] / v[5];
	v[5] = pow(v[6], 0.6);
	if (errno) in_trouble2("pow",v[6],0.6);
	if (v[6] > 0.) {
	st_e16_pd[14] = 0.6*(v[5]/v[6]);
	} else if (0.6 > 1.) {
	st_e16_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[6],0.6);
	}
	v[5] *= 1200.;
	v[6] = v[3] + v[5];
	;}

	if (wantfg & 2) {
	dv[0] = 1200.*st_e16_pd[14];
	dv[0] *= st_e16_pd[13];
	dv[1] = dv[0];
	g[3] = -dv[1]*0.166666666666667;
	dv[2] = dv[0];
	g[2] = -dv[2]*0.166666666666667;
	dv[0] *= 0.666666666666667;
	dv[0] *= st_e16_pd[12];
	dv[3] = dv[0]*st_e16_pd[10];
	dv[0] *= st_e16_pd[9];
	g[2] -= dv[3];
	g[3] -= dv[0];
	dv[4] = 1200.*st_e16_pd[8];
	dv[4] *= st_e16_pd[7];
	dv[4] *= 2.5;
	dv[5] = dv[4];
	g[1] = -dv[5]*0.166666666666667;
	dv[6] = dv[4];
	g[0] = -dv[6]*0.166666666666667;
	dv[4] *= 0.666666666666667;
	dv[4] *= st_e16_pd[5];
	dv[7] = dv[4]*st_e16_pd[3];
	dv[4] *= st_e16_pd[2];
	g[0] -= dv[7];
	g[1] -= dv[4];
	}

	return v[6];
}

 void
st_e16_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (st_e16_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[3] * x[7];
	v[1] = x[0] * x[4];
	v[2] = v[0] - v[1];
	t1 = v[2] + 100.*x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[6];
	v[1] = x[2] * x[5];
	v[2] = v[0] - v[1];
	t1 = v[2] + 100.*x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	st_e16_pd[0] = x[1] - x[0];
	v[1] = x[4] * st_e16_pd[0];
	c[2] = v[1];

  /***  constraint 4  ***/

	st_e16_pd[1] = x[3] - x[2];
	v[1] = x[5] * st_e16_pd[1];
	c[3] = v[1];

  /***  constraint 5  ***/

	t1 = x[8];
	t1 += x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[4];
	t1 += x[7];
	t1 += x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[4];
	t1 += x[6];
	t1 += x[10];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += x[11];
	c[8] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = -x[0];
	J[0] = -x[4];
	J[19] = x[3];
	J[6] = x[7];
	J[22] = 100.;

   /*** derivatives for constraint 2 ***/

	J[12] = -x[2];
	J[4] = -x[5];
	J[16] = x[1];
	J[2] = x[6];
	J[25] = 100.;

   /*** derivatives for constraint 3 ***/

	J[9] = st_e16_pd[0];
	J[1] = -x[4];
	J[3] = x[4];

   /*** derivatives for constraint 4 ***/

	J[13] = st_e16_pd[1];
	J[5] = -x[5];
	J[7] = x[5];

   /*** derivatives for constraint 5 ***/

	J[23] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 6 ***/

	J[10] = -1.;
	J[20] = 1.;
	J[24] = 1.;

   /*** derivatives for constraint 7 ***/

	J[14] = -1.;
	J[17] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 8 ***/

	J[11] = -1.;
	J[18] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 9 ***/

	J[15] = -1.;
	J[21] = 1.;
	J[29] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
