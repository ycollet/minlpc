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
 fint ex1243_auxcom_[1] = { 0 /* nlc */ };
 fint ex1243_funcom_[351] = {
	68 /* nvar */,
	1 /* nobj */,
	96 /* ncon */,
	276 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,
	21,
	26,
	31,
	36,
	41,
	46,
	51,
	56,
	61,
	64,
	67,
	70,
	73,
	74,
	76,
	78,
	79,
	80,
	82,
	84,
	85,
	86,
	88,
	90,
	91,
	92,
	94,
	96,
	97,
	98,
	99,
	100,
	101,
	106,
	114,
	125,
	129,
	134,
	142,
	153,
	157,
	164,
	172,
	181,
	185,
	192,
	200,
	209,
	213,
	218,
	223,
	228,
	233,
	238,
	243,
	248,
	253,
	258,
	263,
	268,
	273,
	274,
	275,
	276,
	277,

	/* rownos */
	1,
	3,
	5,
	11,
	41,
	1,
	3,
	6,
	12,
	42,
	1,
	3,
	7,
	13,
	43,
	1,
	4,
	5,
	14,
	44,
	1,
	4,
	6,
	15,
	45,
	1,
	4,
	7,
	16,
	46,
	2,
	3,
	8,
	11,
	47,
	2,
	3,
	9,
	12,
	48,
	2,
	3,
	10,
	13,
	49,
	2,
	4,
	8,
	14,
	50,
	2,
	4,
	9,
	15,
	51,
	2,
	4,
	10,
	16,
	52,
	1,
	37,
	53,
	2,
	38,
	54,
	3,
	39,
	55,
	4,
	40,
	56,
	57,
	58,
	69,
	59,
	70,
	71,
	60,
	61,
	72,
	62,
	73,
	74,
	63,
	64,
	75,
	65,
	76,
	77,
	66,
	67,
	78,
	68,
	79,
	80,
	81,
	82,
	83,
	84,
	5,
	17,
	21,
	57,
	60,
	5,
	6,
	21,
	22,
	58,
	61,
	69,
	72,
	6,
	7,
	22,
	23,
	33,
	37,
	59,
	62,
	70,
	73,
	81,
	7,
	23,
	71,
	74,
	8,
	18,
	24,
	63,
	66,
	8,
	9,
	24,
	25,
	64,
	67,
	75,
	78,
	9,
	10,
	25,
	26,
	34,
	38,
	65,
	68,
	76,
	79,
	82,
	10,
	26,
	77,
	80,
	11,
	27,
	35,
	39,
	57,
	63,
	83,
	11,
	12,
	27,
	28,
	58,
	64,
	69,
	75,
	12,
	13,
	19,
	28,
	29,
	59,
	65,
	70,
	76,
	13,
	29,
	71,
	77,
	14,
	30,
	36,
	40,
	60,
	66,
	84,
	14,
	15,
	30,
	31,
	61,
	67,
	72,
	78,
	15,
	16,
	20,
	31,
	32,
	62,
	68,
	73,
	79,
	16,
	32,
	74,
	80,
	41,
	57,
	69,
	85,
	91,
	42,
	58,
	70,
	86,
	92,
	43,
	59,
	71,
	87,
	93,
	44,
	60,
	72,
	88,
	91,
	45,
	61,
	73,
	89,
	92,
	46,
	62,
	74,
	90,
	93,
	47,
	63,
	75,
	85,
	94,
	48,
	64,
	76,
	86,
	95,
	49,
	65,
	77,
	87,
	96,
	50,
	66,
	78,
	88,
	94,
	51,
	67,
	79,
	89,
	95,
	52,
	68,
	80,
	90,
	96,
	53,
	54,
	55,
	56 };

 real ex1243_boundc_[1+136+192] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		333.,
		443.,
		333.,
		443.,
		333.,
		443.,
		333.,
		443.,
		303.,
		423.,
		303.,
		423.,
		303.,
		423.,
		303.,
		423.,
		293.,
		408.,
		293.,
		408.,
		293.,
		408.,
		293.,
		408.,
		353.,
		413.,
		353.,
		413.,
		353.,
		413.,
		353.,
		413.,
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
		3300.,
		3300.,
		1800.,
		1800.,
		2300.,
		2300.,
		2400.,
		2400.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		443.,
		443.,
		423.,
		423.,
		293.,
		293.,
		353.,
		353.,
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
		-333.,
		-1.7e308,
		-303.,
		-1.7e308,
		408.,
		-1.7e308,
		413.,
		9990.,
		9990.,
		4545.,
		4545.,
		8160.,
		8160.,
		16520.,
		16520.,
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
		150.,
		-1.7e308,
		150.,
		-1.7e308,
		150.,
		-1.7e308,
		90.,
		-1.7e308,
		90.,
		-1.7e308,
		90.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		70.,
		-1.7e308,
		70.,
		-1.7e308,
		70.,
		-1.7e308,
		150.,
		-1.7e308,
		150.,
		-1.7e308,
		150.,
		-1.7e308,
		90.,
		-1.7e308,
		90.,
		-1.7e308,
		90.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		130.,
		-1.7e308,
		70.,
		-1.7e308,
		70.,
		-1.7e308,
		70.,
		-1.7e308,
		-313.,
		-1.7e308,
		-313.,
		-1.7e308,
		450.,
		-1.7e308,
		450.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.};

 real ex1243_x0comn_[68] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		333.,
		333.,
		333.,
		333.,
		303.,
		303.,
		303.,
		303.,
		293.,
		293.,
		293.,
		293.,
		353.,
		353.,
		353.,
		353.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real ex1243_pd[32];
static real ex1243_old_x[68];
static int ex1243_xkind = -1;

 static int
ex1243_xcheck(real *x)
{
	real *x1 = ex1243_old_x, *xe = x + 68;
	errno = 0;
	if (ex1243_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex1243_xkind = 0;
	return 1;
	}
 real
ex1243_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], rv;
	fint wantfg = *needfg;
	if (ex1243_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 208.15 * x[0];
	v[1] = x[16] + x[17];
	if (v[1] == 0.) {
	zerdiv_(&v[1]);	}
	v[2] = v[0] / v[1];
	ex1243_pd[0] = 1. / v[1];
	ex1243_pd[1] = -v[2] * ex1243_pd[0];
	v[1] = 208.15 * x[1];
	v[0] = x[17] + x[18];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex1243_pd[2] = 1. / v[0];
	ex1243_pd[3] = -v[3] * ex1243_pd[2];
	v[2] += v[3];
	v[3] = 208.15 * x[2];
	v[0] = x[18] + x[19];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = v[3] / v[0];
	ex1243_pd[4] = 1. / v[0];
	ex1243_pd[5] = -v[1] * ex1243_pd[4];
	v[2] += v[1];
	v[1] = 208.15 * x[3];
	v[0] = x[20] + x[21];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex1243_pd[6] = 1. / v[0];
	ex1243_pd[7] = -v[3] * ex1243_pd[6];
	v[2] += v[3];
	v[3] = 208.15 * x[4];
	v[0] = x[21] + x[22];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = v[3] / v[0];
	ex1243_pd[8] = 1. / v[0];
	ex1243_pd[9] = -v[1] * ex1243_pd[8];
	v[2] += v[1];
	v[1] = 208.15 * x[5];
	v[0] = x[22] + x[23];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex1243_pd[10] = 1. / v[0];
	ex1243_pd[11] = -v[3] * ex1243_pd[10];
	v[2] += v[3];
	v[3] = 208.15 * x[6];
	v[0] = x[24] + x[25];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = v[3] / v[0];
	ex1243_pd[12] = 1. / v[0];
	ex1243_pd[13] = -v[1] * ex1243_pd[12];
	v[2] += v[1];
	v[1] = 208.15 * x[7];
	v[0] = x[25] + x[26];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex1243_pd[14] = 1. / v[0];
	ex1243_pd[15] = -v[3] * ex1243_pd[14];
	v[2] += v[3];
	v[3] = 208.15 * x[8];
	v[0] = x[26] + x[27];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = v[3] / v[0];
	ex1243_pd[16] = 1. / v[0];
	ex1243_pd[17] = -v[1] * ex1243_pd[16];
	v[2] += v[1];
	v[1] = 208.15 * x[9];
	v[0] = x[28] + x[29];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex1243_pd[18] = 1. / v[0];
	ex1243_pd[19] = -v[3] * ex1243_pd[18];
	v[2] += v[3];
	v[3] = 208.15 * x[10];
	v[0] = x[29] + x[30];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = v[3] / v[0];
	ex1243_pd[20] = 1. / v[0];
	ex1243_pd[21] = -v[1] * ex1243_pd[20];
	v[2] += v[1];
	v[1] = 208.15 * x[11];
	v[0] = x[30] + x[31];
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex1243_pd[22] = 1. / v[0];
	ex1243_pd[23] = -v[3] * ex1243_pd[22];
	v[2] += v[3];
	v[3] = 208.15 * x[12];
	v[0] = x[32] + 40.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = v[3] / v[0];
	ex1243_pd[24] = 1. / v[0];
	ex1243_pd[25] = -v[1] * ex1243_pd[24];
	v[2] += v[1];
	v[1] = 208.15 * x[13];
	v[0] = x[33] + 10.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex1243_pd[26] = 1. / v[0];
	ex1243_pd[27] = -v[3] * ex1243_pd[26];
	v[2] += v[3];
	v[3] = 166.516666666667 * x[14];
	v[0] = x[34] + 42.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = v[3] / v[0];
	ex1243_pd[28] = 1. / v[0];
	ex1243_pd[29] = -v[1] * ex1243_pd[28];
	v[2] += v[1];
	v[1] = 166.516666666667 * x[15];
	v[0] = x[35] + 37.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[3] = v[1] / v[0];
	ex1243_pd[30] = 1. / v[0];
	ex1243_pd[31] = -v[3] * ex1243_pd[30];
	v[2] += v[3];
	rv = v[2] + 20.*x[12];
	rv += 20.*x[13];
	rv += 80.*x[14];
	rv += 80.*x[15];
	rv += 6250.*x[52];
	rv += 6250.*x[53];
	rv += 6250.*x[54];
	rv += 6250.*x[55];
	rv += 6250.*x[56];
	rv += 6250.*x[57];
	rv += 6250.*x[58];
	rv += 6250.*x[59];
	rv += 6250.*x[60];
	rv += 6250.*x[61];
	rv += 6250.*x[62];
	rv += 6250.*x[63];
	rv += 6250.*x[64];
	rv += 6250.*x[65];
	rv += 6250.*x[66];
	rv += 6250.*x[67];
	;}

	if (wantfg & 2) {
	g[35] = ex1243_pd[31];
	g[15] = ex1243_pd[30]*166.516666666667 + 80.;
	g[34] = ex1243_pd[29];
	g[14] = ex1243_pd[28]*166.516666666667 + 80.;
	g[33] = ex1243_pd[27];
	g[13] = ex1243_pd[26]*208.15 + 20.;
	g[32] = ex1243_pd[25];
	g[12] = ex1243_pd[24]*208.15 + 20.;
	g[31] = ex1243_pd[23];
	g[30] = ex1243_pd[23];
	g[11] = ex1243_pd[22]*208.15;
	g[30] += ex1243_pd[21];
	g[29] = ex1243_pd[21];
	g[10] = ex1243_pd[20]*208.15;
	g[29] += ex1243_pd[19];
	g[28] = ex1243_pd[19];
	g[9] = ex1243_pd[18]*208.15;
	g[27] = ex1243_pd[17];
	g[26] = ex1243_pd[17];
	g[8] = ex1243_pd[16]*208.15;
	g[26] += ex1243_pd[15];
	g[25] = ex1243_pd[15];
	g[7] = ex1243_pd[14]*208.15;
	g[25] += ex1243_pd[13];
	g[24] = ex1243_pd[13];
	g[6] = ex1243_pd[12]*208.15;
	g[23] = ex1243_pd[11];
	g[22] = ex1243_pd[11];
	g[5] = ex1243_pd[10]*208.15;
	g[22] += ex1243_pd[9];
	g[21] = ex1243_pd[9];
	g[4] = ex1243_pd[8]*208.15;
	g[21] += ex1243_pd[7];
	g[20] = ex1243_pd[7];
	g[3] = ex1243_pd[6]*208.15;
	g[19] = ex1243_pd[5];
	g[18] = ex1243_pd[5];
	g[2] = ex1243_pd[4]*208.15;
	g[18] += ex1243_pd[3];
	g[17] = ex1243_pd[3];
	g[1] = ex1243_pd[2]*208.15;
	g[17] += ex1243_pd[1];
	g[16] = ex1243_pd[1];
	g[0] = ex1243_pd[0]*208.15;
	g[52] = 6250.;
	g[53] = 6250.;
	g[54] = 6250.;
	g[55] = 6250.;
	g[56] = 6250.;
	g[57] = 6250.;
	g[58] = 6250.;
	g[59] = 6250.;
	g[60] = 6250.;
	g[61] = 6250.;
	g[62] = 6250.;
	g[63] = 6250.;
	g[64] = 6250.;
	g[65] = 6250.;
	g[66] = 6250.;
	g[67] = 6250.;
	}

	return rv;
}

 void
ex1243_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (ex1243_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[12];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[13];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[3];
	t1 += x[4];
	t1 += x[5];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += -x[3];
	t1 += 30.*x[36];
	t1 += -30.*x[37];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[1];
	t1 += -x[4];
	t1 += 30.*x[37];
	t1 += -30.*x[38];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[2];
	t1 += -x[5];
	t1 += 30.*x[38];
	t1 += -30.*x[39];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[6];
	t1 += -x[9];
	t1 += 15.*x[40];
	t1 += -15.*x[41];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[7];
	t1 += -x[10];
	t1 += 15.*x[41];
	t1 += -15.*x[42];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[8];
	t1 += -x[11];
	t1 += 15.*x[42];
	t1 += -15.*x[43];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[0];
	t1 += -x[6];
	t1 += 20.*x[44];
	t1 += -20.*x[45];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[1];
	t1 += -x[7];
	t1 += 20.*x[45];
	t1 += -20.*x[46];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[2];
	t1 += -x[8];
	t1 += 20.*x[46];
	t1 += -20.*x[47];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[3];
	t1 += -x[9];
	t1 += 40.*x[48];
	t1 += -40.*x[49];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[4];
	t1 += -x[10];
	t1 += 40.*x[49];
	t1 += -40.*x[50];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[5];
	t1 += -x[11];
	t1 += 40.*x[50];
	t1 += -40.*x[51];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[36];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[40];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[46];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[50];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[36];
	t1 += x[37];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[37];
	t1 += x[38];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[38];
	t1 += x[39];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[40];
	t1 += x[41];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[41];
	t1 += x[42];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[42];
	t1 += x[43];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[44];
	t1 += x[45];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[45];
	t1 += x[46];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[46];
	t1 += x[47];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[48];
	t1 += x[49];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[49];
	t1 += x[50];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -x[50];
	t1 += x[51];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[38];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[42];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[44];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[48];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[12];
	t1 += 30.*x[38];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[13];
	t1 += 15.*x[42];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[14];
	t1 += 20.*x[44];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[15];
	t1 += 40.*x[48];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[0];
	t1 += -2300.*x[52];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[1];
	t1 += -2300.*x[53];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[2];
	t1 += -2300.*x[54];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[3];
	t1 += -2400.*x[55];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[4];
	t1 += -2400.*x[56];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[5];
	t1 += -2400.*x[57];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[6];
	t1 += -1800.*x[58];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[7];
	t1 += -1800.*x[59];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[8];
	t1 += -1800.*x[60];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[9];
	t1 += -1800.*x[61];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[10];
	t1 += -1800.*x[62];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[11];
	t1 += -1800.*x[63];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[12];
	t1 += -3300.*x[64];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[13];
	t1 += -1800.*x[65];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[14];
	t1 += -2300.*x[66];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[15];
	t1 += -2400.*x[67];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[16];
	t1 += -x[36];
	t1 += x[44];
	t1 += 150.*x[52];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[17];
	t1 += -x[37];
	t1 += x[45];
	t1 += 150.*x[53];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[18];
	t1 += -x[38];
	t1 += x[46];
	t1 += 150.*x[54];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[20];
	t1 += -x[36];
	t1 += x[48];
	t1 += 90.*x[55];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[21];
	t1 += -x[37];
	t1 += x[49];
	t1 += 90.*x[56];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[22];
	t1 += -x[38];
	t1 += x[50];
	t1 += 90.*x[57];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[24];
	t1 += -x[40];
	t1 += x[44];
	t1 += 130.*x[58];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[25];
	t1 += -x[41];
	t1 += x[45];
	t1 += 130.*x[59];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[26];
	t1 += -x[42];
	t1 += x[46];
	t1 += 130.*x[60];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[28];
	t1 += -x[40];
	t1 += x[48];
	t1 += 70.*x[61];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[29];
	t1 += -x[41];
	t1 += x[49];
	t1 += 70.*x[62];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[30];
	t1 += -x[42];
	t1 += x[50];
	t1 += 70.*x[63];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[17];
	t1 += -x[37];
	t1 += x[45];
	t1 += 150.*x[52];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[18];
	t1 += -x[38];
	t1 += x[46];
	t1 += 150.*x[53];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[19];
	t1 += -x[39];
	t1 += x[47];
	t1 += 150.*x[54];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[21];
	t1 += -x[37];
	t1 += x[49];
	t1 += 90.*x[55];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[22];
	t1 += -x[38];
	t1 += x[50];
	t1 += 90.*x[56];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[23];
	t1 += -x[39];
	t1 += x[51];
	t1 += 90.*x[57];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[25];
	t1 += -x[41];
	t1 += x[45];
	t1 += 130.*x[58];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[26];
	t1 += -x[42];
	t1 += x[46];
	t1 += 130.*x[59];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[27];
	t1 += -x[43];
	t1 += x[47];
	t1 += 130.*x[60];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[29];
	t1 += -x[41];
	t1 += x[49];
	t1 += 70.*x[61];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[30];
	t1 += -x[42];
	t1 += x[50];
	t1 += 70.*x[62];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[31];
	t1 += -x[43];
	t1 += x[51];
	t1 += 70.*x[63];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[32];
	t1 += -x[38];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[33];
	t1 += -x[42];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[34];
	t1 += x[44];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[35];
	t1 += x[48];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[52];
	t1 += x[58];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[53];
	t1 += x[59];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[54];
	t1 += x[60];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[55];
	t1 += x[61];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[56];
	t1 += x[62];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[57];
	t1 += x[63];
	c[89] = t1;

  /***  constraint 91  ***/

	t1 = x[52];
	t1 += x[55];
	c[90] = t1;

  /***  constraint 92  ***/

	t1 = x[53];
	t1 += x[56];
	c[91] = t1;

  /***  constraint 93  ***/

	t1 = x[54];
	t1 += x[57];
	c[92] = t1;

  /***  constraint 94  ***/

	t1 = x[58];
	t1 += x[61];
	c[93] = t1;

  /***  constraint 95  ***/

	t1 = x[59];
	t1 += x[62];
	c[94] = t1;

  /***  constraint 96  ***/

	t1 = x[60];
	t1 += x[63];
	c[95] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[5] = 1.;
	J[10] = 1.;
	J[15] = 1.;
	J[20] = 1.;
	J[25] = 1.;
	J[60] = 1.;

   /*** derivatives for constraint 2 ***/

	J[30] = 1.;
	J[35] = 1.;
	J[40] = 1.;
	J[45] = 1.;
	J[50] = 1.;
	J[55] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 3 ***/

	J[1] = 1.;
	J[6] = 1.;
	J[11] = 1.;
	J[31] = 1.;
	J[36] = 1.;
	J[41] = 1.;
	J[66] = 1.;

   /*** derivatives for constraint 4 ***/

	J[16] = 1.;
	J[21] = 1.;
	J[26] = 1.;
	J[46] = 1.;
	J[51] = 1.;
	J[56] = 1.;
	J[69] = 1.;

   /*** derivatives for constraint 5 ***/

	J[2] = -1.;
	J[17] = -1.;
	J[100] = 30.;
	J[105] = -30.;

   /*** derivatives for constraint 6 ***/

	J[7] = -1.;
	J[22] = -1.;
	J[106] = 30.;
	J[113] = -30.;

   /*** derivatives for constraint 7 ***/

	J[12] = -1.;
	J[27] = -1.;
	J[114] = 30.;
	J[124] = -30.;

   /*** derivatives for constraint 8 ***/

	J[32] = -1.;
	J[47] = -1.;
	J[128] = 15.;
	J[133] = -15.;

   /*** derivatives for constraint 9 ***/

	J[37] = -1.;
	J[52] = -1.;
	J[134] = 15.;
	J[141] = -15.;

   /*** derivatives for constraint 10 ***/

	J[42] = -1.;
	J[57] = -1.;
	J[142] = 15.;
	J[152] = -15.;

   /*** derivatives for constraint 11 ***/

	J[3] = -1.;
	J[33] = -1.;
	J[156] = 20.;
	J[163] = -20.;

   /*** derivatives for constraint 12 ***/

	J[8] = -1.;
	J[38] = -1.;
	J[164] = 20.;
	J[171] = -20.;

   /*** derivatives for constraint 13 ***/

	J[13] = -1.;
	J[43] = -1.;
	J[172] = 20.;
	J[180] = -20.;

   /*** derivatives for constraint 14 ***/

	J[18] = -1.;
	J[48] = -1.;
	J[184] = 40.;
	J[191] = -40.;

   /*** derivatives for constraint 15 ***/

	J[23] = -1.;
	J[53] = -1.;
	J[192] = 40.;
	J[199] = -40.;

   /*** derivatives for constraint 16 ***/

	J[28] = -1.;
	J[58] = -1.;
	J[200] = 40.;
	J[208] = -40.;

   /*** derivatives for constraint 17 ***/

	J[101] = 1.;

   /*** derivatives for constraint 18 ***/

	J[129] = 1.;

   /*** derivatives for constraint 19 ***/

	J[173] = 1.;

   /*** derivatives for constraint 20 ***/

	J[201] = 1.;

   /*** derivatives for constraint 21 ***/

	J[102] = -1.;
	J[107] = 1.;

   /*** derivatives for constraint 22 ***/

	J[108] = -1.;
	J[115] = 1.;

   /*** derivatives for constraint 23 ***/

	J[116] = -1.;
	J[125] = 1.;

   /*** derivatives for constraint 24 ***/

	J[130] = -1.;
	J[135] = 1.;

   /*** derivatives for constraint 25 ***/

	J[136] = -1.;
	J[143] = 1.;

   /*** derivatives for constraint 26 ***/

	J[144] = -1.;
	J[153] = 1.;

   /*** derivatives for constraint 27 ***/

	J[157] = -1.;
	J[165] = 1.;

   /*** derivatives for constraint 28 ***/

	J[166] = -1.;
	J[174] = 1.;

   /*** derivatives for constraint 29 ***/

	J[175] = -1.;
	J[181] = 1.;

   /*** derivatives for constraint 30 ***/

	J[185] = -1.;
	J[193] = 1.;

   /*** derivatives for constraint 31 ***/

	J[194] = -1.;
	J[202] = 1.;

   /*** derivatives for constraint 32 ***/

	J[203] = -1.;
	J[209] = 1.;

   /*** derivatives for constraint 33 ***/

	J[117] = -1.;

   /*** derivatives for constraint 34 ***/

	J[145] = -1.;

   /*** derivatives for constraint 35 ***/

	J[158] = 1.;

   /*** derivatives for constraint 36 ***/

	J[186] = 1.;

   /*** derivatives for constraint 37 ***/

	J[61] = -1.;
	J[118] = 30.;

   /*** derivatives for constraint 38 ***/

	J[64] = -1.;
	J[146] = 15.;

   /*** derivatives for constraint 39 ***/

	J[67] = 1.;
	J[159] = 20.;

   /*** derivatives for constraint 40 ***/

	J[70] = 1.;
	J[187] = 40.;

   /*** derivatives for constraint 41 ***/

	J[4] = 1.;
	J[212] = -2300.;

   /*** derivatives for constraint 42 ***/

	J[9] = 1.;
	J[217] = -2300.;

   /*** derivatives for constraint 43 ***/

	J[14] = 1.;
	J[222] = -2300.;

   /*** derivatives for constraint 44 ***/

	J[19] = 1.;
	J[227] = -2400.;

   /*** derivatives for constraint 45 ***/

	J[24] = 1.;
	J[232] = -2400.;

   /*** derivatives for constraint 46 ***/

	J[29] = 1.;
	J[237] = -2400.;

   /*** derivatives for constraint 47 ***/

	J[34] = 1.;
	J[242] = -1800.;

   /*** derivatives for constraint 48 ***/

	J[39] = 1.;
	J[247] = -1800.;

   /*** derivatives for constraint 49 ***/

	J[44] = 1.;
	J[252] = -1800.;

   /*** derivatives for constraint 50 ***/

	J[49] = 1.;
	J[257] = -1800.;

   /*** derivatives for constraint 51 ***/

	J[54] = 1.;
	J[262] = -1800.;

   /*** derivatives for constraint 52 ***/

	J[59] = 1.;
	J[267] = -1800.;

   /*** derivatives for constraint 53 ***/

	J[62] = 1.;
	J[272] = -3300.;

   /*** derivatives for constraint 54 ***/

	J[65] = 1.;
	J[273] = -1800.;

   /*** derivatives for constraint 55 ***/

	J[68] = 1.;
	J[274] = -2300.;

   /*** derivatives for constraint 56 ***/

	J[71] = 1.;
	J[275] = -2400.;

   /*** derivatives for constraint 57 ***/

	J[72] = 1.;
	J[103] = -1.;
	J[160] = 1.;
	J[213] = 150.;

   /*** derivatives for constraint 58 ***/

	J[73] = 1.;
	J[109] = -1.;
	J[167] = 1.;
	J[218] = 150.;

   /*** derivatives for constraint 59 ***/

	J[75] = 1.;
	J[119] = -1.;
	J[176] = 1.;
	J[223] = 150.;

   /*** derivatives for constraint 60 ***/

	J[78] = 1.;
	J[104] = -1.;
	J[188] = 1.;
	J[228] = 90.;

   /*** derivatives for constraint 61 ***/

	J[79] = 1.;
	J[110] = -1.;
	J[195] = 1.;
	J[233] = 90.;

   /*** derivatives for constraint 62 ***/

	J[81] = 1.;
	J[120] = -1.;
	J[204] = 1.;
	J[238] = 90.;

   /*** derivatives for constraint 63 ***/

	J[84] = 1.;
	J[131] = -1.;
	J[161] = 1.;
	J[243] = 130.;

   /*** derivatives for constraint 64 ***/

	J[85] = 1.;
	J[137] = -1.;
	J[168] = 1.;
	J[248] = 130.;

   /*** derivatives for constraint 65 ***/

	J[87] = 1.;
	J[147] = -1.;
	J[177] = 1.;
	J[253] = 130.;

   /*** derivatives for constraint 66 ***/

	J[90] = 1.;
	J[132] = -1.;
	J[189] = 1.;
	J[258] = 70.;

   /*** derivatives for constraint 67 ***/

	J[91] = 1.;
	J[138] = -1.;
	J[196] = 1.;
	J[263] = 70.;

   /*** derivatives for constraint 68 ***/

	J[93] = 1.;
	J[148] = -1.;
	J[205] = 1.;
	J[268] = 70.;

   /*** derivatives for constraint 69 ***/

	J[74] = 1.;
	J[111] = -1.;
	J[169] = 1.;
	J[214] = 150.;

   /*** derivatives for constraint 70 ***/

	J[76] = 1.;
	J[121] = -1.;
	J[178] = 1.;
	J[219] = 150.;

   /*** derivatives for constraint 71 ***/

	J[77] = 1.;
	J[126] = -1.;
	J[182] = 1.;
	J[224] = 150.;

   /*** derivatives for constraint 72 ***/

	J[80] = 1.;
	J[112] = -1.;
	J[197] = 1.;
	J[229] = 90.;

   /*** derivatives for constraint 73 ***/

	J[82] = 1.;
	J[122] = -1.;
	J[206] = 1.;
	J[234] = 90.;

   /*** derivatives for constraint 74 ***/

	J[83] = 1.;
	J[127] = -1.;
	J[210] = 1.;
	J[239] = 90.;

   /*** derivatives for constraint 75 ***/

	J[86] = 1.;
	J[139] = -1.;
	J[170] = 1.;
	J[244] = 130.;

   /*** derivatives for constraint 76 ***/

	J[88] = 1.;
	J[149] = -1.;
	J[179] = 1.;
	J[249] = 130.;

   /*** derivatives for constraint 77 ***/

	J[89] = 1.;
	J[154] = -1.;
	J[183] = 1.;
	J[254] = 130.;

   /*** derivatives for constraint 78 ***/

	J[92] = 1.;
	J[140] = -1.;
	J[198] = 1.;
	J[259] = 70.;

   /*** derivatives for constraint 79 ***/

	J[94] = 1.;
	J[150] = -1.;
	J[207] = 1.;
	J[264] = 70.;

   /*** derivatives for constraint 80 ***/

	J[95] = 1.;
	J[155] = -1.;
	J[211] = 1.;
	J[269] = 70.;

   /*** derivatives for constraint 81 ***/

	J[96] = 1.;
	J[123] = -1.;

   /*** derivatives for constraint 82 ***/

	J[97] = 1.;
	J[151] = -1.;

   /*** derivatives for constraint 83 ***/

	J[98] = 1.;
	J[162] = 1.;

   /*** derivatives for constraint 84 ***/

	J[99] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 85 ***/

	J[215] = 1.;
	J[245] = 1.;

   /*** derivatives for constraint 86 ***/

	J[220] = 1.;
	J[250] = 1.;

   /*** derivatives for constraint 87 ***/

	J[225] = 1.;
	J[255] = 1.;

   /*** derivatives for constraint 88 ***/

	J[230] = 1.;
	J[260] = 1.;

   /*** derivatives for constraint 89 ***/

	J[235] = 1.;
	J[265] = 1.;

   /*** derivatives for constraint 90 ***/

	J[240] = 1.;
	J[270] = 1.;

   /*** derivatives for constraint 91 ***/

	J[216] = 1.;
	J[231] = 1.;

   /*** derivatives for constraint 92 ***/

	J[221] = 1.;
	J[236] = 1.;

   /*** derivatives for constraint 93 ***/

	J[226] = 1.;
	J[241] = 1.;

   /*** derivatives for constraint 94 ***/

	J[246] = 1.;
	J[261] = 1.;

   /*** derivatives for constraint 95 ***/

	J[251] = 1.;
	J[266] = 1.;

   /*** derivatives for constraint 96 ***/

	J[256] = 1.;
	J[271] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
