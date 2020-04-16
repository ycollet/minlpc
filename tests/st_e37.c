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
 fint st_e37_auxcom_[1] = { 0 /* nlc */ };
 fint st_e37_funcom_[13] = {
	4 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	2 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	3,
	3,

	/* rownos */
	1,
	1 };

 real st_e37_boundc_[1+8+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		100.,
		0.,
		100.,
		1.,
		1.,
		1.,
		1.,
		-1.7e308,
		0.};

 real st_e37_x0comn_[4] = {
		0.,
		0.,
		1.,
		1. };

 static real st_e37_pd[51];
static real st_e37_old_x[4];
static int st_e37_xkind = -1;

 static int
st_e37_xcheck(real *x)
{
	real *x1 = st_e37_old_x, *xe = x + 4;
	errno = 0;
	if (st_e37_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e37_xkind = 0;
	return 1;
	}
 real
st_e37_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[20];
	fint wantfg = *needfg;
	if (st_e37_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[2] + -1.9837;
	v[0] += x[3];
	v[1] = v[0] * v[0];
	st_e37_pd[0] = v[0] + v[0];
	v[0] = -x[0];
	st_e37_pd[1] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[2] = st_e37_pd[1];
	v[0] = st_e37_pd[1] * x[2];
	v[0] += -0.8393;
	v[2] = -x[1];
	st_e37_pd[3] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[4] = st_e37_pd[3];
	v[2] = st_e37_pd[3] * x[3];
	v[0] += v[2];
	v[2] = v[0] * v[0];
	st_e37_pd[5] = v[0] + v[0];
	v[1] += v[2];
	v[2] = -2. * x[0];
	st_e37_pd[6] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[7] = st_e37_pd[6];
	v[2] = st_e37_pd[6] * x[2];
	v[2] += -0.4305;
	v[0] = -2. * x[1];
	st_e37_pd[8] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[9] = st_e37_pd[8];
	v[0] = st_e37_pd[8] * x[3];
	v[2] += v[0];
	v[0] = v[2] * v[2];
	st_e37_pd[10] = v[2] + v[2];
	v[1] += v[0];
	v[0] = -3. * x[0];
	st_e37_pd[11] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[12] = st_e37_pd[11];
	v[0] = st_e37_pd[11] * x[2];
	v[0] += -0.2441;
	v[2] = -3. * x[1];
	st_e37_pd[13] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[14] = st_e37_pd[13];
	v[2] = st_e37_pd[13] * x[3];
	v[0] += v[2];
	v[2] = v[0] * v[0];
	st_e37_pd[15] = v[0] + v[0];
	v[1] += v[2];
	v[2] = -4. * x[0];
	st_e37_pd[16] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[17] = st_e37_pd[16];
	v[2] = st_e37_pd[16] * x[2];
	v[2] += -0.1248;
	v[0] = -4. * x[1];
	st_e37_pd[18] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[19] = st_e37_pd[18];
	v[0] = st_e37_pd[18] * x[3];
	v[2] += v[0];
	v[0] = v[2] * v[2];
	st_e37_pd[20] = v[2] + v[2];
	v[1] += v[0];
	v[0] = -5. * x[0];
	st_e37_pd[21] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[22] = st_e37_pd[21];
	v[0] = st_e37_pd[21] * x[2];
	v[0] += -0.0981;
	v[2] = -5. * x[1];
	st_e37_pd[23] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[24] = st_e37_pd[23];
	v[2] = st_e37_pd[23] * x[3];
	v[0] += v[2];
	v[2] = v[0] * v[0];
	st_e37_pd[25] = v[0] + v[0];
	v[1] += v[2];
	v[2] = -6. * x[0];
	st_e37_pd[26] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[27] = st_e37_pd[26];
	v[2] = st_e37_pd[26] * x[2];
	v[2] += -0.0549;
	v[0] = -6. * x[1];
	st_e37_pd[28] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[29] = st_e37_pd[28];
	v[0] = st_e37_pd[28] * x[3];
	v[2] += v[0];
	v[0] = v[2] * v[2];
	st_e37_pd[30] = v[2] + v[2];
	v[1] += v[0];
	v[0] = -7. * x[0];
	st_e37_pd[31] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[32] = st_e37_pd[31];
	v[0] = st_e37_pd[31] * x[2];
	v[0] += -0.0174;
	v[2] = -7. * x[1];
	st_e37_pd[33] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[34] = st_e37_pd[33];
	v[2] = st_e37_pd[33] * x[3];
	v[0] += v[2];
	v[2] = v[0] * v[0];
	st_e37_pd[35] = v[0] + v[0];
	v[1] += v[2];
	v[2] = -8. * x[0];
	st_e37_pd[36] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[37] = st_e37_pd[36];
	v[2] = st_e37_pd[36] * x[2];
	v[2] += -0.0249;
	v[0] = -8. * x[1];
	st_e37_pd[38] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[39] = st_e37_pd[38];
	v[0] = st_e37_pd[38] * x[3];
	v[2] += v[0];
	v[0] = v[2] * v[2];
	st_e37_pd[40] = v[2] + v[2];
	v[1] += v[0];
	v[0] = -9. * x[0];
	st_e37_pd[41] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[42] = st_e37_pd[41];
	v[0] = st_e37_pd[41] * x[2];
	v[0] += -0.0154;
	v[2] = -9. * x[1];
	st_e37_pd[43] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[44] = st_e37_pd[43];
	v[2] = st_e37_pd[43] * x[3];
	v[0] += v[2];
	v[2] = v[0] * v[0];
	st_e37_pd[45] = v[0] + v[0];
	v[1] += v[2];
	v[2] = -10. * x[0];
	st_e37_pd[46] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	st_e37_pd[47] = st_e37_pd[46];
	v[2] = st_e37_pd[46] * x[2];
	v[2] += -0.0127;
	v[0] = -10. * x[1];
	st_e37_pd[48] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	st_e37_pd[49] = st_e37_pd[48];
	v[0] = st_e37_pd[48] * x[3];
	v[2] += v[0];
	v[0] = v[2] * v[2];
	st_e37_pd[50] = v[2] + v[2];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	dv[0] = st_e37_pd[50];
	g[3] = dv[0]*st_e37_pd[48];
	dv[0] *= x[3];
	dv[0] *= st_e37_pd[49];
	g[1] = -dv[0]*10.;
	g[2] = st_e37_pd[50]*st_e37_pd[46];
	dv[1] = st_e37_pd[50]*x[2];
	dv[1] *= st_e37_pd[47];
	g[0] = -dv[1]*10.;
	dv[2] = st_e37_pd[45];
	g[3] += dv[2]*st_e37_pd[43];
	dv[2] *= x[3];
	dv[2] *= st_e37_pd[44];
	g[1] -= dv[2]*9.;
	g[2] += st_e37_pd[45]*st_e37_pd[41];
	dv[3] = st_e37_pd[45]*x[2];
	dv[3] *= st_e37_pd[42];
	g[0] -= dv[3]*9.;
	dv[4] = st_e37_pd[40];
	g[3] += dv[4]*st_e37_pd[38];
	dv[4] *= x[3];
	dv[4] *= st_e37_pd[39];
	g[1] -= dv[4]*8.;
	g[2] += st_e37_pd[40]*st_e37_pd[36];
	dv[5] = st_e37_pd[40]*x[2];
	dv[5] *= st_e37_pd[37];
	g[0] -= dv[5]*8.;
	dv[6] = st_e37_pd[35];
	g[3] += dv[6]*st_e37_pd[33];
	dv[6] *= x[3];
	dv[6] *= st_e37_pd[34];
	g[1] -= dv[6]*7.;
	g[2] += st_e37_pd[35]*st_e37_pd[31];
	dv[7] = st_e37_pd[35]*x[2];
	dv[7] *= st_e37_pd[32];
	g[0] -= dv[7]*7.;
	dv[8] = st_e37_pd[30];
	g[3] += dv[8]*st_e37_pd[28];
	dv[8] *= x[3];
	dv[8] *= st_e37_pd[29];
	g[1] -= dv[8]*6.;
	g[2] += st_e37_pd[30]*st_e37_pd[26];
	dv[9] = st_e37_pd[30]*x[2];
	dv[9] *= st_e37_pd[27];
	g[0] -= dv[9]*6.;
	dv[10] = st_e37_pd[25];
	g[3] += dv[10]*st_e37_pd[23];
	dv[10] *= x[3];
	dv[10] *= st_e37_pd[24];
	g[1] -= dv[10]*5.;
	g[2] += st_e37_pd[25]*st_e37_pd[21];
	dv[11] = st_e37_pd[25]*x[2];
	dv[11] *= st_e37_pd[22];
	g[0] -= dv[11]*5.;
	dv[12] = st_e37_pd[20];
	g[3] += dv[12]*st_e37_pd[18];
	dv[12] *= x[3];
	dv[12] *= st_e37_pd[19];
	g[1] -= dv[12]*4.;
	g[2] += st_e37_pd[20]*st_e37_pd[16];
	dv[13] = st_e37_pd[20]*x[2];
	dv[13] *= st_e37_pd[17];
	g[0] -= dv[13]*4.;
	dv[14] = st_e37_pd[15];
	g[3] += dv[14]*st_e37_pd[13];
	dv[14] *= x[3];
	dv[14] *= st_e37_pd[14];
	g[1] -= dv[14]*3.;
	g[2] += st_e37_pd[15]*st_e37_pd[11];
	dv[15] = st_e37_pd[15]*x[2];
	dv[15] *= st_e37_pd[12];
	g[0] -= dv[15]*3.;
	dv[16] = st_e37_pd[10];
	g[3] += dv[16]*st_e37_pd[8];
	dv[16] *= x[3];
	dv[16] *= st_e37_pd[9];
	g[1] -= dv[16]*2.;
	g[2] += st_e37_pd[10]*st_e37_pd[6];
	dv[17] = st_e37_pd[10]*x[2];
	dv[17] *= st_e37_pd[7];
	g[0] -= dv[17]*2.;
	dv[18] = st_e37_pd[5];
	g[3] += dv[18]*st_e37_pd[3];
	dv[18] *= x[3];
	dv[18] *= st_e37_pd[4];
	g[1] -= dv[18];
	g[2] += st_e37_pd[5]*st_e37_pd[1];
	dv[19] = st_e37_pd[5]*x[2];
	dv[19] *= st_e37_pd[2];
	g[0] -= dv[19];
	g[3] += st_e37_pd[0];
	g[2] += st_e37_pd[0];
	}

	return v[1];
}

 void
st_e37_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_e37_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += -x[1];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[1] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
