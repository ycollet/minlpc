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
 fint tln4_auxcom_[1] = { 4 /* nlc */ };
 fint tln4_funcom_[127] = {
	24 /* nvar */,
	1 /* nobj */,
	24 /* ncon */,
	96 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
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
	89,
	91,
	93,
	95,
	97,

	/* rownos */
	1,
	2,
	3,
	4,
	17,
	21,
	1,
	2,
	3,
	4,
	18,
	22,
	1,
	2,
	3,
	4,
	19,
	23,
	1,
	2,
	3,
	4,
	20,
	24,
	1,
	5,
	9,
	13,
	1,
	6,
	10,
	14,
	1,
	7,
	11,
	15,
	1,
	8,
	12,
	16,
	2,
	5,
	9,
	13,
	2,
	6,
	10,
	14,
	2,
	7,
	11,
	15,
	2,
	8,
	12,
	16,
	3,
	5,
	9,
	13,
	3,
	6,
	10,
	14,
	3,
	7,
	11,
	15,
	3,
	8,
	12,
	16,
	4,
	5,
	9,
	13,
	4,
	6,
	10,
	14,
	4,
	7,
	11,
	15,
	4,
	8,
	12,
	16,
	17,
	21,
	18,
	22,
	19,
	23,
	20,
	24 };

 real tln4_boundc_[1+48+48] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		12.,
		0.,
		12.,
		0.,
		12.,
		0.,
		12.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		-8.,
		-1.7e308,
		-7.,
		-1.7e308,
		-12.,
		-1.7e308,
		-11.,
		-1.7e308,
		1900.,
		-1.7e308,
		1900.,
		-1.7e308,
		1900.,
		-1.7e308,
		1900.,
		-1.7e308,
		-1700.,
		-1.7e308,
		-1700.,
		-1.7e308,
		-1700.,
		-1.7e308,
		-1700.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
		-1.7e308,
		5.,
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
		0.,
		-1.7e308,
		0.};

 real tln4_x0comn_[24] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0. };

static real tln4_old_x[24];
static int tln4_xkind = -1;

 static int
tln4_xcheck(real *x)
{
	real *x1 = tln4_old_x, *xe = x + 24;
	errno = 0;
	if (tln4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tln4_xkind = 0;
	return 1;
	}
 real
tln4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (tln4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += x[2];
	rv += x[3];
	rv += 0.1*x[20];
	rv += 0.2*x[21];
	rv += 0.3*x[22];
	rv += 0.4*x[23];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[2] = 1.;
	g[3] = 1.;
	g[20] = 0.1;
	g[21] = 0.2;
	g[22] = 0.3;
	g[23] = 0.4;
	}

	return rv;
}

 void
tln4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (tln4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[4];
	v[1] = x[1] * x[5];
	v[0] += v[1];
	v[1] = x[2] * x[6];
	v[0] += v[1];
	v[1] = x[3] * x[7];
	v[0] += v[1];
	v[1] = -v[0];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = x[0] * x[8];
	v[1] = x[1] * x[9];
	v[0] += v[1];
	v[1] = x[2] * x[10];
	v[0] += v[1];
	v[1] = x[3] * x[11];
	v[0] += v[1];
	v[1] = -v[0];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = x[0] * x[12];
	v[1] = x[1] * x[13];
	v[0] += v[1];
	v[1] = x[2] * x[14];
	v[0] += v[1];
	v[1] = x[3] * x[15];
	v[0] += v[1];
	v[1] = -v[0];
	c[2] = v[1];

  /***  constraint 4  ***/

	v[0] = x[0] * x[16];
	v[1] = x[1] * x[17];
	v[0] += v[1];
	v[1] = x[2] * x[18];
	v[0] += v[1];
	v[1] = x[3] * x[19];
	v[0] += v[1];
	v[1] = -v[0];
	c[3] = v[1];

  /***  constraint 5  ***/

	t1 = 330.*x[4];
	t1 += 360.*x[8];
	t1 += 385.*x[12];
	t1 += 415.*x[16];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 330.*x[5];
	t1 += 360.*x[9];
	t1 += 385.*x[13];
	t1 += 415.*x[17];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 330.*x[6];
	t1 += 360.*x[10];
	t1 += 385.*x[14];
	t1 += 415.*x[18];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 330.*x[7];
	t1 += 360.*x[11];
	t1 += 385.*x[15];
	t1 += 415.*x[19];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -330.*x[4];
	t1 += -360.*x[8];
	t1 += -385.*x[12];
	t1 += -415.*x[16];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -330.*x[5];
	t1 += -360.*x[9];
	t1 += -385.*x[13];
	t1 += -415.*x[17];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -330.*x[6];
	t1 += -360.*x[10];
	t1 += -385.*x[14];
	t1 += -415.*x[18];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -330.*x[7];
	t1 += -360.*x[11];
	t1 += -385.*x[15];
	t1 += -415.*x[19];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[4];
	t1 += x[8];
	t1 += x[12];
	t1 += x[16];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[5];
	t1 += x[9];
	t1 += x[13];
	t1 += x[17];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[6];
	t1 += x[10];
	t1 += x[14];
	t1 += x[18];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[7];
	t1 += x[11];
	t1 += x[15];
	t1 += x[19];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[0];
	t1 += x[20];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[1];
	t1 += x[21];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[2];
	t1 += x[22];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[3];
	t1 += x[23];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[0];
	t1 += -12.*x[20];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[1];
	t1 += -12.*x[21];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[2];
	t1 += -12.*x[22];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[3];
	t1 += -12.*x[23];
	c[23] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[36] = -x[3];
	J[18] = -x[7];
	J[32] = -x[2];
	J[12] = -x[6];
	J[28] = -x[1];
	J[6] = -x[5];
	J[24] = -x[0];
	J[0] = -x[4];

   /*** derivatives for constraint 2 ***/

	J[52] = -x[3];
	J[19] = -x[11];
	J[48] = -x[2];
	J[13] = -x[10];
	J[44] = -x[1];
	J[7] = -x[9];
	J[40] = -x[0];
	J[1] = -x[8];

   /*** derivatives for constraint 3 ***/

	J[68] = -x[3];
	J[20] = -x[15];
	J[64] = -x[2];
	J[14] = -x[14];
	J[60] = -x[1];
	J[8] = -x[13];
	J[56] = -x[0];
	J[2] = -x[12];

   /*** derivatives for constraint 4 ***/

	J[84] = -x[3];
	J[21] = -x[19];
	J[80] = -x[2];
	J[15] = -x[18];
	J[76] = -x[1];
	J[9] = -x[17];
	J[72] = -x[0];
	J[3] = -x[16];

   /*** derivatives for constraint 5 ***/

	J[25] = 330.;
	J[41] = 360.;
	J[57] = 385.;
	J[73] = 415.;

   /*** derivatives for constraint 6 ***/

	J[29] = 330.;
	J[45] = 360.;
	J[61] = 385.;
	J[77] = 415.;

   /*** derivatives for constraint 7 ***/

	J[33] = 330.;
	J[49] = 360.;
	J[65] = 385.;
	J[81] = 415.;

   /*** derivatives for constraint 8 ***/

	J[37] = 330.;
	J[53] = 360.;
	J[69] = 385.;
	J[85] = 415.;

   /*** derivatives for constraint 9 ***/

	J[26] = -330.;
	J[42] = -360.;
	J[58] = -385.;
	J[74] = -415.;

   /*** derivatives for constraint 10 ***/

	J[30] = -330.;
	J[46] = -360.;
	J[62] = -385.;
	J[78] = -415.;

   /*** derivatives for constraint 11 ***/

	J[34] = -330.;
	J[50] = -360.;
	J[66] = -385.;
	J[82] = -415.;

   /*** derivatives for constraint 12 ***/

	J[38] = -330.;
	J[54] = -360.;
	J[70] = -385.;
	J[86] = -415.;

   /*** derivatives for constraint 13 ***/

	J[27] = 1.;
	J[43] = 1.;
	J[59] = 1.;
	J[75] = 1.;

   /*** derivatives for constraint 14 ***/

	J[31] = 1.;
	J[47] = 1.;
	J[63] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 15 ***/

	J[35] = 1.;
	J[51] = 1.;
	J[67] = 1.;
	J[83] = 1.;

   /*** derivatives for constraint 16 ***/

	J[39] = 1.;
	J[55] = 1.;
	J[71] = 1.;
	J[87] = 1.;

   /*** derivatives for constraint 17 ***/

	J[4] = -1.;
	J[88] = 1.;

   /*** derivatives for constraint 18 ***/

	J[10] = -1.;
	J[90] = 1.;

   /*** derivatives for constraint 19 ***/

	J[16] = -1.;
	J[92] = 1.;

   /*** derivatives for constraint 20 ***/

	J[22] = -1.;
	J[94] = 1.;

   /*** derivatives for constraint 21 ***/

	J[5] = 1.;
	J[89] = -12.;

   /*** derivatives for constraint 22 ***/

	J[11] = 1.;
	J[91] = -12.;

   /*** derivatives for constraint 23 ***/

	J[17] = 1.;
	J[93] = -12.;

   /*** derivatives for constraint 24 ***/

	J[23] = 1.;
	J[95] = -12.;
	}
}
#ifdef __cplusplus
	}
#endif
