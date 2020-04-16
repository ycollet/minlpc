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
 fint wastewater04m1_auxcom_[1] = { 6 /* nlc */ };
 fint wastewater04m1_funcom_[117] = {
	23 /* nvar */,
	1 /* nobj */,
	21 /* ncon */,
	87 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	17,
	21,
	25,
	29,
	33,
	37,
	41,
	45,
	49,
	53,
	57,
	61,
	65,
	69,
	73,
	77,
	81,
	85,
	88,

	/* rownos */
	1,
	14,
	18,
	2,
	15,
	19,
	3,
	16,
	20,
	4,
	17,
	21,
	1,
	3,
	5,
	18,
	2,
	4,
	6,
	19,
	1,
	3,
	5,
	20,
	2,
	4,
	6,
	21,
	1,
	2,
	9,
	11,
	3,
	4,
	10,
	11,
	1,
	2,
	9,
	12,
	3,
	4,
	10,
	12,
	5,
	6,
	11,
	13,
	5,
	6,
	12,
	13,
	1,
	2,
	9,
	11,
	3,
	4,
	10,
	12,
	5,
	6,
	7,
	13,
	5,
	6,
	8,
	13,
	1,
	2,
	7,
	9,
	3,
	4,
	7,
	10,
	1,
	2,
	8,
	9,
	3,
	4,
	8,
	10,
	5,
	6,
	13 };

 real wastewater04m1_boundc_[1+46+42] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
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
		-40.,
		-40.,
		-40.,
		-40.,
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
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real wastewater04m1_x0comn_[23] = {
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
		0.,
		0.,
		0.,
		0. };

static real wastewater04m1_old_x[23];
static int wastewater04m1_xkind = -1;

 static int
wastewater04m1_xcheck(real *x)
{
	real *x1 = wastewater04m1_old_x, *xe = x + 23;
	errno = 0;
	if (wastewater04m1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wastewater04m1_xkind = 0;
	return 1;
	}
 real
wastewater04m1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wastewater04m1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[14];
	rv += x[15];
	;}

	if (wantfg & 2) {
	g[14] = 1.;
	g[15] = 1.;
	}

	return rv;
}

 void
wastewater04m1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (wastewater04m1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[8] * x[4];
	v[1] = x[10] * x[6];
	v[0] += v[1];
	v[1] = x[14] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 100.*x[18];
	t1 += 15.*x[20];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[8] * x[5];
	v[1] = x[10] * x[7];
	v[0] += v[1];
	v[1] = x[14] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 20.*x[18];
	t1 += 200.*x[20];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[9] * x[4];
	v[1] = x[11] * x[6];
	v[0] += v[1];
	v[1] = x[15] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 100.*x[19];
	t1 += 15.*x[21];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[9] * x[5];
	v[1] = x[11] * x[7];
	v[0] += v[1];
	v[1] = x[15] * x[3];
	v[2] = -v[1];
	v[0] += v[2];
	t1 = v[0] + 20.*x[19];
	t1 += 200.*x[21];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[12] * x[4];
	v[1] = x[13] * x[6];
	v[2] = v[0] + v[1];
	t1 = v[2] + 100.*x[16];
	t1 += 15.*x[17];
	t1 += -10.*x[22];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[12] * x[5];
	v[1] = x[13] * x[7];
	v[2] = v[0] + v[1];
	t1 = v[2] + 20.*x[16];
	t1 += 200.*x[17];
	t1 += -10.*x[22];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[16];
	t1 += -x[18];
	t1 += -x[19];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[17];
	t1 += -x[20];
	t1 += -x[21];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[8];
	t1 += -x[10];
	t1 += x[14];
	t1 += -x[18];
	t1 += -x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[9];
	t1 += -x[11];
	t1 += x[15];
	t1 += -x[19];
	t1 += -x[21];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += -x[12];
	t1 += x[14];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[10];
	t1 += -x[11];
	t1 += -x[13];
	t1 += x[15];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += -x[16];
	t1 += -x[17];
	t1 += x[22];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[0];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[1];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[2];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[3];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -0.05*x[0];
	t1 += x[4];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[1];
	t1 += x[5];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[2];
	t1 += x[6];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -0.024*x[3];
	t1 += x[7];
	c[20] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[14];
	J[52] = -x[0];
	J[20] = x[10];
	J[36] = x[6];
	J[12] = x[8];
	J[28] = x[4];
	J[68] = 100.;
	J[76] = 15.;

   /*** derivatives for constraint 2 ***/

	J[3] = -x[14];
	J[53] = -x[1];
	J[24] = x[10];
	J[37] = x[7];
	J[16] = x[8];
	J[29] = x[5];
	J[69] = 20.;
	J[77] = 200.;

   /*** derivatives for constraint 3 ***/

	J[6] = -x[15];
	J[56] = -x[2];
	J[21] = x[11];
	J[40] = x[6];
	J[13] = x[9];
	J[32] = x[4];
	J[72] = 100.;
	J[80] = 15.;

   /*** derivatives for constraint 4 ***/

	J[9] = -x[15];
	J[57] = -x[3];
	J[25] = x[11];
	J[41] = x[7];
	J[17] = x[9];
	J[33] = x[5];
	J[73] = 20.;
	J[81] = 200.;

   /*** derivatives for constraint 5 ***/

	J[22] = x[13];
	J[48] = x[6];
	J[14] = x[12];
	J[44] = x[4];
	J[60] = 100.;
	J[64] = 15.;
	J[84] = -10.;

   /*** derivatives for constraint 6 ***/

	J[26] = x[13];
	J[49] = x[7];
	J[18] = x[12];
	J[45] = x[5];
	J[61] = 20.;
	J[65] = 200.;
	J[85] = -10.;

   /*** derivatives for constraint 7 ***/

	J[62] = -1.;
	J[70] = -1.;
	J[74] = -1.;

   /*** derivatives for constraint 8 ***/

	J[66] = -1.;
	J[78] = -1.;
	J[82] = -1.;

   /*** derivatives for constraint 9 ***/

	J[30] = -1.;
	J[38] = -1.;
	J[54] = 1.;
	J[71] = -1.;
	J[79] = -1.;

   /*** derivatives for constraint 10 ***/

	J[34] = -1.;
	J[42] = -1.;
	J[58] = 1.;
	J[75] = -1.;
	J[83] = -1.;

   /*** derivatives for constraint 11 ***/

	J[31] = -1.;
	J[35] = -1.;
	J[46] = -1.;
	J[55] = 1.;

   /*** derivatives for constraint 12 ***/

	J[39] = -1.;
	J[43] = -1.;
	J[50] = -1.;
	J[59] = 1.;

   /*** derivatives for constraint 13 ***/

	J[47] = -1.;
	J[51] = -1.;
	J[63] = -1.;
	J[67] = -1.;
	J[86] = 1.;

   /*** derivatives for constraint 14 ***/

	J[1] = 1.;

   /*** derivatives for constraint 15 ***/

	J[4] = 1.;

   /*** derivatives for constraint 16 ***/

	J[7] = 1.;

   /*** derivatives for constraint 17 ***/

	J[10] = 1.;

   /*** derivatives for constraint 18 ***/

	J[2] = -0.05;
	J[15] = 1.;

   /*** derivatives for constraint 19 ***/

	J[5] = -1.;
	J[19] = 1.;

   /*** derivatives for constraint 20 ***/

	J[8] = -1.;
	J[23] = 1.;

   /*** derivatives for constraint 21 ***/

	J[11] = -0.024;
	J[27] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
