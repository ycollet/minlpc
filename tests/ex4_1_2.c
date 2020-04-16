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
 fint ex4_1_2_auxcom_[1] = { 0 /* nlc */ };
 fint ex4_1_2_funcom_[6] = {
	1 /* nvar */,
	1 /* nobj */,
	0 /* ncon */,
	0 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0 };

 real ex4_1_2_boundc_[1+2+0] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		1.,
		2.};

 real ex4_1_2_x0comn_[1] = {
		1.0911 };

 static real ex4_1_2_pd[50];
static real ex4_1_2_old_x[1];
static int ex4_1_2_xkind = -1;

 static int
ex4_1_2_xcheck(real *x)
{
	real *x1 = ex4_1_2_old_x, *xe = x + 1;
	errno = 0;
	if (ex4_1_2_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	ex4_1_2_xkind = 0;
	return 1;
	}
 real
ex4_1_2_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], rv;
	fint wantfg = *needfg;
	if (ex4_1_2_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	ex4_1_2_pd[0] = x[0] * x[0];
	ex4_1_2_pd[1] = x[0] + x[0];
	v[0] = 2.5 * ex4_1_2_pd[0];
	v[1] = pow(x[0], 3.);
	if (errno) in_trouble2("pow",x[0],3.);
	if (x[0] != 0.) {
	ex4_1_2_pd[2] = 3.*(x[0]*x[0]);
	} else {
	ex4_1_2_pd[2] = 0.;
	}
	v[1] *= 1.666666666;
	v[0] += v[1];
	v[1] = pow(x[0], 4.);
	if (errno) in_trouble2("pow",x[0],4.);
	if (x[0] != 0.) {
	ex4_1_2_pd[3] = 4.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[3] = 0.;
	}
	v[1] *= 1.25;
	v[0] += v[1];
	v[1] = pow(x[0], 5.);
	if (errno) in_trouble2("pow",x[0],5.);
	if (x[0] != 0.) {
	ex4_1_2_pd[4] = 5.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[4] = 0.;
	}
	v[0] += v[1];
	v[1] = pow(x[0], 6.);
	if (errno) in_trouble2("pow",x[0],6.);
	if (x[0] != 0.) {
	ex4_1_2_pd[5] = 6.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[5] = 0.;
	}
	v[1] *= 0.8333333;
	v[0] += v[1];
	v[1] = pow(x[0], 7.);
	if (errno) in_trouble2("pow",x[0],7.);
	if (x[0] != 0.) {
	ex4_1_2_pd[6] = 7.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[6] = 0.;
	}
	v[1] *= 0.714285714;
	v[0] += v[1];
	v[1] = pow(x[0], 8.);
	if (errno) in_trouble2("pow",x[0],8.);
	if (x[0] != 0.) {
	ex4_1_2_pd[7] = 8.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[7] = 0.;
	}
	v[1] *= 0.625;
	v[0] += v[1];
	v[1] = pow(x[0], 9.);
	if (errno) in_trouble2("pow",x[0],9.);
	if (x[0] != 0.) {
	ex4_1_2_pd[8] = 9.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[8] = 0.;
	}
	v[1] *= 0.555555555;
	v[0] += v[1];
	v[1] = pow(x[0], 10.);
	if (errno) in_trouble2("pow",x[0],10.);
	if (x[0] != 0.) {
	ex4_1_2_pd[9] = 10.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[9] = 0.;
	}
	v[0] += v[1];
	v[1] = pow(x[0], 11.);
	if (errno) in_trouble2("pow",x[0],11.);
	if (x[0] != 0.) {
	ex4_1_2_pd[10] = 11.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[10] = 0.;
	}
	v[1] *= -43.6363636;
	v[0] += v[1];
	v[1] = pow(x[0], 12.);
	if (errno) in_trouble2("pow",x[0],12.);
	if (x[0] != 0.) {
	ex4_1_2_pd[11] = 12.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[11] = 0.;
	}
	v[1] *= 0.41666666;
	v[0] += v[1];
	v[1] = pow(x[0], 13.);
	if (errno) in_trouble2("pow",x[0],13.);
	if (x[0] != 0.) {
	ex4_1_2_pd[12] = 13.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[12] = 0.;
	}
	v[1] *= 0.384615384;
	v[0] += v[1];
	v[1] = pow(x[0], 14.);
	if (errno) in_trouble2("pow",x[0],14.);
	if (x[0] != 0.) {
	ex4_1_2_pd[13] = 14.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[13] = 0.;
	}
	v[1] *= 0.357142857;
	v[0] += v[1];
	v[1] = pow(x[0], 15.);
	if (errno) in_trouble2("pow",x[0],15.);
	if (x[0] != 0.) {
	ex4_1_2_pd[14] = 15.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[14] = 0.;
	}
	v[1] *= 0.3333333;
	v[0] += v[1];
	v[1] = pow(x[0], 16.);
	if (errno) in_trouble2("pow",x[0],16.);
	if (x[0] != 0.) {
	ex4_1_2_pd[15] = 16.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[15] = 0.;
	}
	v[1] *= 0.3125;
	v[0] += v[1];
	v[1] = pow(x[0], 17.);
	if (errno) in_trouble2("pow",x[0],17.);
	if (x[0] != 0.) {
	ex4_1_2_pd[16] = 17.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[16] = 0.;
	}
	v[1] *= 0.294117647;
	v[0] += v[1];
	v[1] = pow(x[0], 18.);
	if (errno) in_trouble2("pow",x[0],18.);
	if (x[0] != 0.) {
	ex4_1_2_pd[17] = 18.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[17] = 0.;
	}
	v[1] *= 0.277777777;
	v[0] += v[1];
	v[1] = pow(x[0], 19.);
	if (errno) in_trouble2("pow",x[0],19.);
	if (x[0] != 0.) {
	ex4_1_2_pd[18] = 19.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[18] = 0.;
	}
	v[1] *= 0.263157894;
	v[0] += v[1];
	v[1] = pow(x[0], 20.);
	if (errno) in_trouble2("pow",x[0],20.);
	if (x[0] != 0.) {
	ex4_1_2_pd[19] = 20.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[19] = 0.;
	}
	v[1] *= 0.25;
	v[0] += v[1];
	v[1] = pow(x[0], 21.);
	if (errno) in_trouble2("pow",x[0],21.);
	if (x[0] != 0.) {
	ex4_1_2_pd[20] = 21.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[20] = 0.;
	}
	v[1] *= 0.238095238;
	v[0] += v[1];
	v[1] = pow(x[0], 22.);
	if (errno) in_trouble2("pow",x[0],22.);
	if (x[0] != 0.) {
	ex4_1_2_pd[21] = 22.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[21] = 0.;
	}
	v[1] *= 0.227272727;
	v[0] += v[1];
	v[1] = pow(x[0], 23.);
	if (errno) in_trouble2("pow",x[0],23.);
	if (x[0] != 0.) {
	ex4_1_2_pd[22] = 23.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[22] = 0.;
	}
	v[1] *= 0.217391304;
	v[0] += v[1];
	v[1] = pow(x[0], 24.);
	if (errno) in_trouble2("pow",x[0],24.);
	if (x[0] != 0.) {
	ex4_1_2_pd[23] = 24.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[23] = 0.;
	}
	v[1] *= 0.208333333;
	v[0] += v[1];
	v[1] = pow(x[0], 25.);
	if (errno) in_trouble2("pow",x[0],25.);
	if (x[0] != 0.) {
	ex4_1_2_pd[24] = 25.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[24] = 0.;
	}
	v[1] *= 0.2;
	v[0] += v[1];
	v[1] = pow(x[0], 26.);
	if (errno) in_trouble2("pow",x[0],26.);
	if (x[0] != 0.) {
	ex4_1_2_pd[25] = 26.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[25] = 0.;
	}
	v[1] *= 0.192307692;
	v[0] += v[1];
	v[1] = pow(x[0], 27.);
	if (errno) in_trouble2("pow",x[0],27.);
	if (x[0] != 0.) {
	ex4_1_2_pd[26] = 27.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[26] = 0.;
	}
	v[1] *= 0.185185185;
	v[0] += v[1];
	v[1] = pow(x[0], 28.);
	if (errno) in_trouble2("pow",x[0],28.);
	if (x[0] != 0.) {
	ex4_1_2_pd[27] = 28.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[27] = 0.;
	}
	v[1] *= 0.178571428;
	v[0] += v[1];
	v[1] = pow(x[0], 29.);
	if (errno) in_trouble2("pow",x[0],29.);
	if (x[0] != 0.) {
	ex4_1_2_pd[28] = 29.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[28] = 0.;
	}
	v[1] *= 0.344827586;
	v[0] += v[1];
	v[1] = pow(x[0], 30.);
	if (errno) in_trouble2("pow",x[0],30.);
	if (x[0] != 0.) {
	ex4_1_2_pd[29] = 30.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[29] = 0.;
	}
	v[1] *= 0.6666666;
	v[0] += v[1];
	v[1] = pow(x[0], 31.);
	if (errno) in_trouble2("pow",x[0],31.);
	if (x[0] != 0.) {
	ex4_1_2_pd[30] = 31.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[30] = 0.;
	}
	v[1] *= -15.48387097;
	v[0] += v[1];
	v[1] = pow(x[0], 32.);
	if (errno) in_trouble2("pow",x[0],32.);
	if (x[0] != 0.) {
	ex4_1_2_pd[31] = 32.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[31] = 0.;
	}
	v[1] *= 0.15625;
	v[0] += v[1];
	v[1] = pow(x[0], 33.);
	if (errno) in_trouble2("pow",x[0],33.);
	if (x[0] != 0.) {
	ex4_1_2_pd[32] = 33.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[32] = 0.;
	}
	v[1] *= 0.1515151;
	v[0] += v[1];
	v[1] = pow(x[0], 34.);
	if (errno) in_trouble2("pow",x[0],34.);
	if (x[0] != 0.) {
	ex4_1_2_pd[33] = 34.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[33] = 0.;
	}
	v[1] *= 0.14705882;
	v[0] += v[1];
	v[1] = pow(x[0], 35.);
	if (errno) in_trouble2("pow",x[0],35.);
	if (x[0] != 0.) {
	ex4_1_2_pd[34] = 35.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[34] = 0.;
	}
	v[1] *= 0.14285712;
	v[0] += v[1];
	v[1] = pow(x[0], 36.);
	if (errno) in_trouble2("pow",x[0],36.);
	if (x[0] != 0.) {
	ex4_1_2_pd[35] = 36.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[35] = 0.;
	}
	v[1] *= 0.138888888;
	v[0] += v[1];
	v[1] = pow(x[0], 37.);
	if (errno) in_trouble2("pow",x[0],37.);
	if (x[0] != 0.) {
	ex4_1_2_pd[36] = 37.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[36] = 0.;
	}
	v[1] *= 0.135135135;
	v[0] += v[1];
	v[1] = pow(x[0], 38.);
	if (errno) in_trouble2("pow",x[0],38.);
	if (x[0] != 0.) {
	ex4_1_2_pd[37] = 38.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[37] = 0.;
	}
	v[1] *= 0.131578947;
	v[0] += v[1];
	v[1] = pow(x[0], 39.);
	if (errno) in_trouble2("pow",x[0],39.);
	if (x[0] != 0.) {
	ex4_1_2_pd[38] = 39.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[38] = 0.;
	}
	v[1] *= 0.128205128;
	v[0] += v[1];
	v[1] = pow(x[0], 40.);
	if (errno) in_trouble2("pow",x[0],40.);
	if (x[0] != 0.) {
	ex4_1_2_pd[39] = 40.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[39] = 0.;
	}
	v[1] *= 0.125;
	v[0] += v[1];
	v[1] = pow(x[0], 41.);
	if (errno) in_trouble2("pow",x[0],41.);
	if (x[0] != 0.) {
	ex4_1_2_pd[40] = 41.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[40] = 0.;
	}
	v[1] *= 0.121951219;
	v[0] += v[1];
	v[1] = pow(x[0], 42.);
	if (errno) in_trouble2("pow",x[0],42.);
	if (x[0] != 0.) {
	ex4_1_2_pd[41] = 42.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[41] = 0.;
	}
	v[1] *= 0.119047619;
	v[0] += v[1];
	v[1] = pow(x[0], 43.);
	if (errno) in_trouble2("pow",x[0],43.);
	if (x[0] != 0.) {
	ex4_1_2_pd[42] = 43.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[42] = 0.;
	}
	v[1] *= 0.116279069;
	v[0] += v[1];
	v[1] = pow(x[0], 44.);
	if (errno) in_trouble2("pow",x[0],44.);
	if (x[0] != 0.) {
	ex4_1_2_pd[43] = 44.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[43] = 0.;
	}
	v[1] *= 0.113636363;
	v[0] += v[1];
	v[1] = pow(x[0], 45.);
	if (errno) in_trouble2("pow",x[0],45.);
	if (x[0] != 0.) {
	ex4_1_2_pd[44] = 45.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[44] = 0.;
	}
	v[1] *= 0.1111111;
	v[0] += v[1];
	v[1] = pow(x[0], 46.);
	if (errno) in_trouble2("pow",x[0],46.);
	if (x[0] != 0.) {
	ex4_1_2_pd[45] = 46.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[45] = 0.;
	}
	v[1] *= 0.108695652;
	v[0] += v[1];
	v[1] = pow(x[0], 47.);
	if (errno) in_trouble2("pow",x[0],47.);
	if (x[0] != 0.) {
	ex4_1_2_pd[46] = 47.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[46] = 0.;
	}
	v[1] *= 0.106382978;
	v[0] += v[1];
	v[1] = pow(x[0], 48.);
	if (errno) in_trouble2("pow",x[0],48.);
	if (x[0] != 0.) {
	ex4_1_2_pd[47] = 48.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[47] = 0.;
	}
	v[1] *= 0.208333333;
	v[0] += v[1];
	v[1] = pow(x[0], 49.);
	if (errno) in_trouble2("pow",x[0],49.);
	if (x[0] != 0.) {
	ex4_1_2_pd[48] = 49.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[48] = 0.;
	}
	v[1] *= 0.408163265;
	v[0] += v[1];
	v[1] = pow(x[0], 50.);
	if (errno) in_trouble2("pow",x[0],50.);
	if (x[0] != 0.) {
	ex4_1_2_pd[49] = 50.*(v[1]/x[0]);
	} else {
	ex4_1_2_pd[49] = 0.;
	}
	v[1] *= 0.8;
	v[0] += v[1];
	rv = v[0] + -500.*x[0];
	;}

	if (wantfg & 2) {
	g[0] = 0.8*ex4_1_2_pd[49] + -500.;
	g[0] += 0.408163265*ex4_1_2_pd[48];
	g[0] += 0.208333333*ex4_1_2_pd[47];
	g[0] += 0.106382978*ex4_1_2_pd[46];
	g[0] += 0.108695652*ex4_1_2_pd[45];
	g[0] += 0.1111111*ex4_1_2_pd[44];
	g[0] += 0.113636363*ex4_1_2_pd[43];
	g[0] += 0.116279069*ex4_1_2_pd[42];
	g[0] += 0.119047619*ex4_1_2_pd[41];
	g[0] += 0.121951219*ex4_1_2_pd[40];
	g[0] += 0.125*ex4_1_2_pd[39];
	g[0] += 0.128205128*ex4_1_2_pd[38];
	g[0] += 0.131578947*ex4_1_2_pd[37];
	g[0] += 0.135135135*ex4_1_2_pd[36];
	g[0] += 0.138888888*ex4_1_2_pd[35];
	g[0] += 0.14285712*ex4_1_2_pd[34];
	g[0] += 0.14705882*ex4_1_2_pd[33];
	g[0] += 0.1515151*ex4_1_2_pd[32];
	g[0] += 0.15625*ex4_1_2_pd[31];
	g[0] -= 15.48387097*ex4_1_2_pd[30];
	g[0] += 0.6666666*ex4_1_2_pd[29];
	g[0] += 0.344827586*ex4_1_2_pd[28];
	g[0] += 0.178571428*ex4_1_2_pd[27];
	g[0] += 0.185185185*ex4_1_2_pd[26];
	g[0] += 0.192307692*ex4_1_2_pd[25];
	g[0] += 0.2*ex4_1_2_pd[24];
	g[0] += 0.208333333*ex4_1_2_pd[23];
	g[0] += 0.217391304*ex4_1_2_pd[22];
	g[0] += 0.227272727*ex4_1_2_pd[21];
	g[0] += 0.238095238*ex4_1_2_pd[20];
	g[0] += 0.25*ex4_1_2_pd[19];
	g[0] += 0.263157894*ex4_1_2_pd[18];
	g[0] += 0.277777777*ex4_1_2_pd[17];
	g[0] += 0.294117647*ex4_1_2_pd[16];
	g[0] += 0.3125*ex4_1_2_pd[15];
	g[0] += 0.3333333*ex4_1_2_pd[14];
	g[0] += 0.357142857*ex4_1_2_pd[13];
	g[0] += 0.384615384*ex4_1_2_pd[12];
	g[0] += 0.41666666*ex4_1_2_pd[11];
	g[0] -= 43.6363636*ex4_1_2_pd[10];
	g[0] += ex4_1_2_pd[9];
	g[0] += 0.555555555*ex4_1_2_pd[8];
	g[0] += 0.625*ex4_1_2_pd[7];
	g[0] += 0.714285714*ex4_1_2_pd[6];
	g[0] += 0.8333333*ex4_1_2_pd[5];
	g[0] += ex4_1_2_pd[4];
	g[0] += 1.25*ex4_1_2_pd[3];
	g[0] += 1.666666666*ex4_1_2_pd[2];
	g[0] += 2.5*ex4_1_2_pd[1];
	}

	return rv;
}

 void
ex4_1_2_ceval_(fint *needfg, real *x, real *c, real *J)
{}
#ifdef __cplusplus
	}
#endif
