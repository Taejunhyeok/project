libfuncs.a : menu.o reset.o checkend.o minesum.o draw.o trigger.o
	ar rv libfuncs.a menu.o reset.o checkend.o minesum.o draw.o trigger.o

 

menu.o : menu.c
	gcc -g -c menu.c -I../include

 

reset.o : reset.c
	gcc -g -c reset.c -I../include

 

checkend.o : checkend.c
	gcc -g -c checkend.c -I../include

 

minesum.o : minesum.c
	gcc -g -c minesum.c -I../include

 

draw.o : draw.c
	gcc -g -c draw.c -I../include

 

trigger.o : trigger.c
	gcc -g -c trigger.c -I../include

 

clean :
	rm libfuncs.a menu.o reset.o checkend.o minesum.o draw.o trigger.o
