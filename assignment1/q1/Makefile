CC = gcc
LDFLAGS = -lm

det4: q1a.o q1b.o q1c.o q1d.o
	$(CC) -o det4 q1a.o q1b.o q1c.o q1d.o $(LDFLAGS)

q1a.o: q1a.c
	$(CC) -c q1a.c

q1b.o: q1b.c
	$(CC) -c q1b.c

q1c.o: q1c.c
	$(CC) -c q1c.c

q1d.o: q1d.c
	$(CC) -c q1d.o

clean:
	rm -f *.o

