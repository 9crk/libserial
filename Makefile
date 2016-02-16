all:
	gcc -c libserial.c
	ar -cr libserial.a libserial.o
	gcc -o serialApp serialApp.c -I./ ./libserial.a
clean:
	rm *.o
	rm *.a

