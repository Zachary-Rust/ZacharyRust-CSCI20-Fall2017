runexe: valvoline.o manager.o
	g++ valvoline.o manager.o -o runexe
	
valvoline: runexe.cpp
	g++ -g -c runexe.cpp
	
manager: manager.cpp
	g++ -g -c manager.o
	
clean:
	rm *.o runexe