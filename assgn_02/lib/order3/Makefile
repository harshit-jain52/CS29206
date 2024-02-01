SHELL := /bin/sh
CC := gcc
CFLAGS := -O2 -g -I.
RM := rm -f

OBJFILES = soln3.o

library: $(OBJFILES)

$(OBJFILES): soln3.h

clean:
	-$(RM) $(OBJFILES)