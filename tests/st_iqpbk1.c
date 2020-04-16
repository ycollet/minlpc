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
 fint st_iqpbk1_auxcom_[1] = { 0 /* nlc */ };
 fint st_iqpbk1_funcom_[29] = {
	8 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	14 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	4,
	6,
	8,
	10,
	12,
	14,
	15,

	/* rownos */
	1,
	1,
	2,
	2,
	3,
	3,
	4,
	4,
	5,
	5,
	6,
	6,
	7,
	7 };

 real st_iqpbk1_boundc_[1+16+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.,
		1.,
		-2.1,
		2.,
		-3.2,
		3.,
		-4.3,
		4.,
		-5.4,
		5.,
		-6.5,
		6.,
		-7.6,
		7.,
		-8.7,
		8.,
		-1.,
		1.7e308,
		-1.05,
		1.7e308,
		-1.1,
		1.7e308,
		-1.15,
		1.7e308,
		-1.2,
		1.7e308,
		-1.25,
		1.7e308,
		-1.3,
		1.7e308};

 real st_iqpbk1_x0comn_[8] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_iqpbk1_pd[52];
static real st_iqpbk1_old_x[8];
static int st_iqpbk1_xkind = -1;

 static int
st_iqpbk1_xcheck(real *x)
{
	real *x1 = st_iqpbk1_old_x, *xe = x + 8;
	errno = 0;
	if (st_iqpbk1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_iqpbk1_xkind = 0;
	return 1;
	}
 real
st_iqpbk1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_iqpbk1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_iqpbk1_pd[0] = 0.845 * x[0];
	v[0] = st_iqpbk1_pd[0] * x[0];
	st_iqpbk1_pd[1] = 0.5 * x[0];
	v[1] = st_iqpbk1_pd[1] * x[1];
	v[0] += v[1];
	v[1] = x[0] * x[2];
	v[0] += v[1];
	st_iqpbk1_pd[2] = 1.5 * x[0];
	v[1] = st_iqpbk1_pd[2] * x[3];
	v[0] += v[1];
	st_iqpbk1_pd[3] = 2. * x[0];
	v[1] = st_iqpbk1_pd[3] * x[4];
	v[0] += v[1];
	st_iqpbk1_pd[4] = 2.5 * x[0];
	v[1] = st_iqpbk1_pd[4] * x[5];
	v[0] += v[1];
	st_iqpbk1_pd[5] = 3. * x[0];
	v[1] = st_iqpbk1_pd[5] * x[6];
	v[0] += v[1];
	st_iqpbk1_pd[6] = 3.5 * x[0];
	v[1] = st_iqpbk1_pd[6] * x[7];
	v[0] += v[1];
	st_iqpbk1_pd[7] = 0.5 * x[1];
	v[1] = st_iqpbk1_pd[7] * x[0];
	v[0] += v[1];
	st_iqpbk1_pd[8] = 0.845 * x[1];
	v[1] = st_iqpbk1_pd[8] * x[1];
	v[0] += v[1];
	st_iqpbk1_pd[9] = 0.5 * x[1];
	v[1] = st_iqpbk1_pd[9] * x[2];
	v[0] += v[1];
	v[1] = x[1] * x[3];
	v[0] += v[1];
	st_iqpbk1_pd[10] = 1.5 * x[1];
	v[1] = st_iqpbk1_pd[10] * x[4];
	v[0] += v[1];
	st_iqpbk1_pd[11] = 2. * x[1];
	v[1] = st_iqpbk1_pd[11] * x[5];
	v[0] += v[1];
	st_iqpbk1_pd[12] = 2.5 * x[1];
	v[1] = st_iqpbk1_pd[12] * x[6];
	v[0] += v[1];
	st_iqpbk1_pd[13] = 3. * x[1];
	v[1] = st_iqpbk1_pd[13] * x[7];
	v[0] += v[1];
	v[1] = x[2] * x[0];
	v[0] += v[1];
	st_iqpbk1_pd[14] = 0.5 * x[2];
	v[1] = st_iqpbk1_pd[14] * x[1];
	v[0] += v[1];
	st_iqpbk1_pd[15] = 0.845 * x[2];
	v[1] = st_iqpbk1_pd[15] * x[2];
	v[0] += v[1];
	st_iqpbk1_pd[16] = 0.5 * x[2];
	v[1] = st_iqpbk1_pd[16] * x[3];
	v[0] += v[1];
	v[1] = x[2] * x[4];
	v[0] += v[1];
	st_iqpbk1_pd[17] = 1.5 * x[2];
	v[1] = st_iqpbk1_pd[17] * x[5];
	v[0] += v[1];
	st_iqpbk1_pd[18] = 2. * x[2];
	v[1] = st_iqpbk1_pd[18] * x[6];
	v[0] += v[1];
	st_iqpbk1_pd[19] = 2.5 * x[2];
	v[1] = st_iqpbk1_pd[19] * x[7];
	v[0] += v[1];
	st_iqpbk1_pd[20] = 1.5 * x[3];
	v[1] = st_iqpbk1_pd[20] * x[0];
	v[0] += v[1];
	v[1] = x[3] * x[1];
	v[0] += v[1];
	st_iqpbk1_pd[21] = 0.5 * x[3];
	v[1] = st_iqpbk1_pd[21] * x[2];
	v[0] += v[1];
	st_iqpbk1_pd[22] = 0.845 * x[3];
	v[1] = st_iqpbk1_pd[22] * x[3];
	v[0] += v[1];
	st_iqpbk1_pd[23] = 0.5 * x[3];
	v[1] = st_iqpbk1_pd[23] * x[4];
	v[0] += v[1];
	v[1] = x[3] * x[5];
	v[0] += v[1];
	st_iqpbk1_pd[24] = 1.5 * x[3];
	v[1] = st_iqpbk1_pd[24] * x[6];
	v[0] += v[1];
	st_iqpbk1_pd[25] = 2. * x[3];
	v[1] = st_iqpbk1_pd[25] * x[7];
	v[0] += v[1];
	st_iqpbk1_pd[26] = 2. * x[4];
	v[1] = st_iqpbk1_pd[26] * x[0];
	v[0] += v[1];
	st_iqpbk1_pd[27] = 1.5 * x[4];
	v[1] = st_iqpbk1_pd[27] * x[1];
	v[0] += v[1];
	v[1] = x[4] * x[2];
	v[0] += v[1];
	st_iqpbk1_pd[28] = 0.5 * x[4];
	v[1] = st_iqpbk1_pd[28] * x[3];
	v[0] += v[1];
	st_iqpbk1_pd[29] = 0.845 * x[4];
	v[1] = st_iqpbk1_pd[29] * x[4];
	v[0] += v[1];
	st_iqpbk1_pd[30] = 0.5 * x[4];
	v[1] = st_iqpbk1_pd[30] * x[5];
	v[0] += v[1];
	v[1] = x[4] * x[6];
	v[0] += v[1];
	st_iqpbk1_pd[31] = 1.5 * x[4];
	v[1] = st_iqpbk1_pd[31] * x[7];
	v[0] += v[1];
	st_iqpbk1_pd[32] = 2.5 * x[5];
	v[1] = st_iqpbk1_pd[32] * x[0];
	v[0] += v[1];
	st_iqpbk1_pd[33] = 2. * x[5];
	v[1] = st_iqpbk1_pd[33] * x[1];
	v[0] += v[1];
	st_iqpbk1_pd[34] = 1.5 * x[5];
	v[1] = st_iqpbk1_pd[34] * x[2];
	v[0] += v[1];
	v[1] = x[5] * x[3];
	v[0] += v[1];
	st_iqpbk1_pd[35] = 0.5 * x[5];
	v[1] = st_iqpbk1_pd[35] * x[4];
	v[0] += v[1];
	st_iqpbk1_pd[36] = 0.845 * x[5];
	v[1] = st_iqpbk1_pd[36] * x[5];
	v[0] += v[1];
	st_iqpbk1_pd[37] = 0.5 * x[5];
	v[1] = st_iqpbk1_pd[37] * x[6];
	v[0] += v[1];
	v[1] = x[5] * x[7];
	v[0] += v[1];
	st_iqpbk1_pd[38] = 3. * x[6];
	v[1] = st_iqpbk1_pd[38] * x[0];
	v[0] += v[1];
	st_iqpbk1_pd[39] = 2.5 * x[6];
	v[1] = st_iqpbk1_pd[39] * x[1];
	v[0] += v[1];
	st_iqpbk1_pd[40] = 2. * x[6];
	v[1] = st_iqpbk1_pd[40] * x[2];
	v[0] += v[1];
	st_iqpbk1_pd[41] = 1.5 * x[6];
	v[1] = st_iqpbk1_pd[41] * x[3];
	v[0] += v[1];
	v[1] = x[6] * x[4];
	v[0] += v[1];
	st_iqpbk1_pd[42] = 0.5 * x[6];
	v[1] = st_iqpbk1_pd[42] * x[5];
	v[0] += v[1];
	st_iqpbk1_pd[43] = 0.845 * x[6];
	v[1] = st_iqpbk1_pd[43] * x[6];
	v[0] += v[1];
	st_iqpbk1_pd[44] = 0.5 * x[6];
	v[1] = st_iqpbk1_pd[44] * x[7];
	v[0] += v[1];
	st_iqpbk1_pd[45] = 3.5 * x[7];
	v[1] = st_iqpbk1_pd[45] * x[0];
	v[0] += v[1];
	st_iqpbk1_pd[46] = 3. * x[7];
	v[1] = st_iqpbk1_pd[46] * x[1];
	v[0] += v[1];
	st_iqpbk1_pd[47] = 2.5 * x[7];
	v[1] = st_iqpbk1_pd[47] * x[2];
	v[0] += v[1];
	st_iqpbk1_pd[48] = 2. * x[7];
	v[1] = st_iqpbk1_pd[48] * x[3];
	v[0] += v[1];
	st_iqpbk1_pd[49] = 1.5 * x[7];
	v[1] = st_iqpbk1_pd[49] * x[4];
	v[0] += v[1];
	v[1] = x[7] * x[5];
	v[0] += v[1];
	st_iqpbk1_pd[50] = 0.5 * x[7];
	v[1] = st_iqpbk1_pd[50] * x[6];
	v[0] += v[1];
	st_iqpbk1_pd[51] = 0.845 * x[7];
	v[1] = st_iqpbk1_pd[51] * x[7];
	v[0] += v[1];
	rv = v[0] + 7.*x[0];
	rv += 6.*x[1];
	rv += 5.*x[2];
	rv += 4.*x[3];
	rv += 3.*x[4];
	rv += 2.*x[5];
	rv += x[6];
	;}

	if (wantfg & 2) {
	g[7] = st_iqpbk1_pd[51];
	g[7] += x[7]*0.845;
	g[6] = st_iqpbk1_pd[50] + 1.;
	g[7] += x[6]*0.5;
	g[5] = x[7] + 2.;
	g[7] += x[5];
	g[4] = st_iqpbk1_pd[49] + 3.;
	g[7] += x[4]*1.5;
	g[3] = st_iqpbk1_pd[48] + 4.;
	g[7] += x[3]*2.;
	g[2] = st_iqpbk1_pd[47] + 5.;
	g[7] += x[2]*2.5;
	g[1] = st_iqpbk1_pd[46] + 6.;
	g[7] += x[1]*3.;
	g[0] = st_iqpbk1_pd[45] + 7.;
	g[7] += x[0]*3.5;
	g[7] += st_iqpbk1_pd[44];
	g[6] += x[7]*0.5;
	g[6] += st_iqpbk1_pd[43];
	g[6] += x[6]*0.845;
	g[5] += st_iqpbk1_pd[42];
	g[6] += x[5]*0.5;
	g[4] += x[6];
	g[6] += x[4];
	g[3] += st_iqpbk1_pd[41];
	g[6] += x[3]*1.5;
	g[2] += st_iqpbk1_pd[40];
	g[6] += x[2]*2.;
	g[1] += st_iqpbk1_pd[39];
	g[6] += x[1]*2.5;
	g[0] += st_iqpbk1_pd[38];
	g[6] += x[0]*3.;
	g[7] += x[5];
	g[5] += x[7];
	g[6] += st_iqpbk1_pd[37];
	g[5] += x[6]*0.5;
	g[5] += st_iqpbk1_pd[36];
	g[5] += x[5]*0.845;
	g[4] += st_iqpbk1_pd[35];
	g[5] += x[4]*0.5;
	g[3] += x[5];
	g[5] += x[3];
	g[2] += st_iqpbk1_pd[34];
	g[5] += x[2]*1.5;
	g[1] += st_iqpbk1_pd[33];
	g[5] += x[1]*2.;
	g[0] += st_iqpbk1_pd[32];
	g[5] += x[0]*2.5;
	g[7] += st_iqpbk1_pd[31];
	g[4] += x[7]*1.5;
	g[6] += x[4];
	g[4] += x[6];
	g[5] += st_iqpbk1_pd[30];
	g[4] += x[5]*0.5;
	g[4] += st_iqpbk1_pd[29];
	g[4] += x[4]*0.845;
	g[3] += st_iqpbk1_pd[28];
	g[4] += x[3]*0.5;
	g[2] += x[4];
	g[4] += x[2];
	g[1] += st_iqpbk1_pd[27];
	g[4] += x[1]*1.5;
	g[0] += st_iqpbk1_pd[26];
	g[4] += x[0]*2.;
	g[7] += st_iqpbk1_pd[25];
	g[3] += x[7]*2.;
	g[6] += st_iqpbk1_pd[24];
	g[3] += x[6]*1.5;
	g[5] += x[3];
	g[3] += x[5];
	g[4] += st_iqpbk1_pd[23];
	g[3] += x[4]*0.5;
	g[3] += st_iqpbk1_pd[22];
	g[3] += x[3]*0.845;
	g[2] += st_iqpbk1_pd[21];
	g[3] += x[2]*0.5;
	g[1] += x[3];
	g[3] += x[1];
	g[0] += st_iqpbk1_pd[20];
	g[3] += x[0]*1.5;
	g[7] += st_iqpbk1_pd[19];
	g[2] += x[7]*2.5;
	g[6] += st_iqpbk1_pd[18];
	g[2] += x[6]*2.;
	g[5] += st_iqpbk1_pd[17];
	g[2] += x[5]*1.5;
	g[4] += x[2];
	g[2] += x[4];
	g[3] += st_iqpbk1_pd[16];
	g[2] += x[3]*0.5;
	g[2] += st_iqpbk1_pd[15];
	g[2] += x[2]*0.845;
	g[1] += st_iqpbk1_pd[14];
	g[2] += x[1]*0.5;
	g[0] += x[2];
	g[2] += x[0];
	g[7] += st_iqpbk1_pd[13];
	g[1] += x[7]*3.;
	g[6] += st_iqpbk1_pd[12];
	g[1] += x[6]*2.5;
	g[5] += st_iqpbk1_pd[11];
	g[1] += x[5]*2.;
	g[4] += st_iqpbk1_pd[10];
	g[1] += x[4]*1.5;
	g[3] += x[1];
	g[1] += x[3];
	g[2] += st_iqpbk1_pd[9];
	g[1] += x[2]*0.5;
	g[1] += st_iqpbk1_pd[8];
	g[1] += x[1]*0.845;
	g[0] += st_iqpbk1_pd[7];
	g[1] += x[0]*0.5;
	g[7] += st_iqpbk1_pd[6];
	g[0] += x[7]*3.5;
	g[6] += st_iqpbk1_pd[5];
	g[0] += x[6]*3.;
	g[5] += st_iqpbk1_pd[4];
	g[0] += x[5]*2.5;
	g[4] += st_iqpbk1_pd[3];
	g[0] += x[4]*2.;
	g[3] += st_iqpbk1_pd[2];
	g[0] += x[3]*1.5;
	g[2] += x[0];
	g[0] += x[2];
	g[1] += st_iqpbk1_pd[1];
	g[0] += x[1]*0.5;
	g[0] += st_iqpbk1_pd[0];
	g[0] += x[0]*0.845;
	}

	return rv;
}

 void
st_iqpbk1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_iqpbk1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[1];
	t1 += x[2];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[2];
	t1 += x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[4];
	t1 += x[5];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[5];
	t1 += x[6];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[6];
	t1 += x[7];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[1] = 1.;

   /*** derivatives for constraint 2 ***/

	J[2] = -1.;
	J[3] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = -1.;
	J[5] = 1.;

   /*** derivatives for constraint 4 ***/

	J[6] = -1.;
	J[7] = 1.;

   /*** derivatives for constraint 5 ***/

	J[8] = -1.;
	J[9] = 1.;

   /*** derivatives for constraint 6 ***/

	J[10] = -1.;
	J[11] = 1.;

   /*** derivatives for constraint 7 ***/

	J[12] = -1.;
	J[13] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
