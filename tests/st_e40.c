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
 fint st_e40_auxcom_[1] = { 4 /* nlc */ };
 fint st_e40_funcom_[30] = {
	4 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	19 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	15,
	20,

	/* rownos */
	1,
	2,
	6,
	7,
	8,
	1,
	3,
	5,
	7,
	8,
	1,
	4,
	5,
	6,
	1,
	5,
	6,
	7,
	8 };

 real st_e40_boundc_[1+8+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		12.,
		1.,
		12.,
		1.,
		12.,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real st_e40_x0comn_[4] = {
		1.,
		1.,
		1.,
		0. };

 static real st_e40_pd[39];
static real st_e40_old_x[4];
static int st_e40_xkind = -1;

 static int
st_e40_xcheck(real *x)
{
	real *x1 = st_e40_old_x, *xe = x + 4;
	errno = 0;
	if (st_e40_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e40_xkind = 0;
	return 1;
	}
 real
st_e40_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (st_e40_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[0];
	rv += x[1];
	rv += 1.4142135*x[2];
	;}

	if (wantfg & 2) {
	g[0] = 2.;
	g[1] = 1.;
	g[2] = 1.4142135;
	}

	return rv;
}

 void
st_e40_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[8], dv[6];
	real t1;
	fint wantfg = *needfg;
	if (st_e40_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	st_e40_pd[0] = -0.15 * x[0];
	v[0] = st_e40_pd[0] * x[1];
	st_e40_pd[1] = 0.14142135 * x[1];
	v[1] = st_e40_pd[1] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	st_e40_pd[2] = 0.1319 * x[0];
	v[2] = st_e40_pd[2] * x[2];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	st_e40_pd[4] = x[0] + -1.;
	st_e40_pd[3] = x[0] + -2.;
	st_e40_pd[5] = st_e40_pd[4] * st_e40_pd[3];
	st_e40_pd[6] = x[0] + -3.;
	st_e40_pd[7] = st_e40_pd[5] * st_e40_pd[6];
	st_e40_pd[8] = x[0] + -5.;
	st_e40_pd[9] = st_e40_pd[7] * st_e40_pd[8];
	st_e40_pd[10] = x[0] + -8.;
	st_e40_pd[11] = st_e40_pd[9] * st_e40_pd[10];
	st_e40_pd[12] = x[0] + -10.;
	st_e40_pd[13] = st_e40_pd[11] * st_e40_pd[12];
	st_e40_pd[14] = x[0] + -12.;
	v[7] = st_e40_pd[13] * st_e40_pd[14];
	c[1] = v[7];

  /***  constraint 3  ***/

	st_e40_pd[16] = x[1] + -1.;
	st_e40_pd[15] = x[1] + -2.;
	st_e40_pd[17] = st_e40_pd[16] * st_e40_pd[15];
	st_e40_pd[18] = x[1] + -3.;
	st_e40_pd[19] = st_e40_pd[17] * st_e40_pd[18];
	st_e40_pd[20] = x[1] + -5.;
	st_e40_pd[21] = st_e40_pd[19] * st_e40_pd[20];
	st_e40_pd[22] = x[1] + -8.;
	st_e40_pd[23] = st_e40_pd[21] * st_e40_pd[22];
	st_e40_pd[24] = x[1] + -10.;
	st_e40_pd[25] = st_e40_pd[23] * st_e40_pd[24];
	st_e40_pd[26] = x[1] + -12.;
	v[7] = st_e40_pd[25] * st_e40_pd[26];
	c[2] = v[7];

  /***  constraint 4  ***/

	st_e40_pd[28] = x[2] + -1.;
	st_e40_pd[27] = x[2] + -2.;
	st_e40_pd[29] = st_e40_pd[28] * st_e40_pd[27];
	st_e40_pd[30] = x[2] + -3.;
	st_e40_pd[31] = st_e40_pd[29] * st_e40_pd[30];
	st_e40_pd[32] = x[2] + -5.;
	st_e40_pd[33] = st_e40_pd[31] * st_e40_pd[32];
	st_e40_pd[34] = x[2] + -8.;
	st_e40_pd[35] = st_e40_pd[33] * st_e40_pd[34];
	st_e40_pd[36] = x[2] + -10.;
	st_e40_pd[37] = st_e40_pd[35] * st_e40_pd[36];
	st_e40_pd[38] = x[2] + -12.;
	v[7] = st_e40_pd[37] * st_e40_pd[38];
	c[3] = v[7];

  /***  constraint 5  ***/

	t1 = 1.7317*x[1];
	t1 += 1.03366*x[2];
	t1 += -x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 0.634*x[0];
	t1 += 2.828*x[2];
	t1 += -x[3];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 0.5*x[0];
	t1 += -2.*x[1];
	t1 += -x[3];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -0.5*x[0];
	t1 += 2.*x[1];
	t1 += -x[3];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[10] = -st_e40_pd[2];
	J[0] = -x[2]*0.1319;
	J[10] -= st_e40_pd[1];
	J[5] = -x[2]*0.14142135;
	J[5] += st_e40_pd[0];
	J[0] -= x[1]*0.15;
	J[14] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = st_e40_pd[13];
	dv[0] = st_e40_pd[14]*st_e40_pd[11];
	dv[1] = st_e40_pd[14]*st_e40_pd[12];
	J[1] += dv[0];
	dv[2] = dv[1]*st_e40_pd[9];
	dv[1] *= st_e40_pd[10];
	J[1] += dv[2];
	dv[3] = dv[1]*st_e40_pd[7];
	dv[1] *= st_e40_pd[8];
	J[1] += dv[3];
	dv[4] = dv[1]*st_e40_pd[5];
	dv[1] *= st_e40_pd[6];
	J[1] += dv[4];
	dv[5] = dv[1]*st_e40_pd[4];
	dv[1] *= st_e40_pd[3];
	J[1] += dv[5];
	J[1] += dv[1];

   /*** derivatives for constraint 3 ***/

	J[6] = st_e40_pd[25];
	dv[0] = st_e40_pd[26]*st_e40_pd[23];
	dv[1] = st_e40_pd[26]*st_e40_pd[24];
	J[6] += dv[0];
	dv[2] = dv[1]*st_e40_pd[21];
	dv[1] *= st_e40_pd[22];
	J[6] += dv[2];
	dv[3] = dv[1]*st_e40_pd[19];
	dv[1] *= st_e40_pd[20];
	J[6] += dv[3];
	dv[4] = dv[1]*st_e40_pd[17];
	dv[1] *= st_e40_pd[18];
	J[6] += dv[4];
	dv[5] = dv[1]*st_e40_pd[16];
	dv[1] *= st_e40_pd[15];
	J[6] += dv[5];
	J[6] += dv[1];

   /*** derivatives for constraint 4 ***/

	J[11] = st_e40_pd[37];
	dv[0] = st_e40_pd[38]*st_e40_pd[35];
	dv[1] = st_e40_pd[38]*st_e40_pd[36];
	J[11] += dv[0];
	dv[2] = dv[1]*st_e40_pd[33];
	dv[1] *= st_e40_pd[34];
	J[11] += dv[2];
	dv[3] = dv[1]*st_e40_pd[31];
	dv[1] *= st_e40_pd[32];
	J[11] += dv[3];
	dv[4] = dv[1]*st_e40_pd[29];
	dv[1] *= st_e40_pd[30];
	J[11] += dv[4];
	dv[5] = dv[1]*st_e40_pd[28];
	dv[1] *= st_e40_pd[27];
	J[11] += dv[5];
	J[11] += dv[1];

   /*** derivatives for constraint 5 ***/

	J[7] = 1.7317;
	J[12] = 1.03366;
	J[15] = -1.;

   /*** derivatives for constraint 6 ***/

	J[2] = 0.634;
	J[13] = 2.828;
	J[16] = -1.;

   /*** derivatives for constraint 7 ***/

	J[3] = 0.5;
	J[8] = -2.;
	J[17] = -1.;

   /*** derivatives for constraint 8 ***/

	J[4] = -0.5;
	J[9] = 2.;
	J[18] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
