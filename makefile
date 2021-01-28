CC=g++
CFLAGS=-I.
DEPS = csc160.h
OBJ = csc160.o wk2.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

wk2: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)