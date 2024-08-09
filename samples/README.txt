The sample programs can be compiled using following command. 
The Pre-requisites are:

1. Clang compiler
2. Install zoslib library
3. Install boost library

The sample command for compilation is:

clang++ -std=c++11 -o <exename> <filename>.cpp -fzos-le-char-mode=ascii -DZOSLIB_OVERRIDE_CLIB=1 -DZOSLIB_OVERRIDE_CLIB_GETENV=1 -I<boost-header-path> -L<boost-lib-path> -isystem <path-to-zoslib-include> -isystem <path-to-zoslib-include/c++/v1> -include <path-to-zoslib-include/zos-v2r5-symbolfixes.h> -L<path-to-zoslib/lib> -L<path-to-zoslib/libcelquopt.s.o> -lzoslib-supp -lzoslib -l<anyboost-lib>
