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
 fint st_test8_auxcom_[1] = { 0 /* nlc */ };
 fint st_test8_funcom_[127] = {
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
	5,
	11,
	15,
	2,
	5,
	12,
	15,
	3,
	5,
	13,
	15,
	4,
	5,
	14,
	15,
	1,
	6,
	11,
	16,
	2,
	6,
	12,
	16,
	3,
	6,
	13,
	16,
	4,
	6,
	14,
	16,
	1,
	7,
	11,
	17,
	2,
	7,
	12,
	17,
	3,
	7,
	13,
	17,
	4,
	7,
	14,
	17,
	1,
	8,
	11,
	18,
	2,
	8,
	12,
	18,
	3,
	8,
	13,
	18,
	4,
	8,
	14,
	18,
	1,
	9,
	11,
	19,
	2,
	9,
	12,
	19,
	3,
	9,
	13,
	19,
	4,
	9,
	14,
	19,
	1,
	10,
	11,
	20,
	2,
	10,
	12,
	20,
	3,
	10,
	13,
	20,
	4,
	10,
	14,
	20 };

 real st_test8_boundc_[1+48+40] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		-1.7e308,
		-29.,
		-1.7e308,
		-41.,
		-1.7e308,
		-13.,
		-1.7e308,
		-21.,
		-1.7e308,
		-8.,
		-1.7e308,
		-24.,
		-1.7e308,
		-20.,
		-1.7e308,
		-24.,
		-1.7e308,
		-16.,
		-1.7e308,
		-12.,
		-1.7e308,
		29.,
		-1.7e308,
		41.,
		-1.7e308,
		13.,
		-1.7e308,
		21.,
		-1.7e308,
		8.,
		-1.7e308,
		24.,
		-1.7e308,
		20.,
		-1.7e308,
		24.,
		-1.7e308,
		16.,
		-1.7e308,
		12.};

 real st_test8_x0comn_[24] = {
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

 static real st_test8_pd[24];
static real st_test8_old_x[24];
static int st_test8_xkind = -1;

 static int
st_test8_xcheck(real *x)
{
	real *x1 = st_test8_old_x, *xe = x + 24;
	errno = 0;
	if (st_test8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_test8_xkind = 0;
	return 1;
	}
 real
st_test8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_test8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_test8_pd[0] = 7. * x[0];
	v[0] = st_test8_pd[0] * x[0];
	st_test8_pd[1] = 4. * x[1];
	v[1] = st_test8_pd[1] * x[1];
	v[0] += v[1];
	st_test8_pd[2] = 6. * x[2];
	v[1] = st_test8_pd[2] * x[2];
	v[0] += v[1];
	st_test8_pd[3] = 8. * x[3];
	v[1] = st_test8_pd[3] * x[3];
	v[0] += v[1];
	st_test8_pd[4] = 12. * x[4];
	v[1] = st_test8_pd[4] * x[4];
	v[0] += v[1];
	st_test8_pd[5] = 9. * x[5];
	v[1] = st_test8_pd[5] * x[5];
	v[0] += v[1];
	st_test8_pd[6] = 14. * x[6];
	v[1] = st_test8_pd[6] * x[6];
	v[0] += v[1];
	st_test8_pd[7] = 7. * x[7];
	v[1] = st_test8_pd[7] * x[7];
	v[0] += v[1];
	st_test8_pd[8] = 13. * x[8];
	v[1] = st_test8_pd[8] * x[8];
	v[0] += v[1];
	st_test8_pd[9] = 12. * x[9];
	v[1] = st_test8_pd[9] * x[9];
	v[0] += v[1];
	st_test8_pd[10] = 8. * x[10];
	v[1] = st_test8_pd[10] * x[10];
	v[0] += v[1];
	st_test8_pd[11] = 4. * x[11];
	v[1] = st_test8_pd[11] * x[11];
	v[0] += v[1];
	st_test8_pd[12] = 7. * x[12];
	v[1] = st_test8_pd[12] * x[12];
	v[0] += v[1];
	st_test8_pd[13] = 9. * x[13];
	v[1] = st_test8_pd[13] * x[13];
	v[0] += v[1];
	st_test8_pd[14] = 16. * x[14];
	v[1] = st_test8_pd[14] * x[14];
	v[0] += v[1];
	st_test8_pd[15] = 8. * x[15];
	v[1] = st_test8_pd[15] * x[15];
	v[0] += v[1];
	st_test8_pd[16] = 4. * x[16];
	v[1] = st_test8_pd[16] * x[16];
	v[0] += v[1];
	st_test8_pd[17] = 10. * x[17];
	v[1] = st_test8_pd[17] * x[17];
	v[0] += v[1];
	st_test8_pd[18] = 21. * x[18];
	v[1] = st_test8_pd[18] * x[18];
	v[0] += v[1];
	st_test8_pd[19] = 13. * x[19];
	v[1] = st_test8_pd[19] * x[19];
	v[0] += v[1];
	st_test8_pd[20] = 17. * x[20];
	v[1] = st_test8_pd[20] * x[20];
	v[0] += v[1];
	st_test8_pd[21] = 9. * x[21];
	v[1] = st_test8_pd[21] * x[21];
	v[0] += v[1];
	st_test8_pd[22] = 8. * x[22];
	v[1] = st_test8_pd[22] * x[22];
	v[0] += v[1];
	st_test8_pd[23] = 4. * x[23];
	v[1] = st_test8_pd[23] * x[23];
	v[0] += v[1];
	rv = v[0] + 300.*x[0];
	rv += 270.*x[1];
	rv += -460.*x[2];
	rv += 800.*x[3];
	rv += 740.*x[4];
	rv += -600.*x[5];
	rv += 540.*x[6];
	rv += 380.*x[7];
	rv += 300.*x[8];
	rv += -490.*x[9];
	rv += 380.*x[10];
	rv += 760.*x[11];
	rv += -430.*x[12];
	rv += 250.*x[13];
	rv += 390.*x[14];
	rv += 600.*x[15];
	rv += -210.*x[16];
	rv += 830.*x[17];
	rv += 470.*x[18];
	rv += -680.*x[19];
	rv += 360.*x[20];
	rv += 290.*x[21];
	rv += -400.*x[22];
	rv += 310.*x[23];
	;}

	if (wantfg & 2) {
	g[23] = st_test8_pd[23] + 310.;
	g[23] += x[23]*4.;
	g[22] = st_test8_pd[22] + -400.;
	g[22] += x[22]*8.;
	g[21] = st_test8_pd[21] + 290.;
	g[21] += x[21]*9.;
	g[20] = st_test8_pd[20] + 360.;
	g[20] += x[20]*17.;
	g[19] = st_test8_pd[19] + -680.;
	g[19] += x[19]*13.;
	g[18] = st_test8_pd[18] + 470.;
	g[18] += x[18]*21.;
	g[17] = st_test8_pd[17] + 830.;
	g[17] += x[17]*10.;
	g[16] = st_test8_pd[16] + -210.;
	g[16] += x[16]*4.;
	g[15] = st_test8_pd[15] + 600.;
	g[15] += x[15]*8.;
	g[14] = st_test8_pd[14] + 390.;
	g[14] += x[14]*16.;
	g[13] = st_test8_pd[13] + 250.;
	g[13] += x[13]*9.;
	g[12] = st_test8_pd[12] + -430.;
	g[12] += x[12]*7.;
	g[11] = st_test8_pd[11] + 760.;
	g[11] += x[11]*4.;
	g[10] = st_test8_pd[10] + 380.;
	g[10] += x[10]*8.;
	g[9] = st_test8_pd[9] + -490.;
	g[9] += x[9]*12.;
	g[8] = st_test8_pd[8] + 300.;
	g[8] += x[8]*13.;
	g[7] = st_test8_pd[7] + 380.;
	g[7] += x[7]*7.;
	g[6] = st_test8_pd[6] + 540.;
	g[6] += x[6]*14.;
	g[5] = st_test8_pd[5] + -600.;
	g[5] += x[5]*9.;
	g[4] = st_test8_pd[4] + 740.;
	g[4] += x[4]*12.;
	g[3] = st_test8_pd[3] + 800.;
	g[3] += x[3]*8.;
	g[2] = st_test8_pd[2] + -460.;
	g[2] += x[2]*6.;
	g[1] = st_test8_pd[1] + 270.;
	g[1] += x[1]*4.;
	g[0] = st_test8_pd[0] + 300.;
	g[0] += x[0]*7.;
	}

	return rv;
}

 void
st_test8_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_test8_xcheck(x) && wantfg == 2)
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

	t1 = -x[1];
	t1 += -x[5];
	t1 += -x[9];
	t1 += -x[13];
	t1 += -x[17];
	t1 += -x[21];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[2];
	t1 += -x[6];
	t1 += -x[10];
	t1 += -x[14];
	t1 += -x[18];
	t1 += -x[22];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += -x[7];
	t1 += -x[11];
	t1 += -x[15];
	t1 += -x[19];
	t1 += -x[23];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -x[7];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[11];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += -x[14];
	t1 += -x[15];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[20];
	t1 += -x[21];
	t1 += -x[22];
	t1 += -x[23];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[0];
	t1 += x[4];
	t1 += x[8];
	t1 += x[12];
	t1 += x[16];
	t1 += x[20];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[1];
	t1 += x[5];
	t1 += x[9];
	t1 += x[13];
	t1 += x[17];
	t1 += x[21];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[2];
	t1 += x[6];
	t1 += x[10];
	t1 += x[14];
	t1 += x[18];
	t1 += x[22];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[3];
	t1 += x[7];
	t1 += x[11];
	t1 += x[15];
	t1 += x[19];
	t1 += x[23];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
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

	J[4] = -1.;
	J[20] = -1.;
	J[36] = -1.;
	J[52] = -1.;
	J[68] = -1.;
	J[84] = -1.;

   /*** derivatives for constraint 3 ***/

	J[8] = -1.;
	J[24] = -1.;
	J[40] = -1.;
	J[56] = -1.;
	J[72] = -1.;
	J[88] = -1.;

   /*** derivatives for constraint 4 ***/

	J[12] = -1.;
	J[28] = -1.;
	J[44] = -1.;
	J[60] = -1.;
	J[76] = -1.;
	J[92] = -1.;

   /*** derivatives for constraint 5 ***/

	J[1] = -1.;
	J[5] = -1.;
	J[9] = -1.;
	J[13] = -1.;

   /*** derivatives for constraint 6 ***/

	J[17] = -1.;
	J[21] = -1.;
	J[25] = -1.;
	J[29] = -1.;

   /*** derivatives for constraint 7 ***/

	J[33] = -1.;
	J[37] = -1.;
	J[41] = -1.;
	J[45] = -1.;

   /*** derivatives for constraint 8 ***/

	J[49] = -1.;
	J[53] = -1.;
	J[57] = -1.;
	J[61] = -1.;

   /*** derivatives for constraint 9 ***/

	J[65] = -1.;
	J[69] = -1.;
	J[73] = -1.;
	J[77] = -1.;

   /*** derivatives for constraint 10 ***/

	J[81] = -1.;
	J[85] = -1.;
	J[89] = -1.;
	J[93] = -1.;

   /*** derivatives for constraint 11 ***/

	J[2] = 1.;
	J[18] = 1.;
	J[34] = 1.;
	J[50] = 1.;
	J[66] = 1.;
	J[82] = 1.;

   /*** derivatives for constraint 12 ***/

	J[6] = 1.;
	J[22] = 1.;
	J[38] = 1.;
	J[54] = 1.;
	J[70] = 1.;
	J[86] = 1.;

   /*** derivatives for constraint 13 ***/

	J[10] = 1.;
	J[26] = 1.;
	J[42] = 1.;
	J[58] = 1.;
	J[74] = 1.;
	J[90] = 1.;

   /*** derivatives for constraint 14 ***/

	J[14] = 1.;
	J[30] = 1.;
	J[46] = 1.;
	J[62] = 1.;
	J[78] = 1.;
	J[94] = 1.;

   /*** derivatives for constraint 15 ***/

	J[3] = 1.;
	J[7] = 1.;
	J[11] = 1.;
	J[15] = 1.;

   /*** derivatives for constraint 16 ***/

	J[19] = 1.;
	J[23] = 1.;
	J[27] = 1.;
	J[31] = 1.;

   /*** derivatives for constraint 17 ***/

	J[35] = 1.;
	J[39] = 1.;
	J[43] = 1.;
	J[47] = 1.;

   /*** derivatives for constraint 18 ***/

	J[51] = 1.;
	J[55] = 1.;
	J[59] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 19 ***/

	J[67] = 1.;
	J[71] = 1.;
	J[75] = 1.;
	J[79] = 1.;

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
