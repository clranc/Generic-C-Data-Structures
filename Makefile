# Sample: Make gcc file to test basic Linked List program
#         Modify and extend as you see fit
#
# Revised: Juan C. Cockburn (30/9/2013)

# File Names
SOURCE= TestList.c
PROG=    TestList
RESULTS= results.txt

# Compiler and Directives
CC:=gcc
CFLAGS:=-Wall -ansi -pedantic -g

# Here is where the action occurs
.SILENT:

all: build $(PROG) $(RESULTS)

clean:
	rm -rf $(RESULTS) $(PROG)

build: $(PROG) 

$(RESULTS): $(PROG)
	./$(PROG) >> $(RESULTS) 2>&1

$(PROG): $(SOURCE) LinkedLists.h LinkedLists.c


