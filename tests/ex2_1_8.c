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
 fint ex2_1_8_auxcom_[1] = { 0 /* nlc */ };
 fint ex2_1_8_funcom_[79] = {
	24 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	48 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	11,
	13,
	15,
	17,
	19,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	39,
	41,
	43,
	45,
	47,
	49,

	/* rownos */
	1,
	7,
	1,
	8,
	1,
	9,
	1,
	10,
	2,
	7,
	2,
	8,
	2,
	9,
	2,
	10,
	3,
	7,
	3,
	8,
	3,
	9,
	3,
	10,
	4,
	7,
	4,
	8,
	4,
	9,
	4,
	10,
	5,
	7,
	5,
	8,
	5,
	9,
	5,
	10,
	6,
	7,
	6,
	8,
	6,
	9,
	6,
	10 };

 real ex2_1_8_boundc_[1+48+20] /* Infinity, variable bounds, constraint bounds */ = {
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
		8.,
		8.,
		24.,
		24.,
		20.,
		20.,
		24.,
		24.,
		16.,
		16.,
		12.,
		12.,
		29.,
		29.,
		41.,
		41.,
		13.,
		13.,
		21.,
		21.};

 real ex2_1_8_x0comn_[24] = {
		6.,
		2.,
		0.,
		0.,
		0.,
		3.,
		0.,
		21.,
		20.,
		0.,
		0.,
		0.,
		24.,
		0.,
		0.,
		0.,
		3.,
		0.,
		13.,
		0.,
		0.,
		12.,
		0.,
		0. };

 static real ex2_1_8_pd[24];
static real ex2_1_8_old_x[24];
static int ex2_1_8_xkind = -1;

 static int
ex2_1_8_xcheck(real *x)
{
	real *x1 = ex2_1_8_old_x, *xe = x + 24;
	errno = 0;
	if (ex2_1_8_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex2_1_8_xkind = 0;
	return 1;
	}
 real
ex2_1_8_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex2_1_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex2_1_8_pd[0] = 7. * x[0];
	v[0] = ex2_1_8_pd[0] * x[0];
	ex2_1_8_pd[1] = 4. * x[1];
	v[1] = ex2_1_8_pd[1] * x[1];
	v[0] += v[1];
	ex2_1_8_pd[2] = 6. * x[2];
	v[1] = ex2_1_8_pd[2] * x[2];
	v[0] += v[1];
	ex2_1_8_pd[3] = 8. * x[3];
	v[1] = ex2_1_8_pd[3] * x[3];
	v[0] += v[1];
	ex2_1_8_pd[4] = 12. * x[4];
	v[1] = ex2_1_8_pd[4] * x[4];
	v[0] += v[1];
	ex2_1_8_pd[5] = 9. * x[5];
	v[1] = ex2_1_8_pd[5] * x[5];
	v[0] += v[1];
	ex2_1_8_pd[6] = 14. * x[6];
	v[1] = ex2_1_8_pd[6] * x[6];
	v[0] += v[1];
	ex2_1_8_pd[7] = 7. * x[7];
	v[1] = ex2_1_8_pd[7] * x[7];
	v[0] += v[1];
	ex2_1_8_pd[8] = 13. * x[8];
	v[1] = ex2_1_8_pd[8] * x[8];
	v[0] += v[1];
	ex2_1_8_pd[9] = 12. * x[9];
	v[1] = ex2_1_8_pd[9] * x[9];
	v[0] += v[1];
	ex2_1_8_pd[10] = 8. * x[10];
	v[1] = ex2_1_8_pd[10] * x[10];
	v[0] += v[1];
	ex2_1_8_pd[11] = 4. * x[11];
	v[1] = ex2_1_8_pd[11] * x[11];
	v[0] += v[1];
	ex2_1_8_pd[12] = 7. * x[12];
	v[1] = ex2_1_8_pd[12] * x[12];
	v[0] += v[1];
	ex2_1_8_pd[13] = 9. * x[13];
	v[1] = ex2_1_8_pd[13] * x[13];
	v[0] += v[1];
	ex2_1_8_pd[14] = 16. * x[14];
	v[1] = ex2_1_8_pd[14] * x[14];
	v[0] += v[1];
	ex2_1_8_pd[15] = 8. * x[15];
	v[1] = ex2_1_8_pd[15] * x[15];
	v[0] += v[1];
	ex2_1_8_pd[16] = 4. * x[16];
	v[1] = ex2_1_8_pd[16] * x[16];
	v[0] += v[1];
	ex2_1_8_pd[17] = 10. * x[17];
	v[1] = ex2_1_8_pd[17] * x[17];
	v[0] += v[1];
	ex2_1_8_pd[18] = 21. * x[18];
	v[1] = ex2_1_8_pd[18] * x[18];
	v[0] += v[1];
	ex2_1_8_pd[19] = 13. * x[19];
	v[1] = ex2_1_8_pd[19] * x[19];
	v[0] += v[1];
	ex2_1_8_pd[20] = 17. * x[20];
	v[1] = ex2_1_8_pd[20] * x[20];
	v[0] += v[1];
	ex2_1_8_pd[21] = 9. * x[21];
	v[1] = ex2_1_8_pd[21] * x[21];
	v[0] += v[1];
	ex2_1_8_pd[22] = 8. * x[22];
	v[1] = ex2_1_8_pd[22] * x[22];
	v[0] += v[1];
	ex2_1_8_pd[23] = 4. * x[23];
	v[1] = ex2_1_8_pd[23] * x[23];
	v[0] += v[1];
	v[1] = -v[0];
	rv = v[1] + 300.*x[0];
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
	g[23] = -ex2_1_8_pd[23] + 310.;
	g[23] -= x[23]*4.;
	g[22] = -ex2_1_8_pd[22] + 400.;
	g[22] -= x[22]*8.;
	g[21] = -ex2_1_8_pd[21] + 290.;
	g[21] -= x[21]*9.;
	g[20] = -ex2_1_8_pd[20] + 360.;
	g[20] -= x[20]*17.;
	g[19] = -ex2_1_8_pd[19] + 680.;
	g[19] -= x[19]*13.;
	g[18] = -ex2_1_8_pd[18] + 470.;
	g[18] -= x[18]*21.;
	g[17] = -ex2_1_8_pd[17] + 830.;
	g[17] -= x[17]*10.;
	g[16] = -ex2_1_8_pd[16] + 210.;
	g[16] -= x[16]*4.;
	g[15] = -ex2_1_8_pd[15] + 600.;
	g[15] -= x[15]*8.;
	g[14] = -ex2_1_8_pd[14] + 390.;
	g[14] -= x[14]*16.;
	g[13] = -ex2_1_8_pd[13] + 250.;
	g[13] -= x[13]*9.;
	g[12] = -ex2_1_8_pd[12] + 430.;
	g[12] -= x[12]*7.;
	g[11] = -ex2_1_8_pd[11] + 760.;
	g[11] -= x[11]*4.;
	g[10] = -ex2_1_8_pd[10] + 380.;
	g[10] -= x[10]*8.;
	g[9] = -ex2_1_8_pd[9] + 490.;
	g[9] -= x[9]*12.;
	g[8] = -ex2_1_8_pd[8] + 300.;
	g[8] -= x[8]*13.;
	g[7] = -ex2_1_8_pd[7] + 380.;
	g[7] -= x[7]*7.;
	g[6] = -ex2_1_8_pd[6] + 540.;
	g[6] -= x[6]*14.;
	g[5] = -ex2_1_8_pd[5] + 600.;
	g[5] -= x[5]*9.;
	g[4] = -ex2_1_8_pd[4] + 740.;
	g[4] -= x[4]*12.;
	g[3] = -ex2_1_8_pd[3] + 800.;
	g[3] -= x[3]*8.;
	g[2] = -ex2_1_8_pd[2] + 460.;
	g[2] -= x[2]*6.;
	g[1] = -ex2_1_8_pd[1] + 270.;
	g[1] -= x[1]*4.;
	g[0] = -ex2_1_8_pd[0] + 300.;
	g[0] -= x[0]*7.;
	}

	return rv;
}

 void
ex2_1_8_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex2_1_8_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += x[4];
	t1 += x[8];
	t1 += x[12];
	t1 += x[16];
	t1 += x[20];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[1];
	t1 += x[5];
	t1 += x[9];
	t1 += x[13];
	t1 += x[17];
	t1 += x[21];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[2];
	t1 += x[6];
	t1 += x[10];
	t1 += x[14];
	t1 += x[18];
	t1 += x[22];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[3];
	t1 += x[7];
	t1 += x[11];
	t1 += x[15];
	t1 += x[19];
	t1 += x[23];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[2] = 1.;
	J[4] = 1.;
	J[6] = 1.;

   /*** derivatives for constraint 2 ***/

	J[8] = 1.;
	J[10] = 1.;
	J[12] = 1.;
	J[14] = 1.;

   /*** derivatives for constraint 3 ***/

	J[16] = 1.;
	J[18] = 1.;
	J[20] = 1.;
	J[22] = 1.;

   /*** derivatives for constraint 4 ***/

	J[24] = 1.;
	J[26] = 1.;
	J[28] = 1.;
	J[30] = 1.;

   /*** derivatives for constraint 5 ***/

	J[32] = 1.;
	J[34] = 1.;
	J[36] = 1.;
	J[38] = 1.;

   /*** derivatives for constraint 6 ***/

	J[40] = 1.;
	J[42] = 1.;
	J[44] = 1.;
	J[46] = 1.;

   /*** derivatives for constraint 7 ***/

	J[1] = 1.;
	J[9] = 1.;
	J[17] = 1.;
	J[25] = 1.;
	J[33] = 1.;
	J[41] = 1.;

   /*** derivatives for constraint 8 ***/

	J[3] = 1.;
	J[11] = 1.;
	J[19] = 1.;
	J[27] = 1.;
	J[35] = 1.;
	J[43] = 1.;

   /*** derivatives for constraint 9 ***/

	J[5] = 1.;
	J[13] = 1.;
	J[21] = 1.;
	J[29] = 1.;
	J[37] = 1.;
	J[45] = 1.;

   /*** derivatives for constraint 10 ***/

	J[7] = 1.;
	J[15] = 1.;
	J[23] = 1.;
	J[31] = 1.;
	J[39] = 1.;
	J[47] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
