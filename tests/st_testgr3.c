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
 fint st_testgr3_auxcom_[1] = { 0 /* nlc */ };
 fint st_testgr3_funcom_[188] = {
	20 /* nvar */,
	1 /* nobj */,
	20 /* ncon */,
	161 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	9,
	17,
	25,
	33,
	41,
	49,
	57,
	65,
	73,
	81,
	89,
	97,
	105,
	113,
	121,
	129,
	137,
	145,
	154,
	162,

	/* rownos */
	1,
	2,
	7,
	8,
	9,
	14,
	15,
	20,
	2,
	3,
	8,
	9,
	10,
	15,
	16,
	20,
	3,
	4,
	9,
	10,
	11,
	16,
	17,
	20,
	4,
	5,
	10,
	11,
	12,
	17,
	18,
	20,
	5,
	6,
	11,
	12,
	13,
	18,
	19,
	20,
	1,
	6,
	7,
	12,
	13,
	14,
	19,
	20,
	1,
	2,
	7,
	8,
	13,
	14,
	15,
	20,
	2,
	3,
	8,
	9,
	14,
	15,
	16,
	20,
	3,
	4,
	9,
	10,
	15,
	16,
	17,
	20,
	4,
	5,
	10,
	11,
	16,
	17,
	18,
	20,
	5,
	6,
	11,
	12,
	17,
	18,
	19,
	20,
	1,
	6,
	7,
	12,
	13,
	18,
	19,
	20,
	1,
	2,
	7,
	8,
	13,
	14,
	19,
	20,
	1,
	2,
	3,
	8,
	9,
	14,
	15,
	20,
	2,
	3,
	4,
	9,
	10,
	15,
	16,
	20,
	3,
	4,
	5,
	10,
	11,
	16,
	17,
	20,
	4,
	5,
	6,
	11,
	12,
	17,
	18,
	20,
	5,
	6,
	7,
	12,
	13,
	18,
	19,
	20,
	1,
	6,
	7,
	8,
	9,
	13,
	14,
	19,
	20,
	1,
	2,
	7,
	8,
	9,
	14,
	15,
	20 };

 real st_testgr3_boundc_[1+40+40] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		-1.7e308,
		220.,
		-1.7e308,
		175.,
		-1.7e308,
		215.,
		-1.7e308,
		195.,
		-1.7e308,
		145.,
		-1.7e308,
		185.,
		-1.7e308,
		225.,
		-1.7e308,
		215.,
		-1.7e308,
		175.,
		-1.7e308,
		155.,
		-1.7e308,
		210.,
		-1.7e308,
		190.,
		-1.7e308,
		205.,
		-1.7e308,
		245.,
		-1.7e308,
		160.,
		-1.7e308,
		225.,
		-1.7e308,
		195.,
		-1.7e308,
		240.,
		-1.7e308,
		215.,
		-1.7e308,
		200.};

 real st_testgr3_x0comn_[20] = {
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

 static real st_testgr3_pd[20];
static real st_testgr3_old_x[20];
static int st_testgr3_xkind = -1;

 static int
st_testgr3_xcheck(real *x)
{
	real *x1 = st_testgr3_old_x, *xe = x + 20;
	errno = 0;
	if (st_testgr3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_testgr3_xkind = 0;
	return 1;
	}
 real
st_testgr3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_testgr3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_testgr3_pd[0] = 0.00055 * x[0];
	v[0] = st_testgr3_pd[0] * x[0];
	st_testgr3_pd[1] = 0.0019 * x[1];
	v[1] = st_testgr3_pd[1] * x[1];
	v[0] += v[1];
	st_testgr3_pd[2] = 0.0002 * x[2];
	v[1] = st_testgr3_pd[2] * x[2];
	v[0] += v[1];
	st_testgr3_pd[3] = 0.00095 * x[3];
	v[1] = st_testgr3_pd[3] * x[3];
	v[0] += v[1];
	st_testgr3_pd[4] = 0.0046 * x[4];
	v[1] = st_testgr3_pd[4] * x[4];
	v[0] += v[1];
	st_testgr3_pd[5] = 0.0035 * x[5];
	v[1] = st_testgr3_pd[5] * x[5];
	v[0] += v[1];
	st_testgr3_pd[6] = 0.00315 * x[6];
	v[1] = st_testgr3_pd[6] * x[6];
	v[0] += v[1];
	st_testgr3_pd[7] = 0.00475 * x[7];
	v[1] = st_testgr3_pd[7] * x[7];
	v[0] += v[1];
	st_testgr3_pd[8] = 0.0048 * x[8];
	v[1] = st_testgr3_pd[8] * x[8];
	v[0] += v[1];
	st_testgr3_pd[9] = 0.003 * x[9];
	v[1] = st_testgr3_pd[9] * x[9];
	v[0] += v[1];
	st_testgr3_pd[10] = 0.00265 * x[10];
	v[1] = st_testgr3_pd[10] * x[10];
	v[0] += v[1];
	st_testgr3_pd[11] = 0.0017 * x[11];
	v[1] = st_testgr3_pd[11] * x[11];
	v[0] += v[1];
	st_testgr3_pd[12] = 0.0012 * x[12];
	v[1] = st_testgr3_pd[12] * x[12];
	v[0] += v[1];
	st_testgr3_pd[13] = 0.00295 * x[13];
	v[1] = st_testgr3_pd[13] * x[13];
	v[0] += v[1];
	st_testgr3_pd[14] = 0.00315 * x[14];
	v[1] = st_testgr3_pd[14] * x[14];
	v[0] += v[1];
	st_testgr3_pd[15] = 0.0021 * x[15];
	v[1] = st_testgr3_pd[15] * x[15];
	v[0] += v[1];
	st_testgr3_pd[16] = 0.00225 * x[16];
	v[1] = st_testgr3_pd[16] * x[16];
	v[0] += v[1];
	st_testgr3_pd[17] = 0.0034 * x[17];
	v[1] = st_testgr3_pd[17] * x[17];
	v[0] += v[1];
	st_testgr3_pd[18] = 0.001 * x[18];
	v[1] = st_testgr3_pd[18] * x[18];
	v[0] += v[1];
	st_testgr3_pd[19] = 0.00305 * x[19];
	v[1] = st_testgr3_pd[19] * x[19];
	v[0] += v[1];
	rv = v[0] + -0.0583*x[0];
	rv += -0.2318*x[1];
	rv += 0.0108*x[2];
	rv += -0.1634*x[3];
	rv += -0.138*x[4];
	rv += 0.357*x[5];
	rv += -0.1953*x[6];
	rv += 0.361*x[7];
	rv += -0.1824*x[8];
	rv += 0.162*x[9];
	rv += -0.4346*x[10];
	rv += -0.1054*x[11];
	rv += 0.2376*x[12];
	rv += -0.0059*x[13];
	rv += 0.189*x[14];
	rv += -0.0252*x[15];
	rv += -0.099*x[16];
	rv += -0.3604*x[17];
	rv += 0.022*x[18];
	rv += -0.3294*x[19];
	;}

	if (wantfg & 2) {
	g[19] = st_testgr3_pd[19] + -0.3294;
	g[19] += x[19]*0.00305;
	g[18] = st_testgr3_pd[18] + 0.022;
	g[18] += x[18]*0.001;
	g[17] = st_testgr3_pd[17] + -0.3604;
	g[17] += x[17]*0.0034;
	g[16] = st_testgr3_pd[16] + -0.099;
	g[16] += x[16]*0.00225;
	g[15] = st_testgr3_pd[15] + -0.0252;
	g[15] += x[15]*0.0021;
	g[14] = st_testgr3_pd[14] + 0.189;
	g[14] += x[14]*0.00315;
	g[13] = st_testgr3_pd[13] + -0.0059;
	g[13] += x[13]*0.00295;
	g[12] = st_testgr3_pd[12] + 0.2376;
	g[12] += x[12]*0.0012;
	g[11] = st_testgr3_pd[11] + -0.1054;
	g[11] += x[11]*0.0017;
	g[10] = st_testgr3_pd[10] + -0.4346;
	g[10] += x[10]*0.00265;
	g[9] = st_testgr3_pd[9] + 0.162;
	g[9] += x[9]*0.003;
	g[8] = st_testgr3_pd[8] + -0.1824;
	g[8] += x[8]*0.0048;
	g[7] = st_testgr3_pd[7] + 0.361;
	g[7] += x[7]*0.00475;
	g[6] = st_testgr3_pd[6] + -0.1953;
	g[6] += x[6]*0.00315;
	g[5] = st_testgr3_pd[5] + 0.357;
	g[5] += x[5]*0.0035;
	g[4] = st_testgr3_pd[4] + -0.138;
	g[4] += x[4]*0.0046;
	g[3] = st_testgr3_pd[3] + -0.1634;
	g[3] += x[3]*0.00095;
	g[2] = st_testgr3_pd[2] + 0.0108;
	g[2] += x[2]*0.0002;
	g[1] = st_testgr3_pd[1] + -0.2318;
	g[1] += x[1]*0.0019;
	g[0] = st_testgr3_pd[0] + -0.0583;
	g[0] += x[0]*0.00055;
	}

	return rv;
}

 void
st_testgr3_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_testgr3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 8.*x[0];
	t1 += 5.*x[5];
	t1 += 4.*x[6];
	t1 += 6.*x[11];
	t1 += 6.*x[12];
	t1 += 9.*x[13];
	t1 += 5.*x[18];
	t1 += x[19];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 3.*x[0];
	t1 += 4.*x[1];
	t1 += 3.*x[6];
	t1 += 7.*x[7];
	t1 += 4.*x[12];
	t1 += 9.*x[13];
	t1 += 3.*x[14];
	t1 += 2.*x[19];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 2.*x[1];
	t1 += x[2];
	t1 += 6.*x[7];
	t1 += 8.*x[8];
	t1 += 9.*x[13];
	t1 += 9.*x[14];
	t1 += 8.*x[15];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 7.*x[2];
	t1 += x[3];
	t1 += 7.*x[8];
	t1 += 9.*x[9];
	t1 += 2.*x[14];
	t1 += 4.*x[15];
	t1 += 9.*x[16];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 4.*x[3];
	t1 += 4.*x[4];
	t1 += x[9];
	t1 += 3.*x[10];
	t1 += 7.*x[15];
	t1 += 2.*x[16];
	t1 += 8.*x[17];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 9.*x[4];
	t1 += 5.*x[5];
	t1 += 5.*x[10];
	t1 += 7.*x[11];
	t1 += x[16];
	t1 += 4.*x[17];
	t1 += 6.*x[18];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 5.*x[0];
	t1 += 5.*x[5];
	t1 += 3.*x[6];
	t1 += 8.*x[11];
	t1 += 5.*x[12];
	t1 += 9.*x[17];
	t1 += 9.*x[18];
	t1 += x[19];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[0];
	t1 += 9.*x[1];
	t1 += 9.*x[6];
	t1 += 3.*x[7];
	t1 += 9.*x[12];
	t1 += 7.*x[13];
	t1 += 4.*x[18];
	t1 += x[19];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 3.*x[0];
	t1 += 6.*x[1];
	t1 += 3.*x[2];
	t1 += 4.*x[7];
	t1 += 2.*x[8];
	t1 += 6.*x[13];
	t1 += 3.*x[14];
	t1 += 8.*x[18];
	t1 += x[19];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[1];
	t1 += 2.*x[2];
	t1 += 8.*x[3];
	t1 += 4.*x[8];
	t1 += x[9];
	t1 += 9.*x[14];
	t1 += 6.*x[15];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 9.*x[2];
	t1 += 3.*x[3];
	t1 += 6.*x[4];
	t1 += x[9];
	t1 += 6.*x[10];
	t1 += 9.*x[15];
	t1 += 8.*x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 6.*x[3];
	t1 += 3.*x[4];
	t1 += 3.*x[5];
	t1 += 6.*x[10];
	t1 += 3.*x[11];
	t1 += 8.*x[16];
	t1 += 9.*x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 9.*x[4];
	t1 += 8.*x[5];
	t1 += 2.*x[6];
	t1 += 7.*x[11];
	t1 += 8.*x[12];
	t1 += 4.*x[17];
	t1 += 3.*x[18];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 4.*x[0];
	t1 += 6.*x[5];
	t1 += 9.*x[6];
	t1 += x[7];
	t1 += 6.*x[12];
	t1 += 9.*x[13];
	t1 += 8.*x[18];
	t1 += 6.*x[19];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 7.*x[0];
	t1 += 3.*x[1];
	t1 += 7.*x[6];
	t1 += 4.*x[7];
	t1 += 2.*x[8];
	t1 += x[13];
	t1 += 3.*x[14];
	t1 += 5.*x[19];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 7.*x[1];
	t1 += 9.*x[2];
	t1 += 7.*x[7];
	t1 += 9.*x[8];
	t1 += 5.*x[9];
	t1 += 2.*x[14];
	t1 += 6.*x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = 6.*x[2];
	t1 += 9.*x[3];
	t1 += 8.*x[8];
	t1 += 4.*x[9];
	t1 += 2.*x[10];
	t1 += 6.*x[15];
	t1 += 4.*x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 5.*x[3];
	t1 += 5.*x[4];
	t1 += 7.*x[9];
	t1 += 8.*x[10];
	t1 += 9.*x[11];
	t1 += 8.*x[16];
	t1 += 6.*x[17];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = 7.*x[4];
	t1 += 5.*x[5];
	t1 += 6.*x[10];
	t1 += 2.*x[11];
	t1 += 8.*x[12];
	t1 += 6.*x[17];
	t1 += 9.*x[18];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[19] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 8.;
	J[40] = 5.;
	J[48] = 4.;
	J[88] = 6.;
	J[96] = 6.;
	J[104] = 9.;
	J[144] = 5.;
	J[153] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 3.;
	J[8] = 4.;
	J[49] = 3.;
	J[56] = 7.;
	J[97] = 4.;
	J[105] = 9.;
	J[112] = 3.;
	J[154] = 2.;

   /*** derivatives for constraint 3 ***/

	J[9] = 2.;
	J[16] = 1.;
	J[57] = 6.;
	J[64] = 8.;
	J[106] = 9.;
	J[113] = 9.;
	J[120] = 8.;

   /*** derivatives for constraint 4 ***/

	J[17] = 7.;
	J[24] = 1.;
	J[65] = 7.;
	J[72] = 9.;
	J[114] = 2.;
	J[121] = 4.;
	J[128] = 9.;

   /*** derivatives for constraint 5 ***/

	J[25] = 4.;
	J[32] = 4.;
	J[73] = 1.;
	J[80] = 3.;
	J[122] = 7.;
	J[129] = 2.;
	J[136] = 8.;

   /*** derivatives for constraint 6 ***/

	J[33] = 9.;
	J[41] = 5.;
	J[81] = 5.;
	J[89] = 7.;
	J[130] = 1.;
	J[137] = 4.;
	J[145] = 6.;

   /*** derivatives for constraint 7 ***/

	J[2] = 5.;
	J[42] = 5.;
	J[50] = 3.;
	J[90] = 8.;
	J[98] = 5.;
	J[138] = 9.;
	J[146] = 9.;
	J[155] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = 1.;
	J[10] = 9.;
	J[51] = 9.;
	J[58] = 3.;
	J[99] = 9.;
	J[107] = 7.;
	J[147] = 4.;
	J[156] = 1.;

   /*** derivatives for constraint 9 ***/

	J[4] = 3.;
	J[11] = 6.;
	J[18] = 3.;
	J[59] = 4.;
	J[66] = 2.;
	J[108] = 6.;
	J[115] = 3.;
	J[148] = 8.;
	J[157] = 1.;

   /*** derivatives for constraint 10 ***/

	J[12] = 1.;
	J[19] = 2.;
	J[26] = 8.;
	J[67] = 4.;
	J[74] = 1.;
	J[116] = 9.;
	J[123] = 6.;

   /*** derivatives for constraint 11 ***/

	J[20] = 9.;
	J[27] = 3.;
	J[34] = 6.;
	J[75] = 1.;
	J[82] = 6.;
	J[124] = 9.;
	J[131] = 8.;

   /*** derivatives for constraint 12 ***/

	J[28] = 6.;
	J[35] = 3.;
	J[43] = 3.;
	J[83] = 6.;
	J[91] = 3.;
	J[132] = 8.;
	J[139] = 9.;

   /*** derivatives for constraint 13 ***/

	J[36] = 9.;
	J[44] = 8.;
	J[52] = 2.;
	J[92] = 7.;
	J[100] = 8.;
	J[140] = 4.;
	J[149] = 3.;

   /*** derivatives for constraint 14 ***/

	J[5] = 4.;
	J[45] = 6.;
	J[53] = 9.;
	J[60] = 1.;
	J[101] = 6.;
	J[109] = 9.;
	J[150] = 8.;
	J[158] = 6.;

   /*** derivatives for constraint 15 ***/

	J[6] = 7.;
	J[13] = 3.;
	J[54] = 7.;
	J[61] = 4.;
	J[68] = 2.;
	J[110] = 1.;
	J[117] = 3.;
	J[159] = 5.;

   /*** derivatives for constraint 16 ***/

	J[14] = 7.;
	J[21] = 9.;
	J[62] = 7.;
	J[69] = 9.;
	J[76] = 5.;
	J[118] = 2.;
	J[125] = 6.;

   /*** derivatives for constraint 17 ***/

	J[22] = 6.;
	J[29] = 9.;
	J[70] = 8.;
	J[77] = 4.;
	J[84] = 2.;
	J[126] = 6.;
	J[133] = 4.;

   /*** derivatives for constraint 18 ***/

	J[30] = 5.;
	J[37] = 5.;
	J[78] = 7.;
	J[85] = 8.;
	J[93] = 9.;
	J[134] = 8.;
	J[141] = 6.;

   /*** derivatives for constraint 19 ***/

	J[38] = 7.;
	J[46] = 5.;
	J[86] = 6.;
	J[94] = 2.;
	J[102] = 8.;
	J[142] = 6.;
	J[151] = 9.;

   /*** derivatives for constraint 20 ***/

	J[7] = 1.;
	J[15] = 1.;
	J[23] = 1.;
	J[31] = 1.;
	J[39] = 1.;
	J[47] = 1.;
	J[55] = 1.;
	J[63] = 1.;
	J[71] = 1.;
	J[79] = 1.;
	J[87] = 1.;
	J[95] = 1.;
	J[103] = 1.;
	J[111] = 1.;
	J[119] = 1.;
	J[127] = 1.;
	J[135] = 1.;
	J[143] = 1.;
	J[152] = 1.;
	J[160] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
