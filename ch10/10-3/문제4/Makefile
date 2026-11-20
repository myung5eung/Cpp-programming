CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Erase.o
TARGET = umsudel

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Erase.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Erase.o : Erase.cpp Erase.hpp
	$(CX) $(CXFLAGS) -c Erase.cpp

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
