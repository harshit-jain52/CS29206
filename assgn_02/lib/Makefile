# Makefile for building static library

# Default variables
SHELL := /bin/sh
CC := gcc
CFLAGS := -O2 -g -I.
RM := rm -f

LIBNAME = librecrel.a

OBJFILES = order1/soln1.o order2/soln2.o order3/soln3.o

all:
	cd order1; make
	cd order2; make
	cd order3; make
	ar rs $(LIBNAME) $(OBJFILES)

clean:
	cd order1; make clean
	cd order2; make clean
	cd order3; make clean

distclean:
	cd order1; make clean
	cd order2; make clean
	cd order3; make clean
	-$(RM) $(LIBNAME)

