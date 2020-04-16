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
 fint ex14_1_7_auxcom_[1] = { 17 /* nlc */ };
 fint ex14_1_7_funcom_[133] = {
	10 /* nvar */,
	1 /* nobj */,
	17 /* ncon */,
	116 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	18,
	35,
	44,
	53,
	61,
	69,
	85,
	93,
	101,
	117,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	17,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16 };

 real ex14_1_7_boundc_[1+20+34] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		0.,
		10.,
		-1.7e308,
		1.7e308,
		-1.7e308,
		28.5132,
		-1.7e308,
		111.8467,
		-1.7e308,
		134.3884,
		-1.7e308,
		211.4823,
		-1.7e308,
		-28.5132,
		-1.7e308,
		-111.8467,
		-1.7e308,
		-134.3884,
		-1.7e308,
		-211.4823,
		-1.7e308,
		-23.3037,
		-1.7e308,
		-101.779,
		-1.7e308,
		-111.461,
		-1.7e308,
		-191.267,
		-1.7e308,
		23.3037,
		-1.7e308,
		101.779,
		-1.7e308,
		111.461,
		-1.7e308,
		191.267,
		0.,
		0.};

 real ex14_1_7_x0comn_[10] = {
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

 static real ex14_1_7_pd[80];
static real ex14_1_7_old_x[10];
static int ex14_1_7_xkind = -1;

 static int
ex14_1_7_xcheck(real *x)
{
	real *x1 = ex14_1_7_old_x, *xe = x + 10;
	errno = 0;
	if (ex14_1_7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex14_1_7_xkind = 0;
	return 1;
	}
 real
ex14_1_7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex14_1_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[9];
	;}

	if (wantfg & 2) {
	g[9] = 1.;
	}

	return rv;
}

 void
ex14_1_7_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[4];
	real t1;
	fint wantfg = *needfg;
	if (ex14_1_7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[0] = 1. - v[0];
	ex14_1_7_pd[1] = ex14_1_7_pd[0] * x[2];
	ex14_1_7_pd[2] = -0.0052095 * x[6];
	ex14_1_7_pd[2] += 0.485;
	v[0] = -0.0285132 * x[7];
	ex14_1_7_pd[2] += v[0];
	v[0] = x[4] * ex14_1_7_pd[2];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[3] = v[2];
	ex14_1_7_pd[4] = v[2] + -1.;
	v[2] = ex14_1_7_pd[1] * ex14_1_7_pd[4];
	t1 = v[2] + 23.3037*x[1];
	t1 += -x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[5] = 1. - v[0];
	ex14_1_7_pd[6] = ex14_1_7_pd[5] * x[2];
	ex14_1_7_pd[7] = -0.0100677 * x[6];
	ex14_1_7_pd[7] += 0.752;
	v[0] = -0.1118467 * x[7];
	ex14_1_7_pd[7] += v[0];
	v[0] = x[4] * ex14_1_7_pd[7];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[8] = v[2];
	ex14_1_7_pd[9] = v[2] + -1.;
	v[2] = ex14_1_7_pd[6] * ex14_1_7_pd[9];
	t1 = v[2] + 101.779*x[1];
	t1 += -x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[10] = 1. - v[0];
	ex14_1_7_pd[11] = ex14_1_7_pd[10] * x[2];
	ex14_1_7_pd[12] = -0.0229274 * x[6];
	ex14_1_7_pd[12] += 0.869;
	v[0] = -0.1343884 * x[7];
	ex14_1_7_pd[12] += v[0];
	v[0] = x[4] * ex14_1_7_pd[12];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[13] = v[2];
	ex14_1_7_pd[14] = v[2] + -1.;
	v[2] = ex14_1_7_pd[11] * ex14_1_7_pd[14];
	t1 = v[2] + 111.461*x[1];
	t1 += -x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[15] = 1. - v[0];
	ex14_1_7_pd[16] = ex14_1_7_pd[15] * x[2];
	ex14_1_7_pd[17] = -0.0202153 * x[6];
	ex14_1_7_pd[17] += 0.982;
	v[0] = -0.2114823 * x[7];
	ex14_1_7_pd[17] += v[0];
	v[0] = x[4] * ex14_1_7_pd[17];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[18] = v[2];
	ex14_1_7_pd[19] = v[2] + -1.;
	v[2] = ex14_1_7_pd[16] * ex14_1_7_pd[19];
	t1 = v[2] + 191.267*x[1];
	t1 += -x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[20] = 1. - v[0];
	ex14_1_7_pd[21] = ex14_1_7_pd[20] * x[2];
	ex14_1_7_pd[22] = -0.0052095 * x[6];
	ex14_1_7_pd[22] += 0.485;
	v[0] = -0.0285132 * x[7];
	ex14_1_7_pd[22] += v[0];
	v[0] = x[4] * ex14_1_7_pd[22];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[23] = v[2];
	ex14_1_7_pd[24] = v[2] + -1.;
	v[2] = ex14_1_7_pd[21] * ex14_1_7_pd[24];
	v[3] = -v[2];
	t1 = v[3] + -23.3037*x[1];
	t1 += -x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[25] = 1. - v[0];
	ex14_1_7_pd[26] = ex14_1_7_pd[25] * x[2];
	ex14_1_7_pd[27] = -0.0100677 * x[6];
	ex14_1_7_pd[27] += 0.752;
	v[0] = -0.1118467 * x[7];
	ex14_1_7_pd[27] += v[0];
	v[0] = x[4] * ex14_1_7_pd[27];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[28] = v[2];
	ex14_1_7_pd[29] = v[2] + -1.;
	v[2] = ex14_1_7_pd[26] * ex14_1_7_pd[29];
	v[3] = -v[2];
	t1 = v[3] + -101.779*x[1];
	t1 += -x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[30] = 1. - v[0];
	ex14_1_7_pd[31] = ex14_1_7_pd[30] * x[2];
	ex14_1_7_pd[32] = -0.0229274 * x[6];
	ex14_1_7_pd[32] += 0.869;
	v[0] = -0.1343884 * x[7];
	ex14_1_7_pd[32] += v[0];
	v[0] = x[4] * ex14_1_7_pd[32];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[33] = v[2];
	ex14_1_7_pd[34] = v[2] + -1.;
	v[2] = ex14_1_7_pd[31] * ex14_1_7_pd[34];
	v[3] = -v[2];
	t1 = v[3] + -111.461*x[1];
	t1 += -x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[35] = 1. - v[0];
	ex14_1_7_pd[36] = ex14_1_7_pd[35] * x[2];
	ex14_1_7_pd[37] = -0.0202153 * x[6];
	ex14_1_7_pd[37] += 0.982;
	v[0] = -0.2114823 * x[7];
	ex14_1_7_pd[37] += v[0];
	v[0] = x[4] * ex14_1_7_pd[37];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[38] = v[2];
	ex14_1_7_pd[39] = v[2] + -1.;
	v[2] = ex14_1_7_pd[36] * ex14_1_7_pd[39];
	v[3] = -v[2];
	t1 = v[3] + -191.267*x[1];
	t1 += -x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[40] = 1. - v[0];
	ex14_1_7_pd[41] = ex14_1_7_pd[40] * x[3];
	ex14_1_7_pd[42] = -0.0052095 * x[6];
	ex14_1_7_pd[42] += 0.116;
	v[0] = 0.0233037 * x[8];
	ex14_1_7_pd[42] += v[0];
	v[0] = x[5] * ex14_1_7_pd[42];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[43] = v[2];
	ex14_1_7_pd[44] = v[2] + -1.;
	v[2] = ex14_1_7_pd[41] * ex14_1_7_pd[44];
	t1 = v[2] + -28.5132*x[0];
	t1 += -x[9];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[45] = 1. - v[0];
	ex14_1_7_pd[46] = ex14_1_7_pd[45] * x[3];
	ex14_1_7_pd[47] = -0.0100677 * x[6];
	ex14_1_7_pd[47] += -0.502;
	v[0] = 0.101779 * x[8];
	ex14_1_7_pd[47] += v[0];
	v[0] = x[5] * ex14_1_7_pd[47];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[48] = v[2];
	ex14_1_7_pd[49] = v[2] + -1.;
	v[2] = ex14_1_7_pd[46] * ex14_1_7_pd[49];
	t1 = v[2] + -111.8467*x[0];
	t1 += -x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[50] = 1. - v[0];
	ex14_1_7_pd[51] = ex14_1_7_pd[50] * x[3];
	ex14_1_7_pd[52] = -0.0229274 * x[6];
	ex14_1_7_pd[52] += 0.166;
	v[0] = 0.111461 * x[8];
	ex14_1_7_pd[52] += v[0];
	v[0] = x[5] * ex14_1_7_pd[52];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[53] = v[2];
	ex14_1_7_pd[54] = v[2] + -1.;
	v[2] = ex14_1_7_pd[51] * ex14_1_7_pd[54];
	t1 = v[2] + -134.3884*x[0];
	t1 += -x[9];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[55] = 1. - v[0];
	ex14_1_7_pd[56] = ex14_1_7_pd[55] * x[3];
	ex14_1_7_pd[57] = -0.0202153 * x[6];
	ex14_1_7_pd[57] += -0.473;
	v[0] = 0.191267 * x[8];
	ex14_1_7_pd[57] += v[0];
	v[0] = x[5] * ex14_1_7_pd[57];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[58] = v[2];
	ex14_1_7_pd[59] = v[2] + -1.;
	v[2] = ex14_1_7_pd[56] * ex14_1_7_pd[59];
	t1 = v[2] + -211.4823*x[0];
	t1 += -x[9];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[60] = 1. - v[0];
	ex14_1_7_pd[61] = ex14_1_7_pd[60] * x[3];
	ex14_1_7_pd[62] = -0.0052095 * x[6];
	ex14_1_7_pd[62] += 0.116;
	v[0] = 0.0233037 * x[8];
	ex14_1_7_pd[62] += v[0];
	v[0] = x[5] * ex14_1_7_pd[62];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[63] = v[2];
	ex14_1_7_pd[64] = v[2] + -1.;
	v[2] = ex14_1_7_pd[61] * ex14_1_7_pd[64];
	v[3] = -v[2];
	t1 = v[3] + 28.5132*x[0];
	t1 += -x[9];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[65] = 1. - v[0];
	ex14_1_7_pd[66] = ex14_1_7_pd[65] * x[3];
	ex14_1_7_pd[67] = -0.0100677 * x[6];
	ex14_1_7_pd[67] += -0.502;
	v[0] = 0.101779 * x[8];
	ex14_1_7_pd[67] += v[0];
	v[0] = x[5] * ex14_1_7_pd[67];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[68] = v[2];
	ex14_1_7_pd[69] = v[2] + -1.;
	v[2] = ex14_1_7_pd[66] * ex14_1_7_pd[69];
	v[3] = -v[2];
	t1 = v[3] + 111.8467*x[0];
	t1 += -x[9];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[70] = 1. - v[0];
	ex14_1_7_pd[71] = ex14_1_7_pd[70] * x[3];
	ex14_1_7_pd[72] = -0.0229274 * x[6];
	ex14_1_7_pd[72] += 0.166;
	v[0] = 0.111461 * x[8];
	ex14_1_7_pd[72] += v[0];
	v[0] = x[5] * ex14_1_7_pd[72];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[73] = v[2];
	ex14_1_7_pd[74] = v[2] + -1.;
	v[2] = ex14_1_7_pd[71] * ex14_1_7_pd[74];
	v[3] = -v[2];
	t1 = v[3] + 134.3884*x[0];
	t1 += -x[9];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[0] * x[1];
	ex14_1_7_pd[75] = 1. - v[0];
	ex14_1_7_pd[76] = ex14_1_7_pd[75] * x[3];
	ex14_1_7_pd[77] = -0.0202153 * x[6];
	ex14_1_7_pd[77] += -0.473;
	v[0] = 0.191267 * x[8];
	ex14_1_7_pd[77] += v[0];
	v[0] = x[5] * ex14_1_7_pd[77];
	v[2] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	ex14_1_7_pd[78] = v[2];
	ex14_1_7_pd[79] = v[2] + -1.;
	v[2] = ex14_1_7_pd[76] * ex14_1_7_pd[79];
	v[3] = -v[2];
	t1 = v[3] + 211.4823*x[0];
	t1 += -x[9];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[0] * x[2];
	v[1] = x[1] * x[3];
	v[2] = v[0] - v[1];
	c[16] = v[2];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = ex14_1_7_pd[1]*ex14_1_7_pd[3];
	dv[1] = dv[0]*x[4];
	J[52] = dv[0]*ex14_1_7_pd[2];
	dv[2] = dv[1];
	J[84] = -dv[2]*0.0285132;
	J[68] = -dv[1]*0.0052095;
	J[34] = ex14_1_7_pd[4]*ex14_1_7_pd[0];
	dv[3] = ex14_1_7_pd[4]*x[2];
	J[17] = -dv[3]*x[0] + 23.3037;
	J[0] = -dv[3]*x[1];
	J[100] = -1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = ex14_1_7_pd[6]*ex14_1_7_pd[8];
	dv[1] = dv[0]*x[4];
	J[53] = dv[0]*ex14_1_7_pd[7];
	dv[2] = dv[1];
	J[85] = -dv[2]*0.1118467;
	J[69] = -dv[1]*0.0100677;
	J[35] = ex14_1_7_pd[9]*ex14_1_7_pd[5];
	dv[3] = ex14_1_7_pd[9]*x[2];
	J[18] = -dv[3]*x[0] + 101.779;
	J[1] = -dv[3]*x[1];
	J[101] = -1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = ex14_1_7_pd[11]*ex14_1_7_pd[13];
	dv[1] = dv[0]*x[4];
	J[54] = dv[0]*ex14_1_7_pd[12];
	dv[2] = dv[1];
	J[86] = -dv[2]*0.1343884;
	J[70] = -dv[1]*0.0229274;
	J[36] = ex14_1_7_pd[14]*ex14_1_7_pd[10];
	dv[3] = ex14_1_7_pd[14]*x[2];
	J[19] = -dv[3]*x[0] + 111.461;
	J[2] = -dv[3]*x[1];
	J[102] = -1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = ex14_1_7_pd[16]*ex14_1_7_pd[18];
	dv[1] = dv[0]*x[4];
	J[55] = dv[0]*ex14_1_7_pd[17];
	dv[2] = dv[1];
	J[87] = -dv[2]*0.2114823;
	J[71] = -dv[1]*0.0202153;
	J[37] = ex14_1_7_pd[19]*ex14_1_7_pd[15];
	dv[3] = ex14_1_7_pd[19]*x[2];
	J[20] = -dv[3]*x[0] + 191.267;
	J[3] = -dv[3]*x[1];
	J[103] = -1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -ex14_1_7_pd[21]*ex14_1_7_pd[23];
	dv[1] = dv[0]*x[4];
	J[56] = dv[0]*ex14_1_7_pd[22];
	dv[2] = dv[1];
	J[88] = -dv[2]*0.0285132;
	J[72] = -dv[1]*0.0052095;
	J[38] = -ex14_1_7_pd[24]*ex14_1_7_pd[20];
	dv[3] = -ex14_1_7_pd[24]*x[2];
	J[21] = -dv[3]*x[0] + -23.3037;
	J[4] = -dv[3]*x[1];
	J[104] = -1.;

   /*** derivatives for constraint 6 ***/

	dv[0] = -ex14_1_7_pd[26]*ex14_1_7_pd[28];
	dv[1] = dv[0]*x[4];
	J[57] = dv[0]*ex14_1_7_pd[27];
	dv[2] = dv[1];
	J[89] = -dv[2]*0.1118467;
	J[73] = -dv[1]*0.0100677;
	J[39] = -ex14_1_7_pd[29]*ex14_1_7_pd[25];
	dv[3] = -ex14_1_7_pd[29]*x[2];
	J[22] = -dv[3]*x[0] + -101.779;
	J[5] = -dv[3]*x[1];
	J[105] = -1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -ex14_1_7_pd[31]*ex14_1_7_pd[33];
	dv[1] = dv[0]*x[4];
	J[58] = dv[0]*ex14_1_7_pd[32];
	dv[2] = dv[1];
	J[90] = -dv[2]*0.1343884;
	J[74] = -dv[1]*0.0229274;
	J[40] = -ex14_1_7_pd[34]*ex14_1_7_pd[30];
	dv[3] = -ex14_1_7_pd[34]*x[2];
	J[23] = -dv[3]*x[0] + -111.461;
	J[6] = -dv[3]*x[1];
	J[106] = -1.;

   /*** derivatives for constraint 8 ***/

	dv[0] = -ex14_1_7_pd[36]*ex14_1_7_pd[38];
	dv[1] = dv[0]*x[4];
	J[59] = dv[0]*ex14_1_7_pd[37];
	dv[2] = dv[1];
	J[91] = -dv[2]*0.2114823;
	J[75] = -dv[1]*0.0202153;
	J[41] = -ex14_1_7_pd[39]*ex14_1_7_pd[35];
	dv[3] = -ex14_1_7_pd[39]*x[2];
	J[24] = -dv[3]*x[0] + -191.267;
	J[7] = -dv[3]*x[1];
	J[107] = -1.;

   /*** derivatives for constraint 9 ***/

	dv[0] = ex14_1_7_pd[41]*ex14_1_7_pd[43];
	dv[1] = dv[0]*x[5];
	J[60] = dv[0]*ex14_1_7_pd[42];
	dv[2] = dv[1];
	J[92] = dv[2]*0.0233037;
	J[76] = -dv[1]*0.0052095;
	J[43] = ex14_1_7_pd[44]*ex14_1_7_pd[40];
	dv[3] = ex14_1_7_pd[44]*x[3];
	J[25] = -dv[3]*x[0];
	J[8] = -dv[3]*x[1] + -28.5132;
	J[108] = -1.;

   /*** derivatives for constraint 10 ***/

	dv[0] = ex14_1_7_pd[46]*ex14_1_7_pd[48];
	dv[1] = dv[0]*x[5];
	J[61] = dv[0]*ex14_1_7_pd[47];
	dv[2] = dv[1];
	J[93] = dv[2]*0.101779;
	J[77] = -dv[1]*0.0100677;
	J[44] = ex14_1_7_pd[49]*ex14_1_7_pd[45];
	dv[3] = ex14_1_7_pd[49]*x[3];
	J[26] = -dv[3]*x[0];
	J[9] = -dv[3]*x[1] + -111.8467;
	J[109] = -1.;

   /*** derivatives for constraint 11 ***/

	dv[0] = ex14_1_7_pd[51]*ex14_1_7_pd[53];
	dv[1] = dv[0]*x[5];
	J[62] = dv[0]*ex14_1_7_pd[52];
	dv[2] = dv[1];
	J[94] = dv[2]*0.111461;
	J[78] = -dv[1]*0.0229274;
	J[45] = ex14_1_7_pd[54]*ex14_1_7_pd[50];
	dv[3] = ex14_1_7_pd[54]*x[3];
	J[27] = -dv[3]*x[0];
	J[10] = -dv[3]*x[1] + -134.3884;
	J[110] = -1.;

   /*** derivatives for constraint 12 ***/

	dv[0] = ex14_1_7_pd[56]*ex14_1_7_pd[58];
	dv[1] = dv[0]*x[5];
	J[63] = dv[0]*ex14_1_7_pd[57];
	dv[2] = dv[1];
	J[95] = dv[2]*0.191267;
	J[79] = -dv[1]*0.0202153;
	J[46] = ex14_1_7_pd[59]*ex14_1_7_pd[55];
	dv[3] = ex14_1_7_pd[59]*x[3];
	J[28] = -dv[3]*x[0];
	J[11] = -dv[3]*x[1] + -211.4823;
	J[111] = -1.;

   /*** derivatives for constraint 13 ***/

	dv[0] = -ex14_1_7_pd[61]*ex14_1_7_pd[63];
	dv[1] = dv[0]*x[5];
	J[64] = dv[0]*ex14_1_7_pd[62];
	dv[2] = dv[1];
	J[96] = dv[2]*0.0233037;
	J[80] = -dv[1]*0.0052095;
	J[47] = -ex14_1_7_pd[64]*ex14_1_7_pd[60];
	dv[3] = -ex14_1_7_pd[64]*x[3];
	J[29] = -dv[3]*x[0];
	J[12] = -dv[3]*x[1] + 28.5132;
	J[112] = -1.;

   /*** derivatives for constraint 14 ***/

	dv[0] = -ex14_1_7_pd[66]*ex14_1_7_pd[68];
	dv[1] = dv[0]*x[5];
	J[65] = dv[0]*ex14_1_7_pd[67];
	dv[2] = dv[1];
	J[97] = dv[2]*0.101779;
	J[81] = -dv[1]*0.0100677;
	J[48] = -ex14_1_7_pd[69]*ex14_1_7_pd[65];
	dv[3] = -ex14_1_7_pd[69]*x[3];
	J[30] = -dv[3]*x[0];
	J[13] = -dv[3]*x[1] + 111.8467;
	J[113] = -1.;

   /*** derivatives for constraint 15 ***/

	dv[0] = -ex14_1_7_pd[71]*ex14_1_7_pd[73];
	dv[1] = dv[0]*x[5];
	J[66] = dv[0]*ex14_1_7_pd[72];
	dv[2] = dv[1];
	J[98] = dv[2]*0.111461;
	J[82] = -dv[1]*0.0229274;
	J[49] = -ex14_1_7_pd[74]*ex14_1_7_pd[70];
	dv[3] = -ex14_1_7_pd[74]*x[3];
	J[31] = -dv[3]*x[0];
	J[14] = -dv[3]*x[1] + 134.3884;
	J[114] = -1.;

   /*** derivatives for constraint 16 ***/

	dv[0] = -ex14_1_7_pd[76]*ex14_1_7_pd[78];
	dv[1] = dv[0]*x[5];
	J[67] = dv[0]*ex14_1_7_pd[77];
	dv[2] = dv[1];
	J[99] = dv[2]*0.191267;
	J[83] = -dv[1]*0.0202153;
	J[50] = -ex14_1_7_pd[79]*ex14_1_7_pd[75];
	dv[3] = -ex14_1_7_pd[79]*x[3];
	J[32] = -dv[3]*x[0];
	J[15] = -dv[3]*x[1] + 211.4823;
	J[115] = -1.;

   /*** derivatives for constraint 17 ***/

	J[51] = -x[1];
	J[33] = -x[3];
	J[42] = x[0];
	J[16] = x[2];
	}
}
#ifdef __cplusplus
	}
#endif
