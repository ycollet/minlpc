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
 fint flay06m_auxcom_[1] = { 6 /* nlc */ };
 fint flay06m_funcom_[441] = {
	86 /* nvar */,
	1 /* nobj */,
	93 /* ncon */,
	348 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	22,
	29,
	36,
	43,
	54,
	65,
	76,
	87,
	98,
	109,
	120,
	131,
	142,
	153,
	164,
	175,
	182,
	189,
	196,
	203,
	210,
	217,
	223,
	229,
	231,
	233,
	235,
	237,
	239,
	241,
	243,
	245,
	247,
	249,
	251,
	253,
	255,
	257,
	259,
	261,
	263,
	265,
	267,
	269,
	271,
	273,
	275,
	277,
	279,
	281,
	283,
	285,
	287,
	289,
	291,
	293,
	295,
	297,
	299,
	301,
	303,
	305,
	307,
	309,
	311,
	313,
	315,
	317,
	319,
	321,
	323,
	325,
	327,
	329,
	331,
	333,
	335,
	337,
	339,
	341,
	343,
	345,
	347,
	349,

	/* rownos */
	1,
	13,
	49,
	50,
	51,
	52,
	53,
	2,
	14,
	54,
	55,
	56,
	57,
	64,
	3,
	15,
	58,
	59,
	60,
	65,
	69,
	4,
	16,
	61,
	62,
	66,
	70,
	73,
	5,
	17,
	63,
	67,
	71,
	74,
	76,
	6,
	18,
	68,
	72,
	75,
	77,
	78,
	7,
	19,
	20,
	21,
	22,
	23,
	34,
	35,
	36,
	37,
	38,
	8,
	19,
	24,
	25,
	26,
	27,
	34,
	39,
	40,
	41,
	42,
	9,
	20,
	24,
	28,
	29,
	30,
	35,
	39,
	43,
	44,
	45,
	10,
	21,
	25,
	28,
	31,
	32,
	36,
	40,
	43,
	46,
	47,
	11,
	22,
	26,
	29,
	31,
	33,
	37,
	41,
	44,
	46,
	48,
	12,
	23,
	27,
	30,
	32,
	33,
	38,
	42,
	45,
	47,
	48,
	13,
	49,
	50,
	51,
	52,
	53,
	64,
	65,
	66,
	67,
	68,
	14,
	49,
	54,
	55,
	56,
	57,
	64,
	69,
	70,
	71,
	72,
	15,
	50,
	54,
	58,
	59,
	60,
	65,
	69,
	73,
	74,
	75,
	16,
	51,
	55,
	58,
	61,
	62,
	66,
	70,
	73,
	76,
	77,
	17,
	52,
	56,
	59,
	61,
	63,
	67,
	71,
	74,
	76,
	78,
	18,
	53,
	57,
	60,
	62,
	63,
	68,
	72,
	75,
	77,
	78,
	1,
	7,
	19,
	20,
	21,
	22,
	23,
	2,
	8,
	24,
	25,
	26,
	27,
	34,
	3,
	9,
	28,
	29,
	30,
	35,
	39,
	4,
	10,
	31,
	32,
	36,
	40,
	43,
	5,
	11,
	33,
	37,
	41,
	44,
	46,
	6,
	12,
	38,
	42,
	45,
	47,
	48,
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
	79,
	20,
	80,
	21,
	81,
	22,
	82,
	23,
	83,
	24,
	84,
	25,
	85,
	26,
	86,
	27,
	87,
	28,
	88,
	29,
	89,
	30,
	90,
	31,
	91,
	32,
	92,
	33,
	93,
	34,
	79,
	35,
	80,
	36,
	81,
	37,
	82,
	38,
	83,
	39,
	84,
	40,
	85,
	41,
	86,
	42,
	87,
	43,
	88,
	44,
	89,
	45,
	90,
	46,
	91,
	47,
	92,
	48,
	93,
	49,
	79,
	50,
	80,
	51,
	81,
	52,
	82,
	53,
	83,
	54,
	84,
	55,
	85,
	56,
	86,
	57,
	87,
	58,
	88,
	59,
	89,
	60,
	90,
	61,
	91,
	62,
	92,
	63,
	93,
	64,
	79,
	65,
	80,
	66,
	81,
	67,
	82,
	68,
	83,
	69,
	84,
	70,
	85,
	71,
	86,
	72,
	87,
	73,
	88,
	74,
	89,
	75,
	90,
	76,
	91,
	77,
	92,
	78,
	93 };

 real flay06m_boundc_[1+172+186] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		40.,
		1.,
		50.,
		1.,
		60.,
		1.,
		35.,
		1.,
		75.,
		1.,
		20.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		0.,
		29.,
		1.,
		40.,
		1.,
		50.,
		1.,
		60.,
		1.,
		35.,
		1.,
		75.,
		1.,
		20.,
		0.,
		30.,
		0.,
		30.,
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
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		89.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		49.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		49.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		49.,
		-1.7e308,
		104.,
		-1.7e308,
		49.,
		-1.7e308,
		49.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		69.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		89.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		79.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		49.,
		-1.7e308,
		89.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		49.,
		-1.7e308,
		64.,
		-1.7e308,
		104.,
		-1.7e308,
		49.,
		-1.7e308,
		104.,
		-1.7e308,
		49.,
		-1.7e308,
		49.,
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
		1.};

 real flay06m_x0comn_[86] = {
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real flay06m_pd[6];
static real flay06m_old_x[86];
static int flay06m_xkind = -1;

 static int
flay06m_xcheck(real *x)
{
	real *x1 = flay06m_old_x, *xe = x + 86;
	errno = 0;
	if (flay06m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	flay06m_xkind = 0;
	return 1;
	}
 real
flay06m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (flay06m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 2.*x[24];
	rv += 2.*x[25];
	;}

	if (wantfg & 2) {
	g[24] = 2.;
	g[25] = 2.;
	}

	return rv;
}

 void
flay06m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (flay06m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	if (x[0] == 0.) {
	zerdiv_(&x[0]);	}
	v[0] = 40. / x[0];
	flay06m_pd[0] = -v[0] / x[0];
	t1 = v[0] + -x[18];
	c[0] = t1;

  /***  constraint 2  ***/

	if (x[1] == 0.) {
	zerdiv_(&x[1]);	}
	v[0] = 50. / x[1];
	flay06m_pd[1] = -v[0] / x[1];
	t1 = v[0] + -x[19];
	c[1] = t1;

  /***  constraint 3  ***/

	if (x[2] == 0.) {
	zerdiv_(&x[2]);	}
	v[0] = 60. / x[2];
	flay06m_pd[2] = -v[0] / x[2];
	t1 = v[0] + -x[20];
	c[2] = t1;

  /***  constraint 4  ***/

	if (x[3] == 0.) {
	zerdiv_(&x[3]);	}
	v[0] = 35. / x[3];
	flay06m_pd[3] = -v[0] / x[3];
	t1 = v[0] + -x[21];
	c[3] = t1;

  /***  constraint 5  ***/

	if (x[4] == 0.) {
	zerdiv_(&x[4]);	}
	v[0] = 75. / x[4];
	flay06m_pd[4] = -v[0] / x[4];
	t1 = v[0] + -x[22];
	c[4] = t1;

  /***  constraint 6  ***/

	if (x[5] == 0.) {
	zerdiv_(&x[5]);	}
	v[0] = 20. / x[5];
	flay06m_pd[5] = -v[0] / x[5];
	t1 = v[0] + -x[23];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[6];
	t1 += -x[18];
	t1 += x[24];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[7];
	t1 += -x[19];
	t1 += x[24];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[8];
	t1 += -x[20];
	t1 += x[24];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[9];
	t1 += -x[21];
	t1 += x[24];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[10];
	t1 += -x[22];
	t1 += x[24];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[11];
	t1 += -x[23];
	t1 += x[24];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[0];
	t1 += -x[12];
	t1 += x[25];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[1];
	t1 += -x[13];
	t1 += x[25];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[2];
	t1 += -x[14];
	t1 += x[25];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[3];
	t1 += -x[15];
	t1 += x[25];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[4];
	t1 += -x[16];
	t1 += x[25];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[5];
	t1 += -x[17];
	t1 += x[25];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[18];
	t1 += 69.*x[26];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[6];
	t1 += -x[8];
	t1 += x[18];
	t1 += 69.*x[27];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[6];
	t1 += -x[9];
	t1 += x[18];
	t1 += 69.*x[28];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[6];
	t1 += -x[10];
	t1 += x[18];
	t1 += 69.*x[29];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[6];
	t1 += -x[11];
	t1 += x[18];
	t1 += 69.*x[30];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += x[19];
	t1 += 79.*x[31];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += x[19];
	t1 += 79.*x[32];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[7];
	t1 += -x[10];
	t1 += x[19];
	t1 += 79.*x[33];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[7];
	t1 += -x[11];
	t1 += x[19];
	t1 += 79.*x[34];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += x[20];
	t1 += 89.*x[35];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[8];
	t1 += -x[10];
	t1 += x[20];
	t1 += 89.*x[36];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[8];
	t1 += -x[11];
	t1 += x[20];
	t1 += 89.*x[37];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[9];
	t1 += -x[10];
	t1 += x[21];
	t1 += 64.*x[38];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[9];
	t1 += -x[11];
	t1 += x[21];
	t1 += 64.*x[39];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[10];
	t1 += -x[11];
	t1 += x[22];
	t1 += 104.*x[40];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[19];
	t1 += 79.*x[41];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += x[20];
	t1 += 89.*x[42];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[6];
	t1 += x[9];
	t1 += x[21];
	t1 += 64.*x[43];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[6];
	t1 += x[10];
	t1 += x[22];
	t1 += 104.*x[44];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[6];
	t1 += x[11];
	t1 += x[23];
	t1 += 49.*x[45];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += x[20];
	t1 += 89.*x[46];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += x[21];
	t1 += 64.*x[47];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[7];
	t1 += x[10];
	t1 += x[22];
	t1 += 104.*x[48];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[7];
	t1 += x[11];
	t1 += x[23];
	t1 += 49.*x[49];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += x[21];
	t1 += 64.*x[50];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[8];
	t1 += x[10];
	t1 += x[22];
	t1 += 104.*x[51];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[8];
	t1 += x[11];
	t1 += x[23];
	t1 += 49.*x[52];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[9];
	t1 += x[10];
	t1 += x[22];
	t1 += 104.*x[53];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[9];
	t1 += x[11];
	t1 += x[23];
	t1 += 49.*x[54];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[10];
	t1 += x[11];
	t1 += x[23];
	t1 += 49.*x[55];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[0];
	t1 += x[12];
	t1 += -x[13];
	t1 += 69.*x[56];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[0];
	t1 += x[12];
	t1 += -x[14];
	t1 += 69.*x[57];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[0];
	t1 += x[12];
	t1 += -x[15];
	t1 += 69.*x[58];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[0];
	t1 += x[12];
	t1 += -x[16];
	t1 += 69.*x[59];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[0];
	t1 += x[12];
	t1 += -x[17];
	t1 += 69.*x[60];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[1];
	t1 += x[13];
	t1 += -x[14];
	t1 += 79.*x[61];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[1];
	t1 += x[13];
	t1 += -x[15];
	t1 += 79.*x[62];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[1];
	t1 += x[13];
	t1 += -x[16];
	t1 += 79.*x[63];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[1];
	t1 += x[13];
	t1 += -x[17];
	t1 += 79.*x[64];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[2];
	t1 += x[14];
	t1 += -x[15];
	t1 += 89.*x[65];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[2];
	t1 += x[14];
	t1 += -x[16];
	t1 += 89.*x[66];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[2];
	t1 += x[14];
	t1 += -x[17];
	t1 += 89.*x[67];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[3];
	t1 += x[15];
	t1 += -x[16];
	t1 += 64.*x[68];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[3];
	t1 += x[15];
	t1 += -x[17];
	t1 += 64.*x[69];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[4];
	t1 += x[16];
	t1 += -x[17];
	t1 += 104.*x[70];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[1];
	t1 += -x[12];
	t1 += x[13];
	t1 += 79.*x[71];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[2];
	t1 += -x[12];
	t1 += x[14];
	t1 += 89.*x[72];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[3];
	t1 += -x[12];
	t1 += x[15];
	t1 += 64.*x[73];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[4];
	t1 += -x[12];
	t1 += x[16];
	t1 += 104.*x[74];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[5];
	t1 += -x[12];
	t1 += x[17];
	t1 += 49.*x[75];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[2];
	t1 += -x[13];
	t1 += x[14];
	t1 += 89.*x[76];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[3];
	t1 += -x[13];
	t1 += x[15];
	t1 += 64.*x[77];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[4];
	t1 += -x[13];
	t1 += x[16];
	t1 += 104.*x[78];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[5];
	t1 += -x[13];
	t1 += x[17];
	t1 += 49.*x[79];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[3];
	t1 += -x[14];
	t1 += x[15];
	t1 += 64.*x[80];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[4];
	t1 += -x[14];
	t1 += x[16];
	t1 += 104.*x[81];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[5];
	t1 += -x[14];
	t1 += x[17];
	t1 += 49.*x[82];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[4];
	t1 += -x[15];
	t1 += x[16];
	t1 += 104.*x[83];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[5];
	t1 += -x[15];
	t1 += x[17];
	t1 += 49.*x[84];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[5];
	t1 += -x[16];
	t1 += x[17];
	t1 += 49.*x[85];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[26];
	t1 += x[41];
	t1 += x[56];
	t1 += x[71];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[27];
	t1 += x[42];
	t1 += x[57];
	t1 += x[72];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[28];
	t1 += x[43];
	t1 += x[58];
	t1 += x[73];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[29];
	t1 += x[44];
	t1 += x[59];
	t1 += x[74];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[30];
	t1 += x[45];
	t1 += x[60];
	t1 += x[75];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[31];
	t1 += x[46];
	t1 += x[61];
	t1 += x[76];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[32];
	t1 += x[47];
	t1 += x[62];
	t1 += x[77];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[33];
	t1 += x[48];
	t1 += x[63];
	t1 += x[78];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[34];
	t1 += x[49];
	t1 += x[64];
	t1 += x[79];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[35];
	t1 += x[50];
	t1 += x[65];
	t1 += x[80];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[36];
	t1 += x[51];
	t1 += x[66];
	t1 += x[81];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[37];
	t1 += x[52];
	t1 += x[67];
	t1 += x[82];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[38];
	t1 += x[53];
	t1 += x[68];
	t1 += x[83];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[39];
	t1 += x[54];
	t1 += x[69];
	t1 += x[84];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[40];
	t1 += x[55];
	t1 += x[70];
	t1 += x[85];
	c[92] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = flay06m_pd[0];
	J[174] = -1.;

   /*** derivatives for constraint 2 ***/

	J[7] = flay06m_pd[1];
	J[181] = -1.;

   /*** derivatives for constraint 3 ***/

	J[14] = flay06m_pd[2];
	J[188] = -1.;

   /*** derivatives for constraint 4 ***/

	J[21] = flay06m_pd[3];
	J[195] = -1.;

   /*** derivatives for constraint 5 ***/

	J[28] = flay06m_pd[4];
	J[202] = -1.;

   /*** derivatives for constraint 6 ***/

	J[35] = flay06m_pd[5];
	J[209] = -1.;

   /*** derivatives for constraint 7 ***/

	J[42] = -1.;
	J[175] = -1.;
	J[216] = 1.;

   /*** derivatives for constraint 8 ***/

	J[53] = -1.;
	J[182] = -1.;
	J[217] = 1.;

   /*** derivatives for constraint 9 ***/

	J[64] = -1.;
	J[189] = -1.;
	J[218] = 1.;

   /*** derivatives for constraint 10 ***/

	J[75] = -1.;
	J[196] = -1.;
	J[219] = 1.;

   /*** derivatives for constraint 11 ***/

	J[86] = -1.;
	J[203] = -1.;
	J[220] = 1.;

   /*** derivatives for constraint 12 ***/

	J[97] = -1.;
	J[210] = -1.;
	J[221] = 1.;

   /*** derivatives for constraint 13 ***/

	J[1] = -1.;
	J[108] = -1.;
	J[222] = 1.;

   /*** derivatives for constraint 14 ***/

	J[8] = -1.;
	J[119] = -1.;
	J[223] = 1.;

   /*** derivatives for constraint 15 ***/

	J[15] = -1.;
	J[130] = -1.;
	J[224] = 1.;

   /*** derivatives for constraint 16 ***/

	J[22] = -1.;
	J[141] = -1.;
	J[225] = 1.;

   /*** derivatives for constraint 17 ***/

	J[29] = -1.;
	J[152] = -1.;
	J[226] = 1.;

   /*** derivatives for constraint 18 ***/

	J[36] = -1.;
	J[163] = -1.;
	J[227] = 1.;

   /*** derivatives for constraint 19 ***/

	J[43] = 1.;
	J[54] = -1.;
	J[176] = 1.;
	J[228] = 69.;

   /*** derivatives for constraint 20 ***/

	J[44] = 1.;
	J[65] = -1.;
	J[177] = 1.;
	J[230] = 69.;

   /*** derivatives for constraint 21 ***/

	J[45] = 1.;
	J[76] = -1.;
	J[178] = 1.;
	J[232] = 69.;

   /*** derivatives for constraint 22 ***/

	J[46] = 1.;
	J[87] = -1.;
	J[179] = 1.;
	J[234] = 69.;

   /*** derivatives for constraint 23 ***/

	J[47] = 1.;
	J[98] = -1.;
	J[180] = 1.;
	J[236] = 69.;

   /*** derivatives for constraint 24 ***/

	J[55] = 1.;
	J[66] = -1.;
	J[183] = 1.;
	J[238] = 79.;

   /*** derivatives for constraint 25 ***/

	J[56] = 1.;
	J[77] = -1.;
	J[184] = 1.;
	J[240] = 79.;

   /*** derivatives for constraint 26 ***/

	J[57] = 1.;
	J[88] = -1.;
	J[185] = 1.;
	J[242] = 79.;

   /*** derivatives for constraint 27 ***/

	J[58] = 1.;
	J[99] = -1.;
	J[186] = 1.;
	J[244] = 79.;

   /*** derivatives for constraint 28 ***/

	J[67] = 1.;
	J[78] = -1.;
	J[190] = 1.;
	J[246] = 89.;

   /*** derivatives for constraint 29 ***/

	J[68] = 1.;
	J[89] = -1.;
	J[191] = 1.;
	J[248] = 89.;

   /*** derivatives for constraint 30 ***/

	J[69] = 1.;
	J[100] = -1.;
	J[192] = 1.;
	J[250] = 89.;

   /*** derivatives for constraint 31 ***/

	J[79] = 1.;
	J[90] = -1.;
	J[197] = 1.;
	J[252] = 64.;

   /*** derivatives for constraint 32 ***/

	J[80] = 1.;
	J[101] = -1.;
	J[198] = 1.;
	J[254] = 64.;

   /*** derivatives for constraint 33 ***/

	J[91] = 1.;
	J[102] = -1.;
	J[204] = 1.;
	J[256] = 104.;

   /*** derivatives for constraint 34 ***/

	J[48] = -1.;
	J[59] = 1.;
	J[187] = 1.;
	J[258] = 79.;

   /*** derivatives for constraint 35 ***/

	J[49] = -1.;
	J[70] = 1.;
	J[193] = 1.;
	J[260] = 89.;

   /*** derivatives for constraint 36 ***/

	J[50] = -1.;
	J[81] = 1.;
	J[199] = 1.;
	J[262] = 64.;

   /*** derivatives for constraint 37 ***/

	J[51] = -1.;
	J[92] = 1.;
	J[205] = 1.;
	J[264] = 104.;

   /*** derivatives for constraint 38 ***/

	J[52] = -1.;
	J[103] = 1.;
	J[211] = 1.;
	J[266] = 49.;

   /*** derivatives for constraint 39 ***/

	J[60] = -1.;
	J[71] = 1.;
	J[194] = 1.;
	J[268] = 89.;

   /*** derivatives for constraint 40 ***/

	J[61] = -1.;
	J[82] = 1.;
	J[200] = 1.;
	J[270] = 64.;

   /*** derivatives for constraint 41 ***/

	J[62] = -1.;
	J[93] = 1.;
	J[206] = 1.;
	J[272] = 104.;

   /*** derivatives for constraint 42 ***/

	J[63] = -1.;
	J[104] = 1.;
	J[212] = 1.;
	J[274] = 49.;

   /*** derivatives for constraint 43 ***/

	J[72] = -1.;
	J[83] = 1.;
	J[201] = 1.;
	J[276] = 64.;

   /*** derivatives for constraint 44 ***/

	J[73] = -1.;
	J[94] = 1.;
	J[207] = 1.;
	J[278] = 104.;

   /*** derivatives for constraint 45 ***/

	J[74] = -1.;
	J[105] = 1.;
	J[213] = 1.;
	J[280] = 49.;

   /*** derivatives for constraint 46 ***/

	J[84] = -1.;
	J[95] = 1.;
	J[208] = 1.;
	J[282] = 104.;

   /*** derivatives for constraint 47 ***/

	J[85] = -1.;
	J[106] = 1.;
	J[214] = 1.;
	J[284] = 49.;

   /*** derivatives for constraint 48 ***/

	J[96] = -1.;
	J[107] = 1.;
	J[215] = 1.;
	J[286] = 49.;

   /*** derivatives for constraint 49 ***/

	J[2] = 1.;
	J[109] = 1.;
	J[120] = -1.;
	J[288] = 69.;

   /*** derivatives for constraint 50 ***/

	J[3] = 1.;
	J[110] = 1.;
	J[131] = -1.;
	J[290] = 69.;

   /*** derivatives for constraint 51 ***/

	J[4] = 1.;
	J[111] = 1.;
	J[142] = -1.;
	J[292] = 69.;

   /*** derivatives for constraint 52 ***/

	J[5] = 1.;
	J[112] = 1.;
	J[153] = -1.;
	J[294] = 69.;

   /*** derivatives for constraint 53 ***/

	J[6] = 1.;
	J[113] = 1.;
	J[164] = -1.;
	J[296] = 69.;

   /*** derivatives for constraint 54 ***/

	J[9] = 1.;
	J[121] = 1.;
	J[132] = -1.;
	J[298] = 79.;

   /*** derivatives for constraint 55 ***/

	J[10] = 1.;
	J[122] = 1.;
	J[143] = -1.;
	J[300] = 79.;

   /*** derivatives for constraint 56 ***/

	J[11] = 1.;
	J[123] = 1.;
	J[154] = -1.;
	J[302] = 79.;

   /*** derivatives for constraint 57 ***/

	J[12] = 1.;
	J[124] = 1.;
	J[165] = -1.;
	J[304] = 79.;

   /*** derivatives for constraint 58 ***/

	J[16] = 1.;
	J[133] = 1.;
	J[144] = -1.;
	J[306] = 89.;

   /*** derivatives for constraint 59 ***/

	J[17] = 1.;
	J[134] = 1.;
	J[155] = -1.;
	J[308] = 89.;

   /*** derivatives for constraint 60 ***/

	J[18] = 1.;
	J[135] = 1.;
	J[166] = -1.;
	J[310] = 89.;

   /*** derivatives for constraint 61 ***/

	J[23] = 1.;
	J[145] = 1.;
	J[156] = -1.;
	J[312] = 64.;

   /*** derivatives for constraint 62 ***/

	J[24] = 1.;
	J[146] = 1.;
	J[167] = -1.;
	J[314] = 64.;

   /*** derivatives for constraint 63 ***/

	J[30] = 1.;
	J[157] = 1.;
	J[168] = -1.;
	J[316] = 104.;

   /*** derivatives for constraint 64 ***/

	J[13] = 1.;
	J[114] = -1.;
	J[125] = 1.;
	J[318] = 79.;

   /*** derivatives for constraint 65 ***/

	J[19] = 1.;
	J[115] = -1.;
	J[136] = 1.;
	J[320] = 89.;

   /*** derivatives for constraint 66 ***/

	J[25] = 1.;
	J[116] = -1.;
	J[147] = 1.;
	J[322] = 64.;

   /*** derivatives for constraint 67 ***/

	J[31] = 1.;
	J[117] = -1.;
	J[158] = 1.;
	J[324] = 104.;

   /*** derivatives for constraint 68 ***/

	J[37] = 1.;
	J[118] = -1.;
	J[169] = 1.;
	J[326] = 49.;

   /*** derivatives for constraint 69 ***/

	J[20] = 1.;
	J[126] = -1.;
	J[137] = 1.;
	J[328] = 89.;

   /*** derivatives for constraint 70 ***/

	J[26] = 1.;
	J[127] = -1.;
	J[148] = 1.;
	J[330] = 64.;

   /*** derivatives for constraint 71 ***/

	J[32] = 1.;
	J[128] = -1.;
	J[159] = 1.;
	J[332] = 104.;

   /*** derivatives for constraint 72 ***/

	J[38] = 1.;
	J[129] = -1.;
	J[170] = 1.;
	J[334] = 49.;

   /*** derivatives for constraint 73 ***/

	J[27] = 1.;
	J[138] = -1.;
	J[149] = 1.;
	J[336] = 64.;

   /*** derivatives for constraint 74 ***/

	J[33] = 1.;
	J[139] = -1.;
	J[160] = 1.;
	J[338] = 104.;

   /*** derivatives for constraint 75 ***/

	J[39] = 1.;
	J[140] = -1.;
	J[171] = 1.;
	J[340] = 49.;

   /*** derivatives for constraint 76 ***/

	J[34] = 1.;
	J[150] = -1.;
	J[161] = 1.;
	J[342] = 104.;

   /*** derivatives for constraint 77 ***/

	J[40] = 1.;
	J[151] = -1.;
	J[172] = 1.;
	J[344] = 49.;

   /*** derivatives for constraint 78 ***/

	J[41] = 1.;
	J[162] = -1.;
	J[173] = 1.;
	J[346] = 49.;

   /*** derivatives for constraint 79 ***/

	J[229] = 1.;
	J[259] = 1.;
	J[289] = 1.;
	J[319] = 1.;

   /*** derivatives for constraint 80 ***/

	J[231] = 1.;
	J[261] = 1.;
	J[291] = 1.;
	J[321] = 1.;

   /*** derivatives for constraint 81 ***/

	J[233] = 1.;
	J[263] = 1.;
	J[293] = 1.;
	J[323] = 1.;

   /*** derivatives for constraint 82 ***/

	J[235] = 1.;
	J[265] = 1.;
	J[295] = 1.;
	J[325] = 1.;

   /*** derivatives for constraint 83 ***/

	J[237] = 1.;
	J[267] = 1.;
	J[297] = 1.;
	J[327] = 1.;

   /*** derivatives for constraint 84 ***/

	J[239] = 1.;
	J[269] = 1.;
	J[299] = 1.;
	J[329] = 1.;

   /*** derivatives for constraint 85 ***/

	J[241] = 1.;
	J[271] = 1.;
	J[301] = 1.;
	J[331] = 1.;

   /*** derivatives for constraint 86 ***/

	J[243] = 1.;
	J[273] = 1.;
	J[303] = 1.;
	J[333] = 1.;

   /*** derivatives for constraint 87 ***/

	J[245] = 1.;
	J[275] = 1.;
	J[305] = 1.;
	J[335] = 1.;

   /*** derivatives for constraint 88 ***/

	J[247] = 1.;
	J[277] = 1.;
	J[307] = 1.;
	J[337] = 1.;

   /*** derivatives for constraint 89 ***/

	J[249] = 1.;
	J[279] = 1.;
	J[309] = 1.;
	J[339] = 1.;

   /*** derivatives for constraint 90 ***/

	J[251] = 1.;
	J[281] = 1.;
	J[311] = 1.;
	J[341] = 1.;

   /*** derivatives for constraint 91 ***/

	J[253] = 1.;
	J[283] = 1.;
	J[313] = 1.;
	J[343] = 1.;

   /*** derivatives for constraint 92 ***/

	J[255] = 1.;
	J[285] = 1.;
	J[315] = 1.;
	J[345] = 1.;

   /*** derivatives for constraint 93 ***/

	J[257] = 1.;
	J[287] = 1.;
	J[317] = 1.;
	J[347] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
