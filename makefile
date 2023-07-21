ASM_SOURCES := $(wildcard src/*.asm src/helpers/*.asm)
OBJ_DIR := obj
BIN_DIR := bin
EXECUTABLE := $(BIN_DIR)/func
OBJECTS := $(addprefix $(OBJ_DIR)/, $(notdir $(ASM_SOURCES:.asm=.o)))
VPATH := src:src/helpers

all: $(OBJ_DIR) $(BIN_DIR) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	ld -o $@ $^

$(OBJ_DIR)/%.o: %.asm
	yasm -f elf64 -g dwarf2 $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

debug: $(EXECUTABLE)
	gdb $(EXECUTABLE)

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

fresh: clean all
