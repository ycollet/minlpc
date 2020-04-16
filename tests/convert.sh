#!/bin/bash

# for Files in *.nl; do echo $Files; ../../../../install/bin/nlc -2 $Files > ~/repositories/artelys/Knitro-Color/ampl_instances/`basename $Files .nl`.c; done

for Files in *.c
do
    echo "Files $Files done"
    FN=`basename $Files .c`
    NEWFN=`echo $FN | sed -e "s/-/_/g"`
    
    sed -i -e "s/#include \"math.h\"/#include <math.h>/g" $Files
    sed -i -e "s/#include \"errno.h\"/#include <errno.h>/g" $Files

    sed -i -e "s/auxcom_/`echo $NEWFN`_auxcom_/g" $Files
    sed -i -e "s/funcom_/`echo $NEWFN`_funcom_/g" $Files
    sed -i -e "s/boundc_/`echo $NEWFN`_boundc_/g" $Files
    sed -i -e "s/x0comn_/`echo $NEWFN`_x0comn_/g" $Files
    sed -i -e "s/feval_/`echo $NEWFN`_feval_/g" $Files
    sed -i -e "s/ceval_/`echo $NEWFN`_ceval_/g" $Files
    sed -i -e "s/pd/`echo $NEWFN`_pd/g" $Files
    sed -i -e "s/old_x/`echo $NEWFN`_old_x/g" $Files
    sed -i -e "s/xkind/`echo $NEWFN`_xkind/g" $Files
    sed -i -e "s/xcheck/`echo $NEWFN`_xcheck/g" $Files
done

