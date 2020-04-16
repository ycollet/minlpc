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
 fint sssd12_05persp_auxcom_[1] = { 15 /* nlc */ };
 fint sssd12_05persp_funcom_[327] = {
	95 /* nvar */,
	1 /* nobj */,
	52 /* ncon */,
	225 /* nzc */,
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
	88,
	91,
	94,
	97,
	100,
	103,
	106,
	108,
	110,
	112,
	114,
	116,
	118,
	120,
	122,
	124,
	126,
	128,
	130,
	132,
	134,
	136,
	138,
	140,
	142,
	144,
	146,
	148,
	150,
	152,
	154,
	156,
	158,
	160,
	162,
	164,
	166,
	168,
	170,
	172,
	174,
	176,
	178,
	180,
	182,
	184,
	186,
	188,
	190,
	192,
	194,
	196,
	198,
	200,
	202,
	204,
	206,
	208,
	210,
	212,
	214,
	216,
	218,
	220,
	222,
	224,
	226,

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
	1,
	33,
	38,
	2,
	33,
	39,
	3,
	33,
	40,
	4,
	34,
	41,
	5,
	34,
	42,
	6,
	34,
	43,
	7,
	35,
	44,
	8,
	35,
	45,
	9,
	35,
	46,
	10,
	36,
	47,
	11,
	36,
	48,
	12,
	36,
	49,
	13,
	37,
	50,
	14,
	37,
	51,
	15,
	37,
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
	32 };

 real sssd12_05persp_boundc_[1+190+104] /* Infinity, variable bounds, constraint bounds */ = {
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

 real sssd12_05persp_x0comn_[95] = {
		1.18464727499703,
		2.21055142184158,
		1.19998063005095,
		1.11549458684761,
		1.13890807654545,
		0.18075340102651,
		0.18075340102651,
		0.18075340102651,
		0.229509008619004,
		0.229509008619004,
		0.229509008619004,
		0.181816847787907,
		0.181816847787907,
		0.181816847787907,
		0.175765767145396,
		0.175765767145396,
		0.175765767145396,
		0.177490575531558,
		0.177490575531558,
		0.177490575531558,
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
		0.333333333333333,
		0.333333333333333,
		0.333333333333333,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2,
		0.2 };

static real sssd12_05persp_old_x[95];
static int sssd12_05persp_xkind = -1;

 static int
sssd12_05persp_xcheck(real *x)
{
	real *x1 = sssd12_05persp_old_x, *xe = x + 95;
	errno = 0;
	if (sssd12_05persp_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	sssd12_05persp_xkind = 0;
	return 1;
	}
 real
sssd12_05persp_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (sssd12_05persp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = 93617.1150833806*x[0];
	rv += 93617.1150833806*x[1];
	rv += 93617.1150833806*x[2];
	rv += 93617.1150833806*x[3];
	rv += 93617.1150833806*x[4];
	rv += 326.37044675*x[20];
	rv += 119.610927362864*x[21];
	rv += 76.800859418795*x[22];
	rv += 338.15311375*x[23];
	rv += 113.101546866718*x[24];
	rv += 69.3762358590679*x[25];
	rv += 313.6973235*x[26];
	rv += 116.266585440261*x[27];
	rv += 75.0744657614982*x[28];
	rv += 401.4402965*x[29];
	rv += 138.599587312691*x[30];
	rv += 86.376825937843*x[31];
	rv += 456.70672375*x[32];
	rv += 150.554161322115*x[33];
	rv += 91.6821859840903*x[34];
	rv += 301.899928098152*x[35];
	rv += 282.051473607022*x[36];
	rv += 151.594044960674*x[37];
	rv += 114.784185877557*x[38];
	rv += 213.364530716922*x[39];
	rv += 772.653148294131*x[40];
	rv += 697.676211791334*x[41];
	rv += 146.306371684975*x[42];
	rv += 390.583393857486*x[43];
	rv += 208.147527440482*x[44];
	rv += 662.892902187869*x[45];
	rv += 577.461337631217*x[46];
	rv += 221.10047354739*x[47];
	rv += 425.919826737657*x[48];
	rv += 123.074770812851*x[49];
	rv += 333.28129673946*x[50];
	rv += 248.380746723092*x[51];
	rv += 249.162942146638*x[52];
	rv += 164.598799150643*x[53];
	rv += 280.957171099846*x[54];
	rv += 308.552481034871*x[55];
	rv += 270.059605282374*x[56];
	rv += 104.633483616243*x[57];
	rv += 79.6631898566695*x[58];
	rv += 170.696237801571*x[59];
	rv += 237.754076296143*x[60];
	rv += 189.862911729786*x[61];
	rv += 107.217531395173*x[62];
	rv += 131.358715293396*x[63];
	rv += 103.406777059692*x[64];
	rv += 626.417763832299*x[65];
	rv += 487.184730842973*x[66];
	rv += 502.300580630229*x[67];
	rv += 506.426352475088*x[68];
	rv += 463.185748318154*x[69];
	rv += 358.178221555384*x[70];
	rv += 281.629247221142*x[71];
	rv += 230.4203839171*x[72];
	rv += 251.915433121165*x[73];
	rv += 209.261088879339*x[74];
	rv += 303.899003044044*x[75];
	rv += 243.197489456663*x[76];
	rv += 237.390965850675*x[77];
	rv += 57.1385835039462*x[78];
	rv += 301.733744039334*x[79];
	rv += 30.6123768510861*x[80];
	rv += 21.3396948414106*x[81];
	rv += 278.520865043453*x[82];
	rv += 162.122145724483*x[83];
	rv += 304.508803157003*x[84];
	rv += 252.516206195527*x[85];
	rv += 178.796029580139*x[86];
	rv += 319.145634893211*x[87];
	rv += 257.755103285795*x[88];
	rv += 317.996864520235*x[89];
	rv += 936.171150833806*x[90];
	rv += 887.611963724196*x[91];
	rv += 419.760722838682*x[92];
	rv += 519.981401235063*x[93];
	rv += 524.621957902125*x[94];
	;}

	if (wantfg & 2) {
	g[0] = 93617.1150833806;
	g[1] = 93617.1150833806;
	g[2] = 93617.1150833806;
	g[3] = 93617.1150833806;
	g[4] = 93617.1150833806;
	g[20] = 326.37044675;
	g[21] = 119.610927362864;
	g[22] = 76.800859418795;
	g[23] = 338.15311375;
	g[24] = 113.101546866718;
	g[25] = 69.3762358590679;
	g[26] = 313.6973235;
	g[27] = 116.266585440261;
	g[28] = 75.0744657614982;
	g[29] = 401.4402965;
	g[30] = 138.599587312691;
	g[31] = 86.376825937843;
	g[32] = 456.70672375;
	g[33] = 150.554161322115;
	g[34] = 91.6821859840903;
	g[35] = 301.899928098152;
	g[36] = 282.051473607022;
	g[37] = 151.594044960674;
	g[38] = 114.784185877557;
	g[39] = 213.364530716922;
	g[40] = 772.653148294131;
	g[41] = 697.676211791334;
	g[42] = 146.306371684975;
	g[43] = 390.583393857486;
	g[44] = 208.147527440482;
	g[45] = 662.892902187869;
	g[46] = 577.461337631217;
	g[47] = 221.10047354739;
	g[48] = 425.919826737657;
	g[49] = 123.074770812851;
	g[50] = 333.28129673946;
	g[51] = 248.380746723092;
	g[52] = 249.162942146638;
	g[53] = 164.598799150643;
	g[54] = 280.957171099846;
	g[55] = 308.552481034871;
	g[56] = 270.059605282374;
	g[57] = 104.633483616243;
	g[58] = 79.6631898566695;
	g[59] = 170.696237801571;
	g[60] = 237.754076296143;
	g[61] = 189.862911729786;
	g[62] = 107.217531395173;
	g[63] = 131.358715293396;
	g[64] = 103.406777059692;
	g[65] = 626.417763832299;
	g[66] = 487.184730842973;
	g[67] = 502.300580630229;
	g[68] = 506.426352475088;
	g[69] = 463.185748318154;
	g[70] = 358.178221555384;
	g[71] = 281.629247221142;
	g[72] = 230.4203839171;
	g[73] = 251.915433121165;
	g[74] = 209.261088879339;
	g[75] = 303.899003044044;
	g[76] = 243.197489456663;
	g[77] = 237.390965850675;
	g[78] = 57.1385835039462;
	g[79] = 301.733744039334;
	g[80] = 30.6123768510861;
	g[81] = 21.3396948414106;
	g[82] = 278.520865043453;
	g[83] = 162.122145724483;
	g[84] = 304.508803157003;
	g[85] = 252.516206195527;
	g[86] = 178.796029580139;
	g[87] = 319.145634893211;
	g[88] = 257.755103285795;
	g[89] = 317.996864520235;
	g[90] = 936.171150833806;
	g[91] = 887.611963724196;
	g[92] = 419.760722838682;
	g[93] = 519.981401235063;
	g[94] = 524.621957902125;
	}

	return rv;
}

 void
sssd12_05persp_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (sssd12_05persp_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[5] * x[20];
	v[1] = x[5] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[20];
	v[2] = -v[1];
	v[0] += v[2];
	c[0] = v[0];

  /***  constraint 2  ***/

	v[0] = x[6] * x[21];
	v[1] = x[6] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[21];
	v[2] = -v[1];
	v[0] += v[2];
	c[1] = v[0];

  /***  constraint 3  ***/

	v[0] = x[7] * x[22];
	v[1] = x[7] * x[0];
	v[0] += v[1];
	v[1] = x[0] * x[22];
	v[2] = -v[1];
	v[0] += v[2];
	c[2] = v[0];

  /***  constraint 4  ***/

	v[0] = x[8] * x[23];
	v[1] = x[8] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[23];
	v[2] = -v[1];
	v[0] += v[2];
	c[3] = v[0];

  /***  constraint 5  ***/

	v[0] = x[9] * x[24];
	v[1] = x[9] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[24];
	v[2] = -v[1];
	v[0] += v[2];
	c[4] = v[0];

  /***  constraint 6  ***/

	v[0] = x[10] * x[25];
	v[1] = x[10] * x[1];
	v[0] += v[1];
	v[1] = x[1] * x[25];
	v[2] = -v[1];
	v[0] += v[2];
	c[5] = v[0];

  /***  constraint 7  ***/

	v[0] = x[11] * x[26];
	v[1] = x[11] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[26];
	v[2] = -v[1];
	v[0] += v[2];
	c[6] = v[0];

  /***  constraint 8  ***/

	v[0] = x[12] * x[27];
	v[1] = x[12] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[27];
	v[2] = -v[1];
	v[0] += v[2];
	c[7] = v[0];

  /***  constraint 9  ***/

	v[0] = x[13] * x[28];
	v[1] = x[13] * x[2];
	v[0] += v[1];
	v[1] = x[2] * x[28];
	v[2] = -v[1];
	v[0] += v[2];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[14] * x[29];
	v[1] = x[14] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[29];
	v[2] = -v[1];
	v[0] += v[2];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[15] * x[30];
	v[1] = x[15] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[30];
	v[2] = -v[1];
	v[0] += v[2];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[16] * x[31];
	v[1] = x[16] * x[3];
	v[0] += v[1];
	v[1] = x[3] * x[31];
	v[2] = -v[1];
	v[0] += v[2];
	c[11] = v[0];

  /***  constraint 13  ***/

	v[0] = x[17] * x[32];
	v[1] = x[17] * x[4];
	v[0] += v[1];
	v[1] = x[4] * x[32];
	v[2] = -v[1];
	v[0] += v[2];
	c[12] = v[0];

  /***  constraint 14  ***/

	v[0] = x[18] * x[33];
	v[1] = x[18] * x[4];
	v[0] += v[1];
	v[1] = x[4] * x[33];
	v[2] = -v[1];
	v[0] += v[2];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[19] * x[34];
	v[1] = x[19] * x[4];
	v[0] += v[1];
	v[1] = x[4] * x[34];
	v[2] = -v[1];
	v[0] += v[2];
	c[14] = v[0];

  /***  constraint 16  ***/

	t1 = -2.0080698912*x[5];
	t1 += -4.0161397824*x[6];
	t1 += -6.0242096736*x[7];
	t1 += 0.609376132*x[35];
	t1 += 1.180016336*x[40];
	t1 += 0.967493052*x[45];
	t1 += 1.004918785*x[50];
	t1 += 0.698898063*x[55];
	t1 += 0.540292599*x[60];
	t1 += 1.460452986*x[65];
	t1 += 0.811980791*x[70];
	t1 += 0.973180988*x[75];
	t1 += 0.544914116*x[80];
	t1 += 0.78515855*x[85];
	t1 += 1.312281472*x[90];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -1.581486777*x[8];
	t1 += -3.162973554*x[9];
	t1 += -4.744460331*x[10];
	t1 += 0.609376132*x[36];
	t1 += 1.180016336*x[41];
	t1 += 0.967493052*x[46];
	t1 += 1.004918785*x[51];
	t1 += 0.698898063*x[56];
	t1 += 0.540292599*x[61];
	t1 += 1.460452986*x[66];
	t1 += 0.811980791*x[71];
	t1 += 0.973180988*x[76];
	t1 += 0.544914116*x[81];
	t1 += 0.78515855*x[86];
	t1 += 1.312281472*x[91];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -1.9963246902*x[11];
	t1 += -3.9926493804*x[12];
	t1 += -5.9889740706*x[13];
	t1 += 0.609376132*x[37];
	t1 += 1.180016336*x[42];
	t1 += 0.967493052*x[47];
	t1 += 1.004918785*x[52];
	t1 += 0.698898063*x[57];
	t1 += 0.540292599*x[62];
	t1 += 1.460452986*x[67];
	t1 += 0.811980791*x[72];
	t1 += 0.973180988*x[77];
	t1 += 0.544914116*x[82];
	t1 += 0.78515855*x[87];
	t1 += 1.312281472*x[92];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -2.065052076*x[14];
	t1 += -4.130104152*x[15];
	t1 += -6.195156228*x[16];
	t1 += 0.609376132*x[38];
	t1 += 1.180016336*x[43];
	t1 += 0.967493052*x[48];
	t1 += 1.004918785*x[53];
	t1 += 0.698898063*x[58];
	t1 += 0.540292599*x[63];
	t1 += 1.460452986*x[68];
	t1 += 0.811980791*x[73];
	t1 += 0.973180988*x[78];
	t1 += 0.544914116*x[83];
	t1 += 0.78515855*x[88];
	t1 += 1.312281472*x[93];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -2.0449844238*x[17];
	t1 += -4.0899688476*x[18];
	t1 += -6.1349532714*x[19];
	t1 += 0.609376132*x[39];
	t1 += 1.180016336*x[44];
	t1 += 0.967493052*x[49];
	t1 += 1.004918785*x[54];
	t1 += 0.698898063*x[59];
	t1 += 0.540292599*x[64];
	t1 += 1.460452986*x[69];
	t1 += 0.811980791*x[74];
	t1 += 0.973180988*x[79];
	t1 += 0.544914116*x[84];
	t1 += 0.78515855*x[89];
	t1 += 1.312281472*x[94];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	t1 += x[69];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	t1 += x[74];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[75];
	t1 += x[76];
	t1 += x[77];
	t1 += x[78];
	t1 += x[79];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[80];
	t1 += x[81];
	t1 += x[82];
	t1 += x[83];
	t1 += x[84];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[85];
	t1 += x[86];
	t1 += x[87];
	t1 += x[88];
	t1 += x[89];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[90];
	t1 += x[91];
	t1 += x[92];
	t1 += x[93];
	t1 += x[94];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[20];
	t1 += x[21];
	t1 += x[22];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[23];
	t1 += x[24];
	t1 += x[25];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[26];
	t1 += x[27];
	t1 += x[28];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[29];
	t1 += x[30];
	t1 += x[31];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[32];
	t1 += x[33];
	t1 += x[34];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[5];
	t1 += -x[20];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[6];
	t1 += -x[21];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[7];
	t1 += -x[22];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[8];
	t1 += -x[23];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[9];
	t1 += -x[24];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[10];
	t1 += -x[25];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[11];
	t1 += -x[26];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[12];
	t1 += -x[27];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[13];
	t1 += -x[28];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[14];
	t1 += -x[29];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[15];
	t1 += -x[30];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[16];
	t1 += -x[31];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[17];
	t1 += -x[32];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[18];
	t1 += -x[33];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[19];
	t1 += -x[34];
	c[51] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[60] = -x[0];
	J[0] = -x[20];
	J[0] += x[5];
	J[15] = x[0];
	J[60] += x[5];
	J[15] += x[20];

   /*** derivatives for constraint 2 ***/

	J[63] = -x[0];
	J[1] = -x[21];
	J[1] += x[6];
	J[18] = x[0];
	J[63] += x[6];
	J[18] += x[21];

   /*** derivatives for constraint 3 ***/

	J[66] = -x[0];
	J[2] = -x[22];
	J[2] += x[7];
	J[21] = x[0];
	J[66] += x[7];
	J[21] += x[22];

   /*** derivatives for constraint 4 ***/

	J[69] = -x[1];
	J[3] = -x[23];
	J[3] += x[8];
	J[24] = x[1];
	J[69] += x[8];
	J[24] += x[23];

   /*** derivatives for constraint 5 ***/

	J[72] = -x[1];
	J[4] = -x[24];
	J[4] += x[9];
	J[27] = x[1];
	J[72] += x[9];
	J[27] += x[24];

   /*** derivatives for constraint 6 ***/

	J[75] = -x[1];
	J[5] = -x[25];
	J[5] += x[10];
	J[30] = x[1];
	J[75] += x[10];
	J[30] += x[25];

   /*** derivatives for constraint 7 ***/

	J[78] = -x[2];
	J[6] = -x[26];
	J[6] += x[11];
	J[33] = x[2];
	J[78] += x[11];
	J[33] += x[26];

   /*** derivatives for constraint 8 ***/

	J[81] = -x[2];
	J[7] = -x[27];
	J[7] += x[12];
	J[36] = x[2];
	J[81] += x[12];
	J[36] += x[27];

   /*** derivatives for constraint 9 ***/

	J[84] = -x[2];
	J[8] = -x[28];
	J[8] += x[13];
	J[39] = x[2];
	J[84] += x[13];
	J[39] += x[28];

   /*** derivatives for constraint 10 ***/

	J[87] = -x[3];
	J[9] = -x[29];
	J[9] += x[14];
	J[42] = x[3];
	J[87] += x[14];
	J[42] += x[29];

   /*** derivatives for constraint 11 ***/

	J[90] = -x[3];
	J[10] = -x[30];
	J[10] += x[15];
	J[45] = x[3];
	J[90] += x[15];
	J[45] += x[30];

   /*** derivatives for constraint 12 ***/

	J[93] = -x[3];
	J[11] = -x[31];
	J[11] += x[16];
	J[48] = x[3];
	J[93] += x[16];
	J[48] += x[31];

   /*** derivatives for constraint 13 ***/

	J[96] = -x[4];
	J[12] = -x[32];
	J[12] += x[17];
	J[51] = x[4];
	J[96] += x[17];
	J[51] += x[32];

   /*** derivatives for constraint 14 ***/

	J[99] = -x[4];
	J[13] = -x[33];
	J[13] += x[18];
	J[54] = x[4];
	J[99] += x[18];
	J[54] += x[33];

   /*** derivatives for constraint 15 ***/

	J[102] = -x[4];
	J[14] = -x[34];
	J[14] += x[19];
	J[57] = x[4];
	J[102] += x[19];
	J[57] += x[34];

   /*** derivatives for constraint 16 ***/

	J[16] = -2.0080698912;
	J[19] = -4.0161397824;
	J[22] = -6.0242096736;
	J[105] = 0.609376132;
	J[115] = 1.180016336;
	J[125] = 0.967493052;
	J[135] = 1.004918785;
	J[145] = 0.698898063;
	J[155] = 0.540292599;
	J[165] = 1.460452986;
	J[175] = 0.811980791;
	J[185] = 0.973180988;
	J[195] = 0.544914116;
	J[205] = 0.78515855;
	J[215] = 1.312281472;

   /*** derivatives for constraint 17 ***/

	J[25] = -1.581486777;
	J[28] = -3.162973554;
	J[31] = -4.744460331;
	J[107] = 0.609376132;
	J[117] = 1.180016336;
	J[127] = 0.967493052;
	J[137] = 1.004918785;
	J[147] = 0.698898063;
	J[157] = 0.540292599;
	J[167] = 1.460452986;
	J[177] = 0.811980791;
	J[187] = 0.973180988;
	J[197] = 0.544914116;
	J[207] = 0.78515855;
	J[217] = 1.312281472;

   /*** derivatives for constraint 18 ***/

	J[34] = -1.9963246902;
	J[37] = -3.9926493804;
	J[40] = -5.9889740706;
	J[109] = 0.609376132;
	J[119] = 1.180016336;
	J[129] = 0.967493052;
	J[139] = 1.004918785;
	J[149] = 0.698898063;
	J[159] = 0.540292599;
	J[169] = 1.460452986;
	J[179] = 0.811980791;
	J[189] = 0.973180988;
	J[199] = 0.544914116;
	J[209] = 0.78515855;
	J[219] = 1.312281472;

   /*** derivatives for constraint 19 ***/

	J[43] = -2.065052076;
	J[46] = -4.130104152;
	J[49] = -6.195156228;
	J[111] = 0.609376132;
	J[121] = 1.180016336;
	J[131] = 0.967493052;
	J[141] = 1.004918785;
	J[151] = 0.698898063;
	J[161] = 0.540292599;
	J[171] = 1.460452986;
	J[181] = 0.811980791;
	J[191] = 0.973180988;
	J[201] = 0.544914116;
	J[211] = 0.78515855;
	J[221] = 1.312281472;

   /*** derivatives for constraint 20 ***/

	J[52] = -2.0449844238;
	J[55] = -4.0899688476;
	J[58] = -6.1349532714;
	J[113] = 0.609376132;
	J[123] = 1.180016336;
	J[133] = 0.967493052;
	J[143] = 1.004918785;
	J[153] = 0.698898063;
	J[163] = 0.540292599;
	J[173] = 1.460452986;
	J[183] = 0.811980791;
	J[193] = 0.973180988;
	J[203] = 0.544914116;
	J[213] = 0.78515855;
	J[223] = 1.312281472;

   /*** derivatives for constraint 21 ***/

	J[106] = 1.;
	J[108] = 1.;
	J[110] = 1.;
	J[112] = 1.;
	J[114] = 1.;

   /*** derivatives for constraint 22 ***/

	J[116] = 1.;
	J[118] = 1.;
	J[120] = 1.;
	J[122] = 1.;
	J[124] = 1.;

   /*** derivatives for constraint 23 ***/

	J[126] = 1.;
	J[128] = 1.;
	J[130] = 1.;
	J[132] = 1.;
	J[134] = 1.;

   /*** derivatives for constraint 24 ***/

	J[136] = 1.;
	J[138] = 1.;
	J[140] = 1.;
	J[142] = 1.;
	J[144] = 1.;

   /*** derivatives for constraint 25 ***/

	J[146] = 1.;
	J[148] = 1.;
	J[150] = 1.;
	J[152] = 1.;
	J[154] = 1.;

   /*** derivatives for constraint 26 ***/

	J[156] = 1.;
	J[158] = 1.;
	J[160] = 1.;
	J[162] = 1.;
	J[164] = 1.;

   /*** derivatives for constraint 27 ***/

	J[166] = 1.;
	J[168] = 1.;
	J[170] = 1.;
	J[172] = 1.;
	J[174] = 1.;

   /*** derivatives for constraint 28 ***/

	J[176] = 1.;
	J[178] = 1.;
	J[180] = 1.;
	J[182] = 1.;
	J[184] = 1.;

   /*** derivatives for constraint 29 ***/

	J[186] = 1.;
	J[188] = 1.;
	J[190] = 1.;
	J[192] = 1.;
	J[194] = 1.;

   /*** derivatives for constraint 30 ***/

	J[196] = 1.;
	J[198] = 1.;
	J[200] = 1.;
	J[202] = 1.;
	J[204] = 1.;

   /*** derivatives for constraint 31 ***/

	J[206] = 1.;
	J[208] = 1.;
	J[210] = 1.;
	J[212] = 1.;
	J[214] = 1.;

   /*** derivatives for constraint 32 ***/

	J[216] = 1.;
	J[218] = 1.;
	J[220] = 1.;
	J[222] = 1.;
	J[224] = 1.;

   /*** derivatives for constraint 33 ***/

	J[61] = 1.;
	J[64] = 1.;
	J[67] = 1.;

   /*** derivatives for constraint 34 ***/

	J[70] = 1.;
	J[73] = 1.;
	J[76] = 1.;

   /*** derivatives for constraint 35 ***/

	J[79] = 1.;
	J[82] = 1.;
	J[85] = 1.;

   /*** derivatives for constraint 36 ***/

	J[88] = 1.;
	J[91] = 1.;
	J[94] = 1.;

   /*** derivatives for constraint 37 ***/

	J[97] = 1.;
	J[100] = 1.;
	J[103] = 1.;

   /*** derivatives for constraint 38 ***/

	J[17] = 1.;
	J[62] = -1.;

   /*** derivatives for constraint 39 ***/

	J[20] = 1.;
	J[65] = -1.;

   /*** derivatives for constraint 40 ***/

	J[23] = 1.;
	J[68] = -1.;

   /*** derivatives for constraint 41 ***/

	J[26] = 1.;
	J[71] = -1.;

   /*** derivatives for constraint 42 ***/

	J[29] = 1.;
	J[74] = -1.;

   /*** derivatives for constraint 43 ***/

	J[32] = 1.;
	J[77] = -1.;

   /*** derivatives for constraint 44 ***/

	J[35] = 1.;
	J[80] = -1.;

   /*** derivatives for constraint 45 ***/

	J[38] = 1.;
	J[83] = -1.;

   /*** derivatives for constraint 46 ***/

	J[41] = 1.;
	J[86] = -1.;

   /*** derivatives for constraint 47 ***/

	J[44] = 1.;
	J[89] = -1.;

   /*** derivatives for constraint 48 ***/

	J[47] = 1.;
	J[92] = -1.;

   /*** derivatives for constraint 49 ***/

	J[50] = 1.;
	J[95] = -1.;

   /*** derivatives for constraint 50 ***/

	J[53] = 1.;
	J[98] = -1.;

   /*** derivatives for constraint 51 ***/

	J[56] = 1.;
	J[101] = -1.;

   /*** derivatives for constraint 52 ***/

	J[59] = 1.;
	J[104] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
