CC := gcc
WFLAGS := -Wall
LIBRARIES := -lm

# source files list
SRC = major1.c \
      power.c \
      replace.c \
      reverse.c \
      Palindrome.c

# object file list
OBJ := major1.o \
       power.o \
       replace.o \
       reverse.o \
       Palindrome.o

# default: compile program
default: $(OBJ)
	$(CC) -o binops $(OBJ)$(LIBRARIES)

# object file compilation
%.o: %.c
	$(CC) -c $^ $(WFLAGS) $(LIBRARIES)

# clean directory
clean:
	rm $(OBJ)
	rm binops
