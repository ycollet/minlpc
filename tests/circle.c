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
 fint circle_auxcom_[1] = { 10 /* nlc */ };
 fint circle_funcom_[40] = {
	3 /* nvar */,
	1 /* nobj */,
	10 /* ncon */,
	30 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	11,
	21,
	31,

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
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10 };

 real circle_boundc_[1+6+20] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-1.7e308,
		1.7e308,
		-1.7e308,
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
		0.};

 real circle_x0comn_[3] = {
		5.155228315,
		5.793541075,
		5.49209550544626 };

 static real circle_pd[30];
static real circle_old_x[3];
static int circle_xkind = -1;

 static int
circle_xcheck(real *x)
{
	real *x1 = circle_old_x, *xe = x + 3;
	errno = 0;
	if (circle_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	circle_xkind = 0;
	return 1;
	}
 real
circle_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real rv;
	fint wantfg = *needfg;
	if (circle_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	rv = x[2];
	;}

	if (wantfg & 2) {
	g[2] = 1.;
	}

	return rv;
}

 void
circle_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[3];
	fint wantfg = *needfg;
	if (circle_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = 2.545724188 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[0] = v[0] + v[0];
	v[0] = 9.983058643 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[1] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[2] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[0] = v[1];

  /***  constraint 2  ***/

	v[0] = 8.589400372 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[3] = v[0] + v[0];
	v[0] = 6.208600402 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[4] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[5] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[1] = v[1];

  /***  constraint 3  ***/

	v[0] = 5.953378204 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[6] = v[0] + v[0];
	v[0] = 9.920197351 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[7] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[8] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[2] = v[1];

  /***  constraint 4  ***/

	v[0] = 3.710241136 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[9] = v[0] + v[0];
	v[0] = 7.860254203 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[10] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[11] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[3] = v[1];

  /***  constraint 5  ***/

	v[0] = 3.629909053 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[12] = v[0] + v[0];
	v[0] = 2.176232347 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[13] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[14] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[4] = v[1];

  /***  constraint 6  ***/

	v[0] = 3.016475803 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[15] = v[0] + v[0];
	v[0] = 6.757468831 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[16] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[17] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[5] = v[1];

  /***  constraint 7  ***/

	v[0] = 4.148474536 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[18] = v[0] + v[0];
	v[0] = 2.435660776 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[19] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[20] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[6] = v[1];

  /***  constraint 8  ***/

	v[0] = 8.706433123 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[21] = v[0] + v[0];
	v[0] = 3.250724797 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[22] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[23] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[7] = v[1];

  /***  constraint 9  ***/

	v[0] = 1.604023507 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[24] = v[0] + v[0];
	v[0] = 7.020357481 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[25] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[26] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[8] = v[1];

  /***  constraint 10  ***/

	v[0] = 5.501896021 - x[0];
	v[1] = v[0] * v[0];
	circle_pd[27] = v[0] + v[0];
	v[0] = 4.918207429 - x[1];
	v[2] = v[0] * v[0];
	circle_pd[28] = v[0] + v[0];
	v[1] += v[2];
	v[2] = x[2] * x[2];
	circle_pd[29] = x[2] + x[2];
	v[0] = -v[2];
	v[1] += v[0];
	c[9] = v[1];
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[20] = -circle_pd[2];
	J[10] = -circle_pd[1];
	J[0] = -circle_pd[0];

   /*** derivatives for constraint 2 ***/

	J[21] = -circle_pd[5];
	J[11] = -circle_pd[4];
	J[1] = -circle_pd[3];

   /*** derivatives for constraint 3 ***/

	J[22] = -circle_pd[8];
	J[12] = -circle_pd[7];
	J[2] = -circle_pd[6];

   /*** derivatives for constraint 4 ***/

	J[23] = -circle_pd[11];
	J[13] = -circle_pd[10];
	J[3] = -circle_pd[9];

   /*** derivatives for constraint 5 ***/

	J[24] = -circle_pd[14];
	J[14] = -circle_pd[13];
	J[4] = -circle_pd[12];

   /*** derivatives for constraint 6 ***/

	J[25] = -circle_pd[17];
	J[15] = -circle_pd[16];
	J[5] = -circle_pd[15];

   /*** derivatives for constraint 7 ***/

	J[26] = -circle_pd[20];
	J[16] = -circle_pd[19];
	J[6] = -circle_pd[18];

   /*** derivatives for constraint 8 ***/

	J[27] = -circle_pd[23];
	J[17] = -circle_pd[22];
	J[7] = -circle_pd[21];

   /*** derivatives for constraint 9 ***/

	J[28] = -circle_pd[26];
	J[18] = -circle_pd[25];
	J[8] = -circle_pd[24];

   /*** derivatives for constraint 10 ***/

	J[29] = -circle_pd[29];
	J[19] = -circle_pd[28];
	J[9] = -circle_pd[27];
	}
}
#ifdef __cplusplus
	}
#endif
