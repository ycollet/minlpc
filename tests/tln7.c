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
 fint tln7_auxcom_[1] = { 7 /* nlc */ };
 fint tln7_funcom_[343] = {
	63 /* nvar */,
	1 /* nobj */,
	42 /* ncon */,
	273 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	10,
	19,
	28,
	37,
	46,
	55,
	64,
	68,
	72,
	76,
	80,
	84,
	88,
	92,
	96,
	100,
	104,
	108,
	112,
	116,
	120,
	124,
	128,
	132,
	136,
	140,
	144,
	148,
	152,
	156,
	160,
	164,
	168,
	172,
	176,
	180,
	184,
	188,
	192,
	196,
	200,
	204,
	208,
	212,
	216,
	220,
	224,
	228,
	232,
	236,
	240,
	244,
	248,
	252,
	256,
	260,
	262,
	264,
	266,
	268,
	270,
	272,
	274,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	29,
	36,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	30,
	37,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	31,
	38,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	32,
	39,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	33,
	40,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	34,
	41,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	35,
	42,
	1,
	8,
	15,
	22,
	1,
	9,
	16,
	23,
	1,
	10,
	17,
	24,
	1,
	11,
	18,
	25,
	1,
	12,
	19,
	26,
	1,
	13,
	20,
	27,
	1,
	14,
	21,
	28,
	2,
	8,
	15,
	22,
	2,
	9,
	16,
	23,
	2,
	10,
	17,
	24,
	2,
	11,
	18,
	25,
	2,
	12,
	19,
	26,
	2,
	13,
	20,
	27,
	2,
	14,
	21,
	28,
	3,
	8,
	15,
	22,
	3,
	9,
	16,
	23,
	3,
	10,
	17,
	24,
	3,
	11,
	18,
	25,
	3,
	12,
	19,
	26,
	3,
	13,
	20,
	27,
	3,
	14,
	21,
	28,
	4,
	8,
	15,
	22,
	4,
	9,
	16,
	23,
	4,
	10,
	17,
	24,
	4,
	11,
	18,
	25,
	4,
	12,
	19,
	26,
	4,
	13,
	20,
	27,
	4,
	14,
	21,
	28,
	5,
	8,
	15,
	22,
	5,
	9,
	16,
	23,
	5,
	10,
	17,
	24,
	5,
	11,
	18,
	25,
	5,
	12,
	19,
	26,
	5,
	13,
	20,
	27,
	5,
	14,
	21,
	28,
	6,
	8,
	15,
	22,
	6,
	9,
	16,
	23,
	6,
	10,
	17,
	24,
	6,
	11,
	18,
	25,
	6,
	12,
	19,
	26,
	6,
	13,
	20,
	27,
	6,
	14,
	21,
	28,
	7,
	8,
	15,
	22,
	7,
	9,
	16,
	23,
	7,
	10,
	17,
	24,
	7,
	11,
	18,
	25,
	7,
	12,
	19,
	26,
	7,
	13,
	20,
	27,
	7,
	14,
	21,
	28,
	29,
	36,
	30,
	37,
	31,
	38,
	32,
	39,
	33,
	40,
	34,
	41,
	35,
	42 };

 real tln7_boundc_[1+126+84] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		15.,
		0.,
		15.,
		0.,
		15.,
		0.,
		15.,
		0.,
		15.,
		0.,
		15.,
		0.,
		15.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
		0.,
		6.,
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		-8.,
		-1.7e308,
		-11.,
		-1.7e308,
		-15.,
		-1.7e308,
		-5.,
		-1.7e308,
		-8.,
		-1.7e308,
		-12.,
		-1.7e308,
		-6.,
		-1.7e308,
		3400.,
		-1.7e308,
		3400.,
		-1.7e308,
		3400.,
		-1.7e308,
		3400.,
		-1.7e308,
		3400.,
		-1.7e308,
		3400.,
		-1.7e308,
		3400.,
		-1.7e308,
		-3200.,
		-1.7e308,
		-3200.,
		-1.7e308,
		-3200.,
		-1.7e308,
		-3200.,
		-1.7e308,
		-3200.,
		-1.7e308,
		-3200.,
		-1.7e308,
		-3200.,
		-1.7e308,
		6.,
		-1.7e308,
		6.,
		-1.7e308,
		6.,
		-1.7e308,
		6.,
		-1.7e308,
		6.,
		-1.7e308,
		6.,
		-1.7e308,
		6.,
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
		0.};

 real tln7_x0comn_[63] = {
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
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
		0. };

static real tln7_old_x[63];
static int tln7_xkind = -1;

 static int
tln7_xcheck(real *x)
{
	real *x1 = tln7_old_x, *xe = x + 63;
	errno = 0;
	if (tln7_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tln7_xkind = 0;
	return 1;
	}
 real
tln7_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (tln7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	rv += x[2];
	rv += x[3];
	rv += x[4];
	rv += x[5];
	rv += x[6];
	rv += 0.1*x[56];
	rv += 0.2*x[57];
	rv += 0.3*x[58];
	rv += 0.4*x[59];
	rv += 0.5*x[60];
	rv += 0.6*x[61];
	rv += 0.7*x[62];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	g[2] = 1.;
	g[3] = 1.;
	g[4] = 1.;
	g[5] = 1.;
	g[6] = 1.;
	g[56] = 0.1;
	g[57] = 0.2;
	g[58] = 0.3;
	g[59] = 0.4;
	g[60] = 0.5;
	g[61] = 0.6;
	g[62] = 0.7;
	}

	return rv;
}

 void
tln7_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (tln7_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[7];
	v[1] = x[1] * x[8];
	v[0] += v[1];
	v[1] = x[2] * x[9];
	v[0] += v[1];
	v[1] = x[3] * x[10];
	v[0] += v[1];
	v[1] = x[4] * x[11];
	v[0] += v[1];
	v[1] = x[5] * x[12];
	v[0] += v[1];
	v[1] = x[6] * x[13];
	v[0] += v[1];
	v[1] = -v[0];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = x[0] * x[14];
	v[1] = x[1] * x[15];
	v[0] += v[1];
	v[1] = x[2] * x[16];
	v[0] += v[1];
	v[1] = x[3] * x[17];
	v[0] += v[1];
	v[1] = x[4] * x[18];
	v[0] += v[1];
	v[1] = x[5] * x[19];
	v[0] += v[1];
	v[1] = x[6] * x[20];
	v[0] += v[1];
	v[1] = -v[0];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = x[0] * x[21];
	v[1] = x[1] * x[22];
	v[0] += v[1];
	v[1] = x[2] * x[23];
	v[0] += v[1];
	v[1] = x[3] * x[24];
	v[0] += v[1];
	v[1] = x[4] * x[25];
	v[0] += v[1];
	v[1] = x[5] * x[26];
	v[0] += v[1];
	v[1] = x[6] * x[27];
	v[0] += v[1];
	v[1] = -v[0];
	c[2] = v[1];

  /***  constraint 4  ***/

	v[0] = x[0] * x[28];
	v[1] = x[1] * x[29];
	v[0] += v[1];
	v[1] = x[2] * x[30];
	v[0] += v[1];
	v[1] = x[3] * x[31];
	v[0] += v[1];
	v[1] = x[4] * x[32];
	v[0] += v[1];
	v[1] = x[5] * x[33];
	v[0] += v[1];
	v[1] = x[6] * x[34];
	v[0] += v[1];
	v[1] = -v[0];
	c[3] = v[1];

  /***  constraint 5  ***/

	v[0] = x[0] * x[35];
	v[1] = x[1] * x[36];
	v[0] += v[1];
	v[1] = x[2] * x[37];
	v[0] += v[1];
	v[1] = x[3] * x[38];
	v[0] += v[1];
	v[1] = x[4] * x[39];
	v[0] += v[1];
	v[1] = x[5] * x[40];
	v[0] += v[1];
	v[1] = x[6] * x[41];
	v[0] += v[1];
	v[1] = -v[0];
	c[4] = v[1];

  /***  constraint 6  ***/

	v[0] = x[0] * x[42];
	v[1] = x[1] * x[43];
	v[0] += v[1];
	v[1] = x[2] * x[44];
	v[0] += v[1];
	v[1] = x[3] * x[45];
	v[0] += v[1];
	v[1] = x[4] * x[46];
	v[0] += v[1];
	v[1] = x[5] * x[47];
	v[0] += v[1];
	v[1] = x[6] * x[48];
	v[0] += v[1];
	v[1] = -v[0];
	c[5] = v[1];

  /***  constraint 7  ***/

	v[0] = x[0] * x[49];
	v[1] = x[1] * x[50];
	v[0] += v[1];
	v[1] = x[2] * x[51];
	v[0] += v[1];
	v[1] = x[3] * x[52];
	v[0] += v[1];
	v[1] = x[4] * x[53];
	v[0] += v[1];
	v[1] = x[5] * x[54];
	v[0] += v[1];
	v[1] = x[6] * x[55];
	v[0] += v[1];
	v[1] = -v[0];
	c[6] = v[1];

  /***  constraint 8  ***/

	t1 = 550.*x[7];
	t1 += 630.*x[14];
	t1 += 685.*x[21];
	t1 += 720.*x[28];
	t1 += 760.*x[35];
	t1 += 810.*x[42];
	t1 += 850.*x[49];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 550.*x[8];
	t1 += 630.*x[15];
	t1 += 685.*x[22];
	t1 += 720.*x[29];
	t1 += 760.*x[36];
	t1 += 810.*x[43];
	t1 += 850.*x[50];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 550.*x[9];
	t1 += 630.*x[16];
	t1 += 685.*x[23];
	t1 += 720.*x[30];
	t1 += 760.*x[37];
	t1 += 810.*x[44];
	t1 += 850.*x[51];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 550.*x[10];
	t1 += 630.*x[17];
	t1 += 685.*x[24];
	t1 += 720.*x[31];
	t1 += 760.*x[38];
	t1 += 810.*x[45];
	t1 += 850.*x[52];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 550.*x[11];
	t1 += 630.*x[18];
	t1 += 685.*x[25];
	t1 += 720.*x[32];
	t1 += 760.*x[39];
	t1 += 810.*x[46];
	t1 += 850.*x[53];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 550.*x[12];
	t1 += 630.*x[19];
	t1 += 685.*x[26];
	t1 += 720.*x[33];
	t1 += 760.*x[40];
	t1 += 810.*x[47];
	t1 += 850.*x[54];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 550.*x[13];
	t1 += 630.*x[20];
	t1 += 685.*x[27];
	t1 += 720.*x[34];
	t1 += 760.*x[41];
	t1 += 810.*x[48];
	t1 += 850.*x[55];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -550.*x[7];
	t1 += -630.*x[14];
	t1 += -685.*x[21];
	t1 += -720.*x[28];
	t1 += -760.*x[35];
	t1 += -810.*x[42];
	t1 += -850.*x[49];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -550.*x[8];
	t1 += -630.*x[15];
	t1 += -685.*x[22];
	t1 += -720.*x[29];
	t1 += -760.*x[36];
	t1 += -810.*x[43];
	t1 += -850.*x[50];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -550.*x[9];
	t1 += -630.*x[16];
	t1 += -685.*x[23];
	t1 += -720.*x[30];
	t1 += -760.*x[37];
	t1 += -810.*x[44];
	t1 += -850.*x[51];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -550.*x[10];
	t1 += -630.*x[17];
	t1 += -685.*x[24];
	t1 += -720.*x[31];
	t1 += -760.*x[38];
	t1 += -810.*x[45];
	t1 += -850.*x[52];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -550.*x[11];
	t1 += -630.*x[18];
	t1 += -685.*x[25];
	t1 += -720.*x[32];
	t1 += -760.*x[39];
	t1 += -810.*x[46];
	t1 += -850.*x[53];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -550.*x[12];
	t1 += -630.*x[19];
	t1 += -685.*x[26];
	t1 += -720.*x[33];
	t1 += -760.*x[40];
	t1 += -810.*x[47];
	t1 += -850.*x[54];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -550.*x[13];
	t1 += -630.*x[20];
	t1 += -685.*x[27];
	t1 += -720.*x[34];
	t1 += -760.*x[41];
	t1 += -810.*x[48];
	t1 += -850.*x[55];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[7];
	t1 += x[14];
	t1 += x[21];
	t1 += x[28];
	t1 += x[35];
	t1 += x[42];
	t1 += x[49];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[8];
	t1 += x[15];
	t1 += x[22];
	t1 += x[29];
	t1 += x[36];
	t1 += x[43];
	t1 += x[50];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[9];
	t1 += x[16];
	t1 += x[23];
	t1 += x[30];
	t1 += x[37];
	t1 += x[44];
	t1 += x[51];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[10];
	t1 += x[17];
	t1 += x[24];
	t1 += x[31];
	t1 += x[38];
	t1 += x[45];
	t1 += x[52];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[11];
	t1 += x[18];
	t1 += x[25];
	t1 += x[32];
	t1 += x[39];
	t1 += x[46];
	t1 += x[53];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[12];
	t1 += x[19];
	t1 += x[26];
	t1 += x[33];
	t1 += x[40];
	t1 += x[47];
	t1 += x[54];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[13];
	t1 += x[20];
	t1 += x[27];
	t1 += x[34];
	t1 += x[41];
	t1 += x[48];
	t1 += x[55];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[0];
	t1 += x[56];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[1];
	t1 += x[57];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[2];
	t1 += x[58];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[3];
	t1 += x[59];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[4];
	t1 += x[60];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[5];
	t1 += x[61];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[6];
	t1 += x[62];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[0];
	t1 += -15.*x[56];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[1];
	t1 += -15.*x[57];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[2];
	t1 += -15.*x[58];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[3];
	t1 += -15.*x[59];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[4];
	t1 += -15.*x[60];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[5];
	t1 += -15.*x[61];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[6];
	t1 += -15.*x[62];
	c[41] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[87] = -x[6];
	J[54] = -x[13];
	J[83] = -x[5];
	J[45] = -x[12];
	J[79] = -x[4];
	J[36] = -x[11];
	J[75] = -x[3];
	J[27] = -x[10];
	J[71] = -x[2];
	J[18] = -x[9];
	J[67] = -x[1];
	J[9] = -x[8];
	J[63] = -x[0];
	J[0] = -x[7];

   /*** derivatives for constraint 2 ***/

	J[115] = -x[6];
	J[55] = -x[20];
	J[111] = -x[5];
	J[46] = -x[19];
	J[107] = -x[4];
	J[37] = -x[18];
	J[103] = -x[3];
	J[28] = -x[17];
	J[99] = -x[2];
	J[19] = -x[16];
	J[95] = -x[1];
	J[10] = -x[15];
	J[91] = -x[0];
	J[1] = -x[14];

   /*** derivatives for constraint 3 ***/

	J[143] = -x[6];
	J[56] = -x[27];
	J[139] = -x[5];
	J[47] = -x[26];
	J[135] = -x[4];
	J[38] = -x[25];
	J[131] = -x[3];
	J[29] = -x[24];
	J[127] = -x[2];
	J[20] = -x[23];
	J[123] = -x[1];
	J[11] = -x[22];
	J[119] = -x[0];
	J[2] = -x[21];

   /*** derivatives for constraint 4 ***/

	J[171] = -x[6];
	J[57] = -x[34];
	J[167] = -x[5];
	J[48] = -x[33];
	J[163] = -x[4];
	J[39] = -x[32];
	J[159] = -x[3];
	J[30] = -x[31];
	J[155] = -x[2];
	J[21] = -x[30];
	J[151] = -x[1];
	J[12] = -x[29];
	J[147] = -x[0];
	J[3] = -x[28];

   /*** derivatives for constraint 5 ***/

	J[199] = -x[6];
	J[58] = -x[41];
	J[195] = -x[5];
	J[49] = -x[40];
	J[191] = -x[4];
	J[40] = -x[39];
	J[187] = -x[3];
	J[31] = -x[38];
	J[183] = -x[2];
	J[22] = -x[37];
	J[179] = -x[1];
	J[13] = -x[36];
	J[175] = -x[0];
	J[4] = -x[35];

   /*** derivatives for constraint 6 ***/

	J[227] = -x[6];
	J[59] = -x[48];
	J[223] = -x[5];
	J[50] = -x[47];
	J[219] = -x[4];
	J[41] = -x[46];
	J[215] = -x[3];
	J[32] = -x[45];
	J[211] = -x[2];
	J[23] = -x[44];
	J[207] = -x[1];
	J[14] = -x[43];
	J[203] = -x[0];
	J[5] = -x[42];

   /*** derivatives for constraint 7 ***/

	J[255] = -x[6];
	J[60] = -x[55];
	J[251] = -x[5];
	J[51] = -x[54];
	J[247] = -x[4];
	J[42] = -x[53];
	J[243] = -x[3];
	J[33] = -x[52];
	J[239] = -x[2];
	J[24] = -x[51];
	J[235] = -x[1];
	J[15] = -x[50];
	J[231] = -x[0];
	J[6] = -x[49];

   /*** derivatives for constraint 8 ***/

	J[64] = 550.;
	J[92] = 630.;
	J[120] = 685.;
	J[148] = 720.;
	J[176] = 760.;
	J[204] = 810.;
	J[232] = 850.;

   /*** derivatives for constraint 9 ***/

	J[68] = 550.;
	J[96] = 630.;
	J[124] = 685.;
	J[152] = 720.;
	J[180] = 760.;
	J[208] = 810.;
	J[236] = 850.;

   /*** derivatives for constraint 10 ***/

	J[72] = 550.;
	J[100] = 630.;
	J[128] = 685.;
	J[156] = 720.;
	J[184] = 760.;
	J[212] = 810.;
	J[240] = 850.;

   /*** derivatives for constraint 11 ***/

	J[76] = 550.;
	J[104] = 630.;
	J[132] = 685.;
	J[160] = 720.;
	J[188] = 760.;
	J[216] = 810.;
	J[244] = 850.;

   /*** derivatives for constraint 12 ***/

	J[80] = 550.;
	J[108] = 630.;
	J[136] = 685.;
	J[164] = 720.;
	J[192] = 760.;
	J[220] = 810.;
	J[248] = 850.;

   /*** derivatives for constraint 13 ***/

	J[84] = 550.;
	J[112] = 630.;
	J[140] = 685.;
	J[168] = 720.;
	J[196] = 760.;
	J[224] = 810.;
	J[252] = 850.;

   /*** derivatives for constraint 14 ***/

	J[88] = 550.;
	J[116] = 630.;
	J[144] = 685.;
	J[172] = 720.;
	J[200] = 760.;
	J[228] = 810.;
	J[256] = 850.;

   /*** derivatives for constraint 15 ***/

	J[65] = -550.;
	J[93] = -630.;
	J[121] = -685.;
	J[149] = -720.;
	J[177] = -760.;
	J[205] = -810.;
	J[233] = -850.;

   /*** derivatives for constraint 16 ***/

	J[69] = -550.;
	J[97] = -630.;
	J[125] = -685.;
	J[153] = -720.;
	J[181] = -760.;
	J[209] = -810.;
	J[237] = -850.;

   /*** derivatives for constraint 17 ***/

	J[73] = -550.;
	J[101] = -630.;
	J[129] = -685.;
	J[157] = -720.;
	J[185] = -760.;
	J[213] = -810.;
	J[241] = -850.;

   /*** derivatives for constraint 18 ***/

	J[77] = -550.;
	J[105] = -630.;
	J[133] = -685.;
	J[161] = -720.;
	J[189] = -760.;
	J[217] = -810.;
	J[245] = -850.;

   /*** derivatives for constraint 19 ***/

	J[81] = -550.;
	J[109] = -630.;
	J[137] = -685.;
	J[165] = -720.;
	J[193] = -760.;
	J[221] = -810.;
	J[249] = -850.;

   /*** derivatives for constraint 20 ***/

	J[85] = -550.;
	J[113] = -630.;
	J[141] = -685.;
	J[169] = -720.;
	J[197] = -760.;
	J[225] = -810.;
	J[253] = -850.;

   /*** derivatives for constraint 21 ***/

	J[89] = -550.;
	J[117] = -630.;
	J[145] = -685.;
	J[173] = -720.;
	J[201] = -760.;
	J[229] = -810.;
	J[257] = -850.;

   /*** derivatives for constraint 22 ***/

	J[66] = 1.;
	J[94] = 1.;
	J[122] = 1.;
	J[150] = 1.;
	J[178] = 1.;
	J[206] = 1.;
	J[234] = 1.;

   /*** derivatives for constraint 23 ***/

	J[70] = 1.;
	J[98] = 1.;
	J[126] = 1.;
	J[154] = 1.;
	J[182] = 1.;
	J[210] = 1.;
	J[238] = 1.;

   /*** derivatives for constraint 24 ***/

	J[74] = 1.;
	J[102] = 1.;
	J[130] = 1.;
	J[158] = 1.;
	J[186] = 1.;
	J[214] = 1.;
	J[242] = 1.;

   /*** derivatives for constraint 25 ***/

	J[78] = 1.;
	J[106] = 1.;
	J[134] = 1.;
	J[162] = 1.;
	J[190] = 1.;
	J[218] = 1.;
	J[246] = 1.;

   /*** derivatives for constraint 26 ***/

	J[82] = 1.;
	J[110] = 1.;
	J[138] = 1.;
	J[166] = 1.;
	J[194] = 1.;
	J[222] = 1.;
	J[250] = 1.;

   /*** derivatives for constraint 27 ***/

	J[86] = 1.;
	J[114] = 1.;
	J[142] = 1.;
	J[170] = 1.;
	J[198] = 1.;
	J[226] = 1.;
	J[254] = 1.;

   /*** derivatives for constraint 28 ***/

	J[90] = 1.;
	J[118] = 1.;
	J[146] = 1.;
	J[174] = 1.;
	J[202] = 1.;
	J[230] = 1.;
	J[258] = 1.;

   /*** derivatives for constraint 29 ***/

	J[7] = -1.;
	J[259] = 1.;

   /*** derivatives for constraint 30 ***/

	J[16] = -1.;
	J[261] = 1.;

   /*** derivatives for constraint 31 ***/

	J[25] = -1.;
	J[263] = 1.;

   /*** derivatives for constraint 32 ***/

	J[34] = -1.;
	J[265] = 1.;

   /*** derivatives for constraint 33 ***/

	J[43] = -1.;
	J[267] = 1.;

   /*** derivatives for constraint 34 ***/

	J[52] = -1.;
	J[269] = 1.;

   /*** derivatives for constraint 35 ***/

	J[61] = -1.;
	J[271] = 1.;

   /*** derivatives for constraint 36 ***/

	J[8] = 1.;
	J[260] = -15.;

   /*** derivatives for constraint 37 ***/

	J[17] = 1.;
	J[262] = -15.;

   /*** derivatives for constraint 38 ***/

	J[26] = 1.;
	J[264] = -15.;

   /*** derivatives for constraint 39 ***/

	J[35] = 1.;
	J[266] = -15.;

   /*** derivatives for constraint 40 ***/

	J[44] = 1.;
	J[268] = -15.;

   /*** derivatives for constraint 41 ***/

	J[53] = 1.;
	J[270] = -15.;

   /*** derivatives for constraint 42 ***/

	J[62] = 1.;
	J[272] = -15.;
	}
}
#ifdef __cplusplus
	}
#endif
