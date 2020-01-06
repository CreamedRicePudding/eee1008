program: main.cpp Sensor.o Person.o
	g++ -std=c++11 -o $@ main.cpp Sensor.o Person.o

Person.o: Person.cpp
	g++ -std=c++11 -o $@ -c Person.cpp

Sensor.o: Sensor.cpp
	g++ -std=c++11 -o $@ -c Sensor.cpp

clean:
	rm -rf *.o
	rm -rf program

cleandata:
	rm -rf *.dat
