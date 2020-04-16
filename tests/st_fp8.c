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
 fint st_fp8_auxcom_[1] = { 0 /* nlc */ };
 fint st_fp8_funcom_[127] = {
	24 /* nvar */,
	1 /* nobj */,
	20 /* ncon */,
	96 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
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
	89,
	93,
	97,

	/* rownos */
	1,
	2,
	9,
	10,
	3,
	4,
	9,
	10,
	5,
	6,
	9,
	10,
	7,
	8,
	9,
	10,
	1,
	2,
	11,
	12,
	3,
	4,
	11,
	12,
	5,
	6,
	11,
	12,
	7,
	8,
	11,
	12,
	1,
	2,
	13,
	14,
	3,
	4,
	13,
	14,
	5,
	6,
	13,
	14,
	7,
	8,
	13,
	14,
	1,
	2,
	15,
	16,
	3,
	4,
	15,
	16,
	5,
	6,
	15,
	16,
	7,
	8,
	15,
	16,
	1,
	2,
	17,
	18,
	3,
	4,
	17,
	18,
	5,
	6,
	17,
	18,
	7,
	8,
	17,
	18,
	1,
	2,
	19,
	20,
	3,
	4,
	19,
	20,
	5,
	6,
	19,
	20,
	7,
	8,
	19,
	20 };

 real st_fp8_boundc_[1+48+40] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		-29.,
		-1.7e308,
		29.,
		-1.7e308,
		-41.,
		-1.7e308,
		41.,
		-1.7e308,
		-13.,
		-1.7e308,
		13.,
		-1.7e308,
		-21.,
		-1.7e308,
		21.,
		-1.7e308,
		-8.,
		-1.7e308,
		8.,
		-1.7e308,
		-24.,
		-1.7e308,
		24.,
		-1.7e308,
		-20.,
		-1.7e308,
		20.,
		-1.7e308,
		-24.,
		-1.7e308,
		24.,
		-1.7e308,
		-16.,
		-1.7e308,
		16.,
		-1.7e308,
		-12.,
		-1.7e308,
		12.};

 real st_fp8_x0comn_[24] = {
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
		0.,
		0. };

 static real st_fp8_pd[48];
static real st_fp8_old_x[24];
static int st_fp8_xkind = -1;

 static int
st_fp8_xcheck(real *x)
{
	real *x1 = st_fp8_old_x, *xe = x + 24;
	errno = 0;
	if (st_fp8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_fp8_xkind = 0;
	return 1;
	}
 real
st_fp8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_fp8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_fp8_pd[0] = x[0] * x[0];
	st_fp8_pd[1] = x[0] + x[0];
	v[0] = -7. * st_fp8_pd[0];
	st_fp8_pd[2] = x[1] * x[1];
	st_fp8_pd[3] = x[1] + x[1];
	v[1] = -4. * st_fp8_pd[2];
	v[0] += v[1];
	st_fp8_pd[4] = x[2] * x[2];
	st_fp8_pd[5] = x[2] + x[2];
	v[1] = -6. * st_fp8_pd[4];
	v[0] += v[1];
	st_fp8_pd[6] = x[3] * x[3];
	st_fp8_pd[7] = x[3] + x[3];
	v[1] = -8. * st_fp8_pd[6];
	v[0] += v[1];
	st_fp8_pd[8] = x[4] * x[4];
	st_fp8_pd[9] = x[4] + x[4];
	v[1] = -12. * st_fp8_pd[8];
	v[0] += v[1];
	st_fp8_pd[10] = x[5] * x[5];
	st_fp8_pd[11] = x[5] + x[5];
	v[1] = -9. * st_fp8_pd[10];
	v[0] += v[1];
	st_fp8_pd[12] = x[6] * x[6];
	st_fp8_pd[13] = x[6] + x[6];
	v[1] = -14. * st_fp8_pd[12];
	v[0] += v[1];
	st_fp8_pd[14] = x[7] * x[7];
	st_fp8_pd[15] = x[7] + x[7];
	v[1] = -7. * st_fp8_pd[14];
	v[0] += v[1];
	st_fp8_pd[16] = x[8] * x[8];
	st_fp8_pd[17] = x[8] + x[8];
	v[1] = -13. * st_fp8_pd[16];
	v[0] += v[1];
	st_fp8_pd[18] = x[9] * x[9];
	st_fp8_pd[19] = x[9] + x[9];
	v[1] = -12. * st_fp8_pd[18];
	v[0] += v[1];
	st_fp8_pd[20] = x[10] * x[10];
	st_fp8_pd[21] = x[10] + x[10];
	v[1] = -8. * st_fp8_pd[20];
	v[0] += v[1];
	st_fp8_pd[22] = x[11] * x[11];
	st_fp8_pd[23] = x[11] + x[11];
	v[1] = -4. * st_fp8_pd[22];
	v[0] += v[1];
	st_fp8_pd[24] = x[12] * x[12];
	st_fp8_pd[25] = x[12] + x[12];
	v[1] = -7. * st_fp8_pd[24];
	v[0] += v[1];
	st_fp8_pd[26] = x[13] * x[13];
	st_fp8_pd[27] = x[13] + x[13];
	v[1] = -9. * st_fp8_pd[26];
	v[0] += v[1];
	st_fp8_pd[28] = x[14] * x[14];
	st_fp8_pd[29] = x[14] + x[14];
	v[1] = -16. * st_fp8_pd[28];
	v[0] += v[1];
	st_fp8_pd[30] = x[15] * x[15];
	st_fp8_pd[31] = x[15] + x[15];
	v[1] = -8. * st_fp8_pd[30];
	v[0] += v[1];
	st_fp8_pd[32] = x[16] * x[16];
	st_fp8_pd[33] = x[16] + x[16];
	v[1] = -4. * st_fp8_pd[32];
	v[0] += v[1];
	st_fp8_pd[34] = x[17] * x[17];
	st_fp8_pd[35] = x[17] + x[17];
	v[1] = -10. * st_fp8_pd[34];
	v[0] += v[1];
	st_fp8_pd[36] = x[18] * x[18];
	st_fp8_pd[37] = x[18] + x[18];
	v[1] = -21. * st_fp8_pd[36];
	v[0] += v[1];
	st_fp8_pd[38] = x[19] * x[19];
	st_fp8_pd[39] = x[19] + x[19];
	v[1] = -13. * st_fp8_pd[38];
	v[0] += v[1];
	st_fp8_pd[40] = x[20] * x[20];
	st_fp8_pd[41] = x[20] + x[20];
	v[1] = -17. * st_fp8_pd[40];
	v[0] += v[1];
	st_fp8_pd[42] = x[21] * x[21];
	st_fp8_pd[43] = x[21] + x[21];
	v[1] = -9. * st_fp8_pd[42];
	v[0] += v[1];
	st_fp8_pd[44] = x[22] * x[22];
	st_fp8_pd[45] = x[22] + x[22];
	v[1] = -8. * st_fp8_pd[44];
	v[0] += v[1];
	st_fp8_pd[46] = x[23] * x[23];
	st_fp8_pd[47] = x[23] + x[23];
	v[1] = -4. * st_fp8_pd[46];
	v[0] += v[1];
	rv = v[0] + 300.*x[0];
	rv += 270.*x[1];
	rv += 460.*x[2];
	rv += 800.*x[3];
	rv += 740.*x[4];
	rv += 600.*x[5];
	rv += 540.*x[6];
	rv += 380.*x[7];
	rv += 300.*x[8];
	rv += 490.*x[9];
	rv += 380.*x[10];
	rv += 760.*x[11];
	rv += 430.*x[12];
	rv += 250.*x[13];
	rv += 390.*x[14];
	rv += 600.*x[15];
	rv += 210.*x[16];
	rv += 830.*x[17];
	rv += 470.*x[18];
	rv += 680.*x[19];
	rv += 360.*x[20];
	rv += 290.*x[21];
	rv += 400.*x[22];
	rv += 310.*x[23];
	;}

	if (wantfg & 2) {
	g[23] = -4.*st_fp8_pd[47] + 310.;
	g[22] = -8.*st_fp8_pd[45] + 400.;
	g[21] = -9.*st_fp8_pd[43] + 290.;
	g[20] = -17.*st_fp8_pd[41] + 360.;
	g[19] = -13.*st_fp8_pd[39] + 680.;
	g[18] = -21.*st_fp8_pd[37] + 470.;
	g[17] = -10.*st_fp8_pd[35] + 830.;
	g[16] = -4.*st_fp8_pd[33] + 210.;
	g[15] = -8.*st_fp8_pd[31] + 600.;
	g[14] = -16.*st_fp8_pd[29] + 390.;
	g[13] = -9.*st_fp8_pd[27] + 250.;
	g[12] = -7.*st_fp8_pd[25] + 430.;
	g[11] = -4.*st_fp8_pd[23] + 760.;
	g[10] = -8.*st_fp8_pd[21] + 380.;
	g[9] = -12.*st_fp8_pd[19] + 490.;
	g[8] = -13.*st_fp8_pd[17] + 300.;
	g[7] = -7.*st_fp8_pd[15] + 380.;
	g[6] = -14.*st_fp8_pd[13] + 540.;
	g[5] = -9.*st_fp8_pd[11] + 600.;
	g[4] = -12.*st_fp8_pd[9] + 740.;
	g[3] = -8.*st_fp8_pd[7] + 800.;
	g[2] = -6.*st_fp8_pd[5] + 460.;
	g[1] = -4.*st_fp8_pd[3] + 270.;
	g[0] = -7.*st_fp8_pd[1] + 300.;
	}

	return rv;
}

 void
st_fp8_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_fp8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += -x[4];
	t1 += -x[8];
	t1 += -x[12];
	t1 += -x[16];
	t1 += -x[20];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[4];
	t1 += x[8];
	t1 += x[12];
	t1 += x[16];
	t1 += x[20];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[1];
	t1 += -x[5];
	t1 += -x[9];
	t1 += -x[13];
	t1 += -x[17];
	t1 += -x[21];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[1];
	t1 += x[5];
	t1 += x[9];
	t1 += x[13];
	t1 += x[17];
	t1 += x[21];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[2];
	t1 += -x[6];
	t1 += -x[10];
	t1 += -x[14];
	t1 += -x[18];
	t1 += -x[22];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[2];
	t1 += x[6];
	t1 += x[10];
	t1 += x[14];
	t1 += x[18];
	t1 += x[22];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[3];
	t1 += -x[7];
	t1 += -x[11];
	t1 += -x[15];
	t1 += -x[19];
	t1 += -x[23];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[3];
	t1 += x[7];
	t1 += x[11];
	t1 += x[15];
	t1 += x[19];
	t1 += x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[3];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -x[7];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[11];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += -x[14];
	t1 += -x[15];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[20];
	t1 += -x[21];
	t1 += -x[22];
	t1 += -x[23];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	c[19] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[16] = -1.;
	J[32] = -1.;
	J[48] = -1.;
	J[64] = -1.;
	J[80] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 1.;
	J[17] = 1.;
	J[33] = 1.;
	J[49] = 1.;
	J[65] = 1.;
	J[81] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = -1.;
	J[20] = -1.;
	J[36] = -1.;
	J[52] = -1.;
	J[68] = -1.;
	J[84] = -1.;

   /*** derivatives for constraint 4 ***/

	J[5] = 1.;
	J[21] = 1.;
	J[37] = 1.;
	J[53] = 1.;
	J[69] = 1.;
	J[85] = 1.;

   /*** derivatives for constraint 5 ***/

	J[8] = -1.;
	J[24] = -1.;
	J[40] = -1.;
	J[56] = -1.;
	J[72] = -1.;
	J[88] = -1.;

   /*** derivatives for constraint 6 ***/

	J[9] = 1.;
	J[25] = 1.;
	J[41] = 1.;
	J[57] = 1.;
	J[73] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 7 ***/

	J[12] = -1.;
	J[28] = -1.;
	J[44] = -1.;
	J[60] = -1.;
	J[76] = -1.;
	J[92] = -1.;

   /*** derivatives for constraint 8 ***/

	J[13] = 1.;
	J[29] = 1.;
	J[45] = 1.;
	J[61] = 1.;
	J[77] = 1.;
	J[93] = 1.;

   /*** derivatives for constraint 9 ***/

	J[2] = -1.;
	J[6] = -1.;
	J[10] = -1.;
	J[14] = -1.;

   /*** derivatives for constraint 10 ***/

	J[3] = 1.;
	J[7] = 1.;
	J[11] = 1.;
	J[15] = 1.;

   /*** derivatives for constraint 11 ***/

	J[18] = -1.;
	J[22] = -1.;
	J[26] = -1.;
	J[30] = -1.;

   /*** derivatives for constraint 12 ***/

	J[19] = 1.;
	J[23] = 1.;
	J[27] = 1.;
	J[31] = 1.;

   /*** derivatives for constraint 13 ***/

	J[34] = -1.;
	J[38] = -1.;
	J[42] = -1.;
	J[46] = -1.;

   /*** derivatives for constraint 14 ***/

	J[35] = 1.;
	J[39] = 1.;
	J[43] = 1.;
	J[47] = 1.;

   /*** derivatives for constraint 15 ***/

	J[50] = -1.;
	J[54] = -1.;
	J[58] = -1.;
	J[62] = -1.;

   /*** derivatives for constraint 16 ***/

	J[51] = 1.;
	J[55] = 1.;
	J[59] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 17 ***/

	J[66] = -1.;
	J[70] = -1.;
	J[74] = -1.;
	J[78] = -1.;

   /*** derivatives for constraint 18 ***/

	J[67] = 1.;
	J[71] = 1.;
	J[75] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 19 ***/

	J[82] = -1.;
	J[86] = -1.;
	J[90] = -1.;
	J[94] = -1.;

   /*** derivatives for constraint 20 ***/

	J[83] = 1.;
	J[87] = 1.;
	J[91] = 1.;
	J[95] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
