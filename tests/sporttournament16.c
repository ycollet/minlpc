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
 fint sporttournament16_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament16_funcom_[249] = {
	121 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	121 /* nzc */,
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
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,

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

 real sporttournament16_boundc_[1+242+2] /* Infinity, variable bounds, constraint bounds */ = {
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

 real sporttournament16_x0comn_[121] = {
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

 static real sporttournament16_pd[224];
static real sporttournament16_old_x[121];
static int sporttournament16_xkind = -1;

 static int
sporttournament16_xcheck(real *x)
{
	real *x1 = sporttournament16_old_x, *xe = x + 121;
	errno = 0;
	if (sporttournament16_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament16_xkind = 0;
	return 1;
	}
 real
sporttournament16_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament16_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[120];
	;}

	if (wantfg & 2) {
	g[120] = 1.;
	}

	return rv;
}

 void
sporttournament16_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament16_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament16_pd[0] = 2. * x[0];
	v[0] = sporttournament16_pd[0] * x[2];
	sporttournament16_pd[1] = 2. * x[0];
	v[1] = sporttournament16_pd[1] * x[4];
	v[0] += v[1];
	sporttournament16_pd[2] = 2. * x[0];
	v[1] = sporttournament16_pd[2] * x[37];
	v[0] += v[1];
	sporttournament16_pd[3] = 2. * x[0];
	v[1] = sporttournament16_pd[3] * x[49];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[4] = 2. * x[1];
	v[2] = sporttournament16_pd[4] * x[4];
	v[0] += v[2];
	sporttournament16_pd[5] = 2. * x[1];
	v[2] = sporttournament16_pd[5] * x[6];
	v[0] += v[2];
	sporttournament16_pd[6] = 2. * x[1];
	v[2] = sporttournament16_pd[6] * x[24];
	v[0] += v[2];
	sporttournament16_pd[7] = 2. * x[1];
	v[2] = sporttournament16_pd[7] * x[67];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[8] = 2. * x[2];
	v[1] = sporttournament16_pd[8] * x[5];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[9] = 2. * x[2];
	v[2] = sporttournament16_pd[9] * x[25];
	v[0] += v[2];
	sporttournament16_pd[10] = 2. * x[2];
	v[2] = sporttournament16_pd[10] * x[38];
	v[0] += v[2];
	sporttournament16_pd[11] = 2. * x[3];
	v[2] = sporttournament16_pd[11] * x[6];
	v[0] += v[2];
	sporttournament16_pd[12] = 2. * x[3];
	v[2] = sporttournament16_pd[12] * x[9];
	v[0] += v[2];
	sporttournament16_pd[13] = 2. * x[3];
	v[2] = sporttournament16_pd[13] * x[17];
	v[0] += v[2];
	sporttournament16_pd[14] = 2. * x[3];
	v[2] = sporttournament16_pd[14] * x[18];
	v[0] += v[2];
	sporttournament16_pd[15] = 2. * x[4];
	v[2] = sporttournament16_pd[15] * x[7];
	v[0] += v[2];
	sporttournament16_pd[16] = 2. * x[4];
	v[2] = sporttournament16_pd[16] * x[38];
	v[0] += v[2];
	sporttournament16_pd[17] = 2. * x[5];
	v[2] = sporttournament16_pd[17] * x[6];
	v[0] += v[2];
	sporttournament16_pd[18] = 2. * x[5];
	v[2] = sporttournament16_pd[18] * x[14];
	v[0] += v[2];
	sporttournament16_pd[19] = 2. * x[5];
	v[2] = sporttournament16_pd[19] * x[98];
	v[0] += v[2];
	sporttournament16_pd[20] = 2. * x[6];
	v[2] = sporttournament16_pd[20] * x[10];
	v[0] += v[2];
	sporttournament16_pd[21] = 2. * x[7];
	v[2] = sporttournament16_pd[21] * x[9];
	v[0] += v[2];
	sporttournament16_pd[22] = 2. * x[7];
	v[2] = sporttournament16_pd[22] * x[14];
	v[0] += v[2];
	sporttournament16_pd[23] = 2. * x[7];
	v[2] = sporttournament16_pd[23] * x[19];
	v[0] += v[2];
	sporttournament16_pd[24] = 2. * x[8];
	v[2] = sporttournament16_pd[24] * x[22];
	v[0] += v[2];
	sporttournament16_pd[25] = 2. * x[8];
	v[2] = sporttournament16_pd[25] * x[63];
	v[0] += v[2];
	sporttournament16_pd[26] = 2. * x[9];
	v[2] = sporttournament16_pd[26] * x[13];
	v[0] += v[2];
	sporttournament16_pd[27] = 2. * x[9];
	v[2] = sporttournament16_pd[27] * x[99];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[28] = 2. * x[10];
	v[1] = sporttournament16_pd[28] * x[19];
	v[0] += v[1];
	sporttournament16_pd[29] = 2. * x[10];
	v[1] = sporttournament16_pd[29] * x[26];
	v[0] += v[1];
	sporttournament16_pd[30] = 2. * x[10];
	v[1] = sporttournament16_pd[30] * x[70];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[31] = 2. * x[11];
	v[2] = sporttournament16_pd[31] * x[19];
	v[0] += v[2];
	sporttournament16_pd[32] = 2. * x[11];
	v[2] = sporttournament16_pd[32] * x[28];
	v[0] += v[2];
	sporttournament16_pd[33] = 2. * x[11];
	v[2] = sporttournament16_pd[33] * x[98];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[34] = 2. * x[11];
	v[1] = sporttournament16_pd[34] * x[103];
	v[0] += v[1];
	sporttournament16_pd[35] = 2. * x[12];
	v[1] = sporttournament16_pd[35] * x[17];
	v[0] += v[1];
	sporttournament16_pd[36] = 2. * x[12];
	v[1] = sporttournament16_pd[36] * x[24];
	v[0] += v[1];
	sporttournament16_pd[37] = 2. * x[13];
	v[1] = sporttournament16_pd[37] * x[26];
	v[0] += v[1];
	sporttournament16_pd[38] = 2. * x[13];
	v[1] = sporttournament16_pd[38] * x[39];
	v[0] += v[1];
	sporttournament16_pd[39] = 2. * x[13];
	v[1] = sporttournament16_pd[39] * x[50];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[40] = 2. * x[14];
	v[2] = sporttournament16_pd[40] * x[20];
	v[0] += v[2];
	sporttournament16_pd[41] = 2. * x[14];
	v[2] = sporttournament16_pd[41] * x[74];
	v[0] += v[2];
	sporttournament16_pd[42] = 2. * x[15];
	v[2] = sporttournament16_pd[42] * x[26];
	v[0] += v[2];
	sporttournament16_pd[43] = 2. * x[15];
	v[2] = sporttournament16_pd[43] * x[28];
	v[0] += v[2];
	sporttournament16_pd[44] = 2. * x[15];
	v[2] = sporttournament16_pd[44] * x[42];
	v[0] += v[2];
	sporttournament16_pd[45] = 2. * x[15];
	v[2] = sporttournament16_pd[45] * x[98];
	v[0] += v[2];
	sporttournament16_pd[46] = 2. * x[16];
	v[2] = sporttournament16_pd[46] * x[47];
	v[0] += v[2];
	sporttournament16_pd[47] = 2. * x[16];
	v[2] = sporttournament16_pd[47] * x[101];
	v[0] += v[2];
	sporttournament16_pd[48] = 2. * x[17];
	v[2] = sporttournament16_pd[48] * x[25];
	v[0] += v[2];
	sporttournament16_pd[49] = 2. * x[17];
	v[2] = sporttournament16_pd[49] * x[97];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[50] = 2. * x[18];
	v[1] = sporttournament16_pd[50] * x[25];
	v[0] += v[1];
	sporttournament16_pd[51] = 2. * x[18];
	v[1] = sporttournament16_pd[51] * x[102];
	v[0] += v[1];
	sporttournament16_pd[52] = 2. * x[18];
	v[1] = sporttournament16_pd[52] * x[105];
	v[0] += v[1];
	sporttournament16_pd[53] = 2. * x[19];
	v[1] = sporttournament16_pd[53] * x[27];
	v[0] += v[1];
	sporttournament16_pd[54] = 2. * x[20];
	v[1] = sporttournament16_pd[54] * x[39];
	v[0] += v[1];
	sporttournament16_pd[55] = 2. * x[20];
	v[1] = sporttournament16_pd[55] * x[42];
	v[0] += v[1];
	sporttournament16_pd[56] = 2. * x[20];
	v[1] = sporttournament16_pd[56] * x[53];
	v[0] += v[1];
	sporttournament16_pd[57] = 2. * x[21];
	v[1] = sporttournament16_pd[57] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[58] = 2. * x[21];
	v[2] = sporttournament16_pd[58] * x[46];
	v[0] += v[2];
	sporttournament16_pd[59] = 2. * x[21];
	v[2] = sporttournament16_pd[59] * x[62];
	v[0] += v[2];
	sporttournament16_pd[60] = 2. * x[21];
	v[2] = sporttournament16_pd[60] * x[106];
	v[0] += v[2];
	sporttournament16_pd[61] = 2. * x[22];
	v[2] = sporttournament16_pd[61] * x[23];
	v[0] += v[2];
	sporttournament16_pd[62] = 2. * x[22];
	v[2] = sporttournament16_pd[62] * x[61];
	v[0] += v[2];
	sporttournament16_pd[63] = 2. * x[23];
	v[2] = sporttournament16_pd[63] * x[62];
	v[0] += v[2];
	sporttournament16_pd[64] = 2. * x[24];
	v[2] = sporttournament16_pd[64] * x[104];
	v[0] += v[2];
	sporttournament16_pd[65] = 2. * x[24];
	v[2] = sporttournament16_pd[65] * x[111];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[66] = 2. * x[25];
	v[1] = sporttournament16_pd[66] * x[113];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[67] = 2. * x[26];
	v[2] = sporttournament16_pd[67] * x[41];
	v[0] += v[2];
	sporttournament16_pd[68] = 2. * x[27];
	v[2] = sporttournament16_pd[68] * x[53];
	v[0] += v[2];
	sporttournament16_pd[69] = 2. * x[27];
	v[2] = sporttournament16_pd[69] * x[73];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[70] = 2. * x[27];
	v[1] = sporttournament16_pd[70] * x[75];
	v[0] += v[1];
	sporttournament16_pd[71] = 2. * x[28];
	v[1] = sporttournament16_pd[71] * x[29];
	v[0] += v[1];
	sporttournament16_pd[72] = 2. * x[28];
	v[1] = sporttournament16_pd[72] * x[77];
	v[0] += v[1];
	sporttournament16_pd[73] = 2. * x[29];
	v[1] = sporttournament16_pd[73] * x[30];
	v[0] += v[1];
	sporttournament16_pd[74] = 2. * x[29];
	v[1] = sporttournament16_pd[74] * x[75];
	v[0] += v[1];
	sporttournament16_pd[75] = 2. * x[29];
	v[1] = sporttournament16_pd[75] * x[79];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[76] = 2. * x[30];
	v[2] = sporttournament16_pd[76] * x[31];
	v[0] += v[2];
	sporttournament16_pd[77] = 2. * x[30];
	v[2] = sporttournament16_pd[77] * x[77];
	v[0] += v[2];
	sporttournament16_pd[78] = 2. * x[30];
	v[2] = sporttournament16_pd[78] * x[89];
	v[0] += v[2];
	sporttournament16_pd[79] = 2. * x[31];
	v[2] = sporttournament16_pd[79] * x[60];
	v[0] += v[2];
	sporttournament16_pd[80] = 2. * x[31];
	v[2] = sporttournament16_pd[80] * x[80];
	v[0] += v[2];
	sporttournament16_pd[81] = 2. * x[31];
	v[2] = sporttournament16_pd[81] * x[106];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[82] = 2. * x[32];
	v[1] = sporttournament16_pd[82] * x[34];
	v[0] += v[1];
	sporttournament16_pd[83] = 2. * x[32];
	v[1] = sporttournament16_pd[83] * x[59];
	v[0] += v[1];
	sporttournament16_pd[84] = 2. * x[32];
	v[1] = sporttournament16_pd[84] * x[107];
	v[0] += v[1];
	sporttournament16_pd[85] = 2. * x[32];
	v[1] = sporttournament16_pd[85] * x[109];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[86] = 2. * x[33];
	v[2] = sporttournament16_pd[86] * x[47];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[87] = 2. * x[33];
	v[1] = sporttournament16_pd[87] * x[86];
	v[0] += v[1];
	sporttournament16_pd[88] = 2. * x[33];
	v[1] = sporttournament16_pd[88] * x[88];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[89] = 2. * x[33];
	v[2] = sporttournament16_pd[89] * x[93];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[90] = 2. * x[34];
	v[1] = sporttournament16_pd[90] * x[60];
	v[0] += v[1];
	sporttournament16_pd[91] = 2. * x[34];
	v[1] = sporttournament16_pd[91] * x[86];
	v[0] += v[1];
	sporttournament16_pd[92] = 2. * x[34];
	v[1] = sporttournament16_pd[92] * x[101];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[93] = 2. * x[35];
	v[2] = sporttournament16_pd[93] * x[36];
	v[0] += v[2];
	sporttournament16_pd[94] = 2. * x[35];
	v[2] = sporttournament16_pd[94] * x[85];
	v[0] += v[2];
	sporttournament16_pd[95] = 2. * x[35];
	v[2] = sporttournament16_pd[95] * x[107];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[96] = 2. * x[35];
	v[1] = sporttournament16_pd[96] * x[108];
	v[0] += v[1];
	sporttournament16_pd[97] = 2. * x[36];
	v[1] = sporttournament16_pd[97] * x[86];
	v[0] += v[1];
	sporttournament16_pd[98] = 2. * x[37];
	v[1] = sporttournament16_pd[98] * x[104];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[99] = 2. * x[37];
	v[2] = sporttournament16_pd[99] * x[105];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[100] = 2. * x[37];
	v[1] = sporttournament16_pd[100] * x[115];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[101] = 2. * x[38];
	v[2] = sporttournament16_pd[101] * x[40];
	v[0] += v[2];
	sporttournament16_pd[102] = 2. * x[38];
	v[2] = sporttournament16_pd[102] * x[98];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[103] = 2. * x[39];
	v[1] = sporttournament16_pd[103] * x[52];
	v[0] += v[1];
	sporttournament16_pd[104] = 2. * x[39];
	v[1] = sporttournament16_pd[104] * x[72];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[105] = 2. * x[40];
	v[2] = sporttournament16_pd[105] * x[51];
	v[0] += v[2];
	sporttournament16_pd[106] = 2. * x[40];
	v[2] = sporttournament16_pd[106] * x[52];
	v[0] += v[2];
	sporttournament16_pd[107] = 2. * x[40];
	v[2] = sporttournament16_pd[107] * x[74];
	v[0] += v[2];
	sporttournament16_pd[108] = 2. * x[41];
	v[2] = sporttournament16_pd[108] * x[43];
	v[0] += v[2];
	sporttournament16_pd[109] = 2. * x[41];
	v[2] = sporttournament16_pd[109] * x[75];
	v[0] += v[2];
	sporttournament16_pd[110] = 2. * x[41];
	v[2] = sporttournament16_pd[110] * x[114];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[111] = 2. * x[42];
	v[1] = sporttournament16_pd[111] * x[44];
	v[0] += v[1];
	sporttournament16_pd[112] = 2. * x[42];
	v[1] = sporttournament16_pd[112] * x[55];
	v[0] += v[1];
	sporttournament16_pd[113] = 2. * x[43];
	v[1] = sporttournament16_pd[113] * x[44];
	v[0] += v[1];
	sporttournament16_pd[114] = 2. * x[43];
	v[1] = sporttournament16_pd[114] * x[52];
	v[0] += v[1];
	sporttournament16_pd[115] = 2. * x[43];
	v[1] = sporttournament16_pd[115] * x[91];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[116] = 2. * x[44];
	v[2] = sporttournament16_pd[116] * x[95];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[117] = 2. * x[44];
	v[1] = sporttournament16_pd[117] * x[110];
	v[0] += v[1];
	sporttournament16_pd[118] = 2. * x[45];
	v[1] = sporttournament16_pd[118] * x[82];
	v[0] += v[1];
	sporttournament16_pd[119] = 2. * x[45];
	v[1] = sporttournament16_pd[119] * x[96];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[120] = 2. * x[45];
	v[2] = sporttournament16_pd[120] * x[106];
	v[0] += v[2];
	sporttournament16_pd[121] = 2. * x[45];
	v[2] = sporttournament16_pd[121] * x[110];
	v[0] += v[2];
	sporttournament16_pd[122] = 2. * x[46];
	v[2] = sporttournament16_pd[122] * x[81];
	v[0] += v[2];
	sporttournament16_pd[123] = 2. * x[46];
	v[2] = sporttournament16_pd[123] * x[84];
	v[0] += v[2];
	sporttournament16_pd[124] = 2. * x[46];
	v[2] = sporttournament16_pd[124] * x[109];
	v[0] += v[2];
	sporttournament16_pd[125] = 2. * x[47];
	v[2] = sporttournament16_pd[125] * x[107];
	v[0] += v[2];
	sporttournament16_pd[126] = 2. * x[47];
	v[2] = sporttournament16_pd[126] * x[117];
	v[0] += v[2];
	sporttournament16_pd[127] = 2. * x[48];
	v[2] = sporttournament16_pd[127] * x[67];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[128] = 2. * x[48];
	v[1] = sporttournament16_pd[128] * x[116];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[129] = 2. * x[49];
	v[2] = sporttournament16_pd[129] * x[65];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[130] = 2. * x[49];
	v[1] = sporttournament16_pd[130] * x[68];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[131] = 2. * x[49];
	v[2] = sporttournament16_pd[131] * x[102];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[132] = 2. * x[50];
	v[1] = sporttournament16_pd[132] * x[68];
	v[0] += v[1];
	sporttournament16_pd[133] = 2. * x[50];
	v[1] = sporttournament16_pd[133] * x[71];
	v[0] += v[1];
	sporttournament16_pd[134] = 2. * x[50];
	v[1] = sporttournament16_pd[134] * x[115];
	v[0] += v[1];
	sporttournament16_pd[135] = 2. * x[51];
	v[1] = sporttournament16_pd[135] * x[69];
	v[0] += v[1];
	sporttournament16_pd[136] = 2. * x[51];
	v[1] = sporttournament16_pd[136] * x[113];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[137] = 2. * x[51];
	v[2] = sporttournament16_pd[137] * x[114];
	v[0] += v[2];
	sporttournament16_pd[138] = 2. * x[52];
	v[2] = sporttournament16_pd[138] * x[54];
	v[0] += v[2];
	sporttournament16_pd[139] = 2. * x[53];
	v[2] = sporttournament16_pd[139] * x[56];
	v[0] += v[2];
	sporttournament16_pd[140] = 2. * x[53];
	v[2] = sporttournament16_pd[140] * x[100];
	v[0] += v[2];
	sporttournament16_pd[141] = 2. * x[54];
	v[2] = sporttournament16_pd[141] * x[56];
	v[0] += v[2];
	sporttournament16_pd[142] = 2. * x[54];
	v[2] = sporttournament16_pd[142] * x[91];
	v[0] += v[2];
	sporttournament16_pd[143] = 2. * x[54];
	v[2] = sporttournament16_pd[143] * x[119];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[144] = 2. * x[55];
	v[1] = sporttournament16_pd[144] * x[58];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[145] = 2. * x[55];
	v[2] = sporttournament16_pd[145] * x[96];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[146] = 2. * x[55];
	v[1] = sporttournament16_pd[146] * x[103];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[147] = 2. * x[56];
	v[2] = sporttournament16_pd[147] * x[58];
	v[0] += v[2];
	sporttournament16_pd[148] = 2. * x[56];
	v[2] = sporttournament16_pd[148] * x[95];
	v[0] += v[2];
	sporttournament16_pd[149] = 2. * x[57];
	v[2] = sporttournament16_pd[149] * x[59];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[150] = 2. * x[57];
	v[1] = sporttournament16_pd[150] * x[91];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[151] = 2. * x[57];
	v[2] = sporttournament16_pd[151] * x[94];
	v[0] += v[2];
	sporttournament16_pd[152] = 2. * x[57];
	v[2] = sporttournament16_pd[152] * x[100];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[153] = 2. * x[58];
	v[1] = sporttournament16_pd[153] * x[59];
	v[0] += v[1];
	sporttournament16_pd[154] = 2. * x[58];
	v[1] = sporttournament16_pd[154] * x[109];
	v[0] += v[1];
	sporttournament16_pd[155] = 2. * x[59];
	v[1] = sporttournament16_pd[155] * x[93];
	v[0] += v[1];
	sporttournament16_pd[156] = 2. * x[60];
	v[1] = sporttournament16_pd[156] * x[61];
	v[0] += v[1];
	sporttournament16_pd[157] = 2. * x[60];
	v[1] = sporttournament16_pd[157] * x[90];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[158] = 2. * x[61];
	v[2] = sporttournament16_pd[158] * x[63];
	v[0] += v[2];
	sporttournament16_pd[159] = 2. * x[61];
	v[2] = sporttournament16_pd[159] * x[93];
	v[0] += v[2];
	sporttournament16_pd[160] = 2. * x[62];
	v[2] = sporttournament16_pd[160] * x[64];
	v[0] += v[2];
	sporttournament16_pd[161] = 2. * x[62];
	v[2] = sporttournament16_pd[161] * x[92];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[162] = 2. * x[63];
	v[1] = sporttournament16_pd[162] * x[64];
	v[0] += v[1];
	sporttournament16_pd[163] = 2. * x[63];
	v[1] = sporttournament16_pd[163] * x[92];
	v[0] += v[1];
	sporttournament16_pd[164] = 2. * x[65];
	v[1] = sporttournament16_pd[164] * x[112];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[165] = 2. * x[66];
	v[2] = sporttournament16_pd[165] * x[67];
	v[0] += v[2];
	sporttournament16_pd[166] = 2. * x[66];
	v[2] = sporttournament16_pd[166] * x[112];
	v[0] += v[2];
	sporttournament16_pd[167] = 2. * x[67];
	v[2] = sporttournament16_pd[167] * x[99];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[168] = 2. * x[68];
	v[1] = sporttournament16_pd[168] * x[70];
	v[0] += v[1];
	sporttournament16_pd[169] = 2. * x[68];
	v[1] = sporttournament16_pd[169] * x[116];
	v[0] += v[1];
	sporttournament16_pd[170] = 2. * x[69];
	v[1] = sporttournament16_pd[170] * x[72];
	v[0] += v[1];
	sporttournament16_pd[171] = 2. * x[69];
	v[1] = sporttournament16_pd[171] * x[111];
	v[0] += v[1];
	sporttournament16_pd[172] = 2. * x[69];
	v[1] = sporttournament16_pd[172] * x[115];
	v[0] += v[1];
	sporttournament16_pd[173] = 2. * x[70];
	v[1] = sporttournament16_pd[173] * x[72];
	v[0] += v[1];
	sporttournament16_pd[174] = 2. * x[70];
	v[1] = sporttournament16_pd[174] * x[99];
	v[0] += v[1];
	sporttournament16_pd[175] = 2. * x[71];
	v[1] = sporttournament16_pd[175] * x[73];
	v[0] += v[1];
	sporttournament16_pd[176] = 2. * x[71];
	v[1] = sporttournament16_pd[176] * x[113];
	v[0] += v[1];
	sporttournament16_pd[177] = 2. * x[71];
	v[1] = sporttournament16_pd[177] * x[114];
	v[0] += v[1];
	sporttournament16_pd[178] = 2. * x[72];
	v[1] = sporttournament16_pd[178] * x[73];
	v[0] += v[1];
	sporttournament16_pd[179] = 2. * x[73];
	v[1] = sporttournament16_pd[179] * x[119];
	v[0] += v[1];
	sporttournament16_pd[180] = 2. * x[74];
	v[1] = sporttournament16_pd[180] * x[76];
	v[0] += v[1];
	sporttournament16_pd[181] = 2. * x[74];
	v[1] = sporttournament16_pd[181] * x[103];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[182] = 2. * x[75];
	v[2] = sporttournament16_pd[182] * x[78];
	v[0] += v[2];
	sporttournament16_pd[183] = 2. * x[76];
	v[2] = sporttournament16_pd[183] * x[77];
	v[0] += v[2];
	sporttournament16_pd[184] = 2. * x[76];
	v[2] = sporttournament16_pd[184] * x[78];
	v[0] += v[2];
	sporttournament16_pd[185] = 2. * x[76];
	v[2] = sporttournament16_pd[185] * x[119];
	v[0] += v[2];
	sporttournament16_pd[186] = 2. * x[77];
	v[2] = sporttournament16_pd[186] * x[80];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[187] = 2. * x[78];
	v[1] = sporttournament16_pd[187] * x[79];
	v[0] += v[1];
	sporttournament16_pd[188] = 2. * x[78];
	v[1] = sporttournament16_pd[188] * x[80];
	v[0] += v[1];
	sporttournament16_pd[189] = 2. * x[79];
	v[1] = sporttournament16_pd[189] * x[81];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[190] = 2. * x[79];
	v[2] = sporttournament16_pd[190] * x[89];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[191] = 2. * x[80];
	v[1] = sporttournament16_pd[191] * x[81];
	v[0] += v[1];
	sporttournament16_pd[192] = 2. * x[81];
	v[1] = sporttournament16_pd[192] * x[83];
	v[0] += v[1];
	sporttournament16_pd[193] = 2. * x[82];
	v[1] = sporttournament16_pd[193] * x[84];
	v[0] += v[1];
	sporttournament16_pd[194] = 2. * x[82];
	v[1] = sporttournament16_pd[194] * x[85];
	v[0] += v[1];
	sporttournament16_pd[195] = 2. * x[82];
	v[1] = sporttournament16_pd[195] * x[94];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[196] = 2. * x[83];
	v[2] = sporttournament16_pd[196] * x[85];
	v[0] += v[2];
	sporttournament16_pd[197] = 2. * x[83];
	v[2] = sporttournament16_pd[197] * x[92];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[198] = 2. * x[83];
	v[1] = sporttournament16_pd[198] * x[94];
	v[0] += v[1];
	sporttournament16_pd[199] = 2. * x[84];
	v[1] = sporttournament16_pd[199] * x[101];
	v[0] += v[1];
	sporttournament16_pd[200] = 2. * x[84];
	v[1] = sporttournament16_pd[200] * x[118];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[201] = 2. * x[85];
	v[2] = sporttournament16_pd[201] * x[118];
	v[0] += v[2];
	sporttournament16_pd[202] = 2. * x[86];
	v[2] = sporttournament16_pd[202] * x[87];
	v[0] += v[2];
	sporttournament16_pd[203] = 2. * x[87];
	v[2] = sporttournament16_pd[203] * x[118];
	v[0] += v[2];
	sporttournament16_pd[204] = 2. * x[88];
	v[2] = sporttournament16_pd[204] * x[89];
	v[0] += v[2];
	sporttournament16_pd[205] = 2. * x[88];
	v[2] = sporttournament16_pd[205] * x[90];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[206] = 2. * x[88];
	v[1] = sporttournament16_pd[206] * x[92];
	v[0] += v[1];
	sporttournament16_pd[207] = 2. * x[89];
	v[1] = sporttournament16_pd[207] * x[93];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[208] = 2. * x[90];
	v[2] = sporttournament16_pd[208] * x[95];
	v[0] += v[2];
	sporttournament16_pd[209] = 2. * x[90];
	v[2] = sporttournament16_pd[209] * x[96];
	v[0] += v[2];
	sporttournament16_pd[210] = 2. * x[91];
	v[2] = sporttournament16_pd[210] * x[96];
	v[0] += v[2];
	sporttournament16_pd[211] = 2. * x[94];
	v[2] = sporttournament16_pd[211] * x[95];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[212] = 2. * x[97];
	v[1] = sporttournament16_pd[212] * x[116];
	v[0] += v[1];
	sporttournament16_pd[213] = 2. * x[99];
	v[1] = sporttournament16_pd[213] * x[112];
	v[0] += v[1];
	sporttournament16_pd[214] = 2. * x[100];
	v[1] = sporttournament16_pd[214] * x[103];
	v[0] += v[1];
	sporttournament16_pd[215] = 2. * x[100];
	v[1] = sporttournament16_pd[215] * x[110];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[216] = 2. * x[101];
	v[2] = sporttournament16_pd[216] * x[108];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[217] = 2. * x[106];
	v[1] = sporttournament16_pd[217] * x[107];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[218] = 2. * x[109];
	v[2] = sporttournament16_pd[218] * x[110];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[219] = 2. * x[111];
	v[1] = sporttournament16_pd[219] * x[112];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[220] = 2. * x[111];
	v[2] = sporttournament16_pd[220] * x[113];
	v[0] += v[2];
	sporttournament16_pd[221] = 2. * x[114];
	v[2] = sporttournament16_pd[221] * x[119];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament16_pd[222] = 2. * x[115];
	v[1] = sporttournament16_pd[222] * x[116];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament16_pd[223] = 2. * x[117];
	v[2] = sporttournament16_pd[223] * x[118];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -4.*x[3];
	t1 += -4.*x[4];
	t1 += -2.*x[5];
	t1 += -4.*x[6];
	t1 += -4.*x[7];
	t1 += -2.*x[8];
	t1 += -2.*x[9];
	t1 += -2.*x[10];
	t1 += -2.*x[11];
	t1 += -2.*x[12];
	t1 += -2.*x[13];
	t1 += -4.*x[14];
	t1 += -4.*x[15];
	t1 += -2.*x[16];
	t1 += -2.*x[17];
	t1 += -4.*x[18];
	t1 += -4.*x[19];
	t1 += -4.*x[20];
	t1 += -2.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += -2.*x[24];
	t1 += -2.*x[25];
	t1 += -4.*x[26];
	t1 += -2.*x[27];
	t1 += -4.*x[28];
	t1 += -2.*x[29];
	t1 += -4.*x[30];
	t1 += -2.*x[31];
	t1 += -2.*x[32];
	t1 += 2.*x[33];
	t1 += -2.*x[34];
	t1 += -2.*x[35];
	t1 += -2.*x[36];
	t1 += 2.*x[37];
	t1 += -2.*x[38];
	t1 += -2.*x[39];
	t1 += -4.*x[40];
	t1 += -2.*x[41];
	t1 += -4.*x[42];
	t1 += -2.*x[43];
	t1 += -2.*x[44];
	t1 += -2.*x[45];
	t1 += -4.*x[46];
	t1 += -2.*x[47];
	t1 += 2.*x[48];
	t1 += 4.*x[49];
	t1 += -2.*x[50];
	t1 += -2.*x[51];
	t1 += -4.*x[52];
	t1 += -4.*x[53];
	t1 += -2.*x[54];
	t1 += 2.*x[55];
	t1 += -4.*x[56];
	t1 += 2.*x[57];
	t1 += -2.*x[58];
	t1 += -2.*x[59];
	t1 += -2.*x[60];
	t1 += -4.*x[61];
	t1 += -2.*x[62];
	t1 += -4.*x[63];
	t1 += -2.*x[64];
	t1 += 2.*x[65];
	t1 += -2.*x[66];
	t1 += 2.*x[67];
	t1 += -2.*x[68];
	t1 += -4.*x[69];
	t1 += -2.*x[70];
	t1 += -4.*x[71];
	t1 += -2.*x[72];
	t1 += -2.*x[73];
	t1 += -2.*x[74];
	t1 += -4.*x[75];
	t1 += -4.*x[76];
	t1 += -2.*x[77];
	t1 += -4.*x[78];
	t1 += 2.*x[79];
	t1 += -2.*x[80];
	t1 += -2.*x[81];
	t1 += -2.*x[82];
	t1 += -2.*x[83];
	t1 += -2.*x[84];
	t1 += -4.*x[85];
	t1 += -4.*x[86];
	t1 += -2.*x[87];
	t1 += x[120];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[118] = -sporttournament16_pd[223];
	J[117] = -x[118]*2.;
	J[116] = -sporttournament16_pd[222];
	J[115] = -x[116]*2.;
	J[119] = -sporttournament16_pd[221];
	J[114] = -x[119]*2.;
	J[113] = sporttournament16_pd[220];
	J[111] = x[113]*2.;
	J[112] = -sporttournament16_pd[219];
	J[111] -= x[112]*2.;
	J[110] = -sporttournament16_pd[218];
	J[109] = -x[110]*2.;
	J[107] = -sporttournament16_pd[217];
	J[106] = -x[107]*2.;
	J[108] = -sporttournament16_pd[216];
	J[101] = -x[108]*2.;
	J[110] -= sporttournament16_pd[215];
	J[100] = -x[110]*2.;
	J[103] = sporttournament16_pd[214];
	J[100] += x[103]*2.;
	J[112] += sporttournament16_pd[213];
	J[99] = x[112]*2.;
	J[116] += sporttournament16_pd[212];
	J[97] = x[116]*2.;
	J[95] = -sporttournament16_pd[211];
	J[94] = -x[95]*2.;
	J[96] = sporttournament16_pd[210];
	J[91] = x[96]*2.;
	J[96] += sporttournament16_pd[209];
	J[90] = x[96]*2.;
	J[95] += sporttournament16_pd[208];
	J[90] += x[95]*2.;
	J[93] = -sporttournament16_pd[207];
	J[89] = -x[93]*2.;
	J[92] = sporttournament16_pd[206];
	J[88] = x[92]*2.;
	J[90] -= sporttournament16_pd[205];
	J[88] -= x[90]*2.;
	J[89] += sporttournament16_pd[204];
	J[88] += x[89]*2.;
	J[118] += sporttournament16_pd[203];
	J[87] = x[118]*2. + -2.;
	J[87] += sporttournament16_pd[202];
	J[86] = x[87]*2. + -4.;
	J[118] += sporttournament16_pd[201];
	J[85] = x[118]*2. + -4.;
	J[118] -= sporttournament16_pd[200];
	J[84] = -x[118]*2. + -2.;
	J[101] += sporttournament16_pd[199];
	J[84] += x[101]*2.;
	J[94] += sporttournament16_pd[198];
	J[83] = x[94]*2. + -2.;
	J[92] -= sporttournament16_pd[197];
	J[83] -= x[92]*2.;
	J[85] += sporttournament16_pd[196];
	J[83] += x[85]*2.;
	J[94] -= sporttournament16_pd[195];
	J[82] = -x[94]*2. + -2.;
	J[85] += sporttournament16_pd[194];
	J[82] += x[85]*2.;
	J[84] += sporttournament16_pd[193];
	J[82] += x[84]*2.;
	J[83] += sporttournament16_pd[192];
	J[81] = x[83]*2. + -2.;
	J[81] += sporttournament16_pd[191];
	J[80] = x[81]*2. + -2.;
	J[89] -= sporttournament16_pd[190];
	J[79] = -x[89]*2. + 2.;
	J[81] -= sporttournament16_pd[189];
	J[79] -= x[81]*2.;
	J[80] += sporttournament16_pd[188];
	J[78] = x[80]*2. + -4.;
	J[79] += sporttournament16_pd[187];
	J[78] += x[79]*2.;
	J[80] -= sporttournament16_pd[186];
	J[77] = -x[80]*2. + -2.;
	J[119] += sporttournament16_pd[185];
	J[76] = x[119]*2. + -4.;
	J[78] += sporttournament16_pd[184];
	J[76] += x[78]*2.;
	J[77] += sporttournament16_pd[183];
	J[76] += x[77]*2.;
	J[78] += sporttournament16_pd[182];
	J[75] = x[78]*2. + -4.;
	J[103] -= sporttournament16_pd[181];
	J[74] = -x[103]*2. + -2.;
	J[76] += sporttournament16_pd[180];
	J[74] += x[76]*2.;
	J[119] += sporttournament16_pd[179];
	J[73] = x[119]*2. + -2.;
	J[73] += sporttournament16_pd[178];
	J[72] = x[73]*2. + -2.;
	J[114] += sporttournament16_pd[177];
	J[71] = x[114]*2. + -4.;
	J[113] += sporttournament16_pd[176];
	J[71] += x[113]*2.;
	J[73] += sporttournament16_pd[175];
	J[71] += x[73]*2.;
	J[99] += sporttournament16_pd[174];
	J[70] = x[99]*2. + -2.;
	J[72] += sporttournament16_pd[173];
	J[70] += x[72]*2.;
	J[115] += sporttournament16_pd[172];
	J[69] = x[115]*2. + -4.;
	J[111] += sporttournament16_pd[171];
	J[69] += x[111]*2.;
	J[72] += sporttournament16_pd[170];
	J[69] += x[72]*2.;
	J[116] += sporttournament16_pd[169];
	J[68] = x[116]*2. + -2.;
	J[70] += sporttournament16_pd[168];
	J[68] += x[70]*2.;
	J[99] -= sporttournament16_pd[167];
	J[67] = -x[99]*2. + 2.;
	J[112] += sporttournament16_pd[166];
	J[66] = x[112]*2. + -2.;
	J[67] += sporttournament16_pd[165];
	J[66] += x[67]*2.;
	J[112] -= sporttournament16_pd[164];
	J[65] = -x[112]*2. + 2.;
	J[92] += sporttournament16_pd[163];
	J[63] = x[92]*2. + -4.;
	J[64] = sporttournament16_pd[162] + -2.;
	J[63] += x[64]*2.;
	J[92] -= sporttournament16_pd[161];
	J[62] = -x[92]*2. + -2.;
	J[64] += sporttournament16_pd[160];
	J[62] += x[64]*2.;
	J[93] += sporttournament16_pd[159];
	J[61] = x[93]*2. + -4.;
	J[63] += sporttournament16_pd[158];
	J[61] += x[63]*2.;
	J[90] -= sporttournament16_pd[157];
	J[60] = -x[90]*2. + -2.;
	J[61] += sporttournament16_pd[156];
	J[60] += x[61]*2.;
	J[93] += sporttournament16_pd[155];
	J[59] = x[93]*2. + -2.;
	J[109] += sporttournament16_pd[154];
	J[58] = x[109]*2. + -2.;
	J[59] += sporttournament16_pd[153];
	J[58] += x[59]*2.;
	J[100] -= sporttournament16_pd[152];
	J[57] = -x[100]*2. + 2.;
	J[94] += sporttournament16_pd[151];
	J[57] += x[94]*2.;
	J[91] -= sporttournament16_pd[150];
	J[57] -= x[91]*2.;
	J[59] -= sporttournament16_pd[149];
	J[57] -= x[59]*2.;
	J[95] += sporttournament16_pd[148];
	J[56] = x[95]*2. + -4.;
	J[58] += sporttournament16_pd[147];
	J[56] += x[58]*2.;
	J[103] -= sporttournament16_pd[146];
	J[55] = -x[103]*2. + 2.;
	J[96] -= sporttournament16_pd[145];
	J[55] -= x[96]*2.;
	J[58] -= sporttournament16_pd[144];
	J[55] -= x[58]*2.;
	J[119] -= sporttournament16_pd[143];
	J[54] = -x[119]*2. + -2.;
	J[91] += sporttournament16_pd[142];
	J[54] += x[91]*2.;
	J[56] += sporttournament16_pd[141];
	J[54] += x[56]*2.;
	J[100] += sporttournament16_pd[140];
	J[53] = x[100]*2. + -4.;
	J[56] += sporttournament16_pd[139];
	J[53] += x[56]*2.;
	J[54] += sporttournament16_pd[138];
	J[52] = x[54]*2. + -4.;
	J[114] += sporttournament16_pd[137];
	J[51] = x[114]*2. + -2.;
	J[113] -= sporttournament16_pd[136];
	J[51] -= x[113]*2.;
	J[69] += sporttournament16_pd[135];
	J[51] += x[69]*2.;
	J[115] += sporttournament16_pd[134];
	J[50] = x[115]*2. + -2.;
	J[71] += sporttournament16_pd[133];
	J[50] += x[71]*2.;
	J[68] += sporttournament16_pd[132];
	J[50] += x[68]*2.;
	J[102] = -sporttournament16_pd[131];
	J[49] = -x[102]*2. + 4.;
	J[68] -= sporttournament16_pd[130];
	J[49] -= x[68]*2.;
	J[65] -= sporttournament16_pd[129];
	J[49] -= x[65]*2.;
	J[116] -= sporttournament16_pd[128];
	J[48] = -x[116]*2. + 2.;
	J[67] -= sporttournament16_pd[127];
	J[48] -= x[67]*2.;
	J[117] += sporttournament16_pd[126];
	J[47] = x[117]*2. + -2.;
	J[107] += sporttournament16_pd[125];
	J[47] += x[107]*2.;
	J[109] += sporttournament16_pd[124];
	J[46] = x[109]*2. + -4.;
	J[84] += sporttournament16_pd[123];
	J[46] += x[84]*2.;
	J[81] += sporttournament16_pd[122];
	J[46] += x[81]*2.;
	J[110] += sporttournament16_pd[121];
	J[45] = x[110]*2. + -2.;
	J[106] += sporttournament16_pd[120];
	J[45] += x[106]*2.;
	J[96] -= sporttournament16_pd[119];
	J[45] -= x[96]*2.;
	J[82] += sporttournament16_pd[118];
	J[45] += x[82]*2.;
	J[110] += sporttournament16_pd[117];
	J[44] = x[110]*2. + -2.;
	J[95] -= sporttournament16_pd[116];
	J[44] -= x[95]*2.;
	J[91] -= sporttournament16_pd[115];
	J[43] = -x[91]*2. + -2.;
	J[52] += sporttournament16_pd[114];
	J[43] += x[52]*2.;
	J[44] += sporttournament16_pd[113];
	J[43] += x[44]*2.;
	J[55] += sporttournament16_pd[112];
	J[42] = x[55]*2. + -4.;
	J[44] += sporttournament16_pd[111];
	J[42] += x[44]*2.;
	J[114] -= sporttournament16_pd[110];
	J[41] = -x[114]*2. + -2.;
	J[75] += sporttournament16_pd[109];
	J[41] += x[75]*2.;
	J[43] += sporttournament16_pd[108];
	J[41] += x[43]*2.;
	J[74] += sporttournament16_pd[107];
	J[40] = x[74]*2. + -4.;
	J[52] += sporttournament16_pd[106];
	J[40] += x[52]*2.;
	J[51] += sporttournament16_pd[105];
	J[40] += x[51]*2.;
	J[72] -= sporttournament16_pd[104];
	J[39] = -x[72]*2. + -2.;
	J[52] += sporttournament16_pd[103];
	J[39] += x[52]*2.;
	J[98] = -sporttournament16_pd[102];
	J[38] = -x[98]*2. + -2.;
	J[40] += sporttournament16_pd[101];
	J[38] += x[40]*2.;
	J[115] -= sporttournament16_pd[100];
	J[37] = -x[115]*2. + 2.;
	J[105] = -sporttournament16_pd[99];
	J[37] -= x[105]*2.;
	J[104] = -sporttournament16_pd[98];
	J[37] -= x[104]*2.;
	J[86] += sporttournament16_pd[97];
	J[36] = x[86]*2. + -2.;
	J[108] += sporttournament16_pd[96];
	J[35] = x[108]*2. + -2.;
	J[107] -= sporttournament16_pd[95];
	J[35] -= x[107]*2.;
	J[85] += sporttournament16_pd[94];
	J[35] += x[85]*2.;
	J[36] += sporttournament16_pd[93];
	J[35] += x[36]*2.;
	J[101] -= sporttournament16_pd[92];
	J[34] = -x[101]*2. + -2.;
	J[86] += sporttournament16_pd[91];
	J[34] += x[86]*2.;
	J[60] += sporttournament16_pd[90];
	J[34] += x[60]*2.;
	J[93] -= sporttournament16_pd[89];
	J[33] = -x[93]*2. + 2.;
	J[88] -= sporttournament16_pd[88];
	J[33] -= x[88]*2.;
	J[86] += sporttournament16_pd[87];
	J[33] += x[86]*2.;
	J[47] -= sporttournament16_pd[86];
	J[33] -= x[47]*2.;
	J[109] -= sporttournament16_pd[85];
	J[32] = -x[109]*2. + -2.;
	J[107] += sporttournament16_pd[84];
	J[32] += x[107]*2.;
	J[59] += sporttournament16_pd[83];
	J[32] += x[59]*2.;
	J[34] += sporttournament16_pd[82];
	J[32] += x[34]*2.;
	J[106] -= sporttournament16_pd[81];
	J[31] = -x[106]*2. + -2.;
	J[80] += sporttournament16_pd[80];
	J[31] += x[80]*2.;
	J[60] += sporttournament16_pd[79];
	J[31] += x[60]*2.;
	J[89] += sporttournament16_pd[78];
	J[30] = x[89]*2. + -4.;
	J[77] += sporttournament16_pd[77];
	J[30] += x[77]*2.;
	J[31] += sporttournament16_pd[76];
	J[30] += x[31]*2.;
	J[79] -= sporttournament16_pd[75];
	J[29] = -x[79]*2. + -2.;
	J[75] += sporttournament16_pd[74];
	J[29] += x[75]*2.;
	J[30] += sporttournament16_pd[73];
	J[29] += x[30]*2.;
	J[77] += sporttournament16_pd[72];
	J[28] = x[77]*2. + -4.;
	J[29] += sporttournament16_pd[71];
	J[28] += x[29]*2.;
	J[75] += sporttournament16_pd[70];
	J[27] = x[75]*2. + -2.;
	J[73] -= sporttournament16_pd[69];
	J[27] -= x[73]*2.;
	J[53] += sporttournament16_pd[68];
	J[27] += x[53]*2.;
	J[41] += sporttournament16_pd[67];
	J[26] = x[41]*2. + -4.;
	J[113] -= sporttournament16_pd[66];
	J[25] = -x[113]*2. + -2.;
	J[111] -= sporttournament16_pd[65];
	J[24] = -x[111]*2. + -2.;
	J[104] += sporttournament16_pd[64];
	J[24] += x[104]*2.;
	J[62] += sporttournament16_pd[63];
	J[23] = x[62]*2. + -2.;
	J[61] += sporttournament16_pd[62];
	J[22] = x[61]*2. + -2.;
	J[23] += sporttournament16_pd[61];
	J[22] += x[23]*2.;
	J[106] += sporttournament16_pd[60];
	J[21] = x[106]*2. + -2.;
	J[62] += sporttournament16_pd[59];
	J[21] += x[62]*2.;
	J[46] += sporttournament16_pd[58];
	J[21] += x[46]*2.;
	J[22] -= sporttournament16_pd[57];
	J[21] -= x[22]*2.;
	J[53] += sporttournament16_pd[56];
	J[20] = x[53]*2. + -4.;
	J[42] += sporttournament16_pd[55];
	J[20] += x[42]*2.;
	J[39] += sporttournament16_pd[54];
	J[20] += x[39]*2.;
	J[27] += sporttournament16_pd[53];
	J[19] = x[27]*2. + -4.;
	J[105] += sporttournament16_pd[52];
	J[18] = x[105]*2. + -4.;
	J[102] += sporttournament16_pd[51];
	J[18] += x[102]*2.;
	J[25] += sporttournament16_pd[50];
	J[18] += x[25]*2.;
	J[97] -= sporttournament16_pd[49];
	J[17] = -x[97]*2. + -2.;
	J[25] += sporttournament16_pd[48];
	J[17] += x[25]*2.;
	J[101] += sporttournament16_pd[47];
	J[16] = x[101]*2. + -2.;
	J[47] += sporttournament16_pd[46];
	J[16] += x[47]*2.;
	J[98] += sporttournament16_pd[45];
	J[15] = x[98]*2. + -4.;
	J[42] += sporttournament16_pd[44];
	J[15] += x[42]*2.;
	J[28] += sporttournament16_pd[43];
	J[15] += x[28]*2.;
	J[26] += sporttournament16_pd[42];
	J[15] += x[26]*2.;
	J[74] += sporttournament16_pd[41];
	J[14] = x[74]*2. + -4.;
	J[20] += sporttournament16_pd[40];
	J[14] += x[20]*2.;
	J[50] -= sporttournament16_pd[39];
	J[13] = -x[50]*2. + -2.;
	J[39] += sporttournament16_pd[38];
	J[13] += x[39]*2.;
	J[26] += sporttournament16_pd[37];
	J[13] += x[26]*2.;
	J[24] += sporttournament16_pd[36];
	J[12] = x[24]*2. + -2.;
	J[17] += sporttournament16_pd[35];
	J[12] += x[17]*2.;
	J[103] += sporttournament16_pd[34];
	J[11] = x[103]*2. + -2.;
	J[98] -= sporttournament16_pd[33];
	J[11] -= x[98]*2.;
	J[28] += sporttournament16_pd[32];
	J[11] += x[28]*2.;
	J[19] += sporttournament16_pd[31];
	J[11] += x[19]*2.;
	J[70] -= sporttournament16_pd[30];
	J[10] = -x[70]*2. + -2.;
	J[26] += sporttournament16_pd[29];
	J[10] += x[26]*2.;
	J[19] += sporttournament16_pd[28];
	J[10] += x[19]*2.;
	J[99] -= sporttournament16_pd[27];
	J[9] = -x[99]*2. + -2.;
	J[13] += sporttournament16_pd[26];
	J[9] += x[13]*2.;
	J[63] += sporttournament16_pd[25];
	J[8] = x[63]*2. + -2.;
	J[22] += sporttournament16_pd[24];
	J[8] += x[22]*2.;
	J[19] += sporttournament16_pd[23];
	J[7] = x[19]*2. + -4.;
	J[14] += sporttournament16_pd[22];
	J[7] += x[14]*2.;
	J[9] += sporttournament16_pd[21];
	J[7] += x[9]*2.;
	J[10] += sporttournament16_pd[20];
	J[6] = x[10]*2. + -4.;
	J[98] += sporttournament16_pd[19];
	J[5] = x[98]*2. + -2.;
	J[14] += sporttournament16_pd[18];
	J[5] += x[14]*2.;
	J[6] += sporttournament16_pd[17];
	J[5] += x[6]*2.;
	J[38] += sporttournament16_pd[16];
	J[4] = x[38]*2. + -4.;
	J[7] += sporttournament16_pd[15];
	J[4] += x[7]*2.;
	J[18] += sporttournament16_pd[14];
	J[3] = x[18]*2. + -4.;
	J[17] += sporttournament16_pd[13];
	J[3] += x[17]*2.;
	J[9] += sporttournament16_pd[12];
	J[3] += x[9]*2.;
	J[6] += sporttournament16_pd[11];
	J[3] += x[6]*2.;
	J[38] += sporttournament16_pd[10];
	J[2] = x[38]*2. + -2.;
	J[25] += sporttournament16_pd[9];
	J[2] += x[25]*2.;
	J[5] -= sporttournament16_pd[8];
	J[2] -= x[5]*2.;
	J[67] -= sporttournament16_pd[7];
	J[1] = -x[67]*2. + -2.;
	J[24] += sporttournament16_pd[6];
	J[1] += x[24]*2.;
	J[6] += sporttournament16_pd[5];
	J[1] += x[6]*2.;
	J[4] += sporttournament16_pd[4];
	J[1] += x[4]*2.;
	J[49] -= sporttournament16_pd[3];
	J[0] = -x[49]*2. + -2.;
	J[37] += sporttournament16_pd[2];
	J[0] += x[37]*2.;
	J[4] += sporttournament16_pd[1];
	J[0] += x[4]*2.;
	J[2] += sporttournament16_pd[0];
	J[0] += x[2]*2.;
	J[120] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
