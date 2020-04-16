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
 fint waterund01_auxcom_[1] = { 14 /* nlc */ };
 fint waterund01_funcom_[195] = {
	40 /* nvar */,
	1 /* nobj */,
	38 /* ncon */,
	148 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	22,
	26,
	30,
	34,
	38,
	42,
	46,
	50,
	54,
	58,
	62,
	66,
	70,
	73,
	76,
	79,
	82,
	85,
	88,
	94,
	100,
	106,
	112,
	118,
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
	137,
	141,
	145,
	149,

	/* rownos */
	1,
	2,
	7,
	8,
	15,
	19,
	35,
	3,
	4,
	9,
	10,
	16,
	20,
	36,
	5,
	6,
	11,
	12,
	17,
	21,
	37,
	1,
	2,
	15,
	19,
	3,
	4,
	16,
	19,
	5,
	6,
	17,
	19,
	13,
	14,
	18,
	19,
	1,
	2,
	15,
	20,
	3,
	4,
	16,
	20,
	5,
	6,
	17,
	20,
	13,
	14,
	18,
	20,
	1,
	2,
	15,
	21,
	3,
	4,
	16,
	21,
	5,
	6,
	17,
	21,
	13,
	14,
	18,
	21,
	1,
	7,
	23,
	2,
	8,
	24,
	3,
	9,
	25,
	4,
	10,
	26,
	5,
	11,
	27,
	6,
	12,
	28,
	1,
	3,
	5,
	7,
	13,
	29,
	2,
	4,
	6,
	8,
	14,
	30,
	1,
	3,
	5,
	9,
	13,
	31,
	2,
	4,
	6,
	10,
	14,
	32,
	1,
	3,
	5,
	11,
	13,
	33,
	2,
	4,
	6,
	12,
	14,
	34,
	15,
	16,
	17,
	18,
	38,
	19,
	20,
	21,
	22,
	1,
	2,
	15,
	22,
	3,
	4,
	16,
	22,
	5,
	6,
	17,
	22,
	13,
	14,
	18,
	22 };

 real waterund01_boundc_[1+80+76] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		100000.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-690.,
		-690.,
		-1380.,
		-1380.,
		-2350.,
		-2350.,
		-2820.,
		-2820.,
		-6150.,
		-6150.,
		-18450.,
		-18450.,
		-14000.,
		1.7e308,
		-5600.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-70.,
		-70.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-60.,
		-60.,
		-1.7e308,
		20.,
		-1.7e308,
		60.,
		-1.7e308,
		50.,
		-1.7e308,
		20.,
		-1.7e308,
		100.,
		-1.7e308,
		150.,
		-1.7e308,
		50.,
		-1.7e308,
		120.,
		-1.7e308,
		100.,
		-1.7e308,
		80.,
		-1.7e308,
		150.,
		-1.7e308,
		300.,
		-1.7e308,
		23.,
		-1.7e308,
		47.,
		-1.7e308,
		123.,
		-1.7e308,
		0.};

 real waterund01_x0comn_[40] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real waterund01_pd[6];
static real waterund01_old_x[40];
static int waterund01_xkind = -1;

 static int
waterund01_xcheck(real *x)
{
	real *x1 = waterund01_old_x, *xe = x + 40;
	errno = 0;
	if (waterund01_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	waterund01_xkind = 0;
	return 1;
	}
 real
waterund01_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (waterund01_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[27];
	rv += x[28];
	rv += x[29];
	rv += x[30];
	;}

	if (wantfg & 2) {
	g[27] = 1.;
	g[28] = 1.;
	g[29] = 1.;
	g[30] = 1.;
	}

	return rv;
}

 void
waterund01_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (waterund01_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[15];
	v[1] = -v[0];
	v[0] = x[3] * x[21];
	v[1] += v[0];
	v[0] = x[7] * x[23];
	v[1] += v[0];
	v[0] = x[11] * x[25];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -250.*x[36];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[16];
	v[1] = -v[0];
	v[0] = x[3] * x[22];
	v[1] += v[0];
	v[0] = x[7] * x[24];
	v[1] += v[0];
	v[0] = x[11] * x[26];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -100.*x[36];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[1] * x[17];
	v[1] = -v[0];
	v[0] = x[4] * x[21];
	v[1] += v[0];
	v[0] = x[8] * x[23];
	v[1] += v[0];
	v[0] = x[12] * x[25];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -250.*x[37];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] * x[18];
	v[1] = -v[0];
	v[0] = x[4] * x[22];
	v[1] += v[0];
	v[0] = x[8] * x[24];
	v[1] += v[0];
	v[0] = x[12] * x[26];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -100.*x[37];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[2] * x[19];
	v[1] = -v[0];
	v[0] = x[5] * x[21];
	v[1] += v[0];
	v[0] = x[9] * x[23];
	v[1] += v[0];
	v[0] = x[13] * x[25];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -250.*x[38];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[2] * x[20];
	v[1] = -v[0];
	v[0] = x[5] * x[22];
	v[1] += v[0];
	v[0] = x[9] * x[24];
	v[1] += v[0];
	v[0] = x[13] * x[26];
	v[1] += v[0];
	v[0] = -v[1];
	t1 = v[0] + -100.*x[38];
	c[5] = t1;

  /***  constraint 7  ***/

	waterund01_pd[0] = x[21] - x[15];
	v[1] = x[0] * waterund01_pd[0];
	v[2] = -v[1];
	c[6] = v[2];

  /***  constraint 8  ***/

	waterund01_pd[1] = x[22] - x[16];
	v[1] = x[0] * waterund01_pd[1];
	v[2] = -v[1];
	c[7] = v[2];

  /***  constraint 9  ***/

	waterund01_pd[2] = x[23] - x[17];
	v[1] = x[1] * waterund01_pd[2];
	v[2] = -v[1];
	c[8] = v[2];

  /***  constraint 10  ***/

	waterund01_pd[3] = x[24] - x[18];
	v[1] = x[1] * waterund01_pd[3];
	v[2] = -v[1];
	c[9] = v[2];

  /***  constraint 11  ***/

	waterund01_pd[4] = x[25] - x[19];
	v[1] = x[2] * waterund01_pd[4];
	v[2] = -v[1];
	c[10] = v[2];

  /***  constraint 12  ***/

	waterund01_pd[5] = x[26] - x[20];
	v[1] = x[2] * waterund01_pd[5];
	v[2] = -v[1];
	c[11] = v[2];

  /***  constraint 13  ***/

	v[0] = x[6] * x[21];
	v[1] = x[10] * x[23];
	v[0] += v[1];
	v[1] = x[14] * x[25];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + -250.*x[39];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[6] * x[22];
	v[1] = x[10] * x[24];
	v[0] += v[1];
	v[1] = x[14] * x[26];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + -100.*x[39];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += -x[7];
	t1 += -x[11];
	t1 += -x[27];
	t1 += -x[36];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += -x[8];
	t1 += -x[12];
	t1 += -x[28];
	t1 += -x[37];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[2];
	t1 += -x[5];
	t1 += -x[9];
	t1 += -x[13];
	t1 += -x[29];
	t1 += -x[38];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[6];
	t1 += -x[10];
	t1 += -x[14];
	t1 += -x[30];
	t1 += -x[39];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -x[32];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[1];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[33];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[2];
	t1 += -x[11];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[14];
	t1 += -x[34];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[35];
	t1 += -x[36];
	t1 += -x[37];
	t1 += -x[38];
	t1 += -x[39];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[15];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[16];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[17];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[18];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[19];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[20];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[21];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[22];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[23];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[24];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[25];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[26];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[0];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[1];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[2];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[31];
	c[37] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[111] = -x[11];
	J[53] = -x[25];
	J[99] = -x[7];
	J[37] = -x[23];
	J[87] = -x[3];
	J[21] = -x[21];
	J[69] = x[0];
	J[0] = x[15];
	J[132] = -250.;

   /*** derivatives for constraint 2 ***/

	J[117] = -x[11];
	J[54] = -x[26];
	J[105] = -x[7];
	J[38] = -x[24];
	J[93] = -x[3];
	J[22] = -x[22];
	J[72] = x[0];
	J[1] = x[16];
	J[133] = -100.;

   /*** derivatives for constraint 3 ***/

	J[112] = -x[12];
	J[57] = -x[25];
	J[100] = -x[8];
	J[41] = -x[23];
	J[88] = -x[4];
	J[25] = -x[21];
	J[75] = x[1];
	J[7] = x[17];
	J[136] = -250.;

   /*** derivatives for constraint 4 ***/

	J[118] = -x[12];
	J[58] = -x[26];
	J[106] = -x[8];
	J[42] = -x[24];
	J[94] = -x[4];
	J[26] = -x[22];
	J[78] = x[1];
	J[8] = x[18];
	J[137] = -100.;

   /*** derivatives for constraint 5 ***/

	J[113] = -x[13];
	J[61] = -x[25];
	J[101] = -x[9];
	J[45] = -x[23];
	J[89] = -x[5];
	J[29] = -x[21];
	J[81] = x[2];
	J[14] = x[19];
	J[140] = -250.;

   /*** derivatives for constraint 6 ***/

	J[119] = -x[13];
	J[62] = -x[26];
	J[107] = -x[9];
	J[46] = -x[24];
	J[95] = -x[5];
	J[30] = -x[22];
	J[84] = x[2];
	J[15] = x[20];
	J[141] = -100.;

   /*** derivatives for constraint 7 ***/

	J[2] = -waterund01_pd[0];
	J[70] = x[0];
	J[90] = -x[0];

   /*** derivatives for constraint 8 ***/

	J[3] = -waterund01_pd[1];
	J[73] = x[0];
	J[96] = -x[0];

   /*** derivatives for constraint 9 ***/

	J[9] = -waterund01_pd[2];
	J[76] = x[1];
	J[102] = -x[1];

   /*** derivatives for constraint 10 ***/

	J[10] = -waterund01_pd[3];
	J[79] = x[1];
	J[108] = -x[1];

   /*** derivatives for constraint 11 ***/

	J[16] = -waterund01_pd[4];
	J[82] = x[2];
	J[114] = -x[2];

   /*** derivatives for constraint 12 ***/

	J[17] = -waterund01_pd[5];
	J[85] = x[2];
	J[120] = -x[2];

   /*** derivatives for constraint 13 ***/

	J[115] = -x[14];
	J[65] = -x[25];
	J[103] = -x[10];
	J[49] = -x[23];
	J[91] = -x[6];
	J[33] = -x[21];
	J[144] = -250.;

   /*** derivatives for constraint 14 ***/

	J[121] = -x[14];
	J[66] = -x[26];
	J[109] = -x[10];
	J[50] = -x[24];
	J[97] = -x[6];
	J[34] = -x[22];
	J[145] = -100.;

   /*** derivatives for constraint 15 ***/

	J[4] = 1.;
	J[23] = -1.;
	J[39] = -1.;
	J[55] = -1.;
	J[123] = -1.;
	J[134] = -1.;

   /*** derivatives for constraint 16 ***/

	J[11] = 1.;
	J[27] = -1.;
	J[43] = -1.;
	J[59] = -1.;
	J[124] = -1.;
	J[138] = -1.;

   /*** derivatives for constraint 17 ***/

	J[18] = 1.;
	J[31] = -1.;
	J[47] = -1.;
	J[63] = -1.;
	J[125] = -1.;
	J[142] = -1.;

   /*** derivatives for constraint 18 ***/

	J[35] = -1.;
	J[51] = -1.;
	J[67] = -1.;
	J[126] = -1.;
	J[146] = -1.;

   /*** derivatives for constraint 19 ***/

	J[5] = 1.;
	J[24] = -1.;
	J[28] = -1.;
	J[32] = -1.;
	J[36] = -1.;
	J[128] = -1.;

   /*** derivatives for constraint 20 ***/

	J[12] = 1.;
	J[40] = -1.;
	J[44] = -1.;
	J[48] = -1.;
	J[52] = -1.;
	J[129] = -1.;

   /*** derivatives for constraint 21 ***/

	J[19] = 1.;
	J[56] = -1.;
	J[60] = -1.;
	J[64] = -1.;
	J[68] = -1.;
	J[130] = -1.;

   /*** derivatives for constraint 22 ***/

	J[131] = -1.;
	J[135] = -1.;
	J[139] = -1.;
	J[143] = -1.;
	J[147] = -1.;

   /*** derivatives for constraint 23 ***/

	J[71] = 1.;

   /*** derivatives for constraint 24 ***/

	J[74] = 1.;

   /*** derivatives for constraint 25 ***/

	J[77] = 1.;

   /*** derivatives for constraint 26 ***/

	J[80] = 1.;

   /*** derivatives for constraint 27 ***/

	J[83] = 1.;

   /*** derivatives for constraint 28 ***/

	J[86] = 1.;

   /*** derivatives for constraint 29 ***/

	J[92] = 1.;

   /*** derivatives for constraint 30 ***/

	J[98] = 1.;

   /*** derivatives for constraint 31 ***/

	J[104] = 1.;

   /*** derivatives for constraint 32 ***/

	J[110] = 1.;

   /*** derivatives for constraint 33 ***/

	J[116] = 1.;

   /*** derivatives for constraint 34 ***/

	J[122] = 1.;

   /*** derivatives for constraint 35 ***/

	J[6] = 1.;

   /*** derivatives for constraint 36 ***/

	J[13] = 1.;

   /*** derivatives for constraint 37 ***/

	J[20] = 1.;

   /*** derivatives for constraint 38 ***/

	J[127] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
