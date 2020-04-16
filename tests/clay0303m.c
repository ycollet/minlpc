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
 fint clay0303m_auxcom_[1] = { 36 /* nlc */ };
 fint clay0303m_funcom_[241] = {
	33 /* nvar */,
	1 /* nobj */,
	66 /* ncon */,
	201 /* nzc */,
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
	123,
	125,
	127,
	129,
	131,
	133,
	135,
	137,
	139,
	141,
	143,
	145,
	147,
	149,
	151,
	153,
	155,
	157,
	162,
	167,
	172,
	177,
	182,
	187,
	192,
	197,
	202,

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
	28,
	31,
	34,
	37,
	38,
	40,
	41,
	49,
	50,
	52,
	53,
	2,
	5,
	8,
	11,
	14,
	17,
	20,
	23,
	26,
	29,
	32,
	35,
	37,
	39,
	40,
	42,
	49,
	51,
	52,
	54,
	3,
	6,
	9,
	12,
	15,
	18,
	21,
	24,
	27,
	30,
	33,
	36,
	38,
	39,
	41,
	42,
	50,
	51,
	53,
	54,
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	25,
	28,
	31,
	34,
	43,
	44,
	46,
	47,
	55,
	56,
	58,
	59,
	2,
	5,
	8,
	11,
	14,
	17,
	20,
	23,
	26,
	29,
	32,
	35,
	43,
	45,
	46,
	48,
	55,
	57,
	58,
	60,
	3,
	6,
	9,
	12,
	15,
	18,
	21,
	24,
	27,
	30,
	33,
	36,
	44,
	45,
	47,
	48,
	56,
	57,
	59,
	60,
	37,
	40,
	38,
	41,
	39,
	42,
	43,
	46,
	44,
	47,
	45,
	48,
	49,
	61,
	50,
	62,
	51,
	63,
	52,
	61,
	53,
	62,
	54,
	63,
	55,
	61,
	56,
	62,
	57,
	63,
	58,
	61,
	59,
	62,
	60,
	63,
	1,
	10,
	19,
	28,
	64,
	2,
	11,
	20,
	29,
	65,
	3,
	12,
	21,
	30,
	66,
	4,
	13,
	22,
	31,
	64,
	5,
	14,
	23,
	32,
	65,
	6,
	15,
	24,
	33,
	66,
	7,
	16,
	25,
	34,
	64,
	8,
	17,
	26,
	35,
	65,
	9,
	18,
	27,
	36,
	66 };

 real clay0303m_boundc_[1+66+132] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		11.5,
		52.5,
		12.5,
		51.5,
		10.5,
		53.5,
		7.,
		82.,
		6.5,
		82.5,
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
		6581.,
		-1.7e308,
		6722.,
		-1.7e308,
		7010.,
		-1.7e308,
		2041.,
		-1.7e308,
		2122.,
		-1.7e308,
		2333.,
		-1.7e308,
		5986.,
		-1.7e308,
		5989.,
		-1.7e308,
		6553.,
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
		2225.,
		-1.7e308,
		2306.,
		-1.7e308,
		2474.,
		-1.7e308,
		6361.,
		-1.7e308,
		6500.,
		-1.7e308,
		6784.,
		-1.7e308,
		7072.,
		-1.7e308,
		6932.,
		-1.7e308,
		7220.,
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
		-1.7e308,
		40.,
		-1.7e308,
		42.,
		-1.7e308,
		41.,
		-1.7e308,
		40.,
		-1.7e308,
		42.,
		-1.7e308,
		41.,
		-1.7e308,
		75.5,
		-1.7e308,
		76.5,
		-1.7e308,
		77.,
		-1.7e308,
		75.5,
		-1.7e308,
		76.5,
		-1.7e308,
		77.,
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

 real clay0303m_x0comn_[33] = {
		11.5,
		12.5,
		10.5,
		7.,
		6.5,
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
		0. };

 static real clay0303m_pd[72];
static real clay0303m_old_x[33];
static int clay0303m_xkind = -1;

 static int
clay0303m_xcheck(real *x)
{
	real *x1 = clay0303m_old_x, *xe = x + 33;
	errno = 0;
	if (clay0303m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	clay0303m_xkind = 0;
	return 1;
	}
 real
clay0303m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (clay0303m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 300.*x[6];
	rv += 240.*x[7];
	rv += 100.*x[8];
	rv += 300.*x[9];
	rv += 240.*x[10];
	rv += 100.*x[11];
	;}

	if (wantfg & 2) {
	g[6] = 300.;
	g[7] = 240.;
	g[8] = 100.;
	g[9] = 300.;
	g[10] = 240.;
	g[11] = 100.;
	}

	return rv;
}

 void
clay0303m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (clay0303m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[0] = v[0] + v[0];
	v[0] = x[3] + -7.;
	v[2] = v[0] * v[0];
	clay0303m_pd[1] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6814.*x[24];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[2] = v[0] + v[0];
	v[0] = x[4] + -7.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6678.*x[25];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[4] = v[0] + v[0];
	v[0] = x[5] + -8.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[5] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6958.*x[26];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[6] = v[0] + v[0];
	v[0] = x[3] + -77.;
	v[2] = v[0] * v[0];
	clay0303m_pd[7] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6556.*x[27];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[8] = v[0] + v[0];
	v[0] = x[4] + -77.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[9] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6697.*x[28];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[10] = v[0] + v[0];
	v[0] = x[5] + -78.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[11] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6985.*x[29];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[0] + -32.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[12] = v[0] + v[0];
	v[0] = x[3] + -47.;
	v[2] = v[0] * v[0];
	clay0303m_pd[13] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2025.*x[30];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[1] + -33.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[14] = v[0] + v[0];
	v[0] = x[4] + -47.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[15] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2106.*x[31];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] + -31.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[16] = v[0] + v[0];
	v[0] = x[5] + -48.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[17] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2317.*x[32];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[18] = v[0] + v[0];
	v[0] = x[3] + -13.;
	v[2] = v[0] * v[0];
	clay0303m_pd[19] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 5950.*x[24];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[20] = v[0] + v[0];
	v[0] = x[4] + -12.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[21] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 5953.*x[25];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[22] = v[0] + v[0];
	v[0] = x[5] + -11.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[23] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6517.*x[26];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[24] = v[0] + v[0];
	v[0] = x[3] + -83.;
	v[2] = v[0] * v[0];
	clay0303m_pd[25] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[27];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[26] = v[0] + v[0];
	v[0] = x[4] + -82.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[27] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[28];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[28] = v[0] + v[0];
	v[0] = x[5] + -81.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[29] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[29];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[0] + -32.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[30] = v[0] + v[0];
	v[0] = x[3] + -53.;
	v[2] = v[0] * v[0];
	clay0303m_pd[31] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2541.*x[30];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[1] + -33.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[32] = v[0] + v[0];
	v[0] = x[4] + -52.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[33] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2541.*x[31];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[2] + -31.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[34] = v[0] + v[0];
	v[0] = x[5] + -51.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[35] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2584.*x[32];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[36] = v[0] + v[0];
	v[0] = x[3] + -7.;
	v[2] = v[0] * v[0];
	clay0303m_pd[37] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[24];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[38] = v[0] + v[0];
	v[0] = x[4] + -7.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[39] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[25];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[40] = v[0] + v[0];
	v[0] = x[5] + -8.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[41] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[26];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[42] = v[0] + v[0];
	v[0] = x[3] + -77.;
	v[2] = v[0] * v[0];
	clay0303m_pd[43] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6171.*x[27];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[44] = v[0] + v[0];
	v[0] = x[4] + -77.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[45] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6172.*x[28];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[46] = v[0] + v[0];
	v[0] = x[5] + -78.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[47] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6748.*x[29];
	c[23] = t1;

  /***  constraint 25  ***/

	v[0] = x[0] + -27.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[48] = v[0] + v[0];
	v[0] = x[3] + -47.;
	v[2] = v[0] * v[0];
	clay0303m_pd[49] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2209.*x[30];
	c[24] = t1;

  /***  constraint 26  ***/

	v[0] = x[1] + -26.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[50] = v[0] + v[0];
	v[0] = x[4] + -47.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[51] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2290.*x[31];
	c[25] = t1;

  /***  constraint 27  ***/

	v[0] = x[2] + -28.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[52] = v[0] + v[0];
	v[0] = x[5] + -48.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[53] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2458.*x[32];
	c[26] = t1;

  /***  constraint 28  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[54] = v[0] + v[0];
	v[0] = x[3] + -13.;
	v[2] = v[0] * v[0];
	clay0303m_pd[55] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6325.*x[24];
	c[27] = t1;

  /***  constraint 29  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[56] = v[0] + v[0];
	v[0] = x[4] + -12.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[57] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6464.*x[25];
	c[28] = t1;

  /***  constraint 30  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[58] = v[0] + v[0];
	v[0] = x[5] + -11.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[59] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6748.*x[26];
	c[29] = t1;

  /***  constraint 31  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[60] = v[0] + v[0];
	v[0] = x[3] + -83.;
	v[2] = v[0] * v[0];
	clay0303m_pd[61] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7047.*x[27];
	c[30] = t1;

  /***  constraint 32  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[62] = v[0] + v[0];
	v[0] = x[4] + -82.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[63] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6907.*x[28];
	c[31] = t1;

  /***  constraint 33  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[64] = v[0] + v[0];
	v[0] = x[5] + -81.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[65] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7195.*x[29];
	c[32] = t1;

  /***  constraint 34  ***/

	v[0] = x[0] + -27.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[66] = v[0] + v[0];
	v[0] = x[3] + -53.;
	v[2] = v[0] * v[0];
	clay0303m_pd[67] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2725.*x[30];
	c[33] = t1;

  /***  constraint 35  ***/

	v[0] = x[1] + -26.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[68] = v[0] + v[0];
	v[0] = x[4] + -52.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[69] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2725.*x[31];
	c[34] = t1;

  /***  constraint 36  ***/

	v[0] = x[2] + -28.5;
	v[1] = v[0] * v[0];
	clay0303m_pd[70] = v[0] + v[0];
	v[0] = x[5] + -51.5;
	v[2] = v[0] * v[0];
	clay0303m_pd[71] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 2725.*x[32];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[6];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[7];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[8];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[6];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += x[7];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[8];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[9];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[3];
	t1 += x[5];
	t1 += x[10];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[11];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += x[9];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[3];
	t1 += -x[5];
	t1 += x[10];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[11];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 46.*x[12];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += 46.*x[13];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += 46.*x[14];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += 46.*x[15];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += 46.*x[16];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += 46.*x[17];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += 81.*x[18];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[3];
	t1 += -x[5];
	t1 += 81.*x[19];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += 81.*x[20];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += 81.*x[21];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[3];
	t1 += x[5];
	t1 += 81.*x[22];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += 81.*x[23];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[12];
	t1 += x[15];
	t1 += x[18];
	t1 += x[21];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[13];
	t1 += x[16];
	t1 += x[19];
	t1 += x[22];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[14];
	t1 += x[17];
	t1 += x[20];
	t1 += x[23];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[24];
	t1 += x[27];
	t1 += x[30];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[25];
	t1 += x[28];
	t1 += x[31];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[26];
	t1 += x[29];
	t1 += x[32];
	c[65] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[60] = clay0303m_pd[1];
	J[0] = clay0303m_pd[0];
	J[156] = 6814.;

   /*** derivatives for constraint 2 ***/

	J[80] = clay0303m_pd[3];
	J[20] = clay0303m_pd[2];
	J[161] = 6678.;

   /*** derivatives for constraint 3 ***/

	J[100] = clay0303m_pd[5];
	J[40] = clay0303m_pd[4];
	J[166] = 6958.;

   /*** derivatives for constraint 4 ***/

	J[61] = clay0303m_pd[7];
	J[1] = clay0303m_pd[6];
	J[171] = 6556.;

   /*** derivatives for constraint 5 ***/

	J[81] = clay0303m_pd[9];
	J[21] = clay0303m_pd[8];
	J[176] = 6697.;

   /*** derivatives for constraint 6 ***/

	J[101] = clay0303m_pd[11];
	J[41] = clay0303m_pd[10];
	J[181] = 6985.;

   /*** derivatives for constraint 7 ***/

	J[62] = clay0303m_pd[13];
	J[2] = clay0303m_pd[12];
	J[186] = 2025.;

   /*** derivatives for constraint 8 ***/

	J[82] = clay0303m_pd[15];
	J[22] = clay0303m_pd[14];
	J[191] = 2106.;

   /*** derivatives for constraint 9 ***/

	J[102] = clay0303m_pd[17];
	J[42] = clay0303m_pd[16];
	J[196] = 2317.;

   /*** derivatives for constraint 10 ***/

	J[63] = clay0303m_pd[19];
	J[3] = clay0303m_pd[18];
	J[157] = 5950.;

   /*** derivatives for constraint 11 ***/

	J[83] = clay0303m_pd[21];
	J[23] = clay0303m_pd[20];
	J[162] = 5953.;

   /*** derivatives for constraint 12 ***/

	J[103] = clay0303m_pd[23];
	J[43] = clay0303m_pd[22];
	J[167] = 6517.;

   /*** derivatives for constraint 13 ***/

	J[64] = clay0303m_pd[25];
	J[4] = clay0303m_pd[24];
	J[172] = 7432.;

   /*** derivatives for constraint 14 ***/

	J[84] = clay0303m_pd[27];
	J[24] = clay0303m_pd[26];
	J[177] = 7432.;

   /*** derivatives for constraint 15 ***/

	J[104] = clay0303m_pd[29];
	J[44] = clay0303m_pd[28];
	J[182] = 7432.;

   /*** derivatives for constraint 16 ***/

	J[65] = clay0303m_pd[31];
	J[5] = clay0303m_pd[30];
	J[187] = 2541.;

   /*** derivatives for constraint 17 ***/

	J[85] = clay0303m_pd[33];
	J[25] = clay0303m_pd[32];
	J[192] = 2541.;

   /*** derivatives for constraint 18 ***/

	J[105] = clay0303m_pd[35];
	J[45] = clay0303m_pd[34];
	J[197] = 2584.;

   /*** derivatives for constraint 19 ***/

	J[66] = clay0303m_pd[37];
	J[6] = clay0303m_pd[36];
	J[158] = 7189.;

   /*** derivatives for constraint 20 ***/

	J[86] = clay0303m_pd[39];
	J[26] = clay0303m_pd[38];
	J[163] = 7189.;

   /*** derivatives for constraint 21 ***/

	J[106] = clay0303m_pd[41];
	J[46] = clay0303m_pd[40];
	J[168] = 7189.;

   /*** derivatives for constraint 22 ***/

	J[67] = clay0303m_pd[43];
	J[7] = clay0303m_pd[42];
	J[173] = 6171.;

   /*** derivatives for constraint 23 ***/

	J[87] = clay0303m_pd[45];
	J[27] = clay0303m_pd[44];
	J[178] = 6172.;

   /*** derivatives for constraint 24 ***/

	J[107] = clay0303m_pd[47];
	J[47] = clay0303m_pd[46];
	J[183] = 6748.;

   /*** derivatives for constraint 25 ***/

	J[68] = clay0303m_pd[49];
	J[8] = clay0303m_pd[48];
	J[188] = 2209.;

   /*** derivatives for constraint 26 ***/

	J[88] = clay0303m_pd[51];
	J[28] = clay0303m_pd[50];
	J[193] = 2290.;

   /*** derivatives for constraint 27 ***/

	J[108] = clay0303m_pd[53];
	J[48] = clay0303m_pd[52];
	J[198] = 2458.;

   /*** derivatives for constraint 28 ***/

	J[69] = clay0303m_pd[55];
	J[9] = clay0303m_pd[54];
	J[159] = 6325.;

   /*** derivatives for constraint 29 ***/

	J[89] = clay0303m_pd[57];
	J[29] = clay0303m_pd[56];
	J[164] = 6464.;

   /*** derivatives for constraint 30 ***/

	J[109] = clay0303m_pd[59];
	J[49] = clay0303m_pd[58];
	J[169] = 6748.;

   /*** derivatives for constraint 31 ***/

	J[70] = clay0303m_pd[61];
	J[10] = clay0303m_pd[60];
	J[174] = 7047.;

   /*** derivatives for constraint 32 ***/

	J[90] = clay0303m_pd[63];
	J[30] = clay0303m_pd[62];
	J[179] = 6907.;

   /*** derivatives for constraint 33 ***/

	J[110] = clay0303m_pd[65];
	J[50] = clay0303m_pd[64];
	J[184] = 7195.;

   /*** derivatives for constraint 34 ***/

	J[71] = clay0303m_pd[67];
	J[11] = clay0303m_pd[66];
	J[189] = 2725.;

   /*** derivatives for constraint 35 ***/

	J[91] = clay0303m_pd[69];
	J[31] = clay0303m_pd[68];
	J[194] = 2725.;

   /*** derivatives for constraint 36 ***/

	J[111] = clay0303m_pd[71];
	J[51] = clay0303m_pd[70];
	J[199] = 2725.;

   /*** derivatives for constraint 37 ***/

	J[12] = -1.;
	J[32] = 1.;
	J[120] = 1.;

   /*** derivatives for constraint 38 ***/

	J[13] = -1.;
	J[52] = 1.;
	J[122] = 1.;

   /*** derivatives for constraint 39 ***/

	J[33] = -1.;
	J[53] = 1.;
	J[124] = 1.;

   /*** derivatives for constraint 40 ***/

	J[14] = 1.;
	J[34] = -1.;
	J[121] = 1.;

   /*** derivatives for constraint 41 ***/

	J[15] = 1.;
	J[54] = -1.;
	J[123] = 1.;

   /*** derivatives for constraint 42 ***/

	J[35] = 1.;
	J[55] = -1.;
	J[125] = 1.;

   /*** derivatives for constraint 43 ***/

	J[72] = -1.;
	J[92] = 1.;
	J[126] = 1.;

   /*** derivatives for constraint 44 ***/

	J[73] = -1.;
	J[112] = 1.;
	J[128] = 1.;

   /*** derivatives for constraint 45 ***/

	J[93] = -1.;
	J[113] = 1.;
	J[130] = 1.;

   /*** derivatives for constraint 46 ***/

	J[74] = 1.;
	J[94] = -1.;
	J[127] = 1.;

   /*** derivatives for constraint 47 ***/

	J[75] = 1.;
	J[114] = -1.;
	J[129] = 1.;

   /*** derivatives for constraint 48 ***/

	J[95] = 1.;
	J[115] = -1.;
	J[131] = 1.;

   /*** derivatives for constraint 49 ***/

	J[16] = 1.;
	J[36] = -1.;
	J[132] = 46.;

   /*** derivatives for constraint 50 ***/

	J[17] = 1.;
	J[56] = -1.;
	J[134] = 46.;

   /*** derivatives for constraint 51 ***/

	J[37] = 1.;
	J[57] = -1.;
	J[136] = 46.;

   /*** derivatives for constraint 52 ***/

	J[18] = -1.;
	J[38] = 1.;
	J[138] = 46.;

   /*** derivatives for constraint 53 ***/

	J[19] = -1.;
	J[58] = 1.;
	J[140] = 46.;

   /*** derivatives for constraint 54 ***/

	J[39] = -1.;
	J[59] = 1.;
	J[142] = 46.;

   /*** derivatives for constraint 55 ***/

	J[76] = 1.;
	J[96] = -1.;
	J[144] = 81.;

   /*** derivatives for constraint 56 ***/

	J[77] = 1.;
	J[116] = -1.;
	J[146] = 81.;

   /*** derivatives for constraint 57 ***/

	J[97] = 1.;
	J[117] = -1.;
	J[148] = 81.;

   /*** derivatives for constraint 58 ***/

	J[78] = -1.;
	J[98] = 1.;
	J[150] = 81.;

   /*** derivatives for constraint 59 ***/

	J[79] = -1.;
	J[118] = 1.;
	J[152] = 81.;

   /*** derivatives for constraint 60 ***/

	J[99] = -1.;
	J[119] = 1.;
	J[154] = 81.;

   /*** derivatives for constraint 61 ***/

	J[133] = 1.;
	J[139] = 1.;
	J[145] = 1.;
	J[151] = 1.;

   /*** derivatives for constraint 62 ***/

	J[135] = 1.;
	J[141] = 1.;
	J[147] = 1.;
	J[153] = 1.;

   /*** derivatives for constraint 63 ***/

	J[137] = 1.;
	J[143] = 1.;
	J[149] = 1.;
	J[155] = 1.;

   /*** derivatives for constraint 64 ***/

	J[160] = 1.;
	J[175] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 65 ***/

	J[165] = 1.;
	J[180] = 1.;
	J[195] = 1.;

   /*** derivatives for constraint 66 ***/

	J[170] = 1.;
	J[185] = 1.;
	J[200] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
