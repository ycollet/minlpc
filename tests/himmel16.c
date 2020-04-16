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
 fint himmel16_auxcom_[1] = { 21 /* nlc */ };
 fint himmel16_funcom_[115] = {
	18 /* nvar */,
	1 /* nobj */,
	21 /* ncon */,
	90 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	22,
	29,
	36,
	43,
	50,
	57,
	64,
	71,
	78,
	85,
	86,
	87,
	88,
	89,
	90,
	91,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	16,
	21,
	1,
	6,
	7,
	8,
	9,
	16,
	17,
	2,
	6,
	10,
	11,
	12,
	17,
	18,
	3,
	7,
	10,
	13,
	14,
	18,
	19,
	4,
	8,
	11,
	13,
	15,
	19,
	20,
	5,
	9,
	12,
	14,
	15,
	20,
	21,
	1,
	2,
	3,
	4,
	5,
	16,
	21,
	1,
	6,
	7,
	8,
	9,
	16,
	17,
	2,
	6,
	10,
	11,
	12,
	17,
	18,
	3,
	7,
	10,
	13,
	14,
	18,
	19,
	4,
	8,
	11,
	13,
	15,
	19,
	20,
	5,
	9,
	12,
	14,
	15,
	20,
	21,
	16,
	17,
	18,
	19,
	20,
	21 };

 real himmel16_boundc_[1+36+42] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		0.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
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
		0.,
		0.,
		0.,
		0.};

 real himmel16_x0comn_[18] = {
		0.,
		0.5,
		0.5,
		0.5,
		0.,
		0.,
		0.,
		0.,
		0.4,
		0.8,
		0.8,
		0.4,
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real himmel16_pd[42];
static real himmel16_old_x[18];
static int himmel16_xkind = -1;

 static int
himmel16_xcheck(real *x)
{
	real *x1 = himmel16_old_x, *xe = x + 18;
	errno = 0;
	if (himmel16_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	himmel16_xkind = 0;
	return 1;
	}
 real
himmel16_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (himmel16_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[12];
	rv += -x[13];
	rv += -x[14];
	rv += -x[15];
	rv += -x[16];
	rv += -x[17];
	;}

	if (wantfg & 2) {
	g[12] = -1.;
	g[13] = -1.;
	g[14] = -1.;
	g[15] = -1.;
	g[16] = -1.;
	g[17] = -1.;
	}

	return rv;
}

 void
himmel16_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (himmel16_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] - x[1];
	v[1] = v[0] * v[0];
	himmel16_pd[0] = v[0] + v[0];
	v[0] = x[6] - x[7];
	v[2] = v[0] * v[0];
	himmel16_pd[1] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[0] - x[2];
	v[1] = v[0] * v[0];
	himmel16_pd[2] = v[0] + v[0];
	v[0] = x[6] - x[8];
	v[2] = v[0] * v[0];
	himmel16_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[0] - x[3];
	v[1] = v[0] * v[0];
	himmel16_pd[4] = v[0] + v[0];
	v[0] = x[6] - x[9];
	v[2] = v[0] * v[0];
	himmel16_pd[5] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[0] - x[4];
	v[1] = v[0] * v[0];
	himmel16_pd[6] = v[0] + v[0];
	v[0] = x[6] - x[10];
	v[2] = v[0] * v[0];
	himmel16_pd[7] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[0] - x[5];
	v[1] = v[0] * v[0];
	himmel16_pd[8] = v[0] + v[0];
	v[0] = x[6] - x[11];
	v[2] = v[0] * v[0];
	himmel16_pd[9] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[1] - x[2];
	v[1] = v[0] * v[0];
	himmel16_pd[10] = v[0] + v[0];
	v[0] = x[7] - x[8];
	v[2] = v[0] * v[0];
	himmel16_pd[11] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[1] - x[3];
	v[1] = v[0] * v[0];
	himmel16_pd[12] = v[0] + v[0];
	v[0] = x[7] - x[9];
	v[2] = v[0] * v[0];
	himmel16_pd[13] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[1] - x[4];
	v[1] = v[0] * v[0];
	himmel16_pd[14] = v[0] + v[0];
	v[0] = x[7] - x[10];
	v[2] = v[0] * v[0];
	himmel16_pd[15] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[1] - x[5];
	v[1] = v[0] * v[0];
	himmel16_pd[16] = v[0] + v[0];
	v[0] = x[7] - x[11];
	v[2] = v[0] * v[0];
	himmel16_pd[17] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[2] - x[3];
	v[1] = v[0] * v[0];
	himmel16_pd[18] = v[0] + v[0];
	v[0] = x[8] - x[9];
	v[2] = v[0] * v[0];
	himmel16_pd[19] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[2] - x[4];
	v[1] = v[0] * v[0];
	himmel16_pd[20] = v[0] + v[0];
	v[0] = x[8] - x[10];
	v[2] = v[0] * v[0];
	himmel16_pd[21] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[2] - x[5];
	v[1] = v[0] * v[0];
	himmel16_pd[22] = v[0] + v[0];
	v[0] = x[8] - x[11];
	v[2] = v[0] * v[0];
	himmel16_pd[23] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[11] = v[0];

  /***  constraint 13  ***/

	v[0] = x[3] - x[4];
	v[1] = v[0] * v[0];
	himmel16_pd[24] = v[0] + v[0];
	v[0] = x[9] - x[10];
	v[2] = v[0] * v[0];
	himmel16_pd[25] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[12] = v[0];

  /***  constraint 14  ***/

	v[0] = x[3] - x[5];
	v[1] = v[0] * v[0];
	himmel16_pd[26] = v[0] + v[0];
	v[0] = x[9] - x[11];
	v[2] = v[0] * v[0];
	himmel16_pd[27] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[4] - x[5];
	v[1] = v[0] * v[0];
	himmel16_pd[28] = v[0] + v[0];
	v[0] = x[10] - x[11];
	v[2] = v[0] * v[0];
	himmel16_pd[29] = v[0] + v[0];
	v[0] = v[1] + v[2];
	c[14] = v[0];

  /***  constraint 16  ***/

	himmel16_pd[30] = x[0] * x[7];
	v[0] = -0.5 * himmel16_pd[30];
	himmel16_pd[31] = x[6] * x[1];
	v[1] = 0.5 * himmel16_pd[31];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[12];
	c[15] = t1;

  /***  constraint 17  ***/

	himmel16_pd[32] = x[1] * x[8];
	v[0] = -0.5 * himmel16_pd[32];
	himmel16_pd[33] = x[7] * x[2];
	v[1] = 0.5 * himmel16_pd[33];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[13];
	c[16] = t1;

  /***  constraint 18  ***/

	himmel16_pd[34] = x[2] * x[9];
	v[0] = -0.5 * himmel16_pd[34];
	himmel16_pd[35] = x[8] * x[3];
	v[1] = 0.5 * himmel16_pd[35];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[14];
	c[17] = t1;

  /***  constraint 19  ***/

	himmel16_pd[36] = x[3] * x[10];
	v[0] = -0.5 * himmel16_pd[36];
	himmel16_pd[37] = x[9] * x[4];
	v[1] = 0.5 * himmel16_pd[37];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[15];
	c[18] = t1;

  /***  constraint 20  ***/

	himmel16_pd[38] = x[4] * x[11];
	v[0] = -0.5 * himmel16_pd[38];
	himmel16_pd[39] = x[10] * x[5];
	v[1] = 0.5 * himmel16_pd[39];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[16];
	c[19] = t1;

  /***  constraint 21  ***/

	himmel16_pd[40] = x[5] * x[6];
	v[0] = -0.5 * himmel16_pd[40];
	himmel16_pd[41] = x[11] * x[0];
	v[1] = 0.5 * himmel16_pd[41];
	v[2] = v[0] + v[1];
	t1 = v[2] + x[17];
	c[20] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[49] = -himmel16_pd[1];
	J[42] = himmel16_pd[1];
	J[7] = -himmel16_pd[0];
	J[0] = himmel16_pd[0];

   /*** derivatives for constraint 2 ***/

	J[56] = -himmel16_pd[3];
	J[43] = himmel16_pd[3];
	J[14] = -himmel16_pd[2];
	J[1] = himmel16_pd[2];

   /*** derivatives for constraint 3 ***/

	J[63] = -himmel16_pd[5];
	J[44] = himmel16_pd[5];
	J[21] = -himmel16_pd[4];
	J[2] = himmel16_pd[4];

   /*** derivatives for constraint 4 ***/

	J[70] = -himmel16_pd[7];
	J[45] = himmel16_pd[7];
	J[28] = -himmel16_pd[6];
	J[3] = himmel16_pd[6];

   /*** derivatives for constraint 5 ***/

	J[77] = -himmel16_pd[9];
	J[46] = himmel16_pd[9];
	J[35] = -himmel16_pd[8];
	J[4] = himmel16_pd[8];

   /*** derivatives for constraint 6 ***/

	J[57] = -himmel16_pd[11];
	J[50] = himmel16_pd[11];
	J[15] = -himmel16_pd[10];
	J[8] = himmel16_pd[10];

   /*** derivatives for constraint 7 ***/

	J[64] = -himmel16_pd[13];
	J[51] = himmel16_pd[13];
	J[22] = -himmel16_pd[12];
	J[9] = himmel16_pd[12];

   /*** derivatives for constraint 8 ***/

	J[71] = -himmel16_pd[15];
	J[52] = himmel16_pd[15];
	J[29] = -himmel16_pd[14];
	J[10] = himmel16_pd[14];

   /*** derivatives for constraint 9 ***/

	J[78] = -himmel16_pd[17];
	J[53] = himmel16_pd[17];
	J[36] = -himmel16_pd[16];
	J[11] = himmel16_pd[16];

   /*** derivatives for constraint 10 ***/

	J[65] = -himmel16_pd[19];
	J[58] = himmel16_pd[19];
	J[23] = -himmel16_pd[18];
	J[16] = himmel16_pd[18];

   /*** derivatives for constraint 11 ***/

	J[72] = -himmel16_pd[21];
	J[59] = himmel16_pd[21];
	J[30] = -himmel16_pd[20];
	J[17] = himmel16_pd[20];

   /*** derivatives for constraint 12 ***/

	J[79] = -himmel16_pd[23];
	J[60] = himmel16_pd[23];
	J[37] = -himmel16_pd[22];
	J[18] = himmel16_pd[22];

   /*** derivatives for constraint 13 ***/

	J[73] = -himmel16_pd[25];
	J[66] = himmel16_pd[25];
	J[31] = -himmel16_pd[24];
	J[24] = himmel16_pd[24];

   /*** derivatives for constraint 14 ***/

	J[80] = -himmel16_pd[27];
	J[67] = himmel16_pd[27];
	J[38] = -himmel16_pd[26];
	J[25] = himmel16_pd[26];

   /*** derivatives for constraint 15 ***/

	J[81] = -himmel16_pd[29];
	J[74] = himmel16_pd[29];
	J[39] = -himmel16_pd[28];
	J[32] = himmel16_pd[28];

   /*** derivatives for constraint 16 ***/

	J[12] = 0.5*x[6];
	J[47] = 0.5*x[1];
	J[54] = -0.5*x[0];
	J[5] = -0.5*x[7];
	J[84] = 1.;

   /*** derivatives for constraint 17 ***/

	J[19] = 0.5*x[7];
	J[55] = 0.5*x[2];
	J[61] = -0.5*x[1];
	J[13] = -0.5*x[8];
	J[85] = 1.;

   /*** derivatives for constraint 18 ***/

	J[26] = 0.5*x[8];
	J[62] = 0.5*x[3];
	J[68] = -0.5*x[2];
	J[20] = -0.5*x[9];
	J[86] = 1.;

   /*** derivatives for constraint 19 ***/

	J[33] = 0.5*x[9];
	J[69] = 0.5*x[4];
	J[75] = -0.5*x[3];
	J[27] = -0.5*x[10];
	J[87] = 1.;

   /*** derivatives for constraint 20 ***/

	J[40] = 0.5*x[10];
	J[76] = 0.5*x[5];
	J[82] = -0.5*x[4];
	J[34] = -0.5*x[11];
	J[88] = 1.;

   /*** derivatives for constraint 21 ***/

	J[6] = 0.5*x[11];
	J[83] = 0.5*x[0];
	J[48] = -0.5*x[5];
	J[41] = -0.5*x[6];
	J[89] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
