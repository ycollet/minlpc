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
 fint fac1_auxcom_[1] = { 0 /* nlc */ };
 fint fac1_funcom_[85] = {
	22 /* nvar */,
	1 /* nobj */,
	18 /* ncon */,
	56 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	3,
	5,
	7,
	9,
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
	33,
	38,
	43,
	48,
	53,
	55,
	57,

	/* rownos */
	1,
	5,
	2,
	6,
	1,
	7,
	2,
	8,
	1,
	9,
	2,
	10,
	1,
	11,
	2,
	12,
	3,
	5,
	4,
	6,
	3,
	7,
	4,
	8,
	3,
	9,
	4,
	10,
	3,
	11,
	4,
	12,
	5,
	6,
	13,
	15,
	17,
	7,
	8,
	13,
	15,
	18,
	9,
	10,
	14,
	16,
	17,
	11,
	12,
	14,
	16,
	18,
	13,
	15,
	14,
	16 };

 real fac1_boundc_[1+44+36] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		300.,
		0.,
		1.,
		0.,
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
		100.,
		-1.7e308,
		200.,
		-1.7e308,
		150.,
		-1.7e308,
		120.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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
		0.,
		1.7e308,
		0.,
		1.7e308,
		1.,
		1.,
		1.,
		1.};

 real fac1_x0comn_[22] = {
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
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

 static real fac1_pd[2];
static real fac1_old_x[22];
static int fac1_xkind = -1;

 static int
fac1_xcheck(real *x)
{
	real *x1 = fac1_old_x, *xe = x + 22;
	errno = 0;
	if (fac1_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	fac1_xkind = 0;
	return 1;
	}
 real
fac1_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[2], rv;
	fint wantfg = *needfg;
	if (fac1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = x[0] + x[1];
	v[0] += x[2];
	v[0] += x[3];
	v[0] += x[8];
	v[0] += x[9];
	v[0] += x[10];
	v[0] += x[11];
	v[1] = pow(v[0], 2.5);
	if (errno) in_trouble2("pow",v[0],2.5);
	if (v[0] > 0.) {
	fac1_pd[0] = 2.5*(v[1]/v[0]);
	} else if (2.5 > 1.) {
	fac1_pd[0] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],2.5);
	}
	v[1] *= 50.;
	v[0] = x[4] + x[5];
	v[0] += x[6];
	v[0] += x[7];
	v[0] += x[12];
	v[0] += x[13];
	v[0] += x[14];
	v[0] += x[15];
	v[2] = pow(v[0], 2.5);
	if (errno) in_trouble2("pow",v[0],2.5);
	if (v[0] > 0.) {
	fac1_pd[1] = 2.5*(v[2]/v[0]);
	} else if (2.5 > 1.) {
	fac1_pd[1] = 0.;
	} else {
	if (errno) in_trouble2("pow'",v[0],2.5);
	}
	v[2] *= 70.;
	v[0] = v[1] + v[2];
	rv = v[0] + 10.*x[0];
	rv += 15.*x[1];
	rv += 20.*x[2];
	rv += 10.*x[3];
	rv += 5.*x[4];
	rv += 5.*x[5];
	rv += 30.*x[6];
	rv += 10.*x[7];
	rv += 25.*x[8];
	rv += 20.*x[9];
	rv += 15.*x[10];
	rv += 20.*x[11];
	rv += 30.*x[12];
	rv += 10.*x[13];
	rv += 10.*x[14];
	rv += 30.*x[15];
	rv += 2000.*x[20];
	rv += 2500.*x[21];
	;}

	if (wantfg & 2) {
	dv[0] = 70.*fac1_pd[1];
	g[15] = dv[0] + 30.;
	g[14] = dv[0] + 10.;
	g[13] = dv[0] + 10.;
	g[12] = dv[0] + 30.;
	g[7] = dv[0] + 10.;
	g[6] = dv[0] + 30.;
	g[5] = dv[0] + 5.;
	g[4] = dv[0] + 5.;
	dv[1] = 50.*fac1_pd[0];
	g[11] = dv[1] + 20.;
	g[10] = dv[1] + 15.;
	g[9] = dv[1] + 20.;
	g[8] = dv[1] + 25.;
	g[3] = dv[1] + 10.;
	g[2] = dv[1] + 20.;
	g[1] = dv[1] + 15.;
	g[0] = dv[1] + 10.;
	g[20] = 2000.;
	g[21] = 2500.;
	}

	return rv;
}

 void
fac1_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (fac1_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[2];
	t1 += x[4];
	t1 += x[6];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[1];
	t1 += x[3];
	t1 += x[5];
	t1 += x[7];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[8];
	t1 += x[10];
	t1 += x[12];
	t1 += x[14];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[9];
	t1 += x[11];
	t1 += x[13];
	t1 += x[15];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[0];
	t1 += x[8];
	t1 += -120.*x[16];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[1];
	t1 += x[9];
	t1 += -140.*x[16];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[2];
	t1 += x[10];
	t1 += -130.*x[17];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[3];
	t1 += x[11];
	t1 += -180.*x[17];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[4];
	t1 += x[12];
	t1 += -120.*x[18];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[5];
	t1 += x[13];
	t1 += -140.*x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[6];
	t1 += x[14];
	t1 += -130.*x[19];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[7];
	t1 += x[15];
	t1 += -180.*x[19];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = 260.*x[16];
	t1 += 310.*x[17];
	t1 += -2500.*x[20];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = 260.*x[18];
	t1 += 310.*x[19];
	t1 += -3200.*x[21];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = 260.*x[16];
	t1 += 310.*x[17];
	t1 += -50.*x[20];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = 260.*x[18];
	t1 += 310.*x[19];
	t1 += -50.*x[21];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = x[16];
	t1 += x[18];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = x[17];
	t1 += x[19];
	c[17] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[4] = 1.;
	J[8] = 1.;
	J[12] = 1.;

   /*** derivatives for constraint 2 ***/

	J[2] = 1.;
	J[6] = 1.;
	J[10] = 1.;
	J[14] = 1.;

   /*** derivatives for constraint 3 ***/

	J[16] = 1.;
	J[20] = 1.;
	J[24] = 1.;
	J[28] = 1.;

   /*** derivatives for constraint 4 ***/

	J[18] = 1.;
	J[22] = 1.;
	J[26] = 1.;
	J[30] = 1.;

   /*** derivatives for constraint 5 ***/

	J[1] = 1.;
	J[17] = 1.;
	J[32] = -120.;

   /*** derivatives for constraint 6 ***/

	J[3] = 1.;
	J[19] = 1.;
	J[33] = -140.;

   /*** derivatives for constraint 7 ***/

	J[5] = 1.;
	J[21] = 1.;
	J[37] = -130.;

   /*** derivatives for constraint 8 ***/

	J[7] = 1.;
	J[23] = 1.;
	J[38] = -180.;

   /*** derivatives for constraint 9 ***/

	J[9] = 1.;
	J[25] = 1.;
	J[42] = -120.;

   /*** derivatives for constraint 10 ***/

	J[11] = 1.;
	J[27] = 1.;
	J[43] = -140.;

   /*** derivatives for constraint 11 ***/

	J[13] = 1.;
	J[29] = 1.;
	J[47] = -130.;

   /*** derivatives for constraint 12 ***/

	J[15] = 1.;
	J[31] = 1.;
	J[48] = -180.;

   /*** derivatives for constraint 13 ***/

	J[34] = 260.;
	J[39] = 310.;
	J[52] = -2500.;

   /*** derivatives for constraint 14 ***/

	J[44] = 260.;
	J[49] = 310.;
	J[54] = -3200.;

   /*** derivatives for constraint 15 ***/

	J[35] = 260.;
	J[40] = 310.;
	J[53] = -50.;

   /*** derivatives for constraint 16 ***/

	J[45] = 260.;
	J[50] = 310.;
	J[55] = -50.;

   /*** derivatives for constraint 17 ***/

	J[36] = 1.;
	J[46] = 1.;

   /*** derivatives for constraint 18 ***/

	J[41] = 1.;
	J[51] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
