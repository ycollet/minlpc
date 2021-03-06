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
 fint lip_auxcom_[1] = { 0 /* nlc */ };
 fint lip_funcom_[347] = {
	60 /* nvar */,
	1 /* nobj */,
	83 /* ncon */,
	280 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	1,

	/* colstarts */
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
	53,
	57,
	61,
	65,
	69,
	73,
	77,
	81,
	85,
	89,
	93,
	97,
	101,
	105,
	109,
	113,
	117,
	121,
	125,
	129,
	133,
	137,
	141,
	145,
	149,
	153,
	157,
	161,
	165,
	169,
	173,
	177,
	181,
	185,
	189,
	193,
	196,
	199,
	202,
	205,
	208,
	211,
	214,
	217,
	233,
	249,
	265,
	281,

	/* rownos */
	1,
	14,
	62,
	76,
	3,
	15,
	63,
	77,
	2,
	16,
	64,
	78,
	3,
	17,
	65,
	79,
	2,
	18,
	66,
	80,
	3,
	19,
	67,
	81,
	2,
	20,
	68,
	82,
	3,
	21,
	69,
	83,
	4,
	22,
	62,
	76,
	5,
	23,
	63,
	77,
	4,
	24,
	64,
	78,
	5,
	25,
	65,
	79,
	4,
	26,
	66,
	80,
	5,
	27,
	67,
	81,
	4,
	28,
	68,
	82,
	5,
	29,
	69,
	83,
	6,
	30,
	62,
	76,
	7,
	31,
	63,
	77,
	6,
	32,
	64,
	78,
	7,
	33,
	65,
	79,
	6,
	34,
	66,
	80,
	7,
	35,
	67,
	81,
	6,
	36,
	68,
	82,
	7,
	37,
	69,
	83,
	8,
	38,
	62,
	76,
	9,
	39,
	63,
	77,
	8,
	40,
	64,
	78,
	9,
	41,
	65,
	79,
	8,
	42,
	66,
	80,
	9,
	43,
	67,
	81,
	8,
	44,
	68,
	82,
	9,
	45,
	69,
	83,
	10,
	46,
	62,
	76,
	11,
	47,
	63,
	77,
	10,
	48,
	64,
	78,
	11,
	49,
	65,
	79,
	10,
	50,
	66,
	80,
	11,
	51,
	67,
	81,
	10,
	52,
	68,
	82,
	11,
	53,
	69,
	83,
	12,
	54,
	62,
	76,
	13,
	55,
	63,
	77,
	12,
	56,
	64,
	78,
	13,
	57,
	65,
	79,
	12,
	58,
	66,
	80,
	13,
	59,
	67,
	81,
	12,
	60,
	68,
	82,
	13,
	61,
	69,
	83,
	70,
	74,
	76,
	70,
	75,
	77,
	71,
	74,
	78,
	71,
	75,
	79,
	72,
	74,
	80,
	72,
	75,
	81,
	73,
	74,
	82,
	73,
	75,
	83,
	1,
	14,
	15,
	22,
	23,
	30,
	31,
	38,
	39,
	46,
	47,
	54,
	55,
	62,
	63,
	70,
	1,
	16,
	17,
	24,
	25,
	32,
	33,
	40,
	41,
	48,
	49,
	56,
	57,
	64,
	65,
	71,
	1,
	18,
	19,
	26,
	27,
	34,
	35,
	42,
	43,
	50,
	51,
	58,
	59,
	66,
	67,
	72,
	1,
	20,
	21,
	28,
	29,
	36,
	37,
	44,
	45,
	52,
	53,
	60,
	61,
	68,
	69,
	73 };

 real lip_boundc_[1+120+166] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		1.7e308,
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
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		6000.,
		6000.,
		4800.,
		4800.,
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
		1.7e308};

 real lip_x0comn_[60] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real lip_pd[8];
static real lip_old_x[60];
static int lip_xkind = -1;

 static int
lip_xcheck(real *x)
{
	real *x1 = lip_old_x, *xe = x + 60;
	errno = 0;
	if (lip_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	lip_xkind = 0;
	return 1;
	}
 real
lip_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[48], rv;
	fint wantfg = *needfg;
	if (lip_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 25. * x[0];
	v[1] = 25. * x[1];
	v[0] += v[1];
	v[1] = 25. * x[8];
	v[0] += v[1];
	v[1] = 25. * x[9];
	v[0] += v[1];
	v[1] = 25. * x[16];
	v[0] += v[1];
	v[1] = 25. * x[17];
	v[0] += v[1];
	v[1] = 25. * x[24];
	v[0] += v[1];
	v[1] = 25. * x[25];
	v[0] += v[1];
	v[1] = 25. * x[32];
	v[0] += v[1];
	v[1] = 25. * x[33];
	v[0] += v[1];
	v[1] = 25. * x[40];
	v[0] += v[1];
	v[1] = 25. * x[41];
	v[0] += v[1];
	lip_pd[0] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (lip_pd[0] <= 0.) {
	domain_("sqrt'", &lip_pd[0], 5L);
	}
	lip_pd[1] = 0.5 / lip_pd[0];
	v[0] = -39.2 * lip_pd[0];
	v[1] = 25. * x[2];
	v[2] = 25. * x[3];
	v[1] += v[2];
	v[2] = 25. * x[10];
	v[1] += v[2];
	v[2] = 25. * x[11];
	v[1] += v[2];
	v[2] = 25. * x[18];
	v[1] += v[2];
	v[2] = 25. * x[19];
	v[1] += v[2];
	v[2] = 25. * x[26];
	v[1] += v[2];
	v[2] = 25. * x[27];
	v[1] += v[2];
	v[2] = 25. * x[34];
	v[1] += v[2];
	v[2] = 25. * x[35];
	v[1] += v[2];
	v[2] = 25. * x[42];
	v[1] += v[2];
	v[2] = 25. * x[43];
	v[1] += v[2];
	lip_pd[2] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (lip_pd[2] <= 0.) {
	domain_("sqrt'", &lip_pd[2], 5L);
	}
	lip_pd[3] = 0.5 / lip_pd[2];
	v[1] = -39.2 * lip_pd[2];
	v[0] += v[1];
	v[1] = 25. * x[4];
	v[2] = 25. * x[5];
	v[1] += v[2];
	v[2] = 25. * x[12];
	v[1] += v[2];
	v[2] = 25. * x[13];
	v[1] += v[2];
	v[2] = 25. * x[20];
	v[1] += v[2];
	v[2] = 25. * x[21];
	v[1] += v[2];
	v[2] = 25. * x[28];
	v[1] += v[2];
	v[2] = 25. * x[29];
	v[1] += v[2];
	v[2] = 25. * x[36];
	v[1] += v[2];
	v[2] = 25. * x[37];
	v[1] += v[2];
	v[2] = 25. * x[44];
	v[1] += v[2];
	v[2] = 25. * x[45];
	v[1] += v[2];
	lip_pd[4] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (lip_pd[4] <= 0.) {
	domain_("sqrt'", &lip_pd[4], 5L);
	}
	lip_pd[5] = 0.5 / lip_pd[4];
	v[1] = -39.2 * lip_pd[4];
	v[0] += v[1];
	v[1] = 25. * x[6];
	v[2] = 25. * x[7];
	v[1] += v[2];
	v[2] = 25. * x[14];
	v[1] += v[2];
	v[2] = 25. * x[15];
	v[1] += v[2];
	v[2] = 25. * x[22];
	v[1] += v[2];
	v[2] = 25. * x[23];
	v[1] += v[2];
	v[2] = 25. * x[30];
	v[1] += v[2];
	v[2] = 25. * x[31];
	v[1] += v[2];
	v[2] = 25. * x[38];
	v[1] += v[2];
	v[2] = 25. * x[39];
	v[1] += v[2];
	v[2] = 25. * x[46];
	v[1] += v[2];
	v[2] = 25. * x[47];
	v[1] += v[2];
	lip_pd[6] = sqrt(v[1]);
	if (errno) in_trouble("sqrt",v[1]);
	if (lip_pd[6] <= 0.) {
	domain_("sqrt'", &lip_pd[6], 5L);
	}
	lip_pd[7] = 0.5 / lip_pd[6];
	v[1] = -39.2 * lip_pd[6];
	v[0] += v[1];
	rv = v[0] + 196000.*x[0];
	rv += 396800.*x[1];
	rv += 192000.*x[2];
	rv += 393600.*x[3];
	rv += 184000.*x[4];
	rv += 387200.*x[5];
	rv += 240000.*x[7];
	rv += 192000.*x[8];
	rv += 393600.*x[9];
	rv += 196000.*x[10];
	rv += 396800.*x[11];
	rv += 176000.*x[12];
	rv += 380800.*x[13];
	rv += 240000.*x[15];
	rv += 192000.*x[16];
	rv += 393600.*x[17];
	rv += 184000.*x[18];
	rv += 387200.*x[19];
	rv += 196000.*x[20];
	rv += 396800.*x[21];
	rv += 50000.*x[22];
	rv += 280000.*x[23];
	rv += 184000.*x[24];
	rv += 387200.*x[25];
	rv += 176000.*x[26];
	rv += 380800.*x[27];
	rv += 196000.*x[28];
	rv += 396800.*x[29];
	rv += 150000.*x[30];
	rv += 360000.*x[31];
	rv += 184000.*x[32];
	rv += 387200.*x[33];
	rv += 192000.*x[34];
	rv += 393600.*x[35];
	rv += 184000.*x[36];
	rv += 387200.*x[37];
	rv += 100000.*x[38];
	rv += 320000.*x[39];
	rv += 168000.*x[40];
	rv += 374400.*x[41];
	rv += 176000.*x[42];
	rv += 380800.*x[43];
	rv += 184000.*x[44];
	rv += 387200.*x[45];
	rv += 175000.*x[46];
	rv += 380000.*x[47];
	rv += 55.*x[48];
	rv += 455.*x[49];
	rv += 50.*x[50];
	rv += 450.*x[51];
	rv += 55.*x[52];
	rv += 455.*x[53];
	rv += 55.*x[54];
	rv += 455.*x[55];
	rv += -80000.*x[56];
	rv += -80000.*x[57];
	rv += -80000.*x[58];
	rv += -80000.*x[59];
	;}

	if (wantfg & 2) {
	dv[0] = -39.2*lip_pd[7];
	dv[1] = dv[0];
	g[47] = dv[1]*25. + 380000.;
	dv[2] = dv[0];
	g[46] = dv[2]*25. + 175000.;
	dv[3] = dv[0];
	g[39] = dv[3]*25. + 320000.;
	dv[4] = dv[0];
	g[38] = dv[4]*25. + 100000.;
	dv[5] = dv[0];
	g[31] = dv[5]*25. + 360000.;
	dv[6] = dv[0];
	g[30] = dv[6]*25. + 150000.;
	dv[7] = dv[0];
	g[23] = dv[7]*25. + 280000.;
	dv[8] = dv[0];
	g[22] = dv[8]*25. + 50000.;
	dv[9] = dv[0];
	g[15] = dv[9]*25. + 240000.;
	dv[10] = dv[0];
	g[14] = dv[10]*25.;
	dv[11] = dv[0];
	g[7] = dv[11]*25. + 240000.;
	g[6] = dv[0]*25.;
	dv[12] = -39.2*lip_pd[5];
	dv[13] = dv[12];
	g[45] = dv[13]*25. + 387200.;
	dv[14] = dv[12];
	g[44] = dv[14]*25. + 184000.;
	dv[15] = dv[12];
	g[37] = dv[15]*25. + 387200.;
	dv[16] = dv[12];
	g[36] = dv[16]*25. + 184000.;
	dv[17] = dv[12];
	g[29] = dv[17]*25. + 396800.;
	dv[18] = dv[12];
	g[28] = dv[18]*25. + 196000.;
	dv[19] = dv[12];
	g[21] = dv[19]*25. + 396800.;
	dv[20] = dv[12];
	g[20] = dv[20]*25. + 196000.;
	dv[21] = dv[12];
	g[13] = dv[21]*25. + 380800.;
	dv[22] = dv[12];
	g[12] = dv[22]*25. + 176000.;
	dv[23] = dv[12];
	g[5] = dv[23]*25. + 387200.;
	g[4] = dv[12]*25. + 184000.;
	dv[24] = -39.2*lip_pd[3];
	dv[25] = dv[24];
	g[43] = dv[25]*25. + 380800.;
	dv[26] = dv[24];
	g[42] = dv[26]*25. + 176000.;
	dv[27] = dv[24];
	g[35] = dv[27]*25. + 393600.;
	dv[28] = dv[24];
	g[34] = dv[28]*25. + 192000.;
	dv[29] = dv[24];
	g[27] = dv[29]*25. + 380800.;
	dv[30] = dv[24];
	g[26] = dv[30]*25. + 176000.;
	dv[31] = dv[24];
	g[19] = dv[31]*25. + 387200.;
	dv[32] = dv[24];
	g[18] = dv[32]*25. + 184000.;
	dv[33] = dv[24];
	g[11] = dv[33]*25. + 396800.;
	dv[34] = dv[24];
	g[10] = dv[34]*25. + 196000.;
	dv[35] = dv[24];
	g[3] = dv[35]*25. + 393600.;
	g[2] = dv[24]*25. + 192000.;
	dv[36] = -39.2*lip_pd[1];
	dv[37] = dv[36];
	g[41] = dv[37]*25. + 374400.;
	dv[38] = dv[36];
	g[40] = dv[38]*25. + 168000.;
	dv[39] = dv[36];
	g[33] = dv[39]*25. + 387200.;
	dv[40] = dv[36];
	g[32] = dv[40]*25. + 184000.;
	dv[41] = dv[36];
	g[25] = dv[41]*25. + 387200.;
	dv[42] = dv[36];
	g[24] = dv[42]*25. + 184000.;
	dv[43] = dv[36];
	g[17] = dv[43]*25. + 393600.;
	dv[44] = dv[36];
	g[16] = dv[44]*25. + 192000.;
	dv[45] = dv[36];
	g[9] = dv[45]*25. + 393600.;
	dv[46] = dv[36];
	g[8] = dv[46]*25. + 192000.;
	dv[47] = dv[36];
	g[1] = dv[47]*25. + 396800.;
	g[0] = dv[36]*25. + 196000.;
	g[48] = 55.;
	g[49] = 455.;
	g[50] = 50.;
	g[51] = 450.;
	g[52] = 55.;
	g[53] = 455.;
	g[54] = 55.;
	g[55] = 455.;
	g[56] = -80000.;
	g[57] = -80000.;
	g[58] = -80000.;
	g[59] = -80000.;
	}

	return rv;
}

 void
lip_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (lip_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[0];
	t1 += x[2];
	t1 += x[4];
	t1 += x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[1];
	t1 += x[3];
	t1 += x[5];
	t1 += x[7];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[8];
	t1 += x[10];
	t1 += x[12];
	t1 += x[14];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[9];
	t1 += x[11];
	t1 += x[13];
	t1 += x[15];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[16];
	t1 += x[18];
	t1 += x[20];
	t1 += x[22];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[17];
	t1 += x[19];
	t1 += x[21];
	t1 += x[23];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[24];
	t1 += x[26];
	t1 += x[28];
	t1 += x[30];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[25];
	t1 += x[27];
	t1 += x[29];
	t1 += x[31];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[32];
	t1 += x[34];
	t1 += x[36];
	t1 += x[38];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[33];
	t1 += x[35];
	t1 += x[37];
	t1 += x[39];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[40];
	t1 += x[42];
	t1 += x[44];
	t1 += x[46];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[41];
	t1 += x[43];
	t1 += x[45];
	t1 += x[47];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[0];
	t1 += -x[56];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[1];
	t1 += -x[56];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[2];
	t1 += -x[57];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[3];
	t1 += -x[57];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[4];
	t1 += -x[58];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[5];
	t1 += -x[58];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[6];
	t1 += -x[59];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[7];
	t1 += -x[59];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[8];
	t1 += -x[56];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[9];
	t1 += -x[56];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[10];
	t1 += -x[57];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[11];
	t1 += -x[57];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[12];
	t1 += -x[58];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[13];
	t1 += -x[58];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[14];
	t1 += -x[59];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[15];
	t1 += -x[59];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[16];
	t1 += -x[56];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[17];
	t1 += -x[56];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[18];
	t1 += -x[57];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[19];
	t1 += -x[57];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[20];
	t1 += -x[58];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[21];
	t1 += -x[58];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[22];
	t1 += -x[59];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[23];
	t1 += -x[59];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[24];
	t1 += -x[56];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[25];
	t1 += -x[56];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[26];
	t1 += -x[57];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[27];
	t1 += -x[57];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[28];
	t1 += -x[58];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[29];
	t1 += -x[58];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[30];
	t1 += -x[59];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[31];
	t1 += -x[59];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[32];
	t1 += -x[56];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[33];
	t1 += -x[56];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[34];
	t1 += -x[57];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[35];
	t1 += -x[57];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[36];
	t1 += -x[58];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[37];
	t1 += -x[58];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[38];
	t1 += -x[59];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[39];
	t1 += -x[59];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[40];
	t1 += -x[56];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[41];
	t1 += -x[56];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[42];
	t1 += -x[57];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[43];
	t1 += -x[57];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[44];
	t1 += -x[58];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[45];
	t1 += -x[58];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[46];
	t1 += -x[59];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[47];
	t1 += -x[59];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[0];
	t1 += x[8];
	t1 += x[16];
	t1 += x[24];
	t1 += x[32];
	t1 += x[40];
	t1 += -x[56];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[1];
	t1 += x[9];
	t1 += x[17];
	t1 += x[25];
	t1 += x[33];
	t1 += x[41];
	t1 += -x[56];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[2];
	t1 += x[10];
	t1 += x[18];
	t1 += x[26];
	t1 += x[34];
	t1 += x[42];
	t1 += -x[57];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[3];
	t1 += x[11];
	t1 += x[19];
	t1 += x[27];
	t1 += x[35];
	t1 += x[43];
	t1 += -x[57];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[4];
	t1 += x[12];
	t1 += x[20];
	t1 += x[28];
	t1 += x[36];
	t1 += x[44];
	t1 += -x[58];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[5];
	t1 += x[13];
	t1 += x[21];
	t1 += x[29];
	t1 += x[37];
	t1 += x[45];
	t1 += -x[58];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[6];
	t1 += x[14];
	t1 += x[22];
	t1 += x[30];
	t1 += x[38];
	t1 += x[46];
	t1 += -x[59];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[7];
	t1 += x[15];
	t1 += x[23];
	t1 += x[31];
	t1 += x[39];
	t1 += x[47];
	t1 += -x[59];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[48];
	t1 += x[49];
	t1 += -5000.*x[56];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[50];
	t1 += x[51];
	t1 += -3000.*x[57];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[52];
	t1 += x[53];
	t1 += -3000.*x[58];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[54];
	t1 += x[55];
	t1 += -2000.*x[59];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[48];
	t1 += x[50];
	t1 += x[52];
	t1 += x[54];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[49];
	t1 += x[51];
	t1 += x[53];
	t1 += x[55];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = -1000.*x[0];
	t1 += -1000.*x[8];
	t1 += -1000.*x[16];
	t1 += -1000.*x[24];
	t1 += -1000.*x[32];
	t1 += -1000.*x[40];
	t1 += x[48];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -800.*x[1];
	t1 += -800.*x[9];
	t1 += -800.*x[17];
	t1 += -800.*x[25];
	t1 += -800.*x[33];
	t1 += -800.*x[41];
	t1 += x[49];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -1000.*x[2];
	t1 += -1000.*x[10];
	t1 += -1000.*x[18];
	t1 += -1000.*x[26];
	t1 += -1000.*x[34];
	t1 += -1000.*x[42];
	t1 += x[50];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = -800.*x[3];
	t1 += -800.*x[11];
	t1 += -800.*x[19];
	t1 += -800.*x[27];
	t1 += -800.*x[35];
	t1 += -800.*x[43];
	t1 += x[51];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = -1000.*x[4];
	t1 += -1000.*x[12];
	t1 += -1000.*x[20];
	t1 += -1000.*x[28];
	t1 += -1000.*x[36];
	t1 += -1000.*x[44];
	t1 += x[52];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -800.*x[5];
	t1 += -800.*x[13];
	t1 += -800.*x[21];
	t1 += -800.*x[29];
	t1 += -800.*x[37];
	t1 += -800.*x[45];
	t1 += x[53];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -1000.*x[6];
	t1 += -1000.*x[14];
	t1 += -1000.*x[22];
	t1 += -1000.*x[30];
	t1 += -1000.*x[38];
	t1 += -1000.*x[46];
	t1 += x[54];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = -800.*x[7];
	t1 += -800.*x[15];
	t1 += -800.*x[23];
	t1 += -800.*x[31];
	t1 += -800.*x[39];
	t1 += -800.*x[47];
	t1 += x[55];
	c[82] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[216] = 1.;
	J[232] = 1.;
	J[248] = 1.;
	J[264] = 1.;

   /*** derivatives for constraint 2 ***/

	J[0] = 1.;
	J[8] = 1.;
	J[16] = 1.;
	J[24] = 1.;

   /*** derivatives for constraint 3 ***/

	J[4] = 1.;
	J[12] = 1.;
	J[20] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 4 ***/

	J[32] = 1.;
	J[40] = 1.;
	J[48] = 1.;
	J[56] = 1.;

   /*** derivatives for constraint 5 ***/

	J[36] = 1.;
	J[44] = 1.;
	J[52] = 1.;
	J[60] = 1.;

   /*** derivatives for constraint 6 ***/

	J[64] = 1.;
	J[72] = 1.;
	J[80] = 1.;
	J[88] = 1.;

   /*** derivatives for constraint 7 ***/

	J[68] = 1.;
	J[76] = 1.;
	J[84] = 1.;
	J[92] = 1.;

   /*** derivatives for constraint 8 ***/

	J[96] = 1.;
	J[104] = 1.;
	J[112] = 1.;
	J[120] = 1.;

   /*** derivatives for constraint 9 ***/

	J[100] = 1.;
	J[108] = 1.;
	J[116] = 1.;
	J[124] = 1.;

   /*** derivatives for constraint 10 ***/

	J[128] = 1.;
	J[136] = 1.;
	J[144] = 1.;
	J[152] = 1.;

   /*** derivatives for constraint 11 ***/

	J[132] = 1.;
	J[140] = 1.;
	J[148] = 1.;
	J[156] = 1.;

   /*** derivatives for constraint 12 ***/

	J[160] = 1.;
	J[168] = 1.;
	J[176] = 1.;
	J[184] = 1.;

   /*** derivatives for constraint 13 ***/

	J[164] = 1.;
	J[172] = 1.;
	J[180] = 1.;
	J[188] = 1.;

   /*** derivatives for constraint 14 ***/

	J[1] = 1.;
	J[217] = -1.;

   /*** derivatives for constraint 15 ***/

	J[5] = 1.;
	J[218] = -1.;

   /*** derivatives for constraint 16 ***/

	J[9] = 1.;
	J[233] = -1.;

   /*** derivatives for constraint 17 ***/

	J[13] = 1.;
	J[234] = -1.;

   /*** derivatives for constraint 18 ***/

	J[17] = 1.;
	J[249] = -1.;

   /*** derivatives for constraint 19 ***/

	J[21] = 1.;
	J[250] = -1.;

   /*** derivatives for constraint 20 ***/

	J[25] = 1.;
	J[265] = -1.;

   /*** derivatives for constraint 21 ***/

	J[29] = 1.;
	J[266] = -1.;

   /*** derivatives for constraint 22 ***/

	J[33] = 1.;
	J[219] = -1.;

   /*** derivatives for constraint 23 ***/

	J[37] = 1.;
	J[220] = -1.;

   /*** derivatives for constraint 24 ***/

	J[41] = 1.;
	J[235] = -1.;

   /*** derivatives for constraint 25 ***/

	J[45] = 1.;
	J[236] = -1.;

   /*** derivatives for constraint 26 ***/

	J[49] = 1.;
	J[251] = -1.;

   /*** derivatives for constraint 27 ***/

	J[53] = 1.;
	J[252] = -1.;

   /*** derivatives for constraint 28 ***/

	J[57] = 1.;
	J[267] = -1.;

   /*** derivatives for constraint 29 ***/

	J[61] = 1.;
	J[268] = -1.;

   /*** derivatives for constraint 30 ***/

	J[65] = 1.;
	J[221] = -1.;

   /*** derivatives for constraint 31 ***/

	J[69] = 1.;
	J[222] = -1.;

   /*** derivatives for constraint 32 ***/

	J[73] = 1.;
	J[237] = -1.;

   /*** derivatives for constraint 33 ***/

	J[77] = 1.;
	J[238] = -1.;

   /*** derivatives for constraint 34 ***/

	J[81] = 1.;
	J[253] = -1.;

   /*** derivatives for constraint 35 ***/

	J[85] = 1.;
	J[254] = -1.;

   /*** derivatives for constraint 36 ***/

	J[89] = 1.;
	J[269] = -1.;

   /*** derivatives for constraint 37 ***/

	J[93] = 1.;
	J[270] = -1.;

   /*** derivatives for constraint 38 ***/

	J[97] = 1.;
	J[223] = -1.;

   /*** derivatives for constraint 39 ***/

	J[101] = 1.;
	J[224] = -1.;

   /*** derivatives for constraint 40 ***/

	J[105] = 1.;
	J[239] = -1.;

   /*** derivatives for constraint 41 ***/

	J[109] = 1.;
	J[240] = -1.;

   /*** derivatives for constraint 42 ***/

	J[113] = 1.;
	J[255] = -1.;

   /*** derivatives for constraint 43 ***/

	J[117] = 1.;
	J[256] = -1.;

   /*** derivatives for constraint 44 ***/

	J[121] = 1.;
	J[271] = -1.;

   /*** derivatives for constraint 45 ***/

	J[125] = 1.;
	J[272] = -1.;

   /*** derivatives for constraint 46 ***/

	J[129] = 1.;
	J[225] = -1.;

   /*** derivatives for constraint 47 ***/

	J[133] = 1.;
	J[226] = -1.;

   /*** derivatives for constraint 48 ***/

	J[137] = 1.;
	J[241] = -1.;

   /*** derivatives for constraint 49 ***/

	J[141] = 1.;
	J[242] = -1.;

   /*** derivatives for constraint 50 ***/

	J[145] = 1.;
	J[257] = -1.;

   /*** derivatives for constraint 51 ***/

	J[149] = 1.;
	J[258] = -1.;

   /*** derivatives for constraint 52 ***/

	J[153] = 1.;
	J[273] = -1.;

   /*** derivatives for constraint 53 ***/

	J[157] = 1.;
	J[274] = -1.;

   /*** derivatives for constraint 54 ***/

	J[161] = 1.;
	J[227] = -1.;

   /*** derivatives for constraint 55 ***/

	J[165] = 1.;
	J[228] = -1.;

   /*** derivatives for constraint 56 ***/

	J[169] = 1.;
	J[243] = -1.;

   /*** derivatives for constraint 57 ***/

	J[173] = 1.;
	J[244] = -1.;

   /*** derivatives for constraint 58 ***/

	J[177] = 1.;
	J[259] = -1.;

   /*** derivatives for constraint 59 ***/

	J[181] = 1.;
	J[260] = -1.;

   /*** derivatives for constraint 60 ***/

	J[185] = 1.;
	J[275] = -1.;

   /*** derivatives for constraint 61 ***/

	J[189] = 1.;
	J[276] = -1.;

   /*** derivatives for constraint 62 ***/

	J[2] = 1.;
	J[34] = 1.;
	J[66] = 1.;
	J[98] = 1.;
	J[130] = 1.;
	J[162] = 1.;
	J[229] = -1.;

   /*** derivatives for constraint 63 ***/

	J[6] = 1.;
	J[38] = 1.;
	J[70] = 1.;
	J[102] = 1.;
	J[134] = 1.;
	J[166] = 1.;
	J[230] = -1.;

   /*** derivatives for constraint 64 ***/

	J[10] = 1.;
	J[42] = 1.;
	J[74] = 1.;
	J[106] = 1.;
	J[138] = 1.;
	J[170] = 1.;
	J[245] = -1.;

   /*** derivatives for constraint 65 ***/

	J[14] = 1.;
	J[46] = 1.;
	J[78] = 1.;
	J[110] = 1.;
	J[142] = 1.;
	J[174] = 1.;
	J[246] = -1.;

   /*** derivatives for constraint 66 ***/

	J[18] = 1.;
	J[50] = 1.;
	J[82] = 1.;
	J[114] = 1.;
	J[146] = 1.;
	J[178] = 1.;
	J[261] = -1.;

   /*** derivatives for constraint 67 ***/

	J[22] = 1.;
	J[54] = 1.;
	J[86] = 1.;
	J[118] = 1.;
	J[150] = 1.;
	J[182] = 1.;
	J[262] = -1.;

   /*** derivatives for constraint 68 ***/

	J[26] = 1.;
	J[58] = 1.;
	J[90] = 1.;
	J[122] = 1.;
	J[154] = 1.;
	J[186] = 1.;
	J[277] = -1.;

   /*** derivatives for constraint 69 ***/

	J[30] = 1.;
	J[62] = 1.;
	J[94] = 1.;
	J[126] = 1.;
	J[158] = 1.;
	J[190] = 1.;
	J[278] = -1.;

   /*** derivatives for constraint 70 ***/

	J[192] = 1.;
	J[195] = 1.;
	J[231] = -5000.;

   /*** derivatives for constraint 71 ***/

	J[198] = 1.;
	J[201] = 1.;
	J[247] = -3000.;

   /*** derivatives for constraint 72 ***/

	J[204] = 1.;
	J[207] = 1.;
	J[263] = -3000.;

   /*** derivatives for constraint 73 ***/

	J[210] = 1.;
	J[213] = 1.;
	J[279] = -2000.;

   /*** derivatives for constraint 74 ***/

	J[193] = 1.;
	J[199] = 1.;
	J[205] = 1.;
	J[211] = 1.;

   /*** derivatives for constraint 75 ***/

	J[196] = 1.;
	J[202] = 1.;
	J[208] = 1.;
	J[214] = 1.;

   /*** derivatives for constraint 76 ***/

	J[3] = -1000.;
	J[35] = -1000.;
	J[67] = -1000.;
	J[99] = -1000.;
	J[131] = -1000.;
	J[163] = -1000.;
	J[194] = 1.;

   /*** derivatives for constraint 77 ***/

	J[7] = -800.;
	J[39] = -800.;
	J[71] = -800.;
	J[103] = -800.;
	J[135] = -800.;
	J[167] = -800.;
	J[197] = 1.;

   /*** derivatives for constraint 78 ***/

	J[11] = -1000.;
	J[43] = -1000.;
	J[75] = -1000.;
	J[107] = -1000.;
	J[139] = -1000.;
	J[171] = -1000.;
	J[200] = 1.;

   /*** derivatives for constraint 79 ***/

	J[15] = -800.;
	J[47] = -800.;
	J[79] = -800.;
	J[111] = -800.;
	J[143] = -800.;
	J[175] = -800.;
	J[203] = 1.;

   /*** derivatives for constraint 80 ***/

	J[19] = -1000.;
	J[51] = -1000.;
	J[83] = -1000.;
	J[115] = -1000.;
	J[147] = -1000.;
	J[179] = -1000.;
	J[206] = 1.;

   /*** derivatives for constraint 81 ***/

	J[23] = -800.;
	J[55] = -800.;
	J[87] = -800.;
	J[119] = -800.;
	J[151] = -800.;
	J[183] = -800.;
	J[209] = 1.;

   /*** derivatives for constraint 82 ***/

	J[27] = -1000.;
	J[59] = -1000.;
	J[91] = -1000.;
	J[123] = -1000.;
	J[155] = -1000.;
	J[187] = -1000.;
	J[212] = 1.;

   /*** derivatives for constraint 83 ***/

	J[31] = -800.;
	J[63] = -800.;
	J[95] = -800.;
	J[127] = -800.;
	J[159] = -800.;
	J[191] = -800.;
	J[215] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
