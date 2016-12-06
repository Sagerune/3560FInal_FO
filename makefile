
CC = g++
CFLAGS = -g

all:
	make build
	make archive

build:
	make count
 
doc:
  doxygen -s -g doc
  doxygen doc
  
game: final.o
	g++ -Wall final.o
	mv a.out count

final.o: final.cc
	g++ -Wall -c final.cc

clean:
	-rm -f *~ *.o core

archive:
	make clean
	tar cvf final.tar makefile *.cc *.h
	gzip final.tar

