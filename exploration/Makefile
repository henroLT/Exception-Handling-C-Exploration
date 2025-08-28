# Compiler
CC = gcc

# Collect all .c files
SRCS = $(wildcard *.c)
# Executable names go into bin/ (same names as source without .c)
BINS = $(patsubst %.c,bin/%,$(SRCS))

# Default target: build all executables
all: $(BINS)

# Rule to build each executable into bin/
bin/%: %.c | bin
	$(CC) -o $@ $<

# Ensure bin directory exists
bin:
	mkdir -p bin

# Clean up
clean:
	rm -rf bin