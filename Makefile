##################################################
# Variables
##################################################

CC = gcc
CFLAGS = -Wall -g -O3

SRC = $(wildcard src/*.c)
OBJ = $(subst src, bin, $(patsubst %.c, %.o, $(SRC)))
INC = include
EXE = bin/main.exe

##################################################
# Rules
##################################################

.PHONY: all
all : $(EXE)

$(EXE) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(addprefix bin/, %.o) : $(addprefix src/, %.c)
	$(CC) $(CFLAGS) -I $(INC) -o $@ -c $<


.PHONY: clean
clean :
	rm -f $(OBJ)

.PHONY: mrproper
mrproper : clean
	rm $(EXE)