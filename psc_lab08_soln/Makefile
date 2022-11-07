CC=g++
CFLAGS=--std=c++11
EXE=tictactoe


all: main.o board.o
	$(CC) -o $(EXE) ./obj/*

new: clean all

obj:
	mkdir -p obj

main.o: obj ./src/main.cpp ./inc/main.hpp
	$(CC) -c ./src/main.cpp -o ./obj/main.o

board.o: obj ./src/board.cpp ./inc/board.hpp
	$(CC) -c ./src/board.cpp -o ./obj/board.o
	
clean:
	rm -rf $(EXE) ./obj
