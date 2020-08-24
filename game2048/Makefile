CC=gcc
STD= -std=gnu99
BIN = game.bin
FLAG = -Wall -Werror
OBJ=main.o game2048.o derection.o tools.o

all:$(OBJ)
	$(CC) -o  $(BIN) $(OBJ) 
main.o:main.c game2048.h 
	$(CC) $(STD) $(FLAG) -c main.c
game2048.o:game2048.c game2048.h  tools.h derection.h
	 $(CC) $(STD) $(FLAG) -c game2048.c
derection.o: derection.h derection.c 
	$(CC) $(STD) $(FLAG) -c derection.c

tools.o:tools.c tools.h
	$(CC) $(STD) $(FLAG) -c tools.c
clean:
	rm -rf $(BIN) $(OBJ) 
