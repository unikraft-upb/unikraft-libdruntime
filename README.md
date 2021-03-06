# D runtime for Unikraft

This is the port of the D runtime for Unikraft as external library.    

This library has a number of dependencies, so please make sure you have the following libraries
 added to the `LIBS` variable in your application's Makefile:
* lib-compiler-rt
* lib-libcxx
* lib-libcxxabi
* lib-libucontext
* lib-libunwind
* lib-gcc
* lib-pthread-embedded
* lib-newlib
* lib-lwip
* lib-druntime

### Applications
Applications may be run only in Linux user space. Once you check the `D Runtime Library` option in the configuration menu,
all mandatory dependencies will be automatically selected. For building an application you may choose out of two compilers:
* GDC -> use command `make D_COMPILER=gdc` for building. We provide a *Hello, World!* sample application in the `main.d` source file.
* DMD -betterC -> use command `make D_COMPILER=dmd` for building. We provide a *Hello, World!* sample application that is betterC-compatible in the `betterC_main.d` source file.

### Limitations
1. Running D applications on top of Unikraft requires, besides the D runtime library, support for compilation of D sources. This is not yet supported, but it will soon be upstreamed.
2. There is no support for running D application images on top of KVM or XEN.
3. There is no support for TLS. This has mainly two implications: multi-threaded applications will not properly function; global variables need to be declared by using the `__gshared` keyword, as this forces them to be placed in the bss/data sections.

Please refer to the `README.md` as well as the documentation in the `doc/`
subdirectory of the main unikraft repository.
