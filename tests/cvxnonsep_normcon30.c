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
 fint cvxnonsep_normcon30_auxcom_[1] = { 1 /* nlc */ };
 fint cvxnonsep_normcon30_funcom_[67] = {
	30 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	30 /* nzc */,
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
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,

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

 real cvxnonsep_normcon30_boundc_[1+60+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real cvxnonsep_normcon30_x0comn_[30] = {
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

 static real cvxnonsep_normcon30_pd[31];
static real cvxnonsep_normcon30_old_x[30];
static int cvxnonsep_normcon30_xkind = -1;

 static int
cvxnonsep_normcon30_xcheck(real *x)
{
	real *x1 = cvxnonsep_normcon30_old_x, *xe = x + 30;
	errno = 0;
	if (cvxnonsep_normcon30_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_normcon30_xkind = 0;
	return 1;
	}
 real
cvxnonsep_normcon30_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -0.665*x[0];
	rv += -0.18*x[1];
	rv += -0.13*x[2];
	rv += -x[3];
	rv += -0.17*x[4];
	rv += -0.035*x[5];
	rv += -0.56*x[6];
	rv += -0.88*x[7];
	rv += -0.67*x[8];
	rv += -0.19*x[9];
	rv += -0.37*x[10];
	rv += -0.46*x[11];
	rv += -0.98*x[12];
	rv += -0.155*x[13];
	rv += -0.855*x[14];
	rv += -0.95*x[15];
	rv += -0.92*x[16];
	rv += -0.055*x[17];
	rv += -0.74*x[18];
	rv += -0.27*x[19];
	rv += -0.42*x[20];
	rv += -0.55*x[21];
	rv += -0.945*x[22];
	rv += -0.42*x[23];
	rv += -0.985*x[24];
	rv += -0.3*x[25];
	rv += -0.7*x[26];
	rv += -0.665*x[27];
	rv += -0.54*x[28];
	rv += -0.7*x[29];
	;}

	if (wantfg & 2) {
	g[0] = -0.665;
	g[1] = -0.18;
	g[2] = -0.13;
	g[3] = -1.;
	g[4] = -0.17;
	g[5] = -0.035;
	g[6] = -0.56;
	g[7] = -0.88;
	g[8] = -0.67;
	g[9] = -0.19;
	g[10] = -0.37;
	g[11] = -0.46;
	g[12] = -0.98;
	g[13] = -0.155;
	g[14] = -0.855;
	g[15] = -0.95;
	g[16] = -0.92;
	g[17] = -0.055;
	g[18] = -0.74;
	g[19] = -0.27;
	g[20] = -0.42;
	g[21] = -0.55;
	g[22] = -0.945;
	g[23] = -0.42;
	g[24] = -0.985;
	g[25] = -0.3;
	g[26] = -0.7;
	g[27] = -0.665;
	g[28] = -0.54;
	g[29] = -0.7;
	}

	return rv;
}

 void
cvxnonsep_normcon30_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[29];
	fint wantfg = *needfg;
	if (cvxnonsep_normcon30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[15] * x[15];
	cvxnonsep_normcon30_pd[0] = x[15] + x[15];
	v[0] += 0.0001;
	v[1] = x[16] * x[16];
	cvxnonsep_normcon30_pd[1] = x[16] + x[16];
	v[0] += v[1];
	v[1] = x[17] * x[17];
	cvxnonsep_normcon30_pd[2] = x[17] + x[17];
	v[0] += v[1];
	v[1] = x[18] * x[18];
	cvxnonsep_normcon30_pd[3] = x[18] + x[18];
	v[0] += v[1];
	v[1] = x[19] * x[19];
	cvxnonsep_normcon30_pd[4] = x[19] + x[19];
	v[0] += v[1];
	v[1] = x[20] * x[20];
	cvxnonsep_normcon30_pd[5] = x[20] + x[20];
	v[0] += v[1];
	v[1] = x[21] * x[21];
	cvxnonsep_normcon30_pd[6] = x[21] + x[21];
	v[0] += v[1];
	v[1] = x[22] * x[22];
	cvxnonsep_normcon30_pd[7] = x[22] + x[22];
	v[0] += v[1];
	v[1] = x[23] * x[23];
	cvxnonsep_normcon30_pd[8] = x[23] + x[23];
	v[0] += v[1];
	v[1] = x[24] * x[24];
	cvxnonsep_normcon30_pd[9] = x[24] + x[24];
	v[0] += v[1];
	v[1] = x[25] * x[25];
	cvxnonsep_normcon30_pd[10] = x[25] + x[25];
	v[0] += v[1];
	v[1] = x[26] * x[26];
	cvxnonsep_normcon30_pd[11] = x[26] + x[26];
	v[0] += v[1];
	v[1] = x[27] * x[27];
	cvxnonsep_normcon30_pd[12] = x[27] + x[27];
	v[0] += v[1];
	v[1] = x[28] * x[28];
	cvxnonsep_normcon30_pd[13] = x[28] + x[28];
	v[0] += v[1];
	v[1] = x[29] * x[29];
	cvxnonsep_normcon30_pd[14] = x[29] + x[29];
	v[0] += v[1];
	v[1] = x[0] * x[0];
	cvxnonsep_normcon30_pd[15] = x[0] + x[0];
	v[0] += v[1];
	v[1] = x[1] * x[1];
	cvxnonsep_normcon30_pd[16] = x[1] + x[1];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	cvxnonsep_normcon30_pd[17] = x[2] + x[2];
	v[0] += v[1];
	v[1] = x[3] * x[3];
	cvxnonsep_normcon30_pd[18] = x[3] + x[3];
	v[0] += v[1];
	v[1] = x[4] * x[4];
	cvxnonsep_normcon30_pd[19] = x[4] + x[4];
	v[0] += v[1];
	v[1] = x[5] * x[5];
	cvxnonsep_normcon30_pd[20] = x[5] + x[5];
	v[0] += v[1];
	v[1] = x[6] * x[6];
	cvxnonsep_normcon30_pd[21] = x[6] + x[6];
	v[0] += v[1];
	v[1] = x[7] * x[7];
	cvxnonsep_normcon30_pd[22] = x[7] + x[7];
	v[0] += v[1];
	v[1] = x[8] * x[8];
	cvxnonsep_normcon30_pd[23] = x[8] + x[8];
	v[0] += v[1];
	v[1] = x[9] * x[9];
	cvxnonsep_normcon30_pd[24] = x[9] + x[9];
	v[0] += v[1];
	v[1] = x[10] * x[10];
	cvxnonsep_normcon30_pd[25] = x[10] + x[10];
	v[0] += v[1];
	v[1] = x[11] * x[11];
	cvxnonsep_normcon30_pd[26] = x[11] + x[11];
	v[0] += v[1];
	v[1] = x[12] * x[12];
	cvxnonsep_normcon30_pd[27] = x[12] + x[12];
	v[0] += v[1];
	v[1] = x[13] * x[13];
	cvxnonsep_normcon30_pd[28] = x[13] + x[13];
	v[0] += v[1];
	v[1] = x[14] * x[14];
	cvxnonsep_normcon30_pd[29] = x[14] + x[14];
	v[0] += v[1];
	v[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	cvxnonsep_normcon30_pd[30] = 0.5 / v[1];
	c[0] = v[1];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = cvxnonsep_normcon30_pd[30];
	J[14] = dv[0]*cvxnonsep_normcon30_pd[29];
	dv[1] = cvxnonsep_normcon30_pd[30];
	J[13] = dv[1]*cvxnonsep_normcon30_pd[28];
	dv[2] = cvxnonsep_normcon30_pd[30];
	J[12] = dv[2]*cvxnonsep_normcon30_pd[27];
	dv[3] = cvxnonsep_normcon30_pd[30];
	J[11] = dv[3]*cvxnonsep_normcon30_pd[26];
	dv[4] = cvxnonsep_normcon30_pd[30];
	J[10] = dv[4]*cvxnonsep_normcon30_pd[25];
	dv[5] = cvxnonsep_normcon30_pd[30];
	J[9] = dv[5]*cvxnonsep_normcon30_pd[24];
	dv[6] = cvxnonsep_normcon30_pd[30];
	J[8] = dv[6]*cvxnonsep_normcon30_pd[23];
	dv[7] = cvxnonsep_normcon30_pd[30];
	J[7] = dv[7]*cvxnonsep_normcon30_pd[22];
	dv[8] = cvxnonsep_normcon30_pd[30];
	J[6] = dv[8]*cvxnonsep_normcon30_pd[21];
	dv[9] = cvxnonsep_normcon30_pd[30];
	J[5] = dv[9]*cvxnonsep_normcon30_pd[20];
	dv[10] = cvxnonsep_normcon30_pd[30];
	J[4] = dv[10]*cvxnonsep_normcon30_pd[19];
	dv[11] = cvxnonsep_normcon30_pd[30];
	J[3] = dv[11]*cvxnonsep_normcon30_pd[18];
	dv[12] = cvxnonsep_normcon30_pd[30];
	J[2] = dv[12]*cvxnonsep_normcon30_pd[17];
	dv[13] = cvxnonsep_normcon30_pd[30];
	J[1] = dv[13]*cvxnonsep_normcon30_pd[16];
	dv[14] = cvxnonsep_normcon30_pd[30];
	J[0] = dv[14]*cvxnonsep_normcon30_pd[15];
	dv[15] = cvxnonsep_normcon30_pd[30];
	J[29] = dv[15]*cvxnonsep_normcon30_pd[14];
	dv[16] = cvxnonsep_normcon30_pd[30];
	J[28] = dv[16]*cvxnonsep_normcon30_pd[13];
	dv[17] = cvxnonsep_normcon30_pd[30];
	J[27] = dv[17]*cvxnonsep_normcon30_pd[12];
	dv[18] = cvxnonsep_normcon30_pd[30];
	J[26] = dv[18]*cvxnonsep_normcon30_pd[11];
	dv[19] = cvxnonsep_normcon30_pd[30];
	J[25] = dv[19]*cvxnonsep_normcon30_pd[10];
	dv[20] = cvxnonsep_normcon30_pd[30];
	J[24] = dv[20]*cvxnonsep_normcon30_pd[9];
	dv[21] = cvxnonsep_normcon30_pd[30];
	J[23] = dv[21]*cvxnonsep_normcon30_pd[8];
	dv[22] = cvxnonsep_normcon30_pd[30];
	J[22] = dv[22]*cvxnonsep_normcon30_pd[7];
	dv[23] = cvxnonsep_normcon30_pd[30];
	J[21] = dv[23]*cvxnonsep_normcon30_pd[6];
	dv[24] = cvxnonsep_normcon30_pd[30];
	J[20] = dv[24]*cvxnonsep_normcon30_pd[5];
	dv[25] = cvxnonsep_normcon30_pd[30];
	J[19] = dv[25]*cvxnonsep_normcon30_pd[4];
	dv[26] = cvxnonsep_normcon30_pd[30];
	J[18] = dv[26]*cvxnonsep_normcon30_pd[3];
	dv[27] = cvxnonsep_normcon30_pd[30];
	J[17] = dv[27]*cvxnonsep_normcon30_pd[2];
	dv[28] = cvxnonsep_normcon30_pd[30];
	J[16] = dv[28]*cvxnonsep_normcon30_pd[1];
	J[15] = cvxnonsep_normcon30_pd[30]*cvxnonsep_normcon30_pd[0];
	}
}
#ifdef __cplusplus
	}
#endif
