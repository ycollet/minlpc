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
 fint chem_auxcom_[1] = { 0 /* nlc */ };
 fint chem_funcom_[43] = {
	11 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	25 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	8,
	10,
	12,
	15,
	18,
	20,
	22,
	25,
	26,

	/* rownos */
	1,
	4,
	1,
	4,
	1,
	3,
	4,
	2,
	4,
	2,
	4,
	1,
	2,
	4,
	2,
	3,
	4,
	3,
	4,
	3,
	4,
	1,
	3,
	4,
	4 };

 real chem_boundc_[1+22+8] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.01,
		1.7e308,
		2.,
		2.,
		1.,
		1.,
		1.,
		1.,
		0.,
		0.};

 real chem_x0comn_[11] = {
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.001,
		0.01 };

 static real chem_pd[40];
static real chem_old_x[11];
static int chem_xkind = -1;

 static int
chem_xcheck(real *x)
{
	real *x1 = chem_old_x, *xe = x + 11;
	errno = 0;
	if (chem_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	chem_xkind = 0;
	return 1;
	}
 real
chem_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[12], dv[10];
	fint wantfg = *needfg;
	if (chem_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[0] = x[0] / x[10];
	chem_pd[0] = 1. / x[10];
	chem_pd[1] = -v[0] * chem_pd[0];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	chem_pd[2] = 1. / v[0];
	chem_pd[3] = v[1] + -6.05576803624071;
	v[1] = chem_pd[3] * x[0];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[2] = x[1] / x[10];
	chem_pd[4] = 1. / x[10];
	chem_pd[5] = -v[2] * chem_pd[4];
	v[3] = log(v[2]);
	if (errno) in_trouble("log",v[2]);
	chem_pd[6] = 1. / v[2];
	chem_pd[7] = v[3] + -17.1307680362407;
	v[3] = chem_pd[7] * x[1];
	v[1] += v[3];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[3] = x[2] / x[10];
	chem_pd[8] = 1. / x[10];
	chem_pd[9] = -v[3] * chem_pd[8];
	v[4] = log(v[3]);
	if (errno) in_trouble("log",v[3]);
	chem_pd[10] = 1. / v[3];
	chem_pd[11] = v[4] + -34.0207680362407;
	v[4] = chem_pd[11] * x[2];
	v[1] += v[4];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[4] = x[3] / x[10];
	chem_pd[12] = 1. / x[10];
	chem_pd[13] = -v[4] * chem_pd[12];
	v[5] = log(v[4]);
	if (errno) in_trouble("log",v[4]);
	chem_pd[14] = 1. / v[4];
	chem_pd[15] = v[5] + -5.88076803624071;
	v[5] = chem_pd[15] * x[3];
	v[1] += v[5];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[5] = x[4] / x[10];
	chem_pd[16] = 1. / x[10];
	chem_pd[17] = -v[5] * chem_pd[16];
	v[6] = log(v[5]);
	if (errno) in_trouble("log",v[5]);
	chem_pd[18] = 1. / v[5];
	chem_pd[19] = v[6] + -24.6877680362407;
	v[6] = chem_pd[19] * x[4];
	v[1] += v[6];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[6] = x[5] / x[10];
	chem_pd[20] = 1. / x[10];
	chem_pd[21] = -v[6] * chem_pd[20];
	v[7] = log(v[6]);
	if (errno) in_trouble("log",v[6]);
	chem_pd[22] = 1. / v[6];
	chem_pd[23] = v[7] + -14.9527680362407;
	v[7] = chem_pd[23] * x[5];
	v[1] += v[7];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[7] = x[6] / x[10];
	chem_pd[24] = 1. / x[10];
	chem_pd[25] = -v[7] * chem_pd[24];
	v[8] = log(v[7]);
	if (errno) in_trouble("log",v[7]);
	chem_pd[26] = 1. / v[7];
	chem_pd[27] = v[8] + -24.0667680362407;
	v[8] = chem_pd[27] * x[6];
	v[1] += v[8];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[8] = x[7] / x[10];
	chem_pd[28] = 1. / x[10];
	chem_pd[29] = -v[8] * chem_pd[28];
	v[9] = log(v[8]);
	if (errno) in_trouble("log",v[8]);
	chem_pd[30] = 1. / v[8];
	chem_pd[31] = v[9] + -10.6747680362407;
	v[9] = chem_pd[31] * x[7];
	v[1] += v[9];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[9] = x[8] / x[10];
	chem_pd[32] = 1. / x[10];
	chem_pd[33] = -v[9] * chem_pd[32];
	v[10] = log(v[9]);
	if (errno) in_trouble("log",v[9]);
	chem_pd[34] = 1. / v[9];
	chem_pd[35] = v[10] + -26.6287680362407;
	v[10] = chem_pd[35] * x[8];
	v[1] += v[10];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[10] = x[9] / x[10];
	chem_pd[36] = 1. / x[10];
	chem_pd[37] = -v[10] * chem_pd[36];
	v[11] = log(v[10]);
	if (errno) in_trouble("log",v[10]);
	chem_pd[38] = 1. / v[10];
	chem_pd[39] = v[11] + -22.1447680362407;
	v[11] = chem_pd[39] * x[9];
	v[1] += v[11];
	;}

	if (wantfg & 2) {
	g[9] = chem_pd[39];
	dv[0] = x[9]*chem_pd[38];
	g[10] = dv[0]*chem_pd[37];
	g[9] += dv[0]*chem_pd[36];
	g[8] = chem_pd[35];
	dv[1] = x[8]*chem_pd[34];
	g[10] += dv[1]*chem_pd[33];
	g[8] += dv[1]*chem_pd[32];
	g[7] = chem_pd[31];
	dv[2] = x[7]*chem_pd[30];
	g[10] += dv[2]*chem_pd[29];
	g[7] += dv[2]*chem_pd[28];
	g[6] = chem_pd[27];
	dv[3] = x[6]*chem_pd[26];
	g[10] += dv[3]*chem_pd[25];
	g[6] += dv[3]*chem_pd[24];
	g[5] = chem_pd[23];
	dv[4] = x[5]*chem_pd[22];
	g[10] += dv[4]*chem_pd[21];
	g[5] += dv[4]*chem_pd[20];
	g[4] = chem_pd[19];
	dv[5] = x[4]*chem_pd[18];
	g[10] += dv[5]*chem_pd[17];
	g[4] += dv[5]*chem_pd[16];
	g[3] = chem_pd[15];
	dv[6] = x[3]*chem_pd[14];
	g[10] += dv[6]*chem_pd[13];
	g[3] += dv[6]*chem_pd[12];
	g[2] = chem_pd[11];
	dv[7] = x[2]*chem_pd[10];
	g[10] += dv[7]*chem_pd[9];
	g[2] += dv[7]*chem_pd[8];
	g[1] = chem_pd[7];
	dv[8] = x[1]*chem_pd[6];
	g[10] += dv[8]*chem_pd[5];
	g[1] += dv[8]*chem_pd[4];
	g[0] = chem_pd[3];
	dv[9] = x[0]*chem_pd[2];
	g[10] += dv[9]*chem_pd[1];
	g[0] += dv[9]*chem_pd[0];
	}

	return v[1];
}

 void
chem_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (chem_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += 2.*x[1];
	t1 += 2.*x[2];
	t1 += x[5];
	t1 += x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[3];
	t1 += 2.*x[4];
	t1 += x[5];
	t1 += x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	t1 += x[6];
	t1 += x[7];
	t1 += 2.*x[8];
	t1 += x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += x[10];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[2] = 2.;
	J[4] = 2.;
	J[11] = 1.;
	J[21] = 1.;

   /*** derivatives for constraint 2 ***/

	J[7] = 1.;
	J[9] = 2.;
	J[12] = 1.;
	J[14] = 1.;

   /*** derivatives for constraint 3 ***/

	J[5] = 1.;
	J[15] = 1.;
	J[17] = 1.;
	J[19] = 2.;
	J[22] = 1.;

   /*** derivatives for constraint 4 ***/

	J[1] = -1.;
	J[3] = -1.;
	J[6] = -1.;
	J[8] = -1.;
	J[10] = -1.;
	J[13] = -1.;
	J[16] = -1.;
	J[18] = -1.;
	J[20] = -1.;
	J[23] = -1.;
	J[24] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
