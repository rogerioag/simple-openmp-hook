CC=gcc
LIB_HOOKOMP_PATH=../..
APP=libgomp-doacross

all: clean main

main:
	cp ${LIB_HOOKOMP_PATH}/libhookgomp.so .

	${CC} -I ${LIB_HOOKOMP_PATH} -fPIC -c prepostfunctions.c
	${CC} -I ${LIB_HOOKOMP_PATH} -fopenmp -c ${APP}.c

	${CC} -L. -Wl,-rpath,. -Wl,-rpath,${LIB_HOOKOMP_PATH} ${APP}.o prepostfunctions.o -o ${APP}.exe -lhookgomp -fopenmp

	@echo "*****Use: ./${APP}.exe   (ou LD_PRELOAD=./libhookgomp.so ./${APP}.exe)"

clean:
	rm -rf *.o *.so *.exe
