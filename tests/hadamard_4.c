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
 fint hadamard_4_auxcom_[1] = { 1 /* nlc */ };
 fint hadamard_4_funcom_[41] = {
	17 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	17 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

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
	12,
	13,
	14,
	15,
	16,
	17,
	18,

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real hadamard_4_boundc_[1+34+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		1.7e308,
		0.,
		1.7e308};

 real hadamard_4_x0comn_[17] = {
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

 static real hadamard_4_pd[48];
static real hadamard_4_old_x[17];
static int hadamard_4_xkind = -1;

 static int
hadamard_4_xcheck(real *x)
{
	real *x1 = hadamard_4_old_x, *xe = x + 17;
	errno = 0;
	if (hadamard_4_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hadamard_4_xkind = 0;
	return 1;
	}
 real
hadamard_4_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (hadamard_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[16];
	;}

	if (wantfg & 2) {
	g[16] = 1.;
	}

	return rv;
}

 void
hadamard_4_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[24];
	real t1;
	fint wantfg = *needfg;
	if (hadamard_4_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	hadamard_4_pd[0] = x[0] * x[5];
	hadamard_4_pd[1] = hadamard_4_pd[0] * x[10];
	v[0] = hadamard_4_pd[1] * x[15];
	hadamard_4_pd[2] = x[0] * x[5];
	hadamard_4_pd[3] = hadamard_4_pd[2] * x[11];
	v[1] = hadamard_4_pd[3] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_4_pd[4] = x[0] * x[7];
	hadamard_4_pd[5] = hadamard_4_pd[4] * x[9];
	v[2] = hadamard_4_pd[5] * x[14];
	v[0] += v[2];
	hadamard_4_pd[6] = x[3] * x[4];
	hadamard_4_pd[7] = hadamard_4_pd[6] * x[9];
	v[2] = hadamard_4_pd[7] * x[14];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_4_pd[8] = x[3] * x[4];
	hadamard_4_pd[9] = hadamard_4_pd[8] * x[10];
	v[1] = hadamard_4_pd[9] * x[13];
	v[0] += v[1];
	hadamard_4_pd[10] = x[0] * x[7];
	hadamard_4_pd[11] = hadamard_4_pd[10] * x[10];
	v[1] = hadamard_4_pd[11] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_4_pd[12] = x[0] * x[6];
	hadamard_4_pd[13] = hadamard_4_pd[12] * x[11];
	v[2] = hadamard_4_pd[13] * x[13];
	v[0] += v[2];
	hadamard_4_pd[14] = x[0] * x[6];
	hadamard_4_pd[15] = hadamard_4_pd[14] * x[9];
	v[2] = hadamard_4_pd[15] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_4_pd[16] = x[2] * x[4];
	hadamard_4_pd[17] = hadamard_4_pd[16] * x[9];
	v[1] = hadamard_4_pd[17] * x[15];
	v[0] += v[1];
	hadamard_4_pd[18] = x[2] * x[4];
	hadamard_4_pd[19] = hadamard_4_pd[18] * x[11];
	v[1] = hadamard_4_pd[19] * x[13];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_4_pd[20] = x[2] * x[7];
	hadamard_4_pd[21] = hadamard_4_pd[20] * x[8];
	v[2] = hadamard_4_pd[21] * x[13];
	v[0] += v[2];
	hadamard_4_pd[22] = x[3] * x[6];
	hadamard_4_pd[23] = hadamard_4_pd[22] * x[8];
	v[2] = hadamard_4_pd[23] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_4_pd[24] = x[3] * x[6];
	hadamard_4_pd[25] = hadamard_4_pd[24] * x[9];
	v[1] = hadamard_4_pd[25] * x[12];
	v[0] += v[1];
	hadamard_4_pd[26] = x[2] * x[7];
	hadamard_4_pd[27] = hadamard_4_pd[26] * x[9];
	v[1] = hadamard_4_pd[27] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_4_pd[28] = x[2] * x[5];
	hadamard_4_pd[29] = hadamard_4_pd[28] * x[11];
	v[2] = hadamard_4_pd[29] * x[12];
	v[0] += v[2];
	hadamard_4_pd[30] = x[2] * x[5];
	hadamard_4_pd[31] = hadamard_4_pd[30] * x[8];
	v[2] = hadamard_4_pd[31] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_4_pd[32] = x[1] * x[6];
	hadamard_4_pd[33] = hadamard_4_pd[32] * x[8];
	v[1] = hadamard_4_pd[33] * x[15];
	v[0] += v[1];
	hadamard_4_pd[34] = x[1] * x[6];
	hadamard_4_pd[35] = hadamard_4_pd[34] * x[11];
	v[1] = hadamard_4_pd[35] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_4_pd[36] = x[1] * x[7];
	hadamard_4_pd[37] = hadamard_4_pd[36] * x[10];
	v[2] = hadamard_4_pd[37] * x[12];
	v[0] += v[2];
	hadamard_4_pd[38] = x[3] * x[5];
	hadamard_4_pd[39] = hadamard_4_pd[38] * x[10];
	v[2] = hadamard_4_pd[39] * x[12];
	v[1] = -v[2];
	v[0] += v[1];
	hadamard_4_pd[40] = x[3] * x[5];
	hadamard_4_pd[41] = hadamard_4_pd[40] * x[8];
	v[1] = hadamard_4_pd[41] * x[14];
	v[0] += v[1];
	hadamard_4_pd[42] = x[1] * x[7];
	hadamard_4_pd[43] = hadamard_4_pd[42] * x[8];
	v[1] = hadamard_4_pd[43] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	hadamard_4_pd[44] = x[1] * x[4];
	hadamard_4_pd[45] = hadamard_4_pd[44] * x[11];
	v[2] = hadamard_4_pd[45] * x[14];
	v[0] += v[2];
	hadamard_4_pd[46] = x[1] * x[4];
	hadamard_4_pd[47] = hadamard_4_pd[46] * x[10];
	v[2] = hadamard_4_pd[47] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -x[16];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[15] = -hadamard_4_pd[47];
	J[10] = -x[15]*hadamard_4_pd[46];
	dv[0] = -x[15]*x[10];
	J[4] = dv[0]*x[1];
	J[1] = dv[0]*x[4];
	J[14] = hadamard_4_pd[45];
	J[11] = x[14]*hadamard_4_pd[44];
	dv[1] = x[14]*x[11];
	J[4] += dv[1]*x[1];
	J[1] += dv[1]*x[4];
	J[14] -= hadamard_4_pd[43];
	J[8] = -x[14]*hadamard_4_pd[42];
	dv[2] = -x[14]*x[8];
	J[7] = dv[2]*x[1];
	J[1] += dv[2]*x[7];
	J[14] += hadamard_4_pd[41];
	J[8] += x[14]*hadamard_4_pd[40];
	dv[3] = x[14]*x[8];
	J[5] = dv[3]*x[3];
	J[3] = dv[3]*x[5];
	J[12] = -hadamard_4_pd[39];
	J[10] -= x[12]*hadamard_4_pd[38];
	dv[4] = -x[12]*x[10];
	J[5] += dv[4]*x[3];
	J[3] += dv[4]*x[5];
	J[12] += hadamard_4_pd[37];
	J[10] += x[12]*hadamard_4_pd[36];
	dv[5] = x[12]*x[10];
	J[7] += dv[5]*x[1];
	J[1] += dv[5]*x[7];
	J[12] -= hadamard_4_pd[35];
	J[11] -= x[12]*hadamard_4_pd[34];
	dv[6] = -x[12]*x[11];
	J[6] = dv[6]*x[1];
	J[1] += dv[6]*x[6];
	J[15] += hadamard_4_pd[33];
	J[8] += x[15]*hadamard_4_pd[32];
	dv[7] = x[15]*x[8];
	J[6] += dv[7]*x[1];
	J[1] += dv[7]*x[6];
	J[15] -= hadamard_4_pd[31];
	J[8] -= x[15]*hadamard_4_pd[30];
	dv[8] = -x[15]*x[8];
	J[5] += dv[8]*x[2];
	J[2] = dv[8]*x[5];
	J[12] += hadamard_4_pd[29];
	J[11] += x[12]*hadamard_4_pd[28];
	dv[9] = x[12]*x[11];
	J[5] += dv[9]*x[2];
	J[2] += dv[9]*x[5];
	J[12] -= hadamard_4_pd[27];
	J[9] = -x[12]*hadamard_4_pd[26];
	dv[10] = -x[12]*x[9];
	J[7] += dv[10]*x[2];
	J[2] += dv[10]*x[7];
	J[12] += hadamard_4_pd[25];
	J[9] += x[12]*hadamard_4_pd[24];
	dv[11] = x[12]*x[9];
	J[6] += dv[11]*x[3];
	J[3] += dv[11]*x[6];
	J[13] = -hadamard_4_pd[23];
	J[8] -= x[13]*hadamard_4_pd[22];
	dv[12] = -x[13]*x[8];
	J[6] += dv[12]*x[3];
	J[3] += dv[12]*x[6];
	J[13] += hadamard_4_pd[21];
	J[8] += x[13]*hadamard_4_pd[20];
	dv[13] = x[13]*x[8];
	J[7] += dv[13]*x[2];
	J[2] += dv[13]*x[7];
	J[13] -= hadamard_4_pd[19];
	J[11] -= x[13]*hadamard_4_pd[18];
	dv[14] = -x[13]*x[11];
	J[4] += dv[14]*x[2];
	J[2] += dv[14]*x[4];
	J[15] += hadamard_4_pd[17];
	J[9] += x[15]*hadamard_4_pd[16];
	dv[15] = x[15]*x[9];
	J[4] += dv[15]*x[2];
	J[2] += dv[15]*x[4];
	J[15] -= hadamard_4_pd[15];
	J[9] -= x[15]*hadamard_4_pd[14];
	dv[16] = -x[15]*x[9];
	J[6] += dv[16]*x[0];
	J[0] = dv[16]*x[6];
	J[13] += hadamard_4_pd[13];
	J[11] += x[13]*hadamard_4_pd[12];
	dv[17] = x[13]*x[11];
	J[6] += dv[17]*x[0];
	J[0] += dv[17]*x[6];
	J[13] -= hadamard_4_pd[11];
	J[10] -= x[13]*hadamard_4_pd[10];
	dv[18] = -x[13]*x[10];
	J[7] += dv[18]*x[0];
	J[0] += dv[18]*x[7];
	J[13] += hadamard_4_pd[9];
	J[10] += x[13]*hadamard_4_pd[8];
	dv[19] = x[13]*x[10];
	J[4] += dv[19]*x[3];
	J[3] += dv[19]*x[4];
	J[14] -= hadamard_4_pd[7];
	J[9] -= x[14]*hadamard_4_pd[6];
	dv[20] = -x[14]*x[9];
	J[4] += dv[20]*x[3];
	J[3] += dv[20]*x[4];
	J[14] += hadamard_4_pd[5];
	J[9] += x[14]*hadamard_4_pd[4];
	dv[21] = x[14]*x[9];
	J[7] += dv[21]*x[0];
	J[0] += dv[21]*x[7];
	J[14] -= hadamard_4_pd[3];
	J[11] -= x[14]*hadamard_4_pd[2];
	dv[22] = -x[14]*x[11];
	J[5] += dv[22]*x[0];
	J[0] += dv[22]*x[5];
	J[15] += hadamard_4_pd[1];
	J[10] += x[15]*hadamard_4_pd[0];
	dv[23] = x[15]*x[10];
	J[5] += dv[23]*x[0];
	J[0] += dv[23]*x[5];
	J[16] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
