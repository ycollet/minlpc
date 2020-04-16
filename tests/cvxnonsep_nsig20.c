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
 fint cvxnonsep_nsig20_auxcom_[1] = { 1 /* nlc */ };
 fint cvxnonsep_nsig20_funcom_[47] = {
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

 real cvxnonsep_nsig20_boundc_[1+40+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.e-05,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		1.,
		10.,
		-1.7e308,
		-1.};

 real cvxnonsep_nsig20_x0comn_[20] = {
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.e-05,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1. };

 static real cvxnonsep_nsig20_pd[58];
static real cvxnonsep_nsig20_old_x[20];
static int cvxnonsep_nsig20_xkind = -1;

 static int
cvxnonsep_nsig20_xcheck(real *x)
{
	real *x1 = cvxnonsep_nsig20_old_x, *xe = x + 20;
	errno = 0;
	if (cvxnonsep_nsig20_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_nsig20_xkind = 0;
	return 1;
	}
 real
cvxnonsep_nsig20_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_nsig20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 1.68*x[0];
	rv += 0.51*x[1];
	rv += 1.63*x[2];
	rv += 0.49*x[3];
	rv += 1.86*x[4];
	rv += 0.7*x[5];
	rv += 0.39*x[6];
	rv += 0.5*x[7];
	rv += 1.23*x[8];
	rv += 0.95*x[9];
	rv += 1.5*x[10];
	rv += 0.51*x[11];
	rv += 1.01*x[12];
	rv += 1.4*x[13];
	rv += 1.78*x[14];
	rv += 1.92*x[15];
	rv += 1.09*x[16];
	rv += 0.48*x[17];
	rv += 0.67*x[18];
	rv += 0.52*x[19];
	;}

	if (wantfg & 2) {
	g[0] = 1.68;
	g[1] = 0.51;
	g[2] = 1.63;
	g[3] = 0.49;
	g[4] = 1.86;
	g[5] = 0.7;
	g[6] = 0.39;
	g[7] = 0.5;
	g[8] = 1.23;
	g[9] = 0.95;
	g[10] = 1.5;
	g[11] = 0.51;
	g[12] = 1.01;
	g[13] = 1.4;
	g[14] = 1.78;
	g[15] = 1.92;
	g[16] = 1.09;
	g[17] = 0.48;
	g[18] = 0.67;
	g[19] = 0.52;
	}

	return rv;
}

 void
cvxnonsep_nsig20_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[20], dv[19];
	fint wantfg = *needfg;
	if (cvxnonsep_nsig20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[10], 0.065);
	if (errno) in_trouble2("pow",x[10],0.065);
	if (x[10] > 0.) {
	cvxnonsep_nsig20_pd[0] = 0.065*(v[0]/x[10]);
	} else if (0.065 > 1.) {
	cvxnonsep_nsig20_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],0.065);
	}
	cvxnonsep_nsig20_pd[1] = -0.2 * v[0];
	cvxnonsep_nsig20_pd[3] = pow(x[11], 0.004);
	if (errno) in_trouble2("pow",x[11],0.004);
	if (x[11] > 0.) {
	cvxnonsep_nsig20_pd[2] = 0.004*(cvxnonsep_nsig20_pd[3]/x[11]);
	} else if (0.004 > 1.) {
	cvxnonsep_nsig20_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],0.004);
	}
	cvxnonsep_nsig20_pd[4] = cvxnonsep_nsig20_pd[1] * cvxnonsep_nsig20_pd[3];
	cvxnonsep_nsig20_pd[6] = pow(x[12], 0.084);
	if (errno) in_trouble2("pow",x[12],0.084);
	if (x[12] > 0.) {
	cvxnonsep_nsig20_pd[5] = 0.084*(cvxnonsep_nsig20_pd[6]/x[12]);
	} else if (0.084 > 1.) {
	cvxnonsep_nsig20_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],0.084);
	}
	cvxnonsep_nsig20_pd[7] = cvxnonsep_nsig20_pd[4] * cvxnonsep_nsig20_pd[6];
	cvxnonsep_nsig20_pd[9] = pow(x[13], 0.093);
	if (errno) in_trouble2("pow",x[13],0.093);
	if (x[13] > 0.) {
	cvxnonsep_nsig20_pd[8] = 0.093*(cvxnonsep_nsig20_pd[9]/x[13]);
	} else if (0.093 > 1.) {
	cvxnonsep_nsig20_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],0.093);
	}
	cvxnonsep_nsig20_pd[10] = cvxnonsep_nsig20_pd[7] * cvxnonsep_nsig20_pd[9];
	cvxnonsep_nsig20_pd[12] = pow(x[14], 0.06);
	if (errno) in_trouble2("pow",x[14],0.06);
	if (x[14] > 0.) {
	cvxnonsep_nsig20_pd[11] = 0.06*(cvxnonsep_nsig20_pd[12]/x[14]);
	} else if (0.06 > 1.) {
	cvxnonsep_nsig20_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],0.06);
	}
	cvxnonsep_nsig20_pd[13] = cvxnonsep_nsig20_pd[10] * cvxnonsep_nsig20_pd[12];
	cvxnonsep_nsig20_pd[15] = pow(x[15], 0.075);
	if (errno) in_trouble2("pow",x[15],0.075);
	if (x[15] > 0.) {
	cvxnonsep_nsig20_pd[14] = 0.075*(cvxnonsep_nsig20_pd[15]/x[15]);
	} else if (0.075 > 1.) {
	cvxnonsep_nsig20_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],0.075);
	}
	cvxnonsep_nsig20_pd[16] = cvxnonsep_nsig20_pd[13] * cvxnonsep_nsig20_pd[15];
	cvxnonsep_nsig20_pd[18] = pow(x[16], 0.074);
	if (errno) in_trouble2("pow",x[16],0.074);
	if (x[16] > 0.) {
	cvxnonsep_nsig20_pd[17] = 0.074*(cvxnonsep_nsig20_pd[18]/x[16]);
	} else if (0.074 > 1.) {
	cvxnonsep_nsig20_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],0.074);
	}
	cvxnonsep_nsig20_pd[19] = cvxnonsep_nsig20_pd[16] * cvxnonsep_nsig20_pd[18];
	cvxnonsep_nsig20_pd[21] = pow(x[17], 0.039);
	if (errno) in_trouble2("pow",x[17],0.039);
	if (x[17] > 0.) {
	cvxnonsep_nsig20_pd[20] = 0.039*(cvxnonsep_nsig20_pd[21]/x[17]);
	} else if (0.039 > 1.) {
	cvxnonsep_nsig20_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],0.039);
	}
	cvxnonsep_nsig20_pd[22] = cvxnonsep_nsig20_pd[19] * cvxnonsep_nsig20_pd[21];
	cvxnonsep_nsig20_pd[24] = pow(x[18], 0.065);
	if (errno) in_trouble2("pow",x[18],0.065);
	if (x[18] > 0.) {
	cvxnonsep_nsig20_pd[23] = 0.065*(cvxnonsep_nsig20_pd[24]/x[18]);
	} else if (0.065 > 1.) {
	cvxnonsep_nsig20_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],0.065);
	}
	cvxnonsep_nsig20_pd[25] = cvxnonsep_nsig20_pd[22] * cvxnonsep_nsig20_pd[24];
	cvxnonsep_nsig20_pd[27] = pow(x[19], 0.017);
	if (errno) in_trouble2("pow",x[19],0.017);
	if (x[19] > 0.) {
	cvxnonsep_nsig20_pd[26] = 0.017*(cvxnonsep_nsig20_pd[27]/x[19]);
	} else if (0.017 > 1.) {
	cvxnonsep_nsig20_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],0.017);
	}
	cvxnonsep_nsig20_pd[28] = cvxnonsep_nsig20_pd[25] * cvxnonsep_nsig20_pd[27];
	cvxnonsep_nsig20_pd[30] = pow(x[0], 0.07);
	if (errno) in_trouble2("pow",x[0],0.07);
	if (x[0] > 0.) {
	cvxnonsep_nsig20_pd[29] = 0.07*(cvxnonsep_nsig20_pd[30]/x[0]);
	} else if (0.07 > 1.) {
	cvxnonsep_nsig20_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.07);
	}
	cvxnonsep_nsig20_pd[31] = cvxnonsep_nsig20_pd[28] * cvxnonsep_nsig20_pd[30];
	cvxnonsep_nsig20_pd[33] = pow(x[1], 0.03);
	if (errno) in_trouble2("pow",x[1],0.03);
	if (x[1] > 0.) {
	cvxnonsep_nsig20_pd[32] = 0.03*(cvxnonsep_nsig20_pd[33]/x[1]);
	} else if (0.03 > 1.) {
	cvxnonsep_nsig20_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.03);
	}
	cvxnonsep_nsig20_pd[34] = cvxnonsep_nsig20_pd[31] * cvxnonsep_nsig20_pd[33];
	cvxnonsep_nsig20_pd[36] = pow(x[2], 0.028);
	if (errno) in_trouble2("pow",x[2],0.028);
	if (x[2] > 0.) {
	cvxnonsep_nsig20_pd[35] = 0.028*(cvxnonsep_nsig20_pd[36]/x[2]);
	} else if (0.028 > 1.) {
	cvxnonsep_nsig20_pd[35] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.028);
	}
	cvxnonsep_nsig20_pd[37] = cvxnonsep_nsig20_pd[34] * cvxnonsep_nsig20_pd[36];
	cvxnonsep_nsig20_pd[39] = pow(x[3], 0.005);
	if (errno) in_trouble2("pow",x[3],0.005);
	if (x[3] > 0.) {
	cvxnonsep_nsig20_pd[38] = 0.005*(cvxnonsep_nsig20_pd[39]/x[3]);
	} else if (0.005 > 1.) {
	cvxnonsep_nsig20_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.005);
	}
	cvxnonsep_nsig20_pd[40] = cvxnonsep_nsig20_pd[37] * cvxnonsep_nsig20_pd[39];
	cvxnonsep_nsig20_pd[42] = pow(x[4], 0.01);
	if (errno) in_trouble2("pow",x[4],0.01);
	if (x[4] > 0.) {
	cvxnonsep_nsig20_pd[41] = 0.01*(cvxnonsep_nsig20_pd[42]/x[4]);
	} else if (0.01 > 1.) {
	cvxnonsep_nsig20_pd[41] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.01);
	}
	cvxnonsep_nsig20_pd[43] = cvxnonsep_nsig20_pd[40] * cvxnonsep_nsig20_pd[42];
	cvxnonsep_nsig20_pd[45] = pow(x[5], 0.082);
	if (errno) in_trouble2("pow",x[5],0.082);
	if (x[5] > 0.) {
	cvxnonsep_nsig20_pd[44] = 0.082*(cvxnonsep_nsig20_pd[45]/x[5]);
	} else if (0.082 > 1.) {
	cvxnonsep_nsig20_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.082);
	}
	cvxnonsep_nsig20_pd[46] = cvxnonsep_nsig20_pd[43] * cvxnonsep_nsig20_pd[45];
	cvxnonsep_nsig20_pd[48] = pow(x[6], 0.069);
	if (errno) in_trouble2("pow",x[6],0.069);
	if (x[6] > 0.) {
	cvxnonsep_nsig20_pd[47] = 0.069*(cvxnonsep_nsig20_pd[48]/x[6]);
	} else if (0.069 > 1.) {
	cvxnonsep_nsig20_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.069);
	}
	cvxnonsep_nsig20_pd[49] = cvxnonsep_nsig20_pd[46] * cvxnonsep_nsig20_pd[48];
	cvxnonsep_nsig20_pd[51] = pow(x[7], 0.032);
	if (errno) in_trouble2("pow",x[7],0.032);
	if (x[7] > 0.) {
	cvxnonsep_nsig20_pd[50] = 0.032*(cvxnonsep_nsig20_pd[51]/x[7]);
	} else if (0.032 > 1.) {
	cvxnonsep_nsig20_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.032);
	}
	cvxnonsep_nsig20_pd[52] = cvxnonsep_nsig20_pd[49] * cvxnonsep_nsig20_pd[51];
	cvxnonsep_nsig20_pd[54] = pow(x[8], 0.095);
	if (errno) in_trouble2("pow",x[8],0.095);
	if (x[8] > 0.) {
	cvxnonsep_nsig20_pd[53] = 0.095*(cvxnonsep_nsig20_pd[54]/x[8]);
	} else if (0.095 > 1.) {
	cvxnonsep_nsig20_pd[53] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],0.095);
	}
	cvxnonsep_nsig20_pd[55] = cvxnonsep_nsig20_pd[52] * cvxnonsep_nsig20_pd[54];
	cvxnonsep_nsig20_pd[57] = pow(x[9], 0.003);
	if (errno) in_trouble2("pow",x[9],0.003);
	if (x[9] > 0.) {
	cvxnonsep_nsig20_pd[56] = 0.003*(cvxnonsep_nsig20_pd[57]/x[9]);
	} else if (0.003 > 1.) {
	cvxnonsep_nsig20_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],0.003);
	}
	v[19] = cvxnonsep_nsig20_pd[55] * cvxnonsep_nsig20_pd[57];
	c[0] = v[19];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[9] = cvxnonsep_nsig20_pd[55]*cvxnonsep_nsig20_pd[56];
	dv[0] = cvxnonsep_nsig20_pd[57]*cvxnonsep_nsig20_pd[52];
	dv[1] = cvxnonsep_nsig20_pd[57]*cvxnonsep_nsig20_pd[54];
	J[8] = dv[0]*cvxnonsep_nsig20_pd[53];
	dv[2] = dv[1]*cvxnonsep_nsig20_pd[49];
	dv[1] *= cvxnonsep_nsig20_pd[51];
	J[7] = dv[2]*cvxnonsep_nsig20_pd[50];
	dv[3] = dv[1]*cvxnonsep_nsig20_pd[46];
	dv[1] *= cvxnonsep_nsig20_pd[48];
	J[6] = dv[3]*cvxnonsep_nsig20_pd[47];
	dv[4] = dv[1]*cvxnonsep_nsig20_pd[43];
	dv[1] *= cvxnonsep_nsig20_pd[45];
	J[5] = dv[4]*cvxnonsep_nsig20_pd[44];
	dv[5] = dv[1]*cvxnonsep_nsig20_pd[40];
	dv[1] *= cvxnonsep_nsig20_pd[42];
	J[4] = dv[5]*cvxnonsep_nsig20_pd[41];
	dv[6] = dv[1]*cvxnonsep_nsig20_pd[37];
	dv[1] *= cvxnonsep_nsig20_pd[39];
	J[3] = dv[6]*cvxnonsep_nsig20_pd[38];
	dv[7] = dv[1]*cvxnonsep_nsig20_pd[34];
	dv[1] *= cvxnonsep_nsig20_pd[36];
	J[2] = dv[7]*cvxnonsep_nsig20_pd[35];
	dv[8] = dv[1]*cvxnonsep_nsig20_pd[31];
	dv[1] *= cvxnonsep_nsig20_pd[33];
	J[1] = dv[8]*cvxnonsep_nsig20_pd[32];
	dv[9] = dv[1]*cvxnonsep_nsig20_pd[28];
	dv[1] *= cvxnonsep_nsig20_pd[30];
	J[0] = dv[9]*cvxnonsep_nsig20_pd[29];
	dv[10] = dv[1]*cvxnonsep_nsig20_pd[25];
	dv[1] *= cvxnonsep_nsig20_pd[27];
	J[19] = dv[10]*cvxnonsep_nsig20_pd[26];
	dv[11] = dv[1]*cvxnonsep_nsig20_pd[22];
	dv[1] *= cvxnonsep_nsig20_pd[24];
	J[18] = dv[11]*cvxnonsep_nsig20_pd[23];
	dv[12] = dv[1]*cvxnonsep_nsig20_pd[19];
	dv[1] *= cvxnonsep_nsig20_pd[21];
	J[17] = dv[12]*cvxnonsep_nsig20_pd[20];
	dv[13] = dv[1]*cvxnonsep_nsig20_pd[16];
	dv[1] *= cvxnonsep_nsig20_pd[18];
	J[16] = dv[13]*cvxnonsep_nsig20_pd[17];
	dv[14] = dv[1]*cvxnonsep_nsig20_pd[13];
	dv[1] *= cvxnonsep_nsig20_pd[15];
	J[15] = dv[14]*cvxnonsep_nsig20_pd[14];
	dv[15] = dv[1]*cvxnonsep_nsig20_pd[10];
	dv[1] *= cvxnonsep_nsig20_pd[12];
	J[14] = dv[15]*cvxnonsep_nsig20_pd[11];
	dv[16] = dv[1]*cvxnonsep_nsig20_pd[7];
	dv[1] *= cvxnonsep_nsig20_pd[9];
	J[13] = dv[16]*cvxnonsep_nsig20_pd[8];
	dv[17] = dv[1]*cvxnonsep_nsig20_pd[4];
	dv[1] *= cvxnonsep_nsig20_pd[6];
	J[12] = dv[17]*cvxnonsep_nsig20_pd[5];
	dv[18] = dv[1]*cvxnonsep_nsig20_pd[1];
	dv[1] *= cvxnonsep_nsig20_pd[3];
	J[11] = dv[18]*cvxnonsep_nsig20_pd[2];
	dv[1] = -dv[1]*0.2;
	J[10] = dv[1]*cvxnonsep_nsig20_pd[0];
	}
}
#ifdef __cplusplus
	}
#endif
