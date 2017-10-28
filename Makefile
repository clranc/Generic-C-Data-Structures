# Sample: Make gcc file to test basic Linked List program
#         Modify and extend as you see fit
#

# File Names
SOURCE= TestList.c Queue.c LinkedLists.c Customer.c
PROG=    TestList
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

