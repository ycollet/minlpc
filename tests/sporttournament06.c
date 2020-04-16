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
 fint sporttournament06_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament06_funcom_[39] = {
	16 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

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
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real sporttournament06_boundc_[1+32+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.};

 real sporttournament06_x0comn_[16] = {
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

 static real sporttournament06_pd[24];
static real sporttournament06_old_x[16];
static int sporttournament06_xkind = -1;

 static int
sporttournament06_xcheck(real *x)
{
	real *x1 = sporttournament06_old_x, *xe = x + 16;
	errno = 0;
	if (sporttournament06_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament06_xkind = 0;
	return 1;
	}
 real
sporttournament06_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[15];
	;}

	if (wantfg & 2) {
	g[15] = 1.;
	}

	return rv;
}

 void
sporttournament06_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament06_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament06_pd[0] = 2. * x[0];
	v[0] = sporttournament06_pd[0] * x[2];
	sporttournament06_pd[1] = 2. * x[0];
	v[1] = sporttournament06_pd[1] * x[6];
	v[0] += v[1];
	sporttournament06_pd[2] = 2. * x[1];
	v[1] = sporttournament06_pd[2] * x[4];
	v[0] += v[1];
	sporttournament06_pd[3] = 2. * x[1];
	v[1] = sporttournament06_pd[3] * x[9];
	v[0] += v[1];
	sporttournament06_pd[4] = 2. * x[2];
	v[1] = sporttournament06_pd[4] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament06_pd[5] = 2. * x[2];
	v[2] = sporttournament06_pd[5] * x[11];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament06_pd[6] = 2. * x[2];
	v[1] = sporttournament06_pd[6] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament06_pd[7] = 2. * x[3];
	v[2] = sporttournament06_pd[7] * x[4];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament06_pd[8] = 2. * x[3];
	v[1] = sporttournament06_pd[8] * x[8];
	v[0] += v[1];
	sporttournament06_pd[9] = 2. * x[3];
	v[1] = sporttournament06_pd[9] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament06_pd[10] = 2. * x[4];
	v[2] = sporttournament06_pd[10] * x[5];
	v[0] += v[2];
	sporttournament06_pd[11] = 2. * x[4];
	v[2] = sporttournament06_pd[11] * x[7];
	v[0] += v[2];
	sporttournament06_pd[12] = 2. * x[5];
	v[2] = sporttournament06_pd[12] * x[8];
	v[0] += v[2];
	sporttournament06_pd[13] = 2. * x[6];
	v[2] = sporttournament06_pd[13] * x[7];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament06_pd[14] = 2. * x[6];
	v[1] = sporttournament06_pd[14] * x[11];
	v[0] += v[1];
	sporttournament06_pd[15] = 2. * x[6];
	v[1] = sporttournament06_pd[15] * x[12];
	v[0] += v[1];
	sporttournament06_pd[16] = 2. * x[7];
	v[1] = sporttournament06_pd[16] * x[9];
	v[0] += v[1];
	sporttournament06_pd[17] = 2. * x[7];
	v[1] = sporttournament06_pd[17] * x[14];
	v[0] += v[1];
	sporttournament06_pd[18] = 2. * x[8];
	v[1] = sporttournament06_pd[18] * x[10];
	v[0] += v[1];
	sporttournament06_pd[19] = 2. * x[8];
	v[1] = sporttournament06_pd[19] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament06_pd[20] = 2. * x[9];
	v[2] = sporttournament06_pd[20] * x[10];
	v[0] += v[2];
	sporttournament06_pd[21] = 2. * x[9];
	v[2] = sporttournament06_pd[21] * x[11];
	v[0] += v[2];
	sporttournament06_pd[22] = 2. * x[12];
	v[2] = sporttournament06_pd[22] * x[14];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament06_pd[23] = 2. * x[13];
	v[1] = sporttournament06_pd[23] * x[14];
	v[0] += v[1];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += 2.*x[2];
	t1 += 2.*x[3];
	t1 += -2.*x[4];
	t1 += -2.*x[5];
	t1 += -2.*x[6];
	t1 += -2.*x[7];
	t1 += -2.*x[8];
	t1 += -4.*x[9];
	t1 += -2.*x[10];
	t1 += x[15];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[14] = sporttournament06_pd[23];
	J[13] = x[14]*2.;
	J[14] -= sporttournament06_pd[22];
	J[12] = -x[14]*2.;
	J[11] = sporttournament06_pd[21];
	J[9] = x[11]*2. + -4.;
	J[10] = sporttournament06_pd[20] + -2.;
	J[9] += x[10]*2.;
	J[11] -= sporttournament06_pd[19];
	J[8] = -x[11]*2. + -2.;
	J[10] += sporttournament06_pd[18];
	J[8] += x[10]*2.;
	J[14] += sporttournament06_pd[17];
	J[7] = x[14]*2. + -2.;
	J[9] += sporttournament06_pd[16];
	J[7] += x[9]*2.;
	J[12] += sporttournament06_pd[15];
	J[6] = x[12]*2. + -2.;
	J[11] += sporttournament06_pd[14];
	J[6] += x[11]*2.;
	J[7] -= sporttournament06_pd[13];
	J[6] -= x[7]*2.;
	J[8] += sporttournament06_pd[12];
	J[5] = x[8]*2. + -2.;
	J[7] += sporttournament06_pd[11];
	J[4] = x[7]*2. + -2.;
	J[5] += sporttournament06_pd[10];
	J[4] += x[5]*2.;
	J[14] -= sporttournament06_pd[9];
	J[3] = -x[14]*2. + 2.;
	J[8] += sporttournament06_pd[8];
	J[3] += x[8]*2.;
	J[4] -= sporttournament06_pd[7];
	J[3] -= x[4]*2.;
	J[13] -= sporttournament06_pd[6];
	J[2] = -x[13]*2. + 2.;
	J[11] -= sporttournament06_pd[5];
	J[2] -= x[11]*2.;
	J[3] -= sporttournament06_pd[4];
	J[2] -= x[3]*2.;
	J[9] += sporttournament06_pd[3];
	J[1] = x[9]*2. + -2.;
	J[4] += sporttournament06_pd[2];
	J[1] += x[4]*2.;
	J[6] += sporttournament06_pd[1];
	J[0] = x[6]*2. + -2.;
	J[2] += sporttournament06_pd[0];
	J[0] += x[2]*2.;
	J[15] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
