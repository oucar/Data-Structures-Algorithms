playground: playground.o
	g++ playground.o -o playground

playground.o: playground.cpp
	g++ -std=c++11 -c playground.cpp

clean:
	rm *.o
	rm playground

run: playground
	./playground
