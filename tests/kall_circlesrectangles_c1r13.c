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
 fint kall_circlesrectangles_c1r13_auxcom_[1] = { 23 /* nlc */ };
 fint kall_circlesrectangles_c1r13_funcom_[209] = {
	49 /* nvar */,
	1 /* nobj */,
	52 /* ncon */,
	153 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
	11,
	13,
	15,
	17,
	19,
	26,
	33,
	39,
	45,
	49,
	53,
	57,
	61,
	67,
	73,
	75,
	80,
	85,
	87,
	89,
	91,
	93,
	95,
	97,
	99,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	116,
	119,
	123,
	127,
	131,
	135,
	139,
	143,
	147,
	151,
	152,
	153,
	154,

	/* rownos */
	1,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
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
	5,
	6,
	8,
	10,
	12,
	14,
	48,
	5,
	7,
	9,
	11,
	13,
	15,
	47,
	16,
	18,
	20,
	22,
	47,
	49,
	17,
	19,
	21,
	23,
	48,
	50,
	2,
	3,
	35,
	43,
	2,
	3,
	36,
	44,
	2,
	4,
	37,
	45,
	2,
	4,
	38,
	46,
	1,
	25,
	27,
	29,
	31,
	33,
	1,
	26,
	28,
	30,
	32,
	34,
	1,
	24,
	6,
	8,
	10,
	12,
	14,
	7,
	9,
	11,
	13,
	15,
	6,
	16,
	7,
	17,
	8,
	18,
	9,
	19,
	10,
	20,
	11,
	21,
	12,
	22,
	13,
	23,
	14,
	49,
	15,
	50,
	39,
	43,
	40,
	44,
	41,
	45,
	42,
	46,
	14,
	25,
	51,
	15,
	26,
	52,
	6,
	27,
	35,
	41,
	7,
	28,
	36,
	42,
	8,
	29,
	35,
	37,
	9,
	30,
	36,
	38,
	10,
	31,
	37,
	39,
	11,
	32,
	38,
	40,
	12,
	33,
	39,
	41,
	13,
	34,
	40,
	42,
	41,
	42,
	24 };

 real kall_circlesrectangles_c1r13_boundc_[1+98+104] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		3.90512483795333,
		0.,
		3.90512483795333,
		0.,
		3.90512483795333,
		0.,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.5,
		1.5,
		-1.,
		1.,
		-1.5,
		1.5,
		0.,
		3.,
		0.,
		2.5,
		0.25,
		7.5,
		0.,
		3.,
		0.,
		2.5,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-3.90512483795333,
		3.90512483795333,
		-1.,
		1.,
		-1.5,
		1.5,
		-1.,
		1.,
		-1.5,
		1.5,
		0.5,
		2.5,
		0.5,
		2.,
		0.,
		3.,
		0.,
		2.5,
		0.,
		3.,
		0.,
		2.5,
		0.,
		3.,
		0.,
		2.5,
		0.,
		3.,
		0.,
		2.5,
		0.,
		3.,
		0.,
		2.5,
		0.,
		7.5,
		0.,
		0.,
		0.,
		0.,
		2.25,
		2.25,
		1.,
		1.,
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
		-2.28539816339745,
		-2.28539816339745,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		1.5,
		-1.7e308,
		1.25};

 real kall_circlesrectangles_c1r13_x0comn_[49] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.25,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.5,
		0.5,
		0.,
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

static real kall_circlesrectangles_c1r13_old_x[49];
static int kall_circlesrectangles_c1r13_xkind = -1;

 static int
kall_circlesrectangles_c1r13_xcheck(real *x)
{
	real *x1 = kall_circlesrectangles_c1r13_old_x, *xe = x + 49;
	errno = 0;
	if (kall_circlesrectangles_c1r13_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_circlesrectangles_c1r13_xkind = 0;
	return 1;
	}
 real
kall_circlesrectangles_c1r13_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_circlesrectangles_c1r13_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[48];
	;}

	if (wantfg & 2) {
	g[48] = 1.;
	}

	return rv;
}

 void
kall_circlesrectangles_c1r13_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (kall_circlesrectangles_c1r13_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[17] * x[18];
	v[1] = -v[0];
	t1 = v[1] + x[19];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[13] * x[15];
	v[1] = x[14] * x[16];
	v[2] = v[0] + v[1];
	c[1] = v[2];

  /***  constraint 3  ***/

	v[0] = x[13] * x[13];
	v[1] = x[14] * x[14];
	v[2] = v[0] + v[1];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = x[15] * x[15];
	v[1] = x[16] * x[16];
	v[2] = v[0] + v[1];
	c[3] = v[2];

  /***  constraint 5  ***/

	v[0] = x[9] * x[9];
	v[1] = x[10] * x[10];
	v[2] = v[0] + v[1];
	c[4] = v[2];

  /***  constraint 6  ***/

	v[0] = x[9] * x[4];
	t1 = v[0] + x[20];
	t1 += x[22];
	t1 += -x[38];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[10] * x[4];
	t1 = v[0] + x[21];
	t1 += x[23];
	t1 += -x[39];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[9] * x[5];
	t1 = v[0] + x[20];
	t1 += x[24];
	t1 += -x[40];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[10] * x[5];
	t1 = v[0] + x[21];
	t1 += x[25];
	t1 += -x[41];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[9] * x[6];
	t1 = v[0] + x[20];
	t1 += x[26];
	t1 += -x[42];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[10] * x[6];
	t1 = v[0] + x[21];
	t1 += x[27];
	t1 += -x[43];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[9] * x[7];
	t1 = v[0] + x[20];
	t1 += x[28];
	t1 += -x[44];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[10] * x[7];
	t1 = v[0] + x[21];
	t1 += x[29];
	t1 += -x[45];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[9] * x[8];
	t1 = v[0] + x[20];
	t1 += x[30];
	t1 += -x[36];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[10] * x[8];
	t1 = v[0] + x[21];
	t1 += x[31];
	t1 += -x[37];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[0] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[22];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[0] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[23];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[1] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[24];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[1] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[25];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[2] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[26];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[2] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[27];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[3] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[28];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[3] * x[12];
	v[1] = -v[0];
	t1 = v[1] + x[29];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[19];
	t1 += x[48];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[17];
	t1 += x[36];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[18];
	t1 += x[37];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[17];
	t1 += x[38];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[18];
	t1 += x[39];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[17];
	t1 += x[40];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[18];
	t1 += x[41];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[17];
	t1 += x[42];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[18];
	t1 += x[43];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[17];
	t1 += x[44];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[18];
	t1 += x[45];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[13];
	t1 += x[38];
	t1 += -x[40];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[14];
	t1 += x[39];
	t1 += -x[41];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[15];
	t1 += x[40];
	t1 += -x[42];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[16];
	t1 += x[41];
	t1 += -x[43];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[32];
	t1 += x[42];
	t1 += -x[44];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[33];
	t1 += x[43];
	t1 += -x[45];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[34];
	t1 += -x[38];
	t1 += 2.*x[44];
	t1 += -x[46];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[35];
	t1 += -x[39];
	t1 += 2.*x[45];
	t1 += -x[47];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[13];
	t1 += x[32];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[14];
	t1 += x[33];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[15];
	t1 += x[34];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[16];
	t1 += x[35];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[10];
	t1 += x[11];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[9];
	t1 += x[12];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = 0.5*x[11];
	t1 += x[30];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = 0.5*x[12];
	t1 += x[31];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[36];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[37];
	c[51] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[66] = -x[17];
	J[60] = -x[18];
	J[72] = 1.;

   /*** derivatives for constraint 2 ***/

	J[56] = x[14];
	J[48] = x[16];
	J[52] = x[13];
	J[44] = x[15];

   /*** derivatives for constraint 3 ***/

	J[49] = x[14];
	J[49] += x[14];
	J[45] = x[13];
	J[45] += x[13];

   /*** derivatives for constraint 4 ***/

	J[57] = x[16];
	J[57] += x[16];
	J[53] = x[15];
	J[53] += x[15];

   /*** derivatives for constraint 5 ***/

	J[25] = x[10];
	J[25] += x[10];
	J[18] = x[9];
	J[18] += x[9];

   /*** derivatives for constraint 6 ***/

	J[8] = x[9];
	J[19] = x[4];
	J[74] = 1.;
	J[84] = 1.;
	J[118] = -1.;

   /*** derivatives for constraint 7 ***/

	J[9] = x[10];
	J[26] = x[4];
	J[79] = 1.;
	J[86] = 1.;
	J[122] = -1.;

   /*** derivatives for constraint 8 ***/

	J[10] = x[9];
	J[20] = x[5];
	J[75] = 1.;
	J[88] = 1.;
	J[126] = -1.;

   /*** derivatives for constraint 9 ***/

	J[11] = x[10];
	J[27] = x[5];
	J[80] = 1.;
	J[90] = 1.;
	J[130] = -1.;

   /*** derivatives for constraint 10 ***/

	J[12] = x[9];
	J[21] = x[6];
	J[76] = 1.;
	J[92] = 1.;
	J[134] = -1.;

   /*** derivatives for constraint 11 ***/

	J[13] = x[10];
	J[28] = x[6];
	J[81] = 1.;
	J[94] = 1.;
	J[138] = -1.;

   /*** derivatives for constraint 12 ***/

	J[14] = x[9];
	J[22] = x[7];
	J[77] = 1.;
	J[96] = 1.;
	J[142] = -1.;

   /*** derivatives for constraint 13 ***/

	J[15] = x[10];
	J[29] = x[7];
	J[82] = 1.;
	J[98] = 1.;
	J[146] = -1.;

   /*** derivatives for constraint 14 ***/

	J[16] = x[9];
	J[23] = x[8];
	J[78] = 1.;
	J[100] = 1.;
	J[112] = -1.;

   /*** derivatives for constraint 15 ***/

	J[17] = x[10];
	J[30] = x[8];
	J[83] = 1.;
	J[102] = 1.;
	J[115] = -1.;

   /*** derivatives for constraint 16 ***/

	J[32] = -x[0];
	J[0] = -x[11];
	J[85] = 1.;

   /*** derivatives for constraint 17 ***/

	J[38] = -x[0];
	J[1] = -x[12];
	J[87] = 1.;

   /*** derivatives for constraint 18 ***/

	J[33] = -x[1];
	J[2] = -x[11];
	J[89] = 1.;

   /*** derivatives for constraint 19 ***/

	J[39] = -x[1];
	J[3] = -x[12];
	J[91] = 1.;

   /*** derivatives for constraint 20 ***/

	J[34] = -x[2];
	J[4] = -x[11];
	J[93] = 1.;

   /*** derivatives for constraint 21 ***/

	J[40] = -x[2];
	J[5] = -x[12];
	J[95] = 1.;

   /*** derivatives for constraint 22 ***/

	J[35] = -x[3];
	J[6] = -x[11];
	J[97] = 1.;

   /*** derivatives for constraint 23 ***/

	J[41] = -x[3];
	J[7] = -x[12];
	J[99] = 1.;

   /*** derivatives for constraint 24 ***/

	J[73] = -1.;
	J[152] = 1.;

   /*** derivatives for constraint 25 ***/

	J[61] = -1.;
	J[113] = 1.;

   /*** derivatives for constraint 26 ***/

	J[67] = -1.;
	J[116] = 1.;

   /*** derivatives for constraint 27 ***/

	J[62] = -1.;
	J[119] = 1.;

   /*** derivatives for constraint 28 ***/

	J[68] = -1.;
	J[123] = 1.;

   /*** derivatives for constraint 29 ***/

	J[63] = -1.;
	J[127] = 1.;

   /*** derivatives for constraint 30 ***/

	J[69] = -1.;
	J[131] = 1.;

   /*** derivatives for constraint 31 ***/

	J[64] = -1.;
	J[135] = 1.;

   /*** derivatives for constraint 32 ***/

	J[70] = -1.;
	J[139] = 1.;

   /*** derivatives for constraint 33 ***/

	J[65] = -1.;
	J[143] = 1.;

   /*** derivatives for constraint 34 ***/

	J[71] = -1.;
	J[147] = 1.;

   /*** derivatives for constraint 35 ***/

	J[46] = 1.;
	J[120] = 1.;
	J[128] = -1.;

   /*** derivatives for constraint 36 ***/

	J[50] = 1.;
	J[124] = 1.;
	J[132] = -1.;

   /*** derivatives for constraint 37 ***/

	J[54] = 1.;
	J[129] = 1.;
	J[136] = -1.;

   /*** derivatives for constraint 38 ***/

	J[58] = 1.;
	J[133] = 1.;
	J[140] = -1.;

   /*** derivatives for constraint 39 ***/

	J[104] = 1.;
	J[137] = 1.;
	J[144] = -1.;

   /*** derivatives for constraint 40 ***/

	J[106] = 1.;
	J[141] = 1.;
	J[148] = -1.;

   /*** derivatives for constraint 41 ***/

	J[108] = 1.;
	J[121] = -1.;
	J[145] = 2.;
	J[150] = -1.;

   /*** derivatives for constraint 42 ***/

	J[110] = 1.;
	J[125] = -1.;
	J[149] = 2.;
	J[151] = -1.;

   /*** derivatives for constraint 43 ***/

	J[47] = 1.;
	J[105] = 1.;

   /*** derivatives for constraint 44 ***/

	J[51] = 1.;
	J[107] = 1.;

   /*** derivatives for constraint 45 ***/

	J[55] = 1.;
	J[109] = 1.;

   /*** derivatives for constraint 46 ***/

	J[59] = 1.;
	J[111] = 1.;

   /*** derivatives for constraint 47 ***/

	J[31] = -1.;
	J[36] = 1.;

   /*** derivatives for constraint 48 ***/

	J[24] = 1.;
	J[42] = 1.;

   /*** derivatives for constraint 49 ***/

	J[37] = 0.5;
	J[101] = 1.;

   /*** derivatives for constraint 50 ***/

	J[43] = 0.5;
	J[103] = 1.;

   /*** derivatives for constraint 51 ***/

	J[114] = 1.;

   /*** derivatives for constraint 52 ***/

	J[117] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
