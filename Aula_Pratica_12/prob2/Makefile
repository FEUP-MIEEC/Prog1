all: datas.o programa.c
	clang programa.c datas.o -o programa

datas.o: datas.c datas.h
	clang -c datas.c

clean:
	rm *.o programa *~