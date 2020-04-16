cmake_minimum_required(VERSION 2.8.6)

project(amplsolver C)

# TODO:
# check f9aefe3b2b24bb8c21c6558ef99bfe85540e532b
# With Intel compiler under Windows, Sudden_Underflow is defined ...
# $ cd ${OBJDIR=sys.`uname -m`.`uname -s`}; make
# make[1]: Entering directory '/home/admin/repositories/artelys/knitro/netlibAmplSolver/sys.x86_64.Linux'
# $ gcc -c -O2 -m64 -fPIC -DALLOW_OPENMP -DASL_NO_FPINITMT fpinit.c
# $ gcc -O2 -m64 -fPIC -DALLOW_OPENMP arithchk.c fpinit.o -lm ||\
# $ gcc -DNO_LONG_LONG -O2 -m64 -fPIC -DALLOW_OPENMP arithchk.c fpinit.o -lm ||\
# $ gcc -DNO_SSIZE_T -O2 -m64 -fPIC -DALLOW_OPENMP arithchk.c fpinit.o -lm ||\
# $ gcc -DNO_SSIZE_T -DNO_SSIZE_T -O2 -m64 -fPIC -DALLOW_OPENMP arithchk.c fpinit.o -lm
# $ ./a.out >arith.h
# $ rm -f a.out arithchk.o fpinit.o
# $ cat stdio1.h0 >stdio1.h
# $ sed "s!System_details!`uname -sm`!" details.c0 >details.c

option(AMPL_ENABLE_NLC "Build nlc" ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}
                      ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(ExportTarget ${CMAKE_PROJECT_NAME}-targets CACHE STRING "Name for the export target for ${CMAKE_PROJECT_NAME}")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(BEFORE ${CMAKE_CURRENT_BINARY_DIR})

if (UNIX)
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -fPIC")
endif ()

if (APPLE)
  #set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -arch x86_64 -fPIC")
  # Under Mac, gcc is used
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O2 -m64 -fPIC")
endif ()

if (WIN32)
  add_definitions(-D_CRT_SECURE_NO_WARNINGS)
  if (NOT CMAKE_SIZEOF_VOID_P EQUAL 4)
    add_definitions(-Dstrtoull=_strtoui64)
  endif ()
  add_definitions(-DNo_Control87)
endif ()

set(genarith_SRCS arithchk.c)
if (WIN32)
  set_source_files_properties(arithchk.c PROPERTIES COMPILE_FLAGS "-DNO_FPINIT -DNO_SSIZE_T")
else ()
  list(APPEND genarith_SRCS fpinit.c)
endif ()

add_executable(genarith ${genarith_SRCS})
source_group("Ampl_genarith_SRCS" FILES ${genarith_SRCS})
if (UNIX)
  target_link_libraries(genarith m)
endif()

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/stdio1.h0 ${CMAKE_CURRENT_BINARY_DIR}/stdio1.h)

if (UNIX)
  find_program(UNAME uname)
  if (UNAME)
    execute_process(COMMAND ${UNAME} -sr OUTPUT_VARIABLE System_details)
  endif ()
else ()
  set(System_details "${CMAKE_SYSTEM_NAME}")
endif ()

string(REPLACE "\n" ""  System_details "${System_details}")
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/details.c0.cmake.in ${CMAKE_CURRENT_BINARY_DIR}/details.c)

# If genarith command fails, a zero length arith.h will be generated,
# so remove on failure to cause later build failure
add_custom_target(build_arith_h ALL
                  DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/arith.h
                  DEPENDS genarith) 

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/arith.h
                   COMMAND genarith > ${CMAKE_CURRENT_BINARY_DIR}/arith.h
		   COMMENT "Generating arith.h") 

set(amplsolver_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/asldate.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/atof.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/auxinfo.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/avltree.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/b_search.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/basename.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/bscanf.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/com2eval.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/comeval.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/con1ival.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/con2ival.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/con2val.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/conadj.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/conpval.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/conscale.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/conval.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/degree.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/derprop.c
                    ${CMAKE_CURRENT_BINARY_DIR}/details.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/dtoa1.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/duthes.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/dynlink.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/f_read.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/fg_read.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/fg_write.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/fgh_read.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/fpecatch.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/fpinit.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/fullhes.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/func_add.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/funcadd1.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/g_fmt.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/genrowno.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/getenv.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/getstub.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/htcl.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/indic_cons.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/jac0dim.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/jac2dim.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/jacdim.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/jacinc.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/jacinc1.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/libnamsave.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/mach.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/mainexit.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/mip_pri.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/misc.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/mpec_adj.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/mqpcheckv.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/mypow.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/names.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/nl_obj.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/nqpcheck.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/nqpcheckZ.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/obj2val.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/obj_adj.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/obj_prec.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/objconst.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/objval.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/objval_.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/op_type.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/pfg_read.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/pfghread.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/printf.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/pshvprod.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/punknown.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/qp_read.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/qpcheck.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/qpcheckZ.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/qsortv.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/readsol.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/repwhere.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/rops.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/rops2.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/sigcatch.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/sos_add.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/sphes.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/sscanf.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/stderr.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/studchk0.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/suf_sos.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/value.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/writesol.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/wrtsol_.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/ws_desc.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/wsu_desc.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/x2check.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/xectim.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/xp1known.c
                    ${CMAKE_CURRENT_SOURCE_DIR}/xp2known.c)

add_library(amplsolver ${amplsolver_SRCS})
add_dependencies(amplsolver build_arith_h) 
source_group("ampl_amplsolver_srcs" FILES ${amplsolver_SRCS})

option(AMPL_HAVE_DLOPEN "Toggle support for dlopen in AMPL" OFF)
if (AMPL_HAVE_DLOPEN)
  find_package(DL)
  if (DL_FOUND)
    add_definitions("-DAMPL_HAVE_DLOPEN")
  else ()
    message(WARNING "dlopen requested, but not found")
  endif ()
endif ()

if (UNIX)
  target_link_libraries(amplsolver ${DL_LIBRARY})
  if (CMAKE_C_COMPILER_ID STREQUAL "Intel")
    #target_link_libraries(amplsolver -static-intel)
  endif ()
endif ()

# Set ALLOW_OPENMP flag 
find_package(OpenMP)
if (OPENMP_FOUND)
  if (UNIX)
    if (KNITRO_ENABLE_OPENMP)
      add_definitions(-DALLOW_OPENMP)
    endif ()	
  else ()
    add_definitions(-DALLOW_OPENMP)	
  endif ()
endif ()
# Allow AMPL build to be shared among several source packages
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/AMPLConfig.cmake.in ${CMAKE_CURRENT_BINARY_DIR}/AMPLConfig.cmake)

if (AMPL_ENABLE_NLC)
  include_directories(nlc)
  include_directories(examples)
  set(amplsolver_cport_SRCS examples/cport/d1mach.c
                            examples/cport/da7sst.c
                            examples/cport/dc7vfn.c
                            examples/cport/dd7dgb.c
                            examples/cport/dd7dog.c
                            examples/cport/dd7dup.c
                            examples/cport/dd7mlp.c
                            examples/cport/dd7tpr.c
                            examples/cport/dd7upd.c
                            examples/cport/df7dhb.c
                            examples/cport/df7hes.c
                            examples/cport/dg7itb.c
                            examples/cport/dg7lit.c
                            examples/cport/dg7qsb.c
                            examples/cport/dg7qts.c
                            examples/cport/dh2rfa.c
                            examples/cport/dh2rfg.c
                            examples/cport/ditsum.c
                            examples/cport/divset.c
                            examples/cport/dl7itv.c
                            examples/cport/dl7ivm.c
                            examples/cport/dl7msb.c
                            examples/cport/dl7mst.c
                            examples/cport/dl7nvr.c
                            examples/cport/dl7sqr.c
                            examples/cport/dl7srt.c
                            examples/cport/dl7svn.c
                            examples/cport/dl7svx.c
                            examples/cport/dl7tsq.c
                            examples/cport/dl7tvm.c
                            examples/cport/dl7upd.c
                            examples/cport/dl7vml.c
                            examples/cport/dmngb.c
                            examples/cport/dmnhb.c
                            examples/cport/dn2cvp.c
                            examples/cport/dn2gb.c
                            examples/cport/dn2g.c
                            examples/cport/dn2lrd.c
                            examples/cport/dn2rdp.c
                            examples/cport/do7prd.c
                            examples/cport/dparck.c
                            examples/cport/dq7apl.c
                            examples/cport/dq7rad.c
                            examples/cport/dq7rgs.c
                            examples/cport/dq7rsh.c
                            examples/cport/dr7mdc.c
                            examples/cport/dr7tvm.c
                            examples/cport/drldst.c
                            examples/cport/drmngb.c
                            examples/cport/drmnhb.c
                            examples/cport/drn2gb.c
                            examples/cport/drn2g.c
                            examples/cport/ds7bqn.c
                            examples/cport/ds7dmp.c
                            examples/cport/ds7ipr.c
                            examples/cport/ds7lup.c
                            examples/cport/ds7lvm.c
                            examples/cport/dv2axy.c
                            examples/cport/dv2nrm.c
                            examples/cport/dv7cpy.c
                            examples/cport/dv7dfl.c
                            examples/cport/dv7ipr.c
                            examples/cport/dv7scl.c
                            examples/cport/dv7scp.c
                            examples/cport/dv7shf.c
                            examples/cport/dv7swp.c
                            examples/cport/dv7vmp.c
                            examples/cport/dw7zbf.c
                            examples/cport/i1mach.c
                            examples/cport/i7copy.c
                            examples/cport/i7mdcn.c
                            examples/cport/i7pnvr.c
                            examples/cport/i7shft.c
                            examples/cport/stopx.c)

  set(amplsolver_nlc_SRCS nlc/cops.c
                          nlc/nlc.c)
  
  add_executable(nlc ${amplsolver_nlc_SRCS})
  target_link_libraries(nlc amplsolver m dl)

  add_library(cport STATIC ${amplsolver_cport_SRCS})
  add_library(nlcmisc STATIC nlc/nlcmisc.c
                             examples/rvmsg.c)
  
  #add_executable(mngnlc nlc/ch3.c
  #                      nlc/mngnlc.c)
  #target_link_libraries(mngnlc nlcmisc cport amplsolver f2c m dl)
  #
  #add_executable(nl2nlc nlc/nl2nlc.c
  #                      nlc/ch3.c
  #                      nlc/nlcmisc.c)
  #target_link_libraries(nl2nlc nlcmisc cport amplsolver f2c m dl)
  
  install(TARGETS nlc
          DESTINATION bin)
  
  install(TARGETS nlcmisc
          DESTINATION lib)
  
  install(TARGETS cport
          DESTINATION lib)
endif ()

install(TARGETS amplsolver
        EXPORT ${ExportTarget}
        DESTINATION lib)

install(TARGETS genarith
        EXPORT ${ExportTarget}
        DESTINATION bin)

file(GLOB ampl_headers ${CMAKE_CURRENT_SOURCE_DIR}/*.h ${CMAKE_CURRENT_SOURCE_DIR}/*.hd)

install(FILES ${ampl_headers}
        DESTINATION include/ampl)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/arith.h ${CMAKE_CURRENT_BINARY_DIR}/stdio1.h
        DESTINATION include/ampl)
