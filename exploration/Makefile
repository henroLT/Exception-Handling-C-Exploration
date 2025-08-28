# Compiler
CC = gcc

# Find all .c files in subdirectories (ignore bin/)
SRCS := $(shell find . -mindepth 2 -type f -name "*.c" ! -path "./bin/*")

# Map source files to bin/ equivalents
BINS := $(SRCS:./% = bin/%)
BINS := $(BINS:.c=)

# Default target: build all executables
all: $(BINS)

# Compile each .c directly into bin/
bin/%: %  # % matches the path relative to current dir
	@mkdir -p "$(dir $@)"
	$(CC) -o "$@" "$<"

# Clean up
clean:
	rm -rf bin
