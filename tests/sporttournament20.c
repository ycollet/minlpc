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
 fint sporttournament20_auxcom_[1] = { 1 /* nlc */ };
 fint sporttournament20_funcom_[389] = {
	191 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	191 /* nzc */,
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
	1 };

 real sporttournament20_boundc_[1+382+2] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.};

 real sporttournament20_x0comn_[191] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sporttournament20_pd[360];
static real sporttournament20_old_x[191];
static int sporttournament20_xkind = -1;

 static int
sporttournament20_xcheck(real *x)
{
	real *x1 = sporttournament20_old_x, *xe = x + 191;
	errno = 0;
	if (sporttournament20_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sporttournament20_xkind = 0;
	return 1;
	}
 real
sporttournament20_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sporttournament20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[190];
	;}

	if (wantfg & 2) {
	g[190] = 1.;
	}

	return rv;
}

 void
sporttournament20_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sporttournament20_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	sporttournament20_pd[0] = 2. * x[0];
	v[0] = sporttournament20_pd[0] * x[4];
	sporttournament20_pd[1] = 2. * x[0];
	v[1] = sporttournament20_pd[1] * x[7];
	v[0] += v[1];
	sporttournament20_pd[2] = 2. * x[0];
	v[1] = sporttournament20_pd[2] * x[22];
	v[0] += v[1];
	sporttournament20_pd[3] = 2. * x[0];
	v[1] = sporttournament20_pd[3] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[4] = 2. * x[1];
	v[2] = sporttournament20_pd[4] * x[2];
	v[0] += v[2];
	sporttournament20_pd[5] = 2. * x[1];
	v[2] = sporttournament20_pd[5] * x[32];
	v[0] += v[2];
	sporttournament20_pd[6] = 2. * x[1];
	v[2] = sporttournament20_pd[6] * x[143];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[7] = 2. * x[1];
	v[1] = sporttournament20_pd[7] * x[149];
	v[0] += v[1];
	sporttournament20_pd[8] = 2. * x[2];
	v[1] = sporttournament20_pd[8] * x[83];
	v[0] += v[1];
	sporttournament20_pd[9] = 2. * x[2];
	v[1] = sporttournament20_pd[9] * x[105];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[10] = 2. * x[2];
	v[2] = sporttournament20_pd[10] * x[139];
	v[0] += v[2];
	sporttournament20_pd[11] = 2. * x[3];
	v[2] = sporttournament20_pd[11] * x[85];
	v[0] += v[2];
	sporttournament20_pd[12] = 2. * x[3];
	v[2] = sporttournament20_pd[12] * x[106];
	v[0] += v[2];
	sporttournament20_pd[13] = 2. * x[3];
	v[2] = sporttournament20_pd[13] * x[139];
	v[0] += v[2];
	sporttournament20_pd[14] = 2. * x[3];
	v[2] = sporttournament20_pd[14] * x[157];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[15] = 2. * x[4];
	v[1] = sporttournament20_pd[15] * x[5];
	v[0] += v[1];
	sporttournament20_pd[16] = 2. * x[4];
	v[1] = sporttournament20_pd[16] * x[135];
	v[0] += v[1];
	sporttournament20_pd[17] = 2. * x[4];
	v[1] = sporttournament20_pd[17] * x[150];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[18] = 2. * x[5];
	v[2] = sporttournament20_pd[18] * x[51];
	v[0] += v[2];
	sporttournament20_pd[19] = 2. * x[5];
	v[2] = sporttournament20_pd[19] * x[71];
	v[0] += v[2];
	sporttournament20_pd[20] = 2. * x[5];
	v[2] = sporttournament20_pd[20] * x[160];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[21] = 2. * x[6];
	v[1] = sporttournament20_pd[21] * x[16];
	v[0] += v[1];
	sporttournament20_pd[22] = 2. * x[6];
	v[1] = sporttournament20_pd[22] * x[102];
	v[0] += v[1];
	sporttournament20_pd[23] = 2. * x[7];
	v[1] = sporttournament20_pd[23] * x[140];
	v[0] += v[1];
	sporttournament20_pd[24] = 2. * x[7];
	v[1] = sporttournament20_pd[24] * x[145];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[25] = 2. * x[7];
	v[2] = sporttournament20_pd[25] * x[161];
	v[0] += v[2];
	sporttournament20_pd[26] = 2. * x[8];
	v[2] = sporttournament20_pd[26] * x[26];
	v[0] += v[2];
	sporttournament20_pd[27] = 2. * x[8];
	v[2] = sporttournament20_pd[27] * x[38];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[28] = 2. * x[8];
	v[1] = sporttournament20_pd[28] * x[71];
	v[0] += v[1];
	sporttournament20_pd[29] = 2. * x[8];
	v[1] = sporttournament20_pd[29] * x[162];
	v[0] += v[1];
	sporttournament20_pd[30] = 2. * x[9];
	v[1] = sporttournament20_pd[30] * x[48];
	v[0] += v[1];
	sporttournament20_pd[31] = 2. * x[9];
	v[1] = sporttournament20_pd[31] * x[64];
	v[0] += v[1];
	sporttournament20_pd[32] = 2. * x[9];
	v[1] = sporttournament20_pd[32] * x[67];
	v[0] += v[1];
	sporttournament20_pd[33] = 2. * x[9];
	v[1] = sporttournament20_pd[33] * x[132];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[34] = 2. * x[10];
	v[2] = sporttournament20_pd[34] * x[46];
	v[0] += v[2];
	sporttournament20_pd[35] = 2. * x[10];
	v[2] = sporttournament20_pd[35] * x[156];
	v[0] += v[2];
	sporttournament20_pd[36] = 2. * x[11];
	v[2] = sporttournament20_pd[36] * x[31];
	v[0] += v[2];
	sporttournament20_pd[37] = 2. * x[11];
	v[2] = sporttournament20_pd[37] * x[48];
	v[0] += v[2];
	sporttournament20_pd[38] = 2. * x[11];
	v[2] = sporttournament20_pd[38] * x[132];
	v[0] += v[2];
	sporttournament20_pd[39] = 2. * x[11];
	v[2] = sporttournament20_pd[39] * x[164];
	v[0] += v[2];
	sporttournament20_pd[40] = 2. * x[12];
	v[2] = sporttournament20_pd[40] * x[13];
	v[0] += v[2];
	sporttournament20_pd[41] = 2. * x[12];
	v[2] = sporttournament20_pd[41] * x[33];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[42] = 2. * x[12];
	v[1] = sporttournament20_pd[42] * x[135];
	v[0] += v[1];
	sporttournament20_pd[43] = 2. * x[12];
	v[1] = sporttournament20_pd[43] * x[143];
	v[0] += v[1];
	sporttournament20_pd[44] = 2. * x[13];
	v[1] = sporttournament20_pd[44] * x[88];
	v[0] += v[1];
	sporttournament20_pd[45] = 2. * x[13];
	v[1] = sporttournament20_pd[45] * x[112];
	v[0] += v[1];
	sporttournament20_pd[46] = 2. * x[13];
	v[1] = sporttournament20_pd[46] * x[134];
	v[0] += v[1];
	sporttournament20_pd[47] = 2. * x[14];
	v[1] = sporttournament20_pd[47] * x[25];
	v[0] += v[1];
	sporttournament20_pd[48] = 2. * x[14];
	v[1] = sporttournament20_pd[48] * x[37];
	v[0] += v[1];
	sporttournament20_pd[49] = 2. * x[14];
	v[1] = sporttournament20_pd[49] * x[145];
	v[0] += v[1];
	sporttournament20_pd[50] = 2. * x[14];
	v[1] = sporttournament20_pd[50] * x[174];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[51] = 2. * x[15];
	v[2] = sporttournament20_pd[51] * x[16];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[52] = 2. * x[15];
	v[1] = sporttournament20_pd[52] * x[44];
	v[0] += v[1];
	sporttournament20_pd[53] = 2. * x[15];
	v[1] = sporttournament20_pd[53] * x[61];
	v[0] += v[1];
	sporttournament20_pd[54] = 2. * x[15];
	v[1] = sporttournament20_pd[54] * x[168];
	v[0] += v[1];
	sporttournament20_pd[55] = 2. * x[16];
	v[1] = sporttournament20_pd[55] * x[17];
	v[0] += v[1];
	sporttournament20_pd[56] = 2. * x[16];
	v[1] = sporttournament20_pd[56] * x[60];
	v[0] += v[1];
	sporttournament20_pd[57] = 2. * x[17];
	v[1] = sporttournament20_pd[57] * x[61];
	v[0] += v[1];
	sporttournament20_pd[58] = 2. * x[18];
	v[1] = sporttournament20_pd[58] * x[19];
	v[0] += v[1];
	sporttournament20_pd[59] = 2. * x[18];
	v[1] = sporttournament20_pd[59] * x[20];
	v[0] += v[1];
	sporttournament20_pd[60] = 2. * x[18];
	v[1] = sporttournament20_pd[60] * x[66];
	v[0] += v[1];
	sporttournament20_pd[61] = 2. * x[18];
	v[1] = sporttournament20_pd[61] * x[149];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[62] = 2. * x[19];
	v[2] = sporttournament20_pd[62] * x[22];
	v[0] += v[2];
	sporttournament20_pd[63] = 2. * x[19];
	v[2] = sporttournament20_pd[63] * x[48];
	v[0] += v[2];
	sporttournament20_pd[64] = 2. * x[19];
	v[2] = sporttournament20_pd[64] * x[110];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[65] = 2. * x[20];
	v[1] = sporttournament20_pd[65] * x[22];
	v[0] += v[1];
	sporttournament20_pd[66] = 2. * x[20];
	v[1] = sporttournament20_pd[66] * x[88];
	v[0] += v[1];
	sporttournament20_pd[67] = 2. * x[20];
	v[1] = sporttournament20_pd[67] * x[179];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[68] = 2. * x[21];
	v[2] = sporttournament20_pd[68] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[69] = 2. * x[21];
	v[1] = sporttournament20_pd[69] * x[109];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[70] = 2. * x[21];
	v[2] = sporttournament20_pd[70] * x[135];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[71] = 2. * x[21];
	v[1] = sporttournament20_pd[71] * x[138];
	v[0] += v[1];
	sporttournament20_pd[72] = 2. * x[22];
	v[1] = sporttournament20_pd[72] * x[23];
	v[0] += v[1];
	sporttournament20_pd[73] = 2. * x[23];
	v[1] = sporttournament20_pd[73] * x[112];
	v[0] += v[1];
	sporttournament20_pd[74] = 2. * x[23];
	v[1] = sporttournament20_pd[74] * x[165];
	v[0] += v[1];
	sporttournament20_pd[75] = 2. * x[24];
	v[1] = sporttournament20_pd[75] * x[40];
	v[0] += v[1];
	sporttournament20_pd[76] = 2. * x[24];
	v[1] = sporttournament20_pd[76] * x[145];
	v[0] += v[1];
	sporttournament20_pd[77] = 2. * x[24];
	v[1] = sporttournament20_pd[77] * x[150];
	v[0] += v[1];
	sporttournament20_pd[78] = 2. * x[24];
	v[1] = sporttournament20_pd[78] * x[166];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[79] = 2. * x[25];
	v[2] = sporttournament20_pd[79] * x[54];
	v[0] += v[2];
	sporttournament20_pd[80] = 2. * x[25];
	v[2] = sporttournament20_pd[80] * x[72];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[81] = 2. * x[25];
	v[1] = sporttournament20_pd[81] * x[74];
	v[0] += v[1];
	sporttournament20_pd[82] = 2. * x[26];
	v[1] = sporttournament20_pd[82] * x[55];
	v[0] += v[1];
	sporttournament20_pd[83] = 2. * x[26];
	v[1] = sporttournament20_pd[83] * x[153];
	v[0] += v[1];
	sporttournament20_pd[84] = 2. * x[26];
	v[1] = sporttournament20_pd[84] * x[166];
	v[0] += v[1];
	sporttournament20_pd[85] = 2. * x[27];
	v[1] = sporttournament20_pd[85] * x[28];
	v[0] += v[1];
	sporttournament20_pd[86] = 2. * x[27];
	v[1] = sporttournament20_pd[86] * x[43];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[87] = 2. * x[27];
	v[2] = sporttournament20_pd[87] * x[97];
	v[0] += v[2];
	sporttournament20_pd[88] = 2. * x[27];
	v[2] = sporttournament20_pd[88] * x[170];
	v[0] += v[2];
	sporttournament20_pd[89] = 2. * x[28];
	v[2] = sporttournament20_pd[89] * x[58];
	v[0] += v[2];
	sporttournament20_pd[90] = 2. * x[28];
	v[2] = sporttournament20_pd[90] * x[79];
	v[0] += v[2];
	sporttournament20_pd[91] = 2. * x[28];
	v[2] = sporttournament20_pd[91] * x[156];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[92] = 2. * x[29];
	v[1] = sporttournament20_pd[92] * x[30];
	v[0] += v[1];
	sporttournament20_pd[93] = 2. * x[29];
	v[1] = sporttournament20_pd[93] * x[123];
	v[0] += v[1];
	sporttournament20_pd[94] = 2. * x[29];
	v[1] = sporttournament20_pd[94] * x[170];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[95] = 2. * x[29];
	v[2] = sporttournament20_pd[95] * x[171];
	v[0] += v[2];
	sporttournament20_pd[96] = 2. * x[30];
	v[2] = sporttournament20_pd[96] * x[79];
	v[0] += v[2];
	sporttournament20_pd[97] = 2. * x[31];
	v[2] = sporttournament20_pd[97] * x[32];
	v[0] += v[2];
	sporttournament20_pd[98] = 2. * x[31];
	v[2] = sporttournament20_pd[98] * x[33];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[99] = 2. * x[31];
	v[1] = sporttournament20_pd[99] * x[107];
	v[0] += v[1];
	sporttournament20_pd[100] = 2. * x[32];
	v[1] = sporttournament20_pd[100] * x[35];
	v[0] += v[1];
	sporttournament20_pd[101] = 2. * x[32];
	v[1] = sporttournament20_pd[101] * x[88];
	v[0] += v[1];
	sporttournament20_pd[102] = 2. * x[33];
	v[1] = sporttournament20_pd[102] * x[35];
	v[0] += v[1];
	sporttournament20_pd[103] = 2. * x[33];
	v[1] = sporttournament20_pd[103] * x[86];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[104] = 2. * x[34];
	v[2] = sporttournament20_pd[104] * x[36];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[105] = 2. * x[34];
	v[1] = sporttournament20_pd[105] * x[87];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[106] = 2. * x[34];
	v[2] = sporttournament20_pd[106] * x[138];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[107] = 2. * x[35];
	v[1] = sporttournament20_pd[107] * x[36];
	v[0] += v[1];
	sporttournament20_pd[108] = 2. * x[35];
	v[1] = sporttournament20_pd[108] * x[140];
	v[0] += v[1];
	sporttournament20_pd[109] = 2. * x[36];
	v[1] = sporttournament20_pd[109] * x[160];
	v[0] += v[1];
	sporttournament20_pd[110] = 2. * x[36];
	v[1] = sporttournament20_pd[110] * x[165];
	v[0] += v[1];
	sporttournament20_pd[111] = 2. * x[37];
	v[1] = sporttournament20_pd[111] * x[39];
	v[0] += v[1];
	sporttournament20_pd[112] = 2. * x[37];
	v[1] = sporttournament20_pd[112] * x[134];
	v[0] += v[1];
	sporttournament20_pd[113] = 2. * x[37];
	v[1] = sporttournament20_pd[113] * x[144];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[114] = 2. * x[38];
	v[2] = sporttournament20_pd[114] * x[53];
	v[0] += v[2];
	sporttournament20_pd[115] = 2. * x[38];
	v[2] = sporttournament20_pd[115] * x[150];
	v[0] += v[2];
	sporttournament20_pd[116] = 2. * x[38];
	v[2] = sporttournament20_pd[116] * x[152];
	v[0] += v[2];
	sporttournament20_pd[117] = 2. * x[39];
	v[2] = sporttournament20_pd[117] * x[53];
	v[0] += v[2];
	sporttournament20_pd[118] = 2. * x[39];
	v[2] = sporttournament20_pd[118] * x[114];
	v[0] += v[2];
	sporttournament20_pd[119] = 2. * x[39];
	v[2] = sporttournament20_pd[119] * x[182];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[120] = 2. * x[40];
	v[1] = sporttournament20_pd[120] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[121] = 2. * x[40];
	v[2] = sporttournament20_pd[121] * x[74];
	v[0] += v[2];
	sporttournament20_pd[122] = 2. * x[40];
	v[2] = sporttournament20_pd[122] * x[93];
	v[0] += v[2];
	sporttournament20_pd[123] = 2. * x[41];
	v[2] = sporttournament20_pd[123] * x[151];
	v[0] += v[2];
	sporttournament20_pd[124] = 2. * x[41];
	v[2] = sporttournament20_pd[124] * x[163];
	v[0] += v[2];
	sporttournament20_pd[125] = 2. * x[41];
	v[2] = sporttournament20_pd[125] * x[166];
	v[0] += v[2];
	sporttournament20_pd[126] = 2. * x[41];
	v[2] = sporttournament20_pd[126] * x[174];
	v[0] += v[2];
	sporttournament20_pd[127] = 2. * x[42];
	v[2] = sporttournament20_pd[127] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[128] = 2. * x[42];
	v[1] = sporttournament20_pd[128] * x[129];
	v[0] += v[1];
	sporttournament20_pd[129] = 2. * x[42];
	v[1] = sporttournament20_pd[129] * x[130];
	v[0] += v[1];
	sporttournament20_pd[130] = 2. * x[42];
	v[1] = sporttournament20_pd[130] * x[163];
	v[0] += v[1];
	sporttournament20_pd[131] = 2. * x[43];
	v[1] = sporttournament20_pd[131] * x[78];
	v[0] += v[1];
	sporttournament20_pd[132] = 2. * x[43];
	v[1] = sporttournament20_pd[132] * x[183];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[133] = 2. * x[44];
	v[2] = sporttournament20_pd[133] * x[45];
	v[0] += v[2];
	sporttournament20_pd[134] = 2. * x[44];
	v[2] = sporttournament20_pd[134] * x[120];
	v[0] += v[2];
	sporttournament20_pd[135] = 2. * x[44];
	v[2] = sporttournament20_pd[135] * x[177];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[136] = 2. * x[45];
	v[1] = sporttournament20_pd[136] * x[78];
	v[0] += v[1];
	sporttournament20_pd[137] = 2. * x[45];
	v[1] = sporttournament20_pd[137] * x[101];
	v[0] += v[1];
	sporttournament20_pd[138] = 2. * x[45];
	v[1] = sporttournament20_pd[138] * x[156];
	v[0] += v[1];
	sporttournament20_pd[139] = 2. * x[46];
	v[1] = sporttournament20_pd[139] * x[47];
	v[0] += v[1];
	sporttournament20_pd[140] = 2. * x[46];
	v[1] = sporttournament20_pd[140] * x[100];
	v[0] += v[1];
	sporttournament20_pd[141] = 2. * x[46];
	v[1] = sporttournament20_pd[141] * x[170];
	v[0] += v[1];
	sporttournament20_pd[142] = 2. * x[47];
	v[1] = sporttournament20_pd[142] * x[101];
	v[0] += v[1];
	sporttournament20_pd[143] = 2. * x[48];
	v[1] = sporttournament20_pd[143] * x[109];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[144] = 2. * x[49];
	v[2] = sporttournament20_pd[144] * x[140];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[145] = 2. * x[49];
	v[1] = sporttournament20_pd[145] * x[143];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[146] = 2. * x[49];
	v[2] = sporttournament20_pd[146] * x[159];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[147] = 2. * x[49];
	v[1] = sporttournament20_pd[147] * x[181];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[148] = 2. * x[50];
	v[2] = sporttournament20_pd[148] * x[152];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[149] = 2. * x[50];
	v[1] = sporttournament20_pd[149] * x[181];
	v[0] += v[1];
	sporttournament20_pd[150] = 2. * x[50];
	v[1] = sporttournament20_pd[150] * x[182];
	v[0] += v[1];
	sporttournament20_pd[151] = 2. * x[50];
	v[1] = sporttournament20_pd[151] * x[185];
	v[0] += v[1];
	sporttournament20_pd[152] = 2. * x[51];
	v[1] = sporttournament20_pd[152] * x[73];
	v[0] += v[1];
	sporttournament20_pd[153] = 2. * x[51];
	v[1] = sporttournament20_pd[153] * x[114];
	v[0] += v[1];
	sporttournament20_pd[154] = 2. * x[51];
	v[1] = sporttournament20_pd[154] * x[152];
	v[0] += v[1];
	sporttournament20_pd[155] = 2. * x[52];
	v[1] = sporttournament20_pd[155] * x[70];
	v[0] += v[1];
	sporttournament20_pd[156] = 2. * x[52];
	v[1] = sporttournament20_pd[156] * x[73];
	v[0] += v[1];
	sporttournament20_pd[157] = 2. * x[52];
	v[1] = sporttournament20_pd[157] * x[182];
	v[0] += v[1];
	sporttournament20_pd[158] = 2. * x[53];
	v[1] = sporttournament20_pd[158] * x[93];
	v[0] += v[1];
	sporttournament20_pd[159] = 2. * x[53];
	v[1] = sporttournament20_pd[159] * x[115];
	v[0] += v[1];
	sporttournament20_pd[160] = 2. * x[54];
	v[1] = sporttournament20_pd[160] * x[56];
	v[0] += v[1];
	sporttournament20_pd[161] = 2. * x[54];
	v[1] = sporttournament20_pd[161] * x[155];
	v[0] += v[1];
	sporttournament20_pd[162] = 2. * x[54];
	v[1] = sporttournament20_pd[162] * x[174];
	v[0] += v[1];
	sporttournament20_pd[163] = 2. * x[55];
	v[1] = sporttournament20_pd[163] * x[57];
	v[0] += v[1];
	sporttournament20_pd[164] = 2. * x[55];
	v[1] = sporttournament20_pd[164] * x[116];
	v[0] += v[1];
	sporttournament20_pd[165] = 2. * x[55];
	v[1] = sporttournament20_pd[165] * x[148];
	v[0] += v[1];
	sporttournament20_pd[166] = 2. * x[56];
	v[1] = sporttournament20_pd[166] * x[57];
	v[0] += v[1];
	sporttournament20_pd[167] = 2. * x[56];
	v[1] = sporttournament20_pd[167] * x[115];
	v[0] += v[1];
	sporttournament20_pd[168] = 2. * x[56];
	v[1] = sporttournament20_pd[168] * x[147];
	v[0] += v[1];
	sporttournament20_pd[169] = 2. * x[57];
	v[1] = sporttournament20_pd[169] * x[128];
	v[0] += v[1];
	sporttournament20_pd[170] = 2. * x[57];
	v[1] = sporttournament20_pd[170] * x[169];
	v[0] += v[1];
	sporttournament20_pd[171] = 2. * x[58];
	v[1] = sporttournament20_pd[171] * x[60];
	v[0] += v[1];
	sporttournament20_pd[172] = 2. * x[58];
	v[1] = sporttournament20_pd[172] * x[129];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[173] = 2. * x[58];
	v[2] = sporttournament20_pd[173] * x[177];
	v[0] += v[2];
	sporttournament20_pd[174] = 2. * x[59];
	v[2] = sporttournament20_pd[174] * x[79];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[175] = 2. * x[59];
	v[1] = sporttournament20_pd[175] * x[99];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[176] = 2. * x[59];
	v[2] = sporttournament20_pd[176] * x[125];
	v[0] += v[2];
	sporttournament20_pd[177] = 2. * x[59];
	v[2] = sporttournament20_pd[177] * x[127];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[178] = 2. * x[60];
	v[1] = sporttournament20_pd[178] * x[98];
	v[0] += v[1];
	sporttournament20_pd[179] = 2. * x[60];
	v[1] = sporttournament20_pd[179] * x[125];
	v[0] += v[1];
	sporttournament20_pd[180] = 2. * x[61];
	v[1] = sporttournament20_pd[180] * x[62];
	v[0] += v[1];
	sporttournament20_pd[181] = 2. * x[61];
	v[1] = sporttournament20_pd[181] * x[124];
	v[0] += v[1];
	sporttournament20_pd[182] = 2. * x[62];
	v[1] = sporttournament20_pd[182] * x[125];
	v[0] += v[1];
	sporttournament20_pd[183] = 2. * x[63];
	v[1] = sporttournament20_pd[183] * x[65];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[184] = 2. * x[63];
	v[2] = sporttournament20_pd[184] * x[132];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[185] = 2. * x[64];
	v[1] = sporttournament20_pd[185] * x[66];
	v[0] += v[1];
	sporttournament20_pd[186] = 2. * x[64];
	v[1] = sporttournament20_pd[186] * x[172];
	v[0] += v[1];
	sporttournament20_pd[187] = 2. * x[64];
	v[1] = sporttournament20_pd[187] * x[173];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[188] = 2. * x[65];
	v[2] = sporttournament20_pd[188] * x[66];
	v[0] += v[2];
	sporttournament20_pd[189] = 2. * x[65];
	v[2] = sporttournament20_pd[189] * x[149];
	v[0] += v[2];
	sporttournament20_pd[190] = 2. * x[65];
	v[2] = sporttournament20_pd[190] * x[173];
	v[0] += v[2];
	sporttournament20_pd[191] = 2. * x[66];
	v[2] = sporttournament20_pd[191] * x[68];
	v[0] += v[2];
	sporttournament20_pd[192] = 2. * x[67];
	v[2] = sporttournament20_pd[192] * x[87];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[193] = 2. * x[67];
	v[1] = sporttournament20_pd[193] * x[143];
	v[0] += v[1];
	sporttournament20_pd[194] = 2. * x[67];
	v[1] = sporttournament20_pd[194] * x[158];
	v[0] += v[1];
	sporttournament20_pd[195] = 2. * x[68];
	v[1] = sporttournament20_pd[195] * x[84];
	v[0] += v[1];
	sporttournament20_pd[196] = 2. * x[68];
	v[1] = sporttournament20_pd[196] * x[87];
	v[0] += v[1];
	sporttournament20_pd[197] = 2. * x[68];
	v[1] = sporttournament20_pd[197] * x[109];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[198] = 2. * x[69];
	v[2] = sporttournament20_pd[198] * x[70];
	v[0] += v[2];
	sporttournament20_pd[199] = 2. * x[69];
	v[2] = sporttournament20_pd[199] * x[89];
	v[0] += v[2];
	sporttournament20_pd[200] = 2. * x[69];
	v[2] = sporttournament20_pd[200] * x[150];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[201] = 2. * x[69];
	v[1] = sporttournament20_pd[201] * x[185];
	v[0] += v[1];
	sporttournament20_pd[202] = 2. * x[70];
	v[1] = sporttournament20_pd[202] * x[72];
	v[0] += v[1];
	sporttournament20_pd[203] = 2. * x[70];
	v[1] = sporttournament20_pd[203] * x[165];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[204] = 2. * x[71];
	v[2] = sporttournament20_pd[204] * x[92];
	v[0] += v[2];
	sporttournament20_pd[205] = 2. * x[71];
	v[2] = sporttournament20_pd[205] * x[161];
	v[0] += v[2];
	sporttournament20_pd[206] = 2. * x[72];
	v[2] = sporttournament20_pd[206] * x[91];
	v[0] += v[2];
	sporttournament20_pd[207] = 2. * x[72];
	v[2] = sporttournament20_pd[207] * x[92];
	v[0] += v[2];
	sporttournament20_pd[208] = 2. * x[73];
	v[2] = sporttournament20_pd[208] * x[75];
	v[0] += v[2];
	sporttournament20_pd[209] = 2. * x[73];
	v[2] = sporttournament20_pd[209] * x[115];
	v[0] += v[2];
	sporttournament20_pd[210] = 2. * x[74];
	v[2] = sporttournament20_pd[210] * x[76];
	v[0] += v[2];
	sporttournament20_pd[211] = 2. * x[74];
	v[2] = sporttournament20_pd[211] * x[153];
	v[0] += v[2];
	sporttournament20_pd[212] = 2. * x[75];
	v[2] = sporttournament20_pd[212] * x[76];
	v[0] += v[2];
	sporttournament20_pd[213] = 2. * x[75];
	v[2] = sporttournament20_pd[213] * x[92];
	v[0] += v[2];
	sporttournament20_pd[214] = 2. * x[75];
	v[2] = sporttournament20_pd[214] * x[130];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[215] = 2. * x[76];
	v[1] = sporttournament20_pd[215] * x[118];
	v[0] += v[1];
	sporttournament20_pd[216] = 2. * x[76];
	v[1] = sporttournament20_pd[216] * x[183];
	v[0] += v[1];
	sporttournament20_pd[217] = 2. * x[77];
	v[1] = sporttournament20_pd[217] * x[121];
	v[0] += v[1];
	sporttournament20_pd[218] = 2. * x[77];
	v[1] = sporttournament20_pd[218] * x[142];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[219] = 2. * x[77];
	v[2] = sporttournament20_pd[219] * x[168];
	v[0] += v[2];
	sporttournament20_pd[220] = 2. * x[77];
	v[2] = sporttournament20_pd[220] * x[183];
	v[0] += v[2];
	sporttournament20_pd[221] = 2. * x[78];
	v[2] = sporttournament20_pd[221] * x[123];
	v[0] += v[2];
	sporttournament20_pd[222] = 2. * x[78];
	v[2] = sporttournament20_pd[222] * x[146];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[223] = 2. * x[79];
	v[1] = sporttournament20_pd[223] * x[187];
	v[0] += v[1];
	sporttournament20_pd[224] = 2. * x[80];
	v[1] = sporttournament20_pd[224] * x[83];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[225] = 2. * x[80];
	v[2] = sporttournament20_pd[225] * x[136];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[226] = 2. * x[81];
	v[1] = sporttournament20_pd[226] * x[83];
	v[0] += v[1];
	sporttournament20_pd[227] = 2. * x[81];
	v[1] = sporttournament20_pd[227] * x[164];
	v[0] += v[1];
	sporttournament20_pd[228] = 2. * x[82];
	v[1] = sporttournament20_pd[228] * x[84];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[229] = 2. * x[82];
	v[2] = sporttournament20_pd[229] * x[133];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[230] = 2. * x[82];
	v[1] = sporttournament20_pd[230] * x[149];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[231] = 2. * x[82];
	v[2] = sporttournament20_pd[231] * x[176];
	v[0] += v[2];
	sporttournament20_pd[232] = 2. * x[83];
	v[2] = sporttournament20_pd[232] * x[84];
	v[0] += v[2];
	sporttournament20_pd[233] = 2. * x[84];
	v[2] = sporttournament20_pd[233] * x[86];
	v[0] += v[2];
	sporttournament20_pd[234] = 2. * x[85];
	v[2] = sporttournament20_pd[234] * x[138];
	v[0] += v[2];
	sporttournament20_pd[235] = 2. * x[85];
	v[2] = sporttournament20_pd[235] * x[158];
	v[0] += v[2];
	sporttournament20_pd[236] = 2. * x[85];
	v[2] = sporttournament20_pd[236] * x[159];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[237] = 2. * x[86];
	v[1] = sporttournament20_pd[237] * x[108];
	v[0] += v[1];
	sporttournament20_pd[238] = 2. * x[86];
	v[1] = sporttournament20_pd[238] * x[159];
	v[0] += v[1];
	sporttournament20_pd[239] = 2. * x[87];
	v[1] = sporttournament20_pd[239] * x[186];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[240] = 2. * x[88];
	v[2] = sporttournament20_pd[240] * x[89];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[241] = 2. * x[89];
	v[1] = sporttournament20_pd[241] * x[90];
	v[0] += v[1];
	sporttournament20_pd[242] = 2. * x[89];
	v[1] = sporttournament20_pd[242] * x[186];
	v[0] += v[1];
	sporttournament20_pd[243] = 2. * x[90];
	v[1] = sporttournament20_pd[243] * x[91];
	v[0] += v[1];
	sporttournament20_pd[244] = 2. * x[90];
	v[1] = sporttournament20_pd[244] * x[111];
	v[0] += v[1];
	sporttournament20_pd[245] = 2. * x[90];
	v[1] = sporttournament20_pd[245] * x[145];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[246] = 2. * x[91];
	v[2] = sporttournament20_pd[246] * x[112];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[247] = 2. * x[91];
	v[1] = sporttournament20_pd[247] * x[175];
	v[0] += v[1];
	sporttournament20_pd[248] = 2. * x[92];
	v[1] = sporttournament20_pd[248] * x[94];
	v[0] += v[1];
	sporttournament20_pd[249] = 2. * x[93];
	v[1] = sporttournament20_pd[249] * x[95];
	v[0] += v[1];
	sporttournament20_pd[250] = 2. * x[93];
	v[1] = sporttournament20_pd[250] * x[151];
	v[0] += v[1];
	sporttournament20_pd[251] = 2. * x[94];
	v[1] = sporttournament20_pd[251] * x[95];
	v[0] += v[1];
	sporttournament20_pd[252] = 2. * x[94];
	v[1] = sporttournament20_pd[252] * x[130];
	v[0] += v[1];
	sporttournament20_pd[253] = 2. * x[94];
	v[1] = sporttournament20_pd[253] * x[189];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[254] = 2. * x[95];
	v[2] = sporttournament20_pd[254] * x[96];
	v[0] += v[2];
	sporttournament20_pd[255] = 2. * x[95];
	v[2] = sporttournament20_pd[255] * x[180];
	v[0] += v[2];
	sporttournament20_pd[256] = 2. * x[96];
	v[2] = sporttournament20_pd[256] * x[97];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[257] = 2. * x[96];
	v[1] = sporttournament20_pd[257] * x[128];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[258] = 2. * x[96];
	v[2] = sporttournament20_pd[258] * x[155];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[259] = 2. * x[97];
	v[1] = sporttournament20_pd[259] * x[99];
	v[0] += v[1];
	sporttournament20_pd[260] = 2. * x[97];
	v[1] = sporttournament20_pd[260] * x[180];
	v[0] += v[1];
	sporttournament20_pd[261] = 2. * x[98];
	v[1] = sporttournament20_pd[261] * x[100];
	v[0] += v[1];
	sporttournament20_pd[262] = 2. * x[98];
	v[1] = sporttournament20_pd[262] * x[141];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[263] = 2. * x[98];
	v[2] = sporttournament20_pd[263] * x[169];
	v[0] += v[2];
	sporttournament20_pd[264] = 2. * x[99];
	v[2] = sporttournament20_pd[264] * x[100];
	v[0] += v[2];
	sporttournament20_pd[265] = 2. * x[99];
	v[2] = sporttournament20_pd[265] * x[141];
	v[0] += v[2];
	sporttournament20_pd[266] = 2. * x[100];
	v[2] = sporttournament20_pd[266] * x[102];
	v[0] += v[2];
	sporttournament20_pd[267] = 2. * x[101];
	v[2] = sporttournament20_pd[267] * x[103];
	v[0] += v[2];
	sporttournament20_pd[268] = 2. * x[101];
	v[2] = sporttournament20_pd[268] * x[131];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[269] = 2. * x[102];
	v[1] = sporttournament20_pd[269] * x[103];
	v[0] += v[1];
	sporttournament20_pd[270] = 2. * x[102];
	v[1] = sporttournament20_pd[270] * x[131];
	v[0] += v[1];
	sporttournament20_pd[271] = 2. * x[104];
	v[1] = sporttournament20_pd[271] * x[106];
	v[0] += v[1];
	sporttournament20_pd[272] = 2. * x[104];
	v[1] = sporttournament20_pd[272] * x[157];
	v[0] += v[1];
	sporttournament20_pd[273] = 2. * x[105];
	v[1] = sporttournament20_pd[273] * x[108];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[274] = 2. * x[105];
	v[2] = sporttournament20_pd[274] * x[137];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[275] = 2. * x[105];
	v[1] = sporttournament20_pd[275] * x[178];
	v[0] += v[1];
	sporttournament20_pd[276] = 2. * x[106];
	v[1] = sporttournament20_pd[276] * x[108];
	v[0] += v[1];
	sporttournament20_pd[277] = 2. * x[106];
	v[1] = sporttournament20_pd[277] * x[172];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[278] = 2. * x[107];
	v[2] = sporttournament20_pd[278] * x[136];
	v[0] += v[2];
	sporttournament20_pd[279] = 2. * x[107];
	v[2] = sporttournament20_pd[279] * x[157];
	v[0] += v[2];
	sporttournament20_pd[280] = 2. * x[107];
	v[2] = sporttournament20_pd[280] * x[179];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[281] = 2. * x[108];
	v[1] = sporttournament20_pd[281] * x[179];
	v[0] += v[1];
	sporttournament20_pd[282] = 2. * x[109];
	v[1] = sporttournament20_pd[282] * x[184];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[283] = 2. * x[110];
	v[2] = sporttournament20_pd[283] * x[111];
	v[0] += v[2];
	sporttournament20_pd[284] = 2. * x[110];
	v[2] = sporttournament20_pd[284] * x[154];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[285] = 2. * x[110];
	v[1] = sporttournament20_pd[285] * x[185];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[286] = 2. * x[111];
	v[2] = sporttournament20_pd[286] * x[144];
	v[0] += v[2];
	sporttournament20_pd[287] = 2. * x[111];
	v[2] = sporttournament20_pd[287] * x[184];
	v[0] += v[2];
	sporttournament20_pd[288] = 2. * x[112];
	v[2] = sporttournament20_pd[288] * x[113];
	v[0] += v[2];
	sporttournament20_pd[289] = 2. * x[113];
	v[2] = sporttournament20_pd[289] * x[144];
	v[0] += v[2];
	sporttournament20_pd[290] = 2. * x[113];
	v[2] = sporttournament20_pd[290] * x[167];
	v[0] += v[2];
	sporttournament20_pd[291] = 2. * x[113];
	v[2] = sporttournament20_pd[291] * x[175];
	v[0] += v[2];
	sporttournament20_pd[292] = 2. * x[114];
	v[2] = sporttournament20_pd[292] * x[116];
	v[0] += v[2];
	sporttournament20_pd[293] = 2. * x[114];
	v[2] = sporttournament20_pd[293] * x[162];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[294] = 2. * x[115];
	v[1] = sporttournament20_pd[294] * x[117];
	v[0] += v[1];
	sporttournament20_pd[295] = 2. * x[116];
	v[1] = sporttournament20_pd[295] * x[117];
	v[0] += v[1];
	sporttournament20_pd[296] = 2. * x[116];
	v[1] = sporttournament20_pd[296] * x[189];
	v[0] += v[1];
	sporttournament20_pd[297] = 2. * x[117];
	v[1] = sporttournament20_pd[297] * x[119];
	v[0] += v[1];
	sporttournament20_pd[298] = 2. * x[117];
	v[1] = sporttournament20_pd[298] * x[142];
	v[0] += v[1];
	sporttournament20_pd[299] = 2. * x[118];
	v[1] = sporttournament20_pd[299] * x[120];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[300] = 2. * x[118];
	v[2] = sporttournament20_pd[300] * x[141];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[301] = 2. * x[118];
	v[1] = sporttournament20_pd[301] * x[153];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[302] = 2. * x[119];
	v[2] = sporttournament20_pd[302] * x[120];
	v[0] += v[2];
	sporttournament20_pd[303] = 2. * x[119];
	v[2] = sporttournament20_pd[303] * x[155];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[304] = 2. * x[119];
	v[1] = sporttournament20_pd[304] * x[177];
	v[0] += v[1];
	sporttournament20_pd[305] = 2. * x[120];
	v[1] = sporttournament20_pd[305] * x[122];
	v[0] += v[1];
	sporttournament20_pd[306] = 2. * x[121];
	v[1] = sporttournament20_pd[306] * x[123];
	v[0] += v[1];
	sporttournament20_pd[307] = 2. * x[121];
	v[1] = sporttournament20_pd[307] * x[124];
	v[0] += v[1];
	sporttournament20_pd[308] = 2. * x[121];
	v[1] = sporttournament20_pd[308] * x[128];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[309] = 2. * x[122];
	v[2] = sporttournament20_pd[309] * x[124];
	v[0] += v[2];
	sporttournament20_pd[310] = 2. * x[122];
	v[2] = sporttournament20_pd[310] * x[131];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[311] = 2. * x[122];
	v[1] = sporttournament20_pd[311] * x[146];
	v[0] += v[1];
	sporttournament20_pd[312] = 2. * x[123];
	v[1] = sporttournament20_pd[312] * x[188];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[313] = 2. * x[124];
	v[2] = sporttournament20_pd[313] * x[188];
	v[0] += v[2];
	sporttournament20_pd[314] = 2. * x[125];
	v[2] = sporttournament20_pd[314] * x[126];
	v[0] += v[2];
	sporttournament20_pd[315] = 2. * x[126];
	v[2] = sporttournament20_pd[315] * x[188];
	v[0] += v[2];
	sporttournament20_pd[316] = 2. * x[127];
	v[2] = sporttournament20_pd[316] * x[128];
	v[0] += v[2];
	sporttournament20_pd[317] = 2. * x[127];
	v[2] = sporttournament20_pd[317] * x[129];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[318] = 2. * x[127];
	v[1] = sporttournament20_pd[318] * x[131];
	v[0] += v[1];
	sporttournament20_pd[319] = 2. * x[129];
	v[1] = sporttournament20_pd[319] * x[147];
	v[0] += v[1];
	sporttournament20_pd[320] = 2. * x[130];
	v[1] = sporttournament20_pd[320] * x[148];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[321] = 2. * x[132];
	v[2] = sporttournament20_pd[321] * x[133];
	v[0] += v[2];
	sporttournament20_pd[322] = 2. * x[134];
	v[2] = sporttournament20_pd[322] * x[135];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[323] = 2. * x[134];
	v[1] = sporttournament20_pd[323] * x[152];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[324] = 2. * x[136];
	v[2] = sporttournament20_pd[324] * x[137];
	v[0] += v[2];
	sporttournament20_pd[325] = 2. * x[136];
	v[2] = sporttournament20_pd[325] * x[158];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[326] = 2. * x[138];
	v[1] = sporttournament20_pd[326] * x[139];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[327] = 2. * x[139];
	v[2] = sporttournament20_pd[327] * x[154];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[328] = 2. * x[140];
	v[1] = sporttournament20_pd[328] * x[144];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[329] = 2. * x[141];
	v[2] = sporttournament20_pd[329] * x[142];
	v[0] += v[2];
	sporttournament20_pd[330] = 2. * x[142];
	v[2] = sporttournament20_pd[330] * x[163];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[331] = 2. * x[146];
	v[1] = sporttournament20_pd[331] * x[147];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[332] = 2. * x[146];
	v[2] = sporttournament20_pd[332] * x[148];
	v[0] += v[2];
	sporttournament20_pd[333] = 2. * x[147];
	v[2] = sporttournament20_pd[333] * x[151];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[334] = 2. * x[148];
	v[1] = sporttournament20_pd[334] * x[169];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[335] = 2. * x[151];
	v[2] = sporttournament20_pd[335] * x[183];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[336] = 2. * x[153];
	v[1] = sporttournament20_pd[336] * x[180];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[337] = 2. * x[154];
	v[2] = sporttournament20_pd[337] * x[179];
	v[0] += v[2];
	sporttournament20_pd[338] = 2. * x[154];
	v[2] = sporttournament20_pd[338] * x[184];
	v[0] += v[2];
	sporttournament20_pd[339] = 2. * x[155];
	v[2] = sporttournament20_pd[339] * x[162];
	v[0] += v[2];
	sporttournament20_pd[340] = 2. * x[156];
	v[2] = sporttournament20_pd[340] * x[171];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[341] = 2. * x[157];
	v[1] = sporttournament20_pd[341] * x[178];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[342] = 2. * x[158];
	v[2] = sporttournament20_pd[342] * x[164];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[343] = 2. * x[159];
	v[1] = sporttournament20_pd[343] * x[186];
	v[0] += v[1];
	sporttournament20_pd[344] = 2. * x[160];
	v[1] = sporttournament20_pd[344] * x[181];
	v[0] += v[1];
	sporttournament20_pd[345] = 2. * x[160];
	v[1] = sporttournament20_pd[345] * x[182];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[346] = 2. * x[161];
	v[2] = sporttournament20_pd[346] * x[165];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[347] = 2. * x[161];
	v[1] = sporttournament20_pd[347] * x[167];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[348] = 2. * x[162];
	v[2] = sporttournament20_pd[348] * x[163];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[349] = 2. * x[164];
	v[1] = sporttournament20_pd[349] * x[176];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[350] = 2. * x[166];
	v[2] = sporttournament20_pd[350] * x[167];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[351] = 2. * x[167];
	v[1] = sporttournament20_pd[351] * x[189];
	v[0] += v[1];
	sporttournament20_pd[352] = 2. * x[168];
	v[1] = sporttournament20_pd[352] * x[169];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[353] = 2. * x[168];
	v[2] = sporttournament20_pd[353] * x[170];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[354] = 2. * x[174];
	v[1] = sporttournament20_pd[354] * x[175];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[355] = 2. * x[175];
	v[2] = sporttournament20_pd[355] * x[189];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[356] = 2. * x[177];
	v[1] = sporttournament20_pd[356] * x[180];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[357] = 2. * x[181];
	v[2] = sporttournament20_pd[357] * x[184];
	v[1] = -v[2];
	v[0] += v[1];
	sporttournament20_pd[358] = 2. * x[185];
	v[1] = sporttournament20_pd[358] * x[186];
	v[2] = -v[1];
	v[0] += v[2];
	sporttournament20_pd[359] = 2. * x[187];
	v[2] = sporttournament20_pd[359] * x[188];
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
	t1 += -2.*x[12];
	t1 += -4.*x[13];
	t1 += -2.*x[14];
	t1 += -2.*x[15];
	t1 += -2.*x[16];
	t1 += -2.*x[17];
	t1 += -2.*x[18];
	t1 += -2.*x[19];
	t1 += -2.*x[20];
	t1 += 2.*x[21];
	t1 += -4.*x[22];
	t1 += -2.*x[23];
	t1 += -2.*x[24];
	t1 += -2.*x[25];
	t1 += -4.*x[26];
	t1 += -2.*x[27];
	t1 += -2.*x[28];
	t1 += -2.*x[29];
	t1 += -2.*x[30];
	t1 += -2.*x[31];
	t1 += -4.*x[32];
	t1 += 2.*x[33];
	t1 += 4.*x[34];
	t1 += -4.*x[35];
	t1 += -2.*x[36];
	t1 += -2.*x[37];
	t1 += -2.*x[38];
	t1 += -2.*x[39];
	t1 += -2.*x[40];
	t1 += -4.*x[41];
	t1 += -2.*x[42];
	t1 += 2.*x[43];
	t1 += -2.*x[44];
	t1 += -4.*x[45];
	t1 += -4.*x[46];
	t1 += -2.*x[47];
	t1 += -2.*x[48];
	t1 += 4.*x[49];
	t1 += -2.*x[50];
	t1 += -4.*x[51];
	t1 += -2.*x[52];
	t1 += -4.*x[53];
	t1 += -4.*x[54];
	t1 += -4.*x[55];
	t1 += -4.*x[56];
	t1 += -4.*x[57];
	t1 += -2.*x[58];
	t1 += 2.*x[59];
	t1 += -4.*x[60];
	t1 += -4.*x[61];
	t1 += -2.*x[62];
	t1 += 2.*x[63];
	t1 += -2.*x[64];
	t1 += -2.*x[65];
	t1 += -4.*x[66];
	t1 += -2.*x[67];
	t1 += -2.*x[68];
	t1 += -2.*x[69];
	t1 += -2.*x[70];
	t1 += -4.*x[71];
	t1 += -2.*x[72];
	t1 += -4.*x[73];
	t1 += -4.*x[74];
	t1 += -2.*x[75];
	t1 += -4.*x[76];
	t1 += -2.*x[77];
	t1 += -2.*x[78];
	t1 += -2.*x[79];
	t1 += 2.*x[80];
	t1 += -2.*x[81];
	t1 += 2.*x[82];
	t1 += -2.*x[83];
	t1 += -2.*x[84];
	t1 += -2.*x[85];
	t1 += -2.*x[86];
	t1 += 2.*x[87];
	t1 += -2.*x[88];
	t1 += -2.*x[89];
	t1 += -2.*x[90];
	t1 += -2.*x[91];
	t1 += -4.*x[92];
	t1 += -4.*x[93];
	t1 += -2.*x[94];
	t1 += -4.*x[95];
	t1 += 2.*x[96];
	t1 += -2.*x[97];
	t1 += -2.*x[98];
	t1 += -2.*x[99];
	t1 += -4.*x[100];
	t1 += -2.*x[101];
	t1 += -4.*x[102];
	t1 += -2.*x[103];
	t1 += -2.*x[104];
	t1 += 2.*x[105];
	t1 += -2.*x[106];
	t1 += -2.*x[107];
	t1 += -2.*x[108];
	t1 += 4.*x[109];
	t1 += 2.*x[110];
	t1 += -4.*x[111];
	t1 += -2.*x[112];
	t1 += -4.*x[113];
	t1 += -2.*x[114];
	t1 += -4.*x[115];
	t1 += -4.*x[116];
	t1 += -4.*x[117];
	t1 += 2.*x[118];
	t1 += -2.*x[119];
	t1 += -2.*x[120];
	t1 += -2.*x[121];
	t1 += -2.*x[122];
	t1 += -2.*x[123];
	t1 += -4.*x[124];
	t1 += -4.*x[125];
	t1 += -2.*x[126];
	t1 += x[190];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[188] = -sporttournament20_pd[359];
	J[187] = -x[188]*2.;
	J[186] = -sporttournament20_pd[358];
	J[185] = -x[186]*2.;
	J[184] = -sporttournament20_pd[357];
	J[181] = -x[184]*2.;
	J[180] = -sporttournament20_pd[356];
	J[177] = -x[180]*2.;
	J[189] = -sporttournament20_pd[355];
	J[175] = -x[189]*2.;
	J[175] -= sporttournament20_pd[354];
	J[174] = -x[175]*2.;
	J[170] = -sporttournament20_pd[353];
	J[168] = -x[170]*2.;
	J[169] = -sporttournament20_pd[352];
	J[168] -= x[169]*2.;
	J[189] += sporttournament20_pd[351];
	J[167] = x[189]*2.;
	J[167] -= sporttournament20_pd[350];
	J[166] = -x[167]*2.;
	J[176] = -sporttournament20_pd[349];
	J[164] = -x[176]*2.;
	J[163] = -sporttournament20_pd[348];
	J[162] = -x[163]*2.;
	J[167] -= sporttournament20_pd[347];
	J[161] = -x[167]*2.;
	J[165] = -sporttournament20_pd[346];
	J[161] -= x[165]*2.;
	J[182] = -sporttournament20_pd[345];
	J[160] = -x[182]*2.;
	J[181] += sporttournament20_pd[344];
	J[160] += x[181]*2.;
	J[186] += sporttournament20_pd[343];
	J[159] = x[186]*2.;
	J[164] -= sporttournament20_pd[342];
	J[158] = -x[164]*2.;
	J[178] = -sporttournament20_pd[341];
	J[157] = -x[178]*2.;
	J[171] = -sporttournament20_pd[340];
	J[156] = -x[171]*2.;
	J[162] += sporttournament20_pd[339];
	J[155] = x[162]*2.;
	J[184] += sporttournament20_pd[338];
	J[154] = x[184]*2.;
	J[179] = sporttournament20_pd[337];
	J[154] += x[179]*2.;
	J[180] -= sporttournament20_pd[336];
	J[153] = -x[180]*2.;
	J[183] = -sporttournament20_pd[335];
	J[151] = -x[183]*2.;
	J[169] -= sporttournament20_pd[334];
	J[148] = -x[169]*2.;
	J[151] -= sporttournament20_pd[333];
	J[147] = -x[151]*2.;
	J[148] += sporttournament20_pd[332];
	J[146] = x[148]*2.;
	J[147] -= sporttournament20_pd[331];
	J[146] -= x[147]*2.;
	J[163] -= sporttournament20_pd[330];
	J[142] = -x[163]*2.;
	J[142] += sporttournament20_pd[329];
	J[141] = x[142]*2.;
	J[144] = -sporttournament20_pd[328];
	J[140] = -x[144]*2.;
	J[154] -= sporttournament20_pd[327];
	J[139] = -x[154]*2.;
	J[139] -= sporttournament20_pd[326];
	J[138] = -x[139]*2.;
	J[158] -= sporttournament20_pd[325];
	J[136] = -x[158]*2.;
	J[137] = sporttournament20_pd[324];
	J[136] += x[137]*2.;
	J[152] = -sporttournament20_pd[323];
	J[134] = -x[152]*2.;
	J[135] = -sporttournament20_pd[322];
	J[134] -= x[135]*2.;
	J[133] = sporttournament20_pd[321];
	J[132] = x[133]*2.;
	J[148] -= sporttournament20_pd[320];
	J[130] = -x[148]*2.;
	J[147] += sporttournament20_pd[319];
	J[129] = x[147]*2.;
	J[131] = sporttournament20_pd[318];
	J[127] = x[131]*2.;
	J[129] -= sporttournament20_pd[317];
	J[127] -= x[129]*2.;
	J[128] = sporttournament20_pd[316];
	J[127] += x[128]*2.;
	J[188] += sporttournament20_pd[315];
	J[126] = x[188]*2. + -2.;
	J[126] += sporttournament20_pd[314];
	J[125] = x[126]*2. + -4.;
	J[188] += sporttournament20_pd[313];
	J[124] = x[188]*2. + -4.;
	J[188] -= sporttournament20_pd[312];
	J[123] = -x[188]*2. + -2.;
	J[146] += sporttournament20_pd[311];
	J[122] = x[146]*2. + -2.;
	J[131] -= sporttournament20_pd[310];
	J[122] -= x[131]*2.;
	J[124] += sporttournament20_pd[309];
	J[122] += x[124]*2.;
	J[128] -= sporttournament20_pd[308];
	J[121] = -x[128]*2. + -2.;
	J[124] += sporttournament20_pd[307];
	J[121] += x[124]*2.;
	J[123] += sporttournament20_pd[306];
	J[121] += x[123]*2.;
	J[122] += sporttournament20_pd[305];
	J[120] = x[122]*2. + -2.;
	J[177] += sporttournament20_pd[304];
	J[119] = x[177]*2. + -2.;
	J[155] -= sporttournament20_pd[303];
	J[119] -= x[155]*2.;
	J[120] += sporttournament20_pd[302];
	J[119] += x[120]*2.;
	J[153] -= sporttournament20_pd[301];
	J[118] = -x[153]*2. + 2.;
	J[141] -= sporttournament20_pd[300];
	J[118] -= x[141]*2.;
	J[120] -= sporttournament20_pd[299];
	J[118] -= x[120]*2.;
	J[142] += sporttournament20_pd[298];
	J[117] = x[142]*2. + -4.;
	J[119] += sporttournament20_pd[297];
	J[117] += x[119]*2.;
	J[189] += sporttournament20_pd[296];
	J[116] = x[189]*2. + -4.;
	J[117] += sporttournament20_pd[295];
	J[116] += x[117]*2.;
	J[117] += sporttournament20_pd[294];
	J[115] = x[117]*2. + -4.;
	J[162] -= sporttournament20_pd[293];
	J[114] = -x[162]*2. + -2.;
	J[116] += sporttournament20_pd[292];
	J[114] += x[116]*2.;
	J[175] += sporttournament20_pd[291];
	J[113] = x[175]*2. + -4.;
	J[167] += sporttournament20_pd[290];
	J[113] += x[167]*2.;
	J[144] += sporttournament20_pd[289];
	J[113] += x[144]*2.;
	J[113] += sporttournament20_pd[288];
	J[112] = x[113]*2. + -2.;
	J[184] += sporttournament20_pd[287];
	J[111] = x[184]*2. + -4.;
	J[144] += sporttournament20_pd[286];
	J[111] += x[144]*2.;
	J[185] -= sporttournament20_pd[285];
	J[110] = -x[185]*2. + 2.;
	J[154] -= sporttournament20_pd[284];
	J[110] -= x[154]*2.;
	J[111] += sporttournament20_pd[283];
	J[110] += x[111]*2.;
	J[184] -= sporttournament20_pd[282];
	J[109] = -x[184]*2. + 4.;
	J[179] += sporttournament20_pd[281];
	J[108] = x[179]*2. + -2.;
	J[179] -= sporttournament20_pd[280];
	J[107] = -x[179]*2. + -2.;
	J[157] += sporttournament20_pd[279];
	J[107] += x[157]*2.;
	J[136] += sporttournament20_pd[278];
	J[107] += x[136]*2.;
	J[172] = -sporttournament20_pd[277];
	J[106] = -x[172]*2. + -2.;
	J[108] += sporttournament20_pd[276];
	J[106] += x[108]*2.;
	J[178] += sporttournament20_pd[275];
	J[105] = x[178]*2. + 2.;
	J[137] -= sporttournament20_pd[274];
	J[105] -= x[137]*2.;
	J[108] -= sporttournament20_pd[273];
	J[105] -= x[108]*2.;
	J[157] += sporttournament20_pd[272];
	J[104] = x[157]*2. + -2.;
	J[106] += sporttournament20_pd[271];
	J[104] += x[106]*2.;
	J[131] += sporttournament20_pd[270];
	J[102] = x[131]*2. + -4.;
	J[103] = sporttournament20_pd[269] + -2.;
	J[102] += x[103]*2.;
	J[131] -= sporttournament20_pd[268];
	J[101] = -x[131]*2. + -2.;
	J[103] += sporttournament20_pd[267];
	J[101] += x[103]*2.;
	J[102] += sporttournament20_pd[266];
	J[100] = x[102]*2. + -4.;
	J[141] += sporttournament20_pd[265];
	J[99] = x[141]*2. + -2.;
	J[100] += sporttournament20_pd[264];
	J[99] += x[100]*2.;
	J[169] += sporttournament20_pd[263];
	J[98] = x[169]*2. + -2.;
	J[141] -= sporttournament20_pd[262];
	J[98] -= x[141]*2.;
	J[100] += sporttournament20_pd[261];
	J[98] += x[100]*2.;
	J[180] += sporttournament20_pd[260];
	J[97] = x[180]*2. + -2.;
	J[99] += sporttournament20_pd[259];
	J[97] += x[99]*2.;
	J[155] -= sporttournament20_pd[258];
	J[96] = -x[155]*2. + 2.;
	J[128] -= sporttournament20_pd[257];
	J[96] -= x[128]*2.;
	J[97] -= sporttournament20_pd[256];
	J[96] -= x[97]*2.;
	J[180] += sporttournament20_pd[255];
	J[95] = x[180]*2. + -4.;
	J[96] += sporttournament20_pd[254];
	J[95] += x[96]*2.;
	J[189] -= sporttournament20_pd[253];
	J[94] = -x[189]*2. + -2.;
	J[130] += sporttournament20_pd[252];
	J[94] += x[130]*2.;
	J[95] += sporttournament20_pd[251];
	J[94] += x[95]*2.;
	J[151] += sporttournament20_pd[250];
	J[93] = x[151]*2. + -4.;
	J[95] += sporttournament20_pd[249];
	J[93] += x[95]*2.;
	J[94] += sporttournament20_pd[248];
	J[92] = x[94]*2. + -4.;
	J[175] += sporttournament20_pd[247];
	J[91] = x[175]*2. + -2.;
	J[112] -= sporttournament20_pd[246];
	J[91] -= x[112]*2.;
	J[145] = -sporttournament20_pd[245];
	J[90] = -x[145]*2. + -2.;
	J[111] += sporttournament20_pd[244];
	J[90] += x[111]*2.;
	J[91] += sporttournament20_pd[243];
	J[90] += x[91]*2.;
	J[186] += sporttournament20_pd[242];
	J[89] = x[186]*2. + -2.;
	J[90] += sporttournament20_pd[241];
	J[89] += x[90]*2.;
	J[89] -= sporttournament20_pd[240];
	J[88] = -x[89]*2. + -2.;
	J[186] -= sporttournament20_pd[239];
	J[87] = -x[186]*2. + 2.;
	J[159] += sporttournament20_pd[238];
	J[86] = x[159]*2. + -2.;
	J[108] += sporttournament20_pd[237];
	J[86] += x[108]*2.;
	J[159] -= sporttournament20_pd[236];
	J[85] = -x[159]*2. + -2.;
	J[158] += sporttournament20_pd[235];
	J[85] += x[158]*2.;
	J[138] += sporttournament20_pd[234];
	J[85] += x[138]*2.;
	J[86] += sporttournament20_pd[233];
	J[84] = x[86]*2. + -2.;
	J[84] += sporttournament20_pd[232];
	J[83] = x[84]*2. + -2.;
	J[176] += sporttournament20_pd[231];
	J[82] = x[176]*2. + 2.;
	J[149] = -sporttournament20_pd[230];
	J[82] -= x[149]*2.;
	J[133] -= sporttournament20_pd[229];
	J[82] -= x[133]*2.;
	J[84] -= sporttournament20_pd[228];
	J[82] -= x[84]*2.;
	J[164] += sporttournament20_pd[227];
	J[81] = x[164]*2. + -2.;
	J[83] += sporttournament20_pd[226];
	J[81] += x[83]*2.;
	J[136] -= sporttournament20_pd[225];
	J[80] = -x[136]*2. + 2.;
	J[83] -= sporttournament20_pd[224];
	J[80] -= x[83]*2.;
	J[187] += sporttournament20_pd[223];
	J[79] = x[187]*2. + -2.;
	J[146] -= sporttournament20_pd[222];
	J[78] = -x[146]*2. + -2.;
	J[123] += sporttournament20_pd[221];
	J[78] += x[123]*2.;
	J[183] += sporttournament20_pd[220];
	J[77] = x[183]*2. + -2.;
	J[168] += sporttournament20_pd[219];
	J[77] += x[168]*2.;
	J[142] -= sporttournament20_pd[218];
	J[77] -= x[142]*2.;
	J[121] += sporttournament20_pd[217];
	J[77] += x[121]*2.;
	J[183] += sporttournament20_pd[216];
	J[76] = x[183]*2. + -4.;
	J[118] += sporttournament20_pd[215];
	J[76] += x[118]*2.;
	J[130] -= sporttournament20_pd[214];
	J[75] = -x[130]*2. + -2.;
	J[92] += sporttournament20_pd[213];
	J[75] += x[92]*2.;
	J[76] += sporttournament20_pd[212];
	J[75] += x[76]*2.;
	J[153] += sporttournament20_pd[211];
	J[74] = x[153]*2. + -4.;
	J[76] += sporttournament20_pd[210];
	J[74] += x[76]*2.;
	J[115] += sporttournament20_pd[209];
	J[73] = x[115]*2. + -4.;
	J[75] += sporttournament20_pd[208];
	J[73] += x[75]*2.;
	J[92] += sporttournament20_pd[207];
	J[72] = x[92]*2. + -2.;
	J[91] += sporttournament20_pd[206];
	J[72] += x[91]*2.;
	J[161] += sporttournament20_pd[205];
	J[71] = x[161]*2. + -4.;
	J[92] += sporttournament20_pd[204];
	J[71] += x[92]*2.;
	J[165] -= sporttournament20_pd[203];
	J[70] = -x[165]*2. + -2.;
	J[72] += sporttournament20_pd[202];
	J[70] += x[72]*2.;
	J[185] += sporttournament20_pd[201];
	J[69] = x[185]*2. + -2.;
	J[150] = -sporttournament20_pd[200];
	J[69] -= x[150]*2.;
	J[89] += sporttournament20_pd[199];
	J[69] += x[89]*2.;
	J[70] += sporttournament20_pd[198];
	J[69] += x[70]*2.;
	J[109] -= sporttournament20_pd[197];
	J[68] = -x[109]*2. + -2.;
	J[87] += sporttournament20_pd[196];
	J[68] += x[87]*2.;
	J[84] += sporttournament20_pd[195];
	J[68] += x[84]*2.;
	J[158] += sporttournament20_pd[194];
	J[67] = x[158]*2. + -2.;
	J[143] = sporttournament20_pd[193];
	J[67] += x[143]*2.;
	J[87] -= sporttournament20_pd[192];
	J[67] -= x[87]*2.;
	J[68] += sporttournament20_pd[191];
	J[66] = x[68]*2. + -4.;
	J[173] = sporttournament20_pd[190];
	J[65] = x[173]*2. + -2.;
	J[149] += sporttournament20_pd[189];
	J[65] += x[149]*2.;
	J[66] += sporttournament20_pd[188];
	J[65] += x[66]*2.;
	J[173] -= sporttournament20_pd[187];
	J[64] = -x[173]*2. + -2.;
	J[172] += sporttournament20_pd[186];
	J[64] += x[172]*2.;
	J[66] += sporttournament20_pd[185];
	J[64] += x[66]*2.;
	J[132] -= sporttournament20_pd[184];
	J[63] = -x[132]*2. + 2.;
	J[65] -= sporttournament20_pd[183];
	J[63] -= x[65]*2.;
	J[125] += sporttournament20_pd[182];
	J[62] = x[125]*2. + -2.;
	J[124] += sporttournament20_pd[181];
	J[61] = x[124]*2. + -4.;
	J[62] += sporttournament20_pd[180];
	J[61] += x[62]*2.;
	J[125] += sporttournament20_pd[179];
	J[60] = x[125]*2. + -4.;
	J[98] += sporttournament20_pd[178];
	J[60] += x[98]*2.;
	J[127] -= sporttournament20_pd[177];
	J[59] = -x[127]*2. + 2.;
	J[125] += sporttournament20_pd[176];
	J[59] += x[125]*2.;
	J[99] -= sporttournament20_pd[175];
	J[59] -= x[99]*2.;
	J[79] -= sporttournament20_pd[174];
	J[59] -= x[79]*2.;
	J[177] += sporttournament20_pd[173];
	J[58] = x[177]*2. + -2.;
	J[129] -= sporttournament20_pd[172];
	J[58] -= x[129]*2.;
	J[60] += sporttournament20_pd[171];
	J[58] += x[60]*2.;
	J[169] += sporttournament20_pd[170];
	J[57] = x[169]*2. + -4.;
	J[128] += sporttournament20_pd[169];
	J[57] += x[128]*2.;
	J[147] += sporttournament20_pd[168];
	J[56] = x[147]*2. + -4.;
	J[115] += sporttournament20_pd[167];
	J[56] += x[115]*2.;
	J[57] += sporttournament20_pd[166];
	J[56] += x[57]*2.;
	J[148] += sporttournament20_pd[165];
	J[55] = x[148]*2. + -4.;
	J[116] += sporttournament20_pd[164];
	J[55] += x[116]*2.;
	J[57] += sporttournament20_pd[163];
	J[55] += x[57]*2.;
	J[174] += sporttournament20_pd[162];
	J[54] = x[174]*2. + -4.;
	J[155] += sporttournament20_pd[161];
	J[54] += x[155]*2.;
	J[56] += sporttournament20_pd[160];
	J[54] += x[56]*2.;
	J[115] += sporttournament20_pd[159];
	J[53] = x[115]*2. + -4.;
	J[93] += sporttournament20_pd[158];
	J[53] += x[93]*2.;
	J[182] += sporttournament20_pd[157];
	J[52] = x[182]*2. + -2.;
	J[73] += sporttournament20_pd[156];
	J[52] += x[73]*2.;
	J[70] += sporttournament20_pd[155];
	J[52] += x[70]*2.;
	J[152] += sporttournament20_pd[154];
	J[51] = x[152]*2. + -4.;
	J[114] += sporttournament20_pd[153];
	J[51] += x[114]*2.;
	J[73] += sporttournament20_pd[152];
	J[51] += x[73]*2.;
	J[185] += sporttournament20_pd[151];
	J[50] = x[185]*2. + -2.;
	J[182] += sporttournament20_pd[150];
	J[50] += x[182]*2.;
	J[181] += sporttournament20_pd[149];
	J[50] += x[181]*2.;
	J[152] -= sporttournament20_pd[148];
	J[50] -= x[152]*2.;
	J[181] -= sporttournament20_pd[147];
	J[49] = -x[181]*2. + 4.;
	J[159] -= sporttournament20_pd[146];
	J[49] -= x[159]*2.;
	J[143] -= sporttournament20_pd[145];
	J[49] -= x[143]*2.;
	J[140] -= sporttournament20_pd[144];
	J[49] -= x[140]*2.;
	J[109] -= sporttournament20_pd[143];
	J[48] = -x[109]*2. + -2.;
	J[101] += sporttournament20_pd[142];
	J[47] = x[101]*2. + -2.;
	J[170] += sporttournament20_pd[141];
	J[46] = x[170]*2. + -4.;
	J[100] += sporttournament20_pd[140];
	J[46] += x[100]*2.;
	J[47] += sporttournament20_pd[139];
	J[46] += x[47]*2.;
	J[156] += sporttournament20_pd[138];
	J[45] = x[156]*2. + -4.;
	J[101] += sporttournament20_pd[137];
	J[45] += x[101]*2.;
	J[78] += sporttournament20_pd[136];
	J[45] += x[78]*2.;
	J[177] -= sporttournament20_pd[135];
	J[44] = -x[177]*2. + -2.;
	J[120] += sporttournament20_pd[134];
	J[44] += x[120]*2.;
	J[45] += sporttournament20_pd[133];
	J[44] += x[45]*2.;
	J[183] -= sporttournament20_pd[132];
	J[43] = -x[183]*2. + 2.;
	J[78] += sporttournament20_pd[131];
	J[43] += x[78]*2.;
	J[163] += sporttournament20_pd[130];
	J[42] = x[163]*2. + -2.;
	J[130] += sporttournament20_pd[129];
	J[42] += x[130]*2.;
	J[129] += sporttournament20_pd[128];
	J[42] += x[129]*2.;
	J[43] -= sporttournament20_pd[127];
	J[42] -= x[43]*2.;
	J[174] += sporttournament20_pd[126];
	J[41] = x[174]*2. + -4.;
	J[166] += sporttournament20_pd[125];
	J[41] += x[166]*2.;
	J[163] += sporttournament20_pd[124];
	J[41] += x[163]*2.;
	J[151] += sporttournament20_pd[123];
	J[41] += x[151]*2.;
	J[93] += sporttournament20_pd[122];
	J[40] = x[93]*2. + -2.;
	J[74] += sporttournament20_pd[121];
	J[40] += x[74]*2.;
	J[52] -= sporttournament20_pd[120];
	J[40] -= x[52]*2.;
	J[182] -= sporttournament20_pd[119];
	J[39] = -x[182]*2. + -2.;
	J[114] += sporttournament20_pd[118];
	J[39] += x[114]*2.;
	J[53] += sporttournament20_pd[117];
	J[39] += x[53]*2.;
	J[152] += sporttournament20_pd[116];
	J[38] = x[152]*2. + -2.;
	J[150] += sporttournament20_pd[115];
	J[38] += x[150]*2.;
	J[53] += sporttournament20_pd[114];
	J[38] += x[53]*2.;
	J[144] -= sporttournament20_pd[113];
	J[37] = -x[144]*2. + -2.;
	J[134] += sporttournament20_pd[112];
	J[37] += x[134]*2.;
	J[39] += sporttournament20_pd[111];
	J[37] += x[39]*2.;
	J[165] += sporttournament20_pd[110];
	J[36] = x[165]*2. + -2.;
	J[160] += sporttournament20_pd[109];
	J[36] += x[160]*2.;
	J[140] += sporttournament20_pd[108];
	J[35] = x[140]*2. + -4.;
	J[36] += sporttournament20_pd[107];
	J[35] += x[36]*2.;
	J[138] -= sporttournament20_pd[106];
	J[34] = -x[138]*2. + 4.;
	J[87] -= sporttournament20_pd[105];
	J[34] -= x[87]*2.;
	J[36] -= sporttournament20_pd[104];
	J[34] -= x[36]*2.;
	J[86] -= sporttournament20_pd[103];
	J[33] = -x[86]*2. + 2.;
	J[35] += sporttournament20_pd[102];
	J[33] += x[35]*2.;
	J[88] += sporttournament20_pd[101];
	J[32] = x[88]*2. + -4.;
	J[35] += sporttournament20_pd[100];
	J[32] += x[35]*2.;
	J[107] += sporttournament20_pd[99];
	J[31] = x[107]*2. + -2.;
	J[33] -= sporttournament20_pd[98];
	J[31] -= x[33]*2.;
	J[32] += sporttournament20_pd[97];
	J[31] += x[32]*2.;
	J[79] += sporttournament20_pd[96];
	J[30] = x[79]*2. + -2.;
	J[171] += sporttournament20_pd[95];
	J[29] = x[171]*2. + -2.;
	J[170] -= sporttournament20_pd[94];
	J[29] -= x[170]*2.;
	J[123] += sporttournament20_pd[93];
	J[29] += x[123]*2.;
	J[30] += sporttournament20_pd[92];
	J[29] += x[30]*2.;
	J[156] -= sporttournament20_pd[91];
	J[28] = -x[156]*2. + -2.;
	J[79] += sporttournament20_pd[90];
	J[28] += x[79]*2.;
	J[58] += sporttournament20_pd[89];
	J[28] += x[58]*2.;
	J[170] += sporttournament20_pd[88];
	J[27] = x[170]*2. + -2.;
	J[97] += sporttournament20_pd[87];
	J[27] += x[97]*2.;
	J[43] -= sporttournament20_pd[86];
	J[27] -= x[43]*2.;
	J[28] += sporttournament20_pd[85];
	J[27] += x[28]*2.;
	J[166] += sporttournament20_pd[84];
	J[26] = x[166]*2. + -4.;
	J[153] += sporttournament20_pd[83];
	J[26] += x[153]*2.;
	J[55] += sporttournament20_pd[82];
	J[26] += x[55]*2.;
	J[74] += sporttournament20_pd[81];
	J[25] = x[74]*2. + -2.;
	J[72] -= sporttournament20_pd[80];
	J[25] -= x[72]*2.;
	J[54] += sporttournament20_pd[79];
	J[25] += x[54]*2.;
	J[166] -= sporttournament20_pd[78];
	J[24] = -x[166]*2. + -2.;
	J[150] += sporttournament20_pd[77];
	J[24] += x[150]*2.;
	J[145] += sporttournament20_pd[76];
	J[24] += x[145]*2.;
	J[40] += sporttournament20_pd[75];
	J[24] += x[40]*2.;
	J[165] += sporttournament20_pd[74];
	J[23] = x[165]*2. + -2.;
	J[112] += sporttournament20_pd[73];
	J[23] += x[112]*2.;
	J[23] += sporttournament20_pd[72];
	J[22] = x[23]*2. + -4.;
	J[138] += sporttournament20_pd[71];
	J[21] = x[138]*2. + 2.;
	J[135] -= sporttournament20_pd[70];
	J[21] -= x[135]*2.;
	J[109] -= sporttournament20_pd[69];
	J[21] -= x[109]*2.;
	J[23] -= sporttournament20_pd[68];
	J[21] -= x[23]*2.;
	J[179] -= sporttournament20_pd[67];
	J[20] = -x[179]*2. + -2.;
	J[88] += sporttournament20_pd[66];
	J[20] += x[88]*2.;
	J[22] += sporttournament20_pd[65];
	J[20] += x[22]*2.;
	J[110] -= sporttournament20_pd[64];
	J[19] = -x[110]*2. + -2.;
	J[48] += sporttournament20_pd[63];
	J[19] += x[48]*2.;
	J[22] += sporttournament20_pd[62];
	J[19] += x[22]*2.;
	J[149] -= sporttournament20_pd[61];
	J[18] = -x[149]*2. + -2.;
	J[66] += sporttournament20_pd[60];
	J[18] += x[66]*2.;
	J[20] += sporttournament20_pd[59];
	J[18] += x[20]*2.;
	J[19] += sporttournament20_pd[58];
	J[18] += x[19]*2.;
	J[61] += sporttournament20_pd[57];
	J[17] = x[61]*2. + -2.;
	J[60] += sporttournament20_pd[56];
	J[16] = x[60]*2. + -2.;
	J[17] += sporttournament20_pd[55];
	J[16] += x[17]*2.;
	J[168] += sporttournament20_pd[54];
	J[15] = x[168]*2. + -2.;
	J[61] += sporttournament20_pd[53];
	J[15] += x[61]*2.;
	J[44] += sporttournament20_pd[52];
	J[15] += x[44]*2.;
	J[16] -= sporttournament20_pd[51];
	J[15] -= x[16]*2.;
	J[174] -= sporttournament20_pd[50];
	J[14] = -x[174]*2. + -2.;
	J[145] += sporttournament20_pd[49];
	J[14] += x[145]*2.;
	J[37] += sporttournament20_pd[48];
	J[14] += x[37]*2.;
	J[25] += sporttournament20_pd[47];
	J[14] += x[25]*2.;
	J[134] += sporttournament20_pd[46];
	J[13] = x[134]*2. + -4.;
	J[112] += sporttournament20_pd[45];
	J[13] += x[112]*2.;
	J[88] += sporttournament20_pd[44];
	J[13] += x[88]*2.;
	J[143] += sporttournament20_pd[43];
	J[12] = x[143]*2. + -2.;
	J[135] += sporttournament20_pd[42];
	J[12] += x[135]*2.;
	J[33] -= sporttournament20_pd[41];
	J[12] -= x[33]*2.;
	J[13] += sporttournament20_pd[40];
	J[12] += x[13]*2.;
	J[164] += sporttournament20_pd[39];
	J[11] = x[164]*2. + -4.;
	J[132] += sporttournament20_pd[38];
	J[11] += x[132]*2.;
	J[48] += sporttournament20_pd[37];
	J[11] += x[48]*2.;
	J[31] += sporttournament20_pd[36];
	J[11] += x[31]*2.;
	J[156] += sporttournament20_pd[35];
	J[10] = x[156]*2. + -2.;
	J[46] += sporttournament20_pd[34];
	J[10] += x[46]*2.;
	J[132] -= sporttournament20_pd[33];
	J[9] = -x[132]*2. + -2.;
	J[67] += sporttournament20_pd[32];
	J[9] += x[67]*2.;
	J[64] += sporttournament20_pd[31];
	J[9] += x[64]*2.;
	J[48] += sporttournament20_pd[30];
	J[9] += x[48]*2.;
	J[162] += sporttournament20_pd[29];
	J[8] = x[162]*2. + -2.;
	J[71] += sporttournament20_pd[28];
	J[8] += x[71]*2.;
	J[38] -= sporttournament20_pd[27];
	J[8] -= x[38]*2.;
	J[26] += sporttournament20_pd[26];
	J[8] += x[26]*2.;
	J[161] += sporttournament20_pd[25];
	J[7] = x[161]*2. + -2.;
	J[145] -= sporttournament20_pd[24];
	J[7] -= x[145]*2.;
	J[140] += sporttournament20_pd[23];
	J[7] += x[140]*2.;
	J[102] += sporttournament20_pd[22];
	J[6] = x[102]*2. + -2.;
	J[16] += sporttournament20_pd[21];
	J[6] += x[16]*2.;
	J[160] -= sporttournament20_pd[20];
	J[5] = -x[160]*2. + -2.;
	J[71] += sporttournament20_pd[19];
	J[5] += x[71]*2.;
	J[51] += sporttournament20_pd[18];
	J[5] += x[51]*2.;
	J[150] -= sporttournament20_pd[17];
	J[4] = -x[150]*2. + -2.;
	J[135] += sporttournament20_pd[16];
	J[4] += x[135]*2.;
	J[5] += sporttournament20_pd[15];
	J[4] += x[5]*2.;
	J[157] -= sporttournament20_pd[14];
	J[3] = -x[157]*2. + -2.;
	J[139] += sporttournament20_pd[13];
	J[3] += x[139]*2.;
	J[106] += sporttournament20_pd[12];
	J[3] += x[106]*2.;
	J[85] += sporttournament20_pd[11];
	J[3] += x[85]*2.;
	J[139] += sporttournament20_pd[10];
	J[2] = x[139]*2. + -2.;
	J[105] -= sporttournament20_pd[9];
	J[2] -= x[105]*2.;
	J[83] += sporttournament20_pd[8];
	J[2] += x[83]*2.;
	J[149] += sporttournament20_pd[7];
	J[1] = x[149]*2. + -2.;
	J[143] -= sporttournament20_pd[6];
	J[1] -= x[143]*2.;
	J[32] += sporttournament20_pd[5];
	J[1] += x[32]*2.;
	J[2] += sporttournament20_pd[4];
	J[1] += x[2]*2.;
	J[34] -= sporttournament20_pd[3];
	J[0] = -x[34]*2. + -2.;
	J[22] += sporttournament20_pd[2];
	J[0] += x[22]*2.;
	J[7] += sporttournament20_pd[1];
	J[0] += x[7]*2.;
	J[4] += sporttournament20_pd[0];
	J[0] += x[4]*2.;
	J[190] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
