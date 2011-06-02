CFLAGS = -g -O0

oo: main.o
	$(CC) $(CFLAGS) -o $@ main.o

main.o: main.c 
	$(CC) $(CFLAGS) -c -o $@ main.c

clean:
	rm -rf oo *.o
