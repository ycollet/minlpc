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
 fint st_fp7a_auxcom_[1] = { 0 /* nlc */ };
 fint st_fp7a_funcom_[191] = {
	20 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	164 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	9,
	17,
	25,
	34,
	43,
	51,
	58,
	66,
	74,
	82,
	90,
	98,
	106,
	114,
	122,
	131,
	140,
	149,
	157,
	165,

	/* rownos */
	1,
	2,
	4,
	5,
	6,
	8,
	9,
	10,
	1,
	3,
	4,
	5,
	7,
	8,
	9,
	10,
	2,
	3,
	4,
	6,
	7,
	8,
	9,
	10,
	1,
	2,
	3,
	5,
	6,
	7,
	8,
	9,
	10,
	1,
	2,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	1,
	3,
	4,
	5,
	6,
	7,
	8,
	10,
	2,
	3,
	4,
	5,
	6,
	7,
	10,
	1,
	2,
	3,
	4,
	5,
	6,
	9,
	10,
	1,
	2,
	3,
	4,
	5,
	8,
	9,
	10,
	1,
	2,
	3,
	4,
	7,
	8,
	9,
	10,
	1,
	2,
	3,
	6,
	7,
	8,
	9,
	10,
	1,
	2,
	5,
	6,
	7,
	8,
	9,
	10,
	1,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	10,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	9,
	10,
	1,
	2,
	3,
	4,
	5,
	6,
	8,
	9,
	10,
	1,
	2,
	3,
	4,
	5,
	7,
	8,
	9,
	10,
	1,
	2,
	3,
	4,
	6,
	7,
	8,
	10,
	1,
	2,
	3,
	5,
	6,
	7,
	9,
	10 };

 real st_fp7a_boundc_[1+40+20] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		-5.,
		-1.7e308,
		2.,
		-1.7e308,
		-1.,
		-1.7e308,
		-3.,
		-1.7e308,
		5.,
		-1.7e308,
		4.,
		-1.7e308,
		-1.,
		-1.7e308,
		0.,
		-1.7e308,
		9.,
		-1.7e308,
		40.};

 real st_fp7a_x0comn_[20] = {
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
		0. };

 static real st_fp7a_pd[40];
static real st_fp7a_old_x[20];
static int st_fp7a_xkind = -1;

 static int
st_fp7a_xcheck(real *x)
{
	real *x1 = st_fp7a_old_x, *xe = x + 20;
	errno = 0;
	if (st_fp7a_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_fp7a_xkind = 0;
	return 1;
	}
 real
st_fp7a_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_fp7a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_fp7a_pd[0] = x[0] * x[0];
	st_fp7a_pd[1] = x[0] + x[0];
	v[0] = -0.5 * st_fp7a_pd[0];
	st_fp7a_pd[2] = x[1] * x[1];
	st_fp7a_pd[3] = x[1] + x[1];
	v[1] = -0.5 * st_fp7a_pd[2];
	v[0] += v[1];
	st_fp7a_pd[4] = x[2] * x[2];
	st_fp7a_pd[5] = x[2] + x[2];
	v[1] = -0.5 * st_fp7a_pd[4];
	v[0] += v[1];
	st_fp7a_pd[6] = x[3] * x[3];
	st_fp7a_pd[7] = x[3] + x[3];
	v[1] = -0.5 * st_fp7a_pd[6];
	v[0] += v[1];
	st_fp7a_pd[8] = x[4] * x[4];
	st_fp7a_pd[9] = x[4] + x[4];
	v[1] = -0.5 * st_fp7a_pd[8];
	v[0] += v[1];
	st_fp7a_pd[10] = x[5] * x[5];
	st_fp7a_pd[11] = x[5] + x[5];
	v[1] = -0.5 * st_fp7a_pd[10];
	v[0] += v[1];
	st_fp7a_pd[12] = x[6] * x[6];
	st_fp7a_pd[13] = x[6] + x[6];
	v[1] = -0.5 * st_fp7a_pd[12];
	v[0] += v[1];
	st_fp7a_pd[14] = x[7] * x[7];
	st_fp7a_pd[15] = x[7] + x[7];
	v[1] = -0.5 * st_fp7a_pd[14];
	v[0] += v[1];
	st_fp7a_pd[16] = x[8] * x[8];
	st_fp7a_pd[17] = x[8] + x[8];
	v[1] = -0.5 * st_fp7a_pd[16];
	v[0] += v[1];
	st_fp7a_pd[18] = x[9] * x[9];
	st_fp7a_pd[19] = x[9] + x[9];
	v[1] = -0.5 * st_fp7a_pd[18];
	v[0] += v[1];
	st_fp7a_pd[20] = x[10] * x[10];
	st_fp7a_pd[21] = x[10] + x[10];
	v[1] = -0.5 * st_fp7a_pd[20];
	v[0] += v[1];
	st_fp7a_pd[22] = x[11] * x[11];
	st_fp7a_pd[23] = x[11] + x[11];
	v[1] = -0.5 * st_fp7a_pd[22];
	v[0] += v[1];
	st_fp7a_pd[24] = x[12] * x[12];
	st_fp7a_pd[25] = x[12] + x[12];
	v[1] = -0.5 * st_fp7a_pd[24];
	v[0] += v[1];
	st_fp7a_pd[26] = x[13] * x[13];
	st_fp7a_pd[27] = x[13] + x[13];
	v[1] = -0.5 * st_fp7a_pd[26];
	v[0] += v[1];
	st_fp7a_pd[28] = x[14] * x[14];
	st_fp7a_pd[29] = x[14] + x[14];
	v[1] = -0.5 * st_fp7a_pd[28];
	v[0] += v[1];
	st_fp7a_pd[30] = x[15] * x[15];
	st_fp7a_pd[31] = x[15] + x[15];
	v[1] = -0.5 * st_fp7a_pd[30];
	v[0] += v[1];
	st_fp7a_pd[32] = x[16] * x[16];
	st_fp7a_pd[33] = x[16] + x[16];
	v[1] = -0.5 * st_fp7a_pd[32];
	v[0] += v[1];
	st_fp7a_pd[34] = x[17] * x[17];
	st_fp7a_pd[35] = x[17] + x[17];
	v[1] = -0.5 * st_fp7a_pd[34];
	v[0] += v[1];
	st_fp7a_pd[36] = x[18] * x[18];
	st_fp7a_pd[37] = x[18] + x[18];
	v[1] = -0.5 * st_fp7a_pd[36];
	v[0] += v[1];
	st_fp7a_pd[38] = x[19] * x[19];
	st_fp7a_pd[39] = x[19] + x[19];
	v[1] = -0.5 * st_fp7a_pd[38];
	v[0] += v[1];
	rv = v[0] + 2.*x[0];
	rv += 2.*x[1];
	rv += 2.*x[2];
	rv += 2.*x[3];
	rv += 2.*x[4];
	rv += 2.*x[5];
	rv += 2.*x[6];
	rv += 2.*x[7];
	rv += 2.*x[8];
	rv += 2.*x[9];
	rv += 2.*x[10];
	rv += 2.*x[11];
	rv += 2.*x[12];
	rv += 2.*x[13];
	rv += 2.*x[14];
	rv += 2.*x[15];
	rv += 2.*x[16];
	rv += 2.*x[17];
	rv += 2.*x[18];
	rv += 2.*x[19];
	;}

	if (wantfg & 2) {
	g[19] = -0.5*st_fp7a_pd[39] + 2.;
	g[18] = -0.5*st_fp7a_pd[37] + 2.;
	g[17] = -0.5*st_fp7a_pd[35] + 2.;
	g[16] = -0.5*st_fp7a_pd[33] + 2.;
	g[15] = -0.5*st_fp7a_pd[31] + 2.;
	g[14] = -0.5*st_fp7a_pd[29] + 2.;
	g[13] = -0.5*st_fp7a_pd[27] + 2.;
	g[12] = -0.5*st_fp7a_pd[25] + 2.;
	g[11] = -0.5*st_fp7a_pd[23] + 2.;
	g[10] = -0.5*st_fp7a_pd[21] + 2.;
	g[9] = -0.5*st_fp7a_pd[19] + 2.;
	g[8] = -0.5*st_fp7a_pd[17] + 2.;
	g[7] = -0.5*st_fp7a_pd[15] + 2.;
	g[6] = -0.5*st_fp7a_pd[13] + 2.;
	g[5] = -0.5*st_fp7a_pd[11] + 2.;
	g[4] = -0.5*st_fp7a_pd[9] + 2.;
	g[3] = -0.5*st_fp7a_pd[7] + 2.;
	g[2] = -0.5*st_fp7a_pd[5] + 2.;
	g[1] = -0.5*st_fp7a_pd[3] + 2.;
	g[0] = -0.5*st_fp7a_pd[1] + 2.;
	}

	return rv;
}

 void
st_fp7a_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_fp7a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -3.*x[0];
	t1 += 7.*x[1];
	t1 += -5.*x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += 2.*x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += -9.*x[10];
	t1 += 3.*x[11];
	t1 += 5.*x[12];
	t1 += x[15];
	t1 += 7.*x[16];
	t1 += -7.*x[17];
	t1 += -4.*x[18];
	t1 += -6.*x[19];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 7.*x[0];
	t1 += -5.*x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += 2.*x[6];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -9.*x[9];
	t1 += 3.*x[10];
	t1 += 5.*x[11];
	t1 += x[14];
	t1 += 7.*x[15];
	t1 += -7.*x[16];
	t1 += -4.*x[17];
	t1 += -6.*x[18];
	t1 += -3.*x[19];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -5.*x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += 2.*x[5];
	t1 += -x[6];
	t1 += -x[7];
	t1 += -9.*x[8];
	t1 += 3.*x[9];
	t1 += 5.*x[10];
	t1 += x[13];
	t1 += 7.*x[14];
	t1 += -7.*x[15];
	t1 += -4.*x[16];
	t1 += -6.*x[17];
	t1 += -3.*x[18];
	t1 += 7.*x[19];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -5.*x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += 2.*x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -9.*x[7];
	t1 += 3.*x[8];
	t1 += 5.*x[9];
	t1 += x[12];
	t1 += 7.*x[13];
	t1 += -7.*x[14];
	t1 += -4.*x[15];
	t1 += -6.*x[16];
	t1 += -3.*x[17];
	t1 += 7.*x[18];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += 2.*x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -9.*x[6];
	t1 += 3.*x[7];
	t1 += 5.*x[8];
	t1 += x[11];
	t1 += 7.*x[12];
	t1 += -7.*x[13];
	t1 += -4.*x[14];
	t1 += -6.*x[15];
	t1 += -3.*x[16];
	t1 += 7.*x[17];
	t1 += -5.*x[19];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[0];
	t1 += 2.*x[2];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -9.*x[5];
	t1 += 3.*x[6];
	t1 += 5.*x[7];
	t1 += x[10];
	t1 += 7.*x[11];
	t1 += -7.*x[12];
	t1 += -4.*x[13];
	t1 += -6.*x[14];
	t1 += -3.*x[15];
	t1 += 7.*x[16];
	t1 += -5.*x[18];
	t1 += x[19];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 2.*x[1];
	t1 += -x[2];
	t1 += -x[3];
	t1 += -9.*x[4];
	t1 += 3.*x[5];
	t1 += 5.*x[6];
	t1 += x[9];
	t1 += 7.*x[10];
	t1 += -7.*x[11];
	t1 += -4.*x[12];
	t1 += -6.*x[13];
	t1 += -3.*x[14];
	t1 += 7.*x[15];
	t1 += -5.*x[17];
	t1 += x[18];
	t1 += x[19];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 2.*x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -9.*x[3];
	t1 += 3.*x[4];
	t1 += 5.*x[5];
	t1 += x[8];
	t1 += 7.*x[9];
	t1 += -7.*x[10];
	t1 += -4.*x[11];
	t1 += -6.*x[12];
	t1 += -3.*x[13];
	t1 += 7.*x[14];
	t1 += -5.*x[16];
	t1 += x[17];
	t1 += x[18];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -9.*x[2];
	t1 += 3.*x[3];
	t1 += 5.*x[4];
	t1 += x[7];
	t1 += 7.*x[8];
	t1 += -7.*x[9];
	t1 += -4.*x[10];
	t1 += -6.*x[11];
	t1 += -3.*x[12];
	t1 += 7.*x[13];
	t1 += -5.*x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += 2.*x[19];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -3.;
	J[8] = 7.;
	J[24] = -5.;
	J[33] = 1.;
	J[42] = 1.;
	J[57] = 2.;
	J[65] = -1.;
	J[73] = -1.;
	J[81] = -9.;
	J[89] = 3.;
	J[97] = 5.;
	J[121] = 1.;
	J[130] = 7.;
	J[139] = -7.;
	J[148] = -4.;
	J[156] = -6.;

   /*** derivatives for constraint 2 ***/

	J[1] = 7.;
	J[16] = -5.;
	J[25] = 1.;
	J[34] = 1.;
	J[50] = 2.;
	J[58] = -1.;
	J[66] = -1.;
	J[74] = -9.;
	J[82] = 3.;
	J[90] = 5.;
	J[113] = 1.;
	J[122] = 7.;
	J[131] = -7.;
	J[140] = -4.;
	J[149] = -6.;
	J[157] = -3.;

   /*** derivatives for constraint 3 ***/

	J[9] = -5.;
	J[17] = 1.;
	J[26] = 1.;
	J[43] = 2.;
	J[51] = -1.;
	J[59] = -1.;
	J[67] = -9.;
	J[75] = 3.;
	J[83] = 5.;
	J[105] = 1.;
	J[114] = 7.;
	J[123] = -7.;
	J[132] = -4.;
	J[141] = -6.;
	J[150] = -3.;
	J[158] = 7.;

   /*** derivatives for constraint 4 ***/

	J[2] = -5.;
	J[10] = 1.;
	J[18] = 1.;
	J[35] = 2.;
	J[44] = -1.;
	J[52] = -1.;
	J[60] = -9.;
	J[68] = 3.;
	J[76] = 5.;
	J[98] = 1.;
	J[106] = 7.;
	J[115] = -7.;
	J[124] = -4.;
	J[133] = -6.;
	J[142] = -3.;
	J[151] = 7.;

   /*** derivatives for constraint 5 ***/

	J[3] = 1.;
	J[11] = 1.;
	J[27] = 2.;
	J[36] = -1.;
	J[45] = -1.;
	J[53] = -9.;
	J[61] = 3.;
	J[69] = 5.;
	J[91] = 1.;
	J[99] = 7.;
	J[107] = -7.;
	J[116] = -4.;
	J[125] = -6.;
	J[134] = -3.;
	J[143] = 7.;
	J[159] = -5.;

   /*** derivatives for constraint 6 ***/

	J[4] = 1.;
	J[19] = 2.;
	J[28] = -1.;
	J[37] = -1.;
	J[46] = -9.;
	J[54] = 3.;
	J[62] = 5.;
	J[84] = 1.;
	J[92] = 7.;
	J[100] = -7.;
	J[108] = -4.;
	J[117] = -6.;
	J[126] = -3.;
	J[135] = 7.;
	J[152] = -5.;
	J[160] = 1.;

   /*** derivatives for constraint 7 ***/

	J[12] = 2.;
	J[20] = -1.;
	J[29] = -1.;
	J[38] = -9.;
	J[47] = 3.;
	J[55] = 5.;
	J[77] = 1.;
	J[85] = 7.;
	J[93] = -7.;
	J[101] = -4.;
	J[109] = -6.;
	J[118] = -3.;
	J[127] = 7.;
	J[144] = -5.;
	J[153] = 1.;
	J[161] = 1.;

   /*** derivatives for constraint 8 ***/

	J[5] = 2.;
	J[13] = -1.;
	J[21] = -1.;
	J[30] = -9.;
	J[39] = 3.;
	J[48] = 5.;
	J[70] = 1.;
	J[78] = 7.;
	J[86] = -7.;
	J[94] = -4.;
	J[102] = -6.;
	J[110] = -3.;
	J[119] = 7.;
	J[136] = -5.;
	J[145] = 1.;
	J[154] = 1.;

   /*** derivatives for constraint 9 ***/

	J[6] = -1.;
	J[14] = -1.;
	J[22] = -9.;
	J[31] = 3.;
	J[40] = 5.;
	J[63] = 1.;
	J[71] = 7.;
	J[79] = -7.;
	J[87] = -4.;
	J[95] = -6.;
	J[103] = -3.;
	J[111] = 7.;
	J[128] = -5.;
	J[137] = 1.;
	J[146] = 1.;
	J[162] = 2.;

   /*** derivatives for constraint 10 ***/

	J[7] = 1.;
	J[15] = 1.;
	J[23] = 1.;
	J[32] = 1.;
	J[41] = 1.;
	J[49] = 1.;
	J[56] = 1.;
	J[64] = 1.;
	J[72] = 1.;
	J[80] = 1.;
	J[88] = 1.;
	J[96] = 1.;
	J[104] = 1.;
	J[112] = 1.;
	J[120] = 1.;
	J[129] = 1.;
	J[138] = 1.;
	J[147] = 1.;
	J[155] = 1.;
	J[163] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
