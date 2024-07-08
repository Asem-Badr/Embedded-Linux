# Variables
CC = gcc
INCS = -I./include
SRC_DIR = src
BIN_DIR = bin
BUILD_DIR = build
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%.o, $(SRC_FILES))
TARGET = $(BUILD_DIR)/app

# Rules
all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(OBJ_FILES) -o $(TARGET)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(INCS) -c $< -o $@

clean:
	rm -rf $(BIN_DIR)/*.o $(BUILD_DIR)/*

.PHONY: all clean
