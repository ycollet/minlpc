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
 fint cvxnonsep_psig20_auxcom_[1] = { 0 /* nlc */ };
 fint cvxnonsep_psig20_funcom_[6] = {
	20 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real cvxnonsep_psig20_boundc_[1+40+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		10.};

 real cvxnonsep_psig20_x0comn_[20] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
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

 static real cvxnonsep_psig20_pd[58];
static real cvxnonsep_psig20_old_x[20];
static int cvxnonsep_psig20_xkind = -1;

 static int
cvxnonsep_psig20_xcheck(real *x)
{
	real *x1 = cvxnonsep_psig20_old_x, *xe = x + 20;
	errno = 0;
	if (cvxnonsep_psig20_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_psig20_xkind = 0;
	return 1;
	}
 real
cvxnonsep_psig20_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[20], dv[19], rv;
	fint wantfg = *needfg;
	if (cvxnonsep_psig20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[10], -0.32);
	if (errno) in_trouble2("pow",x[10],-0.32);
	if (x[10] > 0.) {
	cvxnonsep_psig20_pd[0] = -0.32*(v[0]/x[10]);
	} else if (-0.32 > 1.) {
	cvxnonsep_psig20_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],-0.32);
	}
	cvxnonsep_psig20_pd[1] = 20000. * v[0];
	cvxnonsep_psig20_pd[3] = pow(x[11], -0.19);
	if (errno) in_trouble2("pow",x[11],-0.19);
	if (x[11] > 0.) {
	cvxnonsep_psig20_pd[2] = -0.19*(cvxnonsep_psig20_pd[3]/x[11]);
	} else if (-0.19 > 1.) {
	cvxnonsep_psig20_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],-0.19);
	}
	cvxnonsep_psig20_pd[4] = cvxnonsep_psig20_pd[1] * cvxnonsep_psig20_pd[3];
	cvxnonsep_psig20_pd[6] = pow(x[12], -0.405);
	if (errno) in_trouble2("pow",x[12],-0.405);
	if (x[12] > 0.) {
	cvxnonsep_psig20_pd[5] = -0.405*(cvxnonsep_psig20_pd[6]/x[12]);
	} else if (-0.405 > 1.) {
	cvxnonsep_psig20_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],-0.405);
	}
	cvxnonsep_psig20_pd[7] = cvxnonsep_psig20_pd[4] * cvxnonsep_psig20_pd[6];
	cvxnonsep_psig20_pd[9] = pow(x[13], -0.265);
	if (errno) in_trouble2("pow",x[13],-0.265);
	if (x[13] > 0.) {
	cvxnonsep_psig20_pd[8] = -0.265*(cvxnonsep_psig20_pd[9]/x[13]);
	} else if (-0.265 > 1.) {
	cvxnonsep_psig20_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],-0.265);
	}
	cvxnonsep_psig20_pd[10] = cvxnonsep_psig20_pd[7] * cvxnonsep_psig20_pd[9];
	cvxnonsep_psig20_pd[12] = pow(x[14], -0.175);
	if (errno) in_trouble2("pow",x[14],-0.175);
	if (x[14] > 0.) {
	cvxnonsep_psig20_pd[11] = -0.175*(cvxnonsep_psig20_pd[12]/x[14]);
	} else if (-0.175 > 1.) {
	cvxnonsep_psig20_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],-0.175);
	}
	cvxnonsep_psig20_pd[13] = cvxnonsep_psig20_pd[10] * cvxnonsep_psig20_pd[12];
	cvxnonsep_psig20_pd[15] = pow(x[15], -0.44);
	if (errno) in_trouble2("pow",x[15],-0.44);
	if (x[15] > 0.) {
	cvxnonsep_psig20_pd[14] = -0.44*(cvxnonsep_psig20_pd[15]/x[15]);
	} else if (-0.44 > 1.) {
	cvxnonsep_psig20_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],-0.44);
	}
	cvxnonsep_psig20_pd[16] = cvxnonsep_psig20_pd[13] * cvxnonsep_psig20_pd[15];
	cvxnonsep_psig20_pd[18] = pow(x[16], -0.275);
	if (errno) in_trouble2("pow",x[16],-0.275);
	if (x[16] > 0.) {
	cvxnonsep_psig20_pd[17] = -0.275*(cvxnonsep_psig20_pd[18]/x[16]);
	} else if (-0.275 > 1.) {
	cvxnonsep_psig20_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],-0.275);
	}
	cvxnonsep_psig20_pd[19] = cvxnonsep_psig20_pd[16] * cvxnonsep_psig20_pd[18];
	cvxnonsep_psig20_pd[21] = pow(x[17], -0.47);
	if (errno) in_trouble2("pow",x[17],-0.47);
	if (x[17] > 0.) {
	cvxnonsep_psig20_pd[20] = -0.47*(cvxnonsep_psig20_pd[21]/x[17]);
	} else if (-0.47 > 1.) {
	cvxnonsep_psig20_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],-0.47);
	}
	cvxnonsep_psig20_pd[22] = cvxnonsep_psig20_pd[19] * cvxnonsep_psig20_pd[21];
	cvxnonsep_psig20_pd[24] = pow(x[18], -0.31);
	if (errno) in_trouble2("pow",x[18],-0.31);
	if (x[18] > 0.) {
	cvxnonsep_psig20_pd[23] = -0.31*(cvxnonsep_psig20_pd[24]/x[18]);
	} else if (-0.31 > 1.) {
	cvxnonsep_psig20_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],-0.31);
	}
	cvxnonsep_psig20_pd[25] = cvxnonsep_psig20_pd[22] * cvxnonsep_psig20_pd[24];
	cvxnonsep_psig20_pd[27] = pow(x[19], -0.295);
	if (errno) in_trouble2("pow",x[19],-0.295);
	if (x[19] > 0.) {
	cvxnonsep_psig20_pd[26] = -0.295*(cvxnonsep_psig20_pd[27]/x[19]);
	} else if (-0.295 > 1.) {
	cvxnonsep_psig20_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],-0.295);
	}
	cvxnonsep_psig20_pd[28] = cvxnonsep_psig20_pd[25] * cvxnonsep_psig20_pd[27];
	cvxnonsep_psig20_pd[30] = pow(x[0], -0.105);
	if (errno) in_trouble2("pow",x[0],-0.105);
	if (x[0] > 0.) {
	cvxnonsep_psig20_pd[29] = -0.105*(cvxnonsep_psig20_pd[30]/x[0]);
	} else if (-0.105 > 1.) {
	cvxnonsep_psig20_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],-0.105);
	}
	cvxnonsep_psig20_pd[31] = cvxnonsep_psig20_pd[28] * cvxnonsep_psig20_pd[30];
	cvxnonsep_psig20_pd[33] = pow(x[1], -0.15);
	if (errno) in_trouble2("pow",x[1],-0.15);
	if (x[1] > 0.) {
	cvxnonsep_psig20_pd[32] = -0.15*(cvxnonsep_psig20_pd[33]/x[1]);
	} else if (-0.15 > 1.) {
	cvxnonsep_psig20_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],-0.15);
	}
	cvxnonsep_psig20_pd[34] = cvxnonsep_psig20_pd[31] * cvxnonsep_psig20_pd[33];
	cvxnonsep_psig20_pd[36] = pow(x[2], -0.235);
	if (errno) in_trouble2("pow",x[2],-0.235);
	if (x[2] > 0.) {
	cvxnonsep_psig20_pd[35] = -0.235*(cvxnonsep_psig20_pd[36]/x[2]);
	} else if (-0.235 > 1.) {
	cvxnonsep_psig20_pd[35] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.235);
	}
	cvxnonsep_psig20_pd[37] = cvxnonsep_psig20_pd[34] * cvxnonsep_psig20_pd[36];
	cvxnonsep_psig20_pd[39] = pow(x[3], -0.115);
	if (errno) in_trouble2("pow",x[3],-0.115);
	if (x[3] > 0.) {
	cvxnonsep_psig20_pd[38] = -0.115*(cvxnonsep_psig20_pd[39]/x[3]);
	} else if (-0.115 > 1.) {
	cvxnonsep_psig20_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],-0.115);
	}
	cvxnonsep_psig20_pd[40] = cvxnonsep_psig20_pd[37] * cvxnonsep_psig20_pd[39];
	cvxnonsep_psig20_pd[42] = pow(x[4], -0.42);
	if (errno) in_trouble2("pow",x[4],-0.42);
	if (x[4] > 0.) {
	cvxnonsep_psig20_pd[41] = -0.42*(cvxnonsep_psig20_pd[42]/x[4]);
	} else if (-0.42 > 1.) {
	cvxnonsep_psig20_pd[41] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],-0.42);
	}
	cvxnonsep_psig20_pd[43] = cvxnonsep_psig20_pd[40] * cvxnonsep_psig20_pd[42];
	cvxnonsep_psig20_pd[45] = pow(x[5], -0.095);
	if (errno) in_trouble2("pow",x[5],-0.095);
	if (x[5] > 0.) {
	cvxnonsep_psig20_pd[44] = -0.095*(cvxnonsep_psig20_pd[45]/x[5]);
	} else if (-0.095 > 1.) {
	cvxnonsep_psig20_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],-0.095);
	}
	cvxnonsep_psig20_pd[46] = cvxnonsep_psig20_pd[43] * cvxnonsep_psig20_pd[45];
	cvxnonsep_psig20_pd[48] = pow(x[6], -0.115);
	if (errno) in_trouble2("pow",x[6],-0.115);
	if (x[6] > 0.) {
	cvxnonsep_psig20_pd[47] = -0.115*(cvxnonsep_psig20_pd[48]/x[6]);
	} else if (-0.115 > 1.) {
	cvxnonsep_psig20_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],-0.115);
	}
	cvxnonsep_psig20_pd[49] = cvxnonsep_psig20_pd[46] * cvxnonsep_psig20_pd[48];
	cvxnonsep_psig20_pd[51] = pow(x[7], -0.085);
	if (errno) in_trouble2("pow",x[7],-0.085);
	if (x[7] > 0.) {
	cvxnonsep_psig20_pd[50] = -0.085*(cvxnonsep_psig20_pd[51]/x[7]);
	} else if (-0.085 > 1.) {
	cvxnonsep_psig20_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],-0.085);
	}
	cvxnonsep_psig20_pd[52] = cvxnonsep_psig20_pd[49] * cvxnonsep_psig20_pd[51];
	cvxnonsep_psig20_pd[54] = pow(x[8], -0.115);
	if (errno) in_trouble2("pow",x[8],-0.115);
	if (x[8] > 0.) {
	cvxnonsep_psig20_pd[53] = -0.115*(cvxnonsep_psig20_pd[54]/x[8]);
	} else if (-0.115 > 1.) {
	cvxnonsep_psig20_pd[53] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],-0.115);
	}
	cvxnonsep_psig20_pd[55] = cvxnonsep_psig20_pd[52] * cvxnonsep_psig20_pd[54];
	cvxnonsep_psig20_pd[57] = pow(x[9], -0.22);
	if (errno) in_trouble2("pow",x[9],-0.22);
	if (x[9] > 0.) {
	cvxnonsep_psig20_pd[56] = -0.22*(cvxnonsep_psig20_pd[57]/x[9]);
	} else if (-0.22 > 1.) {
	cvxnonsep_psig20_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],-0.22);
	}
	v[19] = cvxnonsep_psig20_pd[55] * cvxnonsep_psig20_pd[57];
	rv = v[19] + x[0];
	rv += x[1];
	rv += x[2];
	rv += x[3];
	rv += x[4];
	rv += x[5];
	rv += x[6];
	rv += x[7];
	rv += x[8];
	rv += x[9];
	rv += x[10];
	rv += x[11];
	rv += x[12];
	rv += x[13];
	rv += x[14];
	rv += x[15];
	rv += x[16];
	rv += x[17];
	rv += x[18];
	rv += x[19];
	;}

	if (wantfg & 2) {
	g[9] = cvxnonsep_psig20_pd[55]*cvxnonsep_psig20_pd[56] + 1.;
	dv[0] = cvxnonsep_psig20_pd[57]*cvxnonsep_psig20_pd[52];
	dv[1] = cvxnonsep_psig20_pd[57]*cvxnonsep_psig20_pd[54];
	g[8] = dv[0]*cvxnonsep_psig20_pd[53] + 1.;
	dv[2] = dv[1]*cvxnonsep_psig20_pd[49];
	dv[1] *= cvxnonsep_psig20_pd[51];
	g[7] = dv[2]*cvxnonsep_psig20_pd[50] + 1.;
	dv[3] = dv[1]*cvxnonsep_psig20_pd[46];
	dv[1] *= cvxnonsep_psig20_pd[48];
	g[6] = dv[3]*cvxnonsep_psig20_pd[47] + 1.;
	dv[4] = dv[1]*cvxnonsep_psig20_pd[43];
	dv[1] *= cvxnonsep_psig20_pd[45];
	g[5] = dv[4]*cvxnonsep_psig20_pd[44] + 1.;
	dv[5] = dv[1]*cvxnonsep_psig20_pd[40];
	dv[1] *= cvxnonsep_psig20_pd[42];
	g[4] = dv[5]*cvxnonsep_psig20_pd[41] + 1.;
	dv[6] = dv[1]*cvxnonsep_psig20_pd[37];
	dv[1] *= cvxnonsep_psig20_pd[39];
	g[3] = dv[6]*cvxnonsep_psig20_pd[38] + 1.;
	dv[7] = dv[1]*cvxnonsep_psig20_pd[34];
	dv[1] *= cvxnonsep_psig20_pd[36];
	g[2] = dv[7]*cvxnonsep_psig20_pd[35] + 1.;
	dv[8] = dv[1]*cvxnonsep_psig20_pd[31];
	dv[1] *= cvxnonsep_psig20_pd[33];
	g[1] = dv[8]*cvxnonsep_psig20_pd[32] + 1.;
	dv[9] = dv[1]*cvxnonsep_psig20_pd[28];
	dv[1] *= cvxnonsep_psig20_pd[30];
	g[0] = dv[9]*cvxnonsep_psig20_pd[29] + 1.;
	dv[10] = dv[1]*cvxnonsep_psig20_pd[25];
	dv[1] *= cvxnonsep_psig20_pd[27];
	g[19] = dv[10]*cvxnonsep_psig20_pd[26] + 1.;
	dv[11] = dv[1]*cvxnonsep_psig20_pd[22];
	dv[1] *= cvxnonsep_psig20_pd[24];
	g[18] = dv[11]*cvxnonsep_psig20_pd[23] + 1.;
	dv[12] = dv[1]*cvxnonsep_psig20_pd[19];
	dv[1] *= cvxnonsep_psig20_pd[21];
	g[17] = dv[12]*cvxnonsep_psig20_pd[20] + 1.;
	dv[13] = dv[1]*cvxnonsep_psig20_pd[16];
	dv[1] *= cvxnonsep_psig20_pd[18];
	g[16] = dv[13]*cvxnonsep_psig20_pd[17] + 1.;
	dv[14] = dv[1]*cvxnonsep_psig20_pd[13];
	dv[1] *= cvxnonsep_psig20_pd[15];
	g[15] = dv[14]*cvxnonsep_psig20_pd[14] + 1.;
	dv[15] = dv[1]*cvxnonsep_psig20_pd[10];
	dv[1] *= cvxnonsep_psig20_pd[12];
	g[14] = dv[15]*cvxnonsep_psig20_pd[11] + 1.;
	dv[16] = dv[1]*cvxnonsep_psig20_pd[7];
	dv[1] *= cvxnonsep_psig20_pd[9];
	g[13] = dv[16]*cvxnonsep_psig20_pd[8] + 1.;
	dv[17] = dv[1]*cvxnonsep_psig20_pd[4];
	dv[1] *= cvxnonsep_psig20_pd[6];
	g[12] = dv[17]*cvxnonsep_psig20_pd[5] + 1.;
	dv[18] = dv[1]*cvxnonsep_psig20_pd[1];
	dv[1] *= cvxnonsep_psig20_pd[3];
	g[11] = dv[18]*cvxnonsep_psig20_pd[2] + 1.;
	dv[1] *= 20000.;
	g[10] = dv[1]*cvxnonsep_psig20_pd[0] + 1.;
	}

	return rv;
}

 void
cvxnonsep_psig20_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
