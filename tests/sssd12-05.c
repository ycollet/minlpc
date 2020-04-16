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
 fint sssd12_05_auxcom_[1] = { 15 /* nlc */ };
 fint sssd12_05_funcom_[312] = {
	95 /* nvar */,
	1 /* nobj */,
	52 /* ncon */,
	210 /* nzc */,
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
	13,
	14,
	15,
	1,
	16,
	38,
	2,
	16,
	39,
	3,
	16,
	40,
	4,
	17,
	41,
	5,
	17,
	42,
	6,
	17,
	43,
	7,
	18,
	44,
	8,
	18,
	45,
	9,
	18,
	46,
	10,
	19,
	47,
	11,
	19,
	48,
	12,
	19,
	49,
	13,
	20,
	50,
	14,
	20,
	51,
	15,
	20,
	52,
	16,
	21,
	17,
	21,
	18,
	21,
	19,
	21,
	20,
	21,
	16,
	22,
	17,
	22,
	18,
	22,
	19,
	22,
	20,
	22,
	16,
	23,
	17,
	23,
	18,
	23,
	19,
	23,
	20,
	23,
	16,
	24,
	17,
	24,
	18,
	24,
	19,
	24,
	20,
	24,
	16,
	25,
	17,
	25,
	18,
	25,
	19,
	25,
	20,
	25,
	16,
	26,
	17,
	26,
	18,
	26,
	19,
	26,
	20,
	26,
	16,
	27,
	17,
	27,
	18,
	27,
	19,
	27,
	20,
	27,
	16,
	28,
	17,
	28,
	18,
	28,
	19,
	28,
	20,
	28,
	16,
	29,
	17,
	29,
	18,
	29,
	19,
	29,
	20,
	29,
	16,
	30,
	17,
	30,
	18,
	30,
	19,
	30,
	20,
	30,
	16,
	31,
	17,
	31,
	18,
	31,
	19,
	31,
	20,
	31,
	16,
	32,
	17,
	32,
	18,
	32,
	19,
	32,
	20,
	32,
	33,
	38,
	33,
	39,
	33,
	40,
	34,
	41,
	34,
	42,
	34,
	43,
	35,
	44,
	35,
	45,
	35,
	46,
	36,
	47,
	36,
	48,
	36,
	49,
	37,
	50,
	37,
	51,
	37,
	52 };

 real sssd12_05_boundc_[1+190+104] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		-1.7e308,
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
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		0.};

 real sssd12_05_x0comn_[95] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real sssd12_05_pd[30];
static real sssd12_05_old_x[95];
static int sssd12_05_xkind = -1;

 static int
sssd12_05_xcheck(real *x)
{
	real *x1 = sssd12_05_old_x, *xe = x + 95;
	errno = 0;
	if (sssd12_05_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sssd12_05_xkind = 0;
	return 1;
	}
 real
sssd12_05_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sssd12_05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 93617.1150833806*x[0];
	rv += 93617.1150833806*x[1];
	rv += 93617.1150833806*x[2];
	rv += 93617.1150833806*x[3];
	rv += 93617.1150833806*x[4];
	rv += 301.899928098152*x[20];
	rv += 282.051473607022*x[21];
	rv += 151.594044960674*x[22];
	rv += 114.784185877557*x[23];
	rv += 213.364530716922*x[24];
	rv += 772.653148294131*x[25];
	rv += 697.676211791334*x[26];
	rv += 146.306371684975*x[27];
	rv += 390.583393857486*x[28];
	rv += 208.147527440482*x[29];
	rv += 662.892902187869*x[30];
	rv += 577.461337631217*x[31];
	rv += 221.10047354739*x[32];
	rv += 425.919826737657*x[33];
	rv += 123.074770812851*x[34];
	rv += 333.28129673946*x[35];
	rv += 248.380746723092*x[36];
	rv += 249.162942146638*x[37];
	rv += 164.598799150643*x[38];
	rv += 280.957171099846*x[39];
	rv += 308.552481034871*x[40];
	rv += 270.059605282374*x[41];
	rv += 104.633483616243*x[42];
	rv += 79.6631898566695*x[43];
	rv += 170.696237801571*x[44];
	rv += 237.754076296143*x[45];
	rv += 189.862911729786*x[46];
	rv += 107.217531395173*x[47];
	rv += 131.358715293396*x[48];
	rv += 103.406777059692*x[49];
	rv += 626.417763832299*x[50];
	rv += 487.184730842973*x[51];
	rv += 502.300580630229*x[52];
	rv += 506.426352475088*x[53];
	rv += 463.185748318154*x[54];
	rv += 358.178221555384*x[55];
	rv += 281.629247221142*x[56];
	rv += 230.4203839171*x[57];
	rv += 251.915433121165*x[58];
	rv += 209.261088879339*x[59];
	rv += 303.899003044044*x[60];
	rv += 243.197489456663*x[61];
	rv += 237.390965850675*x[62];
	rv += 57.1385835039462*x[63];
	rv += 301.733744039334*x[64];
	rv += 30.6123768510861*x[65];
	rv += 21.3396948414106*x[66];
	rv += 278.520865043453*x[67];
	rv += 162.122145724483*x[68];
	rv += 304.508803157003*x[69];
	rv += 252.516206195527*x[70];
	rv += 178.796029580139*x[71];
	rv += 319.145634893211*x[72];
	rv += 257.755103285795*x[73];
	rv += 317.996864520235*x[74];
	rv += 936.171150833806*x[75];
	rv += 887.611963724196*x[76];
	rv += 419.760722838682*x[77];
	rv += 519.981401235063*x[78];
	rv += 524.621957902125*x[79];
	rv += 326.37044675*x[80];
	rv += 119.610927362864*x[81];
	rv += 76.800859418795*x[82];
	rv += 338.15311375*x[83];
	rv += 113.101546866718*x[84];
	rv += 69.3762358590679*x[85];
	rv += 313.6973235*x[86];
	rv += 116.266585440261*x[87];
	rv += 75.0744657614982*x[88];
	rv += 401.4402965*x[89];
	rv += 138.599587312691*x[90];
	rv += 86.376825937843*x[91];
	rv += 456.70672375*x[92];
	rv += 150.554161322115*x[93];
	rv += 91.6821859840903*x[94];
	;}

	if (wantfg & 2) {
	g[0] = 93617.1150833806;
	g[1] = 93617.1150833806;
	g[2] = 93617.1150833806;
	g[3] = 93617.1150833806;
	g[4] = 93617.1150833806;
	g[20] = 301.899928098152;
	g[21] = 282.051473607022;
	g[22] = 151.594044960674;
	g[23] = 114.784185877557;
	g[24] = 213.364530716922;
	g[25] = 772.653148294131;
	g[26] = 697.676211791334;
	g[27] = 146.306371684975;
	g[28] = 390.583393857486;
	g[29] = 208.147527440482;
	g[30] = 662.892902187869;
	g[31] = 577.461337631217;
	g[32] = 221.10047354739;
	g[33] = 425.919826737657;
	g[34] = 123.074770812851;
	g[35] = 333.28129673946;
	g[36] = 248.380746723092;
	g[37] = 249.162942146638;
	g[38] = 164.598799150643;
	g[39] = 280.957171099846;
	g[40] = 308.552481034871;
	g[41] = 270.059605282374;
	g[42] = 104.633483616243;
	g[43] = 79.6631898566695;
	g[44] = 170.696237801571;
	g[45] = 237.754076296143;
	g[46] = 189.862911729786;
	g[47] = 107.217531395173;
	g[48] = 131.358715293396;
	g[49] = 103.406777059692;
	g[50] = 626.417763832299;
	g[51] = 487.184730842973;
	g[52] = 502.300580630229;
	g[53] = 506.426352475088;
	g[54] = 463.185748318154;
	g[55] = 358.178221555384;
	g[56] = 281.629247221142;
	g[57] = 230.4203839171;
	g[58] = 251.915433121165;
	g[59] = 209.261088879339;
	g[60] = 303.899003044044;
	g[61] = 243.197489456663;
	g[62] = 237.390965850675;
	g[63] = 57.1385835039462;
	g[64] = 301.733744039334;
	g[65] = 30.6123768510861;
	g[66] = 21.3396948414106;
	g[67] = 278.520865043453;
	g[68] = 162.122145724483;
	g[69] = 304.508803157003;
	g[70] = 252.516206195527;
	g[71] = 178.796029580139;
	g[72] = 319.145634893211;
	g[73] = 257.755103285795;
	g[74] = 317.996864520235;
	g[75] = 936.171150833806;
	g[76] = 887.611963724196;
	g[77] = 419.760722838682;
	g[78] = 519.981401235063;
	g[79] = 524.621957902125;
	g[80] = 326.37044675;
	g[81] = 119.610927362864;
	g[82] = 76.800859418795;
	g[83] = 338.15311375;
	g[84] = 113.101546866718;
	g[85] = 69.3762358590679;
	g[86] = 313.6973235;
	g[87] = 116.266585440261;
	g[88] = 75.0744657614982;
	g[89] = 401.4402965;
	g[90] = 138.599587312691;
	g[91] = 86.376825937843;
	g[92] = 456.70672375;
	g[93] = 150.554161322115;
	g[94] = 91.6821859840903;
	}

	return rv;
}

 void
sssd12_05_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2];
	real t1;
	fint wantfg = *needfg;
	if (sssd12_05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd12_05_pd[0] = 1. / v[0];
	sssd12_05_pd[1] = -v[1] * sssd12_05_pd[0];
	v[0] = -v[1];
	t1 = v[0] + x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd12_05_pd[2] = 1. / v[0];
	sssd12_05_pd[3] = -v[1] * sssd12_05_pd[2];
	v[0] = -v[1];
	t1 = v[0] + x[6];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[0] / v[0];
	sssd12_05_pd[4] = 1. / v[0];
	sssd12_05_pd[5] = -v[1] * sssd12_05_pd[4];
	v[0] = -v[1];
	t1 = v[0] + x[7];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd12_05_pd[6] = 1. / v[0];
	sssd12_05_pd[7] = -v[1] * sssd12_05_pd[6];
	v[0] = -v[1];
	t1 = v[0] + x[8];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd12_05_pd[8] = 1. / v[0];
	sssd12_05_pd[9] = -v[1] * sssd12_05_pd[8];
	v[0] = -v[1];
	t1 = v[0] + x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[1] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[1] / v[0];
	sssd12_05_pd[10] = 1. / v[0];
	sssd12_05_pd[11] = -v[1] * sssd12_05_pd[10];
	v[0] = -v[1];
	t1 = v[0] + x[10];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd12_05_pd[12] = 1. / v[0];
	sssd12_05_pd[13] = -v[1] * sssd12_05_pd[12];
	v[0] = -v[1];
	t1 = v[0] + x[11];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd12_05_pd[14] = 1. / v[0];
	sssd12_05_pd[15] = -v[1] * sssd12_05_pd[14];
	v[0] = -v[1];
	t1 = v[0] + x[12];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[2] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[2] / v[0];
	sssd12_05_pd[16] = 1. / v[0];
	sssd12_05_pd[17] = -v[1] * sssd12_05_pd[16];
	v[0] = -v[1];
	t1 = v[0] + x[13];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd12_05_pd[18] = 1. / v[0];
	sssd12_05_pd[19] = -v[1] * sssd12_05_pd[18];
	v[0] = -v[1];
	t1 = v[0] + x[14];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd12_05_pd[20] = 1. / v[0];
	sssd12_05_pd[21] = -v[1] * sssd12_05_pd[20];
	v[0] = -v[1];
	t1 = v[0] + x[15];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = x[3] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[3] / v[0];
	sssd12_05_pd[22] = 1. / v[0];
	sssd12_05_pd[23] = -v[1] * sssd12_05_pd[22];
	v[0] = -v[1];
	t1 = v[0] + x[16];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = x[4] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[4] / v[0];
	sssd12_05_pd[24] = 1. / v[0];
	sssd12_05_pd[25] = -v[1] * sssd12_05_pd[24];
	v[0] = -v[1];
	t1 = v[0] + x[17];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = x[4] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[4] / v[0];
	sssd12_05_pd[26] = 1. / v[0];
	sssd12_05_pd[27] = -v[1] * sssd12_05_pd[26];
	v[0] = -v[1];
	t1 = v[0] + x[18];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = x[4] + 1.;
	if (v[0] == 0.) {
	zerdiv_(&v[0]);	}
	v[1] = x[4] / v[0];
	sssd12_05_pd[28] = 1. / v[0];
	sssd12_05_pd[29] = -v[1] * sssd12_05_pd[28];
	v[0] = -v[1];
	t1 = v[0] + x[19];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -2.0080698912*x[5];
	t1 += -4.0161397824*x[6];
	t1 += -6.0242096736*x[7];
	t1 += 0.609376132*x[20];
	t1 += 1.180016336*x[25];
	t1 += 0.967493052*x[30];
	t1 += 1.004918785*x[35];
	t1 += 0.698898063*x[40];
	t1 += 0.540292599*x[45];
	t1 += 1.460452986*x[50];
	t1 += 0.811980791*x[55];
	t1 += 0.973180988*x[60];
	t1 += 0.544914116*x[65];
	t1 += 0.78515855*x[70];
	t1 += 1.312281472*x[75];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -1.581486777*x[8];
	t1 += -3.162973554*x[9];
	t1 += -4.744460331*x[10];
	t1 += 0.609376132*x[21];
	t1 += 1.180016336*x[26];
	t1 += 0.967493052*x[31];
	t1 += 1.004918785*x[36];
	t1 += 0.698898063*x[41];
	t1 += 0.540292599*x[46];
	t1 += 1.460452986*x[51];
	t1 += 0.811980791*x[56];
	t1 += 0.973180988*x[61];
	t1 += 0.544914116*x[66];
	t1 += 0.78515855*x[71];
	t1 += 1.312281472*x[76];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -1.9963246902*x[11];
	t1 += -3.9926493804*x[12];
	t1 += -5.9889740706*x[13];
	t1 += 0.609376132*x[22];
	t1 += 1.180016336*x[27];
	t1 += 0.967493052*x[32];
	t1 += 1.004918785*x[37];
	t1 += 0.698898063*x[42];
	t1 += 0.540292599*x[47];
	t1 += 1.460452986*x[52];
	t1 += 0.811980791*x[57];
	t1 += 0.973180988*x[62];
	t1 += 0.544914116*x[67];
	t1 += 0.78515855*x[72];
	t1 += 1.312281472*x[77];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -2.065052076*x[14];
	t1 += -4.130104152*x[15];
	t1 += -6.195156228*x[16];
	t1 += 0.609376132*x[23];
	t1 += 1.180016336*x[28];
	t1 += 0.967493052*x[33];
	t1 += 1.004918785*x[38];
	t1 += 0.698898063*x[43];
	t1 += 0.540292599*x[48];
	t1 += 1.460452986*x[53];
	t1 += 0.811980791*x[58];
	t1 += 0.973180988*x[63];
	t1 += 0.544914116*x[68];
	t1 += 0.78515855*x[73];
	t1 += 1.312281472*x[78];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -2.0449844238*x[17];
	t1 += -4.0899688476*x[18];
	t1 += -6.1349532714*x[19];
	t1 += 0.609376132*x[24];
	t1 += 1.180016336*x[29];
	t1 += 0.967493052*x[34];
	t1 += 1.004918785*x[39];
	t1 += 0.698898063*x[44];
	t1 += 0.540292599*x[49];
	t1 += 1.460452986*x[54];
	t1 += 0.811980791*x[59];
	t1 += 0.973180988*x[64];
	t1 += 0.544914116*x[69];
	t1 += 0.78515855*x[74];
	t1 += 1.312281472*x[79];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	t1 += x[24];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	t1 += x[69];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[75];
	t1 += x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[80];
	t1 += x[81];
	t1 += x[82];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[83];
	t1 += x[84];
	t1 += x[85];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[86];
	t1 += x[87];
	t1 += x[88];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[89];
	t1 += x[90];
	t1 += x[91];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[92];
	t1 += x[93];
	t1 += x[94];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[5];
	t1 += -x[80];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[6];
	t1 += -x[81];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[7];
	t1 += -x[82];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[8];
	t1 += -x[83];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[9];
	t1 += -x[84];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[10];
	t1 += -x[85];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[11];
	t1 += -x[86];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[12];
	t1 += -x[87];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[13];
	t1 += -x[88];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[14];
	t1 += -x[89];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[15];
	t1 += -x[90];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[16];
	t1 += -x[91];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[17];
	t1 += -x[92];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[18];
	t1 += -x[93];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[19];
	t1 += -x[94];
	c[51] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -sssd12_05_pd[0];
	J[0] -= sssd12_05_pd[1];
	J[15] = 1.;

   /*** derivatives for constraint 2 ***/

	J[1] = -sssd12_05_pd[2];
	J[1] -= sssd12_05_pd[3];
	J[18] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -sssd12_05_pd[4];
	J[2] -= sssd12_05_pd[5];
	J[21] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -sssd12_05_pd[6];
	J[3] -= sssd12_05_pd[7];
	J[24] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = -sssd12_05_pd[8];
	J[4] -= sssd12_05_pd[9];
	J[27] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = -sssd12_05_pd[10];
	J[5] -= sssd12_05_pd[11];
	J[30] = 1.;

   /*** derivatives for constraint 7 ***/

	J[6] = -sssd12_05_pd[12];
	J[6] -= sssd12_05_pd[13];
	J[33] = 1.;

   /*** derivatives for constraint 8 ***/

	J[7] = -sssd12_05_pd[14];
	J[7] -= sssd12_05_pd[15];
	J[36] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = -sssd12_05_pd[16];
	J[8] -= sssd12_05_pd[17];
	J[39] = 1.;

   /*** derivatives for constraint 10 ***/

	J[9] = -sssd12_05_pd[18];
	J[9] -= sssd12_05_pd[19];
	J[42] = 1.;

   /*** derivatives for constraint 11 ***/

	J[10] = -sssd12_05_pd[20];
	J[10] -= sssd12_05_pd[21];
	J[45] = 1.;

   /*** derivatives for constraint 12 ***/

	J[11] = -sssd12_05_pd[22];
	J[11] -= sssd12_05_pd[23];
	J[48] = 1.;

   /*** derivatives for constraint 13 ***/

	J[12] = -sssd12_05_pd[24];
	J[12] -= sssd12_05_pd[25];
	J[51] = 1.;

   /*** derivatives for constraint 14 ***/

	J[13] = -sssd12_05_pd[26];
	J[13] -= sssd12_05_pd[27];
	J[54] = 1.;

   /*** derivatives for constraint 15 ***/

	J[14] = -sssd12_05_pd[28];
	J[14] -= sssd12_05_pd[29];
	J[57] = 1.;

   /*** derivatives for constraint 16 ***/

	J[16] = -2.0080698912;
	J[19] = -4.0161397824;
	J[22] = -6.0242096736;
	J[60] = 0.609376132;
	J[70] = 1.180016336;
	J[80] = 0.967493052;
	J[90] = 1.004918785;
	J[100] = 0.698898063;
	J[110] = 0.540292599;
	J[120] = 1.460452986;
	J[130] = 0.811980791;
	J[140] = 0.973180988;
	J[150] = 0.544914116;
	J[160] = 0.78515855;
	J[170] = 1.312281472;

   /*** derivatives for constraint 17 ***/

	J[25] = -1.581486777;
	J[28] = -3.162973554;
	J[31] = -4.744460331;
	J[62] = 0.609376132;
	J[72] = 1.180016336;
	J[82] = 0.967493052;
	J[92] = 1.004918785;
	J[102] = 0.698898063;
	J[112] = 0.540292599;
	J[122] = 1.460452986;
	J[132] = 0.811980791;
	J[142] = 0.973180988;
	J[152] = 0.544914116;
	J[162] = 0.78515855;
	J[172] = 1.312281472;

   /*** derivatives for constraint 18 ***/

	J[34] = -1.9963246902;
	J[37] = -3.9926493804;
	J[40] = -5.9889740706;
	J[64] = 0.609376132;
	J[74] = 1.180016336;
	J[84] = 0.967493052;
	J[94] = 1.004918785;
	J[104] = 0.698898063;
	J[114] = 0.540292599;
	J[124] = 1.460452986;
	J[134] = 0.811980791;
	J[144] = 0.973180988;
	J[154] = 0.544914116;
	J[164] = 0.78515855;
	J[174] = 1.312281472;

   /*** derivatives for constraint 19 ***/

	J[43] = -2.065052076;
	J[46] = -4.130104152;
	J[49] = -6.195156228;
	J[66] = 0.609376132;
	J[76] = 1.180016336;
	J[86] = 0.967493052;
	J[96] = 1.004918785;
	J[106] = 0.698898063;
	J[116] = 0.540292599;
	J[126] = 1.460452986;
	J[136] = 0.811980791;
	J[146] = 0.973180988;
	J[156] = 0.544914116;
	J[166] = 0.78515855;
	J[176] = 1.312281472;

   /*** derivatives for constraint 20 ***/

	J[52] = -2.0449844238;
	J[55] = -4.0899688476;
	J[58] = -6.1349532714;
	J[68] = 0.609376132;
	J[78] = 1.180016336;
	J[88] = 0.967493052;
	J[98] = 1.004918785;
	J[108] = 0.698898063;
	J[118] = 0.540292599;
	J[128] = 1.460452986;
	J[138] = 0.811980791;
	J[148] = 0.973180988;
	J[158] = 0.544914116;
	J[168] = 0.78515855;
	J[178] = 1.312281472;

   /*** derivatives for constraint 21 ***/

	J[61] = 1.;
	J[63] = 1.;
	J[65] = 1.;
	J[67] = 1.;
	J[69] = 1.;

   /*** derivatives for constraint 22 ***/

	J[71] = 1.;
	J[73] = 1.;
	J[75] = 1.;
	J[77] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 23 ***/

	J[81] = 1.;
	J[83] = 1.;
	J[85] = 1.;
	J[87] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 24 ***/

	J[91] = 1.;
	J[93] = 1.;
	J[95] = 1.;
	J[97] = 1.;
	J[99] = 1.;

   /*** derivatives for constraint 25 ***/

	J[101] = 1.;
	J[103] = 1.;
	J[105] = 1.;
	J[107] = 1.;
	J[109] = 1.;

   /*** derivatives for constraint 26 ***/

	J[111] = 1.;
	J[113] = 1.;
	J[115] = 1.;
	J[117] = 1.;
	J[119] = 1.;

   /*** derivatives for constraint 27 ***/

	J[121] = 1.;
	J[123] = 1.;
	J[125] = 1.;
	J[127] = 1.;
	J[129] = 1.;

   /*** derivatives for constraint 28 ***/

	J[131] = 1.;
	J[133] = 1.;
	J[135] = 1.;
	J[137] = 1.;
	J[139] = 1.;

   /*** derivatives for constraint 29 ***/

	J[141] = 1.;
	J[143] = 1.;
	J[145] = 1.;
	J[147] = 1.;
	J[149] = 1.;

   /*** derivatives for constraint 30 ***/

	J[151] = 1.;
	J[153] = 1.;
	J[155] = 1.;
	J[157] = 1.;
	J[159] = 1.;

   /*** derivatives for constraint 31 ***/

	J[161] = 1.;
	J[163] = 1.;
	J[165] = 1.;
	J[167] = 1.;
	J[169] = 1.;

   /*** derivatives for constraint 32 ***/

	J[171] = 1.;
	J[173] = 1.;
	J[175] = 1.;
	J[177] = 1.;
	J[179] = 1.;

   /*** derivatives for constraint 33 ***/

	J[180] = 1.;
	J[182] = 1.;
	J[184] = 1.;

   /*** derivatives for constraint 34 ***/

	J[186] = 1.;
	J[188] = 1.;
	J[190] = 1.;

   /*** derivatives for constraint 35 ***/

	J[192] = 1.;
	J[194] = 1.;
	J[196] = 1.;

   /*** derivatives for constraint 36 ***/

	J[198] = 1.;
	J[200] = 1.;
	J[202] = 1.;

   /*** derivatives for constraint 37 ***/

	J[204] = 1.;
	J[206] = 1.;
	J[208] = 1.;

   /*** derivatives for constraint 38 ***/

	J[17] = 1.;
	J[181] = -1.;

   /*** derivatives for constraint 39 ***/

	J[20] = 1.;
	J[183] = -1.;

   /*** derivatives for constraint 40 ***/

	J[23] = 1.;
	J[185] = -1.;

   /*** derivatives for constraint 41 ***/

	J[26] = 1.;
	J[187] = -1.;

   /*** derivatives for constraint 42 ***/

	J[29] = 1.;
	J[189] = -1.;

   /*** derivatives for constraint 43 ***/

	J[32] = 1.;
	J[191] = -1.;

   /*** derivatives for constraint 44 ***/

	J[35] = 1.;
	J[193] = -1.;

   /*** derivatives for constraint 45 ***/

	J[38] = 1.;
	J[195] = -1.;

   /*** derivatives for constraint 46 ***/

	J[41] = 1.;
	J[197] = -1.;

   /*** derivatives for constraint 47 ***/

	J[44] = 1.;
	J[199] = -1.;

   /*** derivatives for constraint 48 ***/

	J[47] = 1.;
	J[201] = -1.;

   /*** derivatives for constraint 49 ***/

	J[50] = 1.;
	J[203] = -1.;

   /*** derivatives for constraint 50 ***/

	J[53] = 1.;
	J[205] = -1.;

   /*** derivatives for constraint 51 ***/

	J[56] = 1.;
	J[207] = -1.;

   /*** derivatives for constraint 52 ***/

	J[59] = 1.;
	J[209] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif