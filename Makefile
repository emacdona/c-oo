CFLAGS = -g -O0

oo: main.o person.o
	$(CC) $(CFLAGS) -o $@ main.o person.o

main.o: main.c 
	$(CC) $(CFLAGS) -c -o $@ main.c

person.o: person.c person.h
	$(CC) $(CFLAGS) -c -o $@ person.c

clean:
	rm -rf oo *.o
