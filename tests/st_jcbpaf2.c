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
 fint st_jcbpaf2_auxcom_[1] = { 0 /* nlc */ };
 fint st_jcbpaf2_funcom_[122] = {
	10 /* nvar */,
	1 /* nobj */,
	13 /* ncon */,
	105 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	12,
	23,
	32,
	41,
	52,
	62,
	72,
	83,
	95,
	106,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	8,
	9,
	10,
	11,
	12,
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
	12,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	11,
	12,
	1,
	2,
	3,
	6,
	8,
	9,
	10,
	11,
	12,
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
	1,
	2,
	3,
	4,
	6,
	8,
	9,
	10,
	11,
	13,
	1,
	2,
	4,
	5,
	6,
	8,
	9,
	10,
	11,
	13,
	1,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	13,
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
	13,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	10,
	11,
	13 };

 real st_jcbpaf2_boundc_[1+20+26] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		80.,
		-1.7e308,
		57.,
		-1.7e308,
		92.,
		-1.7e308,
		55.,
		-1.7e308,
		76.,
		-1.7e308,
		14.,
		-1.7e308,
		47.,
		-1.7e308,
		51.,
		-1.7e308,
		36.,
		-1.7e308,
		92.,
		-1.7e308,
		200.,
		1.,
		1.7e308,
		2.,
		1.7e308};

 real st_jcbpaf2_x0comn_[10] = {
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

static real st_jcbpaf2_old_x[10];
static int st_jcbpaf2_xkind = -1;

 static int
st_jcbpaf2_xcheck(real *x)
{
	real *x1 = st_jcbpaf2_old_x, *xe = x + 10;
	errno = 0;
	if (st_jcbpaf2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_jcbpaf2_xkind = 0;
	return 1;
	}
 real
st_jcbpaf2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_jcbpaf2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[5];
	v[1] = x[1] * x[6];
	v[0] += v[1];
	v[1] = x[2] * x[7];
	v[0] += v[1];
	v[1] = x[3] * x[8];
	v[0] += v[1];
	v[1] = x[4] * x[9];
	v[0] += v[1];
	rv = v[0] + -x[0];
	rv += -2.*x[1];
	rv += -3.*x[2];
	rv += -4.*x[3];
	rv += -5.*x[4];
	rv += -x[5];
	rv += -2.*x[6];
	rv += -3.*x[7];
	rv += -4.*x[8];
	rv += -5.*x[9];
	;}

	if (wantfg & 2) {
	g[9] = x[4] + -5.;
	g[4] = x[9] + -5.;
	g[8] = x[3] + -4.;
	g[3] = x[8] + -4.;
	g[7] = x[2] + -3.;
	g[2] = x[7] + -3.;
	g[6] = x[1] + -2.;
	g[1] = x[6] + -2.;
	g[5] = x[0] + -1.;
	g[0] = x[5] + -1.;
	}

	return rv;
}

 void
st_jcbpaf2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_jcbpaf2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += 7.*x[1];
	t1 += 5.*x[2];
	t1 += 5.*x[3];
	t1 += -6.*x[5];
	t1 += -3.*x[6];
	t1 += -3.*x[7];
	t1 += 5.*x[8];
	t1 += -7.*x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -3.*x[0];
	t1 += 3.*x[1];
	t1 += 8.*x[2];
	t1 += 7.*x[3];
	t1 += -9.*x[4];
	t1 += -7.*x[5];
	t1 += -9.*x[6];
	t1 += 8.*x[8];
	t1 += -7.*x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += x[2];
	t1 += 3.*x[3];
	t1 += 8.*x[4];
	t1 += 9.*x[5];
	t1 += 9.*x[7];
	t1 += -7.*x[8];
	t1 += -8.*x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += -2.*x[1];
	t1 += 2.*x[2];
	t1 += 9.*x[4];
	t1 += 5.*x[5];
	t1 += -3.*x[6];
	t1 += x[7];
	t1 += -x[8];
	t1 += -5.*x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -5.*x[0];
	t1 += 8.*x[1];
	t1 += -8.*x[2];
	t1 += 3.*x[4];
	t1 += 4.*x[6];
	t1 += -5.*x[7];
	t1 += -2.*x[8];
	t1 += 9.*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 4.*x[0];
	t1 += -x[1];
	t1 += 6.*x[2];
	t1 += -4.*x[3];
	t1 += -7.*x[4];
	t1 += -8.*x[5];
	t1 += -7.*x[6];
	t1 += 6.*x[7];
	t1 += -2.*x[8];
	t1 += -9.*x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 7.*x[1];
	t1 += 4.*x[2];
	t1 += 9.*x[4];
	t1 += -6.*x[7];
	t1 += -5.*x[8];
	t1 += -5.*x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -5.*x[0];
	t1 += -x[1];
	t1 += 7.*x[3];
	t1 += -x[4];
	t1 += 2.*x[5];
	t1 += 5.*x[6];
	t1 += -8.*x[7];
	t1 += -5.*x[8];
	t1 += 2.*x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -4.*x[0];
	t1 += -7.*x[1];
	t1 += -9.*x[3];
	t1 += 2.*x[4];
	t1 += 6.*x[5];
	t1 += -9.*x[6];
	t1 += x[7];
	t1 += -5.*x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -2.*x[0];
	t1 += 6.*x[1];
	t1 += 8.*x[3];
	t1 += -6.*x[4];
	t1 += 8.*x[5];
	t1 += 8.*x[6];
	t1 += 5.*x[7];
	t1 += 2.*x[8];
	t1 += -7.*x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += -2.*x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += 4.*x[7];
	t1 += x[8];
	t1 += 3.*x[9];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	c[12] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[11] = 7.;
	J[22] = 5.;
	J[31] = 5.;
	J[51] = -6.;
	J[61] = -3.;
	J[71] = -3.;
	J[82] = 5.;
	J[94] = -7.;

   /*** derivatives for constraint 2 ***/

	J[1] = -3.;
	J[12] = 3.;
	J[23] = 8.;
	J[32] = 7.;
	J[40] = -9.;
	J[52] = -7.;
	J[62] = -9.;
	J[83] = 8.;
	J[95] = -7.;

   /*** derivatives for constraint 3 ***/

	J[2] = 1.;
	J[24] = 1.;
	J[33] = 3.;
	J[41] = 8.;
	J[53] = 9.;
	J[72] = 9.;
	J[84] = -7.;
	J[96] = -8.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[13] = -2.;
	J[25] = 2.;
	J[42] = 9.;
	J[54] = 5.;
	J[63] = -3.;
	J[73] = 1.;
	J[85] = -1.;
	J[97] = -5.;

   /*** derivatives for constraint 5 ***/

	J[4] = -5.;
	J[14] = 8.;
	J[26] = -8.;
	J[43] = 3.;
	J[64] = 4.;
	J[74] = -5.;
	J[86] = -2.;
	J[98] = 9.;

   /*** derivatives for constraint 6 ***/

	J[5] = 4.;
	J[15] = -1.;
	J[27] = 6.;
	J[34] = -4.;
	J[44] = -7.;
	J[55] = -8.;
	J[65] = -7.;
	J[75] = 6.;
	J[87] = -2.;
	J[99] = -9.;

   /*** derivatives for constraint 7 ***/

	J[16] = 7.;
	J[28] = 4.;
	J[45] = 9.;
	J[76] = -6.;
	J[88] = -5.;
	J[100] = -5.;

   /*** derivatives for constraint 8 ***/

	J[6] = -5.;
	J[17] = -1.;
	J[35] = 7.;
	J[46] = -1.;
	J[56] = 2.;
	J[66] = 5.;
	J[77] = -8.;
	J[89] = -5.;
	J[101] = 2.;

   /*** derivatives for constraint 9 ***/

	J[7] = -4.;
	J[18] = -7.;
	J[36] = -9.;
	J[47] = 2.;
	J[57] = 6.;
	J[67] = -9.;
	J[78] = 1.;
	J[90] = -5.;

   /*** derivatives for constraint 10 ***/

	J[8] = -2.;
	J[19] = 6.;
	J[37] = 8.;
	J[48] = -6.;
	J[58] = 8.;
	J[68] = 8.;
	J[79] = 5.;
	J[91] = 2.;
	J[102] = -7.;

   /*** derivatives for constraint 11 ***/

	J[9] = 1.;
	J[20] = 1.;
	J[29] = 1.;
	J[38] = -2.;
	J[49] = 1.;
	J[59] = 1.;
	J[69] = 1.;
	J[80] = 4.;
	J[92] = 1.;
	J[103] = 3.;

   /*** derivatives for constraint 12 ***/

	J[10] = 1.;
	J[21] = 1.;
	J[30] = 1.;
	J[39] = 1.;
	J[50] = 1.;

   /*** derivatives for constraint 13 ***/

	J[60] = 1.;
	J[70] = 1.;
	J[81] = 1.;
	J[93] = 1.;
	J[104] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
