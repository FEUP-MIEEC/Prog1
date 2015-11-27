all: shop

shop: shopcommunication.o main.c
	gcc shopcommunication.o main.c -L./modbus/lib -lmodbus -I./modbus/include/modbus  -g3 -Wall -lpthread -o sfs

shopcommunication.o: shopcommunication.c
	gcc -c shopcommunication.c -Wall -I./modbus/include/modbus
	
clean: 
	rm -rf *o sfs
	
