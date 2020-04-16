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
 fint harker_auxcom_[1] = { 0 /* nlc */ };
 fint harker_funcom_[67] = {
	20 /* nvar */,
	1 /* nobj */,
	7 /* ncon */,
	40 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	11,
	13,
	15,
	17,
	19,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	39,
	41,

	/* rownos */
	1,
	5,
	2,
	6,
	3,
	7,
	4,
	7,
	2,
	5,
	5,
	6,
	5,
	7,
	2,
	6,
	5,
	6,
	6,
	7,
	3,
	7,
	4,
	7,
	5,
	7,
	6,
	7,
	1,
	2,
	1,
	3,
	1,
	4,
	1,
	2,
	1,
	3,
	1,
	4 };

 real harker_boundc_[1+40+14] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
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
		0.};

 real harker_x0comn_[20] = {
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
		25.,
		25.,
		25.,
		25.,
		25.,
		25. };

 static real harker_pd[26];
static real harker_old_x[20];
static int harker_xkind = -1;

 static int
harker_xcheck(real *x)
{
	real *x1 = harker_old_x, *xe = x + 20;
	errno = 0;
	if (harker_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	harker_xkind = 0;
	return 1;
	}
 real
harker_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (harker_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	harker_pd[0] = x[14] * x[14];
	harker_pd[1] = x[14] + x[14];
	v[0] = 0.1 * harker_pd[0];
	harker_pd[2] = x[17] * x[17];
	harker_pd[3] = x[17] + x[17];
	v[1] = 0.5 * harker_pd[2];
	v[0] += v[1];
	harker_pd[4] = x[15] * x[15];
	harker_pd[5] = x[15] + x[15];
	v[1] = 0.005 * harker_pd[4];
	v[0] += v[1];
	harker_pd[6] = x[18] * x[18];
	harker_pd[7] = x[18] + x[18];
	v[1] = 0.4 * harker_pd[6];
	v[0] += v[1];
	harker_pd[8] = x[16] * x[16];
	harker_pd[9] = x[16] + x[16];
	v[1] = 0.15 * harker_pd[8];
	v[0] += v[1];
	harker_pd[10] = x[19] * x[19];
	harker_pd[11] = x[19] + x[19];
	v[1] = 0.3 * harker_pd[10];
	v[0] += v[1];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	harker_pd[12] = 3.*(x[0]*x[0]);
	} else {
	harker_pd[12] = 0.;
	}
	v[1] *= 0.166666666666667;
	v[0] += v[1];
	v[1] = pow(x[1], 3.);
	if (errno) in_trouble2("pow",x[1],3.);
	if (x[1] != 0.) {
	harker_pd[13] = 3.*(x[1]*x[1]);
	} else {
	harker_pd[13] = 0.;
	}
	v[1] *= 0.0666666666666667;
	v[0] += v[1];
	v[1] = pow(x[2], 3.);
	if (errno) in_trouble2("pow",x[2],3.);
	if (x[2] != 0.) {
	harker_pd[14] = 3.*(x[2]*x[2]);
	} else {
	harker_pd[14] = 0.;
	}
	v[1] *= 0.1;
	v[0] += v[1];
	v[1] = pow(x[3], 3.);
	if (errno) in_trouble2("pow",x[3],3.);
	if (x[3] != 0.) {
	harker_pd[15] = 3.*(x[3]*x[3]);
	} else {
	harker_pd[15] = 0.;
	}
	v[1] *= 0.133333333333333;
	v[0] += v[1];
	v[1] = pow(x[4], 3.);
	if (errno) in_trouble2("pow",x[4],3.);
	if (x[4] != 0.) {
	harker_pd[16] = 3.*(x[4]*x[4]);
	} else {
	harker_pd[16] = 0.;
	}
	v[1] *= 0.1;
	v[0] += v[1];
	v[1] = pow(x[5], 3.);
	if (errno) in_trouble2("pow",x[5],3.);
	if (x[5] != 0.) {
	harker_pd[17] = 3.*(x[5]*x[5]);
	} else {
	harker_pd[17] = 0.;
	}
	v[1] *= 0.0333333333333333;
	v[0] += v[1];
	v[1] = pow(x[6], 3.);
	if (errno) in_trouble2("pow",x[6],3.);
	if (x[6] != 0.) {
	harker_pd[18] = 3.*(x[6]*x[6]);
	} else {
	harker_pd[18] = 0.;
	}
	v[1] *= 0.0333333333333333;
	v[0] += v[1];
	v[1] = pow(x[7], 3.);
	if (errno) in_trouble2("pow",x[7],3.);
	if (x[7] != 0.) {
	harker_pd[19] = 3.*(x[7]*x[7]);
	} else {
	harker_pd[19] = 0.;
	}
	v[1] *= 0.166666666666667;
	v[0] += v[1];
	v[1] = pow(x[8], 3.);
	if (errno) in_trouble2("pow",x[8],3.);
	if (x[8] != 0.) {
	harker_pd[20] = 3.*(x[8]*x[8]);
	} else {
	harker_pd[20] = 0.;
	}
	v[1] *= 0.0666666666666667;
	v[0] += v[1];
	v[1] = pow(x[9], 3.);
	if (errno) in_trouble2("pow",x[9],3.);
	if (x[9] != 0.) {
	harker_pd[21] = 3.*(x[9]*x[9]);
	} else {
	harker_pd[21] = 0.;
	}
	v[1] *= 0.333333333333333;
	v[0] += v[1];
	v[1] = pow(x[10], 3.);
	if (errno) in_trouble2("pow",x[10],3.);
	if (x[10] != 0.) {
	harker_pd[22] = 3.*(x[10]*x[10]);
	} else {
	harker_pd[22] = 0.;
	}
	v[1] *= 0.0833333333333333;
	v[0] += v[1];
	v[1] = pow(x[11], 3.);
	if (errno) in_trouble2("pow",x[11],3.);
	if (x[11] != 0.) {
	harker_pd[23] = 3.*(x[11]*x[11]);
	} else {
	harker_pd[23] = 0.;
	}
	v[1] *= 0.0666666666666667;
	v[0] += v[1];
	v[1] = pow(x[12], 3.);
	if (errno) in_trouble2("pow",x[12],3.);
	if (x[12] != 0.) {
	harker_pd[24] = 3.*(x[12]*x[12]);
	} else {
	harker_pd[24] = 0.;
	}
	v[1] *= 0.3;
	v[0] += v[1];
	v[1] = pow(x[13], 3.);
	if (errno) in_trouble2("pow",x[13],3.);
	if (x[13] != 0.) {
	harker_pd[25] = 3.*(x[13]*x[13]);
	} else {
	harker_pd[25] = 0.;
	}
	v[1] *= 0.266666666666667;
	v[0] += v[1];
	rv = v[0] + x[0];
	rv += 2.*x[1];
	rv += 3.*x[2];
	rv += x[3];
	rv += 2.*x[4];
	rv += x[5];
	rv += x[6];
	rv += 3.*x[7];
	rv += 2.*x[8];
	rv += x[9];
	rv += 2.*x[10];
	rv += 2.*x[11];
	rv += x[12];
	rv += 3.*x[13];
	rv += -19.*x[14];
	rv += -27.*x[15];
	rv += -30.*x[16];
	rv += x[17];
	rv += 2.*x[18];
	rv += 1.5*x[19];
	;}

	if (wantfg & 2) {
	g[13] = 0.266666666666667*harker_pd[25] + 3.;
	g[12] = 0.3*harker_pd[24] + 1.;
	g[11] = 0.0666666666666667*harker_pd[23] + 2.;
	g[10] = 0.0833333333333333*harker_pd[22] + 2.;
	g[9] = 0.333333333333333*harker_pd[21] + 1.;
	g[8] = 0.0666666666666667*harker_pd[20] + 2.;
	g[7] = 0.166666666666667*harker_pd[19] + 3.;
	g[6] = 0.0333333333333333*harker_pd[18] + 1.;
	g[5] = 0.0333333333333333*harker_pd[17] + 1.;
	g[4] = 0.1*harker_pd[16] + 2.;
	g[3] = 0.133333333333333*harker_pd[15] + 1.;
	g[2] = 0.1*harker_pd[14] + 3.;
	g[1] = 0.0666666666666667*harker_pd[13] + 2.;
	g[0] = 0.166666666666667*harker_pd[12] + 1.;
	g[19] = 0.3*harker_pd[11] + 1.5;
	g[16] = 0.15*harker_pd[9] + -30.;
	g[18] = 0.4*harker_pd[7] + 2.;
	g[15] = 0.005*harker_pd[5] + -27.;
	g[17] = 0.5*harker_pd[3] + 1.;
	g[14] = 0.1*harker_pd[1] + -19.;
	}

	return rv;
}

 void
harker_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (harker_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += x[4];
	t1 += x[7];
	t1 += -x[14];
	t1 += x[17];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[2];
	t1 += x[10];
	t1 += -x[15];
	t1 += x[18];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += x[11];
	t1 += -x[16];
	t1 += x[19];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += x[8];
	t1 += x[12];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += x[5];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += x[13];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += x[3];
	t1 += x[6];
	t1 += x[9];
	t1 += -x[10];
	t1 += -x[11];
	t1 += -x[12];
	t1 += -x[13];
	c[6] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[28] = 1.;
	J[30] = 1.;
	J[32] = 1.;
	J[34] = -1.;
	J[36] = -1.;
	J[38] = -1.;

   /*** derivatives for constraint 2 ***/

	J[0] = -1.;
	J[2] = -1.;
	J[8] = 1.;
	J[14] = 1.;
	J[29] = -1.;
	J[35] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = -1.;
	J[20] = 1.;
	J[31] = -1.;
	J[37] = 1.;

   /*** derivatives for constraint 4 ***/

	J[6] = -1.;
	J[22] = 1.;
	J[33] = -1.;
	J[39] = 1.;

   /*** derivatives for constraint 5 ***/

	J[1] = 1.;
	J[9] = -1.;
	J[10] = -1.;
	J[12] = -1.;
	J[16] = 1.;
	J[24] = 1.;

   /*** derivatives for constraint 6 ***/

	J[3] = 1.;
	J[11] = 1.;
	J[15] = -1.;
	J[17] = -1.;
	J[18] = -1.;
	J[26] = 1.;

   /*** derivatives for constraint 7 ***/

	J[5] = 1.;
	J[7] = 1.;
	J[13] = 1.;
	J[19] = 1.;
	J[21] = -1.;
	J[23] = -1.;
	J[25] = -1.;
	J[27] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
