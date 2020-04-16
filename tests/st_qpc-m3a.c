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
 fint st_qpc_m3a_auxcom_[1] = { 0 /* nlc */ };
 fint st_qpc_m3a_funcom_[114] = {
	10 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	97 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	11,
	21,
	31,
	41,
	51,
	61,
	69,
	78,
	88,
	98,

	/* rownos */
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
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
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
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10 };

 real st_qpc_m3a_boundc_[1+20+20] /* Infinity, variable bounds, constraint bounds */ = {
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
		600.1,
		-1.7e308,
		310.5,
		-1.7e308,
		1800.,
		-1.7e308,
		3850.,
		-1.7e308,
		18.6,
		-1.7e308,
		198.7,
		-1.7e308,
		882.,
		-1.7e308,
		4200.,
		-1.7e308,
		40.25,
		-1.7e308,
		327.};

 real st_qpc_m3a_x0comn_[10] = {
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

 static real st_qpc_m3a_pd[100];
static real st_qpc_m3a_old_x[10];
static int st_qpc_m3a_xkind = -1;

 static int
st_qpc_m3a_xcheck(real *x)
{
	real *x1 = st_qpc_m3a_old_x, *xe = x + 10;
	errno = 0;
	if (st_qpc_m3a_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_qpc_m3a_xkind = 0;
	return 1;
	}
 real
st_qpc_m3a_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (st_qpc_m3a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_qpc_m3a_pd[0] = 6.8 * x[0];
	v[0] = st_qpc_m3a_pd[0] * x[0];
	st_qpc_m3a_pd[1] = 4.6 * x[0];
	v[1] = st_qpc_m3a_pd[1] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[2] = 7.9 * x[0];
	v[1] = st_qpc_m3a_pd[2] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[3] = 5.1 * x[0];
	v[1] = st_qpc_m3a_pd[3] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[4] = 6.9 * x[0];
	v[1] = st_qpc_m3a_pd[4] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[5] = 6.8 * x[0];
	v[1] = st_qpc_m3a_pd[5] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[6] = 4.6 * x[0];
	v[1] = st_qpc_m3a_pd[6] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[7] = 7.9 * x[0];
	v[1] = st_qpc_m3a_pd[7] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[8] = 5.1 * x[0];
	v[1] = st_qpc_m3a_pd[8] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[9] = 6.9 * x[0];
	v[1] = st_qpc_m3a_pd[9] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[10] = 4.6 * x[1];
	v[1] = st_qpc_m3a_pd[10] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[11] = 5.5 * x[1];
	v[1] = st_qpc_m3a_pd[11] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[12] = 5.8 * x[1];
	v[1] = st_qpc_m3a_pd[12] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[13] = 4.5 * x[1];
	v[1] = st_qpc_m3a_pd[13] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[14] = 6. * x[1];
	v[1] = st_qpc_m3a_pd[14] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[15] = 4.6 * x[1];
	v[1] = st_qpc_m3a_pd[15] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[16] = 5.5 * x[1];
	v[1] = st_qpc_m3a_pd[16] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[17] = 5.8 * x[1];
	v[1] = st_qpc_m3a_pd[17] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[18] = 4.5 * x[1];
	v[1] = st_qpc_m3a_pd[18] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[19] = 6. * x[1];
	v[1] = st_qpc_m3a_pd[19] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[20] = 7.9 * x[2];
	v[1] = st_qpc_m3a_pd[20] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[21] = 5.8 * x[2];
	v[1] = st_qpc_m3a_pd[21] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[22] = 13.3 * x[2];
	v[1] = st_qpc_m3a_pd[22] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[23] = 6.7 * x[2];
	v[1] = st_qpc_m3a_pd[23] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[24] = 8.9 * x[2];
	v[1] = st_qpc_m3a_pd[24] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[25] = 7.9 * x[2];
	v[1] = st_qpc_m3a_pd[25] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[26] = 5.8 * x[2];
	v[1] = st_qpc_m3a_pd[26] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[27] = 13.3 * x[2];
	v[1] = st_qpc_m3a_pd[27] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[28] = 6.7 * x[2];
	v[1] = st_qpc_m3a_pd[28] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[29] = 8.9 * x[2];
	v[1] = st_qpc_m3a_pd[29] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[30] = 5.1 * x[3];
	v[1] = st_qpc_m3a_pd[30] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[31] = 4.5 * x[3];
	v[1] = st_qpc_m3a_pd[31] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[32] = 6.7 * x[3];
	v[1] = st_qpc_m3a_pd[32] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[33] = 6.9 * x[3];
	v[1] = st_qpc_m3a_pd[33] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[34] = 5.8 * x[3];
	v[1] = st_qpc_m3a_pd[34] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[35] = 5.1 * x[3];
	v[1] = st_qpc_m3a_pd[35] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[36] = 4.5 * x[3];
	v[1] = st_qpc_m3a_pd[36] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[37] = 6.7 * x[3];
	v[1] = st_qpc_m3a_pd[37] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[38] = 6.9 * x[3];
	v[1] = st_qpc_m3a_pd[38] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[39] = 5.8 * x[3];
	v[1] = st_qpc_m3a_pd[39] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[40] = 6.9 * x[4];
	v[1] = st_qpc_m3a_pd[40] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[41] = 6. * x[4];
	v[1] = st_qpc_m3a_pd[41] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[42] = 8.9 * x[4];
	v[1] = st_qpc_m3a_pd[42] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[43] = 5.8 * x[4];
	v[1] = st_qpc_m3a_pd[43] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[44] = 11.9 * x[4];
	v[1] = st_qpc_m3a_pd[44] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[45] = 6.9 * x[4];
	v[1] = st_qpc_m3a_pd[45] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[46] = 6. * x[4];
	v[1] = st_qpc_m3a_pd[46] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[47] = 8.9 * x[4];
	v[1] = st_qpc_m3a_pd[47] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[48] = 5.8 * x[4];
	v[1] = st_qpc_m3a_pd[48] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[49] = 11.9 * x[4];
	v[1] = st_qpc_m3a_pd[49] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[50] = 6.8 * x[5];
	v[1] = st_qpc_m3a_pd[50] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[51] = 4.6 * x[5];
	v[1] = st_qpc_m3a_pd[51] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[52] = 7.9 * x[5];
	v[1] = st_qpc_m3a_pd[52] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[53] = 5.1 * x[5];
	v[1] = st_qpc_m3a_pd[53] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[54] = 6.9 * x[5];
	v[1] = st_qpc_m3a_pd[54] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[55] = 6.8 * x[5];
	v[1] = st_qpc_m3a_pd[55] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[56] = 4.6 * x[5];
	v[1] = st_qpc_m3a_pd[56] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[57] = 7.9 * x[5];
	v[1] = st_qpc_m3a_pd[57] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[58] = 5.1 * x[5];
	v[1] = st_qpc_m3a_pd[58] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[59] = 6.9 * x[5];
	v[1] = st_qpc_m3a_pd[59] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[60] = 4.6 * x[6];
	v[1] = st_qpc_m3a_pd[60] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[61] = 5.5 * x[6];
	v[1] = st_qpc_m3a_pd[61] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[62] = 5.8 * x[6];
	v[1] = st_qpc_m3a_pd[62] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[63] = 4.5 * x[6];
	v[1] = st_qpc_m3a_pd[63] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[64] = 6. * x[6];
	v[1] = st_qpc_m3a_pd[64] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[65] = 4.6 * x[6];
	v[1] = st_qpc_m3a_pd[65] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[66] = 5.5 * x[6];
	v[1] = st_qpc_m3a_pd[66] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[67] = 5.8 * x[6];
	v[1] = st_qpc_m3a_pd[67] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[68] = 4.5 * x[6];
	v[1] = st_qpc_m3a_pd[68] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[69] = 6. * x[6];
	v[1] = st_qpc_m3a_pd[69] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[70] = 7.9 * x[7];
	v[1] = st_qpc_m3a_pd[70] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[71] = 5.8 * x[7];
	v[1] = st_qpc_m3a_pd[71] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[72] = 13.3 * x[7];
	v[1] = st_qpc_m3a_pd[72] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[73] = 6.7 * x[7];
	v[1] = st_qpc_m3a_pd[73] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[74] = 8.9 * x[7];
	v[1] = st_qpc_m3a_pd[74] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[75] = 7.9 * x[7];
	v[1] = st_qpc_m3a_pd[75] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[76] = 5.8 * x[7];
	v[1] = st_qpc_m3a_pd[76] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[77] = 13.3 * x[7];
	v[1] = st_qpc_m3a_pd[77] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[78] = 6.7 * x[7];
	v[1] = st_qpc_m3a_pd[78] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[79] = 8.9 * x[7];
	v[1] = st_qpc_m3a_pd[79] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[80] = 5.1 * x[8];
	v[1] = st_qpc_m3a_pd[80] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[81] = 4.5 * x[8];
	v[1] = st_qpc_m3a_pd[81] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[82] = 6.7 * x[8];
	v[1] = st_qpc_m3a_pd[82] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[83] = 6.9 * x[8];
	v[1] = st_qpc_m3a_pd[83] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[84] = 5.8 * x[8];
	v[1] = st_qpc_m3a_pd[84] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[85] = 5.1 * x[8];
	v[1] = st_qpc_m3a_pd[85] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[86] = 4.5 * x[8];
	v[1] = st_qpc_m3a_pd[86] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[87] = 6.7 * x[8];
	v[1] = st_qpc_m3a_pd[87] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[88] = 6.9 * x[8];
	v[1] = st_qpc_m3a_pd[88] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[89] = 5.8 * x[8];
	v[1] = st_qpc_m3a_pd[89] * x[9];
	v[0] += v[1];
	st_qpc_m3a_pd[90] = 6.9 * x[9];
	v[1] = st_qpc_m3a_pd[90] * x[0];
	v[0] += v[1];
	st_qpc_m3a_pd[91] = 6. * x[9];
	v[1] = st_qpc_m3a_pd[91] * x[1];
	v[0] += v[1];
	st_qpc_m3a_pd[92] = 8.9 * x[9];
	v[1] = st_qpc_m3a_pd[92] * x[2];
	v[0] += v[1];
	st_qpc_m3a_pd[93] = 5.8 * x[9];
	v[1] = st_qpc_m3a_pd[93] * x[3];
	v[0] += v[1];
	st_qpc_m3a_pd[94] = 11.9 * x[9];
	v[1] = st_qpc_m3a_pd[94] * x[4];
	v[0] += v[1];
	st_qpc_m3a_pd[95] = 6.9 * x[9];
	v[1] = st_qpc_m3a_pd[95] * x[5];
	v[0] += v[1];
	st_qpc_m3a_pd[96] = 6. * x[9];
	v[1] = st_qpc_m3a_pd[96] * x[6];
	v[0] += v[1];
	st_qpc_m3a_pd[97] = 8.9 * x[9];
	v[1] = st_qpc_m3a_pd[97] * x[7];
	v[0] += v[1];
	st_qpc_m3a_pd[98] = 5.8 * x[9];
	v[1] = st_qpc_m3a_pd[98] * x[8];
	v[0] += v[1];
	st_qpc_m3a_pd[99] = 11.9 * x[9];
	v[1] = st_qpc_m3a_pd[99] * x[9];
	v[0] += v[1];
	v[1] = -v[0];
	rv = v[1] + 10.*x[0];
	rv += 10.*x[1];
	rv += 10.*x[2];
	rv += 10.*x[3];
	rv += 10.*x[4];
	rv += 10.*x[5];
	rv += 10.*x[6];
	rv += 10.*x[7];
	rv += 10.*x[8];
	rv += 10.*x[9];
	;}

	if (wantfg & 2) {
	g[9] = -st_qpc_m3a_pd[99] + 10.;
	g[9] -= x[9]*11.9;
	g[8] = -st_qpc_m3a_pd[98] + 10.;
	g[9] -= x[8]*5.8;
	g[7] = -st_qpc_m3a_pd[97] + 10.;
	g[9] -= x[7]*8.9;
	g[6] = -st_qpc_m3a_pd[96] + 10.;
	g[9] -= x[6]*6.;
	g[5] = -st_qpc_m3a_pd[95] + 10.;
	g[9] -= x[5]*6.9;
	g[4] = -st_qpc_m3a_pd[94] + 10.;
	g[9] -= x[4]*11.9;
	g[3] = -st_qpc_m3a_pd[93] + 10.;
	g[9] -= x[3]*5.8;
	g[2] = -st_qpc_m3a_pd[92] + 10.;
	g[9] -= x[2]*8.9;
	g[1] = -st_qpc_m3a_pd[91] + 10.;
	g[9] -= x[1]*6.;
	g[0] = -st_qpc_m3a_pd[90] + 10.;
	g[9] -= x[0]*6.9;
	g[9] -= st_qpc_m3a_pd[89];
	g[8] -= x[9]*5.8;
	g[8] -= st_qpc_m3a_pd[88];
	g[8] -= x[8]*6.9;
	g[7] -= st_qpc_m3a_pd[87];
	g[8] -= x[7]*6.7;
	g[6] -= st_qpc_m3a_pd[86];
	g[8] -= x[6]*4.5;
	g[5] -= st_qpc_m3a_pd[85];
	g[8] -= x[5]*5.1;
	g[4] -= st_qpc_m3a_pd[84];
	g[8] -= x[4]*5.8;
	g[3] -= st_qpc_m3a_pd[83];
	g[8] -= x[3]*6.9;
	g[2] -= st_qpc_m3a_pd[82];
	g[8] -= x[2]*6.7;
	g[1] -= st_qpc_m3a_pd[81];
	g[8] -= x[1]*4.5;
	g[0] -= st_qpc_m3a_pd[80];
	g[8] -= x[0]*5.1;
	g[9] -= st_qpc_m3a_pd[79];
	g[7] -= x[9]*8.9;
	g[8] -= st_qpc_m3a_pd[78];
	g[7] -= x[8]*6.7;
	g[7] -= st_qpc_m3a_pd[77];
	g[7] -= x[7]*13.3;
	g[6] -= st_qpc_m3a_pd[76];
	g[7] -= x[6]*5.8;
	g[5] -= st_qpc_m3a_pd[75];
	g[7] -= x[5]*7.9;
	g[4] -= st_qpc_m3a_pd[74];
	g[7] -= x[4]*8.9;
	g[3] -= st_qpc_m3a_pd[73];
	g[7] -= x[3]*6.7;
	g[2] -= st_qpc_m3a_pd[72];
	g[7] -= x[2]*13.3;
	g[1] -= st_qpc_m3a_pd[71];
	g[7] -= x[1]*5.8;
	g[0] -= st_qpc_m3a_pd[70];
	g[7] -= x[0]*7.9;
	g[9] -= st_qpc_m3a_pd[69];
	g[6] -= x[9]*6.;
	g[8] -= st_qpc_m3a_pd[68];
	g[6] -= x[8]*4.5;
	g[7] -= st_qpc_m3a_pd[67];
	g[6] -= x[7]*5.8;
	g[6] -= st_qpc_m3a_pd[66];
	g[6] -= x[6]*5.5;
	g[5] -= st_qpc_m3a_pd[65];
	g[6] -= x[5]*4.6;
	g[4] -= st_qpc_m3a_pd[64];
	g[6] -= x[4]*6.;
	g[3] -= st_qpc_m3a_pd[63];
	g[6] -= x[3]*4.5;
	g[2] -= st_qpc_m3a_pd[62];
	g[6] -= x[2]*5.8;
	g[1] -= st_qpc_m3a_pd[61];
	g[6] -= x[1]*5.5;
	g[0] -= st_qpc_m3a_pd[60];
	g[6] -= x[0]*4.6;
	g[9] -= st_qpc_m3a_pd[59];
	g[5] -= x[9]*6.9;
	g[8] -= st_qpc_m3a_pd[58];
	g[5] -= x[8]*5.1;
	g[7] -= st_qpc_m3a_pd[57];
	g[5] -= x[7]*7.9;
	g[6] -= st_qpc_m3a_pd[56];
	g[5] -= x[6]*4.6;
	g[5] -= st_qpc_m3a_pd[55];
	g[5] -= x[5]*6.8;
	g[4] -= st_qpc_m3a_pd[54];
	g[5] -= x[4]*6.9;
	g[3] -= st_qpc_m3a_pd[53];
	g[5] -= x[3]*5.1;
	g[2] -= st_qpc_m3a_pd[52];
	g[5] -= x[2]*7.9;
	g[1] -= st_qpc_m3a_pd[51];
	g[5] -= x[1]*4.6;
	g[0] -= st_qpc_m3a_pd[50];
	g[5] -= x[0]*6.8;
	g[9] -= st_qpc_m3a_pd[49];
	g[4] -= x[9]*11.9;
	g[8] -= st_qpc_m3a_pd[48];
	g[4] -= x[8]*5.8;
	g[7] -= st_qpc_m3a_pd[47];
	g[4] -= x[7]*8.9;
	g[6] -= st_qpc_m3a_pd[46];
	g[4] -= x[6]*6.;
	g[5] -= st_qpc_m3a_pd[45];
	g[4] -= x[5]*6.9;
	g[4] -= st_qpc_m3a_pd[44];
	g[4] -= x[4]*11.9;
	g[3] -= st_qpc_m3a_pd[43];
	g[4] -= x[3]*5.8;
	g[2] -= st_qpc_m3a_pd[42];
	g[4] -= x[2]*8.9;
	g[1] -= st_qpc_m3a_pd[41];
	g[4] -= x[1]*6.;
	g[0] -= st_qpc_m3a_pd[40];
	g[4] -= x[0]*6.9;
	g[9] -= st_qpc_m3a_pd[39];
	g[3] -= x[9]*5.8;
	g[8] -= st_qpc_m3a_pd[38];
	g[3] -= x[8]*6.9;
	g[7] -= st_qpc_m3a_pd[37];
	g[3] -= x[7]*6.7;
	g[6] -= st_qpc_m3a_pd[36];
	g[3] -= x[6]*4.5;
	g[5] -= st_qpc_m3a_pd[35];
	g[3] -= x[5]*5.1;
	g[4] -= st_qpc_m3a_pd[34];
	g[3] -= x[4]*5.8;
	g[3] -= st_qpc_m3a_pd[33];
	g[3] -= x[3]*6.9;
	g[2] -= st_qpc_m3a_pd[32];
	g[3] -= x[2]*6.7;
	g[1] -= st_qpc_m3a_pd[31];
	g[3] -= x[1]*4.5;
	g[0] -= st_qpc_m3a_pd[30];
	g[3] -= x[0]*5.1;
	g[9] -= st_qpc_m3a_pd[29];
	g[2] -= x[9]*8.9;
	g[8] -= st_qpc_m3a_pd[28];
	g[2] -= x[8]*6.7;
	g[7] -= st_qpc_m3a_pd[27];
	g[2] -= x[7]*13.3;
	g[6] -= st_qpc_m3a_pd[26];
	g[2] -= x[6]*5.8;
	g[5] -= st_qpc_m3a_pd[25];
	g[2] -= x[5]*7.9;
	g[4] -= st_qpc_m3a_pd[24];
	g[2] -= x[4]*8.9;
	g[3] -= st_qpc_m3a_pd[23];
	g[2] -= x[3]*6.7;
	g[2] -= st_qpc_m3a_pd[22];
	g[2] -= x[2]*13.3;
	g[1] -= st_qpc_m3a_pd[21];
	g[2] -= x[1]*5.8;
	g[0] -= st_qpc_m3a_pd[20];
	g[2] -= x[0]*7.9;
	g[9] -= st_qpc_m3a_pd[19];
	g[1] -= x[9]*6.;
	g[8] -= st_qpc_m3a_pd[18];
	g[1] -= x[8]*4.5;
	g[7] -= st_qpc_m3a_pd[17];
	g[1] -= x[7]*5.8;
	g[6] -= st_qpc_m3a_pd[16];
	g[1] -= x[6]*5.5;
	g[5] -= st_qpc_m3a_pd[15];
	g[1] -= x[5]*4.6;
	g[4] -= st_qpc_m3a_pd[14];
	g[1] -= x[4]*6.;
	g[3] -= st_qpc_m3a_pd[13];
	g[1] -= x[3]*4.5;
	g[2] -= st_qpc_m3a_pd[12];
	g[1] -= x[2]*5.8;
	g[1] -= st_qpc_m3a_pd[11];
	g[1] -= x[1]*5.5;
	g[0] -= st_qpc_m3a_pd[10];
	g[1] -= x[0]*4.6;
	g[9] -= st_qpc_m3a_pd[9];
	g[0] -= x[9]*6.9;
	g[8] -= st_qpc_m3a_pd[8];
	g[0] -= x[8]*5.1;
	g[7] -= st_qpc_m3a_pd[7];
	g[0] -= x[7]*7.9;
	g[6] -= st_qpc_m3a_pd[6];
	g[0] -= x[6]*4.6;
	g[5] -= st_qpc_m3a_pd[5];
	g[0] -= x[5]*6.8;
	g[4] -= st_qpc_m3a_pd[4];
	g[0] -= x[4]*6.9;
	g[3] -= st_qpc_m3a_pd[3];
	g[0] -= x[3]*5.1;
	g[2] -= st_qpc_m3a_pd[2];
	g[0] -= x[2]*7.9;
	g[1] -= st_qpc_m3a_pd[1];
	g[0] -= x[1]*4.6;
	g[0] -= st_qpc_m3a_pd[0];
	g[0] -= x[0]*6.8;
	}

	return rv;
}

 void
st_qpc_m3a_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_qpc_m3a_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 20.*x[0];
	t1 += 20.*x[1];
	t1 += 60.*x[2];
	t1 += 60.*x[3];
	t1 += 60.*x[4];
	t1 += 60.*x[5];
	t1 += 5.*x[6];
	t1 += 45.*x[7];
	t1 += 55.*x[8];
	t1 += 65.*x[9];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 5.*x[0];
	t1 += 7.*x[1];
	t1 += 3.*x[2];
	t1 += 8.*x[3];
	t1 += 13.*x[4];
	t1 += 13.*x[5];
	t1 += 2.*x[6];
	t1 += 14.*x[7];
	t1 += 14.*x[8];
	t1 += 14.*x[9];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 100.*x[0];
	t1 += 130.*x[1];
	t1 += 50.*x[2];
	t1 += 70.*x[3];
	t1 += 70.*x[4];
	t1 += 70.*x[5];
	t1 += 20.*x[6];
	t1 += 80.*x[7];
	t1 += 80.*x[8];
	t1 += 80.*x[9];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 200.*x[0];
	t1 += 280.*x[1];
	t1 += 100.*x[2];
	t1 += 200.*x[3];
	t1 += 250.*x[4];
	t1 += 280.*x[5];
	t1 += 100.*x[6];
	t1 += 180.*x[7];
	t1 += 200.*x[8];
	t1 += 220.*x[9];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = 2.*x[0];
	t1 += 2.*x[1];
	t1 += 4.*x[2];
	t1 += 4.*x[3];
	t1 += 4.*x[4];
	t1 += 4.*x[5];
	t1 += 2.*x[6];
	t1 += 6.*x[7];
	t1 += 6.*x[8];
	t1 += 6.*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 4.*x[0];
	t1 += 8.*x[1];
	t1 += 2.*x[2];
	t1 += 6.*x[3];
	t1 += 10.*x[4];
	t1 += 10.*x[5];
	t1 += 5.*x[6];
	t1 += 10.*x[7];
	t1 += 10.*x[8];
	t1 += 10.*x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = 60.*x[0];
	t1 += 110.*x[1];
	t1 += 20.*x[2];
	t1 += 40.*x[3];
	t1 += 60.*x[4];
	t1 += 70.*x[5];
	t1 += 10.*x[6];
	t1 += 40.*x[7];
	t1 += 50.*x[8];
	t1 += 50.*x[9];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 150.*x[0];
	t1 += 210.*x[1];
	t1 += 40.*x[2];
	t1 += 70.*x[3];
	t1 += 90.*x[4];
	t1 += 105.*x[5];
	t1 += 60.*x[6];
	t1 += 100.*x[7];
	t1 += 140.*x[8];
	t1 += 180.*x[9];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 80.*x[0];
	t1 += 100.*x[1];
	t1 += 6.*x[2];
	t1 += 16.*x[3];
	t1 += 20.*x[4];
	t1 += 22.*x[5];
	t1 += 20.*x[7];
	t1 += 30.*x[8];
	t1 += 30.*x[9];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 40.*x[0];
	t1 += 40.*x[1];
	t1 += 12.*x[2];
	t1 += 20.*x[3];
	t1 += 24.*x[4];
	t1 += 28.*x[5];
	t1 += 40.*x[8];
	t1 += 50.*x[9];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 20.;
	J[10] = 20.;
	J[20] = 60.;
	J[30] = 60.;
	J[40] = 60.;
	J[50] = 60.;
	J[60] = 5.;
	J[68] = 45.;
	J[77] = 55.;
	J[87] = 65.;

   /*** derivatives for constraint 2 ***/

	J[1] = 5.;
	J[11] = 7.;
	J[21] = 3.;
	J[31] = 8.;
	J[41] = 13.;
	J[51] = 13.;
	J[61] = 2.;
	J[69] = 14.;
	J[78] = 14.;
	J[88] = 14.;

   /*** derivatives for constraint 3 ***/

	J[2] = 100.;
	J[12] = 130.;
	J[22] = 50.;
	J[32] = 70.;
	J[42] = 70.;
	J[52] = 70.;
	J[62] = 20.;
	J[70] = 80.;
	J[79] = 80.;
	J[89] = 80.;

   /*** derivatives for constraint 4 ***/

	J[3] = 200.;
	J[13] = 280.;
	J[23] = 100.;
	J[33] = 200.;
	J[43] = 250.;
	J[53] = 280.;
	J[63] = 100.;
	J[71] = 180.;
	J[80] = 200.;
	J[90] = 220.;

   /*** derivatives for constraint 5 ***/

	J[4] = 2.;
	J[14] = 2.;
	J[24] = 4.;
	J[34] = 4.;
	J[44] = 4.;
	J[54] = 4.;
	J[64] = 2.;
	J[72] = 6.;
	J[81] = 6.;
	J[91] = 6.;

   /*** derivatives for constraint 6 ***/

	J[5] = 4.;
	J[15] = 8.;
	J[25] = 2.;
	J[35] = 6.;
	J[45] = 10.;
	J[55] = 10.;
	J[65] = 5.;
	J[73] = 10.;
	J[82] = 10.;
	J[92] = 10.;

   /*** derivatives for constraint 7 ***/

	J[6] = 60.;
	J[16] = 110.;
	J[26] = 20.;
	J[36] = 40.;
	J[46] = 60.;
	J[56] = 70.;
	J[66] = 10.;
	J[74] = 40.;
	J[83] = 50.;
	J[93] = 50.;

   /*** derivatives for constraint 8 ***/

	J[7] = 150.;
	J[17] = 210.;
	J[27] = 40.;
	J[37] = 70.;
	J[47] = 90.;
	J[57] = 105.;
	J[67] = 60.;
	J[75] = 100.;
	J[84] = 140.;
	J[94] = 180.;

   /*** derivatives for constraint 9 ***/

	J[8] = 80.;
	J[18] = 100.;
	J[28] = 6.;
	J[38] = 16.;
	J[48] = 20.;
	J[58] = 22.;
	J[76] = 20.;
	J[85] = 30.;
	J[95] = 30.;

   /*** derivatives for constraint 10 ***/

	J[9] = 40.;
	J[19] = 40.;
	J[29] = 12.;
	J[39] = 20.;
	J[49] = 24.;
	J[59] = 28.;
	J[86] = 40.;
	J[96] = 50.;
	}
}
#ifdef __cplusplus
	}
#endif
