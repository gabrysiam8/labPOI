CXX=g++
CXXFLAGS=-g -c -Wall -Wextra -pedantic
SOURCES=$(wildcard *.cpp)
SOURCESC=$(wildcard *.C)
OBJECTS=$(SOURCES:.cpp=.o)
OBJECTS+=$(SOURCESC:.C=.o)
END_NAME=Products

all: $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(END_NAME)

%.o: %.cpp
	$(CXX) $^ $(CXXFLAGS) -o $@

%.o: %.C
	$(CXX) $^ $(CXXFLAGS) -o $@

clean:
	rm $(OBJECTS) $(END_NAME)

run:
	./$(END_NAME)

val: $(END_NAME)
	valgrind -v ./$(END_NAME)

files:
	~/generator/generator.sh ${arg}