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
 fint pooling_rt2pq_auxcom_[1] = { 18 /* nlc */ };
 fint pooling_rt2pq_funcom_[318] = {
	34 /* nvar */,
	1 /* nobj */,
	52 /* ncon */,
	277 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,
	21,
	25,
	28,
	31,
	34,
	37,
	40,
	43,
	53,
	63,
	72,
	80,
	91,
	103,
	114,
	125,
	137,
	148,
	160,
	172,
	183,
	195,
	207,
	218,
	228,
	238,
	248,
	258,
	268,
	278,

	/* rownos */
	1,
	2,
	3,
	51,
	4,
	5,
	6,
	52,
	7,
	8,
	9,
	51,
	10,
	11,
	12,
	52,
	13,
	14,
	15,
	51,
	16,
	17,
	18,
	52,
	1,
	7,
	13,
	2,
	8,
	14,
	3,
	9,
	15,
	4,
	10,
	16,
	5,
	11,
	17,
	6,
	12,
	18,
	19,
	25,
	28,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	20,
	24,
	27,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	20,
	26,
	29,
	44,
	45,
	46,
	47,
	48,
	49,
	21,
	24,
	27,
	30,
	31,
	34,
	35,
	36,
	1,
	19,
	22,
	24,
	27,
	30,
	32,
	33,
	34,
	35,
	36,
	2,
	19,
	22,
	25,
	28,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	3,
	19,
	22,
	26,
	29,
	44,
	46,
	47,
	48,
	49,
	50,
	4,
	19,
	23,
	24,
	27,
	30,
	32,
	33,
	34,
	35,
	36,
	5,
	19,
	23,
	25,
	28,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	6,
	19,
	23,
	26,
	29,
	44,
	46,
	47,
	48,
	49,
	50,
	7,
	20,
	22,
	24,
	27,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	8,
	20,
	22,
	25,
	28,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	9,
	20,
	22,
	26,
	29,
	44,
	45,
	46,
	47,
	48,
	49,
	10,
	20,
	23,
	24,
	27,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	11,
	20,
	23,
	25,
	28,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	12,
	20,
	23,
	26,
	29,
	44,
	45,
	46,
	47,
	48,
	49,
	13,
	21,
	22,
	24,
	27,
	30,
	31,
	34,
	35,
	36,
	14,
	21,
	22,
	25,
	28,
	37,
	38,
	41,
	42,
	43,
	15,
	21,
	22,
	26,
	29,
	44,
	45,
	48,
	49,
	50,
	16,
	21,
	23,
	24,
	27,
	30,
	31,
	34,
	35,
	36,
	17,
	21,
	23,
	25,
	28,
	37,
	38,
	41,
	42,
	43,
	18,
	21,
	23,
	26,
	29,
	44,
	45,
	48,
	49,
	50 };

 real pooling_rt2pq_boundc_[1+68+104] /* Infinity, variable bounds, constraint bounds */ = {
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
		12.5,
		0.,
		12.5,
		0.,
		12.5,
		0.,
		17.5,
		0.,
		17.5,
		0.,
		17.5,
		0.,
		60.98,
		0.,
		161.29,
		0.,
		161.29,
		0.,
		5.,
		0.,
		12.5,
		0.,
		12.5,
		0.,
		12.5,
		0.,
		17.5,
		0.,
		17.5,
		0.,
		17.5,
		0.,
		12.5,
		0.,
		12.5,
		0.,
		12.5,
		0.,
		17.5,
		0.,
		17.5,
		0.,
		17.5,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		5.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		60.98,
		-1.7e308,
		161.29,
		-1.7e308,
		5.,
		-1.7e308,
		12.5,
		-1.7e308,
		17.5,
		5.,
		1.7e308,
		5.,
		1.7e308,
		5.,
		1.7e308,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
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
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		1.,
		1.,
		1.,
		1.};

 real pooling_rt2pq_x0comn_[34] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real pooling_rt2pq_old_x[34];
static int pooling_rt2pq_xkind = -1;

 static int
pooling_rt2pq_xcheck(real *x)
{
	real *x1 = pooling_rt2pq_old_x, *xe = x + 34;
	errno = 0;
	if (pooling_rt2pq_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pooling_rt2pq_xkind = 0;
	return 1;
	}
 real
pooling_rt2pq_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (pooling_rt2pq_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -180.8*x[12];
	rv += -128.*x[13];
	rv += -88.*x[14];
	rv += 110.*x[15];
	rv += -140.8*x[16];
	rv += -180.8*x[17];
	rv += -100.8*x[18];
	rv += -140.8*x[19];
	rv += -180.8*x[20];
	rv += -100.8*x[21];
	rv += -128.*x[22];
	rv += -168.*x[23];
	rv += -88.*x[24];
	rv += -128.*x[25];
	rv += -168.*x[26];
	rv += -88.*x[27];
	rv += 110.*x[28];
	rv += 70.*x[29];
	rv += 150.*x[30];
	rv += 110.*x[31];
	rv += 70.*x[32];
	rv += 150.*x[33];
	;}

	if (wantfg & 2) {
	g[12] = -180.8;
	g[13] = -128.;
	g[14] = -88.;
	g[15] = 110.;
	g[16] = -140.8;
	g[17] = -180.8;
	g[18] = -100.8;
	g[19] = -140.8;
	g[20] = -180.8;
	g[21] = -100.8;
	g[22] = -128.;
	g[23] = -168.;
	g[24] = -88.;
	g[25] = -128.;
	g[26] = -168.;
	g[27] = -88.;
	g[28] = 110.;
	g[29] = 70.;
	g[30] = 150.;
	g[31] = 110.;
	g[32] = 70.;
	g[33] = 150.;
	}

	return rv;
}

 void
pooling_rt2pq_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (pooling_rt2pq_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[16];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[17];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[18];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[19];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[20];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[21];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[22];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[2] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[24];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[3] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[25];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[3] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[26];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[3] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[27];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[4] * x[6];
	v[1] = -v[0];
	t1 = v[1] + x[28];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[4] * x[7];
	v[1] = -v[0];
	t1 = v[1] + x[29];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[4] * x[8];
	v[1] = -v[0];
	t1 = v[1] + x[30];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = x[5] * x[9];
	v[1] = -v[0];
	t1 = v[1] + x[31];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = x[5] * x[10];
	v[1] = -v[0];
	t1 = v[1] + x[32];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = x[5] * x[11];
	v[1] = -v[0];
	t1 = v[1] + x[33];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[12];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[13];
	t1 += x[14];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[15];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[19];
	t1 += x[20];
	t1 += x[21];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[13];
	t1 += x[15];
	t1 += x[16];
	t1 += x[19];
	t1 += x[22];
	t1 += x[25];
	t1 += x[28];
	t1 += x[31];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[12];
	t1 += x[17];
	t1 += x[20];
	t1 += x[23];
	t1 += x[26];
	t1 += x[29];
	t1 += x[32];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[14];
	t1 += x[18];
	t1 += x[21];
	t1 += x[24];
	t1 += x[27];
	t1 += x[30];
	t1 += x[33];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[13];
	t1 += x[15];
	t1 += x[16];
	t1 += x[19];
	t1 += x[22];
	t1 += x[25];
	t1 += x[28];
	t1 += x[31];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[12];
	t1 += x[17];
	t1 += x[20];
	t1 += x[23];
	t1 += x[26];
	t1 += x[29];
	t1 += x[32];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[14];
	t1 += x[18];
	t1 += x[21];
	t1 += x[24];
	t1 += x[27];
	t1 += x[30];
	t1 += x[33];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -0.17*x[13];
	t1 += -0.04*x[15];
	t1 += 0.0299999999999999*x[16];
	t1 += 0.0299999999999999*x[19];
	t1 += -0.17*x[22];
	t1 += -0.17*x[25];
	t1 += -0.04*x[28];
	t1 += -0.04*x[31];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -3.*x[13];
	t1 += -3.*x[15];
	t1 += -3.*x[22];
	t1 += -3.*x[25];
	t1 += -3.*x[28];
	t1 += -3.*x[31];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -26.1*x[13];
	t1 += -14.8*x[16];
	t1 += -14.8*x[19];
	t1 += -26.1*x[22];
	t1 += -26.1*x[25];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -15.2*x[13];
	t1 += -8.2*x[16];
	t1 += -8.2*x[19];
	t1 += -15.2*x[22];
	t1 += -15.2*x[25];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = 0.12*x[13];
	t1 += -0.01*x[15];
	t1 += -0.08*x[16];
	t1 += -0.08*x[19];
	t1 += 0.12*x[22];
	t1 += 0.12*x[25];
	t1 += -0.01*x[28];
	t1 += -0.01*x[31];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = 7.09999999999999*x[13];
	t1 += -19.*x[15];
	t1 += -4.2*x[16];
	t1 += -4.2*x[19];
	t1 += 7.09999999999999*x[22];
	t1 += 7.09999999999999*x[25];
	t1 += -19.*x[28];
	t1 += -19.*x[31];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = 1.5*x[13];
	t1 += -13.7*x[15];
	t1 += -5.5*x[16];
	t1 += -5.5*x[19];
	t1 += 1.5*x[22];
	t1 += 1.5*x[25];
	t1 += -13.7*x[28];
	t1 += -13.7*x[31];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = 0.0299999999999999*x[12];
	t1 += 0.0299999999999999*x[17];
	t1 += 0.0299999999999999*x[20];
	t1 += -0.17*x[23];
	t1 += -0.17*x[26];
	t1 += -0.04*x[29];
	t1 += -0.04*x[32];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = 2.1*x[12];
	t1 += 2.1*x[17];
	t1 += 2.1*x[20];
	t1 += -0.9*x[23];
	t1 += -0.9*x[26];
	t1 += -0.9*x[29];
	t1 += -0.9*x[32];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -14.8*x[12];
	t1 += -14.8*x[17];
	t1 += -14.8*x[20];
	t1 += -26.1*x[23];
	t1 += -26.1*x[26];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -8.2*x[12];
	t1 += -8.2*x[17];
	t1 += -8.2*x[20];
	t1 += -15.2*x[23];
	t1 += -15.2*x[26];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -0.08*x[12];
	t1 += -0.08*x[17];
	t1 += -0.08*x[20];
	t1 += 0.12*x[23];
	t1 += 0.12*x[26];
	t1 += -0.01*x[29];
	t1 += -0.01*x[32];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -3.2*x[12];
	t1 += -3.2*x[17];
	t1 += -3.2*x[20];
	t1 += 8.09999999999999*x[23];
	t1 += 8.09999999999999*x[26];
	t1 += -18.*x[29];
	t1 += -18.*x[32];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -2.5*x[12];
	t1 += -2.5*x[17];
	t1 += -2.5*x[20];
	t1 += 4.5*x[23];
	t1 += 4.5*x[26];
	t1 += -10.7*x[29];
	t1 += -10.7*x[32];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -0.17*x[14];
	t1 += 0.0299999999999999*x[18];
	t1 += 0.0299999999999999*x[21];
	t1 += -0.17*x[24];
	t1 += -0.17*x[27];
	t1 += -0.04*x[30];
	t1 += -0.04*x[33];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -3.*x[14];
	t1 += -3.*x[24];
	t1 += -3.*x[27];
	t1 += -3.*x[30];
	t1 += -3.*x[33];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -26.1*x[14];
	t1 += -14.8*x[18];
	t1 += -14.8*x[21];
	t1 += -26.1*x[24];
	t1 += -26.1*x[27];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -15.2*x[14];
	t1 += -8.2*x[18];
	t1 += -8.2*x[21];
	t1 += -15.2*x[24];
	t1 += -15.2*x[27];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = 0.12*x[14];
	t1 += -0.08*x[18];
	t1 += -0.08*x[21];
	t1 += 0.12*x[24];
	t1 += 0.12*x[27];
	t1 += -0.01*x[30];
	t1 += -0.01*x[33];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = 3.09999999999999*x[14];
	t1 += -8.2*x[18];
	t1 += -8.2*x[21];
	t1 += 3.09999999999999*x[24];
	t1 += 3.09999999999999*x[27];
	t1 += -23.*x[30];
	t1 += -23.*x[33];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -7.*x[18];
	t1 += -7.*x[21];
	t1 += -15.2*x[30];
	t1 += -15.2*x[33];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[0];
	t1 += x[2];
	t1 += x[4];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[1];
	t1 += x[3];
	t1 += x[5];
	c[51] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[24] = -x[0];
	J[0] = -x[6];
	J[79] = 1.;

   /*** derivatives for constraint 2 ***/

	J[27] = -x[0];
	J[1] = -x[7];
	J[90] = 1.;

   /*** derivatives for constraint 3 ***/

	J[30] = -x[0];
	J[2] = -x[8];
	J[102] = 1.;

   /*** derivatives for constraint 4 ***/

	J[33] = -x[1];
	J[4] = -x[9];
	J[113] = 1.;

   /*** derivatives for constraint 5 ***/

	J[36] = -x[1];
	J[5] = -x[10];
	J[124] = 1.;

   /*** derivatives for constraint 6 ***/

	J[39] = -x[1];
	J[6] = -x[11];
	J[136] = 1.;

   /*** derivatives for constraint 7 ***/

	J[25] = -x[2];
	J[8] = -x[6];
	J[147] = 1.;

   /*** derivatives for constraint 8 ***/

	J[28] = -x[2];
	J[9] = -x[7];
	J[159] = 1.;

   /*** derivatives for constraint 9 ***/

	J[31] = -x[2];
	J[10] = -x[8];
	J[171] = 1.;

   /*** derivatives for constraint 10 ***/

	J[34] = -x[3];
	J[12] = -x[9];
	J[182] = 1.;

   /*** derivatives for constraint 11 ***/

	J[37] = -x[3];
	J[13] = -x[10];
	J[194] = 1.;

   /*** derivatives for constraint 12 ***/

	J[40] = -x[3];
	J[14] = -x[11];
	J[206] = 1.;

   /*** derivatives for constraint 13 ***/

	J[26] = -x[4];
	J[16] = -x[6];
	J[217] = 1.;

   /*** derivatives for constraint 14 ***/

	J[29] = -x[4];
	J[17] = -x[7];
	J[227] = 1.;

   /*** derivatives for constraint 15 ***/

	J[32] = -x[4];
	J[18] = -x[8];
	J[237] = 1.;

   /*** derivatives for constraint 16 ***/

	J[35] = -x[5];
	J[20] = -x[9];
	J[247] = 1.;

   /*** derivatives for constraint 17 ***/

	J[38] = -x[5];
	J[21] = -x[10];
	J[257] = 1.;

   /*** derivatives for constraint 18 ***/

	J[41] = -x[5];
	J[22] = -x[11];
	J[267] = 1.;

   /*** derivatives for constraint 19 ***/

	J[42] = 1.;
	J[80] = 1.;
	J[91] = 1.;
	J[103] = 1.;
	J[114] = 1.;
	J[125] = 1.;
	J[137] = 1.;

   /*** derivatives for constraint 20 ***/

	J[52] = 1.;
	J[62] = 1.;
	J[148] = 1.;
	J[160] = 1.;
	J[172] = 1.;
	J[183] = 1.;
	J[195] = 1.;
	J[207] = 1.;

   /*** derivatives for constraint 21 ***/

	J[71] = 1.;
	J[218] = 1.;
	J[228] = 1.;
	J[238] = 1.;
	J[248] = 1.;
	J[258] = 1.;
	J[268] = 1.;

   /*** derivatives for constraint 22 ***/

	J[81] = 1.;
	J[92] = 1.;
	J[104] = 1.;
	J[149] = 1.;
	J[161] = 1.;
	J[173] = 1.;
	J[219] = 1.;
	J[229] = 1.;
	J[239] = 1.;

   /*** derivatives for constraint 23 ***/

	J[115] = 1.;
	J[126] = 1.;
	J[138] = 1.;
	J[184] = 1.;
	J[196] = 1.;
	J[208] = 1.;
	J[249] = 1.;
	J[259] = 1.;
	J[269] = 1.;

   /*** derivatives for constraint 24 ***/

	J[53] = 1.;
	J[72] = 1.;
	J[82] = 1.;
	J[116] = 1.;
	J[150] = 1.;
	J[185] = 1.;
	J[220] = 1.;
	J[250] = 1.;

   /*** derivatives for constraint 25 ***/

	J[43] = 1.;
	J[93] = 1.;
	J[127] = 1.;
	J[162] = 1.;
	J[197] = 1.;
	J[230] = 1.;
	J[260] = 1.;

   /*** derivatives for constraint 26 ***/

	J[63] = 1.;
	J[105] = 1.;
	J[139] = 1.;
	J[174] = 1.;
	J[209] = 1.;
	J[240] = 1.;
	J[270] = 1.;

   /*** derivatives for constraint 27 ***/

	J[54] = 1.;
	J[73] = 1.;
	J[83] = 1.;
	J[117] = 1.;
	J[151] = 1.;
	J[186] = 1.;
	J[221] = 1.;
	J[251] = 1.;

   /*** derivatives for constraint 28 ***/

	J[44] = 1.;
	J[94] = 1.;
	J[128] = 1.;
	J[163] = 1.;
	J[198] = 1.;
	J[231] = 1.;
	J[261] = 1.;

   /*** derivatives for constraint 29 ***/

	J[64] = 1.;
	J[106] = 1.;
	J[140] = 1.;
	J[175] = 1.;
	J[210] = 1.;
	J[241] = 1.;
	J[271] = 1.;

   /*** derivatives for constraint 30 ***/

	J[55] = -0.17;
	J[74] = -0.04;
	J[84] = 0.0299999999999999;
	J[118] = 0.0299999999999999;
	J[152] = -0.17;
	J[187] = -0.17;
	J[222] = -0.04;
	J[252] = -0.04;

   /*** derivatives for constraint 31 ***/

	J[56] = -3.;
	J[75] = -3.;
	J[153] = -3.;
	J[188] = -3.;
	J[223] = -3.;
	J[253] = -3.;

   /*** derivatives for constraint 32 ***/

	J[57] = -26.1;
	J[85] = -14.8;
	J[119] = -14.8;
	J[154] = -26.1;
	J[189] = -26.1;

   /*** derivatives for constraint 33 ***/

	J[58] = -15.2;
	J[86] = -8.2;
	J[120] = -8.2;
	J[155] = -15.2;
	J[190] = -15.2;

   /*** derivatives for constraint 34 ***/

	J[59] = 0.12;
	J[76] = -0.01;
	J[87] = -0.08;
	J[121] = -0.08;
	J[156] = 0.12;
	J[191] = 0.12;
	J[224] = -0.01;
	J[254] = -0.01;

   /*** derivatives for constraint 35 ***/

	J[60] = 7.09999999999999;
	J[77] = -19.;
	J[88] = -4.2;
	J[122] = -4.2;
	J[157] = 7.09999999999999;
	J[192] = 7.09999999999999;
	J[225] = -19.;
	J[255] = -19.;

   /*** derivatives for constraint 36 ***/

	J[61] = 1.5;
	J[78] = -13.7;
	J[89] = -5.5;
	J[123] = -5.5;
	J[158] = 1.5;
	J[193] = 1.5;
	J[226] = -13.7;
	J[256] = -13.7;

   /*** derivatives for constraint 37 ***/

	J[45] = 0.0299999999999999;
	J[95] = 0.0299999999999999;
	J[129] = 0.0299999999999999;
	J[164] = -0.17;
	J[199] = -0.17;
	J[232] = -0.04;
	J[262] = -0.04;

   /*** derivatives for constraint 38 ***/

	J[46] = 2.1;
	J[96] = 2.1;
	J[130] = 2.1;
	J[165] = -0.9;
	J[200] = -0.9;
	J[233] = -0.9;
	J[263] = -0.9;

   /*** derivatives for constraint 39 ***/

	J[47] = -14.8;
	J[97] = -14.8;
	J[131] = -14.8;
	J[166] = -26.1;
	J[201] = -26.1;

   /*** derivatives for constraint 40 ***/

	J[48] = -8.2;
	J[98] = -8.2;
	J[132] = -8.2;
	J[167] = -15.2;
	J[202] = -15.2;

   /*** derivatives for constraint 41 ***/

	J[49] = -0.08;
	J[99] = -0.08;
	J[133] = -0.08;
	J[168] = 0.12;
	J[203] = 0.12;
	J[234] = -0.01;
	J[264] = -0.01;

   /*** derivatives for constraint 42 ***/

	J[50] = -3.2;
	J[100] = -3.2;
	J[134] = -3.2;
	J[169] = 8.09999999999999;
	J[204] = 8.09999999999999;
	J[235] = -18.;
	J[265] = -18.;

   /*** derivatives for constraint 43 ***/

	J[51] = -2.5;
	J[101] = -2.5;
	J[135] = -2.5;
	J[170] = 4.5;
	J[205] = 4.5;
	J[236] = -10.7;
	J[266] = -10.7;

   /*** derivatives for constraint 44 ***/

	J[65] = -0.17;
	J[107] = 0.0299999999999999;
	J[141] = 0.0299999999999999;
	J[176] = -0.17;
	J[211] = -0.17;
	J[242] = -0.04;
	J[272] = -0.04;

   /*** derivatives for constraint 45 ***/

	J[66] = -3.;
	J[177] = -3.;
	J[212] = -3.;
	J[243] = -3.;
	J[273] = -3.;

   /*** derivatives for constraint 46 ***/

	J[67] = -26.1;
	J[108] = -14.8;
	J[142] = -14.8;
	J[178] = -26.1;
	J[213] = -26.1;

   /*** derivatives for constraint 47 ***/

	J[68] = -15.2;
	J[109] = -8.2;
	J[143] = -8.2;
	J[179] = -15.2;
	J[214] = -15.2;

   /*** derivatives for constraint 48 ***/

	J[69] = 0.12;
	J[110] = -0.08;
	J[144] = -0.08;
	J[180] = 0.12;
	J[215] = 0.12;
	J[244] = -0.01;
	J[274] = -0.01;

   /*** derivatives for constraint 49 ***/

	J[70] = 3.09999999999999;
	J[111] = -8.2;
	J[145] = -8.2;
	J[181] = 3.09999999999999;
	J[216] = 3.09999999999999;
	J[245] = -23.;
	J[275] = -23.;

   /*** derivatives for constraint 50 ***/

	J[112] = -7.;
	J[146] = -7.;
	J[246] = -15.2;
	J[276] = -15.2;

   /*** derivatives for constraint 51 ***/

	J[3] = 1.;
	J[11] = 1.;
	J[19] = 1.;

   /*** derivatives for constraint 52 ***/

	J[7] = 1.;
	J[15] = 1.;
	J[23] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif