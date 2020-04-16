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
 fint clay0304m_auxcom_[1] = { 48 /* nlc */ };
 fint clay0304m_funcom_[387] = {
	56 /* nvar */,
	1 /* nobj */,
	106 /* ncon */,
	324 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	25,
	49,
	73,
	97,
	121,
	145,
	169,
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
	270,
	275,
	280,
	285,
	290,
	295,
	300,
	305,
	310,
	315,
	320,
	325,

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
	37,
	41,
	45,
	49,
	50,
	51,
	55,
	56,
	57,
	73,
	74,
	75,
	79,
	80,
	81,
	2,
	6,
	10,
	14,
	18,
	22,
	26,
	30,
	34,
	38,
	42,
	46,
	49,
	52,
	53,
	55,
	58,
	59,
	73,
	76,
	77,
	79,
	82,
	83,
	3,
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
	50,
	52,
	54,
	56,
	58,
	60,
	74,
	76,
	78,
	80,
	82,
	84,
	4,
	8,
	12,
	16,
	20,
	24,
	28,
	32,
	36,
	40,
	44,
	48,
	51,
	53,
	54,
	57,
	59,
	60,
	75,
	77,
	78,
	81,
	83,
	84,
	1,
	5,
	9,
	13,
	17,
	21,
	25,
	29,
	33,
	37,
	41,
	45,
	61,
	62,
	63,
	67,
	68,
	69,
	85,
	86,
	87,
	91,
	92,
	93,
	2,
	6,
	10,
	14,
	18,
	22,
	26,
	30,
	34,
	38,
	42,
	46,
	61,
	64,
	65,
	67,
	70,
	71,
	85,
	88,
	89,
	91,
	94,
	95,
	3,
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
	62,
	64,
	66,
	68,
	70,
	72,
	86,
	88,
	90,
	92,
	94,
	96,
	4,
	8,
	12,
	16,
	20,
	24,
	28,
	32,
	36,
	40,
	44,
	48,
	63,
	65,
	66,
	69,
	71,
	72,
	87,
	89,
	90,
	93,
	95,
	96,
	49,
	55,
	50,
	56,
	51,
	57,
	52,
	58,
	53,
	59,
	54,
	60,
	61,
	67,
	62,
	68,
	63,
	69,
	64,
	70,
	65,
	71,
	66,
	72,
	73,
	97,
	74,
	98,
	75,
	99,
	76,
	100,
	77,
	101,
	78,
	102,
	79,
	97,
	80,
	98,
	81,
	99,
	82,
	100,
	83,
	101,
	84,
	102,
	85,
	97,
	86,
	98,
	87,
	99,
	88,
	100,
	89,
	101,
	90,
	102,
	91,
	97,
	92,
	98,
	93,
	99,
	94,
	100,
	95,
	101,
	96,
	102,
	1,
	13,
	25,
	37,
	103,
	2,
	14,
	26,
	38,
	104,
	3,
	15,
	27,
	39,
	105,
	4,
	16,
	28,
	40,
	106,
	5,
	17,
	29,
	41,
	103,
	6,
	18,
	30,
	42,
	104,
	7,
	19,
	31,
	43,
	105,
	8,
	20,
	32,
	44,
	106,
	9,
	21,
	33,
	45,
	103,
	10,
	22,
	34,
	46,
	104,
	11,
	23,
	35,
	47,
	105,
	12,
	24,
	36,
	48,
	106 };

 real clay0304m_boundc_[1+112+212] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		11.5,
		52.5,
		12.5,
		51.5,
		10.5,
		53.5,
		10.,
		54.,
		7.,
		82.,
		6.5,
		82.5,
		5.5,
		83.5,
		5.5,
		83.5,
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
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		6850.,
		-1.7e308,
		6714.,
		-1.7e308,
		6994.,
		-1.7e308,
		7069.,
		-1.7e308,
		6581.,
		-1.7e308,
		6722.,
		-1.7e308,
		7010.,
		-1.7e308,
		7010.,
		-1.7e308,
		2041.,
		-1.7e308,
		2122.,
		-1.7e308,
		2333.,
		-1.7e308,
		2378.,
		-1.7e308,
		5986.,
		-1.7e308,
		5989.,
		-1.7e308,
		6553.,
		-1.7e308,
		6628.,
		-1.7e308,
		7457.,
		-1.7e308,
		7457.,
		-1.7e308,
		7457.,
		-1.7e308,
		7457.,
		-1.7e308,
		2557.,
		-1.7e308,
		2557.,
		-1.7e308,
		2600.,
		-1.7e308,
		2645.,
		-1.7e308,
		7225.,
		-1.7e308,
		7225.,
		-1.7e308,
		7225.,
		-1.7e308,
		7225.,
		-1.7e308,
		6196.,
		-1.7e308,
		6197.,
		-1.7e308,
		6773.,
		-1.7e308,
		6850.,
		-1.7e308,
		2225.,
		-1.7e308,
		2306.,
		-1.7e308,
		2474.,
		-1.7e308,
		2474.,
		-1.7e308,
		6361.,
		-1.7e308,
		6500.,
		-1.7e308,
		6784.,
		-1.7e308,
		6784.,
		-1.7e308,
		7072.,
		-1.7e308,
		6932.,
		-1.7e308,
		7220.,
		-1.7e308,
		7297.,
		-1.7e308,
		2741.,
		-1.7e308,
		2741.,
		-1.7e308,
		2741.,
		-1.7e308,
		2741.,
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
		40.,
		-1.7e308,
		42.,
		-1.7e308,
		42.5,
		-1.7e308,
		41.,
		-1.7e308,
		41.5,
		-1.7e308,
		43.5,
		-1.7e308,
		40.,
		-1.7e308,
		42.,
		-1.7e308,
		42.5,
		-1.7e308,
		41.,
		-1.7e308,
		41.5,
		-1.7e308,
		43.5,
		-1.7e308,
		75.5,
		-1.7e308,
		76.5,
		-1.7e308,
		76.5,
		-1.7e308,
		77.,
		-1.7e308,
		77.,
		-1.7e308,
		78.,
		-1.7e308,
		75.5,
		-1.7e308,
		76.5,
		-1.7e308,
		76.5,
		-1.7e308,
		77.,
		-1.7e308,
		77.,
		-1.7e308,
		78.,
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

 real clay0304m_x0comn_[56] = {
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
		0.,
		0.,
		0.,
		0.,
		0. };

 static real clay0304m_pd[96];
static real clay0304m_old_x[56];
static int clay0304m_xkind = -1;

 static int
clay0304m_xcheck(real *x)
{
	real *x1 = clay0304m_old_x, *xe = x + 56;
	errno = 0;
	if (clay0304m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	clay0304m_xkind = 0;
	return 1;
	}
 real
clay0304m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (clay0304m_xcheck(x) && wantfg == 2)
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
clay0304m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (clay0304m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[0] = v[0] + v[0];
	v[0] = x[4] + -7.;
	v[2] = v[0] * v[0];
	clay0304m_pd[1] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6814.*x[44];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[2] = v[0] + v[0];
	v[0] = x[5] + -7.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6678.*x[45];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[4] = v[0] + v[0];
	v[0] = x[6] + -8.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[5] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6958.*x[46];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] + -16.;
	v[1] = v[0] * v[0];
	clay0304m_pd[6] = v[0] + v[0];
	v[0] = x[7] + -8.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[7] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7033.*x[47];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[8] = v[0] + v[0];
	v[0] = x[4] + -77.;
	v[2] = v[0] * v[0];
	clay0304m_pd[9] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6556.*x[48];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[10] = v[0] + v[0];
	v[0] = x[5] + -77.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[11] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6697.*x[49];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[12] = v[0] + v[0];
	v[0] = x[6] + -78.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[13] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6985.*x[50];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[3] + -51.;
	v[1] = v[0] * v[0];
	clay0304m_pd[14] = v[0] + v[0];
	v[0] = x[7] + -78.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[15] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6985.*x[51];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[0] + -32.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[16] = v[0] + v[0];
	v[0] = x[4] + -47.;
	v[2] = v[0] * v[0];
	clay0304m_pd[17] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2025.*x[52];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[1] + -33.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[18] = v[0] + v[0];
	v[0] = x[5] + -47.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[19] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2106.*x[53];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[2] + -31.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[20] = v[0] + v[0];
	v[0] = x[6] + -48.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[21] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2317.*x[54];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[3] + -31.;
	v[1] = v[0] * v[0];
	clay0304m_pd[22] = v[0] + v[0];
	v[0] = x[7] + -48.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[23] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2362.*x[55];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[24] = v[0] + v[0];
	v[0] = x[4] + -13.;
	v[2] = v[0] * v[0];
	clay0304m_pd[25] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 5950.*x[44];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[26] = v[0] + v[0];
	v[0] = x[5] + -12.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[27] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 5953.*x[45];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[28] = v[0] + v[0];
	v[0] = x[6] + -11.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[29] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6517.*x[46];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[3] + -16.;
	v[1] = v[0] * v[0];
	clay0304m_pd[30] = v[0] + v[0];
	v[0] = x[7] + -11.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[31] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6592.*x[47];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[32] = v[0] + v[0];
	v[0] = x[4] + -83.;
	v[2] = v[0] * v[0];
	clay0304m_pd[33] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[48];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[34] = v[0] + v[0];
	v[0] = x[5] + -82.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[35] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[49];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[36] = v[0] + v[0];
	v[0] = x[6] + -81.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[37] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[50];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[3] + -51.;
	v[1] = v[0] * v[0];
	clay0304m_pd[38] = v[0] + v[0];
	v[0] = x[7] + -81.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[39] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[51];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[0] + -32.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[40] = v[0] + v[0];
	v[0] = x[4] + -53.;
	v[2] = v[0] * v[0];
	clay0304m_pd[41] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2541.*x[52];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[1] + -33.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[42] = v[0] + v[0];
	v[0] = x[5] + -52.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[43] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2541.*x[53];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[2] + -31.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[44] = v[0] + v[0];
	v[0] = x[6] + -51.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[45] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2584.*x[54];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[3] + -31.;
	v[1] = v[0] * v[0];
	clay0304m_pd[46] = v[0] + v[0];
	v[0] = x[7] + -51.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[47] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2629.*x[55];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[48] = v[0] + v[0];
	v[0] = x[4] + -7.;
	v[2] = v[0] * v[0];
	clay0304m_pd[49] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[44];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[50] = v[0] + v[0];
	v[0] = x[5] + -7.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[51] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[45];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[52] = v[0] + v[0];
	v[0] = x[6] + -8.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[53] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[46];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[3] + -14.;
	v[1] = v[0] * v[0];
	clay0304m_pd[54] = v[0] + v[0];
	v[0] = x[7] + -8.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[55] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[47];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[56] = v[0] + v[0];
	v[0] = x[4] + -77.;
	v[2] = v[0] * v[0];
	clay0304m_pd[57] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6171.*x[48];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[58] = v[0] + v[0];
	v[0] = x[5] + -77.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[59] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6172.*x[49];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[60] = v[0] + v[0];
	v[0] = x[6] + -78.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[61] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6748.*x[50];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[3] + -49.;
	v[1] = v[0] * v[0];
	clay0304m_pd[62] = v[0] + v[0];
	v[0] = x[7] + -78.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[63] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6825.*x[51];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[0] + -27.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[64] = v[0] + v[0];
	v[0] = x[4] + -47.;
	v[2] = v[0] * v[0];
	clay0304m_pd[65] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2209.*x[52];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[1] + -26.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[66] = v[0] + v[0];
	v[0] = x[5] + -47.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[67] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2290.*x[53];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[2] + -28.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[68] = v[0] + v[0];
	v[0] = x[6] + -48.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[69] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2458.*x[54];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[3] + -29.;
	v[1] = v[0] * v[0];
	clay0304m_pd[70] = v[0] + v[0];
	v[0] = x[7] + -48.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[71] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2458.*x[55];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[72] = v[0] + v[0];
	v[0] = x[4] + -13.;
	v[2] = v[0] * v[0];
	clay0304m_pd[73] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6325.*x[44];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[74] = v[0] + v[0];
	v[0] = x[5] + -12.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[75] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6464.*x[45];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[76] = v[0] + v[0];
	v[0] = x[6] + -11.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[77] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6748.*x[46];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[3] + -14.;
	v[1] = v[0] * v[0];
	clay0304m_pd[78] = v[0] + v[0];
	v[0] = x[7] + -11.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[79] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6748.*x[47];
	c[39] = t1;

  /***  constraint 41  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[80] = v[0] + v[0];
	v[0] = x[4] + -83.;
	v[2] = v[0] * v[0];
	clay0304m_pd[81] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7047.*x[48];
	c[40] = t1;

  /***  constraint 42  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[82] = v[0] + v[0];
	v[0] = x[5] + -82.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[83] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6907.*x[49];
	c[41] = t1;

  /***  constraint 43  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[84] = v[0] + v[0];
	v[0] = x[6] + -81.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[85] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7195.*x[50];
	c[42] = t1;

  /***  constraint 44  ***/

	v[0] = x[3] + -49.;
	v[1] = v[0] * v[0];
	clay0304m_pd[86] = v[0] + v[0];
	v[0] = x[7] + -81.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[87] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7272.*x[51];
	c[43] = t1;

  /***  constraint 45  ***/

	v[0] = x[0] + -27.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[88] = v[0] + v[0];
	v[0] = x[4] + -53.;
	v[2] = v[0] * v[0];
	clay0304m_pd[89] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2725.*x[52];
	c[44] = t1;

  /***  constraint 46  ***/

	v[0] = x[1] + -26.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[90] = v[0] + v[0];
	v[0] = x[5] + -52.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[91] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2725.*x[53];
	c[45] = t1;

  /***  constraint 47  ***/

	v[0] = x[2] + -28.5;
	v[1] = v[0] * v[0];
	clay0304m_pd[92] = v[0] + v[0];
	v[0] = x[6] + -51.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[93] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2725.*x[54];
	c[46] = t1;

  /***  constraint 48  ***/

	v[0] = x[3] + -29.;
	v[1] = v[0] * v[0];
	clay0304m_pd[94] = v[0] + v[0];
	v[0] = x[7] + -51.5;
	v[2] = v[0] * v[0];
	clay0304m_pd[95] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2725.*x[55];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[8];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[9];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += x[10];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[11];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += x[12];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[13];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[8];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += x[9];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += x[10];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[11];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += x[12];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += x[13];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[14];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[4];
	t1 += x[6];
	t1 += x[15];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[4];
	t1 += x[7];
	t1 += x[16];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[17];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += x[18];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[19];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[14];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[4];
	t1 += -x[6];
	t1 += x[15];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[4];
	t1 += -x[7];
	t1 += x[16];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[17];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += x[18];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[19];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 46.*x[20];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += 46.*x[21];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += 46.*x[22];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += 46.*x[23];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += 46.*x[24];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += 46.*x[25];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += 46.*x[26];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += 46.*x[27];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += 46.*x[28];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += 46.*x[29];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += 46.*x[30];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += 46.*x[31];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += 81.*x[32];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[4];
	t1 += -x[6];
	t1 += 81.*x[33];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[4];
	t1 += -x[7];
	t1 += 81.*x[34];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += 81.*x[35];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += 81.*x[36];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += 81.*x[37];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += 81.*x[38];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = -x[4];
	t1 += x[6];
	t1 += 81.*x[39];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -x[4];
	t1 += x[7];
	t1 += 81.*x[40];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += 81.*x[41];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += 81.*x[42];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += 81.*x[43];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = x[20];
	t1 += x[26];
	t1 += x[32];
	t1 += x[38];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = x[21];
	t1 += x[27];
	t1 += x[33];
	t1 += x[39];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = x[22];
	t1 += x[28];
	t1 += x[34];
	t1 += x[40];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = x[23];
	t1 += x[29];
	t1 += x[35];
	t1 += x[41];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[24];
	t1 += x[30];
	t1 += x[36];
	t1 += x[42];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[25];
	t1 += x[31];
	t1 += x[37];
	t1 += x[43];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[44];
	t1 += x[48];
	t1 += x[52];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[45];
	t1 += x[49];
	t1 += x[53];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[46];
	t1 += x[50];
	t1 += x[54];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[47];
	t1 += x[51];
	t1 += x[55];
	c[105] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[96] = clay0304m_pd[1];
	J[0] = clay0304m_pd[0];
	J[264] = 6814.;

   /*** derivatives for constraint 2 ***/

	J[120] = clay0304m_pd[3];
	J[24] = clay0304m_pd[2];
	J[269] = 6678.;

   /*** derivatives for constraint 3 ***/

	J[144] = clay0304m_pd[5];
	J[48] = clay0304m_pd[4];
	J[274] = 6958.;

   /*** derivatives for constraint 4 ***/

	J[168] = clay0304m_pd[7];
	J[72] = clay0304m_pd[6];
	J[279] = 7033.;

   /*** derivatives for constraint 5 ***/

	J[97] = clay0304m_pd[9];
	J[1] = clay0304m_pd[8];
	J[284] = 6556.;

   /*** derivatives for constraint 6 ***/

	J[121] = clay0304m_pd[11];
	J[25] = clay0304m_pd[10];
	J[289] = 6697.;

   /*** derivatives for constraint 7 ***/

	J[145] = clay0304m_pd[13];
	J[49] = clay0304m_pd[12];
	J[294] = 6985.;

   /*** derivatives for constraint 8 ***/

	J[169] = clay0304m_pd[15];
	J[73] = clay0304m_pd[14];
	J[299] = 6985.;

   /*** derivatives for constraint 9 ***/

	J[98] = clay0304m_pd[17];
	J[2] = clay0304m_pd[16];
	J[304] = 2025.;

   /*** derivatives for constraint 10 ***/

	J[122] = clay0304m_pd[19];
	J[26] = clay0304m_pd[18];
	J[309] = 2106.;

   /*** derivatives for constraint 11 ***/

	J[146] = clay0304m_pd[21];
	J[50] = clay0304m_pd[20];
	J[314] = 2317.;

   /*** derivatives for constraint 12 ***/

	J[170] = clay0304m_pd[23];
	J[74] = clay0304m_pd[22];
	J[319] = 2362.;

   /*** derivatives for constraint 13 ***/

	J[99] = clay0304m_pd[25];
	J[3] = clay0304m_pd[24];
	J[265] = 5950.;

   /*** derivatives for constraint 14 ***/

	J[123] = clay0304m_pd[27];
	J[27] = clay0304m_pd[26];
	J[270] = 5953.;

   /*** derivatives for constraint 15 ***/

	J[147] = clay0304m_pd[29];
	J[51] = clay0304m_pd[28];
	J[275] = 6517.;

   /*** derivatives for constraint 16 ***/

	J[171] = clay0304m_pd[31];
	J[75] = clay0304m_pd[30];
	J[280] = 6592.;

   /*** derivatives for constraint 17 ***/

	J[100] = clay0304m_pd[33];
	J[4] = clay0304m_pd[32];
	J[285] = 7432.;

   /*** derivatives for constraint 18 ***/

	J[124] = clay0304m_pd[35];
	J[28] = clay0304m_pd[34];
	J[290] = 7432.;

   /*** derivatives for constraint 19 ***/

	J[148] = clay0304m_pd[37];
	J[52] = clay0304m_pd[36];
	J[295] = 7432.;

   /*** derivatives for constraint 20 ***/

	J[172] = clay0304m_pd[39];
	J[76] = clay0304m_pd[38];
	J[300] = 7432.;

   /*** derivatives for constraint 21 ***/

	J[101] = clay0304m_pd[41];
	J[5] = clay0304m_pd[40];
	J[305] = 2541.;

   /*** derivatives for constraint 22 ***/

	J[125] = clay0304m_pd[43];
	J[29] = clay0304m_pd[42];
	J[310] = 2541.;

   /*** derivatives for constraint 23 ***/

	J[149] = clay0304m_pd[45];
	J[53] = clay0304m_pd[44];
	J[315] = 2584.;

   /*** derivatives for constraint 24 ***/

	J[173] = clay0304m_pd[47];
	J[77] = clay0304m_pd[46];
	J[320] = 2629.;

   /*** derivatives for constraint 25 ***/

	J[102] = clay0304m_pd[49];
	J[6] = clay0304m_pd[48];
	J[266] = 7189.;

   /*** derivatives for constraint 26 ***/

	J[126] = clay0304m_pd[51];
	J[30] = clay0304m_pd[50];
	J[271] = 7189.;

   /*** derivatives for constraint 27 ***/

	J[150] = clay0304m_pd[53];
	J[54] = clay0304m_pd[52];
	J[276] = 7189.;

   /*** derivatives for constraint 28 ***/

	J[174] = clay0304m_pd[55];
	J[78] = clay0304m_pd[54];
	J[281] = 7189.;

   /*** derivatives for constraint 29 ***/

	J[103] = clay0304m_pd[57];
	J[7] = clay0304m_pd[56];
	J[286] = 6171.;

   /*** derivatives for constraint 30 ***/

	J[127] = clay0304m_pd[59];
	J[31] = clay0304m_pd[58];
	J[291] = 6172.;

   /*** derivatives for constraint 31 ***/

	J[151] = clay0304m_pd[61];
	J[55] = clay0304m_pd[60];
	J[296] = 6748.;

   /*** derivatives for constraint 32 ***/

	J[175] = clay0304m_pd[63];
	J[79] = clay0304m_pd[62];
	J[301] = 6825.;

   /*** derivatives for constraint 33 ***/

	J[104] = clay0304m_pd[65];
	J[8] = clay0304m_pd[64];
	J[306] = 2209.;

   /*** derivatives for constraint 34 ***/

	J[128] = clay0304m_pd[67];
	J[32] = clay0304m_pd[66];
	J[311] = 2290.;

   /*** derivatives for constraint 35 ***/

	J[152] = clay0304m_pd[69];
	J[56] = clay0304m_pd[68];
	J[316] = 2458.;

   /*** derivatives for constraint 36 ***/

	J[176] = clay0304m_pd[71];
	J[80] = clay0304m_pd[70];
	J[321] = 2458.;

   /*** derivatives for constraint 37 ***/

	J[105] = clay0304m_pd[73];
	J[9] = clay0304m_pd[72];
	J[267] = 6325.;

   /*** derivatives for constraint 38 ***/

	J[129] = clay0304m_pd[75];
	J[33] = clay0304m_pd[74];
	J[272] = 6464.;

   /*** derivatives for constraint 39 ***/

	J[153] = clay0304m_pd[77];
	J[57] = clay0304m_pd[76];
	J[277] = 6748.;

   /*** derivatives for constraint 40 ***/

	J[177] = clay0304m_pd[79];
	J[81] = clay0304m_pd[78];
	J[282] = 6748.;

   /*** derivatives for constraint 41 ***/

	J[106] = clay0304m_pd[81];
	J[10] = clay0304m_pd[80];
	J[287] = 7047.;

   /*** derivatives for constraint 42 ***/

	J[130] = clay0304m_pd[83];
	J[34] = clay0304m_pd[82];
	J[292] = 6907.;

   /*** derivatives for constraint 43 ***/

	J[154] = clay0304m_pd[85];
	J[58] = clay0304m_pd[84];
	J[297] = 7195.;

   /*** derivatives for constraint 44 ***/

	J[178] = clay0304m_pd[87];
	J[82] = clay0304m_pd[86];
	J[302] = 7272.;

   /*** derivatives for constraint 45 ***/

	J[107] = clay0304m_pd[89];
	J[11] = clay0304m_pd[88];
	J[307] = 2725.;

   /*** derivatives for constraint 46 ***/

	J[131] = clay0304m_pd[91];
	J[35] = clay0304m_pd[90];
	J[312] = 2725.;

   /*** derivatives for constraint 47 ***/

	J[155] = clay0304m_pd[93];
	J[59] = clay0304m_pd[92];
	J[317] = 2725.;

   /*** derivatives for constraint 48 ***/

	J[179] = clay0304m_pd[95];
	J[83] = clay0304m_pd[94];
	J[322] = 2725.;

   /*** derivatives for constraint 49 ***/

	J[12] = -1.;
	J[36] = 1.;
	J[192] = 1.;

   /*** derivatives for constraint 50 ***/

	J[13] = -1.;
	J[60] = 1.;
	J[194] = 1.;

   /*** derivatives for constraint 51 ***/

	J[14] = -1.;
	J[84] = 1.;
	J[196] = 1.;

   /*** derivatives for constraint 52 ***/

	J[37] = -1.;
	J[61] = 1.;
	J[198] = 1.;

   /*** derivatives for constraint 53 ***/

	J[38] = -1.;
	J[85] = 1.;
	J[200] = 1.;

   /*** derivatives for constraint 54 ***/

	J[62] = -1.;
	J[86] = 1.;
	J[202] = 1.;

   /*** derivatives for constraint 55 ***/

	J[15] = 1.;
	J[39] = -1.;
	J[193] = 1.;

   /*** derivatives for constraint 56 ***/

	J[16] = 1.;
	J[63] = -1.;
	J[195] = 1.;

   /*** derivatives for constraint 57 ***/

	J[17] = 1.;
	J[87] = -1.;
	J[197] = 1.;

   /*** derivatives for constraint 58 ***/

	J[40] = 1.;
	J[64] = -1.;
	J[199] = 1.;

   /*** derivatives for constraint 59 ***/

	J[41] = 1.;
	J[88] = -1.;
	J[201] = 1.;

   /*** derivatives for constraint 60 ***/

	J[65] = 1.;
	J[89] = -1.;
	J[203] = 1.;

   /*** derivatives for constraint 61 ***/

	J[108] = -1.;
	J[132] = 1.;
	J[204] = 1.;

   /*** derivatives for constraint 62 ***/

	J[109] = -1.;
	J[156] = 1.;
	J[206] = 1.;

   /*** derivatives for constraint 63 ***/

	J[110] = -1.;
	J[180] = 1.;
	J[208] = 1.;

   /*** derivatives for constraint 64 ***/

	J[133] = -1.;
	J[157] = 1.;
	J[210] = 1.;

   /*** derivatives for constraint 65 ***/

	J[134] = -1.;
	J[181] = 1.;
	J[212] = 1.;

   /*** derivatives for constraint 66 ***/

	J[158] = -1.;
	J[182] = 1.;
	J[214] = 1.;

   /*** derivatives for constraint 67 ***/

	J[111] = 1.;
	J[135] = -1.;
	J[205] = 1.;

   /*** derivatives for constraint 68 ***/

	J[112] = 1.;
	J[159] = -1.;
	J[207] = 1.;

   /*** derivatives for constraint 69 ***/

	J[113] = 1.;
	J[183] = -1.;
	J[209] = 1.;

   /*** derivatives for constraint 70 ***/

	J[136] = 1.;
	J[160] = -1.;
	J[211] = 1.;

   /*** derivatives for constraint 71 ***/

	J[137] = 1.;
	J[184] = -1.;
	J[213] = 1.;

   /*** derivatives for constraint 72 ***/

	J[161] = 1.;
	J[185] = -1.;
	J[215] = 1.;

   /*** derivatives for constraint 73 ***/

	J[18] = 1.;
	J[42] = -1.;
	J[216] = 46.;

   /*** derivatives for constraint 74 ***/

	J[19] = 1.;
	J[66] = -1.;
	J[218] = 46.;

   /*** derivatives for constraint 75 ***/

	J[20] = 1.;
	J[90] = -1.;
	J[220] = 46.;

   /*** derivatives for constraint 76 ***/

	J[43] = 1.;
	J[67] = -1.;
	J[222] = 46.;

   /*** derivatives for constraint 77 ***/

	J[44] = 1.;
	J[91] = -1.;
	J[224] = 46.;

   /*** derivatives for constraint 78 ***/

	J[68] = 1.;
	J[92] = -1.;
	J[226] = 46.;

   /*** derivatives for constraint 79 ***/

	J[21] = -1.;
	J[45] = 1.;
	J[228] = 46.;

   /*** derivatives for constraint 80 ***/

	J[22] = -1.;
	J[69] = 1.;
	J[230] = 46.;

   /*** derivatives for constraint 81 ***/

	J[23] = -1.;
	J[93] = 1.;
	J[232] = 46.;

   /*** derivatives for constraint 82 ***/

	J[46] = -1.;
	J[70] = 1.;
	J[234] = 46.;

   /*** derivatives for constraint 83 ***/

	J[47] = -1.;
	J[94] = 1.;
	J[236] = 46.;

   /*** derivatives for constraint 84 ***/

	J[71] = -1.;
	J[95] = 1.;
	J[238] = 46.;

   /*** derivatives for constraint 85 ***/

	J[114] = 1.;
	J[138] = -1.;
	J[240] = 81.;

   /*** derivatives for constraint 86 ***/

	J[115] = 1.;
	J[162] = -1.;
	J[242] = 81.;

   /*** derivatives for constraint 87 ***/

	J[116] = 1.;
	J[186] = -1.;
	J[244] = 81.;

   /*** derivatives for constraint 88 ***/

	J[139] = 1.;
	J[163] = -1.;
	J[246] = 81.;

   /*** derivatives for constraint 89 ***/

	J[140] = 1.;
	J[187] = -1.;
	J[248] = 81.;

   /*** derivatives for constraint 90 ***/

	J[164] = 1.;
	J[188] = -1.;
	J[250] = 81.;

   /*** derivatives for constraint 91 ***/

	J[117] = -1.;
	J[141] = 1.;
	J[252] = 81.;

   /*** derivatives for constraint 92 ***/

	J[118] = -1.;
	J[165] = 1.;
	J[254] = 81.;

   /*** derivatives for constraint 93 ***/

	J[119] = -1.;
	J[189] = 1.;
	J[256] = 81.;

   /*** derivatives for constraint 94 ***/

	J[142] = -1.;
	J[166] = 1.;
	J[258] = 81.;

   /*** derivatives for constraint 95 ***/

	J[143] = -1.;
	J[190] = 1.;
	J[260] = 81.;

   /*** derivatives for constraint 96 ***/

	J[167] = -1.;
	J[191] = 1.;
	J[262] = 81.;

   /*** derivatives for constraint 97 ***/

	J[217] = 1.;
	J[229] = 1.;
	J[241] = 1.;
	J[253] = 1.;

   /*** derivatives for constraint 98 ***/

	J[219] = 1.;
	J[231] = 1.;
	J[243] = 1.;
	J[255] = 1.;

   /*** derivatives for constraint 99 ***/

	J[221] = 1.;
	J[233] = 1.;
	J[245] = 1.;
	J[257] = 1.;

   /*** derivatives for constraint 100 ***/

	J[223] = 1.;
	J[235] = 1.;
	J[247] = 1.;
	J[259] = 1.;

   /*** derivatives for constraint 101 ***/

	J[225] = 1.;
	J[237] = 1.;
	J[249] = 1.;
	J[261] = 1.;

   /*** derivatives for constraint 102 ***/

	J[227] = 1.;
	J[239] = 1.;
	J[251] = 1.;
	J[263] = 1.;

   /*** derivatives for constraint 103 ***/

	J[268] = 1.;
	J[288] = 1.;
	J[308] = 1.;

   /*** derivatives for constraint 104 ***/

	J[273] = 1.;
	J[293] = 1.;
	J[313] = 1.;

   /*** derivatives for constraint 105 ***/

	J[278] = 1.;
	J[298] = 1.;
	J[318] = 1.;

   /*** derivatives for constraint 106 ***/

	J[283] = 1.;
	J[303] = 1.;
	J[323] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
