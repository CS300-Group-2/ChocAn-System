#Code for this make file adapted from:
#https://stackoverflow.com/a/14589770
#and
#https://stackoverflow.com/a/14590222

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

