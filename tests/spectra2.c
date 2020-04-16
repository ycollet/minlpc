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
 fint spectra2_auxcom_[1] = { 8 /* nlc */ };
 fint spectra2_funcom_[475] = {
	69 /* nvar */,
	1 /* nobj */,
	72 /* ncon */,
	399 /* nzc */,
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
	71,
	81,
	91,
	101,
	111,
	121,
	131,
	141,
	151,
	161,
	171,
	181,
	191,
	201,
	211,
	221,
	231,
	241,
	251,
	261,
	271,
	281,
	291,
	301,
	302,
	303,
	304,
	305,
	306,
	307,
	308,
	309,
	310,
	313,
	316,
	319,
	322,
	325,
	328,
	331,
	334,
	337,
	340,
	343,
	346,
	349,
	352,
	355,
	358,
	361,
	364,
	367,
	370,
	373,
	376,
	379,
	382,
	385,
	388,
	391,
	394,
	397,
	400,

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
	39,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	10,
	40,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	11,
	41,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	12,
	42,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	13,
	43,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	14,
	44,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	15,
	45,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	16,
	46,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	17,
	47,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	18,
	48,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	19,
	49,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	20,
	50,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	21,
	51,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	22,
	52,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	23,
	53,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	24,
	54,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	25,
	55,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	26,
	56,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	27,
	57,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	28,
	58,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	29,
	59,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	30,
	60,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	31,
	61,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	32,
	62,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	33,
	63,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	34,
	64,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	35,
	65,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	36,
	66,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	37,
	67,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	38,
	68,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	72,
	39,
	69,
	72,
	40,
	69,
	72,
	41,
	69,
	72,
	42,
	69,
	72,
	43,
	69,
	72,
	44,
	69,
	72,
	45,
	69,
	72,
	46,
	69,
	72,
	47,
	69,
	72,
	48,
	69,
	72,
	49,
	70,
	72,
	50,
	70,
	72,
	51,
	70,
	72,
	52,
	70,
	72,
	53,
	70,
	72,
	54,
	70,
	72,
	55,
	70,
	72,
	56,
	70,
	72,
	57,
	70,
	72,
	58,
	70,
	72,
	59,
	71,
	72,
	60,
	71,
	72,
	61,
	71,
	72,
	62,
	71,
	72,
	63,
	71,
	72,
	64,
	71,
	72,
	65,
	71,
	72,
	66,
	71,
	72,
	67,
	71,
	72,
	68,
	71,
	72 };

 real spectra2_boundc_[1+138+144] /* Infinity, variable bounds, constraint bounds */ = {
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
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
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
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		1.7e308,
		0.,
		0.};

 real spectra2_x0comn_[69] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real spectra2_pd[56];
static real spectra2_old_x[69];
static int spectra2_xkind = -1;

 static int
spectra2_xcheck(real *x)
{
	real *x1 = spectra2_old_x, *xe = x + 69;
	errno = 0;
	if (spectra2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	spectra2_xkind = 0;
	return 1;
	}
 real
spectra2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (spectra2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[30];
	rv += x[31];
	rv += x[32];
	rv += x[33];
	rv += x[34];
	rv += x[35];
	rv += x[36];
	rv += x[37];
	rv += 2.*x[38];
	;}

	if (wantfg & 2) {
	g[30] = 1.;
	g[31] = 1.;
	g[32] = 1.;
	g[33] = 1.;
	g[34] = 1.;
	g[35] = 1.;
	g[36] = 1.;
	g[37] = 1.;
	g[38] = 2.;
	}

	return rv;
}

 void
spectra2_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[4], dv[54];
	real t1;
	fint wantfg = *needfg;
	if (spectra2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	spectra2_pd[0] = -0.0003 * x[0];
	spectra2_pd[0] += 5.02;
	v[0] = -0.0007 * x[1];
	spectra2_pd[0] += v[0];
	v[0] = -0.0066 * x[2];
	spectra2_pd[0] += v[0];
	v[0] = -0.0044 * x[3];
	spectra2_pd[0] += v[0];
	v[0] = -0.0208 * x[4];
	spectra2_pd[0] += v[0];
	v[0] = -0.0518 * x[5];
	spectra2_pd[0] += v[0];
	v[0] = -0.0036 * x[6];
	spectra2_pd[0] += v[0];
	v[0] = -0.0507 * x[7];
	spectra2_pd[0] += v[0];
	v[0] = -0.0905 * x[8];
	spectra2_pd[0] += v[0];
	v[0] = -0.0016 * x[9];
	spectra2_pd[0] += v[0];
	spectra2_pd[1] = -0.0003 * x[0];
	spectra2_pd[1] += 5.02;
	v[0] = -0.0007 * x[1];
	spectra2_pd[1] += v[0];
	v[0] = -0.0066 * x[2];
	spectra2_pd[1] += v[0];
	v[0] = -0.0044 * x[3];
	spectra2_pd[1] += v[0];
	v[0] = -0.0208 * x[4];
	spectra2_pd[1] += v[0];
	v[0] = -0.0518 * x[5];
	spectra2_pd[1] += v[0];
	v[0] = -0.0036 * x[6];
	spectra2_pd[1] += v[0];
	v[0] = -0.0507 * x[7];
	spectra2_pd[1] += v[0];
	v[0] = -0.0905 * x[8];
	spectra2_pd[1] += v[0];
	v[0] = -0.0016 * x[9];
	spectra2_pd[1] += v[0];
	v[0] = spectra2_pd[0] * spectra2_pd[1];
	spectra2_pd[2] = -0.0003 * x[10];
	spectra2_pd[2] += 0.97;
	v[1] = -0.0007 * x[11];
	spectra2_pd[2] += v[1];
	v[1] = -0.0066 * x[12];
	spectra2_pd[2] += v[1];
	v[1] = -0.0044 * x[13];
	spectra2_pd[2] += v[1];
	v[1] = -0.0208 * x[14];
	spectra2_pd[2] += v[1];
	v[1] = -0.0518 * x[15];
	spectra2_pd[2] += v[1];
	v[1] = -0.0036 * x[16];
	spectra2_pd[2] += v[1];
	v[1] = -0.0507 * x[17];
	spectra2_pd[2] += v[1];
	v[1] = -0.0905 * x[18];
	spectra2_pd[2] += v[1];
	v[1] = -0.0016 * x[19];
	spectra2_pd[2] += v[1];
	spectra2_pd[3] = -0.0003 * x[10];
	spectra2_pd[3] += 0.97;
	v[1] = -0.0007 * x[11];
	spectra2_pd[3] += v[1];
	v[1] = -0.0066 * x[12];
	spectra2_pd[3] += v[1];
	v[1] = -0.0044 * x[13];
	spectra2_pd[3] += v[1];
	v[1] = -0.0208 * x[14];
	spectra2_pd[3] += v[1];
	v[1] = -0.0518 * x[15];
	spectra2_pd[3] += v[1];
	v[1] = -0.0036 * x[16];
	spectra2_pd[3] += v[1];
	v[1] = -0.0507 * x[17];
	spectra2_pd[3] += v[1];
	v[1] = -0.0905 * x[18];
	spectra2_pd[3] += v[1];
	v[1] = -0.0016 * x[19];
	spectra2_pd[3] += v[1];
	v[1] = spectra2_pd[2] * spectra2_pd[3];
	v[0] += v[1];
	spectra2_pd[4] = -0.0003 * x[20];
	v[1] = -0.0007 * x[21];
	spectra2_pd[7] = spectra2_pd[4] + v[1];
	v[2] = -0.0066 * x[22];
	spectra2_pd[7] += v[2];
	v[2] = -0.0044 * x[23];
	spectra2_pd[7] += v[2];
	v[2] = -0.0208 * x[24];
	spectra2_pd[7] += v[2];
	v[2] = -0.0518 * x[25];
	spectra2_pd[7] += v[2];
	v[2] = -0.0036 * x[26];
	spectra2_pd[7] += v[2];
	v[2] = -0.0507 * x[27];
	spectra2_pd[7] += v[2];
	v[2] = -0.0905 * x[28];
	spectra2_pd[7] += v[2];
	v[2] = -0.0016 * x[29];
	spectra2_pd[7] += v[2];
	spectra2_pd[5] = -0.0003 * x[20];
	v[2] = -0.0007 * x[21];
	spectra2_pd[6] = spectra2_pd[5] + v[2];
	v[3] = -0.0066 * x[22];
	spectra2_pd[6] += v[3];
	v[3] = -0.0044 * x[23];
	spectra2_pd[6] += v[3];
	v[3] = -0.0208 * x[24];
	spectra2_pd[6] += v[3];
	v[3] = -0.0518 * x[25];
	spectra2_pd[6] += v[3];
	v[3] = -0.0036 * x[26];
	spectra2_pd[6] += v[3];
	v[3] = -0.0507 * x[27];
	spectra2_pd[6] += v[3];
	v[3] = -0.0905 * x[28];
	spectra2_pd[6] += v[3];
	v[3] = -0.0016 * x[29];
	spectra2_pd[6] += v[3];
	v[3] = spectra2_pd[7] * spectra2_pd[6];
	v[0] += v[3];
	v[3] = -v[0];
	t1 = v[3] + x[30];
	c[0] = t1;

  /***  constraint 2  ***/

	spectra2_pd[8] = -0.0764 * x[0];
	spectra2_pd[8] += 2.04;
	v[0] = -0.0003 * x[1];
	spectra2_pd[8] += v[0];
	v[0] = -0.0789 * x[2];
	spectra2_pd[8] += v[0];
	v[0] = -0.0186 * x[3];
	spectra2_pd[8] += v[0];
	v[0] = -0.0605 * x[4];
	spectra2_pd[8] += v[0];
	v[0] = -0.1656 * x[5];
	spectra2_pd[8] += v[0];
	v[0] = -0.0035 * x[6];
	spectra2_pd[8] += v[0];
	v[0] = -0.0361 * x[7];
	spectra2_pd[8] += v[0];
	v[0] = -0.06 * x[8];
	spectra2_pd[8] += v[0];
	v[0] = -0.0209 * x[9];
	spectra2_pd[8] += v[0];
	spectra2_pd[9] = -0.0764 * x[0];
	spectra2_pd[9] += 2.04;
	v[0] = -0.0003 * x[1];
	spectra2_pd[9] += v[0];
	v[0] = -0.0789 * x[2];
	spectra2_pd[9] += v[0];
	v[0] = -0.0186 * x[3];
	spectra2_pd[9] += v[0];
	v[0] = -0.0605 * x[4];
	spectra2_pd[9] += v[0];
	v[0] = -0.1656 * x[5];
	spectra2_pd[9] += v[0];
	v[0] = -0.0035 * x[6];
	spectra2_pd[9] += v[0];
	v[0] = -0.0361 * x[7];
	spectra2_pd[9] += v[0];
	v[0] = -0.06 * x[8];
	spectra2_pd[9] += v[0];
	v[0] = -0.0209 * x[9];
	spectra2_pd[9] += v[0];
	v[0] = spectra2_pd[8] * spectra2_pd[9];
	spectra2_pd[10] = -0.0764 * x[10];
	spectra2_pd[10] += 3.51;
	v[1] = -0.0003 * x[11];
	spectra2_pd[10] += v[1];
	v[1] = -0.0789 * x[12];
	spectra2_pd[10] += v[1];
	v[1] = -0.0186 * x[13];
	spectra2_pd[10] += v[1];
	v[1] = -0.0605 * x[14];
	spectra2_pd[10] += v[1];
	v[1] = -0.1656 * x[15];
	spectra2_pd[10] += v[1];
	v[1] = -0.0035 * x[16];
	spectra2_pd[10] += v[1];
	v[1] = -0.0361 * x[17];
	spectra2_pd[10] += v[1];
	v[1] = -0.06 * x[18];
	spectra2_pd[10] += v[1];
	v[1] = -0.0209 * x[19];
	spectra2_pd[10] += v[1];
	spectra2_pd[11] = -0.0764 * x[10];
	spectra2_pd[11] += 3.51;
	v[1] = -0.0003 * x[11];
	spectra2_pd[11] += v[1];
	v[1] = -0.0789 * x[12];
	spectra2_pd[11] += v[1];
	v[1] = -0.0186 * x[13];
	spectra2_pd[11] += v[1];
	v[1] = -0.0605 * x[14];
	spectra2_pd[11] += v[1];
	v[1] = -0.1656 * x[15];
	spectra2_pd[11] += v[1];
	v[1] = -0.0035 * x[16];
	spectra2_pd[11] += v[1];
	v[1] = -0.0361 * x[17];
	spectra2_pd[11] += v[1];
	v[1] = -0.06 * x[18];
	spectra2_pd[11] += v[1];
	v[1] = -0.0209 * x[19];
	spectra2_pd[11] += v[1];
	v[1] = spectra2_pd[10] * spectra2_pd[11];
	v[0] += v[1];
	spectra2_pd[12] = -0.0764 * x[20];
	spectra2_pd[12] += 2.2;
	v[1] = -0.0003 * x[21];
	spectra2_pd[12] += v[1];
	v[1] = -0.0789 * x[22];
	spectra2_pd[12] += v[1];
	v[1] = -0.0186 * x[23];
	spectra2_pd[12] += v[1];
	v[1] = -0.0605 * x[24];
	spectra2_pd[12] += v[1];
	v[1] = -0.1656 * x[25];
	spectra2_pd[12] += v[1];
	v[1] = -0.0035 * x[26];
	spectra2_pd[12] += v[1];
	v[1] = -0.0361 * x[27];
	spectra2_pd[12] += v[1];
	v[1] = -0.06 * x[28];
	spectra2_pd[12] += v[1];
	v[1] = -0.0209 * x[29];
	spectra2_pd[12] += v[1];
	spectra2_pd[13] = -0.0764 * x[20];
	spectra2_pd[13] += 2.2;
	v[1] = -0.0003 * x[21];
	spectra2_pd[13] += v[1];
	v[1] = -0.0789 * x[22];
	spectra2_pd[13] += v[1];
	v[1] = -0.0186 * x[23];
	spectra2_pd[13] += v[1];
	v[1] = -0.0605 * x[24];
	spectra2_pd[13] += v[1];
	v[1] = -0.1656 * x[25];
	spectra2_pd[13] += v[1];
	v[1] = -0.0035 * x[26];
	spectra2_pd[13] += v[1];
	v[1] = -0.0361 * x[27];
	spectra2_pd[13] += v[1];
	v[1] = -0.06 * x[28];
	spectra2_pd[13] += v[1];
	v[1] = -0.0209 * x[29];
	spectra2_pd[13] += v[1];
	v[1] = spectra2_pd[12] * spectra2_pd[13];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[31];
	c[1] = t1;

  /***  constraint 3  ***/

	spectra2_pd[14] = -0.0318 * x[0];
	spectra2_pd[14] += 3.53;
	v[0] = -0.0004 * x[1];
	spectra2_pd[14] += v[0];
	v[0] = -0.0275 * x[2];
	spectra2_pd[14] += v[0];
	v[0] = -0.018 * x[3];
	spectra2_pd[14] += v[0];
	v[0] = -0.0601 * x[4];
	spectra2_pd[14] += v[0];
	v[0] = -0.1491 * x[5];
	spectra2_pd[14] += v[0];
	v[0] = -0.0032 * x[6];
	spectra2_pd[14] += v[0];
	v[0] = -0.0433 * x[7];
	spectra2_pd[14] += v[0];
	v[0] = -0.0754 * x[8];
	spectra2_pd[14] += v[0];
	v[0] = -0.0063 * x[9];
	spectra2_pd[14] += v[0];
	spectra2_pd[15] = -0.0318 * x[0];
	spectra2_pd[15] += 3.53;
	v[0] = -0.0004 * x[1];
	spectra2_pd[15] += v[0];
	v[0] = -0.0275 * x[2];
	spectra2_pd[15] += v[0];
	v[0] = -0.018 * x[3];
	spectra2_pd[15] += v[0];
	v[0] = -0.0601 * x[4];
	spectra2_pd[15] += v[0];
	v[0] = -0.1491 * x[5];
	spectra2_pd[15] += v[0];
	v[0] = -0.0032 * x[6];
	spectra2_pd[15] += v[0];
	v[0] = -0.0433 * x[7];
	spectra2_pd[15] += v[0];
	v[0] = -0.0754 * x[8];
	spectra2_pd[15] += v[0];
	v[0] = -0.0063 * x[9];
	spectra2_pd[15] += v[0];
	v[0] = spectra2_pd[14] * spectra2_pd[15];
	spectra2_pd[16] = -0.0318 * x[10];
	spectra2_pd[16] += 3.51;
	v[1] = -0.0004 * x[11];
	spectra2_pd[16] += v[1];
	v[1] = -0.0275 * x[12];
	spectra2_pd[16] += v[1];
	v[1] = -0.018 * x[13];
	spectra2_pd[16] += v[1];
	v[1] = -0.0601 * x[14];
	spectra2_pd[16] += v[1];
	v[1] = -0.1491 * x[15];
	spectra2_pd[16] += v[1];
	v[1] = -0.0032 * x[16];
	spectra2_pd[16] += v[1];
	v[1] = -0.0433 * x[17];
	spectra2_pd[16] += v[1];
	v[1] = -0.0754 * x[18];
	spectra2_pd[16] += v[1];
	v[1] = -0.0063 * x[19];
	spectra2_pd[16] += v[1];
	spectra2_pd[17] = -0.0318 * x[10];
	spectra2_pd[17] += 3.51;
	v[1] = -0.0004 * x[11];
	spectra2_pd[17] += v[1];
	v[1] = -0.0275 * x[12];
	spectra2_pd[17] += v[1];
	v[1] = -0.018 * x[13];
	spectra2_pd[17] += v[1];
	v[1] = -0.0601 * x[14];
	spectra2_pd[17] += v[1];
	v[1] = -0.1491 * x[15];
	spectra2_pd[17] += v[1];
	v[1] = -0.0032 * x[16];
	spectra2_pd[17] += v[1];
	v[1] = -0.0433 * x[17];
	spectra2_pd[17] += v[1];
	v[1] = -0.0754 * x[18];
	spectra2_pd[17] += v[1];
	v[1] = -0.0063 * x[19];
	spectra2_pd[17] += v[1];
	v[1] = spectra2_pd[16] * spectra2_pd[17];
	v[0] += v[1];
	spectra2_pd[18] = -0.0318 * x[20];
	spectra2_pd[18] += 0.8;
	v[1] = -0.0004 * x[21];
	spectra2_pd[18] += v[1];
	v[1] = -0.0275 * x[22];
	spectra2_pd[18] += v[1];
	v[1] = -0.018 * x[23];
	spectra2_pd[18] += v[1];
	v[1] = -0.0601 * x[24];
	spectra2_pd[18] += v[1];
	v[1] = -0.1491 * x[25];
	spectra2_pd[18] += v[1];
	v[1] = -0.0032 * x[26];
	spectra2_pd[18] += v[1];
	v[1] = -0.0433 * x[27];
	spectra2_pd[18] += v[1];
	v[1] = -0.0754 * x[28];
	spectra2_pd[18] += v[1];
	v[1] = -0.0063 * x[29];
	spectra2_pd[18] += v[1];
	spectra2_pd[19] = -0.0318 * x[20];
	spectra2_pd[19] += 0.8;
	v[1] = -0.0004 * x[21];
	spectra2_pd[19] += v[1];
	v[1] = -0.0275 * x[22];
	spectra2_pd[19] += v[1];
	v[1] = -0.018 * x[23];
	spectra2_pd[19] += v[1];
	v[1] = -0.0601 * x[24];
	spectra2_pd[19] += v[1];
	v[1] = -0.1491 * x[25];
	spectra2_pd[19] += v[1];
	v[1] = -0.0032 * x[26];
	spectra2_pd[19] += v[1];
	v[1] = -0.0433 * x[27];
	spectra2_pd[19] += v[1];
	v[1] = -0.0754 * x[28];
	spectra2_pd[19] += v[1];
	v[1] = -0.0063 * x[29];
	spectra2_pd[19] += v[1];
	v[1] = spectra2_pd[18] * spectra2_pd[19];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[32];
	c[2] = t1;

  /***  constraint 4  ***/

	spectra2_pd[20] = -0.0007 * x[0];
	spectra2_pd[20] += 7.02;
	v[0] = -0.0009 * x[1];
	spectra2_pd[20] += v[0];
	v[0] = -0.0043 * x[2];
	spectra2_pd[20] += v[0];
	v[0] = -0.0179 * x[3];
	spectra2_pd[20] += v[0];
	v[0] = -0.0604 * x[4];
	spectra2_pd[20] += v[0];
	v[0] = -0.1385 * x[5];
	spectra2_pd[20] += v[0];
	v[0] = -0.0051 * x[6];
	spectra2_pd[20] += v[0];
	v[0] = -0.0635 * x[7];
	spectra2_pd[20] += v[0];
	v[0] = -0.1098 * x[8];
	spectra2_pd[20] += v[0];
	v[0] = -0.001 * x[9];
	spectra2_pd[20] += v[0];
	spectra2_pd[21] = -0.0007 * x[0];
	spectra2_pd[21] += 7.02;
	v[0] = -0.0009 * x[1];
	spectra2_pd[21] += v[0];
	v[0] = -0.0043 * x[2];
	spectra2_pd[21] += v[0];
	v[0] = -0.0179 * x[3];
	spectra2_pd[21] += v[0];
	v[0] = -0.0604 * x[4];
	spectra2_pd[21] += v[0];
	v[0] = -0.1385 * x[5];
	spectra2_pd[21] += v[0];
	v[0] = -0.0051 * x[6];
	spectra2_pd[21] += v[0];
	v[0] = -0.0635 * x[7];
	spectra2_pd[21] += v[0];
	v[0] = -0.1098 * x[8];
	spectra2_pd[21] += v[0];
	v[0] = -0.001 * x[9];
	spectra2_pd[21] += v[0];
	v[0] = spectra2_pd[20] * spectra2_pd[21];
	spectra2_pd[22] = -0.0007 * x[10];
	spectra2_pd[22] += 3.51;
	v[1] = -0.0009 * x[11];
	spectra2_pd[22] += v[1];
	v[1] = -0.0043 * x[12];
	spectra2_pd[22] += v[1];
	v[1] = -0.0179 * x[13];
	spectra2_pd[22] += v[1];
	v[1] = -0.0604 * x[14];
	spectra2_pd[22] += v[1];
	v[1] = -0.1385 * x[15];
	spectra2_pd[22] += v[1];
	v[1] = -0.0051 * x[16];
	spectra2_pd[22] += v[1];
	v[1] = -0.0635 * x[17];
	spectra2_pd[22] += v[1];
	v[1] = -0.1098 * x[18];
	spectra2_pd[22] += v[1];
	v[1] = -0.001 * x[19];
	spectra2_pd[22] += v[1];
	spectra2_pd[23] = -0.0007 * x[10];
	spectra2_pd[23] += 3.51;
	v[1] = -0.0009 * x[11];
	spectra2_pd[23] += v[1];
	v[1] = -0.0043 * x[12];
	spectra2_pd[23] += v[1];
	v[1] = -0.0179 * x[13];
	spectra2_pd[23] += v[1];
	v[1] = -0.0604 * x[14];
	spectra2_pd[23] += v[1];
	v[1] = -0.1385 * x[15];
	spectra2_pd[23] += v[1];
	v[1] = -0.0051 * x[16];
	spectra2_pd[23] += v[1];
	v[1] = -0.0635 * x[17];
	spectra2_pd[23] += v[1];
	v[1] = -0.1098 * x[18];
	spectra2_pd[23] += v[1];
	v[1] = -0.001 * x[19];
	spectra2_pd[23] += v[1];
	v[1] = spectra2_pd[22] * spectra2_pd[23];
	v[0] += v[1];
	spectra2_pd[24] = -0.0007 * x[20];
	v[1] = -0.0009 * x[21];
	spectra2_pd[27] = spectra2_pd[24] + v[1];
	v[2] = -0.0043 * x[22];
	spectra2_pd[27] += v[2];
	v[2] = -0.0179 * x[23];
	spectra2_pd[27] += v[2];
	v[2] = -0.0604 * x[24];
	spectra2_pd[27] += v[2];
	v[2] = -0.1385 * x[25];
	spectra2_pd[27] += v[2];
	v[2] = -0.0051 * x[26];
	spectra2_pd[27] += v[2];
	v[2] = -0.0635 * x[27];
	spectra2_pd[27] += v[2];
	v[2] = -0.1098 * x[28];
	spectra2_pd[27] += v[2];
	v[2] = -0.001 * x[29];
	spectra2_pd[27] += v[2];
	spectra2_pd[25] = -0.0007 * x[20];
	v[2] = -0.0009 * x[21];
	spectra2_pd[26] = spectra2_pd[25] + v[2];
	v[3] = -0.0043 * x[22];
	spectra2_pd[26] += v[3];
	v[3] = -0.0179 * x[23];
	spectra2_pd[26] += v[3];
	v[3] = -0.0604 * x[24];
	spectra2_pd[26] += v[3];
	v[3] = -0.1385 * x[25];
	spectra2_pd[26] += v[3];
	v[3] = -0.0051 * x[26];
	spectra2_pd[26] += v[3];
	v[3] = -0.0635 * x[27];
	spectra2_pd[26] += v[3];
	v[3] = -0.1098 * x[28];
	spectra2_pd[26] += v[3];
	v[3] = -0.001 * x[29];
	spectra2_pd[26] += v[3];
	v[3] = spectra2_pd[27] * spectra2_pd[26];
	v[0] += v[3];
	v[3] = -v[0];
	t1 = v[3] + x[33];
	c[3] = t1;

  /***  constraint 5  ***/

	spectra2_pd[28] = -0.0534 * x[0];
	v[0] = -0.0005 * x[1];
	spectra2_pd[31] = spectra2_pd[28] + v[0];
	v[1] = -0.0704 * x[2];
	spectra2_pd[31] += v[1];
	v[1] = -0.0351 * x[3];
	spectra2_pd[31] += v[1];
	v[1] = -0.0981 * x[4];
	spectra2_pd[31] += v[1];
	v[1] = -0.2389 * x[5];
	spectra2_pd[31] += v[1];
	v[1] = -0.0015 * x[6];
	spectra2_pd[31] += v[1];
	v[1] = -0.0048 * x[7];
	spectra2_pd[31] += v[1];
	v[1] = -0.0038 * x[8];
	spectra2_pd[31] += v[1];
	v[1] = -0.0132 * x[9];
	spectra2_pd[31] += v[1];
	spectra2_pd[29] = -0.0534 * x[0];
	v[1] = -0.0005 * x[1];
	spectra2_pd[30] = spectra2_pd[29] + v[1];
	v[2] = -0.0704 * x[2];
	spectra2_pd[30] += v[2];
	v[2] = -0.0351 * x[3];
	spectra2_pd[30] += v[2];
	v[2] = -0.0981 * x[4];
	spectra2_pd[30] += v[2];
	v[2] = -0.2389 * x[5];
	spectra2_pd[30] += v[2];
	v[2] = -0.0015 * x[6];
	spectra2_pd[30] += v[2];
	v[2] = -0.0048 * x[7];
	spectra2_pd[30] += v[2];
	v[2] = -0.0038 * x[8];
	spectra2_pd[30] += v[2];
	v[2] = -0.0132 * x[9];
	spectra2_pd[30] += v[2];
	v[2] = spectra2_pd[31] * spectra2_pd[30];
	spectra2_pd[32] = -0.0534 * x[10];
	spectra2_pd[32] += 7.;
	v[3] = -0.0005 * x[11];
	spectra2_pd[32] += v[3];
	v[3] = -0.0704 * x[12];
	spectra2_pd[32] += v[3];
	v[3] = -0.0351 * x[13];
	spectra2_pd[32] += v[3];
	v[3] = -0.0981 * x[14];
	spectra2_pd[32] += v[3];
	v[3] = -0.2389 * x[15];
	spectra2_pd[32] += v[3];
	v[3] = -0.0015 * x[16];
	spectra2_pd[32] += v[3];
	v[3] = -0.0048 * x[17];
	spectra2_pd[32] += v[3];
	v[3] = -0.0038 * x[18];
	spectra2_pd[32] += v[3];
	v[3] = -0.0132 * x[19];
	spectra2_pd[32] += v[3];
	spectra2_pd[33] = -0.0534 * x[10];
	spectra2_pd[33] += 7.;
	v[3] = -0.0005 * x[11];
	spectra2_pd[33] += v[3];
	v[3] = -0.0704 * x[12];
	spectra2_pd[33] += v[3];
	v[3] = -0.0351 * x[13];
	spectra2_pd[33] += v[3];
	v[3] = -0.0981 * x[14];
	spectra2_pd[33] += v[3];
	v[3] = -0.2389 * x[15];
	spectra2_pd[33] += v[3];
	v[3] = -0.0015 * x[16];
	spectra2_pd[33] += v[3];
	v[3] = -0.0048 * x[17];
	spectra2_pd[33] += v[3];
	v[3] = -0.0038 * x[18];
	spectra2_pd[33] += v[3];
	v[3] = -0.0132 * x[19];
	spectra2_pd[33] += v[3];
	v[3] = spectra2_pd[32] * spectra2_pd[33];
	v[2] += v[3];
	spectra2_pd[34] = -0.0534 * x[20];
	spectra2_pd[34] += 1.4;
	v[3] = -0.0005 * x[21];
	spectra2_pd[34] += v[3];
	v[3] = -0.0704 * x[22];
	spectra2_pd[34] += v[3];
	v[3] = -0.0351 * x[23];
	spectra2_pd[34] += v[3];
	v[3] = -0.0981 * x[24];
	spectra2_pd[34] += v[3];
	v[3] = -0.2389 * x[25];
	spectra2_pd[34] += v[3];
	v[3] = -0.0015 * x[26];
	spectra2_pd[34] += v[3];
	v[3] = -0.0048 * x[27];
	spectra2_pd[34] += v[3];
	v[3] = -0.0038 * x[28];
	spectra2_pd[34] += v[3];
	v[3] = -0.0132 * x[29];
	spectra2_pd[34] += v[3];
	spectra2_pd[35] = -0.0534 * x[20];
	spectra2_pd[35] += 1.4;
	v[3] = -0.0005 * x[21];
	spectra2_pd[35] += v[3];
	v[3] = -0.0704 * x[22];
	spectra2_pd[35] += v[3];
	v[3] = -0.0351 * x[23];
	spectra2_pd[35] += v[3];
	v[3] = -0.0981 * x[24];
	spectra2_pd[35] += v[3];
	v[3] = -0.2389 * x[25];
	spectra2_pd[35] += v[3];
	v[3] = -0.0015 * x[26];
	spectra2_pd[35] += v[3];
	v[3] = -0.0048 * x[27];
	spectra2_pd[35] += v[3];
	v[3] = -0.0038 * x[28];
	spectra2_pd[35] += v[3];
	v[3] = -0.0132 * x[29];
	spectra2_pd[35] += v[3];
	v[3] = spectra2_pd[34] * spectra2_pd[35];
	v[2] += v[3];
	v[3] = -v[2];
	t1 = v[3] + x[34];
	c[4] = t1;

  /***  constraint 6  ***/

	spectra2_pd[36] = -0.0773 * x[0];
	spectra2_pd[36] += 10.16;
	v[0] = -0.0009 * x[1];
	spectra2_pd[36] += v[0];
	v[0] = -0.0683 * x[2];
	spectra2_pd[36] += v[0];
	v[0] = -0.0024 * x[3];
	spectra2_pd[36] += v[0];
	v[0] = -0.0025 * x[4];
	spectra2_pd[36] += v[0];
	v[0] = -0.0248 * x[5];
	spectra2_pd[36] += v[0];
	v[0] = -0.0094 * x[6];
	spectra2_pd[36] += v[0];
	v[0] = -0.0891 * x[7];
	spectra2_pd[36] += v[0];
	v[0] = -0.1443 * x[8];
	spectra2_pd[36] += v[0];
	v[0] = -0.0203 * x[9];
	spectra2_pd[36] += v[0];
	spectra2_pd[37] = -0.0773 * x[0];
	spectra2_pd[37] += 10.16;
	v[0] = -0.0009 * x[1];
	spectra2_pd[37] += v[0];
	v[0] = -0.0683 * x[2];
	spectra2_pd[37] += v[0];
	v[0] = -0.0024 * x[3];
	spectra2_pd[37] += v[0];
	v[0] = -0.0025 * x[4];
	spectra2_pd[37] += v[0];
	v[0] = -0.0248 * x[5];
	spectra2_pd[37] += v[0];
	v[0] = -0.0094 * x[6];
	spectra2_pd[37] += v[0];
	v[0] = -0.0891 * x[7];
	spectra2_pd[37] += v[0];
	v[0] = -0.1443 * x[8];
	spectra2_pd[37] += v[0];
	v[0] = -0.0203 * x[9];
	spectra2_pd[37] += v[0];
	v[0] = spectra2_pd[36] * spectra2_pd[37];
	spectra2_pd[38] = -0.0773 * x[10];
	v[1] = -0.0009 * x[11];
	spectra2_pd[41] = spectra2_pd[38] + v[1];
	v[2] = -0.0683 * x[12];
	spectra2_pd[41] += v[2];
	v[2] = -0.0024 * x[13];
	spectra2_pd[41] += v[2];
	v[2] = -0.0025 * x[14];
	spectra2_pd[41] += v[2];
	v[2] = -0.0248 * x[15];
	spectra2_pd[41] += v[2];
	v[2] = -0.0094 * x[16];
	spectra2_pd[41] += v[2];
	v[2] = -0.0891 * x[17];
	spectra2_pd[41] += v[2];
	v[2] = -0.1443 * x[18];
	spectra2_pd[41] += v[2];
	v[2] = -0.0203 * x[19];
	spectra2_pd[41] += v[2];
	spectra2_pd[39] = -0.0773 * x[10];
	v[2] = -0.0009 * x[11];
	spectra2_pd[40] = spectra2_pd[39] + v[2];
	v[3] = -0.0683 * x[12];
	spectra2_pd[40] += v[3];
	v[3] = -0.0024 * x[13];
	spectra2_pd[40] += v[3];
	v[3] = -0.0025 * x[14];
	spectra2_pd[40] += v[3];
	v[3] = -0.0248 * x[15];
	spectra2_pd[40] += v[3];
	v[3] = -0.0094 * x[16];
	spectra2_pd[40] += v[3];
	v[3] = -0.0891 * x[17];
	spectra2_pd[40] += v[3];
	v[3] = -0.1443 * x[18];
	spectra2_pd[40] += v[3];
	v[3] = -0.0203 * x[19];
	spectra2_pd[40] += v[3];
	v[3] = spectra2_pd[41] * spectra2_pd[40];
	v[0] += v[3];
	spectra2_pd[42] = -0.0773 * x[20];
	spectra2_pd[42] += 2.2;
	v[3] = -0.0009 * x[21];
	spectra2_pd[42] += v[3];
	v[3] = -0.0683 * x[22];
	spectra2_pd[42] += v[3];
	v[3] = -0.0024 * x[23];
	spectra2_pd[42] += v[3];
	v[3] = -0.0025 * x[24];
	spectra2_pd[42] += v[3];
	v[3] = -0.0248 * x[25];
	spectra2_pd[42] += v[3];
	v[3] = -0.0094 * x[26];
	spectra2_pd[42] += v[3];
	v[3] = -0.0891 * x[27];
	spectra2_pd[42] += v[3];
	v[3] = -0.1443 * x[28];
	spectra2_pd[42] += v[3];
	v[3] = -0.0203 * x[29];
	spectra2_pd[42] += v[3];
	spectra2_pd[43] = -0.0773 * x[20];
	spectra2_pd[43] += 2.2;
	v[3] = -0.0009 * x[21];
	spectra2_pd[43] += v[3];
	v[3] = -0.0683 * x[22];
	spectra2_pd[43] += v[3];
	v[3] = -0.0024 * x[23];
	spectra2_pd[43] += v[3];
	v[3] = -0.0025 * x[24];
	spectra2_pd[43] += v[3];
	v[3] = -0.0248 * x[25];
	spectra2_pd[43] += v[3];
	v[3] = -0.0094 * x[26];
	spectra2_pd[43] += v[3];
	v[3] = -0.0891 * x[27];
	spectra2_pd[43] += v[3];
	v[3] = -0.1443 * x[28];
	spectra2_pd[43] += v[3];
	v[3] = -0.0203 * x[29];
	spectra2_pd[43] += v[3];
	v[3] = spectra2_pd[42] * spectra2_pd[43];
	v[0] += v[3];
	v[3] = -v[0];
	t1 = v[3] + x[35];
	c[5] = t1;

  /***  constraint 7  ***/

	spectra2_pd[44] = -0.0536 * x[0];
	spectra2_pd[44] += 1.04;
	v[0] = -0.0005 * x[1];
	spectra2_pd[44] += v[0];
	v[0] = -0.0842 * x[2];
	spectra2_pd[44] += v[0];
	v[0] = -0.0108 * x[3];
	spectra2_pd[44] += v[0];
	v[0] = -0.0394 * x[4];
	spectra2_pd[44] += v[0];
	v[0] = -0.1122 * x[5];
	spectra2_pd[44] += v[0];
	v[0] = -0.0015 * x[6];
	spectra2_pd[44] += v[0];
	v[0] = -0.0213 * x[7];
	spectra2_pd[44] += v[0];
	v[0] = -0.042 * x[8];
	spectra2_pd[44] += v[0];
	v[0] = -0.0139 * x[9];
	spectra2_pd[44] += v[0];
	spectra2_pd[45] = -0.0536 * x[0];
	spectra2_pd[45] += 1.04;
	v[0] = -0.0005 * x[1];
	spectra2_pd[45] += v[0];
	v[0] = -0.0842 * x[2];
	spectra2_pd[45] += v[0];
	v[0] = -0.0108 * x[3];
	spectra2_pd[45] += v[0];
	v[0] = -0.0394 * x[4];
	spectra2_pd[45] += v[0];
	v[0] = -0.1122 * x[5];
	spectra2_pd[45] += v[0];
	v[0] = -0.0015 * x[6];
	spectra2_pd[45] += v[0];
	v[0] = -0.0213 * x[7];
	spectra2_pd[45] += v[0];
	v[0] = -0.042 * x[8];
	spectra2_pd[45] += v[0];
	v[0] = -0.0139 * x[9];
	spectra2_pd[45] += v[0];
	v[0] = spectra2_pd[44] * spectra2_pd[45];
	spectra2_pd[46] = -0.0536 * x[10];
	spectra2_pd[46] += 2.01;
	v[1] = -0.0005 * x[11];
	spectra2_pd[46] += v[1];
	v[1] = -0.0842 * x[12];
	spectra2_pd[46] += v[1];
	v[1] = -0.0108 * x[13];
	spectra2_pd[46] += v[1];
	v[1] = -0.0394 * x[14];
	spectra2_pd[46] += v[1];
	v[1] = -0.1122 * x[15];
	spectra2_pd[46] += v[1];
	v[1] = -0.0015 * x[16];
	spectra2_pd[46] += v[1];
	v[1] = -0.0213 * x[17];
	spectra2_pd[46] += v[1];
	v[1] = -0.042 * x[18];
	spectra2_pd[46] += v[1];
	v[1] = -0.0139 * x[19];
	spectra2_pd[46] += v[1];
	spectra2_pd[47] = -0.0536 * x[10];
	spectra2_pd[47] += 2.01;
	v[1] = -0.0005 * x[11];
	spectra2_pd[47] += v[1];
	v[1] = -0.0842 * x[12];
	spectra2_pd[47] += v[1];
	v[1] = -0.0108 * x[13];
	spectra2_pd[47] += v[1];
	v[1] = -0.0394 * x[14];
	spectra2_pd[47] += v[1];
	v[1] = -0.1122 * x[15];
	spectra2_pd[47] += v[1];
	v[1] = -0.0015 * x[16];
	spectra2_pd[47] += v[1];
	v[1] = -0.0213 * x[17];
	spectra2_pd[47] += v[1];
	v[1] = -0.042 * x[18];
	spectra2_pd[47] += v[1];
	v[1] = -0.0139 * x[19];
	spectra2_pd[47] += v[1];
	v[1] = spectra2_pd[46] * spectra2_pd[47];
	v[0] += v[1];
	spectra2_pd[48] = -0.0536 * x[20];
	spectra2_pd[48] += 1.4;
	v[1] = -0.0005 * x[21];
	spectra2_pd[48] += v[1];
	v[1] = -0.0842 * x[22];
	spectra2_pd[48] += v[1];
	v[1] = -0.0108 * x[23];
	spectra2_pd[48] += v[1];
	v[1] = -0.0394 * x[24];
	spectra2_pd[48] += v[1];
	v[1] = -0.1122 * x[25];
	spectra2_pd[48] += v[1];
	v[1] = -0.0015 * x[26];
	spectra2_pd[48] += v[1];
	v[1] = -0.0213 * x[27];
	spectra2_pd[48] += v[1];
	v[1] = -0.042 * x[28];
	spectra2_pd[48] += v[1];
	v[1] = -0.0139 * x[29];
	spectra2_pd[48] += v[1];
	spectra2_pd[49] = -0.0536 * x[20];
	spectra2_pd[49] += 1.4;
	v[1] = -0.0005 * x[21];
	spectra2_pd[49] += v[1];
	v[1] = -0.0842 * x[22];
	spectra2_pd[49] += v[1];
	v[1] = -0.0108 * x[23];
	spectra2_pd[49] += v[1];
	v[1] = -0.0394 * x[24];
	spectra2_pd[49] += v[1];
	v[1] = -0.1122 * x[25];
	spectra2_pd[49] += v[1];
	v[1] = -0.0015 * x[26];
	spectra2_pd[49] += v[1];
	v[1] = -0.0213 * x[27];
	spectra2_pd[49] += v[1];
	v[1] = -0.042 * x[28];
	spectra2_pd[49] += v[1];
	v[1] = -0.0139 * x[29];
	spectra2_pd[49] += v[1];
	v[1] = spectra2_pd[48] * spectra2_pd[49];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[36];
	c[6] = t1;

  /***  constraint 8  ***/

	spectra2_pd[50] = -0.032 * x[0];
	spectra2_pd[50] += 2.04;
	v[0] = -0.0003 * x[1];
	spectra2_pd[50] += v[0];
	v[0] = -0.0309 * x[2];
	spectra2_pd[50] += v[0];
	v[0] = -0.0052 * x[3];
	spectra2_pd[50] += v[0];
	v[0] = -0.0221 * x[4];
	spectra2_pd[50] += v[0];
	v[0] = -0.0633 * x[5];
	spectra2_pd[50] += v[0];
	v[0] = -0.0024 * x[6];
	spectra2_pd[50] += v[0];
	v[0] = -0.031 * x[7];
	spectra2_pd[50] += v[0];
	v[0] = -0.0574 * x[8];
	spectra2_pd[50] += v[0];
	v[0] = -0.0057 * x[9];
	spectra2_pd[50] += v[0];
	spectra2_pd[51] = -0.032 * x[0];
	spectra2_pd[51] += 2.04;
	v[0] = -0.0003 * x[1];
	spectra2_pd[51] += v[0];
	v[0] = -0.0309 * x[2];
	spectra2_pd[51] += v[0];
	v[0] = -0.0052 * x[3];
	spectra2_pd[51] += v[0];
	v[0] = -0.0221 * x[4];
	spectra2_pd[51] += v[0];
	v[0] = -0.0633 * x[5];
	spectra2_pd[51] += v[0];
	v[0] = -0.0024 * x[6];
	spectra2_pd[51] += v[0];
	v[0] = -0.031 * x[7];
	spectra2_pd[51] += v[0];
	v[0] = -0.0574 * x[8];
	spectra2_pd[51] += v[0];
	v[0] = -0.0057 * x[9];
	spectra2_pd[51] += v[0];
	v[0] = spectra2_pd[50] * spectra2_pd[51];
	spectra2_pd[52] = -0.032 * x[10];
	spectra2_pd[52] += 0.97;
	v[1] = -0.0003 * x[11];
	spectra2_pd[52] += v[1];
	v[1] = -0.0309 * x[12];
	spectra2_pd[52] += v[1];
	v[1] = -0.0052 * x[13];
	spectra2_pd[52] += v[1];
	v[1] = -0.0221 * x[14];
	spectra2_pd[52] += v[1];
	v[1] = -0.0633 * x[15];
	spectra2_pd[52] += v[1];
	v[1] = -0.0024 * x[16];
	spectra2_pd[52] += v[1];
	v[1] = -0.031 * x[17];
	spectra2_pd[52] += v[1];
	v[1] = -0.0574 * x[18];
	spectra2_pd[52] += v[1];
	v[1] = -0.0057 * x[19];
	spectra2_pd[52] += v[1];
	spectra2_pd[53] = -0.032 * x[10];
	spectra2_pd[53] += 0.97;
	v[1] = -0.0003 * x[11];
	spectra2_pd[53] += v[1];
	v[1] = -0.0309 * x[12];
	spectra2_pd[53] += v[1];
	v[1] = -0.0052 * x[13];
	spectra2_pd[53] += v[1];
	v[1] = -0.0221 * x[14];
	spectra2_pd[53] += v[1];
	v[1] = -0.0633 * x[15];
	spectra2_pd[53] += v[1];
	v[1] = -0.0024 * x[16];
	spectra2_pd[53] += v[1];
	v[1] = -0.031 * x[17];
	spectra2_pd[53] += v[1];
	v[1] = -0.0574 * x[18];
	spectra2_pd[53] += v[1];
	v[1] = -0.0057 * x[19];
	spectra2_pd[53] += v[1];
	v[1] = spectra2_pd[52] * spectra2_pd[53];
	v[0] += v[1];
	spectra2_pd[54] = -0.032 * x[20];
	spectra2_pd[54] += 0.8;
	v[1] = -0.0003 * x[21];
	spectra2_pd[54] += v[1];
	v[1] = -0.0309 * x[22];
	spectra2_pd[54] += v[1];
	v[1] = -0.0052 * x[23];
	spectra2_pd[54] += v[1];
	v[1] = -0.0221 * x[24];
	spectra2_pd[54] += v[1];
	v[1] = -0.0633 * x[25];
	spectra2_pd[54] += v[1];
	v[1] = -0.0024 * x[26];
	spectra2_pd[54] += v[1];
	v[1] = -0.031 * x[27];
	spectra2_pd[54] += v[1];
	v[1] = -0.0574 * x[28];
	spectra2_pd[54] += v[1];
	v[1] = -0.0057 * x[29];
	spectra2_pd[54] += v[1];
	spectra2_pd[55] = -0.032 * x[20];
	spectra2_pd[55] += 0.8;
	v[1] = -0.0003 * x[21];
	spectra2_pd[55] += v[1];
	v[1] = -0.0309 * x[22];
	spectra2_pd[55] += v[1];
	v[1] = -0.0052 * x[23];
	spectra2_pd[55] += v[1];
	v[1] = -0.0221 * x[24];
	spectra2_pd[55] += v[1];
	v[1] = -0.0633 * x[25];
	spectra2_pd[55] += v[1];
	v[1] = -0.0024 * x[26];
	spectra2_pd[55] += v[1];
	v[1] = -0.031 * x[27];
	spectra2_pd[55] += v[1];
	v[1] = -0.0574 * x[28];
	spectra2_pd[55] += v[1];
	v[1] = -0.0057 * x[29];
	spectra2_pd[55] += v[1];
	v[1] = spectra2_pd[54] * spectra2_pd[55];
	v[0] += v[1];
	v[1] = -v[0];
	t1 = v[1] + x[37];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[0];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[1];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[2];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[3];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[4];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[5];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[6];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[7];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[8];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[9];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[10];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = x[11];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = x[12];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = x[13];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = x[14];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = x[15];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = x[16];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = x[17];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = x[18];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = x[19];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = x[20];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = x[21];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = x[22];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[23];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[24];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[25];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[26];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[27];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[28];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[29];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[0];
	t1 += -1000.*x[39];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[1];
	t1 += -1000.*x[40];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[2];
	t1 += -1000.*x[41];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[3];
	t1 += -1000.*x[42];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[4];
	t1 += -1000.*x[43];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[5];
	t1 += -1000.*x[44];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[6];
	t1 += -1000.*x[45];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[7];
	t1 += -1000.*x[46];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[8];
	t1 += -1000.*x[47];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[9];
	t1 += -1000.*x[48];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[10];
	t1 += -1000.*x[49];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[11];
	t1 += -1000.*x[50];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[12];
	t1 += -1000.*x[51];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[13];
	t1 += -1000.*x[52];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[14];
	t1 += -1000.*x[53];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[15];
	t1 += -1000.*x[54];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[16];
	t1 += -1000.*x[55];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[17];
	t1 += -1000.*x[56];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[18];
	t1 += -1000.*x[57];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[19];
	t1 += -1000.*x[58];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[20];
	t1 += -1000.*x[59];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[21];
	t1 += -1000.*x[60];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[22];
	t1 += -1000.*x[61];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[23];
	t1 += -1000.*x[62];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[24];
	t1 += -1000.*x[63];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[25];
	t1 += -1000.*x[64];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[26];
	t1 += -1000.*x[65];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[27];
	t1 += -1000.*x[66];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[28];
	t1 += -1000.*x[67];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[29];
	t1 += -1000.*x[68];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	t1 += x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[49];
	t1 += x[50];
	t1 += x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
	t1 += x[55];
	t1 += x[56];
	t1 += x[57];
	t1 += x[58];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[59];
	t1 += x[60];
	t1 += x[61];
	t1 += x[62];
	t1 += x[63];
	t1 += x[64];
	t1 += x[65];
	t1 += x[66];
	t1 += x[67];
	t1 += x[68];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[38];
	t1 += -x[39];
	t1 += -x[40];
	t1 += -x[41];
	t1 += -x[42];
	t1 += -x[43];
	t1 += -x[44];
	t1 += -x[45];
	t1 += -x[46];
	t1 += -x[47];
	t1 += -x[48];
	t1 += -x[49];
	t1 += -x[50];
	t1 += -x[51];
	t1 += -x[52];
	t1 += -x[53];
	t1 += -x[54];
	t1 += -x[55];
	t1 += -x[56];
	t1 += -x[57];
	t1 += -x[58];
	t1 += -x[59];
	t1 += -x[60];
	t1 += -x[61];
	t1 += -x[62];
	t1 += -x[63];
	t1 += -x[64];
	t1 += -x[65];
	t1 += -x[66];
	t1 += -x[67];
	t1 += -x[68];
	c[71] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = -spectra2_pd[7];
	J[290] = -dv[0]*0.0016;
	dv[1] = -spectra2_pd[7];
	J[280] = -dv[1]*0.0905;
	dv[2] = -spectra2_pd[7];
	J[270] = -dv[2]*0.0507;
	dv[3] = -spectra2_pd[7];
	J[260] = -dv[3]*0.0036;
	dv[4] = -spectra2_pd[7];
	J[250] = -dv[4]*0.0518;
	dv[5] = -spectra2_pd[7];
	J[240] = -dv[5]*0.0208;
	dv[6] = -spectra2_pd[7];
	J[230] = -dv[6]*0.0044;
	dv[7] = -spectra2_pd[7];
	J[220] = -dv[7]*0.0066;
	dv[8] = -spectra2_pd[7];
	J[210] = -dv[8]*0.0007;
	J[200] = spectra2_pd[7]*0.0003;
	dv[9] = -spectra2_pd[6];
	J[290] -= dv[9]*0.0016;
	dv[10] = -spectra2_pd[6];
	J[280] -= dv[10]*0.0905;
	dv[11] = -spectra2_pd[6];
	J[270] -= dv[11]*0.0507;
	dv[12] = -spectra2_pd[6];
	J[260] -= dv[12]*0.0036;
	dv[13] = -spectra2_pd[6];
	J[250] -= dv[13]*0.0518;
	dv[14] = -spectra2_pd[6];
	J[240] -= dv[14]*0.0208;
	dv[15] = -spectra2_pd[6];
	J[230] -= dv[15]*0.0044;
	dv[16] = -spectra2_pd[6];
	J[220] -= dv[16]*0.0066;
	dv[17] = -spectra2_pd[6];
	J[210] -= dv[17]*0.0007;
	J[200] += spectra2_pd[6]*0.0003;
	dv[18] = -spectra2_pd[2];
	J[190] = -dv[18]*0.0016;
	dv[19] = -spectra2_pd[2];
	J[180] = -dv[19]*0.0905;
	dv[20] = -spectra2_pd[2];
	J[170] = -dv[20]*0.0507;
	dv[21] = -spectra2_pd[2];
	J[160] = -dv[21]*0.0036;
	dv[22] = -spectra2_pd[2];
	J[150] = -dv[22]*0.0518;
	dv[23] = -spectra2_pd[2];
	J[140] = -dv[23]*0.0208;
	dv[24] = -spectra2_pd[2];
	J[130] = -dv[24]*0.0044;
	dv[25] = -spectra2_pd[2];
	J[120] = -dv[25]*0.0066;
	dv[26] = -spectra2_pd[2];
	J[110] = -dv[26]*0.0007;
	J[100] = spectra2_pd[2]*0.0003;
	dv[27] = -spectra2_pd[3];
	J[190] -= dv[27]*0.0016;
	dv[28] = -spectra2_pd[3];
	J[180] -= dv[28]*0.0905;
	dv[29] = -spectra2_pd[3];
	J[170] -= dv[29]*0.0507;
	dv[30] = -spectra2_pd[3];
	J[160] -= dv[30]*0.0036;
	dv[31] = -spectra2_pd[3];
	J[150] -= dv[31]*0.0518;
	dv[32] = -spectra2_pd[3];
	J[140] -= dv[32]*0.0208;
	dv[33] = -spectra2_pd[3];
	J[130] -= dv[33]*0.0044;
	dv[34] = -spectra2_pd[3];
	J[120] -= dv[34]*0.0066;
	dv[35] = -spectra2_pd[3];
	J[110] -= dv[35]*0.0007;
	J[100] += spectra2_pd[3]*0.0003;
	dv[36] = -spectra2_pd[0];
	J[90] = -dv[36]*0.0016;
	dv[37] = -spectra2_pd[0];
	J[80] = -dv[37]*0.0905;
	dv[38] = -spectra2_pd[0];
	J[70] = -dv[38]*0.0507;
	dv[39] = -spectra2_pd[0];
	J[60] = -dv[39]*0.0036;
	dv[40] = -spectra2_pd[0];
	J[50] = -dv[40]*0.0518;
	dv[41] = -spectra2_pd[0];
	J[40] = -dv[41]*0.0208;
	dv[42] = -spectra2_pd[0];
	J[30] = -dv[42]*0.0044;
	dv[43] = -spectra2_pd[0];
	J[20] = -dv[43]*0.0066;
	dv[44] = -spectra2_pd[0];
	J[10] = -dv[44]*0.0007;
	J[0] = spectra2_pd[0]*0.0003;
	dv[45] = -spectra2_pd[1];
	J[90] -= dv[45]*0.0016;
	dv[46] = -spectra2_pd[1];
	J[80] -= dv[46]*0.0905;
	dv[47] = -spectra2_pd[1];
	J[70] -= dv[47]*0.0507;
	dv[48] = -spectra2_pd[1];
	J[60] -= dv[48]*0.0036;
	dv[49] = -spectra2_pd[1];
	J[50] -= dv[49]*0.0518;
	dv[50] = -spectra2_pd[1];
	J[40] -= dv[50]*0.0208;
	dv[51] = -spectra2_pd[1];
	J[30] -= dv[51]*0.0044;
	dv[52] = -spectra2_pd[1];
	J[20] -= dv[52]*0.0066;
	dv[53] = -spectra2_pd[1];
	J[10] -= dv[53]*0.0007;
	J[0] += spectra2_pd[1]*0.0003;
	J[300] = 1.;

   /*** derivatives for constraint 2 ***/

	dv[0] = -spectra2_pd[12];
	J[291] = -dv[0]*0.0209;
	dv[1] = -spectra2_pd[12];
	J[281] = -dv[1]*0.06;
	dv[2] = -spectra2_pd[12];
	J[271] = -dv[2]*0.0361;
	dv[3] = -spectra2_pd[12];
	J[261] = -dv[3]*0.0035;
	dv[4] = -spectra2_pd[12];
	J[251] = -dv[4]*0.1656;
	dv[5] = -spectra2_pd[12];
	J[241] = -dv[5]*0.0605;
	dv[6] = -spectra2_pd[12];
	J[231] = -dv[6]*0.0186;
	dv[7] = -spectra2_pd[12];
	J[221] = -dv[7]*0.0789;
	dv[8] = -spectra2_pd[12];
	J[211] = -dv[8]*0.0003;
	J[201] = spectra2_pd[12]*0.0764;
	dv[9] = -spectra2_pd[13];
	J[291] -= dv[9]*0.0209;
	dv[10] = -spectra2_pd[13];
	J[281] -= dv[10]*0.06;
	dv[11] = -spectra2_pd[13];
	J[271] -= dv[11]*0.0361;
	dv[12] = -spectra2_pd[13];
	J[261] -= dv[12]*0.0035;
	dv[13] = -spectra2_pd[13];
	J[251] -= dv[13]*0.1656;
	dv[14] = -spectra2_pd[13];
	J[241] -= dv[14]*0.0605;
	dv[15] = -spectra2_pd[13];
	J[231] -= dv[15]*0.0186;
	dv[16] = -spectra2_pd[13];
	J[221] -= dv[16]*0.0789;
	dv[17] = -spectra2_pd[13];
	J[211] -= dv[17]*0.0003;
	J[201] += spectra2_pd[13]*0.0764;
	dv[18] = -spectra2_pd[10];
	J[191] = -dv[18]*0.0209;
	dv[19] = -spectra2_pd[10];
	J[181] = -dv[19]*0.06;
	dv[20] = -spectra2_pd[10];
	J[171] = -dv[20]*0.0361;
	dv[21] = -spectra2_pd[10];
	J[161] = -dv[21]*0.0035;
	dv[22] = -spectra2_pd[10];
	J[151] = -dv[22]*0.1656;
	dv[23] = -spectra2_pd[10];
	J[141] = -dv[23]*0.0605;
	dv[24] = -spectra2_pd[10];
	J[131] = -dv[24]*0.0186;
	dv[25] = -spectra2_pd[10];
	J[121] = -dv[25]*0.0789;
	dv[26] = -spectra2_pd[10];
	J[111] = -dv[26]*0.0003;
	J[101] = spectra2_pd[10]*0.0764;
	dv[27] = -spectra2_pd[11];
	J[191] -= dv[27]*0.0209;
	dv[28] = -spectra2_pd[11];
	J[181] -= dv[28]*0.06;
	dv[29] = -spectra2_pd[11];
	J[171] -= dv[29]*0.0361;
	dv[30] = -spectra2_pd[11];
	J[161] -= dv[30]*0.0035;
	dv[31] = -spectra2_pd[11];
	J[151] -= dv[31]*0.1656;
	dv[32] = -spectra2_pd[11];
	J[141] -= dv[32]*0.0605;
	dv[33] = -spectra2_pd[11];
	J[131] -= dv[33]*0.0186;
	dv[34] = -spectra2_pd[11];
	J[121] -= dv[34]*0.0789;
	dv[35] = -spectra2_pd[11];
	J[111] -= dv[35]*0.0003;
	J[101] += spectra2_pd[11]*0.0764;
	dv[36] = -spectra2_pd[8];
	J[91] = -dv[36]*0.0209;
	dv[37] = -spectra2_pd[8];
	J[81] = -dv[37]*0.06;
	dv[38] = -spectra2_pd[8];
	J[71] = -dv[38]*0.0361;
	dv[39] = -spectra2_pd[8];
	J[61] = -dv[39]*0.0035;
	dv[40] = -spectra2_pd[8];
	J[51] = -dv[40]*0.1656;
	dv[41] = -spectra2_pd[8];
	J[41] = -dv[41]*0.0605;
	dv[42] = -spectra2_pd[8];
	J[31] = -dv[42]*0.0186;
	dv[43] = -spectra2_pd[8];
	J[21] = -dv[43]*0.0789;
	dv[44] = -spectra2_pd[8];
	J[11] = -dv[44]*0.0003;
	J[1] = spectra2_pd[8]*0.0764;
	dv[45] = -spectra2_pd[9];
	J[91] -= dv[45]*0.0209;
	dv[46] = -spectra2_pd[9];
	J[81] -= dv[46]*0.06;
	dv[47] = -spectra2_pd[9];
	J[71] -= dv[47]*0.0361;
	dv[48] = -spectra2_pd[9];
	J[61] -= dv[48]*0.0035;
	dv[49] = -spectra2_pd[9];
	J[51] -= dv[49]*0.1656;
	dv[50] = -spectra2_pd[9];
	J[41] -= dv[50]*0.0605;
	dv[51] = -spectra2_pd[9];
	J[31] -= dv[51]*0.0186;
	dv[52] = -spectra2_pd[9];
	J[21] -= dv[52]*0.0789;
	dv[53] = -spectra2_pd[9];
	J[11] -= dv[53]*0.0003;
	J[1] += spectra2_pd[9]*0.0764;
	J[301] = 1.;

   /*** derivatives for constraint 3 ***/

	dv[0] = -spectra2_pd[18];
	J[292] = -dv[0]*0.0063;
	dv[1] = -spectra2_pd[18];
	J[282] = -dv[1]*0.0754;
	dv[2] = -spectra2_pd[18];
	J[272] = -dv[2]*0.0433;
	dv[3] = -spectra2_pd[18];
	J[262] = -dv[3]*0.0032;
	dv[4] = -spectra2_pd[18];
	J[252] = -dv[4]*0.1491;
	dv[5] = -spectra2_pd[18];
	J[242] = -dv[5]*0.0601;
	dv[6] = -spectra2_pd[18];
	J[232] = -dv[6]*0.018;
	dv[7] = -spectra2_pd[18];
	J[222] = -dv[7]*0.0275;
	dv[8] = -spectra2_pd[18];
	J[212] = -dv[8]*0.0004;
	J[202] = spectra2_pd[18]*0.0318;
	dv[9] = -spectra2_pd[19];
	J[292] -= dv[9]*0.0063;
	dv[10] = -spectra2_pd[19];
	J[282] -= dv[10]*0.0754;
	dv[11] = -spectra2_pd[19];
	J[272] -= dv[11]*0.0433;
	dv[12] = -spectra2_pd[19];
	J[262] -= dv[12]*0.0032;
	dv[13] = -spectra2_pd[19];
	J[252] -= dv[13]*0.1491;
	dv[14] = -spectra2_pd[19];
	J[242] -= dv[14]*0.0601;
	dv[15] = -spectra2_pd[19];
	J[232] -= dv[15]*0.018;
	dv[16] = -spectra2_pd[19];
	J[222] -= dv[16]*0.0275;
	dv[17] = -spectra2_pd[19];
	J[212] -= dv[17]*0.0004;
	J[202] += spectra2_pd[19]*0.0318;
	dv[18] = -spectra2_pd[16];
	J[192] = -dv[18]*0.0063;
	dv[19] = -spectra2_pd[16];
	J[182] = -dv[19]*0.0754;
	dv[20] = -spectra2_pd[16];
	J[172] = -dv[20]*0.0433;
	dv[21] = -spectra2_pd[16];
	J[162] = -dv[21]*0.0032;
	dv[22] = -spectra2_pd[16];
	J[152] = -dv[22]*0.1491;
	dv[23] = -spectra2_pd[16];
	J[142] = -dv[23]*0.0601;
	dv[24] = -spectra2_pd[16];
	J[132] = -dv[24]*0.018;
	dv[25] = -spectra2_pd[16];
	J[122] = -dv[25]*0.0275;
	dv[26] = -spectra2_pd[16];
	J[112] = -dv[26]*0.0004;
	J[102] = spectra2_pd[16]*0.0318;
	dv[27] = -spectra2_pd[17];
	J[192] -= dv[27]*0.0063;
	dv[28] = -spectra2_pd[17];
	J[182] -= dv[28]*0.0754;
	dv[29] = -spectra2_pd[17];
	J[172] -= dv[29]*0.0433;
	dv[30] = -spectra2_pd[17];
	J[162] -= dv[30]*0.0032;
	dv[31] = -spectra2_pd[17];
	J[152] -= dv[31]*0.1491;
	dv[32] = -spectra2_pd[17];
	J[142] -= dv[32]*0.0601;
	dv[33] = -spectra2_pd[17];
	J[132] -= dv[33]*0.018;
	dv[34] = -spectra2_pd[17];
	J[122] -= dv[34]*0.0275;
	dv[35] = -spectra2_pd[17];
	J[112] -= dv[35]*0.0004;
	J[102] += spectra2_pd[17]*0.0318;
	dv[36] = -spectra2_pd[14];
	J[92] = -dv[36]*0.0063;
	dv[37] = -spectra2_pd[14];
	J[82] = -dv[37]*0.0754;
	dv[38] = -spectra2_pd[14];
	J[72] = -dv[38]*0.0433;
	dv[39] = -spectra2_pd[14];
	J[62] = -dv[39]*0.0032;
	dv[40] = -spectra2_pd[14];
	J[52] = -dv[40]*0.1491;
	dv[41] = -spectra2_pd[14];
	J[42] = -dv[41]*0.0601;
	dv[42] = -spectra2_pd[14];
	J[32] = -dv[42]*0.018;
	dv[43] = -spectra2_pd[14];
	J[22] = -dv[43]*0.0275;
	dv[44] = -spectra2_pd[14];
	J[12] = -dv[44]*0.0004;
	J[2] = spectra2_pd[14]*0.0318;
	dv[45] = -spectra2_pd[15];
	J[92] -= dv[45]*0.0063;
	dv[46] = -spectra2_pd[15];
	J[82] -= dv[46]*0.0754;
	dv[47] = -spectra2_pd[15];
	J[72] -= dv[47]*0.0433;
	dv[48] = -spectra2_pd[15];
	J[62] -= dv[48]*0.0032;
	dv[49] = -spectra2_pd[15];
	J[52] -= dv[49]*0.1491;
	dv[50] = -spectra2_pd[15];
	J[42] -= dv[50]*0.0601;
	dv[51] = -spectra2_pd[15];
	J[32] -= dv[51]*0.018;
	dv[52] = -spectra2_pd[15];
	J[22] -= dv[52]*0.0275;
	dv[53] = -spectra2_pd[15];
	J[12] -= dv[53]*0.0004;
	J[2] += spectra2_pd[15]*0.0318;
	J[302] = 1.;

   /*** derivatives for constraint 4 ***/

	dv[0] = -spectra2_pd[27];
	J[293] = -dv[0]*0.001;
	dv[1] = -spectra2_pd[27];
	J[283] = -dv[1]*0.1098;
	dv[2] = -spectra2_pd[27];
	J[273] = -dv[2]*0.0635;
	dv[3] = -spectra2_pd[27];
	J[263] = -dv[3]*0.0051;
	dv[4] = -spectra2_pd[27];
	J[253] = -dv[4]*0.1385;
	dv[5] = -spectra2_pd[27];
	J[243] = -dv[5]*0.0604;
	dv[6] = -spectra2_pd[27];
	J[233] = -dv[6]*0.0179;
	dv[7] = -spectra2_pd[27];
	J[223] = -dv[7]*0.0043;
	dv[8] = -spectra2_pd[27];
	J[213] = -dv[8]*0.0009;
	J[203] = spectra2_pd[27]*0.0007;
	dv[9] = -spectra2_pd[26];
	J[293] -= dv[9]*0.001;
	dv[10] = -spectra2_pd[26];
	J[283] -= dv[10]*0.1098;
	dv[11] = -spectra2_pd[26];
	J[273] -= dv[11]*0.0635;
	dv[12] = -spectra2_pd[26];
	J[263] -= dv[12]*0.0051;
	dv[13] = -spectra2_pd[26];
	J[253] -= dv[13]*0.1385;
	dv[14] = -spectra2_pd[26];
	J[243] -= dv[14]*0.0604;
	dv[15] = -spectra2_pd[26];
	J[233] -= dv[15]*0.0179;
	dv[16] = -spectra2_pd[26];
	J[223] -= dv[16]*0.0043;
	dv[17] = -spectra2_pd[26];
	J[213] -= dv[17]*0.0009;
	J[203] += spectra2_pd[26]*0.0007;
	dv[18] = -spectra2_pd[22];
	J[193] = -dv[18]*0.001;
	dv[19] = -spectra2_pd[22];
	J[183] = -dv[19]*0.1098;
	dv[20] = -spectra2_pd[22];
	J[173] = -dv[20]*0.0635;
	dv[21] = -spectra2_pd[22];
	J[163] = -dv[21]*0.0051;
	dv[22] = -spectra2_pd[22];
	J[153] = -dv[22]*0.1385;
	dv[23] = -spectra2_pd[22];
	J[143] = -dv[23]*0.0604;
	dv[24] = -spectra2_pd[22];
	J[133] = -dv[24]*0.0179;
	dv[25] = -spectra2_pd[22];
	J[123] = -dv[25]*0.0043;
	dv[26] = -spectra2_pd[22];
	J[113] = -dv[26]*0.0009;
	J[103] = spectra2_pd[22]*0.0007;
	dv[27] = -spectra2_pd[23];
	J[193] -= dv[27]*0.001;
	dv[28] = -spectra2_pd[23];
	J[183] -= dv[28]*0.1098;
	dv[29] = -spectra2_pd[23];
	J[173] -= dv[29]*0.0635;
	dv[30] = -spectra2_pd[23];
	J[163] -= dv[30]*0.0051;
	dv[31] = -spectra2_pd[23];
	J[153] -= dv[31]*0.1385;
	dv[32] = -spectra2_pd[23];
	J[143] -= dv[32]*0.0604;
	dv[33] = -spectra2_pd[23];
	J[133] -= dv[33]*0.0179;
	dv[34] = -spectra2_pd[23];
	J[123] -= dv[34]*0.0043;
	dv[35] = -spectra2_pd[23];
	J[113] -= dv[35]*0.0009;
	J[103] += spectra2_pd[23]*0.0007;
	dv[36] = -spectra2_pd[20];
	J[93] = -dv[36]*0.001;
	dv[37] = -spectra2_pd[20];
	J[83] = -dv[37]*0.1098;
	dv[38] = -spectra2_pd[20];
	J[73] = -dv[38]*0.0635;
	dv[39] = -spectra2_pd[20];
	J[63] = -dv[39]*0.0051;
	dv[40] = -spectra2_pd[20];
	J[53] = -dv[40]*0.1385;
	dv[41] = -spectra2_pd[20];
	J[43] = -dv[41]*0.0604;
	dv[42] = -spectra2_pd[20];
	J[33] = -dv[42]*0.0179;
	dv[43] = -spectra2_pd[20];
	J[23] = -dv[43]*0.0043;
	dv[44] = -spectra2_pd[20];
	J[13] = -dv[44]*0.0009;
	J[3] = spectra2_pd[20]*0.0007;
	dv[45] = -spectra2_pd[21];
	J[93] -= dv[45]*0.001;
	dv[46] = -spectra2_pd[21];
	J[83] -= dv[46]*0.1098;
	dv[47] = -spectra2_pd[21];
	J[73] -= dv[47]*0.0635;
	dv[48] = -spectra2_pd[21];
	J[63] -= dv[48]*0.0051;
	dv[49] = -spectra2_pd[21];
	J[53] -= dv[49]*0.1385;
	dv[50] = -spectra2_pd[21];
	J[43] -= dv[50]*0.0604;
	dv[51] = -spectra2_pd[21];
	J[33] -= dv[51]*0.0179;
	dv[52] = -spectra2_pd[21];
	J[23] -= dv[52]*0.0043;
	dv[53] = -spectra2_pd[21];
	J[13] -= dv[53]*0.0009;
	J[3] += spectra2_pd[21]*0.0007;
	J[303] = 1.;

   /*** derivatives for constraint 5 ***/

	dv[0] = -spectra2_pd[34];
	J[294] = -dv[0]*0.0132;
	dv[1] = -spectra2_pd[34];
	J[284] = -dv[1]*0.0038;
	dv[2] = -spectra2_pd[34];
	J[274] = -dv[2]*0.0048;
	dv[3] = -spectra2_pd[34];
	J[264] = -dv[3]*0.0015;
	dv[4] = -spectra2_pd[34];
	J[254] = -dv[4]*0.2389;
	dv[5] = -spectra2_pd[34];
	J[244] = -dv[5]*0.0981;
	dv[6] = -spectra2_pd[34];
	J[234] = -dv[6]*0.0351;
	dv[7] = -spectra2_pd[34];
	J[224] = -dv[7]*0.0704;
	dv[8] = -spectra2_pd[34];
	J[214] = -dv[8]*0.0005;
	J[204] = spectra2_pd[34]*0.0534;
	dv[9] = -spectra2_pd[35];
	J[294] -= dv[9]*0.0132;
	dv[10] = -spectra2_pd[35];
	J[284] -= dv[10]*0.0038;
	dv[11] = -spectra2_pd[35];
	J[274] -= dv[11]*0.0048;
	dv[12] = -spectra2_pd[35];
	J[264] -= dv[12]*0.0015;
	dv[13] = -spectra2_pd[35];
	J[254] -= dv[13]*0.2389;
	dv[14] = -spectra2_pd[35];
	J[244] -= dv[14]*0.0981;
	dv[15] = -spectra2_pd[35];
	J[234] -= dv[15]*0.0351;
	dv[16] = -spectra2_pd[35];
	J[224] -= dv[16]*0.0704;
	dv[17] = -spectra2_pd[35];
	J[214] -= dv[17]*0.0005;
	J[204] += spectra2_pd[35]*0.0534;
	dv[18] = -spectra2_pd[32];
	J[194] = -dv[18]*0.0132;
	dv[19] = -spectra2_pd[32];
	J[184] = -dv[19]*0.0038;
	dv[20] = -spectra2_pd[32];
	J[174] = -dv[20]*0.0048;
	dv[21] = -spectra2_pd[32];
	J[164] = -dv[21]*0.0015;
	dv[22] = -spectra2_pd[32];
	J[154] = -dv[22]*0.2389;
	dv[23] = -spectra2_pd[32];
	J[144] = -dv[23]*0.0981;
	dv[24] = -spectra2_pd[32];
	J[134] = -dv[24]*0.0351;
	dv[25] = -spectra2_pd[32];
	J[124] = -dv[25]*0.0704;
	dv[26] = -spectra2_pd[32];
	J[114] = -dv[26]*0.0005;
	J[104] = spectra2_pd[32]*0.0534;
	dv[27] = -spectra2_pd[33];
	J[194] -= dv[27]*0.0132;
	dv[28] = -spectra2_pd[33];
	J[184] -= dv[28]*0.0038;
	dv[29] = -spectra2_pd[33];
	J[174] -= dv[29]*0.0048;
	dv[30] = -spectra2_pd[33];
	J[164] -= dv[30]*0.0015;
	dv[31] = -spectra2_pd[33];
	J[154] -= dv[31]*0.2389;
	dv[32] = -spectra2_pd[33];
	J[144] -= dv[32]*0.0981;
	dv[33] = -spectra2_pd[33];
	J[134] -= dv[33]*0.0351;
	dv[34] = -spectra2_pd[33];
	J[124] -= dv[34]*0.0704;
	dv[35] = -spectra2_pd[33];
	J[114] -= dv[35]*0.0005;
	J[104] += spectra2_pd[33]*0.0534;
	dv[36] = -spectra2_pd[31];
	J[94] = -dv[36]*0.0132;
	dv[37] = -spectra2_pd[31];
	J[84] = -dv[37]*0.0038;
	dv[38] = -spectra2_pd[31];
	J[74] = -dv[38]*0.0048;
	dv[39] = -spectra2_pd[31];
	J[64] = -dv[39]*0.0015;
	dv[40] = -spectra2_pd[31];
	J[54] = -dv[40]*0.2389;
	dv[41] = -spectra2_pd[31];
	J[44] = -dv[41]*0.0981;
	dv[42] = -spectra2_pd[31];
	J[34] = -dv[42]*0.0351;
	dv[43] = -spectra2_pd[31];
	J[24] = -dv[43]*0.0704;
	dv[44] = -spectra2_pd[31];
	J[14] = -dv[44]*0.0005;
	J[4] = spectra2_pd[31]*0.0534;
	dv[45] = -spectra2_pd[30];
	J[94] -= dv[45]*0.0132;
	dv[46] = -spectra2_pd[30];
	J[84] -= dv[46]*0.0038;
	dv[47] = -spectra2_pd[30];
	J[74] -= dv[47]*0.0048;
	dv[48] = -spectra2_pd[30];
	J[64] -= dv[48]*0.0015;
	dv[49] = -spectra2_pd[30];
	J[54] -= dv[49]*0.2389;
	dv[50] = -spectra2_pd[30];
	J[44] -= dv[50]*0.0981;
	dv[51] = -spectra2_pd[30];
	J[34] -= dv[51]*0.0351;
	dv[52] = -spectra2_pd[30];
	J[24] -= dv[52]*0.0704;
	dv[53] = -spectra2_pd[30];
	J[14] -= dv[53]*0.0005;
	J[4] += spectra2_pd[30]*0.0534;
	J[304] = 1.;

   /*** derivatives for constraint 6 ***/

	dv[0] = -spectra2_pd[42];
	J[295] = -dv[0]*0.0203;
	dv[1] = -spectra2_pd[42];
	J[285] = -dv[1]*0.1443;
	dv[2] = -spectra2_pd[42];
	J[275] = -dv[2]*0.0891;
	dv[3] = -spectra2_pd[42];
	J[265] = -dv[3]*0.0094;
	dv[4] = -spectra2_pd[42];
	J[255] = -dv[4]*0.0248;
	dv[5] = -spectra2_pd[42];
	J[245] = -dv[5]*0.0025;
	dv[6] = -spectra2_pd[42];
	J[235] = -dv[6]*0.0024;
	dv[7] = -spectra2_pd[42];
	J[225] = -dv[7]*0.0683;
	dv[8] = -spectra2_pd[42];
	J[215] = -dv[8]*0.0009;
	J[205] = spectra2_pd[42]*0.0773;
	dv[9] = -spectra2_pd[43];
	J[295] -= dv[9]*0.0203;
	dv[10] = -spectra2_pd[43];
	J[285] -= dv[10]*0.1443;
	dv[11] = -spectra2_pd[43];
	J[275] -= dv[11]*0.0891;
	dv[12] = -spectra2_pd[43];
	J[265] -= dv[12]*0.0094;
	dv[13] = -spectra2_pd[43];
	J[255] -= dv[13]*0.0248;
	dv[14] = -spectra2_pd[43];
	J[245] -= dv[14]*0.0025;
	dv[15] = -spectra2_pd[43];
	J[235] -= dv[15]*0.0024;
	dv[16] = -spectra2_pd[43];
	J[225] -= dv[16]*0.0683;
	dv[17] = -spectra2_pd[43];
	J[215] -= dv[17]*0.0009;
	J[205] += spectra2_pd[43]*0.0773;
	dv[18] = -spectra2_pd[41];
	J[195] = -dv[18]*0.0203;
	dv[19] = -spectra2_pd[41];
	J[185] = -dv[19]*0.1443;
	dv[20] = -spectra2_pd[41];
	J[175] = -dv[20]*0.0891;
	dv[21] = -spectra2_pd[41];
	J[165] = -dv[21]*0.0094;
	dv[22] = -spectra2_pd[41];
	J[155] = -dv[22]*0.0248;
	dv[23] = -spectra2_pd[41];
	J[145] = -dv[23]*0.0025;
	dv[24] = -spectra2_pd[41];
	J[135] = -dv[24]*0.0024;
	dv[25] = -spectra2_pd[41];
	J[125] = -dv[25]*0.0683;
	dv[26] = -spectra2_pd[41];
	J[115] = -dv[26]*0.0009;
	J[105] = spectra2_pd[41]*0.0773;
	dv[27] = -spectra2_pd[40];
	J[195] -= dv[27]*0.0203;
	dv[28] = -spectra2_pd[40];
	J[185] -= dv[28]*0.1443;
	dv[29] = -spectra2_pd[40];
	J[175] -= dv[29]*0.0891;
	dv[30] = -spectra2_pd[40];
	J[165] -= dv[30]*0.0094;
	dv[31] = -spectra2_pd[40];
	J[155] -= dv[31]*0.0248;
	dv[32] = -spectra2_pd[40];
	J[145] -= dv[32]*0.0025;
	dv[33] = -spectra2_pd[40];
	J[135] -= dv[33]*0.0024;
	dv[34] = -spectra2_pd[40];
	J[125] -= dv[34]*0.0683;
	dv[35] = -spectra2_pd[40];
	J[115] -= dv[35]*0.0009;
	J[105] += spectra2_pd[40]*0.0773;
	dv[36] = -spectra2_pd[36];
	J[95] = -dv[36]*0.0203;
	dv[37] = -spectra2_pd[36];
	J[85] = -dv[37]*0.1443;
	dv[38] = -spectra2_pd[36];
	J[75] = -dv[38]*0.0891;
	dv[39] = -spectra2_pd[36];
	J[65] = -dv[39]*0.0094;
	dv[40] = -spectra2_pd[36];
	J[55] = -dv[40]*0.0248;
	dv[41] = -spectra2_pd[36];
	J[45] = -dv[41]*0.0025;
	dv[42] = -spectra2_pd[36];
	J[35] = -dv[42]*0.0024;
	dv[43] = -spectra2_pd[36];
	J[25] = -dv[43]*0.0683;
	dv[44] = -spectra2_pd[36];
	J[15] = -dv[44]*0.0009;
	J[5] = spectra2_pd[36]*0.0773;
	dv[45] = -spectra2_pd[37];
	J[95] -= dv[45]*0.0203;
	dv[46] = -spectra2_pd[37];
	J[85] -= dv[46]*0.1443;
	dv[47] = -spectra2_pd[37];
	J[75] -= dv[47]*0.0891;
	dv[48] = -spectra2_pd[37];
	J[65] -= dv[48]*0.0094;
	dv[49] = -spectra2_pd[37];
	J[55] -= dv[49]*0.0248;
	dv[50] = -spectra2_pd[37];
	J[45] -= dv[50]*0.0025;
	dv[51] = -spectra2_pd[37];
	J[35] -= dv[51]*0.0024;
	dv[52] = -spectra2_pd[37];
	J[25] -= dv[52]*0.0683;
	dv[53] = -spectra2_pd[37];
	J[15] -= dv[53]*0.0009;
	J[5] += spectra2_pd[37]*0.0773;
	J[305] = 1.;

   /*** derivatives for constraint 7 ***/

	dv[0] = -spectra2_pd[48];
	J[296] = -dv[0]*0.0139;
	dv[1] = -spectra2_pd[48];
	J[286] = -dv[1]*0.042;
	dv[2] = -spectra2_pd[48];
	J[276] = -dv[2]*0.0213;
	dv[3] = -spectra2_pd[48];
	J[266] = -dv[3]*0.0015;
	dv[4] = -spectra2_pd[48];
	J[256] = -dv[4]*0.1122;
	dv[5] = -spectra2_pd[48];
	J[246] = -dv[5]*0.0394;
	dv[6] = -spectra2_pd[48];
	J[236] = -dv[6]*0.0108;
	dv[7] = -spectra2_pd[48];
	J[226] = -dv[7]*0.0842;
	dv[8] = -spectra2_pd[48];
	J[216] = -dv[8]*0.0005;
	J[206] = spectra2_pd[48]*0.0536;
	dv[9] = -spectra2_pd[49];
	J[296] -= dv[9]*0.0139;
	dv[10] = -spectra2_pd[49];
	J[286] -= dv[10]*0.042;
	dv[11] = -spectra2_pd[49];
	J[276] -= dv[11]*0.0213;
	dv[12] = -spectra2_pd[49];
	J[266] -= dv[12]*0.0015;
	dv[13] = -spectra2_pd[49];
	J[256] -= dv[13]*0.1122;
	dv[14] = -spectra2_pd[49];
	J[246] -= dv[14]*0.0394;
	dv[15] = -spectra2_pd[49];
	J[236] -= dv[15]*0.0108;
	dv[16] = -spectra2_pd[49];
	J[226] -= dv[16]*0.0842;
	dv[17] = -spectra2_pd[49];
	J[216] -= dv[17]*0.0005;
	J[206] += spectra2_pd[49]*0.0536;
	dv[18] = -spectra2_pd[46];
	J[196] = -dv[18]*0.0139;
	dv[19] = -spectra2_pd[46];
	J[186] = -dv[19]*0.042;
	dv[20] = -spectra2_pd[46];
	J[176] = -dv[20]*0.0213;
	dv[21] = -spectra2_pd[46];
	J[166] = -dv[21]*0.0015;
	dv[22] = -spectra2_pd[46];
	J[156] = -dv[22]*0.1122;
	dv[23] = -spectra2_pd[46];
	J[146] = -dv[23]*0.0394;
	dv[24] = -spectra2_pd[46];
	J[136] = -dv[24]*0.0108;
	dv[25] = -spectra2_pd[46];
	J[126] = -dv[25]*0.0842;
	dv[26] = -spectra2_pd[46];
	J[116] = -dv[26]*0.0005;
	J[106] = spectra2_pd[46]*0.0536;
	dv[27] = -spectra2_pd[47];
	J[196] -= dv[27]*0.0139;
	dv[28] = -spectra2_pd[47];
	J[186] -= dv[28]*0.042;
	dv[29] = -spectra2_pd[47];
	J[176] -= dv[29]*0.0213;
	dv[30] = -spectra2_pd[47];
	J[166] -= dv[30]*0.0015;
	dv[31] = -spectra2_pd[47];
	J[156] -= dv[31]*0.1122;
	dv[32] = -spectra2_pd[47];
	J[146] -= dv[32]*0.0394;
	dv[33] = -spectra2_pd[47];
	J[136] -= dv[33]*0.0108;
	dv[34] = -spectra2_pd[47];
	J[126] -= dv[34]*0.0842;
	dv[35] = -spectra2_pd[47];
	J[116] -= dv[35]*0.0005;
	J[106] += spectra2_pd[47]*0.0536;
	dv[36] = -spectra2_pd[44];
	J[96] = -dv[36]*0.0139;
	dv[37] = -spectra2_pd[44];
	J[86] = -dv[37]*0.042;
	dv[38] = -spectra2_pd[44];
	J[76] = -dv[38]*0.0213;
	dv[39] = -spectra2_pd[44];
	J[66] = -dv[39]*0.0015;
	dv[40] = -spectra2_pd[44];
	J[56] = -dv[40]*0.1122;
	dv[41] = -spectra2_pd[44];
	J[46] = -dv[41]*0.0394;
	dv[42] = -spectra2_pd[44];
	J[36] = -dv[42]*0.0108;
	dv[43] = -spectra2_pd[44];
	J[26] = -dv[43]*0.0842;
	dv[44] = -spectra2_pd[44];
	J[16] = -dv[44]*0.0005;
	J[6] = spectra2_pd[44]*0.0536;
	dv[45] = -spectra2_pd[45];
	J[96] -= dv[45]*0.0139;
	dv[46] = -spectra2_pd[45];
	J[86] -= dv[46]*0.042;
	dv[47] = -spectra2_pd[45];
	J[76] -= dv[47]*0.0213;
	dv[48] = -spectra2_pd[45];
	J[66] -= dv[48]*0.0015;
	dv[49] = -spectra2_pd[45];
	J[56] -= dv[49]*0.1122;
	dv[50] = -spectra2_pd[45];
	J[46] -= dv[50]*0.0394;
	dv[51] = -spectra2_pd[45];
	J[36] -= dv[51]*0.0108;
	dv[52] = -spectra2_pd[45];
	J[26] -= dv[52]*0.0842;
	dv[53] = -spectra2_pd[45];
	J[16] -= dv[53]*0.0005;
	J[6] += spectra2_pd[45]*0.0536;
	J[306] = 1.;

   /*** derivatives for constraint 8 ***/

	dv[0] = -spectra2_pd[54];
	J[297] = -dv[0]*0.0057;
	dv[1] = -spectra2_pd[54];
	J[287] = -dv[1]*0.0574;
	dv[2] = -spectra2_pd[54];
	J[277] = -dv[2]*0.031;
	dv[3] = -spectra2_pd[54];
	J[267] = -dv[3]*0.0024;
	dv[4] = -spectra2_pd[54];
	J[257] = -dv[4]*0.0633;
	dv[5] = -spectra2_pd[54];
	J[247] = -dv[5]*0.0221;
	dv[6] = -spectra2_pd[54];
	J[237] = -dv[6]*0.0052;
	dv[7] = -spectra2_pd[54];
	J[227] = -dv[7]*0.0309;
	dv[8] = -spectra2_pd[54];
	J[217] = -dv[8]*0.0003;
	J[207] = spectra2_pd[54]*0.032;
	dv[9] = -spectra2_pd[55];
	J[297] -= dv[9]*0.0057;
	dv[10] = -spectra2_pd[55];
	J[287] -= dv[10]*0.0574;
	dv[11] = -spectra2_pd[55];
	J[277] -= dv[11]*0.031;
	dv[12] = -spectra2_pd[55];
	J[267] -= dv[12]*0.0024;
	dv[13] = -spectra2_pd[55];
	J[257] -= dv[13]*0.0633;
	dv[14] = -spectra2_pd[55];
	J[247] -= dv[14]*0.0221;
	dv[15] = -spectra2_pd[55];
	J[237] -= dv[15]*0.0052;
	dv[16] = -spectra2_pd[55];
	J[227] -= dv[16]*0.0309;
	dv[17] = -spectra2_pd[55];
	J[217] -= dv[17]*0.0003;
	J[207] += spectra2_pd[55]*0.032;
	dv[18] = -spectra2_pd[52];
	J[197] = -dv[18]*0.0057;
	dv[19] = -spectra2_pd[52];
	J[187] = -dv[19]*0.0574;
	dv[20] = -spectra2_pd[52];
	J[177] = -dv[20]*0.031;
	dv[21] = -spectra2_pd[52];
	J[167] = -dv[21]*0.0024;
	dv[22] = -spectra2_pd[52];
	J[157] = -dv[22]*0.0633;
	dv[23] = -spectra2_pd[52];
	J[147] = -dv[23]*0.0221;
	dv[24] = -spectra2_pd[52];
	J[137] = -dv[24]*0.0052;
	dv[25] = -spectra2_pd[52];
	J[127] = -dv[25]*0.0309;
	dv[26] = -spectra2_pd[52];
	J[117] = -dv[26]*0.0003;
	J[107] = spectra2_pd[52]*0.032;
	dv[27] = -spectra2_pd[53];
	J[197] -= dv[27]*0.0057;
	dv[28] = -spectra2_pd[53];
	J[187] -= dv[28]*0.0574;
	dv[29] = -spectra2_pd[53];
	J[177] -= dv[29]*0.031;
	dv[30] = -spectra2_pd[53];
	J[167] -= dv[30]*0.0024;
	dv[31] = -spectra2_pd[53];
	J[157] -= dv[31]*0.0633;
	dv[32] = -spectra2_pd[53];
	J[147] -= dv[32]*0.0221;
	dv[33] = -spectra2_pd[53];
	J[137] -= dv[33]*0.0052;
	dv[34] = -spectra2_pd[53];
	J[127] -= dv[34]*0.0309;
	dv[35] = -spectra2_pd[53];
	J[117] -= dv[35]*0.0003;
	J[107] += spectra2_pd[53]*0.032;
	dv[36] = -spectra2_pd[50];
	J[97] = -dv[36]*0.0057;
	dv[37] = -spectra2_pd[50];
	J[87] = -dv[37]*0.0574;
	dv[38] = -spectra2_pd[50];
	J[77] = -dv[38]*0.031;
	dv[39] = -spectra2_pd[50];
	J[67] = -dv[39]*0.0024;
	dv[40] = -spectra2_pd[50];
	J[57] = -dv[40]*0.0633;
	dv[41] = -spectra2_pd[50];
	J[47] = -dv[41]*0.0221;
	dv[42] = -spectra2_pd[50];
	J[37] = -dv[42]*0.0052;
	dv[43] = -spectra2_pd[50];
	J[27] = -dv[43]*0.0309;
	dv[44] = -spectra2_pd[50];
	J[17] = -dv[44]*0.0003;
	J[7] = spectra2_pd[50]*0.032;
	dv[45] = -spectra2_pd[51];
	J[97] -= dv[45]*0.0057;
	dv[46] = -spectra2_pd[51];
	J[87] -= dv[46]*0.0574;
	dv[47] = -spectra2_pd[51];
	J[77] -= dv[47]*0.031;
	dv[48] = -spectra2_pd[51];
	J[67] -= dv[48]*0.0024;
	dv[49] = -spectra2_pd[51];
	J[57] -= dv[49]*0.0633;
	dv[50] = -spectra2_pd[51];
	J[47] -= dv[50]*0.0221;
	dv[51] = -spectra2_pd[51];
	J[37] -= dv[51]*0.0052;
	dv[52] = -spectra2_pd[51];
	J[27] -= dv[52]*0.0309;
	dv[53] = -spectra2_pd[51];
	J[17] -= dv[53]*0.0003;
	J[7] += spectra2_pd[51]*0.032;
	J[307] = 1.;

   /*** derivatives for constraint 9 ***/

	J[8] = 1.;

   /*** derivatives for constraint 10 ***/

	J[18] = 1.;

   /*** derivatives for constraint 11 ***/

	J[28] = 1.;

   /*** derivatives for constraint 12 ***/

	J[38] = 1.;

   /*** derivatives for constraint 13 ***/

	J[48] = 1.;

   /*** derivatives for constraint 14 ***/

	J[58] = 1.;

   /*** derivatives for constraint 15 ***/

	J[68] = 1.;

   /*** derivatives for constraint 16 ***/

	J[78] = 1.;

   /*** derivatives for constraint 17 ***/

	J[88] = 1.;

   /*** derivatives for constraint 18 ***/

	J[98] = 1.;

   /*** derivatives for constraint 19 ***/

	J[108] = 1.;

   /*** derivatives for constraint 20 ***/

	J[118] = 1.;

   /*** derivatives for constraint 21 ***/

	J[128] = 1.;

   /*** derivatives for constraint 22 ***/

	J[138] = 1.;

   /*** derivatives for constraint 23 ***/

	J[148] = 1.;

   /*** derivatives for constraint 24 ***/

	J[158] = 1.;

   /*** derivatives for constraint 25 ***/

	J[168] = 1.;

   /*** derivatives for constraint 26 ***/

	J[178] = 1.;

   /*** derivatives for constraint 27 ***/

	J[188] = 1.;

   /*** derivatives for constraint 28 ***/

	J[198] = 1.;

   /*** derivatives for constraint 29 ***/

	J[208] = 1.;

   /*** derivatives for constraint 30 ***/

	J[218] = 1.;

   /*** derivatives for constraint 31 ***/

	J[228] = 1.;

   /*** derivatives for constraint 32 ***/

	J[238] = 1.;

   /*** derivatives for constraint 33 ***/

	J[248] = 1.;

   /*** derivatives for constraint 34 ***/

	J[258] = 1.;

   /*** derivatives for constraint 35 ***/

	J[268] = 1.;

   /*** derivatives for constraint 36 ***/

	J[278] = 1.;

   /*** derivatives for constraint 37 ***/

	J[288] = 1.;

   /*** derivatives for constraint 38 ***/

	J[298] = 1.;

   /*** derivatives for constraint 39 ***/

	J[9] = 1.;
	J[309] = -1000.;

   /*** derivatives for constraint 40 ***/

	J[19] = 1.;
	J[312] = -1000.;

   /*** derivatives for constraint 41 ***/

	J[29] = 1.;
	J[315] = -1000.;

   /*** derivatives for constraint 42 ***/

	J[39] = 1.;
	J[318] = -1000.;

   /*** derivatives for constraint 43 ***/

	J[49] = 1.;
	J[321] = -1000.;

   /*** derivatives for constraint 44 ***/

	J[59] = 1.;
	J[324] = -1000.;

   /*** derivatives for constraint 45 ***/

	J[69] = 1.;
	J[327] = -1000.;

   /*** derivatives for constraint 46 ***/

	J[79] = 1.;
	J[330] = -1000.;

   /*** derivatives for constraint 47 ***/

	J[89] = 1.;
	J[333] = -1000.;

   /*** derivatives for constraint 48 ***/

	J[99] = 1.;
	J[336] = -1000.;

   /*** derivatives for constraint 49 ***/

	J[109] = 1.;
	J[339] = -1000.;

   /*** derivatives for constraint 50 ***/

	J[119] = 1.;
	J[342] = -1000.;

   /*** derivatives for constraint 51 ***/

	J[129] = 1.;
	J[345] = -1000.;

   /*** derivatives for constraint 52 ***/

	J[139] = 1.;
	J[348] = -1000.;

   /*** derivatives for constraint 53 ***/

	J[149] = 1.;
	J[351] = -1000.;

   /*** derivatives for constraint 54 ***/

	J[159] = 1.;
	J[354] = -1000.;

   /*** derivatives for constraint 55 ***/

	J[169] = 1.;
	J[357] = -1000.;

   /*** derivatives for constraint 56 ***/

	J[179] = 1.;
	J[360] = -1000.;

   /*** derivatives for constraint 57 ***/

	J[189] = 1.;
	J[363] = -1000.;

   /*** derivatives for constraint 58 ***/

	J[199] = 1.;
	J[366] = -1000.;

   /*** derivatives for constraint 59 ***/

	J[209] = 1.;
	J[369] = -1000.;

   /*** derivatives for constraint 60 ***/

	J[219] = 1.;
	J[372] = -1000.;

   /*** derivatives for constraint 61 ***/

	J[229] = 1.;
	J[375] = -1000.;

   /*** derivatives for constraint 62 ***/

	J[239] = 1.;
	J[378] = -1000.;

   /*** derivatives for constraint 63 ***/

	J[249] = 1.;
	J[381] = -1000.;

   /*** derivatives for constraint 64 ***/

	J[259] = 1.;
	J[384] = -1000.;

   /*** derivatives for constraint 65 ***/

	J[269] = 1.;
	J[387] = -1000.;

   /*** derivatives for constraint 66 ***/

	J[279] = 1.;
	J[390] = -1000.;

   /*** derivatives for constraint 67 ***/

	J[289] = 1.;
	J[393] = -1000.;

   /*** derivatives for constraint 68 ***/

	J[299] = 1.;
	J[396] = -1000.;

   /*** derivatives for constraint 69 ***/

	J[310] = 1.;
	J[313] = 1.;
	J[316] = 1.;
	J[319] = 1.;
	J[322] = 1.;
	J[325] = 1.;
	J[328] = 1.;
	J[331] = 1.;
	J[334] = 1.;
	J[337] = 1.;

   /*** derivatives for constraint 70 ***/

	J[340] = 1.;
	J[343] = 1.;
	J[346] = 1.;
	J[349] = 1.;
	J[352] = 1.;
	J[355] = 1.;
	J[358] = 1.;
	J[361] = 1.;
	J[364] = 1.;
	J[367] = 1.;

   /*** derivatives for constraint 71 ***/

	J[370] = 1.;
	J[373] = 1.;
	J[376] = 1.;
	J[379] = 1.;
	J[382] = 1.;
	J[385] = 1.;
	J[388] = 1.;
	J[391] = 1.;
	J[394] = 1.;
	J[397] = 1.;

   /*** derivatives for constraint 72 ***/

	J[308] = 1.;
	J[311] = -1.;
	J[314] = -1.;
	J[317] = -1.;
	J[320] = -1.;
	J[323] = -1.;
	J[326] = -1.;
	J[329] = -1.;
	J[332] = -1.;
	J[335] = -1.;
	J[338] = -1.;
	J[341] = -1.;
	J[344] = -1.;
	J[347] = -1.;
	J[350] = -1.;
	J[353] = -1.;
	J[356] = -1.;
	J[359] = -1.;
	J[362] = -1.;
	J[365] = -1.;
	J[368] = -1.;
	J[371] = -1.;
	J[374] = -1.;
	J[377] = -1.;
	J[380] = -1.;
	J[383] = -1.;
	J[386] = -1.;
	J[389] = -1.;
	J[392] = -1.;
	J[395] = -1.;
	J[398] = -1.;
	}
}
#ifdef __cplusplus
	}
#endif
