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
 fint ex1264a_auxcom_[1] = { 4 /* nlc */ };
 fint ex1264a_funcom_[175] = {
	24 /* nvar */,
	1 /* nobj */,
	35 /* ncon */,
	144 /* nzc */,
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
	31,
	36,
	41,
	46,
	51,
	56,
	61,
	66,
	71,
	76,
	81,
	89,
	98,
	107,
	115,
	122,
	130,
	138,
	145,

	/* rownos */
	1,
	5,
	9,
	13,
	17,
	1,
	6,
	10,
	14,
	18,
	1,
	7,
	11,
	15,
	19,
	1,
	8,
	12,
	16,
	20,
	2,
	5,
	9,
	13,
	17,
	2,
	6,
	10,
	14,
	18,
	2,
	7,
	11,
	15,
	19,
	2,
	8,
	12,
	16,
	20,
	3,
	5,
	9,
	13,
	17,
	3,
	6,
	10,
	14,
	18,
	3,
	7,
	11,
	15,
	19,
	3,
	8,
	12,
	16,
	20,
	4,
	5,
	9,
	13,
	17,
	4,
	6,
	10,
	14,
	18,
	4,
	7,
	11,
	15,
	19,
	4,
	8,
	12,
	16,
	20,
	1,
	2,
	3,
	4,
	21,
	25,
	29,
	33,
	1,
	2,
	3,
	4,
	22,
	26,
	29,
	33,
	34,
	1,
	2,
	3,
	4,
	23,
	27,
	29,
	34,
	35,
	1,
	2,
	3,
	4,
	24,
	28,
	29,
	35,
	5,
	9,
	13,
	17,
	21,
	25,
	30,
	6,
	10,
	14,
	18,
	22,
	26,
	30,
	31,
	7,
	11,
	15,
	19,
	23,
	27,
	31,
	32,
	8,
	12,
	16,
	20,
	24,
	28,
	32 };

 real ex1264a_boundc_[1+48+70] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		15.,
		0.,
		12.,
		0.,
		9.,
		0.,
		6.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		9.,
		1.7e308,
		7.,
		1.7e308,
		12.,
		1.7e308,
		11.,
		1.7e308,
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
		8.,
		1.7e308,
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
		0.};

 real ex1264a_x0comn_[24] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real ex1264a_old_x[24];
static int ex1264a_xkind = -1;

 static int
ex1264a_xcheck(real *x)
{
	real *x1 = ex1264a_old_x, *xe = x + 24;
	errno = 0;
	if (ex1264a_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1264a_xkind = 0;
	return 1;
	}
 real
ex1264a_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ex1264a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[16];
	rv += x[17];
	rv += x[18];
	rv += x[19];
	rv += 0.1*x[20];
	rv += 0.2*x[21];
	rv += 0.3*x[22];
	rv += 0.4*x[23];
	;}

	if (wantfg & 2) {
	g[16] = 1.;
	g[17] = 1.;
	g[18] = 1.;
	g[19] = 1.;
	g[20] = 0.1;
	g[21] = 0.2;
	g[22] = 0.3;
	g[23] = 0.4;
	}

	return rv;
}

 void
ex1264a_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ex1264a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[16] * x[0];
	v[1] = x[17] * x[1];
	v[0] += v[1];
	v[1] = x[18] * x[2];
	v[0] += v[1];
	v[1] = x[19] * x[3];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[16] * x[4];
	v[1] = x[17] * x[5];
	v[0] += v[1];
	v[1] = x[18] * x[6];
	v[0] += v[1];
	v[1] = x[19] * x[7];
	v[0] += v[1];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[16] * x[8];
	v[1] = x[17] * x[9];
	v[0] += v[1];
	v[1] = x[18] * x[10];
	v[0] += v[1];
	v[1] = x[19] * x[11];
	v[0] += v[1];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[16] * x[12];
	v[1] = x[17] * x[13];
	v[0] += v[1];
	v[1] = x[18] * x[14];
	v[0] += v[1];
	v[1] = x[19] * x[15];
	v[0] += v[1];
	c[3] = v[0];

  /***  constraint 5  ***/

	t1 = -330.*x[0];
	t1 += -360.*x[4];
	t1 += -385.*x[8];
	t1 += -415.*x[12];
	t1 += 1700.*x[20];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -330.*x[1];
	t1 += -360.*x[5];
	t1 += -385.*x[9];
	t1 += -415.*x[13];
	t1 += 1700.*x[21];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -330.*x[2];
	t1 += -360.*x[6];
	t1 += -385.*x[10];
	t1 += -415.*x[14];
	t1 += 1700.*x[22];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -330.*x[3];
	t1 += -360.*x[7];
	t1 += -385.*x[11];
	t1 += -415.*x[15];
	t1 += 1700.*x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 330.*x[0];
	t1 += 360.*x[4];
	t1 += 385.*x[8];
	t1 += 415.*x[12];
	t1 += -1900.*x[20];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 330.*x[1];
	t1 += 360.*x[5];
	t1 += 385.*x[9];
	t1 += 415.*x[13];
	t1 += -1900.*x[21];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 330.*x[2];
	t1 += 360.*x[6];
	t1 += 385.*x[10];
	t1 += 415.*x[14];
	t1 += -1900.*x[22];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 330.*x[3];
	t1 += 360.*x[7];
	t1 += 385.*x[11];
	t1 += 415.*x[15];
	t1 += -1900.*x[23];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[0];
	t1 += -x[4];
	t1 += -x[8];
	t1 += -x[12];
	t1 += x[20];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[1];
	t1 += -x[5];
	t1 += -x[9];
	t1 += -x[13];
	t1 += x[21];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[2];
	t1 += -x[6];
	t1 += -x[10];
	t1 += -x[14];
	t1 += x[22];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[3];
	t1 += -x[7];
	t1 += -x[11];
	t1 += -x[15];
	t1 += x[23];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[0];
	t1 += x[4];
	t1 += x[8];
	t1 += x[12];
	t1 += -5.*x[20];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[1];
	t1 += x[5];
	t1 += x[9];
	t1 += x[13];
	t1 += -5.*x[21];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[2];
	t1 += x[6];
	t1 += x[10];
	t1 += x[14];
	t1 += -5.*x[22];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[3];
	t1 += x[7];
	t1 += x[11];
	t1 += x[15];
	t1 += -5.*x[23];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[16];
	t1 += x[20];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[17];
	t1 += x[21];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[18];
	t1 += x[22];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[19];
	t1 += x[23];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[16];
	t1 += -15.*x[20];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[17];
	t1 += -12.*x[21];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[18];
	t1 += -9.*x[22];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[19];
	t1 += -6.*x[23];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[20];
	t1 += x[21];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[21];
	t1 += x[22];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[22];
	t1 += x[23];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[16];
	t1 += x[17];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[17];
	t1 += x[18];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[18];
	t1 += x[19];
	c[34] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[15] = x[19];
	J[106] = x[3];
	J[10] = x[18];
	J[97] = x[2];
	J[5] = x[17];
	J[88] = x[1];
	J[0] = x[16];
	J[80] = x[0];

   /*** derivatives for constraint 2 ***/

	J[35] = x[19];
	J[107] = x[7];
	J[30] = x[18];
	J[98] = x[6];
	J[25] = x[17];
	J[89] = x[5];
	J[20] = x[16];
	J[81] = x[4];

   /*** derivatives for constraint 3 ***/

	J[55] = x[19];
	J[108] = x[11];
	J[50] = x[18];
	J[99] = x[10];
	J[45] = x[17];
	J[90] = x[9];
	J[40] = x[16];
	J[82] = x[8];

   /*** derivatives for constraint 4 ***/

	J[75] = x[19];
	J[109] = x[15];
	J[70] = x[18];
	J[100] = x[14];
	J[65] = x[17];
	J[91] = x[13];
	J[60] = x[16];
	J[83] = x[12];

   /*** derivatives for constraint 5 ***/

	J[1] = -330.;
	J[21] = -360.;
	J[41] = -385.;
	J[61] = -415.;
	J[114] = 1700.;

   /*** derivatives for constraint 6 ***/

	J[6] = -330.;
	J[26] = -360.;
	J[46] = -385.;
	J[66] = -415.;
	J[121] = 1700.;

   /*** derivatives for constraint 7 ***/

	J[11] = -330.;
	J[31] = -360.;
	J[51] = -385.;
	J[71] = -415.;
	J[129] = 1700.;

   /*** derivatives for constraint 8 ***/

	J[16] = -330.;
	J[36] = -360.;
	J[56] = -385.;
	J[76] = -415.;
	J[137] = 1700.;

   /*** derivatives for constraint 9 ***/

	J[2] = 330.;
	J[22] = 360.;
	J[42] = 385.;
	J[62] = 415.;
	J[115] = -1900.;

   /*** derivatives for constraint 10 ***/

	J[7] = 330.;
	J[27] = 360.;
	J[47] = 385.;
	J[67] = 415.;
	J[122] = -1900.;

   /*** derivatives for constraint 11 ***/

	J[12] = 330.;
	J[32] = 360.;
	J[52] = 385.;
	J[72] = 415.;
	J[130] = -1900.;

   /*** derivatives for constraint 12 ***/

	J[17] = 330.;
	J[37] = 360.;
	J[57] = 385.;
	J[77] = 415.;
	J[138] = -1900.;

   /*** derivatives for constraint 13 ***/

	J[3] = -1.;
	J[23] = -1.;
	J[43] = -1.;
	J[63] = -1.;
	J[116] = 1.;

   /*** derivatives for constraint 14 ***/

	J[8] = -1.;
	J[28] = -1.;
	J[48] = -1.;
	J[68] = -1.;
	J[123] = 1.;

   /*** derivatives for constraint 15 ***/

	J[13] = -1.;
	J[33] = -1.;
	J[53] = -1.;
	J[73] = -1.;
	J[131] = 1.;

   /*** derivatives for constraint 16 ***/

	J[18] = -1.;
	J[38] = -1.;
	J[58] = -1.;
	J[78] = -1.;
	J[139] = 1.;

   /*** derivatives for constraint 17 ***/

	J[4] = 1.;
	J[24] = 1.;
	J[44] = 1.;
	J[64] = 1.;
	J[117] = -5.;

   /*** derivatives for constraint 18 ***/

	J[9] = 1.;
	J[29] = 1.;
	J[49] = 1.;
	J[69] = 1.;
	J[124] = -5.;

   /*** derivatives for constraint 19 ***/

	J[14] = 1.;
	J[34] = 1.;
	J[54] = 1.;
	J[74] = 1.;
	J[132] = -5.;

   /*** derivatives for constraint 20 ***/

	J[19] = 1.;
	J[39] = 1.;
	J[59] = 1.;
	J[79] = 1.;
	J[140] = -5.;

   /*** derivatives for constraint 21 ***/

	J[84] = -1.;
	J[118] = 1.;

   /*** derivatives for constraint 22 ***/

	J[92] = -1.;
	J[125] = 1.;

   /*** derivatives for constraint 23 ***/

	J[101] = -1.;
	J[133] = 1.;

   /*** derivatives for constraint 24 ***/

	J[110] = -1.;
	J[141] = 1.;

   /*** derivatives for constraint 25 ***/

	J[85] = 1.;
	J[119] = -15.;

   /*** derivatives for constraint 26 ***/

	J[93] = 1.;
	J[126] = -12.;

   /*** derivatives for constraint 27 ***/

	J[102] = 1.;
	J[134] = -9.;

   /*** derivatives for constraint 28 ***/

	J[111] = 1.;
	J[142] = -6.;

   /*** derivatives for constraint 29 ***/

	J[86] = 1.;
	J[94] = 1.;
	J[103] = 1.;
	J[112] = 1.;

   /*** derivatives for constraint 30 ***/

	J[120] = -1.;
	J[127] = 1.;

   /*** derivatives for constraint 31 ***/

	J[128] = -1.;
	J[135] = 1.;

   /*** derivatives for constraint 32 ***/

	J[136] = -1.;
	J[143] = 1.;

   /*** derivatives for constraint 33 ***/

	J[87] = -1.;
	J[95] = 1.;

   /*** derivatives for constraint 34 ***/

	J[96] = -1.;
	J[104] = 1.;

   /*** derivatives for constraint 35 ***/

	J[105] = -1.;
	J[113] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
