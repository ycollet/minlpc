These files are test problems for MINLP converted to C.
The original files come from http://www.minlplib.org/
The nlc compiler comes from https://ampl.com/netlib/ampl/solvers/nlc.tgz.

To compile nlc, these archive where required:
- https://ampl.com/netlib/ampl/solvers/nlc.tgz
- https://ampl.com/netlib/ampl/solvers/examples.tgz
- https://ampl.com/netlib/ampl/solvers.tgz

The resulting C files are compiled into 4 separate libraries:
- libnlc-small.so which contains instances of size below 100ko
- libnlc-medium2.so which contains instances of size between 100ko and 1Mo
- libnlc-medium1.so which contains instances of size between 1Mo and 10 Mo
- libnlc-big.so which contains instances of size above 10 Mo

For libnlc-big.so, the corresponding files in the tests directory are gzipped. You will need to run
```
$ gunzip tests/*.gz
```

Before compiling this library.

All the libraries can be compiled using cmake.
In the minlp directory:
```
$ mkdir build
$ cd build
$ cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_INSTALL_PREFIX=/opt/minlp-devel ..
$ make
$ sudo make install
```

To build the nlc compiler (first install gfortran):
```
$ cd src/f2c/lib
$ make -f makefile.u
$ cd ../../solvers
$ make -f makefile.u
$ cd examples/cport
$ make -f makefile.u
$ cd ..
$ make -f makefile.u
$ cd ../nlc
$ make -f makefile.u
$ make -f makefile.u mngnlc
$ make -f makefile.u nl2nlc
```

How to use nlc:
```
usage: ./nlc [options] file[.nl]
options:
        -1 { produce feval0, ceval0 (function values only) }
        -2 { produce feval, ceval (functions and gradients, default) }
        -3 { produce feval0, ceval0, feval, ceval }
        -4 { produce feval, ceval0 }
        -5 { produce feval0, ceval }
        -d { dense Jacobian }
        -f { Fortran output }
        -i { no derivatives for integer variables }
        -k { K&R C output (default = ANSI C) }
```
