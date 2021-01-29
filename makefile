CC=g++
CFLAGS=-I.
DEPS = csc160.h
OBJ = csc160.o wk2.o hw2.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

wk2: $(OBJ)
	$(CC) -o $@ csc160.o wk2.o $(CFLAGS)

hw2: $(OBJ)
	$(CC) -o $@ csc160.o hw2.o $(CFLAGS)

all: wk2 hw2

clean:
	rm -f *.o hw2 wk2
