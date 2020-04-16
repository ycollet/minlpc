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
 fint chakra_auxcom_[1] = { 21 /* nlc */ };
 fint chakra_funcom_[191] = {
	62 /* nvar */,
	1 /* nobj */,
	41 /* ncon */,
	122 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	6,
	9,
	12,
	15,
	18,
	21,
	24,
	27,
	30,
	33,
	36,
	39,
	42,
	45,
	48,
	51,
	54,
	57,
	60,
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
	77,
	78,
	79,
	80,
	81,
	82,
	84,
	86,
	88,
	90,
	92,
	94,
	96,
	98,
	100,
	102,
	104,
	106,
	108,
	110,
	112,
	114,
	116,
	118,
	120,
	122,
	123,

	/* rownos */
	1,
	22,
	2,
	22,
	23,
	3,
	23,
	24,
	4,
	24,
	25,
	5,
	25,
	26,
	6,
	26,
	27,
	7,
	27,
	28,
	8,
	28,
	29,
	9,
	29,
	30,
	10,
	30,
	31,
	11,
	31,
	32,
	12,
	32,
	33,
	13,
	33,
	34,
	14,
	34,
	35,
	15,
	35,
	36,
	16,
	36,
	37,
	17,
	37,
	38,
	18,
	38,
	39,
	19,
	39,
	40,
	20,
	40,
	41,
	21,
	41,
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
	1,
	22,
	2,
	23,
	3,
	24,
	4,
	25,
	5,
	26,
	6,
	27,
	7,
	28,
	8,
	29,
	9,
	30,
	10,
	31,
	11,
	32,
	12,
	33,
	13,
	34,
	14,
	35,
	15,
	36,
	16,
	37,
	17,
	38,
	18,
	39,
	19,
	40,
	20,
	41,
	21 };

 real chakra_boundc_[1+124+82] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		4.275,
		4.275,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		1.,
		1.7e308,
		13.7105041437099,
		13.7105041437099,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.};

 real chakra_x0comn_[62] = {
		15.,
		15.8671283435366,
		16.7843841246842,
		17.7546651382389,
		18.7810366963301,
		19.866741312356,
		21.0152089447329,
		22.2300678328211,
		23.5151559592598,
		24.8745331749237,
		26.3124940248049,
		27.8335813153413,
		29.4426004660523,
		31.1446346908215,
		32.9450610567885,
		34.8495674715809,
		36.8641706525542,
		38.9952351348075,
		41.2494933780253,
		43.6340670356661,
		46.156489453693,
		2.65787165646338,
		2.82088780167558,
		2.99388978021114,
		3.17748858499683,
		3.37233255315755,
		3.57910964624529,
		3.79854986956959,
		4.03142783910829,
		4.27856550499249,
		4.54083504110911,
		4.81916191094403,
		5.11452812040594,
		5.42797566902516,
		5.76061021161472,
		6.11360494321835,
		6.48820472094886,
		6.88573043715017,
		7.30758365919495,
		7.75525155216026,
		8.23031210161431,
		4.275,
		4.5315,
		4.80339,
		5.0915934,
		5.397089004,
		5.72091434424,
		6.0641692048944,
		6.42801935718807,
		6.81370051861935,
		7.22252254973651,
		7.6558739027207,
		8.11522633688395,
		8.60213991709698,
		9.1182683121228,
		9.66536441085017,
		10.2452862755012,
		10.8600034520313,
		11.5116036591531,
		12.2022998787023,
		12.9344378714245,
		13.7105041437099 };

 static real chakra_pd[41];
static real chakra_old_x[62];
static int chakra_xkind = -1;

 static int
chakra_xcheck(real *x)
{
	real *x1 = chakra_old_x, *xe = x + 62;
	errno = 0;
	if (chakra_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	chakra_xkind = 0;
	return 1;
	}
 real
chakra_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2];
	fint wantfg = *needfg;
	if (chakra_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = pow(x[21], 0.1);
	if (errno) in_trouble2("pow",x[21],0.1);
	if (x[21] > 0.) {
	chakra_pd[21] = 0.1*(v[0]/x[21]);
	} else if (0.1 > 1.) {
	chakra_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[21],0.1);
	}
	v[0] *= -10.;
	v[1] = pow(x[22], 0.1);
	if (errno) in_trouble2("pow",x[22],0.1);
	if (x[22] > 0.) {
	chakra_pd[22] = 0.1*(v[1]/x[22]);
	} else if (0.1 > 1.) {
	chakra_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[22],0.1);
	}
	v[1] *= -9.70873786407767;
	v[0] += v[1];
	v[1] = pow(x[23], 0.1);
	if (errno) in_trouble2("pow",x[23],0.1);
	if (x[23] > 0.) {
	chakra_pd[23] = 0.1*(v[1]/x[23]);
	} else if (0.1 > 1.) {
	chakra_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[23],0.1);
	}
	v[1] *= -9.42595909133755;
	v[0] += v[1];
	v[1] = pow(x[24], 0.1);
	if (errno) in_trouble2("pow",x[24],0.1);
	if (x[24] > 0.) {
	chakra_pd[24] = 0.1*(v[1]/x[24]);
	} else if (0.1 > 1.) {
	chakra_pd[24] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[24],0.1);
	}
	v[1] *= -9.1514165935316;
	v[0] += v[1];
	v[1] = pow(x[25], 0.1);
	if (errno) in_trouble2("pow",x[25],0.1);
	if (x[25] > 0.) {
	chakra_pd[25] = 0.1*(v[1]/x[25]);
	} else if (0.1 > 1.) {
	chakra_pd[25] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[25],0.1);
	}
	v[1] *= -8.88487047915689;
	v[0] += v[1];
	v[1] = pow(x[26], 0.1);
	if (errno) in_trouble2("pow",x[26],0.1);
	if (x[26] > 0.) {
	chakra_pd[26] = 0.1*(v[1]/x[26]);
	} else if (0.1 > 1.) {
	chakra_pd[26] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[26],0.1);
	}
	v[1] *= -8.62608784384164;
	v[0] += v[1];
	v[1] = pow(x[27], 0.1);
	if (errno) in_trouble2("pow",x[27],0.1);
	if (x[27] > 0.) {
	chakra_pd[27] = 0.1*(v[1]/x[27]);
	} else if (0.1 > 1.) {
	chakra_pd[27] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[27],0.1);
	}
	v[1] *= -8.37484256683654;
	v[0] += v[1];
	v[1] = pow(x[28], 0.1);
	if (errno) in_trouble2("pow",x[28],0.1);
	if (x[28] > 0.) {
	chakra_pd[28] = 0.1*(v[1]/x[28]);
	} else if (0.1 > 1.) {
	chakra_pd[28] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[28],0.1);
	}
	v[1] *= -8.13091511343354;
	v[0] += v[1];
	v[1] = pow(x[29], 0.1);
	if (errno) in_trouble2("pow",x[29],0.1);
	if (x[29] > 0.) {
	chakra_pd[29] = 0.1*(v[1]/x[29]);
	} else if (0.1 > 1.) {
	chakra_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[29],0.1);
	}
	v[1] *= -7.89409234313936;
	v[0] += v[1];
	v[1] = pow(x[30], 0.1);
	if (errno) in_trouble2("pow",x[30],0.1);
	if (x[30] > 0.) {
	chakra_pd[30] = 0.1*(v[1]/x[30]);
	} else if (0.1 > 1.) {
	chakra_pd[30] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[30],0.1);
	}
	v[1] *= -7.66416732343627;
	v[0] += v[1];
	v[1] = pow(x[31], 0.1);
	if (errno) in_trouble2("pow",x[31],0.1);
	if (x[31] > 0.) {
	chakra_pd[31] = 0.1*(v[1]/x[31]);
	} else if (0.1 > 1.) {
	chakra_pd[31] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[31],0.1);
	}
	v[1] *= -7.44093914896725;
	v[0] += v[1];
	v[1] = pow(x[32], 0.1);
	if (errno) in_trouble2("pow",x[32],0.1);
	if (x[32] > 0.) {
	chakra_pd[32] = 0.1*(v[1]/x[32]);
	} else if (0.1 > 1.) {
	chakra_pd[32] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[32],0.1);
	}
	v[1] *= -7.22421276598762;
	v[0] += v[1];
	v[1] = pow(x[33], 0.1);
	if (errno) in_trouble2("pow",x[33],0.1);
	if (x[33] > 0.) {
	chakra_pd[33] = 0.1*(v[1]/x[33]);
	} else if (0.1 > 1.) {
	chakra_pd[33] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[33],0.1);
	}
	v[1] *= -7.01379880192973;
	v[0] += v[1];
	v[1] = pow(x[34], 0.1);
	if (errno) in_trouble2("pow",x[34],0.1);
	if (x[34] > 0.) {
	chakra_pd[34] = 0.1*(v[1]/x[34]);
	} else if (0.1 > 1.) {
	chakra_pd[34] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[34],0.1);
	}
	v[1] *= -6.80951339993178;
	v[0] += v[1];
	v[1] = pow(x[35], 0.1);
	if (errno) in_trouble2("pow",x[35],0.1);
	if (x[35] > 0.) {
	chakra_pd[35] = 0.1*(v[1]/x[35]);
	} else if (0.1 > 1.) {
	chakra_pd[35] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[35],0.1);
	}
	v[1] *= -6.61117805818619;
	v[0] += v[1];
	v[1] = pow(x[36], 0.1);
	if (errno) in_trouble2("pow",x[36],0.1);
	if (x[36] > 0.) {
	chakra_pd[36] = 0.1*(v[1]/x[36]);
	} else if (0.1 > 1.) {
	chakra_pd[36] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[36],0.1);
	}
	v[1] *= -6.41861947396717;
	v[0] += v[1];
	v[1] = pow(x[37], 0.1);
	if (errno) in_trouble2("pow",x[37],0.1);
	if (x[37] > 0.) {
	chakra_pd[37] = 0.1*(v[1]/x[37]);
	} else if (0.1 > 1.) {
	chakra_pd[37] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[37],0.1);
	}
	v[1] *= -6.23166939220114;
	v[0] += v[1];
	v[1] = pow(x[38], 0.1);
	if (errno) in_trouble2("pow",x[38],0.1);
	if (x[38] > 0.) {
	chakra_pd[38] = 0.1*(v[1]/x[38]);
	} else if (0.1 > 1.) {
	chakra_pd[38] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[38],0.1);
	}
	v[1] *= -6.05016445844771;
	v[0] += v[1];
	v[1] = pow(x[39], 0.1);
	if (errno) in_trouble2("pow",x[39],0.1);
	if (x[39] > 0.) {
	chakra_pd[39] = 0.1*(v[1]/x[39]);
	} else if (0.1 > 1.) {
	chakra_pd[39] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[39],0.1);
	}
	v[1] *= -5.87394607616282;
	v[0] += v[1];
	v[1] = pow(x[40], 0.1);
	if (errno) in_trouble2("pow",x[40],0.1);
	if (x[40] > 0.) {
	chakra_pd[40] = 0.1*(v[1]/x[40]);
	} else if (0.1 > 1.) {
	chakra_pd[40] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[40],0.1);
	}
	v[1] *= -5.70286026811925;
	v[0] += v[1];
	;}

	if (wantfg & 2) {
	g[40] = -5.70286026811925*chakra_pd[40];
	g[39] = -5.87394607616282*chakra_pd[39];
	g[38] = -6.05016445844771*chakra_pd[38];
	g[37] = -6.23166939220114*chakra_pd[37];
	g[36] = -6.41861947396717*chakra_pd[36];
	g[35] = -6.61117805818619*chakra_pd[35];
	g[34] = -6.80951339993178*chakra_pd[34];
	g[33] = -7.01379880192973*chakra_pd[33];
	g[32] = -7.22421276598762*chakra_pd[32];
	g[31] = -7.44093914896725*chakra_pd[31];
	g[30] = -7.66416732343627*chakra_pd[30];
	g[29] = -7.89409234313936*chakra_pd[29];
	g[28] = -8.13091511343354*chakra_pd[28];
	g[27] = -8.37484256683654*chakra_pd[27];
	g[26] = -8.62608784384164*chakra_pd[26];
	g[25] = -8.88487047915689*chakra_pd[25];
	g[24] = -9.1514165935316*chakra_pd[24];
	g[23] = -9.42595909133755*chakra_pd[23];
	g[22] = -9.70873786407767*chakra_pd[22];
	g[21] = -10.*chakra_pd[21];
	}

	return v[0];
}

 void
chakra_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[1];
	real t1;
	fint wantfg = *needfg;
	if (chakra_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = pow(x[0], 0.75);
	if (errno) in_trouble2("pow",x[0],0.75);
	if (x[0] > 0.) {
	chakra_pd[0] = 0.75*(v[0]/x[0]);
	} else if (0.75 > 1.) {
	chakra_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[0],0.75);
	}
	v[0] *= -0.560877056310648;
	t1 = v[0] + x[41];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = pow(x[1], 0.75);
	if (errno) in_trouble2("pow",x[1],0.75);
	if (x[1] > 0.) {
	chakra_pd[1] = 0.75*(v[0]/x[1]);
	} else if (0.75 > 1.) {
	chakra_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[1],0.75);
	}
	v[0] *= -0.569991308475696;
	t1 = v[0] + x[42];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = pow(x[2], 0.75);
	if (errno) in_trouble2("pow",x[2],0.75);
	if (x[2] > 0.) {
	chakra_pd[2] = 0.75*(v[0]/x[2]);
	} else if (0.75 > 1.) {
	chakra_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[2],0.75);
	}
	v[0] *= -0.579253667238426;
	t1 = v[0] + x[43];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = pow(x[3], 0.75);
	if (errno) in_trouble2("pow",x[3],0.75);
	if (x[3] > 0.) {
	chakra_pd[3] = 0.75*(v[0]/x[3]);
	} else if (0.75 > 1.) {
	chakra_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[3],0.75);
	}
	v[0] *= -0.58866653933105;
	t1 = v[0] + x[44];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = pow(x[4], 0.75);
	if (errno) in_trouble2("pow",x[4],0.75);
	if (x[4] > 0.) {
	chakra_pd[4] = 0.75*(v[0]/x[4]);
	} else if (0.75 > 1.) {
	chakra_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[4],0.75);
	}
	v[0] *= -0.59823237059518;
	t1 = v[0] + x[45];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = pow(x[5], 0.75);
	if (errno) in_trouble2("pow",x[5],0.75);
	if (x[5] > 0.) {
	chakra_pd[5] = 0.75*(v[0]/x[5]);
	} else if (0.75 > 1.) {
	chakra_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[5],0.75);
	}
	v[0] *= -0.607953646617352;
	t1 = v[0] + x[46];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = pow(x[6], 0.75);
	if (errno) in_trouble2("pow",x[6],0.75);
	if (x[6] > 0.) {
	chakra_pd[6] = 0.75*(v[0]/x[6]);
	} else if (0.75 > 1.) {
	chakra_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[6],0.75);
	}
	v[0] *= -0.617832893374884;
	t1 = v[0] + x[47];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = pow(x[7], 0.75);
	if (errno) in_trouble2("pow",x[7],0.75);
	if (x[7] > 0.) {
	chakra_pd[7] = 0.75*(v[0]/x[7]);
	} else if (0.75 > 1.) {
	chakra_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[7],0.75);
	}
	v[0] *= -0.627872677892226;
	t1 = v[0] + x[48];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = pow(x[8], 0.75);
	if (errno) in_trouble2("pow",x[8],0.75);
	if (x[8] > 0.) {
	chakra_pd[8] = 0.75*(v[0]/x[8]);
	} else if (0.75 > 1.) {
	chakra_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[8],0.75);
	}
	v[0] *= -0.638075608907974;
	t1 = v[0] + x[49];
	c[8] = t1;

  /***  constraint 10  ***/

	v[0] = pow(x[9], 0.75);
	if (errno) in_trouble2("pow",x[9],0.75);
	if (x[9] > 0.) {
	chakra_pd[9] = 0.75*(v[0]/x[9]);
	} else if (0.75 > 1.) {
	chakra_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[9],0.75);
	}
	v[0] *= -0.648444337552729;
	t1 = v[0] + x[50];
	c[9] = t1;

  /***  constraint 11  ***/

	v[0] = pow(x[10], 0.75);
	if (errno) in_trouble2("pow",x[10],0.75);
	if (x[10] > 0.) {
	chakra_pd[10] = 0.75*(v[0]/x[10]);
	} else if (0.75 > 1.) {
	chakra_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[10],0.75);
	}
	v[0] *= -0.658981558037961;
	t1 = v[0] + x[51];
	c[10] = t1;

  /***  constraint 12  ***/

	v[0] = pow(x[11], 0.75);
	if (errno) in_trouble2("pow",x[11],0.75);
	if (x[11] > 0.) {
	chakra_pd[11] = 0.75*(v[0]/x[11]);
	} else if (0.75 > 1.) {
	chakra_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[11],0.75);
	}
	v[0] *= -0.669690008356078;
	t1 = v[0] + x[52];
	c[11] = t1;

  /***  constraint 13  ***/

	v[0] = pow(x[12], 0.75);
	if (errno) in_trouble2("pow",x[12],0.75);
	if (x[12] > 0.) {
	chakra_pd[12] = 0.75*(v[0]/x[12]);
	} else if (0.75 > 1.) {
	chakra_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[12],0.75);
	}
	v[0] *= -0.680572470991864;
	t1 = v[0] + x[53];
	c[12] = t1;

  /***  constraint 14  ***/

	v[0] = pow(x[13], 0.75);
	if (errno) in_trouble2("pow",x[13],0.75);
	if (x[13] > 0.) {
	chakra_pd[13] = 0.75*(v[0]/x[13]);
	} else if (0.75 > 1.) {
	chakra_pd[13] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[13],0.75);
	}
	v[0] *= -0.691631773645482;
	t1 = v[0] + x[54];
	c[13] = t1;

  /***  constraint 15  ***/

	v[0] = pow(x[14], 0.75);
	if (errno) in_trouble2("pow",x[14],0.75);
	if (x[14] > 0.) {
	chakra_pd[14] = 0.75*(v[0]/x[14]);
	} else if (0.75 > 1.) {
	chakra_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[14],0.75);
	}
	v[0] *= -0.702870789967221;
	t1 = v[0] + x[55];
	c[14] = t1;

  /***  constraint 16  ***/

	v[0] = pow(x[15], 0.75);
	if (errno) in_trouble2("pow",x[15],0.75);
	if (x[15] > 0.) {
	chakra_pd[15] = 0.75*(v[0]/x[15]);
	} else if (0.75 > 1.) {
	chakra_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[15],0.75);
	}
	v[0] *= -0.714292440304189;
	t1 = v[0] + x[56];
	c[15] = t1;

  /***  constraint 17  ***/

	v[0] = pow(x[16], 0.75);
	if (errno) in_trouble2("pow",x[16],0.75);
	if (x[16] > 0.) {
	chakra_pd[16] = 0.75*(v[0]/x[16]);
	} else if (0.75 > 1.) {
	chakra_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[16],0.75);
	}
	v[0] *= -0.725899692459132;
	t1 = v[0] + x[57];
	c[16] = t1;

  /***  constraint 18  ***/

	v[0] = pow(x[17], 0.75);
	if (errno) in_trouble2("pow",x[17],0.75);
	if (x[17] > 0.) {
	chakra_pd[17] = 0.75*(v[0]/x[17]);
	} else if (0.75 > 1.) {
	chakra_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[17],0.75);
	}
	v[0] *= -0.737695562461593;
	t1 = v[0] + x[58];
	c[17] = t1;

  /***  constraint 19  ***/

	v[0] = pow(x[18], 0.75);
	if (errno) in_trouble2("pow",x[18],0.75);
	if (x[18] > 0.) {
	chakra_pd[18] = 0.75*(v[0]/x[18]);
	} else if (0.75 > 1.) {
	chakra_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[18],0.75);
	}
	v[0] *= -0.749683115351594;
	t1 = v[0] + x[59];
	c[18] = t1;

  /***  constraint 20  ***/

	v[0] = pow(x[19], 0.75);
	if (errno) in_trouble2("pow",x[19],0.75);
	if (x[19] > 0.) {
	chakra_pd[19] = 0.75*(v[0]/x[19]);
	} else if (0.75 > 1.) {
	chakra_pd[19] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[19],0.75);
	}
	v[0] *= -0.761865465976057;
	t1 = v[0] + x[60];
	c[19] = t1;

  /***  constraint 21  ***/

	v[0] = pow(x[20], 0.75);
	if (errno) in_trouble2("pow",x[20],0.75);
	if (x[20] > 0.) {
	chakra_pd[20] = 0.75*(v[0]/x[20]);
	} else if (0.75 > 1.) {
	chakra_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",x[20],0.75);
	}
	v[0] *= -0.774245779798168;
	t1 = v[0] + x[61];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -0.95*x[0];
	t1 += x[1];
	t1 += x[21];
	t1 += -x[41];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -0.95*x[1];
	t1 += x[2];
	t1 += x[22];
	t1 += -x[42];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -0.95*x[2];
	t1 += x[3];
	t1 += x[23];
	t1 += -x[43];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -0.95*x[3];
	t1 += x[4];
	t1 += x[24];
	t1 += -x[44];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -0.95*x[4];
	t1 += x[5];
	t1 += x[25];
	t1 += -x[45];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -0.95*x[5];
	t1 += x[6];
	t1 += x[26];
	t1 += -x[46];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -0.95*x[6];
	t1 += x[7];
	t1 += x[27];
	t1 += -x[47];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -0.95*x[7];
	t1 += x[8];
	t1 += x[28];
	t1 += -x[48];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -0.95*x[8];
	t1 += x[9];
	t1 += x[29];
	t1 += -x[49];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -0.95*x[9];
	t1 += x[10];
	t1 += x[30];
	t1 += -x[50];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -0.95*x[10];
	t1 += x[11];
	t1 += x[31];
	t1 += -x[51];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -0.95*x[11];
	t1 += x[12];
	t1 += x[32];
	t1 += -x[52];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -0.95*x[12];
	t1 += x[13];
	t1 += x[33];
	t1 += -x[53];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -0.95*x[13];
	t1 += x[14];
	t1 += x[34];
	t1 += -x[54];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -0.95*x[14];
	t1 += x[15];
	t1 += x[35];
	t1 += -x[55];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -0.95*x[15];
	t1 += x[16];
	t1 += x[36];
	t1 += -x[56];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -0.95*x[16];
	t1 += x[17];
	t1 += x[37];
	t1 += -x[57];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -0.95*x[17];
	t1 += x[18];
	t1 += x[38];
	t1 += -x[58];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -0.95*x[18];
	t1 += x[19];
	t1 += x[39];
	t1 += -x[59];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -0.95*x[19];
	t1 += x[20];
	t1 += x[40];
	t1 += -x[60];
	c[40] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -0.560877056310648*chakra_pd[0];
	J[81] = 1.;

   /*** derivatives for constraint 2 ***/

	J[2] = -0.569991308475696*chakra_pd[1];
	J[83] = 1.;

   /*** derivatives for constraint 3 ***/

	J[5] = -0.579253667238426*chakra_pd[2];
	J[85] = 1.;

   /*** derivatives for constraint 4 ***/

	J[8] = -0.58866653933105*chakra_pd[3];
	J[87] = 1.;

   /*** derivatives for constraint 5 ***/

	J[11] = -0.59823237059518*chakra_pd[4];
	J[89] = 1.;

   /*** derivatives for constraint 6 ***/

	J[14] = -0.607953646617352*chakra_pd[5];
	J[91] = 1.;

   /*** derivatives for constraint 7 ***/

	J[17] = -0.617832893374884*chakra_pd[6];
	J[93] = 1.;

   /*** derivatives for constraint 8 ***/

	J[20] = -0.627872677892226*chakra_pd[7];
	J[95] = 1.;

   /*** derivatives for constraint 9 ***/

	J[23] = -0.638075608907974*chakra_pd[8];
	J[97] = 1.;

   /*** derivatives for constraint 10 ***/

	J[26] = -0.648444337552729*chakra_pd[9];
	J[99] = 1.;

   /*** derivatives for constraint 11 ***/

	J[29] = -0.658981558037961*chakra_pd[10];
	J[101] = 1.;

   /*** derivatives for constraint 12 ***/

	J[32] = -0.669690008356078*chakra_pd[11];
	J[103] = 1.;

   /*** derivatives for constraint 13 ***/

	J[35] = -0.680572470991864*chakra_pd[12];
	J[105] = 1.;

   /*** derivatives for constraint 14 ***/

	J[38] = -0.691631773645482*chakra_pd[13];
	J[107] = 1.;

   /*** derivatives for constraint 15 ***/

	J[41] = -0.702870789967221*chakra_pd[14];
	J[109] = 1.;

   /*** derivatives for constraint 16 ***/

	J[44] = -0.714292440304189*chakra_pd[15];
	J[111] = 1.;

   /*** derivatives for constraint 17 ***/

	J[47] = -0.725899692459132*chakra_pd[16];
	J[113] = 1.;

   /*** derivatives for constraint 18 ***/

	J[50] = -0.737695562461593*chakra_pd[17];
	J[115] = 1.;

   /*** derivatives for constraint 19 ***/

	J[53] = -0.749683115351594*chakra_pd[18];
	J[117] = 1.;

   /*** derivatives for constraint 20 ***/

	J[56] = -0.761865465976057*chakra_pd[19];
	J[119] = 1.;

   /*** derivatives for constraint 21 ***/

	J[59] = -0.774245779798168*chakra_pd[20];
	J[121] = 1.;

   /*** derivatives for constraint 22 ***/

	J[1] = -0.95;
	J[3] = 1.;
	J[61] = 1.;
	J[82] = -1.;

   /*** derivatives for constraint 23 ***/

	J[4] = -0.95;
	J[6] = 1.;
	J[62] = 1.;
	J[84] = -1.;

   /*** derivatives for constraint 24 ***/

	J[7] = -0.95;
	J[9] = 1.;
	J[63] = 1.;
	J[86] = -1.;

   /*** derivatives for constraint 25 ***/

	J[10] = -0.95;
	J[12] = 1.;
	J[64] = 1.;
	J[88] = -1.;

   /*** derivatives for constraint 26 ***/

	J[13] = -0.95;
	J[15] = 1.;
	J[65] = 1.;
	J[90] = -1.;

   /*** derivatives for constraint 27 ***/

	J[16] = -0.95;
	J[18] = 1.;
	J[66] = 1.;
	J[92] = -1.;

   /*** derivatives for constraint 28 ***/

	J[19] = -0.95;
	J[21] = 1.;
	J[67] = 1.;
	J[94] = -1.;

   /*** derivatives for constraint 29 ***/

	J[22] = -0.95;
	J[24] = 1.;
	J[68] = 1.;
	J[96] = -1.;

   /*** derivatives for constraint 30 ***/

	J[25] = -0.95;
	J[27] = 1.;
	J[69] = 1.;
	J[98] = -1.;

   /*** derivatives for constraint 31 ***/

	J[28] = -0.95;
	J[30] = 1.;
	J[70] = 1.;
	J[100] = -1.;

   /*** derivatives for constraint 32 ***/

	J[31] = -0.95;
	J[33] = 1.;
	J[71] = 1.;
	J[102] = -1.;

   /*** derivatives for constraint 33 ***/

	J[34] = -0.95;
	J[36] = 1.;
	J[72] = 1.;
	J[104] = -1.;

   /*** derivatives for constraint 34 ***/

	J[37] = -0.95;
	J[39] = 1.;
	J[73] = 1.;
	J[106] = -1.;

   /*** derivatives for constraint 35 ***/

	J[40] = -0.95;
	J[42] = 1.;
	J[74] = 1.;
	J[108] = -1.;

   /*** derivatives for constraint 36 ***/

	J[43] = -0.95;
	J[45] = 1.;
	J[75] = 1.;
	J[110] = -1.;

   /*** derivatives for constraint 37 ***/

	J[46] = -0.95;
	J[48] = 1.;
	J[76] = 1.;
	J[112] = -1.;

   /*** derivatives for constraint 38 ***/

	J[49] = -0.95;
	J[51] = 1.;
	J[77] = 1.;
	J[114] = -1.;

   /*** derivatives for constraint 39 ***/

	J[52] = -0.95;
	J[54] = 1.;
	J[78] = 1.;
	J[116] = -1.;

   /*** derivatives for constraint 40 ***/

	J[55] = -0.95;
	J[57] = 1.;
	J[79] = 1.;
	J[118] = -1.;

   /*** derivatives for constraint 41 ***/

	J[58] = -0.95;
	J[60] = 1.;
	J[80] = 1.;
	J[120] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
