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
 fint least_auxcom_[1] = { 0 /* nlc */ };
 fint least_funcom_[6] = {
	3 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real least_boundc_[1+6+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-5.,
		5.};

 real least_x0comn_[3] = {
		500.,
		-150.,
		-0.2 };

 static real least_pd[18];
static real least_old_x[3];
static int least_xkind = -1;

 static int
least_xcheck(real *x)
{
	real *x1 = least_old_x, *xe = x + 3;
	errno = 0;
	if (least_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	least_xkind = 0;
	return 1;
	}
 real
least_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[6];
	fint wantfg = *needfg;
	if (least_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = -5. * x[2];
	least_pd[0] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	least_pd[1] = least_pd[0];
	v[0] = least_pd[0] * x[1];
	v[1] = 127. - v[0];
	v[0] = v[1] - x[0];
	v[1] = v[0] * v[0];
	least_pd[2] = v[0] + v[0];
	v[0] = -3. * x[2];
	least_pd[3] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	least_pd[4] = least_pd[3];
	v[0] = least_pd[3] * x[1];
	v[2] = 151. - v[0];
	v[0] = v[2] - x[0];
	v[2] = v[0] * v[0];
	least_pd[5] = v[0] + v[0];
	v[1] += v[2];
	v[2] = -x[2];
	least_pd[6] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	least_pd[7] = least_pd[6];
	v[2] = least_pd[6] * x[1];
	v[0] = 379. - v[2];
	v[2] = v[0] - x[0];
	v[0] = v[2] * v[2];
	least_pd[8] = v[2] + v[2];
	v[1] += v[0];
	v[0] = 5. * x[2];
	least_pd[9] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	least_pd[10] = least_pd[9];
	v[0] = least_pd[9] * x[1];
	v[2] = 421. - v[0];
	v[0] = v[2] - x[0];
	v[2] = v[0] * v[0];
	least_pd[11] = v[0] + v[0];
	v[1] += v[2];
	v[2] = 3. * x[2];
	least_pd[12] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	least_pd[13] = least_pd[12];
	v[2] = least_pd[12] * x[1];
	v[0] = 460. - v[2];
	v[2] = v[0] - x[0];
	v[0] = v[2] * v[2];
	least_pd[14] = v[2] + v[2];
	v[1] += v[0];
	least_pd[15] = exp(x[2]);
	if (errno) in_trouble("exp",x[2]);
	least_pd[16] = least_pd[15];
	v[0] = least_pd[15] * x[1];
	v[2] = 426. - v[0];
	v[0] = v[2] - x[0];
	v[2] = v[0] * v[0];
	least_pd[17] = v[0] + v[0];
	v[1] += v[2];
	;}

	if (wantfg & 2) {
	g[0] = -least_pd[17];
	least_pd[17] += least_pd[17];
	g[1] = -least_pd[17]*least_pd[15];
	dv[0] = -least_pd[17]*x[1];
	g[2] = dv[0]*least_pd[16];
	g[0] -= least_pd[14];
	least_pd[14] += least_pd[14];
	g[1] -= least_pd[14]*least_pd[12];
	dv[1] = -least_pd[14]*x[1];
	dv[1] *= least_pd[13];
	g[2] += dv[1]*3.;
	g[0] -= least_pd[11];
	least_pd[11] += least_pd[11];
	g[1] -= least_pd[11]*least_pd[9];
	dv[2] = -least_pd[11]*x[1];
	dv[2] *= least_pd[10];
	g[2] += dv[2]*5.;
	g[0] -= least_pd[8];
	least_pd[8] += least_pd[8];
	g[1] -= least_pd[8]*least_pd[6];
	dv[3] = -least_pd[8]*x[1];
	dv[3] *= least_pd[7];
	g[2] -= dv[3];
	g[0] -= least_pd[5];
	least_pd[5] += least_pd[5];
	g[1] -= least_pd[5]*least_pd[3];
	dv[4] = -least_pd[5]*x[1];
	dv[4] *= least_pd[4];
	g[2] -= dv[4]*3.;
	g[0] -= least_pd[2];
	least_pd[2] += least_pd[2];
	g[1] -= least_pd[2]*least_pd[0];
	dv[5] = -least_pd[2]*x[1];
	dv[5] *= least_pd[1];
	g[2] -= dv[5]*5.;
	}

	return v[1];
}

 void
least_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
