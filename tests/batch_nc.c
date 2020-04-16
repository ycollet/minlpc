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
 fint batch_nc_auxcom_[1] = { 31 /* nlc */ };
 fint batch_nc_funcom_[189] = {
	34 /* nvar */,
	1 /* nobj */,
	67 /* ncon */,
	148 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	25,
	31,
	37,
	44,
	51,
	58,
	65,
	72,
	79,
	86,
	93,
	100,
	107,
	112,
	117,
	122,
	127,
	132,
	137,
	138,
	139,
	140,
	141,
	142,
	143,
	144,
	145,
	146,
	147,
	148,
	149,

	/* rownos */
	1,
	7,
	13,
	19,
	25,
	62,
	2,
	8,
	14,
	20,
	26,
	63,
	3,
	9,
	15,
	21,
	27,
	64,
	4,
	10,
	16,
	22,
	28,
	65,
	5,
	11,
	17,
	23,
	29,
	66,
	6,
	12,
	18,
	24,
	30,
	67,
	31,
	32,
	33,
	34,
	35,
	36,
	37,
	31,
	38,
	39,
	40,
	41,
	42,
	43,
	31,
	44,
	45,
	46,
	47,
	48,
	49,
	31,
	50,
	51,
	52,
	53,
	54,
	55,
	31,
	56,
	57,
	58,
	59,
	60,
	61,
	1,
	2,
	3,
	4,
	5,
	6,
	31,
	7,
	8,
	9,
	10,
	11,
	12,
	31,
	13,
	14,
	15,
	16,
	17,
	18,
	31,
	19,
	20,
	21,
	22,
	23,
	24,
	31,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	38,
	44,
	50,
	56,
	33,
	39,
	45,
	51,
	57,
	34,
	40,
	46,
	52,
	58,
	35,
	41,
	47,
	53,
	59,
	36,
	42,
	48,
	54,
	60,
	37,
	43,
	49,
	55,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	62,
	63,
	64,
	65,
	66,
	67 };

 real batch_nc_boundc_[1+68+134] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		4.,
		1.,
		4.,
		1.,
		4.,
		1.,
		4.,
		1.,
		4.,
		1.,
		4.,
		86.4583333333333,
		379.746835443038,
		42.5,
		882.352941176471,
		89.25,
		833.333333333333,
		23.3333333333333,
		638.297872340426,
		21.,
		666.666666666667,
		2.075,
		8.3,
		1.7,
		6.8,
		2.975,
		11.9,
		0.875,
		3.5,
		1.05,
		4.2,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
		300.,
		3000.,
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
		6.4,
		1.7e308,
		4.7,
		1.7e308,
		8.3,
		1.7e308,
		3.9,
		1.7e308,
		2.1,
		1.7e308,
		1.2,
		1.7e308,
		6.8,
		1.7e308,
		6.4,
		1.7e308,
		6.5,
		1.7e308,
		4.4,
		1.7e308,
		2.3,
		1.7e308,
		3.2,
		1.7e308,
		1.,
		1.7e308,
		6.3,
		1.7e308,
		5.4,
		1.7e308,
		11.9,
		1.7e308,
		5.7,
		1.7e308,
		6.2,
		1.7e308,
		3.2,
		1.7e308,
		3.,
		1.7e308,
		3.5,
		1.7e308,
		3.3,
		1.7e308,
		2.8,
		1.7e308,
		3.4,
		1.7e308,
		2.1,
		1.7e308,
		2.5,
		1.7e308,
		4.2,
		1.7e308,
		3.6,
		1.7e308,
		3.7,
		1.7e308,
		2.2,
		1.7e308,
		-1.7e308,
		6000.,
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.};

 real batch_nc_x0comn_[34] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		86.4583333333333,
		42.5,
		89.25,
		23.3333333333333,
		21.,
		2.075,
		1.7,
		2.975,
		0.875,
		1.05,
		300.,
		300.,
		300.,
		300.,
		300.,
		300.,
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

 static real batch_nc_pd[22];
static real batch_nc_old_x[34];
static int batch_nc_xkind = -1;

 static int
batch_nc_xcheck(real *x)
{
	real *x1 = batch_nc_old_x, *xe = x + 34;
	errno = 0;
	if (batch_nc_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	batch_nc_xkind = 0;
	return 1;
	}
 real
batch_nc_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[6];
	fint wantfg = *needfg;
	if (batch_nc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[16], 0.6);
	if (errno) in_trouble2("pow",x[16],0.6);
	if (x[16] > 0.) {
	batch_nc_pd[10] = 0.6*(v[0]/x[16]);
	} else if (0.6 > 1.) {
	batch_nc_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],0.6);
	}
	batch_nc_pd[11] = 250. * v[0];
	v[0] = batch_nc_pd[11] * x[0];
	v[1] = pow(x[17], 0.6);
	if (errno) in_trouble2("pow",x[17],0.6);
	if (x[17] > 0.) {
	batch_nc_pd[12] = 0.6*(v[1]/x[17]);
	} else if (0.6 > 1.) {
	batch_nc_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],0.6);
	}
	batch_nc_pd[13] = 250. * v[1];
	v[1] = batch_nc_pd[13] * x[1];
	v[0] += v[1];
	v[1] = pow(x[18], 0.6);
	if (errno) in_trouble2("pow",x[18],0.6);
	if (x[18] > 0.) {
	batch_nc_pd[14] = 0.6*(v[1]/x[18]);
	} else if (0.6 > 1.) {
	batch_nc_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],0.6);
	}
	batch_nc_pd[15] = 250. * v[1];
	v[1] = batch_nc_pd[15] * x[2];
	v[0] += v[1];
	v[1] = pow(x[19], 0.6);
	if (errno) in_trouble2("pow",x[19],0.6);
	if (x[19] > 0.) {
	batch_nc_pd[16] = 0.6*(v[1]/x[19]);
	} else if (0.6 > 1.) {
	batch_nc_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],0.6);
	}
	batch_nc_pd[17] = 250. * v[1];
	v[1] = batch_nc_pd[17] * x[3];
	v[0] += v[1];
	v[1] = pow(x[20], 0.6);
	if (errno) in_trouble2("pow",x[20],0.6);
	if (x[20] > 0.) {
	batch_nc_pd[18] = 0.6*(v[1]/x[20]);
	} else if (0.6 > 1.) {
	batch_nc_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],0.6);
	}
	batch_nc_pd[19] = 250. * v[1];
	v[1] = batch_nc_pd[19] * x[4];
	v[0] += v[1];
	v[1] = pow(x[21], 0.6);
	if (errno) in_trouble2("pow",x[21],0.6);
	if (x[21] > 0.) {
	batch_nc_pd[20] = 0.6*(v[1]/x[21]);
	} else if (0.6 > 1.) {
	batch_nc_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],0.6);
	}
	batch_nc_pd[21] = 250. * v[1];
	v[1] = batch_nc_pd[21] * x[5];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[5] = batch_nc_pd[21];
	dv[0] = x[5]*250.;
	g[21] = dv[0]*batch_nc_pd[20];
	g[4] = batch_nc_pd[19];
	dv[1] = x[4]*250.;
	g[20] = dv[1]*batch_nc_pd[18];
	g[3] = batch_nc_pd[17];
	dv[2] = x[3]*250.;
	g[19] = dv[2]*batch_nc_pd[16];
	g[2] = batch_nc_pd[15];
	dv[3] = x[2]*250.;
	g[18] = dv[3]*batch_nc_pd[14];
	g[1] = batch_nc_pd[13];
	dv[4] = x[1]*250.;
	g[17] = dv[4]*batch_nc_pd[12];
	g[0] = batch_nc_pd[11];
	dv[5] = x[0]*250.;
	g[16] = dv[5]*batch_nc_pd[10];
	}

	return v[0];
}

 void
batch_nc_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (batch_nc_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[11];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[1] * x[11];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[2] * x[11];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[3] * x[11];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[4] * x[11];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[5] * x[11];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[0] * x[12];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[1] * x[12];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[2] * x[12];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[3] * x[12];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[4] * x[12];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[5] * x[12];
	c[11] = v[0];

  /***  constraint 13  ***/

	v[0] = x[0] * x[13];
	c[12] = v[0];

  /***  constraint 14  ***/

	v[0] = x[1] * x[13];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[2] * x[13];
	c[14] = v[0];

  /***  constraint 16  ***/

	v[0] = x[3] * x[13];
	c[15] = v[0];

  /***  constraint 17  ***/

	v[0] = x[4] * x[13];
	c[16] = v[0];

  /***  constraint 18  ***/

	v[0] = x[5] * x[13];
	c[17] = v[0];

  /***  constraint 19  ***/

	v[0] = x[0] * x[14];
	c[18] = v[0];

  /***  constraint 20  ***/

	v[0] = x[1] * x[14];
	c[19] = v[0];

  /***  constraint 21  ***/

	v[0] = x[2] * x[14];
	c[20] = v[0];

  /***  constraint 22  ***/

	v[0] = x[3] * x[14];
	c[21] = v[0];

  /***  constraint 23  ***/

	v[0] = x[4] * x[14];
	c[22] = v[0];

  /***  constraint 24  ***/

	v[0] = x[5] * x[14];
	c[23] = v[0];

  /***  constraint 25  ***/

	v[0] = x[0] * x[15];
	c[24] = v[0];

  /***  constraint 26  ***/

	v[0] = x[1] * x[15];
	c[25] = v[0];

  /***  constraint 27  ***/

	v[0] = x[2] * x[15];
	c[26] = v[0];

  /***  constraint 28  ***/

	v[0] = x[3] * x[15];
	c[27] = v[0];

  /***  constraint 29  ***/

	v[0] = x[4] * x[15];
	c[28] = v[0];

  /***  constraint 30  ***/

	v[0] = x[5] * x[15];
	c[29] = v[0];

  /***  constraint 31  ***/

	v[0] = 250000. * x[11];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	batch_nc_pd[0] = 1. / x[6];
	batch_nc_pd[1] = -v[1] * batch_nc_pd[0];
	v[0] = 150000. * x[12];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[2] = v[0] / x[7];
	batch_nc_pd[2] = 1. / x[7];
	batch_nc_pd[3] = -v[2] * batch_nc_pd[2];
	v[1] += v[2];
	v[2] = 180000. * x[13];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[0] = v[2] / x[8];
	batch_nc_pd[4] = 1. / x[8];
	batch_nc_pd[5] = -v[0] * batch_nc_pd[4];
	v[1] += v[0];
	v[0] = 160000. * x[14];
	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[2] = v[0] / x[9];
	batch_nc_pd[6] = 1. / x[9];
	batch_nc_pd[7] = -v[2] * batch_nc_pd[6];
	v[1] += v[2];
	v[2] = 120000. * x[15];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[0] = v[2] / x[10];
	batch_nc_pd[8] = 1. / x[10];
	batch_nc_pd[9] = -v[0] * batch_nc_pd[8];
	v[1] += v[0];
	c[30] = v[1];

  /***  constraint 32  ***/

	t1 = -7.9*x[6];
	t1 += x[16];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -2.*x[6];
	t1 += x[17];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -5.2*x[6];
	t1 += x[18];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -4.9*x[6];
	t1 += x[19];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -6.1*x[6];
	t1 += x[20];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -4.2*x[6];
	t1 += x[21];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -0.7*x[7];
	t1 += x[16];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -0.8*x[7];
	t1 += x[17];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -0.9*x[7];
	t1 += x[18];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -3.4*x[7];
	t1 += x[19];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -2.1*x[7];
	t1 += x[20];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -2.5*x[7];
	t1 += x[21];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -0.7*x[8];
	t1 += x[16];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -2.6*x[8];
	t1 += x[17];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -1.6*x[8];
	t1 += x[18];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -3.6*x[8];
	t1 += x[19];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -3.2*x[8];
	t1 += x[20];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -2.9*x[8];
	t1 += x[21];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -4.7*x[9];
	t1 += x[16];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -2.3*x[9];
	t1 += x[17];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -1.6*x[9];
	t1 += x[18];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -2.7*x[9];
	t1 += x[19];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -1.2*x[9];
	t1 += x[20];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -2.5*x[9];
	t1 += x[21];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -1.2*x[10];
	t1 += x[16];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -3.6*x[10];
	t1 += x[17];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -2.4*x[10];
	t1 += x[18];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -4.5*x[10];
	t1 += x[19];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -1.6*x[10];
	t1 += x[20];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -2.1*x[10];
	t1 += x[21];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[0];
	t1 += -x[22];
	t1 += -2.*x[28];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[1];
	t1 += -x[23];
	t1 += -2.*x[29];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[2];
	t1 += -x[24];
	t1 += -2.*x[30];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[3];
	t1 += -x[25];
	t1 += -2.*x[31];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[4];
	t1 += -x[26];
	t1 += -2.*x[32];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[5];
	t1 += -x[27];
	t1 += -2.*x[33];
	c[66] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[71] = x[0];
	J[0] = x[11];

   /*** derivatives for constraint 2 ***/

	J[72] = x[1];
	J[6] = x[11];

   /*** derivatives for constraint 3 ***/

	J[73] = x[2];
	J[12] = x[11];

   /*** derivatives for constraint 4 ***/

	J[74] = x[3];
	J[18] = x[11];

   /*** derivatives for constraint 5 ***/

	J[75] = x[4];
	J[24] = x[11];

   /*** derivatives for constraint 6 ***/

	J[76] = x[5];
	J[30] = x[11];

   /*** derivatives for constraint 7 ***/

	J[78] = x[0];
	J[1] = x[12];

   /*** derivatives for constraint 8 ***/

	J[79] = x[1];
	J[7] = x[12];

   /*** derivatives for constraint 9 ***/

	J[80] = x[2];
	J[13] = x[12];

   /*** derivatives for constraint 10 ***/

	J[81] = x[3];
	J[19] = x[12];

   /*** derivatives for constraint 11 ***/

	J[82] = x[4];
	J[25] = x[12];

   /*** derivatives for constraint 12 ***/

	J[83] = x[5];
	J[31] = x[12];

   /*** derivatives for constraint 13 ***/

	J[85] = x[0];
	J[2] = x[13];

   /*** derivatives for constraint 14 ***/

	J[86] = x[1];
	J[8] = x[13];

   /*** derivatives for constraint 15 ***/

	J[87] = x[2];
	J[14] = x[13];

   /*** derivatives for constraint 16 ***/

	J[88] = x[3];
	J[20] = x[13];

   /*** derivatives for constraint 17 ***/

	J[89] = x[4];
	J[26] = x[13];

   /*** derivatives for constraint 18 ***/

	J[90] = x[5];
	J[32] = x[13];

   /*** derivatives for constraint 19 ***/

	J[92] = x[0];
	J[3] = x[14];

   /*** derivatives for constraint 20 ***/

	J[93] = x[1];
	J[9] = x[14];

   /*** derivatives for constraint 21 ***/

	J[94] = x[2];
	J[15] = x[14];

   /*** derivatives for constraint 22 ***/

	J[95] = x[3];
	J[21] = x[14];

   /*** derivatives for constraint 23 ***/

	J[96] = x[4];
	J[27] = x[14];

   /*** derivatives for constraint 24 ***/

	J[97] = x[5];
	J[33] = x[14];

   /*** derivatives for constraint 25 ***/

	J[99] = x[0];
	J[4] = x[15];

   /*** derivatives for constraint 26 ***/

	J[100] = x[1];
	J[10] = x[15];

   /*** derivatives for constraint 27 ***/

	J[101] = x[2];
	J[16] = x[15];

   /*** derivatives for constraint 28 ***/

	J[102] = x[3];
	J[22] = x[15];

   /*** derivatives for constraint 29 ***/

	J[103] = x[4];
	J[28] = x[15];

   /*** derivatives for constraint 30 ***/

	J[104] = x[5];
	J[34] = x[15];

   /*** derivatives for constraint 31 ***/

	J[64] = batch_nc_pd[9];
	J[105] = batch_nc_pd[8]*120000.;
	J[57] = batch_nc_pd[7];
	J[98] = batch_nc_pd[6]*160000.;
	J[50] = batch_nc_pd[5];
	J[91] = batch_nc_pd[4]*180000.;
	J[43] = batch_nc_pd[3];
	J[84] = batch_nc_pd[2]*150000.;
	J[36] = batch_nc_pd[1];
	J[77] = batch_nc_pd[0]*250000.;

   /*** derivatives for constraint 32 ***/

	J[37] = -7.9;
	J[106] = 1.;

   /*** derivatives for constraint 33 ***/

	J[38] = -2.;
	J[111] = 1.;

   /*** derivatives for constraint 34 ***/

	J[39] = -5.2;
	J[116] = 1.;

   /*** derivatives for constraint 35 ***/

	J[40] = -4.9;
	J[121] = 1.;

   /*** derivatives for constraint 36 ***/

	J[41] = -6.1;
	J[126] = 1.;

   /*** derivatives for constraint 37 ***/

	J[42] = -4.2;
	J[131] = 1.;

   /*** derivatives for constraint 38 ***/

	J[44] = -0.7;
	J[107] = 1.;

   /*** derivatives for constraint 39 ***/

	J[45] = -0.8;
	J[112] = 1.;

   /*** derivatives for constraint 40 ***/

	J[46] = -0.9;
	J[117] = 1.;

   /*** derivatives for constraint 41 ***/

	J[47] = -3.4;
	J[122] = 1.;

   /*** derivatives for constraint 42 ***/

	J[48] = -2.1;
	J[127] = 1.;

   /*** derivatives for constraint 43 ***/

	J[49] = -2.5;
	J[132] = 1.;

   /*** derivatives for constraint 44 ***/

	J[51] = -0.7;
	J[108] = 1.;

   /*** derivatives for constraint 45 ***/

	J[52] = -2.6;
	J[113] = 1.;

   /*** derivatives for constraint 46 ***/

	J[53] = -1.6;
	J[118] = 1.;

   /*** derivatives for constraint 47 ***/

	J[54] = -3.6;
	J[123] = 1.;

   /*** derivatives for constraint 48 ***/

	J[55] = -3.2;
	J[128] = 1.;

   /*** derivatives for constraint 49 ***/

	J[56] = -2.9;
	J[133] = 1.;

   /*** derivatives for constraint 50 ***/

	J[58] = -4.7;
	J[109] = 1.;

   /*** derivatives for constraint 51 ***/

	J[59] = -2.3;
	J[114] = 1.;

   /*** derivatives for constraint 52 ***/

	J[60] = -1.6;
	J[119] = 1.;

   /*** derivatives for constraint 53 ***/

	J[61] = -2.7;
	J[124] = 1.;

   /*** derivatives for constraint 54 ***/

	J[62] = -1.2;
	J[129] = 1.;

   /*** derivatives for constraint 55 ***/

	J[63] = -2.5;
	J[134] = 1.;

   /*** derivatives for constraint 56 ***/

	J[65] = -1.2;
	J[110] = 1.;

   /*** derivatives for constraint 57 ***/

	J[66] = -3.6;
	J[115] = 1.;

   /*** derivatives for constraint 58 ***/

	J[67] = -2.4;
	J[120] = 1.;

   /*** derivatives for constraint 59 ***/

	J[68] = -4.5;
	J[125] = 1.;

   /*** derivatives for constraint 60 ***/

	J[69] = -1.6;
	J[130] = 1.;

   /*** derivatives for constraint 61 ***/

	J[70] = -2.1;
	J[135] = 1.;

   /*** derivatives for constraint 62 ***/

	J[5] = 1.;
	J[136] = -1.;
	J[142] = -2.;

   /*** derivatives for constraint 63 ***/

	J[11] = 1.;
	J[137] = -1.;
	J[143] = -2.;

   /*** derivatives for constraint 64 ***/

	J[17] = 1.;
	J[138] = -1.;
	J[144] = -2.;

   /*** derivatives for constraint 65 ***/

	J[23] = 1.;
	J[139] = -1.;
	J[145] = -2.;

   /*** derivatives for constraint 66 ***/

	J[29] = 1.;
	J[140] = -1.;
	J[146] = -2.;

   /*** derivatives for constraint 67 ***/

	J[35] = 1.;
	J[141] = -1.;
	J[147] = -2.;
	}
}
#ifdef __cplusplus
	}
#endif
