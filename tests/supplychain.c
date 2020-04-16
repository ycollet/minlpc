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
 fint supplychain_auxcom_[1] = { 6 /* nlc */ };
 fint supplychain_funcom_[130] = {
	27 /* nvar */,
	1 /* nobj */,
	30 /* ncon */,
	96 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	11,
	15,
	19,
	23,
	27,
	31,
	35,
	39,
	43,
	47,
	51,
	55,
	59,
	63,
	67,
	71,
	75,
	79,
	85,
	91,
	97,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	1,
	4,
	7,
	13,
	2,
	5,
	7,
	14,
	3,
	6,
	7,
	15,
	1,
	4,
	8,
	16,
	2,
	5,
	8,
	17,
	3,
	6,
	8,
	18,
	1,
	4,
	9,
	19,
	2,
	5,
	9,
	20,
	3,
	6,
	9,
	21,
	1,
	4,
	10,
	22,
	2,
	5,
	10,
	23,
	3,
	6,
	10,
	24,
	1,
	4,
	11,
	25,
	2,
	5,
	11,
	26,
	3,
	6,
	11,
	27,
	1,
	4,
	12,
	28,
	2,
	5,
	12,
	29,
	3,
	6,
	12,
	30,
	13,
	16,
	19,
	22,
	25,
	28,
	14,
	17,
	20,
	23,
	26,
	29,
	15,
	18,
	21,
	24,
	27,
	30 };

 real supplychain_boundc_[1+54+60] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		28.2665880502051,
		0.,
		28.2665880502051,
		0.,
		28.2665880502051,
		0.,
		349.499642346026,
		0.,
		349.499642346026,
		0.,
		349.499642346026,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		0.};

 real supplychain_x0comn_[27] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real supplychain_pd[6];
static real supplychain_old_x[27];
static int supplychain_xkind = -1;

 static int
supplychain_xcheck(real *x)
{
	real *x1 = supplychain_old_x, *xe = x + 27;
	errno = 0;
	if (supplychain_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	supplychain_xkind = 0;
	return 1;
	}
 real
supplychain_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (supplychain_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 24.5108139399735*x[0];
	rv += 24.5071418162135*x[1];
	rv += 24.5120378589786*x[2];
	rv += 0.2352*x[3];
	rv += 0.2352*x[4];
	rv += 0.2352*x[5];
	rv += 66.5*x[6];
	rv += 522.5*x[7];
	rv += 750.5*x[8];
	rv += 125.6*x[9];
	rv += 612.3*x[10];
	rv += 628.*x[11];
	rv += 69.*x[12];
	rv += 32.2*x[13];
	rv += 151.8*x[14];
	rv += 655.2*x[15];
	rv += 175.5*x[16];
	rv += 468.*x[17];
	rv += 330.*x[18];
	rv += 375.*x[19];
	rv += 75.*x[20];
	rv += 1728.*x[21];
	rv += 1190.4*x[22];
	rv += 172.8*x[23];
	rv += 100.*x[24];
	rv += 100.*x[25];
	rv += 100.*x[26];
	;}

	if (wantfg & 2) {
	g[0] = 24.5108139399735;
	g[1] = 24.5071418162135;
	g[2] = 24.5120378589786;
	g[3] = 0.2352;
	g[4] = 0.2352;
	g[5] = 0.2352;
	g[6] = 66.5;
	g[7] = 522.5;
	g[8] = 750.5;
	g[9] = 125.6;
	g[10] = 612.3;
	g[11] = 628.;
	g[12] = 69.;
	g[13] = 32.2;
	g[14] = 151.8;
	g[15] = 655.2;
	g[16] = 175.5;
	g[17] = 468.;
	g[18] = 330.;
	g[19] = 375.;
	g[20] = 75.;
	g[21] = 1728.;
	g[22] = 1190.4;
	g[23] = 172.8;
	g[24] = 100.;
	g[25] = 100.;
	g[26] = 100.;
	}

	return rv;
}

 void
supplychain_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (supplychain_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[0];
	supplychain_pd[0] = x[0] + x[0];
	v[1] = -v[0];
	t1 = v[1] + 95.*x[6];
	t1 += 157.*x[9];
	t1 += 46.*x[12];
	t1 += 234.*x[15];
	t1 += 75.*x[18];
	t1 += 192.*x[21];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[1];
	supplychain_pd[1] = x[1] + x[1];
	v[1] = -v[0];
	t1 = v[1] + 95.*x[7];
	t1 += 157.*x[10];
	t1 += 46.*x[13];
	t1 += 234.*x[16];
	t1 += 75.*x[19];
	t1 += 192.*x[22];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[2];
	supplychain_pd[2] = x[2] + x[2];
	v[1] = -v[0];
	t1 = v[1] + 95.*x[8];
	t1 += 157.*x[11];
	t1 += 46.*x[14];
	t1 += 234.*x[17];
	t1 += 75.*x[20];
	t1 += 192.*x[23];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] * x[3];
	supplychain_pd[3] = x[3] + x[3];
	v[1] = -v[0];
	t1 = v[1] + 6300.*x[6];
	t1 += 17500.*x[9];
	t1 += 4375.*x[12];
	t1 += 44800.*x[15];
	t1 += 4375.*x[18];
	t1 += 44800.*x[21];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] * x[4];
	supplychain_pd[4] = x[4] + x[4];
	v[1] = -v[0];
	t1 = v[1] + 6300.*x[7];
	t1 += 17500.*x[10];
	t1 += 4375.*x[13];
	t1 += 44800.*x[16];
	t1 += 4375.*x[19];
	t1 += 44800.*x[22];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[5] * x[5];
	supplychain_pd[5] = x[5] + x[5];
	v[1] = -v[0];
	t1 = v[1] + 6300.*x[8];
	t1 += 17500.*x[11];
	t1 += 4375.*x[14];
	t1 += 44800.*x[17];
	t1 += 4375.*x[20];
	t1 += 44800.*x[23];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += x[8];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[9];
	t1 += x[10];
	t1 += x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += x[14];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[15];
	t1 += x[16];
	t1 += x[17];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[18];
	t1 += x[19];
	t1 += x[20];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += x[23];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[6];
	t1 += -x[24];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[7];
	t1 += -x[25];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[8];
	t1 += -x[26];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[9];
	t1 += -x[24];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[10];
	t1 += -x[25];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[11];
	t1 += -x[26];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[12];
	t1 += -x[24];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[13];
	t1 += -x[25];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[14];
	t1 += -x[26];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[15];
	t1 += -x[24];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[16];
	t1 += -x[25];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[17];
	t1 += -x[26];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[18];
	t1 += -x[24];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[19];
	t1 += -x[25];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[20];
	t1 += -x[26];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[21];
	t1 += -x[24];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[22];
	t1 += -x[25];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[23];
	t1 += -x[26];
	c[29] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -supplychain_pd[0];
	J[6] = 95.;
	J[18] = 157.;
	J[30] = 46.;
	J[42] = 234.;
	J[54] = 75.;
	J[66] = 192.;

   /*** derivatives for constraint 2 ***/

	J[1] = -supplychain_pd[1];
	J[10] = 95.;
	J[22] = 157.;
	J[34] = 46.;
	J[46] = 234.;
	J[58] = 75.;
	J[70] = 192.;

   /*** derivatives for constraint 3 ***/

	J[2] = -supplychain_pd[2];
	J[14] = 95.;
	J[26] = 157.;
	J[38] = 46.;
	J[50] = 234.;
	J[62] = 75.;
	J[74] = 192.;

   /*** derivatives for constraint 4 ***/

	J[3] = -supplychain_pd[3];
	J[7] = 6300.;
	J[19] = 17500.;
	J[31] = 4375.;
	J[43] = 44800.;
	J[55] = 4375.;
	J[67] = 44800.;

   /*** derivatives for constraint 5 ***/

	J[4] = -supplychain_pd[4];
	J[11] = 6300.;
	J[23] = 17500.;
	J[35] = 4375.;
	J[47] = 44800.;
	J[59] = 4375.;
	J[71] = 44800.;

   /*** derivatives for constraint 6 ***/

	J[5] = -supplychain_pd[5];
	J[15] = 6300.;
	J[27] = 17500.;
	J[39] = 4375.;
	J[51] = 44800.;
	J[63] = 4375.;
	J[75] = 44800.;

   /*** derivatives for constraint 7 ***/

	J[8] = 1.;
	J[12] = 1.;
	J[16] = 1.;

   /*** derivatives for constraint 8 ***/

	J[20] = 1.;
	J[24] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 9 ***/

	J[32] = 1.;
	J[36] = 1.;
	J[40] = 1.;

   /*** derivatives for constraint 10 ***/

	J[44] = 1.;
	J[48] = 1.;
	J[52] = 1.;

   /*** derivatives for constraint 11 ***/

	J[56] = 1.;
	J[60] = 1.;
	J[64] = 1.;

   /*** derivatives for constraint 12 ***/

	J[68] = 1.;
	J[72] = 1.;
	J[76] = 1.;

   /*** derivatives for constraint 13 ***/

	J[9] = 1.;
	J[78] = -1.;

   /*** derivatives for constraint 14 ***/

	J[13] = 1.;
	J[84] = -1.;

   /*** derivatives for constraint 15 ***/

	J[17] = 1.;
	J[90] = -1.;

   /*** derivatives for constraint 16 ***/

	J[21] = 1.;
	J[79] = -1.;

   /*** derivatives for constraint 17 ***/

	J[25] = 1.;
	J[85] = -1.;

   /*** derivatives for constraint 18 ***/

	J[29] = 1.;
	J[91] = -1.;

   /*** derivatives for constraint 19 ***/

	J[33] = 1.;
	J[80] = -1.;

   /*** derivatives for constraint 20 ***/

	J[37] = 1.;
	J[86] = -1.;

   /*** derivatives for constraint 21 ***/

	J[41] = 1.;
	J[92] = -1.;

   /*** derivatives for constraint 22 ***/

	J[45] = 1.;
	J[81] = -1.;

   /*** derivatives for constraint 23 ***/

	J[49] = 1.;
	J[87] = -1.;

   /*** derivatives for constraint 24 ***/

	J[53] = 1.;
	J[93] = -1.;

   /*** derivatives for constraint 25 ***/

	J[57] = 1.;
	J[82] = -1.;

   /*** derivatives for constraint 26 ***/

	J[61] = 1.;
	J[88] = -1.;

   /*** derivatives for constraint 27 ***/

	J[65] = 1.;
	J[94] = -1.;

   /*** derivatives for constraint 28 ***/

	J[69] = 1.;
	J[83] = -1.;

   /*** derivatives for constraint 29 ***/

	J[73] = 1.;
	J[89] = -1.;

   /*** derivatives for constraint 30 ***/

	J[77] = 1.;
	J[95] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
