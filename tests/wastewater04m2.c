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
 fint wastewater04m2_auxcom_[1] = { 18 /* nlc */ };
 fint wastewater04m2_funcom_[271] = {
	55 /* nvar */,
	1 /* nobj */,
	65 /* ncon */,
	209 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	20,
	25,
	30,
	35,
	39,
	43,
	47,
	51,
	55,
	59,
	62,
	65,
	68,
	71,
	74,
	77,
	80,
	83,
	86,
	89,
	92,
	95,
	98,
	102,
	106,
	110,
	114,
	118,
	122,
	126,
	130,
	133,
	136,
	139,
	142,
	145,
	148,
	151,
	154,
	158,
	162,
	166,
	170,
	174,
	178,
	182,
	186,
	190,
	194,
	198,
	202,
	206,
	210,

	/* rownos */
	1,
	14,
	17,
	21,
	23,
	50,
	51,
	15,
	16,
	18,
	22,
	24,
	52,
	53,
	1,
	3,
	9,
	54,
	58,
	2,
	4,
	10,
	55,
	59,
	5,
	7,
	11,
	56,
	60,
	6,
	8,
	12,
	57,
	61,
	1,
	2,
	13,
	62,
	3,
	4,
	14,
	62,
	5,
	6,
	15,
	63,
	7,
	8,
	16,
	63,
	9,
	10,
	17,
	62,
	11,
	12,
	18,
	63,
	13,
	21,
	23,
	14,
	22,
	23,
	15,
	21,
	24,
	16,
	22,
	24,
	19,
	25,
	46,
	20,
	25,
	47,
	17,
	23,
	25,
	18,
	24,
	25,
	19,
	21,
	42,
	19,
	22,
	43,
	20,
	21,
	44,
	20,
	22,
	45,
	25,
	64,
	65,
	1,
	50,
	54,
	58,
	2,
	51,
	55,
	59,
	3,
	52,
	56,
	58,
	4,
	53,
	57,
	59,
	5,
	50,
	54,
	60,
	6,
	51,
	55,
	61,
	7,
	52,
	56,
	60,
	8,
	53,
	57,
	61,
	26,
	38,
	64,
	27,
	39,
	65,
	28,
	40,
	64,
	29,
	41,
	65,
	9,
	58,
	64,
	10,
	59,
	65,
	11,
	60,
	64,
	12,
	61,
	65,
	26,
	30,
	50,
	54,
	27,
	31,
	51,
	55,
	26,
	32,
	52,
	56,
	27,
	33,
	53,
	57,
	28,
	34,
	50,
	54,
	29,
	35,
	51,
	55,
	28,
	36,
	52,
	56,
	29,
	37,
	53,
	57,
	38,
	39,
	46,
	48,
	40,
	41,
	47,
	49,
	30,
	31,
	42,
	48,
	32,
	33,
	43,
	48,
	34,
	35,
	44,
	49,
	36,
	37,
	45,
	49 };

 real wastewater04m2_boundc_[1+110+130] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		1.e+06,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-40.,
		-40.,
		-40.,
		-40.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-4000.,
		-4000.,
		-800.,
		-800.,
		-600.,
		-600.,
		-8000.,
		-8000.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1.,
		1.,
		1.,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real wastewater04m2_x0comn_[55] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real wastewater04m2_old_x[55];
static int wastewater04m2_xkind = -1;

 static int
wastewater04m2_xcheck(real *x)
{
	real *x1 = wastewater04m2_old_x, *xe = x + 55;
	errno = 0;
	if (wastewater04m2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	wastewater04m2_xkind = 0;
	return 1;
	}
 real
wastewater04m2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (wastewater04m2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[0];
	rv += x[1];
	;}

	if (wantfg & 2) {
	g[0] = 1.;
	g[1] = 1.;
	}

	return rv;
}

 void
wastewater04m2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (wastewater04m2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] * x[6];
	t1 = v[0] + -x[25];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[3] * x[6];
	t1 = v[0] + -x[26];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] * x[7];
	t1 = v[0] + -x[27];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] * x[7];
	t1 = v[0] + -x[28];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] * x[8];
	t1 = v[0] + -x[29];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[5] * x[8];
	t1 = v[0] + -x[30];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[4] * x[9];
	t1 = v[0] + -x[31];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[5] * x[9];
	t1 = v[0] + -x[32];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] * x[10];
	t1 = v[0] + -x[37];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[3] * x[10];
	t1 = v[0] + -x[38];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[4] * x[11];
	t1 = v[0] + -x[39];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[5] * x[11];
	t1 = v[0] + -x[40];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[0] * x[6];
	t1 = v[0] + -x[12];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[0] * x[7];
	t1 = v[0] + -x[13];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[1] * x[8];
	t1 = v[0] + -x[14];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[1] * x[9];
	t1 = v[0] + -x[15];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[0] * x[10];
	t1 = v[0] + -x[18];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[1] * x[11];
	t1 = v[0] + -x[19];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[16];
	t1 += -x[20];
	t1 += -x[21];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[17];
	t1 += -x[22];
	t1 += -x[23];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[0];
	t1 += -x[12];
	t1 += -x[14];
	t1 += -x[20];
	t1 += -x[22];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[1];
	t1 += -x[13];
	t1 += -x[15];
	t1 += -x[21];
	t1 += -x[23];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[0];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[18];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[1];
	t1 += -x[14];
	t1 += -x[15];
	t1 += -x[19];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	t1 += x[24];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[33];
	t1 += -x[41];
	t1 += -x[43];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[34];
	t1 += -x[42];
	t1 += -x[44];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[35];
	t1 += -x[45];
	t1 += -x[47];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[36];
	t1 += -x[46];
	t1 += -x[48];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[41];
	t1 += 4000.*x[51];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[42];
	t1 += 800.*x[51];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[43];
	t1 += 4000.*x[52];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[44];
	t1 += 800.*x[52];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[45];
	t1 += 600.*x[53];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[46];
	t1 += 8000.*x[53];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[47];
	t1 += 600.*x[54];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[48];
	t1 += 8000.*x[54];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[33];
	t1 += 4000.*x[49];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[34];
	t1 += 800.*x[49];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[35];
	t1 += 600.*x[50];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[36];
	t1 += 8000.*x[50];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[20];
	t1 += 40.*x[51];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[21];
	t1 += 40.*x[52];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[22];
	t1 += 40.*x[53];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[23];
	t1 += 40.*x[54];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[16];
	t1 += 40.*x[49];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[17];
	t1 += 40.*x[50];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[49];
	t1 += x[51];
	t1 += x[52];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[50];
	t1 += x[53];
	t1 += x[54];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -200.*x[0];
	t1 += x[25];
	t1 += x[29];
	t1 += x[41];
	t1 += x[45];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -200.*x[0];
	t1 += x[26];
	t1 += x[30];
	t1 += x[42];
	t1 += x[46];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -200.*x[1];
	t1 += x[27];
	t1 += x[31];
	t1 += x[43];
	t1 += x[47];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -200.*x[1];
	t1 += x[28];
	t1 += x[32];
	t1 += x[44];
	t1 += x[48];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[2];
	t1 += 0.05*x[25];
	t1 += 0.05*x[29];
	t1 += 0.05*x[41];
	t1 += 0.05*x[45];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = -x[3];
	t1 += x[26];
	t1 += x[30];
	t1 += x[42];
	t1 += x[46];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = -x[4];
	t1 += x[27];
	t1 += x[31];
	t1 += x[43];
	t1 += x[47];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = -x[5];
	t1 += 0.024*x[28];
	t1 += 0.024*x[32];
	t1 += 0.024*x[44];
	t1 += 0.024*x[48];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[2];
	t1 += -x[25];
	t1 += -x[27];
	t1 += -x[37];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[3];
	t1 += -x[26];
	t1 += -x[28];
	t1 += -x[38];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[4];
	t1 += -x[29];
	t1 += -x[31];
	t1 += -x[39];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[5];
	t1 += -x[30];
	t1 += -x[32];
	t1 += -x[40];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += x[10];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[8];
	t1 += x[9];
	t1 += x[11];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -10.*x[24];
	t1 += x[33];
	t1 += x[35];
	t1 += x[37];
	t1 += x[39];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -10.*x[24];
	t1 += x[34];
	t1 += x[36];
	t1 += x[38];
	t1 += x[40];
	c[64] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[34] = x[2];
	J[14] = x[6];
	J[97] = -1.;

   /*** derivatives for constraint 2 ***/

	J[35] = x[3];
	J[19] = x[6];
	J[101] = -1.;

   /*** derivatives for constraint 3 ***/

	J[38] = x[2];
	J[15] = x[7];
	J[105] = -1.;

   /*** derivatives for constraint 4 ***/

	J[39] = x[3];
	J[20] = x[7];
	J[109] = -1.;

   /*** derivatives for constraint 5 ***/

	J[42] = x[4];
	J[24] = x[8];
	J[113] = -1.;

   /*** derivatives for constraint 6 ***/

	J[43] = x[5];
	J[29] = x[8];
	J[117] = -1.;

   /*** derivatives for constraint 7 ***/

	J[46] = x[4];
	J[25] = x[9];
	J[121] = -1.;

   /*** derivatives for constraint 8 ***/

	J[47] = x[5];
	J[30] = x[9];
	J[125] = -1.;

   /*** derivatives for constraint 9 ***/

	J[50] = x[2];
	J[16] = x[10];
	J[141] = -1.;

   /*** derivatives for constraint 10 ***/

	J[51] = x[3];
	J[21] = x[10];
	J[144] = -1.;

   /*** derivatives for constraint 11 ***/

	J[54] = x[4];
	J[26] = x[11];
	J[147] = -1.;

   /*** derivatives for constraint 12 ***/

	J[55] = x[5];
	J[31] = x[11];
	J[150] = -1.;

   /*** derivatives for constraint 13 ***/

	J[36] = x[0];
	J[0] = x[6];
	J[58] = -1.;

   /*** derivatives for constraint 14 ***/

	J[40] = x[0];
	J[1] = x[7];
	J[61] = -1.;

   /*** derivatives for constraint 15 ***/

	J[44] = x[1];
	J[7] = x[8];
	J[64] = -1.;

   /*** derivatives for constraint 16 ***/

	J[48] = x[1];
	J[8] = x[9];
	J[67] = -1.;

   /*** derivatives for constraint 17 ***/

	J[52] = x[0];
	J[2] = x[10];
	J[76] = -1.;

   /*** derivatives for constraint 18 ***/

	J[56] = x[1];
	J[9] = x[11];
	J[79] = -1.;

   /*** derivatives for constraint 19 ***/

	J[70] = -1.;
	J[82] = -1.;
	J[85] = -1.;

   /*** derivatives for constraint 20 ***/

	J[73] = -1.;
	J[88] = -1.;
	J[91] = -1.;

   /*** derivatives for constraint 21 ***/

	J[3] = 1.;
	J[59] = -1.;
	J[65] = -1.;
	J[83] = -1.;
	J[89] = -1.;

   /*** derivatives for constraint 22 ***/

	J[10] = 1.;
	J[62] = -1.;
	J[68] = -1.;
	J[86] = -1.;
	J[92] = -1.;

   /*** derivatives for constraint 23 ***/

	J[4] = 1.;
	J[60] = -1.;
	J[63] = -1.;
	J[77] = -1.;

   /*** derivatives for constraint 24 ***/

	J[11] = 1.;
	J[66] = -1.;
	J[69] = -1.;
	J[80] = -1.;

   /*** derivatives for constraint 25 ***/

	J[71] = -1.;
	J[74] = -1.;
	J[78] = -1.;
	J[81] = -1.;
	J[94] = 1.;

   /*** derivatives for constraint 26 ***/

	J[129] = -1.;
	J[153] = -1.;
	J[161] = -1.;

   /*** derivatives for constraint 27 ***/

	J[132] = -1.;
	J[157] = -1.;
	J[165] = -1.;

   /*** derivatives for constraint 28 ***/

	J[135] = -1.;
	J[169] = -1.;
	J[177] = -1.;

   /*** derivatives for constraint 29 ***/

	J[138] = -1.;
	J[173] = -1.;
	J[181] = -1.;

   /*** derivatives for constraint 30 ***/

	J[154] = -1.;
	J[193] = 4000.;

   /*** derivatives for constraint 31 ***/

	J[158] = -1.;
	J[194] = 800.;

   /*** derivatives for constraint 32 ***/

	J[162] = -1.;
	J[197] = 4000.;

   /*** derivatives for constraint 33 ***/

	J[166] = -1.;
	J[198] = 800.;

   /*** derivatives for constraint 34 ***/

	J[170] = -1.;
	J[201] = 600.;

   /*** derivatives for constraint 35 ***/

	J[174] = -1.;
	J[202] = 8000.;

   /*** derivatives for constraint 36 ***/

	J[178] = -1.;
	J[205] = 600.;

   /*** derivatives for constraint 37 ***/

	J[182] = -1.;
	J[206] = 8000.;

   /*** derivatives for constraint 38 ***/

	J[130] = -1.;
	J[185] = 4000.;

   /*** derivatives for constraint 39 ***/

	J[133] = -1.;
	J[186] = 800.;

   /*** derivatives for constraint 40 ***/

	J[136] = -1.;
	J[189] = 600.;

   /*** derivatives for constraint 41 ***/

	J[139] = -1.;
	J[190] = 8000.;

   /*** derivatives for constraint 42 ***/

	J[84] = -1.;
	J[195] = 40.;

   /*** derivatives for constraint 43 ***/

	J[87] = -1.;
	J[199] = 40.;

   /*** derivatives for constraint 44 ***/

	J[90] = -1.;
	J[203] = 40.;

   /*** derivatives for constraint 45 ***/

	J[93] = -1.;
	J[207] = 40.;

   /*** derivatives for constraint 46 ***/

	J[72] = -1.;
	J[187] = 40.;

   /*** derivatives for constraint 47 ***/

	J[75] = -1.;
	J[191] = 40.;

   /*** derivatives for constraint 48 ***/

	J[188] = 1.;
	J[196] = 1.;
	J[200] = 1.;

   /*** derivatives for constraint 49 ***/

	J[192] = 1.;
	J[204] = 1.;
	J[208] = 1.;

   /*** derivatives for constraint 50 ***/

	J[5] = -200.;
	J[98] = 1.;
	J[114] = 1.;
	J[155] = 1.;
	J[171] = 1.;

   /*** derivatives for constraint 51 ***/

	J[6] = -200.;
	J[102] = 1.;
	J[118] = 1.;
	J[159] = 1.;
	J[175] = 1.;

   /*** derivatives for constraint 52 ***/

	J[12] = -200.;
	J[106] = 1.;
	J[122] = 1.;
	J[163] = 1.;
	J[179] = 1.;

   /*** derivatives for constraint 53 ***/

	J[13] = -200.;
	J[110] = 1.;
	J[126] = 1.;
	J[167] = 1.;
	J[183] = 1.;

   /*** derivatives for constraint 54 ***/

	J[17] = -1.;
	J[99] = 0.05;
	J[115] = 0.05;
	J[156] = 0.05;
	J[172] = 0.05;

   /*** derivatives for constraint 55 ***/

	J[22] = -1.;
	J[103] = 1.;
	J[119] = 1.;
	J[160] = 1.;
	J[176] = 1.;

   /*** derivatives for constraint 56 ***/

	J[27] = -1.;
	J[107] = 1.;
	J[123] = 1.;
	J[164] = 1.;
	J[180] = 1.;

   /*** derivatives for constraint 57 ***/

	J[32] = -1.;
	J[111] = 0.024;
	J[127] = 0.024;
	J[168] = 0.024;
	J[184] = 0.024;

   /*** derivatives for constraint 58 ***/

	J[18] = 1.;
	J[100] = -1.;
	J[108] = -1.;
	J[142] = -1.;

   /*** derivatives for constraint 59 ***/

	J[23] = 1.;
	J[104] = -1.;
	J[112] = -1.;
	J[145] = -1.;

   /*** derivatives for constraint 60 ***/

	J[28] = 1.;
	J[116] = -1.;
	J[124] = -1.;
	J[148] = -1.;

   /*** derivatives for constraint 61 ***/

	J[33] = 1.;
	J[120] = -1.;
	J[128] = -1.;
	J[151] = -1.;

   /*** derivatives for constraint 62 ***/

	J[37] = 1.;
	J[41] = 1.;
	J[53] = 1.;

   /*** derivatives for constraint 63 ***/

	J[45] = 1.;
	J[49] = 1.;
	J[57] = 1.;

   /*** derivatives for constraint 64 ***/

	J[95] = -10.;
	J[131] = 1.;
	J[137] = 1.;
	J[143] = 1.;
	J[149] = 1.;

   /*** derivatives for constraint 65 ***/

	J[96] = -10.;
	J[134] = 1.;
	J[140] = 1.;
	J[146] = 1.;
	J[152] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
