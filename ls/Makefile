all: ls

OBJS := main.o
RM := rm -rf
CXX := g++
CXXFLAGS := -g -Wall -Werror -std=c++11
ls := nls

ls: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(ls) $(OBJS)

.PHONY: clean
clean:
	$(RM) $(ls)
	$(RM) $(OBJS)
