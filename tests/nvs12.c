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
 fint nvs12_auxcom_[1] = { 4 /* nlc */ };
 fint nvs12_funcom_[27] = {
	4 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	16 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4 };

 real nvs12_boundc_[1+8+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		-1100.,
		1.7e308,
		-440.,
		1.7e308,
		-310.,
		1.7e308,
		-460.,
		1.7e308};

 real nvs12_x0comn_[4] = {
		1.,
		1.,
		1.,
		1. };

 static real nvs12_pd[66];
static real nvs12_old_x[4];
static int nvs12_xkind = -1;

 static int
nvs12_xcheck(real *x)
{
	real *x1 = nvs12_old_x, *xe = x + 4;
	errno = 0;
	if (nvs12_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs12_xkind = 0;
	return 1;
	}
 real
nvs12_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (nvs12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs12_pd[54] = x[0] * x[0];
	nvs12_pd[55] = x[0] + x[0];
	v[0] = 7. * nvs12_pd[54];
	nvs12_pd[56] = x[1] * x[1];
	nvs12_pd[57] = x[1] + x[1];
	v[1] = 6. * nvs12_pd[56];
	v[0] += v[1];
	nvs12_pd[58] = x[2] * x[2];
	nvs12_pd[59] = x[2] + x[2];
	v[1] = 8. * nvs12_pd[58];
	v[0] += v[1];
	nvs12_pd[60] = 6. * x[2];
	v[1] = nvs12_pd[60] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	nvs12_pd[61] = 4. * x[2];
	v[2] = nvs12_pd[61] * x[1];
	v[0] += v[2];
	nvs12_pd[62] = x[3] * x[3];
	nvs12_pd[63] = x[3] + x[3];
	v[2] = 6. * nvs12_pd[62];
	v[0] += v[2];
	nvs12_pd[64] = 2. * x[3];
	v[2] = nvs12_pd[64] * x[0];
	v[0] += v[2];
	nvs12_pd[65] = 2. * x[3];
	v[2] = nvs12_pd[65] * x[2];
	v[0] += v[2];
	rv = v[0] + -20.*x[0];
	rv += -93.2*x[1];
	rv += -67.2*x[2];
	rv += -36.6*x[3];
	;}

	if (wantfg & 2) {
	g[2] = nvs12_pd[65] + -67.2;
	g[3] = x[2]*2. + -36.6;
	g[0] = nvs12_pd[64] + -20.;
	g[3] += x[0]*2.;
	g[3] += 6.*nvs12_pd[63];
	g[1] = nvs12_pd[61] + -93.2;
	g[2] += x[1]*4.;
	g[0] -= nvs12_pd[60];
	g[2] -= x[0]*6.;
	g[2] += 8.*nvs12_pd[59];
	g[1] += 6.*nvs12_pd[57];
	g[0] += 7.*nvs12_pd[55];
	}

	return rv;
}

 void
nvs12_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	fint wantfg = *needfg;
	if (nvs12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs12_pd[0] = x[0] * x[0];
	nvs12_pd[1] = x[0] + x[0];
	v[0] = -9. * nvs12_pd[0];
	v[1] = -v[0];
	nvs12_pd[2] = 10. * x[0];
	v[0] = nvs12_pd[2] * x[1];
	v[1] += v[0];
	nvs12_pd[3] = x[1] * x[1];
	nvs12_pd[4] = x[1] + x[1];
	v[0] = -8. * nvs12_pd[3];
	v[2] = -v[0];
	v[1] += v[2];
	nvs12_pd[5] = x[2] * x[2];
	nvs12_pd[6] = x[2] + x[2];
	v[2] = -5. * nvs12_pd[5];
	v[0] = -v[2];
	v[1] += v[0];
	nvs12_pd[7] = 6. * x[2];
	v[0] = nvs12_pd[7] * x[0];
	v[1] += v[0];
	nvs12_pd[8] = 10. * x[2];
	v[0] = nvs12_pd[8] * x[1];
	v[1] += v[0];
	nvs12_pd[9] = x[3] * x[3];
	nvs12_pd[10] = x[3] + x[3];
	v[0] = -7. * nvs12_pd[9];
	v[2] = -v[0];
	v[1] += v[2];
	nvs12_pd[11] = 10. * x[3];
	v[2] = nvs12_pd[11] * x[0];
	v[1] += v[2];
	nvs12_pd[12] = 6. * x[3];
	v[2] = nvs12_pd[12] * x[1];
	v[1] += v[2];
	nvs12_pd[13] = 2. * x[3];
	v[2] = nvs12_pd[13] * x[2];
	v[1] += v[2];
	v[2] = -v[1];
	c[0] = v[2];

  /***  constraint 2  ***/

	nvs12_pd[14] = x[0] * x[0];
	nvs12_pd[15] = x[0] + x[0];
	v[0] = -6. * nvs12_pd[14];
	nvs12_pd[16] = 8. * x[0];
	v[1] = nvs12_pd[16] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs12_pd[17] = x[1] * x[1];
	nvs12_pd[18] = x[1] + x[1];
	v[2] = -6. * nvs12_pd[17];
	v[0] += v[2];
	nvs12_pd[19] = x[2] * x[2];
	nvs12_pd[20] = x[2] + x[2];
	v[2] = -4. * nvs12_pd[19];
	v[0] += v[2];
	nvs12_pd[21] = 2. * x[2];
	v[2] = nvs12_pd[21] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs12_pd[22] = 2. * x[2];
	v[1] = nvs12_pd[22] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs12_pd[23] = x[3] * x[3];
	nvs12_pd[24] = x[3] + x[3];
	v[2] = -8. * nvs12_pd[23];
	v[0] += v[2];
	nvs12_pd[25] = 2. * x[3];
	v[2] = nvs12_pd[25] * x[0];
	v[0] += v[2];
	nvs12_pd[26] = 10. * x[3];
	v[2] = nvs12_pd[26] * x[1];
	v[0] += v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	nvs12_pd[27] = x[0] * x[0];
	nvs12_pd[28] = x[0] + x[0];
	v[0] = -9. * nvs12_pd[27];
	nvs12_pd[29] = x[1] * x[1];
	nvs12_pd[30] = x[1] + x[1];
	v[1] = -6. * nvs12_pd[29];
	v[0] += v[1];
	nvs12_pd[31] = x[2] * x[2];
	nvs12_pd[32] = x[2] + x[2];
	v[1] = -8. * nvs12_pd[31];
	v[0] += v[1];
	nvs12_pd[33] = 2. * x[1];
	v[1] = nvs12_pd[33] * x[0];
	v[0] += v[1];
	nvs12_pd[34] = 2. * x[2];
	v[1] = nvs12_pd[34] * x[1];
	v[0] += v[1];
	nvs12_pd[35] = x[3] * x[3];
	nvs12_pd[36] = x[3] + x[3];
	v[1] = -6. * nvs12_pd[35];
	v[0] += v[1];
	nvs12_pd[37] = 4. * x[3];
	v[1] = nvs12_pd[37] * x[0];
	v[0] += v[1];
	nvs12_pd[38] = 4. * x[3];
	v[1] = nvs12_pd[38] * x[1];
	v[0] += v[1];
	nvs12_pd[39] = 2. * x[3];
	v[1] = nvs12_pd[39] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	nvs12_pd[40] = x[0] * x[0];
	nvs12_pd[41] = x[0] + x[0];
	v[0] = -8. * nvs12_pd[40];
	nvs12_pd[42] = x[1] * x[1];
	nvs12_pd[43] = x[1] + x[1];
	v[1] = -4. * nvs12_pd[42];
	v[0] += v[1];
	nvs12_pd[44] = x[2] * x[2];
	nvs12_pd[45] = x[2] + x[2];
	v[1] = -9. * nvs12_pd[44];
	v[0] += v[1];
	nvs12_pd[46] = x[3] * x[3];
	nvs12_pd[47] = x[3] + x[3];
	v[1] = -7. * nvs12_pd[46];
	v[0] += v[1];
	nvs12_pd[48] = 2. * x[1];
	v[1] = nvs12_pd[48] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	nvs12_pd[49] = 2. * x[2];
	v[2] = nvs12_pd[49] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs12_pd[50] = 4. * x[2];
	v[1] = nvs12_pd[50] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs12_pd[51] = 6. * x[3];
	v[2] = nvs12_pd[51] * x[0];
	v[0] += v[2];
	nvs12_pd[52] = 2. * x[3];
	v[2] = nvs12_pd[52] * x[1];
	v[0] += v[2];
	nvs12_pd[53] = 2. * x[3];
	v[2] = nvs12_pd[53] * x[2];
	v[1] = -v[2];
	v[0] += v[1];
	c[3] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[8] = -nvs12_pd[13];
	J[12] = -x[2]*2.;
	J[4] = -nvs12_pd[12];
	J[12] -= x[1]*6.;
	J[0] = -nvs12_pd[11];
	J[12] -= x[0]*10.;
	J[12] -= 7.*nvs12_pd[10];
	J[4] -= nvs12_pd[8];
	J[8] -= x[1]*10.;
	J[0] -= nvs12_pd[7];
	J[8] -= x[0]*6.;
	J[8] -= 5.*nvs12_pd[6];
	J[4] -= 8.*nvs12_pd[4];
	J[4] -= nvs12_pd[2];
	J[0] -= x[1]*10.;
	J[0] -= 9.*nvs12_pd[1];

   /*** derivatives for constraint 2 ***/

	J[5] = nvs12_pd[26];
	J[13] = x[1]*10.;
	J[1] = nvs12_pd[25];
	J[13] += x[0]*2.;
	J[13] -= 8.*nvs12_pd[24];
	J[5] -= nvs12_pd[22];
	J[9] = -x[1]*2.;
	J[1] -= nvs12_pd[21];
	J[9] -= x[0]*2.;
	J[9] -= 4.*nvs12_pd[20];
	J[5] -= 6.*nvs12_pd[18];
	J[5] -= nvs12_pd[16];
	J[1] -= x[1]*8.;
	J[1] -= 6.*nvs12_pd[15];

   /*** derivatives for constraint 3 ***/

	J[10] = -nvs12_pd[39];
	J[14] = -x[2]*2.;
	J[6] = nvs12_pd[38];
	J[14] += x[1]*4.;
	J[2] = nvs12_pd[37];
	J[14] += x[0]*4.;
	J[14] -= 6.*nvs12_pd[36];
	J[6] += nvs12_pd[34];
	J[10] += x[1]*2.;
	J[2] += nvs12_pd[33];
	J[6] += x[0]*2.;
	J[10] -= 8.*nvs12_pd[32];
	J[6] -= 6.*nvs12_pd[30];
	J[2] -= 9.*nvs12_pd[28];

   /*** derivatives for constraint 4 ***/

	J[11] = -nvs12_pd[53];
	J[15] = -x[2]*2.;
	J[7] = nvs12_pd[52];
	J[15] += x[1]*2.;
	J[3] = nvs12_pd[51];
	J[15] += x[0]*6.;
	J[7] -= nvs12_pd[50];
	J[11] -= x[1]*4.;
	J[3] -= nvs12_pd[49];
	J[11] -= x[0]*2.;
	J[3] -= nvs12_pd[48];
	J[7] -= x[0]*2.;
	J[15] -= 7.*nvs12_pd[47];
	J[11] -= 9.*nvs12_pd[45];
	J[7] -= 4.*nvs12_pd[43];
	J[3] -= 8.*nvs12_pd[41];
	}
}
#ifdef __cplusplus
	}
#endif
