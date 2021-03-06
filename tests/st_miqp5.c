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
 fint st_miqp5_auxcom_[1] = { 0 /* nlc */ };
 fint st_miqp5_funcom_[83] = {
	7 /* nvar */,
	1 /* nobj */,
	13 /* ncon */,
	69 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	14,
	27,
	40,
	53,
	66,
	68,
	70,

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
	10,
	11,
	12,
	13 };

 real st_miqp5_boundc_[1+14+26] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		-8.75189948987,
		14.5864991498,
		8.98296319621e-17,
		19.4187214575,
		-7.24380468458,
		22.6826188429,
		-6.0023781122,
		3.80464419615,
		-0.797166188733,
		11.5189336042,
		0.,
		1.,
		0.,
		1.,
		-1.7e308,
		60.,
		-1.7e308,
		60.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
		-1.7e308,
		0.,
		-1.7e308,
		1.,
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
		0.};

 real st_miqp5_x0comn_[7] = {
		0.,
		8.98296319621e-17,
		0.,
		0.,
		0.,
		0.,
		0. };

 static real st_miqp5_pd[2];
static real st_miqp5_old_x[7];
static int st_miqp5_xkind = -1;

 static int
st_miqp5_xcheck(real *x)
{
	real *x1 = st_miqp5_old_x, *xe = x + 7;
	errno = 0;
	if (st_miqp5_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	st_miqp5_xkind = 0;
	return 1;
	}
 real
st_miqp5_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], rv;
	fint wantfg = *needfg;
	if (st_miqp5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	st_miqp5_pd[0] = 5. * x[0];
	v[0] = st_miqp5_pd[0] * x[0];
	st_miqp5_pd[1] = 52. * x[1];
	v[1] = st_miqp5_pd[1] * x[1];
	v[2] = v[0] + v[1];
	rv = v[2] + -0.875189948987*x[0];
	rv += -192.710582631*x[1];
	rv += -54.0615511462*x[2];
	rv += -45.2691026456*x[3];
	rv += -33.0896119339*x[4];
	;}

	if (wantfg & 2) {
	g[1] = st_miqp5_pd[1] + -192.710582631;
	g[1] += x[1]*52.;
	g[0] = st_miqp5_pd[0] + -0.875189948987;
	g[0] += x[0]*5.;
	g[2] = -54.0615511462;
	g[3] = -45.2691026456;
	g[4] = -33.0896119339;
	}

	return rv;
}

 void
st_miqp5_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (st_miqp5_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = 0.729324957489*x[0];
	t1 += 3.8837442915*x[1];
	t1 += -1.93414531698*x[2];
	t1 += 1.80314509442*x[3];
	t1 += 2.89695789508*x[4];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = 2.62556984696*x[0];
	t1 += 4.85468036438*x[1];
	t1 += -1.13150591228*x[2];
	t1 += 1.10500971967*x[3];
	t1 += -1.01838569726*x[4];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -0.291729982996*x[0];
	t1 += -0.222506183367*x[1];
	t1 += -0.0524800119769*x[2];
	t1 += -0.904837825133*x[3];
	t1 += 0.209520819817*x[4];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = 0.291729982996*x[0];
	t1 += 0.222506183367*x[1];
	t1 += 0.0524800119769*x[2];
	t1 += 0.904837825133*x[3];
	t1 += -0.209520819817*x[4];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -0.145864991498*x[0];
	t1 += -0.586607210695*x[1];
	t1 += 0.445391966818*x[2];
	t1 += 0.301519984248*x[3];
	t1 += 0.587645368916*x[4];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = 0.145864991498*x[0];
	t1 += 0.586607210695*x[1];
	t1 += -0.445391966818*x[2];
	t1 += -0.301519984248*x[3];
	t1 += -0.587645368916*x[4];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -0.583459965992*x[0];
	t1 += 0.505695871289*x[1];
	t1 += -0.328188665272*x[2];
	t1 += 0.199986646277*x[3];
	t1 += 0.506106406938*x[4];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = 0.729324957489*x[0];
	t1 += 0.0809113394063*x[1];
	t1 += -0.345682002598*x[2];
	t1 += -0.101625962101*x[3];
	t1 += 0.57594668021*x[4];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = 0.145864991498*x[0];
	t1 += 0.586607210695*x[1];
	t1 += 0.756087294764*x[2];
	t1 += -0.200079270407*x[3];
	t1 += 0.151379235251*x[4];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = 0.291729982996*x[0];
	t1 += 0.222506183367*x[1];
	t1 += 0.0524800119769*x[2];
	t1 += 0.904837825133*x[3];
	t1 += -0.209520819817*x[4];
	t1 += -x[5];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -0.291729982996*x[0];
	t1 += -0.222506183367*x[1];
	t1 += -0.0524800119769*x[2];
	t1 += -0.904837825133*x[3];
	t1 += 0.209520819817*x[4];
	t1 += x[5];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = 0.145864991498*x[0];
	t1 += 0.586607210695*x[1];
	t1 += -0.445391966818*x[2];
	t1 += -0.301519984248*x[3];
	t1 += -0.587645368916*x[4];
	t1 += -x[6];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -0.145864991498*x[0];
	t1 += -0.586607210695*x[1];
	t1 += 0.445391966818*x[2];
	t1 += 0.301519984248*x[3];
	t1 += 0.587645368916*x[4];
	t1 += x[6];
	c[12] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 0.729324957489;
	J[13] = 3.8837442915;
	J[26] = -1.93414531698;
	J[39] = 1.80314509442;
	J[52] = 2.89695789508;

   /*** derivatives for constraint 2 ***/

	J[1] = 2.62556984696;
	J[14] = 4.85468036438;
	J[27] = -1.13150591228;
	J[40] = 1.10500971967;
	J[53] = -1.01838569726;

   /*** derivatives for constraint 3 ***/

	J[2] = -0.291729982996;
	J[15] = -0.222506183367;
	J[28] = -0.0524800119769;
	J[41] = -0.904837825133;
	J[54] = 0.209520819817;

   /*** derivatives for constraint 4 ***/

	J[3] = 0.291729982996;
	J[16] = 0.222506183367;
	J[29] = 0.0524800119769;
	J[42] = 0.904837825133;
	J[55] = -0.209520819817;

   /*** derivatives for constraint 5 ***/

	J[4] = -0.145864991498;
	J[17] = -0.586607210695;
	J[30] = 0.445391966818;
	J[43] = 0.301519984248;
	J[56] = 0.587645368916;

   /*** derivatives for constraint 6 ***/

	J[5] = 0.145864991498;
	J[18] = 0.586607210695;
	J[31] = -0.445391966818;
	J[44] = -0.301519984248;
	J[57] = -0.587645368916;

   /*** derivatives for constraint 7 ***/

	J[6] = -0.583459965992;
	J[19] = 0.505695871289;
	J[32] = -0.328188665272;
	J[45] = 0.199986646277;
	J[58] = 0.506106406938;

   /*** derivatives for constraint 8 ***/

	J[7] = 0.729324957489;
	J[20] = 0.0809113394063;
	J[33] = -0.345682002598;
	J[46] = -0.101625962101;
	J[59] = 0.57594668021;

   /*** derivatives for constraint 9 ***/

	J[8] = 0.145864991498;
	J[21] = 0.586607210695;
	J[34] = 0.756087294764;
	J[47] = -0.200079270407;
	J[60] = 0.151379235251;

   /*** derivatives for constraint 10 ***/

	J[9] = 0.291729982996;
	J[22] = 0.222506183367;
	J[35] = 0.0524800119769;
	J[48] = 0.904837825133;
	J[61] = -0.209520819817;
	J[65] = -1.;

   /*** derivatives for constraint 11 ***/

	J[10] = -0.291729982996;
	J[23] = -0.222506183367;
	J[36] = -0.0524800119769;
	J[49] = -0.904837825133;
	J[62] = 0.209520819817;
	J[66] = 1.;

   /*** derivatives for constraint 12 ***/

	J[11] = 0.145864991498;
	J[24] = 0.586607210695;
	J[37] = -0.445391966818;
	J[50] = -0.301519984248;
	J[63] = -0.587645368916;
	J[67] = -1.;

   /*** derivatives for constraint 13 ***/

	J[12] = -0.145864991498;
	J[25] = -0.586607210695;
	J[38] = 0.445391966818;
	J[51] = 0.301519984248;
	J[64] = 0.587645368916;
	J[68] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
