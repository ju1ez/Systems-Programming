CC=gcc
CFLAGS=-g -Wall
LFLAGS= -g
OBJ:=memo.o main.o calendar.o
EXE=diaryexe

all: $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

memo.o : memo.c
	$(CC) $(CFLAGS) -c memo.c
	
calendar.o : calendar.c
	$(CC) $(CFLAGS) -c calendar.c

main.o : main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm *.o diaryexe
