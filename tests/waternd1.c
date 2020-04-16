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
 fint waternd1_auxcom_[1] = { 16 /* nlc */ };
 fint waternd1_funcom_[339] = {
	74 /* nvar */,
	1 /* nobj */,
	83 /* ncon */,
	258 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	7,
	13,
	19,
	25,
	31,
	37,
	43,
	49,
	55,
	61,
	67,
	73,
	79,
	85,
	91,
	97,
	101,
	105,
	110,
	115,
	120,
	123,
	126,
	129,
	132,
	135,
	137,
	139,
	142,
	146,
	150,
	154,
	158,
	162,
	166,
	170,
	174,
	177,
	180,
	183,
	186,
	188,
	190,
	194,
	198,
	202,
	206,
	208,
	210,
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

	/* rownos */
	1,
	4,
	19,
	22,
	51,
	53,
	1,
	2,
	18,
	23,
	52,
	54,
	9,
	10,
	22,
	28,
	55,
	59,
	11,
	12,
	22,
	29,
	56,
	60,
	9,
	10,
	23,
	28,
	57,
	61,
	11,
	12,
	23,
	29,
	58,
	62,
	13,
	14,
	22,
	42,
	63,
	65,
	13,
	14,
	23,
	42,
	64,
	66,
	1,
	2,
	18,
	36,
	43,
	47,
	3,
	4,
	19,
	36,
	44,
	48,
	1,
	2,
	18,
	37,
	45,
	49,
	3,
	4,
	19,
	37,
	46,
	50,
	11,
	12,
	29,
	36,
	71,
	73,
	9,
	10,
	28,
	37,
	72,
	74,
	13,
	14,
	36,
	42,
	67,
	69,
	13,
	14,
	37,
	42,
	68,
	70,
	5,
	6,
	20,
	22,
	7,
	8,
	21,
	23,
	9,
	10,
	15,
	28,
	30,
	11,
	12,
	16,
	29,
	31,
	13,
	14,
	15,
	16,
	42,
	3,
	5,
	24,
	4,
	6,
	25,
	1,
	7,
	26,
	2,
	8,
	27,
	9,
	15,
	32,
	10,
	33,
	11,
	34,
	12,
	16,
	35,
	1,
	3,
	32,
	38,
	2,
	4,
	33,
	39,
	1,
	3,
	34,
	40,
	2,
	4,
	35,
	41,
	9,
	11,
	13,
	24,
	10,
	12,
	14,
	25,
	9,
	11,
	13,
	26,
	10,
	12,
	14,
	27,
	11,
	13,
	38,
	12,
	14,
	39,
	9,
	13,
	40,
	10,
	14,
	41,
	13,
	15,
	14,
	16,
	17,
	18,
	75,
	77,
	17,
	19,
	76,
	78,
	17,
	28,
	79,
	81,
	17,
	29,
	80,
	82,
	30,
	36,
	31,
	37,
	17,
	1,
	5,
	2,
	6,
	3,
	7,
	4,
	8,
	75,
	83,
	76,
	83,
	79,
	83,
	80,
	83,
	51,
	83,
	52,
	83,
	55,
	83,
	56,
	83,
	57,
	83,
	58,
	83,
	63,
	83,
	64,
	83,
	67,
	83,
	68,
	83,
	71,
	83,
	72,
	83,
	43,
	83,
	44,
	83,
	45,
	83,
	46,
	83 };

 real waternd1_boundc_[1+148+166] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		40.,
		0.,
		40.,
		0.,
		40.,
		0.,
		40.,
		0.,
		50.,
		0.,
		50.,
		0.,
		40.,
		0.,
		50.,
		0.,
		40.,
		0.,
		50.,
		0.,
		40.,
		0.,
		50.,
		0.,
		90.,
		0.,
		90.,
		0.,
		90.,
		0.,
		90.,
		40.,
		40.,
		50.,
		50.,
		0.,
		90.,
		0.,
		90.,
		40.,
		90.,
		25.,
		25.,
		37.5,
		37.5,
		20.,
		70.,
		20.,
		70.,
		0.,
		70.,
		0.,
		70.,
		0.,
		70.,
		0.,
		70.,
		0.,
		3.5,
		0.,
		70.,
		0.,
		70.,
		0.,
		3.5,
		0.,
		25.,
		0.,
		37.5,
		0.,
		70.,
		0.,
		70.,
		0.,
		3.5,
		0.,
		70.,
		0.,
		70.,
		0.,
		3.5,
		0.,
		10.,
		0.,
		10.,
		0.,
		40.,
		0.,
		50.,
		0.,
		90.,
		0.,
		90.,
		0.,
		90.,
		0.,
		90.,
		40.,
		90.,
		0.,
		0.,
		0.,
		0.,
		0.,
		50.,
		0.,
		50.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
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
		-1000.,
		-1000.,
		-1500.,
		-1500.,
		-1000.,
		-1000.,
		-1000.,
		-1000.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		-2000.,
		-2000.,
		-2500.,
		-2500.,
		0.,
		0.,
		-40.,
		-40.,
		-50.,
		-50.,
		-40.,
		-40.,
		-50.,
		-50.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		-1.7e308,
		0.,
		-1.7e308,
		20.};

 real waternd1_x0comn_[74] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		40.,
		50.,
		0.,
		0.,
		40.,
		25.,
		37.5,
		20.,
		20.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		40.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real waternd1_pd[24];
static real waternd1_old_x[74];
static int waternd1_xkind = -1;

 static int
waternd1_xcheck(real *x)
{
	real *x1 = waternd1_old_x, *xe = x + 74;
	errno = 0;
	if (waternd1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	waternd1_xkind = 0;
	return 1;
	}
 real
waternd1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[22], rv;
	fint wantfg = *needfg;
	if (waternd1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[47] + 0.001;
	v[1] = pow(v[0], 0.7);
	if (errno) in_trouble2("pow",v[0],0.7);
	if (v[0] > 0.) {
	waternd1_pd[2] = 0.7*(v[1]/v[0]);
	} else if (0.7 > 1.) {
	waternd1_pd[2] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.7);
	}
	v[1] *= 1680.;
	v[0] = x[48] + 0.001;
	v[2] = pow(v[0], 0.7);
	if (errno) in_trouble2("pow",v[0],0.7);
	if (v[0] > 0.) {
	waternd1_pd[3] = 0.7*(v[2]/v[0]);
	} else if (0.7 > 1.) {
	waternd1_pd[3] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.7);
	}
	v[2] *= 1260.;
	v[1] += v[2];
	v[2] = x[43] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[4] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[4] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[44] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[5] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[5] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[45] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[6] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[6] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[46] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[7] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[7] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[0] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[8] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[8] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[1] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[9] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[9] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[2] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[10] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[10] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[3] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[11] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[11] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[4] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[12] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[12] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[5] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[13] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[13] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[6] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[14] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[14] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[7] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[15] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[15] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[8] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[16] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[16] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[9] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[17] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[17] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[10] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[18] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[18] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[11] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[19] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[19] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[14] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[20] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[20] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[15] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[21] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[21] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	v[2] = x[12] + 0.001;
	v[0] = pow(v[2], 0.6);
	if (errno) in_trouble2("pow",v[2],0.6);
	if (v[2] > 0.) {
	waternd1_pd[22] = 0.6*(v[0]/v[2]);
	} else if (0.6 > 1.) {
	waternd1_pd[22] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[2],0.6);
	}
	v[0] *= 10.;
	v[1] += v[0];
	v[0] = x[13] + 0.001;
	v[2] = pow(v[0], 0.6);
	if (errno) in_trouble2("pow",v[0],0.6);
	if (v[0] > 0.) {
	waternd1_pd[23] = 0.6*(v[2]/v[0]);
	} else if (0.6 > 1.) {
	waternd1_pd[23] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],0.6);
	}
	v[2] *= 10.;
	v[1] += v[2];
	rv = v[1] + 48.*x[0];
	rv += 48.*x[1];
	rv += 48.*x[2];
	rv += 48.*x[3];
	rv += 48.*x[4];
	rv += 48.*x[5];
	rv += 48.*x[6];
	rv += 48.*x[7];
	rv += 48.*x[8];
	rv += 48.*x[9];
	rv += 48.*x[10];
	rv += 48.*x[11];
	rv += 48.*x[12];
	rv += 48.*x[13];
	rv += 48.*x[14];
	rv += 48.*x[15];
	rv += 48.*x[43];
	rv += 48.*x[44];
	rv += 48.*x[45];
	rv += 48.*x[46];
	rv += 8000.*x[47];
	rv += 53.6*x[48];
	rv += 8000.*x[49];
	rv += 0.6*x[54];
	rv += 0.6*x[55];
	rv += 0.6*x[56];
	rv += 0.6*x[57];
	rv += 0.6*x[58];
	rv += 0.6*x[59];
	rv += 0.6*x[60];
	rv += 0.6*x[61];
	rv += 0.6*x[62];
	rv += 0.6*x[63];
	rv += 0.6*x[64];
	rv += 0.6*x[65];
	rv += 0.6*x[66];
	rv += 0.6*x[67];
	rv += 0.6*x[68];
	rv += 0.6*x[69];
	rv += 0.6*x[70];
	rv += 0.6*x[71];
	rv += 0.6*x[72];
	rv += 0.6*x[73];
	;}

	if (wantfg & 2) {
	dv[0] = 10.*waternd1_pd[23];
	g[13] = dv[0] + 48.;
	dv[1] = 10.*waternd1_pd[22];
	g[12] = dv[1] + 48.;
	dv[2] = 10.*waternd1_pd[21];
	g[15] = dv[2] + 48.;
	dv[3] = 10.*waternd1_pd[20];
	g[14] = dv[3] + 48.;
	dv[4] = 10.*waternd1_pd[19];
	g[11] = dv[4] + 48.;
	dv[5] = 10.*waternd1_pd[18];
	g[10] = dv[5] + 48.;
	dv[6] = 10.*waternd1_pd[17];
	g[9] = dv[6] + 48.;
	dv[7] = 10.*waternd1_pd[16];
	g[8] = dv[7] + 48.;
	dv[8] = 10.*waternd1_pd[15];
	g[7] = dv[8] + 48.;
	dv[9] = 10.*waternd1_pd[14];
	g[6] = dv[9] + 48.;
	dv[10] = 10.*waternd1_pd[13];
	g[5] = dv[10] + 48.;
	dv[11] = 10.*waternd1_pd[12];
	g[4] = dv[11] + 48.;
	dv[12] = 10.*waternd1_pd[11];
	g[3] = dv[12] + 48.;
	dv[13] = 10.*waternd1_pd[10];
	g[2] = dv[13] + 48.;
	dv[14] = 10.*waternd1_pd[9];
	g[1] = dv[14] + 48.;
	dv[15] = 10.*waternd1_pd[8];
	g[0] = dv[15] + 48.;
	dv[16] = 10.*waternd1_pd[7];
	g[46] = dv[16] + 48.;
	dv[17] = 10.*waternd1_pd[6];
	g[45] = dv[17] + 48.;
	dv[18] = 10.*waternd1_pd[5];
	g[44] = dv[18] + 48.;
	dv[19] = 10.*waternd1_pd[4];
	g[43] = dv[19] + 48.;
	dv[20] = 1260.*waternd1_pd[3];
	g[48] = dv[20] + 53.6;
	dv[21] = 1680.*waternd1_pd[2];
	g[47] = dv[21] + 8000.;
	g[49] = 8000.;
	g[54] = 0.6;
	g[55] = 0.6;
	g[56] = 0.6;
	g[57] = 0.6;
	g[58] = 0.6;
	g[59] = 0.6;
	g[60] = 0.6;
	g[61] = 0.6;
	g[62] = 0.6;
	g[63] = 0.6;
	g[64] = 0.6;
	g[65] = 0.6;
	g[66] = 0.6;
	g[67] = 0.6;
	g[68] = 0.6;
	g[69] = 0.6;
	g[70] = 0.6;
	g[71] = 0.6;
	g[72] = 0.6;
	g[73] = 0.6;
	}

	return rv;
}

 void
waternd1_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (waternd1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[1] * x[23];
	v[1] = x[8] * x[29];
	v[0] += v[1];
	v[1] = x[10] * x[31];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + 40.*x[50];
	c[0] = t1;

  /***  constraint 2  ***/

	v[0] = x[1] * x[24];
	v[1] = x[8] * x[30];
	v[0] += v[1];
	v[1] = x[10] * x[32];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + 40.*x[51];
	c[1] = t1;

  /***  constraint 3  ***/

	v[0] = x[0] * x[21];
	v[1] = x[9] * x[29];
	v[0] += v[1];
	v[1] = x[11] * x[31];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + 50.*x[52];
	c[2] = t1;

  /***  constraint 4  ***/

	v[0] = x[0] * x[22];
	v[1] = x[9] * x[30];
	v[0] += v[1];
	v[1] = x[11] * x[32];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + 50.*x[53];
	c[3] = t1;

  /***  constraint 5  ***/

	v[0] = x[16] * x[21];
	v[1] = -v[0];
	t1 = v[1] + 40.*x[50];
	c[4] = t1;

  /***  constraint 6  ***/

	v[0] = x[16] * x[22];
	v[1] = -v[0];
	t1 = v[1] + 40.*x[51];
	c[5] = t1;

  /***  constraint 7  ***/

	v[0] = x[17] * x[23];
	v[1] = -v[0];
	t1 = v[1] + 50.*x[52];
	c[6] = t1;

  /***  constraint 8  ***/

	v[0] = x[17] * x[24];
	v[1] = -v[0];
	t1 = v[1] + 50.*x[53];
	c[7] = t1;

  /***  constraint 9  ***/

	v[0] = x[18] * x[25];
	v[1] = -v[0];
	v[0] = x[13] * x[39];
	v[1] += v[0];
	v[0] = x[2] * x[33];
	v[1] += v[0];
	v[0] = x[4] * x[35];
	v[1] += v[0];
	v[0] = -v[1];
	c[8] = v[0];

  /***  constraint 10  ***/

	v[0] = x[18] * x[26];
	v[1] = -v[0];
	v[0] = x[13] * x[40];
	v[1] += v[0];
	v[0] = x[2] * x[34];
	v[1] += v[0];
	v[0] = x[4] * x[36];
	v[1] += v[0];
	v[0] = -v[1];
	c[9] = v[0];

  /***  constraint 11  ***/

	v[0] = x[19] * x[27];
	v[1] = -v[0];
	v[0] = x[12] * x[37];
	v[1] += v[0];
	v[0] = x[3] * x[33];
	v[1] += v[0];
	v[0] = x[5] * x[35];
	v[1] += v[0];
	v[0] = -v[1];
	c[10] = v[0];

  /***  constraint 12  ***/

	v[0] = x[19] * x[28];
	v[1] = -v[0];
	v[0] = x[12] * x[38];
	v[1] += v[0];
	v[0] = x[3] * x[34];
	v[1] += v[0];
	v[0] = x[5] * x[36];
	v[1] += v[0];
	v[0] = -v[1];
	c[11] = v[0];

  /***  constraint 13  ***/

	v[0] = x[20] * x[41];
	v[1] = -v[0];
	v[0] = x[6] * x[33];
	v[1] += v[0];
	v[0] = x[7] * x[35];
	v[1] += v[0];
	v[0] = x[14] * x[37];
	v[1] += v[0];
	v[0] = x[15] * x[39];
	v[1] += v[0];
	v[0] = -v[1];
	c[12] = v[0];

  /***  constraint 14  ***/

	v[0] = x[20] * x[42];
	v[1] = -v[0];
	v[0] = x[6] * x[34];
	v[1] += v[0];
	v[0] = x[7] * x[36];
	v[1] += v[0];
	v[0] = x[14] * x[38];
	v[1] += v[0];
	v[0] = x[15] * x[40];
	v[1] += v[0];
	v[0] = -v[1];
	c[13] = v[0];

  /***  constraint 15  ***/

	v[0] = x[20] * x[41];
	v[1] = -v[0];
	waternd1_pd[0] = 0.95 * x[18];
	v[0] = waternd1_pd[0] * x[25];
	v[2] = v[1] - v[0];
	c[14] = v[2];

  /***  constraint 16  ***/

	v[0] = x[20] * x[42];
	v[1] = -v[0];
	waternd1_pd[1] = 0.95 * x[19];
	v[0] = waternd1_pd[1] * x[28];
	v[2] = v[1] - v[0];
	c[15] = v[2];

  /***  constraint 17  ***/

	t1 = -x[43];
	t1 += -x[44];
	t1 += -x[45];
	t1 += -x[46];
	t1 += x[49];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[1];
	t1 += -x[8];
	t1 += -x[10];
	t1 += -x[43];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[0];
	t1 += -x[9];
	t1 += -x[11];
	t1 += -x[44];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[16];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[17];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[0];
	t1 += -x[2];
	t1 += -x[3];
	t1 += -x[6];
	t1 += x[16];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[1];
	t1 += -x[4];
	t1 += -x[5];
	t1 += -x[7];
	t1 += x[17];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[21];
	t1 += x[33];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[22];
	t1 += x[34];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[23];
	t1 += x[35];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[24];
	t1 += x[36];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[2];
	t1 += -x[4];
	t1 += -x[13];
	t1 += x[18];
	t1 += -x[45];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[3];
	t1 += -x[5];
	t1 += -x[12];
	t1 += x[19];
	t1 += -x[46];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[18];
	t1 += -x[47];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[19];
	t1 += -x[48];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = -0.0499999999999999*x[25];
	t1 += x[29];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = -x[26];
	t1 += x[30];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = -x[27];
	t1 += x[31];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = -0.0499999999999999*x[28];
	t1 += x[32];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = -x[8];
	t1 += -x[9];
	t1 += -x[12];
	t1 += -x[14];
	t1 += x[47];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = -x[10];
	t1 += -x[11];
	t1 += -x[13];
	t1 += -x[15];
	t1 += x[48];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = -x[29];
	t1 += x[37];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = -x[30];
	t1 += x[38];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = -x[31];
	t1 += x[39];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = -x[32];
	t1 += x[40];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = -x[6];
	t1 += -x[7];
	t1 += -x[14];
	t1 += -x[15];
	t1 += x[20];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[8];
	t1 += -40.*x[70];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[9];
	t1 += -50.*x[71];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[10];
	t1 += -40.*x[72];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[11];
	t1 += -50.*x[73];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = -x[8];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = -x[9];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = -x[10];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = -x[11];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[0];
	t1 += -40.*x[58];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[1];
	t1 += -40.*x[59];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = -x[0];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = -x[1];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[2];
	t1 += -40.*x[60];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[3];
	t1 += -40.*x[61];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[4];
	t1 += -50.*x[62];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[5];
	t1 += -50.*x[63];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = -x[2];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = -x[3];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = -x[4];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = -x[5];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[6];
	t1 += -40.*x[64];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[7];
	t1 += -50.*x[65];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = -x[6];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = -x[7];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[14];
	t1 += -90.*x[66];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[15];
	t1 += -90.*x[67];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = -x[14];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = -x[15];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[12];
	t1 += -90.*x[68];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[13];
	t1 += -90.*x[69];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = -x[12];
	c[72] = t1;

  /***  constraint 74  ***/

	t1 = -x[13];
	c[73] = t1;

  /***  constraint 75  ***/

	t1 = x[43];
	t1 += -40.*x[54];
	c[74] = t1;

  /***  constraint 76  ***/

	t1 = x[44];
	t1 += -50.*x[55];
	c[75] = t1;

  /***  constraint 77  ***/

	t1 = -x[43];
	c[76] = t1;

  /***  constraint 78  ***/

	t1 = -x[44];
	c[77] = t1;

  /***  constraint 79  ***/

	t1 = x[45];
	t1 += -90.*x[56];
	c[78] = t1;

  /***  constraint 80  ***/

	t1 = x[46];
	t1 += -90.*x[57];
	c[79] = t1;

  /***  constraint 81  ***/

	t1 = -x[45];
	c[80] = t1;

  /***  constraint 82  ***/

	t1 = -x[46];
	c[81] = t1;

  /***  constraint 83  ***/

	t1 = x[54];
	t1 += x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	t1 += x[59];
	t1 += x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	t1 += x[69];
	t1 += x[70];
	t1 += x[71];
	t1 += x[72];
	t1 += x[73];
	c[82] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[149] = -x[10];
	J[60] = -x[31];
	J[141] = -x[8];
	J[48] = -x[29];
	J[125] = -x[1];
	J[6] = -x[23];
	J[210] = 40.;

   /*** derivatives for constraint 2 ***/

	J[153] = -x[10];
	J[61] = -x[32];
	J[145] = -x[8];
	J[49] = -x[30];
	J[128] = -x[1];
	J[7] = -x[24];
	J[212] = 40.;

   /*** derivatives for constraint 3 ***/

	J[150] = -x[11];
	J[66] = -x[31];
	J[142] = -x[9];
	J[54] = -x[29];
	J[119] = -x[0];
	J[0] = -x[21];
	J[214] = 50.;

   /*** derivatives for constraint 4 ***/

	J[154] = -x[11];
	J[67] = -x[32];
	J[146] = -x[9];
	J[55] = -x[30];
	J[122] = -x[0];
	J[1] = -x[22];
	J[216] = 50.;

   /*** derivatives for constraint 5 ***/

	J[120] = -x[16];
	J[96] = -x[21];
	J[211] = 40.;

   /*** derivatives for constraint 6 ***/

	J[123] = -x[16];
	J[97] = -x[22];
	J[213] = 40.;

   /*** derivatives for constraint 7 ***/

	J[126] = -x[17];
	J[100] = -x[23];
	J[215] = 50.;

   /*** derivatives for constraint 8 ***/

	J[129] = -x[17];
	J[101] = -x[24];
	J[217] = 50.;

   /*** derivatives for constraint 9 ***/

	J[165] = -x[4];
	J[24] = -x[35];
	J[157] = -x[2];
	J[12] = -x[33];
	J[179] = -x[13];
	J[78] = -x[39];
	J[131] = x[18];
	J[104] = x[25];

   /*** derivatives for constraint 10 ***/

	J[169] = -x[4];
	J[25] = -x[36];
	J[161] = -x[2];
	J[13] = -x[34];
	J[182] = -x[13];
	J[79] = -x[40];
	J[134] = x[18];
	J[105] = x[26];

   /*** derivatives for constraint 11 ***/

	J[166] = -x[5];
	J[30] = -x[35];
	J[158] = -x[3];
	J[18] = -x[33];
	J[173] = -x[12];
	J[72] = -x[37];
	J[136] = x[19];
	J[109] = x[27];

   /*** derivatives for constraint 12 ***/

	J[170] = -x[5];
	J[31] = -x[36];
	J[162] = -x[3];
	J[19] = -x[34];
	J[176] = -x[12];
	J[73] = -x[38];
	J[138] = x[19];
	J[110] = x[28];

   /*** derivatives for constraint 13 ***/

	J[180] = -x[15];
	J[90] = -x[39];
	J[174] = -x[14];
	J[84] = -x[37];
	J[167] = -x[7];
	J[42] = -x[35];
	J[159] = -x[6];
	J[36] = -x[33];
	J[185] = x[20];
	J[114] = x[41];

   /*** derivatives for constraint 14 ***/

	J[183] = -x[15];
	J[91] = -x[40];
	J[177] = -x[14];
	J[85] = -x[38];
	J[171] = -x[7];
	J[43] = -x[36];
	J[163] = -x[6];
	J[37] = -x[34];
	J[187] = x[20];
	J[115] = x[42];

   /*** derivatives for constraint 15 ***/

	J[132] = -waternd1_pd[0];
	J[106] = -x[25]*0.95;
	J[186] = -x[20];
	J[116] = -x[41];

   /*** derivatives for constraint 16 ***/

	J[139] = -waternd1_pd[1];
	J[111] = -x[28]*0.95;
	J[188] = -x[20];
	J[117] = -x[42];

   /*** derivatives for constraint 17 ***/

	J[189] = -1.;
	J[193] = -1.;
	J[197] = -1.;
	J[201] = -1.;
	J[209] = 1.;

   /*** derivatives for constraint 18 ***/

	J[8] = -1.;
	J[50] = -1.;
	J[62] = -1.;
	J[190] = -1.;

   /*** derivatives for constraint 19 ***/

	J[2] = -1.;
	J[56] = -1.;
	J[68] = -1.;
	J[194] = -1.;

   /*** derivatives for constraint 20 ***/

	J[98] = -1.;

   /*** derivatives for constraint 21 ***/

	J[102] = -1.;

   /*** derivatives for constraint 22 ***/

	J[3] = -1.;
	J[14] = -1.;
	J[20] = -1.;
	J[38] = -1.;
	J[99] = 1.;

   /*** derivatives for constraint 23 ***/

	J[9] = -1.;
	J[26] = -1.;
	J[32] = -1.;
	J[44] = -1.;
	J[103] = 1.;

   /*** derivatives for constraint 24 ***/

	J[121] = -1.;
	J[160] = 1.;

   /*** derivatives for constraint 25 ***/

	J[124] = -1.;
	J[164] = 1.;

   /*** derivatives for constraint 26 ***/

	J[127] = -1.;
	J[168] = 1.;

   /*** derivatives for constraint 27 ***/

	J[130] = -1.;
	J[172] = 1.;

   /*** derivatives for constraint 28 ***/

	J[15] = -1.;
	J[27] = -1.;
	J[80] = -1.;
	J[107] = 1.;
	J[198] = -1.;

   /*** derivatives for constraint 29 ***/

	J[21] = -1.;
	J[33] = -1.;
	J[74] = -1.;
	J[112] = 1.;
	J[202] = -1.;

   /*** derivatives for constraint 30 ***/

	J[108] = 1.;
	J[205] = -1.;

   /*** derivatives for constraint 31 ***/

	J[113] = 1.;
	J[207] = -1.;

   /*** derivatives for constraint 32 ***/

	J[133] = -0.0499999999999999;
	J[143] = 1.;

   /*** derivatives for constraint 33 ***/

	J[135] = -1.;
	J[147] = 1.;

   /*** derivatives for constraint 34 ***/

	J[137] = -1.;
	J[151] = 1.;

   /*** derivatives for constraint 35 ***/

	J[140] = -0.0499999999999999;
	J[155] = 1.;

   /*** derivatives for constraint 36 ***/

	J[51] = -1.;
	J[57] = -1.;
	J[75] = -1.;
	J[86] = -1.;
	J[206] = 1.;

   /*** derivatives for constraint 37 ***/

	J[63] = -1.;
	J[69] = -1.;
	J[81] = -1.;
	J[92] = -1.;
	J[208] = 1.;

   /*** derivatives for constraint 38 ***/

	J[144] = -1.;
	J[175] = 1.;

   /*** derivatives for constraint 39 ***/

	J[148] = -1.;
	J[178] = 1.;

   /*** derivatives for constraint 40 ***/

	J[152] = -1.;
	J[181] = 1.;

   /*** derivatives for constraint 41 ***/

	J[156] = -1.;
	J[184] = 1.;

   /*** derivatives for constraint 42 ***/

	J[39] = -1.;
	J[45] = -1.;
	J[87] = -1.;
	J[93] = -1.;
	J[118] = 1.;

   /*** derivatives for constraint 43 ***/

	J[52] = 1.;
	J[250] = -40.;

   /*** derivatives for constraint 44 ***/

	J[58] = 1.;
	J[252] = -50.;

   /*** derivatives for constraint 45 ***/

	J[64] = 1.;
	J[254] = -40.;

   /*** derivatives for constraint 46 ***/

	J[70] = 1.;
	J[256] = -50.;

   /*** derivatives for constraint 47 ***/

	J[53] = -1.;

   /*** derivatives for constraint 48 ***/

	J[59] = -1.;

   /*** derivatives for constraint 49 ***/

	J[65] = -1.;

   /*** derivatives for constraint 50 ***/

	J[71] = -1.;

   /*** derivatives for constraint 51 ***/

	J[4] = 1.;
	J[226] = -40.;

   /*** derivatives for constraint 52 ***/

	J[10] = 1.;
	J[228] = -40.;

   /*** derivatives for constraint 53 ***/

	J[5] = -1.;

   /*** derivatives for constraint 54 ***/

	J[11] = -1.;

   /*** derivatives for constraint 55 ***/

	J[16] = 1.;
	J[230] = -40.;

   /*** derivatives for constraint 56 ***/

	J[22] = 1.;
	J[232] = -40.;

   /*** derivatives for constraint 57 ***/

	J[28] = 1.;
	J[234] = -50.;

   /*** derivatives for constraint 58 ***/

	J[34] = 1.;
	J[236] = -50.;

   /*** derivatives for constraint 59 ***/

	J[17] = -1.;

   /*** derivatives for constraint 60 ***/

	J[23] = -1.;

   /*** derivatives for constraint 61 ***/

	J[29] = -1.;

   /*** derivatives for constraint 62 ***/

	J[35] = -1.;

   /*** derivatives for constraint 63 ***/

	J[40] = 1.;
	J[238] = -40.;

   /*** derivatives for constraint 64 ***/

	J[46] = 1.;
	J[240] = -50.;

   /*** derivatives for constraint 65 ***/

	J[41] = -1.;

   /*** derivatives for constraint 66 ***/

	J[47] = -1.;

   /*** derivatives for constraint 67 ***/

	J[88] = 1.;
	J[242] = -90.;

   /*** derivatives for constraint 68 ***/

	J[94] = 1.;
	J[244] = -90.;

   /*** derivatives for constraint 69 ***/

	J[89] = -1.;

   /*** derivatives for constraint 70 ***/

	J[95] = -1.;

   /*** derivatives for constraint 71 ***/

	J[76] = 1.;
	J[246] = -90.;

   /*** derivatives for constraint 72 ***/

	J[82] = 1.;
	J[248] = -90.;

   /*** derivatives for constraint 73 ***/

	J[77] = -1.;

   /*** derivatives for constraint 74 ***/

	J[83] = -1.;

   /*** derivatives for constraint 75 ***/

	J[191] = 1.;
	J[218] = -40.;

   /*** derivatives for constraint 76 ***/

	J[195] = 1.;
	J[220] = -50.;

   /*** derivatives for constraint 77 ***/

	J[192] = -1.;

   /*** derivatives for constraint 78 ***/

	J[196] = -1.;

   /*** derivatives for constraint 79 ***/

	J[199] = 1.;
	J[222] = -90.;

   /*** derivatives for constraint 80 ***/

	J[203] = 1.;
	J[224] = -90.;

   /*** derivatives for constraint 81 ***/

	J[200] = -1.;

   /*** derivatives for constraint 82 ***/

	J[204] = -1.;

   /*** derivatives for constraint 83 ***/

	J[219] = 1.;
	J[221] = 1.;
	J[223] = 1.;
	J[225] = 1.;
	J[227] = 1.;
	J[229] = 1.;
	J[231] = 1.;
	J[233] = 1.;
	J[235] = 1.;
	J[237] = 1.;
	J[239] = 1.;
	J[241] = 1.;
	J[243] = 1.;
	J[245] = 1.;
	J[247] = 1.;
	J[249] = 1.;
	J[251] = 1.;
	J[253] = 1.;
	J[255] = 1.;
	J[257] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
