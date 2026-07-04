CC = gcc
CFLAGS = -g -Wall -Wextra -std=c99 -ISHA256 -IAES128
TARGET = main

OBJS = Build/SHA256.o Build/AES128.o Build/main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

Build/SHA256.o: SHA256/SHA256.c
	$(CC) $(CFLAGS) -c $< -o $@

Build/AES128.o: AES128/AES128.c
	$(CC) $(CFLAGS) -c $< -o $@

Build/main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f Build/*.o $(TARGET)