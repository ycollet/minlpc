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
 fint nvs09_auxcom_[1] = { 0 /* nlc */ };
 fint nvs09_funcom_[6] = {
	10 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real nvs09_boundc_[1+20+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		3.,
		9.,
		3.,
		9.,
		3.,
		9.,
		3.,
		9.,
		3.,
		9.,
		3.,
		9.,
		3.,
		9.,
		3.,
		9.,
		3.,
		9.,
		3.,
		9.};

 real nvs09_x0comn_[10] = {
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5. };

 static real nvs09_pd[49];
static real nvs09_old_x[10];
static int nvs09_xkind = -1;

 static int
nvs09_xcheck(real *x)
{
	real *x1 = nvs09_old_x, *xe = x + 10;
	errno = 0;
	if (nvs09_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs09_xkind = 0;
	return 1;
	}
 real
nvs09_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[21];
	fint wantfg = *needfg;
	if (nvs09_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -2.;
	v[1] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	nvs09_pd[0] = 1. / v[0];
	v[0] = v[1] * v[1];
	nvs09_pd[1] = v[1] + v[1];
	v[1] = 10. - x[0];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[2] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[3] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[1] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[4] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[5] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[1];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[6] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[7] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[2] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[8] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[9] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[2];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[10] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[11] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[3] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[12] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[13] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[3];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[14] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[15] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[4] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[16] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[17] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[4];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[18] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[19] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[5] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[20] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[21] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[5];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[22] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[23] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[6] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[24] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[25] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[6];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[26] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[27] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[7] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[28] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[29] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[7];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[30] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[31] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[8] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[32] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[33] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[8];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[34] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[35] = v[2] + v[2];
	v[0] += v[1];
	v[1] = x[9] + -2.;
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[36] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[37] = v[2] + v[2];
	v[0] += v[1];
	v[1] = 10. - x[9];
	v[2] = log(v[1]);
	if (errno) in_trouble("log",v[1]);
	nvs09_pd[38] = 1. / v[1];
	v[1] = v[2] * v[2];
	nvs09_pd[39] = v[2] + v[2];
	v[0] += v[1];
	nvs09_pd[40] = x[0] * x[1];
	nvs09_pd[41] = nvs09_pd[40] * x[2];
	nvs09_pd[42] = nvs09_pd[41] * x[3];
	nvs09_pd[43] = nvs09_pd[42] * x[4];
	nvs09_pd[44] = nvs09_pd[43] * x[5];
	nvs09_pd[45] = nvs09_pd[44] * x[6];
	nvs09_pd[46] = nvs09_pd[45] * x[7];
	nvs09_pd[47] = nvs09_pd[46] * x[8];
	v[1] = nvs09_pd[47] * x[9];
	v[2] = pow(v[1], 0.2);
	if (errno) in_trouble2("pow",v[1],0.2);
	if (v[1] > 0.) {
	nvs09_pd[48] = 0.2*(v[2]/v[1]);
	} else if (0.2 > 1.) {
	nvs09_pd[48] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.2);
	}
	v[1] = -v[2];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[9] = -nvs09_pd[48]*nvs09_pd[47];
	dv[0] = -nvs09_pd[48]*x[9];
	g[8] = dv[0]*nvs09_pd[46];
	dv[0] *= x[8];
	g[7] = dv[0]*nvs09_pd[45];
	dv[0] *= x[7];
	g[6] = dv[0]*nvs09_pd[44];
	dv[0] *= x[6];
	g[5] = dv[0]*nvs09_pd[43];
	dv[0] *= x[5];
	g[4] = dv[0]*nvs09_pd[42];
	dv[0] *= x[4];
	g[3] = dv[0]*nvs09_pd[41];
	dv[0] *= x[3];
	g[2] = dv[0]*nvs09_pd[40];
	dv[0] *= x[2];
	g[1] = dv[0]*x[0];
	g[0] = dv[0]*x[1];
	dv[1] = nvs09_pd[39]*nvs09_pd[38];
	g[9] -= dv[1];
	dv[2] = nvs09_pd[37]*nvs09_pd[36];
	g[9] += dv[2];
	dv[3] = nvs09_pd[35]*nvs09_pd[34];
	g[8] -= dv[3];
	dv[4] = nvs09_pd[33]*nvs09_pd[32];
	g[8] += dv[4];
	dv[5] = nvs09_pd[31]*nvs09_pd[30];
	g[7] -= dv[5];
	dv[6] = nvs09_pd[29]*nvs09_pd[28];
	g[7] += dv[6];
	dv[7] = nvs09_pd[27]*nvs09_pd[26];
	g[6] -= dv[7];
	dv[8] = nvs09_pd[25]*nvs09_pd[24];
	g[6] += dv[8];
	dv[9] = nvs09_pd[23]*nvs09_pd[22];
	g[5] -= dv[9];
	dv[10] = nvs09_pd[21]*nvs09_pd[20];
	g[5] += dv[10];
	dv[11] = nvs09_pd[19]*nvs09_pd[18];
	g[4] -= dv[11];
	dv[12] = nvs09_pd[17]*nvs09_pd[16];
	g[4] += dv[12];
	dv[13] = nvs09_pd[15]*nvs09_pd[14];
	g[3] -= dv[13];
	dv[14] = nvs09_pd[13]*nvs09_pd[12];
	g[3] += dv[14];
	dv[15] = nvs09_pd[11]*nvs09_pd[10];
	g[2] -= dv[15];
	dv[16] = nvs09_pd[9]*nvs09_pd[8];
	g[2] += dv[16];
	dv[17] = nvs09_pd[7]*nvs09_pd[6];
	g[1] -= dv[17];
	dv[18] = nvs09_pd[5]*nvs09_pd[4];
	g[1] += dv[18];
	dv[19] = nvs09_pd[3]*nvs09_pd[2];
	g[0] -= dv[19];
	dv[20] = nvs09_pd[1]*nvs09_pd[0];
	g[0] += dv[20];
	}

	return v[0];
}

 void
nvs09_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
