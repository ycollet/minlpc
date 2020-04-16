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
 fint nvs13_auxcom_[1] = { 5 /* nlc */ };
 fint nvs13_funcom_[37] = {
	5 /* nvar */,
	1 /* nobj */,
	5 /* ncon */,
	25 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,
	21,
	26,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5,
	1,
	2,
	3,
	4,
	5 };

 real nvs13_boundc_[1+10+10] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		0.,
		200.,
		-1430.,
		1.7e308,
		-1150.,
		1.7e308,
		-850.,
		1.7e308,
		-1125.,
		1.7e308,
		-1030.,
		1.7e308};

 real nvs13_x0comn_[5] = {
		1.,
		1.,
		1.,
		1.,
		1. };

 static real nvs13_pd[109];
static real nvs13_old_x[5];
static int nvs13_xkind = -1;

 static int
nvs13_xcheck(real *x)
{
	real *x1 = nvs13_old_x, *xe = x + 5;
	errno = 0;
	if (nvs13_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	nvs13_xkind = 0;
	return 1;
	}
 real
nvs13_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (nvs13_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	nvs13_pd[92] = x[0] * x[0];
	nvs13_pd[93] = x[0] + x[0];
	v[0] = 7. * nvs13_pd[92];
	nvs13_pd[94] = x[1] * x[1];
	nvs13_pd[95] = x[1] + x[1];
	v[1] = 6. * nvs13_pd[94];
	v[0] += v[1];
	nvs13_pd[96] = x[2] * x[2];
	nvs13_pd[97] = x[2] + x[2];
	v[1] = 8. * nvs13_pd[96];
	v[0] += v[1];
	nvs13_pd[98] = 6. * x[2];
	v[1] = nvs13_pd[98] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[99] = 4. * x[2];
	v[2] = nvs13_pd[99] * x[1];
	v[0] += v[2];
	nvs13_pd[100] = x[3] * x[3];
	nvs13_pd[101] = x[3] + x[3];
	v[2] = 6. * nvs13_pd[100];
	v[0] += v[2];
	nvs13_pd[102] = 2. * x[3];
	v[2] = nvs13_pd[102] * x[0];
	v[0] += v[2];
	nvs13_pd[103] = 2. * x[3];
	v[2] = nvs13_pd[103] * x[2];
	v[0] += v[2];
	nvs13_pd[104] = x[4] * x[4];
	nvs13_pd[105] = x[4] + x[4];
	v[2] = 7. * nvs13_pd[104];
	v[0] += v[2];
	nvs13_pd[106] = 4. * x[4];
	v[2] = nvs13_pd[106] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[107] = 2. * x[4];
	v[1] = nvs13_pd[107] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[108] = 6. * x[4];
	v[2] = nvs13_pd[108] * x[2];
	v[1] = -v[2];
	v[0] += v[1];
	rv = v[0] + 12.*x[0];
	rv += -77.2*x[1];
	rv += -19.2*x[2];
	rv += -36.6*x[3];
	rv += -69.4*x[4];
	;}

	if (wantfg & 2) {
	g[2] = -nvs13_pd[108] + -19.2;
	g[4] = -x[2]*6. + -69.4;
	g[1] = -nvs13_pd[107] + -77.2;
	g[4] -= x[1]*2.;
	g[0] = -nvs13_pd[106] + 12.;
	g[4] -= x[0]*4.;
	g[4] += 7.*nvs13_pd[105];
	g[2] += nvs13_pd[103];
	g[3] = x[2]*2. + -36.6;
	g[0] += nvs13_pd[102];
	g[3] += x[0]*2.;
	g[3] += 6.*nvs13_pd[101];
	g[1] += nvs13_pd[99];
	g[2] += x[1]*4.;
	g[0] -= nvs13_pd[98];
	g[2] -= x[0]*6.;
	g[2] += 8.*nvs13_pd[97];
	g[1] += 6.*nvs13_pd[95];
	g[0] += 7.*nvs13_pd[93];
	}

	return rv;
}

 void
nvs13_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	fint wantfg = *needfg;
	if (nvs13_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	nvs13_pd[0] = x[0] * x[0];
	nvs13_pd[1] = x[0] + x[0];
	v[0] = -9. * nvs13_pd[0];
	v[1] = -v[0];
	nvs13_pd[2] = 10. * x[0];
	v[0] = nvs13_pd[2] * x[1];
	v[1] += v[0];
	nvs13_pd[3] = x[1] * x[1];
	nvs13_pd[4] = x[1] + x[1];
	v[0] = -8. * nvs13_pd[3];
	v[2] = -v[0];
	v[1] += v[2];
	nvs13_pd[5] = x[2] * x[2];
	nvs13_pd[6] = x[2] + x[2];
	v[2] = -5. * nvs13_pd[5];
	v[0] = -v[2];
	v[1] += v[0];
	nvs13_pd[7] = 6. * x[2];
	v[0] = nvs13_pd[7] * x[0];
	v[1] += v[0];
	nvs13_pd[8] = 10. * x[2];
	v[0] = nvs13_pd[8] * x[1];
	v[1] += v[0];
	nvs13_pd[9] = x[3] * x[3];
	nvs13_pd[10] = x[3] + x[3];
	v[0] = -7. * nvs13_pd[9];
	v[2] = -v[0];
	v[1] += v[2];
	nvs13_pd[11] = 10. * x[3];
	v[2] = nvs13_pd[11] * x[0];
	v[1] += v[2];
	nvs13_pd[12] = 6. * x[3];
	v[2] = nvs13_pd[12] * x[1];
	v[1] += v[2];
	nvs13_pd[13] = 2. * x[3];
	v[2] = nvs13_pd[13] * x[2];
	v[1] += v[2];
	nvs13_pd[14] = 2. * x[4];
	v[2] = nvs13_pd[14] * x[1];
	v[1] += v[2];
	nvs13_pd[15] = x[4] * x[4];
	nvs13_pd[16] = x[4] + x[4];
	v[2] = -7. * nvs13_pd[15];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = -v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	nvs13_pd[17] = x[0] * x[0];
	nvs13_pd[18] = x[0] + x[0];
	v[0] = -6. * nvs13_pd[17];
	nvs13_pd[19] = 8. * x[0];
	v[1] = nvs13_pd[19] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[20] = x[1] * x[1];
	nvs13_pd[21] = x[1] + x[1];
	v[2] = -6. * nvs13_pd[20];
	v[0] += v[2];
	nvs13_pd[22] = x[2] * x[2];
	nvs13_pd[23] = x[2] + x[2];
	v[2] = -4. * nvs13_pd[22];
	v[0] += v[2];
	nvs13_pd[24] = 2. * x[2];
	v[2] = nvs13_pd[24] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[25] = 2. * x[2];
	v[1] = nvs13_pd[25] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[26] = x[3] * x[3];
	nvs13_pd[27] = x[3] + x[3];
	v[2] = -8. * nvs13_pd[26];
	v[0] += v[2];
	nvs13_pd[28] = 2. * x[3];
	v[2] = nvs13_pd[28] * x[0];
	v[0] += v[2];
	nvs13_pd[29] = 10. * x[3];
	v[2] = nvs13_pd[29] * x[1];
	v[0] += v[2];
	nvs13_pd[30] = 2. * x[4];
	v[2] = nvs13_pd[30] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[31] = 6. * x[4];
	v[1] = nvs13_pd[31] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[32] = 6. * x[4];
	v[2] = nvs13_pd[32] * x[3];
	v[0] += v[2];
	nvs13_pd[33] = x[4] * x[4];
	nvs13_pd[34] = x[4] + x[4];
	v[2] = 7. * nvs13_pd[33];
	v[0] += v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	nvs13_pd[35] = x[0] * x[0];
	nvs13_pd[36] = x[0] + x[0];
	v[0] = -9. * nvs13_pd[35];
	nvs13_pd[37] = x[1] * x[1];
	nvs13_pd[38] = x[1] + x[1];
	v[1] = -6. * nvs13_pd[37];
	v[0] += v[1];
	nvs13_pd[39] = x[2] * x[2];
	nvs13_pd[40] = x[2] + x[2];
	v[1] = -8. * nvs13_pd[39];
	v[0] += v[1];
	nvs13_pd[41] = 2. * x[1];
	v[1] = nvs13_pd[41] * x[0];
	v[0] += v[1];
	nvs13_pd[42] = 2. * x[2];
	v[1] = nvs13_pd[42] * x[1];
	v[0] += v[1];
	nvs13_pd[43] = x[3] * x[3];
	nvs13_pd[44] = x[3] + x[3];
	v[1] = -6. * nvs13_pd[43];
	v[0] += v[1];
	nvs13_pd[45] = 4. * x[3];
	v[1] = nvs13_pd[45] * x[0];
	v[0] += v[1];
	nvs13_pd[46] = 4. * x[3];
	v[1] = nvs13_pd[46] * x[1];
	v[0] += v[1];
	nvs13_pd[47] = 2. * x[3];
	v[1] = nvs13_pd[47] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[48] = 6. * x[4];
	v[2] = nvs13_pd[48] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[49] = 2. * x[4];
	v[1] = nvs13_pd[49] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[50] = 4. * x[4];
	v[2] = nvs13_pd[50] * x[3];
	v[0] += v[2];
	nvs13_pd[51] = x[4] * x[4];
	nvs13_pd[52] = x[4] + x[4];
	v[2] = 6. * nvs13_pd[51];
	v[0] += v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	nvs13_pd[53] = x[0] * x[0];
	nvs13_pd[54] = x[0] + x[0];
	v[0] = -8. * nvs13_pd[53];
	nvs13_pd[55] = x[1] * x[1];
	nvs13_pd[56] = x[1] + x[1];
	v[1] = -4. * nvs13_pd[55];
	v[0] += v[1];
	nvs13_pd[57] = x[2] * x[2];
	nvs13_pd[58] = x[2] + x[2];
	v[1] = -9. * nvs13_pd[57];
	v[0] += v[1];
	nvs13_pd[59] = x[3] * x[3];
	nvs13_pd[60] = x[3] + x[3];
	v[1] = -7. * nvs13_pd[59];
	v[0] += v[1];
	nvs13_pd[61] = 2. * x[1];
	v[1] = nvs13_pd[61] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[62] = 2. * x[2];
	v[2] = nvs13_pd[62] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[63] = 4. * x[2];
	v[1] = nvs13_pd[63] * x[1];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[64] = 6. * x[3];
	v[2] = nvs13_pd[64] * x[0];
	v[0] += v[2];
	nvs13_pd[65] = 2. * x[3];
	v[2] = nvs13_pd[65] * x[1];
	v[0] += v[2];
	nvs13_pd[66] = 2. * x[3];
	v[2] = nvs13_pd[66] * x[2];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[67] = 6. * x[4];
	v[1] = nvs13_pd[67] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[68] = 4. * x[4];
	v[2] = nvs13_pd[68] * x[1];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[69] = 2. * x[4];
	v[1] = nvs13_pd[69] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[70] = 6. * x[4];
	v[2] = nvs13_pd[70] * x[3];
	v[0] += v[2];
	nvs13_pd[71] = x[4] * x[4];
	nvs13_pd[72] = x[4] + x[4];
	v[2] = 6. * nvs13_pd[71];
	v[0] += v[2];
	c[3] = v[0];

  /***  constraint 5  ***/

	nvs13_pd[73] = 2. * x[1];
	v[0] = nvs13_pd[73] * x[0];
	nvs13_pd[74] = x[0] * x[0];
	nvs13_pd[75] = x[0] + x[0];
	v[1] = -4. * nvs13_pd[74];
	v[0] += v[1];
	nvs13_pd[76] = x[1] * x[1];
	nvs13_pd[77] = x[1] + x[1];
	v[1] = -5. * nvs13_pd[76];
	v[0] += v[1];
	nvs13_pd[78] = 6. * x[2];
	v[1] = nvs13_pd[78] * x[0];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[79] = x[2] * x[2];
	nvs13_pd[80] = x[2] + x[2];
	v[2] = -8. * nvs13_pd[79];
	v[0] += v[2];
	nvs13_pd[81] = 2. * x[3];
	v[2] = nvs13_pd[81] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[82] = 6. * x[3];
	v[1] = nvs13_pd[82] * x[1];
	v[0] += v[1];
	nvs13_pd[83] = 2. * x[3];
	v[1] = nvs13_pd[83] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[84] = x[3] * x[3];
	nvs13_pd[85] = x[3] + x[3];
	v[2] = -6. * nvs13_pd[84];
	v[0] += v[2];
	nvs13_pd[86] = 4. * x[4];
	v[2] = nvs13_pd[86] * x[0];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[87] = 2. * x[4];
	v[1] = nvs13_pd[87] * x[1];
	v[0] += v[1];
	nvs13_pd[88] = 6. * x[4];
	v[1] = nvs13_pd[88] * x[2];
	v[2] = -v[1];
	v[0] += v[2];
	nvs13_pd[89] = 8. * x[4];
	v[2] = nvs13_pd[89] * x[3];
	v[1] = -v[2];
	v[0] += v[1];
	nvs13_pd[90] = x[4] * x[4];
	nvs13_pd[91] = x[4] + x[4];
	v[1] = -7. * nvs13_pd[90];
	v[0] += v[1];
	c[4] = v[0];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[20] = -7.*nvs13_pd[16];
	J[5] = -nvs13_pd[14];
	J[20] -= x[1]*2.;
	J[10] = -nvs13_pd[13];
	J[15] = -x[2]*2.;
	J[5] -= nvs13_pd[12];
	J[15] -= x[1]*6.;
	J[0] = -nvs13_pd[11];
	J[15] -= x[0]*10.;
	J[15] -= 7.*nvs13_pd[10];
	J[5] -= nvs13_pd[8];
	J[10] -= x[1]*10.;
	J[0] -= nvs13_pd[7];
	J[10] -= x[0]*6.;
	J[10] -= 5.*nvs13_pd[6];
	J[5] -= 8.*nvs13_pd[4];
	J[5] -= nvs13_pd[2];
	J[0] -= x[1]*10.;
	J[0] -= 9.*nvs13_pd[1];

   /*** derivatives for constraint 2 ***/

	J[21] = 7.*nvs13_pd[34];
	J[16] = nvs13_pd[32];
	J[21] += x[3]*6.;
	J[6] = -nvs13_pd[31];
	J[21] -= x[1]*6.;
	J[1] = -nvs13_pd[30];
	J[21] -= x[0]*2.;
	J[6] += nvs13_pd[29];
	J[16] += x[1]*10.;
	J[1] += nvs13_pd[28];
	J[16] += x[0]*2.;
	J[16] -= 8.*nvs13_pd[27];
	J[6] -= nvs13_pd[25];
	J[11] = -x[1]*2.;
	J[1] -= nvs13_pd[24];
	J[11] -= x[0]*2.;
	J[11] -= 4.*nvs13_pd[23];
	J[6] -= 6.*nvs13_pd[21];
	J[6] -= nvs13_pd[19];
	J[1] -= x[1]*8.;
	J[1] -= 6.*nvs13_pd[18];

   /*** derivatives for constraint 3 ***/

	J[22] = 6.*nvs13_pd[52];
	J[17] = nvs13_pd[50];
	J[22] += x[3]*4.;
	J[7] = -nvs13_pd[49];
	J[22] -= x[1]*2.;
	J[2] = -nvs13_pd[48];
	J[22] -= x[0]*6.;
	J[12] = -nvs13_pd[47];
	J[17] -= x[2]*2.;
	J[7] += nvs13_pd[46];
	J[17] += x[1]*4.;
	J[2] += nvs13_pd[45];
	J[17] += x[0]*4.;
	J[17] -= 6.*nvs13_pd[44];
	J[7] += nvs13_pd[42];
	J[12] += x[1]*2.;
	J[2] += nvs13_pd[41];
	J[7] += x[0]*2.;
	J[12] -= 8.*nvs13_pd[40];
	J[7] -= 6.*nvs13_pd[38];
	J[2] -= 9.*nvs13_pd[36];

   /*** derivatives for constraint 4 ***/

	J[23] = 6.*nvs13_pd[72];
	J[18] = nvs13_pd[70];
	J[23] += x[3]*6.;
	J[13] = -nvs13_pd[69];
	J[23] -= x[2]*2.;
	J[8] = -nvs13_pd[68];
	J[23] -= x[1]*4.;
	J[3] = -nvs13_pd[67];
	J[23] -= x[0]*6.;
	J[13] -= nvs13_pd[66];
	J[18] -= x[2]*2.;
	J[8] += nvs13_pd[65];
	J[18] += x[1]*2.;
	J[3] += nvs13_pd[64];
	J[18] += x[0]*6.;
	J[8] -= nvs13_pd[63];
	J[13] -= x[1]*4.;
	J[3] -= nvs13_pd[62];
	J[13] -= x[0]*2.;
	J[3] -= nvs13_pd[61];
	J[8] -= x[0]*2.;
	J[18] -= 7.*nvs13_pd[60];
	J[13] -= 9.*nvs13_pd[58];
	J[8] -= 4.*nvs13_pd[56];
	J[3] -= 8.*nvs13_pd[54];

   /*** derivatives for constraint 5 ***/

	J[24] = -7.*nvs13_pd[91];
	J[19] = -nvs13_pd[89];
	J[24] -= x[3]*8.;
	J[14] = -nvs13_pd[88];
	J[24] -= x[2]*6.;
	J[9] = nvs13_pd[87];
	J[24] += x[1]*2.;
	J[4] = -nvs13_pd[86];
	J[24] -= x[0]*4.;
	J[19] -= 6.*nvs13_pd[85];
	J[14] -= nvs13_pd[83];
	J[19] -= x[2]*2.;
	J[9] += nvs13_pd[82];
	J[19] += x[1]*6.;
	J[4] -= nvs13_pd[81];
	J[19] -= x[0]*2.;
	J[14] -= 8.*nvs13_pd[80];
	J[4] -= nvs13_pd[78];
	J[14] -= x[0]*6.;
	J[9] -= 5.*nvs13_pd[77];
	J[4] -= 4.*nvs13_pd[75];
	J[4] += nvs13_pd[73];
	J[9] += x[0]*2.;
	}
}
#ifdef __cplusplus
	}
#endif
