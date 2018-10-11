CX =g++
CXFLAGS =-Wall -g
	$(CX) $(CXFLAGS) main.o ctable.o menu.o -o test
main.o:main.cpp ctable.h menu.h
	$(CX) $(CXFLAGS) -c main.cpp
ctable.o:ctable.h
menu.o:ctable.h