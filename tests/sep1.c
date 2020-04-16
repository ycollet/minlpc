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
 fint sep1_auxcom_[1] = { 6 /* nlc */ };
 fint sep1_funcom_[124] = {
	29 /* nvar */,
	1 /* nobj */,
	31 /* ncon */,
	88 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	13,
	15,
	17,
	20,
	23,
	26,
	29,
	31,
	33,
	39,
	45,
	51,
	57,
	60,
	63,
	65,
	67,
	69,
	71,
	73,
	75,
	77,
	79,
	81,
	83,
	86,
	89,

	/* rownos */
	1,
	3,
	5,
	7,
	9,
	2,
	4,
	6,
	8,
	10,
	1,
	2,
	3,
	4,
	5,
	6,
	19,
	27,
	29,
	20,
	27,
	29,
	21,
	28,
	30,
	22,
	28,
	30,
	7,
	8,
	7,
	8,
	1,
	9,
	11,
	13,
	23,
	24,
	2,
	10,
	12,
	14,
	23,
	24,
	3,
	9,
	15,
	17,
	25,
	26,
	4,
	10,
	16,
	18,
	25,
	26,
	5,
	9,
	19,
	6,
	10,
	20,
	9,
	21,
	10,
	22,
	11,
	19,
	12,
	20,
	13,
	21,
	14,
	22,
	15,
	19,
	16,
	20,
	17,
	21,
	18,
	22,
	25,
	26,
	31,
	23,
	24,
	31 };

 real sep1_boundc_[1+58+62] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		50.,
		0.,
		50.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		25.,
		0.,
		25.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		50.,
		0.,
		1.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.7e308,
		15.,
		-1.7e308,
		18.,
		1.,
		1.7e308};

 real sep1_x0comn_[29] = {
		0.,
		0.,
		0.1,
		0.1,
		0.1,
		10.,
		2.5,
		4.,
		14.,
		8.,
		25.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.5 };

static real sep1_old_x[29];
static int sep1_xkind = -1;

 static int
sep1_xcheck(real *x)
{
	real *x1 = sep1_old_x, *xe = x + 29;
	errno = 0;
	if (sep1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sep1_xkind = 0;
	return 1;
	}
 real
sep1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sep1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -35.*x[5];
	rv += -30.*x[8];
	rv += 10.*x[9];
	rv += 8.*x[10];
	rv += x[11];
	rv += x[12];
	rv += 4.*x[13];
	rv += 4.*x[14];
	rv += 50.*x[27];
	rv += 2.*x[28];
	;}

	if (wantfg & 2) {
	g[5] = -35.;
	g[8] = -30.;
	g[9] = 10.;
	g[10] = 8.;
	g[11] = 1.;
	g[12] = 1.;
	g[13] = 4.;
	g[14] = 4.;
	g[27] = 50.;
	g[28] = 2.;
	}

	return rv;
}

 void
sep1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (sep1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[11];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[2] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[12];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[3] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[13];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[14];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] * x[0];
	v[1] = -v[0];
	t1 = v[1] + x[15];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[4] * x[1];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += -0.55*x[9];
	t1 += -0.5*x[10];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[1];
	t1 += -0.45*x[9];
	t1 += -0.5*x[10];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[0];
	t1 += x[11];
	t1 += x[13];
	t1 += x[15];
	t1 += x[17];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[1];
	t1 += x[12];
	t1 += x[14];
	t1 += x[16];
	t1 += x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -0.85*x[11];
	t1 += x[19];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -0.2*x[12];
	t1 += x[20];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -0.15*x[11];
	t1 += x[21];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -0.8*x[12];
	t1 += x[22];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -0.975*x[13];
	t1 += x[23];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -0.05*x[14];
	t1 += x[24];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -0.025*x[13];
	t1 += x[25];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -0.95*x[14];
	t1 += x[26];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[5];
	t1 += -x[15];
	t1 += -x[19];
	t1 += -x[23];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[6];
	t1 += -x[16];
	t1 += -x[20];
	t1 += -x[24];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[7];
	t1 += -x[17];
	t1 += -x[21];
	t1 += -x[25];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[8];
	t1 += -x[18];
	t1 += -x[22];
	t1 += -x[26];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[11];
	t1 += x[12];
	t1 += -2.5*x[28];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[11];
	t1 += x[12];
	t1 += -25.*x[28];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[13];
	t1 += x[14];
	t1 += -2.5*x[27];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[13];
	t1 += x[14];
	t1 += -25.*x[27];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[5];
	t1 += -4.*x[6];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -3.*x[7];
	t1 += x[8];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[5];
	t1 += x[6];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[7];
	t1 += x[8];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[27];
	t1 += x[28];
	c[30] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -x[2];
	J[10] = -x[0];
	J[32] = 1.;

   /*** derivatives for constraint 2 ***/

	J[5] = -x[2];
	J[11] = -x[1];
	J[38] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = -x[3];
	J[12] = -x[0];
	J[44] = 1.;

   /*** derivatives for constraint 4 ***/

	J[6] = -x[3];
	J[13] = -x[1];
	J[50] = 1.;

   /*** derivatives for constraint 5 ***/

	J[2] = -x[4];
	J[14] = -x[0];
	J[56] = 1.;

   /*** derivatives for constraint 6 ***/

	J[7] = -x[4];
	J[15] = -x[1];
	J[59] = 1.;

   /*** derivatives for constraint 7 ***/

	J[3] = 1.;
	J[28] = -0.55;
	J[30] = -0.5;

   /*** derivatives for constraint 8 ***/

	J[8] = 1.;
	J[29] = -0.45;
	J[31] = -0.5;

   /*** derivatives for constraint 9 ***/

	J[4] = -1.;
	J[33] = 1.;
	J[45] = 1.;
	J[57] = 1.;
	J[62] = 1.;

   /*** derivatives for constraint 10 ***/

	J[9] = -1.;
	J[39] = 1.;
	J[51] = 1.;
	J[60] = 1.;
	J[64] = 1.;

   /*** derivatives for constraint 11 ***/

	J[34] = -0.85;
	J[66] = 1.;

   /*** derivatives for constraint 12 ***/

	J[40] = -0.2;
	J[68] = 1.;

   /*** derivatives for constraint 13 ***/

	J[35] = -0.15;
	J[70] = 1.;

   /*** derivatives for constraint 14 ***/

	J[41] = -0.8;
	J[72] = 1.;

   /*** derivatives for constraint 15 ***/

	J[46] = -0.975;
	J[74] = 1.;

   /*** derivatives for constraint 16 ***/

	J[52] = -0.05;
	J[76] = 1.;

   /*** derivatives for constraint 17 ***/

	J[47] = -0.025;
	J[78] = 1.;

   /*** derivatives for constraint 18 ***/

	J[53] = -0.95;
	J[80] = 1.;

   /*** derivatives for constraint 19 ***/

	J[16] = 1.;
	J[58] = -1.;
	J[67] = -1.;
	J[75] = -1.;

   /*** derivatives for constraint 20 ***/

	J[19] = 1.;
	J[61] = -1.;
	J[69] = -1.;
	J[77] = -1.;

   /*** derivatives for constraint 21 ***/

	J[22] = 1.;
	J[63] = -1.;
	J[71] = -1.;
	J[79] = -1.;

   /*** derivatives for constraint 22 ***/

	J[25] = 1.;
	J[65] = -1.;
	J[73] = -1.;
	J[81] = -1.;

   /*** derivatives for constraint 23 ***/

	J[36] = 1.;
	J[42] = 1.;
	J[85] = -2.5;

   /*** derivatives for constraint 24 ***/

	J[37] = 1.;
	J[43] = 1.;
	J[86] = -25.;

   /*** derivatives for constraint 25 ***/

	J[48] = 1.;
	J[54] = 1.;
	J[82] = -2.5;

   /*** derivatives for constraint 26 ***/

	J[49] = 1.;
	J[55] = 1.;
	J[83] = -25.;

   /*** derivatives for constraint 27 ***/

	J[17] = 1.;
	J[20] = -4.;

   /*** derivatives for constraint 28 ***/

	J[23] = -3.;
	J[26] = 1.;

   /*** derivatives for constraint 29 ***/

	J[18] = 1.;
	J[21] = 1.;

   /*** derivatives for constraint 30 ***/

	J[24] = 1.;
	J[27] = 1.;

   /*** derivatives for constraint 31 ***/

	J[84] = 1.;
	J[87] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
