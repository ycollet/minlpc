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
 fint clay0203m_auxcom_[1] = { 24 /* nlc */ };
 fint clay0203m_funcom_[199] = {
	30 /* nvar */,
	1 /* nobj */,
	54 /* ncon */,
	162 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	17,
	33,
	49,
	65,
	81,
	97,
	99,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	119,
	121,
	123,
	125,
	127,
	129,
	131,
	133,
	138,
	143,
	148,
	153,
	158,
	163,

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
	26,
	28,
	29,
	37,
	38,
	40,
	41,
	2,
	5,
	8,
	11,
	14,
	17,
	20,
	23,
	25,
	27,
	28,
	30,
	37,
	39,
	40,
	42,
	3,
	6,
	9,
	12,
	15,
	18,
	21,
	24,
	26,
	27,
	29,
	30,
	38,
	39,
	41,
	42,
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	31,
	32,
	34,
	35,
	43,
	44,
	46,
	47,
	2,
	5,
	8,
	11,
	14,
	17,
	20,
	23,
	31,
	33,
	34,
	36,
	43,
	45,
	46,
	48,
	3,
	6,
	9,
	12,
	15,
	18,
	21,
	24,
	32,
	33,
	35,
	36,
	44,
	45,
	47,
	48,
	25,
	28,
	26,
	29,
	27,
	30,
	31,
	34,
	32,
	35,
	33,
	36,
	37,
	49,
	38,
	50,
	39,
	51,
	40,
	49,
	41,
	50,
	42,
	51,
	43,
	49,
	44,
	50,
	45,
	51,
	46,
	49,
	47,
	50,
	48,
	51,
	1,
	7,
	13,
	19,
	52,
	2,
	8,
	14,
	20,
	53,
	3,
	9,
	15,
	21,
	54,
	4,
	10,
	16,
	22,
	52,
	5,
	11,
	17,
	23,
	53,
	6,
	12,
	18,
	24,
	54 };

 real clay0203m_boundc_[1+60+108] /* Infinity, variable bounds, constraint bounds */ = {
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

 real clay0203m_x0comn_[30] = {
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
		0. };

 static real clay0203m_pd[48];
static real clay0203m_old_x[30];
static int clay0203m_xkind = -1;

 static int
clay0203m_xcheck(real *x)
{
	real *x1 = clay0203m_old_x, *xe = x + 30;
	errno = 0;
	if (clay0203m_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	clay0203m_xkind = 0;
	return 1;
	}
 real
clay0203m_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (clay0203m_xcheck(x) && wantfg == 2)
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
clay0203m_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (clay0203m_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[0] = v[0] + v[0];
	v[0] = x[3] + -7.;
	v[2] = v[0] * v[0];
	clay0203m_pd[1] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6814.*x[24];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[2] = v[0] + v[0];
	v[0] = x[4] + -7.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[3] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6678.*x[25];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[4] = v[0] + v[0];
	v[0] = x[5] + -8.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[5] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6958.*x[26];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[6] = v[0] + v[0];
	v[0] = x[3] + -77.;
	v[2] = v[0] * v[0];
	clay0203m_pd[7] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6556.*x[27];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[8] = v[0] + v[0];
	v[0] = x[4] + -77.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[9] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6697.*x[28];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[10] = v[0] + v[0];
	v[0] = x[5] + -78.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[11] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6985.*x[29];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[0] + -17.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[12] = v[0] + v[0];
	v[0] = x[3] + -13.;
	v[2] = v[0] * v[0];
	clay0203m_pd[13] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 5950.*x[24];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[1] + -18.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[14] = v[0] + v[0];
	v[0] = x[4] + -12.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[15] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 5953.*x[25];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] + -16.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[16] = v[0] + v[0];
	v[0] = x[5] + -11.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[17] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6517.*x[26];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[0] + -52.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[18] = v[0] + v[0];
	v[0] = x[3] + -83.;
	v[2] = v[0] * v[0];
	clay0203m_pd[19] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[27];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[1] + -53.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[20] = v[0] + v[0];
	v[0] = x[4] + -82.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[21] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[28];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[2] + -51.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[22] = v[0] + v[0];
	v[0] = x[5] + -81.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[23] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7432.*x[29];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[24] = v[0] + v[0];
	v[0] = x[3] + -7.;
	v[2] = v[0] * v[0];
	clay0203m_pd[25] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[24];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[26] = v[0] + v[0];
	v[0] = x[4] + -7.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[27] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[25];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[28] = v[0] + v[0];
	v[0] = x[5] + -8.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[29] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7189.*x[26];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[30] = v[0] + v[0];
	v[0] = x[3] + -77.;
	v[2] = v[0] * v[0];
	clay0203m_pd[31] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6171.*x[27];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[32] = v[0] + v[0];
	v[0] = x[4] + -77.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[33] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6172.*x[28];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[34] = v[0] + v[0];
	v[0] = x[5] + -78.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[35] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6748.*x[29];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = x[0] + -12.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[36] = v[0] + v[0];
	v[0] = x[3] + -13.;
	v[2] = v[0] * v[0];
	clay0203m_pd[37] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6325.*x[24];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = x[1] + -11.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[38] = v[0] + v[0];
	v[0] = x[4] + -12.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[39] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6464.*x[25];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = x[2] + -13.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[40] = v[0] + v[0];
	v[0] = x[5] + -11.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[41] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6748.*x[26];
	c[20] = t1;

  /***  constraint 22  ***/

	v[0] = x[0] + -47.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[42] = v[0] + v[0];
	v[0] = x[3] + -83.;
	v[2] = v[0] * v[0];
	clay0203m_pd[43] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7047.*x[27];
	c[21] = t1;

  /***  constraint 23  ***/

	v[0] = x[1] + -46.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[44] = v[0] + v[0];
	v[0] = x[4] + -82.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[45] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 6907.*x[28];
	c[22] = t1;

  /***  constraint 24  ***/

	v[0] = x[2] + -48.5;
	v[1] = v[0] * v[0];
	clay0203m_pd[46] = v[0] + v[0];
	v[0] = x[5] + -81.5;
	v[2] = v[0] * v[0];
	clay0203m_pd[47] = v[0] + v[0];
	v[0] = v[1] + v[2];
	t1 = v[0] + 7195.*x[29];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += x[6];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += x[7];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += x[8];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += x[6];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += x[7];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += x[8];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += x[9];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[3];
	t1 += x[5];
	t1 += x[10];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += x[11];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += x[9];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[3];
	t1 += -x[5];
	t1 += x[10];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += x[11];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[0];
	t1 += -x[1];
	t1 += 46.*x[12];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[0];
	t1 += -x[2];
	t1 += 46.*x[13];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[1];
	t1 += -x[2];
	t1 += 46.*x[14];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[0];
	t1 += x[1];
	t1 += 46.*x[15];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[0];
	t1 += x[2];
	t1 += 46.*x[16];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[1];
	t1 += x[2];
	t1 += 46.*x[17];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[3];
	t1 += -x[4];
	t1 += 81.*x[18];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[3];
	t1 += -x[5];
	t1 += 81.*x[19];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[4];
	t1 += -x[5];
	t1 += 81.*x[20];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[3];
	t1 += x[4];
	t1 += 81.*x[21];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[3];
	t1 += x[5];
	t1 += 81.*x[22];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[4];
	t1 += x[5];
	t1 += 81.*x[23];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[12];
	t1 += x[15];
	t1 += x[18];
	t1 += x[21];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[13];
	t1 += x[16];
	t1 += x[19];
	t1 += x[22];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[14];
	t1 += x[17];
	t1 += x[20];
	t1 += x[23];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[24];
	t1 += x[27];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[25];
	t1 += x[28];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[26];
	t1 += x[29];
	c[53] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[48] = clay0203m_pd[1];
	J[0] = clay0203m_pd[0];
	J[132] = 6814.;

   /*** derivatives for constraint 2 ***/

	J[64] = clay0203m_pd[3];
	J[16] = clay0203m_pd[2];
	J[137] = 6678.;

   /*** derivatives for constraint 3 ***/

	J[80] = clay0203m_pd[5];
	J[32] = clay0203m_pd[4];
	J[142] = 6958.;

   /*** derivatives for constraint 4 ***/

	J[49] = clay0203m_pd[7];
	J[1] = clay0203m_pd[6];
	J[147] = 6556.;

   /*** derivatives for constraint 5 ***/

	J[65] = clay0203m_pd[9];
	J[17] = clay0203m_pd[8];
	J[152] = 6697.;

   /*** derivatives for constraint 6 ***/

	J[81] = clay0203m_pd[11];
	J[33] = clay0203m_pd[10];
	J[157] = 6985.;

   /*** derivatives for constraint 7 ***/

	J[50] = clay0203m_pd[13];
	J[2] = clay0203m_pd[12];
	J[133] = 5950.;

   /*** derivatives for constraint 8 ***/

	J[66] = clay0203m_pd[15];
	J[18] = clay0203m_pd[14];
	J[138] = 5953.;

   /*** derivatives for constraint 9 ***/

	J[82] = clay0203m_pd[17];
	J[34] = clay0203m_pd[16];
	J[143] = 6517.;

   /*** derivatives for constraint 10 ***/

	J[51] = clay0203m_pd[19];
	J[3] = clay0203m_pd[18];
	J[148] = 7432.;

   /*** derivatives for constraint 11 ***/

	J[67] = clay0203m_pd[21];
	J[19] = clay0203m_pd[20];
	J[153] = 7432.;

   /*** derivatives for constraint 12 ***/

	J[83] = clay0203m_pd[23];
	J[35] = clay0203m_pd[22];
	J[158] = 7432.;

   /*** derivatives for constraint 13 ***/

	J[52] = clay0203m_pd[25];
	J[4] = clay0203m_pd[24];
	J[134] = 7189.;

   /*** derivatives for constraint 14 ***/

	J[68] = clay0203m_pd[27];
	J[20] = clay0203m_pd[26];
	J[139] = 7189.;

   /*** derivatives for constraint 15 ***/

	J[84] = clay0203m_pd[29];
	J[36] = clay0203m_pd[28];
	J[144] = 7189.;

   /*** derivatives for constraint 16 ***/

	J[53] = clay0203m_pd[31];
	J[5] = clay0203m_pd[30];
	J[149] = 6171.;

   /*** derivatives for constraint 17 ***/

	J[69] = clay0203m_pd[33];
	J[21] = clay0203m_pd[32];
	J[154] = 6172.;

   /*** derivatives for constraint 18 ***/

	J[85] = clay0203m_pd[35];
	J[37] = clay0203m_pd[34];
	J[159] = 6748.;

   /*** derivatives for constraint 19 ***/

	J[54] = clay0203m_pd[37];
	J[6] = clay0203m_pd[36];
	J[135] = 6325.;

   /*** derivatives for constraint 20 ***/

	J[70] = clay0203m_pd[39];
	J[22] = clay0203m_pd[38];
	J[140] = 6464.;

   /*** derivatives for constraint 21 ***/

	J[86] = clay0203m_pd[41];
	J[38] = clay0203m_pd[40];
	J[145] = 6748.;

   /*** derivatives for constraint 22 ***/

	J[55] = clay0203m_pd[43];
	J[7] = clay0203m_pd[42];
	J[150] = 7047.;

   /*** derivatives for constraint 23 ***/

	J[71] = clay0203m_pd[45];
	J[23] = clay0203m_pd[44];
	J[155] = 6907.;

   /*** derivatives for constraint 24 ***/

	J[87] = clay0203m_pd[47];
	J[39] = clay0203m_pd[46];
	J[160] = 7195.;

   /*** derivatives for constraint 25 ***/

	J[8] = -1.;
	J[24] = 1.;
	J[96] = 1.;

   /*** derivatives for constraint 26 ***/

	J[9] = -1.;
	J[40] = 1.;
	J[98] = 1.;

   /*** derivatives for constraint 27 ***/

	J[25] = -1.;
	J[41] = 1.;
	J[100] = 1.;

   /*** derivatives for constraint 28 ***/

	J[10] = 1.;
	J[26] = -1.;
	J[97] = 1.;

   /*** derivatives for constraint 29 ***/

	J[11] = 1.;
	J[42] = -1.;
	J[99] = 1.;

   /*** derivatives for constraint 30 ***/

	J[27] = 1.;
	J[43] = -1.;
	J[101] = 1.;

   /*** derivatives for constraint 31 ***/

	J[56] = -1.;
	J[72] = 1.;
	J[102] = 1.;

   /*** derivatives for constraint 32 ***/

	J[57] = -1.;
	J[88] = 1.;
	J[104] = 1.;

   /*** derivatives for constraint 33 ***/

	J[73] = -1.;
	J[89] = 1.;
	J[106] = 1.;

   /*** derivatives for constraint 34 ***/

	J[58] = 1.;
	J[74] = -1.;
	J[103] = 1.;

   /*** derivatives for constraint 35 ***/

	J[59] = 1.;
	J[90] = -1.;
	J[105] = 1.;

   /*** derivatives for constraint 36 ***/

	J[75] = 1.;
	J[91] = -1.;
	J[107] = 1.;

   /*** derivatives for constraint 37 ***/

	J[12] = 1.;
	J[28] = -1.;
	J[108] = 46.;

   /*** derivatives for constraint 38 ***/

	J[13] = 1.;
	J[44] = -1.;
	J[110] = 46.;

   /*** derivatives for constraint 39 ***/

	J[29] = 1.;
	J[45] = -1.;
	J[112] = 46.;

   /*** derivatives for constraint 40 ***/

	J[14] = -1.;
	J[30] = 1.;
	J[114] = 46.;

   /*** derivatives for constraint 41 ***/

	J[15] = -1.;
	J[46] = 1.;
	J[116] = 46.;

   /*** derivatives for constraint 42 ***/

	J[31] = -1.;
	J[47] = 1.;
	J[118] = 46.;

   /*** derivatives for constraint 43 ***/

	J[60] = 1.;
	J[76] = -1.;
	J[120] = 81.;

   /*** derivatives for constraint 44 ***/

	J[61] = 1.;
	J[92] = -1.;
	J[122] = 81.;

   /*** derivatives for constraint 45 ***/

	J[77] = 1.;
	J[93] = -1.;
	J[124] = 81.;

   /*** derivatives for constraint 46 ***/

	J[62] = -1.;
	J[78] = 1.;
	J[126] = 81.;

   /*** derivatives for constraint 47 ***/

	J[63] = -1.;
	J[94] = 1.;
	J[128] = 81.;

   /*** derivatives for constraint 48 ***/

	J[79] = -1.;
	J[95] = 1.;
	J[130] = 81.;

   /*** derivatives for constraint 49 ***/

	J[109] = 1.;
	J[115] = 1.;
	J[121] = 1.;
	J[127] = 1.;

   /*** derivatives for constraint 50 ***/

	J[111] = 1.;
	J[117] = 1.;
	J[123] = 1.;
	J[129] = 1.;

   /*** derivatives for constraint 51 ***/

	J[113] = 1.;
	J[119] = 1.;
	J[125] = 1.;
	J[131] = 1.;

   /*** derivatives for constraint 52 ***/

	J[136] = 1.;
	J[151] = 1.;

   /*** derivatives for constraint 53 ***/

	J[141] = 1.;
	J[156] = 1.;

   /*** derivatives for constraint 54 ***/

	J[146] = 1.;
	J[161] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
