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
 fint graphpart_3pm_0333_0333_auxcom_[1] = { 0 /* nlc */ };
 fint graphpart_3pm_0333_0333_funcom_[169] = {
	81 /* nvar */,
	1 /* nobj */,
	27 /* ncon */,
	81 /* nzc */,
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
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,

	/* rownos */
	1,
	1,
	1,
	2,
	2,
	2,
	3,
	3,
	3,
	4,
	4,
	4,
	5,
	5,
	5,
	6,
	6,
	6,
	7,
	7,
	7,
	8,
	8,
	8,
	9,
	9,
	9,
	10,
	10,
	10,
	11,
	11,
	11,
	12,
	12,
	12,
	13,
	13,
	13,
	14,
	14,
	14,
	15,
	15,
	15,
	16,
	16,
	16,
	17,
	17,
	17,
	18,
	18,
	18,
	19,
	19,
	19,
	20,
	20,
	20,
	21,
	21,
	21,
	22,
	22,
	22,
	23,
	23,
	23,
	24,
	24,
	24,
	25,
	25,
	25,
	26,
	26,
	26,
	27,
	27,
	27 };

 real graphpart_3pm_0333_0333_boundc_[1+162+54] /* Infinity, variable bounds, constraint bounds */ = {
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

 real graphpart_3pm_0333_0333_x0comn_[81] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real graphpart_3pm_0333_0333_old_x[81];
static int graphpart_3pm_0333_0333_xkind = -1;

 static int
graphpart_3pm_0333_0333_xcheck(real *x)
{
	real *x1 = graphpart_3pm_0333_0333_old_x, *xe = x + 81;
	errno = 0;
	if (graphpart_3pm_0333_0333_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	graphpart_3pm_0333_0333_xkind = 0;
	return 1;
	}
 real
graphpart_3pm_0333_0333_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (graphpart_3pm_0333_0333_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[3];
	v[1] = -v[0];
	v[0] = x[0] * x[6];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[0] * x[9];
	v[1] += v[2];
	v[2] = x[0] * x[18];
	v[1] += v[2];
	v[2] = x[0] * x[27];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[0] * x[54];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[1] * x[4];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[1] * x[7];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[1] * x[10];
	v[1] += v[2];
	v[2] = x[1] * x[19];
	v[1] += v[2];
	v[2] = x[1] * x[28];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[1] * x[55];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[2] * x[5];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[2] * x[8];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[2] * x[11];
	v[1] += v[2];
	v[2] = x[2] * x[20];
	v[1] += v[2];
	v[2] = x[2] * x[29];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[2] * x[56];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[3] * x[6];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[3] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[3] * x[21];
	v[1] += v[2];
	v[2] = x[3] * x[30];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[3] * x[57];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[4] * x[7];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[4] * x[13];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[4] * x[22];
	v[1] += v[2];
	v[2] = x[4] * x[31];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[4] * x[58];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[5] * x[8];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[5] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[5] * x[23];
	v[1] += v[2];
	v[2] = x[5] * x[32];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[5] * x[59];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[6] * x[15];
	v[1] += v[2];
	v[2] = x[6] * x[24];
	v[1] += v[2];
	v[2] = x[6] * x[33];
	v[1] += v[2];
	v[2] = x[6] * x[60];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[7] * x[16];
	v[1] += v[0];
	v[0] = x[7] * x[25];
	v[1] += v[0];
	v[0] = x[7] * x[34];
	v[1] += v[0];
	v[0] = x[7] * x[61];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[8] * x[17];
	v[1] += v[2];
	v[2] = x[8] * x[26];
	v[1] += v[2];
	v[2] = x[8] * x[35];
	v[1] += v[2];
	v[2] = x[8] * x[62];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[9] * x[12];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[9] * x[15];
	v[1] += v[2];
	v[2] = x[9] * x[18];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[9] * x[36];
	v[1] += v[0];
	v[0] = x[9] * x[63];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[10] * x[13];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[10] * x[16];
	v[1] += v[0];
	v[0] = x[10] * x[19];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[10] * x[37];
	v[1] += v[2];
	v[2] = x[10] * x[64];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[11] * x[14];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[11] * x[17];
	v[1] += v[2];
	v[2] = x[11] * x[20];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[11] * x[38];
	v[1] += v[0];
	v[0] = x[11] * x[65];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[12] * x[15];
	v[1] += v[2];
	v[2] = x[12] * x[21];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[12] * x[39];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[12] * x[66];
	v[1] += v[2];
	v[2] = x[13] * x[16];
	v[1] += v[2];
	v[2] = x[13] * x[22];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[13] * x[40];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[13] * x[67];
	v[1] += v[2];
	v[2] = x[14] * x[17];
	v[1] += v[2];
	v[2] = x[14] * x[23];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[14] * x[41];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[14] * x[68];
	v[1] += v[2];
	v[2] = x[15] * x[24];
	v[1] += v[2];
	v[2] = x[15] * x[42];
	v[1] += v[2];
	v[2] = x[15] * x[69];
	v[1] += v[2];
	v[2] = x[16] * x[25];
	v[1] += v[2];
	v[2] = x[16] * x[43];
	v[1] += v[2];
	v[2] = x[16] * x[70];
	v[1] += v[2];
	v[2] = x[17] * x[26];
	v[1] += v[2];
	v[2] = x[17] * x[44];
	v[1] += v[2];
	v[2] = x[17] * x[71];
	v[1] += v[2];
	v[2] = x[18] * x[21];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[18] * x[24];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[18] * x[45];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[18] * x[72];
	v[1] += v[0];
	v[0] = x[19] * x[22];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[25];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[19] * x[46];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[19] * x[73];
	v[1] += v[2];
	v[2] = x[20] * x[23];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[20] * x[26];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[20] * x[47];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[20] * x[74];
	v[1] += v[0];
	v[0] = x[21] * x[24];
	v[1] += v[0];
	v[0] = x[21] * x[48];
	v[1] += v[0];
	v[0] = x[21] * x[75];
	v[1] += v[0];
	v[0] = x[22] * x[25];
	v[1] += v[0];
	v[0] = x[22] * x[49];
	v[1] += v[0];
	v[0] = x[22] * x[76];
	v[1] += v[0];
	v[0] = x[23] * x[26];
	v[1] += v[0];
	v[0] = x[23] * x[50];
	v[1] += v[0];
	v[0] = x[23] * x[77];
	v[1] += v[0];
	v[0] = x[24] * x[51];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[24] * x[78];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[25] * x[52];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[25] * x[79];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[26] * x[53];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[26] * x[80];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[27] * x[30];
	v[1] += v[0];
	v[0] = x[27] * x[33];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[27] * x[36];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[27] * x[45];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[27] * x[54];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[28] * x[31];
	v[1] += v[0];
	v[0] = x[28] * x[34];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[28] * x[37];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[28] * x[46];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[28] * x[55];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[29] * x[32];
	v[1] += v[0];
	v[0] = x[29] * x[35];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[29] * x[38];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[29] * x[47];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[29] * x[56];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[30] * x[33];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[30] * x[39];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[30] * x[48];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[30] * x[57];
	v[1] += v[2];
	v[2] = x[31] * x[34];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[31] * x[40];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[31] * x[49];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[31] * x[58];
	v[1] += v[0];
	v[0] = x[32] * x[35];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[32] * x[41];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[32] * x[50];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[32] * x[59];
	v[1] += v[2];
	v[2] = x[33] * x[42];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[33] * x[51];
	v[1] += v[0];
	v[0] = x[33] * x[60];
	v[1] += v[0];
	v[0] = x[34] * x[43];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[34] * x[52];
	v[1] += v[2];
	v[2] = x[34] * x[61];
	v[1] += v[2];
	v[2] = x[35] * x[44];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[35] * x[53];
	v[1] += v[0];
	v[0] = x[35] * x[62];
	v[1] += v[0];
	v[0] = x[36] * x[39];
	v[1] += v[0];
	v[0] = x[36] * x[42];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[36] * x[45];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[36] * x[63];
	v[1] += v[0];
	v[0] = x[37] * x[40];
	v[1] += v[0];
	v[0] = x[37] * x[43];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[37] * x[46];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[37] * x[64];
	v[1] += v[0];
	v[0] = x[38] * x[41];
	v[1] += v[0];
	v[0] = x[38] * x[44];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[38] * x[47];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[38] * x[65];
	v[1] += v[0];
	v[0] = x[39] * x[42];
	v[1] += v[0];
	v[0] = x[39] * x[48];
	v[1] += v[0];
	v[0] = x[39] * x[66];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[40] * x[43];
	v[1] += v[2];
	v[2] = x[40] * x[49];
	v[1] += v[2];
	v[2] = x[40] * x[67];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[41] * x[44];
	v[1] += v[0];
	v[0] = x[41] * x[50];
	v[1] += v[0];
	v[0] = x[41] * x[68];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[42] * x[51];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[42] * x[69];
	v[1] += v[0];
	v[0] = x[43] * x[52];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[43] * x[70];
	v[1] += v[2];
	v[2] = x[44] * x[53];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[44] * x[71];
	v[1] += v[0];
	v[0] = x[45] * x[48];
	v[1] += v[0];
	v[0] = x[45] * x[51];
	v[1] += v[0];
	v[0] = x[45] * x[72];
	v[1] += v[0];
	v[0] = x[46] * x[49];
	v[1] += v[0];
	v[0] = x[46] * x[52];
	v[1] += v[0];
	v[0] = x[46] * x[73];
	v[1] += v[0];
	v[0] = x[47] * x[50];
	v[1] += v[0];
	v[0] = x[47] * x[53];
	v[1] += v[0];
	v[0] = x[47] * x[74];
	v[1] += v[0];
	v[0] = x[48] * x[51];
	v[1] += v[0];
	v[0] = x[48] * x[75];
	v[1] += v[0];
	v[0] = x[49] * x[52];
	v[1] += v[0];
	v[0] = x[49] * x[76];
	v[1] += v[0];
	v[0] = x[50] * x[53];
	v[1] += v[0];
	v[0] = x[50] * x[77];
	v[1] += v[0];
	v[0] = x[51] * x[78];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[52] * x[79];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[53] * x[80];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[54] * x[57];
	v[1] += v[2];
	v[2] = x[54] * x[60];
	v[1] += v[2];
	v[2] = x[54] * x[63];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[54] * x[72];
	v[1] += v[0];
	v[0] = x[55] * x[58];
	v[1] += v[0];
	v[0] = x[55] * x[61];
	v[1] += v[0];
	v[0] = x[55] * x[64];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[55] * x[73];
	v[1] += v[2];
	v[2] = x[56] * x[59];
	v[1] += v[2];
	v[2] = x[56] * x[62];
	v[1] += v[2];
	v[2] = x[56] * x[65];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[56] * x[74];
	v[1] += v[0];
	v[0] = x[57] * x[60];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[57] * x[66];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[57] * x[75];
	v[1] += v[0];
	v[0] = x[58] * x[61];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[58] * x[67];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[58] * x[76];
	v[1] += v[0];
	v[0] = x[59] * x[62];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[59] * x[68];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[59] * x[77];
	v[1] += v[0];
	v[0] = x[60] * x[69];
	v[1] += v[0];
	v[0] = x[60] * x[78];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[61] * x[70];
	v[1] += v[2];
	v[2] = x[61] * x[79];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[62] * x[71];
	v[1] += v[0];
	v[0] = x[62] * x[80];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[63] * x[66];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[63] * x[69];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[63] * x[72];
	v[1] += v[2];
	v[2] = x[64] * x[67];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[64] * x[70];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[64] * x[73];
	v[1] += v[2];
	v[2] = x[65] * x[68];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[65] * x[71];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[65] * x[74];
	v[1] += v[2];
	v[2] = x[66] * x[69];
	v[1] += v[2];
	v[2] = x[66] * x[75];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[67] * x[70];
	v[1] += v[0];
	v[0] = x[67] * x[76];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[68] * x[71];
	v[1] += v[2];
	v[2] = x[68] * x[77];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[69] * x[78];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[70] * x[79];
	v[0] = -v[2];
	v[1] += v[0];
	v[0] = x[71] * x[80];
	v[2] = -v[0];
	v[1] += v[2];
	v[2] = x[72] * x[75];
	v[1] += v[2];
	v[2] = x[72] * x[78];
	v[1] += v[2];
	v[2] = x[73] * x[76];
	v[1] += v[2];
	v[2] = x[73] * x[79];
	v[1] += v[2];
	v[2] = x[74] * x[77];
	v[1] += v[2];
	v[2] = x[74] * x[80];
	v[1] += v[2];
	v[2] = x[75] * x[78];
	v[1] += v[2];
	v[2] = x[76] * x[79];
	v[1] += v[2];
	v[2] = x[77] * x[80];
	v[1] += v[2];
	;}

	if (wantfg & 2) {
	g[80] = x[77];
	g[77] = x[80];
	g[79] = x[76];
	g[76] = x[79];
	g[78] = x[75];
	g[75] = x[78];
	g[80] += x[74];
	g[74] = x[80];
	g[77] += x[74];
	g[74] += x[77];
	g[79] += x[73];
	g[73] = x[79];
	g[76] += x[73];
	g[73] += x[76];
	g[78] += x[72];
	g[72] = x[78];
	g[75] += x[72];
	g[72] += x[75];
	g[80] -= x[71];
	g[71] = -x[80];
	g[79] -= x[70];
	g[70] = -x[79];
	g[78] -= x[69];
	g[69] = -x[78];
	g[77] -= x[68];
	g[68] = -x[77];
	g[71] += x[68];
	g[68] += x[71];
	g[76] -= x[67];
	g[67] = -x[76];
	g[70] += x[67];
	g[67] += x[70];
	g[75] -= x[66];
	g[66] = -x[75];
	g[69] += x[66];
	g[66] += x[69];
	g[74] += x[65];
	g[65] = x[74];
	g[71] -= x[65];
	g[65] -= x[71];
	g[68] -= x[65];
	g[65] -= x[68];
	g[73] += x[64];
	g[64] = x[73];
	g[70] -= x[64];
	g[64] -= x[70];
	g[67] -= x[64];
	g[64] -= x[67];
	g[72] += x[63];
	g[63] = x[72];
	g[69] -= x[63];
	g[63] -= x[69];
	g[66] -= x[63];
	g[63] -= x[66];
	g[80] -= x[62];
	g[62] = -x[80];
	g[71] += x[62];
	g[62] += x[71];
	g[79] -= x[61];
	g[61] = -x[79];
	g[70] += x[61];
	g[61] += x[70];
	g[78] -= x[60];
	g[60] = -x[78];
	g[69] += x[60];
	g[60] += x[69];
	g[77] += x[59];
	g[59] = x[77];
	g[68] -= x[59];
	g[59] -= x[68];
	g[62] -= x[59];
	g[59] -= x[62];
	g[76] += x[58];
	g[58] = x[76];
	g[67] -= x[58];
	g[58] -= x[67];
	g[61] -= x[58];
	g[58] -= x[61];
	g[75] += x[57];
	g[57] = x[75];
	g[66] -= x[57];
	g[57] -= x[66];
	g[60] -= x[57];
	g[57] -= x[60];
	g[74] += x[56];
	g[56] = x[74];
	g[65] -= x[56];
	g[56] -= x[65];
	g[62] += x[56];
	g[56] += x[62];
	g[59] += x[56];
	g[56] += x[59];
	g[73] += x[55];
	g[55] = x[73];
	g[64] -= x[55];
	g[55] -= x[64];
	g[61] += x[55];
	g[55] += x[61];
	g[58] += x[55];
	g[55] += x[58];
	g[72] += x[54];
	g[54] = x[72];
	g[63] -= x[54];
	g[54] -= x[63];
	g[60] += x[54];
	g[54] += x[60];
	g[57] += x[54];
	g[54] += x[57];
	g[80] -= x[53];
	g[53] = -x[80];
	g[79] -= x[52];
	g[52] = -x[79];
	g[78] -= x[51];
	g[51] = -x[78];
	g[77] += x[50];
	g[50] = x[77];
	g[53] += x[50];
	g[50] += x[53];
	g[76] += x[49];
	g[49] = x[76];
	g[52] += x[49];
	g[49] += x[52];
	g[75] += x[48];
	g[48] = x[75];
	g[51] += x[48];
	g[48] += x[51];
	g[74] += x[47];
	g[47] = x[74];
	g[53] += x[47];
	g[47] += x[53];
	g[50] += x[47];
	g[47] += x[50];
	g[73] += x[46];
	g[46] = x[73];
	g[52] += x[46];
	g[46] += x[52];
	g[49] += x[46];
	g[46] += x[49];
	g[72] += x[45];
	g[45] = x[72];
	g[51] += x[45];
	g[45] += x[51];
	g[48] += x[45];
	g[45] += x[48];
	g[71] += x[44];
	g[44] = x[71];
	g[53] -= x[44];
	g[44] -= x[53];
	g[70] += x[43];
	g[43] = x[70];
	g[52] -= x[43];
	g[43] -= x[52];
	g[69] += x[42];
	g[42] = x[69];
	g[51] -= x[42];
	g[42] -= x[51];
	g[68] -= x[41];
	g[41] = -x[68];
	g[50] += x[41];
	g[41] += x[50];
	g[44] += x[41];
	g[41] += x[44];
	g[67] -= x[40];
	g[40] = -x[67];
	g[49] += x[40];
	g[40] += x[49];
	g[43] += x[40];
	g[40] += x[43];
	g[66] -= x[39];
	g[39] = -x[66];
	g[48] += x[39];
	g[39] += x[48];
	g[42] += x[39];
	g[39] += x[42];
	g[65] += x[38];
	g[38] = x[65];
	g[47] -= x[38];
	g[38] -= x[47];
	g[44] -= x[38];
	g[38] -= x[44];
	g[41] += x[38];
	g[38] += x[41];
	g[64] += x[37];
	g[37] = x[64];
	g[46] -= x[37];
	g[37] -= x[46];
	g[43] -= x[37];
	g[37] -= x[43];
	g[40] += x[37];
	g[37] += x[40];
	g[63] += x[36];
	g[36] = x[63];
	g[45] -= x[36];
	g[36] -= x[45];
	g[42] -= x[36];
	g[36] -= x[42];
	g[39] += x[36];
	g[36] += x[39];
	g[62] += x[35];
	g[35] = x[62];
	g[53] += x[35];
	g[35] += x[53];
	g[44] -= x[35];
	g[35] -= x[44];
	g[61] += x[34];
	g[34] = x[61];
	g[52] += x[34];
	g[34] += x[52];
	g[43] -= x[34];
	g[34] -= x[43];
	g[60] += x[33];
	g[33] = x[60];
	g[51] += x[33];
	g[33] += x[51];
	g[42] -= x[33];
	g[33] -= x[42];
	g[59] += x[32];
	g[32] = x[59];
	g[50] -= x[32];
	g[32] -= x[50];
	g[41] -= x[32];
	g[32] -= x[41];
	g[35] -= x[32];
	g[32] -= x[35];
	g[58] += x[31];
	g[31] = x[58];
	g[49] -= x[31];
	g[31] -= x[49];
	g[40] -= x[31];
	g[31] -= x[40];
	g[34] -= x[31];
	g[31] -= x[34];
	g[57] += x[30];
	g[30] = x[57];
	g[48] -= x[30];
	g[30] -= x[48];
	g[39] -= x[30];
	g[30] -= x[39];
	g[33] -= x[30];
	g[30] -= x[33];
	g[56] -= x[29];
	g[29] = -x[56];
	g[47] -= x[29];
	g[29] -= x[47];
	g[38] -= x[29];
	g[29] -= x[38];
	g[35] -= x[29];
	g[29] -= x[35];
	g[32] += x[29];
	g[29] += x[32];
	g[55] -= x[28];
	g[28] = -x[55];
	g[46] -= x[28];
	g[28] -= x[46];
	g[37] -= x[28];
	g[28] -= x[37];
	g[34] -= x[28];
	g[28] -= x[34];
	g[31] += x[28];
	g[28] += x[31];
	g[54] -= x[27];
	g[27] = -x[54];
	g[45] -= x[27];
	g[27] -= x[45];
	g[36] -= x[27];
	g[27] -= x[36];
	g[33] -= x[27];
	g[27] -= x[33];
	g[30] += x[27];
	g[27] += x[30];
	g[80] -= x[26];
	g[26] = -x[80];
	g[53] -= x[26];
	g[26] -= x[53];
	g[79] -= x[25];
	g[25] = -x[79];
	g[52] -= x[25];
	g[25] -= x[52];
	g[78] -= x[24];
	g[24] = -x[78];
	g[51] -= x[24];
	g[24] -= x[51];
	g[77] += x[23];
	g[23] = x[77];
	g[50] += x[23];
	g[23] += x[50];
	g[26] += x[23];
	g[23] += x[26];
	g[76] += x[22];
	g[22] = x[76];
	g[49] += x[22];
	g[22] += x[49];
	g[25] += x[22];
	g[22] += x[25];
	g[75] += x[21];
	g[21] = x[75];
	g[48] += x[21];
	g[21] += x[48];
	g[24] += x[21];
	g[21] += x[24];
	g[74] += x[20];
	g[20] = x[74];
	g[47] -= x[20];
	g[20] -= x[47];
	g[26] -= x[20];
	g[20] -= x[26];
	g[23] -= x[20];
	g[20] -= x[23];
	g[73] += x[19];
	g[19] = x[73];
	g[46] -= x[19];
	g[19] -= x[46];
	g[25] -= x[19];
	g[19] -= x[25];
	g[22] -= x[19];
	g[19] -= x[22];
	g[72] += x[18];
	g[18] = x[72];
	g[45] -= x[18];
	g[18] -= x[45];
	g[24] -= x[18];
	g[18] -= x[24];
	g[21] -= x[18];
	g[18] -= x[21];
	g[71] += x[17];
	g[17] = x[71];
	g[44] += x[17];
	g[17] += x[44];
	g[26] += x[17];
	g[17] += x[26];
	g[70] += x[16];
	g[16] = x[70];
	g[43] += x[16];
	g[16] += x[43];
	g[25] += x[16];
	g[16] += x[25];
	g[69] += x[15];
	g[15] = x[69];
	g[42] += x[15];
	g[15] += x[42];
	g[24] += x[15];
	g[15] += x[24];
	g[68] += x[14];
	g[14] = x[68];
	g[41] -= x[14];
	g[14] -= x[41];
	g[23] -= x[14];
	g[14] -= x[23];
	g[17] += x[14];
	g[14] += x[17];
	g[67] += x[13];
	g[13] = x[67];
	g[40] -= x[13];
	g[13] -= x[40];
	g[22] -= x[13];
	g[13] -= x[22];
	g[16] += x[13];
	g[13] += x[16];
	g[66] += x[12];
	g[12] = x[66];
	g[39] -= x[12];
	g[12] -= x[39];
	g[21] -= x[12];
	g[12] -= x[21];
	g[15] += x[12];
	g[12] += x[15];
	g[65] -= x[11];
	g[11] = -x[65];
	g[38] += x[11];
	g[11] += x[38];
	g[20] -= x[11];
	g[11] -= x[20];
	g[17] += x[11];
	g[11] += x[17];
	g[14] -= x[11];
	g[11] -= x[14];
	g[64] -= x[10];
	g[10] = -x[64];
	g[37] += x[10];
	g[10] += x[37];
	g[19] -= x[10];
	g[10] -= x[19];
	g[16] += x[10];
	g[10] += x[16];
	g[13] -= x[10];
	g[10] -= x[13];
	g[63] -= x[9];
	g[9] = -x[63];
	g[36] += x[9];
	g[9] += x[36];
	g[18] -= x[9];
	g[9] -= x[18];
	g[15] += x[9];
	g[9] += x[15];
	g[12] -= x[9];
	g[9] -= x[12];
	g[62] -= x[8];
	g[8] = -x[62];
	g[35] += x[8];
	g[8] += x[35];
	g[26] += x[8];
	g[8] += x[26];
	g[17] += x[8];
	g[8] += x[17];
	g[61] -= x[7];
	g[7] = -x[61];
	g[34] += x[7];
	g[7] += x[34];
	g[25] += x[7];
	g[7] += x[25];
	g[16] += x[7];
	g[7] += x[16];
	g[60] -= x[6];
	g[6] = -x[60];
	g[33] += x[6];
	g[6] += x[33];
	g[24] += x[6];
	g[6] += x[24];
	g[15] += x[6];
	g[6] += x[15];
	g[59] -= x[5];
	g[5] = -x[59];
	g[32] -= x[5];
	g[5] -= x[32];
	g[23] += x[5];
	g[5] += x[23];
	g[14] -= x[5];
	g[5] -= x[14];
	g[8] -= x[5];
	g[5] -= x[8];
	g[58] -= x[4];
	g[4] = -x[58];
	g[31] -= x[4];
	g[4] -= x[31];
	g[22] += x[4];
	g[4] += x[22];
	g[13] -= x[4];
	g[4] -= x[13];
	g[7] -= x[4];
	g[4] -= x[7];
	g[57] -= x[3];
	g[3] = -x[57];
	g[30] -= x[3];
	g[3] -= x[30];
	g[21] += x[3];
	g[3] += x[21];
	g[12] -= x[3];
	g[3] -= x[12];
	g[6] -= x[3];
	g[3] -= x[6];
	g[56] -= x[2];
	g[2] = -x[56];
	g[29] -= x[2];
	g[2] -= x[29];
	g[20] += x[2];
	g[2] += x[20];
	g[11] += x[2];
	g[2] += x[11];
	g[8] -= x[2];
	g[2] -= x[8];
	g[5] -= x[2];
	g[2] -= x[5];
	g[55] -= x[1];
	g[1] = -x[55];
	g[28] -= x[1];
	g[1] -= x[28];
	g[19] += x[1];
	g[1] += x[19];
	g[10] += x[1];
	g[1] += x[10];
	g[7] -= x[1];
	g[1] -= x[7];
	g[4] -= x[1];
	g[1] -= x[4];
	g[54] -= x[0];
	g[0] = -x[54];
	g[27] -= x[0];
	g[0] -= x[27];
	g[18] += x[0];
	g[0] += x[18];
	g[9] += x[0];
	g[0] += x[9];
	g[6] -= x[0];
	g[0] -= x[6];
	g[3] -= x[0];
	g[0] -= x[3];
	}

	return v[1];
}

 void
graphpart_3pm_0333_0333_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (graphpart_3pm_0333_0333_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[3];
	t1 += x[4];
	t1 += x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += x[8];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[9];
	t1 += x[10];
	t1 += x[11];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[12];
	t1 += x[13];
	t1 += x[14];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[15];
	t1 += x[16];
	t1 += x[17];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[18];
	t1 += x[19];
	t1 += x[20];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[21];
	t1 += x[22];
	t1 += x[23];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[27];
	t1 += x[28];
	t1 += x[29];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[30];
	t1 += x[31];
	t1 += x[32];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[33];
	t1 += x[34];
	t1 += x[35];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[39];
	t1 += x[40];
	t1 += x[41];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[42];
	t1 += x[43];
	t1 += x[44];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += x[47];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[48];
	t1 += x[49];
	t1 += x[50];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[51];
	t1 += x[52];
	t1 += x[53];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[54];
	t1 += x[55];
	t1 += x[56];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[57];
	t1 += x[58];
	t1 += x[59];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[60];
	t1 += x[61];
	t1 += x[62];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[63];
	t1 += x[64];
	t1 += x[65];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[66];
	t1 += x[67];
	t1 += x[68];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[69];
	t1 += x[70];
	t1 += x[71];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[72];
	t1 += x[73];
	t1 += x[74];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[75];
	t1 += x[76];
	t1 += x[77];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[78];
	t1 += x[79];
	t1 += x[80];
	c[26] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[1] = 1.;
	J[2] = 1.;

   /*** derivatives for constraint 2 ***/

	J[3] = 1.;
	J[4] = 1.;
	J[5] = 1.;

   /*** derivatives for constraint 3 ***/

	J[6] = 1.;
	J[7] = 1.;
	J[8] = 1.;

   /*** derivatives for constraint 4 ***/

	J[9] = 1.;
	J[10] = 1.;
	J[11] = 1.;

   /*** derivatives for constraint 5 ***/

	J[12] = 1.;
	J[13] = 1.;
	J[14] = 1.;

   /*** derivatives for constraint 6 ***/

	J[15] = 1.;
	J[16] = 1.;
	J[17] = 1.;

   /*** derivatives for constraint 7 ***/

	J[18] = 1.;
	J[19] = 1.;
	J[20] = 1.;

   /*** derivatives for constraint 8 ***/

	J[21] = 1.;
	J[22] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 9 ***/

	J[24] = 1.;
	J[25] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 10 ***/

	J[27] = 1.;
	J[28] = 1.;
	J[29] = 1.;

   /*** derivatives for constraint 11 ***/

	J[30] = 1.;
	J[31] = 1.;
	J[32] = 1.;

   /*** derivatives for constraint 12 ***/

	J[33] = 1.;
	J[34] = 1.;
	J[35] = 1.;

   /*** derivatives for constraint 13 ***/

	J[36] = 1.;
	J[37] = 1.;
	J[38] = 1.;

   /*** derivatives for constraint 14 ***/

	J[39] = 1.;
	J[40] = 1.;
	J[41] = 1.;

   /*** derivatives for constraint 15 ***/

	J[42] = 1.;
	J[43] = 1.;
	J[44] = 1.;

   /*** derivatives for constraint 16 ***/

	J[45] = 1.;
	J[46] = 1.;
	J[47] = 1.;

   /*** derivatives for constraint 17 ***/

	J[48] = 1.;
	J[49] = 1.;
	J[50] = 1.;

   /*** derivatives for constraint 18 ***/

	J[51] = 1.;
	J[52] = 1.;
	J[53] = 1.;

   /*** derivatives for constraint 19 ***/

	J[54] = 1.;
	J[55] = 1.;
	J[56] = 1.;

   /*** derivatives for constraint 20 ***/

	J[57] = 1.;
	J[58] = 1.;
	J[59] = 1.;

   /*** derivatives for constraint 21 ***/

	J[60] = 1.;
	J[61] = 1.;
	J[62] = 1.;

   /*** derivatives for constraint 22 ***/

	J[63] = 1.;
	J[64] = 1.;
	J[65] = 1.;

   /*** derivatives for constraint 23 ***/

	J[66] = 1.;
	J[67] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 24 ***/

	J[69] = 1.;
	J[70] = 1.;
	J[71] = 1.;

   /*** derivatives for constraint 25 ***/

	J[72] = 1.;
	J[73] = 1.;
	J[74] = 1.;

   /*** derivatives for constraint 26 ***/

	J[75] = 1.;
	J[76] = 1.;
	J[77] = 1.;

   /*** derivatives for constraint 27 ***/

	J[78] = 1.;
	J[79] = 1.;
	J[80] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif