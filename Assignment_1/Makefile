
all:
	make main.exe
	./main.exe

main.exe : main.o library_queue.a
	g++ main.o -L. library_queue.a -o main.exe

main.o : main.cpp
	g++ -c main.cpp

library_queue.a : array_queue.o list_queue.o
	ar rcs library_queue.a array_queue.o list_queue.o

array_queue.o : array_queue.cpp
	g++ -c array_queue.cpp

list_queue.o : list_queue.cpp
	g++ -c list_queue.cpp

clean:
	del array_queue.o
	del list_queue.o
	del library_queue.a
	del main.o
	del main.exe