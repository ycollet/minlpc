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
 fint chenery_auxcom_[1] = { 23 /* nlc */ };
 fint chenery_funcom_[178] = {
	43 /* nvar */,
	1 /* nobj */,
	38 /* ncon */,
	128 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	12,
	16,
	19,
	21,
	24,
	28,
	33,
	36,
	39,
	42,
	45,
	48,
	51,
	54,
	57,
	60,
	63,
	66,
	69,
	72,
	75,
	77,
	79,
	81,
	83,
	85,
	87,
	92,
	97,
	101,
	104,
	107,
	110,
	113,
	115,
	117,
	119,
	121,
	123,
	125,
	127,
	129,

	/* rownos */
	1,
	7,
	24,
	25,
	26,
	27,
	6,
	7,
	25,
	26,
	27,
	6,
	7,
	26,
	27,
	6,
	7,
	27,
	2,
	34,
	3,
	34,
	35,
	4,
	34,
	35,
	36,
	5,
	34,
	35,
	36,
	37,
	6,
	12,
	20,
	6,
	13,
	21,
	6,
	14,
	22,
	6,
	15,
	23,
	7,
	16,
	20,
	7,
	17,
	21,
	7,
	18,
	22,
	7,
	19,
	23,
	1,
	24,
	31,
	1,
	25,
	32,
	1,
	26,
	33,
	1,
	24,
	28,
	1,
	25,
	29,
	1,
	26,
	30,
	1,
	28,
	1,
	29,
	1,
	30,
	1,
	31,
	1,
	32,
	1,
	33,
	20,
	21,
	22,
	23,
	38,
	8,
	9,
	10,
	11,
	38,
	2,
	3,
	4,
	5,
	8,
	12,
	16,
	9,
	13,
	17,
	10,
	14,
	18,
	11,
	15,
	19,
	20,
	34,
	21,
	35,
	22,
	36,
	23,
	37,
	2,
	24,
	3,
	25,
	4,
	26,
	5,
	27 };

 real chenery_boundc_[1+86+76] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		2000.,
		0.,
		2000.,
		0.,
		2000.,
		0.,
		2000.,
		0.1,
		100.,
		0.1,
		100.,
		0.1,
		100.,
		0.1,
		100.,
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
		400.,
		0.,
		400.,
		0.,
		400.,
		0.,
		400.,
		0.,
		400.,
		0.,
		400.,
		0.,
		4.,
		0.,
		4.,
		0.,
		4.,
		0.,
		4.,
		0.,
		4.,
		0.,
		4.,
		0.25,
		4.,
		0.25,
		4.,
		0.01,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.001,
		1.7e308,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		100.,
		0.,
		2000.,
		0.,
		2000.,
		0.,
		2000.,
		0.,
		2000.,
		-1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		750.,
		500.,
		500.,
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
		0.,
		0.,
		0.,
		0.,
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
		1.1,
		1.1,
		1.,
		1.,
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

 real chenery_x0comn_[43] = {
		200.,
		200.,
		200.,
		200.,
		3.,
		3.,
		3.,
		3.,
		0.283078383128534,
		0.383990781960791,
		0.309951359679435,
		0.580992426342466,
		0.22769870931466,
		0.249861958624235,
		0.617797527645794,
		0.428786587425074,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.,
		1.1,
		1.,
		3.5,
		3.5,
		0.3,
		0.171804999139287,
		0.349221638418406,
		15.7837604335036,
		0.00311417990544524,
		1.08002386572984,
		1.25850763714561,
		2.47224270643972,
		2.08174548233022,
		250.,
		250.,
		250.,
		250. };

 static real chenery_pd[20];
static real chenery_old_x[43];
static int chenery_xkind = -1;

 static int
chenery_xcheck(real *x)
{
	real *x1 = chenery_old_x, *xe = x + 43;
	errno = 0;
	if (chenery_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	chenery_xkind = 0;
	return 1;
	}
 real
chenery_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (chenery_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[39];
	rv += -x[40];
	rv += -x[41];
	rv += -x[42];
	;}

	if (wantfg & 2) {
	g[39] = -1.;
	g[40] = -1.;
	g[41] = -1.;
	g[42] = -1.;
	}

	return rv;
}

 void
chenery_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (chenery_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[22] * x[19];
	v[1] = x[25] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[23] * x[20];
	v[0] += v[2];
	v[2] = x[26] * x[17];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[24] * x[21];
	v[0] += v[1];
	v[1] = x[27] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[30] * x[4];
	v[1] = pow(v[0], -0.674);
	if (errno) in_trouble2("pow",v[0],-0.674);
	if (v[0] > 0.) {
	chenery_pd[0] = -0.674*(v[1]/v[0]);
	} else if (-0.674 > 1.) {
	chenery_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],-0.674);
	}
	v[1] *= -100.;
	t1 = v[1] + x[39];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[30] * x[5];
	v[1] = pow(v[0], -0.246);
	if (errno) in_trouble2("pow",v[0],-0.246);
	if (v[0] > 0.) {
	chenery_pd[1] = -0.246*(v[1]/v[0]);
	} else if (-0.246 > 1.) {
	chenery_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],-0.246);
	}
	v[1] *= -230.;
	t1 = v[1] + x[40];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[30] * x[6];
	v[1] = pow(v[0], -0.587);
	if (errno) in_trouble2("pow",v[0],-0.587);
	if (v[0] > 0.) {
	chenery_pd[2] = -0.587*(v[1]/v[0]);
	} else if (-0.587 > 1.) {
	chenery_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],-0.587);
	}
	v[1] *= -220.;
	t1 = v[1] + x[41];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[30] * x[7];
	v[1] = pow(v[0], -0.352);
	if (errno) in_trouble2("pow",v[0],-0.352);
	if (v[0] > 0.) {
	chenery_pd[3] = -0.352*(v[1]/v[0]);
	} else if (-0.352 > 1.) {
	chenery_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],-0.352);
	}
	v[1] *= -450.;
	t1 = v[1] + x[42];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[8] * x[0];
	v[1] = x[9] * x[1];
	v[0] += v[1];
	v[1] = x[10] * x[2];
	v[0] += v[1];
	v[1] = x[11] * x[3];
	v[0] += v[1];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[12] * x[0];
	v[1] = x[13] * x[1];
	v[0] += v[1];
	v[1] = x[14] * x[2];
	v[0] += v[1];
	v[1] = x[15] * x[3];
	v[0] += v[1];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = 2.06748466257669 * x[29];
	v[1] = pow(v[0], -0.89);
	if (errno) in_trouble2("pow",v[0],-0.89);
	if (v[0] > 0.) {
	chenery_pd[4] = -0.89*(v[1]/v[0]);
	} else if (-0.89 > 1.) {
	chenery_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],-0.89);
	}
	v[0] = -v[1];
	t1 = v[0] + x[31];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = 1.25733634311512 * x[29];
	v[1] = pow(v[0], -0.71);
	if (errno) in_trouble2("pow",v[0],-0.71);
	if (v[0] > 0.) {
	chenery_pd[5] = -0.71*(v[1]/v[0]);
	} else if (-0.71 > 1.) {
	chenery_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],-0.71);
	}
	v[0] = -v[1];
	t1 = v[0] + x[32];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = 0.00908173562058528 * x[29];
	v[1] = pow(v[0], -0.8);
	if (errno) in_trouble2("pow",v[0],-0.8);
	if (v[0] > 0.) {
	chenery_pd[6] = -0.8*(v[1]/v[0]);
	} else if (-0.8 > 1.) {
	chenery_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],-0.8);
	}
	v[0] = -v[1];
	t1 = v[0] + x[33];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = 124.31328320802 * x[29];
	v[1] = pow(v[0], -0.95);
	if (errno) in_trouble2("pow",v[0],-0.95);
	if (v[0] > 0.) {
	chenery_pd[7] = -0.95*(v[1]/v[0]);
	} else if (-0.95 > 1.) {
	chenery_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],-0.95);
	}
	v[0] = -v[1];
	t1 = v[0] + x[34];
	c[10] = t1;

  /***  constraint 12  ***/

	if (x[31] == 0.) {
	zerdiv_(&x[31]);	}
	v[0] = 0.326 / x[31];
	chenery_pd[8] = -v[0] / x[31];
	v[1] = v[0] + 0.674;
	v[0] = pow(v[1], 0.123595505617978);
	if (errno) in_trouble2("pow",v[1],0.123595505617978);
	if (v[1] > 0.) {
	chenery_pd[9] = 0.123595505617978*(v[0]/v[1]);
	} else if (0.123595505617978 > 1.) {
	chenery_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.123595505617978);
	}
	v[1] = -v[0];
	t1 = v[1] + 3.97*x[8];
	c[11] = t1;

  /***  constraint 13  ***/

	if (x[32] == 0.) {
	zerdiv_(&x[32]);	}
	v[0] = 0.443 / x[32];
	chenery_pd[10] = -v[0] / x[32];
	v[1] = v[0] + 0.557;
	v[0] = pow(v[1], 0.408450704225352);
	if (errno) in_trouble2("pow",v[1],0.408450704225352);
	if (v[1] > 0.) {
	chenery_pd[11] = 0.408450704225352*(v[0]/v[1]);
	} else if (0.408450704225352 > 1.) {
	chenery_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.408450704225352);
	}
	v[1] = -v[0];
	t1 = v[1] + 3.33*x[9];
	c[12] = t1;

  /***  constraint 14  ***/

	if (x[33] == 0.) {
	zerdiv_(&x[33]);	}
	v[0] = 0.991 / x[33];
	chenery_pd[12] = -v[0] / x[33];
	v[1] = v[0] + 0.00900000000000001;
	v[0] = pow(v[1], 0.25);
	if (errno) in_trouble2("pow",v[1],0.25);
	if (v[1] > 0.) {
	chenery_pd[13] = 0.25*(v[0]/v[1]);
	} else if (0.25 > 1.) {
	chenery_pd[13] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.25);
	}
	v[1] = -v[0];
	t1 = v[1] + 1.67*x[10];
	c[13] = t1;

  /***  constraint 15  ***/

	if (x[34] == 0.) {
	zerdiv_(&x[34]);	}
	v[0] = 0.00798 / x[34];
	chenery_pd[14] = -v[0] / x[34];
	v[1] = v[0] + 0.99202;
	v[0] = pow(v[1], 0.0526315789473684);
	if (errno) in_trouble2("pow",v[1],0.0526315789473684);
	if (v[1] > 0.) {
	chenery_pd[15] = 0.0526315789473684*(v[0]/v[1]);
	} else if (0.0526315789473684 > 1.) {
	chenery_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.0526315789473684);
	}
	v[1] = -v[0];
	t1 = v[1] + 1.84*x[11];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = 0.674 * x[31];
	v[1] = v[0] + 0.326;
	v[0] = pow(v[1], 0.123595505617978);
	if (errno) in_trouble2("pow",v[1],0.123595505617978);
	if (v[1] > 0.) {
	chenery_pd[16] = 0.123595505617978*(v[0]/v[1]);
	} else if (0.123595505617978 > 1.) {
	chenery_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.123595505617978);
	}
	v[1] = -v[0];
	t1 = v[1] + 3.97*x[12];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = 0.557 * x[32];
	v[1] = v[0] + 0.443;
	v[0] = pow(v[1], 0.408450704225352);
	if (errno) in_trouble2("pow",v[1],0.408450704225352);
	if (v[1] > 0.) {
	chenery_pd[17] = 0.408450704225352*(v[0]/v[1]);
	} else if (0.408450704225352 > 1.) {
	chenery_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.408450704225352);
	}
	v[1] = -v[0];
	t1 = v[1] + 3.33*x[13];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = 0.00900000000000001 * x[33];
	v[1] = v[0] + 0.991;
	v[0] = pow(v[1], 0.25);
	if (errno) in_trouble2("pow",v[1],0.25);
	if (v[1] > 0.) {
	chenery_pd[18] = 0.25*(v[0]/v[1]);
	} else if (0.25 > 1.) {
	chenery_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.25);
	}
	v[1] = -v[0];
	t1 = v[1] + 1.67*x[14];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = 0.99202 * x[34];
	v[1] = v[0] + 0.00798;
	v[0] = pow(v[1], 0.0526315789473684);
	if (errno) in_trouble2("pow",v[1],0.0526315789473684);
	if (v[1] > 0.) {
	chenery_pd[19] = 0.0526315789473684*(v[0]/v[1]);
	} else if (0.0526315789473684 > 1.) {
	chenery_pd[19] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[1],0.0526315789473684);
	}
	v[1] = -v[0];
	t1 = v[1] + 1.84*x[15];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[28] * x[12];
	v[1] = -v[0];
	t1 = v[1] + -x[8];
	t1 += x[35];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[28] * x[13];
	v[1] = -v[0];
	t1 = v[1] + -x[9];
	t1 += x[36];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[28] * x[14];
	v[1] = -v[0];
	t1 = v[1] + -x[10];
	t1 += x[37];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[28] * x[15];
	v[1] = -v[0];
	t1 = v[1] + -x[11];
	t1 += x[38];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[0];
	t1 += -x[16];
	t1 += x[19];
	t1 += -x[39];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.1*x[0];
	t1 += x[1];
	t1 += -x[17];
	t1 += x[20];
	t1 += -x[40];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.2*x[0];
	t1 += -0.1*x[1];
	t1 += x[2];
	t1 += -x[18];
	t1 += x[21];
	t1 += -x[41];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -0.2*x[0];
	t1 += -0.3*x[1];
	t1 += -0.1*x[2];
	t1 += x[3];
	t1 += -x[42];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -0.005*x[19];
	t1 += x[22];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -0.0157*x[20];
	t1 += x[23];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -0.00178*x[21];
	t1 += x[24];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = 0.005*x[16];
	t1 += x[25];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = 0.001*x[17];
	t1 += x[26];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = 0.01*x[18];
	t1 += x[27];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[4];
	t1 += -0.1*x[5];
	t1 += -0.2*x[6];
	t1 += -0.2*x[7];
	t1 += -x[35];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[5];
	t1 += -0.1*x[6];
	t1 += -0.3*x[7];
	t1 += -x[36];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[6];
	t1 += -0.1*x[7];
	t1 += -x[37];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[7];
	t1 += -x[38];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[28];
	t1 += x[29];
	c[37] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[62] = -x[27];
	J[84] = -x[18];
	J[71] = x[24];
	J[78] = x[21];
	J[59] = -x[26];
	J[82] = -x[17];
	J[68] = x[23];
	J[76] = x[20];
	J[56] = -x[25];
	J[80] = -x[16];
	J[65] = x[22];
	J[74] = x[19];

   /*** derivatives for constraint 2 ***/

	dv[0] = -100.*chenery_pd[0];
	J[18] = dv[0]*x[30];
	J[96] = dv[0]*x[4];
	J[120] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -230.*chenery_pd[1];
	J[20] = dv[0]*x[30];
	J[97] = dv[0]*x[5];
	J[122] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -220.*chenery_pd[2];
	J[23] = dv[0]*x[30];
	J[98] = dv[0]*x[6];
	J[124] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -450.*chenery_pd[3];
	J[27] = dv[0]*x[30];
	J[99] = dv[0]*x[7];
	J[126] = 1.;

   /*** derivatives for constraint 6 ***/

	J[15] = x[11];
	J[41] = x[3];
	J[11] = x[10];
	J[38] = x[2];
	J[6] = x[9];
	J[35] = x[1];
	J[0] = x[8];
	J[32] = x[0];

   /*** derivatives for constraint 7 ***/

	J[16] = x[15];
	J[53] = x[3];
	J[12] = x[14];
	J[50] = x[2];
	J[7] = x[13];
	J[47] = x[1];
	J[1] = x[12];
	J[44] = x[0];

   /*** derivatives for constraint 8 ***/

	J[91] = -chenery_pd[4]*2.06748466257669;
	J[100] = 1.;

   /*** derivatives for constraint 9 ***/

	J[92] = -chenery_pd[5]*1.25733634311512;
	J[103] = 1.;

   /*** derivatives for constraint 10 ***/

	J[93] = -chenery_pd[6]*0.00908173562058528;
	J[106] = 1.;

   /*** derivatives for constraint 11 ***/

	J[94] = -chenery_pd[7]*124.31328320802;
	J[109] = 1.;

   /*** derivatives for constraint 12 ***/

	J[101] = -chenery_pd[9]*chenery_pd[8];
	J[33] = 3.97;

   /*** derivatives for constraint 13 ***/

	J[104] = -chenery_pd[11]*chenery_pd[10];
	J[36] = 3.33;

   /*** derivatives for constraint 14 ***/

	J[107] = -chenery_pd[13]*chenery_pd[12];
	J[39] = 1.67;

   /*** derivatives for constraint 15 ***/

	J[110] = -chenery_pd[15]*chenery_pd[14];
	J[42] = 1.84;

   /*** derivatives for constraint 16 ***/

	J[102] = -chenery_pd[16]*0.674;
	J[45] = 3.97;

   /*** derivatives for constraint 17 ***/

	J[105] = -chenery_pd[17]*0.557;
	J[48] = 3.33;

   /*** derivatives for constraint 18 ***/

	J[108] = -chenery_pd[18]*0.00900000000000001;
	J[51] = 1.67;

   /*** derivatives for constraint 19 ***/

	J[111] = -chenery_pd[19]*0.99202;
	J[54] = 1.84;

   /*** derivatives for constraint 20 ***/

	J[46] = -x[28];
	J[86] = -x[12];
	J[34] = -1.;
	J[112] = 1.;

   /*** derivatives for constraint 21 ***/

	J[49] = -x[28];
	J[87] = -x[13];
	J[37] = -1.;
	J[114] = 1.;

   /*** derivatives for constraint 22 ***/

	J[52] = -x[28];
	J[88] = -x[14];
	J[40] = -1.;
	J[116] = 1.;

   /*** derivatives for constraint 23 ***/

	J[55] = -x[28];
	J[89] = -x[15];
	J[43] = -1.;
	J[118] = 1.;

   /*** derivatives for constraint 24 ***/

	J[2] = 1.;
	J[57] = -1.;
	J[66] = 1.;
	J[121] = -1.;

   /*** derivatives for constraint 25 ***/

	J[3] = -0.1;
	J[8] = 1.;
	J[60] = -1.;
	J[69] = 1.;
	J[123] = -1.;

   /*** derivatives for constraint 26 ***/

	J[4] = -0.2;
	J[9] = -0.1;
	J[13] = 1.;
	J[63] = -1.;
	J[72] = 1.;
	J[125] = -1.;

   /*** derivatives for constraint 27 ***/

	J[5] = -0.2;
	J[10] = -0.3;
	J[14] = -0.1;
	J[17] = 1.;
	J[127] = -1.;

   /*** derivatives for constraint 28 ***/

	J[67] = -0.005;
	J[75] = 1.;

   /*** derivatives for constraint 29 ***/

	J[70] = -0.0157;
	J[77] = 1.;

   /*** derivatives for constraint 30 ***/

	J[73] = -0.00178;
	J[79] = 1.;

   /*** derivatives for constraint 31 ***/

	J[58] = 0.005;
	J[81] = 1.;

   /*** derivatives for constraint 32 ***/

	J[61] = 0.001;
	J[83] = 1.;

   /*** derivatives for constraint 33 ***/

	J[64] = 0.01;
	J[85] = 1.;

   /*** derivatives for constraint 34 ***/

	J[19] = 1.;
	J[21] = -0.1;
	J[24] = -0.2;
	J[28] = -0.2;
	J[113] = -1.;

   /*** derivatives for constraint 35 ***/

	J[22] = 1.;
	J[25] = -0.1;
	J[29] = -0.3;
	J[115] = -1.;

   /*** derivatives for constraint 36 ***/

	J[26] = 1.;
	J[30] = -0.1;
	J[117] = -1.;

   /*** derivatives for constraint 37 ***/

	J[31] = 1.;
	J[119] = -1.;

   /*** derivatives for constraint 38 ***/

	J[90] = -1.;
	J[95] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
