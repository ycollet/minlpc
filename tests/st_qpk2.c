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
 fint st_qpk2_auxcom_[1] = { 0 /* nlc */ };
 fint st_qpk2_funcom_[85] = {
	6 /* nvar */,
	1 /* nobj */,
	12 /* ncon */,
	72 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	13,
	25,
	37,
	49,
	61,
	73,

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
	12,
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
	12 };

 real st_qpk2_boundc_[1+12+24] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		21.,
		-1.7e308,
		21.,
		-1.7e308,
		21.,
		-1.7e308,
		21.,
		-1.7e308,
		21.,
		-1.7e308,
		21.};

 real st_qpk2_x0comn_[6] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_qpk2_pd[10];
static real st_qpk2_old_x[6];
static int st_qpk2_xkind = -1;

 static int
st_qpk2_xcheck(real *x)
{
	real *x1 = st_qpk2_old_x, *xe = x + 6;
	errno = 0;
	if (st_qpk2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_qpk2_xkind = 0;
	return 1;
	}
 real
st_qpk2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (st_qpk2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_qpk2_pd[0] = 0.5 * x[0];
	v[0] = st_qpk2_pd[0] * x[1];
	v[1] = x[0] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	st_qpk2_pd[1] = 0.5 * x[1];
	v[2] = st_qpk2_pd[1] * x[0];
	v[0] += v[2];
	v[2] = x[1] * x[1];
	v[1] = -v[2];
	v[0] += v[1];
	st_qpk2_pd[2] = 0.5 * x[1];
	v[1] = st_qpk2_pd[2] * x[2];
	v[0] += v[1];
	st_qpk2_pd[3] = 0.5 * x[2];
	v[1] = st_qpk2_pd[3] * x[1];
	v[0] += v[1];
	v[1] = x[2] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	st_qpk2_pd[4] = 0.5 * x[2];
	v[2] = st_qpk2_pd[4] * x[3];
	v[0] += v[2];
	st_qpk2_pd[5] = 0.5 * x[3];
	v[2] = st_qpk2_pd[5] * x[2];
	v[0] += v[2];
	v[2] = x[3] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	st_qpk2_pd[6] = 0.5 * x[3];
	v[1] = st_qpk2_pd[6] * x[4];
	v[0] += v[1];
	st_qpk2_pd[7] = 0.5 * x[4];
	v[1] = st_qpk2_pd[7] * x[3];
	v[0] += v[1];
	v[1] = x[4] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	st_qpk2_pd[8] = 0.5 * x[4];
	v[2] = st_qpk2_pd[8] * x[5];
	v[0] += v[2];
	st_qpk2_pd[9] = 0.5 * x[5];
	v[2] = st_qpk2_pd[9] * x[4];
	v[0] += v[2];
	v[2] = x[5] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[5] = -x[5];
	g[5] -= x[5];
	g[4] = st_qpk2_pd[9];
	g[5] += x[4]*0.5;
	g[5] += st_qpk2_pd[8];
	g[4] += x[5]*0.5;
	g[4] -= x[4];
	g[4] -= x[4];
	g[3] = st_qpk2_pd[7];
	g[4] += x[3]*0.5;
	g[4] += st_qpk2_pd[6];
	g[3] += x[4]*0.5;
	g[3] -= x[3];
	g[3] -= x[3];
	g[2] = st_qpk2_pd[5];
	g[3] += x[2]*0.5;
	g[3] += st_qpk2_pd[4];
	g[2] += x[3]*0.5;
	g[2] -= x[2];
	g[2] -= x[2];
	g[1] = st_qpk2_pd[3];
	g[2] += x[1]*0.5;
	g[2] += st_qpk2_pd[2];
	g[1] += x[2]*0.5;
	g[1] -= x[1];
	g[1] -= x[1];
	g[0] = st_qpk2_pd[1];
	g[1] += x[0]*0.5;
	g[0] -= x[0];
	g[0] -= x[0];
	g[1] += st_qpk2_pd[0];
	g[0] += x[1]*0.5;
	}

	return v[0];
}

 void
st_qpk2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_qpk2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += -2.*x[1];
	t1 += -3.*x[2];
	t1 += -4.*x[3];
	t1 += -5.*x[4];
	t1 += -6.*x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -2.*x[0];
	t1 += -3.*x[1];
	t1 += -4.*x[2];
	t1 += -5.*x[3];
	t1 += -6.*x[4];
	t1 += -x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -3.*x[0];
	t1 += -4.*x[1];
	t1 += -5.*x[2];
	t1 += -6.*x[3];
	t1 += -x[4];
	t1 += -2.*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -4.*x[0];
	t1 += -5.*x[1];
	t1 += -6.*x[2];
	t1 += -x[3];
	t1 += -2.*x[4];
	t1 += -3.*x[5];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -5.*x[0];
	t1 += -6.*x[1];
	t1 += -x[2];
	t1 += -2.*x[3];
	t1 += -3.*x[4];
	t1 += -4.*x[5];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -6.*x[0];
	t1 += -x[1];
	t1 += -2.*x[2];
	t1 += -3.*x[3];
	t1 += -4.*x[4];
	t1 += -5.*x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += 2.*x[1];
	t1 += 3.*x[2];
	t1 += 4.*x[3];
	t1 += 5.*x[4];
	t1 += 6.*x[5];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 2.*x[0];
	t1 += 3.*x[1];
	t1 += 4.*x[2];
	t1 += 5.*x[3];
	t1 += 6.*x[4];
	t1 += x[5];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 3.*x[0];
	t1 += 4.*x[1];
	t1 += 5.*x[2];
	t1 += 6.*x[3];
	t1 += x[4];
	t1 += 2.*x[5];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 4.*x[0];
	t1 += 5.*x[1];
	t1 += 6.*x[2];
	t1 += x[3];
	t1 += 2.*x[4];
	t1 += 3.*x[5];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 5.*x[0];
	t1 += 6.*x[1];
	t1 += x[2];
	t1 += 2.*x[3];
	t1 += 3.*x[4];
	t1 += 4.*x[5];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 6.*x[0];
	t1 += x[1];
	t1 += 2.*x[2];
	t1 += 3.*x[3];
	t1 += 4.*x[4];
	t1 += 5.*x[5];
	c[11] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[12] = -2.;
	J[24] = -3.;
	J[36] = -4.;
	J[48] = -5.;
	J[60] = -6.;

   /*** derivatives for constraint 2 ***/

	J[1] = -2.;
	J[13] = -3.;
	J[25] = -4.;
	J[37] = -5.;
	J[49] = -6.;
	J[61] = -1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -3.;
	J[14] = -4.;
	J[26] = -5.;
	J[38] = -6.;
	J[50] = -1.;
	J[62] = -2.;

   /*** derivatives for constraint 4 ***/

	J[3] = -4.;
	J[15] = -5.;
	J[27] = -6.;
	J[39] = -1.;
	J[51] = -2.;
	J[63] = -3.;

   /*** derivatives for constraint 5 ***/

	J[4] = -5.;
	J[16] = -6.;
	J[28] = -1.;
	J[40] = -2.;
	J[52] = -3.;
	J[64] = -4.;

   /*** derivatives for constraint 6 ***/

	J[5] = -6.;
	J[17] = -1.;
	J[29] = -2.;
	J[41] = -3.;
	J[53] = -4.;
	J[65] = -5.;

   /*** derivatives for constraint 7 ***/

	J[6] = 1.;
	J[18] = 2.;
	J[30] = 3.;
	J[42] = 4.;
	J[54] = 5.;
	J[66] = 6.;

   /*** derivatives for constraint 8 ***/

	J[7] = 2.;
	J[19] = 3.;
	J[31] = 4.;
	J[43] = 5.;
	J[55] = 6.;
	J[67] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = 3.;
	J[20] = 4.;
	J[32] = 5.;
	J[44] = 6.;
	J[56] = 1.;
	J[68] = 2.;

   /*** derivatives for constraint 10 ***/

	J[9] = 4.;
	J[21] = 5.;
	J[33] = 6.;
	J[45] = 1.;
	J[57] = 2.;
	J[69] = 3.;

   /*** derivatives for constraint 11 ***/

	J[10] = 5.;
	J[22] = 6.;
	J[34] = 1.;
	J[46] = 2.;
	J[58] = 3.;
	J[70] = 4.;

   /*** derivatives for constraint 12 ***/

	J[11] = 6.;
	J[23] = 1.;
	J[35] = 2.;
	J[47] = 3.;
	J[59] = 4.;
	J[71] = 5.;
	}
}
#ifdef __cplusplus
	}
#endif
