TESTALL:clean COMPILE_ALL runtests

COMPILE_ALL:test1 test2

test1:test1.o
	g++ -o test1 test1.o
	
test1.o:test1.cpp 
	g++ -c test1.cpp -I../source
	
test2:test2.o
	g++ -o test2 test2.o
	
test2.o:test2.cpp
	g++ -c test2.cpp -I../source
#doc.o:../source/doc.cpp
#	gcc -c ../doc/doc.cpp -I../source
#	

clean:
	rm *.o

runtests:
	./starttests.sh