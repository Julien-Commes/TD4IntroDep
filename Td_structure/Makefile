all: main
    
    main.o: main.c
	    gcc -c main.c

    triangle.o: triangle.c traingle.h
	    gcc -c triangle.c

    point.o: point.c point.h
	    gcc -c point.c

    main.o: point.o triangle.o main.o
        gcc -o main point.o triangle.o main.o
    
    clean: 
        rm -f "*-o"