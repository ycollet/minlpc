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
 fint cvxnonsep_psig40_auxcom_[1] = { 0 /* nlc */ };
 fint cvxnonsep_psig40_funcom_[6] = {
	40 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real cvxnonsep_psig40_boundc_[1+80+0] /* Infinity, variable bounds, constraint bounds */ = {
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

 real cvxnonsep_psig40_x0comn_[40] = {
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

 static real cvxnonsep_psig40_pd[121];
static real cvxnonsep_psig40_old_x[40];
static int cvxnonsep_psig40_xkind = -1;

 static int
cvxnonsep_psig40_xcheck(real *x)
{
	real *x1 = cvxnonsep_psig40_old_x, *xe = x + 40;
	errno = 0;
	if (cvxnonsep_psig40_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_psig40_xkind = 0;
	return 1;
	}
 real
cvxnonsep_psig40_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[41], dv[40], rv;
	fint wantfg = *needfg;
	if (cvxnonsep_psig40_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[20], -0.015);
	if (errno) in_trouble2("pow",x[20],-0.015);
	if (x[20] > 0.) {
	cvxnonsep_psig40_pd[0] = -0.015*(v[0]/x[20]);
	} else if (-0.015 > 1.) {
	cvxnonsep_psig40_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],-0.015);
	}
	cvxnonsep_psig40_pd[1] = 40000. * v[0];
	cvxnonsep_psig40_pd[3] = pow(x[21], -0.37);
	if (errno) in_trouble2("pow",x[21],-0.37);
	if (x[21] > 0.) {
	cvxnonsep_psig40_pd[2] = -0.37*(cvxnonsep_psig40_pd[3]/x[21]);
	} else if (-0.37 > 1.) {
	cvxnonsep_psig40_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],-0.37);
	}
	cvxnonsep_psig40_pd[4] = cvxnonsep_psig40_pd[1] * cvxnonsep_psig40_pd[3];
	cvxnonsep_psig40_pd[6] = pow(x[22], -0.25);
	if (errno) in_trouble2("pow",x[22],-0.25);
	if (x[22] > 0.) {
	cvxnonsep_psig40_pd[5] = -0.25*(cvxnonsep_psig40_pd[6]/x[22]);
	} else if (-0.25 > 1.) {
	cvxnonsep_psig40_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],-0.25);
	}
	cvxnonsep_psig40_pd[7] = cvxnonsep_psig40_pd[4] * cvxnonsep_psig40_pd[6];
	cvxnonsep_psig40_pd[9] = pow(x[23], -0.24);
	if (errno) in_trouble2("pow",x[23],-0.24);
	if (x[23] > 0.) {
	cvxnonsep_psig40_pd[8] = -0.24*(cvxnonsep_psig40_pd[9]/x[23]);
	} else if (-0.24 > 1.) {
	cvxnonsep_psig40_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],-0.24);
	}
	cvxnonsep_psig40_pd[10] = cvxnonsep_psig40_pd[7] * cvxnonsep_psig40_pd[9];
	cvxnonsep_psig40_pd[12] = pow(x[24], -0.45);
	if (errno) in_trouble2("pow",x[24],-0.45);
	if (x[24] > 0.) {
	cvxnonsep_psig40_pd[11] = -0.45*(cvxnonsep_psig40_pd[12]/x[24]);
	} else if (-0.45 > 1.) {
	cvxnonsep_psig40_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],-0.45);
	}
	cvxnonsep_psig40_pd[13] = cvxnonsep_psig40_pd[10] * cvxnonsep_psig40_pd[12];
	cvxnonsep_psig40_pd[15] = pow(x[25], -0.305);
	if (errno) in_trouble2("pow",x[25],-0.305);
	if (x[25] > 0.) {
	cvxnonsep_psig40_pd[14] = -0.305*(cvxnonsep_psig40_pd[15]/x[25]);
	} else if (-0.305 > 1.) {
	cvxnonsep_psig40_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],-0.305);
	}
	cvxnonsep_psig40_pd[16] = cvxnonsep_psig40_pd[13] * cvxnonsep_psig40_pd[15];
	cvxnonsep_psig40_pd[18] = pow(x[26], -0.31);
	if (errno) in_trouble2("pow",x[26],-0.31);
	if (x[26] > 0.) {
	cvxnonsep_psig40_pd[17] = -0.31*(cvxnonsep_psig40_pd[18]/x[26]);
	} else if (-0.31 > 1.) {
	cvxnonsep_psig40_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],-0.31);
	}
	cvxnonsep_psig40_pd[19] = cvxnonsep_psig40_pd[16] * cvxnonsep_psig40_pd[18];
	cvxnonsep_psig40_pd[21] = pow(x[27], -0.43);
	if (errno) in_trouble2("pow",x[27],-0.43);
	if (x[27] > 0.) {
	cvxnonsep_psig40_pd[20] = -0.43*(cvxnonsep_psig40_pd[21]/x[27]);
	} else if (-0.43 > 1.) {
	cvxnonsep_psig40_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[27],-0.43);
	}
	cvxnonsep_psig40_pd[22] = cvxnonsep_psig40_pd[19] * cvxnonsep_psig40_pd[21];
	cvxnonsep_psig40_pd[24] = pow(x[28], -0.405);
	if (errno) in_trouble2("pow",x[28],-0.405);
	if (x[28] > 0.) {
	cvxnonsep_psig40_pd[23] = -0.405*(cvxnonsep_psig40_pd[24]/x[28]);
	} else if (-0.405 > 1.) {
	cvxnonsep_psig40_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],-0.405);
	}
	cvxnonsep_psig40_pd[25] = cvxnonsep_psig40_pd[22] * cvxnonsep_psig40_pd[24];
	cvxnonsep_psig40_pd[27] = pow(x[29], -0.29);
	if (errno) in_trouble2("pow",x[29],-0.29);
	if (x[29] > 0.) {
	cvxnonsep_psig40_pd[26] = -0.29*(cvxnonsep_psig40_pd[27]/x[29]);
	} else if (-0.29 > 1.) {
	cvxnonsep_psig40_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],-0.29);
	}
	cvxnonsep_psig40_pd[28] = cvxnonsep_psig40_pd[25] * cvxnonsep_psig40_pd[27];
	cvxnonsep_psig40_pd[30] = pow(x[30], -0.09);
	if (errno) in_trouble2("pow",x[30],-0.09);
	if (x[30] > 0.) {
	cvxnonsep_psig40_pd[29] = -0.09*(cvxnonsep_psig40_pd[30]/x[30]);
	} else if (-0.09 > 1.) {
	cvxnonsep_psig40_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],-0.09);
	}
	cvxnonsep_psig40_pd[31] = cvxnonsep_psig40_pd[28] * cvxnonsep_psig40_pd[30];
	cvxnonsep_psig40_pd[33] = pow(x[31], -0.12);
	if (errno) in_trouble2("pow",x[31],-0.12);
	if (x[31] > 0.) {
	cvxnonsep_psig40_pd[32] = -0.12*(cvxnonsep_psig40_pd[33]/x[31]);
	} else if (-0.12 > 1.) {
	cvxnonsep_psig40_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],-0.12);
	}
	cvxnonsep_psig40_pd[34] = cvxnonsep_psig40_pd[31] * cvxnonsep_psig40_pd[33];
	cvxnonsep_psig40_pd[36] = pow(x[32], -0.445);
	if (errno) in_trouble2("pow",x[32],-0.445);
	if (x[32] > 0.) {
	cvxnonsep_psig40_pd[35] = -0.445*(cvxnonsep_psig40_pd[36]/x[32]);
	} else if (-0.445 > 1.) {
	cvxnonsep_psig40_pd[35] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[32],-0.445);
	}
	cvxnonsep_psig40_pd[37] = cvxnonsep_psig40_pd[34] * cvxnonsep_psig40_pd[36];
	cvxnonsep_psig40_pd[39] = pow(x[33], -0.015);
	if (errno) in_trouble2("pow",x[33],-0.015);
	if (x[33] > 0.) {
	cvxnonsep_psig40_pd[38] = -0.015*(cvxnonsep_psig40_pd[39]/x[33]);
	} else if (-0.015 > 1.) {
	cvxnonsep_psig40_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[33],-0.015);
	}
	cvxnonsep_psig40_pd[40] = cvxnonsep_psig40_pd[37] * cvxnonsep_psig40_pd[39];
	cvxnonsep_psig40_pd[42] = pow(x[34], -0.245);
	if (errno) in_trouble2("pow",x[34],-0.245);
	if (x[34] > 0.) {
	cvxnonsep_psig40_pd[41] = -0.245*(cvxnonsep_psig40_pd[42]/x[34]);
	} else if (-0.245 > 1.) {
	cvxnonsep_psig40_pd[41] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],-0.245);
	}
	cvxnonsep_psig40_pd[43] = cvxnonsep_psig40_pd[40] * cvxnonsep_psig40_pd[42];
	cvxnonsep_psig40_pd[45] = pow(x[35], -0.085);
	if (errno) in_trouble2("pow",x[35],-0.085);
	if (x[35] > 0.) {
	cvxnonsep_psig40_pd[44] = -0.085*(cvxnonsep_psig40_pd[45]/x[35]);
	} else if (-0.085 > 1.) {
	cvxnonsep_psig40_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[35],-0.085);
	}
	cvxnonsep_psig40_pd[46] = cvxnonsep_psig40_pd[43] * cvxnonsep_psig40_pd[45];
	cvxnonsep_psig40_pd[48] = pow(x[36], -0.49);
	if (errno) in_trouble2("pow",x[36],-0.49);
	if (x[36] > 0.) {
	cvxnonsep_psig40_pd[47] = -0.49*(cvxnonsep_psig40_pd[48]/x[36]);
	} else if (-0.49 > 1.) {
	cvxnonsep_psig40_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],-0.49);
	}
	cvxnonsep_psig40_pd[49] = cvxnonsep_psig40_pd[46] * cvxnonsep_psig40_pd[48];
	cvxnonsep_psig40_pd[51] = pow(x[37], -0.355);
	if (errno) in_trouble2("pow",x[37],-0.355);
	if (x[37] > 0.) {
	cvxnonsep_psig40_pd[50] = -0.355*(cvxnonsep_psig40_pd[51]/x[37]);
	} else if (-0.355 > 1.) {
	cvxnonsep_psig40_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],-0.355);
	}
	cvxnonsep_psig40_pd[52] = cvxnonsep_psig40_pd[49] * cvxnonsep_psig40_pd[51];
	cvxnonsep_psig40_pd[54] = pow(x[38], -0.25);
	if (errno) in_trouble2("pow",x[38],-0.25);
	if (x[38] > 0.) {
	cvxnonsep_psig40_pd[53] = -0.25*(cvxnonsep_psig40_pd[54]/x[38]);
	} else if (-0.25 > 1.) {
	cvxnonsep_psig40_pd[53] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],-0.25);
	}
	cvxnonsep_psig40_pd[55] = cvxnonsep_psig40_pd[52] * cvxnonsep_psig40_pd[54];
	cvxnonsep_psig40_pd[57] = pow(x[39], -0.235);
	if (errno) in_trouble2("pow",x[39],-0.235);
	if (x[39] > 0.) {
	cvxnonsep_psig40_pd[56] = -0.235*(cvxnonsep_psig40_pd[57]/x[39]);
	} else if (-0.235 > 1.) {
	cvxnonsep_psig40_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],-0.235);
	}
	cvxnonsep_psig40_pd[58] = cvxnonsep_psig40_pd[55] * cvxnonsep_psig40_pd[57];
	cvxnonsep_psig40_pd[60] = pow(x[0], -0.03);
	if (errno) in_trouble2("pow",x[0],-0.03);
	if (x[0] > 0.) {
	cvxnonsep_psig40_pd[59] = -0.03*(cvxnonsep_psig40_pd[60]/x[0]);
	} else if (-0.03 > 1.) {
	cvxnonsep_psig40_pd[59] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],-0.03);
	}
	cvxnonsep_psig40_pd[61] = cvxnonsep_psig40_pd[58] * cvxnonsep_psig40_pd[60];
	cvxnonsep_psig40_pd[63] = pow(x[1], -0.34);
	if (errno) in_trouble2("pow",x[1],-0.34);
	if (x[1] > 0.) {
	cvxnonsep_psig40_pd[62] = -0.34*(cvxnonsep_psig40_pd[63]/x[1]);
	} else if (-0.34 > 1.) {
	cvxnonsep_psig40_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],-0.34);
	}
	cvxnonsep_psig40_pd[64] = cvxnonsep_psig40_pd[61] * cvxnonsep_psig40_pd[63];
	cvxnonsep_psig40_pd[66] = pow(x[2], -0.02);
	if (errno) in_trouble2("pow",x[2],-0.02);
	if (x[2] > 0.) {
	cvxnonsep_psig40_pd[65] = -0.02*(cvxnonsep_psig40_pd[66]/x[2]);
	} else if (-0.02 > 1.) {
	cvxnonsep_psig40_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.02);
	}
	cvxnonsep_psig40_pd[67] = cvxnonsep_psig40_pd[64] * cvxnonsep_psig40_pd[66];
	cvxnonsep_psig40_pd[69] = pow(x[3], -0.035);
	if (errno) in_trouble2("pow",x[3],-0.035);
	if (x[3] > 0.) {
	cvxnonsep_psig40_pd[68] = -0.035*(cvxnonsep_psig40_pd[69]/x[3]);
	} else if (-0.035 > 1.) {
	cvxnonsep_psig40_pd[68] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],-0.035);
	}
	cvxnonsep_psig40_pd[70] = cvxnonsep_psig40_pd[67] * cvxnonsep_psig40_pd[69];
	cvxnonsep_psig40_pd[72] = pow(x[4], -0.26);
	if (errno) in_trouble2("pow",x[4],-0.26);
	if (x[4] > 0.) {
	cvxnonsep_psig40_pd[71] = -0.26*(cvxnonsep_psig40_pd[72]/x[4]);
	} else if (-0.26 > 1.) {
	cvxnonsep_psig40_pd[71] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],-0.26);
	}
	cvxnonsep_psig40_pd[73] = cvxnonsep_psig40_pd[70] * cvxnonsep_psig40_pd[72];
	cvxnonsep_psig40_pd[75] = pow(x[5], -0.05);
	if (errno) in_trouble2("pow",x[5],-0.05);
	if (x[5] > 0.) {
	cvxnonsep_psig40_pd[74] = -0.05*(cvxnonsep_psig40_pd[75]/x[5]);
	} else if (-0.05 > 1.) {
	cvxnonsep_psig40_pd[74] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],-0.05);
	}
	cvxnonsep_psig40_pd[76] = cvxnonsep_psig40_pd[73] * cvxnonsep_psig40_pd[75];
	cvxnonsep_psig40_pd[78] = pow(x[6], -0.41);
	if (errno) in_trouble2("pow",x[6],-0.41);
	if (x[6] > 0.) {
	cvxnonsep_psig40_pd[77] = -0.41*(cvxnonsep_psig40_pd[78]/x[6]);
	} else if (-0.41 > 1.) {
	cvxnonsep_psig40_pd[77] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],-0.41);
	}
	cvxnonsep_psig40_pd[79] = cvxnonsep_psig40_pd[76] * cvxnonsep_psig40_pd[78];
	cvxnonsep_psig40_pd[81] = pow(x[7], -0.41);
	if (errno) in_trouble2("pow",x[7],-0.41);
	if (x[7] > 0.) {
	cvxnonsep_psig40_pd[80] = -0.41*(cvxnonsep_psig40_pd[81]/x[7]);
	} else if (-0.41 > 1.) {
	cvxnonsep_psig40_pd[80] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],-0.41);
	}
	cvxnonsep_psig40_pd[82] = cvxnonsep_psig40_pd[79] * cvxnonsep_psig40_pd[81];
	cvxnonsep_psig40_pd[84] = pow(x[8], -0.36);
	if (errno) in_trouble2("pow",x[8],-0.36);
	if (x[8] > 0.) {
	cvxnonsep_psig40_pd[83] = -0.36*(cvxnonsep_psig40_pd[84]/x[8]);
	} else if (-0.36 > 1.) {
	cvxnonsep_psig40_pd[83] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],-0.36);
	}
	cvxnonsep_psig40_pd[85] = cvxnonsep_psig40_pd[82] * cvxnonsep_psig40_pd[84];
	cvxnonsep_psig40_pd[87] = pow(x[9], -0.075);
	if (errno) in_trouble2("pow",x[9],-0.075);
	if (x[9] > 0.) {
	cvxnonsep_psig40_pd[86] = -0.075*(cvxnonsep_psig40_pd[87]/x[9]);
	} else if (-0.075 > 1.) {
	cvxnonsep_psig40_pd[86] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],-0.075);
	}
	cvxnonsep_psig40_pd[88] = cvxnonsep_psig40_pd[85] * cvxnonsep_psig40_pd[87];
	cvxnonsep_psig40_pd[90] = pow(x[9], -0.36);
	if (errno) in_trouble2("pow",x[9],-0.36);
	if (x[9] > 0.) {
	cvxnonsep_psig40_pd[89] = -0.36*(cvxnonsep_psig40_pd[90]/x[9]);
	} else if (-0.36 > 1.) {
	cvxnonsep_psig40_pd[89] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],-0.36);
	}
	cvxnonsep_psig40_pd[91] = cvxnonsep_psig40_pd[88] * cvxnonsep_psig40_pd[90];
	cvxnonsep_psig40_pd[93] = pow(x[10], -0.33);
	if (errno) in_trouble2("pow",x[10],-0.33);
	if (x[10] > 0.) {
	cvxnonsep_psig40_pd[92] = -0.33*(cvxnonsep_psig40_pd[93]/x[10]);
	} else if (-0.33 > 1.) {
	cvxnonsep_psig40_pd[92] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],-0.33);
	}
	cvxnonsep_psig40_pd[94] = cvxnonsep_psig40_pd[91] * cvxnonsep_psig40_pd[93];
	cvxnonsep_psig40_pd[96] = pow(x[11], -0.26);
	if (errno) in_trouble2("pow",x[11],-0.26);
	if (x[11] > 0.) {
	cvxnonsep_psig40_pd[95] = -0.26*(cvxnonsep_psig40_pd[96]/x[11]);
	} else if (-0.26 > 1.) {
	cvxnonsep_psig40_pd[95] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],-0.26);
	}
	cvxnonsep_psig40_pd[97] = cvxnonsep_psig40_pd[94] * cvxnonsep_psig40_pd[96];
	cvxnonsep_psig40_pd[99] = pow(x[12], -0.485);
	if (errno) in_trouble2("pow",x[12],-0.485);
	if (x[12] > 0.) {
	cvxnonsep_psig40_pd[98] = -0.485*(cvxnonsep_psig40_pd[99]/x[12]);
	} else if (-0.485 > 1.) {
	cvxnonsep_psig40_pd[98] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],-0.485);
	}
	cvxnonsep_psig40_pd[100] = cvxnonsep_psig40_pd[97] * cvxnonsep_psig40_pd[99];
	cvxnonsep_psig40_pd[102] = pow(x[13], -0.325);
	if (errno) in_trouble2("pow",x[13],-0.325);
	if (x[13] > 0.) {
	cvxnonsep_psig40_pd[101] = -0.325*(cvxnonsep_psig40_pd[102]/x[13]);
	} else if (-0.325 > 1.) {
	cvxnonsep_psig40_pd[101] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],-0.325);
	}
	cvxnonsep_psig40_pd[103] = cvxnonsep_psig40_pd[100] * cvxnonsep_psig40_pd[102];
	cvxnonsep_psig40_pd[105] = pow(x[14], -0.4);
	if (errno) in_trouble2("pow",x[14],-0.4);
	if (x[14] > 0.) {
	cvxnonsep_psig40_pd[104] = -0.4*(cvxnonsep_psig40_pd[105]/x[14]);
	} else if (-0.4 > 1.) {
	cvxnonsep_psig40_pd[104] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],-0.4);
	}
	cvxnonsep_psig40_pd[106] = cvxnonsep_psig40_pd[103] * cvxnonsep_psig40_pd[105];
	cvxnonsep_psig40_pd[108] = pow(x[15], -0.225);
	if (errno) in_trouble2("pow",x[15],-0.225);
	if (x[15] > 0.) {
	cvxnonsep_psig40_pd[107] = -0.225*(cvxnonsep_psig40_pd[108]/x[15]);
	} else if (-0.225 > 1.) {
	cvxnonsep_psig40_pd[107] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],-0.225);
	}
	cvxnonsep_psig40_pd[109] = cvxnonsep_psig40_pd[106] * cvxnonsep_psig40_pd[108];
	cvxnonsep_psig40_pd[111] = pow(x[16], -0.215);
	if (errno) in_trouble2("pow",x[16],-0.215);
	if (x[16] > 0.) {
	cvxnonsep_psig40_pd[110] = -0.215*(cvxnonsep_psig40_pd[111]/x[16]);
	} else if (-0.215 > 1.) {
	cvxnonsep_psig40_pd[110] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],-0.215);
	}
	cvxnonsep_psig40_pd[112] = cvxnonsep_psig40_pd[109] * cvxnonsep_psig40_pd[111];
	cvxnonsep_psig40_pd[114] = pow(x[17], -0.415);
	if (errno) in_trouble2("pow",x[17],-0.415);
	if (x[17] > 0.) {
	cvxnonsep_psig40_pd[113] = -0.415*(cvxnonsep_psig40_pd[114]/x[17]);
	} else if (-0.415 > 1.) {
	cvxnonsep_psig40_pd[113] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],-0.415);
	}
	cvxnonsep_psig40_pd[115] = cvxnonsep_psig40_pd[112] * cvxnonsep_psig40_pd[114];
	cvxnonsep_psig40_pd[117] = pow(x[18], -0.04);
	if (errno) in_trouble2("pow",x[18],-0.04);
	if (x[18] > 0.) {
	cvxnonsep_psig40_pd[116] = -0.04*(cvxnonsep_psig40_pd[117]/x[18]);
	} else if (-0.04 > 1.) {
	cvxnonsep_psig40_pd[116] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],-0.04);
	}
	cvxnonsep_psig40_pd[118] = cvxnonsep_psig40_pd[115] * cvxnonsep_psig40_pd[117];
	cvxnonsep_psig40_pd[120] = pow(x[19], -0.065);
	if (errno) in_trouble2("pow",x[19],-0.065);
	if (x[19] > 0.) {
	cvxnonsep_psig40_pd[119] = -0.065*(cvxnonsep_psig40_pd[120]/x[19]);
	} else if (-0.065 > 1.) {
	cvxnonsep_psig40_pd[119] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],-0.065);
	}
	v[40] = cvxnonsep_psig40_pd[118] * cvxnonsep_psig40_pd[120];
	rv = v[40] + x[0];
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
	rv += x[30];
	rv += x[31];
	rv += x[32];
	rv += x[33];
	rv += x[34];
	rv += x[35];
	rv += x[36];
	rv += x[37];
	rv += x[38];
	rv += x[39];
	;}

	if (wantfg & 2) {
	g[19] = cvxnonsep_psig40_pd[118]*cvxnonsep_psig40_pd[119] + 1.;
	dv[0] = cvxnonsep_psig40_pd[120]*cvxnonsep_psig40_pd[115];
	dv[1] = cvxnonsep_psig40_pd[120]*cvxnonsep_psig40_pd[117];
	g[18] = dv[0]*cvxnonsep_psig40_pd[116] + 1.;
	dv[2] = dv[1]*cvxnonsep_psig40_pd[112];
	dv[1] *= cvxnonsep_psig40_pd[114];
	g[17] = dv[2]*cvxnonsep_psig40_pd[113] + 1.;
	dv[3] = dv[1]*cvxnonsep_psig40_pd[109];
	dv[1] *= cvxnonsep_psig40_pd[111];
	g[16] = dv[3]*cvxnonsep_psig40_pd[110] + 1.;
	dv[4] = dv[1]*cvxnonsep_psig40_pd[106];
	dv[1] *= cvxnonsep_psig40_pd[108];
	g[15] = dv[4]*cvxnonsep_psig40_pd[107] + 1.;
	dv[5] = dv[1]*cvxnonsep_psig40_pd[103];
	dv[1] *= cvxnonsep_psig40_pd[105];
	g[14] = dv[5]*cvxnonsep_psig40_pd[104] + 1.;
	dv[6] = dv[1]*cvxnonsep_psig40_pd[100];
	dv[1] *= cvxnonsep_psig40_pd[102];
	g[13] = dv[6]*cvxnonsep_psig40_pd[101] + 1.;
	dv[7] = dv[1]*cvxnonsep_psig40_pd[97];
	dv[1] *= cvxnonsep_psig40_pd[99];
	g[12] = dv[7]*cvxnonsep_psig40_pd[98] + 1.;
	dv[8] = dv[1]*cvxnonsep_psig40_pd[94];
	dv[1] *= cvxnonsep_psig40_pd[96];
	g[11] = dv[8]*cvxnonsep_psig40_pd[95] + 1.;
	dv[9] = dv[1]*cvxnonsep_psig40_pd[91];
	dv[1] *= cvxnonsep_psig40_pd[93];
	g[10] = dv[9]*cvxnonsep_psig40_pd[92] + 1.;
	dv[10] = dv[1]*cvxnonsep_psig40_pd[88];
	dv[1] *= cvxnonsep_psig40_pd[90];
	g[9] = dv[10]*cvxnonsep_psig40_pd[89] + 1.;
	dv[11] = dv[1]*cvxnonsep_psig40_pd[85];
	dv[1] *= cvxnonsep_psig40_pd[87];
	g[9] += dv[11]*cvxnonsep_psig40_pd[86];
	dv[12] = dv[1]*cvxnonsep_psig40_pd[82];
	dv[1] *= cvxnonsep_psig40_pd[84];
	g[8] = dv[12]*cvxnonsep_psig40_pd[83] + 1.;
	dv[13] = dv[1]*cvxnonsep_psig40_pd[79];
	dv[1] *= cvxnonsep_psig40_pd[81];
	g[7] = dv[13]*cvxnonsep_psig40_pd[80] + 1.;
	dv[14] = dv[1]*cvxnonsep_psig40_pd[76];
	dv[1] *= cvxnonsep_psig40_pd[78];
	g[6] = dv[14]*cvxnonsep_psig40_pd[77] + 1.;
	dv[15] = dv[1]*cvxnonsep_psig40_pd[73];
	dv[1] *= cvxnonsep_psig40_pd[75];
	g[5] = dv[15]*cvxnonsep_psig40_pd[74] + 1.;
	dv[16] = dv[1]*cvxnonsep_psig40_pd[70];
	dv[1] *= cvxnonsep_psig40_pd[72];
	g[4] = dv[16]*cvxnonsep_psig40_pd[71] + 1.;
	dv[17] = dv[1]*cvxnonsep_psig40_pd[67];
	dv[1] *= cvxnonsep_psig40_pd[69];
	g[3] = dv[17]*cvxnonsep_psig40_pd[68] + 1.;
	dv[18] = dv[1]*cvxnonsep_psig40_pd[64];
	dv[1] *= cvxnonsep_psig40_pd[66];
	g[2] = dv[18]*cvxnonsep_psig40_pd[65] + 1.;
	dv[19] = dv[1]*cvxnonsep_psig40_pd[61];
	dv[1] *= cvxnonsep_psig40_pd[63];
	g[1] = dv[19]*cvxnonsep_psig40_pd[62] + 1.;
	dv[20] = dv[1]*cvxnonsep_psig40_pd[58];
	dv[1] *= cvxnonsep_psig40_pd[60];
	g[0] = dv[20]*cvxnonsep_psig40_pd[59] + 1.;
	dv[21] = dv[1]*cvxnonsep_psig40_pd[55];
	dv[1] *= cvxnonsep_psig40_pd[57];
	g[39] = dv[21]*cvxnonsep_psig40_pd[56] + 1.;
	dv[22] = dv[1]*cvxnonsep_psig40_pd[52];
	dv[1] *= cvxnonsep_psig40_pd[54];
	g[38] = dv[22]*cvxnonsep_psig40_pd[53] + 1.;
	dv[23] = dv[1]*cvxnonsep_psig40_pd[49];
	dv[1] *= cvxnonsep_psig40_pd[51];
	g[37] = dv[23]*cvxnonsep_psig40_pd[50] + 1.;
	dv[24] = dv[1]*cvxnonsep_psig40_pd[46];
	dv[1] *= cvxnonsep_psig40_pd[48];
	g[36] = dv[24]*cvxnonsep_psig40_pd[47] + 1.;
	dv[25] = dv[1]*cvxnonsep_psig40_pd[43];
	dv[1] *= cvxnonsep_psig40_pd[45];
	g[35] = dv[25]*cvxnonsep_psig40_pd[44] + 1.;
	dv[26] = dv[1]*cvxnonsep_psig40_pd[40];
	dv[1] *= cvxnonsep_psig40_pd[42];
	g[34] = dv[26]*cvxnonsep_psig40_pd[41] + 1.;
	dv[27] = dv[1]*cvxnonsep_psig40_pd[37];
	dv[1] *= cvxnonsep_psig40_pd[39];
	g[33] = dv[27]*cvxnonsep_psig40_pd[38] + 1.;
	dv[28] = dv[1]*cvxnonsep_psig40_pd[34];
	dv[1] *= cvxnonsep_psig40_pd[36];
	g[32] = dv[28]*cvxnonsep_psig40_pd[35] + 1.;
	dv[29] = dv[1]*cvxnonsep_psig40_pd[31];
	dv[1] *= cvxnonsep_psig40_pd[33];
	g[31] = dv[29]*cvxnonsep_psig40_pd[32] + 1.;
	dv[30] = dv[1]*cvxnonsep_psig40_pd[28];
	dv[1] *= cvxnonsep_psig40_pd[30];
	g[30] = dv[30]*cvxnonsep_psig40_pd[29] + 1.;
	dv[31] = dv[1]*cvxnonsep_psig40_pd[25];
	dv[1] *= cvxnonsep_psig40_pd[27];
	g[29] = dv[31]*cvxnonsep_psig40_pd[26] + 1.;
	dv[32] = dv[1]*cvxnonsep_psig40_pd[22];
	dv[1] *= cvxnonsep_psig40_pd[24];
	g[28] = dv[32]*cvxnonsep_psig40_pd[23] + 1.;
	dv[33] = dv[1]*cvxnonsep_psig40_pd[19];
	dv[1] *= cvxnonsep_psig40_pd[21];
	g[27] = dv[33]*cvxnonsep_psig40_pd[20] + 1.;
	dv[34] = dv[1]*cvxnonsep_psig40_pd[16];
	dv[1] *= cvxnonsep_psig40_pd[18];
	g[26] = dv[34]*cvxnonsep_psig40_pd[17] + 1.;
	dv[35] = dv[1]*cvxnonsep_psig40_pd[13];
	dv[1] *= cvxnonsep_psig40_pd[15];
	g[25] = dv[35]*cvxnonsep_psig40_pd[14] + 1.;
	dv[36] = dv[1]*cvxnonsep_psig40_pd[10];
	dv[1] *= cvxnonsep_psig40_pd[12];
	g[24] = dv[36]*cvxnonsep_psig40_pd[11] + 1.;
	dv[37] = dv[1]*cvxnonsep_psig40_pd[7];
	dv[1] *= cvxnonsep_psig40_pd[9];
	g[23] = dv[37]*cvxnonsep_psig40_pd[8] + 1.;
	dv[38] = dv[1]*cvxnonsep_psig40_pd[4];
	dv[1] *= cvxnonsep_psig40_pd[6];
	g[22] = dv[38]*cvxnonsep_psig40_pd[5] + 1.;
	dv[39] = dv[1]*cvxnonsep_psig40_pd[1];
	dv[1] *= cvxnonsep_psig40_pd[3];
	g[21] = dv[39]*cvxnonsep_psig40_pd[2] + 1.;
	dv[1] *= 40000.;
	g[20] = dv[1]*cvxnonsep_psig40_pd[0] + 1.;
	}

	return rv;
}

 void
cvxnonsep_psig40_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
