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
 fint flay02m_auxcom_[1] = { 2 /* nlc */ };
 fint flay02m_funcom_[57] = {
	14 /* nvar */,
	1 /* nobj */,
	11 /* ncon */,
	36 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	25,
	27,
	29,
	31,
	33,
	35,
	37,

	/* rownos */
	1,
	5,
	9,
	2,
	6,
	10,
	3,
	7,
	8,
	4,
	7,
	8,
	5,
	9,
	10,
	6,
	9,
	10,
	1,
	3,
	7,
	2,
	4,
	8,
	3,
	4,
	5,
	6,
	7,
	11,
	8,
	11,
	9,
	11,
	10,
	11 };

 real flay02m_boundc_[1+28+22] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		40.,
		1.,
		50.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		1.,
		40.,
		1.,
		50.,
		0.,
		30.,
		0.,
		30.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		69.,
		-1.7e308,
		79.,
		-1.7e308,
		69.,
		-1.7e308,
		79.,
		1.,
		1.};

 real flay02m_x0comn_[14] = {
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real flay02m_pd[2];
static real flay02m_old_x[14];
static int flay02m_xkind = -1;

 static int
flay02m_xcheck(real *x)
{
	real *x1 = flay02m_old_x, *xe = x + 14;
	errno = 0;
	if (flay02m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	flay02m_xkind = 0;
	return 1;
	}
 real
flay02m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (flay02m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[8];
	rv += 2.*x[9];
	;}

	if (wantfg & 2) {
	g[8] = 2.;
	g[9] = 2.;
	}

	return rv;
}

 void
flay02m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (flay02m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 40. / x[0];
	flay02m_pd[0] = -v[0] / x[0];
	t1 = v[0] + -x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 50. / x[1];
	flay02m_pd[1] = -v[0] / x[1];
	t1 = v[0] + -x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[2];
	t1 += -x[6];
	t1 += x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += -x[7];
	t1 += x[8];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += -x[4];
	t1 += x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[1];
	t1 += -x[5];
	t1 += x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += x[6];
	t1 += 69.*x[10];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[7];
	t1 += 79.*x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[0];
	t1 += x[4];
	t1 += -x[5];
	t1 += 69.*x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += x[5];
	t1 += 79.*x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	c[10] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = flay02m_pd[0];
	J[18] = -1.;

   /*** derivatives for constraint 2 ***/

	J[3] = flay02m_pd[1];
	J[21] = -1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -1.;
	J[19] = -1.;
	J[24] = 1.;

   /*** derivatives for constraint 4 ***/

	J[9] = -1.;
	J[22] = -1.;
	J[25] = 1.;

   /*** derivatives for constraint 5 ***/

	J[1] = -1.;
	J[12] = -1.;
	J[26] = 1.;

   /*** derivatives for constraint 6 ***/

	J[4] = -1.;
	J[15] = -1.;
	J[27] = 1.;

   /*** derivatives for constraint 7 ***/

	J[7] = 1.;
	J[10] = -1.;
	J[20] = 1.;
	J[28] = 69.;

   /*** derivatives for constraint 8 ***/

	J[8] = -1.;
	J[11] = 1.;
	J[23] = 1.;
	J[30] = 79.;

   /*** derivatives for constraint 9 ***/

	J[2] = 1.;
	J[13] = 1.;
	J[16] = -1.;
	J[32] = 69.;

   /*** derivatives for constraint 10 ***/

	J[5] = 1.;
	J[14] = -1.;
	J[17] = 1.;
	J[34] = 79.;

   /*** derivatives for constraint 11 ***/

	J[29] = 1.;
	J[31] = 1.;
	J[33] = 1.;
	J[35] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
