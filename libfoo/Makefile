CLANG ?= /usr/bin/clang++-3.9
AR ?= ar

CPP_INCLUDES ?= -I/$(INCLUDEOS_PREFIX)/includeos/api/posix -I/$(INCLUDEOS_PREFIX)/includeos/x86_64/include/libcxx -I/$(INCLUDEOS_PREFIX)/includeos/x86_64/include/newlib -I/$(INCLUDEOS_PREFIX)/includeos/x86_64/include -I/$(INCLUDEOS_PREFIX)/includeos/api -I/$(INCLUDEOS_PREFIX)/includeos/include -I/$(INCLUDEOS_PREFIX)/include 

CPP_FLAGS ?=  $(CPP_INCLUDES) -DARCH_x86_64 -DINCLUDEOS_SINGLE_THREADED -Wall -Wextra -Wno-unused-parameter -nostdlib -m64 -O3 -fno-omit-frame-pointer -stdlib=libc++ -std=c++14 -MMD -D_LIBCPP_HAS_NO_THREADS=1 -mno-red-zone -fstack-protector-strong

all: libfoo.a

foo.o: foo.cpp 
	$(CLANG) $(CPP_FLAGS) -c -o foo.o foo.cpp 

libfoo.a: foo.o
	$(AR) crs libfoo.a foo.o

clean: 
	$(RM) libfoo.a foo.d foo.o
