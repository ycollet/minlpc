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
 fint sssd25_04persp_auxcom_[1] = { 12 /* nlc */ };
 fint sssd25_04persp_funcom_[419] = {
	128 /* nvar */,
	1 /* nobj */,
	57 /* ncon */,
	284 /* nzc */,
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
	52,
	55,
	58,
	61,
	64,
	67,
	70,
	73,
	76,
	79,
	82,
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
	275,
	277,
	279,
	281,
	283,
	285,

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
	1,
	42,
	46,
	2,
	42,
	47,
	3,
	42,
	48,
	4,
	43,
	49,
	5,
	43,
	50,
	6,
	43,
	51,
	7,
	44,
	52,
	8,
	44,
	53,
	9,
	44,
	54,
	10,
	45,
	55,
	11,
	45,
	56,
	12,
	45,
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
	41 };

 real sssd25_04persp_boundc_[1+256+114] /* Infinity, variable bounds, constraint bounds */ = {
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

 real sssd25_04persp_x0comn_[128] = {
		1.84609632242111,
		2.47900149079549,
		2.30645349772837,
		3.29868478857466,
		0.216213849109492,
		0.216213849109492,
		0.216213849109492,
		0.237520401313832,
		0.237520401313832,
		0.237520401313832,
		0.232520382671138,
		0.232520382671138,
		0.232520382671138,
		0.255790235914493,
		0.255790235914493,
		0.255790235914493,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25,
		0.25 };

static real sssd25_04persp_old_x[128];
static int sssd25_04persp_xkind = -1;

 static int
sssd25_04persp_xcheck(real *x)
{
	real *x1 = sssd25_04persp_old_x, *xe = x + 128;
	errno = 0;
	if (sssd25_04persp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sssd25_04persp_xkind = 0;
	return 1;
	}
 real
sssd25_04persp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sssd25_04persp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 83308.5816488132*x[0];
	rv += 83308.5816488132*x[1];
	rv += 83308.5816488132*x[2];
	rv += 83308.5816488132*x[3];
	rv += 489.84367475*x[16];
	rv += 216.633855557639*x[17];
	rv += 152.801343309708*x[18];
	rv += 384.081627*x[19];
	rv += 178.524432787122*x[20];
	rv += 129.092639672378*x[21];
	rv += 311.0588205*x[22];
	rv += 156.215197085809*x[23];
	rv += 117.416983804282*x[24];
	rv += 300.51551825*x[25];
	rv += 147.887674474043*x[26];
	rv += 110.035201882344*x[27];
	rv += 476.627680186915*x[28];
	rv += 149.653586784487*x[29];
	rv += 213.186384418957*x[30];
	rv += 43.7888464292729*x[31];
	rv += 474.830868219332*x[32];
	rv += 804.41120755867*x[33];
	rv += 584.914840194532*x[34];
	rv += 661.646071204307*x[35];
	rv += 392.259337390379*x[36];
	rv += 142.80919923228*x[37];
	rv += 218.980029277262*x[38];
	rv += 104.519355726959*x[39];
	rv += 314.988665746119*x[40];
	rv += 501.761182472619*x[41];
	rv += 416.807578457382*x[42];
	rv += 524.390259195122*x[43];
	rv += 362.341095830922*x[44];
	rv += 441.362501912098*x[45];
	rv += 402.716752066181*x[46];
	rv += 492.339440818786*x[47];
	rv += 290.964161684016*x[48];
	rv += 116.368122158017*x[49];
	rv += 173.712811065166*x[50];
	rv += 95.9656692808925*x[51];
	rv += 443.684333533333*x[52];
	rv += 176.081128582949*x[53];
	rv += 302.39173954457*x[54];
	rv += 293.29371225224*x[55];
	rv += 476.763266014932*x[56];
	rv += 183.917148897559*x[57];
	rv += 272.205185020914*x[58];
	rv += 136.278105402226*x[59];
	rv += 101.35843572405*x[60];
	rv += 193.942699651262*x[61];
	rv += 141.921469465657*x[62];
	rv += 201.173648709993*x[63];
	rv += 132.921832386141*x[64];
	rv += 421.655945550644*x[65];
	rv += 281.212652600547*x[66];
	rv += 407.005327357163*x[67];
	rv += 202.365762241646*x[68];
	rv += 137.219422282215*x[69];
	rv += 132.146952277583*x[70];
	rv += 179.383015135974*x[71];
	rv += 123.618453957013*x[72];
	rv += 297.215252315231*x[73];
	rv += 218.762870620071*x[74];
	rv += 282.961164098487*x[75];
	rv += 20.13413882933*x[76];
	rv += 497.103669118494*x[77];
	rv += 268.341006965987*x[78];
	rv += 427.522422721593*x[79];
	rv += 210.032834185575*x[80];
	rv += 434.311463333895*x[81];
	rv += 298.270736776993*x[82];
	rv += 444.612005461353*x[83];
	rv += 211.951029854733*x[84];
	rv += 447.318981178372*x[85];
	rv += 332.208676638743*x[86];
	rv += 453.095321147229*x[87];
	rv += 435.628401127826*x[88];
	rv += 771.659835894158*x[89];
	rv += 623.845701115879*x[90];
	rv += 775.557667039354*x[91];
	rv += 424.738471081496*x[92];
	rv += 833.085816488132*x[93];
	rv += 592.460027321246*x[94];
	rv += 700.942808077211*x[95];
	rv += 229.947132383408*x[96];
	rv += 586.218425366478*x[97];
	rv += 424.710208954907*x[98];
	rv += 555.528795297853*x[99];
	rv += 327.711607414859*x[100];
	rv += 238.953801669268*x[101];
	rv += 251.293372908654*x[102];
	rv += 313.742954288217*x[103];
	rv += 478.24585803249*x[104];
	rv += 80.7823868731141*x[105];
	rv += 266.940737208009*x[106];
	rv += 164.458228751629*x[107];
	rv += 332.729569180138*x[108];
	rv += 388.723389119461*x[109];
	rv += 237.094588860685*x[110];
	rv += 245.459595758858*x[111];
	rv += 170.849806397817*x[112];
	rv += 170.734963967704*x[113];
	rv += 30.8907942571205*x[114];
	rv += 104.086188009457*x[115];
	rv += 66.4196868291459*x[116];
	rv += 312.344045852442*x[117];
	rv += 151.766233459965*x[118];
	rv += 278.677297797007*x[119];
	rv += 205.289077931114*x[120];
	rv += 86.9146012652412*x[121];
	rv += 127.990999929026*x[122];
	rv += 141.658946009938*x[123];
	rv += 588.039796501339*x[124];
	rv += 363.309460856624*x[125];
	rv += 476.707321955199*x[126];
	rv += 487.438573778052*x[127];
	;}

	if (wantfg & 2) {
	g[0] = 83308.5816488132;
	g[1] = 83308.5816488132;
	g[2] = 83308.5816488132;
	g[3] = 83308.5816488132;
	g[16] = 489.84367475;
	g[17] = 216.633855557639;
	g[18] = 152.801343309708;
	g[19] = 384.081627;
	g[20] = 178.524432787122;
	g[21] = 129.092639672378;
	g[22] = 311.0588205;
	g[23] = 156.215197085809;
	g[24] = 117.416983804282;
	g[25] = 300.51551825;
	g[26] = 147.887674474043;
	g[27] = 110.035201882344;
	g[28] = 476.627680186915;
	g[29] = 149.653586784487;
	g[30] = 213.186384418957;
	g[31] = 43.7888464292729;
	g[32] = 474.830868219332;
	g[33] = 804.41120755867;
	g[34] = 584.914840194532;
	g[35] = 661.646071204307;
	g[36] = 392.259337390379;
	g[37] = 142.80919923228;
	g[38] = 218.980029277262;
	g[39] = 104.519355726959;
	g[40] = 314.988665746119;
	g[41] = 501.761182472619;
	g[42] = 416.807578457382;
	g[43] = 524.390259195122;
	g[44] = 362.341095830922;
	g[45] = 441.362501912098;
	g[46] = 402.716752066181;
	g[47] = 492.339440818786;
	g[48] = 290.964161684016;
	g[49] = 116.368122158017;
	g[50] = 173.712811065166;
	g[51] = 95.9656692808925;
	g[52] = 443.684333533333;
	g[53] = 176.081128582949;
	g[54] = 302.39173954457;
	g[55] = 293.29371225224;
	g[56] = 476.763266014932;
	g[57] = 183.917148897559;
	g[58] = 272.205185020914;
	g[59] = 136.278105402226;
	g[60] = 101.35843572405;
	g[61] = 193.942699651262;
	g[62] = 141.921469465657;
	g[63] = 201.173648709993;
	g[64] = 132.921832386141;
	g[65] = 421.655945550644;
	g[66] = 281.212652600547;
	g[67] = 407.005327357163;
	g[68] = 202.365762241646;
	g[69] = 137.219422282215;
	g[70] = 132.146952277583;
	g[71] = 179.383015135974;
	g[72] = 123.618453957013;
	g[73] = 297.215252315231;
	g[74] = 218.762870620071;
	g[75] = 282.961164098487;
	g[76] = 20.13413882933;
	g[77] = 497.103669118494;
	g[78] = 268.341006965987;
	g[79] = 427.522422721593;
	g[80] = 210.032834185575;
	g[81] = 434.311463333895;
	g[82] = 298.270736776993;
	g[83] = 444.612005461353;
	g[84] = 211.951029854733;
	g[85] = 447.318981178372;
	g[86] = 332.208676638743;
	g[87] = 453.095321147229;
	g[88] = 435.628401127826;
	g[89] = 771.659835894158;
	g[90] = 623.845701115879;
	g[91] = 775.557667039354;
	g[92] = 424.738471081496;
	g[93] = 833.085816488132;
	g[94] = 592.460027321246;
	g[95] = 700.942808077211;
	g[96] = 229.947132383408;
	g[97] = 586.218425366478;
	g[98] = 424.710208954907;
	g[99] = 555.528795297853;
	g[100] = 327.711607414859;
	g[101] = 238.953801669268;
	g[102] = 251.293372908654;
	g[103] = 313.742954288217;
	g[104] = 478.24585803249;
	g[105] = 80.7823868731141;
	g[106] = 266.940737208009;
	g[107] = 164.458228751629;
	g[108] = 332.729569180138;
	g[109] = 388.723389119461;
	g[110] = 237.094588860685;
	g[111] = 245.459595758858;
	g[112] = 170.849806397817;
	g[113] = 170.734963967704;
	g[114] = 30.8907942571205;
	g[115] = 104.086188009457;
	g[116] = 66.4196868291459;
	g[117] = 312.344045852442;
	g[118] = 151.766233459965;
	g[119] = 278.677297797007;
	g[120] = 205.289077931114;
	g[121] = 86.9146012652412;
	g[122] = 127.990999929026;
	g[123] = 141.658946009938;
	g[124] = 588.039796501339;
	g[125] = 363.309460856624;
	g[126] = 476.707321955199;
	g[127] = 487.438573778052;
	}

	return rv;
}

 void
sssd25_04persp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sssd25_04persp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[4] * x[16];
	v[1] = x[4] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[16];
	v[2] = -v[1];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[5] * x[17];
	v[1] = x[5] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[17];
	v[2] = -v[1];
	v[0] += v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[6] * x[18];
	v[1] = x[6] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[18];
	v[2] = -v[1];
	v[0] += v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[7] * x[19];
	v[1] = x[7] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[19];
	v[2] = -v[1];
	v[0] += v[2];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[8] * x[20];
	v[1] = x[8] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[9] * x[21];
	v[1] = x[9] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[10] * x[22];
	v[1] = x[10] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[11] * x[23];
	v[1] = x[11] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[12] * x[24];
	v[1] = x[12] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[13] * x[25];
	v[1] = x[13] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[14] * x[26];
	v[1] = x[14] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[15] * x[27];
	v[1] = x[15] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	c[11] = v[0];

  /***  constraint 13  ***/

	t1 = -5.2960774859375*x[4];
	t1 += -10.592154971875*x[5];
	t1 += -15.8882324578125*x[6];
	t1 += 1.493016132*x[28];
	t1 += 1.456072816*x[32];
	t1 += 0.993236412*x[36];
	t1 += 1.025966745*x[40];
	t1 += 1.038311423*x[44];
	t1 += 0.674453719*x[48];
	t1 += 1.110104106*x[52];
	t1 += 1.179319831*x[56];
	t1 += 0.560898388*x[60];
	t1 += 1.098374636*x[64];
	t1 += 0.81518723*x[68];
	t1 += 0.558194512*x[72];
	t1 += 1.439212232*x[76];
	t1 += 1.368059775*x[80];
	t1 += 1.096159257*x[84];
	t1 += 1.34695262*x[88];
	t1 += 1.499851813*x[92];
	t1 += 1.138420427*x[96];
	t1 += 1.142989815*x[100];
	t1 += 1.204066374*x[104];
	t1 += 1.342748386*x[108];
	t1 += 0.943180215*x[112];
	t1 += 1.100967989*x[116];
	t1 += 0.659153757*x[120];
	t1 += 1.197148552*x[124];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -4.8209976578125*x[7];
	t1 += -9.641995315625*x[8];
	t1 += -14.4629929734375*x[9];
	t1 += 1.493016132*x[29];
	t1 += 1.456072816*x[33];
	t1 += 0.993236412*x[37];
	t1 += 1.025966745*x[41];
	t1 += 1.038311423*x[45];
	t1 += 0.674453719*x[49];
	t1 += 1.110104106*x[53];
	t1 += 1.179319831*x[57];
	t1 += 0.560898388*x[61];
	t1 += 1.098374636*x[65];
	t1 += 0.81518723*x[69];
	t1 += 0.558194512*x[73];
	t1 += 1.439212232*x[77];
	t1 += 1.368059775*x[81];
	t1 += 1.096159257*x[85];
	t1 += 1.34695262*x[89];
	t1 += 1.499851813*x[93];
	t1 += 1.138420427*x[97];
	t1 += 1.142989815*x[101];
	t1 += 1.204066374*x[105];
	t1 += 1.342748386*x[109];
	t1 += 0.943180215*x[113];
	t1 += 1.100967989*x[117];
	t1 += 0.659153757*x[121];
	t1 += 1.197148552*x[125];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -4.924666325*x[10];
	t1 += -9.84933265*x[11];
	t1 += -14.773998975*x[12];
	t1 += 1.493016132*x[30];
	t1 += 1.456072816*x[34];
	t1 += 0.993236412*x[38];
	t1 += 1.025966745*x[42];
	t1 += 1.038311423*x[46];
	t1 += 0.674453719*x[50];
	t1 += 1.110104106*x[54];
	t1 += 1.179319831*x[58];
	t1 += 0.560898388*x[62];
	t1 += 1.098374636*x[66];
	t1 += 0.81518723*x[70];
	t1 += 0.558194512*x[74];
	t1 += 1.439212232*x[78];
	t1 += 1.368059775*x[82];
	t1 += 1.096159257*x[86];
	t1 += 1.34695262*x[90];
	t1 += 1.499851813*x[94];
	t1 += 1.138420427*x[98];
	t1 += 1.142989815*x[102];
	t1 += 1.204066374*x[106];
	t1 += 1.342748386*x[110];
	t1 += 0.943180215*x[114];
	t1 += 1.100967989*x[118];
	t1 += 0.659153757*x[122];
	t1 += 1.197148552*x[126];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -4.4766575796875*x[13];
	t1 += -8.953315159375*x[14];
	t1 += -13.4299727390625*x[15];
	t1 += 1.493016132*x[31];
	t1 += 1.456072816*x[35];
	t1 += 0.993236412*x[39];
	t1 += 1.025966745*x[43];
	t1 += 1.038311423*x[47];
	t1 += 0.674453719*x[51];
	t1 += 1.110104106*x[55];
	t1 += 1.179319831*x[59];
	t1 += 0.560898388*x[63];
	t1 += 1.098374636*x[67];
	t1 += 0.81518723*x[71];
	t1 += 0.558194512*x[75];
	t1 += 1.439212232*x[79];
	t1 += 1.368059775*x[83];
	t1 += 1.096159257*x[87];
	t1 += 1.34695262*x[91];
	t1 += 1.499851813*x[95];
	t1 += 1.138420427*x[99];
	t1 += 1.142989815*x[103];
	t1 += 1.204066374*x[107];
	t1 += 1.342748386*x[111];
	t1 += 0.943180215*x[115];
	t1 += 1.100967989*x[119];
	t1 += 0.659153757*x[123];
	t1 += 1.197148552*x[127];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[48];
	t1 += x[49];
	t1 += x[50];
	t1 += x[51];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[68];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[72];
	t1 += x[73];
	t1 += x[74];
	t1 += x[75];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[84];
	t1 += x[85];
	t1 += x[86];
	t1 += x[87];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[88];
	t1 += x[89];
	t1 += x[90];
	t1 += x[91];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[92];
	t1 += x[93];
	t1 += x[94];
	t1 += x[95];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[96];
	t1 += x[97];
	t1 += x[98];
	t1 += x[99];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[100];
	t1 += x[101];
	t1 += x[102];
	t1 += x[103];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[104];
	t1 += x[105];
	t1 += x[106];
	t1 += x[107];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[108];
	t1 += x[109];
	t1 += x[110];
	t1 += x[111];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[112];
	t1 += x[113];
	t1 += x[114];
	t1 += x[115];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[116];
	t1 += x[117];
	t1 += x[118];
	t1 += x[119];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[120];
	t1 += x[121];
	t1 += x[122];
	t1 += x[123];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[124];
	t1 += x[125];
	t1 += x[126];
	t1 += x[127];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[16];
	t1 += x[17];
	t1 += x[18];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[19];
	t1 += x[20];
	t1 += x[21];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[22];
	t1 += x[23];
	t1 += x[24];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += x[27];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[4];
	t1 += -x[16];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[5];
	t1 += -x[17];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[6];
	t1 += -x[18];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[7];
	t1 += -x[19];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[8];
	t1 += -x[20];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[9];
	t1 += -x[21];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[10];
	t1 += -x[22];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[11];
	t1 += -x[23];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[12];
	t1 += -x[24];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[13];
	t1 += -x[25];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[14];
	t1 += -x[26];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[15];
	t1 += -x[27];
	c[56] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[48] = -x[0];
	J[0] = -x[16];
	J[0] += x[4];
	J[12] = x[0];
	J[48] += x[4];
	J[12] += x[16];

   /*** derivatives for constraint 2 ***/

	J[51] = -x[0];
	J[1] = -x[17];
	J[1] += x[5];
	J[15] = x[0];
	J[51] += x[5];
	J[15] += x[17];

   /*** derivatives for constraint 3 ***/

	J[54] = -x[0];
	J[2] = -x[18];
	J[2] += x[6];
	J[18] = x[0];
	J[54] += x[6];
	J[18] += x[18];

   /*** derivatives for constraint 4 ***/

	J[57] = -x[1];
	J[3] = -x[19];
	J[3] += x[7];
	J[21] = x[1];
	J[57] += x[7];
	J[21] += x[19];

   /*** derivatives for constraint 5 ***/

	J[60] = -x[1];
	J[4] = -x[20];
	J[4] += x[8];
	J[24] = x[1];
	J[60] += x[8];
	J[24] += x[20];

   /*** derivatives for constraint 6 ***/

	J[63] = -x[1];
	J[5] = -x[21];
	J[5] += x[9];
	J[27] = x[1];
	J[63] += x[9];
	J[27] += x[21];

   /*** derivatives for constraint 7 ***/

	J[66] = -x[2];
	J[6] = -x[22];
	J[6] += x[10];
	J[30] = x[2];
	J[66] += x[10];
	J[30] += x[22];

   /*** derivatives for constraint 8 ***/

	J[69] = -x[2];
	J[7] = -x[23];
	J[7] += x[11];
	J[33] = x[2];
	J[69] += x[11];
	J[33] += x[23];

   /*** derivatives for constraint 9 ***/

	J[72] = -x[2];
	J[8] = -x[24];
	J[8] += x[12];
	J[36] = x[2];
	J[72] += x[12];
	J[36] += x[24];

   /*** derivatives for constraint 10 ***/

	J[75] = -x[3];
	J[9] = -x[25];
	J[9] += x[13];
	J[39] = x[3];
	J[75] += x[13];
	J[39] += x[25];

   /*** derivatives for constraint 11 ***/

	J[78] = -x[3];
	J[10] = -x[26];
	J[10] += x[14];
	J[42] = x[3];
	J[78] += x[14];
	J[42] += x[26];

   /*** derivatives for constraint 12 ***/

	J[81] = -x[3];
	J[11] = -x[27];
	J[11] += x[15];
	J[45] = x[3];
	J[81] += x[15];
	J[45] += x[27];

   /*** derivatives for constraint 13 ***/

	J[13] = -5.2960774859375;
	J[16] = -10.592154971875;
	J[19] = -15.8882324578125;
	J[84] = 1.493016132;
	J[92] = 1.456072816;
	J[100] = 0.993236412;
	J[108] = 1.025966745;
	J[116] = 1.038311423;
	J[124] = 0.674453719;
	J[132] = 1.110104106;
	J[140] = 1.179319831;
	J[148] = 0.560898388;
	J[156] = 1.098374636;
	J[164] = 0.81518723;
	J[172] = 0.558194512;
	J[180] = 1.439212232;
	J[188] = 1.368059775;
	J[196] = 1.096159257;
	J[204] = 1.34695262;
	J[212] = 1.499851813;
	J[220] = 1.138420427;
	J[228] = 1.142989815;
	J[236] = 1.204066374;
	J[244] = 1.342748386;
	J[252] = 0.943180215;
	J[260] = 1.100967989;
	J[268] = 0.659153757;
	J[276] = 1.197148552;

   /*** derivatives for constraint 14 ***/

	J[22] = -4.8209976578125;
	J[25] = -9.641995315625;
	J[28] = -14.4629929734375;
	J[86] = 1.493016132;
	J[94] = 1.456072816;
	J[102] = 0.993236412;
	J[110] = 1.025966745;
	J[118] = 1.038311423;
	J[126] = 0.674453719;
	J[134] = 1.110104106;
	J[142] = 1.179319831;
	J[150] = 0.560898388;
	J[158] = 1.098374636;
	J[166] = 0.81518723;
	J[174] = 0.558194512;
	J[182] = 1.439212232;
	J[190] = 1.368059775;
	J[198] = 1.096159257;
	J[206] = 1.34695262;
	J[214] = 1.499851813;
	J[222] = 1.138420427;
	J[230] = 1.142989815;
	J[238] = 1.204066374;
	J[246] = 1.342748386;
	J[254] = 0.943180215;
	J[262] = 1.100967989;
	J[270] = 0.659153757;
	J[278] = 1.197148552;

   /*** derivatives for constraint 15 ***/

	J[31] = -4.924666325;
	J[34] = -9.84933265;
	J[37] = -14.773998975;
	J[88] = 1.493016132;
	J[96] = 1.456072816;
	J[104] = 0.993236412;
	J[112] = 1.025966745;
	J[120] = 1.038311423;
	J[128] = 0.674453719;
	J[136] = 1.110104106;
	J[144] = 1.179319831;
	J[152] = 0.560898388;
	J[160] = 1.098374636;
	J[168] = 0.81518723;
	J[176] = 0.558194512;
	J[184] = 1.439212232;
	J[192] = 1.368059775;
	J[200] = 1.096159257;
	J[208] = 1.34695262;
	J[216] = 1.499851813;
	J[224] = 1.138420427;
	J[232] = 1.142989815;
	J[240] = 1.204066374;
	J[248] = 1.342748386;
	J[256] = 0.943180215;
	J[264] = 1.100967989;
	J[272] = 0.659153757;
	J[280] = 1.197148552;

   /*** derivatives for constraint 16 ***/

	J[40] = -4.4766575796875;
	J[43] = -8.953315159375;
	J[46] = -13.4299727390625;
	J[90] = 1.493016132;
	J[98] = 1.456072816;
	J[106] = 0.993236412;
	J[114] = 1.025966745;
	J[122] = 1.038311423;
	J[130] = 0.674453719;
	J[138] = 1.110104106;
	J[146] = 1.179319831;
	J[154] = 0.560898388;
	J[162] = 1.098374636;
	J[170] = 0.81518723;
	J[178] = 0.558194512;
	J[186] = 1.439212232;
	J[194] = 1.368059775;
	J[202] = 1.096159257;
	J[210] = 1.34695262;
	J[218] = 1.499851813;
	J[226] = 1.138420427;
	J[234] = 1.142989815;
	J[242] = 1.204066374;
	J[250] = 1.342748386;
	J[258] = 0.943180215;
	J[266] = 1.100967989;
	J[274] = 0.659153757;
	J[282] = 1.197148552;

   /*** derivatives for constraint 17 ***/

	J[85] = 1.;
	J[87] = 1.;
	J[89] = 1.;
	J[91] = 1.;

   /*** derivatives for constraint 18 ***/

	J[93] = 1.;
	J[95] = 1.;
	J[97] = 1.;
	J[99] = 1.;

   /*** derivatives for constraint 19 ***/

	J[101] = 1.;
	J[103] = 1.;
	J[105] = 1.;
	J[107] = 1.;

   /*** derivatives for constraint 20 ***/

	J[109] = 1.;
	J[111] = 1.;
	J[113] = 1.;
	J[115] = 1.;

   /*** derivatives for constraint 21 ***/

	J[117] = 1.;
	J[119] = 1.;
	J[121] = 1.;
	J[123] = 1.;

   /*** derivatives for constraint 22 ***/

	J[125] = 1.;
	J[127] = 1.;
	J[129] = 1.;
	J[131] = 1.;

   /*** derivatives for constraint 23 ***/

	J[133] = 1.;
	J[135] = 1.;
	J[137] = 1.;
	J[139] = 1.;

   /*** derivatives for constraint 24 ***/

	J[141] = 1.;
	J[143] = 1.;
	J[145] = 1.;
	J[147] = 1.;

   /*** derivatives for constraint 25 ***/

	J[149] = 1.;
	J[151] = 1.;
	J[153] = 1.;
	J[155] = 1.;

   /*** derivatives for constraint 26 ***/

	J[157] = 1.;
	J[159] = 1.;
	J[161] = 1.;
	J[163] = 1.;

   /*** derivatives for constraint 27 ***/

	J[165] = 1.;
	J[167] = 1.;
	J[169] = 1.;
	J[171] = 1.;

   /*** derivatives for constraint 28 ***/

	J[173] = 1.;
	J[175] = 1.;
	J[177] = 1.;
	J[179] = 1.;

   /*** derivatives for constraint 29 ***/

	J[181] = 1.;
	J[183] = 1.;
	J[185] = 1.;
	J[187] = 1.;

   /*** derivatives for constraint 30 ***/

	J[189] = 1.;
	J[191] = 1.;
	J[193] = 1.;
	J[195] = 1.;

   /*** derivatives for constraint 31 ***/

	J[197] = 1.;
	J[199] = 1.;
	J[201] = 1.;
	J[203] = 1.;

   /*** derivatives for constraint 32 ***/

	J[205] = 1.;
	J[207] = 1.;
	J[209] = 1.;
	J[211] = 1.;

   /*** derivatives for constraint 33 ***/

	J[213] = 1.;
	J[215] = 1.;
	J[217] = 1.;
	J[219] = 1.;

   /*** derivatives for constraint 34 ***/

	J[221] = 1.;
	J[223] = 1.;
	J[225] = 1.;
	J[227] = 1.;

   /*** derivatives for constraint 35 ***/

	J[229] = 1.;
	J[231] = 1.;
	J[233] = 1.;
	J[235] = 1.;

   /*** derivatives for constraint 36 ***/

	J[237] = 1.;
	J[239] = 1.;
	J[241] = 1.;
	J[243] = 1.;

   /*** derivatives for constraint 37 ***/

	J[245] = 1.;
	J[247] = 1.;
	J[249] = 1.;
	J[251] = 1.;

   /*** derivatives for constraint 38 ***/

	J[253] = 1.;
	J[255] = 1.;
	J[257] = 1.;
	J[259] = 1.;

   /*** derivatives for constraint 39 ***/

	J[261] = 1.;
	J[263] = 1.;
	J[265] = 1.;
	J[267] = 1.;

   /*** derivatives for constraint 40 ***/

	J[269] = 1.;
	J[271] = 1.;
	J[273] = 1.;
	J[275] = 1.;

   /*** derivatives for constraint 41 ***/

	J[277] = 1.;
	J[279] = 1.;
	J[281] = 1.;
	J[283] = 1.;

   /*** derivatives for constraint 42 ***/

	J[49] = 1.;
	J[52] = 1.;
	J[55] = 1.;

   /*** derivatives for constraint 43 ***/

	J[58] = 1.;
	J[61] = 1.;
	J[64] = 1.;

   /*** derivatives for constraint 44 ***/

	J[67] = 1.;
	J[70] = 1.;
	J[73] = 1.;

   /*** derivatives for constraint 45 ***/

	J[76] = 1.;
	J[79] = 1.;
	J[82] = 1.;

   /*** derivatives for constraint 46 ***/

	J[14] = 1.;
	J[50] = -1.;

   /*** derivatives for constraint 47 ***/

	J[17] = 1.;
	J[53] = -1.;

   /*** derivatives for constraint 48 ***/

	J[20] = 1.;
	J[56] = -1.;

   /*** derivatives for constraint 49 ***/

	J[23] = 1.;
	J[59] = -1.;

   /*** derivatives for constraint 50 ***/

	J[26] = 1.;
	J[62] = -1.;

   /*** derivatives for constraint 51 ***/

	J[29] = 1.;
	J[65] = -1.;

   /*** derivatives for constraint 52 ***/

	J[32] = 1.;
	J[68] = -1.;

   /*** derivatives for constraint 53 ***/

	J[35] = 1.;
	J[71] = -1.;

   /*** derivatives for constraint 54 ***/

	J[38] = 1.;
	J[74] = -1.;

   /*** derivatives for constraint 55 ***/

	J[41] = 1.;
	J[77] = -1.;

   /*** derivatives for constraint 56 ***/

	J[44] = 1.;
	J[80] = -1.;

   /*** derivatives for constraint 57 ***/

	J[47] = 1.;
	J[83] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
