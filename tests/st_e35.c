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
 fint st_e35_auxcom_[1] = { 0 /* nlc */ };
 fint st_e35_funcom_[146] = {
	32 /* nvar */,
	1 /* nobj */,
	39 /* ncon */,
	107 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	4,
	5,
	6,
	8,
	9,
	10,
	11,
	12,
	17,
	22,
	27,
	32,
	35,
	38,
	41,
	46,
	54,
	60,
	65,
	71,
	75,
	80,
	86,
	90,
	93,
	96,
	99,
	102,
	104,
	106,
	108,

	/* rownos */
	1,
	30,
	33,
	34,
	31,
	32,
	35,
	36,
	37,
	38,
	39,
	1,
	2,
	4,
	6,
	22,
	1,
	2,
	5,
	7,
	23,
	1,
	3,
	4,
	8,
	24,
	1,
	3,
	5,
	9,
	25,
	1,
	19,
	26,
	2,
	20,
	27,
	3,
	21,
	28,
	4,
	10,
	13,
	29,
	31,
	4,
	5,
	13,
	14,
	30,
	32,
	33,
	35,
	5,
	14,
	19,
	34,
	36,
	37,
	6,
	15,
	20,
	29,
	38,
	6,
	7,
	15,
	16,
	30,
	33,
	7,
	11,
	16,
	34,
	8,
	17,
	21,
	31,
	39,
	8,
	9,
	17,
	18,
	32,
	35,
	9,
	12,
	18,
	36,
	22,
	29,
	33,
	23,
	30,
	34,
	24,
	31,
	35,
	25,
	32,
	36,
	26,
	37,
	27,
	38,
	28,
	39 };

 real st_e35_boundc_[1+64+78] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.01,
		1000.,
		0.01,
		1000.,
		0.01,
		1000.,
		0.01,
		1000.,
		0.01,
		1000.,
		0.01,
		1000.,
		0.01,
		1000.,
		0.01,
		1000.,
		0.01,
		1000.,
		0.,
		1620.,
		0.,
		1620.,
		0.,
		360.,
		0.,
		360.,
		0.,
		1980.,
		0.,
		1620.,
		0.,
		360.,
		0.,
		600.,
		0.,
		600.,
		350.,
		600.,
		0.,
		430.,
		0.,
		600.,
		0.,
		600.,
		0.,
		368.,
		0.,
		600.,
		0.,
		600.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		1980.,
		1980.,
		1620.,
		1620.,
		360.,
		360.,
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
		440.,
		440.,
		349.,
		349.,
		320.,
		320.,
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
		7700.,
		7700.,
		-8600.,
		-8600.,
		-2760.,
		-2760.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		200.,
		-1.7e308,
		-120.,
		-1.7e308,
		700.,
		-1.7e308,
		700.};

 real st_e35_x0comn_[32] = {
		0.01,
		0.01,
		0.01,
		0.01,
		0.01,
		0.01,
		0.01,
		0.01,
		0.01,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		350.,
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
		0. };

 static real st_e35_pd[50];
static real st_e35_old_x[32];
static int st_e35_xkind = -1;

 static int
st_e35_xcheck(real *x)
{
	real *x1 = st_e35_old_x, *xe = x + 32;
	errno = 0;
	if (st_e35_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_e35_xkind = 0;
	return 1;
	}
 real
st_e35_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[5], dv[18], rv;
	fint wantfg = *needfg;
	if (st_e35_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_e35_pd[0] = x[0] * x[0];
	st_e35_pd[1] = x[0] + x[0];
	v[0] = st_e35_pd[0] * x[1];
	st_e35_pd[2] = x[1] * x[1];
	st_e35_pd[3] = x[1] + x[1];
	v[1] = st_e35_pd[2] * x[0];
	v[2] = v[0] + v[1];
	v[2] *= 0.5;
	v[1] = pow(v[2], 0.333333333333333);
	if (errno) in_trouble2("pow",v[2],0.333333333333333);
	if (v[2] > 0.) {
	st_e35_pd[4] = 0.333333333333333*(v[1]/v[2]);
	} else if (0.333333333333333 > 1.) {
	st_e35_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.333333333333333);
	}
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = x[9] / v[1];
	st_e35_pd[5] = 1. / v[1];
	st_e35_pd[6] = -v[2] * st_e35_pd[5];
	v[1] = pow(v[2], 0.83);
	if (errno) in_trouble2("pow",v[2],0.83);
	if (v[2] > 0.) {
	st_e35_pd[7] = 0.83*(v[1]/v[2]);
	} else if (0.83 > 1.) {
	st_e35_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.83);
	}
	v[1] *= 670.;
	st_e35_pd[8] = x[1] * x[1];
	st_e35_pd[9] = x[1] + x[1];
	v[2] = st_e35_pd[8] * x[2];
	st_e35_pd[10] = x[2] * x[2];
	st_e35_pd[11] = x[2] + x[2];
	v[0] = st_e35_pd[10] * x[1];
	v[3] = v[2] + v[0];
	v[3] *= 0.5;
	v[0] = pow(v[3], 0.333333333333333);
	if (errno) in_trouble2("pow",v[3],0.333333333333333);
	if (v[3] > 0.) {
	st_e35_pd[12] = 0.333333333333333*(v[0]/v[3]);
	} else if (0.333333333333333 > 1.) {
	st_e35_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.333333333333333);
	}
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = x[10] / v[0];
	st_e35_pd[13] = 1. / v[0];
	st_e35_pd[14] = -v[3] * st_e35_pd[13];
	v[0] = pow(v[3], 0.83);
	if (errno) in_trouble2("pow",v[3],0.83);
	if (v[3] > 0.) {
	st_e35_pd[15] = 0.83*(v[0]/v[3]);
	} else if (0.83 > 1.) {
	st_e35_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.83);
	}
	v[0] *= 670.;
	v[1] += v[0];
	v[0] = 0.5 * x[11];
	st_e35_pd[16] = x[3] * x[3];
	st_e35_pd[17] = x[3] + x[3];
	v[3] = st_e35_pd[16] * x[4];
	st_e35_pd[18] = x[4] * x[4];
	st_e35_pd[19] = x[4] + x[4];
	v[2] = st_e35_pd[18] * x[3];
	v[4] = v[3] + v[2];
	v[4] *= 0.5;
	v[2] = pow(v[4], 0.333333333333333);
	if (errno) in_trouble2("pow",v[4],0.333333333333333);
	if (v[4] > 0.) {
	st_e35_pd[20] = 0.333333333333333*(v[2]/v[4]);
	} else if (0.333333333333333 > 1.) {
	st_e35_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.333333333333333);
	}
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[4] = v[0] / v[2];
	st_e35_pd[21] = 1. / v[2];
	st_e35_pd[22] = -v[4] * st_e35_pd[21];
	v[2] = pow(v[4], 0.83);
	if (errno) in_trouble2("pow",v[4],0.83);
	if (v[4] > 0.) {
	st_e35_pd[23] = 0.83*(v[2]/v[4]);
	} else if (0.83 > 1.) {
	st_e35_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.83);
	}
	v[2] *= 670.;
	v[1] += v[2];
	v[2] = 0.5 * x[12];
	st_e35_pd[24] = x[4] * x[4];
	st_e35_pd[25] = x[4] + x[4];
	v[4] = st_e35_pd[24] * x[5];
	st_e35_pd[26] = x[5] * x[5];
	st_e35_pd[27] = x[5] + x[5];
	v[0] = st_e35_pd[26] * x[4];
	v[3] = v[4] + v[0];
	v[3] *= 0.5;
	v[0] = pow(v[3], 0.333333333333333);
	if (errno) in_trouble2("pow",v[3],0.333333333333333);
	if (v[3] > 0.) {
	st_e35_pd[28] = 0.333333333333333*(v[0]/v[3]);
	} else if (0.333333333333333 > 1.) {
	st_e35_pd[28] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.333333333333333);
	}
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[2] / v[0];
	st_e35_pd[29] = 1. / v[0];
	st_e35_pd[30] = -v[3] * st_e35_pd[29];
	v[0] = pow(v[3], 0.83);
	if (errno) in_trouble2("pow",v[3],0.83);
	if (v[3] > 0.) {
	st_e35_pd[31] = 0.83*(v[0]/v[3]);
	} else if (0.83 > 1.) {
	st_e35_pd[31] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.83);
	}
	v[0] *= 670.;
	v[1] += v[0];
	v[0] = 0.666666666666667 * x[13];
	st_e35_pd[32] = x[6] * x[6];
	st_e35_pd[33] = x[6] + x[6];
	v[3] = 1250. * st_e35_pd[32];
	v[2] = pow(v[3], 0.333333333333333);
	if (errno) in_trouble2("pow",v[3],0.333333333333333);
	if (v[3] > 0.) {
	st_e35_pd[34] = 0.333333333333333*(v[2]/v[3]);
	} else if (0.333333333333333 > 1.) {
	st_e35_pd[34] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.333333333333333);
	}
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	st_e35_pd[35] = 1. / v[2];
	st_e35_pd[36] = -v[3] * st_e35_pd[35];
	v[2] = pow(v[3], 0.83);
	if (errno) in_trouble2("pow",v[3],0.83);
	if (v[3] > 0.) {
	st_e35_pd[37] = 0.83*(v[2]/v[3]);
	} else if (0.83 > 1.) {
	st_e35_pd[37] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.83);
	}
	v[2] *= 670.;
	v[1] += v[2];
	v[2] = 0.666666666666667 * x[14];
	st_e35_pd[38] = x[7] * x[7];
	st_e35_pd[39] = x[7] + x[7];
	v[3] = 2450. * st_e35_pd[38];
	v[0] = pow(v[3], 0.333333333333333);
	if (errno) in_trouble2("pow",v[3],0.333333333333333);
	if (v[3] > 0.) {
	st_e35_pd[40] = 0.333333333333333*(v[0]/v[3]);
	} else if (0.333333333333333 > 1.) {
	st_e35_pd[40] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.333333333333333);
	}
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[2] / v[0];
	st_e35_pd[41] = 1. / v[0];
	st_e35_pd[42] = -v[3] * st_e35_pd[41];
	v[0] = pow(v[3], 0.83);
	if (errno) in_trouble2("pow",v[3],0.83);
	if (v[3] > 0.) {
	st_e35_pd[43] = 0.83*(v[0]/v[3]);
	} else if (0.83 > 1.) {
	st_e35_pd[43] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.83);
	}
	v[0] *= 670.;
	v[1] += v[0];
	v[0] = 0.4 * x[15];
	st_e35_pd[44] = x[8] * x[8];
	st_e35_pd[45] = x[8] + x[8];
	v[3] = 8712. * st_e35_pd[44];
	v[2] = pow(v[3], 0.333333333333333);
	if (errno) in_trouble2("pow",v[3],0.333333333333333);
	if (v[3] > 0.) {
	st_e35_pd[46] = 0.333333333333333*(v[2]/v[3]);
	} else if (0.333333333333333 > 1.) {
	st_e35_pd[46] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.333333333333333);
	}
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[3] = v[0] / v[2];
	st_e35_pd[47] = 1. / v[2];
	st_e35_pd[48] = -v[3] * st_e35_pd[47];
	v[2] = pow(v[3], 0.83);
	if (errno) in_trouble2("pow",v[3],0.83);
	if (v[3] > 0.) {
	st_e35_pd[49] = 0.83*(v[2]/v[3]);
	} else if (0.83 > 1.) {
	st_e35_pd[49] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[3],0.83);
	}
	v[2] *= 670.;
	v[1] += v[2];
	rv = v[1] + 20.*x[13];
	rv += 120.*x[14];
	rv += 120.*x[15];
	rv += 6600.*x[25];
	rv += 6600.*x[26];
	rv += 6600.*x[27];
	rv += 6600.*x[28];
	rv += 6600.*x[29];
	rv += 6600.*x[30];
	rv += 6600.*x[31];
	;}

	if (wantfg & 2) {
	dv[0] = 670.*st_e35_pd[49];
	dv[1] = dv[0]*st_e35_pd[48];
	dv[0] *= st_e35_pd[47];
	dv[1] *= st_e35_pd[46];
	dv[1] *= 8712.;
	g[8] = dv[1]*st_e35_pd[45];
	g[15] = dv[0]*0.4 + 120.;
	dv[2] = 670.*st_e35_pd[43];
	dv[3] = dv[2]*st_e35_pd[42];
	dv[2] *= st_e35_pd[41];
	dv[3] *= st_e35_pd[40];
	dv[3] *= 2450.;
	g[7] = dv[3]*st_e35_pd[39];
	g[14] = dv[2]*0.666666666666667 + 120.;
	dv[4] = 670.*st_e35_pd[37];
	dv[5] = dv[4]*st_e35_pd[36];
	dv[4] *= st_e35_pd[35];
	dv[5] *= st_e35_pd[34];
	dv[5] *= 1250.;
	g[6] = dv[5]*st_e35_pd[33];
	g[13] = dv[4]*0.666666666666667 + 20.;
	dv[6] = 670.*st_e35_pd[31];
	dv[7] = dv[6]*st_e35_pd[30];
	dv[6] *= st_e35_pd[29];
	dv[7] *= st_e35_pd[28];
	dv[7] *= 0.5;
	dv[8] = dv[7];
	g[4] = dv[8]*st_e35_pd[26];
	dv[8] *= x[4];
	g[5] = dv[8]*st_e35_pd[27];
	g[5] += dv[7]*st_e35_pd[24];
	dv[7] *= x[5];
	g[4] += dv[7]*st_e35_pd[25];
	g[12] = dv[6]*0.5;
	dv[9] = 670.*st_e35_pd[23];
	dv[10] = dv[9]*st_e35_pd[22];
	dv[9] *= st_e35_pd[21];
	dv[10] *= st_e35_pd[20];
	dv[10] *= 0.5;
	dv[11] = dv[10];
	g[3] = dv[11]*st_e35_pd[18];
	dv[11] *= x[3];
	g[4] += dv[11]*st_e35_pd[19];
	g[4] += dv[10]*st_e35_pd[16];
	dv[10] *= x[4];
	g[3] += dv[10]*st_e35_pd[17];
	g[11] = dv[9]*0.5;
	dv[12] = 670.*st_e35_pd[15];
	dv[13] = dv[12]*st_e35_pd[14];
	g[10] = dv[12]*st_e35_pd[13];
	dv[13] *= st_e35_pd[12];
	dv[13] *= 0.5;
	dv[14] = dv[13];
	g[1] = dv[14]*st_e35_pd[10];
	dv[14] *= x[1];
	g[2] = dv[14]*st_e35_pd[11];
	g[2] += dv[13]*st_e35_pd[8];
	dv[13] *= x[2];
	g[1] += dv[13]*st_e35_pd[9];
	dv[15] = 670.*st_e35_pd[7];
	dv[16] = dv[15]*st_e35_pd[6];
	g[9] = dv[15]*st_e35_pd[5];
	dv[16] *= st_e35_pd[4];
	dv[16] *= 0.5;
	dv[17] = dv[16];
	g[0] = dv[17]*st_e35_pd[2];
	dv[17] *= x[0];
	g[1] += dv[17]*st_e35_pd[3];
	g[1] += dv[16]*st_e35_pd[0];
	dv[16] *= x[1];
	g[0] += dv[16]*st_e35_pd[1];
	g[25] = 6600.;
	g[26] = 6600.;
	g[27] = 6600.;
	g[28] = 6600.;
	g[29] = 6600.;
	g[30] = 6600.;
	g[31] = 6600.;
	}

	return rv;
}

 void
st_e35_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_e35_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[9];
	t1 += x[10];
	t1 += x[14];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[11];
	t1 += x[12];
	t1 += x[15];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[9];
	t1 += -x[11];
	t1 += 22.*x[16];
	t1 += -22.*x[17];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[10];
	t1 += -x[12];
	t1 += 22.*x[17];
	t1 += -22.*x[18];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[9];
	t1 += 20.*x[19];
	t1 += -20.*x[20];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[10];
	t1 += 20.*x[20];
	t1 += -20.*x[21];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[11];
	t1 += 7.5*x[22];
	t1 += -7.5*x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[12];
	t1 += 7.5*x[23];
	t1 += -7.5*x[24];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[16];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[21];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[24];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[16];
	t1 += -x[17];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[17];
	t1 += -x[18];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[19];
	t1 += -x[20];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[20];
	t1 += -x[21];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[22];
	t1 += -x[23];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[23];
	t1 += -x[24];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[13];
	t1 += 22.*x[18];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[14];
	t1 += -20.*x[19];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[15];
	t1 += -7.5*x[22];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[9];
	t1 += -1620.*x[25];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[10];
	t1 += -1620.*x[26];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[11];
	t1 += -360.*x[27];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[12];
	t1 += -360.*x[28];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[13];
	t1 += -1980.*x[29];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[14];
	t1 += -1620.*x[30];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[15];
	t1 += -360.*x[31];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[0];
	t1 += -x[16];
	t1 += x[19];
	t1 += 200.*x[25];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[1];
	t1 += -x[17];
	t1 += x[20];
	t1 += 200.*x[26];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[3];
	t1 += -x[16];
	t1 += x[22];
	t1 += 200.*x[27];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[4];
	t1 += -x[17];
	t1 += x[23];
	t1 += 200.*x[28];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[1];
	t1 += -x[17];
	t1 += x[20];
	t1 += 200.*x[25];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[2];
	t1 += -x[18];
	t1 += x[21];
	t1 += 200.*x[26];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[4];
	t1 += -x[17];
	t1 += x[23];
	t1 += 200.*x[27];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[5];
	t1 += -x[18];
	t1 += x[24];
	t1 += 200.*x[28];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[6];
	t1 += -x[18];
	t1 += 200.*x[29];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[7];
	t1 += x[19];
	t1 += 200.*x[30];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[8];
	t1 += x[22];
	t1 += 200.*x[31];
	c[38] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[11] = 1.;
	J[16] = 1.;
	J[21] = 1.;
	J[26] = 1.;
	J[31] = 1.;

   /*** derivatives for constraint 2 ***/

	J[12] = 1.;
	J[17] = 1.;
	J[34] = 1.;

   /*** derivatives for constraint 3 ***/

	J[22] = 1.;
	J[27] = 1.;
	J[37] = 1.;

   /*** derivatives for constraint 4 ***/

	J[13] = -1.;
	J[23] = -1.;
	J[40] = 22.;
	J[45] = -22.;

   /*** derivatives for constraint 5 ***/

	J[18] = -1.;
	J[28] = -1.;
	J[46] = 22.;
	J[53] = -22.;

   /*** derivatives for constraint 6 ***/

	J[14] = -1.;
	J[59] = 20.;
	J[64] = -20.;

   /*** derivatives for constraint 7 ***/

	J[19] = -1.;
	J[65] = 20.;
	J[70] = -20.;

   /*** derivatives for constraint 8 ***/

	J[24] = -1.;
	J[74] = 7.5;
	J[79] = -7.5;

   /*** derivatives for constraint 9 ***/

	J[29] = -1.;
	J[80] = 7.5;
	J[85] = -7.5;

   /*** derivatives for constraint 10 ***/

	J[41] = 1.;

   /*** derivatives for constraint 11 ***/

	J[71] = 1.;

   /*** derivatives for constraint 12 ***/

	J[86] = 1.;

   /*** derivatives for constraint 13 ***/

	J[42] = 1.;
	J[47] = -1.;

   /*** derivatives for constraint 14 ***/

	J[48] = 1.;
	J[54] = -1.;

   /*** derivatives for constraint 15 ***/

	J[60] = 1.;
	J[66] = -1.;

   /*** derivatives for constraint 16 ***/

	J[67] = 1.;
	J[72] = -1.;

   /*** derivatives for constraint 17 ***/

	J[75] = 1.;
	J[81] = -1.;

   /*** derivatives for constraint 18 ***/

	J[82] = 1.;
	J[87] = -1.;

   /*** derivatives for constraint 19 ***/

	J[32] = -1.;
	J[55] = 22.;

   /*** derivatives for constraint 20 ***/

	J[35] = -1.;
	J[61] = -20.;

   /*** derivatives for constraint 21 ***/

	J[38] = -1.;
	J[76] = -7.5;

   /*** derivatives for constraint 22 ***/

	J[15] = 1.;
	J[89] = -1620.;

   /*** derivatives for constraint 23 ***/

	J[20] = 1.;
	J[92] = -1620.;

   /*** derivatives for constraint 24 ***/

	J[25] = 1.;
	J[95] = -360.;

   /*** derivatives for constraint 25 ***/

	J[30] = 1.;
	J[98] = -360.;

   /*** derivatives for constraint 26 ***/

	J[33] = 1.;
	J[101] = -1980.;

   /*** derivatives for constraint 27 ***/

	J[36] = 1.;
	J[103] = -1620.;

   /*** derivatives for constraint 28 ***/

	J[39] = 1.;
	J[105] = -360.;

   /*** derivatives for constraint 29 ***/

	J[0] = 1.;
	J[43] = -1.;
	J[62] = 1.;
	J[90] = 200.;

   /*** derivatives for constraint 30 ***/

	J[1] = 1.;
	J[49] = -1.;
	J[68] = 1.;
	J[93] = 200.;

   /*** derivatives for constraint 31 ***/

	J[4] = 1.;
	J[44] = -1.;
	J[77] = 1.;
	J[96] = 200.;

   /*** derivatives for constraint 32 ***/

	J[5] = 1.;
	J[50] = -1.;
	J[83] = 1.;
	J[99] = 200.;

   /*** derivatives for constraint 33 ***/

	J[2] = 1.;
	J[51] = -1.;
	J[69] = 1.;
	J[91] = 200.;

   /*** derivatives for constraint 34 ***/

	J[3] = 1.;
	J[56] = -1.;
	J[73] = 1.;
	J[94] = 200.;

   /*** derivatives for constraint 35 ***/

	J[6] = 1.;
	J[52] = -1.;
	J[84] = 1.;
	J[97] = 200.;

   /*** derivatives for constraint 36 ***/

	J[7] = 1.;
	J[57] = -1.;
	J[88] = 1.;
	J[100] = 200.;

   /*** derivatives for constraint 37 ***/

	J[8] = 1.;
	J[58] = -1.;
	J[102] = 200.;

   /*** derivatives for constraint 38 ***/

	J[9] = 1.;
	J[63] = 1.;
	J[104] = 200.;

   /*** derivatives for constraint 39 ***/

	J[10] = 1.;
	J[78] = 1.;
	J[106] = 200.;
	}
}
#ifdef __cplusplus
	}
#endif
