# NOTE: All indented lines are indented with a tab character.

#CC=gcc
#CFLAGS= -g -Wall
#DFLAGS=
#PROGS= chochan

#all: $(PROGS)

#%: %.c
#	$(CC) $(CFLAGS) $(DFLAGS) $< -o $@ -lm
#
#clean:
#	rm -f $(PROGS) *.o ~*
#
#
CC = g++
CFLAGS = -c -Wall -g -Os
LD = $(CC)
#LDFLAGS = -lfoo

TARGET = ChocAn

SOURCES=$(shell find . -type f -iname '*.c')

OBJECTS=$(foreach x, $(basename $(SOURCES)), $(x).o)

TARGET=bin/ChocAn

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)

