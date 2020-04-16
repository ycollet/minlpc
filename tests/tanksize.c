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
 fint tanksize_auxcom_[1] = { 21 /* nlc */ };
 fint tanksize_funcom_[345] = {
	47 /* nvar */,
	1 /* nobj */,
	74 /* ncon */,
	291 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	15,
	29,
	43,
	47,
	51,
	55,
	57,
	59,
	61,
	63,
	65,
	67,
	69,
	71,
	73,
	75,
	77,
	78,
	92,
	108,
	124,
	138,
	154,
	170,
	184,
	200,
	216,
	219,
	222,
	225,
	228,
	231,
	234,
	237,
	240,
	243,
	248,
	253,
	258,
	263,
	268,
	273,
	278,
	283,
	288,
	290,
	292,

	/* rownos */
	1,
	4,
	7,
	10,
	13,
	16,
	20,
	22,
	26,
	29,
	32,
	44,
	47,
	60,
	2,
	5,
	8,
	11,
	14,
	17,
	20,
	22,
	27,
	30,
	33,
	45,
	48,
	61,
	3,
	6,
	9,
	12,
	15,
	18,
	20,
	22,
	28,
	31,
	34,
	46,
	49,
	62,
	19,
	35,
	36,
	37,
	19,
	38,
	39,
	40,
	19,
	41,
	42,
	43,
	20,
	51,
	20,
	52,
	20,
	53,
	20,
	54,
	20,
	55,
	20,
	56,
	20,
	57,
	20,
	58,
	20,
	59,
	19,
	21,
	21,
	22,
	21,
	1,
	10,
	20,
	22,
	23,
	26,
	29,
	32,
	44,
	47,
	50,
	60,
	63,
	72,
	2,
	11,
	20,
	22,
	24,
	27,
	30,
	33,
	45,
	48,
	50,
	61,
	63,
	64,
	72,
	73,
	3,
	12,
	20,
	22,
	25,
	28,
	31,
	34,
	46,
	49,
	50,
	62,
	64,
	65,
	73,
	74,
	4,
	13,
	20,
	22,
	23,
	26,
	29,
	32,
	44,
	47,
	50,
	60,
	66,
	72,
	5,
	14,
	20,
	22,
	24,
	27,
	30,
	33,
	45,
	48,
	50,
	61,
	66,
	67,
	72,
	73,
	6,
	15,
	20,
	22,
	25,
	28,
	31,
	34,
	46,
	49,
	50,
	62,
	67,
	68,
	73,
	74,
	7,
	16,
	20,
	22,
	23,
	26,
	29,
	32,
	44,
	47,
	50,
	60,
	69,
	72,
	8,
	17,
	20,
	22,
	24,
	27,
	30,
	33,
	45,
	48,
	50,
	61,
	69,
	70,
	72,
	73,
	9,
	18,
	20,
	22,
	25,
	28,
	31,
	34,
	46,
	49,
	50,
	62,
	70,
	71,
	73,
	74,
	1,
	10,
	26,
	2,
	11,
	27,
	3,
	12,
	28,
	4,
	13,
	29,
	5,
	14,
	30,
	6,
	15,
	31,
	7,
	16,
	32,
	8,
	17,
	33,
	9,
	18,
	34,
	26,
	28,
	35,
	51,
	53,
	26,
	27,
	36,
	51,
	52,
	27,
	28,
	37,
	52,
	53,
	29,
	31,
	38,
	54,
	56,
	29,
	30,
	39,
	54,
	55,
	30,
	31,
	40,
	55,
	56,
	32,
	34,
	41,
	57,
	59,
	32,
	33,
	42,
	57,
	58,
	33,
	34,
	43,
	58,
	59,
	21,
	50,
	20,
	21 };

 real tanksize_boundc_[1+94+148] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		643.,
		4018.36,
		536.,
		3348.63,
		214.,
		1339.45,
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
		1.7e308,
		1.,
		1.,
		0.,
		0.,
		0.,
		1.,
		0.,
		0.,
		0.,
		1.,
		0.,
		1.,
		0.,
		0.,
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
		1.7e308,
		643.,
		643.,
		643.,
		4018.36,
		643.,
		4018.36,
		536.,
		3348.63,
		536.,
		3348.63,
		536.,
		3348.63,
		214.,
		1339.45,
		214.,
		1339.45,
		214.,
		1339.45,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
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
		0.,
		-643.,
		-643.,
		-643.,
		-643.,
		-643.,
		-643.,
		-536.,
		-536.,
		-536.,
		-536.,
		-536.,
		-536.,
		-214.,
		-214.,
		-214.,
		-214.,
		-214.,
		-214.,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		-1.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308};

 real tanksize_x0comn_[47] = {
		0.,
		0.,
		0.,
		643.,
		536.,
		214.,
		0.,
		0.,
		0.,
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
		0.,
		0.550375356,
		0.,
		0.292212117,
		0.224052867,
		0.,
		0.856270347,
		0.067113723,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		643.,
		643.,
		643.,
		536.,
		536.,
		536.,
		214.,
		214.,
		214.,
		0.,
		0. };

 static real tanksize_pd[43];
static real tanksize_old_x[47];
static int tanksize_xkind = -1;

 static int
tanksize_xcheck(real *x)
{
	real *x1 = tanksize_old_x, *xe = x + 47;
	errno = 0;
	if (tanksize_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tanksize_xkind = 0;
	return 1;
	}
 real
tanksize_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (tanksize_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[17];
	;}

	if (wantfg & 2) {
	g[17] = 1.;
	}

	return rv;
}

 void
tanksize_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[27];
	real t1;
	fint wantfg = *needfg;
	if (tanksize_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	tanksize_pd[0] = -50. * x[0];
	v[0] = tanksize_pd[0] * x[18];
	t1 = v[0] + x[27];
	c[0] = t1;

  /***  constraint 2  ***/

	tanksize_pd[1] = -50. * x[1];
	v[0] = tanksize_pd[1] * x[19];
	t1 = v[0] + x[28];
	c[1] = t1;

  /***  constraint 3  ***/

	tanksize_pd[2] = -50. * x[2];
	v[0] = tanksize_pd[2] * x[20];
	t1 = v[0] + x[29];
	c[2] = t1;

  /***  constraint 4  ***/

	tanksize_pd[3] = -50. * x[0];
	v[0] = tanksize_pd[3] * x[21];
	t1 = v[0] + x[30];
	c[3] = t1;

  /***  constraint 5  ***/

	tanksize_pd[4] = -50. * x[1];
	v[0] = tanksize_pd[4] * x[22];
	t1 = v[0] + x[31];
	c[4] = t1;

  /***  constraint 6  ***/

	tanksize_pd[5] = -50. * x[2];
	v[0] = tanksize_pd[5] * x[23];
	t1 = v[0] + x[32];
	c[5] = t1;

  /***  constraint 7  ***/

	tanksize_pd[6] = -50. * x[0];
	v[0] = tanksize_pd[6] * x[24];
	t1 = v[0] + x[33];
	c[6] = t1;

  /***  constraint 8  ***/

	tanksize_pd[7] = -50. * x[1];
	v[0] = tanksize_pd[7] * x[25];
	t1 = v[0] + x[34];
	c[7] = t1;

  /***  constraint 9  ***/

	tanksize_pd[8] = -50. * x[2];
	v[0] = tanksize_pd[8] * x[26];
	t1 = v[0] + x[35];
	c[8] = t1;

  /***  constraint 10  ***/

	tanksize_pd[9] = -15. * x[0];
	v[0] = tanksize_pd[9] * x[18];
	t1 = v[0] + x[27];
	c[9] = t1;

  /***  constraint 11  ***/

	tanksize_pd[10] = -15. * x[1];
	v[0] = tanksize_pd[10] * x[19];
	t1 = v[0] + x[28];
	c[10] = t1;

  /***  constraint 12  ***/

	tanksize_pd[11] = -15. * x[2];
	v[0] = tanksize_pd[11] * x[20];
	t1 = v[0] + x[29];
	c[11] = t1;

  /***  constraint 13  ***/

	tanksize_pd[12] = -15. * x[0];
	v[0] = tanksize_pd[12] * x[21];
	t1 = v[0] + x[30];
	c[12] = t1;

  /***  constraint 14  ***/

	tanksize_pd[13] = -15. * x[1];
	v[0] = tanksize_pd[13] * x[22];
	t1 = v[0] + x[31];
	c[13] = t1;

  /***  constraint 15  ***/

	tanksize_pd[14] = -15. * x[2];
	v[0] = tanksize_pd[14] * x[23];
	t1 = v[0] + x[32];
	c[14] = t1;

  /***  constraint 16  ***/

	tanksize_pd[15] = -7. * x[0];
	v[0] = tanksize_pd[15] * x[24];
	t1 = v[0] + x[33];
	c[15] = t1;

  /***  constraint 17  ***/

	tanksize_pd[16] = -7. * x[1];
	v[0] = tanksize_pd[16] * x[25];
	t1 = v[0] + x[34];
	c[16] = t1;

  /***  constraint 18  ***/

	tanksize_pd[17] = -7. * x[2];
	v[0] = tanksize_pd[17] * x[26];
	t1 = v[0] + x[35];
	c[17] = t1;

  /***  constraint 19  ***/

	tanksize_pd[18] = sqrt(x[3]);
	if (errno) in_trouble("sqrt",x[3]);
	if (tanksize_pd[18] <= 0.) {
	domain_("sqrt'", &tanksize_pd[18], 5L);
	}
	tanksize_pd[19] = 0.5 / tanksize_pd[18];
	v[0] = -0.3271 * tanksize_pd[18];
	tanksize_pd[20] = sqrt(x[4]);
	if (errno) in_trouble("sqrt",x[4]);
	if (tanksize_pd[20] <= 0.) {
	domain_("sqrt'", &tanksize_pd[20], 5L);
	}
	tanksize_pd[21] = 0.5 / tanksize_pd[20];
	v[1] = -0.3271 * tanksize_pd[20];
	v[0] += v[1];
	tanksize_pd[22] = sqrt(x[5]);
	if (errno) in_trouble("sqrt",x[5]);
	if (tanksize_pd[22] <= 0.) {
	domain_("sqrt'", &tanksize_pd[22], 5L);
	}
	tanksize_pd[23] = 0.5 / tanksize_pd[22];
	v[1] = -0.3271 * tanksize_pd[22];
	v[0] += v[1];
	t1 = v[0] + x[15];
	c[18] = t1;

  /***  constraint 20  ***/

	tanksize_pd[24] = 0.0515901369863014 * x[6];
	tanksize_pd[25] = 0.4 * x[18];
	tanksize_pd[25] += x[0];
	v[0] = 0.2 * x[21];
	tanksize_pd[25] += v[0];
	v[0] = 0.1 * x[24];
	tanksize_pd[25] += v[0];
	v[0] = tanksize_pd[24] * tanksize_pd[25];
	tanksize_pd[26] = 0.0515901369863014 * x[7];
	tanksize_pd[27] = 0.4 * x[19];
	tanksize_pd[27] += x[1];
	v[1] = 0.2 * x[22];
	tanksize_pd[27] += v[1];
	v[1] = 0.1 * x[25];
	tanksize_pd[27] += v[1];
	v[1] = tanksize_pd[26] * tanksize_pd[27];
	v[0] += v[1];
	tanksize_pd[28] = 0.0515901369863014 * x[8];
	tanksize_pd[29] = 0.4 * x[20];
	tanksize_pd[29] += x[2];
	v[1] = 0.2 * x[23];
	tanksize_pd[29] += v[1];
	v[1] = 0.1 * x[26];
	tanksize_pd[29] += v[1];
	v[1] = tanksize_pd[28] * tanksize_pd[29];
	v[0] += v[1];
	tanksize_pd[30] = 0.0528586301369863 * x[9];
	tanksize_pd[31] = 0.4 * x[18];
	tanksize_pd[31] += x[0];
	v[1] = 0.2 * x[21];
	tanksize_pd[31] += v[1];
	v[1] = 0.1 * x[24];
	tanksize_pd[31] += v[1];
	v[1] = tanksize_pd[30] * tanksize_pd[31];
	v[0] += v[1];
	tanksize_pd[32] = 0.0528586301369863 * x[10];
	tanksize_pd[33] = 0.4 * x[19];
	tanksize_pd[33] += x[1];
	v[1] = 0.2 * x[22];
	tanksize_pd[33] += v[1];
	v[1] = 0.1 * x[25];
	tanksize_pd[33] += v[1];
	v[1] = tanksize_pd[32] * tanksize_pd[33];
	v[0] += v[1];
	tanksize_pd[34] = 0.0528586301369863 * x[11];
	tanksize_pd[35] = 0.4 * x[20];
	tanksize_pd[35] += x[2];
	v[1] = 0.2 * x[23];
	tanksize_pd[35] += v[1];
	v[1] = 0.1 * x[26];
	tanksize_pd[35] += v[1];
	v[1] = tanksize_pd[34] * tanksize_pd[35];
	v[0] += v[1];
	tanksize_pd[36] = 0.0541268493150685 * x[12];
	tanksize_pd[37] = 0.4 * x[18];
	tanksize_pd[37] += x[0];
	v[1] = 0.2 * x[21];
	tanksize_pd[37] += v[1];
	v[1] = 0.1 * x[24];
	tanksize_pd[37] += v[1];
	v[1] = tanksize_pd[36] * tanksize_pd[37];
	v[0] += v[1];
	tanksize_pd[38] = 0.0541268493150685 * x[13];
	tanksize_pd[39] = 0.4 * x[19];
	tanksize_pd[39] += x[1];
	v[1] = 0.2 * x[22];
	tanksize_pd[39] += v[1];
	v[1] = 0.1 * x[25];
	tanksize_pd[39] += v[1];
	v[1] = tanksize_pd[38] * tanksize_pd[39];
	v[0] += v[1];
	tanksize_pd[40] = 0.0541268493150685 * x[14];
	tanksize_pd[41] = 0.4 * x[20];
	tanksize_pd[41] += x[2];
	v[1] = 0.2 * x[23];
	tanksize_pd[41] += v[1];
	v[1] = 0.1 * x[26];
	tanksize_pd[41] += v[1];
	v[1] = tanksize_pd[40] * tanksize_pd[41];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[46];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = 24.8739726027397 * x[17];
	tanksize_pd[42] = v[0] - x[15];
	v[0] = tanksize_pd[42] * x[16];
	t1 = v[0] + -x[45];
	t1 += -x[46];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += -x[16];
	t1 += 0.4*x[18];
	t1 += 0.4*x[19];
	t1 += 0.4*x[20];
	t1 += 0.2*x[21];
	t1 += 0.2*x[22];
	t1 += 0.2*x[23];
	t1 += 0.1*x[24];
	t1 += 0.1*x[25];
	t1 += 0.1*x[26];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[18];
	t1 += x[21];
	t1 += x[24];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[19];
	t1 += x[22];
	t1 += x[25];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[20];
	t1 += x[23];
	t1 += x[26];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = 11.4794520547945*x[0];
	t1 += 4.59178082191781*x[18];
	t1 += 2.2958904109589*x[21];
	t1 += 1.14794520547945*x[24];
	t1 += -x[27];
	t1 += -x[36];
	t1 += x[37];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = 11.4794520547945*x[1];
	t1 += 4.59178082191781*x[19];
	t1 += 2.2958904109589*x[22];
	t1 += 1.14794520547945*x[25];
	t1 += -x[28];
	t1 += -x[37];
	t1 += x[38];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = 11.4794520547945*x[2];
	t1 += 4.59178082191781*x[20];
	t1 += 2.2958904109589*x[23];
	t1 += 1.14794520547945*x[26];
	t1 += -x[29];
	t1 += x[36];
	t1 += -x[38];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = 9.56712328767123*x[0];
	t1 += 3.82684931506849*x[18];
	t1 += 1.91342465753425*x[21];
	t1 += 0.956712328767123*x[24];
	t1 += -x[30];
	t1 += -x[39];
	t1 += x[40];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = 9.56712328767123*x[1];
	t1 += 3.82684931506849*x[19];
	t1 += 1.91342465753425*x[22];
	t1 += 0.956712328767123*x[25];
	t1 += -x[31];
	t1 += -x[40];
	t1 += x[41];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = 9.56712328767123*x[2];
	t1 += 3.82684931506849*x[20];
	t1 += 1.91342465753425*x[23];
	t1 += 0.956712328767123*x[26];
	t1 += -x[32];
	t1 += x[39];
	t1 += -x[41];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = 3.82739726027397*x[0];
	t1 += 1.53095890410959*x[18];
	t1 += 0.765479452054795*x[21];
	t1 += 0.382739726027397*x[24];
	t1 += -x[33];
	t1 += -x[42];
	t1 += x[43];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = 3.82739726027397*x[1];
	t1 += 1.53095890410959*x[19];
	t1 += 0.765479452054795*x[22];
	t1 += 0.382739726027397*x[25];
	t1 += -x[34];
	t1 += -x[43];
	t1 += x[44];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = 3.82739726027397*x[2];
	t1 += 1.53095890410959*x[20];
	t1 += 0.765479452054795*x[23];
	t1 += 0.382739726027397*x[26];
	t1 += -x[35];
	t1 += x[42];
	t1 += -x[44];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -x[3];
	t1 += x[36];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[3];
	t1 += x[37];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[3];
	t1 += x[38];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[4];
	t1 += x[39];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[4];
	t1 += x[40];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[4];
	t1 += x[41];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[5];
	t1 += x[42];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[5];
	t1 += x[43];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[5];
	t1 += x[44];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[0];
	t1 += -40.*x[18];
	t1 += -40.*x[21];
	t1 += -40.*x[24];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[1];
	t1 += -40.*x[19];
	t1 += -40.*x[22];
	t1 += -40.*x[25];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[2];
	t1 += -40.*x[20];
	t1 += -40.*x[23];
	t1 += -40.*x[26];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[0];
	t1 += -x[18];
	t1 += -x[21];
	t1 += -x[24];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[1];
	t1 += -x[19];
	t1 += -x[22];
	t1 += -x[25];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[2];
	t1 += -x[20];
	t1 += -x[23];
	t1 += -x[26];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -10.*x[18];
	t1 += -10.*x[19];
	t1 += -10.*x[20];
	t1 += -20.*x[21];
	t1 += -20.*x[22];
	t1 += -20.*x[23];
	t1 += -30.*x[24];
	t1 += -30.*x[25];
	t1 += -30.*x[26];
	t1 += x[45];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[6];
	t1 += -0.5*x[36];
	t1 += -0.5*x[37];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[7];
	t1 += -0.5*x[37];
	t1 += -0.5*x[38];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[8];
	t1 += -0.5*x[36];
	t1 += -0.5*x[38];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[9];
	t1 += -0.5*x[39];
	t1 += -0.5*x[40];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[10];
	t1 += -0.5*x[40];
	t1 += -0.5*x[41];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[11];
	t1 += -0.5*x[39];
	t1 += -0.5*x[41];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[12];
	t1 += -0.5*x[42];
	t1 += -0.5*x[43];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[13];
	t1 += -0.5*x[43];
	t1 += -0.5*x[44];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[14];
	t1 += -0.5*x[42];
	t1 += -0.5*x[44];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[0];
	t1 += 40.*x[18];
	t1 += 40.*x[21];
	t1 += 40.*x[24];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[1];
	t1 += 40.*x[19];
	t1 += 40.*x[22];
	t1 += 40.*x[25];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[2];
	t1 += 40.*x[20];
	t1 += 40.*x[23];
	t1 += 40.*x[26];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = -x[18];
	t1 += -x[19];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = -x[19];
	t1 += -x[20];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[20];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[21];
	t1 += -x[22];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = -x[22];
	t1 += -x[23];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = -x[23];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[24];
	t1 += -x[25];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[25];
	t1 += -x[26];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = -x[26];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[18];
	t1 += -x[19];
	t1 += x[21];
	t1 += -x[22];
	t1 += x[24];
	t1 += -x[25];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[19];
	t1 += -x[20];
	t1 += x[22];
	t1 += -x[23];
	t1 += x[25];
	t1 += -x[26];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[20];
	t1 += x[23];
	t1 += x[26];
	c[73] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[77] = tanksize_pd[0];
	J[0] = -x[18]*50.;
	J[215] = 1.;

   /*** derivatives for constraint 2 ***/

	J[91] = tanksize_pd[1];
	J[14] = -x[19]*50.;
	J[218] = 1.;

   /*** derivatives for constraint 3 ***/

	J[107] = tanksize_pd[2];
	J[28] = -x[20]*50.;
	J[221] = 1.;

   /*** derivatives for constraint 4 ***/

	J[123] = tanksize_pd[3];
	J[1] = -x[21]*50.;
	J[224] = 1.;

   /*** derivatives for constraint 5 ***/

	J[137] = tanksize_pd[4];
	J[15] = -x[22]*50.;
	J[227] = 1.;

   /*** derivatives for constraint 6 ***/

	J[153] = tanksize_pd[5];
	J[29] = -x[23]*50.;
	J[230] = 1.;

   /*** derivatives for constraint 7 ***/

	J[169] = tanksize_pd[6];
	J[2] = -x[24]*50.;
	J[233] = 1.;

   /*** derivatives for constraint 8 ***/

	J[183] = tanksize_pd[7];
	J[16] = -x[25]*50.;
	J[236] = 1.;

   /*** derivatives for constraint 9 ***/

	J[199] = tanksize_pd[8];
	J[30] = -x[26]*50.;
	J[239] = 1.;

   /*** derivatives for constraint 10 ***/

	J[78] = tanksize_pd[9];
	J[3] = -x[18]*15.;
	J[216] = 1.;

   /*** derivatives for constraint 11 ***/

	J[92] = tanksize_pd[10];
	J[17] = -x[19]*15.;
	J[219] = 1.;

   /*** derivatives for constraint 12 ***/

	J[108] = tanksize_pd[11];
	J[31] = -x[20]*15.;
	J[222] = 1.;

   /*** derivatives for constraint 13 ***/

	J[124] = tanksize_pd[12];
	J[4] = -x[21]*15.;
	J[225] = 1.;

   /*** derivatives for constraint 14 ***/

	J[138] = tanksize_pd[13];
	J[18] = -x[22]*15.;
	J[228] = 1.;

   /*** derivatives for constraint 15 ***/

	J[154] = tanksize_pd[14];
	J[32] = -x[23]*15.;
	J[231] = 1.;

   /*** derivatives for constraint 16 ***/

	J[170] = tanksize_pd[15];
	J[5] = -x[24]*7.;
	J[234] = 1.;

   /*** derivatives for constraint 17 ***/

	J[184] = tanksize_pd[16];
	J[19] = -x[25]*7.;
	J[237] = 1.;

   /*** derivatives for constraint 18 ***/

	J[200] = tanksize_pd[17];
	J[33] = -x[26]*7.;
	J[240] = 1.;

   /*** derivatives for constraint 19 ***/

	J[50] = -0.3271*tanksize_pd[23];
	J[46] = -0.3271*tanksize_pd[21];
	J[42] = -0.3271*tanksize_pd[19];
	J[72] = 1.;

   /*** derivatives for constraint 20 ***/

	dv[0] = -tanksize_pd[40];
	J[201] = dv[0]*0.1;
	dv[1] = -tanksize_pd[40];
	J[155] = dv[1]*0.2;
	dv[2] = -tanksize_pd[40];
	J[109] = dv[2]*0.4;
	J[34] = -tanksize_pd[40];
	J[70] = -tanksize_pd[41]*0.0541268493150685;
	dv[3] = -tanksize_pd[38];
	J[185] = dv[3]*0.1;
	dv[4] = -tanksize_pd[38];
	J[139] = dv[4]*0.2;
	dv[5] = -tanksize_pd[38];
	J[93] = dv[5]*0.4;
	J[20] = -tanksize_pd[38];
	J[68] = -tanksize_pd[39]*0.0541268493150685;
	dv[6] = -tanksize_pd[36];
	J[171] = dv[6]*0.1;
	dv[7] = -tanksize_pd[36];
	J[125] = dv[7]*0.2;
	dv[8] = -tanksize_pd[36];
	J[79] = dv[8]*0.4;
	J[6] = -tanksize_pd[36];
	J[66] = -tanksize_pd[37]*0.0541268493150685;
	dv[9] = -tanksize_pd[34];
	J[201] += dv[9]*0.1;
	dv[10] = -tanksize_pd[34];
	J[155] += dv[10]*0.2;
	dv[11] = -tanksize_pd[34];
	J[109] += dv[11]*0.4;
	J[34] -= tanksize_pd[34];
	J[64] = -tanksize_pd[35]*0.0528586301369863;
	dv[12] = -tanksize_pd[32];
	J[185] += dv[12]*0.1;
	dv[13] = -tanksize_pd[32];
	J[139] += dv[13]*0.2;
	dv[14] = -tanksize_pd[32];
	J[93] += dv[14]*0.4;
	J[20] -= tanksize_pd[32];
	J[62] = -tanksize_pd[33]*0.0528586301369863;
	dv[15] = -tanksize_pd[30];
	J[171] += dv[15]*0.1;
	dv[16] = -tanksize_pd[30];
	J[125] += dv[16]*0.2;
	dv[17] = -tanksize_pd[30];
	J[79] += dv[17]*0.4;
	J[6] -= tanksize_pd[30];
	J[60] = -tanksize_pd[31]*0.0528586301369863;
	dv[18] = -tanksize_pd[28];
	J[201] += dv[18]*0.1;
	dv[19] = -tanksize_pd[28];
	J[155] += dv[19]*0.2;
	dv[20] = -tanksize_pd[28];
	J[109] += dv[20]*0.4;
	J[34] -= tanksize_pd[28];
	J[58] = -tanksize_pd[29]*0.0515901369863014;
	dv[21] = -tanksize_pd[26];
	J[185] += dv[21]*0.1;
	dv[22] = -tanksize_pd[26];
	J[139] += dv[22]*0.2;
	dv[23] = -tanksize_pd[26];
	J[93] += dv[23]*0.4;
	J[20] -= tanksize_pd[26];
	J[56] = -tanksize_pd[27]*0.0515901369863014;
	dv[24] = -tanksize_pd[24];
	J[171] += dv[24]*0.1;
	dv[25] = -tanksize_pd[24];
	J[125] += dv[25]*0.2;
	dv[26] = -tanksize_pd[24];
	J[79] += dv[26]*0.4;
	J[6] -= tanksize_pd[24];
	J[54] = -tanksize_pd[25]*0.0515901369863014;
	J[289] = 1.;

   /*** derivatives for constraint 21 ***/

	J[74] = tanksize_pd[42];
	J[73] = -x[16];
	J[76] = x[16]*24.8739726027397;
	J[287] = -1.;
	J[290] = -1.;

   /*** derivatives for constraint 22 ***/

	J[7] = 1.;
	J[21] = 1.;
	J[35] = 1.;
	J[75] = -1.;
	J[80] = 0.4;
	J[94] = 0.4;
	J[110] = 0.4;
	J[126] = 0.2;
	J[140] = 0.2;
	J[156] = 0.2;
	J[172] = 0.1;
	J[186] = 0.1;
	J[202] = 0.1;

   /*** derivatives for constraint 23 ***/

	J[81] = 1.;
	J[127] = 1.;
	J[173] = 1.;

   /*** derivatives for constraint 24 ***/

	J[95] = 1.;
	J[141] = 1.;
	J[187] = 1.;

   /*** derivatives for constraint 25 ***/

	J[111] = 1.;
	J[157] = 1.;
	J[203] = 1.;

   /*** derivatives for constraint 26 ***/

	J[8] = 11.4794520547945;
	J[82] = 4.59178082191781;
	J[128] = 2.2958904109589;
	J[174] = 1.14794520547945;
	J[217] = -1.;
	J[242] = -1.;
	J[247] = 1.;

   /*** derivatives for constraint 27 ***/

	J[22] = 11.4794520547945;
	J[96] = 4.59178082191781;
	J[142] = 2.2958904109589;
	J[188] = 1.14794520547945;
	J[220] = -1.;
	J[248] = -1.;
	J[252] = 1.;

   /*** derivatives for constraint 28 ***/

	J[36] = 11.4794520547945;
	J[112] = 4.59178082191781;
	J[158] = 2.2958904109589;
	J[204] = 1.14794520547945;
	J[223] = -1.;
	J[243] = 1.;
	J[253] = -1.;

   /*** derivatives for constraint 29 ***/

	J[9] = 9.56712328767123;
	J[83] = 3.82684931506849;
	J[129] = 1.91342465753425;
	J[175] = 0.956712328767123;
	J[226] = -1.;
	J[257] = -1.;
	J[262] = 1.;

   /*** derivatives for constraint 30 ***/

	J[23] = 9.56712328767123;
	J[97] = 3.82684931506849;
	J[143] = 1.91342465753425;
	J[189] = 0.956712328767123;
	J[229] = -1.;
	J[263] = -1.;
	J[267] = 1.;

   /*** derivatives for constraint 31 ***/

	J[37] = 9.56712328767123;
	J[113] = 3.82684931506849;
	J[159] = 1.91342465753425;
	J[205] = 0.956712328767123;
	J[232] = -1.;
	J[258] = 1.;
	J[268] = -1.;

   /*** derivatives for constraint 32 ***/

	J[10] = 3.82739726027397;
	J[84] = 1.53095890410959;
	J[130] = 0.765479452054795;
	J[176] = 0.382739726027397;
	J[235] = -1.;
	J[272] = -1.;
	J[277] = 1.;

   /*** derivatives for constraint 33 ***/

	J[24] = 3.82739726027397;
	J[98] = 1.53095890410959;
	J[144] = 0.765479452054795;
	J[190] = 0.382739726027397;
	J[238] = -1.;
	J[278] = -1.;
	J[282] = 1.;

   /*** derivatives for constraint 34 ***/

	J[38] = 3.82739726027397;
	J[114] = 1.53095890410959;
	J[160] = 0.765479452054795;
	J[206] = 0.382739726027397;
	J[241] = -1.;
	J[273] = 1.;
	J[283] = -1.;

   /*** derivatives for constraint 35 ***/

	J[43] = -1.;
	J[244] = 1.;

   /*** derivatives for constraint 36 ***/

	J[44] = -1.;
	J[249] = 1.;

   /*** derivatives for constraint 37 ***/

	J[45] = -1.;
	J[254] = 1.;

   /*** derivatives for constraint 38 ***/

	J[47] = -1.;
	J[259] = 1.;

   /*** derivatives for constraint 39 ***/

	J[48] = -1.;
	J[264] = 1.;

   /*** derivatives for constraint 40 ***/

	J[49] = -1.;
	J[269] = 1.;

   /*** derivatives for constraint 41 ***/

	J[51] = -1.;
	J[274] = 1.;

   /*** derivatives for constraint 42 ***/

	J[52] = -1.;
	J[279] = 1.;

   /*** derivatives for constraint 43 ***/

	J[53] = -1.;
	J[284] = 1.;

   /*** derivatives for constraint 44 ***/

	J[11] = 1.;
	J[85] = -40.;
	J[131] = -40.;
	J[177] = -40.;

   /*** derivatives for constraint 45 ***/

	J[25] = 1.;
	J[99] = -40.;
	J[145] = -40.;
	J[191] = -40.;

   /*** derivatives for constraint 46 ***/

	J[39] = 1.;
	J[115] = -40.;
	J[161] = -40.;
	J[207] = -40.;

   /*** derivatives for constraint 47 ***/

	J[12] = 1.;
	J[86] = -1.;
	J[132] = -1.;
	J[178] = -1.;

   /*** derivatives for constraint 48 ***/

	J[26] = 1.;
	J[100] = -1.;
	J[146] = -1.;
	J[192] = -1.;

   /*** derivatives for constraint 49 ***/

	J[40] = 1.;
	J[116] = -1.;
	J[162] = -1.;
	J[208] = -1.;

   /*** derivatives for constraint 50 ***/

	J[87] = -10.;
	J[101] = -10.;
	J[117] = -10.;
	J[133] = -20.;
	J[147] = -20.;
	J[163] = -20.;
	J[179] = -30.;
	J[193] = -30.;
	J[209] = -30.;
	J[288] = 1.;

   /*** derivatives for constraint 51 ***/

	J[55] = 1.;
	J[245] = -0.5;
	J[250] = -0.5;

   /*** derivatives for constraint 52 ***/

	J[57] = 1.;
	J[251] = -0.5;
	J[255] = -0.5;

   /*** derivatives for constraint 53 ***/

	J[59] = 1.;
	J[246] = -0.5;
	J[256] = -0.5;

   /*** derivatives for constraint 54 ***/

	J[61] = 1.;
	J[260] = -0.5;
	J[265] = -0.5;

   /*** derivatives for constraint 55 ***/

	J[63] = 1.;
	J[266] = -0.5;
	J[270] = -0.5;

   /*** derivatives for constraint 56 ***/

	J[65] = 1.;
	J[261] = -0.5;
	J[271] = -0.5;

   /*** derivatives for constraint 57 ***/

	J[67] = 1.;
	J[275] = -0.5;
	J[280] = -0.5;

   /*** derivatives for constraint 58 ***/

	J[69] = 1.;
	J[281] = -0.5;
	J[285] = -0.5;

   /*** derivatives for constraint 59 ***/

	J[71] = 1.;
	J[276] = -0.5;
	J[286] = -0.5;

   /*** derivatives for constraint 60 ***/

	J[13] = -1.;
	J[88] = 40.;
	J[134] = 40.;
	J[180] = 40.;

   /*** derivatives for constraint 61 ***/

	J[27] = -1.;
	J[102] = 40.;
	J[148] = 40.;
	J[194] = 40.;

   /*** derivatives for constraint 62 ***/

	J[41] = -1.;
	J[118] = 40.;
	J[164] = 40.;
	J[210] = 40.;

   /*** derivatives for constraint 63 ***/

	J[89] = -1.;
	J[103] = -1.;

   /*** derivatives for constraint 64 ***/

	J[104] = -1.;
	J[119] = -1.;

   /*** derivatives for constraint 65 ***/

	J[120] = -1.;

   /*** derivatives for constraint 66 ***/

	J[135] = -1.;
	J[149] = -1.;

   /*** derivatives for constraint 67 ***/

	J[150] = -1.;
	J[165] = -1.;

   /*** derivatives for constraint 68 ***/

	J[166] = -1.;

   /*** derivatives for constraint 69 ***/

	J[181] = -1.;
	J[195] = -1.;

   /*** derivatives for constraint 70 ***/

	J[196] = -1.;
	J[211] = -1.;

   /*** derivatives for constraint 71 ***/

	J[212] = -1.;

   /*** derivatives for constraint 72 ***/

	J[90] = 1.;
	J[105] = -1.;
	J[136] = 1.;
	J[151] = -1.;
	J[182] = 1.;
	J[197] = -1.;

   /*** derivatives for constraint 73 ***/

	J[106] = 1.;
	J[121] = -1.;
	J[152] = 1.;
	J[167] = -1.;
	J[198] = 1.;
	J[213] = -1.;

   /*** derivatives for constraint 74 ***/

	J[122] = 1.;
	J[168] = 1.;
	J[214] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
