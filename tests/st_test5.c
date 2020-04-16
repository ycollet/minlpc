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
 fint st_test5_auxcom_[1] = { 0 /* nlc */ };
 fint st_test5_funcom_[118] = {
	10 /* nvar */,
	1 /* nobj */,
	11 /* ncon */,
	101 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	12,
	23,
	33,
	42,
	51,
	60,
	71,
	82,
	92,
	102,

	/* rownos */
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
	1,
	2,
	3,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	2,
	3,
	4,
	5,
	7,
	8,
	9,
	10,
	11,
	1,
	3,
	4,
	5,
	6,
	7,
	9,
	10,
	11,
	1,
	2,
	3,
	4,
	5,
	6,
	8,
	10,
	11,
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
	1,
	2,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	1,
	2,
	3,
	4,
	5,
	6,
	8,
	9,
	10,
	11 };

 real st_test5_boundc_[1+20+22] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		-4.,
		-1.7e308,
		22.,
		-1.7e308,
		-6.,
		-1.7e308,
		-23.,
		-1.7e308,
		-12.,
		-1.7e308,
		-3.,
		-1.7e308,
		1.,
		-1.7e308,
		12.,
		-1.7e308,
		15.,
		-1.7e308,
		9.,
		-1.7e308,
		-1.};

 real st_test5_x0comn_[10] = {
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

 static real st_test5_pd[7];
static real st_test5_old_x[10];
static int st_test5_xkind = -1;

 static int
st_test5_xcheck(real *x)
{
	real *x1 = st_test5_old_x, *xe = x + 10;
	errno = 0;
	if (st_test5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_test5_xkind = 0;
	return 1;
	}
 real
st_test5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_test5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_test5_pd[0] = 5. * x[0];
	v[0] = st_test5_pd[0] * x[0];
	st_test5_pd[1] = 5. * x[1];
	v[1] = st_test5_pd[1] * x[1];
	v[0] += v[1];
	st_test5_pd[2] = 5. * x[2];
	v[1] = st_test5_pd[2] * x[2];
	v[0] += v[1];
	st_test5_pd[3] = 5. * x[3];
	v[1] = st_test5_pd[3] * x[3];
	v[0] += v[1];
	st_test5_pd[4] = 5. * x[4];
	v[1] = st_test5_pd[4] * x[4];
	v[0] += v[1];
	st_test5_pd[5] = 5. * x[5];
	v[1] = st_test5_pd[5] * x[5];
	v[0] += v[1];
	st_test5_pd[6] = 5. * x[6];
	v[1] = st_test5_pd[6] * x[6];
	v[0] += v[1];
	rv = v[0] + -20.*x[0];
	rv += -80.*x[1];
	rv += -20.*x[2];
	rv += -50.*x[3];
	rv += -60.*x[4];
	rv += -90.*x[5];
	rv += 10.*x[7];
	rv += 10.*x[8];
	rv += 10.*x[9];
	;}

	if (wantfg & 2) {
	g[6] = st_test5_pd[6];
	g[6] += x[6]*5.;
	g[5] = st_test5_pd[5] + -90.;
	g[5] += x[5]*5.;
	g[4] = st_test5_pd[4] + -60.;
	g[4] += x[4]*5.;
	g[3] = st_test5_pd[3] + -50.;
	g[3] += x[3]*5.;
	g[2] = st_test5_pd[2] + -20.;
	g[2] += x[2]*5.;
	g[1] = st_test5_pd[1] + -80.;
	g[1] += x[1]*5.;
	g[0] = st_test5_pd[0] + -20.;
	g[0] += x[0]*5.;
	g[7] = 10.;
	g[8] = 10.;
	g[9] = 10.;
	}

	return rv;
}

 void
st_test5_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_test5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -2.*x[0];
	t1 += -6.*x[1];
	t1 += -x[2];
	t1 += -3.*x[4];
	t1 += -3.*x[5];
	t1 += -2.*x[6];
	t1 += -6.*x[7];
	t1 += -2.*x[8];
	t1 += -2.*x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 6.*x[0];
	t1 += -5.*x[1];
	t1 += 8.*x[2];
	t1 += -3.*x[3];
	t1 += x[5];
	t1 += 3.*x[6];
	t1 += 8.*x[7];
	t1 += 9.*x[8];
	t1 += -3.*x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -5.*x[0];
	t1 += 6.*x[1];
	t1 += 5.*x[2];
	t1 += 3.*x[3];
	t1 += 8.*x[4];
	t1 += -8.*x[5];
	t1 += 9.*x[6];
	t1 += 2.*x[7];
	t1 += -9.*x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 9.*x[0];
	t1 += 5.*x[1];
	t1 += -9.*x[3];
	t1 += x[4];
	t1 += -8.*x[5];
	t1 += 3.*x[6];
	t1 += -9.*x[7];
	t1 += -9.*x[8];
	t1 += -3.*x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -8.*x[0];
	t1 += 7.*x[1];
	t1 += -4.*x[2];
	t1 += -5.*x[3];
	t1 += -9.*x[4];
	t1 += x[5];
	t1 += -7.*x[6];
	t1 += -x[7];
	t1 += 3.*x[8];
	t1 += -2.*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -7.*x[0];
	t1 += -5.*x[1];
	t1 += -2.*x[2];
	t1 += -6.*x[4];
	t1 += -6.*x[5];
	t1 += -7.*x[6];
	t1 += -6.*x[7];
	t1 += 7.*x[8];
	t1 += 7.*x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += -3.*x[1];
	t1 += -3.*x[2];
	t1 += -4.*x[3];
	t1 += -x[4];
	t1 += -4.*x[6];
	t1 += x[7];
	t1 += 6.*x[8];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[0];
	t1 += -2.*x[1];
	t1 += 6.*x[2];
	t1 += 9.*x[3];
	t1 += -7.*x[5];
	t1 += 9.*x[6];
	t1 += -9.*x[7];
	t1 += -6.*x[8];
	t1 += 4.*x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -4.*x[0];
	t1 += 6.*x[1];
	t1 += 7.*x[2];
	t1 += 2.*x[3];
	t1 += 2.*x[4];
	t1 += 6.*x[6];
	t1 += 6.*x[7];
	t1 += -7.*x[8];
	t1 += 4.*x[9];
	c[8] = t1;

  /***  constraint 10  ***/

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
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	c[10] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -2.;
	J[11] = -6.;
	J[22] = -1.;
	J[41] = -3.;
	J[50] = -3.;
	J[59] = -2.;
	J[70] = -6.;
	J[81] = -2.;
	J[91] = -2.;

   /*** derivatives for constraint 2 ***/

	J[1] = 6.;
	J[12] = -5.;
	J[23] = 8.;
	J[32] = -3.;
	J[51] = 1.;
	J[60] = 3.;
	J[71] = 8.;
	J[82] = 9.;
	J[92] = -3.;

   /*** derivatives for constraint 3 ***/

	J[2] = -5.;
	J[13] = 6.;
	J[24] = 5.;
	J[33] = 3.;
	J[42] = 8.;
	J[52] = -8.;
	J[61] = 9.;
	J[72] = 2.;
	J[93] = -9.;

   /*** derivatives for constraint 4 ***/

	J[3] = 9.;
	J[14] = 5.;
	J[34] = -9.;
	J[43] = 1.;
	J[53] = -8.;
	J[62] = 3.;
	J[73] = -9.;
	J[83] = -9.;
	J[94] = -3.;

   /*** derivatives for constraint 5 ***/

	J[4] = -8.;
	J[15] = 7.;
	J[25] = -4.;
	J[35] = -5.;
	J[44] = -9.;
	J[54] = 1.;
	J[63] = -7.;
	J[74] = -1.;
	J[84] = 3.;
	J[95] = -2.;

   /*** derivatives for constraint 6 ***/

	J[5] = -7.;
	J[16] = -5.;
	J[26] = -2.;
	J[45] = -6.;
	J[55] = -6.;
	J[64] = -7.;
	J[75] = -6.;
	J[85] = 7.;
	J[96] = 7.;

   /*** derivatives for constraint 7 ***/

	J[6] = 1.;
	J[17] = -3.;
	J[27] = -3.;
	J[36] = -4.;
	J[46] = -1.;
	J[65] = -4.;
	J[76] = 1.;
	J[86] = 6.;

   /*** derivatives for constraint 8 ***/

	J[7] = 1.;
	J[18] = -2.;
	J[28] = 6.;
	J[37] = 9.;
	J[56] = -7.;
	J[66] = 9.;
	J[77] = -9.;
	J[87] = -6.;
	J[97] = 4.;

   /*** derivatives for constraint 9 ***/

	J[8] = -4.;
	J[19] = 6.;
	J[29] = 7.;
	J[38] = 2.;
	J[47] = 2.;
	J[67] = 6.;
	J[78] = 6.;
	J[88] = -7.;
	J[98] = 4.;

   /*** derivatives for constraint 10 ***/

	J[9] = 1.;
	J[20] = 1.;
	J[30] = 1.;
	J[39] = 1.;
	J[48] = 1.;
	J[57] = 1.;
	J[68] = 1.;
	J[79] = 1.;
	J[89] = 1.;
	J[99] = 1.;

   /*** derivatives for constraint 11 ***/

	J[10] = -1.;
	J[21] = -1.;
	J[31] = -1.;
	J[40] = -1.;
	J[49] = -1.;
	J[58] = -1.;
	J[69] = -1.;
	J[80] = -1.;
	J[90] = -1.;
	J[100] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
