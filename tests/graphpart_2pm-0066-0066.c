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
 fint graphpart_2pm_0066_0066_auxcom_[1] = { 0 /* nlc */ };
 fint graphpart_2pm_0066_0066_funcom_[223] = {
	108 /* nvar */,
	1 /* nobj */,
	36 /* ncon */,
	108 /* nzc */,
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
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,

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
	27,
	28,
	28,
	28,
	29,
	29,
	29,
	30,
	30,
	30,
	31,
	31,
	31,
	32,
	32,
	32,
	33,
	33,
	33,
	34,
	34,
	34,
	35,
	35,
	35,
	36,
	36,
	36 };

 real graphpart_2pm_0066_0066_boundc_[1+216+72] /* Infinity, variable bounds, constraint bounds */ = {
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

 real graphpart_2pm_0066_0066_x0comn_[108] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

static real graphpart_2pm_0066_0066_old_x[108];
static int graphpart_2pm_0066_0066_xkind = -1;

 static int
graphpart_2pm_0066_0066_xcheck(real *x)
{
	real *x1 = graphpart_2pm_0066_0066_old_x, *xe = x + 108;
	errno = 0;
	if (graphpart_2pm_0066_0066_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	graphpart_2pm_0066_0066_xkind = 0;
	return 1;
	}
 real
graphpart_2pm_0066_0066_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (graphpart_2pm_0066_0066_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] * x[3];
	v[1] = x[0] * x[15];
	v[0] += v[1];
	v[1] = x[0] * x[18];
	v[0] += v[1];
	v[1] = x[0] * x[90];
	v[0] += v[1];
	v[1] = x[1] * x[4];
	v[0] += v[1];
	v[1] = x[1] * x[16];
	v[0] += v[1];
	v[1] = x[1] * x[19];
	v[0] += v[1];
	v[1] = x[1] * x[91];
	v[0] += v[1];
	v[1] = x[2] * x[5];
	v[0] += v[1];
	v[1] = x[2] * x[17];
	v[0] += v[1];
	v[1] = x[2] * x[20];
	v[0] += v[1];
	v[1] = x[2] * x[92];
	v[0] += v[1];
	v[1] = x[3] * x[6];
	v[0] += v[1];
	v[1] = x[3] * x[21];
	v[0] += v[1];
	v[1] = x[3] * x[93];
	v[0] += v[1];
	v[1] = x[4] * x[7];
	v[0] += v[1];
	v[1] = x[4] * x[22];
	v[0] += v[1];
	v[1] = x[4] * x[94];
	v[0] += v[1];
	v[1] = x[5] * x[8];
	v[0] += v[1];
	v[1] = x[5] * x[23];
	v[0] += v[1];
	v[1] = x[5] * x[95];
	v[0] += v[1];
	v[1] = x[6] * x[9];
	v[0] += v[1];
	v[1] = x[6] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[6] * x[96];
	v[0] += v[2];
	v[2] = x[7] * x[10];
	v[0] += v[2];
	v[2] = x[7] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[7] * x[97];
	v[0] += v[1];
	v[1] = x[8] * x[11];
	v[0] += v[1];
	v[1] = x[8] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[8] * x[98];
	v[0] += v[2];
	v[2] = x[9] * x[12];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[9] * x[27];
	v[0] += v[1];
	v[1] = x[9] * x[99];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[10] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[10] * x[28];
	v[0] += v[1];
	v[1] = x[10] * x[100];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[11] * x[14];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[11] * x[29];
	v[0] += v[1];
	v[1] = x[11] * x[101];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[12] * x[15];
	v[0] += v[2];
	v[2] = x[12] * x[30];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[12] * x[102];
	v[0] += v[1];
	v[1] = x[13] * x[16];
	v[0] += v[1];
	v[1] = x[13] * x[31];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[13] * x[103];
	v[0] += v[2];
	v[2] = x[14] * x[17];
	v[0] += v[2];
	v[2] = x[14] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[14] * x[104];
	v[0] += v[1];
	v[1] = x[15] * x[33];
	v[0] += v[1];
	v[1] = x[15] * x[105];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[16] * x[34];
	v[0] += v[2];
	v[2] = x[16] * x[106];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[17] * x[35];
	v[0] += v[1];
	v[1] = x[17] * x[107];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[18] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[18] * x[33];
	v[0] += v[1];
	v[1] = x[18] * x[36];
	v[0] += v[1];
	v[1] = x[19] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[19] * x[34];
	v[0] += v[2];
	v[2] = x[19] * x[37];
	v[0] += v[2];
	v[2] = x[20] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[20] * x[35];
	v[0] += v[1];
	v[1] = x[20] * x[38];
	v[0] += v[1];
	v[1] = x[21] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[21] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[22] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[22] * x[40];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[23] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[23] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[24] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[24] * x[42];
	v[0] += v[2];
	v[2] = x[25] * x[28];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[25] * x[43];
	v[0] += v[1];
	v[1] = x[26] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[26] * x[44];
	v[0] += v[2];
	v[2] = x[27] * x[30];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[27] * x[45];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[28] * x[31];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[28] * x[46];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[29] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[29] * x[47];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[30] * x[33];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[30] * x[48];
	v[0] += v[1];
	v[1] = x[31] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[31] * x[49];
	v[0] += v[2];
	v[2] = x[32] * x[35];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[32] * x[50];
	v[0] += v[1];
	v[1] = x[33] * x[51];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[34] * x[52];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[35] * x[53];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[36] * x[39];
	v[0] += v[2];
	v[2] = x[36] * x[51];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[36] * x[54];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[37] * x[40];
	v[0] += v[2];
	v[2] = x[37] * x[52];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[37] * x[55];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[38] * x[41];
	v[0] += v[2];
	v[2] = x[38] * x[53];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[38] * x[56];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[39] * x[42];
	v[0] += v[2];
	v[2] = x[39] * x[57];
	v[0] += v[2];
	v[2] = x[40] * x[43];
	v[0] += v[2];
	v[2] = x[40] * x[58];
	v[0] += v[2];
	v[2] = x[41] * x[44];
	v[0] += v[2];
	v[2] = x[41] * x[59];
	v[0] += v[2];
	v[2] = x[42] * x[45];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[42] * x[60];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[43] * x[46];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[43] * x[61];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[44] * x[47];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[44] * x[62];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[45] * x[48];
	v[0] += v[2];
	v[2] = x[45] * x[63];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[46] * x[49];
	v[0] += v[1];
	v[1] = x[46] * x[64];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[47] * x[50];
	v[0] += v[2];
	v[2] = x[47] * x[65];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[48] * x[51];
	v[0] += v[1];
	v[1] = x[48] * x[66];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[49] * x[52];
	v[0] += v[2];
	v[2] = x[49] * x[67];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[50] * x[53];
	v[0] += v[1];
	v[1] = x[50] * x[68];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[51] * x[69];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[52] * x[70];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[53] * x[71];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[54] * x[57];
	v[0] += v[1];
	v[1] = x[54] * x[69];
	v[0] += v[1];
	v[1] = x[54] * x[72];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[55] * x[58];
	v[0] += v[2];
	v[2] = x[55] * x[70];
	v[0] += v[2];
	v[2] = x[55] * x[73];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[56] * x[59];
	v[0] += v[1];
	v[1] = x[56] * x[71];
	v[0] += v[1];
	v[1] = x[56] * x[74];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[57] * x[60];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[57] * x[75];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[58] * x[61];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[58] * x[76];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[59] * x[62];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[59] * x[77];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[60] * x[63];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[60] * x[78];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[61] * x[64];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[61] * x[79];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[62] * x[65];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[62] * x[80];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[63] * x[66];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[63] * x[81];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[64] * x[67];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[64] * x[82];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[65] * x[68];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[65] * x[83];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[66] * x[69];
	v[0] += v[2];
	v[2] = x[66] * x[84];
	v[0] += v[2];
	v[2] = x[67] * x[70];
	v[0] += v[2];
	v[2] = x[67] * x[85];
	v[0] += v[2];
	v[2] = x[68] * x[71];
	v[0] += v[2];
	v[2] = x[68] * x[86];
	v[0] += v[2];
	v[2] = x[69] * x[87];
	v[0] += v[2];
	v[2] = x[70] * x[88];
	v[0] += v[2];
	v[2] = x[71] * x[89];
	v[0] += v[2];
	v[2] = x[72] * x[75];
	v[0] += v[2];
	v[2] = x[72] * x[87];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[72] * x[90];
	v[0] += v[1];
	v[1] = x[73] * x[76];
	v[0] += v[1];
	v[1] = x[73] * x[88];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[73] * x[91];
	v[0] += v[2];
	v[2] = x[74] * x[77];
	v[0] += v[2];
	v[2] = x[74] * x[89];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[74] * x[92];
	v[0] += v[1];
	v[1] = x[75] * x[78];
	v[0] += v[1];
	v[1] = x[75] * x[93];
	v[0] += v[1];
	v[1] = x[76] * x[79];
	v[0] += v[1];
	v[1] = x[76] * x[94];
	v[0] += v[1];
	v[1] = x[77] * x[80];
	v[0] += v[1];
	v[1] = x[77] * x[95];
	v[0] += v[1];
	v[1] = x[78] * x[81];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[78] * x[96];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[79] * x[82];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[79] * x[97];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[80] * x[83];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[80] * x[98];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[81] * x[84];
	v[0] += v[1];
	v[1] = x[81] * x[99];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[82] * x[85];
	v[0] += v[2];
	v[2] = x[82] * x[100];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[83] * x[86];
	v[0] += v[1];
	v[1] = x[83] * x[101];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[84] * x[87];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[84] * x[102];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[85] * x[88];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[85] * x[103];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[86] * x[89];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[86] * x[104];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[87] * x[105];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[88] * x[106];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[89] * x[107];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[90] * x[93];
	v[0] += v[1];
	v[1] = x[90] * x[105];
	v[0] += v[1];
	v[1] = x[91] * x[94];
	v[0] += v[1];
	v[1] = x[91] * x[106];
	v[0] += v[1];
	v[1] = x[92] * x[95];
	v[0] += v[1];
	v[1] = x[92] * x[107];
	v[0] += v[1];
	v[1] = x[93] * x[96];
	v[0] += v[1];
	v[1] = x[94] * x[97];
	v[0] += v[1];
	v[1] = x[95] * x[98];
	v[0] += v[1];
	v[1] = x[96] * x[99];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[97] * x[100];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[98] * x[101];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[99] * x[102];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[100] * x[103];
	v[2] = -v[1];
	v[0] += v[2];
	v[2] = x[101] * x[104];
	v[1] = -v[2];
	v[0] += v[1];
	v[1] = x[102] * x[105];
	v[0] += v[1];
	v[1] = x[103] * x[106];
	v[0] += v[1];
	v[1] = x[104] * x[107];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[107] = x[104];
	g[104] = x[107];
	g[106] = x[103];
	g[103] = x[106];
	g[105] = x[102];
	g[102] = x[105];
	g[104] -= x[101];
	g[101] = -x[104];
	g[103] -= x[100];
	g[100] = -x[103];
	g[102] -= x[99];
	g[99] = -x[102];
	g[101] -= x[98];
	g[98] = -x[101];
	g[100] -= x[97];
	g[97] = -x[100];
	g[99] -= x[96];
	g[96] = -x[99];
	g[98] += x[95];
	g[95] = x[98];
	g[97] += x[94];
	g[94] = x[97];
	g[96] += x[93];
	g[93] = x[96];
	g[107] += x[92];
	g[92] = x[107];
	g[95] += x[92];
	g[92] += x[95];
	g[106] += x[91];
	g[91] = x[106];
	g[94] += x[91];
	g[91] += x[94];
	g[105] += x[90];
	g[90] = x[105];
	g[93] += x[90];
	g[90] += x[93];
	g[107] -= x[89];
	g[89] = -x[107];
	g[106] -= x[88];
	g[88] = -x[106];
	g[105] -= x[87];
	g[87] = -x[105];
	g[104] -= x[86];
	g[86] = -x[104];
	g[89] -= x[86];
	g[86] -= x[89];
	g[103] -= x[85];
	g[85] = -x[103];
	g[88] -= x[85];
	g[85] -= x[88];
	g[102] -= x[84];
	g[84] = -x[102];
	g[87] -= x[84];
	g[84] -= x[87];
	g[101] -= x[83];
	g[83] = -x[101];
	g[86] += x[83];
	g[83] += x[86];
	g[100] -= x[82];
	g[82] = -x[100];
	g[85] += x[82];
	g[82] += x[85];
	g[99] -= x[81];
	g[81] = -x[99];
	g[84] += x[81];
	g[81] += x[84];
	g[98] -= x[80];
	g[80] = -x[98];
	g[83] -= x[80];
	g[80] -= x[83];
	g[97] -= x[79];
	g[79] = -x[97];
	g[82] -= x[79];
	g[79] -= x[82];
	g[96] -= x[78];
	g[78] = -x[96];
	g[81] -= x[78];
	g[78] -= x[81];
	g[95] += x[77];
	g[77] = x[95];
	g[80] += x[77];
	g[77] += x[80];
	g[94] += x[76];
	g[76] = x[94];
	g[79] += x[76];
	g[76] += x[79];
	g[93] += x[75];
	g[75] = x[93];
	g[78] += x[75];
	g[75] += x[78];
	g[92] += x[74];
	g[74] = x[92];
	g[89] -= x[74];
	g[74] -= x[89];
	g[77] += x[74];
	g[74] += x[77];
	g[91] += x[73];
	g[73] = x[91];
	g[88] -= x[73];
	g[73] -= x[88];
	g[76] += x[73];
	g[73] += x[76];
	g[90] += x[72];
	g[72] = x[90];
	g[87] -= x[72];
	g[72] -= x[87];
	g[75] += x[72];
	g[72] += x[75];
	g[89] += x[71];
	g[71] = x[89];
	g[88] += x[70];
	g[70] = x[88];
	g[87] += x[69];
	g[69] = x[87];
	g[86] += x[68];
	g[68] = x[86];
	g[71] += x[68];
	g[68] += x[71];
	g[85] += x[67];
	g[67] = x[85];
	g[70] += x[67];
	g[67] += x[70];
	g[84] += x[66];
	g[66] = x[84];
	g[69] += x[66];
	g[66] += x[69];
	g[83] -= x[65];
	g[65] = -x[83];
	g[68] -= x[65];
	g[65] -= x[68];
	g[82] -= x[64];
	g[64] = -x[82];
	g[67] -= x[64];
	g[64] -= x[67];
	g[81] -= x[63];
	g[63] = -x[81];
	g[66] -= x[63];
	g[63] -= x[66];
	g[80] -= x[62];
	g[62] = -x[80];
	g[65] -= x[62];
	g[62] -= x[65];
	g[79] -= x[61];
	g[61] = -x[79];
	g[64] -= x[61];
	g[61] -= x[64];
	g[78] -= x[60];
	g[60] = -x[78];
	g[63] -= x[60];
	g[60] -= x[63];
	g[77] -= x[59];
	g[59] = -x[77];
	g[62] -= x[59];
	g[59] -= x[62];
	g[76] -= x[58];
	g[58] = -x[76];
	g[61] -= x[58];
	g[58] -= x[61];
	g[75] -= x[57];
	g[57] = -x[75];
	g[60] -= x[57];
	g[57] -= x[60];
	g[74] -= x[56];
	g[56] = -x[74];
	g[71] += x[56];
	g[56] += x[71];
	g[59] += x[56];
	g[56] += x[59];
	g[73] -= x[55];
	g[55] = -x[73];
	g[70] += x[55];
	g[55] += x[70];
	g[58] += x[55];
	g[55] += x[58];
	g[72] -= x[54];
	g[54] = -x[72];
	g[69] += x[54];
	g[54] += x[69];
	g[57] += x[54];
	g[54] += x[57];
	g[71] -= x[53];
	g[53] = -x[71];
	g[70] -= x[52];
	g[52] = -x[70];
	g[69] -= x[51];
	g[51] = -x[69];
	g[68] -= x[50];
	g[50] = -x[68];
	g[53] += x[50];
	g[50] += x[53];
	g[67] -= x[49];
	g[49] = -x[67];
	g[52] += x[49];
	g[49] += x[52];
	g[66] -= x[48];
	g[48] = -x[66];
	g[51] += x[48];
	g[48] += x[51];
	g[65] -= x[47];
	g[47] = -x[65];
	g[50] += x[47];
	g[47] += x[50];
	g[64] -= x[46];
	g[46] = -x[64];
	g[49] += x[46];
	g[46] += x[49];
	g[63] -= x[45];
	g[45] = -x[63];
	g[48] += x[45];
	g[45] += x[48];
	g[62] -= x[44];
	g[44] = -x[62];
	g[47] -= x[44];
	g[44] -= x[47];
	g[61] -= x[43];
	g[43] = -x[61];
	g[46] -= x[43];
	g[43] -= x[46];
	g[60] -= x[42];
	g[42] = -x[60];
	g[45] -= x[42];
	g[42] -= x[45];
	g[59] += x[41];
	g[41] = x[59];
	g[44] += x[41];
	g[41] += x[44];
	g[58] += x[40];
	g[40] = x[58];
	g[43] += x[40];
	g[40] += x[43];
	g[57] += x[39];
	g[39] = x[57];
	g[42] += x[39];
	g[39] += x[42];
	g[56] -= x[38];
	g[38] = -x[56];
	g[53] -= x[38];
	g[38] -= x[53];
	g[41] += x[38];
	g[38] += x[41];
	g[55] -= x[37];
	g[37] = -x[55];
	g[52] -= x[37];
	g[37] -= x[52];
	g[40] += x[37];
	g[37] += x[40];
	g[54] -= x[36];
	g[36] = -x[54];
	g[51] -= x[36];
	g[36] -= x[51];
	g[39] += x[36];
	g[36] += x[39];
	g[53] -= x[35];
	g[35] = -x[53];
	g[52] -= x[34];
	g[34] = -x[52];
	g[51] -= x[33];
	g[33] = -x[51];
	g[50] += x[32];
	g[32] = x[50];
	g[35] -= x[32];
	g[32] -= x[35];
	g[49] += x[31];
	g[31] = x[49];
	g[34] -= x[31];
	g[31] -= x[34];
	g[48] += x[30];
	g[30] = x[48];
	g[33] -= x[30];
	g[30] -= x[33];
	g[47] -= x[29];
	g[29] = -x[47];
	g[32] -= x[29];
	g[29] -= x[32];
	g[46] -= x[28];
	g[28] = -x[46];
	g[31] -= x[28];
	g[28] -= x[31];
	g[45] -= x[27];
	g[27] = -x[45];
	g[30] -= x[27];
	g[27] -= x[30];
	g[44] += x[26];
	g[26] = x[44];
	g[29] -= x[26];
	g[26] -= x[29];
	g[43] += x[25];
	g[25] = x[43];
	g[28] -= x[25];
	g[25] -= x[28];
	g[42] += x[24];
	g[24] = x[42];
	g[27] -= x[24];
	g[24] -= x[27];
	g[41] -= x[23];
	g[23] = -x[41];
	g[26] -= x[23];
	g[23] -= x[26];
	g[40] -= x[22];
	g[22] = -x[40];
	g[25] -= x[22];
	g[22] -= x[25];
	g[39] -= x[21];
	g[21] = -x[39];
	g[24] -= x[21];
	g[21] -= x[24];
	g[38] += x[20];
	g[20] = x[38];
	g[35] += x[20];
	g[20] += x[35];
	g[23] -= x[20];
	g[20] -= x[23];
	g[37] += x[19];
	g[19] = x[37];
	g[34] += x[19];
	g[19] += x[34];
	g[22] -= x[19];
	g[19] -= x[22];
	g[36] += x[18];
	g[18] = x[36];
	g[33] += x[18];
	g[18] += x[33];
	g[21] -= x[18];
	g[18] -= x[21];
	g[107] -= x[17];
	g[17] = -x[107];
	g[35] += x[17];
	g[17] += x[35];
	g[106] -= x[16];
	g[16] = -x[106];
	g[34] += x[16];
	g[16] += x[34];
	g[105] -= x[15];
	g[15] = -x[105];
	g[33] += x[15];
	g[15] += x[33];
	g[104] += x[14];
	g[14] = x[104];
	g[32] -= x[14];
	g[14] -= x[32];
	g[17] += x[14];
	g[14] += x[17];
	g[103] += x[13];
	g[13] = x[103];
	g[31] -= x[13];
	g[13] -= x[31];
	g[16] += x[13];
	g[13] += x[16];
	g[102] += x[12];
	g[12] = x[102];
	g[30] -= x[12];
	g[12] -= x[30];
	g[15] += x[12];
	g[12] += x[15];
	g[101] -= x[11];
	g[11] = -x[101];
	g[29] += x[11];
	g[11] += x[29];
	g[14] -= x[11];
	g[11] -= x[14];
	g[100] -= x[10];
	g[10] = -x[100];
	g[28] += x[10];
	g[10] += x[28];
	g[13] -= x[10];
	g[10] -= x[13];
	g[99] -= x[9];
	g[9] = -x[99];
	g[27] += x[9];
	g[9] += x[27];
	g[12] -= x[9];
	g[9] -= x[12];
	g[98] += x[8];
	g[8] = x[98];
	g[26] -= x[8];
	g[8] -= x[26];
	g[11] += x[8];
	g[8] += x[11];
	g[97] += x[7];
	g[7] = x[97];
	g[25] -= x[7];
	g[7] -= x[25];
	g[10] += x[7];
	g[7] += x[10];
	g[96] += x[6];
	g[6] = x[96];
	g[24] -= x[6];
	g[6] -= x[24];
	g[9] += x[6];
	g[6] += x[9];
	g[95] += x[5];
	g[5] = x[95];
	g[23] += x[5];
	g[5] += x[23];
	g[8] += x[5];
	g[5] += x[8];
	g[94] += x[4];
	g[4] = x[94];
	g[22] += x[4];
	g[4] += x[22];
	g[7] += x[4];
	g[4] += x[7];
	g[93] += x[3];
	g[3] = x[93];
	g[21] += x[3];
	g[3] += x[21];
	g[6] += x[3];
	g[3] += x[6];
	g[92] += x[2];
	g[2] = x[92];
	g[20] += x[2];
	g[2] += x[20];
	g[17] += x[2];
	g[2] += x[17];
	g[5] += x[2];
	g[2] += x[5];
	g[91] += x[1];
	g[1] = x[91];
	g[19] += x[1];
	g[1] += x[19];
	g[16] += x[1];
	g[1] += x[16];
	g[4] += x[1];
	g[1] += x[4];
	g[90] += x[0];
	g[0] = x[90];
	g[18] += x[0];
	g[0] += x[18];
	g[15] += x[0];
	g[0] += x[15];
	g[3] += x[0];
	g[0] += x[3];
	}

	return v[0];
}

 void
graphpart_2pm_0066_0066_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (graphpart_2pm_0066_0066_xcheck(x) && wantfg == 2)
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

  /***  constraint 28  ***/

	t1 = x[81];
	t1 += x[82];
	t1 += x[83];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[84];
	t1 += x[85];
	t1 += x[86];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[87];
	t1 += x[88];
	t1 += x[89];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[90];
	t1 += x[91];
	t1 += x[92];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[93];
	t1 += x[94];
	t1 += x[95];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[96];
	t1 += x[97];
	t1 += x[98];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[99];
	t1 += x[100];
	t1 += x[101];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[102];
	t1 += x[103];
	t1 += x[104];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[105];
	t1 += x[106];
	t1 += x[107];
	c[35] = t1;
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

   /*** derivatives for constraint 28 ***/

	J[81] = 1.;
	J[82] = 1.;
	J[83] = 1.;

   /*** derivatives for constraint 29 ***/

	J[84] = 1.;
	J[85] = 1.;
	J[86] = 1.;

   /*** derivatives for constraint 30 ***/

	J[87] = 1.;
	J[88] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 31 ***/

	J[90] = 1.;
	J[91] = 1.;
	J[92] = 1.;

   /*** derivatives for constraint 32 ***/

	J[93] = 1.;
	J[94] = 1.;
	J[95] = 1.;

   /*** derivatives for constraint 33 ***/

	J[96] = 1.;
	J[97] = 1.;
	J[98] = 1.;

   /*** derivatives for constraint 34 ***/

	J[99] = 1.;
	J[100] = 1.;
	J[101] = 1.;

   /*** derivatives for constraint 35 ***/

	J[102] = 1.;
	J[103] = 1.;
	J[104] = 1.;

   /*** derivatives for constraint 36 ***/

	J[105] = 1.;
	J[106] = 1.;
	J[107] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
