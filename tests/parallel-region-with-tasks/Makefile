CC=gcc
CXX=g++
LIB_HOOKOMP_PATH=../..

all: clean main

main: 
	cp ${LIB_HOOKOMP_PATH}/libhookomp.so .
	
	# ${CXX} -L ${LIB_HOOKOMP_PATH} parallel-region-with-tasks.c -o parallel-region-with-tasks.exe -lhookomp -fopenmp -lgomp

	${CC} -I ${LIB_HOOKOMP_PATH} -L ${LIB_HOOKOMP_PATH} -c prepostfunctions.c

	${CC} -I ${LIB_HOOKOMP_PATH} -L ${LIB_HOOKOMP_PATH} -c parallel-region-with-tasks.c -lhookomp -fopenmp
	${CC} -I ${LIB_HOOKOMP_PATH} -L ${LIB_HOOKOMP_PATH} -fdump-tree-ompexp parallel-region-with-tasks.c -fopenmp

	${CC} -I ${LIB_HOOKOMP_PATH} -L ${LIB_HOOKOMP_PATH} -Wl,-rpath,. -Wl,-rpath,${LIB_HOOKOMP_PATH} parallel-region-with-tasks.o prepostfunctions.o -o parallel-region-with-tasks.exe -lhookomp -fopenmp
	
	@echo "*****Use: LD_PRELOAD=./libhookomp.so ./parallel-region-with-tasks.exe"
	
clean:
	rm -rf *.o *.so *.exe

