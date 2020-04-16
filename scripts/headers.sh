#!/bin/bash

FILES="tests/telecomsp_nor_sun.c
              tests/hadamard_9.c
	      tests/densitymod.c
	      tests/faclay80.c
	      tests/faclay75.c
	      tests/pb302055.c
	      tests/pb302075.c
	      tests/pb302035.c
	      tests/pb302095.c
	      tests/faclay70.c
	      tests/powerflow2736spr.c
	      tests/pb351575.c
	      tests/pb351595.c
	      tests/pb351535.c
	      tests/pb351555.c
	      tests/transswitch2736spp.c
	      tests/powerflow2736spp.c
	      tests/powerflow2383wpr.c
	      tests/hadamard_8.c
	      tests/milinfract.c
	      tests/faclay60.c
	      tests/transswitch2383wpp.c
	      tests/mbtd.c
	      tests/watercontamination0303.c
	      tests/watercontamination0202.c
	      tests/transswitch2736spr.c
	      tests/telecomsp_metro.c
	      tests/powerflow2383wpp.c
	      tests/telecomsp_njlata.c
	      tests/transswitch2383wpr.c
	      tests/autocorr_bern60-60.c
	      tests/elec200.c
	      tests/saa_2.c
	      tests/autocorr_bern60-45.c
	      tests/telecomsp_pacbell.c
	      tests/arki0023.c
	      tests/autocorr_bern55-55.c
	      tests/autocorr_bern55-41.c
	      tests/autocorr_bern50-50.c"

echo "#ifndef BIG_FILES_H" >  big_files.h
echo "#define BIG_FILES_H" >> big_files.h
echo " " >> big_files.h

for Files in $FILES
do
    FN=`basename $Files .c`
    NEWFN=`echo $FN | sed -e "s/-/_/g"`
    echo "extern fint `echo $NEWFN`_auxcom_[];" >> big_files.h
    echo "extern fint `echo $NEWFN`_funcom_[];" >> big_files.h
    echo "extern real `echo $NEWFN`_boundc_[];" >> big_files.h
    echo "extern real `echo $NEWFN`_x0comn_[];" >> big_files.h
    echo "extern real `echo $NEWFN`_feval_(fint *, fint *, real *, real *);" >> big_files.h
    echo "extern void `echo $NEWFN`_ceval_(fint *, real *, real *, real *);" >> big_files.h
    echo " " >> big_files.h
done

echo "#endif" >> big_files.h
