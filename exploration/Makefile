CC = gcc
BIN_DIR = bin
SUBDIRS = $(wildcard */)
SUBDIRS := $(filter-out $(BIN_DIR)/, $(SUBDIRS))
C_SOURCES = $(foreach dir, $(SUBDIRS), $(wildcard $(dir)*.c))
EXECUTABLES = $(patsubst %.c, $(BIN_DIR)/%, $(C_SOURCES))

all: $(BIN_DIR) $(EXECUTABLES)

$(BIN_DIR):
	@mkdir -p $@
$(BIN_DIR)/%: %.c
	@mkdir -p $(@D)
	$(CC) $< -o $@

.PHONY: clean

clean:
	@rm -rf $(BIN_DIR)

