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
 fint ex8_4_1_auxcom_[1] = { 10 /* nlc */ };
 fint ex8_4_1_funcom_[69] = {
	22 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	40 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	41,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10 };

 real ex8_4_1_boundc_[1+44+20] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-0.5,
		0.5,
		0.4,
		1.4,
		1.3,
		2.3,
		2.1,
		3.1,
		2.8,
		3.8,
		3.9,
		4.9,
		4.7,
		5.7,
		5.6,
		6.6,
		6.,
		7.,
		6.9,
		7.9,
		-2.,
		2.,
		5.4,
		6.4,
		4.9,
		5.9,
		3.9,
		4.9,
		4.1,
		5.1,
		3.,
		4.,
		3.2,
		4.2,
		2.3,
		3.3,
		2.3,
		3.3,
		1.9,
		2.9,
		1.,
		2.,
		0.,
		10.,
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
		0.};

 real ex8_4_1_x0comn_[22] = {
		-0.328252868,
		0.950375356,
		1.592212117,
		2.449830504,
		2.867113723,
		4.898117627,
		5.691133039,
		5.730692483,
		6.159517864,
		7.568928609,
		-0.594234528,
		6.243266708,
		5.201137904,
		4.124052867,
		4.956270347,
		3.500210669,
		3.778733378,
		3.062250467,
		2.939718759,
		2.150080533,
		1.435356381,
		3.59700266 };

 static real ex8_4_1_pd[20];
static real ex8_4_1_old_x[22];
static int ex8_4_1_xkind = -1;

 static int
ex8_4_1_xcheck(real *x)
{
	real *x1 = ex8_4_1_old_x, *xe = x + 22;
	errno = 0;
	if (ex8_4_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_4_1_xkind = 0;
	return 1;
	}
 real
ex8_4_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (ex8_4_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	ex8_4_1_pd[0] = x[0] + x[0];
	v[1] = x[11] + -5.9;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[1] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[1] + -0.9;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[2] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[12] + -5.4;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[3] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[2] + -1.8;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[4] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[13] + -4.4;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[5] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[3] + -2.6;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[6] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[14] + -4.6;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[7] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[4] + -3.3;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[8] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[15] + -3.5;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[9] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[5] + -4.4;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[10] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[16] + -3.7;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[11] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[6] + -5.2;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[12] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[17] + -2.8;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[13] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[7] + -6.1;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[14] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[18] + -2.8;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[15] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[8] + -6.5;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[16] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[19] + -2.4;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[17] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[9] + -7.4;
	v[1] = v[2] * v[2];
	ex8_4_1_pd[18] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[20] + -1.5;
	v[2] = v[1] * v[1];
	ex8_4_1_pd[19] = v[1] + v[1];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[20] = ex8_4_1_pd[19];
	g[9] = ex8_4_1_pd[18];
	g[19] = ex8_4_1_pd[17];
	g[8] = ex8_4_1_pd[16];
	g[18] = ex8_4_1_pd[15];
	g[7] = ex8_4_1_pd[14];
	g[17] = ex8_4_1_pd[13];
	g[6] = ex8_4_1_pd[12];
	g[16] = ex8_4_1_pd[11];
	g[5] = ex8_4_1_pd[10];
	g[15] = ex8_4_1_pd[9];
	g[4] = ex8_4_1_pd[8];
	g[14] = ex8_4_1_pd[7];
	g[3] = ex8_4_1_pd[6];
	g[13] = ex8_4_1_pd[5];
	g[2] = ex8_4_1_pd[4];
	g[12] = ex8_4_1_pd[3];
	g[1] = ex8_4_1_pd[2];
	g[11] = ex8_4_1_pd[1];
	g[0] = ex8_4_1_pd[0];
	}

	return v[0];
}

 void
ex8_4_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (ex8_4_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[10] * x[0];
	t1 = v[0] + -x[11];
	t1 += x[21];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[10] * x[1];
	t1 = v[0] + -x[12];
	t1 += x[21];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[10] * x[2];
	t1 = v[0] + -x[13];
	t1 += x[21];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[10] * x[3];
	t1 = v[0] + -x[14];
	t1 += x[21];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[10] * x[4];
	t1 = v[0] + -x[15];
	t1 += x[21];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[10] * x[5];
	t1 = v[0] + -x[16];
	t1 += x[21];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[10] * x[6];
	t1 = v[0] + -x[17];
	t1 += x[21];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[10] * x[7];
	t1 = v[0] + -x[18];
	t1 += x[21];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[10] * x[8];
	t1 = v[0] + -x[19];
	t1 += x[21];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[10] * x[9];
	t1 = v[0] + -x[20];
	t1 += x[21];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = x[10];
	J[10] = x[0];
	J[20] = -1.;
	J[30] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = x[10];
	J[11] = x[1];
	J[21] = -1.;
	J[31] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = x[10];
	J[12] = x[2];
	J[22] = -1.;
	J[32] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = x[10];
	J[13] = x[3];
	J[23] = -1.;
	J[33] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = x[10];
	J[14] = x[4];
	J[24] = -1.;
	J[34] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = x[10];
	J[15] = x[5];
	J[25] = -1.;
	J[35] = 1.;

   /*** derivatives for constraint 7 ***/

	J[6] = x[10];
	J[16] = x[6];
	J[26] = -1.;
	J[36] = 1.;

   /*** derivatives for constraint 8 ***/

	J[7] = x[10];
	J[17] = x[7];
	J[27] = -1.;
	J[37] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = x[10];
	J[18] = x[8];
	J[28] = -1.;
	J[38] = 1.;

   /*** derivatives for constraint 10 ***/

	J[9] = x[10];
	J[19] = x[9];
	J[29] = -1.;
	J[39] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
