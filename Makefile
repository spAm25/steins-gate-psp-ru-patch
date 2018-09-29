CC = g++

CFLAGS_COMMON = -fopenmp -m64 -std=c++17 -fPIC
CFLAGS_DEBUG = $(CFLAGS_COMMON) -O0 -Wall
CFLAGS_RELEASE = $(CFLAGS_COMMON) -Os -w
CFLAGS = $(CFLAGS_DEBUG)

all: build run

build:
	$(CC) $(CFLAGS) topographer.cpp -o topographer.run -lstdc++fs

run:
	./topographer.run
