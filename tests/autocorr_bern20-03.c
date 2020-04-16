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
 fint autocorr_bern20_03_auxcom_[1] = { 1 /* nlc */ };
 fint autocorr_bern20_03_funcom_[49] = {
	21 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	21 /* nzc */,
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
	1,
	1,
	1,
	1,
	1,
	1 };

 real autocorr_bern20_03_boundc_[1+42+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real autocorr_bern20_03_x0comn_[21] = {
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

 static real autocorr_bern20_03_pd[18];
static real autocorr_bern20_03_old_x[21];
static int autocorr_bern20_03_xkind = -1;

 static int
autocorr_bern20_03_xcheck(real *x)
{
	real *x1 = autocorr_bern20_03_old_x, *xe = x + 21;
	errno = 0;
	if (autocorr_bern20_03_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	autocorr_bern20_03_xkind = 0;
	return 1;
	}
 real
autocorr_bern20_03_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (autocorr_bern20_03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[20];
	;}

	if (wantfg & 2) {
	g[20] = 1.;
	}

	return rv;
}

 void
autocorr_bern20_03_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (autocorr_bern20_03_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	autocorr_bern20_03_pd[0] = 8. * x[0];
	v[0] = autocorr_bern20_03_pd[0] * x[2];
	autocorr_bern20_03_pd[1] = 8. * x[1];
	v[1] = autocorr_bern20_03_pd[1] * x[3];
	v[0] += v[1];
	autocorr_bern20_03_pd[2] = 8. * x[2];
	v[1] = autocorr_bern20_03_pd[2] * x[4];
	v[0] += v[1];
	autocorr_bern20_03_pd[3] = 8. * x[3];
	v[1] = autocorr_bern20_03_pd[3] * x[5];
	v[0] += v[1];
	autocorr_bern20_03_pd[4] = 8. * x[4];
	v[1] = autocorr_bern20_03_pd[4] * x[6];
	v[0] += v[1];
	autocorr_bern20_03_pd[5] = 8. * x[5];
	v[1] = autocorr_bern20_03_pd[5] * x[7];
	v[0] += v[1];
	autocorr_bern20_03_pd[6] = 8. * x[6];
	v[1] = autocorr_bern20_03_pd[6] * x[8];
	v[0] += v[1];
	autocorr_bern20_03_pd[7] = 8. * x[7];
	v[1] = autocorr_bern20_03_pd[7] * x[9];
	v[0] += v[1];
	autocorr_bern20_03_pd[8] = 8. * x[8];
	v[1] = autocorr_bern20_03_pd[8] * x[10];
	v[0] += v[1];
	autocorr_bern20_03_pd[9] = 8. * x[9];
	v[1] = autocorr_bern20_03_pd[9] * x[11];
	v[0] += v[1];
	autocorr_bern20_03_pd[10] = 8. * x[10];
	v[1] = autocorr_bern20_03_pd[10] * x[12];
	v[0] += v[1];
	autocorr_bern20_03_pd[11] = 8. * x[11];
	v[1] = autocorr_bern20_03_pd[11] * x[13];
	v[0] += v[1];
	autocorr_bern20_03_pd[12] = 8. * x[12];
	v[1] = autocorr_bern20_03_pd[12] * x[14];
	v[0] += v[1];
	autocorr_bern20_03_pd[13] = 8. * x[13];
	v[1] = autocorr_bern20_03_pd[13] * x[15];
	v[0] += v[1];
	autocorr_bern20_03_pd[14] = 8. * x[14];
	v[1] = autocorr_bern20_03_pd[14] * x[16];
	v[0] += v[1];
	autocorr_bern20_03_pd[15] = 8. * x[15];
	v[1] = autocorr_bern20_03_pd[15] * x[17];
	v[0] += v[1];
	autocorr_bern20_03_pd[16] = 8. * x[16];
	v[1] = autocorr_bern20_03_pd[16] * x[18];
	v[0] += v[1];
	autocorr_bern20_03_pd[17] = 8. * x[17];
	v[1] = autocorr_bern20_03_pd[17] * x[19];
	v[0] += v[1];
	t1 = v[0] + -4.*x[0];
	t1 += -4.*x[1];
	t1 += -8.*x[2];
	t1 += -8.*x[3];
	t1 += -8.*x[4];
	t1 += -8.*x[5];
	t1 += -8.*x[6];
	t1 += -8.*x[7];
	t1 += -8.*x[8];
	t1 += -8.*x[9];
	t1 += -8.*x[10];
	t1 += -8.*x[11];
	t1 += -8.*x[12];
	t1 += -8.*x[13];
	t1 += -8.*x[14];
	t1 += -8.*x[15];
	t1 += -8.*x[16];
	t1 += -8.*x[17];
	t1 += -4.*x[18];
	t1 += -4.*x[19];
	t1 += -x[20];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[19] = autocorr_bern20_03_pd[17] + -4.;
	J[17] = x[19]*8. + -8.;
	J[18] = autocorr_bern20_03_pd[16] + -4.;
	J[16] = x[18]*8. + -8.;
	J[17] += autocorr_bern20_03_pd[15];
	J[15] = x[17]*8. + -8.;
	J[16] += autocorr_bern20_03_pd[14];
	J[14] = x[16]*8. + -8.;
	J[15] += autocorr_bern20_03_pd[13];
	J[13] = x[15]*8. + -8.;
	J[14] += autocorr_bern20_03_pd[12];
	J[12] = x[14]*8. + -8.;
	J[13] += autocorr_bern20_03_pd[11];
	J[11] = x[13]*8. + -8.;
	J[12] += autocorr_bern20_03_pd[10];
	J[10] = x[12]*8. + -8.;
	J[11] += autocorr_bern20_03_pd[9];
	J[9] = x[11]*8. + -8.;
	J[10] += autocorr_bern20_03_pd[8];
	J[8] = x[10]*8. + -8.;
	J[9] += autocorr_bern20_03_pd[7];
	J[7] = x[9]*8. + -8.;
	J[8] += autocorr_bern20_03_pd[6];
	J[6] = x[8]*8. + -8.;
	J[7] += autocorr_bern20_03_pd[5];
	J[5] = x[7]*8. + -8.;
	J[6] += autocorr_bern20_03_pd[4];
	J[4] = x[6]*8. + -8.;
	J[5] += autocorr_bern20_03_pd[3];
	J[3] = x[5]*8. + -8.;
	J[4] += autocorr_bern20_03_pd[2];
	J[2] = x[4]*8. + -8.;
	J[3] += autocorr_bern20_03_pd[1];
	J[1] = x[3]*8. + -4.;
	J[2] += autocorr_bern20_03_pd[0];
	J[0] = x[2]*8. + -4.;
	J[20] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
