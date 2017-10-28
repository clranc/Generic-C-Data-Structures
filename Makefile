# Sample: Make gcc file to test basic Linked List program
#         Modify and extend as you see fit
#

# File Names
SOURCE= Test.c Queue.c LinkedLists.c Customer.c
PROG=    Test
RESULTS= results.txt

# Compiler and Directives
CC:=gcc
CFLAGS:=-Wall -pedantic -g

# Here is where the action occurs
.SILENT:

all: build $(PROG)

clean:
	rm -rf $(RESULTS) $(PROG) *.o

build: $(PROG) 

$(RESULTS): $(PROG)
	./$(PROG) >> $(RESULTS) 2>&1

$(PROG): $(SOURCE)

