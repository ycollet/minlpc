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
 fint cvxnonsep_nsig40_auxcom_[1] = { 1 /* nlc */ };
 fint cvxnonsep_nsig40_funcom_[87] = {
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

 real cvxnonsep_nsig40_boundc_[1+80+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real cvxnonsep_nsig40_x0comn_[40] = {
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1. };

 static real cvxnonsep_nsig40_pd[118];
static real cvxnonsep_nsig40_old_x[40];
static int cvxnonsep_nsig40_xkind = -1;

 static int
cvxnonsep_nsig40_xcheck(real *x)
{
	real *x1 = cvxnonsep_nsig40_old_x, *xe = x + 40;
	errno = 0;
	if (cvxnonsep_nsig40_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	cvxnonsep_nsig40_xkind = 0;
	return 1;
	}
 real
cvxnonsep_nsig40_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (cvxnonsep_nsig40_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 0.25*x[0];
	rv += 0.98*x[1];
	rv += 1.71*x[2];
	rv += 1.75*x[3];
	rv += 0.54*x[4];
	rv += 0.42*x[5];
	rv += 1.13*x[6];
	rv += 1.28*x[7];
	rv += 0.83*x[8];
	rv += 0.41*x[9];
	rv += 1.9*x[10];
	rv += 0.16*x[11];
	rv += 0.21*x[12];
	rv += 0.28*x[13];
	rv += 0.33*x[14];
	rv += 1.24*x[15];
	rv += 1.15*x[16];
	rv += 0.1*x[17];
	rv += 1.86*x[18];
	rv += 1.46*x[19];
	rv += 1.1*x[20];
	rv += 1.86*x[21];
	rv += 0.86*x[22];
	rv += 1.23*x[23];
	rv += 0.72*x[24];
	rv += 0.47*x[25];
	rv += 0.98*x[26];
	rv += 0.39*x[27];
	rv += 0.25*x[28];
	rv += 0.41*x[29];
	rv += 0.29*x[30];
	rv += 0.38*x[31];
	rv += 1.49*x[32];
	rv += 1.27*x[33];
	rv += 0.56*x[34];
	rv += 1.08*x[35];
	rv += 1.39*x[36];
	rv += x[37];
	rv += 1.37*x[38];
	rv += 0.89*x[39];
	;}

	if (wantfg & 2) {
	g[0] = 0.25;
	g[1] = 0.98;
	g[2] = 1.71;
	g[3] = 1.75;
	g[4] = 0.54;
	g[5] = 0.42;
	g[6] = 1.13;
	g[7] = 1.28;
	g[8] = 0.83;
	g[9] = 0.41;
	g[10] = 1.9;
	g[11] = 0.16;
	g[12] = 0.21;
	g[13] = 0.28;
	g[14] = 0.33;
	g[15] = 1.24;
	g[16] = 1.15;
	g[17] = 0.1;
	g[18] = 1.86;
	g[19] = 1.46;
	g[20] = 1.1;
	g[21] = 1.86;
	g[22] = 0.86;
	g[23] = 1.23;
	g[24] = 0.72;
	g[25] = 0.47;
	g[26] = 0.98;
	g[27] = 0.39;
	g[28] = 0.25;
	g[29] = 0.41;
	g[30] = 0.29;
	g[31] = 0.38;
	g[32] = 1.49;
	g[33] = 1.27;
	g[34] = 0.56;
	g[35] = 1.08;
	g[36] = 1.39;
	g[37] = 1.;
	g[38] = 1.37;
	g[39] = 0.89;
	}

	return rv;
}

 void
cvxnonsep_nsig40_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[40], dv[39];
	fint wantfg = *needfg;
	if (cvxnonsep_nsig40_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[20], 0.035);
	if (errno) in_trouble2("pow",x[20],0.035);
	if (x[20] > 0.) {
	cvxnonsep_nsig40_pd[0] = 0.035*(v[0]/x[20]);
	} else if (0.035 > 1.) {
	cvxnonsep_nsig40_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],0.035);
	}
	cvxnonsep_nsig40_pd[1] = -0.2 * v[0];
	cvxnonsep_nsig40_pd[3] = pow(x[21], 0.003);
	if (errno) in_trouble2("pow",x[21],0.003);
	if (x[21] > 0.) {
	cvxnonsep_nsig40_pd[2] = 0.003*(cvxnonsep_nsig40_pd[3]/x[21]);
	} else if (0.003 > 1.) {
	cvxnonsep_nsig40_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],0.003);
	}
	cvxnonsep_nsig40_pd[4] = cvxnonsep_nsig40_pd[1] * cvxnonsep_nsig40_pd[3];
	cvxnonsep_nsig40_pd[6] = pow(x[22], 0.04);
	if (errno) in_trouble2("pow",x[22],0.04);
	if (x[22] > 0.) {
	cvxnonsep_nsig40_pd[5] = 0.04*(cvxnonsep_nsig40_pd[6]/x[22]);
	} else if (0.04 > 1.) {
	cvxnonsep_nsig40_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],0.04);
	}
	cvxnonsep_nsig40_pd[7] = cvxnonsep_nsig40_pd[4] * cvxnonsep_nsig40_pd[6];
	cvxnonsep_nsig40_pd[9] = pow(x[23], 0.044);
	if (errno) in_trouble2("pow",x[23],0.044);
	if (x[23] > 0.) {
	cvxnonsep_nsig40_pd[8] = 0.044*(cvxnonsep_nsig40_pd[9]/x[23]);
	} else if (0.044 > 1.) {
	cvxnonsep_nsig40_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],0.044);
	}
	cvxnonsep_nsig40_pd[10] = cvxnonsep_nsig40_pd[7] * cvxnonsep_nsig40_pd[9];
	cvxnonsep_nsig40_pd[12] = pow(x[24], 0.046);
	if (errno) in_trouble2("pow",x[24],0.046);
	if (x[24] > 0.) {
	cvxnonsep_nsig40_pd[11] = 0.046*(cvxnonsep_nsig40_pd[12]/x[24]);
	} else if (0.046 > 1.) {
	cvxnonsep_nsig40_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],0.046);
	}
	cvxnonsep_nsig40_pd[13] = cvxnonsep_nsig40_pd[10] * cvxnonsep_nsig40_pd[12];
	cvxnonsep_nsig40_pd[15] = pow(x[25], 0.04);
	if (errno) in_trouble2("pow",x[25],0.04);
	if (x[25] > 0.) {
	cvxnonsep_nsig40_pd[14] = 0.04*(cvxnonsep_nsig40_pd[15]/x[25]);
	} else if (0.04 > 1.) {
	cvxnonsep_nsig40_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],0.04);
	}
	cvxnonsep_nsig40_pd[16] = cvxnonsep_nsig40_pd[13] * cvxnonsep_nsig40_pd[15];
	cvxnonsep_nsig40_pd[18] = pow(x[26], 0.037);
	if (errno) in_trouble2("pow",x[26],0.037);
	if (x[26] > 0.) {
	cvxnonsep_nsig40_pd[17] = 0.037*(cvxnonsep_nsig40_pd[18]/x[26]);
	} else if (0.037 > 1.) {
	cvxnonsep_nsig40_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],0.037);
	}
	cvxnonsep_nsig40_pd[19] = cvxnonsep_nsig40_pd[16] * cvxnonsep_nsig40_pd[18];
	cvxnonsep_nsig40_pd[21] = pow(x[27], 0.024);
	if (errno) in_trouble2("pow",x[27],0.024);
	if (x[27] > 0.) {
	cvxnonsep_nsig40_pd[20] = 0.024*(cvxnonsep_nsig40_pd[21]/x[27]);
	} else if (0.024 > 1.) {
	cvxnonsep_nsig40_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[27],0.024);
	}
	cvxnonsep_nsig40_pd[22] = cvxnonsep_nsig40_pd[19] * cvxnonsep_nsig40_pd[21];
	cvxnonsep_nsig40_pd[24] = pow(x[28], 0.008);
	if (errno) in_trouble2("pow",x[28],0.008);
	if (x[28] > 0.) {
	cvxnonsep_nsig40_pd[23] = 0.008*(cvxnonsep_nsig40_pd[24]/x[28]);
	} else if (0.008 > 1.) {
	cvxnonsep_nsig40_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],0.008);
	}
	cvxnonsep_nsig40_pd[25] = cvxnonsep_nsig40_pd[22] * cvxnonsep_nsig40_pd[24];
	cvxnonsep_nsig40_pd[27] = pow(x[29], 0.019);
	if (errno) in_trouble2("pow",x[29],0.019);
	if (x[29] > 0.) {
	cvxnonsep_nsig40_pd[26] = 0.019*(cvxnonsep_nsig40_pd[27]/x[29]);
	} else if (0.019 > 1.) {
	cvxnonsep_nsig40_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],0.019);
	}
	cvxnonsep_nsig40_pd[28] = cvxnonsep_nsig40_pd[25] * cvxnonsep_nsig40_pd[27];
	cvxnonsep_nsig40_pd[30] = pow(x[30], 0.006);
	if (errno) in_trouble2("pow",x[30],0.006);
	if (x[30] > 0.) {
	cvxnonsep_nsig40_pd[29] = 0.006*(cvxnonsep_nsig40_pd[30]/x[30]);
	} else if (0.006 > 1.) {
	cvxnonsep_nsig40_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],0.006);
	}
	cvxnonsep_nsig40_pd[31] = cvxnonsep_nsig40_pd[28] * cvxnonsep_nsig40_pd[30];
	cvxnonsep_nsig40_pd[33] = pow(x[31], 0.001);
	if (errno) in_trouble2("pow",x[31],0.001);
	if (x[31] > 0.) {
	cvxnonsep_nsig40_pd[32] = 0.001*(cvxnonsep_nsig40_pd[33]/x[31]);
	} else if (0.001 > 1.) {
	cvxnonsep_nsig40_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],0.001);
	}
	cvxnonsep_nsig40_pd[34] = cvxnonsep_nsig40_pd[31] * cvxnonsep_nsig40_pd[33];
	cvxnonsep_nsig40_pd[36] = pow(x[32], 0.044);
	if (errno) in_trouble2("pow",x[32],0.044);
	if (x[32] > 0.) {
	cvxnonsep_nsig40_pd[35] = 0.044*(cvxnonsep_nsig40_pd[36]/x[32]);
	} else if (0.044 > 1.) {
	cvxnonsep_nsig40_pd[35] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[32],0.044);
	}
	cvxnonsep_nsig40_pd[37] = cvxnonsep_nsig40_pd[34] * cvxnonsep_nsig40_pd[36];
	cvxnonsep_nsig40_pd[39] = pow(x[33], 0.014);
	if (errno) in_trouble2("pow",x[33],0.014);
	if (x[33] > 0.) {
	cvxnonsep_nsig40_pd[38] = 0.014*(cvxnonsep_nsig40_pd[39]/x[33]);
	} else if (0.014 > 1.) {
	cvxnonsep_nsig40_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[33],0.014);
	}
	cvxnonsep_nsig40_pd[40] = cvxnonsep_nsig40_pd[37] * cvxnonsep_nsig40_pd[39];
	cvxnonsep_nsig40_pd[42] = pow(x[34], 0.014);
	if (errno) in_trouble2("pow",x[34],0.014);
	if (x[34] > 0.) {
	cvxnonsep_nsig40_pd[41] = 0.014*(cvxnonsep_nsig40_pd[42]/x[34]);
	} else if (0.014 > 1.) {
	cvxnonsep_nsig40_pd[41] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],0.014);
	}
	cvxnonsep_nsig40_pd[43] = cvxnonsep_nsig40_pd[40] * cvxnonsep_nsig40_pd[42];
	cvxnonsep_nsig40_pd[45] = pow(x[35], 0.016);
	if (errno) in_trouble2("pow",x[35],0.016);
	if (x[35] > 0.) {
	cvxnonsep_nsig40_pd[44] = 0.016*(cvxnonsep_nsig40_pd[45]/x[35]);
	} else if (0.016 > 1.) {
	cvxnonsep_nsig40_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[35],0.016);
	}
	cvxnonsep_nsig40_pd[46] = cvxnonsep_nsig40_pd[43] * cvxnonsep_nsig40_pd[45];
	cvxnonsep_nsig40_pd[48] = pow(x[36], 0.022);
	if (errno) in_trouble2("pow",x[36],0.022);
	if (x[36] > 0.) {
	cvxnonsep_nsig40_pd[47] = 0.022*(cvxnonsep_nsig40_pd[48]/x[36]);
	} else if (0.022 > 1.) {
	cvxnonsep_nsig40_pd[47] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],0.022);
	}
	cvxnonsep_nsig40_pd[49] = cvxnonsep_nsig40_pd[46] * cvxnonsep_nsig40_pd[48];
	cvxnonsep_nsig40_pd[51] = pow(x[37], 0.03);
	if (errno) in_trouble2("pow",x[37],0.03);
	if (x[37] > 0.) {
	cvxnonsep_nsig40_pd[50] = 0.03*(cvxnonsep_nsig40_pd[51]/x[37]);
	} else if (0.03 > 1.) {
	cvxnonsep_nsig40_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],0.03);
	}
	cvxnonsep_nsig40_pd[52] = cvxnonsep_nsig40_pd[49] * cvxnonsep_nsig40_pd[51];
	cvxnonsep_nsig40_pd[54] = pow(x[38], 0.001);
	if (errno) in_trouble2("pow",x[38],0.001);
	if (x[38] > 0.) {
	cvxnonsep_nsig40_pd[53] = 0.001*(cvxnonsep_nsig40_pd[54]/x[38]);
	} else if (0.001 > 1.) {
	cvxnonsep_nsig40_pd[53] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],0.001);
	}
	cvxnonsep_nsig40_pd[55] = cvxnonsep_nsig40_pd[52] * cvxnonsep_nsig40_pd[54];
	cvxnonsep_nsig40_pd[57] = pow(x[39], 0.039);
	if (errno) in_trouble2("pow",x[39],0.039);
	if (x[39] > 0.) {
	cvxnonsep_nsig40_pd[56] = 0.039*(cvxnonsep_nsig40_pd[57]/x[39]);
	} else if (0.039 > 1.) {
	cvxnonsep_nsig40_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],0.039);
	}
	cvxnonsep_nsig40_pd[58] = cvxnonsep_nsig40_pd[55] * cvxnonsep_nsig40_pd[57];
	cvxnonsep_nsig40_pd[60] = pow(x[0], 0.026);
	if (errno) in_trouble2("pow",x[0],0.026);
	if (x[0] > 0.) {
	cvxnonsep_nsig40_pd[59] = 0.026*(cvxnonsep_nsig40_pd[60]/x[0]);
	} else if (0.026 > 1.) {
	cvxnonsep_nsig40_pd[59] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.026);
	}
	cvxnonsep_nsig40_pd[61] = cvxnonsep_nsig40_pd[58] * cvxnonsep_nsig40_pd[60];
	cvxnonsep_nsig40_pd[63] = pow(x[1], 0.04);
	if (errno) in_trouble2("pow",x[1],0.04);
	if (x[1] > 0.) {
	cvxnonsep_nsig40_pd[62] = 0.04*(cvxnonsep_nsig40_pd[63]/x[1]);
	} else if (0.04 > 1.) {
	cvxnonsep_nsig40_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.04);
	}
	cvxnonsep_nsig40_pd[64] = cvxnonsep_nsig40_pd[61] * cvxnonsep_nsig40_pd[63];
	cvxnonsep_nsig40_pd[66] = pow(x[2], 0.016);
	if (errno) in_trouble2("pow",x[2],0.016);
	if (x[2] > 0.) {
	cvxnonsep_nsig40_pd[65] = 0.016*(cvxnonsep_nsig40_pd[66]/x[2]);
	} else if (0.016 > 1.) {
	cvxnonsep_nsig40_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.016);
	}
	cvxnonsep_nsig40_pd[67] = cvxnonsep_nsig40_pd[64] * cvxnonsep_nsig40_pd[66];
	cvxnonsep_nsig40_pd[69] = pow(x[3], 0.021);
	if (errno) in_trouble2("pow",x[3],0.021);
	if (x[3] > 0.) {
	cvxnonsep_nsig40_pd[68] = 0.021*(cvxnonsep_nsig40_pd[69]/x[3]);
	} else if (0.021 > 1.) {
	cvxnonsep_nsig40_pd[68] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.021);
	}
	cvxnonsep_nsig40_pd[70] = cvxnonsep_nsig40_pd[67] * cvxnonsep_nsig40_pd[69];
	cvxnonsep_nsig40_pd[72] = pow(x[4], 0.003);
	if (errno) in_trouble2("pow",x[4],0.003);
	if (x[4] > 0.) {
	cvxnonsep_nsig40_pd[71] = 0.003*(cvxnonsep_nsig40_pd[72]/x[4]);
	} else if (0.003 > 1.) {
	cvxnonsep_nsig40_pd[71] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.003);
	}
	cvxnonsep_nsig40_pd[73] = cvxnonsep_nsig40_pd[70] * cvxnonsep_nsig40_pd[72];
	cvxnonsep_nsig40_pd[75] = pow(x[5], 0.008);
	if (errno) in_trouble2("pow",x[5],0.008);
	if (x[5] > 0.) {
	cvxnonsep_nsig40_pd[74] = 0.008*(cvxnonsep_nsig40_pd[75]/x[5]);
	} else if (0.008 > 1.) {
	cvxnonsep_nsig40_pd[74] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.008);
	}
	cvxnonsep_nsig40_pd[76] = cvxnonsep_nsig40_pd[73] * cvxnonsep_nsig40_pd[75];
	cvxnonsep_nsig40_pd[78] = pow(x[6], 0.031);
	if (errno) in_trouble2("pow",x[6],0.031);
	if (x[6] > 0.) {
	cvxnonsep_nsig40_pd[77] = 0.031*(cvxnonsep_nsig40_pd[78]/x[6]);
	} else if (0.031 > 1.) {
	cvxnonsep_nsig40_pd[77] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.031);
	}
	cvxnonsep_nsig40_pd[79] = cvxnonsep_nsig40_pd[76] * cvxnonsep_nsig40_pd[78];
	cvxnonsep_nsig40_pd[81] = pow(x[7], 0.015);
	if (errno) in_trouble2("pow",x[7],0.015);
	if (x[7] > 0.) {
	cvxnonsep_nsig40_pd[80] = 0.015*(cvxnonsep_nsig40_pd[81]/x[7]);
	} else if (0.015 > 1.) {
	cvxnonsep_nsig40_pd[80] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.015);
	}
	cvxnonsep_nsig40_pd[82] = cvxnonsep_nsig40_pd[79] * cvxnonsep_nsig40_pd[81];
	cvxnonsep_nsig40_pd[84] = pow(x[8], 0.042);
	if (errno) in_trouble2("pow",x[8],0.042);
	if (x[8] > 0.) {
	cvxnonsep_nsig40_pd[83] = 0.042*(cvxnonsep_nsig40_pd[84]/x[8]);
	} else if (0.042 > 1.) {
	cvxnonsep_nsig40_pd[83] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],0.042);
	}
	cvxnonsep_nsig40_pd[85] = cvxnonsep_nsig40_pd[82] * cvxnonsep_nsig40_pd[84];
	cvxnonsep_nsig40_pd[87] = pow(x[9], 0.006);
	if (errno) in_trouble2("pow",x[9],0.006);
	if (x[9] > 0.) {
	cvxnonsep_nsig40_pd[86] = 0.006*(cvxnonsep_nsig40_pd[87]/x[9]);
	} else if (0.006 > 1.) {
	cvxnonsep_nsig40_pd[86] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],0.006);
	}
	cvxnonsep_nsig40_pd[88] = cvxnonsep_nsig40_pd[85] * cvxnonsep_nsig40_pd[87];
	cvxnonsep_nsig40_pd[90] = pow(x[10], 0.046);
	if (errno) in_trouble2("pow",x[10],0.046);
	if (x[10] > 0.) {
	cvxnonsep_nsig40_pd[89] = 0.046*(cvxnonsep_nsig40_pd[90]/x[10]);
	} else if (0.046 > 1.) {
	cvxnonsep_nsig40_pd[89] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],0.046);
	}
	cvxnonsep_nsig40_pd[91] = cvxnonsep_nsig40_pd[88] * cvxnonsep_nsig40_pd[90];
	cvxnonsep_nsig40_pd[93] = pow(x[11], 0.025);
	if (errno) in_trouble2("pow",x[11],0.025);
	if (x[11] > 0.) {
	cvxnonsep_nsig40_pd[92] = 0.025*(cvxnonsep_nsig40_pd[93]/x[11]);
	} else if (0.025 > 1.) {
	cvxnonsep_nsig40_pd[92] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],0.025);
	}
	cvxnonsep_nsig40_pd[94] = cvxnonsep_nsig40_pd[91] * cvxnonsep_nsig40_pd[93];
	cvxnonsep_nsig40_pd[96] = pow(x[12], 0.033);
	if (errno) in_trouble2("pow",x[12],0.033);
	if (x[12] > 0.) {
	cvxnonsep_nsig40_pd[95] = 0.033*(cvxnonsep_nsig40_pd[96]/x[12]);
	} else if (0.033 > 1.) {
	cvxnonsep_nsig40_pd[95] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],0.033);
	}
	cvxnonsep_nsig40_pd[97] = cvxnonsep_nsig40_pd[94] * cvxnonsep_nsig40_pd[96];
	cvxnonsep_nsig40_pd[99] = pow(x[13], 0.047);
	if (errno) in_trouble2("pow",x[13],0.047);
	if (x[13] > 0.) {
	cvxnonsep_nsig40_pd[98] = 0.047*(cvxnonsep_nsig40_pd[99]/x[13]);
	} else if (0.047 > 1.) {
	cvxnonsep_nsig40_pd[98] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],0.047);
	}
	cvxnonsep_nsig40_pd[100] = cvxnonsep_nsig40_pd[97] * cvxnonsep_nsig40_pd[99];
	cvxnonsep_nsig40_pd[102] = pow(x[14], 0.013);
	if (errno) in_trouble2("pow",x[14],0.013);
	if (x[14] > 0.) {
	cvxnonsep_nsig40_pd[101] = 0.013*(cvxnonsep_nsig40_pd[102]/x[14]);
	} else if (0.013 > 1.) {
	cvxnonsep_nsig40_pd[101] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],0.013);
	}
	cvxnonsep_nsig40_pd[103] = cvxnonsep_nsig40_pd[100] * cvxnonsep_nsig40_pd[102];
	cvxnonsep_nsig40_pd[105] = pow(x[15], 0.019);
	if (errno) in_trouble2("pow",x[15],0.019);
	if (x[15] > 0.) {
	cvxnonsep_nsig40_pd[104] = 0.019*(cvxnonsep_nsig40_pd[105]/x[15]);
	} else if (0.019 > 1.) {
	cvxnonsep_nsig40_pd[104] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],0.019);
	}
	cvxnonsep_nsig40_pd[106] = cvxnonsep_nsig40_pd[103] * cvxnonsep_nsig40_pd[105];
	cvxnonsep_nsig40_pd[108] = pow(x[16], 0.022);
	if (errno) in_trouble2("pow",x[16],0.022);
	if (x[16] > 0.) {
	cvxnonsep_nsig40_pd[107] = 0.022*(cvxnonsep_nsig40_pd[108]/x[16]);
	} else if (0.022 > 1.) {
	cvxnonsep_nsig40_pd[107] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],0.022);
	}
	cvxnonsep_nsig40_pd[109] = cvxnonsep_nsig40_pd[106] * cvxnonsep_nsig40_pd[108];
	cvxnonsep_nsig40_pd[111] = pow(x[17], 0.036);
	if (errno) in_trouble2("pow",x[17],0.036);
	if (x[17] > 0.) {
	cvxnonsep_nsig40_pd[110] = 0.036*(cvxnonsep_nsig40_pd[111]/x[17]);
	} else if (0.036 > 1.) {
	cvxnonsep_nsig40_pd[110] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],0.036);
	}
	cvxnonsep_nsig40_pd[112] = cvxnonsep_nsig40_pd[109] * cvxnonsep_nsig40_pd[111];
	cvxnonsep_nsig40_pd[114] = pow(x[18], 0.038);
	if (errno) in_trouble2("pow",x[18],0.038);
	if (x[18] > 0.) {
	cvxnonsep_nsig40_pd[113] = 0.038*(cvxnonsep_nsig40_pd[114]/x[18]);
	} else if (0.038 > 1.) {
	cvxnonsep_nsig40_pd[113] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],0.038);
	}
	cvxnonsep_nsig40_pd[115] = cvxnonsep_nsig40_pd[112] * cvxnonsep_nsig40_pd[114];
	cvxnonsep_nsig40_pd[117] = pow(x[19], 0.005);
	if (errno) in_trouble2("pow",x[19],0.005);
	if (x[19] > 0.) {
	cvxnonsep_nsig40_pd[116] = 0.005*(cvxnonsep_nsig40_pd[117]/x[19]);
	} else if (0.005 > 1.) {
	cvxnonsep_nsig40_pd[116] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],0.005);
	}
	v[39] = cvxnonsep_nsig40_pd[115] * cvxnonsep_nsig40_pd[117];
	c[0] = v[39];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[19] = cvxnonsep_nsig40_pd[115]*cvxnonsep_nsig40_pd[116];
	dv[0] = cvxnonsep_nsig40_pd[117]*cvxnonsep_nsig40_pd[112];
	dv[1] = cvxnonsep_nsig40_pd[117]*cvxnonsep_nsig40_pd[114];
	J[18] = dv[0]*cvxnonsep_nsig40_pd[113];
	dv[2] = dv[1]*cvxnonsep_nsig40_pd[109];
	dv[1] *= cvxnonsep_nsig40_pd[111];
	J[17] = dv[2]*cvxnonsep_nsig40_pd[110];
	dv[3] = dv[1]*cvxnonsep_nsig40_pd[106];
	dv[1] *= cvxnonsep_nsig40_pd[108];
	J[16] = dv[3]*cvxnonsep_nsig40_pd[107];
	dv[4] = dv[1]*cvxnonsep_nsig40_pd[103];
	dv[1] *= cvxnonsep_nsig40_pd[105];
	J[15] = dv[4]*cvxnonsep_nsig40_pd[104];
	dv[5] = dv[1]*cvxnonsep_nsig40_pd[100];
	dv[1] *= cvxnonsep_nsig40_pd[102];
	J[14] = dv[5]*cvxnonsep_nsig40_pd[101];
	dv[6] = dv[1]*cvxnonsep_nsig40_pd[97];
	dv[1] *= cvxnonsep_nsig40_pd[99];
	J[13] = dv[6]*cvxnonsep_nsig40_pd[98];
	dv[7] = dv[1]*cvxnonsep_nsig40_pd[94];
	dv[1] *= cvxnonsep_nsig40_pd[96];
	J[12] = dv[7]*cvxnonsep_nsig40_pd[95];
	dv[8] = dv[1]*cvxnonsep_nsig40_pd[91];
	dv[1] *= cvxnonsep_nsig40_pd[93];
	J[11] = dv[8]*cvxnonsep_nsig40_pd[92];
	dv[9] = dv[1]*cvxnonsep_nsig40_pd[88];
	dv[1] *= cvxnonsep_nsig40_pd[90];
	J[10] = dv[9]*cvxnonsep_nsig40_pd[89];
	dv[10] = dv[1]*cvxnonsep_nsig40_pd[85];
	dv[1] *= cvxnonsep_nsig40_pd[87];
	J[9] = dv[10]*cvxnonsep_nsig40_pd[86];
	dv[11] = dv[1]*cvxnonsep_nsig40_pd[82];
	dv[1] *= cvxnonsep_nsig40_pd[84];
	J[8] = dv[11]*cvxnonsep_nsig40_pd[83];
	dv[12] = dv[1]*cvxnonsep_nsig40_pd[79];
	dv[1] *= cvxnonsep_nsig40_pd[81];
	J[7] = dv[12]*cvxnonsep_nsig40_pd[80];
	dv[13] = dv[1]*cvxnonsep_nsig40_pd[76];
	dv[1] *= cvxnonsep_nsig40_pd[78];
	J[6] = dv[13]*cvxnonsep_nsig40_pd[77];
	dv[14] = dv[1]*cvxnonsep_nsig40_pd[73];
	dv[1] *= cvxnonsep_nsig40_pd[75];
	J[5] = dv[14]*cvxnonsep_nsig40_pd[74];
	dv[15] = dv[1]*cvxnonsep_nsig40_pd[70];
	dv[1] *= cvxnonsep_nsig40_pd[72];
	J[4] = dv[15]*cvxnonsep_nsig40_pd[71];
	dv[16] = dv[1]*cvxnonsep_nsig40_pd[67];
	dv[1] *= cvxnonsep_nsig40_pd[69];
	J[3] = dv[16]*cvxnonsep_nsig40_pd[68];
	dv[17] = dv[1]*cvxnonsep_nsig40_pd[64];
	dv[1] *= cvxnonsep_nsig40_pd[66];
	J[2] = dv[17]*cvxnonsep_nsig40_pd[65];
	dv[18] = dv[1]*cvxnonsep_nsig40_pd[61];
	dv[1] *= cvxnonsep_nsig40_pd[63];
	J[1] = dv[18]*cvxnonsep_nsig40_pd[62];
	dv[19] = dv[1]*cvxnonsep_nsig40_pd[58];
	dv[1] *= cvxnonsep_nsig40_pd[60];
	J[0] = dv[19]*cvxnonsep_nsig40_pd[59];
	dv[20] = dv[1]*cvxnonsep_nsig40_pd[55];
	dv[1] *= cvxnonsep_nsig40_pd[57];
	J[39] = dv[20]*cvxnonsep_nsig40_pd[56];
	dv[21] = dv[1]*cvxnonsep_nsig40_pd[52];
	dv[1] *= cvxnonsep_nsig40_pd[54];
	J[38] = dv[21]*cvxnonsep_nsig40_pd[53];
	dv[22] = dv[1]*cvxnonsep_nsig40_pd[49];
	dv[1] *= cvxnonsep_nsig40_pd[51];
	J[37] = dv[22]*cvxnonsep_nsig40_pd[50];
	dv[23] = dv[1]*cvxnonsep_nsig40_pd[46];
	dv[1] *= cvxnonsep_nsig40_pd[48];
	J[36] = dv[23]*cvxnonsep_nsig40_pd[47];
	dv[24] = dv[1]*cvxnonsep_nsig40_pd[43];
	dv[1] *= cvxnonsep_nsig40_pd[45];
	J[35] = dv[24]*cvxnonsep_nsig40_pd[44];
	dv[25] = dv[1]*cvxnonsep_nsig40_pd[40];
	dv[1] *= cvxnonsep_nsig40_pd[42];
	J[34] = dv[25]*cvxnonsep_nsig40_pd[41];
	dv[26] = dv[1]*cvxnonsep_nsig40_pd[37];
	dv[1] *= cvxnonsep_nsig40_pd[39];
	J[33] = dv[26]*cvxnonsep_nsig40_pd[38];
	dv[27] = dv[1]*cvxnonsep_nsig40_pd[34];
	dv[1] *= cvxnonsep_nsig40_pd[36];
	J[32] = dv[27]*cvxnonsep_nsig40_pd[35];
	dv[28] = dv[1]*cvxnonsep_nsig40_pd[31];
	dv[1] *= cvxnonsep_nsig40_pd[33];
	J[31] = dv[28]*cvxnonsep_nsig40_pd[32];
	dv[29] = dv[1]*cvxnonsep_nsig40_pd[28];
	dv[1] *= cvxnonsep_nsig40_pd[30];
	J[30] = dv[29]*cvxnonsep_nsig40_pd[29];
	dv[30] = dv[1]*cvxnonsep_nsig40_pd[25];
	dv[1] *= cvxnonsep_nsig40_pd[27];
	J[29] = dv[30]*cvxnonsep_nsig40_pd[26];
	dv[31] = dv[1]*cvxnonsep_nsig40_pd[22];
	dv[1] *= cvxnonsep_nsig40_pd[24];
	J[28] = dv[31]*cvxnonsep_nsig40_pd[23];
	dv[32] = dv[1]*cvxnonsep_nsig40_pd[19];
	dv[1] *= cvxnonsep_nsig40_pd[21];
	J[27] = dv[32]*cvxnonsep_nsig40_pd[20];
	dv[33] = dv[1]*cvxnonsep_nsig40_pd[16];
	dv[1] *= cvxnonsep_nsig40_pd[18];
	J[26] = dv[33]*cvxnonsep_nsig40_pd[17];
	dv[34] = dv[1]*cvxnonsep_nsig40_pd[13];
	dv[1] *= cvxnonsep_nsig40_pd[15];
	J[25] = dv[34]*cvxnonsep_nsig40_pd[14];
	dv[35] = dv[1]*cvxnonsep_nsig40_pd[10];
	dv[1] *= cvxnonsep_nsig40_pd[12];
	J[24] = dv[35]*cvxnonsep_nsig40_pd[11];
	dv[36] = dv[1]*cvxnonsep_nsig40_pd[7];
	dv[1] *= cvxnonsep_nsig40_pd[9];
	J[23] = dv[36]*cvxnonsep_nsig40_pd[8];
	dv[37] = dv[1]*cvxnonsep_nsig40_pd[4];
	dv[1] *= cvxnonsep_nsig40_pd[6];
	J[22] = dv[37]*cvxnonsep_nsig40_pd[5];
	dv[38] = dv[1]*cvxnonsep_nsig40_pd[1];
	dv[1] *= cvxnonsep_nsig40_pd[3];
	J[21] = dv[38]*cvxnonsep_nsig40_pd[2];
	dv[1] = -dv[1]*0.2;
	J[20] = dv[1]*cvxnonsep_nsig40_pd[0];
	}
}
#ifdef __cplusplus
	}
#endif
