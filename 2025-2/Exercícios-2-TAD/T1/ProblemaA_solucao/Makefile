all: main.o conjunto.o
	gcc main.o conjunto.o -o conjunto

main.o: main.c conjunto.h
	gcc -c main.c

conjunto.o: conjunto.c conjunto.h
	gcc -c conjunto.c

teste: conjunto
	./teste.sh

clean:
	rm -f conjunto *.o temp.txt

.PHONY: all teste clean
