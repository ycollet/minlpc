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
 fint ex8_1_3_auxcom_[1] = { 0 /* nlc */ };
 fint ex8_1_3_funcom_[6] = {
	2 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real ex8_1_3_boundc_[1+4+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308};

 real ex8_1_3_x0comn_[2] = {
		0.,
		0. };

 static real ex8_1_3_pd[20];
static real ex8_1_3_old_x[2];
static int ex8_1_3_xkind = -1;

 static int
ex8_1_3_xcheck(real *x)
{
	real *x1 = ex8_1_3_old_x, *xe = x + 2;
	errno = 0;
	if (ex8_1_3_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_1_3_xkind = 0;
	return 1;
	}
 real
ex8_1_3_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[5], dv[13];
	fint wantfg = *needfg;
	if (ex8_1_3_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + 1.;
	v[0] += x[1];
	ex8_1_3_pd[0] = v[0] * v[0];
	ex8_1_3_pd[1] = v[0] + v[0];
	ex8_1_3_pd[2] = x[0] * x[0];
	ex8_1_3_pd[3] = x[0] + x[0];
	ex8_1_3_pd[4] = 3. * ex8_1_3_pd[2];
	ex8_1_3_pd[8] = ex8_1_3_pd[4] + 19.;
	v[1] = -14. * x[0];
	ex8_1_3_pd[8] += v[1];
	ex8_1_3_pd[5] = 6. * x[0];
	v[1] = ex8_1_3_pd[5] * x[1];
	ex8_1_3_pd[8] += v[1];
	v[1] = -14. * x[1];
	ex8_1_3_pd[8] += v[1];
	ex8_1_3_pd[6] = x[1] * x[1];
	ex8_1_3_pd[7] = x[1] + x[1];
	v[1] = 3. * ex8_1_3_pd[6];
	ex8_1_3_pd[8] += v[1];
	v[1] = ex8_1_3_pd[0] * ex8_1_3_pd[8];
	ex8_1_3_pd[19] = v[1] + 1.;
	v[1] = 2. * x[0];
	v[3] = -3. * x[1];
	v[4] = v[1] + v[3];
	ex8_1_3_pd[9] = v[4] * v[4];
	ex8_1_3_pd[10] = v[4] + v[4];
	ex8_1_3_pd[11] = x[0] * x[0];
	ex8_1_3_pd[12] = x[0] + x[0];
	v[4] = 12. * ex8_1_3_pd[11];
	v[4] += 18.;
	v[3] = -32. * x[0];
	v[4] += v[3];
	ex8_1_3_pd[13] = 36. * x[0];
	v[3] = ex8_1_3_pd[13] * x[1];
	v[1] = v[4] - v[3];
	ex8_1_3_pd[14] = 48. * x[1];
	ex8_1_3_pd[17] = v[1] + ex8_1_3_pd[14];
	ex8_1_3_pd[15] = x[1] * x[1];
	ex8_1_3_pd[16] = x[1] + x[1];
	v[3] = 27. * ex8_1_3_pd[15];
	ex8_1_3_pd[17] += v[3];
	v[3] = ex8_1_3_pd[9] * ex8_1_3_pd[17];
	ex8_1_3_pd[18] = v[3] + 30.;
	v[3] = ex8_1_3_pd[19] * ex8_1_3_pd[18];
	;}

	if (wantfg & 2) {
	dv[0] = ex8_1_3_pd[19]*ex8_1_3_pd[9];
	dv[1] = ex8_1_3_pd[19]*ex8_1_3_pd[17];
	dv[2] = dv[0];
	dv[2] *= 27.;
	g[1] = dv[2]*ex8_1_3_pd[16];
	dv[3] = dv[0];
	g[1] += dv[3]*48.;
	dv[4] = -dv[0];
	g[1] += dv[4]*ex8_1_3_pd[13];
	dv[4] *= x[1];
	g[0] = dv[4]*36.;
	dv[5] = dv[0];
	g[0] -= dv[5]*32.;
	dv[0] *= 12.;
	g[0] += dv[0]*ex8_1_3_pd[12];
	dv[1] *= ex8_1_3_pd[10];
	dv[6] = dv[1];
	g[1] -= dv[6]*3.;
	g[0] += dv[1]*2.;
	dv[7] = ex8_1_3_pd[18]*ex8_1_3_pd[0];
	dv[8] = ex8_1_3_pd[18]*ex8_1_3_pd[8];
	dv[9] = dv[7];
	dv[9] *= 3.;
	g[1] += dv[9]*ex8_1_3_pd[7];
	dv[10] = dv[7];
	g[1] -= dv[10]*14.;
	dv[11] = dv[7];
	g[1] += dv[11]*ex8_1_3_pd[5];
	dv[11] *= x[1];
	g[0] += dv[11]*6.;
	dv[12] = dv[7];
	g[0] -= dv[12]*14.;
	dv[7] *= 3.;
	g[0] += dv[7]*ex8_1_3_pd[3];
	dv[8] *= ex8_1_3_pd[1];
	g[1] += dv[8];
	g[0] += dv[8];
	}

	return v[3];
}

 void
ex8_1_3_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
