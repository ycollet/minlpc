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
 fint clay0204m_auxcom_[1] = { 32 /* nlc */ };
 fint clay0204m_funcom_[331] = {
	52 /* nvar */,
	1 /* nobj */,
	90 /* ncon */,
	272 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	21,
	41,
	61,
	81,
	101,
	121,
	141,
	161,
	163,
	165,
	167,
	169,
	171,
	173,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	189,
	191,
	193,
	195,
	197,
	199,
	201,
	203,
	205,
	207,
	209,
	211,
	213,
	215,
	217,
	219,
	221,
	223,
	225,
	227,
	229,
	231,
	233,
	238,
	243,
	248,
	253,
	258,
	263,
	268,
	273,

	/* rownos */
	1,
	5,
	9,
	13,
	17,
	21,
	25,
	29,
	33,
	34,
	35,
	39,
	40,
	41,
	57,
	58,
	59,
	63,
	64,
	65,
	2,
	6,
	10,
	14,
	18,
	22,
	26,
	30,
	33,
	36,
	37,
	39,
	42,
	43,
	57,
	60,
	61,
	63,
	66,
	67,
	3,
	7,
	11,
	15,
	19,
	23,
	27,
	31,
	34,
	36,
	38,
	40,
	42,
	44,
	58,
	60,
	62,
	64,
	66,
	68,
	4,
	8,
	12,
	16,
	20,
	24,
	28,
	32,
	35,
	37,
	38,
	41,
	43,
	44,
	59,
	61,
	62,
	65,
	67,
	68,
	1,
	5,
	9,
	13,
	17,
	21,
	25,
	29,
	45,
	46,
	47,
	51,
	52,
	53,
	69,
	70,
	71,
	75,
	76,
	77,
	2,
	6,
	10,
	14,
	18,
	22,
	26,
	30,
	45,
	48,
	49,
	51,
	54,
	55,
	69,
	72,
	73,
	75,
	78,
	79,
	3,
	7,
	11,
	15,
	19,
	23,
	27,
	31,
	46,
	48,
	50,
	52,
	54,
	56,
	70,
	72,
	74,
	76,
	78,
	80,
	4,
	8,
	12,
	16,
	20,
	24,
	28,
	32,
	47,
	49,
	50,
	53,
	55,
	56,
	71,
	73,
	74,
	77,
	79,
	80,
	33,
	39,
	34,
	40,
	35,
	41,
	36,
	42,
	37,
	43,
	38,
	44,
	45,
	51,
	46,
	52,
	47,
	53,
	48,
	54,
	49,
	55,
	50,
	56,
	57,
	81,
	58,
	82,
	59,
	83,
	60,
	84,
	61,
	85,
	62,
	86,
	63,
	81,
	64,
	82,
	65,
	83,
	66,
	84,
	67,
	85,
	68,
	86,
	69,
	81,
	70,
	82,
	71,
	83,
	72,
	84,
	73,
	85,
	74,
	86,
	75,
	81,
	76,
	82,
	77,
	83,
	78,
	84,
	79,
	85,
	80,
	86,
	1,
	9,
	17,
	25,
	87,
	2,
	10,
	18,
	26,
	88,
	3,
	11,
	19,
	27,
	89,
	4,
	12,
	20,
	28,
	90,
	5,
	13,
	21,
	29,
	87,
	6,
	14,
	22,
	30,
	88,
	7,
	15,
	23,
	31,
	89,
	8,
	16,
	24,
	32,
	90 };

 real clay0204m_boundc_[1+104+180] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		11.5,
		57.5,
		12.5,
		56.5,
		10.5,
		58.5,
		10.,
		59.,
		7.,
		87.,
		6.5,
		87.5,
		5.5,
		88.5,
		5.5,
		88.5,
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
		8000.,
		-1.7e308,
		7844.,
		-1.7e308,
		8164.,
		-1.7e308,
		8249.,
		-1.7e308,
		6581.,
		-1.7e308,
		6722.,
		-1.7e308,
		7051.25,
		-1.7e308,
		7010.,
		-1.7e308,
		7076.,
		-1.7e308,
		7069.,
		-1.7e308,
		7693.,
		-1.7e308,
		7778.,
		-1.7e308,
		7457.,
		-1.7e308,
		7457.,
		-1.7e308,
		7498.25,
		-1.7e308,
		7457.,
		-1.7e308,
		8425.,
		-1.7e308,
		8425.,
		-1.7e308,
		8425.,
		-1.7e308,
		8425.,
		-1.7e308,
		6196.,
		-1.7e308,
		6197.,
		-1.7e308,
		6811.25,
		-1.7e308,
		6850.,
		-1.7e308,
		7501.,
		-1.7e308,
		7650.,
		-1.7e308,
		7954.,
		-1.7e308,
		7954.,
		-1.7e308,
		7072.,
		-1.7e308,
		6932.,
		-1.7e308,
		7258.25,
		-1.7e308,
		7297.,
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
		-1.7e308,
		45.,
		-1.7e308,
		47.,
		-1.7e308,
		47.5,
		-1.7e308,
		46.,
		-1.7e308,
		46.5,
		-1.7e308,
		48.5,
		-1.7e308,
		45.,
		-1.7e308,
		47.,
		-1.7e308,
		47.5,
		-1.7e308,
		46.,
		-1.7e308,
		46.5,
		-1.7e308,
		48.5,
		-1.7e308,
		80.5,
		-1.7e308,
		81.5,
		-1.7e308,
		81.5,
		-1.7e308,
		82.,
		-1.7e308,
		82.,
		-1.7e308,
		83.,
		-1.7e308,
		80.5,
		-1.7e308,
		81.5,
		-1.7e308,
		81.5,
		-1.7e308,
		82.,
		-1.7e308,
		82.,
		-1.7e308,
		83.,
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

 real clay0204m_x0comn_[52] = {
		11.5,
		12.5,
		10.5,
		10.,
		7.,
		6.5,
		5.5,
		5.5,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real clay0204m_pd[64];
static real clay0204m_old_x[52];
static int clay0204m_xkind = -1;

 static int
clay0204m_xcheck(real *x)
{
	real *x1 = clay0204m_old_x, *xe = x + 52;
	errno = 0;
	if (clay0204m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	clay0204m_xkind = 0;
	return 1;
	}
 real
clay0204m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (clay0204m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 300.*x[8];
	rv += 240.*x[9];
	rv += 210.*x[10];
	rv += 100.*x[11];
	rv += 150.*x[12];
	rv += 120.*x[13];
	rv += 300.*x[14];
	rv += 240.*x[15];
	rv += 210.*x[16];
	rv += 100.*x[17];
	rv += 150.*x[18];
	rv += 120.*x[19];
	;}

	if (wantfg & 2) {
	g[8] = 300.;
	g[9] = 240.;
	g[10] = 210.;
	g[11] = 100.;
	g[12] = 150.;
	g[13] = 120.;
	g[14] = 300.;
	g[15] = 240.;
	g[16] = 210.;
	g[17] = 100.;
	g[18] = 150.;
	g[19] = 120.;
	}

	return rv;
}

 void
clay0204m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (clay0204m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[0] = v[0] + v[0];
	v[0] = x[4] + -7.;
	v[2] = v[0] * v[0];
	clay0204m_pd[1] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7964.*x[44];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[2] = v[0] + v[0];
	v[0] = x[5] + -7.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7808.*x[45];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[4] = v[0] + v[0];
	v[0] = x[6] + -8.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[5] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8128.*x[46];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] + -16.;
	v[1] = v[0] * v[0];
	clay0204m_pd[6] = v[0] + v[0];
	v[0] = x[7] + -8.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[7] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8213.*x[47];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[8] = v[0] + v[0];
	v[0] = x[4] + -77.;
	v[2] = v[0] * v[0];
	clay0204m_pd[9] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6481.*x[48];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[10] = v[0] + v[0];
	v[0] = x[5] + -77.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[11] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6622.*x[49];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[12] = v[0] + v[0];
	v[0] = x[6] + -78.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[13] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6951.25*x[50];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[3] + -51.;
	v[1] = v[0] * v[0];
	clay0204m_pd[14] = v[0] + v[0];
	v[0] = x[7] + -78.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[15] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6910.*x[51];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[16] = v[0] + v[0];
	v[0] = x[4] + -13.;
	v[2] = v[0] * v[0];
	clay0204m_pd[17] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7040.*x[44];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[18] = v[0] + v[0];
	v[0] = x[5] + -12.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[19] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7033.*x[45];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[20] = v[0] + v[0];
	v[0] = x[6] + -11.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[21] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7657.*x[46];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[3] + -16.;
	v[1] = v[0] * v[0];
	clay0204m_pd[22] = v[0] + v[0];
	v[0] = x[7] + -11.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[23] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7742.*x[47];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[24] = v[0] + v[0];
	v[0] = x[4] + -83.;
	v[2] = v[0] * v[0];
	clay0204m_pd[25] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7357.*x[48];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[26] = v[0] + v[0];
	v[0] = x[5] + -82.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[27] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7357.*x[49];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[28] = v[0] + v[0];
	v[0] = x[6] + -81.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[29] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7398.25*x[50];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[3] + -51.;
	v[1] = v[0] * v[0];
	clay0204m_pd[30] = v[0] + v[0];
	v[0] = x[7] + -81.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[31] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7357.*x[51];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[32] = v[0] + v[0];
	v[0] = x[4] + -7.;
	v[2] = v[0] * v[0];
	clay0204m_pd[33] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[44];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[34] = v[0] + v[0];
	v[0] = x[5] + -7.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[35] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[45];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[36] = v[0] + v[0];
	v[0] = x[6] + -8.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[37] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[46];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[3] + -14.;
	v[1] = v[0] * v[0];
	clay0204m_pd[38] = v[0] + v[0];
	v[0] = x[7] + -8.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[39] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[47];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[40] = v[0] + v[0];
	v[0] = x[4] + -77.;
	v[2] = v[0] * v[0];
	clay0204m_pd[41] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6096.*x[48];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[42] = v[0] + v[0];
	v[0] = x[5] + -77.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[43] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6097.*x[49];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[44] = v[0] + v[0];
	v[0] = x[6] + -78.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[45] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6711.25*x[50];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[3] + -49.;
	v[1] = v[0] * v[0];
	clay0204m_pd[46] = v[0] + v[0];
	v[0] = x[7] + -78.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[47] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6750.*x[51];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[48] = v[0] + v[0];
	v[0] = x[4] + -13.;
	v[2] = v[0] * v[0];
	clay0204m_pd[49] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7465.*x[44];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[50] = v[0] + v[0];
	v[0] = x[5] + -12.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[51] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7614.*x[45];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[52] = v[0] + v[0];
	v[0] = x[6] + -11.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[53] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7918.*x[46];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[3] + -14.;
	v[1] = v[0] * v[0];
	clay0204m_pd[54] = v[0] + v[0];
	v[0] = x[7] + -11.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[55] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7918.*x[47];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[56] = v[0] + v[0];
	v[0] = x[4] + -83.;
	v[2] = v[0] * v[0];
	clay0204m_pd[57] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6972.*x[48];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[58] = v[0] + v[0];
	v[0] = x[5] + -82.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[59] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6832.*x[49];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0204m_pd[60] = v[0] + v[0];
	v[0] = x[6] + -81.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[61] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7158.25*x[50];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[3] + -49.;
	v[1] = v[0] * v[0];
	clay0204m_pd[62] = v[0] + v[0];
	v[0] = x[7] + -81.5;
	v[2] = v[0] * v[0];
	clay0204m_pd[63] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7197.*x[51];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[8];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[9];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += x[10];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[11];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += x[12];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[13];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[8];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += x[9];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += x[10];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[11];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += x[12];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += x[13];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[14];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[4];
	t1 += x[6];
	t1 += x[15];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[4];
	t1 += x[7];
	t1 += x[16];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[17];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += x[18];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[19];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[14];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[4];
	t1 += -x[6];
	t1 += x[15];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[4];
	t1 += -x[7];
	t1 += x[16];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[17];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += x[18];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[19];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 51.*x[20];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += 51.*x[21];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += 51.*x[22];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += 51.*x[23];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += 51.*x[24];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += 51.*x[25];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += 51.*x[26];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += 51.*x[27];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += 51.*x[28];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += 51.*x[29];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += 51.*x[30];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += 51.*x[31];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += 86.*x[32];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[4];
	t1 += -x[6];
	t1 += 86.*x[33];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[4];
	t1 += -x[7];
	t1 += 86.*x[34];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += 86.*x[35];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += 86.*x[36];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += 86.*x[37];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += 86.*x[38];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -x[4];
	t1 += x[6];
	t1 += 86.*x[39];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[4];
	t1 += x[7];
	t1 += 86.*x[40];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += 86.*x[41];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += 86.*x[42];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += 86.*x[43];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[20];
	t1 += x[26];
	t1 += x[32];
	t1 += x[38];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[21];
	t1 += x[27];
	t1 += x[33];
	t1 += x[39];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[22];
	t1 += x[28];
	t1 += x[34];
	t1 += x[40];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[23];
	t1 += x[29];
	t1 += x[35];
	t1 += x[41];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[24];
	t1 += x[30];
	t1 += x[36];
	t1 += x[42];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[25];
	t1 += x[31];
	t1 += x[37];
	t1 += x[43];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[44];
	t1 += x[48];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[45];
	t1 += x[49];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[46];
	t1 += x[50];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[47];
	t1 += x[51];
	c[89] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[80] = clay0204m_pd[1];
	J[0] = clay0204m_pd[0];
	J[232] = 7964.;

   /*** derivatives for constraint 2 ***/

	J[100] = clay0204m_pd[3];
	J[20] = clay0204m_pd[2];
	J[237] = 7808.;

   /*** derivatives for constraint 3 ***/

	J[120] = clay0204m_pd[5];
	J[40] = clay0204m_pd[4];
	J[242] = 8128.;

   /*** derivatives for constraint 4 ***/

	J[140] = clay0204m_pd[7];
	J[60] = clay0204m_pd[6];
	J[247] = 8213.;

   /*** derivatives for constraint 5 ***/

	J[81] = clay0204m_pd[9];
	J[1] = clay0204m_pd[8];
	J[252] = 6481.;

   /*** derivatives for constraint 6 ***/

	J[101] = clay0204m_pd[11];
	J[21] = clay0204m_pd[10];
	J[257] = 6622.;

   /*** derivatives for constraint 7 ***/

	J[121] = clay0204m_pd[13];
	J[41] = clay0204m_pd[12];
	J[262] = 6951.25;

   /*** derivatives for constraint 8 ***/

	J[141] = clay0204m_pd[15];
	J[61] = clay0204m_pd[14];
	J[267] = 6910.;

   /*** derivatives for constraint 9 ***/

	J[82] = clay0204m_pd[17];
	J[2] = clay0204m_pd[16];
	J[233] = 7040.;

   /*** derivatives for constraint 10 ***/

	J[102] = clay0204m_pd[19];
	J[22] = clay0204m_pd[18];
	J[238] = 7033.;

   /*** derivatives for constraint 11 ***/

	J[122] = clay0204m_pd[21];
	J[42] = clay0204m_pd[20];
	J[243] = 7657.;

   /*** derivatives for constraint 12 ***/

	J[142] = clay0204m_pd[23];
	J[62] = clay0204m_pd[22];
	J[248] = 7742.;

   /*** derivatives for constraint 13 ***/

	J[83] = clay0204m_pd[25];
	J[3] = clay0204m_pd[24];
	J[253] = 7357.;

   /*** derivatives for constraint 14 ***/

	J[103] = clay0204m_pd[27];
	J[23] = clay0204m_pd[26];
	J[258] = 7357.;

   /*** derivatives for constraint 15 ***/

	J[123] = clay0204m_pd[29];
	J[43] = clay0204m_pd[28];
	J[263] = 7398.25;

   /*** derivatives for constraint 16 ***/

	J[143] = clay0204m_pd[31];
	J[63] = clay0204m_pd[30];
	J[268] = 7357.;

   /*** derivatives for constraint 17 ***/

	J[84] = clay0204m_pd[33];
	J[4] = clay0204m_pd[32];
	J[234] = 8389.;

   /*** derivatives for constraint 18 ***/

	J[104] = clay0204m_pd[35];
	J[24] = clay0204m_pd[34];
	J[239] = 8389.;

   /*** derivatives for constraint 19 ***/

	J[124] = clay0204m_pd[37];
	J[44] = clay0204m_pd[36];
	J[244] = 8389.;

   /*** derivatives for constraint 20 ***/

	J[144] = clay0204m_pd[39];
	J[64] = clay0204m_pd[38];
	J[249] = 8389.;

   /*** derivatives for constraint 21 ***/

	J[85] = clay0204m_pd[41];
	J[5] = clay0204m_pd[40];
	J[254] = 6096.;

   /*** derivatives for constraint 22 ***/

	J[105] = clay0204m_pd[43];
	J[25] = clay0204m_pd[42];
	J[259] = 6097.;

   /*** derivatives for constraint 23 ***/

	J[125] = clay0204m_pd[45];
	J[45] = clay0204m_pd[44];
	J[264] = 6711.25;

   /*** derivatives for constraint 24 ***/

	J[145] = clay0204m_pd[47];
	J[65] = clay0204m_pd[46];
	J[269] = 6750.;

   /*** derivatives for constraint 25 ***/

	J[86] = clay0204m_pd[49];
	J[6] = clay0204m_pd[48];
	J[235] = 7465.;

   /*** derivatives for constraint 26 ***/

	J[106] = clay0204m_pd[51];
	J[26] = clay0204m_pd[50];
	J[240] = 7614.;

   /*** derivatives for constraint 27 ***/

	J[126] = clay0204m_pd[53];
	J[46] = clay0204m_pd[52];
	J[245] = 7918.;

   /*** derivatives for constraint 28 ***/

	J[146] = clay0204m_pd[55];
	J[66] = clay0204m_pd[54];
	J[250] = 7918.;

   /*** derivatives for constraint 29 ***/

	J[87] = clay0204m_pd[57];
	J[7] = clay0204m_pd[56];
	J[255] = 6972.;

   /*** derivatives for constraint 30 ***/

	J[107] = clay0204m_pd[59];
	J[27] = clay0204m_pd[58];
	J[260] = 6832.;

   /*** derivatives for constraint 31 ***/

	J[127] = clay0204m_pd[61];
	J[47] = clay0204m_pd[60];
	J[265] = 7158.25;

   /*** derivatives for constraint 32 ***/

	J[147] = clay0204m_pd[63];
	J[67] = clay0204m_pd[62];
	J[270] = 7197.;

   /*** derivatives for constraint 33 ***/

	J[8] = -1.;
	J[28] = 1.;
	J[160] = 1.;

   /*** derivatives for constraint 34 ***/

	J[9] = -1.;
	J[48] = 1.;
	J[162] = 1.;

   /*** derivatives for constraint 35 ***/

	J[10] = -1.;
	J[68] = 1.;
	J[164] = 1.;

   /*** derivatives for constraint 36 ***/

	J[29] = -1.;
	J[49] = 1.;
	J[166] = 1.;

   /*** derivatives for constraint 37 ***/

	J[30] = -1.;
	J[69] = 1.;
	J[168] = 1.;

   /*** derivatives for constraint 38 ***/

	J[50] = -1.;
	J[70] = 1.;
	J[170] = 1.;

   /*** derivatives for constraint 39 ***/

	J[11] = 1.;
	J[31] = -1.;
	J[161] = 1.;

   /*** derivatives for constraint 40 ***/

	J[12] = 1.;
	J[51] = -1.;
	J[163] = 1.;

   /*** derivatives for constraint 41 ***/

	J[13] = 1.;
	J[71] = -1.;
	J[165] = 1.;

   /*** derivatives for constraint 42 ***/

	J[32] = 1.;
	J[52] = -1.;
	J[167] = 1.;

   /*** derivatives for constraint 43 ***/

	J[33] = 1.;
	J[72] = -1.;
	J[169] = 1.;

   /*** derivatives for constraint 44 ***/

	J[53] = 1.;
	J[73] = -1.;
	J[171] = 1.;

   /*** derivatives for constraint 45 ***/

	J[88] = -1.;
	J[108] = 1.;
	J[172] = 1.;

   /*** derivatives for constraint 46 ***/

	J[89] = -1.;
	J[128] = 1.;
	J[174] = 1.;

   /*** derivatives for constraint 47 ***/

	J[90] = -1.;
	J[148] = 1.;
	J[176] = 1.;

   /*** derivatives for constraint 48 ***/

	J[109] = -1.;
	J[129] = 1.;
	J[178] = 1.;

   /*** derivatives for constraint 49 ***/

	J[110] = -1.;
	J[149] = 1.;
	J[180] = 1.;

   /*** derivatives for constraint 50 ***/

	J[130] = -1.;
	J[150] = 1.;
	J[182] = 1.;

   /*** derivatives for constraint 51 ***/

	J[91] = 1.;
	J[111] = -1.;
	J[173] = 1.;

   /*** derivatives for constraint 52 ***/

	J[92] = 1.;
	J[131] = -1.;
	J[175] = 1.;

   /*** derivatives for constraint 53 ***/

	J[93] = 1.;
	J[151] = -1.;
	J[177] = 1.;

   /*** derivatives for constraint 54 ***/

	J[112] = 1.;
	J[132] = -1.;
	J[179] = 1.;

   /*** derivatives for constraint 55 ***/

	J[113] = 1.;
	J[152] = -1.;
	J[181] = 1.;

   /*** derivatives for constraint 56 ***/

	J[133] = 1.;
	J[153] = -1.;
	J[183] = 1.;

   /*** derivatives for constraint 57 ***/

	J[14] = 1.;
	J[34] = -1.;
	J[184] = 51.;

   /*** derivatives for constraint 58 ***/

	J[15] = 1.;
	J[54] = -1.;
	J[186] = 51.;

   /*** derivatives for constraint 59 ***/

	J[16] = 1.;
	J[74] = -1.;
	J[188] = 51.;

   /*** derivatives for constraint 60 ***/

	J[35] = 1.;
	J[55] = -1.;
	J[190] = 51.;

   /*** derivatives for constraint 61 ***/

	J[36] = 1.;
	J[75] = -1.;
	J[192] = 51.;

   /*** derivatives for constraint 62 ***/

	J[56] = 1.;
	J[76] = -1.;
	J[194] = 51.;

   /*** derivatives for constraint 63 ***/

	J[17] = -1.;
	J[37] = 1.;
	J[196] = 51.;

   /*** derivatives for constraint 64 ***/

	J[18] = -1.;
	J[57] = 1.;
	J[198] = 51.;

   /*** derivatives for constraint 65 ***/

	J[19] = -1.;
	J[77] = 1.;
	J[200] = 51.;

   /*** derivatives for constraint 66 ***/

	J[38] = -1.;
	J[58] = 1.;
	J[202] = 51.;

   /*** derivatives for constraint 67 ***/

	J[39] = -1.;
	J[78] = 1.;
	J[204] = 51.;

   /*** derivatives for constraint 68 ***/

	J[59] = -1.;
	J[79] = 1.;
	J[206] = 51.;

   /*** derivatives for constraint 69 ***/

	J[94] = 1.;
	J[114] = -1.;
	J[208] = 86.;

   /*** derivatives for constraint 70 ***/

	J[95] = 1.;
	J[134] = -1.;
	J[210] = 86.;

   /*** derivatives for constraint 71 ***/

	J[96] = 1.;
	J[154] = -1.;
	J[212] = 86.;

   /*** derivatives for constraint 72 ***/

	J[115] = 1.;
	J[135] = -1.;
	J[214] = 86.;

   /*** derivatives for constraint 73 ***/

	J[116] = 1.;
	J[155] = -1.;
	J[216] = 86.;

   /*** derivatives for constraint 74 ***/

	J[136] = 1.;
	J[156] = -1.;
	J[218] = 86.;

   /*** derivatives for constraint 75 ***/

	J[97] = -1.;
	J[117] = 1.;
	J[220] = 86.;

   /*** derivatives for constraint 76 ***/

	J[98] = -1.;
	J[137] = 1.;
	J[222] = 86.;

   /*** derivatives for constraint 77 ***/

	J[99] = -1.;
	J[157] = 1.;
	J[224] = 86.;

   /*** derivatives for constraint 78 ***/

	J[118] = -1.;
	J[138] = 1.;
	J[226] = 86.;

   /*** derivatives for constraint 79 ***/

	J[119] = -1.;
	J[158] = 1.;
	J[228] = 86.;

   /*** derivatives for constraint 80 ***/

	J[139] = -1.;
	J[159] = 1.;
	J[230] = 86.;

   /*** derivatives for constraint 81 ***/

	J[185] = 1.;
	J[197] = 1.;
	J[209] = 1.;
	J[221] = 1.;

   /*** derivatives for constraint 82 ***/

	J[187] = 1.;
	J[199] = 1.;
	J[211] = 1.;
	J[223] = 1.;

   /*** derivatives for constraint 83 ***/

	J[189] = 1.;
	J[201] = 1.;
	J[213] = 1.;
	J[225] = 1.;

   /*** derivatives for constraint 84 ***/

	J[191] = 1.;
	J[203] = 1.;
	J[215] = 1.;
	J[227] = 1.;

   /*** derivatives for constraint 85 ***/

	J[193] = 1.;
	J[205] = 1.;
	J[217] = 1.;
	J[229] = 1.;

   /*** derivatives for constraint 86 ***/

	J[195] = 1.;
	J[207] = 1.;
	J[219] = 1.;
	J[231] = 1.;

   /*** derivatives for constraint 87 ***/

	J[236] = 1.;
	J[256] = 1.;

   /*** derivatives for constraint 88 ***/

	J[241] = 1.;
	J[261] = 1.;

   /*** derivatives for constraint 89 ***/

	J[246] = 1.;
	J[266] = 1.;

   /*** derivatives for constraint 90 ***/

	J[251] = 1.;
	J[271] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
