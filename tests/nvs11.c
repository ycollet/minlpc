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
 fint nvs11_auxcom_[1] = { 3 /* nlc */ };
 fint nvs11_funcom_[19] = {
	3 /* nvar */,
	1 /* nobj */,
	3 /* ncon */,
	9 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,

	/* rownos */
	1,
	2,
	3,
	1,
	2,
	3,
	1,
	2,
	3 };

 real nvs11_boundc_[1+6+6] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		-1000.,
		1.7e308,
		-550.,
		1.7e308,
		-340.,
		1.7e308};

 real nvs11_x0comn_[3] = {
		1.,
		1.,
		1. };

 static real nvs11_pd[34];
static real nvs11_old_x[3];
static int nvs11_xkind = -1;

 static int
nvs11_xcheck(real *x)
{
	real *x1 = nvs11_old_x, *xe = x + 3;
	errno = 0;
	if (nvs11_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs11_xkind = 0;
	return 1;
	}
 real
nvs11_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (nvs11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs11_pd[26] = x[0] * x[0];
	nvs11_pd[27] = x[0] + x[0];
	v[0] = 7. * nvs11_pd[26];
	nvs11_pd[28] = x[1] * x[1];
	nvs11_pd[29] = x[1] + x[1];
	v[1] = 6. * nvs11_pd[28];
	v[0] += v[1];
	nvs11_pd[30] = x[2] * x[2];
	nvs11_pd[31] = x[2] + x[2];
	v[1] = 8. * nvs11_pd[30];
	v[0] += v[1];
	nvs11_pd[32] = 6. * x[2];
	v[1] = nvs11_pd[32] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	nvs11_pd[33] = 4. * x[2];
	v[2] = nvs11_pd[33] * x[1];
	v[0] += v[2];
	rv = v[0] + -15.8*x[0];
	rv += -93.2*x[1];
	rv += -63.*x[2];
	;}

	if (wantfg & 2) {
	g[1] = nvs11_pd[33] + -93.2;
	g[2] = x[1]*4. + -63.;
	g[0] = -nvs11_pd[32] + -15.8;
	g[2] -= x[0]*6.;
	g[2] += 8.*nvs11_pd[31];
	g[1] += 6.*nvs11_pd[29];
	g[0] += 7.*nvs11_pd[27];
	}

	return rv;
}

 void
nvs11_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	fint wantfg = *needfg;
	if (nvs11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs11_pd[0] = x[0] * x[0];
	nvs11_pd[1] = x[0] + x[0];
	v[0] = -9. * nvs11_pd[0];
	nvs11_pd[2] = 10. * x[0];
	v[1] = nvs11_pd[2] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs11_pd[3] = x[1] * x[1];
	nvs11_pd[4] = x[1] + x[1];
	v[2] = -8. * nvs11_pd[3];
	v[0] += v[2];
	nvs11_pd[5] = x[2] * x[2];
	nvs11_pd[6] = x[2] + x[2];
	v[2] = -5. * nvs11_pd[5];
	v[0] += v[2];
	nvs11_pd[7] = 6. * x[2];
	v[2] = nvs11_pd[7] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs11_pd[8] = 10. * x[2];
	v[1] = nvs11_pd[8] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	nvs11_pd[9] = x[0] * x[0];
	nvs11_pd[10] = x[0] + x[0];
	v[0] = -6. * nvs11_pd[9];
	nvs11_pd[11] = 8. * x[0];
	v[1] = nvs11_pd[11] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs11_pd[12] = x[1] * x[1];
	nvs11_pd[13] = x[1] + x[1];
	v[2] = -6. * nvs11_pd[12];
	v[0] += v[2];
	nvs11_pd[14] = x[2] * x[2];
	nvs11_pd[15] = x[2] + x[2];
	v[2] = -4. * nvs11_pd[14];
	v[0] += v[2];
	nvs11_pd[16] = 2. * x[2];
	v[2] = nvs11_pd[16] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs11_pd[17] = 2. * x[2];
	v[1] = nvs11_pd[17] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	nvs11_pd[18] = x[0] * x[0];
	nvs11_pd[19] = x[0] + x[0];
	v[0] = -9. * nvs11_pd[18];
	nvs11_pd[20] = x[1] * x[1];
	nvs11_pd[21] = x[1] + x[1];
	v[1] = -6. * nvs11_pd[20];
	v[0] += v[1];
	nvs11_pd[22] = x[2] * x[2];
	nvs11_pd[23] = x[2] + x[2];
	v[1] = -8. * nvs11_pd[22];
	v[0] += v[1];
	nvs11_pd[24] = 2. * x[1];
	v[1] = nvs11_pd[24] * x[0];
	v[0] += v[1];
	nvs11_pd[25] = 2. * x[2];
	v[1] = nvs11_pd[25] * x[1];
	v[0] += v[1];
	c[2] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[3] = -nvs11_pd[8];
	J[6] = -x[1]*10.;
	J[0] = -nvs11_pd[7];
	J[6] -= x[0]*6.;
	J[6] -= 5.*nvs11_pd[6];
	J[3] -= 8.*nvs11_pd[4];
	J[3] -= nvs11_pd[2];
	J[0] -= x[1]*10.;
	J[0] -= 9.*nvs11_pd[1];

   /*** derivatives for constraint 2 ***/

	J[4] = -nvs11_pd[17];
	J[7] = -x[1]*2.;
	J[1] = -nvs11_pd[16];
	J[7] -= x[0]*2.;
	J[7] -= 4.*nvs11_pd[15];
	J[4] -= 6.*nvs11_pd[13];
	J[4] -= nvs11_pd[11];
	J[1] -= x[1]*8.;
	J[1] -= 6.*nvs11_pd[10];

   /*** derivatives for constraint 3 ***/

	J[5] = nvs11_pd[25];
	J[8] = x[1]*2.;
	J[2] = nvs11_pd[24];
	J[5] += x[0]*2.;
	J[8] -= 8.*nvs11_pd[23];
	J[5] -= 6.*nvs11_pd[21];
	J[2] -= 9.*nvs11_pd[19];
	}
}
#ifdef __cplusplus
	}
#endif
