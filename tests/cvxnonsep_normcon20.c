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
 fint cvxnonsep_normcon20_auxcom_[1] = { 1 /* nlc */ };
 fint cvxnonsep_normcon20_funcom_[47] = {
	20 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	20 /* nzc */,
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
	1 };

 real cvxnonsep_normcon20_boundc_[1+40+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		-1.7e308,
		10.};

 real cvxnonsep_normcon20_x0comn_[20] = {
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

 static real cvxnonsep_normcon20_pd[21];
static real cvxnonsep_normcon20_old_x[20];
static int cvxnonsep_normcon20_xkind = -1;

 static int
cvxnonsep_normcon20_xcheck(real *x)
{
	real *x1 = cvxnonsep_normcon20_old_x, *xe = x + 20;
	errno = 0;
	if (cvxnonsep_normcon20_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_normcon20_xkind = 0;
	return 1;
	}
 real
cvxnonsep_normcon20_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -0.29*x[0];
	rv += -0.43*x[1];
	rv += -0.015*x[2];
	rv += -0.985*x[3];
	rv += -0.165*x[4];
	rv += -0.105*x[5];
	rv += -0.37*x[6];
	rv += -0.2*x[7];
	rv += -0.49*x[8];
	rv += -0.34*x[9];
	rv += -0.175*x[10];
	rv += -0.39*x[11];
	rv += -0.83*x[12];
	rv += -0.805*x[13];
	rv += -0.06*x[14];
	rv += -0.4*x[15];
	rv += -0.52*x[16];
	rv += -0.415*x[17];
	rv += -0.655*x[18];
	rv += -0.63*x[19];
	;}

	if (wantfg & 2) {
	g[0] = -0.29;
	g[1] = -0.43;
	g[2] = -0.015;
	g[3] = -0.985;
	g[4] = -0.165;
	g[5] = -0.105;
	g[6] = -0.37;
	g[7] = -0.2;
	g[8] = -0.49;
	g[9] = -0.34;
	g[10] = -0.175;
	g[11] = -0.39;
	g[12] = -0.83;
	g[13] = -0.805;
	g[14] = -0.06;
	g[15] = -0.4;
	g[16] = -0.52;
	g[17] = -0.415;
	g[18] = -0.655;
	g[19] = -0.63;
	}

	return rv;
}

 void
cvxnonsep_normcon20_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[19];
	fint wantfg = *needfg;
	if (cvxnonsep_normcon20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[10] * x[10];
	cvxnonsep_normcon20_pd[0] = x[10] + x[10];
	v[0] += 0.0001;
	v[1] = x[11] * x[11];
	cvxnonsep_normcon20_pd[1] = x[11] + x[11];
	v[0] += v[1];
	v[1] = x[12] * x[12];
	cvxnonsep_normcon20_pd[2] = x[12] + x[12];
	v[0] += v[1];
	v[1] = x[13] * x[13];
	cvxnonsep_normcon20_pd[3] = x[13] + x[13];
	v[0] += v[1];
	v[1] = x[14] * x[14];
	cvxnonsep_normcon20_pd[4] = x[14] + x[14];
	v[0] += v[1];
	v[1] = x[15] * x[15];
	cvxnonsep_normcon20_pd[5] = x[15] + x[15];
	v[0] += v[1];
	v[1] = x[16] * x[16];
	cvxnonsep_normcon20_pd[6] = x[16] + x[16];
	v[0] += v[1];
	v[1] = x[17] * x[17];
	cvxnonsep_normcon20_pd[7] = x[17] + x[17];
	v[0] += v[1];
	v[1] = x[18] * x[18];
	cvxnonsep_normcon20_pd[8] = x[18] + x[18];
	v[0] += v[1];
	v[1] = x[19] * x[19];
	cvxnonsep_normcon20_pd[9] = x[19] + x[19];
	v[0] += v[1];
	v[1] = x[0] * x[0];
	cvxnonsep_normcon20_pd[10] = x[0] + x[0];
	v[0] += v[1];
	v[1] = x[1] * x[1];
	cvxnonsep_normcon20_pd[11] = x[1] + x[1];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	cvxnonsep_normcon20_pd[12] = x[2] + x[2];
	v[0] += v[1];
	v[1] = x[3] * x[3];
	cvxnonsep_normcon20_pd[13] = x[3] + x[3];
	v[0] += v[1];
	v[1] = x[4] * x[4];
	cvxnonsep_normcon20_pd[14] = x[4] + x[4];
	v[0] += v[1];
	v[1] = x[5] * x[5];
	cvxnonsep_normcon20_pd[15] = x[5] + x[5];
	v[0] += v[1];
	v[1] = x[6] * x[6];
	cvxnonsep_normcon20_pd[16] = x[6] + x[6];
	v[0] += v[1];
	v[1] = x[7] * x[7];
	cvxnonsep_normcon20_pd[17] = x[7] + x[7];
	v[0] += v[1];
	v[1] = x[8] * x[8];
	cvxnonsep_normcon20_pd[18] = x[8] + x[8];
	v[0] += v[1];
	v[1] = x[9] * x[9];
	cvxnonsep_normcon20_pd[19] = x[9] + x[9];
	v[0] += v[1];
	v[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	cvxnonsep_normcon20_pd[20] = 0.5 / v[1];
	c[0] = v[1];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = cvxnonsep_normcon20_pd[20];
	J[9] = dv[0]*cvxnonsep_normcon20_pd[19];
	dv[1] = cvxnonsep_normcon20_pd[20];
	J[8] = dv[1]*cvxnonsep_normcon20_pd[18];
	dv[2] = cvxnonsep_normcon20_pd[20];
	J[7] = dv[2]*cvxnonsep_normcon20_pd[17];
	dv[3] = cvxnonsep_normcon20_pd[20];
	J[6] = dv[3]*cvxnonsep_normcon20_pd[16];
	dv[4] = cvxnonsep_normcon20_pd[20];
	J[5] = dv[4]*cvxnonsep_normcon20_pd[15];
	dv[5] = cvxnonsep_normcon20_pd[20];
	J[4] = dv[5]*cvxnonsep_normcon20_pd[14];
	dv[6] = cvxnonsep_normcon20_pd[20];
	J[3] = dv[6]*cvxnonsep_normcon20_pd[13];
	dv[7] = cvxnonsep_normcon20_pd[20];
	J[2] = dv[7]*cvxnonsep_normcon20_pd[12];
	dv[8] = cvxnonsep_normcon20_pd[20];
	J[1] = dv[8]*cvxnonsep_normcon20_pd[11];
	dv[9] = cvxnonsep_normcon20_pd[20];
	J[0] = dv[9]*cvxnonsep_normcon20_pd[10];
	dv[10] = cvxnonsep_normcon20_pd[20];
	J[19] = dv[10]*cvxnonsep_normcon20_pd[9];
	dv[11] = cvxnonsep_normcon20_pd[20];
	J[18] = dv[11]*cvxnonsep_normcon20_pd[8];
	dv[12] = cvxnonsep_normcon20_pd[20];
	J[17] = dv[12]*cvxnonsep_normcon20_pd[7];
	dv[13] = cvxnonsep_normcon20_pd[20];
	J[16] = dv[13]*cvxnonsep_normcon20_pd[6];
	dv[14] = cvxnonsep_normcon20_pd[20];
	J[15] = dv[14]*cvxnonsep_normcon20_pd[5];
	dv[15] = cvxnonsep_normcon20_pd[20];
	J[14] = dv[15]*cvxnonsep_normcon20_pd[4];
	dv[16] = cvxnonsep_normcon20_pd[20];
	J[13] = dv[16]*cvxnonsep_normcon20_pd[3];
	dv[17] = cvxnonsep_normcon20_pd[20];
	J[12] = dv[17]*cvxnonsep_normcon20_pd[2];
	dv[18] = cvxnonsep_normcon20_pd[20];
	J[11] = dv[18]*cvxnonsep_normcon20_pd[1];
	J[10] = cvxnonsep_normcon20_pd[20]*cvxnonsep_normcon20_pd[0];
	}
}
#ifdef __cplusplus
	}
#endif
