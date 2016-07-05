CC=g++
INC=-I../boost/boost_1_61_0/boost_1_61_0/
CFLAGS=-Wall -g $(INC)

all: simple_mult 

simple_mult: simple_mult.cpp ${OBJS} ${HEAD} 
	${CC} -o simple_mult simple_mult.cpp ${OBJS} ${CFLAGS} -lm

${OBJS}: ${HEAD} 

clean:
	rm -rf *.o simple_mult 
