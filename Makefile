#Makefile

# Compiler
CXX := g++

# Directories
SRC_DIR := src
OBJ_DIR := obj
BIN_DIR := bin

# Source files
SRCS := $(wildcard $(SRC_DIR)/*/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/*/%.cpp, $(OBJ_DIR)/*/%.o, $(SRCS))
TARGET := $(BIN_DIR)/myapp

# Compiler flags
CXXFLAGS := -std=c++11 -Wall

# Linker flags
LDFLAGS :=

# Build target
all: $(TARGET)

$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CXX) $(LDFLAGS) $(SRC_DIR)/main.cpp -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(OBJ_DIR) $(BIN_DIR):
	mkdir -p $@

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all clean ./$(BIN_DIR)/myapp


