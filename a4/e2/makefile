
#02-11-2019
CC=gcc
CFLAGS=-g -Wall
LFLAGS= 
OBJ:=main.o
EXE=e2exe

all: $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c
	
clean:
	rm *.o e2exe
