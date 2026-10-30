ABC.exe:main.o file.o
	gcc -o ABC.exe main.o file.o

main.o:main.c
	gcc -c main.c

file.o:file.c
	gcc -c file.c
