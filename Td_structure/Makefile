
all: main
    

main.o: main.c
	gcc -c main.c

date.o: date.c date.h
	gcc -c date.c

personne.o: personne.h personne.c 
	gcc -c personne.c

main: main.o date.o personne.o
	gcc -o main main.o date.o personne.o
	
clean: 
	rm -f *.o
	rm main