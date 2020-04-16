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
 fint clay0205m_auxcom_[1] = { 40 /* nlc */ };
 fint clay0205m_funcom_[497] = {
	80 /* nvar */,
	1 /* nobj */,
	135 /* ncon */,
	410 /* nzc */,
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
	217,
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
	351,
	353,
	355,
	357,
	359,
	361,
	366,
	371,
	376,
	381,
	386,
	391,
	396,
	401,
	406,
	411,

	/* rownos */
	1,
	6,
	11,
	16,
	21,
	26,
	31,
	36,
	41,
	42,
	43,
	44,
	51,
	52,
	53,
	54,
	81,
	82,
	83,
	84,
	91,
	92,
	93,
	94,
	2,
	7,
	12,
	17,
	22,
	27,
	32,
	37,
	41,
	45,
	46,
	47,
	51,
	55,
	56,
	57,
	81,
	85,
	86,
	87,
	91,
	95,
	96,
	97,
	3,
	8,
	13,
	18,
	23,
	28,
	33,
	38,
	42,
	45,
	48,
	49,
	52,
	55,
	58,
	59,
	82,
	85,
	88,
	89,
	92,
	95,
	98,
	99,
	4,
	9,
	14,
	19,
	24,
	29,
	34,
	39,
	43,
	46,
	48,
	50,
	53,
	56,
	58,
	60,
	83,
	86,
	88,
	90,
	93,
	96,
	98,
	100,
	5,
	10,
	15,
	20,
	25,
	30,
	35,
	40,
	44,
	47,
	49,
	50,
	54,
	57,
	59,
	60,
	84,
	87,
	89,
	90,
	94,
	97,
	99,
	100,
	1,
	6,
	11,
	16,
	21,
	26,
	31,
	36,
	61,
	62,
	63,
	64,
	71,
	72,
	73,
	74,
	101,
	102,
	103,
	104,
	111,
	112,
	113,
	114,
	2,
	7,
	12,
	17,
	22,
	27,
	32,
	37,
	61,
	65,
	66,
	67,
	71,
	75,
	76,
	77,
	101,
	105,
	106,
	107,
	111,
	115,
	116,
	117,
	3,
	8,
	13,
	18,
	23,
	28,
	33,
	38,
	62,
	65,
	68,
	69,
	72,
	75,
	78,
	79,
	102,
	105,
	108,
	109,
	112,
	115,
	118,
	119,
	4,
	9,
	14,
	19,
	24,
	29,
	34,
	39,
	63,
	66,
	68,
	70,
	73,
	76,
	78,
	80,
	103,
	106,
	108,
	110,
	113,
	116,
	118,
	120,
	5,
	10,
	15,
	20,
	25,
	30,
	35,
	40,
	64,
	67,
	69,
	70,
	74,
	77,
	79,
	80,
	104,
	107,
	109,
	110,
	114,
	117,
	119,
	120,
	41,
	51,
	42,
	52,
	43,
	53,
	44,
	54,
	45,
	55,
	46,
	56,
	47,
	57,
	48,
	58,
	49,
	59,
	50,
	60,
	61,
	71,
	62,
	72,
	63,
	73,
	64,
	74,
	65,
	75,
	66,
	76,
	67,
	77,
	68,
	78,
	69,
	79,
	70,
	80,
	81,
	121,
	82,
	122,
	83,
	123,
	84,
	124,
	85,
	125,
	86,
	126,
	87,
	127,
	88,
	128,
	89,
	129,
	90,
	130,
	91,
	121,
	92,
	122,
	93,
	123,
	94,
	124,
	95,
	125,
	96,
	126,
	97,
	127,
	98,
	128,
	99,
	129,
	100,
	130,
	101,
	121,
	102,
	122,
	103,
	123,
	104,
	124,
	105,
	125,
	106,
	126,
	107,
	127,
	108,
	128,
	109,
	129,
	110,
	130,
	111,
	121,
	112,
	122,
	113,
	123,
	114,
	124,
	115,
	125,
	116,
	126,
	117,
	127,
	118,
	128,
	119,
	129,
	120,
	130,
	1,
	11,
	21,
	31,
	131,
	2,
	12,
	22,
	32,
	132,
	3,
	13,
	23,
	33,
	133,
	4,
	14,
	24,
	34,
	134,
	5,
	15,
	25,
	35,
	135,
	6,
	16,
	26,
	36,
	131,
	7,
	17,
	27,
	37,
	132,
	8,
	18,
	28,
	38,
	133,
	9,
	19,
	29,
	39,
	134,
	10,
	20,
	30,
	40,
	135 };

 real clay0205m_boundc_[1+160+270] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		11.5,
		57.5,
		12.5,
		56.5,
		10.5,
		58.5,
		10.,
		59.,
		13.5,
		55.5,
		7.,
		87.,
		6.5,
		87.5,
		5.5,
		88.5,
		5.5,
		88.5,
		7.5,
		86.5,
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
		7696.,
		-1.7e308,
		6581.,
		-1.7e308,
		6722.,
		-1.7e308,
		7051.25,
		-1.7e308,
		7010.,
		-1.7e308,
		6442.,
		-1.7e308,
		7076.,
		-1.7e308,
		7069.,
		-1.7e308,
		7693.,
		-1.7e308,
		7778.,
		-1.7e308,
		6625.,
		-1.7e308,
		7457.,
		-1.7e308,
		7457.,
		-1.7e308,
		7498.25,
		-1.7e308,
		7457.,
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
		5785.,
		-1.7e308,
		7501.,
		-1.7e308,
		7650.,
		-1.7e308,
		7954.,
		-1.7e308,
		7954.,
		-1.7e308,
		7354.,
		-1.7e308,
		7072.,
		-1.7e308,
		6932.,
		-1.7e308,
		7258.25,
		-1.7e308,
		7297.,
		-1.7e308,
		6800.,
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
		44.,
		-1.7e308,
		46.,
		-1.7e308,
		46.5,
		-1.7e308,
		43.,
		-1.7e308,
		48.5,
		-1.7e308,
		45.,
		-1.7e308,
		45.5,
		-1.7e308,
		45.,
		-1.7e308,
		47.,
		-1.7e308,
		47.5,
		-1.7e308,
		44.,
		-1.7e308,
		46.,
		-1.7e308,
		46.5,
		-1.7e308,
		43.,
		-1.7e308,
		48.5,
		-1.7e308,
		45.,
		-1.7e308,
		45.5,
		-1.7e308,
		80.5,
		-1.7e308,
		81.5,
		-1.7e308,
		81.5,
		-1.7e308,
		79.5,
		-1.7e308,
		82.,
		-1.7e308,
		82.,
		-1.7e308,
		80.,
		-1.7e308,
		83.,
		-1.7e308,
		81.,
		-1.7e308,
		81.,
		-1.7e308,
		80.5,
		-1.7e308,
		81.5,
		-1.7e308,
		81.5,
		-1.7e308,
		79.5,
		-1.7e308,
		82.,
		-1.7e308,
		82.,
		-1.7e308,
		80.,
		-1.7e308,
		83.,
		-1.7e308,
		81.,
		-1.7e308,
		81.,
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

 real clay0205m_x0comn_[80] = {
		11.5,
		12.5,
		10.5,
		10.,
		13.5,
		7.,
		6.5,
		5.5,
		5.5,
		7.5,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real clay0205m_pd[80];
static real clay0205m_old_x[80];
static int clay0205m_xkind = -1;

 static int
clay0205m_xcheck(real *x)
{
	real *x1 = clay0205m_old_x, *xe = x + 80;
	errno = 0;
	if (clay0205m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	clay0205m_xkind = 0;
	return 1;
	}
 real
clay0205m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (clay0205m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 300.*x[10];
	rv += 240.*x[11];
	rv += 210.*x[12];
	rv += 50.*x[13];
	rv += 100.*x[14];
	rv += 150.*x[15];
	rv += 30.*x[16];
	rv += 120.*x[17];
	rv += 25.*x[18];
	rv += 60.*x[19];
	rv += 300.*x[20];
	rv += 240.*x[21];
	rv += 210.*x[22];
	rv += 50.*x[23];
	rv += 100.*x[24];
	rv += 150.*x[25];
	rv += 30.*x[26];
	rv += 120.*x[27];
	rv += 25.*x[28];
	rv += 60.*x[29];
	;}

	if (wantfg & 2) {
	g[10] = 300.;
	g[11] = 240.;
	g[12] = 210.;
	g[13] = 50.;
	g[14] = 100.;
	g[15] = 150.;
	g[16] = 30.;
	g[17] = 120.;
	g[18] = 25.;
	g[19] = 60.;
	g[20] = 300.;
	g[21] = 240.;
	g[22] = 210.;
	g[23] = 50.;
	g[24] = 100.;
	g[25] = 150.;
	g[26] = 30.;
	g[27] = 120.;
	g[28] = 25.;
	g[29] = 60.;
	}

	return rv;
}

 void
clay0205m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (clay0205m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[0] = v[0] + v[0];
	v[0] = x[5] + -7.;
	v[2] = v[0] * v[0];
	clay0205m_pd[1] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7964.*x[70];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[2] = v[0] + v[0];
	v[0] = x[6] + -7.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7808.*x[71];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[4] = v[0] + v[0];
	v[0] = x[7] + -8.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[5] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8128.*x[72];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[3] + -16.;
	v[1] = v[0] * v[0];
	clay0205m_pd[6] = v[0] + v[0];
	v[0] = x[8] + -8.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[7] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8213.*x[73];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[4] + -19.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[8] = v[0] + v[0];
	v[0] = x[9] + -6.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[9] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7660.*x[74];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[10] = v[0] + v[0];
	v[0] = x[5] + -77.;
	v[2] = v[0] * v[0];
	clay0205m_pd[11] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6481.*x[75];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[12] = v[0] + v[0];
	v[0] = x[6] + -77.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[13] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6622.*x[76];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[14] = v[0] + v[0];
	v[0] = x[7] + -78.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[15] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6951.25*x[77];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[3] + -51.;
	v[1] = v[0] * v[0];
	clay0205m_pd[16] = v[0] + v[0];
	v[0] = x[8] + -78.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[17] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6910.*x[78];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[4] + -54.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[18] = v[0] + v[0];
	v[0] = x[9] + -76.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[19] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6342.*x[79];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[20] = v[0] + v[0];
	v[0] = x[5] + -13.;
	v[2] = v[0] * v[0];
	clay0205m_pd[21] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7040.*x[70];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[22] = v[0] + v[0];
	v[0] = x[6] + -12.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[23] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7033.*x[71];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[24] = v[0] + v[0];
	v[0] = x[7] + -11.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[25] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7657.*x[72];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[3] + -16.;
	v[1] = v[0] * v[0];
	clay0205m_pd[26] = v[0] + v[0];
	v[0] = x[8] + -11.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[27] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7742.*x[73];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[4] + -19.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[28] = v[0] + v[0];
	v[0] = x[9] + -13.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[29] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6589.*x[74];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[30] = v[0] + v[0];
	v[0] = x[5] + -83.;
	v[2] = v[0] * v[0];
	clay0205m_pd[31] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7357.*x[75];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[32] = v[0] + v[0];
	v[0] = x[6] + -82.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[33] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7357.*x[76];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[34] = v[0] + v[0];
	v[0] = x[7] + -81.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[35] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7398.25*x[77];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[3] + -51.;
	v[1] = v[0] * v[0];
	clay0205m_pd[36] = v[0] + v[0];
	v[0] = x[8] + -81.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[37] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7357.*x[78];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[4] + -54.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[38] = v[0] + v[0];
	v[0] = x[9] + -83.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[39] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7357.*x[79];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[40] = v[0] + v[0];
	v[0] = x[5] + -7.;
	v[2] = v[0] * v[0];
	clay0205m_pd[41] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[70];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[42] = v[0] + v[0];
	v[0] = x[6] + -7.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[43] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[71];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[44] = v[0] + v[0];
	v[0] = x[7] + -8.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[45] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[72];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[3] + -14.;
	v[1] = v[0] * v[0];
	clay0205m_pd[46] = v[0] + v[0];
	v[0] = x[8] + -8.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[47] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[73];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[4] + -10.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[48] = v[0] + v[0];
	v[0] = x[9] + -6.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[49] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 8389.*x[74];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[50] = v[0] + v[0];
	v[0] = x[5] + -77.;
	v[2] = v[0] * v[0];
	clay0205m_pd[51] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6096.*x[75];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[52] = v[0] + v[0];
	v[0] = x[6] + -77.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[53] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6097.*x[76];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[54] = v[0] + v[0];
	v[0] = x[7] + -78.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[55] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6711.25*x[77];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[3] + -49.;
	v[1] = v[0] * v[0];
	clay0205m_pd[56] = v[0] + v[0];
	v[0] = x[8] + -78.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[57] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6750.*x[78];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[4] + -45.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[58] = v[0] + v[0];
	v[0] = x[9] + -76.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[59] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 5685.*x[79];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[60] = v[0] + v[0];
	v[0] = x[5] + -13.;
	v[2] = v[0] * v[0];
	clay0205m_pd[61] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7465.*x[70];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[62] = v[0] + v[0];
	v[0] = x[6] + -12.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[63] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7614.*x[71];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[64] = v[0] + v[0];
	v[0] = x[7] + -11.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[65] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7918.*x[72];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[3] + -14.;
	v[1] = v[0] * v[0];
	clay0205m_pd[66] = v[0] + v[0];
	v[0] = x[8] + -11.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[67] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7918.*x[73];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[4] + -10.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[68] = v[0] + v[0];
	v[0] = x[9] + -13.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[69] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7318.*x[74];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[70] = v[0] + v[0];
	v[0] = x[5] + -83.;
	v[2] = v[0] * v[0];
	clay0205m_pd[71] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6972.*x[75];
	c[35] = t1;

  /***  constraint 37  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[72] = v[0] + v[0];
	v[0] = x[6] + -82.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[73] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6832.*x[76];
	c[36] = t1;

  /***  constraint 38  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[74] = v[0] + v[0];
	v[0] = x[7] + -81.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[75] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7158.25*x[77];
	c[37] = t1;

  /***  constraint 39  ***/

	v[0] = x[3] + -49.;
	v[1] = v[0] * v[0];
	clay0205m_pd[76] = v[0] + v[0];
	v[0] = x[8] + -81.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[77] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7197.*x[78];
	c[38] = t1;

  /***  constraint 40  ***/

	v[0] = x[4] + -45.5;
	v[1] = v[0] * v[0];
	clay0205m_pd[78] = v[0] + v[0];
	v[0] = x[9] + -83.5;
	v[2] = v[0] * v[0];
	clay0205m_pd[79] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6700.*x[79];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[10];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[11];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += x[12];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[0];
	t1 += x[4];
	t1 += x[13];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[14];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += x[15];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[1];
	t1 += x[4];
	t1 += x[16];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += x[17];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[2];
	t1 += x[4];
	t1 += x[18];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[19];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[10];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += x[11];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += x[12];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[0];
	t1 += -x[4];
	t1 += x[13];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[14];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += x[15];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += x[16];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += x[17];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[2];
	t1 += -x[4];
	t1 += x[18];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += x[19];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += x[20];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += x[21];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[5];
	t1 += x[8];
	t1 += x[22];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[5];
	t1 += x[9];
	t1 += x[23];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += x[24];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += x[25];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[6];
	t1 += x[9];
	t1 += x[26];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += x[27];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += x[28];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += x[29];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += x[20];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += x[21];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[5];
	t1 += -x[8];
	t1 += x[22];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[5];
	t1 += -x[9];
	t1 += x[23];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += x[24];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[6];
	t1 += -x[8];
	t1 += x[25];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[6];
	t1 += -x[9];
	t1 += x[26];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += x[27];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += x[28];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += x[29];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 51.*x[30];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += 51.*x[31];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[0];
	t1 += -x[3];
	t1 += 51.*x[32];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[0];
	t1 += -x[4];
	t1 += 51.*x[33];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += 51.*x[34];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[1];
	t1 += -x[3];
	t1 += 51.*x[35];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[1];
	t1 += -x[4];
	t1 += 51.*x[36];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[2];
	t1 += -x[3];
	t1 += 51.*x[37];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[2];
	t1 += -x[4];
	t1 += 51.*x[38];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += 51.*x[39];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += 51.*x[40];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += 51.*x[41];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = -x[0];
	t1 += x[3];
	t1 += 51.*x[42];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = -x[0];
	t1 += x[4];
	t1 += 51.*x[43];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += 51.*x[44];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = -x[1];
	t1 += x[3];
	t1 += 51.*x[45];
	c[95] = t1;

  /***  constraint 97  ***/

	t1 = -x[1];
	t1 += x[4];
	t1 += 51.*x[46];
	c[96] = t1;

  /***  constraint 98  ***/

	t1 = -x[2];
	t1 += x[3];
	t1 += 51.*x[47];
	c[97] = t1;

  /***  constraint 99  ***/

	t1 = -x[2];
	t1 += x[4];
	t1 += 51.*x[48];
	c[98] = t1;

  /***  constraint 100  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += 51.*x[49];
	c[99] = t1;

  /***  constraint 101  ***/

	t1 = x[5];
	t1 += -x[6];
	t1 += 86.*x[50];
	c[100] = t1;

  /***  constraint 102  ***/

	t1 = x[5];
	t1 += -x[7];
	t1 += 86.*x[51];
	c[101] = t1;

  /***  constraint 103  ***/

	t1 = x[5];
	t1 += -x[8];
	t1 += 86.*x[52];
	c[102] = t1;

  /***  constraint 104  ***/

	t1 = x[5];
	t1 += -x[9];
	t1 += 86.*x[53];
	c[103] = t1;

  /***  constraint 105  ***/

	t1 = x[6];
	t1 += -x[7];
	t1 += 86.*x[54];
	c[104] = t1;

  /***  constraint 106  ***/

	t1 = x[6];
	t1 += -x[8];
	t1 += 86.*x[55];
	c[105] = t1;

  /***  constraint 107  ***/

	t1 = x[6];
	t1 += -x[9];
	t1 += 86.*x[56];
	c[106] = t1;

  /***  constraint 108  ***/

	t1 = x[7];
	t1 += -x[8];
	t1 += 86.*x[57];
	c[107] = t1;

  /***  constraint 109  ***/

	t1 = x[7];
	t1 += -x[9];
	t1 += 86.*x[58];
	c[108] = t1;

  /***  constraint 110  ***/

	t1 = x[8];
	t1 += -x[9];
	t1 += 86.*x[59];
	c[109] = t1;

  /***  constraint 111  ***/

	t1 = -x[5];
	t1 += x[6];
	t1 += 86.*x[60];
	c[110] = t1;

  /***  constraint 112  ***/

	t1 = -x[5];
	t1 += x[7];
	t1 += 86.*x[61];
	c[111] = t1;

  /***  constraint 113  ***/

	t1 = -x[5];
	t1 += x[8];
	t1 += 86.*x[62];
	c[112] = t1;

  /***  constraint 114  ***/

	t1 = -x[5];
	t1 += x[9];
	t1 += 86.*x[63];
	c[113] = t1;

  /***  constraint 115  ***/

	t1 = -x[6];
	t1 += x[7];
	t1 += 86.*x[64];
	c[114] = t1;

  /***  constraint 116  ***/

	t1 = -x[6];
	t1 += x[8];
	t1 += 86.*x[65];
	c[115] = t1;

  /***  constraint 117  ***/

	t1 = -x[6];
	t1 += x[9];
	t1 += 86.*x[66];
	c[116] = t1;

  /***  constraint 118  ***/

	t1 = -x[7];
	t1 += x[8];
	t1 += 86.*x[67];
	c[117] = t1;

  /***  constraint 119  ***/

	t1 = -x[7];
	t1 += x[9];
	t1 += 86.*x[68];
	c[118] = t1;

  /***  constraint 120  ***/

	t1 = -x[8];
	t1 += x[9];
	t1 += 86.*x[69];
	c[119] = t1;

  /***  constraint 121  ***/

	t1 = x[30];
	t1 += x[40];
	t1 += x[50];
	t1 += x[60];
	c[120] = t1;

  /***  constraint 122  ***/

	t1 = x[31];
	t1 += x[41];
	t1 += x[51];
	t1 += x[61];
	c[121] = t1;

  /***  constraint 123  ***/

	t1 = x[32];
	t1 += x[42];
	t1 += x[52];
	t1 += x[62];
	c[122] = t1;

  /***  constraint 124  ***/

	t1 = x[33];
	t1 += x[43];
	t1 += x[53];
	t1 += x[63];
	c[123] = t1;

  /***  constraint 125  ***/

	t1 = x[34];
	t1 += x[44];
	t1 += x[54];
	t1 += x[64];
	c[124] = t1;

  /***  constraint 126  ***/

	t1 = x[35];
	t1 += x[45];
	t1 += x[55];
	t1 += x[65];
	c[125] = t1;

  /***  constraint 127  ***/

	t1 = x[36];
	t1 += x[46];
	t1 += x[56];
	t1 += x[66];
	c[126] = t1;

  /***  constraint 128  ***/

	t1 = x[37];
	t1 += x[47];
	t1 += x[57];
	t1 += x[67];
	c[127] = t1;

  /***  constraint 129  ***/

	t1 = x[38];
	t1 += x[48];
	t1 += x[58];
	t1 += x[68];
	c[128] = t1;

  /***  constraint 130  ***/

	t1 = x[39];
	t1 += x[49];
	t1 += x[59];
	t1 += x[69];
	c[129] = t1;

  /***  constraint 131  ***/

	t1 = x[70];
	t1 += x[75];
	c[130] = t1;

  /***  constraint 132  ***/

	t1 = x[71];
	t1 += x[76];
	c[131] = t1;

  /***  constraint 133  ***/

	t1 = x[72];
	t1 += x[77];
	c[132] = t1;

  /***  constraint 134  ***/

	t1 = x[73];
	t1 += x[78];
	c[133] = t1;

  /***  constraint 135  ***/

	t1 = x[74];
	t1 += x[79];
	c[134] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[120] = clay0205m_pd[1];
	J[0] = clay0205m_pd[0];
	J[360] = 7964.;

   /*** derivatives for constraint 2 ***/

	J[144] = clay0205m_pd[3];
	J[24] = clay0205m_pd[2];
	J[365] = 7808.;

   /*** derivatives for constraint 3 ***/

	J[168] = clay0205m_pd[5];
	J[48] = clay0205m_pd[4];
	J[370] = 8128.;

   /*** derivatives for constraint 4 ***/

	J[192] = clay0205m_pd[7];
	J[72] = clay0205m_pd[6];
	J[375] = 8213.;

   /*** derivatives for constraint 5 ***/

	J[216] = clay0205m_pd[9];
	J[96] = clay0205m_pd[8];
	J[380] = 7660.;

   /*** derivatives for constraint 6 ***/

	J[121] = clay0205m_pd[11];
	J[1] = clay0205m_pd[10];
	J[385] = 6481.;

   /*** derivatives for constraint 7 ***/

	J[145] = clay0205m_pd[13];
	J[25] = clay0205m_pd[12];
	J[390] = 6622.;

   /*** derivatives for constraint 8 ***/

	J[169] = clay0205m_pd[15];
	J[49] = clay0205m_pd[14];
	J[395] = 6951.25;

   /*** derivatives for constraint 9 ***/

	J[193] = clay0205m_pd[17];
	J[73] = clay0205m_pd[16];
	J[400] = 6910.;

   /*** derivatives for constraint 10 ***/

	J[217] = clay0205m_pd[19];
	J[97] = clay0205m_pd[18];
	J[405] = 6342.;

   /*** derivatives for constraint 11 ***/

	J[122] = clay0205m_pd[21];
	J[2] = clay0205m_pd[20];
	J[361] = 7040.;

   /*** derivatives for constraint 12 ***/

	J[146] = clay0205m_pd[23];
	J[26] = clay0205m_pd[22];
	J[366] = 7033.;

   /*** derivatives for constraint 13 ***/

	J[170] = clay0205m_pd[25];
	J[50] = clay0205m_pd[24];
	J[371] = 7657.;

   /*** derivatives for constraint 14 ***/

	J[194] = clay0205m_pd[27];
	J[74] = clay0205m_pd[26];
	J[376] = 7742.;

   /*** derivatives for constraint 15 ***/

	J[218] = clay0205m_pd[29];
	J[98] = clay0205m_pd[28];
	J[381] = 6589.;

   /*** derivatives for constraint 16 ***/

	J[123] = clay0205m_pd[31];
	J[3] = clay0205m_pd[30];
	J[386] = 7357.;

   /*** derivatives for constraint 17 ***/

	J[147] = clay0205m_pd[33];
	J[27] = clay0205m_pd[32];
	J[391] = 7357.;

   /*** derivatives for constraint 18 ***/

	J[171] = clay0205m_pd[35];
	J[51] = clay0205m_pd[34];
	J[396] = 7398.25;

   /*** derivatives for constraint 19 ***/

	J[195] = clay0205m_pd[37];
	J[75] = clay0205m_pd[36];
	J[401] = 7357.;

   /*** derivatives for constraint 20 ***/

	J[219] = clay0205m_pd[39];
	J[99] = clay0205m_pd[38];
	J[406] = 7357.;

   /*** derivatives for constraint 21 ***/

	J[124] = clay0205m_pd[41];
	J[4] = clay0205m_pd[40];
	J[362] = 8389.;

   /*** derivatives for constraint 22 ***/

	J[148] = clay0205m_pd[43];
	J[28] = clay0205m_pd[42];
	J[367] = 8389.;

   /*** derivatives for constraint 23 ***/

	J[172] = clay0205m_pd[45];
	J[52] = clay0205m_pd[44];
	J[372] = 8389.;

   /*** derivatives for constraint 24 ***/

	J[196] = clay0205m_pd[47];
	J[76] = clay0205m_pd[46];
	J[377] = 8389.;

   /*** derivatives for constraint 25 ***/

	J[220] = clay0205m_pd[49];
	J[100] = clay0205m_pd[48];
	J[382] = 8389.;

   /*** derivatives for constraint 26 ***/

	J[125] = clay0205m_pd[51];
	J[5] = clay0205m_pd[50];
	J[387] = 6096.;

   /*** derivatives for constraint 27 ***/

	J[149] = clay0205m_pd[53];
	J[29] = clay0205m_pd[52];
	J[392] = 6097.;

   /*** derivatives for constraint 28 ***/

	J[173] = clay0205m_pd[55];
	J[53] = clay0205m_pd[54];
	J[397] = 6711.25;

   /*** derivatives for constraint 29 ***/

	J[197] = clay0205m_pd[57];
	J[77] = clay0205m_pd[56];
	J[402] = 6750.;

   /*** derivatives for constraint 30 ***/

	J[221] = clay0205m_pd[59];
	J[101] = clay0205m_pd[58];
	J[407] = 5685.;

   /*** derivatives for constraint 31 ***/

	J[126] = clay0205m_pd[61];
	J[6] = clay0205m_pd[60];
	J[363] = 7465.;

   /*** derivatives for constraint 32 ***/

	J[150] = clay0205m_pd[63];
	J[30] = clay0205m_pd[62];
	J[368] = 7614.;

   /*** derivatives for constraint 33 ***/

	J[174] = clay0205m_pd[65];
	J[54] = clay0205m_pd[64];
	J[373] = 7918.;

   /*** derivatives for constraint 34 ***/

	J[198] = clay0205m_pd[67];
	J[78] = clay0205m_pd[66];
	J[378] = 7918.;

   /*** derivatives for constraint 35 ***/

	J[222] = clay0205m_pd[69];
	J[102] = clay0205m_pd[68];
	J[383] = 7318.;

   /*** derivatives for constraint 36 ***/

	J[127] = clay0205m_pd[71];
	J[7] = clay0205m_pd[70];
	J[388] = 6972.;

   /*** derivatives for constraint 37 ***/

	J[151] = clay0205m_pd[73];
	J[31] = clay0205m_pd[72];
	J[393] = 6832.;

   /*** derivatives for constraint 38 ***/

	J[175] = clay0205m_pd[75];
	J[55] = clay0205m_pd[74];
	J[398] = 7158.25;

   /*** derivatives for constraint 39 ***/

	J[199] = clay0205m_pd[77];
	J[79] = clay0205m_pd[76];
	J[403] = 7197.;

   /*** derivatives for constraint 40 ***/

	J[223] = clay0205m_pd[79];
	J[103] = clay0205m_pd[78];
	J[408] = 6700.;

   /*** derivatives for constraint 41 ***/

	J[8] = -1.;
	J[32] = 1.;
	J[240] = 1.;

   /*** derivatives for constraint 42 ***/

	J[9] = -1.;
	J[56] = 1.;
	J[242] = 1.;

   /*** derivatives for constraint 43 ***/

	J[10] = -1.;
	J[80] = 1.;
	J[244] = 1.;

   /*** derivatives for constraint 44 ***/

	J[11] = -1.;
	J[104] = 1.;
	J[246] = 1.;

   /*** derivatives for constraint 45 ***/

	J[33] = -1.;
	J[57] = 1.;
	J[248] = 1.;

   /*** derivatives for constraint 46 ***/

	J[34] = -1.;
	J[81] = 1.;
	J[250] = 1.;

   /*** derivatives for constraint 47 ***/

	J[35] = -1.;
	J[105] = 1.;
	J[252] = 1.;

   /*** derivatives for constraint 48 ***/

	J[58] = -1.;
	J[82] = 1.;
	J[254] = 1.;

   /*** derivatives for constraint 49 ***/

	J[59] = -1.;
	J[106] = 1.;
	J[256] = 1.;

   /*** derivatives for constraint 50 ***/

	J[83] = -1.;
	J[107] = 1.;
	J[258] = 1.;

   /*** derivatives for constraint 51 ***/

	J[12] = 1.;
	J[36] = -1.;
	J[241] = 1.;

   /*** derivatives for constraint 52 ***/

	J[13] = 1.;
	J[60] = -1.;
	J[243] = 1.;

   /*** derivatives for constraint 53 ***/

	J[14] = 1.;
	J[84] = -1.;
	J[245] = 1.;

   /*** derivatives for constraint 54 ***/

	J[15] = 1.;
	J[108] = -1.;
	J[247] = 1.;

   /*** derivatives for constraint 55 ***/

	J[37] = 1.;
	J[61] = -1.;
	J[249] = 1.;

   /*** derivatives for constraint 56 ***/

	J[38] = 1.;
	J[85] = -1.;
	J[251] = 1.;

   /*** derivatives for constraint 57 ***/

	J[39] = 1.;
	J[109] = -1.;
	J[253] = 1.;

   /*** derivatives for constraint 58 ***/

	J[62] = 1.;
	J[86] = -1.;
	J[255] = 1.;

   /*** derivatives for constraint 59 ***/

	J[63] = 1.;
	J[110] = -1.;
	J[257] = 1.;

   /*** derivatives for constraint 60 ***/

	J[87] = 1.;
	J[111] = -1.;
	J[259] = 1.;

   /*** derivatives for constraint 61 ***/

	J[128] = -1.;
	J[152] = 1.;
	J[260] = 1.;

   /*** derivatives for constraint 62 ***/

	J[129] = -1.;
	J[176] = 1.;
	J[262] = 1.;

   /*** derivatives for constraint 63 ***/

	J[130] = -1.;
	J[200] = 1.;
	J[264] = 1.;

   /*** derivatives for constraint 64 ***/

	J[131] = -1.;
	J[224] = 1.;
	J[266] = 1.;

   /*** derivatives for constraint 65 ***/

	J[153] = -1.;
	J[177] = 1.;
	J[268] = 1.;

   /*** derivatives for constraint 66 ***/

	J[154] = -1.;
	J[201] = 1.;
	J[270] = 1.;

   /*** derivatives for constraint 67 ***/

	J[155] = -1.;
	J[225] = 1.;
	J[272] = 1.;

   /*** derivatives for constraint 68 ***/

	J[178] = -1.;
	J[202] = 1.;
	J[274] = 1.;

   /*** derivatives for constraint 69 ***/

	J[179] = -1.;
	J[226] = 1.;
	J[276] = 1.;

   /*** derivatives for constraint 70 ***/

	J[203] = -1.;
	J[227] = 1.;
	J[278] = 1.;

   /*** derivatives for constraint 71 ***/

	J[132] = 1.;
	J[156] = -1.;
	J[261] = 1.;

   /*** derivatives for constraint 72 ***/

	J[133] = 1.;
	J[180] = -1.;
	J[263] = 1.;

   /*** derivatives for constraint 73 ***/

	J[134] = 1.;
	J[204] = -1.;
	J[265] = 1.;

   /*** derivatives for constraint 74 ***/

	J[135] = 1.;
	J[228] = -1.;
	J[267] = 1.;

   /*** derivatives for constraint 75 ***/

	J[157] = 1.;
	J[181] = -1.;
	J[269] = 1.;

   /*** derivatives for constraint 76 ***/

	J[158] = 1.;
	J[205] = -1.;
	J[271] = 1.;

   /*** derivatives for constraint 77 ***/

	J[159] = 1.;
	J[229] = -1.;
	J[273] = 1.;

   /*** derivatives for constraint 78 ***/

	J[182] = 1.;
	J[206] = -1.;
	J[275] = 1.;

   /*** derivatives for constraint 79 ***/

	J[183] = 1.;
	J[230] = -1.;
	J[277] = 1.;

   /*** derivatives for constraint 80 ***/

	J[207] = 1.;
	J[231] = -1.;
	J[279] = 1.;

   /*** derivatives for constraint 81 ***/

	J[16] = 1.;
	J[40] = -1.;
	J[280] = 51.;

   /*** derivatives for constraint 82 ***/

	J[17] = 1.;
	J[64] = -1.;
	J[282] = 51.;

   /*** derivatives for constraint 83 ***/

	J[18] = 1.;
	J[88] = -1.;
	J[284] = 51.;

   /*** derivatives for constraint 84 ***/

	J[19] = 1.;
	J[112] = -1.;
	J[286] = 51.;

   /*** derivatives for constraint 85 ***/

	J[41] = 1.;
	J[65] = -1.;
	J[288] = 51.;

   /*** derivatives for constraint 86 ***/

	J[42] = 1.;
	J[89] = -1.;
	J[290] = 51.;

   /*** derivatives for constraint 87 ***/

	J[43] = 1.;
	J[113] = -1.;
	J[292] = 51.;

   /*** derivatives for constraint 88 ***/

	J[66] = 1.;
	J[90] = -1.;
	J[294] = 51.;

   /*** derivatives for constraint 89 ***/

	J[67] = 1.;
	J[114] = -1.;
	J[296] = 51.;

   /*** derivatives for constraint 90 ***/

	J[91] = 1.;
	J[115] = -1.;
	J[298] = 51.;

   /*** derivatives for constraint 91 ***/

	J[20] = -1.;
	J[44] = 1.;
	J[300] = 51.;

   /*** derivatives for constraint 92 ***/

	J[21] = -1.;
	J[68] = 1.;
	J[302] = 51.;

   /*** derivatives for constraint 93 ***/

	J[22] = -1.;
	J[92] = 1.;
	J[304] = 51.;

   /*** derivatives for constraint 94 ***/

	J[23] = -1.;
	J[116] = 1.;
	J[306] = 51.;

   /*** derivatives for constraint 95 ***/

	J[45] = -1.;
	J[69] = 1.;
	J[308] = 51.;

   /*** derivatives for constraint 96 ***/

	J[46] = -1.;
	J[93] = 1.;
	J[310] = 51.;

   /*** derivatives for constraint 97 ***/

	J[47] = -1.;
	J[117] = 1.;
	J[312] = 51.;

   /*** derivatives for constraint 98 ***/

	J[70] = -1.;
	J[94] = 1.;
	J[314] = 51.;

   /*** derivatives for constraint 99 ***/

	J[71] = -1.;
	J[118] = 1.;
	J[316] = 51.;

   /*** derivatives for constraint 100 ***/

	J[95] = -1.;
	J[119] = 1.;
	J[318] = 51.;

   /*** derivatives for constraint 101 ***/

	J[136] = 1.;
	J[160] = -1.;
	J[320] = 86.;

   /*** derivatives for constraint 102 ***/

	J[137] = 1.;
	J[184] = -1.;
	J[322] = 86.;

   /*** derivatives for constraint 103 ***/

	J[138] = 1.;
	J[208] = -1.;
	J[324] = 86.;

   /*** derivatives for constraint 104 ***/

	J[139] = 1.;
	J[232] = -1.;
	J[326] = 86.;

   /*** derivatives for constraint 105 ***/

	J[161] = 1.;
	J[185] = -1.;
	J[328] = 86.;

   /*** derivatives for constraint 106 ***/

	J[162] = 1.;
	J[209] = -1.;
	J[330] = 86.;

   /*** derivatives for constraint 107 ***/

	J[163] = 1.;
	J[233] = -1.;
	J[332] = 86.;

   /*** derivatives for constraint 108 ***/

	J[186] = 1.;
	J[210] = -1.;
	J[334] = 86.;

   /*** derivatives for constraint 109 ***/

	J[187] = 1.;
	J[234] = -1.;
	J[336] = 86.;

   /*** derivatives for constraint 110 ***/

	J[211] = 1.;
	J[235] = -1.;
	J[338] = 86.;

   /*** derivatives for constraint 111 ***/

	J[140] = -1.;
	J[164] = 1.;
	J[340] = 86.;

   /*** derivatives for constraint 112 ***/

	J[141] = -1.;
	J[188] = 1.;
	J[342] = 86.;

   /*** derivatives for constraint 113 ***/

	J[142] = -1.;
	J[212] = 1.;
	J[344] = 86.;

   /*** derivatives for constraint 114 ***/

	J[143] = -1.;
	J[236] = 1.;
	J[346] = 86.;

   /*** derivatives for constraint 115 ***/

	J[165] = -1.;
	J[189] = 1.;
	J[348] = 86.;

   /*** derivatives for constraint 116 ***/

	J[166] = -1.;
	J[213] = 1.;
	J[350] = 86.;

   /*** derivatives for constraint 117 ***/

	J[167] = -1.;
	J[237] = 1.;
	J[352] = 86.;

   /*** derivatives for constraint 118 ***/

	J[190] = -1.;
	J[214] = 1.;
	J[354] = 86.;

   /*** derivatives for constraint 119 ***/

	J[191] = -1.;
	J[238] = 1.;
	J[356] = 86.;

   /*** derivatives for constraint 120 ***/

	J[215] = -1.;
	J[239] = 1.;
	J[358] = 86.;

   /*** derivatives for constraint 121 ***/

	J[281] = 1.;
	J[301] = 1.;
	J[321] = 1.;
	J[341] = 1.;

   /*** derivatives for constraint 122 ***/

	J[283] = 1.;
	J[303] = 1.;
	J[323] = 1.;
	J[343] = 1.;

   /*** derivatives for constraint 123 ***/

	J[285] = 1.;
	J[305] = 1.;
	J[325] = 1.;
	J[345] = 1.;

   /*** derivatives for constraint 124 ***/

	J[287] = 1.;
	J[307] = 1.;
	J[327] = 1.;
	J[347] = 1.;

   /*** derivatives for constraint 125 ***/

	J[289] = 1.;
	J[309] = 1.;
	J[329] = 1.;
	J[349] = 1.;

   /*** derivatives for constraint 126 ***/

	J[291] = 1.;
	J[311] = 1.;
	J[331] = 1.;
	J[351] = 1.;

   /*** derivatives for constraint 127 ***/

	J[293] = 1.;
	J[313] = 1.;
	J[333] = 1.;
	J[353] = 1.;

   /*** derivatives for constraint 128 ***/

	J[295] = 1.;
	J[315] = 1.;
	J[335] = 1.;
	J[355] = 1.;

   /*** derivatives for constraint 129 ***/

	J[297] = 1.;
	J[317] = 1.;
	J[337] = 1.;
	J[357] = 1.;

   /*** derivatives for constraint 130 ***/

	J[299] = 1.;
	J[319] = 1.;
	J[339] = 1.;
	J[359] = 1.;

   /*** derivatives for constraint 131 ***/

	J[364] = 1.;
	J[389] = 1.;

   /*** derivatives for constraint 132 ***/

	J[369] = 1.;
	J[394] = 1.;

   /*** derivatives for constraint 133 ***/

	J[374] = 1.;
	J[399] = 1.;

   /*** derivatives for constraint 134 ***/

	J[379] = 1.;
	J[404] = 1.;

   /*** derivatives for constraint 135 ***/

	J[384] = 1.;
	J[409] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
