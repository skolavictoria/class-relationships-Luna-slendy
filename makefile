# Makefile
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRCS = src/main.cpp src/Person.cpp src/Student.cpp src/Professor.cpp src/Course.cpp src/Department.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = bin/university_system

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean
