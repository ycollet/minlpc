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
 fint hydro_auxcom_[1] = { 6 /* nlc */ };
 fint hydro_funcom_[98] = {
	31 /* nvar */,
	1 /* nobj */,
	24 /* ncon */,
	60 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	27,
	29,
	31,
	33,
	35,
	37,
	39,
	41,
	43,
	45,
	47,
	49,
	50,
	52,
	54,
	56,
	58,
	60,
	61,

	/* rownos */
	1,
	7,
	19,
	2,
	8,
	20,
	3,
	9,
	21,
	4,
	10,
	22,
	5,
	11,
	23,
	6,
	12,
	24,
	7,
	8,
	9,
	10,
	11,
	12,
	1,
	7,
	2,
	8,
	3,
	9,
	4,
	10,
	5,
	11,
	6,
	12,
	13,
	19,
	14,
	20,
	15,
	21,
	16,
	22,
	17,
	23,
	18,
	24,
	13,
	13,
	14,
	14,
	15,
	15,
	16,
	16,
	17,
	17,
	18,
	18 };

 real hydro_boundc_[1+62+48] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		0.,
		1000.,
		150.,
		1500.,
		150.,
		1500.,
		150.,
		1500.,
		150.,
		1500.,
		150.,
		1500.,
		150.,
		1500.,
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
		100000.,
		100000.,
		60000.,
		120000.,
		60000.,
		120000.,
		60000.,
		120000.,
		60000.,
		120000.,
		60000.,
		120000.,
		60000.,
		120000.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1200.,
		1.7e308,
		1500.,
		1.7e308,
		1100.,
		1.7e308,
		1800.,
		1.7e308,
		950.,
		1.7e308,
		1300.,
		1.7e308,
		24000.,
		24000.,
		24000.,
		24000.,
		24000.,
		24000.,
		24000.,
		24000.,
		24000.,
		24000.,
		24000.,
		24000.,
		330.,
		330.,
		330.,
		330.,
		330.,
		330.,
		330.,
		330.,
		330.,
		330.,
		330.,
		330.};

 real hydro_x0comn_[31] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		150.,
		150.,
		150.,
		150.,
		150.,
		150.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		100000.,
		60000.,
		60000.,
		60000.,
		60000.,
		60000.,
		60000. };

 static real hydro_pd[24];
static real hydro_old_x[31];
static int hydro_xkind = -1;

 static int
hydro_xcheck(real *x)
{
	real *x1 = hydro_old_x, *xe = x + 31;
	errno = 0;
	if (hydro_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	hydro_xkind = 0;
	return 1;
	}
 real
hydro_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (hydro_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	hydro_pd[12] = x[6] * x[6];
	hydro_pd[13] = x[6] + x[6];
	v[0] = 0.13248000000000001 * hydro_pd[12];
	hydro_pd[14] = x[7] * x[7];
	hydro_pd[15] = x[7] + x[7];
	v[1] = 0.13248000000000001 * hydro_pd[14];
	v[0] += v[1];
	hydro_pd[16] = x[8] * x[8];
	hydro_pd[17] = x[8] + x[8];
	v[1] = 0.13248000000000001 * hydro_pd[16];
	v[0] += v[1];
	hydro_pd[18] = x[9] * x[9];
	hydro_pd[19] = x[9] + x[9];
	v[1] = 0.13248000000000001 * hydro_pd[18];
	v[0] += v[1];
	hydro_pd[20] = x[10] * x[10];
	hydro_pd[21] = x[10] + x[10];
	v[1] = 0.13248000000000001 * hydro_pd[20];
	v[0] += v[1];
	hydro_pd[22] = x[11] * x[11];
	hydro_pd[23] = x[11] + x[11];
	v[1] = 0.13248000000000001 * hydro_pd[22];
	v[0] += v[1];
	v[0] += 248400.;
	rv = v[0] + 662.4*x[6];
	rv += 662.4*x[7];
	rv += 662.4*x[8];
	rv += 662.4*x[9];
	rv += 662.4*x[10];
	rv += 662.4*x[11];
	;}

	if (wantfg & 2) {
	g[11] = 0.13248000000000001*hydro_pd[23] + 662.4;
	g[10] = 0.13248000000000001*hydro_pd[21] + 662.4;
	g[9] = 0.13248000000000001*hydro_pd[19] + 662.4;
	g[8] = 0.13248000000000001*hydro_pd[17] + 662.4;
	g[7] = 0.13248000000000001*hydro_pd[15] + 662.4;
	g[6] = 0.13248000000000001*hydro_pd[13] + 662.4;
	}

	return rv;
}

 void
hydro_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (hydro_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	hydro_pd[0] = x[0] * x[0];
	hydro_pd[1] = x[0] + x[0];
	v[0] = -8.e-05 * hydro_pd[0];
	t1 = v[0] + x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	hydro_pd[2] = x[1] * x[1];
	hydro_pd[3] = x[1] + x[1];
	v[0] = -8.e-05 * hydro_pd[2];
	t1 = v[0] + x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	hydro_pd[4] = x[2] * x[2];
	hydro_pd[5] = x[2] + x[2];
	v[0] = -8.e-05 * hydro_pd[4];
	t1 = v[0] + x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	hydro_pd[6] = x[3] * x[3];
	hydro_pd[7] = x[3] + x[3];
	v[0] = -8.e-05 * hydro_pd[6];
	t1 = v[0] + x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	hydro_pd[8] = x[4] * x[4];
	hydro_pd[9] = x[4] + x[4];
	v[0] = -8.e-05 * hydro_pd[8];
	t1 = v[0] + x[16];
	c[4] = t1;

  /***  constraint 6  ***/

	hydro_pd[10] = x[5] * x[5];
	hydro_pd[11] = x[5] + x[5];
	v[0] = -8.e-05 * hydro_pd[10];
	t1 = v[0] + x[17];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[0];
	t1 += x[6];
	t1 += -x[12];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[1];
	t1 += x[7];
	t1 += -x[13];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[2];
	t1 += x[8];
	t1 += -x[14];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[3];
	t1 += x[9];
	t1 += -x[15];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[4];
	t1 += x[10];
	t1 += -x[16];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[5];
	t1 += x[11];
	t1 += -x[17];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 12.*x[18];
	t1 += -x[24];
	t1 += x[25];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 12.*x[19];
	t1 += -x[25];
	t1 += x[26];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 12.*x[20];
	t1 += -x[26];
	t1 += x[27];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 12.*x[21];
	t1 += -x[27];
	t1 += x[28];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = 12.*x[22];
	t1 += -x[28];
	t1 += x[29];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = 12.*x[23];
	t1 += -x[29];
	t1 += x[30];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -4.97*x[0];
	t1 += x[18];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -4.97*x[1];
	t1 += x[19];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -4.97*x[2];
	t1 += x[20];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -4.97*x[3];
	t1 += x[21];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -4.97*x[4];
	t1 += x[22];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -4.97*x[5];
	t1 += x[23];
	c[23] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -8.e-05*hydro_pd[1];
	J[24] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = -8.e-05*hydro_pd[3];
	J[26] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = -8.e-05*hydro_pd[5];
	J[28] = 1.;

   /*** derivatives for constraint 4 ***/

	J[9] = -8.e-05*hydro_pd[7];
	J[30] = 1.;

   /*** derivatives for constraint 5 ***/

	J[12] = -8.e-05*hydro_pd[9];
	J[32] = 1.;

   /*** derivatives for constraint 6 ***/

	J[15] = -8.e-05*hydro_pd[11];
	J[34] = 1.;

   /*** derivatives for constraint 7 ***/

	J[1] = 1.;
	J[18] = 1.;
	J[25] = -1.;

   /*** derivatives for constraint 8 ***/

	J[4] = 1.;
	J[19] = 1.;
	J[27] = -1.;

   /*** derivatives for constraint 9 ***/

	J[7] = 1.;
	J[20] = 1.;
	J[29] = -1.;

   /*** derivatives for constraint 10 ***/

	J[10] = 1.;
	J[21] = 1.;
	J[31] = -1.;

   /*** derivatives for constraint 11 ***/

	J[13] = 1.;
	J[22] = 1.;
	J[33] = -1.;

   /*** derivatives for constraint 12 ***/

	J[16] = 1.;
	J[23] = 1.;
	J[35] = -1.;

   /*** derivatives for constraint 13 ***/

	J[36] = 12.;
	J[48] = -1.;
	J[49] = 1.;

   /*** derivatives for constraint 14 ***/

	J[38] = 12.;
	J[50] = -1.;
	J[51] = 1.;

   /*** derivatives for constraint 15 ***/

	J[40] = 12.;
	J[52] = -1.;
	J[53] = 1.;

   /*** derivatives for constraint 16 ***/

	J[42] = 12.;
	J[54] = -1.;
	J[55] = 1.;

   /*** derivatives for constraint 17 ***/

	J[44] = 12.;
	J[56] = -1.;
	J[57] = 1.;

   /*** derivatives for constraint 18 ***/

	J[46] = 12.;
	J[58] = -1.;
	J[59] = 1.;

   /*** derivatives for constraint 19 ***/

	J[2] = -4.97;
	J[37] = 1.;

   /*** derivatives for constraint 20 ***/

	J[5] = -4.97;
	J[39] = 1.;

   /*** derivatives for constraint 21 ***/

	J[8] = -4.97;
	J[41] = 1.;

   /*** derivatives for constraint 22 ***/

	J[11] = -4.97;
	J[43] = 1.;

   /*** derivatives for constraint 23 ***/

	J[14] = -4.97;
	J[45] = 1.;

   /*** derivatives for constraint 24 ***/

	J[17] = -4.97;
	J[47] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
