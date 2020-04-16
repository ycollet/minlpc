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
 fint tspn05_auxcom_[1] = { 5 /* nlc */ };
 fint tspn05_funcom_[57] = {
	20 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	30 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
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
	13,
	15,
	17,
	19,
	21,
	23,
	25,
	27,
	29,
	31,

	/* rownos */
	1,
	1,
	2,
	2,
	3,
	3,
	4,
	4,
	5,
	5,
	6,
	7,
	6,
	8,
	6,
	9,
	6,
	10,
	7,
	8,
	7,
	9,
	7,
	10,
	8,
	9,
	8,
	10,
	9,
	10 };

 real tspn05_boundc_[1+40+20] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		68.,
		71.,
		65.,
		87.,
		107.,
		126.,
		38.,
		49.,
		40.,
		55.,
		54.,
		68.,
		92.,
		106.,
		113.,
		117.,
		82.,
		87.,
		76.,
		85.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		-2193.51331496786,
		-1.7e308,
		-211.938760559511,
		-1.7e308,
		-115.049886621315,
		-1.7e308,
		-3505.27040816327,
		-1.7e308,
		-1461.45234567901,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.,
		2.};

 real tspn05_x0comn_[20] = {
		68.,
		65.,
		107.,
		38.,
		40.,
		54.,
		92.,
		113.,
		82.,
		76.,
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

 static real tspn05_pd[60];
static real tspn05_old_x[20];
static int tspn05_xkind = -1;

 static int
tspn05_xcheck(real *x)
{
	real *x1 = tspn05_old_x, *xe = x + 20;
	errno = 0;
	if (tspn05_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	tspn05_xkind = 0;
	return 1;
	}
 real
tspn05_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[4], dv[20];
	fint wantfg = *needfg;
	if (tspn05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] - x[2];
	v[1] = v[0] * v[0];
	tspn05_pd[20] = v[0] + v[0];
	v[0] = x[1] - x[3];
	v[2] = v[0] * v[0];
	tspn05_pd[21] = v[0] + v[0];
	v[0] = v[1] + v[2];
	tspn05_pd[22] = sqrt(v[0]);
	if (errno) in_trouble("sqrt",v[0]);
	if (tspn05_pd[22] <= 0.) {
	domain_("sqrt'", &tspn05_pd[22], 5L);
	}
	tspn05_pd[23] = 0.5 / tspn05_pd[22];
	v[0] = tspn05_pd[22] * x[10];
	v[2] = x[0] - x[4];
	v[1] = v[2] * v[2];
	tspn05_pd[24] = v[2] + v[2];
	v[2] = x[1] - x[5];
	v[3] = v[2] * v[2];
	tspn05_pd[25] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn05_pd[26] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[26] <= 0.) {
	domain_("sqrt'", &tspn05_pd[26], 5L);
	}
	tspn05_pd[27] = 0.5 / tspn05_pd[26];
	v[2] = tspn05_pd[26] * x[11];
	v[0] += v[2];
	v[2] = x[0] - x[6];
	v[3] = v[2] * v[2];
	tspn05_pd[28] = v[2] + v[2];
	v[2] = x[1] - x[7];
	v[1] = v[2] * v[2];
	tspn05_pd[29] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn05_pd[30] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[30] <= 0.) {
	domain_("sqrt'", &tspn05_pd[30], 5L);
	}
	tspn05_pd[31] = 0.5 / tspn05_pd[30];
	v[2] = tspn05_pd[30] * x[12];
	v[0] += v[2];
	v[2] = x[0] - x[8];
	v[1] = v[2] * v[2];
	tspn05_pd[32] = v[2] + v[2];
	v[2] = x[1] - x[9];
	v[3] = v[2] * v[2];
	tspn05_pd[33] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn05_pd[34] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[34] <= 0.) {
	domain_("sqrt'", &tspn05_pd[34], 5L);
	}
	tspn05_pd[35] = 0.5 / tspn05_pd[34];
	v[2] = tspn05_pd[34] * x[13];
	v[0] += v[2];
	v[2] = x[2] - x[4];
	v[3] = v[2] * v[2];
	tspn05_pd[36] = v[2] + v[2];
	v[2] = x[3] - x[5];
	v[1] = v[2] * v[2];
	tspn05_pd[37] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn05_pd[38] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[38] <= 0.) {
	domain_("sqrt'", &tspn05_pd[38], 5L);
	}
	tspn05_pd[39] = 0.5 / tspn05_pd[38];
	v[2] = tspn05_pd[38] * x[14];
	v[0] += v[2];
	v[2] = x[2] - x[6];
	v[1] = v[2] * v[2];
	tspn05_pd[40] = v[2] + v[2];
	v[2] = x[3] - x[7];
	v[3] = v[2] * v[2];
	tspn05_pd[41] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn05_pd[42] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[42] <= 0.) {
	domain_("sqrt'", &tspn05_pd[42], 5L);
	}
	tspn05_pd[43] = 0.5 / tspn05_pd[42];
	v[2] = tspn05_pd[42] * x[15];
	v[0] += v[2];
	v[2] = x[2] - x[8];
	v[3] = v[2] * v[2];
	tspn05_pd[44] = v[2] + v[2];
	v[2] = x[3] - x[9];
	v[1] = v[2] * v[2];
	tspn05_pd[45] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn05_pd[46] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[46] <= 0.) {
	domain_("sqrt'", &tspn05_pd[46], 5L);
	}
	tspn05_pd[47] = 0.5 / tspn05_pd[46];
	v[2] = tspn05_pd[46] * x[16];
	v[0] += v[2];
	v[2] = x[4] - x[6];
	v[1] = v[2] * v[2];
	tspn05_pd[48] = v[2] + v[2];
	v[2] = x[5] - x[7];
	v[3] = v[2] * v[2];
	tspn05_pd[49] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn05_pd[50] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[50] <= 0.) {
	domain_("sqrt'", &tspn05_pd[50], 5L);
	}
	tspn05_pd[51] = 0.5 / tspn05_pd[50];
	v[2] = tspn05_pd[50] * x[17];
	v[0] += v[2];
	v[2] = x[4] - x[8];
	v[3] = v[2] * v[2];
	tspn05_pd[52] = v[2] + v[2];
	v[2] = x[5] - x[9];
	v[1] = v[2] * v[2];
	tspn05_pd[53] = v[2] + v[2];
	v[2] = v[3] + v[1];
	tspn05_pd[54] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[54] <= 0.) {
	domain_("sqrt'", &tspn05_pd[54], 5L);
	}
	tspn05_pd[55] = 0.5 / tspn05_pd[54];
	v[2] = tspn05_pd[54] * x[18];
	v[0] += v[2];
	v[2] = x[6] - x[8];
	v[1] = v[2] * v[2];
	tspn05_pd[56] = v[2] + v[2];
	v[2] = x[7] - x[9];
	v[3] = v[2] * v[2];
	tspn05_pd[57] = v[2] + v[2];
	v[2] = v[1] + v[3];
	tspn05_pd[58] = sqrt(v[2]);
	if (errno) in_trouble("sqrt",v[2]);
	if (tspn05_pd[58] <= 0.) {
	domain_("sqrt'", &tspn05_pd[58], 5L);
	}
	tspn05_pd[59] = 0.5 / tspn05_pd[58];
	v[2] = tspn05_pd[58] * x[19];
	v[0] += v[2];
	;}

	if (wantfg & 2) {
	g[19] = tspn05_pd[58];
	dv[0] = x[19]*tspn05_pd[59];
	dv[1] = dv[0];
	dv[1] *= tspn05_pd[57];
	g[9] = -dv[1];
	g[7] = dv[1];
	dv[0] *= tspn05_pd[56];
	g[8] = -dv[0];
	g[6] = dv[0];
	g[18] = tspn05_pd[54];
	dv[2] = x[18]*tspn05_pd[55];
	dv[3] = dv[2];
	dv[3] *= tspn05_pd[53];
	g[9] -= dv[3];
	g[5] = dv[3];
	dv[2] *= tspn05_pd[52];
	g[8] -= dv[2];
	g[4] = dv[2];
	g[17] = tspn05_pd[50];
	dv[4] = x[17]*tspn05_pd[51];
	dv[5] = dv[4];
	dv[5] *= tspn05_pd[49];
	g[7] -= dv[5];
	g[5] += dv[5];
	dv[4] *= tspn05_pd[48];
	g[6] -= dv[4];
	g[4] += dv[4];
	g[16] = tspn05_pd[46];
	dv[6] = x[16]*tspn05_pd[47];
	dv[7] = dv[6];
	dv[7] *= tspn05_pd[45];
	g[9] -= dv[7];
	g[3] = dv[7];
	dv[6] *= tspn05_pd[44];
	g[8] -= dv[6];
	g[2] = dv[6];
	g[15] = tspn05_pd[42];
	dv[8] = x[15]*tspn05_pd[43];
	dv[9] = dv[8];
	dv[9] *= tspn05_pd[41];
	g[7] -= dv[9];
	g[3] += dv[9];
	dv[8] *= tspn05_pd[40];
	g[6] -= dv[8];
	g[2] += dv[8];
	g[14] = tspn05_pd[38];
	dv[10] = x[14]*tspn05_pd[39];
	dv[11] = dv[10];
	dv[11] *= tspn05_pd[37];
	g[5] -= dv[11];
	g[3] += dv[11];
	dv[10] *= tspn05_pd[36];
	g[4] -= dv[10];
	g[2] += dv[10];
	g[13] = tspn05_pd[34];
	dv[12] = x[13]*tspn05_pd[35];
	dv[13] = dv[12];
	dv[13] *= tspn05_pd[33];
	g[9] -= dv[13];
	g[1] = dv[13];
	dv[12] *= tspn05_pd[32];
	g[8] -= dv[12];
	g[0] = dv[12];
	g[12] = tspn05_pd[30];
	dv[14] = x[12]*tspn05_pd[31];
	dv[15] = dv[14];
	dv[15] *= tspn05_pd[29];
	g[7] -= dv[15];
	g[1] += dv[15];
	dv[14] *= tspn05_pd[28];
	g[6] -= dv[14];
	g[0] += dv[14];
	g[11] = tspn05_pd[26];
	dv[16] = x[11]*tspn05_pd[27];
	dv[17] = dv[16];
	dv[17] *= tspn05_pd[25];
	g[5] -= dv[17];
	g[1] += dv[17];
	dv[16] *= tspn05_pd[24];
	g[4] -= dv[16];
	g[0] += dv[16];
	g[10] = tspn05_pd[22];
	dv[18] = x[10]*tspn05_pd[23];
	dv[19] = dv[18];
	dv[19] *= tspn05_pd[21];
	g[3] -= dv[19];
	g[1] += dv[19];
	dv[18] *= tspn05_pd[20];
	g[2] -= dv[18];
	g[0] += dv[18];
	}

	return v[0];
}

 void
tspn05_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	real t1;
	fint wantfg = *needfg;
	if (tspn05_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	tspn05_pd[0] = x[0] * x[0];
	tspn05_pd[1] = x[0] + x[0];
	v[0] = 0.444444444444444 * tspn05_pd[0];
	tspn05_pd[2] = x[1] * x[1];
	tspn05_pd[3] = x[1] + x[1];
	v[1] = 0.00826446280991736 * tspn05_pd[2];
	v[2] = v[0] + v[1];
	t1 = v[2] + -61.7777777777778*x[0];
	t1 += -1.25619834710744*x[1];
	c[0] = t1;

  /***  constraint 2  ***/

	tspn05_pd[4] = x[2] * x[2];
	tspn05_pd[5] = x[2] + x[2];
	v[0] = 0.0110803324099723 * tspn05_pd[4];
	tspn05_pd[6] = x[3] * x[3];
	tspn05_pd[7] = x[3] + x[3];
	v[1] = 0.0330578512396694 * tspn05_pd[6];
	v[2] = v[0] + v[1];
	t1 = v[2] + -2.58171745152355*x[2];
	t1 += -2.87603305785124*x[3];
	c[1] = t1;

  /***  constraint 3  ***/

	tspn05_pd[8] = x[4] * x[4];
	tspn05_pd[9] = x[4] + x[4];
	v[0] = 0.0177777777777778 * tspn05_pd[8];
	tspn05_pd[10] = x[5] * x[5];
	tspn05_pd[11] = x[5] + x[5];
	v[1] = 0.0204081632653061 * tspn05_pd[10];
	v[2] = v[0] + v[1];
	t1 = v[2] + -1.68888888888889*x[4];
	t1 += -2.48979591836735*x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	tspn05_pd[12] = x[6] * x[6];
	tspn05_pd[13] = x[6] + x[6];
	v[0] = 0.0204081632653061 * tspn05_pd[12];
	tspn05_pd[14] = x[7] * x[7];
	tspn05_pd[15] = x[7] + x[7];
	v[1] = 0.25 * tspn05_pd[14];
	v[2] = v[0] + v[1];
	t1 = v[2] + -4.04081632653061*x[6];
	t1 += -57.5*x[7];
	c[3] = t1;

  /***  constraint 5  ***/

	tspn05_pd[16] = x[8] * x[8];
	tspn05_pd[17] = x[8] + x[8];
	v[0] = 0.16 * tspn05_pd[16];
	tspn05_pd[18] = x[9] * x[9];
	tspn05_pd[19] = x[9] + x[9];
	v[1] = 0.0493827160493827 * tspn05_pd[18];
	v[2] = v[0] + v[1];
	t1 = v[2] + -27.04*x[8];
	t1 += -7.95061728395062*x[9];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[10];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[11];
	t1 += x[14];
	t1 += x[17];
	t1 += x[18];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[12];
	t1 += x[15];
	t1 += x[17];
	t1 += x[19];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[13];
	t1 += x[16];
	t1 += x[18];
	t1 += x[19];
	c[9] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[1] = 0.00826446280991736*tspn05_pd[3] + -1.25619834710744;
	J[0] = 0.444444444444444*tspn05_pd[1] + -61.7777777777778;

   /*** derivatives for constraint 2 ***/

	J[3] = 0.0330578512396694*tspn05_pd[7] + -2.87603305785124;
	J[2] = 0.0110803324099723*tspn05_pd[5] + -2.58171745152355;

   /*** derivatives for constraint 3 ***/

	J[5] = 0.0204081632653061*tspn05_pd[11] + -2.48979591836735;
	J[4] = 0.0177777777777778*tspn05_pd[9] + -1.68888888888889;

   /*** derivatives for constraint 4 ***/

	J[7] = 0.25*tspn05_pd[15] + -57.5;
	J[6] = 0.0204081632653061*tspn05_pd[13] + -4.04081632653061;

   /*** derivatives for constraint 5 ***/

	J[9] = 0.0493827160493827*tspn05_pd[19] + -7.95061728395062;
	J[8] = 0.16*tspn05_pd[17] + -27.04;

   /*** derivatives for constraint 6 ***/

	J[10] = 1.;
	J[12] = 1.;
	J[14] = 1.;
	J[16] = 1.;

   /*** derivatives for constraint 7 ***/

	J[11] = 1.;
	J[18] = 1.;
	J[20] = 1.;
	J[22] = 1.;

   /*** derivatives for constraint 8 ***/

	J[13] = 1.;
	J[19] = 1.;
	J[24] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 9 ***/

	J[15] = 1.;
	J[21] = 1.;
	J[25] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 10 ***/

	J[17] = 1.;
	J[23] = 1.;
	J[27] = 1.;
	J[29] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
