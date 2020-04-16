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
 fint st_e25_auxcom_[1] = { 0 /* nlc */ };
 fint st_e25_funcom_[43] = {
	4 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	32 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	9,
	17,
	25,
	33,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8 };

 real st_e25_boundc_[1+8+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		3.562809,
		-1.7e308,
		-0.052215,
		-1.7e308,
		0.42792,
		-1.7e308,
		0.84095,
		-1.7e308,
		-1.353686,
		-1.7e308,
		2.137251,
		-1.7e308,
		-0.290987,
		-1.7e308,
		0.37362};

 real st_e25_x0comn_[4] = {
		0.,
		0.,
		0.,
		0. };

 static real st_e25_pd[4];
static real st_e25_old_x[4];
static int st_e25_xkind = -1;

 static int
st_e25_xcheck(real *x)
{
	real *x1 = st_e25_old_x, *xe = x + 4;
	errno = 0;
	if (st_e25_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e25_xkind = 0;
	return 1;
	}
 real
st_e25_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[6];
	fint wantfg = *needfg;
	if (st_e25_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e25_pd[0] = 0.813396 * x[0];
	st_e25_pd[3] = st_e25_pd[0] + 0.217796;
	v[1] = 0.67444 * x[1];
	st_e25_pd[3] += v[1];
	v[1] = 0.305038 * x[2];
	st_e25_pd[3] += v[1];
	v[1] = 0.129742 * x[3];
	st_e25_pd[3] += v[1];
	st_e25_pd[1] = 0.224508 * x[0];
	st_e25_pd[2] = st_e25_pd[1] + 0.091947;
	v[2] = 0.063458 * x[1];
	st_e25_pd[2] += v[2];
	v[2] = 0.93223 * x[2];
	st_e25_pd[2] += v[2];
	v[2] = 0.528736 * x[3];
	st_e25_pd[2] += v[2];
	v[2] = st_e25_pd[3] * st_e25_pd[2];
	;}

	if (wantfg & 2) {
	dv[0] = st_e25_pd[3];
	g[3] = dv[0]*0.528736;
	dv[1] = st_e25_pd[3];
	g[2] = dv[1]*0.93223;
	dv[2] = st_e25_pd[3];
	g[1] = dv[2]*0.063458;
	g[0] = st_e25_pd[3]*0.224508;
	dv[3] = st_e25_pd[2];
	g[3] += dv[3]*0.129742;
	dv[4] = st_e25_pd[2];
	g[2] += dv[4]*0.305038;
	dv[5] = st_e25_pd[2];
	g[1] += dv[5]*0.67444;
	g[0] += st_e25_pd[2]*0.813396;
	}

	return v[2];
}

 void
st_e25_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_e25_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 0.488509*x[0];
	t1 += 0.063565*x[1];
	t1 += 0.945686*x[2];
	t1 += 0.210704*x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -0.324014*x[0];
	t1 += -0.501754*x[1];
	t1 += -0.719204*x[2];
	t1 += 0.099562*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 0.445225*x[0];
	t1 += -0.346896*x[1];
	t1 += 0.637939*x[2];
	t1 += -0.257623*x[3];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -0.202821*x[0];
	t1 += 0.647361*x[1];
	t1 += 0.920135*x[2];
	t1 += 0.983091*x[3];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -0.88642*x[0];
	t1 += -0.802444*x[1];
	t1 += -0.305441*x[2];
	t1 += -0.180123*x[3];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -0.515399*x[0];
	t1 += -0.42482*x[1];
	t1 += 0.897498*x[2];
	t1 += 0.187268*x[3];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -0.591515*x[0];
	t1 += 0.060581*x[1];
	t1 += -0.427365*x[2];
	t1 += 0.579388*x[3];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 0.423524*x[0];
	t1 += 0.940496*x[1];
	t1 += -0.437944*x[2];
	t1 += -0.742941*x[3];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 0.488509;
	J[8] = 0.063565;
	J[16] = 0.945686;
	J[24] = 0.210704;

   /*** derivatives for constraint 2 ***/

	J[1] = -0.324014;
	J[9] = -0.501754;
	J[17] = -0.719204;
	J[25] = 0.099562;

   /*** derivatives for constraint 3 ***/

	J[2] = 0.445225;
	J[10] = -0.346896;
	J[18] = 0.637939;
	J[26] = -0.257623;

   /*** derivatives for constraint 4 ***/

	J[3] = -0.202821;
	J[11] = 0.647361;
	J[19] = 0.920135;
	J[27] = 0.983091;

   /*** derivatives for constraint 5 ***/

	J[4] = -0.88642;
	J[12] = -0.802444;
	J[20] = -0.305441;
	J[28] = -0.180123;

   /*** derivatives for constraint 6 ***/

	J[5] = -0.515399;
	J[13] = -0.42482;
	J[21] = 0.897498;
	J[29] = 0.187268;

   /*** derivatives for constraint 7 ***/

	J[6] = -0.591515;
	J[14] = 0.060581;
	J[22] = -0.427365;
	J[30] = 0.579388;

   /*** derivatives for constraint 8 ***/

	J[7] = 0.423524;
	J[15] = 0.940496;
	J[23] = -0.437944;
	J[31] = -0.742941;
	}
}
#ifdef __cplusplus
	}
#endif
