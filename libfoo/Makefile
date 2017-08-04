CLANG ?= /usr/bin/clang++-3.9
AR ?= ar
CPP_FLAGS ?=  -Wall -Wextra -Wno-unused-parameter -nostdlib -m64 -O3 -fno-omit-frame-pointer -stdlib=libc++ -std=c++14 -MMD -D_LIBCPP_HAS_NO_THREADS=1 -mno-red-zone -fstack-protector-strong

#-nostdlibinc  

all: libfoo.a

foo.o: foo.cpp 
	$(CLANG) $(CPP_FLAGS) -c -o foo.o foo.cpp 

libfoo.a: foo.o
	$(AR) crs libfoo.a foo.o

clean: 
	$(RM) libfoo.a foo.d foo.o
