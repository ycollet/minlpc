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
 fint sporttournament10_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament10_funcom_[99] = {
	46 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	46 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
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
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real sporttournament10_boundc_[1+92+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
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
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.};

 real sporttournament10_x0comn_[46] = {
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

 static real sporttournament10_pd[80];
static real sporttournament10_old_x[46];
static int sporttournament10_xkind = -1;

 static int
sporttournament10_xcheck(real *x)
{
	real *x1 = sporttournament10_old_x, *xe = x + 46;
	errno = 0;
	if (sporttournament10_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament10_xkind = 0;
	return 1;
	}
 real
sporttournament10_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[45];
	;}

	if (wantfg & 2) {
	g[45] = 1.;
	}

	return rv;
}

 void
sporttournament10_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament10_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament10_pd[0] = 2. * x[0];
	v[0] = sporttournament10_pd[0] * x[13];
	sporttournament10_pd[1] = 2. * x[0];
	v[1] = sporttournament10_pd[1] * x[33];
	v[0] += v[1];
	sporttournament10_pd[2] = 2. * x[0];
	v[1] = sporttournament10_pd[2] * x[34];
	v[0] += v[1];
	sporttournament10_pd[3] = 2. * x[0];
	v[1] = sporttournament10_pd[3] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[4] = 2. * x[1];
	v[2] = sporttournament10_pd[4] * x[2];
	v[0] += v[2];
	sporttournament10_pd[5] = 2. * x[1];
	v[2] = sporttournament10_pd[5] * x[30];
	v[0] += v[2];
	sporttournament10_pd[6] = 2. * x[2];
	v[2] = sporttournament10_pd[6] * x[3];
	v[0] += v[2];
	sporttournament10_pd[7] = 2. * x[2];
	v[2] = sporttournament10_pd[7] * x[7];
	v[0] += v[2];
	sporttournament10_pd[8] = 2. * x[2];
	v[2] = sporttournament10_pd[8] * x[42];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[9] = 2. * x[3];
	v[1] = sporttournament10_pd[9] * x[8];
	v[0] += v[1];
	sporttournament10_pd[10] = 2. * x[4];
	v[1] = sporttournament10_pd[10] * x[6];
	v[0] += v[1];
	sporttournament10_pd[11] = 2. * x[4];
	v[1] = sporttournament10_pd[11] * x[10];
	v[0] += v[1];
	sporttournament10_pd[12] = 2. * x[5];
	v[1] = sporttournament10_pd[12] * x[6];
	v[0] += v[1];
	sporttournament10_pd[13] = 2. * x[5];
	v[1] = sporttournament10_pd[13] * x[10];
	v[0] += v[1];
	sporttournament10_pd[14] = 2. * x[6];
	v[1] = sporttournament10_pd[14] * x[12];
	v[0] += v[1];
	sporttournament10_pd[15] = 2. * x[6];
	v[1] = sporttournament10_pd[15] * x[41];
	v[0] += v[1];
	sporttournament10_pd[16] = 2. * x[7];
	v[1] = sporttournament10_pd[16] * x[18];
	v[0] += v[1];
	sporttournament10_pd[17] = 2. * x[7];
	v[1] = sporttournament10_pd[17] * x[27];
	v[0] += v[1];
	sporttournament10_pd[18] = 2. * x[7];
	v[1] = sporttournament10_pd[18] * x[43];
	v[0] += v[1];
	sporttournament10_pd[19] = 2. * x[8];
	v[1] = sporttournament10_pd[19] * x[9];
	v[0] += v[1];
	sporttournament10_pd[20] = 2. * x[8];
	v[1] = sporttournament10_pd[20] * x[17];
	v[0] += v[1];
	sporttournament10_pd[21] = 2. * x[8];
	v[1] = sporttournament10_pd[21] * x[42];
	v[0] += v[1];
	sporttournament10_pd[22] = 2. * x[9];
	v[1] = sporttournament10_pd[22] * x[18];
	v[0] += v[1];
	sporttournament10_pd[23] = 2. * x[10];
	v[1] = sporttournament10_pd[23] * x[35];
	v[0] += v[1];
	sporttournament10_pd[24] = 2. * x[10];
	v[1] = sporttournament10_pd[24] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[25] = 2. * x[11];
	v[2] = sporttournament10_pd[25] * x[12];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[26] = 2. * x[11];
	v[1] = sporttournament10_pd[26] * x[37];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[27] = 2. * x[11];
	v[2] = sporttournament10_pd[27] * x[39];
	v[0] += v[2];
	sporttournament10_pd[28] = 2. * x[11];
	v[2] = sporttournament10_pd[28] * x[44];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[29] = 2. * x[12];
	v[1] = sporttournament10_pd[29] * x[13];
	v[0] += v[1];
	sporttournament10_pd[30] = 2. * x[12];
	v[1] = sporttournament10_pd[30] * x[24];
	v[0] += v[1];
	sporttournament10_pd[31] = 2. * x[13];
	v[1] = sporttournament10_pd[31] * x[15];
	v[0] += v[1];
	sporttournament10_pd[32] = 2. * x[13];
	v[1] = sporttournament10_pd[32] * x[39];
	v[0] += v[1];
	sporttournament10_pd[33] = 2. * x[14];
	v[1] = sporttournament10_pd[33] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[34] = 2. * x[14];
	v[2] = sporttournament10_pd[34] * x[24];
	v[0] += v[2];
	sporttournament10_pd[35] = 2. * x[14];
	v[2] = sporttournament10_pd[35] * x[34];
	v[0] += v[2];
	sporttournament10_pd[36] = 2. * x[14];
	v[2] = sporttournament10_pd[36] * x[40];
	v[0] += v[2];
	sporttournament10_pd[37] = 2. * x[15];
	v[2] = sporttournament10_pd[37] * x[16];
	v[0] += v[2];
	sporttournament10_pd[38] = 2. * x[15];
	v[2] = sporttournament10_pd[38] * x[25];
	v[0] += v[2];
	sporttournament10_pd[39] = 2. * x[15];
	v[2] = sporttournament10_pd[39] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[40] = 2. * x[16];
	v[1] = sporttournament10_pd[40] * x[17];
	v[0] += v[1];
	sporttournament10_pd[41] = 2. * x[16];
	v[1] = sporttournament10_pd[41] * x[42];
	v[0] += v[1];
	sporttournament10_pd[42] = 2. * x[17];
	v[1] = sporttournament10_pd[42] * x[29];
	v[0] += v[1];
	sporttournament10_pd[43] = 2. * x[17];
	v[1] = sporttournament10_pd[43] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[44] = 2. * x[18];
	v[2] = sporttournament10_pd[44] * x[19];
	v[0] += v[2];
	sporttournament10_pd[45] = 2. * x[18];
	v[2] = sporttournament10_pd[45] * x[28];
	v[0] += v[2];
	sporttournament10_pd[46] = 2. * x[19];
	v[2] = sporttournament10_pd[46] * x[29];
	v[0] += v[2];
	sporttournament10_pd[47] = 2. * x[20];
	v[2] = sporttournament10_pd[47] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[48] = 2. * x[20];
	v[1] = sporttournament10_pd[48] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[49] = 2. * x[21];
	v[2] = sporttournament10_pd[49] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[50] = 2. * x[21];
	v[1] = sporttournament10_pd[50] * x[35];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[51] = 2. * x[21];
	v[2] = sporttournament10_pd[51] * x[37];
	v[0] += v[2];
	sporttournament10_pd[52] = 2. * x[22];
	v[2] = sporttournament10_pd[52] * x[23];
	v[0] += v[2];
	sporttournament10_pd[53] = 2. * x[22];
	v[2] = sporttournament10_pd[53] * x[41];
	v[0] += v[2];
	sporttournament10_pd[54] = 2. * x[22];
	v[2] = sporttournament10_pd[54] * x[44];
	v[0] += v[2];
	sporttournament10_pd[55] = 2. * x[23];
	v[2] = sporttournament10_pd[55] * x[25];
	v[0] += v[2];
	sporttournament10_pd[56] = 2. * x[23];
	v[2] = sporttournament10_pd[56] * x[38];
	v[0] += v[2];
	sporttournament10_pd[57] = 2. * x[24];
	v[2] = sporttournament10_pd[57] * x[26];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[58] = 2. * x[24];
	v[1] = sporttournament10_pd[58] * x[35];
	v[0] += v[1];
	sporttournament10_pd[59] = 2. * x[25];
	v[1] = sporttournament10_pd[59] * x[26];
	v[0] += v[1];
	sporttournament10_pd[60] = 2. * x[25];
	v[1] = sporttournament10_pd[60] * x[41];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[61] = 2. * x[26];
	v[2] = sporttournament10_pd[61] * x[27];
	v[0] += v[2];
	sporttournament10_pd[62] = 2. * x[26];
	v[2] = sporttournament10_pd[62] * x[43];
	v[0] += v[2];
	sporttournament10_pd[63] = 2. * x[27];
	v[2] = sporttournament10_pd[63] * x[28];
	v[0] += v[2];
	sporttournament10_pd[64] = 2. * x[27];
	v[2] = sporttournament10_pd[64] * x[36];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[65] = 2. * x[28];
	v[1] = sporttournament10_pd[65] * x[30];
	v[0] += v[1];
	sporttournament10_pd[66] = 2. * x[28];
	v[1] = sporttournament10_pd[66] * x[33];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[67] = 2. * x[29];
	v[2] = sporttournament10_pd[67] * x[31];
	v[0] += v[2];
	sporttournament10_pd[68] = 2. * x[29];
	v[2] = sporttournament10_pd[68] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[69] = 2. * x[30];
	v[1] = sporttournament10_pd[69] * x[31];
	v[0] += v[1];
	sporttournament10_pd[70] = 2. * x[30];
	v[1] = sporttournament10_pd[70] * x[32];
	v[0] += v[1];
	sporttournament10_pd[71] = 2. * x[32];
	v[1] = sporttournament10_pd[71] * x[33];
	v[0] += v[1];
	sporttournament10_pd[72] = 2. * x[32];
	v[1] = sporttournament10_pd[72] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[73] = 2. * x[33];
	v[2] = sporttournament10_pd[73] * x[36];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[74] = 2. * x[35];
	v[1] = sporttournament10_pd[74] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[75] = 2. * x[36];
	v[2] = sporttournament10_pd[75] * x[38];
	v[0] += v[2];
	sporttournament10_pd[76] = 2. * x[36];
	v[2] = sporttournament10_pd[76] * x[40];
	v[0] += v[2];
	sporttournament10_pd[77] = 2. * x[38];
	v[2] = sporttournament10_pd[77] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament10_pd[78] = 2. * x[40];
	v[1] = sporttournament10_pd[78] * x[41];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament10_pd[79] = 2. * x[42];
	v[2] = sporttournament10_pd[79] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += -2.*x[5];
	t1 += -4.*x[6];
	t1 += -4.*x[7];
	t1 += -4.*x[8];
	t1 += -2.*x[9];
	t1 += -2.*x[10];
	t1 += 2.*x[11];
	t1 += -2.*x[12];
	t1 += -4.*x[13];
	t1 += -2.*x[14];
	t1 += -2.*x[15];
	t1 += -2.*x[16];
	t1 += -2.*x[17];
	t1 += -4.*x[18];
	t1 += -2.*x[19];
	t1 += 2.*x[20];
	t1 += 2.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += -2.*x[24];
	t1 += -2.*x[25];
	t1 += -2.*x[26];
	t1 += -2.*x[27];
	t1 += -2.*x[28];
	t1 += -2.*x[29];
	t1 += -4.*x[30];
	t1 += -2.*x[31];
	t1 += x[45];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[43] = -sporttournament10_pd[79];
	J[42] = -x[43]*2.;
	J[41] = -sporttournament10_pd[78];
	J[40] = -x[41]*2.;
	J[39] = -sporttournament10_pd[77];
	J[38] = -x[39]*2.;
	J[40] += sporttournament10_pd[76];
	J[36] = x[40]*2.;
	J[38] += sporttournament10_pd[75];
	J[36] += x[38]*2.;
	J[40] -= sporttournament10_pd[74];
	J[35] = -x[40]*2.;
	J[36] -= sporttournament10_pd[73];
	J[33] = -x[36]*2.;
	J[34] = -sporttournament10_pd[72];
	J[32] = -x[34]*2.;
	J[33] += sporttournament10_pd[71];
	J[32] += x[33]*2.;
	J[32] += sporttournament10_pd[70];
	J[30] = x[32]*2. + -4.;
	J[31] = sporttournament10_pd[69] + -2.;
	J[30] += x[31]*2.;
	J[32] -= sporttournament10_pd[68];
	J[29] = -x[32]*2. + -2.;
	J[31] += sporttournament10_pd[67];
	J[29] += x[31]*2.;
	J[33] -= sporttournament10_pd[66];
	J[28] = -x[33]*2. + -2.;
	J[30] += sporttournament10_pd[65];
	J[28] += x[30]*2.;
	J[36] -= sporttournament10_pd[64];
	J[27] = -x[36]*2. + -2.;
	J[28] += sporttournament10_pd[63];
	J[27] += x[28]*2.;
	J[43] += sporttournament10_pd[62];
	J[26] = x[43]*2. + -2.;
	J[27] += sporttournament10_pd[61];
	J[26] += x[27]*2.;
	J[41] -= sporttournament10_pd[60];
	J[25] = -x[41]*2. + -2.;
	J[26] += sporttournament10_pd[59];
	J[25] += x[26]*2.;
	J[35] += sporttournament10_pd[58];
	J[24] = x[35]*2. + -2.;
	J[26] -= sporttournament10_pd[57];
	J[24] -= x[26]*2.;
	J[38] += sporttournament10_pd[56];
	J[23] = x[38]*2. + -2.;
	J[25] += sporttournament10_pd[55];
	J[23] += x[25]*2.;
	J[44] = sporttournament10_pd[54];
	J[22] = x[44]*2. + -2.;
	J[41] += sporttournament10_pd[53];
	J[22] += x[41]*2.;
	J[23] += sporttournament10_pd[52];
	J[22] += x[23]*2.;
	J[37] = sporttournament10_pd[51];
	J[21] = x[37]*2. + 2.;
	J[35] -= sporttournament10_pd[50];
	J[21] -= x[35]*2.;
	J[23] -= sporttournament10_pd[49];
	J[21] -= x[23]*2.;
	J[22] -= sporttournament10_pd[48];
	J[20] = -x[22]*2. + 2.;
	J[21] -= sporttournament10_pd[47];
	J[20] -= x[21]*2.;
	J[29] += sporttournament10_pd[46];
	J[19] = x[29]*2. + -2.;
	J[28] += sporttournament10_pd[45];
	J[18] = x[28]*2. + -4.;
	J[19] += sporttournament10_pd[44];
	J[18] += x[19]*2.;
	J[34] -= sporttournament10_pd[43];
	J[17] = -x[34]*2. + -2.;
	J[29] += sporttournament10_pd[42];
	J[17] += x[29]*2.;
	J[42] += sporttournament10_pd[41];
	J[16] = x[42]*2. + -2.;
	J[17] += sporttournament10_pd[40];
	J[16] += x[17]*2.;
	J[43] -= sporttournament10_pd[39];
	J[15] = -x[43]*2. + -2.;
	J[25] += sporttournament10_pd[38];
	J[15] += x[25]*2.;
	J[16] += sporttournament10_pd[37];
	J[15] += x[16]*2.;
	J[40] += sporttournament10_pd[36];
	J[14] = x[40]*2. + -2.;
	J[34] += sporttournament10_pd[35];
	J[14] += x[34]*2.;
	J[24] += sporttournament10_pd[34];
	J[14] += x[24]*2.;
	J[16] -= sporttournament10_pd[33];
	J[14] -= x[16]*2.;
	J[39] += sporttournament10_pd[32];
	J[13] = x[39]*2. + -4.;
	J[15] += sporttournament10_pd[31];
	J[13] += x[15]*2.;
	J[24] += sporttournament10_pd[30];
	J[12] = x[24]*2. + -2.;
	J[13] += sporttournament10_pd[29];
	J[12] += x[13]*2.;
	J[44] -= sporttournament10_pd[28];
	J[11] = -x[44]*2. + 2.;
	J[39] += sporttournament10_pd[27];
	J[11] += x[39]*2.;
	J[37] -= sporttournament10_pd[26];
	J[11] -= x[37]*2.;
	J[12] -= sporttournament10_pd[25];
	J[11] -= x[12]*2.;
	J[39] -= sporttournament10_pd[24];
	J[10] = -x[39]*2. + -2.;
	J[35] += sporttournament10_pd[23];
	J[10] += x[35]*2.;
	J[18] += sporttournament10_pd[22];
	J[9] = x[18]*2. + -2.;
	J[42] += sporttournament10_pd[21];
	J[8] = x[42]*2. + -4.;
	J[17] += sporttournament10_pd[20];
	J[8] += x[17]*2.;
	J[9] += sporttournament10_pd[19];
	J[8] += x[9]*2.;
	J[43] += sporttournament10_pd[18];
	J[7] = x[43]*2. + -4.;
	J[27] += sporttournament10_pd[17];
	J[7] += x[27]*2.;
	J[18] += sporttournament10_pd[16];
	J[7] += x[18]*2.;
	J[41] += sporttournament10_pd[15];
	J[6] = x[41]*2. + -4.;
	J[12] += sporttournament10_pd[14];
	J[6] += x[12]*2.;
	J[10] += sporttournament10_pd[13];
	J[5] = x[10]*2. + -2.;
	J[6] += sporttournament10_pd[12];
	J[5] += x[6]*2.;
	J[10] += sporttournament10_pd[11];
	J[4] = x[10]*2. + -2.;
	J[6] += sporttournament10_pd[10];
	J[4] += x[6]*2.;
	J[8] += sporttournament10_pd[9];
	J[3] = x[8]*2. + -2.;
	J[42] -= sporttournament10_pd[8];
	J[2] = -x[42]*2. + -2.;
	J[7] += sporttournament10_pd[7];
	J[2] += x[7]*2.;
	J[3] += sporttournament10_pd[6];
	J[2] += x[3]*2.;
	J[30] += sporttournament10_pd[5];
	J[1] = x[30]*2. + -2.;
	J[2] += sporttournament10_pd[4];
	J[1] += x[2]*2.;
	J[38] -= sporttournament10_pd[3];
	J[0] = -x[38]*2. + -2.;
	J[34] += sporttournament10_pd[2];
	J[0] += x[34]*2.;
	J[33] += sporttournament10_pd[1];
	J[0] += x[33]*2.;
	J[13] += sporttournament10_pd[0];
	J[0] += x[13]*2.;
	J[45] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
