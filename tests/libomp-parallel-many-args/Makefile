CC=clang
LIB_HOOKOMP_PATH=../..
APP=libomp-parallel-many-args

all: clean main

main:
	cp ${LIB_HOOKOMP_PATH}/libhookkmpc.so .

	${CC} -I ${LIB_HOOKOMP_PATH} -fPIC -c prepostfunctions.c
	${CC} -I ${LIB_HOOKOMP_PATH} -fopenmp -c ${APP}.c

	${CC} -L. -Wl,-rpath,. -Wl,-rpath,${LIB_HOOKOMP_PATH} ${APP}.o prepostfunctions.o -o ${APP}.exe -lhookkmpc -fopenmp

	@echo "*****Use: ./${APP}.exe   (ou LD_PRELOAD=./libhookkmpc.so ./${APP}.exe)"

clean:
	rm -rf *.o *.so *.exe
