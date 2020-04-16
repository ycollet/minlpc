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
 fint pollut_auxcom_[1] = { 0 /* nlc */ };
 fint pollut_funcom_[175] = {
	42 /* nvar */,
	1 /* nobj */,
	8 /* ncon */,
	126 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	16,
	21,
	26,
	31,
	36,
	41,
	46,
	51,
	56,
	61,
	66,
	71,
	76,
	81,
	86,
	91,
	96,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	124,
	127,

	/* rownos */
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	1,
	2,
	3,
	4,
	7,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	8,
	5,
	6,
	7,
	5,
	6,
	8 };

 real pollut_boundc_[1+84+16] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		17643.6,
		41168.4,
		12825.,
		29925.,
		5053.8,
		11792.2,
		8323.8,
		19422.2,
		5082.,
		11858.,
		21825.,
		50925.,
		39609.6,
		92422.4,
		48080.4,
		112187.6,
		796.2,
		1857.8,
		2648.4,
		6179.6,
		2225.4,
		5192.6,
		8697.6,
		20294.4,
		61439.4,
		143358.6,
		16804.8,
		39211.2,
		41588.4,
		97039.6,
		54008.4,
		126019.6,
		17616.,
		41104.,
		16612.2,
		38761.8,
		2405.4,
		5612.6,
		14593.8,
		34052.2,
		14825.4,
		34592.6,
		11350.8,
		26485.2,
		12381.6,
		28890.4,
		6274.2,
		14639.8,
		5843.4,
		13634.6,
		11328.,
		26432.,
		26688.,
		62272.,
		21915.6,
		51136.4,
		454.8,
		1061.2,
		2952.6,
		6889.4,
		4059.6,
		9472.4,
		5620.8,
		13115.2,
		18676.2,
		43577.8,
		699.6,
		1632.4,
		35715.,
		83335.,
		37828.8,
		88267.2,
		17903.4,
		41774.6,
		10167.,
		23723.,
		2896.8,
		6759.2,
		14741.4,
		34396.6,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		153000.,
		-1.7e308,
		120000.,
		-1.7e308,
		250000.,
		-1.7e308,
		250000.,
		0.,
		1.7e308,
		-1.7e308,
		0.,
		0.,
		0.,
		0.,
		0.};

 real pollut_x0comn_[42] = {
		29406.,
		21375.,
		8423.,
		13873.,
		8470.,
		36375.,
		66016.,
		80134.,
		1327.,
		4414.,
		3709.,
		14496.,
		102399.,
		28008.,
		69314.,
		90014.,
		29360.,
		27687.,
		4009.,
		24323.,
		24709.,
		18918.,
		20636.,
		10457.,
		9739.,
		18880.,
		44480.,
		36526.,
		758.,
		4921.,
		6766.,
		9368.,
		31127.,
		1166.,
		59525.,
		63048.,
		29839.,
		16945.,
		4828.,
		24569.,
		0.,
		0. };

 static real pollut_pd[80];
static real pollut_old_x[42];
static int pollut_xkind = -1;

 static int
pollut_xcheck(real *x)
{
	real *x1 = pollut_old_x, *xe = x + 42;
	errno = 0;
	if (pollut_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	pollut_xkind = 0;
	return 1;
	}
 real
pollut_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[22], dv[20];
	fint wantfg = *needfg;
	if (pollut_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[0], 0.879);
	if (errno) in_trouble2("pow",x[0],0.879);
	if (x[0] > 0.) {
	pollut_pd[0] = 0.879*(v[0]/x[0]);
	} else if (0.879 > 1.) {
	pollut_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.879);
	}
	pollut_pd[1] = 9.6 * v[0];
	pollut_pd[3] = pow(x[20], 0.121);
	if (errno) in_trouble2("pow",x[20],0.121);
	if (x[20] > 0.) {
	pollut_pd[2] = 0.121*(pollut_pd[3]/x[20]);
	} else if (0.121 > 1.) {
	pollut_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],0.121);
	}
	v[1] = pollut_pd[1] * pollut_pd[3];
	v[2] = pow(x[1], 0.806);
	if (errno) in_trouble2("pow",x[1],0.806);
	if (x[1] > 0.) {
	pollut_pd[4] = 0.806*(v[2]/x[1]);
	} else if (0.806 > 1.) {
	pollut_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.806);
	}
	pollut_pd[5] = 6.353 * v[2];
	pollut_pd[7] = pow(x[21], 0.194);
	if (errno) in_trouble2("pow",x[21],0.194);
	if (x[21] > 0.) {
	pollut_pd[6] = 0.194*(pollut_pd[7]/x[21]);
	} else if (0.194 > 1.) {
	pollut_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],0.194);
	}
	v[3] = pollut_pd[5] * pollut_pd[7];
	v[1] += v[3];
	v[3] = pow(x[2], 0.796);
	if (errno) in_trouble2("pow",x[2],0.796);
	if (x[2] > 0.) {
	pollut_pd[8] = 0.796*(v[3]/x[2]);
	} else if (0.796 > 1.) {
	pollut_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.796);
	}
	pollut_pd[9] = 9.818 * v[3];
	pollut_pd[11] = pow(x[22], 0.204);
	if (errno) in_trouble2("pow",x[22],0.204);
	if (x[22] > 0.) {
	pollut_pd[10] = 0.204*(pollut_pd[11]/x[22]);
	} else if (0.204 > 1.) {
	pollut_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],0.204);
	}
	v[4] = pollut_pd[9] * pollut_pd[11];
	v[1] += v[4];
	v[4] = pow(x[3], 0.819);
	if (errno) in_trouble2("pow",x[3],0.819);
	if (x[3] > 0.) {
	pollut_pd[12] = 0.819*(v[4]/x[3]);
	} else if (0.819 > 1.) {
	pollut_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.819);
	}
	pollut_pd[13] = 7.371 * v[4];
	pollut_pd[15] = pow(x[23], 0.181);
	if (errno) in_trouble2("pow",x[23],0.181);
	if (x[23] > 0.) {
	pollut_pd[14] = 0.181*(pollut_pd[15]/x[23]);
	} else if (0.181 > 1.) {
	pollut_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],0.181);
	}
	v[5] = pollut_pd[13] * pollut_pd[15];
	v[1] += v[5];
	v[5] = pow(x[4], 0.829);
	if (errno) in_trouble2("pow",x[4],0.829);
	if (x[4] > 0.) {
	pollut_pd[16] = 0.829*(v[5]/x[4]);
	} else if (0.829 > 1.) {
	pollut_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.829);
	}
	pollut_pd[17] = 10.22 * v[5];
	pollut_pd[19] = pow(x[24], 0.171);
	if (errno) in_trouble2("pow",x[24],0.171);
	if (x[24] > 0.) {
	pollut_pd[18] = 0.171*(pollut_pd[19]/x[24]);
	} else if (0.171 > 1.) {
	pollut_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],0.171);
	}
	v[6] = pollut_pd[17] * pollut_pd[19];
	v[1] += v[6];
	v[6] = pow(x[5], 0.855);
	if (errno) in_trouble2("pow",x[5],0.855);
	if (x[5] > 0.) {
	pollut_pd[20] = 0.855*(v[6]/x[5]);
	} else if (0.855 > 1.) {
	pollut_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.855);
	}
	pollut_pd[21] = 6.255 * v[6];
	pollut_pd[23] = pow(x[25], 0.145);
	if (errno) in_trouble2("pow",x[25],0.145);
	if (x[25] > 0.) {
	pollut_pd[22] = 0.145*(pollut_pd[23]/x[25]);
	} else if (0.145 > 1.) {
	pollut_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],0.145);
	}
	v[7] = pollut_pd[21] * pollut_pd[23];
	v[1] += v[7];
	v[7] = pow(x[6], 0.696);
	if (errno) in_trouble2("pow",x[6],0.696);
	if (x[6] > 0.) {
	pollut_pd[24] = 0.696*(v[7]/x[6]);
	} else if (0.696 > 1.) {
	pollut_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.696);
	}
	pollut_pd[25] = 8.149 * v[7];
	pollut_pd[27] = pow(x[26], 0.304);
	if (errno) in_trouble2("pow",x[26],0.304);
	if (x[26] > 0.) {
	pollut_pd[26] = 0.304*(pollut_pd[27]/x[26]);
	} else if (0.304 > 1.) {
	pollut_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],0.304);
	}
	v[8] = pollut_pd[25] * pollut_pd[27];
	v[1] += v[8];
	v[8] = pow(x[7], 0.854);
	if (errno) in_trouble2("pow",x[7],0.854);
	if (x[7] > 0.) {
	pollut_pd[28] = 0.854*(v[8]/x[7]);
	} else if (0.854 > 1.) {
	pollut_pd[28] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.854);
	}
	pollut_pd[29] = 7.794 * v[8];
	pollut_pd[31] = pow(x[27], 0.146);
	if (errno) in_trouble2("pow",x[27],0.146);
	if (x[27] > 0.) {
	pollut_pd[30] = 0.146*(pollut_pd[31]/x[27]);
	} else if (0.146 > 1.) {
	pollut_pd[30] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[27],0.146);
	}
	v[9] = pollut_pd[29] * pollut_pd[31];
	v[1] += v[9];
	v[9] = pow(x[8], 0.827);
	if (errno) in_trouble2("pow",x[8],0.827);
	if (x[8] > 0.) {
	pollut_pd[32] = 0.827*(v[9]/x[8]);
	} else if (0.827 > 1.) {
	pollut_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],0.827);
	}
	pollut_pd[33] = 8.4 * v[9];
	pollut_pd[35] = pow(x[28], 0.173);
	if (errno) in_trouble2("pow",x[28],0.173);
	if (x[28] > 0.) {
	pollut_pd[34] = 0.173*(pollut_pd[35]/x[28]);
	} else if (0.173 > 1.) {
	pollut_pd[34] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],0.173);
	}
	v[10] = pollut_pd[33] * pollut_pd[35];
	v[1] += v[10];
	v[10] = pow(x[9], 0.826);
	if (errno) in_trouble2("pow",x[9],0.826);
	if (x[9] > 0.) {
	pollut_pd[36] = 0.826*(v[10]/x[9]);
	} else if (0.826 > 1.) {
	pollut_pd[36] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],0.826);
	}
	pollut_pd[37] = 9.933 * v[10];
	pollut_pd[39] = pow(x[29], 0.174);
	if (errno) in_trouble2("pow",x[29],0.174);
	if (x[29] > 0.) {
	pollut_pd[38] = 0.174*(pollut_pd[39]/x[29]);
	} else if (0.174 > 1.) {
	pollut_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],0.174);
	}
	v[11] = pollut_pd[37] * pollut_pd[39];
	v[1] += v[11];
	v[11] = pow(x[10], 0.833);
	if (errno) in_trouble2("pow",x[10],0.833);
	if (x[10] > 0.) {
	pollut_pd[40] = 0.833*(v[11]/x[10]);
	} else if (0.833 > 1.) {
	pollut_pd[40] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],0.833);
	}
	pollut_pd[41] = 11.069 * v[11];
	pollut_pd[43] = pow(x[30], 0.167);
	if (errno) in_trouble2("pow",x[30],0.167);
	if (x[30] > 0.) {
	pollut_pd[42] = 0.167*(pollut_pd[43]/x[30]);
	} else if (0.167 > 1.) {
	pollut_pd[42] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],0.167);
	}
	v[12] = pollut_pd[41] * pollut_pd[43];
	v[1] += v[12];
	v[12] = pow(x[11], 0.808);
	if (errno) in_trouble2("pow",x[11],0.808);
	if (x[11] > 0.) {
	pollut_pd[44] = 0.808*(v[12]/x[11]);
	} else if (0.808 > 1.) {
	pollut_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],0.808);
	}
	pollut_pd[45] = 6.528 * v[12];
	pollut_pd[47] = pow(x[31], 0.192);
	if (errno) in_trouble2("pow",x[31],0.192);
	if (x[31] > 0.) {
	pollut_pd[46] = 0.192*(pollut_pd[47]/x[31]);
	} else if (0.192 > 1.) {
	pollut_pd[46] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],0.192);
	}
	v[13] = pollut_pd[45] * pollut_pd[47];
	v[1] += v[13];
	v[13] = pow(x[12], 0.884);
	if (errno) in_trouble2("pow",x[12],0.884);
	if (x[12] > 0.) {
	pollut_pd[48] = 0.884*(v[13]/x[12]);
	} else if (0.884 > 1.) {
	pollut_pd[48] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],0.884);
	}
	pollut_pd[49] = 7.928 * v[13];
	pollut_pd[51] = pow(x[32], 0.116);
	if (errno) in_trouble2("pow",x[32],0.116);
	if (x[32] > 0.) {
	pollut_pd[50] = 0.116*(pollut_pd[51]/x[32]);
	} else if (0.116 > 1.) {
	pollut_pd[50] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[32],0.116);
	}
	v[14] = pollut_pd[49] * pollut_pd[51];
	v[1] += v[14];
	v[14] = pow(x[13], 0.909);
	if (errno) in_trouble2("pow",x[13],0.909);
	if (x[13] > 0.) {
	pollut_pd[52] = 0.909*(v[14]/x[13]);
	} else if (0.909 > 1.) {
	pollut_pd[52] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],0.909);
	}
	pollut_pd[53] = 10.559 * v[14];
	pollut_pd[55] = pow(x[33], 0.091);
	if (errno) in_trouble2("pow",x[33],0.091);
	if (x[33] > 0.) {
	pollut_pd[54] = 0.091*(pollut_pd[55]/x[33]);
	} else if (0.091 > 1.) {
	pollut_pd[54] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[33],0.091);
	}
	v[15] = pollut_pd[53] * pollut_pd[55];
	v[1] += v[15];
	v[15] = pow(x[14], 0.773);
	if (errno) in_trouble2("pow",x[14],0.773);
	if (x[14] > 0.) {
	pollut_pd[56] = 0.773*(v[15]/x[14]);
	} else if (0.773 > 1.) {
	pollut_pd[56] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],0.773);
	}
	pollut_pd[57] = 6.606 * v[15];
	pollut_pd[59] = pow(x[34], 0.227);
	if (errno) in_trouble2("pow",x[34],0.227);
	if (x[34] > 0.) {
	pollut_pd[58] = 0.227*(pollut_pd[59]/x[34]);
	} else if (0.227 > 1.) {
	pollut_pd[58] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],0.227);
	}
	v[16] = pollut_pd[57] * pollut_pd[59];
	v[1] += v[16];
	v[16] = pow(x[15], 0.792);
	if (errno) in_trouble2("pow",x[15],0.792);
	if (x[15] > 0.) {
	pollut_pd[60] = 0.792*(v[16]/x[15]);
	} else if (0.792 > 1.) {
	pollut_pd[60] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],0.792);
	}
	pollut_pd[61] = 7.153 * v[16];
	pollut_pd[63] = pow(x[35], 0.208);
	if (errno) in_trouble2("pow",x[35],0.208);
	if (x[35] > 0.) {
	pollut_pd[62] = 0.208*(pollut_pd[63]/x[35]);
	} else if (0.208 > 1.) {
	pollut_pd[62] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[35],0.208);
	}
	v[17] = pollut_pd[61] * pollut_pd[63];
	v[1] += v[17];
	v[17] = pow(x[16], 0.849);
	if (errno) in_trouble2("pow",x[16],0.849);
	if (x[16] > 0.) {
	pollut_pd[64] = 0.849*(v[17]/x[16]);
	} else if (0.849 > 1.) {
	pollut_pd[64] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],0.849);
	}
	pollut_pd[65] = 11.146 * v[17];
	pollut_pd[67] = pow(x[36], 0.151);
	if (errno) in_trouble2("pow",x[36],0.151);
	if (x[36] > 0.) {
	pollut_pd[66] = 0.151*(pollut_pd[67]/x[36]);
	} else if (0.151 > 1.) {
	pollut_pd[66] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],0.151);
	}
	v[18] = pollut_pd[65] * pollut_pd[67];
	v[1] += v[18];
	v[18] = pow(x[17], 0.801);
	if (errno) in_trouble2("pow",x[17],0.801);
	if (x[17] > 0.) {
	pollut_pd[68] = 0.801*(v[18]/x[17]);
	} else if (0.801 > 1.) {
	pollut_pd[68] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],0.801);
	}
	pollut_pd[69] = 6.884 * v[18];
	pollut_pd[71] = pow(x[37], 0.199);
	if (errno) in_trouble2("pow",x[37],0.199);
	if (x[37] > 0.) {
	pollut_pd[70] = 0.199*(pollut_pd[71]/x[37]);
	} else if (0.199 > 1.) {
	pollut_pd[70] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],0.199);
	}
	v[19] = pollut_pd[69] * pollut_pd[71];
	v[1] += v[19];
	v[19] = pow(x[18], 0.747);
	if (errno) in_trouble2("pow",x[18],0.747);
	if (x[18] > 0.) {
	pollut_pd[72] = 0.747*(v[19]/x[18]);
	} else if (0.747 > 1.) {
	pollut_pd[72] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],0.747);
	}
	pollut_pd[73] = 6.66 * v[19];
	pollut_pd[75] = pow(x[38], 0.253);
	if (errno) in_trouble2("pow",x[38],0.253);
	if (x[38] > 0.) {
	pollut_pd[74] = 0.253*(pollut_pd[75]/x[38]);
	} else if (0.253 > 1.) {
	pollut_pd[74] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],0.253);
	}
	v[20] = pollut_pd[73] * pollut_pd[75];
	v[1] += v[20];
	v[20] = pow(x[19], 0.818);
	if (errno) in_trouble2("pow",x[19],0.818);
	if (x[19] > 0.) {
	pollut_pd[76] = 0.818*(v[20]/x[19]);
	} else if (0.818 > 1.) {
	pollut_pd[76] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],0.818);
	}
	pollut_pd[77] = 7.929 * v[20];
	pollut_pd[79] = pow(x[39], 0.182);
	if (errno) in_trouble2("pow",x[39],0.182);
	if (x[39] > 0.) {
	pollut_pd[78] = 0.182*(pollut_pd[79]/x[39]);
	} else if (0.182 > 1.) {
	pollut_pd[78] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],0.182);
	}
	v[21] = pollut_pd[77] * pollut_pd[79];
	v[1] += v[21];
	v[21] = -v[1];
	;}

	if (wantfg & 2) {
	g[39] = -pollut_pd[77]*pollut_pd[78];
	dv[0] = -pollut_pd[79]*7.929;
	g[19] = dv[0]*pollut_pd[76];
	g[38] = -pollut_pd[73]*pollut_pd[74];
	dv[1] = -pollut_pd[75]*6.66;
	g[18] = dv[1]*pollut_pd[72];
	g[37] = -pollut_pd[69]*pollut_pd[70];
	dv[2] = -pollut_pd[71]*6.884;
	g[17] = dv[2]*pollut_pd[68];
	g[36] = -pollut_pd[65]*pollut_pd[66];
	dv[3] = -pollut_pd[67]*11.146;
	g[16] = dv[3]*pollut_pd[64];
	g[35] = -pollut_pd[61]*pollut_pd[62];
	dv[4] = -pollut_pd[63]*7.153;
	g[15] = dv[4]*pollut_pd[60];
	g[34] = -pollut_pd[57]*pollut_pd[58];
	dv[5] = -pollut_pd[59]*6.606;
	g[14] = dv[5]*pollut_pd[56];
	g[33] = -pollut_pd[53]*pollut_pd[54];
	dv[6] = -pollut_pd[55]*10.559;
	g[13] = dv[6]*pollut_pd[52];
	g[32] = -pollut_pd[49]*pollut_pd[50];
	dv[7] = -pollut_pd[51]*7.928;
	g[12] = dv[7]*pollut_pd[48];
	g[31] = -pollut_pd[45]*pollut_pd[46];
	dv[8] = -pollut_pd[47]*6.528;
	g[11] = dv[8]*pollut_pd[44];
	g[30] = -pollut_pd[41]*pollut_pd[42];
	dv[9] = -pollut_pd[43]*11.069;
	g[10] = dv[9]*pollut_pd[40];
	g[29] = -pollut_pd[37]*pollut_pd[38];
	dv[10] = -pollut_pd[39]*9.933;
	g[9] = dv[10]*pollut_pd[36];
	g[28] = -pollut_pd[33]*pollut_pd[34];
	dv[11] = -pollut_pd[35]*8.4;
	g[8] = dv[11]*pollut_pd[32];
	g[27] = -pollut_pd[29]*pollut_pd[30];
	dv[12] = -pollut_pd[31]*7.794;
	g[7] = dv[12]*pollut_pd[28];
	g[26] = -pollut_pd[25]*pollut_pd[26];
	dv[13] = -pollut_pd[27]*8.149;
	g[6] = dv[13]*pollut_pd[24];
	g[25] = -pollut_pd[21]*pollut_pd[22];
	dv[14] = -pollut_pd[23]*6.255;
	g[5] = dv[14]*pollut_pd[20];
	g[24] = -pollut_pd[17]*pollut_pd[18];
	dv[15] = -pollut_pd[19]*10.22;
	g[4] = dv[15]*pollut_pd[16];
	g[23] = -pollut_pd[13]*pollut_pd[14];
	dv[16] = -pollut_pd[15]*7.371;
	g[3] = dv[16]*pollut_pd[12];
	g[22] = -pollut_pd[9]*pollut_pd[10];
	dv[17] = -pollut_pd[11]*9.818;
	g[2] = dv[17]*pollut_pd[8];
	g[21] = -pollut_pd[5]*pollut_pd[6];
	dv[18] = -pollut_pd[7]*6.353;
	g[1] = dv[18]*pollut_pd[4];
	g[20] = -pollut_pd[1]*pollut_pd[2];
	dv[19] = -pollut_pd[3]*9.6;
	g[0] = dv[19]*pollut_pd[0];
	}

	return v[21];
}

 void
pollut_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (pollut_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 0.797744360902256*x[0];
	t1 += 0.208131595282433*x[1];
	t1 += 0.395400943396226*x[2];
	t1 += 0.00945378151260504*x[3];
	t1 += 0.016020942408377*x[4];
	t1 += 1.32848209209778*x[5];
	t1 += 0.347442922374429*x[6];
	t1 += 0.534329395413482*x[7];
	t1 += 0.284322678843227*x[8];
	t1 += 0.283080040526849*x[9];
	t1 += 0.341982864137087*x[10];
	t1 += 0.0127927927927928*x[11];
	t1 += 0.0437154696132597*x[12];
	t1 += 0.00886939571150097*x[13];
	t1 += 0.00797702616464582*x[14];
	t1 += 0.00590969455511288*x[15];
	t1 += 0.0137430167597765*x[16];
	t1 += 0.00493133583021223*x[17];
	t1 += 0.0273858921161826*x[18];
	t1 += 0.0741242038216561*x[19];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 0.0854323308270677*x[0];
	t1 += 0.153320918684047*x[1];
	t1 += 0.29127358490566*x[2];
	t1 += 0.00588235294117647*x[3];
	t1 += 0.00879581151832461*x[4];
	t1 += 0.424161455372371*x[5];
	t1 += 0.263333333333333*x[6];
	t1 += 0.400764419735928*x[7];
	t1 += 0.126560121765601*x[8];
	t1 += 0.0462006079027356*x[9];
	t1 += 0.0558139534883721*x[10];
	t1 += 0.528528528528528*x[11];
	t1 += 0.163052486187845*x[12];
	t1 += 0.329044834307992*x[13];
	t1 += 0.0548819400127632*x[14];
	t1 += 0.0249667994687915*x[15];
	t1 += 0.0412290502793296*x[16];
	t1 += 0.00792759051186017*x[17];
	t1 += 0.0174273858921162*x[18];
	t1 += 0.0200636942675159*x[19];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = 0.281015037593985*x[0];
	t1 += 0.557417752948479*x[1];
	t1 += 0.327830188679245*x[2];
	t1 += 0.48249299719888*x[3];
	t1 += 0.366492146596859*x[4];
	t1 += 0.266628766344514*x[5];
	t1 += 0.0589041095890411*x[6];
	t1 += 0.373175816539263*x[7];
	t1 += 2.06088280060883*x[8];
	t1 += 0.611955420466059*x[9];
	t1 += 0.609547123623011*x[10];
	t1 += 0.691291291291291*x[11];
	t1 += 0.614640883977901*x[12];
	t1 += 0.260233918128655*x[13];
	t1 += 0.433312061263561*x[14];
	t1 += 0.412350597609562*x[15];
	t1 += 0.329608938547486*x[16];
	t1 += 0.491260923845194*x[17];
	t1 += 0.264868603042877*x[18];
	t1 += 0.337579617834395*x[19];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 0.676221804511278*x[0];
	t1 += 1.05723153320919*x[1];
	t1 += 0.158608490566038*x[2];
	t1 += 0.112464985994398*x[3];
	t1 += 0.149633507853403*x[4];
	t1 += 0.883001705514497*x[5];
	t1 += 0.0844748858447489*x[6];
	t1 += 0.6726893676164*x[7];
	t1 += 0.220700152207002*x[8];
	t1 += 0.932117527862209*x[9];
	t1 += 0.895960832313342*x[10];
	t1 += 0.571771771771772*x[11];
	t1 += 0.537292817679558*x[12];
	t1 += 0.362573099415205*x[13];
	t1 += 0.314613911933631*x[14];
	t1 += 0.164674634794157*x[15];
	t1 += 0.256983240223464*x[16];
	t1 += 0.268414481897628*x[17];
	t1 += 0.208160442600277*x[18];
	t1 += 0.278662420382166*x[19];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[40];
	t1 += -0.9*x[41];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[40];
	t1 += -1.4*x[41];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[2];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[6];
	t1 += -x[7];
	t1 += -x[8];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[11];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[14];
	t1 += -x[15];
	t1 += -x[16];
	t1 += -x[17];
	t1 += -x[18];
	t1 += -x[19];
	t1 += x[40];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[20];
	t1 += -x[21];
	t1 += -x[22];
	t1 += -x[23];
	t1 += -x[24];
	t1 += -x[25];
	t1 += -x[26];
	t1 += -x[27];
	t1 += -x[28];
	t1 += -x[29];
	t1 += -x[30];
	t1 += -x[31];
	t1 += -x[32];
	t1 += -x[33];
	t1 += -x[34];
	t1 += -x[35];
	t1 += -x[36];
	t1 += -x[37];
	t1 += -x[38];
	t1 += -x[39];
	t1 += x[41];
	c[7] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 0.797744360902256;
	J[5] = 0.208131595282433;
	J[10] = 0.395400943396226;
	J[15] = 0.00945378151260504;
	J[20] = 0.016020942408377;
	J[25] = 1.32848209209778;
	J[30] = 0.347442922374429;
	J[35] = 0.534329395413482;
	J[40] = 0.284322678843227;
	J[45] = 0.283080040526849;
	J[50] = 0.341982864137087;
	J[55] = 0.0127927927927928;
	J[60] = 0.0437154696132597;
	J[65] = 0.00886939571150097;
	J[70] = 0.00797702616464582;
	J[75] = 0.00590969455511288;
	J[80] = 0.0137430167597765;
	J[85] = 0.00493133583021223;
	J[90] = 0.0273858921161826;
	J[95] = 0.0741242038216561;

   /*** derivatives for constraint 2 ***/

	J[1] = 0.0854323308270677;
	J[6] = 0.153320918684047;
	J[11] = 0.29127358490566;
	J[16] = 0.00588235294117647;
	J[21] = 0.00879581151832461;
	J[26] = 0.424161455372371;
	J[31] = 0.263333333333333;
	J[36] = 0.400764419735928;
	J[41] = 0.126560121765601;
	J[46] = 0.0462006079027356;
	J[51] = 0.0558139534883721;
	J[56] = 0.528528528528528;
	J[61] = 0.163052486187845;
	J[66] = 0.329044834307992;
	J[71] = 0.0548819400127632;
	J[76] = 0.0249667994687915;
	J[81] = 0.0412290502793296;
	J[86] = 0.00792759051186017;
	J[91] = 0.0174273858921162;
	J[96] = 0.0200636942675159;

   /*** derivatives for constraint 3 ***/

	J[2] = 0.281015037593985;
	J[7] = 0.557417752948479;
	J[12] = 0.327830188679245;
	J[17] = 0.48249299719888;
	J[22] = 0.366492146596859;
	J[27] = 0.266628766344514;
	J[32] = 0.0589041095890411;
	J[37] = 0.373175816539263;
	J[42] = 2.06088280060883;
	J[47] = 0.611955420466059;
	J[52] = 0.609547123623011;
	J[57] = 0.691291291291291;
	J[62] = 0.614640883977901;
	J[67] = 0.260233918128655;
	J[72] = 0.433312061263561;
	J[77] = 0.412350597609562;
	J[82] = 0.329608938547486;
	J[87] = 0.491260923845194;
	J[92] = 0.264868603042877;
	J[97] = 0.337579617834395;

   /*** derivatives for constraint 4 ***/

	J[3] = 0.676221804511278;
	J[8] = 1.05723153320919;
	J[13] = 0.158608490566038;
	J[18] = 0.112464985994398;
	J[23] = 0.149633507853403;
	J[28] = 0.883001705514497;
	J[33] = 0.0844748858447489;
	J[38] = 0.6726893676164;
	J[43] = 0.220700152207002;
	J[48] = 0.932117527862209;
	J[53] = 0.895960832313342;
	J[58] = 0.571771771771772;
	J[63] = 0.537292817679558;
	J[68] = 0.362573099415205;
	J[73] = 0.314613911933631;
	J[78] = 0.164674634794157;
	J[83] = 0.256983240223464;
	J[88] = 0.268414481897628;
	J[93] = 0.208160442600277;
	J[98] = 0.278662420382166;

   /*** derivatives for constraint 5 ***/

	J[120] = 1.;
	J[123] = -0.9;

   /*** derivatives for constraint 6 ***/

	J[121] = 1.;
	J[124] = -1.4;

   /*** derivatives for constraint 7 ***/

	J[4] = -1.;
	J[9] = -1.;
	J[14] = -1.;
	J[19] = -1.;
	J[24] = -1.;
	J[29] = -1.;
	J[34] = -1.;
	J[39] = -1.;
	J[44] = -1.;
	J[49] = -1.;
	J[54] = -1.;
	J[59] = -1.;
	J[64] = -1.;
	J[69] = -1.;
	J[74] = -1.;
	J[79] = -1.;
	J[84] = -1.;
	J[89] = -1.;
	J[94] = -1.;
	J[99] = -1.;
	J[122] = 1.;

   /*** derivatives for constraint 8 ***/

	J[100] = -1.;
	J[101] = -1.;
	J[102] = -1.;
	J[103] = -1.;
	J[104] = -1.;
	J[105] = -1.;
	J[106] = -1.;
	J[107] = -1.;
	J[108] = -1.;
	J[109] = -1.;
	J[110] = -1.;
	J[111] = -1.;
	J[112] = -1.;
	J[113] = -1.;
	J[114] = -1.;
	J[115] = -1.;
	J[116] = -1.;
	J[117] = -1.;
	J[118] = -1.;
	J[119] = -1.;
	J[125] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
