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
 fint cvxnonsep_psig30_auxcom_[1] = { 0 /* nlc */ };
 fint cvxnonsep_psig30_funcom_[6] = {
	30 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real cvxnonsep_psig30_boundc_[1+60+0] /* Infinity, variable bounds, constraint bounds */ = {
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

 real cvxnonsep_psig30_x0comn_[30] = {
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

 static real cvxnonsep_psig30_pd[88];
static real cvxnonsep_psig30_old_x[30];
static int cvxnonsep_psig30_xkind = -1;

 static int
cvxnonsep_psig30_xcheck(real *x)
{
	real *x1 = cvxnonsep_psig30_old_x, *xe = x + 30;
	errno = 0;
	if (cvxnonsep_psig30_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_psig30_xkind = 0;
	return 1;
	}
 real
cvxnonsep_psig30_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[30], dv[29], rv;
	fint wantfg = *needfg;
	if (cvxnonsep_psig30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[15], -0.48);
	if (errno) in_trouble2("pow",x[15],-0.48);
	if (x[15] > 0.) {
	cvxnonsep_psig30_pd[0] = -0.48*(v[0]/x[15]);
	} else if (-0.48 > 1.) {
	cvxnonsep_psig30_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],-0.48);
	}
	cvxnonsep_psig30_pd[1] = 30000. * v[0];
	cvxnonsep_psig30_pd[3] = pow(x[16], -0.275);
	if (errno) in_trouble2("pow",x[16],-0.275);
	if (x[16] > 0.) {
	cvxnonsep_psig30_pd[2] = -0.275*(cvxnonsep_psig30_pd[3]/x[16]);
	} else if (-0.275 > 1.) {
	cvxnonsep_psig30_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],-0.275);
	}
	cvxnonsep_psig30_pd[4] = cvxnonsep_psig30_pd[1] * cvxnonsep_psig30_pd[3];
	cvxnonsep_psig30_pd[6] = pow(x[17], -0.26);
	if (errno) in_trouble2("pow",x[17],-0.26);
	if (x[17] > 0.) {
	cvxnonsep_psig30_pd[5] = -0.26*(cvxnonsep_psig30_pd[6]/x[17]);
	} else if (-0.26 > 1.) {
	cvxnonsep_psig30_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],-0.26);
	}
	cvxnonsep_psig30_pd[7] = cvxnonsep_psig30_pd[4] * cvxnonsep_psig30_pd[6];
	cvxnonsep_psig30_pd[9] = pow(x[18], -0.215);
	if (errno) in_trouble2("pow",x[18],-0.215);
	if (x[18] > 0.) {
	cvxnonsep_psig30_pd[8] = -0.215*(cvxnonsep_psig30_pd[9]/x[18]);
	} else if (-0.215 > 1.) {
	cvxnonsep_psig30_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],-0.215);
	}
	cvxnonsep_psig30_pd[10] = cvxnonsep_psig30_pd[7] * cvxnonsep_psig30_pd[9];
	cvxnonsep_psig30_pd[12] = pow(x[19], -0.245);
	if (errno) in_trouble2("pow",x[19],-0.245);
	if (x[19] > 0.) {
	cvxnonsep_psig30_pd[11] = -0.245*(cvxnonsep_psig30_pd[12]/x[19]);
	} else if (-0.245 > 1.) {
	cvxnonsep_psig30_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],-0.245);
	}
	cvxnonsep_psig30_pd[13] = cvxnonsep_psig30_pd[10] * cvxnonsep_psig30_pd[12];
	cvxnonsep_psig30_pd[15] = pow(x[20], -0.31);
	if (errno) in_trouble2("pow",x[20],-0.31);
	if (x[20] > 0.) {
	cvxnonsep_psig30_pd[14] = -0.31*(cvxnonsep_psig30_pd[15]/x[20]);
	} else if (-0.31 > 1.) {
	cvxnonsep_psig30_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],-0.31);
	}
	cvxnonsep_psig30_pd[16] = cvxnonsep_psig30_pd[13] * cvxnonsep_psig30_pd[15];
	cvxnonsep_psig30_pd[18] = pow(x[21], -0.34);
	if (errno) in_trouble2("pow",x[21],-0.34);
	if (x[21] > 0.) {
	cvxnonsep_psig30_pd[17] = -0.34*(cvxnonsep_psig30_pd[18]/x[21]);
	} else if (-0.34 > 1.) {
	cvxnonsep_psig30_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],-0.34);
	}
	cvxnonsep_psig30_pd[19] = cvxnonsep_psig30_pd[16] * cvxnonsep_psig30_pd[18];
	cvxnonsep_psig30_pd[21] = pow(x[22], -0.2);
	if (errno) in_trouble2("pow",x[22],-0.2);
	if (x[22] > 0.) {
	cvxnonsep_psig30_pd[20] = -0.2*(cvxnonsep_psig30_pd[21]/x[22]);
	} else if (-0.2 > 1.) {
	cvxnonsep_psig30_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],-0.2);
	}
	cvxnonsep_psig30_pd[22] = cvxnonsep_psig30_pd[19] * cvxnonsep_psig30_pd[21];
	cvxnonsep_psig30_pd[24] = pow(x[23], -0.185);
	if (errno) in_trouble2("pow",x[23],-0.185);
	if (x[23] > 0.) {
	cvxnonsep_psig30_pd[23] = -0.185*(cvxnonsep_psig30_pd[24]/x[23]);
	} else if (-0.185 > 1.) {
	cvxnonsep_psig30_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],-0.185);
	}
	cvxnonsep_psig30_pd[25] = cvxnonsep_psig30_pd[22] * cvxnonsep_psig30_pd[24];
	cvxnonsep_psig30_pd[27] = pow(x[24], -0.495);
	if (errno) in_trouble2("pow",x[24],-0.495);
	if (x[24] > 0.) {
	cvxnonsep_psig30_pd[26] = -0.495*(cvxnonsep_psig30_pd[27]/x[24]);
	} else if (-0.495 > 1.) {
	cvxnonsep_psig30_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],-0.495);
	}
	cvxnonsep_psig30_pd[28] = cvxnonsep_psig30_pd[25] * cvxnonsep_psig30_pd[27];
	cvxnonsep_psig30_pd[30] = pow(x[25], -0.02);
	if (errno) in_trouble2("pow",x[25],-0.02);
	if (x[25] > 0.) {
	cvxnonsep_psig30_pd[29] = -0.02*(cvxnonsep_psig30_pd[30]/x[25]);
	} else if (-0.02 > 1.) {
	cvxnonsep_psig30_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],-0.02);
	}
	cvxnonsep_psig30_pd[31] = cvxnonsep_psig30_pd[28] * cvxnonsep_psig30_pd[30];
	cvxnonsep_psig30_pd[33] = pow(x[26], -0.445);
	if (errno) in_trouble2("pow",x[26],-0.445);
	if (x[26] > 0.) {
	cvxnonsep_psig30_pd[32] = -0.445*(cvxnonsep_psig30_pd[33]/x[26]);
	} else if (-0.445 > 1.) {
	cvxnonsep_psig30_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],-0.445);
	}
	cvxnonsep_psig30_pd[34] = cvxnonsep_psig30_pd[31] * cvxnonsep_psig30_pd[33];
	cvxnonsep_psig30_pd[36] = pow(x[27], -0.455);
	if (errno) in_trouble2("pow",x[27],-0.455);
	if (x[27] > 0.) {
	cvxnonsep_psig30_pd[35] = -0.455*(cvxnonsep_psig30_pd[36]/x[27]);
	} else if (-0.455 > 1.) {
	cvxnonsep_psig30_pd[35] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[27],-0.455);
	}
	cvxnonsep_psig30_pd[37] = cvxnonsep_psig30_pd[34] * cvxnonsep_psig30_pd[36];
	cvxnonsep_psig30_pd[39] = pow(x[28], -0.4);
	if (errno) in_trouble2("pow",x[28],-0.4);
	if (x[28] > 0.) {
	cvxnonsep_psig30_pd[38] = -0.4*(cvxnonsep_psig30_pd[39]/x[28]);
	} else if (-0.4 > 1.) {
	cvxnonsep_psig30_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],-0.4);
	}
	cvxnonsep_psig30_pd[40] = cvxnonsep_psig30_pd[37] * cvxnonsep_psig30_pd[39];
	cvxnonsep_psig30_pd[42] = pow(x[29], -0.05);
	if (errno) in_trouble2("pow",x[29],-0.05);
	if (x[29] > 0.) {
	cvxnonsep_psig30_pd[41] = -0.05*(cvxnonsep_psig30_pd[42]/x[29]);
	} else if (-0.05 > 1.) {
	cvxnonsep_psig30_pd[41] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],-0.05);
	}
	cvxnonsep_psig30_pd[43] = cvxnonsep_psig30_pd[40] * cvxnonsep_psig30_pd[42];
	cvxnonsep_psig30_pd[45] = pow(x[0], -0.13);
	if (errno) in_trouble2("pow",x[0],-0.13);
	if (x[0] > 0.) {
	cvxnonsep_psig30_pd[44] = -0.13*(cvxnonsep_psig30_pd[45]/x[0]);
	} else if (-0.13 > 1.) {
	cvxnonsep_psig30_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],-0.13);
	}
	cvxnonsep_psig30_pd[46] = cvxnonsep_psig30_pd[43] * cvxnonsep_psig30_pd[45];
	cvxnonsep_psig30_pd[48] = pow(x[1], -0.17);
	if (errno) in_trouble2("pow",x[1],-0.17);
	if (x[1] > 0.) {
	cvxnonsep_psig30_pd[47] = -0.17*(cvxnonsep_psig30_pd[48]/x[1]);
	} else if (-0.17 > 1.) {
	cvxnonsep_psig30_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],-0.17);
	}
	cvxnonsep_psig30_pd[49] = cvxnonsep_psig30_pd[46] * cvxnonsep_psig30_pd[48];
	cvxnonsep_psig30_pd[51] = pow(x[2], -0.34);
	if (errno) in_trouble2("pow",x[2],-0.34);
	if (x[2] > 0.) {
	cvxnonsep_psig30_pd[50] = -0.34*(cvxnonsep_psig30_pd[51]/x[2]);
	} else if (-0.34 > 1.) {
	cvxnonsep_psig30_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.34);
	}
	cvxnonsep_psig30_pd[52] = cvxnonsep_psig30_pd[49] * cvxnonsep_psig30_pd[51];
	cvxnonsep_psig30_pd[54] = pow(x[3], -0.07);
	if (errno) in_trouble2("pow",x[3],-0.07);
	if (x[3] > 0.) {
	cvxnonsep_psig30_pd[53] = -0.07*(cvxnonsep_psig30_pd[54]/x[3]);
	} else if (-0.07 > 1.) {
	cvxnonsep_psig30_pd[53] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],-0.07);
	}
	cvxnonsep_psig30_pd[55] = cvxnonsep_psig30_pd[52] * cvxnonsep_psig30_pd[54];
	cvxnonsep_psig30_pd[57] = pow(x[4], -0.36);
	if (errno) in_trouble2("pow",x[4],-0.36);
	if (x[4] > 0.) {
	cvxnonsep_psig30_pd[56] = -0.36*(cvxnonsep_psig30_pd[57]/x[4]);
	} else if (-0.36 > 1.) {
	cvxnonsep_psig30_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],-0.36);
	}
	cvxnonsep_psig30_pd[58] = cvxnonsep_psig30_pd[55] * cvxnonsep_psig30_pd[57];
	cvxnonsep_psig30_pd[60] = pow(x[5], -0.05);
	if (errno) in_trouble2("pow",x[5],-0.05);
	if (x[5] > 0.) {
	cvxnonsep_psig30_pd[59] = -0.05*(cvxnonsep_psig30_pd[60]/x[5]);
	} else if (-0.05 > 1.) {
	cvxnonsep_psig30_pd[59] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],-0.05);
	}
	cvxnonsep_psig30_pd[61] = cvxnonsep_psig30_pd[58] * cvxnonsep_psig30_pd[60];
	cvxnonsep_psig30_pd[63] = pow(x[6], -0.325);
	if (errno) in_trouble2("pow",x[6],-0.325);
	if (x[6] > 0.) {
	cvxnonsep_psig30_pd[62] = -0.325*(cvxnonsep_psig30_pd[63]/x[6]);
	} else if (-0.325 > 1.) {
	cvxnonsep_psig30_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],-0.325);
	}
	cvxnonsep_psig30_pd[64] = cvxnonsep_psig30_pd[61] * cvxnonsep_psig30_pd[63];
	cvxnonsep_psig30_pd[66] = pow(x[7], -0.245);
	if (errno) in_trouble2("pow",x[7],-0.245);
	if (x[7] > 0.) {
	cvxnonsep_psig30_pd[65] = -0.245*(cvxnonsep_psig30_pd[66]/x[7]);
	} else if (-0.245 > 1.) {
	cvxnonsep_psig30_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],-0.245);
	}
	cvxnonsep_psig30_pd[67] = cvxnonsep_psig30_pd[64] * cvxnonsep_psig30_pd[66];
	cvxnonsep_psig30_pd[69] = pow(x[8], -0.39);
	if (errno) in_trouble2("pow",x[8],-0.39);
	if (x[8] > 0.) {
	cvxnonsep_psig30_pd[68] = -0.39*(cvxnonsep_psig30_pd[69]/x[8]);
	} else if (-0.39 > 1.) {
	cvxnonsep_psig30_pd[68] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],-0.39);
	}
	cvxnonsep_psig30_pd[70] = cvxnonsep_psig30_pd[67] * cvxnonsep_psig30_pd[69];
	cvxnonsep_psig30_pd[72] = pow(x[9], -0.36);
	if (errno) in_trouble2("pow",x[9],-0.36);
	if (x[9] > 0.) {
	cvxnonsep_psig30_pd[71] = -0.36*(cvxnonsep_psig30_pd[72]/x[9]);
	} else if (-0.36 > 1.) {
	cvxnonsep_psig30_pd[71] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],-0.36);
	}
	cvxnonsep_psig30_pd[73] = cvxnonsep_psig30_pd[70] * cvxnonsep_psig30_pd[72];
	cvxnonsep_psig30_pd[75] = pow(x[10], -0.45);
	if (errno) in_trouble2("pow",x[10],-0.45);
	if (x[10] > 0.) {
	cvxnonsep_psig30_pd[74] = -0.45*(cvxnonsep_psig30_pd[75]/x[10]);
	} else if (-0.45 > 1.) {
	cvxnonsep_psig30_pd[74] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],-0.45);
	}
	cvxnonsep_psig30_pd[76] = cvxnonsep_psig30_pd[73] * cvxnonsep_psig30_pd[75];
	cvxnonsep_psig30_pd[78] = pow(x[11], -0.445);
	if (errno) in_trouble2("pow",x[11],-0.445);
	if (x[11] > 0.) {
	cvxnonsep_psig30_pd[77] = -0.445*(cvxnonsep_psig30_pd[78]/x[11]);
	} else if (-0.445 > 1.) {
	cvxnonsep_psig30_pd[77] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],-0.445);
	}
	cvxnonsep_psig30_pd[79] = cvxnonsep_psig30_pd[76] * cvxnonsep_psig30_pd[78];
	cvxnonsep_psig30_pd[81] = pow(x[12], -0.165);
	if (errno) in_trouble2("pow",x[12],-0.165);
	if (x[12] > 0.) {
	cvxnonsep_psig30_pd[80] = -0.165*(cvxnonsep_psig30_pd[81]/x[12]);
	} else if (-0.165 > 1.) {
	cvxnonsep_psig30_pd[80] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],-0.165);
	}
	cvxnonsep_psig30_pd[82] = cvxnonsep_psig30_pd[79] * cvxnonsep_psig30_pd[81];
	cvxnonsep_psig30_pd[84] = pow(x[13], -0.35);
	if (errno) in_trouble2("pow",x[13],-0.35);
	if (x[13] > 0.) {
	cvxnonsep_psig30_pd[83] = -0.35*(cvxnonsep_psig30_pd[84]/x[13]);
	} else if (-0.35 > 1.) {
	cvxnonsep_psig30_pd[83] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],-0.35);
	}
	cvxnonsep_psig30_pd[85] = cvxnonsep_psig30_pd[82] * cvxnonsep_psig30_pd[84];
	cvxnonsep_psig30_pd[87] = pow(x[14], -0.1);
	if (errno) in_trouble2("pow",x[14],-0.1);
	if (x[14] > 0.) {
	cvxnonsep_psig30_pd[86] = -0.1*(cvxnonsep_psig30_pd[87]/x[14]);
	} else if (-0.1 > 1.) {
	cvxnonsep_psig30_pd[86] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],-0.1);
	}
	v[29] = cvxnonsep_psig30_pd[85] * cvxnonsep_psig30_pd[87];
	rv = v[29] + x[0];
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
	rv += x[20];
	rv += x[21];
	rv += x[22];
	rv += x[23];
	rv += x[24];
	rv += x[25];
	rv += x[26];
	rv += x[27];
	rv += x[28];
	rv += x[29];
	;}

	if (wantfg & 2) {
	g[14] = cvxnonsep_psig30_pd[85]*cvxnonsep_psig30_pd[86] + 1.;
	dv[0] = cvxnonsep_psig30_pd[87]*cvxnonsep_psig30_pd[82];
	dv[1] = cvxnonsep_psig30_pd[87]*cvxnonsep_psig30_pd[84];
	g[13] = dv[0]*cvxnonsep_psig30_pd[83] + 1.;
	dv[2] = dv[1]*cvxnonsep_psig30_pd[79];
	dv[1] *= cvxnonsep_psig30_pd[81];
	g[12] = dv[2]*cvxnonsep_psig30_pd[80] + 1.;
	dv[3] = dv[1]*cvxnonsep_psig30_pd[76];
	dv[1] *= cvxnonsep_psig30_pd[78];
	g[11] = dv[3]*cvxnonsep_psig30_pd[77] + 1.;
	dv[4] = dv[1]*cvxnonsep_psig30_pd[73];
	dv[1] *= cvxnonsep_psig30_pd[75];
	g[10] = dv[4]*cvxnonsep_psig30_pd[74] + 1.;
	dv[5] = dv[1]*cvxnonsep_psig30_pd[70];
	dv[1] *= cvxnonsep_psig30_pd[72];
	g[9] = dv[5]*cvxnonsep_psig30_pd[71] + 1.;
	dv[6] = dv[1]*cvxnonsep_psig30_pd[67];
	dv[1] *= cvxnonsep_psig30_pd[69];
	g[8] = dv[6]*cvxnonsep_psig30_pd[68] + 1.;
	dv[7] = dv[1]*cvxnonsep_psig30_pd[64];
	dv[1] *= cvxnonsep_psig30_pd[66];
	g[7] = dv[7]*cvxnonsep_psig30_pd[65] + 1.;
	dv[8] = dv[1]*cvxnonsep_psig30_pd[61];
	dv[1] *= cvxnonsep_psig30_pd[63];
	g[6] = dv[8]*cvxnonsep_psig30_pd[62] + 1.;
	dv[9] = dv[1]*cvxnonsep_psig30_pd[58];
	dv[1] *= cvxnonsep_psig30_pd[60];
	g[5] = dv[9]*cvxnonsep_psig30_pd[59] + 1.;
	dv[10] = dv[1]*cvxnonsep_psig30_pd[55];
	dv[1] *= cvxnonsep_psig30_pd[57];
	g[4] = dv[10]*cvxnonsep_psig30_pd[56] + 1.;
	dv[11] = dv[1]*cvxnonsep_psig30_pd[52];
	dv[1] *= cvxnonsep_psig30_pd[54];
	g[3] = dv[11]*cvxnonsep_psig30_pd[53] + 1.;
	dv[12] = dv[1]*cvxnonsep_psig30_pd[49];
	dv[1] *= cvxnonsep_psig30_pd[51];
	g[2] = dv[12]*cvxnonsep_psig30_pd[50] + 1.;
	dv[13] = dv[1]*cvxnonsep_psig30_pd[46];
	dv[1] *= cvxnonsep_psig30_pd[48];
	g[1] = dv[13]*cvxnonsep_psig30_pd[47] + 1.;
	dv[14] = dv[1]*cvxnonsep_psig30_pd[43];
	dv[1] *= cvxnonsep_psig30_pd[45];
	g[0] = dv[14]*cvxnonsep_psig30_pd[44] + 1.;
	dv[15] = dv[1]*cvxnonsep_psig30_pd[40];
	dv[1] *= cvxnonsep_psig30_pd[42];
	g[29] = dv[15]*cvxnonsep_psig30_pd[41] + 1.;
	dv[16] = dv[1]*cvxnonsep_psig30_pd[37];
	dv[1] *= cvxnonsep_psig30_pd[39];
	g[28] = dv[16]*cvxnonsep_psig30_pd[38] + 1.;
	dv[17] = dv[1]*cvxnonsep_psig30_pd[34];
	dv[1] *= cvxnonsep_psig30_pd[36];
	g[27] = dv[17]*cvxnonsep_psig30_pd[35] + 1.;
	dv[18] = dv[1]*cvxnonsep_psig30_pd[31];
	dv[1] *= cvxnonsep_psig30_pd[33];
	g[26] = dv[18]*cvxnonsep_psig30_pd[32] + 1.;
	dv[19] = dv[1]*cvxnonsep_psig30_pd[28];
	dv[1] *= cvxnonsep_psig30_pd[30];
	g[25] = dv[19]*cvxnonsep_psig30_pd[29] + 1.;
	dv[20] = dv[1]*cvxnonsep_psig30_pd[25];
	dv[1] *= cvxnonsep_psig30_pd[27];
	g[24] = dv[20]*cvxnonsep_psig30_pd[26] + 1.;
	dv[21] = dv[1]*cvxnonsep_psig30_pd[22];
	dv[1] *= cvxnonsep_psig30_pd[24];
	g[23] = dv[21]*cvxnonsep_psig30_pd[23] + 1.;
	dv[22] = dv[1]*cvxnonsep_psig30_pd[19];
	dv[1] *= cvxnonsep_psig30_pd[21];
	g[22] = dv[22]*cvxnonsep_psig30_pd[20] + 1.;
	dv[23] = dv[1]*cvxnonsep_psig30_pd[16];
	dv[1] *= cvxnonsep_psig30_pd[18];
	g[21] = dv[23]*cvxnonsep_psig30_pd[17] + 1.;
	dv[24] = dv[1]*cvxnonsep_psig30_pd[13];
	dv[1] *= cvxnonsep_psig30_pd[15];
	g[20] = dv[24]*cvxnonsep_psig30_pd[14] + 1.;
	dv[25] = dv[1]*cvxnonsep_psig30_pd[10];
	dv[1] *= cvxnonsep_psig30_pd[12];
	g[19] = dv[25]*cvxnonsep_psig30_pd[11] + 1.;
	dv[26] = dv[1]*cvxnonsep_psig30_pd[7];
	dv[1] *= cvxnonsep_psig30_pd[9];
	g[18] = dv[26]*cvxnonsep_psig30_pd[8] + 1.;
	dv[27] = dv[1]*cvxnonsep_psig30_pd[4];
	dv[1] *= cvxnonsep_psig30_pd[6];
	g[17] = dv[27]*cvxnonsep_psig30_pd[5] + 1.;
	dv[28] = dv[1]*cvxnonsep_psig30_pd[1];
	dv[1] *= cvxnonsep_psig30_pd[3];
	g[16] = dv[28]*cvxnonsep_psig30_pd[2] + 1.;
	dv[1] *= 30000.;
	g[15] = dv[1]*cvxnonsep_psig30_pd[0] + 1.;
	}

	return rv;
}

 void
cvxnonsep_psig30_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
