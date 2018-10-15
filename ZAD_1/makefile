
test: main.o ctable.o menu.o
	g++ main.o ctable.o menu.o -o test

main.o: main.cpp
	g++ -c main.cpp

ctable.o: ctable.cpp ctable.h
	g++ -c ctable.cpp ctable.h

menu.o: menu.cpp menu.h ctable.cpp
	g++ -c menu.cpp menu.h ctable.cpp

clean:
	rm *.o *.gch test
