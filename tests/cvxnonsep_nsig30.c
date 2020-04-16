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
 fint cvxnonsep_nsig30_auxcom_[1] = { 1 /* nlc */ };
 fint cvxnonsep_nsig30_funcom_[67] = {
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

 real cvxnonsep_nsig30_boundc_[1+60+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real cvxnonsep_nsig30_x0comn_[30] = {
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1. };

 static real cvxnonsep_nsig30_pd[88];
static real cvxnonsep_nsig30_old_x[30];
static int cvxnonsep_nsig30_xkind = -1;

 static int
cvxnonsep_nsig30_xcheck(real *x)
{
	real *x1 = cvxnonsep_nsig30_old_x, *xe = x + 30;
	errno = 0;
	if (cvxnonsep_nsig30_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_nsig30_xkind = 0;
	return 1;
	}
 real
cvxnonsep_nsig30_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_nsig30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 1.69*x[0];
	rv += 0.39*x[1];
	rv += 0.45*x[2];
	rv += 0.34*x[3];
	rv += 0.46*x[4];
	rv += 1.86*x[5];
	rv += 1.46*x[6];
	rv += 0.98*x[7];
	rv += 1.16*x[8];
	rv += 0.47*x[9];
	rv += 0.92*x[10];
	rv += 1.43*x[11];
	rv += 1.81*x[12];
	rv += 1.78*x[13];
	rv += 0.67*x[14];
	rv += 1.29*x[15];
	rv += 0.76*x[16];
	rv += x[17];
	rv += 1.62*x[18];
	rv += 1.07*x[19];
	rv += 0.7*x[20];
	rv += 1.88*x[21];
	rv += 1.75*x[22];
	rv += 1.1*x[23];
	rv += 1.24*x[24];
	rv += 1.17*x[25];
	rv += 0.82*x[26];
	rv += 1.06*x[27];
	rv += 0.94*x[28];
	rv += 0.46*x[29];
	;}

	if (wantfg & 2) {
	g[0] = 1.69;
	g[1] = 0.39;
	g[2] = 0.45;
	g[3] = 0.34;
	g[4] = 0.46;
	g[5] = 1.86;
	g[6] = 1.46;
	g[7] = 0.98;
	g[8] = 1.16;
	g[9] = 0.47;
	g[10] = 0.92;
	g[11] = 1.43;
	g[12] = 1.81;
	g[13] = 1.78;
	g[14] = 0.67;
	g[15] = 1.29;
	g[16] = 0.76;
	g[17] = 1.;
	g[18] = 1.62;
	g[19] = 1.07;
	g[20] = 0.7;
	g[21] = 1.88;
	g[22] = 1.75;
	g[23] = 1.1;
	g[24] = 1.24;
	g[25] = 1.17;
	g[26] = 0.82;
	g[27] = 1.06;
	g[28] = 0.94;
	g[29] = 0.46;
	}

	return rv;
}

 void
cvxnonsep_nsig30_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[30], dv[29];
	fint wantfg = *needfg;
	if (cvxnonsep_nsig30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[15], 0.028);
	if (errno) in_trouble2("pow",x[15],0.028);
	if (x[15] > 0.) {
	cvxnonsep_nsig30_pd[0] = 0.028*(v[0]/x[15]);
	} else if (0.028 > 1.) {
	cvxnonsep_nsig30_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],0.028);
	}
	cvxnonsep_nsig30_pd[1] = -0.2 * v[0];
	cvxnonsep_nsig30_pd[3] = pow(x[16], 0.041);
	if (errno) in_trouble2("pow",x[16],0.041);
	if (x[16] > 0.) {
	cvxnonsep_nsig30_pd[2] = 0.041*(cvxnonsep_nsig30_pd[3]/x[16]);
	} else if (0.041 > 1.) {
	cvxnonsep_nsig30_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],0.041);
	}
	cvxnonsep_nsig30_pd[4] = cvxnonsep_nsig30_pd[1] * cvxnonsep_nsig30_pd[3];
	cvxnonsep_nsig30_pd[6] = pow(x[17], 0.047);
	if (errno) in_trouble2("pow",x[17],0.047);
	if (x[17] > 0.) {
	cvxnonsep_nsig30_pd[5] = 0.047*(cvxnonsep_nsig30_pd[6]/x[17]);
	} else if (0.047 > 1.) {
	cvxnonsep_nsig30_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],0.047);
	}
	cvxnonsep_nsig30_pd[7] = cvxnonsep_nsig30_pd[4] * cvxnonsep_nsig30_pd[6];
	cvxnonsep_nsig30_pd[9] = pow(x[18], 0.022);
	if (errno) in_trouble2("pow",x[18],0.022);
	if (x[18] > 0.) {
	cvxnonsep_nsig30_pd[8] = 0.022*(cvxnonsep_nsig30_pd[9]/x[18]);
	} else if (0.022 > 1.) {
	cvxnonsep_nsig30_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],0.022);
	}
	cvxnonsep_nsig30_pd[10] = cvxnonsep_nsig30_pd[7] * cvxnonsep_nsig30_pd[9];
	cvxnonsep_nsig30_pd[12] = pow(x[19], 0.041);
	if (errno) in_trouble2("pow",x[19],0.041);
	if (x[19] > 0.) {
	cvxnonsep_nsig30_pd[11] = 0.041*(cvxnonsep_nsig30_pd[12]/x[19]);
	} else if (0.041 > 1.) {
	cvxnonsep_nsig30_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],0.041);
	}
	cvxnonsep_nsig30_pd[13] = cvxnonsep_nsig30_pd[10] * cvxnonsep_nsig30_pd[12];
	cvxnonsep_nsig30_pd[15] = pow(x[20], 0.026);
	if (errno) in_trouble2("pow",x[20],0.026);
	if (x[20] > 0.) {
	cvxnonsep_nsig30_pd[14] = 0.026*(cvxnonsep_nsig30_pd[15]/x[20]);
	} else if (0.026 > 1.) {
	cvxnonsep_nsig30_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],0.026);
	}
	cvxnonsep_nsig30_pd[16] = cvxnonsep_nsig30_pd[13] * cvxnonsep_nsig30_pd[15];
	cvxnonsep_nsig30_pd[18] = pow(x[21], 0.052);
	if (errno) in_trouble2("pow",x[21],0.052);
	if (x[21] > 0.) {
	cvxnonsep_nsig30_pd[17] = 0.052*(cvxnonsep_nsig30_pd[18]/x[21]);
	} else if (0.052 > 1.) {
	cvxnonsep_nsig30_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],0.052);
	}
	cvxnonsep_nsig30_pd[19] = cvxnonsep_nsig30_pd[16] * cvxnonsep_nsig30_pd[18];
	cvxnonsep_nsig30_pd[21] = pow(x[22], 0.051);
	if (errno) in_trouble2("pow",x[22],0.051);
	if (x[22] > 0.) {
	cvxnonsep_nsig30_pd[20] = 0.051*(cvxnonsep_nsig30_pd[21]/x[22]);
	} else if (0.051 > 1.) {
	cvxnonsep_nsig30_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],0.051);
	}
	cvxnonsep_nsig30_pd[22] = cvxnonsep_nsig30_pd[19] * cvxnonsep_nsig30_pd[21];
	cvxnonsep_nsig30_pd[24] = pow(x[23], 0.016);
	if (errno) in_trouble2("pow",x[23],0.016);
	if (x[23] > 0.) {
	cvxnonsep_nsig30_pd[23] = 0.016*(cvxnonsep_nsig30_pd[24]/x[23]);
	} else if (0.016 > 1.) {
	cvxnonsep_nsig30_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],0.016);
	}
	cvxnonsep_nsig30_pd[25] = cvxnonsep_nsig30_pd[22] * cvxnonsep_nsig30_pd[24];
	cvxnonsep_nsig30_pd[27] = pow(x[24], 0.038);
	if (errno) in_trouble2("pow",x[24],0.038);
	if (x[24] > 0.) {
	cvxnonsep_nsig30_pd[26] = 0.038*(cvxnonsep_nsig30_pd[27]/x[24]);
	} else if (0.038 > 1.) {
	cvxnonsep_nsig30_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],0.038);
	}
	cvxnonsep_nsig30_pd[28] = cvxnonsep_nsig30_pd[25] * cvxnonsep_nsig30_pd[27];
	cvxnonsep_nsig30_pd[30] = pow(x[25], 0.036);
	if (errno) in_trouble2("pow",x[25],0.036);
	if (x[25] > 0.) {
	cvxnonsep_nsig30_pd[29] = 0.036*(cvxnonsep_nsig30_pd[30]/x[25]);
	} else if (0.036 > 1.) {
	cvxnonsep_nsig30_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],0.036);
	}
	cvxnonsep_nsig30_pd[31] = cvxnonsep_nsig30_pd[28] * cvxnonsep_nsig30_pd[30];
	cvxnonsep_nsig30_pd[33] = pow(x[26], 0.033);
	if (errno) in_trouble2("pow",x[26],0.033);
	if (x[26] > 0.) {
	cvxnonsep_nsig30_pd[32] = 0.033*(cvxnonsep_nsig30_pd[33]/x[26]);
	} else if (0.033 > 1.) {
	cvxnonsep_nsig30_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],0.033);
	}
	cvxnonsep_nsig30_pd[34] = cvxnonsep_nsig30_pd[31] * cvxnonsep_nsig30_pd[33];
	cvxnonsep_nsig30_pd[36] = pow(x[27], 0.054);
	if (errno) in_trouble2("pow",x[27],0.054);
	if (x[27] > 0.) {
	cvxnonsep_nsig30_pd[35] = 0.054*(cvxnonsep_nsig30_pd[36]/x[27]);
	} else if (0.054 > 1.) {
	cvxnonsep_nsig30_pd[35] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[27],0.054);
	}
	cvxnonsep_nsig30_pd[37] = cvxnonsep_nsig30_pd[34] * cvxnonsep_nsig30_pd[36];
	cvxnonsep_nsig30_pd[39] = pow(x[28], 0.016);
	if (errno) in_trouble2("pow",x[28],0.016);
	if (x[28] > 0.) {
	cvxnonsep_nsig30_pd[38] = 0.016*(cvxnonsep_nsig30_pd[39]/x[28]);
	} else if (0.016 > 1.) {
	cvxnonsep_nsig30_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],0.016);
	}
	cvxnonsep_nsig30_pd[40] = cvxnonsep_nsig30_pd[37] * cvxnonsep_nsig30_pd[39];
	cvxnonsep_nsig30_pd[42] = pow(x[29], 0.02);
	if (errno) in_trouble2("pow",x[29],0.02);
	if (x[29] > 0.) {
	cvxnonsep_nsig30_pd[41] = 0.02*(cvxnonsep_nsig30_pd[42]/x[29]);
	} else if (0.02 > 1.) {
	cvxnonsep_nsig30_pd[41] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],0.02);
	}
	cvxnonsep_nsig30_pd[43] = cvxnonsep_nsig30_pd[40] * cvxnonsep_nsig30_pd[42];
	cvxnonsep_nsig30_pd[45] = pow(x[0], 0.007);
	if (errno) in_trouble2("pow",x[0],0.007);
	if (x[0] > 0.) {
	cvxnonsep_nsig30_pd[44] = 0.007*(cvxnonsep_nsig30_pd[45]/x[0]);
	} else if (0.007 > 1.) {
	cvxnonsep_nsig30_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.007);
	}
	cvxnonsep_nsig30_pd[46] = cvxnonsep_nsig30_pd[43] * cvxnonsep_nsig30_pd[45];
	cvxnonsep_nsig30_pd[48] = pow(x[1], 0.058);
	if (errno) in_trouble2("pow",x[1],0.058);
	if (x[1] > 0.) {
	cvxnonsep_nsig30_pd[47] = 0.058*(cvxnonsep_nsig30_pd[48]/x[1]);
	} else if (0.058 > 1.) {
	cvxnonsep_nsig30_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.058);
	}
	cvxnonsep_nsig30_pd[49] = cvxnonsep_nsig30_pd[46] * cvxnonsep_nsig30_pd[48];
	cvxnonsep_nsig30_pd[51] = pow(x[2], 0.04);
	if (errno) in_trouble2("pow",x[2],0.04);
	if (x[2] > 0.) {
	cvxnonsep_nsig30_pd[50] = 0.04*(cvxnonsep_nsig30_pd[51]/x[2]);
	} else if (0.04 > 1.) {
	cvxnonsep_nsig30_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.04);
	}
	cvxnonsep_nsig30_pd[52] = cvxnonsep_nsig30_pd[49] * cvxnonsep_nsig30_pd[51];
	cvxnonsep_nsig30_pd[54] = pow(x[3], 0.03);
	if (errno) in_trouble2("pow",x[3],0.03);
	if (x[3] > 0.) {
	cvxnonsep_nsig30_pd[53] = 0.03*(cvxnonsep_nsig30_pd[54]/x[3]);
	} else if (0.03 > 1.) {
	cvxnonsep_nsig30_pd[53] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.03);
	}
	cvxnonsep_nsig30_pd[55] = cvxnonsep_nsig30_pd[52] * cvxnonsep_nsig30_pd[54];
	cvxnonsep_nsig30_pd[57] = pow(x[4], 0.039);
	if (errno) in_trouble2("pow",x[4],0.039);
	if (x[4] > 0.) {
	cvxnonsep_nsig30_pd[56] = 0.039*(cvxnonsep_nsig30_pd[57]/x[4]);
	} else if (0.039 > 1.) {
	cvxnonsep_nsig30_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.039);
	}
	cvxnonsep_nsig30_pd[58] = cvxnonsep_nsig30_pd[55] * cvxnonsep_nsig30_pd[57];
	cvxnonsep_nsig30_pd[60] = pow(x[5], 0.034);
	if (errno) in_trouble2("pow",x[5],0.034);
	if (x[5] > 0.) {
	cvxnonsep_nsig30_pd[59] = 0.034*(cvxnonsep_nsig30_pd[60]/x[5]);
	} else if (0.034 > 1.) {
	cvxnonsep_nsig30_pd[59] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.034);
	}
	cvxnonsep_nsig30_pd[61] = cvxnonsep_nsig30_pd[58] * cvxnonsep_nsig30_pd[60];
	cvxnonsep_nsig30_pd[63] = pow(x[6], 0.04);
	if (errno) in_trouble2("pow",x[6],0.04);
	if (x[6] > 0.) {
	cvxnonsep_nsig30_pd[62] = 0.04*(cvxnonsep_nsig30_pd[63]/x[6]);
	} else if (0.04 > 1.) {
	cvxnonsep_nsig30_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.04);
	}
	cvxnonsep_nsig30_pd[64] = cvxnonsep_nsig30_pd[61] * cvxnonsep_nsig30_pd[63];
	cvxnonsep_nsig30_pd[66] = pow(x[7], 0.034);
	if (errno) in_trouble2("pow",x[7],0.034);
	if (x[7] > 0.) {
	cvxnonsep_nsig30_pd[65] = 0.034*(cvxnonsep_nsig30_pd[66]/x[7]);
	} else if (0.034 > 1.) {
	cvxnonsep_nsig30_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.034);
	}
	cvxnonsep_nsig30_pd[67] = cvxnonsep_nsig30_pd[64] * cvxnonsep_nsig30_pd[66];
	cvxnonsep_nsig30_pd[69] = pow(x[8], 0.044);
	if (errno) in_trouble2("pow",x[8],0.044);
	if (x[8] > 0.) {
	cvxnonsep_nsig30_pd[68] = 0.044*(cvxnonsep_nsig30_pd[69]/x[8]);
	} else if (0.044 > 1.) {
	cvxnonsep_nsig30_pd[68] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],0.044);
	}
	cvxnonsep_nsig30_pd[70] = cvxnonsep_nsig30_pd[67] * cvxnonsep_nsig30_pd[69];
	cvxnonsep_nsig30_pd[72] = pow(x[9], 0.032);
	if (errno) in_trouble2("pow",x[9],0.032);
	if (x[9] > 0.) {
	cvxnonsep_nsig30_pd[71] = 0.032*(cvxnonsep_nsig30_pd[72]/x[9]);
	} else if (0.032 > 1.) {
	cvxnonsep_nsig30_pd[71] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],0.032);
	}
	cvxnonsep_nsig30_pd[73] = cvxnonsep_nsig30_pd[70] * cvxnonsep_nsig30_pd[72];
	cvxnonsep_nsig30_pd[75] = pow(x[10], 0.061);
	if (errno) in_trouble2("pow",x[10],0.061);
	if (x[10] > 0.) {
	cvxnonsep_nsig30_pd[74] = 0.061*(cvxnonsep_nsig30_pd[75]/x[10]);
	} else if (0.061 > 1.) {
	cvxnonsep_nsig30_pd[74] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],0.061);
	}
	cvxnonsep_nsig30_pd[76] = cvxnonsep_nsig30_pd[73] * cvxnonsep_nsig30_pd[75];
	cvxnonsep_nsig30_pd[78] = pow(x[11], 0.013);
	if (errno) in_trouble2("pow",x[11],0.013);
	if (x[11] > 0.) {
	cvxnonsep_nsig30_pd[77] = 0.013*(cvxnonsep_nsig30_pd[78]/x[11]);
	} else if (0.013 > 1.) {
	cvxnonsep_nsig30_pd[77] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],0.013);
	}
	cvxnonsep_nsig30_pd[79] = cvxnonsep_nsig30_pd[76] * cvxnonsep_nsig30_pd[78];
	cvxnonsep_nsig30_pd[81] = pow(x[12], 0.007);
	if (errno) in_trouble2("pow",x[12],0.007);
	if (x[12] > 0.) {
	cvxnonsep_nsig30_pd[80] = 0.007*(cvxnonsep_nsig30_pd[81]/x[12]);
	} else if (0.007 > 1.) {
	cvxnonsep_nsig30_pd[80] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],0.007);
	}
	cvxnonsep_nsig30_pd[82] = cvxnonsep_nsig30_pd[79] * cvxnonsep_nsig30_pd[81];
	cvxnonsep_nsig30_pd[84] = pow(x[13], 0.007);
	if (errno) in_trouble2("pow",x[13],0.007);
	if (x[13] > 0.) {
	cvxnonsep_nsig30_pd[83] = 0.007*(cvxnonsep_nsig30_pd[84]/x[13]);
	} else if (0.007 > 1.) {
	cvxnonsep_nsig30_pd[83] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],0.007);
	}
	cvxnonsep_nsig30_pd[85] = cvxnonsep_nsig30_pd[82] * cvxnonsep_nsig30_pd[84];
	cvxnonsep_nsig30_pd[87] = pow(x[14], 0.004);
	if (errno) in_trouble2("pow",x[14],0.004);
	if (x[14] > 0.) {
	cvxnonsep_nsig30_pd[86] = 0.004*(cvxnonsep_nsig30_pd[87]/x[14]);
	} else if (0.004 > 1.) {
	cvxnonsep_nsig30_pd[86] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],0.004);
	}
	v[29] = cvxnonsep_nsig30_pd[85] * cvxnonsep_nsig30_pd[87];
	c[0] = v[29];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[14] = cvxnonsep_nsig30_pd[85]*cvxnonsep_nsig30_pd[86];
	dv[0] = cvxnonsep_nsig30_pd[87]*cvxnonsep_nsig30_pd[82];
	dv[1] = cvxnonsep_nsig30_pd[87]*cvxnonsep_nsig30_pd[84];
	J[13] = dv[0]*cvxnonsep_nsig30_pd[83];
	dv[2] = dv[1]*cvxnonsep_nsig30_pd[79];
	dv[1] *= cvxnonsep_nsig30_pd[81];
	J[12] = dv[2]*cvxnonsep_nsig30_pd[80];
	dv[3] = dv[1]*cvxnonsep_nsig30_pd[76];
	dv[1] *= cvxnonsep_nsig30_pd[78];
	J[11] = dv[3]*cvxnonsep_nsig30_pd[77];
	dv[4] = dv[1]*cvxnonsep_nsig30_pd[73];
	dv[1] *= cvxnonsep_nsig30_pd[75];
	J[10] = dv[4]*cvxnonsep_nsig30_pd[74];
	dv[5] = dv[1]*cvxnonsep_nsig30_pd[70];
	dv[1] *= cvxnonsep_nsig30_pd[72];
	J[9] = dv[5]*cvxnonsep_nsig30_pd[71];
	dv[6] = dv[1]*cvxnonsep_nsig30_pd[67];
	dv[1] *= cvxnonsep_nsig30_pd[69];
	J[8] = dv[6]*cvxnonsep_nsig30_pd[68];
	dv[7] = dv[1]*cvxnonsep_nsig30_pd[64];
	dv[1] *= cvxnonsep_nsig30_pd[66];
	J[7] = dv[7]*cvxnonsep_nsig30_pd[65];
	dv[8] = dv[1]*cvxnonsep_nsig30_pd[61];
	dv[1] *= cvxnonsep_nsig30_pd[63];
	J[6] = dv[8]*cvxnonsep_nsig30_pd[62];
	dv[9] = dv[1]*cvxnonsep_nsig30_pd[58];
	dv[1] *= cvxnonsep_nsig30_pd[60];
	J[5] = dv[9]*cvxnonsep_nsig30_pd[59];
	dv[10] = dv[1]*cvxnonsep_nsig30_pd[55];
	dv[1] *= cvxnonsep_nsig30_pd[57];
	J[4] = dv[10]*cvxnonsep_nsig30_pd[56];
	dv[11] = dv[1]*cvxnonsep_nsig30_pd[52];
	dv[1] *= cvxnonsep_nsig30_pd[54];
	J[3] = dv[11]*cvxnonsep_nsig30_pd[53];
	dv[12] = dv[1]*cvxnonsep_nsig30_pd[49];
	dv[1] *= cvxnonsep_nsig30_pd[51];
	J[2] = dv[12]*cvxnonsep_nsig30_pd[50];
	dv[13] = dv[1]*cvxnonsep_nsig30_pd[46];
	dv[1] *= cvxnonsep_nsig30_pd[48];
	J[1] = dv[13]*cvxnonsep_nsig30_pd[47];
	dv[14] = dv[1]*cvxnonsep_nsig30_pd[43];
	dv[1] *= cvxnonsep_nsig30_pd[45];
	J[0] = dv[14]*cvxnonsep_nsig30_pd[44];
	dv[15] = dv[1]*cvxnonsep_nsig30_pd[40];
	dv[1] *= cvxnonsep_nsig30_pd[42];
	J[29] = dv[15]*cvxnonsep_nsig30_pd[41];
	dv[16] = dv[1]*cvxnonsep_nsig30_pd[37];
	dv[1] *= cvxnonsep_nsig30_pd[39];
	J[28] = dv[16]*cvxnonsep_nsig30_pd[38];
	dv[17] = dv[1]*cvxnonsep_nsig30_pd[34];
	dv[1] *= cvxnonsep_nsig30_pd[36];
	J[27] = dv[17]*cvxnonsep_nsig30_pd[35];
	dv[18] = dv[1]*cvxnonsep_nsig30_pd[31];
	dv[1] *= cvxnonsep_nsig30_pd[33];
	J[26] = dv[18]*cvxnonsep_nsig30_pd[32];
	dv[19] = dv[1]*cvxnonsep_nsig30_pd[28];
	dv[1] *= cvxnonsep_nsig30_pd[30];
	J[25] = dv[19]*cvxnonsep_nsig30_pd[29];
	dv[20] = dv[1]*cvxnonsep_nsig30_pd[25];
	dv[1] *= cvxnonsep_nsig30_pd[27];
	J[24] = dv[20]*cvxnonsep_nsig30_pd[26];
	dv[21] = dv[1]*cvxnonsep_nsig30_pd[22];
	dv[1] *= cvxnonsep_nsig30_pd[24];
	J[23] = dv[21]*cvxnonsep_nsig30_pd[23];
	dv[22] = dv[1]*cvxnonsep_nsig30_pd[19];
	dv[1] *= cvxnonsep_nsig30_pd[21];
	J[22] = dv[22]*cvxnonsep_nsig30_pd[20];
	dv[23] = dv[1]*cvxnonsep_nsig30_pd[16];
	dv[1] *= cvxnonsep_nsig30_pd[18];
	J[21] = dv[23]*cvxnonsep_nsig30_pd[17];
	dv[24] = dv[1]*cvxnonsep_nsig30_pd[13];
	dv[1] *= cvxnonsep_nsig30_pd[15];
	J[20] = dv[24]*cvxnonsep_nsig30_pd[14];
	dv[25] = dv[1]*cvxnonsep_nsig30_pd[10];
	dv[1] *= cvxnonsep_nsig30_pd[12];
	J[19] = dv[25]*cvxnonsep_nsig30_pd[11];
	dv[26] = dv[1]*cvxnonsep_nsig30_pd[7];
	dv[1] *= cvxnonsep_nsig30_pd[9];
	J[18] = dv[26]*cvxnonsep_nsig30_pd[8];
	dv[27] = dv[1]*cvxnonsep_nsig30_pd[4];
	dv[1] *= cvxnonsep_nsig30_pd[6];
	J[17] = dv[27]*cvxnonsep_nsig30_pd[5];
	dv[28] = dv[1]*cvxnonsep_nsig30_pd[1];
	dv[1] *= cvxnonsep_nsig30_pd[3];
	J[16] = dv[28]*cvxnonsep_nsig30_pd[2];
	dv[1] = -dv[1]*0.2;
	J[15] = dv[1]*cvxnonsep_nsig30_pd[0];
	}
}
#ifdef __cplusplus
	}
#endif
