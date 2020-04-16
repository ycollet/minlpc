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
 fint flay02h_auxcom_[1] = { 2 /* nlc */ };
 fint flay02h_funcom_[189] = {
	46 /* nvar */,
	1 /* nobj */,
	51 /* ncon */,
	136 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	9,
	11,
	13,
	15,
	18,
	21,
	23,
	25,
	28,
	31,
	33,
	35,
	38,
	41,
	43,
	45,
	47,
	49,
	52,
	55,
	57,
	59,
	62,
	65,
	68,
	70,
	72,
	74,
	76,
	79,
	81,
	83,
	85,
	87,
	90,
	92,
	94,
	96,
	98,
	101,
	110,
	119,
	128,
	137,

	/* rownos */
	1,
	5,
	13,
	2,
	6,
	14,
	3,
	7,
	4,
	8,
	5,
	9,
	6,
	10,
	1,
	3,
	11,
	2,
	4,
	12,
	3,
	4,
	5,
	6,
	7,
	15,
	47,
	7,
	16,
	48,
	7,
	17,
	7,
	18,
	8,
	19,
	47,
	8,
	20,
	48,
	8,
	21,
	8,
	22,
	9,
	23,
	9,
	24,
	9,
	25,
	49,
	9,
	26,
	50,
	10,
	27,
	10,
	28,
	10,
	29,
	49,
	10,
	30,
	50,
	11,
	31,
	47,
	11,
	32,
	11,
	33,
	11,
	34,
	12,
	35,
	12,
	36,
	48,
	12,
	37,
	12,
	38,
	13,
	39,
	13,
	40,
	13,
	41,
	49,
	13,
	42,
	14,
	43,
	14,
	44,
	14,
	45,
	14,
	46,
	50,
	15,
	19,
	23,
	27,
	31,
	35,
	39,
	43,
	51,
	16,
	20,
	24,
	28,
	32,
	36,
	40,
	44,
	51,
	17,
	21,
	25,
	29,
	33,
	37,
	41,
	45,
	51,
	18,
	22,
	26,
	30,
	34,
	38,
	42,
	46,
	51 };

 real flay02h_boundc_[1+92+102] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		40.,
		1.,
		50.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		1.,
		40.,
		1.,
		50.,
		0.,
		30.,
		0.,
		30.,
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		1.,
		1.};

 real flay02h_x0comn_[46] = {
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real flay02h_pd[2];
static real flay02h_old_x[46];
static int flay02h_xkind = -1;

 static int
flay02h_xcheck(real *x)
{
	real *x1 = flay02h_old_x, *xe = x + 46;
	errno = 0;
	if (flay02h_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	flay02h_xkind = 0;
	return 1;
	}
 real
flay02h_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (flay02h_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[8];
	rv += 2.*x[9];
	;}

	if (wantfg & 2) {
	g[8] = 2.;
	g[9] = 2.;
	}

	return rv;
}

 void
flay02h_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (flay02h_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 40. / x[0];
	flay02h_pd[0] = -v[0] / x[0];
	t1 = v[0] + -x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 50. / x[1];
	flay02h_pd[1] = -v[0] / x[1];
	t1 = v[0] + -x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[2];
	t1 += -x[6];
	t1 += x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[3];
	t1 += -x[7];
	t1 += x[8];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += -x[4];
	t1 += x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[1];
	t1 += -x[5];
	t1 += x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += -x[10];
	t1 += -x[11];
	t1 += -x[12];
	t1 += -x[13];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[3];
	t1 += -x[14];
	t1 += -x[15];
	t1 += -x[16];
	t1 += -x[17];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[4];
	t1 += -x[18];
	t1 += -x[19];
	t1 += -x[20];
	t1 += -x[21];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[5];
	t1 += -x[22];
	t1 += -x[23];
	t1 += -x[24];
	t1 += -x[25];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[6];
	t1 += -x[26];
	t1 += -x[27];
	t1 += -x[28];
	t1 += -x[29];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[7];
	t1 += -x[30];
	t1 += -x[31];
	t1 += -x[32];
	t1 += -x[33];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[0];
	t1 += -x[34];
	t1 += -x[35];
	t1 += -x[36];
	t1 += -x[37];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[1];
	t1 += -x[38];
	t1 += -x[39];
	t1 += -x[40];
	t1 += -x[41];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[10];
	t1 += -29.*x[42];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[11];
	t1 += -29.*x[43];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[12];
	t1 += -29.*x[44];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[13];
	t1 += -29.*x[45];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[14];
	t1 += -29.*x[42];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[15];
	t1 += -29.*x[43];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[16];
	t1 += -29.*x[44];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[17];
	t1 += -29.*x[45];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[18];
	t1 += -29.*x[42];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[19];
	t1 += -29.*x[43];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[20];
	t1 += -29.*x[44];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[21];
	t1 += -29.*x[45];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[22];
	t1 += -29.*x[42];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[23];
	t1 += -29.*x[43];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[24];
	t1 += -29.*x[44];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[25];
	t1 += -29.*x[45];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[26];
	t1 += -40.*x[42];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[27];
	t1 += -40.*x[43];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[28];
	t1 += -40.*x[44];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[29];
	t1 += -40.*x[45];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[30];
	t1 += -40.*x[42];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[31];
	t1 += -40.*x[43];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[32];
	t1 += -40.*x[44];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[33];
	t1 += -40.*x[45];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[34];
	t1 += -40.*x[42];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[35];
	t1 += -40.*x[43];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[36];
	t1 += -40.*x[44];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[37];
	t1 += -40.*x[45];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[38];
	t1 += -40.*x[42];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[39];
	t1 += -40.*x[43];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[40];
	t1 += -40.*x[44];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[41];
	t1 += -40.*x[45];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[10];
	t1 += -x[14];
	t1 += x[26];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[11];
	t1 += x[15];
	t1 += x[31];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[20];
	t1 += -x[24];
	t1 += x[36];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[21];
	t1 += x[25];
	t1 += x[41];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[45];
	c[50] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = flay02h_pd[0];
	J[14] = -1.;

   /*** derivatives for constraint 2 ***/

	J[3] = flay02h_pd[1];
	J[17] = -1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -1.;
	J[15] = -1.;
	J[20] = 1.;

   /*** derivatives for constraint 4 ***/

	J[8] = -1.;
	J[18] = -1.;
	J[21] = 1.;

   /*** derivatives for constraint 5 ***/

	J[1] = -1.;
	J[10] = -1.;
	J[22] = 1.;

   /*** derivatives for constraint 6 ***/

	J[4] = -1.;
	J[12] = -1.;
	J[23] = 1.;

   /*** derivatives for constraint 7 ***/

	J[7] = 1.;
	J[24] = -1.;
	J[27] = -1.;
	J[30] = -1.;
	J[32] = -1.;

   /*** derivatives for constraint 8 ***/

	J[9] = 1.;
	J[34] = -1.;
	J[37] = -1.;
	J[40] = -1.;
	J[42] = -1.;

   /*** derivatives for constraint 9 ***/

	J[11] = 1.;
	J[44] = -1.;
	J[46] = -1.;
	J[48] = -1.;
	J[51] = -1.;

   /*** derivatives for constraint 10 ***/

	J[13] = 1.;
	J[54] = -1.;
	J[56] = -1.;
	J[58] = -1.;
	J[61] = -1.;

   /*** derivatives for constraint 11 ***/

	J[16] = 1.;
	J[64] = -1.;
	J[67] = -1.;
	J[69] = -1.;
	J[71] = -1.;

   /*** derivatives for constraint 12 ***/

	J[19] = 1.;
	J[73] = -1.;
	J[75] = -1.;
	J[78] = -1.;
	J[80] = -1.;

   /*** derivatives for constraint 13 ***/

	J[2] = 1.;
	J[82] = -1.;
	J[84] = -1.;
	J[86] = -1.;
	J[89] = -1.;

   /*** derivatives for constraint 14 ***/

	J[5] = 1.;
	J[91] = -1.;
	J[93] = -1.;
	J[95] = -1.;
	J[97] = -1.;

   /*** derivatives for constraint 15 ***/

	J[25] = 1.;
	J[100] = -29.;

   /*** derivatives for constraint 16 ***/

	J[28] = 1.;
	J[109] = -29.;

   /*** derivatives for constraint 17 ***/

	J[31] = 1.;
	J[118] = -29.;

   /*** derivatives for constraint 18 ***/

	J[33] = 1.;
	J[127] = -29.;

   /*** derivatives for constraint 19 ***/

	J[35] = 1.;
	J[101] = -29.;

   /*** derivatives for constraint 20 ***/

	J[38] = 1.;
	J[110] = -29.;

   /*** derivatives for constraint 21 ***/

	J[41] = 1.;
	J[119] = -29.;

   /*** derivatives for constraint 22 ***/

	J[43] = 1.;
	J[128] = -29.;

   /*** derivatives for constraint 23 ***/

	J[45] = 1.;
	J[102] = -29.;

   /*** derivatives for constraint 24 ***/

	J[47] = 1.;
	J[111] = -29.;

   /*** derivatives for constraint 25 ***/

	J[49] = 1.;
	J[120] = -29.;

   /*** derivatives for constraint 26 ***/

	J[52] = 1.;
	J[129] = -29.;

   /*** derivatives for constraint 27 ***/

	J[55] = 1.;
	J[103] = -29.;

   /*** derivatives for constraint 28 ***/

	J[57] = 1.;
	J[112] = -29.;

   /*** derivatives for constraint 29 ***/

	J[59] = 1.;
	J[121] = -29.;

   /*** derivatives for constraint 30 ***/

	J[62] = 1.;
	J[130] = -29.;

   /*** derivatives for constraint 31 ***/

	J[65] = 1.;
	J[104] = -40.;

   /*** derivatives for constraint 32 ***/

	J[68] = 1.;
	J[113] = -40.;

   /*** derivatives for constraint 33 ***/

	J[70] = 1.;
	J[122] = -40.;

   /*** derivatives for constraint 34 ***/

	J[72] = 1.;
	J[131] = -40.;

   /*** derivatives for constraint 35 ***/

	J[74] = 1.;
	J[105] = -40.;

   /*** derivatives for constraint 36 ***/

	J[76] = 1.;
	J[114] = -40.;

   /*** derivatives for constraint 37 ***/

	J[79] = 1.;
	J[123] = -40.;

   /*** derivatives for constraint 38 ***/

	J[81] = 1.;
	J[132] = -40.;

   /*** derivatives for constraint 39 ***/

	J[83] = 1.;
	J[106] = -40.;

   /*** derivatives for constraint 40 ***/

	J[85] = 1.;
	J[115] = -40.;

   /*** derivatives for constraint 41 ***/

	J[87] = 1.;
	J[124] = -40.;

   /*** derivatives for constraint 42 ***/

	J[90] = 1.;
	J[133] = -40.;

   /*** derivatives for constraint 43 ***/

	J[92] = 1.;
	J[107] = -40.;

   /*** derivatives for constraint 44 ***/

	J[94] = 1.;
	J[116] = -40.;

   /*** derivatives for constraint 45 ***/

	J[96] = 1.;
	J[125] = -40.;

   /*** derivatives for constraint 46 ***/

	J[98] = 1.;
	J[134] = -40.;

   /*** derivatives for constraint 47 ***/

	J[26] = 1.;
	J[36] = -1.;
	J[66] = 1.;

   /*** derivatives for constraint 48 ***/

	J[29] = -1.;
	J[39] = 1.;
	J[77] = 1.;

   /*** derivatives for constraint 49 ***/

	J[50] = 1.;
	J[60] = -1.;
	J[88] = 1.;

   /*** derivatives for constraint 50 ***/

	J[53] = -1.;
	J[63] = 1.;
	J[99] = 1.;

   /*** derivatives for constraint 51 ***/

	J[108] = 1.;
	J[117] = 1.;
	J[126] = 1.;
	J[135] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
