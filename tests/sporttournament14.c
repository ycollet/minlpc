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
 fint sporttournament14_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament14_funcom_[191] = {
	92 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	92 /* nzc */,
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
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,

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

 real sporttournament14_boundc_[1+184+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real sporttournament14_x0comn_[92] = {
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

 static real sporttournament14_pd[168];
static real sporttournament14_old_x[92];
static int sporttournament14_xkind = -1;

 static int
sporttournament14_xcheck(real *x)
{
	real *x1 = sporttournament14_old_x, *xe = x + 92;
	errno = 0;
	if (sporttournament14_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament14_xkind = 0;
	return 1;
	}
 real
sporttournament14_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament14_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[91];
	;}

	if (wantfg & 2) {
	g[91] = 1.;
	}

	return rv;
}

 void
sporttournament14_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament14_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament14_pd[0] = 2. * x[20];
	v[0] = sporttournament14_pd[0] * x[8];
	sporttournament14_pd[1] = 2. * x[20];
	v[1] = sporttournament14_pd[1] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[2] = 2. * x[20];
	v[2] = sporttournament14_pd[2] * x[46];
	v[0] += v[2];
	sporttournament14_pd[3] = 2. * x[20];
	v[2] = sporttournament14_pd[3] * x[47];
	v[0] += v[2];
	sporttournament14_pd[4] = 2. * x[23];
	v[2] = sporttournament14_pd[4] * x[24];
	v[0] += v[2];
	sporttournament14_pd[5] = 2. * x[23];
	v[2] = sporttournament14_pd[5] * x[40];
	v[0] += v[2];
	sporttournament14_pd[6] = 2. * x[23];
	v[2] = sporttournament14_pd[6] * x[61];
	v[0] += v[2];
	sporttournament14_pd[7] = 2. * x[23];
	v[2] = sporttournament14_pd[7] * x[83];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[8] = 2. * x[24];
	v[1] = sporttournament14_pd[8] * x[41];
	v[0] += v[1];
	sporttournament14_pd[9] = 2. * x[24];
	v[1] = sporttournament14_pd[9] * x[65];
	v[0] += v[1];
	sporttournament14_pd[10] = 2. * x[24];
	v[1] = sporttournament14_pd[10] * x[51];
	v[0] += v[1];
	sporttournament14_pd[11] = 2. * x[29];
	v[1] = sporttournament14_pd[11] * x[31];
	v[0] += v[1];
	sporttournament14_pd[12] = 2. * x[29];
	v[1] = sporttournament14_pd[12] * x[61];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[13] = 2. * x[29];
	v[2] = sporttournament14_pd[13] * x[53];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[14] = 2. * x[29];
	v[1] = sporttournament14_pd[14] * x[84];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[15] = 2. * x[31];
	v[2] = sporttournament14_pd[15] * x[65];
	v[0] += v[2];
	sporttournament14_pd[16] = 2. * x[31];
	v[2] = sporttournament14_pd[16] * x[3];
	v[0] += v[2];
	sporttournament14_pd[17] = 2. * x[31];
	v[2] = sporttournament14_pd[17] * x[55];
	v[0] += v[2];
	sporttournament14_pd[18] = 2. * x[35];
	v[2] = sporttournament14_pd[18] * x[37];
	v[0] += v[2];
	sporttournament14_pd[19] = 2. * x[35];
	v[2] = sporttournament14_pd[19] * x[81];
	v[0] += v[2];
	sporttournament14_pd[20] = 2. * x[37];
	v[2] = sporttournament14_pd[20] * x[39];
	v[0] += v[2];
	sporttournament14_pd[21] = 2. * x[37];
	v[2] = sporttournament14_pd[21] * x[50];
	v[0] += v[2];
	sporttournament14_pd[22] = 2. * x[37];
	v[2] = sporttournament14_pd[22] * x[60];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[23] = 2. * x[39];
	v[1] = sporttournament14_pd[23] * x[54];
	v[0] += v[1];
	sporttournament14_pd[24] = 2. * x[40];
	v[1] = sporttournament14_pd[24] * x[15];
	v[0] += v[1];
	sporttournament14_pd[25] = 2. * x[41];
	v[1] = sporttournament14_pd[25] * x[43];
	v[0] += v[1];
	sporttournament14_pd[26] = 2. * x[41];
	v[1] = sporttournament14_pd[26] * x[61];
	v[0] += v[1];
	sporttournament14_pd[27] = 2. * x[41];
	v[1] = sporttournament14_pd[27] * x[59];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[28] = 2. * x[43];
	v[2] = sporttournament14_pd[28] * x[44];
	v[0] += v[2];
	sporttournament14_pd[29] = 2. * x[43];
	v[2] = sporttournament14_pd[29] * x[4];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[30] = 2. * x[43];
	v[1] = sporttournament14_pd[30] * x[33];
	v[0] += v[1];
	sporttournament14_pd[31] = 2. * x[44];
	v[1] = sporttournament14_pd[31] * x[67];
	v[0] += v[1];
	sporttournament14_pd[32] = 2. * x[44];
	v[1] = sporttournament14_pd[32] * x[34];
	v[0] += v[1];
	sporttournament14_pd[33] = 2. * x[44];
	v[1] = sporttournament14_pd[33] * x[48];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[34] = 2. * x[50];
	v[2] = sporttournament14_pd[34] * x[1];
	v[0] += v[2];
	sporttournament14_pd[35] = 2. * x[50];
	v[2] = sporttournament14_pd[35] * x[10];
	v[0] += v[2];
	sporttournament14_pd[36] = 2. * x[50];
	v[2] = sporttournament14_pd[36] * x[62];
	v[0] += v[2];
	sporttournament14_pd[37] = 2. * x[54];
	v[2] = sporttournament14_pd[37] * x[58];
	v[0] += v[2];
	sporttournament14_pd[38] = 2. * x[54];
	v[2] = sporttournament14_pd[38] * x[0];
	v[0] += v[2];
	sporttournament14_pd[39] = 2. * x[54];
	v[2] = sporttournament14_pd[39] * x[60];
	v[0] += v[2];
	sporttournament14_pd[40] = 2. * x[58];
	v[2] = sporttournament14_pd[40] * x[1];
	v[0] += v[2];
	sporttournament14_pd[41] = 2. * x[61];
	v[2] = sporttournament14_pd[41] * x[66];
	v[0] += v[2];
	sporttournament14_pd[42] = 2. * x[65];
	v[2] = sporttournament14_pd[42] * x[67];
	v[0] += v[2];
	sporttournament14_pd[43] = 2. * x[65];
	v[2] = sporttournament14_pd[43] * x[56];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[44] = 2. * x[66];
	v[1] = sporttournament14_pd[44] * x[67];
	v[0] += v[1];
	sporttournament14_pd[45] = 2. * x[66];
	v[1] = sporttournament14_pd[45] * x[16];
	v[0] += v[1];
	sporttournament14_pd[46] = 2. * x[66];
	v[1] = sporttournament14_pd[46] * x[64];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[47] = 2. * x[67];
	v[2] = sporttournament14_pd[47] * x[68];
	v[0] += v[2];
	sporttournament14_pd[48] = 2. * x[68];
	v[2] = sporttournament14_pd[48] * x[19];
	v[0] += v[2];
	sporttournament14_pd[49] = 2. * x[68];
	v[2] = sporttournament14_pd[49] * x[32];
	v[0] += v[2];
	sporttournament14_pd[50] = 2. * x[68];
	v[2] = sporttournament14_pd[50] * x[48];
	v[0] += v[2];
	sporttournament14_pd[51] = 2. * x[69];
	v[2] = sporttournament14_pd[51] * x[0];
	v[0] += v[2];
	sporttournament14_pd[52] = 2. * x[69];
	v[2] = sporttournament14_pd[52] * x[72];
	v[0] += v[2];
	sporttournament14_pd[53] = 2. * x[69];
	v[2] = sporttournament14_pd[53] * x[60];
	v[0] += v[2];
	sporttournament14_pd[54] = 2. * x[69];
	v[2] = sporttournament14_pd[54] * x[63];
	v[0] += v[2];
	sporttournament14_pd[55] = 2. * x[0];
	v[2] = sporttournament14_pd[55] * x[12];
	v[0] += v[2];
	sporttournament14_pd[56] = 2. * x[0];
	v[2] = sporttournament14_pd[56] * x[73];
	v[0] += v[2];
	sporttournament14_pd[57] = 2. * x[1];
	v[2] = sporttournament14_pd[57] * x[2];
	v[0] += v[2];
	sporttournament14_pd[58] = 2. * x[1];
	v[2] = sporttournament14_pd[58] * x[11];
	v[0] += v[2];
	sporttournament14_pd[59] = 2. * x[2];
	v[2] = sporttournament14_pd[59] * x[12];
	v[0] += v[2];
	sporttournament14_pd[60] = 2. * x[3];
	v[2] = sporttournament14_pd[60] * x[16];
	v[0] += v[2];
	sporttournament14_pd[61] = 2. * x[3];
	v[2] = sporttournament14_pd[61] * x[30];
	v[0] += v[2];
	sporttournament14_pd[62] = 2. * x[3];
	v[2] = sporttournament14_pd[62] * x[32];
	v[0] += v[2];
	sporttournament14_pd[63] = 2. * x[4];
	v[2] = sporttournament14_pd[63] * x[70];
	v[0] += v[2];
	sporttournament14_pd[64] = 2. * x[4];
	v[2] = sporttournament14_pd[64] * x[32];
	v[0] += v[2];
	sporttournament14_pd[65] = 2. * x[4];
	v[2] = sporttournament14_pd[65] * x[64];
	v[0] += v[2];
	sporttournament14_pd[66] = 2. * x[5];
	v[2] = sporttournament14_pd[66] * x[16];
	v[0] += v[2];
	sporttournament14_pd[67] = 2. * x[5];
	v[2] = sporttournament14_pd[67] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[68] = 2. * x[5];
	v[1] = sporttournament14_pd[68] * x[52];
	v[0] += v[1];
	sporttournament14_pd[69] = 2. * x[5];
	v[1] = sporttournament14_pd[69] * x[56];
	v[0] += v[1];
	sporttournament14_pd[70] = 2. * x[6];
	v[1] = sporttournament14_pd[70] * x[7];
	v[0] += v[1];
	sporttournament14_pd[71] = 2. * x[6];
	v[1] = sporttournament14_pd[71] * x[8];
	v[0] += v[1];
	sporttournament14_pd[72] = 2. * x[6];
	v[1] = sporttournament14_pd[72] * x[18];
	v[0] += v[1];
	sporttournament14_pd[73] = 2. * x[6];
	v[1] = sporttournament14_pd[73] * x[33];
	v[0] += v[1];
	sporttournament14_pd[74] = 2. * x[7];
	v[1] = sporttournament14_pd[74] * x[9];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[75] = 2. * x[7];
	v[2] = sporttournament14_pd[75] * x[22];
	v[0] += v[2];
	sporttournament14_pd[76] = 2. * x[7];
	v[2] = sporttournament14_pd[76] * x[48];
	v[0] += v[2];
	sporttournament14_pd[77] = 2. * x[8];
	v[2] = sporttournament14_pd[77] * x[9];
	v[0] += v[2];
	sporttournament14_pd[78] = 2. * x[8];
	v[2] = sporttournament14_pd[78] * x[52];
	v[0] += v[2];
	sporttournament14_pd[79] = 2. * x[9];
	v[2] = sporttournament14_pd[79] * x[10];
	v[0] += v[2];
	sporttournament14_pd[80] = 2. * x[9];
	v[2] = sporttournament14_pd[80] * x[62];
	v[0] += v[2];
	sporttournament14_pd[81] = 2. * x[10];
	v[2] = sporttournament14_pd[81] * x[11];
	v[0] += v[2];
	sporttournament14_pd[82] = 2. * x[10];
	v[2] = sporttournament14_pd[82] * x[78];
	v[0] += v[2];
	sporttournament14_pd[83] = 2. * x[11];
	v[2] = sporttournament14_pd[83] * x[26];
	v[0] += v[2];
	sporttournament14_pd[84] = 2. * x[11];
	v[2] = sporttournament14_pd[84] * x[79];
	v[0] += v[2];
	sporttournament14_pd[85] = 2. * x[12];
	v[2] = sporttournament14_pd[85] * x[13];
	v[0] += v[2];
	sporttournament14_pd[86] = 2. * x[12];
	v[2] = sporttournament14_pd[86] * x[25];
	v[0] += v[2];
	sporttournament14_pd[87] = 2. * x[13];
	v[2] = sporttournament14_pd[87] * x[26];
	v[0] += v[2];
	sporttournament14_pd[88] = 2. * x[14];
	v[2] = sporttournament14_pd[88] * x[51];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[89] = 2. * x[14];
	v[1] = sporttournament14_pd[89] * x[88];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[90] = 2. * x[15];
	v[2] = sporttournament14_pd[90] * x[70];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[91] = 2. * x[15];
	v[1] = sporttournament14_pd[91] * x[30];
	v[0] += v[1];
	sporttournament14_pd[92] = 2. * x[15];
	v[1] = sporttournament14_pd[92] * x[53];
	v[0] += v[1];
	sporttournament14_pd[93] = 2. * x[70];
	v[1] = sporttournament14_pd[93] * x[86];
	v[0] += v[1];
	sporttournament14_pd[94] = 2. * x[70];
	v[1] = sporttournament14_pd[94] * x[88];
	v[0] += v[1];
	sporttournament14_pd[95] = 2. * x[16];
	v[1] = sporttournament14_pd[95] * x[18];
	v[0] += v[1];
	sporttournament14_pd[96] = 2. * x[17];
	v[1] = sporttournament14_pd[96] * x[71];
	v[0] += v[1];
	sporttournament14_pd[97] = 2. * x[17];
	v[1] = sporttournament14_pd[97] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[98] = 2. * x[17];
	v[2] = sporttournament14_pd[98] * x[56];
	v[0] += v[2];
	sporttournament14_pd[99] = 2. * x[17];
	v[2] = sporttournament14_pd[99] * x[59];
	v[0] += v[2];
	sporttournament14_pd[100] = 2. * x[18];
	v[2] = sporttournament14_pd[100] * x[71];
	v[0] += v[2];
	sporttournament14_pd[101] = 2. * x[18];
	v[2] = sporttournament14_pd[101] * x[90];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[102] = 2. * x[19];
	v[1] = sporttournament14_pd[102] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[103] = 2. * x[19];
	v[2] = sporttournament14_pd[103] * x[87];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[104] = 2. * x[71];
	v[1] = sporttournament14_pd[104] * x[49];
	v[0] += v[1];
	sporttournament14_pd[105] = 2. * x[71];
	v[1] = sporttournament14_pd[105] * x[87];
	v[0] += v[1];
	sporttournament14_pd[106] = 2. * x[21];
	v[1] = sporttournament14_pd[106] * x[72];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[107] = 2. * x[21];
	v[2] = sporttournament14_pd[107] * x[34];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[108] = 2. * x[21];
	v[1] = sporttournament14_pd[108] * x[38];
	v[0] += v[1];
	sporttournament14_pd[109] = 2. * x[21];
	v[1] = sporttournament14_pd[109] * x[48];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[110] = 2. * x[22];
	v[2] = sporttournament14_pd[110] * x[73];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[111] = 2. * x[22];
	v[1] = sporttournament14_pd[111] * x[47];
	v[0] += v[1];
	sporttournament14_pd[112] = 2. * x[22];
	v[1] = sporttournament14_pd[112] * x[49];
	v[0] += v[1];
	sporttournament14_pd[113] = 2. * x[72];
	v[1] = sporttournament14_pd[113] * x[73];
	v[0] += v[1];
	sporttournament14_pd[114] = 2. * x[72];
	v[1] = sporttournament14_pd[114] * x[87];
	v[0] += v[1];
	sporttournament14_pd[115] = 2. * x[73];
	v[1] = sporttournament14_pd[115] * x[25];
	v[0] += v[1];
	sporttournament14_pd[116] = 2. * x[25];
	v[1] = sporttournament14_pd[116] * x[42];
	v[0] += v[1];
	sporttournament14_pd[117] = 2. * x[25];
	v[1] = sporttournament14_pd[117] * x[47];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[118] = 2. * x[26];
	v[2] = sporttournament14_pd[118] * x[27];
	v[0] += v[2];
	sporttournament14_pd[119] = 2. * x[26];
	v[2] = sporttournament14_pd[119] * x[80];
	v[0] += v[2];
	sporttournament14_pd[120] = 2. * x[27];
	v[2] = sporttournament14_pd[120] * x[42];
	v[0] += v[2];
	sporttournament14_pd[121] = 2. * x[28];
	v[2] = sporttournament14_pd[121] * x[74];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[122] = 2. * x[28];
	v[1] = sporttournament14_pd[122] * x[55];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[123] = 2. * x[74];
	v[2] = sporttournament14_pd[123] * x[75];
	v[0] += v[2];
	sporttournament14_pd[124] = 2. * x[74];
	v[2] = sporttournament14_pd[124] * x[83];
	v[0] += v[2];
	sporttournament14_pd[125] = 2. * x[74];
	v[2] = sporttournament14_pd[125] * x[64];
	v[0] += v[2];
	sporttournament14_pd[126] = 2. * x[30];
	v[2] = sporttournament14_pd[126] * x[51];
	v[0] += v[2];
	sporttournament14_pd[127] = 2. * x[30];
	v[2] = sporttournament14_pd[127] * x[85];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[128] = 2. * x[75];
	v[1] = sporttournament14_pd[128] * x[55];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[129] = 2. * x[75];
	v[2] = sporttournament14_pd[129] * x[85];
	v[0] += v[2];
	sporttournament14_pd[130] = 2. * x[75];
	v[2] = sporttournament14_pd[130] * x[86];
	v[0] += v[2];
	sporttournament14_pd[131] = 2. * x[32];
	v[2] = sporttournament14_pd[131] * x[89];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[132] = 2. * x[33];
	v[1] = sporttournament14_pd[132] * x[76];
	v[0] += v[1];
	sporttournament14_pd[133] = 2. * x[33];
	v[1] = sporttournament14_pd[133] * x[59];
	v[0] += v[1];
	sporttournament14_pd[134] = 2. * x[34];
	v[1] = sporttournament14_pd[134] * x[77];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[135] = 2. * x[76];
	v[2] = sporttournament14_pd[135] * x[36];
	v[0] += v[2];
	sporttournament14_pd[136] = 2. * x[76];
	v[2] = sporttournament14_pd[136] * x[77];
	v[0] += v[2];
	sporttournament14_pd[137] = 2. * x[76];
	v[2] = sporttournament14_pd[137] * x[89];
	v[0] += v[2];
	sporttournament14_pd[138] = 2. * x[36];
	v[2] = sporttournament14_pd[138] * x[78];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[139] = 2. * x[77];
	v[1] = sporttournament14_pd[139] * x[78];
	v[0] += v[1];
	sporttournament14_pd[140] = 2. * x[77];
	v[1] = sporttournament14_pd[140] * x[63];
	v[0] += v[1];
	sporttournament14_pd[141] = 2. * x[38];
	v[1] = sporttournament14_pd[141] * x[79];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[142] = 2. * x[38];
	v[2] = sporttournament14_pd[142] * x[46];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[143] = 2. * x[38];
	v[1] = sporttournament14_pd[143] * x[49];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[144] = 2. * x[78];
	v[2] = sporttournament14_pd[144] * x[79];
	v[0] += v[2];
	sporttournament14_pd[145] = 2. * x[79];
	v[2] = sporttournament14_pd[145] * x[80];
	v[0] += v[2];
	sporttournament14_pd[146] = 2. * x[80];
	v[2] = sporttournament14_pd[146] * x[81];
	v[0] += v[2];
	sporttournament14_pd[147] = 2. * x[80];
	v[2] = sporttournament14_pd[147] * x[46];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[148] = 2. * x[42];
	v[1] = sporttournament14_pd[148] * x[82];
	v[0] += v[1];
	sporttournament14_pd[149] = 2. * x[42];
	v[1] = sporttournament14_pd[149] * x[45];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[150] = 2. * x[81];
	v[2] = sporttournament14_pd[150] * x[82];
	v[0] += v[2];
	sporttournament14_pd[151] = 2. * x[81];
	v[2] = sporttournament14_pd[151] * x[45];
	v[0] += v[2];
	sporttournament14_pd[152] = 2. * x[45];
	v[2] = sporttournament14_pd[152] * x[46];
	v[0] += v[2];
	sporttournament14_pd[153] = 2. * x[45];
	v[2] = sporttournament14_pd[153] * x[47];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[154] = 2. * x[49];
	v[1] = sporttournament14_pd[154] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[155] = 2. * x[51];
	v[2] = sporttournament14_pd[155] * x[57];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[156] = 2. * x[52];
	v[1] = sporttournament14_pd[156] * x[89];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[157] = 2. * x[84];
	v[2] = sporttournament14_pd[157] * x[88];
	v[0] += v[2];
	sporttournament14_pd[158] = 2. * x[55];
	v[2] = sporttournament14_pd[158] * x[57];
	v[0] += v[2];
	sporttournament14_pd[159] = 2. * x[56];
	v[2] = sporttournament14_pd[159] * x[85];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[160] = 2. * x[85];
	v[1] = sporttournament14_pd[160] * x[90];
	v[0] += v[1];
	sporttournament14_pd[161] = 2. * x[59];
	v[1] = sporttournament14_pd[161] * x[86];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[162] = 2. * x[60];
	v[2] = sporttournament14_pd[162] * x[62];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[163] = 2. * x[86];
	v[1] = sporttournament14_pd[163] * x[90];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[164] = 2. * x[62];
	v[2] = sporttournament14_pd[164] * x[63];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[165] = 2. * x[63];
	v[1] = sporttournament14_pd[165] * x[87];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament14_pd[166] = 2. * x[64];
	v[2] = sporttournament14_pd[166] * x[88];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament14_pd[167] = 2. * x[89];
	v[1] = sporttournament14_pd[167] * x[90];
	v[0] += v[1];
	t1 = v[0] + -4.*x[0];
	t1 += -4.*x[1];
	t1 += -2.*x[2];
	t1 += -4.*x[3];
	t1 += -2.*x[4];
	t1 += -2.*x[5];
	t1 += -4.*x[6];
	t1 += -2.*x[7];
	t1 += -4.*x[8];
	t1 += -2.*x[9];
	t1 += -4.*x[10];
	t1 += -4.*x[11];
	t1 += -4.*x[12];
	t1 += -2.*x[13];
	t1 += 2.*x[14];
	t1 += -2.*x[15];
	t1 += -4.*x[16];
	t1 += -2.*x[17];
	t1 += -2.*x[18];
	t1 += 2.*x[19];
	t1 += -2.*x[20];
	t1 += 2.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += -4.*x[24];
	t1 += -2.*x[25];
	t1 += -4.*x[26];
	t1 += -2.*x[27];
	t1 += 2.*x[28];
	t1 += 2.*x[29];
	t1 += -2.*x[30];
	t1 += -4.*x[31];
	t1 += -2.*x[32];
	t1 += -4.*x[33];
	t1 += 2.*x[34];
	t1 += -2.*x[35];
	t1 += 2.*x[36];
	t1 += -2.*x[37];
	t1 += 2.*x[38];
	t1 += -2.*x[39];
	t1 += -2.*x[40];
	t1 += -2.*x[41];
	t1 += -2.*x[42];
	t1 += -2.*x[43];
	t1 += -2.*x[44];
	t1 += -4.*x[50];
	t1 += -4.*x[54];
	t1 += -2.*x[58];
	t1 += -2.*x[61];
	t1 += -2.*x[65];
	t1 += -2.*x[66];
	t1 += -4.*x[67];
	t1 += -4.*x[68];
	t1 += -4.*x[69];
	t1 += -2.*x[70];
	t1 += -4.*x[71];
	t1 += -2.*x[72];
	t1 += -2.*x[73];
	t1 += -2.*x[74];
	t1 += -2.*x[75];
	t1 += -4.*x[76];
	t1 += -2.*x[77];
	t1 += -2.*x[78];
	t1 += -2.*x[79];
	t1 += -2.*x[80];
	t1 += -4.*x[81];
	t1 += -2.*x[82];
	t1 += x[91];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[90] = sporttournament14_pd[167];
	J[89] = x[90]*2.;
	J[88] = -sporttournament14_pd[166];
	J[64] = -x[88]*2.;
	J[87] = -sporttournament14_pd[165];
	J[63] = -x[87]*2.;
	J[63] -= sporttournament14_pd[164];
	J[62] = -x[63]*2.;
	J[90] -= sporttournament14_pd[163];
	J[86] = -x[90]*2.;
	J[62] -= sporttournament14_pd[162];
	J[60] = -x[62]*2.;
	J[86] -= sporttournament14_pd[161];
	J[59] = -x[86]*2.;
	J[90] += sporttournament14_pd[160];
	J[85] = x[90]*2.;
	J[85] -= sporttournament14_pd[159];
	J[56] = -x[85]*2.;
	J[57] = sporttournament14_pd[158];
	J[55] = x[57]*2.;
	J[88] += sporttournament14_pd[157];
	J[84] = x[88]*2.;
	J[89] -= sporttournament14_pd[156];
	J[52] = -x[89]*2.;
	J[57] -= sporttournament14_pd[155];
	J[51] = -x[57]*2.;
	J[52] -= sporttournament14_pd[154];
	J[49] = -x[52]*2.;
	J[47] = -sporttournament14_pd[153];
	J[45] = -x[47]*2.;
	J[46] = sporttournament14_pd[152];
	J[45] += x[46]*2.;
	J[45] += sporttournament14_pd[151];
	J[81] = x[45]*2. + -4.;
	J[82] = sporttournament14_pd[150] + -2.;
	J[81] += x[82]*2.;
	J[45] -= sporttournament14_pd[149];
	J[42] = -x[45]*2. + -2.;
	J[82] += sporttournament14_pd[148];
	J[42] += x[82]*2.;
	J[46] -= sporttournament14_pd[147];
	J[80] = -x[46]*2. + -2.;
	J[81] += sporttournament14_pd[146];
	J[80] += x[81]*2.;
	J[80] += sporttournament14_pd[145];
	J[79] = x[80]*2. + -2.;
	J[79] += sporttournament14_pd[144];
	J[78] = x[79]*2. + -2.;
	J[49] -= sporttournament14_pd[143];
	J[38] = -x[49]*2. + 2.;
	J[46] -= sporttournament14_pd[142];
	J[38] -= x[46]*2.;
	J[79] -= sporttournament14_pd[141];
	J[38] -= x[79]*2.;
	J[63] += sporttournament14_pd[140];
	J[77] = x[63]*2. + -2.;
	J[78] += sporttournament14_pd[139];
	J[77] += x[78]*2.;
	J[78] -= sporttournament14_pd[138];
	J[36] = -x[78]*2. + 2.;
	J[89] += sporttournament14_pd[137];
	J[76] = x[89]*2. + -4.;
	J[77] += sporttournament14_pd[136];
	J[76] += x[77]*2.;
	J[36] += sporttournament14_pd[135];
	J[76] += x[36]*2.;
	J[77] -= sporttournament14_pd[134];
	J[34] = -x[77]*2. + 2.;
	J[59] += sporttournament14_pd[133];
	J[33] = x[59]*2. + -4.;
	J[76] += sporttournament14_pd[132];
	J[33] += x[76]*2.;
	J[89] -= sporttournament14_pd[131];
	J[32] = -x[89]*2. + -2.;
	J[86] += sporttournament14_pd[130];
	J[75] = x[86]*2. + -2.;
	J[85] += sporttournament14_pd[129];
	J[75] += x[85]*2.;
	J[55] -= sporttournament14_pd[128];
	J[75] -= x[55]*2.;
	J[85] -= sporttournament14_pd[127];
	J[30] = -x[85]*2. + -2.;
	J[51] += sporttournament14_pd[126];
	J[30] += x[51]*2.;
	J[64] += sporttournament14_pd[125];
	J[74] = x[64]*2. + -2.;
	J[83] = sporttournament14_pd[124];
	J[74] += x[83]*2.;
	J[75] += sporttournament14_pd[123];
	J[74] += x[75]*2.;
	J[55] -= sporttournament14_pd[122];
	J[28] = -x[55]*2. + 2.;
	J[74] -= sporttournament14_pd[121];
	J[28] -= x[74]*2.;
	J[42] += sporttournament14_pd[120];
	J[27] = x[42]*2. + -2.;
	J[80] += sporttournament14_pd[119];
	J[26] = x[80]*2. + -4.;
	J[27] += sporttournament14_pd[118];
	J[26] += x[27]*2.;
	J[47] -= sporttournament14_pd[117];
	J[25] = -x[47]*2. + -2.;
	J[42] += sporttournament14_pd[116];
	J[25] += x[42]*2.;
	J[25] += sporttournament14_pd[115];
	J[73] = x[25]*2. + -2.;
	J[87] += sporttournament14_pd[114];
	J[72] = x[87]*2. + -2.;
	J[73] += sporttournament14_pd[113];
	J[72] += x[73]*2.;
	J[49] += sporttournament14_pd[112];
	J[22] = x[49]*2. + -2.;
	J[47] += sporttournament14_pd[111];
	J[22] += x[47]*2.;
	J[73] -= sporttournament14_pd[110];
	J[22] -= x[73]*2.;
	J[48] = -sporttournament14_pd[109];
	J[21] = -x[48]*2. + 2.;
	J[38] += sporttournament14_pd[108];
	J[21] += x[38]*2.;
	J[34] -= sporttournament14_pd[107];
	J[21] -= x[34]*2.;
	J[72] -= sporttournament14_pd[106];
	J[21] -= x[72]*2.;
	J[87] += sporttournament14_pd[105];
	J[71] = x[87]*2. + -4.;
	J[49] += sporttournament14_pd[104];
	J[71] += x[49]*2.;
	J[87] -= sporttournament14_pd[103];
	J[19] = -x[87]*2. + 2.;
	J[36] -= sporttournament14_pd[102];
	J[19] -= x[36]*2.;
	J[90] -= sporttournament14_pd[101];
	J[18] = -x[90]*2. + -2.;
	J[71] += sporttournament14_pd[100];
	J[18] += x[71]*2.;
	J[59] += sporttournament14_pd[99];
	J[17] = x[59]*2. + -2.;
	J[56] += sporttournament14_pd[98];
	J[17] += x[56]*2.;
	J[34] -= sporttournament14_pd[97];
	J[17] -= x[34]*2.;
	J[71] += sporttournament14_pd[96];
	J[17] += x[71]*2.;
	J[18] += sporttournament14_pd[95];
	J[16] = x[18]*2. + -4.;
	J[88] += sporttournament14_pd[94];
	J[70] = x[88]*2. + -2.;
	J[86] += sporttournament14_pd[93];
	J[70] += x[86]*2.;
	J[53] = sporttournament14_pd[92];
	J[15] = x[53]*2. + -2.;
	J[30] += sporttournament14_pd[91];
	J[15] += x[30]*2.;
	J[70] -= sporttournament14_pd[90];
	J[15] -= x[70]*2.;
	J[88] -= sporttournament14_pd[89];
	J[14] = -x[88]*2. + 2.;
	J[51] -= sporttournament14_pd[88];
	J[14] -= x[51]*2.;
	J[26] += sporttournament14_pd[87];
	J[13] = x[26]*2. + -2.;
	J[25] += sporttournament14_pd[86];
	J[12] = x[25]*2. + -4.;
	J[13] += sporttournament14_pd[85];
	J[12] += x[13]*2.;
	J[79] += sporttournament14_pd[84];
	J[11] = x[79]*2. + -4.;
	J[26] += sporttournament14_pd[83];
	J[11] += x[26]*2.;
	J[78] += sporttournament14_pd[82];
	J[10] = x[78]*2. + -4.;
	J[11] += sporttournament14_pd[81];
	J[10] += x[11]*2.;
	J[62] += sporttournament14_pd[80];
	J[9] = x[62]*2. + -2.;
	J[10] += sporttournament14_pd[79];
	J[9] += x[10]*2.;
	J[52] += sporttournament14_pd[78];
	J[8] = x[52]*2. + -4.;
	J[9] += sporttournament14_pd[77];
	J[8] += x[9]*2.;
	J[48] += sporttournament14_pd[76];
	J[7] = x[48]*2. + -2.;
	J[22] += sporttournament14_pd[75];
	J[7] += x[22]*2.;
	J[9] -= sporttournament14_pd[74];
	J[7] -= x[9]*2.;
	J[33] += sporttournament14_pd[73];
	J[6] = x[33]*2. + -4.;
	J[18] += sporttournament14_pd[72];
	J[6] += x[18]*2.;
	J[8] += sporttournament14_pd[71];
	J[6] += x[8]*2.;
	J[7] += sporttournament14_pd[70];
	J[6] += x[7]*2.;
	J[56] += sporttournament14_pd[69];
	J[5] = x[56]*2. + -2.;
	J[52] += sporttournament14_pd[68];
	J[5] += x[52]*2.;
	J[19] -= sporttournament14_pd[67];
	J[5] -= x[19]*2.;
	J[16] += sporttournament14_pd[66];
	J[5] += x[16]*2.;
	J[64] += sporttournament14_pd[65];
	J[4] = x[64]*2. + -2.;
	J[32] += sporttournament14_pd[64];
	J[4] += x[32]*2.;
	J[70] += sporttournament14_pd[63];
	J[4] += x[70]*2.;
	J[32] += sporttournament14_pd[62];
	J[3] = x[32]*2. + -4.;
	J[30] += sporttournament14_pd[61];
	J[3] += x[30]*2.;
	J[16] += sporttournament14_pd[60];
	J[3] += x[16]*2.;
	J[12] += sporttournament14_pd[59];
	J[2] = x[12]*2. + -2.;
	J[11] += sporttournament14_pd[58];
	J[1] = x[11]*2. + -4.;
	J[2] += sporttournament14_pd[57];
	J[1] += x[2]*2.;
	J[73] += sporttournament14_pd[56];
	J[0] = x[73]*2. + -4.;
	J[12] += sporttournament14_pd[55];
	J[0] += x[12]*2.;
	J[63] += sporttournament14_pd[54];
	J[69] = x[63]*2. + -4.;
	J[60] += sporttournament14_pd[53];
	J[69] += x[60]*2.;
	J[72] += sporttournament14_pd[52];
	J[69] += x[72]*2.;
	J[0] += sporttournament14_pd[51];
	J[69] += x[0]*2.;
	J[48] += sporttournament14_pd[50];
	J[68] = x[48]*2. + -4.;
	J[32] += sporttournament14_pd[49];
	J[68] += x[32]*2.;
	J[19] += sporttournament14_pd[48];
	J[68] += x[19]*2.;
	J[68] += sporttournament14_pd[47];
	J[67] = x[68]*2. + -4.;
	J[64] -= sporttournament14_pd[46];
	J[66] = -x[64]*2. + -2.;
	J[16] += sporttournament14_pd[45];
	J[66] += x[16]*2.;
	J[67] += sporttournament14_pd[44];
	J[66] += x[67]*2.;
	J[56] -= sporttournament14_pd[43];
	J[65] = -x[56]*2. + -2.;
	J[67] += sporttournament14_pd[42];
	J[65] += x[67]*2.;
	J[66] += sporttournament14_pd[41];
	J[61] = x[66]*2. + -2.;
	J[1] += sporttournament14_pd[40];
	J[58] = x[1]*2. + -2.;
	J[60] += sporttournament14_pd[39];
	J[54] = x[60]*2. + -4.;
	J[0] += sporttournament14_pd[38];
	J[54] += x[0]*2.;
	J[58] += sporttournament14_pd[37];
	J[54] += x[58]*2.;
	J[62] += sporttournament14_pd[36];
	J[50] = x[62]*2. + -4.;
	J[10] += sporttournament14_pd[35];
	J[50] += x[10]*2.;
	J[1] += sporttournament14_pd[34];
	J[50] += x[1]*2.;
	J[48] -= sporttournament14_pd[33];
	J[44] = -x[48]*2. + -2.;
	J[34] += sporttournament14_pd[32];
	J[44] += x[34]*2.;
	J[67] += sporttournament14_pd[31];
	J[44] += x[67]*2.;
	J[33] += sporttournament14_pd[30];
	J[43] = x[33]*2. + -2.;
	J[4] -= sporttournament14_pd[29];
	J[43] -= x[4]*2.;
	J[44] += sporttournament14_pd[28];
	J[43] += x[44]*2.;
	J[59] -= sporttournament14_pd[27];
	J[41] = -x[59]*2. + -2.;
	J[61] += sporttournament14_pd[26];
	J[41] += x[61]*2.;
	J[43] += sporttournament14_pd[25];
	J[41] += x[43]*2.;
	J[15] += sporttournament14_pd[24];
	J[40] = x[15]*2. + -2.;
	J[54] += sporttournament14_pd[23];
	J[39] = x[54]*2. + -2.;
	J[60] -= sporttournament14_pd[22];
	J[37] = -x[60]*2. + -2.;
	J[50] += sporttournament14_pd[21];
	J[37] += x[50]*2.;
	J[39] += sporttournament14_pd[20];
	J[37] += x[39]*2.;
	J[81] += sporttournament14_pd[19];
	J[35] = x[81]*2. + -2.;
	J[37] += sporttournament14_pd[18];
	J[35] += x[37]*2.;
	J[55] += sporttournament14_pd[17];
	J[31] = x[55]*2. + -4.;
	J[3] += sporttournament14_pd[16];
	J[31] += x[3]*2.;
	J[65] += sporttournament14_pd[15];
	J[31] += x[65]*2.;
	J[84] -= sporttournament14_pd[14];
	J[29] = -x[84]*2. + 2.;
	J[53] -= sporttournament14_pd[13];
	J[29] -= x[53]*2.;
	J[61] -= sporttournament14_pd[12];
	J[29] -= x[61]*2.;
	J[31] += sporttournament14_pd[11];
	J[29] += x[31]*2.;
	J[51] += sporttournament14_pd[10];
	J[24] = x[51]*2. + -4.;
	J[65] += sporttournament14_pd[9];
	J[24] += x[65]*2.;
	J[41] += sporttournament14_pd[8];
	J[24] += x[41]*2.;
	J[83] -= sporttournament14_pd[7];
	J[23] = -x[83]*2. + -2.;
	J[61] += sporttournament14_pd[6];
	J[23] += x[61]*2.;
	J[40] += sporttournament14_pd[5];
	J[23] += x[40]*2.;
	J[24] += sporttournament14_pd[4];
	J[23] += x[24]*2.;
	J[47] += sporttournament14_pd[3];
	J[20] = x[47]*2. + -2.;
	J[46] += sporttournament14_pd[2];
	J[20] += x[46]*2.;
	J[36] -= sporttournament14_pd[1];
	J[20] -= x[36]*2.;
	J[8] += sporttournament14_pd[0];
	J[20] += x[8]*2.;
	J[91] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
