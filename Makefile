all: folder app

INC = -I./inc
CC = arm-linux-gnueabihf-gcc

ARQ = 	gpioInit.o \
	gpioDirection.o \
	gpioValue.o	\
	gpioInterrupt.o	\
	main.o

app: $(ARQ)
	$(CC) obj/main.o obj/gpioInit.o obj/gpioDirection.o obj/gpioValue.o obj/gpioInterrupt.o -o bin/app	 
	
main.o: src/main.c
	$(CC) -o main.o -c $(INC) src/main.c -o obj/main.o

gpioInterrupt.o: src/gpioInterrupt.c
	$(CC) -o gpioInterrupt.o -c $(INC) src/gpioInterrupt.c -o obj/gpioInterrupt.o

gpioValue.o: src/gpioValue.c
	$(CC) -o gpioValue.o -c $(INC) src/gpioValue.c -o obj/gpioValue.o

gpioDirection.o: src/gpioDirection.c
	$(CC) -o gpioDirection.o -c $(INC) src/gpioDirection.c -o obj/gpioDirection.o

gpioInit.o: src/gpioInit.c
	$(CC) -o gpioInit.o -c $(INC) src/gpioInit.c -o obj/gpioInit.o

folder:
	mkdir -p obj bin

clean:
	rm obj/*.o bin/* -d obj/ bin/
