default:
	g++ -c checker.cpp input.cpp ride.cpp utils.cpp -Wall -Wpedantic -O2
	g++ main.cpp checker.o input.o ride.o utils.o -Wall -Wpedantic -O2 -o codehash2018
	rm checker.o input.o ride.o utils.o

clean:
	rm checker.o input.o ride.o utils.o
