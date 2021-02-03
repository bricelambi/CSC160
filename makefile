CC=g++
CFLAGS=-I.
DEPS = csc160.h
OBJ = csc160.o wk2.o hw2.o wk3.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

wk2: $(OBJ)
	$(CC) -o $@ csc160.o wk2.o $(CFLAGS)

wk3: $(OBJ)
	$(CC) -o $@ csc160.o wk3.o $(CFLAGS)

hw2: $(OBJ)
	$(CC) -o $@ csc160.o hw2.o $(CFLAGS)

all: wk2 hw2 wk3

clean:
	rm -f *.o hw2 wk2 wk3
