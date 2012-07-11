rtpooh:rtpooh.o bear.o engine.o turbo_engine.o pid.o
	g++ -o rtpooh rtpooh.o bear.o engine.o turbo_engine.o pid.o


rtpooh.o:rtpooh.cpp
	g++ -c rtpooh.cpp
	
bear.o:bear.cpp
	g++ -c bear.cpp
	
engine.o:engine.cpp
	g++ -c engine.cpp
	
turbo_engine.o:turbo_engine.cpp
	g++ -c turbo_engine.cpp
	
pid.o:pid.cpp
	g++ -c pid.cpp
	
clean:
	rm *.o
	rm rtpooh

