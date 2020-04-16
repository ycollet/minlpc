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
 fint ex8_4_2_auxcom_[1] = { 10 /* nlc */ };
 fint ex8_4_2_funcom_[91] = {
	24 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	60 /* nzc */,
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
	31,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	61,

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

 real ex8_4_2_boundc_[1+48+20] /* Infinity, variable bounds, constraint bounds */ = {
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
		-2.,
		2.,
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

 real ex8_4_2_x0comn_[24] = {
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
		-1.47403364,
		-1.399592848,
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

 static real ex8_4_2_pd[60];
static real ex8_4_2_old_x[24];
static int ex8_4_2_xkind = -1;

 static int
ex8_4_2_xcheck(real *x)
{
	real *x1 = ex8_4_2_old_x, *xe = x + 24;
	errno = 0;
	if (ex8_4_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_4_2_xkind = 0;
	return 1;
	}
 real
ex8_4_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (ex8_4_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[0];
	ex8_4_2_pd[40] = x[0] + x[0];
	v[1] = x[13] + -5.9;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[41] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[1] + -0.9;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[42] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[14] + -5.4;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[43] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[2] + -1.8;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[44] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[15] + -4.4;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[45] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[3] + -2.6;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[46] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[16] + -4.6;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[47] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[4] + -3.3;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[48] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[17] + -3.5;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[49] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[5] + -4.4;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[50] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[18] + -3.7;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[51] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[6] + -5.2;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[52] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[19] + -2.8;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[53] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[7] + -6.1;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[54] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[20] + -2.8;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[55] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[8] + -6.5;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[56] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[21] + -2.4;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[57] = v[1] + v[1];
	v[0] += v[2];
	v[2] = x[9] + -7.4;
	v[1] = v[2] * v[2];
	ex8_4_2_pd[58] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[22] + -1.5;
	v[2] = v[1] * v[1];
	ex8_4_2_pd[59] = v[1] + v[1];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[22] = ex8_4_2_pd[59];
	g[9] = ex8_4_2_pd[58];
	g[21] = ex8_4_2_pd[57];
	g[8] = ex8_4_2_pd[56];
	g[20] = ex8_4_2_pd[55];
	g[7] = ex8_4_2_pd[54];
	g[19] = ex8_4_2_pd[53];
	g[6] = ex8_4_2_pd[52];
	g[18] = ex8_4_2_pd[51];
	g[5] = ex8_4_2_pd[50];
	g[17] = ex8_4_2_pd[49];
	g[4] = ex8_4_2_pd[48];
	g[16] = ex8_4_2_pd[47];
	g[3] = ex8_4_2_pd[46];
	g[15] = ex8_4_2_pd[45];
	g[2] = ex8_4_2_pd[44];
	g[14] = ex8_4_2_pd[43];
	g[1] = ex8_4_2_pd[42];
	g[13] = ex8_4_2_pd[41];
	g[0] = ex8_4_2_pd[40];
	}

	return v[0];
}

 void
ex8_4_2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (ex8_4_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[10] * x[0];
	ex8_4_2_pd[0] = x[0] * x[0];
	ex8_4_2_pd[1] = x[0] + x[0];
	v[1] = ex8_4_2_pd[0] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[3] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ex8_4_2_pd[2] = 3.*(x[0]*x[0]);
	} else {
	ex8_4_2_pd[2] = 0.;
	}
	v[2] = ex8_4_2_pd[3] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[13];
	t1 += x[23];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[10] * x[1];
	ex8_4_2_pd[4] = x[1] * x[1];
	ex8_4_2_pd[5] = x[1] + x[1];
	v[1] = ex8_4_2_pd[4] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[7] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	ex8_4_2_pd[6] = 3.*(x[1]*x[1]);
	} else {
	ex8_4_2_pd[6] = 0.;
	}
	v[2] = ex8_4_2_pd[7] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[14];
	t1 += x[23];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[10] * x[2];
	ex8_4_2_pd[8] = x[2] * x[2];
	ex8_4_2_pd[9] = x[2] + x[2];
	v[1] = ex8_4_2_pd[8] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[11] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	ex8_4_2_pd[10] = 3.*(x[2]*x[2]);
	} else {
	ex8_4_2_pd[10] = 0.;
	}
	v[2] = ex8_4_2_pd[11] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[15];
	t1 += x[23];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[10] * x[3];
	ex8_4_2_pd[12] = x[3] * x[3];
	ex8_4_2_pd[13] = x[3] + x[3];
	v[1] = ex8_4_2_pd[12] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[15] = pow(x[3], 3.);
	if (errno) in_trouble2("pow",x[3],3.);
	if (x[3] != 0.) {
	ex8_4_2_pd[14] = 3.*(x[3]*x[3]);
	} else {
	ex8_4_2_pd[14] = 0.;
	}
	v[2] = ex8_4_2_pd[15] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[16];
	t1 += x[23];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[10] * x[4];
	ex8_4_2_pd[16] = x[4] * x[4];
	ex8_4_2_pd[17] = x[4] + x[4];
	v[1] = ex8_4_2_pd[16] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[19] = pow(x[4], 3.);
	if (errno) in_trouble2("pow",x[4],3.);
	if (x[4] != 0.) {
	ex8_4_2_pd[18] = 3.*(x[4]*x[4]);
	} else {
	ex8_4_2_pd[18] = 0.;
	}
	v[2] = ex8_4_2_pd[19] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[17];
	t1 += x[23];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[10] * x[5];
	ex8_4_2_pd[20] = x[5] * x[5];
	ex8_4_2_pd[21] = x[5] + x[5];
	v[1] = ex8_4_2_pd[20] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[23] = pow(x[5], 3.);
	if (errno) in_trouble2("pow",x[5],3.);
	if (x[5] != 0.) {
	ex8_4_2_pd[22] = 3.*(x[5]*x[5]);
	} else {
	ex8_4_2_pd[22] = 0.;
	}
	v[2] = ex8_4_2_pd[23] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[18];
	t1 += x[23];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[10] * x[6];
	ex8_4_2_pd[24] = x[6] * x[6];
	ex8_4_2_pd[25] = x[6] + x[6];
	v[1] = ex8_4_2_pd[24] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[27] = pow(x[6], 3.);
	if (errno) in_trouble2("pow",x[6],3.);
	if (x[6] != 0.) {
	ex8_4_2_pd[26] = 3.*(x[6]*x[6]);
	} else {
	ex8_4_2_pd[26] = 0.;
	}
	v[2] = ex8_4_2_pd[27] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[19];
	t1 += x[23];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[10] * x[7];
	ex8_4_2_pd[28] = x[7] * x[7];
	ex8_4_2_pd[29] = x[7] + x[7];
	v[1] = ex8_4_2_pd[28] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[31] = pow(x[7], 3.);
	if (errno) in_trouble2("pow",x[7],3.);
	if (x[7] != 0.) {
	ex8_4_2_pd[30] = 3.*(x[7]*x[7]);
	} else {
	ex8_4_2_pd[30] = 0.;
	}
	v[2] = ex8_4_2_pd[31] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[20];
	t1 += x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[10] * x[8];
	ex8_4_2_pd[32] = x[8] * x[8];
	ex8_4_2_pd[33] = x[8] + x[8];
	v[1] = ex8_4_2_pd[32] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[35] = pow(x[8], 3.);
	if (errno) in_trouble2("pow",x[8],3.);
	if (x[8] != 0.) {
	ex8_4_2_pd[34] = 3.*(x[8]*x[8]);
	} else {
	ex8_4_2_pd[34] = 0.;
	}
	v[2] = ex8_4_2_pd[35] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[21];
	t1 += x[23];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[10] * x[9];
	ex8_4_2_pd[36] = x[9] * x[9];
	ex8_4_2_pd[37] = x[9] + x[9];
	v[1] = ex8_4_2_pd[36] * x[11];
	v[0] += v[1];
	ex8_4_2_pd[39] = pow(x[9], 3.);
	if (errno) in_trouble2("pow",x[9],3.);
	if (x[9] != 0.) {
	ex8_4_2_pd[38] = 3.*(x[9]*x[9]);
	} else {
	ex8_4_2_pd[38] = 0.;
	}
	v[2] = ex8_4_2_pd[39] * x[12];
	v[0] += v[2];
	t1 = v[0] + -x[22];
	t1 += x[23];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[30] = ex8_4_2_pd[3];
	J[0] = x[12]*ex8_4_2_pd[2];
	J[20] = ex8_4_2_pd[0];
	J[0] += x[11]*ex8_4_2_pd[1];
	J[0] += x[10];
	J[10] = x[0];
	J[40] = -1.;
	J[50] = 1.;

   /*** derivatives for constraint 2 ***/

	J[31] = ex8_4_2_pd[7];
	J[1] = x[12]*ex8_4_2_pd[6];
	J[21] = ex8_4_2_pd[4];
	J[1] += x[11]*ex8_4_2_pd[5];
	J[1] += x[10];
	J[11] = x[1];
	J[41] = -1.;
	J[51] = 1.;

   /*** derivatives for constraint 3 ***/

	J[32] = ex8_4_2_pd[11];
	J[2] = x[12]*ex8_4_2_pd[10];
	J[22] = ex8_4_2_pd[8];
	J[2] += x[11]*ex8_4_2_pd[9];
	J[2] += x[10];
	J[12] = x[2];
	J[42] = -1.;
	J[52] = 1.;

   /*** derivatives for constraint 4 ***/

	J[33] = ex8_4_2_pd[15];
	J[3] = x[12]*ex8_4_2_pd[14];
	J[23] = ex8_4_2_pd[12];
	J[3] += x[11]*ex8_4_2_pd[13];
	J[3] += x[10];
	J[13] = x[3];
	J[43] = -1.;
	J[53] = 1.;

   /*** derivatives for constraint 5 ***/

	J[34] = ex8_4_2_pd[19];
	J[4] = x[12]*ex8_4_2_pd[18];
	J[24] = ex8_4_2_pd[16];
	J[4] += x[11]*ex8_4_2_pd[17];
	J[4] += x[10];
	J[14] = x[4];
	J[44] = -1.;
	J[54] = 1.;

   /*** derivatives for constraint 6 ***/

	J[35] = ex8_4_2_pd[23];
	J[5] = x[12]*ex8_4_2_pd[22];
	J[25] = ex8_4_2_pd[20];
	J[5] += x[11]*ex8_4_2_pd[21];
	J[5] += x[10];
	J[15] = x[5];
	J[45] = -1.;
	J[55] = 1.;

   /*** derivatives for constraint 7 ***/

	J[36] = ex8_4_2_pd[27];
	J[6] = x[12]*ex8_4_2_pd[26];
	J[26] = ex8_4_2_pd[24];
	J[6] += x[11]*ex8_4_2_pd[25];
	J[6] += x[10];
	J[16] = x[6];
	J[46] = -1.;
	J[56] = 1.;

   /*** derivatives for constraint 8 ***/

	J[37] = ex8_4_2_pd[31];
	J[7] = x[12]*ex8_4_2_pd[30];
	J[27] = ex8_4_2_pd[28];
	J[7] += x[11]*ex8_4_2_pd[29];
	J[7] += x[10];
	J[17] = x[7];
	J[47] = -1.;
	J[57] = 1.;

   /*** derivatives for constraint 9 ***/

	J[38] = ex8_4_2_pd[35];
	J[8] = x[12]*ex8_4_2_pd[34];
	J[28] = ex8_4_2_pd[32];
	J[8] += x[11]*ex8_4_2_pd[33];
	J[8] += x[10];
	J[18] = x[8];
	J[48] = -1.;
	J[58] = 1.;

   /*** derivatives for constraint 10 ***/

	J[39] = ex8_4_2_pd[39];
	J[9] = x[12]*ex8_4_2_pd[38];
	J[29] = ex8_4_2_pd[36];
	J[9] += x[11]*ex8_4_2_pd[37];
	J[9] += x[10];
	J[19] = x[9];
	J[49] = -1.;
	J[59] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
