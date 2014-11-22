CPP = g++
CFLAGS = -Wall -Wextra -Werror


main: main.cc BST.o Node.o list.o
	$(CPP) $(CFLAGS) -o ./bin/bst2dllist $^

BST.o: BST.h BST.cpp
	$(CPP) $(CFLAGS) -c BST.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CFLAGS) -c Node.cpp

list.o: list.h list.cc
	$(CPP) $(CFLAGS) -c list.cc

clean:
	rm -f *.o;