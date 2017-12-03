
run: run.o user.o
	g++ run.o user.o -o run
	
run.o: run.cpp
	g++ -g -c run.cpp
	
user.o: user.cpp user.h
	g++ -g -c user.cpp
	
clean:
	rm *.o run