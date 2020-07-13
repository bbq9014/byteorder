all: network

network: main.o
	g++ -o network main.o
	
main.o: net.h main.cpp
	g++ -c -o main.o main.cpp

clean:
	rm -f network *.o
