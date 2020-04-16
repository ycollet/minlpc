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
 fint graphpart_2g_0055_0062_auxcom_[1] = { 0 /* nlc */ };
 fint graphpart_2g_0055_0062_funcom_[157] = {
	75 /* nvar */,
	1 /* nobj */,
	25 /* ncon */,
	75 /* nzc */,
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
	25 };

 real graphpart_2g_0055_0062_boundc_[1+150+50] /* Infinity, variable bounds, constraint bounds */ = {
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

 real graphpart_2g_0055_0062_x0comn_[75] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real graphpart_2g_0055_0062_pd[150];
static real graphpart_2g_0055_0062_old_x[75];
static int graphpart_2g_0055_0062_xkind = -1;

 static int
graphpart_2g_0055_0062_xcheck(real *x)
{
	real *x1 = graphpart_2g_0055_0062_old_x, *xe = x + 75;
	errno = 0;
	if (graphpart_2g_0055_0062_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	graphpart_2g_0055_0062_xkind = 0;
	return 1;
	}
 real
graphpart_2g_0055_0062_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3];
	fint wantfg = *needfg;
	if (graphpart_2g_0055_0062_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	graphpart_2g_0055_0062_pd[0] = -11669. * x[0];
	v[0] = graphpart_2g_0055_0062_pd[0] * x[3];
	graphpart_2g_0055_0062_pd[1] = 144456. * x[0];
	v[1] = graphpart_2g_0055_0062_pd[1] * x[12];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[2] = 30835. * x[0];
	v[2] = graphpart_2g_0055_0062_pd[2] * x[15];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[3] = 33555. * x[0];
	v[2] = graphpart_2g_0055_0062_pd[3] * x[60];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[4] = 11669. * x[1];
	v[1] = graphpart_2g_0055_0062_pd[4] * x[4];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[5] = 144456. * x[1];
	v[2] = graphpart_2g_0055_0062_pd[5] * x[13];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[6] = 30835. * x[1];
	v[1] = graphpart_2g_0055_0062_pd[6] * x[16];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[7] = 33555. * x[1];
	v[1] = graphpart_2g_0055_0062_pd[7] * x[61];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[8] = 11669. * x[2];
	v[2] = graphpart_2g_0055_0062_pd[8] * x[5];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[9] = 144456. * x[2];
	v[1] = graphpart_2g_0055_0062_pd[9] * x[14];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[10] = 30835. * x[2];
	v[2] = graphpart_2g_0055_0062_pd[10] * x[17];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[11] = 33555. * x[2];
	v[2] = graphpart_2g_0055_0062_pd[11] * x[62];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[12] = 52284. * x[3];
	v[1] = graphpart_2g_0055_0062_pd[12] * x[6];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[13] = 145893. * x[3];
	v[1] = graphpart_2g_0055_0062_pd[13] * x[18];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[14] = 140641. * x[3];
	v[1] = graphpart_2g_0055_0062_pd[14] * x[63];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[15] = 52284. * x[4];
	v[2] = graphpart_2g_0055_0062_pd[15] * x[7];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[16] = 145893. * x[4];
	v[2] = graphpart_2g_0055_0062_pd[16] * x[19];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[17] = 140641. * x[4];
	v[2] = graphpart_2g_0055_0062_pd[17] * x[64];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[18] = 52284. * x[5];
	v[1] = graphpart_2g_0055_0062_pd[18] * x[8];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[19] = 145893. * x[5];
	v[1] = graphpart_2g_0055_0062_pd[19] * x[20];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[20] = 140641. * x[5];
	v[1] = graphpart_2g_0055_0062_pd[20] * x[65];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[21] = 127397. * x[6];
	v[2] = graphpart_2g_0055_0062_pd[21] * x[9];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[22] = 12640. * x[6];
	v[2] = graphpart_2g_0055_0062_pd[22] * x[21];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[23] = 217400. * x[6];
	v[1] = graphpart_2g_0055_0062_pd[23] * x[66];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[24] = 127397. * x[7];
	v[1] = graphpart_2g_0055_0062_pd[24] * x[10];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[25] = 12640. * x[7];
	v[1] = graphpart_2g_0055_0062_pd[25] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[26] = 217400. * x[7];
	v[2] = graphpart_2g_0055_0062_pd[26] * x[67];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[27] = 127397. * x[8];
	v[2] = graphpart_2g_0055_0062_pd[27] * x[11];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[28] = 12640. * x[8];
	v[2] = graphpart_2g_0055_0062_pd[28] * x[23];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[29] = 217400. * x[8];
	v[1] = graphpart_2g_0055_0062_pd[29] * x[68];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[30] = 50562. * x[9];
	v[1] = graphpart_2g_0055_0062_pd[30] * x[12];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[31] = 78959. * x[9];
	v[1] = graphpart_2g_0055_0062_pd[31] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[32] = 36333. * x[9];
	v[2] = graphpart_2g_0055_0062_pd[32] * x[69];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[33] = 50562. * x[10];
	v[1] = graphpart_2g_0055_0062_pd[33] * x[13];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[34] = 78959. * x[10];
	v[1] = graphpart_2g_0055_0062_pd[34] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[35] = 36333. * x[10];
	v[2] = graphpart_2g_0055_0062_pd[35] * x[70];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[36] = 50562. * x[11];
	v[1] = graphpart_2g_0055_0062_pd[36] * x[14];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[37] = 78959. * x[11];
	v[1] = graphpart_2g_0055_0062_pd[37] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[38] = 36333. * x[11];
	v[2] = graphpart_2g_0055_0062_pd[38] * x[71];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[39] = 98784. * x[12];
	v[1] = graphpart_2g_0055_0062_pd[39] * x[27];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[40] = 31218. * x[12];
	v[1] = graphpart_2g_0055_0062_pd[40] * x[72];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[41] = 98784. * x[13];
	v[2] = graphpart_2g_0055_0062_pd[41] * x[28];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[42] = 31218. * x[13];
	v[2] = graphpart_2g_0055_0062_pd[42] * x[73];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[43] = 98784. * x[14];
	v[1] = graphpart_2g_0055_0062_pd[43] * x[29];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[44] = 31218. * x[14];
	v[1] = graphpart_2g_0055_0062_pd[44] * x[74];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[45] = 6320. * x[15];
	v[2] = graphpart_2g_0055_0062_pd[45] * x[18];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[46] = 171989. * x[15];
	v[2] = graphpart_2g_0055_0062_pd[46] * x[27];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[47] = 39163. * x[15];
	v[2] = graphpart_2g_0055_0062_pd[47] * x[30];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[48] = 6320. * x[16];
	v[1] = graphpart_2g_0055_0062_pd[48] * x[19];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[49] = 171989. * x[16];
	v[1] = graphpart_2g_0055_0062_pd[49] * x[28];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[50] = 39163. * x[16];
	v[1] = graphpart_2g_0055_0062_pd[50] * x[31];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[51] = 6320. * x[17];
	v[2] = graphpart_2g_0055_0062_pd[51] * x[20];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[52] = 171989. * x[17];
	v[2] = graphpart_2g_0055_0062_pd[52] * x[29];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[53] = 39163. * x[17];
	v[2] = graphpart_2g_0055_0062_pd[53] * x[32];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[54] = 183413. * x[18];
	v[1] = graphpart_2g_0055_0062_pd[54] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[55] = 60462. * x[18];
	v[2] = graphpart_2g_0055_0062_pd[55] * x[33];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[56] = 183413. * x[19];
	v[2] = graphpart_2g_0055_0062_pd[56] * x[22];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[57] = 60462. * x[19];
	v[1] = graphpart_2g_0055_0062_pd[57] * x[34];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[58] = 183413. * x[20];
	v[1] = graphpart_2g_0055_0062_pd[58] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[59] = 60462. * x[20];
	v[2] = graphpart_2g_0055_0062_pd[59] * x[35];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[60] = 45778. * x[21];
	v[2] = graphpart_2g_0055_0062_pd[60] * x[24];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[61] = 192287. * x[21];
	v[2] = graphpart_2g_0055_0062_pd[61] * x[36];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[62] = 45778. * x[22];
	v[2] = graphpart_2g_0055_0062_pd[62] * x[25];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[63] = 192287. * x[22];
	v[2] = graphpart_2g_0055_0062_pd[63] * x[37];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[64] = 45778. * x[23];
	v[2] = graphpart_2g_0055_0062_pd[64] * x[26];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[65] = 192287. * x[23];
	v[2] = graphpart_2g_0055_0062_pd[65] * x[38];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[66] = 125824. * x[24];
	v[2] = graphpart_2g_0055_0062_pd[66] * x[27];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[67] = 41371. * x[24];
	v[2] = graphpart_2g_0055_0062_pd[67] * x[39];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[68] = 125824. * x[25];
	v[2] = graphpart_2g_0055_0062_pd[68] * x[28];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[69] = 41371. * x[25];
	v[2] = graphpart_2g_0055_0062_pd[69] * x[40];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[70] = 125824. * x[26];
	v[2] = graphpart_2g_0055_0062_pd[70] * x[29];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[71] = 41371. * x[26];
	v[2] = graphpart_2g_0055_0062_pd[71] * x[41];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[72] = 17724. * x[27];
	v[2] = graphpart_2g_0055_0062_pd[72] * x[42];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[73] = 17724. * x[28];
	v[2] = graphpart_2g_0055_0062_pd[73] * x[43];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[74] = 17724. * x[29];
	v[2] = graphpart_2g_0055_0062_pd[74] * x[44];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[75] = 12200. * x[30];
	v[2] = graphpart_2g_0055_0062_pd[75] * x[33];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[76] = 106251. * x[30];
	v[2] = graphpart_2g_0055_0062_pd[76] * x[42];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[77] = 88012. * x[30];
	v[2] = graphpart_2g_0055_0062_pd[77] * x[45];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[78] = 12200. * x[31];
	v[1] = graphpart_2g_0055_0062_pd[78] * x[34];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[79] = 106251. * x[31];
	v[1] = graphpart_2g_0055_0062_pd[79] * x[43];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[80] = 88012. * x[31];
	v[1] = graphpart_2g_0055_0062_pd[80] * x[46];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[81] = 12200. * x[32];
	v[2] = graphpart_2g_0055_0062_pd[81] * x[35];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[82] = 106251. * x[32];
	v[2] = graphpart_2g_0055_0062_pd[82] * x[44];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[83] = 88012. * x[32];
	v[2] = graphpart_2g_0055_0062_pd[83] * x[47];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[84] = 17583. * x[33];
	v[1] = graphpart_2g_0055_0062_pd[84] * x[36];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[85] = 118167. * x[33];
	v[2] = graphpart_2g_0055_0062_pd[85] * x[48];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[86] = 17583. * x[34];
	v[2] = graphpart_2g_0055_0062_pd[86] * x[37];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[87] = 118167. * x[34];
	v[1] = graphpart_2g_0055_0062_pd[87] * x[49];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[88] = 17583. * x[35];
	v[1] = graphpart_2g_0055_0062_pd[88] * x[38];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[89] = 118167. * x[35];
	v[2] = graphpart_2g_0055_0062_pd[89] * x[50];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[90] = 5402. * x[36];
	v[2] = graphpart_2g_0055_0062_pd[90] * x[39];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[91] = 27062. * x[36];
	v[1] = graphpart_2g_0055_0062_pd[91] * x[51];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[92] = 5402. * x[37];
	v[2] = graphpart_2g_0055_0062_pd[92] * x[40];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[93] = 27062. * x[37];
	v[1] = graphpart_2g_0055_0062_pd[93] * x[52];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[94] = 5402. * x[38];
	v[2] = graphpart_2g_0055_0062_pd[94] * x[41];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[95] = 27062. * x[38];
	v[1] = graphpart_2g_0055_0062_pd[95] * x[53];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[96] = 117425. * x[39];
	v[2] = graphpart_2g_0055_0062_pd[96] * x[42];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[97] = 125320. * x[39];
	v[1] = graphpart_2g_0055_0062_pd[97] * x[54];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[98] = 117425. * x[40];
	v[2] = graphpart_2g_0055_0062_pd[98] * x[43];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[99] = 125320. * x[40];
	v[1] = graphpart_2g_0055_0062_pd[99] * x[55];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[100] = 117425. * x[41];
	v[2] = graphpart_2g_0055_0062_pd[100] * x[44];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[101] = 125320. * x[41];
	v[1] = graphpart_2g_0055_0062_pd[101] * x[56];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[102] = 29332. * x[42];
	v[2] = graphpart_2g_0055_0062_pd[102] * x[57];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[103] = 29332. * x[43];
	v[2] = graphpart_2g_0055_0062_pd[103] * x[58];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[104] = 29332. * x[44];
	v[2] = graphpart_2g_0055_0062_pd[104] * x[59];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[105] = 69937. * x[45];
	v[2] = graphpart_2g_0055_0062_pd[105] * x[48];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[106] = 65415. * x[45];
	v[2] = graphpart_2g_0055_0062_pd[106] * x[57];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[107] = 197304. * x[45];
	v[2] = graphpart_2g_0055_0062_pd[107] * x[60];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[108] = 69937. * x[46];
	v[1] = graphpart_2g_0055_0062_pd[108] * x[49];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[109] = 65415. * x[46];
	v[1] = graphpart_2g_0055_0062_pd[109] * x[58];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[110] = 197304. * x[46];
	v[1] = graphpart_2g_0055_0062_pd[110] * x[61];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[111] = 69937. * x[47];
	v[2] = graphpart_2g_0055_0062_pd[111] * x[50];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[112] = 65415. * x[47];
	v[2] = graphpart_2g_0055_0062_pd[112] * x[59];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[113] = 197304. * x[47];
	v[2] = graphpart_2g_0055_0062_pd[113] * x[62];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[114] = 66551. * x[48];
	v[1] = graphpart_2g_0055_0062_pd[114] * x[51];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[115] = 92080. * x[48];
	v[1] = graphpart_2g_0055_0062_pd[115] * x[63];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[116] = 66551. * x[49];
	v[1] = graphpart_2g_0055_0062_pd[116] * x[52];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[117] = 92080. * x[49];
	v[1] = graphpart_2g_0055_0062_pd[117] * x[64];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[118] = 66551. * x[50];
	v[1] = graphpart_2g_0055_0062_pd[118] * x[53];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[119] = 92080. * x[50];
	v[1] = graphpart_2g_0055_0062_pd[119] * x[65];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[120] = 47821. * x[51];
	v[1] = graphpart_2g_0055_0062_pd[120] * x[54];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[121] = 68105. * x[51];
	v[1] = graphpart_2g_0055_0062_pd[121] * x[66];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[122] = 47821. * x[52];
	v[1] = graphpart_2g_0055_0062_pd[122] * x[55];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[123] = 68105. * x[52];
	v[1] = graphpart_2g_0055_0062_pd[123] * x[67];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[124] = 47821. * x[53];
	v[1] = graphpart_2g_0055_0062_pd[124] * x[56];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[125] = 68105. * x[53];
	v[1] = graphpart_2g_0055_0062_pd[125] * x[68];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[126] = 116706. * x[54];
	v[1] = graphpart_2g_0055_0062_pd[126] * x[57];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[127] = 6426. * x[54];
	v[2] = graphpart_2g_0055_0062_pd[127] * x[69];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[128] = 116706. * x[55];
	v[1] = graphpart_2g_0055_0062_pd[128] * x[58];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[129] = 6426. * x[55];
	v[2] = graphpart_2g_0055_0062_pd[129] * x[70];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[130] = 116706. * x[56];
	v[1] = graphpart_2g_0055_0062_pd[130] * x[59];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[131] = 6426. * x[56];
	v[2] = graphpart_2g_0055_0062_pd[131] * x[71];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[132] = 154797. * x[57];
	v[1] = graphpart_2g_0055_0062_pd[132] * x[72];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[133] = 154797. * x[58];
	v[2] = graphpart_2g_0055_0062_pd[133] * x[73];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[134] = 154797. * x[59];
	v[1] = graphpart_2g_0055_0062_pd[134] * x[74];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[135] = 14848. * x[60];
	v[2] = graphpart_2g_0055_0062_pd[135] * x[63];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[136] = 2103. * x[60];
	v[1] = graphpart_2g_0055_0062_pd[136] * x[72];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[137] = 14848. * x[61];
	v[2] = graphpart_2g_0055_0062_pd[137] * x[64];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[138] = 2103. * x[61];
	v[1] = graphpart_2g_0055_0062_pd[138] * x[73];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[139] = 14848. * x[62];
	v[2] = graphpart_2g_0055_0062_pd[139] * x[65];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[140] = 2103. * x[62];
	v[1] = graphpart_2g_0055_0062_pd[140] * x[74];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[141] = 17019. * x[63];
	v[2] = graphpart_2g_0055_0062_pd[141] * x[66];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[142] = 17019. * x[64];
	v[2] = graphpart_2g_0055_0062_pd[142] * x[67];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[143] = 17019. * x[65];
	v[2] = graphpart_2g_0055_0062_pd[143] * x[68];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[144] = 83365. * x[66];
	v[2] = graphpart_2g_0055_0062_pd[144] * x[69];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[145] = 83365. * x[67];
	v[2] = graphpart_2g_0055_0062_pd[145] * x[70];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[146] = 83365. * x[68];
	v[2] = graphpart_2g_0055_0062_pd[146] * x[71];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[147] = 20293. * x[69];
	v[2] = graphpart_2g_0055_0062_pd[147] * x[72];
	v[1] = -v[2];
	v[0] += v[1];
	graphpart_2g_0055_0062_pd[148] = 20293. * x[70];
	v[1] = graphpart_2g_0055_0062_pd[148] * x[73];
	v[2] = -v[1];
	v[0] += v[2];
	graphpart_2g_0055_0062_pd[149] = 20293. * x[71];
	v[2] = graphpart_2g_0055_0062_pd[149] * x[74];
	v[1] = -v[2];
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[74] = -graphpart_2g_0055_0062_pd[149];
	g[71] = -x[74]*20293.;
	g[73] = -graphpart_2g_0055_0062_pd[148];
	g[70] = -x[73]*20293.;
	g[72] = -graphpart_2g_0055_0062_pd[147];
	g[69] = -x[72]*20293.;
	g[71] += graphpart_2g_0055_0062_pd[146];
	g[68] = x[71]*83365.;
	g[70] += graphpart_2g_0055_0062_pd[145];
	g[67] = x[70]*83365.;
	g[69] += graphpart_2g_0055_0062_pd[144];
	g[66] = x[69]*83365.;
	g[68] += graphpart_2g_0055_0062_pd[143];
	g[65] = x[68]*17019.;
	g[67] += graphpart_2g_0055_0062_pd[142];
	g[64] = x[67]*17019.;
	g[66] += graphpart_2g_0055_0062_pd[141];
	g[63] = x[66]*17019.;
	g[74] -= graphpart_2g_0055_0062_pd[140];
	g[62] = -x[74]*2103.;
	g[65] -= graphpart_2g_0055_0062_pd[139];
	g[62] -= x[65]*14848.;
	g[73] -= graphpart_2g_0055_0062_pd[138];
	g[61] = -x[73]*2103.;
	g[64] -= graphpart_2g_0055_0062_pd[137];
	g[61] -= x[64]*14848.;
	g[72] -= graphpart_2g_0055_0062_pd[136];
	g[60] = -x[72]*2103.;
	g[63] -= graphpart_2g_0055_0062_pd[135];
	g[60] -= x[63]*14848.;
	g[74] -= graphpart_2g_0055_0062_pd[134];
	g[59] = -x[74]*154797.;
	g[73] -= graphpart_2g_0055_0062_pd[133];
	g[58] = -x[73]*154797.;
	g[72] -= graphpart_2g_0055_0062_pd[132];
	g[57] = -x[72]*154797.;
	g[71] -= graphpart_2g_0055_0062_pd[131];
	g[56] = -x[71]*6426.;
	g[59] -= graphpart_2g_0055_0062_pd[130];
	g[56] -= x[59]*116706.;
	g[70] -= graphpart_2g_0055_0062_pd[129];
	g[55] = -x[70]*6426.;
	g[58] -= graphpart_2g_0055_0062_pd[128];
	g[55] -= x[58]*116706.;
	g[69] -= graphpart_2g_0055_0062_pd[127];
	g[54] = -x[69]*6426.;
	g[57] -= graphpart_2g_0055_0062_pd[126];
	g[54] -= x[57]*116706.;
	g[68] += graphpart_2g_0055_0062_pd[125];
	g[53] = x[68]*68105.;
	g[56] += graphpart_2g_0055_0062_pd[124];
	g[53] += x[56]*47821.;
	g[67] += graphpart_2g_0055_0062_pd[123];
	g[52] = x[67]*68105.;
	g[55] += graphpart_2g_0055_0062_pd[122];
	g[52] += x[55]*47821.;
	g[66] += graphpart_2g_0055_0062_pd[121];
	g[51] = x[66]*68105.;
	g[54] += graphpart_2g_0055_0062_pd[120];
	g[51] += x[54]*47821.;
	g[65] += graphpart_2g_0055_0062_pd[119];
	g[50] = x[65]*92080.;
	g[53] += graphpart_2g_0055_0062_pd[118];
	g[50] += x[53]*66551.;
	g[64] += graphpart_2g_0055_0062_pd[117];
	g[49] = x[64]*92080.;
	g[52] += graphpart_2g_0055_0062_pd[116];
	g[49] += x[52]*66551.;
	g[63] += graphpart_2g_0055_0062_pd[115];
	g[48] = x[63]*92080.;
	g[51] += graphpart_2g_0055_0062_pd[114];
	g[48] += x[51]*66551.;
	g[62] -= graphpart_2g_0055_0062_pd[113];
	g[47] = -x[62]*197304.;
	g[59] += graphpart_2g_0055_0062_pd[112];
	g[47] += x[59]*65415.;
	g[50] += graphpart_2g_0055_0062_pd[111];
	g[47] += x[50]*69937.;
	g[61] -= graphpart_2g_0055_0062_pd[110];
	g[46] = -x[61]*197304.;
	g[58] += graphpart_2g_0055_0062_pd[109];
	g[46] += x[58]*65415.;
	g[49] += graphpart_2g_0055_0062_pd[108];
	g[46] += x[49]*69937.;
	g[60] -= graphpart_2g_0055_0062_pd[107];
	g[45] = -x[60]*197304.;
	g[57] += graphpart_2g_0055_0062_pd[106];
	g[45] += x[57]*65415.;
	g[48] += graphpart_2g_0055_0062_pd[105];
	g[45] += x[48]*69937.;
	g[59] += graphpart_2g_0055_0062_pd[104];
	g[44] = x[59]*29332.;
	g[58] += graphpart_2g_0055_0062_pd[103];
	g[43] = x[58]*29332.;
	g[57] += graphpart_2g_0055_0062_pd[102];
	g[42] = x[57]*29332.;
	g[56] -= graphpart_2g_0055_0062_pd[101];
	g[41] = -x[56]*125320.;
	g[44] -= graphpart_2g_0055_0062_pd[100];
	g[41] -= x[44]*117425.;
	g[55] -= graphpart_2g_0055_0062_pd[99];
	g[40] = -x[55]*125320.;
	g[43] -= graphpart_2g_0055_0062_pd[98];
	g[40] -= x[43]*117425.;
	g[54] -= graphpart_2g_0055_0062_pd[97];
	g[39] = -x[54]*125320.;
	g[42] -= graphpart_2g_0055_0062_pd[96];
	g[39] -= x[42]*117425.;
	g[53] -= graphpart_2g_0055_0062_pd[95];
	g[38] = -x[53]*27062.;
	g[41] -= graphpart_2g_0055_0062_pd[94];
	g[38] -= x[41]*5402.;
	g[52] -= graphpart_2g_0055_0062_pd[93];
	g[37] = -x[52]*27062.;
	g[40] -= graphpart_2g_0055_0062_pd[92];
	g[37] -= x[40]*5402.;
	g[51] -= graphpart_2g_0055_0062_pd[91];
	g[36] = -x[51]*27062.;
	g[39] -= graphpart_2g_0055_0062_pd[90];
	g[36] -= x[39]*5402.;
	g[50] += graphpart_2g_0055_0062_pd[89];
	g[35] = x[50]*118167.;
	g[38] -= graphpart_2g_0055_0062_pd[88];
	g[35] -= x[38]*17583.;
	g[49] += graphpart_2g_0055_0062_pd[87];
	g[34] = x[49]*118167.;
	g[37] -= graphpart_2g_0055_0062_pd[86];
	g[34] -= x[37]*17583.;
	g[48] += graphpart_2g_0055_0062_pd[85];
	g[33] = x[48]*118167.;
	g[36] -= graphpart_2g_0055_0062_pd[84];
	g[33] -= x[36]*17583.;
	g[47] -= graphpart_2g_0055_0062_pd[83];
	g[32] = -x[47]*88012.;
	g[44] += graphpart_2g_0055_0062_pd[82];
	g[32] += x[44]*106251.;
	g[35] += graphpart_2g_0055_0062_pd[81];
	g[32] += x[35]*12200.;
	g[46] -= graphpart_2g_0055_0062_pd[80];
	g[31] = -x[46]*88012.;
	g[43] += graphpart_2g_0055_0062_pd[79];
	g[31] += x[43]*106251.;
	g[34] += graphpart_2g_0055_0062_pd[78];
	g[31] += x[34]*12200.;
	g[45] -= graphpart_2g_0055_0062_pd[77];
	g[30] = -x[45]*88012.;
	g[42] += graphpart_2g_0055_0062_pd[76];
	g[30] += x[42]*106251.;
	g[33] += graphpart_2g_0055_0062_pd[75];
	g[30] += x[33]*12200.;
	g[44] += graphpart_2g_0055_0062_pd[74];
	g[29] = x[44]*17724.;
	g[43] += graphpart_2g_0055_0062_pd[73];
	g[28] = x[43]*17724.;
	g[42] += graphpart_2g_0055_0062_pd[72];
	g[27] = x[42]*17724.;
	g[41] += graphpart_2g_0055_0062_pd[71];
	g[26] = x[41]*41371.;
	g[29] += graphpart_2g_0055_0062_pd[70];
	g[26] += x[29]*125824.;
	g[40] += graphpart_2g_0055_0062_pd[69];
	g[25] = x[40]*41371.;
	g[28] += graphpart_2g_0055_0062_pd[68];
	g[25] += x[28]*125824.;
	g[39] += graphpart_2g_0055_0062_pd[67];
	g[24] = x[39]*41371.;
	g[27] += graphpart_2g_0055_0062_pd[66];
	g[24] += x[27]*125824.;
	g[38] += graphpart_2g_0055_0062_pd[65];
	g[23] = x[38]*192287.;
	g[26] += graphpart_2g_0055_0062_pd[64];
	g[23] += x[26]*45778.;
	g[37] += graphpart_2g_0055_0062_pd[63];
	g[22] = x[37]*192287.;
	g[25] += graphpart_2g_0055_0062_pd[62];
	g[22] += x[25]*45778.;
	g[36] += graphpart_2g_0055_0062_pd[61];
	g[21] = x[36]*192287.;
	g[24] += graphpart_2g_0055_0062_pd[60];
	g[21] += x[24]*45778.;
	g[35] += graphpart_2g_0055_0062_pd[59];
	g[20] = x[35]*60462.;
	g[23] -= graphpart_2g_0055_0062_pd[58];
	g[20] -= x[23]*183413.;
	g[34] += graphpart_2g_0055_0062_pd[57];
	g[19] = x[34]*60462.;
	g[22] -= graphpart_2g_0055_0062_pd[56];
	g[19] -= x[22]*183413.;
	g[33] += graphpart_2g_0055_0062_pd[55];
	g[18] = x[33]*60462.;
	g[21] -= graphpart_2g_0055_0062_pd[54];
	g[18] -= x[21]*183413.;
	g[32] -= graphpart_2g_0055_0062_pd[53];
	g[17] = -x[32]*39163.;
	g[29] += graphpart_2g_0055_0062_pd[52];
	g[17] += x[29]*171989.;
	g[20] += graphpart_2g_0055_0062_pd[51];
	g[17] += x[20]*6320.;
	g[31] -= graphpart_2g_0055_0062_pd[50];
	g[16] = -x[31]*39163.;
	g[28] += graphpart_2g_0055_0062_pd[49];
	g[16] += x[28]*171989.;
	g[19] += graphpart_2g_0055_0062_pd[48];
	g[16] += x[19]*6320.;
	g[30] -= graphpart_2g_0055_0062_pd[47];
	g[15] = -x[30]*39163.;
	g[27] += graphpart_2g_0055_0062_pd[46];
	g[15] += x[27]*171989.;
	g[18] += graphpart_2g_0055_0062_pd[45];
	g[15] += x[18]*6320.;
	g[74] -= graphpart_2g_0055_0062_pd[44];
	g[14] = -x[74]*31218.;
	g[29] += graphpart_2g_0055_0062_pd[43];
	g[14] += x[29]*98784.;
	g[73] -= graphpart_2g_0055_0062_pd[42];
	g[13] = -x[73]*31218.;
	g[28] += graphpart_2g_0055_0062_pd[41];
	g[13] += x[28]*98784.;
	g[72] -= graphpart_2g_0055_0062_pd[40];
	g[12] = -x[72]*31218.;
	g[27] += graphpart_2g_0055_0062_pd[39];
	g[12] += x[27]*98784.;
	g[71] -= graphpart_2g_0055_0062_pd[38];
	g[11] = -x[71]*36333.;
	g[26] -= graphpart_2g_0055_0062_pd[37];
	g[11] -= x[26]*78959.;
	g[14] += graphpart_2g_0055_0062_pd[36];
	g[11] += x[14]*50562.;
	g[70] -= graphpart_2g_0055_0062_pd[35];
	g[10] = -x[70]*36333.;
	g[25] -= graphpart_2g_0055_0062_pd[34];
	g[10] -= x[25]*78959.;
	g[13] += graphpart_2g_0055_0062_pd[33];
	g[10] += x[13]*50562.;
	g[69] -= graphpart_2g_0055_0062_pd[32];
	g[9] = -x[69]*36333.;
	g[24] -= graphpart_2g_0055_0062_pd[31];
	g[9] -= x[24]*78959.;
	g[12] += graphpart_2g_0055_0062_pd[30];
	g[9] += x[12]*50562.;
	g[68] += graphpart_2g_0055_0062_pd[29];
	g[8] = x[68]*217400.;
	g[23] -= graphpart_2g_0055_0062_pd[28];
	g[8] -= x[23]*12640.;
	g[11] += graphpart_2g_0055_0062_pd[27];
	g[8] += x[11]*127397.;
	g[67] += graphpart_2g_0055_0062_pd[26];
	g[7] = x[67]*217400.;
	g[22] -= graphpart_2g_0055_0062_pd[25];
	g[7] -= x[22]*12640.;
	g[10] += graphpart_2g_0055_0062_pd[24];
	g[7] += x[10]*127397.;
	g[66] += graphpart_2g_0055_0062_pd[23];
	g[6] = x[66]*217400.;
	g[21] -= graphpart_2g_0055_0062_pd[22];
	g[6] -= x[21]*12640.;
	g[9] += graphpart_2g_0055_0062_pd[21];
	g[6] += x[9]*127397.;
	g[65] -= graphpart_2g_0055_0062_pd[20];
	g[5] = -x[65]*140641.;
	g[20] += graphpart_2g_0055_0062_pd[19];
	g[5] += x[20]*145893.;
	g[8] += graphpart_2g_0055_0062_pd[18];
	g[5] += x[8]*52284.;
	g[64] -= graphpart_2g_0055_0062_pd[17];
	g[4] = -x[64]*140641.;
	g[19] += graphpart_2g_0055_0062_pd[16];
	g[4] += x[19]*145893.;
	g[7] += graphpart_2g_0055_0062_pd[15];
	g[4] += x[7]*52284.;
	g[63] -= graphpart_2g_0055_0062_pd[14];
	g[3] = -x[63]*140641.;
	g[18] += graphpart_2g_0055_0062_pd[13];
	g[3] += x[18]*145893.;
	g[6] += graphpart_2g_0055_0062_pd[12];
	g[3] += x[6]*52284.;
	g[62] -= graphpart_2g_0055_0062_pd[11];
	g[2] = -x[62]*33555.;
	g[17] += graphpart_2g_0055_0062_pd[10];
	g[2] += x[17]*30835.;
	g[14] -= graphpart_2g_0055_0062_pd[9];
	g[2] -= x[14]*144456.;
	g[5] -= graphpart_2g_0055_0062_pd[8];
	g[2] -= x[5]*11669.;
	g[61] -= graphpart_2g_0055_0062_pd[7];
	g[1] = -x[61]*33555.;
	g[16] += graphpart_2g_0055_0062_pd[6];
	g[1] += x[16]*30835.;
	g[13] -= graphpart_2g_0055_0062_pd[5];
	g[1] -= x[13]*144456.;
	g[4] -= graphpart_2g_0055_0062_pd[4];
	g[1] -= x[4]*11669.;
	g[60] -= graphpart_2g_0055_0062_pd[3];
	g[0] = -x[60]*33555.;
	g[15] += graphpart_2g_0055_0062_pd[2];
	g[0] += x[15]*30835.;
	g[12] -= graphpart_2g_0055_0062_pd[1];
	g[0] -= x[12]*144456.;
	g[3] += graphpart_2g_0055_0062_pd[0];
	g[0] -= x[3]*11669.;
	}

	return v[0];
}

 void
graphpart_2g_0055_0062_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (graphpart_2g_0055_0062_xcheck(x) && wantfg == 2)
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
	}
}
#ifdef __cplusplus
	}
#endif
