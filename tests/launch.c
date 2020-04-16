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
 fint launch_auxcom_[1] = { 12 /* nlc */ };
 fint launch_funcom_[130] = {
	38 /* nvar */,
	1 /* nobj */,
	28 /* ncon */,
	85 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	12,
	19,
	22,
	25,
	28,
	30,
	32,
	34,
	37,
	40,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	51,
	53,
	55,
	56,
	57,
	58,
	62,
	67,
	73,
	76,
	76,
	76,
	76,
	77,
	78,
	79,
	81,
	83,
	85,
	86,

	/* rownos */
	1,
	7,
	16,
	22,
	25,
	5,
	8,
	16,
	17,
	23,
	26,
	6,
	9,
	16,
	17,
	18,
	24,
	27,
	1,
	7,
	19,
	2,
	8,
	20,
	3,
	9,
	21,
	4,
	10,
	5,
	11,
	6,
	12,
	1,
	4,
	16,
	2,
	5,
	17,
	3,
	6,
	18,
	1,
	2,
	3,
	7,
	8,
	9,
	7,
	10,
	8,
	11,
	9,
	12,
	13,
	14,
	15,
	13,
	16,
	22,
	25,
	14,
	16,
	17,
	23,
	26,
	15,
	16,
	17,
	18,
	24,
	27,
	16,
	17,
	18,
	19,
	20,
	21,
	10,
	28,
	11,
	28,
	12,
	28,
	28 };

 real launch_boundc_[1+76+56] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		50.,
		1.7e308,
		50.,
		1.7e308,
		50.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		0.25,
		0.3,
		0.24,
		0.29,
		0.16,
		0.21,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		1.2,
		1.4,
		0.6,
		0.75,
		0.7,
		0.9,
		100.,
		1.7e308,
		100.,
		1.7e308,
		100.,
		1.7e308,
		240.,
		290.,
		240.,
		290.,
		340.,
		375.,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		5.,
		1.7e308,
		5.,
		1.7e308,
		5.,
		1.7e308,
		2.5,
		4.,
		125.,
		150.,
		75.,
		100.,
		50.,
		70.,
		20.,
		1.7e308,
		20.,
		1.7e308,
		20.,
		1.7e308,
		1000.,
		1.7e308,
		1000.,
		1.7e308,
		1000.,
		1.7e308,
		35000.,
		50000.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		20.,
		20.,
		20.,
		20.,
		20.,
		20.,
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
		0.,
		0.};

 real launch_x0comn_[38] = {
		2176.,
		564.,
		144.,
		1.,
		1.,
		1.,
		0.3,
		0.29,
		0.21,
		0.,
		0.,
		0.,
		1.2,
		0.6,
		0.7,
		155.,
		314.,
		403.,
		240.,
		240.,
		340.,
		1.,
		1.,
		1.,
		136.,
		47.,
		16.,
		2.5,
		125.,
		75.,
		50.,
		746.,
		96.,
		129.,
		1000.,
		1000.,
		1000.,
		38632. };

 static real launch_pd[105];
static real launch_old_x[38];
static int launch_xkind = -1;

 static int
launch_xcheck(real *x)
{
	real *x1 = launch_old_x, *xe = x + 38;
	errno = 0;
	if (launch_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	launch_xkind = 0;
	return 1;
	}
 real
launch_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[27], dv[44], rv;
	fint wantfg = *needfg;
	if (launch_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	launch_pd[18] = pow(x[21], 1.2781);
	if (errno) in_trouble2("pow",x[21],1.2781);
	if (x[21] > 0.) {
	launch_pd[15] = 1.2781*(launch_pd[18]/x[21]);
	} else if (1.2781 > 1.) {
	launch_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],1.2781);
	}
	launch_pd[17] = pow(x[24], -0.1959);
	if (errno) in_trouble2("pow",x[24],-0.1959);
	if (x[24] > 0.) {
	launch_pd[16] = -0.1959*(launch_pd[17]/x[24]);
	} else if (-0.1959 > 1.) {
	launch_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],-0.1959);
	}
	launch_pd[19] = launch_pd[18] * launch_pd[17];
	launch_pd[21] = pow(x[6], 2.4242);
	if (errno) in_trouble2("pow",x[6],2.4242);
	if (x[6] > 0.) {
	launch_pd[20] = 2.4242*(launch_pd[21]/x[6]);
	} else if (2.4242 > 1.) {
	launch_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],2.4242);
	}
	launch_pd[22] = launch_pd[19] * launch_pd[21];
	launch_pd[24] = pow(x[3], 0.38745);
	if (errno) in_trouble2("pow",x[3],0.38745);
	if (x[3] > 0.) {
	launch_pd[23] = 0.38745*(launch_pd[24]/x[3]);
	} else if (0.38745 > 1.) {
	launch_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.38745);
	}
	launch_pd[25] = launch_pd[22] * launch_pd[24];
	launch_pd[27] = pow(x[0], -0.9904);
	if (errno) in_trouble2("pow",x[0],-0.9904);
	if (x[0] > 0.) {
	launch_pd[26] = -0.9904*(launch_pd[27]/x[0]);
	} else if (-0.9904 > 1.) {
	launch_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],-0.9904);
	}
	launch_pd[28] = launch_pd[25] * launch_pd[27];
	v[5] = 5272.77 * launch_pd[28];
	launch_pd[32] = pow(x[22], 1.2781);
	if (errno) in_trouble2("pow",x[22],1.2781);
	if (x[22] > 0.) {
	launch_pd[29] = 1.2781*(launch_pd[32]/x[22]);
	} else if (1.2781 > 1.) {
	launch_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],1.2781);
	}
	launch_pd[31] = pow(x[25], -0.1959);
	if (errno) in_trouble2("pow",x[25],-0.1959);
	if (x[25] > 0.) {
	launch_pd[30] = -0.1959*(launch_pd[31]/x[25]);
	} else if (-0.1959 > 1.) {
	launch_pd[30] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],-0.1959);
	}
	launch_pd[33] = launch_pd[32] * launch_pd[31];
	launch_pd[35] = pow(x[7], 2.4242);
	if (errno) in_trouble2("pow",x[7],2.4242);
	if (x[7] > 0.) {
	launch_pd[34] = 2.4242*(launch_pd[35]/x[7]);
	} else if (2.4242 > 1.) {
	launch_pd[34] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],2.4242);
	}
	launch_pd[36] = launch_pd[33] * launch_pd[35];
	launch_pd[38] = pow(x[4], 0.38745);
	if (errno) in_trouble2("pow",x[4],0.38745);
	if (x[4] > 0.) {
	launch_pd[37] = 0.38745*(launch_pd[38]/x[4]);
	} else if (0.38745 > 1.) {
	launch_pd[37] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.38745);
	}
	launch_pd[39] = launch_pd[36] * launch_pd[38];
	launch_pd[41] = pow(x[1], -0.9904);
	if (errno) in_trouble2("pow",x[1],-0.9904);
	if (x[1] > 0.) {
	launch_pd[40] = -0.9904*(launch_pd[41]/x[1]);
	} else if (-0.9904 > 1.) {
	launch_pd[40] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],-0.9904);
	}
	launch_pd[42] = launch_pd[39] * launch_pd[41];
	v[11] = 5272.77 * launch_pd[42];
	v[5] += v[11];
	launch_pd[46] = pow(x[23], 1.2781);
	if (errno) in_trouble2("pow",x[23],1.2781);
	if (x[23] > 0.) {
	launch_pd[43] = 1.2781*(launch_pd[46]/x[23]);
	} else if (1.2781 > 1.) {
	launch_pd[43] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],1.2781);
	}
	launch_pd[45] = pow(x[26], -0.1959);
	if (errno) in_trouble2("pow",x[26],-0.1959);
	if (x[26] > 0.) {
	launch_pd[44] = -0.1959*(launch_pd[45]/x[26]);
	} else if (-0.1959 > 1.) {
	launch_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],-0.1959);
	}
	launch_pd[47] = launch_pd[46] * launch_pd[45];
	launch_pd[49] = pow(x[8], 2.4242);
	if (errno) in_trouble2("pow",x[8],2.4242);
	if (x[8] > 0.) {
	launch_pd[48] = 2.4242*(launch_pd[49]/x[8]);
	} else if (2.4242 > 1.) {
	launch_pd[48] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],2.4242);
	}
	launch_pd[50] = launch_pd[47] * launch_pd[49];
	launch_pd[52] = pow(x[5], 0.38745);
	if (errno) in_trouble2("pow",x[5],0.38745);
	if (x[5] > 0.) {
	launch_pd[51] = 0.38745*(launch_pd[52]/x[5]);
	} else if (0.38745 > 1.) {
	launch_pd[51] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.38745);
	}
	launch_pd[53] = launch_pd[50] * launch_pd[52];
	launch_pd[55] = pow(x[2], -0.9904);
	if (errno) in_trouble2("pow",x[2],-0.9904);
	if (x[2] > 0.) {
	launch_pd[54] = -0.9904*(launch_pd[55]/x[2]);
	} else if (-0.9904 > 1.) {
	launch_pd[54] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],-0.9904);
	}
	launch_pd[56] = launch_pd[53] * launch_pd[55];
	v[16] = 5272.77 * launch_pd[56];
	v[5] += v[16];
	v[16] = pow(x[21], 0.3322);
	if (errno) in_trouble2("pow",x[21],0.3322);
	if (x[21] > 0.) {
	launch_pd[57] = 0.3322*(v[16]/x[21]);
	} else if (0.3322 > 1.) {
	launch_pd[57] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],0.3322);
	}
	launch_pd[58] = 10.3027592771433 * v[16];
	launch_pd[60] = pow(x[6], -1.5935);
	if (errno) in_trouble2("pow",x[6],-1.5935);
	if (x[6] > 0.) {
	launch_pd[59] = -1.5935*(launch_pd[60]/x[6]);
	} else if (-1.5935 > 1.) {
	launch_pd[59] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],-1.5935);
	}
	launch_pd[61] = launch_pd[58] * launch_pd[60];
	launch_pd[63] = pow(x[0], 0.2362);
	if (errno) in_trouble2("pow",x[0],0.2362);
	if (x[0] > 0.) {
	launch_pd[62] = 0.2362*(launch_pd[63]/x[0]);
	} else if (0.2362 > 1.) {
	launch_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.2362);
	}
	launch_pd[64] = launch_pd[61] * launch_pd[63];
	launch_pd[66] = pow(x[28], 0.1079);
	if (errno) in_trouble2("pow",x[28],0.1079);
	if (x[28] > 0.) {
	launch_pd[65] = 0.1079*(launch_pd[66]/x[28]);
	} else if (0.1079 > 1.) {
	launch_pd[65] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],0.1079);
	}
	launch_pd[67] = launch_pd[64] * launch_pd[66];
	v[19] = 0.185214 * launch_pd[67];
	v[5] += v[19];
	v[19] = pow(x[22], 0.3322);
	if (errno) in_trouble2("pow",x[22],0.3322);
	if (x[22] > 0.) {
	launch_pd[68] = 0.3322*(v[19]/x[22]);
	} else if (0.3322 > 1.) {
	launch_pd[68] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],0.3322);
	}
	launch_pd[69] = 10.3027592771433 * v[19];
	launch_pd[71] = pow(x[7], -1.5935);
	if (errno) in_trouble2("pow",x[7],-1.5935);
	if (x[7] > 0.) {
	launch_pd[70] = -1.5935*(launch_pd[71]/x[7]);
	} else if (-1.5935 > 1.) {
	launch_pd[70] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],-1.5935);
	}
	launch_pd[72] = launch_pd[69] * launch_pd[71];
	launch_pd[74] = pow(x[1], 0.2362);
	if (errno) in_trouble2("pow",x[1],0.2362);
	if (x[1] > 0.) {
	launch_pd[73] = 0.2362*(launch_pd[74]/x[1]);
	} else if (0.2362 > 1.) {
	launch_pd[73] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.2362);
	}
	launch_pd[75] = launch_pd[72] * launch_pd[74];
	launch_pd[77] = pow(x[29], 0.1079);
	if (errno) in_trouble2("pow",x[29],0.1079);
	if (x[29] > 0.) {
	launch_pd[76] = 0.1079*(launch_pd[77]/x[29]);
	} else if (0.1079 > 1.) {
	launch_pd[76] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],0.1079);
	}
	launch_pd[78] = launch_pd[75] * launch_pd[77];
	v[22] = 0.185214 * launch_pd[78];
	v[5] += v[22];
	v[22] = pow(x[23], 0.3322);
	if (errno) in_trouble2("pow",x[23],0.3322);
	if (x[23] > 0.) {
	launch_pd[79] = 0.3322*(v[22]/x[23]);
	} else if (0.3322 > 1.) {
	launch_pd[79] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],0.3322);
	}
	launch_pd[80] = 7.94328234724281 * v[22];
	launch_pd[82] = pow(x[8], -1.5935);
	if (errno) in_trouble2("pow",x[8],-1.5935);
	if (x[8] > 0.) {
	launch_pd[81] = -1.5935*(launch_pd[82]/x[8]);
	} else if (-1.5935 > 1.) {
	launch_pd[81] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],-1.5935);
	}
	launch_pd[83] = launch_pd[80] * launch_pd[82];
	launch_pd[85] = pow(x[2], 0.2362);
	if (errno) in_trouble2("pow",x[2],0.2362);
	if (x[2] > 0.) {
	launch_pd[84] = 0.2362*(launch_pd[85]/x[2]);
	} else if (0.2362 > 1.) {
	launch_pd[84] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.2362);
	}
	launch_pd[86] = launch_pd[83] * launch_pd[85];
	launch_pd[88] = pow(x[30], 0.1079);
	if (errno) in_trouble2("pow",x[30],0.1079);
	if (x[30] > 0.) {
	launch_pd[87] = 0.1079*(launch_pd[88]/x[30]);
	} else if (0.1079 > 1.) {
	launch_pd[87] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],0.1079);
	}
	launch_pd[89] = launch_pd[86] * launch_pd[88];
	v[25] = 0.185214 * launch_pd[89];
	v[5] += v[25];
	v[25] = 0.001 * x[31];
	v[26] = pow(v[25], -0.146);
	if (errno) in_trouble2("pow",v[25],-0.146);
	if (v[25] > 0.) {
	launch_pd[90] = -0.146*(v[26]/v[25]);
	} else if (-0.146 > 1.) {
	launch_pd[90] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[25],-0.146);
	}
	v[26] *= 160.99;
	v[5] += v[26];
	v[26] = 0.001 * x[31];
	v[25] = pow(v[26], 0.648);
	if (errno) in_trouble2("pow",v[26],0.648);
	if (v[26] > 0.) {
	launch_pd[91] = 0.648*(v[25]/v[26]);
	} else if (0.648 > 1.) {
	launch_pd[91] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[26],0.648);
	}
	v[25] *= 282.874;
	v[5] += v[25];
	v[25] = 0.001 * x[32];
	v[26] = pow(v[25], -0.146);
	if (errno) in_trouble2("pow",v[25],-0.146);
	if (v[25] > 0.) {
	launch_pd[92] = -0.146*(v[26]/v[25]);
	} else if (-0.146 > 1.) {
	launch_pd[92] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[25],-0.146);
	}
	v[26] *= 160.99;
	v[5] += v[26];
	v[26] = 0.001 * x[32];
	v[25] = pow(v[26], 0.648);
	if (errno) in_trouble2("pow",v[26],0.648);
	if (v[26] > 0.) {
	launch_pd[93] = 0.648*(v[25]/v[26]);
	} else if (0.648 > 1.) {
	launch_pd[93] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[26],0.648);
	}
	v[25] *= 282.874;
	v[5] += v[25];
	v[25] = 0.001 * x[33];
	v[26] = pow(v[25], 0.539);
	if (errno) in_trouble2("pow",v[25],0.539);
	if (v[25] > 0.) {
	launch_pd[94] = 0.539*(v[26]/v[25]);
	} else if (0.539 > 1.) {
	launch_pd[94] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[25],0.539);
	}
	v[26] *= 181.806;
	v[5] += v[26];
	v[26] = 0.001 * x[33];
	v[25] = pow(v[26], 0.772);
	if (errno) in_trouble2("pow",v[26],0.772);
	if (v[26] > 0.) {
	launch_pd[95] = 0.772*(v[25]/v[26]);
	} else if (0.772 > 1.) {
	launch_pd[95] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[26],0.772);
	}
	v[25] *= 232.57;
	v[5] += v[25];
	v[25] = 0.001 * x[31];
	v[26] = pow(v[25], 0.736);
	if (errno) in_trouble2("pow",v[25],0.736);
	if (v[25] > 0.) {
	launch_pd[96] = 0.736*(v[26]/v[25]);
	} else if (0.736 > 1.) {
	launch_pd[96] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[25],0.736);
	}
	v[26] *= 95.39876781947974;
	v[5] += v[26];
	v[26] = 0.001 * x[31];
	v[25] = pow(v[26], -0.229);
	if (errno) in_trouble2("pow",v[26],-0.229);
	if (v[26] > 0.) {
	launch_pd[97] = -0.229*(v[25]/v[26]);
	} else if (-0.229 > 1.) {
	launch_pd[97] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[26],-0.229);
	}
	v[25] *= 37.04924645807137;
	v[5] += v[25];
	v[25] = 0.001 * x[32];
	v[26] = pow(v[25], 0.736);
	if (errno) in_trouble2("pow",v[25],0.736);
	if (v[25] > 0.) {
	launch_pd[98] = 0.736*(v[26]/v[25]);
	} else if (0.736 > 1.) {
	launch_pd[98] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[25],0.736);
	}
	v[26] *= 95.39876781947974;
	v[5] += v[26];
	v[26] = 0.001 * x[32];
	v[25] = pow(v[26], -0.229);
	if (errno) in_trouble2("pow",v[26],-0.229);
	if (v[26] > 0.) {
	launch_pd[99] = -0.229*(v[25]/v[26]);
	} else if (-0.229 > 1.) {
	launch_pd[99] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[26],-0.229);
	}
	v[25] *= 37.04924645807137;
	v[5] += v[25];
	v[25] = 0.001 * x[33];
	v[26] = pow(v[25], -1.33);
	if (errno) in_trouble2("pow",v[25],-1.33);
	if (v[25] > 0.) {
	launch_pd[100] = -1.33*(v[26]/v[25]);
	} else if (-1.33 > 1.) {
	launch_pd[100] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[25],-1.33);
	}
	v[26] *= -0.0071937965719016984;
	v[5] += v[26];
	v[26] = 0.001 * x[33];
	v[25] = pow(v[26], 0.498);
	if (errno) in_trouble2("pow",v[26],0.498);
	if (v[26] > 0.) {
	launch_pd[101] = 0.498*(v[25]/v[26]);
	} else if (0.498 > 1.) {
	launch_pd[101] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[26],0.498);
	}
	v[25] *= 447.0728183625525;
	v[5] += v[25];
	v[25] = 1000. * x[27];
	v[26] = pow(v[25], 0.786);
	if (errno) in_trouble2("pow",v[25],0.786);
	if (v[25] > 0.) {
	launch_pd[102] = 0.786*(v[26]/v[25]);
	} else if (0.786 > 1.) {
	launch_pd[102] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[25],0.786);
	}
	v[26] *= 0.1637577;
	v[5] += v[26];
	v[26] = 1000. * x[27];
	v[25] = pow(v[26], 0.786);
	if (errno) in_trouble2("pow",v[26],0.786);
	if (v[26] > 0.) {
	launch_pd[103] = 0.786*(v[25]/v[26]);
	} else if (0.786 > 1.) {
	launch_pd[103] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[26],0.786);
	}
	v[25] *= 0.125678613298076;
	v[5] += v[25];
	v[25] = 0.003 * x[0];
	v[26] = 0.003 * x[1];
	v[25] += v[26];
	v[26] = 0.003 * x[2];
	v[25] += v[26];
	v[26] = pow(v[25], 0.46);
	if (errno) in_trouble2("pow",v[25],0.46);
	if (v[25] > 0.) {
	launch_pd[104] = 0.46*(v[26]/v[25]);
	} else if (0.46 > 1.) {
	launch_pd[104] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[25],0.46);
	}
	v[26] *= 85.;
	v[5] += v[26];
	v[5] += -850.76;
	rv = v[5] + 0.007927717453312685*x[31];
	rv += 0.007927717453312685*x[32];
	rv += 0.0006000523169326759*x[33];
	;}

	if (wantfg & 2) {
	dv[0] = 85.*launch_pd[104];
	dv[1] = dv[0];
	g[2] = dv[1]*0.003;
	dv[2] = dv[0];
	g[1] = dv[2]*0.003;
	g[0] = dv[0]*0.003;
	dv[3] = 0.125678613298076*launch_pd[103];
	g[27] = dv[3]*1000.;
	dv[4] = 0.1637577*launch_pd[102];
	g[27] += dv[4]*1000.;
	dv[5] = 447.0728183625525*launch_pd[101];
	g[33] = dv[5]*0.001 + 0.0006000523169326759;
	dv[6] = -0.0071937965719016984*launch_pd[100];
	g[33] += dv[6]*0.001;
	dv[7] = 37.04924645807137*launch_pd[99];
	g[32] = dv[7]*0.001 + 0.007927717453312685;
	dv[8] = 95.39876781947974*launch_pd[98];
	g[32] += dv[8]*0.001;
	dv[9] = 37.04924645807137*launch_pd[97];
	g[31] = dv[9]*0.001 + 0.007927717453312685;
	dv[10] = 95.39876781947974*launch_pd[96];
	g[31] += dv[10]*0.001;
	dv[11] = 232.57*launch_pd[95];
	g[33] += dv[11]*0.001;
	dv[12] = 181.806*launch_pd[94];
	g[33] += dv[12]*0.001;
	dv[13] = 282.874*launch_pd[93];
	g[32] += dv[13]*0.001;
	dv[14] = 160.99*launch_pd[92];
	g[32] += dv[14]*0.001;
	dv[15] = 282.874*launch_pd[91];
	g[31] += dv[15]*0.001;
	dv[16] = 160.99*launch_pd[90];
	g[31] += dv[16]*0.001;
	dv[17] = 0.185214*launch_pd[86];
	dv[18] = 0.185214*launch_pd[88];
	g[30] = dv[17]*launch_pd[87];
	dv[19] = dv[18]*launch_pd[83];
	dv[18] *= launch_pd[85];
	g[2] += dv[19]*launch_pd[84];
	dv[20] = dv[18]*launch_pd[80];
	dv[18] *= launch_pd[82];
	g[8] = dv[20]*launch_pd[81];
	dv[18] *= 7.94328234724281;
	g[23] = dv[18]*launch_pd[79];
	dv[21] = 0.185214*launch_pd[75];
	dv[22] = 0.185214*launch_pd[77];
	g[29] = dv[21]*launch_pd[76];
	dv[23] = dv[22]*launch_pd[72];
	dv[22] *= launch_pd[74];
	g[1] += dv[23]*launch_pd[73];
	dv[24] = dv[22]*launch_pd[69];
	dv[22] *= launch_pd[71];
	g[7] = dv[24]*launch_pd[70];
	dv[22] *= 10.3027592771433;
	g[22] = dv[22]*launch_pd[68];
	dv[25] = 0.185214*launch_pd[64];
	dv[26] = 0.185214*launch_pd[66];
	g[28] = dv[25]*launch_pd[65];
	dv[27] = dv[26]*launch_pd[61];
	dv[26] *= launch_pd[63];
	g[0] += dv[27]*launch_pd[62];
	dv[28] = dv[26]*launch_pd[58];
	dv[26] *= launch_pd[60];
	g[6] = dv[28]*launch_pd[59];
	dv[26] *= 10.3027592771433;
	g[21] = dv[26]*launch_pd[57];
	dv[29] = 5272.77*launch_pd[53];
	dv[30] = 5272.77*launch_pd[55];
	g[2] += dv[29]*launch_pd[54];
	dv[31] = dv[30]*launch_pd[50];
	dv[30] *= launch_pd[52];
	g[5] = dv[31]*launch_pd[51];
	dv[32] = dv[30]*launch_pd[47];
	dv[30] *= launch_pd[49];
	g[8] += dv[32]*launch_pd[48];
	dv[33] = dv[30]*launch_pd[46];
	dv[30] *= launch_pd[45];
	g[26] = dv[33]*launch_pd[44];
	g[23] += dv[30]*launch_pd[43];
	dv[34] = 5272.77*launch_pd[39];
	dv[35] = 5272.77*launch_pd[41];
	g[1] += dv[34]*launch_pd[40];
	dv[36] = dv[35]*launch_pd[36];
	dv[35] *= launch_pd[38];
	g[4] = dv[36]*launch_pd[37];
	dv[37] = dv[35]*launch_pd[33];
	dv[35] *= launch_pd[35];
	g[7] += dv[37]*launch_pd[34];
	dv[38] = dv[35]*launch_pd[32];
	dv[35] *= launch_pd[31];
	g[25] = dv[38]*launch_pd[30];
	g[22] += dv[35]*launch_pd[29];
	dv[39] = 5272.77*launch_pd[25];
	dv[40] = 5272.77*launch_pd[27];
	g[0] += dv[39]*launch_pd[26];
	dv[41] = dv[40]*launch_pd[22];
	dv[40] *= launch_pd[24];
	g[3] = dv[41]*launch_pd[23];
	dv[42] = dv[40]*launch_pd[19];
	dv[40] *= launch_pd[21];
	g[6] += dv[42]*launch_pd[20];
	dv[43] = dv[40]*launch_pd[18];
	dv[40] *= launch_pd[17];
	g[24] = dv[43]*launch_pd[16];
	g[21] += dv[40]*launch_pd[15];
	}

	return rv;
}

 void
launch_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[1];
	real t1;
	fint wantfg = *needfg;
	if (launch_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[12] * x[9];
	t1 = v[0] + -x[3];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[13] * x[10];
	t1 = v[0] + -x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[14] * x[11];
	t1 = v[0] + -x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	launch_pd[0] = 1. - x[6];
	v[1] = launch_pd[0] * x[9];
	t1 = v[1] + -x[0];
	c[3] = t1;

  /***  constraint 5  ***/

	launch_pd[1] = 1. - x[7];
	v[1] = launch_pd[1] * x[10];
	t1 = v[1] + -x[1];
	c[4] = t1;

  /***  constraint 6  ***/

	launch_pd[2] = 1. - x[8];
	v[1] = launch_pd[2] * x[11];
	t1 = v[1] + -x[2];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[18] * x[0];
	v[1] = x[3] * x[15];
	v[2] = v[0] - v[1];
	c[6] = v[2];

  /***  constraint 8  ***/

	v[0] = x[19] * x[1];
	v[1] = x[4] * x[16];
	v[2] = v[0] - v[1];
	c[7] = v[2];

  /***  constraint 9  ***/

	v[0] = x[20] * x[2];
	v[1] = x[5] * x[17];
	v[2] = v[0] - v[1];
	c[8] = v[2];

  /***  constraint 10  ***/

	if (x[6] == 0.) {
	zerdiv_(&x[6]);	}
	v[0] = 1. / x[6];
	launch_pd[3] = -v[0] / x[6];
	launch_pd[4] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	launch_pd[5] = 1. / v[0];
	launch_pd[6] = -31.8 * launch_pd[4];
	v[0] = launch_pd[6] * x[18];
	t1 = v[0] + x[34];
	c[9] = t1;

  /***  constraint 11  ***/

	if (x[7] == 0.) {
	zerdiv_(&x[7]);	}
	v[0] = 1. / x[7];
	launch_pd[7] = -v[0] / x[7];
	launch_pd[8] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	launch_pd[9] = 1. / v[0];
	launch_pd[10] = -31.8 * launch_pd[8];
	v[0] = launch_pd[10] * x[19];
	t1 = v[0] + x[35];
	c[10] = t1;

  /***  constraint 12  ***/

	if (x[8] == 0.) {
	zerdiv_(&x[8]);	}
	v[0] = 1. / x[8];
	launch_pd[11] = -v[0] / x[8];
	launch_pd[12] = log(v[0]);
	if (errno) in_trouble("log",v[0]);
	launch_pd[13] = 1. / v[0];
	launch_pd[14] = -31.8 * launch_pd[12];
	v[0] = launch_pd[14] * x[20];
	t1 = v[0] + x[36];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[21];
	t1 += 0.5*x[24];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[22];
	t1 += 0.6*x[25];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[23];
	t1 += 0.7*x[26];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += x[9];
	t1 += -x[24];
	t1 += -x[25];
	t1 += -x[26];
	t1 += -x[27];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[1];
	t1 += -x[2];
	t1 += x[10];
	t1 += -x[25];
	t1 += -x[26];
	t1 += -x[27];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[2];
	t1 += x[11];
	t1 += -x[26];
	t1 += -x[27];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[3];
	t1 += -5.*x[31];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[4];
	t1 += -5.*x[32];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[5];
	t1 += -x[33];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[0];
	t1 += 12.*x[24];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[1];
	t1 += 10.*x[25];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[2];
	t1 += 7.*x[26];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[0];
	t1 += -16.*x[24];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[1];
	t1 += -12.*x[25];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[2];
	t1 += -9.*x[26];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[34];
	t1 += -x[35];
	t1 += -x[36];
	t1 += x[37];
	c[27] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[33] = x[12];
	J[42] = x[9];
	J[18] = -1.;

   /*** derivatives for constraint 2 ***/

	J[36] = x[13];
	J[43] = x[10];
	J[21] = -1.;

   /*** derivatives for constraint 3 ***/

	J[39] = x[14];
	J[44] = x[11];
	J[24] = -1.;

   /*** derivatives for constraint 4 ***/

	J[34] = launch_pd[0];
	J[27] = -x[9];
	J[0] = -1.;

   /*** derivatives for constraint 5 ***/

	J[37] = launch_pd[1];
	J[29] = -x[10];
	J[5] = -1.;

   /*** derivatives for constraint 6 ***/

	J[40] = launch_pd[2];
	J[31] = -x[11];
	J[11] = -1.;

   /*** derivatives for constraint 7 ***/

	J[45] = -x[3];
	J[19] = -x[15];
	J[1] = x[18];
	J[48] = x[0];

   /*** derivatives for constraint 8 ***/

	J[46] = -x[4];
	J[22] = -x[16];
	J[6] = x[19];
	J[50] = x[1];

   /*** derivatives for constraint 9 ***/

	J[47] = -x[5];
	J[25] = -x[17];
	J[12] = x[20];
	J[52] = x[2];

   /*** derivatives for constraint 10 ***/

	J[49] = launch_pd[6];
	dv[0] = -x[18]*31.8;
	dv[0] *= launch_pd[5];
	J[28] = dv[0]*launch_pd[3];
	J[78] = 1.;

   /*** derivatives for constraint 11 ***/

	J[51] = launch_pd[10];
	dv[0] = -x[19]*31.8;
	dv[0] *= launch_pd[9];
	J[30] = dv[0]*launch_pd[7];
	J[80] = 1.;

   /*** derivatives for constraint 12 ***/

	J[53] = launch_pd[14];
	dv[0] = -x[20]*31.8;
	dv[0] *= launch_pd[13];
	J[32] = dv[0]*launch_pd[11];
	J[82] = 1.;

   /*** derivatives for constraint 13 ***/

	J[54] = -1.;
	J[57] = 0.5;

   /*** derivatives for constraint 14 ***/

	J[55] = -1.;
	J[61] = 0.6;

   /*** derivatives for constraint 15 ***/

	J[56] = -1.;
	J[66] = 0.7;

   /*** derivatives for constraint 16 ***/

	J[2] = -1.;
	J[7] = -1.;
	J[13] = -1.;
	J[35] = 1.;
	J[58] = -1.;
	J[62] = -1.;
	J[67] = -1.;
	J[72] = -1.;

   /*** derivatives for constraint 17 ***/

	J[8] = -1.;
	J[14] = -1.;
	J[38] = 1.;
	J[63] = -1.;
	J[68] = -1.;
	J[73] = -1.;

   /*** derivatives for constraint 18 ***/

	J[15] = -1.;
	J[41] = 1.;
	J[69] = -1.;
	J[74] = -1.;

   /*** derivatives for constraint 19 ***/

	J[20] = 1.;
	J[75] = -5.;

   /*** derivatives for constraint 20 ***/

	J[23] = 1.;
	J[76] = -5.;

   /*** derivatives for constraint 21 ***/

	J[26] = 1.;
	J[77] = -1.;

   /*** derivatives for constraint 22 ***/

	J[3] = -1.;
	J[59] = 12.;

   /*** derivatives for constraint 23 ***/

	J[9] = -1.;
	J[64] = 10.;

   /*** derivatives for constraint 24 ***/

	J[16] = -1.;
	J[70] = 7.;

   /*** derivatives for constraint 25 ***/

	J[4] = 1.;
	J[60] = -16.;

   /*** derivatives for constraint 26 ***/

	J[10] = 1.;
	J[65] = -12.;

   /*** derivatives for constraint 27 ***/

	J[17] = 1.;
	J[71] = -9.;

   /*** derivatives for constraint 28 ***/

	J[79] = -1.;
	J[81] = -1.;
	J[83] = -1.;
	J[84] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
