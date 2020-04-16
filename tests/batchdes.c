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
 fint batchdes_auxcom_[1] = { 1 /* nlc */ };
 fint batchdes_funcom_[72] = {
	19 /* nvar */,
	1 /* nobj */,
	19 /* ncon */,
	46 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	5,
	9,
	13,
	17,
	19,
	21,
	23,
	26,
	29,
	32,
	33,
	34,
	35,
	37,
	39,
	41,
	43,
	45,
	47,

	/* rownos */
	1,
	2,
	3,
	4,
	1,
	5,
	6,
	7,
	1,
	8,
	9,
	10,
	1,
	11,
	12,
	13,
	2,
	5,
	3,
	6,
	4,
	7,
	8,
	11,
	14,
	9,
	12,
	15,
	10,
	13,
	16,
	17,
	18,
	19,
	14,
	17,
	15,
	18,
	16,
	19,
	14,
	17,
	15,
	18,
	16,
	19 };

 real batchdes_boundc_[1+38+38] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		5.40367788220586,
		6.4377516497364,
		4.60517018598809,
		6.03228654162824,
		1.89711998488588,
		2.99573227355399,
		1.38629436111989,
		2.484906649788,
		5.52146091786225,
		7.82404601085629,
		5.52146091786225,
		7.82404601085629,
		5.52146091786225,
		7.82404601085629,
		0.,
		1.09861228866811,
		0.,
		1.09861228866811,
		0.,
		1.09861228866811,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
		1.,
		0.,
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
		6000.,
		0.693147180559945,
		1.7e308,
		1.09861228866811,
		1.7e308,
		1.38629436111989,
		1.7e308,
		1.38629436111989,
		1.7e308,
		1.79175946922805,
		1.7e308,
		1.09861228866811,
		1.7e308,
		2.07944154167984,
		1.7e308,
		2.99573227355399,
		1.7e308,
		1.38629436111989,
		1.7e308,
		2.30258509299405,
		1.7e308,
		2.484906649788,
		1.7e308,
		1.09861228866811,
		1.7e308,
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
		1.};

 real batchdes_x0comn_[19] = {
		5.92071476597113,
		5.31872836380816,
		1.89711998488588,
		1.38629436111989,
		6.70502272492805,
		7.11048783303622,
		7.30700912709102,
		0.,
		0.,
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

 static real batchdes_pd[10];
static real batchdes_old_x[19];
static int batchdes_xkind = -1;

 static int
batchdes_xcheck(real *x)
{
	real *x1 = batchdes_old_x, *xe = x + 19;
	errno = 0;
	if (batchdes_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	batchdes_xkind = 0;
	return 1;
	}
 real
batchdes_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[3];
	fint wantfg = *needfg;
	if (batchdes_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 0.6 * x[4];
	v[1] = v[0] + x[7];
	batchdes_pd[4] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	batchdes_pd[5] = batchdes_pd[4];
	v[1] = 250. * batchdes_pd[4];
	v[0] = 0.6 * x[5];
	v[2] = v[0] + x[8];
	batchdes_pd[6] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	batchdes_pd[7] = batchdes_pd[6];
	v[2] = 500. * batchdes_pd[6];
	v[1] += v[2];
	v[2] = 0.6 * x[6];
	v[0] = v[2] + x[9];
	batchdes_pd[8] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	batchdes_pd[9] = batchdes_pd[8];
	v[0] = 340. * batchdes_pd[8];
	v[1] += v[0];
	;}

	if (wantfg & 2) {
	dv[0] = 340.*batchdes_pd[9];
	g[9] = dv[0];
	g[6] = dv[0]*0.6;
	dv[1] = 500.*batchdes_pd[7];
	g[8] = dv[1];
	g[5] = dv[1]*0.6;
	dv[2] = 250.*batchdes_pd[5];
	g[7] = dv[2];
	g[4] = dv[2]*0.6;
	}

	return v[1];
}

 void
batchdes_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3], dv[2];
	real t1;
	fint wantfg = *needfg;
	if (batchdes_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[2] - x[0];
	batchdes_pd[0] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	batchdes_pd[1] = batchdes_pd[0];
	v[0] = 200000. * batchdes_pd[0];
	v[1] = x[3] - x[1];
	batchdes_pd[2] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	batchdes_pd[3] = batchdes_pd[2];
	v[1] = 150000. * batchdes_pd[2];
	v[2] = v[0] + v[1];
	c[0] = v[2];

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[0];
	t1 += x[5];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += x[6];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[1];
	t1 += x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[1];
	t1 += x[5];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[1];
	t1 += x[6];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[2];
	t1 += x[7];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[2];
	t1 += x[8];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[2];
	t1 += x[9];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[3];
	t1 += x[7];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[3];
	t1 += x[8];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = x[3];
	t1 += x[9];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = x[7];
	t1 += -0.693147180559945*x[13];
	t1 += -1.09861228866811*x[16];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = x[8];
	t1 += -0.693147180559945*x[14];
	t1 += -1.09861228866811*x[17];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = x[9];
	t1 += -0.693147180559945*x[15];
	t1 += -1.09861228866811*x[18];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[10];
	t1 += x[13];
	t1 += x[16];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[11];
	t1 += x[14];
	t1 += x[17];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = x[12];
	t1 += x[15];
	t1 += x[18];
	c[18] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = 150000.*batchdes_pd[3];
	J[4] = -dv[0];
	J[12] = dv[0];
	dv[1] = 200000.*batchdes_pd[1];
	J[0] = -dv[1];
	J[8] = dv[1];

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[16] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -1.;
	J[18] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[20] = 1.;

   /*** derivatives for constraint 5 ***/

	J[5] = -1.;
	J[17] = 1.;

   /*** derivatives for constraint 6 ***/

	J[6] = -1.;
	J[19] = 1.;

   /*** derivatives for constraint 7 ***/

	J[7] = -1.;
	J[21] = 1.;

   /*** derivatives for constraint 8 ***/

	J[9] = 1.;
	J[22] = 1.;

   /*** derivatives for constraint 9 ***/

	J[10] = 1.;
	J[25] = 1.;

   /*** derivatives for constraint 10 ***/

	J[11] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 11 ***/

	J[13] = 1.;
	J[23] = 1.;

   /*** derivatives for constraint 12 ***/

	J[14] = 1.;
	J[26] = 1.;

   /*** derivatives for constraint 13 ***/

	J[15] = 1.;
	J[29] = 1.;

   /*** derivatives for constraint 14 ***/

	J[24] = 1.;
	J[34] = -0.693147180559945;
	J[40] = -1.09861228866811;

   /*** derivatives for constraint 15 ***/

	J[27] = 1.;
	J[36] = -0.693147180559945;
	J[42] = -1.09861228866811;

   /*** derivatives for constraint 16 ***/

	J[30] = 1.;
	J[38] = -0.693147180559945;
	J[44] = -1.09861228866811;

   /*** derivatives for constraint 17 ***/

	J[31] = 1.;
	J[35] = 1.;
	J[41] = 1.;

   /*** derivatives for constraint 18 ***/

	J[32] = 1.;
	J[37] = 1.;
	J[43] = 1.;

   /*** derivatives for constraint 19 ***/

	J[33] = 1.;
	J[39] = 1.;
	J[45] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
