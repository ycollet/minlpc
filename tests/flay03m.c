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
 fint flay03m_auxcom_[1] = { 3 /* nlc */ };
 fint flay03m_funcom_[117] = {
	26 /* nvar */,
	1 /* nobj */,
	24 /* ncon */,
	84 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	18,
	23,
	28,
	33,
	38,
	43,
	47,
	51,
	55,
	58,
	61,
	63,
	65,
	67,
	69,
	71,
	73,
	75,
	77,
	79,
	81,
	83,
	85,

	/* rownos */
	1,
	7,
	16,
	17,
	2,
	8,
	18,
	19,
	3,
	9,
	20,
	21,
	4,
	10,
	11,
	13,
	14,
	5,
	10,
	12,
	13,
	15,
	6,
	11,
	12,
	14,
	15,
	7,
	16,
	17,
	19,
	20,
	8,
	16,
	18,
	19,
	21,
	9,
	17,
	18,
	20,
	21,
	1,
	4,
	10,
	11,
	2,
	5,
	12,
	13,
	3,
	6,
	14,
	15,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	22,
	11,
	23,
	12,
	24,
	13,
	22,
	14,
	23,
	15,
	24,
	16,
	22,
	17,
	23,
	18,
	24,
	19,
	22,
	20,
	23,
	21,
	24 };

 real flay03m_boundc_[1+52+48] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		40.,
		1.,
		50.,
		1.,
		60.,
		0.,
		29.,
		0.,
		29.,
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
		1.,
		60.,
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
		0.,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		89.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		89.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.};

 real flay03m_x0comn_[26] = {
		1.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
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

 static real flay03m_pd[3];
static real flay03m_old_x[26];
static int flay03m_xkind = -1;

 static int
flay03m_xcheck(real *x)
{
	real *x1 = flay03m_old_x, *xe = x + 26;
	errno = 0;
	if (flay03m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	flay03m_xkind = 0;
	return 1;
	}
 real
flay03m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (flay03m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[12];
	rv += 2.*x[13];
	;}

	if (wantfg & 2) {
	g[12] = 2.;
	g[13] = 2.;
	}

	return rv;
}

 void
flay03m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (flay03m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 40. / x[0];
	flay03m_pd[0] = -v[0] / x[0];
	t1 = v[0] + -x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 50. / x[1];
	flay03m_pd[1] = -v[0] / x[1];
	t1 = v[0] + -x[10];
	c[1] = t1;

  /***  constraint 3  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 60. / x[2];
	flay03m_pd[2] = -v[0] / x[2];
	t1 = v[0] + -x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += -x[9];
	t1 += x[12];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[4];
	t1 += -x[10];
	t1 += x[12];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[5];
	t1 += -x[11];
	t1 += x[12];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += -x[6];
	t1 += x[13];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[1];
	t1 += -x[7];
	t1 += x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[2];
	t1 += -x[8];
	t1 += x[13];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += x[9];
	t1 += 69.*x[14];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[3];
	t1 += -x[5];
	t1 += x[9];
	t1 += 69.*x[15];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[10];
	t1 += 79.*x[16];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[10];
	t1 += 79.*x[17];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[3];
	t1 += x[5];
	t1 += x[11];
	t1 += 89.*x[18];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[11];
	t1 += 89.*x[19];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[0];
	t1 += x[6];
	t1 += -x[7];
	t1 += 69.*x[20];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[0];
	t1 += x[6];
	t1 += -x[8];
	t1 += 69.*x[21];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[1];
	t1 += x[7];
	t1 += -x[8];
	t1 += 79.*x[22];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[1];
	t1 += -x[6];
	t1 += x[7];
	t1 += 79.*x[23];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[2];
	t1 += -x[6];
	t1 += x[8];
	t1 += 89.*x[24];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[2];
	t1 += -x[7];
	t1 += x[8];
	t1 += 89.*x[25];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[14];
	t1 += x[17];
	t1 += x[20];
	t1 += x[23];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[15];
	t1 += x[18];
	t1 += x[21];
	t1 += x[24];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[16];
	t1 += x[19];
	t1 += x[22];
	t1 += x[25];
	c[23] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = flay03m_pd[0];
	J[42] = -1.;

   /*** derivatives for constraint 2 ***/

	J[4] = flay03m_pd[1];
	J[46] = -1.;

   /*** derivatives for constraint 3 ***/

	J[8] = flay03m_pd[2];
	J[50] = -1.;

   /*** derivatives for constraint 4 ***/

	J[12] = -1.;
	J[43] = -1.;
	J[54] = 1.;

   /*** derivatives for constraint 5 ***/

	J[17] = -1.;
	J[47] = -1.;
	J[55] = 1.;

   /*** derivatives for constraint 6 ***/

	J[22] = -1.;
	J[51] = -1.;
	J[56] = 1.;

   /*** derivatives for constraint 7 ***/

	J[1] = -1.;
	J[27] = -1.;
	J[57] = 1.;

   /*** derivatives for constraint 8 ***/

	J[5] = -1.;
	J[32] = -1.;
	J[58] = 1.;

   /*** derivatives for constraint 9 ***/

	J[9] = -1.;
	J[37] = -1.;
	J[59] = 1.;

   /*** derivatives for constraint 10 ***/

	J[13] = 1.;
	J[18] = -1.;
	J[44] = 1.;
	J[60] = 69.;

   /*** derivatives for constraint 11 ***/

	J[14] = 1.;
	J[23] = -1.;
	J[45] = 1.;
	J[62] = 69.;

   /*** derivatives for constraint 12 ***/

	J[19] = 1.;
	J[24] = -1.;
	J[48] = 1.;
	J[64] = 79.;

   /*** derivatives for constraint 13 ***/

	J[15] = -1.;
	J[20] = 1.;
	J[49] = 1.;
	J[66] = 79.;

   /*** derivatives for constraint 14 ***/

	J[16] = -1.;
	J[25] = 1.;
	J[52] = 1.;
	J[68] = 89.;

   /*** derivatives for constraint 15 ***/

	J[21] = -1.;
	J[26] = 1.;
	J[53] = 1.;
	J[70] = 89.;

   /*** derivatives for constraint 16 ***/

	J[2] = 1.;
	J[28] = 1.;
	J[33] = -1.;
	J[72] = 69.;

   /*** derivatives for constraint 17 ***/

	J[3] = 1.;
	J[29] = 1.;
	J[38] = -1.;
	J[74] = 69.;

   /*** derivatives for constraint 18 ***/

	J[6] = 1.;
	J[34] = 1.;
	J[39] = -1.;
	J[76] = 79.;

   /*** derivatives for constraint 19 ***/

	J[7] = 1.;
	J[30] = -1.;
	J[35] = 1.;
	J[78] = 79.;

   /*** derivatives for constraint 20 ***/

	J[10] = 1.;
	J[31] = -1.;
	J[40] = 1.;
	J[80] = 89.;

   /*** derivatives for constraint 21 ***/

	J[11] = 1.;
	J[36] = -1.;
	J[41] = 1.;
	J[82] = 89.;

   /*** derivatives for constraint 22 ***/

	J[61] = 1.;
	J[67] = 1.;
	J[73] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 23 ***/

	J[63] = 1.;
	J[69] = 1.;
	J[75] = 1.;
	J[81] = 1.;

   /*** derivatives for constraint 24 ***/

	J[65] = 1.;
	J[71] = 1.;
	J[77] = 1.;
	J[83] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
