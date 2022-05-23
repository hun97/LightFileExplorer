# Makefile for Fileserver prober client


CC := g++

CFLAGS := -Wall -O3 -std=c++14 -Wno-psabi
LDFLAGS := -lpthread -ljsoncpp
STATICLDFLAGS := -L./ext_libs


INC_DIR := ./includes/
OBJ_DIR := ./objs
SRC_DIR := ./srcs

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o , $(SRC_FILES))

TARGET := fs_server

all : $(TARGET)

$(TARGET) : $(OBJ_FILES)
		$(CC) -o $@ $^ -I $(INC_DIR) $(LDFLAGS) $(STATICLDFLAGS)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJ_FILES) $(LIB)
