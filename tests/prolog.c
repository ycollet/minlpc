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
 fint prolog_auxcom_[1] = { 2 /* nlc */ };
 fint prolog_funcom_[147] = {
	20 /* nvar */,
	1 /* nobj */,
	22 /* ncon */,
	120 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	13,
	28,
	31,
	34,
	37,
	40,
	49,
	60,
	71,
	76,
	81,
	86,
	90,
	94,
	98,
	103,
	108,
	113,
	117,
	121,

	/* rownos */
	1,
	2,
	8,
	9,
	10,
	11,
	14,
	15,
	16,
	20,
	21,
	22,
	1,
	2,
	8,
	9,
	10,
	11,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	1,
	3,
	8,
	2,
	3,
	9,
	1,
	5,
	10,
	2,
	5,
	11,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
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
	3,
	4,
	5,
	6,
	7,
	3,
	4,
	5,
	6,
	7,
	3,
	4,
	5,
	6,
	7,
	4,
	5,
	6,
	7,
	4,
	5,
	6,
	7,
	4,
	5,
	6,
	7,
	3,
	4,
	5,
	6,
	7,
	3,
	4,
	5,
	6,
	7,
	3,
	4,
	5,
	6,
	7,
	1,
	8,
	10,
	12,
	2,
	9,
	11,
	13 };

 real prolog_boundc_[1+40+44] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.2,
		1.7e308,
		0.2,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.2,
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
		3712.,
		-1.7e308,
		5000.,
		-1.7e308,
		352.,
		-1.7e308,
		430.,
		-1.7e308,
		222.,
		-1.7e308,
		292.,
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

 real prolog_x0comn_[20] = {
		0.5942,
		1.31077,
		352.,
		430.,
		222.,
		292.,
		1.6167,
		0.130670360422406,
		0.130670360422406,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		500.14934,
		638.25084 };

static real prolog_old_x[20];
static int prolog_xkind = -1;

 static int
prolog_xcheck(real *x)
{
	real *x1 = prolog_old_x, *xe = x + 20;
	errno = 0;
	if (prolog_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	prolog_xkind = 0;
	return 1;
	}
 real
prolog_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (prolog_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[2] * x[0];
	v[1] = x[3] * x[0];
	v[0] += v[1];
	v[1] = x[4] * x[1];
	v[0] += v[1];
	v[1] = x[5] * x[1];
	v[0] += v[1];
	v[1] = -v[0];
	rv = v[1] + 3712.*x[7];
	rv += 5000.*x[8];
	;}

	if (wantfg & 2) {
	g[1] = -x[5];
	g[5] = -x[1];
	g[1] -= x[4];
	g[4] = -x[1];
	g[0] = -x[3];
	g[3] = -x[0];
	g[0] -= x[2];
	g[2] = -x[0];
	g[7] = 3712.;
	g[8] = 5000.;
	}

	return rv;
}

 void
prolog_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (prolog_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] * x[0];
	v[1] = x[4] * x[1];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[18];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[3] * x[0];
	v[1] = x[5] * x[1];
	v[2] = v[0] + v[1];
	t1 = v[2] + -x[19];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[2];
	t1 += x[3];
	t1 += -0.94*x[9];
	t1 += -0.94*x[10];
	t1 += -0.94*x[11];
	t1 += 0.244*x[15];
	t1 += 0.244*x[16];
	t1 += 0.244*x[17];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 0.064*x[9];
	t1 += 0.064*x[10];
	t1 += 0.064*x[11];
	t1 += -0.58*x[12];
	t1 += -0.58*x[13];
	t1 += -0.58*x[14];
	t1 += 0.172*x[15];
	t1 += 0.172*x[16];
	t1 += 0.172*x[17];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[4];
	t1 += x[5];
	t1 += 0.048*x[9];
	t1 += 0.048*x[10];
	t1 += 0.048*x[11];
	t1 += 0.247*x[12];
	t1 += 0.247*x[13];
	t1 += 0.247*x[14];
	t1 += -0.916*x[15];
	t1 += -0.916*x[16];
	t1 += -0.916*x[17];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[9];
	t1 += 1.2*x[10];
	t1 += 0.8*x[11];
	t1 += 2.*x[12];
	t1 += 1.8*x[13];
	t1 += 2.4*x[14];
	t1 += 3.*x[15];
	t1 += 2.7*x[16];
	t1 += 3.2*x[17];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 2.*x[9];
	t1 += 1.8*x[10];
	t1 += 2.2*x[11];
	t1 += 3.*x[12];
	t1 += 3.5*x[13];
	t1 += 2.3*x[14];
	t1 += 3.*x[15];
	t1 += 3.2*x[16];
	t1 += 2.7*x[17];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 356.474947137148*x[0];
	t1 += 53.7083537310174*x[1];
	t1 += x[2];
	t1 += -0.564264890180399*x[18];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 339.983422262764*x[0];
	t1 += 43.5418249774113*x[1];
	t1 += x[3];
	t1 += -0.405939876920766*x[19];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 106.946746119538*x[0];
	t1 += 145.018955433089*x[1];
	t1 += x[4];
	t1 += -0.507117039797071*x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = 173.929713444361*x[0];
	t1 += 203.031384299627*x[1];
	t1 += x[5];
	t1 += -0.578889145413521*x[19];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -3340.8*x[7];
	t1 += -500.*x[8];
	t1 += x[18];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -371.2*x[7];
	t1 += -4500.*x[8];
	t1 += x[19];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 0.94*x[0];
	t1 += -0.048*x[1];
	t1 += -0.064*x[6];
	t1 += -x[7];
	t1 += -2.*x[8];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 0.94*x[0];
	t1 += -0.048*x[1];
	t1 += -0.064*x[6];
	t1 += -1.2*x[7];
	t1 += -1.8*x[8];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 0.94*x[0];
	t1 += -0.048*x[1];
	t1 += -0.064*x[6];
	t1 += -0.8*x[7];
	t1 += -2.2*x[8];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -0.247*x[1];
	t1 += 0.58*x[6];
	t1 += -2.*x[7];
	t1 += -3.*x[8];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -0.247*x[1];
	t1 += 0.58*x[6];
	t1 += -1.8*x[7];
	t1 += -3.5*x[8];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -0.247*x[1];
	t1 += 0.58*x[6];
	t1 += -2.4*x[7];
	t1 += -2.3*x[8];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -0.244*x[0];
	t1 += 0.916*x[1];
	t1 += -0.172*x[6];
	t1 += -3.*x[7];
	t1 += -3.*x[8];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -0.244*x[0];
	t1 += 0.916*x[1];
	t1 += -0.172*x[6];
	t1 += -2.7*x[7];
	t1 += -3.2*x[8];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -0.244*x[0];
	t1 += 0.916*x[1];
	t1 += -0.172*x[6];
	t1 += -3.2*x[7];
	t1 += -2.7*x[8];
	c[21] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[12] = x[4];
	J[33] = x[1];
	J[0] = x[2];
	J[27] = x[0];
	J[112] = -1.;

   /*** derivatives for constraint 2 ***/

	J[13] = x[5];
	J[36] = x[1];
	J[1] = x[3];
	J[30] = x[0];
	J[116] = -1.;

   /*** derivatives for constraint 3 ***/

	J[28] = 1.;
	J[31] = 1.;
	J[70] = -0.94;
	J[75] = -0.94;
	J[80] = -0.94;
	J[97] = 0.244;
	J[102] = 0.244;
	J[107] = 0.244;

   /*** derivatives for constraint 4 ***/

	J[71] = 0.064;
	J[76] = 0.064;
	J[81] = 0.064;
	J[85] = -0.58;
	J[89] = -0.58;
	J[93] = -0.58;
	J[98] = 0.172;
	J[103] = 0.172;
	J[108] = 0.172;

   /*** derivatives for constraint 5 ***/

	J[34] = 1.;
	J[37] = 1.;
	J[72] = 0.048;
	J[77] = 0.048;
	J[82] = 0.048;
	J[86] = 0.247;
	J[90] = 0.247;
	J[94] = 0.247;
	J[99] = -0.916;
	J[104] = -0.916;
	J[109] = -0.916;

   /*** derivatives for constraint 6 ***/

	J[73] = 1.;
	J[78] = 1.2;
	J[83] = 0.8;
	J[87] = 2.;
	J[91] = 1.8;
	J[95] = 2.4;
	J[100] = 3.;
	J[105] = 2.7;
	J[110] = 3.2;

   /*** derivatives for constraint 7 ***/

	J[74] = 2.;
	J[79] = 1.8;
	J[84] = 2.2;
	J[88] = 3.;
	J[92] = 3.5;
	J[96] = 2.3;
	J[101] = 3.;
	J[106] = 3.2;
	J[111] = 2.7;

   /*** derivatives for constraint 8 ***/

	J[2] = 356.474947137148;
	J[14] = 53.7083537310174;
	J[29] = 1.;
	J[113] = -0.564264890180399;

   /*** derivatives for constraint 9 ***/

	J[3] = 339.983422262764;
	J[15] = 43.5418249774113;
	J[32] = 1.;
	J[117] = -0.405939876920766;

   /*** derivatives for constraint 10 ***/

	J[4] = 106.946746119538;
	J[16] = 145.018955433089;
	J[35] = 1.;
	J[114] = -0.507117039797071;

   /*** derivatives for constraint 11 ***/

	J[5] = 173.929713444361;
	J[17] = 203.031384299627;
	J[38] = 1.;
	J[118] = -0.578889145413521;

   /*** derivatives for constraint 12 ***/

	J[48] = -3340.8;
	J[59] = -500.;
	J[115] = 1.;

   /*** derivatives for constraint 13 ***/

	J[49] = -371.2;
	J[60] = -4500.;
	J[119] = 1.;

   /*** derivatives for constraint 14 ***/

	J[6] = 0.94;
	J[18] = -0.048;
	J[39] = -0.064;
	J[50] = -1.;
	J[61] = -2.;

   /*** derivatives for constraint 15 ***/

	J[7] = 0.94;
	J[19] = -0.048;
	J[40] = -0.064;
	J[51] = -1.2;
	J[62] = -1.8;

   /*** derivatives for constraint 16 ***/

	J[8] = 0.94;
	J[20] = -0.048;
	J[41] = -0.064;
	J[52] = -0.8;
	J[63] = -2.2;

   /*** derivatives for constraint 17 ***/

	J[21] = -0.247;
	J[42] = 0.58;
	J[53] = -2.;
	J[64] = -3.;

   /*** derivatives for constraint 18 ***/

	J[22] = -0.247;
	J[43] = 0.58;
	J[54] = -1.8;
	J[65] = -3.5;

   /*** derivatives for constraint 19 ***/

	J[23] = -0.247;
	J[44] = 0.58;
	J[55] = -2.4;
	J[66] = -2.3;

   /*** derivatives for constraint 20 ***/

	J[9] = -0.244;
	J[24] = 0.916;
	J[45] = -0.172;
	J[56] = -3.;
	J[67] = -3.;

   /*** derivatives for constraint 21 ***/

	J[10] = -0.244;
	J[25] = 0.916;
	J[46] = -0.172;
	J[57] = -2.7;
	J[68] = -3.2;

   /*** derivatives for constraint 22 ***/

	J[11] = -0.244;
	J[26] = 0.916;
	J[47] = -0.172;
	J[58] = -3.2;
	J[69] = -2.7;
	}
}
#ifdef __cplusplus
	}
#endif
