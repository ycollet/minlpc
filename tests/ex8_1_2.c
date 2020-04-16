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
 fint ex8_1_2_auxcom_[1] = { 0 /* nlc */ };
 fint ex8_1_2_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real ex8_1_2_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		6.28318};

 real ex8_1_2_x0comn_[1] = {
		0. };

 static real ex8_1_2_pd[24];
static real ex8_1_2_old_x[1];
static int ex8_1_2_xkind = -1;

 static int
ex8_1_2_xcheck(real *x)
{
	real *x1 = ex8_1_2_old_x, *xe = x + 1;
	errno = 0;
	if (ex8_1_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex8_1_2_xkind = 0;
	return 1;
	}
 real
ex8_1_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[6];
	fint wantfg = *needfg;
	if (ex8_1_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + -2.09439333333333;
	ex8_1_2_pd[0] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	ex8_1_2_pd[1] = -sin(v[0]);
	v[0] = -4.21478541710781 * ex8_1_2_pd[0];
	v[1] = 10.8095222429746 + v[0];
	v[0] = pow(v[1], 6.);
	if (errno) in_trouble2("pow",v[1],6.);
	if (v[1] != 0.) {
	ex8_1_2_pd[2] = 6.*(v[0]/v[1]);
	} else {
	ex8_1_2_pd[2] = 0.;
	}
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = 588600. / v[0];
	ex8_1_2_pd[3] = -v[1] / v[0];
	v[0] = x[0] + -2.09439333333333;
	ex8_1_2_pd[4] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	ex8_1_2_pd[5] = -sin(v[0]);
	v[0] = -4.21478541710781 * ex8_1_2_pd[4];
	v[2] = 10.8095222429746 + v[0];
	v[0] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	ex8_1_2_pd[6] = 3.*(v[2]*v[2]);
	} else {
	ex8_1_2_pd[6] = 0.;
	}
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = 1079.1 / v[0];
	ex8_1_2_pd[7] = -v[2] / v[0];
	v[0] = -v[2];
	v[1] += v[0];
	ex8_1_2_pd[8] = cos(x[0]);
	if (errno) in_trouble("cos",x[0]);
	ex8_1_2_pd[9] = -sin(x[0]);
	v[0] = -4.21478541710781 * ex8_1_2_pd[8];
	v[2] = 10.8095222429746 + v[0];
	v[0] = pow(v[2], 6.);
	if (errno) in_trouble2("pow",v[2],6.);
	if (v[2] != 0.) {
	ex8_1_2_pd[10] = 6.*(v[0]/v[2]);
	} else {
	ex8_1_2_pd[10] = 0.;
	}
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = 600800. / v[0];
	ex8_1_2_pd[11] = -v[2] / v[0];
	v[1] += v[2];
	ex8_1_2_pd[12] = cos(x[0]);
	if (errno) in_trouble("cos",x[0]);
	ex8_1_2_pd[13] = -sin(x[0]);
	v[2] = -4.21478541710781 * ex8_1_2_pd[12];
	v[0] = 10.8095222429746 + v[2];
	v[2] = pow(v[0], 3.);
	if (errno) in_trouble2("pow",v[0],3.);
	if (v[0] != 0.) {
	ex8_1_2_pd[14] = 3.*(v[0]*v[0]);
	} else {
	ex8_1_2_pd[14] = 0.;
	}
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = 1071.5 / v[2];
	ex8_1_2_pd[15] = -v[0] / v[2];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[0] + 2.09439333333333;
	ex8_1_2_pd[16] = cos(v[2]);
	if (errno) in_trouble("cos",v[2]);
	ex8_1_2_pd[17] = -sin(v[2]);
	v[2] = -4.21478541710781 * ex8_1_2_pd[16];
	v[0] = 10.8095222429746 + v[2];
	v[2] = pow(v[0], 6.);
	if (errno) in_trouble2("pow",v[0],6.);
	if (v[0] != 0.) {
	ex8_1_2_pd[18] = 6.*(v[2]/v[0]);
	} else {
	ex8_1_2_pd[18] = 0.;
	}
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[0] = 481300. / v[2];
	ex8_1_2_pd[19] = -v[0] / v[2];
	v[1] += v[0];
	v[0] = x[0] + 2.09439333333333;
	ex8_1_2_pd[20] = cos(v[0]);
	if (errno) in_trouble("cos",v[0]);
	ex8_1_2_pd[21] = -sin(v[0]);
	v[0] = -4.21478541710781 * ex8_1_2_pd[20];
	v[2] = 10.8095222429746 + v[0];
	v[0] = pow(v[2], 3.);
	if (errno) in_trouble2("pow",v[2],3.);
	if (v[2] != 0.) {
	ex8_1_2_pd[22] = 3.*(v[2]*v[2]);
	} else {
	ex8_1_2_pd[22] = 0.;
	}
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[2] = 1064.6 / v[0];
	ex8_1_2_pd[23] = -v[2] / v[0];
	v[0] = -v[2];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	dv[0] = -ex8_1_2_pd[23]*ex8_1_2_pd[22];
	dv[0] = -dv[0]*4.21478541710781;
	dv[0] *= ex8_1_2_pd[21];
	g[0] = dv[0];
	dv[1] = ex8_1_2_pd[19]*ex8_1_2_pd[18];
	dv[1] = -dv[1]*4.21478541710781;
	dv[1] *= ex8_1_2_pd[17];
	g[0] += dv[1];
	dv[2] = -ex8_1_2_pd[15]*ex8_1_2_pd[14];
	dv[2] = -dv[2]*4.21478541710781;
	g[0] += dv[2]*ex8_1_2_pd[13];
	dv[3] = ex8_1_2_pd[11]*ex8_1_2_pd[10];
	dv[3] = -dv[3]*4.21478541710781;
	g[0] += dv[3]*ex8_1_2_pd[9];
	dv[4] = -ex8_1_2_pd[7]*ex8_1_2_pd[6];
	dv[4] = -dv[4]*4.21478541710781;
	dv[4] *= ex8_1_2_pd[5];
	g[0] += dv[4];
	dv[5] = ex8_1_2_pd[3]*ex8_1_2_pd[2];
	dv[5] = -dv[5]*4.21478541710781;
	dv[5] *= ex8_1_2_pd[1];
	g[0] += dv[5];
	}

	return v[1];
}

 void
ex8_1_2_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
