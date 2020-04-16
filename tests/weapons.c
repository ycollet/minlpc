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
 fint weapons_auxcom_[1] = { 0 /* nlc */ };
 fint weapons_funcom_[162] = {
	65 /* nvar */,
	1 /* nobj */,
	12 /* ncon */,
	90 /* nzc */,
	0 /* densejac */,

	/* objtype (0 = minimize, 1 = maximize) */

	0,

	/* colstarts */
	1,
	2,
	4,
	5,
	6,
	7,
	8,
	10,
	11,
	12,
	13,
	14,
	16,
	17,
	18,
	19,
	21,
	22,
	24,
	26,
	28,
	29,
	30,
	31,
	33,
	35,
	36,
	37,
	38,
	39,
	41,
	42,
	43,
	44,
	46,
	47,
	48,
	49,
	51,
	53,
	55,
	56,
	57,
	58,
	60,
	62,
	63,
	64,
	65,
	67,
	69,
	71,
	73,
	74,
	75,
	76,
	77,
	79,
	80,
	82,
	83,
	84,
	85,
	87,
	89,
	91,

	/* rownos */
	1,
	1,
	7,
	1,
	1,
	1,
	1,
	2,
	6,
	2,
	2,
	2,
	2,
	2,
	7,
	2,
	2,
	2,
	2,
	8,
	2,
	2,
	9,
	2,
	10,
	2,
	11,
	2,
	2,
	2,
	2,
	12,
	3,
	6,
	3,
	3,
	3,
	3,
	3,
	7,
	3,
	3,
	3,
	3,
	8,
	3,
	3,
	3,
	3,
	9,
	3,
	10,
	3,
	11,
	3,
	3,
	3,
	3,
	12,
	4,
	8,
	4,
	4,
	4,
	4,
	9,
	4,
	10,
	4,
	11,
	5,
	6,
	5,
	5,
	5,
	5,
	5,
	7,
	5,
	5,
	8,
	5,
	5,
	5,
	5,
	9,
	5,
	10,
	5,
	11 };

 real weapons_boundc_[1+130+24] /* Infinity, variable bounds, constraint bounds */ = {
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
		200.,
		-1.7e308,
		100.,
		-1.7e308,
		300.,
		-1.7e308,
		150.,
		-1.7e308,
		250.,
		30.,
		1.7e308,
		100.,
		1.7e308,
		40.,
		1.7e308,
		50.,
		1.7e308,
		70.,
		1.7e308,
		35.,
		1.7e308,
		10.,
		1.7e308};

 real weapons_x0comn_[65] = {
		10.,
		10.,
		10.,
		10.,
		10.,
		10.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		5.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		15.,
		7.5,
		7.5,
		7.5,
		7.5,
		7.5,
		7.5,
		7.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5,
		12.5 };

 static real weapons_pd[175];
static real weapons_old_x[65];
static int weapons_xkind = -1;

 static int
weapons_xcheck(real *x)
{
	real *x1 = weapons_old_x, *xe = x + 65;
	errno = 0;
	if (weapons_xkind >= 0) {
		while(*x++ == *x1++)
			if (x == xe)
				return 0;
		--x, --x1;
		}
	do *x1++ = *x++;
		while(x < xe);
	weapons_xkind = 0;
	return 1;
	}
 real
weapons_feval_(fint *nobj, fint *needfg, real *x, real *g)
{
	real v[2], dv[45];
	fint wantfg = *needfg;
	if (weapons_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  objective ***/

	weapons_pd[0] = pow(0.84, x[6]);
	if (errno) in_trouble2("pow",0.84,x[6]);
	weapons_pd[1] = -727.498714929331 * weapons_pd[0];
	weapons_pd[2] = -60. * weapons_pd[0];
	weapons_pd[3] = pow(0.96, x[24]);
	if (errno) in_trouble2("pow",0.96,x[24]);
	weapons_pd[4] = -727.4987138757373 * weapons_pd[3];
	weapons_pd[5] = weapons_pd[2] * weapons_pd[3];
	weapons_pd[6] = pow(0.92, x[51]);
	if (errno) in_trouble2("pow",0.92,x[51]);
	weapons_pd[7] = -727.4987057982227 * weapons_pd[6];
	v[0] = weapons_pd[5] * weapons_pd[6];
	v[1] = -v[0];
	weapons_pd[8] = pow(0.95, x[0]);
	if (errno) in_trouble2("pow",0.95,x[0]);
	weapons_pd[9] = -727.4986819172566 * weapons_pd[8];
	weapons_pd[10] = 50. * weapons_pd[8];
	weapons_pd[11] = pow(0.83, x[7]);
	if (errno) in_trouble2("pow",0.83,x[7]);
	weapons_pd[12] = -727.4986808636977 * weapons_pd[11];
	weapons_pd[13] = weapons_pd[10] * weapons_pd[11];
	weapons_pd[14] = pow(0.95, x[25]);
	if (errno) in_trouble2("pow",0.95,x[25]);
	weapons_pd[15] = -727.4986727864498 * weapons_pd[14];
	weapons_pd[16] = weapons_pd[13] * weapons_pd[14];
	weapons_pd[17] = pow(0.94, x[52]);
	if (errno) in_trouble2("pow",0.94,x[52]);
	weapons_pd[18] = -727.4986633045462 * weapons_pd[17];
	v[0] = weapons_pd[16] * weapons_pd[17];
	v[1] += v[0];
	weapons_pd[19] = pow(0.85, x[8]);
	if (errno) in_trouble2("pow",0.85,x[8]);
	weapons_pd[20] = -727.4986429363167 * weapons_pd[19];
	weapons_pd[21] = 50. * weapons_pd[19];
	weapons_pd[22] = pow(0.96, x[26]);
	if (errno) in_trouble2("pow",0.96,x[26]);
	weapons_pd[23] = -727.4986418827989 * weapons_pd[22];
	weapons_pd[24] = weapons_pd[21] * weapons_pd[22];
	weapons_pd[25] = pow(0.92, x[53]);
	if (errno) in_trouble2("pow",0.92,x[53]);
	weapons_pd[26] = -727.4986338058658 * weapons_pd[25];
	v[0] = weapons_pd[24] * weapons_pd[25];
	v[1] += v[0];
	weapons_pd[27] = pow(0.84, x[9]);
	if (errno) in_trouble2("pow",0.84,x[9]);
	weapons_pd[28] = -727.498613438237 * weapons_pd[27];
	weapons_pd[29] = 75. * weapons_pd[27];
	weapons_pd[30] = pow(0.96, x[27]);
	if (errno) in_trouble2("pow",0.96,x[27]);
	weapons_pd[31] = -727.4986123847503 * weapons_pd[30];
	weapons_pd[32] = weapons_pd[29] * weapons_pd[30];
	weapons_pd[33] = pow(0.95, x[54]);
	if (errno) in_trouble2("pow",0.95,x[54]);
	weapons_pd[34] = -727.4986043080554 * weapons_pd[33];
	v[0] = weapons_pd[32] * weapons_pd[33];
	v[1] += v[0];
	weapons_pd[35] = pow(0.85, x[10]);
	if (errno) in_trouble2("pow",0.85,x[10]);
	weapons_pd[36] = -727.4985839410275 * weapons_pd[35];
	weapons_pd[37] = 40. * weapons_pd[35];
	weapons_pd[38] = pow(0.96, x[28]);
	if (errno) in_trouble2("pow",0.96,x[28]);
	weapons_pd[39] = -727.4985828875718 * weapons_pd[38];
	weapons_pd[40] = weapons_pd[37] * weapons_pd[38];
	weapons_pd[41] = pow(0.95, x[55]);
	if (errno) in_trouble2("pow",0.95,x[55]);
	weapons_pd[42] = -727.4985748111152 * weapons_pd[41];
	v[0] = weapons_pd[40] * weapons_pd[41];
	v[1] += v[0];
	weapons_pd[43] = pow(0.85, x[1]);
	if (errno) in_trouble2("pow",0.85,x[1]);
	weapons_pd[44] = -727.4985544446881 * weapons_pd[43];
	weapons_pd[45] = 60. * weapons_pd[43];
	weapons_pd[46] = pow(0.81, x[11]);
	if (errno) in_trouble2("pow",0.81,x[11]);
	weapons_pd[47] = -727.4985533912635 * weapons_pd[46];
	weapons_pd[48] = weapons_pd[45] * weapons_pd[46];
	weapons_pd[49] = pow(0.9, x[29]);
	if (errno) in_trouble2("pow",0.9,x[29]);
	weapons_pd[50] = -727.498545315045 * weapons_pd[49];
	weapons_pd[51] = weapons_pd[48] * weapons_pd[49];
	weapons_pd[52] = pow(0.98, x[56]);
	if (errno) in_trouble2("pow",0.98,x[56]);
	weapons_pd[53] = -727.4985358343502 * weapons_pd[52];
	v[0] = weapons_pd[51] * weapons_pd[52];
	v[1] += v[0];
	weapons_pd[54] = pow(0.9, x[2]);
	if (errno) in_trouble2("pow",0.9,x[2]);
	weapons_pd[55] = -727.4985154687167 * weapons_pd[54];
	weapons_pd[56] = 35. * weapons_pd[54];
	weapons_pd[57] = pow(0.81, x[12]);
	if (errno) in_trouble2("pow",0.81,x[12]);
	weapons_pd[58] = -727.4985144153333 * weapons_pd[57];
	weapons_pd[59] = weapons_pd[56] * weapons_pd[57];
	weapons_pd[60] = pow(0.92, x[30]);
	if (errno) in_trouble2("pow",0.92,x[30]);
	weapons_pd[61] = -727.4985063394296 * weapons_pd[60];
	weapons_pd[62] = weapons_pd[59] * weapons_pd[60];
	weapons_pd[63] = pow(0.98, x[57]);
	if (errno) in_trouble2("pow",0.98,x[57]);
	weapons_pd[64] = -727.4984968591041 * weapons_pd[63];
	v[0] = weapons_pd[62] * weapons_pd[63];
	v[1] += v[0];
	weapons_pd[65] = pow(0.85, x[3]);
	if (errno) in_trouble2("pow",0.85,x[3]);
	weapons_pd[66] = -727.4984764942645 * weapons_pd[65];
	weapons_pd[67] = 30. * weapons_pd[65];
	weapons_pd[68] = pow(0.82, x[13]);
	if (errno) in_trouble2("pow",0.82,x[13]);
	weapons_pd[69] = -727.498475440922 * weapons_pd[68];
	weapons_pd[70] = weapons_pd[67] * weapons_pd[68];
	weapons_pd[71] = pow(0.91, x[31]);
	if (errno) in_trouble2("pow",0.91,x[31]);
	weapons_pd[72] = -727.4984673653331 * weapons_pd[71];
	v[0] = weapons_pd[70] * weapons_pd[71];
	v[1] += v[0];
	weapons_pd[73] = pow(0.8, x[4]);
	if (errno) in_trouble2("pow",0.8,x[4]);
	weapons_pd[74] = -727.4984470010941 * weapons_pd[73];
	weapons_pd[75] = 25. * weapons_pd[73];
	weapons_pd[76] = pow(0.8, x[14]);
	if (errno) in_trouble2("pow",0.8,x[14]);
	weapons_pd[77] = -727.4984459477827 * weapons_pd[76];
	weapons_pd[78] = weapons_pd[75] * weapons_pd[76];
	weapons_pd[79] = pow(0.92, x[32]);
	if (errno) in_trouble2("pow",0.92,x[32]);
	weapons_pd[80] = -727.498437872432 * weapons_pd[79];
	v[0] = weapons_pd[78] * weapons_pd[79];
	v[1] += v[0];
	weapons_pd[81] = pow(0.86, x[15]);
	if (errno) in_trouble2("pow",0.86,x[15]);
	weapons_pd[82] = -727.4984175087935 * weapons_pd[81];
	weapons_pd[83] = 150. * weapons_pd[81];
	weapons_pd[84] = pow(0.95, x[33]);
	if (errno) in_trouble2("pow",0.95,x[33]);
	weapons_pd[85] = -727.4984164555132 * weapons_pd[84];
	weapons_pd[86] = weapons_pd[83] * weapons_pd[84];
	weapons_pd[87] = pow(0.96, x[44]);
	if (errno) in_trouble2("pow",0.96,x[44]);
	weapons_pd[88] = -727.4984083804005 * weapons_pd[87];
	weapons_pd[89] = weapons_pd[86] * weapons_pd[87];
	weapons_pd[90] = pow(0.9, x[58]);
	if (errno) in_trouble2("pow",0.9,x[58]);
	weapons_pd[91] = -727.4983989010037 * weapons_pd[90];
	v[0] = weapons_pd[89] * weapons_pd[90];
	v[1] += v[0];
	weapons_pd[92] = pow(0.99, x[34]);
	if (errno) in_trouble2("pow",0.99,x[34]);
	weapons_pd[93] = -727.4983785381589 * weapons_pd[92];
	weapons_pd[94] = 30. * weapons_pd[92];
	weapons_pd[95] = pow(0.91, x[45]);
	if (errno) in_trouble2("pow",0.91,x[45]);
	weapons_pd[96] = -727.4983774849196 * weapons_pd[95];
	weapons_pd[97] = weapons_pd[94] * weapons_pd[95];
	weapons_pd[98] = pow(0.95, x[59]);
	if (errno) in_trouble2("pow",0.95,x[59]);
	weapons_pd[99] = -727.4983694101218 * weapons_pd[98];
	v[0] = weapons_pd[97] * weapons_pd[98];
	v[1] += v[0];
	weapons_pd[100] = pow(0.98, x[16]);
	if (errno) in_trouble2("pow",0.98,x[16]);
	weapons_pd[101] = -727.4983490478774 * weapons_pd[100];
	weapons_pd[102] = 45. * weapons_pd[100];
	weapons_pd[103] = pow(0.98, x[35]);
	if (errno) in_trouble2("pow",0.98,x[35]);
	weapons_pd[104] = -727.4983479946692 * weapons_pd[103];
	weapons_pd[105] = weapons_pd[102] * weapons_pd[103];
	weapons_pd[106] = pow(0.92, x[46]);
	if (errno) in_trouble2("pow",0.92,x[46]);
	weapons_pd[107] = -727.4983399201094 * weapons_pd[106];
	weapons_pd[108] = weapons_pd[105] * weapons_pd[106];
	weapons_pd[109] = pow(0.96, x[60]);
	if (errno) in_trouble2("pow",0.96,x[60]);
	weapons_pd[110] = -727.4983304413615 * weapons_pd[109];
	v[0] = weapons_pd[108] * weapons_pd[109];
	v[1] += v[0];
	weapons_pd[111] = pow(0.99, x[36]);
	if (errno) in_trouble2("pow",0.99,x[36]);
	weapons_pd[112] = -727.4983100799107 * weapons_pd[111];
	weapons_pd[113] = 125. * weapons_pd[111];
	weapons_pd[114] = pow(0.91, x[47]);
	if (errno) in_trouble2("pow",0.91,x[47]);
	weapons_pd[115] = -727.4983090267434 * weapons_pd[114];
	weapons_pd[116] = weapons_pd[113] * weapons_pd[114];
	weapons_pd[117] = pow(0.91, x[61]);
	if (errno) in_trouble2("pow",0.91,x[61]);
	weapons_pd[118] = -727.4983009524983 * weapons_pd[117];
	v[0] = weapons_pd[116] * weapons_pd[117];
	v[1] += v[0];
	weapons_pd[119] = pow(0.88, x[17]);
	if (errno) in_trouble2("pow",0.88,x[17]);
	weapons_pd[120] = -727.4982805916478 * weapons_pd[119];
	weapons_pd[121] = 200. * weapons_pd[119];
	weapons_pd[122] = pow(0.98, x[37]);
	if (errno) in_trouble2("pow",0.98,x[37]);
	weapons_pd[123] = -727.4982795385117 * weapons_pd[122];
	weapons_pd[124] = weapons_pd[121] * weapons_pd[122];
	weapons_pd[125] = pow(0.92, x[48]);
	if (errno) in_trouble2("pow",0.92,x[48]);
	weapons_pd[126] = -727.4982714645047 * weapons_pd[125];
	weapons_pd[127] = weapons_pd[124] * weapons_pd[125];
	weapons_pd[128] = pow(0.98, x[62]);
	if (errno) in_trouble2("pow",0.98,x[62]);
	weapons_pd[129] = -727.4982619864056 * weapons_pd[128];
	v[0] = weapons_pd[127] * weapons_pd[128];
	v[1] += v[0];
	weapons_pd[130] = pow(0.87, x[18]);
	if (errno) in_trouble2("pow",0.87,x[18]);
	weapons_pd[131] = -727.4982416263485 * weapons_pd[130];
	weapons_pd[132] = 200. * weapons_pd[130];
	weapons_pd[133] = pow(0.97, x[38]);
	if (errno) in_trouble2("pow",0.97,x[38]);
	weapons_pd[134] = -727.4982405732534 * weapons_pd[133];
	weapons_pd[135] = weapons_pd[132] * weapons_pd[133];
	weapons_pd[136] = pow(0.98, x[49]);
	if (errno) in_trouble2("pow",0.98,x[49]);
	weapons_pd[137] = -727.4982324995609 * weapons_pd[136];
	weapons_pd[138] = weapons_pd[135] * weapons_pd[136];
	weapons_pd[139] = pow(0.99, x[63]);
	if (errno) in_trouble2("pow",0.99,x[63]);
	weapons_pd[140] = -727.4982230218312 * weapons_pd[139];
	v[0] = weapons_pd[138] * weapons_pd[139];
	v[1] += v[0];
	weapons_pd[141] = pow(0.88, x[19]);
	if (errno) in_trouble2("pow",0.88,x[19]);
	weapons_pd[142] = -727.4982026625675 * weapons_pd[141];
	weapons_pd[143] = 130. * weapons_pd[141];
	weapons_pd[144] = pow(0.98, x[39]);
	if (errno) in_trouble2("pow",0.98,x[39]);
	weapons_pd[145] = -727.4982016095133 * weapons_pd[144];
	weapons_pd[146] = weapons_pd[143] * weapons_pd[144];
	weapons_pd[147] = pow(0.93, x[50]);
	if (errno) in_trouble2("pow",0.93,x[50]);
	weapons_pd[148] = -727.4981935361355 * weapons_pd[147];
	weapons_pd[149] = weapons_pd[146] * weapons_pd[147];
	weapons_pd[150] = pow(0.99, x[64]);
	if (errno) in_trouble2("pow",0.99,x[64]);
	weapons_pd[151] = -727.4981840587751 * weapons_pd[150];
	v[0] = weapons_pd[149] * weapons_pd[150];
	v[1] += v[0];
	weapons_pd[152] = pow(0.85, x[20]);
	if (errno) in_trouble2("pow",0.85,x[20]);
	weapons_pd[153] = -727.4981637003045 * weapons_pd[152];
	weapons_pd[154] = 100. * weapons_pd[152];
	weapons_pd[155] = pow(0.95, x[40]);
	if (errno) in_trouble2("pow",0.95,x[40]);
	weapons_pd[156] = -727.4981626472915 * weapons_pd[155];
	v[0] = weapons_pd[154] * weapons_pd[155];
	v[1] += v[0];
	weapons_pd[157] = pow(0.95, x[5]);
	if (errno) in_trouble2("pow",0.95,x[5]);
	weapons_pd[158] = -727.4981436932459 * weapons_pd[157];
	weapons_pd[159] = 100. * weapons_pd[157];
	weapons_pd[160] = pow(0.84, x[21]);
	if (errno) in_trouble2("pow",0.84,x[21]);
	weapons_pd[161] = -727.498142640254 * weapons_pd[160];
	weapons_pd[162] = weapons_pd[159] * weapons_pd[160];
	weapons_pd[163] = pow(0.92, x[41]);
	if (errno) in_trouble2("pow",0.92,x[41]);
	weapons_pd[164] = -727.498134567352 * weapons_pd[163];
	v[0] = weapons_pd[162] * weapons_pd[163];
	v[1] += v[0];
	weapons_pd[165] = pow(0.85, x[22]);
	if (errno) in_trouble2("pow",0.85,x[22]);
	weapons_pd[166] = -727.4981142098891 * weapons_pd[165];
	weapons_pd[167] = 100. * weapons_pd[165];
	weapons_pd[168] = pow(0.93, x[42]);
	if (errno) in_trouble2("pow",0.93,x[42]);
	weapons_pd[169] = -727.4981131569281 * weapons_pd[168];
	v[0] = weapons_pd[167] * weapons_pd[168];
	v[1] += v[0];
	weapons_pd[170] = pow(0.85, x[23]);
	if (errno) in_trouble2("pow",0.85,x[23]);
	weapons_pd[171] = -727.4980942038205 * weapons_pd[170];
	weapons_pd[172] = 150. * weapons_pd[170];
	weapons_pd[173] = pow(0.92, x[43]);
	if (errno) in_trouble2("pow",0.92,x[43]);
	weapons_pd[174] = -727.4980931508807 * weapons_pd[173];
	v[0] = weapons_pd[172] * weapons_pd[173];
	v[1] += v[0];
	v[1] += -1755.;
	;}

	if (wantfg & 2) {
	g[43] = weapons_pd[172]*weapons_pd[174];
	dv[0] = weapons_pd[173]*150.;
	g[23] = dv[0]*weapons_pd[171];
	g[42] = weapons_pd[167]*weapons_pd[169];
	dv[1] = weapons_pd[168]*100.;
	g[22] = dv[1]*weapons_pd[166];
	g[41] = weapons_pd[162]*weapons_pd[164];
	dv[2] = weapons_pd[163]*weapons_pd[159];
	dv[3] = weapons_pd[163]*weapons_pd[160];
	g[21] = dv[2]*weapons_pd[161];
	dv[3] *= 100.;
	g[5] = dv[3]*weapons_pd[158];
	g[40] = weapons_pd[154]*weapons_pd[156];
	dv[4] = weapons_pd[155]*100.;
	g[20] = dv[4]*weapons_pd[153];
	g[64] = weapons_pd[149]*weapons_pd[151];
	dv[5] = weapons_pd[150]*weapons_pd[146];
	dv[6] = weapons_pd[150]*weapons_pd[147];
	g[50] = dv[5]*weapons_pd[148];
	dv[7] = dv[6]*weapons_pd[143];
	dv[6] *= weapons_pd[144];
	g[39] = dv[7]*weapons_pd[145];
	dv[6] *= 130.;
	g[19] = dv[6]*weapons_pd[142];
	g[63] = weapons_pd[138]*weapons_pd[140];
	dv[8] = weapons_pd[139]*weapons_pd[135];
	dv[9] = weapons_pd[139]*weapons_pd[136];
	g[49] = dv[8]*weapons_pd[137];
	dv[10] = dv[9]*weapons_pd[132];
	dv[9] *= weapons_pd[133];
	g[38] = dv[10]*weapons_pd[134];
	dv[9] *= 200.;
	g[18] = dv[9]*weapons_pd[131];
	g[62] = weapons_pd[127]*weapons_pd[129];
	dv[11] = weapons_pd[128]*weapons_pd[124];
	dv[12] = weapons_pd[128]*weapons_pd[125];
	g[48] = dv[11]*weapons_pd[126];
	dv[13] = dv[12]*weapons_pd[121];
	dv[12] *= weapons_pd[122];
	g[37] = dv[13]*weapons_pd[123];
	dv[12] *= 200.;
	g[17] = dv[12]*weapons_pd[120];
	g[61] = weapons_pd[116]*weapons_pd[118];
	dv[14] = weapons_pd[117]*weapons_pd[113];
	dv[15] = weapons_pd[117]*weapons_pd[114];
	g[47] = dv[14]*weapons_pd[115];
	dv[15] *= 125.;
	g[36] = dv[15]*weapons_pd[112];
	g[60] = weapons_pd[108]*weapons_pd[110];
	dv[16] = weapons_pd[109]*weapons_pd[105];
	dv[17] = weapons_pd[109]*weapons_pd[106];
	g[46] = dv[16]*weapons_pd[107];
	dv[18] = dv[17]*weapons_pd[102];
	dv[17] *= weapons_pd[103];
	g[35] = dv[18]*weapons_pd[104];
	dv[17] *= 45.;
	g[16] = dv[17]*weapons_pd[101];
	g[59] = weapons_pd[97]*weapons_pd[99];
	dv[19] = weapons_pd[98]*weapons_pd[94];
	dv[20] = weapons_pd[98]*weapons_pd[95];
	g[45] = dv[19]*weapons_pd[96];
	dv[20] *= 30.;
	g[34] = dv[20]*weapons_pd[93];
	g[58] = weapons_pd[89]*weapons_pd[91];
	dv[21] = weapons_pd[90]*weapons_pd[86];
	dv[22] = weapons_pd[90]*weapons_pd[87];
	g[44] = dv[21]*weapons_pd[88];
	dv[23] = dv[22]*weapons_pd[83];
	dv[22] *= weapons_pd[84];
	g[33] = dv[23]*weapons_pd[85];
	dv[22] *= 150.;
	g[15] = dv[22]*weapons_pd[82];
	g[32] = weapons_pd[78]*weapons_pd[80];
	dv[24] = weapons_pd[79]*weapons_pd[75];
	dv[25] = weapons_pd[79]*weapons_pd[76];
	g[14] = dv[24]*weapons_pd[77];
	dv[25] *= 25.;
	g[4] = dv[25]*weapons_pd[74];
	g[31] = weapons_pd[70]*weapons_pd[72];
	dv[26] = weapons_pd[71]*weapons_pd[67];
	dv[27] = weapons_pd[71]*weapons_pd[68];
	g[13] = dv[26]*weapons_pd[69];
	dv[27] *= 30.;
	g[3] = dv[27]*weapons_pd[66];
	g[57] = weapons_pd[62]*weapons_pd[64];
	dv[28] = weapons_pd[63]*weapons_pd[59];
	dv[29] = weapons_pd[63]*weapons_pd[60];
	g[30] = dv[28]*weapons_pd[61];
	dv[30] = dv[29]*weapons_pd[56];
	dv[29] *= weapons_pd[57];
	g[12] = dv[30]*weapons_pd[58];
	dv[29] *= 35.;
	g[2] = dv[29]*weapons_pd[55];
	g[56] = weapons_pd[51]*weapons_pd[53];
	dv[31] = weapons_pd[52]*weapons_pd[48];
	dv[32] = weapons_pd[52]*weapons_pd[49];
	g[29] = dv[31]*weapons_pd[50];
	dv[33] = dv[32]*weapons_pd[45];
	dv[32] *= weapons_pd[46];
	g[11] = dv[33]*weapons_pd[47];
	dv[32] *= 60.;
	g[1] = dv[32]*weapons_pd[44];
	g[55] = weapons_pd[40]*weapons_pd[42];
	dv[34] = weapons_pd[41]*weapons_pd[37];
	dv[35] = weapons_pd[41]*weapons_pd[38];
	g[28] = dv[34]*weapons_pd[39];
	dv[35] *= 40.;
	g[10] = dv[35]*weapons_pd[36];
	g[54] = weapons_pd[32]*weapons_pd[34];
	dv[36] = weapons_pd[33]*weapons_pd[29];
	dv[37] = weapons_pd[33]*weapons_pd[30];
	g[27] = dv[36]*weapons_pd[31];
	dv[37] *= 75.;
	g[9] = dv[37]*weapons_pd[28];
	g[53] = weapons_pd[24]*weapons_pd[26];
	dv[38] = weapons_pd[25]*weapons_pd[21];
	dv[39] = weapons_pd[25]*weapons_pd[22];
	g[26] = dv[38]*weapons_pd[23];
	dv[39] *= 50.;
	g[8] = dv[39]*weapons_pd[20];
	g[52] = weapons_pd[16]*weapons_pd[18];
	dv[40] = weapons_pd[17]*weapons_pd[13];
	dv[41] = weapons_pd[17]*weapons_pd[14];
	g[25] = dv[40]*weapons_pd[15];
	dv[42] = dv[41]*weapons_pd[10];
	dv[41] *= weapons_pd[11];
	g[7] = dv[42]*weapons_pd[12];
	dv[41] *= 50.;
	g[0] = dv[41]*weapons_pd[9];
	g[51] = -weapons_pd[5]*weapons_pd[7];
	dv[43] = -weapons_pd[6]*weapons_pd[2];
	dv[44] = -weapons_pd[6]*weapons_pd[3];
	g[24] = dv[43]*weapons_pd[4];
	dv[44] = -dv[44]*60.;
	g[6] = dv[44]*weapons_pd[1];
	}

	return v[1];
}

 void
weapons_ceval_(fint *needfg, real *x, real *c, real *J)
{	real t1;
	fint wantfg = *needfg;
	if (weapons_xcheck(x) && wantfg == 2)
		wantfg = 3;

	if (wantfg & 1) {

  /***  constraint 1  ***/

	t1 = x[0];
	t1 += x[1];
	t1 += x[2];
	t1 += x[3];
	t1 += x[4];
	t1 += x[5];
	c[0] = t1;

  /***  constraint 2  ***/

	t1 = x[6];
	t1 += x[7];
	t1 += x[8];
	t1 += x[9];
	t1 += x[10];
	t1 += x[11];
	t1 += x[12];
	t1 += x[13];
	t1 += x[14];
	t1 += x[15];
	t1 += x[16];
	t1 += x[17];
	t1 += x[18];
	t1 += x[19];
	t1 += x[20];
	t1 += x[21];
	t1 += x[22];
	t1 += x[23];
	c[1] = t1;

  /***  constraint 3  ***/

	t1 = x[24];
	t1 += x[25];
	t1 += x[26];
	t1 += x[27];
	t1 += x[28];
	t1 += x[29];
	t1 += x[30];
	t1 += x[31];
	t1 += x[32];
	t1 += x[33];
	t1 += x[34];
	t1 += x[35];
	t1 += x[36];
	t1 += x[37];
	t1 += x[38];
	t1 += x[39];
	t1 += x[40];
	t1 += x[41];
	t1 += x[42];
	t1 += x[43];
	c[2] = t1;

  /***  constraint 4  ***/

	t1 = x[44];
	t1 += x[45];
	t1 += x[46];
	t1 += x[47];
	t1 += x[48];
	t1 += x[49];
	t1 += x[50];
	c[3] = t1;

  /***  constraint 5  ***/

	t1 = x[51];
	t1 += x[52];
	t1 += x[53];
	t1 += x[54];
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
	c[4] = t1;

  /***  constraint 6  ***/

	t1 = x[6];
	t1 += x[24];
	t1 += x[51];
	c[5] = t1;

  /***  constraint 7  ***/

	t1 = x[1];
	t1 += x[11];
	t1 += x[29];
	t1 += x[56];
	c[6] = t1;

  /***  constraint 8  ***/

	t1 = x[15];
	t1 += x[33];
	t1 += x[44];
	t1 += x[58];
	c[7] = t1;

  /***  constraint 9  ***/

	t1 = x[17];
	t1 += x[37];
	t1 += x[48];
	t1 += x[62];
	c[8] = t1;

  /***  constraint 10  ***/

	t1 = x[18];
	t1 += x[38];
	t1 += x[49];
	t1 += x[63];
	c[9] = t1;

  /***  constraint 11  ***/

	t1 = x[19];
	t1 += x[39];
	t1 += x[50];
	t1 += x[64];
	c[10] = t1;

  /***  constraint 12  ***/

	t1 = x[23];
	t1 += x[43];
	c[11] = t1;
	;}
	if (wantfg & 2) {

   /*** derivatives for constraint 1 ***/

	J[0] = 1.;
	J[1] = 1.;
	J[3] = 1.;
	J[4] = 1.;
	J[5] = 1.;
	J[6] = 1.;

   /*** derivatives for constraint 2 ***/

	J[7] = 1.;
	J[9] = 1.;
	J[10] = 1.;
	J[11] = 1.;
	J[12] = 1.;
	J[13] = 1.;
	J[15] = 1.;
	J[16] = 1.;
	J[17] = 1.;
	J[18] = 1.;
	J[20] = 1.;
	J[21] = 1.;
	J[23] = 1.;
	J[25] = 1.;
	J[27] = 1.;
	J[28] = 1.;
	J[29] = 1.;
	J[30] = 1.;

   /*** derivatives for constraint 3 ***/

	J[32] = 1.;
	J[34] = 1.;
	J[35] = 1.;
	J[36] = 1.;
	J[37] = 1.;
	J[38] = 1.;
	J[40] = 1.;
	J[41] = 1.;
	J[42] = 1.;
	J[43] = 1.;
	J[45] = 1.;
	J[46] = 1.;
	J[47] = 1.;
	J[48] = 1.;
	J[50] = 1.;
	J[52] = 1.;
	J[54] = 1.;
	J[55] = 1.;
	J[56] = 1.;
	J[57] = 1.;

   /*** derivatives for constraint 4 ***/

	J[59] = 1.;
	J[61] = 1.;
	J[62] = 1.;
	J[63] = 1.;
	J[64] = 1.;
	J[66] = 1.;
	J[68] = 1.;

   /*** derivatives for constraint 5 ***/

	J[70] = 1.;
	J[72] = 1.;
	J[73] = 1.;
	J[74] = 1.;
	J[75] = 1.;
	J[76] = 1.;
	J[78] = 1.;
	J[79] = 1.;
	J[81] = 1.;
	J[82] = 1.;
	J[83] = 1.;
	J[84] = 1.;
	J[86] = 1.;
	J[88] = 1.;

   /*** derivatives for constraint 6 ***/

	J[8] = 1.;
	J[33] = 1.;
	J[71] = 1.;

   /*** derivatives for constraint 7 ***/

	J[2] = 1.;
	J[14] = 1.;
	J[39] = 1.;
	J[77] = 1.;

   /*** derivatives for constraint 8 ***/

	J[19] = 1.;
	J[44] = 1.;
	J[60] = 1.;
	J[80] = 1.;

   /*** derivatives for constraint 9 ***/

	J[22] = 1.;
	J[49] = 1.;
	J[65] = 1.;
	J[85] = 1.;

   /*** derivatives for constraint 10 ***/

	J[24] = 1.;
	J[51] = 1.;
	J[67] = 1.;
	J[87] = 1.;

   /*** derivatives for constraint 11 ***/

	J[26] = 1.;
	J[53] = 1.;
	J[69] = 1.;
	J[89] = 1.;

   /*** derivatives for constraint 12 ***/

	J[31] = 1.;
	J[58] = 1.;
	}
}
#ifdef __cplusplus
	}
#endif
