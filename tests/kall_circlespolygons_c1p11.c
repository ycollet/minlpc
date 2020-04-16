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
 fint kall_circlespolygons_c1p11_auxcom_[1] = { 21 /* nlc */ };
 fint kall_circlespolygons_c1p11_funcom_[205] = {
	43 /* nvar */,
	1 /* nobj */,
	48 /* ncon */,
	155 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	10,
	19,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	44,
	51,
	57,
	63,
	69,
	75,
	77,
	82,
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
	110,
	113,
	117,
	121,
	125,
	129,
	133,
	137,
	141,
	145,
	150,
	155,
	156,

	/* rownos */
	1,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	2,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
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
	3,
	4,
	6,
	8,
	10,
	12,
	44,
	3,
	5,
	7,
	9,
	11,
	13,
	43,
	14,
	16,
	18,
	20,
	43,
	45,
	15,
	17,
	19,
	21,
	44,
	46,
	1,
	23,
	27,
	29,
	31,
	33,
	1,
	24,
	28,
	30,
	32,
	34,
	1,
	22,
	4,
	6,
	8,
	10,
	12,
	5,
	7,
	9,
	11,
	13,
	4,
	14,
	5,
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
	45,
	13,
	46,
	12,
	23,
	47,
	13,
	24,
	48,
	4,
	25,
	27,
	35,
	5,
	26,
	28,
	39,
	6,
	25,
	29,
	36,
	7,
	26,
	30,
	40,
	8,
	25,
	31,
	37,
	9,
	26,
	32,
	41,
	10,
	25,
	33,
	38,
	11,
	26,
	34,
	42,
	25,
	35,
	36,
	37,
	38,
	26,
	39,
	40,
	41,
	42,
	22 };

 real kall_circlespolygons_c1p11_boundc_[1+86+96] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.,
		1.,
		-1.,
		1.,
		0.,
		8.94427190999916,
		0.,
		8.94427190999916,
		0.,
		8.94427190999916,
		0.,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		-1.,
		1.,
		0.,
		8.,
		0.,
		4.,
		0.25,
		32.,
		0.,
		8.,
		0.,
		4.,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		-8.94427190999916,
		8.94427190999916,
		0.5,
		7.5,
		0.5,
		3.5,
		0.,
		8.,
		0.,
		4.,
		0.,
		8.,
		0.,
		4.,
		0.,
		8.,
		0.,
		4.,
		0.,
		8.,
		0.,
		4.,
		0.,
		8.,
		0.,
		4.,
		0.,
		32.,
		0.,
		0.,
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
		-0.800398163397448,
		-0.800398163397448,
		-1.7e308,
		-0.5,
		-1.7e308,
		-0.5,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		4.,
		-1.7e308,
		2.};

 real kall_circlespolygons_c1p11_x0comn_[43] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real kall_circlespolygons_c1p11_old_x[43];
static int kall_circlespolygons_c1p11_xkind = -1;

 static int
kall_circlespolygons_c1p11_xcheck(real *x)
{
	real *x1 = kall_circlespolygons_c1p11_old_x, *xe = x + 43;
	errno = 0;
	if (kall_circlespolygons_c1p11_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	kall_circlespolygons_c1p11_xkind = 0;
	return 1;
	}
 real
kall_circlespolygons_c1p11_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (kall_circlespolygons_c1p11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[42];
	;}

	if (wantfg & 2) {
	g[42] = 1.;
	}

	return rv;
}

 void
kall_circlespolygons_c1p11_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (kall_circlespolygons_c1p11_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[15] * x[16];
	v[1] = -v[0];
	t1 = v[1] + x[17];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[0];
	v[1] = x[1] * x[1];
	v[2] = v[0] + v[1];
	c[1] = v[2];

  /***  constraint 3  ***/

	v[0] = x[11] * x[11];
	v[1] = x[12] * x[12];
	v[2] = v[0] + v[1];
	c[2] = v[2];

  /***  constraint 4  ***/

	v[0] = x[11] * x[6];
	t1 = v[0] + x[18];
	t1 += x[20];
	t1 += -x[32];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[12] * x[6];
	t1 = v[0] + x[19];
	t1 += x[21];
	t1 += -x[33];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[11] * x[7];
	t1 = v[0] + x[18];
	t1 += x[22];
	t1 += -x[34];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[12] * x[7];
	t1 = v[0] + x[19];
	t1 += x[23];
	t1 += -x[35];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[11] * x[8];
	t1 = v[0] + x[18];
	t1 += x[24];
	t1 += -x[36];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[12] * x[8];
	t1 = v[0] + x[19];
	t1 += x[25];
	t1 += -x[37];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[11] * x[9];
	t1 = v[0] + x[18];
	t1 += x[26];
	t1 += -x[38];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[12] * x[9];
	t1 = v[0] + x[19];
	t1 += x[27];
	t1 += -x[39];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[11] * x[10];
	t1 = v[0] + x[18];
	t1 += x[28];
	t1 += -x[30];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[12] * x[10];
	t1 = v[0] + x[19];
	t1 += x[29];
	t1 += -x[31];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[2] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[20];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[2] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[21];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[3] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[22];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[3] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[23];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[4] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[24];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[4] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[25];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[5] * x[13];
	v[1] = -v[0];
	t1 = v[1] + x[26];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[5] * x[14];
	v[1] = -v[0];
	t1 = v[1] + x[27];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[17];
	t1 += x[42];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[15];
	t1 += x[30];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[16];
	t1 += x[31];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.25*x[32];
	t1 += -0.25*x[34];
	t1 += -0.25*x[36];
	t1 += -0.25*x[38];
	t1 += x[40];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.25*x[33];
	t1 += -0.25*x[35];
	t1 += -0.25*x[37];
	t1 += -0.25*x[39];
	t1 += x[41];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[15];
	t1 += x[32];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[16];
	t1 += x[33];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[15];
	t1 += x[34];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[16];
	t1 += x[35];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[15];
	t1 += x[36];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[16];
	t1 += x[37];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[15];
	t1 += x[38];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[16];
	t1 += x[39];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = 0.05*x[0];
	t1 += 0.075*x[1];
	t1 += x[32];
	t1 += -x[40];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -0.05*x[0];
	t1 += 0.075*x[1];
	t1 += x[34];
	t1 += -x[40];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -0.05*x[0];
	t1 += -0.075*x[1];
	t1 += x[36];
	t1 += -x[40];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = 0.05*x[0];
	t1 += -0.075*x[1];
	t1 += x[38];
	t1 += -x[40];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -0.075*x[0];
	t1 += 0.05*x[1];
	t1 += x[33];
	t1 += -x[41];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -0.075*x[0];
	t1 += -0.05*x[1];
	t1 += x[35];
	t1 += -x[41];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = 0.075*x[0];
	t1 += -0.05*x[1];
	t1 += x[37];
	t1 += -x[41];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = 0.075*x[0];
	t1 += 0.05*x[1];
	t1 += x[39];
	t1 += -x[41];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[12];
	t1 += x[13];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[11];
	t1 += x[14];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = 0.5*x[13];
	t1 += x[28];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = 0.5*x[14];
	t1 += x[29];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[30];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[31];
	c[47] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[68] = -x[15];
	J[62] = -x[16];
	J[74] = 1.;

   /*** derivatives for constraint 2 ***/

	J[9] = x[1];
	J[9] += x[1];
	J[0] = x[0];
	J[0] += x[0];

   /*** derivatives for constraint 3 ***/

	J[43] = x[12];
	J[43] += x[12];
	J[36] = x[11];
	J[36] += x[11];

   /*** derivatives for constraint 4 ***/

	J[26] = x[11];
	J[37] = x[6];
	J[76] = 1.;
	J[86] = 1.;
	J[112] = -1.;

   /*** derivatives for constraint 5 ***/

	J[27] = x[12];
	J[44] = x[6];
	J[81] = 1.;
	J[88] = 1.;
	J[116] = -1.;

   /*** derivatives for constraint 6 ***/

	J[28] = x[11];
	J[38] = x[7];
	J[77] = 1.;
	J[90] = 1.;
	J[120] = -1.;

   /*** derivatives for constraint 7 ***/

	J[29] = x[12];
	J[45] = x[7];
	J[82] = 1.;
	J[92] = 1.;
	J[124] = -1.;

   /*** derivatives for constraint 8 ***/

	J[30] = x[11];
	J[39] = x[8];
	J[78] = 1.;
	J[94] = 1.;
	J[128] = -1.;

   /*** derivatives for constraint 9 ***/

	J[31] = x[12];
	J[46] = x[8];
	J[83] = 1.;
	J[96] = 1.;
	J[132] = -1.;

   /*** derivatives for constraint 10 ***/

	J[32] = x[11];
	J[40] = x[9];
	J[79] = 1.;
	J[98] = 1.;
	J[136] = -1.;

   /*** derivatives for constraint 11 ***/

	J[33] = x[12];
	J[47] = x[9];
	J[84] = 1.;
	J[100] = 1.;
	J[140] = -1.;

   /*** derivatives for constraint 12 ***/

	J[34] = x[11];
	J[41] = x[10];
	J[80] = 1.;
	J[102] = 1.;
	J[106] = -1.;

   /*** derivatives for constraint 13 ***/

	J[35] = x[12];
	J[48] = x[10];
	J[85] = 1.;
	J[104] = 1.;
	J[109] = -1.;

   /*** derivatives for constraint 14 ***/

	J[50] = -x[2];
	J[18] = -x[13];
	J[87] = 1.;

   /*** derivatives for constraint 15 ***/

	J[56] = -x[2];
	J[19] = -x[14];
	J[89] = 1.;

   /*** derivatives for constraint 16 ***/

	J[51] = -x[3];
	J[20] = -x[13];
	J[91] = 1.;

   /*** derivatives for constraint 17 ***/

	J[57] = -x[3];
	J[21] = -x[14];
	J[93] = 1.;

   /*** derivatives for constraint 18 ***/

	J[52] = -x[4];
	J[22] = -x[13];
	J[95] = 1.;

   /*** derivatives for constraint 19 ***/

	J[58] = -x[4];
	J[23] = -x[14];
	J[97] = 1.;

   /*** derivatives for constraint 20 ***/

	J[53] = -x[5];
	J[24] = -x[13];
	J[99] = 1.;

   /*** derivatives for constraint 21 ***/

	J[59] = -x[5];
	J[25] = -x[14];
	J[101] = 1.;

   /*** derivatives for constraint 22 ***/

	J[75] = -1.;
	J[154] = 1.;

   /*** derivatives for constraint 23 ***/

	J[63] = -1.;
	J[107] = 1.;

   /*** derivatives for constraint 24 ***/

	J[69] = -1.;
	J[110] = 1.;

   /*** derivatives for constraint 25 ***/

	J[113] = -0.25;
	J[121] = -0.25;
	J[129] = -0.25;
	J[137] = -0.25;
	J[144] = 1.;

   /*** derivatives for constraint 26 ***/

	J[117] = -0.25;
	J[125] = -0.25;
	J[133] = -0.25;
	J[141] = -0.25;
	J[149] = 1.;

   /*** derivatives for constraint 27 ***/

	J[64] = -1.;
	J[114] = 1.;

   /*** derivatives for constraint 28 ***/

	J[70] = -1.;
	J[118] = 1.;

   /*** derivatives for constraint 29 ***/

	J[65] = -1.;
	J[122] = 1.;

   /*** derivatives for constraint 30 ***/

	J[71] = -1.;
	J[126] = 1.;

   /*** derivatives for constraint 31 ***/

	J[66] = -1.;
	J[130] = 1.;

   /*** derivatives for constraint 32 ***/

	J[72] = -1.;
	J[134] = 1.;

   /*** derivatives for constraint 33 ***/

	J[67] = -1.;
	J[138] = 1.;

   /*** derivatives for constraint 34 ***/

	J[73] = -1.;
	J[142] = 1.;

   /*** derivatives for constraint 35 ***/

	J[1] = 0.05;
	J[10] = 0.075;
	J[115] = 1.;
	J[145] = -1.;

   /*** derivatives for constraint 36 ***/

	J[2] = -0.05;
	J[11] = 0.075;
	J[123] = 1.;
	J[146] = -1.;

   /*** derivatives for constraint 37 ***/

	J[3] = -0.05;
	J[12] = -0.075;
	J[131] = 1.;
	J[147] = -1.;

   /*** derivatives for constraint 38 ***/

	J[4] = 0.05;
	J[13] = -0.075;
	J[139] = 1.;
	J[148] = -1.;

   /*** derivatives for constraint 39 ***/

	J[5] = -0.075;
	J[14] = 0.05;
	J[119] = 1.;
	J[150] = -1.;

   /*** derivatives for constraint 40 ***/

	J[6] = -0.075;
	J[15] = -0.05;
	J[127] = 1.;
	J[151] = -1.;

   /*** derivatives for constraint 41 ***/

	J[7] = 0.075;
	J[16] = -0.05;
	J[135] = 1.;
	J[152] = -1.;

   /*** derivatives for constraint 42 ***/

	J[8] = 0.075;
	J[17] = 0.05;
	J[143] = 1.;
	J[153] = -1.;

   /*** derivatives for constraint 43 ***/

	J[49] = -1.;
	J[54] = 1.;

   /*** derivatives for constraint 44 ***/

	J[42] = 1.;
	J[60] = 1.;

   /*** derivatives for constraint 45 ***/

	J[55] = 0.5;
	J[103] = 1.;

   /*** derivatives for constraint 46 ***/

	J[61] = 0.5;
	J[105] = 1.;

   /*** derivatives for constraint 47 ***/

	J[108] = 1.;

   /*** derivatives for constraint 48 ***/

	J[111] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
