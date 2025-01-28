
all:
	make main.exe
	./main.exe

main.exe : main.o array_queue.a
	g++ main.o -L. array_queue.a -o main.exe

main.o : main.cpp
	g++ -c main.cpp

array_queue.a : array_queue.o
	ar rcs array_queue.a array_queue.o

array_queue.o : array_queue.cpp
	g++ -c array_queue.cpp

clean:
	del array_queue.o
	del array_queue.a
	del main.o
	del main.exe