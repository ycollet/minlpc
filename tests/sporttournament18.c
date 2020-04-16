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
 fint sporttournament18_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament18_funcom_[315] = {
	154 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	154 /* nzc */,
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
	123,
	124,
	125,
	126,
	127,
	128,
	129,
	130,
	131,
	132,
	133,
	134,
	135,
	136,
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
	150,
	151,
	152,
	153,
	154,
	155,

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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
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

 real sporttournament18_boundc_[1+308+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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

 real sporttournament18_x0comn_[154] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sporttournament18_pd[288];
static real sporttournament18_old_x[154];
static int sporttournament18_xkind = -1;

 static int
sporttournament18_xcheck(real *x)
{
	real *x1 = sporttournament18_old_x, *xe = x + 154;
	errno = 0;
	if (sporttournament18_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament18_xkind = 0;
	return 1;
	}
 real
sporttournament18_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament18_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[153];
	;}

	if (wantfg & 2) {
	g[153] = 1.;
	}

	return rv;
}

 void
sporttournament18_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament18_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament18_pd[0] = 2. * x[0];
	v[0] = sporttournament18_pd[0] * x[6];
	sporttournament18_pd[1] = 2. * x[0];
	v[1] = sporttournament18_pd[1] * x[9];
	v[0] += v[1];
	sporttournament18_pd[2] = 2. * x[0];
	v[1] = sporttournament18_pd[2] * x[14];
	v[0] += v[1];
	sporttournament18_pd[3] = 2. * x[0];
	v[1] = sporttournament18_pd[3] * x[47];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[4] = 2. * x[1];
	v[2] = sporttournament18_pd[4] * x[80];
	v[0] += v[2];
	sporttournament18_pd[5] = 2. * x[1];
	v[2] = sporttournament18_pd[5] * x[111];
	v[0] += v[2];
	sporttournament18_pd[6] = 2. * x[2];
	v[2] = sporttournament18_pd[6] * x[107];
	v[0] += v[2];
	sporttournament18_pd[7] = 2. * x[2];
	v[2] = sporttournament18_pd[7] * x[111];
	v[0] += v[2];
	sporttournament18_pd[8] = 2. * x[3];
	v[2] = sporttournament18_pd[8] * x[32];
	v[0] += v[2];
	sporttournament18_pd[9] = 2. * x[3];
	v[2] = sporttournament18_pd[9] * x[107];
	v[0] += v[2];
	sporttournament18_pd[10] = 2. * x[4];
	v[2] = sporttournament18_pd[10] * x[32];
	v[0] += v[2];
	sporttournament18_pd[11] = 2. * x[4];
	v[2] = sporttournament18_pd[11] * x[112];
	v[0] += v[2];
	sporttournament18_pd[12] = 2. * x[5];
	v[2] = sporttournament18_pd[12] * x[20];
	v[0] += v[2];
	sporttournament18_pd[13] = 2. * x[5];
	v[2] = sporttournament18_pd[13] * x[77];
	v[0] += v[2];
	sporttournament18_pd[14] = 2. * x[6];
	v[2] = sporttournament18_pd[14] * x[10];
	v[0] += v[2];
	sporttournament18_pd[15] = 2. * x[6];
	v[2] = sporttournament18_pd[15] * x[109];
	v[0] += v[2];
	sporttournament18_pd[16] = 2. * x[6];
	v[2] = sporttournament18_pd[16] * x[126];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[17] = 2. * x[7];
	v[1] = sporttournament18_pd[17] * x[17];
	v[0] += v[1];
	sporttournament18_pd[18] = 2. * x[7];
	v[1] = sporttournament18_pd[18] * x[27];
	v[0] += v[1];
	sporttournament18_pd[19] = 2. * x[7];
	v[1] = sporttournament18_pd[19] * x[124];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[20] = 2. * x[7];
	v[2] = sporttournament18_pd[20] * x[132];
	v[0] += v[2];
	sporttournament18_pd[21] = 2. * x[8];
	v[2] = sporttournament18_pd[21] * x[59];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[22] = 2. * x[8];
	v[1] = sporttournament18_pd[22] * x[80];
	v[0] += v[1];
	sporttournament18_pd[23] = 2. * x[8];
	v[1] = sporttournament18_pd[23] * x[113];
	v[0] += v[1];
	sporttournament18_pd[24] = 2. * x[8];
	v[1] = sporttournament18_pd[24] * x[122];
	v[0] += v[1];
	sporttournament18_pd[25] = 2. * x[9];
	v[1] = sporttournament18_pd[25] * x[16];
	v[0] += v[1];
	sporttournament18_pd[26] = 2. * x[9];
	v[1] = sporttournament18_pd[26] * x[116];
	v[0] += v[1];
	sporttournament18_pd[27] = 2. * x[9];
	v[1] = sporttournament18_pd[27] * x[123];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[28] = 2. * x[10];
	v[2] = sporttournament18_pd[28] * x[25];
	v[0] += v[2];
	sporttournament18_pd[29] = 2. * x[10];
	v[2] = sporttournament18_pd[29] * x[34];
	v[0] += v[2];
	sporttournament18_pd[30] = 2. * x[10];
	v[2] = sporttournament18_pd[30] * x[134];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[31] = 2. * x[11];
	v[1] = sporttournament18_pd[31] * x[18];
	v[0] += v[1];
	sporttournament18_pd[32] = 2. * x[11];
	v[1] = sporttournament18_pd[32] * x[87];
	v[0] += v[1];
	sporttournament18_pd[33] = 2. * x[11];
	v[1] = sporttournament18_pd[33] * x[123];
	v[0] += v[1];
	sporttournament18_pd[34] = 2. * x[11];
	v[1] = sporttournament18_pd[34] * x[126];
	v[0] += v[1];
	sporttournament18_pd[35] = 2. * x[12];
	v[1] = sporttournament18_pd[35] * x[25];
	v[0] += v[1];
	sporttournament18_pd[36] = 2. * x[12];
	v[1] = sporttournament18_pd[36] * x[27];
	v[0] += v[1];
	sporttournament18_pd[37] = 2. * x[12];
	v[1] = sporttournament18_pd[37] * x[36];
	v[0] += v[1];
	sporttournament18_pd[38] = 2. * x[12];
	v[1] = sporttournament18_pd[38] * x[124];
	v[0] += v[1];
	sporttournament18_pd[39] = 2. * x[13];
	v[1] = sporttournament18_pd[39] * x[43];
	v[0] += v[1];
	sporttournament18_pd[40] = 2. * x[13];
	v[1] = sporttournament18_pd[40] * x[128];
	v[0] += v[1];
	sporttournament18_pd[41] = 2. * x[14];
	v[1] = sporttournament18_pd[41] * x[15];
	v[0] += v[1];
	sporttournament18_pd[42] = 2. * x[14];
	v[1] = sporttournament18_pd[42] * x[106];
	v[0] += v[1];
	sporttournament18_pd[43] = 2. * x[14];
	v[1] = sporttournament18_pd[43] * x[133];
	v[0] += v[1];
	sporttournament18_pd[44] = 2. * x[15];
	v[1] = sporttournament18_pd[44] * x[108];
	v[0] += v[1];
	sporttournament18_pd[45] = 2. * x[15];
	v[1] = sporttournament18_pd[45] * x[122];
	v[0] += v[1];
	sporttournament18_pd[46] = 2. * x[15];
	v[1] = sporttournament18_pd[46] * x[139];
	v[0] += v[1];
	sporttournament18_pd[47] = 2. * x[16];
	v[1] = sporttournament18_pd[47] * x[34];
	v[0] += v[1];
	sporttournament18_pd[48] = 2. * x[16];
	v[1] = sporttournament18_pd[48] * x[49];
	v[0] += v[1];
	sporttournament18_pd[49] = 2. * x[16];
	v[1] = sporttournament18_pd[49] * x[139];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[50] = 2. * x[17];
	v[2] = sporttournament18_pd[50] * x[26];
	v[0] += v[2];
	sporttournament18_pd[51] = 2. * x[17];
	v[2] = sporttournament18_pd[51] * x[126];
	v[0] += v[2];
	sporttournament18_pd[52] = 2. * x[17];
	v[2] = sporttournament18_pd[52] * x[130];
	v[0] += v[2];
	sporttournament18_pd[53] = 2. * x[18];
	v[2] = sporttournament18_pd[53] * x[34];
	v[0] += v[2];
	sporttournament18_pd[54] = 2. * x[18];
	v[2] = sporttournament18_pd[54] * x[36];
	v[0] += v[2];
	sporttournament18_pd[55] = 2. * x[18];
	v[2] = sporttournament18_pd[55] * x[52];
	v[0] += v[2];
	sporttournament18_pd[56] = 2. * x[19];
	v[2] = sporttournament18_pd[56] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[57] = 2. * x[19];
	v[1] = sporttournament18_pd[57] * x[57];
	v[0] += v[1];
	sporttournament18_pd[58] = 2. * x[19];
	v[1] = sporttournament18_pd[58] * x[135];
	v[0] += v[1];
	sporttournament18_pd[59] = 2. * x[19];
	v[1] = sporttournament18_pd[59] * x[141];
	v[0] += v[1];
	sporttournament18_pd[60] = 2. * x[20];
	v[1] = sporttournament18_pd[60] * x[21];
	v[0] += v[1];
	sporttournament18_pd[61] = 2. * x[20];
	v[1] = sporttournament18_pd[61] * x[97];
	v[0] += v[1];
	sporttournament18_pd[62] = 2. * x[21];
	v[1] = sporttournament18_pd[62] * x[57];
	v[0] += v[1];
	sporttournament18_pd[63] = 2. * x[22];
	v[1] = sporttournament18_pd[63] * x[23];
	v[0] += v[1];
	sporttournament18_pd[64] = 2. * x[22];
	v[1] = sporttournament18_pd[64] * x[47];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[65] = 2. * x[22];
	v[2] = sporttournament18_pd[65] * x[112];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[66] = 2. * x[22];
	v[1] = sporttournament18_pd[66] * x[143];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[67] = 2. * x[23];
	v[2] = sporttournament18_pd[67] * x[24];
	v[0] += v[2];
	sporttournament18_pd[68] = 2. * x[23];
	v[2] = sporttournament18_pd[68] * x[110];
	v[0] += v[2];
	sporttournament18_pd[69] = 2. * x[23];
	v[2] = sporttournament18_pd[69] * x[116];
	v[0] += v[2];
	sporttournament18_pd[70] = 2. * x[24];
	v[2] = sporttournament18_pd[70] * x[113];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[71] = 2. * x[24];
	v[1] = sporttournament18_pd[71] * x[134];
	v[0] += v[1];
	sporttournament18_pd[72] = 2. * x[24];
	v[1] = sporttournament18_pd[72] * x[139];
	v[0] += v[1];
	sporttournament18_pd[73] = 2. * x[25];
	v[1] = sporttournament18_pd[73] * x[35];
	v[0] += v[1];
	sporttournament18_pd[74] = 2. * x[25];
	v[1] = sporttournament18_pd[74] * x[130];
	v[0] += v[1];
	sporttournament18_pd[75] = 2. * x[26];
	v[1] = sporttournament18_pd[75] * x[49];
	v[0] += v[1];
	sporttournament18_pd[76] = 2. * x[26];
	v[1] = sporttournament18_pd[76] * x[52];
	v[0] += v[1];
	sporttournament18_pd[77] = 2. * x[26];
	v[1] = sporttournament18_pd[77] * x[67];
	v[0] += v[1];
	sporttournament18_pd[78] = 2. * x[27];
	v[1] = sporttournament18_pd[78] * x[37];
	v[0] += v[1];
	sporttournament18_pd[79] = 2. * x[27];
	v[1] = sporttournament18_pd[79] * x[125];
	v[0] += v[1];
	sporttournament18_pd[80] = 2. * x[28];
	v[1] = sporttournament18_pd[80] * x[29];
	v[0] += v[1];
	sporttournament18_pd[81] = 2. * x[28];
	v[1] = sporttournament18_pd[81] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[82] = 2. * x[28];
	v[2] = sporttournament18_pd[82] * x[94];
	v[0] += v[2];
	sporttournament18_pd[83] = 2. * x[28];
	v[2] = sporttournament18_pd[83] * x[137];
	v[0] += v[2];
	sporttournament18_pd[84] = 2. * x[29];
	v[2] = sporttournament18_pd[84] * x[56];
	v[0] += v[2];
	sporttournament18_pd[85] = 2. * x[29];
	v[2] = sporttournament18_pd[85] * x[76];
	v[0] += v[2];
	sporttournament18_pd[86] = 2. * x[29];
	v[2] = sporttournament18_pd[86] * x[128];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[87] = 2. * x[30];
	v[1] = sporttournament18_pd[87] * x[31];
	v[0] += v[1];
	sporttournament18_pd[88] = 2. * x[30];
	v[1] = sporttournament18_pd[88] * x[75];
	v[0] += v[1];
	sporttournament18_pd[89] = 2. * x[30];
	v[1] = sporttournament18_pd[89] * x[137];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[90] = 2. * x[30];
	v[2] = sporttournament18_pd[90] * x[138];
	v[0] += v[2];
	sporttournament18_pd[91] = 2. * x[31];
	v[2] = sporttournament18_pd[91] * x[76];
	v[0] += v[2];
	sporttournament18_pd[92] = 2. * x[32];
	v[2] = sporttournament18_pd[92] * x[82];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[93] = 2. * x[32];
	v[1] = sporttournament18_pd[93] * x[106];
	v[0] += v[1];
	sporttournament18_pd[94] = 2. * x[33];
	v[1] = sporttournament18_pd[94] * x[109];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[95] = 2. * x[33];
	v[2] = sporttournament18_pd[95] * x[110];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[96] = 2. * x[33];
	v[1] = sporttournament18_pd[96] * x[133];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[97] = 2. * x[33];
	v[2] = sporttournament18_pd[97] * x[144];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[98] = 2. * x[34];
	v[1] = sporttournament18_pd[98] * x[51];
	v[0] += v[1];
	sporttournament18_pd[99] = 2. * x[35];
	v[1] = sporttournament18_pd[99] * x[67];
	v[0] += v[1];
	sporttournament18_pd[100] = 2. * x[35];
	v[1] = sporttournament18_pd[100] * x[86];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[101] = 2. * x[35];
	v[2] = sporttournament18_pd[101] * x[88];
	v[0] += v[2];
	sporttournament18_pd[102] = 2. * x[36];
	v[2] = sporttournament18_pd[102] * x[38];
	v[0] += v[2];
	sporttournament18_pd[103] = 2. * x[36];
	v[2] = sporttournament18_pd[103] * x[90];
	v[0] += v[2];
	sporttournament18_pd[104] = 2. * x[37];
	v[2] = sporttournament18_pd[104] * x[39];
	v[0] += v[2];
	sporttournament18_pd[105] = 2. * x[37];
	v[2] = sporttournament18_pd[105] * x[55];
	v[0] += v[2];
	sporttournament18_pd[106] = 2. * x[37];
	v[2] = sporttournament18_pd[106] * x[89];
	v[0] += v[2];
	sporttournament18_pd[107] = 2. * x[38];
	v[2] = sporttournament18_pd[107] * x[39];
	v[0] += v[2];
	sporttournament18_pd[108] = 2. * x[38];
	v[2] = sporttournament18_pd[108] * x[88];
	v[0] += v[2];
	sporttournament18_pd[109] = 2. * x[38];
	v[2] = sporttournament18_pd[109] * x[118];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[110] = 2. * x[39];
	v[1] = sporttournament18_pd[110] * x[40];
	v[0] += v[1];
	sporttournament18_pd[111] = 2. * x[39];
	v[1] = sporttournament18_pd[111] * x[102];
	v[0] += v[1];
	sporttournament18_pd[112] = 2. * x[40];
	v[1] = sporttournament18_pd[112] * x[73];
	v[0] += v[1];
	sporttournament18_pd[113] = 2. * x[40];
	v[1] = sporttournament18_pd[113] * x[92];
	v[0] += v[1];
	sporttournament18_pd[114] = 2. * x[41];
	v[1] = sporttournament18_pd[114] * x[57];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[115] = 2. * x[41];
	v[2] = sporttournament18_pd[115] * x[74];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[116] = 2. * x[41];
	v[1] = sporttournament18_pd[116] * x[99];
	v[0] += v[1];
	sporttournament18_pd[117] = 2. * x[41];
	v[1] = sporttournament18_pd[117] * x[101];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[118] = 2. * x[42];
	v[2] = sporttournament18_pd[118] * x[73];
	v[0] += v[2];
	sporttournament18_pd[119] = 2. * x[42];
	v[2] = sporttournament18_pd[119] * x[99];
	v[0] += v[2];
	sporttournament18_pd[120] = 2. * x[42];
	v[2] = sporttournament18_pd[120] * x[128];
	v[0] += v[2];
	sporttournament18_pd[121] = 2. * x[42];
	v[2] = sporttournament18_pd[121] * x[141];
	v[0] += v[2];
	sporttournament18_pd[122] = 2. * x[43];
	v[2] = sporttournament18_pd[122] * x[44];
	v[0] += v[2];
	sporttournament18_pd[123] = 2. * x[43];
	v[2] = sporttournament18_pd[123] * x[98];
	v[0] += v[2];
	sporttournament18_pd[124] = 2. * x[43];
	v[2] = sporttournament18_pd[124] * x[137];
	v[0] += v[2];
	sporttournament18_pd[125] = 2. * x[44];
	v[2] = sporttournament18_pd[125] * x[99];
	v[0] += v[2];
	sporttournament18_pd[126] = 2. * x[45];
	v[2] = sporttournament18_pd[126] * x[46];
	v[0] += v[2];
	sporttournament18_pd[127] = 2. * x[45];
	v[2] = sporttournament18_pd[127] * x[143];
	v[0] += v[2];
	sporttournament18_pd[128] = 2. * x[46];
	v[2] = sporttournament18_pd[128] * x[58];
	v[0] += v[2];
	sporttournament18_pd[129] = 2. * x[46];
	v[2] = sporttournament18_pd[129] * x[60];
	v[0] += v[2];
	sporttournament18_pd[130] = 2. * x[46];
	v[2] = sporttournament18_pd[130] * x[133];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[131] = 2. * x[47];
	v[1] = sporttournament18_pd[131] * x[83];
	v[0] += v[1];
	sporttournament18_pd[132] = 2. * x[47];
	v[1] = sporttournament18_pd[132] * x[147];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[133] = 2. * x[48];
	v[2] = sporttournament18_pd[133] * x[63];
	v[0] += v[2];
	sporttournament18_pd[134] = 2. * x[48];
	v[2] = sporttournament18_pd[134] * x[65];
	v[0] += v[2];
	sporttournament18_pd[135] = 2. * x[48];
	v[2] = sporttournament18_pd[135] * x[126];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[136] = 2. * x[48];
	v[1] = sporttournament18_pd[136] * x[147];
	v[0] += v[1];
	sporttournament18_pd[137] = 2. * x[49];
	v[1] = sporttournament18_pd[137] * x[66];
	v[0] += v[1];
	sporttournament18_pd[138] = 2. * x[49];
	v[1] = sporttournament18_pd[138] * x[140];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[139] = 2. * x[50];
	v[2] = sporttournament18_pd[139] * x[65];
	v[0] += v[2];
	sporttournament18_pd[140] = 2. * x[50];
	v[2] = sporttournament18_pd[140] * x[66];
	v[0] += v[2];
	sporttournament18_pd[141] = 2. * x[50];
	v[2] = sporttournament18_pd[141] * x[87];
	v[0] += v[2];
	sporttournament18_pd[142] = 2. * x[50];
	v[2] = sporttournament18_pd[142] * x[120];
	v[0] += v[2];
	sporttournament18_pd[143] = 2. * x[51];
	v[2] = sporttournament18_pd[143] * x[53];
	v[0] += v[2];
	sporttournament18_pd[144] = 2. * x[51];
	v[2] = sporttournament18_pd[144] * x[88];
	v[0] += v[2];
	sporttournament18_pd[145] = 2. * x[51];
	v[2] = sporttournament18_pd[145] * x[148];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[146] = 2. * x[52];
	v[1] = sporttournament18_pd[146] * x[54];
	v[0] += v[1];
	sporttournament18_pd[147] = 2. * x[52];
	v[1] = sporttournament18_pd[147] * x[127];
	v[0] += v[1];
	sporttournament18_pd[148] = 2. * x[53];
	v[1] = sporttournament18_pd[148] * x[54];
	v[0] += v[1];
	sporttournament18_pd[149] = 2. * x[53];
	v[1] = sporttournament18_pd[149] * x[66];
	v[0] += v[1];
	sporttournament18_pd[150] = 2. * x[53];
	v[1] = sporttournament18_pd[150] * x[104];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[151] = 2. * x[54];
	v[2] = sporttournament18_pd[151] * x[118];
	v[0] += v[2];
	sporttournament18_pd[152] = 2. * x[54];
	v[2] = sporttournament18_pd[152] * x[145];
	v[0] += v[2];
	sporttournament18_pd[153] = 2. * x[55];
	v[2] = sporttournament18_pd[153] * x[103];
	v[0] += v[2];
	sporttournament18_pd[154] = 2. * x[55];
	v[2] = sporttournament18_pd[154] * x[104];
	v[0] += v[2];
	sporttournament18_pd[155] = 2. * x[55];
	v[2] = sporttournament18_pd[155] * x[136];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[156] = 2. * x[56];
	v[1] = sporttournament18_pd[156] * x[93];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[157] = 2. * x[56];
	v[2] = sporttournament18_pd[157] * x[97];
	v[0] += v[2];
	sporttournament18_pd[158] = 2. * x[56];
	v[2] = sporttournament18_pd[158] * x[142];
	v[0] += v[2];
	sporttournament18_pd[159] = 2. * x[57];
	v[2] = sporttournament18_pd[159] * x[150];
	v[0] += v[2];
	sporttournament18_pd[160] = 2. * x[58];
	v[2] = sporttournament18_pd[160] * x[59];
	v[0] += v[2];
	sporttournament18_pd[161] = 2. * x[59];
	v[2] = sporttournament18_pd[161] * x[61];
	v[0] += v[2];
	sporttournament18_pd[162] = 2. * x[59];
	v[2] = sporttournament18_pd[162] * x[79];
	v[0] += v[2];
	sporttournament18_pd[163] = 2. * x[60];
	v[2] = sporttournament18_pd[163] * x[107];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[164] = 2. * x[60];
	v[1] = sporttournament18_pd[164] * x[122];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[165] = 2. * x[60];
	v[2] = sporttournament18_pd[165] * x[149];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[166] = 2. * x[61];
	v[1] = sporttournament18_pd[166] * x[62];
	v[0] += v[1];
	sporttournament18_pd[167] = 2. * x[61];
	v[1] = sporttournament18_pd[167] * x[111];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[168] = 2. * x[61];
	v[2] = sporttournament18_pd[168] * x[149];
	v[0] += v[2];
	sporttournament18_pd[169] = 2. * x[62];
	v[2] = sporttournament18_pd[169] * x[63];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[170] = 2. * x[62];
	v[1] = sporttournament18_pd[170] * x[82];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[171] = 2. * x[62];
	v[2] = sporttournament18_pd[171] * x[116];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[172] = 2. * x[63];
	v[1] = sporttournament18_pd[172] * x[64];
	v[0] += v[1];
	sporttournament18_pd[173] = 2. * x[63];
	v[1] = sporttournament18_pd[173] * x[149];
	v[0] += v[1];
	sporttournament18_pd[174] = 2. * x[64];
	v[1] = sporttournament18_pd[174] * x[84];
	v[0] += v[1];
	sporttournament18_pd[175] = 2. * x[64];
	v[1] = sporttournament18_pd[175] * x[85];
	v[0] += v[1];
	sporttournament18_pd[176] = 2. * x[64];
	v[1] = sporttournament18_pd[176] * x[123];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[177] = 2. * x[65];
	v[2] = sporttournament18_pd[177] * x[131];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[178] = 2. * x[65];
	v[1] = sporttournament18_pd[178] * x[148];
	v[0] += v[1];
	sporttournament18_pd[179] = 2. * x[66];
	v[1] = sporttournament18_pd[179] * x[68];
	v[0] += v[1];
	sporttournament18_pd[180] = 2. * x[67];
	v[1] = sporttournament18_pd[180] * x[69];
	v[0] += v[1];
	sporttournament18_pd[181] = 2. * x[67];
	v[1] = sporttournament18_pd[181] * x[125];
	v[0] += v[1];
	sporttournament18_pd[182] = 2. * x[68];
	v[1] = sporttournament18_pd[182] * x[69];
	v[0] += v[1];
	sporttournament18_pd[183] = 2. * x[68];
	v[1] = sporttournament18_pd[183] * x[104];
	v[0] += v[1];
	sporttournament18_pd[184] = 2. * x[68];
	v[1] = sporttournament18_pd[184] * x[152];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[185] = 2. * x[69];
	v[2] = sporttournament18_pd[185] * x[71];
	v[0] += v[2];
	sporttournament18_pd[186] = 2. * x[69];
	v[2] = sporttournament18_pd[186] * x[114];
	v[0] += v[2];
	sporttournament18_pd[187] = 2. * x[70];
	v[2] = sporttournament18_pd[187] * x[72];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[188] = 2. * x[70];
	v[1] = sporttournament18_pd[188] * x[90];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[189] = 2. * x[70];
	v[2] = sporttournament18_pd[189] * x[93];
	v[0] += v[2];
	sporttournament18_pd[190] = 2. * x[70];
	v[2] = sporttournament18_pd[190] * x[104];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[191] = 2. * x[71];
	v[1] = sporttournament18_pd[191] * x[72];
	v[0] += v[1];
	sporttournament18_pd[192] = 2. * x[71];
	v[1] = sporttournament18_pd[192] * x[127];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[193] = 2. * x[71];
	v[2] = sporttournament18_pd[193] * x[142];
	v[0] += v[2];
	sporttournament18_pd[194] = 2. * x[72];
	v[2] = sporttournament18_pd[194] * x[74];
	v[0] += v[2];
	sporttournament18_pd[195] = 2. * x[72];
	v[2] = sporttournament18_pd[195] * x[135];
	v[0] += v[2];
	sporttournament18_pd[196] = 2. * x[73];
	v[2] = sporttournament18_pd[196] * x[75];
	v[0] += v[2];
	sporttournament18_pd[197] = 2. * x[73];
	v[2] = sporttournament18_pd[197] * x[117];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[198] = 2. * x[74];
	v[1] = sporttournament18_pd[198] * x[75];
	v[0] += v[1];
	sporttournament18_pd[199] = 2. * x[74];
	v[1] = sporttournament18_pd[199] * x[117];
	v[0] += v[1];
	sporttournament18_pd[200] = 2. * x[75];
	v[1] = sporttournament18_pd[200] * x[77];
	v[0] += v[1];
	sporttournament18_pd[201] = 2. * x[76];
	v[1] = sporttournament18_pd[201] * x[78];
	v[0] += v[1];
	sporttournament18_pd[202] = 2. * x[76];
	v[1] = sporttournament18_pd[202] * x[105];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[203] = 2. * x[77];
	v[2] = sporttournament18_pd[203] * x[78];
	v[0] += v[2];
	sporttournament18_pd[204] = 2. * x[77];
	v[2] = sporttournament18_pd[204] * x[105];
	v[0] += v[2];
	sporttournament18_pd[205] = 2. * x[79];
	v[2] = sporttournament18_pd[205] * x[81];
	v[0] += v[2];
	sporttournament18_pd[206] = 2. * x[80];
	v[2] = sporttournament18_pd[206] * x[83];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[207] = 2. * x[80];
	v[1] = sporttournament18_pd[207] * x[115];
	v[0] += v[1];
	sporttournament18_pd[208] = 2. * x[81];
	v[1] = sporttournament18_pd[208] * x[83];
	v[0] += v[1];
	sporttournament18_pd[209] = 2. * x[81];
	v[1] = sporttournament18_pd[209] * x[129];
	v[0] += v[1];
	sporttournament18_pd[210] = 2. * x[81];
	v[1] = sporttournament18_pd[210] * x[133];
	v[0] += v[1];
	sporttournament18_pd[211] = 2. * x[82];
	v[1] = sporttournament18_pd[211] * x[143];
	v[0] += v[1];
	sporttournament18_pd[212] = 2. * x[82];
	v[1] = sporttournament18_pd[212] * x[146];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[213] = 2. * x[83];
	v[2] = sporttournament18_pd[213] * x[146];
	v[0] += v[2];
	sporttournament18_pd[214] = 2. * x[84];
	v[2] = sporttournament18_pd[214] * x[121];
	v[0] += v[2];
	sporttournament18_pd[215] = 2. * x[84];
	v[2] = sporttournament18_pd[215] * x[122];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[216] = 2. * x[84];
	v[1] = sporttournament18_pd[216] * x[146];
	v[0] += v[1];
	sporttournament18_pd[217] = 2. * x[85];
	v[1] = sporttournament18_pd[217] * x[86];
	v[0] += v[1];
	sporttournament18_pd[218] = 2. * x[85];
	v[1] = sporttournament18_pd[218] * x[134];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[219] = 2. * x[85];
	v[2] = sporttournament18_pd[219] * x[148];
	v[0] += v[2];
	sporttournament18_pd[220] = 2. * x[86];
	v[2] = sporttournament18_pd[220] * x[140];
	v[0] += v[2];
	sporttournament18_pd[221] = 2. * x[86];
	v[2] = sporttournament18_pd[221] * x[152];
	v[0] += v[2];
	sporttournament18_pd[222] = 2. * x[87];
	v[2] = sporttournament18_pd[222] * x[89];
	v[0] += v[2];
	sporttournament18_pd[223] = 2. * x[87];
	v[2] = sporttournament18_pd[223] * x[132];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[224] = 2. * x[88];
	v[1] = sporttournament18_pd[224] * x[91];
	v[0] += v[1];
	sporttournament18_pd[225] = 2. * x[89];
	v[1] = sporttournament18_pd[225] * x[91];
	v[0] += v[1];
	sporttournament18_pd[226] = 2. * x[89];
	v[1] = sporttournament18_pd[226] * x[152];
	v[0] += v[1];
	sporttournament18_pd[227] = 2. * x[90];
	v[1] = sporttournament18_pd[227] * x[92];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[228] = 2. * x[90];
	v[2] = sporttournament18_pd[228] * x[132];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[229] = 2. * x[91];
	v[1] = sporttournament18_pd[229] * x[92];
	v[0] += v[1];
	sporttournament18_pd[230] = 2. * x[91];
	v[1] = sporttournament18_pd[230] * x[119];
	v[0] += v[1];
	sporttournament18_pd[231] = 2. * x[92];
	v[1] = sporttournament18_pd[231] * x[94];
	v[0] += v[1];
	sporttournament18_pd[232] = 2. * x[93];
	v[1] = sporttournament18_pd[232] * x[96];
	v[0] += v[1];
	sporttournament18_pd[233] = 2. * x[93];
	v[1] = sporttournament18_pd[233] * x[118];
	v[0] += v[1];
	sporttournament18_pd[234] = 2. * x[94];
	v[1] = sporttournament18_pd[234] * x[96];
	v[0] += v[1];
	sporttournament18_pd[235] = 2. * x[94];
	v[1] = sporttournament18_pd[235] * x[119];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[236] = 2. * x[95];
	v[2] = sporttournament18_pd[236] * x[97];
	v[0] += v[2];
	sporttournament18_pd[237] = 2. * x[95];
	v[2] = sporttournament18_pd[237] * x[98];
	v[0] += v[2];
	sporttournament18_pd[238] = 2. * x[95];
	v[2] = sporttournament18_pd[238] * x[102];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[239] = 2. * x[95];
	v[1] = sporttournament18_pd[239] * x[136];
	v[0] += v[1];
	sporttournament18_pd[240] = 2. * x[96];
	v[1] = sporttournament18_pd[240] * x[98];
	v[0] += v[1];
	sporttournament18_pd[241] = 2. * x[96];
	v[1] = sporttournament18_pd[241] * x[105];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[242] = 2. * x[97];
	v[2] = sporttournament18_pd[242] * x[151];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[243] = 2. * x[98];
	v[1] = sporttournament18_pd[243] * x[151];
	v[0] += v[1];
	sporttournament18_pd[244] = 2. * x[99];
	v[1] = sporttournament18_pd[244] * x[100];
	v[0] += v[1];
	sporttournament18_pd[245] = 2. * x[100];
	v[1] = sporttournament18_pd[245] * x[151];
	v[0] += v[1];
	sporttournament18_pd[246] = 2. * x[101];
	v[1] = sporttournament18_pd[246] * x[102];
	v[0] += v[1];
	sporttournament18_pd[247] = 2. * x[101];
	v[1] = sporttournament18_pd[247] * x[103];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[248] = 2. * x[101];
	v[2] = sporttournament18_pd[248] * x[105];
	v[0] += v[2];
	sporttournament18_pd[249] = 2. * x[102];
	v[2] = sporttournament18_pd[249] * x[114];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[250] = 2. * x[103];
	v[1] = sporttournament18_pd[250] * x[114];
	v[0] += v[1];
	sporttournament18_pd[251] = 2. * x[103];
	v[1] = sporttournament18_pd[251] * x[141];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[252] = 2. * x[106];
	v[2] = sporttournament18_pd[252] * x[107];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[253] = 2. * x[106];
	v[1] = sporttournament18_pd[253] * x[113];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[254] = 2. * x[108];
	v[2] = sporttournament18_pd[254] * x[109];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[255] = 2. * x[108];
	v[1] = sporttournament18_pd[255] * x[120];
	v[0] += v[1];
	sporttournament18_pd[256] = 2. * x[108];
	v[1] = sporttournament18_pd[256] * x[130];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[257] = 2. * x[109];
	v[2] = sporttournament18_pd[257] * x[113];
	v[0] += v[2];
	sporttournament18_pd[258] = 2. * x[110];
	v[2] = sporttournament18_pd[258] * x[111];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[259] = 2. * x[110];
	v[1] = sporttournament18_pd[259] * x[112];
	v[0] += v[1];
	sporttournament18_pd[260] = 2. * x[112];
	v[1] = sporttournament18_pd[260] * x[129];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[261] = 2. * x[114];
	v[2] = sporttournament18_pd[261] * x[125];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[262] = 2. * x[115];
	v[1] = sporttournament18_pd[262] * x[143];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[263] = 2. * x[116];
	v[2] = sporttournament18_pd[263] * x[121];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[264] = 2. * x[117];
	v[1] = sporttournament18_pd[264] * x[118];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[265] = 2. * x[117];
	v[2] = sporttournament18_pd[265] * x[119];
	v[0] += v[2];
	sporttournament18_pd[266] = 2. * x[119];
	v[2] = sporttournament18_pd[266] * x[127];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[267] = 2. * x[120];
	v[1] = sporttournament18_pd[267] * x[121];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[268] = 2. * x[120];
	v[2] = sporttournament18_pd[268] * x[124];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[269] = 2. * x[121];
	v[1] = sporttournament18_pd[269] * x[140];
	v[0] += v[1];
	sporttournament18_pd[270] = 2. * x[123];
	v[1] = sporttournament18_pd[270] * x[124];
	v[0] += v[1];
	sporttournament18_pd[271] = 2. * x[125];
	v[1] = sporttournament18_pd[271] * x[145];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[272] = 2. * x[127];
	v[2] = sporttournament18_pd[272] * x[132];
	v[0] += v[2];
	sporttournament18_pd[273] = 2. * x[128];
	v[2] = sporttournament18_pd[273] * x[138];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[274] = 2. * x[130];
	v[1] = sporttournament18_pd[274] * x[131];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[275] = 2. * x[131];
	v[2] = sporttournament18_pd[275] * x[144];
	v[0] += v[2];
	sporttournament18_pd[276] = 2. * x[131];
	v[2] = sporttournament18_pd[276] * x[147];
	v[0] += v[2];
	sporttournament18_pd[277] = 2. * x[134];
	v[2] = sporttournament18_pd[277] * x[144];
	v[0] += v[2];
	sporttournament18_pd[278] = 2. * x[135];
	v[2] = sporttournament18_pd[278] * x[136];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[279] = 2. * x[135];
	v[1] = sporttournament18_pd[279] * x[137];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[280] = 2. * x[136];
	v[2] = sporttournament18_pd[280] * x[145];
	v[0] += v[2];
	sporttournament18_pd[281] = 2. * x[139];
	v[2] = sporttournament18_pd[281] * x[140];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[282] = 2. * x[141];
	v[1] = sporttournament18_pd[282] * x[142];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[283] = 2. * x[142];
	v[2] = sporttournament18_pd[283] * x[145];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[284] = 2. * x[144];
	v[1] = sporttournament18_pd[284] * x[146];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[285] = 2. * x[147];
	v[2] = sporttournament18_pd[285] * x[149];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament18_pd[286] = 2. * x[148];
	v[1] = sporttournament18_pd[286] * x[152];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament18_pd[287] = 2. * x[150];
	v[2] = sporttournament18_pd[287] * x[151];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += -2.*x[5];
	t1 += -2.*x[6];
	t1 += -2.*x[7];
	t1 += -2.*x[8];
	t1 += -2.*x[9];
	t1 += -2.*x[10];
	t1 += -4.*x[11];
	t1 += -4.*x[12];
	t1 += -2.*x[13];
	t1 += -4.*x[14];
	t1 += -4.*x[15];
	t1 += -2.*x[16];
	t1 += -4.*x[17];
	t1 += -4.*x[18];
	t1 += -2.*x[19];
	t1 += -2.*x[20];
	t1 += -2.*x[21];
	t1 += 2.*x[22];
	t1 += -4.*x[23];
	t1 += -2.*x[24];
	t1 += -4.*x[25];
	t1 += -4.*x[26];
	t1 += -4.*x[27];
	t1 += -2.*x[28];
	t1 += -2.*x[29];
	t1 += -2.*x[30];
	t1 += -2.*x[31];
	t1 += -2.*x[32];
	t1 += 4.*x[33];
	t1 += -4.*x[34];
	t1 += -2.*x[35];
	t1 += -4.*x[36];
	t1 += -4.*x[37];
	t1 += -2.*x[38];
	t1 += -4.*x[39];
	t1 += -2.*x[40];
	t1 += 2.*x[41];
	t1 += -4.*x[42];
	t1 += -4.*x[43];
	t1 += -2.*x[44];
	t1 += -2.*x[45];
	t1 += -2.*x[46];
	t1 += 2.*x[47];
	t1 += -2.*x[48];
	t1 += -2.*x[49];
	t1 += -4.*x[50];
	t1 += -2.*x[51];
	t1 += -4.*x[52];
	t1 += -2.*x[53];
	t1 += -4.*x[54];
	t1 += -2.*x[55];
	t1 += -2.*x[56];
	t1 += -2.*x[57];
	t1 += -2.*x[58];
	t1 += -2.*x[59];
	t1 += 2.*x[60];
	t1 += -2.*x[61];
	t1 += 2.*x[62];
	t1 += -2.*x[63];
	t1 += -2.*x[64];
	t1 += -2.*x[65];
	t1 += -4.*x[66];
	t1 += -4.*x[67];
	t1 += -2.*x[68];
	t1 += -4.*x[69];
	t1 += 2.*x[70];
	t1 += -2.*x[71];
	t1 += -2.*x[72];
	t1 += -2.*x[73];
	t1 += -2.*x[74];
	t1 += -4.*x[75];
	t1 += -2.*x[76];
	t1 += -4.*x[77];
	t1 += -2.*x[78];
	t1 += -2.*x[79];
	t1 += -2.*x[80];
	t1 += -4.*x[81];
	t1 += 2.*x[82];
	t1 += -2.*x[83];
	t1 += -2.*x[84];
	t1 += -2.*x[85];
	t1 += -2.*x[86];
	t1 += -2.*x[87];
	t1 += -4.*x[88];
	t1 += -4.*x[89];
	t1 += 2.*x[90];
	t1 += -4.*x[91];
	t1 += -2.*x[92];
	t1 += -2.*x[93];
	t1 += -2.*x[94];
	t1 += -2.*x[95];
	t1 += -2.*x[96];
	t1 += -2.*x[97];
	t1 += -4.*x[98];
	t1 += -4.*x[99];
	t1 += -2.*x[100];
	t1 += x[153];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[151] = -sporttournament18_pd[287];
	J[150] = -x[151]*2.;
	J[152] = -sporttournament18_pd[286];
	J[148] = -x[152]*2.;
	J[149] = -sporttournament18_pd[285];
	J[147] = -x[149]*2.;
	J[146] = -sporttournament18_pd[284];
	J[144] = -x[146]*2.;
	J[145] = -sporttournament18_pd[283];
	J[142] = -x[145]*2.;
	J[142] -= sporttournament18_pd[282];
	J[141] = -x[142]*2.;
	J[140] = -sporttournament18_pd[281];
	J[139] = -x[140]*2.;
	J[145] += sporttournament18_pd[280];
	J[136] = x[145]*2.;
	J[137] = -sporttournament18_pd[279];
	J[135] = -x[137]*2.;
	J[136] -= sporttournament18_pd[278];
	J[135] -= x[136]*2.;
	J[144] += sporttournament18_pd[277];
	J[134] = x[144]*2.;
	J[147] += sporttournament18_pd[276];
	J[131] = x[147]*2.;
	J[144] += sporttournament18_pd[275];
	J[131] += x[144]*2.;
	J[131] -= sporttournament18_pd[274];
	J[130] = -x[131]*2.;
	J[138] = -sporttournament18_pd[273];
	J[128] = -x[138]*2.;
	J[132] = sporttournament18_pd[272];
	J[127] = x[132]*2.;
	J[145] -= sporttournament18_pd[271];
	J[125] = -x[145]*2.;
	J[124] = sporttournament18_pd[270];
	J[123] = x[124]*2.;
	J[140] += sporttournament18_pd[269];
	J[121] = x[140]*2.;
	J[124] -= sporttournament18_pd[268];
	J[120] = -x[124]*2.;
	J[121] -= sporttournament18_pd[267];
	J[120] -= x[121]*2.;
	J[127] -= sporttournament18_pd[266];
	J[119] = -x[127]*2.;
	J[119] += sporttournament18_pd[265];
	J[117] = x[119]*2.;
	J[118] = -sporttournament18_pd[264];
	J[117] -= x[118]*2.;
	J[121] -= sporttournament18_pd[263];
	J[116] = -x[121]*2.;
	J[143] = -sporttournament18_pd[262];
	J[115] = -x[143]*2.;
	J[125] -= sporttournament18_pd[261];
	J[114] = -x[125]*2.;
	J[129] = -sporttournament18_pd[260];
	J[112] = -x[129]*2.;
	J[112] += sporttournament18_pd[259];
	J[110] = x[112]*2.;
	J[111] = -sporttournament18_pd[258];
	J[110] -= x[111]*2.;
	J[113] = sporttournament18_pd[257];
	J[109] = x[113]*2.;
	J[130] -= sporttournament18_pd[256];
	J[108] = -x[130]*2.;
	J[120] += sporttournament18_pd[255];
	J[108] += x[120]*2.;
	J[109] -= sporttournament18_pd[254];
	J[108] -= x[109]*2.;
	J[113] -= sporttournament18_pd[253];
	J[106] = -x[113]*2.;
	J[107] = -sporttournament18_pd[252];
	J[106] -= x[107]*2.;
	J[141] -= sporttournament18_pd[251];
	J[103] = -x[141]*2.;
	J[114] += sporttournament18_pd[250];
	J[103] += x[114]*2.;
	J[114] -= sporttournament18_pd[249];
	J[102] = -x[114]*2.;
	J[105] = sporttournament18_pd[248];
	J[101] = x[105]*2.;
	J[103] -= sporttournament18_pd[247];
	J[101] -= x[103]*2.;
	J[102] += sporttournament18_pd[246];
	J[101] += x[102]*2.;
	J[151] += sporttournament18_pd[245];
	J[100] = x[151]*2. + -2.;
	J[100] += sporttournament18_pd[244];
	J[99] = x[100]*2. + -4.;
	J[151] += sporttournament18_pd[243];
	J[98] = x[151]*2. + -4.;
	J[151] -= sporttournament18_pd[242];
	J[97] = -x[151]*2. + -2.;
	J[105] -= sporttournament18_pd[241];
	J[96] = -x[105]*2. + -2.;
	J[98] += sporttournament18_pd[240];
	J[96] += x[98]*2.;
	J[136] += sporttournament18_pd[239];
	J[95] = x[136]*2. + -2.;
	J[102] -= sporttournament18_pd[238];
	J[95] -= x[102]*2.;
	J[98] += sporttournament18_pd[237];
	J[95] += x[98]*2.;
	J[97] += sporttournament18_pd[236];
	J[95] += x[97]*2.;
	J[119] -= sporttournament18_pd[235];
	J[94] = -x[119]*2. + -2.;
	J[96] += sporttournament18_pd[234];
	J[94] += x[96]*2.;
	J[118] += sporttournament18_pd[233];
	J[93] = x[118]*2. + -2.;
	J[96] += sporttournament18_pd[232];
	J[93] += x[96]*2.;
	J[94] += sporttournament18_pd[231];
	J[92] = x[94]*2. + -2.;
	J[119] += sporttournament18_pd[230];
	J[91] = x[119]*2. + -4.;
	J[92] += sporttournament18_pd[229];
	J[91] += x[92]*2.;
	J[132] -= sporttournament18_pd[228];
	J[90] = -x[132]*2. + 2.;
	J[92] -= sporttournament18_pd[227];
	J[90] -= x[92]*2.;
	J[152] += sporttournament18_pd[226];
	J[89] = x[152]*2. + -4.;
	J[91] += sporttournament18_pd[225];
	J[89] += x[91]*2.;
	J[91] += sporttournament18_pd[224];
	J[88] = x[91]*2. + -4.;
	J[132] -= sporttournament18_pd[223];
	J[87] = -x[132]*2. + -2.;
	J[89] += sporttournament18_pd[222];
	J[87] += x[89]*2.;
	J[152] += sporttournament18_pd[221];
	J[86] = x[152]*2. + -2.;
	J[140] += sporttournament18_pd[220];
	J[86] += x[140]*2.;
	J[148] += sporttournament18_pd[219];
	J[85] = x[148]*2. + -2.;
	J[134] -= sporttournament18_pd[218];
	J[85] -= x[134]*2.;
	J[86] += sporttournament18_pd[217];
	J[85] += x[86]*2.;
	J[146] += sporttournament18_pd[216];
	J[84] = x[146]*2. + -2.;
	J[122] = -sporttournament18_pd[215];
	J[84] -= x[122]*2.;
	J[121] += sporttournament18_pd[214];
	J[84] += x[121]*2.;
	J[146] += sporttournament18_pd[213];
	J[83] = x[146]*2. + -2.;
	J[146] -= sporttournament18_pd[212];
	J[82] = -x[146]*2. + 2.;
	J[143] += sporttournament18_pd[211];
	J[82] += x[143]*2.;
	J[133] = sporttournament18_pd[210];
	J[81] = x[133]*2. + -4.;
	J[129] += sporttournament18_pd[209];
	J[81] += x[129]*2.;
	J[83] += sporttournament18_pd[208];
	J[81] += x[83]*2.;
	J[115] += sporttournament18_pd[207];
	J[80] = x[115]*2. + -2.;
	J[83] -= sporttournament18_pd[206];
	J[80] -= x[83]*2.;
	J[81] += sporttournament18_pd[205];
	J[79] = x[81]*2. + -2.;
	J[105] += sporttournament18_pd[204];
	J[77] = x[105]*2. + -4.;
	J[78] = sporttournament18_pd[203] + -2.;
	J[77] += x[78]*2.;
	J[105] -= sporttournament18_pd[202];
	J[76] = -x[105]*2. + -2.;
	J[78] += sporttournament18_pd[201];
	J[76] += x[78]*2.;
	J[77] += sporttournament18_pd[200];
	J[75] = x[77]*2. + -4.;
	J[117] += sporttournament18_pd[199];
	J[74] = x[117]*2. + -2.;
	J[75] += sporttournament18_pd[198];
	J[74] += x[75]*2.;
	J[117] -= sporttournament18_pd[197];
	J[73] = -x[117]*2. + -2.;
	J[75] += sporttournament18_pd[196];
	J[73] += x[75]*2.;
	J[135] += sporttournament18_pd[195];
	J[72] = x[135]*2. + -2.;
	J[74] += sporttournament18_pd[194];
	J[72] += x[74]*2.;
	J[142] += sporttournament18_pd[193];
	J[71] = x[142]*2. + -2.;
	J[127] -= sporttournament18_pd[192];
	J[71] -= x[127]*2.;
	J[72] += sporttournament18_pd[191];
	J[71] += x[72]*2.;
	J[104] = -sporttournament18_pd[190];
	J[70] = -x[104]*2. + 2.;
	J[93] += sporttournament18_pd[189];
	J[70] += x[93]*2.;
	J[90] -= sporttournament18_pd[188];
	J[70] -= x[90]*2.;
	J[72] -= sporttournament18_pd[187];
	J[70] -= x[72]*2.;
	J[114] += sporttournament18_pd[186];
	J[69] = x[114]*2. + -4.;
	J[71] += sporttournament18_pd[185];
	J[69] += x[71]*2.;
	J[152] -= sporttournament18_pd[184];
	J[68] = -x[152]*2. + -2.;
	J[104] += sporttournament18_pd[183];
	J[68] += x[104]*2.;
	J[69] += sporttournament18_pd[182];
	J[68] += x[69]*2.;
	J[125] += sporttournament18_pd[181];
	J[67] = x[125]*2. + -4.;
	J[69] += sporttournament18_pd[180];
	J[67] += x[69]*2.;
	J[68] += sporttournament18_pd[179];
	J[66] = x[68]*2. + -4.;
	J[148] += sporttournament18_pd[178];
	J[65] = x[148]*2. + -2.;
	J[131] -= sporttournament18_pd[177];
	J[65] -= x[131]*2.;
	J[123] -= sporttournament18_pd[176];
	J[64] = -x[123]*2. + -2.;
	J[85] += sporttournament18_pd[175];
	J[64] += x[85]*2.;
	J[84] += sporttournament18_pd[174];
	J[64] += x[84]*2.;
	J[149] += sporttournament18_pd[173];
	J[63] = x[149]*2. + -2.;
	J[64] += sporttournament18_pd[172];
	J[63] += x[64]*2.;
	J[116] -= sporttournament18_pd[171];
	J[62] = -x[116]*2. + 2.;
	J[82] -= sporttournament18_pd[170];
	J[62] -= x[82]*2.;
	J[63] -= sporttournament18_pd[169];
	J[62] -= x[63]*2.;
	J[149] += sporttournament18_pd[168];
	J[61] = x[149]*2. + -2.;
	J[111] -= sporttournament18_pd[167];
	J[61] -= x[111]*2.;
	J[62] += sporttournament18_pd[166];
	J[61] += x[62]*2.;
	J[149] -= sporttournament18_pd[165];
	J[60] = -x[149]*2. + 2.;
	J[122] -= sporttournament18_pd[164];
	J[60] -= x[122]*2.;
	J[107] -= sporttournament18_pd[163];
	J[60] -= x[107]*2.;
	J[79] += sporttournament18_pd[162];
	J[59] = x[79]*2. + -2.;
	J[61] += sporttournament18_pd[161];
	J[59] += x[61]*2.;
	J[59] += sporttournament18_pd[160];
	J[58] = x[59]*2. + -2.;
	J[150] += sporttournament18_pd[159];
	J[57] = x[150]*2. + -2.;
	J[142] += sporttournament18_pd[158];
	J[56] = x[142]*2. + -2.;
	J[97] += sporttournament18_pd[157];
	J[56] += x[97]*2.;
	J[93] -= sporttournament18_pd[156];
	J[56] -= x[93]*2.;
	J[136] -= sporttournament18_pd[155];
	J[55] = -x[136]*2. + -2.;
	J[104] += sporttournament18_pd[154];
	J[55] += x[104]*2.;
	J[103] += sporttournament18_pd[153];
	J[55] += x[103]*2.;
	J[145] += sporttournament18_pd[152];
	J[54] = x[145]*2. + -4.;
	J[118] += sporttournament18_pd[151];
	J[54] += x[118]*2.;
	J[104] -= sporttournament18_pd[150];
	J[53] = -x[104]*2. + -2.;
	J[66] += sporttournament18_pd[149];
	J[53] += x[66]*2.;
	J[54] += sporttournament18_pd[148];
	J[53] += x[54]*2.;
	J[127] += sporttournament18_pd[147];
	J[52] = x[127]*2. + -4.;
	J[54] += sporttournament18_pd[146];
	J[52] += x[54]*2.;
	J[148] -= sporttournament18_pd[145];
	J[51] = -x[148]*2. + -2.;
	J[88] += sporttournament18_pd[144];
	J[51] += x[88]*2.;
	J[53] += sporttournament18_pd[143];
	J[51] += x[53]*2.;
	J[120] += sporttournament18_pd[142];
	J[50] = x[120]*2. + -4.;
	J[87] += sporttournament18_pd[141];
	J[50] += x[87]*2.;
	J[66] += sporttournament18_pd[140];
	J[50] += x[66]*2.;
	J[65] += sporttournament18_pd[139];
	J[50] += x[65]*2.;
	J[140] -= sporttournament18_pd[138];
	J[49] = -x[140]*2. + -2.;
	J[66] += sporttournament18_pd[137];
	J[49] += x[66]*2.;
	J[147] += sporttournament18_pd[136];
	J[48] = x[147]*2. + -2.;
	J[126] = -sporttournament18_pd[135];
	J[48] -= x[126]*2.;
	J[65] += sporttournament18_pd[134];
	J[48] += x[65]*2.;
	J[63] += sporttournament18_pd[133];
	J[48] += x[63]*2.;
	J[147] -= sporttournament18_pd[132];
	J[47] = -x[147]*2. + 2.;
	J[83] += sporttournament18_pd[131];
	J[47] += x[83]*2.;
	J[133] -= sporttournament18_pd[130];
	J[46] = -x[133]*2. + -2.;
	J[60] += sporttournament18_pd[129];
	J[46] += x[60]*2.;
	J[58] += sporttournament18_pd[128];
	J[46] += x[58]*2.;
	J[143] += sporttournament18_pd[127];
	J[45] = x[143]*2. + -2.;
	J[46] += sporttournament18_pd[126];
	J[45] += x[46]*2.;
	J[99] += sporttournament18_pd[125];
	J[44] = x[99]*2. + -2.;
	J[137] += sporttournament18_pd[124];
	J[43] = x[137]*2. + -4.;
	J[98] += sporttournament18_pd[123];
	J[43] += x[98]*2.;
	J[44] += sporttournament18_pd[122];
	J[43] += x[44]*2.;
	J[141] += sporttournament18_pd[121];
	J[42] = x[141]*2. + -4.;
	J[128] += sporttournament18_pd[120];
	J[42] += x[128]*2.;
	J[99] += sporttournament18_pd[119];
	J[42] += x[99]*2.;
	J[73] += sporttournament18_pd[118];
	J[42] += x[73]*2.;
	J[101] -= sporttournament18_pd[117];
	J[41] = -x[101]*2. + 2.;
	J[99] += sporttournament18_pd[116];
	J[41] += x[99]*2.;
	J[74] -= sporttournament18_pd[115];
	J[41] -= x[74]*2.;
	J[57] -= sporttournament18_pd[114];
	J[41] -= x[57]*2.;
	J[92] += sporttournament18_pd[113];
	J[40] = x[92]*2. + -2.;
	J[73] += sporttournament18_pd[112];
	J[40] += x[73]*2.;
	J[102] += sporttournament18_pd[111];
	J[39] = x[102]*2. + -4.;
	J[40] += sporttournament18_pd[110];
	J[39] += x[40]*2.;
	J[118] -= sporttournament18_pd[109];
	J[38] = -x[118]*2. + -2.;
	J[88] += sporttournament18_pd[108];
	J[38] += x[88]*2.;
	J[39] += sporttournament18_pd[107];
	J[38] += x[39]*2.;
	J[89] += sporttournament18_pd[106];
	J[37] = x[89]*2. + -4.;
	J[55] += sporttournament18_pd[105];
	J[37] += x[55]*2.;
	J[39] += sporttournament18_pd[104];
	J[37] += x[39]*2.;
	J[90] += sporttournament18_pd[103];
	J[36] = x[90]*2. + -4.;
	J[38] += sporttournament18_pd[102];
	J[36] += x[38]*2.;
	J[88] += sporttournament18_pd[101];
	J[35] = x[88]*2. + -2.;
	J[86] -= sporttournament18_pd[100];
	J[35] -= x[86]*2.;
	J[67] += sporttournament18_pd[99];
	J[35] += x[67]*2.;
	J[51] += sporttournament18_pd[98];
	J[34] = x[51]*2. + -4.;
	J[144] -= sporttournament18_pd[97];
	J[33] = -x[144]*2. + 4.;
	J[133] -= sporttournament18_pd[96];
	J[33] -= x[133]*2.;
	J[110] -= sporttournament18_pd[95];
	J[33] -= x[110]*2.;
	J[109] -= sporttournament18_pd[94];
	J[33] -= x[109]*2.;
	J[106] += sporttournament18_pd[93];
	J[32] = x[106]*2. + -2.;
	J[82] -= sporttournament18_pd[92];
	J[32] -= x[82]*2.;
	J[76] += sporttournament18_pd[91];
	J[31] = x[76]*2. + -2.;
	J[138] += sporttournament18_pd[90];
	J[30] = x[138]*2. + -2.;
	J[137] -= sporttournament18_pd[89];
	J[30] -= x[137]*2.;
	J[75] += sporttournament18_pd[88];
	J[30] += x[75]*2.;
	J[31] += sporttournament18_pd[87];
	J[30] += x[31]*2.;
	J[128] -= sporttournament18_pd[86];
	J[29] = -x[128]*2. + -2.;
	J[76] += sporttournament18_pd[85];
	J[29] += x[76]*2.;
	J[56] += sporttournament18_pd[84];
	J[29] += x[56]*2.;
	J[137] += sporttournament18_pd[83];
	J[28] = x[137]*2. + -2.;
	J[94] += sporttournament18_pd[82];
	J[28] += x[94]*2.;
	J[40] -= sporttournament18_pd[81];
	J[28] -= x[40]*2.;
	J[29] += sporttournament18_pd[80];
	J[28] += x[29]*2.;
	J[125] += sporttournament18_pd[79];
	J[27] = x[125]*2. + -4.;
	J[37] += sporttournament18_pd[78];
	J[27] += x[37]*2.;
	J[67] += sporttournament18_pd[77];
	J[26] = x[67]*2. + -4.;
	J[52] += sporttournament18_pd[76];
	J[26] += x[52]*2.;
	J[49] += sporttournament18_pd[75];
	J[26] += x[49]*2.;
	J[130] += sporttournament18_pd[74];
	J[25] = x[130]*2. + -4.;
	J[35] += sporttournament18_pd[73];
	J[25] += x[35]*2.;
	J[139] += sporttournament18_pd[72];
	J[24] = x[139]*2. + -2.;
	J[134] += sporttournament18_pd[71];
	J[24] += x[134]*2.;
	J[113] -= sporttournament18_pd[70];
	J[24] -= x[113]*2.;
	J[116] += sporttournament18_pd[69];
	J[23] = x[116]*2. + -4.;
	J[110] += sporttournament18_pd[68];
	J[23] += x[110]*2.;
	J[24] += sporttournament18_pd[67];
	J[23] += x[24]*2.;
	J[143] -= sporttournament18_pd[66];
	J[22] = -x[143]*2. + 2.;
	J[112] -= sporttournament18_pd[65];
	J[22] -= x[112]*2.;
	J[47] -= sporttournament18_pd[64];
	J[22] -= x[47]*2.;
	J[23] += sporttournament18_pd[63];
	J[22] += x[23]*2.;
	J[57] += sporttournament18_pd[62];
	J[21] = x[57]*2. + -2.;
	J[97] += sporttournament18_pd[61];
	J[20] = x[97]*2. + -2.;
	J[21] += sporttournament18_pd[60];
	J[20] += x[21]*2.;
	J[141] += sporttournament18_pd[59];
	J[19] = x[141]*2. + -2.;
	J[135] += sporttournament18_pd[58];
	J[19] += x[135]*2.;
	J[57] += sporttournament18_pd[57];
	J[19] += x[57]*2.;
	J[20] -= sporttournament18_pd[56];
	J[19] -= x[20]*2.;
	J[52] += sporttournament18_pd[55];
	J[18] = x[52]*2. + -4.;
	J[36] += sporttournament18_pd[54];
	J[18] += x[36]*2.;
	J[34] += sporttournament18_pd[53];
	J[18] += x[34]*2.;
	J[130] += sporttournament18_pd[52];
	J[17] = x[130]*2. + -4.;
	J[126] += sporttournament18_pd[51];
	J[17] += x[126]*2.;
	J[26] += sporttournament18_pd[50];
	J[17] += x[26]*2.;
	J[139] -= sporttournament18_pd[49];
	J[16] = -x[139]*2. + -2.;
	J[49] += sporttournament18_pd[48];
	J[16] += x[49]*2.;
	J[34] += sporttournament18_pd[47];
	J[16] += x[34]*2.;
	J[139] += sporttournament18_pd[46];
	J[15] = x[139]*2. + -4.;
	J[122] += sporttournament18_pd[45];
	J[15] += x[122]*2.;
	J[108] += sporttournament18_pd[44];
	J[15] += x[108]*2.;
	J[133] += sporttournament18_pd[43];
	J[14] = x[133]*2. + -4.;
	J[106] += sporttournament18_pd[42];
	J[14] += x[106]*2.;
	J[15] += sporttournament18_pd[41];
	J[14] += x[15]*2.;
	J[128] += sporttournament18_pd[40];
	J[13] = x[128]*2. + -2.;
	J[43] += sporttournament18_pd[39];
	J[13] += x[43]*2.;
	J[124] += sporttournament18_pd[38];
	J[12] = x[124]*2. + -4.;
	J[36] += sporttournament18_pd[37];
	J[12] += x[36]*2.;
	J[27] += sporttournament18_pd[36];
	J[12] += x[27]*2.;
	J[25] += sporttournament18_pd[35];
	J[12] += x[25]*2.;
	J[126] += sporttournament18_pd[34];
	J[11] = x[126]*2. + -4.;
	J[123] += sporttournament18_pd[33];
	J[11] += x[123]*2.;
	J[87] += sporttournament18_pd[32];
	J[11] += x[87]*2.;
	J[18] += sporttournament18_pd[31];
	J[11] += x[18]*2.;
	J[134] -= sporttournament18_pd[30];
	J[10] = -x[134]*2. + -2.;
	J[34] += sporttournament18_pd[29];
	J[10] += x[34]*2.;
	J[25] += sporttournament18_pd[28];
	J[10] += x[25]*2.;
	J[123] -= sporttournament18_pd[27];
	J[9] = -x[123]*2. + -2.;
	J[116] += sporttournament18_pd[26];
	J[9] += x[116]*2.;
	J[16] += sporttournament18_pd[25];
	J[9] += x[16]*2.;
	J[122] += sporttournament18_pd[24];
	J[8] = x[122]*2. + -2.;
	J[113] += sporttournament18_pd[23];
	J[8] += x[113]*2.;
	J[80] += sporttournament18_pd[22];
	J[8] += x[80]*2.;
	J[59] -= sporttournament18_pd[21];
	J[8] -= x[59]*2.;
	J[132] += sporttournament18_pd[20];
	J[7] = x[132]*2. + -2.;
	J[124] -= sporttournament18_pd[19];
	J[7] -= x[124]*2.;
	J[27] += sporttournament18_pd[18];
	J[7] += x[27]*2.;
	J[17] += sporttournament18_pd[17];
	J[7] += x[17]*2.;
	J[126] -= sporttournament18_pd[16];
	J[6] = -x[126]*2. + -2.;
	J[109] += sporttournament18_pd[15];
	J[6] += x[109]*2.;
	J[10] += sporttournament18_pd[14];
	J[6] += x[10]*2.;
	J[77] += sporttournament18_pd[13];
	J[5] = x[77]*2. + -2.;
	J[20] += sporttournament18_pd[12];
	J[5] += x[20]*2.;
	J[112] += sporttournament18_pd[11];
	J[4] = x[112]*2. + -2.;
	J[32] += sporttournament18_pd[10];
	J[4] += x[32]*2.;
	J[107] += sporttournament18_pd[9];
	J[3] = x[107]*2. + -2.;
	J[32] += sporttournament18_pd[8];
	J[3] += x[32]*2.;
	J[111] += sporttournament18_pd[7];
	J[2] = x[111]*2. + -2.;
	J[107] += sporttournament18_pd[6];
	J[2] += x[107]*2.;
	J[111] += sporttournament18_pd[5];
	J[1] = x[111]*2. + -2.;
	J[80] += sporttournament18_pd[4];
	J[1] += x[80]*2.;
	J[47] -= sporttournament18_pd[3];
	J[0] = -x[47]*2. + -2.;
	J[14] += sporttournament18_pd[2];
	J[0] += x[14]*2.;
	J[9] += sporttournament18_pd[1];
	J[0] += x[9]*2.;
	J[6] += sporttournament18_pd[0];
	J[0] += x[6]*2.;
	J[153] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
