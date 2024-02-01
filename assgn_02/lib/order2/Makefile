SHELL := /bin/sh
CC := gcc
CFLAGS := -O2 -g -I.
RM := rm -f

OBJFILES = soln2.o

library: $(OBJFILES)

$(OBJFILES): soln2.h

clean:
	-$(RM) $(OBJFILES)