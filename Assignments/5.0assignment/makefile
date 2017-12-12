runexe: main.o manager.o
	g++ main.o manager.o -o runexe
	
main: main.cpp
	g++ -g -c main.cpp
	
manager: manager.cpp
	g++ -g -c manager.cpp
	
clean:
	rm *.o runexe