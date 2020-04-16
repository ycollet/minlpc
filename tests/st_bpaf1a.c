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
 fint st_bpaf1a_auxcom_[1] = { 0 /* nlc */ };
 fint st_bpaf1a_funcom_[62] = {
	10 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	45 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	9,
	14,
	19,
	24,
	28,
	33,
	38,
	42,
	46,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	2,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	7,
	8,
	9,
	10,
	6,
	7,
	8,
	9,
	10,
	6,
	7,
	8,
	9,
	10,
	6,
	7,
	8,
	10,
	6,
	7,
	9,
	10 };

 real st_bpaf1a_boundc_[1+20+20] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		0.,
		20.,
		-1.7e308,
		1.,
		-1.7e308,
		3.,
		-1.7e308,
		5.,
		-1.7e308,
		4.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		7.,
		-1.7e308,
		3.,
		-1.7e308,
		6.,
		-1.7e308,
		2.};

 real st_bpaf1a_x0comn_[10] = {
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

static real st_bpaf1a_old_x[10];
static int st_bpaf1a_xkind = -1;

 static int
st_bpaf1a_xcheck(real *x)
{
	real *x1 = st_bpaf1a_old_x, *xe = x + 10;
	errno = 0;
	if (st_bpaf1a_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_bpaf1a_xkind = 0;
	return 1;
	}
 real
st_bpaf1a_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_bpaf1a_xcheck(x) && wantfg == 2)
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
	rv = v[0] + 2.*x[0];
	rv += -4.*x[1];
	rv += 8.*x[2];
	rv += 4.*x[3];
	rv += 9.*x[4];
	rv += 3.*x[5];
	rv += -x[6];
	rv += -2.*x[7];
	rv += -4.*x[8];
	rv += 5.*x[9];
	;}

	if (wantfg & 2) {
	g[9] = x[4] + 5.;
	g[4] = x[9] + 9.;
	g[8] = x[3] + -4.;
	g[3] = x[8] + 4.;
	g[7] = x[2] + -2.;
	g[2] = x[7] + 8.;
	g[6] = x[1] + -1.;
	g[1] = x[6] + -4.;
	g[5] = x[0] + 3.;
	g[0] = x[5] + 2.;
	}

	return rv;
}

 void
st_bpaf1a_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_bpaf1a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -8.*x[0];
	t1 += -6.*x[2];
	t1 += 7.*x[3];
	t1 += -7.*x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -6.*x[0];
	t1 += 2.*x[1];
	t1 += -3.*x[2];
	t1 += 9.*x[3];
	t1 += -3.*x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 6.*x[0];
	t1 += -7.*x[2];
	t1 += -8.*x[3];
	t1 += 2.*x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += -8.*x[2];
	t1 += -7.*x[3];
	t1 += -5.*x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 4.*x[0];
	t1 += -7.*x[1];
	t1 += 4.*x[2];
	t1 += 5.*x[3];
	t1 += x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 5.*x[6];
	t1 += -4.*x[7];
	t1 += 9.*x[8];
	t1 += -7.*x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 7.*x[5];
	t1 += 4.*x[6];
	t1 += 3.*x[7];
	t1 += 7.*x[8];
	t1 += 5.*x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 6.*x[5];
	t1 += x[6];
	t1 += -8.*x[7];
	t1 += 8.*x[8];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -3.*x[5];
	t1 += 2.*x[6];
	t1 += 7.*x[7];
	t1 += x[9];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -2.*x[5];
	t1 += -3.*x[6];
	t1 += 8.*x[7];
	t1 += 5.*x[8];
	t1 += -2.*x[9];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -8.;
	J[8] = -6.;
	J[13] = 7.;
	J[18] = -7.;

   /*** derivatives for constraint 2 ***/

	J[1] = -6.;
	J[5] = 2.;
	J[9] = -3.;
	J[14] = 9.;
	J[19] = -3.;

   /*** derivatives for constraint 3 ***/

	J[2] = 6.;
	J[10] = -7.;
	J[15] = -8.;
	J[20] = 2.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[6] = 1.;
	J[11] = -8.;
	J[16] = -7.;
	J[21] = -5.;

   /*** derivatives for constraint 5 ***/

	J[4] = 4.;
	J[7] = -7.;
	J[12] = 4.;
	J[17] = 5.;
	J[22] = 1.;

   /*** derivatives for constraint 6 ***/

	J[27] = 5.;
	J[32] = -4.;
	J[37] = 9.;
	J[41] = -7.;

   /*** derivatives for constraint 7 ***/

	J[23] = 7.;
	J[28] = 4.;
	J[33] = 3.;
	J[38] = 7.;
	J[42] = 5.;

   /*** derivatives for constraint 8 ***/

	J[24] = 6.;
	J[29] = 1.;
	J[34] = -8.;
	J[39] = 8.;

   /*** derivatives for constraint 9 ***/

	J[25] = -3.;
	J[30] = 2.;
	J[35] = 7.;
	J[43] = 1.;

   /*** derivatives for constraint 10 ***/

	J[26] = -2.;
	J[31] = -3.;
	J[36] = 8.;
	J[40] = 5.;
	J[44] = -2.;
	}
}
#ifdef __cplusplus
	}
#endif
