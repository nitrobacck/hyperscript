UNAME_S = $(shell uname -s)

RM := rm -r -f -rf

CC := clang++
LD = $(CC)

LIB = ./lib
BIN = ./bin

TOMLDIR = $(LIB)/toml

OUT = $(BIN)/hsc.out

CCFLAGS  = -std=gnu++2b
CCFLAGS += -O2 -g
CCFLAGS += -Wall -Werror
CCFLAGS += -Wzero-as-null-pointer-constant
CCFLAGS += -Wpedantic
CCFLAGS += -pedantic
CCFLAGS += -Wno-unused-parameter
CCFLAGS += $(INCFLAGS)

INCFLAGS  = -I./src
INCFLAGS += -I$(TOMLDIR)

LDFLAGS  = -lm -lstdc++

SRC = $(shell find src -name "*.cpp")
OBJ = $(SRC:.cpp=.o)
DEP = $(SRC:.cpp=.d)

-include $(DEP)

%.o: %.cpp
	$(CC) -o $@ -MMD -c $< $(CCFLAGS)

bin:
	mkdir -p $(BIN)

build: bin $(OBJ)
	$(LD) -o $(OUT) $(filter %.o, $^) $(LDFLAGS)

run:
	$(OUT)

test: run clean

all: build test

cleanobj:
	$(RM) $(filter %.o, $(OBJ))

cleandep:
	$(RM) $(filter %.d, $(DEP))

cleanout:
	$(RM) $(OUT)

clean: cleanobj cleandep cleanout

lines: clean
	cloc src