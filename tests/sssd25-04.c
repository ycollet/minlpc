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
 fint sssd25_04_auxcom_[1] = { 12 /* nlc */ };
 fint sssd25_04_funcom_[407] = {
	128 /* nvar */,
	1 /* nobj */,
	57 /* ncon */,
	272 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	4,
	7,
	10,
	13,
	16,
	19,
	22,
	25,
	28,
	31,
	34,
	37,
	40,
	43,
	46,
	49,
	51,
	53,
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
	79,
	81,
	83,
	85,
	87,
	89,
	91,
	93,
	95,
	97,
	99,
	101,
	103,
	105,
	107,
	109,
	111,
	113,
	115,
	117,
	119,
	121,
	123,
	125,
	127,
	129,
	131,
	133,
	135,
	137,
	139,
	141,
	143,
	145,
	147,
	149,
	151,
	153,
	155,
	157,
	159,
	161,
	163,
	165,
	167,
	169,
	171,
	173,
	175,
	177,
	179,
	181,
	183,
	185,
	187,
	189,
	191,
	193,
	195,
	197,
	199,
	201,
	203,
	205,
	207,
	209,
	211,
	213,
	215,
	217,
	219,
	221,
	223,
	225,
	227,
	229,
	231,
	233,
	235,
	237,
	239,
	241,
	243,
	245,
	247,
	249,
	251,
	253,
	255,
	257,
	259,
	261,
	263,
	265,
	267,
	269,
	271,
	273,

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
	11,
	12,
	1,
	13,
	46,
	2,
	13,
	47,
	3,
	13,
	48,
	4,
	14,
	49,
	5,
	14,
	50,
	6,
	14,
	51,
	7,
	15,
	52,
	8,
	15,
	53,
	9,
	15,
	54,
	10,
	16,
	55,
	11,
	16,
	56,
	12,
	16,
	57,
	13,
	17,
	14,
	17,
	15,
	17,
	16,
	17,
	13,
	18,
	14,
	18,
	15,
	18,
	16,
	18,
	13,
	19,
	14,
	19,
	15,
	19,
	16,
	19,
	13,
	20,
	14,
	20,
	15,
	20,
	16,
	20,
	13,
	21,
	14,
	21,
	15,
	21,
	16,
	21,
	13,
	22,
	14,
	22,
	15,
	22,
	16,
	22,
	13,
	23,
	14,
	23,
	15,
	23,
	16,
	23,
	13,
	24,
	14,
	24,
	15,
	24,
	16,
	24,
	13,
	25,
	14,
	25,
	15,
	25,
	16,
	25,
	13,
	26,
	14,
	26,
	15,
	26,
	16,
	26,
	13,
	27,
	14,
	27,
	15,
	27,
	16,
	27,
	13,
	28,
	14,
	28,
	15,
	28,
	16,
	28,
	13,
	29,
	14,
	29,
	15,
	29,
	16,
	29,
	13,
	30,
	14,
	30,
	15,
	30,
	16,
	30,
	13,
	31,
	14,
	31,
	15,
	31,
	16,
	31,
	13,
	32,
	14,
	32,
	15,
	32,
	16,
	32,
	13,
	33,
	14,
	33,
	15,
	33,
	16,
	33,
	13,
	34,
	14,
	34,
	15,
	34,
	16,
	34,
	13,
	35,
	14,
	35,
	15,
	35,
	16,
	35,
	13,
	36,
	14,
	36,
	15,
	36,
	16,
	36,
	13,
	37,
	14,
	37,
	15,
	37,
	16,
	37,
	13,
	38,
	14,
	38,
	15,
	38,
	16,
	38,
	13,
	39,
	14,
	39,
	15,
	39,
	16,
	39,
	13,
	40,
	14,
	40,
	15,
	40,
	16,
	40,
	13,
	41,
	14,
	41,
	15,
	41,
	16,
	41,
	42,
	46,
	42,
	47,
	42,
	48,
	43,
	49,
	43,
	50,
	43,
	51,
	44,
	52,
	44,
	53,
	44,
	54,
	45,
	55,
	45,
	56,
	45,
	57 };

 real sssd25_04_boundc_[1+256+114] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
		-1.7e308,
		1.,
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
		0.};

 real sssd25_04_x0comn_[128] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sssd25_04_pd[24];
static real sssd25_04_old_x[128];
static int sssd25_04_xkind = -1;

 static int
sssd25_04_xcheck(real *x)
{
	real *x1 = sssd25_04_old_x, *xe = x + 128;
	errno = 0;
	if (sssd25_04_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sssd25_04_xkind = 0;
	return 1;
	}
 real
sssd25_04_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sssd25_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 83308.5816488132*x[0];
	rv += 83308.5816488132*x[1];
	rv += 83308.5816488132*x[2];
	rv += 83308.5816488132*x[3];
	rv += 476.627680186915*x[16];
	rv += 149.653586784487*x[17];
	rv += 213.186384418957*x[18];
	rv += 43.7888464292729*x[19];
	rv += 474.830868219332*x[20];
	rv += 804.41120755867*x[21];
	rv += 584.914840194532*x[22];
	rv += 661.646071204307*x[23];
	rv += 392.259337390379*x[24];
	rv += 142.80919923228*x[25];
	rv += 218.980029277262*x[26];
	rv += 104.519355726959*x[27];
	rv += 314.988665746119*x[28];
	rv += 501.761182472619*x[29];
	rv += 416.807578457382*x[30];
	rv += 524.390259195122*x[31];
	rv += 362.341095830922*x[32];
	rv += 441.362501912098*x[33];
	rv += 402.716752066181*x[34];
	rv += 492.339440818786*x[35];
	rv += 290.964161684016*x[36];
	rv += 116.368122158017*x[37];
	rv += 173.712811065166*x[38];
	rv += 95.9656692808925*x[39];
	rv += 443.684333533333*x[40];
	rv += 176.081128582949*x[41];
	rv += 302.39173954457*x[42];
	rv += 293.29371225224*x[43];
	rv += 476.763266014932*x[44];
	rv += 183.917148897559*x[45];
	rv += 272.205185020914*x[46];
	rv += 136.278105402226*x[47];
	rv += 101.35843572405*x[48];
	rv += 193.942699651262*x[49];
	rv += 141.921469465657*x[50];
	rv += 201.173648709993*x[51];
	rv += 132.921832386141*x[52];
	rv += 421.655945550644*x[53];
	rv += 281.212652600547*x[54];
	rv += 407.005327357163*x[55];
	rv += 202.365762241646*x[56];
	rv += 137.219422282215*x[57];
	rv += 132.146952277583*x[58];
	rv += 179.383015135974*x[59];
	rv += 123.618453957013*x[60];
	rv += 297.215252315231*x[61];
	rv += 218.762870620071*x[62];
	rv += 282.961164098487*x[63];
	rv += 20.13413882933*x[64];
	rv += 497.103669118494*x[65];
	rv += 268.341006965987*x[66];
	rv += 427.522422721593*x[67];
	rv += 210.032834185575*x[68];
	rv += 434.311463333895*x[69];
	rv += 298.270736776993*x[70];
	rv += 444.612005461353*x[71];
	rv += 211.951029854733*x[72];
	rv += 447.318981178372*x[73];
	rv += 332.208676638743*x[74];
	rv += 453.095321147229*x[75];
	rv += 435.628401127826*x[76];
	rv += 771.659835894158*x[77];
	rv += 623.845701115879*x[78];
	rv += 775.557667039354*x[79];
	rv += 424.738471081496*x[80];
	rv += 833.085816488132*x[81];
	rv += 592.460027321246*x[82];
	rv += 700.942808077211*x[83];
	rv += 229.947132383408*x[84];
	rv += 586.218425366478*x[85];
	rv += 424.710208954907*x[86];
	rv += 555.528795297853*x[87];
	rv += 327.711607414859*x[88];
	rv += 238.953801669268*x[89];
	rv += 251.293372908654*x[90];
	rv += 313.742954288217*x[91];
	rv += 478.24585803249*x[92];
	rv += 80.7823868731141*x[93];
	rv += 266.940737208009*x[94];
	rv += 164.458228751629*x[95];
	rv += 332.729569180138*x[96];
	rv += 388.723389119461*x[97];
	rv += 237.094588860685*x[98];
	rv += 245.459595758858*x[99];
	rv += 170.849806397817*x[100];
	rv += 170.734963967704*x[101];
	rv += 30.8907942571205*x[102];
	rv += 104.086188009457*x[103];
	rv += 66.4196868291459*x[104];
	rv += 312.344045852442*x[105];
	rv += 151.766233459965*x[106];
	rv += 278.677297797007*x[107];
	rv += 205.289077931114*x[108];
	rv += 86.9146012652412*x[109];
	rv += 127.990999929026*x[110];
	rv += 141.658946009938*x[111];
	rv += 588.039796501339*x[112];
	rv += 363.309460856624*x[113];
	rv += 476.707321955199*x[114];
	rv += 487.438573778052*x[115];
	rv += 489.84367475*x[116];
	rv += 216.633855557639*x[117];
	rv += 152.801343309708*x[118];
	rv += 384.081627*x[119];
	rv += 178.524432787122*x[120];
	rv += 129.092639672378*x[121];
	rv += 311.0588205*x[122];
	rv += 156.215197085809*x[123];
	rv += 117.416983804282*x[124];
	rv += 300.51551825*x[125];
	rv += 147.887674474043*x[126];
	rv += 110.035201882344*x[127];
	;}

	if (wantfg & 2) {
	g[0] = 83308.5816488132;
	g[1] = 83308.5816488132;
	g[2] = 83308.5816488132;
	g[3] = 83308.5816488132;
	g[16] = 476.627680186915;
	g[17] = 149.653586784487;
	g[18] = 213.186384418957;
	g[19] = 43.7888464292729;
	g[20] = 474.830868219332;
	g[21] = 804.41120755867;
	g[22] = 584.914840194532;
	g[23] = 661.646071204307;
	g[24] = 392.259337390379;
	g[25] = 142.80919923228;
	g[26] = 218.980029277262;
	g[27] = 104.519355726959;
	g[28] = 314.988665746119;
	g[29] = 501.761182472619;
	g[30] = 416.807578457382;
	g[31] = 524.390259195122;
	g[32] = 362.341095830922;
	g[33] = 441.362501912098;
	g[34] = 402.716752066181;
	g[35] = 492.339440818786;
	g[36] = 290.964161684016;
	g[37] = 116.368122158017;
	g[38] = 173.712811065166;
	g[39] = 95.9656692808925;
	g[40] = 443.684333533333;
	g[41] = 176.081128582949;
	g[42] = 302.39173954457;
	g[43] = 293.29371225224;
	g[44] = 476.763266014932;
	g[45] = 183.917148897559;
	g[46] = 272.205185020914;
	g[47] = 136.278105402226;
	g[48] = 101.35843572405;
	g[49] = 193.942699651262;
	g[50] = 141.921469465657;
	g[51] = 201.173648709993;
	g[52] = 132.921832386141;
	g[53] = 421.655945550644;
	g[54] = 281.212652600547;
	g[55] = 407.005327357163;
	g[56] = 202.365762241646;
	g[57] = 137.219422282215;
	g[58] = 132.146952277583;
	g[59] = 179.383015135974;
	g[60] = 123.618453957013;
	g[61] = 297.215252315231;
	g[62] = 218.762870620071;
	g[63] = 282.961164098487;
	g[64] = 20.13413882933;
	g[65] = 497.103669118494;
	g[66] = 268.341006965987;
	g[67] = 427.522422721593;
	g[68] = 210.032834185575;
	g[69] = 434.311463333895;
	g[70] = 298.270736776993;
	g[71] = 444.612005461353;
	g[72] = 211.951029854733;
	g[73] = 447.318981178372;
	g[74] = 332.208676638743;
	g[75] = 453.095321147229;
	g[76] = 435.628401127826;
	g[77] = 771.659835894158;
	g[78] = 623.845701115879;
	g[79] = 775.557667039354;
	g[80] = 424.738471081496;
	g[81] = 833.085816488132;
	g[82] = 592.460027321246;
	g[83] = 700.942808077211;
	g[84] = 229.947132383408;
	g[85] = 586.218425366478;
	g[86] = 424.710208954907;
	g[87] = 555.528795297853;
	g[88] = 327.711607414859;
	g[89] = 238.953801669268;
	g[90] = 251.293372908654;
	g[91] = 313.742954288217;
	g[92] = 478.24585803249;
	g[93] = 80.7823868731141;
	g[94] = 266.940737208009;
	g[95] = 164.458228751629;
	g[96] = 332.729569180138;
	g[97] = 388.723389119461;
	g[98] = 237.094588860685;
	g[99] = 245.459595758858;
	g[100] = 170.849806397817;
	g[101] = 170.734963967704;
	g[102] = 30.8907942571205;
	g[103] = 104.086188009457;
	g[104] = 66.4196868291459;
	g[105] = 312.344045852442;
	g[106] = 151.766233459965;
	g[107] = 278.677297797007;
	g[108] = 205.289077931114;
	g[109] = 86.9146012652412;
	g[110] = 127.990999929026;
	g[111] = 141.658946009938;
	g[112] = 588.039796501339;
	g[113] = 363.309460856624;
	g[114] = 476.707321955199;
	g[115] = 487.438573778052;
	g[116] = 489.84367475;
	g[117] = 216.633855557639;
	g[118] = 152.801343309708;
	g[119] = 384.081627;
	g[120] = 178.524432787122;
	g[121] = 129.092639672378;
	g[122] = 311.0588205;
	g[123] = 156.215197085809;
	g[124] = 117.416983804282;
	g[125] = 300.51551825;
	g[126] = 147.887674474043;
	g[127] = 110.035201882344;
	}

	return rv;
}

 void
sssd25_04_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (sssd25_04_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd25_04_pd[0] = 1. / v[0];
	sssd25_04_pd[1] = -v[1] * sssd25_04_pd[0];
	v[0] = -v[1];
	t1 = v[0] + x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd25_04_pd[2] = 1. / v[0];
	sssd25_04_pd[3] = -v[1] * sssd25_04_pd[2];
	v[0] = -v[1];
	t1 = v[0] + x[5];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd25_04_pd[4] = 1. / v[0];
	sssd25_04_pd[5] = -v[1] * sssd25_04_pd[4];
	v[0] = -v[1];
	t1 = v[0] + x[6];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd25_04_pd[6] = 1. / v[0];
	sssd25_04_pd[7] = -v[1] * sssd25_04_pd[6];
	v[0] = -v[1];
	t1 = v[0] + x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd25_04_pd[8] = 1. / v[0];
	sssd25_04_pd[9] = -v[1] * sssd25_04_pd[8];
	v[0] = -v[1];
	t1 = v[0] + x[8];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd25_04_pd[10] = 1. / v[0];
	sssd25_04_pd[11] = -v[1] * sssd25_04_pd[10];
	v[0] = -v[1];
	t1 = v[0] + x[9];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd25_04_pd[12] = 1. / v[0];
	sssd25_04_pd[13] = -v[1] * sssd25_04_pd[12];
	v[0] = -v[1];
	t1 = v[0] + x[10];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd25_04_pd[14] = 1. / v[0];
	sssd25_04_pd[15] = -v[1] * sssd25_04_pd[14];
	v[0] = -v[1];
	t1 = v[0] + x[11];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd25_04_pd[16] = 1. / v[0];
	sssd25_04_pd[17] = -v[1] * sssd25_04_pd[16];
	v[0] = -v[1];
	t1 = v[0] + x[12];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd25_04_pd[18] = 1. / v[0];
	sssd25_04_pd[19] = -v[1] * sssd25_04_pd[18];
	v[0] = -v[1];
	t1 = v[0] + x[13];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd25_04_pd[20] = 1. / v[0];
	sssd25_04_pd[21] = -v[1] * sssd25_04_pd[20];
	v[0] = -v[1];
	t1 = v[0] + x[14];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd25_04_pd[22] = 1. / v[0];
	sssd25_04_pd[23] = -v[1] * sssd25_04_pd[22];
	v[0] = -v[1];
	t1 = v[0] + x[15];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -5.2960774859375*x[4];
	t1 += -10.592154971875*x[5];
	t1 += -15.8882324578125*x[6];
	t1 += 1.493016132*x[16];
	t1 += 1.456072816*x[20];
	t1 += 0.993236412*x[24];
	t1 += 1.025966745*x[28];
	t1 += 1.038311423*x[32];
	t1 += 0.674453719*x[36];
	t1 += 1.110104106*x[40];
	t1 += 1.179319831*x[44];
	t1 += 0.560898388*x[48];
	t1 += 1.098374636*x[52];
	t1 += 0.81518723*x[56];
	t1 += 0.558194512*x[60];
	t1 += 1.439212232*x[64];
	t1 += 1.368059775*x[68];
	t1 += 1.096159257*x[72];
	t1 += 1.34695262*x[76];
	t1 += 1.499851813*x[80];
	t1 += 1.138420427*x[84];
	t1 += 1.142989815*x[88];
	t1 += 1.204066374*x[92];
	t1 += 1.342748386*x[96];
	t1 += 0.943180215*x[100];
	t1 += 1.100967989*x[104];
	t1 += 0.659153757*x[108];
	t1 += 1.197148552*x[112];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -4.8209976578125*x[7];
	t1 += -9.641995315625*x[8];
	t1 += -14.4629929734375*x[9];
	t1 += 1.493016132*x[17];
	t1 += 1.456072816*x[21];
	t1 += 0.993236412*x[25];
	t1 += 1.025966745*x[29];
	t1 += 1.038311423*x[33];
	t1 += 0.674453719*x[37];
	t1 += 1.110104106*x[41];
	t1 += 1.179319831*x[45];
	t1 += 0.560898388*x[49];
	t1 += 1.098374636*x[53];
	t1 += 0.81518723*x[57];
	t1 += 0.558194512*x[61];
	t1 += 1.439212232*x[65];
	t1 += 1.368059775*x[69];
	t1 += 1.096159257*x[73];
	t1 += 1.34695262*x[77];
	t1 += 1.499851813*x[81];
	t1 += 1.138420427*x[85];
	t1 += 1.142989815*x[89];
	t1 += 1.204066374*x[93];
	t1 += 1.342748386*x[97];
	t1 += 0.943180215*x[101];
	t1 += 1.100967989*x[105];
	t1 += 0.659153757*x[109];
	t1 += 1.197148552*x[113];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -4.924666325*x[10];
	t1 += -9.84933265*x[11];
	t1 += -14.773998975*x[12];
	t1 += 1.493016132*x[18];
	t1 += 1.456072816*x[22];
	t1 += 0.993236412*x[26];
	t1 += 1.025966745*x[30];
	t1 += 1.038311423*x[34];
	t1 += 0.674453719*x[38];
	t1 += 1.110104106*x[42];
	t1 += 1.179319831*x[46];
	t1 += 0.560898388*x[50];
	t1 += 1.098374636*x[54];
	t1 += 0.81518723*x[58];
	t1 += 0.558194512*x[62];
	t1 += 1.439212232*x[66];
	t1 += 1.368059775*x[70];
	t1 += 1.096159257*x[74];
	t1 += 1.34695262*x[78];
	t1 += 1.499851813*x[82];
	t1 += 1.138420427*x[86];
	t1 += 1.142989815*x[90];
	t1 += 1.204066374*x[94];
	t1 += 1.342748386*x[98];
	t1 += 0.943180215*x[102];
	t1 += 1.100967989*x[106];
	t1 += 0.659153757*x[110];
	t1 += 1.197148552*x[114];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -4.4766575796875*x[13];
	t1 += -8.953315159375*x[14];
	t1 += -13.4299727390625*x[15];
	t1 += 1.493016132*x[19];
	t1 += 1.456072816*x[23];
	t1 += 0.993236412*x[27];
	t1 += 1.025966745*x[31];
	t1 += 1.038311423*x[35];
	t1 += 0.674453719*x[39];
	t1 += 1.110104106*x[43];
	t1 += 1.179319831*x[47];
	t1 += 0.560898388*x[51];
	t1 += 1.098374636*x[55];
	t1 += 0.81518723*x[59];
	t1 += 0.558194512*x[63];
	t1 += 1.439212232*x[67];
	t1 += 1.368059775*x[71];
	t1 += 1.096159257*x[75];
	t1 += 1.34695262*x[79];
	t1 += 1.499851813*x[83];
	t1 += 1.138420427*x[87];
	t1 += 1.142989815*x[91];
	t1 += 1.204066374*x[95];
	t1 += 1.342748386*x[99];
	t1 += 0.943180215*x[103];
	t1 += 1.100967989*x[107];
	t1 += 0.659153757*x[111];
	t1 += 1.197148552*x[115];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[68];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[84];
	t1 += x[85];
	t1 += x[86];
	t1 += x[87];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[88];
	t1 += x[89];
	t1 += x[90];
	t1 += x[91];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[92];
	t1 += x[93];
	t1 += x[94];
	t1 += x[95];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[96];
	t1 += x[97];
	t1 += x[98];
	t1 += x[99];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[100];
	t1 += x[101];
	t1 += x[102];
	t1 += x[103];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[104];
	t1 += x[105];
	t1 += x[106];
	t1 += x[107];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[108];
	t1 += x[109];
	t1 += x[110];
	t1 += x[111];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[112];
	t1 += x[113];
	t1 += x[114];
	t1 += x[115];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[116];
	t1 += x[117];
	t1 += x[118];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[119];
	t1 += x[120];
	t1 += x[121];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[122];
	t1 += x[123];
	t1 += x[124];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[125];
	t1 += x[126];
	t1 += x[127];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[4];
	t1 += -x[116];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[5];
	t1 += -x[117];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[6];
	t1 += -x[118];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[7];
	t1 += -x[119];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[8];
	t1 += -x[120];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[9];
	t1 += -x[121];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[10];
	t1 += -x[122];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[11];
	t1 += -x[123];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[12];
	t1 += -x[124];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[13];
	t1 += -x[125];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[14];
	t1 += -x[126];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[15];
	t1 += -x[127];
	c[56] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -sssd25_04_pd[0];
	J[0] -= sssd25_04_pd[1];
	J[12] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -sssd25_04_pd[2];
	J[1] -= sssd25_04_pd[3];
	J[15] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -sssd25_04_pd[4];
	J[2] -= sssd25_04_pd[5];
	J[18] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -sssd25_04_pd[6];
	J[3] -= sssd25_04_pd[7];
	J[21] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = -sssd25_04_pd[8];
	J[4] -= sssd25_04_pd[9];
	J[24] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = -sssd25_04_pd[10];
	J[5] -= sssd25_04_pd[11];
	J[27] = 1.;

   /*** derivatives for constraint 7 ***/

	J[6] = -sssd25_04_pd[12];
	J[6] -= sssd25_04_pd[13];
	J[30] = 1.;

   /*** derivatives for constraint 8 ***/

	J[7] = -sssd25_04_pd[14];
	J[7] -= sssd25_04_pd[15];
	J[33] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = -sssd25_04_pd[16];
	J[8] -= sssd25_04_pd[17];
	J[36] = 1.;

   /*** derivatives for constraint 10 ***/

	J[9] = -sssd25_04_pd[18];
	J[9] -= sssd25_04_pd[19];
	J[39] = 1.;

   /*** derivatives for constraint 11 ***/

	J[10] = -sssd25_04_pd[20];
	J[10] -= sssd25_04_pd[21];
	J[42] = 1.;

   /*** derivatives for constraint 12 ***/

	J[11] = -sssd25_04_pd[22];
	J[11] -= sssd25_04_pd[23];
	J[45] = 1.;

   /*** derivatives for constraint 13 ***/

	J[13] = -5.2960774859375;
	J[16] = -10.592154971875;
	J[19] = -15.8882324578125;
	J[48] = 1.493016132;
	J[56] = 1.456072816;
	J[64] = 0.993236412;
	J[72] = 1.025966745;
	J[80] = 1.038311423;
	J[88] = 0.674453719;
	J[96] = 1.110104106;
	J[104] = 1.179319831;
	J[112] = 0.560898388;
	J[120] = 1.098374636;
	J[128] = 0.81518723;
	J[136] = 0.558194512;
	J[144] = 1.439212232;
	J[152] = 1.368059775;
	J[160] = 1.096159257;
	J[168] = 1.34695262;
	J[176] = 1.499851813;
	J[184] = 1.138420427;
	J[192] = 1.142989815;
	J[200] = 1.204066374;
	J[208] = 1.342748386;
	J[216] = 0.943180215;
	J[224] = 1.100967989;
	J[232] = 0.659153757;
	J[240] = 1.197148552;

   /*** derivatives for constraint 14 ***/

	J[22] = -4.8209976578125;
	J[25] = -9.641995315625;
	J[28] = -14.4629929734375;
	J[50] = 1.493016132;
	J[58] = 1.456072816;
	J[66] = 0.993236412;
	J[74] = 1.025966745;
	J[82] = 1.038311423;
	J[90] = 0.674453719;
	J[98] = 1.110104106;
	J[106] = 1.179319831;
	J[114] = 0.560898388;
	J[122] = 1.098374636;
	J[130] = 0.81518723;
	J[138] = 0.558194512;
	J[146] = 1.439212232;
	J[154] = 1.368059775;
	J[162] = 1.096159257;
	J[170] = 1.34695262;
	J[178] = 1.499851813;
	J[186] = 1.138420427;
	J[194] = 1.142989815;
	J[202] = 1.204066374;
	J[210] = 1.342748386;
	J[218] = 0.943180215;
	J[226] = 1.100967989;
	J[234] = 0.659153757;
	J[242] = 1.197148552;

   /*** derivatives for constraint 15 ***/

	J[31] = -4.924666325;
	J[34] = -9.84933265;
	J[37] = -14.773998975;
	J[52] = 1.493016132;
	J[60] = 1.456072816;
	J[68] = 0.993236412;
	J[76] = 1.025966745;
	J[84] = 1.038311423;
	J[92] = 0.674453719;
	J[100] = 1.110104106;
	J[108] = 1.179319831;
	J[116] = 0.560898388;
	J[124] = 1.098374636;
	J[132] = 0.81518723;
	J[140] = 0.558194512;
	J[148] = 1.439212232;
	J[156] = 1.368059775;
	J[164] = 1.096159257;
	J[172] = 1.34695262;
	J[180] = 1.499851813;
	J[188] = 1.138420427;
	J[196] = 1.142989815;
	J[204] = 1.204066374;
	J[212] = 1.342748386;
	J[220] = 0.943180215;
	J[228] = 1.100967989;
	J[236] = 0.659153757;
	J[244] = 1.197148552;

   /*** derivatives for constraint 16 ***/

	J[40] = -4.4766575796875;
	J[43] = -8.953315159375;
	J[46] = -13.4299727390625;
	J[54] = 1.493016132;
	J[62] = 1.456072816;
	J[70] = 0.993236412;
	J[78] = 1.025966745;
	J[86] = 1.038311423;
	J[94] = 0.674453719;
	J[102] = 1.110104106;
	J[110] = 1.179319831;
	J[118] = 0.560898388;
	J[126] = 1.098374636;
	J[134] = 0.81518723;
	J[142] = 0.558194512;
	J[150] = 1.439212232;
	J[158] = 1.368059775;
	J[166] = 1.096159257;
	J[174] = 1.34695262;
	J[182] = 1.499851813;
	J[190] = 1.138420427;
	J[198] = 1.142989815;
	J[206] = 1.204066374;
	J[214] = 1.342748386;
	J[222] = 0.943180215;
	J[230] = 1.100967989;
	J[238] = 0.659153757;
	J[246] = 1.197148552;

   /*** derivatives for constraint 17 ***/

	J[49] = 1.;
	J[51] = 1.;
	J[53] = 1.;
	J[55] = 1.;

   /*** derivatives for constraint 18 ***/

	J[57] = 1.;
	J[59] = 1.;
	J[61] = 1.;
	J[63] = 1.;

   /*** derivatives for constraint 19 ***/

	J[65] = 1.;
	J[67] = 1.;
	J[69] = 1.;
	J[71] = 1.;

   /*** derivatives for constraint 20 ***/

	J[73] = 1.;
	J[75] = 1.;
	J[77] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 21 ***/

	J[81] = 1.;
	J[83] = 1.;
	J[85] = 1.;
	J[87] = 1.;

   /*** derivatives for constraint 22 ***/

	J[89] = 1.;
	J[91] = 1.;
	J[93] = 1.;
	J[95] = 1.;

   /*** derivatives for constraint 23 ***/

	J[97] = 1.;
	J[99] = 1.;
	J[101] = 1.;
	J[103] = 1.;

   /*** derivatives for constraint 24 ***/

	J[105] = 1.;
	J[107] = 1.;
	J[109] = 1.;
	J[111] = 1.;

   /*** derivatives for constraint 25 ***/

	J[113] = 1.;
	J[115] = 1.;
	J[117] = 1.;
	J[119] = 1.;

   /*** derivatives for constraint 26 ***/

	J[121] = 1.;
	J[123] = 1.;
	J[125] = 1.;
	J[127] = 1.;

   /*** derivatives for constraint 27 ***/

	J[129] = 1.;
	J[131] = 1.;
	J[133] = 1.;
	J[135] = 1.;

   /*** derivatives for constraint 28 ***/

	J[137] = 1.;
	J[139] = 1.;
	J[141] = 1.;
	J[143] = 1.;

   /*** derivatives for constraint 29 ***/

	J[145] = 1.;
	J[147] = 1.;
	J[149] = 1.;
	J[151] = 1.;

   /*** derivatives for constraint 30 ***/

	J[153] = 1.;
	J[155] = 1.;
	J[157] = 1.;
	J[159] = 1.;

   /*** derivatives for constraint 31 ***/

	J[161] = 1.;
	J[163] = 1.;
	J[165] = 1.;
	J[167] = 1.;

   /*** derivatives for constraint 32 ***/

	J[169] = 1.;
	J[171] = 1.;
	J[173] = 1.;
	J[175] = 1.;

   /*** derivatives for constraint 33 ***/

	J[177] = 1.;
	J[179] = 1.;
	J[181] = 1.;
	J[183] = 1.;

   /*** derivatives for constraint 34 ***/

	J[185] = 1.;
	J[187] = 1.;
	J[189] = 1.;
	J[191] = 1.;

   /*** derivatives for constraint 35 ***/

	J[193] = 1.;
	J[195] = 1.;
	J[197] = 1.;
	J[199] = 1.;

   /*** derivatives for constraint 36 ***/

	J[201] = 1.;
	J[203] = 1.;
	J[205] = 1.;
	J[207] = 1.;

   /*** derivatives for constraint 37 ***/

	J[209] = 1.;
	J[211] = 1.;
	J[213] = 1.;
	J[215] = 1.;

   /*** derivatives for constraint 38 ***/

	J[217] = 1.;
	J[219] = 1.;
	J[221] = 1.;
	J[223] = 1.;

   /*** derivatives for constraint 39 ***/

	J[225] = 1.;
	J[227] = 1.;
	J[229] = 1.;
	J[231] = 1.;

   /*** derivatives for constraint 40 ***/

	J[233] = 1.;
	J[235] = 1.;
	J[237] = 1.;
	J[239] = 1.;

   /*** derivatives for constraint 41 ***/

	J[241] = 1.;
	J[243] = 1.;
	J[245] = 1.;
	J[247] = 1.;

   /*** derivatives for constraint 42 ***/

	J[248] = 1.;
	J[250] = 1.;
	J[252] = 1.;

   /*** derivatives for constraint 43 ***/

	J[254] = 1.;
	J[256] = 1.;
	J[258] = 1.;

   /*** derivatives for constraint 44 ***/

	J[260] = 1.;
	J[262] = 1.;
	J[264] = 1.;

   /*** derivatives for constraint 45 ***/

	J[266] = 1.;
	J[268] = 1.;
	J[270] = 1.;

   /*** derivatives for constraint 46 ***/

	J[14] = 1.;
	J[249] = -1.;

   /*** derivatives for constraint 47 ***/

	J[17] = 1.;
	J[251] = -1.;

   /*** derivatives for constraint 48 ***/

	J[20] = 1.;
	J[253] = -1.;

   /*** derivatives for constraint 49 ***/

	J[23] = 1.;
	J[255] = -1.;

   /*** derivatives for constraint 50 ***/

	J[26] = 1.;
	J[257] = -1.;

   /*** derivatives for constraint 51 ***/

	J[29] = 1.;
	J[259] = -1.;

   /*** derivatives for constraint 52 ***/

	J[32] = 1.;
	J[261] = -1.;

   /*** derivatives for constraint 53 ***/

	J[35] = 1.;
	J[263] = -1.;

   /*** derivatives for constraint 54 ***/

	J[38] = 1.;
	J[265] = -1.;

   /*** derivatives for constraint 55 ***/

	J[41] = 1.;
	J[267] = -1.;

   /*** derivatives for constraint 56 ***/

	J[44] = 1.;
	J[269] = -1.;

   /*** derivatives for constraint 57 ***/

	J[47] = 1.;
	J[271] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
