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
 fint prob07_auxcom_[1] = { 24 /* nlc */ };
 fint prob07_funcom_[132] = {
	15 /* nvar */,
	1 /* nobj */,
	36 /* ncon */,
	110 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	8,
	12,
	24,
	33,
	45,
	52,
	62,
	70,
	76,
	85,
	94,
	101,
	110,
	111,

	/* rownos */
	1,
	25,
	26,
	27,
	1,
	28,
	29,
	1,
	30,
	31,
	32,
	2,
	3,
	4,
	5,
	6,
	7,
	17,
	18,
	19,
	25,
	28,
	30,
	2,
	8,
	9,
	10,
	11,
	20,
	21,
	26,
	31,
	2,
	12,
	13,
	14,
	15,
	16,
	22,
	23,
	24,
	27,
	29,
	32,
	1,
	3,
	8,
	12,
	17,
	20,
	22,
	1,
	4,
	9,
	13,
	17,
	20,
	22,
	33,
	35,
	36,
	1,
	5,
	10,
	14,
	18,
	23,
	33,
	36,
	1,
	6,
	15,
	18,
	23,
	34,
	1,
	7,
	11,
	16,
	19,
	21,
	24,
	34,
	35,
	2,
	3,
	4,
	5,
	6,
	7,
	17,
	18,
	19,
	2,
	8,
	9,
	10,
	11,
	20,
	21,
	2,
	12,
	13,
	14,
	15,
	16,
	22,
	23,
	24,
	1 };

 real prob07_boundc_[1+30+72] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		100.,
		1.7e308,
		100.,
		1.7e308,
		100.,
		1.7e308,
		300.,
		1.7e308,
		300.,
		1.7e308,
		300.,
		1.7e308,
		300.,
		1.7e308,
		300.,
		1.7e308,
		5.,
		1.7e308,
		5.,
		1.7e308,
		5.,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.,
		-1.7e308,
		8000.,
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
		-3.,
		-1.7e308,
		-1.,
		-1.7e308,
		-4.,
		-1.7e308,
		-6.,
		-1.7e308,
		-8.,
		-1.7e308,
		-2.,
		-1.7e308,
		-2.,
		-1.7e308,
		-4.,
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
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		0.,
		0.};

 real prob07_x0comn_[15] = {
		1100.53862181846,
		1279.53722102267,
		913.955157873337,
		913.955157873337,
		733.692414545642,
		913.955157873337,
		1399.16837300491,
		365.579732331283,
		365.579732331283,
		459.625873931453,
		459.625873931453,
		6.78386433964926,
		10.3944267123785,
		7.13617632404846,
		155153.543657587 };

 static real prob07_pd[68];
static real prob07_old_x[15];
static int prob07_xkind = -1;

 static int
prob07_xcheck(real *x)
{
	real *x1 = prob07_old_x, *xe = x + 15;
	errno = 0;
	if (prob07_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	prob07_xkind = 0;
	return 1;
	}
 real
prob07_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (prob07_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[14];
	;}

	if (wantfg & 2) {
	g[14] = 1.;
	}

	return rv;
}

 void
prob07_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (prob07_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[0], 0.65);
	if (errno) in_trouble2("pow",x[0],0.65);
	if (x[0] > 0.) {
	prob07_pd[0] = 0.65*(v[0]/x[0]);
	} else if (0.65 > 1.) {
	prob07_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.65);
	}
	v[0] *= 592.;
	v[1] = pow(x[1], 0.39);
	if (errno) in_trouble2("pow",x[1],0.39);
	if (x[1] > 0.) {
	prob07_pd[1] = 0.39*(v[1]/x[1]);
	} else if (0.39 > 1.) {
	prob07_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.39);
	}
	v[1] *= 582.;
	v[0] += v[1];
	v[1] = pow(x[2], 0.52);
	if (errno) in_trouble2("pow",x[2],0.52);
	if (x[2] > 0.) {
	prob07_pd[2] = 0.52*(v[1]/x[2]);
	} else if (0.52 > 1.) {
	prob07_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.52);
	}
	v[1] *= 1200.;
	v[0] += v[1];
	v[1] = pow(x[6], 0.22);
	if (errno) in_trouble2("pow",x[6],0.22);
	if (x[6] > 0.) {
	prob07_pd[3] = 0.22*(v[1]/x[6]);
	} else if (0.22 > 1.) {
	prob07_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.22);
	}
	v[1] *= 370.;
	v[0] += v[1];
	v[1] = pow(x[7], 0.4);
	if (errno) in_trouble2("pow",x[7],0.4);
	if (x[7] > 0.) {
	prob07_pd[4] = 0.4*(v[1]/x[7]);
	} else if (0.4 > 1.) {
	prob07_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.4);
	}
	v[1] *= 250.;
	v[0] += v[1];
	v[1] = pow(x[8], 0.62);
	if (errno) in_trouble2("pow",x[8],0.62);
	if (x[8] > 0.) {
	prob07_pd[5] = 0.62*(v[1]/x[8]);
	} else if (0.62 > 1.) {
	prob07_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],0.62);
	}
	v[1] *= 210.;
	v[0] += v[1];
	v[1] = pow(x[9], 0.4);
	if (errno) in_trouble2("pow",x[9],0.4);
	if (x[9] > 0.) {
	prob07_pd[6] = 0.4*(v[1]/x[9]);
	} else if (0.4 > 1.) {
	prob07_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],0.4);
	}
	v[1] *= 250.;
	v[0] += v[1];
	v[1] = pow(x[10], 0.83);
	if (errno) in_trouble2("pow",x[10],0.83);
	if (x[10] > 0.) {
	prob07_pd[7] = 0.83*(v[1]/x[10]);
	} else if (0.83 > 1.) {
	prob07_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],0.83);
	}
	v[1] *= 200.;
	v[0] += v[1];
	t1 = v[0] + -x[14];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 400000. * x[11];
	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[1] = v[0] / x[3];
	prob07_pd[8] = 1. / x[3];
	prob07_pd[9] = -v[1] * prob07_pd[8];
	v[0] = 300000. * x[12];
	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[2] = v[0] / x[4];
	prob07_pd[10] = 1. / x[4];
	prob07_pd[11] = -v[2] * prob07_pd[10];
	v[1] += v[2];
	v[2] = 100000. * x[13];
	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[0] = v[2] / x[5];
	prob07_pd[12] = 1. / x[5];
	prob07_pd[13] = -v[0] * prob07_pd[12];
	v[1] += v[0];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = 1.2 * x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	prob07_pd[14] = 1. / x[6];
	prob07_pd[15] = -v[1] * prob07_pd[14];
	t1 = v[1] + -x[11];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 1.2 * x[3];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[1] = v[0] / x[7];
	prob07_pd[16] = 1. / x[7];
	prob07_pd[17] = -v[1] * prob07_pd[16];
	t1 = v[1] + -x[11];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 1.2 * x[3];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[1] = v[0] / x[8];
	prob07_pd[18] = 1. / x[8];
	prob07_pd[19] = -v[1] * prob07_pd[18];
	t1 = v[1] + -x[11];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = 1.4 * x[3];
	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[1] = v[0] / x[9];
	prob07_pd[20] = 1. / x[9];
	prob07_pd[21] = -v[1] * prob07_pd[20];
	t1 = v[1] + -x[11];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = 1.4 * x[3];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[1] = v[0] / x[10];
	prob07_pd[22] = 1. / x[10];
	prob07_pd[23] = -v[1] * prob07_pd[22];
	t1 = v[1] + -x[11];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = 1.5 * x[4];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	prob07_pd[24] = 1. / x[6];
	prob07_pd[25] = -v[1] * prob07_pd[24];
	t1 = v[1] + -x[12];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = 1.5 * x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[1] = v[0] / x[7];
	prob07_pd[26] = 1. / x[7];
	prob07_pd[27] = -v[1] * prob07_pd[26];
	t1 = v[1] + -x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = 1.5 * x[4];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[1] = v[0] / x[8];
	prob07_pd[28] = 1. / x[8];
	prob07_pd[29] = -v[1] * prob07_pd[28];
	t1 = v[1] + -x[12];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = 1.5 * x[4];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[1] = v[0] / x[10];
	prob07_pd[30] = 1. / x[10];
	prob07_pd[31] = -v[1] * prob07_pd[30];
	t1 = v[1] + -x[12];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = 1.1 * x[5];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	prob07_pd[32] = 1. / x[6];
	prob07_pd[33] = -v[1] * prob07_pd[32];
	t1 = v[1] + -x[13];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = 1.1 * x[5];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[1] = v[0] / x[7];
	prob07_pd[34] = 1. / x[7];
	prob07_pd[35] = -v[1] * prob07_pd[34];
	t1 = v[1] + -x[13];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = 1.1 * x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[1] = v[0] / x[8];
	prob07_pd[36] = 1. / x[8];
	prob07_pd[37] = -v[1] * prob07_pd[36];
	t1 = v[1] + -x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = 1.2 * x[5];
	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[1] = v[0] / x[9];
	prob07_pd[38] = 1. / x[9];
	prob07_pd[39] = -v[1] * prob07_pd[38];
	t1 = v[1] + -x[13];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = 1.2 * x[5];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[1] = v[0] / x[10];
	prob07_pd[40] = 1. / x[10];
	prob07_pd[41] = -v[1] * prob07_pd[40];
	t1 = v[1] + -x[13];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = 1.2 * x[3];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	prob07_pd[42] = 1. / x[6];
	prob07_pd[43] = -v[1] * prob07_pd[42];
	v[0] = 1.2 * x[3];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[2] = v[0] / x[7];
	prob07_pd[44] = 1. / x[7];
	prob07_pd[45] = -v[2] * prob07_pd[44];
	v[0] = v[1] + v[2];
	t1 = v[0] + -x[11];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = 1.2 * x[3];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[1] = v[0] / x[8];
	prob07_pd[46] = 1. / x[8];
	prob07_pd[47] = -v[1] * prob07_pd[46];
	v[0] = 1.4 * x[3];
	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[2] = v[0] / x[9];
	prob07_pd[48] = 1. / x[9];
	prob07_pd[49] = -v[2] * prob07_pd[48];
	v[0] = v[1] + v[2];
	t1 = v[0] + -x[11];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = 1.4 * x[3];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[1] = v[0] / x[10];
	prob07_pd[50] = 1. / x[10];
	prob07_pd[51] = -v[1] * prob07_pd[50];
	t1 = v[1] + -x[11];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = 1.5 * x[4];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	prob07_pd[52] = 1. / x[6];
	prob07_pd[53] = -v[1] * prob07_pd[52];
	v[0] = 1.5 * x[4];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[2] = v[0] / x[7];
	prob07_pd[54] = 1. / x[7];
	prob07_pd[55] = -v[2] * prob07_pd[54];
	v[0] = v[1] + v[2];
	t1 = v[0] + -x[12];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = 1.5 * x[4];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[1] = v[0] / x[10];
	prob07_pd[56] = 1. / x[10];
	prob07_pd[57] = -v[1] * prob07_pd[56];
	t1 = v[1] + -x[12];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = 1.1 * x[5];
	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[1] = v[0] / x[6];
	prob07_pd[58] = 1. / x[6];
	prob07_pd[59] = -v[1] * prob07_pd[58];
	v[0] = 1.1 * x[5];
	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[2] = v[0] / x[7];
	prob07_pd[60] = 1. / x[7];
	prob07_pd[61] = -v[2] * prob07_pd[60];
	v[0] = v[1] + v[2];
	t1 = v[0] + -x[13];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = 1.1 * x[5];
	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[1] = v[0] / x[8];
	prob07_pd[62] = 1. / x[8];
	prob07_pd[63] = -v[1] * prob07_pd[62];
	v[0] = 1.2 * x[5];
	if (x[9] == 0.) {
	zerdiv_(&x[9]);	}
	v[2] = v[0] / x[9];
	prob07_pd[64] = 1. / x[9];
	prob07_pd[65] = -v[2] * prob07_pd[64];
	v[0] = v[1] + v[2];
	t1 = v[0] + -x[13];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = 1.2 * x[5];
	if (x[10] == 0.) {
	zerdiv_(&x[10]);	}
	v[1] = v[0] / x[10];
	prob07_pd[66] = 1. / x[10];
	prob07_pd[67] = -v[1] * prob07_pd[66];
	t1 = v[1] + -x[13];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[0];
	t1 += -1.2*x[3];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[0];
	t1 += -1.5*x[4];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[0];
	t1 += -1.1*x[5];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[1];
	t1 += -1.4*x[3];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[1];
	t1 += -1.2*x[5];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[2];
	t1 += -x[3];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[2];
	t1 += -x[4];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[2];
	t1 += -x[5];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[7];
	t1 += -x[8];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[9];
	t1 += -x[10];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[7];
	t1 += -x[10];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[7];
	t1 += x[8];
	c[35] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[75] = 200.*prob07_pd[7];
	J[69] = 250.*prob07_pd[6];
	J[61] = 210.*prob07_pd[5];
	J[51] = 250.*prob07_pd[4];
	J[44] = 370.*prob07_pd[3];
	J[7] = 1200.*prob07_pd[2];
	J[4] = 582.*prob07_pd[1];
	J[0] = 592.*prob07_pd[0];
	J[109] = -1.;

   /*** derivatives for constraint 2 ***/

	J[32] = prob07_pd[13];
	J[100] = prob07_pd[12]*100000.;
	J[23] = prob07_pd[11];
	J[93] = prob07_pd[10]*300000.;
	J[11] = prob07_pd[9];
	J[84] = prob07_pd[8]*400000.;

   /*** derivatives for constraint 3 ***/

	J[45] = prob07_pd[15];
	J[12] = prob07_pd[14]*1.2;
	J[85] = -1.;

   /*** derivatives for constraint 4 ***/

	J[52] = prob07_pd[17];
	J[13] = prob07_pd[16]*1.2;
	J[86] = -1.;

   /*** derivatives for constraint 5 ***/

	J[62] = prob07_pd[19];
	J[14] = prob07_pd[18]*1.2;
	J[87] = -1.;

   /*** derivatives for constraint 6 ***/

	J[70] = prob07_pd[21];
	J[15] = prob07_pd[20]*1.4;
	J[88] = -1.;

   /*** derivatives for constraint 7 ***/

	J[76] = prob07_pd[23];
	J[16] = prob07_pd[22]*1.4;
	J[89] = -1.;

   /*** derivatives for constraint 8 ***/

	J[46] = prob07_pd[25];
	J[24] = prob07_pd[24]*1.5;
	J[94] = -1.;

   /*** derivatives for constraint 9 ***/

	J[53] = prob07_pd[27];
	J[25] = prob07_pd[26]*1.5;
	J[95] = -1.;

   /*** derivatives for constraint 10 ***/

	J[63] = prob07_pd[29];
	J[26] = prob07_pd[28]*1.5;
	J[96] = -1.;

   /*** derivatives for constraint 11 ***/

	J[77] = prob07_pd[31];
	J[27] = prob07_pd[30]*1.5;
	J[97] = -1.;

   /*** derivatives for constraint 12 ***/

	J[47] = prob07_pd[33];
	J[33] = prob07_pd[32]*1.1;
	J[101] = -1.;

   /*** derivatives for constraint 13 ***/

	J[54] = prob07_pd[35];
	J[34] = prob07_pd[34]*1.1;
	J[102] = -1.;

   /*** derivatives for constraint 14 ***/

	J[64] = prob07_pd[37];
	J[35] = prob07_pd[36]*1.1;
	J[103] = -1.;

   /*** derivatives for constraint 15 ***/

	J[71] = prob07_pd[39];
	J[36] = prob07_pd[38]*1.2;
	J[104] = -1.;

   /*** derivatives for constraint 16 ***/

	J[78] = prob07_pd[41];
	J[37] = prob07_pd[40]*1.2;
	J[105] = -1.;

   /*** derivatives for constraint 17 ***/

	J[55] = prob07_pd[45];
	J[17] = prob07_pd[44]*1.2;
	J[48] = prob07_pd[43];
	J[17] += prob07_pd[42]*1.2;
	J[90] = -1.;

   /*** derivatives for constraint 18 ***/

	J[72] = prob07_pd[49];
	J[18] = prob07_pd[48]*1.4;
	J[65] = prob07_pd[47];
	J[18] += prob07_pd[46]*1.2;
	J[91] = -1.;

   /*** derivatives for constraint 19 ***/

	J[79] = prob07_pd[51];
	J[19] = prob07_pd[50]*1.4;
	J[92] = -1.;

   /*** derivatives for constraint 20 ***/

	J[56] = prob07_pd[55];
	J[28] = prob07_pd[54]*1.5;
	J[49] = prob07_pd[53];
	J[28] += prob07_pd[52]*1.5;
	J[98] = -1.;

   /*** derivatives for constraint 21 ***/

	J[80] = prob07_pd[57];
	J[29] = prob07_pd[56]*1.5;
	J[99] = -1.;

   /*** derivatives for constraint 22 ***/

	J[57] = prob07_pd[61];
	J[38] = prob07_pd[60]*1.1;
	J[50] = prob07_pd[59];
	J[38] += prob07_pd[58]*1.1;
	J[106] = -1.;

   /*** derivatives for constraint 23 ***/

	J[73] = prob07_pd[65];
	J[39] = prob07_pd[64]*1.2;
	J[66] = prob07_pd[63];
	J[39] += prob07_pd[62]*1.1;
	J[107] = -1.;

   /*** derivatives for constraint 24 ***/

	J[81] = prob07_pd[67];
	J[40] = prob07_pd[66]*1.2;
	J[108] = -1.;

   /*** derivatives for constraint 25 ***/

	J[1] = 1.;
	J[20] = -1.2;

   /*** derivatives for constraint 26 ***/

	J[2] = 1.;
	J[30] = -1.5;

   /*** derivatives for constraint 27 ***/

	J[3] = 1.;
	J[41] = -1.1;

   /*** derivatives for constraint 28 ***/

	J[5] = 1.;
	J[21] = -1.4;

   /*** derivatives for constraint 29 ***/

	J[6] = 1.;
	J[42] = -1.2;

   /*** derivatives for constraint 30 ***/

	J[8] = 1.;
	J[22] = -1.;

   /*** derivatives for constraint 31 ***/

	J[9] = 1.;
	J[31] = -1.;

   /*** derivatives for constraint 32 ***/

	J[10] = 1.;
	J[43] = -1.;

   /*** derivatives for constraint 33 ***/

	J[58] = 1.;
	J[67] = -1.;

   /*** derivatives for constraint 34 ***/

	J[74] = 1.;
	J[82] = -1.;

   /*** derivatives for constraint 35 ***/

	J[59] = 1.;
	J[83] = -1.;

   /*** derivatives for constraint 36 ***/

	J[60] = -1.;
	J[68] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
