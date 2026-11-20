CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Word.o
TARGET = sajun

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Word.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Word.o : Word.cpp Word.hpp
	$(CX) $(CXFLAGS) -c Word.cpp

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
