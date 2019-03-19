
#02-11-2019
CC=gcc
CFLAGS=-g -Wall
LFLAGS= 
OBJ:=main.o
EXE=e1exe

all: $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

main.o : main.c
	$(CC) $(CFLAGS) -c main.c
	
clean:
	rm *.o e1exe
