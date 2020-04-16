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
 fint st_iqpbk2_auxcom_[1] = { 0 /* nlc */ };
 fint st_iqpbk2_funcom_[29] = {
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

 real st_iqpbk2_boundc_[1+16+14] /* Infinity, variable bounds, constraint bounds */ = {
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

 real st_iqpbk2_x0comn_[8] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_iqpbk2_pd[50];
static real st_iqpbk2_old_x[8];
static int st_iqpbk2_xkind = -1;

 static int
st_iqpbk2_xcheck(real *x)
{
	real *x1 = st_iqpbk2_old_x, *xe = x + 8;
	errno = 0;
	if (st_iqpbk2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_iqpbk2_xkind = 0;
	return 1;
	}
 real
st_iqpbk2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_iqpbk2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_iqpbk2_pd[0] = 1.69 * x[0];
	v[0] = st_iqpbk2_pd[0] * x[0];
	v[1] = x[0] * x[1];
	v[0] += v[1];
	st_iqpbk2_pd[1] = 2. * x[0];
	v[1] = st_iqpbk2_pd[1] * x[2];
	v[0] += v[1];
	st_iqpbk2_pd[2] = 3. * x[0];
	v[1] = st_iqpbk2_pd[2] * x[3];
	v[0] += v[1];
	st_iqpbk2_pd[3] = 4. * x[0];
	v[1] = st_iqpbk2_pd[3] * x[4];
	v[0] += v[1];
	st_iqpbk2_pd[4] = 5. * x[0];
	v[1] = st_iqpbk2_pd[4] * x[5];
	v[0] += v[1];
	st_iqpbk2_pd[5] = 6. * x[0];
	v[1] = st_iqpbk2_pd[5] * x[6];
	v[0] += v[1];
	st_iqpbk2_pd[6] = 7. * x[0];
	v[1] = st_iqpbk2_pd[6] * x[7];
	v[0] += v[1];
	v[1] = x[1] * x[0];
	v[0] += v[1];
	st_iqpbk2_pd[7] = 1.69 * x[1];
	v[1] = st_iqpbk2_pd[7] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[2];
	v[0] += v[1];
	st_iqpbk2_pd[8] = 2. * x[1];
	v[1] = st_iqpbk2_pd[8] * x[3];
	v[0] += v[1];
	st_iqpbk2_pd[9] = 3. * x[1];
	v[1] = st_iqpbk2_pd[9] * x[4];
	v[0] += v[1];
	st_iqpbk2_pd[10] = 4. * x[1];
	v[1] = st_iqpbk2_pd[10] * x[5];
	v[0] += v[1];
	st_iqpbk2_pd[11] = 5. * x[1];
	v[1] = st_iqpbk2_pd[11] * x[6];
	v[0] += v[1];
	st_iqpbk2_pd[12] = 6. * x[1];
	v[1] = st_iqpbk2_pd[12] * x[7];
	v[0] += v[1];
	st_iqpbk2_pd[13] = 2. * x[2];
	v[1] = st_iqpbk2_pd[13] * x[0];
	v[0] += v[1];
	v[1] = x[2] * x[1];
	v[0] += v[1];
	st_iqpbk2_pd[14] = 1.69 * x[2];
	v[1] = st_iqpbk2_pd[14] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[3];
	v[0] += v[1];
	st_iqpbk2_pd[15] = 2. * x[2];
	v[1] = st_iqpbk2_pd[15] * x[4];
	v[0] += v[1];
	st_iqpbk2_pd[16] = 3. * x[2];
	v[1] = st_iqpbk2_pd[16] * x[5];
	v[0] += v[1];
	st_iqpbk2_pd[17] = 4. * x[2];
	v[1] = st_iqpbk2_pd[17] * x[6];
	v[0] += v[1];
	st_iqpbk2_pd[18] = 5. * x[2];
	v[1] = st_iqpbk2_pd[18] * x[7];
	v[0] += v[1];
	st_iqpbk2_pd[19] = 3. * x[3];
	v[1] = st_iqpbk2_pd[19] * x[0];
	v[0] += v[1];
	st_iqpbk2_pd[20] = 2. * x[3];
	v[1] = st_iqpbk2_pd[20] * x[1];
	v[0] += v[1];
	v[1] = x[3] * x[2];
	v[0] += v[1];
	st_iqpbk2_pd[21] = 1.69 * x[3];
	v[1] = st_iqpbk2_pd[21] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[4];
	v[0] += v[1];
	st_iqpbk2_pd[22] = 2. * x[3];
	v[1] = st_iqpbk2_pd[22] * x[5];
	v[0] += v[1];
	st_iqpbk2_pd[23] = 3. * x[3];
	v[1] = st_iqpbk2_pd[23] * x[6];
	v[0] += v[1];
	st_iqpbk2_pd[24] = 4. * x[3];
	v[1] = st_iqpbk2_pd[24] * x[7];
	v[0] += v[1];
	st_iqpbk2_pd[25] = 4. * x[4];
	v[1] = st_iqpbk2_pd[25] * x[0];
	v[0] += v[1];
	st_iqpbk2_pd[26] = 3. * x[4];
	v[1] = st_iqpbk2_pd[26] * x[1];
	v[0] += v[1];
	st_iqpbk2_pd[27] = 2. * x[4];
	v[1] = st_iqpbk2_pd[27] * x[2];
	v[0] += v[1];
	v[1] = x[4] * x[3];
	v[0] += v[1];
	st_iqpbk2_pd[28] = 1.69 * x[4];
	v[1] = st_iqpbk2_pd[28] * x[4];
	v[0] += v[1];
	v[1] = x[4] * x[5];
	v[0] += v[1];
	st_iqpbk2_pd[29] = 2. * x[4];
	v[1] = st_iqpbk2_pd[29] * x[6];
	v[0] += v[1];
	st_iqpbk2_pd[30] = 3. * x[4];
	v[1] = st_iqpbk2_pd[30] * x[7];
	v[0] += v[1];
	st_iqpbk2_pd[31] = 5. * x[5];
	v[1] = st_iqpbk2_pd[31] * x[0];
	v[0] += v[1];
	st_iqpbk2_pd[32] = 4. * x[5];
	v[1] = st_iqpbk2_pd[32] * x[1];
	v[0] += v[1];
	st_iqpbk2_pd[33] = 3. * x[5];
	v[1] = st_iqpbk2_pd[33] * x[2];
	v[0] += v[1];
	st_iqpbk2_pd[34] = 2. * x[5];
	v[1] = st_iqpbk2_pd[34] * x[3];
	v[0] += v[1];
	v[1] = x[5] * x[4];
	v[0] += v[1];
	st_iqpbk2_pd[35] = 1.69 * x[5];
	v[1] = st_iqpbk2_pd[35] * x[5];
	v[0] += v[1];
	v[1] = x[5] * x[6];
	v[0] += v[1];
	st_iqpbk2_pd[36] = 2. * x[5];
	v[1] = st_iqpbk2_pd[36] * x[7];
	v[0] += v[1];
	st_iqpbk2_pd[37] = 6. * x[6];
	v[1] = st_iqpbk2_pd[37] * x[0];
	v[0] += v[1];
	st_iqpbk2_pd[38] = 5. * x[6];
	v[1] = st_iqpbk2_pd[38] * x[1];
	v[0] += v[1];
	st_iqpbk2_pd[39] = 4. * x[6];
	v[1] = st_iqpbk2_pd[39] * x[2];
	v[0] += v[1];
	st_iqpbk2_pd[40] = 3. * x[6];
	v[1] = st_iqpbk2_pd[40] * x[3];
	v[0] += v[1];
	st_iqpbk2_pd[41] = 2. * x[6];
	v[1] = st_iqpbk2_pd[41] * x[4];
	v[0] += v[1];
	v[1] = x[6] * x[5];
	v[0] += v[1];
	st_iqpbk2_pd[42] = 1.69 * x[6];
	v[1] = st_iqpbk2_pd[42] * x[6];
	v[0] += v[1];
	v[1] = x[6] * x[7];
	v[0] += v[1];
	st_iqpbk2_pd[43] = 7. * x[7];
	v[1] = st_iqpbk2_pd[43] * x[0];
	v[0] += v[1];
	st_iqpbk2_pd[44] = 6. * x[7];
	v[1] = st_iqpbk2_pd[44] * x[1];
	v[0] += v[1];
	st_iqpbk2_pd[45] = 5. * x[7];
	v[1] = st_iqpbk2_pd[45] * x[2];
	v[0] += v[1];
	st_iqpbk2_pd[46] = 4. * x[7];
	v[1] = st_iqpbk2_pd[46] * x[3];
	v[0] += v[1];
	st_iqpbk2_pd[47] = 3. * x[7];
	v[1] = st_iqpbk2_pd[47] * x[4];
	v[0] += v[1];
	st_iqpbk2_pd[48] = 2. * x[7];
	v[1] = st_iqpbk2_pd[48] * x[5];
	v[0] += v[1];
	v[1] = x[7] * x[6];
	v[0] += v[1];
	st_iqpbk2_pd[49] = 1.69 * x[7];
	v[1] = st_iqpbk2_pd[49] * x[7];
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
	g[7] = st_iqpbk2_pd[49];
	g[7] += x[7]*1.69;
	g[6] = x[7] + 1.;
	g[7] += x[6];
	g[5] = st_iqpbk2_pd[48] + 2.;
	g[7] += x[5]*2.;
	g[4] = st_iqpbk2_pd[47] + 3.;
	g[7] += x[4]*3.;
	g[3] = st_iqpbk2_pd[46] + 4.;
	g[7] += x[3]*4.;
	g[2] = st_iqpbk2_pd[45] + 5.;
	g[7] += x[2]*5.;
	g[1] = st_iqpbk2_pd[44] + 6.;
	g[7] += x[1]*6.;
	g[0] = st_iqpbk2_pd[43] + 7.;
	g[7] += x[0]*7.;
	g[7] += x[6];
	g[6] += x[7];
	g[6] += st_iqpbk2_pd[42];
	g[6] += x[6]*1.69;
	g[5] += x[6];
	g[6] += x[5];
	g[4] += st_iqpbk2_pd[41];
	g[6] += x[4]*2.;
	g[3] += st_iqpbk2_pd[40];
	g[6] += x[3]*3.;
	g[2] += st_iqpbk2_pd[39];
	g[6] += x[2]*4.;
	g[1] += st_iqpbk2_pd[38];
	g[6] += x[1]*5.;
	g[0] += st_iqpbk2_pd[37];
	g[6] += x[0]*6.;
	g[7] += st_iqpbk2_pd[36];
	g[5] += x[7]*2.;
	g[6] += x[5];
	g[5] += x[6];
	g[5] += st_iqpbk2_pd[35];
	g[5] += x[5]*1.69;
	g[4] += x[5];
	g[5] += x[4];
	g[3] += st_iqpbk2_pd[34];
	g[5] += x[3]*2.;
	g[2] += st_iqpbk2_pd[33];
	g[5] += x[2]*3.;
	g[1] += st_iqpbk2_pd[32];
	g[5] += x[1]*4.;
	g[0] += st_iqpbk2_pd[31];
	g[5] += x[0]*5.;
	g[7] += st_iqpbk2_pd[30];
	g[4] += x[7]*3.;
	g[6] += st_iqpbk2_pd[29];
	g[4] += x[6]*2.;
	g[5] += x[4];
	g[4] += x[5];
	g[4] += st_iqpbk2_pd[28];
	g[4] += x[4]*1.69;
	g[3] += x[4];
	g[4] += x[3];
	g[2] += st_iqpbk2_pd[27];
	g[4] += x[2]*2.;
	g[1] += st_iqpbk2_pd[26];
	g[4] += x[1]*3.;
	g[0] += st_iqpbk2_pd[25];
	g[4] += x[0]*4.;
	g[7] += st_iqpbk2_pd[24];
	g[3] += x[7]*4.;
	g[6] += st_iqpbk2_pd[23];
	g[3] += x[6]*3.;
	g[5] += st_iqpbk2_pd[22];
	g[3] += x[5]*2.;
	g[4] += x[3];
	g[3] += x[4];
	g[3] += st_iqpbk2_pd[21];
	g[3] += x[3]*1.69;
	g[2] += x[3];
	g[3] += x[2];
	g[1] += st_iqpbk2_pd[20];
	g[3] += x[1]*2.;
	g[0] += st_iqpbk2_pd[19];
	g[3] += x[0]*3.;
	g[7] += st_iqpbk2_pd[18];
	g[2] += x[7]*5.;
	g[6] += st_iqpbk2_pd[17];
	g[2] += x[6]*4.;
	g[5] += st_iqpbk2_pd[16];
	g[2] += x[5]*3.;
	g[4] += st_iqpbk2_pd[15];
	g[2] += x[4]*2.;
	g[3] += x[2];
	g[2] += x[3];
	g[2] += st_iqpbk2_pd[14];
	g[2] += x[2]*1.69;
	g[1] += x[2];
	g[2] += x[1];
	g[0] += st_iqpbk2_pd[13];
	g[2] += x[0]*2.;
	g[7] += st_iqpbk2_pd[12];
	g[1] += x[7]*6.;
	g[6] += st_iqpbk2_pd[11];
	g[1] += x[6]*5.;
	g[5] += st_iqpbk2_pd[10];
	g[1] += x[5]*4.;
	g[4] += st_iqpbk2_pd[9];
	g[1] += x[4]*3.;
	g[3] += st_iqpbk2_pd[8];
	g[1] += x[3]*2.;
	g[2] += x[1];
	g[1] += x[2];
	g[1] += st_iqpbk2_pd[7];
	g[1] += x[1]*1.69;
	g[0] += x[1];
	g[1] += x[0];
	g[7] += st_iqpbk2_pd[6];
	g[0] += x[7]*7.;
	g[6] += st_iqpbk2_pd[5];
	g[0] += x[6]*6.;
	g[5] += st_iqpbk2_pd[4];
	g[0] += x[5]*5.;
	g[4] += st_iqpbk2_pd[3];
	g[0] += x[4]*4.;
	g[3] += st_iqpbk2_pd[2];
	g[0] += x[3]*3.;
	g[2] += st_iqpbk2_pd[1];
	g[0] += x[2]*2.;
	g[1] += x[0];
	g[0] += x[1];
	g[0] += st_iqpbk2_pd[0];
	g[0] += x[0]*1.69;
	}

	return rv;
}

 void
st_iqpbk2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_iqpbk2_xcheck(x) && wantfg == 2)
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
