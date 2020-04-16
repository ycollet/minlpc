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
 fint smallinvDAXr5b010_011_auxcom_[1] = { 1 /* nlc */ };
 fint smallinvDAXr5b010_011_funcom_[159] = {
	31 /* nvar */,
	1 /* nobj */,
	4 /* ncon */,
	121 /* nzc */,
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
	122,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1,
	2,
	3,
	4,
	1 };

 real smallinvDAXr5b010_011_boundc_[1+62+8] /* Infinity, variable bounds, constraint bounds */ = {
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
		-1.7e308,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		1.7e308,
		1000.,
		1.7e308,
		-1.7e308,
		1100.};

 real smallinvDAXr5b010_011_x0comn_[31] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real smallinvDAXr5b010_011_pd[495];
static real smallinvDAXr5b010_011_old_x[31];
static int smallinvDAXr5b010_011_xkind = -1;

 static int
smallinvDAXr5b010_011_xcheck(real *x)
{
	real *x1 = smallinvDAXr5b010_011_old_x, *xe = x + 31;
	errno = 0;
	if (smallinvDAXr5b010_011_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	smallinvDAXr5b010_011_xkind = 0;
	return 1;
	}
 real
smallinvDAXr5b010_011_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (smallinvDAXr5b010_011_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[30];
	;}

	if (wantfg & 2) {
	g[30] = 1.;
	}

	return rv;
}

 void
smallinvDAXr5b010_011_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (smallinvDAXr5b010_011_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	smallinvDAXr5b010_011_pd[0] = x[0] * x[0];
	smallinvDAXr5b010_011_pd[1] = x[0] + x[0];
	v[0] = 0.00558391 * smallinvDAXr5b010_011_pd[0];
	smallinvDAXr5b010_011_pd[2] = x[1] * x[1];
	smallinvDAXr5b010_011_pd[3] = x[1] + x[1];
	v[1] = 0.0103737 * smallinvDAXr5b010_011_pd[2];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[4] = x[2] * x[2];
	smallinvDAXr5b010_011_pd[5] = x[2] + x[2];
	v[1] = 0.0221075 * smallinvDAXr5b010_011_pd[4];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[6] = x[3] * x[3];
	smallinvDAXr5b010_011_pd[7] = x[3] + x[3];
	v[1] = 0.00399551 * smallinvDAXr5b010_011_pd[6];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[8] = x[4] * x[4];
	smallinvDAXr5b010_011_pd[9] = x[4] + x[4];
	v[1] = 0.00267064 * smallinvDAXr5b010_011_pd[8];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[10] = x[5] * x[5];
	smallinvDAXr5b010_011_pd[11] = x[5] + x[5];
	v[1] = 0.00516451 * smallinvDAXr5b010_011_pd[10];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[12] = x[6] * x[6];
	smallinvDAXr5b010_011_pd[13] = x[6] + x[6];
	v[1] = 0.00421051 * smallinvDAXr5b010_011_pd[12];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[14] = x[7] * x[7];
	smallinvDAXr5b010_011_pd[15] = x[7] + x[7];
	v[1] = 0.00368008 * smallinvDAXr5b010_011_pd[14];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[16] = x[8] * x[8];
	smallinvDAXr5b010_011_pd[17] = x[8] + x[8];
	v[1] = 0.00372788 * smallinvDAXr5b010_011_pd[16];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[18] = x[9] * x[9];
	smallinvDAXr5b010_011_pd[19] = x[9] + x[9];
	v[1] = 0.00668969 * smallinvDAXr5b010_011_pd[18];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[20] = x[10] * x[10];
	smallinvDAXr5b010_011_pd[21] = x[10] + x[10];
	v[1] = 0.00613034 * smallinvDAXr5b010_011_pd[20];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[22] = x[11] * x[11];
	smallinvDAXr5b010_011_pd[23] = x[11] + x[11];
	v[1] = 0.0129271 * smallinvDAXr5b010_011_pd[22];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[24] = x[12] * x[12];
	smallinvDAXr5b010_011_pd[25] = x[12] + x[12];
	v[1] = 0.00697595 * smallinvDAXr5b010_011_pd[24];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[26] = x[13] * x[13];
	smallinvDAXr5b010_011_pd[27] = x[13] + x[13];
	v[1] = 0.0104282 * smallinvDAXr5b010_011_pd[26];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[28] = x[14] * x[14];
	smallinvDAXr5b010_011_pd[29] = x[14] + x[14];
	v[1] = 0.00899168 * smallinvDAXr5b010_011_pd[28];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[30] = x[15] * x[15];
	smallinvDAXr5b010_011_pd[31] = x[15] + x[15];
	v[1] = 0.0206685 * smallinvDAXr5b010_011_pd[30];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[32] = x[16] * x[16];
	smallinvDAXr5b010_011_pd[33] = x[16] + x[16];
	v[1] = 0.0488863 * smallinvDAXr5b010_011_pd[32];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[34] = x[17] * x[17];
	smallinvDAXr5b010_011_pd[35] = x[17] + x[17];
	v[1] = 0.00894867 * smallinvDAXr5b010_011_pd[34];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[36] = x[18] * x[18];
	smallinvDAXr5b010_011_pd[37] = x[18] + x[18];
	v[1] = 0.0124118 * smallinvDAXr5b010_011_pd[36];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[38] = x[19] * x[19];
	smallinvDAXr5b010_011_pd[39] = x[19] + x[19];
	v[1] = 0.0122291 * smallinvDAXr5b010_011_pd[38];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[40] = x[20] * x[20];
	smallinvDAXr5b010_011_pd[41] = x[20] + x[20];
	v[1] = 0.0128973 * smallinvDAXr5b010_011_pd[40];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[42] = x[21] * x[21];
	smallinvDAXr5b010_011_pd[43] = x[21] + x[21];
	v[1] = 0.00668043 * smallinvDAXr5b010_011_pd[42];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[44] = x[22] * x[22];
	smallinvDAXr5b010_011_pd[45] = x[22] + x[22];
	v[1] = 0.0153425 * smallinvDAXr5b010_011_pd[44];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[46] = x[23] * x[23];
	smallinvDAXr5b010_011_pd[47] = x[23] + x[23];
	v[1] = 0.0128605 * smallinvDAXr5b010_011_pd[46];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[48] = x[24] * x[24];
	smallinvDAXr5b010_011_pd[49] = x[24] + x[24];
	v[1] = 0.00718697 * smallinvDAXr5b010_011_pd[48];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[50] = x[25] * x[25];
	smallinvDAXr5b010_011_pd[51] = x[25] + x[25];
	v[1] = 0.0102616 * smallinvDAXr5b010_011_pd[50];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[52] = x[26] * x[26];
	smallinvDAXr5b010_011_pd[53] = x[26] + x[26];
	v[1] = 0.0123235 * smallinvDAXr5b010_011_pd[52];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[54] = x[27] * x[27];
	smallinvDAXr5b010_011_pd[55] = x[27] + x[27];
	v[1] = 0.00569465 * smallinvDAXr5b010_011_pd[54];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[56] = x[28] * x[28];
	smallinvDAXr5b010_011_pd[57] = x[28] + x[28];
	v[1] = 0.00818114 * smallinvDAXr5b010_011_pd[56];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[58] = x[29] * x[29];
	smallinvDAXr5b010_011_pd[59] = x[29] + x[29];
	v[1] = 0.00469456 * smallinvDAXr5b010_011_pd[58];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[60] = 0.00901964 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[60] * x[1];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[61] = 0.00860972 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[61] * x[2];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[62] = 0.00248004 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[62] * x[3];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[63] = 0.001821292 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[63] * x[4];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[64] = 0.00561078 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[64] * x[5];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[65] = 0.0051287 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[65] * x[6];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[66] = 0.000691196 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[66] * x[7];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[67] = 0.000805982 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[67] * x[8];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[68] = 0.00531452 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[68] * x[9];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[69] = 0.00556768 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[69] * x[10];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[70] = 0.00745224 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[70] * x[11];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[71] = 0.00478224 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[71] * x[12];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[72] = 0.00610824 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[72] * x[13];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[73] = 0.00577634 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[73] * x[14];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[74] = 0.00613326 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[74] * x[15];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[75] = 0.01432596 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[75] * x[16];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[76] = 0.007501 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[76] * x[17];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[77] = 0.00716212 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[77] * x[18];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[78] = 0.00512922 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[78] * x[19];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[79] = 0.0087283 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[79] * x[20];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[80] = 0.00245846 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[80] * x[21];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[81] = 0.0071572 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[81] * x[22];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[82] = 0.00543966 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[82] * x[23];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[83] = 0.00708258 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[83] * x[24];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[84] = 0.00243422 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[84] * x[25];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[85] = 0.00729094 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[85] * x[26];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[86] = 0.00386642 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[86] * x[27];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[87] = 0.0061908 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[87] * x[28];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[88] = 0.00366754 * x[0];
	v[1] = smallinvDAXr5b010_011_pd[88] * x[29];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[89] = 0.01583972 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[89] * x[2];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[90] = 0.00394608 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[90] * x[3];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[91] = 0.001773554 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[91] * x[4];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[92] = 0.00861376 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[92] * x[5];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[93] = 0.00604454 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[93] * x[6];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[94] = 0.00312866 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[94] * x[7];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[95] = 0.00184686 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[95] * x[8];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[96] = 0.00924638 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[96] * x[9];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[97] = 0.01131902 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[97] * x[10];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[98] = 0.01253232 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[98] * x[11];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[99] = 0.00675858 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[99] * x[12];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[100] = 0.00804604 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[100] * x[13];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[101] = 0.00869872 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[101] * x[14];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[102] = 0.0094047 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[102] * x[15];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[103] = 0.0251538 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[103] * x[16];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[104] = 0.01321532 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[104] * x[17];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[105] = 0.01127964 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[105] * x[18];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[106] = 0.0096635 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[106] * x[19];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[107] = 0.0160783 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[107] * x[20];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[108] = 0.00271 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[108] * x[21];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[109] = 0.01486022 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[109] * x[22];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[110] = 0.01091018 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[110] * x[23];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[111] = 0.01009426 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[111] * x[24];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[112] = 0.00754144 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[112] * x[25];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[113] = 0.01408844 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[113] * x[26];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[114] = 0.00544162 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[114] * x[27];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[115] = 0.01096178 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[115] * x[28];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[116] = 0.00574964 * x[1];
	v[1] = smallinvDAXr5b010_011_pd[116] * x[29];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[117] = 0.00299428 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[117] * x[3];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[118] = 0.001239314 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[118] * x[4];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[119] = 0.01256412 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[119] * x[5];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[120] = 0.00899714 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[120] * x[6];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[121] = 0.00444448 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[121] * x[7];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[122] = 0.00616612 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[122] * x[8];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[123] = 0.0146019 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[123] * x[9];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[124] = 0.01249836 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[124] * x[10];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[125] = 0.0264968 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[125] * x[11];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[126] = 0.01266506 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[126] * x[12];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[127] = 0.01358566 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[127] * x[13];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[128] = 0.01419766 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[128] * x[14];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[129] = 0.01033796 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[129] * x[15];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[130] = 0.040104 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[130] * x[16];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[131] = 0.01504214 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[131] * x[17];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[132] = 0.0210518 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[132] * x[18];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[133] = 0.0169342 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[133] * x[19];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[134] = 0.020394 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[134] * x[20];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[135] = 0.006361 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[135] * x[21];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[136] = 0.0173249 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[136] * x[22];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[137] = 0.01157254 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[137] * x[23];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[138] = 0.01601196 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[138] * x[24];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[139] = 0.01305808 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[139] * x[25];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[140] = 0.018918 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[140] * x[26];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[141] = 0.0100768 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[141] * x[27];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[142] = 0.01415258 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[142] * x[28];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[143] = 0.00890208 * x[2];
	v[1] = smallinvDAXr5b010_011_pd[143] * x[29];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[144] = 0.00365082 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[144] * x[4];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[145] = 0.0031533 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[145] * x[5];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[146] = 0.001664882 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[146] * x[6];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[147] = 0.000487746 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[147] * x[7];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[148] = 0.00074873 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[148] * x[8];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[149] = 0.00279536 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[149] * x[9];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[150] = 0.000948078 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[150] * x[10];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[151] = 0.00218644 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[151] * x[11];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[152] = 0.001471884 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[152] * x[12];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[153] = 0.001764448 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[153] * x[13];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[154] = 0.001707856 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[154] * x[14];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[155] = 0.00415534 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[155] * x[15];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[156] = 0.00552118 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[156] * x[16];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[157] = 0.00298928 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[157] * x[17];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[158] = 0.000446818 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[158] * x[18];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[159] = 0.0042709 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[159] * x[19];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[160] = 0.00437068 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[160] * x[20];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[161] = 0.001584414 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[161] * x[21];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[162] = 0.0028495 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[162] * x[22];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[163] = 0.00550266 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[163] * x[23];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[164] = 0.0019381 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[164] * x[24];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[165] = 0.000779792 * x[3];
	v[1] = smallinvDAXr5b010_011_pd[165] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[166] = 0.00383714 * x[3];
	v[2] = smallinvDAXr5b010_011_pd[166] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[167] = 0.00170793 * x[3];
	v[2] = smallinvDAXr5b010_011_pd[167] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[168] = 0.00220852 * x[3];
	v[2] = smallinvDAXr5b010_011_pd[168] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[169] = 0.001897386 * x[3];
	v[2] = smallinvDAXr5b010_011_pd[169] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[170] = 0.00226608 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[170] * x[5];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[171] = 0.001391572 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[171] * x[6];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[172] = 0.001434726 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[172] * x[7];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[173] = 0.000718962 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[173] * x[8];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[174] = 0.00117417 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[174] * x[9];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[175] = 0.001240914 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[175] * x[10];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[176] = 0.000587866 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[176] * x[11];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[177] = 0.0020154 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[177] * x[12];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[178] = 0.00126883 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[178] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[179] = 0.000645164 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[179] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[180] = 0.0001425196 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[180] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[181] = 0.001199014 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[181] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[182] = 0.001896292 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[182] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[183] = 0.000289412 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[183] * x[18];
	v[1] = -v[2];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[184] = 0.001457998 * x[4];
	v[1] = smallinvDAXr5b010_011_pd[184] * x[19];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[185] = 0.00199702 * x[4];
	v[1] = smallinvDAXr5b010_011_pd[185] * x[20];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[186] = 0.001266598 * x[4];
	v[1] = smallinvDAXr5b010_011_pd[186] * x[21];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[187] = 0.000764624 * x[4];
	v[1] = smallinvDAXr5b010_011_pd[187] * x[22];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[188] = 0.001961312 * x[4];
	v[1] = smallinvDAXr5b010_011_pd[188] * x[23];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[189] = 0.001748826 * x[4];
	v[1] = smallinvDAXr5b010_011_pd[189] * x[24];
	v[0] += v[1];
	smallinvDAXr5b010_011_pd[190] = 0.00122625 * x[4];
	v[1] = smallinvDAXr5b010_011_pd[190] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[191] = 0.000753266 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[191] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[192] = 0.00063941 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[192] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[193] = 0.001644068 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[193] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[194] = 0.001587886 * x[4];
	v[2] = smallinvDAXr5b010_011_pd[194] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[195] = 0.00454154 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[195] * x[6];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[196] = 0.001157686 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[196] * x[7];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[197] = 0.0032018 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[197] * x[8];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[198] = 0.00727798 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[198] * x[9];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[199] = 0.0064553 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[199] * x[10];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[200] = 0.00791618 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[200] * x[11];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[201] = 0.00687526 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[201] * x[12];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[202] = 0.00638032 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[202] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[203] = 0.00425538 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[203] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[204] = 0.00583332 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[204] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[205] = 0.01491304 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[205] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[206] = 0.00876772 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[206] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[207] = 0.00814434 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[207] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[208] = 0.00549208 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[208] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[209] = 0.0103848 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[209] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[210] = 0.001352278 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[210] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[211] = 0.0063097 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[211] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[212] = 0.0052012 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[212] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[213] = 0.00808494 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[213] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[214] = 0.00595234 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[214] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[215] = 0.00960786 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[215] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[216] = 0.0035648 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[216] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[217] = 0.00730486 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[217] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[218] = 0.0036145 * x[5];
	v[2] = smallinvDAXr5b010_011_pd[218] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[219] = 0.0027426 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[219] * x[7];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[220] = 0.00224138 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[220] * x[8];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[221] = 0.00558948 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[221] * x[9];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[222] = 0.00489378 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[222] * x[10];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[223] = 0.0073565 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[223] * x[11];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[224] = 0.0050794 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[224] * x[12];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[225] = 0.00363244 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[225] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[226] = 0.00634576 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[226] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[227] = 0.001588982 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[227] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[228] = 0.00877926 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[228] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[229] = 0.00710862 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[229] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[230] = 0.00675396 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[230] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[231] = 0.00621206 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[231] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[232] = 0.00746652 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[232] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[233] = 0.001927036 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[233] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[234] = 0.00410122 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[234] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[235] = 0.00344774 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[235] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[236] = 0.00594546 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[236] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[237] = 0.00461784 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[237] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[238] = 0.00530234 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[238] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[239] = 0.00320122 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[239] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[240] = 0.00474356 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[240] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[241] = 0.00341222 * x[6];
	v[2] = smallinvDAXr5b010_011_pd[241] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[242] = 0.00105347 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[242] * x[8];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[243] = 0.001879822 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[243] * x[9];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[244] = 0.00290244 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[244] * x[10];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[245] = 0.00353818 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[245] * x[11];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[246] = 0.0035513 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[246] * x[12];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[247] = 0.00294406 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[247] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[248] = 0.00389942 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[248] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[249] = 0.00286866 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[249] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[250] = 0.000920126 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[250] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[251] = 0.00274282 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[251] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[252] = 0.0027675 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[252] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[253] = 0.00464592 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[253] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[254] = 0.001093444 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[254] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[255] = 0.000948594 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[255] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[256] = 0.00275316 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[256] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[257] = 0.001626794 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[257] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[258] = 0.00209498 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[258] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[259] = 0.0031962 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[259] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[260] = 0.001767658 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[260] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[261] = 0.00109948 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[261] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[262] = 0.00292004 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[262] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[263] = 0.00215496 * x[7];
	v[2] = smallinvDAXr5b010_011_pd[263] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[264] = 0.00329222 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[264] * x[9];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[265] = 0.00239978 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[265] * x[10];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[266] = 0.00365066 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[266] * x[11];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[267] = 0.00463422 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[267] * x[12];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[268] = 0.00260888 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[268] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[269] = 0.00330432 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[269] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[270] = 0.000950274 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[270] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[271] = 0.00309664 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[271] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[272] = 0.00325462 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[272] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[273] = 0.00494078 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[273] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[274] = 0.00339202 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[274] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[275] = 0.00283784 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[275] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[276] = 0.001862472 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[276] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[277] = 0.001457294 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[277] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[278] = 0.000292408 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[278] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[279] = 0.00434258 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[279] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[280] = 0.0051917 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[280] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[281] = 0.00442724 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[281] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[282] = 0.00235362 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[282] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[283] = 0.0023207 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[283] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[284] = 0.00232972 * x[8];
	v[2] = smallinvDAXr5b010_011_pd[284] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[285] = 0.00661128 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[285] * x[10];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[286] = 0.0099349 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[286] * x[11];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[287] = 0.00670728 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[287] * x[12];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[288] = 0.00688756 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[288] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[289] = 0.00814804 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[289] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[290] = 0.00387536 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[290] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[291] = 0.01709622 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[291] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[292] = 0.00921546 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[292] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[293] = 0.01138012 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[293] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[294] = 0.0073598 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[294] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[295] = 0.012047 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[295] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[296] = 0.001953884 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[296] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[297] = 0.01110682 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[297] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[298] = 0.00744232 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[298] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[299] = 0.00846572 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[299] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[300] = 0.00811902 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[300] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[301] = 0.01093528 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[301] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[302] = 0.00642736 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[302] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[303] = 0.00817838 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[303] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[304] = 0.00467066 * x[9];
	v[2] = smallinvDAXr5b010_011_pd[304] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[305] = 0.01089978 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[305] * x[11];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[306] = 0.00580646 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[306] * x[12];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[307] = 0.00479126 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[307] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[308] = 0.00655088 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[308] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[309] = 0.00784072 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[309] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[310] = 0.0171429 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[310] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[311] = 0.0099023 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[311] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[312] = 0.00881158 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[312] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[313] = 0.0065332 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[313] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[314] = 0.01111462 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[314] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[315] = 0.00238226 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[315] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[316] = 0.00942038 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[316] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[317] = 0.00509366 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[317] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[318] = 0.0079177 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[318] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[319] = 0.00653764 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[319] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[320] = 0.00963386 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[320] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[321] = 0.00518254 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[321] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[322] = 0.00839924 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[322] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[323] = 0.00396162 * x[10];
	v[2] = smallinvDAXr5b010_011_pd[323] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[324] = 0.00812884 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[324] * x[12];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[325] = 0.00932748 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[325] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[326] = 0.01172114 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[326] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[327] = 0.00937084 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[327] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[328] = 0.033621 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[328] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[329] = 0.0125625 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[329] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[330] = 0.01635358 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[330] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[331] = 0.01460644 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[331] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[332] = 0.01374474 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[332] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[333] = 0.00526496 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[333] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[334] = 0.01402198 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[334] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[335] = 0.00931776 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[335] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[336] = 0.01195866 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[336] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[337] = 0.00822682 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[337] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[338] = 0.01241788 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[338] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[339] = 0.00706034 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[339] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[340] = 0.01219462 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[340] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[341] = 0.00598988 * x[11];
	v[2] = smallinvDAXr5b010_011_pd[341] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[342] = 0.0068538 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[342] * x[13];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[343] = 0.00620178 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[343] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[344] = 0.00379406 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[344] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[345] = 0.00889862 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[345] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[346] = 0.00816594 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[346] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[347] = 0.01033824 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[347] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[348] = 0.00577162 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[348] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[349] = 0.00736548 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[349] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[350] = 0.00410776 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[350] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[351] = 0.00580558 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[351] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[352] = 0.00459074 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[352] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[353] = 0.0072167 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[353] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[354] = 0.00956086 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[354] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[355] = 0.00943468 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[355] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[356] = 0.00587164 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[356] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[357] = 0.00902842 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[357] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[358] = 0.00550608 * x[12];
	v[2] = smallinvDAXr5b010_011_pd[358] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[359] = 0.00635356 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[359] * x[14];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[360] = 0.00709628 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[360] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[361] = 0.01555038 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[361] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[362] = 0.00826722 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[362] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[363] = 0.00751614 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[363] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[364] = 0.00814342 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[364] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[365] = 0.00995652 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[365] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[366] = 0.00477798 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[366] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[367] = 0.0076843 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[367] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[368] = 0.00817698 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[368] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[369] = 0.00886056 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[369] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[370] = 0.00579636 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[370] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[371] = 0.01128084 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[371] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[372] = 0.00483444 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[372] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[373] = 0.0068342 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[373] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[374] = 0.0077372 * x[13];
	v[2] = smallinvDAXr5b010_011_pd[374] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[375] = 0.00973548 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[375] * x[15];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[376] = 0.01556958 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[376] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[377] = 0.00926266 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[377] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[378] = 0.01281188 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[378] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[379] = 0.00669072 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[379] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[380] = 0.00937684 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[380] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[381] = 0.00639856 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[381] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[382] = 0.00611934 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[382] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[383] = 0.00853942 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[383] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[384] = 0.00964296 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[384] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[385] = 0.00704584 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[385] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[386] = 0.0119279 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[386] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[387] = 0.00648174 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[387] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[388] = 0.01050128 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[388] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[389] = 0.00502696 * x[14];
	v[2] = smallinvDAXr5b010_011_pd[389] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[390] = 0.01809222 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[390] * x[16];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[391] = 0.00823288 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[391] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[392] = 0.01161214 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[392] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[393] = 0.00533676 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[393] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[394] = 0.01233794 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[394] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[395] = 0.00512778 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[395] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[396] = 0.00722276 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[396] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[397] = 0.01715638 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[397] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[398] = 0.00677738 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[398] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[399] = 0.0069565 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[399] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[400] = 0.01691522 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[400] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[401] = 0.00246824 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[401] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[402] = 0.00934088 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[402] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[403] = 0.00393866 * x[15];
	v[2] = smallinvDAXr5b010_011_pd[403] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[404] = 0.01858542 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[404] * x[17];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[405] = 0.0224912 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[405] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[406] = 0.01793624 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[406] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[407] = 0.0270204 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[407] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[408] = 0.01083832 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[408] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[409] = 0.0216678 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[409] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[410] = 0.0183347 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[410] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[411] = 0.01893 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[411] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[412] = 0.01089098 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[412] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[413] = 0.0209142 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[413] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[414] = 0.01273162 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[414] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[415] = 0.0200902 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[415] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[416] = 0.00774366 * x[16];
	v[2] = smallinvDAXr5b010_011_pd[416] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[417] = 0.01171594 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[417] * x[18];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[418] = 0.00861454 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[418] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[419] = 0.01414322 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[419] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[420] = 0.001961404 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[420] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[421] = 0.00910214 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[421] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[422] = 0.01003468 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[422] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[423] = 0.0094743 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[423] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[424] = 0.00825794 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[424] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[425] = 0.01336058 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[425] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[426] = 0.00607998 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[426] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[427] = 0.01070732 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[427] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[428] = 0.00492858 * x[17];
	v[2] = smallinvDAXr5b010_011_pd[428] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[429] = 0.0082848 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[429] * x[19];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[430] = 0.0126004 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[430] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[431] = 0.00407366 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[431] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[432] = 0.01381284 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[432] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[433] = 0.00838908 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[433] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[434] = 0.01198264 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[434] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[435] = 0.01583126 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[435] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[436] = 0.01664044 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[436] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[437] = 0.00924324 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[437] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[438] = 0.01214842 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[438] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[439] = 0.00592778 * x[18];
	v[2] = smallinvDAXr5b010_011_pd[439] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[440] = 0.01071434 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[440] * x[20];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[441] = 0.00296964 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[441] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[442] = 0.00736528 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[442] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[443] = 0.00606396 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[443] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[444] = 0.00628822 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[444] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[445] = 0.00817696 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[445] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[446] = 0.00776894 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[446] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[447] = 0.0026202 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[447] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[448] = 0.00717342 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[448] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[449] = 0.00579184 * x[19];
	v[2] = smallinvDAXr5b010_011_pd[449] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[450] = 0.00469936 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[450] * x[21];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[451] = 0.0138599 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[451] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[452] = 0.0125037 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[452] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[453] = 0.01211002 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[453] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[454] = 0.00836436 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[454] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[455] = 0.016494 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[455] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[456] = 0.00602872 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[456] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[457] = 0.01180462 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[457] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[458] = 0.00570478 * x[20];
	v[2] = smallinvDAXr5b010_011_pd[458] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[459] = 0.0032176 * x[21];
	v[2] = smallinvDAXr5b010_011_pd[459] * x[22];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[460] = 0.00379112 * x[21];
	v[2] = smallinvDAXr5b010_011_pd[460] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[461] = 0.00301976 * x[21];
	v[2] = smallinvDAXr5b010_011_pd[461] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[462] = 0.00308424 * x[21];
	v[2] = smallinvDAXr5b010_011_pd[462] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[463] = 0.00369962 * x[21];
	v[2] = smallinvDAXr5b010_011_pd[463] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[464] = 0.00278784 * x[21];
	v[2] = smallinvDAXr5b010_011_pd[464] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[465] = 0.00465846 * x[21];
	v[2] = smallinvDAXr5b010_011_pd[465] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[466] = 0.00297212 * x[21];
	v[2] = smallinvDAXr5b010_011_pd[466] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[467] = 0.01019176 * x[22];
	v[2] = smallinvDAXr5b010_011_pd[467] * x[23];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[468] = 0.00779098 * x[22];
	v[2] = smallinvDAXr5b010_011_pd[468] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[469] = 0.00577776 * x[22];
	v[2] = smallinvDAXr5b010_011_pd[469] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[470] = 0.01267514 * x[22];
	v[2] = smallinvDAXr5b010_011_pd[470] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[471] = 0.00735432 * x[22];
	v[2] = smallinvDAXr5b010_011_pd[471] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[472] = 0.00786386 * x[22];
	v[2] = smallinvDAXr5b010_011_pd[472] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[473] = 0.00559972 * x[22];
	v[2] = smallinvDAXr5b010_011_pd[473] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[474] = 0.00725022 * x[23];
	v[2] = smallinvDAXr5b010_011_pd[474] * x[24];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[475] = 0.00455648 * x[23];
	v[2] = smallinvDAXr5b010_011_pd[475] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[476] = 0.0157223 * x[23];
	v[2] = smallinvDAXr5b010_011_pd[476] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[477] = 0.00579512 * x[23];
	v[2] = smallinvDAXr5b010_011_pd[477] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[478] = 0.00792398 * x[23];
	v[2] = smallinvDAXr5b010_011_pd[478] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[479] = 0.0045755 * x[23];
	v[2] = smallinvDAXr5b010_011_pd[479] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[480] = 0.00723442 * x[24];
	v[2] = smallinvDAXr5b010_011_pd[480] * x[25];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[481] = 0.01196012 * x[24];
	v[2] = smallinvDAXr5b010_011_pd[481] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[482] = 0.0063273 * x[24];
	v[2] = smallinvDAXr5b010_011_pd[482] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[483] = 0.0099815 * x[24];
	v[2] = smallinvDAXr5b010_011_pd[483] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[484] = 0.0041794 * x[24];
	v[2] = smallinvDAXr5b010_011_pd[484] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[485] = 0.01139894 * x[25];
	v[2] = smallinvDAXr5b010_011_pd[485] * x[26];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[486] = 0.0080092 * x[25];
	v[2] = smallinvDAXr5b010_011_pd[486] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[487] = 0.0080044 * x[25];
	v[2] = smallinvDAXr5b010_011_pd[487] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[488] = 0.00493602 * x[25];
	v[2] = smallinvDAXr5b010_011_pd[488] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[489] = 0.00826208 * x[26];
	v[2] = smallinvDAXr5b010_011_pd[489] * x[27];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[490] = 0.01246152 * x[26];
	v[2] = smallinvDAXr5b010_011_pd[490] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[491] = 0.0067556 * x[26];
	v[2] = smallinvDAXr5b010_011_pd[491] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[492] = 0.00575648 * x[27];
	v[2] = smallinvDAXr5b010_011_pd[492] * x[28];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[493] = 0.0044929 * x[27];
	v[2] = smallinvDAXr5b010_011_pd[493] * x[29];
	v[0] += v[2];
	smallinvDAXr5b010_011_pd[494] = 0.00469952 * x[28];
	v[2] = smallinvDAXr5b010_011_pd[494] * x[29];
	v[0] += v[2];
	t1 = v[0] + -x[30];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 0.00218236*x[0];
	t1 += -0.00115175*x[1];
	t1 += -0.00795114*x[2];
	t1 += 0.011626*x[3];
	t1 += 0.0084202*x[4];
	t1 += 0.00496825*x[5];
	t1 += 0.00254677*x[6];
	t1 += -0.00234318*x[7];
	t1 += -0.00770481*x[8];
	t1 += -0.00223195*x[9];
	t1 += -0.00151299*x[10];
	t1 += -0.00448068*x[11];
	t1 += 0.00386372*x[12];
	t1 += -0.0112346*x[13];
	t1 += -0.00311219*x[14];
	t1 += 0.00357072*x[15];
	t1 += -0.00928342*x[16];
	t1 += -0.00268175*x[17];
	t1 += -0.00631856*x[18];
	t1 += -0.00211388*x[19];
	t1 += 0.0132599*x[20];
	t1 += 0.00445572*x[21];
	t1 += 0.0067442*x[22];
	t1 += 0.0185808*x[23];
	t1 += 0.00160132*x[24];
	t1 += -0.00624596*x[25];
	t1 += 0.00206*x[26];
	t1 += 0.00229918*x[27];
	t1 += 0.00165023*x[28];
	t1 += 0.0035383*x[29];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 39.19*x[0];
	t1 += 41.47*x[1];
	t1 += 5.71*x[2];
	t1 += 53.59*x[3];
	t1 += 43.65*x[4];
	t1 += 85.46*x[5];
	t1 += 39.7*x[6];
	t1 += 44.91*x[7];
	t1 += 9.6*x[8];
	t1 += 11.26*x[9];
	t1 += 39.56*x[10];
	t1 += 46.*x[11];
	t1 += 45.25*x[12];
	t1 += 21.9*x[13];
	t1 += 11.85*x[14];
	t1 += 37.4*x[15];
	t1 += 4.75*x[16];
	t1 += 44.44*x[17];
	t1 += 80.5*x[18];
	t1 += 49.46*x[19];
	t1 += 67.02*x[20];
	t1 += 59.25*x[21];
	t1 += 71.5*x[22];
	t1 += 48.8*x[23];
	t1 += 73.22*x[24];
	t1 += 101.9*x[25];
	t1 += 20.06*x[26];
	t1 += 36.33*x[27];
	t1 += 41.31*x[28];
	t1 += 53.09*x[29];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 39.19*x[0];
	t1 += 41.47*x[1];
	t1 += 5.71*x[2];
	t1 += 53.59*x[3];
	t1 += 43.65*x[4];
	t1 += 85.46*x[5];
	t1 += 39.7*x[6];
	t1 += 44.91*x[7];
	t1 += 9.6*x[8];
	t1 += 11.26*x[9];
	t1 += 39.56*x[10];
	t1 += 46.*x[11];
	t1 += 45.25*x[12];
	t1 += 21.9*x[13];
	t1 += 11.85*x[14];
	t1 += 37.4*x[15];
	t1 += 4.75*x[16];
	t1 += 44.44*x[17];
	t1 += 80.5*x[18];
	t1 += 49.46*x[19];
	t1 += 67.02*x[20];
	t1 += 59.25*x[21];
	t1 += 71.5*x[22];
	t1 += 48.8*x[23];
	t1 += 73.22*x[24];
	t1 += 101.9*x[25];
	t1 += 20.06*x[26];
	t1 += 36.33*x[27];
	t1 += 41.31*x[28];
	t1 += 53.09*x[29];
	c[3] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[116] = smallinvDAXr5b010_011_pd[494];
	J[112] = x[29]*0.00469952;
	J[116] += smallinvDAXr5b010_011_pd[493];
	J[108] = x[29]*0.0044929;
	J[112] += smallinvDAXr5b010_011_pd[492];
	J[108] += x[28]*0.00575648;
	J[116] += smallinvDAXr5b010_011_pd[491];
	J[104] = x[29]*0.0067556;
	J[112] += smallinvDAXr5b010_011_pd[490];
	J[104] += x[28]*0.01246152;
	J[108] += smallinvDAXr5b010_011_pd[489];
	J[104] += x[27]*0.00826208;
	J[116] += smallinvDAXr5b010_011_pd[488];
	J[100] = x[29]*0.00493602;
	J[112] += smallinvDAXr5b010_011_pd[487];
	J[100] += x[28]*0.0080044;
	J[108] += smallinvDAXr5b010_011_pd[486];
	J[100] += x[27]*0.0080092;
	J[104] += smallinvDAXr5b010_011_pd[485];
	J[100] += x[26]*0.01139894;
	J[116] += smallinvDAXr5b010_011_pd[484];
	J[96] = x[29]*0.0041794;
	J[112] += smallinvDAXr5b010_011_pd[483];
	J[96] += x[28]*0.0099815;
	J[108] += smallinvDAXr5b010_011_pd[482];
	J[96] += x[27]*0.0063273;
	J[104] += smallinvDAXr5b010_011_pd[481];
	J[96] += x[26]*0.01196012;
	J[100] += smallinvDAXr5b010_011_pd[480];
	J[96] += x[25]*0.00723442;
	J[116] += smallinvDAXr5b010_011_pd[479];
	J[92] = x[29]*0.0045755;
	J[112] += smallinvDAXr5b010_011_pd[478];
	J[92] += x[28]*0.00792398;
	J[108] += smallinvDAXr5b010_011_pd[477];
	J[92] += x[27]*0.00579512;
	J[104] += smallinvDAXr5b010_011_pd[476];
	J[92] += x[26]*0.0157223;
	J[100] += smallinvDAXr5b010_011_pd[475];
	J[92] += x[25]*0.00455648;
	J[96] += smallinvDAXr5b010_011_pd[474];
	J[92] += x[24]*0.00725022;
	J[116] += smallinvDAXr5b010_011_pd[473];
	J[88] = x[29]*0.00559972;
	J[112] += smallinvDAXr5b010_011_pd[472];
	J[88] += x[28]*0.00786386;
	J[108] += smallinvDAXr5b010_011_pd[471];
	J[88] += x[27]*0.00735432;
	J[104] += smallinvDAXr5b010_011_pd[470];
	J[88] += x[26]*0.01267514;
	J[100] += smallinvDAXr5b010_011_pd[469];
	J[88] += x[25]*0.00577776;
	J[96] += smallinvDAXr5b010_011_pd[468];
	J[88] += x[24]*0.00779098;
	J[92] += smallinvDAXr5b010_011_pd[467];
	J[88] += x[23]*0.01019176;
	J[116] += smallinvDAXr5b010_011_pd[466];
	J[84] = x[29]*0.00297212;
	J[112] += smallinvDAXr5b010_011_pd[465];
	J[84] += x[28]*0.00465846;
	J[108] += smallinvDAXr5b010_011_pd[464];
	J[84] += x[27]*0.00278784;
	J[104] += smallinvDAXr5b010_011_pd[463];
	J[84] += x[26]*0.00369962;
	J[100] += smallinvDAXr5b010_011_pd[462];
	J[84] += x[25]*0.00308424;
	J[96] += smallinvDAXr5b010_011_pd[461];
	J[84] += x[24]*0.00301976;
	J[92] += smallinvDAXr5b010_011_pd[460];
	J[84] += x[23]*0.00379112;
	J[88] += smallinvDAXr5b010_011_pd[459];
	J[84] += x[22]*0.0032176;
	J[116] += smallinvDAXr5b010_011_pd[458];
	J[80] = x[29]*0.00570478;
	J[112] += smallinvDAXr5b010_011_pd[457];
	J[80] += x[28]*0.01180462;
	J[108] += smallinvDAXr5b010_011_pd[456];
	J[80] += x[27]*0.00602872;
	J[104] += smallinvDAXr5b010_011_pd[455];
	J[80] += x[26]*0.016494;
	J[100] += smallinvDAXr5b010_011_pd[454];
	J[80] += x[25]*0.00836436;
	J[96] += smallinvDAXr5b010_011_pd[453];
	J[80] += x[24]*0.01211002;
	J[92] += smallinvDAXr5b010_011_pd[452];
	J[80] += x[23]*0.0125037;
	J[88] += smallinvDAXr5b010_011_pd[451];
	J[80] += x[22]*0.0138599;
	J[84] += smallinvDAXr5b010_011_pd[450];
	J[80] += x[21]*0.00469936;
	J[116] += smallinvDAXr5b010_011_pd[449];
	J[76] = x[29]*0.00579184;
	J[112] += smallinvDAXr5b010_011_pd[448];
	J[76] += x[28]*0.00717342;
	J[108] += smallinvDAXr5b010_011_pd[447];
	J[76] += x[27]*0.0026202;
	J[104] += smallinvDAXr5b010_011_pd[446];
	J[76] += x[26]*0.00776894;
	J[100] += smallinvDAXr5b010_011_pd[445];
	J[76] += x[25]*0.00817696;
	J[96] += smallinvDAXr5b010_011_pd[444];
	J[76] += x[24]*0.00628822;
	J[92] += smallinvDAXr5b010_011_pd[443];
	J[76] += x[23]*0.00606396;
	J[88] += smallinvDAXr5b010_011_pd[442];
	J[76] += x[22]*0.00736528;
	J[84] += smallinvDAXr5b010_011_pd[441];
	J[76] += x[21]*0.00296964;
	J[80] += smallinvDAXr5b010_011_pd[440];
	J[76] += x[20]*0.01071434;
	J[116] += smallinvDAXr5b010_011_pd[439];
	J[72] = x[29]*0.00592778;
	J[112] += smallinvDAXr5b010_011_pd[438];
	J[72] += x[28]*0.01214842;
	J[108] += smallinvDAXr5b010_011_pd[437];
	J[72] += x[27]*0.00924324;
	J[104] += smallinvDAXr5b010_011_pd[436];
	J[72] += x[26]*0.01664044;
	J[100] += smallinvDAXr5b010_011_pd[435];
	J[72] += x[25]*0.01583126;
	J[96] += smallinvDAXr5b010_011_pd[434];
	J[72] += x[24]*0.01198264;
	J[92] += smallinvDAXr5b010_011_pd[433];
	J[72] += x[23]*0.00838908;
	J[88] += smallinvDAXr5b010_011_pd[432];
	J[72] += x[22]*0.01381284;
	J[84] += smallinvDAXr5b010_011_pd[431];
	J[72] += x[21]*0.00407366;
	J[80] += smallinvDAXr5b010_011_pd[430];
	J[72] += x[20]*0.0126004;
	J[76] += smallinvDAXr5b010_011_pd[429];
	J[72] += x[19]*0.0082848;
	J[116] += smallinvDAXr5b010_011_pd[428];
	J[68] = x[29]*0.00492858;
	J[112] += smallinvDAXr5b010_011_pd[427];
	J[68] += x[28]*0.01070732;
	J[108] += smallinvDAXr5b010_011_pd[426];
	J[68] += x[27]*0.00607998;
	J[104] += smallinvDAXr5b010_011_pd[425];
	J[68] += x[26]*0.01336058;
	J[100] += smallinvDAXr5b010_011_pd[424];
	J[68] += x[25]*0.00825794;
	J[96] += smallinvDAXr5b010_011_pd[423];
	J[68] += x[24]*0.0094743;
	J[92] += smallinvDAXr5b010_011_pd[422];
	J[68] += x[23]*0.01003468;
	J[88] += smallinvDAXr5b010_011_pd[421];
	J[68] += x[22]*0.00910214;
	J[84] += smallinvDAXr5b010_011_pd[420];
	J[68] += x[21]*0.001961404;
	J[80] += smallinvDAXr5b010_011_pd[419];
	J[68] += x[20]*0.01414322;
	J[76] += smallinvDAXr5b010_011_pd[418];
	J[68] += x[19]*0.00861454;
	J[72] += smallinvDAXr5b010_011_pd[417];
	J[68] += x[18]*0.01171594;
	J[116] += smallinvDAXr5b010_011_pd[416];
	J[64] = x[29]*0.00774366;
	J[112] += smallinvDAXr5b010_011_pd[415];
	J[64] += x[28]*0.0200902;
	J[108] += smallinvDAXr5b010_011_pd[414];
	J[64] += x[27]*0.01273162;
	J[104] += smallinvDAXr5b010_011_pd[413];
	J[64] += x[26]*0.0209142;
	J[100] += smallinvDAXr5b010_011_pd[412];
	J[64] += x[25]*0.01089098;
	J[96] += smallinvDAXr5b010_011_pd[411];
	J[64] += x[24]*0.01893;
	J[92] += smallinvDAXr5b010_011_pd[410];
	J[64] += x[23]*0.0183347;
	J[88] += smallinvDAXr5b010_011_pd[409];
	J[64] += x[22]*0.0216678;
	J[84] += smallinvDAXr5b010_011_pd[408];
	J[64] += x[21]*0.01083832;
	J[80] += smallinvDAXr5b010_011_pd[407];
	J[64] += x[20]*0.0270204;
	J[76] += smallinvDAXr5b010_011_pd[406];
	J[64] += x[19]*0.01793624;
	J[72] += smallinvDAXr5b010_011_pd[405];
	J[64] += x[18]*0.0224912;
	J[68] += smallinvDAXr5b010_011_pd[404];
	J[64] += x[17]*0.01858542;
	J[116] += smallinvDAXr5b010_011_pd[403];
	J[60] = x[29]*0.00393866;
	J[112] += smallinvDAXr5b010_011_pd[402];
	J[60] += x[28]*0.00934088;
	J[108] += smallinvDAXr5b010_011_pd[401];
	J[60] += x[27]*0.00246824;
	J[104] += smallinvDAXr5b010_011_pd[400];
	J[60] += x[26]*0.01691522;
	J[100] += smallinvDAXr5b010_011_pd[399];
	J[60] += x[25]*0.0069565;
	J[96] += smallinvDAXr5b010_011_pd[398];
	J[60] += x[24]*0.00677738;
	J[92] += smallinvDAXr5b010_011_pd[397];
	J[60] += x[23]*0.01715638;
	J[88] += smallinvDAXr5b010_011_pd[396];
	J[60] += x[22]*0.00722276;
	J[84] += smallinvDAXr5b010_011_pd[395];
	J[60] += x[21]*0.00512778;
	J[80] += smallinvDAXr5b010_011_pd[394];
	J[60] += x[20]*0.01233794;
	J[76] += smallinvDAXr5b010_011_pd[393];
	J[60] += x[19]*0.00533676;
	J[72] += smallinvDAXr5b010_011_pd[392];
	J[60] += x[18]*0.01161214;
	J[68] += smallinvDAXr5b010_011_pd[391];
	J[60] += x[17]*0.00823288;
	J[64] += smallinvDAXr5b010_011_pd[390];
	J[60] += x[16]*0.01809222;
	J[116] += smallinvDAXr5b010_011_pd[389];
	J[56] = x[29]*0.00502696;
	J[112] += smallinvDAXr5b010_011_pd[388];
	J[56] += x[28]*0.01050128;
	J[108] += smallinvDAXr5b010_011_pd[387];
	J[56] += x[27]*0.00648174;
	J[104] += smallinvDAXr5b010_011_pd[386];
	J[56] += x[26]*0.0119279;
	J[100] += smallinvDAXr5b010_011_pd[385];
	J[56] += x[25]*0.00704584;
	J[96] += smallinvDAXr5b010_011_pd[384];
	J[56] += x[24]*0.00964296;
	J[92] += smallinvDAXr5b010_011_pd[383];
	J[56] += x[23]*0.00853942;
	J[88] += smallinvDAXr5b010_011_pd[382];
	J[56] += x[22]*0.00611934;
	J[84] += smallinvDAXr5b010_011_pd[381];
	J[56] += x[21]*0.00639856;
	J[80] += smallinvDAXr5b010_011_pd[380];
	J[56] += x[20]*0.00937684;
	J[76] += smallinvDAXr5b010_011_pd[379];
	J[56] += x[19]*0.00669072;
	J[72] += smallinvDAXr5b010_011_pd[378];
	J[56] += x[18]*0.01281188;
	J[68] += smallinvDAXr5b010_011_pd[377];
	J[56] += x[17]*0.00926266;
	J[64] += smallinvDAXr5b010_011_pd[376];
	J[56] += x[16]*0.01556958;
	J[60] += smallinvDAXr5b010_011_pd[375];
	J[56] += x[15]*0.00973548;
	J[116] += smallinvDAXr5b010_011_pd[374];
	J[52] = x[29]*0.0077372;
	J[112] += smallinvDAXr5b010_011_pd[373];
	J[52] += x[28]*0.0068342;
	J[108] += smallinvDAXr5b010_011_pd[372];
	J[52] += x[27]*0.00483444;
	J[104] += smallinvDAXr5b010_011_pd[371];
	J[52] += x[26]*0.01128084;
	J[100] += smallinvDAXr5b010_011_pd[370];
	J[52] += x[25]*0.00579636;
	J[96] += smallinvDAXr5b010_011_pd[369];
	J[52] += x[24]*0.00886056;
	J[92] += smallinvDAXr5b010_011_pd[368];
	J[52] += x[23]*0.00817698;
	J[88] += smallinvDAXr5b010_011_pd[367];
	J[52] += x[22]*0.0076843;
	J[84] += smallinvDAXr5b010_011_pd[366];
	J[52] += x[21]*0.00477798;
	J[80] += smallinvDAXr5b010_011_pd[365];
	J[52] += x[20]*0.00995652;
	J[76] += smallinvDAXr5b010_011_pd[364];
	J[52] += x[19]*0.00814342;
	J[72] += smallinvDAXr5b010_011_pd[363];
	J[52] += x[18]*0.00751614;
	J[68] += smallinvDAXr5b010_011_pd[362];
	J[52] += x[17]*0.00826722;
	J[64] += smallinvDAXr5b010_011_pd[361];
	J[52] += x[16]*0.01555038;
	J[60] += smallinvDAXr5b010_011_pd[360];
	J[52] += x[15]*0.00709628;
	J[56] += smallinvDAXr5b010_011_pd[359];
	J[52] += x[14]*0.00635356;
	J[116] += smallinvDAXr5b010_011_pd[358];
	J[48] = x[29]*0.00550608;
	J[112] += smallinvDAXr5b010_011_pd[357];
	J[48] += x[28]*0.00902842;
	J[108] += smallinvDAXr5b010_011_pd[356];
	J[48] += x[27]*0.00587164;
	J[104] += smallinvDAXr5b010_011_pd[355];
	J[48] += x[26]*0.00943468;
	J[100] += smallinvDAXr5b010_011_pd[354];
	J[48] += x[25]*0.00956086;
	J[96] += smallinvDAXr5b010_011_pd[353];
	J[48] += x[24]*0.0072167;
	J[92] += smallinvDAXr5b010_011_pd[352];
	J[48] += x[23]*0.00459074;
	J[88] += smallinvDAXr5b010_011_pd[351];
	J[48] += x[22]*0.00580558;
	J[84] += smallinvDAXr5b010_011_pd[350];
	J[48] += x[21]*0.00410776;
	J[80] += smallinvDAXr5b010_011_pd[349];
	J[48] += x[20]*0.00736548;
	J[76] += smallinvDAXr5b010_011_pd[348];
	J[48] += x[19]*0.00577162;
	J[72] += smallinvDAXr5b010_011_pd[347];
	J[48] += x[18]*0.01033824;
	J[68] += smallinvDAXr5b010_011_pd[346];
	J[48] += x[17]*0.00816594;
	J[64] += smallinvDAXr5b010_011_pd[345];
	J[48] += x[16]*0.00889862;
	J[60] += smallinvDAXr5b010_011_pd[344];
	J[48] += x[15]*0.00379406;
	J[56] += smallinvDAXr5b010_011_pd[343];
	J[48] += x[14]*0.00620178;
	J[52] += smallinvDAXr5b010_011_pd[342];
	J[48] += x[13]*0.0068538;
	J[116] += smallinvDAXr5b010_011_pd[341];
	J[44] = x[29]*0.00598988;
	J[112] += smallinvDAXr5b010_011_pd[340];
	J[44] += x[28]*0.01219462;
	J[108] += smallinvDAXr5b010_011_pd[339];
	J[44] += x[27]*0.00706034;
	J[104] += smallinvDAXr5b010_011_pd[338];
	J[44] += x[26]*0.01241788;
	J[100] += smallinvDAXr5b010_011_pd[337];
	J[44] += x[25]*0.00822682;
	J[96] += smallinvDAXr5b010_011_pd[336];
	J[44] += x[24]*0.01195866;
	J[92] += smallinvDAXr5b010_011_pd[335];
	J[44] += x[23]*0.00931776;
	J[88] += smallinvDAXr5b010_011_pd[334];
	J[44] += x[22]*0.01402198;
	J[84] += smallinvDAXr5b010_011_pd[333];
	J[44] += x[21]*0.00526496;
	J[80] += smallinvDAXr5b010_011_pd[332];
	J[44] += x[20]*0.01374474;
	J[76] += smallinvDAXr5b010_011_pd[331];
	J[44] += x[19]*0.01460644;
	J[72] += smallinvDAXr5b010_011_pd[330];
	J[44] += x[18]*0.01635358;
	J[68] += smallinvDAXr5b010_011_pd[329];
	J[44] += x[17]*0.0125625;
	J[64] += smallinvDAXr5b010_011_pd[328];
	J[44] += x[16]*0.033621;
	J[60] += smallinvDAXr5b010_011_pd[327];
	J[44] += x[15]*0.00937084;
	J[56] += smallinvDAXr5b010_011_pd[326];
	J[44] += x[14]*0.01172114;
	J[52] += smallinvDAXr5b010_011_pd[325];
	J[44] += x[13]*0.00932748;
	J[48] += smallinvDAXr5b010_011_pd[324];
	J[44] += x[12]*0.00812884;
	J[116] += smallinvDAXr5b010_011_pd[323];
	J[40] = x[29]*0.00396162;
	J[112] += smallinvDAXr5b010_011_pd[322];
	J[40] += x[28]*0.00839924;
	J[108] += smallinvDAXr5b010_011_pd[321];
	J[40] += x[27]*0.00518254;
	J[104] += smallinvDAXr5b010_011_pd[320];
	J[40] += x[26]*0.00963386;
	J[100] += smallinvDAXr5b010_011_pd[319];
	J[40] += x[25]*0.00653764;
	J[96] += smallinvDAXr5b010_011_pd[318];
	J[40] += x[24]*0.0079177;
	J[92] += smallinvDAXr5b010_011_pd[317];
	J[40] += x[23]*0.00509366;
	J[88] += smallinvDAXr5b010_011_pd[316];
	J[40] += x[22]*0.00942038;
	J[84] += smallinvDAXr5b010_011_pd[315];
	J[40] += x[21]*0.00238226;
	J[80] += smallinvDAXr5b010_011_pd[314];
	J[40] += x[20]*0.01111462;
	J[76] += smallinvDAXr5b010_011_pd[313];
	J[40] += x[19]*0.0065332;
	J[72] += smallinvDAXr5b010_011_pd[312];
	J[40] += x[18]*0.00881158;
	J[68] += smallinvDAXr5b010_011_pd[311];
	J[40] += x[17]*0.0099023;
	J[64] += smallinvDAXr5b010_011_pd[310];
	J[40] += x[16]*0.0171429;
	J[60] += smallinvDAXr5b010_011_pd[309];
	J[40] += x[15]*0.00784072;
	J[56] += smallinvDAXr5b010_011_pd[308];
	J[40] += x[14]*0.00655088;
	J[52] += smallinvDAXr5b010_011_pd[307];
	J[40] += x[13]*0.00479126;
	J[48] += smallinvDAXr5b010_011_pd[306];
	J[40] += x[12]*0.00580646;
	J[44] += smallinvDAXr5b010_011_pd[305];
	J[40] += x[11]*0.01089978;
	J[116] += smallinvDAXr5b010_011_pd[304];
	J[36] = x[29]*0.00467066;
	J[112] += smallinvDAXr5b010_011_pd[303];
	J[36] += x[28]*0.00817838;
	J[108] += smallinvDAXr5b010_011_pd[302];
	J[36] += x[27]*0.00642736;
	J[104] += smallinvDAXr5b010_011_pd[301];
	J[36] += x[26]*0.01093528;
	J[100] += smallinvDAXr5b010_011_pd[300];
	J[36] += x[25]*0.00811902;
	J[96] += smallinvDAXr5b010_011_pd[299];
	J[36] += x[24]*0.00846572;
	J[92] += smallinvDAXr5b010_011_pd[298];
	J[36] += x[23]*0.00744232;
	J[88] += smallinvDAXr5b010_011_pd[297];
	J[36] += x[22]*0.01110682;
	J[84] += smallinvDAXr5b010_011_pd[296];
	J[36] += x[21]*0.001953884;
	J[80] += smallinvDAXr5b010_011_pd[295];
	J[36] += x[20]*0.012047;
	J[76] += smallinvDAXr5b010_011_pd[294];
	J[36] += x[19]*0.0073598;
	J[72] += smallinvDAXr5b010_011_pd[293];
	J[36] += x[18]*0.01138012;
	J[68] += smallinvDAXr5b010_011_pd[292];
	J[36] += x[17]*0.00921546;
	J[64] += smallinvDAXr5b010_011_pd[291];
	J[36] += x[16]*0.01709622;
	J[60] += smallinvDAXr5b010_011_pd[290];
	J[36] += x[15]*0.00387536;
	J[56] += smallinvDAXr5b010_011_pd[289];
	J[36] += x[14]*0.00814804;
	J[52] += smallinvDAXr5b010_011_pd[288];
	J[36] += x[13]*0.00688756;
	J[48] += smallinvDAXr5b010_011_pd[287];
	J[36] += x[12]*0.00670728;
	J[44] += smallinvDAXr5b010_011_pd[286];
	J[36] += x[11]*0.0099349;
	J[40] += smallinvDAXr5b010_011_pd[285];
	J[36] += x[10]*0.00661128;
	J[116] += smallinvDAXr5b010_011_pd[284];
	J[32] = x[29]*0.00232972;
	J[112] += smallinvDAXr5b010_011_pd[283];
	J[32] += x[28]*0.0023207;
	J[108] += smallinvDAXr5b010_011_pd[282];
	J[32] += x[27]*0.00235362;
	J[104] += smallinvDAXr5b010_011_pd[281];
	J[32] += x[26]*0.00442724;
	J[100] += smallinvDAXr5b010_011_pd[280];
	J[32] += x[25]*0.0051917;
	J[96] += smallinvDAXr5b010_011_pd[279];
	J[32] += x[24]*0.00434258;
	J[92] += smallinvDAXr5b010_011_pd[278];
	J[32] += x[23]*0.000292408;
	J[88] += smallinvDAXr5b010_011_pd[277];
	J[32] += x[22]*0.001457294;
	J[84] += smallinvDAXr5b010_011_pd[276];
	J[32] += x[21]*0.001862472;
	J[80] += smallinvDAXr5b010_011_pd[275];
	J[32] += x[20]*0.00283784;
	J[76] += smallinvDAXr5b010_011_pd[274];
	J[32] += x[19]*0.00339202;
	J[72] += smallinvDAXr5b010_011_pd[273];
	J[32] += x[18]*0.00494078;
	J[68] += smallinvDAXr5b010_011_pd[272];
	J[32] += x[17]*0.00325462;
	J[64] += smallinvDAXr5b010_011_pd[271];
	J[32] += x[16]*0.00309664;
	J[60] += smallinvDAXr5b010_011_pd[270];
	J[32] += x[15]*0.000950274;
	J[56] += smallinvDAXr5b010_011_pd[269];
	J[32] += x[14]*0.00330432;
	J[52] += smallinvDAXr5b010_011_pd[268];
	J[32] += x[13]*0.00260888;
	J[48] += smallinvDAXr5b010_011_pd[267];
	J[32] += x[12]*0.00463422;
	J[44] += smallinvDAXr5b010_011_pd[266];
	J[32] += x[11]*0.00365066;
	J[40] += smallinvDAXr5b010_011_pd[265];
	J[32] += x[10]*0.00239978;
	J[36] += smallinvDAXr5b010_011_pd[264];
	J[32] += x[9]*0.00329222;
	J[116] += smallinvDAXr5b010_011_pd[263];
	J[28] = x[29]*0.00215496;
	J[112] += smallinvDAXr5b010_011_pd[262];
	J[28] += x[28]*0.00292004;
	J[108] += smallinvDAXr5b010_011_pd[261];
	J[28] += x[27]*0.00109948;
	J[104] += smallinvDAXr5b010_011_pd[260];
	J[28] += x[26]*0.001767658;
	J[100] += smallinvDAXr5b010_011_pd[259];
	J[28] += x[25]*0.0031962;
	J[96] += smallinvDAXr5b010_011_pd[258];
	J[28] += x[24]*0.00209498;
	J[92] += smallinvDAXr5b010_011_pd[257];
	J[28] += x[23]*0.001626794;
	J[88] += smallinvDAXr5b010_011_pd[256];
	J[28] += x[22]*0.00275316;
	J[84] += smallinvDAXr5b010_011_pd[255];
	J[28] += x[21]*0.000948594;
	J[80] += smallinvDAXr5b010_011_pd[254];
	J[28] += x[20]*0.001093444;
	J[76] += smallinvDAXr5b010_011_pd[253];
	J[28] += x[19]*0.00464592;
	J[72] += smallinvDAXr5b010_011_pd[252];
	J[28] += x[18]*0.0027675;
	J[68] += smallinvDAXr5b010_011_pd[251];
	J[28] += x[17]*0.00274282;
	J[64] += smallinvDAXr5b010_011_pd[250];
	J[28] += x[16]*0.000920126;
	J[60] += smallinvDAXr5b010_011_pd[249];
	J[28] += x[15]*0.00286866;
	J[56] += smallinvDAXr5b010_011_pd[248];
	J[28] += x[14]*0.00389942;
	J[52] += smallinvDAXr5b010_011_pd[247];
	J[28] += x[13]*0.00294406;
	J[48] += smallinvDAXr5b010_011_pd[246];
	J[28] += x[12]*0.0035513;
	J[44] += smallinvDAXr5b010_011_pd[245];
	J[28] += x[11]*0.00353818;
	J[40] += smallinvDAXr5b010_011_pd[244];
	J[28] += x[10]*0.00290244;
	J[36] += smallinvDAXr5b010_011_pd[243];
	J[28] += x[9]*0.001879822;
	J[32] += smallinvDAXr5b010_011_pd[242];
	J[28] += x[8]*0.00105347;
	J[116] += smallinvDAXr5b010_011_pd[241];
	J[24] = x[29]*0.00341222;
	J[112] += smallinvDAXr5b010_011_pd[240];
	J[24] += x[28]*0.00474356;
	J[108] += smallinvDAXr5b010_011_pd[239];
	J[24] += x[27]*0.00320122;
	J[104] += smallinvDAXr5b010_011_pd[238];
	J[24] += x[26]*0.00530234;
	J[100] += smallinvDAXr5b010_011_pd[237];
	J[24] += x[25]*0.00461784;
	J[96] += smallinvDAXr5b010_011_pd[236];
	J[24] += x[24]*0.00594546;
	J[92] += smallinvDAXr5b010_011_pd[235];
	J[24] += x[23]*0.00344774;
	J[88] += smallinvDAXr5b010_011_pd[234];
	J[24] += x[22]*0.00410122;
	J[84] += smallinvDAXr5b010_011_pd[233];
	J[24] += x[21]*0.001927036;
	J[80] += smallinvDAXr5b010_011_pd[232];
	J[24] += x[20]*0.00746652;
	J[76] += smallinvDAXr5b010_011_pd[231];
	J[24] += x[19]*0.00621206;
	J[72] += smallinvDAXr5b010_011_pd[230];
	J[24] += x[18]*0.00675396;
	J[68] += smallinvDAXr5b010_011_pd[229];
	J[24] += x[17]*0.00710862;
	J[64] += smallinvDAXr5b010_011_pd[228];
	J[24] += x[16]*0.00877926;
	J[60] += smallinvDAXr5b010_011_pd[227];
	J[24] += x[15]*0.001588982;
	J[56] += smallinvDAXr5b010_011_pd[226];
	J[24] += x[14]*0.00634576;
	J[52] += smallinvDAXr5b010_011_pd[225];
	J[24] += x[13]*0.00363244;
	J[48] += smallinvDAXr5b010_011_pd[224];
	J[24] += x[12]*0.0050794;
	J[44] += smallinvDAXr5b010_011_pd[223];
	J[24] += x[11]*0.0073565;
	J[40] += smallinvDAXr5b010_011_pd[222];
	J[24] += x[10]*0.00489378;
	J[36] += smallinvDAXr5b010_011_pd[221];
	J[24] += x[9]*0.00558948;
	J[32] += smallinvDAXr5b010_011_pd[220];
	J[24] += x[8]*0.00224138;
	J[28] += smallinvDAXr5b010_011_pd[219];
	J[24] += x[7]*0.0027426;
	J[116] += smallinvDAXr5b010_011_pd[218];
	J[20] = x[29]*0.0036145;
	J[112] += smallinvDAXr5b010_011_pd[217];
	J[20] += x[28]*0.00730486;
	J[108] += smallinvDAXr5b010_011_pd[216];
	J[20] += x[27]*0.0035648;
	J[104] += smallinvDAXr5b010_011_pd[215];
	J[20] += x[26]*0.00960786;
	J[100] += smallinvDAXr5b010_011_pd[214];
	J[20] += x[25]*0.00595234;
	J[96] += smallinvDAXr5b010_011_pd[213];
	J[20] += x[24]*0.00808494;
	J[92] += smallinvDAXr5b010_011_pd[212];
	J[20] += x[23]*0.0052012;
	J[88] += smallinvDAXr5b010_011_pd[211];
	J[20] += x[22]*0.0063097;
	J[84] += smallinvDAXr5b010_011_pd[210];
	J[20] += x[21]*0.001352278;
	J[80] += smallinvDAXr5b010_011_pd[209];
	J[20] += x[20]*0.0103848;
	J[76] += smallinvDAXr5b010_011_pd[208];
	J[20] += x[19]*0.00549208;
	J[72] += smallinvDAXr5b010_011_pd[207];
	J[20] += x[18]*0.00814434;
	J[68] += smallinvDAXr5b010_011_pd[206];
	J[20] += x[17]*0.00876772;
	J[64] += smallinvDAXr5b010_011_pd[205];
	J[20] += x[16]*0.01491304;
	J[60] += smallinvDAXr5b010_011_pd[204];
	J[20] += x[15]*0.00583332;
	J[56] += smallinvDAXr5b010_011_pd[203];
	J[20] += x[14]*0.00425538;
	J[52] += smallinvDAXr5b010_011_pd[202];
	J[20] += x[13]*0.00638032;
	J[48] += smallinvDAXr5b010_011_pd[201];
	J[20] += x[12]*0.00687526;
	J[44] += smallinvDAXr5b010_011_pd[200];
	J[20] += x[11]*0.00791618;
	J[40] += smallinvDAXr5b010_011_pd[199];
	J[20] += x[10]*0.0064553;
	J[36] += smallinvDAXr5b010_011_pd[198];
	J[20] += x[9]*0.00727798;
	J[32] += smallinvDAXr5b010_011_pd[197];
	J[20] += x[8]*0.0032018;
	J[28] += smallinvDAXr5b010_011_pd[196];
	J[20] += x[7]*0.001157686;
	J[24] += smallinvDAXr5b010_011_pd[195];
	J[20] += x[6]*0.00454154;
	J[116] += smallinvDAXr5b010_011_pd[194];
	J[16] = x[29]*0.001587886;
	J[112] += smallinvDAXr5b010_011_pd[193];
	J[16] += x[28]*0.001644068;
	J[108] += smallinvDAXr5b010_011_pd[192];
	J[16] += x[27]*0.00063941;
	J[104] += smallinvDAXr5b010_011_pd[191];
	J[16] += x[26]*0.000753266;
	J[100] -= smallinvDAXr5b010_011_pd[190];
	J[16] -= x[25]*0.00122625;
	J[96] += smallinvDAXr5b010_011_pd[189];
	J[16] += x[24]*0.001748826;
	J[92] += smallinvDAXr5b010_011_pd[188];
	J[16] += x[23]*0.001961312;
	J[88] += smallinvDAXr5b010_011_pd[187];
	J[16] += x[22]*0.000764624;
	J[84] += smallinvDAXr5b010_011_pd[186];
	J[16] += x[21]*0.001266598;
	J[80] += smallinvDAXr5b010_011_pd[185];
	J[16] += x[20]*0.00199702;
	J[76] += smallinvDAXr5b010_011_pd[184];
	J[16] += x[19]*0.001457998;
	J[72] -= smallinvDAXr5b010_011_pd[183];
	J[16] -= x[18]*0.000289412;
	J[68] += smallinvDAXr5b010_011_pd[182];
	J[16] += x[17]*0.001896292;
	J[64] += smallinvDAXr5b010_011_pd[181];
	J[16] += x[16]*0.001199014;
	J[60] += smallinvDAXr5b010_011_pd[180];
	J[16] += x[15]*0.0001425196;
	J[56] += smallinvDAXr5b010_011_pd[179];
	J[16] += x[14]*0.000645164;
	J[52] += smallinvDAXr5b010_011_pd[178];
	J[16] += x[13]*0.00126883;
	J[48] += smallinvDAXr5b010_011_pd[177];
	J[16] += x[12]*0.0020154;
	J[44] += smallinvDAXr5b010_011_pd[176];
	J[16] += x[11]*0.000587866;
	J[40] += smallinvDAXr5b010_011_pd[175];
	J[16] += x[10]*0.001240914;
	J[36] += smallinvDAXr5b010_011_pd[174];
	J[16] += x[9]*0.00117417;
	J[32] += smallinvDAXr5b010_011_pd[173];
	J[16] += x[8]*0.000718962;
	J[28] += smallinvDAXr5b010_011_pd[172];
	J[16] += x[7]*0.001434726;
	J[24] += smallinvDAXr5b010_011_pd[171];
	J[16] += x[6]*0.001391572;
	J[20] += smallinvDAXr5b010_011_pd[170];
	J[16] += x[5]*0.00226608;
	J[116] += smallinvDAXr5b010_011_pd[169];
	J[12] = x[29]*0.001897386;
	J[112] += smallinvDAXr5b010_011_pd[168];
	J[12] += x[28]*0.00220852;
	J[108] += smallinvDAXr5b010_011_pd[167];
	J[12] += x[27]*0.00170793;
	J[104] += smallinvDAXr5b010_011_pd[166];
	J[12] += x[26]*0.00383714;
	J[100] -= smallinvDAXr5b010_011_pd[165];
	J[12] -= x[25]*0.000779792;
	J[96] += smallinvDAXr5b010_011_pd[164];
	J[12] += x[24]*0.0019381;
	J[92] += smallinvDAXr5b010_011_pd[163];
	J[12] += x[23]*0.00550266;
	J[88] += smallinvDAXr5b010_011_pd[162];
	J[12] += x[22]*0.0028495;
	J[84] += smallinvDAXr5b010_011_pd[161];
	J[12] += x[21]*0.001584414;
	J[80] += smallinvDAXr5b010_011_pd[160];
	J[12] += x[20]*0.00437068;
	J[76] += smallinvDAXr5b010_011_pd[159];
	J[12] += x[19]*0.0042709;
	J[72] += smallinvDAXr5b010_011_pd[158];
	J[12] += x[18]*0.000446818;
	J[68] += smallinvDAXr5b010_011_pd[157];
	J[12] += x[17]*0.00298928;
	J[64] += smallinvDAXr5b010_011_pd[156];
	J[12] += x[16]*0.00552118;
	J[60] += smallinvDAXr5b010_011_pd[155];
	J[12] += x[15]*0.00415534;
	J[56] += smallinvDAXr5b010_011_pd[154];
	J[12] += x[14]*0.001707856;
	J[52] += smallinvDAXr5b010_011_pd[153];
	J[12] += x[13]*0.001764448;
	J[48] += smallinvDAXr5b010_011_pd[152];
	J[12] += x[12]*0.001471884;
	J[44] += smallinvDAXr5b010_011_pd[151];
	J[12] += x[11]*0.00218644;
	J[40] += smallinvDAXr5b010_011_pd[150];
	J[12] += x[10]*0.000948078;
	J[36] += smallinvDAXr5b010_011_pd[149];
	J[12] += x[9]*0.00279536;
	J[32] += smallinvDAXr5b010_011_pd[148];
	J[12] += x[8]*0.00074873;
	J[28] += smallinvDAXr5b010_011_pd[147];
	J[12] += x[7]*0.000487746;
	J[24] += smallinvDAXr5b010_011_pd[146];
	J[12] += x[6]*0.001664882;
	J[20] += smallinvDAXr5b010_011_pd[145];
	J[12] += x[5]*0.0031533;
	J[16] += smallinvDAXr5b010_011_pd[144];
	J[12] += x[4]*0.00365082;
	J[116] += smallinvDAXr5b010_011_pd[143];
	J[8] = x[29]*0.00890208;
	J[112] += smallinvDAXr5b010_011_pd[142];
	J[8] += x[28]*0.01415258;
	J[108] += smallinvDAXr5b010_011_pd[141];
	J[8] += x[27]*0.0100768;
	J[104] += smallinvDAXr5b010_011_pd[140];
	J[8] += x[26]*0.018918;
	J[100] += smallinvDAXr5b010_011_pd[139];
	J[8] += x[25]*0.01305808;
	J[96] += smallinvDAXr5b010_011_pd[138];
	J[8] += x[24]*0.01601196;
	J[92] += smallinvDAXr5b010_011_pd[137];
	J[8] += x[23]*0.01157254;
	J[88] += smallinvDAXr5b010_011_pd[136];
	J[8] += x[22]*0.0173249;
	J[84] += smallinvDAXr5b010_011_pd[135];
	J[8] += x[21]*0.006361;
	J[80] += smallinvDAXr5b010_011_pd[134];
	J[8] += x[20]*0.020394;
	J[76] += smallinvDAXr5b010_011_pd[133];
	J[8] += x[19]*0.0169342;
	J[72] += smallinvDAXr5b010_011_pd[132];
	J[8] += x[18]*0.0210518;
	J[68] += smallinvDAXr5b010_011_pd[131];
	J[8] += x[17]*0.01504214;
	J[64] += smallinvDAXr5b010_011_pd[130];
	J[8] += x[16]*0.040104;
	J[60] += smallinvDAXr5b010_011_pd[129];
	J[8] += x[15]*0.01033796;
	J[56] += smallinvDAXr5b010_011_pd[128];
	J[8] += x[14]*0.01419766;
	J[52] += smallinvDAXr5b010_011_pd[127];
	J[8] += x[13]*0.01358566;
	J[48] += smallinvDAXr5b010_011_pd[126];
	J[8] += x[12]*0.01266506;
	J[44] += smallinvDAXr5b010_011_pd[125];
	J[8] += x[11]*0.0264968;
	J[40] += smallinvDAXr5b010_011_pd[124];
	J[8] += x[10]*0.01249836;
	J[36] += smallinvDAXr5b010_011_pd[123];
	J[8] += x[9]*0.0146019;
	J[32] += smallinvDAXr5b010_011_pd[122];
	J[8] += x[8]*0.00616612;
	J[28] += smallinvDAXr5b010_011_pd[121];
	J[8] += x[7]*0.00444448;
	J[24] += smallinvDAXr5b010_011_pd[120];
	J[8] += x[6]*0.00899714;
	J[20] += smallinvDAXr5b010_011_pd[119];
	J[8] += x[5]*0.01256412;
	J[16] += smallinvDAXr5b010_011_pd[118];
	J[8] += x[4]*0.001239314;
	J[12] += smallinvDAXr5b010_011_pd[117];
	J[8] += x[3]*0.00299428;
	J[116] += smallinvDAXr5b010_011_pd[116];
	J[4] = x[29]*0.00574964;
	J[112] += smallinvDAXr5b010_011_pd[115];
	J[4] += x[28]*0.01096178;
	J[108] += smallinvDAXr5b010_011_pd[114];
	J[4] += x[27]*0.00544162;
	J[104] += smallinvDAXr5b010_011_pd[113];
	J[4] += x[26]*0.01408844;
	J[100] += smallinvDAXr5b010_011_pd[112];
	J[4] += x[25]*0.00754144;
	J[96] += smallinvDAXr5b010_011_pd[111];
	J[4] += x[24]*0.01009426;
	J[92] += smallinvDAXr5b010_011_pd[110];
	J[4] += x[23]*0.01091018;
	J[88] += smallinvDAXr5b010_011_pd[109];
	J[4] += x[22]*0.01486022;
	J[84] += smallinvDAXr5b010_011_pd[108];
	J[4] += x[21]*0.00271;
	J[80] += smallinvDAXr5b010_011_pd[107];
	J[4] += x[20]*0.0160783;
	J[76] += smallinvDAXr5b010_011_pd[106];
	J[4] += x[19]*0.0096635;
	J[72] += smallinvDAXr5b010_011_pd[105];
	J[4] += x[18]*0.01127964;
	J[68] += smallinvDAXr5b010_011_pd[104];
	J[4] += x[17]*0.01321532;
	J[64] += smallinvDAXr5b010_011_pd[103];
	J[4] += x[16]*0.0251538;
	J[60] += smallinvDAXr5b010_011_pd[102];
	J[4] += x[15]*0.0094047;
	J[56] += smallinvDAXr5b010_011_pd[101];
	J[4] += x[14]*0.00869872;
	J[52] += smallinvDAXr5b010_011_pd[100];
	J[4] += x[13]*0.00804604;
	J[48] += smallinvDAXr5b010_011_pd[99];
	J[4] += x[12]*0.00675858;
	J[44] += smallinvDAXr5b010_011_pd[98];
	J[4] += x[11]*0.01253232;
	J[40] += smallinvDAXr5b010_011_pd[97];
	J[4] += x[10]*0.01131902;
	J[36] += smallinvDAXr5b010_011_pd[96];
	J[4] += x[9]*0.00924638;
	J[32] += smallinvDAXr5b010_011_pd[95];
	J[4] += x[8]*0.00184686;
	J[28] += smallinvDAXr5b010_011_pd[94];
	J[4] += x[7]*0.00312866;
	J[24] += smallinvDAXr5b010_011_pd[93];
	J[4] += x[6]*0.00604454;
	J[20] += smallinvDAXr5b010_011_pd[92];
	J[4] += x[5]*0.00861376;
	J[16] += smallinvDAXr5b010_011_pd[91];
	J[4] += x[4]*0.001773554;
	J[12] += smallinvDAXr5b010_011_pd[90];
	J[4] += x[3]*0.00394608;
	J[8] += smallinvDAXr5b010_011_pd[89];
	J[4] += x[2]*0.01583972;
	J[116] += smallinvDAXr5b010_011_pd[88];
	J[0] = x[29]*0.00366754;
	J[112] += smallinvDAXr5b010_011_pd[87];
	J[0] += x[28]*0.0061908;
	J[108] += smallinvDAXr5b010_011_pd[86];
	J[0] += x[27]*0.00386642;
	J[104] += smallinvDAXr5b010_011_pd[85];
	J[0] += x[26]*0.00729094;
	J[100] += smallinvDAXr5b010_011_pd[84];
	J[0] += x[25]*0.00243422;
	J[96] += smallinvDAXr5b010_011_pd[83];
	J[0] += x[24]*0.00708258;
	J[92] += smallinvDAXr5b010_011_pd[82];
	J[0] += x[23]*0.00543966;
	J[88] += smallinvDAXr5b010_011_pd[81];
	J[0] += x[22]*0.0071572;
	J[84] += smallinvDAXr5b010_011_pd[80];
	J[0] += x[21]*0.00245846;
	J[80] += smallinvDAXr5b010_011_pd[79];
	J[0] += x[20]*0.0087283;
	J[76] += smallinvDAXr5b010_011_pd[78];
	J[0] += x[19]*0.00512922;
	J[72] += smallinvDAXr5b010_011_pd[77];
	J[0] += x[18]*0.00716212;
	J[68] += smallinvDAXr5b010_011_pd[76];
	J[0] += x[17]*0.007501;
	J[64] += smallinvDAXr5b010_011_pd[75];
	J[0] += x[16]*0.01432596;
	J[60] += smallinvDAXr5b010_011_pd[74];
	J[0] += x[15]*0.00613326;
	J[56] += smallinvDAXr5b010_011_pd[73];
	J[0] += x[14]*0.00577634;
	J[52] += smallinvDAXr5b010_011_pd[72];
	J[0] += x[13]*0.00610824;
	J[48] += smallinvDAXr5b010_011_pd[71];
	J[0] += x[12]*0.00478224;
	J[44] += smallinvDAXr5b010_011_pd[70];
	J[0] += x[11]*0.00745224;
	J[40] += smallinvDAXr5b010_011_pd[69];
	J[0] += x[10]*0.00556768;
	J[36] += smallinvDAXr5b010_011_pd[68];
	J[0] += x[9]*0.00531452;
	J[32] += smallinvDAXr5b010_011_pd[67];
	J[0] += x[8]*0.000805982;
	J[28] += smallinvDAXr5b010_011_pd[66];
	J[0] += x[7]*0.000691196;
	J[24] += smallinvDAXr5b010_011_pd[65];
	J[0] += x[6]*0.0051287;
	J[20] += smallinvDAXr5b010_011_pd[64];
	J[0] += x[5]*0.00561078;
	J[16] += smallinvDAXr5b010_011_pd[63];
	J[0] += x[4]*0.001821292;
	J[12] += smallinvDAXr5b010_011_pd[62];
	J[0] += x[3]*0.00248004;
	J[8] += smallinvDAXr5b010_011_pd[61];
	J[0] += x[2]*0.00860972;
	J[4] += smallinvDAXr5b010_011_pd[60];
	J[0] += x[1]*0.00901964;
	J[116] += 0.00469456*smallinvDAXr5b010_011_pd[59];
	J[112] += 0.00818114*smallinvDAXr5b010_011_pd[57];
	J[108] += 0.00569465*smallinvDAXr5b010_011_pd[55];
	J[104] += 0.0123235*smallinvDAXr5b010_011_pd[53];
	J[100] += 0.0102616*smallinvDAXr5b010_011_pd[51];
	J[96] += 0.00718697*smallinvDAXr5b010_011_pd[49];
	J[92] += 0.0128605*smallinvDAXr5b010_011_pd[47];
	J[88] += 0.0153425*smallinvDAXr5b010_011_pd[45];
	J[84] += 0.00668043*smallinvDAXr5b010_011_pd[43];
	J[80] += 0.0128973*smallinvDAXr5b010_011_pd[41];
	J[76] += 0.0122291*smallinvDAXr5b010_011_pd[39];
	J[72] += 0.0124118*smallinvDAXr5b010_011_pd[37];
	J[68] += 0.00894867*smallinvDAXr5b010_011_pd[35];
	J[64] += 0.0488863*smallinvDAXr5b010_011_pd[33];
	J[60] += 0.0206685*smallinvDAXr5b010_011_pd[31];
	J[56] += 0.00899168*smallinvDAXr5b010_011_pd[29];
	J[52] += 0.0104282*smallinvDAXr5b010_011_pd[27];
	J[48] += 0.00697595*smallinvDAXr5b010_011_pd[25];
	J[44] += 0.0129271*smallinvDAXr5b010_011_pd[23];
	J[40] += 0.00613034*smallinvDAXr5b010_011_pd[21];
	J[36] += 0.00668969*smallinvDAXr5b010_011_pd[19];
	J[32] += 0.00372788*smallinvDAXr5b010_011_pd[17];
	J[28] += 0.00368008*smallinvDAXr5b010_011_pd[15];
	J[24] += 0.00421051*smallinvDAXr5b010_011_pd[13];
	J[20] += 0.00516451*smallinvDAXr5b010_011_pd[11];
	J[16] += 0.00267064*smallinvDAXr5b010_011_pd[9];
	J[12] += 0.00399551*smallinvDAXr5b010_011_pd[7];
	J[8] += 0.0221075*smallinvDAXr5b010_011_pd[5];
	J[4] += 0.0103737*smallinvDAXr5b010_011_pd[3];
	J[0] += 0.00558391*smallinvDAXr5b010_011_pd[1];
	J[120] = -1.;

   /*** derivatives for constraint 2 ***/

	J[1] = 0.00218236;
	J[5] = -0.00115175;
	J[9] = -0.00795114;
	J[13] = 0.011626;
	J[17] = 0.0084202;
	J[21] = 0.00496825;
	J[25] = 0.00254677;
	J[29] = -0.00234318;
	J[33] = -0.00770481;
	J[37] = -0.00223195;
	J[41] = -0.00151299;
	J[45] = -0.00448068;
	J[49] = 0.00386372;
	J[53] = -0.0112346;
	J[57] = -0.00311219;
	J[61] = 0.00357072;
	J[65] = -0.00928342;
	J[69] = -0.00268175;
	J[73] = -0.00631856;
	J[77] = -0.00211388;
	J[81] = 0.0132599;
	J[85] = 0.00445572;
	J[89] = 0.0067442;
	J[93] = 0.0185808;
	J[97] = 0.00160132;
	J[101] = -0.00624596;
	J[105] = 0.00206;
	J[109] = 0.00229918;
	J[113] = 0.00165023;
	J[117] = 0.0035383;

   /*** derivatives for constraint 3 ***/

	J[2] = 39.19;
	J[6] = 41.47;
	J[10] = 5.71;
	J[14] = 53.59;
	J[18] = 43.65;
	J[22] = 85.46;
	J[26] = 39.7;
	J[30] = 44.91;
	J[34] = 9.6;
	J[38] = 11.26;
	J[42] = 39.56;
	J[46] = 46.;
	J[50] = 45.25;
	J[54] = 21.9;
	J[58] = 11.85;
	J[62] = 37.4;
	J[66] = 4.75;
	J[70] = 44.44;
	J[74] = 80.5;
	J[78] = 49.46;
	J[82] = 67.02;
	J[86] = 59.25;
	J[90] = 71.5;
	J[94] = 48.8;
	J[98] = 73.22;
	J[102] = 101.9;
	J[106] = 20.06;
	J[110] = 36.33;
	J[114] = 41.31;
	J[118] = 53.09;

   /*** derivatives for constraint 4 ***/

	J[3] = 39.19;
	J[7] = 41.47;
	J[11] = 5.71;
	J[15] = 53.59;
	J[19] = 43.65;
	J[23] = 85.46;
	J[27] = 39.7;
	J[31] = 44.91;
	J[35] = 9.6;
	J[39] = 11.26;
	J[43] = 39.56;
	J[47] = 46.;
	J[51] = 45.25;
	J[55] = 21.9;
	J[59] = 11.85;
	J[63] = 37.4;
	J[67] = 4.75;
	J[71] = 44.44;
	J[75] = 80.5;
	J[79] = 49.46;
	J[83] = 67.02;
	J[87] = 59.25;
	J[91] = 71.5;
	J[95] = 48.8;
	J[99] = 73.22;
	J[103] = 101.9;
	J[107] = 20.06;
	J[111] = 36.33;
	J[115] = 41.31;
	J[119] = 53.09;
	}
}
#ifdef __cplusplus
	}
#endif
