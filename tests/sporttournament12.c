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
 fint sporttournament12_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament12_funcom_[141] = {
	67 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	67 /* nzc */,
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
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,

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

 real sporttournament12_boundc_[1+134+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real sporttournament12_x0comn_[67] = {
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

 static real sporttournament12_pd[120];
static real sporttournament12_old_x[67];
static int sporttournament12_xkind = -1;

 static int
sporttournament12_xcheck(real *x)
{
	real *x1 = sporttournament12_old_x, *xe = x + 67;
	errno = 0;
	if (sporttournament12_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament12_xkind = 0;
	return 1;
	}
 real
sporttournament12_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[66];
	;}

	if (wantfg & 2) {
	g[66] = 1.;
	}

	return rv;
}

 void
sporttournament12_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament12_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament12_pd[0] = 2. * x[0];
	v[0] = sporttournament12_pd[0] * x[15];
	sporttournament12_pd[1] = 2. * x[0];
	v[1] = sporttournament12_pd[1] * x[47];
	v[0] += v[1];
	sporttournament12_pd[2] = 2. * x[0];
	v[1] = sporttournament12_pd[2] * x[48];
	v[0] += v[1];
	sporttournament12_pd[3] = 2. * x[0];
	v[1] = sporttournament12_pd[3] * x[53];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[4] = 2. * x[1];
	v[2] = sporttournament12_pd[4] * x[3];
	v[0] += v[2];
	sporttournament12_pd[5] = 2. * x[1];
	v[2] = sporttournament12_pd[5] * x[44];
	v[0] += v[2];
	sporttournament12_pd[6] = 2. * x[2];
	v[2] = sporttournament12_pd[6] * x[7];
	v[0] += v[2];
	sporttournament12_pd[7] = 2. * x[2];
	v[2] = sporttournament12_pd[7] * x[37];
	v[0] += v[2];
	sporttournament12_pd[8] = 2. * x[2];
	v[2] = sporttournament12_pd[8] * x[49];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[9] = 2. * x[2];
	v[1] = sporttournament12_pd[9] * x[59];
	v[0] += v[1];
	sporttournament12_pd[10] = 2. * x[3];
	v[1] = sporttournament12_pd[10] * x[4];
	v[0] += v[1];
	sporttournament12_pd[11] = 2. * x[3];
	v[1] = sporttournament12_pd[11] * x[9];
	v[0] += v[1];
	sporttournament12_pd[12] = 2. * x[3];
	v[1] = sporttournament12_pd[12] * x[60];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[13] = 2. * x[4];
	v[2] = sporttournament12_pd[13] * x[10];
	v[0] += v[2];
	sporttournament12_pd[14] = 2. * x[5];
	v[2] = sporttournament12_pd[14] * x[6];
	v[0] += v[2];
	sporttournament12_pd[15] = 2. * x[5];
	v[2] = sporttournament12_pd[15] * x[12];
	v[0] += v[2];
	sporttournament12_pd[16] = 2. * x[6];
	v[2] = sporttournament12_pd[16] * x[7];
	v[0] += v[2];
	sporttournament12_pd[17] = 2. * x[6];
	v[2] = sporttournament12_pd[17] * x[21];
	v[0] += v[2];
	sporttournament12_pd[18] = 2. * x[6];
	v[2] = sporttournament12_pd[18] * x[62];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[19] = 2. * x[7];
	v[1] = sporttournament12_pd[19] * x[8];
	v[0] += v[1];
	sporttournament12_pd[20] = 2. * x[7];
	v[1] = sporttournament12_pd[20] * x[51];
	v[0] += v[1];
	sporttournament12_pd[21] = 2. * x[8];
	v[1] = sporttournament12_pd[21] * x[24];
	v[0] += v[1];
	sporttournament12_pd[22] = 2. * x[8];
	v[1] = sporttournament12_pd[22] * x[35];
	v[0] += v[1];
	sporttournament12_pd[23] = 2. * x[8];
	v[1] = sporttournament12_pd[23] * x[49];
	v[0] += v[1];
	sporttournament12_pd[24] = 2. * x[9];
	v[1] = sporttournament12_pd[24] * x[19];
	v[0] += v[1];
	sporttournament12_pd[25] = 2. * x[9];
	v[1] = sporttournament12_pd[25] * x[29];
	v[0] += v[1];
	sporttournament12_pd[26] = 2. * x[9];
	v[1] = sporttournament12_pd[26] * x[61];
	v[0] += v[1];
	sporttournament12_pd[27] = 2. * x[10];
	v[1] = sporttournament12_pd[27] * x[11];
	v[0] += v[1];
	sporttournament12_pd[28] = 2. * x[10];
	v[1] = sporttournament12_pd[28] * x[18];
	v[0] += v[1];
	sporttournament12_pd[29] = 2. * x[10];
	v[1] = sporttournament12_pd[29] * x[60];
	v[0] += v[1];
	sporttournament12_pd[30] = 2. * x[11];
	v[1] = sporttournament12_pd[30] * x[19];
	v[0] += v[1];
	sporttournament12_pd[31] = 2. * x[12];
	v[1] = sporttournament12_pd[31] * x[35];
	v[0] += v[1];
	sporttournament12_pd[32] = 2. * x[12];
	v[1] = sporttournament12_pd[32] * x[54];
	v[0] += v[1];
	sporttournament12_pd[33] = 2. * x[12];
	v[1] = sporttournament12_pd[33] * x[57];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[34] = 2. * x[13];
	v[2] = sporttournament12_pd[34] * x[35];
	v[0] += v[2];
	sporttournament12_pd[35] = 2. * x[13];
	v[2] = sporttournament12_pd[35] * x[54];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[36] = 2. * x[13];
	v[1] = sporttournament12_pd[36] * x[59];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[37] = 2. * x[13];
	v[2] = sporttournament12_pd[37] * x[63];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[38] = 2. * x[14];
	v[1] = sporttournament12_pd[38] * x[15];
	v[0] += v[1];
	sporttournament12_pd[39] = 2. * x[14];
	v[1] = sporttournament12_pd[39] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[40] = 2. * x[14];
	v[2] = sporttournament12_pd[40] * x[55];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[41] = 2. * x[14];
	v[1] = sporttournament12_pd[41] * x[64];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[42] = 2. * x[15];
	v[2] = sporttournament12_pd[42] * x[16];
	v[0] += v[2];
	sporttournament12_pd[43] = 2. * x[15];
	v[2] = sporttournament12_pd[43] * x[37];
	v[0] += v[2];
	sporttournament12_pd[44] = 2. * x[16];
	v[2] = sporttournament12_pd[44] * x[17];
	v[0] += v[2];
	sporttournament12_pd[45] = 2. * x[16];
	v[2] = sporttournament12_pd[45] * x[26];
	v[0] += v[2];
	sporttournament12_pd[46] = 2. * x[16];
	v[2] = sporttournament12_pd[46] * x[61];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[47] = 2. * x[17];
	v[1] = sporttournament12_pd[47] * x[18];
	v[0] += v[1];
	sporttournament12_pd[48] = 2. * x[17];
	v[1] = sporttournament12_pd[48] * x[40];
	v[0] += v[1];
	sporttournament12_pd[49] = 2. * x[17];
	v[1] = sporttournament12_pd[49] * x[60];
	v[0] += v[1];
	sporttournament12_pd[50] = 2. * x[18];
	v[1] = sporttournament12_pd[50] * x[31];
	v[0] += v[1];
	sporttournament12_pd[51] = 2. * x[18];
	v[1] = sporttournament12_pd[51] * x[41];
	v[0] += v[1];
	sporttournament12_pd[52] = 2. * x[19];
	v[1] = sporttournament12_pd[52] * x[20];
	v[0] += v[1];
	sporttournament12_pd[53] = 2. * x[19];
	v[1] = sporttournament12_pd[53] * x[30];
	v[0] += v[1];
	sporttournament12_pd[54] = 2. * x[20];
	v[1] = sporttournament12_pd[54] * x[31];
	v[0] += v[1];
	sporttournament12_pd[55] = 2. * x[21];
	v[1] = sporttournament12_pd[55] * x[22];
	v[0] += v[1];
	sporttournament12_pd[56] = 2. * x[21];
	v[1] = sporttournament12_pd[56] * x[23];
	v[0] += v[1];
	sporttournament12_pd[57] = 2. * x[21];
	v[1] = sporttournament12_pd[57] * x[56];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[58] = 2. * x[22];
	v[2] = sporttournament12_pd[58] * x[25];
	v[0] += v[2];
	sporttournament12_pd[59] = 2. * x[22];
	v[2] = sporttournament12_pd[59] * x[57];
	v[0] += v[2];
	sporttournament12_pd[60] = 2. * x[23];
	v[2] = sporttournament12_pd[60] * x[25];
	v[0] += v[2];
	sporttournament12_pd[61] = 2. * x[23];
	v[2] = sporttournament12_pd[61] * x[37];
	v[0] += v[2];
	sporttournament12_pd[62] = 2. * x[23];
	v[2] = sporttournament12_pd[62] * x[65];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[63] = 2. * x[24];
	v[1] = sporttournament12_pd[63] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[64] = 2. * x[24];
	v[2] = sporttournament12_pd[64] * x[36];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[65] = 2. * x[24];
	v[1] = sporttournament12_pd[65] * x[58];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[66] = 2. * x[25];
	v[2] = sporttournament12_pd[66] * x[26];
	v[0] += v[2];
	sporttournament12_pd[67] = 2. * x[25];
	v[2] = sporttournament12_pd[67] * x[53];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[68] = 2. * x[26];
	v[1] = sporttournament12_pd[68] * x[28];
	v[0] += v[1];
	sporttournament12_pd[69] = 2. * x[27];
	v[1] = sporttournament12_pd[69] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[70] = 2. * x[27];
	v[2] = sporttournament12_pd[70] * x[48];
	v[0] += v[2];
	sporttournament12_pd[71] = 2. * x[27];
	v[2] = sporttournament12_pd[71] * x[55];
	v[0] += v[2];
	sporttournament12_pd[72] = 2. * x[27];
	v[2] = sporttournament12_pd[72] * x[58];
	v[0] += v[2];
	sporttournament12_pd[73] = 2. * x[28];
	v[2] = sporttournament12_pd[73] * x[29];
	v[0] += v[2];
	sporttournament12_pd[74] = 2. * x[28];
	v[2] = sporttournament12_pd[74] * x[39];
	v[0] += v[2];
	sporttournament12_pd[75] = 2. * x[28];
	v[2] = sporttournament12_pd[75] * x[61];
	v[0] += v[2];
	sporttournament12_pd[76] = 2. * x[29];
	v[2] = sporttournament12_pd[76] * x[30];
	v[0] += v[2];
	sporttournament12_pd[77] = 2. * x[30];
	v[2] = sporttournament12_pd[77] * x[43];
	v[0] += v[2];
	sporttournament12_pd[78] = 2. * x[30];
	v[2] = sporttournament12_pd[78] * x[48];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[79] = 2. * x[31];
	v[1] = sporttournament12_pd[79] * x[32];
	v[0] += v[1];
	sporttournament12_pd[80] = 2. * x[31];
	v[1] = sporttournament12_pd[80] * x[42];
	v[0] += v[1];
	sporttournament12_pd[81] = 2. * x[32];
	v[1] = sporttournament12_pd[81] * x[43];
	v[0] += v[1];
	sporttournament12_pd[82] = 2. * x[33];
	v[1] = sporttournament12_pd[82] * x[51];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[83] = 2. * x[33];
	v[2] = sporttournament12_pd[83] * x[56];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[84] = 2. * x[34];
	v[1] = sporttournament12_pd[84] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[85] = 2. * x[34];
	v[2] = sporttournament12_pd[85] * x[57];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[86] = 2. * x[34];
	v[1] = sporttournament12_pd[86] * x[63];
	v[0] += v[1];
	sporttournament12_pd[87] = 2. * x[34];
	v[1] = sporttournament12_pd[87] * x[65];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[88] = 2. * x[35];
	v[2] = sporttournament12_pd[88] * x[64];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[89] = 2. * x[36];
	v[1] = sporttournament12_pd[89] * x[38];
	v[0] += v[1];
	sporttournament12_pd[90] = 2. * x[36];
	v[1] = sporttournament12_pd[90] * x[57];
	v[0] += v[1];
	sporttournament12_pd[91] = 2. * x[36];
	v[1] = sporttournament12_pd[91] * x[59];
	v[0] += v[1];
	sporttournament12_pd[92] = 2. * x[37];
	v[1] = sporttournament12_pd[92] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[93] = 2. * x[38];
	v[2] = sporttournament12_pd[93] * x[39];
	v[0] += v[2];
	sporttournament12_pd[94] = 2. * x[38];
	v[2] = sporttournament12_pd[94] * x[53];
	v[0] += v[2];
	sporttournament12_pd[95] = 2. * x[38];
	v[2] = sporttournament12_pd[95] * x[64];
	v[0] += v[2];
	sporttournament12_pd[96] = 2. * x[39];
	v[2] = sporttournament12_pd[96] * x[40];
	v[0] += v[2];
	sporttournament12_pd[97] = 2. * x[40];
	v[2] = sporttournament12_pd[97] * x[41];
	v[0] += v[2];
	sporttournament12_pd[98] = 2. * x[40];
	v[2] = sporttournament12_pd[98] * x[58];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[99] = 2. * x[41];
	v[1] = sporttournament12_pd[99] * x[42];
	v[0] += v[1];
	sporttournament12_pd[100] = 2. * x[41];
	v[1] = sporttournament12_pd[100] * x[50];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[101] = 2. * x[42];
	v[2] = sporttournament12_pd[101] * x[44];
	v[0] += v[2];
	sporttournament12_pd[102] = 2. * x[42];
	v[2] = sporttournament12_pd[102] * x[47];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[103] = 2. * x[43];
	v[1] = sporttournament12_pd[103] * x[45];
	v[0] += v[1];
	sporttournament12_pd[104] = 2. * x[43];
	v[1] = sporttournament12_pd[104] * x[46];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[105] = 2. * x[44];
	v[2] = sporttournament12_pd[105] * x[45];
	v[0] += v[2];
	sporttournament12_pd[106] = 2. * x[44];
	v[2] = sporttournament12_pd[106] * x[46];
	v[0] += v[2];
	sporttournament12_pd[107] = 2. * x[46];
	v[2] = sporttournament12_pd[107] * x[47];
	v[0] += v[2];
	sporttournament12_pd[108] = 2. * x[46];
	v[2] = sporttournament12_pd[108] * x[48];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[109] = 2. * x[47];
	v[1] = sporttournament12_pd[109] * x[50];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[110] = 2. * x[49];
	v[2] = sporttournament12_pd[110] * x[55];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[111] = 2. * x[49];
	v[1] = sporttournament12_pd[111] * x[58];
	v[0] += v[1];
	sporttournament12_pd[112] = 2. * x[50];
	v[1] = sporttournament12_pd[112] * x[53];
	v[0] += v[1];
	sporttournament12_pd[113] = 2. * x[50];
	v[1] = sporttournament12_pd[113] * x[55];
	v[0] += v[1];
	sporttournament12_pd[114] = 2. * x[51];
	v[1] = sporttournament12_pd[114] * x[52];
	v[0] += v[1];
	sporttournament12_pd[115] = 2. * x[51];
	v[1] = sporttournament12_pd[115] * x[59];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament12_pd[116] = 2. * x[56];
	v[2] = sporttournament12_pd[116] * x[62];
	v[0] += v[2];
	sporttournament12_pd[117] = 2. * x[56];
	v[2] = sporttournament12_pd[117] * x[65];
	v[0] += v[2];
	sporttournament12_pd[118] = 2. * x[60];
	v[2] = sporttournament12_pd[118] * x[61];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament12_pd[119] = 2. * x[64];
	v[1] = sporttournament12_pd[119] * x[65];
	v[0] += v[1];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += -2.*x[5];
	t1 += -2.*x[6];
	t1 += -4.*x[7];
	t1 += -4.*x[8];
	t1 += -4.*x[9];
	t1 += -4.*x[10];
	t1 += -2.*x[11];
	t1 += -2.*x[12];
	t1 += 2.*x[13];
	t1 += 2.*x[14];
	t1 += -4.*x[15];
	t1 += -2.*x[16];
	t1 += -4.*x[17];
	t1 += -4.*x[18];
	t1 += -4.*x[19];
	t1 += -2.*x[20];
	t1 += -2.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += 2.*x[24];
	t1 += -2.*x[25];
	t1 += -2.*x[26];
	t1 += -2.*x[27];
	t1 += -4.*x[28];
	t1 += -2.*x[29];
	t1 += -2.*x[30];
	t1 += -4.*x[31];
	t1 += -2.*x[32];
	t1 += 2.*x[33];
	t1 += 2.*x[34];
	t1 += -2.*x[35];
	t1 += -2.*x[36];
	t1 += -2.*x[37];
	t1 += -4.*x[38];
	t1 += -2.*x[39];
	t1 += -2.*x[40];
	t1 += -2.*x[41];
	t1 += -2.*x[42];
	t1 += -2.*x[43];
	t1 += -4.*x[44];
	t1 += -2.*x[45];
	t1 += x[66];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[65] = sporttournament12_pd[119];
	J[64] = x[65]*2.;
	J[61] = -sporttournament12_pd[118];
	J[60] = -x[61]*2.;
	J[65] += sporttournament12_pd[117];
	J[56] = x[65]*2.;
	J[62] = sporttournament12_pd[116];
	J[56] += x[62]*2.;
	J[59] = -sporttournament12_pd[115];
	J[51] = -x[59]*2.;
	J[52] = sporttournament12_pd[114];
	J[51] += x[52]*2.;
	J[55] = sporttournament12_pd[113];
	J[50] = x[55]*2.;
	J[53] = sporttournament12_pd[112];
	J[50] += x[53]*2.;
	J[58] = sporttournament12_pd[111];
	J[49] = x[58]*2.;
	J[55] -= sporttournament12_pd[110];
	J[49] -= x[55]*2.;
	J[50] -= sporttournament12_pd[109];
	J[47] = -x[50]*2.;
	J[48] = -sporttournament12_pd[108];
	J[46] = -x[48]*2.;
	J[47] += sporttournament12_pd[107];
	J[46] += x[47]*2.;
	J[46] += sporttournament12_pd[106];
	J[44] = x[46]*2. + -4.;
	J[45] = sporttournament12_pd[105] + -2.;
	J[44] += x[45]*2.;
	J[46] -= sporttournament12_pd[104];
	J[43] = -x[46]*2. + -2.;
	J[45] += sporttournament12_pd[103];
	J[43] += x[45]*2.;
	J[47] -= sporttournament12_pd[102];
	J[42] = -x[47]*2. + -2.;
	J[44] += sporttournament12_pd[101];
	J[42] += x[44]*2.;
	J[50] -= sporttournament12_pd[100];
	J[41] = -x[50]*2. + -2.;
	J[42] += sporttournament12_pd[99];
	J[41] += x[42]*2.;
	J[58] -= sporttournament12_pd[98];
	J[40] = -x[58]*2. + -2.;
	J[41] += sporttournament12_pd[97];
	J[40] += x[41]*2.;
	J[40] += sporttournament12_pd[96];
	J[39] = x[40]*2. + -2.;
	J[64] += sporttournament12_pd[95];
	J[38] = x[64]*2. + -4.;
	J[53] += sporttournament12_pd[94];
	J[38] += x[53]*2.;
	J[39] += sporttournament12_pd[93];
	J[38] += x[39]*2.;
	J[39] -= sporttournament12_pd[92];
	J[37] = -x[39]*2. + -2.;
	J[59] += sporttournament12_pd[91];
	J[36] = x[59]*2. + -2.;
	J[57] = sporttournament12_pd[90];
	J[36] += x[57]*2.;
	J[38] += sporttournament12_pd[89];
	J[36] += x[38]*2.;
	J[64] -= sporttournament12_pd[88];
	J[35] = -x[64]*2. + -2.;
	J[65] -= sporttournament12_pd[87];
	J[34] = -x[65]*2. + 2.;
	J[63] = sporttournament12_pd[86];
	J[34] += x[63]*2.;
	J[57] -= sporttournament12_pd[85];
	J[34] -= x[57]*2.;
	J[52] -= sporttournament12_pd[84];
	J[34] -= x[52]*2.;
	J[56] -= sporttournament12_pd[83];
	J[33] = -x[56]*2. + 2.;
	J[51] -= sporttournament12_pd[82];
	J[33] -= x[51]*2.;
	J[43] += sporttournament12_pd[81];
	J[32] = x[43]*2. + -2.;
	J[42] += sporttournament12_pd[80];
	J[31] = x[42]*2. + -4.;
	J[32] += sporttournament12_pd[79];
	J[31] += x[32]*2.;
	J[48] -= sporttournament12_pd[78];
	J[30] = -x[48]*2. + -2.;
	J[43] += sporttournament12_pd[77];
	J[30] += x[43]*2.;
	J[30] += sporttournament12_pd[76];
	J[29] = x[30]*2. + -2.;
	J[61] += sporttournament12_pd[75];
	J[28] = x[61]*2. + -4.;
	J[39] += sporttournament12_pd[74];
	J[28] += x[39]*2.;
	J[29] += sporttournament12_pd[73];
	J[28] += x[29]*2.;
	J[58] += sporttournament12_pd[72];
	J[27] = x[58]*2. + -2.;
	J[55] += sporttournament12_pd[71];
	J[27] += x[55]*2.;
	J[48] += sporttournament12_pd[70];
	J[27] += x[48]*2.;
	J[29] -= sporttournament12_pd[69];
	J[27] -= x[29]*2.;
	J[28] += sporttournament12_pd[68];
	J[26] = x[28]*2. + -2.;
	J[53] -= sporttournament12_pd[67];
	J[25] = -x[53]*2. + -2.;
	J[26] += sporttournament12_pd[66];
	J[25] += x[26]*2.;
	J[58] -= sporttournament12_pd[65];
	J[24] = -x[58]*2. + 2.;
	J[36] -= sporttournament12_pd[64];
	J[24] -= x[36]*2.;
	J[26] -= sporttournament12_pd[63];
	J[24] -= x[26]*2.;
	J[65] -= sporttournament12_pd[62];
	J[23] = -x[65]*2. + -2.;
	J[37] += sporttournament12_pd[61];
	J[23] += x[37]*2.;
	J[25] += sporttournament12_pd[60];
	J[23] += x[25]*2.;
	J[57] += sporttournament12_pd[59];
	J[22] = x[57]*2. + -2.;
	J[25] += sporttournament12_pd[58];
	J[22] += x[25]*2.;
	J[56] -= sporttournament12_pd[57];
	J[21] = -x[56]*2. + -2.;
	J[23] += sporttournament12_pd[56];
	J[21] += x[23]*2.;
	J[22] += sporttournament12_pd[55];
	J[21] += x[22]*2.;
	J[31] += sporttournament12_pd[54];
	J[20] = x[31]*2. + -2.;
	J[30] += sporttournament12_pd[53];
	J[19] = x[30]*2. + -4.;
	J[20] += sporttournament12_pd[52];
	J[19] += x[20]*2.;
	J[41] += sporttournament12_pd[51];
	J[18] = x[41]*2. + -4.;
	J[31] += sporttournament12_pd[50];
	J[18] += x[31]*2.;
	J[60] += sporttournament12_pd[49];
	J[17] = x[60]*2. + -4.;
	J[40] += sporttournament12_pd[48];
	J[17] += x[40]*2.;
	J[18] += sporttournament12_pd[47];
	J[17] += x[18]*2.;
	J[61] -= sporttournament12_pd[46];
	J[16] = -x[61]*2. + -2.;
	J[26] += sporttournament12_pd[45];
	J[16] += x[26]*2.;
	J[17] += sporttournament12_pd[44];
	J[16] += x[17]*2.;
	J[37] += sporttournament12_pd[43];
	J[15] = x[37]*2. + -4.;
	J[16] += sporttournament12_pd[42];
	J[15] += x[16]*2.;
	J[64] -= sporttournament12_pd[41];
	J[14] = -x[64]*2. + 2.;
	J[55] -= sporttournament12_pd[40];
	J[14] -= x[55]*2.;
	J[22] -= sporttournament12_pd[39];
	J[14] -= x[22]*2.;
	J[15] += sporttournament12_pd[38];
	J[14] += x[15]*2.;
	J[63] -= sporttournament12_pd[37];
	J[13] = -x[63]*2. + 2.;
	J[59] -= sporttournament12_pd[36];
	J[13] -= x[59]*2.;
	J[54] = -sporttournament12_pd[35];
	J[13] -= x[54]*2.;
	J[35] += sporttournament12_pd[34];
	J[13] += x[35]*2.;
	J[57] -= sporttournament12_pd[33];
	J[12] = -x[57]*2. + -2.;
	J[54] += sporttournament12_pd[32];
	J[12] += x[54]*2.;
	J[35] += sporttournament12_pd[31];
	J[12] += x[35]*2.;
	J[19] += sporttournament12_pd[30];
	J[11] = x[19]*2. + -2.;
	J[60] += sporttournament12_pd[29];
	J[10] = x[60]*2. + -4.;
	J[18] += sporttournament12_pd[28];
	J[10] += x[18]*2.;
	J[11] += sporttournament12_pd[27];
	J[10] += x[11]*2.;
	J[61] += sporttournament12_pd[26];
	J[9] = x[61]*2. + -4.;
	J[29] += sporttournament12_pd[25];
	J[9] += x[29]*2.;
	J[19] += sporttournament12_pd[24];
	J[9] += x[19]*2.;
	J[49] += sporttournament12_pd[23];
	J[8] = x[49]*2. + -4.;
	J[35] += sporttournament12_pd[22];
	J[8] += x[35]*2.;
	J[24] += sporttournament12_pd[21];
	J[8] += x[24]*2.;
	J[51] += sporttournament12_pd[20];
	J[7] = x[51]*2. + -4.;
	J[8] += sporttournament12_pd[19];
	J[7] += x[8]*2.;
	J[62] -= sporttournament12_pd[18];
	J[6] = -x[62]*2. + -2.;
	J[21] += sporttournament12_pd[17];
	J[6] += x[21]*2.;
	J[7] += sporttournament12_pd[16];
	J[6] += x[7]*2.;
	J[12] += sporttournament12_pd[15];
	J[5] = x[12]*2. + -2.;
	J[6] += sporttournament12_pd[14];
	J[5] += x[6]*2.;
	J[10] += sporttournament12_pd[13];
	J[4] = x[10]*2. + -2.;
	J[60] -= sporttournament12_pd[12];
	J[3] = -x[60]*2. + -2.;
	J[9] += sporttournament12_pd[11];
	J[3] += x[9]*2.;
	J[4] += sporttournament12_pd[10];
	J[3] += x[4]*2.;
	J[59] += sporttournament12_pd[9];
	J[2] = x[59]*2. + -2.;
	J[49] -= sporttournament12_pd[8];
	J[2] -= x[49]*2.;
	J[37] += sporttournament12_pd[7];
	J[2] += x[37]*2.;
	J[7] += sporttournament12_pd[6];
	J[2] += x[7]*2.;
	J[44] += sporttournament12_pd[5];
	J[1] = x[44]*2. + -2.;
	J[3] += sporttournament12_pd[4];
	J[1] += x[3]*2.;
	J[53] -= sporttournament12_pd[3];
	J[0] = -x[53]*2. + -2.;
	J[48] += sporttournament12_pd[2];
	J[0] += x[48]*2.;
	J[47] += sporttournament12_pd[1];
	J[0] += x[47]*2.;
	J[15] += sporttournament12_pd[0];
	J[0] += x[15]*2.;
	J[66] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
