all: poli.o prob1.c
	clang prob1.c poli.o -o programa

datas.o: poli.c poli.h
	clang -c poli.c

clean:
	rm *.o programa *~
