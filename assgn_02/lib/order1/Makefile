SHELL := /bin/sh
CC := gcc
CFLAGS := -O2 -g -I.
RM := rm -f

OBJFILES = soln1.o

library: $(OBJFILES)

$(OBJFILES): soln1.h

clean:
	-$(RM) $(OBJFILES)