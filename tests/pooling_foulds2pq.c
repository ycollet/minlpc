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
 fint pooling_foulds2pq_auxcom_[1] = { 16 /* nlc */ };
 fint pooling_foulds2pq_funcom_[179] = {
	36 /* nvar */,
	1 /* nobj */,
	34 /* ncon */,
	136 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,
	21,
	23,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	40,
	43,
	46,
	48,
	50,
	53,
	56,
	59,
	64,
	69,
	73,
	78,
	83,
	88,
	93,
	98,
	103,
	108,
	113,
	118,
	123,
	127,
	132,
	137,

	/* rownos */
	1,
	2,
	3,
	4,
	33,
	5,
	6,
	7,
	8,
	33,
	9,
	10,
	11,
	12,
	34,
	13,
	14,
	15,
	16,
	34,
	1,
	5,
	2,
	6,
	3,
	7,
	4,
	8,
	9,
	13,
	10,
	14,
	11,
	15,
	12,
	16,
	19,
	25,
	29,
	19,
	26,
	30,
	19,
	27,
	31,
	19,
	28,
	22,
	25,
	22,
	26,
	30,
	22,
	27,
	31,
	22,
	28,
	32,
	1,
	17,
	23,
	25,
	29,
	2,
	17,
	23,
	26,
	30,
	3,
	17,
	23,
	27,
	4,
	17,
	23,
	28,
	32,
	5,
	18,
	23,
	25,
	29,
	6,
	18,
	23,
	26,
	30,
	7,
	18,
	23,
	27,
	31,
	8,
	18,
	23,
	28,
	32,
	9,
	20,
	24,
	25,
	29,
	10,
	20,
	24,
	26,
	30,
	11,
	20,
	24,
	27,
	31,
	12,
	20,
	24,
	28,
	32,
	13,
	21,
	24,
	25,
	29,
	14,
	21,
	24,
	26,
	15,
	21,
	24,
	27,
	31,
	16,
	21,
	24,
	28,
	32 };

 real pooling_foulds2pq_boundc_[1+72+68] /* Infinity, variable bounds, constraint bounds */ = {
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
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		100.,
		0.,
		200.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		600.,
		-1.7e308,
		100.,
		-1.7e308,
		200.,
		-1.7e308,
		100.,
		-1.7e308,
		200.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		1.,
		1.,
		1.,
		1.};

 real pooling_foulds2pq_x0comn_[36] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real pooling_foulds2pq_old_x[36];
static int pooling_foulds2pq_xkind = -1;

 static int
pooling_foulds2pq_xcheck(real *x)
{
	real *x1 = pooling_foulds2pq_old_x, *xe = x + 36;
	errno = 0;
	if (pooling_foulds2pq_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_foulds2pq_xkind = 0;
	return 1;
	}
 real
pooling_foulds2pq_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_foulds2pq_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[12];
	rv += -5.*x[13];
	rv += 4.*x[14];
	rv += -2.*x[15];
	rv += -2.*x[16];
	rv += -8.*x[17];
	rv += x[18];
	rv += -5.*x[19];
	rv += -3.*x[20];
	rv += -9.*x[21];
	rv += -6.*x[23];
	rv += 7.*x[24];
	rv += x[25];
	rv += 10.*x[26];
	rv += 4.*x[27];
	rv += -6.*x[28];
	rv += -12.*x[29];
	rv += -3.*x[30];
	rv += -9.*x[31];
	rv += 4.*x[32];
	rv += -2.*x[33];
	rv += 7.*x[34];
	rv += x[35];
	;}

	if (wantfg & 2) {
	g[12] = 1.;
	g[13] = -5.;
	g[14] = 4.;
	g[15] = -2.;
	g[16] = -2.;
	g[17] = -8.;
	g[18] = 1.;
	g[19] = -5.;
	g[20] = -3.;
	g[21] = -9.;
	g[23] = -6.;
	g[24] = 7.;
	g[25] = 1.;
	g[26] = 10.;
	g[27] = 4.;
	g[28] = -6.;
	g[29] = -12.;
	g[30] = -3.;
	g[31] = -9.;
	g[32] = 4.;
	g[33] = -2.;
	g[34] = 7.;
	g[35] = 1.;
	}

	return rv;
}

 void
pooling_foulds2pq_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_foulds2pq_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[20];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[21];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[22];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[23];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] * x[4];
	v[1] = -v[0];
	t1 = v[1] + x[24];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] * x[5];
	v[1] = -v[0];
	t1 = v[1] + x[25];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[1] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[26];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[1] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[27];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[28];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[2] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[29];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[2] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[30];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[2] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[31];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[3] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[32];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[3] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[33];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[3] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[34];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[3] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[35];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[12];
	t1 += x[16];
	t1 += x[20];
	t1 += x[24];
	t1 += x[28];
	t1 += x[32];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[13];
	t1 += x[17];
	t1 += x[21];
	t1 += x[25];
	t1 += x[29];
	t1 += x[33];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[14];
	t1 += x[18];
	t1 += x[22];
	t1 += x[26];
	t1 += x[30];
	t1 += x[34];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[15];
	t1 += x[19];
	t1 += x[23];
	t1 += x[27];
	t1 += x[31];
	t1 += x[35];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -0.5*x[12];
	t1 += 0.5*x[20];
	t1 += -1.5*x[24];
	t1 += x[28];
	t1 += -x[32];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = 0.5*x[13];
	t1 += x[17];
	t1 += 1.5*x[21];
	t1 += -0.5*x[25];
	t1 += 2.*x[29];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[14];
	t1 += -0.5*x[18];
	t1 += -2.*x[26];
	t1 += 0.5*x[30];
	t1 += -1.5*x[34];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = 0.5*x[19];
	t1 += x[23];
	t1 += -x[27];
	t1 += 1.5*x[31];
	t1 += -0.5*x[35];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[0];
	t1 += x[1];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[2];
	t1 += x[3];
	c[33] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[20] = -x[0];
	J[0] = -x[4];
	J[58] = 1.;

   /*** derivatives for constraint 2 ***/

	J[22] = -x[0];
	J[1] = -x[5];
	J[63] = 1.;

   /*** derivatives for constraint 3 ***/

	J[24] = -x[0];
	J[2] = -x[6];
	J[68] = 1.;

   /*** derivatives for constraint 4 ***/

	J[26] = -x[0];
	J[3] = -x[7];
	J[72] = 1.;

   /*** derivatives for constraint 5 ***/

	J[21] = -x[1];
	J[5] = -x[4];
	J[77] = 1.;

   /*** derivatives for constraint 6 ***/

	J[23] = -x[1];
	J[6] = -x[5];
	J[82] = 1.;

   /*** derivatives for constraint 7 ***/

	J[25] = -x[1];
	J[7] = -x[6];
	J[87] = 1.;

   /*** derivatives for constraint 8 ***/

	J[27] = -x[1];
	J[8] = -x[7];
	J[92] = 1.;

   /*** derivatives for constraint 9 ***/

	J[28] = -x[2];
	J[10] = -x[8];
	J[97] = 1.;

   /*** derivatives for constraint 10 ***/

	J[30] = -x[2];
	J[11] = -x[9];
	J[102] = 1.;

   /*** derivatives for constraint 11 ***/

	J[32] = -x[2];
	J[12] = -x[10];
	J[107] = 1.;

   /*** derivatives for constraint 12 ***/

	J[34] = -x[2];
	J[13] = -x[11];
	J[112] = 1.;

   /*** derivatives for constraint 13 ***/

	J[29] = -x[3];
	J[15] = -x[8];
	J[117] = 1.;

   /*** derivatives for constraint 14 ***/

	J[31] = -x[3];
	J[16] = -x[9];
	J[122] = 1.;

   /*** derivatives for constraint 15 ***/

	J[33] = -x[3];
	J[17] = -x[10];
	J[126] = 1.;

   /*** derivatives for constraint 16 ***/

	J[35] = -x[3];
	J[18] = -x[11];
	J[131] = 1.;

   /*** derivatives for constraint 17 ***/

	J[59] = 1.;
	J[64] = 1.;
	J[69] = 1.;
	J[73] = 1.;

   /*** derivatives for constraint 18 ***/

	J[78] = 1.;
	J[83] = 1.;
	J[88] = 1.;
	J[93] = 1.;

   /*** derivatives for constraint 19 ***/

	J[36] = 1.;
	J[39] = 1.;
	J[42] = 1.;
	J[45] = 1.;

   /*** derivatives for constraint 20 ***/

	J[98] = 1.;
	J[103] = 1.;
	J[108] = 1.;
	J[113] = 1.;

   /*** derivatives for constraint 21 ***/

	J[118] = 1.;
	J[123] = 1.;
	J[127] = 1.;
	J[132] = 1.;

   /*** derivatives for constraint 22 ***/

	J[47] = 1.;
	J[49] = 1.;
	J[52] = 1.;
	J[55] = 1.;

   /*** derivatives for constraint 23 ***/

	J[60] = 1.;
	J[65] = 1.;
	J[70] = 1.;
	J[74] = 1.;
	J[79] = 1.;
	J[84] = 1.;
	J[89] = 1.;
	J[94] = 1.;

   /*** derivatives for constraint 24 ***/

	J[99] = 1.;
	J[104] = 1.;
	J[109] = 1.;
	J[114] = 1.;
	J[119] = 1.;
	J[124] = 1.;
	J[128] = 1.;
	J[133] = 1.;

   /*** derivatives for constraint 25 ***/

	J[37] = 1.;
	J[48] = 1.;
	J[61] = 1.;
	J[80] = 1.;
	J[100] = 1.;
	J[120] = 1.;

   /*** derivatives for constraint 26 ***/

	J[40] = 1.;
	J[50] = 1.;
	J[66] = 1.;
	J[85] = 1.;
	J[105] = 1.;
	J[125] = 1.;

   /*** derivatives for constraint 27 ***/

	J[43] = 1.;
	J[53] = 1.;
	J[71] = 1.;
	J[90] = 1.;
	J[110] = 1.;
	J[129] = 1.;

   /*** derivatives for constraint 28 ***/

	J[46] = 1.;
	J[56] = 1.;
	J[75] = 1.;
	J[95] = 1.;
	J[115] = 1.;
	J[134] = 1.;

   /*** derivatives for constraint 29 ***/

	J[38] = -0.5;
	J[62] = 0.5;
	J[81] = -1.5;
	J[101] = 1.;
	J[121] = -1.;

   /*** derivatives for constraint 30 ***/

	J[41] = 0.5;
	J[51] = 1.;
	J[67] = 1.5;
	J[86] = -0.5;
	J[106] = 2.;

   /*** derivatives for constraint 31 ***/

	J[44] = -1.;
	J[54] = -0.5;
	J[91] = -2.;
	J[111] = 0.5;
	J[130] = -1.5;

   /*** derivatives for constraint 32 ***/

	J[57] = 0.5;
	J[76] = 1.;
	J[96] = -1.;
	J[116] = 1.5;
	J[135] = -0.5;

   /*** derivatives for constraint 33 ***/

	J[4] = 1.;
	J[9] = 1.;

   /*** derivatives for constraint 34 ***/

	J[14] = 1.;
	J[19] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
