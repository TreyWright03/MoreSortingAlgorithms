TARGETS=sort_test
CXXFLAGS = -std=c++11 -g
CXX=g++
LD=g++
CC=g++

sort_test: sort_test.o main.o builtin.o mergesort.o quicksort.o selectionsort.o insertionsort.o bubblesort.o countingsort.o radixsort.o

clean:
	rm -f *.o $(TARGETS)