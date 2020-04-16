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
 fint st_qpc_m1_auxcom_[1] = { 0 /* nlc */ };
 fint st_qpc_m1_funcom_[33] = {
	5 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	21 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	10,
	14,
	18,
	22,

	/* rownos */
	1,
	2,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	3,
	4,
	5,
	1,
	3,
	4,
	5,
	1,
	2,
	3,
	5 };

 real st_qpc_m1_boundc_[1+10+10] /* Infinity, variable bounds, constraint bounds */ = {
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
		10.,
		1.7e308,
		8.,
		1.7e308,
		12.,
		1.7e308,
		20.,
		1.7e308,
		-30.,
		1.7e308};

 real st_qpc_m1_x0comn_[5] = {
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_qpc_m1_pd[25];
static real st_qpc_m1_old_x[5];
static int st_qpc_m1_xkind = -1;

 static int
st_qpc_m1_xcheck(real *x)
{
	real *x1 = st_qpc_m1_old_x, *xe = x + 5;
	errno = 0;
	if (st_qpc_m1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_qpc_m1_xkind = 0;
	return 1;
	}
 real
st_qpc_m1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_qpc_m1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_qpc_m1_pd[0] = 0.34 * x[0];
	v[0] = st_qpc_m1_pd[0] * x[0];
	st_qpc_m1_pd[1] = 0.28 * x[0];
	v[1] = st_qpc_m1_pd[1] * x[1];
	v[0] += v[1];
	st_qpc_m1_pd[2] = 0.22 * x[0];
	v[1] = st_qpc_m1_pd[2] * x[2];
	v[0] += v[1];
	st_qpc_m1_pd[3] = 0.24 * x[0];
	v[1] = st_qpc_m1_pd[3] * x[3];
	v[0] += v[1];
	st_qpc_m1_pd[4] = 0.51 * x[0];
	v[1] = st_qpc_m1_pd[4] * x[4];
	v[0] += v[1];
	st_qpc_m1_pd[5] = 0.28 * x[1];
	v[1] = st_qpc_m1_pd[5] * x[0];
	v[0] += v[1];
	st_qpc_m1_pd[6] = 0.34 * x[1];
	v[1] = st_qpc_m1_pd[6] * x[1];
	v[0] += v[1];
	st_qpc_m1_pd[7] = 0.23 * x[1];
	v[1] = st_qpc_m1_pd[7] * x[2];
	v[0] += v[1];
	st_qpc_m1_pd[8] = 0.24 * x[1];
	v[1] = st_qpc_m1_pd[8] * x[3];
	v[0] += v[1];
	st_qpc_m1_pd[9] = 0.45 * x[1];
	v[1] = st_qpc_m1_pd[9] * x[4];
	v[0] += v[1];
	st_qpc_m1_pd[10] = 0.22 * x[2];
	v[1] = st_qpc_m1_pd[10] * x[0];
	v[0] += v[1];
	st_qpc_m1_pd[11] = 0.23 * x[2];
	v[1] = st_qpc_m1_pd[11] * x[1];
	v[0] += v[1];
	st_qpc_m1_pd[12] = 0.35 * x[2];
	v[1] = st_qpc_m1_pd[12] * x[2];
	v[0] += v[1];
	st_qpc_m1_pd[13] = 0.22 * x[2];
	v[1] = st_qpc_m1_pd[13] * x[3];
	v[0] += v[1];
	st_qpc_m1_pd[14] = 0.34 * x[2];
	v[1] = st_qpc_m1_pd[14] * x[4];
	v[0] += v[1];
	st_qpc_m1_pd[15] = 0.24 * x[3];
	v[1] = st_qpc_m1_pd[15] * x[0];
	v[0] += v[1];
	st_qpc_m1_pd[16] = 0.24 * x[3];
	v[1] = st_qpc_m1_pd[16] * x[1];
	v[0] += v[1];
	st_qpc_m1_pd[17] = 0.22 * x[3];
	v[1] = st_qpc_m1_pd[17] * x[2];
	v[0] += v[1];
	st_qpc_m1_pd[18] = 0.2 * x[3];
	v[1] = st_qpc_m1_pd[18] * x[3];
	v[0] += v[1];
	st_qpc_m1_pd[19] = 0.38 * x[3];
	v[1] = st_qpc_m1_pd[19] * x[4];
	v[0] += v[1];
	st_qpc_m1_pd[20] = 0.51 * x[4];
	v[1] = st_qpc_m1_pd[20] * x[0];
	v[0] += v[1];
	st_qpc_m1_pd[21] = 0.45 * x[4];
	v[1] = st_qpc_m1_pd[21] * x[1];
	v[0] += v[1];
	st_qpc_m1_pd[22] = 0.34 * x[4];
	v[1] = st_qpc_m1_pd[22] * x[2];
	v[0] += v[1];
	st_qpc_m1_pd[23] = 0.38 * x[4];
	v[1] = st_qpc_m1_pd[23] * x[3];
	v[0] += v[1];
	st_qpc_m1_pd[24] = 0.99 * x[4];
	v[1] = st_qpc_m1_pd[24] * x[4];
	v[0] += v[1];
	v[1] = -v[0];
	rv = v[1] + 10.*x[0];
	rv += 10.*x[1];
	rv += 10.*x[2];
	rv += 10.*x[3];
	rv += 10.*x[4];
	;}

	if (wantfg & 2) {
	g[4] = -st_qpc_m1_pd[24] + 10.;
	g[4] -= x[4]*0.99;
	g[3] = -st_qpc_m1_pd[23] + 10.;
	g[4] -= x[3]*0.38;
	g[2] = -st_qpc_m1_pd[22] + 10.;
	g[4] -= x[2]*0.34;
	g[1] = -st_qpc_m1_pd[21] + 10.;
	g[4] -= x[1]*0.45;
	g[0] = -st_qpc_m1_pd[20] + 10.;
	g[4] -= x[0]*0.51;
	g[4] -= st_qpc_m1_pd[19];
	g[3] -= x[4]*0.38;
	g[3] -= st_qpc_m1_pd[18];
	g[3] -= x[3]*0.2;
	g[2] -= st_qpc_m1_pd[17];
	g[3] -= x[2]*0.22;
	g[1] -= st_qpc_m1_pd[16];
	g[3] -= x[1]*0.24;
	g[0] -= st_qpc_m1_pd[15];
	g[3] -= x[0]*0.24;
	g[4] -= st_qpc_m1_pd[14];
	g[2] -= x[4]*0.34;
	g[3] -= st_qpc_m1_pd[13];
	g[2] -= x[3]*0.22;
	g[2] -= st_qpc_m1_pd[12];
	g[2] -= x[2]*0.35;
	g[1] -= st_qpc_m1_pd[11];
	g[2] -= x[1]*0.23;
	g[0] -= st_qpc_m1_pd[10];
	g[2] -= x[0]*0.22;
	g[4] -= st_qpc_m1_pd[9];
	g[1] -= x[4]*0.45;
	g[3] -= st_qpc_m1_pd[8];
	g[1] -= x[3]*0.24;
	g[2] -= st_qpc_m1_pd[7];
	g[1] -= x[2]*0.23;
	g[1] -= st_qpc_m1_pd[6];
	g[1] -= x[1]*0.34;
	g[0] -= st_qpc_m1_pd[5];
	g[1] -= x[0]*0.28;
	g[4] -= st_qpc_m1_pd[4];
	g[0] -= x[4]*0.51;
	g[3] -= st_qpc_m1_pd[3];
	g[0] -= x[3]*0.24;
	g[2] -= st_qpc_m1_pd[2];
	g[0] -= x[2]*0.22;
	g[1] -= st_qpc_m1_pd[1];
	g[0] -= x[1]*0.28;
	g[0] -= st_qpc_m1_pd[0];
	g[0] -= x[0]*0.34;
	}

	return rv;
}

 void
st_qpc_m1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_qpc_m1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += 2.*x[2];
	t1 += x[3];
	t1 += x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 2.*x[0];
	t1 += 3.*x[1];
	t1 += x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[1];
	t1 += 4.*x[2];
	t1 += -x[3];
	t1 += 2.*x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 8.*x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += 6.*x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -2.*x[0];
	t1 += -x[1];
	t1 += -3.*x[2];
	t1 += -x[3];
	t1 += -x[4];
	c[4] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[4] = 1.;
	J[9] = 2.;
	J[13] = 1.;
	J[17] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 2.;
	J[5] = 3.;
	J[18] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = 1.;
	J[10] = 4.;
	J[14] = -1.;
	J[19] = 2.;

   /*** derivatives for constraint 4 ***/

	J[2] = 8.;
	J[7] = -1.;
	J[11] = -1.;
	J[15] = 6.;

   /*** derivatives for constraint 5 ***/

	J[3] = -2.;
	J[8] = -1.;
	J[12] = -3.;
	J[16] = -1.;
	J[20] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
