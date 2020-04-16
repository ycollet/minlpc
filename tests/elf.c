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
 fint elf_auxcom_[1] = { 27 /* nlc */ };
 fint elf_funcom_[214] = {
	54 /* nvar */,
	1 /* nobj */,
	38 /* ncon */,
	153 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	10,
	19,
	28,
	30,
	32,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	62,
	66,
	70,
	74,
	78,
	82,
	86,
	90,
	94,
	98,
	102,
	106,
	110,
	114,
	118,
	122,
	126,
	130,
	134,
	138,
	142,
	146,
	150,
	154,

	/* rownos */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	25,
	2,
	5,
	8,
	11,
	14,
	17,
	20,
	23,
	26,
	3,
	6,
	9,
	12,
	15,
	18,
	21,
	24,
	27,
	25,
	36,
	26,
	37,
	27,
	38,
	1,
	2,
	3,
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
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	1,
	25,
	28,
	36,
	2,
	26,
	28,
	37,
	3,
	27,
	28,
	38,
	4,
	25,
	29,
	36,
	5,
	26,
	29,
	37,
	6,
	27,
	29,
	38,
	7,
	25,
	30,
	36,
	8,
	26,
	30,
	37,
	9,
	27,
	30,
	38,
	10,
	25,
	31,
	36,
	11,
	26,
	31,
	37,
	12,
	27,
	31,
	38,
	13,
	25,
	32,
	36,
	14,
	26,
	32,
	37,
	15,
	27,
	32,
	38,
	16,
	25,
	33,
	36,
	17,
	26,
	33,
	37,
	18,
	27,
	33,
	38,
	19,
	25,
	34,
	36,
	20,
	26,
	34,
	37,
	21,
	27,
	34,
	38,
	22,
	25,
	35,
	36,
	23,
	26,
	35,
	37,
	24,
	27,
	35,
	38 };

 real elf_boundc_[1+108+76] /* Infinity, variable bounds, constraint bounds */ = {
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
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		-100.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real elf_x0comn_[54] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0.33,
		0. };

 static real elf_pd[24];
static real elf_old_x[54];
static int elf_xkind = -1;

 static int
elf_xcheck(real *x)
{
	real *x1 = elf_old_x, *xe = x + 54;
	errno = 0;
	if (elf_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	elf_xkind = 0;
	return 1;
	}
 real
elf_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (elf_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[6];
	rv += x[7];
	rv += x[8];
	rv += x[9];
	rv += x[10];
	rv += x[11];
	rv += x[12];
	rv += x[13];
	rv += x[14];
	rv += x[15];
	rv += x[16];
	rv += x[17];
	rv += x[18];
	rv += x[19];
	rv += x[20];
	rv += x[21];
	rv += x[22];
	rv += x[23];
	rv += x[24];
	rv += x[25];
	rv += x[26];
	rv += x[27];
	rv += x[28];
	rv += x[29];
	;}

	if (wantfg & 2) {
	g[6] = 1.;
	g[7] = 1.;
	g[8] = 1.;
	g[9] = 1.;
	g[10] = 1.;
	g[11] = 1.;
	g[12] = 1.;
	g[13] = 1.;
	g[14] = 1.;
	g[15] = 1.;
	g[16] = 1.;
	g[17] = 1.;
	g[18] = 1.;
	g[19] = 1.;
	g[20] = 1.;
	g[21] = 1.;
	g[22] = 1.;
	g[23] = 1.;
	g[24] = 1.;
	g[25] = 1.;
	g[26] = 1.;
	g[27] = 1.;
	g[28] = 1.;
	g[29] = 1.;
	}

	return rv;
}

 void
elf_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (elf_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 8. - x[0];
	v[1] = v[0] * v[0];
	elf_pd[0] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[6];
	t1 += -100.*x[30];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = 8. - x[1];
	v[1] = v[0] * v[0];
	elf_pd[1] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[7];
	t1 += -100.*x[31];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = 8. - x[2];
	v[1] = v[0] * v[0];
	elf_pd[2] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[8];
	t1 += -100.*x[32];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = 8.5 - x[0];
	v[1] = v[0] * v[0];
	elf_pd[3] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[9];
	t1 += -100.*x[33];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = 8.5 - x[1];
	v[1] = v[0] * v[0];
	elf_pd[4] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[10];
	t1 += -100.*x[34];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = 8.5 - x[2];
	v[1] = v[0] * v[0];
	elf_pd[5] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[11];
	t1 += -100.*x[35];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = 8.3 - x[0];
	v[1] = v[0] * v[0];
	elf_pd[6] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[12];
	t1 += -100.*x[36];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = 8.3 - x[1];
	v[1] = v[0] * v[0];
	elf_pd[7] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[13];
	t1 += -100.*x[37];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = 8.3 - x[2];
	v[1] = v[0] * v[0];
	elf_pd[8] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[14];
	t1 += -100.*x[38];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = 8.7 - x[0];
	v[1] = v[0] * v[0];
	elf_pd[9] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[15];
	t1 += -100.*x[39];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = 8.7 - x[1];
	v[1] = v[0] * v[0];
	elf_pd[10] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[16];
	t1 += -100.*x[40];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = 8.7 - x[2];
	v[1] = v[0] * v[0];
	elf_pd[11] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[17];
	t1 += -100.*x[41];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = 8.6 - x[0];
	v[1] = v[0] * v[0];
	elf_pd[12] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[18];
	t1 += -100.*x[42];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = 8.6 - x[1];
	v[1] = v[0] * v[0];
	elf_pd[13] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[19];
	t1 += -100.*x[43];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = 8.6 - x[2];
	v[1] = v[0] * v[0];
	elf_pd[14] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[20];
	t1 += -100.*x[44];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = 9. - x[0];
	v[1] = v[0] * v[0];
	elf_pd[15] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[21];
	t1 += -100.*x[45];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = 9. - x[1];
	v[1] = v[0] * v[0];
	elf_pd[16] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[22];
	t1 += -100.*x[46];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = 9. - x[2];
	v[1] = v[0] * v[0];
	elf_pd[17] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[23];
	t1 += -100.*x[47];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = 9.2 - x[0];
	v[1] = v[0] * v[0];
	elf_pd[18] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[24];
	t1 += -100.*x[48];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = 9.2 - x[1];
	v[1] = v[0] * v[0];
	elf_pd[19] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[25];
	t1 += -100.*x[49];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = 9.2 - x[2];
	v[1] = v[0] * v[0];
	elf_pd[20] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[26];
	t1 += -100.*x[50];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = 9.5 - x[0];
	v[1] = v[0] * v[0];
	elf_pd[21] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[27];
	t1 += -100.*x[51];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = 9.5 - x[1];
	v[1] = v[0] * v[0];
	elf_pd[22] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[28];
	t1 += -100.*x[52];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = 9.5 - x[2];
	v[1] = v[0] * v[0];
	elf_pd[23] = v[0] + v[0];
	v[0] = -v[1];
	t1 = v[0] + x[29];
	t1 += -100.*x[53];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[3] * x[0];
	t1 = v[0] + -8.*x[30];
	t1 += -8.5*x[33];
	t1 += -8.3*x[36];
	t1 += -8.7*x[39];
	t1 += -8.6*x[42];
	t1 += -9.*x[45];
	t1 += -9.2*x[48];
	t1 += -9.5*x[51];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[4] * x[1];
	t1 = v[0] + -8.*x[31];
	t1 += -8.5*x[34];
	t1 += -8.3*x[37];
	t1 += -8.7*x[40];
	t1 += -8.6*x[43];
	t1 += -9.*x[46];
	t1 += -9.2*x[49];
	t1 += -9.5*x[52];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[5] * x[2];
	t1 = v[0] + -8.*x[32];
	t1 += -8.5*x[35];
	t1 += -8.3*x[38];
	t1 += -8.7*x[41];
	t1 += -8.6*x[44];
	t1 += -9.*x[47];
	t1 += -9.2*x[50];
	t1 += -9.5*x[53];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[30];
	t1 += x[31];
	t1 += x[32];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[33];
	t1 += x[34];
	t1 += x[35];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[39];
	t1 += x[40];
	t1 += x[41];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[42];
	t1 += x[43];
	t1 += x[44];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += x[47];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[48];
	t1 += x[49];
	t1 += x[50];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[51];
	t1 += x[52];
	t1 += x[53];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[3];
	t1 += -x[30];
	t1 += -x[33];
	t1 += -x[36];
	t1 += -x[39];
	t1 += -x[42];
	t1 += -x[45];
	t1 += -x[48];
	t1 += -x[51];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[4];
	t1 += -x[31];
	t1 += -x[34];
	t1 += -x[37];
	t1 += -x[40];
	t1 += -x[43];
	t1 += -x[46];
	t1 += -x[49];
	t1 += -x[52];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[5];
	t1 += -x[32];
	t1 += -x[35];
	t1 += -x[38];
	t1 += -x[41];
	t1 += -x[44];
	t1 += -x[47];
	t1 += -x[50];
	t1 += -x[53];
	c[37] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = elf_pd[0];
	J[33] = 1.;
	J[57] = -100.;

   /*** derivatives for constraint 2 ***/

	J[9] = elf_pd[1];
	J[34] = 1.;
	J[61] = -100.;

   /*** derivatives for constraint 3 ***/

	J[18] = elf_pd[2];
	J[35] = 1.;
	J[65] = -100.;

   /*** derivatives for constraint 4 ***/

	J[1] = elf_pd[3];
	J[36] = 1.;
	J[69] = -100.;

   /*** derivatives for constraint 5 ***/

	J[10] = elf_pd[4];
	J[37] = 1.;
	J[73] = -100.;

   /*** derivatives for constraint 6 ***/

	J[19] = elf_pd[5];
	J[38] = 1.;
	J[77] = -100.;

   /*** derivatives for constraint 7 ***/

	J[2] = elf_pd[6];
	J[39] = 1.;
	J[81] = -100.;

   /*** derivatives for constraint 8 ***/

	J[11] = elf_pd[7];
	J[40] = 1.;
	J[85] = -100.;

   /*** derivatives for constraint 9 ***/

	J[20] = elf_pd[8];
	J[41] = 1.;
	J[89] = -100.;

   /*** derivatives for constraint 10 ***/

	J[3] = elf_pd[9];
	J[42] = 1.;
	J[93] = -100.;

   /*** derivatives for constraint 11 ***/

	J[12] = elf_pd[10];
	J[43] = 1.;
	J[97] = -100.;

   /*** derivatives for constraint 12 ***/

	J[21] = elf_pd[11];
	J[44] = 1.;
	J[101] = -100.;

   /*** derivatives for constraint 13 ***/

	J[4] = elf_pd[12];
	J[45] = 1.;
	J[105] = -100.;

   /*** derivatives for constraint 14 ***/

	J[13] = elf_pd[13];
	J[46] = 1.;
	J[109] = -100.;

   /*** derivatives for constraint 15 ***/

	J[22] = elf_pd[14];
	J[47] = 1.;
	J[113] = -100.;

   /*** derivatives for constraint 16 ***/

	J[5] = elf_pd[15];
	J[48] = 1.;
	J[117] = -100.;

   /*** derivatives for constraint 17 ***/

	J[14] = elf_pd[16];
	J[49] = 1.;
	J[121] = -100.;

   /*** derivatives for constraint 18 ***/

	J[23] = elf_pd[17];
	J[50] = 1.;
	J[125] = -100.;

   /*** derivatives for constraint 19 ***/

	J[6] = elf_pd[18];
	J[51] = 1.;
	J[129] = -100.;

   /*** derivatives for constraint 20 ***/

	J[15] = elf_pd[19];
	J[52] = 1.;
	J[133] = -100.;

   /*** derivatives for constraint 21 ***/

	J[24] = elf_pd[20];
	J[53] = 1.;
	J[137] = -100.;

   /*** derivatives for constraint 22 ***/

	J[7] = elf_pd[21];
	J[54] = 1.;
	J[141] = -100.;

   /*** derivatives for constraint 23 ***/

	J[16] = elf_pd[22];
	J[55] = 1.;
	J[145] = -100.;

   /*** derivatives for constraint 24 ***/

	J[25] = elf_pd[23];
	J[56] = 1.;
	J[149] = -100.;

   /*** derivatives for constraint 25 ***/

	J[8] = x[3];
	J[27] = x[0];
	J[58] = -8.;
	J[70] = -8.5;
	J[82] = -8.3;
	J[94] = -8.7;
	J[106] = -8.6;
	J[118] = -9.;
	J[130] = -9.2;
	J[142] = -9.5;

   /*** derivatives for constraint 26 ***/

	J[17] = x[4];
	J[29] = x[1];
	J[62] = -8.;
	J[74] = -8.5;
	J[86] = -8.3;
	J[98] = -8.7;
	J[110] = -8.6;
	J[122] = -9.;
	J[134] = -9.2;
	J[146] = -9.5;

   /*** derivatives for constraint 27 ***/

	J[26] = x[5];
	J[31] = x[2];
	J[66] = -8.;
	J[78] = -8.5;
	J[90] = -8.3;
	J[102] = -8.7;
	J[114] = -8.6;
	J[126] = -9.;
	J[138] = -9.2;
	J[150] = -9.5;

   /*** derivatives for constraint 28 ***/

	J[59] = 1.;
	J[63] = 1.;
	J[67] = 1.;

   /*** derivatives for constraint 29 ***/

	J[71] = 1.;
	J[75] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 30 ***/

	J[83] = 1.;
	J[87] = 1.;
	J[91] = 1.;

   /*** derivatives for constraint 31 ***/

	J[95] = 1.;
	J[99] = 1.;
	J[103] = 1.;

   /*** derivatives for constraint 32 ***/

	J[107] = 1.;
	J[111] = 1.;
	J[115] = 1.;

   /*** derivatives for constraint 33 ***/

	J[119] = 1.;
	J[123] = 1.;
	J[127] = 1.;

   /*** derivatives for constraint 34 ***/

	J[131] = 1.;
	J[135] = 1.;
	J[139] = 1.;

   /*** derivatives for constraint 35 ***/

	J[143] = 1.;
	J[147] = 1.;
	J[151] = 1.;

   /*** derivatives for constraint 36 ***/

	J[28] = 1.;
	J[60] = -1.;
	J[72] = -1.;
	J[84] = -1.;
	J[96] = -1.;
	J[108] = -1.;
	J[120] = -1.;
	J[132] = -1.;
	J[144] = -1.;

   /*** derivatives for constraint 37 ***/

	J[30] = 1.;
	J[64] = -1.;
	J[76] = -1.;
	J[88] = -1.;
	J[100] = -1.;
	J[112] = -1.;
	J[124] = -1.;
	J[136] = -1.;
	J[148] = -1.;

   /*** derivatives for constraint 38 ***/

	J[32] = 1.;
	J[68] = -1.;
	J[80] = -1.;
	J[92] = -1.;
	J[104] = -1.;
	J[116] = -1.;
	J[128] = -1.;
	J[140] = -1.;
	J[152] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
