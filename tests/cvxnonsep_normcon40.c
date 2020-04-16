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
 fint cvxnonsep_normcon40_auxcom_[1] = { 1 /* nlc */ };
 fint cvxnonsep_normcon40_funcom_[87] = {
	40 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	40 /* nzc */,
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
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,

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

 real cvxnonsep_normcon40_boundc_[1+80+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real cvxnonsep_normcon40_x0comn_[40] = {
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

 static real cvxnonsep_normcon40_pd[41];
static real cvxnonsep_normcon40_old_x[40];
static int cvxnonsep_normcon40_xkind = -1;

 static int
cvxnonsep_normcon40_xcheck(real *x)
{
	real *x1 = cvxnonsep_normcon40_old_x, *xe = x + 40;
	errno = 0;
	if (cvxnonsep_normcon40_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_normcon40_xkind = 0;
	return 1;
	}
 real
cvxnonsep_normcon40_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_normcon40_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -0.91*x[0];
	rv += -0.88*x[1];
	rv += -0.82*x[2];
	rv += -0.26*x[3];
	rv += -0.02*x[4];
	rv += -0.43*x[5];
	rv += -0.31*x[6];
	rv += -0.59*x[7];
	rv += -0.16*x[8];
	rv += -0.18*x[9];
	rv += -0.42*x[10];
	rv += -0.09*x[11];
	rv += -0.6*x[12];
	rv += -0.47*x[13];
	rv += -0.7*x[14];
	rv += -0.7*x[15];
	rv += -0.64*x[16];
	rv += -0.03*x[17];
	rv += -0.07*x[18];
	rv += -0.32*x[19];
	rv += -0.64*x[20];
	rv += -0.38*x[21];
	rv += -0.19*x[22];
	rv += -0.43*x[23];
	rv += -0.48*x[24];
	rv += -0.12*x[25];
	rv += -0.59*x[26];
	rv += -0.23*x[27];
	rv += -0.38*x[28];
	rv += -0.85*x[29];
	rv += -0.25*x[30];
	rv += -0.29*x[31];
	rv += -0.62*x[32];
	rv += -0.82*x[33];
	rv += -0.27*x[34];
	rv += -0.98*x[35];
	rv += -0.73*x[36];
	rv += -0.34*x[37];
	rv += -0.58*x[38];
	rv += -0.11*x[39];
	;}

	if (wantfg & 2) {
	g[0] = -0.91;
	g[1] = -0.88;
	g[2] = -0.82;
	g[3] = -0.26;
	g[4] = -0.02;
	g[5] = -0.43;
	g[6] = -0.31;
	g[7] = -0.59;
	g[8] = -0.16;
	g[9] = -0.18;
	g[10] = -0.42;
	g[11] = -0.09;
	g[12] = -0.6;
	g[13] = -0.47;
	g[14] = -0.7;
	g[15] = -0.7;
	g[16] = -0.64;
	g[17] = -0.03;
	g[18] = -0.07;
	g[19] = -0.32;
	g[20] = -0.64;
	g[21] = -0.38;
	g[22] = -0.19;
	g[23] = -0.43;
	g[24] = -0.48;
	g[25] = -0.12;
	g[26] = -0.59;
	g[27] = -0.23;
	g[28] = -0.38;
	g[29] = -0.85;
	g[30] = -0.25;
	g[31] = -0.29;
	g[32] = -0.62;
	g[33] = -0.82;
	g[34] = -0.27;
	g[35] = -0.98;
	g[36] = -0.73;
	g[37] = -0.34;
	g[38] = -0.58;
	g[39] = -0.11;
	}

	return rv;
}

 void
cvxnonsep_normcon40_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[39];
	fint wantfg = *needfg;
	if (cvxnonsep_normcon40_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[20] * x[20];
	cvxnonsep_normcon40_pd[0] = x[20] + x[20];
	v[0] += 0.0001;
	v[1] = x[21] * x[21];
	cvxnonsep_normcon40_pd[1] = x[21] + x[21];
	v[0] += v[1];
	v[1] = x[22] * x[22];
	cvxnonsep_normcon40_pd[2] = x[22] + x[22];
	v[0] += v[1];
	v[1] = x[23] * x[23];
	cvxnonsep_normcon40_pd[3] = x[23] + x[23];
	v[0] += v[1];
	v[1] = x[24] * x[24];
	cvxnonsep_normcon40_pd[4] = x[24] + x[24];
	v[0] += v[1];
	v[1] = x[25] * x[25];
	cvxnonsep_normcon40_pd[5] = x[25] + x[25];
	v[0] += v[1];
	v[1] = x[26] * x[26];
	cvxnonsep_normcon40_pd[6] = x[26] + x[26];
	v[0] += v[1];
	v[1] = x[27] * x[27];
	cvxnonsep_normcon40_pd[7] = x[27] + x[27];
	v[0] += v[1];
	v[1] = x[28] * x[28];
	cvxnonsep_normcon40_pd[8] = x[28] + x[28];
	v[0] += v[1];
	v[1] = x[29] * x[29];
	cvxnonsep_normcon40_pd[9] = x[29] + x[29];
	v[0] += v[1];
	v[1] = x[30] * x[30];
	cvxnonsep_normcon40_pd[10] = x[30] + x[30];
	v[0] += v[1];
	v[1] = x[31] * x[31];
	cvxnonsep_normcon40_pd[11] = x[31] + x[31];
	v[0] += v[1];
	v[1] = x[32] * x[32];
	cvxnonsep_normcon40_pd[12] = x[32] + x[32];
	v[0] += v[1];
	v[1] = x[33] * x[33];
	cvxnonsep_normcon40_pd[13] = x[33] + x[33];
	v[0] += v[1];
	v[1] = x[34] * x[34];
	cvxnonsep_normcon40_pd[14] = x[34] + x[34];
	v[0] += v[1];
	v[1] = x[35] * x[35];
	cvxnonsep_normcon40_pd[15] = x[35] + x[35];
	v[0] += v[1];
	v[1] = x[36] * x[36];
	cvxnonsep_normcon40_pd[16] = x[36] + x[36];
	v[0] += v[1];
	v[1] = x[37] * x[37];
	cvxnonsep_normcon40_pd[17] = x[37] + x[37];
	v[0] += v[1];
	v[1] = x[38] * x[38];
	cvxnonsep_normcon40_pd[18] = x[38] + x[38];
	v[0] += v[1];
	v[1] = x[39] * x[39];
	cvxnonsep_normcon40_pd[19] = x[39] + x[39];
	v[0] += v[1];
	v[1] = x[0] * x[0];
	cvxnonsep_normcon40_pd[20] = x[0] + x[0];
	v[0] += v[1];
	v[1] = x[1] * x[1];
	cvxnonsep_normcon40_pd[21] = x[1] + x[1];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	cvxnonsep_normcon40_pd[22] = x[2] + x[2];
	v[0] += v[1];
	v[1] = x[3] * x[3];
	cvxnonsep_normcon40_pd[23] = x[3] + x[3];
	v[0] += v[1];
	v[1] = x[4] * x[4];
	cvxnonsep_normcon40_pd[24] = x[4] + x[4];
	v[0] += v[1];
	v[1] = x[5] * x[5];
	cvxnonsep_normcon40_pd[25] = x[5] + x[5];
	v[0] += v[1];
	v[1] = x[6] * x[6];
	cvxnonsep_normcon40_pd[26] = x[6] + x[6];
	v[0] += v[1];
	v[1] = x[7] * x[7];
	cvxnonsep_normcon40_pd[27] = x[7] + x[7];
	v[0] += v[1];
	v[1] = x[8] * x[8];
	cvxnonsep_normcon40_pd[28] = x[8] + x[8];
	v[0] += v[1];
	v[1] = x[9] * x[9];
	cvxnonsep_normcon40_pd[29] = x[9] + x[9];
	v[0] += v[1];
	v[1] = x[10] * x[10];
	cvxnonsep_normcon40_pd[30] = x[10] + x[10];
	v[0] += v[1];
	v[1] = x[11] * x[11];
	cvxnonsep_normcon40_pd[31] = x[11] + x[11];
	v[0] += v[1];
	v[1] = x[12] * x[12];
	cvxnonsep_normcon40_pd[32] = x[12] + x[12];
	v[0] += v[1];
	v[1] = x[13] * x[13];
	cvxnonsep_normcon40_pd[33] = x[13] + x[13];
	v[0] += v[1];
	v[1] = x[14] * x[14];
	cvxnonsep_normcon40_pd[34] = x[14] + x[14];
	v[0] += v[1];
	v[1] = x[15] * x[15];
	cvxnonsep_normcon40_pd[35] = x[15] + x[15];
	v[0] += v[1];
	v[1] = x[16] * x[16];
	cvxnonsep_normcon40_pd[36] = x[16] + x[16];
	v[0] += v[1];
	v[1] = x[17] * x[17];
	cvxnonsep_normcon40_pd[37] = x[17] + x[17];
	v[0] += v[1];
	v[1] = x[18] * x[18];
	cvxnonsep_normcon40_pd[38] = x[18] + x[18];
	v[0] += v[1];
	v[1] = x[19] * x[19];
	cvxnonsep_normcon40_pd[39] = x[19] + x[19];
	v[0] += v[1];
	v[1] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (v[1] <= 0.) {
	domain_("sqrt'", &v[1], 5L);
	}
	cvxnonsep_normcon40_pd[40] = 0.5 / v[1];
	c[0] = v[1];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = cvxnonsep_normcon40_pd[40];
	J[19] = dv[0]*cvxnonsep_normcon40_pd[39];
	dv[1] = cvxnonsep_normcon40_pd[40];
	J[18] = dv[1]*cvxnonsep_normcon40_pd[38];
	dv[2] = cvxnonsep_normcon40_pd[40];
	J[17] = dv[2]*cvxnonsep_normcon40_pd[37];
	dv[3] = cvxnonsep_normcon40_pd[40];
	J[16] = dv[3]*cvxnonsep_normcon40_pd[36];
	dv[4] = cvxnonsep_normcon40_pd[40];
	J[15] = dv[4]*cvxnonsep_normcon40_pd[35];
	dv[5] = cvxnonsep_normcon40_pd[40];
	J[14] = dv[5]*cvxnonsep_normcon40_pd[34];
	dv[6] = cvxnonsep_normcon40_pd[40];
	J[13] = dv[6]*cvxnonsep_normcon40_pd[33];
	dv[7] = cvxnonsep_normcon40_pd[40];
	J[12] = dv[7]*cvxnonsep_normcon40_pd[32];
	dv[8] = cvxnonsep_normcon40_pd[40];
	J[11] = dv[8]*cvxnonsep_normcon40_pd[31];
	dv[9] = cvxnonsep_normcon40_pd[40];
	J[10] = dv[9]*cvxnonsep_normcon40_pd[30];
	dv[10] = cvxnonsep_normcon40_pd[40];
	J[9] = dv[10]*cvxnonsep_normcon40_pd[29];
	dv[11] = cvxnonsep_normcon40_pd[40];
	J[8] = dv[11]*cvxnonsep_normcon40_pd[28];
	dv[12] = cvxnonsep_normcon40_pd[40];
	J[7] = dv[12]*cvxnonsep_normcon40_pd[27];
	dv[13] = cvxnonsep_normcon40_pd[40];
	J[6] = dv[13]*cvxnonsep_normcon40_pd[26];
	dv[14] = cvxnonsep_normcon40_pd[40];
	J[5] = dv[14]*cvxnonsep_normcon40_pd[25];
	dv[15] = cvxnonsep_normcon40_pd[40];
	J[4] = dv[15]*cvxnonsep_normcon40_pd[24];
	dv[16] = cvxnonsep_normcon40_pd[40];
	J[3] = dv[16]*cvxnonsep_normcon40_pd[23];
	dv[17] = cvxnonsep_normcon40_pd[40];
	J[2] = dv[17]*cvxnonsep_normcon40_pd[22];
	dv[18] = cvxnonsep_normcon40_pd[40];
	J[1] = dv[18]*cvxnonsep_normcon40_pd[21];
	dv[19] = cvxnonsep_normcon40_pd[40];
	J[0] = dv[19]*cvxnonsep_normcon40_pd[20];
	dv[20] = cvxnonsep_normcon40_pd[40];
	J[39] = dv[20]*cvxnonsep_normcon40_pd[19];
	dv[21] = cvxnonsep_normcon40_pd[40];
	J[38] = dv[21]*cvxnonsep_normcon40_pd[18];
	dv[22] = cvxnonsep_normcon40_pd[40];
	J[37] = dv[22]*cvxnonsep_normcon40_pd[17];
	dv[23] = cvxnonsep_normcon40_pd[40];
	J[36] = dv[23]*cvxnonsep_normcon40_pd[16];
	dv[24] = cvxnonsep_normcon40_pd[40];
	J[35] = dv[24]*cvxnonsep_normcon40_pd[15];
	dv[25] = cvxnonsep_normcon40_pd[40];
	J[34] = dv[25]*cvxnonsep_normcon40_pd[14];
	dv[26] = cvxnonsep_normcon40_pd[40];
	J[33] = dv[26]*cvxnonsep_normcon40_pd[13];
	dv[27] = cvxnonsep_normcon40_pd[40];
	J[32] = dv[27]*cvxnonsep_normcon40_pd[12];
	dv[28] = cvxnonsep_normcon40_pd[40];
	J[31] = dv[28]*cvxnonsep_normcon40_pd[11];
	dv[29] = cvxnonsep_normcon40_pd[40];
	J[30] = dv[29]*cvxnonsep_normcon40_pd[10];
	dv[30] = cvxnonsep_normcon40_pd[40];
	J[29] = dv[30]*cvxnonsep_normcon40_pd[9];
	dv[31] = cvxnonsep_normcon40_pd[40];
	J[28] = dv[31]*cvxnonsep_normcon40_pd[8];
	dv[32] = cvxnonsep_normcon40_pd[40];
	J[27] = dv[32]*cvxnonsep_normcon40_pd[7];
	dv[33] = cvxnonsep_normcon40_pd[40];
	J[26] = dv[33]*cvxnonsep_normcon40_pd[6];
	dv[34] = cvxnonsep_normcon40_pd[40];
	J[25] = dv[34]*cvxnonsep_normcon40_pd[5];
	dv[35] = cvxnonsep_normcon40_pd[40];
	J[24] = dv[35]*cvxnonsep_normcon40_pd[4];
	dv[36] = cvxnonsep_normcon40_pd[40];
	J[23] = dv[36]*cvxnonsep_normcon40_pd[3];
	dv[37] = cvxnonsep_normcon40_pd[40];
	J[22] = dv[37]*cvxnonsep_normcon40_pd[2];
	dv[38] = cvxnonsep_normcon40_pd[40];
	J[21] = dv[38]*cvxnonsep_normcon40_pd[1];
	J[20] = cvxnonsep_normcon40_pd[40]*cvxnonsep_normcon40_pd[0];
	}
}
#ifdef __cplusplus
	}
#endif
