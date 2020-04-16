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
 fint sporttournament08_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament08_funcom_[65] = {
	29 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	29 /* nzc */,
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
	19,
	20,
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

 real sporttournament08_boundc_[1+58+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		0.};

 real sporttournament08_x0comn_[29] = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real sporttournament08_pd[48];
static real sporttournament08_old_x[29];
static int sporttournament08_xkind = -1;

 static int
sporttournament08_xcheck(real *x)
{
	real *x1 = sporttournament08_old_x, *xe = x + 29;
	errno = 0;
	if (sporttournament08_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament08_xkind = 0;
	return 1;
	}
 real
sporttournament08_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[28];
	;}

	if (wantfg & 2) {
	g[28] = 1.;
	}

	return rv;
}

 void
sporttournament08_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament08_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament08_pd[0] = 2. * x[0];
	v[0] = sporttournament08_pd[0] * x[9];
	sporttournament08_pd[1] = 2. * x[0];
	v[1] = sporttournament08_pd[1] * x[16];
	v[0] += v[1];
	sporttournament08_pd[2] = 2. * x[0];
	v[1] = sporttournament08_pd[2] * x[17];
	v[0] += v[1];
	sporttournament08_pd[3] = 2. * x[0];
	v[1] = sporttournament08_pd[3] * x[19];
	v[0] += v[1];
	sporttournament08_pd[4] = 2. * x[1];
	v[1] = sporttournament08_pd[4] * x[3];
	v[0] += v[1];
	sporttournament08_pd[5] = 2. * x[1];
	v[1] = sporttournament08_pd[5] * x[13];
	v[0] += v[1];
	sporttournament08_pd[6] = 2. * x[2];
	v[1] = sporttournament08_pd[6] * x[18];
	v[0] += v[1];
	sporttournament08_pd[7] = 2. * x[2];
	v[1] = sporttournament08_pd[7] * x[20];
	v[0] += v[1];
	sporttournament08_pd[8] = 2. * x[2];
	v[1] = sporttournament08_pd[8] * x[22];
	v[0] += v[1];
	sporttournament08_pd[9] = 2. * x[2];
	v[1] = sporttournament08_pd[9] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament08_pd[10] = 2. * x[3];
	v[2] = sporttournament08_pd[10] * x[4];
	v[0] += v[2];
	sporttournament08_pd[11] = 2. * x[3];
	v[2] = sporttournament08_pd[11] * x[6];
	v[0] += v[2];
	sporttournament08_pd[12] = 2. * x[3];
	v[2] = sporttournament08_pd[12] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament08_pd[13] = 2. * x[4];
	v[1] = sporttournament08_pd[13] * x[7];
	v[0] += v[1];
	sporttournament08_pd[14] = 2. * x[5];
	v[1] = sporttournament08_pd[14] * x[6];
	v[0] += v[1];
	sporttournament08_pd[15] = 2. * x[5];
	v[1] = sporttournament08_pd[15] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament08_pd[16] = 2. * x[5];
	v[2] = sporttournament08_pd[16] * x[24];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament08_pd[17] = 2. * x[5];
	v[1] = sporttournament08_pd[17] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament08_pd[18] = 2. * x[6];
	v[2] = sporttournament08_pd[18] * x[12];
	v[0] += v[2];
	sporttournament08_pd[19] = 2. * x[6];
	v[2] = sporttournament08_pd[19] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament08_pd[20] = 2. * x[7];
	v[1] = sporttournament08_pd[20] * x[8];
	v[0] += v[1];
	sporttournament08_pd[21] = 2. * x[7];
	v[1] = sporttournament08_pd[21] * x[11];
	v[0] += v[1];
	sporttournament08_pd[22] = 2. * x[7];
	v[1] = sporttournament08_pd[22] * x[24];
	v[0] += v[1];
	sporttournament08_pd[23] = 2. * x[8];
	v[1] = sporttournament08_pd[23] * x[12];
	v[0] += v[1];
	sporttournament08_pd[24] = 2. * x[9];
	v[1] = sporttournament08_pd[24] * x[23];
	v[0] += v[1];
	sporttournament08_pd[25] = 2. * x[9];
	v[1] = sporttournament08_pd[25] * x[26];
	v[0] += v[1];
	sporttournament08_pd[26] = 2. * x[9];
	v[1] = sporttournament08_pd[26] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament08_pd[27] = 2. * x[10];
	v[2] = sporttournament08_pd[27] * x[11];
	v[0] += v[2];
	sporttournament08_pd[28] = 2. * x[10];
	v[2] = sporttournament08_pd[28] * x[18];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament08_pd[29] = 2. * x[10];
	v[1] = sporttournament08_pd[29] * x[24];
	v[0] += v[1];
	sporttournament08_pd[30] = 2. * x[10];
	v[1] = sporttournament08_pd[30] * x[27];
	v[0] += v[1];
	sporttournament08_pd[31] = 2. * x[11];
	v[1] = sporttournament08_pd[31] * x[13];
	v[0] += v[1];
	sporttournament08_pd[32] = 2. * x[11];
	v[1] = sporttournament08_pd[32] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament08_pd[33] = 2. * x[12];
	v[2] = sporttournament08_pd[33] * x[14];
	v[0] += v[2];
	sporttournament08_pd[34] = 2. * x[12];
	v[2] = sporttournament08_pd[34] * x[15];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament08_pd[35] = 2. * x[13];
	v[1] = sporttournament08_pd[35] * x[14];
	v[0] += v[1];
	sporttournament08_pd[36] = 2. * x[13];
	v[1] = sporttournament08_pd[36] * x[15];
	v[0] += v[1];
	sporttournament08_pd[37] = 2. * x[15];
	v[1] = sporttournament08_pd[37] * x[16];
	v[0] += v[1];
	sporttournament08_pd[38] = 2. * x[15];
	v[1] = sporttournament08_pd[38] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament08_pd[39] = 2. * x[16];
	v[2] = sporttournament08_pd[39] * x[18];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament08_pd[40] = 2. * x[17];
	v[1] = sporttournament08_pd[40] * x[22];
	v[0] += v[1];
	sporttournament08_pd[41] = 2. * x[18];
	v[1] = sporttournament08_pd[41] * x[19];
	v[0] += v[1];
	sporttournament08_pd[42] = 2. * x[19];
	v[1] = sporttournament08_pd[42] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament08_pd[43] = 2. * x[19];
	v[2] = sporttournament08_pd[43] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament08_pd[44] = 2. * x[21];
	v[1] = sporttournament08_pd[44] * x[25];
	v[0] += v[1];
	sporttournament08_pd[45] = 2. * x[22];
	v[1] = sporttournament08_pd[45] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament08_pd[46] = 2. * x[25];
	v[2] = sporttournament08_pd[46] * x[26];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament08_pd[47] = 2. * x[25];
	v[1] = sporttournament08_pd[47] * x[27];
	v[0] += v[1];
	t1 = v[0] + -4.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += 2.*x[5];
	t1 += -2.*x[6];
	t1 += -4.*x[7];
	t1 += -2.*x[8];
	t1 += -2.*x[9];
	t1 += -2.*x[10];
	t1 += -2.*x[11];
	t1 += -2.*x[12];
	t1 += -4.*x[13];
	t1 += -2.*x[14];
	t1 += x[28];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[27] = sporttournament08_pd[47];
	J[25] = x[27]*2.;
	J[26] = -sporttournament08_pd[46];
	J[25] -= x[26]*2.;
	J[25] -= sporttournament08_pd[45];
	J[22] = -x[25]*2.;
	J[25] += sporttournament08_pd[44];
	J[21] = x[25]*2.;
	J[21] -= sporttournament08_pd[43];
	J[19] = -x[21]*2.;
	J[20] = -sporttournament08_pd[42];
	J[19] -= x[20]*2.;
	J[19] += sporttournament08_pd[41];
	J[18] = x[19]*2.;
	J[22] += sporttournament08_pd[40];
	J[17] = x[22]*2.;
	J[18] -= sporttournament08_pd[39];
	J[16] = -x[18]*2.;
	J[17] -= sporttournament08_pd[38];
	J[15] = -x[17]*2.;
	J[16] += sporttournament08_pd[37];
	J[15] += x[16]*2.;
	J[15] += sporttournament08_pd[36];
	J[13] = x[15]*2. + -4.;
	J[14] = sporttournament08_pd[35] + -2.;
	J[13] += x[14]*2.;
	J[15] -= sporttournament08_pd[34];
	J[12] = -x[15]*2. + -2.;
	J[14] += sporttournament08_pd[33];
	J[12] += x[14]*2.;
	J[16] -= sporttournament08_pd[32];
	J[11] = -x[16]*2. + -2.;
	J[13] += sporttournament08_pd[31];
	J[11] += x[13]*2.;
	J[27] += sporttournament08_pd[30];
	J[10] = x[27]*2. + -2.;
	J[24] = sporttournament08_pd[29];
	J[10] += x[24]*2.;
	J[18] -= sporttournament08_pd[28];
	J[10] -= x[18]*2.;
	J[11] += sporttournament08_pd[27];
	J[10] += x[11]*2.;
	J[27] -= sporttournament08_pd[26];
	J[9] = -x[27]*2. + -2.;
	J[26] += sporttournament08_pd[25];
	J[9] += x[26]*2.;
	J[23] = sporttournament08_pd[24];
	J[9] += x[23]*2.;
	J[12] += sporttournament08_pd[23];
	J[8] = x[12]*2. + -2.;
	J[24] += sporttournament08_pd[22];
	J[7] = x[24]*2. + -4.;
	J[11] += sporttournament08_pd[21];
	J[7] += x[11]*2.;
	J[8] += sporttournament08_pd[20];
	J[7] += x[8]*2.;
	J[17] -= sporttournament08_pd[19];
	J[6] = -x[17]*2. + -2.;
	J[12] += sporttournament08_pd[18];
	J[6] += x[12]*2.;
	J[27] -= sporttournament08_pd[17];
	J[5] = -x[27]*2. + 2.;
	J[24] -= sporttournament08_pd[16];
	J[5] -= x[24]*2.;
	J[22] -= sporttournament08_pd[15];
	J[5] -= x[22]*2.;
	J[6] += sporttournament08_pd[14];
	J[5] += x[6]*2.;
	J[7] += sporttournament08_pd[13];
	J[4] = x[7]*2. + -2.;
	J[24] -= sporttournament08_pd[12];
	J[3] = -x[24]*2. + -2.;
	J[6] += sporttournament08_pd[11];
	J[3] += x[6]*2.;
	J[4] += sporttournament08_pd[10];
	J[3] += x[4]*2.;
	J[23] -= sporttournament08_pd[9];
	J[2] = -x[23]*2. + -2.;
	J[22] += sporttournament08_pd[8];
	J[2] += x[22]*2.;
	J[20] += sporttournament08_pd[7];
	J[2] += x[20]*2.;
	J[18] += sporttournament08_pd[6];
	J[2] += x[18]*2.;
	J[13] += sporttournament08_pd[5];
	J[1] = x[13]*2. + -2.;
	J[3] += sporttournament08_pd[4];
	J[1] += x[3]*2.;
	J[19] += sporttournament08_pd[3];
	J[0] = x[19]*2. + -4.;
	J[17] += sporttournament08_pd[2];
	J[0] += x[17]*2.;
	J[16] += sporttournament08_pd[1];
	J[0] += x[16]*2.;
	J[9] += sporttournament08_pd[0];
	J[0] += x[9]*2.;
	J[28] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
