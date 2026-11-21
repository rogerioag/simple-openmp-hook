CC=gcc
CXX=g++
LIB_HOOKOMP_PATH=$(PWD)

# Funções variádicas (__kmpc_fork_call/teams na libomp, GOMP_doacross_wait na libgomp)
# com mais argumentos do que o switch gerado trata usam libffi. Padrão: liga se a libffi existir.
USE_LIBFFI ?= $(shell pkg-config --exists libffi 2>/dev/null && echo 1 || echo 0)
ifeq ($(USE_LIBFFI),1)
FFI_CFLAGS = -DHOOK_USE_LIBFFI $(shell pkg-config --cflags libffi 2>/dev/null)
FFI_LIBS = $(shell pkg-config --libs libffi 2>/dev/null || echo -lffi)
endif

all: clean info libhookgomp libhookkmpc

# Step 1: Compiling with Position Independent Code
hookgomp.o: hookgomp.c hookgomp.h prepostdef_gomp.h
	${CXX} $(OPTIONS) $(FFI_CFLAGS) -c -Werror -fpic hookgomp.c
	# ${CXX} $(OPTIONS) -c -Werror -Wno-write-strings -fpic prepostfunctions.c

# Step 2: Creating a shared library from an object file
libhookgomp: hookgomp.o
	LD_LIBRARY_PATH=$(PWD):$(LD_LIBRARY_PATH) export LD_LIBRARY_PATH
	${CXX} -L ${LIB_HOOKOMP_PATH} -shared hookgomp.o -ldl $(FFI_LIBS) -o libhookgomp.so

# libomp (LLVM/Clang): interceptação da ABI __kmpc_*
hookkmpc.o: hookkmpc.c hookkmpc.h prepostdef_kmpc.h
	${CC} $(OPTIONS) $(FFI_CFLAGS) -c -Werror -fpic hookkmpc.c

libhookkmpc: hookkmpc.o
	${CC} -shared hookkmpc.o -ldl $(FFI_LIBS) -o libhookkmpc.so

# Step 3: Linking with a shared library
# As you can see, that was actually pretty easy. We have a shared library. 
# Let’s compile our main.c and link it with libfoo. We’ll call our final program “test.” 
# Note that the -lfoo option is not looking for foo.o, but libfoo.so. GCC assumes that all 
# libraries start with ‘lib’ and end with .so or .a (.so is for shared object or shared 
# libraries, and .a is for archive, or statically linked libraries).

clean:
	rm -rf *.o main-test *.so 

info:
	@echo "Use make OPTIONS=\"-DVERBOSE -DDEBUG\" to compile with messages."
	@echo "libffi: USE_LIBFFI=$(USE_LIBFFI) (make USE_LIBFFI=0 compila sem libffi)."

.PHONY: all clean info libhookgomp libhookkmpc
