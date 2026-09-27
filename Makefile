CXX ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -O2

SRCS := $(wildcard */*.cpp)
BINS := $(patsubst %.cpp,build/%,$(SRCS))

.PHONY: all test clean

all: $(BINS)

build/%: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $< -o $@

test: all
	@./tests/run_tests.sh

clean:
	rm -rf build
