
all: main
    

main.o: main.c
        gcc -c main.c


date.o: date.c date.h
   gcc -c date.c


main: main.o date.o 
    gcc -o main main.o date.o

clean: 
    rm -f "*-o"