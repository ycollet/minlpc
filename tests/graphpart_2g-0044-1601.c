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
 fint graphpart_2g_0044_1601_auxcom_[1] = { 0 /* nlc */ };
 fint graphpart_2g_0044_1601_funcom_[103] = {
	48 /* nvar */,
	1 /* nobj */,
	16 /* ncon */,
	48 /* nzc */,
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
	16 };

 real graphpart_2g_0044_1601_boundc_[1+96+32] /* Infinity, variable bounds, constraint bounds */ = {
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

 real graphpart_2g_0044_1601_x0comn_[48] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real graphpart_2g_0044_1601_pd[96];
static real graphpart_2g_0044_1601_old_x[48];
static int graphpart_2g_0044_1601_xkind = -1;

 static int
graphpart_2g_0044_1601_xcheck(real *x)
{
	real *x1 = graphpart_2g_0044_1601_old_x, *xe = x + 48;
	errno = 0;
	if (graphpart_2g_0044_1601_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	graphpart_2g_0044_1601_xkind = 0;
	return 1;
	}
 real
graphpart_2g_0044_1601_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (graphpart_2g_0044_1601_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	graphpart_2g_0044_1601_pd[0] = 13960. * x[0];
	v[0] = graphpart_2g_0044_1601_pd[0] * x[3];
	graphpart_2g_0044_1601_pd[1] = 132180. * x[0];
	v[1] = graphpart_2g_0044_1601_pd[1] * x[9];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[2] = 45455. * x[0];
	v[1] = graphpart_2g_0044_1601_pd[2] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[3] = 21397. * x[0];
	v[2] = graphpart_2g_0044_1601_pd[3] * x[36];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[4] = 13960. * x[1];
	v[2] = graphpart_2g_0044_1601_pd[4] * x[4];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[5] = 132180. * x[1];
	v[2] = graphpart_2g_0044_1601_pd[5] * x[10];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[6] = 45455. * x[1];
	v[2] = graphpart_2g_0044_1601_pd[6] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[7] = 21397. * x[1];
	v[1] = graphpart_2g_0044_1601_pd[7] * x[37];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[8] = 13960. * x[2];
	v[1] = graphpart_2g_0044_1601_pd[8] * x[5];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[9] = 132180. * x[2];
	v[1] = graphpart_2g_0044_1601_pd[9] * x[11];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[10] = 45455. * x[2];
	v[1] = graphpart_2g_0044_1601_pd[10] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[11] = 21397. * x[2];
	v[2] = graphpart_2g_0044_1601_pd[11] * x[38];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[12] = 30411. * x[3];
	v[2] = graphpart_2g_0044_1601_pd[12] * x[6];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[13] = 101527. * x[3];
	v[1] = graphpart_2g_0044_1601_pd[13] * x[15];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[14] = 8896. * x[3];
	v[2] = graphpart_2g_0044_1601_pd[14] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[15] = 30411. * x[4];
	v[1] = graphpart_2g_0044_1601_pd[15] * x[7];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[16] = 101527. * x[4];
	v[2] = graphpart_2g_0044_1601_pd[16] * x[16];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[17] = 8896. * x[4];
	v[1] = graphpart_2g_0044_1601_pd[17] * x[40];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[18] = 30411. * x[5];
	v[2] = graphpart_2g_0044_1601_pd[18] * x[8];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[19] = 101527. * x[5];
	v[1] = graphpart_2g_0044_1601_pd[19] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[20] = 8896. * x[5];
	v[2] = graphpart_2g_0044_1601_pd[20] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[21] = 122332. * x[6];
	v[1] = graphpart_2g_0044_1601_pd[21] * x[9];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[22] = 30058. * x[6];
	v[2] = graphpart_2g_0044_1601_pd[22] * x[18];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[23] = 33114. * x[6];
	v[2] = graphpart_2g_0044_1601_pd[23] * x[42];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[24] = 122332. * x[7];
	v[2] = graphpart_2g_0044_1601_pd[24] * x[10];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[25] = 30058. * x[7];
	v[1] = graphpart_2g_0044_1601_pd[25] * x[19];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[26] = 33114. * x[7];
	v[1] = graphpart_2g_0044_1601_pd[26] * x[43];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[27] = 122332. * x[8];
	v[1] = graphpart_2g_0044_1601_pd[27] * x[11];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[28] = 30058. * x[8];
	v[2] = graphpart_2g_0044_1601_pd[28] * x[20];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[29] = 33114. * x[8];
	v[2] = graphpart_2g_0044_1601_pd[29] * x[44];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[30] = 13676. * x[9];
	v[2] = graphpart_2g_0044_1601_pd[30] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[31] = 124553. * x[9];
	v[1] = graphpart_2g_0044_1601_pd[31] * x[45];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[32] = 13676. * x[10];
	v[1] = graphpart_2g_0044_1601_pd[32] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[33] = 124553. * x[10];
	v[2] = graphpart_2g_0044_1601_pd[33] * x[46];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[34] = 13676. * x[11];
	v[2] = graphpart_2g_0044_1601_pd[34] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[35] = 124553. * x[11];
	v[1] = graphpart_2g_0044_1601_pd[35] * x[47];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[36] = 17153. * x[12];
	v[1] = graphpart_2g_0044_1601_pd[36] * x[15];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[37] = 73691. * x[12];
	v[1] = graphpart_2g_0044_1601_pd[37] * x[21];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[38] = 32022. * x[12];
	v[1] = graphpart_2g_0044_1601_pd[38] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[39] = 17153. * x[13];
	v[2] = graphpart_2g_0044_1601_pd[39] * x[16];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[40] = 73691. * x[13];
	v[2] = graphpart_2g_0044_1601_pd[40] * x[22];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[41] = 32022. * x[13];
	v[2] = graphpart_2g_0044_1601_pd[41] * x[25];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[42] = 17153. * x[14];
	v[1] = graphpart_2g_0044_1601_pd[42] * x[17];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[43] = 73691. * x[14];
	v[1] = graphpart_2g_0044_1601_pd[43] * x[23];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[44] = 32022. * x[14];
	v[1] = graphpart_2g_0044_1601_pd[44] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[45] = 106129. * x[15];
	v[2] = graphpart_2g_0044_1601_pd[45] * x[18];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[46] = 101395. * x[15];
	v[1] = graphpart_2g_0044_1601_pd[46] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[47] = 106129. * x[16];
	v[2] = graphpart_2g_0044_1601_pd[47] * x[19];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[48] = 101395. * x[16];
	v[1] = graphpart_2g_0044_1601_pd[48] * x[28];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[49] = 106129. * x[17];
	v[2] = graphpart_2g_0044_1601_pd[49] * x[20];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[50] = 101395. * x[17];
	v[1] = graphpart_2g_0044_1601_pd[50] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[51] = 10958. * x[18];
	v[2] = graphpart_2g_0044_1601_pd[51] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[52] = 41751. * x[18];
	v[1] = graphpart_2g_0044_1601_pd[52] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[53] = 10958. * x[19];
	v[2] = graphpart_2g_0044_1601_pd[53] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[54] = 41751. * x[19];
	v[1] = graphpart_2g_0044_1601_pd[54] * x[31];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[55] = 10958. * x[20];
	v[2] = graphpart_2g_0044_1601_pd[55] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[56] = 41751. * x[20];
	v[1] = graphpart_2g_0044_1601_pd[56] * x[32];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[57] = 30446. * x[21];
	v[2] = graphpart_2g_0044_1601_pd[57] * x[33];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[58] = 30446. * x[22];
	v[1] = graphpart_2g_0044_1601_pd[58] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[59] = 30446. * x[23];
	v[2] = graphpart_2g_0044_1601_pd[59] * x[35];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[60] = 94519. * x[24];
	v[1] = graphpart_2g_0044_1601_pd[60] * x[27];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[61] = 44613. * x[24];
	v[1] = graphpart_2g_0044_1601_pd[61] * x[33];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[62] = 70141. * x[24];
	v[1] = graphpart_2g_0044_1601_pd[62] * x[36];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[63] = 94519. * x[25];
	v[1] = graphpart_2g_0044_1601_pd[63] * x[28];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[64] = 44613. * x[25];
	v[1] = graphpart_2g_0044_1601_pd[64] * x[34];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[65] = 70141. * x[25];
	v[1] = graphpart_2g_0044_1601_pd[65] * x[37];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[66] = 94519. * x[26];
	v[1] = graphpart_2g_0044_1601_pd[66] * x[29];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[67] = 44613. * x[26];
	v[1] = graphpart_2g_0044_1601_pd[67] * x[35];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[68] = 70141. * x[26];
	v[1] = graphpart_2g_0044_1601_pd[68] * x[38];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[69] = 73611. * x[27];
	v[1] = graphpart_2g_0044_1601_pd[69] * x[30];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[70] = 54792. * x[27];
	v[1] = graphpart_2g_0044_1601_pd[70] * x[39];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[71] = 73611. * x[28];
	v[2] = graphpart_2g_0044_1601_pd[71] * x[31];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[72] = 54792. * x[28];
	v[2] = graphpart_2g_0044_1601_pd[72] * x[40];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[73] = 73611. * x[29];
	v[1] = graphpart_2g_0044_1601_pd[73] * x[32];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[74] = 54792. * x[29];
	v[1] = graphpart_2g_0044_1601_pd[74] * x[41];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[75] = 57663. * x[30];
	v[2] = graphpart_2g_0044_1601_pd[75] * x[33];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[76] = 147596. * x[30];
	v[2] = graphpart_2g_0044_1601_pd[76] * x[42];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[77] = 57663. * x[31];
	v[1] = graphpart_2g_0044_1601_pd[77] * x[34];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[78] = 147596. * x[31];
	v[1] = graphpart_2g_0044_1601_pd[78] * x[43];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[79] = 57663. * x[32];
	v[2] = graphpart_2g_0044_1601_pd[79] * x[35];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[80] = 147596. * x[32];
	v[2] = graphpart_2g_0044_1601_pd[80] * x[44];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[81] = 70863. * x[33];
	v[1] = graphpart_2g_0044_1601_pd[81] * x[45];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[82] = 70863. * x[34];
	v[1] = graphpart_2g_0044_1601_pd[82] * x[46];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[83] = 70863. * x[35];
	v[1] = graphpart_2g_0044_1601_pd[83] * x[47];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[84] = 24474. * x[36];
	v[1] = graphpart_2g_0044_1601_pd[84] * x[39];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[85] = 178500. * x[36];
	v[1] = graphpart_2g_0044_1601_pd[85] * x[45];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[86] = 24474. * x[37];
	v[2] = graphpart_2g_0044_1601_pd[86] * x[40];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[87] = 178500. * x[37];
	v[2] = graphpart_2g_0044_1601_pd[87] * x[46];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[88] = 24474. * x[38];
	v[1] = graphpart_2g_0044_1601_pd[88] * x[41];
	v[0] += v[1];
	graphpart_2g_0044_1601_pd[89] = 178500. * x[38];
	v[1] = graphpart_2g_0044_1601_pd[89] * x[47];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[90] = 118713. * x[39];
	v[2] = graphpart_2g_0044_1601_pd[90] * x[42];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[91] = 118713. * x[40];
	v[2] = graphpart_2g_0044_1601_pd[91] * x[43];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[92] = 118713. * x[41];
	v[2] = graphpart_2g_0044_1601_pd[92] * x[44];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[93] = 34279. * x[42];
	v[2] = graphpart_2g_0044_1601_pd[93] * x[45];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[94] = 34279. * x[43];
	v[2] = graphpart_2g_0044_1601_pd[94] * x[46];
	v[0] += v[2];
	graphpart_2g_0044_1601_pd[95] = 34279. * x[44];
	v[2] = graphpart_2g_0044_1601_pd[95] * x[47];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[47] = graphpart_2g_0044_1601_pd[95];
	g[44] = x[47]*34279.;
	g[46] = graphpart_2g_0044_1601_pd[94];
	g[43] = x[46]*34279.;
	g[45] = graphpart_2g_0044_1601_pd[93];
	g[42] = x[45]*34279.;
	g[44] += graphpart_2g_0044_1601_pd[92];
	g[41] = x[44]*118713.;
	g[43] += graphpart_2g_0044_1601_pd[91];
	g[40] = x[43]*118713.;
	g[42] += graphpart_2g_0044_1601_pd[90];
	g[39] = x[42]*118713.;
	g[47] -= graphpart_2g_0044_1601_pd[89];
	g[38] = -x[47]*178500.;
	g[41] += graphpart_2g_0044_1601_pd[88];
	g[38] += x[41]*24474.;
	g[46] -= graphpart_2g_0044_1601_pd[87];
	g[37] = -x[46]*178500.;
	g[40] += graphpart_2g_0044_1601_pd[86];
	g[37] += x[40]*24474.;
	g[45] -= graphpart_2g_0044_1601_pd[85];
	g[36] = -x[45]*178500.;
	g[39] += graphpart_2g_0044_1601_pd[84];
	g[36] += x[39]*24474.;
	g[47] += graphpart_2g_0044_1601_pd[83];
	g[35] = x[47]*70863.;
	g[46] += graphpart_2g_0044_1601_pd[82];
	g[34] = x[46]*70863.;
	g[45] += graphpart_2g_0044_1601_pd[81];
	g[33] = x[45]*70863.;
	g[44] -= graphpart_2g_0044_1601_pd[80];
	g[32] = -x[44]*147596.;
	g[35] += graphpart_2g_0044_1601_pd[79];
	g[32] += x[35]*57663.;
	g[43] -= graphpart_2g_0044_1601_pd[78];
	g[31] = -x[43]*147596.;
	g[34] += graphpart_2g_0044_1601_pd[77];
	g[31] += x[34]*57663.;
	g[42] -= graphpart_2g_0044_1601_pd[76];
	g[30] = -x[42]*147596.;
	g[33] += graphpart_2g_0044_1601_pd[75];
	g[30] += x[33]*57663.;
	g[41] -= graphpart_2g_0044_1601_pd[74];
	g[29] = -x[41]*54792.;
	g[32] += graphpart_2g_0044_1601_pd[73];
	g[29] += x[32]*73611.;
	g[40] -= graphpart_2g_0044_1601_pd[72];
	g[28] = -x[40]*54792.;
	g[31] += graphpart_2g_0044_1601_pd[71];
	g[28] += x[31]*73611.;
	g[39] -= graphpart_2g_0044_1601_pd[70];
	g[27] = -x[39]*54792.;
	g[30] += graphpart_2g_0044_1601_pd[69];
	g[27] += x[30]*73611.;
	g[38] += graphpart_2g_0044_1601_pd[68];
	g[26] = x[38]*70141.;
	g[35] += graphpart_2g_0044_1601_pd[67];
	g[26] += x[35]*44613.;
	g[29] += graphpart_2g_0044_1601_pd[66];
	g[26] += x[29]*94519.;
	g[37] += graphpart_2g_0044_1601_pd[65];
	g[25] = x[37]*70141.;
	g[34] += graphpart_2g_0044_1601_pd[64];
	g[25] += x[34]*44613.;
	g[28] += graphpart_2g_0044_1601_pd[63];
	g[25] += x[28]*94519.;
	g[36] += graphpart_2g_0044_1601_pd[62];
	g[24] = x[36]*70141.;
	g[33] += graphpart_2g_0044_1601_pd[61];
	g[24] += x[33]*44613.;
	g[27] += graphpart_2g_0044_1601_pd[60];
	g[24] += x[27]*94519.;
	g[35] -= graphpart_2g_0044_1601_pd[59];
	g[23] = -x[35]*30446.;
	g[34] -= graphpart_2g_0044_1601_pd[58];
	g[22] = -x[34]*30446.;
	g[33] -= graphpart_2g_0044_1601_pd[57];
	g[21] = -x[33]*30446.;
	g[32] -= graphpart_2g_0044_1601_pd[56];
	g[20] = -x[32]*41751.;
	g[23] -= graphpart_2g_0044_1601_pd[55];
	g[20] -= x[23]*10958.;
	g[31] -= graphpart_2g_0044_1601_pd[54];
	g[19] = -x[31]*41751.;
	g[22] -= graphpart_2g_0044_1601_pd[53];
	g[19] -= x[22]*10958.;
	g[30] -= graphpart_2g_0044_1601_pd[52];
	g[18] = -x[30]*41751.;
	g[21] -= graphpart_2g_0044_1601_pd[51];
	g[18] -= x[21]*10958.;
	g[29] -= graphpart_2g_0044_1601_pd[50];
	g[17] = -x[29]*101395.;
	g[20] -= graphpart_2g_0044_1601_pd[49];
	g[17] -= x[20]*106129.;
	g[28] -= graphpart_2g_0044_1601_pd[48];
	g[16] = -x[28]*101395.;
	g[19] -= graphpart_2g_0044_1601_pd[47];
	g[16] -= x[19]*106129.;
	g[27] -= graphpart_2g_0044_1601_pd[46];
	g[15] = -x[27]*101395.;
	g[18] -= graphpart_2g_0044_1601_pd[45];
	g[15] -= x[18]*106129.;
	g[26] -= graphpart_2g_0044_1601_pd[44];
	g[14] = -x[26]*32022.;
	g[23] += graphpart_2g_0044_1601_pd[43];
	g[14] += x[23]*73691.;
	g[17] += graphpart_2g_0044_1601_pd[42];
	g[14] += x[17]*17153.;
	g[25] -= graphpart_2g_0044_1601_pd[41];
	g[13] = -x[25]*32022.;
	g[22] += graphpart_2g_0044_1601_pd[40];
	g[13] += x[22]*73691.;
	g[16] += graphpart_2g_0044_1601_pd[39];
	g[13] += x[16]*17153.;
	g[24] -= graphpart_2g_0044_1601_pd[38];
	g[12] = -x[24]*32022.;
	g[21] += graphpart_2g_0044_1601_pd[37];
	g[12] += x[21]*73691.;
	g[15] += graphpart_2g_0044_1601_pd[36];
	g[12] += x[15]*17153.;
	g[47] += graphpart_2g_0044_1601_pd[35];
	g[11] = x[47]*124553.;
	g[23] -= graphpart_2g_0044_1601_pd[34];
	g[11] -= x[23]*13676.;
	g[46] += graphpart_2g_0044_1601_pd[33];
	g[10] = x[46]*124553.;
	g[22] -= graphpart_2g_0044_1601_pd[32];
	g[10] -= x[22]*13676.;
	g[45] += graphpart_2g_0044_1601_pd[31];
	g[9] = x[45]*124553.;
	g[21] -= graphpart_2g_0044_1601_pd[30];
	g[9] -= x[21]*13676.;
	g[44] += graphpart_2g_0044_1601_pd[29];
	g[8] = x[44]*33114.;
	g[20] += graphpart_2g_0044_1601_pd[28];
	g[8] += x[20]*30058.;
	g[11] -= graphpart_2g_0044_1601_pd[27];
	g[8] -= x[11]*122332.;
	g[43] += graphpart_2g_0044_1601_pd[26];
	g[7] = x[43]*33114.;
	g[19] += graphpart_2g_0044_1601_pd[25];
	g[7] += x[19]*30058.;
	g[10] -= graphpart_2g_0044_1601_pd[24];
	g[7] -= x[10]*122332.;
	g[42] += graphpart_2g_0044_1601_pd[23];
	g[6] = x[42]*33114.;
	g[18] += graphpart_2g_0044_1601_pd[22];
	g[6] += x[18]*30058.;
	g[9] -= graphpart_2g_0044_1601_pd[21];
	g[6] -= x[9]*122332.;
	g[41] -= graphpart_2g_0044_1601_pd[20];
	g[5] = -x[41]*8896.;
	g[17] -= graphpart_2g_0044_1601_pd[19];
	g[5] -= x[17]*101527.;
	g[8] -= graphpart_2g_0044_1601_pd[18];
	g[5] -= x[8]*30411.;
	g[40] -= graphpart_2g_0044_1601_pd[17];
	g[4] = -x[40]*8896.;
	g[16] -= graphpart_2g_0044_1601_pd[16];
	g[4] -= x[16]*101527.;
	g[7] -= graphpart_2g_0044_1601_pd[15];
	g[4] -= x[7]*30411.;
	g[39] -= graphpart_2g_0044_1601_pd[14];
	g[3] = -x[39]*8896.;
	g[15] -= graphpart_2g_0044_1601_pd[13];
	g[3] -= x[15]*101527.;
	g[6] -= graphpart_2g_0044_1601_pd[12];
	g[3] -= x[6]*30411.;
	g[38] += graphpart_2g_0044_1601_pd[11];
	g[2] = x[38]*21397.;
	g[14] -= graphpart_2g_0044_1601_pd[10];
	g[2] -= x[14]*45455.;
	g[11] += graphpart_2g_0044_1601_pd[9];
	g[2] += x[11]*132180.;
	g[5] += graphpart_2g_0044_1601_pd[8];
	g[2] += x[5]*13960.;
	g[37] += graphpart_2g_0044_1601_pd[7];
	g[1] = x[37]*21397.;
	g[13] -= graphpart_2g_0044_1601_pd[6];
	g[1] -= x[13]*45455.;
	g[10] += graphpart_2g_0044_1601_pd[5];
	g[1] += x[10]*132180.;
	g[4] += graphpart_2g_0044_1601_pd[4];
	g[1] += x[4]*13960.;
	g[36] += graphpart_2g_0044_1601_pd[3];
	g[0] = x[36]*21397.;
	g[12] -= graphpart_2g_0044_1601_pd[2];
	g[0] -= x[12]*45455.;
	g[9] += graphpart_2g_0044_1601_pd[1];
	g[0] += x[9]*132180.;
	g[3] += graphpart_2g_0044_1601_pd[0];
	g[0] += x[3]*13960.;
	}

	return v[0];
}

 void
graphpart_2g_0044_1601_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (graphpart_2g_0044_1601_xcheck(x) && wantfg == 2)
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
	}
}
#ifdef __cplusplus
	}
#endif
