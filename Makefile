CFLAGS = -g -O0

oo: main.o person.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c object.h
	$(CC) $(CFLAGS) -c -o $@ $<

person.o: person.c person.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf oo *.o
