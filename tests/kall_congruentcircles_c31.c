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
 fint kall_congruentcircles_c31_auxcom_[1] = { 4 /* nlc */ };
 fint kall_congruentcircles_c31_funcom_[54] = {
	10 /* nvar */,
	1 /* nobj */,
	16 /* ncon */,
	37 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	11,
	16,
	19,
	24,
	27,
	31,
	35,
	37,
	38,

	/* rownos */
	1,
	3,
	6,
	12,
	14,
	15,
	2,
	3,
	7,
	13,
	2,
	4,
	8,
	14,
	16,
	2,
	4,
	9,
	3,
	4,
	10,
	15,
	16,
	3,
	4,
	11,
	1,
	6,
	8,
	10,
	1,
	7,
	9,
	11,
	1,
	5,
	5 };

 real kall_congruentcircles_c31_boundc_[1+20+32] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.5,
		7.5,
		0.5,
		3.5,
		0.5,
		7.5,
		0.5,
		3.5,
		0.5,
		7.5,
		0.5,
		3.5,
		0.,
		8.,
		0.,
		4.,
		0.25,
		32.,
		0.,
		32.,
		0.,
		0.,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		-2.35619449019234,
		-2.35619449019234,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
		-1.7e308,
		4.,
		-1.7e308,
		2.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real kall_congruentcircles_c31_x0comn_[10] = {
		0.5,
		0.5,
		0.5,
		0.5,
		0.5,
		0.5,
		0.,
		0.,
		0.25,
		0. };

 static real kall_congruentcircles_c31_pd[12];
static real kall_congruentcircles_c31_old_x[10];
static int kall_congruentcircles_c31_xkind = -1;

 static int
kall_congruentcircles_c31_xcheck(real *x)
{
	real *x1 = kall_congruentcircles_c31_old_x, *xe = x + 10;
	errno = 0;
	if (kall_congruentcircles_c31_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_congruentcircles_c31_xkind = 0;
	return 1;
	}
 real
kall_congruentcircles_c31_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_congruentcircles_c31_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[9];
	;}

	if (wantfg & 2) {
	g[9] = 1.;
	}

	return rv;
}

 void
kall_congruentcircles_c31_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[7];
	real t1;
	fint wantfg = *needfg;
	if (kall_congruentcircles_c31_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[6] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[8];
	c[0] = t1;

  /***  constraint 2  ***/

	kall_congruentcircles_c31_pd[1] = x[0] - x[2];
	kall_congruentcircles_c31_pd[0] = x[0] - x[2];
	v[2] = kall_congruentcircles_c31_pd[1] * kall_congruentcircles_c31_pd[0];
	kall_congruentcircles_c31_pd[3] = x[1] - x[3];
	kall_congruentcircles_c31_pd[2] = x[1] - x[3];
	v[5] = kall_congruentcircles_c31_pd[3] * kall_congruentcircles_c31_pd[2];
	v[6] = v[2] + v[5];
	c[1] = v[6];

  /***  constraint 3  ***/

	kall_congruentcircles_c31_pd[5] = x[0] - x[4];
	kall_congruentcircles_c31_pd[4] = x[0] - x[4];
	v[2] = kall_congruentcircles_c31_pd[5] * kall_congruentcircles_c31_pd[4];
	kall_congruentcircles_c31_pd[7] = x[1] - x[5];
	kall_congruentcircles_c31_pd[6] = x[1] - x[5];
	v[5] = kall_congruentcircles_c31_pd[7] * kall_congruentcircles_c31_pd[6];
	v[6] = v[2] + v[5];
	c[2] = v[6];

  /***  constraint 4  ***/

	kall_congruentcircles_c31_pd[9] = x[2] - x[4];
	kall_congruentcircles_c31_pd[8] = x[2] - x[4];
	v[2] = kall_congruentcircles_c31_pd[9] * kall_congruentcircles_c31_pd[8];
	kall_congruentcircles_c31_pd[11] = x[3] - x[5];
	kall_congruentcircles_c31_pd[10] = x[3] - x[5];
	v[5] = kall_congruentcircles_c31_pd[11] * kall_congruentcircles_c31_pd[10];
	v[6] = v[2] + v[5];
	c[3] = v[6];

  /***  constraint 5  ***/

	t1 = -x[8];
	t1 += x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += -x[6];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[1];
	t1 += -x[7];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[2];
	t1 += -x[6];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[3];
	t1 += -x[7];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[4];
	t1 += -x[6];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[5];
	t1 += -x[7];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[0];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[1];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[0];
	t1 += -x[2];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[0];
	t1 += -x[4];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[2];
	t1 += -x[4];
	c[15] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[30] = -x[6];
	J[26] = -x[7];
	J[34] = 1.;

   /*** derivatives for constraint 2 ***/

	J[15] = -kall_congruentcircles_c31_pd[3];
	J[6] = kall_congruentcircles_c31_pd[3];
	J[15] -= kall_congruentcircles_c31_pd[2];
	J[6] += kall_congruentcircles_c31_pd[2];
	J[10] = -kall_congruentcircles_c31_pd[1];
	J[0] = kall_congruentcircles_c31_pd[1];
	J[10] -= kall_congruentcircles_c31_pd[0];
	J[0] += kall_congruentcircles_c31_pd[0];

   /*** derivatives for constraint 3 ***/

	J[23] = -kall_congruentcircles_c31_pd[7];
	J[7] = kall_congruentcircles_c31_pd[7];
	J[23] -= kall_congruentcircles_c31_pd[6];
	J[7] += kall_congruentcircles_c31_pd[6];
	J[18] = -kall_congruentcircles_c31_pd[5];
	J[1] = kall_congruentcircles_c31_pd[5];
	J[18] -= kall_congruentcircles_c31_pd[4];
	J[1] += kall_congruentcircles_c31_pd[4];

   /*** derivatives for constraint 4 ***/

	J[24] = -kall_congruentcircles_c31_pd[11];
	J[16] = kall_congruentcircles_c31_pd[11];
	J[24] -= kall_congruentcircles_c31_pd[10];
	J[16] += kall_congruentcircles_c31_pd[10];
	J[19] = -kall_congruentcircles_c31_pd[9];
	J[11] = kall_congruentcircles_c31_pd[9];
	J[19] -= kall_congruentcircles_c31_pd[8];
	J[11] += kall_congruentcircles_c31_pd[8];

   /*** derivatives for constraint 5 ***/

	J[35] = -1.;
	J[36] = 1.;

   /*** derivatives for constraint 6 ***/

	J[2] = 1.;
	J[27] = -1.;

   /*** derivatives for constraint 7 ***/

	J[8] = 1.;
	J[31] = -1.;

   /*** derivatives for constraint 8 ***/

	J[12] = 1.;
	J[28] = -1.;

   /*** derivatives for constraint 9 ***/

	J[17] = 1.;
	J[32] = -1.;

   /*** derivatives for constraint 10 ***/

	J[20] = 1.;
	J[29] = -1.;

   /*** derivatives for constraint 11 ***/

	J[25] = 1.;
	J[33] = -1.;

   /*** derivatives for constraint 12 ***/

	J[3] = 1.;

   /*** derivatives for constraint 13 ***/

	J[9] = 1.;

   /*** derivatives for constraint 14 ***/

	J[4] = 1.;
	J[13] = -1.;

   /*** derivatives for constraint 15 ***/

	J[5] = 1.;
	J[21] = -1.;

   /*** derivatives for constraint 16 ***/

	J[14] = 1.;
	J[22] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
