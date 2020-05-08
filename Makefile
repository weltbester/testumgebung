CXX = g++
CXXFLAGS = -pedantic -Wall -Wwrite-strings -O3 -std=c++2a
DBGFLAGS = -pedantic -Wall -Wwrite-strings -ggdb3 -DDEBUG -std=c++2a
SRCS=$(wildcard *.cpp)
OBJS=$(patsubst %.cpp,%.o,$(SRCS))
DBGOBJS=$(patsubst %.cpp,%.dbg.o,$(SRCS))
.PHONY: clean depend all
all: myProgram myProgram-debug
myProgram: $(OBJS)
	   g++ -o $@ -O3 $(OBJS)
myProgram-debug: $(DBGOBJS)
		 g++ -o $@ -ggdb3 $(DBGOBJS)
%.dbg.o: %.cpp
	 g++ $(DBGFLAGS) -c -o $@ $<
clean:
	rm -f myProgram myProgram-debug *.o *.cpp~ *.hpp~
depend:
	makedepend $(SRCS)
	makedepend -a -o .dbg.o  $(SRCS)
# DO NOT DELETE