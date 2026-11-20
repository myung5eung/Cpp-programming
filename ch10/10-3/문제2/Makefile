CX = g++
CXFLAGS = -g -Wall
OBJS = main.o Maxmin.o
TARGET = MMexe

$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)
main.o : main.cpp Maxmin.hpp
	$(CX) $(CXFLAGS) -c main.cpp
Maxmin.o : Maxmin.cpp Maxmin.hpp
	$(CX) $(CXFLAGS) -c Maxmin.cpp

.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
