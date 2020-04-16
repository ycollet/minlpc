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
 fint batch_auxcom_[1] = { 1 /* nlc */ };
 fint batch_funcom_[231] = {
	46 /* nvar */,
	1 /* nobj */,
	73 /* ncon */,
	178 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	8,
	15,
	22,
	29,
	36,
	43,
	50,
	57,
	64,
	71,
	77,
	83,
	89,
	95,
	101,
	107,
	112,
	117,
	122,
	127,
	132,
	137,
	138,
	139,
	140,
	141,
	142,
	143,
	145,
	147,
	149,
	151,
	153,
	155,
	157,
	159,
	161,
	163,
	165,
	167,
	169,
	171,
	173,
	175,
	177,
	179,

	/* rownos */
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	1,
	8,
	9,
	10,
	11,
	12,
	13,
	1,
	14,
	15,
	16,
	17,
	18,
	19,
	1,
	20,
	21,
	22,
	23,
	24,
	25,
	1,
	26,
	27,
	28,
	29,
	30,
	31,
	1,
	32,
	33,
	34,
	35,
	36,
	37,
	1,
	38,
	39,
	40,
	41,
	42,
	43,
	1,
	44,
	45,
	46,
	47,
	48,
	49,
	1,
	50,
	51,
	52,
	53,
	54,
	55,
	1,
	56,
	57,
	58,
	59,
	60,
	61,
	32,
	38,
	44,
	50,
	56,
	62,
	33,
	39,
	45,
	51,
	57,
	63,
	34,
	40,
	46,
	52,
	58,
	64,
	35,
	41,
	47,
	53,
	59,
	65,
	36,
	42,
	48,
	54,
	60,
	66,
	37,
	43,
	49,
	55,
	61,
	67,
	2,
	8,
	14,
	20,
	26,
	3,
	9,
	15,
	21,
	27,
	4,
	10,
	16,
	22,
	28,
	5,
	11,
	17,
	23,
	29,
	6,
	12,
	18,
	24,
	30,
	7,
	13,
	19,
	25,
	31,
	68,
	69,
	70,
	71,
	72,
	73,
	62,
	68,
	63,
	69,
	64,
	70,
	65,
	71,
	66,
	72,
	67,
	73,
	62,
	68,
	63,
	69,
	64,
	70,
	65,
	71,
	66,
	72,
	67,
	73,
	62,
	68,
	63,
	69,
	64,
	70,
	65,
	71,
	66,
	72,
	67,
	73 };

 real batch_boundc_[1+92+146] /* Infinity, variable bounds, constraint bounds */ = {
		1.7e308,
		4.45966,
		397.747,
		3.7495,
		882.353,
		4.49144,
		833.333,
		3.14988,
		638.298,
		3.04452,
		666.667,
		0.729961,
		2.11626,
		0.530628,
		1.91626,
		1.09024,
		2.47654,
		-0.133531,
		1.25276,
		0.0487901,
		1.43508,
		0.,
		1.38629436111989,
		0.,
		1.38629436111989,
		0.,
		1.38629436111989,
		0.,
		1.38629436111989,
		0.,
		1.38629436111989,
		0.,
		1.38629436111989,
		5.7037824746562,
		8.00636756765025,
		5.7037824746562,
		8.00636756765025,
		5.7037824746562,
		8.00636756765025,
		5.7037824746562,
		8.00636756765025,
		5.7037824746562,
		8.00636756765025,
		5.7037824746562,
		8.00636756765025,
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
		-1.7e308,
		6000.,
		2.06686275947298,
		1.7e308,
		0.693147180559945,
		1.7e308,
		1.64865862558738,
		1.7e308,
		1.58923520511658,
		1.7e308,
		1.80828877117927,
		1.7e308,
		1.43508452528932,
		1.7e308,
		-0.356674943938732,
		1.7e308,
		-0.22314355131421,
		1.7e308,
		-0.105360515657826,
		1.7e308,
		1.22377543162212,
		1.7e308,
		0.741937344729377,
		1.7e308,
		0.916290731874155,
		1.7e308,
		-0.356674943938732,
		1.7e308,
		0.955511445027436,
		1.7e308,
		0.470003629245736,
		1.7e308,
		1.28093384546206,
		1.7e308,
		1.16315080980568,
		1.7e308,
		1.06471073699243,
		1.7e308,
		1.54756250871601,
		1.7e308,
		0.832909122935104,
		1.7e308,
		0.470003629245736,
		1.7e308,
		0.993251773010283,
		1.7e308,
		0.182321556793955,
		1.7e308,
		0.916290731874155,
		1.7e308,
		0.182321556793955,
		1.7e308,
		1.28093384546206,
		1.7e308,
		0.8754687373539,
		1.7e308,
		1.50407739677627,
		1.7e308,
		0.470003629245736,
		1.7e308,
		0.741937344729377,
		1.7e308,
		1.85629799036563,
		1.7e308,
		1.54756250871601,
		1.7e308,
		2.11625551480255,
		1.7e308,
		1.3609765531356,
		1.7e308,
		0.741937344729377,
		1.7e308,
		0.182321556793955,
		1.7e308,
		1.91692261218206,
		1.7e308,
		1.85629799036563,
		1.7e308,
		1.87180217690159,
		1.7e308,
		1.48160454092422,
		1.7e308,
		0.832909122935104,
		1.7e308,
		1.16315080980568,
		1.7e308,
		0.,
		1.7e308,
		1.84054963339749,
		1.7e308,
		1.68639895357023,
		1.7e308,
		2.47653840011748,
		1.7e308,
		1.7404661748405,
		1.7e308,
		1.82454929205105,
		1.7e308,
		1.16315080980568,
		1.7e308,
		1.09861228866811,
		1.7e308,
		1.25276296849537,
		1.7e308,
		1.19392246847243,
		1.7e308,
		1.02961941718116,
		1.7e308,
		1.22377543162212,
		1.7e308,
		0.741937344729377,
		1.7e308,
		0.916290731874155,
		1.7e308,
		1.43508452528932,
		1.7e308,
		1.28093384546206,
		1.7e308,
		1.30833281965018,
		1.7e308,
		0.78845736036427,
		1.7e308,
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
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.,
		1.};

 real batch_x0comn_[46] = {
		4.45966,
		3.7495,
		4.49144,
		3.14988,
		3.04452,
		0.729961,
		0.530628,
		1.09024,
		0.,
		0.0487901,
		0.,
		0.,
		0.,
		0.,
		0.,
		0.,
		5.7037824746562,
		5.7037824746562,
		5.7037824746562,
		5.7037824746562,
		5.7037824746562,
		5.7037824746562,
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

 static real batch_pd[22];
static real batch_old_x[46];
static int batch_xkind = -1;

 static int
batch_xcheck(real *x)
{
	real *x1 = batch_old_x, *xe = x + 46;
	errno = 0;
	if (batch_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	batch_xkind = 0;
	return 1;
	}
 real
batch_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[3], dv[12];
	fint wantfg = *needfg;
	if (batch_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	v[0] = 0.6 * x[16];
	v[1] = x[10] + v[0];
	batch_pd[10] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	batch_pd[11] = batch_pd[10];
	v[1] = 250. * batch_pd[10];
	v[0] = 0.6 * x[17];
	v[2] = x[11] + v[0];
	batch_pd[12] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	batch_pd[13] = batch_pd[12];
	v[2] = 250. * batch_pd[12];
	v[1] += v[2];
	v[2] = 0.6 * x[18];
	v[0] = x[12] + v[2];
	batch_pd[14] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	batch_pd[15] = batch_pd[14];
	v[0] = 250. * batch_pd[14];
	v[1] += v[0];
	v[0] = 0.6 * x[19];
	v[2] = x[13] + v[0];
	batch_pd[16] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	batch_pd[17] = batch_pd[16];
	v[2] = 250. * batch_pd[16];
	v[1] += v[2];
	v[2] = 0.6 * x[20];
	v[0] = x[14] + v[2];
	batch_pd[18] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	batch_pd[19] = batch_pd[18];
	v[0] = 250. * batch_pd[18];
	v[1] += v[0];
	v[0] = 0.6 * x[21];
	v[2] = x[15] + v[0];
	batch_pd[20] = exp(v[2]);
	if (errno) in_trouble("exp",v[2]);
	batch_pd[21] = batch_pd[20];
	v[2] = 250. * batch_pd[20];
	v[1] += v[2];
	;}

	if (wantfg & 2) {
	dv[0] = 250.*batch_pd[21];
	dv[1] = dv[0];
	g[15] = dv[0];
	g[21] = dv[1]*0.6;
	dv[2] = 250.*batch_pd[19];
	dv[3] = dv[2];
	g[14] = dv[2];
	g[20] = dv[3]*0.6;
	dv[4] = 250.*batch_pd[17];
	dv[5] = dv[4];
	g[13] = dv[4];
	g[19] = dv[5]*0.6;
	dv[6] = 250.*batch_pd[15];
	dv[7] = dv[6];
	g[12] = dv[6];
	g[18] = dv[7]*0.6;
	dv[8] = 250.*batch_pd[13];
	dv[9] = dv[8];
	g[11] = dv[8];
	g[17] = dv[9]*0.6;
	dv[10] = 250.*batch_pd[11];
	dv[11] = dv[10];
	g[10] = dv[10];
	g[16] = dv[11]*0.6;
	}

	return v[1];
}

 void
batch_ceval_(fint *needfg, real *x, real *c, real *J)
{
	real v[2], dv[5];
	real t1;
	fint wantfg = *needfg;
	if (batch_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	v[0] = x[5] - x[0];
	batch_pd[0] = exp(v[0]);
	if (errno) in_trouble("exp",v[0]);
	batch_pd[1] = batch_pd[0];
	v[0] = 250000. * batch_pd[0];
	v[1] = x[6] - x[1];
	batch_pd[2] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	batch_pd[3] = batch_pd[2];
	v[1] = 150000. * batch_pd[2];
	v[0] += v[1];
	v[1] = x[7] - x[2];
	batch_pd[4] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	batch_pd[5] = batch_pd[4];
	v[1] = 180000. * batch_pd[4];
	v[0] += v[1];
	v[1] = x[8] - x[3];
	batch_pd[6] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	batch_pd[7] = batch_pd[6];
	v[1] = 160000. * batch_pd[6];
	v[0] += v[1];
	v[1] = x[9] - x[4];
	batch_pd[8] = exp(v[1]);
	if (errno) in_trouble("exp",v[1]);
	batch_pd[9] = batch_pd[8];
	v[1] = 120000. * batch_pd[8];
	v[0] += v[1];
	c[0] = v[0];

  /***  constraint 2  ***/

	t1 = -x[0];
	t1 += x[16];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = -x[0];
	t1 += x[17];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = -x[0];
	t1 += x[18];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = -x[0];
	t1 += x[19];
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = -x[0];
	t1 += x[20];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = -x[0];
	t1 += x[21];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = -x[1];
	t1 += x[16];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = -x[1];
	t1 += x[17];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = -x[1];
	t1 += x[18];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = -x[1];
	t1 += x[19];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = -x[1];
	t1 += x[20];
	c[11] = t1;

  /***  constraint 13  ***/

	t1 = -x[1];
	t1 += x[21];
	c[12] = t1;

  /***  constraint 14  ***/

	t1 = -x[2];
	t1 += x[16];
	c[13] = t1;

  /***  constraint 15  ***/

	t1 = -x[2];
	t1 += x[17];
	c[14] = t1;

  /***  constraint 16  ***/

	t1 = -x[2];
	t1 += x[18];
	c[15] = t1;

  /***  constraint 17  ***/

	t1 = -x[2];
	t1 += x[19];
	c[16] = t1;

  /***  constraint 18  ***/

	t1 = -x[2];
	t1 += x[20];
	c[17] = t1;

  /***  constraint 19  ***/

	t1 = -x[2];
	t1 += x[21];
	c[18] = t1;

  /***  constraint 20  ***/

	t1 = -x[3];
	t1 += x[16];
	c[19] = t1;

  /***  constraint 21  ***/

	t1 = -x[3];
	t1 += x[17];
	c[20] = t1;

  /***  constraint 22  ***/

	t1 = -x[3];
	t1 += x[18];
	c[21] = t1;

  /***  constraint 23  ***/

	t1 = -x[3];
	t1 += x[19];
	c[22] = t1;

  /***  constraint 24  ***/

	t1 = -x[3];
	t1 += x[20];
	c[23] = t1;

  /***  constraint 25  ***/

	t1 = -x[3];
	t1 += x[21];
	c[24] = t1;

  /***  constraint 26  ***/

	t1 = -x[4];
	t1 += x[16];
	c[25] = t1;

  /***  constraint 27  ***/

	t1 = -x[4];
	t1 += x[17];
	c[26] = t1;

  /***  constraint 28  ***/

	t1 = -x[4];
	t1 += x[18];
	c[27] = t1;

  /***  constraint 29  ***/

	t1 = -x[4];
	t1 += x[19];
	c[28] = t1;

  /***  constraint 30  ***/

	t1 = -x[4];
	t1 += x[20];
	c[29] = t1;

  /***  constraint 31  ***/

	t1 = -x[4];
	t1 += x[21];
	c[30] = t1;

  /***  constraint 32  ***/

	t1 = x[5];
	t1 += x[10];
	c[31] = t1;

  /***  constraint 33  ***/

	t1 = x[5];
	t1 += x[11];
	c[32] = t1;

  /***  constraint 34  ***/

	t1 = x[5];
	t1 += x[12];
	c[33] = t1;

  /***  constraint 35  ***/

	t1 = x[5];
	t1 += x[13];
	c[34] = t1;

  /***  constraint 36  ***/

	t1 = x[5];
	t1 += x[14];
	c[35] = t1;

  /***  constraint 37  ***/

	t1 = x[5];
	t1 += x[15];
	c[36] = t1;

  /***  constraint 38  ***/

	t1 = x[6];
	t1 += x[10];
	c[37] = t1;

  /***  constraint 39  ***/

	t1 = x[6];
	t1 += x[11];
	c[38] = t1;

  /***  constraint 40  ***/

	t1 = x[6];
	t1 += x[12];
	c[39] = t1;

  /***  constraint 41  ***/

	t1 = x[6];
	t1 += x[13];
	c[40] = t1;

  /***  constraint 42  ***/

	t1 = x[6];
	t1 += x[14];
	c[41] = t1;

  /***  constraint 43  ***/

	t1 = x[6];
	t1 += x[15];
	c[42] = t1;

  /***  constraint 44  ***/

	t1 = x[7];
	t1 += x[10];
	c[43] = t1;

  /***  constraint 45  ***/

	t1 = x[7];
	t1 += x[11];
	c[44] = t1;

  /***  constraint 46  ***/

	t1 = x[7];
	t1 += x[12];
	c[45] = t1;

  /***  constraint 47  ***/

	t1 = x[7];
	t1 += x[13];
	c[46] = t1;

  /***  constraint 48  ***/

	t1 = x[7];
	t1 += x[14];
	c[47] = t1;

  /***  constraint 49  ***/

	t1 = x[7];
	t1 += x[15];
	c[48] = t1;

  /***  constraint 50  ***/

	t1 = x[8];
	t1 += x[10];
	c[49] = t1;

  /***  constraint 51  ***/

	t1 = x[8];
	t1 += x[11];
	c[50] = t1;

  /***  constraint 52  ***/

	t1 = x[8];
	t1 += x[12];
	c[51] = t1;

  /***  constraint 53  ***/

	t1 = x[8];
	t1 += x[13];
	c[52] = t1;

  /***  constraint 54  ***/

	t1 = x[8];
	t1 += x[14];
	c[53] = t1;

  /***  constraint 55  ***/

	t1 = x[8];
	t1 += x[15];
	c[54] = t1;

  /***  constraint 56  ***/

	t1 = x[9];
	t1 += x[10];
	c[55] = t1;

  /***  constraint 57  ***/

	t1 = x[9];
	t1 += x[11];
	c[56] = t1;

  /***  constraint 58  ***/

	t1 = x[9];
	t1 += x[12];
	c[57] = t1;

  /***  constraint 59  ***/

	t1 = x[9];
	t1 += x[13];
	c[58] = t1;

  /***  constraint 60  ***/

	t1 = x[9];
	t1 += x[14];
	c[59] = t1;

  /***  constraint 61  ***/

	t1 = x[9];
	t1 += x[15];
	c[60] = t1;

  /***  constraint 62  ***/

	t1 = x[10];
	t1 += -0.693147180559945*x[28];
	t1 += -1.09861228866811*x[34];
	t1 += -1.38629436111989*x[40];
	c[61] = t1;

  /***  constraint 63  ***/

	t1 = x[11];
	t1 += -0.693147180559945*x[29];
	t1 += -1.09861228866811*x[35];
	t1 += -1.38629436111989*x[41];
	c[62] = t1;

  /***  constraint 64  ***/

	t1 = x[12];
	t1 += -0.693147180559945*x[30];
	t1 += -1.09861228866811*x[36];
	t1 += -1.38629436111989*x[42];
	c[63] = t1;

  /***  constraint 65  ***/

	t1 = x[13];
	t1 += -0.693147180559945*x[31];
	t1 += -1.09861228866811*x[37];
	t1 += -1.38629436111989*x[43];
	c[64] = t1;

  /***  constraint 66  ***/

	t1 = x[14];
	t1 += -0.693147180559945*x[32];
	t1 += -1.09861228866811*x[38];
	t1 += -1.38629436111989*x[44];
	c[65] = t1;

  /***  constraint 67  ***/

	t1 = x[15];
	t1 += -0.693147180559945*x[33];
	t1 += -1.09861228866811*x[39];
	t1 += -1.38629436111989*x[45];
	c[66] = t1;

  /***  constraint 68  ***/

	t1 = x[22];
	t1 += x[28];
	t1 += x[34];
	t1 += x[40];
	c[67] = t1;

  /***  constraint 69  ***/

	t1 = x[23];
	t1 += x[29];
	t1 += x[35];
	t1 += x[41];
	c[68] = t1;

  /***  constraint 70  ***/

	t1 = x[24];
	t1 += x[30];
	t1 += x[36];
	t1 += x[42];
	c[69] = t1;

  /***  constraint 71  ***/

	t1 = x[25];
	t1 += x[31];
	t1 += x[37];
	t1 += x[43];
	c[70] = t1;

  /***  constraint 72  ***/

	t1 = x[26];
	t1 += x[32];
	t1 += x[38];
	t1 += x[44];
	c[71] = t1;

  /***  constraint 73  ***/

	t1 = x[27];
	t1 += x[33];
	t1 += x[39];
	t1 += x[45];
	c[72] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	dv[0] = 120000.*batch_pd[9];
	J[28] = -dv[0];
	J[63] = dv[0];
	dv[1] = 160000.*batch_pd[7];
	J[21] = -dv[1];
	J[56] = dv[1];
	dv[2] = 180000.*batch_pd[5];
	J[14] = -dv[2];
	J[49] = dv[2];
	dv[3] = 150000.*batch_pd[3];
	J[7] = -dv[3];
	J[42] = dv[3];
	dv[4] = 250000.*batch_pd[1];
	J[0] = -dv[4];
	J[35] = dv[4];

   /*** derivatives for constraint 2 ***/

	J[1] = -1.;
	J[106] = 1.;

   /*** derivatives for constraint 3 ***/

	J[2] = -1.;
	J[111] = 1.;

   /*** derivatives for constraint 4 ***/

	J[3] = -1.;
	J[116] = 1.;

   /*** derivatives for constraint 5 ***/

	J[4] = -1.;
	J[121] = 1.;

   /*** derivatives for constraint 6 ***/

	J[5] = -1.;
	J[126] = 1.;

   /*** derivatives for constraint 7 ***/

	J[6] = -1.;
	J[131] = 1.;

   /*** derivatives for constraint 8 ***/

	J[8] = -1.;
	J[107] = 1.;

   /*** derivatives for constraint 9 ***/

	J[9] = -1.;
	J[112] = 1.;

   /*** derivatives for constraint 10 ***/

	J[10] = -1.;
	J[117] = 1.;

   /*** derivatives for constraint 11 ***/

	J[11] = -1.;
	J[122] = 1.;

   /*** derivatives for constraint 12 ***/

	J[12] = -1.;
	J[127] = 1.;

   /*** derivatives for constraint 13 ***/

	J[13] = -1.;
	J[132] = 1.;

   /*** derivatives for constraint 14 ***/

	J[15] = -1.;
	J[108] = 1.;

   /*** derivatives for constraint 15 ***/

	J[16] = -1.;
	J[113] = 1.;

   /*** derivatives for constraint 16 ***/

	J[17] = -1.;
	J[118] = 1.;

   /*** derivatives for constraint 17 ***/

	J[18] = -1.;
	J[123] = 1.;

   /*** derivatives for constraint 18 ***/

	J[19] = -1.;
	J[128] = 1.;

   /*** derivatives for constraint 19 ***/

	J[20] = -1.;
	J[133] = 1.;

   /*** derivatives for constraint 20 ***/

	J[22] = -1.;
	J[109] = 1.;

   /*** derivatives for constraint 21 ***/

	J[23] = -1.;
	J[114] = 1.;

   /*** derivatives for constraint 22 ***/

	J[24] = -1.;
	J[119] = 1.;

   /*** derivatives for constraint 23 ***/

	J[25] = -1.;
	J[124] = 1.;

   /*** derivatives for constraint 24 ***/

	J[26] = -1.;
	J[129] = 1.;

   /*** derivatives for constraint 25 ***/

	J[27] = -1.;
	J[134] = 1.;

   /*** derivatives for constraint 26 ***/

	J[29] = -1.;
	J[110] = 1.;

   /*** derivatives for constraint 27 ***/

	J[30] = -1.;
	J[115] = 1.;

   /*** derivatives for constraint 28 ***/

	J[31] = -1.;
	J[120] = 1.;

   /*** derivatives for constraint 29 ***/

	J[32] = -1.;
	J[125] = 1.;

   /*** derivatives for constraint 30 ***/

	J[33] = -1.;
	J[130] = 1.;

   /*** derivatives for constraint 31 ***/

	J[34] = -1.;
	J[135] = 1.;

   /*** derivatives for constraint 32 ***/

	J[36] = 1.;
	J[70] = 1.;

   /*** derivatives for constraint 33 ***/

	J[37] = 1.;
	J[76] = 1.;

   /*** derivatives for constraint 34 ***/

	J[38] = 1.;
	J[82] = 1.;

   /*** derivatives for constraint 35 ***/

	J[39] = 1.;
	J[88] = 1.;

   /*** derivatives for constraint 36 ***/

	J[40] = 1.;
	J[94] = 1.;

   /*** derivatives for constraint 37 ***/

	J[41] = 1.;
	J[100] = 1.;

   /*** derivatives for constraint 38 ***/

	J[43] = 1.;
	J[71] = 1.;

   /*** derivatives for constraint 39 ***/

	J[44] = 1.;
	J[77] = 1.;

   /*** derivatives for constraint 40 ***/

	J[45] = 1.;
	J[83] = 1.;

   /*** derivatives for constraint 41 ***/

	J[46] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 42 ***/

	J[47] = 1.;
	J[95] = 1.;

   /*** derivatives for constraint 43 ***/

	J[48] = 1.;
	J[101] = 1.;

   /*** derivatives for constraint 44 ***/

	J[50] = 1.;
	J[72] = 1.;

   /*** derivatives for constraint 45 ***/

	J[51] = 1.;
	J[78] = 1.;

   /*** derivatives for constraint 46 ***/

	J[52] = 1.;
	J[84] = 1.;

   /*** derivatives for constraint 47 ***/

	J[53] = 1.;
	J[90] = 1.;

   /*** derivatives for constraint 48 ***/

	J[54] = 1.;
	J[96] = 1.;

   /*** derivatives for constraint 49 ***/

	J[55] = 1.;
	J[102] = 1.;

   /*** derivatives for constraint 50 ***/

	J[57] = 1.;
	J[73] = 1.;

   /*** derivatives for constraint 51 ***/

	J[58] = 1.;
	J[79] = 1.;

   /*** derivatives for constraint 52 ***/

	J[59] = 1.;
	J[85] = 1.;

   /*** derivatives for constraint 53 ***/

	J[60] = 1.;
	J[91] = 1.;

   /*** derivatives for constraint 54 ***/

	J[61] = 1.;
	J[97] = 1.;

   /*** derivatives for constraint 55 ***/

	J[62] = 1.;
	J[103] = 1.;

   /*** derivatives for constraint 56 ***/

	J[64] = 1.;
	J[74] = 1.;

   /*** derivatives for constraint 57 ***/

	J[65] = 1.;
	J[80] = 1.;

   /*** derivatives for constraint 58 ***/

	J[66] = 1.;
	J[86] = 1.;

   /*** derivatives for constraint 59 ***/

	J[67] = 1.;
	J[92] = 1.;

   /*** derivatives for constraint 60 ***/

	J[68] = 1.;
	J[98] = 1.;

   /*** derivatives for constraint 61 ***/

	J[69] = 1.;
	J[104] = 1.;

   /*** derivatives for constraint 62 ***/

	J[75] = 1.;
	J[142] = -0.693147180559945;
	J[154] = -1.09861228866811;
	J[166] = -1.38629436111989;

   /*** derivatives for constraint 63 ***/

	J[81] = 1.;
	J[144] = -0.693147180559945;
	J[156] = -1.09861228866811;
	J[168] = -1.38629436111989;

   /*** derivatives for constraint 64 ***/

	J[87] = 1.;
	J[146] = -0.693147180559945;
	J[158] = -1.09861228866811;
	J[170] = -1.38629436111989;

   /*** derivatives for constraint 65 ***/

	J[93] = 1.;
	J[148] = -0.693147180559945;
	J[160] = -1.09861228866811;
	J[172] = -1.38629436111989;

   /*** derivatives for constraint 66 ***/

	J[99] = 1.;
	J[150] = -0.693147180559945;
	J[162] = -1.09861228866811;
	J[174] = -1.38629436111989;

   /*** derivatives for constraint 67 ***/

	J[105] = 1.;
	J[152] = -0.693147180559945;
	J[164] = -1.09861228866811;
	J[176] = -1.38629436111989;

   /*** derivatives for constraint 68 ***/

	J[136] = 1.;
	J[143] = 1.;
	J[155] = 1.;
	J[167] = 1.;

   /*** derivatives for constraint 69 ***/

	J[137] = 1.;
	J[145] = 1.;
	J[157] = 1.;
	J[169] = 1.;

   /*** derivatives for constraint 70 ***/

	J[138] = 1.;
	J[147] = 1.;
	J[159] = 1.;
	J[171] = 1.;

   /*** derivatives for constraint 71 ***/

	J[139] = 1.;
	J[149] = 1.;
	J[161] = 1.;
	J[173] = 1.;

   /*** derivatives for constraint 72 ***/

	J[140] = 1.;
	J[151] = 1.;
	J[163] = 1.;
	J[175] = 1.;

   /*** derivatives for constraint 73 ***/

	J[141] = 1.;
	J[153] = 1.;
	J[165] = 1.;
	J[177] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
