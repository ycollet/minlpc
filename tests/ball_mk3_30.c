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
 fint ball_mk3_30_auxcom_[1] = { 1 /* nlc */ };
 fint ball_mk3_30_funcom_[67] = {
	30 /* nvar */,
	1 /* nobj */,
	1 /* ncon */,
	30 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	3,
	4,
	5,
	6,
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
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
	28,
	29,
	30,
	31,

	/* rownos */
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1 };

 real ball_mk3_30_boundc_[1+60+2] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.,
		2.,
		-1.7e308,
		-9.99999999999612e-05};

 real ball_mk3_30_x0comn_[30] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real ball_mk3_30_pd[60];
static real ball_mk3_30_old_x[30];
static int ball_mk3_30_xkind = -1;

 static int
ball_mk3_30_xcheck(real *x)
{
	real *x1 = ball_mk3_30_old_x, *xe = x + 30;
	errno = 0;
	if (ball_mk3_30_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ball_mk3_30_xkind = 0;
	return 1;
	}
 real
ball_mk3_30_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (ball_mk3_30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = -x[0];
	rv += -x[1];
	rv += -x[2];
	rv += -x[3];
	rv += -x[4];
	rv += -x[5];
	rv += -x[6];
	rv += -x[7];
	rv += -x[8];
	rv += -x[9];
	rv += -x[10];
	rv += -x[11];
	rv += -x[12];
	rv += -x[13];
	rv += -x[14];
	rv += -x[15];
	rv += -x[16];
	rv += -x[17];
	rv += -x[18];
	rv += -x[19];
	rv += -x[20];
	rv += -x[21];
	rv += -x[22];
	rv += -x[23];
	rv += -x[24];
	rv += -x[25];
	rv += -x[26];
	rv += -x[27];
	rv += -x[28];
	rv += -x[29];
	;}

	if (wantfg & 2) {
	g[0] = -1.;
	g[1] = -1.;
	g[2] = -1.;
	g[3] = -1.;
	g[4] = -1.;
	g[5] = -1.;
	g[6] = -1.;
	g[7] = -1.;
	g[8] = -1.;
	g[9] = -1.;
	g[10] = -1.;
	g[11] = -1.;
	g[12] = -1.;
	g[13] = -1.;
	g[14] = -1.;
	g[15] = -1.;
	g[16] = -1.;
	g[17] = -1.;
	g[18] = -1.;
	g[19] = -1.;
	g[20] = -1.;
	g[21] = -1.;
	g[22] = -1.;
	g[23] = -1.;
	g[24] = -1.;
	g[25] = -1.;
	g[26] = -1.;
	g[27] = -1.;
	g[28] = -1.;
	g[29] = -1.;
	}

	return rv;
}

 void
ball_mk3_30_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (ball_mk3_30_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	ball_mk3_30_pd[0] = x[28] * x[28];
	ball_mk3_30_pd[1] = x[28] + x[28];
	v[0] = 0.0394468602581308 * ball_mk3_30_pd[0];
	ball_mk3_30_pd[2] = x[27] * x[27];
	ball_mk3_30_pd[3] = x[27] + x[27];
	v[1] = 0.016482781963216 * ball_mk3_30_pd[2];
	v[0] += v[1];
	ball_mk3_30_pd[4] = x[26] * x[26];
	ball_mk3_30_pd[5] = x[26] + x[26];
	v[1] = 0.0565703047972114 * ball_mk3_30_pd[4];
	v[0] += v[1];
	ball_mk3_30_pd[6] = x[25] * x[25];
	ball_mk3_30_pd[7] = x[25] + x[25];
	v[1] = 0.0585014464120386 * ball_mk3_30_pd[6];
	v[0] += v[1];
	ball_mk3_30_pd[8] = x[24] * x[24];
	ball_mk3_30_pd[9] = x[24] + x[24];
	v[1] = 0.0118746308986698 * ball_mk3_30_pd[8];
	v[0] += v[1];
	ball_mk3_30_pd[10] = x[23] * x[23];
	ball_mk3_30_pd[11] = x[23] + x[23];
	v[1] = 0.0451913403894453 * ball_mk3_30_pd[10];
	v[0] += v[1];
	ball_mk3_30_pd[12] = x[22] * x[22];
	ball_mk3_30_pd[13] = x[22] + x[22];
	v[1] = 0.0362882980369683 * ball_mk3_30_pd[12];
	v[0] += v[1];
	ball_mk3_30_pd[14] = x[21] * x[21];
	ball_mk3_30_pd[15] = x[21] + x[21];
	v[1] = 0.0204948265573191 * ball_mk3_30_pd[14];
	v[0] += v[1];
	ball_mk3_30_pd[16] = x[20] * x[20];
	ball_mk3_30_pd[17] = x[20] + x[20];
	v[1] = 0.0252301288903778 * ball_mk3_30_pd[16];
	v[0] += v[1];
	ball_mk3_30_pd[18] = x[19] * x[19];
	ball_mk3_30_pd[19] = x[19] + x[19];
	v[1] = 0.0283867992035166 * ball_mk3_30_pd[18];
	v[0] += v[1];
	ball_mk3_30_pd[20] = x[18] * x[18];
	ball_mk3_30_pd[21] = x[18] + x[18];
	v[1] = 0.0425137327561133 * ball_mk3_30_pd[20];
	v[0] += v[1];
	ball_mk3_30_pd[22] = x[17] * x[17];
	ball_mk3_30_pd[23] = x[17] + x[17];
	v[1] = 0.037617677558166 * ball_mk3_30_pd[22];
	v[0] += v[1];
	ball_mk3_30_pd[24] = x[16] * x[16];
	ball_mk3_30_pd[25] = x[16] + x[16];
	v[1] = 0.0576726558598861 * ball_mk3_30_pd[24];
	v[0] += v[1];
	ball_mk3_30_pd[26] = x[15] * x[15];
	ball_mk3_30_pd[27] = x[15] + x[15];
	v[1] = 0.0259924550955063 * ball_mk3_30_pd[26];
	v[0] += v[1];
	ball_mk3_30_pd[28] = x[14] * x[14];
	ball_mk3_30_pd[29] = x[14] + x[14];
	v[1] = 0.00625392202854311 * ball_mk3_30_pd[28];
	v[0] += v[1];
	ball_mk3_30_pd[30] = x[13] * x[13];
	ball_mk3_30_pd[31] = x[13] + x[13];
	v[1] = 0.0474635696658564 * ball_mk3_30_pd[30];
	v[0] += v[1];
	ball_mk3_30_pd[32] = x[12] * x[12];
	ball_mk3_30_pd[33] = x[12] + x[12];
	v[1] = 0.030733721879364 * ball_mk3_30_pd[32];
	v[0] += v[1];
	ball_mk3_30_pd[34] = x[11] * x[11];
	ball_mk3_30_pd[35] = x[11] + x[11];
	v[1] = 0.015401148979499 * ball_mk3_30_pd[34];
	v[0] += v[1];
	ball_mk3_30_pd[36] = x[10] * x[10];
	ball_mk3_30_pd[37] = x[10] + x[10];
	v[1] = 0.049224183717334 * ball_mk3_30_pd[36];
	v[0] += v[1];
	ball_mk3_30_pd[38] = x[9] * x[9];
	ball_mk3_30_pd[39] = x[9] + x[9];
	v[1] = 0.0519656343340015 * ball_mk3_30_pd[38];
	v[0] += v[1];
	ball_mk3_30_pd[40] = x[8] * x[8];
	ball_mk3_30_pd[41] = x[8] + x[8];
	v[1] = 0.0384040110374736 * ball_mk3_30_pd[40];
	v[0] += v[1];
	ball_mk3_30_pd[42] = x[7] * x[7];
	ball_mk3_30_pd[43] = x[7] + x[7];
	v[1] = 0.0172067356549738 * ball_mk3_30_pd[42];
	v[0] += v[1];
	ball_mk3_30_pd[44] = x[6] * x[6];
	ball_mk3_30_pd[45] = x[6] + x[6];
	v[1] = 0.019974781798624 * ball_mk3_30_pd[44];
	v[0] += v[1];
	ball_mk3_30_pd[46] = x[5] * x[5];
	ball_mk3_30_pd[47] = x[5] + x[5];
	v[1] = 0.0352372440378746 * ball_mk3_30_pd[46];
	v[0] += v[1];
	ball_mk3_30_pd[48] = x[4] * x[4];
	ball_mk3_30_pd[49] = x[4] + x[4];
	v[1] = 0.0152163994975552 * ball_mk3_30_pd[48];
	v[0] += v[1];
	ball_mk3_30_pd[50] = x[3] * x[3];
	ball_mk3_30_pd[51] = x[3] + x[3];
	v[1] = 0.0075711399569244 * ball_mk3_30_pd[50];
	v[0] += v[1];
	ball_mk3_30_pd[52] = x[2] * x[2];
	ball_mk3_30_pd[53] = x[2] + x[2];
	v[1] = 0.0243048911732161 * ball_mk3_30_pd[52];
	v[0] += v[1];
	ball_mk3_30_pd[54] = x[1] * x[1];
	ball_mk3_30_pd[55] = x[1] + x[1];
	v[1] = 0.0502208123501935 * ball_mk3_30_pd[54];
	v[0] += v[1];
	ball_mk3_30_pd[56] = x[0] * x[0];
	ball_mk3_30_pd[57] = x[0] + x[0];
	v[1] = 0.041161312091797 * ball_mk3_30_pd[56];
	v[0] += v[1];
	ball_mk3_30_pd[58] = x[29] * x[29];
	ball_mk3_30_pd[59] = x[29] + x[29];
	v[1] = 0.0473965531202045 * ball_mk3_30_pd[58];
	v[0] += v[1];
	t1 = v[0] + -0.041161312091797*x[0];
	t1 += -0.0502208123501935*x[1];
	t1 += -0.0243048911732161*x[2];
	t1 += -0.0075711399569244*x[3];
	t1 += -0.0152163994975552*x[4];
	t1 += -0.0352372440378746*x[5];
	t1 += -0.019974781798624*x[6];
	t1 += -0.0172067356549738*x[7];
	t1 += -0.0384040110374736*x[8];
	t1 += -0.0519656343340015*x[9];
	t1 += -0.049224183717334*x[10];
	t1 += -0.015401148979499*x[11];
	t1 += -0.030733721879364*x[12];
	t1 += -0.0474635696658564*x[13];
	t1 += -0.00625392202854311*x[14];
	t1 += -0.0259924550955063*x[15];
	t1 += -0.0576726558598861*x[16];
	t1 += -0.037617677558166*x[17];
	t1 += -0.0425137327561133*x[18];
	t1 += -0.0283867992035166*x[19];
	t1 += -0.0252301288903778*x[20];
	t1 += -0.0204948265573191*x[21];
	t1 += -0.0362882980369683*x[22];
	t1 += -0.0451913403894453*x[23];
	t1 += -0.0118746308986698*x[24];
	t1 += -0.0585014464120386*x[25];
	t1 += -0.0565703047972114*x[26];
	t1 += -0.016482781963216*x[27];
	t1 += -0.0394468602581308*x[28];
	t1 += -0.0473965531202045*x[29];
	c[0] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[29] = 0.0473965531202045*ball_mk3_30_pd[59] + -0.0473965531202045;
	J[0] = 0.041161312091797*ball_mk3_30_pd[57] + -0.041161312091797;
	J[1] = 0.0502208123501935*ball_mk3_30_pd[55] + -0.0502208123501935;
	J[2] = 0.0243048911732161*ball_mk3_30_pd[53] + -0.0243048911732161;
	J[3] = 0.0075711399569244*ball_mk3_30_pd[51] + -0.0075711399569244;
	J[4] = 0.0152163994975552*ball_mk3_30_pd[49] + -0.0152163994975552;
	J[5] = 0.0352372440378746*ball_mk3_30_pd[47] + -0.0352372440378746;
	J[6] = 0.019974781798624*ball_mk3_30_pd[45] + -0.019974781798624;
	J[7] = 0.0172067356549738*ball_mk3_30_pd[43] + -0.0172067356549738;
	J[8] = 0.0384040110374736*ball_mk3_30_pd[41] + -0.0384040110374736;
	J[9] = 0.0519656343340015*ball_mk3_30_pd[39] + -0.0519656343340015;
	J[10] = 0.049224183717334*ball_mk3_30_pd[37] + -0.049224183717334;
	J[11] = 0.015401148979499*ball_mk3_30_pd[35] + -0.015401148979499;
	J[12] = 0.030733721879364*ball_mk3_30_pd[33] + -0.030733721879364;
	J[13] = 0.0474635696658564*ball_mk3_30_pd[31] + -0.0474635696658564;
	J[14] = 0.00625392202854311*ball_mk3_30_pd[29] + -0.00625392202854311;
	J[15] = 0.0259924550955063*ball_mk3_30_pd[27] + -0.0259924550955063;
	J[16] = 0.0576726558598861*ball_mk3_30_pd[25] + -0.0576726558598861;
	J[17] = 0.037617677558166*ball_mk3_30_pd[23] + -0.037617677558166;
	J[18] = 0.0425137327561133*ball_mk3_30_pd[21] + -0.0425137327561133;
	J[19] = 0.0283867992035166*ball_mk3_30_pd[19] + -0.0283867992035166;
	J[20] = 0.0252301288903778*ball_mk3_30_pd[17] + -0.0252301288903778;
	J[21] = 0.0204948265573191*ball_mk3_30_pd[15] + -0.0204948265573191;
	J[22] = 0.0362882980369683*ball_mk3_30_pd[13] + -0.0362882980369683;
	J[23] = 0.0451913403894453*ball_mk3_30_pd[11] + -0.0451913403894453;
	J[24] = 0.0118746308986698*ball_mk3_30_pd[9] + -0.0118746308986698;
	J[25] = 0.0585014464120386*ball_mk3_30_pd[7] + -0.0585014464120386;
	J[26] = 0.0565703047972114*ball_mk3_30_pd[5] + -0.0565703047972114;
	J[27] = 0.016482781963216*ball_mk3_30_pd[3] + -0.016482781963216;
	J[28] = 0.0394468602581308*ball_mk3_30_pd[1] + -0.0394468602581308;
	}
}
#ifdef __cplusplus
	}
#endif
