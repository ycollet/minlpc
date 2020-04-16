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
 fint syn05m_auxcom_[1] = { 3 /* nlc */ };
 fint syn05m_funcom_[100] = {
	20 /* nvar */,
	1 /* nobj */,
	28 /* ncon */,
	73 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
	1,
	4,
	7,
	10,
	11,
	14,
	17,
	19,
	20,
	22,
	26,
	30,
	33,
	36,
	38,
	43,
	50,
	57,
	62,
	66,
	74,

	/* rownos */
	1,
	4,
	8,
	2,
	4,
	10,
	3,
	7,
	16,
	4,
	1,
	5,
	9,
	2,
	5,
	11,
	5,
	6,
	6,
	6,
	7,
	7,
	12,
	13,
	14,
	7,
	18,
	19,
	22,
	20,
	21,
	23,
	12,
	13,
	15,
	3,
	17,
	18,
	19,
	20,
	21,
	24,
	1,
	8,
	9,
	25,
	26,
	27,
	28,
	2,
	10,
	11,
	25,
	26,
	27,
	28,
	12,
	13,
	14,
	15,
	26,
	3,
	16,
	17,
	27,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	28 };

 real syn05m_boundc_[1+40+56] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		10.,
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
		0.,
		1.7e308,
		0.,
		7.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
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
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.,
		-1.,
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
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		1.,
		-1.,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		1.,
		1.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308};

 real syn05m_x0comn_[20] = {
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

 static real syn05m_pd[5];
static real syn05m_old_x[20];
static int syn05m_xkind = -1;

 static int
syn05m_xcheck(real *x)
{
	real *x1 = syn05m_old_x, *xe = x + 20;
	errno = 0;
	if (syn05m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	syn05m_xkind = 0;
	return 1;
	}
 real
syn05m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (syn05m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 5.*x[7];
	rv += -2.*x[11];
	rv += 200.*x[12];
	rv += 250.*x[13];
	rv += 300.*x[14];
	rv += -5.*x[15];
	rv += -8.*x[16];
	rv += -6.*x[17];
	rv += -10.*x[18];
	rv += -6.*x[19];
	;}

	if (wantfg & 2) {
	g[7] = 5.;
	g[11] = -2.;
	g[12] = 200.;
	g[13] = 250.;
	g[14] = 300.;
	g[15] = -5.;
	g[16] = -8.;
	g[17] = -6.;
	g[18] = -10.;
	g[19] = -6.;
	}

	return rv;
}

 void
syn05m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (syn05m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m_pd[0] = 1. / v[0];
	v[0] = -v[1];
	t1 = v[0] + x[4];
	t1 += x[15];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + 1.;
	syn05m_pd[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m_pd[2] = 1. / v[0];
	v[0] = -1.2 * syn05m_pd[1];
	t1 = v[0] + x[5];
	t1 += x[16];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + 1.;
	syn05m_pd[3] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	syn05m_pd[4] = 1. / v[0];
	v[0] = -1.5 * syn05m_pd[3];
	t1 = v[0] + x[13];
	t1 += x[18];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += x[6];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += -x[8];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[2];
	t1 += x[8];
	t1 += -x[9];
	t1 += -x[10];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[0];
	t1 += -10.*x[15];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[4];
	t1 += -2.39789527279837*x[15];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[1];
	t1 += -10.*x[16];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[5];
	t1 += -2.87747432735804*x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -0.75*x[9];
	t1 += x[12];
	t1 += x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -0.75*x[9];
	t1 += x[12];
	t1 += -x[17];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[9];
	t1 += -2.87747432735804*x[17];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[12];
	t1 += -2.15810574551853*x[17];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[2];
	t1 += -2.87747432735804*x[18];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[13];
	t1 += -2.03277599268042*x[18];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[10];
	t1 += x[14];
	t1 += x[19];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[10];
	t1 += x[14];
	t1 += -x[19];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -0.5*x[11];
	t1 += x[14];
	t1 += x[19];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -0.5*x[11];
	t1 += x[14];
	t1 += -x[19];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[10];
	t1 += -2.87747432735804*x[19];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[11];
	t1 += -7.*x[19];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[14];
	t1 += -3.5*x[19];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[15];
	t1 += x[16];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[15];
	t1 += x[16];
	t1 += -x[17];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[15];
	t1 += x[16];
	t1 += -x[18];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[15];
	t1 += x[16];
	t1 += -x[19];
	c[27] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -syn05m_pd[0];
	J[10] = 1.;
	J[42] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -1.2*syn05m_pd[2];
	J[3] = dv[0];
	J[13] = 1.;
	J[49] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -1.5*syn05m_pd[4];
	J[6] = dv[0];
	J[35] = 1.;
	J[61] = 1.;

   /*** derivatives for constraint 4 ***/

	J[1] = -1.;
	J[4] = -1.;
	J[9] = 1.;

   /*** derivatives for constraint 5 ***/

	J[11] = -1.;
	J[14] = -1.;
	J[16] = 1.;

   /*** derivatives for constraint 6 ***/

	J[17] = 1.;
	J[18] = -1.;
	J[19] = -1.;

   /*** derivatives for constraint 7 ***/

	J[7] = -1.;
	J[20] = 1.;
	J[21] = -1.;
	J[25] = -1.;

   /*** derivatives for constraint 8 ***/

	J[2] = 1.;
	J[43] = -10.;

   /*** derivatives for constraint 9 ***/

	J[12] = 1.;
	J[44] = -2.39789527279837;

   /*** derivatives for constraint 10 ***/

	J[5] = 1.;
	J[50] = -10.;

   /*** derivatives for constraint 11 ***/

	J[15] = 1.;
	J[51] = -2.87747432735804;

   /*** derivatives for constraint 12 ***/

	J[22] = -0.75;
	J[32] = 1.;
	J[56] = 1.;

   /*** derivatives for constraint 13 ***/

	J[23] = -0.75;
	J[33] = 1.;
	J[57] = -1.;

   /*** derivatives for constraint 14 ***/

	J[24] = 1.;
	J[58] = -2.87747432735804;

   /*** derivatives for constraint 15 ***/

	J[34] = 1.;
	J[59] = -2.15810574551853;

   /*** derivatives for constraint 16 ***/

	J[8] = 1.;
	J[62] = -2.87747432735804;

   /*** derivatives for constraint 17 ***/

	J[36] = 1.;
	J[63] = -2.03277599268042;

   /*** derivatives for constraint 18 ***/

	J[26] = -1.;
	J[37] = 1.;
	J[65] = 1.;

   /*** derivatives for constraint 19 ***/

	J[27] = -1.;
	J[38] = 1.;
	J[66] = -1.;

   /*** derivatives for constraint 20 ***/

	J[29] = -0.5;
	J[39] = 1.;
	J[67] = 1.;

   /*** derivatives for constraint 21 ***/

	J[30] = -0.5;
	J[40] = 1.;
	J[68] = -1.;

   /*** derivatives for constraint 22 ***/

	J[28] = 1.;
	J[69] = -2.87747432735804;

   /*** derivatives for constraint 23 ***/

	J[31] = 1.;
	J[70] = -7.;

   /*** derivatives for constraint 24 ***/

	J[41] = 1.;
	J[71] = -3.5;

   /*** derivatives for constraint 25 ***/

	J[45] = 1.;
	J[52] = 1.;

   /*** derivatives for constraint 26 ***/

	J[46] = 1.;
	J[53] = 1.;
	J[60] = -1.;

   /*** derivatives for constraint 27 ***/

	J[47] = 1.;
	J[54] = 1.;
	J[64] = -1.;

   /*** derivatives for constraint 28 ***/

	J[48] = 1.;
	J[55] = 1.;
	J[72] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
