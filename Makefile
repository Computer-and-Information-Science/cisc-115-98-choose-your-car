CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: a.out

a.out: main.cpp
	$(CXX) $(CXXFLAGS) -o a.out main.cpp

clean:
	rm -f a.out

.PHONY: all clean
