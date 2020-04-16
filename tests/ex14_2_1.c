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
 fint ex14_2_1_auxcom_[1] = { 6 /* nlc */ };
 fint ex14_2_1_funcom_[45] = {
	5 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	33 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	22,
	28,
	34,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	2,
	3,
	4,
	5,
	6 };

 real ex14_2_1_boundc_[1+10+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.e-06,
		1.,
		1.e-06,
		1.,
		1.e-06,
		1.,
		20.,
		80.,
		0.,
		1.7e308,
		-1.7e308,
		10.7545020354713,
		-1.7e308,
		10.6349978691449,
		-1.7e308,
		12.9738026256517,
		-1.7e308,
		-10.7545020354713,
		-1.7e308,
		-10.6349978691449,
		-1.7e308,
		-12.9738026256517,
		1.,
		1.};

 real ex14_2_1_x0comn_[5] = {
		0.272,
		0.465,
		0.253,
		54.254,
		0. };

 static real ex14_2_1_pd[48];
static real ex14_2_1_old_x[5];
static int ex14_2_1_xkind = -1;

 static int
ex14_2_1_xcheck(real *x)
{
	real *x1 = ex14_2_1_old_x, *xe = x + 5;
	errno = 0;
	if (ex14_2_1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_2_1_xkind = 0;
	return 1;
	}
 real
ex14_2_1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_2_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[4];
	;}

	if (wantfg & 2) {
	g[4] = 1.;
	}

	return rv;
}

 void
ex14_2_1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[6];
	real t1;
	fint wantfg = *needfg;
	if (ex14_2_1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 0.48 * x[1];
	v[0] += x[0];
	v[1] = 0.768 * x[2];
	v[0] += v[1];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex14_2_1_pd[0] = 1. / v[0];
	v[0] = 0.48 * x[1];
	v[0] += x[0];
	v[2] = 0.768 * x[2];
	v[0] += v[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = x[0] / v[0];
	ex14_2_1_pd[1] = 1. / v[0];
	ex14_2_1_pd[2] = -v[2] * ex14_2_1_pd[1];
	v[1] += v[2];
	v[2] = 1.55 * x[1];
	v[0] = 1.55 * x[0];
	v[0] += x[1];
	v[3] = 0.544 * x[2];
	v[0] += v[3];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[2] / v[0];
	ex14_2_1_pd[3] = 1. / v[0];
	ex14_2_1_pd[4] = -v[3] * ex14_2_1_pd[3];
	v[1] += v[3];
	v[3] = 0.566 * x[2];
	v[0] = 0.566 * x[0];
	v[2] = 0.65 * x[1];
	v[0] += v[2];
	v[0] += x[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = v[3] / v[0];
	ex14_2_1_pd[5] = 1. / v[0];
	ex14_2_1_pd[6] = -v[2] * ex14_2_1_pd[5];
	v[1] += v[2];
	v[2] = x[3] + 229.664;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = 2787.49800065313 / v[2];
	ex14_2_1_pd[7] = -v[0] / v[2];
	v[1] += v[0];
	t1 = v[1] + -x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 1.55 * x[0];
	v[0] += x[1];
	v[1] = 0.544 * x[2];
	v[0] += v[1];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex14_2_1_pd[8] = 1. / v[0];
	v[0] = 0.48 * x[0];
	v[2] = 0.48 * x[1];
	v[2] += x[0];
	v[3] = 0.768 * x[2];
	v[2] += v[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex14_2_1_pd[9] = 1. / v[2];
	ex14_2_1_pd[10] = -v[3] * ex14_2_1_pd[9];
	v[1] += v[3];
	v[3] = 1.55 * x[0];
	v[3] += x[1];
	v[2] = 0.544 * x[2];
	v[3] += v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = x[1] / v[3];
	ex14_2_1_pd[11] = 1. / v[3];
	ex14_2_1_pd[12] = -v[2] * ex14_2_1_pd[11];
	v[1] += v[2];
	v[2] = 0.65 * x[2];
	v[3] = 0.566 * x[0];
	v[0] = 0.65 * x[1];
	v[3] += v[0];
	v[3] += x[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = v[2] / v[3];
	ex14_2_1_pd[13] = 1. / v[3];
	ex14_2_1_pd[14] = -v[0] * ex14_2_1_pd[13];
	v[1] += v[0];
	v[0] = x[3] + 219.726;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = 2665.5415812027 / v[0];
	ex14_2_1_pd[15] = -v[3] / v[0];
	v[1] += v[3];
	t1 = v[1] + -x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 0.566 * x[0];
	v[1] = 0.65 * x[1];
	v[0] += v[1];
	v[0] += x[2];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex14_2_1_pd[16] = 1. / v[0];
	v[0] = 0.768 * x[0];
	v[2] = 0.48 * x[1];
	v[2] += x[0];
	v[3] = 0.768 * x[2];
	v[2] += v[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex14_2_1_pd[17] = 1. / v[2];
	ex14_2_1_pd[18] = -v[3] * ex14_2_1_pd[17];
	v[1] += v[3];
	v[3] = 0.544 * x[1];
	v[2] = 1.55 * x[0];
	v[2] += x[1];
	v[0] = 0.544 * x[2];
	v[2] += v[0];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = v[3] / v[2];
	ex14_2_1_pd[19] = 1. / v[2];
	ex14_2_1_pd[20] = -v[0] * ex14_2_1_pd[19];
	v[1] += v[0];
	v[0] = 0.566 * x[0];
	v[2] = 0.65 * x[1];
	v[0] += v[2];
	v[0] += x[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = x[2] / v[0];
	ex14_2_1_pd[21] = 1. / v[0];
	ex14_2_1_pd[22] = -v[2] * ex14_2_1_pd[21];
	v[1] += v[2];
	v[2] = x[3] + 239.726;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = 3643.31361767678 / v[2];
	ex14_2_1_pd[23] = -v[0] / v[2];
	v[1] += v[0];
	t1 = v[1] + -x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 0.48 * x[1];
	v[0] += x[0];
	v[1] = 0.768 * x[2];
	v[0] += v[1];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex14_2_1_pd[24] = 1. / v[0];
	v[0] = 0.48 * x[1];
	v[0] += x[0];
	v[2] = 0.768 * x[2];
	v[0] += v[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = x[0] / v[0];
	ex14_2_1_pd[25] = 1. / v[0];
	ex14_2_1_pd[26] = -v[2] * ex14_2_1_pd[25];
	v[1] += v[2];
	v[2] = 1.55 * x[1];
	v[0] = 1.55 * x[0];
	v[0] += x[1];
	v[3] = 0.544 * x[2];
	v[0] += v[3];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[2] / v[0];
	ex14_2_1_pd[27] = 1. / v[0];
	ex14_2_1_pd[28] = -v[3] * ex14_2_1_pd[27];
	v[1] += v[3];
	v[3] = 0.566 * x[2];
	v[0] = 0.566 * x[0];
	v[2] = 0.65 * x[1];
	v[0] += v[2];
	v[0] += x[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = v[3] / v[0];
	ex14_2_1_pd[29] = 1. / v[0];
	ex14_2_1_pd[30] = -v[2] * ex14_2_1_pd[29];
	v[1] += v[2];
	v[2] = x[3] + 229.664;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = 2787.49800065313 / v[2];
	ex14_2_1_pd[31] = -v[0] / v[2];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 1.55 * x[0];
	v[0] += x[1];
	v[1] = 0.544 * x[2];
	v[0] += v[1];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex14_2_1_pd[32] = 1. / v[0];
	v[0] = 0.48 * x[0];
	v[2] = 0.48 * x[1];
	v[2] += x[0];
	v[3] = 0.768 * x[2];
	v[2] += v[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex14_2_1_pd[33] = 1. / v[2];
	ex14_2_1_pd[34] = -v[3] * ex14_2_1_pd[33];
	v[1] += v[3];
	v[3] = 1.55 * x[0];
	v[3] += x[1];
	v[2] = 0.544 * x[2];
	v[3] += v[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[2] = x[1] / v[3];
	ex14_2_1_pd[35] = 1. / v[3];
	ex14_2_1_pd[36] = -v[2] * ex14_2_1_pd[35];
	v[1] += v[2];
	v[2] = 0.65 * x[2];
	v[3] = 0.566 * x[0];
	v[0] = 0.65 * x[1];
	v[3] += v[0];
	v[3] += x[2];
	if (v[3] == 0.) {
	zerdiv_(&v[3]);	}
	v[0] = v[2] / v[3];
	ex14_2_1_pd[37] = 1. / v[3];
	ex14_2_1_pd[38] = -v[0] * ex14_2_1_pd[37];
	v[1] += v[0];
	v[0] = x[3] + 219.726;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = 2665.5415812027 / v[0];
	ex14_2_1_pd[39] = -v[3] / v[0];
	v[1] += v[3];
	v[3] = -v[1];
	t1 = v[3] + -x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = 0.566 * x[0];
	v[1] = 0.65 * x[1];
	v[0] += v[1];
	v[0] += x[2];
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	ex14_2_1_pd[40] = 1. / v[0];
	v[0] = 0.768 * x[0];
	v[2] = 0.48 * x[1];
	v[2] += x[0];
	v[3] = 0.768 * x[2];
	v[2] += v[3];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	ex14_2_1_pd[41] = 1. / v[2];
	ex14_2_1_pd[42] = -v[3] * ex14_2_1_pd[41];
	v[1] += v[3];
	v[3] = 0.544 * x[1];
	v[2] = 1.55 * x[0];
	v[2] += x[1];
	v[0] = 0.544 * x[2];
	v[2] += v[0];
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = v[3] / v[2];
	ex14_2_1_pd[43] = 1. / v[2];
	ex14_2_1_pd[44] = -v[0] * ex14_2_1_pd[43];
	v[1] += v[0];
	v[0] = 0.566 * x[0];
	v[2] = 0.65 * x[1];
	v[0] += v[2];
	v[0] += x[2];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = x[2] / v[0];
	ex14_2_1_pd[45] = 1. / v[0];
	ex14_2_1_pd[46] = -v[2] * ex14_2_1_pd[45];
	v[1] += v[2];
	v[2] = x[3] + 239.726;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = 3643.31361767678 / v[2];
	ex14_2_1_pd[47] = -v[0] / v[2];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -x[4];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[21] = ex14_2_1_pd[7];
	J[14] = ex14_2_1_pd[6];
	dv[0] = ex14_2_1_pd[6];
	J[7] = dv[0]*0.65;
	J[0] = ex14_2_1_pd[6]*0.566;
	J[14] += ex14_2_1_pd[5]*0.566;
	dv[1] = ex14_2_1_pd[4];
	J[14] += dv[1]*0.544;
	J[7] += ex14_2_1_pd[4];
	J[0] += ex14_2_1_pd[4]*1.55;
	J[7] += ex14_2_1_pd[3]*1.55;
	J[0] += ex14_2_1_pd[1];
	dv[2] = ex14_2_1_pd[2];
	J[14] += dv[2]*0.768;
	dv[3] = ex14_2_1_pd[2];
	J[7] += dv[3]*0.48;
	J[0] += ex14_2_1_pd[2];
	dv[4] = ex14_2_1_pd[0];
	J[14] += dv[4]*0.768;
	dv[5] = ex14_2_1_pd[0];
	J[7] += dv[5]*0.48;
	J[0] += ex14_2_1_pd[0];
	J[27] = -1.;

   /*** derivatives for constraint 2 ***/

	J[22] = ex14_2_1_pd[15];
	J[15] = ex14_2_1_pd[14];
	dv[0] = ex14_2_1_pd[14];
	J[8] = dv[0]*0.65;
	J[1] = ex14_2_1_pd[14]*0.566;
	J[15] += ex14_2_1_pd[13]*0.65;
	J[8] += ex14_2_1_pd[11];
	dv[1] = ex14_2_1_pd[12];
	J[15] += dv[1]*0.544;
	J[8] += ex14_2_1_pd[12];
	J[1] += ex14_2_1_pd[12]*1.55;
	dv[2] = ex14_2_1_pd[10];
	J[15] += dv[2]*0.768;
	dv[3] = ex14_2_1_pd[10];
	J[8] += dv[3]*0.48;
	J[1] += ex14_2_1_pd[10];
	J[1] += ex14_2_1_pd[9]*0.48;
	dv[4] = ex14_2_1_pd[8];
	J[15] += dv[4]*0.544;
	J[8] += ex14_2_1_pd[8];
	J[1] += ex14_2_1_pd[8]*1.55;
	J[28] = -1.;

   /*** derivatives for constraint 3 ***/

	J[23] = ex14_2_1_pd[23];
	J[16] = ex14_2_1_pd[21];
	J[16] += ex14_2_1_pd[22];
	dv[0] = ex14_2_1_pd[22];
	J[9] = dv[0]*0.65;
	J[2] = ex14_2_1_pd[22]*0.566;
	dv[1] = ex14_2_1_pd[20];
	J[16] += dv[1]*0.544;
	J[9] += ex14_2_1_pd[20];
	J[2] += ex14_2_1_pd[20]*1.55;
	J[9] += ex14_2_1_pd[19]*0.544;
	dv[2] = ex14_2_1_pd[18];
	J[16] += dv[2]*0.768;
	dv[3] = ex14_2_1_pd[18];
	J[9] += dv[3]*0.48;
	J[2] += ex14_2_1_pd[18];
	J[2] += ex14_2_1_pd[17]*0.768;
	J[16] += ex14_2_1_pd[16];
	dv[4] = ex14_2_1_pd[16];
	J[9] += dv[4]*0.65;
	J[2] += ex14_2_1_pd[16]*0.566;
	J[29] = -1.;

   /*** derivatives for constraint 4 ***/

	J[24] = -ex14_2_1_pd[31];
	J[17] = -ex14_2_1_pd[30];
	dv[0] = -ex14_2_1_pd[30];
	J[10] = dv[0]*0.65;
	J[3] = -ex14_2_1_pd[30]*0.566;
	J[17] -= ex14_2_1_pd[29]*0.566;
	dv[1] = -ex14_2_1_pd[28];
	J[17] += dv[1]*0.544;
	J[10] -= ex14_2_1_pd[28];
	J[3] -= ex14_2_1_pd[28]*1.55;
	J[10] -= ex14_2_1_pd[27]*1.55;
	J[3] -= ex14_2_1_pd[25];
	dv[2] = -ex14_2_1_pd[26];
	J[17] += dv[2]*0.768;
	dv[3] = -ex14_2_1_pd[26];
	J[10] += dv[3]*0.48;
	J[3] -= ex14_2_1_pd[26];
	dv[4] = -ex14_2_1_pd[24];
	J[17] += dv[4]*0.768;
	dv[5] = -ex14_2_1_pd[24];
	J[10] += dv[5]*0.48;
	J[3] -= ex14_2_1_pd[24];
	J[30] = -1.;

   /*** derivatives for constraint 5 ***/

	J[25] = -ex14_2_1_pd[39];
	J[18] = -ex14_2_1_pd[38];
	dv[0] = -ex14_2_1_pd[38];
	J[11] = dv[0]*0.65;
	J[4] = -ex14_2_1_pd[38]*0.566;
	J[18] -= ex14_2_1_pd[37]*0.65;
	J[11] -= ex14_2_1_pd[35];
	dv[1] = -ex14_2_1_pd[36];
	J[18] += dv[1]*0.544;
	J[11] -= ex14_2_1_pd[36];
	J[4] -= ex14_2_1_pd[36]*1.55;
	dv[2] = -ex14_2_1_pd[34];
	J[18] += dv[2]*0.768;
	dv[3] = -ex14_2_1_pd[34];
	J[11] += dv[3]*0.48;
	J[4] -= ex14_2_1_pd[34];
	J[4] -= ex14_2_1_pd[33]*0.48;
	dv[4] = -ex14_2_1_pd[32];
	J[18] += dv[4]*0.544;
	J[11] -= ex14_2_1_pd[32];
	J[4] -= ex14_2_1_pd[32]*1.55;
	J[31] = -1.;

   /*** derivatives for constraint 6 ***/

	J[26] = -ex14_2_1_pd[47];
	J[19] = -ex14_2_1_pd[45];
	J[19] -= ex14_2_1_pd[46];
	dv[0] = -ex14_2_1_pd[46];
	J[12] = dv[0]*0.65;
	J[5] = -ex14_2_1_pd[46]*0.566;
	dv[1] = -ex14_2_1_pd[44];
	J[19] += dv[1]*0.544;
	J[12] -= ex14_2_1_pd[44];
	J[5] -= ex14_2_1_pd[44]*1.55;
	J[12] -= ex14_2_1_pd[43]*0.544;
	dv[2] = -ex14_2_1_pd[42];
	J[19] += dv[2]*0.768;
	dv[3] = -ex14_2_1_pd[42];
	J[12] += dv[3]*0.48;
	J[5] -= ex14_2_1_pd[42];
	J[5] -= ex14_2_1_pd[41]*0.768;
	J[19] -= ex14_2_1_pd[40];
	dv[4] = -ex14_2_1_pd[40];
	J[12] += dv[4]*0.65;
	J[5] -= ex14_2_1_pd[40]*0.566;
	J[32] = -1.;

   /*** derivatives for constraint 7 ***/

	J[6] = 1.;
	J[13] = 1.;
	J[20] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
