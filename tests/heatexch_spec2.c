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
 fint heatexch_spec2_auxcom_[1] = { 0 /* nlc */ };
 fint heatexch_spec2_funcom_[325] = {
	76 /* nvar */,
	1 /* nobj */,
	90 /* ncon */,
	242 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	6,
	11,
	11,
	16,
	21,
	21,
	26,
	31,
	31,
	36,
	41,
	41,
	46,
	51,
	51,
	54,
	57,
	60,
	63,
	66,
	69,
	70,
	72,
	73,
	74,
	76,
	77,
	78,
	80,
	81,
	82,
	84,
	85,
	86,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	99,
	105,
	111,
	115,
	121,
	127,
	131,
	137,
	143,
	147,
	153,
	159,
	163,
	169,
	175,
	185,
	199,
	207,
	210,
	213,
	216,
	219,
	222,
	225,
	228,
	231,
	234,
	237,
	238,
	239,
	240,
	241,
	242,
	243,

	/* rownos */
	1,
	11,
	18,
	24,
	49,
	2,
	12,
	18,
	24,
	50,
	3,
	11,
	19,
	24,
	51,
	4,
	12,
	19,
	24,
	52,
	5,
	11,
	20,
	24,
	53,
	6,
	12,
	20,
	24,
	54,
	7,
	11,
	21,
	24,
	55,
	8,
	12,
	21,
	24,
	56,
	9,
	11,
	22,
	24,
	57,
	10,
	12,
	22,
	24,
	58,
	13,
	18,
	60,
	14,
	19,
	61,
	15,
	20,
	62,
	16,
	21,
	63,
	17,
	22,
	64,
	23,
	24,
	59,
	65,
	66,
	75,
	76,
	67,
	68,
	77,
	78,
	69,
	70,
	79,
	80,
	71,
	72,
	81,
	82,
	73,
	74,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	1,
	25,
	43,
	65,
	1,
	2,
	25,
	26,
	66,
	75,
	2,
	13,
	26,
	37,
	76,
	85,
	3,
	27,
	44,
	67,
	3,
	4,
	27,
	28,
	68,
	77,
	4,
	14,
	28,
	38,
	78,
	86,
	5,
	29,
	45,
	69,
	5,
	6,
	29,
	30,
	70,
	79,
	6,
	15,
	30,
	39,
	80,
	87,
	7,
	31,
	46,
	71,
	7,
	8,
	31,
	32,
	72,
	81,
	8,
	16,
	32,
	40,
	82,
	88,
	9,
	33,
	47,
	73,
	9,
	10,
	33,
	34,
	74,
	83,
	10,
	17,
	34,
	41,
	84,
	89,
	11,
	23,
	35,
	42,
	65,
	67,
	69,
	71,
	73,
	90,
	11,
	12,
	35,
	36,
	66,
	68,
	70,
	72,
	74,
	75,
	77,
	79,
	81,
	83,
	12,
	36,
	48,
	76,
	78,
	80,
	82,
	84,
	49,
	65,
	75,
	50,
	66,
	76,
	51,
	67,
	77,
	52,
	68,
	78,
	53,
	69,
	79,
	54,
	70,
	80,
	55,
	71,
	81,
	56,
	72,
	82,
	57,
	73,
	83,
	58,
	74,
	84,
	60,
	61,
	62,
	63,
	64,
	59 };

 real heatexch_spec2_boundc_[1+152+180] /* Infinity, variable bounds, constraint bounds */ = {
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
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		10.,
		1.7e308,
		320.,
		500.,
		320.,
		500.,
		320.,
		500.,
		380.,
		480.,
		380.,
		480.,
		380.,
		480.,
		360.,
		460.,
		360.,
		460.,
		360.,
		460.,
		360.,
		380.,
		360.,
		380.,
		360.,
		380.,
		320.,
		380.,
		320.,
		380.,
		320.,
		380.,
		290.,
		660.,
		290.,
		660.,
		290.,
		660.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		1920.,
		1920.,
		1520.,
		1520.,
		2160.,
		2160.,
		7200.,
		7200.,
		3840.,
		3840.,
		-1080.,
		-1080.,
		-400.,
		-400.,
		-600.,
		-600.,
		-400.,
		-400.,
		-720.,
		-720.,
		-11880.,
		-11880.,
		-6660.,
		-6660.,
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
		320.,
		1.7e308,
		380.,
		1.7e308,
		360.,
		1.7e308,
		360.,
		1.7e308,
		320.,
		1.7e308,
		-660.,
		1.7e308,
		-500.,
		-500.,
		-480.,
		-480.,
		-460.,
		-460.,
		-380.,
		-380.,
		-380.,
		-380.,
		-290.,
		-290.,
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
		-1.7e308,
		0.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		280.,
		-1.7e308,
		280.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		300.,
		-1.7e308,
		340.,
		-1.7e308,
		340.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		-320.,
		-1.7e308,
		700.};

 real heatexch_spec2_x0comn_[76] = {
		1080.,
		1080.,
		0.,
		400.,
		400.,
		0.,
		600.,
		600.,
		0.,
		400.,
		400.,
		0.,
		720.,
		720.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		210.,
		210.,
		210.,
		190.,
		190.,
		190.,
		170.,
		170.,
		170.,
		90.,
		90.,
		90.,
		90.,
		90.,
		90.,
		180.,
		160.,
		140.,
		60.,
		60.,
		410.,
		500.,
		500.,
		500.,
		480.,
		480.,
		480.,
		460.,
		460.,
		460.,
		380.,
		380.,
		380.,
		380.,
		380.,
		380.,
		290.,
		290.,
		290.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real heatexch_spec2_pd[111];
static real heatexch_spec2_old_x[76];
static int heatexch_spec2_xkind = -1;

 static int
heatexch_spec2_xcheck(real *x)
{
	real *x1 = heatexch_spec2_old_x, *xe = x + 76;
	errno = 0;
	if (heatexch_spec2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	heatexch_spec2_xkind = 0;
	return 1;
	}
 real
heatexch_spec2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[19], dv[53], rv;
	fint wantfg = *needfg;
	if (heatexch_spec2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	heatexch_spec2_pd[0] = 0.5 * x[21];
	heatexch_spec2_pd[1] = heatexch_spec2_pd[0] * x[22];
	heatexch_spec2_pd[2] = x[21] + x[22];
	v[1] = heatexch_spec2_pd[1] * heatexch_spec2_pd[2];
	v[2] = v[1] + 1.e-06;
	v[1] = pow(v[2], 0.33333);
	if (errno) in_trouble2("pow",v[2],0.33333);
	if (v[2] > 0.) {
	heatexch_spec2_pd[3] = 0.33333*(v[1]/v[2]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.33333);
	}
	v[2] = v[1] + 1.e-06;
	if (v[2] == 0.) {
	zerdiv_(&v[2]);	}
	v[1] = x[0] / v[2];
	heatexch_spec2_pd[4] = 1. / v[2];
	heatexch_spec2_pd[5] = -v[1] * heatexch_spec2_pd[4];
	v[2] = v[1] + 1.e-06;
	v[1] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	heatexch_spec2_pd[6] = 0.6*(v[1]/v[2]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[1] *= 1200.;
	heatexch_spec2_pd[7] = 0.5 * x[22];
	heatexch_spec2_pd[8] = heatexch_spec2_pd[7] * x[23];
	heatexch_spec2_pd[9] = x[22] + x[23];
	v[3] = heatexch_spec2_pd[8] * heatexch_spec2_pd[9];
	v[4] = v[3] + 1.e-06;
	v[3] = pow(v[4], 0.33333);
	if (errno) in_trouble2("pow",v[4],0.33333);
	if (v[4] > 0.) {
	heatexch_spec2_pd[10] = 0.33333*(v[3]/v[4]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.33333);
	}
	v[4] = v[3] + 1.e-06;
	if (v[4] == 0.) {
	zerdiv_(&v[4]);	}
	v[3] = x[1] / v[4];
	heatexch_spec2_pd[11] = 1. / v[4];
	heatexch_spec2_pd[12] = -v[3] * heatexch_spec2_pd[11];
	v[4] = v[3] + 1.e-06;
	v[3] = pow(v[4], 0.6);
	if (errno) in_trouble2("pow",v[4],0.6);
	if (v[4] > 0.) {
	heatexch_spec2_pd[13] = 0.6*(v[3]/v[4]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[13] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.6);
	}
	v[3] *= 1200.;
	v[1] += v[3];
	v[3] = 99.9853968566039 * x[2];
	v[4] = v[3] + 1.e-06;
	v[3] = pow(v[4], 0.6);
	if (errno) in_trouble2("pow",v[4],0.6);
	if (v[4] > 0.) {
	heatexch_spec2_pd[14] = 0.6*(v[3]/v[4]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[4],0.6);
	}
	v[3] *= 1200.;
	v[1] += v[3];
	heatexch_spec2_pd[15] = 0.5 * x[24];
	heatexch_spec2_pd[16] = heatexch_spec2_pd[15] * x[25];
	heatexch_spec2_pd[17] = x[24] + x[25];
	v[4] = heatexch_spec2_pd[16] * heatexch_spec2_pd[17];
	v[5] = v[4] + 1.e-06;
	v[4] = pow(v[5], 0.33333);
	if (errno) in_trouble2("pow",v[5],0.33333);
	if (v[5] > 0.) {
	heatexch_spec2_pd[18] = 0.33333*(v[4]/v[5]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],0.33333);
	}
	v[5] = v[4] + 1.e-06;
	if (v[5] == 0.) {
	zerdiv_(&v[5]);	}
	v[4] = x[3] / v[5];
	heatexch_spec2_pd[19] = 1. / v[5];
	heatexch_spec2_pd[20] = -v[4] * heatexch_spec2_pd[19];
	v[5] = v[4] + 1.e-06;
	v[4] = pow(v[5], 0.6);
	if (errno) in_trouble2("pow",v[5],0.6);
	if (v[5] > 0.) {
	heatexch_spec2_pd[21] = 0.6*(v[4]/v[5]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[5],0.6);
	}
	v[4] *= 1200.;
	v[1] += v[4];
	heatexch_spec2_pd[22] = 0.5 * x[25];
	heatexch_spec2_pd[23] = heatexch_spec2_pd[22] * x[26];
	heatexch_spec2_pd[24] = x[25] + x[26];
	v[5] = heatexch_spec2_pd[23] * heatexch_spec2_pd[24];
	v[6] = v[5] + 1.e-06;
	v[5] = pow(v[6], 0.33333);
	if (errno) in_trouble2("pow",v[6],0.33333);
	if (v[6] > 0.) {
	heatexch_spec2_pd[25] = 0.33333*(v[5]/v[6]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[25] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[6],0.33333);
	}
	v[6] = v[5] + 1.e-06;
	if (v[6] == 0.) {
	zerdiv_(&v[6]);	}
	v[5] = x[4] / v[6];
	heatexch_spec2_pd[26] = 1. / v[6];
	heatexch_spec2_pd[27] = -v[5] * heatexch_spec2_pd[26];
	v[6] = v[5] + 1.e-06;
	v[5] = pow(v[6], 0.6);
	if (errno) in_trouble2("pow",v[6],0.6);
	if (v[6] > 0.) {
	heatexch_spec2_pd[28] = 0.6*(v[5]/v[6]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[28] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[6],0.6);
	}
	v[5] *= 1200.;
	v[1] += v[5];
	v[5] = 99.9853968566039 * x[5];
	v[6] = v[5] + 1.e-06;
	v[5] = pow(v[6], 0.6);
	if (errno) in_trouble2("pow",v[6],0.6);
	if (v[6] > 0.) {
	heatexch_spec2_pd[29] = 0.6*(v[5]/v[6]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[29] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[6],0.6);
	}
	v[5] *= 1200.;
	v[1] += v[5];
	heatexch_spec2_pd[30] = 0.5 * x[27];
	heatexch_spec2_pd[31] = heatexch_spec2_pd[30] * x[28];
	heatexch_spec2_pd[32] = x[27] + x[28];
	v[6] = heatexch_spec2_pd[31] * heatexch_spec2_pd[32];
	v[7] = v[6] + 1.e-06;
	v[6] = pow(v[7], 0.33333);
	if (errno) in_trouble2("pow",v[7],0.33333);
	if (v[7] > 0.) {
	heatexch_spec2_pd[33] = 0.33333*(v[6]/v[7]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[33] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[7],0.33333);
	}
	v[7] = v[6] + 1.e-06;
	if (v[7] == 0.) {
	zerdiv_(&v[7]);	}
	v[6] = x[6] / v[7];
	heatexch_spec2_pd[34] = 1. / v[7];
	heatexch_spec2_pd[35] = -v[6] * heatexch_spec2_pd[34];
	v[7] = v[6] + 1.e-06;
	v[6] = pow(v[7], 0.6);
	if (errno) in_trouble2("pow",v[7],0.6);
	if (v[7] > 0.) {
	heatexch_spec2_pd[36] = 0.6*(v[6]/v[7]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[36] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[7],0.6);
	}
	v[6] *= 1200.;
	v[1] += v[6];
	heatexch_spec2_pd[37] = 0.5 * x[28];
	heatexch_spec2_pd[38] = heatexch_spec2_pd[37] * x[29];
	heatexch_spec2_pd[39] = x[28] + x[29];
	v[7] = heatexch_spec2_pd[38] * heatexch_spec2_pd[39];
	v[8] = v[7] + 1.e-06;
	v[7] = pow(v[8], 0.33333);
	if (errno) in_trouble2("pow",v[8],0.33333);
	if (v[8] > 0.) {
	heatexch_spec2_pd[40] = 0.33333*(v[7]/v[8]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[40] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[8],0.33333);
	}
	v[8] = v[7] + 1.e-06;
	if (v[8] == 0.) {
	zerdiv_(&v[8]);	}
	v[7] = x[7] / v[8];
	heatexch_spec2_pd[41] = 1. / v[8];
	heatexch_spec2_pd[42] = -v[7] * heatexch_spec2_pd[41];
	v[8] = v[7] + 1.e-06;
	v[7] = pow(v[8], 0.6);
	if (errno) in_trouble2("pow",v[8],0.6);
	if (v[8] > 0.) {
	heatexch_spec2_pd[43] = 0.6*(v[7]/v[8]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[43] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[8],0.6);
	}
	v[7] *= 1200.;
	v[1] += v[7];
	v[7] = 99.9853968566039 * x[8];
	v[8] = v[7] + 1.e-06;
	v[7] = pow(v[8], 0.6);
	if (errno) in_trouble2("pow",v[8],0.6);
	if (v[8] > 0.) {
	heatexch_spec2_pd[44] = 0.6*(v[7]/v[8]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[44] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[8],0.6);
	}
	v[7] *= 1200.;
	v[1] += v[7];
	heatexch_spec2_pd[45] = 0.5 * x[30];
	heatexch_spec2_pd[46] = heatexch_spec2_pd[45] * x[31];
	heatexch_spec2_pd[47] = x[30] + x[31];
	v[8] = heatexch_spec2_pd[46] * heatexch_spec2_pd[47];
	v[9] = v[8] + 1.e-06;
	v[8] = pow(v[9], 0.33333);
	if (errno) in_trouble2("pow",v[9],0.33333);
	if (v[9] > 0.) {
	heatexch_spec2_pd[48] = 0.33333*(v[8]/v[9]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[48] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[9],0.33333);
	}
	v[9] = v[8] + 1.e-06;
	if (v[9] == 0.) {
	zerdiv_(&v[9]);	}
	v[8] = x[9] / v[9];
	heatexch_spec2_pd[49] = 1. / v[9];
	heatexch_spec2_pd[50] = -v[8] * heatexch_spec2_pd[49];
	v[9] = v[8] + 1.e-06;
	v[8] = pow(v[9], 0.6);
	if (errno) in_trouble2("pow",v[9],0.6);
	if (v[9] > 0.) {
	heatexch_spec2_pd[51] = 0.6*(v[8]/v[9]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[51] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[9],0.6);
	}
	v[8] *= 1200.;
	v[1] += v[8];
	heatexch_spec2_pd[52] = 0.5 * x[31];
	heatexch_spec2_pd[53] = heatexch_spec2_pd[52] * x[32];
	heatexch_spec2_pd[54] = x[31] + x[32];
	v[9] = heatexch_spec2_pd[53] * heatexch_spec2_pd[54];
	v[10] = v[9] + 1.e-06;
	v[9] = pow(v[10], 0.33333);
	if (errno) in_trouble2("pow",v[10],0.33333);
	if (v[10] > 0.) {
	heatexch_spec2_pd[55] = 0.33333*(v[9]/v[10]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[55] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],0.33333);
	}
	v[10] = v[9] + 1.e-06;
	if (v[10] == 0.) {
	zerdiv_(&v[10]);	}
	v[9] = x[10] / v[10];
	heatexch_spec2_pd[56] = 1. / v[10];
	heatexch_spec2_pd[57] = -v[9] * heatexch_spec2_pd[56];
	v[10] = v[9] + 1.e-06;
	v[9] = pow(v[10], 0.6);
	if (errno) in_trouble2("pow",v[10],0.6);
	if (v[10] > 0.) {
	heatexch_spec2_pd[58] = 0.6*(v[9]/v[10]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[58] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],0.6);
	}
	v[9] *= 1200.;
	v[1] += v[9];
	v[9] = 99.9853968566039 * x[11];
	v[10] = v[9] + 1.e-06;
	v[9] = pow(v[10], 0.6);
	if (errno) in_trouble2("pow",v[10],0.6);
	if (v[10] > 0.) {
	heatexch_spec2_pd[59] = 0.6*(v[9]/v[10]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[59] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[10],0.6);
	}
	v[9] *= 1200.;
	v[1] += v[9];
	heatexch_spec2_pd[60] = 0.5 * x[33];
	heatexch_spec2_pd[61] = heatexch_spec2_pd[60] * x[34];
	heatexch_spec2_pd[62] = x[33] + x[34];
	v[10] = heatexch_spec2_pd[61] * heatexch_spec2_pd[62];
	v[11] = v[10] + 1.e-06;
	v[10] = pow(v[11], 0.33333);
	if (errno) in_trouble2("pow",v[11],0.33333);
	if (v[11] > 0.) {
	heatexch_spec2_pd[63] = 0.33333*(v[10]/v[11]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[63] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.33333);
	}
	v[11] = v[10] + 1.e-06;
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[10] = x[12] / v[11];
	heatexch_spec2_pd[64] = 1. / v[11];
	heatexch_spec2_pd[65] = -v[10] * heatexch_spec2_pd[64];
	v[11] = v[10] + 1.e-06;
	v[10] = pow(v[11], 0.6);
	if (errno) in_trouble2("pow",v[11],0.6);
	if (v[11] > 0.) {
	heatexch_spec2_pd[66] = 0.6*(v[10]/v[11]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[66] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.6);
	}
	v[10] *= 1200.;
	v[1] += v[10];
	heatexch_spec2_pd[67] = 0.5 * x[34];
	heatexch_spec2_pd[68] = heatexch_spec2_pd[67] * x[35];
	heatexch_spec2_pd[69] = x[34] + x[35];
	v[11] = heatexch_spec2_pd[68] * heatexch_spec2_pd[69];
	v[12] = v[11] + 1.e-06;
	v[11] = pow(v[12], 0.33333);
	if (errno) in_trouble2("pow",v[12],0.33333);
	if (v[12] > 0.) {
	heatexch_spec2_pd[70] = 0.33333*(v[11]/v[12]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[70] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[12],0.33333);
	}
	v[12] = v[11] + 1.e-06;
	if (v[12] == 0.) {
	zerdiv_(&v[12]);	}
	v[11] = x[13] / v[12];
	heatexch_spec2_pd[71] = 1. / v[12];
	heatexch_spec2_pd[72] = -v[11] * heatexch_spec2_pd[71];
	v[12] = v[11] + 1.e-06;
	v[11] = pow(v[12], 0.6);
	if (errno) in_trouble2("pow",v[12],0.6);
	if (v[12] > 0.) {
	heatexch_spec2_pd[73] = 0.6*(v[11]/v[12]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[73] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[12],0.6);
	}
	v[11] *= 1200.;
	v[1] += v[11];
	v[11] = 99.9853968566039 * x[14];
	v[12] = v[11] + 1.e-06;
	v[11] = pow(v[12], 0.6);
	if (errno) in_trouble2("pow",v[12],0.6);
	if (v[12] > 0.) {
	heatexch_spec2_pd[74] = 0.6*(v[11]/v[12]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[74] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[12],0.6);
	}
	v[11] *= 1200.;
	v[1] += v[11];
	heatexch_spec2_pd[75] = 40. * x[41];
	v[11] = 0.5 * x[41];
	heatexch_spec2_pd[76] = v[11] + 20.;
	v[11] = heatexch_spec2_pd[75] * heatexch_spec2_pd[76];
	v[13] = v[11] + 1.e-06;
	v[11] = pow(v[13], 0.33333);
	if (errno) in_trouble2("pow",v[13],0.33333);
	if (v[13] > 0.) {
	heatexch_spec2_pd[77] = 0.33333*(v[11]/v[13]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[77] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[13],0.33333);
	}
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[13] = x[20] / v[11];
	heatexch_spec2_pd[78] = 1. / v[11];
	heatexch_spec2_pd[79] = -v[13] * heatexch_spec2_pd[78];
	v[11] = v[13] + 1.e-06;
	v[13] = pow(v[11], 0.6);
	if (errno) in_trouble2("pow",v[11],0.6);
	if (v[11] > 0.) {
	heatexch_spec2_pd[80] = 0.6*(v[13]/v[11]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[80] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.6);
	}
	v[13] *= 1200.;
	v[1] += v[13];
	heatexch_spec2_pd[81] = 10. * x[36];
	heatexch_spec2_pd[82] = x[36] + 20.;
	v[11] = heatexch_spec2_pd[81] * heatexch_spec2_pd[82];
	v[14] = v[11] + 1.e-06;
	v[11] = pow(v[14], 0.33333);
	if (errno) in_trouble2("pow",v[14],0.33333);
	if (v[14] > 0.) {
	heatexch_spec2_pd[83] = 0.33333*(v[11]/v[14]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[83] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[14],0.33333);
	}
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[14] = x[15] / v[11];
	heatexch_spec2_pd[84] = 1. / v[11];
	heatexch_spec2_pd[85] = -v[14] * heatexch_spec2_pd[84];
	v[11] = v[14] + 1.e-06;
	v[14] = pow(v[11], 0.6);
	if (errno) in_trouble2("pow",v[11],0.6);
	if (v[11] > 0.) {
	heatexch_spec2_pd[86] = 0.6*(v[14]/v[11]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[86] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.6);
	}
	v[14] *= 1200.;
	v[1] += v[14];
	heatexch_spec2_pd[87] = 40. * x[37];
	heatexch_spec2_pd[88] = x[37] + 80.;
	v[11] = heatexch_spec2_pd[87] * heatexch_spec2_pd[88];
	v[15] = v[11] + 1.e-06;
	v[11] = pow(v[15], 0.33333);
	if (errno) in_trouble2("pow",v[15],0.33333);
	if (v[15] > 0.) {
	heatexch_spec2_pd[89] = 0.33333*(v[11]/v[15]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[89] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[15],0.33333);
	}
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[15] = x[16] / v[11];
	heatexch_spec2_pd[90] = 1. / v[11];
	heatexch_spec2_pd[91] = -v[15] * heatexch_spec2_pd[90];
	v[11] = v[15] + 1.e-06;
	v[15] = pow(v[11], 0.6);
	if (errno) in_trouble2("pow",v[11],0.6);
	if (v[11] > 0.) {
	heatexch_spec2_pd[92] = 0.6*(v[15]/v[11]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[92] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.6);
	}
	v[15] *= 1200.;
	v[1] += v[15];
	heatexch_spec2_pd[93] = 30. * x[38];
	heatexch_spec2_pd[94] = x[38] + 60.;
	v[11] = heatexch_spec2_pd[93] * heatexch_spec2_pd[94];
	v[16] = v[11] + 1.e-06;
	v[11] = pow(v[16], 0.33333);
	if (errno) in_trouble2("pow",v[16],0.33333);
	if (v[16] > 0.) {
	heatexch_spec2_pd[95] = 0.33333*(v[11]/v[16]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[95] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[16],0.33333);
	}
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[16] = x[17] / v[11];
	heatexch_spec2_pd[96] = 1. / v[11];
	heatexch_spec2_pd[97] = -v[16] * heatexch_spec2_pd[96];
	v[11] = v[16] + 1.e-06;
	v[16] = pow(v[11], 0.6);
	if (errno) in_trouble2("pow",v[11],0.6);
	if (v[11] > 0.) {
	heatexch_spec2_pd[98] = 0.6*(v[16]/v[11]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[98] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.6);
	}
	v[16] *= 1200.;
	v[1] += v[16];
	heatexch_spec2_pd[99] = 30. * x[39];
	heatexch_spec2_pd[100] = x[39] + 60.;
	v[11] = heatexch_spec2_pd[99] * heatexch_spec2_pd[100];
	v[17] = v[11] + 1.e-06;
	v[11] = pow(v[17], 0.33333);
	if (errno) in_trouble2("pow",v[17],0.33333);
	if (v[17] > 0.) {
	heatexch_spec2_pd[101] = 0.33333*(v[11]/v[17]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[101] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[17],0.33333);
	}
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[17] = x[18] / v[11];
	heatexch_spec2_pd[102] = 1. / v[11];
	heatexch_spec2_pd[103] = -v[17] * heatexch_spec2_pd[102];
	v[11] = v[17] + 1.e-06;
	v[17] = pow(v[11], 0.6);
	if (errno) in_trouble2("pow",v[11],0.6);
	if (v[11] > 0.) {
	heatexch_spec2_pd[104] = 0.6*(v[17]/v[11]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[104] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.6);
	}
	v[17] *= 1200.;
	v[1] += v[17];
	heatexch_spec2_pd[105] = 10. * x[40];
	heatexch_spec2_pd[106] = x[40] + 20.;
	v[11] = heatexch_spec2_pd[105] * heatexch_spec2_pd[106];
	v[18] = v[11] + 1.e-06;
	v[11] = pow(v[18], 0.33333);
	if (errno) in_trouble2("pow",v[18],0.33333);
	if (v[18] > 0.) {
	heatexch_spec2_pd[107] = 0.33333*(v[11]/v[18]);
	} else if (0.33333 > 1.) {
	heatexch_spec2_pd[107] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[18],0.33333);
	}
	if (v[11] == 0.) {
	zerdiv_(&v[11]);	}
	v[18] = x[19] / v[11];
	heatexch_spec2_pd[108] = 1. / v[11];
	heatexch_spec2_pd[109] = -v[18] * heatexch_spec2_pd[108];
	v[11] = v[18] + 1.e-06;
	v[18] = pow(v[11], 0.6);
	if (errno) in_trouble2("pow",v[11],0.6);
	if (v[11] > 0.) {
	heatexch_spec2_pd[110] = 0.6*(v[18]/v[11]);
	} else if (0.6 > 1.) {
	heatexch_spec2_pd[110] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[11],0.6);
	}
	v[18] *= 1200.;
	v[1] += v[18];
	rv = v[1] + 10.*x[15];
	rv += 10.*x[16];
	rv += 10.*x[17];
	rv += 10.*x[18];
	rv += 10.*x[19];
	rv += 140.*x[20];
	rv += 5500.*x[60];
	rv += 5500.*x[61];
	rv += 5500.*x[62];
	rv += 5500.*x[63];
	rv += 5500.*x[64];
	rv += 5500.*x[65];
	rv += 5500.*x[66];
	rv += 5500.*x[67];
	rv += 5500.*x[68];
	rv += 5500.*x[69];
	rv += 5500.*x[70];
	rv += 5500.*x[71];
	rv += 5500.*x[72];
	rv += 5500.*x[73];
	rv += 5500.*x[74];
	rv += 5500.*x[75];
	;}

	if (wantfg & 2) {
	dv[0] = 1200.*heatexch_spec2_pd[110];
	dv[1] = dv[0]*heatexch_spec2_pd[109];
	g[19] = dv[0]*heatexch_spec2_pd[108] + 10.;
	dv[1] *= heatexch_spec2_pd[107];
	dv[2] = dv[1]*heatexch_spec2_pd[105];
	dv[1] *= heatexch_spec2_pd[106];
	g[40] = dv[2];
	g[40] += dv[1]*10.;
	dv[3] = 1200.*heatexch_spec2_pd[104];
	dv[4] = dv[3]*heatexch_spec2_pd[103];
	g[18] = dv[3]*heatexch_spec2_pd[102] + 10.;
	dv[4] *= heatexch_spec2_pd[101];
	dv[5] = dv[4]*heatexch_spec2_pd[99];
	dv[4] *= heatexch_spec2_pd[100];
	g[39] = dv[5];
	g[39] += dv[4]*30.;
	dv[6] = 1200.*heatexch_spec2_pd[98];
	dv[7] = dv[6]*heatexch_spec2_pd[97];
	g[17] = dv[6]*heatexch_spec2_pd[96] + 10.;
	dv[7] *= heatexch_spec2_pd[95];
	dv[8] = dv[7]*heatexch_spec2_pd[93];
	dv[7] *= heatexch_spec2_pd[94];
	g[38] = dv[8];
	g[38] += dv[7]*30.;
	dv[9] = 1200.*heatexch_spec2_pd[92];
	dv[10] = dv[9]*heatexch_spec2_pd[91];
	g[16] = dv[9]*heatexch_spec2_pd[90] + 10.;
	dv[10] *= heatexch_spec2_pd[89];
	dv[11] = dv[10]*heatexch_spec2_pd[87];
	dv[10] *= heatexch_spec2_pd[88];
	g[37] = dv[11];
	g[37] += dv[10]*40.;
	dv[12] = 1200.*heatexch_spec2_pd[86];
	dv[13] = dv[12]*heatexch_spec2_pd[85];
	g[15] = dv[12]*heatexch_spec2_pd[84] + 10.;
	dv[13] *= heatexch_spec2_pd[83];
	dv[14] = dv[13]*heatexch_spec2_pd[81];
	dv[13] *= heatexch_spec2_pd[82];
	g[36] = dv[14];
	g[36] += dv[13]*10.;
	dv[15] = 1200.*heatexch_spec2_pd[80];
	dv[16] = dv[15]*heatexch_spec2_pd[79];
	g[20] = dv[15]*heatexch_spec2_pd[78] + 140.;
	dv[16] *= heatexch_spec2_pd[77];
	dv[17] = dv[16]*heatexch_spec2_pd[75];
	dv[16] *= heatexch_spec2_pd[76];
	g[41] = dv[17]*0.5;
	g[41] += dv[16]*40.;
	dv[18] = 1200.*heatexch_spec2_pd[74];
	g[14] = dv[18]*99.9853968566039;
	dv[19] = 1200.*heatexch_spec2_pd[73];
	dv[20] = dv[19]*heatexch_spec2_pd[72];
	g[13] = dv[19]*heatexch_spec2_pd[71];
	dv[20] *= heatexch_spec2_pd[70];
	dv[21] = dv[20]*heatexch_spec2_pd[68];
	dv[20] *= heatexch_spec2_pd[69];
	g[35] = dv[21];
	g[34] = dv[21];
	g[35] += dv[20]*heatexch_spec2_pd[67];
	dv[20] *= x[35];
	g[34] += dv[20]*0.5;
	dv[22] = 1200.*heatexch_spec2_pd[66];
	dv[23] = dv[22]*heatexch_spec2_pd[65];
	g[12] = dv[22]*heatexch_spec2_pd[64];
	dv[23] *= heatexch_spec2_pd[63];
	dv[24] = dv[23]*heatexch_spec2_pd[61];
	dv[23] *= heatexch_spec2_pd[62];
	g[34] += dv[24];
	g[33] = dv[24];
	g[34] += dv[23]*heatexch_spec2_pd[60];
	dv[23] *= x[34];
	g[33] += dv[23]*0.5;
	dv[25] = 1200.*heatexch_spec2_pd[59];
	g[11] = dv[25]*99.9853968566039;
	dv[26] = 1200.*heatexch_spec2_pd[58];
	dv[27] = dv[26]*heatexch_spec2_pd[57];
	g[10] = dv[26]*heatexch_spec2_pd[56];
	dv[27] *= heatexch_spec2_pd[55];
	dv[28] = dv[27]*heatexch_spec2_pd[53];
	dv[27] *= heatexch_spec2_pd[54];
	g[32] = dv[28];
	g[31] = dv[28];
	g[32] += dv[27]*heatexch_spec2_pd[52];
	dv[27] *= x[32];
	g[31] += dv[27]*0.5;
	dv[29] = 1200.*heatexch_spec2_pd[51];
	dv[30] = dv[29]*heatexch_spec2_pd[50];
	g[9] = dv[29]*heatexch_spec2_pd[49];
	dv[30] *= heatexch_spec2_pd[48];
	dv[31] = dv[30]*heatexch_spec2_pd[46];
	dv[30] *= heatexch_spec2_pd[47];
	g[31] += dv[31];
	g[30] = dv[31];
	g[31] += dv[30]*heatexch_spec2_pd[45];
	dv[30] *= x[31];
	g[30] += dv[30]*0.5;
	dv[32] = 1200.*heatexch_spec2_pd[44];
	g[8] = dv[32]*99.9853968566039;
	dv[33] = 1200.*heatexch_spec2_pd[43];
	dv[34] = dv[33]*heatexch_spec2_pd[42];
	g[7] = dv[33]*heatexch_spec2_pd[41];
	dv[34] *= heatexch_spec2_pd[40];
	dv[35] = dv[34]*heatexch_spec2_pd[38];
	dv[34] *= heatexch_spec2_pd[39];
	g[29] = dv[35];
	g[28] = dv[35];
	g[29] += dv[34]*heatexch_spec2_pd[37];
	dv[34] *= x[29];
	g[28] += dv[34]*0.5;
	dv[36] = 1200.*heatexch_spec2_pd[36];
	dv[37] = dv[36]*heatexch_spec2_pd[35];
	g[6] = dv[36]*heatexch_spec2_pd[34];
	dv[37] *= heatexch_spec2_pd[33];
	dv[38] = dv[37]*heatexch_spec2_pd[31];
	dv[37] *= heatexch_spec2_pd[32];
	g[28] += dv[38];
	g[27] = dv[38];
	g[28] += dv[37]*heatexch_spec2_pd[30];
	dv[37] *= x[28];
	g[27] += dv[37]*0.5;
	dv[39] = 1200.*heatexch_spec2_pd[29];
	g[5] = dv[39]*99.9853968566039;
	dv[40] = 1200.*heatexch_spec2_pd[28];
	dv[41] = dv[40]*heatexch_spec2_pd[27];
	g[4] = dv[40]*heatexch_spec2_pd[26];
	dv[41] *= heatexch_spec2_pd[25];
	dv[42] = dv[41]*heatexch_spec2_pd[23];
	dv[41] *= heatexch_spec2_pd[24];
	g[26] = dv[42];
	g[25] = dv[42];
	g[26] += dv[41]*heatexch_spec2_pd[22];
	dv[41] *= x[26];
	g[25] += dv[41]*0.5;
	dv[43] = 1200.*heatexch_spec2_pd[21];
	dv[44] = dv[43]*heatexch_spec2_pd[20];
	g[3] = dv[43]*heatexch_spec2_pd[19];
	dv[44] *= heatexch_spec2_pd[18];
	dv[45] = dv[44]*heatexch_spec2_pd[16];
	dv[44] *= heatexch_spec2_pd[17];
	g[25] += dv[45];
	g[24] = dv[45];
	g[25] += dv[44]*heatexch_spec2_pd[15];
	dv[44] *= x[25];
	g[24] += dv[44]*0.5;
	dv[46] = 1200.*heatexch_spec2_pd[14];
	g[2] = dv[46]*99.9853968566039;
	dv[47] = 1200.*heatexch_spec2_pd[13];
	dv[48] = dv[47]*heatexch_spec2_pd[12];
	g[1] = dv[47]*heatexch_spec2_pd[11];
	dv[48] *= heatexch_spec2_pd[10];
	dv[49] = dv[48]*heatexch_spec2_pd[8];
	dv[48] *= heatexch_spec2_pd[9];
	g[23] = dv[49];
	g[22] = dv[49];
	g[23] += dv[48]*heatexch_spec2_pd[7];
	dv[48] *= x[23];
	g[22] += dv[48]*0.5;
	dv[50] = 1200.*heatexch_spec2_pd[6];
	dv[51] = dv[50]*heatexch_spec2_pd[5];
	g[0] = dv[50]*heatexch_spec2_pd[4];
	dv[51] *= heatexch_spec2_pd[3];
	dv[52] = dv[51]*heatexch_spec2_pd[1];
	dv[51] *= heatexch_spec2_pd[2];
	g[22] += dv[52];
	g[21] = dv[52];
	g[22] += dv[51]*heatexch_spec2_pd[0];
	dv[51] *= x[22];
	g[21] += dv[51]*0.5;
	g[60] = 5500.;
	g[61] = 5500.;
	g[62] = 5500.;
	g[63] = 5500.;
	g[64] = 5500.;
	g[65] = 5500.;
	g[66] = 5500.;
	g[67] = 5500.;
	g[68] = 5500.;
	g[69] = 5500.;
	g[70] = 5500.;
	g[71] = 5500.;
	g[72] = 5500.;
	g[73] = 5500.;
	g[74] = 5500.;
	g[75] = 5500.;
	}

	return rv;
}

 void
heatexch_spec2_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (heatexch_spec2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = -x[0];
	t1 += 6.*x[42];
	t1 += -6.*x[43];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = -x[1];
	t1 += 6.*x[43];
	t1 += -6.*x[44];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[3];
	t1 += 4.*x[45];
	t1 += -4.*x[46];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[4];
	t1 += 4.*x[46];
	t1 += -4.*x[47];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[6];
	t1 += 6.*x[48];
	t1 += -6.*x[49];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[7];
	t1 += 6.*x[49];
	t1 += -6.*x[50];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[9];
	t1 += 20.*x[51];
	t1 += -20.*x[52];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[10];
	t1 += 20.*x[52];
	t1 += -20.*x[53];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[12];
	t1 += 12.*x[54];
	t1 += -12.*x[55];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[13];
	t1 += 12.*x[55];
	t1 += -12.*x[56];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[0];
	t1 += -x[3];
	t1 += -x[6];
	t1 += -x[9];
	t1 += -x[12];
	t1 += 18.*x[57];
	t1 += -18.*x[58];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[1];
	t1 += -x[4];
	t1 += -x[7];
	t1 += -x[10];
	t1 += -x[13];
	t1 += 18.*x[58];
	t1 += -18.*x[59];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[15];
	t1 += 6.*x[44];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[16];
	t1 += 4.*x[47];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[17];
	t1 += 6.*x[50];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[18];
	t1 += 20.*x[53];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[19];
	t1 += 12.*x[56];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[15];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[3];
	t1 += -x[4];
	t1 += -x[16];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[6];
	t1 += -x[7];
	t1 += -x[17];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[9];
	t1 += -x[10];
	t1 += -x[18];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[12];
	t1 += -x[13];
	t1 += -x[19];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[20];
	t1 += -18.*x[57];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[0];
	t1 += -x[1];
	t1 += -x[3];
	t1 += -x[4];
	t1 += -x[6];
	t1 += -x[7];
	t1 += -x[9];
	t1 += -x[10];
	t1 += -x[12];
	t1 += -x[13];
	t1 += -x[20];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[42];
	t1 += -x[43];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[43];
	t1 += -x[44];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[45];
	t1 += -x[46];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[46];
	t1 += -x[47];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[48];
	t1 += -x[49];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[49];
	t1 += -x[50];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[51];
	t1 += -x[52];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[52];
	t1 += -x[53];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[54];
	t1 += -x[55];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[55];
	t1 += -x[56];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[57];
	t1 += -x[58];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[58];
	t1 += -x[59];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[44];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[47];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[50];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[53];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[56];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[57];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = -x[42];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = -x[45];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = -x[48];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = -x[51];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[54];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[59];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[0];
	t1 += -1080.*x[60];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[1];
	t1 += -1080.*x[61];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[3];
	t1 += -400.*x[62];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[4];
	t1 += -400.*x[63];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[6];
	t1 += -600.*x[64];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[7];
	t1 += -600.*x[65];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[9];
	t1 += -400.*x[66];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[10];
	t1 += -400.*x[67];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[12];
	t1 += -720.*x[68];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[13];
	t1 += -720.*x[69];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[20];
	t1 += -6660.*x[75];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[15];
	t1 += -1080.*x[70];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[16];
	t1 += -400.*x[71];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[17];
	t1 += -600.*x[72];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[18];
	t1 += -400.*x[73];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[19];
	t1 += -720.*x[74];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[21];
	t1 += -x[42];
	t1 += x[57];
	t1 += 340.*x[60];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[22];
	t1 += -x[43];
	t1 += x[58];
	t1 += 340.*x[61];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[24];
	t1 += -x[45];
	t1 += x[57];
	t1 += 280.*x[62];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[25];
	t1 += -x[46];
	t1 += x[58];
	t1 += 280.*x[63];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[27];
	t1 += -x[48];
	t1 += x[57];
	t1 += 300.*x[64];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[28];
	t1 += -x[49];
	t1 += x[58];
	t1 += 300.*x[65];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[30];
	t1 += -x[51];
	t1 += x[57];
	t1 += 300.*x[66];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[31];
	t1 += -x[52];
	t1 += x[58];
	t1 += 300.*x[67];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[33];
	t1 += -x[54];
	t1 += x[57];
	t1 += 340.*x[68];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = x[34];
	t1 += -x[55];
	t1 += x[58];
	t1 += 340.*x[69];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[22];
	t1 += -x[43];
	t1 += x[58];
	t1 += 340.*x[60];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[23];
	t1 += -x[44];
	t1 += x[59];
	t1 += 340.*x[61];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = x[25];
	t1 += -x[46];
	t1 += x[58];
	t1 += 280.*x[62];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = x[26];
	t1 += -x[47];
	t1 += x[59];
	t1 += 280.*x[63];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[28];
	t1 += -x[49];
	t1 += x[58];
	t1 += 300.*x[64];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[29];
	t1 += -x[50];
	t1 += x[59];
	t1 += 300.*x[65];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = x[31];
	t1 += -x[52];
	t1 += x[58];
	t1 += 300.*x[66];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = x[32];
	t1 += -x[53];
	t1 += x[59];
	t1 += 300.*x[67];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[34];
	t1 += -x[55];
	t1 += x[58];
	t1 += 340.*x[68];
	c[82] = t1;

  /***  constraint 84  ***/

	t1 = x[35];
	t1 += -x[56];
	t1 += x[59];
	t1 += 340.*x[69];
	c[83] = t1;

  /***  constraint 85  ***/

	t1 = x[36];
	t1 += -x[44];
	c[84] = t1;

  /***  constraint 86  ***/

	t1 = x[37];
	t1 += -x[47];
	c[85] = t1;

  /***  constraint 87  ***/

	t1 = x[38];
	t1 += -x[50];
	c[86] = t1;

  /***  constraint 88  ***/

	t1 = x[39];
	t1 += -x[53];
	c[87] = t1;

  /***  constraint 89  ***/

	t1 = x[40];
	t1 += -x[56];
	c[88] = t1;

  /***  constraint 90  ***/

	t1 = x[41];
	t1 += x[57];
	c[89] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = -1.;
	J[94] = 6.;
	J[98] = -6.;

   /*** derivatives for constraint 2 ***/

	J[5] = -1.;
	J[99] = 6.;
	J[104] = -6.;

   /*** derivatives for constraint 3 ***/

	J[10] = -1.;
	J[110] = 4.;
	J[114] = -4.;

   /*** derivatives for constraint 4 ***/

	J[15] = -1.;
	J[115] = 4.;
	J[120] = -4.;

   /*** derivatives for constraint 5 ***/

	J[20] = -1.;
	J[126] = 6.;
	J[130] = -6.;

   /*** derivatives for constraint 6 ***/

	J[25] = -1.;
	J[131] = 6.;
	J[136] = -6.;

   /*** derivatives for constraint 7 ***/

	J[30] = -1.;
	J[142] = 20.;
	J[146] = -20.;

   /*** derivatives for constraint 8 ***/

	J[35] = -1.;
	J[147] = 20.;
	J[152] = -20.;

   /*** derivatives for constraint 9 ***/

	J[40] = -1.;
	J[158] = 12.;
	J[162] = -12.;

   /*** derivatives for constraint 10 ***/

	J[45] = -1.;
	J[163] = 12.;
	J[168] = -12.;

   /*** derivatives for constraint 11 ***/

	J[1] = -1.;
	J[11] = -1.;
	J[21] = -1.;
	J[31] = -1.;
	J[41] = -1.;
	J[174] = 18.;
	J[184] = -18.;

   /*** derivatives for constraint 12 ***/

	J[6] = -1.;
	J[16] = -1.;
	J[26] = -1.;
	J[36] = -1.;
	J[46] = -1.;
	J[185] = 18.;
	J[198] = -18.;

   /*** derivatives for constraint 13 ***/

	J[50] = -1.;
	J[105] = 6.;

   /*** derivatives for constraint 14 ***/

	J[53] = -1.;
	J[121] = 4.;

   /*** derivatives for constraint 15 ***/

	J[56] = -1.;
	J[137] = 6.;

   /*** derivatives for constraint 16 ***/

	J[59] = -1.;
	J[153] = 20.;

   /*** derivatives for constraint 17 ***/

	J[62] = -1.;
	J[169] = 12.;

   /*** derivatives for constraint 18 ***/

	J[2] = -1.;
	J[7] = -1.;
	J[51] = -1.;

   /*** derivatives for constraint 19 ***/

	J[12] = -1.;
	J[17] = -1.;
	J[54] = -1.;

   /*** derivatives for constraint 20 ***/

	J[22] = -1.;
	J[27] = -1.;
	J[57] = -1.;

   /*** derivatives for constraint 21 ***/

	J[32] = -1.;
	J[37] = -1.;
	J[60] = -1.;

   /*** derivatives for constraint 22 ***/

	J[42] = -1.;
	J[47] = -1.;
	J[63] = -1.;

   /*** derivatives for constraint 23 ***/

	J[65] = -1.;
	J[175] = -18.;

   /*** derivatives for constraint 24 ***/

	J[3] = -1.;
	J[8] = -1.;
	J[13] = -1.;
	J[18] = -1.;
	J[23] = -1.;
	J[28] = -1.;
	J[33] = -1.;
	J[38] = -1.;
	J[43] = -1.;
	J[48] = -1.;
	J[66] = -1.;

   /*** derivatives for constraint 25 ***/

	J[95] = 1.;
	J[100] = -1.;

   /*** derivatives for constraint 26 ***/

	J[101] = 1.;
	J[106] = -1.;

   /*** derivatives for constraint 27 ***/

	J[111] = 1.;
	J[116] = -1.;

   /*** derivatives for constraint 28 ***/

	J[117] = 1.;
	J[122] = -1.;

   /*** derivatives for constraint 29 ***/

	J[127] = 1.;
	J[132] = -1.;

   /*** derivatives for constraint 30 ***/

	J[133] = 1.;
	J[138] = -1.;

   /*** derivatives for constraint 31 ***/

	J[143] = 1.;
	J[148] = -1.;

   /*** derivatives for constraint 32 ***/

	J[149] = 1.;
	J[154] = -1.;

   /*** derivatives for constraint 33 ***/

	J[159] = 1.;
	J[164] = -1.;

   /*** derivatives for constraint 34 ***/

	J[165] = 1.;
	J[170] = -1.;

   /*** derivatives for constraint 35 ***/

	J[176] = 1.;
	J[186] = -1.;

   /*** derivatives for constraint 36 ***/

	J[187] = 1.;
	J[199] = -1.;

   /*** derivatives for constraint 37 ***/

	J[107] = 1.;

   /*** derivatives for constraint 38 ***/

	J[123] = 1.;

   /*** derivatives for constraint 39 ***/

	J[139] = 1.;

   /*** derivatives for constraint 40 ***/

	J[155] = 1.;

   /*** derivatives for constraint 41 ***/

	J[171] = 1.;

   /*** derivatives for constraint 42 ***/

	J[177] = -1.;

   /*** derivatives for constraint 43 ***/

	J[96] = -1.;

   /*** derivatives for constraint 44 ***/

	J[112] = -1.;

   /*** derivatives for constraint 45 ***/

	J[128] = -1.;

   /*** derivatives for constraint 46 ***/

	J[144] = -1.;

   /*** derivatives for constraint 47 ***/

	J[160] = -1.;

   /*** derivatives for constraint 48 ***/

	J[200] = -1.;

   /*** derivatives for constraint 49 ***/

	J[4] = 1.;
	J[206] = -1080.;

   /*** derivatives for constraint 50 ***/

	J[9] = 1.;
	J[209] = -1080.;

   /*** derivatives for constraint 51 ***/

	J[14] = 1.;
	J[212] = -400.;

   /*** derivatives for constraint 52 ***/

	J[19] = 1.;
	J[215] = -400.;

   /*** derivatives for constraint 53 ***/

	J[24] = 1.;
	J[218] = -600.;

   /*** derivatives for constraint 54 ***/

	J[29] = 1.;
	J[221] = -600.;

   /*** derivatives for constraint 55 ***/

	J[34] = 1.;
	J[224] = -400.;

   /*** derivatives for constraint 56 ***/

	J[39] = 1.;
	J[227] = -400.;

   /*** derivatives for constraint 57 ***/

	J[44] = 1.;
	J[230] = -720.;

   /*** derivatives for constraint 58 ***/

	J[49] = 1.;
	J[233] = -720.;

   /*** derivatives for constraint 59 ***/

	J[67] = 1.;
	J[241] = -6660.;

   /*** derivatives for constraint 60 ***/

	J[52] = 1.;
	J[236] = -1080.;

   /*** derivatives for constraint 61 ***/

	J[55] = 1.;
	J[237] = -400.;

   /*** derivatives for constraint 62 ***/

	J[58] = 1.;
	J[238] = -600.;

   /*** derivatives for constraint 63 ***/

	J[61] = 1.;
	J[239] = -400.;

   /*** derivatives for constraint 64 ***/

	J[64] = 1.;
	J[240] = -720.;

   /*** derivatives for constraint 65 ***/

	J[68] = 1.;
	J[97] = -1.;
	J[178] = 1.;
	J[207] = 340.;

   /*** derivatives for constraint 66 ***/

	J[69] = 1.;
	J[102] = -1.;
	J[188] = 1.;
	J[210] = 340.;

   /*** derivatives for constraint 67 ***/

	J[72] = 1.;
	J[113] = -1.;
	J[179] = 1.;
	J[213] = 280.;

   /*** derivatives for constraint 68 ***/

	J[73] = 1.;
	J[118] = -1.;
	J[189] = 1.;
	J[216] = 280.;

   /*** derivatives for constraint 69 ***/

	J[76] = 1.;
	J[129] = -1.;
	J[180] = 1.;
	J[219] = 300.;

   /*** derivatives for constraint 70 ***/

	J[77] = 1.;
	J[134] = -1.;
	J[190] = 1.;
	J[222] = 300.;

   /*** derivatives for constraint 71 ***/

	J[80] = 1.;
	J[145] = -1.;
	J[181] = 1.;
	J[225] = 300.;

   /*** derivatives for constraint 72 ***/

	J[81] = 1.;
	J[150] = -1.;
	J[191] = 1.;
	J[228] = 300.;

   /*** derivatives for constraint 73 ***/

	J[84] = 1.;
	J[161] = -1.;
	J[182] = 1.;
	J[231] = 340.;

   /*** derivatives for constraint 74 ***/

	J[85] = 1.;
	J[166] = -1.;
	J[192] = 1.;
	J[234] = 340.;

   /*** derivatives for constraint 75 ***/

	J[70] = 1.;
	J[103] = -1.;
	J[193] = 1.;
	J[208] = 340.;

   /*** derivatives for constraint 76 ***/

	J[71] = 1.;
	J[108] = -1.;
	J[201] = 1.;
	J[211] = 340.;

   /*** derivatives for constraint 77 ***/

	J[74] = 1.;
	J[119] = -1.;
	J[194] = 1.;
	J[214] = 280.;

   /*** derivatives for constraint 78 ***/

	J[75] = 1.;
	J[124] = -1.;
	J[202] = 1.;
	J[217] = 280.;

   /*** derivatives for constraint 79 ***/

	J[78] = 1.;
	J[135] = -1.;
	J[195] = 1.;
	J[220] = 300.;

   /*** derivatives for constraint 80 ***/

	J[79] = 1.;
	J[140] = -1.;
	J[203] = 1.;
	J[223] = 300.;

   /*** derivatives for constraint 81 ***/

	J[82] = 1.;
	J[151] = -1.;
	J[196] = 1.;
	J[226] = 300.;

   /*** derivatives for constraint 82 ***/

	J[83] = 1.;
	J[156] = -1.;
	J[204] = 1.;
	J[229] = 300.;

   /*** derivatives for constraint 83 ***/

	J[86] = 1.;
	J[167] = -1.;
	J[197] = 1.;
	J[232] = 340.;

   /*** derivatives for constraint 84 ***/

	J[87] = 1.;
	J[172] = -1.;
	J[205] = 1.;
	J[235] = 340.;

   /*** derivatives for constraint 85 ***/

	J[88] = 1.;
	J[109] = -1.;

   /*** derivatives for constraint 86 ***/

	J[89] = 1.;
	J[125] = -1.;

   /*** derivatives for constraint 87 ***/

	J[90] = 1.;
	J[141] = -1.;

   /*** derivatives for constraint 88 ***/

	J[91] = 1.;
	J[157] = -1.;

   /*** derivatives for constraint 89 ***/

	J[92] = 1.;
	J[173] = -1.;

   /*** derivatives for constraint 90 ***/

	J[93] = 1.;
	J[183] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
