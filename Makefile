CC=gcc


objs:bill.c fred.c 
	$(CC) -c bill.c fred.c

all:lib.h bill.o fred.o
	$(CC) -o program program.c bill.o fred.o

clean:
	rm -rf *.o
	rm -f program	
