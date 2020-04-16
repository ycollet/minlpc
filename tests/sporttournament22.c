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
 fint sporttournament22_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament22_funcom_[471] = {
	232 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	232 /* nzc */,
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
	156,
	157,
	158,
	159,
	160,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
	224,
	225,
	226,
	227,
	228,
	229,
	230,
	231,
	232,
	233,

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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
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

 real sporttournament22_boundc_[1+464+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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

 real sporttournament22_x0comn_[232] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sporttournament22_pd[440];
static real sporttournament22_old_x[232];
static int sporttournament22_xkind = -1;

 static int
sporttournament22_xcheck(real *x)
{
	real *x1 = sporttournament22_old_x, *xe = x + 232;
	errno = 0;
	if (sporttournament22_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament22_xkind = 0;
	return 1;
	}
 real
sporttournament22_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament22_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[231];
	;}

	if (wantfg & 2) {
	g[231] = 1.;
	}

	return rv;
}

 void
sporttournament22_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament22_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament22_pd[0] = 2. * x[0];
	v[0] = sporttournament22_pd[0] * x[1];
	sporttournament22_pd[1] = 2. * x[0];
	v[1] = sporttournament22_pd[1] * x[84];
	v[0] += v[1];
	sporttournament22_pd[2] = 2. * x[0];
	v[1] = sporttournament22_pd[2] * x[165];
	v[0] += v[1];
	sporttournament22_pd[3] = 2. * x[0];
	v[1] = sporttournament22_pd[3] * x[169];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[4] = 2. * x[1];
	v[2] = sporttournament22_pd[4] * x[61];
	v[0] += v[2];
	sporttournament22_pd[5] = 2. * x[1];
	v[2] = sporttournament22_pd[5] * x[124];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[6] = 2. * x[1];
	v[1] = sporttournament22_pd[6] * x[166];
	v[0] += v[1];
	sporttournament22_pd[7] = 2. * x[2];
	v[1] = sporttournament22_pd[7] * x[88];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[8] = 2. * x[2];
	v[2] = sporttournament22_pd[8] * x[171];
	v[0] += v[2];
	sporttournament22_pd[9] = 2. * x[2];
	v[2] = sporttournament22_pd[9] * x[179];
	v[0] += v[2];
	sporttournament22_pd[10] = 2. * x[2];
	v[2] = sporttournament22_pd[10] * x[180];
	v[0] += v[2];
	sporttournament22_pd[11] = 2. * x[3];
	v[2] = sporttournament22_pd[11] * x[109];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[12] = 2. * x[3];
	v[1] = sporttournament22_pd[12] * x[168];
	v[0] += v[1];
	sporttournament22_pd[13] = 2. * x[3];
	v[1] = sporttournament22_pd[13] * x[171];
	v[0] += v[1];
	sporttournament22_pd[14] = 2. * x[3];
	v[1] = sporttournament22_pd[14] * x[185];
	v[0] += v[1];
	sporttournament22_pd[15] = 2. * x[4];
	v[1] = sporttournament22_pd[15] * x[7];
	v[0] += v[1];
	sporttournament22_pd[16] = 2. * x[4];
	v[1] = sporttournament22_pd[16] * x[175];
	v[0] += v[1];
	sporttournament22_pd[17] = 2. * x[5];
	v[1] = sporttournament22_pd[17] * x[35];
	v[0] += v[1];
	sporttournament22_pd[18] = 2. * x[5];
	v[1] = sporttournament22_pd[18] * x[49];
	v[0] += v[1];
	sporttournament22_pd[19] = 2. * x[5];
	v[1] = sporttournament22_pd[19] * x[134];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[20] = 2. * x[5];
	v[2] = sporttournament22_pd[20] * x[168];
	v[0] += v[2];
	sporttournament22_pd[21] = 2. * x[6];
	v[2] = sporttournament22_pd[21] * x[19];
	v[0] += v[2];
	sporttournament22_pd[22] = 2. * x[6];
	v[2] = sporttournament22_pd[22] * x[117];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[23] = 2. * x[6];
	v[1] = sporttournament22_pd[23] * x[193];
	v[0] += v[1];
	sporttournament22_pd[24] = 2. * x[6];
	v[1] = sporttournament22_pd[24] * x[194];
	v[0] += v[1];
	sporttournament22_pd[25] = 2. * x[7];
	v[1] = sporttournament22_pd[25] * x[47];
	v[0] += v[1];
	sporttournament22_pd[26] = 2. * x[7];
	v[1] = sporttournament22_pd[26] * x[49];
	v[0] += v[1];
	sporttournament22_pd[27] = 2. * x[7];
	v[1] = sporttournament22_pd[27] * x[172];
	v[0] += v[1];
	sporttournament22_pd[28] = 2. * x[8];
	v[1] = sporttournament22_pd[28] * x[19];
	v[0] += v[1];
	sporttournament22_pd[29] = 2. * x[8];
	v[1] = sporttournament22_pd[29] * x[28];
	v[0] += v[1];
	sporttournament22_pd[30] = 2. * x[8];
	v[1] = sporttournament22_pd[30] * x[75];
	v[0] += v[1];
	sporttournament22_pd[31] = 2. * x[8];
	v[1] = sporttournament22_pd[31] * x[145];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[32] = 2. * x[9];
	v[2] = sporttournament22_pd[32] * x[28];
	v[0] += v[2];
	sporttournament22_pd[33] = 2. * x[9];
	v[2] = sporttournament22_pd[33] * x[39];
	v[0] += v[2];
	sporttournament22_pd[34] = 2. * x[9];
	v[2] = sporttournament22_pd[34] * x[98];
	v[0] += v[2];
	sporttournament22_pd[35] = 2. * x[9];
	v[2] = sporttournament22_pd[35] * x[202];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[36] = 2. * x[10];
	v[1] = sporttournament22_pd[36] * x[22];
	v[0] += v[1];
	sporttournament22_pd[37] = 2. * x[10];
	v[1] = sporttournament22_pd[37] * x[132];
	v[0] += v[1];
	sporttournament22_pd[38] = 2. * x[11];
	v[1] = sporttournament22_pd[38] * x[39];
	v[0] += v[1];
	sporttournament22_pd[39] = 2. * x[11];
	v[1] = sporttournament22_pd[39] * x[55];
	v[0] += v[1];
	sporttournament22_pd[40] = 2. * x[11];
	v[1] = sporttournament22_pd[40] * x[118];
	v[0] += v[1];
	sporttournament22_pd[41] = 2. * x[11];
	v[1] = sporttournament22_pd[41] * x[206];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[42] = 2. * x[12];
	v[2] = sporttournament22_pd[42] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[43] = 2. * x[12];
	v[1] = sporttournament22_pd[43] * x[30];
	v[0] += v[1];
	sporttournament22_pd[44] = 2. * x[12];
	v[1] = sporttournament22_pd[44] * x[39];
	v[0] += v[1];
	sporttournament22_pd[45] = 2. * x[12];
	v[1] = sporttournament22_pd[45] * x[207];
	v[0] += v[1];
	sporttournament22_pd[46] = 2. * x[13];
	v[1] = sporttournament22_pd[46] * x[55];
	v[0] += v[1];
	sporttournament22_pd[47] = 2. * x[13];
	v[1] = sporttournament22_pd[47] * x[76];
	v[0] += v[1];
	sporttournament22_pd[48] = 2. * x[13];
	v[1] = sporttournament22_pd[48] * x[146];
	v[0] += v[1];
	sporttournament22_pd[49] = 2. * x[13];
	v[1] = sporttournament22_pd[49] * x[206];
	v[0] += v[1];
	sporttournament22_pd[50] = 2. * x[14];
	v[1] = sporttournament22_pd[50] * x[30];
	v[0] += v[1];
	sporttournament22_pd[51] = 2. * x[14];
	v[1] = sporttournament22_pd[51] * x[41];
	v[0] += v[1];
	sporttournament22_pd[52] = 2. * x[14];
	v[1] = sporttournament22_pd[52] * x[55];
	v[0] += v[1];
	sporttournament22_pd[53] = 2. * x[14];
	v[1] = sporttournament22_pd[53] * x[194];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[54] = 2. * x[15];
	v[2] = sporttournament22_pd[54] * x[45];
	v[0] += v[2];
	sporttournament22_pd[55] = 2. * x[15];
	v[2] = sporttournament22_pd[55] * x[204];
	v[0] += v[2];
	sporttournament22_pd[56] = 2. * x[16];
	v[2] = sporttournament22_pd[56] * x[17];
	v[0] += v[2];
	sporttournament22_pd[57] = 2. * x[16];
	v[2] = sporttournament22_pd[57] * x[24];
	v[0] += v[2];
	sporttournament22_pd[58] = 2. * x[16];
	v[2] = sporttournament22_pd[58] * x[92];
	v[0] += v[2];
	sporttournament22_pd[59] = 2. * x[16];
	v[2] = sporttournament22_pd[59] * x[181];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[60] = 2. * x[17];
	v[1] = sporttournament22_pd[60] * x[25];
	v[0] += v[1];
	sporttournament22_pd[61] = 2. * x[17];
	v[1] = sporttournament22_pd[61] * x[37];
	v[0] += v[1];
	sporttournament22_pd[62] = 2. * x[17];
	v[1] = sporttournament22_pd[62] * x[213];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[63] = 2. * x[18];
	v[2] = sporttournament22_pd[63] * x[76];
	v[0] += v[2];
	sporttournament22_pd[64] = 2. * x[18];
	v[2] = sporttournament22_pd[64] * x[100];
	v[0] += v[2];
	sporttournament22_pd[65] = 2. * x[18];
	v[2] = sporttournament22_pd[65] * x[162];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[66] = 2. * x[18];
	v[1] = sporttournament22_pd[66] * x[202];
	v[0] += v[1];
	sporttournament22_pd[67] = 2. * x[19];
	v[1] = sporttournament22_pd[67] * x[29];
	v[0] += v[1];
	sporttournament22_pd[68] = 2. * x[20];
	v[1] = sporttournament22_pd[68] * x[41];
	v[0] += v[1];
	sporttournament22_pd[69] = 2. * x[20];
	v[1] = sporttournament22_pd[69] * x[57];
	v[0] += v[1];
	sporttournament22_pd[70] = 2. * x[20];
	v[1] = sporttournament22_pd[70] * x[76];
	v[0] += v[1];
	sporttournament22_pd[71] = 2. * x[20];
	v[1] = sporttournament22_pd[71] * x[194];
	v[0] += v[1];
	sporttournament22_pd[72] = 2. * x[21];
	v[1] = sporttournament22_pd[72] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[73] = 2. * x[21];
	v[2] = sporttournament22_pd[73] * x[43];
	v[0] += v[2];
	sporttournament22_pd[74] = 2. * x[21];
	v[2] = sporttournament22_pd[74] * x[65];
	v[0] += v[2];
	sporttournament22_pd[75] = 2. * x[21];
	v[2] = sporttournament22_pd[75] * x[212];
	v[0] += v[2];
	sporttournament22_pd[76] = 2. * x[22];
	v[2] = sporttournament22_pd[76] * x[23];
	v[0] += v[2];
	sporttournament22_pd[77] = 2. * x[22];
	v[2] = sporttournament22_pd[77] * x[64];
	v[0] += v[2];
	sporttournament22_pd[78] = 2. * x[23];
	v[2] = sporttournament22_pd[78] * x[65];
	v[0] += v[2];
	sporttournament22_pd[79] = 2. * x[24];
	v[2] = sporttournament22_pd[79] * x[26];
	v[0] += v[2];
	sporttournament22_pd[80] = 2. * x[24];
	v[2] = sporttournament22_pd[80] * x[52];
	v[0] += v[2];
	sporttournament22_pd[81] = 2. * x[24];
	v[2] = sporttournament22_pd[81] * x[115];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[82] = 2. * x[25];
	v[1] = sporttournament22_pd[82] * x[27];
	v[0] += v[1];
	sporttournament22_pd[83] = 2. * x[25];
	v[1] = sporttournament22_pd[83] * x[163];
	v[0] += v[1];
	sporttournament22_pd[84] = 2. * x[25];
	v[1] = sporttournament22_pd[84] * x[192];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[85] = 2. * x[26];
	v[2] = sporttournament22_pd[85] * x[27];
	v[0] += v[2];
	sporttournament22_pd[86] = 2. * x[26];
	v[2] = sporttournament22_pd[86] * x[163];
	v[0] += v[2];
	sporttournament22_pd[87] = 2. * x[26];
	v[2] = sporttournament22_pd[87] * x[211];
	v[0] += v[2];
	sporttournament22_pd[88] = 2. * x[27];
	v[2] = sporttournament22_pd[88] * x[117];
	v[0] += v[2];
	sporttournament22_pd[89] = 2. * x[27];
	v[2] = sporttournament22_pd[89] * x[162];
	v[0] += v[2];
	sporttournament22_pd[90] = 2. * x[28];
	v[2] = sporttournament22_pd[90] * x[40];
	v[0] += v[2];
	sporttournament22_pd[91] = 2. * x[28];
	v[2] = sporttournament22_pd[91] * x[149];
	v[0] += v[2];
	sporttournament22_pd[92] = 2. * x[29];
	v[2] = sporttournament22_pd[92] * x[57];
	v[0] += v[2];
	sporttournament22_pd[93] = 2. * x[29];
	v[2] = sporttournament22_pd[93] * x[79];
	v[0] += v[2];
	sporttournament22_pd[94] = 2. * x[29];
	v[2] = sporttournament22_pd[94] * x[100];
	v[0] += v[2];
	sporttournament22_pd[95] = 2. * x[30];
	v[2] = sporttournament22_pd[95] * x[58];
	v[0] += v[2];
	sporttournament22_pd[96] = 2. * x[30];
	v[2] = sporttournament22_pd[96] * x[199];
	v[0] += v[2];
	sporttournament22_pd[97] = 2. * x[31];
	v[2] = sporttournament22_pd[97] * x[32];
	v[0] += v[2];
	sporttournament22_pd[98] = 2. * x[31];
	v[2] = sporttournament22_pd[98] * x[62];
	v[0] += v[2];
	sporttournament22_pd[99] = 2. * x[31];
	v[2] = sporttournament22_pd[99] * x[209];
	v[0] += v[2];
	sporttournament22_pd[100] = 2. * x[31];
	v[2] = sporttournament22_pd[100] * x[215];
	v[0] += v[2];
	sporttournament22_pd[101] = 2. * x[32];
	v[2] = sporttournament22_pd[101] * x[63];
	v[0] += v[2];
	sporttournament22_pd[102] = 2. * x[32];
	v[2] = sporttournament22_pd[102] * x[86];
	v[0] += v[2];
	sporttournament22_pd[103] = 2. * x[32];
	v[2] = sporttournament22_pd[103] * x[204];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[104] = 2. * x[33];
	v[1] = sporttournament22_pd[104] * x[34];
	v[0] += v[1];
	sporttournament22_pd[105] = 2. * x[33];
	v[1] = sporttournament22_pd[105] * x[85];
	v[0] += v[1];
	sporttournament22_pd[106] = 2. * x[33];
	v[1] = sporttournament22_pd[106] * x[209];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[107] = 2. * x[33];
	v[2] = sporttournament22_pd[107] * x[210];
	v[0] += v[2];
	sporttournament22_pd[108] = 2. * x[34];
	v[2] = sporttournament22_pd[108] * x[86];
	v[0] += v[2];
	sporttournament22_pd[109] = 2. * x[35];
	v[2] = sporttournament22_pd[109] * x[48];
	v[0] += v[2];
	sporttournament22_pd[110] = 2. * x[36];
	v[2] = sporttournament22_pd[110] * x[48];
	v[0] += v[2];
	sporttournament22_pd[111] = 2. * x[36];
	v[2] = sporttournament22_pd[111] * x[90];
	v[0] += v[2];
	sporttournament22_pd[112] = 2. * x[36];
	v[2] = sporttournament22_pd[112] * x[175];
	v[0] += v[2];
	sporttournament22_pd[113] = 2. * x[36];
	v[2] = sporttournament22_pd[113] * x[201];
	v[0] += v[2];
	sporttournament22_pd[114] = 2. * x[37];
	v[2] = sporttournament22_pd[114] * x[38];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[115] = 2. * x[37];
	v[1] = sporttournament22_pd[115] * x[176];
	v[0] += v[1];
	sporttournament22_pd[116] = 2. * x[37];
	v[1] = sporttournament22_pd[116] * x[188];
	v[0] += v[1];
	sporttournament22_pd[117] = 2. * x[38];
	v[1] = sporttournament22_pd[117] * x[97];
	v[0] += v[1];
	sporttournament22_pd[118] = 2. * x[38];
	v[1] = sporttournament22_pd[118] * x[145];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[119] = 2. * x[38];
	v[2] = sporttournament22_pd[119] * x[217];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[120] = 2. * x[39];
	v[1] = sporttournament22_pd[120] * x[56];
	v[0] += v[1];
	sporttournament22_pd[121] = 2. * x[40];
	v[1] = sporttournament22_pd[121] * x[79];
	v[0] += v[1];
	sporttournament22_pd[122] = 2. * x[40];
	v[1] = sporttournament22_pd[122] * x[103];
	v[0] += v[1];
	sporttournament22_pd[123] = 2. * x[40];
	v[1] = sporttournament22_pd[123] * x[148];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[124] = 2. * x[41];
	v[2] = sporttournament22_pd[124] * x[152];
	v[0] += v[2];
	sporttournament22_pd[125] = 2. * x[41];
	v[2] = sporttournament22_pd[125] * x[195];
	v[0] += v[2];
	sporttournament22_pd[126] = 2. * x[42];
	v[2] = sporttournament22_pd[126] * x[43];
	v[0] += v[2];
	sporttournament22_pd[127] = 2. * x[42];
	v[2] = sporttournament22_pd[127] * x[155];
	v[0] += v[2];
	sporttournament22_pd[128] = 2. * x[42];
	v[2] = sporttournament22_pd[128] * x[212];
	v[0] += v[2];
	sporttournament22_pd[129] = 2. * x[42];
	v[2] = sporttournament22_pd[129] * x[219];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[130] = 2. * x[43];
	v[1] = sporttournament22_pd[130] * x[44];
	v[0] += v[1];
	sporttournament22_pd[131] = 2. * x[43];
	v[1] = sporttournament22_pd[131] * x[82];
	v[0] += v[1];
	sporttournament22_pd[132] = 2. * x[44];
	v[1] = sporttournament22_pd[132] * x[83];
	v[0] += v[1];
	sporttournament22_pd[133] = 2. * x[44];
	v[1] = sporttournament22_pd[133] * x[108];
	v[0] += v[1];
	sporttournament22_pd[134] = 2. * x[44];
	v[1] = sporttournament22_pd[134] * x[204];
	v[0] += v[1];
	sporttournament22_pd[135] = 2. * x[45];
	v[1] = sporttournament22_pd[135] * x[46];
	v[0] += v[1];
	sporttournament22_pd[136] = 2. * x[45];
	v[1] = sporttournament22_pd[136] * x[158];
	v[0] += v[1];
	sporttournament22_pd[137] = 2. * x[45];
	v[1] = sporttournament22_pd[137] * x[209];
	v[0] += v[1];
	sporttournament22_pd[138] = 2. * x[46];
	v[1] = sporttournament22_pd[138] * x[108];
	v[0] += v[1];
	sporttournament22_pd[139] = 2. * x[47];
	v[1] = sporttournament22_pd[139] * x[68];
	v[0] += v[1];
	sporttournament22_pd[140] = 2. * x[48];
	v[1] = sporttournament22_pd[140] * x[50];
	v[0] += v[1];
	sporttournament22_pd[141] = 2. * x[48];
	v[1] = sporttournament22_pd[141] * x[185];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[142] = 2. * x[49];
	v[2] = sporttournament22_pd[142] * x[137];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[143] = 2. * x[49];
	v[1] = sporttournament22_pd[143] * x[167];
	v[0] += v[1];
	sporttournament22_pd[144] = 2. * x[50];
	v[1] = sporttournament22_pd[144] * x[68];
	v[0] += v[1];
	sporttournament22_pd[145] = 2. * x[50];
	v[1] = sporttournament22_pd[145] * x[137];
	v[0] += v[1];
	sporttournament22_pd[146] = 2. * x[50];
	v[1] = sporttournament22_pd[146] * x[205];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[147] = 2. * x[51];
	v[2] = sporttournament22_pd[147] * x[52];
	v[0] += v[2];
	sporttournament22_pd[148] = 2. * x[51];
	v[2] = sporttournament22_pd[148] * x[53];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[149] = 2. * x[51];
	v[1] = sporttournament22_pd[149] * x[170];
	v[0] += v[1];
	sporttournament22_pd[150] = 2. * x[51];
	v[1] = sporttournament22_pd[150] * x[201];
	v[0] += v[1];
	sporttournament22_pd[151] = 2. * x[52];
	v[1] = sporttournament22_pd[151] * x[114];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[152] = 2. * x[52];
	v[2] = sporttournament22_pd[152] * x[181];
	v[0] += v[2];
	sporttournament22_pd[153] = 2. * x[53];
	v[2] = sporttournament22_pd[153] * x[114];
	v[0] += v[2];
	sporttournament22_pd[154] = 2. * x[53];
	v[2] = sporttournament22_pd[154] * x[141];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[155] = 2. * x[53];
	v[1] = sporttournament22_pd[155] * x[220];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[156] = 2. * x[54];
	v[2] = sporttournament22_pd[156] * x[183];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[157] = 2. * x[54];
	v[1] = sporttournament22_pd[157] * x[193];
	v[0] += v[1];
	sporttournament22_pd[158] = 2. * x[54];
	v[1] = sporttournament22_pd[158] * x[202];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[159] = 2. * x[54];
	v[2] = sporttournament22_pd[159] * x[221];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[160] = 2. * x[55];
	v[1] = sporttournament22_pd[160] * x[78];
	v[0] += v[1];
	sporttournament22_pd[161] = 2. * x[56];
	v[1] = sporttournament22_pd[161] * x[103];
	v[0] += v[1];
	sporttournament22_pd[162] = 2. * x[56];
	v[1] = sporttournament22_pd[162] * x[121];
	v[0] += v[1];
	sporttournament22_pd[163] = 2. * x[56];
	v[1] = sporttournament22_pd[163] * x[218];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[164] = 2. * x[57];
	v[2] = sporttournament22_pd[164] * x[59];
	v[0] += v[2];
	sporttournament22_pd[165] = 2. * x[57];
	v[2] = sporttournament22_pd[165] * x[203];
	v[0] += v[2];
	sporttournament22_pd[166] = 2. * x[58];
	v[2] = sporttournament22_pd[166] * x[60];
	v[0] += v[2];
	sporttournament22_pd[167] = 2. * x[58];
	v[2] = sporttournament22_pd[167] * x[61];
	v[0] += v[2];
	sporttournament22_pd[168] = 2. * x[58];
	v[2] = sporttournament22_pd[168] * x[151];
	v[0] += v[2];
	sporttournament22_pd[169] = 2. * x[59];
	v[2] = sporttournament22_pd[169] * x[61];
	v[0] += v[2];
	sporttournament22_pd[170] = 2. * x[59];
	v[2] = sporttournament22_pd[170] * x[121];
	v[0] += v[2];
	sporttournament22_pd[171] = 2. * x[59];
	v[2] = sporttournament22_pd[171] * x[184];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[172] = 2. * x[60];
	v[1] = sporttournament22_pd[172] * x[62];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[173] = 2. * x[60];
	v[2] = sporttournament22_pd[173] * x[126];
	v[0] += v[2];
	sporttournament22_pd[174] = 2. * x[60];
	v[2] = sporttournament22_pd[174] * x[164];
	v[0] += v[2];
	sporttournament22_pd[175] = 2. * x[61];
	v[2] = sporttournament22_pd[175] * x[62];
	v[0] += v[2];
	sporttournament22_pd[176] = 2. * x[62];
	v[2] = sporttournament22_pd[176] * x[63];
	v[0] += v[2];
	sporttournament22_pd[177] = 2. * x[63];
	v[2] = sporttournament22_pd[177] * x[64];
	v[0] += v[2];
	sporttournament22_pd[178] = 2. * x[63];
	v[2] = sporttournament22_pd[178] * x[106];
	v[0] += v[2];
	sporttournament22_pd[179] = 2. * x[64];
	v[2] = sporttournament22_pd[179] * x[107];
	v[0] += v[2];
	sporttournament22_pd[180] = 2. * x[64];
	v[2] = sporttournament22_pd[180] * x[131];
	v[0] += v[2];
	sporttournament22_pd[181] = 2. * x[65];
	v[2] = sporttournament22_pd[181] * x[66];
	v[0] += v[2];
	sporttournament22_pd[182] = 2. * x[65];
	v[2] = sporttournament22_pd[182] * x[130];
	v[0] += v[2];
	sporttournament22_pd[183] = 2. * x[66];
	v[2] = sporttournament22_pd[183] * x[131];
	v[0] += v[2];
	sporttournament22_pd[184] = 2. * x[67];
	v[2] = sporttournament22_pd[184] * x[175];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[185] = 2. * x[67];
	v[1] = sporttournament22_pd[185] * x[222];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[186] = 2. * x[68];
	v[2] = sporttournament22_pd[186] * x[69];
	v[0] += v[2];
	sporttournament22_pd[187] = 2. * x[68];
	v[2] = sporttournament22_pd[187] * x[179];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[188] = 2. * x[69];
	v[1] = sporttournament22_pd[188] * x[196];
	v[0] += v[1];
	sporttournament22_pd[189] = 2. * x[69];
	v[1] = sporttournament22_pd[189] * x[208];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[190] = 2. * x[69];
	v[2] = sporttournament22_pd[190] * x[222];
	v[0] += v[2];
	sporttournament22_pd[191] = 2. * x[70];
	v[2] = sporttournament22_pd[191] * x[71];
	v[0] += v[2];
	sporttournament22_pd[192] = 2. * x[70];
	v[2] = sporttournament22_pd[192] * x[72];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[193] = 2. * x[70];
	v[1] = sporttournament22_pd[193] * x[167];
	v[0] += v[1];
	sporttournament22_pd[194] = 2. * x[70];
	v[1] = sporttournament22_pd[194] * x[205];
	v[0] += v[1];
	sporttournament22_pd[195] = 2. * x[71];
	v[1] = sporttournament22_pd[195] * x[94];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[196] = 2. * x[71];
	v[2] = sporttournament22_pd[196] * x[176];
	v[0] += v[2];
	sporttournament22_pd[197] = 2. * x[71];
	v[2] = sporttournament22_pd[197] * x[186];
	v[0] += v[2];
	sporttournament22_pd[198] = 2. * x[72];
	v[2] = sporttournament22_pd[198] * x[94];
	v[0] += v[2];
	sporttournament22_pd[199] = 2. * x[72];
	v[2] = sporttournament22_pd[199] * x[211];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[200] = 2. * x[72];
	v[1] = sporttournament22_pd[200] * x[224];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[201] = 2. * x[73];
	v[2] = sporttournament22_pd[201] * x[74];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[202] = 2. * x[73];
	v[1] = sporttournament22_pd[202] * x[141];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[203] = 2. * x[73];
	v[2] = sporttournament22_pd[203] * x[173];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[204] = 2. * x[73];
	v[1] = sporttournament22_pd[204] * x[177];
	v[0] += v[1];
	sporttournament22_pd[205] = 2. * x[74];
	v[1] = sporttournament22_pd[205] * x[75];
	v[0] += v[1];
	sporttournament22_pd[206] = 2. * x[74];
	v[1] = sporttournament22_pd[206] * x[206];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[207] = 2. * x[74];
	v[2] = sporttournament22_pd[207] * x[225];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[208] = 2. * x[75];
	v[1] = sporttournament22_pd[208] * x[99];
	v[0] += v[1];
	sporttournament22_pd[209] = 2. * x[75];
	v[1] = sporttournament22_pd[209] * x[177];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[210] = 2. * x[76];
	v[2] = sporttournament22_pd[210] * x[102];
	v[0] += v[2];
	sporttournament22_pd[211] = 2. * x[77];
	v[2] = sporttournament22_pd[211] * x[99];
	v[0] += v[2];
	sporttournament22_pd[212] = 2. * x[77];
	v[2] = sporttournament22_pd[212] * x[102];
	v[0] += v[2];
	sporttournament22_pd[213] = 2. * x[77];
	v[2] = sporttournament22_pd[213] * x[149];
	v[0] += v[2];
	sporttournament22_pd[214] = 2. * x[77];
	v[2] = sporttournament22_pd[214] * x[189];
	v[0] += v[2];
	sporttournament22_pd[215] = 2. * x[78];
	v[2] = sporttournament22_pd[215] * x[101];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[216] = 2. * x[78];
	v[1] = sporttournament22_pd[216] * x[121];
	v[0] += v[1];
	sporttournament22_pd[217] = 2. * x[78];
	v[1] = sporttournament22_pd[217] * x[150];
	v[0] += v[1];
	sporttournament22_pd[218] = 2. * x[79];
	v[1] = sporttournament22_pd[218] * x[80];
	v[0] += v[1];
	sporttournament22_pd[219] = 2. * x[79];
	v[1] = sporttournament22_pd[219] * x[199];
	v[0] += v[1];
	sporttournament22_pd[220] = 2. * x[80];
	v[1] = sporttournament22_pd[220] * x[150];
	v[0] += v[1];
	sporttournament22_pd[221] = 2. * x[80];
	v[1] = sporttournament22_pd[221] * x[184];
	v[0] += v[1];
	sporttournament22_pd[222] = 2. * x[80];
	v[1] = sporttournament22_pd[222] * x[219];
	v[0] += v[1];
	sporttournament22_pd[223] = 2. * x[81];
	v[1] = sporttournament22_pd[223] * x[82];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[224] = 2. * x[81];
	v[2] = sporttournament22_pd[224] * x[152];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[225] = 2. * x[81];
	v[1] = sporttournament22_pd[225] * x[164];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[226] = 2. * x[81];
	v[2] = sporttournament22_pd[226] * x[174];
	v[0] += v[2];
	sporttournament22_pd[227] = 2. * x[82];
	v[2] = sporttournament22_pd[227] * x[83];
	v[0] += v[2];
	sporttournament22_pd[228] = 2. * x[82];
	v[2] = sporttournament22_pd[228] * x[219];
	v[0] += v[2];
	sporttournament22_pd[229] = 2. * x[83];
	v[2] = sporttournament22_pd[229] * x[85];
	v[0] += v[2];
	sporttournament22_pd[230] = 2. * x[83];
	v[2] = sporttournament22_pd[230] * x[127];
	v[0] += v[2];
	sporttournament22_pd[231] = 2. * x[84];
	v[2] = sporttournament22_pd[231] * x[108];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[232] = 2. * x[84];
	v[1] = sporttournament22_pd[232] * x[128];
	v[0] += v[1];
	sporttournament22_pd[233] = 2. * x[84];
	v[1] = sporttournament22_pd[233] * x[160];
	v[0] += v[1];
	sporttournament22_pd[234] = 2. * x[85];
	v[1] = sporttournament22_pd[234] * x[129];
	v[0] += v[1];
	sporttournament22_pd[235] = 2. * x[85];
	v[1] = sporttournament22_pd[235] * x[160];
	v[0] += v[1];
	sporttournament22_pd[236] = 2. * x[86];
	v[1] = sporttournament22_pd[236] * x[87];
	v[0] += v[1];
	sporttournament22_pd[237] = 2. * x[86];
	v[1] = sporttournament22_pd[237] * x[159];
	v[0] += v[1];
	sporttournament22_pd[238] = 2. * x[87];
	v[1] = sporttournament22_pd[238] * x[160];
	v[0] += v[1];
	sporttournament22_pd[239] = 2. * x[88];
	v[1] = sporttournament22_pd[239] * x[226];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[240] = 2. * x[89];
	v[2] = sporttournament22_pd[240] * x[90];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[241] = 2. * x[89];
	v[1] = sporttournament22_pd[241] * x[91];
	v[0] += v[1];
	sporttournament22_pd[242] = 2. * x[89];
	v[1] = sporttournament22_pd[242] * x[222];
	v[0] += v[1];
	sporttournament22_pd[243] = 2. * x[89];
	v[1] = sporttournament22_pd[243] * x[226];
	v[0] += v[1];
	sporttournament22_pd[244] = 2. * x[90];
	v[1] = sporttournament22_pd[244] * x[92];
	v[0] += v[1];
	sporttournament22_pd[245] = 2. * x[90];
	v[1] = sporttournament22_pd[245] * x[191];
	v[0] += v[1];
	sporttournament22_pd[246] = 2. * x[91];
	v[1] = sporttournament22_pd[246] * x[92];
	v[0] += v[1];
	sporttournament22_pd[247] = 2. * x[91];
	v[1] = sporttournament22_pd[247] * x[171];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[248] = 2. * x[91];
	v[2] = sporttournament22_pd[248] * x[186];
	v[0] += v[2];
	sporttournament22_pd[249] = 2. * x[92];
	v[2] = sporttournament22_pd[249] * x[213];
	v[0] += v[2];
	sporttournament22_pd[250] = 2. * x[93];
	v[2] = sporttournament22_pd[250] * x[173];
	v[0] += v[2];
	sporttournament22_pd[251] = 2. * x[93];
	v[2] = sporttournament22_pd[251] * x[190];
	v[0] += v[2];
	sporttournament22_pd[252] = 2. * x[93];
	v[2] = sporttournament22_pd[252] * x[197];
	v[0] += v[2];
	sporttournament22_pd[253] = 2. * x[93];
	v[2] = sporttournament22_pd[253] * x[198];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[254] = 2. * x[94];
	v[1] = sporttournament22_pd[254] * x[115];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[255] = 2. * x[94];
	v[2] = sporttournament22_pd[255] * x[225];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[256] = 2. * x[95];
	v[1] = sporttournament22_pd[256] * x[96];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[257] = 2. * x[95];
	v[2] = sporttournament22_pd[257] * x[114];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[258] = 2. * x[95];
	v[1] = sporttournament22_pd[258] * x[176];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[259] = 2. * x[95];
	v[2] = sporttournament22_pd[259] * x[177];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[260] = 2. * x[96];
	v[1] = sporttournament22_pd[260] * x[98];
	v[0] += v[1];
	sporttournament22_pd[261] = 2. * x[96];
	v[1] = sporttournament22_pd[261] * x[206];
	v[0] += v[1];
	sporttournament22_pd[262] = 2. * x[96];
	v[1] = sporttournament22_pd[262] * x[225];
	v[0] += v[1];
	sporttournament22_pd[263] = 2. * x[97];
	v[1] = sporttournament22_pd[263] * x[119];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[264] = 2. * x[97];
	v[2] = sporttournament22_pd[264] * x[188];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[265] = 2. * x[97];
	v[1] = sporttournament22_pd[265] * x[189];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[266] = 2. * x[98];
	v[2] = sporttournament22_pd[266] * x[119];
	v[0] += v[2];
	sporttournament22_pd[267] = 2. * x[98];
	v[2] = sporttournament22_pd[267] * x[177];
	v[0] += v[2];
	sporttournament22_pd[268] = 2. * x[99];
	v[2] = sporttournament22_pd[268] * x[101];
	v[0] += v[2];
	sporttournament22_pd[269] = 2. * x[99];
	v[2] = sporttournament22_pd[269] * x[193];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[270] = 2. * x[100];
	v[1] = sporttournament22_pd[270] * x[120];
	v[0] += v[1];
	sporttournament22_pd[271] = 2. * x[100];
	v[1] = sporttournament22_pd[271] * x[214];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[272] = 2. * x[101];
	v[2] = sporttournament22_pd[272] * x[119];
	v[0] += v[2];
	sporttournament22_pd[273] = 2. * x[101];
	v[2] = sporttournament22_pd[273] * x[120];
	v[0] += v[2];
	sporttournament22_pd[274] = 2. * x[102];
	v[2] = sporttournament22_pd[274] * x[104];
	v[0] += v[2];
	sporttournament22_pd[275] = 2. * x[102];
	v[2] = sporttournament22_pd[275] * x[150];
	v[0] += v[2];
	sporttournament22_pd[276] = 2. * x[103];
	v[2] = sporttournament22_pd[276] * x[105];
	v[0] += v[2];
	sporttournament22_pd[277] = 2. * x[103];
	v[2] = sporttournament22_pd[277] * x[195];
	v[0] += v[2];
	sporttournament22_pd[278] = 2. * x[104];
	v[2] = sporttournament22_pd[278] * x[105];
	v[0] += v[2];
	sporttournament22_pd[279] = 2. * x[104];
	v[2] = sporttournament22_pd[279] * x[120];
	v[0] += v[2];
	sporttournament22_pd[280] = 2. * x[104];
	v[2] = sporttournament22_pd[280] * x[164];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[281] = 2. * x[105];
	v[1] = sporttournament22_pd[281] * x[154];
	v[0] += v[1];
	sporttournament22_pd[282] = 2. * x[105];
	v[1] = sporttournament22_pd[282] * x[216];
	v[0] += v[1];
	sporttournament22_pd[283] = 2. * x[106];
	v[1] = sporttournament22_pd[283] * x[107];
	v[0] += v[1];
	sporttournament22_pd[284] = 2. * x[106];
	v[1] = sporttournament22_pd[284] * x[178];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[285] = 2. * x[106];
	v[2] = sporttournament22_pd[285] * x[216];
	v[0] += v[2];
	sporttournament22_pd[286] = 2. * x[107];
	v[2] = sporttournament22_pd[286] * x[156];
	v[0] += v[2];
	sporttournament22_pd[287] = 2. * x[107];
	v[2] = sporttournament22_pd[287] * x[158];
	v[0] += v[2];
	sporttournament22_pd[288] = 2. * x[108];
	v[2] = sporttournament22_pd[288] * x[228];
	v[0] += v[2];
	sporttournament22_pd[289] = 2. * x[109];
	v[2] = sporttournament22_pd[289] * x[135];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[290] = 2. * x[110];
	v[1] = sporttournament22_pd[290] * x[111];
	v[0] += v[1];
	sporttournament22_pd[291] = 2. * x[110];
	v[1] = sporttournament22_pd[291] * x[135];
	v[0] += v[1];
	sporttournament22_pd[292] = 2. * x[110];
	v[1] = sporttournament22_pd[292] * x[208];
	v[0] += v[1];
	sporttournament22_pd[293] = 2. * x[110];
	v[1] = sporttournament22_pd[293] * x[226];
	v[0] += v[1];
	sporttournament22_pd[294] = 2. * x[111];
	v[1] = sporttournament22_pd[294] * x[180];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[295] = 2. * x[111];
	v[2] = sporttournament22_pd[295] * x[181];
	v[0] += v[2];
	sporttournament22_pd[296] = 2. * x[111];
	v[2] = sporttournament22_pd[296] * x[224];
	v[0] += v[2];
	sporttournament22_pd[297] = 2. * x[112];
	v[2] = sporttournament22_pd[297] * x[173];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[298] = 2. * x[112];
	v[1] = sporttournament22_pd[298] * x[190];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[299] = 2. * x[112];
	v[2] = sporttournament22_pd[299] * x[191];
	v[0] += v[2];
	sporttournament22_pd[300] = 2. * x[112];
	v[2] = sporttournament22_pd[300] * x[192];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[301] = 2. * x[113];
	v[1] = sporttournament22_pd[301] * x[191];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[302] = 2. * x[113];
	v[2] = sporttournament22_pd[302] * x[192];
	v[0] += v[2];
	sporttournament22_pd[303] = 2. * x[113];
	v[2] = sporttournament22_pd[303] * x[211];
	v[0] += v[2];
	sporttournament22_pd[304] = 2. * x[113];
	v[2] = sporttournament22_pd[304] * x[224];
	v[0] += v[2];
	sporttournament22_pd[305] = 2. * x[114];
	v[2] = sporttournament22_pd[305] * x[221];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[306] = 2. * x[115];
	v[1] = sporttournament22_pd[306] * x[116];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[307] = 2. * x[115];
	v[2] = sporttournament22_pd[307] * x[182];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[308] = 2. * x[116];
	v[1] = sporttournament22_pd[308] * x[118];
	v[0] += v[1];
	sporttournament22_pd[309] = 2. * x[116];
	v[1] = sporttournament22_pd[309] * x[202];
	v[0] += v[1];
	sporttournament22_pd[310] = 2. * x[116];
	v[1] = sporttournament22_pd[310] * x[221];
	v[0] += v[1];
	sporttournament22_pd[311] = 2. * x[117];
	v[1] = sporttournament22_pd[311] * x[147];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[312] = 2. * x[117];
	v[2] = sporttournament22_pd[312] * x[163];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[313] = 2. * x[118];
	v[1] = sporttournament22_pd[313] * x[147];
	v[0] += v[1];
	sporttournament22_pd[314] = 2. * x[118];
	v[1] = sporttournament22_pd[314] * x[182];
	v[0] += v[1];
	sporttournament22_pd[315] = 2. * x[119];
	v[1] = sporttournament22_pd[315] * x[218];
	v[0] += v[1];
	sporttournament22_pd[316] = 2. * x[120];
	v[1] = sporttournament22_pd[316] * x[122];
	v[0] += v[1];
	sporttournament22_pd[317] = 2. * x[121];
	v[1] = sporttournament22_pd[317] * x[123];
	v[0] += v[1];
	sporttournament22_pd[318] = 2. * x[122];
	v[1] = sporttournament22_pd[318] * x[123];
	v[0] += v[1];
	sporttournament22_pd[319] = 2. * x[122];
	v[1] = sporttournament22_pd[319] * x[164];
	v[0] += v[1];
	sporttournament22_pd[320] = 2. * x[122];
	v[1] = sporttournament22_pd[320] * x[230];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[321] = 2. * x[123];
	v[2] = sporttournament22_pd[321] * x[124];
	v[0] += v[2];
	sporttournament22_pd[322] = 2. * x[123];
	v[2] = sporttournament22_pd[322] * x[125];
	v[0] += v[2];
	sporttournament22_pd[323] = 2. * x[124];
	v[2] = sporttournament22_pd[323] * x[127];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[324] = 2. * x[124];
	v[1] = sporttournament22_pd[324] * x[199];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[325] = 2. * x[125];
	v[2] = sporttournament22_pd[325] * x[127];
	v[0] += v[2];
	sporttournament22_pd[326] = 2. * x[125];
	v[2] = sporttournament22_pd[326] * x[203];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[327] = 2. * x[125];
	v[1] = sporttournament22_pd[327] * x[215];
	v[0] += v[1];
	sporttournament22_pd[328] = 2. * x[126];
	v[1] = sporttournament22_pd[328] * x[128];
	v[0] += v[1];
	sporttournament22_pd[329] = 2. * x[126];
	v[1] = sporttournament22_pd[329] * x[129];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[330] = 2. * x[126];
	v[2] = sporttournament22_pd[330] * x[184];
	v[0] += v[2];
	sporttournament22_pd[331] = 2. * x[127];
	v[2] = sporttournament22_pd[331] * x[129];
	v[0] += v[2];
	sporttournament22_pd[332] = 2. * x[128];
	v[2] = sporttournament22_pd[332] * x[130];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[333] = 2. * x[128];
	v[1] = sporttournament22_pd[333] * x[169];
	v[0] += v[1];
	sporttournament22_pd[334] = 2. * x[129];
	v[1] = sporttournament22_pd[334] * x[130];
	v[0] += v[1];
	sporttournament22_pd[335] = 2. * x[130];
	v[1] = sporttournament22_pd[335] * x[132];
	v[0] += v[1];
	sporttournament22_pd[336] = 2. * x[131];
	v[1] = sporttournament22_pd[336] * x[133];
	v[0] += v[1];
	sporttournament22_pd[337] = 2. * x[131];
	v[1] = sporttournament22_pd[337] * x[165];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[338] = 2. * x[132];
	v[2] = sporttournament22_pd[338] * x[133];
	v[0] += v[2];
	sporttournament22_pd[339] = 2. * x[132];
	v[2] = sporttournament22_pd[339] * x[165];
	v[0] += v[2];
	sporttournament22_pd[340] = 2. * x[134];
	v[2] = sporttournament22_pd[340] * x[200];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[341] = 2. * x[135];
	v[1] = sporttournament22_pd[341] * x[136];
	v[0] += v[1];
	sporttournament22_pd[342] = 2. * x[135];
	v[1] = sporttournament22_pd[342] * x[227];
	v[0] += v[1];
	sporttournament22_pd[343] = 2. * x[136];
	v[1] = sporttournament22_pd[343] * x[138];
	v[0] += v[1];
	sporttournament22_pd[344] = 2. * x[136];
	v[1] = sporttournament22_pd[344] * x[200];
	v[0] += v[1];
	sporttournament22_pd[345] = 2. * x[136];
	v[1] = sporttournament22_pd[345] * x[205];
	v[0] += v[1];
	sporttournament22_pd[346] = 2. * x[137];
	v[1] = sporttournament22_pd[346] * x[190];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[347] = 2. * x[137];
	v[2] = sporttournament22_pd[347] * x[220];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[348] = 2. * x[138];
	v[1] = sporttournament22_pd[348] * x[180];
	v[0] += v[1];
	sporttournament22_pd[349] = 2. * x[138];
	v[1] = sporttournament22_pd[349] * x[187];
	v[0] += v[1];
	sporttournament22_pd[350] = 2. * x[138];
	v[1] = sporttournament22_pd[350] * x[220];
	v[0] += v[1];
	sporttournament22_pd[351] = 2. * x[139];
	v[1] = sporttournament22_pd[351] * x[142];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[352] = 2. * x[139];
	v[2] = sporttournament22_pd[352] * x[176];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[353] = 2. * x[139];
	v[1] = sporttournament22_pd[353] * x[186];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[354] = 2. * x[139];
	v[2] = sporttournament22_pd[354] * x[187];
	v[0] += v[2];
	sporttournament22_pd[355] = 2. * x[140];
	v[2] = sporttournament22_pd[355] * x[141];
	v[0] += v[2];
	sporttournament22_pd[356] = 2. * x[140];
	v[2] = sporttournament22_pd[356] * x[142];
	v[0] += v[2];
	sporttournament22_pd[357] = 2. * x[140];
	v[2] = sporttournament22_pd[357] * x[187];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[358] = 2. * x[140];
	v[1] = sporttournament22_pd[358] * x[220];
	v[0] += v[1];
	sporttournament22_pd[359] = 2. * x[141];
	v[1] = sporttournament22_pd[359] * x[217];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[360] = 2. * x[142];
	v[2] = sporttournament22_pd[360] * x[143];
	v[0] += v[2];
	sporttournament22_pd[361] = 2. * x[142];
	v[2] = sporttournament22_pd[361] * x[217];
	v[0] += v[2];
	sporttournament22_pd[362] = 2. * x[143];
	v[2] = sporttournament22_pd[362] * x[144];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[363] = 2. * x[143];
	v[1] = sporttournament22_pd[363] * x[188];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[364] = 2. * x[143];
	v[2] = sporttournament22_pd[364] * x[198];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[365] = 2. * x[144];
	v[1] = sporttournament22_pd[365] * x[145];
	v[0] += v[1];
	sporttournament22_pd[366] = 2. * x[144];
	v[1] = sporttournament22_pd[366] * x[146];
	v[0] += v[1];
	sporttournament22_pd[367] = 2. * x[144];
	v[1] = sporttournament22_pd[367] * x[217];
	v[0] += v[1];
	sporttournament22_pd[368] = 2. * x[145];
	v[1] = sporttournament22_pd[368] * x[214];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[369] = 2. * x[146];
	v[2] = sporttournament22_pd[369] * x[188];
	v[0] += v[2];
	sporttournament22_pd[370] = 2. * x[146];
	v[2] = sporttournament22_pd[370] * x[214];
	v[0] += v[2];
	sporttournament22_pd[371] = 2. * x[147];
	v[2] = sporttournament22_pd[371] * x[148];
	v[0] += v[2];
	sporttournament22_pd[372] = 2. * x[147];
	v[2] = sporttournament22_pd[372] * x[218];
	v[0] += v[2];
	sporttournament22_pd[373] = 2. * x[148];
	v[2] = sporttournament22_pd[373] * x[214];
	v[0] += v[2];
	sporttournament22_pd[374] = 2. * x[148];
	v[2] = sporttournament22_pd[374] * x[230];
	v[0] += v[2];
	sporttournament22_pd[375] = 2. * x[149];
	v[2] = sporttournament22_pd[375] * x[151];
	v[0] += v[2];
	sporttournament22_pd[376] = 2. * x[149];
	v[2] = sporttournament22_pd[376] * x[207];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[377] = 2. * x[150];
	v[1] = sporttournament22_pd[377] * x[153];
	v[0] += v[1];
	sporttournament22_pd[378] = 2. * x[151];
	v[1] = sporttournament22_pd[378] * x[153];
	v[0] += v[1];
	sporttournament22_pd[379] = 2. * x[151];
	v[1] = sporttournament22_pd[379] * x[230];
	v[0] += v[1];
	sporttournament22_pd[380] = 2. * x[152];
	v[1] = sporttournament22_pd[380] * x[155];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[381] = 2. * x[152];
	v[2] = sporttournament22_pd[381] * x[207];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[382] = 2. * x[153];
	v[1] = sporttournament22_pd[382] * x[155];
	v[0] += v[1];
	sporttournament22_pd[383] = 2. * x[153];
	v[1] = sporttournament22_pd[383] * x[178];
	v[0] += v[1];
	sporttournament22_pd[384] = 2. * x[154];
	v[1] = sporttournament22_pd[384] * x[156];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[385] = 2. * x[154];
	v[2] = sporttournament22_pd[385] * x[169];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[386] = 2. * x[154];
	v[1] = sporttournament22_pd[386] * x[195];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[387] = 2. * x[155];
	v[2] = sporttournament22_pd[387] * x[156];
	v[0] += v[2];
	sporttournament22_pd[388] = 2. * x[156];
	v[2] = sporttournament22_pd[388] * x[157];
	v[0] += v[2];
	sporttournament22_pd[389] = 2. * x[157];
	v[2] = sporttournament22_pd[389] * x[158];
	v[0] += v[2];
	sporttournament22_pd[390] = 2. * x[157];
	v[2] = sporttournament22_pd[390] * x[159];
	v[0] += v[2];
	sporttournament22_pd[391] = 2. * x[157];
	v[2] = sporttournament22_pd[391] * x[174];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[392] = 2. * x[158];
	v[1] = sporttournament22_pd[392] * x[229];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[393] = 2. * x[159];
	v[2] = sporttournament22_pd[393] * x[166];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[394] = 2. * x[159];
	v[1] = sporttournament22_pd[394] * x[229];
	v[0] += v[1];
	sporttournament22_pd[395] = 2. * x[160];
	v[1] = sporttournament22_pd[395] * x[161];
	v[0] += v[1];
	sporttournament22_pd[396] = 2. * x[161];
	v[1] = sporttournament22_pd[396] * x[229];
	v[0] += v[1];
	sporttournament22_pd[397] = 2. * x[162];
	v[1] = sporttournament22_pd[397] * x[163];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[398] = 2. * x[162];
	v[2] = sporttournament22_pd[398] * x[189];
	v[0] += v[2];
	sporttournament22_pd[399] = 2. * x[165];
	v[2] = sporttournament22_pd[399] * x[166];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[400] = 2. * x[166];
	v[1] = sporttournament22_pd[400] * x[174];
	v[0] += v[1];
	sporttournament22_pd[401] = 2. * x[167];
	v[1] = sporttournament22_pd[401] * x[168];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[402] = 2. * x[167];
	v[2] = sporttournament22_pd[402] * x[197];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[403] = 2. * x[168];
	v[1] = sporttournament22_pd[403] * x[196];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[404] = 2. * x[169];
	v[2] = sporttournament22_pd[404] * x[178];
	v[0] += v[2];
	sporttournament22_pd[405] = 2. * x[170];
	v[2] = sporttournament22_pd[405] * x[171];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[406] = 2. * x[170];
	v[1] = sporttournament22_pd[406] * x[172];
	v[0] += v[1];
	sporttournament22_pd[407] = 2. * x[170];
	v[1] = sporttournament22_pd[407] * x[191];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[408] = 2. * x[172];
	v[2] = sporttournament22_pd[408] * x[200];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[409] = 2. * x[172];
	v[1] = sporttournament22_pd[409] * x[201];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[410] = 2. * x[173];
	v[2] = sporttournament22_pd[410] * x[183];
	v[0] += v[2];
	sporttournament22_pd[411] = 2. * x[174];
	v[2] = sporttournament22_pd[411] * x[184];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[412] = 2. * x[175];
	v[1] = sporttournament22_pd[412] * x[180];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[413] = 2. * x[178];
	v[2] = sporttournament22_pd[413] * x[203];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[414] = 2. * x[181];
	v[1] = sporttournament22_pd[414] * x[205];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[415] = 2. * x[182];
	v[2] = sporttournament22_pd[415] * x[183];
	v[0] += v[2];
	sporttournament22_pd[416] = 2. * x[182];
	v[2] = sporttournament22_pd[416] * x[193];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[417] = 2. * x[183];
	v[1] = sporttournament22_pd[417] * x[211];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[418] = 2. * x[186];
	v[2] = sporttournament22_pd[418] * x[201];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[419] = 2. * x[187];
	v[1] = sporttournament22_pd[419] * x[208];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[420] = 2. * x[189];
	v[2] = sporttournament22_pd[420] * x[194];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[421] = 2. * x[190];
	v[1] = sporttournament22_pd[421] * x[196];
	v[0] += v[1];
	sporttournament22_pd[422] = 2. * x[192];
	v[1] = sporttournament22_pd[422] * x[221];
	v[0] += v[1];
	sporttournament22_pd[423] = 2. * x[195];
	v[1] = sporttournament22_pd[423] * x[219];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[424] = 2. * x[196];
	v[2] = sporttournament22_pd[424] * x[224];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[425] = 2. * x[197];
	v[1] = sporttournament22_pd[425] * x[208];
	v[0] += v[1];
	sporttournament22_pd[426] = 2. * x[197];
	v[1] = sporttournament22_pd[426] * x[213];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[427] = 2. * x[198];
	v[2] = sporttournament22_pd[427] * x[213];
	v[0] += v[2];
	sporttournament22_pd[428] = 2. * x[198];
	v[2] = sporttournament22_pd[428] * x[225];
	v[0] += v[2];
	sporttournament22_pd[429] = 2. * x[199];
	v[2] = sporttournament22_pd[429] * x[216];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[430] = 2. * x[200];
	v[1] = sporttournament22_pd[430] * x[223];
	v[0] += v[1];
	sporttournament22_pd[431] = 2. * x[203];
	v[1] = sporttournament22_pd[431] * x[207];
	v[0] += v[1];
	sporttournament22_pd[432] = 2. * x[204];
	v[1] = sporttournament22_pd[432] * x[210];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[433] = 2. * x[209];
	v[2] = sporttournament22_pd[433] * x[212];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[434] = 2. * x[212];
	v[1] = sporttournament22_pd[434] * x[215];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[435] = 2. * x[215];
	v[2] = sporttournament22_pd[435] * x[216];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[436] = 2. * x[218];
	v[1] = sporttournament22_pd[436] * x[230];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[437] = 2. * x[222];
	v[2] = sporttournament22_pd[437] * x[223];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament22_pd[438] = 2. * x[226];
	v[1] = sporttournament22_pd[438] * x[227];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament22_pd[439] = 2. * x[228];
	v[2] = sporttournament22_pd[439] * x[229];
	v[1] = -v[2];
	v[0] += v[1];
	t1 = v[0] + -2.*x[0];
	t1 += -2.*x[1];
	t1 += -2.*x[2];
	t1 += -2.*x[3];
	t1 += -2.*x[4];
	t1 += -2.*x[5];
	t1 += -2.*x[6];
	t1 += -4.*x[7];
	t1 += -2.*x[8];
	t1 += -2.*x[9];
	t1 += -2.*x[10];
	t1 += -2.*x[11];
	t1 += -2.*x[12];
	t1 += -4.*x[13];
	t1 += -2.*x[14];
	t1 += -2.*x[15];
	t1 += -2.*x[16];
	t1 += -2.*x[17];
	t1 += -2.*x[18];
	t1 += -2.*x[19];
	t1 += -4.*x[20];
	t1 += -2.*x[21];
	t1 += -2.*x[22];
	t1 += -2.*x[23];
	t1 += -2.*x[24];
	t1 += -2.*x[25];
	t1 += -4.*x[26];
	t1 += -4.*x[27];
	t1 += -4.*x[28];
	t1 += -4.*x[29];
	t1 += -4.*x[30];
	t1 += -4.*x[31];
	t1 += -2.*x[32];
	t1 += -2.*x[33];
	t1 += -2.*x[34];
	t1 += -2.*x[35];
	t1 += -4.*x[36];
	t1 += -2.*x[37];
	t1 += 2.*x[38];
	t1 += -4.*x[39];
	t1 += -2.*x[40];
	t1 += -4.*x[41];
	t1 += -2.*x[42];
	t1 += -4.*x[43];
	t1 += -4.*x[44];
	t1 += -4.*x[45];
	t1 += -2.*x[46];
	t1 += -2.*x[47];
	t1 += -2.*x[48];
	t1 += -2.*x[49];
	t1 += -2.*x[50];
	t1 += -2.*x[51];
	t1 += -2.*x[52];
	t1 += 2.*x[53];
	t1 += 2.*x[54];
	t1 += -4.*x[55];
	t1 += -2.*x[56];
	t1 += -4.*x[57];
	t1 += -4.*x[58];
	t1 += -2.*x[59];
	t1 += -2.*x[60];
	t1 += -4.*x[61];
	t1 += -2.*x[62];
	t1 += -4.*x[63];
	t1 += -4.*x[64];
	t1 += -4.*x[65];
	t1 += -2.*x[66];
	t1 += 2.*x[67];
	t1 += -2.*x[68];
	t1 += -2.*x[69];
	t1 += -2.*x[70];
	t1 += -2.*x[71];
	t1 += 2.*x[72];
	t1 += 2.*x[73];
	t1 += 2.*x[74];
	t1 += -2.*x[75];
	t1 += -4.*x[76];
	t1 += -4.*x[77];
	t1 += -2.*x[78];
	t1 += -4.*x[79];
	t1 += -4.*x[80];
	t1 += 2.*x[81];
	t1 += -2.*x[82];
	t1 += -4.*x[83];
	t1 += -2.*x[84];
	t1 += -4.*x[85];
	t1 += -4.*x[86];
	t1 += -2.*x[87];
	t1 += 2.*x[88];
	t1 += -2.*x[89];
	t1 += -2.*x[90];
	t1 += -2.*x[91];
	t1 += -4.*x[92];
	t1 += -2.*x[93];
	t1 += 2.*x[94];
	t1 += 4.*x[95];
	t1 += -2.*x[96];
	t1 += 2.*x[97];
	t1 += -4.*x[98];
	t1 += -2.*x[99];
	t1 += -2.*x[100];
	t1 += -2.*x[101];
	t1 += -4.*x[102];
	t1 += -4.*x[103];
	t1 += -2.*x[104];
	t1 += -4.*x[105];
	t1 += -2.*x[106];
	t1 += -4.*x[107];
	t1 += -2.*x[108];
	t1 += 2.*x[109];
	t1 += -4.*x[110];
	t1 += -2.*x[111];
	t1 += 2.*x[112];
	t1 += -2.*x[113];
	t1 += 2.*x[114];
	t1 += 4.*x[115];
	t1 += -2.*x[116];
	t1 += 2.*x[117];
	t1 += -4.*x[118];
	t1 += -2.*x[119];
	t1 += -4.*x[120];
	t1 += -4.*x[121];
	t1 += -2.*x[122];
	t1 += -4.*x[123];
	t1 += 2.*x[124];
	t1 += -2.*x[125];
	t1 += -2.*x[126];
	t1 += -2.*x[127];
	t1 += -2.*x[128];
	t1 += -2.*x[129];
	t1 += -2.*x[130];
	t1 += -2.*x[131];
	t1 += -4.*x[132];
	t1 += -2.*x[133];
	t1 += 2.*x[134];
	t1 += -2.*x[135];
	t1 += -4.*x[136];
	t1 += 2.*x[137];
	t1 += -4.*x[138];
	t1 += 2.*x[139];
	t1 += -2.*x[140];
	t1 += 2.*x[141];
	t1 += -2.*x[142];
	t1 += 2.*x[143];
	t1 += -2.*x[144];
	t1 += 2.*x[145];
	t1 += -4.*x[146];
	t1 += -2.*x[147];
	t1 += -2.*x[148];
	t1 += -2.*x[149];
	t1 += -4.*x[150];
	t1 += -4.*x[151];
	t1 += 2.*x[152];
	t1 += -4.*x[153];
	t1 += 2.*x[154];
	t1 += -2.*x[155];
	t1 += -2.*x[156];
	t1 += -2.*x[157];
	t1 += -2.*x[158];
	t1 += -2.*x[159];
	t1 += -4.*x[160];
	t1 += -2.*x[161];
	t1 += x[231];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[229] = -sporttournament22_pd[439];
	J[228] = -x[229]*2.;
	J[227] = -sporttournament22_pd[438];
	J[226] = -x[227]*2.;
	J[223] = -sporttournament22_pd[437];
	J[222] = -x[223]*2.;
	J[230] = -sporttournament22_pd[436];
	J[218] = -x[230]*2.;
	J[216] = -sporttournament22_pd[435];
	J[215] = -x[216]*2.;
	J[215] -= sporttournament22_pd[434];
	J[212] = -x[215]*2.;
	J[212] -= sporttournament22_pd[433];
	J[209] = -x[212]*2.;
	J[210] = -sporttournament22_pd[432];
	J[204] = -x[210]*2.;
	J[207] = sporttournament22_pd[431];
	J[203] = x[207]*2.;
	J[223] += sporttournament22_pd[430];
	J[200] = x[223]*2.;
	J[216] -= sporttournament22_pd[429];
	J[199] = -x[216]*2.;
	J[225] = sporttournament22_pd[428];
	J[198] = x[225]*2.;
	J[213] = sporttournament22_pd[427];
	J[198] += x[213]*2.;
	J[213] -= sporttournament22_pd[426];
	J[197] = -x[213]*2.;
	J[208] = sporttournament22_pd[425];
	J[197] += x[208]*2.;
	J[224] = -sporttournament22_pd[424];
	J[196] = -x[224]*2.;
	J[219] = -sporttournament22_pd[423];
	J[195] = -x[219]*2.;
	J[221] = sporttournament22_pd[422];
	J[192] = x[221]*2.;
	J[196] += sporttournament22_pd[421];
	J[190] = x[196]*2.;
	J[194] = -sporttournament22_pd[420];
	J[189] = -x[194]*2.;
	J[208] -= sporttournament22_pd[419];
	J[187] = -x[208]*2.;
	J[201] = -sporttournament22_pd[418];
	J[186] = -x[201]*2.;
	J[211] = -sporttournament22_pd[417];
	J[183] = -x[211]*2.;
	J[193] = -sporttournament22_pd[416];
	J[182] = -x[193]*2.;
	J[183] += sporttournament22_pd[415];
	J[182] += x[183]*2.;
	J[205] = -sporttournament22_pd[414];
	J[181] = -x[205]*2.;
	J[203] -= sporttournament22_pd[413];
	J[178] = -x[203]*2.;
	J[180] = -sporttournament22_pd[412];
	J[175] = -x[180]*2.;
	J[184] = -sporttournament22_pd[411];
	J[174] = -x[184]*2.;
	J[183] += sporttournament22_pd[410];
	J[173] = x[183]*2.;
	J[201] -= sporttournament22_pd[409];
	J[172] = -x[201]*2.;
	J[200] -= sporttournament22_pd[408];
	J[172] -= x[200]*2.;
	J[191] = -sporttournament22_pd[407];
	J[170] = -x[191]*2.;
	J[172] += sporttournament22_pd[406];
	J[170] += x[172]*2.;
	J[171] = -sporttournament22_pd[405];
	J[170] -= x[171]*2.;
	J[178] += sporttournament22_pd[404];
	J[169] = x[178]*2.;
	J[196] -= sporttournament22_pd[403];
	J[168] = -x[196]*2.;
	J[197] -= sporttournament22_pd[402];
	J[167] = -x[197]*2.;
	J[168] -= sporttournament22_pd[401];
	J[167] -= x[168]*2.;
	J[174] += sporttournament22_pd[400];
	J[166] = x[174]*2.;
	J[166] -= sporttournament22_pd[399];
	J[165] = -x[166]*2.;
	J[189] += sporttournament22_pd[398];
	J[162] = x[189]*2.;
	J[163] = -sporttournament22_pd[397];
	J[162] -= x[163]*2.;
	J[229] += sporttournament22_pd[396];
	J[161] = x[229]*2. + -2.;
	J[161] += sporttournament22_pd[395];
	J[160] = x[161]*2. + -4.;
	J[229] += sporttournament22_pd[394];
	J[159] = x[229]*2. + -2.;
	J[166] -= sporttournament22_pd[393];
	J[159] -= x[166]*2.;
	J[229] -= sporttournament22_pd[392];
	J[158] = -x[229]*2. + -2.;
	J[174] -= sporttournament22_pd[391];
	J[157] = -x[174]*2. + -2.;
	J[159] += sporttournament22_pd[390];
	J[157] += x[159]*2.;
	J[158] += sporttournament22_pd[389];
	J[157] += x[158]*2.;
	J[157] += sporttournament22_pd[388];
	J[156] = x[157]*2. + -2.;
	J[156] += sporttournament22_pd[387];
	J[155] = x[156]*2. + -2.;
	J[195] -= sporttournament22_pd[386];
	J[154] = -x[195]*2. + 2.;
	J[169] -= sporttournament22_pd[385];
	J[154] -= x[169]*2.;
	J[156] -= sporttournament22_pd[384];
	J[154] -= x[156]*2.;
	J[178] += sporttournament22_pd[383];
	J[153] = x[178]*2. + -4.;
	J[155] += sporttournament22_pd[382];
	J[153] += x[155]*2.;
	J[207] -= sporttournament22_pd[381];
	J[152] = -x[207]*2. + 2.;
	J[155] -= sporttournament22_pd[380];
	J[152] -= x[155]*2.;
	J[230] += sporttournament22_pd[379];
	J[151] = x[230]*2. + -4.;
	J[153] += sporttournament22_pd[378];
	J[151] += x[153]*2.;
	J[153] += sporttournament22_pd[377];
	J[150] = x[153]*2. + -4.;
	J[207] -= sporttournament22_pd[376];
	J[149] = -x[207]*2. + -2.;
	J[151] += sporttournament22_pd[375];
	J[149] += x[151]*2.;
	J[230] += sporttournament22_pd[374];
	J[148] = x[230]*2. + -2.;
	J[214] = sporttournament22_pd[373];
	J[148] += x[214]*2.;
	J[218] += sporttournament22_pd[372];
	J[147] = x[218]*2. + -2.;
	J[148] += sporttournament22_pd[371];
	J[147] += x[148]*2.;
	J[214] += sporttournament22_pd[370];
	J[146] = x[214]*2. + -4.;
	J[188] = sporttournament22_pd[369];
	J[146] += x[188]*2.;
	J[214] -= sporttournament22_pd[368];
	J[145] = -x[214]*2. + 2.;
	J[217] = sporttournament22_pd[367];
	J[144] = x[217]*2. + -2.;
	J[146] += sporttournament22_pd[366];
	J[144] += x[146]*2.;
	J[145] += sporttournament22_pd[365];
	J[144] += x[145]*2.;
	J[198] -= sporttournament22_pd[364];
	J[143] = -x[198]*2. + 2.;
	J[188] -= sporttournament22_pd[363];
	J[143] -= x[188]*2.;
	J[144] -= sporttournament22_pd[362];
	J[143] -= x[144]*2.;
	J[217] += sporttournament22_pd[361];
	J[142] = x[217]*2. + -2.;
	J[143] += sporttournament22_pd[360];
	J[142] += x[143]*2.;
	J[217] -= sporttournament22_pd[359];
	J[141] = -x[217]*2. + 2.;
	J[220] = sporttournament22_pd[358];
	J[140] = x[220]*2. + -2.;
	J[187] -= sporttournament22_pd[357];
	J[140] -= x[187]*2.;
	J[142] += sporttournament22_pd[356];
	J[140] += x[142]*2.;
	J[141] += sporttournament22_pd[355];
	J[140] += x[141]*2.;
	J[187] += sporttournament22_pd[354];
	J[139] = x[187]*2. + 2.;
	J[186] -= sporttournament22_pd[353];
	J[139] -= x[186]*2.;
	J[176] = -sporttournament22_pd[352];
	J[139] -= x[176]*2.;
	J[142] -= sporttournament22_pd[351];
	J[139] -= x[142]*2.;
	J[220] += sporttournament22_pd[350];
	J[138] = x[220]*2. + -4.;
	J[187] += sporttournament22_pd[349];
	J[138] += x[187]*2.;
	J[180] += sporttournament22_pd[348];
	J[138] += x[180]*2.;
	J[220] -= sporttournament22_pd[347];
	J[137] = -x[220]*2. + 2.;
	J[190] -= sporttournament22_pd[346];
	J[137] -= x[190]*2.;
	J[205] += sporttournament22_pd[345];
	J[136] = x[205]*2. + -4.;
	J[200] += sporttournament22_pd[344];
	J[136] += x[200]*2.;
	J[138] += sporttournament22_pd[343];
	J[136] += x[138]*2.;
	J[227] += sporttournament22_pd[342];
	J[135] = x[227]*2. + -2.;
	J[136] += sporttournament22_pd[341];
	J[135] += x[136]*2.;
	J[200] -= sporttournament22_pd[340];
	J[134] = -x[200]*2. + 2.;
	J[165] += sporttournament22_pd[339];
	J[132] = x[165]*2. + -4.;
	J[133] = sporttournament22_pd[338] + -2.;
	J[132] += x[133]*2.;
	J[165] -= sporttournament22_pd[337];
	J[131] = -x[165]*2. + -2.;
	J[133] += sporttournament22_pd[336];
	J[131] += x[133]*2.;
	J[132] += sporttournament22_pd[335];
	J[130] = x[132]*2. + -2.;
	J[130] += sporttournament22_pd[334];
	J[129] = x[130]*2. + -2.;
	J[169] += sporttournament22_pd[333];
	J[128] = x[169]*2. + -2.;
	J[130] -= sporttournament22_pd[332];
	J[128] -= x[130]*2.;
	J[129] += sporttournament22_pd[331];
	J[127] = x[129]*2. + -2.;
	J[184] += sporttournament22_pd[330];
	J[126] = x[184]*2. + -2.;
	J[129] -= sporttournament22_pd[329];
	J[126] -= x[129]*2.;
	J[128] += sporttournament22_pd[328];
	J[126] += x[128]*2.;
	J[215] += sporttournament22_pd[327];
	J[125] = x[215]*2. + -2.;
	J[203] -= sporttournament22_pd[326];
	J[125] -= x[203]*2.;
	J[127] += sporttournament22_pd[325];
	J[125] += x[127]*2.;
	J[199] -= sporttournament22_pd[324];
	J[124] = -x[199]*2. + 2.;
	J[127] -= sporttournament22_pd[323];
	J[124] -= x[127]*2.;
	J[125] += sporttournament22_pd[322];
	J[123] = x[125]*2. + -4.;
	J[124] += sporttournament22_pd[321];
	J[123] += x[124]*2.;
	J[230] -= sporttournament22_pd[320];
	J[122] = -x[230]*2. + -2.;
	J[164] = sporttournament22_pd[319];
	J[122] += x[164]*2.;
	J[123] += sporttournament22_pd[318];
	J[122] += x[123]*2.;
	J[123] += sporttournament22_pd[317];
	J[121] = x[123]*2. + -4.;
	J[122] += sporttournament22_pd[316];
	J[120] = x[122]*2. + -4.;
	J[218] += sporttournament22_pd[315];
	J[119] = x[218]*2. + -2.;
	J[182] += sporttournament22_pd[314];
	J[118] = x[182]*2. + -4.;
	J[147] += sporttournament22_pd[313];
	J[118] += x[147]*2.;
	J[163] -= sporttournament22_pd[312];
	J[117] = -x[163]*2. + 2.;
	J[147] -= sporttournament22_pd[311];
	J[117] -= x[147]*2.;
	J[221] += sporttournament22_pd[310];
	J[116] = x[221]*2. + -2.;
	J[202] = sporttournament22_pd[309];
	J[116] += x[202]*2.;
	J[118] += sporttournament22_pd[308];
	J[116] += x[118]*2.;
	J[182] -= sporttournament22_pd[307];
	J[115] = -x[182]*2. + 4.;
	J[116] -= sporttournament22_pd[306];
	J[115] -= x[116]*2.;
	J[221] -= sporttournament22_pd[305];
	J[114] = -x[221]*2. + 2.;
	J[224] += sporttournament22_pd[304];
	J[113] = x[224]*2. + -2.;
	J[211] += sporttournament22_pd[303];
	J[113] += x[211]*2.;
	J[192] += sporttournament22_pd[302];
	J[113] += x[192]*2.;
	J[191] -= sporttournament22_pd[301];
	J[113] -= x[191]*2.;
	J[192] -= sporttournament22_pd[300];
	J[112] = -x[192]*2. + 2.;
	J[191] += sporttournament22_pd[299];
	J[112] += x[191]*2.;
	J[190] -= sporttournament22_pd[298];
	J[112] -= x[190]*2.;
	J[173] -= sporttournament22_pd[297];
	J[112] -= x[173]*2.;
	J[224] += sporttournament22_pd[296];
	J[111] = x[224]*2. + -2.;
	J[181] += sporttournament22_pd[295];
	J[111] += x[181]*2.;
	J[180] -= sporttournament22_pd[294];
	J[111] -= x[180]*2.;
	J[226] += sporttournament22_pd[293];
	J[110] = x[226]*2. + -4.;
	J[208] += sporttournament22_pd[292];
	J[110] += x[208]*2.;
	J[135] += sporttournament22_pd[291];
	J[110] += x[135]*2.;
	J[111] += sporttournament22_pd[290];
	J[110] += x[111]*2.;
	J[135] -= sporttournament22_pd[289];
	J[109] = -x[135]*2. + 2.;
	J[228] += sporttournament22_pd[288];
	J[108] = x[228]*2. + -2.;
	J[158] += sporttournament22_pd[287];
	J[107] = x[158]*2. + -4.;
	J[156] += sporttournament22_pd[286];
	J[107] += x[156]*2.;
	J[216] += sporttournament22_pd[285];
	J[106] = x[216]*2. + -2.;
	J[178] -= sporttournament22_pd[284];
	J[106] -= x[178]*2.;
	J[107] += sporttournament22_pd[283];
	J[106] += x[107]*2.;
	J[216] += sporttournament22_pd[282];
	J[105] = x[216]*2. + -4.;
	J[154] += sporttournament22_pd[281];
	J[105] += x[154]*2.;
	J[164] -= sporttournament22_pd[280];
	J[104] = -x[164]*2. + -2.;
	J[120] += sporttournament22_pd[279];
	J[104] += x[120]*2.;
	J[105] += sporttournament22_pd[278];
	J[104] += x[105]*2.;
	J[195] += sporttournament22_pd[277];
	J[103] = x[195]*2. + -4.;
	J[105] += sporttournament22_pd[276];
	J[103] += x[105]*2.;
	J[150] += sporttournament22_pd[275];
	J[102] = x[150]*2. + -4.;
	J[104] += sporttournament22_pd[274];
	J[102] += x[104]*2.;
	J[120] += sporttournament22_pd[273];
	J[101] = x[120]*2. + -2.;
	J[119] += sporttournament22_pd[272];
	J[101] += x[119]*2.;
	J[214] -= sporttournament22_pd[271];
	J[100] = -x[214]*2. + -2.;
	J[120] += sporttournament22_pd[270];
	J[100] += x[120]*2.;
	J[193] -= sporttournament22_pd[269];
	J[99] = -x[193]*2. + -2.;
	J[101] += sporttournament22_pd[268];
	J[99] += x[101]*2.;
	J[177] = sporttournament22_pd[267];
	J[98] = x[177]*2. + -4.;
	J[119] += sporttournament22_pd[266];
	J[98] += x[119]*2.;
	J[189] -= sporttournament22_pd[265];
	J[97] = -x[189]*2. + 2.;
	J[188] -= sporttournament22_pd[264];
	J[97] -= x[188]*2.;
	J[119] -= sporttournament22_pd[263];
	J[97] -= x[119]*2.;
	J[225] += sporttournament22_pd[262];
	J[96] = x[225]*2. + -2.;
	J[206] = sporttournament22_pd[261];
	J[96] += x[206]*2.;
	J[98] += sporttournament22_pd[260];
	J[96] += x[98]*2.;
	J[177] -= sporttournament22_pd[259];
	J[95] = -x[177]*2. + 4.;
	J[176] -= sporttournament22_pd[258];
	J[95] -= x[176]*2.;
	J[114] -= sporttournament22_pd[257];
	J[95] -= x[114]*2.;
	J[96] -= sporttournament22_pd[256];
	J[95] -= x[96]*2.;
	J[225] -= sporttournament22_pd[255];
	J[94] = -x[225]*2. + 2.;
	J[115] -= sporttournament22_pd[254];
	J[94] -= x[115]*2.;
	J[198] -= sporttournament22_pd[253];
	J[93] = -x[198]*2. + -2.;
	J[197] += sporttournament22_pd[252];
	J[93] += x[197]*2.;
	J[190] += sporttournament22_pd[251];
	J[93] += x[190]*2.;
	J[173] += sporttournament22_pd[250];
	J[93] += x[173]*2.;
	J[213] += sporttournament22_pd[249];
	J[92] = x[213]*2. + -4.;
	J[186] += sporttournament22_pd[248];
	J[91] = x[186]*2. + -2.;
	J[171] -= sporttournament22_pd[247];
	J[91] -= x[171]*2.;
	J[92] += sporttournament22_pd[246];
	J[91] += x[92]*2.;
	J[191] += sporttournament22_pd[245];
	J[90] = x[191]*2. + -2.;
	J[92] += sporttournament22_pd[244];
	J[90] += x[92]*2.;
	J[226] += sporttournament22_pd[243];
	J[89] = x[226]*2. + -2.;
	J[222] += sporttournament22_pd[242];
	J[89] += x[222]*2.;
	J[91] += sporttournament22_pd[241];
	J[89] += x[91]*2.;
	J[90] -= sporttournament22_pd[240];
	J[89] -= x[90]*2.;
	J[226] -= sporttournament22_pd[239];
	J[88] = -x[226]*2. + 2.;
	J[160] += sporttournament22_pd[238];
	J[87] = x[160]*2. + -2.;
	J[159] += sporttournament22_pd[237];
	J[86] = x[159]*2. + -4.;
	J[87] += sporttournament22_pd[236];
	J[86] += x[87]*2.;
	J[160] += sporttournament22_pd[235];
	J[85] = x[160]*2. + -4.;
	J[129] += sporttournament22_pd[234];
	J[85] += x[129]*2.;
	J[160] += sporttournament22_pd[233];
	J[84] = x[160]*2. + -2.;
	J[128] += sporttournament22_pd[232];
	J[84] += x[128]*2.;
	J[108] -= sporttournament22_pd[231];
	J[84] -= x[108]*2.;
	J[127] += sporttournament22_pd[230];
	J[83] = x[127]*2. + -4.;
	J[85] += sporttournament22_pd[229];
	J[83] += x[85]*2.;
	J[219] += sporttournament22_pd[228];
	J[82] = x[219]*2. + -2.;
	J[83] += sporttournament22_pd[227];
	J[82] += x[83]*2.;
	J[174] += sporttournament22_pd[226];
	J[81] = x[174]*2. + 2.;
	J[164] -= sporttournament22_pd[225];
	J[81] -= x[164]*2.;
	J[152] -= sporttournament22_pd[224];
	J[81] -= x[152]*2.;
	J[82] -= sporttournament22_pd[223];
	J[81] -= x[82]*2.;
	J[219] += sporttournament22_pd[222];
	J[80] = x[219]*2. + -4.;
	J[184] += sporttournament22_pd[221];
	J[80] += x[184]*2.;
	J[150] += sporttournament22_pd[220];
	J[80] += x[150]*2.;
	J[199] += sporttournament22_pd[219];
	J[79] = x[199]*2. + -4.;
	J[80] += sporttournament22_pd[218];
	J[79] += x[80]*2.;
	J[150] += sporttournament22_pd[217];
	J[78] = x[150]*2. + -2.;
	J[121] += sporttournament22_pd[216];
	J[78] += x[121]*2.;
	J[101] -= sporttournament22_pd[215];
	J[78] -= x[101]*2.;
	J[189] += sporttournament22_pd[214];
	J[77] = x[189]*2. + -4.;
	J[149] += sporttournament22_pd[213];
	J[77] += x[149]*2.;
	J[102] += sporttournament22_pd[212];
	J[77] += x[102]*2.;
	J[99] += sporttournament22_pd[211];
	J[77] += x[99]*2.;
	J[102] += sporttournament22_pd[210];
	J[76] = x[102]*2. + -4.;
	J[177] -= sporttournament22_pd[209];
	J[75] = -x[177]*2. + -2.;
	J[99] += sporttournament22_pd[208];
	J[75] += x[99]*2.;
	J[225] -= sporttournament22_pd[207];
	J[74] = -x[225]*2. + 2.;
	J[206] -= sporttournament22_pd[206];
	J[74] -= x[206]*2.;
	J[75] += sporttournament22_pd[205];
	J[74] += x[75]*2.;
	J[177] += sporttournament22_pd[204];
	J[73] = x[177]*2. + 2.;
	J[173] -= sporttournament22_pd[203];
	J[73] -= x[173]*2.;
	J[141] -= sporttournament22_pd[202];
	J[73] -= x[141]*2.;
	J[74] -= sporttournament22_pd[201];
	J[73] -= x[74]*2.;
	J[224] -= sporttournament22_pd[200];
	J[72] = -x[224]*2. + 2.;
	J[211] -= sporttournament22_pd[199];
	J[72] -= x[211]*2.;
	J[94] += sporttournament22_pd[198];
	J[72] += x[94]*2.;
	J[186] += sporttournament22_pd[197];
	J[71] = x[186]*2. + -2.;
	J[176] += sporttournament22_pd[196];
	J[71] += x[176]*2.;
	J[94] -= sporttournament22_pd[195];
	J[71] -= x[94]*2.;
	J[205] += sporttournament22_pd[194];
	J[70] = x[205]*2. + -2.;
	J[167] += sporttournament22_pd[193];
	J[70] += x[167]*2.;
	J[72] -= sporttournament22_pd[192];
	J[70] -= x[72]*2.;
	J[71] += sporttournament22_pd[191];
	J[70] += x[71]*2.;
	J[222] += sporttournament22_pd[190];
	J[69] = x[222]*2. + -2.;
	J[208] -= sporttournament22_pd[189];
	J[69] -= x[208]*2.;
	J[196] += sporttournament22_pd[188];
	J[69] += x[196]*2.;
	J[179] = -sporttournament22_pd[187];
	J[68] = -x[179]*2. + -2.;
	J[69] += sporttournament22_pd[186];
	J[68] += x[69]*2.;
	J[222] -= sporttournament22_pd[185];
	J[67] = -x[222]*2. + 2.;
	J[175] -= sporttournament22_pd[184];
	J[67] -= x[175]*2.;
	J[131] += sporttournament22_pd[183];
	J[66] = x[131]*2. + -2.;
	J[130] += sporttournament22_pd[182];
	J[65] = x[130]*2. + -4.;
	J[66] += sporttournament22_pd[181];
	J[65] += x[66]*2.;
	J[131] += sporttournament22_pd[180];
	J[64] = x[131]*2. + -4.;
	J[107] += sporttournament22_pd[179];
	J[64] += x[107]*2.;
	J[106] += sporttournament22_pd[178];
	J[63] = x[106]*2. + -4.;
	J[64] += sporttournament22_pd[177];
	J[63] += x[64]*2.;
	J[63] += sporttournament22_pd[176];
	J[62] = x[63]*2. + -2.;
	J[62] += sporttournament22_pd[175];
	J[61] = x[62]*2. + -4.;
	J[164] += sporttournament22_pd[174];
	J[60] = x[164]*2. + -2.;
	J[126] += sporttournament22_pd[173];
	J[60] += x[126]*2.;
	J[62] -= sporttournament22_pd[172];
	J[60] -= x[62]*2.;
	J[184] -= sporttournament22_pd[171];
	J[59] = -x[184]*2. + -2.;
	J[121] += sporttournament22_pd[170];
	J[59] += x[121]*2.;
	J[61] += sporttournament22_pd[169];
	J[59] += x[61]*2.;
	J[151] += sporttournament22_pd[168];
	J[58] = x[151]*2. + -4.;
	J[61] += sporttournament22_pd[167];
	J[58] += x[61]*2.;
	J[60] += sporttournament22_pd[166];
	J[58] += x[60]*2.;
	J[203] += sporttournament22_pd[165];
	J[57] = x[203]*2. + -4.;
	J[59] += sporttournament22_pd[164];
	J[57] += x[59]*2.;
	J[218] -= sporttournament22_pd[163];
	J[56] = -x[218]*2. + -2.;
	J[121] += sporttournament22_pd[162];
	J[56] += x[121]*2.;
	J[103] += sporttournament22_pd[161];
	J[56] += x[103]*2.;
	J[78] += sporttournament22_pd[160];
	J[55] = x[78]*2. + -4.;
	J[221] -= sporttournament22_pd[159];
	J[54] = -x[221]*2. + 2.;
	J[202] -= sporttournament22_pd[158];
	J[54] -= x[202]*2.;
	J[193] += sporttournament22_pd[157];
	J[54] += x[193]*2.;
	J[183] -= sporttournament22_pd[156];
	J[54] -= x[183]*2.;
	J[220] -= sporttournament22_pd[155];
	J[53] = -x[220]*2. + 2.;
	J[141] -= sporttournament22_pd[154];
	J[53] -= x[141]*2.;
	J[114] += sporttournament22_pd[153];
	J[53] += x[114]*2.;
	J[181] += sporttournament22_pd[152];
	J[52] = x[181]*2. + -2.;
	J[114] -= sporttournament22_pd[151];
	J[52] -= x[114]*2.;
	J[201] += sporttournament22_pd[150];
	J[51] = x[201]*2. + -2.;
	J[170] += sporttournament22_pd[149];
	J[51] += x[170]*2.;
	J[53] -= sporttournament22_pd[148];
	J[51] -= x[53]*2.;
	J[52] += sporttournament22_pd[147];
	J[51] += x[52]*2.;
	J[205] -= sporttournament22_pd[146];
	J[50] = -x[205]*2. + -2.;
	J[137] += sporttournament22_pd[145];
	J[50] += x[137]*2.;
	J[68] += sporttournament22_pd[144];
	J[50] += x[68]*2.;
	J[167] += sporttournament22_pd[143];
	J[49] = x[167]*2. + -2.;
	J[137] -= sporttournament22_pd[142];
	J[49] -= x[137]*2.;
	J[185] = -sporttournament22_pd[141];
	J[48] = -x[185]*2. + -2.;
	J[50] += sporttournament22_pd[140];
	J[48] += x[50]*2.;
	J[68] += sporttournament22_pd[139];
	J[47] = x[68]*2. + -2.;
	J[108] += sporttournament22_pd[138];
	J[46] = x[108]*2. + -2.;
	J[209] += sporttournament22_pd[137];
	J[45] = x[209]*2. + -4.;
	J[158] += sporttournament22_pd[136];
	J[45] += x[158]*2.;
	J[46] += sporttournament22_pd[135];
	J[45] += x[46]*2.;
	J[204] += sporttournament22_pd[134];
	J[44] = x[204]*2. + -4.;
	J[108] += sporttournament22_pd[133];
	J[44] += x[108]*2.;
	J[83] += sporttournament22_pd[132];
	J[44] += x[83]*2.;
	J[82] += sporttournament22_pd[131];
	J[43] = x[82]*2. + -4.;
	J[44] += sporttournament22_pd[130];
	J[43] += x[44]*2.;
	J[219] -= sporttournament22_pd[129];
	J[42] = -x[219]*2. + -2.;
	J[212] += sporttournament22_pd[128];
	J[42] += x[212]*2.;
	J[155] += sporttournament22_pd[127];
	J[42] += x[155]*2.;
	J[43] += sporttournament22_pd[126];
	J[42] += x[43]*2.;
	J[195] += sporttournament22_pd[125];
	J[41] = x[195]*2. + -4.;
	J[152] += sporttournament22_pd[124];
	J[41] += x[152]*2.;
	J[148] -= sporttournament22_pd[123];
	J[40] = -x[148]*2. + -2.;
	J[103] += sporttournament22_pd[122];
	J[40] += x[103]*2.;
	J[79] += sporttournament22_pd[121];
	J[40] += x[79]*2.;
	J[56] += sporttournament22_pd[120];
	J[39] = x[56]*2. + -4.;
	J[217] -= sporttournament22_pd[119];
	J[38] = -x[217]*2. + 2.;
	J[145] -= sporttournament22_pd[118];
	J[38] -= x[145]*2.;
	J[97] += sporttournament22_pd[117];
	J[38] += x[97]*2.;
	J[188] += sporttournament22_pd[116];
	J[37] = x[188]*2. + -2.;
	J[176] += sporttournament22_pd[115];
	J[37] += x[176]*2.;
	J[38] -= sporttournament22_pd[114];
	J[37] -= x[38]*2.;
	J[201] += sporttournament22_pd[113];
	J[36] = x[201]*2. + -4.;
	J[175] += sporttournament22_pd[112];
	J[36] += x[175]*2.;
	J[90] += sporttournament22_pd[111];
	J[36] += x[90]*2.;
	J[48] += sporttournament22_pd[110];
	J[36] += x[48]*2.;
	J[48] += sporttournament22_pd[109];
	J[35] = x[48]*2. + -2.;
	J[86] += sporttournament22_pd[108];
	J[34] = x[86]*2. + -2.;
	J[210] += sporttournament22_pd[107];
	J[33] = x[210]*2. + -2.;
	J[209] -= sporttournament22_pd[106];
	J[33] -= x[209]*2.;
	J[85] += sporttournament22_pd[105];
	J[33] += x[85]*2.;
	J[34] += sporttournament22_pd[104];
	J[33] += x[34]*2.;
	J[204] -= sporttournament22_pd[103];
	J[32] = -x[204]*2. + -2.;
	J[86] += sporttournament22_pd[102];
	J[32] += x[86]*2.;
	J[63] += sporttournament22_pd[101];
	J[32] += x[63]*2.;
	J[215] += sporttournament22_pd[100];
	J[31] = x[215]*2. + -4.;
	J[209] += sporttournament22_pd[99];
	J[31] += x[209]*2.;
	J[62] += sporttournament22_pd[98];
	J[31] += x[62]*2.;
	J[32] += sporttournament22_pd[97];
	J[31] += x[32]*2.;
	J[199] += sporttournament22_pd[96];
	J[30] = x[199]*2. + -4.;
	J[58] += sporttournament22_pd[95];
	J[30] += x[58]*2.;
	J[100] += sporttournament22_pd[94];
	J[29] = x[100]*2. + -4.;
	J[79] += sporttournament22_pd[93];
	J[29] += x[79]*2.;
	J[57] += sporttournament22_pd[92];
	J[29] += x[57]*2.;
	J[149] += sporttournament22_pd[91];
	J[28] = x[149]*2. + -4.;
	J[40] += sporttournament22_pd[90];
	J[28] += x[40]*2.;
	J[162] += sporttournament22_pd[89];
	J[27] = x[162]*2. + -4.;
	J[117] += sporttournament22_pd[88];
	J[27] += x[117]*2.;
	J[211] += sporttournament22_pd[87];
	J[26] = x[211]*2. + -4.;
	J[163] += sporttournament22_pd[86];
	J[26] += x[163]*2.;
	J[27] += sporttournament22_pd[85];
	J[26] += x[27]*2.;
	J[192] -= sporttournament22_pd[84];
	J[25] = -x[192]*2. + -2.;
	J[163] += sporttournament22_pd[83];
	J[25] += x[163]*2.;
	J[27] += sporttournament22_pd[82];
	J[25] += x[27]*2.;
	J[115] -= sporttournament22_pd[81];
	J[24] = -x[115]*2. + -2.;
	J[52] += sporttournament22_pd[80];
	J[24] += x[52]*2.;
	J[26] += sporttournament22_pd[79];
	J[24] += x[26]*2.;
	J[65] += sporttournament22_pd[78];
	J[23] = x[65]*2. + -2.;
	J[64] += sporttournament22_pd[77];
	J[22] = x[64]*2. + -2.;
	J[23] += sporttournament22_pd[76];
	J[22] += x[23]*2.;
	J[212] += sporttournament22_pd[75];
	J[21] = x[212]*2. + -2.;
	J[65] += sporttournament22_pd[74];
	J[21] += x[65]*2.;
	J[43] += sporttournament22_pd[73];
	J[21] += x[43]*2.;
	J[22] -= sporttournament22_pd[72];
	J[21] -= x[22]*2.;
	J[194] += sporttournament22_pd[71];
	J[20] = x[194]*2. + -4.;
	J[76] += sporttournament22_pd[70];
	J[20] += x[76]*2.;
	J[57] += sporttournament22_pd[69];
	J[20] += x[57]*2.;
	J[41] += sporttournament22_pd[68];
	J[20] += x[41]*2.;
	J[29] += sporttournament22_pd[67];
	J[19] = x[29]*2. + -2.;
	J[202] += sporttournament22_pd[66];
	J[18] = x[202]*2. + -2.;
	J[162] -= sporttournament22_pd[65];
	J[18] -= x[162]*2.;
	J[100] += sporttournament22_pd[64];
	J[18] += x[100]*2.;
	J[76] += sporttournament22_pd[63];
	J[18] += x[76]*2.;
	J[213] -= sporttournament22_pd[62];
	J[17] = -x[213]*2. + -2.;
	J[37] += sporttournament22_pd[61];
	J[17] += x[37]*2.;
	J[25] += sporttournament22_pd[60];
	J[17] += x[25]*2.;
	J[181] -= sporttournament22_pd[59];
	J[16] = -x[181]*2. + -2.;
	J[92] += sporttournament22_pd[58];
	J[16] += x[92]*2.;
	J[24] += sporttournament22_pd[57];
	J[16] += x[24]*2.;
	J[17] += sporttournament22_pd[56];
	J[16] += x[17]*2.;
	J[204] += sporttournament22_pd[55];
	J[15] = x[204]*2. + -2.;
	J[45] += sporttournament22_pd[54];
	J[15] += x[45]*2.;
	J[194] -= sporttournament22_pd[53];
	J[14] = -x[194]*2. + -2.;
	J[55] += sporttournament22_pd[52];
	J[14] += x[55]*2.;
	J[41] += sporttournament22_pd[51];
	J[14] += x[41]*2.;
	J[30] += sporttournament22_pd[50];
	J[14] += x[30]*2.;
	J[206] += sporttournament22_pd[49];
	J[13] = x[206]*2. + -4.;
	J[146] += sporttournament22_pd[48];
	J[13] += x[146]*2.;
	J[76] += sporttournament22_pd[47];
	J[13] += x[76]*2.;
	J[55] += sporttournament22_pd[46];
	J[13] += x[55]*2.;
	J[207] += sporttournament22_pd[45];
	J[12] = x[207]*2. + -2.;
	J[39] += sporttournament22_pd[44];
	J[12] += x[39]*2.;
	J[30] += sporttournament22_pd[43];
	J[12] += x[30]*2.;
	J[19] -= sporttournament22_pd[42];
	J[12] -= x[19]*2.;
	J[206] -= sporttournament22_pd[41];
	J[11] = -x[206]*2. + -2.;
	J[118] += sporttournament22_pd[40];
	J[11] += x[118]*2.;
	J[55] += sporttournament22_pd[39];
	J[11] += x[55]*2.;
	J[39] += sporttournament22_pd[38];
	J[11] += x[39]*2.;
	J[132] += sporttournament22_pd[37];
	J[10] = x[132]*2. + -2.;
	J[22] += sporttournament22_pd[36];
	J[10] += x[22]*2.;
	J[202] -= sporttournament22_pd[35];
	J[9] = -x[202]*2. + -2.;
	J[98] += sporttournament22_pd[34];
	J[9] += x[98]*2.;
	J[39] += sporttournament22_pd[33];
	J[9] += x[39]*2.;
	J[28] += sporttournament22_pd[32];
	J[9] += x[28]*2.;
	J[145] -= sporttournament22_pd[31];
	J[8] = -x[145]*2. + -2.;
	J[75] += sporttournament22_pd[30];
	J[8] += x[75]*2.;
	J[28] += sporttournament22_pd[29];
	J[8] += x[28]*2.;
	J[19] += sporttournament22_pd[28];
	J[8] += x[19]*2.;
	J[172] += sporttournament22_pd[27];
	J[7] = x[172]*2. + -4.;
	J[49] += sporttournament22_pd[26];
	J[7] += x[49]*2.;
	J[47] += sporttournament22_pd[25];
	J[7] += x[47]*2.;
	J[194] += sporttournament22_pd[24];
	J[6] = x[194]*2. + -2.;
	J[193] += sporttournament22_pd[23];
	J[6] += x[193]*2.;
	J[117] -= sporttournament22_pd[22];
	J[6] -= x[117]*2.;
	J[19] += sporttournament22_pd[21];
	J[6] += x[19]*2.;
	J[168] += sporttournament22_pd[20];
	J[5] = x[168]*2. + -2.;
	J[134] -= sporttournament22_pd[19];
	J[5] -= x[134]*2.;
	J[49] += sporttournament22_pd[18];
	J[5] += x[49]*2.;
	J[35] += sporttournament22_pd[17];
	J[5] += x[35]*2.;
	J[175] += sporttournament22_pd[16];
	J[4] = x[175]*2. + -2.;
	J[7] += sporttournament22_pd[15];
	J[4] += x[7]*2.;
	J[185] += sporttournament22_pd[14];
	J[3] = x[185]*2. + -2.;
	J[171] += sporttournament22_pd[13];
	J[3] += x[171]*2.;
	J[168] += sporttournament22_pd[12];
	J[3] += x[168]*2.;
	J[109] -= sporttournament22_pd[11];
	J[3] -= x[109]*2.;
	J[180] += sporttournament22_pd[10];
	J[2] = x[180]*2. + -2.;
	J[179] += sporttournament22_pd[9];
	J[2] += x[179]*2.;
	J[171] += sporttournament22_pd[8];
	J[2] += x[171]*2.;
	J[88] -= sporttournament22_pd[7];
	J[2] -= x[88]*2.;
	J[166] += sporttournament22_pd[6];
	J[1] = x[166]*2. + -2.;
	J[124] -= sporttournament22_pd[5];
	J[1] -= x[124]*2.;
	J[61] += sporttournament22_pd[4];
	J[1] += x[61]*2.;
	J[169] -= sporttournament22_pd[3];
	J[0] = -x[169]*2. + -2.;
	J[165] += sporttournament22_pd[2];
	J[0] += x[165]*2.;
	J[84] += sporttournament22_pd[1];
	J[0] += x[84]*2.;
	J[1] += sporttournament22_pd[0];
	J[0] += x[1]*2.;
	J[231] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
